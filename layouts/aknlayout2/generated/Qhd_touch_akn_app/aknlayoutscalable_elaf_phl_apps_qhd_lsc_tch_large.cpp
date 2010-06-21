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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008616c };

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
0x1044,	// (0x000871b0) Screen

0x1050,	// (0x000871bc) application_window

0x108c,	// (0x000871f8) area_bottom_pane_ParamLimits

0x108c,	// (0x000871f8) area_bottom_pane

0x10c5,	// (0x00087231) area_top_pane_ParamLimits

0x10c5,	// (0x00087231) area_top_pane

0xb2b8,	// (0x00091424) call_video_uplink_pane_ParamLimits

0xb2b8,	// (0x00091424) call_video_uplink_pane

0x1153,	// (0x000872bf) main_pane_ParamLimits

0x1153,	// (0x000872bf) main_pane

0xb6f2,	// (0x0009185e) context_pane

0x6112,	// (0x0008c27e) navi_pane

0x6144,	// (0x0008c2b0) popup_cale_events_window_ParamLimits

0x6144,	// (0x0008c2b0) popup_cale_events_window

0xb705,	// (0x00091871) popup_mup_playback_window

0x615c,	// (0x0008c2c8) signal_pane

0xeea2,	// (0x0009500e) main_browser_pane

0x1deb,	// (0x00087f57) main_burst_pane

0x5e72,	// (0x0008bfde) main_calc_pane

0xb684,	// (0x000917f0) main_cale_day_pane

0x17e4,	// (0x00087950) main_cale_month_pane

0xb684,	// (0x000917f0) main_cale_week_pane

0x1deb,	// (0x00087f57) main_call_pane

0xeb82,	// (0x00094cee) main_call_poc_pane

0x1deb,	// (0x00087f57) main_camera_pane

0x1deb,	// (0x00087f57) main_chi_dic_pane

0x3a6b,	// (0x00089bd7) main_clock_pane

0xeb82,	// (0x00094cee) main_fmradio_pane

0x1deb,	// (0x00087f57) main_graph_messa_pane

0xeb82,	// (0x00094cee) main_help_pane

0xeea2,	// (0x0009500e) main_im_pane

0xeddd,	// (0x00094f49) main_image_pane_ParamLimits

0xeddd,	// (0x00094f49) main_image_pane

0xeb82,	// (0x00094cee) main_location2_pane

0x1deb,	// (0x00087f57) main_location_pane

0xeddd,	// (0x00094f49) main_messa_pane

0xeb82,	// (0x00094cee) main_mp2_pane

0x1deb,	// (0x00087f57) main_mp_pane

0xeb82,	// (0x00094cee) main_msg_pane

0xeb82,	// (0x00094cee) main_mup_eq_pane

0xeb82,	// (0x00094cee) main_mup_pane

0xeea2,	// (0x0009500e) main_notes_pane

0xeb82,	// (0x00094cee) main_pec_pane

0xeb82,	// (0x00094cee) main_phob_pane

0xeb82,	// (0x00094cee) main_pinb_pane

0xeb82,	// (0x00094cee) main_postcard_pane

0xeb82,	// (0x00094cee) main_qdial_pane

0x1deb,	// (0x00087f57) main_skin_pane

0xeb82,	// (0x00094cee) main_smil2_pane

0x1deb,	// (0x00087f57) main_smil_pane

0x1deb,	// (0x00087f57) main_video_pane

0x1deb,	// (0x00087f57) main_video_tele_pane

0xeddd,	// (0x00094f49) main_viewer_pane_ParamLimits

0xeddd,	// (0x00094f49) main_viewer_pane

0x1deb,	// (0x00087f57) main_vorec_pane

0x5ec6,	// (0x0008c032) popup_blid_sat_info_window_ParamLimits

0x5ec6,	// (0x0008c032) popup_blid_sat_info_window

0x5f1e,	// (0x0008c08a) popup_dyc_status_message_window_ParamLimits

0x5f1e,	// (0x0008c08a) popup_dyc_status_message_window

0x5f38,	// (0x0008c0a4) popup_grid_large_graphic_window_ParamLimits

0x5f38,	// (0x0008c0a4) popup_grid_large_graphic_window

0x5ff4,	// (0x0008c160) popup_loc_request_window_ParamLimits

0x5ff4,	// (0x0008c160) popup_loc_request_window

0x60ea,	// (0x0008c256) popup_wml_address_window_ParamLimits

0x60ea,	// (0x0008c256) popup_wml_address_window

0x5cac,	// (0x0008be18) call_muted_g1

0x4be0,	// (0x0008ad4c) popup_call_audio_conf_window_ParamLimits

0x4be0,	// (0x0008ad4c) popup_call_audio_conf_window

0x5cc0,	// (0x0008be2c) popup_call_audio_first_window_ParamLimits

0x5cc0,	// (0x0008be2c) popup_call_audio_first_window

0x5d36,	// (0x0008bea2) popup_call_audio_in_window_ParamLimits

0x5d36,	// (0x0008bea2) popup_call_audio_in_window

0x5d72,	// (0x0008bede) popup_call_audio_out_window_ParamLimits

0x5d72,	// (0x0008bede) popup_call_audio_out_window

0x5dac,	// (0x0008bf18) popup_call_audio_second_window_ParamLimits

0x5dac,	// (0x0008bf18) popup_call_audio_second_window

0x5e02,	// (0x0008bf6e) popup_call_audio_wait_window_ParamLimits

0x5e02,	// (0x0008bf6e) popup_call_audio_wait_window

0x5e37,	// (0x0008bfa3) popup_number_entry_window_ParamLimits

0x5e37,	// (0x0008bfa3) popup_number_entry_window

0xe76f,	// (0x000948db) bg_popup_call_pane_cp05_ParamLimits

0xe76f,	// (0x000948db) bg_popup_call_pane_cp05

0xe78f,	// (0x000948fb) popup_number_entry_window_t1

0xe7a2,	// (0x0009490e) popup_number_entry_window_t2

0xe7b4,	// (0x00094920) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00095232) popup_number_entry_window_t

0xe7c6,	// (0x00094932) text_title_cp2

0xe7d9,	// (0x00094945) bg_popup_call_pane_cp_ParamLimits

0xe7d9,	// (0x00094945) bg_popup_call_pane_cp

0xe7e7,	// (0x00094953) call_thumbnail_pane

0xe7ef,	// (0x0009495b) popup_call_audio_in_window_g1_ParamLimits

0xe7ef,	// (0x0009495b) popup_call_audio_in_window_g1

0xe7fb,	// (0x00094967) popup_call_audio_in_window_g2_ParamLimits

0xe7fb,	// (0x00094967) popup_call_audio_in_window_g2

0xe807,	// (0x00094973) popup_call_audio_in_window_g3_ParamLimits

0xe807,	// (0x00094973) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0009523b) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0009523b) popup_call_audio_in_window_g

0xe813,	// (0x0009497f) popup_call_audio_in_window_t1_ParamLimits

0xe813,	// (0x0009497f) popup_call_audio_in_window_t1

0xe82f,	// (0x0009499b) popup_call_audio_in_window_t2_ParamLimits

0xe82f,	// (0x0009499b) popup_call_audio_in_window_t2

0xe84b,	// (0x000949b7) popup_call_audio_in_window_t3_ParamLimits

0xe84b,	// (0x000949b7) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00095242) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00095242) popup_call_audio_in_window_t

0xe7d9,	// (0x00094945) bg_popup_call_pane_cp01_ParamLimits

0xe7d9,	// (0x00094945) bg_popup_call_pane_cp01

0xe7e7,	// (0x00094953) call_thumbnail_pane_cp02

0xe85e,	// (0x000949ca) call_type_pane_cp022

0xe866,	// (0x000949d2) popup_call_audio_out_window_g1_ParamLimits

0xe866,	// (0x000949d2) popup_call_audio_out_window_g1

0xe878,	// (0x000949e4) popup_call_audio_out_window_g2_ParamLimits

0xe878,	// (0x000949e4) popup_call_audio_out_window_g2

0xe884,	// (0x000949f0) popup_call_audio_out_window_g3_ParamLimits

0xe884,	// (0x000949f0) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00095249) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00095249) popup_call_audio_out_window_g

0xe896,	// (0x00094a02) popup_call_audio_out_window_t1_ParamLimits

0xe896,	// (0x00094a02) popup_call_audio_out_window_t1

0xe8ae,	// (0x00094a1a) popup_call_audio_out_window_t2_ParamLimits

0xe8ae,	// (0x00094a1a) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00095250) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00095250) popup_call_audio_out_window_t

0xe8c3,	// (0x00094a2f) bg_popup_call_pane_ParamLimits

0xe8c3,	// (0x00094a2f) bg_popup_call_pane

0x130f,	// (0x0008747b) call_thumbnail_pane_cp_ParamLimits

0x130f,	// (0x0008747b) call_thumbnail_pane_cp

0xe947,	// (0x00094ab3) call_type_pane_cp01_ParamLimits

0xe947,	// (0x00094ab3) call_type_pane_cp01

0xe98b,	// (0x00094af7) popup_call_audio_first_window_g1_ParamLimits

0xe98b,	// (0x00094af7) popup_call_audio_first_window_g1

0xe9d7,	// (0x00094b43) popup_call_audio_first_window_g2_ParamLimits

0xe9d7,	// (0x00094b43) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00095255) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00095255) popup_call_audio_first_window_g

0xea1b,	// (0x00094b87) popup_call_audio_first_window_t1_ParamLimits

0xea1b,	// (0x00094b87) popup_call_audio_first_window_t1

0xeac7,	// (0x00094c33) popup_call_audio_first_window_t4_ParamLimits

0xeac7,	// (0x00094c33) popup_call_audio_first_window_t4

0xeb53,	// (0x00094cbf) popup_call_audio_first_window_t5_ParamLimits

0xeb53,	// (0x00094cbf) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0009525a) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0009525a) popup_call_audio_first_window_t

0xeb82,	// (0x00094cee) bg_popup_call_pane_cp02

0xeb8c,	// (0x00094cf8) call_type_pane_cp023

0xeb94,	// (0x00094d00) popup_call_audio_wait_window_g1

0xeb9c,	// (0x00094d08) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00095261) popup_call_audio_wait_window_g

0xeba4,	// (0x00094d10) popup_call_audio_wait_window_t3

0xebb2,	// (0x00094d1e) bg_popup_call_pane_cp03_ParamLimits

0xebb2,	// (0x00094d1e) bg_popup_call_pane_cp03

0xec12,	// (0x00094d7e) call_thumbnail_pane_cp011_ParamLimits

0xec12,	// (0x00094d7e) call_thumbnail_pane_cp011

0xec1e,	// (0x00094d8a) call_type_pane_cp034_ParamLimits

0xec1e,	// (0x00094d8a) call_type_pane_cp034

0xec5a,	// (0x00094dc6) popup_call_audio_second_window_g1_ParamLimits

0xec5a,	// (0x00094dc6) popup_call_audio_second_window_g1

0xec96,	// (0x00094e02) popup_call_audio_second_window_g2_ParamLimits

0xec96,	// (0x00094e02) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00095266) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00095266) popup_call_audio_second_window_g

0xecd2,	// (0x00094e3e) popup_call_audio_second_window_t1_ParamLimits

0xecd2,	// (0x00094e3e) popup_call_audio_second_window_t1

0xed53,	// (0x00094ebf) popup_call_audio_second_window_t2_ParamLimits

0xed53,	// (0x00094ebf) popup_call_audio_second_window_t2

0xed89,	// (0x00094ef5) popup_call_audio_second_window_t3_ParamLimits

0xed89,	// (0x00094ef5) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0009526b) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0009526b) popup_call_audio_second_window_t

0xeb82,	// (0x00094cee) bg_popup_call_pane_cp04

0xedbf,	// (0x00094f2b) list_conf_pane

0xedc7,	// (0x00094f33) popup_call_audio_conf_window_t1

0xedd5,	// (0x00094f41) call_thumbnail_pane_g1

0xeddd,	// (0x00094f49) bg_pinb_pane_ParamLimits

0xeddd,	// (0x00094f49) bg_pinb_pane

0xedeb,	// (0x00094f57) find_pinb_pane

0xedf4,	// (0x00094f60) listscroll_pinb_pane_ParamLimits

0xedf4,	// (0x00094f60) listscroll_pinb_pane

0xee03,	// (0x00094f6f) pinb_bg_pane_g1

0x1333,	// (0x0008749f) pinb_bg_pane_g2

0x133f,	// (0x000874ab) pinb_bg_pane_g3

0x134b,	// (0x000874b7) pinb_bg_pane_g4

0x1357,	// (0x000874c3) pinb_bg_pane_g5

0x1363,	// (0x000874cf) pinb_bg_pane_g6

0x136e,	// (0x000874da) pinb_bg_pane_g7

0x1379,	// (0x000874e5) pinb_bg_pane_g8

0x1384,	// (0x000874f0) pinb_bg_pane_g9

0x138e,	// (0x000874fa) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00095272) pinb_bg_pane_g

0x13ab,	// (0x00087517) grid_pinb_pane

0x13b4,	// (0x00087520) list_pinb_pane

0x13bd,	// (0x00087529) scroll_pane_cp01_ParamLimits

0x13bd,	// (0x00087529) scroll_pane_cp01

0xee0d,	// (0x00094f79) find_pinb_pane_g1_ParamLimits

0xee0d,	// (0x00094f79) find_pinb_pane_g1

0xee25,	// (0x00094f91) find_pinb_pane_t1

0xee37,	// (0x00094fa3) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0009528c) find_pinb_pane_t

0xee4c,	// (0x00094fb8) input_focus_pane_cp01_ParamLimits

0xee4c,	// (0x00094fb8) input_focus_pane_cp01

0x13cf,	// (0x0008753b) cell_pinb_pane_ParamLimits

0x13cf,	// (0x0008753b) cell_pinb_pane

0x13f8,	// (0x00087564) cell_pinb_pane_g1_ParamLimits

0x13f8,	// (0x00087564) cell_pinb_pane_g1

0x1408,	// (0x00087574) cell_pinb_pane_g2_ParamLimits

0x1408,	// (0x00087574) cell_pinb_pane_g2

0xee58,	// (0x00094fc4) cell_pinb_pane_g3_ParamLimits

0xee58,	// (0x00094fc4) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00095291) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00095291) cell_pinb_pane_g

0xeb82,	// (0x00094cee) grid_highlight_pane_cp01

0x1414,	// (0x00087580) list_pinb_item_pane_ParamLimits

0x1414,	// (0x00087580) list_pinb_item_pane

0xeb82,	// (0x00094cee) list_highlight_pane_cp02

0x1426,	// (0x00087592) list_pinb_item_pane_g1_ParamLimits

0x1426,	// (0x00087592) list_pinb_item_pane_g1

0x1433,	// (0x0008759f) list_pinb_item_pane_g2_ParamLimits

0x1433,	// (0x0008759f) list_pinb_item_pane_g2

0x143f,	// (0x000875ab) list_pinb_item_pane_g3_ParamLimits

0x143f,	// (0x000875ab) list_pinb_item_pane_g3

0x1450,	// (0x000875bc) list_pinb_item_pane_g4_ParamLimits

0x1450,	// (0x000875bc) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00095298) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00095298) list_pinb_item_pane_g

0x145c,	// (0x000875c8) list_pinb_item_pane_t1_ParamLimits

0x145c,	// (0x000875c8) list_pinb_item_pane_t1

0x1491,	// (0x000875fd) calc_display_pane

0x14b6,	// (0x00087622) calc_paper_pane

0x14d9,	// (0x00087645) grid_calc_pane

0xeb82,	// (0x00094cee) bg_list_pane_cp01

0x1507,	// (0x00087673) clock_g1

0x150f,	// (0x0008767b) clock_g2

0x0001,

0xf135,	// (0x000952a1) clock_g

0x1517,	// (0x00087683) clock_t1_ParamLimits

0x1517,	// (0x00087683) clock_t1

0x152c,	// (0x00087698) clock_t2_ParamLimits

0x152c,	// (0x00087698) clock_t2

0x153e,	// (0x000876aa) clock_t3_ParamLimits

0x153e,	// (0x000876aa) clock_t3

0x1550,	// (0x000876bc) clock_t4_ParamLimits

0x1550,	// (0x000876bc) clock_t4

0x1562,	// (0x000876ce) clock_t5_ParamLimits

0x1562,	// (0x000876ce) clock_t5

0x1577,	// (0x000876e3) clock_t6_ParamLimits

0x1577,	// (0x000876e3) clock_t6

0x1589,	// (0x000876f5) clock_t7_ParamLimits

0x1589,	// (0x000876f5) clock_t7

0x159b,	// (0x00087707) clock_t8_ParamLimits

0x159b,	// (0x00087707) clock_t8

0x15af,	// (0x0008771b) clock_t9_ParamLimits

0x15af,	// (0x0008771b) clock_t9

0x0008,

0xf13a,	// (0x000952a6) clock_t_ParamLimits

0xf13a,	// (0x000952a6) clock_t

0xee64,	// (0x00094fd0) popup_clock_analogue_window_cp02

0xee64,	// (0x00094fd0) popup_clock_digital_window_cp01

0xee6c,	// (0x00094fd8) listscroll_help_pane

0xeb82,	// (0x00094cee) phob_pre_status_pane

0xee76,	// (0x00094fe2) grid_qdial_pane

0xeddd,	// (0x00094f49) listscroll_mce_pane

0xeddd,	// (0x00094f49) bg_notes_pane

0xee80,	// (0x00094fec) list_notes_pane

0x15c3,	// (0x0008772f) scroll_pane_cp06

0xee8e,	// (0x00094ffa) bg_calc_paper_pane

0xb2de,	// (0x0009144a) list_calc_pane

0xeea2,	// (0x0009500e) bg_calc_display_pane

0x15d7,	// (0x00087743) calc_display_pane_t1

0x15ec,	// (0x00087758) calc_display_pane_t2

0xb2f8,	// (0x00091464) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000952b9) calc_display_pane_t

0x1601,	// (0x0008776d) cell_calc_pane_ParamLimits

0x1601,	// (0x0008776d) cell_calc_pane

0xeeae,	// (0x0009501a) bg_calc_paper_pane_g1

0xeeba,	// (0x00095026) bg_calc_paper_pane_g2

0xeec6,	// (0x00095032) bg_calc_paper_pane_g3

0xeed2,	// (0x0009503e) bg_calc_paper_pane_g4

0xeede,	// (0x0009504a) bg_calc_paper_pane_g5

0x1636,	// (0x000877a2) bg_calc_paper_pane_g6

0x1645,	// (0x000877b1) bg_calc_paper_pane_g7

0x1654,	// (0x000877c0) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000952c0) bg_calc_paper_pane_g

0x1667,	// (0x000877d3) calc_bg_paper_pane_g9

0x167a,	// (0x000877e6) list_calc_item_pane_ParamLimits

0x167a,	// (0x000877e6) list_calc_item_pane

0xeeea,	// (0x00095056) list_calc_item_pane_g1

0xb30a,	// (0x00091476) list_calc_item_pane_t1_ParamLimits

0xb30a,	// (0x00091476) list_calc_item_pane_t1

0x1692,	// (0x000877fe) list_calc_item_pane_t2_ParamLimits

0x1692,	// (0x000877fe) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000952d1) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000952d1) list_calc_item_pane_t

0xeef7,	// (0x00095063) cell_calc_pane_g1

0xef01,	// (0x0009506d) grid_highlight_pane_cp02

0xef23,	// (0x0009508f) bg_calc_display_pane_g1

0x16c4,	// (0x00087830) bg_calc_display_pane_g2

0x16ce,	// (0x0008783a) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000952db) bg_calc_display_pane_g

0x16d7,	// (0x00087843) cell_qdial_pane_ParamLimits

0x16d7,	// (0x00087843) cell_qdial_pane

0x16eb,	// (0x00087857) cell_qdial_pane_g1_ParamLimits

0x16eb,	// (0x00087857) cell_qdial_pane_g1

0x1701,	// (0x0008786d) cell_qdial_pane_g2_ParamLimits

0x1701,	// (0x0008786d) cell_qdial_pane_g2

0xef2c,	// (0x00095098) cell_qdial_pane_g3_ParamLimits

0xef2c,	// (0x00095098) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000952e2) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000952e2) cell_qdial_pane_g

0x1728,	// (0x00087894) cell_qdial_pane_t1_ParamLimits

0x1728,	// (0x00087894) cell_qdial_pane_t1

0x1740,	// (0x000878ac) cell_qdial_pane_t2_ParamLimits

0x1740,	// (0x000878ac) cell_qdial_pane_t2

0x1753,	// (0x000878bf) cell_qdial_pane_t3_ParamLimits

0x1753,	// (0x000878bf) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000952eb) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000952eb) cell_qdial_pane_t

0xeb82,	// (0x00094cee) grid_highlight_pane_cp04

0xef38,	// (0x000950a4) thumbnail_qdial_pane_ParamLimits

0xef38,	// (0x000950a4) thumbnail_qdial_pane

0x1786,	// (0x000878f2) list_help_pane

0x178f,	// (0x000878fb) scroll_pane_cp02

0x1798,	// (0x00087904) help_list_pane_t1_ParamLimits

0x1798,	// (0x00087904) help_list_pane_t1

0xb31c,	// (0x00091488) bg_notes_pane_g2

0xb324,	// (0x00091490) bg_notes_pane_g3

0xb32c,	// (0x00091498) notes_bg_pane_g1

0xb334,	// (0x000914a0) notes_bg_pane_g4

0xb33c,	// (0x000914a8) notes_bg_pane_g5

0xb344,	// (0x000914b0) notes_bg_pane_g6

0xb34c,	// (0x000914b8) notes_bg_pane_g7

0xb354,	// (0x000914c0) notes_bg_pane_g8

0xb35c,	// (0x000914c8) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00095309) notes_bg_pane_g

0x17b5,	// (0x00087921) list_notes_text_pane_ParamLimits

0x17b5,	// (0x00087921) list_notes_text_pane

0x17ca,	// (0x00087936) list_notes_text_pane_g1

0x01ac,	// (0x00086318) list_notes_text_pane_t1

0x17e4,	// (0x00087950) listscroll_cale_week_pane

0x1819,	// (0x00087985) bg_cale_heading_pane

0x1831,	// (0x0008799d) bg_cale_pane_cp01

0x184e,	// (0x000879ba) cale_week_corner_pane

0x186d,	// (0x000879d9) cale_week_day_heading_pane

0x188a,	// (0x000879f6) cale_week_scroll_pane_g1

0x189d,	// (0x00087a09) cale_week_scroll_pane_g2

0x18b5,	// (0x00087a21) cale_week_scroll_pane_g3

0x18cd,	// (0x00087a39) cale_week_scroll_pane_g4

0x18e5,	// (0x00087a51) cale_week_scroll_pane_g5

0x1905,	// (0x00087a71) cale_week_scroll_pane_g6

0x1925,	// (0x00087a91) cale_week_scroll_pane_g7

0x1945,	// (0x00087ab1) cale_week_scroll_pane_g8

0x1969,	// (0x00087ad5) cale_week_scroll_pane_g9

0x1981,	// (0x00087aed) cale_week_scroll_pane_g10

0x1999,	// (0x00087b05) cale_week_scroll_pane_g11

0x19b1,	// (0x00087b1d) cale_week_scroll_pane_g12

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g13

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g14

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00095318) cale_week_scroll_pane_g

0x1a05,	// (0x00087b71) cale_week_time_pane

0x1a29,	// (0x00087b95) grid_cale_week_pane

0x1a61,	// (0x00087bcd) scroll_pane_cp08

0x1a7e,	// (0x00087bea) cell_cale_week_pane_ParamLimits

0x1a7e,	// (0x00087bea) cell_cale_week_pane

0x1b0c,	// (0x00087c78) cale_week_day_heading_pane_t1

0x1b36,	// (0x00087ca2) cale_week_day_heading_pane_t2

0x1b65,	// (0x00087cd1) cale_week_day_heading_pane_t3

0x1b94,	// (0x00087d00) cale_week_day_heading_pane_t4

0x1bc3,	// (0x00087d2f) cale_week_day_heading_pane_t5

0x1bfa,	// (0x00087d66) cale_week_day_heading_pane_t6

0x1c31,	// (0x00087d9d) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00095339) cale_week_day_heading_pane_t

0x1c5b,	// (0x00087dc7) bg_cale_side_pane

0x1c69,	// (0x00087dd5) cale_week_time_pane_t1

0x1c83,	// (0x00087def) cale_week_time_pane_t2

0x1c9d,	// (0x00087e09) cale_week_time_pane_t3

0x1cb7,	// (0x00087e23) cale_week_time_pane_t4

0x1cd1,	// (0x00087e3d) cale_week_time_pane_t5

0x1ceb,	// (0x00087e57) cale_week_time_pane_t6

0x1d05,	// (0x00087e71) cale_week_time_pane_t7

0x1d1f,	// (0x00087e8b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00095348) cale_week_time_pane_t

0x1d39,	// (0x00087ea5) cell_cale_week_pane_g2

0x1d58,	// (0x00087ec4) cell_cale_week_pane_g3_ParamLimits

0x1d58,	// (0x00087ec4) cell_cale_week_pane_g3

0x1d70,	// (0x00087edc) grid_highlight_pane_cp07

0x1d78,	// (0x00087ee4) listscroll_gms_pane

0x1d82,	// (0x00087eee) grid_gms_pane

0x1d8b,	// (0x00087ef7) listscroll_gms_pane_g1

0x1d93,	// (0x00087eff) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00095359) listscroll_gms_pane_g

0x1d9b,	// (0x00087f07) scroll_pane_cp010

0x1da6,	// (0x00087f12) cell_gms_pane_ParamLimits

0x1da6,	// (0x00087f12) cell_gms_pane

0x1db9,	// (0x00087f25) cell_gms_pane_g1

0x1dc1,	// (0x00087f2d) cell_gms_pane_g2

0x1dc9,	// (0x00087f35) cell_gms_pane_g3

0x1dd2,	// (0x00087f3e) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0009535e) cell_gms_pane_g

0x1ddb,	// (0x00087f47) grid_highlight_pane_cp09

0x5c56,	// (0x0008bdc2) phob_pre_status_pane_g1

0x5c5e,	// (0x0008bdca) phob_pre_status_pane_g2

0x5c66,	// (0x0008bdd2) phob_pre_status_pane_g3

0x5c6e,	// (0x0008bdda) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x00095749) phob_pre_status_pane_g

0x5c7e,	// (0x0008bdea) phob_pre_status_pane_t1

0x5c8c,	// (0x0008bdf8) phob_pre_status_pane_t2

0x5c9c,	// (0x0008be08) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x00095754) phob_pre_status_pane_t

0x1deb,	// (0x00087f57) bg_list_pane_cp05

0x1df3,	// (0x00087f5f) grid_vorec_pane

0x1dfb,	// (0x00087f67) vorec_t1

0x1e09,	// (0x00087f75) vorec_t2

0x1e17,	// (0x00087f83) vorec_t3

0x1e25,	// (0x00087f91) vorec_t4

0xb226,	// (0x00091392) vorec_t5

0xb234,	// (0x000913a0) vorec_t6

0x0004,

0xf1fb,	// (0x00095367) vorec_t

0xb242,	// (0x000913ae) wait_bar_pane_cp01

0x1e41,	// (0x00087fad) cell_vorec_pane_ParamLimits

0x1e41,	// (0x00087fad) cell_vorec_pane

0xb364,	// (0x000914d0) cell_vorec_pane_g1

0xeb82,	// (0x00094cee) grid_highlight_pane_cp05

0x1e69,	// (0x00087fd5) cams_zoom_pane

0x1e78,	// (0x00087fe4) image_vga_pane

0x1e92,	// (0x00087ffe) main_camera_pane_g1

0x1ea4,	// (0x00088010) main_camera_pane_g2

0x1eb4,	// (0x00088020) main_camera_pane_g3

0x1ec4,	// (0x00088030) main_camera_pane_g4

0x1ed4,	// (0x00088040) main_camera_pane_g5

0x1ee4,	// (0x00088050) main_camera_pane_g6

0x1ef6,	// (0x00088062) main_camera_pane_g7

0x0007,

0xf206,	// (0x00095372) main_camera_pane_g

0x1f12,	// (0x0008807e) main_camera_pane_t1

0x1f28,	// (0x00088094) main_camera_pane_t2

0x0001,

0xf217,	// (0x00095383) main_camera_pane_t

0x1f62,	// (0x000880ce) cams_zoom_pane_cp_ParamLimits

0x1f62,	// (0x000880ce) cams_zoom_pane_cp

0x1f8a,	// (0x000880f6) image_cif_pane_ParamLimits

0x1f8a,	// (0x000880f6) image_cif_pane

0x1fc0,	// (0x0008812c) image_subqcif_pane

0x1fc8,	// (0x00088134) main_video_pane_g1_ParamLimits

0x1fc8,	// (0x00088134) main_video_pane_g1

0x1fec,	// (0x00088158) main_video_pane_g2_ParamLimits

0x1fec,	// (0x00088158) main_video_pane_g2

0x2020,	// (0x0008818c) main_video_pane_g3_ParamLimits

0x2020,	// (0x0008818c) main_video_pane_g3

0x204e,	// (0x000881ba) main_video_pane_g4_ParamLimits

0x204e,	// (0x000881ba) main_video_pane_g4

0x207c,	// (0x000881e8) main_video_pane_g5_ParamLimits

0x207c,	// (0x000881e8) main_video_pane_g5

0x2094,	// (0x00088200) main_video_pane_g6_ParamLimits

0x2094,	// (0x00088200) main_video_pane_g6

0x0006,

0xf21c,	// (0x00095388) main_video_pane_g_ParamLimits

0xf21c,	// (0x00095388) main_video_pane_g

0x20bf,	// (0x0008822b) main_video_pane_t1_ParamLimits

0x20bf,	// (0x0008822b) main_video_pane_t1

0x2108,	// (0x00088274) cams_zoom_pane_g1

0x2111,	// (0x0008827d) cams_zoom_pane_g2

0x211a,	// (0x00088286) cams_zoom_pane_g3

0x2123,	// (0x0008828f) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00095397) cams_zoom_pane_g

0x2140,	// (0x000882ac) grid_cams_pane

0x215a,	// (0x000882c6) linegrid_cams_pane

0x216e,	// (0x000882da) cell_cams_pane_ParamLimits

0x216e,	// (0x000882da) cell_cams_pane

0x218e,	// (0x000882fa) cams_burst_image_pane

0x2196,	// (0x00088302) cell_cams_pane_g1

0xeb82,	// (0x00094cee) grid_highlight_pane_cp03

0xeef7,	// (0x00095063) mp_bg_pane_g1

0xeb82,	// (0x00094cee) bg_list_pane_cp03

0xb5a9,	// (0x00091715) bg_mp_pane

0xb5b1,	// (0x0009171d) grid_mp_pane

0xb5b9,	// (0x00091725) media_player_g1

0xb5c1,	// (0x0009172d) media_player_t1

0xb5cf,	// (0x0009173b) media_player_t2

0xb5dd,	// (0x00091749) media_player_t3

0xb5eb,	// (0x00091757) media_player_t4

0xb5f9,	// (0x00091765) media_player_t5

0xb607,	// (0x00091773) media_player_t6

0xb615,	// (0x00091781) media_player_t7

0x0006,

0xf5c7,	// (0x00095733) media_player_t

0xb623,	// (0x0009178f) wait_bar_pane_cp02

0xf5ac,	// (0x00095718) main_usb_pane_t

0x5c4d,	// (0x0008bdb9) cell_mp_pane

0xeef7,	// (0x00095063) cell_mp_pane_g1

0xeb82,	// (0x00094cee) grid_highlight_pane_cp06

0x21b6,	// (0x00088322) grid_skin_colour_pane

0x21be,	// (0x0008832a) list_highlight_pane_cp03

0x21c6,	// (0x00088332) skin_g1

0x21ce,	// (0x0008833a) skin_t1

0x21dd,	// (0x00088349) skin_t2

0x0001,

0xf260,	// (0x000953cc) skin_t

0x21eb,	// (0x00088357) cell_skin_colour_pane_ParamLimits

0x21eb,	// (0x00088357) cell_skin_colour_pane

0x220b,	// (0x00088377) cell_skin_colour_pane_g1

0x2276,	// (0x000883e2) call_video_g1_ParamLimits

0x2276,	// (0x000883e2) call_video_g1

0x2292,	// (0x000883fe) call_video_g2_ParamLimits

0x2292,	// (0x000883fe) call_video_g2

0x0001,

0xf265,	// (0x000953d1) call_video_g_ParamLimits

0xf265,	// (0x000953d1) call_video_g

0x22e4,	// (0x00088450) call_video_uplink_pane_cp1_ParamLimits

0x22e4,	// (0x00088450) call_video_uplink_pane_cp1

0x2349,	// (0x000884b5) call_video_uplink_pane_cp2

0x238b,	// (0x000884f7) video_down_crop_pane_ParamLimits

0x238b,	// (0x000884f7) video_down_crop_pane

0x2482,	// (0x000885ee) video_down_pane_ParamLimits

0x2482,	// (0x000885ee) video_down_pane

0x2579,	// (0x000886e5) video_down_subqcif_pane_ParamLimits

0x2579,	// (0x000886e5) video_down_subqcif_pane

0x2591,	// (0x000886fd) video_down_subqcif_pane_cp_ParamLimits

0x2591,	// (0x000886fd) video_down_subqcif_pane_cp

0x25d0,	// (0x0008873c) im_reading_pane_ParamLimits

0x25d0,	// (0x0008873c) im_reading_pane

0x25e2,	// (0x0008874e) im_writing_pane_ParamLimits

0x25e2,	// (0x0008874e) im_writing_pane

0x2600,	// (0x0008876c) im_reading_pane_t1

0x2639,	// (0x000887a5) list_im_pane

0x264a,	// (0x000887b6) scroll_pane_cp07

0x2663,	// (0x000887cf) im_writing_pane_t1_ParamLimits

0x2663,	// (0x000887cf) im_writing_pane_t1

0x2678,	// (0x000887e4) im_writing_pane_t2_ParamLimits

0x2678,	// (0x000887e4) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000953db) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000953db) im_writing_pane_t

0xeb82,	// (0x00094cee) input_focus_pane_cp04

0xeb82,	// (0x00094cee) input_focus_pane_cp05

0x2695,	// (0x00088801) list_im_single_pane_ParamLimits

0x2695,	// (0x00088801) list_im_single_pane

0x26a9,	// (0x00088815) list_single_im_pane_t1

0x5c0d,	// (0x0008bd79) blid_accuracy_pane

0x5c15,	// (0x0008bd81) blid_compass_pane

0x5c1f,	// (0x0008bd8b) main_location_t1

0x5c2f,	// (0x0008bd9b) main_location_t2

0x5c3f,	// (0x0008bdab) main_location_t3

0x0002,

0xf5d6,	// (0x00095742) main_location_t

0xeb82,	// (0x00094cee) aid_levels_location

0xeef7,	// (0x00095063) blid_accuracy_pane_g1

0xeef7,	// (0x00095063) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0009543d) blid_accuracy_pane_g

0x26e3,	// (0x0008884f) wml_content_pane

0x2721,	// (0x0008888d) wml_button_pane_ParamLimits

0x2721,	// (0x0008888d) wml_button_pane

0x2735,	// (0x000888a1) wml_list_single_large_pane_ParamLimits

0x2735,	// (0x000888a1) wml_list_single_large_pane

0x274a,	// (0x000888b6) wml_list_single_medium_pane_ParamLimits

0x274a,	// (0x000888b6) wml_list_single_medium_pane

0x2760,	// (0x000888cc) wml_list_single_small_pane_ParamLimits

0x2760,	// (0x000888cc) wml_list_single_small_pane

0x2778,	// (0x000888e4) wml_selection_box_pane_ParamLimits

0x2778,	// (0x000888e4) wml_selection_box_pane

0x278b,	// (0x000888f7) wml_list_single_pane_t1

0x279a,	// (0x00088906) wml_list_single_medium_pane_t1

0x27a9,	// (0x00088915) wml_list_single_large_pane_t1

0x27b8,	// (0x00088924) input_focus_pane_cp02_ParamLimits

0x27b8,	// (0x00088924) input_focus_pane_cp02

0x27cb,	// (0x00088937) wml_selection_box_pane_g1

0x27d4,	// (0x00088940) wml_selection_box_pane_t1_ParamLimits

0x27d4,	// (0x00088940) wml_selection_box_pane_t1

0xeddd,	// (0x00094f49) bg_wml_button_pane_ParamLimits

0xeddd,	// (0x00094f49) bg_wml_button_pane

0x27ec,	// (0x00088958) wml_button_pane_g1

0x27f4,	// (0x00088960) wml_button_pane_t1

0x27ec,	// (0x00088958) wml_button_bg_pane_g1

0x2804,	// (0x00088970) wml_button_bg_pane_g2

0x280c,	// (0x00088978) wml_button_bg_pane_g3

0x2814,	// (0x00088980) wml_button_bg_pane_g4

0x281c,	// (0x00088988) wml_button_bg_pane_g5

0x2824,	// (0x00088990) wml_button_bg_pane_g6

0x282c,	// (0x00088998) wml_button_bg_pane_g7

0x2834,	// (0x000889a0) wml_button_bg_pane_g8

0x283c,	// (0x000889a8) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000953e0) wml_button_bg_pane_g

0x2844,	// (0x000889b0) bg_list_pane_cp02

0x284c,	// (0x000889b8) mce_header_pane_ParamLimits

0x284c,	// (0x000889b8) mce_header_pane

0x2862,	// (0x000889ce) mce_icon_pane

0x2862,	// (0x000889ce) mce_image_pane

0x286b,	// (0x000889d7) mce_text_pane_ParamLimits

0x286b,	// (0x000889d7) mce_text_pane

0x287e,	// (0x000889ea) scroll_pane_cp03

0x2719,	// (0x00088885) scroll_pane_cp04

0x2888,	// (0x000889f4) scroll_pane_cp05_ParamLimits

0x2888,	// (0x000889f4) scroll_pane_cp05

0x2894,	// (0x00088a00) mce_header_field_pane_ParamLimits

0x2894,	// (0x00088a00) mce_header_field_pane

0x28ab,	// (0x00088a17) mce_header_field_pane_2_ParamLimits

0x28ab,	// (0x00088a17) mce_header_field_pane_2

0x28c1,	// (0x00088a2d) mce_header_field_pane_3

0x28c9,	// (0x00088a35) list_single_mce_message_pane_ParamLimits

0x28c9,	// (0x00088a35) list_single_mce_message_pane

0x28de,	// (0x00088a4a) list_single_mce_smart_pane_ParamLimits

0x28de,	// (0x00088a4a) list_single_mce_smart_pane

0x28fe,	// (0x00088a6a) input_focus_pane_cp03

0x2907,	// (0x00088a73) list_header_data_pane

0x290f,	// (0x00088a7b) mce_header_field_pane_t1

0x291f,	// (0x00088a8b) list_single_mce_header_pane_ParamLimits

0x291f,	// (0x00088a8b) list_single_mce_header_pane

0x2933,	// (0x00088a9f) list_single_mce_header_pane_t1

0x2942,	// (0x00088aae) list_single_mce_message_pane_g1

0x294a,	// (0x00088ab6) list_single_mce_message_pane_t1

0x297e,	// (0x00088aea) bg_cale_heading_pane_cp01_ParamLimits

0x297e,	// (0x00088aea) bg_cale_heading_pane_cp01

0x29b8,	// (0x00088b24) bg_cale_pane_cp02_ParamLimits

0x29b8,	// (0x00088b24) bg_cale_pane_cp02

0x29e5,	// (0x00088b51) cale_month_corner_pane

0x2a04,	// (0x00088b70) cale_month_day_heading_pane_ParamLimits

0x2a04,	// (0x00088b70) cale_month_day_heading_pane

0x2a56,	// (0x00088bc2) cale_month_pane_g1_ParamLimits

0x2a56,	// (0x00088bc2) cale_month_pane_g1

0x2a85,	// (0x00088bf1) cale_month_pane_g2_ParamLimits

0x2a85,	// (0x00088bf1) cale_month_pane_g2

0x2ab5,	// (0x00088c21) cale_month_pane_g3_ParamLimits

0x2ab5,	// (0x00088c21) cale_month_pane_g3

0x2af1,	// (0x00088c5d) cale_month_pane_g4_ParamLimits

0x2af1,	// (0x00088c5d) cale_month_pane_g4

0x2b2d,	// (0x00088c99) cale_month_pane_g5_ParamLimits

0x2b2d,	// (0x00088c99) cale_month_pane_g5

0x2b75,	// (0x00088ce1) cale_month_pane_g6_ParamLimits

0x2b75,	// (0x00088ce1) cale_month_pane_g6

0x2bc1,	// (0x00088d2d) cale_month_pane_g7_ParamLimits

0x2bc1,	// (0x00088d2d) cale_month_pane_g7

0x2c15,	// (0x00088d81) cale_month_pane_g8_ParamLimits

0x2c15,	// (0x00088d81) cale_month_pane_g8

0x2c69,	// (0x00088dd5) cale_month_pane_g9_ParamLimits

0x2c69,	// (0x00088dd5) cale_month_pane_g9

0x2cbb,	// (0x00088e27) cale_month_pane_g10_ParamLimits

0x2cbb,	// (0x00088e27) cale_month_pane_g10

0x2d0d,	// (0x00088e79) cale_month_pane_g11_ParamLimits

0x2d0d,	// (0x00088e79) cale_month_pane_g11

0x2d5f,	// (0x00088ecb) cale_month_pane_g12_ParamLimits

0x2d5f,	// (0x00088ecb) cale_month_pane_g12

0x2db1,	// (0x00088f1d) cale_month_pane_g13_ParamLimits

0x2db1,	// (0x00088f1d) cale_month_pane_g13

0x000c,

0xf287,	// (0x000953f3) cale_month_pane_g_ParamLimits

0xf287,	// (0x000953f3) cale_month_pane_g

0x2e15,	// (0x00088f81) cale_month_week_pane

0x2e39,	// (0x00088fa5) grid_cale_month_pane_ParamLimits

0x2e39,	// (0x00088fa5) grid_cale_month_pane

0x2e82,	// (0x00088fee) cale_month_day_heading_pane_t1

0x2f08,	// (0x00089074) cale_month_day_heading_pane_t2

0x2f81,	// (0x000890ed) cale_month_day_heading_pane_t3

0x2ffa,	// (0x00089166) cale_month_day_heading_pane_t4

0x307b,	// (0x000891e7) cale_month_day_heading_pane_t5

0x3104,	// (0x00089270) cale_month_day_heading_pane_t6

0x318d,	// (0x000892f9) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0009540e) cale_month_day_heading_pane_t

0x1c5b,	// (0x00087dc7) bg_cale_side_pane_cp01

0x321e,	// (0x0008938a) cale_month_week_pane_t1

0x3237,	// (0x000893a3) cale_month_week_pane_t2

0x3250,	// (0x000893bc) cale_month_week_pane_t3

0x3269,	// (0x000893d5) cale_month_week_pane_t4

0x3282,	// (0x000893ee) cale_month_week_pane_t5

0x329b,	// (0x00089407) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0009541d) cale_month_week_pane_t

0x32b4,	// (0x00089420) cell_cale_month_pane_ParamLimits

0x32b4,	// (0x00089420) cell_cale_month_pane

0xb36e,	// (0x000914da) cell_cale_month_pane_g1

0x33e2,	// (0x0008954e) cell_cale_month_pane_t1_ParamLimits

0x33e2,	// (0x0008954e) cell_cale_month_pane_t1

0x1d70,	// (0x00087edc) grid_highlight_pane_cp08

0xeef7,	// (0x00095063) main_smil_g1

0x340e,	// (0x0008957a) smil_status_pane

0x3417,	// (0x00089583) smil_text_pane

0xb4c9,	// (0x00091635) bg_popup_call3_rect_pane_g8

0xb4d1,	// (0x0009163d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000956d6) bg_popup_call3_rect_pane_g

0xb76c,	// (0x000918d8) smil_status_volume_pane_g1

0x342b,	// (0x00089597) smil_status_pane_t1

0xb79f,	// (0x0009190b) volume_smil_pane

0x3442,	// (0x000895ae) list_smil_text_pane

0x344c,	// (0x000895b8) scroll_pane_cp011

0x3457,	// (0x000895c3) smil_text_list_pane_t1_ParamLimits

0x3457,	// (0x000895c3) smil_text_list_pane_t1

0xb37a,	// (0x000914e6) aid_volume_smil_ParamLimits

0xb37a,	// (0x000914e6) aid_volume_smil

0xeef7,	// (0x00095063) smil_volume_pane_g1

0xeef7,	// (0x00095063) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0009543d) smil_volume_pane_g

0x17e4,	// (0x00087950) listscroll_cale_day_pane

0x3493,	// (0x000895ff) bg_cale_pane

0x34ab,	// (0x00089617) list_cale_pane

0x34ce,	// (0x0008963a) scroll_pane_cp09

0x34df,	// (0x0008964b) cale_bg_pane_g1

0x34e7,	// (0x00089653) cale_bg_pane_g2

0x34ef,	// (0x0008965b) cale_bg_pane_g3

0x34f7,	// (0x00089663) cale_bg_pane_g4

0x34ff,	// (0x0008966b) cale_bg_pane_g5

0x3507,	// (0x00089673) cale_bg_pane_g6

0x350f,	// (0x0008967b) cale_bg_pane_g7

0x3517,	// (0x00089683) cale_bg_pane_g8

0x351f,	// (0x0008968b) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00095442) cale_bg_pane_g

0x352f,	// (0x0008969b) list_cale_time_pane_ParamLimits

0x352f,	// (0x0008969b) list_cale_time_pane

0x3544,	// (0x000896b0) list_cale_time_pane_g1_ParamLimits

0x3544,	// (0x000896b0) list_cale_time_pane_g1

0x3550,	// (0x000896bc) list_cale_time_pane_g2_ParamLimits

0x3550,	// (0x000896bc) list_cale_time_pane_g2

0x355d,	// (0x000896c9) list_cale_time_pane_g3_ParamLimits

0x355d,	// (0x000896c9) list_cale_time_pane_g3

0x356b,	// (0x000896d7) list_cale_time_pane_g4_ParamLimits

0x356b,	// (0x000896d7) list_cale_time_pane_g4

0x3579,	// (0x000896e5) list_cale_time_pane_g5_ParamLimits

0x3579,	// (0x000896e5) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00095455) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00095455) list_cale_time_pane_g

0x3594,	// (0x00089700) list_cale_time_pane_t1_ParamLimits

0x3594,	// (0x00089700) list_cale_time_pane_t1

0x35bc,	// (0x00089728) list_cale_time_pane_t2_ParamLimits

0x35bc,	// (0x00089728) list_cale_time_pane_t2

0x3c86,	// (0x00089df2) aid_blid_cardinal_pane

0x3cd0,	// (0x00089e3c) compass_pane_t4

0x35e4,	// (0x00089750) list_cale_time_pane_t4_ParamLimits

0x35e4,	// (0x00089750) list_cale_time_pane_t4

0x3cde,	// (0x00089e4a) compass_pane_t5

0x3cec,	// (0x00089e58) compass_pane_t6

0x3cfa,	// (0x00089e66) compass_pane_t7

0x3d90,	// (0x00089efc) navi_pane_cc_t1

0x3faf,	// (0x0008a11b) aid_phob_thumbnail_center_pane

0x45eb,	// (0x0008a757) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00095462) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00095462) list_cale_time_pane_t

0xe7d9,	// (0x00094945) bg_popup_window_pane_cp02_ParamLimits

0xe7d9,	// (0x00094945) bg_popup_window_pane_cp02

0x360c,	// (0x00089778) heading_pane_cp01_ParamLimits

0x360c,	// (0x00089778) heading_pane_cp01

0x3618,	// (0x00089784) loc_req_pane_ParamLimits

0x3618,	// (0x00089784) loc_req_pane

0x3628,	// (0x00089794) loc_type_pane_ParamLimits

0x3628,	// (0x00089794) loc_type_pane

0x363a,	// (0x000897a6) loc_type_pane_t1_ParamLimits

0x363a,	// (0x000897a6) loc_type_pane_t1

0x364c,	// (0x000897b8) loc_type_pane_t2_ParamLimits

0x364c,	// (0x000897b8) loc_type_pane_t2

0x365e,	// (0x000897ca) loc_type_pane_t3_ParamLimits

0x365e,	// (0x000897ca) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00095469) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00095469) loc_type_pane_t

0x3670,	// (0x000897dc) list_loc_req_pane

0x367a,	// (0x000897e6) scroll_pane_cp012

0x3685,	// (0x000897f1) list_single_loc_request_popup_menu_pane_ParamLimits

0x3685,	// (0x000897f1) list_single_loc_request_popup_menu_pane

0x3692,	// (0x000897fe) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3692,	// (0x000897fe) list_single_loc_request_popup_menu_pane_g1

0x369e,	// (0x0008980a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x369e,	// (0x0008980a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00095470) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00095470) list_single_loc_request_popup_menu_pane_g

0x36aa,	// (0x00089816) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x36aa,	// (0x00089816) list_single_loc_request_popup_menu_pane_t1

0xeddd,	// (0x00094f49) bg_popup_window_pane_cp03_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_window_pane_cp03

0x36c0,	// (0x0008982c) heading_loc_req_pane_ParamLimits

0x36c0,	// (0x0008982c) heading_loc_req_pane

0x36cc,	// (0x00089838) popup_dyc_status_message_window_g1_ParamLimits

0x36cc,	// (0x00089838) popup_dyc_status_message_window_g1

0x36e0,	// (0x0008984c) popup_dyc_status_message_window_t1_ParamLimits

0x36e0,	// (0x0008984c) popup_dyc_status_message_window_t1

0x36f5,	// (0x00089861) popup_dyc_status_message_window_t2_ParamLimits

0x36f5,	// (0x00089861) popup_dyc_status_message_window_t2

0x370a,	// (0x00089876) popup_dyc_status_message_window_t3_ParamLimits

0x370a,	// (0x00089876) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00095475) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00095475) popup_dyc_status_message_window_t

0xeb82,	// (0x00094cee) bg_heading_pane_cp01

0x3726,	// (0x00089892) heading_loc_req_pane_g1

0x372e,	// (0x0008989a) heading_loc_req_pane_g2

0x3736,	// (0x000898a2) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0009547c) heading_loc_req_pane_g

0x373e,	// (0x000898aa) heading_loc_req_pane_t1

0x3759,	// (0x000898c5) bg_popup_sub_pane_cp01_ParamLimits

0x3759,	// (0x000898c5) bg_popup_sub_pane_cp01

0x3767,	// (0x000898d3) popup_cale_events_window_g1_ParamLimits

0x3767,	// (0x000898d3) popup_cale_events_window_g1

0x3787,	// (0x000898f3) popup_cale_events_window_g2_ParamLimits

0x3787,	// (0x000898f3) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000954b0) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000954b0) popup_cale_events_window_g

0x37a7,	// (0x00089913) popup_cale_events_window_t1_ParamLimits

0x37a7,	// (0x00089913) popup_cale_events_window_t1

0x37b9,	// (0x00089925) popup_cale_events_window_t2_ParamLimits

0x37b9,	// (0x00089925) popup_cale_events_window_t2

0x37f7,	// (0x00089963) popup_cale_events_window_t3_ParamLimits

0x37f7,	// (0x00089963) popup_cale_events_window_t3

0x3831,	// (0x0008999d) popup_cale_events_window_t4_ParamLimits

0x3831,	// (0x0008999d) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000954b5) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000954b5) popup_cale_events_window_t

0x3867,	// (0x000899d3) call_type_pane

0x3877,	// (0x000899e3) popup_call_status_window_g1

0x388b,	// (0x000899f7) popup_call_status_window_g2

0x389f,	// (0x00089a0b) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000954be) popup_call_status_window_g

0x38ae,	// (0x00089a1a) call_type_pane_g1

0x38b7,	// (0x00089a23) call_type_pane_g2

0x0001,

0xf359,	// (0x000954c5) call_type_pane_g

0xeb82,	// (0x00094cee) bg_popup_sub_pane_cp02

0x38c0,	// (0x00089a2c) listscroll_popup_wml_pane

0x38c8,	// (0x00089a34) list_wml_pane

0x38d2,	// (0x00089a3e) scroll_pane_cp013

0x38dd,	// (0x00089a49) list_single_graphic_popup_wml_pane_ParamLimits

0x38dd,	// (0x00089a49) list_single_graphic_popup_wml_pane

0xeef7,	// (0x00095063) list_single_graphic_popup_wml_pane_g1

0x38f1,	// (0x00089a5d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000954ca) list_single_graphic_popup_wml_pane_g

0x38f9,	// (0x00089a65) list_single_graphic_popup_wml_pane_t1

0x390f,	// (0x00089a7b) aid_call_pane

0xedd5,	// (0x00094f41) popup_clock_analogue_window_g1

0xedd5,	// (0x00094f41) popup_clock_analogue_window_g2

0xb3a8,	// (0x00091514) popup_clock_analogue_window_g3

0xb3a8,	// (0x00091514) popup_clock_analogue_window_g4

0xeef7,	// (0x00095063) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000954cf) popup_clock_analogue_window_g

0xb3b0,	// (0x0009151c) popup_clock_analogue_window_t1

0xb3be,	// (0x0009152a) clock_digital_number_pane_ParamLimits

0xb3be,	// (0x0009152a) clock_digital_number_pane

0xb3ca,	// (0x00091536) clock_digital_number_pane_cp02_ParamLimits

0xb3ca,	// (0x00091536) clock_digital_number_pane_cp02

0xb3d6,	// (0x00091542) clock_digital_number_pane_cp03_ParamLimits

0xb3d6,	// (0x00091542) clock_digital_number_pane_cp03

0xb3e2,	// (0x0009154e) clock_digital_number_pane_cp04_ParamLimits

0xb3e2,	// (0x0009154e) clock_digital_number_pane_cp04

0xb3f2,	// (0x0009155e) clock_digital_separator_pane_ParamLimits

0xb3f2,	// (0x0009155e) clock_digital_separator_pane

0xb3fe,	// (0x0009156a) popup_clock_digital_window_t1

0xeef7,	// (0x00095063) clock_digital_number_pane_g1

0xeef7,	// (0x00095063) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0009543d) clock_digital_number_pane_g

0xeef7,	// (0x00095063) clock_digital_separator_pane_g1

0xeef7,	// (0x00095063) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0009543d) clock_digital_separator_pane_g

0xeb82,	// (0x00094cee) bg_popup_window_pane_cp04

0x3917,	// (0x00089a83) heading_pane_cp03

0x391f,	// (0x00089a8b) listscroll_popup_gms_pane

0x3927,	// (0x00089a93) grid_large_graphic_popup_pane

0x3931,	// (0x00089a9d) listscroll_popup_gms_pane_g1

0x3939,	// (0x00089aa5) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000954da) listscroll_popup_gms_pane_g

0x2719,	// (0x00088885) scroll_pane_cp014

0x3941,	// (0x00089aad) cell_large_graphic_popup_pane_ParamLimits

0x3941,	// (0x00089aad) cell_large_graphic_popup_pane

0x3959,	// (0x00089ac5) cell_large_graphic_popup_pane_g1_ParamLimits

0x3959,	// (0x00089ac5) cell_large_graphic_popup_pane_g1

0x3965,	// (0x00089ad1) cell_large_graphic_popup_pane_g2_ParamLimits

0x3965,	// (0x00089ad1) cell_large_graphic_popup_pane_g2

0x3971,	// (0x00089add) cell_large_graphic_popup_pane_g3_ParamLimits

0x3971,	// (0x00089add) cell_large_graphic_popup_pane_g3

0x397e,	// (0x00089aea) cell_large_graphic_popup_pane_g4_ParamLimits

0x397e,	// (0x00089aea) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000954df) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000954df) cell_large_graphic_popup_pane_g

0x398e,	// (0x00089afa) grid_highlight_pane_cp010

0xeef7,	// (0x00095063) bg_popup_call_pane_g1

0x3998,	// (0x00089b04) list_single_graphic_popup_conf_pane_ParamLimits

0x3998,	// (0x00089b04) list_single_graphic_popup_conf_pane

0x39ab,	// (0x00089b17) list_highlight_pane_cp01

0x39b4,	// (0x00089b20) list_single_graphic_popup_conf_pane_g1

0x39bc,	// (0x00089b28) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000954e8) list_single_graphic_popup_conf_pane_g

0x39c4,	// (0x00089b30) list_single_graphic_popup_conf_pane_t1

0x39d2,	// (0x00089b3e) linegrid_cams_pane_g1

0x39db,	// (0x00089b47) linegrid_cams_pane_g2

0x1dc9,	// (0x00087f35) linegrid_cams_pane_g3

0x39e4,	// (0x00089b50) linegrid_cams_pane_g4

0x39ed,	// (0x00089b59) linegrid_cams_pane_g5

0x39f6,	// (0x00089b62) linegrid_cams_pane_g6

0x1dd2,	// (0x00087f3e) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000954ed) linegrid_cams_pane_g

0x3a01,	// (0x00089b6d) popup_clock_analogue_window

0x3a01,	// (0x00089b6d) popup_clock_digital_window

0xeb82,	// (0x00094cee) popup_phob_thumbnail_window

0xeef7,	// (0x00095063) call_video_uplink_pane_g1

0x3a0a,	// (0x00089b76) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000954fc) call_video_uplink_pane_g

0x3a12,	// (0x00089b7e) video_uplink_pane

0x3a1a,	// (0x00089b86) mce_image_pane_g1

0x3a24,	// (0x00089b90) mce_image_pane_g2

0x3a2e,	// (0x00089b9a) mce_image_pane_g3

0x3a36,	// (0x00089ba2) mce_image_pane_g4

0x3a3e,	// (0x00089baa) mce_image_pane_g5

0x0004,

0xf395,	// (0x00095501) mce_image_pane_g

0x3a46,	// (0x00089bb2) control_top_pane_stacon_cp01_ParamLimits

0x3a46,	// (0x00089bb2) control_top_pane_stacon_cp01

0x3a5a,	// (0x00089bc6) uni_indicator_pane_stacon_cp01_ParamLimits

0x3a5a,	// (0x00089bc6) uni_indicator_pane_stacon_cp01

0x3a6b,	// (0x00089bd7) bg_popup_sub_pane_cp03

0x3a75,	// (0x00089be1) chi_dic_find_pane

0x3a7d,	// (0x00089be9) listscroll_chi_dic_pane

0x3a86,	// (0x00089bf2) main_pane_chidic_g1

0x3a99,	// (0x00089c05) chi_dic_find_pane_t1

0x3aa7,	// (0x00089c13) find_chidic_pane

0x3ab0,	// (0x00089c1c) chi_dic_list_pane_ParamLimits

0x3ab0,	// (0x00089c1c) chi_dic_list_pane

0x3ac1,	// (0x00089c2d) scroll_pane_cp020

0x3ac9,	// (0x00089c35) find_chidic_pane_t1

0xeb82,	// (0x00094cee) input_focus_pane_cp06

0x3ad8,	// (0x00089c44) list_chi_dic_pane_ParamLimits

0x3ad8,	// (0x00089c44) list_chi_dic_pane

0x3aea,	// (0x00089c56) list_chi_dic_pane_t1_ParamLimits

0x3aea,	// (0x00089c56) list_chi_dic_pane_t1

0xeb82,	// (0x00094cee) list_highlight_pane_cp020

0x3afd,	// (0x00089c69) bg_cale_heading_pane_g1

0x3b05,	// (0x00089c71) bg_cale_heading_pane_g2

0x3b0d,	// (0x00089c79) bg_cale_heading_pane_g3

0x3b15,	// (0x00089c81) bg_cale_heading_pane_g4

0x3b1f,	// (0x00089c8b) bg_cale_heading_pane_g5

0x3b29,	// (0x00089c95) bg_cale_heading_pane_g6

0x3b31,	// (0x00089c9d) bg_cale_heading_pane_g7

0x3b39,	// (0x00089ca5) bg_cale_heading_pane_g8

0x3b43,	// (0x00089caf) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0009550c) bg_cale_heading_pane_g

0x3afd,	// (0x00089c69) bg_cale_side_pane_g1

0x3b4d,	// (0x00089cb9) bg_cale_side_pane_g2

0x3b55,	// (0x00089cc1) bg_cale_side_pane_g3

0x3b5d,	// (0x00089cc9) bg_cale_side_pane_g4

0x3b65,	// (0x00089cd1) bg_cale_side_pane_g5

0x3b6d,	// (0x00089cd9) bg_cale_side_pane_g6

0x3b75,	// (0x00089ce1) bg_cale_side_pane_g7

0x3b7d,	// (0x00089ce9) bg_cale_side_pane_g8

0x3b85,	// (0x00089cf1) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0009551f) bg_cale_side_pane_g

0x3b8d,	// (0x00089cf9) popup_call_status_window_ParamLimits

0x3b8d,	// (0x00089cf9) popup_call_status_window

0x3bd6,	// (0x00089d42) stacon_top_pane

0x3bde,	// (0x00089d4a) status_pane_ParamLimits

0x3bde,	// (0x00089d4a) status_pane

0x3bf3,	// (0x00089d5f) status_small_pane

0x3bfb,	// (0x00089d67) control_pane

0xeb82,	// (0x00094cee) stacon_bottom_pane

0x3c03,	// (0x00089d6f) list_single_mce_smart_pane_t1_ParamLimits

0x3c03,	// (0x00089d6f) list_single_mce_smart_pane_t1

0x3c16,	// (0x00089d82) list_single_mce_smart_pane_t2_ParamLimits

0x3c16,	// (0x00089d82) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00095532) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00095532) list_single_mce_smart_pane_t

0x3c35,	// (0x00089da1) compass_pane

0x3c3e,	// (0x00089daa) main_location2_pane_t1

0x3c50,	// (0x00089dbc) main_location2_pane_t2

0x3c62,	// (0x00089dce) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00095537) main_location2_pane_t

0x3ca6,	// (0x00089e12) compass_pane_g1_ParamLimits

0x3ca6,	// (0x00089e12) compass_pane_g1

0x3cb2,	// (0x00089e1e) compass_pane_t1

0x3cc1,	// (0x00089e2d) compass_pane_t2

0x0005,

0xf3d4,	// (0x00095540) compass_pane_t

0x3d08,	// (0x00089e74) text_secondary_cp61

0x3d87,	// (0x00089ef3) navi_pane_cams_g5

0x3e03,	// (0x00089f6f) navi_pane_im_t1

0x3e11,	// (0x00089f7d) navi_pane_mp_g1_ParamLimits

0x3e11,	// (0x00089f7d) navi_pane_mp_g1

0x3e25,	// (0x00089f91) navi_pane_mp_g2_ParamLimits

0x3e25,	// (0x00089f91) navi_pane_mp_g2

0x3e31,	// (0x00089f9d) navi_pane_mp_g3_ParamLimits

0x3e31,	// (0x00089f9d) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00095554) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00095554) navi_pane_mp_g

0x3e3d,	// (0x00089fa9) navi_pane_mp_t1

0x3e4b,	// (0x00089fb7) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0009555b) navi_pane_mp_t

0x3ef8,	// (0x0008a064) navi_pane_vt_g1

0x3e3d,	// (0x00089fa9) navi_pane_vt_t1

0x3f00,	// (0x0008a06c) navi_slider_pane

0x1deb,	// (0x00087f57) zooming_pane

0x3f10,	// (0x0008a07c) navi_slider_pane_g1

0xb41b,	// (0x00091587) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00095562) navi_slider_pane_g

0x3f34,	// (0x0008a0a0) aid_levels_zoom

0x3f3c,	// (0x0008a0a8) zooming_pane_g1

0x3f44,	// (0x0008a0b0) zooming_pane_g2

0x3f44,	// (0x0008a0b0) zooming_pane_g3

0x0002,

0xf405,	// (0x00095571) zooming_pane_g

0x3f4c,	// (0x0008a0b8) level_10_zoom

0x3f55,	// (0x0008a0c1) level_11_zoom

0x3f5e,	// (0x0008a0ca) level_1_zoom

0x3f67,	// (0x0008a0d3) level_2_zoom

0x3f70,	// (0x0008a0dc) level_3_zoom

0x3f79,	// (0x0008a0e5) level_4_zoom

0x3f82,	// (0x0008a0ee) level_5_zoom

0x3f8b,	// (0x0008a0f7) level_6_zoom

0x3f94,	// (0x0008a100) level_7_zoom

0x3f9d,	// (0x0008a109) level_8_zoom

0x3fa6,	// (0x0008a112) level_9_zoom

0x3fb7,	// (0x0008a123) popup_phob_thumbnail_window_g1

0x3fbf,	// (0x0008a12b) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00095578) popup_phob_thumbnail_window_g

0xb62b,	// (0x00091797) level_1_location

0xb633,	// (0x0009179f) level_2_location

0xb63b,	// (0x000917a7) level_3_location

0xb643,	// (0x000917af) level_4_location

0x1deb,	// (0x00087f57) level_5_location

0x3fc7,	// (0x0008a133) mce_icon_pane_g1

0x3fd1,	// (0x0008a13d) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0009557d) mce_icon_pane_g

0x3fd9,	// (0x0008a145) main_mup_pane_g1_ParamLimits

0x3fd9,	// (0x0008a145) main_mup_pane_g1

0x3fef,	// (0x0008a15b) main_mup_pane_g2_ParamLimits

0x3fef,	// (0x0008a15b) main_mup_pane_g2

0x4007,	// (0x0008a173) main_mup_pane_g3_ParamLimits

0x4007,	// (0x0008a173) main_mup_pane_g3

0x401f,	// (0x0008a18b) main_mup_pane_g4_ParamLimits

0x401f,	// (0x0008a18b) main_mup_pane_g4

0x4037,	// (0x0008a1a3) main_mup_pane_g5_ParamLimits

0x4037,	// (0x0008a1a3) main_mup_pane_g5

0x4053,	// (0x0008a1bf) main_mup_pane_g6_ParamLimits

0x4053,	// (0x0008a1bf) main_mup_pane_g6

0x406b,	// (0x0008a1d7) main_mup_pane_g7_ParamLimits

0x406b,	// (0x0008a1d7) main_mup_pane_g7

0x4083,	// (0x0008a1ef) main_mup_pane_g8_ParamLimits

0x4083,	// (0x0008a1ef) main_mup_pane_g8

0x409d,	// (0x0008a209) main_mup_pane_g9_ParamLimits

0x409d,	// (0x0008a209) main_mup_pane_g9

0x40b7,	// (0x0008a223) main_mup_pane_g10_ParamLimits

0x40b7,	// (0x0008a223) main_mup_pane_g10

0x40d1,	// (0x0008a23d) main_mup_pane_g11_ParamLimits

0x40d1,	// (0x0008a23d) main_mup_pane_g11

0x40e5,	// (0x0008a251) main_mup_pane_g12_ParamLimits

0x40e5,	// (0x0008a251) main_mup_pane_g12

0x40fb,	// (0x0008a267) main_mup_pane_g13_ParamLimits

0x40fb,	// (0x0008a267) main_mup_pane_g13

0x000c,

0xf416,	// (0x00095582) main_mup_pane_g_ParamLimits

0xf416,	// (0x00095582) main_mup_pane_g

0x410f,	// (0x0008a27b) main_mup_pane_t1_ParamLimits

0x410f,	// (0x0008a27b) main_mup_pane_t1

0x4129,	// (0x0008a295) main_mup_pane_t2_ParamLimits

0x4129,	// (0x0008a295) main_mup_pane_t2

0x4141,	// (0x0008a2ad) main_mup_pane_t3_ParamLimits

0x4141,	// (0x0008a2ad) main_mup_pane_t3

0x4159,	// (0x0008a2c5) main_mup_pane_t4_ParamLimits

0x4159,	// (0x0008a2c5) main_mup_pane_t4

0x4177,	// (0x0008a2e3) main_mup_pane_t5_ParamLimits

0x4177,	// (0x0008a2e3) main_mup_pane_t5

0x418c,	// (0x0008a2f8) main_mup_pane_t6_ParamLimits

0x418c,	// (0x0008a2f8) main_mup_pane_t6

0x0005,

0xf431,	// (0x0009559d) main_mup_pane_t_ParamLimits

0xf431,	// (0x0009559d) main_mup_pane_t

0x419e,	// (0x0008a30a) mup_progress_pane_ParamLimits

0x419e,	// (0x0008a30a) mup_progress_pane

0x41aa,	// (0x0008a316) mup_visualizer_pane_ParamLimits

0x41aa,	// (0x0008a316) mup_visualizer_pane

0x41da,	// (0x0008a346) mup_volume_pane_ParamLimits

0x41da,	// (0x0008a346) mup_volume_pane

0x41f8,	// (0x0008a364) mup_visualizer_pane_g1_ParamLimits

0x41f8,	// (0x0008a364) mup_visualizer_pane_g1

0x41f8,	// (0x0008a364) mup_visualizer_pane_g2_ParamLimits

0x41f8,	// (0x0008a364) mup_visualizer_pane_g2

0x3ca6,	// (0x00089e12) mup_visualizer_pane_g3_ParamLimits

0x3ca6,	// (0x00089e12) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000955aa) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000955aa) mup_visualizer_pane_g

0xeef7,	// (0x00095063) mup_volume_pane_g1

0x420e,	// (0x0008a37a) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000955b1) mup_volume_pane_g

0xeef7,	// (0x00095063) mup_progress_pane_g1

0x4217,	// (0x0008a383) mup_progress_pane_g2

0x4220,	// (0x0008a38c) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000955b6) mup_progress_pane_g

0xeb82,	// (0x00094cee) bg_popup_window_pane_cp05

0x4229,	// (0x0008a395) heading_pane_cp02_ParamLimits

0x4229,	// (0x0008a395) heading_pane_cp02

0x4243,	// (0x0008a3af) list_popup_blid_pane

0x424b,	// (0x0008a3b7) list_blid_sat_info_pane_ParamLimits

0x424b,	// (0x0008a3b7) list_blid_sat_info_pane

0x425e,	// (0x0008a3ca) list_blid_sat_info_pane_g1

0x4266,	// (0x0008a3d2) list_blid_sat_info_pane_t1

0x436c,	// (0x0008a4d8) mup_equalizer_pane_ParamLimits

0x436c,	// (0x0008a4d8) mup_equalizer_pane

0x4385,	// (0x0008a4f1) mup_equalizer_pane_cp1_ParamLimits

0x4385,	// (0x0008a4f1) mup_equalizer_pane_cp1

0x43a2,	// (0x0008a50e) mup_equalizer_pane_cp2_ParamLimits

0x43a2,	// (0x0008a50e) mup_equalizer_pane_cp2

0x43bf,	// (0x0008a52b) mup_equalizer_pane_cp3_ParamLimits

0x43bf,	// (0x0008a52b) mup_equalizer_pane_cp3

0x43e0,	// (0x0008a54c) mup_equalizer_pane_cp4_ParamLimits

0x43e0,	// (0x0008a54c) mup_equalizer_pane_cp4

0x4401,	// (0x0008a56d) mup_equalizer_pane_cp5

0x4415,	// (0x0008a581) mup_equalizer_pane_cp6

0x4429,	// (0x0008a595) mup_equalizer_pane_cp7

0xb549,	// (0x000916b5) bg_popup_call_poc_act_pane_g9

0xb551,	// (0x000916bd) bg_popup_call_poc_act_pane_g10

0xb559,	// (0x000916c5) bg_popup_call_poc_act_pane_g11

0x000a,

0xeddd,	// (0x00094f49) mup_scale_pane

0xeef7,	// (0x00095063) mup_scale_pane_g1

0x443d,	// (0x0008a5a9) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000955d2) mup_scale_pane_g

0x4473,	// (0x0008a5df) msg_data_pane

0x447b,	// (0x0008a5e7) scroll_pane_cp017

0x03a0,	// (0x0008650c) bg_list_pane_cp04_ParamLimits

0x03a0,	// (0x0008650c) bg_list_pane_cp04

0x4483,	// (0x0008a5ef) msg_data_pane_g1

0x448b,	// (0x0008a5f7) msg_data_pane_g2

0x4495,	// (0x0008a601) msg_data_pane_g3

0x449d,	// (0x0008a609) msg_data_pane_g4

0x44a5,	// (0x0008a611) msg_data_pane_g5

0x44ad,	// (0x0008a619) msg_data_pane_g6

0x44b5,	// (0x0008a621) msg_data_pane_g7

0x0006,

0xf475,	// (0x000955e1) msg_data_pane_g

0x03c0,	// (0x0008652c) msg_text_pane_ParamLimits

0x03c0,	// (0x0008652c) msg_text_pane

0x44bd,	// (0x0008a629) qrid_highlight_pane_cp011_ParamLimits

0x44bd,	// (0x0008a629) qrid_highlight_pane_cp011

0xeb82,	// (0x00094cee) msg_body_pane

0xeb82,	// (0x00094cee) msg_header_pane

0x44dc,	// (0x0008a648) input_focus_pane_cp07

0x03f7,	// (0x00086563) msg_header_pane_t1_ParamLimits

0x03f7,	// (0x00086563) msg_header_pane_t1

0x0409,	// (0x00086575) msg_header_pane_t2_ParamLimits

0x0409,	// (0x00086575) msg_header_pane_t2

0x0001,

0xf489,	// (0x000955f5) msg_header_pane_t_ParamLimits

0xf489,	// (0x000955f5) msg_header_pane_t

0x44f1,	// (0x0008a65d) msg_body_pane_g1

0x041b,	// (0x00086587) msg_body_pane_t1_ParamLimits

0x041b,	// (0x00086587) msg_body_pane_t1

0x044c,	// (0x000865b8) msg_body_pane_t2_ParamLimits

0x044c,	// (0x000865b8) msg_body_pane_t2

0x045e,	// (0x000865ca) msg_body_pane_t3_ParamLimits

0x045e,	// (0x000865ca) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000955fa) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000955fa) msg_body_pane_t

0x4533,	// (0x0008a69f) main_viewer_pane_g1_ParamLimits

0x4533,	// (0x0008a69f) main_viewer_pane_g1

0x4541,	// (0x0008a6ad) main_viewer_pane_g2_ParamLimits

0x4541,	// (0x0008a6ad) main_viewer_pane_g2

0x454f,	// (0x0008a6bb) main_viewer_pane_g3_ParamLimits

0x454f,	// (0x0008a6bb) main_viewer_pane_g3

0x455e,	// (0x0008a6ca) main_viewer_pane_g4_ParamLimits

0x455e,	// (0x0008a6ca) main_viewer_pane_g4

0xb445,	// (0x000915b1) main_viewer_pane_g5_ParamLimits

0xb445,	// (0x000915b1) main_viewer_pane_g5

0xb445,	// (0x000915b1) main_viewer_pane_g7_ParamLimits

0xb445,	// (0x000915b1) main_viewer_pane_g7

0xb457,	// (0x000915c3) main_viewer_pane_g8_ParamLimits

0xb457,	// (0x000915c3) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0009560a) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0009560a) main_viewer_pane_g

0x456d,	// (0x0008a6d9) viewer_content_pane_ParamLimits

0x456d,	// (0x0008a6d9) viewer_content_pane

0x45a8,	// (0x0008a714) main_postcard_pane_g1_ParamLimits

0x45a8,	// (0x0008a714) main_postcard_pane_g1

0x45be,	// (0x0008a72a) main_postcard_pane_g2_ParamLimits

0x45be,	// (0x0008a72a) main_postcard_pane_g2

0x45d4,	// (0x0008a740) main_postcard_pane_g3_ParamLimits

0x45d4,	// (0x0008a740) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0009561b) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0009561b) main_postcard_pane_g

0x45eb,	// (0x0008a757) main_postcard_pane_g4

0xb77f,	// (0x000918eb) smil_status_volume_pane_g2

0x462e,	// (0x0008a79a) postcard_pane_ParamLimits

0x462e,	// (0x0008a79a) postcard_pane

0x4670,	// (0x0008a7dc) postcard_pane_g1_ParamLimits

0x4670,	// (0x0008a7dc) postcard_pane_g1

0x467e,	// (0x0008a7ea) postcard_pane_g2_ParamLimits

0x467e,	// (0x0008a7ea) postcard_pane_g2

0x468a,	// (0x0008a7f6) postcard_pane_g3_ParamLimits

0x468a,	// (0x0008a7f6) postcard_pane_g3

0x4696,	// (0x0008a802) postcard_pane_g4_ParamLimits

0x4696,	// (0x0008a802) postcard_pane_g4

0x46a4,	// (0x0008a810) postcard_pane_g5_ParamLimits

0x46a4,	// (0x0008a810) postcard_pane_g5

0x46b9,	// (0x0008a825) postcard_pane_g6_ParamLimits

0x46b9,	// (0x0008a825) postcard_pane_g6

0x4670,	// (0x0008a7dc) postcard_pane_g7_ParamLimits

0x4670,	// (0x0008a7dc) postcard_pane_g7

0x0006,

0xf4bc,	// (0x00095628) postcard_pane_g_ParamLimits

0xf4bc,	// (0x00095628) postcard_pane_g

0x46cd,	// (0x0008a839) main_mp2_pane_g1_ParamLimits

0x46cd,	// (0x0008a839) main_mp2_pane_g1

0x46d9,	// (0x0008a845) main_mp2_pane_g2_ParamLimits

0x46d9,	// (0x0008a845) main_mp2_pane_g2

0x46e5,	// (0x0008a851) main_mp2_pane_g3_ParamLimits

0x46e5,	// (0x0008a851) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x00095637) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x00095637) main_mp2_pane_g

0x46f1,	// (0x0008a85d) main_mp2_pane_t1_ParamLimits

0x46f1,	// (0x0008a85d) main_mp2_pane_t1

0x4706,	// (0x0008a872) main_mp2_pane_t2_ParamLimits

0x4706,	// (0x0008a872) main_mp2_pane_t2

0x4718,	// (0x0008a884) main_mp2_pane_t3_ParamLimits

0x4718,	// (0x0008a884) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0009563e) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0009563e) main_mp2_pane_t

0x472a,	// (0x0008a896) pec_content_pane_ParamLimits

0x472a,	// (0x0008a896) pec_content_pane

0x2719,	// (0x00088885) scroll_pane_cp015

0x473c,	// (0x0008a8a8) pec_attribute_pane_ParamLimits

0x473c,	// (0x0008a8a8) pec_attribute_pane

0x474c,	// (0x0008a8b8) pec_content_pane_g1_ParamLimits

0x474c,	// (0x0008a8b8) pec_content_pane_g1

0x4758,	// (0x0008a8c4) pec_content_pane_t1_ParamLimits

0x4758,	// (0x0008a8c4) pec_content_pane_t1

0x476a,	// (0x0008a8d6) pec_content_pane_t2_ParamLimits

0x476a,	// (0x0008a8d6) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x00095645) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x00095645) pec_content_pane_t

0x477c,	// (0x0008a8e8) list_single_graphic_pane_cp01_ParamLimits

0x477c,	// (0x0008a8e8) list_single_graphic_pane_cp01

0xeddd,	// (0x00094f49) bg_popup_sub_pane_cp04

0x4791,	// (0x0008a8fd) popup_mup_playback_window_g1

0x479d,	// (0x0008a909) popup_mup_playback_window_t1

0x47b2,	// (0x0008a91e) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0009564a) popup_mup_playback_window_t

0x4807,	// (0x0008a973) main_image_pane_g1_ParamLimits

0x4807,	// (0x0008a973) main_image_pane_g1

0x48e4,	// (0x0008aa50) scroll_pane_cp018_ParamLimits

0x48e4,	// (0x0008aa50) scroll_pane_cp018

0x48fc,	// (0x0008aa68) scroll_pane_cp016_ParamLimits

0x48fc,	// (0x0008aa68) scroll_pane_cp016

0x4930,	// (0x0008aa9c) smil2_image_pane_ParamLimits

0x4930,	// (0x0008aa9c) smil2_image_pane

0x4960,	// (0x0008aacc) smil2_root_pane_ParamLimits

0x4960,	// (0x0008aacc) smil2_root_pane

0x4998,	// (0x0008ab04) smil2_text_pane_ParamLimits

0x4998,	// (0x0008ab04) smil2_text_pane

0xeb82,	// (0x00094cee) bg_list_pane_cp06

0x4a20,	// (0x0008ab8c) grid_radio_pane

0xeb82,	// (0x00094cee) bg_popup_window_pane_cp06

0x4a28,	// (0x0008ab94) main_fmradio_pane_t1

0x3917,	// (0x00089a83) heading_pane_cp04

0x4a36,	// (0x0008aba2) main_fmradio_pane_t2

0xb561,	// (0x000916cd) popup_cale_lunar_info_window_g1

0x4a44,	// (0x0008abb0) main_fmradio_pane_t3

0xb569,	// (0x000916d5) popup_cale_lunar_info_window_g2

0x4a52,	// (0x0008abbe) main_fmradio_pane_t4

0x0001,

0x4a60,	// (0x0008abcc) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x00095725) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0009565f) main_fmradio_pane_t

0x4a6e,	// (0x0008abda) wait_bar_pane_cp03

0x4a76,	// (0x0008abe2) cell_fmradio_pane_ParamLimits

0x4a76,	// (0x0008abe2) cell_fmradio_pane

0x4670,	// (0x0008a7dc) cell_fmradio_pane_g1_ParamLimits

0x4670,	// (0x0008a7dc) cell_fmradio_pane_g1

0xeb82,	// (0x00094cee) grid_highlight_pane_cp011

0x4a89,	// (0x0008abf5) poc_content_pane_ParamLimits

0x4a89,	// (0x0008abf5) poc_content_pane

0x4a9b,	// (0x0008ac07) scroll_pane_cp019

0x4aa3,	// (0x0008ac0f) popup_call_poc_act_window_ParamLimits

0x4aa3,	// (0x0008ac0f) popup_call_poc_act_window

0x4ac7,	// (0x0008ac33) popup_call_poc_inact_window_ParamLimits

0x4ac7,	// (0x0008ac33) popup_call_poc_inact_window

0xf590,	// (0x000956fc) bg_popup_call_poc_act_pane_g

0xb4d9,	// (0x00091645) bg_popup_call_poc_inact_pane_g1

0xb4e1,	// (0x0009164d) bg_popup_call_poc_inact_pane_g2

0x4ae0,	// (0x0008ac4c) popup_call_poc_act_window_g2

0xb4e9,	// (0x00091655) bg_popup_call_poc_inact_pane_g3

0xb4f1,	// (0x0009165d) bg_popup_call_poc_inact_pane_g4

0xb4f9,	// (0x00091665) bg_popup_call_poc_inact_pane_g5

0x4ae8,	// (0x0008ac54) popup_call_poc_act_window_t1_ParamLimits

0x4ae8,	// (0x0008ac54) popup_call_poc_act_window_t1

0x4b10,	// (0x0008ac7c) popup_call_poc_act_window_t2_ParamLimits

0x4b10,	// (0x0008ac7c) popup_call_poc_act_window_t2

0x4b38,	// (0x0008aca4) popup_call_poc_act_window_t3_ParamLimits

0x4b38,	// (0x0008aca4) popup_call_poc_act_window_t3

0x4b60,	// (0x0008accc) popup_call_poc_act_window_t4_ParamLimits

0x4b60,	// (0x0008accc) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0009566a) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0009566a) popup_call_poc_act_window_t

0xb501,	// (0x0009166d) bg_popup_call_poc_inact_pane_g6

0xb509,	// (0x00091675) bg_popup_call_poc_inact_pane_g7

0xb511,	// (0x0009167d) bg_popup_call_poc_inact_pane_g8

0x4b72,	// (0x0008acde) popup_call_poc_inact_window_g2

0xb519,	// (0x00091685) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x000956e9) bg_popup_call_poc_inact_pane_g

0x4b7a,	// (0x0008ace6) popup_call_poc_inact_window_t1_ParamLimits

0x4b7a,	// (0x0008ace6) popup_call_poc_inact_window_t1

0x4b8f,	// (0x0008acfb) popup_call_poc_inact_window_t2_ParamLimits

0x4b8f,	// (0x0008acfb) popup_call_poc_inact_window_t2

0x4ba4,	// (0x0008ad10) popup_call_poc_inact_window_t3_ParamLimits

0x4ba4,	// (0x0008ad10) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00095673) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00095673) popup_call_poc_inact_window_t

0xb6f2,	// (0x0009185e) context_pane_ParamLimits

0x615c,	// (0x0008c2c8) signal_pane_ParamLimits

0x1deb,	// (0x00087f57) main_call2_pane

0xb6cb,	// (0x00091837) popup_phob_thumbnail2_window_ParamLimits

0xb6cb,	// (0x00091837) popup_phob_thumbnail2_window

0xb42d,	// (0x00091599) aid_hotspot_pointer_arrow_pane

0xb435,	// (0x000915a1) aid_hotspot_pointer_hand_pane

0x5c76,	// (0x0008bde2) phob_pre_status_pane_g5

0x1e69,	// (0x00087fd5) cams_zoom_pane_ParamLimits

0x1e78,	// (0x00087fe4) image_vga_pane_ParamLimits

0x1e92,	// (0x00087ffe) main_camera_pane_g1_ParamLimits

0x1ea4,	// (0x00088010) main_camera_pane_g2_ParamLimits

0x1eb4,	// (0x00088020) main_camera_pane_g3_ParamLimits

0x1ec4,	// (0x00088030) main_camera_pane_g4_ParamLimits

0x1ed4,	// (0x00088040) main_camera_pane_g5_ParamLimits

0x1ee4,	// (0x00088050) main_camera_pane_g6_ParamLimits

0x1ef6,	// (0x00088062) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00095372) main_camera_pane_g_ParamLimits

0x1f12,	// (0x0008807e) main_camera_pane_t1_ParamLimits

0x1f28,	// (0x00088094) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00095383) main_camera_pane_t_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_preview_window_pane_cp01_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_preview_window_pane_cp01

0x4bb9,	// (0x0008ad25) popup_phob_thumbnail2_window_g1_ParamLimits

0x4bb9,	// (0x0008ad25) popup_phob_thumbnail2_window_g1

0xeb82,	// (0x00094cee) call2_cli_visual_pane

0x4be0,	// (0x0008ad4c) popup_call2_audio_conf_window_ParamLimits

0x4be0,	// (0x0008ad4c) popup_call2_audio_conf_window

0x4c00,	// (0x0008ad6c) popup_call2_audio_first_window_ParamLimits

0x4c00,	// (0x0008ad6c) popup_call2_audio_first_window

0x4c96,	// (0x0008ae02) popup_call2_audio_in_window_ParamLimits

0x4c96,	// (0x0008ae02) popup_call2_audio_in_window

0x4cde,	// (0x0008ae4a) popup_call2_audio_out_window_ParamLimits

0x4cde,	// (0x0008ae4a) popup_call2_audio_out_window

0x4d48,	// (0x0008aeb4) popup_call2_audio_second_window_ParamLimits

0x4d48,	// (0x0008aeb4) popup_call2_audio_second_window

0x4dae,	// (0x0008af1a) popup_call2_audio_wait_window_ParamLimits

0x4dae,	// (0x0008af1a) popup_call2_audio_wait_window

0xeb82,	// (0x00094cee) bg_popup_call2_act_pane_cp03

0xedbf,	// (0x00094f2b) list_conf_pane_cp

0x4de8,	// (0x0008af54) popup_call2_audio_conf_window_t1

0x3998,	// (0x00089b04) list_single_graphic_popup_conf2_pane_ParamLimits

0x3998,	// (0x00089b04) list_single_graphic_popup_conf2_pane

0x39ab,	// (0x00089b17) list_highlight_pane_cp04

0x4df6,	// (0x0008af62) list_single_graphic_popup_conf2_pane_g1

0x39bc,	// (0x00089b28) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0009567a) list_single_graphic_popup_conf2_pane_g

0x4e00,	// (0x0008af6c) list_single_graphic_popup_conf2_pane_t1

0x4e0e,	// (0x0008af7a) bg_popup_call2_act_pane_cp01_ParamLimits

0x4e0e,	// (0x0008af7a) bg_popup_call2_act_pane_cp01

0x4e98,	// (0x0008b004) call_type_pane_cp05_ParamLimits

0x4e98,	// (0x0008b004) call_type_pane_cp05

0x4eec,	// (0x0008b058) popup_call2_audio_second_window_g1_ParamLimits

0x4eec,	// (0x0008b058) popup_call2_audio_second_window_g1

0x4f40,	// (0x0008b0ac) popup_call2_audio_second_window_g2_ParamLimits

0x4f40,	// (0x0008b0ac) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0009567f) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0009567f) popup_call2_audio_second_window_g

0x4fa5,	// (0x0008b111) popup_call2_audio_second_window_t1_ParamLimits

0x4fa5,	// (0x0008b111) popup_call2_audio_second_window_t1

0x5060,	// (0x0008b1cc) popup_call2_audio_second_window_t2_ParamLimits

0x5060,	// (0x0008b1cc) popup_call2_audio_second_window_t2

0x50b3,	// (0x0008b21f) popup_call2_audio_second_window_t3_ParamLimits

0x50b3,	// (0x0008b21f) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x00095686) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x00095686) popup_call2_audio_second_window_t

0xeb82,	// (0x00094cee) bg_popup_call2_in_pane_cp02

0xeb8c,	// (0x00094cf8) call_type_pane_cp04

0xeb94,	// (0x00094d00) popup_call2_audio_wait_window_g1

0xeb9c,	// (0x00094d08) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00095261) popup_call2_audio_wait_window_g

0xeba4,	// (0x00094d10) popup_call2_audio_wait_window_t3

0x51a6,	// (0x0008b312) bg_popup_call2_act_pane_ParamLimits

0x51a6,	// (0x0008b312) bg_popup_call2_act_pane

0x5266,	// (0x0008b3d2) call_type_pane_cp03_ParamLimits

0x5266,	// (0x0008b3d2) call_type_pane_cp03

0x52ca,	// (0x0008b436) popup_call2_audio_first_window_g1_ParamLimits

0x52ca,	// (0x0008b436) popup_call2_audio_first_window_g1

0x533a,	// (0x0008b4a6) popup_call2_audio_first_window_g2_ParamLimits

0x533a,	// (0x0008b4a6) popup_call2_audio_first_window_g2

0x41f8,	// (0x0008a364) popup_call2_audio_first_window_g3_ParamLimits

0x41f8,	// (0x0008a364) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0009568f) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0009568f) popup_call2_audio_first_window_g

0x5418,	// (0x0008b584) popup_call2_audio_first_window_t1_ParamLimits

0x5418,	// (0x0008b584) popup_call2_audio_first_window_t1

0x551b,	// (0x0008b687) popup_call2_audio_first_window_t4_ParamLimits

0x551b,	// (0x0008b687) popup_call2_audio_first_window_t4

0x55fe,	// (0x0008b76a) popup_call2_audio_first_window_t5_ParamLimits

0x55fe,	// (0x0008b76a) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0009569a) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0009569a) popup_call2_audio_first_window_t

0xedd5,	// (0x00094f41) bg_popup_call2_act_pane_g1

0xb571,	// (0x000916dd) popup_cale_lunar_info_window_t1

0xb57f,	// (0x000916eb) popup_cale_lunar_info_window_t2

0xb58d,	// (0x000916f9) popup_cale_lunar_info_window_t3

0xeb82,	// (0x00094cee) bg_popup_call2_bubble_pane

0x56ff,	// (0x0008b86b) bg_popup_call2_in_pane_cp01_ParamLimits

0x56ff,	// (0x0008b86b) bg_popup_call2_in_pane_cp01

0xe85e,	// (0x000949ca) call_type_pane_cp02

0x5747,	// (0x0008b8b3) popup_call2_audio_out_window_g1_ParamLimits

0x5747,	// (0x0008b8b3) popup_call2_audio_out_window_g1

0x5773,	// (0x0008b8df) popup_call2_audio_out_window_g2_ParamLimits

0x5773,	// (0x0008b8df) popup_call2_audio_out_window_g2

0x579b,	// (0x0008b907) popup_call2_audio_out_window_g3_ParamLimits

0x579b,	// (0x0008b907) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000956a3) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000956a3) popup_call2_audio_out_window_g

0x57d6,	// (0x0008b942) popup_call2_audio_out_window_t1_ParamLimits

0x57d6,	// (0x0008b942) popup_call2_audio_out_window_t1

0x5835,	// (0x0008b9a1) popup_call2_audio_out_window_t2_ParamLimits

0x5835,	// (0x0008b9a1) popup_call2_audio_out_window_t2

0x5889,	// (0x0008b9f5) popup_call2_audio_out_window_t3_ParamLimits

0x5889,	// (0x0008b9f5) popup_call2_audio_out_window_t3

0x589f,	// (0x0008ba0b) popup_call2_audio_out_window_t4_ParamLimits

0x589f,	// (0x0008ba0b) popup_call2_audio_out_window_t4

0x58b5,	// (0x0008ba21) popup_call2_audio_out_window_t5_ParamLimits

0x58b5,	// (0x0008ba21) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000956ac) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000956ac) popup_call2_audio_out_window_t

0x5919,	// (0x0008ba85) bg_popup_call2_in_pane_ParamLimits

0x5919,	// (0x0008ba85) bg_popup_call2_in_pane

0x5975,	// (0x0008bae1) popup_call2_audio_in_window_g1_ParamLimits

0x5975,	// (0x0008bae1) popup_call2_audio_in_window_g1

0x59ad,	// (0x0008bb19) popup_call2_audio_in_window_g2_ParamLimits

0x59ad,	// (0x0008bb19) popup_call2_audio_in_window_g2

0x59e5,	// (0x0008bb51) popup_call2_audio_in_window_g3_ParamLimits

0x59e5,	// (0x0008bb51) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000956b9) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000956b9) popup_call2_audio_in_window_g

0x5a3d,	// (0x0008bba9) popup_call2_audio_in_window_t1_ParamLimits

0x5a3d,	// (0x0008bba9) popup_call2_audio_in_window_t1

0x5abd,	// (0x0008bc29) popup_call2_audio_in_window_t2_ParamLimits

0x5abd,	// (0x0008bc29) popup_call2_audio_in_window_t2

0x5b3d,	// (0x0008bca9) popup_call2_audio_in_window_t3_ParamLimits

0x5b3d,	// (0x0008bca9) popup_call2_audio_in_window_t3

0x5b57,	// (0x0008bcc3) popup_call2_audio_in_window_t4_ParamLimits

0x5b57,	// (0x0008bcc3) popup_call2_audio_in_window_t4

0xb46f,	// (0x000915db) popup_call2_audio_in_window_t5_ParamLimits

0xb46f,	// (0x000915db) popup_call2_audio_in_window_t5

0xb484,	// (0x000915f0) popup_call2_audio_in_window_t6_ParamLimits

0xb484,	// (0x000915f0) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000956c2) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000956c2) popup_call2_audio_in_window_t

0xedd5,	// (0x00094f41) bg_popup_call2_in_pane_g1

0xb59b,	// (0x00091707) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0009572a) popup_cale_lunar_info_window_t

0xeddd,	// (0x00094f49) bg_popup_call2_rect_pane_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_call2_rect_pane

0xeb82,	// (0x00094cee) call2_cli_visual_graphic_pane

0xeb82,	// (0x00094cee) call2_cli_visual_text_pane

0xb792,	// (0x000918fe) smil_status_volume_pane_g3

0x0002,

0xeef7,	// (0x00095063) call2_cli_visual_graphic_pane_g1

0xeef7,	// (0x00095063) call2_cli_visual_graphic_pane_g2

0xeef7,	// (0x00095063) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000956cf) call2_cli_visual_graphic_pane_g

0xb499,	// (0x00091605) bg_popup_call2_rect_pane_g1

0x177e,	// (0x000878ea) bg_popup_call2_rect_pane_g2

0xb4a1,	// (0x0009160d) bg_popup_call2_rect_pane_g3

0xb4a9,	// (0x00091615) bg_popup_call2_rect_pane_g4

0xb4b1,	// (0x0009161d) bg_popup_call2_rect_pane_g5

0xb4b9,	// (0x00091625) bg_popup_call2_rect_pane_g6

0xb4c1,	// (0x0009162d) bg_popup_call2_rect_pane_g7

0xb4c9,	// (0x00091635) bg_popup_call2_rect_pane_g8

0xb4d1,	// (0x0009163d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000956d6) bg_popup_call2_rect_pane_g

0xb4d9,	// (0x00091645) bg_popup_call2_bubble_pane_g1

0xb4e1,	// (0x0009164d) bg_popup_call2_bubble_pane_g2

0xb4e9,	// (0x00091655) bg_popup_call2_bubble_pane_g3

0xb4f1,	// (0x0009165d) bg_popup_call2_bubble_pane_g4

0xb4f9,	// (0x00091665) bg_popup_call2_bubble_pane_g5

0xb501,	// (0x0009166d) bg_popup_call2_bubble_pane_g6

0xb509,	// (0x00091675) bg_popup_call2_bubble_pane_g7

0xb511,	// (0x0009167d) bg_popup_call2_bubble_pane_g8

0xb519,	// (0x00091685) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000956e9) bg_popup_call2_bubble_pane_g

0x17ff,	// (0x0008796b) aid_cale_week_size_cell_pane

0x1f3e,	// (0x000880aa) aid_cams_cif_uncrop_pane_ParamLimits

0x1f3e,	// (0x000880aa) aid_cams_cif_uncrop_pane

0x212c,	// (0x00088298) aid_cams_size_cell_ParamLimits

0x212c,	// (0x00088298) aid_cams_size_cell

0x2140,	// (0x000882ac) grid_cams_pane_ParamLimits

0x215a,	// (0x000882c6) linegrid_cams_pane_ParamLimits

0x22a8,	// (0x00088414) call_video_pane_t1

0x22c6,	// (0x00088432) call_video_pane_t2

0x0001,

0xf26a,	// (0x000953d6) call_video_pane_t

0x2958,	// (0x00088ac4) aid_cale_month_size_cell_pane_ParamLimits

0x2958,	// (0x00088ac4) aid_cale_month_size_cell_pane

0xf607,	// (0x00095773) smil_status_volume_pane_g

0xb79f,	// (0x0009190b) volume_smil_pane_ParamLimits

0xb270,	// (0x000913dc) aid_popup2_width_pane

0x1712,	// (0x0008787e) cell_qdial_pane_g4_ParamLimits

0x1712,	// (0x0008787e) cell_qdial_pane_g4

0x3c86,	// (0x00089df2) aid_blid_cardinal_pane_ParamLimits

0x3c92,	// (0x00089dfe) aid_blid_destination_pane_ParamLimits

0x3c92,	// (0x00089dfe) aid_blid_destination_pane

0xeddd,	// (0x00094f49) bg_popup_call_poc_act_pane_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_call_poc_act_pane

0xeddd,	// (0x00094f49) bg_popup_call_poc_inact_pane_ParamLimits

0xeddd,	// (0x00094f49) bg_popup_call_poc_inact_pane

0xb521,	// (0x0009168d) bg_popup_call_poc_act_pane_g1

0xb529,	// (0x00091695) bg_popup_call_poc_act_pane_g2

0xb531,	// (0x0009169d) bg_popup_call_poc_act_pane_g3

0xb4f1,	// (0x0009165d) bg_popup_call_poc_act_pane_g4

0xb4f9,	// (0x00091665) bg_popup_call_poc_act_pane_g5

0xb539,	// (0x000916a5) bg_popup_call_poc_act_pane_g6

0xb509,	// (0x00091675) bg_popup_call_poc_act_pane_g7

0xb541,	// (0x000916ad) bg_popup_call_poc_act_pane_g8

0xeb82,	// (0x00094cee) main_usb_pane

0xb6a6,	// (0x00091812) popup_cale_lunar_info_window

0x2600,	// (0x0008876c) im_reading_pane_t1_ParamLimits

0x2639,	// (0x000887a5) list_im_pane_ParamLimits

0x264a,	// (0x000887b6) scroll_pane_cp07_ParamLimits

0xeb82,	// (0x00094cee) grid_highlight_pane_cp012

0xeddd,	// (0x00094f49) mup_scale_pane_ParamLimits

0x4670,	// (0x0008a7dc) main_usb_pane_g1_ParamLimits

0x4670,	// (0x0008a7dc) main_usb_pane_g1

0x5b8b,	// (0x0008bcf7) main_usb_pane_g2_ParamLimits

0x5b8b,	// (0x0008bcf7) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x00095713) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x00095713) main_usb_pane_g

0x5ba1,	// (0x0008bd0d) main_usb_pane_t1_ParamLimits

0x5ba1,	// (0x0008bd0d) main_usb_pane_t1

0x5bb3,	// (0x0008bd1f) main_usb_pane_t2_ParamLimits

0x5bb3,	// (0x0008bd1f) main_usb_pane_t2

0x5bc5,	// (0x0008bd31) main_usb_pane_t3_ParamLimits

0x5bc5,	// (0x0008bd31) main_usb_pane_t3

0x5bd7,	// (0x0008bd43) main_usb_pane_t4_ParamLimits

0x5bd7,	// (0x0008bd43) main_usb_pane_t4

0x5be9,	// (0x0008bd55) main_usb_pane_t5_ParamLimits

0x5be9,	// (0x0008bd55) main_usb_pane_t5

0x5bfb,	// (0x0008bd67) main_usb_pane_t6_ParamLimits

0x5bfb,	// (0x0008bd67) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x00095718) main_usb_pane_t_ParamLimits

0x3c35,	// (0x00089da1) aid_text_placing

0x3c3e,	// (0x00089daa) main_location2_pane_t1_ParamLimits

0x3c50,	// (0x00089dbc) main_location2_pane_t2_ParamLimits

0x3c62,	// (0x00089dce) main_location2_pane_t3_ParamLimits

0x3c74,	// (0x00089de0) main_location2_pane_t4_ParamLimits

0x3c74,	// (0x00089de0) main_location2_pane_t4

0xf3cb,	// (0x00095537) main_location2_pane_t_ParamLimits

0xee19,	// (0x00094f85) find_pinb_pane_g2_ParamLimits

0xee19,	// (0x00094f85) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00095287) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00095287) find_pinb_pane_g

0xee25,	// (0x00094f91) find_pinb_pane_t1_ParamLimits

0xee37,	// (0x00094fa3) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0009528c) find_pinb_pane_t_ParamLimits

0xeb82,	// (0x00094cee) main_call3_pane

0x2e82,	// (0x00088fee) cale_month_day_heading_pane_t1_ParamLimits

0x2f08,	// (0x00089074) cale_month_day_heading_pane_t2_ParamLimits

0x2f81,	// (0x000890ed) cale_month_day_heading_pane_t3_ParamLimits

0x2ffa,	// (0x00089166) cale_month_day_heading_pane_t4_ParamLimits

0x307b,	// (0x000891e7) cale_month_day_heading_pane_t5_ParamLimits

0x3104,	// (0x00089270) cale_month_day_heading_pane_t6_ParamLimits

0x318d,	// (0x000892f9) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0009540e) cale_month_day_heading_pane_t_ParamLimits

0x3439,	// (0x000895a5) smil_status_volume_pane

0x464c,	// (0x0008a7b8) postcard_address_pane_ParamLimits

0x464c,	// (0x0008a7b8) postcard_address_pane

0x465e,	// (0x0008a7ca) postcard_message_pane_ParamLimits

0x465e,	// (0x0008a7ca) postcard_message_pane

0x5b69,	// (0x0008bcd5) call2_cli_visual_pane_t1_ParamLimits

0x5b69,	// (0x0008bcd5) call2_cli_visual_pane_t1

0x6389,	// (0x0008c4f5) postcard_message_pane_t1_ParamLimits

0x6389,	// (0x0008c4f5) postcard_message_pane_t1

0x6372,	// (0x0008c4de) postcard_address_pane_t1_ParamLimits

0x6372,	// (0x0008c4de) postcard_address_pane_t1

0x635e,	// (0x0008c4ca) popup_call3_audio_in_window_ParamLimits

0x635e,	// (0x0008c4ca) popup_call3_audio_in_window

0x61e9,	// (0x0008c355) bg_popup_call3_in_pane_ParamLimits

0x61e9,	// (0x0008c355) bg_popup_call3_in_pane

0x625f,	// (0x0008c3cb) popup_call3_audio_in_window_g1_ParamLimits

0x625f,	// (0x0008c3cb) popup_call3_audio_in_window_g1

0x627f,	// (0x0008c3eb) popup_call3_audio_in_window_g2_ParamLimits

0x627f,	// (0x0008c3eb) popup_call3_audio_in_window_g2

0x629f,	// (0x0008c40b) popup_call3_audio_in_window_g3_ParamLimits

0x629f,	// (0x0008c40b) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0009577a) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0009577a) popup_call3_audio_in_window_g

0x62d0,	// (0x0008c43c) popup_call3_audio_in_window_t1_ParamLimits

0x62d0,	// (0x0008c43c) popup_call3_audio_in_window_t1

0x630e,	// (0x0008c47a) popup_call3_audio_in_window_t2_ParamLimits

0x630e,	// (0x0008c47a) popup_call3_audio_in_window_t2

0x634c,	// (0x0008c4b8) popup_call3_audio_in_window_t3_ParamLimits

0x634c,	// (0x0008c4b8) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x00095783) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x00095783) popup_call3_audio_in_window_t

0x1deb,	// (0x00087f57) bg_popup_call3_rect_pane

0xb499,	// (0x00091605) bg_popup_call3_rect_pane_g1

0x177e,	// (0x000878ea) bg_popup_call3_rect_pane_g2

0xb4a1,	// (0x0009160d) bg_popup_call3_rect_pane_g3

0xb4a9,	// (0x00091615) bg_popup_call3_rect_pane_g4

0xb4b1,	// (0x0009161d) bg_popup_call3_rect_pane_g5

0xb4b9,	// (0x00091625) bg_popup_call3_rect_pane_g6

0xb4c1,	// (0x0009162d) bg_popup_call3_rect_pane_g7

0x41f0,	// (0x0008a35c) mup_visualizer_osc_pane

0x4206,	// (0x0008a372) mup_visualizer_spec_pane

0x6219,	// (0x0008c385) call3_video_qcif_pane_ParamLimits

0x6219,	// (0x0008c385) call3_video_qcif_pane

0x622c,	// (0x0008c398) call3_video_qcif_uncrop_pane_ParamLimits

0x622c,	// (0x0008c398) call3_video_qcif_uncrop_pane

0x623a,	// (0x0008c3a6) call3_video_subqcif_pane_ParamLimits

0x623a,	// (0x0008c3a6) call3_video_subqcif_pane

0x624e,	// (0x0008c3ba) call3_video_subqcif_uncrop_pane_ParamLimits

0x624e,	// (0x0008c3ba) call3_video_subqcif_uncrop_pane

0x62bf,	// (0x0008c42b) popup_call3_audio_in_window_g4_ParamLimits

0x62bf,	// (0x0008c42b) popup_call3_audio_in_window_g4

0x61d8,	// (0x0008c344) mup_spec_half_pane

0x61e1,	// (0x0008c34d) mup_spec_half_pane_cp

0xb752,	// (0x000918be) mup_osc_middle_pane

0xb75b,	// (0x000918c7) mup_visualizer_osc_pane_g1

0x61b8,	// (0x0008c324) mup_spec_bar_pane_ParamLimits

0x61b8,	// (0x0008c324) mup_spec_bar_pane

0xb73f,	// (0x000918ab) mup_spec_bar_pane_g1

0xb749,	// (0x000918b5) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0009576e) mup_spec_bar_pane_g

0x17ff,	// (0x0008796b) aid_cale_week_size_cell_pane_ParamLimits

0x1819,	// (0x00087985) bg_cale_heading_pane_ParamLimits

0x1831,	// (0x0008799d) bg_cale_pane_cp01_ParamLimits

0x184e,	// (0x000879ba) cale_week_corner_pane_ParamLimits

0x186d,	// (0x000879d9) cale_week_day_heading_pane_ParamLimits

0x188a,	// (0x000879f6) cale_week_scroll_pane_g1_ParamLimits

0x189d,	// (0x00087a09) cale_week_scroll_pane_g2_ParamLimits

0x18b5,	// (0x00087a21) cale_week_scroll_pane_g3_ParamLimits

0x18cd,	// (0x00087a39) cale_week_scroll_pane_g4_ParamLimits

0x18e5,	// (0x00087a51) cale_week_scroll_pane_g5_ParamLimits

0x1905,	// (0x00087a71) cale_week_scroll_pane_g6_ParamLimits

0x1925,	// (0x00087a91) cale_week_scroll_pane_g7_ParamLimits

0x1945,	// (0x00087ab1) cale_week_scroll_pane_g8_ParamLimits

0x1969,	// (0x00087ad5) cale_week_scroll_pane_g9_ParamLimits

0x1981,	// (0x00087aed) cale_week_scroll_pane_g10_ParamLimits

0x1999,	// (0x00087b05) cale_week_scroll_pane_g11_ParamLimits

0x19b1,	// (0x00087b1d) cale_week_scroll_pane_g12_ParamLimits

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g13_ParamLimits

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g14_ParamLimits

0x19c9,	// (0x00087b35) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00095318) cale_week_scroll_pane_g_ParamLimits

0x1a05,	// (0x00087b71) cale_week_time_pane_ParamLimits

0x1a29,	// (0x00087b95) grid_cale_week_pane_ParamLimits

0x1a4f,	// (0x00087bbb) listscroll_cale_week_pane_t1

0x1a61,	// (0x00087bcd) scroll_pane_cp08_ParamLimits

0x29e5,	// (0x00088b51) cale_month_corner_pane_ParamLimits

0x2e03,	// (0x00088f6f) cale_month_pane_t1

0x2e15,	// (0x00088f81) cale_month_week_pane_ParamLimits

0x3877,	// (0x000899e3) popup_call_status_window_g1_ParamLimits

0x388b,	// (0x000899f7) popup_call_status_window_g2_ParamLimits

0x389f,	// (0x00089a0b) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000954be) popup_call_status_window_g_ParamLimits

0x3907,	// (0x00089a73) aid_call2_pane

0x03e9,	// (0x00086555) msg_header_pane_g1

0x464c,	// (0x0008a7b8) postcard_address2_pane_ParamLimits

0x464c,	// (0x0008a7b8) postcard_address2_pane

0x465e,	// (0x0008a7ca) postcard_message2_pane_ParamLimits

0x465e,	// (0x0008a7ca) postcard_message2_pane

0x616a,	// (0x0008c2d6) message2_row_pane_ParamLimits

0x616a,	// (0x0008c2d6) message2_row_pane

0x6186,	// (0x0008c2f2) address2_row_pane_ParamLimits

0x6186,	// (0x0008c2f2) address2_row_pane

0xb70d,	// (0x00091879) postcard_message2_row_pane_g1

0xb715,	// (0x00091881) postcard_message2_row_pane_t1

0xb70d,	// (0x00091879) address2_row_pane_g1

0xb715,	// (0x00091881) address2_row_pane_t1

0x1de3,	// (0x00087f4f) aid_size_cell_vorec

0xeb82,	// (0x00094cee) main_rss_pane

0x6199,	// (0x0008c305) rss_list_single_pane_ParamLimits

0x6199,	// (0x0008c305) rss_list_single_pane

0xb723,	// (0x0009188f) rss_list_single_pane_t1

0xb731,	// (0x0009189d) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x00095769) rss_list_single_pane_t

0xeb82,	// (0x00094cee) main_camera2_pane

0xeb82,	// (0x00094cee) main_video2_pane

0x6402,	// (0x0008c56e) cams_zoom_pane_cp2_ParamLimits

0x6402,	// (0x0008c56e) cams_zoom_pane_cp2

0x6422,	// (0x0008c58e) image2_vga_pane_ParamLimits

0x6422,	// (0x0008c58e) image2_vga_pane

0x6473,	// (0x0008c5df) main_camera2_pane_g1_ParamLimits

0x6473,	// (0x0008c5df) main_camera2_pane_g1

0x6493,	// (0x0008c5ff) main_camera2_pane_g2_ParamLimits

0x6493,	// (0x0008c5ff) main_camera2_pane_g2

0x64b3,	// (0x0008c61f) main_camera2_pane_g3_ParamLimits

0x64b3,	// (0x0008c61f) main_camera2_pane_g3

0x64d3,	// (0x0008c63f) main_camera2_pane_g4_ParamLimits

0x64d3,	// (0x0008c63f) main_camera2_pane_g4

0x64f3,	// (0x0008c65f) main_camera2_pane_g5_ParamLimits

0x64f3,	// (0x0008c65f) main_camera2_pane_g5

0x6513,	// (0x0008c67f) main_camera2_pane_g6_ParamLimits

0x6513,	// (0x0008c67f) main_camera2_pane_g6

0x6533,	// (0x0008c69f) main_camera2_pane_g7_ParamLimits

0x6533,	// (0x0008c69f) main_camera2_pane_g7

0x6553,	// (0x0008c6bf) main_camera2_pane_g8_ParamLimits

0x6553,	// (0x0008c6bf) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0009578a) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0009578a) main_camera2_pane_g

0x6593,	// (0x0008c6ff) main_camera2_pane_t1_ParamLimits

0x6593,	// (0x0008c6ff) main_camera2_pane_t1

0x65c8,	// (0x0008c734) main_camera2_pane_t2_ParamLimits

0x65c8,	// (0x0008c734) main_camera2_pane_t2

0x65ee,	// (0x0008c75a) main_camera2_pane_t3_ParamLimits

0x65ee,	// (0x0008c75a) main_camera2_pane_t3

0x664c,	// (0x0008c7b8) main_camera2_pane_t4_ParamLimits

0x664c,	// (0x0008c7b8) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0009579d) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0009579d) main_camera2_pane_t

0x66de,	// (0x0008c84a) cams_zoom_pane_cp4_ParamLimits

0x66de,	// (0x0008c84a) cams_zoom_pane_cp4

0x66f4,	// (0x0008c860) image2_cif_pane_ParamLimits

0x66f4,	// (0x0008c860) image2_cif_pane

0x671f,	// (0x0008c88b) image2_subqcif_pane_ParamLimits

0x671f,	// (0x0008c88b) image2_subqcif_pane

0x6739,	// (0x0008c8a5) main_video2_pane_g1_ParamLimits

0x6739,	// (0x0008c8a5) main_video2_pane_g1

0x6753,	// (0x0008c8bf) main_video2_pane_g2_ParamLimits

0x6753,	// (0x0008c8bf) main_video2_pane_g2

0x6769,	// (0x0008c8d5) main_video2_pane_g3_ParamLimits

0x6769,	// (0x0008c8d5) main_video2_pane_g3

0x677f,	// (0x0008c8eb) main_video2_pane_g4_ParamLimits

0x677f,	// (0x0008c8eb) main_video2_pane_g4

0x6795,	// (0x0008c901) main_video2_pane_g5_ParamLimits

0x6795,	// (0x0008c901) main_video2_pane_g5

0x67ab,	// (0x0008c917) main_video2_pane_g6_ParamLimits

0x67ab,	// (0x0008c917) main_video2_pane_g6

0x0005,

0xf640,	// (0x000957ac) main_video2_pane_g_ParamLimits

0xf640,	// (0x000957ac) main_video2_pane_g

0x67c5,	// (0x0008c931) main_video2_pane_t1_ParamLimits

0x67c5,	// (0x0008c931) main_video2_pane_t1

0x67e9,	// (0x0008c955) main_video2_pane_t2_ParamLimits

0x67e9,	// (0x0008c955) main_video2_pane_t2

0x6837,	// (0x0008c9a3) main_video2_pane_t3_ParamLimits

0x6837,	// (0x0008c9a3) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000957b9) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000957b9) main_video2_pane_t

0x5cb6,	// (0x0008be22) call_muted_g2

0x0001,

0xf5ef,	// (0x0009575b) call_muted_g

0xeb82,	// (0x00094cee) main_mup2_pane

0x687b,	// (0x0008c9e7) main_mup2_pane_g1_ParamLimits

0x687b,	// (0x0008c9e7) main_mup2_pane_g1

0x6887,	// (0x0008c9f3) main_mup2_pane_g2_ParamLimits

0x6887,	// (0x0008c9f3) main_mup2_pane_g2

0xb8c3,	// (0x00091a2f) main_mup_pane_g13_cp1

0xb8cb,	// (0x00091a37) mup_volume_pane_cp1

0x68a3,	// (0x0008ca0f) main_mup2_pane_g4_ParamLimits

0x68a3,	// (0x0008ca0f) main_mup2_pane_g4

0x68b5,	// (0x0008ca21) main_mup2_pane_g5_ParamLimits

0x68b5,	// (0x0008ca21) main_mup2_pane_g5

0x68c7,	// (0x0008ca33) main_mup2_pane_g6_ParamLimits

0x68c7,	// (0x0008ca33) main_mup2_pane_g6

0x68d9,	// (0x0008ca45) main_mup2_pane_g7_ParamLimits

0x68d9,	// (0x0008ca45) main_mup2_pane_g7

0x0006,

0xf654,	// (0x000957c0) main_mup2_pane_g_ParamLimits

0xf654,	// (0x000957c0) main_mup2_pane_g

0x68f1,	// (0x0008ca5d) main_mup2_pane_t1_ParamLimits

0x68f1,	// (0x0008ca5d) main_mup2_pane_t1

0x6907,	// (0x0008ca73) main_mup2_pane_t2_ParamLimits

0x6907,	// (0x0008ca73) main_mup2_pane_t2

0x691d,	// (0x0008ca89) main_mup2_pane_t3_ParamLimits

0x691d,	// (0x0008ca89) main_mup2_pane_t3

0x6933,	// (0x0008ca9f) main_mup2_pane_t4_ParamLimits

0x6933,	// (0x0008ca9f) main_mup2_pane_t4

0x694b,	// (0x0008cab7) main_mup2_pane_t5_ParamLimits

0x694b,	// (0x0008cab7) main_mup2_pane_t5

0x6963,	// (0x0008cacf) main_mup2_pane_t6_ParamLimits

0x6963,	// (0x0008cacf) main_mup2_pane_t6

0x0005,

0xf663,	// (0x000957cf) main_mup2_pane_t_ParamLimits

0xf663,	// (0x000957cf) main_mup2_pane_t

0x6993,	// (0x0008caff) mup2_visualizer_pane_ParamLimits

0x6993,	// (0x0008caff) mup2_visualizer_pane

0x69c1,	// (0x0008cb2d) mup_progress_pane_cp_ParamLimits

0x69c1,	// (0x0008cb2d) mup_progress_pane_cp

0xb8a5,	// (0x00091a11) mup_volume_pane_cp_ParamLimits

0xb8a5,	// (0x00091a11) mup_volume_pane_cp

0x69d5,	// (0x0008cb41) mup2_visualizer_pane_g1_ParamLimits

0x69d5,	// (0x0008cb41) mup2_visualizer_pane_g1

0xb7e4,	// (0x00091950) mup2_visualizer_pane_g2_ParamLimits

0xb7e4,	// (0x00091950) mup2_visualizer_pane_g2

0x69ec,	// (0x0008cb58) mup2_visualizer_pane_g3_ParamLimits

0x69ec,	// (0x0008cb58) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x000957dc) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x000957dc) mup2_visualizer_pane_g

0x4a18,	// (0x0008ab84) aid_size_cell_fmradio

0x5e68,	// (0x0008bfd4) aid_height_parent_landcape

0x2700,	// (0x0008886c) wml_content_pane_cp

0x2708,	// (0x00088874) wml_tabs_pane

0x2711,	// (0x0008887d) popup_wml_miniature_window

0x2719,	// (0x00088885) scroll_pane_cp021

0x272d,	// (0x00088899) wml_content_pane_comp8

0xeb82,	// (0x00094cee) bg_popup_sub_pane_cp05

0xb802,	// (0x0009196e) popup_wml_miniature_window_g1

0xb80a,	// (0x00091976) wml_miniature_view_pane

0x69f8,	// (0x0008cb64) aid_size_wml_view

0x6a00,	// (0x0008cb6c) wml_miniature_view_pane_g1

0x6a09,	// (0x0008cb75) wml_miniature_view_pane_g2

0x6a12,	// (0x0008cb7e) wml_miniature_view_pane_g3

0x6a1a,	// (0x0008cb86) wml_miniature_view_pane_g4

0x6a22,	// (0x0008cb8e) wml_miniature_view_pane_g5

0x6a2a,	// (0x0008cb96) wml_miniature_view_pane_g6

0x6a32,	// (0x0008cb9e) wml_miniature_view_pane_g7

0x6a3a,	// (0x0008cba6) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x000957e3) wml_miniature_view_pane_g

0xb812,	// (0x0009197e) background_graphic_ParamLimits

0xb812,	// (0x0009197e) background_graphic

0xb81e,	// (0x0009198a) wml_tabs_2_pane

0xb827,	// (0x00091993) wml_tabs_3_pane_ParamLimits

0xb827,	// (0x00091993) wml_tabs_3_pane

0xb839,	// (0x000919a5) wml_tabs_4_pane_ParamLimits

0xb839,	// (0x000919a5) wml_tabs_4_pane

0xb84f,	// (0x000919bb) wml_tabs_5_pane_ParamLimits

0xb84f,	// (0x000919bb) wml_tabs_5_pane

0xb869,	// (0x000919d5) wml_tabs_pane_g2_ParamLimits

0xb869,	// (0x000919d5) wml_tabs_pane_g2

0xb87d,	// (0x000919e9) wml_tabs_pane_g3_ParamLimits

0xb87d,	// (0x000919e9) wml_tabs_pane_g3

0x6a42,	// (0x0008cbae) wml_tabs_2_active_pane_ParamLimits

0x6a42,	// (0x0008cbae) wml_tabs_2_active_pane

0x6a56,	// (0x0008cbc2) wml_tabs_2_passive_pane_ParamLimits

0x6a56,	// (0x0008cbc2) wml_tabs_2_passive_pane

0x6a6a,	// (0x0008cbd6) wml_tabs_3_active_pane_cp_ParamLimits

0x6a6a,	// (0x0008cbd6) wml_tabs_3_active_pane_cp

0x6a7f,	// (0x0008cbeb) wml_tabs_3_passive_pane_ParamLimits

0x6a7f,	// (0x0008cbeb) wml_tabs_3_passive_pane

0x6a92,	// (0x0008cbfe) wml_tabs_3_passive_pane_cp_ParamLimits

0x6a92,	// (0x0008cbfe) wml_tabs_3_passive_pane_cp

0x6aa9,	// (0x0008cc15) tabs_4_active_pane

0x6ab1,	// (0x0008cc1d) tabs_4_passive_pane

0x6abb,	// (0x0008cc27) tabs_4_passive_pane_cp

0x6ac3,	// (0x0008cc2f) tabs_4_passive_pane_cp2

0x5b83,	// (0x0008bcef) aid_height_text

0x41c6,	// (0x0008a332) mup_volume_cont_pane_ParamLimits

0x41c6,	// (0x0008a332) mup_volume_cont_pane

0x1399,	// (0x00087505) aid_size_cell_pinb

0x13a3,	// (0x0008750f) aid_size_list_pinb

0x69ad,	// (0x0008cb19) mup2_volume_cont_pane_ParamLimits

0x69ad,	// (0x0008cb19) mup2_volume_cont_pane

0xb891,	// (0x000919fd) mup2_volume_cont_pane_g1_ParamLimits

0xb891,	// (0x000919fd) mup2_volume_cont_pane_g1

0x105c,	// (0x000871c8) aid_size_cell_touch_ParamLimits

0x105c,	// (0x000871c8) aid_size_cell_touch

0x1289,	// (0x000873f5) touch_pane_ParamLimits

0x1289,	// (0x000873f5) touch_pane

0xe757,	// (0x000948c3) main_rss2_pane

0xb8d3,	// (0x00091a3f) listscroll_rss2_pane

0xb8dc,	// (0x00091a48) rss2_navigation_pane

0xb8e4,	// (0x00091a50) list_rss2_pane

0x3ac1,	// (0x00089c2d) scroll_pane_cp22

0xb8ec,	// (0x00091a58) rss2_navigation_pane_g1

0xb8f5,	// (0x00091a61) rss2_navigation_pane_g2

0xb8fd,	// (0x00091a69) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x000957f4) rss2_navigation_pane_g

0xb905,	// (0x00091a71) rss2_navigation_pane_t1

0x6acd,	// (0x0008cc39) rss2_list_single_pane_ParamLimits

0x6acd,	// (0x0008cc39) rss2_list_single_pane

0xb913,	// (0x00091a7f) rss2_list_single_pane_t2

0xb921,	// (0x00091a8d) rss2_list_single_pane_t3_ParamLimits

0xb921,	// (0x00091a8d) rss2_list_single_pane_t3

0xb93e,	// (0x00091aaa) rss2_list_single_pane_t4

0x3421,	// (0x0008958d) smil_status_pane_g1

0xe761,	// (0x000948cd) main_image2_pane_ParamLimits

0xe761,	// (0x000948cd) main_image2_pane

0x6573,	// (0x0008c6df) main_camera2_pane_g9_ParamLimits

0x6573,	// (0x0008c6df) main_camera2_pane_g9

0x66a1,	// (0x0008c80d) main_camera2_pane_t5_ParamLimits

0x66a1,	// (0x0008c80d) main_camera2_pane_t5

0xb7b4,	// (0x00091920) main_camera2_pane_t6_ParamLimits

0xb7b4,	// (0x00091920) main_camera2_pane_t6

0x6ae2,	// (0x0008cc4e) main_image2_pane_g1_ParamLimits

0x6ae2,	// (0x0008cc4e) main_image2_pane_g1

0x49ce,	// (0x0008ab3a) smil2_video_pane_ParamLimits

0x49ce,	// (0x0008ab3a) smil2_video_pane

0xb28c,	// (0x000913f8) aid_zoom_text_primary_cp

0xb2cc,	// (0x00091438) popup_preview_fixed_window

0x25f8,	// (0x00088764) im_reading_pane_g1

0x63ea,	// (0x0008c556) cams2_bc_adjust_pane_cp_ParamLimits

0x63ea,	// (0x0008c556) cams2_bc_adjust_pane_cp

0x66d0,	// (0x0008c83c) cams2_bc_adjust_pane_ParamLimits

0x66d0,	// (0x0008c83c) cams2_bc_adjust_pane

0xb94c,	// (0x00091ab8) cams2_bc_adjust_pane_g1

0xb954,	// (0x00091ac0) cams2_slider_pane

0xb95d,	// (0x00091ac9) cams2_slider_pane_g1

0xb966,	// (0x00091ad2) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x000957fb) cams2_slider_pane_g

0x1491,	// (0x000875fd) calc_display_pane_ParamLimits

0x14b6,	// (0x00087622) calc_paper_pane_ParamLimits

0x14d9,	// (0x00087645) grid_calc_pane_ParamLimits

0xb3fe,	// (0x0009156a) popup_clock_digital_window_t1_ParamLimits

0x4855,	// (0x0008a9c1) main_image_pane_t1

0x1473,	// (0x000875df) aid_size_cell_calc_ParamLimits

0x1473,	// (0x000875df) aid_size_cell_calc

0x5eae,	// (0x0008c01a) popup_blid_sat_info2_window_ParamLimits

0x5eae,	// (0x0008c01a) popup_blid_sat_info2_window

0xb988,	// (0x00091af4) aid_size_cell_blid

0xb990,	// (0x00091afc) bg_popup_window_pane_cp07

0xb9b3,	// (0x00091b1f) grid_popup_blid_pane

0xb9bd,	// (0x00091b29) heading_pane_cp05_ParamLimits

0xb9bd,	// (0x00091b29) heading_pane_cp05

0xba87,	// (0x00091bf3) cell_popup_blid_pane_ParamLimits

0xba87,	// (0x00091bf3) cell_popup_blid_pane

0xbaab,	// (0x00091c17) cell_popup_blid_pane_g1

0xbab3,	// (0x00091c1f) cell_popup_blid_pane_t1

0x697d,	// (0x0008cae9) mup2_indicator_pane_ParamLimits

0x697d,	// (0x0008cae9) mup2_indicator_pane

0x1deb,	// (0x00087f57) mup2_visualizer_osc_pane

0xb7f0,	// (0x0009195c) mup2_visualizer_spec_pane_ParamLimits

0xb7f0,	// (0x0009195c) mup2_visualizer_spec_pane

0x6af8,	// (0x0008cc64) mup2_spec_half_pane

0x6b01,	// (0x0008cc6d) mup2_spec_half_pane_cp

0x6b09,	// (0x0008cc75) mup2_spec_bar_pane_ParamLimits

0x6b09,	// (0x0008cc75) mup2_spec_bar_pane

0xb73f,	// (0x000918ab) mup2_spec_bar_pane_g1

0xb749,	// (0x000918b5) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0009576e) mup2_spec_bar_pane_g

0x6b29,	// (0x0008cc95) mup2_osc_middle_pane

0xb75b,	// (0x000918c7) mup2_visualizer_osc_pane_g1

0xe78f,	// (0x000948fb) popup_number_entry_window_t1_ParamLimits

0xe7a2,	// (0x0009490e) popup_number_entry_window_t2_ParamLimits

0xe7b4,	// (0x00094920) popup_number_entry_window_t3_ParamLimits

0x12db,	// (0x00087447) popup_number_entry_window_t5_ParamLimits

0x12db,	// (0x00087447) popup_number_entry_window_t5

0xf0c6,	// (0x00095232) popup_number_entry_window_t_ParamLimits

0xe7c6,	// (0x00094932) text_title_cp2_ParamLimits

0xb43d,	// (0x000915a9) aid_hotspot_pointer_text2_pane

0xb463,	// (0x000915cf) main_viewer_pane_g9_ParamLimits

0xb463,	// (0x000915cf) main_viewer_pane_g9

0x2e03,	// (0x00088f6f) cale_month_pane_t1_ParamLimits

0x3493,	// (0x000895ff) bg_cale_pane_ParamLimits

0x34ab,	// (0x00089617) list_cale_pane_ParamLimits

0x34bc,	// (0x00089628) listscroll_cale_day_pane_t1

0x34ce,	// (0x0008963a) scroll_pane_cp09_ParamLimits

0x4274,	// (0x0008a3e0) main_mup_eq_pane_t1_ParamLimits

0x4274,	// (0x0008a3e0) main_mup_eq_pane_t1

0x428e,	// (0x0008a3fa) main_mup_eq_pane_t2_ParamLimits

0x428e,	// (0x0008a3fa) main_mup_eq_pane_t2

0x42a8,	// (0x0008a414) main_mup_eq_pane_t3_ParamLimits

0x42a8,	// (0x0008a414) main_mup_eq_pane_t3

0x42c4,	// (0x0008a430) main_mup_eq_pane_t4_ParamLimits

0x42c4,	// (0x0008a430) main_mup_eq_pane_t4

0x42e0,	// (0x0008a44c) main_mup_eq_pane_t5_ParamLimits

0x42e0,	// (0x0008a44c) main_mup_eq_pane_t5

0x42fc,	// (0x0008a468) main_mup_eq_pane_t6_ParamLimits

0x42fc,	// (0x0008a468) main_mup_eq_pane_t6

0x4310,	// (0x0008a47c) main_mup_eq_pane_t7_ParamLimits

0x4310,	// (0x0008a47c) main_mup_eq_pane_t7

0x4324,	// (0x0008a490) main_mup_eq_pane_t8_ParamLimits

0x4324,	// (0x0008a490) main_mup_eq_pane_t8

0x4338,	// (0x0008a4a4) main_mup_eq_pane_t9_ParamLimits

0x4338,	// (0x0008a4a4) main_mup_eq_pane_t9

0x4352,	// (0x0008a4be) main_mup_eq_pane_t10_ParamLimits

0x4352,	// (0x0008a4be) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000955bd) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000955bd) main_mup_eq_pane_t

0x4401,	// (0x0008a56d) mup_equalizer_pane_cp5_ParamLimits

0x4415,	// (0x0008a581) mup_equalizer_pane_cp6_ParamLimits

0x4429,	// (0x0008a595) mup_equalizer_pane_cp7_ParamLimits

0xe757,	// (0x000948c3) main_gallery_pane

0xb764,	// (0x000918d0) smil2_volume_pane

0xb76c,	// (0x000918d8) smil_status_volume_pane_g1_ParamLimits

0xb77f,	// (0x000918eb) smil_status_volume_pane_g2_ParamLimits

0xb792,	// (0x000918fe) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x00095773) smil_status_volume_pane_g_ParamLimits

0xb990,	// (0x00091afc) bg_popup_window_pane_cp07_ParamLimits

0xb99e,	// (0x00091b0a) blid_firmament_pane

0x6b32,	// (0x0008cc9e) aid_size_cell_gallery_ParamLimits

0x6b32,	// (0x0008cc9e) aid_size_cell_gallery

0x6b48,	// (0x0008ccb4) grid_gallery_pane_ParamLimits

0x6b48,	// (0x0008ccb4) grid_gallery_pane

0x6b61,	// (0x0008cccd) cell_gallery_pane_ParamLimits

0x6b61,	// (0x0008cccd) cell_gallery_pane

0xbac1,	// (0x00091c2d) bg_cell_gallery_focus_pane_ParamLimits

0xbac1,	// (0x00091c2d) bg_cell_gallery_focus_pane

0xbad3,	// (0x00091c3f) cell_gallery_pane_g1_ParamLimits

0xbad3,	// (0x00091c3f) cell_gallery_pane_g1

0x6baa,	// (0x0008cd16) cell_gallery_pane_g2_ParamLimits

0x6baa,	// (0x0008cd16) cell_gallery_pane_g2

0x6bb7,	// (0x0008cd23) cell_gallery_pane_g3_ParamLimits

0x6bb7,	// (0x0008cd23) cell_gallery_pane_g3

0xbadf,	// (0x00091c4b) cell_gallery_pane_g4_ParamLimits

0xbadf,	// (0x00091c4b) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x00095821) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x00095821) cell_gallery_pane_g

0xbaeb,	// (0x00091c57) bg_cell_gallery_focus_pane_g1

0xbaf3,	// (0x00091c5f) bg_cell_gallery_focus_pane_g2

0xbafb,	// (0x00091c67) bg_cell_gallery_focus_pane_g3

0xbb03,	// (0x00091c6f) bg_cell_gallery_focus_pane_g4

0xbb0b,	// (0x00091c77) bg_cell_gallery_focus_pane_g5

0xbb13,	// (0x00091c7f) bg_cell_gallery_focus_pane_g6

0xbb1b,	// (0x00091c87) bg_cell_gallery_focus_pane_g7

0xbb23,	// (0x00091c8f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0009582a) bg_cell_gallery_focus_pane_g

0xbb2b,	// (0x00091c97) aid_firma_cardinal

0xbb3f,	// (0x00091cab) blid_firmament_pane_t1

0xbb56,	// (0x00091cc2) blid_firmament_pane_t2

0xbb6d,	// (0x00091cd9) blid_firmament_pane_t3

0xbb84,	// (0x00091cf0) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0009583b) blid_firmament_pane_t

0xbb9b,	// (0x00091d07) blid_sat_info_pane

0xbbab,	// (0x00091d17) blid_sat_info_pane_g1

0xbbab,	// (0x00091d17) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x00095844) blid_sat_info_pane_g

0xbbb5,	// (0x00091d21) blid_sat_info_pane_t1

0xbbc3,	// (0x00091d2f) smil2_volume_content_pane

0xbbcc,	// (0x00091d38) smil2_volume_pane_g1

0xef23,	// (0x0009508f) smil2_volume_content_pane_g1

0xbbd4,	// (0x00091d40) smil2_volume_content_pane_g2

0xbbdd,	// (0x00091d49) smil2_volume_content_pane_g3

0xbbe6,	// (0x00091d52) smil2_volume_content_pane_g4

0xbbef,	// (0x00091d5b) smil2_volume_content_pane_g5

0xbbf8,	// (0x00091d64) smil2_volume_content_pane_g6

0xbc01,	// (0x00091d6d) smil2_volume_content_pane_g7

0xbc0a,	// (0x00091d76) smil2_volume_content_pane_g8

0xbc13,	// (0x00091d7f) smil2_volume_content_pane_g9

0xbc1c,	// (0x00091d88) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x00095849) smil2_volume_content_pane_g

0x1b0c,	// (0x00087c78) cale_week_day_heading_pane_t1_ParamLimits

0x1b36,	// (0x00087ca2) cale_week_day_heading_pane_t2_ParamLimits

0x1b65,	// (0x00087cd1) cale_week_day_heading_pane_t3_ParamLimits

0x1b94,	// (0x00087d00) cale_week_day_heading_pane_t4_ParamLimits

0x1bc3,	// (0x00087d2f) cale_week_day_heading_pane_t5_ParamLimits

0x1bfa,	// (0x00087d66) cale_week_day_heading_pane_t6_ParamLimits

0x1c31,	// (0x00087d9d) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00095339) cale_week_day_heading_pane_t_ParamLimits

0x1c5b,	// (0x00087dc7) bg_cale_side_pane_ParamLimits

0x1c69,	// (0x00087dd5) cale_week_time_pane_t1_ParamLimits

0x1c83,	// (0x00087def) cale_week_time_pane_t2_ParamLimits

0x1c9d,	// (0x00087e09) cale_week_time_pane_t3_ParamLimits

0x1cb7,	// (0x00087e23) cale_week_time_pane_t4_ParamLimits

0x1cd1,	// (0x00087e3d) cale_week_time_pane_t5_ParamLimits

0x1ceb,	// (0x00087e57) cale_week_time_pane_t6_ParamLimits

0x1d05,	// (0x00087e71) cale_week_time_pane_t7_ParamLimits

0x1d1f,	// (0x00087e8b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00095348) cale_week_time_pane_t_ParamLimits

0x1d39,	// (0x00087ea5) cell_cale_week_pane_g2_ParamLimits

0x1c5b,	// (0x00087dc7) bg_cale_side_pane_cp01_ParamLimits

0x321e,	// (0x0008938a) cale_month_week_pane_t1_ParamLimits

0x3237,	// (0x000893a3) cale_month_week_pane_t2_ParamLimits

0x3250,	// (0x000893bc) cale_month_week_pane_t3_ParamLimits

0x3269,	// (0x000893d5) cale_month_week_pane_t4_ParamLimits

0x3282,	// (0x000893ee) cale_month_week_pane_t5_ParamLimits

0x329b,	// (0x00089407) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0009541d) cale_month_week_pane_t_ParamLimits

0xb36e,	// (0x000914da) cell_cale_month_pane_g1_ParamLimits

0xe757,	// (0x000948c3) main_cale_event_viewer_pane

0xe757,	// (0x000948c3) listscroll_cale_event_viewer_pane

0xbc25,	// (0x00091d91) list_cale_ev_pane

0xbc2d,	// (0x00091d99) scroll_pane_cp023

0xbc39,	// (0x00091da5) field_cale_ev_pane_ParamLimits

0xbc39,	// (0x00091da5) field_cale_ev_pane

0xbc57,	// (0x00091dc3) field_cale_ev_content_pane_ParamLimits

0xbc57,	// (0x00091dc3) field_cale_ev_content_pane

0xbc63,	// (0x00091dcf) field_cale_ev_pane_g1_ParamLimits

0xbc63,	// (0x00091dcf) field_cale_ev_pane_g1

0xbc6f,	// (0x00091ddb) field_cale_ev_pane_g2_ParamLimits

0xbc6f,	// (0x00091ddb) field_cale_ev_pane_g2

0xbc87,	// (0x00091df3) field_cale_ev_pane_g3_ParamLimits

0xbc87,	// (0x00091df3) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0009585e) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0009585e) field_cale_ev_pane_g

0xbc9f,	// (0x00091e0b) field_cale_ev_pane_t1_ParamLimits

0xbc9f,	// (0x00091e0b) field_cale_ev_pane_t1

0xbcb6,	// (0x00091e22) field_cale_ev_content_pane_t1_ParamLimits

0xbcb6,	// (0x00091e22) field_cale_ev_content_pane_t1

0x44d3,	// (0x0008a63f) bg_button_pane_cp01

0x17e4,	// (0x00087950) listscroll_cale_week_pane_ParamLimits

0x17f6,	// (0x00087962) popup_toolbar_window_cp01

0x1a4f,	// (0x00087bbb) listscroll_cale_week_pane_t1_ParamLimits

0x17e4,	// (0x00087950) listscroll_cale_day_pane_ParamLimits

0x17f6,	// (0x00087962) popup_toolbar_window_cp02

0x34bc,	// (0x00089628) listscroll_cale_day_pane_t1_ParamLimits

0x17e4,	// (0x00087950) main_cale_month_pane_ParamLimits

0xb6dd,	// (0x00091849) popup_toolbar_window_cp03_ParamLimits

0xb6dd,	// (0x00091849) popup_toolbar_window_cp03

0x4833,	// (0x0008a99f) main_image_pane_g2_ParamLimits

0x4833,	// (0x0008a99f) main_image_pane_g2

0x4844,	// (0x0008a9b0) main_image_pane_g3_ParamLimits

0x4844,	// (0x0008a9b0) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0009564f) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0009564f) main_image_pane_g

0x4855,	// (0x0008a9c1) main_image_pane_t1_ParamLimits

0x486c,	// (0x0008a9d8) main_image_pane_t2_ParamLimits

0x486c,	// (0x0008a9d8) main_image_pane_t2

0x487e,	// (0x0008a9ea) main_image_pane_t3_ParamLimits

0x487e,	// (0x0008a9ea) main_image_pane_t3

0x48a6,	// (0x0008aa12) main_image_pane_t4_ParamLimits

0x48a6,	// (0x0008aa12) main_image_pane_t4

0x0003,

0xf4ea,	// (0x00095656) main_image_pane_t_ParamLimits

0xf4ea,	// (0x00095656) main_image_pane_t

0x48c6,	// (0x0008aa32) popup_image_details_window_cp01

0x48d0,	// (0x0008aa3c) popup_toobar_trans_pane_cp01_ParamLimits

0x48d0,	// (0x0008aa3c) popup_toobar_trans_pane_cp01

0x5f8d,	// (0x0008c0f9) popup_image_details_window_ParamLimits

0x5f8d,	// (0x0008c0f9) popup_image_details_window

0xb6b0,	// (0x0009181c) popup_image_focus_window

0x63a4,	// (0x0008c510) camera2_autofocus_pane_ParamLimits

0x63a4,	// (0x0008c510) camera2_autofocus_pane

0xe757,	// (0x000948c3) bg_popup_sub_pane_cp06

0xbcd4,	// (0x00091e40) popup_image_focus_window_g1

0xbcdc,	// (0x00091e48) popup_image_focus_window_g2

0xbce4,	// (0x00091e50) popup_image_focus_window_g3

0xbcec,	// (0x00091e58) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x00095865) popup_image_focus_window_g

0xbcf4,	// (0x00091e60) popup_image_focus_window_t1

0xbd02,	// (0x00091e6e) popup_image_focus_window_t2

0xbd12,	// (0x00091e7e) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0009586e) popup_image_focus_window_t

0xbd20,	// (0x00091e8c) camera2_autofocus_pane_g1

0xe761,	// (0x000948cd) bg_tb_trans_pane_cp01

0xbd2e,	// (0x00091e9a) popup_image_details_window_g1

0xbd41,	// (0x00091ead) popup_image_details_window_g2

0x0002,

0xf714,	// (0x00095880) popup_image_details_window_g

0xbd6a,	// (0x00091ed6) popup_image_details_window_t1

0xbd7c,	// (0x00091ee8) popup_image_details_window_t2

0xbd95,	// (0x00091f01) popup_image_details_window_t3

0xbda9,	// (0x00091f15) popup_image_details_window_t4

0xbdc4,	// (0x00091f30) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x00095887) popup_image_details_window_t

0xee8e,	// (0x00094ffa) bg_calc_paper_pane_ParamLimits

0xe757,	// (0x000948c3) grid_highlight_pane_cp013

0xb2de,	// (0x0009144a) list_calc_pane_ParamLimits

0xb2f0,	// (0x0009145c) scroll_pane_cp024

0xeea2,	// (0x0009500e) bg_calc_display_pane_ParamLimits

0x15d7,	// (0x00087743) calc_display_pane_t1_ParamLimits

0x15ec,	// (0x00087758) calc_display_pane_t2_ParamLimits

0xb2f8,	// (0x00091464) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000952b9) calc_display_pane_t_ParamLimits

0x16ac,	// (0x00087818) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000952d6) cell_calc_pane_g

0x16b5,	// (0x00087821) cell_calc_pane_t1

0xef01,	// (0x0009506d) grid_highlight_pane_cp02_ParamLimits

0xef17,	// (0x00095083) toolbar_button_pane_cp01_ParamLimits

0xef17,	// (0x00095083) toolbar_button_pane_cp01

0x4912,	// (0x0008aa7e) temp_image_control_pane_ParamLimits

0x4912,	// (0x0008aa7e) temp_image_control_pane

0xe761,	// (0x000948cd) main_mp3_pane

0xbdde,	// (0x00091f4a) temp_image_control_pane_g1_ParamLimits

0xbdde,	// (0x00091f4a) temp_image_control_pane_g1

0xbdec,	// (0x00091f58) temp_image_control_pane_g2_ParamLimits

0xbdec,	// (0x00091f58) temp_image_control_pane_g2

0xbdfe,	// (0x00091f6a) temp_image_control_pane_g3_ParamLimits

0xbdfe,	// (0x00091f6a) temp_image_control_pane_g3

0x6bf4,	// (0x0008cd60) temp_image_control_pane_g4_ParamLimits

0x6bf4,	// (0x0008cd60) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x00095892) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x00095892) temp_image_control_pane_g

0xbdde,	// (0x00091f4a) main_mp3_pane_g1

0x6c07,	// (0x0008cd73) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0009589b) main_mp3_pane_g

0xbe41,	// (0x00091fad) main_mp3_pane_t1

0x1f06,	// (0x00088072) main_camera_pane_g8_ParamLimits

0x1f06,	// (0x00088072) main_camera_pane_g8

0x20ae,	// (0x0008821a) main_video_pane_g7_ParamLimits

0x20ae,	// (0x0008821a) main_video_pane_g7

0xb7d2,	// (0x0009193e) main_camera2_pane_t7_ParamLimits

0xb7d2,	// (0x0009193e) main_camera2_pane_t7

0x26c0,	// (0x0008882c) scroll_pane_cp025_ParamLimits

0x26c0,	// (0x0008882c) scroll_pane_cp025

0x26d4,	// (0x00088840) scroll_pane_cp026_ParamLimits

0x26d4,	// (0x00088840) scroll_pane_cp026

0x26e3,	// (0x0008884f) wml_content_pane_ParamLimits

0xe757,	// (0x000948c3) main_touch_calib_pane

0x6cdb,	// (0x0008ce47) main_touch_calib_pane_g1

0x6ced,	// (0x0008ce59) main_touch_calib_pane_g2

0x6cff,	// (0x0008ce6b) main_touch_calib_pane_g3

0x6d11,	// (0x0008ce7d) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x000958b9) main_touch_calib_pane_g

0x6d23,	// (0x0008ce8f) main_touch_calib_pane_t1

0x6d3d,	// (0x0008cea9) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x000958c2) main_touch_calib_pane_t

0x3d69,	// (0x00089ed5) mup_progress_pane_cp02

0x3d9e,	// (0x00089f0a) navi_pane_g1

0x3e59,	// (0x00089fc5) navi_pane_mp_t3

0xe761,	// (0x000948cd) main_mp3_pane_ParamLimits

0x6112,	// (0x0008c27e) navi_pane_ParamLimits

0xbdde,	// (0x00091f4a) main_mp3_pane_g1_ParamLimits

0x6c07,	// (0x0008cd73) main_mp3_pane_g2_ParamLimits

0x6c15,	// (0x0008cd81) main_mp3_pane_g3_ParamLimits

0x6c15,	// (0x0008cd81) main_mp3_pane_g3

0x6c23,	// (0x0008cd8f) main_mp3_pane_g4_ParamLimits

0x6c23,	// (0x0008cd8f) main_mp3_pane_g4

0xbe0e,	// (0x00091f7a) main_mp3_pane_g5_ParamLimits

0xbe0e,	// (0x00091f7a) main_mp3_pane_g5

0xbe1c,	// (0x00091f88) main_mp3_pane_g6_ParamLimits

0xbe1c,	// (0x00091f88) main_mp3_pane_g6

0xbe29,	// (0x00091f95) main_mp3_pane_g7_ParamLimits

0xbe29,	// (0x00091f95) main_mp3_pane_g7

0xbe35,	// (0x00091fa1) main_mp3_pane_g8_ParamLimits

0xbe35,	// (0x00091fa1) main_mp3_pane_g8

0xf72f,	// (0x0009589b) main_mp3_pane_g_ParamLimits

0x6c2f,	// (0x0008cd9b) main_mp3_pane_t2

0x6c3d,	// (0x0008cda9) main_mp3_pane_t3

0xbe4f,	// (0x00091fbb) main_mp3_pane_t4

0xbe5d,	// (0x00091fc9) main_mp3_pane_t5

0x0005,

0xf740,	// (0x000958ac) main_mp3_pane_t

0xbe6b,	// (0x00091fd7) mup_progress_pane_cp01

0xb28c,	// (0x000913f8) aid_zoom_text_secondary2

0xbc25,	// (0x00091d91) list_cale_ev2_pane

0xbc2d,	// (0x00091d99) scroll_pane_cp023_ParamLimits

0x6d93,	// (0x0008ceff) field_cale_ev2_pane_ParamLimits

0x6d93,	// (0x0008ceff) field_cale_ev2_pane

0x6db3,	// (0x0008cf1f) field_cale_ev2_pane_g1_ParamLimits

0x6db3,	// (0x0008cf1f) field_cale_ev2_pane_g1

0x6dbf,	// (0x0008cf2b) field_cale_ev2_pane_g2_ParamLimits

0x6dbf,	// (0x0008cf2b) field_cale_ev2_pane_g2

0x6dd7,	// (0x0008cf43) field_cale_ev2_pane_g3_ParamLimits

0x6dd7,	// (0x0008cf43) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x000958cd) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x000958cd) field_cale_ev2_pane_g

0xbe7f,	// (0x00091feb) field_cale_ev2_pane_t1_ParamLimits

0xbe7f,	// (0x00091feb) field_cale_ev2_pane_t1

0xbe96,	// (0x00092002) field_cale_ev2_pane_t2_ParamLimits

0xbe96,	// (0x00092002) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x000958d6) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x000958d6) field_cale_ev2_pane_t

0x4602,	// (0x0008a76e) main_postcard_pane_g5_ParamLimits

0x4602,	// (0x0008a76e) main_postcard_pane_g5

0x4618,	// (0x0008a784) main_postcard_pane_g6_ParamLimits

0x4618,	// (0x0008a784) main_postcard_pane_g6

0x1e54,	// (0x00087fc0) camera2_autofocus_pane_cp_ParamLimits

0x1e54,	// (0x00087fc0) camera2_autofocus_pane_cp

0xe761,	// (0x000948cd) main_mup3_pane

0x6e13,	// (0x0008cf7f) main_mup3_pane_g1_ParamLimits

0x6e13,	// (0x0008cf7f) main_mup3_pane_g1

0x6e35,	// (0x0008cfa1) main_mup3_pane_g2_ParamLimits

0x6e35,	// (0x0008cfa1) main_mup3_pane_g2

0x6eb3,	// (0x0008d01f) main_mup3_pane_g3_ParamLimits

0x6eb3,	// (0x0008d01f) main_mup3_pane_g3

0x6ef9,	// (0x0008d065) main_mup3_pane_g4_ParamLimits

0x6ef9,	// (0x0008d065) main_mup3_pane_g4

0x6f3f,	// (0x0008d0ab) main_mup3_pane_g5_ParamLimits

0x6f3f,	// (0x0008d0ab) main_mup3_pane_g5

0x6f85,	// (0x0008d0f1) main_mup3_pane_g6_ParamLimits

0x6f85,	// (0x0008d0f1) main_mup3_pane_g6

0xbecb,	// (0x00092037) main_mup3_pane_g7_ParamLimits

0xbecb,	// (0x00092037) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x000958e6) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x000958e6) main_mup3_pane_g

0x7003,	// (0x0008d16f) main_mup3_pane_t1_ParamLimits

0x7003,	// (0x0008d16f) main_mup3_pane_t1

0x7077,	// (0x0008d1e3) main_mup3_pane_t2_ParamLimits

0x7077,	// (0x0008d1e3) main_mup3_pane_t2

0x714b,	// (0x0008d2b7) main_mup3_pane_t4_ParamLimits

0x714b,	// (0x0008d2b7) main_mup3_pane_t4

0x71a1,	// (0x0008d30d) main_mup3_pane_t5_ParamLimits

0x71a1,	// (0x0008d30d) main_mup3_pane_t5

0x725d,	// (0x0008d3c9) main_mup3_pane_t6_ParamLimits

0x725d,	// (0x0008d3c9) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x000958f7) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x000958f7) main_mup3_pane_t

0x7315,	// (0x0008d481) mup3_progress_pane_ParamLimits

0x7315,	// (0x0008d481) mup3_progress_pane

0x73ab,	// (0x0008d517) popup_mup3_control_window_ParamLimits

0x73ab,	// (0x0008d517) popup_mup3_control_window

0xbed9,	// (0x00092045) popup_mup3_text_window

0x73dd,	// (0x0008d549) mup3_progress_pane_t1

0x73fc,	// (0x0008d568) mup3_progress_pane_t2

0xbee1,	// (0x0009204d) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x00095904) mup3_progress_pane_t

0xbefe,	// (0x0009206a) mup_progress_pane_cp03

0xe757,	// (0x000948c3) bg_tb_trans_pane_cp04

0x741b,	// (0x0008d587) mup3_volume_pane

0x7423,	// (0x0008d58f) popup_mup3_control_window_g1

0x742c,	// (0x0008d598) mup3_volume_pane_g1

0x7435,	// (0x0008d5a1) mup3_volume_pane_g2

0x743e,	// (0x0008d5aa) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0009590b) mup3_volume_pane_g

0xe757,	// (0x000948c3) bg_tb_trans_pane_cp03

0xbf0e,	// (0x0009207a) popup_mup3_text_window_g1

0xbf16,	// (0x00092082) popup_mup3_text_window_t1

0xeeea,	// (0x00095056) list_calc_item_pane_g1_ParamLimits

0xb8ba,	// (0x00091a26) mup_volume_pane_cp_g1

0x6d57,	// (0x0008cec3) main_touch_calib_pane_t3

0x6d6b,	// (0x0008ced7) main_touch_calib_pane_t4

0x6d7f,	// (0x0008ceeb) main_touch_calib_pane_t5

0xb268,	// (0x000913d4) aid_cell_size_toolbar2

0xb270,	// (0x000913dc) aid_popup3_width_pane

0xb27c,	// (0x000913e8) aid_zoom_text_msg_primary

0x1e33,	// (0x00087f9f) vorec_t7

0xeeae,	// (0x0009501a) bg_calc_paper_pane_g1_ParamLimits

0xeeba,	// (0x00095026) bg_calc_paper_pane_g2_ParamLimits

0xeec6,	// (0x00095032) bg_calc_paper_pane_g3_ParamLimits

0xeed2,	// (0x0009503e) bg_calc_paper_pane_g4_ParamLimits

0xeede,	// (0x0009504a) bg_calc_paper_pane_g5_ParamLimits

0x1636,	// (0x000877a2) bg_calc_paper_pane_g6_ParamLimits

0x1645,	// (0x000877b1) bg_calc_paper_pane_g7_ParamLimits

0x1654,	// (0x000877c0) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000952c0) bg_calc_paper_pane_g_ParamLimits

0x1667,	// (0x000877d3) calc_bg_paper_pane_g9_ParamLimits

0x1fab,	// (0x00088117) image_qvga_pane_ParamLimits

0x1fab,	// (0x00088117) image_qvga_pane

0xeddd,	// (0x00094f49) bg_popup_sub_pane_cp04_ParamLimits

0x4791,	// (0x0008a8fd) popup_mup_playback_window_g1_ParamLimits

0x479d,	// (0x0008a909) popup_mup_playback_window_t1_ParamLimits

0x47b2,	// (0x0008a91e) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0009564a) popup_mup_playback_window_t_ParamLimits

0x6897,	// (0x0008ca03) main_mup2_pane_g3_ParamLimits

0x6897,	// (0x0008ca03) main_mup2_pane_g3

0x2351,	// (0x000884bd) popup_toolbar_window_cp04

0x4f94,	// (0x0008b100) popup_call2_audio_second_window_g3_ParamLimits

0x4f94,	// (0x0008b100) popup_call2_audio_second_window_g3

0x539e,	// (0x0008b50a) popup_call2_audio_first_window_g4_ParamLimits

0x539e,	// (0x0008b50a) popup_call2_audio_first_window_g4

0x5a1d,	// (0x0008bb89) popup_call2_audio_in_window_g4_ParamLimits

0x5a1d,	// (0x0008bb89) popup_call2_audio_in_window_g4

0x47c7,	// (0x0008a933) aid_area_sk_bg_cut_ParamLimits

0x47c7,	// (0x0008a933) aid_area_sk_bg_cut

0x47e5,	// (0x0008a951) aid_area_sk_bg_cut_2_ParamLimits

0x47e5,	// (0x0008a951) aid_area_sk_bg_cut_2

0x6b9a,	// (0x0008cd06) aid_placing_details_win

0x6ba2,	// (0x0008cd0e) aid_placing_details_win_2

0xbd20,	// (0x00091e8c) camera2_autofocus_pane_g1_ParamLimits

0x1222,	// (0x0008738e) popup_fixed_preview_cale_window_ParamLimits

0x1222,	// (0x0008738e) popup_fixed_preview_cale_window

0x3f19,	// (0x0008a085) navi_slider_pane_g3

0x3f22,	// (0x0008a08e) navi_slider_pane_g4

0x3f2b,	// (0x0008a097) navi_slider_pane_g5

0x3f19,	// (0x0008a085) navi_slider_pane_g6

0xb424,	// (0x00091590) navi_slider_pane_g7

0x4446,	// (0x0008a5b2) mup_scale_pane_g3

0x444f,	// (0x0008a5bb) mup_scale_pane_g4

0x4458,	// (0x0008a5c4) mup_scale_pane_g5

0x4461,	// (0x0008a5cd) mup_scale_pane_g6

0x446a,	// (0x0008a5d6) mup_scale_pane_g7

0x3f19,	// (0x0008a085) cams2_slider_pane_g3

0xb96f,	// (0x00091adb) cams2_slider_pane_g4

0xb977,	// (0x00091ae3) cams2_slider_pane_g5

0x3f19,	// (0x0008a085) cams2_slider_pane_g6

0xb97f,	// (0x00091aeb) cams2_slider_pane_g7

0xbbab,	// (0x00091d17) camera2_autofocus_pane_cp_g1

0xb684,	// (0x000917f0) bg_popup_preview_window_pane_cp02_ParamLimits

0xb684,	// (0x000917f0) bg_popup_preview_window_pane_cp02

0xbf24,	// (0x00092090) list_fp_cale_pane_ParamLimits

0xbf24,	// (0x00092090) list_fp_cale_pane

0xbf30,	// (0x0009209c) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf30,	// (0x0009209c) popup_fixed_preview_cale_window_t1

0x7447,	// (0x0008d5b3) popup_fixed_preview_cale_window_t2_ParamLimits

0x7447,	// (0x0008d5b3) popup_fixed_preview_cale_window_t2

0x745c,	// (0x0008d5c8) popup_fixed_preview_cale_window_t3_ParamLimits

0x745c,	// (0x0008d5c8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x00095912) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x00095912) popup_fixed_preview_cale_window_t

0x7471,	// (0x0008d5dd) list_single_fp_cale_pane_ParamLimits

0x7471,	// (0x0008d5dd) list_single_fp_cale_pane

0xbf4e,	// (0x000920ba) list_single_fp_cale_pane_g1_ParamLimits

0xbf4e,	// (0x000920ba) list_single_fp_cale_pane_g1

0xbf5a,	// (0x000920c6) list_single_fp_cale_pane_g2_ParamLimits

0xbf5a,	// (0x000920c6) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x00095919) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x00095919) list_single_fp_cale_pane_g

0xbf73,	// (0x000920df) list_single_fp_cale_pane_t1_ParamLimits

0xbf73,	// (0x000920df) list_single_fp_cale_pane_t1

0xbf85,	// (0x000920f1) list_single_fp_cale_pane_t2_ParamLimits

0xbf85,	// (0x000920f1) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x00095920) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x00095920) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe757,	// (0x000948c3) main_dialer_pane

0x7486,	// (0x0008d5f2) aid_cell_size_keypad

0x7490,	// (0x0008d5fc) dialer_ne_pane

0x7498,	// (0x0008d604) grid_dialer_command_1_pane

0x74a0,	// (0x0008d60c) grid_dialer_command_2_pane

0x74a8,	// (0x0008d614) grid_dialer_keypad_pane

0x74ba,	// (0x0008d626) bg_popup_call_pane_cp06_ParamLimits

0x74ba,	// (0x0008d626) bg_popup_call_pane_cp06

0x74c6,	// (0x0008d632) dialer_ne_clear_pane_ParamLimits

0x74c6,	// (0x0008d632) dialer_ne_clear_pane

0xbfb8,	// (0x00092124) dialer_ne_pane_g1

0xbfc0,	// (0x0009212c) dialer_ne_pane_t1_ParamLimits

0xbfc0,	// (0x0009212c) dialer_ne_pane_t1

0x74d2,	// (0x0008d63e) dialer_ne_pane_t2_ParamLimits

0x74d2,	// (0x0008d63e) dialer_ne_pane_t2

0x74fc,	// (0x0008d668) dialer_ne_pane_t3_ParamLimits

0x74fc,	// (0x0008d668) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x00095925) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x00095925) dialer_ne_pane_t

0x752c,	// (0x0008d698) dialer_ne_pane_t3_copy1_ParamLimits

0x752c,	// (0x0008d698) dialer_ne_pane_t3_copy1

0x755b,	// (0x0008d6c7) cell_dialer_keypad_pane_ParamLimits

0x755b,	// (0x0008d6c7) cell_dialer_keypad_pane

0x7572,	// (0x0008d6de) cell_dialer_command_1_pane_ParamLimits

0x7572,	// (0x0008d6de) cell_dialer_command_1_pane

0x7588,	// (0x0008d6f4) cell_dialer_command_2_pane_ParamLimits

0x7588,	// (0x0008d6f4) cell_dialer_command_2_pane

0xbfd2,	// (0x0009213e) bg_button_pane_cp02_ParamLimits

0xbfd2,	// (0x0009213e) bg_button_pane_cp02

0x7597,	// (0x0008d703) cell_dialer_keypad_pane_g1_ParamLimits

0x7597,	// (0x0008d703) cell_dialer_keypad_pane_g1

0xbfd2,	// (0x0009213e) bg_button_pane_cp03_ParamLimits

0xbfd2,	// (0x0009213e) bg_button_pane_cp03

0x75ab,	// (0x0008d717) cell_dialer_command_1_pane_g1_ParamLimits

0x75ab,	// (0x0008d717) cell_dialer_command_1_pane_g1

0xbfde,	// (0x0009214a) bg_button_pane_cp04

0x75bf,	// (0x0008d72b) cell_dialer_command_2_pane_g1

0x1deb,	// (0x00087f57) bg_button_pane_cp06

0xbfe6,	// (0x00092152) dialer_ne_clear_pane_g1

0x3daa,	// (0x00089f16) navi_pane_g2

0x3dd8,	// (0x00089f44) navi_pane_g3

0x0002,

0xf3e1,	// (0x0009554d) navi_pane_g

0x3e67,	// (0x00089fd3) navi_pane_mv_g2

0x3e8e,	// (0x00089ffa) navi_pane_mv_g5

0x3e96,	// (0x0008a002) navi_pane_mv_t1

0xeea2,	// (0x0009500e) main_clock2_pane

0xe761,	// (0x000948cd) main_clock2_list_pane_ParamLimits

0xe761,	// (0x000948cd) main_clock2_list_pane

0x7630,	// (0x0008d79c) main_clock2_pane_t1_ParamLimits

0x7630,	// (0x0008d79c) main_clock2_pane_t1

0x766b,	// (0x0008d7d7) main_clock2_pane_t2_ParamLimits

0x766b,	// (0x0008d7d7) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x00095931) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x00095931) main_clock2_pane_t

0x770b,	// (0x0008d877) popup_clock_analogue_window_cp03_ParamLimits

0x770b,	// (0x0008d877) popup_clock_analogue_window_cp03

0x7730,	// (0x0008d89c) popup_clock_digital_window_cp02_ParamLimits

0x7730,	// (0x0008d89c) popup_clock_digital_window_cp02

0x77a9,	// (0x0008d915) main_clock2_list_single_pane_ParamLimits

0x77a9,	// (0x0008d915) main_clock2_list_single_pane

0x1deb,	// (0x00087f57) list_highlight_pane_cp05

0xc024,	// (0x00092190) main_clock2_list_single_pane_t1

0x2351,	// (0x000884bd) popup_toolbar_window_cp04_ParamLimits

0x6bc4,	// (0x0008cd30) camera2_autofocus_pane_g2_ParamLimits

0x6bc4,	// (0x0008cd30) camera2_autofocus_pane_g2

0x6bd0,	// (0x0008cd3c) camera2_autofocus_pane_g3_ParamLimits

0x6bd0,	// (0x0008cd3c) camera2_autofocus_pane_g3

0x6bdc,	// (0x0008cd48) camera2_autofocus_pane_g4_ParamLimits

0x6bdc,	// (0x0008cd48) camera2_autofocus_pane_g4

0x6be8,	// (0x0008cd54) camera2_autofocus_pane_g5_ParamLimits

0x6be8,	// (0x0008cd54) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x00095875) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x00095875) camera2_autofocus_pane_g

0xbeab,	// (0x00092017) camera2_autofocus_pane_cp_g2

0xbeb3,	// (0x0009201f) camera2_autofocus_pane_cp_g3

0xbebb,	// (0x00092027) camera2_autofocus_pane_cp_g4

0xbec3,	// (0x0009202f) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x000958db) camera2_autofocus_pane_cp_g

0x74b2,	// (0x0008d61e) popup_dialer_spcha_window

0xe757,	// (0x000948c3) bg_popup_sub_pane_cp07

0xc032,	// (0x0009219e) list_spcha_pane

0xc03a,	// (0x000921a6) list_single_spcha_pane_ParamLimits

0xc03a,	// (0x000921a6) list_single_spcha_pane

0xe757,	// (0x000948c3) list_highlight_pane_cp06

0xc04b,	// (0x000921b7) list_single_spcha_pane_t1

0x57c7,	// (0x0008b933) popup_call2_audio_out_window_g4_ParamLimits

0x57c7,	// (0x0008b933) popup_call2_audio_out_window_g4

0xe757,	// (0x000948c3) main_imed2_pane

0xb6b8,	// (0x00091824) popup_imed_adjust2_window

0x5fa5,	// (0x0008c111) popup_imed_trans_window_ParamLimits

0x5fa5,	// (0x0008c111) popup_imed_trans_window

0xb9e9,	// (0x00091b55) popup_blid_sat_info2_window_t1

0xb9f7,	// (0x00091b63) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0009580a) popup_blid_sat_info2_window_t

0x785a,	// (0x0008d9c6) aid_size_cell_colour_35

0x787a,	// (0x0008d9e6) aid_size_cell_colour_112

0x789a,	// (0x0008da06) aid_size_cell_effect

0xb690,	// (0x000917fc) bg_tb_trans_pane_cp02

0x360c,	// (0x00089778) heading_imed_pane

0x78ba,	// (0x0008da26) listscroll_imed_pane

0xc059,	// (0x000921c5) heading_imed_pane_g1

0xc061,	// (0x000921cd) heading_imed_pane_t1

0xc06f,	// (0x000921db) grid_imed_colour_35_pane_ParamLimits

0xc06f,	// (0x000921db) grid_imed_colour_35_pane

0x78c6,	// (0x0008da32) grid_imed_effect_pane

0xc086,	// (0x000921f2) list_imed_aspect_pane

0x78dc,	// (0x0008da48) scroll_pane_cp027_ParamLimits

0x78dc,	// (0x0008da48) scroll_pane_cp027

0x78ed,	// (0x0008da59) cell_imed_effect_pane_ParamLimits

0x78ed,	// (0x0008da59) cell_imed_effect_pane

0xc08e,	// (0x000921fa) cell_imed_colour_pane_ParamLimits

0xc08e,	// (0x000921fa) cell_imed_colour_pane

0xc0d0,	// (0x0009223c) cell_imed_colour_pane_g1_ParamLimits

0xc0d0,	// (0x0009223c) cell_imed_colour_pane_g1

0xc0e1,	// (0x0009224d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc0e1,	// (0x0009224d) hgihlgiht_grid_pane_cp016

0x7914,	// (0x0008da80) cell_imed_effect_pane_g1

0x791c,	// (0x0008da88) grid_highlight_pane_cp017

0xc0f2,	// (0x0009225e) list_imed_single_pane_ParamLimits

0xc0f2,	// (0x0009225e) list_imed_single_pane

0xe757,	// (0x000948c3) list_highlight_pane_cp07

0xc107,	// (0x00092273) list_imed_aspect_pane_comp1_t1

0xb690,	// (0x000917fc) bg_tb_trans_pane_cp05

0xc129,	// (0x00092295) popup_imed_adjust2_window_g1

0xc150,	// (0x000922bc) popup_imed_adjust2_window_t1

0xc168,	// (0x000922d4) slider_imed_adjust_pane

0xc17c,	// (0x000922e8) slider_imed_adjust_pane_g1

0xc18c,	// (0x000922f8) slider_imed_adjust_pane_g2

0xc19c,	// (0x00092308) slider_imed_adjust_pane_g3

0xc1ad,	// (0x00092319) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0009594e) slider_imed_adjust_pane_g

0x7925,	// (0x0008da91) aid_size_cell_clipart2

0x7931,	// (0x0008da9d) grid_imed_clipart_pane

0xc1be,	// (0x0009232a) scroll_pane_cp031

0x793b,	// (0x0008daa7) cell_imed_clipart_pane_ParamLimits

0x793b,	// (0x0008daa7) cell_imed_clipart_pane

0x795d,	// (0x0008dac9) cell_imed_clipart_pane_g1

0xe757,	// (0x000948c3) grid_highlight_pane_cp014

0x760c,	// (0x0008d778) main_clock2_pane_g1_ParamLimits

0x760c,	// (0x0008d778) main_clock2_pane_g1

0x7750,	// (0x0008d8bc) aid_call2_pane_cp10

0x7762,	// (0x0008d8ce) aid_call_pane_cp10

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g1

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g2

0x7774,	// (0x0008d8e0) popup_clock_analogue_window_cp10_g3

0x7774,	// (0x0008d8e0) popup_clock_analogue_window_cp10_g4

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0009593c) popup_clock_analogue_window_cp10_g

0x778a,	// (0x0008d8f6) popup_clock_analogue_window_cp10_t1

0x77bb,	// (0x0008d927) clock_digital_number_pane_cp10_ParamLimits

0x77bb,	// (0x0008d927) clock_digital_number_pane_cp10

0x77d3,	// (0x0008d93f) clock_digital_number_pane_cp11_ParamLimits

0x77d3,	// (0x0008d93f) clock_digital_number_pane_cp11

0x77eb,	// (0x0008d957) clock_digital_number_pane_cp12_ParamLimits

0x77eb,	// (0x0008d957) clock_digital_number_pane_cp12

0x7805,	// (0x0008d971) clock_digital_number_pane_cp13_ParamLimits

0x7805,	// (0x0008d971) clock_digital_number_pane_cp13

0x781f,	// (0x0008d98b) clock_digital_separator_pane_cp10_ParamLimits

0x781f,	// (0x0008d98b) clock_digital_separator_pane_cp10

0x7839,	// (0x0008d9a5) popup_clock_digital_window_cp02_t1_ParamLimits

0x7839,	// (0x0008d9a5) popup_clock_digital_window_cp02_t1

0xedd5,	// (0x00094f41) clock_digital_number_pane_cp10_g1

0xedd5,	// (0x00094f41) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x00095957) clock_digital_number_pane_cp10_g

0xedd5,	// (0x00094f41) clock_digital_separator_pane_cp10_g1

0xedd5,	// (0x00094f41) clock_digital_separator_pane_g2_cp10

0x3ed8,	// (0x0008a044) navi_pane_vded_g4

0x3ee1,	// (0x0008a04d) navi_pane_vded_g5

0x3eea,	// (0x0008a056) navi_pane_vded_t1

0xe757,	// (0x000948c3) main_vded_pane

0x7966,	// (0x0008dad2) main_vded_pane_g1

0x7970,	// (0x0008dadc) main_vded_pane_g2

0x797a,	// (0x0008dae6) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0009595c) main_vded_pane_g

0x7984,	// (0x0008daf0) main_vded_pane_t1

0x7992,	// (0x0008dafe) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x00095963) main_vded_pane_t

0x79a0,	// (0x0008db0c) vded_slider_pane

0x79a8,	// (0x0008db14) vded_video_pane

0xc1c6,	// (0x00092332) vded_video_pane_g1

0x79b0,	// (0x0008db1c) vded_video_pane_g2

0xbbab,	// (0x00091d17) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x00095968) vded_video_pane_g

0xc1d0,	// (0x0009233c) vded_slider_pane_g1

0xb8ba,	// (0x00091a26) vded_slider_pane_g2

0xc1d9,	// (0x00092345) vded_slider_pane_g3

0xc1e2,	// (0x0009234e) vded_slider_pane_g4

0xc1eb,	// (0x00092357) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0009596f) vded_slider_pane_g

0x7393,	// (0x0008d4ff) mup3_rocker_pane_ParamLimits

0x7393,	// (0x0008d4ff) mup3_rocker_pane

0x79b9,	// (0x0008db25) mup3_control_keys_pane_g1

0x79c1,	// (0x0008db2d) mup3_control_keys_pane_g2

0x79c9,	// (0x0008db35) mup3_control_keys_pane_g3

0x79d1,	// (0x0008db3d) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0009597a) mup3_control_keys_pane_g

0x1259,	// (0x000873c5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1259,	// (0x000873c5) popup_toolbar2_fixed_window_cp01

0x73c7,	// (0x0008d533) popup_toolbar2_fixed_window_cp02_ParamLimits

0x73c7,	// (0x0008d533) popup_toolbar2_fixed_window_cp02

0x5106,	// (0x0008b272) popup_call2_audio_second_window_t4_ParamLimits

0x5106,	// (0x0008b272) popup_call2_audio_second_window_t4

0x5634,	// (0x0008b7a0) popup_call2_audio_first_window_t6_ParamLimits

0x5634,	// (0x0008b7a0) popup_call2_audio_first_window_t6

0x58ca,	// (0x0008ba36) popup_call2_audio_out_window_t6_ParamLimits

0x58ca,	// (0x0008ba36) popup_call2_audio_out_window_t6

0xe757,	// (0x000948c3) main_vitu_pane

0x79e1,	// (0x0008db4d) aid_size_cell_itu_ParamLimits

0x79e1,	// (0x0008db4d) aid_size_cell_itu

0xe761,	// (0x000948cd) bg_popup_window_pane_cp08_ParamLimits

0xe761,	// (0x000948cd) bg_popup_window_pane_cp08

0x79f7,	// (0x0008db63) field_vitu_entry_pane_ParamLimits

0x79f7,	// (0x0008db63) field_vitu_entry_pane

0x7a0e,	// (0x0008db7a) grid_vitu_function_pane_ParamLimits

0x7a0e,	// (0x0008db7a) grid_vitu_function_pane

0x7a29,	// (0x0008db95) grid_vitu_itu_pane_ParamLimits

0x7a29,	// (0x0008db95) grid_vitu_itu_pane

0x7a47,	// (0x0008dbb3) cell_vitu_itu_pane_ParamLimits

0x7a47,	// (0x0008dbb3) cell_vitu_itu_pane

0x7a69,	// (0x0008dbd5) cell_vitu_function_pane_ParamLimits

0x7a69,	// (0x0008dbd5) cell_vitu_function_pane

0xe761,	// (0x000948cd) bg_popup_sub_pane_cp08_ParamLimits

0xe761,	// (0x000948cd) bg_popup_sub_pane_cp08

0x7a82,	// (0x0008dbee) field_vitu_entry_pane_t1_ParamLimits

0x7a82,	// (0x0008dbee) field_vitu_entry_pane_t1

0xc20c,	// (0x00092378) field_vitu_entry_pane_t2_ParamLimits

0xc20c,	// (0x00092378) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x00095988) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x00095988) field_vitu_entry_pane_t

0xc229,	// (0x00092395) bg_button_pane_cp05_ParamLimits

0xc229,	// (0x00092395) bg_button_pane_cp05

0x7aa0,	// (0x0008dc0c) cell_vitu_itu_pane_g1

0x7ab8,	// (0x0008dc24) cell_vitu_itu_pane_t1_ParamLimits

0x7ab8,	// (0x0008dc24) cell_vitu_itu_pane_t1

0x7aca,	// (0x0008dc36) cell_vitu_itu_pane_t2_ParamLimits

0x7aca,	// (0x0008dc36) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0009598d) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0009598d) cell_vitu_itu_pane_t

0xc237,	// (0x000923a3) bg_button_pane_cp07

0x7aff,	// (0x0008dc6b) cell_vitu_function_pane_g1

0xb2d6,	// (0x00091442) main_calc_pane_g1

0x1080,	// (0x000871ec) aid_visual_content_pane

0xe757,	// (0x000948c3) main_vradio_pane

0x7b08,	// (0x0008dc74) main_vradio_pane_g1_ParamLimits

0x7b08,	// (0x0008dc74) main_vradio_pane_g1

0xc241,	// (0x000923ad) main_vradio_pane_g2_ParamLimits

0xc241,	// (0x000923ad) main_vradio_pane_g2

0x0001,

0xf828,	// (0x00095994) main_vradio_pane_g_ParamLimits

0xf828,	// (0x00095994) main_vradio_pane_g

0x7b21,	// (0x0008dc8d) main_vradio_pane_t1_ParamLimits

0x7b21,	// (0x0008dc8d) main_vradio_pane_t1

0x7b36,	// (0x0008dca2) main_vradio_pane_t2_ParamLimits

0x7b36,	// (0x0008dca2) main_vradio_pane_t2

0xc24e,	// (0x000923ba) main_vradio_pane_t3_ParamLimits

0xc24e,	// (0x000923ba) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x00095999) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x00095999) main_vradio_pane_t

0x7b4b,	// (0x0008dcb7) vradio_rocker_control_pane_ParamLimits

0x7b4b,	// (0x0008dcb7) vradio_rocker_control_pane

0x7b5d,	// (0x0008dcc9) vradio_station_info_pane_ParamLimits

0x7b5d,	// (0x0008dcc9) vradio_station_info_pane

0xc262,	// (0x000923ce) vradio_frequency_info_pane_ParamLimits

0xc262,	// (0x000923ce) vradio_frequency_info_pane

0xbbab,	// (0x00091d17) vradio_station_info_pane_g1

0xc271,	// (0x000923dd) vradio_station_info_pane_t1_ParamLimits

0xc271,	// (0x000923dd) vradio_station_info_pane_t1

0xc293,	// (0x000923ff) vradio_station_info_pane_t2_ParamLimits

0xc293,	// (0x000923ff) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x000959a0) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x000959a0) vradio_station_info_pane_t

0xc2a5,	// (0x00092411) vradio_tuning_pane

0xc2ad,	// (0x00092419) vradio_rocker_control_pane_g1

0xc2b5,	// (0x00092421) vradio_rocker_control_pane_g2

0xc2bd,	// (0x00092429) vradio_rocker_control_pane_g3

0xc2c5,	// (0x00092431) vradio_rocker_control_pane_g4

0xc2cd,	// (0x00092439) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x000959a5) vradio_rocker_control_pane_g

0x7b6f,	// (0x0008dcdb) vradio_frequency_info_pane_g1

0xc2d5,	// (0x00092441) vradio_frequency_info_pane_t1_ParamLimits

0xc2d5,	// (0x00092441) vradio_frequency_info_pane_t1

0x7b79,	// (0x0008dce5) vradio_tuning_pane_g1

0x7b84,	// (0x0008dcf0) vradio_tuning_pane_t1

0xb294,	// (0x00091400) area_side_right_pane_ParamLimits

0xb294,	// (0x00091400) area_side_right_pane

0xb64b,	// (0x000917b7) status_small_pane_g1

0xb653,	// (0x000917bf) status_small_pane_g2

0xb65c,	// (0x000917c8) status_small_pane_g3

0xb665,	// (0x000917d1) status_small_pane_g4

0x0003,

0xf5f4,	// (0x00095760) status_small_pane_g

0xb66e,	// (0x000917da) status_small_pane_t1

0xe757,	// (0x000948c3) main_video3_pane

0xc2e9,	// (0x00092455) cams_zoom_vslider_pane

0xc2f1,	// (0x0009245d) image3_wide_pane_ParamLimits

0xc2f1,	// (0x0009245d) image3_wide_pane

0xc30b,	// (0x00092477) image3_wide_small_pane

0xc317,	// (0x00092483) main_video3_pane_g1_ParamLimits

0xc317,	// (0x00092483) main_video3_pane_g1

0xc333,	// (0x0009249f) main_video3_pane_g2_ParamLimits

0xc333,	// (0x0009249f) main_video3_pane_g2

0x0001,

0xf844,	// (0x000959b0) main_video3_pane_g_ParamLimits

0xf844,	// (0x000959b0) main_video3_pane_g

0xc34f,	// (0x000924bb) main_video3_pane_t1_ParamLimits

0xc34f,	// (0x000924bb) main_video3_pane_t1

0xc37a,	// (0x000924e6) main_video3_pane_t2_ParamLimits

0xc37a,	// (0x000924e6) main_video3_pane_t2

0xc3a5,	// (0x00092511) main_video3_pane_t3_ParamLimits

0xc3a5,	// (0x00092511) main_video3_pane_t3

0x0002,

0xf849,	// (0x000959b5) main_video3_pane_t_ParamLimits

0xf849,	// (0x000959b5) main_video3_pane_t

0xc3d2,	// (0x0009253e) cams_zoom_vslider_pane_g1

0xc3db,	// (0x00092547) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x000959bc) cams_zoom_vslider_pane_g

0xc3e3,	// (0x0009254f) small_slider_vertical_pane

0xbbab,	// (0x00091d17) small_slider_vertical_pane_g1

0xbbab,	// (0x00091d17) small_slider_vertical_pane_g2

0xc3eb,	// (0x00092557) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x000959c1) small_slider_vertical_pane_g

0xe757,	// (0x000948c3) main_hwr_training_pane

0xc3f4,	// (0x00092560) hwr_training_instruct_pane_ParamLimits

0xc3f4,	// (0x00092560) hwr_training_instruct_pane

0x7b93,	// (0x0008dcff) hwr_training_navi_pane_ParamLimits

0x7b93,	// (0x0008dcff) hwr_training_navi_pane

0x7bb2,	// (0x0008dd1e) hwr_training_write_pane_ParamLimits

0x7bb2,	// (0x0008dd1e) hwr_training_write_pane

0xe757,	// (0x000948c3) bg_frame_shadow_pane

0xc42b,	// (0x00092597) hwr_training_write_pane_g1

0xc433,	// (0x0009259f) hwr_training_write_pane_g2

0xc43b,	// (0x000925a7) hwr_training_write_pane_g3

0xc443,	// (0x000925af) hwr_training_write_pane_g4

0xc44b,	// (0x000925b7) hwr_training_write_pane_g5

0xc453,	// (0x000925bf) hwr_training_write_pane_g6

0xc45b,	// (0x000925c7) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x000959c8) hwr_training_write_pane_g

0xc463,	// (0x000925cf) hwr_training_navi_pane_g1_ParamLimits

0xc463,	// (0x000925cf) hwr_training_navi_pane_g1

0xc475,	// (0x000925e1) hwr_training_navi_pane_g2_ParamLimits

0xc475,	// (0x000925e1) hwr_training_navi_pane_g2

0xc487,	// (0x000925f3) hwr_training_navi_pane_g3_ParamLimits

0xc487,	// (0x000925f3) hwr_training_navi_pane_g3

0xc497,	// (0x00092603) hwr_training_navi_pane_g4_ParamLimits

0xc497,	// (0x00092603) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x000959d7) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x000959d7) hwr_training_navi_pane_g

0xc4a4,	// (0x00092610) hwr_training_navi_pane_t1

0x7bfa,	// (0x0008dd66) list_single_hwr_training_instruct_pane_ParamLimits

0x7bfa,	// (0x0008dd66) list_single_hwr_training_instruct_pane

0xc4b2,	// (0x0009261e) list_single_hwr_training_instruct_pane_t1

0xbaeb,	// (0x00091c57) bg_frame_shadow_pane_g1

0xc4c1,	// (0x0009262d) bg_frame_shadow_pane_g2

0xc4c9,	// (0x00092635) bg_frame_shadow_pane_g3

0xc4d1,	// (0x0009263d) bg_frame_shadow_pane_g4

0xc4d9,	// (0x00092645) bg_frame_shadow_pane_g5

0xc4e1,	// (0x0009264d) bg_frame_shadow_pane_g6

0xc4e9,	// (0x00092655) bg_frame_shadow_pane_g7

0xef64,	// (0x000950d0) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x000959e2) bg_frame_shadow_pane_g

0xe757,	// (0x000948c3) main_video_tele_dialer_pane

0x7c0f,	// (0x0008dd7b) aid_size_cell_video_keypad_ParamLimits

0x7c0f,	// (0x0008dd7b) aid_size_cell_video_keypad

0x7c29,	// (0x0008dd95) grid_video_dialer_keypad_pane_ParamLimits

0x7c29,	// (0x0008dd95) grid_video_dialer_keypad_pane

0x7c75,	// (0x0008dde1) video_down_pane_cp_ParamLimits

0x7c75,	// (0x0008dde1) video_down_pane_cp

0x7ca7,	// (0x0008de13) cell_video_dialer_keypad_pane_ParamLimits

0x7ca7,	// (0x0008de13) cell_video_dialer_keypad_pane

0xc4f1,	// (0x0009265d) bg_button_pane_cp08_ParamLimits

0xc4f1,	// (0x0009265d) bg_button_pane_cp08

0x7cc9,	// (0x0008de35) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7cc9,	// (0x0008de35) cell_video_dialer_keypad_pane_g1

0x737d,	// (0x0008d4e9) mup3_rocker2_pane_ParamLimits

0x737d,	// (0x0008d4e9) mup3_rocker2_pane

0xbbab,	// (0x00091d17) mup3_rocker2_pane_g1

0x5e86,	// (0x0008bff2) main_dialer2_pane

0xe757,	// (0x000948c3) main_mp4_pane

0xc51b,	// (0x00092687) main_mp4_pane_g1_ParamLimits

0xc51b,	// (0x00092687) main_mp4_pane_g1

0xc51b,	// (0x00092687) main_mp4_pane_g2_ParamLimits

0xc51b,	// (0x00092687) main_mp4_pane_g2

0x7d00,	// (0x0008de6c) main_mp4_pane_g3_ParamLimits

0x7d00,	// (0x0008de6c) main_mp4_pane_g3

0xc529,	// (0x00092695) main_mp4_pane_g4_ParamLimits

0xc529,	// (0x00092695) main_mp4_pane_g4

0xc557,	// (0x000926c3) main_mp4_pane_g5_ParamLimits

0xc557,	// (0x000926c3) main_mp4_pane_g5

0x0007,

0xf896,	// (0x00095a02) main_mp4_pane_g_ParamLimits

0xf896,	// (0x00095a02) main_mp4_pane_g

0xc5cb,	// (0x00092737) main_mp4_pane_t1_ParamLimits

0xc5cb,	// (0x00092737) main_mp4_pane_t1

0xc627,	// (0x00092793) main_mp4_pane_t2_ParamLimits

0xc627,	// (0x00092793) main_mp4_pane_t2

0xc679,	// (0x000927e5) main_mp4_pane_t3_ParamLimits

0xc679,	// (0x000927e5) main_mp4_pane_t3

0xc69f,	// (0x0009280b) main_mp4_pane_t4_ParamLimits

0xc69f,	// (0x0009280b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00095a13) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00095a13) main_mp4_pane_t

0xc6e3,	// (0x0009284f) mp4_progress_pane_ParamLimits

0xc6e3,	// (0x0009284f) mp4_progress_pane

0xc72d,	// (0x00092899) mp4_rocker_pane_ParamLimits

0xc72d,	// (0x00092899) mp4_rocker_pane

0xc755,	// (0x000928c1) mp4_progress_pane_t1

0xc76e,	// (0x000928da) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00095a1c) mp4_progress_pane_t

0xc787,	// (0x000928f3) mup_progress_pane_cp04

0xbbab,	// (0x00091d17) mp4_rocker_pane_g1

0x7d3c,	// (0x0008dea8) aid_cell_size_keypad2_ParamLimits

0x7d3c,	// (0x0008dea8) aid_cell_size_keypad2

0x7d52,	// (0x0008debe) dialer2_ne_pane_ParamLimits

0x7d52,	// (0x0008debe) dialer2_ne_pane

0x7d6c,	// (0x0008ded8) grid_dialer2_keypad_pane_ParamLimits

0x7d6c,	// (0x0008ded8) grid_dialer2_keypad_pane

0xb990,	// (0x00091afc) bg_popup_call_pane_cp07_ParamLimits

0xb990,	// (0x00091afc) bg_popup_call_pane_cp07

0x7d88,	// (0x0008def4) dialer2_ne_pane_t1_ParamLimits

0x7d88,	// (0x0008def4) dialer2_ne_pane_t1

0x7dc3,	// (0x0008df2f) cell_dialer2_keypad_pane_ParamLimits

0x7dc3,	// (0x0008df2f) cell_dialer2_keypad_pane

0xc7ac,	// (0x00092918) bg_button_pane_pane_cp04_ParamLimits

0xc7ac,	// (0x00092918) bg_button_pane_pane_cp04

0x7de5,	// (0x0008df51) cell_dialer2_keypad_pane_g1_ParamLimits

0x7de5,	// (0x0008df51) cell_dialer2_keypad_pane_g1

0x2213,	// (0x0008837f) aid_placing_vt_set_content_ParamLimits

0x2213,	// (0x0008837f) aid_placing_vt_set_content

0x223b,	// (0x000883a7) aid_placing_vt_set_title_ParamLimits

0x223b,	// (0x000883a7) aid_placing_vt_set_title

0xe757,	// (0x000948c3) main_image3_pane

0x7eab,	// (0x0008e017) area_side_right_pane_cp01_ParamLimits

0x7eab,	// (0x0008e017) area_side_right_pane_cp01

0xc51b,	// (0x00092687) main_image3_pane_g1_ParamLimits

0xc51b,	// (0x00092687) main_image3_pane_g1

0x7ec2,	// (0x0008e02e) main_image3_pane_g2_ParamLimits

0x7ec2,	// (0x0008e02e) main_image3_pane_g2

0x7eea,	// (0x0008e056) main_image3_pane_g3_ParamLimits

0x7eea,	// (0x0008e056) main_image3_pane_g3

0x7f14,	// (0x0008e080) main_image3_pane_g4_ParamLimits

0x7f14,	// (0x0008e080) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00095a2b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00095a2b) main_image3_pane_g

0x7f3e,	// (0x0008e0aa) main_image3_pane_t1_ParamLimits

0x7f3e,	// (0x0008e0aa) main_image3_pane_t1

0x7f96,	// (0x0008e102) main_image3_pane_t2_ParamLimits

0x7f96,	// (0x0008e102) main_image3_pane_t2

0x7fe8,	// (0x0008e154) main_image3_pane_t3_ParamLimits

0x7fe8,	// (0x0008e154) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00095a34) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00095a34) main_image3_pane_t

0xe761,	// (0x000948cd) grid_sctrl_middle_pane_cp01_ParamLimits

0xe761,	// (0x000948cd) grid_sctrl_middle_pane_cp01

0x8070,	// (0x0008e1dc) cell_sctrl_middle_pane_cp01_ParamLimits

0x8070,	// (0x0008e1dc) cell_sctrl_middle_pane_cp01

0x808d,	// (0x0008e1f9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x808d,	// (0x0008e1f9) cell_sctrl_middle_pane_cp01_g1

0xe757,	// (0x000948c3) main_call4_pane

0x80a3,	// (0x0008e20f) aid_size_button_call4_ParamLimits

0x80a3,	// (0x0008e20f) aid_size_button_call4

0x80d6,	// (0x0008e242) call4_windows_pane_ParamLimits

0x80d6,	// (0x0008e242) call4_windows_pane

0x80f5,	// (0x0008e261) grid_call4_button_pane_ParamLimits

0x80f5,	// (0x0008e261) grid_call4_button_pane

0x8128,	// (0x0008e294) call4_windows_conf_pane

0x813f,	// (0x0008e2ab) popup_call4_audio_first_window_ParamLimits

0x813f,	// (0x0008e2ab) popup_call4_audio_first_window

0x818f,	// (0x0008e2fb) popup_call4_audio_second_window_ParamLimits

0x818f,	// (0x0008e2fb) popup_call4_audio_second_window

0x81a6,	// (0x0008e312) popup_call4_audio_wait_window_ParamLimits

0x81a6,	// (0x0008e312) popup_call4_audio_wait_window

0x81b4,	// (0x0008e320) cell_call4_button_pane_ParamLimits

0x81b4,	// (0x0008e320) cell_call4_button_pane

0x81d9,	// (0x0008e345) bg_button_pane_cp09_ParamLimits

0x81d9,	// (0x0008e345) bg_button_pane_cp09

0x81e5,	// (0x0008e351) cell_call4_button_pane_g1_ParamLimits

0x81e5,	// (0x0008e351) cell_call4_button_pane_g1

0x820b,	// (0x0008e377) cell_call4_button_pane_t1_ParamLimits

0x820b,	// (0x0008e377) cell_call4_button_pane_t1

0xc824,	// (0x00092990) popup_call4_audio_conf_window_ParamLimits

0xc824,	// (0x00092990) popup_call4_audio_conf_window

0x73dd,	// (0x0008d549) mup3_progress_pane_t1_ParamLimits

0x73fc,	// (0x0008d568) mup3_progress_pane_t2_ParamLimits

0xbee1,	// (0x0009204d) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x00095904) mup3_progress_pane_t_ParamLimits

0xbefe,	// (0x0009206a) mup_progress_pane_cp03_ParamLimits

0x79d9,	// (0x0008db45) mup3_control_keys_pane_g4_copy1

0xc711,	// (0x0009287d) mp4_rocker2_pane_ParamLimits

0xc711,	// (0x0009287d) mp4_rocker2_pane

0xc838,	// (0x000929a4) mp4_rocker2_pane_g1

0xc840,	// (0x000929ac) mp4_rocker2_pane_g2

0xc848,	// (0x000929b4) mp4_rocker2_pane_g3

0xc850,	// (0x000929bc) mp4_rocker2_pane_g4

0xc858,	// (0x000929c4) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00095a3d) mp4_rocker2_pane_g

0xe757,	// (0x000948c3) main_camera4_pane

0xe757,	// (0x000948c3) main_video4_pane

0x7c43,	// (0x0008ddaf) main_video_tele_dialer_pane_t1_ParamLimits

0x7c43,	// (0x0008ddaf) main_video_tele_dialer_pane_t1

0x7c5c,	// (0x0008ddc8) main_video_tele_dialer_pane_t2_ParamLimits

0x7c5c,	// (0x0008ddc8) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x000959f3) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x000959f3) main_video_tele_dialer_pane_t

0x8249,	// (0x0008e3b5) cam4_autofocus_pane_ParamLimits

0x8249,	// (0x0008e3b5) cam4_autofocus_pane

0x825f,	// (0x0008e3cb) cam4_image_uncrop_pane_ParamLimits

0x825f,	// (0x0008e3cb) cam4_image_uncrop_pane

0x8279,	// (0x0008e3e5) cam4_indicators_pane_ParamLimits

0x8279,	// (0x0008e3e5) cam4_indicators_pane

0x82a4,	// (0x0008e410) main_camera4_pane_g1_ParamLimits

0x82a4,	// (0x0008e410) main_camera4_pane_g1

0x82b6,	// (0x0008e422) main_camera4_pane_g2_ParamLimits

0x82b6,	// (0x0008e422) main_camera4_pane_g2

0x82c9,	// (0x0008e435) main_camera4_pane_g3_ParamLimits

0x82c9,	// (0x0008e435) main_camera4_pane_g3

0x82dc,	// (0x0008e448) main_camera4_pane_g4_ParamLimits

0x82dc,	// (0x0008e448) main_camera4_pane_g4

0x82ef,	// (0x0008e45b) main_camera4_pane_g5_ParamLimits

0x82ef,	// (0x0008e45b) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00095a48) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00095a48) main_camera4_pane_g

0x8313,	// (0x0008e47f) main_camera4_pane_t1_ParamLimits

0x8313,	// (0x0008e47f) main_camera4_pane_t1

0xbe0e,	// (0x00091f7a) bg_tb_trans_pane_cp06

0xc896,	// (0x00092a02) cam4_indicators_pane_g1

0xc8a7,	// (0x00092a13) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00095a63) cam4_indicators_pane_g

0xc8c5,	// (0x00092a31) cam4_indicators_pane_t1

0x8377,	// (0x0008e4e3) main_video4_pane_g1_ParamLimits

0x8377,	// (0x0008e4e3) main_video4_pane_g1

0x8386,	// (0x0008e4f2) main_video4_pane_g2_ParamLimits

0x8386,	// (0x0008e4f2) main_video4_pane_g2

0x8395,	// (0x0008e501) main_video4_pane_g3_ParamLimits

0x8395,	// (0x0008e501) main_video4_pane_g3

0x83a4,	// (0x0008e510) main_video4_pane_g4_ParamLimits

0x83a4,	// (0x0008e510) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00095a6a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00095a6a) main_video4_pane_g

0x83c2,	// (0x0008e52e) vid4_indicators_pane_ParamLimits

0x83c2,	// (0x0008e52e) vid4_indicators_pane

0x83f0,	// (0x0008e55c) video4_image_uncrop_cif_pane_ParamLimits

0x83f0,	// (0x0008e55c) video4_image_uncrop_cif_pane

0x840a,	// (0x0008e576) video4_image_uncrop_nhd_pane_ParamLimits

0x840a,	// (0x0008e576) video4_image_uncrop_nhd_pane

0x825f,	// (0x0008e3cb) video4_image_uncrop_vga_pane_ParamLimits

0x825f,	// (0x0008e3cb) video4_image_uncrop_vga_pane

0xe761,	// (0x000948cd) bg_tb_trans_pane_cp07

0xc8f1,	// (0x00092a5d) vid4_indicators_pane_g1

0xc905,	// (0x00092a71) vid4_indicators_pane_g2

0xc919,	// (0x00092a85) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00095a75) vid4_indicators_pane_g

0xc948,	// (0x00092ab4) vid4_indicators_pane_t1

0x841e,	// (0x0008e58a) cam4_autofocus_pane_g1

0x8426,	// (0x0008e592) cam4_autofocus_pane_g2

0x842e,	// (0x0008e59a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00095a80) cam4_autofocus_pane_g

0x8436,	// (0x0008e5a2) cam4_autofocus_pane_g3_copy1

0x7c8b,	// (0x0008ddf7) video_down_pane_cp_t1

0x7c99,	// (0x0008de05) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x000959f8) video_down_pane_cp_t

0xe761,	// (0x000948cd) popup_vitu2_window_ParamLimits

0xe761,	// (0x000948cd) popup_vitu2_window

0x843e,	// (0x0008e5aa) aid_size_cell2_itu2_ParamLimits

0x843e,	// (0x0008e5aa) aid_size_cell2_itu2

0x8464,	// (0x0008e5d0) aid_size_cell_itu2_ParamLimits

0x8464,	// (0x0008e5d0) aid_size_cell_itu2

0x84c0,	// (0x0008e62c) bg_popup_window_pane_cp09_ParamLimits

0x84c0,	// (0x0008e62c) bg_popup_window_pane_cp09

0x84ce,	// (0x0008e63a) field_vitu2_entry_pane_ParamLimits

0x84ce,	// (0x0008e63a) field_vitu2_entry_pane

0x84f4,	// (0x0008e660) grid_vitu2_function_pane_ParamLimits

0x84f4,	// (0x0008e660) grid_vitu2_function_pane

0x8545,	// (0x0008e6b1) grid_vitu2_itu_pane_ParamLimits

0x8545,	// (0x0008e6b1) grid_vitu2_itu_pane

0x85dd,	// (0x0008e749) cell_vitu2_itu_pane_ParamLimits

0x85dd,	// (0x0008e749) cell_vitu2_itu_pane

0x8609,	// (0x0008e775) cell_vitu2_function_pane_ParamLimits

0x8609,	// (0x0008e775) cell_vitu2_function_pane

0xc95f,	// (0x00092acb) bg_popup_call_pane_cp08_ParamLimits

0xc95f,	// (0x00092acb) bg_popup_call_pane_cp08

0xc976,	// (0x00092ae2) field_vitu2_entry_pane_g1

0xc982,	// (0x00092aee) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00095a87) field_vitu2_entry_pane_g

0x0470,	// (0x000865dc) field_vitu2_entry_pane_t1_ParamLimits

0x0470,	// (0x000865dc) field_vitu2_entry_pane_t1

0xc99c,	// (0x00092b08) field_vitu2_entry_pane_t2_ParamLimits

0xc99c,	// (0x00092b08) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00095a8e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00095a8e) field_vitu2_entry_pane_t

0x8648,	// (0x0008e7b4) bg_button_pane_cp010_ParamLimits

0x8648,	// (0x0008e7b4) bg_button_pane_cp010

0xc9c1,	// (0x00092b2d) cell_vitu2_itu_pane_g1

0x8664,	// (0x0008e7d0) cell_vitu2_itu_pane_t1_ParamLimits

0x8664,	// (0x0008e7d0) cell_vitu2_itu_pane_t1

0x049e,	// (0x0008660a) cell_vitu2_itu_pane_t2_ParamLimits

0x049e,	// (0x0008660a) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00095a98) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00095a98) cell_vitu2_itu_pane_t

0xe761,	// (0x000948cd) bg_button_pane_cp011

0x86c2,	// (0x0008e82e) cell_vitu2_function_pane_g1

0xe757,	// (0x000948c3) main_myfav_hc_pane

0x8038,	// (0x0008e1a4) popup_image3_note_pane_ParamLimits

0x8038,	// (0x0008e1a4) popup_image3_note_pane

0x8054,	// (0x0008e1c0) popup_image3_tool_bar_pane_ParamLimits

0x8054,	// (0x0008e1c0) popup_image3_tool_bar_pane

0x052c,	// (0x00086698) cell_vitu2_itu_pane_t3_ParamLimits

0x052c,	// (0x00086698) cell_vitu2_itu_pane_t3

0xe757,	// (0x000948c3) bg_popup_trans_pane

0xc9d3,	// (0x00092b3f) grid_image3_tool_bar_pane

0xc9dd,	// (0x00092b49) bg_popup_trans_pane_g1

0x280c,	// (0x00088978) bg_popup_trans_pane_g2

0xc9e5,	// (0x00092b51) bg_popup_trans_pane_g3

0xc9ed,	// (0x00092b59) bg_popup_trans_pane_g4

0xc9f5,	// (0x00092b61) bg_popup_trans_pane_g5

0xc9fd,	// (0x00092b69) bg_popup_trans_pane_g6

0xca05,	// (0x00092b71) bg_popup_trans_pane_g7

0xca0d,	// (0x00092b79) bg_popup_trans_pane_g8

0x27ec,	// (0x00088958) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00095a9f) bg_popup_trans_pane_g

0xca15,	// (0x00092b81) cell_image3_tool_bar_pane_ParamLimits

0xca15,	// (0x00092b81) cell_image3_tool_bar_pane

0xbbab,	// (0x00091d17) cell_image3_tool_bar_pane_g1

0xe757,	// (0x000948c3) bg_popup_trans_pane_cp1

0xca29,	// (0x00092b95) popup_image3_note_pane_t1

0xca37,	// (0x00092ba3) popup_image3_note_pane_t2

0xca45,	// (0x00092bb1) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00095ab2) popup_image3_note_pane_t

0xca53,	// (0x00092bbf) popup_image3_note_pane_t3_copy1

0x86d6,	// (0x0008e842) bg_myfav_hc_instruction_pane_ParamLimits

0x86d6,	// (0x0008e842) bg_myfav_hc_instruction_pane

0x86ea,	// (0x0008e856) cell_myfav_contact_pane_ParamLimits

0x86ea,	// (0x0008e856) cell_myfav_contact_pane

0x8708,	// (0x0008e874) cell_myfav_contact_pane_cp1_ParamLimits

0x8708,	// (0x0008e874) cell_myfav_contact_pane_cp1

0x8720,	// (0x0008e88c) cell_myfav_contact_pane_cp2_ParamLimits

0x8720,	// (0x0008e88c) cell_myfav_contact_pane_cp2

0x8738,	// (0x0008e8a4) cell_myfav_contact_pane_cp3_ParamLimits

0x8738,	// (0x0008e8a4) cell_myfav_contact_pane_cp3

0x874f,	// (0x0008e8bb) cell_myfav_contact_pane_cp4_ParamLimits

0x874f,	// (0x0008e8bb) cell_myfav_contact_pane_cp4

0x8767,	// (0x0008e8d3) cell_myfav_contact_pane_cp5_ParamLimits

0x8767,	// (0x0008e8d3) cell_myfav_contact_pane_cp5

0x877b,	// (0x0008e8e7) cell_myfav_contact_pane_cp6_ParamLimits

0x877b,	// (0x0008e8e7) cell_myfav_contact_pane_cp6

0x8791,	// (0x0008e8fd) cell_myfav_contact_pane_cp7_ParamLimits

0x8791,	// (0x0008e8fd) cell_myfav_contact_pane_cp7

0xca61,	// (0x00092bcd) listscroll_gen_pane_cp05

0x87ab,	// (0x0008e917) main_myfav_hc_pane_g1_ParamLimits

0x87ab,	// (0x0008e917) main_myfav_hc_pane_g1

0x87c5,	// (0x0008e931) main_myfav_hc_pane_g2_ParamLimits

0x87c5,	// (0x0008e931) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00095ab9) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00095ab9) main_myfav_hc_pane_g

0x87f7,	// (0x0008e963) main_myfav_hc_pane_t1_ParamLimits

0x87f7,	// (0x0008e963) main_myfav_hc_pane_t1

0xca6a,	// (0x00092bd6) main_myfav_hc_pane_t2_ParamLimits

0xca6a,	// (0x00092bd6) main_myfav_hc_pane_t2

0xca7c,	// (0x00092be8) main_myfav_hc_pane_t3_ParamLimits

0xca7c,	// (0x00092be8) main_myfav_hc_pane_t3

0x880e,	// (0x0008e97a) main_myfav_hc_pane_t4_ParamLimits

0x880e,	// (0x0008e97a) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00095ac0) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00095ac0) main_myfav_hc_pane_t

0xbbab,	// (0x00091d17) bg_myfav_hc_instruction_pane_g1

0xca8e,	// (0x00092bfa) cell_myfav_contact_pane_g1_ParamLimits

0xca8e,	// (0x00092bfa) cell_myfav_contact_pane_g1

0xca8e,	// (0x00092bfa) cell_myfav_contact_pane_g2_ParamLimits

0xca8e,	// (0x00092bfa) cell_myfav_contact_pane_g2

0xca9a,	// (0x00092c06) cell_myfav_contact_pane_g3_ParamLimits

0xca9a,	// (0x00092c06) cell_myfav_contact_pane_g3

0xbecb,	// (0x00092037) cell_myfav_contact_pane_g4_ParamLimits

0xbecb,	// (0x00092037) cell_myfav_contact_pane_g4

0xcaa7,	// (0x00092c13) cell_myfav_contact_pane_g5_ParamLimits

0xcaa7,	// (0x00092c13) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00095acb) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00095acb) cell_myfav_contact_pane_g

0x87df,	// (0x0008e94b) main_myfav_hc_pane_g3_ParamLimits

0x87df,	// (0x0008e94b) main_myfav_hc_pane_g3

0x11bb,	// (0x00087327) popup_adpt_find_window

0x8836,	// (0x0008e9a2) afind_page_pane_ParamLimits

0x8836,	// (0x0008e9a2) afind_page_pane

0x884b,	// (0x0008e9b7) aid_size_cell_afind_ParamLimits

0x884b,	// (0x0008e9b7) aid_size_cell_afind

0x8869,	// (0x0008e9d5) bg_popup_sub_pane_cp09_ParamLimits

0x8869,	// (0x0008e9d5) bg_popup_sub_pane_cp09

0x8876,	// (0x0008e9e2) find_pane_cp01_ParamLimits

0x8876,	// (0x0008e9e2) find_pane_cp01

0xcab3,	// (0x00092c1f) grid_afind_control_pane_ParamLimits

0xcab3,	// (0x00092c1f) grid_afind_control_pane

0x8883,	// (0x0008e9ef) grid_afind_pane_ParamLimits

0x8883,	// (0x0008e9ef) grid_afind_pane

0x88a5,	// (0x0008ea11) cell_afind_pane_ParamLimits

0x88a5,	// (0x0008ea11) cell_afind_pane

0xbbab,	// (0x00091d17) afind_page_pane_g1

0x890c,	// (0x0008ea78) afind_page_pane_g2

0x8915,	// (0x0008ea81) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00095ad6) afind_page_pane_g

0x891e,	// (0x0008ea8a) afind_page_pane_t1

0xcac7,	// (0x00092c33) cell_afind_grid_control_pane_ParamLimits

0xcac7,	// (0x00092c33) cell_afind_grid_control_pane

0xc7ac,	// (0x00092918) bg_button_pane_cp69_ParamLimits

0xc7ac,	// (0x00092918) bg_button_pane_cp69

0x893e,	// (0x0008eaaa) cell_afind_pane_g1_ParamLimits

0x893e,	// (0x0008eaaa) cell_afind_pane_g1

0x894b,	// (0x0008eab7) cell_afind_pane_t1_ParamLimits

0x894b,	// (0x0008eab7) cell_afind_pane_t1

0x218e,	// (0x000882fa) bg_button_pane_cp72

0xcad6,	// (0x00092c42) cell_afind_grid_control_pane_g1

0x4bc5,	// (0x0008ad31) aid_image_placing_area_ParamLimits

0x4bc5,	// (0x0008ad31) aid_image_placing_area

0xc1f4,	// (0x00092360) field_vitu_entry_pane_g1_ParamLimits

0xc1f4,	// (0x00092360) field_vitu_entry_pane_g1

0xc200,	// (0x0009236c) field_vitu_entry_pane_g2_ParamLimits

0xc200,	// (0x0009236c) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x00095983) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x00095983) field_vitu_entry_pane_g

0x7aa0,	// (0x0008dc0c) cell_vitu_itu_pane_g1_ParamLimits

0x7ae2,	// (0x0008dc4e) cell_vitu_itu_pane_t3_ParamLimits

0x7ae2,	// (0x0008dc4e) cell_vitu_itu_pane_t3

0xc755,	// (0x000928c1) mp4_progress_pane_t1_ParamLimits

0xc76e,	// (0x000928da) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00095a1c) mp4_progress_pane_t_ParamLimits

0xc787,	// (0x000928f3) mup_progress_pane_cp04_ParamLimits

0x8822,	// (0x0008e98e) main_myfav_hc_pane_t5_ParamLimits

0x8822,	// (0x0008e98e) main_myfav_hc_pane_t5

0xb284,	// (0x000913f0) aid_zoom_text_primary

0x11bb,	// (0x00087327) popup_adpt_find_window_ParamLimits

0xe761,	// (0x000948cd) main_cam_set_pane

0x8290,	// (0x0008e3fc) cam4_zoom_pane_ParamLimits

0x8290,	// (0x0008e3fc) cam4_zoom_pane

0x895d,	// (0x0008eac9) main_cam_set_pane_g1_ParamLimits

0x895d,	// (0x0008eac9) main_cam_set_pane_g1

0x896b,	// (0x0008ead7) main_cam_set_pane_g2_ParamLimits

0x896b,	// (0x0008ead7) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00095add) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00095add) main_cam_set_pane_g

0x898c,	// (0x0008eaf8) main_cam_set_pane_t1_ParamLimits

0x898c,	// (0x0008eaf8) main_cam_set_pane_t1

0x89a7,	// (0x0008eb13) main_cset_listscroll_pane_ParamLimits

0x89a7,	// (0x0008eb13) main_cset_listscroll_pane

0x89c7,	// (0x0008eb33) main_cset_slider_pane_ParamLimits

0x89c7,	// (0x0008eb33) main_cset_slider_pane

0xcae7,	// (0x00092c53) main_cset_list_pane_ParamLimits

0xcae7,	// (0x00092c53) main_cset_list_pane

0xcaf7,	// (0x00092c63) scroll_pane_cp028

0x89ed,	// (0x0008eb59) aid_area_touch_slider

0x8a09,	// (0x0008eb75) cset_slider_pane

0x8a33,	// (0x0008eb9f) main_cset_slider_pane_g1

0x8a48,	// (0x0008ebb4) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00095ae2) main_cset_slider_pane_g

0xcb30,	// (0x00092c9c) main_cset_slider_pane_t1

0x8b04,	// (0x0008ec70) main_cset_slider_pane_t2

0x8b1e,	// (0x0008ec8a) main_cset_slider_pane_t3

0x8b38,	// (0x0008eca4) main_cset_slider_pane_t4

0x8b52,	// (0x0008ecbe) main_cset_slider_pane_t5

0x8b6c,	// (0x0008ecd8) main_cset_slider_pane_t6

0x8b81,	// (0x0008eced) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00095b07) main_cset_slider_pane_t

0x8c85,	// (0x0008edf1) cset_list_set_pane_ParamLimits

0x8c85,	// (0x0008edf1) cset_list_set_pane

0x8c97,	// (0x0008ee03) aid_position_infowindow_above

0x8c9f,	// (0x0008ee0b) aid_position_infowindow_below

0xef74,	// (0x000950e0) cset_list_set_pane_g1_ParamLimits

0xef74,	// (0x000950e0) cset_list_set_pane_g1

0xcbd0,	// (0x00092d3c) cset_list_set_pane_g3_ParamLimits

0xcbd0,	// (0x00092d3c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00095b26) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00095b26) cset_list_set_pane_g

0xcbdf,	// (0x00092d4b) cset_list_set_pane_t1_ParamLimits

0xcbdf,	// (0x00092d4b) cset_list_set_pane_t1

0xe761,	// (0x000948cd) list_highlight_pane_cp021_ParamLimits

0xe761,	// (0x000948cd) list_highlight_pane_cp021

0x4446,	// (0x0008a5b2) cset_slider_pane_g1

0x4458,	// (0x0008a5c4) cset_slider_pane_g2

0x444f,	// (0x0008a5bb) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00095b2b) cset_slider_pane_g

0xef80,	// (0x000950ec) aid_area_touch_cam4_zoom

0xef88,	// (0x000950f4) cam4_zoom_cont_pane

0xef90,	// (0x000950fc) cam4_zoom_pane_g1

0xef98,	// (0x00095104) cam4_zoom_pane_g2

0x8ca7,	// (0x0008ee13) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00095b32) cam4_zoom_pane_g

0xcbf4,	// (0x00092d60) cam4_zoom_cont_pane_g1

0xcbfd,	// (0x00092d69) cam4_zoom_cont_pane_g2

0xcc06,	// (0x00092d72) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00095b39) cam4_zoom_cont_pane_g

0x80c1,	// (0x0008e22d) call4_image_pane_ParamLimits

0x80c1,	// (0x0008e22d) call4_image_pane

0x8128,	// (0x0008e294) call4_windows_conf_pane_ParamLimits

0x816d,	// (0x0008e2d9) popup_call4_audio_in_window_ParamLimits

0x816d,	// (0x0008e2d9) popup_call4_audio_in_window

0xe757,	// (0x000948c3) bg_popup_call2_act_pane_cp02

0xc81c,	// (0x00092988) call4_list_conf_pane

0xbbab,	// (0x00091d17) call4_image_pane_g1

0xbbab,	// (0x00091d17) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x00095844) call4_image_pane_g

0xcc0f,	// (0x00092d7b) list_single_graphic_popup_conf4_pane_ParamLimits

0xcc0f,	// (0x00092d7b) list_single_graphic_popup_conf4_pane

0xe757,	// (0x000948c3) list_highlight_pane_cp022

0xcc22,	// (0x00092d8e) list_single_graphic_popup_conf4_pane_g1

0x39bc,	// (0x00089b28) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00095b40) list_single_graphic_popup_conf4_pane_g

0xcc2a,	// (0x00092d96) list_single_graphic_popup_conf4_pane_t1

0x2371,	// (0x000884dd) popup_vtel_slider_window_ParamLimits

0x2371,	// (0x000884dd) popup_vtel_slider_window

0xc79a,	// (0x00092906) dialer2_ne_pane_t2_ParamLimits

0xc79a,	// (0x00092906) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00095a21) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00095a21) dialer2_ne_pane_t

0xb990,	// (0x00091afc) bg_popup_sub_pane_cp010_ParamLimits

0xb990,	// (0x00091afc) bg_popup_sub_pane_cp010

0x8caf,	// (0x0008ee1b) popup_vtel_slider_window_g1_ParamLimits

0x8caf,	// (0x0008ee1b) popup_vtel_slider_window_g1

0x8cc2,	// (0x0008ee2e) popup_vtel_slider_window_g2_ParamLimits

0x8cc2,	// (0x0008ee2e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00095b45) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00095b45) popup_vtel_slider_window_g

0x8d18,	// (0x0008ee84) vtel_slider_pane_ParamLimits

0x8d18,	// (0x0008ee84) vtel_slider_pane

0x8d3a,	// (0x0008eea6) vtel_slider_pane_g1_ParamLimits

0x8d3a,	// (0x0008eea6) vtel_slider_pane_g1

0x8d4e,	// (0x0008eeba) vtel_slider_pane_g2_ParamLimits

0x8d4e,	// (0x0008eeba) vtel_slider_pane_g2

0x8d66,	// (0x0008eed2) vtel_slider_pane_g3_ParamLimits

0x8d66,	// (0x0008eed2) vtel_slider_pane_g3

0x8d3a,	// (0x0008eea6) vtel_slider_pane_g4_ParamLimits

0x8d3a,	// (0x0008eea6) vtel_slider_pane_g4

0x8d7c,	// (0x0008eee8) vtel_slider_pane_g5_ParamLimits

0x8d7c,	// (0x0008eee8) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00095b4e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00095b4e) vtel_slider_pane_g

0xe761,	// (0x000948cd) main_gallery2_pane

0x8490,	// (0x0008e5fc) aid_size_row_itut2_dropdow_list_ParamLimits

0x8490,	// (0x0008e5fc) aid_size_row_itut2_dropdow_list

0x851c,	// (0x0008e688) grid_vitu2_function_top_pane_ParamLimits

0x851c,	// (0x0008e688) grid_vitu2_function_top_pane

0x8586,	// (0x0008e6f2) popup_vitu2_dropdown_list_window_ParamLimits

0x8586,	// (0x0008e6f2) popup_vitu2_dropdown_list_window

0x85af,	// (0x0008e71b) popup_vitu2_match_list_window

0x8d92,	// (0x0008eefe) cell_vitu2_function_top_pane_ParamLimits

0x8d92,	// (0x0008eefe) cell_vitu2_function_top_pane

0x8daa,	// (0x0008ef16) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8daa,	// (0x0008ef16) cell_vitu2_function_top_pane_cp01

0x8dc6,	// (0x0008ef32) cell_vitu2_function_top_wide_pane_ParamLimits

0x8dc6,	// (0x0008ef32) cell_vitu2_function_top_wide_pane

0xe761,	// (0x000948cd) bg_button_pane_cp012

0x8de2,	// (0x0008ef4e) cell_vitu2_function_top_pane_g1

0xefa0,	// (0x0009510c) bg_button_pane_cp013_ParamLimits

0xefa0,	// (0x0009510c) bg_button_pane_cp013

0x8df6,	// (0x0008ef62) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8df6,	// (0x0008ef62) cell_vitu2_function_top_wide_pane_g1

0xe761,	// (0x000948cd) bg_popup_sub_pane_cp20

0x8e0e,	// (0x0008ef7a) list_vitu2_match_list_pane

0xc9dd,	// (0x00092b49) bg_popup_sub_pane_cp20_g1

0xc9e5,	// (0x00092b51) bg_popup_sub_pane_cp20_g2

0x280c,	// (0x00088978) bg_popup_sub_pane_cp20_g3

0xc9ed,	// (0x00092b59) bg_popup_sub_pane_cp20_g4

0x27ec,	// (0x00088958) bg_popup_sub_pane_cp20_g5

0xcc40,	// (0x00092dac) bg_popup_sub_pane_cp20_g6

0xc9fd,	// (0x00092b69) bg_popup_sub_pane_cp20_g7

0xca05,	// (0x00092b71) bg_popup_sub_pane_cp20_g8

0xca0d,	// (0x00092b79) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00095b59) bg_popup_sub_pane_cp20_g

0xefbc,	// (0x00095128) list_vitu2_match_list_item_pane_ParamLimits

0xefbc,	// (0x00095128) list_vitu2_match_list_item_pane

0xefce,	// (0x0009513a) list_vitu2_match_list_item_pane_t1

0xe757,	// (0x000948c3) bg_popup_sub_pane_cp21

0x38c0,	// (0x00089a2c) grid_vitu2_dropdown_list_pane

0x8e2c,	// (0x0008ef98) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e2c,	// (0x0008ef98) cell_vitu2_dropdown_list_char_pane

0x8e4d,	// (0x0008efb9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e4d,	// (0x0008efb9) cell_vitu2_dropdown_list_ctrl_pane

0xcc48,	// (0x00092db4) cell_vitu2_dropdown_list_char_pane_g1

0xcc51,	// (0x00092dbd) cell_vitu2_dropdown_list_char_pane_g2

0xcc5a,	// (0x00092dc6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00095b76) cell_vitu2_dropdown_list_char_pane_g

0x8e79,	// (0x0008efe5) cell_vitu2_dropdown_list_char_pane_t1

0x8e87,	// (0x0008eff3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8e87,	// (0x0008eff3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8e94,	// (0x0008f000) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8e94,	// (0x0008f000) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ea1,	// (0x0008f00d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ea1,	// (0x0008f00d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8eae,	// (0x0008f01a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8eae,	// (0x0008f01a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbe0e,	// (0x00091f7a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbe0e,	// (0x00091f7a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00095b7d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00095b7d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8eca,	// (0x0008f036) aid_size_cell_gallery2_ParamLimits

0x8eca,	// (0x0008f036) aid_size_cell_gallery2

0x8ee8,	// (0x0008f054) grid_gallery2_pane_ParamLimits

0x8ee8,	// (0x0008f054) grid_gallery2_pane

0x8f02,	// (0x0008f06e) scroll_pane_cp029_ParamLimits

0x8f02,	// (0x0008f06e) scroll_pane_cp029

0x8f13,	// (0x0008f07f) cell_gallery2_pane_ParamLimits

0x8f13,	// (0x0008f07f) cell_gallery2_pane

0xcc63,	// (0x00092dcf) cell_gallery2_pane_g2

0x8f72,	// (0x0008f0de) cell_gallery2_pane_g3

0xcc6b,	// (0x00092dd7) cell_gallery2_pane_g4

0xcc73,	// (0x00092ddf) cell_gallery2_pane_g5

0x1deb,	// (0x00087f57) grid_highlight_pane_cp10

0x85af,	// (0x0008e71b) popup_vitu2_match_list_window_ParamLimits

0x85c6,	// (0x0008e732) popup_vitu2_query_window_ParamLimits

0x85c6,	// (0x0008e732) popup_vitu2_query_window

0xe757,	// (0x000948c3) bg_vitu2_candi_button_pane

0xcc48,	// (0x00092db4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcc51,	// (0x00092dbd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcc5a,	// (0x00092dc6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05e8,	// (0x00086754) bg_button_pane_cp015

0x8f7a,	// (0x0008f0e6) bg_button_pane_cp016

0x8f8d,	// (0x0008f0f9) bg_button_pane_cp017

0xb690,	// (0x000917fc) bg_popup_sub_pane_cp22

0xcc7b,	// (0x00092de7) popup_vitu2_query_window_g1

0x061b,	// (0x00086787) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00095b88) popup_vitu2_query_window_g

0x063a,	// (0x000867a6) popup_vitu2_query_window_t1_ParamLimits

0x063a,	// (0x000867a6) popup_vitu2_query_window_t1

0x066f,	// (0x000867db) popup_vitu2_query_window_t2_ParamLimits

0x066f,	// (0x000867db) popup_vitu2_query_window_t2

0x0681,	// (0x000867ed) popup_vitu2_query_window_t3_ParamLimits

0x0681,	// (0x000867ed) popup_vitu2_query_window_t3

0x8fb1,	// (0x0008f11d) popup_vitu2_query_window_t4_ParamLimits

0x8fb1,	// (0x0008f11d) popup_vitu2_query_window_t4

0x8fd2,	// (0x0008f13e) popup_vitu2_query_window_t5_ParamLimits

0x8fd2,	// (0x0008f13e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00095b8f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00095b8f) popup_vitu2_query_window_t

0xcadf,	// (0x00092c4b) main_cset_text_pane

0x89ed,	// (0x0008eb59) aid_area_touch_slider_ParamLimits

0x8a09,	// (0x0008eb75) cset_slider_pane_ParamLimits

0x8a33,	// (0x0008eb9f) main_cset_slider_pane_g1_ParamLimits

0x8a48,	// (0x0008ebb4) main_cset_slider_pane_g2_ParamLimits

0xcb00,	// (0x00092c6c) main_cset_slider_pane_g3_ParamLimits

0xcb00,	// (0x00092c6c) main_cset_slider_pane_g3

0x8a5d,	// (0x0008ebc9) main_cset_slider_pane_g4_ParamLimits

0x8a5d,	// (0x0008ebc9) main_cset_slider_pane_g4

0x8a6c,	// (0x0008ebd8) main_cset_slider_pane_g5_ParamLimits

0x8a6c,	// (0x0008ebd8) main_cset_slider_pane_g5

0x8a78,	// (0x0008ebe4) main_cset_slider_pane_g6_ParamLimits

0x8a78,	// (0x0008ebe4) main_cset_slider_pane_g6

0xf976,	// (0x00095ae2) main_cset_slider_pane_g_ParamLimits

0xcb30,	// (0x00092c9c) main_cset_slider_pane_t1_ParamLimits

0x8b04,	// (0x0008ec70) main_cset_slider_pane_t2_ParamLimits

0x8b1e,	// (0x0008ec8a) main_cset_slider_pane_t3_ParamLimits

0x8b38,	// (0x0008eca4) main_cset_slider_pane_t4_ParamLimits

0x8b52,	// (0x0008ecbe) main_cset_slider_pane_t5_ParamLimits

0x8b6c,	// (0x0008ecd8) main_cset_slider_pane_t6_ParamLimits

0x8b81,	// (0x0008eced) main_cset_slider_pane_t7_ParamLimits

0x8bab,	// (0x0008ed17) main_cset_slider_pane_t8_ParamLimits

0x8bab,	// (0x0008ed17) main_cset_slider_pane_t8

0x8bd3,	// (0x0008ed3f) main_cset_slider_pane_t9_ParamLimits

0x8bd3,	// (0x0008ed3f) main_cset_slider_pane_t9

0x8bfb,	// (0x0008ed67) main_cset_slider_pane_t10_ParamLimits

0x8bfb,	// (0x0008ed67) main_cset_slider_pane_t10

0x8c23,	// (0x0008ed8f) main_cset_slider_pane_t11_ParamLimits

0x8c23,	// (0x0008ed8f) main_cset_slider_pane_t11

0x8c4b,	// (0x0008edb7) main_cset_slider_pane_t12_ParamLimits

0x8c4b,	// (0x0008edb7) main_cset_slider_pane_t12

0x8c68,	// (0x0008edd4) main_cset_slider_pane_t13_ParamLimits

0x8c68,	// (0x0008edd4) main_cset_slider_pane_t13

0xf99b,	// (0x00095b07) main_cset_slider_pane_t_ParamLimits

0xe757,	// (0x000948c3) bg_popup_sub_pane_cp011

0xcc87,	// (0x00092df3) main_cset_text_pane_g1

0xcc8f,	// (0x00092dfb) main_cset_text_pane_t1

0xcc9d,	// (0x00092e09) main_cset_text_pane_t2

0xccab,	// (0x00092e17) main_cset_text_pane_t3

0xccb9,	// (0x00092e25) main_cset_text_pane_t4

0xccc7,	// (0x00092e33) main_cset_text_pane_t5

0xccd5,	// (0x00092e41) main_cset_text_pane_t6

0xcce3,	// (0x00092e4f) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00095b9e) main_cset_text_pane_t

0xe757,	// (0x000948c3) main_cam4_burst_pane

0xe757,	// (0x000948c3) main_cam5_pane

0x892c,	// (0x0008ea98) bg_button_pane_cp019

0x8935,	// (0x0008eaa1) bg_button_pane_cp020

0xcb0c,	// (0x00092c78) main_cset_slider_pane_g7_ParamLimits

0xcb0c,	// (0x00092c78) main_cset_slider_pane_g7

0xcb18,	// (0x00092c84) main_cset_slider_pane_g8_ParamLimits

0xcb18,	// (0x00092c84) main_cset_slider_pane_g8

0x8a8c,	// (0x0008ebf8) main_cset_slider_pane_g9_ParamLimits

0x8a8c,	// (0x0008ebf8) main_cset_slider_pane_g9

0x8a98,	// (0x0008ec04) main_cset_slider_pane_g10_ParamLimits

0x8a98,	// (0x0008ec04) main_cset_slider_pane_g10

0x8aa4,	// (0x0008ec10) main_cset_slider_pane_g11_ParamLimits

0x8aa4,	// (0x0008ec10) main_cset_slider_pane_g11

0x8ab0,	// (0x0008ec1c) main_cset_slider_pane_g12_ParamLimits

0x8ab0,	// (0x0008ec1c) main_cset_slider_pane_g12

0x8abc,	// (0x0008ec28) main_cset_slider_pane_g13_ParamLimits

0x8abc,	// (0x0008ec28) main_cset_slider_pane_g13

0x8ac8,	// (0x0008ec34) main_cset_slider_pane_g14_ParamLimits

0x8ac8,	// (0x0008ec34) main_cset_slider_pane_g14

0x8ad4,	// (0x0008ec40) main_cset_slider_pane_g15_ParamLimits

0x8ad4,	// (0x0008ec40) main_cset_slider_pane_g15

0xcb5e,	// (0x00092cca) main_cset_slider_pane_t14_ParamLimits

0xcb5e,	// (0x00092cca) main_cset_slider_pane_t14

0xcb97,	// (0x00092d03) main_cset_slider_pane_t15_ParamLimits

0xcb97,	// (0x00092d03) main_cset_slider_pane_t15

0x8ff3,	// (0x0008f15f) aid_cam4_burst_size_cell_ParamLimits

0x8ff3,	// (0x0008f15f) aid_cam4_burst_size_cell

0x9013,	// (0x0008f17f) grid_cam4_burst_pane_ParamLimits

0x9013,	// (0x0008f17f) grid_cam4_burst_pane

0x904b,	// (0x0008f1b7) linegrid_cam4_burst_pane_ParamLimits

0x904b,	// (0x0008f1b7) linegrid_cam4_burst_pane

0xccf1,	// (0x00092e5d) scroll_pane_cp30_ParamLimits

0xccf1,	// (0x00092e5d) scroll_pane_cp30

0x906f,	// (0x0008f1db) cell_cam4_burst_pane_ParamLimits

0x906f,	// (0x0008f1db) cell_cam4_burst_pane

0xccfd,	// (0x00092e69) linegrid_cam4_burst_pane_g1_ParamLimits

0xccfd,	// (0x00092e69) linegrid_cam4_burst_pane_g1

0x90bc,	// (0x0008f228) linegrid_cam4_burst_pane_g2_ParamLimits

0x90bc,	// (0x0008f228) linegrid_cam4_burst_pane_g2

0xcd0a,	// (0x00092e76) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd0a,	// (0x00092e76) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00095bad) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00095bad) linegrid_cam4_burst_pane_g

0x90cd,	// (0x0008f239) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90cd,	// (0x0008f239) linegrid_cam4_burst_pane_g3_copy1

0xcd17,	// (0x00092e83) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd17,	// (0x00092e83) linegrid_cam4_burst_pane_g4

0x90e7,	// (0x0008f253) linegrid_cam4_burst_pane_g5_ParamLimits

0x90e7,	// (0x0008f253) linegrid_cam4_burst_pane_g5

0x90f8,	// (0x0008f264) linegrid_cam4_burst_pane_g6_ParamLimits

0x90f8,	// (0x0008f264) linegrid_cam4_burst_pane_g6

0xcd24,	// (0x00092e90) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd24,	// (0x00092e90) linegrid_cam4_burst_pane_g7

0x910f,	// (0x0008f27b) cell_cam4_burst_pane_g1

0xcd3d,	// (0x00092ea9) main_cam5_pane_t1_ParamLimits

0xcd3d,	// (0x00092ea9) main_cam5_pane_t1

0xcd4f,	// (0x00092ebb) main_cam5_pane_t2_ParamLimits

0xcd4f,	// (0x00092ebb) main_cam5_pane_t2

0xcd61,	// (0x00092ecd) main_cam5_pane_t3_ParamLimits

0xcd61,	// (0x00092ecd) main_cam5_pane_t3

0xcd73,	// (0x00092edf) main_cam5_pane_t4_ParamLimits

0xcd73,	// (0x00092edf) main_cam5_pane_t4

0xcd8b,	// (0x00092ef7) main_cam5_pane_t5_ParamLimits

0xcd8b,	// (0x00092ef7) main_cam5_pane_t5

0xcd9f,	// (0x00092f0b) main_cam5_pane_t6_ParamLimits

0xcd9f,	// (0x00092f0b) main_cam5_pane_t6

0xcdb3,	// (0x00092f1f) main_cam5_pane_t7_ParamLimits

0xcdb3,	// (0x00092f1f) main_cam5_pane_t7

0xcdc5,	// (0x00092f31) main_cam5_pane_t8_ParamLimits

0xcdc5,	// (0x00092f31) main_cam5_pane_t8

0xcde1,	// (0x00092f4d) main_cam5_pane_t9_ParamLimits

0xcde1,	// (0x00092f4d) main_cam5_pane_t9

0xcdf3,	// (0x00092f5f) main_cam5_pane_t10_ParamLimits

0xcdf3,	// (0x00092f5f) main_cam5_pane_t10

0xce05,	// (0x00092f71) main_cam5_pane_t11_ParamLimits

0xce05,	// (0x00092f71) main_cam5_pane_t11

0xce17,	// (0x00092f83) main_cam5_pane_t12_ParamLimits

0xce17,	// (0x00092f83) main_cam5_pane_t12

0xce2c,	// (0x00092f98) main_cam5_pane_t13_ParamLimits

0xce2c,	// (0x00092f98) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00095bb9) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00095bb9) main_cam5_pane_t

0x123d,	// (0x000873a9) popup_scut_keymap_window_ParamLimits

0x123d,	// (0x000873a9) popup_scut_keymap_window

0x9122,	// (0x0008f28e) aid_size_cell_brow_shortcut

0x1deb,	// (0x00087f57) bg_popup_window_pane_cp010

0x912e,	// (0x0008f29a) grid_scut_pane

0x913a,	// (0x0008f2a6) cell_scut_pane_ParamLimits

0x913a,	// (0x0008f2a6) cell_scut_pane

0x9151,	// (0x0008f2bd) cell_scut_pane_g1

0xce49,	// (0x00092fb5) cell_scut_pane_t1

0xce58,	// (0x00092fc4) cell_scut_pane_t2

0x915a,	// (0x0008f2c6) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00095bd4) cell_scut_pane_t

0x6f96,	// (0x0008d102) main_mup3_pane_g8_ParamLimits

0x6f96,	// (0x0008d102) main_mup3_pane_g8

0x84a8,	// (0x0008e614) area_vitu2_query_pane_ParamLimits

0x84a8,	// (0x0008e614) area_vitu2_query_pane

0x05fa,	// (0x00086766) input_focus_pane_cp08

0xce67,	// (0x00092fd3) area_vitu2_query_pane_g1

0x06ff,	// (0x0008686b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00095bdb) area_vitu2_query_pane_g

0x9168,	// (0x0008f2d4) area_vitu2_query_pane_t1_ParamLimits

0x9168,	// (0x0008f2d4) area_vitu2_query_pane_t1

0x917c,	// (0x0008f2e8) area_vitu2_query_pane_t2_ParamLimits

0x917c,	// (0x0008f2e8) area_vitu2_query_pane_t2

0x0710,	// (0x0008687c) area_vitu2_query_pane_t3_ParamLimits

0x0710,	// (0x0008687c) area_vitu2_query_pane_t3

0xce73,	// (0x00092fdf) area_vitu2_query_pane_t4_ParamLimits

0xce73,	// (0x00092fdf) area_vitu2_query_pane_t4

0xce9b,	// (0x00093007) area_vitu2_query_pane_t5_ParamLimits

0xce9b,	// (0x00093007) area_vitu2_query_pane_t5

0xcec3,	// (0x0009302f) area_vitu2_query_pane_t6_ParamLimits

0xcec3,	// (0x0009302f) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00095be0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00095be0) area_vitu2_query_pane_t

0x9190,	// (0x0008f2fc) bg_button_pane_cp018

0x919e,	// (0x0008f30a) bg_button_pane_cp021

0x0738,	// (0x000868a4) bg_button_pane_cp022

0x0747,	// (0x000868b3) input_focus_pane_cp09

0x3d17,	// (0x00089e83) aid_size_touch_mv_arrow_left

0x3d40,	// (0x00089eac) aid_size_touch_mv_arrow_right

0x8aec,	// (0x0008ec58) main_cset_slider_pane_g16_ParamLimits

0x8aec,	// (0x0008ec58) main_cset_slider_pane_g16

0x8af8,	// (0x0008ec64) main_cset_slider_pane_g17_ParamLimits

0x8af8,	// (0x0008ec64) main_cset_slider_pane_g17

0x910f,	// (0x0008f27b) cell_cam4_burst_pane_g1_ParamLimits

0xe757,	// (0x000948c3) compa_mode_pane

0x8cd2,	// (0x0008ee3e) popup_vtel_slider_window_g3_ParamLimits

0x8cd2,	// (0x0008ee3e) popup_vtel_slider_window_g3

0x8ce9,	// (0x0008ee55) popup_vtel_slider_window_g4_ParamLimits

0x8ce9,	// (0x0008ee55) popup_vtel_slider_window_g4

0x8d00,	// (0x0008ee6c) popup_vtel_slider_window_t1_ParamLimits

0x8d00,	// (0x0008ee6c) popup_vtel_slider_window_t1

0xe757,	// (0x000948c3) main_cl_pane

0xb6b8,	// (0x00091824) popup_imed_adjust2_window_ParamLimits

0xb690,	// (0x000917fc) bg_tb_trans_pane_cp05_ParamLimits

0xc129,	// (0x00092295) popup_imed_adjust2_window_g1_ParamLimits

0xc138,	// (0x000922a4) popup_imed_adjust2_window_g2_ParamLimits

0xc138,	// (0x000922a4) popup_imed_adjust2_window_g2

0xc144,	// (0x000922b0) popup_imed_adjust2_window_g3_ParamLimits

0xc144,	// (0x000922b0) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x00095947) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x00095947) popup_imed_adjust2_window_g

0xc150,	// (0x000922bc) popup_imed_adjust2_window_t1_ParamLimits

0xc168,	// (0x000922d4) slider_imed_adjust_pane_ParamLimits

0xc17c,	// (0x000922e8) slider_imed_adjust_pane_g1_ParamLimits

0xc18c,	// (0x000922f8) slider_imed_adjust_pane_g2_ParamLimits

0xc19c,	// (0x00092308) slider_imed_adjust_pane_g3_ParamLimits

0xc1ad,	// (0x00092319) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0009594e) slider_imed_adjust_pane_g_ParamLimits

0x8231,	// (0x0008e39d) aid_touch_area_cam4_ParamLimits

0x8231,	// (0x0008e39d) aid_touch_area_cam4

0xc860,	// (0x000929cc) battery_pane_cp01

0x8300,	// (0x0008e46c) main_camera4_pane_g6_ParamLimits

0x8300,	// (0x0008e46c) main_camera4_pane_g6

0x832a,	// (0x0008e496) main_camera4_pane_t2_ParamLimits

0x832a,	// (0x0008e496) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00095a55) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00095a55) main_camera4_pane_t

0x835f,	// (0x0008e4cb) aid_touch_area_vid4_ParamLimits

0x835f,	// (0x0008e4cb) aid_touch_area_vid4

0x83b3,	// (0x0008e51f) main_video4_pane_g5_ParamLimits

0x83b3,	// (0x0008e51f) main_video4_pane_g5

0x83d8,	// (0x0008e544) vid4_progress_pane_ParamLimits

0x83d8,	// (0x0008e544) vid4_progress_pane

0xcb24,	// (0x00092c90) main_cset_slider_pane_g18_ParamLimits

0xcb24,	// (0x00092c90) main_cset_slider_pane_g18

0xcd31,	// (0x00092e9d) cell_cam4_burst_pane_g2_ParamLimits

0xcd31,	// (0x00092e9d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00095bb4) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00095bb4) cell_cam4_burst_pane_g

0xeea2,	// (0x0009500e) bg_cl_pane_ParamLimits

0xeea2,	// (0x0009500e) bg_cl_pane

0x91aa,	// (0x0008f316) cl_header_pane_ParamLimits

0x91aa,	// (0x0008f316) cl_header_pane

0x91be,	// (0x0008f32a) cl_listscroll_pane_ParamLimits

0x91be,	// (0x0008f32a) cl_listscroll_pane

0xcf0f,	// (0x0009307b) bg_cl_pane_g1

0xcf17,	// (0x00093083) bg_cl_pane_g2

0xcf1f,	// (0x0009308b) bg_cl_pane_g3

0xcf27,	// (0x00093093) bg_cl_pane_g4

0xcf2f,	// (0x0009309b) bg_cl_pane_g5

0xcf37,	// (0x000930a3) bg_cl_pane_g6

0xcf3f,	// (0x000930ab) bg_cl_pane_g7

0xcf47,	// (0x000930b3) bg_cl_pane_g8

0xcf4f,	// (0x000930bb) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00095bef) bg_cl_pane_g

0x91ce,	// (0x0008f33a) aid_height_cl_leading_ParamLimits

0x91ce,	// (0x0008f33a) aid_height_cl_leading

0x91da,	// (0x0008f346) aid_height_cl_text_ParamLimits

0x91da,	// (0x0008f346) aid_height_cl_text

0xe761,	// (0x000948cd) bg_cl_header_pane_ParamLimits

0xe761,	// (0x000948cd) bg_cl_header_pane

0x91f9,	// (0x0008f365) cl_header_pane_g1_ParamLimits

0x91f9,	// (0x0008f365) cl_header_pane_g1

0x920f,	// (0x0008f37b) cl_header_pane_t1_ParamLimits

0x920f,	// (0x0008f37b) cl_header_pane_t1

0xcf57,	// (0x000930c3) cl_list_pane

0xcaf7,	// (0x00092c63) hc_scroll_pane_cp01

0x27ec,	// (0x00088958) bg_cl_header_pane_g1

0xc9dd,	// (0x00092b49) bg_cl_header_pane_g2

0x280c,	// (0x00088978) bg_cl_header_pane_g3

0xc9ed,	// (0x00092b59) bg_cl_header_pane_g4

0xc9e5,	// (0x00092b51) bg_cl_header_pane_g5

0xcc40,	// (0x00092dac) bg_cl_header_pane_g6

0xca05,	// (0x00092b71) bg_cl_header_pane_g7

0xca0d,	// (0x00092b79) bg_cl_header_pane_g8

0xc9fd,	// (0x00092b69) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00095c02) bg_cl_header_pane_g

0x9228,	// (0x0008f394) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9228,	// (0x0008f394) hc_cl_list_double_graphic_heading_pane

0x9239,	// (0x0008f3a5) hc_cl_list_single_graphic_pane_ParamLimits

0x9239,	// (0x0008f3a5) hc_cl_list_single_graphic_pane

0x924f,	// (0x0008f3bb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x924f,	// (0x0008f3bb) hc_cl_list_single_graphic_pane_g1

0x925b,	// (0x0008f3c7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x925b,	// (0x0008f3c7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00095c15) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00095c15) hc_cl_list_single_graphic_pane_g

0x926f,	// (0x0008f3db) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x926f,	// (0x0008f3db) hc_cl_list_single_graphic_pane_t1

0x924f,	// (0x0008f3bb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x924f,	// (0x0008f3bb) hc_cl_list_double_graphic_heading_pane_g1

0x9284,	// (0x0008f3f0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9284,	// (0x0008f3f0) hc_cl_list_double_graphic_heading_pane_g2

0x9298,	// (0x0008f404) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9298,	// (0x0008f404) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00095c1a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00095c1a) hc_cl_list_double_graphic_heading_pane_g

0x92ac,	// (0x0008f418) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x92ac,	// (0x0008f418) hc_cl_list_double_graphic_heading_pane_t1

0x92c1,	// (0x0008f42d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x92c1,	// (0x0008f42d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00095c21) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00095c21) hc_cl_list_double_graphic_heading_pane_t

0xefe4,	// (0x00095150) vid4_progress_pane_g1

0xeff4,	// (0x00095160) vid4_progress_pane_g2

0x92d6,	// (0x0008f442) vid4_progress_pane_g3

0xf004,	// (0x00095170) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00095c26) vid4_progress_pane_g

0x92e8,	// (0x0008f454) vid4_progress_pane_t1

0xf01c,	// (0x00095188) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00095c31) vid4_progress_pane_t

0x9300,	// (0x0008f46c) wait_bar_pane_cp07

0xb99e,	// (0x00091b0a) blid_firmament_pane_ParamLimits

0xb9e1,	// (0x00091b4d) popup_blid_sat_info2_window_g1

0xba05,	// (0x00091b71) popup_blid_sat_info2_window_t3

0xba13,	// (0x00091b7f) popup_blid_sat_info2_window_t4

0xba21,	// (0x00091b8d) popup_blid_sat_info2_window_t5

0xba2f,	// (0x00091b9b) popup_blid_sat_info2_window_t6

0xba3f,	// (0x00091bab) popup_blid_sat_info2_window_t7

0xba4d,	// (0x00091bb9) popup_blid_sat_info2_window_t8

0xba5b,	// (0x00091bc7) popup_blid_sat_info2_window_t9

0xba69,	// (0x00091bd5) popup_blid_sat_info2_window_t10

0xbb2b,	// (0x00091c97) aid_firma_cardinal_ParamLimits

0xbb3f,	// (0x00091cab) blid_firmament_pane_t1_ParamLimits

0xbb56,	// (0x00091cc2) blid_firmament_pane_t2_ParamLimits

0xbb6d,	// (0x00091cd9) blid_firmament_pane_t3_ParamLimits

0xbb84,	// (0x00091cf0) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0009583b) blid_firmament_pane_t_ParamLimits

0xbb9b,	// (0x00091d07) blid_sat_info_pane_ParamLimits

0xe761,	// (0x000948cd) main_cam_set_pane_ParamLimits

0x785a,	// (0x0008d9c6) aid_size_cell_colour_35_ParamLimits

0x787a,	// (0x0008d9e6) aid_size_cell_colour_112_ParamLimits

0x789a,	// (0x0008da06) aid_size_cell_effect_ParamLimits

0xb690,	// (0x000917fc) bg_tb_trans_pane_cp02_ParamLimits

0x360c,	// (0x00089778) heading_imed_pane_ParamLimits

0x78ba,	// (0x0008da26) listscroll_imed_pane_ParamLimits

0x53b0,	// (0x0008b51c) popup_call2_audio_first_window_g5_ParamLimits

0x53b0,	// (0x0008b51c) popup_call2_audio_first_window_g5

0x7e4d,	// (0x0008dfb9) aid_size_touch_image3_arrow_left_ParamLimits

0x7e4d,	// (0x0008dfb9) aid_size_touch_image3_arrow_left

0x7e79,	// (0x0008dfe5) aid_size_touch_image3_arrow_right_ParamLimits

0x7e79,	// (0x0008dfe5) aid_size_touch_image3_arrow_right

0xf031,	// (0x0009519d) vid4_progress_pane_t3

0x7bcd,	// (0x0008dd39) main_hwr_training_symbol_option_pane_ParamLimits

0x7bcd,	// (0x0008dd39) main_hwr_training_symbol_option_pane

0xc416,	// (0x00092582) popup_hwr_training_preview_window_ParamLimits

0xc416,	// (0x00092582) popup_hwr_training_preview_window

0x7bed,	// (0x0008dd59) hwr_training_navi_pane_g5_ParamLimits

0x7bed,	// (0x0008dd59) hwr_training_navi_pane_g5

0xc9b9,	// (0x00092b25) popup_char_count_window

0xe761,	// (0x000948cd) bg_popup_sub_pane_cp20_ParamLimits

0x8e0e,	// (0x0008ef7a) list_vitu2_match_list_pane_ParamLimits

0x8e1d,	// (0x0008ef89) vitu2_page_scroll_pane_ParamLimits

0x8e1d,	// (0x0008ef89) vitu2_page_scroll_pane

0xcf71,	// (0x000930dd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcf71,	// (0x000930dd) list_single_hwr_training_symbol_option_pane

0xcf84,	// (0x000930f0) list_single_hwr_training_symbol_option_pane_g1

0xcf8c,	// (0x000930f8) list_single_hwr_training_symbol_option_pane_t1

0xcf9a,	// (0x00093106) bg_button_pane_cp023

0xcfa3,	// (0x0009310f) bg_button_pane_cp024

0x932e,	// (0x0008f49a) vitu2_page_scroll_pane_g1

0x9336,	// (0x0008f4a2) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00095c38) vitu2_page_scroll_pane_g

0x933e,	// (0x0008f4aa) vitu2_page_scroll_pane_t1

0xb8ba,	// (0x00091a26) popup_char_count_window_g1

0xcfd6,	// (0x00093142) popup_char_count_window_g2

0xcfdf,	// (0x0009314b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00095c3d) popup_char_count_window_g

0xcfe8,	// (0x00093154) popup_char_count_window_t1

0xe757,	// (0x000948c3) main_vded2_pane

0xc115,	// (0x00092281) aid_size_cell_imed_line

0xc11f,	// (0x0009228b) grid_imed_line_width_pane

0xc92a,	// (0x00092a96) vid4_indicators_pane_g4

0xcff6,	// (0x00093162) cell_imed_line_width_pane_ParamLimits

0xcff6,	// (0x00093162) cell_imed_line_width_pane

0xd00a,	// (0x00093176) cell_imed_line_width_pane_g1

0xd013,	// (0x0009317f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00095c44) cell_imed_line_width_pane_g

0x934d,	// (0x0008f4b9) main_vded2_pane_g1_ParamLimits

0x934d,	// (0x0008f4b9) main_vded2_pane_g1

0x9363,	// (0x0008f4cf) main_vded2_pane_g2_ParamLimits

0x9363,	// (0x0008f4cf) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00095c49) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00095c49) main_vded2_pane_g

0x9375,	// (0x0008f4e1) vded2_slider_pane_ParamLimits

0x9375,	// (0x0008f4e1) vded2_slider_pane

0x9385,	// (0x0008f4f1) aid_size_touch_vded2_end

0x938f,	// (0x0008f4fb) aid_size_touch_vded2_playhead

0xd01b,	// (0x00093187) aid_size_touch_vded2_start

0xd023,	// (0x0009318f) vded2_slider_bg_pane

0xd02c,	// (0x00093198) vded2_slider_pane_g1

0xd035,	// (0x000931a1) vded2_slider_pane_g2

0x9399,	// (0x0008f505) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00095c4e) vded2_slider_pane_g

0xd03d,	// (0x000931a9) vded2_slider_bg_pane_g1

0xd046,	// (0x000931b2) vded2_slider_bg_pane_g2

0xd04f,	// (0x000931bb) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00095c55) vded2_slider_bg_pane_g

0x457b,	// (0x0008a6e7) aid_postcard_touch_down_pane_ParamLimits

0x457b,	// (0x0008a6e7) aid_postcard_touch_down_pane

0x4591,	// (0x0008a6fd) aid_postcard_touch_up_pane_ParamLimits

0x4591,	// (0x0008a6fd) aid_postcard_touch_up_pane

0xe757,	// (0x000948c3) main_blid2_pane

0xb69e,	// (0x0009180a) popup_blid2_search_window

0xe757,	// (0x000948c3) blid2_gps_pane

0xe757,	// (0x000948c3) blid2_navig_pane

0xe757,	// (0x000948c3) blid2_search_pane

0xe757,	// (0x000948c3) blid2_tripm_pane

0x93a4,	// (0x0008f510) blid2_search_pane_g1_ParamLimits

0x93a4,	// (0x0008f510) blid2_search_pane_g1

0x93be,	// (0x0008f52a) blid2_search_pane_t1_ParamLimits

0x93be,	// (0x0008f52a) blid2_search_pane_t1

0x93d0,	// (0x0008f53c) aid_size_cell_blid2_gps_ParamLimits

0x93d0,	// (0x0008f53c) aid_size_cell_blid2_gps

0x93e8,	// (0x0008f554) blid2_gps_pane_g1_ParamLimits

0x93e8,	// (0x0008f554) blid2_gps_pane_g1

0x93fc,	// (0x0008f568) grid_blid2_satellite_pane_ParamLimits

0x93fc,	// (0x0008f568) grid_blid2_satellite_pane

0x9416,	// (0x0008f582) blid2_navig_pane_g1_ParamLimits

0x9416,	// (0x0008f582) blid2_navig_pane_g1

0x9422,	// (0x0008f58e) blid2_navig_pane_t1_ParamLimits

0x9422,	// (0x0008f58e) blid2_navig_pane_t1

0x943d,	// (0x0008f5a9) blid2_navig_pane_t2_ParamLimits

0x943d,	// (0x0008f5a9) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00095c5c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00095c5c) blid2_navig_pane_t

0x9458,	// (0x0008f5c4) blid2_navig_ring_pane_ParamLimits

0x9458,	// (0x0008f5c4) blid2_navig_ring_pane

0x9471,	// (0x0008f5dd) blid2_speed_pane_ParamLimits

0x9471,	// (0x0008f5dd) blid2_speed_pane

0x947d,	// (0x0008f5e9) blid2_tripm_pane_g1_ParamLimits

0x947d,	// (0x0008f5e9) blid2_tripm_pane_g1

0x9496,	// (0x0008f602) blid2_tripm_pane_g2_ParamLimits

0x9496,	// (0x0008f602) blid2_tripm_pane_g2

0x94aa,	// (0x0008f616) blid2_tripm_pane_g3_ParamLimits

0x94aa,	// (0x0008f616) blid2_tripm_pane_g3

0x94be,	// (0x0008f62a) blid2_tripm_pane_g4_ParamLimits

0x94be,	// (0x0008f62a) blid2_tripm_pane_g4

0x94d2,	// (0x0008f63e) blid2_tripm_pane_g5_ParamLimits

0x94d2,	// (0x0008f63e) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00095c61) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00095c61) blid2_tripm_pane_g

0x94f8,	// (0x0008f664) blid2_tripm_pane_t1_ParamLimits

0x94f8,	// (0x0008f664) blid2_tripm_pane_t1

0x9513,	// (0x0008f67f) blid2_tripm_pane_t2_ParamLimits

0x9513,	// (0x0008f67f) blid2_tripm_pane_t2

0x952c,	// (0x0008f698) blid2_tripm_pane_t3_ParamLimits

0x952c,	// (0x0008f698) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00095c6e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00095c6e) blid2_tripm_pane_t

0x9573,	// (0x0008f6df) cell_blid2_satellite_pane_ParamLimits

0x9573,	// (0x0008f6df) cell_blid2_satellite_pane

0x9591,	// (0x0008f6fd) cell_blid2_satellite_pane_g1

0xd058,	// (0x000931c4) cell_blid2_satellite_pane_t1

0xbbab,	// (0x00091d17) blid2_speed_pane_g1

0xd066,	// (0x000931d2) blid2_speed_pane_t1

0xd074,	// (0x000931e0) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00095c77) blid2_speed_pane_t

0xbbab,	// (0x00091d17) blid2_navig_ring_pane_g1

0x959a,	// (0x0008f706) blid2_navig_ring_pane_g2

0x95a2,	// (0x0008f70e) blid2_navig_ring_pane_g3

0x95aa,	// (0x0008f716) blid2_navig_ring_pane_g4

0x95b2,	// (0x0008f71e) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00095c7c) blid2_navig_ring_pane_g

0xe757,	// (0x000948c3) bg_popup_window_pane_cp011

0xd082,	// (0x000931ee) popup_blid2_search_window_g1

0xd08a,	// (0x000931f6) popup_blid2_search_window_t1

0xd098,	// (0x00093204) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00095c87) popup_blid2_search_window_t

0x26b8,	// (0x00088824) main_browser_pane_g1

0xeea2,	// (0x0009500e) main_browser_pane_ParamLimits

0xe761,	// (0x000948cd) bg_button_pane_cp011_ParamLimits

0x86c2,	// (0x0008e82e) cell_vitu2_function_pane_g1_ParamLimits

0xb690,	// (0x000917fc) bg_popup_sub_pane_cp22_ParamLimits

0x05fa,	// (0x00086766) input_focus_pane_cp08_ParamLimits

0x8fa0,	// (0x0008f10c) popup_vitu2_query_button_pane_ParamLimits

0x8fa0,	// (0x0008f10c) popup_vitu2_query_button_pane

0x0611,	// (0x0008677d) popup_vitu2_query_input_button_pane

0xcc7b,	// (0x00092de7) popup_vitu2_query_window_g1_ParamLimits

0x061b,	// (0x00086787) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00095b88) popup_vitu2_query_window_g_ParamLimits

0xe757,	// (0x000948c3) bg_button_pane_cp026

0x95ba,	// (0x0008f726) popup_vitu2_query_input_button_pane_g1

0xe757,	// (0x000948c3) bg_button_pane_cp025

0xd0a6,	// (0x00093212) popup_vitu2_query_button_pane_t1

0x6c4b,	// (0x0008cdb7) main_mp3_pane_t6

0x6c59,	// (0x0008cdc5) popup_slider_window_cp01

0xc88e,	// (0x000929fa) cam4_battery_pane

0xc8e7,	// (0x00092a53) cam4_battery_pane_cp02

0xefdc,	// (0x00095148) cam4_battery_pane_cp01

0xefdc,	// (0x00095148) cam4_battery_pane_cp03

0xbbab,	// (0x00091d17) cam4_battery_pane_g1

0xd0b4,	// (0x00093220) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00095c8c) cam4_battery_pane_g

0xba77,	// (0x00091be3) popup_blid_sat_info2_window_t11

0x3d17,	// (0x00089e83) aid_size_touch_mv_arrow_left_ParamLimits

0x3d40,	// (0x00089eac) aid_size_touch_mv_arrow_right_ParamLimits

0x3d9e,	// (0x00089f0a) navi_pane_g1_ParamLimits

0x3daa,	// (0x00089f16) navi_pane_g2_ParamLimits

0x3dd8,	// (0x00089f44) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0009554d) navi_pane_g_ParamLimits

0x3e96,	// (0x0008a002) navi_pane_mv_t1_ParamLimits

0x78c6,	// (0x0008da32) grid_imed_effect_pane_ParamLimits

0x225c,	// (0x000883c8) aid_placing_vt_slider_lsc

0x226c,	// (0x000883d8) aid_placing_vt_slider_prt

0xe761,	// (0x000948cd) bg_tb_trans_pane_cp01_ParamLimits

0xbd2e,	// (0x00091e9a) popup_image_details_window_g1_ParamLimits

0xbd41,	// (0x00091ead) popup_image_details_window_g2_ParamLimits

0xbd56,	// (0x00091ec2) popup_image_details_window_g3_ParamLimits

0xbd56,	// (0x00091ec2) popup_image_details_window_g3

0xf714,	// (0x00095880) popup_image_details_window_g_ParamLimits

0xbd6a,	// (0x00091ed6) popup_image_details_window_t1_ParamLimits

0xbd7c,	// (0x00091ee8) popup_image_details_window_t2_ParamLimits

0xbd95,	// (0x00091f01) popup_image_details_window_t3_ParamLimits

0xbda9,	// (0x00091f15) popup_image_details_window_t4_ParamLimits

0xbdc4,	// (0x00091f30) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x00095887) popup_image_details_window_t_ParamLimits

0x91e6,	// (0x0008f352) cl_header_name_pane_ParamLimits

0x91e6,	// (0x0008f352) cl_header_name_pane

0x95c2,	// (0x0008f72e) cl_header_name_pane_t1_ParamLimits

0x95c2,	// (0x0008f72e) cl_header_name_pane_t1

0x95e3,	// (0x0008f74f) cl_header_name_pane_t2_ParamLimits

0x95e3,	// (0x0008f74f) cl_header_name_pane_t2

0x9625,	// (0x0008f791) cl_header_name_pane_t3_ParamLimits

0x9625,	// (0x0008f791) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00095c91) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00095c91) cl_header_name_pane_t

0x3e67,	// (0x00089fd3) navi_pane_mv_g2_ParamLimits

0xc976,	// (0x00092ae2) field_vitu2_entry_pane_g1_ParamLimits

0xc982,	// (0x00092aee) field_vitu2_entry_pane_g2_ParamLimits

0xc98e,	// (0x00092afa) field_vitu2_entry_pane_g3_ParamLimits

0xc98e,	// (0x00092afa) field_vitu2_entry_pane_g3

0xf91b,	// (0x00095a87) field_vitu2_entry_pane_g_ParamLimits

0xc9c1,	// (0x00092b2d) cell_vitu2_itu_pane_g1_ParamLimits

0x8656,	// (0x0008e7c2) cell_vitu2_itu_pane_g2_ParamLimits

0x8656,	// (0x0008e7c2) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00095a93) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00095a93) cell_vitu2_itu_pane_g

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp05_ParamLimits

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp05

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp03

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp04

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp10_ParamLimits

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp10

0x0738,	// (0x000868a4) bg_vkb2_func_pane_cp08

0x9190,	// (0x0008f2fc) bg_vkb2_func_pane_cp06

0x919e,	// (0x0008f30a) bg_vkb2_func_pane_cp07

0xcfac,	// (0x00093118) bg_vkb2_func_pane_cp11_ParamLimits

0xcfac,	// (0x00093118) bg_vkb2_func_pane_cp11

0xcfc1,	// (0x0009312d) bg_vkb2_func_pane_cp12_ParamLimits

0xcfc1,	// (0x0009312d) bg_vkb2_func_pane_cp12

0xe757,	// (0x000948c3) bg_vkb2_func_pane_cp09

0xc9dd,	// (0x00092b49) bg_vkb2_func_pane_g1

0x280c,	// (0x00088978) bg_vkb2_func_pane_g2

0xc9e5,	// (0x00092b51) bg_vkb2_func_pane_g3

0xc9ed,	// (0x00092b59) bg_vkb2_func_pane_g4

0xcc40,	// (0x00092dac) bg_vkb2_func_pane_g5

0xca05,	// (0x00092b71) bg_vkb2_func_pane_g6

0xca0d,	// (0x00092b79) bg_vkb2_func_pane_g7

0xc9fd,	// (0x00092b69) bg_vkb2_func_pane_g8

0x27ec,	// (0x00088958) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00095c98) bg_vkb2_func_pane_g

0x94e6,	// (0x0008f652) blid2_tripm_pane_g6_ParamLimits

0x94e6,	// (0x0008f652) blid2_tripm_pane_g6

0xc74d,	// (0x000928b9) mp4_progress_pane_g1

0x955f,	// (0x0008f6cb) blid2_tripm_values_pane_ParamLimits

0x955f,	// (0x0008f6cb) blid2_tripm_values_pane

0x9656,	// (0x0008f7c2) blid2_tripm_values_pane_t1

0x9664,	// (0x0008f7d0) blid2_tripm_values_pane_t2

0x9672,	// (0x0008f7de) blid2_tripm_values_pane_t3

0x9680,	// (0x0008f7ec) blid2_tripm_values_pane_t4

0x968e,	// (0x0008f7fa) blid2_tripm_values_pane_t5

0x969c,	// (0x0008f808) blid2_tripm_values_pane_t6

0x96aa,	// (0x0008f816) blid2_tripm_values_pane_t7

0x96b8,	// (0x0008f824) blid2_tripm_values_pane_t8

0x96c6,	// (0x0008f832) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00095cab) blid2_tripm_values_pane_t

0x22a8,	// (0x00088414) call_video_pane_t1_ParamLimits

0x22c6,	// (0x00088432) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000953d6) call_video_pane_t_ParamLimits

0x03e9,	// (0x00086555) msg_header_pane_g1_ParamLimits

0x44e5,	// (0x0008a651) msg_header_pane_g2_ParamLimits

0x44e5,	// (0x0008a651) msg_header_pane_g2

0x0001,

0xf484,	// (0x000955f0) msg_header_pane_g_ParamLimits

0xf484,	// (0x000955f0) msg_header_pane_g

0xeea2,	// (0x0009500e) main_clock2_pane_ParamLimits

0x75c7,	// (0x0008d733) grid_clock2_toolbar_pane_ParamLimits

0x75c7,	// (0x0008d733) grid_clock2_toolbar_pane

0x75c7,	// (0x0008d733) listscroll_clock2_pane_ParamLimits

0x75c7,	// (0x0008d733) listscroll_clock2_pane

0x76ab,	// (0x0008d817) main_clock2_pane_t3_ParamLimits

0x76ab,	// (0x0008d817) main_clock2_pane_t3

0x76cf,	// (0x0008d83b) main_clock2_pane_t4_ParamLimits

0x76cf,	// (0x0008d83b) main_clock2_pane_t4

0xd0be,	// (0x0009322a) cell_clock2_toolbar_pane

0xd0c6,	// (0x00093232) cell_clock2_toolbar_pane_cp01

0xd0c6,	// (0x00093232) cell_clock2_toolbar_pane_cp02

0xd0ce,	// (0x0009323a) cell_clock2_toolbar_pane_cp03

0xd0d6,	// (0x00093242) list_clock2_pane

0x3ac1,	// (0x00089c2d) scroll_pane_cp10

0xd0de,	// (0x0009324a) list_single_clock2_pane_ParamLimits

0xd0de,	// (0x0009324a) list_single_clock2_pane

0x1deb,	// (0x00087f57) list_highlight_pane_cp08

0xd0eb,	// (0x00093257) list_single_clock2_pane_t1

0xd0f9,	// (0x00093265) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00095cbe) list_single_clock2_pane_t

0xe757,	// (0x000948c3) bg_button_pane_cp10

0xd107,	// (0x00093273) cell_clock2_toolbar_pane_g1

0x44f9,	// (0x0008a665) aid_main_viewer_pane_g1_ParamLimits

0x44f9,	// (0x0008a665) aid_main_viewer_pane_g1

0x4507,	// (0x0008a673) aid_main_viewer_pane_g2_ParamLimits

0x4507,	// (0x0008a673) aid_main_viewer_pane_g2

0x4515,	// (0x0008a681) aid_main_viewer_pane_g3_ParamLimits

0x4515,	// (0x0008a681) aid_main_viewer_pane_g3

0x4524,	// (0x0008a690) aid_main_viewer_pane_g4_ParamLimits

0x4524,	// (0x0008a690) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00095601) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00095601) aid_main_viewer_pane_g

0x5e72,	// (0x0008bfde) main_calc_pane_ParamLimits

0x5e86,	// (0x0008bff2) main_dialer2_pane_ParamLimits

0xe757,	// (0x000948c3) main_cam6_pane

0xe757,	// (0x000948c3) main_vid6_pane

0x75d3,	// (0x0008d73f) listscroll_gen_pane_cp06_ParamLimits

0x75d3,	// (0x0008d73f) listscroll_gen_pane_cp06

0x76f2,	// (0x0008d85e) main_clock2_pane_t5_ParamLimits

0x76f2,	// (0x0008d85e) main_clock2_pane_t5

0x7750,	// (0x0008d8bc) aid_call2_pane_cp10_ParamLimits

0x7762,	// (0x0008d8ce) aid_call_pane_cp10_ParamLimits

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7774,	// (0x0008d8e0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7774,	// (0x0008d8e0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3ca6,	// (0x00089e12) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0009593c) popup_clock_analogue_window_cp10_g_ParamLimits

0x778a,	// (0x0008d8f6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7dfa,	// (0x0008df66) cell_dialer2_keypad_pane_g2_ParamLimits

0x7dfa,	// (0x0008df66) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00095a26) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00095a26) cell_dialer2_keypad_pane_g

0x7e16,	// (0x0008df82) cell_dialer2_keypad_pane_t1

0x89df,	// (0x0008eb4b) main_cset_text2_pane_ParamLimits

0x89df,	// (0x0008eb4b) main_cset_text2_pane

0xce67,	// (0x00092fd3) area_vitu2_query_pane_g1_ParamLimits

0x06ff,	// (0x0008686b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00095bdb) area_vitu2_query_pane_g_ParamLimits

0xceeb,	// (0x00093057) area_vitu2_query_pane_t7_ParamLimits

0xceeb,	// (0x00093057) area_vitu2_query_pane_t7

0x9190,	// (0x0008f2fc) bg_button_pane_cp018_ParamLimits

0x919e,	// (0x0008f30a) bg_button_pane_cp021_ParamLimits

0x0738,	// (0x000868a4) bg_button_pane_cp022_ParamLimits

0x0738,	// (0x000868a4) bg_vkb2_func_pane_cp08_ParamLimits

0x9190,	// (0x0008f2fc) bg_vkb2_func_pane_cp06_ParamLimits

0x919e,	// (0x0008f30a) bg_vkb2_func_pane_cp07_ParamLimits

0x0747,	// (0x000868b3) input_focus_pane_cp09_ParamLimits

0xf057,	// (0x000951c3) cam6_autofocus_pane_ParamLimits

0xf057,	// (0x000951c3) cam6_autofocus_pane

0x96d4,	// (0x0008f840) cam6_image_uncrop_pane_ParamLimits

0x96d4,	// (0x0008f840) cam6_image_uncrop_pane

0x96e3,	// (0x0008f84f) cam6_indi_pane_ParamLimits

0x96e3,	// (0x0008f84f) cam6_indi_pane

0x96f9,	// (0x0008f865) cam6_mode_pane_ParamLimits

0x96f9,	// (0x0008f865) cam6_mode_pane

0x970b,	// (0x0008f877) cam6_timer_pane_ParamLimits

0x970b,	// (0x0008f877) cam6_timer_pane

0x9717,	// (0x0008f883) cam6_zoom_pane_ParamLimits

0x9717,	// (0x0008f883) cam6_zoom_pane

0x9723,	// (0x0008f88f) cam6_mode_pane_g1_ParamLimits

0x9723,	// (0x0008f88f) cam6_mode_pane_g1

0x9733,	// (0x0008f89f) cam6_mode_pane_g2_ParamLimits

0x9733,	// (0x0008f89f) cam6_mode_pane_g2

0x9743,	// (0x0008f8af) cam6_mode_pane_g3_ParamLimits

0x9743,	// (0x0008f8af) cam6_mode_pane_g3

0x9753,	// (0x0008f8bf) cam6_mode_pane_g4_ParamLimits

0x9753,	// (0x0008f8bf) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00095cc3) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00095cc3) cam6_mode_pane_g

0xd10f,	// (0x0009327b) bg_tb_trans_pane_cp08_ParamLimits

0xd10f,	// (0x0009327b) bg_tb_trans_pane_cp08

0xd11d,	// (0x00093289) cam6_battery_pane_ParamLimits

0xd11d,	// (0x00093289) cam6_battery_pane

0xd133,	// (0x0009329f) cam6_indi_pane_g1_ParamLimits

0xd133,	// (0x0009329f) cam6_indi_pane_g1

0xd145,	// (0x000932b1) cam6_indi_pane_g2_ParamLimits

0xd145,	// (0x000932b1) cam6_indi_pane_g2

0xd157,	// (0x000932c3) cam6_indi_pane_g3_ParamLimits

0xd157,	// (0x000932c3) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00095ccc) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00095ccc) cam6_indi_pane_g

0xd169,	// (0x000932d5) cam6_indi_pane_t1_ParamLimits

0xd169,	// (0x000932d5) cam6_indi_pane_t1

0x9763,	// (0x0008f8cf) cam6_autofocus_pane_g1

0x976b,	// (0x0008f8d7) cam6_autofocus_pane_g2

0x9773,	// (0x0008f8df) cam6_autofocus_pane_g3

0x977b,	// (0x0008f8e7) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00095cd3) cam6_autofocus_pane_g

0xd18f,	// (0x000932fb) cam6_timer_pane_g1

0xd197,	// (0x00093303) cam6_timer_pane_t1

0xd1a5,	// (0x00093311) cam6_zoom_cont_pane

0xd1ad,	// (0x00093319) cam6_zoom_pane_g1

0xd1b5,	// (0x00093321) cam6_zoom_pane_g2

0x9783,	// (0x0008f8ef) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00095cdc) cam6_zoom_pane_g

0xbbab,	// (0x00091d17) cam6_battery_pane_g1

0xbbab,	// (0x00091d17) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x00095844) cam6_battery_pane_g

0xd1bd,	// (0x00093329) cam6_zoom_cont_pane_g1

0xd1c6,	// (0x00093332) cam6_zoom_cont_pane_g2

0xd1cf,	// (0x0009333b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00095ce3) cam6_zoom_cont_pane_g

0x97a0,	// (0x0008f90c) cam6_mode_pane_cp_ParamLimits

0x97a0,	// (0x0008f90c) cam6_mode_pane_cp

0x9717,	// (0x0008f883) cam6_zoom_pane_cp_ParamLimits

0x9717,	// (0x0008f883) cam6_zoom_pane_cp

0x97b2,	// (0x0008f91e) vid6_image_uncrop_cif_pane_ParamLimits

0x97b2,	// (0x0008f91e) vid6_image_uncrop_cif_pane

0x97c2,	// (0x0008f92e) vid6_image_uncrop_nhd_pane_ParamLimits

0x97c2,	// (0x0008f92e) vid6_image_uncrop_nhd_pane

0x96d4,	// (0x0008f840) vid6_image_uncrop_vga_pane_ParamLimits

0x96d4,	// (0x0008f840) vid6_image_uncrop_vga_pane

0x97d1,	// (0x0008f93d) vid6_image_uncrop_wvga_pane_ParamLimits

0x97d1,	// (0x0008f93d) vid6_image_uncrop_wvga_pane

0x97e0,	// (0x0008f94c) vid6_indi_pane_ParamLimits

0x97e0,	// (0x0008f94c) vid6_indi_pane

0xd10f,	// (0x0009327b) bg_tb_trans_pane_cp09_ParamLimits

0xd10f,	// (0x0009327b) bg_tb_trans_pane_cp09

0xd1e7,	// (0x00093353) cam6_battery_pane_cp_ParamLimits

0xd1e7,	// (0x00093353) cam6_battery_pane_cp

0xd1f3,	// (0x0009335f) vid6_indi_pane_g1_ParamLimits

0xd1f3,	// (0x0009335f) vid6_indi_pane_g1

0xd205,	// (0x00093371) vid6_indi_pane_g2_ParamLimits

0xd205,	// (0x00093371) vid6_indi_pane_g2

0xd217,	// (0x00093383) vid6_indi_pane_g3_ParamLimits

0xd217,	// (0x00093383) vid6_indi_pane_g3

0xd22c,	// (0x00093398) vid6_indi_pane_g4_ParamLimits

0xd22c,	// (0x00093398) vid6_indi_pane_g4

0xd241,	// (0x000933ad) vid6_indi_pane_g5_ParamLimits

0xd241,	// (0x000933ad) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00095cea) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00095cea) vid6_indi_pane_g

0xd25b,	// (0x000933c7) vid6_indi_pane_t1_ParamLimits

0xd25b,	// (0x000933c7) vid6_indi_pane_t1

0xd271,	// (0x000933dd) vid6_indi_pane_t2_ParamLimits

0xd271,	// (0x000933dd) vid6_indi_pane_t2

0xd299,	// (0x00093405) vid6_indi_pane_t3_ParamLimits

0xd299,	// (0x00093405) vid6_indi_pane_t3

0xd2c1,	// (0x0009342d) vid6_indi_pane_t4_ParamLimits

0xd2c1,	// (0x0009342d) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00095cf5) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00095cf5) vid6_indi_pane_t

0xd2e5,	// (0x00093451) wait_bar_pane_cp08

0x97f8,	// (0x0008f964) main_cset_text2_pane_t1_ParamLimits

0x97f8,	// (0x0008f964) main_cset_text2_pane_t1

0x978b,	// (0x0008f8f7) listscroll_gen_pane_cp06_t1_ParamLimits

0x978b,	// (0x0008f8f7) listscroll_gen_pane_cp06_t1

0xe757,	// (0x000948c3) main_cam6_set_pane

0xbe0e,	// (0x00091f7a) bg_tb_trans_pane_cp06_ParamLimits

0xc896,	// (0x00092a02) cam4_indicators_pane_g1_ParamLimits

0xc8a7,	// (0x00092a13) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00095a63) cam4_indicators_pane_g_ParamLimits

0xc8c5,	// (0x00092a31) cam4_indicators_pane_t1_ParamLimits

0xe761,	// (0x000948cd) bg_tb_trans_pane_cp07_ParamLimits

0xc8f1,	// (0x00092a5d) vid4_indicators_pane_g1_ParamLimits

0xc905,	// (0x00092a71) vid4_indicators_pane_g2_ParamLimits

0xc919,	// (0x00092a85) vid4_indicators_pane_g3_ParamLimits

0xc92a,	// (0x00092a96) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00095a75) vid4_indicators_pane_g_ParamLimits

0xc948,	// (0x00092ab4) vid4_indicators_pane_t1_ParamLimits

0xefe4,	// (0x00095150) vid4_progress_pane_g1_ParamLimits

0xeff4,	// (0x00095160) vid4_progress_pane_g2_ParamLimits

0x92d6,	// (0x0008f442) vid4_progress_pane_g3_ParamLimits

0xf004,	// (0x00095170) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00095c26) vid4_progress_pane_g_ParamLimits

0x92e8,	// (0x0008f454) vid4_progress_pane_t1_ParamLimits

0xf01c,	// (0x00095188) vid4_progress_pane_t2_ParamLimits

0xf031,	// (0x0009519d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00095c31) vid4_progress_pane_t_ParamLimits

0x9300,	// (0x0008f46c) wait_bar_pane_cp07_ParamLimits

0x9815,	// (0x0008f981) main_cam6_set_pane_g2_ParamLimits

0x9815,	// (0x0008f981) main_cam6_set_pane_g2

0x9839,	// (0x0008f9a5) main_cset6_listscroll_pane_ParamLimits

0x9839,	// (0x0008f9a5) main_cset6_listscroll_pane

0x9859,	// (0x0008f9c5) main_cset6_slider_pane_ParamLimits

0x9859,	// (0x0008f9c5) main_cset6_slider_pane

0x986f,	// (0x0008f9db) main_cset6_text2_pane_ParamLimits

0x986f,	// (0x0008f9db) main_cset6_text2_pane

0xd2f4,	// (0x00093460) main_cset6_text_pane

0xd2fc,	// (0x00093468) main_cset_list_pane_copy1_ParamLimits

0xd2fc,	// (0x00093468) main_cset_list_pane_copy1

0xd30c,	// (0x00093478) scroll_pane_cp028_copy1

0x987d,	// (0x0008f9e9) cset_list_set_pane_copy1

0x988e,	// (0x0008f9fa) aid_position_infowindow_above_copy1

0x9896,	// (0x0008fa02) aid_position_infowindow_below_copy1

0x989e,	// (0x0008fa0a) cset_list_set_pane_g1_copy1

0x076a,	// (0x000868d6) cset_list_set_pane_g3_copy1_ParamLimits

0x076a,	// (0x000868d6) cset_list_set_pane_g3_copy1

0x0779,	// (0x000868e5) cset_list_set_pane_t1_copy1_ParamLimits

0x0779,	// (0x000868e5) cset_list_set_pane_t1_copy1

0xe761,	// (0x000948cd) list_highlight_pane_cp021_copy1_ParamLimits

0xe761,	// (0x000948cd) list_highlight_pane_cp021_copy1

0xd315,	// (0x00093481) cset6_slider_pane_ParamLimits

0xd315,	// (0x00093481) cset6_slider_pane

0xd341,	// (0x000934ad) main_cset6_slider_pane_g1_ParamLimits

0xd341,	// (0x000934ad) main_cset6_slider_pane_g1

0x98a6,	// (0x0008fa12) main_cset6_slider_pane_g2_ParamLimits

0x98a6,	// (0x0008fa12) main_cset6_slider_pane_g2

0xd369,	// (0x000934d5) main_cset6_slider_pane_g3_ParamLimits

0xd369,	// (0x000934d5) main_cset6_slider_pane_g3

0x98ce,	// (0x0008fa3a) main_cset6_slider_pane_g4_ParamLimits

0x98ce,	// (0x0008fa3a) main_cset6_slider_pane_g4

0x98da,	// (0x0008fa46) main_cset6_slider_pane_g5_ParamLimits

0x98da,	// (0x0008fa46) main_cset6_slider_pane_g5

0xcb0c,	// (0x00092c78) main_cset6_slider_pane_g7_ParamLimits

0xcb0c,	// (0x00092c78) main_cset6_slider_pane_g7

0xcb18,	// (0x00092c84) main_cset6_slider_pane_g8_ParamLimits

0xcb18,	// (0x00092c84) main_cset6_slider_pane_g8

0x8a8c,	// (0x0008ebf8) main_cset6_slider_pane_g9_ParamLimits

0x8a8c,	// (0x0008ebf8) main_cset6_slider_pane_g9

0x8a98,	// (0x0008ec04) main_cset6_slider_pane_g10_ParamLimits

0x8a98,	// (0x0008ec04) main_cset6_slider_pane_g10

0x8aa4,	// (0x0008ec10) main_cset6_slider_pane_g11_ParamLimits

0x8aa4,	// (0x0008ec10) main_cset6_slider_pane_g11

0x8ab0,	// (0x0008ec1c) main_cset6_slider_pane_g12_ParamLimits

0x8ab0,	// (0x0008ec1c) main_cset6_slider_pane_g12

0x8abc,	// (0x0008ec28) main_cset6_slider_pane_g13_ParamLimits

0x8abc,	// (0x0008ec28) main_cset6_slider_pane_g13

0x8ac8,	// (0x0008ec34) main_cset6_slider_pane_g14_ParamLimits

0x8ac8,	// (0x0008ec34) main_cset6_slider_pane_g14

0x98e6,	// (0x0008fa52) main_cset6_slider_pane_g15_ParamLimits

0x98e6,	// (0x0008fa52) main_cset6_slider_pane_g15

0x8aec,	// (0x0008ec58) main_cset6_slider_pane_g16_ParamLimits

0x8aec,	// (0x0008ec58) main_cset6_slider_pane_g16

0x8af8,	// (0x0008ec64) main_cset6_slider_pane_g17_ParamLimits

0x8af8,	// (0x0008ec64) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00095cfe) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00095cfe) main_cset6_slider_pane_g

0xd375,	// (0x000934e1) main_cset6_slider_pane_t1_ParamLimits

0xd375,	// (0x000934e1) main_cset6_slider_pane_t1

0x9916,	// (0x0008fa82) main_cset6_slider_pane_t2_ParamLimits

0x9916,	// (0x0008fa82) main_cset6_slider_pane_t2

0x9941,	// (0x0008faad) main_cset6_slider_pane_t3_ParamLimits

0x9941,	// (0x0008faad) main_cset6_slider_pane_t3

0x996c,	// (0x0008fad8) main_cset6_slider_pane_t4_ParamLimits

0x996c,	// (0x0008fad8) main_cset6_slider_pane_t4

0x9997,	// (0x0008fb03) main_cset6_slider_pane_t5_ParamLimits

0x9997,	// (0x0008fb03) main_cset6_slider_pane_t5

0xd3b6,	// (0x00093522) main_cset6_slider_pane_t7_ParamLimits

0xd3b6,	// (0x00093522) main_cset6_slider_pane_t7

0x99c2,	// (0x0008fb2e) main_cset6_slider_pane_t8_ParamLimits

0x99c2,	// (0x0008fb2e) main_cset6_slider_pane_t8

0x99e6,	// (0x0008fb52) main_cset6_slider_pane_t9_ParamLimits

0x99e6,	// (0x0008fb52) main_cset6_slider_pane_t9

0x9a0a,	// (0x0008fb76) main_cset6_slider_pane_t10_ParamLimits

0x9a0a,	// (0x0008fb76) main_cset6_slider_pane_t10

0x9a2e,	// (0x0008fb9a) main_cset6_slider_pane_t11_ParamLimits

0x9a2e,	// (0x0008fb9a) main_cset6_slider_pane_t11

0xd3ec,	// (0x00093558) main_cset6_slider_pane_t14_ParamLimits

0xd3ec,	// (0x00093558) main_cset6_slider_pane_t14

0xd425,	// (0x00093591) main_cset6_slider_pane_t15_ParamLimits

0xd425,	// (0x00093591) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00095d23) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00095d23) main_cset6_slider_pane_t

0xcbf4,	// (0x00092d60) cset_slider_pane_g1_copy1

0xcbfd,	// (0x00092d69) cset_slider_pane_g2_copy1

0xcc06,	// (0x00092d72) cset_slider_pane_g3_copy1

0xe757,	// (0x000948c3) bg_popup_sub_pane_cp011_copy1

0xd45e,	// (0x000935ca) main_cset_text_pane_g1_copy1

0xcc8f,	// (0x00092dfb) main_cset_text_pane_t1_copy1

0xcc9d,	// (0x00092e09) main_cset_text_pane_t2_copy1

0xccab,	// (0x00092e17) main_cset_text_pane_t3_copy1

0xccb9,	// (0x00092e25) main_cset_text_pane_t4_copy1

0xccc7,	// (0x00092e33) main_cset_text_pane_t5_copy1

0xd466,	// (0x000935d2) main_cset_text_pane_t6_copy1

0xd474,	// (0x000935e0) main_cset_text_pane_t7_copy1

0x97f8,	// (0x0008f964) main_cset_text2_pane_t1_copy1

0xe761,	// (0x000948cd) main_ncimui_pane

0x60d0,	// (0x0008c23c) popup_query_ncimui_window_ParamLimits

0x60d0,	// (0x0008c23c) popup_query_ncimui_window

0xbe73,	// (0x00091fdf) field_cale_ev2_pane_g4_ParamLimits

0xbe73,	// (0x00091fdf) field_cale_ev2_pane_g4

0x7cda,	// (0x0008de46) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7cda,	// (0x0008de46) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x000959fd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x000959fd) cell_video_dialer_keypad_pane_g

0x7cf2,	// (0x0008de5e) cell_video_dialer_keypad_pane_t1

0xe757,	// (0x000948c3) bg_popup_window_pane_cp012

0x3917,	// (0x00089a83) heading_pane_cp06

0xd4a0,	// (0x0009360c) ncim_query_content_pane

0xe757,	// (0x000948c3) bg_popup_heading_pane_cp01

0xd4a8,	// (0x00093614) ncim_heading_pane_t1

0xd4b6,	// (0x00093622) ncim_indicator_popup_pane

0xd4c8,	// (0x00093634) ncim_query_button_pane

0xd4dc,	// (0x00093648) ncim_query_content_pane_t1

0xd4ee,	// (0x0009365a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00095d67) ncim_query_content_pane_t

0xd528,	// (0x00093694) ncim_query_list_pane

0xd53a,	// (0x000936a6) ncim_query_popup_pane

0xd4b6,	// (0x00093622) ncim_indicator_popup_pane_ParamLimits

0x9b96,	// (0x0008fd02) ncim_query_content_pane_g1_ParamLimits

0x9b96,	// (0x0008fd02) ncim_query_content_pane_g1

0xd4dc,	// (0x00093648) ncim_query_content_pane_t1_ParamLimits

0xd4ee,	// (0x0009365a) ncim_query_content_pane_t2_ParamLimits

0x9ba2,	// (0x0008fd0e) ncim_query_content_pane_t3_ParamLimits

0x9ba2,	// (0x0008fd0e) ncim_query_content_pane_t3

0x9bca,	// (0x0008fd36) ncim_query_content_pane_t4_ParamLimits

0x9bca,	// (0x0008fd36) ncim_query_content_pane_t4

0x9bf2,	// (0x0008fd5e) ncim_query_content_pane_t5_ParamLimits

0x9bf2,	// (0x0008fd5e) ncim_query_content_pane_t5

0xd500,	// (0x0009366c) ncim_query_content_pane_t6_ParamLimits

0xd500,	// (0x0009366c) ncim_query_content_pane_t6

0xfbfb,	// (0x00095d67) ncim_query_content_pane_t_ParamLimits

0xd528,	// (0x00093694) ncim_query_list_pane_ParamLimits

0xd53a,	// (0x000936a6) ncim_query_popup_pane_ParamLimits

0xd54e,	// (0x000936ba) wait_bar_pane_cp04

0xe757,	// (0x000948c3) input_focus_pane_cp011

0xd556,	// (0x000936c2) ncim_query_popup_pane_t1

0xd564,	// (0x000936d0) ncim_list_query_list_pane_ParamLimits

0xd564,	// (0x000936d0) ncim_list_query_list_pane

0xe757,	// (0x000948c3) bg_button_pane_cp027

0xd571,	// (0x000936dd) ncim_query_button_pane_g1

0xe757,	// (0x000948c3) list_highlight_pane_cp012

0xd57b,	// (0x000936e7) ncim_list_query_list_pane_g1

0xd583,	// (0x000936ef) ncim_list_query_list_pane_t1

0xc8b6,	// (0x00092a22) cam4_indicators_pane_g3_ParamLimits

0xc8b6,	// (0x00092a22) cam4_indicators_pane_g3

0xc936,	// (0x00092aa2) vid4_indicators_pane_g5_ParamLimits

0xc936,	// (0x00092aa2) vid4_indicators_pane_g5

0xf010,	// (0x0009517c) vid4_progress_pane_g5_ParamLimits

0xf010,	// (0x0009517c) vid4_progress_pane_g5

0x9a81,	// (0x0008fbed) main_ncimui_pane_g1

0x9aea,	// (0x0008fc56) ncimui_group_query_pane_ParamLimits

0x9aea,	// (0x0008fc56) ncimui_group_query_pane

0x9b32,	// (0x0008fc9e) ncimui_list_pane_ParamLimits

0x9b32,	// (0x0008fc9e) ncimui_list_pane

0x9b59,	// (0x0008fcc5) ncimui_text_pane_ParamLimits

0x9b59,	// (0x0008fcc5) ncimui_text_pane

0x9c1a,	// (0x0008fd86) ncimui_text_pane_t1_ParamLimits

0x9c1a,	// (0x0008fd86) ncimui_text_pane_t1

0xd591,	// (0x000936fd) ncimui_list_single_graphic_pane_ParamLimits

0xd591,	// (0x000936fd) ncimui_list_single_graphic_pane

0x9c38,	// (0x0008fda4) ncimui_query_pane_ParamLimits

0x9c38,	// (0x0008fda4) ncimui_query_pane

0xe757,	// (0x000948c3) list_highlight_pane_cp013

0xd5a1,	// (0x0009370d) ncim_list_query_list_pane_t1_copy1

0xd57b,	// (0x000936e7) ncim_list_single_graphic_pane_g1

0x9c4b,	// (0x0008fdb7) ncim_query_button_pane_cp01

0x9c57,	// (0x0008fdc3) ncim_query_entry_pane_ParamLimits

0x9c57,	// (0x0008fdc3) ncim_query_entry_pane

0x9c6a,	// (0x0008fdd6) ncimui_query_pane_g1

0x9c76,	// (0x0008fde2) ncimui_query_pane_t1_ParamLimits

0x9c76,	// (0x0008fde2) ncimui_query_pane_t1

0xe761,	// (0x000948cd) input_focus_pane_cp012

0xd5af,	// (0x0009371b) ncim_query_entry_pane_t1

0xeea2,	// (0x0009500e) main_im_pane_ParamLimits

0xe761,	// (0x000948cd) main_mobtv_pane_ParamLimits

0xe761,	// (0x000948cd) main_mobtv_pane

0x98fe,	// (0x0008fa6a) main_cset6_slider_pane_g18_ParamLimits

0x98fe,	// (0x0008fa6a) main_cset6_slider_pane_g18

0x990a,	// (0x0008fa76) main_cset6_slider_pane_g19_ParamLimits

0x990a,	// (0x0008fa76) main_cset6_slider_pane_g19

0xf065,	// (0x000951d1) bg_main_mobtv_pane_ParamLimits

0xf065,	// (0x000951d1) bg_main_mobtv_pane

0x9c8f,	// (0x0008fdfb) main_mobtv_info_pane

0x9c98,	// (0x0008fe04) main_mobtv_loading_pane_ParamLimits

0x9c98,	// (0x0008fe04) main_mobtv_loading_pane

0xd5c1,	// (0x0009372d) main_mobtv_pg_channel_list_pane

0xd5cb,	// (0x00093737) main_mobtv_pg_hdr_pane

0x9ca5,	// (0x0008fe11) main_mobtv_programe_curr_pane_ParamLimits

0x9ca5,	// (0x0008fe11) main_mobtv_programe_curr_pane

0x9cb2,	// (0x0008fe1e) main_mobtv_programe_next_pane_ParamLimits

0x9cb2,	// (0x0008fe1e) main_mobtv_programe_next_pane

0xd5d4,	// (0x00093740) popup_mobtv_noti_window

0xbbab,	// (0x00091d17) main_tv_pg_hdr_pane_g1

0xd5dc,	// (0x00093748) main_tv_pg_hdr_pane_g2

0xd5e4,	// (0x00093750) main_tv_pg_hdr_pane_g3

0xd5ec,	// (0x00093758) main_tv_pg_hdr_pane_g4

0xd5f4,	// (0x00093760) main_tv_pg_hdr_pane_g5

0xd5fe,	// (0x0009376a) main_tv_pg_hdr_pane_g6

0xd608,	// (0x00093774) main_tv_pg_hdr_pane_g7

0xd612,	// (0x0009377e) main_tv_pg_hdr_pane_g8

0xd61c,	// (0x00093788) main_tv_pg_hdr_pane_g9

0xd626,	// (0x00093792) main_tv_pg_hdr_pane_g10

0xd630,	// (0x0009379c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00095d74) main_tv_pg_hdr_pane_g

0xd63a,	// (0x000937a6) main_tv_pg_hdr_pane_t1

0xd648,	// (0x000937b4) main_tv_pg_hdr_pane_t2

0xd656,	// (0x000937c2) main_tv_pg_hdr_pane_t3

0xd666,	// (0x000937d2) main_tv_pg_hdr_pane_t4

0xd676,	// (0x000937e2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00095d8b) main_tv_pg_hdr_pane_t

0xd686,	// (0x000937f2) single_mobtv_pg_channel_pane_ParamLimits

0xd686,	// (0x000937f2) single_mobtv_pg_channel_pane

0xd698,	// (0x00093804) single_mobtv_pg_channel_table_pane

0xd6a1,	// (0x0009380d) single_mobtv_pg_channel_thumb_pane

0xd6aa,	// (0x00093816) single_tv_pg_channel_pane_g1

0xd6b3,	// (0x0009381f) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00095d96) single_tv_pg_channel_pane_g

0xbe0e,	// (0x00091f7a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbe0e,	// (0x00091f7a) bg_single_mobtv_pg_channel_thumb_pane

0xd6bc,	// (0x00093828) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd6bc,	// (0x00093828) single_mobtv_pg_channel_thumb_pane_g1

0xd6ca,	// (0x00093836) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd6ca,	// (0x00093836) single_mobtv_pg_channel_thumb_pane_g2

0xd6d6,	// (0x00093842) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd6d6,	// (0x00093842) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00095d9b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00095d9b) single_mobtv_pg_channel_thumb_pane_g

0xd6e2,	// (0x0009384e) single_mobtv_pg_channel_thumb_pane_t1

0xd6f0,	// (0x0009385c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00095da2) single_mobtv_pg_channel_thumb_pane_t

0xbbab,	// (0x00091d17) bg_single_mobtv_pg_channel_table_pane_g1

0xbbab,	// (0x00091d17) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x00095844) bg_single_mobtv_pg_channel_table_pane_g

0xd6fe,	// (0x0009386a) single_mobtv_pg_channel_table_pane_t1

0xd70c,	// (0x00093878) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00095da7) single_mobtv_pg_channel_table_pane_t

0x9cc7,	// (0x0008fe33) main_mobtv_info_pane_g1_ParamLimits

0x9cc7,	// (0x0008fe33) main_mobtv_info_pane_g1

0x9ce5,	// (0x0008fe51) main_mobtv_info_pane_t1_ParamLimits

0x9ce5,	// (0x0008fe51) main_mobtv_info_pane_t1

0x9d5d,	// (0x0008fec9) main_mobtv_info_pane_t2_ParamLimits

0x9d5d,	// (0x0008fec9) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00095db1) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00095db1) main_mobtv_info_pane_t

0x9dec,	// (0x0008ff58) wait_bar_pane_cp05

0x9dfe,	// (0x0008ff6a) main_mobtv_loading_pane_g1_ParamLimits

0x9dfe,	// (0x0008ff6a) main_mobtv_loading_pane_g1

0x9e11,	// (0x0008ff7d) main_mobtv_loading_pane_g2_ParamLimits

0x9e11,	// (0x0008ff7d) main_mobtv_loading_pane_g2

0x9e1d,	// (0x0008ff89) main_mobtv_loading_pane_g3_ParamLimits

0x9e1d,	// (0x0008ff89) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00095db8) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00095db8) main_mobtv_loading_pane_g

0xd71a,	// (0x00093886) main_mobtv_loading_pane_t1_ParamLimits

0xd71a,	// (0x00093886) main_mobtv_loading_pane_t1

0xd732,	// (0x0009389e) main_mobtv_loading_pane_t2_ParamLimits

0xd732,	// (0x0009389e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00095dbf) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00095dbf) main_mobtv_loading_pane_t

0x9e30,	// (0x0008ff9c) wait_bar_pane_cp06_ParamLimits

0x9e30,	// (0x0008ff9c) wait_bar_pane_cp06

0xd756,	// (0x000938c2) main_mobtv_programe_curr_pane_t1

0xd764,	// (0x000938d0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00095dc4) main_mobtv_programe_curr_pane_t

0xd772,	// (0x000938de) main_mobtv_programe_next_pane_t1

0xd780,	// (0x000938ec) main_mobtv_programe_next_pane_t2

0xd78e,	// (0x000938fa) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00095dc9) main_mobtv_programe_next_pane_t

0xe757,	// (0x000948c3) bg_popup_mobtv_noti_window_pane

0xd79c,	// (0x00093908) popup_mobtv_noti_window_g1

0xd7a4,	// (0x00093910) popup_mobtv_noti_window_t1

0xd7b2,	// (0x0009391e) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00095dd0) popup_mobtv_noti_window_t

0xbbab,	// (0x00091d17) bg_popup_mobtv_noti_window_pane_g1

0xe757,	// (0x000948c3) sc_clock_pane

0xe757,	// (0x000948c3) main_fs_bigclock_pane

0x9549,	// (0x0008f6b5) blid2_tripm_pane_t4_ParamLimits

0x9549,	// (0x0008f6b5) blid2_tripm_pane_t4

0x9e3f,	// (0x0008ffab) sc_clock_pane_g1_ParamLimits

0x9e3f,	// (0x0008ffab) sc_clock_pane_g1

0x9e51,	// (0x0008ffbd) sc_clock_pane_t1_ParamLimits

0x9e51,	// (0x0008ffbd) sc_clock_pane_t1

0x9e73,	// (0x0008ffdf) sc_clock_pane_t2_ParamLimits

0x9e73,	// (0x0008ffdf) sc_clock_pane_t2

0x9e8b,	// (0x0008fff7) sc_clock_pane_t3_ParamLimits

0x9e8b,	// (0x0008fff7) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00095dd5) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00095dd5) sc_clock_pane_t

0xa820,	// (0x0009098c) main_fs_bigclock_indicator_pane_ParamLimits

0xa820,	// (0x0009098c) main_fs_bigclock_indicator_pane

0x9f31,	// (0x0009009d) main_fs_bigclock_pane_g1_ParamLimits

0x9f31,	// (0x0009009d) main_fs_bigclock_pane_g1

0xa82c,	// (0x00090998) main_fs_bigclock_pane_t1_ParamLimits

0xa82c,	// (0x00090998) main_fs_bigclock_pane_t1

0xa83e,	// (0x000909aa) main_fs_bigclock_pane_t2_ParamLimits

0xa83e,	// (0x000909aa) main_fs_bigclock_pane_t2

0xa852,	// (0x000909be) main_fs_bigclock_pane_t3_ParamLimits

0xa852,	// (0x000909be) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00095fdf) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00095fdf) main_fs_bigclock_pane_t

0xe31e,	// (0x0009448a) main_fs_bigclock_indicator_pane_g1

0xd4d0,	// (0x0009363c) ncim_query_content_pane_g2_ParamLimits

0xd4d0,	// (0x0009363c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00095d62) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00095d62) ncim_query_content_pane_g

0x9ea4,	// (0x00090010) sc_clock_pane_t4_ParamLimits

0x9ea4,	// (0x00090010) sc_clock_pane_t4

0xe761,	// (0x000948cd) main_radioblah_pane

0xc7ea,	// (0x00092956) cell_call4_button_pane_t1_copy1_ParamLimits

0xc7ea,	// (0x00092956) cell_call4_button_pane_t1_copy1

0x9a99,	// (0x0008fc05) main_ncimui_pane_t1_ParamLimits

0x9a99,	// (0x0008fc05) main_ncimui_pane_t1

0x9ab3,	// (0x0008fc1f) main_ncimui_pane_t2_ParamLimits

0x9ab3,	// (0x0008fc1f) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00095d5b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00095d5b) main_ncimui_pane_t

0xd8f7,	// (0x00093a63) main_radioblah_anim_pane_ParamLimits

0xd8f7,	// (0x00093a63) main_radioblah_anim_pane

0xd908,	// (0x00093a74) main_radioblah_info_pane_ParamLimits

0xd908,	// (0x00093a74) main_radioblah_info_pane

0xd91c,	// (0x00093a88) main_radioblah_pane_t1_ParamLimits

0xd91c,	// (0x00093a88) main_radioblah_pane_t1

0xd938,	// (0x00093aa4) main_radioblah_pane_t2_ParamLimits

0xd938,	// (0x00093aa4) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00095df6) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00095df6) main_radioblah_pane_t

0x9f90,	// (0x000900fc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f90,	// (0x000900fc) main_radioblah_rocker_ctrl_pane

0xd980,	// (0x00093aec) main_radioblah_info_pane_t1_ParamLimits

0xd980,	// (0x00093aec) main_radioblah_info_pane_t1

0x9fe8,	// (0x00090154) main_radioblah_info_pane_t2_ParamLimits

0x9fe8,	// (0x00090154) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00095dff) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00095dff) main_radioblah_info_pane_t

0xbbab,	// (0x00091d17) main_radioblah_rocker_ctrl_pane_g1

0xa098,	// (0x00090204) main_radioblah_rocker_ctrl_pane_g2

0xa0a0,	// (0x0009020c) main_radioblah_rocker_ctrl_pane_g3

0xa0a8,	// (0x00090214) main_radioblah_rocker_ctrl_pane_g4

0xa0b0,	// (0x0009021c) main_radioblah_rocker_ctrl_pane_g5

0xa0b8,	// (0x00090224) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00095e08) main_radioblah_rocker_ctrl_pane_g

0x97f8,	// (0x0008f964) main_cset_text2_pane_t1_copy1_ParamLimits

0xc874,	// (0x000929e0) cam4_image_uncrop_qvga_pane

0xc8df,	// (0x00092a4b) vid4_image_uncrop_qcif_pane

0xf057,	// (0x000951c3) cam6_image_uncrop_qvga_pane_ParamLimits

0xf057,	// (0x000951c3) cam6_image_uncrop_qvga_pane

0xd1d7,	// (0x00093343) vid6_image_uncrop_qcif_pane_ParamLimits

0xd1d7,	// (0x00093343) vid6_image_uncrop_qcif_pane

0xe757,	// (0x000948c3) bg_popup_preview_window_pane_cp03

0xd482,	// (0x000935ee) list_cset_text2_pane

0xd48a,	// (0x000935f6) main_cset6_text2_pane_g1

0xd492,	// (0x000935fe) main_cset6_text2_pane_t1

0xa0c0,	// (0x0009022c) list_cset_text2_pane_t1_ParamLimits

0xa0c0,	// (0x0009022c) list_cset_text2_pane_t1

0xe761,	// (0x000948cd) main_radioblah_pane_ParamLimits

0x9dd8,	// (0x0008ff44) main_mobtv_info_pane_t3_ParamLimits

0x9dd8,	// (0x0008ff44) main_mobtv_info_pane_t3

0x9f7e,	// (0x000900ea) main_radioblah_pane_g1

0x9fb8,	// (0x00090124) main_radioblah_info_pane_g1

0xa03d,	// (0x000901a9) main_radioblah_info_pane_t3_ParamLimits

0xa03d,	// (0x000901a9) main_radioblah_info_pane_t3

0x33bc,	// (0x00089528) highlight_cell_cale_month_pane_ParamLimits

0x33bc,	// (0x00089528) highlight_cell_cale_month_pane

0xe757,	// (0x000948c3) main_phob_fisheye_pane

0xbf42,	// (0x000920ae) scroll_pane_cp0031_ParamLimits

0xbf42,	// (0x000920ae) scroll_pane_cp0031

0xd2e5,	// (0x00093451) wait_bar_pane_cp08_ParamLimits

0x987d,	// (0x0008f9e9) cset_list_set_pane_copy1_ParamLimits

0xd9ba,	// (0x00093b26) highlight_cell_cale_month_pane_g1

0xa0d9,	// (0x00090245) highlight_cell_cale_month_pane_t1

0xcf57,	// (0x000930c3) list_gen_pane_cp01

0xcaf7,	// (0x00092c63) scroll_pane_01

0xf073,	// (0x000951df) list_single_double_fisheye_pane

0x084b,	// (0x000869b7) list_double_fisheye_pane_g1_ParamLimits

0x084b,	// (0x000869b7) list_double_fisheye_pane_g1

0x0857,	// (0x000869c3) list_double_fisheye_pane_g2_ParamLimits

0x0857,	// (0x000869c3) list_double_fisheye_pane_g2

0xa0e7,	// (0x00090253) list_double_fisheye_pane_g3_ParamLimits

0xa0e7,	// (0x00090253) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00095e15) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00095e15) list_double_fisheye_pane_g

0x0888,	// (0x000869f4) list_double_fisheye_pane_t1_ParamLimits

0x0888,	// (0x000869f4) list_double_fisheye_pane_t1

0x08a3,	// (0x00086a0f) list_double_fisheye_pane_t2_ParamLimits

0x08a3,	// (0x00086a0f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00095e20) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00095e20) list_double_fisheye_pane_t

0xe757,	// (0x000948c3) main_call5_pane

0x9ecf,	// (0x0009003b) sc_swipe_pane_ParamLimits

0x9ecf,	// (0x0009003b) sc_swipe_pane

0xa106,	// (0x00090272) call5_image_pane_ParamLimits

0xa106,	// (0x00090272) call5_image_pane

0xa123,	// (0x0009028f) call5_swipe_1_pane_ParamLimits

0xa123,	// (0x0009028f) call5_swipe_1_pane

0xa136,	// (0x000902a2) call5_swipe_2_pane_ParamLimits

0xa136,	// (0x000902a2) call5_swipe_2_pane

0xa161,	// (0x000902cd) popup_call5_audio_first_window_ParamLimits

0xa161,	// (0x000902cd) popup_call5_audio_first_window

0xbe0e,	// (0x00091f7a) call5_swipe_1_pane_g1_ParamLimits

0xbe0e,	// (0x00091f7a) call5_swipe_1_pane_g1

0xd9c2,	// (0x00093b2e) call5_swipe_1_pane_g2_ParamLimits

0xd9c2,	// (0x00093b2e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00095e25) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00095e25) call5_swipe_1_pane_g

0xd9ce,	// (0x00093b3a) call5_swipe_1_pane_t1_ParamLimits

0xd9ce,	// (0x00093b3a) call5_swipe_1_pane_t1

0xbe0e,	// (0x00091f7a) call5_swipe_2_pane_g1_ParamLimits

0xbe0e,	// (0x00091f7a) call5_swipe_2_pane_g1

0xd9e3,	// (0x00093b4f) call5_swipe_2_pane_g2_ParamLimits

0xd9e3,	// (0x00093b4f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00095e2a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00095e2a) call5_swipe_2_pane_g

0xd9ef,	// (0x00093b5b) call5_swipe_2_pane_t1_ParamLimits

0xd9ef,	// (0x00093b5b) call5_swipe_2_pane_t1

0xda04,	// (0x00093b70) sc_swipe_pane_g1_ParamLimits

0xda04,	// (0x00093b70) sc_swipe_pane_g1

0xda11,	// (0x00093b7d) sc_swipe_pane_g2_ParamLimits

0xda11,	// (0x00093b7d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00095e2f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00095e2f) sc_swipe_pane_g

0xda1d,	// (0x00093b89) sc_swipe_pane_t1_ParamLimits

0xda1d,	// (0x00093b89) sc_swipe_pane_t1

0xe757,	// (0x000948c3) main_cmail_launcher_pane

0xa172,	// (0x000902de) aid_size_cell_cmail_l_ParamLimits

0xa172,	// (0x000902de) aid_size_cell_cmail_l

0xa180,	// (0x000902ec) grid_cmail_l_pane_ParamLimits

0xa180,	// (0x000902ec) grid_cmail_l_pane

0xa19a,	// (0x00090306) cell_cmail_l_pane_ParamLimits

0xa19a,	// (0x00090306) cell_cmail_l_pane

0xda32,	// (0x00093b9e) cell_cmail_l_pane_g1_ParamLimits

0xda32,	// (0x00093b9e) cell_cmail_l_pane_g1

0xda3e,	// (0x00093baa) cell_cmail_l_pane_t1_ParamLimits

0xda3e,	// (0x00093baa) cell_cmail_l_pane_t1

0xda54,	// (0x00093bc0) cell_cmail_l_pane_t2_ParamLimits

0xda54,	// (0x00093bc0) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00095e34) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00095e34) cell_cmail_l_pane_t

0xe761,	// (0x000948cd) grid_highlight_pane_cp018_ParamLimits

0xe761,	// (0x000948cd) grid_highlight_pane_cp018

0x1122,	// (0x0008728e) main2_pane_ParamLimits

0x1122,	// (0x0008728e) main2_pane

0xef44,	// (0x000950b0) popup_sp_fs_action_menu_bg_pane_g1

0xef4c,	// (0x000950b8) popup_sp_fs_action_menu_bg_pane_g2

0xef54,	// (0x000950c0) popup_sp_fs_action_menu_bg_pane_g3

0xef5c,	// (0x000950c8) popup_sp_fs_action_menu_bg_pane_g4

0xef64,	// (0x000950d0) popup_sp_fs_action_menu_bg_pane_g5

0xef6c,	// (0x000950d8) popup_sp_fs_action_menu_bg_pane_g6

0x1766,	// (0x000878d2) popup_sp_fs_action_menu_bg_pane_g7

0x176e,	// (0x000878da) popup_sp_fs_action_menu_bg_pane_g8

0x1776,	// (0x000878e2) popup_sp_fs_action_menu_bg_pane_g9

0x177e,	// (0x000878ea) popup_sp_fs_action_menu_bg_pane_g10

0x177e,	// (0x000878ea) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000952f2) popup_sp_fs_action_menu_bg_pane_g

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g3_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g3_g1

0x219e,	// (0x0008830a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_t3_g3_g2

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000953a0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000953a0) list_medium_line_x2_t3_g3_g

0x01d2,	// (0x0008633e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01d2,	// (0x0008633e) list_medium_line_x2_t3_g3_t1

0x01e7,	// (0x00086353) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01e7,	// (0x00086353) list_medium_line_x2_t3_g3_t2

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000953a7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000953a7) list_medium_line_x2_t3_g3_t

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g2_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g2_g1

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000953ae) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000953ae) list_medium_line_x2_t3_g2_g

0x0210,	// (0x0008637c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0210,	// (0x0008637c) list_medium_line_x2_t3_g2_t1

0x0226,	// (0x00086392) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0226,	// (0x00086392) list_medium_line_x2_t3_g2_t2

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g2_t3_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000953b3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000953b3) list_medium_line_x2_t3_g2_t

0x01ba,	// (0x00086326) list_medium_line_x2_t4_g4_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t4_g4_g1

0x21aa,	// (0x00088316) list_medium_line_x2_t4_g4_g2_ParamLimits

0x21aa,	// (0x00088316) list_medium_line_x2_t4_g4_g2

0x219e,	// (0x0008830a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_t4_g4_g3

0x0238,	// (0x000863a4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0238,	// (0x000863a4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000953ba) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000953ba) list_medium_line_x2_t4_g4_g

0x0244,	// (0x000863b0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0244,	// (0x000863b0) list_medium_line_x2_t4_g4_t1

0x025e,	// (0x000863ca) list_medium_line_x2_t4_g4_t2_ParamLimits

0x025e,	// (0x000863ca) list_medium_line_x2_t4_g4_t2

0x0274,	// (0x000863e0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0274,	// (0x000863e0) list_medium_line_x2_t4_g4_t3

0x0289,	// (0x000863f5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0289,	// (0x000863f5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000953c3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000953c3) list_medium_line_x2_t4_g4_t

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g4_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g4_g1

0x21aa,	// (0x00088316) list_medium_line_x2_t2_g4_g2_ParamLimits

0x21aa,	// (0x00088316) list_medium_line_x2_t2_g4_g2

0x219e,	// (0x0008830a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_t2_g4_g3

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0009542a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0009542a) list_medium_line_x2_t2_g4_g

0x029b,	// (0x00086407) list_medium_line_x2_t2_g4_t1_ParamLimits

0x029b,	// (0x00086407) list_medium_line_x2_t2_g4_t1

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00095433) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00095433) list_medium_line_x2_t2_g4_t

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g3_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g3_g1

0x219e,	// (0x0008830a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_t2_g3_g2

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000953a0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000953a0) list_medium_line_x2_t2_g3_g

0x02b0,	// (0x0008641c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02b0,	// (0x0008641c) list_medium_line_x2_t2_g3_t1

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00095438) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00095438) list_medium_line_x2_t2_g3_t

0x374d,	// (0x000898b9) main_sp_fs_list_pane_ParamLimits

0x374d,	// (0x000898b9) main_sp_fs_list_pane

0xb39c,	// (0x00091508) sp_fs_scroll_pane_ParamLimits

0xb39c,	// (0x00091508) sp_fs_scroll_pane

0x02c5,	// (0x00086431) list_medium_line_x2_t3_t1

0x02d5,	// (0x00086441) list_medium_line_x2_t3_t2

0x02e3,	// (0x0008644f) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00095483) list_medium_line_x2_t3_t

0x02f1,	// (0x0008645d) list_medium_line_x3_t4_t1

0x0301,	// (0x0008646d) list_medium_line_x3_t4_t2

0x030f,	// (0x0008647b) list_medium_line_x3_t4_t3

0x02e3,	// (0x0008644f) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0009548a) list_medium_line_x3_t4_t

0x031d,	// (0x00086489) list_medium_line_x4_t5_t1

0x032d,	// (0x00086499) list_medium_line_x4_t5_t2

0x030f,	// (0x0008647b) list_medium_line_x4_t5_t3

0x033b,	// (0x000864a7) list_medium_line_x4_t5_t4

0x02e3,	// (0x0008644f) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00095493) list_medium_line_x4_t5_t

0x01ba,	// (0x00086326) list_medium_line_t4_g4_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_t4_g4_g1

0x0349,	// (0x000864b5) list_medium_line_t4_g4_g2_ParamLimits

0x0349,	// (0x000864b5) list_medium_line_t4_g4_g2

0x0355,	// (0x000864c1) list_medium_line_t4_g4_g3_ParamLimits

0x0355,	// (0x000864c1) list_medium_line_t4_g4_g3

0x01c6,	// (0x00086332) list_medium_line_t4_g4_g4_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0009549e) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0009549e) list_medium_line_t4_g4_g

0x0361,	// (0x000864cd) list_medium_line_t4_g4_t1_ParamLimits

0x0361,	// (0x000864cd) list_medium_line_t4_g4_t1

0x0376,	// (0x000864e2) list_medium_line_t4_g4_t2_ParamLimits

0x0376,	// (0x000864e2) list_medium_line_t4_g4_t2

0x038b,	// (0x000864f7) list_medium_line_t4_g4_t3_ParamLimits

0x038b,	// (0x000864f7) list_medium_line_t4_g4_t3

0x01fb,	// (0x00086367) list_medium_line_t4_g4_t4_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000954a7) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000954a7) list_medium_line_t4_g4_t

0x3a8e,	// (0x00089bfa) chi_dic_find_pane_g1

0x5e9a,	// (0x0008c006) main_tport_pane

0x058a,	// (0x000866f6) list_medium_line_plain_t1

0x0598,	// (0x00086704) list_medium_line_t2_g2_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t2_g2_g1

0x05a4,	// (0x00086710) list_medium_line_t2_g2_g2_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00095b6c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00095b6c) list_medium_line_t2_g2_g

0x05b0,	// (0x0008671c) list_medium_line_t2_g2_t1_ParamLimits

0x05b0,	// (0x0008671c) list_medium_line_t2_g2_t1

0x05ca,	// (0x00086736) list_medium_line_t2_g2_t2_ParamLimits

0x05ca,	// (0x00086736) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00095b71) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00095b71) list_medium_line_t2_g2_t

0xcf60,	// (0x000930cc) aid_sp_fs_list_icon_a_sm

0xf046,	// (0x000951b2) aid_sp_fs_list_icon_d

0xf04e,	// (0x000951ba) aid_sp_fs_text_primary

0xcf68,	// (0x000930d4) aid_sp_fs_text_secondary

0x9313,	// (0x0008f47f) list_medium_line

0x9313,	// (0x0008f47f) list_medium_line_g2

0x9313,	// (0x0008f47f) list_medium_line_g3

0x9313,	// (0x0008f47f) list_medium_line_plain

0x9313,	// (0x0008f47f) list_medium_line_plain_t2

0x9313,	// (0x0008f47f) list_medium_line_plain_t3

0x9313,	// (0x0008f47f) list_medium_line_right_icon

0x9313,	// (0x0008f47f) list_medium_line_right_iconx2

0x9313,	// (0x0008f47f) list_medium_line_t2

0x9313,	// (0x0008f47f) list_medium_line_t2_g2

0x9313,	// (0x0008f47f) list_medium_line_t2_g3

0x9313,	// (0x0008f47f) list_medium_line_t2_right_icon

0x9313,	// (0x0008f47f) list_medium_line_t2_right_iconx2

0x9313,	// (0x0008f47f) list_medium_line_t3

0x9313,	// (0x0008f47f) list_medium_line_t3_g2

0x9313,	// (0x0008f47f) list_medium_line_t3_g3

0x9313,	// (0x0008f47f) list_medium_line_t3_right_iconx2

0x931c,	// (0x0008f488) list_medium_line_t4_g4

0x9313,	// (0x0008f47f) list_medium_line_x2

0x9313,	// (0x0008f47f) list_medium_line_x2_t2_g2

0x9313,	// (0x0008f47f) list_medium_line_x2_t2_g3

0x9313,	// (0x0008f47f) list_medium_line_x2_t2_g4

0x9313,	// (0x0008f47f) list_medium_line_x2_t3

0x9313,	// (0x0008f47f) list_medium_line_x2_t3_g2

0x9313,	// (0x0008f47f) list_medium_line_x2_t3_g3

0x9313,	// (0x0008f47f) list_medium_line_x2_t3_g4

0x9313,	// (0x0008f47f) list_medium_line_x2_t4_g2

0x9313,	// (0x0008f47f) list_medium_line_x2_t4_g4

0x9325,	// (0x0008f491) list_medium_line_x3

0x9325,	// (0x0008f491) list_medium_line_x3_t4

0x9325,	// (0x0008f491) list_medium_line_x3_t4_g4

0x931c,	// (0x0008f488) list_medium_line_x4_t4

0x931c,	// (0x0008f488) list_medium_line_x4_t4_g7

0x931c,	// (0x0008f488) list_medium_line_x4_t5

0x0756,	// (0x000868c2) list_single_fs_dyc_pane_ParamLimits

0x0756,	// (0x000868c2) list_single_fs_dyc_pane

0x01ba,	// (0x00086326) list_medium_line_x4_t4_g7_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x4_t4_g7_g1

0x078e,	// (0x000868fa) list_medium_line_x4_t4_g7_g2_ParamLimits

0x078e,	// (0x000868fa) list_medium_line_x4_t4_g7_g2

0x9a52,	// (0x0008fbbe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9a52,	// (0x0008fbbe) list_medium_line_x4_t4_g7_g3

0x9a61,	// (0x0008fbcd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9a61,	// (0x0008fbcd) list_medium_line_x4_t4_g7_g4

0x079a,	// (0x00086906) list_medium_line_x4_t4_g7_g5_ParamLimits

0x079a,	// (0x00086906) list_medium_line_x4_t4_g7_g5

0x07a9,	// (0x00086915) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07a9,	// (0x00086915) list_medium_line_x4_t4_g7_g6

0x07b8,	// (0x00086924) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07b8,	// (0x00086924) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00095d3c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00095d3c) list_medium_line_x4_t4_g7_g

0x07c4,	// (0x00086930) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07c4,	// (0x00086930) list_medium_line_x4_t4_g7_t1

0x07d9,	// (0x00086945) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07d9,	// (0x00086945) list_medium_line_x4_t4_g7_t2

0x07ee,	// (0x0008695a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07ee,	// (0x0008695a) list_medium_line_x4_t4_g7_t3

0x0803,	// (0x0008696f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0803,	// (0x0008696f) list_medium_line_x4_t4_g7_t4

0x0815,	// (0x00086981) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0815,	// (0x00086981) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00095d4b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00095d4b) list_medium_line_x4_t4_g7_t

0x0827,	// (0x00086993) list_single_dyc_row_pane_ParamLimits

0x0827,	// (0x00086993) list_single_dyc_row_pane

0xa0f3,	// (0x0009025f) call5_gesture_pane_ParamLimits

0xa0f3,	// (0x0009025f) call5_gesture_pane

0xa149,	// (0x000902b5) call5_windows_pane_ParamLimits

0xa149,	// (0x000902b5) call5_windows_pane

0xa1b4,	// (0x00090320) call5_swipe_1_pane_cp_ParamLimits

0xa1b4,	// (0x00090320) call5_swipe_1_pane_cp

0xa1c0,	// (0x0009032c) call5_swipe_2_pane_cp_ParamLimits

0xa1c0,	// (0x0009032c) call5_swipe_2_pane_cp

0x1deb,	// (0x00087f57) call5_image_pane_cp

0xa1cc,	// (0x00090338) popup_call5_audio_first_window_cp_ParamLimits

0xa1cc,	// (0x00090338) popup_call5_audio_first_window_cp

0xda04,	// (0x00093b70) call5_swipe_1_pane_g1_cp_ParamLimits

0xda04,	// (0x00093b70) call5_swipe_1_pane_g1_cp

0xda71,	// (0x00093bdd) call5_swipe_1_pane_g2_cp

0xda1d,	// (0x00093b89) call5_swipe_1_pane_t1_cp_ParamLimits

0xda1d,	// (0x00093b89) call5_swipe_1_pane_t1_cp

0xda04,	// (0x00093b70) call5_swipe_2_pane_g1_cp_ParamLimits

0xda04,	// (0x00093b70) call5_swipe_2_pane_g1_cp

0xda79,	// (0x00093be5) call5_swipe_2_pane_g2_cp

0xda81,	// (0x00093bed) call5_swipe_2_pane_t1_cp_ParamLimits

0xda81,	// (0x00093bed) call5_swipe_2_pane_t1_cp

0xe761,	// (0x000948cd) main_sp_fs_email_pane

0xda96,	// (0x00093c02) main_sp_fs_listscroll_pane_te

0xa1da,	// (0x00090346) popup_sp_fs_action_menu_pane_ParamLimits

0xa1da,	// (0x00090346) popup_sp_fs_action_menu_pane

0xbbab,	// (0x00091d17) bg_sp_fs_ctrlbar_pane_g1

0xda9f,	// (0x00093c0b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdaa8,	// (0x00093c14) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdab1,	// (0x00093c1d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbbab,	// (0x00091d17) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00095e39) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb990,	// (0x00091afc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb990,	// (0x00091afc) bg_sp_fs_ctrlbar_ddmenu_pane

0xdaba,	// (0x00093c26) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdaba,	// (0x00093c26) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdac6,	// (0x00093c32) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdac6,	// (0x00093c32) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00095e42) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00095e42) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdad2,	// (0x00093c3e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdad2,	// (0x00093c3e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08c5,	// (0x00086a31) list_medium_line_t2_right_icon_g1

0x08cd,	// (0x00086a39) list_medium_line_t2_right_icon_t1

0x08dd,	// (0x00086a49) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00095e47) list_medium_line_t2_right_icon_t

0xb690,	// (0x000917fc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb690,	// (0x000917fc) bg_sp_fs_ctrlbar_pane

0xa266,	// (0x000903d2) main_sp_fs_ctrlbar_button_pane_cp01

0xa270,	// (0x000903dc) main_sp_fs_ctrlbar_ddmenu_pane

0xdb24,	// (0x00093c90) main_sp_fs_ctrlbar_pane_g1

0xdb30,	// (0x00093c9c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00095e4c) main_sp_fs_ctrlbar_pane_g

0xdb3c,	// (0x00093ca8) main_sp_fs_ctrlbar_pane_t1

0xa27a,	// (0x000903e6) main_sp_fs_ctrlbar_pane

0xa29e,	// (0x0009040a) main_sp_fs_listscroll_pane_te_cp01

0x08ef,	// (0x00086a5b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08ef,	// (0x00086a5b) popup_sp_fs_action_menu_pane_cp01

0xe761,	// (0x000948cd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe761,	// (0x000948cd) bg_sp_fs_highlight_list_pane_cp01

0xdb6c,	// (0x00093cd8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdb6c,	// (0x00093cd8) sp_fs_action_menu_list_gene_pane_g1

0xdb7b,	// (0x00093ce7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb7b,	// (0x00093ce7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00095e56) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00095e56) sp_fs_action_menu_list_gene_pane_g

0xdb88,	// (0x00093cf4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdb88,	// (0x00093cf4) sp_fs_action_menu_list_gene_pane_t1

0xdba0,	// (0x00093d0c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdba0,	// (0x00093d0c) sp_fs_action_menu_list_gene_pane

0xdbc1,	// (0x00093d2d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdbc1,	// (0x00093d2d) popup_sp_fs_action_menu_bg_pane

0xdbcf,	// (0x00093d3b) sp_fs_action_menu_list_pane_ParamLimits

0xdbcf,	// (0x00093d3b) sp_fs_action_menu_list_pane

0xf07c,	// (0x000951e8) sp_fs_scroll_pane_cp01_ParamLimits

0xf07c,	// (0x000951e8) sp_fs_scroll_pane_cp01

0x091f,	// (0x00086a8b) list_medium_line_plain_t2_t1

0x092f,	// (0x00086a9b) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00095e5b) list_medium_line_plain_t2_t

0x093f,	// (0x00086aab) list_medium_line_plain_t3_t1

0x094f,	// (0x00086abb) list_medium_line_plain_t3_t2

0x095d,	// (0x00086ac9) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00095e60) list_medium_line_plain_t3_t

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g2_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t2_g2_g1

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000953ae) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000953ae) list_medium_line_x2_t2_g2_g

0x0361,	// (0x000864cd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0361,	// (0x000864cd) list_medium_line_x2_t2_g2_t1

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00095e67) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00095e67) list_medium_line_x2_t2_g2_t

0x01ba,	// (0x00086326) list_medium_line_x2_t4_g2_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t4_g2_g1

0x096b,	// (0x00086ad7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x096b,	// (0x00086ad7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00095e6c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00095e6c) list_medium_line_x2_t4_g2_g

0x097d,	// (0x00086ae9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x097d,	// (0x00086ae9) list_medium_line_x2_t4_g2_t1

0x0997,	// (0x00086b03) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0997,	// (0x00086b03) list_medium_line_x2_t4_g2_t2

0x09ad,	// (0x00086b19) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09ad,	// (0x00086b19) list_medium_line_x2_t4_g2_t3

0x01fb,	// (0x00086367) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00095e71) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00095e71) list_medium_line_x2_t4_g2_t

0x09c2,	// (0x00086b2e) list_medium_line_t3_right_iconx2_g1

0x08c5,	// (0x00086a31) list_medium_line_t3_right_iconx2_g2

0x09ca,	// (0x00086b36) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00095e7a) list_medium_line_t3_right_iconx2_g

0x09d4,	// (0x00086b40) list_medium_line_t3_right_iconx2_t1

0x09e4,	// (0x00086b50) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00095e81) list_medium_line_t3_right_iconx2_t

0x01ba,	// (0x00086326) list_medium_line_x3_t4_g4_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x3_t4_g4_g1

0x219e,	// (0x0008830a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x3_t4_g4_g2

0x0349,	// (0x000864b5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0349,	// (0x000864b5) list_medium_line_x3_t4_g4_g3

0xa2be,	// (0x0009042a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa2be,	// (0x0009042a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00095e86) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00095e86) list_medium_line_x3_t4_g4_g

0x09f2,	// (0x00086b5e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09f2,	// (0x00086b5e) list_medium_line_x3_t4_g4_t1

0x0a09,	// (0x00086b75) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a09,	// (0x00086b75) list_medium_line_x3_t4_g4_t2

0x0376,	// (0x000864e2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0376,	// (0x000864e2) list_medium_line_x3_t4_g4_t3

0x0a24,	// (0x00086b90) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a24,	// (0x00086b90) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00095e8f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00095e8f) list_medium_line_x3_t4_g4_t

0x0a41,	// (0x00086bad) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a41,	// (0x00086bad) list_single_dyc_row_text_pane_t1

0x0a8a,	// (0x00086bf6) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a8a,	// (0x00086bf6) list_single_dyc_row_text_pane_t2

0xdbf1,	// (0x00093d5d) list_single_dyc_row_text_pane_t3_ParamLimits

0xdbf1,	// (0x00093d5d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00095e98) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00095e98) list_single_dyc_row_text_pane_t

0xdc15,	// (0x00093d81) list_single_dyc_row_pane_g1_ParamLimits

0xdc15,	// (0x00093d81) list_single_dyc_row_pane_g1

0xdc21,	// (0x00093d8d) list_single_dyc_row_pane_g2_ParamLimits

0xdc21,	// (0x00093d8d) list_single_dyc_row_pane_g2

0xdc2d,	// (0x00093d99) list_single_dyc_row_pane_g3_ParamLimits

0xdc2d,	// (0x00093d99) list_single_dyc_row_pane_g3

0xdc39,	// (0x00093da5) list_single_dyc_row_pane_g4_ParamLimits

0xdc39,	// (0x00093da5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00095ea5) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00095ea5) list_single_dyc_row_pane_g

0xdc45,	// (0x00093db1) list_single_dyc_row_text_pane_ParamLimits

0xdc45,	// (0x00093db1) list_single_dyc_row_text_pane

0xe757,	// (0x000948c3) bg_sp_fs_scroll_pane

0xdc64,	// (0x00093dd0) thumb_sp_fs_scroll_pane

0x0598,	// (0x00086704) list_medium_line_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_g1

0x0bbf,	// (0x00086d2b) list_medium_line_t1_ParamLimits

0x0bbf,	// (0x00086d2b) list_medium_line_t1

0x01ba,	// (0x00086326) list_medium_line_x2_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_g1

0x219e,	// (0x0008830a) list_medium_line_x2_g2_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00095eae) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00095eae) list_medium_line_x2_g

0xdc6d,	// (0x00093dd9) list_medium_line_x2_t1_ParamLimits

0xdc6d,	// (0x00093dd9) list_medium_line_x2_t1

0x01ba,	// (0x00086326) list_medium_line_x3_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x3_g1

0x219e,	// (0x0008830a) list_medium_line_x3_g2_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00095eae) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00095eae) list_medium_line_x3_g

0xdc6d,	// (0x00093dd9) list_medium_line_x3_t1_ParamLimits

0xdc6d,	// (0x00093dd9) list_medium_line_x3_t1

0xdc83,	// (0x00093def) thumb_sp_fs_scroll_pane_g1

0xdc8c,	// (0x00093df8) thumb_sp_fs_scroll_pane_g2

0xdc95,	// (0x00093e01) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095eb3) thumb_sp_fs_scroll_pane_g

0xdc83,	// (0x00093def) bg_sp_fs_scroll_pane_g1

0xdc8c,	// (0x00093df8) bg_sp_fs_scroll_pane_g2

0xdc95,	// (0x00093e01) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095eb3) bg_sp_fs_scroll_pane_g

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g4_g1_ParamLimits

0x01ba,	// (0x00086326) list_medium_line_x2_t3_g4_g1

0x21aa,	// (0x00088316) list_medium_line_x2_t3_g4_g2_ParamLimits

0x21aa,	// (0x00088316) list_medium_line_x2_t3_g4_g2

0x219e,	// (0x0008830a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x219e,	// (0x0008830a) list_medium_line_x2_t3_g4_g3

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01c6,	// (0x00086332) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0009542a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0009542a) list_medium_line_x2_t3_g4_g

0x0bd4,	// (0x00086d40) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0bd4,	// (0x00086d40) list_medium_line_x2_t3_g4_t1

0x0bec,	// (0x00086d58) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bec,	// (0x00086d58) list_medium_line_x2_t3_g4_t2

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01fb,	// (0x00086367) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00095eba) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00095eba) list_medium_line_x2_t3_g4_t

0x0598,	// (0x00086704) list_medium_line_g2_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_g2_g1

0x05a4,	// (0x00086710) list_medium_line_g2_g2_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00095b6c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00095b6c) list_medium_line_g2_g

0x0c06,	// (0x00086d72) list_medium_line_g2_t1_ParamLimits

0x0c06,	// (0x00086d72) list_medium_line_g2_t1

0x0598,	// (0x00086704) list_medium_line_t3_g2_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t3_g2_g1

0x05a4,	// (0x00086710) list_medium_line_t3_g2_g2_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00095b6c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00095b6c) list_medium_line_t3_g2_g

0x0c1b,	// (0x00086d87) list_medium_line_t3_g2_t1_ParamLimits

0x0c1b,	// (0x00086d87) list_medium_line_t3_g2_t1

0x0c35,	// (0x00086da1) list_medium_line_t3_g2_t2_ParamLimits

0x0c35,	// (0x00086da1) list_medium_line_t3_g2_t2

0x0c4b,	// (0x00086db7) list_medium_line_t3_g2_t3_ParamLimits

0x0c4b,	// (0x00086db7) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00095ec1) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00095ec1) list_medium_line_t3_g2_t

0x08c5,	// (0x00086a31) list_medium_line_right_icon_g1

0x0c65,	// (0x00086dd1) list_medium_line_right_icon_t1

0x0598,	// (0x00086704) list_medium_line_t2_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t2_g1

0x0c73,	// (0x00086ddf) list_medium_line_t2_t1_ParamLimits

0x0c73,	// (0x00086ddf) list_medium_line_t2_t1

0x0c8d,	// (0x00086df9) list_medium_line_t2_t2_ParamLimits

0x0c8d,	// (0x00086df9) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00095ec8) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00095ec8) list_medium_line_t2_t

0x0598,	// (0x00086704) list_medium_line_t3_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t3_g1

0x0ca6,	// (0x00086e12) list_medium_line_t3_t1_ParamLimits

0x0ca6,	// (0x00086e12) list_medium_line_t3_t1

0x0cc0,	// (0x00086e2c) list_medium_line_t3_t2_ParamLimits

0x0cc0,	// (0x00086e2c) list_medium_line_t3_t2

0x0cd6,	// (0x00086e42) list_medium_line_t3_t3_ParamLimits

0x0cd6,	// (0x00086e42) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00095ecd) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00095ecd) list_medium_line_t3_t

0x0598,	// (0x00086704) list_medium_line_g3_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_g3_g1

0x0ceb,	// (0x00086e57) list_medium_line_g3_g2_ParamLimits

0x0ceb,	// (0x00086e57) list_medium_line_g3_g2

0x05a4,	// (0x00086710) list_medium_line_g3_g3_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00095ed4) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00095ed4) list_medium_line_g3_g

0x0cf7,	// (0x00086e63) list_medium_line_g3_t1_ParamLimits

0x0cf7,	// (0x00086e63) list_medium_line_g3_t1

0x0598,	// (0x00086704) list_medium_line_t2_g3_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t2_g3_g1

0x0ceb,	// (0x00086e57) list_medium_line_t2_g3_g2_ParamLimits

0x0ceb,	// (0x00086e57) list_medium_line_t2_g3_g2

0x05a4,	// (0x00086710) list_medium_line_t2_g3_g3_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00095ed4) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00095ed4) list_medium_line_t2_g3_g

0x0d0c,	// (0x00086e78) list_medium_line_t2_g3_t1_ParamLimits

0x0d0c,	// (0x00086e78) list_medium_line_t2_g3_t1

0x0d26,	// (0x00086e92) list_medium_line_t2_g3_t2_ParamLimits

0x0d26,	// (0x00086e92) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00095edb) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00095edb) list_medium_line_t2_g3_t

0x0598,	// (0x00086704) list_medium_line_t3_g3_g1_ParamLimits

0x0598,	// (0x00086704) list_medium_line_t3_g3_g1

0x0ceb,	// (0x00086e57) list_medium_line_t3_g3_g2_ParamLimits

0x0ceb,	// (0x00086e57) list_medium_line_t3_g3_g2

0x05a4,	// (0x00086710) list_medium_line_t3_g3_g3_ParamLimits

0x05a4,	// (0x00086710) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00095ed4) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00095ed4) list_medium_line_t3_g3_g

0x0d42,	// (0x00086eae) list_medium_line_t3_g3_t1_ParamLimits

0x0d42,	// (0x00086eae) list_medium_line_t3_g3_t1

0x0d5b,	// (0x00086ec7) list_medium_line_t3_g3_t2_ParamLimits

0x0d5b,	// (0x00086ec7) list_medium_line_t3_g3_t2

0x0d71,	// (0x00086edd) list_medium_line_t3_g3_t3_ParamLimits

0x0d71,	// (0x00086edd) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00095ee0) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00095ee0) list_medium_line_t3_g3_t

0x09c2,	// (0x00086b2e) list_medium_line_right_iconx2_g1

0x08c5,	// (0x00086a31) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095ee7) list_medium_line_right_iconx2_g

0x0d8b,	// (0x00086ef7) list_medium_line_right_iconx2_t1

0x09c2,	// (0x00086b2e) list_medium_line_t2_right_iconx2_g1

0x08c5,	// (0x00086a31) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095ee7) list_medium_line_t2_right_iconx2_g

0x0d99,	// (0x00086f05) list_medium_line_t2_right_iconx2_t1

0x0da9,	// (0x00086f15) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00095eec) list_medium_line_t2_right_iconx2_t

0x0dbb,	// (0x00086f27) list_medium_line_x4_t4_t1

0x0dc9,	// (0x00086f35) list_medium_line_x4_t4_t2

0x0dd9,	// (0x00086f45) list_medium_line_x4_t4_t3

0x0de9,	// (0x00086f55) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00095ef1) list_medium_line_x4_t4_t

0xa30d,	// (0x00090479) tport_appsw_pane_ParamLimits

0xa30d,	// (0x00090479) tport_appsw_pane

0xa325,	// (0x00090491) tport_contact_pane_ParamLimits

0xa325,	// (0x00090491) tport_contact_pane

0xa33d,	// (0x000904a9) tport_listscroll_pane_ParamLimits

0xa33d,	// (0x000904a9) tport_listscroll_pane

0xa357,	// (0x000904c3) cell_tport_appsw_pane_ParamLimits

0xa357,	// (0x000904c3) cell_tport_appsw_pane

0xc98e,	// (0x00092afa) tport_appsw_pane_g1_ParamLimits

0xc98e,	// (0x00092afa) tport_appsw_pane_g1

0xdc9e,	// (0x00093e0a) tport_contact_pane_g1

0xd556,	// (0x000936c2) tport_contact_pane_t1

0xdca7,	// (0x00093e13) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00095efa) tport_contact_pane_t

0xdcb5,	// (0x00093e21) list_tport_pane

0xdcbe,	// (0x00093e2a) scroll_pane_cp_030

0xa39f,	// (0x0009050b) cell_tport_appsw_pane_g1

0xa3af,	// (0x0009051b) cell_tport_appsw_pane_t1

0xa3bd,	// (0x00090529) grid_highlight_pane_cp019

0xa3c5,	// (0x00090531) list_tport_double_graphic_pane_ParamLimits

0xa3c5,	// (0x00090531) list_tport_double_graphic_pane

0xe761,	// (0x000948cd) list_highlight_pane_cp023_ParamLimits

0xe761,	// (0x000948cd) list_highlight_pane_cp023

0xa3d2,	// (0x0009053e) list_tport_double_graphic_pane_g1_ParamLimits

0xa3d2,	// (0x0009053e) list_tport_double_graphic_pane_g1

0xa3df,	// (0x0009054b) list_tport_double_graphic_pane_t1_ParamLimits

0xa3df,	// (0x0009054b) list_tport_double_graphic_pane_t1

0xa3f4,	// (0x00090560) list_tport_double_graphic_pane_t2_ParamLimits

0xa3f4,	// (0x00090560) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00095f06) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00095f06) list_tport_double_graphic_pane_t

0xe757,	// (0x000948c3) main_cale_note_pane

0x862e,	// (0x0008e79a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x862e,	// (0x0008e79a) cell_vitu2_function_top_wide_pane_cp01

0x9dec,	// (0x0008ff58) wait_bar_pane_cp05_ParamLimits

0xe761,	// (0x000948cd) listscroll_cmail_pane

0xdcc7,	// (0x00093e33) list_cmail_pane

0xa406,	// (0x00090572) list_cmail_body_pane

0xa41b,	// (0x00090587) list_single_cmail_header_caption_pane

0xa431,	// (0x0009059d) list_single_cmail_header_detail_pane_ParamLimits

0xa431,	// (0x0009059d) list_single_cmail_header_detail_pane

0xdcd7,	// (0x00093e43) list_single_cmail_header_caption_pane_t1

0x0df9,	// (0x00086f65) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0df9,	// (0x00086f65) list_single_cmail_header_detail_pane_g1

0xf0a2,	// (0x0009520e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0a2,	// (0x0009520e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00095f0b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00095f0b) list_single_cmail_header_detail_pane_g

0xdcfb,	// (0x00093e67) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdcfb,	// (0x00093e67) list_single_cmail_header_detail_pane_t1

0xdd5b,	// (0x00093ec7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdd5b,	// (0x00093ec7) list_single_cmail_header_editor_pane_bg

0xd6b3,	// (0x0009381f) list_cmail_body_pane_g1

0xdd72,	// (0x00093ede) list_cmail_body_pane_t1

0xc9dd,	// (0x00092b49) list_single_cmail_header_editor_pane_bg_g1

0x280c,	// (0x00088978) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc9ed,	// (0x00092b59) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc9e5,	// (0x00092b51) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcc40,	// (0x00092dac) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca0d,	// (0x00092b79) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc9fd,	// (0x00092b69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca05,	// (0x00092b71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x27ec,	// (0x00088958) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa45a,	// (0x000905c6) calenote_gesture_pane_ParamLimits

0xa45a,	// (0x000905c6) calenote_gesture_pane

0xa47a,	// (0x000905e6) calenote_window_pane_ParamLimits

0xa47a,	// (0x000905e6) calenote_window_pane

0xdd80,	// (0x00093eec) popup_note_window_cp01

0xa496,	// (0x00090602) calenote_swipe_1_pane_ParamLimits

0xa496,	// (0x00090602) calenote_swipe_1_pane

0xa1c0,	// (0x0009032c) calenote_swipe_2_pane_ParamLimits

0xa1c0,	// (0x0009032c) calenote_swipe_2_pane

0xda04,	// (0x00093b70) calenote_swipe_1_pane_g1_ParamLimits

0xda04,	// (0x00093b70) calenote_swipe_1_pane_g1

0xda11,	// (0x00093b7d) calenote_swipe_1_pane_g2_ParamLimits

0xda11,	// (0x00093b7d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00095e2f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00095e2f) calenote_swipe_1_pane_g

0xdd92,	// (0x00093efe) calenote_swipe_1_pane_t1_ParamLimits

0xdd92,	// (0x00093efe) calenote_swipe_1_pane_t1

0xda04,	// (0x00093b70) calenote_swipe_2_pane_g1_ParamLimits

0xda04,	// (0x00093b70) calenote_swipe_2_pane_g1

0xddb1,	// (0x00093f1d) calenote_swipe_2_pane_g2_ParamLimits

0xddb1,	// (0x00093f1d) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00095f17) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00095f17) calenote_swipe_2_pane_g

0xddbd,	// (0x00093f29) calenote_swipe_2_pane_t1_ParamLimits

0xddbd,	// (0x00093f29) calenote_swipe_2_pane_t1

0xe757,	// (0x000948c3) main_mup_navstr_pane

0x726f,	// (0x0008d3db) main_mup3_pane_t7_ParamLimits

0x726f,	// (0x0008d3db) main_mup3_pane_t7

0xc585,	// (0x000926f1) main_mp4_pane_g6_ParamLimits

0xc585,	// (0x000926f1) main_mp4_pane_g6

0xc7d8,	// (0x00092944) main_image3_pane_t4_ParamLimits

0xc7d8,	// (0x00092944) main_image3_pane_t4

0xa4ab,	// (0x00090617) popup_navstr_preview_pane_ParamLimits

0xa4ab,	// (0x00090617) popup_navstr_preview_pane

0xa4bf,	// (0x0009062b) scroll_navstr_pane_ParamLimits

0xa4bf,	// (0x0009062b) scroll_navstr_pane

0xe757,	// (0x000948c3) bg_popup_preview_window_pane_cp04

0xdde4,	// (0x00093f50) popup_navstr_preview_pane_t1

0xa4d3,	// (0x0009063f) scroll_navstr_pane_g1_ParamLimits

0xa4d3,	// (0x0009063f) scroll_navstr_pane_g1

0xa4e7,	// (0x00090653) scroll_navstr_pane_t1_ParamLimits

0xa4e7,	// (0x00090653) scroll_navstr_pane_t1

0xdd89,	// (0x00093ef5) bg_button_pane_cp014

0xdd89,	// (0x00093ef5) bg_button_pane_cp030

0x086b,	// (0x000869d7) list_double_fisheye_pane_g4_ParamLimits

0x086b,	// (0x000869d7) list_double_fisheye_pane_g4

0x0877,	// (0x000869e3) list_double_fisheye_pane_g5_ParamLimits

0x0877,	// (0x000869e3) list_double_fisheye_pane_g5

0xb39c,	// (0x00091508) sp_fs_scroll_pane_cp03

0xdb24,	// (0x00093c90) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdb30,	// (0x00093c9c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00095e4c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb3c,	// (0x00093ca8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdccf,	// (0x00093e3b) sp_fs_scroll_pane_cp02

0x17d3,	// (0x0008793f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x17d3,	// (0x0008793f) popup_sp_fs_calendar_preview_list_single_pane

0xe757,	// (0x000948c3) main_cam6_pano_pane

0xe761,	// (0x000948cd) main_mup3_pane_ParamLimits

0xe757,	// (0x000948c3) main_phacti_pane

0x9cbf,	// (0x0008fe2b) bg_button_pane_cp11

0x9cd9,	// (0x0008fe45) main_mobtv_info_pane_g2_ParamLimits

0x9cd9,	// (0x0008fe45) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00095dac) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00095dac) main_mobtv_info_pane_g

0x9eb6,	// (0x00090022) sc_clock_pane_t5_ParamLimits

0x9eb6,	// (0x00090022) sc_clock_pane_t5

0x9f7e,	// (0x000900ea) main_radioblah_pane_g1_ParamLimits

0xd950,	// (0x00093abc) main_radioblah_pane_t3_ParamLimits

0xd950,	// (0x00093abc) main_radioblah_pane_t3

0xd968,	// (0x00093ad4) main_radioblah_pane_t4_ParamLimits

0xd968,	// (0x00093ad4) main_radioblah_pane_t4

0x9fa6,	// (0x00090112) main_radioblah_text_pane_ParamLimits

0x9fa6,	// (0x00090112) main_radioblah_text_pane

0x9fb8,	// (0x00090124) main_radioblah_info_pane_g1_ParamLimits

0xa051,	// (0x000901bd) main_radioblah_info_pane_t4_ParamLimits

0xa051,	// (0x000901bd) main_radioblah_info_pane_t4

0xe761,	// (0x000948cd) main_sp_fs_calendar_pane

0xa4fe,	// (0x0009066a) main_phacti_pane_g1

0xa506,	// (0x00090672) phacti_note_pane_ParamLimits

0xa506,	// (0x00090672) phacti_note_pane

0xddfb,	// (0x00093f67) phacti_term_pane_ParamLimits

0xddfb,	// (0x00093f67) phacti_term_pane

0xde10,	// (0x00093f7c) phacti_note_pane_t1_ParamLimits

0xde10,	// (0x00093f7c) phacti_note_pane_t1

0xde27,	// (0x00093f93) phacti_term_pane_g1

0xde2f,	// (0x00093f9b) phacti_term_pane_t1_ParamLimits

0xde2f,	// (0x00093f9b) phacti_term_pane_t1

0xde59,	// (0x00093fc5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1dc1,	// (0x00087f2d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00095f21) popup_sp_fs_calendar_preview_list_single_pane_g

0xde61,	// (0x00093fcd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde61,	// (0x00093fcd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde77,	// (0x00093fe3) aid_popup_sp_fs_bg_corner_pane

0xbbab,	// (0x00091d17) popup_sp_fs_calendar_preview_bg_pane_g1

0xe757,	// (0x000948c3) popup_sp_fs_calendar_preview_bg_pane

0xde7f,	// (0x00093feb) popup_sp_fs_calendar_preview_list_pane

0xb690,	// (0x000917fc) bg_main_sp_fs_cale_pane_ParamLimits

0xb690,	// (0x000917fc) bg_main_sp_fs_cale_pane

0xde87,	// (0x00093ff3) listscroll_cale_mrui_pane_ParamLimits

0xde87,	// (0x00093ff3) listscroll_cale_mrui_pane

0xde9c,	// (0x00094008) listscroll_sp_fs_schedule_track_pane

0xdea5,	// (0x00094011) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdea5,	// (0x00094011) main_sp_fs_ctrlbar_pane_cp01

0xdeb8,	// (0x00094024) main_sp_fs_ribbon_pane

0xdec0,	// (0x0009402c) popup_sp_fs_cale_preview_window

0xa57b,	// (0x000906e7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa57b,	// (0x000906e7) list_single_sp_fs_schedule_track_pane

0xe761,	// (0x000948cd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe761,	// (0x000948cd) bg_sp_fs_highlight_list_pane_cp03

0xa58e,	// (0x000906fa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa58e,	// (0x000906fa) list_single_sp_fs_schedule_track_pane_g1

0xa59a,	// (0x00090706) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa59a,	// (0x00090706) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00095f26) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00095f26) list_single_sp_fs_schedule_track_pane_g

0xa5a6,	// (0x00090712) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa5a6,	// (0x00090712) list_single_sp_fs_schedule_track_pane_t1

0xa5c0,	// (0x0009072c) sp_fs_schedule_track_pane_ParamLimits

0xa5c0,	// (0x0009072c) sp_fs_schedule_track_pane

0xded2,	// (0x0009403e) sp_fs_schedule_track_pane_g1

0xdeda,	// (0x00094046) sp_fs_schedule_track_pane_g2

0xdee2,	// (0x0009404e) sp_fs_schedule_track_pane_g3

0xdeea,	// (0x00094056) sp_fs_schedule_track_pane_g4

0xdef2,	// (0x0009405e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00095f2b) sp_fs_schedule_track_pane_g

0xc9dd,	// (0x00092b49) bg_sp_fs_schedule_viewer_highlight_g1

0x280c,	// (0x00088978) bg_sp_fs_schedule_viewer_highlight_g2

0xc9e5,	// (0x00092b51) bg_sp_fs_schedule_viewer_highlight_g3

0xc9ed,	// (0x00092b59) bg_sp_fs_schedule_viewer_highlight_g4

0xcc40,	// (0x00092dac) bg_sp_fs_schedule_viewer_highlight_g5

0xc9fd,	// (0x00092b69) bg_sp_fs_schedule_viewer_highlight_g6

0xca05,	// (0x00092b71) bg_sp_fs_schedule_viewer_highlight_g7

0xca0d,	// (0x00092b79) bg_sp_fs_schedule_viewer_highlight_g8

0x27ec,	// (0x00088958) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00095f36) bg_sp_fs_schedule_viewer_highlight_g

0xe757,	// (0x000948c3) bg_main_sp_fs_ribbon_pane

0xa5d1,	// (0x0009073d) main_sp_fs_ribbon_pane_g1

0xdefa,	// (0x00094066) main_sp_fs_ribbon_pane_t1

0xa5da,	// (0x00090746) main_sp_fs_ribbon_pane_t2

0xdf09,	// (0x00094075) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00095f49) main_sp_fs_ribbon_pane_t

0xdf18,	// (0x00094084) main_sp_fs_ribbon_scheduler_pane

0xdf20,	// (0x0009408c) bg_main_sp_fs_ribbon_pane_g1

0xdf29,	// (0x00094095) bg_main_sp_fs_ribbon_pane_g2

0xdf32,	// (0x0009409e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00095f50) bg_main_sp_fs_ribbon_pane_g

0xdf3a,	// (0x000940a6) main_sp_fs_ribbon_scheduler_pane_g1

0xdf43,	// (0x000940af) main_sp_fs_ribbon_scheduler_pane_g2

0xdf4c,	// (0x000940b8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00095f57) main_sp_fs_ribbon_scheduler_pane_g

0xdf55,	// (0x000940c1) list_cale_mrui_pane

0xa5e9,	// (0x00090755) sp_fs_scroll_pane_cp07_ParamLimits

0xa5e9,	// (0x00090755) sp_fs_scroll_pane_cp07

0xa605,	// (0x00090771) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa605,	// (0x00090771) bg_sp_fs_schedule_viewer_highlight

0xdf62,	// (0x000940ce) list_single_sp_fs_schedule_track_pane_cp01

0xdf6a,	// (0x000940d6) list_sp_fs_schedule_track_pane

0xdf72,	// (0x000940de) sp_fs_scroll_pane_cp06_ParamLimits

0xdf72,	// (0x000940de) sp_fs_scroll_pane_cp06

0xbbab,	// (0x00091d17) bgmain_sp_fs_calendar_pane_g1

0x0e11,	// (0x00086f7d) list_single_cale_mrui_pane_ParamLimits

0x0e11,	// (0x00086f7d) list_single_cale_mrui_pane

0xdf84,	// (0x000940f0) list_single_cale_mrui_row_pane_ParamLimits

0xdf84,	// (0x000940f0) list_single_cale_mrui_row_pane

0xdf91,	// (0x000940fd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf91,	// (0x000940fd) list_single_cale_mrui_row_pane_g1

0xdfd6,	// (0x00094142) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdfd6,	// (0x00094142) list_single_cale_mrui_row_pane_t1

0x0e32,	// (0x00086f9e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e32,	// (0x00086f9e) list_single_cale_mrui_row_pane_t2

0xdfe8,	// (0x00094154) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdfe8,	// (0x00094154) list_single_cale_mrui_row_pane_t3

0xe017,	// (0x00094183) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe017,	// (0x00094183) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00095f65) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00095f65) list_single_cale_mrui_row_pane_t

0x0e9a,	// (0x00087006) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e9a,	// (0x00087006) list_single_cmail_header_editor_pane_bg_cp01

0x0ec0,	// (0x0008702c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ec0,	// (0x0008702c) list_single_cmail_header_editor_pane_bg_cp02

0xa615,	// (0x00090781) main_radioblah_text_pane_t1_ParamLimits

0xa615,	// (0x00090781) main_radioblah_text_pane_t1

0xe046,	// (0x000941b2) cam6_indi_pane_cp01

0xe04e,	// (0x000941ba) cam6_mode_pane_cp01

0xe056,	// (0x000941c2) cam6_pano_pane

0xe05f,	// (0x000941cb) cam6_zoom_pane_cp01

0xe067,	// (0x000941d3) cam6_pano_image_pane

0xe072,	// (0x000941de) cam6_pano_pane_g1

0xd6b3,	// (0x0009381f) cam6_pano_pane_g2

0xe07b,	// (0x000941e7) cam6_pano_pane_g3

0xe084,	// (0x000941f0) cam6_pano_pane_g4

0xc1c6,	// (0x00092332) cam6_pano_pane_g5

0xe08d,	// (0x000941f9) cam6_pano_pane_g6

0xe097,	// (0x00094203) cam6_pano_pane_g7

0xe09f,	// (0x0009420b) cam6_pano_pane_g8

0xe0a8,	// (0x00094214) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00095f6e) cam6_pano_pane_g

0xe757,	// (0x000948c3) main_browser_tag_pane

0xdddc,	// (0x00093f48) grid_navstr_albumart_pane

0xe0b3,	// (0x0009421f) cell_navstr_albumart_pane_ParamLimits

0xe0b3,	// (0x0009421f) cell_navstr_albumart_pane

0xe0d3,	// (0x0009423f) cell_navstr_albumart_pane_g1

0xb4a1,	// (0x0009160d) cell_navstr_albumart_pane_g2

0xb4b1,	// (0x0009161d) cell_navstr_albumart_pane_g3

0xb4a9,	// (0x00091615) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00095f81) cell_navstr_albumart_pane_g

0xa62f,	// (0x0009079b) bt_list_pane_ParamLimits

0xa62f,	// (0x0009079b) bt_list_pane

0xa643,	// (0x000907af) bt_list_pane_t1

0xa652,	// (0x000907be) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00095f8a) bt_list_pane_t

0xe757,	// (0x000948c3) main_cale_prevew_pane

0xa661,	// (0x000907cd) popup_cale_preview_window_ParamLimits

0xa661,	// (0x000907cd) popup_cale_preview_window

0xe761,	// (0x000948cd) bg_popup_preview_window_pane_cp05_ParamLimits

0xe761,	// (0x000948cd) bg_popup_preview_window_pane_cp05

0xe0db,	// (0x00094247) list_cale_preview_pane_ParamLimits

0xe0db,	// (0x00094247) list_cale_preview_pane

0xa67c,	// (0x000907e8) list_double_cale_preview_pane_ParamLimits

0xa67c,	// (0x000907e8) list_double_cale_preview_pane

0xa68e,	// (0x000907fa) list_single_cale_preview_pane_ParamLimits

0xa68e,	// (0x000907fa) list_single_cale_preview_pane

0xa6a4,	// (0x00090810) list_single_cale_preview_pane_g1

0xa6ac,	// (0x00090818) list_single_cale_preview_pane_t1_ParamLimits

0xa6ac,	// (0x00090818) list_single_cale_preview_pane_t1

0xa6c1,	// (0x0009082d) list_double_cale_preview_pane_g1

0xa6c9,	// (0x00090835) list_double_cale_preview_pane_t1_ParamLimits

0xa6c9,	// (0x00090835) list_double_cale_preview_pane_t1

0xa6de,	// (0x0009084a) list_double_cale_preview_pane_t2_ParamLimits

0xa6de,	// (0x0009084a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00095f8f) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00095f8f) list_double_cale_preview_pane_t

0xe757,	// (0x000948c3) main_ezdial_pane

0xe761,	// (0x000948cd) main_sp_fs_email_pane_ParamLimits

0xa21e,	// (0x0009038a) cmail_ddmenu_btn01_pane_ParamLimits

0xa21e,	// (0x0009038a) cmail_ddmenu_btn01_pane

0xa231,	// (0x0009039d) cmail_ddmenu_btn02_pane_ParamLimits

0xa231,	// (0x0009039d) cmail_ddmenu_btn02_pane

0xa254,	// (0x000903c0) cmail_ddmenu_btn03_pane_ParamLimits

0xa254,	// (0x000903c0) cmail_ddmenu_btn03_pane

0xa27a,	// (0x000903e6) main_sp_fs_ctrlbar_pane_ParamLimits

0xa29e,	// (0x0009040a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa406,	// (0x00090572) list_cmail_body_pane_ParamLimits

0xdce5,	// (0x00093e51) bg_button_pane_cp12

0xdcee,	// (0x00093e5a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdcee,	// (0x00093e5a) list_single_cmail_header_detail_pane_g3

0xdd37,	// (0x00093ea3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd37,	// (0x00093ea3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00095f12) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00095f12) list_single_cmail_header_detail_pane_t

0xde44,	// (0x00093fb0) phacti_term_pane_t2_ParamLimits

0xde44,	// (0x00093fb0) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00095f1c) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00095f1c) phacti_term_pane_t

0xe0e7,	// (0x00094253) aid_size_list_single_double

0xa6f6,	// (0x00090862) popup_ezdial_listscroll_window

0xa712,	// (0x0009087e) popup_number_entry_window_cp01

0x1deb,	// (0x00087f57) bg_popup_call_pane_cp09

0xe0f3,	// (0x0009425f) ezdial_list_pane

0xe0fb,	// (0x00094267) scroll_pane_cp23

0xb690,	// (0x000917fc) bg_button_pane_cp028_ParamLimits

0xb690,	// (0x000917fc) bg_button_pane_cp028

0xa720,	// (0x0009088c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa720,	// (0x0009088c) cmail_ddmenu_btn01_pane_g1

0xa72c,	// (0x00090898) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa72c,	// (0x00090898) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00095f94) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00095f94) cmail_ddmenu_btn01_pane_g

0xe103,	// (0x0009426f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe103,	// (0x0009426f) cmail_ddmenu_btn01_pane_t1

0xb690,	// (0x000917fc) bg_button_pane_cp029_ParamLimits

0xb690,	// (0x000917fc) bg_button_pane_cp029

0xa738,	// (0x000908a4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa738,	// (0x000908a4) cmail_ddmenu_btn02_pane_g1

0xa750,	// (0x000908bc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa750,	// (0x000908bc) cmail_ddmenu_btn02_pane_t1

0xe761,	// (0x000948cd) bg_button_pane_cp031_ParamLimits

0xe761,	// (0x000948cd) bg_button_pane_cp031

0xa738,	// (0x000908a4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa738,	// (0x000908a4) cmail_ddmenu_btn03_pane_g1

0xa750,	// (0x000908bc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa750,	// (0x000908bc) cmail_ddmenu_btn03_pane_t1

0x7e16,	// (0x0008df82) cell_dialer2_keypad_pane_t1_ParamLimits

0x7e30,	// (0x0008df9c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7e30,	// (0x0008df9c) cell_dialer2_keypad_pane_t1_copy1

0x9ae2,	// (0x0008fc4e) ncimui_group_button_pane

0xe761,	// (0x000948cd) main_sp_fs_calendar_pane_ParamLimits

0xa41b,	// (0x00090587) list_single_cmail_header_caption_pane_ParamLimits

0xf0ae,	// (0x0009521a) aid_recal_txt_sm_pane

0xe757,	// (0x000948c3) mian_recal_day_pane

0xdec0,	// (0x0009402c) popup_sp_fs_cale_preview_window_ParamLimits

0xe118,	// (0x00094284) list_recal_day_pane

0xe15a,	// (0x000942c6) list_single_recal_day_pane_ParamLimits

0xe15a,	// (0x000942c6) list_single_recal_day_pane

0xe16c,	// (0x000942d8) list_single_recal_day_pane_g1_ParamLimits

0xe16c,	// (0x000942d8) list_single_recal_day_pane_g1

0xe178,	// (0x000942e4) list_single_recal_day_pane_g2_ParamLimits

0xe178,	// (0x000942e4) list_single_recal_day_pane_g2

0xe184,	// (0x000942f0) list_single_recal_day_pane_g3_ParamLimits

0xe184,	// (0x000942f0) list_single_recal_day_pane_g3

0x0ee0,	// (0x0008704c) list_single_recal_day_pane_g4_ParamLimits

0x0ee0,	// (0x0008704c) list_single_recal_day_pane_g4

0xe190,	// (0x000942fc) list_single_recal_day_pane_g5_ParamLimits

0xe190,	// (0x000942fc) list_single_recal_day_pane_g5

0xe19c,	// (0x00094308) list_single_recal_day_pane_g6_ParamLimits

0xe19c,	// (0x00094308) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00095fa3) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00095fa3) list_single_recal_day_pane_g

0xe1b0,	// (0x0009431c) list_single_recal_day_pane_t1

0xe1c2,	// (0x0009432e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00095fae) list_single_recal_day_pane_t

0xa774,	// (0x000908e0) ncimui_query_button_pane_ParamLimits

0xa774,	// (0x000908e0) ncimui_query_button_pane

0xa784,	// (0x000908f0) ncimui_query_button_pane_t1_ParamLimits

0xa784,	// (0x000908f0) ncimui_query_button_pane_t1

0xe1d4,	// (0x00094340) ncimui_query_button_pane_t2_ParamLimits

0xe1d4,	// (0x00094340) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00095fb3) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00095fb3) ncimui_query_button_pane_t

0xa797,	// (0x00090903) query_button_pane_ParamLimits

0xa797,	// (0x00090903) query_button_pane

0xe757,	// (0x000948c3) bg_button_pane_cp0028

0xe1e7,	// (0x00094353) query_button_pane_t1

0x5e9a,	// (0x0008c006) main_tport_pane_ParamLimits

0xa2ca,	// (0x00090436) bg_popup_window_pane_cp01_ParamLimits

0xa2ca,	// (0x00090436) bg_popup_window_pane_cp01

0xa2e5,	// (0x00090451) heading_pane_cp08_ParamLimits

0xa2e5,	// (0x00090451) heading_pane_cp08

0xa2f8,	// (0x00090464) heading_pane_cp07_ParamLimits

0xa2f8,	// (0x00090464) heading_pane_cp07

0xa39f,	// (0x0009050b) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00095eff) cell_tport_appsw_pane_g

0x03b8,	// (0x00086524) input_candi_list_open_g1

0x3587,	// (0x000896f3) list_cale_time_pane_g6_ParamLimits

0x3587,	// (0x000896f3) list_cale_time_pane_g6

0x6c63,	// (0x0008cdcf) aid_size_touch_calib_1_ParamLimits

0x6c63,	// (0x0008cdcf) aid_size_touch_calib_1

0x6c75,	// (0x0008cde1) aid_size_touch_calib_2_ParamLimits

0x6c75,	// (0x0008cde1) aid_size_touch_calib_2

0x6c8d,	// (0x0008cdf9) aid_size_touch_calib_3_ParamLimits

0x6c8d,	// (0x0008cdf9) aid_size_touch_calib_3

0x6cab,	// (0x0008ce17) aid_size_touch_calib_4_ParamLimits

0x6cab,	// (0x0008ce17) aid_size_touch_calib_4

0x6cc3,	// (0x0008ce2f) main_touch_calib_button_group_pane_ParamLimits

0x6cc3,	// (0x0008ce2f) main_touch_calib_button_group_pane

0x6cdb,	// (0x0008ce47) main_touch_calib_pane_g1_ParamLimits

0x6ced,	// (0x0008ce59) main_touch_calib_pane_g2_ParamLimits

0x6cff,	// (0x0008ce6b) main_touch_calib_pane_g3_ParamLimits

0x6d11,	// (0x0008ce7d) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x000958b9) main_touch_calib_pane_g_ParamLimits

0x6d23,	// (0x0008ce8f) main_touch_calib_pane_t1_ParamLimits

0x6d3d,	// (0x0008cea9) main_touch_calib_pane_t2_ParamLimits

0x6d57,	// (0x0008cec3) main_touch_calib_pane_t3_ParamLimits

0x6d6b,	// (0x0008ced7) main_touch_calib_pane_t4_ParamLimits

0x6d7f,	// (0x0008ceeb) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x000958c2) main_touch_calib_pane_t_ParamLimits

0xbf66,	// (0x000920d2) list_single_fp_cale_pane_g3_ParamLimits

0xbf66,	// (0x000920d2) list_single_fp_cale_pane_g3

0xe761,	// (0x000948cd) bg_button_pane_cp012_ParamLimits

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp03_ParamLimits

0x8de2,	// (0x0008ef4e) cell_vitu2_function_top_pane_g1_ParamLimits

0xe761,	// (0x000948cd) bg_vkb2_func_pane_cp04_ParamLimits

0x9a6d,	// (0x0008fbd9) main_ncimui_button_group_pane_ParamLimits

0x9a6d,	// (0x0008fbd9) main_ncimui_button_group_pane

0x9acd,	// (0x0008fc39) main_ncimui_pane_t3_ParamLimits

0x9acd,	// (0x0008fc39) main_ncimui_pane_t3

0xddf2,	// (0x00093f5e) phacti_button_group_pane

0xe0e7,	// (0x00094253) aid_size_list_single_double_ParamLimits

0xa6f6,	// (0x00090862) popup_ezdial_listscroll_window_ParamLimits

0xa712,	// (0x0009087e) popup_number_entry_window_cp01_ParamLimits

0xa7aa,	// (0x00090916) phacti_button_pane_ParamLimits

0xa7aa,	// (0x00090916) phacti_button_pane

0xe757,	// (0x000948c3) bg_button_pane_cp14

0xe1f5,	// (0x00094361) phacti_button_pane_t1

0xa7bb,	// (0x00090927) main_touch_calib_button_pane_ParamLimits

0xa7bb,	// (0x00090927) main_touch_calib_button_pane

0xeea2,	// (0x0009500e) bg_button_pane_cp18_ParamLimits

0xeea2,	// (0x0009500e) bg_button_pane_cp18

0xe203,	// (0x0009436f) main_touch_calib_button_pane_t1_ParamLimits

0xe203,	// (0x0009436f) main_touch_calib_button_pane_t1

0xe219,	// (0x00094385) main_touch_calib_button_pane_t2_ParamLimits

0xe219,	// (0x00094385) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00095fb8) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00095fb8) main_touch_calib_button_pane_t

0xe757,	// (0x000948c3) cell_ncimui_button_pane

0xe757,	// (0x000948c3) bg_button_pane_cp032

0xe237,	// (0x000943a3) cell_ncimui_button_pane_t1

0xc7b8,	// (0x00092924) image3_infobar_pane_ParamLimits

0xc7b8,	// (0x00092924) image3_infobar_pane

0x9ee2,	// (0x0009004e) fs_bigclock_status_pane_ParamLimits

0x9ee2,	// (0x0009004e) fs_bigclock_status_pane

0x9eef,	// (0x0009005b) main_fs_bigclock_clock_pane_ParamLimits

0x9eef,	// (0x0009005b) main_fs_bigclock_clock_pane

0x9f0d,	// (0x00090079) main_fs_bigclock_indi_pane_ParamLimits

0x9f0d,	// (0x00090079) main_fs_bigclock_indi_pane

0x9f3f,	// (0x000900ab) main_fs_bigclock_swipe_pane_ParamLimits

0x9f3f,	// (0x000900ab) main_fs_bigclock_swipe_pane

0xe757,	// (0x000948c3) main_fs_clock_dumped_data

0xd7c0,	// (0x0009392c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd7c0,	// (0x0009392c) list_single_fs_bigclock_indicator_pane_g1

0xd7db,	// (0x00093947) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd7db,	// (0x00093947) list_single_fs_bigclock_indicator_pane_g2

0xd7f5,	// (0x00093961) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd7f5,	// (0x00093961) list_single_fs_bigclock_indicator_pane_g3

0xd80f,	// (0x0009397b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd80f,	// (0x0009397b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00095de0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00095de0) list_single_fs_bigclock_indicator_pane_g

0xd83a,	// (0x000939a6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd83a,	// (0x000939a6) list_single_fs_bigclock_indicator_pane_t1

0xd862,	// (0x000939ce) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd862,	// (0x000939ce) list_single_fs_bigclock_indicator_pane_t2

0xd88a,	// (0x000939f6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd88a,	// (0x000939f6) list_single_fs_bigclock_indicator_pane_t3

0xd8b2,	// (0x00093a1e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd8b2,	// (0x00093a1e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00095deb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00095deb) list_single_fs_bigclock_indicator_pane_t

0xe245,	// (0x000943b1) image3_infobar_fav_pane_ParamLimits

0xe245,	// (0x000943b1) image3_infobar_fav_pane

0xe255,	// (0x000943c1) image3_infobar_loc_pane_ParamLimits

0xe255,	// (0x000943c1) image3_infobar_loc_pane

0xe269,	// (0x000943d5) image3_infobar_time_pane_ParamLimits

0xe269,	// (0x000943d5) image3_infobar_time_pane

0xbbab,	// (0x00091d17) image3_infobar_time_pane_g1

0xe279,	// (0x000943e5) image3_infobar_time_pane_t1

0xbbab,	// (0x00091d17) image3_infobar_loc_pane_g1

0xe287,	// (0x000943f3) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00095fbd) image3_infobar_loc_pane_g

0xe28f,	// (0x000943fb) image3_infobar_loc_pane_t1

0xbbab,	// (0x00091d17) image3_infobar_fav_pane_g1

0xe29d,	// (0x00094409) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00095fc2) image3_infobar_fav_pane_g

0xe2a5,	// (0x00094411) fs_bigclock_status_battery_pane

0xe2ae,	// (0x0009441a) fs_bigclock_status_signal_pane

0xe2b7,	// (0x00094423) fs_bigclock_status_title_pane

0xe2c0,	// (0x0009442c) fs_bigclock_status_signal_pane_g1

0xe2c9,	// (0x00094435) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00095fc7) fs_bigclock_status_signal_pane_g

0xe2d1,	// (0x0009443d) fs_bigclock_status_battery_pane_g1

0xe2da,	// (0x00094446) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00095fcc) fs_bigclock_status_battery_pane_g

0xe2e2,	// (0x0009444e) fs_bigclock_status_title_pane_t1

0xa7d0,	// (0x0009093c) main_fs_bigclock_clock_pane_g1

0xa7d0,	// (0x0009093c) main_fs_bigclock_clock_pane_g2

0xa7e1,	// (0x0009094d) main_fs_bigclock_clock_pane_g3

0xa7e1,	// (0x0009094d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00095fd1) main_fs_bigclock_clock_pane_g

0xa7f4,	// (0x00090960) main_fs_bigclock_clock_pane_t1

0xa80a,	// (0x00090976) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00095fda) main_fs_bigclock_clock_pane_t

0xe2f0,	// (0x0009445c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe2f0,	// (0x0009445c) list_single_fs_bigclock_indicator_pane

0xe301,	// (0x0009446d) list_single_fs_bigclock_pane_ParamLimits

0xe301,	// (0x0009446d) list_single_fs_bigclock_pane

0xe327,	// (0x00094493) main_fs_bigclock_indicator_pane_t1

0xe336,	// (0x000944a2) list_single_fs_bigclock_pane_g1

0xe33e,	// (0x000944aa) list_single_fs_bigclock_pane_t1

0xbbab,	// (0x00091d17) main_fs_bigclock_swipe_pane_g1

0xe381,	// (0x000944ed) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00095feb) main_fs_bigclock_swipe_pane_g

0xe389,	// (0x000944f5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe389,	// (0x000944f5) main_fs_bigclock_swipe_pane_t1

0x3867,	// (0x000899d3) call_type_pane_ParamLimits

0xe757,	// (0x000948c3) main_btmg_pane

0xdfbd,	// (0x00094129) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdfbd,	// (0x00094129) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00095f5e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00095f5e) list_single_cale_mrui_row_pane_g

0xe141,	// (0x000942ad) list_recal_vselct_arw_lo_pane

0xe149,	// (0x000942b5) list_recal_vselct_arw_up_pane

0xe151,	// (0x000942bd) list_recal_vselct_pane

0xa864,	// (0x000909d0) btmg_button_pane

0xa86e,	// (0x000909da) main_btmg_pane_g1

0xe757,	// (0x000948c3) bg_button_pane_cp044

0xe3a6,	// (0x00094512) btmg_button_pane_t1

0xb67c,	// (0x000917e8) aid_listscroll_gen

0xe761,	// (0x000948cd) main_cntbar_detail_pane

0xdcc7,	// (0x00093e33) list_cmail_folder_pane

0xb39c,	// (0x00091508) sp_fs_scroll_pane_cp03_ParamLimits

0x0ef8,	// (0x00087064) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ef8,	// (0x00087064) list_single_fs_dyc_pane_cp01

0xe3b4,	// (0x00094520) aid_size_cmail_indent

0xe3bd,	// (0x00094529) list_single_dyc_row_pane_cp01

0xa8aa,	// (0x00090a16) cntbar_detail_list_pane_ParamLimits

0xa8aa,	// (0x00090a16) cntbar_detail_list_pane

0xa8f6,	// (0x00090a62) main_cntbar_detail_cont_pane_ParamLimits

0xa8f6,	// (0x00090a62) main_cntbar_detail_cont_pane

0xb39c,	// (0x00091508) scroll_pane_cp032_ParamLimits

0xb39c,	// (0x00091508) scroll_pane_cp032

0xa90a,	// (0x00090a76) cntbar_detail_list_event_pane_ParamLimits

0xa90a,	// (0x00090a76) cntbar_detail_list_event_pane

0xa8ba,	// (0x00090a26) cntbar_detail_list_shct_pane

0x2862,	// (0x000889ce) aid_list_gen

0xe3c6,	// (0x00094532) aid_scroll

0xe3cf,	// (0x0009453b) aid_size_touch_scroll_bar

0x9313,	// (0x0008f47f) aid_list_double

0xa91a,	// (0x00090a86) aid_list_single

0x9313,	// (0x0008f47f) aid_list_single_lg

0x0f0d,	// (0x00087079) aid_list_z_g_a_sm

0xa923,	// (0x00090a8f) aid_list_z_g_d

0x0f15,	// (0x00087081) aid_txt_z_prm

0x0f23,	// (0x0008708f) aid_txt_z_prm_cp01

0x0f31,	// (0x0008709d) aid_txt_z_sec

0xa92b,	// (0x00090a97) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa92b,	// (0x00090a97) main_cntbar_detail_cont_pane_g1

0xa93f,	// (0x00090aab) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa93f,	// (0x00090aab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00095ff0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00095ff0) main_cntbar_detail_cont_pane_g

0xe3d8,	// (0x00094544) main_cntbar_detail_cont_pane_t1

0xe3e6,	// (0x00094552) main_cntbar_detail_cont_pane_t2

0xe3f4,	// (0x00094560) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00095ff5) main_cntbar_detail_cont_pane_t

0xa94f,	// (0x00090abb) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa94f,	// (0x00090abb) cell_cntbar_detail_list_shct_pane

0xe402,	// (0x0009456e) cntbar_detail_list_shct_pane_g1

0xe40b,	// (0x00094577) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00095ffc) cntbar_detail_list_shct_pane_g

0xa963,	// (0x00090acf) cntbar_detail_list_event_pane_g1_ParamLimits

0xa963,	// (0x00090acf) cntbar_detail_list_event_pane_g1

0xa96f,	// (0x00090adb) cntbar_detail_list_event_pane_g2_ParamLimits

0xa96f,	// (0x00090adb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00096001) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00096001) cntbar_detail_list_event_pane_g

0xa9db,	// (0x00090b47) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9db,	// (0x00090b47) cntbar_detail_list_event_pane_t1

0xa9f0,	// (0x00090b5c) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9f0,	// (0x00090b5c) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009600e) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009600e) cntbar_detail_list_event_pane_t

0xbbab,	// (0x00091d17) cell_cntbar_detail_list_shct_pane_g1

0x3e86,	// (0x00089ff2) navi_pane_mv_g3

0xe761,	// (0x000948cd) main_cntbar_detail_pane_ParamLimits

0xe757,	// (0x000948c3) main_notif_wgt_pane

0xc513,	// (0x0009267f) aid_tch_main_mp4_pane_g4

0xc745,	// (0x000928b1) popup_slider_window_cp02

0xe137,	// (0x000942a3) list_recal_day_event_pane

0xa878,	// (0x000909e4) cntbar_detail_btn_pane_ParamLimits

0xa878,	// (0x000909e4) cntbar_detail_btn_pane

0xa891,	// (0x000909fd) cntbar_detail_btn_pane_cp01_ParamLimits

0xa891,	// (0x000909fd) cntbar_detail_btn_pane_cp01

0xa8ba,	// (0x00090a26) cntbar_detail_list_shct_pane_ParamLimits

0xa8ca,	// (0x00090a36) cntbar_detail_pane_g1_ParamLimits

0xa8ca,	// (0x00090a36) cntbar_detail_pane_g1

0xa8da,	// (0x00090a46) cntbar_detail_pane_t1_ParamLimits

0xa8da,	// (0x00090a46) cntbar_detail_pane_t1

0xa97b,	// (0x00090ae7) cntbar_detail_list_event_pane_g3_ParamLimits

0xa97b,	// (0x00090ae7) cntbar_detail_list_event_pane_g3

0xa993,	// (0x00090aff) cntbar_detail_list_event_pane_g4_ParamLimits

0xa993,	// (0x00090aff) cntbar_detail_list_event_pane_g4

0xa9ab,	// (0x00090b17) cntbar_detail_list_event_pane_g5_ParamLimits

0xa9ab,	// (0x00090b17) cntbar_detail_list_event_pane_g5

0xa9c3,	// (0x00090b2f) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9c3,	// (0x00090b2f) cntbar_detail_list_event_pane_g6

0xaa05,	// (0x00090b71) cntbar_detail_list_event_pane_t3_ParamLimits

0xaa05,	// (0x00090b71) cntbar_detail_list_event_pane_t3

0xaa17,	// (0x00090b83) popup_notif_wgt_window_ParamLimits

0xaa17,	// (0x00090b83) popup_notif_wgt_window

0xaa30,	// (0x00090b9c) popup_submenu_window_cp01_ParamLimits

0xaa30,	// (0x00090b9c) popup_submenu_window_cp01

0x1deb,	// (0x00087f57) bg_popup_window_pane_cp10

0xe414,	// (0x00094580) listscroll_notif_wgt_pane

0xe426,	// (0x00094592) list_notif_wgt_window

0xe42f,	// (0x0009459b) scroll_pane_cp033

0xaa46,	// (0x00090bb2) list_notif_wgt_row_pane_ParamLimits

0xaa46,	// (0x00090bb2) list_notif_wgt_row_pane

0xe438,	// (0x000945a4) aid_size_list_notif_wgt_del

0xe445,	// (0x000945b1) list_notif_wgt_row_pane_g1

0xe451,	// (0x000945bd) list_notif_wgt_row_pane_g2

0xe460,	// (0x000945cc) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00096015) list_notif_wgt_row_pane_g

0xe46d,	// (0x000945d9) list_notif_wgt_row_pane_t1

0xe483,	// (0x000945ef) list_notif_wgt_row_pane_t2

0xe495,	// (0x00094601) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009601c) list_notif_wgt_row_pane_t

0xcc48,	// (0x00092db4) list_recal_day_event_pane_g1

0xe4a7,	// (0x00094613) list_recal_day_event_pane_t1

0xe757,	// (0x000948c3) bg_button_pane_cp045

0xaa56,	// (0x00090bc2) cntbar_detail_btn_pane_t1

0xb690,	// (0x000917fc) main_callh_pane_ParamLimits

0xb690,	// (0x000917fc) main_callh_pane

0xe757,	// (0x000948c3) main_coverflow0_pane

0xe757,	// (0x000948c3) main_wgtman_pane

0x9f57,	// (0x000900c3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f57,	// (0x000900c3) main_fs_bigclock_unlock_btn_pane

0xa397,	// (0x00090503) bg_button_pane_cp16

0xa3a7,	// (0x00090513) cell_tport_appsw_pane_g3

0xaa64,	// (0x00090bd0) cf0_flow_pane_ParamLimits

0xaa64,	// (0x00090bd0) cf0_flow_pane

0xe4b6,	// (0x00094622) listscroll_cf0_pane

0xe4c1,	// (0x0009462d) main_cf0_pane_g1

0xaa79,	// (0x00090be5) main_cf0_pane_t1_ParamLimits

0xaa79,	// (0x00090be5) main_cf0_pane_t1

0xaa90,	// (0x00090bfc) main_cf0_pane_t2_ParamLimits

0xaa90,	// (0x00090bfc) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00096028) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00096028) main_cf0_pane_t

0xe4d3,	// (0x0009463f) scroll_pane_cp11

0xaaa7,	// (0x00090c13) cf0_flow_pane_g1

0xaaaf,	// (0x00090c1b) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009602d) cf0_flow_pane_g

0xaab7,	// (0x00090c23) cf0_flow_pane_t1

0xe757,	// (0x000948c3) main_call6_pane

0xe757,	// (0x000948c3) main_calllock_pane

0xaac5,	// (0x00090c31) call6_btn_grp_pane_ParamLimits

0xaac5,	// (0x00090c31) call6_btn_grp_pane

0xaadf,	// (0x00090c4b) call6_pane_g1_ParamLimits

0xaadf,	// (0x00090c4b) call6_pane_g1

0xaaf5,	// (0x00090c61) popup_call6_1st_window_ParamLimits

0xaaf5,	// (0x00090c61) popup_call6_1st_window

0xab06,	// (0x00090c72) popup_call6_2nd_window_ParamLimits

0xab06,	// (0x00090c72) popup_call6_2nd_window

0xab17,	// (0x00090c83) cell_call6_btn_pane_ParamLimits

0xab17,	// (0x00090c83) cell_call6_btn_pane

0x1deb,	// (0x00087f57) bg_popup_call2_in_pane_cp03

0xe4de,	// (0x0009464a) popup_call6_1st_window_g1

0xe4e6,	// (0x00094652) popup_call6_1st_window_g2

0xe4ee,	// (0x0009465a) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00096032) popup_call6_1st_window_g

0xe4f6,	// (0x00094662) popup_call6_1st_window_t1

0xe505,	// (0x00094671) popup_call6_1st_window_t2

0xe513,	// (0x0009467f) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00096039) popup_call6_1st_window_t

0x1deb,	// (0x00087f57) bg_popup_call2_in_pane_cp04

0xe4de,	// (0x0009464a) popup_call6_2nd_window_g1

0xe4e6,	// (0x00094652) popup_call6_2nd_window_g2

0xe4ee,	// (0x0009465a) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00096032) popup_call6_2nd_window_g

0xe4f6,	// (0x00094662) popup_call6_2nd_window_t1

0xe757,	// (0x000948c3) bg_button_pane_cp15

0xe521,	// (0x0009468d) cell_call6_btn_pane_g1

0xf0b7,	// (0x00095223) cell_call6_btn_pane_t1

0xab2a,	// (0x00090c96) listscroll_wgtman_pane_ParamLimits

0xab2a,	// (0x00090c96) listscroll_wgtman_pane

0xab4b,	// (0x00090cb7) wgtman_btn_pane_ParamLimits

0xab4b,	// (0x00090cb7) wgtman_btn_pane

0x3ac1,	// (0x00089c2d) aid_scroll_copy1

0xe52a,	// (0x00094696) list_wgtman_pane

0xab8e,	// (0x00090cfa) wgtman_btn_pane_g1_ParamLimits

0xab8e,	// (0x00090cfa) wgtman_btn_pane_g1

0xabba,	// (0x00090d26) wgtman_btn_pane_t1_ParamLimits

0xabba,	// (0x00090d26) wgtman_btn_pane_t1

0xe534,	// (0x000946a0) wgtman_btn_pane_t2_ParamLimits

0xe534,	// (0x000946a0) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00096040) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00096040) wgtman_btn_pane_t

0xabf7,	// (0x00090d63) listrow_wgtman_pane_ParamLimits

0xabf7,	// (0x00090d63) listrow_wgtman_pane

0xac09,	// (0x00090d75) listrow_wgtman_pane_g1

0xac16,	// (0x00090d82) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00096045) listrow_wgtman_pane_g

0x0f3f,	// (0x000870ab) listrow_wgtman_pane_t1

0x0f57,	// (0x000870c3) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009604a) listrow_wgtman_pane_t

0x0f7d,	// (0x000870e9) wait_bar_pane_cp09

0xe54b,	// (0x000946b7) main_calllock_btn_pane

0xe555,	// (0x000946c1) main_calllock_pane_g1

0xe757,	// (0x000948c3) bg_button_pane_cp17

0xe521,	// (0x0009468d) main_calllock_btn_pane_g1

0xe561,	// (0x000946cd) main_calllock_btn_pane_t1

0xe757,	// (0x000948c3) main_dialer3_pane

0xe757,	// (0x000948c3) main_fmrd2_pane

0xbbab,	// (0x00091d17) main_fs_bigclock_unlock_btn_pane_g1

0xac3c,	// (0x00090da8) main_fs_bigclock_unlock_btn_pane_t1

0xac4a,	// (0x00090db6) area_fmrd2_info_pane_ParamLimits

0xac4a,	// (0x00090db6) area_fmrd2_info_pane

0xac5b,	// (0x00090dc7) area_fmrd2_visual_pane_ParamLimits

0xac5b,	// (0x00090dc7) area_fmrd2_visual_pane

0xac69,	// (0x00090dd5) fmrd2_indi_pane_ParamLimits

0xac69,	// (0x00090dd5) fmrd2_indi_pane

0xac76,	// (0x00090de2) area_fmrd2_visual_pane_g1

0xac7e,	// (0x00090dea) area_fmrd2_visual_pane_t1

0xac8e,	// (0x00090dfa) area_fmrd2_visual_pane_t2

0xac9e,	// (0x00090e0a) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00096054) area_fmrd2_visual_pane_t

0xacae,	// (0x00090e1a) area_fmrd2_info_pane_g1

0xacb6,	// (0x00090e22) area_fmrd2_info_pane_t1

0xacc6,	// (0x00090e32) area_fmrd2_info_pane_t2

0xacd6,	// (0x00090e42) area_fmrd2_info_pane_t3

0xace6,	// (0x00090e52) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009605b) area_fmrd2_info_pane_t

0xacf4,	// (0x00090e60) fmrd2_indi_pane_t1

0xad04,	// (0x00090e70) fmrd2_indi_pane_t2

0xad14,	// (0x00090e80) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00096064) fmrd2_indi_pane_t

0xd81e,	// (0x0009398a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd81e,	// (0x0009398a) list_single_fs_bigclock_indicator_pane_g5

0xd8cf,	// (0x00093a3b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd8cf,	// (0x00093a3b) list_single_fs_bigclock_indicator_pane_t5

0xa51a,	// (0x00090686) aid_cell_bcale_month_pane_ParamLimits

0xa51a,	// (0x00090686) aid_cell_bcale_month_pane

0xa538,	// (0x000906a4) bcale_month_pane_ParamLimits

0xa538,	// (0x000906a4) bcale_month_pane

0xa55c,	// (0x000906c8) bcale_preview_pane_ParamLimits

0xa55c,	// (0x000906c8) bcale_preview_pane

0xe33e,	// (0x000944aa) list_single_fs_bigclock_pane_t1_ParamLimits

0xe35d,	// (0x000944c9) list_single_fs_bigclock_pane_t2_ParamLimits

0xe35d,	// (0x000944c9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00095fe6) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00095fe6) list_single_fs_bigclock_pane_t

0xac34,	// (0x00090da0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009604f) main_fs_bigclock_unlock_btn_pane_g

0xad24,	// (0x00090e90) aid_dia3_key_size_ParamLimits

0xad24,	// (0x00090e90) aid_dia3_key_size

0xad33,	// (0x00090e9f) aid_dia3_listrow_size_ParamLimits

0xad33,	// (0x00090e9f) aid_dia3_listrow_size

0xad48,	// (0x00090eb4) dia3_keypad_fun_pane_ParamLimits

0xad48,	// (0x00090eb4) dia3_keypad_fun_pane

0xad64,	// (0x00090ed0) dia3_keypad_num_pane_ParamLimits

0xad64,	// (0x00090ed0) dia3_keypad_num_pane

0xad7f,	// (0x00090eeb) dia3_listscroll_pane_ParamLimits

0xad7f,	// (0x00090eeb) dia3_listscroll_pane

0xad92,	// (0x00090efe) dia3_numentry_pane_ParamLimits

0xad92,	// (0x00090efe) dia3_numentry_pane

0xe570,	// (0x000946dc) dia3_list_pane

0xe57b,	// (0x000946e7) scroll_pane_cp12

0xe757,	// (0x000948c3) bg_dia3_numentry_pane

0xada6,	// (0x00090f12) dia3_numentry_pane_t1

0xadb5,	// (0x00090f21) cell_dia3_key_num_pane

0xadbd,	// (0x00090f29) cell_dia3_key0_fun_pane_ParamLimits

0xadbd,	// (0x00090f29) cell_dia3_key0_fun_pane

0xadd1,	// (0x00090f3d) cell_dia3_key1_fun_pane_ParamLimits

0xadd1,	// (0x00090f3d) cell_dia3_key1_fun_pane

0xade9,	// (0x00090f55) dia3_listrow_pane

0xd571,	// (0x000936dd) bg_dia3_numentry_pane_g1

0xe757,	// (0x000948c3) bg_button_pane_cp21

0xe586,	// (0x000946f2) cell_dia3_key_num_pane_t1

0xe594,	// (0x00094700) cell_dia3_key_num_pane_t2

0xe5a3,	// (0x0009470f) cell_dia3_key_num_pane_t3

0xe5b2,	// (0x0009471e) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009606b) cell_dia3_key_num_pane_t

0xe757,	// (0x000948c3) bg_button_pane_cp19

0xadfb,	// (0x00090f67) cell_dia3_key0_fun_pane_g1

0xe757,	// (0x000948c3) bg_button_pane_cp20

0xae03,	// (0x00090f6f) cell_dia3_key1_fun_pane_g1

0xae0b,	// (0x00090f77) area_left_week_number_pane

0xae17,	// (0x00090f83) area_top_day_name_pane

0xae2a,	// (0x00090f96) frame_month_view_pane

0xe5c1,	// (0x0009472d) grid_month_view_pane

0xae3d,	// (0x00090fa9) cell_top_day_name_pane_ParamLimits

0xae3d,	// (0x00090fa9) cell_top_day_name_pane

0xae6a,	// (0x00090fd6) cell_area_left_week_number_pane_ParamLimits

0xae6a,	// (0x00090fd6) cell_area_left_week_number_pane

0xae7e,	// (0x00090fea) cell_month_view_pane_ParamLimits

0xae7e,	// (0x00090fea) cell_month_view_pane

0xe5cf,	// (0x0009473b) frm_month_g1

0xaeab,	// (0x00091017) frm_month_g2

0xaebe,	// (0x0009102a) frm_month_g3

0xaed1,	// (0x0009103d) frm_month_g4

0xaee4,	// (0x00091050) frm_month_g5

0xaef7,	// (0x00091063) frm_month_g6

0xaf0a,	// (0x00091076) frm_month_g7

0xe5dc,	// (0x00094748) frm_month_g8

0xaf1d,	// (0x00091089) frm_month_g9

0xaf2d,	// (0x00091099) frm_month_g10

0xaf3d,	// (0x000910a9) frm_month_g11

0xaf4d,	// (0x000910b9) frm_month_g12

0xaf5f,	// (0x000910cb) frm_month_g13

0xaf71,	// (0x000910dd) frm_month_g14

0xaf85,	// (0x000910f1) frm_month_g15

0xaf99,	// (0x00091105) frm_month_g16

0x000f,

0xff08,	// (0x00096074) frm_month_g

0xe5e9,	// (0x00094755) cell_top_day_name_pane_t1

0xafad,	// (0x00091119) cell_area_left_week_number_pane_g1

0xafb9,	// (0x00091125) cell_area_left_week_number_pane_t1

0xbe0e,	// (0x00091f7a) cell_month_view_pane_g1

0xafcc,	// (0x00091138) cell_month_view_pane_t1

0xe757,	// (0x000948c3) main_fps_pane

0xdaec,	// (0x00093c58) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdaec,	// (0x00093c58) cmail_ddmenu_btn02_pane_cp1

0xdb08,	// (0x00093c74) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdb08,	// (0x00093c74) cmail_ddmenu_btn02_pane_cp2

0xa744,	// (0x000908b0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa744,	// (0x000908b0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00095f99) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00095f99) cmail_ddmenu_btn02_pane_g

0xa762,	// (0x000908ce) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa762,	// (0x000908ce) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00095f9e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00095f9e) cmail_ddmenu_btn02_pane_t

0xafdf,	// (0x0009114b) fps_text_pane_ParamLimits

0xafdf,	// (0x0009114b) fps_text_pane

0xaff6,	// (0x00091162) main_fps_pane_g1_ParamLimits

0xaff6,	// (0x00091162) main_fps_pane_g1

0xb010,	// (0x0009117c) wait_bar_pane_cp010_ParamLimits

0xb010,	// (0x0009117c) wait_bar_pane_cp010

0xb021,	// (0x0009118d) fps_text_pane_t1_ParamLimits

0xb021,	// (0x0009118d) fps_text_pane_t1

0xc87c,	// (0x000929e8) cam4_image_uncrop_pane_g1

0xc885,	// (0x000929f1) cam4_image_uncrop_pane_g2

0x834b,	// (0x0008e4b7) cam4_image_uncrop_pane_g3

0x8354,	// (0x0008e4c0) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00095a5a) cam4_image_uncrop_pane_g

0xade9,	// (0x00090f55) dia3_listrow_pane_ParamLimits

0xe757,	// (0x000948c3) main_phob2_pane

0xa368,	// (0x000904d4) cell_tport_appsw_pane_cp02_ParamLimits

0xa368,	// (0x000904d4) cell_tport_appsw_pane_cp02

0xa37c,	// (0x000904e8) cell_tport_appsw_pane_cp03_ParamLimits

0xa37c,	// (0x000904e8) cell_tport_appsw_pane_cp03

0xe757,	// (0x000948c3) phob2_contact_card_pane

0xe757,	// (0x000948c3) phob2_listscroll_pane

0xe5fc,	// (0x00094768) phob2_list_pane

0xe604,	// (0x00094770) scroll_pane_cp034

0xb039,	// (0x000911a5) phob2_cc_data_pane_ParamLimits

0xb039,	// (0x000911a5) phob2_cc_data_pane

0xb058,	// (0x000911c4) phob2_cc_listscroll_pane_ParamLimits

0xb058,	// (0x000911c4) phob2_cc_listscroll_pane

0xabf7,	// (0x00090d63) list_double_large_graphic_phob2_pane_ParamLimits

0xabf7,	// (0x00090d63) list_double_large_graphic_phob2_pane

0xb076,	// (0x000911e2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb076,	// (0x000911e2) list_double_large_graphic_phob2_pane_g1

0x0f8f,	// (0x000870fb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f8f,	// (0x000870fb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00096095) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00096095) list_double_large_graphic_phob2_pane_g

0x0f9b,	// (0x00087107) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f9b,	// (0x00087107) list_double_large_graphic_phob2_pane_t1

0x0fb0,	// (0x0008711c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fb0,	// (0x0008711c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009609a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009609a) list_double_large_graphic_phob2_pane_t

0xe757,	// (0x000948c3) list_highlight_pane_cp024

0xb08c,	// (0x000911f8) phob2_cc_button_pane

0xb094,	// (0x00091200) phob2_cc_data_pane_g1_ParamLimits

0xb094,	// (0x00091200) phob2_cc_data_pane_g1

0xb0a9,	// (0x00091215) phob2_cc_data_pane_g2_ParamLimits

0xb0a9,	// (0x00091215) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009609f) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009609f) phob2_cc_data_pane_g

0xb0b9,	// (0x00091225) phob2_cc_data_pane_t1_ParamLimits

0xb0b9,	// (0x00091225) phob2_cc_data_pane_t1

0xb0d1,	// (0x0009123d) phob2_cc_data_pane_t2_ParamLimits

0xb0d1,	// (0x0009123d) phob2_cc_data_pane_t2

0xb0e9,	// (0x00091255) phob2_cc_data_pane_t3_ParamLimits

0xb0e9,	// (0x00091255) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000960a4) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000960a4) phob2_cc_data_pane_t

0xe60c,	// (0x00094778) phob2_cc_list_pane_ParamLimits

0xe60c,	// (0x00094778) phob2_cc_list_pane

0xccf1,	// (0x00092e5d) scroll_pane_cp035_ParamLimits

0xccf1,	// (0x00092e5d) scroll_pane_cp035

0xe761,	// (0x000948cd) bg_button_pane_cp033

0xe618,	// (0x00094784) phob2_cc_button_pane_g1

0xe624,	// (0x00094790) phob2_cc_button_pane_t1

0xe639,	// (0x000947a5) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000960ab) phob2_cc_button_pane_t

0xb101,	// (0x0009126d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb101,	// (0x0009126d) list_double_large_graphic_phob2_cc_pane

0xb131,	// (0x0009129d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb131,	// (0x0009129d) list_double_large_graphic_phob2_cc_pane_g1

0x0fc2,	// (0x0008712e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fc2,	// (0x0008712e) list_double_large_graphic_phob2_cc_pane_g2

0x0fce,	// (0x0008713a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0fce,	// (0x0008713a) list_double_large_graphic_phob2_cc_pane_g3

0x0fda,	// (0x00087146) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fda,	// (0x00087146) list_double_large_graphic_phob2_cc_pane_g4

0x0fe6,	// (0x00087152) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0fe6,	// (0x00087152) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000960b0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000960b0) list_double_large_graphic_phob2_cc_pane_g

0x0ff2,	// (0x0008715e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0ff2,	// (0x0008715e) list_double_large_graphic_phob2_cc_pane_t1

0x101b,	// (0x00087187) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x101b,	// (0x00087187) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000960bb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000960bb) list_double_large_graphic_phob2_cc_pane_t

0xe64b,	// (0x000947b7) list_highlight_pane_cp025_ParamLimits

0xe64b,	// (0x000947b7) list_highlight_pane_cp025

0xe761,	// (0x000948cd) bg_button_pane_cp033_ParamLimits

0xe618,	// (0x00094784) phob2_cc_button_pane_g1_ParamLimits

0xe624,	// (0x00094790) phob2_cc_button_pane_t1_ParamLimits

0xe639,	// (0x000947a5) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000960ab) phob2_cc_button_pane_t_ParamLimits

0x127d,	// (0x000873e9) popup_wgtman_window

0xcaf7,	// (0x00092c63) scroll_pane_cp038

0xab70,	// (0x00090cdc) wgtman_btn_pane_cp_01_ParamLimits

0xab70,	// (0x00090cdc) wgtman_btn_pane_cp_01

0xe659,	// (0x000947c5) wgtman_content_pane

0xe662,	// (0x000947ce) wgtman_heading_pane

0xe757,	// (0x000948c3) bg_heading_pane_cp02

0xe66b,	// (0x000947d7) wgtman_heading_pane_g1

0xe673,	// (0x000947df) wgtman_heading_pane_t1

0xe681,	// (0x000947ed) scroll_pane_cp036

0xe689,	// (0x000947f5) wgtman_list_pane

0xe691,	// (0x000947fd) wgtman_list_pane_t1_ParamLimits

0xe691,	// (0x000947fd) wgtman_list_pane_t1

0xc868,	// (0x000929d4) cam4_grid_pane

0x05e8,	// (0x00086754) bg_button_pane_cp015_ParamLimits

0x8f7a,	// (0x0008f0e6) bg_button_pane_cp016_ParamLimits

0x8f8d,	// (0x0008f0f9) bg_button_pane_cp017_ParamLimits

0x062e,	// (0x0008679a) popup_vitu2_query_window_g3_ParamLimits

0x062e,	// (0x0008679a) popup_vitu2_query_window_g3

0x06a9,	// (0x00086815) popup_vitu2_query_window_t6_ParamLimits

0x06a9,	// (0x00086815) popup_vitu2_query_window_t6

0x06d4,	// (0x00086840) popup_vitu2_query_window_t7_ParamLimits

0x06d4,	// (0x00086840) popup_vitu2_query_window_t7

0xc87c,	// (0x000929e8) cam4_grid_pane_g1

0xc885,	// (0x000929f1) cam4_grid_pane_g2

0xe6ab,	// (0x00094817) cam4_grid_pane_g3

0xe6b4,	// (0x00094820) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000960c0) cam4_grid_pane_g

0x225c,	// (0x000883c8) aid_placing_vt_slider_lsc_ParamLimits

0x25b7,	// (0x00088723) vidtel_button_pane_ParamLimits

0x25b7,	// (0x00088723) vidtel_button_pane

0xe757,	// (0x000948c3) bg_button_pane_cp034

0xe6bf,	// (0x0009482b) vidtel_button_pane_g1

0xe6c7,	// (0x00094833) vidtel_button_pane_t1

0xcc38,	// (0x00092da4) aid_size_vtel_slider_touch

0xccf1,	// (0x00092e5d) scroll_pane_cp039

0x9c4b,	// (0x0008fdb7) ncim_query_button_pane_cp01_ParamLimits

0x9c6a,	// (0x0008fdd6) ncimui_query_pane_g1_ParamLimits

0xe761,	// (0x000948cd) input_focus_pane_cp012_ParamLimits

0xd5af,	// (0x0009371b) ncim_query_entry_pane_t1_ParamLimits

0xccf1,	// (0x00092e5d) scroll_pane_cp039_ParamLimits

0x3d71,	// (0x00089edd) navi_pane_bcale_mc_g1

0x3d79,	// (0x00089ee5) navi_pane_bcale_mc_t1

0xdb51,	// (0x00093cbd) main_sp_fs_email_pane_g1

0xdb5d,	// (0x00093cc9) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00095e51) main_sp_fs_email_pane_g

0xdfc9,	// (0x00094135) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdfc9,	// (0x00094135) list_single_cale_mrui_row_pane_g3

0x0eee,	// (0x0008705a) list_single_recal_day_pane_g5_event_pane

0xe1a8,	// (0x00094314) list_single_recal_day_pane_g7

0xe6dd,	// (0x00094849) list_recal_day_event_pane_cp01

0xe6e6,	// (0x00094852) list_recal_vselct_arw_lo_pane_cp01

0xe6ee,	// (0x0009485a) list_recal_vselct_arw_up_pane_cp01

0xe6f6,	// (0x00094862) list_recal_vselct_pane_cp01

0xcc48,	// (0x00092db4) list_recal_day_event_pane_cp01_g1

0xe700,	// (0x0009486c) list_recal_day_event_pane_cp01_t1

0xe1b0,	// (0x0009431c) list_single_recal_day_pane_t1_ParamLimits

0xe1c2,	// (0x0009432e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00095fae) list_single_recal_day_pane_t_ParamLimits

0xeddd,	// (0x00094f49) bg_notes_pane_ParamLimits

0xee80,	// (0x00094fec) list_notes_pane_ParamLimits

0x15c3,	// (0x0008772f) scroll_pane_cp06_ParamLimits

0xeea2,	// (0x0009500e) main_notes_pane_ParamLimits

0xe757,	// (0x000948c3) main_welc_pane

0xb13d,	// (0x000912a9) main_welc_body_pane_ParamLimits

0xb13d,	// (0x000912a9) main_welc_body_pane

0xb15b,	// (0x000912c7) main_welc_opti_pane_ParamLimits

0xb15b,	// (0x000912c7) main_welc_opti_pane

0xb1a0,	// (0x0009130c) main_welc_pane_t1_ParamLimits

0xb1a0,	// (0x0009130c) main_welc_pane_t1

0xb1be,	// (0x0009132a) main_welc_body_row_pane_ParamLimits

0xb1be,	// (0x0009132a) main_welc_body_row_pane

0xe70e,	// (0x0009487a) main_welc_opti_row_pane_ParamLimits

0xe70e,	// (0x0009487a) main_welc_opti_row_pane

0xe71c,	// (0x00094888) main_welc_opti_row_pane_g1

0xb1d2,	// (0x0009133e) main_welc_opti_row_pane_t1

0xe724,	// (0x00094890) main_welc_body_row_pane_t1

0xe41e,	// (0x0009458a) popup_notif_wgt_heading_pane

0xe438,	// (0x000945a4) aid_size_list_notif_wgt_del_ParamLimits

0xe445,	// (0x000945b1) list_notif_wgt_row_pane_g1_ParamLimits

0xe451,	// (0x000945bd) list_notif_wgt_row_pane_g2_ParamLimits

0xe460,	// (0x000945cc) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00096015) list_notif_wgt_row_pane_g_ParamLimits

0xe46d,	// (0x000945d9) list_notif_wgt_row_pane_t1_ParamLimits

0xe483,	// (0x000945ef) list_notif_wgt_row_pane_t2_ParamLimits

0xe495,	// (0x00094601) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009601c) list_notif_wgt_row_pane_t_ParamLimits

0xac09,	// (0x00090d75) listrow_wgtman_pane_g1_ParamLimits

0xac16,	// (0x00090d82) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00096045) listrow_wgtman_pane_g_ParamLimits

0x0f3f,	// (0x000870ab) listrow_wgtman_pane_t1_ParamLimits

0x0f57,	// (0x000870c3) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009604a) listrow_wgtman_pane_t_ParamLimits

0x0f7d,	// (0x000870e9) wait_bar_pane_cp09_ParamLimits

0xe757,	// (0x000948c3) bg_popup_heading_pane_cp02

0xe733,	// (0x0009489f) popup_notif_wgt_heading_pane_g1

0xe73b,	// (0x000948a7) popup_notif_wgt_heading_pane_t1

0xe757,	// (0x000948c3) main_vids_pane

0xe757,	// (0x000948c3) vids_listscroll_pane

0xb1e1,	// (0x0009134d) scroll_pane_cp040

0xe757,	// (0x000948c3) vids_list_pane

0xb1ec,	// (0x00091358) vids_list_double_pane_ParamLimits

0xb1ec,	// (0x00091358) vids_list_double_pane

0xb1fd,	// (0x00091369) vids_list_double_pane_g1

0xb206,	// (0x00091372) vids_list_double_pane_t1

0xb216,	// (0x00091382) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000960ce) vids_list_double_pane_t

0xe761,	// (0x000948cd) main_ncimui_pane_ParamLimits

0x9a81,	// (0x0008fbed) main_ncimui_pane_g1_ParamLimits

0x9a8d,	// (0x0008fbf9) main_ncimui_pane_g2_ParamLimits

0x9a8d,	// (0x0008fbf9) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00095d56) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00095d56) main_ncimui_pane_g

0xb176,	// (0x000912e2) main_welc_pane_g1_ParamLimits

0xb176,	// (0x000912e2) main_welc_pane_g1

0xb18b,	// (0x000912f7) main_welc_pane_g2_ParamLimits

0xb18b,	// (0x000912f7) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000960c9) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000960c9) main_welc_pane_g

0xeddd,	// (0x00094f49) listscroll_mce_pane_ParamLimits

0x3f08,	// (0x0008a074) wait_bar_pane_cp10

0xb684,	// (0x000917f0) main_cale_day_pane_ParamLimits

0xb684,	// (0x000917f0) main_cale_week_pane_ParamLimits

0xeddd,	// (0x00094f49) main_messa_pane_ParamLimits

0x75f8,	// (0x0008d764) main_clock2_btn_pane_ParamLimits

0x75f8,	// (0x0008d764) main_clock2_btn_pane

0xbfee,	// (0x0009215a) main_clock2_btn_pane_cp01_ParamLimits

0xbfee,	// (0x0009215a) main_clock2_btn_pane_cp01

0xdf55,	// (0x000940c1) list_cale_mrui_pane_ParamLimits

0xe4cb,	// (0x00094637) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00096023) main_cf0_pane_g

0xae0b,	// (0x00090f77) area_left_week_number_pane_ParamLimits

0xae17,	// (0x00090f83) area_top_day_name_pane_ParamLimits

0xae2a,	// (0x00090f96) frame_month_view_pane_ParamLimits

0xe5c1,	// (0x0009472d) grid_month_view_pane_ParamLimits

0xe5cf,	// (0x0009473b) frm_month_g1_ParamLimits

0xaeab,	// (0x00091017) frm_month_g2_ParamLimits

0xaebe,	// (0x0009102a) frm_month_g3_ParamLimits

0xaed1,	// (0x0009103d) frm_month_g4_ParamLimits

0xaee4,	// (0x00091050) frm_month_g5_ParamLimits

0xaef7,	// (0x00091063) frm_month_g6_ParamLimits

0xaf0a,	// (0x00091076) frm_month_g7_ParamLimits

0xe5dc,	// (0x00094748) frm_month_g8_ParamLimits

0xaf1d,	// (0x00091089) frm_month_g9_ParamLimits

0xaf2d,	// (0x00091099) frm_month_g10_ParamLimits

0xaf3d,	// (0x000910a9) frm_month_g11_ParamLimits

0xaf4d,	// (0x000910b9) frm_month_g12_ParamLimits

0xaf5f,	// (0x000910cb) frm_month_g13_ParamLimits

0xaf71,	// (0x000910dd) frm_month_g14_ParamLimits

0xaf85,	// (0x000910f1) frm_month_g15_ParamLimits

0xaf99,	// (0x00091105) frm_month_g16_ParamLimits

0xff08,	// (0x00096074) frm_month_g_ParamLimits

0xe5e9,	// (0x00094755) cell_top_day_name_pane_t1_ParamLimits

0xafad,	// (0x00091119) cell_area_left_week_number_pane_g1_ParamLimits

0xafb9,	// (0x00091125) cell_area_left_week_number_pane_t1_ParamLimits

0xbe0e,	// (0x00091f7a) cell_month_view_pane_g1_ParamLimits

0xafcc,	// (0x00091138) cell_month_view_pane_t1_ParamLimits

0xedd5,	// (0x00094f41) main_clock2_btn_pane_g1

0xe749,	// (0x000948b5) main_clock2_btn_pane_t1

0xe761,	// (0x000948cd) listscroll_cmail_pane_ParamLimits

0xdb51,	// (0x00093cbd) main_sp_fs_email_pane_g1_ParamLimits

0xdb5d,	// (0x00093cc9) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00095e51) main_sp_fs_email_pane_g_ParamLimits

0xe118,	// (0x00094284) list_recal_day_pane_ParamLimits

0xe129,	// (0x00094295) mian_recal_day_pane_t1

0x0b00,	// (0x00086c6c) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b00,	// (0x00086c6c) list_single_dyc_row_text_pane_t4

0x0b49,	// (0x00086cb5) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b49,	// (0x00086cb5) list_single_dyc_row_text_pane_t5

0xdc03,	// (0x00093d6f) list_single_dyc_row_text_pane_t6_ParamLimits

0xdc03,	// (0x00093d6f) list_single_dyc_row_text_pane_t6

0x3527,	// (0x00089693) aid_mgn_list_cale_time_pane

0xe761,	// (0x000948cd) main_gallery2_pane_ParamLimits

0xc004,	// (0x00092170) main_clock2_pane_cp01_t1

0xc014,	// (0x00092180) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0009592c) main_clock2_pane_cp01_t

0x19e1,	// (0x00087b4d) cale_week_scroll_pane_g16_ParamLimits

0x19e1,	// (0x00087b4d) cale_week_scroll_pane_g16

0x1deb,	// (0x00087f57) vorec_slider_pane

0xe6c7,	// (0x00094833) vidtel_button_pane_t1_ParamLimits

0xa7d0,	// (0x0009093c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa7d0,	// (0x0009093c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa7e1,	// (0x0009094d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa7e1,	// (0x0009094d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00095fd1) main_fs_bigclock_clock_pane_g_ParamLimits

0xa7f4,	// (0x00090960) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa80a,	// (0x00090976) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00095fda) main_fs_bigclock_clock_pane_t_ParamLimits

0x6def,	// (0x0008cf5b) main_mup3_lyrics_pane_ParamLimits

0x6def,	// (0x0008cf5b) main_mup3_lyrics_pane

0xb24c,	// (0x000913b8) main_mup3_lyrics_pane_t1_ParamLimits

0xb24c,	// (0x000913b8) main_mup3_lyrics_pane_t1

0xc4fd,	// (0x00092669) aid_main_mp4_pane_t1_area

0xc507,	// (0x00092673) aid_main_mp4_pane_t2_area

0xc5b3,	// (0x0009271f) main_mp4_pane_g7_ParamLimits

0xc5b3,	// (0x0009271f) main_mp4_pane_g7

0xc5bf,	// (0x0009272b) main_mp4_pane_g8_ParamLimits

0xc5bf,	// (0x0009272b) main_mp4_pane_g8

0x811e,	// (0x0008e28a) aid_call6_pane_g1_size

0xb11b,	// (0x00091287) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb11b,	// (0x00091287) list_double_large_graphic_phob2_other_pane

0x34df,	// (0x0008964b) list_double_large_graphic_phob2_other_pane_g1

0xe757,	// (0x000948c3) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large

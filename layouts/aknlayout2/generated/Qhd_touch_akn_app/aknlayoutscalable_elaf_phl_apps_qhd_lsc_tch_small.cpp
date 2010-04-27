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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004cbd2 };

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
0x1077,	// (0x0004dc49) Screen

0x1083,	// (0x0004dc55) application_window

0x10cf,	// (0x0004dca1) area_bottom_pane_ParamLimits

0x10cf,	// (0x0004dca1) area_bottom_pane

0x1108,	// (0x0004dcda) area_top_pane_ParamLimits

0x1108,	// (0x0004dcda) area_top_pane

0x9772,	// (0x00056344) call_video_uplink_pane_ParamLimits

0x9772,	// (0x00056344) call_video_uplink_pane

0x1196,	// (0x0004dd68) main_pane_ParamLimits

0x1196,	// (0x0004dd68) main_pane

0xc876,	// (0x00059448) context_pane

0x4550,	// (0x00051122) navi_pane

0x4582,	// (0x00051154) popup_cale_events_window_ParamLimits

0x4582,	// (0x00051154) popup_cale_events_window

0xc889,	// (0x0005945b) popup_mup_playback_window

0x459a,	// (0x0005116c) signal_pane

0xa823,	// (0x000573f5) main_browser_pane

0xa9e8,	// (0x000575ba) main_burst_pane

0x42b0,	// (0x00050e82) main_calc_pane

0xc85c,	// (0x0005942e) main_cale_day_pane

0x17de,	// (0x0004e3b0) main_cale_month_pane

0xc85c,	// (0x0005942e) main_cale_week_pane

0xa9e8,	// (0x000575ba) main_call_pane

0xa503,	// (0x000570d5) main_call_poc_pane

0xa9e8,	// (0x000575ba) main_camera_pane

0xa9e8,	// (0x000575ba) main_chi_dic_pane

0xb1e7,	// (0x00057db9) main_clock_pane

0xa503,	// (0x000570d5) main_fmradio_pane

0xa9e8,	// (0x000575ba) main_graph_messa_pane

0xa503,	// (0x000570d5) main_help_pane

0xa823,	// (0x000573f5) main_im_pane

0xa75e,	// (0x00057330) main_image_pane_ParamLimits

0xa75e,	// (0x00057330) main_image_pane

0xa503,	// (0x000570d5) main_location2_pane

0xa9e8,	// (0x000575ba) main_location_pane

0xa75e,	// (0x00057330) main_messa_pane

0xa503,	// (0x000570d5) main_mp2_pane

0xa9e8,	// (0x000575ba) main_mp_pane

0xa503,	// (0x000570d5) main_msg_pane

0xa503,	// (0x000570d5) main_mup_eq_pane

0xa503,	// (0x000570d5) main_mup_pane

0xa823,	// (0x000573f5) main_notes_pane

0xa503,	// (0x000570d5) main_pec_pane

0xa503,	// (0x000570d5) main_phob_pane

0xa503,	// (0x000570d5) main_pinb_pane

0xa503,	// (0x000570d5) main_postcard_pane

0xa503,	// (0x000570d5) main_qdial_pane

0xa9e8,	// (0x000575ba) main_skin_pane

0xa503,	// (0x000570d5) main_smil2_pane

0xa9e8,	// (0x000575ba) main_smil_pane

0xa9e8,	// (0x000575ba) main_video_pane

0xa9e8,	// (0x000575ba) main_video_tele_pane

0xa75e,	// (0x00057330) main_viewer_pane_ParamLimits

0xa75e,	// (0x00057330) main_viewer_pane

0xa9e8,	// (0x000575ba) main_vorec_pane

0x4304,	// (0x00050ed6) popup_blid_sat_info_window_ParamLimits

0x4304,	// (0x00050ed6) popup_blid_sat_info_window

0x435c,	// (0x00050f2e) popup_dyc_status_message_window_ParamLimits

0x435c,	// (0x00050f2e) popup_dyc_status_message_window

0x4376,	// (0x00050f48) popup_grid_large_graphic_window_ParamLimits

0x4376,	// (0x00050f48) popup_grid_large_graphic_window

0x4432,	// (0x00051004) popup_loc_request_window_ParamLimits

0x4432,	// (0x00051004) popup_loc_request_window

0x4528,	// (0x000510fa) popup_wml_address_window_ParamLimits

0x4528,	// (0x000510fa) popup_wml_address_window

0x40ea,	// (0x00050cbc) call_muted_g1

0x3d9f,	// (0x00050971) popup_call_audio_conf_window_ParamLimits

0x3d9f,	// (0x00050971) popup_call_audio_conf_window

0x40fe,	// (0x00050cd0) popup_call_audio_first_window_ParamLimits

0x40fe,	// (0x00050cd0) popup_call_audio_first_window

0x4174,	// (0x00050d46) popup_call_audio_in_window_ParamLimits

0x4174,	// (0x00050d46) popup_call_audio_in_window

0x41b0,	// (0x00050d82) popup_call_audio_out_window_ParamLimits

0x41b0,	// (0x00050d82) popup_call_audio_out_window

0x41ea,	// (0x00050dbc) popup_call_audio_second_window_ParamLimits

0x41ea,	// (0x00050dbc) popup_call_audio_second_window

0x4240,	// (0x00050e12) popup_call_audio_wait_window_ParamLimits

0x4240,	// (0x00050e12) popup_call_audio_wait_window

0x4275,	// (0x00050e47) popup_number_entry_window_ParamLimits

0x4275,	// (0x00050e47) popup_number_entry_window

0x9790,	// (0x00056362) bg_popup_call_pane_cp05_ParamLimits

0x9790,	// (0x00056362) bg_popup_call_pane_cp05

0x97b0,	// (0x00056382) popup_number_entry_window_t1

0x97c3,	// (0x00056395) popup_number_entry_window_t2

0x97d5,	// (0x000563a7) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005bc9c) popup_number_entry_window_t

0x97e7,	// (0x000563b9) text_title_cp2

0x97fa,	// (0x000563cc) bg_popup_call_pane_cp_ParamLimits

0x97fa,	// (0x000563cc) bg_popup_call_pane_cp

0x9808,	// (0x000563da) call_thumbnail_pane

0x9810,	// (0x000563e2) popup_call_audio_in_window_g1_ParamLimits

0x9810,	// (0x000563e2) popup_call_audio_in_window_g1

0x981c,	// (0x000563ee) popup_call_audio_in_window_g2_ParamLimits

0x981c,	// (0x000563ee) popup_call_audio_in_window_g2

0x9828,	// (0x000563fa) popup_call_audio_in_window_g3_ParamLimits

0x9828,	// (0x000563fa) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005bca5) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005bca5) popup_call_audio_in_window_g

0x9834,	// (0x00056406) popup_call_audio_in_window_t1_ParamLimits

0x9834,	// (0x00056406) popup_call_audio_in_window_t1

0x9850,	// (0x00056422) popup_call_audio_in_window_t2_ParamLimits

0x9850,	// (0x00056422) popup_call_audio_in_window_t2

0x986c,	// (0x0005643e) popup_call_audio_in_window_t3_ParamLimits

0x986c,	// (0x0005643e) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005bcac) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005bcac) popup_call_audio_in_window_t

0x97fa,	// (0x000563cc) bg_popup_call_pane_cp01_ParamLimits

0x97fa,	// (0x000563cc) bg_popup_call_pane_cp01

0x9808,	// (0x000563da) call_thumbnail_pane_cp02

0x987f,	// (0x00056451) call_type_pane_cp022

0x9887,	// (0x00056459) popup_call_audio_out_window_g1_ParamLimits

0x9887,	// (0x00056459) popup_call_audio_out_window_g1

0x9899,	// (0x0005646b) popup_call_audio_out_window_g2_ParamLimits

0x9899,	// (0x0005646b) popup_call_audio_out_window_g2

0x98a5,	// (0x00056477) popup_call_audio_out_window_g3_ParamLimits

0x98a5,	// (0x00056477) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005bcb3) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005bcb3) popup_call_audio_out_window_g

0x98b7,	// (0x00056489) popup_call_audio_out_window_t1_ParamLimits

0x98b7,	// (0x00056489) popup_call_audio_out_window_t1

0x98cf,	// (0x000564a1) popup_call_audio_out_window_t2_ParamLimits

0x98cf,	// (0x000564a1) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005bcba) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005bcba) popup_call_audio_out_window_t

0x98e4,	// (0x000564b6) bg_popup_call_pane_ParamLimits

0x98e4,	// (0x000564b6) bg_popup_call_pane

0x1352,	// (0x0004df24) call_thumbnail_pane_cp_ParamLimits

0x1352,	// (0x0004df24) call_thumbnail_pane_cp

0x9968,	// (0x0005653a) call_type_pane_cp01_ParamLimits

0x9968,	// (0x0005653a) call_type_pane_cp01

0x99ac,	// (0x0005657e) popup_call_audio_first_window_g1_ParamLimits

0x99ac,	// (0x0005657e) popup_call_audio_first_window_g1

0x99f8,	// (0x000565ca) popup_call_audio_first_window_g2_ParamLimits

0x99f8,	// (0x000565ca) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005bcbf) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005bcbf) popup_call_audio_first_window_g

0x9a3c,	// (0x0005660e) popup_call_audio_first_window_t1_ParamLimits

0x9a3c,	// (0x0005660e) popup_call_audio_first_window_t1

0xa448,	// (0x0005701a) popup_call_audio_first_window_t4_ParamLimits

0xa448,	// (0x0005701a) popup_call_audio_first_window_t4

0xa4d4,	// (0x000570a6) popup_call_audio_first_window_t5_ParamLimits

0xa4d4,	// (0x000570a6) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005bcc4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005bcc4) popup_call_audio_first_window_t

0xa503,	// (0x000570d5) bg_popup_call_pane_cp02

0xa50d,	// (0x000570df) call_type_pane_cp023

0xa515,	// (0x000570e7) popup_call_audio_wait_window_g1

0xa51d,	// (0x000570ef) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005bccb) popup_call_audio_wait_window_g

0xa525,	// (0x000570f7) popup_call_audio_wait_window_t3

0xa533,	// (0x00057105) bg_popup_call_pane_cp03_ParamLimits

0xa533,	// (0x00057105) bg_popup_call_pane_cp03

0xa593,	// (0x00057165) call_thumbnail_pane_cp011_ParamLimits

0xa593,	// (0x00057165) call_thumbnail_pane_cp011

0xa59f,	// (0x00057171) call_type_pane_cp034_ParamLimits

0xa59f,	// (0x00057171) call_type_pane_cp034

0xa5db,	// (0x000571ad) popup_call_audio_second_window_g1_ParamLimits

0xa5db,	// (0x000571ad) popup_call_audio_second_window_g1

0xa617,	// (0x000571e9) popup_call_audio_second_window_g2_ParamLimits

0xa617,	// (0x000571e9) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005bcd0) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005bcd0) popup_call_audio_second_window_g

0xa653,	// (0x00057225) popup_call_audio_second_window_t1_ParamLimits

0xa653,	// (0x00057225) popup_call_audio_second_window_t1

0xa6d4,	// (0x000572a6) popup_call_audio_second_window_t2_ParamLimits

0xa6d4,	// (0x000572a6) popup_call_audio_second_window_t2

0xa70a,	// (0x000572dc) popup_call_audio_second_window_t3_ParamLimits

0xa70a,	// (0x000572dc) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005bcd5) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005bcd5) popup_call_audio_second_window_t

0xa503,	// (0x000570d5) bg_popup_call_pane_cp04

0xa740,	// (0x00057312) list_conf_pane

0xa748,	// (0x0005731a) popup_call_audio_conf_window_t1

0xa756,	// (0x00057328) call_thumbnail_pane_g1

0xa75e,	// (0x00057330) bg_pinb_pane_ParamLimits

0xa75e,	// (0x00057330) bg_pinb_pane

0xa76c,	// (0x0005733e) find_pinb_pane

0xa775,	// (0x00057347) listscroll_pinb_pane_ParamLimits

0xa775,	// (0x00057347) listscroll_pinb_pane

0xa784,	// (0x00057356) pinb_bg_pane_g1

0x1376,	// (0x0004df48) pinb_bg_pane_g2

0x1382,	// (0x0004df54) pinb_bg_pane_g3

0x138e,	// (0x0004df60) pinb_bg_pane_g4

0x139a,	// (0x0004df6c) pinb_bg_pane_g5

0x13a6,	// (0x0004df78) pinb_bg_pane_g6

0x13b1,	// (0x0004df83) pinb_bg_pane_g7

0x13bc,	// (0x0004df8e) pinb_bg_pane_g8

0x13c7,	// (0x0004df99) pinb_bg_pane_g9

0x13d1,	// (0x0004dfa3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005bcdc) pinb_bg_pane_g

0x13ee,	// (0x0004dfc0) grid_pinb_pane

0x13f7,	// (0x0004dfc9) list_pinb_pane

0x1400,	// (0x0004dfd2) scroll_pane_cp01_ParamLimits

0x1400,	// (0x0004dfd2) scroll_pane_cp01

0xa78e,	// (0x00057360) find_pinb_pane_g1_ParamLimits

0xa78e,	// (0x00057360) find_pinb_pane_g1

0xa7a6,	// (0x00057378) find_pinb_pane_t1

0xa7b8,	// (0x0005738a) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005bcf6) find_pinb_pane_t

0xa7cd,	// (0x0005739f) input_focus_pane_cp01_ParamLimits

0xa7cd,	// (0x0005739f) input_focus_pane_cp01

0x1412,	// (0x0004dfe4) cell_pinb_pane_ParamLimits

0x1412,	// (0x0004dfe4) cell_pinb_pane

0x143b,	// (0x0004e00d) cell_pinb_pane_g1_ParamLimits

0x143b,	// (0x0004e00d) cell_pinb_pane_g1

0x144b,	// (0x0004e01d) cell_pinb_pane_g2_ParamLimits

0x144b,	// (0x0004e01d) cell_pinb_pane_g2

0xa7d9,	// (0x000573ab) cell_pinb_pane_g3_ParamLimits

0xa7d9,	// (0x000573ab) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005bcfb) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005bcfb) cell_pinb_pane_g

0xa503,	// (0x000570d5) grid_highlight_pane_cp01

0x1457,	// (0x0004e029) list_pinb_item_pane_ParamLimits

0x1457,	// (0x0004e029) list_pinb_item_pane

0xa503,	// (0x000570d5) list_highlight_pane_cp02

0x1469,	// (0x0004e03b) list_pinb_item_pane_g1_ParamLimits

0x1469,	// (0x0004e03b) list_pinb_item_pane_g1

0x1476,	// (0x0004e048) list_pinb_item_pane_g2_ParamLimits

0x1476,	// (0x0004e048) list_pinb_item_pane_g2

0x1482,	// (0x0004e054) list_pinb_item_pane_g3_ParamLimits

0x1482,	// (0x0004e054) list_pinb_item_pane_g3

0x1493,	// (0x0004e065) list_pinb_item_pane_g4_ParamLimits

0x1493,	// (0x0004e065) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005bd02) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005bd02) list_pinb_item_pane_g

0x149f,	// (0x0004e071) list_pinb_item_pane_t1_ParamLimits

0x149f,	// (0x0004e071) list_pinb_item_pane_t1

0x14d4,	// (0x0004e0a6) calc_display_pane

0x14fc,	// (0x0004e0ce) calc_paper_pane

0x151f,	// (0x0004e0f1) grid_calc_pane

0xa503,	// (0x000570d5) bg_list_pane_cp01

0x154d,	// (0x0004e11f) clock_g1

0x1555,	// (0x0004e127) clock_g2

0x0001,

0xf139,	// (0x0005bd0b) clock_g

0x155d,	// (0x0004e12f) clock_t1_ParamLimits

0x155d,	// (0x0004e12f) clock_t1

0x1572,	// (0x0004e144) clock_t2_ParamLimits

0x1572,	// (0x0004e144) clock_t2

0x1584,	// (0x0004e156) clock_t3_ParamLimits

0x1584,	// (0x0004e156) clock_t3

0x1596,	// (0x0004e168) clock_t4_ParamLimits

0x1596,	// (0x0004e168) clock_t4

0x15a8,	// (0x0004e17a) clock_t5_ParamLimits

0x15a8,	// (0x0004e17a) clock_t5

0x15bd,	// (0x0004e18f) clock_t6_ParamLimits

0x15bd,	// (0x0004e18f) clock_t6

0x15cf,	// (0x0004e1a1) clock_t7_ParamLimits

0x15cf,	// (0x0004e1a1) clock_t7

0x15e1,	// (0x0004e1b3) clock_t8_ParamLimits

0x15e1,	// (0x0004e1b3) clock_t8

0x15f5,	// (0x0004e1c7) clock_t9_ParamLimits

0x15f5,	// (0x0004e1c7) clock_t9

0x0008,

0xf13e,	// (0x0005bd10) clock_t_ParamLimits

0xf13e,	// (0x0005bd10) clock_t

0xa7e5,	// (0x000573b7) popup_clock_analogue_window_cp02

0xa7e5,	// (0x000573b7) popup_clock_digital_window_cp01

0xa7ed,	// (0x000573bf) listscroll_help_pane

0xa503,	// (0x000570d5) phob_pre_status_pane

0xa7f7,	// (0x000573c9) grid_qdial_pane

0xa75e,	// (0x00057330) listscroll_mce_pane

0xa75e,	// (0x00057330) bg_notes_pane

0xa801,	// (0x000573d3) list_notes_pane

0x1609,	// (0x0004e1db) scroll_pane_cp06

0xa80f,	// (0x000573e1) bg_calc_paper_pane

0x9af0,	// (0x000566c2) list_calc_pane

0xa823,	// (0x000573f5) bg_calc_display_pane

0x161d,	// (0x0004e1ef) calc_display_pane_t1

0x162f,	// (0x0004e201) calc_display_pane_t2

0x9b0a,	// (0x000566dc) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005bd23) calc_display_pane_t

0x1641,	// (0x0004e213) cell_calc_pane_ParamLimits

0x1641,	// (0x0004e213) cell_calc_pane

0xa82f,	// (0x00057401) bg_calc_paper_pane_g1

0xa83b,	// (0x0005740d) bg_calc_paper_pane_g2

0xa847,	// (0x00057419) bg_calc_paper_pane_g3

0xa853,	// (0x00057425) bg_calc_paper_pane_g4

0xa85f,	// (0x00057431) bg_calc_paper_pane_g5

0x1676,	// (0x0004e248) bg_calc_paper_pane_g6

0x1685,	// (0x0004e257) bg_calc_paper_pane_g7

0x1694,	// (0x0004e266) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005bd2a) bg_calc_paper_pane_g

0x16a7,	// (0x0004e279) calc_bg_paper_pane_g9

0x16ba,	// (0x0004e28c) list_calc_item_pane_ParamLimits

0x16ba,	// (0x0004e28c) list_calc_item_pane

0xa86b,	// (0x0005743d) list_calc_item_pane_g1

0x9b1c,	// (0x000566ee) list_calc_item_pane_t1_ParamLimits

0x9b1c,	// (0x000566ee) list_calc_item_pane_t1

0x16cf,	// (0x0004e2a1) list_calc_item_pane_t2_ParamLimits

0x16cf,	// (0x0004e2a1) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005bd3b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005bd3b) list_calc_item_pane_t

0xa878,	// (0x0005744a) cell_calc_pane_g1

0xa882,	// (0x00057454) grid_highlight_pane_cp02

0x1701,	// (0x0004e2d3) bg_calc_display_pane_g1

0x170a,	// (0x0004e2dc) bg_calc_display_pane_g2

0x1714,	// (0x0004e2e6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005bd45) bg_calc_display_pane_g

0x171d,	// (0x0004e2ef) cell_qdial_pane_ParamLimits

0x171d,	// (0x0004e2ef) cell_qdial_pane

0x1731,	// (0x0004e303) cell_qdial_pane_g1_ParamLimits

0x1731,	// (0x0004e303) cell_qdial_pane_g1

0x1747,	// (0x0004e319) cell_qdial_pane_g2_ParamLimits

0x1747,	// (0x0004e319) cell_qdial_pane_g2

0xa8a4,	// (0x00057476) cell_qdial_pane_g3_ParamLimits

0xa8a4,	// (0x00057476) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005bd4c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005bd4c) cell_qdial_pane_g

0x176e,	// (0x0004e340) cell_qdial_pane_t1_ParamLimits

0x176e,	// (0x0004e340) cell_qdial_pane_t1

0x1786,	// (0x0004e358) cell_qdial_pane_t2_ParamLimits

0x1786,	// (0x0004e358) cell_qdial_pane_t2

0x1799,	// (0x0004e36b) cell_qdial_pane_t3_ParamLimits

0x1799,	// (0x0004e36b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005bd55) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005bd55) cell_qdial_pane_t

0xa503,	// (0x000570d5) grid_highlight_pane_cp04

0xa8b0,	// (0x00057482) thumbnail_qdial_pane_ParamLimits

0xa8b0,	// (0x00057482) thumbnail_qdial_pane

0xa90c,	// (0x000574de) list_help_pane

0xa915,	// (0x000574e7) scroll_pane_cp02

0x17ac,	// (0x0004e37e) help_list_pane_t1_ParamLimits

0x17ac,	// (0x0004e37e) help_list_pane_t1

0x9b2e,	// (0x00056700) bg_notes_pane_g2

0x9b36,	// (0x00056708) bg_notes_pane_g3

0x9b3e,	// (0x00056710) notes_bg_pane_g1

0x9b46,	// (0x00056718) notes_bg_pane_g4

0x9b4e,	// (0x00056720) notes_bg_pane_g5

0x9b56,	// (0x00056728) notes_bg_pane_g6

0x9b5e,	// (0x00056730) notes_bg_pane_g7

0x9b66,	// (0x00056738) notes_bg_pane_g8

0x9b6e,	// (0x00056740) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005bd73) notes_bg_pane_g

0x17c9,	// (0x0004e39b) list_notes_text_pane_ParamLimits

0x17c9,	// (0x0004e39b) list_notes_text_pane

0xa91e,	// (0x000574f0) list_notes_text_pane_g1

0x0192,	// (0x0004cd64) list_notes_text_pane_t1

0x17de,	// (0x0004e3b0) listscroll_cale_week_pane

0x180a,	// (0x0004e3dc) bg_cale_heading_pane

0xa941,	// (0x00057513) bg_cale_pane_cp01

0x1822,	// (0x0004e3f4) cale_week_corner_pane

0x1841,	// (0x0004e413) cale_week_day_heading_pane

0x185e,	// (0x0004e430) cale_week_scroll_pane_g1

0x1871,	// (0x0004e443) cale_week_scroll_pane_g2

0x1889,	// (0x0004e45b) cale_week_scroll_pane_g3

0x18a1,	// (0x0004e473) cale_week_scroll_pane_g4

0x18b9,	// (0x0004e48b) cale_week_scroll_pane_g5

0x18d9,	// (0x0004e4ab) cale_week_scroll_pane_g6

0x18f9,	// (0x0004e4cb) cale_week_scroll_pane_g7

0x1919,	// (0x0004e4eb) cale_week_scroll_pane_g8

0x193d,	// (0x0004e50f) cale_week_scroll_pane_g9

0x1955,	// (0x0004e527) cale_week_scroll_pane_g10

0x196d,	// (0x0004e53f) cale_week_scroll_pane_g11

0x1985,	// (0x0004e557) cale_week_scroll_pane_g12

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g13

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g14

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005bd82) cale_week_scroll_pane_g

0x19d9,	// (0x0004e5ab) cale_week_time_pane

0x19fd,	// (0x0004e5cf) grid_cale_week_pane

0xa970,	// (0x00057542) scroll_pane_cp08

0x1a23,	// (0x0004e5f5) cell_cale_week_pane_ParamLimits

0x1a23,	// (0x0004e5f5) cell_cale_week_pane

0x1ab1,	// (0x0004e683) cale_week_day_heading_pane_t1

0x1af6,	// (0x0004e6c8) cale_week_day_heading_pane_t2

0x1b40,	// (0x0004e712) cale_week_day_heading_pane_t3

0x1b8a,	// (0x0004e75c) cale_week_day_heading_pane_t4

0x1bd4,	// (0x0004e7a6) cale_week_day_heading_pane_t5

0x1c26,	// (0x0004e7f8) cale_week_day_heading_pane_t6

0x1c78,	// (0x0004e84a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005bda3) cale_week_day_heading_pane_t

0xa98d,	// (0x0005755f) bg_cale_side_pane

0x1cbd,	// (0x0004e88f) cale_week_time_pane_t1

0x1cd7,	// (0x0004e8a9) cale_week_time_pane_t2

0x1cf1,	// (0x0004e8c3) cale_week_time_pane_t3

0x1d0b,	// (0x0004e8dd) cale_week_time_pane_t4

0x1d25,	// (0x0004e8f7) cale_week_time_pane_t5

0x1d3f,	// (0x0004e911) cale_week_time_pane_t6

0x1d59,	// (0x0004e92b) cale_week_time_pane_t7

0x1d73,	// (0x0004e945) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005bdb2) cale_week_time_pane_t

0x1d93,	// (0x0004e965) cell_cale_week_pane_g2

0x1db2,	// (0x0004e984) cell_cale_week_pane_g3_ParamLimits

0x1db2,	// (0x0004e984) cell_cale_week_pane_g3

0xa99b,	// (0x0005756d) grid_highlight_pane_cp07

0xa9a3,	// (0x00057575) listscroll_gms_pane

0xa9ad,	// (0x0005757f) grid_gms_pane

0xa9b6,	// (0x00057588) listscroll_gms_pane_g1

0xa9be,	// (0x00057590) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005bdc3) listscroll_gms_pane_g

0x1dca,	// (0x0004e99c) scroll_pane_cp010

0x1dd5,	// (0x0004e9a7) cell_gms_pane_ParamLimits

0x1dd5,	// (0x0004e9a7) cell_gms_pane

0x1de8,	// (0x0004e9ba) cell_gms_pane_g1

0xa9c6,	// (0x00057598) cell_gms_pane_g2

0xa9ce,	// (0x000575a0) cell_gms_pane_g3

0xa9d7,	// (0x000575a9) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005bdc8) cell_gms_pane_g

0xa9e0,	// (0x000575b2) grid_highlight_pane_cp09

0x4094,	// (0x00050c66) phob_pre_status_pane_g1

0x409c,	// (0x00050c6e) phob_pre_status_pane_g2

0x40a4,	// (0x00050c76) phob_pre_status_pane_g3

0x40ac,	// (0x00050c7e) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005c1b3) phob_pre_status_pane_g

0x40bc,	// (0x00050c8e) phob_pre_status_pane_t1

0x40ca,	// (0x00050c9c) phob_pre_status_pane_t2

0x40da,	// (0x00050cac) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005c1be) phob_pre_status_pane_t

0xa9e8,	// (0x000575ba) bg_list_pane_cp05

0x1df8,	// (0x0004e9ca) grid_vorec_pane

0x1e00,	// (0x0004e9d2) vorec_t1

0x1e0e,	// (0x0004e9e0) vorec_t2

0x1e1c,	// (0x0004e9ee) vorec_t3

0x1e2a,	// (0x0004e9fc) vorec_t4

0x9702,	// (0x000562d4) vorec_t5

0x9710,	// (0x000562e2) vorec_t6

0x0004,

0xf1ff,	// (0x0005bdd1) vorec_t

0x971e,	// (0x000562f0) wait_bar_pane_cp01

0x1e46,	// (0x0004ea18) cell_vorec_pane_ParamLimits

0x1e46,	// (0x0004ea18) cell_vorec_pane

0x9b76,	// (0x00056748) cell_vorec_pane_g1

0xa503,	// (0x000570d5) grid_highlight_pane_cp05

0x1e6e,	// (0x0004ea40) cams_zoom_pane

0x1e7d,	// (0x0004ea4f) image_vga_pane

0x1e97,	// (0x0004ea69) main_camera_pane_g1

0x1ea9,	// (0x0004ea7b) main_camera_pane_g2

0x1eb9,	// (0x0004ea8b) main_camera_pane_g3

0x1ec9,	// (0x0004ea9b) main_camera_pane_g4

0x1ed9,	// (0x0004eaab) main_camera_pane_g5

0x1ee9,	// (0x0004eabb) main_camera_pane_g6

0x1efb,	// (0x0004eacd) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005bddc) main_camera_pane_g

0x1f0b,	// (0x0004eadd) main_camera_pane_t1

0x1f21,	// (0x0004eaf3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005bded) main_camera_pane_t

0x1f5b,	// (0x0004eb2d) cams_zoom_pane_cp_ParamLimits

0x1f5b,	// (0x0004eb2d) cams_zoom_pane_cp

0x1f83,	// (0x0004eb55) image_cif_pane_ParamLimits

0x1f83,	// (0x0004eb55) image_cif_pane

0x1fb9,	// (0x0004eb8b) image_subqcif_pane

0x1fc1,	// (0x0004eb93) main_video_pane_g1_ParamLimits

0x1fc1,	// (0x0004eb93) main_video_pane_g1

0x1fe5,	// (0x0004ebb7) main_video_pane_g2_ParamLimits

0x1fe5,	// (0x0004ebb7) main_video_pane_g2

0x2019,	// (0x0004ebeb) main_video_pane_g3_ParamLimits

0x2019,	// (0x0004ebeb) main_video_pane_g3

0x2047,	// (0x0004ec19) main_video_pane_g4_ParamLimits

0x2047,	// (0x0004ec19) main_video_pane_g4

0x2075,	// (0x0004ec47) main_video_pane_g5_ParamLimits

0x2075,	// (0x0004ec47) main_video_pane_g5

0xa9fc,	// (0x000575ce) main_video_pane_g6_ParamLimits

0xa9fc,	// (0x000575ce) main_video_pane_g6

0x0006,

0xf220,	// (0x0005bdf2) main_video_pane_g_ParamLimits

0xf220,	// (0x0005bdf2) main_video_pane_g

0x209e,	// (0x0004ec70) main_video_pane_t1_ParamLimits

0x209e,	// (0x0004ec70) main_video_pane_t1

0xaa16,	// (0x000575e8) cams_zoom_pane_g1

0xaa1f,	// (0x000575f1) cams_zoom_pane_g2

0xaa28,	// (0x000575fa) cams_zoom_pane_g3

0xaa31,	// (0x00057603) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005be01) cams_zoom_pane_g

0x20fb,	// (0x0004eccd) grid_cams_pane

0x2115,	// (0x0004ece7) linegrid_cams_pane

0x2129,	// (0x0004ecfb) cell_cams_pane_ParamLimits

0x2129,	// (0x0004ecfb) cell_cams_pane

0xaa3a,	// (0x0005760c) cams_burst_image_pane

0xaa42,	// (0x00057614) cell_cams_pane_g1

0xa503,	// (0x000570d5) grid_highlight_pane_cp03

0xa878,	// (0x0005744a) mp_bg_pane_g1

0xa503,	// (0x000570d5) bg_list_pane_cp03

0xc781,	// (0x00059353) bg_mp_pane

0xc789,	// (0x0005935b) grid_mp_pane

0xc791,	// (0x00059363) media_player_g1

0xc799,	// (0x0005936b) media_player_t1

0xc7a7,	// (0x00059379) media_player_t2

0xc7b5,	// (0x00059387) media_player_t3

0xc7c3,	// (0x00059395) media_player_t4

0xc7d1,	// (0x000593a3) media_player_t5

0xc7df,	// (0x000593b1) media_player_t6

0xc7ed,	// (0x000593bf) media_player_t7

0x0006,

0xf5cb,	// (0x0005c19d) media_player_t

0xc7fb,	// (0x000593cd) wait_bar_pane_cp02

0xf5b0,	// (0x0005c182) main_usb_pane_t

0x408b,	// (0x00050c5d) cell_mp_pane

0xa878,	// (0x0005744a) cell_mp_pane_g1

0xa503,	// (0x000570d5) grid_highlight_pane_cp06

0xaa4a,	// (0x0005761c) grid_skin_colour_pane

0xaa52,	// (0x00057624) list_highlight_pane_cp03

0x2149,	// (0x0004ed1b) skin_g1

0xaa5a,	// (0x0005762c) skin_t1

0xaa69,	// (0x0005763b) skin_t2

0x0001,

0xf264,	// (0x0005be36) skin_t

0x2151,	// (0x0004ed23) cell_skin_colour_pane_ParamLimits

0x2151,	// (0x0004ed23) cell_skin_colour_pane

0xaa77,	// (0x00057649) cell_skin_colour_pane_g1

0x21ca,	// (0x0004ed9c) call_video_g1_ParamLimits

0x21ca,	// (0x0004ed9c) call_video_g1

0x21e6,	// (0x0004edb8) call_video_g2_ParamLimits

0x21e6,	// (0x0004edb8) call_video_g2

0x0001,

0xf269,	// (0x0005be3b) call_video_g_ParamLimits

0xf269,	// (0x0005be3b) call_video_g

0x2238,	// (0x0004ee0a) call_video_uplink_pane_cp1_ParamLimits

0x2238,	// (0x0004ee0a) call_video_uplink_pane_cp1

0xaa89,	// (0x0005765b) call_video_uplink_pane_cp2

0x22d7,	// (0x0004eea9) video_down_crop_pane_ParamLimits

0x22d7,	// (0x0004eea9) video_down_crop_pane

0x23ce,	// (0x0004efa0) video_down_pane_ParamLimits

0x23ce,	// (0x0004efa0) video_down_pane

0xaa91,	// (0x00057663) video_down_subqcif_pane_ParamLimits

0xaa91,	// (0x00057663) video_down_subqcif_pane

0xaaa9,	// (0x0005767b) video_down_subqcif_pane_cp_ParamLimits

0xaaa9,	// (0x0005767b) video_down_subqcif_pane_cp

0xaacf,	// (0x000576a1) im_reading_pane_ParamLimits

0xaacf,	// (0x000576a1) im_reading_pane

0x24dc,	// (0x0004f0ae) im_writing_pane_ParamLimits

0x24dc,	// (0x0004f0ae) im_writing_pane

0x24f2,	// (0x0004f0c4) im_reading_pane_t1

0xaae9,	// (0x000576bb) list_im_pane

0xaafa,	// (0x000576cc) scroll_pane_cp07

0x252b,	// (0x0004f0fd) im_writing_pane_t1_ParamLimits

0x252b,	// (0x0004f0fd) im_writing_pane_t1

0xab13,	// (0x000576e5) im_writing_pane_t2_ParamLimits

0xab13,	// (0x000576e5) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005be45) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005be45) im_writing_pane_t

0xa503,	// (0x000570d5) input_focus_pane_cp04

0xa503,	// (0x000570d5) input_focus_pane_cp05

0x2540,	// (0x0004f112) list_im_single_pane_ParamLimits

0x2540,	// (0x0004f112) list_im_single_pane

0x2554,	// (0x0004f126) list_single_im_pane_t1

0x404b,	// (0x00050c1d) blid_accuracy_pane

0x4053,	// (0x00050c25) blid_compass_pane

0x405d,	// (0x00050c2f) main_location_t1

0x406d,	// (0x00050c3f) main_location_t2

0x407d,	// (0x00050c4f) main_location_t3

0x0002,

0xf5da,	// (0x0005c1ac) main_location_t

0xa503,	// (0x000570d5) aid_levels_location

0xa878,	// (0x0005744a) blid_accuracy_pane_g1

0xa878,	// (0x0005744a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005bea7) blid_accuracy_pane_g

0xab5b,	// (0x0005772d) wml_content_pane

0xab99,	// (0x0005776b) wml_button_pane_ParamLimits

0xab99,	// (0x0005776b) wml_button_pane

0x2563,	// (0x0004f135) wml_list_single_large_pane_ParamLimits

0x2563,	// (0x0004f135) wml_list_single_large_pane

0x2578,	// (0x0004f14a) wml_list_single_medium_pane_ParamLimits

0x2578,	// (0x0004f14a) wml_list_single_medium_pane

0x258e,	// (0x0004f160) wml_list_single_small_pane_ParamLimits

0x258e,	// (0x0004f160) wml_list_single_small_pane

0xabad,	// (0x0005777f) wml_selection_box_pane_ParamLimits

0xabad,	// (0x0005777f) wml_selection_box_pane

0xabc0,	// (0x00057792) wml_list_single_pane_t1

0xabcf,	// (0x000577a1) wml_list_single_medium_pane_t1

0xabde,	// (0x000577b0) wml_list_single_large_pane_t1

0xabed,	// (0x000577bf) input_focus_pane_cp02_ParamLimits

0xabed,	// (0x000577bf) input_focus_pane_cp02

0xac00,	// (0x000577d2) wml_selection_box_pane_g1

0xac09,	// (0x000577db) wml_selection_box_pane_t1_ParamLimits

0xac09,	// (0x000577db) wml_selection_box_pane_t1

0xa75e,	// (0x00057330) bg_wml_button_pane_ParamLimits

0xa75e,	// (0x00057330) bg_wml_button_pane

0xac21,	// (0x000577f3) wml_button_pane_g1

0xac29,	// (0x000577fb) wml_button_pane_t1

0xac21,	// (0x000577f3) wml_button_bg_pane_g1

0xac39,	// (0x0005780b) wml_button_bg_pane_g2

0xac41,	// (0x00057813) wml_button_bg_pane_g3

0xac49,	// (0x0005781b) wml_button_bg_pane_g4

0xac51,	// (0x00057823) wml_button_bg_pane_g5

0xac59,	// (0x0005782b) wml_button_bg_pane_g6

0xac61,	// (0x00057833) wml_button_bg_pane_g7

0xac69,	// (0x0005783b) wml_button_bg_pane_g8

0xac71,	// (0x00057843) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005be4a) wml_button_bg_pane_g

0x25a6,	// (0x0004f178) bg_list_pane_cp02

0xac79,	// (0x0005784b) mce_header_pane_ParamLimits

0xac79,	// (0x0005784b) mce_header_pane

0xac8f,	// (0x00057861) mce_icon_pane

0xac8f,	// (0x00057861) mce_image_pane

0xac98,	// (0x0005786a) mce_text_pane_ParamLimits

0xac98,	// (0x0005786a) mce_text_pane

0x25ae,	// (0x0004f180) scroll_pane_cp03

0xab91,	// (0x00057763) scroll_pane_cp04

0xacab,	// (0x0005787d) scroll_pane_cp05_ParamLimits

0xacab,	// (0x0005787d) scroll_pane_cp05

0x25b8,	// (0x0004f18a) mce_header_field_pane_ParamLimits

0x25b8,	// (0x0004f18a) mce_header_field_pane

0x25cf,	// (0x0004f1a1) mce_header_field_pane_2_ParamLimits

0x25cf,	// (0x0004f1a1) mce_header_field_pane_2

0x25e5,	// (0x0004f1b7) mce_header_field_pane_3

0x25ed,	// (0x0004f1bf) list_single_mce_message_pane_ParamLimits

0x25ed,	// (0x0004f1bf) list_single_mce_message_pane

0x2602,	// (0x0004f1d4) list_single_mce_smart_pane_ParamLimits

0x2602,	// (0x0004f1d4) list_single_mce_smart_pane

0xacb7,	// (0x00057889) input_focus_pane_cp03

0xacc0,	// (0x00057892) list_header_data_pane

0x2622,	// (0x0004f1f4) mce_header_field_pane_t1

0x2632,	// (0x0004f204) list_single_mce_header_pane_ParamLimits

0x2632,	// (0x0004f204) list_single_mce_header_pane

0xacc8,	// (0x0005789a) list_single_mce_header_pane_t1

0xacd7,	// (0x000578a9) list_single_mce_message_pane_g1

0xacdf,	// (0x000578b1) list_single_mce_message_pane_t1

0x266c,	// (0x0004f23e) bg_cale_heading_pane_cp01_ParamLimits

0x266c,	// (0x0004f23e) bg_cale_heading_pane_cp01

0xaced,	// (0x000578bf) bg_cale_pane_cp02_ParamLimits

0xaced,	// (0x000578bf) bg_cale_pane_cp02

0x269b,	// (0x0004f26d) cale_month_corner_pane

0x26ba,	// (0x0004f28c) cale_month_day_heading_pane_ParamLimits

0x26ba,	// (0x0004f28c) cale_month_day_heading_pane

0x2701,	// (0x0004f2d3) cale_month_pane_g1_ParamLimits

0x2701,	// (0x0004f2d3) cale_month_pane_g1

0x2725,	// (0x0004f2f7) cale_month_pane_g2_ParamLimits

0x2725,	// (0x0004f2f7) cale_month_pane_g2

0x2755,	// (0x0004f327) cale_month_pane_g3_ParamLimits

0x2755,	// (0x0004f327) cale_month_pane_g3

0x2791,	// (0x0004f363) cale_month_pane_g4_ParamLimits

0x2791,	// (0x0004f363) cale_month_pane_g4

0x27cd,	// (0x0004f39f) cale_month_pane_g5_ParamLimits

0x27cd,	// (0x0004f39f) cale_month_pane_g5

0x2815,	// (0x0004f3e7) cale_month_pane_g6_ParamLimits

0x2815,	// (0x0004f3e7) cale_month_pane_g6

0x2861,	// (0x0004f433) cale_month_pane_g7_ParamLimits

0x2861,	// (0x0004f433) cale_month_pane_g7

0x28b5,	// (0x0004f487) cale_month_pane_g8_ParamLimits

0x28b5,	// (0x0004f487) cale_month_pane_g8

0x2909,	// (0x0004f4db) cale_month_pane_g9_ParamLimits

0x2909,	// (0x0004f4db) cale_month_pane_g9

0x295b,	// (0x0004f52d) cale_month_pane_g10_ParamLimits

0x295b,	// (0x0004f52d) cale_month_pane_g10

0x29ad,	// (0x0004f57f) cale_month_pane_g11_ParamLimits

0x29ad,	// (0x0004f57f) cale_month_pane_g11

0x29ff,	// (0x0004f5d1) cale_month_pane_g12_ParamLimits

0x29ff,	// (0x0004f5d1) cale_month_pane_g12

0x2a51,	// (0x0004f623) cale_month_pane_g13_ParamLimits

0x2a51,	// (0x0004f623) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005be5d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005be5d) cale_month_pane_g

0x2aa3,	// (0x0004f675) cale_month_week_pane

0x2ac7,	// (0x0004f699) grid_cale_month_pane_ParamLimits

0x2ac7,	// (0x0004f699) grid_cale_month_pane

0x2b05,	// (0x0004f6d7) cale_month_day_heading_pane_t1

0x2b8b,	// (0x0004f75d) cale_month_day_heading_pane_t2

0x2c1c,	// (0x0004f7ee) cale_month_day_heading_pane_t3

0x2cad,	// (0x0004f87f) cale_month_day_heading_pane_t4

0x2d42,	// (0x0004f914) cale_month_day_heading_pane_t5

0x2de3,	// (0x0004f9b5) cale_month_day_heading_pane_t6

0x2e84,	// (0x0004fa56) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005be78) cale_month_day_heading_pane_t

0xa98d,	// (0x0005755f) bg_cale_side_pane_cp01

0x2f2d,	// (0x0004faff) cale_month_week_pane_t1

0x2f46,	// (0x0004fb18) cale_month_week_pane_t2

0x2f5f,	// (0x0004fb31) cale_month_week_pane_t3

0x2f78,	// (0x0004fb4a) cale_month_week_pane_t4

0x2f91,	// (0x0004fb63) cale_month_week_pane_t5

0x2faa,	// (0x0004fb7c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005be87) cale_month_week_pane_t

0x2fc3,	// (0x0004fb95) cell_cale_month_pane_ParamLimits

0x2fc3,	// (0x0004fb95) cell_cale_month_pane

0x9b80,	// (0x00056752) cell_cale_month_pane_g1

0x30ed,	// (0x0004fcbf) cell_cale_month_pane_t1_ParamLimits

0x30ed,	// (0x0004fcbf) cell_cale_month_pane_t1

0xa99b,	// (0x0005756d) grid_highlight_pane_cp08

0xa878,	// (0x0005744a) main_smil_g1

0x310d,	// (0x0004fcdf) smil_status_pane

0xad2c,	// (0x000578fe) smil_text_pane

0xc6a1,	// (0x00059273) bg_popup_call3_rect_pane_g8

0xc6a9,	// (0x0005927b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c140) bg_popup_call3_rect_pane_g

0xc8f0,	// (0x000594c2) smil_status_volume_pane_g1

0xad36,	// (0x00057908) smil_status_pane_t1

0x9cd6,	// (0x000568a8) volume_smil_pane

0xad4d,	// (0x0005791f) list_smil_text_pane

0x3120,	// (0x0004fcf2) scroll_pane_cp011

0x312b,	// (0x0004fcfd) smil_text_list_pane_t1_ParamLimits

0x312b,	// (0x0004fcfd) smil_text_list_pane_t1

0x9b8c,	// (0x0005675e) aid_volume_smil_ParamLimits

0x9b8c,	// (0x0005675e) aid_volume_smil

0xa878,	// (0x0005744a) smil_volume_pane_g1

0xa878,	// (0x0005744a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005bea7) smil_volume_pane_g

0x17de,	// (0x0004e3b0) listscroll_cale_day_pane

0xad57,	// (0x00057929) bg_cale_pane

0xad6f,	// (0x00057941) list_cale_pane

0xad92,	// (0x00057964) scroll_pane_cp09

0xada3,	// (0x00057975) cale_bg_pane_g1

0xadab,	// (0x0005797d) cale_bg_pane_g2

0xadb3,	// (0x00057985) cale_bg_pane_g3

0xadbb,	// (0x0005798d) cale_bg_pane_g4

0xadc3,	// (0x00057995) cale_bg_pane_g5

0xadcb,	// (0x0005799d) cale_bg_pane_g6

0xadd3,	// (0x000579a5) cale_bg_pane_g7

0xaddb,	// (0x000579ad) cale_bg_pane_g8

0xade3,	// (0x000579b5) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005beac) cale_bg_pane_g

0x316f,	// (0x0004fd41) list_cale_time_pane_ParamLimits

0x316f,	// (0x0004fd41) list_cale_time_pane

0xadeb,	// (0x000579bd) list_cale_time_pane_g1_ParamLimits

0xadeb,	// (0x000579bd) list_cale_time_pane_g1

0xadf7,	// (0x000579c9) list_cale_time_pane_g2_ParamLimits

0xadf7,	// (0x000579c9) list_cale_time_pane_g2

0x3184,	// (0x0004fd56) list_cale_time_pane_g3_ParamLimits

0x3184,	// (0x0004fd56) list_cale_time_pane_g3

0x3192,	// (0x0004fd64) list_cale_time_pane_g4_ParamLimits

0x3192,	// (0x0004fd64) list_cale_time_pane_g4

0x31a0,	// (0x0004fd72) list_cale_time_pane_g5_ParamLimits

0x31a0,	// (0x0004fd72) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005bebf) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005bebf) list_cale_time_pane_g

0xae11,	// (0x000579e3) list_cale_time_pane_t1_ParamLimits

0xae11,	// (0x000579e3) list_cale_time_pane_t1

0xae39,	// (0x00057a0b) list_cale_time_pane_t2_ParamLimits

0xae39,	// (0x00057a0b) list_cale_time_pane_t2

0x3426,	// (0x0004fff8) aid_blid_cardinal_pane

0x3464,	// (0x00050036) compass_pane_t4

0xae61,	// (0x00057a33) list_cale_time_pane_t4_ParamLimits

0xae61,	// (0x00057a33) list_cale_time_pane_t4

0x3472,	// (0x00050044) compass_pane_t5

0x3480,	// (0x00050052) compass_pane_t6

0x348e,	// (0x00050060) compass_pane_t7

0xb32c,	// (0x00057efe) navi_pane_cc_t1

0xb509,	// (0x000580db) aid_phob_thumbnail_center_pane

0x3a63,	// (0x00050635) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005becc) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005becc) list_cale_time_pane_t

0x97fa,	// (0x000563cc) bg_popup_window_pane_cp02_ParamLimits

0x97fa,	// (0x000563cc) bg_popup_window_pane_cp02

0xae89,	// (0x00057a5b) heading_pane_cp01_ParamLimits

0xae89,	// (0x00057a5b) heading_pane_cp01

0xae95,	// (0x00057a67) loc_req_pane_ParamLimits

0xae95,	// (0x00057a67) loc_req_pane

0xaea5,	// (0x00057a77) loc_type_pane_ParamLimits

0xaea5,	// (0x00057a77) loc_type_pane

0xaeb7,	// (0x00057a89) loc_type_pane_t1_ParamLimits

0xaeb7,	// (0x00057a89) loc_type_pane_t1

0xaec9,	// (0x00057a9b) loc_type_pane_t2_ParamLimits

0xaec9,	// (0x00057a9b) loc_type_pane_t2

0xaedb,	// (0x00057aad) loc_type_pane_t3_ParamLimits

0xaedb,	// (0x00057aad) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005bed3) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005bed3) loc_type_pane_t

0xaeed,	// (0x00057abf) list_loc_req_pane

0xaef7,	// (0x00057ac9) scroll_pane_cp012

0x31ae,	// (0x0004fd80) list_single_loc_request_popup_menu_pane_ParamLimits

0x31ae,	// (0x0004fd80) list_single_loc_request_popup_menu_pane

0xaf02,	// (0x00057ad4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf02,	// (0x00057ad4) list_single_loc_request_popup_menu_pane_g1

0xaf0e,	// (0x00057ae0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf0e,	// (0x00057ae0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005beda) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005beda) list_single_loc_request_popup_menu_pane_g

0xaf1a,	// (0x00057aec) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf1a,	// (0x00057aec) list_single_loc_request_popup_menu_pane_t1

0xa75e,	// (0x00057330) bg_popup_window_pane_cp03_ParamLimits

0xa75e,	// (0x00057330) bg_popup_window_pane_cp03

0xb163,	// (0x00057d35) heading_loc_req_pane_ParamLimits

0xb163,	// (0x00057d35) heading_loc_req_pane

0x31bb,	// (0x0004fd8d) popup_dyc_status_message_window_g1_ParamLimits

0x31bb,	// (0x0004fd8d) popup_dyc_status_message_window_g1

0x31cf,	// (0x0004fda1) popup_dyc_status_message_window_t1_ParamLimits

0x31cf,	// (0x0004fda1) popup_dyc_status_message_window_t1

0x31e4,	// (0x0004fdb6) popup_dyc_status_message_window_t2_ParamLimits

0x31e4,	// (0x0004fdb6) popup_dyc_status_message_window_t2

0x31f9,	// (0x0004fdcb) popup_dyc_status_message_window_t3_ParamLimits

0x31f9,	// (0x0004fdcb) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005bedf) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005bedf) popup_dyc_status_message_window_t

0xa503,	// (0x000570d5) bg_heading_pane_cp01

0xaf30,	// (0x00057b02) heading_loc_req_pane_g1

0xaf38,	// (0x00057b0a) heading_loc_req_pane_g2

0xaf40,	// (0x00057b12) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005bee6) heading_loc_req_pane_g

0xaf48,	// (0x00057b1a) heading_loc_req_pane_t1

0xaf57,	// (0x00057b29) bg_popup_sub_pane_cp01_ParamLimits

0xaf57,	// (0x00057b29) bg_popup_sub_pane_cp01

0xaf65,	// (0x00057b37) popup_cale_events_window_g1_ParamLimits

0xaf65,	// (0x00057b37) popup_cale_events_window_g1

0xaf85,	// (0x00057b57) popup_cale_events_window_g2_ParamLimits

0xaf85,	// (0x00057b57) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005bf1a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005bf1a) popup_cale_events_window_g

0xafa5,	// (0x00057b77) popup_cale_events_window_t1_ParamLimits

0xafa5,	// (0x00057b77) popup_cale_events_window_t1

0xafb7,	// (0x00057b89) popup_cale_events_window_t2_ParamLimits

0xafb7,	// (0x00057b89) popup_cale_events_window_t2

0xaff5,	// (0x00057bc7) popup_cale_events_window_t3_ParamLimits

0xaff5,	// (0x00057bc7) popup_cale_events_window_t3

0xb02f,	// (0x00057c01) popup_cale_events_window_t4_ParamLimits

0xb02f,	// (0x00057c01) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005bf1f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005bf1f) popup_cale_events_window_t

0x3221,	// (0x0004fdf3) call_type_pane

0x3231,	// (0x0004fe03) popup_call_status_window_g1

0x3245,	// (0x0004fe17) popup_call_status_window_g2

0x3259,	// (0x0004fe2b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005bf28) popup_call_status_window_g

0xb065,	// (0x00057c37) call_type_pane_g1

0xb06e,	// (0x00057c40) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005bf2f) call_type_pane_g

0xa503,	// (0x000570d5) bg_popup_sub_pane_cp02

0xb077,	// (0x00057c49) listscroll_popup_wml_pane

0xb07f,	// (0x00057c51) list_wml_pane

0xb089,	// (0x00057c5b) scroll_pane_cp013

0xb094,	// (0x00057c66) list_single_graphic_popup_wml_pane_ParamLimits

0xb094,	// (0x00057c66) list_single_graphic_popup_wml_pane

0xa878,	// (0x0005744a) list_single_graphic_popup_wml_pane_g1

0xb0a8,	// (0x00057c7a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005bf34) list_single_graphic_popup_wml_pane_g

0xb0b0,	// (0x00057c82) list_single_graphic_popup_wml_pane_t1

0xb0c6,	// (0x00057c98) aid_call_pane

0xa756,	// (0x00057328) popup_clock_analogue_window_g1

0xa756,	// (0x00057328) popup_clock_analogue_window_g2

0x9bae,	// (0x00056780) popup_clock_analogue_window_g3

0x9bae,	// (0x00056780) popup_clock_analogue_window_g4

0xa878,	// (0x0005744a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005bf39) popup_clock_analogue_window_g

0x9bb6,	// (0x00056788) popup_clock_analogue_window_t1

0x9bc4,	// (0x00056796) clock_digital_number_pane_ParamLimits

0x9bc4,	// (0x00056796) clock_digital_number_pane

0x9bd0,	// (0x000567a2) clock_digital_number_pane_cp02_ParamLimits

0x9bd0,	// (0x000567a2) clock_digital_number_pane_cp02

0x9bdc,	// (0x000567ae) clock_digital_number_pane_cp03_ParamLimits

0x9bdc,	// (0x000567ae) clock_digital_number_pane_cp03

0x9be8,	// (0x000567ba) clock_digital_number_pane_cp04_ParamLimits

0x9be8,	// (0x000567ba) clock_digital_number_pane_cp04

0x9bf8,	// (0x000567ca) clock_digital_separator_pane_ParamLimits

0x9bf8,	// (0x000567ca) clock_digital_separator_pane

0x9c04,	// (0x000567d6) popup_clock_digital_window_t1

0xa878,	// (0x0005744a) clock_digital_number_pane_g1

0xa878,	// (0x0005744a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005bea7) clock_digital_number_pane_g

0xa878,	// (0x0005744a) clock_digital_separator_pane_g1

0xa878,	// (0x0005744a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005bea7) clock_digital_separator_pane_g

0xa503,	// (0x000570d5) bg_popup_window_pane_cp04

0xb0ce,	// (0x00057ca0) heading_pane_cp03

0xb0d6,	// (0x00057ca8) listscroll_popup_gms_pane

0xb0de,	// (0x00057cb0) grid_large_graphic_popup_pane

0xb0e8,	// (0x00057cba) listscroll_popup_gms_pane_g1

0xb0f0,	// (0x00057cc2) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005bf44) listscroll_popup_gms_pane_g

0xab91,	// (0x00057763) scroll_pane_cp014

0x3268,	// (0x0004fe3a) cell_large_graphic_popup_pane_ParamLimits

0x3268,	// (0x0004fe3a) cell_large_graphic_popup_pane

0x3280,	// (0x0004fe52) cell_large_graphic_popup_pane_g1_ParamLimits

0x3280,	// (0x0004fe52) cell_large_graphic_popup_pane_g1

0xb0f8,	// (0x00057cca) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0f8,	// (0x00057cca) cell_large_graphic_popup_pane_g2

0xb104,	// (0x00057cd6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb104,	// (0x00057cd6) cell_large_graphic_popup_pane_g3

0xb111,	// (0x00057ce3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb111,	// (0x00057ce3) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005bf49) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005bf49) cell_large_graphic_popup_pane_g

0xb121,	// (0x00057cf3) grid_highlight_pane_cp010

0xa878,	// (0x0005744a) bg_popup_call_pane_g1

0xb12b,	// (0x00057cfd) list_single_graphic_popup_conf_pane_ParamLimits

0xb12b,	// (0x00057cfd) list_single_graphic_popup_conf_pane

0xb13e,	// (0x00057d10) list_highlight_pane_cp01

0xb16f,	// (0x00057d41) list_single_graphic_popup_conf_pane_g1

0xb177,	// (0x00057d49) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005bf52) list_single_graphic_popup_conf_pane_g

0xb17f,	// (0x00057d51) list_single_graphic_popup_conf_pane_t1

0xb18d,	// (0x00057d5f) linegrid_cams_pane_g1

0x328c,	// (0x0004fe5e) linegrid_cams_pane_g2

0xa9ce,	// (0x000575a0) linegrid_cams_pane_g3

0xb196,	// (0x00057d68) linegrid_cams_pane_g4

0x3295,	// (0x0004fe67) linegrid_cams_pane_g5

0x329e,	// (0x0004fe70) linegrid_cams_pane_g6

0xa9d7,	// (0x000575a9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005bf57) linegrid_cams_pane_g

0xb19f,	// (0x00057d71) popup_clock_analogue_window

0xb19f,	// (0x00057d71) popup_clock_digital_window

0xa503,	// (0x000570d5) popup_phob_thumbnail_window

0xa878,	// (0x0005744a) call_video_uplink_pane_g1

0xb1a8,	// (0x00057d7a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005bf66) call_video_uplink_pane_g

0xb1b0,	// (0x00057d82) video_uplink_pane

0xb1b8,	// (0x00057d8a) mce_image_pane_g1

0x32a9,	// (0x0004fe7b) mce_image_pane_g2

0x32b3,	// (0x0004fe85) mce_image_pane_g3

0x32bb,	// (0x0004fe8d) mce_image_pane_g4

0x32c3,	// (0x0004fe95) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005bf6b) mce_image_pane_g

0xb1c2,	// (0x00057d94) control_top_pane_stacon_cp01_ParamLimits

0xb1c2,	// (0x00057d94) control_top_pane_stacon_cp01

0xb1d6,	// (0x00057da8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1d6,	// (0x00057da8) uni_indicator_pane_stacon_cp01

0xb1e7,	// (0x00057db9) bg_popup_sub_pane_cp03

0xb1f1,	// (0x00057dc3) chi_dic_find_pane

0x32cb,	// (0x0004fe9d) listscroll_chi_dic_pane

0xb1f9,	// (0x00057dcb) main_pane_chidic_g1

0xb201,	// (0x00057dd3) chi_dic_find_pane_t1

0xb20f,	// (0x00057de1) find_chidic_pane

0xb218,	// (0x00057dea) chi_dic_list_pane_ParamLimits

0xb218,	// (0x00057dea) chi_dic_list_pane

0xb229,	// (0x00057dfb) scroll_pane_cp020

0xb231,	// (0x00057e03) find_chidic_pane_t1

0xa503,	// (0x000570d5) input_focus_pane_cp06

0x32df,	// (0x0004feb1) list_chi_dic_pane_ParamLimits

0x32df,	// (0x0004feb1) list_chi_dic_pane

0x32f1,	// (0x0004fec3) list_chi_dic_pane_t1_ParamLimits

0x32f1,	// (0x0004fec3) list_chi_dic_pane_t1

0xa503,	// (0x000570d5) list_highlight_pane_cp020

0xb240,	// (0x00057e12) bg_cale_heading_pane_g1

0x3304,	// (0x0004fed6) bg_cale_heading_pane_g2

0x330c,	// (0x0004fede) bg_cale_heading_pane_g3

0x3314,	// (0x0004fee6) bg_cale_heading_pane_g4

0x331e,	// (0x0004fef0) bg_cale_heading_pane_g5

0x3328,	// (0x0004fefa) bg_cale_heading_pane_g6

0x3330,	// (0x0004ff02) bg_cale_heading_pane_g7

0x3338,	// (0x0004ff0a) bg_cale_heading_pane_g8

0x3342,	// (0x0004ff14) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005bf76) bg_cale_heading_pane_g

0xb240,	// (0x00057e12) bg_cale_side_pane_g1

0x334c,	// (0x0004ff1e) bg_cale_side_pane_g2

0x3354,	// (0x0004ff26) bg_cale_side_pane_g3

0x335c,	// (0x0004ff2e) bg_cale_side_pane_g4

0x3364,	// (0x0004ff36) bg_cale_side_pane_g5

0x336c,	// (0x0004ff3e) bg_cale_side_pane_g6

0x3374,	// (0x0004ff46) bg_cale_side_pane_g7

0x337c,	// (0x0004ff4e) bg_cale_side_pane_g8

0x3384,	// (0x0004ff56) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005bf89) bg_cale_side_pane_g

0x338c,	// (0x0004ff5e) popup_call_status_window_ParamLimits

0x338c,	// (0x0004ff5e) popup_call_status_window

0xb248,	// (0x00057e1a) stacon_top_pane

0xb250,	// (0x00057e22) status_pane_ParamLimits

0xb250,	// (0x00057e22) status_pane

0xb265,	// (0x00057e37) status_small_pane

0xb26d,	// (0x00057e3f) control_pane

0xa503,	// (0x000570d5) stacon_bottom_pane

0xb275,	// (0x00057e47) list_single_mce_smart_pane_t1_ParamLimits

0xb275,	// (0x00057e47) list_single_mce_smart_pane_t1

0xb288,	// (0x00057e5a) list_single_mce_smart_pane_t2_ParamLimits

0xb288,	// (0x00057e5a) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005bf9c) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005bf9c) list_single_mce_smart_pane_t

0x33d5,	// (0x0004ffa7) compass_pane

0x33de,	// (0x0004ffb0) main_location2_pane_t1

0x33f0,	// (0x0004ffc2) main_location2_pane_t2

0x3402,	// (0x0004ffd4) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005bfa1) main_location2_pane_t

0xb2a7,	// (0x00057e79) compass_pane_g1_ParamLimits

0xb2a7,	// (0x00057e79) compass_pane_g1

0x3446,	// (0x00050018) compass_pane_t1

0x3455,	// (0x00050027) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005bfaa) compass_pane_t

0x349c,	// (0x0005006e) text_secondary_cp61

0xb323,	// (0x00057ef5) navi_pane_cams_g5

0xb39f,	// (0x00057f71) navi_pane_im_t1

0xb3ad,	// (0x00057f7f) navi_pane_mp_g1_ParamLimits

0xb3ad,	// (0x00057f7f) navi_pane_mp_g1

0xb3c1,	// (0x00057f93) navi_pane_mp_g2_ParamLimits

0xb3c1,	// (0x00057f93) navi_pane_mp_g2

0xb3cd,	// (0x00057f9f) navi_pane_mp_g3_ParamLimits

0xb3cd,	// (0x00057f9f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005bfbe) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005bfbe) navi_pane_mp_g

0xb3d9,	// (0x00057fab) navi_pane_mp_t1

0xb3e7,	// (0x00057fb9) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005bfc5) navi_pane_mp_t

0xb452,	// (0x00058024) navi_pane_vt_g1

0xb3d9,	// (0x00057fab) navi_pane_vt_t1

0xb45a,	// (0x0005802c) navi_slider_pane

0xa9e8,	// (0x000575ba) zooming_pane

0xb46a,	// (0x0005803c) navi_slider_pane_g1

0x9c21,	// (0x000567f3) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005bfcc) navi_slider_pane_g

0xb48e,	// (0x00058060) aid_levels_zoom

0xb496,	// (0x00058068) zooming_pane_g1

0xb49e,	// (0x00058070) zooming_pane_g2

0xb49e,	// (0x00058070) zooming_pane_g3

0x0002,

0xf409,	// (0x0005bfdb) zooming_pane_g

0xb4a6,	// (0x00058078) level_10_zoom

0xb4af,	// (0x00058081) level_11_zoom

0xb4b8,	// (0x0005808a) level_1_zoom

0xb4c1,	// (0x00058093) level_2_zoom

0xb4ca,	// (0x0005809c) level_3_zoom

0xb4d3,	// (0x000580a5) level_4_zoom

0xb4dc,	// (0x000580ae) level_5_zoom

0xb4e5,	// (0x000580b7) level_6_zoom

0xb4ee,	// (0x000580c0) level_7_zoom

0xb4f7,	// (0x000580c9) level_8_zoom

0xb500,	// (0x000580d2) level_9_zoom

0xb511,	// (0x000580e3) popup_phob_thumbnail_window_g1

0xb519,	// (0x000580eb) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005bfe2) popup_phob_thumbnail_window_g

0xc803,	// (0x000593d5) level_1_location

0xc80b,	// (0x000593dd) level_2_location

0xc813,	// (0x000593e5) level_3_location

0xc81b,	// (0x000593ed) level_4_location

0xa9e8,	// (0x000575ba) level_5_location

0x34ed,	// (0x000500bf) mce_icon_pane_g1

0x34f7,	// (0x000500c9) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005bfe7) mce_icon_pane_g

0x34ff,	// (0x000500d1) main_mup_pane_g1_ParamLimits

0x34ff,	// (0x000500d1) main_mup_pane_g1

0x3515,	// (0x000500e7) main_mup_pane_g2_ParamLimits

0x3515,	// (0x000500e7) main_mup_pane_g2

0x352d,	// (0x000500ff) main_mup_pane_g3_ParamLimits

0x352d,	// (0x000500ff) main_mup_pane_g3

0x3545,	// (0x00050117) main_mup_pane_g4_ParamLimits

0x3545,	// (0x00050117) main_mup_pane_g4

0x355d,	// (0x0005012f) main_mup_pane_g5_ParamLimits

0x355d,	// (0x0005012f) main_mup_pane_g5

0x3579,	// (0x0005014b) main_mup_pane_g6_ParamLimits

0x3579,	// (0x0005014b) main_mup_pane_g6

0x3591,	// (0x00050163) main_mup_pane_g7_ParamLimits

0x3591,	// (0x00050163) main_mup_pane_g7

0x35a9,	// (0x0005017b) main_mup_pane_g8_ParamLimits

0x35a9,	// (0x0005017b) main_mup_pane_g8

0x35c3,	// (0x00050195) main_mup_pane_g9_ParamLimits

0x35c3,	// (0x00050195) main_mup_pane_g9

0x35dd,	// (0x000501af) main_mup_pane_g10_ParamLimits

0x35dd,	// (0x000501af) main_mup_pane_g10

0x35f7,	// (0x000501c9) main_mup_pane_g11_ParamLimits

0x35f7,	// (0x000501c9) main_mup_pane_g11

0x360b,	// (0x000501dd) main_mup_pane_g12_ParamLimits

0x360b,	// (0x000501dd) main_mup_pane_g12

0x3621,	// (0x000501f3) main_mup_pane_g13_ParamLimits

0x3621,	// (0x000501f3) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005bfec) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005bfec) main_mup_pane_g

0x3635,	// (0x00050207) main_mup_pane_t1_ParamLimits

0x3635,	// (0x00050207) main_mup_pane_t1

0x364f,	// (0x00050221) main_mup_pane_t2_ParamLimits

0x364f,	// (0x00050221) main_mup_pane_t2

0x3667,	// (0x00050239) main_mup_pane_t3_ParamLimits

0x3667,	// (0x00050239) main_mup_pane_t3

0x367f,	// (0x00050251) main_mup_pane_t4_ParamLimits

0x367f,	// (0x00050251) main_mup_pane_t4

0x369d,	// (0x0005026f) main_mup_pane_t5_ParamLimits

0x369d,	// (0x0005026f) main_mup_pane_t5

0x36b2,	// (0x00050284) main_mup_pane_t6_ParamLimits

0x36b2,	// (0x00050284) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c007) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c007) main_mup_pane_t

0x36c4,	// (0x00050296) mup_progress_pane_ParamLimits

0x36c4,	// (0x00050296) mup_progress_pane

0x36d0,	// (0x000502a2) mup_visualizer_pane_ParamLimits

0x36d0,	// (0x000502a2) mup_visualizer_pane

0x3700,	// (0x000502d2) mup_volume_pane_ParamLimits

0x3700,	// (0x000502d2) mup_volume_pane

0xb521,	// (0x000580f3) mup_visualizer_pane_g1_ParamLimits

0xb521,	// (0x000580f3) mup_visualizer_pane_g1

0xb521,	// (0x000580f3) mup_visualizer_pane_g2_ParamLimits

0xb521,	// (0x000580f3) mup_visualizer_pane_g2

0xb2a7,	// (0x00057e79) mup_visualizer_pane_g3_ParamLimits

0xb2a7,	// (0x00057e79) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c014) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c014) mup_visualizer_pane_g

0xa878,	// (0x0005744a) mup_volume_pane_g1

0xb537,	// (0x00058109) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c01b) mup_volume_pane_g

0xa878,	// (0x0005744a) mup_progress_pane_g1

0xb540,	// (0x00058112) mup_progress_pane_g2

0xb549,	// (0x0005811b) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c020) mup_progress_pane_g

0xa503,	// (0x000570d5) bg_popup_window_pane_cp05

0xb552,	// (0x00058124) heading_pane_cp02_ParamLimits

0xb552,	// (0x00058124) heading_pane_cp02

0xb56c,	// (0x0005813e) list_popup_blid_pane

0xb574,	// (0x00058146) list_blid_sat_info_pane_ParamLimits

0xb574,	// (0x00058146) list_blid_sat_info_pane

0xb587,	// (0x00058159) list_blid_sat_info_pane_g1

0xb58f,	// (0x00058161) list_blid_sat_info_pane_t1

0x3816,	// (0x000503e8) mup_equalizer_pane_ParamLimits

0x3816,	// (0x000503e8) mup_equalizer_pane

0x382f,	// (0x00050401) mup_equalizer_pane_cp1_ParamLimits

0x382f,	// (0x00050401) mup_equalizer_pane_cp1

0x384c,	// (0x0005041e) mup_equalizer_pane_cp2_ParamLimits

0x384c,	// (0x0005041e) mup_equalizer_pane_cp2

0x3869,	// (0x0005043b) mup_equalizer_pane_cp3_ParamLimits

0x3869,	// (0x0005043b) mup_equalizer_pane_cp3

0x388a,	// (0x0005045c) mup_equalizer_pane_cp4_ParamLimits

0x388a,	// (0x0005045c) mup_equalizer_pane_cp4

0x38ab,	// (0x0005047d) mup_equalizer_pane_cp5

0x38bf,	// (0x00050491) mup_equalizer_pane_cp6

0x38d3,	// (0x000504a5) mup_equalizer_pane_cp7

0xc721,	// (0x000592f3) bg_popup_call_poc_act_pane_g9

0xc729,	// (0x000592fb) bg_popup_call_poc_act_pane_g10

0xc731,	// (0x00059303) bg_popup_call_poc_act_pane_g11

0x000a,

0xa75e,	// (0x00057330) mup_scale_pane

0xa878,	// (0x0005744a) mup_scale_pane_g1

0xb59d,	// (0x0005816f) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c03c) mup_scale_pane_g

0xb5c1,	// (0x00058193) msg_data_pane

0xb5c9,	// (0x0005819b) scroll_pane_cp017

0x03bb,	// (0x0004cf8d) bg_list_pane_cp04_ParamLimits

0x03bb,	// (0x0004cf8d) bg_list_pane_cp04

0xb5d1,	// (0x000581a3) msg_data_pane_g1

0x3901,	// (0x000504d3) msg_data_pane_g2

0x390b,	// (0x000504dd) msg_data_pane_g3

0x3913,	// (0x000504e5) msg_data_pane_g4

0x391b,	// (0x000504ed) msg_data_pane_g5

0x3923,	// (0x000504f5) msg_data_pane_g6

0x392b,	// (0x000504fd) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c04b) msg_data_pane_g

0x03d3,	// (0x0004cfa5) msg_text_pane_ParamLimits

0x03d3,	// (0x0004cfa5) msg_text_pane

0x3933,	// (0x00050505) qrid_highlight_pane_cp011_ParamLimits

0x3933,	// (0x00050505) qrid_highlight_pane_cp011

0xa503,	// (0x000570d5) msg_body_pane

0xa503,	// (0x000570d5) msg_header_pane

0xb5e2,	// (0x000581b4) input_focus_pane_cp07

0x0406,	// (0x0004cfd8) msg_header_pane_t1_ParamLimits

0x0406,	// (0x0004cfd8) msg_header_pane_t1

0x3949,	// (0x0005051b) msg_header_pane_t2_ParamLimits

0x3949,	// (0x0005051b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c05f) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c05f) msg_header_pane_t

0xb5f7,	// (0x000581c9) msg_body_pane_g1

0x0418,	// (0x0004cfea) msg_body_pane_t1_ParamLimits

0x0418,	// (0x0004cfea) msg_body_pane_t1

0x395b,	// (0x0005052d) msg_body_pane_t2_ParamLimits

0x395b,	// (0x0005052d) msg_body_pane_t2

0x396d,	// (0x0005053f) msg_body_pane_t3_ParamLimits

0x396d,	// (0x0005053f) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c064) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c064) msg_body_pane_t

0x39b9,	// (0x0005058b) main_viewer_pane_g1_ParamLimits

0x39b9,	// (0x0005058b) main_viewer_pane_g1

0x39c7,	// (0x00050599) main_viewer_pane_g2_ParamLimits

0x39c7,	// (0x00050599) main_viewer_pane_g2

0x39d5,	// (0x000505a7) main_viewer_pane_g3_ParamLimits

0x39d5,	// (0x000505a7) main_viewer_pane_g3

0x39e4,	// (0x000505b6) main_viewer_pane_g4_ParamLimits

0x39e4,	// (0x000505b6) main_viewer_pane_g4

0x9c4b,	// (0x0005681d) main_viewer_pane_g5_ParamLimits

0x9c4b,	// (0x0005681d) main_viewer_pane_g5

0x9c4b,	// (0x0005681d) main_viewer_pane_g7_ParamLimits

0x9c4b,	// (0x0005681d) main_viewer_pane_g7

0x9c5d,	// (0x0005682f) main_viewer_pane_g8_ParamLimits

0x9c5d,	// (0x0005682f) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c074) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c074) main_viewer_pane_g

0xb5ff,	// (0x000581d1) viewer_content_pane_ParamLimits

0xb5ff,	// (0x000581d1) viewer_content_pane

0x3a20,	// (0x000505f2) main_postcard_pane_g1_ParamLimits

0x3a20,	// (0x000505f2) main_postcard_pane_g1

0x3a36,	// (0x00050608) main_postcard_pane_g2_ParamLimits

0x3a36,	// (0x00050608) main_postcard_pane_g2

0x3a4c,	// (0x0005061e) main_postcard_pane_g3_ParamLimits

0x3a4c,	// (0x0005061e) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c085) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c085) main_postcard_pane_g

0x3a63,	// (0x00050635) main_postcard_pane_g4

0xc903,	// (0x000594d5) smil_status_volume_pane_g2

0x3aa6,	// (0x00050678) postcard_pane_ParamLimits

0x3aa6,	// (0x00050678) postcard_pane

0xb60d,	// (0x000581df) postcard_pane_g1_ParamLimits

0xb60d,	// (0x000581df) postcard_pane_g1

0x3ae8,	// (0x000506ba) postcard_pane_g2_ParamLimits

0x3ae8,	// (0x000506ba) postcard_pane_g2

0x3af4,	// (0x000506c6) postcard_pane_g3_ParamLimits

0x3af4,	// (0x000506c6) postcard_pane_g3

0xb61b,	// (0x000581ed) postcard_pane_g4_ParamLimits

0xb61b,	// (0x000581ed) postcard_pane_g4

0x3b00,	// (0x000506d2) postcard_pane_g5_ParamLimits

0x3b00,	// (0x000506d2) postcard_pane_g5

0x3b15,	// (0x000506e7) postcard_pane_g6_ParamLimits

0x3b15,	// (0x000506e7) postcard_pane_g6

0xb60d,	// (0x000581df) postcard_pane_g7_ParamLimits

0xb60d,	// (0x000581df) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c092) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c092) postcard_pane_g

0x3b29,	// (0x000506fb) main_mp2_pane_g1_ParamLimits

0x3b29,	// (0x000506fb) main_mp2_pane_g1

0x3b35,	// (0x00050707) main_mp2_pane_g2_ParamLimits

0x3b35,	// (0x00050707) main_mp2_pane_g2

0x3b41,	// (0x00050713) main_mp2_pane_g3_ParamLimits

0x3b41,	// (0x00050713) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c0a1) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c0a1) main_mp2_pane_g

0x3b4d,	// (0x0005071f) main_mp2_pane_t1_ParamLimits

0x3b4d,	// (0x0005071f) main_mp2_pane_t1

0x3b62,	// (0x00050734) main_mp2_pane_t2_ParamLimits

0x3b62,	// (0x00050734) main_mp2_pane_t2

0x3b74,	// (0x00050746) main_mp2_pane_t3_ParamLimits

0x3b74,	// (0x00050746) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c0a8) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c0a8) main_mp2_pane_t

0xb629,	// (0x000581fb) pec_content_pane_ParamLimits

0xb629,	// (0x000581fb) pec_content_pane

0xab91,	// (0x00057763) scroll_pane_cp015

0xb63b,	// (0x0005820d) pec_attribute_pane_ParamLimits

0xb63b,	// (0x0005820d) pec_attribute_pane

0x3b86,	// (0x00050758) pec_content_pane_g1_ParamLimits

0x3b86,	// (0x00050758) pec_content_pane_g1

0xb64b,	// (0x0005821d) pec_content_pane_t1_ParamLimits

0xb64b,	// (0x0005821d) pec_content_pane_t1

0xb65d,	// (0x0005822f) pec_content_pane_t2_ParamLimits

0xb65d,	// (0x0005822f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c0af) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c0af) pec_content_pane_t

0x3b92,	// (0x00050764) list_single_graphic_pane_cp01_ParamLimits

0x3b92,	// (0x00050764) list_single_graphic_pane_cp01

0xa75e,	// (0x00057330) bg_popup_sub_pane_cp04

0xb66f,	// (0x00058241) popup_mup_playback_window_g1

0xb67b,	// (0x0005824d) popup_mup_playback_window_t1

0xb690,	// (0x00058262) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c0b4) popup_mup_playback_window_t

0xb6c7,	// (0x00058299) main_image_pane_g1_ParamLimits

0xb6c7,	// (0x00058299) main_image_pane_g1

0xb70a,	// (0x000582dc) scroll_pane_cp018_ParamLimits

0xb70a,	// (0x000582dc) scroll_pane_cp018

0xb722,	// (0x000582f4) scroll_pane_cp016_ParamLimits

0xb722,	// (0x000582f4) scroll_pane_cp016

0x3c5f,	// (0x00050831) smil2_image_pane_ParamLimits

0x3c5f,	// (0x00050831) smil2_image_pane

0x3c8f,	// (0x00050861) smil2_root_pane_ParamLimits

0x3c8f,	// (0x00050861) smil2_root_pane

0x3cc7,	// (0x00050899) smil2_text_pane_ParamLimits

0x3cc7,	// (0x00050899) smil2_text_pane

0xa503,	// (0x000570d5) bg_list_pane_cp06

0xb75e,	// (0x00058330) grid_radio_pane

0xa503,	// (0x000570d5) bg_popup_window_pane_cp06

0xb766,	// (0x00058338) main_fmradio_pane_t1

0xb0ce,	// (0x00057ca0) heading_pane_cp04

0xb774,	// (0x00058346) main_fmradio_pane_t2

0xc739,	// (0x0005930b) popup_cale_lunar_info_window_g1

0xb782,	// (0x00058354) main_fmradio_pane_t3

0xc741,	// (0x00059313) popup_cale_lunar_info_window_g2

0xb790,	// (0x00058362) main_fmradio_pane_t4

0x0001,

0xb79e,	// (0x00058370) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005c18f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c0c9) main_fmradio_pane_t

0xb7ac,	// (0x0005837e) wait_bar_pane_cp03

0xb7b4,	// (0x00058386) cell_fmradio_pane_ParamLimits

0xb7b4,	// (0x00058386) cell_fmradio_pane

0xb60d,	// (0x000581df) cell_fmradio_pane_g1_ParamLimits

0xb60d,	// (0x000581df) cell_fmradio_pane_g1

0xa503,	// (0x000570d5) grid_highlight_pane_cp011

0xb7c7,	// (0x00058399) poc_content_pane_ParamLimits

0xb7c7,	// (0x00058399) poc_content_pane

0xb7d9,	// (0x000583ab) scroll_pane_cp019

0x3d47,	// (0x00050919) popup_call_poc_act_window_ParamLimits

0x3d47,	// (0x00050919) popup_call_poc_act_window

0x3d6b,	// (0x0005093d) popup_call_poc_inact_window_ParamLimits

0x3d6b,	// (0x0005093d) popup_call_poc_inact_window

0xf594,	// (0x0005c166) bg_popup_call_poc_act_pane_g

0xc6b1,	// (0x00059283) bg_popup_call_poc_inact_pane_g1

0xc6b9,	// (0x0005928b) bg_popup_call_poc_inact_pane_g2

0xb7e1,	// (0x000583b3) popup_call_poc_act_window_g2

0xc6c1,	// (0x00059293) bg_popup_call_poc_inact_pane_g3

0xc6c9,	// (0x0005929b) bg_popup_call_poc_inact_pane_g4

0xc6d1,	// (0x000592a3) bg_popup_call_poc_inact_pane_g5

0xb7e9,	// (0x000583bb) popup_call_poc_act_window_t1_ParamLimits

0xb7e9,	// (0x000583bb) popup_call_poc_act_window_t1

0xb811,	// (0x000583e3) popup_call_poc_act_window_t2_ParamLimits

0xb811,	// (0x000583e3) popup_call_poc_act_window_t2

0xb839,	// (0x0005840b) popup_call_poc_act_window_t3_ParamLimits

0xb839,	// (0x0005840b) popup_call_poc_act_window_t3

0xb861,	// (0x00058433) popup_call_poc_act_window_t4_ParamLimits

0xb861,	// (0x00058433) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c0d4) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c0d4) popup_call_poc_act_window_t

0xc6d9,	// (0x000592ab) bg_popup_call_poc_inact_pane_g6

0xc6e1,	// (0x000592b3) bg_popup_call_poc_inact_pane_g7

0xc6e9,	// (0x000592bb) bg_popup_call_poc_inact_pane_g8

0xb873,	// (0x00058445) popup_call_poc_inact_window_g2

0xc6f1,	// (0x000592c3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005c153) bg_popup_call_poc_inact_pane_g

0xb87b,	// (0x0005844d) popup_call_poc_inact_window_t1_ParamLimits

0xb87b,	// (0x0005844d) popup_call_poc_inact_window_t1

0xb890,	// (0x00058462) popup_call_poc_inact_window_t2_ParamLimits

0xb890,	// (0x00058462) popup_call_poc_inact_window_t2

0xb8a5,	// (0x00058477) popup_call_poc_inact_window_t3_ParamLimits

0xb8a5,	// (0x00058477) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c0dd) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c0dd) popup_call_poc_inact_window_t

0xc876,	// (0x00059448) context_pane_ParamLimits

0x459a,	// (0x0005116c) signal_pane_ParamLimits

0xa9e8,	// (0x000575ba) main_call2_pane

0x9ca2,	// (0x00056874) popup_phob_thumbnail2_window_ParamLimits

0x9ca2,	// (0x00056874) popup_phob_thumbnail2_window

0x9c33,	// (0x00056805) aid_hotspot_pointer_arrow_pane

0x9c3b,	// (0x0005680d) aid_hotspot_pointer_hand_pane

0x40b4,	// (0x00050c86) phob_pre_status_pane_g5

0x1e6e,	// (0x0004ea40) cams_zoom_pane_ParamLimits

0x1e7d,	// (0x0004ea4f) image_vga_pane_ParamLimits

0x1e97,	// (0x0004ea69) main_camera_pane_g1_ParamLimits

0x1ea9,	// (0x0004ea7b) main_camera_pane_g2_ParamLimits

0x1eb9,	// (0x0004ea8b) main_camera_pane_g3_ParamLimits

0x1ec9,	// (0x0004ea9b) main_camera_pane_g4_ParamLimits

0x1ed9,	// (0x0004eaab) main_camera_pane_g5_ParamLimits

0x1ee9,	// (0x0004eabb) main_camera_pane_g6_ParamLimits

0x1efb,	// (0x0004eacd) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005bddc) main_camera_pane_g_ParamLimits

0x1f0b,	// (0x0004eadd) main_camera_pane_t1_ParamLimits

0x1f21,	// (0x0004eaf3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005bded) main_camera_pane_t_ParamLimits

0xa75e,	// (0x00057330) bg_popup_preview_window_pane_cp01_ParamLimits

0xa75e,	// (0x00057330) bg_popup_preview_window_pane_cp01

0xb8ba,	// (0x0005848c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ba,	// (0x0005848c) popup_phob_thumbnail2_window_g1

0xa503,	// (0x000570d5) call2_cli_visual_pane

0x3d9f,	// (0x00050971) popup_call2_audio_conf_window_ParamLimits

0x3d9f,	// (0x00050971) popup_call2_audio_conf_window

0x3dbf,	// (0x00050991) popup_call2_audio_first_window_ParamLimits

0x3dbf,	// (0x00050991) popup_call2_audio_first_window

0x3e55,	// (0x00050a27) popup_call2_audio_in_window_ParamLimits

0x3e55,	// (0x00050a27) popup_call2_audio_in_window

0x3e9d,	// (0x00050a6f) popup_call2_audio_out_window_ParamLimits

0x3e9d,	// (0x00050a6f) popup_call2_audio_out_window

0x3f07,	// (0x00050ad9) popup_call2_audio_second_window_ParamLimits

0x3f07,	// (0x00050ad9) popup_call2_audio_second_window

0x3f6d,	// (0x00050b3f) popup_call2_audio_wait_window_ParamLimits

0x3f6d,	// (0x00050b3f) popup_call2_audio_wait_window

0xa503,	// (0x000570d5) bg_popup_call2_act_pane_cp03

0xa740,	// (0x00057312) list_conf_pane_cp

0xb8c6,	// (0x00058498) popup_call2_audio_conf_window_t1

0xb12b,	// (0x00057cfd) list_single_graphic_popup_conf2_pane_ParamLimits

0xb12b,	// (0x00057cfd) list_single_graphic_popup_conf2_pane

0xb13e,	// (0x00057d10) list_highlight_pane_cp04

0xb8d4,	// (0x000584a6) list_single_graphic_popup_conf2_pane_g1

0xb177,	// (0x00057d49) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c0e4) list_single_graphic_popup_conf2_pane_g

0xb8de,	// (0x000584b0) list_single_graphic_popup_conf2_pane_t1

0xb8ec,	// (0x000584be) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8ec,	// (0x000584be) bg_popup_call2_act_pane_cp01

0xb976,	// (0x00058548) call_type_pane_cp05_ParamLimits

0xb976,	// (0x00058548) call_type_pane_cp05

0xb9ca,	// (0x0005859c) popup_call2_audio_second_window_g1_ParamLimits

0xb9ca,	// (0x0005859c) popup_call2_audio_second_window_g1

0xba1e,	// (0x000585f0) popup_call2_audio_second_window_g2_ParamLimits

0xba1e,	// (0x000585f0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c0e9) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c0e9) popup_call2_audio_second_window_g

0xba83,	// (0x00058655) popup_call2_audio_second_window_t1_ParamLimits

0xba83,	// (0x00058655) popup_call2_audio_second_window_t1

0xbb3e,	// (0x00058710) popup_call2_audio_second_window_t2_ParamLimits

0xbb3e,	// (0x00058710) popup_call2_audio_second_window_t2

0xbb91,	// (0x00058763) popup_call2_audio_second_window_t3_ParamLimits

0xbb91,	// (0x00058763) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c0f0) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c0f0) popup_call2_audio_second_window_t

0xa503,	// (0x000570d5) bg_popup_call2_in_pane_cp02

0xa50d,	// (0x000570df) call_type_pane_cp04

0xa515,	// (0x000570e7) popup_call2_audio_wait_window_g1

0xa51d,	// (0x000570ef) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005bccb) popup_call2_audio_wait_window_g

0xa525,	// (0x000570f7) popup_call2_audio_wait_window_t3

0xbc84,	// (0x00058856) bg_popup_call2_act_pane_ParamLimits

0xbc84,	// (0x00058856) bg_popup_call2_act_pane

0xbd44,	// (0x00058916) call_type_pane_cp03_ParamLimits

0xbd44,	// (0x00058916) call_type_pane_cp03

0xbda8,	// (0x0005897a) popup_call2_audio_first_window_g1_ParamLimits

0xbda8,	// (0x0005897a) popup_call2_audio_first_window_g1

0xbe18,	// (0x000589ea) popup_call2_audio_first_window_g2_ParamLimits

0xbe18,	// (0x000589ea) popup_call2_audio_first_window_g2

0xb521,	// (0x000580f3) popup_call2_audio_first_window_g3_ParamLimits

0xb521,	// (0x000580f3) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c0f9) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c0f9) popup_call2_audio_first_window_g

0xbef6,	// (0x00058ac8) popup_call2_audio_first_window_t1_ParamLimits

0xbef6,	// (0x00058ac8) popup_call2_audio_first_window_t1

0xbff9,	// (0x00058bcb) popup_call2_audio_first_window_t4_ParamLimits

0xbff9,	// (0x00058bcb) popup_call2_audio_first_window_t4

0xc0dc,	// (0x00058cae) popup_call2_audio_first_window_t5_ParamLimits

0xc0dc,	// (0x00058cae) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005c104) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005c104) popup_call2_audio_first_window_t

0xa756,	// (0x00057328) bg_popup_call2_act_pane_g1

0xc749,	// (0x0005931b) popup_cale_lunar_info_window_t1

0xc757,	// (0x00059329) popup_cale_lunar_info_window_t2

0xc765,	// (0x00059337) popup_cale_lunar_info_window_t3

0xa503,	// (0x000570d5) bg_popup_call2_bubble_pane

0xc1dd,	// (0x00058daf) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1dd,	// (0x00058daf) bg_popup_call2_in_pane_cp01

0x987f,	// (0x00056451) call_type_pane_cp02

0xc225,	// (0x00058df7) popup_call2_audio_out_window_g1_ParamLimits

0xc225,	// (0x00058df7) popup_call2_audio_out_window_g1

0xc251,	// (0x00058e23) popup_call2_audio_out_window_g2_ParamLimits

0xc251,	// (0x00058e23) popup_call2_audio_out_window_g2

0xc279,	// (0x00058e4b) popup_call2_audio_out_window_g3_ParamLimits

0xc279,	// (0x00058e4b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005c10d) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005c10d) popup_call2_audio_out_window_g

0xc2b4,	// (0x00058e86) popup_call2_audio_out_window_t1_ParamLimits

0xc2b4,	// (0x00058e86) popup_call2_audio_out_window_t1

0xc313,	// (0x00058ee5) popup_call2_audio_out_window_t2_ParamLimits

0xc313,	// (0x00058ee5) popup_call2_audio_out_window_t2

0xc367,	// (0x00058f39) popup_call2_audio_out_window_t3_ParamLimits

0xc367,	// (0x00058f39) popup_call2_audio_out_window_t3

0xc37d,	// (0x00058f4f) popup_call2_audio_out_window_t4_ParamLimits

0xc37d,	// (0x00058f4f) popup_call2_audio_out_window_t4

0xc393,	// (0x00058f65) popup_call2_audio_out_window_t5_ParamLimits

0xc393,	// (0x00058f65) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005c116) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005c116) popup_call2_audio_out_window_t

0xc3f7,	// (0x00058fc9) bg_popup_call2_in_pane_ParamLimits

0xc3f7,	// (0x00058fc9) bg_popup_call2_in_pane

0xc453,	// (0x00059025) popup_call2_audio_in_window_g1_ParamLimits

0xc453,	// (0x00059025) popup_call2_audio_in_window_g1

0xc48b,	// (0x0005905d) popup_call2_audio_in_window_g2_ParamLimits

0xc48b,	// (0x0005905d) popup_call2_audio_in_window_g2

0xc4c3,	// (0x00059095) popup_call2_audio_in_window_g3_ParamLimits

0xc4c3,	// (0x00059095) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005c123) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005c123) popup_call2_audio_in_window_g

0xc51b,	// (0x000590ed) popup_call2_audio_in_window_t1_ParamLimits

0xc51b,	// (0x000590ed) popup_call2_audio_in_window_t1

0xc59b,	// (0x0005916d) popup_call2_audio_in_window_t2_ParamLimits

0xc59b,	// (0x0005916d) popup_call2_audio_in_window_t2

0xc61b,	// (0x000591ed) popup_call2_audio_in_window_t3_ParamLimits

0xc61b,	// (0x000591ed) popup_call2_audio_in_window_t3

0xc635,	// (0x00059207) popup_call2_audio_in_window_t4_ParamLimits

0xc635,	// (0x00059207) popup_call2_audio_in_window_t4

0xc647,	// (0x00059219) popup_call2_audio_in_window_t5_ParamLimits

0xc647,	// (0x00059219) popup_call2_audio_in_window_t5

0xc65c,	// (0x0005922e) popup_call2_audio_in_window_t6_ParamLimits

0xc65c,	// (0x0005922e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005c12c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005c12c) popup_call2_audio_in_window_t

0xa756,	// (0x00057328) bg_popup_call2_in_pane_g1

0xc773,	// (0x00059345) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005c194) popup_cale_lunar_info_window_t

0xa75e,	// (0x00057330) bg_popup_call2_rect_pane_ParamLimits

0xa75e,	// (0x00057330) bg_popup_call2_rect_pane

0xa503,	// (0x000570d5) call2_cli_visual_graphic_pane

0xa503,	// (0x000570d5) call2_cli_visual_text_pane

0x9cc9,	// (0x0005689b) smil_status_volume_pane_g3

0x0002,

0xa878,	// (0x0005744a) call2_cli_visual_graphic_pane_g1

0xa878,	// (0x0005744a) call2_cli_visual_graphic_pane_g2

0xa878,	// (0x0005744a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005c139) call2_cli_visual_graphic_pane_g

0xc671,	// (0x00059243) bg_popup_call2_rect_pane_g1

0xa904,	// (0x000574d6) bg_popup_call2_rect_pane_g2

0xc679,	// (0x0005924b) bg_popup_call2_rect_pane_g3

0xc681,	// (0x00059253) bg_popup_call2_rect_pane_g4

0xc689,	// (0x0005925b) bg_popup_call2_rect_pane_g5

0xc691,	// (0x00059263) bg_popup_call2_rect_pane_g6

0xc699,	// (0x0005926b) bg_popup_call2_rect_pane_g7

0xc6a1,	// (0x00059273) bg_popup_call2_rect_pane_g8

0xc6a9,	// (0x0005927b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c140) bg_popup_call2_rect_pane_g

0xc6b1,	// (0x00059283) bg_popup_call2_bubble_pane_g1

0xc6b9,	// (0x0005928b) bg_popup_call2_bubble_pane_g2

0xc6c1,	// (0x00059293) bg_popup_call2_bubble_pane_g3

0xc6c9,	// (0x0005929b) bg_popup_call2_bubble_pane_g4

0xc6d1,	// (0x000592a3) bg_popup_call2_bubble_pane_g5

0xc6d9,	// (0x000592ab) bg_popup_call2_bubble_pane_g6

0xc6e1,	// (0x000592b3) bg_popup_call2_bubble_pane_g7

0xc6e9,	// (0x000592bb) bg_popup_call2_bubble_pane_g8

0xc6f1,	// (0x000592c3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005c153) bg_popup_call2_bubble_pane_g

0x17f0,	// (0x0004e3c2) aid_cale_week_size_cell_pane

0x1f37,	// (0x0004eb09) aid_cams_cif_uncrop_pane_ParamLimits

0x1f37,	// (0x0004eb09) aid_cams_cif_uncrop_pane

0x20e7,	// (0x0004ecb9) aid_cams_size_cell_ParamLimits

0x20e7,	// (0x0004ecb9) aid_cams_size_cell

0x20fb,	// (0x0004eccd) grid_cams_pane_ParamLimits

0x2115,	// (0x0004ece7) linegrid_cams_pane_ParamLimits

0x21fc,	// (0x0004edce) call_video_pane_t1

0x221a,	// (0x0004edec) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005be40) call_video_pane_t

0x2646,	// (0x0004f218) aid_cale_month_size_cell_pane_ParamLimits

0x2646,	// (0x0004f218) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005c1dd) smil_status_volume_pane_g

0x9cd6,	// (0x000568a8) volume_smil_pane_ParamLimits

0x973a,	// (0x0005630c) aid_popup2_width_pane

0x1758,	// (0x0004e32a) cell_qdial_pane_g4_ParamLimits

0x1758,	// (0x0004e32a) cell_qdial_pane_g4

0x3426,	// (0x0004fff8) aid_blid_cardinal_pane_ParamLimits

0x3432,	// (0x00050004) aid_blid_destination_pane_ParamLimits

0x3432,	// (0x00050004) aid_blid_destination_pane

0xa75e,	// (0x00057330) bg_popup_call_poc_act_pane_ParamLimits

0xa75e,	// (0x00057330) bg_popup_call_poc_act_pane

0xa75e,	// (0x00057330) bg_popup_call_poc_inact_pane_ParamLimits

0xa75e,	// (0x00057330) bg_popup_call_poc_inact_pane

0xc6f9,	// (0x000592cb) bg_popup_call_poc_act_pane_g1

0xc701,	// (0x000592d3) bg_popup_call_poc_act_pane_g2

0xc709,	// (0x000592db) bg_popup_call_poc_act_pane_g3

0xc6c9,	// (0x0005929b) bg_popup_call_poc_act_pane_g4

0xc6d1,	// (0x000592a3) bg_popup_call_poc_act_pane_g5

0xc711,	// (0x000592e3) bg_popup_call_poc_act_pane_g6

0xc6e1,	// (0x000592b3) bg_popup_call_poc_act_pane_g7

0xc719,	// (0x000592eb) bg_popup_call_poc_act_pane_g8

0xa503,	// (0x000570d5) main_usb_pane

0x9c7d,	// (0x0005684f) popup_cale_lunar_info_window

0x24f2,	// (0x0004f0c4) im_reading_pane_t1_ParamLimits

0xaae9,	// (0x000576bb) list_im_pane_ParamLimits

0xaafa,	// (0x000576cc) scroll_pane_cp07_ParamLimits

0xa503,	// (0x000570d5) grid_highlight_pane_cp012

0xa75e,	// (0x00057330) mup_scale_pane_ParamLimits

0xb60d,	// (0x000581df) main_usb_pane_g1_ParamLimits

0xb60d,	// (0x000581df) main_usb_pane_g1

0x3fc9,	// (0x00050b9b) main_usb_pane_g2_ParamLimits

0x3fc9,	// (0x00050b9b) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005c17d) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005c17d) main_usb_pane_g

0x3fdf,	// (0x00050bb1) main_usb_pane_t1_ParamLimits

0x3fdf,	// (0x00050bb1) main_usb_pane_t1

0x3ff1,	// (0x00050bc3) main_usb_pane_t2_ParamLimits

0x3ff1,	// (0x00050bc3) main_usb_pane_t2

0x4003,	// (0x00050bd5) main_usb_pane_t3_ParamLimits

0x4003,	// (0x00050bd5) main_usb_pane_t3

0x4015,	// (0x00050be7) main_usb_pane_t4_ParamLimits

0x4015,	// (0x00050be7) main_usb_pane_t4

0x4027,	// (0x00050bf9) main_usb_pane_t5_ParamLimits

0x4027,	// (0x00050bf9) main_usb_pane_t5

0x4039,	// (0x00050c0b) main_usb_pane_t6_ParamLimits

0x4039,	// (0x00050c0b) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005c182) main_usb_pane_t_ParamLimits

0x33d5,	// (0x0004ffa7) aid_text_placing

0x33de,	// (0x0004ffb0) main_location2_pane_t1_ParamLimits

0x33f0,	// (0x0004ffc2) main_location2_pane_t2_ParamLimits

0x3402,	// (0x0004ffd4) main_location2_pane_t3_ParamLimits

0x3414,	// (0x0004ffe6) main_location2_pane_t4_ParamLimits

0x3414,	// (0x0004ffe6) main_location2_pane_t4

0xf3cf,	// (0x0005bfa1) main_location2_pane_t_ParamLimits

0xa79a,	// (0x0005736c) find_pinb_pane_g2_ParamLimits

0xa79a,	// (0x0005736c) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005bcf1) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005bcf1) find_pinb_pane_g

0xa7a6,	// (0x00057378) find_pinb_pane_t1_ParamLimits

0xa7b8,	// (0x0005738a) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005bcf6) find_pinb_pane_t_ParamLimits

0xa503,	// (0x000570d5) main_call3_pane

0x2b05,	// (0x0004f6d7) cale_month_day_heading_pane_t1_ParamLimits

0x2b8b,	// (0x0004f75d) cale_month_day_heading_pane_t2_ParamLimits

0x2c1c,	// (0x0004f7ee) cale_month_day_heading_pane_t3_ParamLimits

0x2cad,	// (0x0004f87f) cale_month_day_heading_pane_t4_ParamLimits

0x2d42,	// (0x0004f914) cale_month_day_heading_pane_t5_ParamLimits

0x2de3,	// (0x0004f9b5) cale_month_day_heading_pane_t6_ParamLimits

0x2e84,	// (0x0004fa56) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005be78) cale_month_day_heading_pane_t_ParamLimits

0xad44,	// (0x00057916) smil_status_volume_pane

0x3ac4,	// (0x00050696) postcard_address_pane_ParamLimits

0x3ac4,	// (0x00050696) postcard_address_pane

0x3ad6,	// (0x000506a8) postcard_message_pane_ParamLimits

0x3ad6,	// (0x000506a8) postcard_message_pane

0x3fa7,	// (0x00050b79) call2_cli_visual_pane_t1_ParamLimits

0x3fa7,	// (0x00050b79) call2_cli_visual_pane_t1

0x47c7,	// (0x00051399) postcard_message_pane_t1_ParamLimits

0x47c7,	// (0x00051399) postcard_message_pane_t1

0x47b0,	// (0x00051382) postcard_address_pane_t1_ParamLimits

0x47b0,	// (0x00051382) postcard_address_pane_t1

0x479c,	// (0x0005136e) popup_call3_audio_in_window_ParamLimits

0x479c,	// (0x0005136e) popup_call3_audio_in_window

0x4627,	// (0x000511f9) bg_popup_call3_in_pane_ParamLimits

0x4627,	// (0x000511f9) bg_popup_call3_in_pane

0x469d,	// (0x0005126f) popup_call3_audio_in_window_g1_ParamLimits

0x469d,	// (0x0005126f) popup_call3_audio_in_window_g1

0x46bd,	// (0x0005128f) popup_call3_audio_in_window_g2_ParamLimits

0x46bd,	// (0x0005128f) popup_call3_audio_in_window_g2

0x46dd,	// (0x000512af) popup_call3_audio_in_window_g3_ParamLimits

0x46dd,	// (0x000512af) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005c1e4) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005c1e4) popup_call3_audio_in_window_g

0x470e,	// (0x000512e0) popup_call3_audio_in_window_t1_ParamLimits

0x470e,	// (0x000512e0) popup_call3_audio_in_window_t1

0x474c,	// (0x0005131e) popup_call3_audio_in_window_t2_ParamLimits

0x474c,	// (0x0005131e) popup_call3_audio_in_window_t2

0x478a,	// (0x0005135c) popup_call3_audio_in_window_t3_ParamLimits

0x478a,	// (0x0005135c) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005c1ed) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005c1ed) popup_call3_audio_in_window_t

0xa9e8,	// (0x000575ba) bg_popup_call3_rect_pane

0xc671,	// (0x00059243) bg_popup_call3_rect_pane_g1

0xa904,	// (0x000574d6) bg_popup_call3_rect_pane_g2

0xc679,	// (0x0005924b) bg_popup_call3_rect_pane_g3

0xc681,	// (0x00059253) bg_popup_call3_rect_pane_g4

0xc689,	// (0x0005925b) bg_popup_call3_rect_pane_g5

0xc691,	// (0x00059263) bg_popup_call3_rect_pane_g6

0xc699,	// (0x0005926b) bg_popup_call3_rect_pane_g7

0x3716,	// (0x000502e8) mup_visualizer_osc_pane

0xb52f,	// (0x00058101) mup_visualizer_spec_pane

0x4657,	// (0x00051229) call3_video_qcif_pane_ParamLimits

0x4657,	// (0x00051229) call3_video_qcif_pane

0x466a,	// (0x0005123c) call3_video_qcif_uncrop_pane_ParamLimits

0x466a,	// (0x0005123c) call3_video_qcif_uncrop_pane

0x4678,	// (0x0005124a) call3_video_subqcif_pane_ParamLimits

0x4678,	// (0x0005124a) call3_video_subqcif_pane

0x468c,	// (0x0005125e) call3_video_subqcif_uncrop_pane_ParamLimits

0x468c,	// (0x0005125e) call3_video_subqcif_uncrop_pane

0x46fd,	// (0x000512cf) popup_call3_audio_in_window_g4_ParamLimits

0x46fd,	// (0x000512cf) popup_call3_audio_in_window_g4

0x4616,	// (0x000511e8) mup_spec_half_pane

0x461f,	// (0x000511f1) mup_spec_half_pane_cp

0xc8d6,	// (0x000594a8) mup_osc_middle_pane

0xc8df,	// (0x000594b1) mup_visualizer_osc_pane_g1

0x45f6,	// (0x000511c8) mup_spec_bar_pane_ParamLimits

0x45f6,	// (0x000511c8) mup_spec_bar_pane

0xc8c3,	// (0x00059495) mup_spec_bar_pane_g1

0xc8cd,	// (0x0005949f) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1d8) mup_spec_bar_pane_g

0x17f0,	// (0x0004e3c2) aid_cale_week_size_cell_pane_ParamLimits

0x180a,	// (0x0004e3dc) bg_cale_heading_pane_ParamLimits

0xa941,	// (0x00057513) bg_cale_pane_cp01_ParamLimits

0x1822,	// (0x0004e3f4) cale_week_corner_pane_ParamLimits

0x1841,	// (0x0004e413) cale_week_day_heading_pane_ParamLimits

0x185e,	// (0x0004e430) cale_week_scroll_pane_g1_ParamLimits

0x1871,	// (0x0004e443) cale_week_scroll_pane_g2_ParamLimits

0x1889,	// (0x0004e45b) cale_week_scroll_pane_g3_ParamLimits

0x18a1,	// (0x0004e473) cale_week_scroll_pane_g4_ParamLimits

0x18b9,	// (0x0004e48b) cale_week_scroll_pane_g5_ParamLimits

0x18d9,	// (0x0004e4ab) cale_week_scroll_pane_g6_ParamLimits

0x18f9,	// (0x0004e4cb) cale_week_scroll_pane_g7_ParamLimits

0x1919,	// (0x0004e4eb) cale_week_scroll_pane_g8_ParamLimits

0x193d,	// (0x0004e50f) cale_week_scroll_pane_g9_ParamLimits

0x1955,	// (0x0004e527) cale_week_scroll_pane_g10_ParamLimits

0x196d,	// (0x0004e53f) cale_week_scroll_pane_g11_ParamLimits

0x1985,	// (0x0004e557) cale_week_scroll_pane_g12_ParamLimits

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g13_ParamLimits

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g14_ParamLimits

0x199d,	// (0x0004e56f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005bd82) cale_week_scroll_pane_g_ParamLimits

0x19d9,	// (0x0004e5ab) cale_week_time_pane_ParamLimits

0x19fd,	// (0x0004e5cf) grid_cale_week_pane_ParamLimits

0xa95e,	// (0x00057530) listscroll_cale_week_pane_t1

0xa970,	// (0x00057542) scroll_pane_cp08_ParamLimits

0x269b,	// (0x0004f26d) cale_month_corner_pane_ParamLimits

0xad1a,	// (0x000578ec) cale_month_pane_t1

0x2aa3,	// (0x0004f675) cale_month_week_pane_ParamLimits

0x3231,	// (0x0004fe03) popup_call_status_window_g1_ParamLimits

0x3245,	// (0x0004fe17) popup_call_status_window_g2_ParamLimits

0x3259,	// (0x0004fe2b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005bf28) popup_call_status_window_g_ParamLimits

0xb0be,	// (0x00057c90) aid_call2_pane

0x03f8,	// (0x0004cfca) msg_header_pane_g1

0x3ac4,	// (0x00050696) postcard_address2_pane_ParamLimits

0x3ac4,	// (0x00050696) postcard_address2_pane

0x3ad6,	// (0x000506a8) postcard_message2_pane_ParamLimits

0x3ad6,	// (0x000506a8) postcard_message2_pane

0x45a8,	// (0x0005117a) message2_row_pane_ParamLimits

0x45a8,	// (0x0005117a) message2_row_pane

0x45c4,	// (0x00051196) address2_row_pane_ParamLimits

0x45c4,	// (0x00051196) address2_row_pane

0xc891,	// (0x00059463) postcard_message2_row_pane_g1

0xc899,	// (0x0005946b) postcard_message2_row_pane_t1

0xc891,	// (0x00059463) address2_row_pane_g1

0xc899,	// (0x0005946b) address2_row_pane_t1

0x1df0,	// (0x0004e9c2) aid_size_cell_vorec

0xa503,	// (0x000570d5) main_rss_pane

0x45d7,	// (0x000511a9) rss_list_single_pane_ParamLimits

0x45d7,	// (0x000511a9) rss_list_single_pane

0xc8a7,	// (0x00059479) rss_list_single_pane_t1

0xc8b5,	// (0x00059487) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005c1d3) rss_list_single_pane_t

0xa503,	// (0x000570d5) main_camera2_pane

0xa503,	// (0x000570d5) main_video2_pane

0x4840,	// (0x00051412) cams_zoom_pane_cp2_ParamLimits

0x4840,	// (0x00051412) cams_zoom_pane_cp2

0x4860,	// (0x00051432) image2_vga_pane_ParamLimits

0x4860,	// (0x00051432) image2_vga_pane

0x48b1,	// (0x00051483) main_camera2_pane_g1_ParamLimits

0x48b1,	// (0x00051483) main_camera2_pane_g1

0x48d1,	// (0x000514a3) main_camera2_pane_g2_ParamLimits

0x48d1,	// (0x000514a3) main_camera2_pane_g2

0x48f1,	// (0x000514c3) main_camera2_pane_g3_ParamLimits

0x48f1,	// (0x000514c3) main_camera2_pane_g3

0x4911,	// (0x000514e3) main_camera2_pane_g4_ParamLimits

0x4911,	// (0x000514e3) main_camera2_pane_g4

0x4931,	// (0x00051503) main_camera2_pane_g5_ParamLimits

0x4931,	// (0x00051503) main_camera2_pane_g5

0x4951,	// (0x00051523) main_camera2_pane_g6_ParamLimits

0x4951,	// (0x00051523) main_camera2_pane_g6

0x4971,	// (0x00051543) main_camera2_pane_g7_ParamLimits

0x4971,	// (0x00051543) main_camera2_pane_g7

0x4991,	// (0x00051563) main_camera2_pane_g8_ParamLimits

0x4991,	// (0x00051563) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005c1f4) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005c1f4) main_camera2_pane_g

0x49d1,	// (0x000515a3) main_camera2_pane_t1_ParamLimits

0x49d1,	// (0x000515a3) main_camera2_pane_t1

0x4a06,	// (0x000515d8) main_camera2_pane_t2_ParamLimits

0x4a06,	// (0x000515d8) main_camera2_pane_t2

0x4a2c,	// (0x000515fe) main_camera2_pane_t3_ParamLimits

0x4a2c,	// (0x000515fe) main_camera2_pane_t3

0x4a8a,	// (0x0005165c) main_camera2_pane_t4_ParamLimits

0x4a8a,	// (0x0005165c) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005c207) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005c207) main_camera2_pane_t

0x4b1c,	// (0x000516ee) cams_zoom_pane_cp4_ParamLimits

0x4b1c,	// (0x000516ee) cams_zoom_pane_cp4

0x4b32,	// (0x00051704) image2_cif_pane_ParamLimits

0x4b32,	// (0x00051704) image2_cif_pane

0x4b5d,	// (0x0005172f) image2_subqcif_pane_ParamLimits

0x4b5d,	// (0x0005172f) image2_subqcif_pane

0x4b77,	// (0x00051749) main_video2_pane_g1_ParamLimits

0x4b77,	// (0x00051749) main_video2_pane_g1

0x4b91,	// (0x00051763) main_video2_pane_g2_ParamLimits

0x4b91,	// (0x00051763) main_video2_pane_g2

0x4ba7,	// (0x00051779) main_video2_pane_g3_ParamLimits

0x4ba7,	// (0x00051779) main_video2_pane_g3

0x4bbd,	// (0x0005178f) main_video2_pane_g4_ParamLimits

0x4bbd,	// (0x0005178f) main_video2_pane_g4

0x4bd3,	// (0x000517a5) main_video2_pane_g5_ParamLimits

0x4bd3,	// (0x000517a5) main_video2_pane_g5

0x4be9,	// (0x000517bb) main_video2_pane_g6_ParamLimits

0x4be9,	// (0x000517bb) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005c216) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005c216) main_video2_pane_g

0x4c03,	// (0x000517d5) main_video2_pane_t1_ParamLimits

0x4c03,	// (0x000517d5) main_video2_pane_t1

0x4c27,	// (0x000517f9) main_video2_pane_t2_ParamLimits

0x4c27,	// (0x000517f9) main_video2_pane_t2

0x4c75,	// (0x00051847) main_video2_pane_t3_ParamLimits

0x4c75,	// (0x00051847) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005c223) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005c223) main_video2_pane_t

0x40f4,	// (0x00050cc6) call_muted_g2

0x0001,

0xf5f3,	// (0x0005c1c5) call_muted_g

0xa503,	// (0x000570d5) main_mup2_pane

0x4cb9,	// (0x0005188b) main_mup2_pane_g1_ParamLimits

0x4cb9,	// (0x0005188b) main_mup2_pane_g1

0x4cc5,	// (0x00051897) main_mup2_pane_g2_ParamLimits

0x4cc5,	// (0x00051897) main_mup2_pane_g2

0x9d44,	// (0x00056916) main_mup_pane_g13_cp1

0x9d4c,	// (0x0005691e) mup_volume_pane_cp1

0x4ce1,	// (0x000518b3) main_mup2_pane_g4_ParamLimits

0x4ce1,	// (0x000518b3) main_mup2_pane_g4

0x4cf3,	// (0x000518c5) main_mup2_pane_g5_ParamLimits

0x4cf3,	// (0x000518c5) main_mup2_pane_g5

0x4d05,	// (0x000518d7) main_mup2_pane_g6_ParamLimits

0x4d05,	// (0x000518d7) main_mup2_pane_g6

0x4d17,	// (0x000518e9) main_mup2_pane_g7_ParamLimits

0x4d17,	// (0x000518e9) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005c22a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005c22a) main_mup2_pane_g

0x4d2f,	// (0x00051901) main_mup2_pane_t1_ParamLimits

0x4d2f,	// (0x00051901) main_mup2_pane_t1

0x4d45,	// (0x00051917) main_mup2_pane_t2_ParamLimits

0x4d45,	// (0x00051917) main_mup2_pane_t2

0x4d5b,	// (0x0005192d) main_mup2_pane_t3_ParamLimits

0x4d5b,	// (0x0005192d) main_mup2_pane_t3

0x4d71,	// (0x00051943) main_mup2_pane_t4_ParamLimits

0x4d71,	// (0x00051943) main_mup2_pane_t4

0x4d89,	// (0x0005195b) main_mup2_pane_t5_ParamLimits

0x4d89,	// (0x0005195b) main_mup2_pane_t5

0x4da1,	// (0x00051973) main_mup2_pane_t6_ParamLimits

0x4da1,	// (0x00051973) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005c239) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005c239) main_mup2_pane_t

0x4dd1,	// (0x000519a3) mup2_visualizer_pane_ParamLimits

0x4dd1,	// (0x000519a3) mup2_visualizer_pane

0x4dff,	// (0x000519d1) mup_progress_pane_cp_ParamLimits

0x4dff,	// (0x000519d1) mup_progress_pane_cp

0x9d2f,	// (0x00056901) mup_volume_pane_cp_ParamLimits

0x9d2f,	// (0x00056901) mup_volume_pane_cp

0x4e13,	// (0x000519e5) mup2_visualizer_pane_g1_ParamLimits

0x4e13,	// (0x000519e5) mup2_visualizer_pane_g1

0xc916,	// (0x000594e8) mup2_visualizer_pane_g2_ParamLimits

0xc916,	// (0x000594e8) mup2_visualizer_pane_g2

0x4e2a,	// (0x000519fc) mup2_visualizer_pane_g3_ParamLimits

0x4e2a,	// (0x000519fc) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005c246) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005c246) mup2_visualizer_pane_g

0xb756,	// (0x00058328) aid_size_cell_fmradio

0x42a6,	// (0x00050e78) aid_height_parent_landcape

0xab78,	// (0x0005774a) wml_content_pane_cp

0xab80,	// (0x00057752) wml_tabs_pane

0xab89,	// (0x0005775b) popup_wml_miniature_window

0xab91,	// (0x00057763) scroll_pane_cp021

0xaba5,	// (0x00057777) wml_content_pane_comp8

0xa503,	// (0x000570d5) bg_popup_sub_pane_cp05

0xc934,	// (0x00059506) popup_wml_miniature_window_g1

0xc93c,	// (0x0005950e) wml_miniature_view_pane

0x4e36,	// (0x00051a08) aid_size_wml_view

0x4e3e,	// (0x00051a10) wml_miniature_view_pane_g1

0x4e47,	// (0x00051a19) wml_miniature_view_pane_g2

0x4e50,	// (0x00051a22) wml_miniature_view_pane_g3

0x4e58,	// (0x00051a2a) wml_miniature_view_pane_g4

0x4e60,	// (0x00051a32) wml_miniature_view_pane_g5

0x4e68,	// (0x00051a3a) wml_miniature_view_pane_g6

0x4e70,	// (0x00051a42) wml_miniature_view_pane_g7

0x4e78,	// (0x00051a4a) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005c24d) wml_miniature_view_pane_g

0xc944,	// (0x00059516) background_graphic_ParamLimits

0xc944,	// (0x00059516) background_graphic

0xc950,	// (0x00059522) wml_tabs_2_pane

0xc959,	// (0x0005952b) wml_tabs_3_pane_ParamLimits

0xc959,	// (0x0005952b) wml_tabs_3_pane

0xc96b,	// (0x0005953d) wml_tabs_4_pane_ParamLimits

0xc96b,	// (0x0005953d) wml_tabs_4_pane

0xc981,	// (0x00059553) wml_tabs_5_pane_ParamLimits

0xc981,	// (0x00059553) wml_tabs_5_pane

0xc99b,	// (0x0005956d) wml_tabs_pane_g2_ParamLimits

0xc99b,	// (0x0005956d) wml_tabs_pane_g2

0xc9af,	// (0x00059581) wml_tabs_pane_g3_ParamLimits

0xc9af,	// (0x00059581) wml_tabs_pane_g3

0x4e80,	// (0x00051a52) wml_tabs_2_active_pane_ParamLimits

0x4e80,	// (0x00051a52) wml_tabs_2_active_pane

0x4e94,	// (0x00051a66) wml_tabs_2_passive_pane_ParamLimits

0x4e94,	// (0x00051a66) wml_tabs_2_passive_pane

0x4ea8,	// (0x00051a7a) wml_tabs_3_active_pane_cp_ParamLimits

0x4ea8,	// (0x00051a7a) wml_tabs_3_active_pane_cp

0x4ebd,	// (0x00051a8f) wml_tabs_3_passive_pane_ParamLimits

0x4ebd,	// (0x00051a8f) wml_tabs_3_passive_pane

0x4ed0,	// (0x00051aa2) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ed0,	// (0x00051aa2) wml_tabs_3_passive_pane_cp

0x4ee7,	// (0x00051ab9) tabs_4_active_pane

0x4eef,	// (0x00051ac1) tabs_4_passive_pane

0x4ef9,	// (0x00051acb) tabs_4_passive_pane_cp

0x4f01,	// (0x00051ad3) tabs_4_passive_pane_cp2

0x3fc1,	// (0x00050b93) aid_height_text

0x36ec,	// (0x000502be) mup_volume_cont_pane_ParamLimits

0x36ec,	// (0x000502be) mup_volume_cont_pane

0x13dc,	// (0x0004dfae) aid_size_cell_pinb

0x13e6,	// (0x0004dfb8) aid_size_list_pinb

0x4deb,	// (0x000519bd) mup2_volume_cont_pane_ParamLimits

0x4deb,	// (0x000519bd) mup2_volume_cont_pane

0x9d1b,	// (0x000568ed) mup2_volume_cont_pane_g1_ParamLimits

0x9d1b,	// (0x000568ed) mup2_volume_cont_pane_g1

0x108f,	// (0x0004dc61) aid_size_cell_touch_ParamLimits

0x108f,	// (0x0004dc61) aid_size_cell_touch

0x12cc,	// (0x0004de9e) touch_pane_ParamLimits

0x12cc,	// (0x0004de9e) touch_pane

0x9728,	// (0x000562fa) main_rss2_pane

0xc9cc,	// (0x0005959e) listscroll_rss2_pane

0xc9d5,	// (0x000595a7) rss2_navigation_pane

0xc9dd,	// (0x000595af) list_rss2_pane

0xb229,	// (0x00057dfb) scroll_pane_cp22

0xc9e5,	// (0x000595b7) rss2_navigation_pane_g1

0xc9ee,	// (0x000595c0) rss2_navigation_pane_g2

0xc9f6,	// (0x000595c8) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005c25e) rss2_navigation_pane_g

0xc9fe,	// (0x000595d0) rss2_navigation_pane_t1

0x4f0b,	// (0x00051add) rss2_list_single_pane_ParamLimits

0x4f0b,	// (0x00051add) rss2_list_single_pane

0xca0c,	// (0x000595de) rss2_list_single_pane_t2

0xca1a,	// (0x000595ec) rss2_list_single_pane_t3_ParamLimits

0xca1a,	// (0x000595ec) rss2_list_single_pane_t3

0xca37,	// (0x00059609) rss2_list_single_pane_t4

0x3116,	// (0x0004fce8) smil_status_pane_g1

0xb155,	// (0x00057d27) main_image2_pane_ParamLimits

0xb155,	// (0x00057d27) main_image2_pane

0x49b1,	// (0x00051583) main_camera2_pane_g9_ParamLimits

0x49b1,	// (0x00051583) main_camera2_pane_g9

0x4adf,	// (0x000516b1) main_camera2_pane_t5_ParamLimits

0x4adf,	// (0x000516b1) main_camera2_pane_t5

0x9ceb,	// (0x000568bd) main_camera2_pane_t6_ParamLimits

0x9ceb,	// (0x000568bd) main_camera2_pane_t6

0x4f20,	// (0x00051af2) main_image2_pane_g1_ParamLimits

0x4f20,	// (0x00051af2) main_image2_pane_g1

0x3cfd,	// (0x000508cf) smil2_video_pane_ParamLimits

0x3cfd,	// (0x000508cf) smil2_video_pane

0x10c7,	// (0x0004dc99) aid_zoom_text_primary_cp

0x9786,	// (0x00056358) popup_preview_fixed_window

0xaae1,	// (0x000576b3) im_reading_pane_g1

0x4828,	// (0x000513fa) cams2_bc_adjust_pane_cp_ParamLimits

0x4828,	// (0x000513fa) cams2_bc_adjust_pane_cp

0x4b0e,	// (0x000516e0) cams2_bc_adjust_pane_ParamLimits

0x4b0e,	// (0x000516e0) cams2_bc_adjust_pane

0x9d54,	// (0x00056926) cams2_bc_adjust_pane_g1

0x9d5c,	// (0x0005692e) cams2_slider_pane

0x9d65,	// (0x00056937) cams2_slider_pane_g1

0x9d6e,	// (0x00056940) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005c265) cams2_slider_pane_g

0x14d4,	// (0x0004e0a6) calc_display_pane_ParamLimits

0x14fc,	// (0x0004e0ce) calc_paper_pane_ParamLimits

0x151f,	// (0x0004e0f1) grid_calc_pane_ParamLimits

0x9c04,	// (0x000567d6) popup_clock_digital_window_t1_ParamLimits

0xb6f3,	// (0x000582c5) main_image_pane_t1

0x14b6,	// (0x0004e088) aid_size_cell_calc_ParamLimits

0x14b6,	// (0x0004e088) aid_size_cell_calc

0x42ec,	// (0x00050ebe) popup_blid_sat_info2_window_ParamLimits

0x42ec,	// (0x00050ebe) popup_blid_sat_info2_window

0xca4d,	// (0x0005961f) aid_size_cell_blid

0xca55,	// (0x00059627) bg_popup_window_pane_cp07

0xca78,	// (0x0005964a) grid_popup_blid_pane

0xca82,	// (0x00059654) heading_pane_cp05_ParamLimits

0xca82,	// (0x00059654) heading_pane_cp05

0xcb4c,	// (0x0005971e) cell_popup_blid_pane_ParamLimits

0xcb4c,	// (0x0005971e) cell_popup_blid_pane

0xcb70,	// (0x00059742) cell_popup_blid_pane_g1

0xcb78,	// (0x0005974a) cell_popup_blid_pane_t1

0x4dbb,	// (0x0005198d) mup2_indicator_pane_ParamLimits

0x4dbb,	// (0x0005198d) mup2_indicator_pane

0xa9e8,	// (0x000575ba) mup2_visualizer_osc_pane

0xc922,	// (0x000594f4) mup2_visualizer_spec_pane_ParamLimits

0xc922,	// (0x000594f4) mup2_visualizer_spec_pane

0x4f36,	// (0x00051b08) mup2_spec_half_pane

0x4f3f,	// (0x00051b11) mup2_spec_half_pane_cp

0x4f47,	// (0x00051b19) mup2_spec_bar_pane_ParamLimits

0x4f47,	// (0x00051b19) mup2_spec_bar_pane

0xc8c3,	// (0x00059495) mup2_spec_bar_pane_g1

0xc8cd,	// (0x0005949f) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1d8) mup2_spec_bar_pane_g

0x4f67,	// (0x00051b39) mup2_osc_middle_pane

0xc8df,	// (0x000594b1) mup2_visualizer_osc_pane_g1

0x97b0,	// (0x00056382) popup_number_entry_window_t1_ParamLimits

0x97c3,	// (0x00056395) popup_number_entry_window_t2_ParamLimits

0x97d5,	// (0x000563a7) popup_number_entry_window_t3_ParamLimits

0x131e,	// (0x0004def0) popup_number_entry_window_t5_ParamLimits

0x131e,	// (0x0004def0) popup_number_entry_window_t5

0xf0ca,	// (0x0005bc9c) popup_number_entry_window_t_ParamLimits

0x97e7,	// (0x000563b9) text_title_cp2_ParamLimits

0x9c43,	// (0x00056815) aid_hotspot_pointer_text2_pane

0x9c69,	// (0x0005683b) main_viewer_pane_g9_ParamLimits

0x9c69,	// (0x0005683b) main_viewer_pane_g9

0xad1a,	// (0x000578ec) cale_month_pane_t1_ParamLimits

0xad57,	// (0x00057929) bg_cale_pane_ParamLimits

0xad6f,	// (0x00057941) list_cale_pane_ParamLimits

0xad80,	// (0x00057952) listscroll_cale_day_pane_t1

0xad92,	// (0x00057964) scroll_pane_cp09_ParamLimits

0x371e,	// (0x000502f0) main_mup_eq_pane_t1_ParamLimits

0x371e,	// (0x000502f0) main_mup_eq_pane_t1

0x3738,	// (0x0005030a) main_mup_eq_pane_t2_ParamLimits

0x3738,	// (0x0005030a) main_mup_eq_pane_t2

0x3752,	// (0x00050324) main_mup_eq_pane_t3_ParamLimits

0x3752,	// (0x00050324) main_mup_eq_pane_t3

0x376e,	// (0x00050340) main_mup_eq_pane_t4_ParamLimits

0x376e,	// (0x00050340) main_mup_eq_pane_t4

0x378a,	// (0x0005035c) main_mup_eq_pane_t5_ParamLimits

0x378a,	// (0x0005035c) main_mup_eq_pane_t5

0x37a6,	// (0x00050378) main_mup_eq_pane_t6_ParamLimits

0x37a6,	// (0x00050378) main_mup_eq_pane_t6

0x37ba,	// (0x0005038c) main_mup_eq_pane_t7_ParamLimits

0x37ba,	// (0x0005038c) main_mup_eq_pane_t7

0x37ce,	// (0x000503a0) main_mup_eq_pane_t8_ParamLimits

0x37ce,	// (0x000503a0) main_mup_eq_pane_t8

0x37e2,	// (0x000503b4) main_mup_eq_pane_t9_ParamLimits

0x37e2,	// (0x000503b4) main_mup_eq_pane_t9

0x37fc,	// (0x000503ce) main_mup_eq_pane_t10_ParamLimits

0x37fc,	// (0x000503ce) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c027) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c027) main_mup_eq_pane_t

0x38ab,	// (0x0005047d) mup_equalizer_pane_cp5_ParamLimits

0x38bf,	// (0x00050491) mup_equalizer_pane_cp6_ParamLimits

0x38d3,	// (0x000504a5) mup_equalizer_pane_cp7_ParamLimits

0x9728,	// (0x000562fa) main_gallery_pane

0xc8e8,	// (0x000594ba) smil2_volume_pane

0xc8f0,	// (0x000594c2) smil_status_volume_pane_g1_ParamLimits

0xc903,	// (0x000594d5) smil_status_volume_pane_g2_ParamLimits

0x9cc9,	// (0x0005689b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005c1dd) smil_status_volume_pane_g_ParamLimits

0xca55,	// (0x00059627) bg_popup_window_pane_cp07_ParamLimits

0xca63,	// (0x00059635) blid_firmament_pane

0x4f70,	// (0x00051b42) aid_size_cell_gallery_ParamLimits

0x4f70,	// (0x00051b42) aid_size_cell_gallery

0x4f86,	// (0x00051b58) grid_gallery_pane_ParamLimits

0x4f86,	// (0x00051b58) grid_gallery_pane

0x4f9f,	// (0x00051b71) cell_gallery_pane_ParamLimits

0x4f9f,	// (0x00051b71) cell_gallery_pane

0xcb9b,	// (0x0005976d) bg_cell_gallery_focus_pane_ParamLimits

0xcb9b,	// (0x0005976d) bg_cell_gallery_focus_pane

0xcbad,	// (0x0005977f) cell_gallery_pane_g1_ParamLimits

0xcbad,	// (0x0005977f) cell_gallery_pane_g1

0x4fe8,	// (0x00051bba) cell_gallery_pane_g2_ParamLimits

0x4fe8,	// (0x00051bba) cell_gallery_pane_g2

0x4ff5,	// (0x00051bc7) cell_gallery_pane_g3_ParamLimits

0x4ff5,	// (0x00051bc7) cell_gallery_pane_g3

0xcbb9,	// (0x0005978b) cell_gallery_pane_g4_ParamLimits

0xcbb9,	// (0x0005978b) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005c28b) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005c28b) cell_gallery_pane_g

0xcbc5,	// (0x00059797) bg_cell_gallery_focus_pane_g1

0xcbcd,	// (0x0005979f) bg_cell_gallery_focus_pane_g2

0xcbd5,	// (0x000597a7) bg_cell_gallery_focus_pane_g3

0xcbdd,	// (0x000597af) bg_cell_gallery_focus_pane_g4

0xcbe5,	// (0x000597b7) bg_cell_gallery_focus_pane_g5

0xcbed,	// (0x000597bf) bg_cell_gallery_focus_pane_g6

0xcbf5,	// (0x000597c7) bg_cell_gallery_focus_pane_g7

0xcbfd,	// (0x000597cf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005c294) bg_cell_gallery_focus_pane_g

0xcc05,	// (0x000597d7) aid_firma_cardinal

0xcc19,	// (0x000597eb) blid_firmament_pane_t1

0xcc30,	// (0x00059802) blid_firmament_pane_t2

0xcc47,	// (0x00059819) blid_firmament_pane_t3

0xcc5e,	// (0x00059830) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005c2a5) blid_firmament_pane_t

0xcc75,	// (0x00059847) blid_sat_info_pane

0xcc85,	// (0x00059857) blid_sat_info_pane_g1

0xcc85,	// (0x00059857) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ae) blid_sat_info_pane_g

0xcc8f,	// (0x00059861) blid_sat_info_pane_t1

0xcc9d,	// (0x0005986f) smil2_volume_content_pane

0xcca6,	// (0x00059878) smil2_volume_pane_g1

0xcb86,	// (0x00059758) smil2_volume_content_pane_g1

0xccae,	// (0x00059880) smil2_volume_content_pane_g2

0xccb7,	// (0x00059889) smil2_volume_content_pane_g3

0xccc0,	// (0x00059892) smil2_volume_content_pane_g4

0xccc9,	// (0x0005989b) smil2_volume_content_pane_g5

0xccd2,	// (0x000598a4) smil2_volume_content_pane_g6

0xccdb,	// (0x000598ad) smil2_volume_content_pane_g7

0xcce4,	// (0x000598b6) smil2_volume_content_pane_g8

0xcced,	// (0x000598bf) smil2_volume_content_pane_g9

0xccf6,	// (0x000598c8) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005c2b3) smil2_volume_content_pane_g

0x1ab1,	// (0x0004e683) cale_week_day_heading_pane_t1_ParamLimits

0x1af6,	// (0x0004e6c8) cale_week_day_heading_pane_t2_ParamLimits

0x1b40,	// (0x0004e712) cale_week_day_heading_pane_t3_ParamLimits

0x1b8a,	// (0x0004e75c) cale_week_day_heading_pane_t4_ParamLimits

0x1bd4,	// (0x0004e7a6) cale_week_day_heading_pane_t5_ParamLimits

0x1c26,	// (0x0004e7f8) cale_week_day_heading_pane_t6_ParamLimits

0x1c78,	// (0x0004e84a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005bda3) cale_week_day_heading_pane_t_ParamLimits

0xa98d,	// (0x0005755f) bg_cale_side_pane_ParamLimits

0x1cbd,	// (0x0004e88f) cale_week_time_pane_t1_ParamLimits

0x1cd7,	// (0x0004e8a9) cale_week_time_pane_t2_ParamLimits

0x1cf1,	// (0x0004e8c3) cale_week_time_pane_t3_ParamLimits

0x1d0b,	// (0x0004e8dd) cale_week_time_pane_t4_ParamLimits

0x1d25,	// (0x0004e8f7) cale_week_time_pane_t5_ParamLimits

0x1d3f,	// (0x0004e911) cale_week_time_pane_t6_ParamLimits

0x1d59,	// (0x0004e92b) cale_week_time_pane_t7_ParamLimits

0x1d73,	// (0x0004e945) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005bdb2) cale_week_time_pane_t_ParamLimits

0x1d93,	// (0x0004e965) cell_cale_week_pane_g2_ParamLimits

0xa98d,	// (0x0005755f) bg_cale_side_pane_cp01_ParamLimits

0x2f2d,	// (0x0004faff) cale_month_week_pane_t1_ParamLimits

0x2f46,	// (0x0004fb18) cale_month_week_pane_t2_ParamLimits

0x2f5f,	// (0x0004fb31) cale_month_week_pane_t3_ParamLimits

0x2f78,	// (0x0004fb4a) cale_month_week_pane_t4_ParamLimits

0x2f91,	// (0x0004fb63) cale_month_week_pane_t5_ParamLimits

0x2faa,	// (0x0004fb7c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005be87) cale_month_week_pane_t_ParamLimits

0x9b80,	// (0x00056752) cell_cale_month_pane_g1_ParamLimits

0x9728,	// (0x000562fa) main_cale_event_viewer_pane

0x9728,	// (0x000562fa) listscroll_cale_event_viewer_pane

0xccff,	// (0x000598d1) list_cale_ev_pane

0xcd07,	// (0x000598d9) scroll_pane_cp023

0xcd13,	// (0x000598e5) field_cale_ev_pane_ParamLimits

0xcd13,	// (0x000598e5) field_cale_ev_pane

0xcd31,	// (0x00059903) field_cale_ev_content_pane_ParamLimits

0xcd31,	// (0x00059903) field_cale_ev_content_pane

0xcd3d,	// (0x0005990f) field_cale_ev_pane_g1_ParamLimits

0xcd3d,	// (0x0005990f) field_cale_ev_pane_g1

0xcd49,	// (0x0005991b) field_cale_ev_pane_g2_ParamLimits

0xcd49,	// (0x0005991b) field_cale_ev_pane_g2

0xcd61,	// (0x00059933) field_cale_ev_pane_g3_ParamLimits

0xcd61,	// (0x00059933) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005c2c8) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005c2c8) field_cale_ev_pane_g

0xcd79,	// (0x0005994b) field_cale_ev_pane_t1_ParamLimits

0xcd79,	// (0x0005994b) field_cale_ev_pane_t1

0xcd90,	// (0x00059962) field_cale_ev_content_pane_t1_ParamLimits

0xcd90,	// (0x00059962) field_cale_ev_content_pane_t1

0xb5d9,	// (0x000581ab) bg_button_pane_cp01

0x17de,	// (0x0004e3b0) listscroll_cale_week_pane_ParamLimits

0xa938,	// (0x0005750a) popup_toolbar_window_cp01

0xa95e,	// (0x00057530) listscroll_cale_week_pane_t1_ParamLimits

0x17de,	// (0x0004e3b0) listscroll_cale_day_pane_ParamLimits

0xa938,	// (0x0005750a) popup_toolbar_window_cp02

0xad80,	// (0x00057952) listscroll_cale_day_pane_t1_ParamLimits

0x17de,	// (0x0004e3b0) main_cale_month_pane_ParamLimits

0x9cb4,	// (0x00056886) popup_toolbar_window_cp03_ParamLimits

0x9cb4,	// (0x00056886) popup_toolbar_window_cp03

0x3bc5,	// (0x00050797) main_image_pane_g2_ParamLimits

0x3bc5,	// (0x00050797) main_image_pane_g2

0x3bd6,	// (0x000507a8) main_image_pane_g3_ParamLimits

0x3bd6,	// (0x000507a8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c0b9) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c0b9) main_image_pane_g

0xb6f3,	// (0x000582c5) main_image_pane_t1_ParamLimits

0x3be7,	// (0x000507b9) main_image_pane_t2_ParamLimits

0x3be7,	// (0x000507b9) main_image_pane_t2

0x3bf9,	// (0x000507cb) main_image_pane_t3_ParamLimits

0x3bf9,	// (0x000507cb) main_image_pane_t3

0x3c21,	// (0x000507f3) main_image_pane_t4_ParamLimits

0x3c21,	// (0x000507f3) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c0c0) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c0c0) main_image_pane_t

0x3c41,	// (0x00050813) popup_image_details_window_cp01

0x3c4b,	// (0x0005081d) popup_toobar_trans_pane_cp01_ParamLimits

0x3c4b,	// (0x0005081d) popup_toobar_trans_pane_cp01

0x43cb,	// (0x00050f9d) popup_image_details_window_ParamLimits

0x43cb,	// (0x00050f9d) popup_image_details_window

0x9c87,	// (0x00056859) popup_image_focus_window

0x47e2,	// (0x000513b4) camera2_autofocus_pane_ParamLimits

0x47e2,	// (0x000513b4) camera2_autofocus_pane

0x9728,	// (0x000562fa) bg_popup_sub_pane_cp06

0xcdae,	// (0x00059980) popup_image_focus_window_g1

0xcdb6,	// (0x00059988) popup_image_focus_window_g2

0xcdbe,	// (0x00059990) popup_image_focus_window_g3

0xcdc6,	// (0x00059998) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005c2cf) popup_image_focus_window_g

0xcdce,	// (0x000599a0) popup_image_focus_window_t1

0xcddc,	// (0x000599ae) popup_image_focus_window_t2

0xcdec,	// (0x000599be) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005c2d8) popup_image_focus_window_t

0xcdfa,	// (0x000599cc) camera2_autofocus_pane_g1

0xb155,	// (0x00057d27) bg_tb_trans_pane_cp01

0xce08,	// (0x000599da) popup_image_details_window_g1

0xce1b,	// (0x000599ed) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005c2ea) popup_image_details_window_g

0xce44,	// (0x00059a16) popup_image_details_window_t1

0xce56,	// (0x00059a28) popup_image_details_window_t2

0xce6f,	// (0x00059a41) popup_image_details_window_t3

0xce83,	// (0x00059a55) popup_image_details_window_t4

0xce9e,	// (0x00059a70) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005c2f1) popup_image_details_window_t

0xa80f,	// (0x000573e1) bg_calc_paper_pane_ParamLimits

0x9728,	// (0x000562fa) grid_highlight_pane_cp013

0x9af0,	// (0x000566c2) list_calc_pane_ParamLimits

0x9b02,	// (0x000566d4) scroll_pane_cp024

0xa823,	// (0x000573f5) bg_calc_display_pane_ParamLimits

0x161d,	// (0x0004e1ef) calc_display_pane_t1_ParamLimits

0x162f,	// (0x0004e201) calc_display_pane_t2_ParamLimits

0x9b0a,	// (0x000566dc) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005bd23) calc_display_pane_t_ParamLimits

0x16e9,	// (0x0004e2bb) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005bd40) cell_calc_pane_g

0x16f2,	// (0x0004e2c4) cell_calc_pane_t1

0xa882,	// (0x00057454) grid_highlight_pane_cp02_ParamLimits

0xa898,	// (0x0005746a) toolbar_button_pane_cp01_ParamLimits

0xa898,	// (0x0005746a) toolbar_button_pane_cp01

0xb738,	// (0x0005830a) temp_image_control_pane_ParamLimits

0xb738,	// (0x0005830a) temp_image_control_pane

0xb155,	// (0x00057d27) main_mp3_pane

0xceb8,	// (0x00059a8a) temp_image_control_pane_g1_ParamLimits

0xceb8,	// (0x00059a8a) temp_image_control_pane_g1

0xcec6,	// (0x00059a98) temp_image_control_pane_g2_ParamLimits

0xcec6,	// (0x00059a98) temp_image_control_pane_g2

0xced8,	// (0x00059aaa) temp_image_control_pane_g3_ParamLimits

0xced8,	// (0x00059aaa) temp_image_control_pane_g3

0x5032,	// (0x00051c04) temp_image_control_pane_g4_ParamLimits

0x5032,	// (0x00051c04) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005c2fc) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005c2fc) temp_image_control_pane_g

0xceb8,	// (0x00059a8a) main_mp3_pane_g1

0x5045,	// (0x00051c17) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005c305) main_mp3_pane_g

0xcf1b,	// (0x00059aed) main_mp3_pane_t1

0xa9f0,	// (0x000575c2) main_camera_pane_g8_ParamLimits

0xa9f0,	// (0x000575c2) main_camera_pane_g8

0x208d,	// (0x0004ec5f) main_video_pane_g7_ParamLimits

0x208d,	// (0x0004ec5f) main_video_pane_g7

0x9d09,	// (0x000568db) main_camera2_pane_t7_ParamLimits

0x9d09,	// (0x000568db) main_camera2_pane_t7

0xab38,	// (0x0005770a) scroll_pane_cp025_ParamLimits

0xab38,	// (0x0005770a) scroll_pane_cp025

0xab4c,	// (0x0005771e) scroll_pane_cp026_ParamLimits

0xab4c,	// (0x0005771e) scroll_pane_cp026

0xab5b,	// (0x0005772d) wml_content_pane_ParamLimits

0x9728,	// (0x000562fa) main_touch_calib_pane

0x5119,	// (0x00051ceb) main_touch_calib_pane_g1

0x512b,	// (0x00051cfd) main_touch_calib_pane_g2

0x513d,	// (0x00051d0f) main_touch_calib_pane_g3

0x514f,	// (0x00051d21) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005c323) main_touch_calib_pane_g

0x5161,	// (0x00051d33) main_touch_calib_pane_t1

0x517b,	// (0x00051d4d) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005c32c) main_touch_calib_pane_t

0xb305,	// (0x00057ed7) mup_progress_pane_cp02

0xb33a,	// (0x00057f0c) navi_pane_g1

0xb3f5,	// (0x00057fc7) navi_pane_mp_t3

0xb155,	// (0x00057d27) main_mp3_pane_ParamLimits

0x4550,	// (0x00051122) navi_pane_ParamLimits

0xceb8,	// (0x00059a8a) main_mp3_pane_g1_ParamLimits

0x5045,	// (0x00051c17) main_mp3_pane_g2_ParamLimits

0x5053,	// (0x00051c25) main_mp3_pane_g3_ParamLimits

0x5053,	// (0x00051c25) main_mp3_pane_g3

0x5061,	// (0x00051c33) main_mp3_pane_g4_ParamLimits

0x5061,	// (0x00051c33) main_mp3_pane_g4

0xcee8,	// (0x00059aba) main_mp3_pane_g5_ParamLimits

0xcee8,	// (0x00059aba) main_mp3_pane_g5

0xcef6,	// (0x00059ac8) main_mp3_pane_g6_ParamLimits

0xcef6,	// (0x00059ac8) main_mp3_pane_g6

0xcf03,	// (0x00059ad5) main_mp3_pane_g7_ParamLimits

0xcf03,	// (0x00059ad5) main_mp3_pane_g7

0xcf0f,	// (0x00059ae1) main_mp3_pane_g8_ParamLimits

0xcf0f,	// (0x00059ae1) main_mp3_pane_g8

0xf733,	// (0x0005c305) main_mp3_pane_g_ParamLimits

0x506d,	// (0x00051c3f) main_mp3_pane_t2

0x507b,	// (0x00051c4d) main_mp3_pane_t3

0xcf29,	// (0x00059afb) main_mp3_pane_t4

0xcf37,	// (0x00059b09) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005c316) main_mp3_pane_t

0xcf45,	// (0x00059b17) mup_progress_pane_cp01

0x10c7,	// (0x0004dc99) aid_zoom_text_secondary2

0xccff,	// (0x000598d1) list_cale_ev2_pane

0xcd07,	// (0x000598d9) scroll_pane_cp023_ParamLimits

0x51d1,	// (0x00051da3) field_cale_ev2_pane_ParamLimits

0x51d1,	// (0x00051da3) field_cale_ev2_pane

0x51f1,	// (0x00051dc3) field_cale_ev2_pane_g1_ParamLimits

0x51f1,	// (0x00051dc3) field_cale_ev2_pane_g1

0x51fd,	// (0x00051dcf) field_cale_ev2_pane_g2_ParamLimits

0x51fd,	// (0x00051dcf) field_cale_ev2_pane_g2

0x5215,	// (0x00051de7) field_cale_ev2_pane_g3_ParamLimits

0x5215,	// (0x00051de7) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005c337) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005c337) field_cale_ev2_pane_g

0x0449,	// (0x0004d01b) field_cale_ev2_pane_t1_ParamLimits

0x0449,	// (0x0004d01b) field_cale_ev2_pane_t1

0x0460,	// (0x0004d032) field_cale_ev2_pane_t2_ParamLimits

0x0460,	// (0x0004d032) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005c340) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005c340) field_cale_ev2_pane_t

0x3a7a,	// (0x0005064c) main_postcard_pane_g5_ParamLimits

0x3a7a,	// (0x0005064c) main_postcard_pane_g5

0x3a90,	// (0x00050662) main_postcard_pane_g6_ParamLimits

0x3a90,	// (0x00050662) main_postcard_pane_g6

0x1e59,	// (0x0004ea2b) camera2_autofocus_pane_cp_ParamLimits

0x1e59,	// (0x0004ea2b) camera2_autofocus_pane_cp

0xb155,	// (0x00057d27) main_mup3_pane

0x5239,	// (0x00051e0b) main_mup3_pane_g1_ParamLimits

0x5239,	// (0x00051e0b) main_mup3_pane_g1

0x525b,	// (0x00051e2d) main_mup3_pane_g2_ParamLimits

0x525b,	// (0x00051e2d) main_mup3_pane_g2

0x52d9,	// (0x00051eab) main_mup3_pane_g3_ParamLimits

0x52d9,	// (0x00051eab) main_mup3_pane_g3

0x531f,	// (0x00051ef1) main_mup3_pane_g4_ParamLimits

0x531f,	// (0x00051ef1) main_mup3_pane_g4

0x5365,	// (0x00051f37) main_mup3_pane_g5_ParamLimits

0x5365,	// (0x00051f37) main_mup3_pane_g5

0x53ab,	// (0x00051f7d) main_mup3_pane_g6_ParamLimits

0x53ab,	// (0x00051f7d) main_mup3_pane_g6

0xcf6d,	// (0x00059b3f) main_mup3_pane_g7_ParamLimits

0xcf6d,	// (0x00059b3f) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005c350) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005c350) main_mup3_pane_g

0x5429,	// (0x00051ffb) main_mup3_pane_t1_ParamLimits

0x5429,	// (0x00051ffb) main_mup3_pane_t1

0x549d,	// (0x0005206f) main_mup3_pane_t2_ParamLimits

0x549d,	// (0x0005206f) main_mup3_pane_t2

0x5571,	// (0x00052143) main_mup3_pane_t4_ParamLimits

0x5571,	// (0x00052143) main_mup3_pane_t4

0x55c7,	// (0x00052199) main_mup3_pane_t5_ParamLimits

0x55c7,	// (0x00052199) main_mup3_pane_t5

0x5683,	// (0x00052255) main_mup3_pane_t6_ParamLimits

0x5683,	// (0x00052255) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005c361) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005c361) main_mup3_pane_t

0x573b,	// (0x0005230d) mup3_progress_pane_ParamLimits

0x573b,	// (0x0005230d) mup3_progress_pane

0x57d1,	// (0x000523a3) popup_mup3_control_window_ParamLimits

0x57d1,	// (0x000523a3) popup_mup3_control_window

0xcf7b,	// (0x00059b4d) popup_mup3_text_window

0x5803,	// (0x000523d5) mup3_progress_pane_t1

0x5822,	// (0x000523f4) mup3_progress_pane_t2

0xcf83,	// (0x00059b55) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005c36e) mup3_progress_pane_t

0xcfa0,	// (0x00059b72) mup_progress_pane_cp03

0x9728,	// (0x000562fa) bg_tb_trans_pane_cp04

0x5841,	// (0x00052413) mup3_volume_pane

0x5849,	// (0x0005241b) popup_mup3_control_window_g1

0x5852,	// (0x00052424) mup3_volume_pane_g1

0x585b,	// (0x0005242d) mup3_volume_pane_g2

0x5864,	// (0x00052436) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005c375) mup3_volume_pane_g

0x9728,	// (0x000562fa) bg_tb_trans_pane_cp03

0xcfb0,	// (0x00059b82) popup_mup3_text_window_g1

0xcfb8,	// (0x00059b8a) popup_mup3_text_window_t1

0xa86b,	// (0x0005743d) list_calc_item_pane_g1_ParamLimits

0xc9c3,	// (0x00059595) mup_volume_pane_cp_g1

0x5195,	// (0x00051d67) main_touch_calib_pane_t3

0x51a9,	// (0x00051d7b) main_touch_calib_pane_t4

0x51bd,	// (0x00051d8f) main_touch_calib_pane_t5

0x9732,	// (0x00056304) aid_cell_size_toolbar2

0x973a,	// (0x0005630c) aid_popup3_width_pane

0x10bf,	// (0x0004dc91) aid_zoom_text_msg_primary

0x1e38,	// (0x0004ea0a) vorec_t7

0xa82f,	// (0x00057401) bg_calc_paper_pane_g1_ParamLimits

0xa83b,	// (0x0005740d) bg_calc_paper_pane_g2_ParamLimits

0xa847,	// (0x00057419) bg_calc_paper_pane_g3_ParamLimits

0xa853,	// (0x00057425) bg_calc_paper_pane_g4_ParamLimits

0xa85f,	// (0x00057431) bg_calc_paper_pane_g5_ParamLimits

0x1676,	// (0x0004e248) bg_calc_paper_pane_g6_ParamLimits

0x1685,	// (0x0004e257) bg_calc_paper_pane_g7_ParamLimits

0x1694,	// (0x0004e266) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005bd2a) bg_calc_paper_pane_g_ParamLimits

0x16a7,	// (0x0004e279) calc_bg_paper_pane_g9_ParamLimits

0x1fa4,	// (0x0004eb76) image_qvga_pane_ParamLimits

0x1fa4,	// (0x0004eb76) image_qvga_pane

0xa75e,	// (0x00057330) bg_popup_sub_pane_cp04_ParamLimits

0xb66f,	// (0x00058241) popup_mup_playback_window_g1_ParamLimits

0xb67b,	// (0x0005824d) popup_mup_playback_window_t1_ParamLimits

0xb690,	// (0x00058262) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c0b4) popup_mup_playback_window_t_ParamLimits

0x4cd5,	// (0x000518a7) main_mup2_pane_g3_ParamLimits

0x4cd5,	// (0x000518a7) main_mup2_pane_g3

0x229d,	// (0x0004ee6f) popup_toolbar_window_cp04

0xba72,	// (0x00058644) popup_call2_audio_second_window_g3_ParamLimits

0xba72,	// (0x00058644) popup_call2_audio_second_window_g3

0xbe7c,	// (0x00058a4e) popup_call2_audio_first_window_g4_ParamLimits

0xbe7c,	// (0x00058a4e) popup_call2_audio_first_window_g4

0xc4fb,	// (0x000590cd) popup_call2_audio_in_window_g4_ParamLimits

0xc4fb,	// (0x000590cd) popup_call2_audio_in_window_g4

0x3ba7,	// (0x00050779) aid_area_sk_bg_cut_ParamLimits

0x3ba7,	// (0x00050779) aid_area_sk_bg_cut

0xb6a5,	// (0x00058277) aid_area_sk_bg_cut_2_ParamLimits

0xb6a5,	// (0x00058277) aid_area_sk_bg_cut_2

0x4fd8,	// (0x00051baa) aid_placing_details_win

0x4fe0,	// (0x00051bb2) aid_placing_details_win_2

0xcdfa,	// (0x000599cc) camera2_autofocus_pane_g1_ParamLimits

0x1265,	// (0x0004de37) popup_fixed_preview_cale_window_ParamLimits

0x1265,	// (0x0004de37) popup_fixed_preview_cale_window

0xb473,	// (0x00058045) navi_slider_pane_g3

0xb47c,	// (0x0005804e) navi_slider_pane_g4

0xb485,	// (0x00058057) navi_slider_pane_g5

0xb473,	// (0x00058045) navi_slider_pane_g6

0x9c2a,	// (0x000567fc) navi_slider_pane_g7

0xb5a6,	// (0x00058178) mup_scale_pane_g3

0xb5af,	// (0x00058181) mup_scale_pane_g4

0xb5b8,	// (0x0005818a) mup_scale_pane_g5

0x38e7,	// (0x000504b9) mup_scale_pane_g6

0x38f0,	// (0x000504c2) mup_scale_pane_g7

0xb473,	// (0x00058045) cams2_slider_pane_g3

0xca45,	// (0x00059617) cams2_slider_pane_g4

0x9d77,	// (0x00056949) cams2_slider_pane_g5

0xb473,	// (0x00058045) cams2_slider_pane_g6

0x9d7f,	// (0x00056951) cams2_slider_pane_g7

0xcc85,	// (0x00059857) camera2_autofocus_pane_cp_g1

0xc85c,	// (0x0005942e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc85c,	// (0x0005942e) bg_popup_preview_window_pane_cp02

0xcfc6,	// (0x00059b98) list_fp_cale_pane_ParamLimits

0xcfc6,	// (0x00059b98) list_fp_cale_pane

0xcfd2,	// (0x00059ba4) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfd2,	// (0x00059ba4) popup_fixed_preview_cale_window_t1

0x586d,	// (0x0005243f) popup_fixed_preview_cale_window_t2_ParamLimits

0x586d,	// (0x0005243f) popup_fixed_preview_cale_window_t2

0x5882,	// (0x00052454) popup_fixed_preview_cale_window_t3_ParamLimits

0x5882,	// (0x00052454) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005c37c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005c37c) popup_fixed_preview_cale_window_t

0x5897,	// (0x00052469) list_single_fp_cale_pane_ParamLimits

0x5897,	// (0x00052469) list_single_fp_cale_pane

0xcff0,	// (0x00059bc2) list_single_fp_cale_pane_g1_ParamLimits

0xcff0,	// (0x00059bc2) list_single_fp_cale_pane_g1

0xcffc,	// (0x00059bce) list_single_fp_cale_pane_g2_ParamLimits

0xcffc,	// (0x00059bce) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005c383) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005c383) list_single_fp_cale_pane_g

0xd015,	// (0x00059be7) list_single_fp_cale_pane_t1_ParamLimits

0xd015,	// (0x00059be7) list_single_fp_cale_pane_t1

0xd027,	// (0x00059bf9) list_single_fp_cale_pane_t2_ParamLimits

0xd027,	// (0x00059bf9) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005c38a) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005c38a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9728,	// (0x000562fa) main_dialer_pane

0x58ac,	// (0x0005247e) aid_cell_size_keypad

0x58b6,	// (0x00052488) dialer_ne_pane

0x58be,	// (0x00052490) grid_dialer_command_1_pane

0x58c6,	// (0x00052498) grid_dialer_command_2_pane

0x58ce,	// (0x000524a0) grid_dialer_keypad_pane

0x58e0,	// (0x000524b2) bg_popup_call_pane_cp06_ParamLimits

0x58e0,	// (0x000524b2) bg_popup_call_pane_cp06

0x58ec,	// (0x000524be) dialer_ne_clear_pane_ParamLimits

0x58ec,	// (0x000524be) dialer_ne_clear_pane

0xd05a,	// (0x00059c2c) dialer_ne_pane_g1

0xd062,	// (0x00059c34) dialer_ne_pane_t1_ParamLimits

0xd062,	// (0x00059c34) dialer_ne_pane_t1

0x58f8,	// (0x000524ca) dialer_ne_pane_t2_ParamLimits

0x58f8,	// (0x000524ca) dialer_ne_pane_t2

0x5922,	// (0x000524f4) dialer_ne_pane_t3_ParamLimits

0x5922,	// (0x000524f4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005c38f) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005c38f) dialer_ne_pane_t

0x5952,	// (0x00052524) dialer_ne_pane_t3_copy1_ParamLimits

0x5952,	// (0x00052524) dialer_ne_pane_t3_copy1

0x5981,	// (0x00052553) cell_dialer_keypad_pane_ParamLimits

0x5981,	// (0x00052553) cell_dialer_keypad_pane

0x5998,	// (0x0005256a) cell_dialer_command_1_pane_ParamLimits

0x5998,	// (0x0005256a) cell_dialer_command_1_pane

0x59ae,	// (0x00052580) cell_dialer_command_2_pane_ParamLimits

0x59ae,	// (0x00052580) cell_dialer_command_2_pane

0xd074,	// (0x00059c46) bg_button_pane_cp02_ParamLimits

0xd074,	// (0x00059c46) bg_button_pane_cp02

0x59bd,	// (0x0005258f) cell_dialer_keypad_pane_g1_ParamLimits

0x59bd,	// (0x0005258f) cell_dialer_keypad_pane_g1

0xd074,	// (0x00059c46) bg_button_pane_cp03_ParamLimits

0xd074,	// (0x00059c46) bg_button_pane_cp03

0x59d1,	// (0x000525a3) cell_dialer_command_1_pane_g1_ParamLimits

0x59d1,	// (0x000525a3) cell_dialer_command_1_pane_g1

0xd080,	// (0x00059c52) bg_button_pane_cp04

0x59e5,	// (0x000525b7) cell_dialer_command_2_pane_g1

0xa9e8,	// (0x000575ba) bg_button_pane_cp06

0xd088,	// (0x00059c5a) dialer_ne_clear_pane_g1

0xb346,	// (0x00057f18) navi_pane_g2

0xb374,	// (0x00057f46) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005bfb7) navi_pane_g

0xb403,	// (0x00057fd5) navi_pane_mv_g2

0xb42a,	// (0x00057ffc) navi_pane_mv_g5

0x34ab,	// (0x0005007d) navi_pane_mv_t1

0xa823,	// (0x000573f5) main_clock2_pane

0x5a30,	// (0x00052602) main_clock2_list_pane_ParamLimits

0x5a30,	// (0x00052602) main_clock2_list_pane

0x5a66,	// (0x00052638) main_clock2_pane_t1_ParamLimits

0x5a66,	// (0x00052638) main_clock2_pane_t1

0x5aa2,	// (0x00052674) main_clock2_pane_t2_ParamLimits

0x5aa2,	// (0x00052674) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005c39b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005c39b) main_clock2_pane_t

0x5b40,	// (0x00052712) popup_clock_analogue_window_cp03_ParamLimits

0x5b40,	// (0x00052712) popup_clock_analogue_window_cp03

0x5b65,	// (0x00052737) popup_clock_digital_window_cp02_ParamLimits

0x5b65,	// (0x00052737) popup_clock_digital_window_cp02

0x5bd6,	// (0x000527a8) main_clock2_list_single_pane_ParamLimits

0x5bd6,	// (0x000527a8) main_clock2_list_single_pane

0xa9e8,	// (0x000575ba) list_highlight_pane_cp05

0xd0c6,	// (0x00059c98) main_clock2_list_single_pane_t1

0x229d,	// (0x0004ee6f) popup_toolbar_window_cp04_ParamLimits

0x5002,	// (0x00051bd4) camera2_autofocus_pane_g2_ParamLimits

0x5002,	// (0x00051bd4) camera2_autofocus_pane_g2

0x500e,	// (0x00051be0) camera2_autofocus_pane_g3_ParamLimits

0x500e,	// (0x00051be0) camera2_autofocus_pane_g3

0x501a,	// (0x00051bec) camera2_autofocus_pane_g4_ParamLimits

0x501a,	// (0x00051bec) camera2_autofocus_pane_g4

0x5026,	// (0x00051bf8) camera2_autofocus_pane_g5_ParamLimits

0x5026,	// (0x00051bf8) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005c2df) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005c2df) camera2_autofocus_pane_g

0xcf4d,	// (0x00059b1f) camera2_autofocus_pane_cp_g2

0xcf55,	// (0x00059b27) camera2_autofocus_pane_cp_g3

0xcf5d,	// (0x00059b2f) camera2_autofocus_pane_cp_g4

0xcf65,	// (0x00059b37) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005c345) camera2_autofocus_pane_cp_g

0x58d8,	// (0x000524aa) popup_dialer_spcha_window

0x9728,	// (0x000562fa) bg_popup_sub_pane_cp07

0xd0d4,	// (0x00059ca6) list_spcha_pane

0xd0dc,	// (0x00059cae) list_single_spcha_pane_ParamLimits

0xd0dc,	// (0x00059cae) list_single_spcha_pane

0x9728,	// (0x000562fa) list_highlight_pane_cp06

0xd0ed,	// (0x00059cbf) list_single_spcha_pane_t1

0xc2a5,	// (0x00058e77) popup_call2_audio_out_window_g4_ParamLimits

0xc2a5,	// (0x00058e77) popup_call2_audio_out_window_g4

0x9728,	// (0x000562fa) main_imed2_pane

0x9c8f,	// (0x00056861) popup_imed_adjust2_window

0x43e3,	// (0x00050fb5) popup_imed_trans_window_ParamLimits

0x43e3,	// (0x00050fb5) popup_imed_trans_window

0xcaae,	// (0x00059680) popup_blid_sat_info2_window_t1

0xcabc,	// (0x0005968e) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005c274) popup_blid_sat_info2_window_t

0x5c80,	// (0x00052852) aid_size_cell_colour_35

0x5ca0,	// (0x00052872) aid_size_cell_colour_112

0x5cc0,	// (0x00052892) aid_size_cell_effect

0xc868,	// (0x0005943a) bg_tb_trans_pane_cp02

0xae89,	// (0x00057a5b) heading_imed_pane

0x5ce0,	// (0x000528b2) listscroll_imed_pane

0xd0fb,	// (0x00059ccd) heading_imed_pane_g1

0xd103,	// (0x00059cd5) heading_imed_pane_t1

0xd111,	// (0x00059ce3) grid_imed_colour_35_pane_ParamLimits

0xd111,	// (0x00059ce3) grid_imed_colour_35_pane

0x5cec,	// (0x000528be) grid_imed_effect_pane

0xd128,	// (0x00059cfa) list_imed_aspect_pane

0x5d02,	// (0x000528d4) scroll_pane_cp027_ParamLimits

0x5d02,	// (0x000528d4) scroll_pane_cp027

0x5d13,	// (0x000528e5) cell_imed_effect_pane_ParamLimits

0x5d13,	// (0x000528e5) cell_imed_effect_pane

0xd130,	// (0x00059d02) cell_imed_colour_pane_ParamLimits

0xd130,	// (0x00059d02) cell_imed_colour_pane

0xd172,	// (0x00059d44) cell_imed_colour_pane_g1_ParamLimits

0xd172,	// (0x00059d44) cell_imed_colour_pane_g1

0xd183,	// (0x00059d55) hgihlgiht_grid_pane_cp016_ParamLimits

0xd183,	// (0x00059d55) hgihlgiht_grid_pane_cp016

0x5d3a,	// (0x0005290c) cell_imed_effect_pane_g1

0x5d42,	// (0x00052914) grid_highlight_pane_cp017

0xd194,	// (0x00059d66) list_imed_single_pane_ParamLimits

0xd194,	// (0x00059d66) list_imed_single_pane

0x9728,	// (0x000562fa) list_highlight_pane_cp07

0xd1a9,	// (0x00059d7b) list_imed_aspect_pane_comp1_t1

0xc868,	// (0x0005943a) bg_tb_trans_pane_cp05

0xd1cb,	// (0x00059d9d) popup_imed_adjust2_window_g1

0xd1f2,	// (0x00059dc4) popup_imed_adjust2_window_t1

0xd20a,	// (0x00059ddc) slider_imed_adjust_pane

0xd21e,	// (0x00059df0) slider_imed_adjust_pane_g1

0xd22e,	// (0x00059e00) slider_imed_adjust_pane_g2

0xd23e,	// (0x00059e10) slider_imed_adjust_pane_g3

0xd24f,	// (0x00059e21) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005c3b8) slider_imed_adjust_pane_g

0x5d4b,	// (0x0005291d) aid_size_cell_clipart2

0x5d57,	// (0x00052929) grid_imed_clipart_pane

0xd260,	// (0x00059e32) scroll_pane_cp031

0x5d61,	// (0x00052933) cell_imed_clipart_pane_ParamLimits

0x5d61,	// (0x00052933) cell_imed_clipart_pane

0x5d83,	// (0x00052955) cell_imed_clipart_pane_g1

0x9728,	// (0x000562fa) grid_highlight_pane_cp014

0x5a45,	// (0x00052617) main_clock2_pane_g1_ParamLimits

0x5a45,	// (0x00052617) main_clock2_pane_g1

0x5b81,	// (0x00052753) aid_call2_pane_cp10

0x5b93,	// (0x00052765) aid_call_pane_cp10

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g1

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g2

0x5ba5,	// (0x00052777) popup_clock_analogue_window_cp10_g3

0x5ba5,	// (0x00052777) popup_clock_analogue_window_cp10_g4

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005c3a6) popup_clock_analogue_window_cp10_g

0x5bb7,	// (0x00052789) popup_clock_analogue_window_cp10_t1

0x5be8,	// (0x000527ba) clock_digital_number_pane_cp10_ParamLimits

0x5be8,	// (0x000527ba) clock_digital_number_pane_cp10

0x5c00,	// (0x000527d2) clock_digital_number_pane_cp11_ParamLimits

0x5c00,	// (0x000527d2) clock_digital_number_pane_cp11

0x5c18,	// (0x000527ea) clock_digital_number_pane_cp12_ParamLimits

0x5c18,	// (0x000527ea) clock_digital_number_pane_cp12

0x5c30,	// (0x00052802) clock_digital_number_pane_cp13_ParamLimits

0x5c30,	// (0x00052802) clock_digital_number_pane_cp13

0x5c48,	// (0x0005281a) clock_digital_separator_pane_cp10_ParamLimits

0x5c48,	// (0x0005281a) clock_digital_separator_pane_cp10

0x5c60,	// (0x00052832) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c60,	// (0x00052832) popup_clock_digital_window_cp02_t1

0xa756,	// (0x00057328) clock_digital_number_pane_cp10_g1

0xa756,	// (0x00057328) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005c3c1) clock_digital_number_pane_cp10_g

0xa756,	// (0x00057328) clock_digital_separator_pane_cp10_g1

0xa756,	// (0x00057328) clock_digital_separator_pane_g2_cp10

0xb432,	// (0x00058004) navi_pane_vded_g4

0xb43b,	// (0x0005800d) navi_pane_vded_g5

0xb444,	// (0x00058016) navi_pane_vded_t1

0x9728,	// (0x000562fa) main_vded_pane

0x5d8c,	// (0x0005295e) main_vded_pane_g1

0x5d96,	// (0x00052968) main_vded_pane_g2

0x5da0,	// (0x00052972) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005c3c6) main_vded_pane_g

0x5daa,	// (0x0005297c) main_vded_pane_t1

0x5db8,	// (0x0005298a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005c3cd) main_vded_pane_t

0x5dc6,	// (0x00052998) vded_slider_pane

0x5dce,	// (0x000529a0) vded_video_pane

0xd268,	// (0x00059e3a) vded_video_pane_g1

0x5dd6,	// (0x000529a8) vded_video_pane_g2

0xcc85,	// (0x00059857) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005c3d2) vded_video_pane_g

0xd272,	// (0x00059e44) vded_slider_pane_g1

0xc9c3,	// (0x00059595) vded_slider_pane_g2

0xd27b,	// (0x00059e4d) vded_slider_pane_g3

0xd284,	// (0x00059e56) vded_slider_pane_g4

0xd28d,	// (0x00059e5f) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005c3d9) vded_slider_pane_g

0x57b9,	// (0x0005238b) mup3_rocker_pane_ParamLimits

0x57b9,	// (0x0005238b) mup3_rocker_pane

0x5ddf,	// (0x000529b1) mup3_control_keys_pane_g1

0x5de7,	// (0x000529b9) mup3_control_keys_pane_g2

0x5def,	// (0x000529c1) mup3_control_keys_pane_g3

0x5df7,	// (0x000529c9) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005c3e4) mup3_control_keys_pane_g

0x129c,	// (0x0004de6e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x129c,	// (0x0004de6e) popup_toolbar2_fixed_window_cp01

0x57ed,	// (0x000523bf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57ed,	// (0x000523bf) popup_toolbar2_fixed_window_cp02

0xbbe4,	// (0x000587b6) popup_call2_audio_second_window_t4_ParamLimits

0xbbe4,	// (0x000587b6) popup_call2_audio_second_window_t4

0xc112,	// (0x00058ce4) popup_call2_audio_first_window_t6_ParamLimits

0xc112,	// (0x00058ce4) popup_call2_audio_first_window_t6

0xc3a8,	// (0x00058f7a) popup_call2_audio_out_window_t6_ParamLimits

0xc3a8,	// (0x00058f7a) popup_call2_audio_out_window_t6

0x9728,	// (0x000562fa) main_vitu_pane

0x5e07,	// (0x000529d9) aid_size_cell_itu_ParamLimits

0x5e07,	// (0x000529d9) aid_size_cell_itu

0xb155,	// (0x00057d27) bg_popup_window_pane_cp08_ParamLimits

0xb155,	// (0x00057d27) bg_popup_window_pane_cp08

0x5e1d,	// (0x000529ef) field_vitu_entry_pane_ParamLimits

0x5e1d,	// (0x000529ef) field_vitu_entry_pane

0x5e34,	// (0x00052a06) grid_vitu_function_pane_ParamLimits

0x5e34,	// (0x00052a06) grid_vitu_function_pane

0x5e4f,	// (0x00052a21) grid_vitu_itu_pane_ParamLimits

0x5e4f,	// (0x00052a21) grid_vitu_itu_pane

0x5e6d,	// (0x00052a3f) cell_vitu_itu_pane_ParamLimits

0x5e6d,	// (0x00052a3f) cell_vitu_itu_pane

0x5e8f,	// (0x00052a61) cell_vitu_function_pane_ParamLimits

0x5e8f,	// (0x00052a61) cell_vitu_function_pane

0xb155,	// (0x00057d27) bg_popup_sub_pane_cp08_ParamLimits

0xb155,	// (0x00057d27) bg_popup_sub_pane_cp08

0x5ea8,	// (0x00052a7a) field_vitu_entry_pane_t1_ParamLimits

0x5ea8,	// (0x00052a7a) field_vitu_entry_pane_t1

0xd2ae,	// (0x00059e80) field_vitu_entry_pane_t2_ParamLimits

0xd2ae,	// (0x00059e80) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005c3f2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005c3f2) field_vitu_entry_pane_t

0xd2cb,	// (0x00059e9d) bg_button_pane_cp05_ParamLimits

0xd2cb,	// (0x00059e9d) bg_button_pane_cp05

0x5ec6,	// (0x00052a98) cell_vitu_itu_pane_g1

0x5ede,	// (0x00052ab0) cell_vitu_itu_pane_t1_ParamLimits

0x5ede,	// (0x00052ab0) cell_vitu_itu_pane_t1

0x5ef0,	// (0x00052ac2) cell_vitu_itu_pane_t2_ParamLimits

0x5ef0,	// (0x00052ac2) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005c3f7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005c3f7) cell_vitu_itu_pane_t

0xd2d9,	// (0x00059eab) bg_button_pane_cp07

0x5f25,	// (0x00052af7) cell_vitu_function_pane_g1

0x9ae8,	// (0x000566ba) main_calc_pane_g1

0x10b3,	// (0x0004dc85) aid_visual_content_pane

0x9728,	// (0x000562fa) main_vradio_pane

0x5f2e,	// (0x00052b00) main_vradio_pane_g1_ParamLimits

0x5f2e,	// (0x00052b00) main_vradio_pane_g1

0xd2e3,	// (0x00059eb5) main_vradio_pane_g2_ParamLimits

0xd2e3,	// (0x00059eb5) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005c3fe) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005c3fe) main_vradio_pane_g

0x5f47,	// (0x00052b19) main_vradio_pane_t1_ParamLimits

0x5f47,	// (0x00052b19) main_vradio_pane_t1

0x5f5c,	// (0x00052b2e) main_vradio_pane_t2_ParamLimits

0x5f5c,	// (0x00052b2e) main_vradio_pane_t2

0xd2f0,	// (0x00059ec2) main_vradio_pane_t3_ParamLimits

0xd2f0,	// (0x00059ec2) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005c403) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005c403) main_vradio_pane_t

0x5f71,	// (0x00052b43) vradio_rocker_control_pane_ParamLimits

0x5f71,	// (0x00052b43) vradio_rocker_control_pane

0x5f83,	// (0x00052b55) vradio_station_info_pane_ParamLimits

0x5f83,	// (0x00052b55) vradio_station_info_pane

0xd304,	// (0x00059ed6) vradio_frequency_info_pane_ParamLimits

0xd304,	// (0x00059ed6) vradio_frequency_info_pane

0xcc85,	// (0x00059857) vradio_station_info_pane_g1

0xd313,	// (0x00059ee5) vradio_station_info_pane_t1_ParamLimits

0xd313,	// (0x00059ee5) vradio_station_info_pane_t1

0xd335,	// (0x00059f07) vradio_station_info_pane_t2_ParamLimits

0xd335,	// (0x00059f07) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005c40a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005c40a) vradio_station_info_pane_t

0xd347,	// (0x00059f19) vradio_tuning_pane

0xd34f,	// (0x00059f21) vradio_rocker_control_pane_g1

0xd357,	// (0x00059f29) vradio_rocker_control_pane_g2

0xd35f,	// (0x00059f31) vradio_rocker_control_pane_g3

0xd367,	// (0x00059f39) vradio_rocker_control_pane_g4

0xd36f,	// (0x00059f41) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005c40f) vradio_rocker_control_pane_g

0x5f95,	// (0x00052b67) vradio_frequency_info_pane_g1

0xd377,	// (0x00059f49) vradio_frequency_info_pane_t1_ParamLimits

0xd377,	// (0x00059f49) vradio_frequency_info_pane_t1

0x5f9f,	// (0x00052b71) vradio_tuning_pane_g1

0x5faa,	// (0x00052b7c) vradio_tuning_pane_t1

0x974e,	// (0x00056320) area_side_right_pane_ParamLimits

0x974e,	// (0x00056320) area_side_right_pane

0xc823,	// (0x000593f5) status_small_pane_g1

0xc82b,	// (0x000593fd) status_small_pane_g2

0xc834,	// (0x00059406) status_small_pane_g3

0xc83d,	// (0x0005940f) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005c1ca) status_small_pane_g

0xc846,	// (0x00059418) status_small_pane_t1

0x9728,	// (0x000562fa) main_video3_pane

0xd38b,	// (0x00059f5d) cams_zoom_vslider_pane

0xd393,	// (0x00059f65) image3_wide_pane_ParamLimits

0xd393,	// (0x00059f65) image3_wide_pane

0xd3ad,	// (0x00059f7f) image3_wide_small_pane

0xd3b9,	// (0x00059f8b) main_video3_pane_g1_ParamLimits

0xd3b9,	// (0x00059f8b) main_video3_pane_g1

0xd3d5,	// (0x00059fa7) main_video3_pane_g2_ParamLimits

0xd3d5,	// (0x00059fa7) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005c41a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005c41a) main_video3_pane_g

0xd3f1,	// (0x00059fc3) main_video3_pane_t1_ParamLimits

0xd3f1,	// (0x00059fc3) main_video3_pane_t1

0xd41c,	// (0x00059fee) main_video3_pane_t2_ParamLimits

0xd41c,	// (0x00059fee) main_video3_pane_t2

0xd447,	// (0x0005a019) main_video3_pane_t3_ParamLimits

0xd447,	// (0x0005a019) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005c41f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005c41f) main_video3_pane_t

0xd474,	// (0x0005a046) cams_zoom_vslider_pane_g1

0xd47d,	// (0x0005a04f) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005c426) cams_zoom_vslider_pane_g

0xd485,	// (0x0005a057) small_slider_vertical_pane

0xcc85,	// (0x00059857) small_slider_vertical_pane_g1

0xcc85,	// (0x00059857) small_slider_vertical_pane_g2

0xd48d,	// (0x0005a05f) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005c42b) small_slider_vertical_pane_g

0x9728,	// (0x000562fa) main_hwr_training_pane

0xd496,	// (0x0005a068) hwr_training_instruct_pane_ParamLimits

0xd496,	// (0x0005a068) hwr_training_instruct_pane

0x5fb9,	// (0x00052b8b) hwr_training_navi_pane_ParamLimits

0x5fb9,	// (0x00052b8b) hwr_training_navi_pane

0x5fd8,	// (0x00052baa) hwr_training_write_pane_ParamLimits

0x5fd8,	// (0x00052baa) hwr_training_write_pane

0x9728,	// (0x000562fa) bg_frame_shadow_pane

0xd4cd,	// (0x0005a09f) hwr_training_write_pane_g1

0xd4d5,	// (0x0005a0a7) hwr_training_write_pane_g2

0xd4dd,	// (0x0005a0af) hwr_training_write_pane_g3

0xd4e5,	// (0x0005a0b7) hwr_training_write_pane_g4

0xd4ed,	// (0x0005a0bf) hwr_training_write_pane_g5

0xd4f5,	// (0x0005a0c7) hwr_training_write_pane_g6

0xd4fd,	// (0x0005a0cf) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005c432) hwr_training_write_pane_g

0x9d88,	// (0x0005695a) hwr_training_navi_pane_g1_ParamLimits

0x9d88,	// (0x0005695a) hwr_training_navi_pane_g1

0x9d9a,	// (0x0005696c) hwr_training_navi_pane_g2_ParamLimits

0x9d9a,	// (0x0005696c) hwr_training_navi_pane_g2

0x9dac,	// (0x0005697e) hwr_training_navi_pane_g3_ParamLimits

0x9dac,	// (0x0005697e) hwr_training_navi_pane_g3

0x9dbc,	// (0x0005698e) hwr_training_navi_pane_g4_ParamLimits

0x9dbc,	// (0x0005698e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005c441) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005c441) hwr_training_navi_pane_g

0x9dc9,	// (0x0005699b) hwr_training_navi_pane_t1

0x6020,	// (0x00052bf2) list_single_hwr_training_instruct_pane_ParamLimits

0x6020,	// (0x00052bf2) list_single_hwr_training_instruct_pane

0xd505,	// (0x0005a0d7) list_single_hwr_training_instruct_pane_t1

0xcbc5,	// (0x00059797) bg_frame_shadow_pane_g1

0xd514,	// (0x0005a0e6) bg_frame_shadow_pane_g2

0xd51c,	// (0x0005a0ee) bg_frame_shadow_pane_g3

0xd524,	// (0x0005a0f6) bg_frame_shadow_pane_g4

0xd52c,	// (0x0005a0fe) bg_frame_shadow_pane_g5

0xd534,	// (0x0005a106) bg_frame_shadow_pane_g6

0xd53c,	// (0x0005a10e) bg_frame_shadow_pane_g7

0xa8dc,	// (0x000574ae) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005c44c) bg_frame_shadow_pane_g

0x9728,	// (0x000562fa) main_video_tele_dialer_pane

0x6035,	// (0x00052c07) aid_size_cell_video_keypad_ParamLimits

0x6035,	// (0x00052c07) aid_size_cell_video_keypad

0x604f,	// (0x00052c21) grid_video_dialer_keypad_pane_ParamLimits

0x604f,	// (0x00052c21) grid_video_dialer_keypad_pane

0x609b,	// (0x00052c6d) video_down_pane_cp_ParamLimits

0x609b,	// (0x00052c6d) video_down_pane_cp

0x60cd,	// (0x00052c9f) cell_video_dialer_keypad_pane_ParamLimits

0x60cd,	// (0x00052c9f) cell_video_dialer_keypad_pane

0xd544,	// (0x0005a116) bg_button_pane_cp08_ParamLimits

0xd544,	// (0x0005a116) bg_button_pane_cp08

0x60ef,	// (0x00052cc1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60ef,	// (0x00052cc1) cell_video_dialer_keypad_pane_g1

0x57a3,	// (0x00052375) mup3_rocker2_pane_ParamLimits

0x57a3,	// (0x00052375) mup3_rocker2_pane

0xcc85,	// (0x00059857) mup3_rocker2_pane_g1

0x42c4,	// (0x00050e96) main_dialer2_pane

0x9728,	// (0x000562fa) main_mp4_pane

0x9ddf,	// (0x000569b1) main_mp4_pane_g1_ParamLimits

0x9ddf,	// (0x000569b1) main_mp4_pane_g1

0x9ddf,	// (0x000569b1) main_mp4_pane_g2_ParamLimits

0x9ddf,	// (0x000569b1) main_mp4_pane_g2

0x6126,	// (0x00052cf8) main_mp4_pane_g3_ParamLimits

0x6126,	// (0x00052cf8) main_mp4_pane_g3

0x9ded,	// (0x000569bf) main_mp4_pane_g4_ParamLimits

0x9ded,	// (0x000569bf) main_mp4_pane_g4

0x9e15,	// (0x000569e7) main_mp4_pane_g5_ParamLimits

0x9e15,	// (0x000569e7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005c46c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005c46c) main_mp4_pane_g

0x9e65,	// (0x00056a37) main_mp4_pane_t1_ParamLimits

0x9e65,	// (0x00056a37) main_mp4_pane_t1

0x9ec1,	// (0x00056a93) main_mp4_pane_t2_ParamLimits

0x9ec1,	// (0x00056a93) main_mp4_pane_t2

0xd550,	// (0x0005a122) main_mp4_pane_t3_ParamLimits

0xd550,	// (0x0005a122) main_mp4_pane_t3

0x9f13,	// (0x00056ae5) main_mp4_pane_t4_ParamLimits

0x9f13,	// (0x00056ae5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005c479) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005c479) main_mp4_pane_t

0x9f57,	// (0x00056b29) mp4_progress_pane_ParamLimits

0x9f57,	// (0x00056b29) mp4_progress_pane

0x9fa1,	// (0x00056b73) mp4_rocker_pane_ParamLimits

0x9fa1,	// (0x00056b73) mp4_rocker_pane

0xd578,	// (0x0005a14a) mp4_progress_pane_t1

0xd591,	// (0x0005a163) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005c482) mp4_progress_pane_t

0xd5aa,	// (0x0005a17c) mup_progress_pane_cp04

0xcc85,	// (0x00059857) mp4_rocker_pane_g1

0x6162,	// (0x00052d34) aid_cell_size_keypad2_ParamLimits

0x6162,	// (0x00052d34) aid_cell_size_keypad2

0x6178,	// (0x00052d4a) dialer2_ne_pane_ParamLimits

0x6178,	// (0x00052d4a) dialer2_ne_pane

0x6192,	// (0x00052d64) grid_dialer2_keypad_pane_ParamLimits

0x6192,	// (0x00052d64) grid_dialer2_keypad_pane

0xca55,	// (0x00059627) bg_popup_call_pane_cp07_ParamLimits

0xca55,	// (0x00059627) bg_popup_call_pane_cp07

0x61ae,	// (0x00052d80) dialer2_ne_pane_t1_ParamLimits

0x61ae,	// (0x00052d80) dialer2_ne_pane_t1

0x61e9,	// (0x00052dbb) cell_dialer2_keypad_pane_ParamLimits

0x61e9,	// (0x00052dbb) cell_dialer2_keypad_pane

0xd5c8,	// (0x0005a19a) bg_button_pane_pane_cp04_ParamLimits

0xd5c8,	// (0x0005a19a) bg_button_pane_pane_cp04

0x620b,	// (0x00052ddd) cell_dialer2_keypad_pane_g1_ParamLimits

0x620b,	// (0x00052ddd) cell_dialer2_keypad_pane_g1

0x2171,	// (0x0004ed43) aid_placing_vt_set_content_ParamLimits

0x2171,	// (0x0004ed43) aid_placing_vt_set_content

0x2199,	// (0x0004ed6b) aid_placing_vt_set_title_ParamLimits

0x2199,	// (0x0004ed6b) aid_placing_vt_set_title

0x9728,	// (0x000562fa) main_image3_pane

0x62d1,	// (0x00052ea3) area_side_right_pane_cp01_ParamLimits

0x62d1,	// (0x00052ea3) area_side_right_pane_cp01

0x9ddf,	// (0x000569b1) main_image3_pane_g1_ParamLimits

0x9ddf,	// (0x000569b1) main_image3_pane_g1

0x62e8,	// (0x00052eba) main_image3_pane_g2_ParamLimits

0x62e8,	// (0x00052eba) main_image3_pane_g2

0x6310,	// (0x00052ee2) main_image3_pane_g3_ParamLimits

0x6310,	// (0x00052ee2) main_image3_pane_g3

0x633a,	// (0x00052f0c) main_image3_pane_g4_ParamLimits

0x633a,	// (0x00052f0c) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005c491) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005c491) main_image3_pane_g

0x6364,	// (0x00052f36) main_image3_pane_t1_ParamLimits

0x6364,	// (0x00052f36) main_image3_pane_t1

0x63bc,	// (0x00052f8e) main_image3_pane_t2_ParamLimits

0x63bc,	// (0x00052f8e) main_image3_pane_t2

0x640e,	// (0x00052fe0) main_image3_pane_t3_ParamLimits

0x640e,	// (0x00052fe0) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005c49a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005c49a) main_image3_pane_t

0xb155,	// (0x00057d27) grid_sctrl_middle_pane_cp01_ParamLimits

0xb155,	// (0x00057d27) grid_sctrl_middle_pane_cp01

0x6496,	// (0x00053068) cell_sctrl_middle_pane_cp01_ParamLimits

0x6496,	// (0x00053068) cell_sctrl_middle_pane_cp01

0x64b3,	// (0x00053085) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64b3,	// (0x00053085) cell_sctrl_middle_pane_cp01_g1

0x9728,	// (0x000562fa) main_call4_pane

0x64c9,	// (0x0005309b) aid_size_button_call4_ParamLimits

0x64c9,	// (0x0005309b) aid_size_button_call4

0x64fa,	// (0x000530cc) call4_windows_pane_ParamLimits

0x64fa,	// (0x000530cc) call4_windows_pane

0x651a,	// (0x000530ec) grid_call4_button_pane_ParamLimits

0x651a,	// (0x000530ec) grid_call4_button_pane

0xd5d4,	// (0x0005a1a6) call4_windows_conf_pane

0xd5eb,	// (0x0005a1bd) popup_call4_audio_first_window_ParamLimits

0xd5eb,	// (0x0005a1bd) popup_call4_audio_first_window

0xd637,	// (0x0005a209) popup_call4_audio_second_window_ParamLimits

0xd637,	// (0x0005a209) popup_call4_audio_second_window

0xd64b,	// (0x0005a21d) popup_call4_audio_wait_window_ParamLimits

0xd64b,	// (0x0005a21d) popup_call4_audio_wait_window

0x6547,	// (0x00053119) cell_call4_button_pane_ParamLimits

0x6547,	// (0x00053119) cell_call4_button_pane

0x6570,	// (0x00053142) bg_button_pane_cp09_ParamLimits

0x6570,	// (0x00053142) bg_button_pane_cp09

0x657c,	// (0x0005314e) cell_call4_button_pane_g1_ParamLimits

0x657c,	// (0x0005314e) cell_call4_button_pane_g1

0x65a2,	// (0x00053174) cell_call4_button_pane_t1_ParamLimits

0x65a2,	// (0x00053174) cell_call4_button_pane_t1

0xd693,	// (0x0005a265) popup_call4_audio_conf_window_ParamLimits

0xd693,	// (0x0005a265) popup_call4_audio_conf_window

0x5803,	// (0x000523d5) mup3_progress_pane_t1_ParamLimits

0x5822,	// (0x000523f4) mup3_progress_pane_t2_ParamLimits

0xcf83,	// (0x00059b55) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005c36e) mup3_progress_pane_t_ParamLimits

0xcfa0,	// (0x00059b72) mup_progress_pane_cp03_ParamLimits

0x5dff,	// (0x000529d1) mup3_control_keys_pane_g4_copy1

0x9f85,	// (0x00056b57) mp4_rocker2_pane_ParamLimits

0x9f85,	// (0x00056b57) mp4_rocker2_pane

0xd6a7,	// (0x0005a279) mp4_rocker2_pane_g1

0xd6af,	// (0x0005a281) mp4_rocker2_pane_g2

0x9ff3,	// (0x00056bc5) mp4_rocker2_pane_g3

0x9ffb,	// (0x00056bcd) mp4_rocker2_pane_g4

0xa003,	// (0x00056bd5) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005c4a3) mp4_rocker2_pane_g

0x9728,	// (0x000562fa) main_camera4_pane

0x9728,	// (0x000562fa) main_video4_pane

0x6069,	// (0x00052c3b) main_video_tele_dialer_pane_t1_ParamLimits

0x6069,	// (0x00052c3b) main_video_tele_dialer_pane_t1

0x6082,	// (0x00052c54) main_video_tele_dialer_pane_t2_ParamLimits

0x6082,	// (0x00052c54) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005c45d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005c45d) main_video_tele_dialer_pane_t

0x65e0,	// (0x000531b2) cam4_autofocus_pane_ParamLimits

0x65e0,	// (0x000531b2) cam4_autofocus_pane

0x65f6,	// (0x000531c8) cam4_image_uncrop_pane_ParamLimits

0x65f6,	// (0x000531c8) cam4_image_uncrop_pane

0x6610,	// (0x000531e2) cam4_indicators_pane_ParamLimits

0x6610,	// (0x000531e2) cam4_indicators_pane

0x663b,	// (0x0005320d) main_camera4_pane_g1_ParamLimits

0x663b,	// (0x0005320d) main_camera4_pane_g1

0x664d,	// (0x0005321f) main_camera4_pane_g2_ParamLimits

0x664d,	// (0x0005321f) main_camera4_pane_g2

0x6660,	// (0x00053232) main_camera4_pane_g3_ParamLimits

0x6660,	// (0x00053232) main_camera4_pane_g3

0x6673,	// (0x00053245) main_camera4_pane_g4_ParamLimits

0x6673,	// (0x00053245) main_camera4_pane_g4

0x6686,	// (0x00053258) main_camera4_pane_g5_ParamLimits

0x6686,	// (0x00053258) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005c4ae) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005c4ae) main_camera4_pane_g

0x66aa,	// (0x0005327c) main_camera4_pane_t1_ParamLimits

0x66aa,	// (0x0005327c) main_camera4_pane_t1

0xcee8,	// (0x00059aba) bg_tb_trans_pane_cp06

0xa02f,	// (0x00056c01) cam4_indicators_pane_g1

0xa040,	// (0x00056c12) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005c4c9) cam4_indicators_pane_g

0xa05e,	// (0x00056c30) cam4_indicators_pane_t1

0x670e,	// (0x000532e0) main_video4_pane_g1_ParamLimits

0x670e,	// (0x000532e0) main_video4_pane_g1

0x671d,	// (0x000532ef) main_video4_pane_g2_ParamLimits

0x671d,	// (0x000532ef) main_video4_pane_g2

0x672c,	// (0x000532fe) main_video4_pane_g3_ParamLimits

0x672c,	// (0x000532fe) main_video4_pane_g3

0x673b,	// (0x0005330d) main_video4_pane_g4_ParamLimits

0x673b,	// (0x0005330d) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005c4d0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005c4d0) main_video4_pane_g

0x6759,	// (0x0005332b) vid4_indicators_pane_ParamLimits

0x6759,	// (0x0005332b) vid4_indicators_pane

0x6787,	// (0x00053359) video4_image_uncrop_cif_pane_ParamLimits

0x6787,	// (0x00053359) video4_image_uncrop_cif_pane

0x67a1,	// (0x00053373) video4_image_uncrop_nhd_pane_ParamLimits

0x67a1,	// (0x00053373) video4_image_uncrop_nhd_pane

0x65f6,	// (0x000531c8) video4_image_uncrop_vga_pane_ParamLimits

0x65f6,	// (0x000531c8) video4_image_uncrop_vga_pane

0xb155,	// (0x00057d27) bg_tb_trans_pane_cp07

0xa08a,	// (0x00056c5c) vid4_indicators_pane_g1

0xa09e,	// (0x00056c70) vid4_indicators_pane_g2

0xa0b2,	// (0x00056c84) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005c4db) vid4_indicators_pane_g

0xa0e1,	// (0x00056cb3) vid4_indicators_pane_t1

0x67b5,	// (0x00053387) cam4_autofocus_pane_g1

0x67bd,	// (0x0005338f) cam4_autofocus_pane_g2

0x67c5,	// (0x00053397) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005c4e6) cam4_autofocus_pane_g

0x67cd,	// (0x0005339f) cam4_autofocus_pane_g3_copy1

0x60b1,	// (0x00052c83) video_down_pane_cp_t1

0x60bf,	// (0x00052c91) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005c462) video_down_pane_cp_t

0xb155,	// (0x00057d27) popup_vitu2_window_ParamLimits

0xb155,	// (0x00057d27) popup_vitu2_window

0x67d5,	// (0x000533a7) aid_size_cell2_itu2_ParamLimits

0x67d5,	// (0x000533a7) aid_size_cell2_itu2

0x67fb,	// (0x000533cd) aid_size_cell_itu2_ParamLimits

0x67fb,	// (0x000533cd) aid_size_cell_itu2

0x6857,	// (0x00053429) bg_popup_window_pane_cp09_ParamLimits

0x6857,	// (0x00053429) bg_popup_window_pane_cp09

0x6865,	// (0x00053437) field_vitu2_entry_pane_ParamLimits

0x6865,	// (0x00053437) field_vitu2_entry_pane

0x688b,	// (0x0005345d) grid_vitu2_function_pane_ParamLimits

0x688b,	// (0x0005345d) grid_vitu2_function_pane

0x68dc,	// (0x000534ae) grid_vitu2_itu_pane_ParamLimits

0x68dc,	// (0x000534ae) grid_vitu2_itu_pane

0x6974,	// (0x00053546) cell_vitu2_itu_pane_ParamLimits

0x6974,	// (0x00053546) cell_vitu2_itu_pane

0x69a0,	// (0x00053572) cell_vitu2_function_pane_ParamLimits

0x69a0,	// (0x00053572) cell_vitu2_function_pane

0xd6b7,	// (0x0005a289) bg_popup_call_pane_cp08_ParamLimits

0xd6b7,	// (0x0005a289) bg_popup_call_pane_cp08

0xd6ce,	// (0x0005a2a0) field_vitu2_entry_pane_g1

0xd6da,	// (0x0005a2ac) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005c4ed) field_vitu2_entry_pane_g

0x0475,	// (0x0004d047) field_vitu2_entry_pane_t1_ParamLimits

0x0475,	// (0x0004d047) field_vitu2_entry_pane_t1

0x69df,	// (0x000535b1) field_vitu2_entry_pane_t2_ParamLimits

0x69df,	// (0x000535b1) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005c4f4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005c4f4) field_vitu2_entry_pane_t

0x69fc,	// (0x000535ce) bg_button_pane_cp010_ParamLimits

0x69fc,	// (0x000535ce) bg_button_pane_cp010

0xa0f8,	// (0x00056cca) cell_vitu2_itu_pane_g1

0x6a18,	// (0x000535ea) cell_vitu2_itu_pane_t1_ParamLimits

0x6a18,	// (0x000535ea) cell_vitu2_itu_pane_t1

0x04a5,	// (0x0004d077) cell_vitu2_itu_pane_t2_ParamLimits

0x04a5,	// (0x0004d077) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005c4fe) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005c4fe) cell_vitu2_itu_pane_t

0xb155,	// (0x00057d27) bg_button_pane_cp011

0x6a76,	// (0x00053648) cell_vitu2_function_pane_g1

0x9728,	// (0x000562fa) main_myfav_hc_pane

0x645e,	// (0x00053030) popup_image3_note_pane_ParamLimits

0x645e,	// (0x00053030) popup_image3_note_pane

0x647a,	// (0x0005304c) popup_image3_tool_bar_pane_ParamLimits

0x647a,	// (0x0005304c) popup_image3_tool_bar_pane

0x0533,	// (0x0004d105) cell_vitu2_itu_pane_t3_ParamLimits

0x0533,	// (0x0004d105) cell_vitu2_itu_pane_t3

0x9728,	// (0x000562fa) bg_popup_trans_pane

0xd6fc,	// (0x0005a2ce) grid_image3_tool_bar_pane

0xd706,	// (0x0005a2d8) bg_popup_trans_pane_g1

0xac41,	// (0x00057813) bg_popup_trans_pane_g2

0xd70e,	// (0x0005a2e0) bg_popup_trans_pane_g3

0xd716,	// (0x0005a2e8) bg_popup_trans_pane_g4

0xd71e,	// (0x0005a2f0) bg_popup_trans_pane_g5

0xd726,	// (0x0005a2f8) bg_popup_trans_pane_g6

0xd72e,	// (0x0005a300) bg_popup_trans_pane_g7

0xd736,	// (0x0005a308) bg_popup_trans_pane_g8

0xac21,	// (0x000577f3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005c505) bg_popup_trans_pane_g

0xd73e,	// (0x0005a310) cell_image3_tool_bar_pane_ParamLimits

0xd73e,	// (0x0005a310) cell_image3_tool_bar_pane

0xcc85,	// (0x00059857) cell_image3_tool_bar_pane_g1

0x9728,	// (0x000562fa) bg_popup_trans_pane_cp1

0xd752,	// (0x0005a324) popup_image3_note_pane_t1

0xd760,	// (0x0005a332) popup_image3_note_pane_t2

0xd76e,	// (0x0005a340) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005c518) popup_image3_note_pane_t

0xd77c,	// (0x0005a34e) popup_image3_note_pane_t3_copy1

0x6a8a,	// (0x0005365c) bg_myfav_hc_instruction_pane_ParamLimits

0x6a8a,	// (0x0005365c) bg_myfav_hc_instruction_pane

0x6a9e,	// (0x00053670) cell_myfav_contact_pane_ParamLimits

0x6a9e,	// (0x00053670) cell_myfav_contact_pane

0x6abc,	// (0x0005368e) cell_myfav_contact_pane_cp1_ParamLimits

0x6abc,	// (0x0005368e) cell_myfav_contact_pane_cp1

0x6ad4,	// (0x000536a6) cell_myfav_contact_pane_cp2_ParamLimits

0x6ad4,	// (0x000536a6) cell_myfav_contact_pane_cp2

0x6aec,	// (0x000536be) cell_myfav_contact_pane_cp3_ParamLimits

0x6aec,	// (0x000536be) cell_myfav_contact_pane_cp3

0x6b03,	// (0x000536d5) cell_myfav_contact_pane_cp4_ParamLimits

0x6b03,	// (0x000536d5) cell_myfav_contact_pane_cp4

0x6b1b,	// (0x000536ed) cell_myfav_contact_pane_cp5_ParamLimits

0x6b1b,	// (0x000536ed) cell_myfav_contact_pane_cp5

0x6b2f,	// (0x00053701) cell_myfav_contact_pane_cp6_ParamLimits

0x6b2f,	// (0x00053701) cell_myfav_contact_pane_cp6

0x6b45,	// (0x00053717) cell_myfav_contact_pane_cp7_ParamLimits

0x6b45,	// (0x00053717) cell_myfav_contact_pane_cp7

0xd78a,	// (0x0005a35c) listscroll_gen_pane_cp05

0x6b5f,	// (0x00053731) main_myfav_hc_pane_g1_ParamLimits

0x6b5f,	// (0x00053731) main_myfav_hc_pane_g1

0x6b79,	// (0x0005374b) main_myfav_hc_pane_g2_ParamLimits

0x6b79,	// (0x0005374b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005c51f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005c51f) main_myfav_hc_pane_g

0x6bab,	// (0x0005377d) main_myfav_hc_pane_t1_ParamLimits

0x6bab,	// (0x0005377d) main_myfav_hc_pane_t1

0xd793,	// (0x0005a365) main_myfav_hc_pane_t2_ParamLimits

0xd793,	// (0x0005a365) main_myfav_hc_pane_t2

0xd7a5,	// (0x0005a377) main_myfav_hc_pane_t3_ParamLimits

0xd7a5,	// (0x0005a377) main_myfav_hc_pane_t3

0x6bc2,	// (0x00053794) main_myfav_hc_pane_t4_ParamLimits

0x6bc2,	// (0x00053794) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005c526) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005c526) main_myfav_hc_pane_t

0xcc85,	// (0x00059857) bg_myfav_hc_instruction_pane_g1

0xd7b7,	// (0x0005a389) cell_myfav_contact_pane_g1_ParamLimits

0xd7b7,	// (0x0005a389) cell_myfav_contact_pane_g1

0xd7b7,	// (0x0005a389) cell_myfav_contact_pane_g2_ParamLimits

0xd7b7,	// (0x0005a389) cell_myfav_contact_pane_g2

0xd7c3,	// (0x0005a395) cell_myfav_contact_pane_g3_ParamLimits

0xd7c3,	// (0x0005a395) cell_myfav_contact_pane_g3

0xcf6d,	// (0x00059b3f) cell_myfav_contact_pane_g4_ParamLimits

0xcf6d,	// (0x00059b3f) cell_myfav_contact_pane_g4

0xd7d0,	// (0x0005a3a2) cell_myfav_contact_pane_g5_ParamLimits

0xd7d0,	// (0x0005a3a2) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005c531) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005c531) cell_myfav_contact_pane_g

0x6b93,	// (0x00053765) main_myfav_hc_pane_g3_ParamLimits

0x6b93,	// (0x00053765) main_myfav_hc_pane_g3

0x11fe,	// (0x0004ddd0) popup_adpt_find_window

0x6bea,	// (0x000537bc) afind_page_pane_ParamLimits

0x6bea,	// (0x000537bc) afind_page_pane

0x6bff,	// (0x000537d1) aid_size_cell_afind_ParamLimits

0x6bff,	// (0x000537d1) aid_size_cell_afind

0x6c1d,	// (0x000537ef) bg_popup_sub_pane_cp09_ParamLimits

0x6c1d,	// (0x000537ef) bg_popup_sub_pane_cp09

0x6c2a,	// (0x000537fc) find_pane_cp01_ParamLimits

0x6c2a,	// (0x000537fc) find_pane_cp01

0xd7dc,	// (0x0005a3ae) grid_afind_control_pane_ParamLimits

0xd7dc,	// (0x0005a3ae) grid_afind_control_pane

0x6c37,	// (0x00053809) grid_afind_pane_ParamLimits

0x6c37,	// (0x00053809) grid_afind_pane

0x6c59,	// (0x0005382b) cell_afind_pane_ParamLimits

0x6c59,	// (0x0005382b) cell_afind_pane

0xcc85,	// (0x00059857) afind_page_pane_g1

0x6cc0,	// (0x00053892) afind_page_pane_g2

0x6cc9,	// (0x0005389b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005c53c) afind_page_pane_g

0x6cd2,	// (0x000538a4) afind_page_pane_t1

0xd7f0,	// (0x0005a3c2) cell_afind_grid_control_pane_ParamLimits

0xd7f0,	// (0x0005a3c2) cell_afind_grid_control_pane

0xd5c8,	// (0x0005a19a) bg_button_pane_cp69_ParamLimits

0xd5c8,	// (0x0005a19a) bg_button_pane_cp69

0x6cf2,	// (0x000538c4) cell_afind_pane_g1_ParamLimits

0x6cf2,	// (0x000538c4) cell_afind_pane_g1

0x6cff,	// (0x000538d1) cell_afind_pane_t1_ParamLimits

0x6cff,	// (0x000538d1) cell_afind_pane_t1

0xaa3a,	// (0x0005760c) bg_button_pane_cp72

0xd7ff,	// (0x0005a3d1) cell_afind_grid_control_pane_g1

0x3d84,	// (0x00050956) aid_image_placing_area_ParamLimits

0x3d84,	// (0x00050956) aid_image_placing_area

0xd296,	// (0x00059e68) field_vitu_entry_pane_g1_ParamLimits

0xd296,	// (0x00059e68) field_vitu_entry_pane_g1

0xd2a2,	// (0x00059e74) field_vitu_entry_pane_g2_ParamLimits

0xd2a2,	// (0x00059e74) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005c3ed) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005c3ed) field_vitu_entry_pane_g

0x5ec6,	// (0x00052a98) cell_vitu_itu_pane_g1_ParamLimits

0x5f08,	// (0x00052ada) cell_vitu_itu_pane_t3_ParamLimits

0x5f08,	// (0x00052ada) cell_vitu_itu_pane_t3

0xd578,	// (0x0005a14a) mp4_progress_pane_t1_ParamLimits

0xd591,	// (0x0005a163) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005c482) mp4_progress_pane_t_ParamLimits

0xd5aa,	// (0x0005a17c) mup_progress_pane_cp04_ParamLimits

0x6bd6,	// (0x000537a8) main_myfav_hc_pane_t5_ParamLimits

0x6bd6,	// (0x000537a8) main_myfav_hc_pane_t5

0x9746,	// (0x00056318) aid_zoom_text_primary

0x11fe,	// (0x0004ddd0) popup_adpt_find_window_ParamLimits

0xb155,	// (0x00057d27) main_cam_set_pane

0x6627,	// (0x000531f9) cam4_zoom_pane_ParamLimits

0x6627,	// (0x000531f9) cam4_zoom_pane

0x6d11,	// (0x000538e3) main_cam_set_pane_g1_ParamLimits

0x6d11,	// (0x000538e3) main_cam_set_pane_g1

0x6d1f,	// (0x000538f1) main_cam_set_pane_g2_ParamLimits

0x6d1f,	// (0x000538f1) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005c543) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005c543) main_cam_set_pane_g

0x6d40,	// (0x00053912) main_cam_set_pane_t1_ParamLimits

0x6d40,	// (0x00053912) main_cam_set_pane_t1

0x6d5b,	// (0x0005392d) main_cset_listscroll_pane_ParamLimits

0x6d5b,	// (0x0005392d) main_cset_listscroll_pane

0x6d7b,	// (0x0005394d) main_cset_slider_pane_ParamLimits

0x6d7b,	// (0x0005394d) main_cset_slider_pane

0xd810,	// (0x0005a3e2) main_cset_list_pane_ParamLimits

0xd810,	// (0x0005a3e2) main_cset_list_pane

0xd820,	// (0x0005a3f2) scroll_pane_cp028

0x6da1,	// (0x00053973) aid_area_touch_slider

0x6dbd,	// (0x0005398f) cset_slider_pane

0x6de7,	// (0x000539b9) main_cset_slider_pane_g1

0x6dfc,	// (0x000539ce) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005c548) main_cset_slider_pane_g

0xd859,	// (0x0005a42b) main_cset_slider_pane_t1

0x6eb8,	// (0x00053a8a) main_cset_slider_pane_t2

0x6ed2,	// (0x00053aa4) main_cset_slider_pane_t3

0x6eec,	// (0x00053abe) main_cset_slider_pane_t4

0x6f06,	// (0x00053ad8) main_cset_slider_pane_t5

0x6f20,	// (0x00053af2) main_cset_slider_pane_t6

0x6f35,	// (0x00053b07) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005c56d) main_cset_slider_pane_t

0x7039,	// (0x00053c0b) cset_list_set_pane_ParamLimits

0x7039,	// (0x00053c0b) cset_list_set_pane

0x704b,	// (0x00053c1d) aid_position_infowindow_above

0x7053,	// (0x00053c25) aid_position_infowindow_below

0x705b,	// (0x00053c2d) cset_list_set_pane_g1_ParamLimits

0x705b,	// (0x00053c2d) cset_list_set_pane_g1

0x7067,	// (0x00053c39) cset_list_set_pane_g3_ParamLimits

0x7067,	// (0x00053c39) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005c58c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005c58c) cset_list_set_pane_g

0x7076,	// (0x00053c48) cset_list_set_pane_t1_ParamLimits

0x7076,	// (0x00053c48) cset_list_set_pane_t1

0xb155,	// (0x00057d27) list_highlight_pane_cp021_ParamLimits

0xb155,	// (0x00057d27) list_highlight_pane_cp021

0xb5a6,	// (0x00058178) cset_slider_pane_g1

0xb5b8,	// (0x0005818a) cset_slider_pane_g2

0xb5af,	// (0x00058181) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005c591) cset_slider_pane_g

0xa10a,	// (0x00056cdc) aid_area_touch_cam4_zoom

0xa112,	// (0x00056ce4) cam4_zoom_cont_pane

0xa11a,	// (0x00056cec) cam4_zoom_pane_g1

0xa122,	// (0x00056cf4) cam4_zoom_pane_g2

0x708b,	// (0x00053c5d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005c598) cam4_zoom_pane_g

0xd8f9,	// (0x0005a4cb) cam4_zoom_cont_pane_g1

0xd902,	// (0x0005a4d4) cam4_zoom_cont_pane_g2

0xd90b,	// (0x0005a4dd) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005c59f) cam4_zoom_cont_pane_g

0x64e7,	// (0x000530b9) call4_image_pane_ParamLimits

0x64e7,	// (0x000530b9) call4_image_pane

0xd5d4,	// (0x0005a1a6) call4_windows_conf_pane_ParamLimits

0xd615,	// (0x0005a1e7) popup_call4_audio_in_window_ParamLimits

0xd615,	// (0x0005a1e7) popup_call4_audio_in_window

0x9728,	// (0x000562fa) bg_popup_call2_act_pane_cp02

0xd68b,	// (0x0005a25d) call4_list_conf_pane

0xcc85,	// (0x00059857) call4_image_pane_g1

0xcc85,	// (0x00059857) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ae) call4_image_pane_g

0xd914,	// (0x0005a4e6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd914,	// (0x0005a4e6) list_single_graphic_popup_conf4_pane

0x9728,	// (0x000562fa) list_highlight_pane_cp022

0xd927,	// (0x0005a4f9) list_single_graphic_popup_conf4_pane_g1

0xb177,	// (0x00057d49) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005c5a6) list_single_graphic_popup_conf4_pane_g

0xd92f,	// (0x0005a501) list_single_graphic_popup_conf4_pane_t1

0x22bd,	// (0x0004ee8f) popup_vtel_slider_window_ParamLimits

0x22bd,	// (0x0004ee8f) popup_vtel_slider_window

0xd5b6,	// (0x0005a188) dialer2_ne_pane_t2_ParamLimits

0xd5b6,	// (0x0005a188) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005c487) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005c487) dialer2_ne_pane_t

0xca55,	// (0x00059627) bg_popup_sub_pane_cp010_ParamLimits

0xca55,	// (0x00059627) bg_popup_sub_pane_cp010

0x7093,	// (0x00053c65) popup_vtel_slider_window_g1_ParamLimits

0x7093,	// (0x00053c65) popup_vtel_slider_window_g1

0x70a6,	// (0x00053c78) popup_vtel_slider_window_g2_ParamLimits

0x70a6,	// (0x00053c78) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005c5ab) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005c5ab) popup_vtel_slider_window_g

0x70fc,	// (0x00053cce) vtel_slider_pane_ParamLimits

0x70fc,	// (0x00053cce) vtel_slider_pane

0x711e,	// (0x00053cf0) vtel_slider_pane_g1_ParamLimits

0x711e,	// (0x00053cf0) vtel_slider_pane_g1

0x7132,	// (0x00053d04) vtel_slider_pane_g2_ParamLimits

0x7132,	// (0x00053d04) vtel_slider_pane_g2

0x714a,	// (0x00053d1c) vtel_slider_pane_g3_ParamLimits

0x714a,	// (0x00053d1c) vtel_slider_pane_g3

0x711e,	// (0x00053cf0) vtel_slider_pane_g4_ParamLimits

0x711e,	// (0x00053cf0) vtel_slider_pane_g4

0x7160,	// (0x00053d32) vtel_slider_pane_g5_ParamLimits

0x7160,	// (0x00053d32) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005c5b4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005c5b4) vtel_slider_pane_g

0xb155,	// (0x00057d27) main_gallery2_pane

0x6827,	// (0x000533f9) aid_size_row_itut2_dropdow_list_ParamLimits

0x6827,	// (0x000533f9) aid_size_row_itut2_dropdow_list

0x68b3,	// (0x00053485) grid_vitu2_function_top_pane_ParamLimits

0x68b3,	// (0x00053485) grid_vitu2_function_top_pane

0x691d,	// (0x000534ef) popup_vitu2_dropdown_list_window_ParamLimits

0x691d,	// (0x000534ef) popup_vitu2_dropdown_list_window

0x6946,	// (0x00053518) popup_vitu2_match_list_window

0x7176,	// (0x00053d48) cell_vitu2_function_top_pane_ParamLimits

0x7176,	// (0x00053d48) cell_vitu2_function_top_pane

0x718e,	// (0x00053d60) cell_vitu2_function_top_pane_cp01_ParamLimits

0x718e,	// (0x00053d60) cell_vitu2_function_top_pane_cp01

0x71aa,	// (0x00053d7c) cell_vitu2_function_top_wide_pane_ParamLimits

0x71aa,	// (0x00053d7c) cell_vitu2_function_top_wide_pane

0xb155,	// (0x00057d27) bg_button_pane_cp012

0x71c6,	// (0x00053d98) cell_vitu2_function_top_pane_g1

0xa12a,	// (0x00056cfc) bg_button_pane_cp013_ParamLimits

0xa12a,	// (0x00056cfc) bg_button_pane_cp013

0x71da,	// (0x00053dac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71da,	// (0x00053dac) cell_vitu2_function_top_wide_pane_g1

0xb155,	// (0x00057d27) bg_popup_sub_pane_cp20

0x71f2,	// (0x00053dc4) list_vitu2_match_list_pane

0xd706,	// (0x0005a2d8) bg_popup_sub_pane_cp20_g1

0xd70e,	// (0x0005a2e0) bg_popup_sub_pane_cp20_g2

0xac41,	// (0x00057813) bg_popup_sub_pane_cp20_g3

0xd716,	// (0x0005a2e8) bg_popup_sub_pane_cp20_g4

0xac21,	// (0x000577f3) bg_popup_sub_pane_cp20_g5

0xd945,	// (0x0005a517) bg_popup_sub_pane_cp20_g6

0xd726,	// (0x0005a2f8) bg_popup_sub_pane_cp20_g7

0xd72e,	// (0x0005a300) bg_popup_sub_pane_cp20_g8

0xd736,	// (0x0005a308) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005c5bf) bg_popup_sub_pane_cp20_g

0xa146,	// (0x00056d18) list_vitu2_match_list_item_pane_ParamLimits

0xa146,	// (0x00056d18) list_vitu2_match_list_item_pane

0xa158,	// (0x00056d2a) list_vitu2_match_list_item_pane_t1

0x9728,	// (0x000562fa) bg_popup_sub_pane_cp21

0xb077,	// (0x00057c49) grid_vitu2_dropdown_list_pane

0x7210,	// (0x00053de2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7210,	// (0x00053de2) cell_vitu2_dropdown_list_char_pane

0x7231,	// (0x00053e03) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7231,	// (0x00053e03) cell_vitu2_dropdown_list_ctrl_pane

0xd94d,	// (0x0005a51f) cell_vitu2_dropdown_list_char_pane_g1

0xd956,	// (0x0005a528) cell_vitu2_dropdown_list_char_pane_g2

0xd95f,	// (0x0005a531) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005c5dc) cell_vitu2_dropdown_list_char_pane_g

0x725d,	// (0x00053e2f) cell_vitu2_dropdown_list_char_pane_t1

0x726b,	// (0x00053e3d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x726b,	// (0x00053e3d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7278,	// (0x00053e4a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7278,	// (0x00053e4a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7285,	// (0x00053e57) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7285,	// (0x00053e57) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7292,	// (0x00053e64) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7292,	// (0x00053e64) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcee8,	// (0x00059aba) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcee8,	// (0x00059aba) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005c5e3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005c5e3) cell_vitu2_dropdown_list_ctrl_pane_g

0x72ae,	// (0x00053e80) aid_size_cell_gallery2_ParamLimits

0x72ae,	// (0x00053e80) aid_size_cell_gallery2

0x72cc,	// (0x00053e9e) grid_gallery2_pane_ParamLimits

0x72cc,	// (0x00053e9e) grid_gallery2_pane

0x72e6,	// (0x00053eb8) scroll_pane_cp029_ParamLimits

0x72e6,	// (0x00053eb8) scroll_pane_cp029

0x72f2,	// (0x00053ec4) cell_gallery2_pane_ParamLimits

0x72f2,	// (0x00053ec4) cell_gallery2_pane

0xd968,	// (0x0005a53a) cell_gallery2_pane_g2

0x734d,	// (0x00053f1f) cell_gallery2_pane_g3

0xd970,	// (0x0005a542) cell_gallery2_pane_g4

0xd978,	// (0x0005a54a) cell_gallery2_pane_g5

0xa9e8,	// (0x000575ba) grid_highlight_pane_cp10

0x6946,	// (0x00053518) popup_vitu2_match_list_window_ParamLimits

0x695d,	// (0x0005352f) popup_vitu2_query_window_ParamLimits

0x695d,	// (0x0005352f) popup_vitu2_query_window

0x9728,	// (0x000562fa) bg_vitu2_candi_button_pane

0xd94d,	// (0x0005a51f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd956,	// (0x0005a528) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd95f,	// (0x0005a531) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05e9,	// (0x0004d1bb) bg_button_pane_cp015

0x7355,	// (0x00053f27) bg_button_pane_cp016

0x7368,	// (0x00053f3a) bg_button_pane_cp017

0xc868,	// (0x0005943a) bg_popup_sub_pane_cp22

0xd980,	// (0x0005a552) popup_vitu2_query_window_g1

0x061c,	// (0x0004d1ee) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005c5ee) popup_vitu2_query_window_g

0x063b,	// (0x0004d20d) popup_vitu2_query_window_t1_ParamLimits

0x063b,	// (0x0004d20d) popup_vitu2_query_window_t1

0x0670,	// (0x0004d242) popup_vitu2_query_window_t2_ParamLimits

0x0670,	// (0x0004d242) popup_vitu2_query_window_t2

0x0682,	// (0x0004d254) popup_vitu2_query_window_t3_ParamLimits

0x0682,	// (0x0004d254) popup_vitu2_query_window_t3

0x738c,	// (0x00053f5e) popup_vitu2_query_window_t4_ParamLimits

0x738c,	// (0x00053f5e) popup_vitu2_query_window_t4

0x73ad,	// (0x00053f7f) popup_vitu2_query_window_t5_ParamLimits

0x73ad,	// (0x00053f7f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005c5f5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005c5f5) popup_vitu2_query_window_t

0xd808,	// (0x0005a3da) main_cset_text_pane

0x6da1,	// (0x00053973) aid_area_touch_slider_ParamLimits

0x6dbd,	// (0x0005398f) cset_slider_pane_ParamLimits

0x6de7,	// (0x000539b9) main_cset_slider_pane_g1_ParamLimits

0x6dfc,	// (0x000539ce) main_cset_slider_pane_g2_ParamLimits

0xd829,	// (0x0005a3fb) main_cset_slider_pane_g3_ParamLimits

0xd829,	// (0x0005a3fb) main_cset_slider_pane_g3

0x6e11,	// (0x000539e3) main_cset_slider_pane_g4_ParamLimits

0x6e11,	// (0x000539e3) main_cset_slider_pane_g4

0x6e20,	// (0x000539f2) main_cset_slider_pane_g5_ParamLimits

0x6e20,	// (0x000539f2) main_cset_slider_pane_g5

0x6e2c,	// (0x000539fe) main_cset_slider_pane_g6_ParamLimits

0x6e2c,	// (0x000539fe) main_cset_slider_pane_g6

0xf976,	// (0x0005c548) main_cset_slider_pane_g_ParamLimits

0xd859,	// (0x0005a42b) main_cset_slider_pane_t1_ParamLimits

0x6eb8,	// (0x00053a8a) main_cset_slider_pane_t2_ParamLimits

0x6ed2,	// (0x00053aa4) main_cset_slider_pane_t3_ParamLimits

0x6eec,	// (0x00053abe) main_cset_slider_pane_t4_ParamLimits

0x6f06,	// (0x00053ad8) main_cset_slider_pane_t5_ParamLimits

0x6f20,	// (0x00053af2) main_cset_slider_pane_t6_ParamLimits

0x6f35,	// (0x00053b07) main_cset_slider_pane_t7_ParamLimits

0x6f5f,	// (0x00053b31) main_cset_slider_pane_t8_ParamLimits

0x6f5f,	// (0x00053b31) main_cset_slider_pane_t8

0x6f87,	// (0x00053b59) main_cset_slider_pane_t9_ParamLimits

0x6f87,	// (0x00053b59) main_cset_slider_pane_t9

0x6faf,	// (0x00053b81) main_cset_slider_pane_t10_ParamLimits

0x6faf,	// (0x00053b81) main_cset_slider_pane_t10

0x6fd7,	// (0x00053ba9) main_cset_slider_pane_t11_ParamLimits

0x6fd7,	// (0x00053ba9) main_cset_slider_pane_t11

0x6fff,	// (0x00053bd1) main_cset_slider_pane_t12_ParamLimits

0x6fff,	// (0x00053bd1) main_cset_slider_pane_t12

0x701c,	// (0x00053bee) main_cset_slider_pane_t13_ParamLimits

0x701c,	// (0x00053bee) main_cset_slider_pane_t13

0xf99b,	// (0x0005c56d) main_cset_slider_pane_t_ParamLimits

0x9728,	// (0x000562fa) bg_popup_sub_pane_cp011

0xd98c,	// (0x0005a55e) main_cset_text_pane_g1

0xd994,	// (0x0005a566) main_cset_text_pane_t1

0xd9a2,	// (0x0005a574) main_cset_text_pane_t2

0xd9b0,	// (0x0005a582) main_cset_text_pane_t3

0xd9be,	// (0x0005a590) main_cset_text_pane_t4

0xd9cc,	// (0x0005a59e) main_cset_text_pane_t5

0xd9da,	// (0x0005a5ac) main_cset_text_pane_t6

0xd9e8,	// (0x0005a5ba) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005c604) main_cset_text_pane_t

0x9728,	// (0x000562fa) main_cam4_burst_pane

0x9728,	// (0x000562fa) main_cam5_pane

0x6ce0,	// (0x000538b2) bg_button_pane_cp019

0x6ce9,	// (0x000538bb) bg_button_pane_cp020

0xd835,	// (0x0005a407) main_cset_slider_pane_g7_ParamLimits

0xd835,	// (0x0005a407) main_cset_slider_pane_g7

0xd841,	// (0x0005a413) main_cset_slider_pane_g8_ParamLimits

0xd841,	// (0x0005a413) main_cset_slider_pane_g8

0x6e40,	// (0x00053a12) main_cset_slider_pane_g9_ParamLimits

0x6e40,	// (0x00053a12) main_cset_slider_pane_g9

0x6e4c,	// (0x00053a1e) main_cset_slider_pane_g10_ParamLimits

0x6e4c,	// (0x00053a1e) main_cset_slider_pane_g10

0x6e58,	// (0x00053a2a) main_cset_slider_pane_g11_ParamLimits

0x6e58,	// (0x00053a2a) main_cset_slider_pane_g11

0x6e64,	// (0x00053a36) main_cset_slider_pane_g12_ParamLimits

0x6e64,	// (0x00053a36) main_cset_slider_pane_g12

0x6e70,	// (0x00053a42) main_cset_slider_pane_g13_ParamLimits

0x6e70,	// (0x00053a42) main_cset_slider_pane_g13

0x6e7c,	// (0x00053a4e) main_cset_slider_pane_g14_ParamLimits

0x6e7c,	// (0x00053a4e) main_cset_slider_pane_g14

0x6e88,	// (0x00053a5a) main_cset_slider_pane_g15_ParamLimits

0x6e88,	// (0x00053a5a) main_cset_slider_pane_g15

0xd887,	// (0x0005a459) main_cset_slider_pane_t14_ParamLimits

0xd887,	// (0x0005a459) main_cset_slider_pane_t14

0xd8c0,	// (0x0005a492) main_cset_slider_pane_t15_ParamLimits

0xd8c0,	// (0x0005a492) main_cset_slider_pane_t15

0x73ce,	// (0x00053fa0) aid_cam4_burst_size_cell_ParamLimits

0x73ce,	// (0x00053fa0) aid_cam4_burst_size_cell

0x73ee,	// (0x00053fc0) grid_cam4_burst_pane_ParamLimits

0x73ee,	// (0x00053fc0) grid_cam4_burst_pane

0x7426,	// (0x00053ff8) linegrid_cam4_burst_pane_ParamLimits

0x7426,	// (0x00053ff8) linegrid_cam4_burst_pane

0xd9f6,	// (0x0005a5c8) scroll_pane_cp30_ParamLimits

0xd9f6,	// (0x0005a5c8) scroll_pane_cp30

0x744a,	// (0x0005401c) cell_cam4_burst_pane_ParamLimits

0x744a,	// (0x0005401c) cell_cam4_burst_pane

0xda02,	// (0x0005a5d4) linegrid_cam4_burst_pane_g1_ParamLimits

0xda02,	// (0x0005a5d4) linegrid_cam4_burst_pane_g1

0x7497,	// (0x00054069) linegrid_cam4_burst_pane_g2_ParamLimits

0x7497,	// (0x00054069) linegrid_cam4_burst_pane_g2

0xda0f,	// (0x0005a5e1) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0f,	// (0x0005a5e1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005c613) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005c613) linegrid_cam4_burst_pane_g

0x74a8,	// (0x0005407a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74a8,	// (0x0005407a) linegrid_cam4_burst_pane_g3_copy1

0xda1c,	// (0x0005a5ee) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1c,	// (0x0005a5ee) linegrid_cam4_burst_pane_g4

0x74c2,	// (0x00054094) linegrid_cam4_burst_pane_g5_ParamLimits

0x74c2,	// (0x00054094) linegrid_cam4_burst_pane_g5

0x74d3,	// (0x000540a5) linegrid_cam4_burst_pane_g6_ParamLimits

0x74d3,	// (0x000540a5) linegrid_cam4_burst_pane_g6

0xda29,	// (0x0005a5fb) linegrid_cam4_burst_pane_g7_ParamLimits

0xda29,	// (0x0005a5fb) linegrid_cam4_burst_pane_g7

0x74ea,	// (0x000540bc) cell_cam4_burst_pane_g1

0xda42,	// (0x0005a614) main_cam5_pane_t1_ParamLimits

0xda42,	// (0x0005a614) main_cam5_pane_t1

0xda54,	// (0x0005a626) main_cam5_pane_t2_ParamLimits

0xda54,	// (0x0005a626) main_cam5_pane_t2

0xda66,	// (0x0005a638) main_cam5_pane_t3_ParamLimits

0xda66,	// (0x0005a638) main_cam5_pane_t3

0xda78,	// (0x0005a64a) main_cam5_pane_t4_ParamLimits

0xda78,	// (0x0005a64a) main_cam5_pane_t4

0xda90,	// (0x0005a662) main_cam5_pane_t5_ParamLimits

0xda90,	// (0x0005a662) main_cam5_pane_t5

0xdaa4,	// (0x0005a676) main_cam5_pane_t6_ParamLimits

0xdaa4,	// (0x0005a676) main_cam5_pane_t6

0xdab8,	// (0x0005a68a) main_cam5_pane_t7_ParamLimits

0xdab8,	// (0x0005a68a) main_cam5_pane_t7

0xdaca,	// (0x0005a69c) main_cam5_pane_t8_ParamLimits

0xdaca,	// (0x0005a69c) main_cam5_pane_t8

0xdae6,	// (0x0005a6b8) main_cam5_pane_t9_ParamLimits

0xdae6,	// (0x0005a6b8) main_cam5_pane_t9

0xdaf8,	// (0x0005a6ca) main_cam5_pane_t10_ParamLimits

0xdaf8,	// (0x0005a6ca) main_cam5_pane_t10

0xdb0a,	// (0x0005a6dc) main_cam5_pane_t11_ParamLimits

0xdb0a,	// (0x0005a6dc) main_cam5_pane_t11

0xdb1c,	// (0x0005a6ee) main_cam5_pane_t12_ParamLimits

0xdb1c,	// (0x0005a6ee) main_cam5_pane_t12

0xdb31,	// (0x0005a703) main_cam5_pane_t13_ParamLimits

0xdb31,	// (0x0005a703) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005c61f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005c61f) main_cam5_pane_t

0x1280,	// (0x0004de52) popup_scut_keymap_window_ParamLimits

0x1280,	// (0x0004de52) popup_scut_keymap_window

0x74fd,	// (0x000540cf) aid_size_cell_brow_shortcut

0xa9e8,	// (0x000575ba) bg_popup_window_pane_cp010

0x7509,	// (0x000540db) grid_scut_pane

0x7515,	// (0x000540e7) cell_scut_pane_ParamLimits

0x7515,	// (0x000540e7) cell_scut_pane

0x752c,	// (0x000540fe) cell_scut_pane_g1

0xdb4e,	// (0x0005a720) cell_scut_pane_t1

0xdb5d,	// (0x0005a72f) cell_scut_pane_t2

0x7535,	// (0x00054107) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005c63a) cell_scut_pane_t

0x53bc,	// (0x00051f8e) main_mup3_pane_g8_ParamLimits

0x53bc,	// (0x00051f8e) main_mup3_pane_g8

0x683f,	// (0x00053411) area_vitu2_query_pane_ParamLimits

0x683f,	// (0x00053411) area_vitu2_query_pane

0x05fb,	// (0x0004d1cd) input_focus_pane_cp08

0xdb6c,	// (0x0005a73e) area_vitu2_query_pane_g1

0x0700,	// (0x0004d2d2) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005c641) area_vitu2_query_pane_g

0x7543,	// (0x00054115) area_vitu2_query_pane_t1_ParamLimits

0x7543,	// (0x00054115) area_vitu2_query_pane_t1

0x7557,	// (0x00054129) area_vitu2_query_pane_t2_ParamLimits

0x7557,	// (0x00054129) area_vitu2_query_pane_t2

0x0711,	// (0x0004d2e3) area_vitu2_query_pane_t3_ParamLimits

0x0711,	// (0x0004d2e3) area_vitu2_query_pane_t3

0x756b,	// (0x0005413d) area_vitu2_query_pane_t4_ParamLimits

0x756b,	// (0x0005413d) area_vitu2_query_pane_t4

0x7593,	// (0x00054165) area_vitu2_query_pane_t5_ParamLimits

0x7593,	// (0x00054165) area_vitu2_query_pane_t5

0x75bb,	// (0x0005418d) area_vitu2_query_pane_t6_ParamLimits

0x75bb,	// (0x0005418d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005c646) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005c646) area_vitu2_query_pane_t

0x7607,	// (0x000541d9) bg_button_pane_cp018

0x7615,	// (0x000541e7) bg_button_pane_cp021

0x0739,	// (0x0004d30b) bg_button_pane_cp022

0x0748,	// (0x0004d31a) input_focus_pane_cp09

0xb2b3,	// (0x00057e85) aid_size_touch_mv_arrow_left

0xb2dc,	// (0x00057eae) aid_size_touch_mv_arrow_right

0x6ea0,	// (0x00053a72) main_cset_slider_pane_g16_ParamLimits

0x6ea0,	// (0x00053a72) main_cset_slider_pane_g16

0x6eac,	// (0x00053a7e) main_cset_slider_pane_g17_ParamLimits

0x6eac,	// (0x00053a7e) main_cset_slider_pane_g17

0x74ea,	// (0x000540bc) cell_cam4_burst_pane_g1_ParamLimits

0x9728,	// (0x000562fa) compa_mode_pane

0x70b6,	// (0x00053c88) popup_vtel_slider_window_g3_ParamLimits

0x70b6,	// (0x00053c88) popup_vtel_slider_window_g3

0x70cd,	// (0x00053c9f) popup_vtel_slider_window_g4_ParamLimits

0x70cd,	// (0x00053c9f) popup_vtel_slider_window_g4

0x70e4,	// (0x00053cb6) popup_vtel_slider_window_t1_ParamLimits

0x70e4,	// (0x00053cb6) popup_vtel_slider_window_t1

0x9728,	// (0x000562fa) main_cl_pane

0x9c8f,	// (0x00056861) popup_imed_adjust2_window_ParamLimits

0xc868,	// (0x0005943a) bg_tb_trans_pane_cp05_ParamLimits

0xd1cb,	// (0x00059d9d) popup_imed_adjust2_window_g1_ParamLimits

0xd1da,	// (0x00059dac) popup_imed_adjust2_window_g2_ParamLimits

0xd1da,	// (0x00059dac) popup_imed_adjust2_window_g2

0xd1e6,	// (0x00059db8) popup_imed_adjust2_window_g3_ParamLimits

0xd1e6,	// (0x00059db8) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005c3b1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005c3b1) popup_imed_adjust2_window_g

0xd1f2,	// (0x00059dc4) popup_imed_adjust2_window_t1_ParamLimits

0xd20a,	// (0x00059ddc) slider_imed_adjust_pane_ParamLimits

0xd21e,	// (0x00059df0) slider_imed_adjust_pane_g1_ParamLimits

0xd22e,	// (0x00059e00) slider_imed_adjust_pane_g2_ParamLimits

0xd23e,	// (0x00059e10) slider_imed_adjust_pane_g3_ParamLimits

0xd24f,	// (0x00059e21) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005c3b8) slider_imed_adjust_pane_g_ParamLimits

0x65c8,	// (0x0005319a) aid_touch_area_cam4_ParamLimits

0x65c8,	// (0x0005319a) aid_touch_area_cam4

0xa00b,	// (0x00056bdd) battery_pane_cp01

0x6697,	// (0x00053269) main_camera4_pane_g6_ParamLimits

0x6697,	// (0x00053269) main_camera4_pane_g6

0x66c1,	// (0x00053293) main_camera4_pane_t2_ParamLimits

0x66c1,	// (0x00053293) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005c4bb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005c4bb) main_camera4_pane_t

0x66f6,	// (0x000532c8) aid_touch_area_vid4_ParamLimits

0x66f6,	// (0x000532c8) aid_touch_area_vid4

0x674a,	// (0x0005331c) main_video4_pane_g5_ParamLimits

0x674a,	// (0x0005331c) main_video4_pane_g5

0x676f,	// (0x00053341) vid4_progress_pane_ParamLimits

0x676f,	// (0x00053341) vid4_progress_pane

0xd84d,	// (0x0005a41f) main_cset_slider_pane_g18_ParamLimits

0xd84d,	// (0x0005a41f) main_cset_slider_pane_g18

0xda36,	// (0x0005a608) cell_cam4_burst_pane_g2_ParamLimits

0xda36,	// (0x0005a608) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005c61a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005c61a) cell_cam4_burst_pane_g

0xa823,	// (0x000573f5) bg_cl_pane_ParamLimits

0xa823,	// (0x000573f5) bg_cl_pane

0x7621,	// (0x000541f3) cl_header_pane_ParamLimits

0x7621,	// (0x000541f3) cl_header_pane

0x7635,	// (0x00054207) cl_listscroll_pane_ParamLimits

0x7635,	// (0x00054207) cl_listscroll_pane

0xdb78,	// (0x0005a74a) bg_cl_pane_g1

0xdb80,	// (0x0005a752) bg_cl_pane_g2

0xdb88,	// (0x0005a75a) bg_cl_pane_g3

0xdb90,	// (0x0005a762) bg_cl_pane_g4

0xdb98,	// (0x0005a76a) bg_cl_pane_g5

0xdba0,	// (0x0005a772) bg_cl_pane_g6

0xdba8,	// (0x0005a77a) bg_cl_pane_g7

0xdbb0,	// (0x0005a782) bg_cl_pane_g8

0xdbb8,	// (0x0005a78a) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005c655) bg_cl_pane_g

0x7645,	// (0x00054217) aid_height_cl_leading_ParamLimits

0x7645,	// (0x00054217) aid_height_cl_leading

0x7651,	// (0x00054223) aid_height_cl_text_ParamLimits

0x7651,	// (0x00054223) aid_height_cl_text

0xb155,	// (0x00057d27) bg_cl_header_pane_ParamLimits

0xb155,	// (0x00057d27) bg_cl_header_pane

0x7670,	// (0x00054242) cl_header_pane_g1_ParamLimits

0x7670,	// (0x00054242) cl_header_pane_g1

0x7686,	// (0x00054258) cl_header_pane_t1_ParamLimits

0x7686,	// (0x00054258) cl_header_pane_t1

0xdbc0,	// (0x0005a792) cl_list_pane

0xd820,	// (0x0005a3f2) hc_scroll_pane_cp01

0xac21,	// (0x000577f3) bg_cl_header_pane_g1

0xd706,	// (0x0005a2d8) bg_cl_header_pane_g2

0xac41,	// (0x00057813) bg_cl_header_pane_g3

0xd716,	// (0x0005a2e8) bg_cl_header_pane_g4

0xd70e,	// (0x0005a2e0) bg_cl_header_pane_g5

0xd945,	// (0x0005a517) bg_cl_header_pane_g6

0xd72e,	// (0x0005a300) bg_cl_header_pane_g7

0xd736,	// (0x0005a308) bg_cl_header_pane_g8

0xd726,	// (0x0005a2f8) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005c668) bg_cl_header_pane_g

0x769f,	// (0x00054271) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x769f,	// (0x00054271) hc_cl_list_double_graphic_heading_pane

0x76b0,	// (0x00054282) hc_cl_list_single_graphic_pane_ParamLimits

0x76b0,	// (0x00054282) hc_cl_list_single_graphic_pane

0x76c6,	// (0x00054298) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76c6,	// (0x00054298) hc_cl_list_single_graphic_pane_g1

0x76d2,	// (0x000542a4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76d2,	// (0x000542a4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005c67b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005c67b) hc_cl_list_single_graphic_pane_g

0x76e6,	// (0x000542b8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76e6,	// (0x000542b8) hc_cl_list_single_graphic_pane_t1

0x76c6,	// (0x00054298) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76c6,	// (0x00054298) hc_cl_list_double_graphic_heading_pane_g1

0x76fb,	// (0x000542cd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76fb,	// (0x000542cd) hc_cl_list_double_graphic_heading_pane_g2

0x770f,	// (0x000542e1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x770f,	// (0x000542e1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005c680) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005c680) hc_cl_list_double_graphic_heading_pane_g

0x7723,	// (0x000542f5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7723,	// (0x000542f5) hc_cl_list_double_graphic_heading_pane_t1

0x7738,	// (0x0005430a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7738,	// (0x0005430a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005c687) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005c687) hc_cl_list_double_graphic_heading_pane_t

0xa16e,	// (0x00056d40) vid4_progress_pane_g1

0xa17e,	// (0x00056d50) vid4_progress_pane_g2

0x774d,	// (0x0005431f) vid4_progress_pane_g3

0xa18e,	// (0x00056d60) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005c68c) vid4_progress_pane_g

0x775f,	// (0x00054331) vid4_progress_pane_t1

0xa1a6,	// (0x00056d78) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005c697) vid4_progress_pane_t

0x7777,	// (0x00054349) wait_bar_pane_cp07

0xca63,	// (0x00059635) blid_firmament_pane_ParamLimits

0xcaa6,	// (0x00059678) popup_blid_sat_info2_window_g1

0xcaca,	// (0x0005969c) popup_blid_sat_info2_window_t3

0xcad8,	// (0x000596aa) popup_blid_sat_info2_window_t4

0xcae6,	// (0x000596b8) popup_blid_sat_info2_window_t5

0xcaf4,	// (0x000596c6) popup_blid_sat_info2_window_t6

0xcb04,	// (0x000596d6) popup_blid_sat_info2_window_t7

0xcb12,	// (0x000596e4) popup_blid_sat_info2_window_t8

0xcb20,	// (0x000596f2) popup_blid_sat_info2_window_t9

0xcb2e,	// (0x00059700) popup_blid_sat_info2_window_t10

0xcc05,	// (0x000597d7) aid_firma_cardinal_ParamLimits

0xcc19,	// (0x000597eb) blid_firmament_pane_t1_ParamLimits

0xcc30,	// (0x00059802) blid_firmament_pane_t2_ParamLimits

0xcc47,	// (0x00059819) blid_firmament_pane_t3_ParamLimits

0xcc5e,	// (0x00059830) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005c2a5) blid_firmament_pane_t_ParamLimits

0xcc75,	// (0x00059847) blid_sat_info_pane_ParamLimits

0xb155,	// (0x00057d27) main_cam_set_pane_ParamLimits

0x5c80,	// (0x00052852) aid_size_cell_colour_35_ParamLimits

0x5ca0,	// (0x00052872) aid_size_cell_colour_112_ParamLimits

0x5cc0,	// (0x00052892) aid_size_cell_effect_ParamLimits

0xc868,	// (0x0005943a) bg_tb_trans_pane_cp02_ParamLimits

0xae89,	// (0x00057a5b) heading_imed_pane_ParamLimits

0x5ce0,	// (0x000528b2) listscroll_imed_pane_ParamLimits

0xbe8e,	// (0x00058a60) popup_call2_audio_first_window_g5_ParamLimits

0xbe8e,	// (0x00058a60) popup_call2_audio_first_window_g5

0x6273,	// (0x00052e45) aid_size_touch_image3_arrow_left_ParamLimits

0x6273,	// (0x00052e45) aid_size_touch_image3_arrow_left

0x629f,	// (0x00052e71) aid_size_touch_image3_arrow_right_ParamLimits

0x629f,	// (0x00052e71) aid_size_touch_image3_arrow_right

0xa1bb,	// (0x00056d8d) vid4_progress_pane_t3

0x5ff3,	// (0x00052bc5) main_hwr_training_symbol_option_pane_ParamLimits

0x5ff3,	// (0x00052bc5) main_hwr_training_symbol_option_pane

0xd4b8,	// (0x0005a08a) popup_hwr_training_preview_window_ParamLimits

0xd4b8,	// (0x0005a08a) popup_hwr_training_preview_window

0x6013,	// (0x00052be5) hwr_training_navi_pane_g5_ParamLimits

0x6013,	// (0x00052be5) hwr_training_navi_pane_g5

0xd6f4,	// (0x0005a2c6) popup_char_count_window

0xb155,	// (0x00057d27) bg_popup_sub_pane_cp20_ParamLimits

0x71f2,	// (0x00053dc4) list_vitu2_match_list_pane_ParamLimits

0x7201,	// (0x00053dd3) vitu2_page_scroll_pane_ParamLimits

0x7201,	// (0x00053dd3) vitu2_page_scroll_pane

0xdbc9,	// (0x0005a79b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc9,	// (0x0005a79b) list_single_hwr_training_symbol_option_pane

0xdbdc,	// (0x0005a7ae) list_single_hwr_training_symbol_option_pane_g1

0xdbe4,	// (0x0005a7b6) list_single_hwr_training_symbol_option_pane_t1

0xdbf2,	// (0x0005a7c4) bg_button_pane_cp023

0xdbfb,	// (0x0005a7cd) bg_button_pane_cp024

0x77d0,	// (0x000543a2) vitu2_page_scroll_pane_g1

0x77d8,	// (0x000543aa) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005c69e) vitu2_page_scroll_pane_g

0x77e0,	// (0x000543b2) vitu2_page_scroll_pane_t1

0xc9c3,	// (0x00059595) popup_char_count_window_g1

0xdc2e,	// (0x0005a800) popup_char_count_window_g2

0xdc37,	// (0x0005a809) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005c6a3) popup_char_count_window_g

0xdc40,	// (0x0005a812) popup_char_count_window_t1

0x9728,	// (0x000562fa) main_vded2_pane

0xd1b7,	// (0x00059d89) aid_size_cell_imed_line

0xd1c1,	// (0x00059d93) grid_imed_line_width_pane

0xa0c3,	// (0x00056c95) vid4_indicators_pane_g4

0xdc4e,	// (0x0005a820) cell_imed_line_width_pane_ParamLimits

0xdc4e,	// (0x0005a820) cell_imed_line_width_pane

0xdc62,	// (0x0005a834) cell_imed_line_width_pane_g1

0xdc6b,	// (0x0005a83d) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005c6aa) cell_imed_line_width_pane_g

0x77ef,	// (0x000543c1) main_vded2_pane_g1_ParamLimits

0x77ef,	// (0x000543c1) main_vded2_pane_g1

0x7805,	// (0x000543d7) main_vded2_pane_g2_ParamLimits

0x7805,	// (0x000543d7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005c6af) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005c6af) main_vded2_pane_g

0x7817,	// (0x000543e9) vded2_slider_pane_ParamLimits

0x7817,	// (0x000543e9) vded2_slider_pane

0x7827,	// (0x000543f9) aid_size_touch_vded2_end

0x7831,	// (0x00054403) aid_size_touch_vded2_playhead

0xdc73,	// (0x0005a845) aid_size_touch_vded2_start

0xdc7b,	// (0x0005a84d) vded2_slider_bg_pane

0xdc84,	// (0x0005a856) vded2_slider_pane_g1

0xdc8d,	// (0x0005a85f) vded2_slider_pane_g2

0x783b,	// (0x0005440d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005c6b4) vded2_slider_pane_g

0xdc95,	// (0x0005a867) vded2_slider_bg_pane_g1

0xdc9e,	// (0x0005a870) vded2_slider_bg_pane_g2

0xdca7,	// (0x0005a879) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005c6bb) vded2_slider_bg_pane_g

0x39f3,	// (0x000505c5) aid_postcard_touch_down_pane_ParamLimits

0x39f3,	// (0x000505c5) aid_postcard_touch_down_pane

0x3a09,	// (0x000505db) aid_postcard_touch_up_pane_ParamLimits

0x3a09,	// (0x000505db) aid_postcard_touch_up_pane

0x9728,	// (0x000562fa) main_blid2_pane

0x9c75,	// (0x00056847) popup_blid2_search_window

0x9728,	// (0x000562fa) blid2_gps_pane

0x9728,	// (0x000562fa) blid2_navig_pane

0x9728,	// (0x000562fa) blid2_search_pane

0x9728,	// (0x000562fa) blid2_tripm_pane

0x7846,	// (0x00054418) blid2_search_pane_g1_ParamLimits

0x7846,	// (0x00054418) blid2_search_pane_g1

0x7860,	// (0x00054432) blid2_search_pane_t1_ParamLimits

0x7860,	// (0x00054432) blid2_search_pane_t1

0x7872,	// (0x00054444) aid_size_cell_blid2_gps_ParamLimits

0x7872,	// (0x00054444) aid_size_cell_blid2_gps

0x788a,	// (0x0005445c) blid2_gps_pane_g1_ParamLimits

0x788a,	// (0x0005445c) blid2_gps_pane_g1

0x789e,	// (0x00054470) grid_blid2_satellite_pane_ParamLimits

0x789e,	// (0x00054470) grid_blid2_satellite_pane

0x78b8,	// (0x0005448a) blid2_navig_pane_g1_ParamLimits

0x78b8,	// (0x0005448a) blid2_navig_pane_g1

0x78c4,	// (0x00054496) blid2_navig_pane_t1_ParamLimits

0x78c4,	// (0x00054496) blid2_navig_pane_t1

0x78df,	// (0x000544b1) blid2_navig_pane_t2_ParamLimits

0x78df,	// (0x000544b1) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005c6c2) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005c6c2) blid2_navig_pane_t

0x78fa,	// (0x000544cc) blid2_navig_ring_pane_ParamLimits

0x78fa,	// (0x000544cc) blid2_navig_ring_pane

0x7913,	// (0x000544e5) blid2_speed_pane_ParamLimits

0x7913,	// (0x000544e5) blid2_speed_pane

0x791f,	// (0x000544f1) blid2_tripm_pane_g1_ParamLimits

0x791f,	// (0x000544f1) blid2_tripm_pane_g1

0x7938,	// (0x0005450a) blid2_tripm_pane_g2_ParamLimits

0x7938,	// (0x0005450a) blid2_tripm_pane_g2

0x794c,	// (0x0005451e) blid2_tripm_pane_g3_ParamLimits

0x794c,	// (0x0005451e) blid2_tripm_pane_g3

0x7960,	// (0x00054532) blid2_tripm_pane_g4_ParamLimits

0x7960,	// (0x00054532) blid2_tripm_pane_g4

0x7974,	// (0x00054546) blid2_tripm_pane_g5_ParamLimits

0x7974,	// (0x00054546) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005c6c7) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005c6c7) blid2_tripm_pane_g

0x799a,	// (0x0005456c) blid2_tripm_pane_t1_ParamLimits

0x799a,	// (0x0005456c) blid2_tripm_pane_t1

0x79b5,	// (0x00054587) blid2_tripm_pane_t2_ParamLimits

0x79b5,	// (0x00054587) blid2_tripm_pane_t2

0x79ce,	// (0x000545a0) blid2_tripm_pane_t3_ParamLimits

0x79ce,	// (0x000545a0) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005c6d4) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005c6d4) blid2_tripm_pane_t

0x7a15,	// (0x000545e7) cell_blid2_satellite_pane_ParamLimits

0x7a15,	// (0x000545e7) cell_blid2_satellite_pane

0x7a33,	// (0x00054605) cell_blid2_satellite_pane_g1

0xdcb0,	// (0x0005a882) cell_blid2_satellite_pane_t1

0xcc85,	// (0x00059857) blid2_speed_pane_g1

0xdcbe,	// (0x0005a890) blid2_speed_pane_t1

0xdccc,	// (0x0005a89e) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005c6dd) blid2_speed_pane_t

0xcc85,	// (0x00059857) blid2_navig_ring_pane_g1

0x7a3c,	// (0x0005460e) blid2_navig_ring_pane_g2

0x7a44,	// (0x00054616) blid2_navig_ring_pane_g3

0x7a4c,	// (0x0005461e) blid2_navig_ring_pane_g4

0x7a54,	// (0x00054626) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005c6e2) blid2_navig_ring_pane_g

0x9728,	// (0x000562fa) bg_popup_window_pane_cp011

0xdcda,	// (0x0005a8ac) popup_blid2_search_window_g1

0xdce2,	// (0x0005a8b4) popup_blid2_search_window_t1

0xdcf0,	// (0x0005a8c2) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005c6ed) popup_blid2_search_window_t

0xab30,	// (0x00057702) main_browser_pane_g1

0xa823,	// (0x000573f5) main_browser_pane_ParamLimits

0xb155,	// (0x00057d27) bg_button_pane_cp011_ParamLimits

0x6a76,	// (0x00053648) cell_vitu2_function_pane_g1_ParamLimits

0xc868,	// (0x0005943a) bg_popup_sub_pane_cp22_ParamLimits

0x05fb,	// (0x0004d1cd) input_focus_pane_cp08_ParamLimits

0x737b,	// (0x00053f4d) popup_vitu2_query_button_pane_ParamLimits

0x737b,	// (0x00053f4d) popup_vitu2_query_button_pane

0x0612,	// (0x0004d1e4) popup_vitu2_query_input_button_pane

0xd980,	// (0x0005a552) popup_vitu2_query_window_g1_ParamLimits

0x061c,	// (0x0004d1ee) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005c5ee) popup_vitu2_query_window_g_ParamLimits

0x9728,	// (0x000562fa) bg_button_pane_cp026

0x7a5c,	// (0x0005462e) popup_vitu2_query_input_button_pane_g1

0x9728,	// (0x000562fa) bg_button_pane_cp025

0xdcfe,	// (0x0005a8d0) popup_vitu2_query_button_pane_t1

0x5089,	// (0x00051c5b) main_mp3_pane_t6

0x5097,	// (0x00051c69) popup_slider_window_cp01

0xa027,	// (0x00056bf9) cam4_battery_pane

0xa080,	// (0x00056c52) cam4_battery_pane_cp02

0xa166,	// (0x00056d38) cam4_battery_pane_cp01

0xa166,	// (0x00056d38) cam4_battery_pane_cp03

0xcc85,	// (0x00059857) cam4_battery_pane_g1

0xdd0c,	// (0x0005a8de) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005c6f2) cam4_battery_pane_g

0xcb3c,	// (0x0005970e) popup_blid_sat_info2_window_t11

0xb2b3,	// (0x00057e85) aid_size_touch_mv_arrow_left_ParamLimits

0xb2dc,	// (0x00057eae) aid_size_touch_mv_arrow_right_ParamLimits

0xb33a,	// (0x00057f0c) navi_pane_g1_ParamLimits

0xb346,	// (0x00057f18) navi_pane_g2_ParamLimits

0xb374,	// (0x00057f46) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005bfb7) navi_pane_g_ParamLimits

0x34ab,	// (0x0005007d) navi_pane_mv_t1_ParamLimits

0x5cec,	// (0x000528be) grid_imed_effect_pane_ParamLimits

0x21ba,	// (0x0004ed8c) aid_placing_vt_slider_lsc

0xaa7f,	// (0x00057651) aid_placing_vt_slider_prt

0xb155,	// (0x00057d27) bg_tb_trans_pane_cp01_ParamLimits

0xce08,	// (0x000599da) popup_image_details_window_g1_ParamLimits

0xce1b,	// (0x000599ed) popup_image_details_window_g2_ParamLimits

0xce30,	// (0x00059a02) popup_image_details_window_g3_ParamLimits

0xce30,	// (0x00059a02) popup_image_details_window_g3

0xf718,	// (0x0005c2ea) popup_image_details_window_g_ParamLimits

0xce44,	// (0x00059a16) popup_image_details_window_t1_ParamLimits

0xce56,	// (0x00059a28) popup_image_details_window_t2_ParamLimits

0xce6f,	// (0x00059a41) popup_image_details_window_t3_ParamLimits

0xce83,	// (0x00059a55) popup_image_details_window_t4_ParamLimits

0xce9e,	// (0x00059a70) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005c2f1) popup_image_details_window_t_ParamLimits

0x765d,	// (0x0005422f) cl_header_name_pane_ParamLimits

0x765d,	// (0x0005422f) cl_header_name_pane

0x7a64,	// (0x00054636) cl_header_name_pane_t1_ParamLimits

0x7a64,	// (0x00054636) cl_header_name_pane_t1

0x7a85,	// (0x00054657) cl_header_name_pane_t2_ParamLimits

0x7a85,	// (0x00054657) cl_header_name_pane_t2

0x7ac7,	// (0x00054699) cl_header_name_pane_t3_ParamLimits

0x7ac7,	// (0x00054699) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005c6f7) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005c6f7) cl_header_name_pane_t

0xb403,	// (0x00057fd5) navi_pane_mv_g2_ParamLimits

0xd6ce,	// (0x0005a2a0) field_vitu2_entry_pane_g1_ParamLimits

0xd6da,	// (0x0005a2ac) field_vitu2_entry_pane_g2_ParamLimits

0xd6e6,	// (0x0005a2b8) field_vitu2_entry_pane_g3_ParamLimits

0xd6e6,	// (0x0005a2b8) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005c4ed) field_vitu2_entry_pane_g_ParamLimits

0xa0f8,	// (0x00056cca) cell_vitu2_itu_pane_g1_ParamLimits

0x6a0a,	// (0x000535dc) cell_vitu2_itu_pane_g2_ParamLimits

0x6a0a,	// (0x000535dc) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005c4f9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005c4f9) cell_vitu2_itu_pane_g

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp05_ParamLimits

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp05

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp03

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp04

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp10_ParamLimits

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp10

0x0739,	// (0x0004d30b) bg_vkb2_func_pane_cp08

0x7607,	// (0x000541d9) bg_vkb2_func_pane_cp06

0x7615,	// (0x000541e7) bg_vkb2_func_pane_cp07

0xdc04,	// (0x0005a7d6) bg_vkb2_func_pane_cp11_ParamLimits

0xdc04,	// (0x0005a7d6) bg_vkb2_func_pane_cp11

0xdc19,	// (0x0005a7eb) bg_vkb2_func_pane_cp12_ParamLimits

0xdc19,	// (0x0005a7eb) bg_vkb2_func_pane_cp12

0x9728,	// (0x000562fa) bg_vkb2_func_pane_cp09

0xd706,	// (0x0005a2d8) bg_vkb2_func_pane_g1

0xac41,	// (0x00057813) bg_vkb2_func_pane_g2

0xd70e,	// (0x0005a2e0) bg_vkb2_func_pane_g3

0xd716,	// (0x0005a2e8) bg_vkb2_func_pane_g4

0xd945,	// (0x0005a517) bg_vkb2_func_pane_g5

0xd72e,	// (0x0005a300) bg_vkb2_func_pane_g6

0xd736,	// (0x0005a308) bg_vkb2_func_pane_g7

0xd726,	// (0x0005a2f8) bg_vkb2_func_pane_g8

0xac21,	// (0x000577f3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005c6fe) bg_vkb2_func_pane_g

0x7988,	// (0x0005455a) blid2_tripm_pane_g6_ParamLimits

0x7988,	// (0x0005455a) blid2_tripm_pane_g6

0xd570,	// (0x0005a142) mp4_progress_pane_g1

0x7a01,	// (0x000545d3) blid2_tripm_values_pane_ParamLimits

0x7a01,	// (0x000545d3) blid2_tripm_values_pane

0x7af8,	// (0x000546ca) blid2_tripm_values_pane_t1

0x7b06,	// (0x000546d8) blid2_tripm_values_pane_t2

0x7b14,	// (0x000546e6) blid2_tripm_values_pane_t3

0x7b22,	// (0x000546f4) blid2_tripm_values_pane_t4

0x7b30,	// (0x00054702) blid2_tripm_values_pane_t5

0x7b3e,	// (0x00054710) blid2_tripm_values_pane_t6

0x7b4c,	// (0x0005471e) blid2_tripm_values_pane_t7

0x7b5a,	// (0x0005472c) blid2_tripm_values_pane_t8

0x7b68,	// (0x0005473a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005c711) blid2_tripm_values_pane_t

0x21fc,	// (0x0004edce) call_video_pane_t1_ParamLimits

0x221a,	// (0x0004edec) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005be40) call_video_pane_t_ParamLimits

0x03f8,	// (0x0004cfca) msg_header_pane_g1_ParamLimits

0xb5eb,	// (0x000581bd) msg_header_pane_g2_ParamLimits

0xb5eb,	// (0x000581bd) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c05a) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c05a) msg_header_pane_g

0xa823,	// (0x000573f5) main_clock2_pane_ParamLimits

0x59ed,	// (0x000525bf) grid_clock2_toolbar_pane_ParamLimits

0x59ed,	// (0x000525bf) grid_clock2_toolbar_pane

0x59ed,	// (0x000525bf) listscroll_clock2_pane_ParamLimits

0x59ed,	// (0x000525bf) listscroll_clock2_pane

0x5ae0,	// (0x000526b2) main_clock2_pane_t3_ParamLimits

0x5ae0,	// (0x000526b2) main_clock2_pane_t3

0x5b04,	// (0x000526d6) main_clock2_pane_t4_ParamLimits

0x5b04,	// (0x000526d6) main_clock2_pane_t4

0xdd16,	// (0x0005a8e8) cell_clock2_toolbar_pane

0xdd1e,	// (0x0005a8f0) cell_clock2_toolbar_pane_cp01

0xdd1e,	// (0x0005a8f0) cell_clock2_toolbar_pane_cp02

0xdd26,	// (0x0005a8f8) cell_clock2_toolbar_pane_cp03

0xdd2e,	// (0x0005a900) list_clock2_pane

0xb229,	// (0x00057dfb) scroll_pane_cp10

0xdd36,	// (0x0005a908) list_single_clock2_pane_ParamLimits

0xdd36,	// (0x0005a908) list_single_clock2_pane

0xa9e8,	// (0x000575ba) list_highlight_pane_cp08

0xdd43,	// (0x0005a915) list_single_clock2_pane_t1

0xdd51,	// (0x0005a923) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005c724) list_single_clock2_pane_t

0x9728,	// (0x000562fa) bg_button_pane_cp10

0xdd5f,	// (0x0005a931) cell_clock2_toolbar_pane_g1

0x397f,	// (0x00050551) aid_main_viewer_pane_g1_ParamLimits

0x397f,	// (0x00050551) aid_main_viewer_pane_g1

0x398d,	// (0x0005055f) aid_main_viewer_pane_g2_ParamLimits

0x398d,	// (0x0005055f) aid_main_viewer_pane_g2

0x399b,	// (0x0005056d) aid_main_viewer_pane_g3_ParamLimits

0x399b,	// (0x0005056d) aid_main_viewer_pane_g3

0x39aa,	// (0x0005057c) aid_main_viewer_pane_g4_ParamLimits

0x39aa,	// (0x0005057c) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c06b) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c06b) aid_main_viewer_pane_g

0x42b0,	// (0x00050e82) main_calc_pane_ParamLimits

0x42c4,	// (0x00050e96) main_dialer2_pane_ParamLimits

0x9728,	// (0x000562fa) main_cam6_pane

0x9728,	// (0x000562fa) main_vid6_pane

0x59f9,	// (0x000525cb) listscroll_gen_pane_cp06_ParamLimits

0x59f9,	// (0x000525cb) listscroll_gen_pane_cp06

0x5b27,	// (0x000526f9) main_clock2_pane_t5_ParamLimits

0x5b27,	// (0x000526f9) main_clock2_pane_t5

0x5b81,	// (0x00052753) aid_call2_pane_cp10_ParamLimits

0x5b93,	// (0x00052765) aid_call_pane_cp10_ParamLimits

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ba5,	// (0x00052777) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ba5,	// (0x00052777) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2a7,	// (0x00057e79) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005c3a6) popup_clock_analogue_window_cp10_g_ParamLimits

0x5bb7,	// (0x00052789) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6220,	// (0x00052df2) cell_dialer2_keypad_pane_g2_ParamLimits

0x6220,	// (0x00052df2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005c48c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005c48c) cell_dialer2_keypad_pane_g

0x623c,	// (0x00052e0e) cell_dialer2_keypad_pane_t1

0x6d93,	// (0x00053965) main_cset_text2_pane_ParamLimits

0x6d93,	// (0x00053965) main_cset_text2_pane

0xdb6c,	// (0x0005a73e) area_vitu2_query_pane_g1_ParamLimits

0x0700,	// (0x0004d2d2) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005c641) area_vitu2_query_pane_g_ParamLimits

0x75e3,	// (0x000541b5) area_vitu2_query_pane_t7_ParamLimits

0x75e3,	// (0x000541b5) area_vitu2_query_pane_t7

0x7607,	// (0x000541d9) bg_button_pane_cp018_ParamLimits

0x7615,	// (0x000541e7) bg_button_pane_cp021_ParamLimits

0x0739,	// (0x0004d30b) bg_button_pane_cp022_ParamLimits

0x0739,	// (0x0004d30b) bg_vkb2_func_pane_cp08_ParamLimits

0x7607,	// (0x000541d9) bg_vkb2_func_pane_cp06_ParamLimits

0x7615,	// (0x000541e7) bg_vkb2_func_pane_cp07_ParamLimits

0x0748,	// (0x0004d31a) input_focus_pane_cp09_ParamLimits

0xa1d0,	// (0x00056da2) cam6_autofocus_pane_ParamLimits

0xa1d0,	// (0x00056da2) cam6_autofocus_pane

0x7b76,	// (0x00054748) cam6_image_uncrop_pane_ParamLimits

0x7b76,	// (0x00054748) cam6_image_uncrop_pane

0x7b85,	// (0x00054757) cam6_indi_pane_ParamLimits

0x7b85,	// (0x00054757) cam6_indi_pane

0x7b9b,	// (0x0005476d) cam6_mode_pane_ParamLimits

0x7b9b,	// (0x0005476d) cam6_mode_pane

0x7bad,	// (0x0005477f) cam6_timer_pane_ParamLimits

0x7bad,	// (0x0005477f) cam6_timer_pane

0x7bb9,	// (0x0005478b) cam6_zoom_pane_ParamLimits

0x7bb9,	// (0x0005478b) cam6_zoom_pane

0x7bc5,	// (0x00054797) cam6_mode_pane_g1_ParamLimits

0x7bc5,	// (0x00054797) cam6_mode_pane_g1

0x7bd5,	// (0x000547a7) cam6_mode_pane_g2_ParamLimits

0x7bd5,	// (0x000547a7) cam6_mode_pane_g2

0x7be5,	// (0x000547b7) cam6_mode_pane_g3_ParamLimits

0x7be5,	// (0x000547b7) cam6_mode_pane_g3

0x7bf5,	// (0x000547c7) cam6_mode_pane_g4_ParamLimits

0x7bf5,	// (0x000547c7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005c729) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005c729) cam6_mode_pane_g

0xdd67,	// (0x0005a939) bg_tb_trans_pane_cp08_ParamLimits

0xdd67,	// (0x0005a939) bg_tb_trans_pane_cp08

0xdd75,	// (0x0005a947) cam6_battery_pane_ParamLimits

0xdd75,	// (0x0005a947) cam6_battery_pane

0xdd8b,	// (0x0005a95d) cam6_indi_pane_g1_ParamLimits

0xdd8b,	// (0x0005a95d) cam6_indi_pane_g1

0xdd9d,	// (0x0005a96f) cam6_indi_pane_g2_ParamLimits

0xdd9d,	// (0x0005a96f) cam6_indi_pane_g2

0xddaf,	// (0x0005a981) cam6_indi_pane_g3_ParamLimits

0xddaf,	// (0x0005a981) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005c732) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005c732) cam6_indi_pane_g

0xddc1,	// (0x0005a993) cam6_indi_pane_t1_ParamLimits

0xddc1,	// (0x0005a993) cam6_indi_pane_t1

0x7c05,	// (0x000547d7) cam6_autofocus_pane_g1

0x7c0d,	// (0x000547df) cam6_autofocus_pane_g2

0x7c15,	// (0x000547e7) cam6_autofocus_pane_g3

0x7c1d,	// (0x000547ef) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005c739) cam6_autofocus_pane_g

0xdde7,	// (0x0005a9b9) cam6_timer_pane_g1

0xddef,	// (0x0005a9c1) cam6_timer_pane_t1

0xddfd,	// (0x0005a9cf) cam6_zoom_cont_pane

0xde05,	// (0x0005a9d7) cam6_zoom_pane_g1

0xde0d,	// (0x0005a9df) cam6_zoom_pane_g2

0x7c25,	// (0x000547f7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005c742) cam6_zoom_pane_g

0xcc85,	// (0x00059857) cam6_battery_pane_g1

0xcc85,	// (0x00059857) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ae) cam6_battery_pane_g

0xde15,	// (0x0005a9e7) cam6_zoom_cont_pane_g1

0xde1e,	// (0x0005a9f0) cam6_zoom_cont_pane_g2

0xde27,	// (0x0005a9f9) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005c749) cam6_zoom_cont_pane_g

0x7c42,	// (0x00054814) cam6_mode_pane_cp_ParamLimits

0x7c42,	// (0x00054814) cam6_mode_pane_cp

0x7bb9,	// (0x0005478b) cam6_zoom_pane_cp_ParamLimits

0x7bb9,	// (0x0005478b) cam6_zoom_pane_cp

0x7c54,	// (0x00054826) vid6_image_uncrop_cif_pane_ParamLimits

0x7c54,	// (0x00054826) vid6_image_uncrop_cif_pane

0x7c64,	// (0x00054836) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c64,	// (0x00054836) vid6_image_uncrop_nhd_pane

0x7b76,	// (0x00054748) vid6_image_uncrop_vga_pane_ParamLimits

0x7b76,	// (0x00054748) vid6_image_uncrop_vga_pane

0x7c73,	// (0x00054845) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c73,	// (0x00054845) vid6_image_uncrop_wvga_pane

0x7c82,	// (0x00054854) vid6_indi_pane_ParamLimits

0x7c82,	// (0x00054854) vid6_indi_pane

0xdd67,	// (0x0005a939) bg_tb_trans_pane_cp09_ParamLimits

0xdd67,	// (0x0005a939) bg_tb_trans_pane_cp09

0xde3f,	// (0x0005aa11) cam6_battery_pane_cp_ParamLimits

0xde3f,	// (0x0005aa11) cam6_battery_pane_cp

0xde4b,	// (0x0005aa1d) vid6_indi_pane_g1_ParamLimits

0xde4b,	// (0x0005aa1d) vid6_indi_pane_g1

0xde5d,	// (0x0005aa2f) vid6_indi_pane_g2_ParamLimits

0xde5d,	// (0x0005aa2f) vid6_indi_pane_g2

0xde6f,	// (0x0005aa41) vid6_indi_pane_g3_ParamLimits

0xde6f,	// (0x0005aa41) vid6_indi_pane_g3

0xde84,	// (0x0005aa56) vid6_indi_pane_g4_ParamLimits

0xde84,	// (0x0005aa56) vid6_indi_pane_g4

0xde99,	// (0x0005aa6b) vid6_indi_pane_g5_ParamLimits

0xde99,	// (0x0005aa6b) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005c750) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005c750) vid6_indi_pane_g

0xdeb3,	// (0x0005aa85) vid6_indi_pane_t1_ParamLimits

0xdeb3,	// (0x0005aa85) vid6_indi_pane_t1

0xdec9,	// (0x0005aa9b) vid6_indi_pane_t2_ParamLimits

0xdec9,	// (0x0005aa9b) vid6_indi_pane_t2

0xdef1,	// (0x0005aac3) vid6_indi_pane_t3_ParamLimits

0xdef1,	// (0x0005aac3) vid6_indi_pane_t3

0xdf19,	// (0x0005aaeb) vid6_indi_pane_t4_ParamLimits

0xdf19,	// (0x0005aaeb) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005c75b) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005c75b) vid6_indi_pane_t

0xdf3d,	// (0x0005ab0f) wait_bar_pane_cp08

0x7c9a,	// (0x0005486c) main_cset_text2_pane_t1_ParamLimits

0x7c9a,	// (0x0005486c) main_cset_text2_pane_t1

0x7c2d,	// (0x000547ff) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c2d,	// (0x000547ff) listscroll_gen_pane_cp06_t1

0x9728,	// (0x000562fa) main_cam6_set_pane

0xcee8,	// (0x00059aba) bg_tb_trans_pane_cp06_ParamLimits

0xa02f,	// (0x00056c01) cam4_indicators_pane_g1_ParamLimits

0xa040,	// (0x00056c12) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005c4c9) cam4_indicators_pane_g_ParamLimits

0xa05e,	// (0x00056c30) cam4_indicators_pane_t1_ParamLimits

0xb155,	// (0x00057d27) bg_tb_trans_pane_cp07_ParamLimits

0xa08a,	// (0x00056c5c) vid4_indicators_pane_g1_ParamLimits

0xa09e,	// (0x00056c70) vid4_indicators_pane_g2_ParamLimits

0xa0b2,	// (0x00056c84) vid4_indicators_pane_g3_ParamLimits

0xa0c3,	// (0x00056c95) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005c4db) vid4_indicators_pane_g_ParamLimits

0xa0e1,	// (0x00056cb3) vid4_indicators_pane_t1_ParamLimits

0xa16e,	// (0x00056d40) vid4_progress_pane_g1_ParamLimits

0xa17e,	// (0x00056d50) vid4_progress_pane_g2_ParamLimits

0x774d,	// (0x0005431f) vid4_progress_pane_g3_ParamLimits

0xa18e,	// (0x00056d60) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005c68c) vid4_progress_pane_g_ParamLimits

0x775f,	// (0x00054331) vid4_progress_pane_t1_ParamLimits

0xa1a6,	// (0x00056d78) vid4_progress_pane_t2_ParamLimits

0xa1bb,	// (0x00056d8d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005c697) vid4_progress_pane_t_ParamLimits

0x7777,	// (0x00054349) wait_bar_pane_cp07_ParamLimits

0x7cb7,	// (0x00054889) main_cam6_set_pane_g2_ParamLimits

0x7cb7,	// (0x00054889) main_cam6_set_pane_g2

0x7cdb,	// (0x000548ad) main_cset6_listscroll_pane_ParamLimits

0x7cdb,	// (0x000548ad) main_cset6_listscroll_pane

0x7cfb,	// (0x000548cd) main_cset6_slider_pane_ParamLimits

0x7cfb,	// (0x000548cd) main_cset6_slider_pane

0x7d11,	// (0x000548e3) main_cset6_text2_pane_ParamLimits

0x7d11,	// (0x000548e3) main_cset6_text2_pane

0xdf4c,	// (0x0005ab1e) main_cset6_text_pane

0xdf54,	// (0x0005ab26) main_cset_list_pane_copy1_ParamLimits

0xdf54,	// (0x0005ab26) main_cset_list_pane_copy1

0xdf64,	// (0x0005ab36) scroll_pane_cp028_copy1

0x7d1f,	// (0x000548f1) cset_list_set_pane_copy1

0x7d30,	// (0x00054902) aid_position_infowindow_above_copy1

0x7d38,	// (0x0005490a) aid_position_infowindow_below_copy1

0x076b,	// (0x0004d33d) cset_list_set_pane_g1_copy1

0x0773,	// (0x0004d345) cset_list_set_pane_g3_copy1_ParamLimits

0x0773,	// (0x0004d345) cset_list_set_pane_g3_copy1

0x0782,	// (0x0004d354) cset_list_set_pane_t1_copy1_ParamLimits

0x0782,	// (0x0004d354) cset_list_set_pane_t1_copy1

0xb155,	// (0x00057d27) list_highlight_pane_cp021_copy1_ParamLimits

0xb155,	// (0x00057d27) list_highlight_pane_cp021_copy1

0xdf6d,	// (0x0005ab3f) cset6_slider_pane_ParamLimits

0xdf6d,	// (0x0005ab3f) cset6_slider_pane

0xdf99,	// (0x0005ab6b) main_cset6_slider_pane_g1_ParamLimits

0xdf99,	// (0x0005ab6b) main_cset6_slider_pane_g1

0x7d40,	// (0x00054912) main_cset6_slider_pane_g2_ParamLimits

0x7d40,	// (0x00054912) main_cset6_slider_pane_g2

0xdfc1,	// (0x0005ab93) main_cset6_slider_pane_g3_ParamLimits

0xdfc1,	// (0x0005ab93) main_cset6_slider_pane_g3

0x7d68,	// (0x0005493a) main_cset6_slider_pane_g4_ParamLimits

0x7d68,	// (0x0005493a) main_cset6_slider_pane_g4

0x7d74,	// (0x00054946) main_cset6_slider_pane_g5_ParamLimits

0x7d74,	// (0x00054946) main_cset6_slider_pane_g5

0xd835,	// (0x0005a407) main_cset6_slider_pane_g7_ParamLimits

0xd835,	// (0x0005a407) main_cset6_slider_pane_g7

0xd841,	// (0x0005a413) main_cset6_slider_pane_g8_ParamLimits

0xd841,	// (0x0005a413) main_cset6_slider_pane_g8

0x6e40,	// (0x00053a12) main_cset6_slider_pane_g9_ParamLimits

0x6e40,	// (0x00053a12) main_cset6_slider_pane_g9

0x6e4c,	// (0x00053a1e) main_cset6_slider_pane_g10_ParamLimits

0x6e4c,	// (0x00053a1e) main_cset6_slider_pane_g10

0x6e58,	// (0x00053a2a) main_cset6_slider_pane_g11_ParamLimits

0x6e58,	// (0x00053a2a) main_cset6_slider_pane_g11

0x6e64,	// (0x00053a36) main_cset6_slider_pane_g12_ParamLimits

0x6e64,	// (0x00053a36) main_cset6_slider_pane_g12

0x6e70,	// (0x00053a42) main_cset6_slider_pane_g13_ParamLimits

0x6e70,	// (0x00053a42) main_cset6_slider_pane_g13

0x6e7c,	// (0x00053a4e) main_cset6_slider_pane_g14_ParamLimits

0x6e7c,	// (0x00053a4e) main_cset6_slider_pane_g14

0x7d80,	// (0x00054952) main_cset6_slider_pane_g15_ParamLimits

0x7d80,	// (0x00054952) main_cset6_slider_pane_g15

0x6ea0,	// (0x00053a72) main_cset6_slider_pane_g16_ParamLimits

0x6ea0,	// (0x00053a72) main_cset6_slider_pane_g16

0x6eac,	// (0x00053a7e) main_cset6_slider_pane_g17_ParamLimits

0x6eac,	// (0x00053a7e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005c764) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005c764) main_cset6_slider_pane_g

0xdfcd,	// (0x0005ab9f) main_cset6_slider_pane_t1_ParamLimits

0xdfcd,	// (0x0005ab9f) main_cset6_slider_pane_t1

0x7db0,	// (0x00054982) main_cset6_slider_pane_t2_ParamLimits

0x7db0,	// (0x00054982) main_cset6_slider_pane_t2

0x7ddb,	// (0x000549ad) main_cset6_slider_pane_t3_ParamLimits

0x7ddb,	// (0x000549ad) main_cset6_slider_pane_t3

0x7e06,	// (0x000549d8) main_cset6_slider_pane_t4_ParamLimits

0x7e06,	// (0x000549d8) main_cset6_slider_pane_t4

0x7e31,	// (0x00054a03) main_cset6_slider_pane_t5_ParamLimits

0x7e31,	// (0x00054a03) main_cset6_slider_pane_t5

0xe00e,	// (0x0005abe0) main_cset6_slider_pane_t7_ParamLimits

0xe00e,	// (0x0005abe0) main_cset6_slider_pane_t7

0x7e5c,	// (0x00054a2e) main_cset6_slider_pane_t8_ParamLimits

0x7e5c,	// (0x00054a2e) main_cset6_slider_pane_t8

0x7e80,	// (0x00054a52) main_cset6_slider_pane_t9_ParamLimits

0x7e80,	// (0x00054a52) main_cset6_slider_pane_t9

0x7ea4,	// (0x00054a76) main_cset6_slider_pane_t10_ParamLimits

0x7ea4,	// (0x00054a76) main_cset6_slider_pane_t10

0x7ec8,	// (0x00054a9a) main_cset6_slider_pane_t11_ParamLimits

0x7ec8,	// (0x00054a9a) main_cset6_slider_pane_t11

0xe044,	// (0x0005ac16) main_cset6_slider_pane_t14_ParamLimits

0xe044,	// (0x0005ac16) main_cset6_slider_pane_t14

0xe07d,	// (0x0005ac4f) main_cset6_slider_pane_t15_ParamLimits

0xe07d,	// (0x0005ac4f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005c789) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005c789) main_cset6_slider_pane_t

0xd8f9,	// (0x0005a4cb) cset_slider_pane_g1_copy1

0xd902,	// (0x0005a4d4) cset_slider_pane_g2_copy1

0xd90b,	// (0x0005a4dd) cset_slider_pane_g3_copy1

0x9728,	// (0x000562fa) bg_popup_sub_pane_cp011_copy1

0xe0b6,	// (0x0005ac88) main_cset_text_pane_g1_copy1

0xd994,	// (0x0005a566) main_cset_text_pane_t1_copy1

0xd9a2,	// (0x0005a574) main_cset_text_pane_t2_copy1

0xd9b0,	// (0x0005a582) main_cset_text_pane_t3_copy1

0xd9be,	// (0x0005a590) main_cset_text_pane_t4_copy1

0xd9cc,	// (0x0005a59e) main_cset_text_pane_t5_copy1

0xe0be,	// (0x0005ac90) main_cset_text_pane_t6_copy1

0xd9e8,	// (0x0005a5ba) main_cset_text_pane_t7_copy1

0x7c9a,	// (0x0005486c) main_cset_text2_pane_t1_copy1

0xb155,	// (0x00057d27) main_ncimui_pane

0x450e,	// (0x000510e0) popup_query_ncimui_window_ParamLimits

0x450e,	// (0x000510e0) popup_query_ncimui_window

0x522d,	// (0x00051dff) field_cale_ev2_pane_g4_ParamLimits

0x522d,	// (0x00051dff) field_cale_ev2_pane_g4

0x6100,	// (0x00052cd2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6100,	// (0x00052cd2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005c467) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005c467) cell_video_dialer_keypad_pane_g

0x6118,	// (0x00052cea) cell_video_dialer_keypad_pane_t1

0x9728,	// (0x000562fa) bg_popup_window_pane_cp012

0xb0ce,	// (0x00057ca0) heading_pane_cp06

0xe0ea,	// (0x0005acbc) ncim_query_content_pane

0x9728,	// (0x000562fa) bg_popup_heading_pane_cp01

0xe0f2,	// (0x0005acc4) ncim_heading_pane_t1

0xe100,	// (0x0005acd2) ncim_indicator_popup_pane

0xe112,	// (0x0005ace4) ncim_query_button_pane

0xe126,	// (0x0005acf8) ncim_query_content_pane_t1

0xe138,	// (0x0005ad0a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005c7cd) ncim_query_content_pane_t

0xe172,	// (0x0005ad44) ncim_query_list_pane

0xe184,	// (0x0005ad56) ncim_query_popup_pane

0xe100,	// (0x0005acd2) ncim_indicator_popup_pane_ParamLimits

0x8012,	// (0x00054be4) ncim_query_content_pane_g1_ParamLimits

0x8012,	// (0x00054be4) ncim_query_content_pane_g1

0xe126,	// (0x0005acf8) ncim_query_content_pane_t1_ParamLimits

0xe138,	// (0x0005ad0a) ncim_query_content_pane_t2_ParamLimits

0x801e,	// (0x00054bf0) ncim_query_content_pane_t3_ParamLimits

0x801e,	// (0x00054bf0) ncim_query_content_pane_t3

0x8046,	// (0x00054c18) ncim_query_content_pane_t4_ParamLimits

0x8046,	// (0x00054c18) ncim_query_content_pane_t4

0x806e,	// (0x00054c40) ncim_query_content_pane_t5_ParamLimits

0x806e,	// (0x00054c40) ncim_query_content_pane_t5

0xe14a,	// (0x0005ad1c) ncim_query_content_pane_t6_ParamLimits

0xe14a,	// (0x0005ad1c) ncim_query_content_pane_t6

0xfbfb,	// (0x0005c7cd) ncim_query_content_pane_t_ParamLimits

0xe172,	// (0x0005ad44) ncim_query_list_pane_ParamLimits

0xe184,	// (0x0005ad56) ncim_query_popup_pane_ParamLimits

0xe198,	// (0x0005ad6a) wait_bar_pane_cp04

0x9728,	// (0x000562fa) input_focus_pane_cp011

0xe1a0,	// (0x0005ad72) ncim_query_popup_pane_t1

0xe1ae,	// (0x0005ad80) ncim_list_query_list_pane_ParamLimits

0xe1ae,	// (0x0005ad80) ncim_list_query_list_pane

0x9728,	// (0x000562fa) bg_button_pane_cp027

0xe1bb,	// (0x0005ad8d) ncim_query_button_pane_g1

0x9728,	// (0x000562fa) list_highlight_pane_cp012

0xe1c5,	// (0x0005ad97) ncim_list_query_list_pane_g1

0xe1cd,	// (0x0005ad9f) ncim_list_query_list_pane_t1

0xa04f,	// (0x00056c21) cam4_indicators_pane_g3_ParamLimits

0xa04f,	// (0x00056c21) cam4_indicators_pane_g3

0xa0cf,	// (0x00056ca1) vid4_indicators_pane_g5_ParamLimits

0xa0cf,	// (0x00056ca1) vid4_indicators_pane_g5

0xa19a,	// (0x00056d6c) vid4_progress_pane_g5_ParamLimits

0xa19a,	// (0x00056d6c) vid4_progress_pane_g5

0x7f00,	// (0x00054ad2) main_ncimui_pane_g1

0x7f66,	// (0x00054b38) ncimui_group_query_pane_ParamLimits

0x7f66,	// (0x00054b38) ncimui_group_query_pane

0x7fae,	// (0x00054b80) ncimui_list_pane_ParamLimits

0x7fae,	// (0x00054b80) ncimui_list_pane

0x7fd5,	// (0x00054ba7) ncimui_text_pane_ParamLimits

0x7fd5,	// (0x00054ba7) ncimui_text_pane

0x8096,	// (0x00054c68) ncimui_text_pane_t1_ParamLimits

0x8096,	// (0x00054c68) ncimui_text_pane_t1

0xe1db,	// (0x0005adad) ncimui_list_single_graphic_pane_ParamLimits

0xe1db,	// (0x0005adad) ncimui_list_single_graphic_pane

0x80b4,	// (0x00054c86) ncimui_query_pane_ParamLimits

0x80b4,	// (0x00054c86) ncimui_query_pane

0x9728,	// (0x000562fa) list_highlight_pane_cp013

0xe1eb,	// (0x0005adbd) ncim_list_query_list_pane_t1_copy1

0xe1c5,	// (0x0005ad97) ncim_list_single_graphic_pane_g1

0xe1f9,	// (0x0005adcb) ncim_query_button_pane_cp01

0xe205,	// (0x0005add7) ncim_query_entry_pane_ParamLimits

0xe205,	// (0x0005add7) ncim_query_entry_pane

0xe218,	// (0x0005adea) ncimui_query_pane_g1

0xe224,	// (0x0005adf6) ncimui_query_pane_t1_ParamLimits

0xe224,	// (0x0005adf6) ncimui_query_pane_t1

0xb155,	// (0x00057d27) input_focus_pane_cp012

0xe23d,	// (0x0005ae0f) ncim_query_entry_pane_t1

0xa823,	// (0x000573f5) main_im_pane_ParamLimits

0xb155,	// (0x00057d27) main_mobtv_pane_ParamLimits

0xb155,	// (0x00057d27) main_mobtv_pane

0x7d98,	// (0x0005496a) main_cset6_slider_pane_g18_ParamLimits

0x7d98,	// (0x0005496a) main_cset6_slider_pane_g18

0x7da4,	// (0x00054976) main_cset6_slider_pane_g19_ParamLimits

0x7da4,	// (0x00054976) main_cset6_slider_pane_g19

0xb147,	// (0x00057d19) bg_main_mobtv_pane_ParamLimits

0xb147,	// (0x00057d19) bg_main_mobtv_pane

0x80c7,	// (0x00054c99) main_mobtv_info_pane

0x80d0,	// (0x00054ca2) main_mobtv_loading_pane_ParamLimits

0x80d0,	// (0x00054ca2) main_mobtv_loading_pane

0xe24f,	// (0x0005ae21) main_mobtv_pg_channel_list_pane

0xe259,	// (0x0005ae2b) main_mobtv_pg_hdr_pane

0x80dd,	// (0x00054caf) main_mobtv_programe_curr_pane_ParamLimits

0x80dd,	// (0x00054caf) main_mobtv_programe_curr_pane

0x80ea,	// (0x00054cbc) main_mobtv_programe_next_pane_ParamLimits

0x80ea,	// (0x00054cbc) main_mobtv_programe_next_pane

0xe262,	// (0x0005ae34) popup_mobtv_noti_window

0xcc85,	// (0x00059857) main_tv_pg_hdr_pane_g1

0xe26a,	// (0x0005ae3c) main_tv_pg_hdr_pane_g2

0xe272,	// (0x0005ae44) main_tv_pg_hdr_pane_g3

0xe27a,	// (0x0005ae4c) main_tv_pg_hdr_pane_g4

0xe282,	// (0x0005ae54) main_tv_pg_hdr_pane_g5

0xe28c,	// (0x0005ae5e) main_tv_pg_hdr_pane_g6

0xe296,	// (0x0005ae68) main_tv_pg_hdr_pane_g7

0xe2a0,	// (0x0005ae72) main_tv_pg_hdr_pane_g8

0xe2aa,	// (0x0005ae7c) main_tv_pg_hdr_pane_g9

0xe2b4,	// (0x0005ae86) main_tv_pg_hdr_pane_g10

0xe2be,	// (0x0005ae90) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005c7da) main_tv_pg_hdr_pane_g

0xe2c8,	// (0x0005ae9a) main_tv_pg_hdr_pane_t1

0xe2d6,	// (0x0005aea8) main_tv_pg_hdr_pane_t2

0xe2e4,	// (0x0005aeb6) main_tv_pg_hdr_pane_t3

0xe2f4,	// (0x0005aec6) main_tv_pg_hdr_pane_t4

0xe304,	// (0x0005aed6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005c7f1) main_tv_pg_hdr_pane_t

0xe314,	// (0x0005aee6) single_mobtv_pg_channel_pane_ParamLimits

0xe314,	// (0x0005aee6) single_mobtv_pg_channel_pane

0xe326,	// (0x0005aef8) single_mobtv_pg_channel_table_pane

0xe32f,	// (0x0005af01) single_mobtv_pg_channel_thumb_pane

0xe338,	// (0x0005af0a) single_tv_pg_channel_pane_g1

0xe341,	// (0x0005af13) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005c7fc) single_tv_pg_channel_pane_g

0xcee8,	// (0x00059aba) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee8,	// (0x00059aba) bg_single_mobtv_pg_channel_thumb_pane

0xe34a,	// (0x0005af1c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34a,	// (0x0005af1c) single_mobtv_pg_channel_thumb_pane_g1

0xe358,	// (0x0005af2a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe358,	// (0x0005af2a) single_mobtv_pg_channel_thumb_pane_g2

0xe364,	// (0x0005af36) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe364,	// (0x0005af36) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005c801) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005c801) single_mobtv_pg_channel_thumb_pane_g

0xe370,	// (0x0005af42) single_mobtv_pg_channel_thumb_pane_t1

0xe37e,	// (0x0005af50) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005c808) single_mobtv_pg_channel_thumb_pane_t

0xcc85,	// (0x00059857) bg_single_mobtv_pg_channel_table_pane_g1

0xcc85,	// (0x00059857) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ae) bg_single_mobtv_pg_channel_table_pane_g

0xe38c,	// (0x0005af5e) single_mobtv_pg_channel_table_pane_t1

0xe39a,	// (0x0005af6c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005c80d) single_mobtv_pg_channel_table_pane_t

0x80ff,	// (0x00054cd1) main_mobtv_info_pane_g1_ParamLimits

0x80ff,	// (0x00054cd1) main_mobtv_info_pane_g1

0x811d,	// (0x00054cef) main_mobtv_info_pane_t1_ParamLimits

0x811d,	// (0x00054cef) main_mobtv_info_pane_t1

0x8195,	// (0x00054d67) main_mobtv_info_pane_t2_ParamLimits

0x8195,	// (0x00054d67) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005c817) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005c817) main_mobtv_info_pane_t

0x8224,	// (0x00054df6) wait_bar_pane_cp05

0x8236,	// (0x00054e08) main_mobtv_loading_pane_g1_ParamLimits

0x8236,	// (0x00054e08) main_mobtv_loading_pane_g1

0x8249,	// (0x00054e1b) main_mobtv_loading_pane_g2_ParamLimits

0x8249,	// (0x00054e1b) main_mobtv_loading_pane_g2

0x8255,	// (0x00054e27) main_mobtv_loading_pane_g3_ParamLimits

0x8255,	// (0x00054e27) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005c81e) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005c81e) main_mobtv_loading_pane_g

0xe3a8,	// (0x0005af7a) main_mobtv_loading_pane_t1_ParamLimits

0xe3a8,	// (0x0005af7a) main_mobtv_loading_pane_t1

0xe3c0,	// (0x0005af92) main_mobtv_loading_pane_t2_ParamLimits

0xe3c0,	// (0x0005af92) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005c825) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005c825) main_mobtv_loading_pane_t

0x8268,	// (0x00054e3a) wait_bar_pane_cp06_ParamLimits

0x8268,	// (0x00054e3a) wait_bar_pane_cp06

0xe3e4,	// (0x0005afb6) main_mobtv_programe_curr_pane_t1

0xe3f2,	// (0x0005afc4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005c82a) main_mobtv_programe_curr_pane_t

0xe400,	// (0x0005afd2) main_mobtv_programe_next_pane_t1

0xe40e,	// (0x0005afe0) main_mobtv_programe_next_pane_t2

0xe41c,	// (0x0005afee) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005c82f) main_mobtv_programe_next_pane_t

0x9728,	// (0x000562fa) bg_popup_mobtv_noti_window_pane

0xe42a,	// (0x0005affc) popup_mobtv_noti_window_g1

0xe432,	// (0x0005b004) popup_mobtv_noti_window_t1

0xe440,	// (0x0005b012) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005c836) popup_mobtv_noti_window_t

0xcc85,	// (0x00059857) bg_popup_mobtv_noti_window_pane_g1

0x9728,	// (0x000562fa) sc_clock_pane

0x9728,	// (0x000562fa) main_fs_bigclock_pane

0x79eb,	// (0x000545bd) blid2_tripm_pane_t4_ParamLimits

0x79eb,	// (0x000545bd) blid2_tripm_pane_t4

0x8277,	// (0x00054e49) sc_clock_pane_g1_ParamLimits

0x8277,	// (0x00054e49) sc_clock_pane_g1

0x8289,	// (0x00054e5b) sc_clock_pane_t1_ParamLimits

0x8289,	// (0x00054e5b) sc_clock_pane_t1

0x82ab,	// (0x00054e7d) sc_clock_pane_t2_ParamLimits

0x82ab,	// (0x00054e7d) sc_clock_pane_t2

0x82c3,	// (0x00054e95) sc_clock_pane_t3_ParamLimits

0x82c3,	// (0x00054e95) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005c83b) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005c83b) sc_clock_pane_t

0x8d27,	// (0x000558f9) main_fs_bigclock_indicator_pane_ParamLimits

0x8d27,	// (0x000558f9) main_fs_bigclock_indicator_pane

0x8363,	// (0x00054f35) main_fs_bigclock_pane_g1_ParamLimits

0x8363,	// (0x00054f35) main_fs_bigclock_pane_g1

0x8d33,	// (0x00055905) main_fs_bigclock_pane_t1_ParamLimits

0x8d33,	// (0x00055905) main_fs_bigclock_pane_t1

0x8d45,	// (0x00055917) main_fs_bigclock_pane_t2_ParamLimits

0x8d45,	// (0x00055917) main_fs_bigclock_pane_t2

0x8d59,	// (0x0005592b) main_fs_bigclock_pane_t3_ParamLimits

0x8d59,	// (0x0005592b) main_fs_bigclock_pane_t3

0x0002,

0xfe4d,	// (0x0005ca1f) main_fs_bigclock_pane_t_ParamLimits

0xfe4d,	// (0x0005ca1f) main_fs_bigclock_pane_t

0xec85,	// (0x0005b857) main_fs_bigclock_indicator_pane_g1

0xe11a,	// (0x0005acec) ncim_query_content_pane_g2_ParamLimits

0xe11a,	// (0x0005acec) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005c7c8) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005c7c8) ncim_query_content_pane_g

0x82dc,	// (0x00054eae) sc_clock_pane_t4_ParamLimits

0x82dc,	// (0x00054eae) sc_clock_pane_t4

0xb155,	// (0x00057d27) main_radioblah_pane

0xd659,	// (0x0005a22b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd659,	// (0x0005a22b) cell_call4_button_pane_t1_copy1

0x7f18,	// (0x00054aea) main_ncimui_pane_t1_ParamLimits

0x7f18,	// (0x00054aea) main_ncimui_pane_t1

0x7f32,	// (0x00054b04) main_ncimui_pane_t2_ParamLimits

0x7f32,	// (0x00054b04) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005c7c1) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005c7c1) main_ncimui_pane_t

0xe584,	// (0x0005b156) main_radioblah_anim_pane_ParamLimits

0xe584,	// (0x0005b156) main_radioblah_anim_pane

0xe595,	// (0x0005b167) main_radioblah_info_pane_ParamLimits

0xe595,	// (0x0005b167) main_radioblah_info_pane

0xe5a9,	// (0x0005b17b) main_radioblah_pane_t1_ParamLimits

0xe5a9,	// (0x0005b17b) main_radioblah_pane_t1

0xe5e5,	// (0x0005b1b7) main_radioblah_pane_t2_ParamLimits

0xe5e5,	// (0x0005b1b7) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005c85c) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005c85c) main_radioblah_pane_t

0x83bb,	// (0x00054f8d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83bb,	// (0x00054f8d) main_radioblah_rocker_ctrl_pane

0xe62d,	// (0x0005b1ff) main_radioblah_info_pane_t1_ParamLimits

0xe62d,	// (0x0005b1ff) main_radioblah_info_pane_t1

0x8413,	// (0x00054fe5) main_radioblah_info_pane_t2_ParamLimits

0x8413,	// (0x00054fe5) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005c865) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005c865) main_radioblah_info_pane_t

0xcc85,	// (0x00059857) main_radioblah_rocker_ctrl_pane_g1

0x84c3,	// (0x00055095) main_radioblah_rocker_ctrl_pane_g2

0x84cb,	// (0x0005509d) main_radioblah_rocker_ctrl_pane_g3

0x84d3,	// (0x000550a5) main_radioblah_rocker_ctrl_pane_g4

0x84db,	// (0x000550ad) main_radioblah_rocker_ctrl_pane_g5

0x84e3,	// (0x000550b5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005c86e) main_radioblah_rocker_ctrl_pane_g

0x7c9a,	// (0x0005486c) main_cset_text2_pane_t1_copy1_ParamLimits

0xa01f,	// (0x00056bf1) cam4_image_uncrop_qvga_pane

0xa078,	// (0x00056c4a) vid4_image_uncrop_qcif_pane

0xa1d0,	// (0x00056da2) cam6_image_uncrop_qvga_pane_ParamLimits

0xa1d0,	// (0x00056da2) cam6_image_uncrop_qvga_pane

0xde2f,	// (0x0005aa01) vid6_image_uncrop_qcif_pane_ParamLimits

0xde2f,	// (0x0005aa01) vid6_image_uncrop_qcif_pane

0x9728,	// (0x000562fa) bg_popup_preview_window_pane_cp03

0xe0cc,	// (0x0005ac9e) list_cset_text2_pane

0xe0d4,	// (0x0005aca6) main_cset6_text2_pane_g1

0xe0dc,	// (0x0005acae) main_cset6_text2_pane_t1

0x84eb,	// (0x000550bd) list_cset_text2_pane_t1_ParamLimits

0x84eb,	// (0x000550bd) list_cset_text2_pane_t1

0xb155,	// (0x00057d27) main_radioblah_pane_ParamLimits

0x8210,	// (0x00054de2) main_mobtv_info_pane_t3_ParamLimits

0x8210,	// (0x00054de2) main_mobtv_info_pane_t3

0x83a9,	// (0x00054f7b) main_radioblah_pane_g1

0x83e3,	// (0x00054fb5) main_radioblah_info_pane_g1

0x8468,	// (0x0005503a) main_radioblah_info_pane_t3_ParamLimits

0x8468,	// (0x0005503a) main_radioblah_info_pane_t3

0x30c7,	// (0x0004fc99) highlight_cell_cale_month_pane_ParamLimits

0x30c7,	// (0x0004fc99) highlight_cell_cale_month_pane

0x9728,	// (0x000562fa) main_phob_fisheye_pane

0xcfe4,	// (0x00059bb6) scroll_pane_cp0031_ParamLimits

0xcfe4,	// (0x00059bb6) scroll_pane_cp0031

0xdf3d,	// (0x0005ab0f) wait_bar_pane_cp08_ParamLimits

0x7d1f,	// (0x000548f1) cset_list_set_pane_copy1_ParamLimits

0xe667,	// (0x0005b239) highlight_cell_cale_month_pane_g1

0x8504,	// (0x000550d6) highlight_cell_cale_month_pane_t1

0xdbc0,	// (0x0005a792) list_gen_pane_cp01

0xd820,	// (0x0005a3f2) scroll_pane_01

0x8512,	// (0x000550e4) list_single_double_fisheye_pane

0x0868,	// (0x0004d43a) list_double_fisheye_pane_g1_ParamLimits

0x0868,	// (0x0004d43a) list_double_fisheye_pane_g1

0x0874,	// (0x0004d446) list_double_fisheye_pane_g2_ParamLimits

0x0874,	// (0x0004d446) list_double_fisheye_pane_g2

0x851b,	// (0x000550ed) list_double_fisheye_pane_g3_ParamLimits

0x851b,	// (0x000550ed) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005c87b) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005c87b) list_double_fisheye_pane_g

0x08a5,	// (0x0004d477) list_double_fisheye_pane_t1_ParamLimits

0x08a5,	// (0x0004d477) list_double_fisheye_pane_t1

0x08c0,	// (0x0004d492) list_double_fisheye_pane_t2_ParamLimits

0x08c0,	// (0x0004d492) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005c886) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005c886) list_double_fisheye_pane_t

0x9728,	// (0x000562fa) main_call5_pane

0x8307,	// (0x00054ed9) sc_swipe_pane_ParamLimits

0x8307,	// (0x00054ed9) sc_swipe_pane

0x853a,	// (0x0005510c) call5_image_pane_ParamLimits

0x853a,	// (0x0005510c) call5_image_pane

0x8557,	// (0x00055129) call5_swipe_1_pane_ParamLimits

0x8557,	// (0x00055129) call5_swipe_1_pane

0x856a,	// (0x0005513c) call5_swipe_2_pane_ParamLimits

0x856a,	// (0x0005513c) call5_swipe_2_pane

0x8595,	// (0x00055167) popup_call5_audio_first_window_ParamLimits

0x8595,	// (0x00055167) popup_call5_audio_first_window

0xcee8,	// (0x00059aba) call5_swipe_1_pane_g1_ParamLimits

0xcee8,	// (0x00059aba) call5_swipe_1_pane_g1

0xe66f,	// (0x0005b241) call5_swipe_1_pane_g2_ParamLimits

0xe66f,	// (0x0005b241) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005c88b) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005c88b) call5_swipe_1_pane_g

0xe67b,	// (0x0005b24d) call5_swipe_1_pane_t1_ParamLimits

0xe67b,	// (0x0005b24d) call5_swipe_1_pane_t1

0xcee8,	// (0x00059aba) call5_swipe_2_pane_g1_ParamLimits

0xcee8,	// (0x00059aba) call5_swipe_2_pane_g1

0xe690,	// (0x0005b262) call5_swipe_2_pane_g2_ParamLimits

0xe690,	// (0x0005b262) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005c890) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005c890) call5_swipe_2_pane_g

0xe69c,	// (0x0005b26e) call5_swipe_2_pane_t1_ParamLimits

0xe69c,	// (0x0005b26e) call5_swipe_2_pane_t1

0xe6b1,	// (0x0005b283) sc_swipe_pane_g1_ParamLimits

0xe6b1,	// (0x0005b283) sc_swipe_pane_g1

0xe6be,	// (0x0005b290) sc_swipe_pane_g2_ParamLimits

0xe6be,	// (0x0005b290) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005c895) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005c895) sc_swipe_pane_g

0xe6ca,	// (0x0005b29c) sc_swipe_pane_t1_ParamLimits

0xe6ca,	// (0x0005b29c) sc_swipe_pane_t1

0x9728,	// (0x000562fa) main_cmail_launcher_pane

0x85a6,	// (0x00055178) aid_size_cell_cmail_l_ParamLimits

0x85a6,	// (0x00055178) aid_size_cell_cmail_l

0x85c0,	// (0x00055192) grid_cmail_l_pane_ParamLimits

0x85c0,	// (0x00055192) grid_cmail_l_pane

0x85db,	// (0x000551ad) cell_cmail_l_pane_ParamLimits

0x85db,	// (0x000551ad) cell_cmail_l_pane

0x8601,	// (0x000551d3) cell_cmail_l_pane_g1_ParamLimits

0x8601,	// (0x000551d3) cell_cmail_l_pane_g1

0x860d,	// (0x000551df) cell_cmail_l_pane_t1_ParamLimits

0x860d,	// (0x000551df) cell_cmail_l_pane_t1

0xe6df,	// (0x0005b2b1) cell_cmail_l_pane_t2_ParamLimits

0xe6df,	// (0x0005b2b1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005c89a) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005c89a) cell_cmail_l_pane_t

0xb155,	// (0x00057d27) grid_highlight_pane_cp018_ParamLimits

0xb155,	// (0x00057d27) grid_highlight_pane_cp018

0x1165,	// (0x0004dd37) main2_pane_ParamLimits

0x1165,	// (0x0004dd37) main2_pane

0xa8bc,	// (0x0005748e) popup_sp_fs_action_menu_bg_pane_g1

0xa8c4,	// (0x00057496) popup_sp_fs_action_menu_bg_pane_g2

0xa8cc,	// (0x0005749e) popup_sp_fs_action_menu_bg_pane_g3

0xa8d4,	// (0x000574a6) popup_sp_fs_action_menu_bg_pane_g4

0xa8dc,	// (0x000574ae) popup_sp_fs_action_menu_bg_pane_g5

0xa8e4,	// (0x000574b6) popup_sp_fs_action_menu_bg_pane_g6

0xa8ec,	// (0x000574be) popup_sp_fs_action_menu_bg_pane_g7

0xa8f4,	// (0x000574c6) popup_sp_fs_action_menu_bg_pane_g8

0xa8fc,	// (0x000574ce) popup_sp_fs_action_menu_bg_pane_g9

0xa904,	// (0x000574d6) popup_sp_fs_action_menu_bg_pane_g10

0xa904,	// (0x000574d6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005bd5c) popup_sp_fs_action_menu_bg_pane_g

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g3_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g3_g1

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t3_g3_g2

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005be0a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005be0a) list_medium_line_x2_t3_g3_g

0x01c4,	// (0x0004cd96) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01c4,	// (0x0004cd96) list_medium_line_x2_t3_g3_t1

0x01d9,	// (0x0004cdab) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01d9,	// (0x0004cdab) list_medium_line_x2_t3_g3_t2

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005be11) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005be11) list_medium_line_x2_t3_g3_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g2_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g2_g1

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005be18) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005be18) list_medium_line_x2_t3_g2_g

0x0202,	// (0x0004cdd4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0202,	// (0x0004cdd4) list_medium_line_x2_t3_g2_t1

0x0218,	// (0x0004cdea) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0218,	// (0x0004cdea) list_medium_line_x2_t3_g2_t2

0x022a,	// (0x0004cdfc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x022a,	// (0x0004cdfc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005be1d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005be1d) list_medium_line_x2_t3_g2_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t4_g4_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t4_g4_g1

0x0247,	// (0x0004ce19) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0247,	// (0x0004ce19) list_medium_line_x2_t4_g4_g2

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t4_g4_g3

0x0253,	// (0x0004ce25) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0253,	// (0x0004ce25) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005be24) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005be24) list_medium_line_x2_t4_g4_g

0x025f,	// (0x0004ce31) list_medium_line_x2_t4_g4_t1_ParamLimits

0x025f,	// (0x0004ce31) list_medium_line_x2_t4_g4_t1

0x0279,	// (0x0004ce4b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0279,	// (0x0004ce4b) list_medium_line_x2_t4_g4_t2

0x028f,	// (0x0004ce61) list_medium_line_x2_t4_g4_t3_ParamLimits

0x028f,	// (0x0004ce61) list_medium_line_x2_t4_g4_t3

0x02a4,	// (0x0004ce76) list_medium_line_x2_t4_g4_t4_ParamLimits

0x02a4,	// (0x0004ce76) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005be2d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005be2d) list_medium_line_x2_t4_g4_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g4_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g4_g1

0x0247,	// (0x0004ce19) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0247,	// (0x0004ce19) list_medium_line_x2_t2_g4_g2

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t2_g4_g3

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005be94) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005be94) list_medium_line_x2_t2_g4_g

0x02b6,	// (0x0004ce88) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02b6,	// (0x0004ce88) list_medium_line_x2_t2_g4_t1

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005be9d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005be9d) list_medium_line_x2_t2_g4_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g3_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g3_g1

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t2_g3_g2

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005be0a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005be0a) list_medium_line_x2_t2_g3_g

0x02cb,	// (0x0004ce9d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02cb,	// (0x0004ce9d) list_medium_line_x2_t2_g3_t1

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005bea2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005bea2) list_medium_line_x2_t2_g3_t

0x3215,	// (0x0004fde7) main_sp_fs_list_pane_ParamLimits

0x3215,	// (0x0004fde7) main_sp_fs_list_pane

0xcb8f,	// (0x00059761) sp_fs_scroll_pane_ParamLimits

0xcb8f,	// (0x00059761) sp_fs_scroll_pane

0x02e0,	// (0x0004ceb2) list_medium_line_x2_t3_t1

0x02f0,	// (0x0004cec2) list_medium_line_x2_t3_t2

0x02fe,	// (0x0004ced0) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005beed) list_medium_line_x2_t3_t

0x030c,	// (0x0004cede) list_medium_line_x3_t4_t1

0x031c,	// (0x0004ceee) list_medium_line_x3_t4_t2

0x032a,	// (0x0004cefc) list_medium_line_x3_t4_t3

0x02fe,	// (0x0004ced0) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005bef4) list_medium_line_x3_t4_t

0x0338,	// (0x0004cf0a) list_medium_line_x4_t5_t1

0x0348,	// (0x0004cf1a) list_medium_line_x4_t5_t2

0x032a,	// (0x0004cefc) list_medium_line_x4_t5_t3

0x0356,	// (0x0004cf28) list_medium_line_x4_t5_t4

0x02fe,	// (0x0004ced0) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005befd) list_medium_line_x4_t5_t

0x01a0,	// (0x0004cd72) list_medium_line_t4_g4_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_t4_g4_g1

0x0364,	// (0x0004cf36) list_medium_line_t4_g4_g2_ParamLimits

0x0364,	// (0x0004cf36) list_medium_line_t4_g4_g2

0x0370,	// (0x0004cf42) list_medium_line_t4_g4_g3_ParamLimits

0x0370,	// (0x0004cf42) list_medium_line_t4_g4_g3

0x01b8,	// (0x0004cd8a) list_medium_line_t4_g4_g4_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005bf08) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005bf08) list_medium_line_t4_g4_g

0x037c,	// (0x0004cf4e) list_medium_line_t4_g4_t1_ParamLimits

0x037c,	// (0x0004cf4e) list_medium_line_t4_g4_t1

0x0391,	// (0x0004cf63) list_medium_line_t4_g4_t2_ParamLimits

0x0391,	// (0x0004cf63) list_medium_line_t4_g4_t2

0x03a6,	// (0x0004cf78) list_medium_line_t4_g4_t3_ParamLimits

0x03a6,	// (0x0004cf78) list_medium_line_t4_g4_t3

0x01ed,	// (0x0004cdbf) list_medium_line_t4_g4_t4_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005bf11) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005bf11) list_medium_line_t4_g4_t

0x32d4,	// (0x0004fea6) chi_dic_find_pane_g1

0x42d8,	// (0x00050eaa) main_tport_pane

0x0591,	// (0x0004d163) list_medium_line_plain_t1

0x059f,	// (0x0004d171) list_medium_line_t2_g2_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t2_g2_g1

0x05ab,	// (0x0004d17d) list_medium_line_t2_g2_g2_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005c5d2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005c5d2) list_medium_line_t2_g2_g

0x05b7,	// (0x0004d189) list_medium_line_t2_g2_t1_ParamLimits

0x05b7,	// (0x0004d189) list_medium_line_t2_g2_t1

0x05ce,	// (0x0004d1a0) list_medium_line_t2_g2_t2_ParamLimits

0x05ce,	// (0x0004d1a0) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005c5d7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005c5d7) list_medium_line_t2_g2_t

0x778a,	// (0x0005435c) aid_sp_fs_list_icon_a_sm

0x7792,	// (0x00054364) aid_sp_fs_list_icon_d

0x779a,	// (0x0005436c) aid_sp_fs_text_primary

0x77a3,	// (0x00054375) aid_sp_fs_text_secondary

0x77ac,	// (0x0005437e) list_medium_line

0x77ac,	// (0x0005437e) list_medium_line_g2

0x77ac,	// (0x0005437e) list_medium_line_g3

0x77ac,	// (0x0005437e) list_medium_line_plain

0x77ac,	// (0x0005437e) list_medium_line_plain_t2

0x77ac,	// (0x0005437e) list_medium_line_plain_t3

0x77ac,	// (0x0005437e) list_medium_line_right_icon

0x77ac,	// (0x0005437e) list_medium_line_right_iconx2

0x77ac,	// (0x0005437e) list_medium_line_t2

0x77ac,	// (0x0005437e) list_medium_line_t2_g2

0x77ac,	// (0x0005437e) list_medium_line_t2_g3

0x77ac,	// (0x0005437e) list_medium_line_t2_right_icon

0x77ac,	// (0x0005437e) list_medium_line_t2_right_iconx2

0x77ac,	// (0x0005437e) list_medium_line_t3

0x77ac,	// (0x0005437e) list_medium_line_t3_g2

0x77ac,	// (0x0005437e) list_medium_line_t3_g3

0x77ac,	// (0x0005437e) list_medium_line_t3_right_iconx2

0x77b5,	// (0x00054387) list_medium_line_t4_g4

0x77be,	// (0x00054390) list_medium_line_x2

0x77be,	// (0x00054390) list_medium_line_x2_t2_g2

0x77be,	// (0x00054390) list_medium_line_x2_t2_g3

0x77be,	// (0x00054390) list_medium_line_x2_t2_g4

0x77be,	// (0x00054390) list_medium_line_x2_t3

0x77be,	// (0x00054390) list_medium_line_x2_t3_g2

0x77be,	// (0x00054390) list_medium_line_x2_t3_g3

0x77be,	// (0x00054390) list_medium_line_x2_t3_g4

0x77be,	// (0x00054390) list_medium_line_x2_t4_g2

0x77be,	// (0x00054390) list_medium_line_x2_t4_g4

0x77c7,	// (0x00054399) list_medium_line_x3

0x77c7,	// (0x00054399) list_medium_line_x3_t4

0x77c7,	// (0x00054399) list_medium_line_x3_t4_g4

0x77b5,	// (0x00054387) list_medium_line_x4_t4

0x77b5,	// (0x00054387) list_medium_line_x4_t4_g7

0x77b5,	// (0x00054387) list_medium_line_x4_t5

0x0757,	// (0x0004d329) list_single_fs_dyc_pane_ParamLimits

0x0757,	// (0x0004d329) list_single_fs_dyc_pane

0x01a0,	// (0x0004cd72) list_medium_line_x4_t4_g7_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x4_t4_g7_g1

0x0797,	// (0x0004d369) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0797,	// (0x0004d369) list_medium_line_x4_t4_g7_g2

0x07a3,	// (0x0004d375) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07a3,	// (0x0004d375) list_medium_line_x4_t4_g7_g3

0x07b2,	// (0x0004d384) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07b2,	// (0x0004d384) list_medium_line_x4_t4_g7_g4

0x07be,	// (0x0004d390) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07be,	// (0x0004d390) list_medium_line_x4_t4_g7_g5

0x07cd,	// (0x0004d39f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07cd,	// (0x0004d39f) list_medium_line_x4_t4_g7_g6

0x07dc,	// (0x0004d3ae) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07dc,	// (0x0004d3ae) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005c7a2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005c7a2) list_medium_line_x4_t4_g7_g

0x07e8,	// (0x0004d3ba) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07e8,	// (0x0004d3ba) list_medium_line_x4_t4_g7_t1

0x07fd,	// (0x0004d3cf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07fd,	// (0x0004d3cf) list_medium_line_x4_t4_g7_t2

0x0812,	// (0x0004d3e4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0812,	// (0x0004d3e4) list_medium_line_x4_t4_g7_t3

0x0827,	// (0x0004d3f9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0827,	// (0x0004d3f9) list_medium_line_x4_t4_g7_t4

0x0839,	// (0x0004d40b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0839,	// (0x0004d40b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005c7b1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005c7b1) list_medium_line_x4_t4_g7_t

0x084b,	// (0x0004d41d) list_single_dyc_row_pane_ParamLimits

0x084b,	// (0x0004d41d) list_single_dyc_row_pane

0x8527,	// (0x000550f9) call5_gesture_pane_ParamLimits

0x8527,	// (0x000550f9) call5_gesture_pane

0x857d,	// (0x0005514f) call5_windows_pane_ParamLimits

0x857d,	// (0x0005514f) call5_windows_pane

0x8623,	// (0x000551f5) call5_swipe_1_pane_cp_ParamLimits

0x8623,	// (0x000551f5) call5_swipe_1_pane_cp

0x862f,	// (0x00055201) call5_swipe_2_pane_cp_ParamLimits

0x862f,	// (0x00055201) call5_swipe_2_pane_cp

0xa9e8,	// (0x000575ba) call5_image_pane_cp

0x863b,	// (0x0005520d) popup_call5_audio_first_window_cp_ParamLimits

0x863b,	// (0x0005520d) popup_call5_audio_first_window_cp

0xe6b1,	// (0x0005b283) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b1,	// (0x0005b283) call5_swipe_1_pane_g1_cp

0xe6f1,	// (0x0005b2c3) call5_swipe_1_pane_g2_cp

0xe6ca,	// (0x0005b29c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6ca,	// (0x0005b29c) call5_swipe_1_pane_t1_cp

0xe6b1,	// (0x0005b283) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b1,	// (0x0005b283) call5_swipe_2_pane_g1_cp

0xe6f9,	// (0x0005b2cb) call5_swipe_2_pane_g2_cp

0xe701,	// (0x0005b2d3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe701,	// (0x0005b2d3) call5_swipe_2_pane_t1_cp

0xb155,	// (0x00057d27) main_sp_fs_email_pane

0xe716,	// (0x0005b2e8) main_sp_fs_listscroll_pane_te

0x8649,	// (0x0005521b) popup_sp_fs_action_menu_pane_ParamLimits

0x8649,	// (0x0005521b) popup_sp_fs_action_menu_pane

0xcc85,	// (0x00059857) bg_sp_fs_ctrlbar_pane_g1

0xd27b,	// (0x00059e4d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd28d,	// (0x00059e5f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd284,	// (0x00059e56) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc85,	// (0x00059857) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005c89f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca55,	// (0x00059627) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca55,	// (0x00059627) bg_sp_fs_ctrlbar_ddmenu_pane

0xe71f,	// (0x0005b2f1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe71f,	// (0x0005b2f1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72b,	// (0x0005b2fd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72b,	// (0x0005b2fd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005c8a8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005c8a8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe737,	// (0x0005b309) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe737,	// (0x0005b309) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08e2,	// (0x0004d4b4) list_medium_line_t2_right_icon_g1

0x08ea,	// (0x0004d4bc) list_medium_line_t2_right_icon_t1

0x08fa,	// (0x0004d4cc) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005c8ad) list_medium_line_t2_right_icon_t

0xc868,	// (0x0005943a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc868,	// (0x0005943a) bg_sp_fs_ctrlbar_pane

0x86d5,	// (0x000552a7) main_sp_fs_ctrlbar_button_pane_cp01

0x86df,	// (0x000552b1) main_sp_fs_ctrlbar_ddmenu_pane

0xe789,	// (0x0005b35b) main_sp_fs_ctrlbar_pane_g1

0xe795,	// (0x0005b367) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005c8b2) main_sp_fs_ctrlbar_pane_g

0xe7a1,	// (0x0005b373) main_sp_fs_ctrlbar_pane_t1

0x86e9,	// (0x000552bb) main_sp_fs_ctrlbar_pane

0x870d,	// (0x000552df) main_sp_fs_listscroll_pane_te_cp01

0x090c,	// (0x0004d4de) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x090c,	// (0x0004d4de) popup_sp_fs_action_menu_pane_cp01

0xb155,	// (0x00057d27) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb155,	// (0x00057d27) bg_sp_fs_highlight_list_pane_cp01

0x872d,	// (0x000552ff) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x872d,	// (0x000552ff) sp_fs_action_menu_list_gene_pane_g1

0xe7d1,	// (0x0005b3a3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d1,	// (0x0005b3a3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005c8bc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005c8bc) sp_fs_action_menu_list_gene_pane_g

0x873c,	// (0x0005530e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x873c,	// (0x0005530e) sp_fs_action_menu_list_gene_pane_t1

0x8754,	// (0x00055326) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8754,	// (0x00055326) sp_fs_action_menu_list_gene_pane

0xe7de,	// (0x0005b3b0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7de,	// (0x0005b3b0) popup_sp_fs_action_menu_bg_pane

0x8773,	// (0x00055345) sp_fs_action_menu_list_pane_ParamLimits

0x8773,	// (0x00055345) sp_fs_action_menu_list_pane

0x093c,	// (0x0004d50e) sp_fs_scroll_pane_cp01_ParamLimits

0x093c,	// (0x0004d50e) sp_fs_scroll_pane_cp01

0x0962,	// (0x0004d534) list_medium_line_plain_t2_t1

0x0972,	// (0x0004d544) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005c8c1) list_medium_line_plain_t2_t

0x0982,	// (0x0004d554) list_medium_line_plain_t3_t1

0x0992,	// (0x0004d564) list_medium_line_plain_t3_t2

0x09a0,	// (0x0004d572) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005c8c6) list_medium_line_plain_t3_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g2_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t2_g2_g1

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005be18) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005be18) list_medium_line_x2_t2_g2_g

0x037c,	// (0x0004cf4e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x037c,	// (0x0004cf4e) list_medium_line_x2_t2_g2_t1

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005c8cd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005c8cd) list_medium_line_x2_t2_g2_t

0x01a0,	// (0x0004cd72) list_medium_line_x2_t4_g2_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t4_g2_g1

0x09ae,	// (0x0004d580) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09ae,	// (0x0004d580) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005c8d2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005c8d2) list_medium_line_x2_t4_g2_g

0x09bf,	// (0x0004d591) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09bf,	// (0x0004d591) list_medium_line_x2_t4_g2_t1

0x09d6,	// (0x0004d5a8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09d6,	// (0x0004d5a8) list_medium_line_x2_t4_g2_t2

0x09eb,	// (0x0004d5bd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09eb,	// (0x0004d5bd) list_medium_line_x2_t4_g2_t3

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005c8d7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005c8d7) list_medium_line_x2_t4_g2_t

0x09fd,	// (0x0004d5cf) list_medium_line_t3_right_iconx2_g1

0x08e2,	// (0x0004d4b4) list_medium_line_t3_right_iconx2_g2

0x0a05,	// (0x0004d5d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005c8e0) list_medium_line_t3_right_iconx2_g

0x0a0f,	// (0x0004d5e1) list_medium_line_t3_right_iconx2_t1

0x0a1f,	// (0x0004d5f1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005c8e7) list_medium_line_t3_right_iconx2_t

0x01a0,	// (0x0004cd72) list_medium_line_x3_t4_g4_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x3_t4_g4_g1

0x01ac,	// (0x0004cd7e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x3_t4_g4_g2

0x0364,	// (0x0004cf36) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0364,	// (0x0004cf36) list_medium_line_x3_t4_g4_g3

0x0a2d,	// (0x0004d5ff) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a2d,	// (0x0004d5ff) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005c8ec) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005c8ec) list_medium_line_x3_t4_g4_g

0x0a39,	// (0x0004d60b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a39,	// (0x0004d60b) list_medium_line_x3_t4_g4_t1

0x0a50,	// (0x0004d622) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a50,	// (0x0004d622) list_medium_line_x3_t4_g4_t2

0x0391,	// (0x0004cf63) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0391,	// (0x0004cf63) list_medium_line_x3_t4_g4_t3

0x0a6b,	// (0x0004d63d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a6b,	// (0x0004d63d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005c8f5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005c8f5) list_medium_line_x3_t4_g4_t

0x0a88,	// (0x0004d65a) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a88,	// (0x0004d65a) list_single_dyc_row_text_pane_t1

0x0ad1,	// (0x0004d6a3) list_single_dyc_row_text_pane_t2_ParamLimits

0x0ad1,	// (0x0004d6a3) list_single_dyc_row_text_pane_t2

0x8793,	// (0x00055365) list_single_dyc_row_text_pane_t3_ParamLimits

0x8793,	// (0x00055365) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005c8fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005c8fe) list_single_dyc_row_text_pane_t

0x87b7,	// (0x00055389) list_single_dyc_row_pane_g1_ParamLimits

0x87b7,	// (0x00055389) list_single_dyc_row_pane_g1

0x87c3,	// (0x00055395) list_single_dyc_row_pane_g2_ParamLimits

0x87c3,	// (0x00055395) list_single_dyc_row_pane_g2

0x87cf,	// (0x000553a1) list_single_dyc_row_pane_g3_ParamLimits

0x87cf,	// (0x000553a1) list_single_dyc_row_pane_g3

0x87db,	// (0x000553ad) list_single_dyc_row_pane_g4_ParamLimits

0x87db,	// (0x000553ad) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005c90b) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005c90b) list_single_dyc_row_pane_g

0x87e7,	// (0x000553b9) list_single_dyc_row_text_pane_ParamLimits

0x87e7,	// (0x000553b9) list_single_dyc_row_text_pane

0x9728,	// (0x000562fa) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0005b3be) thumb_sp_fs_scroll_pane

0x059f,	// (0x0004d171) list_medium_line_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_g1

0x0c06,	// (0x0004d7d8) list_medium_line_t1_ParamLimits

0x0c06,	// (0x0004d7d8) list_medium_line_t1

0x01a0,	// (0x0004cd72) list_medium_line_x2_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_g1

0x01ac,	// (0x0004cd7e) list_medium_line_x2_g2_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005c914) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005c914) list_medium_line_x2_g

0x8806,	// (0x000553d8) list_medium_line_x2_t1_ParamLimits

0x8806,	// (0x000553d8) list_medium_line_x2_t1

0x01a0,	// (0x0004cd72) list_medium_line_x3_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x3_g1

0x01ac,	// (0x0004cd7e) list_medium_line_x3_g2_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005c914) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005c914) list_medium_line_x3_g

0x8806,	// (0x000553d8) list_medium_line_x3_t1_ParamLimits

0x8806,	// (0x000553d8) list_medium_line_x3_t1

0xe7f5,	// (0x0005b3c7) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0005b3d0) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0005b3d9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c919) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0005b3c7) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0005b3d0) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0005b3d9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c919) bg_sp_fs_scroll_pane_g

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g4_g1_ParamLimits

0x01a0,	// (0x0004cd72) list_medium_line_x2_t3_g4_g1

0x0247,	// (0x0004ce19) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0247,	// (0x0004ce19) list_medium_line_x2_t3_g4_g2

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x01ac,	// (0x0004cd7e) list_medium_line_x2_t3_g4_g3

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01b8,	// (0x0004cd8a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005be94) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005be94) list_medium_line_x2_t3_g4_g

0x0c1b,	// (0x0004d7ed) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c1b,	// (0x0004d7ed) list_medium_line_x2_t3_g4_t1

0x0c35,	// (0x0004d807) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c35,	// (0x0004d807) list_medium_line_x2_t3_g4_t2

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01ed,	// (0x0004cdbf) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005c920) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005c920) list_medium_line_x2_t3_g4_t

0x059f,	// (0x0004d171) list_medium_line_g2_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_g2_g1

0x05ab,	// (0x0004d17d) list_medium_line_g2_g2_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005c5d2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005c5d2) list_medium_line_g2_g

0x0c4f,	// (0x0004d821) list_medium_line_g2_t1_ParamLimits

0x0c4f,	// (0x0004d821) list_medium_line_g2_t1

0x059f,	// (0x0004d171) list_medium_line_t3_g2_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t3_g2_g1

0x05ab,	// (0x0004d17d) list_medium_line_t3_g2_g2_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005c5d2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005c5d2) list_medium_line_t3_g2_g

0x0c64,	// (0x0004d836) list_medium_line_t3_g2_t1_ParamLimits

0x0c64,	// (0x0004d836) list_medium_line_t3_g2_t1

0x0c7b,	// (0x0004d84d) list_medium_line_t3_g2_t2_ParamLimits

0x0c7b,	// (0x0004d84d) list_medium_line_t3_g2_t2

0x0c90,	// (0x0004d862) list_medium_line_t3_g2_t3_ParamLimits

0x0c90,	// (0x0004d862) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005c927) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005c927) list_medium_line_t3_g2_t

0x08e2,	// (0x0004d4b4) list_medium_line_right_icon_g1

0x0ca9,	// (0x0004d87b) list_medium_line_right_icon_t1

0x059f,	// (0x0004d171) list_medium_line_t2_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t2_g1

0x0cb7,	// (0x0004d889) list_medium_line_t2_t1_ParamLimits

0x0cb7,	// (0x0004d889) list_medium_line_t2_t1

0x0cd1,	// (0x0004d8a3) list_medium_line_t2_t2_ParamLimits

0x0cd1,	// (0x0004d8a3) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005c92e) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005c92e) list_medium_line_t2_t

0x059f,	// (0x0004d171) list_medium_line_t3_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t3_g1

0x0cea,	// (0x0004d8bc) list_medium_line_t3_t1_ParamLimits

0x0cea,	// (0x0004d8bc) list_medium_line_t3_t1

0x0d01,	// (0x0004d8d3) list_medium_line_t3_t2_ParamLimits

0x0d01,	// (0x0004d8d3) list_medium_line_t3_t2

0x0d16,	// (0x0004d8e8) list_medium_line_t3_t3_ParamLimits

0x0d16,	// (0x0004d8e8) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005c933) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005c933) list_medium_line_t3_t

0x059f,	// (0x0004d171) list_medium_line_g3_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_g3_g1

0x0d28,	// (0x0004d8fa) list_medium_line_g3_g2_ParamLimits

0x0d28,	// (0x0004d8fa) list_medium_line_g3_g2

0x05ab,	// (0x0004d17d) list_medium_line_g3_g3_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005c93a) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005c93a) list_medium_line_g3_g

0x0d34,	// (0x0004d906) list_medium_line_g3_t1_ParamLimits

0x0d34,	// (0x0004d906) list_medium_line_g3_t1

0x059f,	// (0x0004d171) list_medium_line_t2_g3_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t2_g3_g1

0x0d28,	// (0x0004d8fa) list_medium_line_t2_g3_g2_ParamLimits

0x0d28,	// (0x0004d8fa) list_medium_line_t2_g3_g2

0x05ab,	// (0x0004d17d) list_medium_line_t2_g3_g3_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005c93a) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005c93a) list_medium_line_t2_g3_g

0x0d49,	// (0x0004d91b) list_medium_line_t2_g3_t1_ParamLimits

0x0d49,	// (0x0004d91b) list_medium_line_t2_g3_t1

0x0d63,	// (0x0004d935) list_medium_line_t2_g3_t2_ParamLimits

0x0d63,	// (0x0004d935) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005c941) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005c941) list_medium_line_t2_g3_t

0x059f,	// (0x0004d171) list_medium_line_t3_g3_g1_ParamLimits

0x059f,	// (0x0004d171) list_medium_line_t3_g3_g1

0x0d28,	// (0x0004d8fa) list_medium_line_t3_g3_g2_ParamLimits

0x0d28,	// (0x0004d8fa) list_medium_line_t3_g3_g2

0x05ab,	// (0x0004d17d) list_medium_line_t3_g3_g3_ParamLimits

0x05ab,	// (0x0004d17d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005c93a) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005c93a) list_medium_line_t3_g3_g

0x0d7e,	// (0x0004d950) list_medium_line_t3_g3_t1_ParamLimits

0x0d7e,	// (0x0004d950) list_medium_line_t3_g3_t1

0x0d92,	// (0x0004d964) list_medium_line_t3_g3_t2_ParamLimits

0x0d92,	// (0x0004d964) list_medium_line_t3_g3_t2

0x0da4,	// (0x0004d976) list_medium_line_t3_g3_t3_ParamLimits

0x0da4,	// (0x0004d976) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005c946) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005c946) list_medium_line_t3_g3_t

0x09fd,	// (0x0004d5cf) list_medium_line_right_iconx2_g1

0x08e2,	// (0x0004d4b4) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c94d) list_medium_line_right_iconx2_g

0x0db8,	// (0x0004d98a) list_medium_line_right_iconx2_t1

0x09fd,	// (0x0004d5cf) list_medium_line_t2_right_iconx2_g1

0x08e2,	// (0x0004d4b4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c94d) list_medium_line_t2_right_iconx2_g

0x0dc6,	// (0x0004d998) list_medium_line_t2_right_iconx2_t1

0x0dd6,	// (0x0004d9a8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005c952) list_medium_line_t2_right_iconx2_t

0x0de8,	// (0x0004d9ba) list_medium_line_x4_t4_t1

0x0df6,	// (0x0004d9c8) list_medium_line_x4_t4_t2

0x0e06,	// (0x0004d9d8) list_medium_line_x4_t4_t3

0x0e16,	// (0x0004d9e8) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005c957) list_medium_line_x4_t4_t

0x885f,	// (0x00055431) tport_appsw_pane_ParamLimits

0x885f,	// (0x00055431) tport_appsw_pane

0x8877,	// (0x00055449) tport_contact_pane_ParamLimits

0x8877,	// (0x00055449) tport_contact_pane

0x888f,	// (0x00055461) tport_listscroll_pane_ParamLimits

0x888f,	// (0x00055461) tport_listscroll_pane

0x88a9,	// (0x0005547b) cell_tport_appsw_pane_ParamLimits

0x88a9,	// (0x0005547b) cell_tport_appsw_pane

0xd6e6,	// (0x0005a2b8) tport_appsw_pane_g1_ParamLimits

0xd6e6,	// (0x0005a2b8) tport_appsw_pane_g1

0xe810,	// (0x0005b3e2) tport_contact_pane_g1

0xe1a0,	// (0x0005ad72) tport_contact_pane_t1

0xe819,	// (0x0005b3eb) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005c960) tport_contact_pane_t

0xe827,	// (0x0005b3f9) list_tport_pane

0xe830,	// (0x0005b402) scroll_pane_cp_030

0x88f1,	// (0x000554c3) cell_tport_appsw_pane_g1

0x8901,	// (0x000554d3) cell_tport_appsw_pane_t1

0x890f,	// (0x000554e1) grid_highlight_pane_cp019

0x8917,	// (0x000554e9) list_tport_double_graphic_pane_ParamLimits

0x8917,	// (0x000554e9) list_tport_double_graphic_pane

0xb155,	// (0x00057d27) list_highlight_pane_cp023_ParamLimits

0xb155,	// (0x00057d27) list_highlight_pane_cp023

0x8924,	// (0x000554f6) list_tport_double_graphic_pane_g1_ParamLimits

0x8924,	// (0x000554f6) list_tport_double_graphic_pane_g1

0x8931,	// (0x00055503) list_tport_double_graphic_pane_t1_ParamLimits

0x8931,	// (0x00055503) list_tport_double_graphic_pane_t1

0x8946,	// (0x00055518) list_tport_double_graphic_pane_t2_ParamLimits

0x8946,	// (0x00055518) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005c96c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005c96c) list_tport_double_graphic_pane_t

0x9728,	// (0x000562fa) main_cale_note_pane

0x69c5,	// (0x00053597) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69c5,	// (0x00053597) cell_vitu2_function_top_wide_pane_cp01

0x8224,	// (0x00054df6) wait_bar_pane_cp05_ParamLimits

0xb155,	// (0x00057d27) listscroll_cmail_pane

0xe839,	// (0x0005b40b) list_cmail_pane

0xd73e,	// (0x0005a310) list_cmail_body_pane

0x8958,	// (0x0005552a) list_single_cmail_header_caption_pane

0x896f,	// (0x00055541) list_single_cmail_header_detail_pane_ParamLimits

0x896f,	// (0x00055541) list_single_cmail_header_detail_pane

0xe849,	// (0x0005b41b) list_single_cmail_header_caption_pane_t1

0x0e26,	// (0x0004d9f8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e26,	// (0x0004d9f8) list_single_cmail_header_detail_pane_g1

0xa1de,	// (0x00056db0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1de,	// (0x00056db0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005c971) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005c971) list_single_cmail_header_detail_pane_g

0xa1ea,	// (0x00056dbc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa1ea,	// (0x00056dbc) list_single_cmail_header_detail_pane_t1

0xa24a,	// (0x00056e1c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa24a,	// (0x00056e1c) list_single_cmail_header_editor_pane_bg

0xe341,	// (0x0005af13) list_cmail_body_pane_g1

0xe86d,	// (0x0005b43f) list_cmail_body_pane_t1

0xd706,	// (0x0005a2d8) list_single_cmail_header_editor_pane_bg_g1

0xac41,	// (0x00057813) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd716,	// (0x0005a2e8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd70e,	// (0x0005a2e0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd945,	// (0x0005a517) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd736,	// (0x0005a308) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd726,	// (0x0005a2f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd72e,	// (0x0005a300) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac21,	// (0x000577f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8999,	// (0x0005556b) calenote_gesture_pane_ParamLimits

0x8999,	// (0x0005556b) calenote_gesture_pane

0x89b9,	// (0x0005558b) calenote_window_pane_ParamLimits

0x89b9,	// (0x0005558b) calenote_window_pane

0xe87b,	// (0x0005b44d) popup_note_window_cp01

0x89d5,	// (0x000555a7) calenote_swipe_1_pane_ParamLimits

0x89d5,	// (0x000555a7) calenote_swipe_1_pane

0x862f,	// (0x00055201) calenote_swipe_2_pane_ParamLimits

0x862f,	// (0x00055201) calenote_swipe_2_pane

0xe6b1,	// (0x0005b283) calenote_swipe_1_pane_g1_ParamLimits

0xe6b1,	// (0x0005b283) calenote_swipe_1_pane_g1

0xe6be,	// (0x0005b290) calenote_swipe_1_pane_g2_ParamLimits

0xe6be,	// (0x0005b290) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005c895) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005c895) calenote_swipe_1_pane_g

0xe88d,	// (0x0005b45f) calenote_swipe_1_pane_t1_ParamLimits

0xe88d,	// (0x0005b45f) calenote_swipe_1_pane_t1

0xe6b1,	// (0x0005b283) calenote_swipe_2_pane_g1_ParamLimits

0xe6b1,	// (0x0005b283) calenote_swipe_2_pane_g1

0xe8ac,	// (0x0005b47e) calenote_swipe_2_pane_g2_ParamLimits

0xe8ac,	// (0x0005b47e) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005c97d) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005c97d) calenote_swipe_2_pane_g

0xe8b8,	// (0x0005b48a) calenote_swipe_2_pane_t1_ParamLimits

0xe8b8,	// (0x0005b48a) calenote_swipe_2_pane_t1

0x9728,	// (0x000562fa) main_mup_navstr_pane

0x5695,	// (0x00052267) main_mup3_pane_t7_ParamLimits

0x5695,	// (0x00052267) main_mup3_pane_t7

0x9e3d,	// (0x00056a0f) main_mp4_pane_g6_ParamLimits

0x9e3d,	// (0x00056a0f) main_mp4_pane_g6

0x9fe1,	// (0x00056bb3) main_image3_pane_t4_ParamLimits

0x9fe1,	// (0x00056bb3) main_image3_pane_t4

0x89ea,	// (0x000555bc) popup_navstr_preview_pane_ParamLimits

0x89ea,	// (0x000555bc) popup_navstr_preview_pane

0x89fe,	// (0x000555d0) scroll_navstr_pane_ParamLimits

0x89fe,	// (0x000555d0) scroll_navstr_pane

0x9728,	// (0x000562fa) bg_popup_preview_window_pane_cp04

0xe8df,	// (0x0005b4b1) popup_navstr_preview_pane_t1

0x8a12,	// (0x000555e4) scroll_navstr_pane_g1_ParamLimits

0x8a12,	// (0x000555e4) scroll_navstr_pane_g1

0x8a26,	// (0x000555f8) scroll_navstr_pane_t1_ParamLimits

0x8a26,	// (0x000555f8) scroll_navstr_pane_t1

0xe884,	// (0x0005b456) bg_button_pane_cp014

0xe884,	// (0x0005b456) bg_button_pane_cp030

0x0888,	// (0x0004d45a) list_double_fisheye_pane_g4_ParamLimits

0x0888,	// (0x0004d45a) list_double_fisheye_pane_g4

0x0894,	// (0x0004d466) list_double_fisheye_pane_g5_ParamLimits

0x0894,	// (0x0004d466) list_double_fisheye_pane_g5

0xcb8f,	// (0x00059761) sp_fs_scroll_pane_cp03

0xe789,	// (0x0005b35b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe795,	// (0x0005b367) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005c8b2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a1,	// (0x0005b373) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe841,	// (0x0005b413) sp_fs_scroll_pane_cp02

0xa927,	// (0x000574f9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa927,	// (0x000574f9) popup_sp_fs_calendar_preview_list_single_pane

0x9728,	// (0x000562fa) main_cam6_pano_pane

0xb155,	// (0x00057d27) main_mup3_pane_ParamLimits

0x9728,	// (0x000562fa) main_phacti_pane

0x80f7,	// (0x00054cc9) bg_button_pane_cp11

0x8111,	// (0x00054ce3) main_mobtv_info_pane_g2_ParamLimits

0x8111,	// (0x00054ce3) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005c812) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005c812) main_mobtv_info_pane_g

0x82ee,	// (0x00054ec0) sc_clock_pane_t5_ParamLimits

0x82ee,	// (0x00054ec0) sc_clock_pane_t5

0x83a9,	// (0x00054f7b) main_radioblah_pane_g1_ParamLimits

0xe5fd,	// (0x0005b1cf) main_radioblah_pane_t3_ParamLimits

0xe5fd,	// (0x0005b1cf) main_radioblah_pane_t3

0xe615,	// (0x0005b1e7) main_radioblah_pane_t4_ParamLimits

0xe615,	// (0x0005b1e7) main_radioblah_pane_t4

0x83d1,	// (0x00054fa3) main_radioblah_text_pane_ParamLimits

0x83d1,	// (0x00054fa3) main_radioblah_text_pane

0x83e3,	// (0x00054fb5) main_radioblah_info_pane_g1_ParamLimits

0x847c,	// (0x0005504e) main_radioblah_info_pane_t4_ParamLimits

0x847c,	// (0x0005504e) main_radioblah_info_pane_t4

0xb155,	// (0x00057d27) main_sp_fs_calendar_pane

0x8a3d,	// (0x0005560f) main_phacti_pane_g1

0x8a45,	// (0x00055617) phacti_note_pane_ParamLimits

0x8a45,	// (0x00055617) phacti_note_pane

0xe8f6,	// (0x0005b4c8) phacti_term_pane_ParamLimits

0xe8f6,	// (0x0005b4c8) phacti_term_pane

0xe90b,	// (0x0005b4dd) phacti_note_pane_t1_ParamLimits

0xe90b,	// (0x0005b4dd) phacti_note_pane_t1

0xa261,	// (0x00056e33) phacti_term_pane_g1

0xa269,	// (0x00056e3b) phacti_term_pane_t1_ParamLimits

0xa269,	// (0x00056e3b) phacti_term_pane_t1

0xe922,	// (0x0005b4f4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa42,	// (0x00057614) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005c987) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92a,	// (0x0005b4fc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92a,	// (0x0005b4fc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93f,	// (0x0005b511) aid_popup_sp_fs_bg_corner_pane

0xcc85,	// (0x00059857) popup_sp_fs_calendar_preview_bg_pane_g1

0x9728,	// (0x000562fa) popup_sp_fs_calendar_preview_bg_pane

0xe947,	// (0x0005b519) popup_sp_fs_calendar_preview_list_pane

0xc868,	// (0x0005943a) bg_main_sp_fs_cale_pane_ParamLimits

0xc868,	// (0x0005943a) bg_main_sp_fs_cale_pane

0xa29c,	// (0x00056e6e) listscroll_cale_mrui_pane_ParamLimits

0xa29c,	// (0x00056e6e) listscroll_cale_mrui_pane

0xa2b1,	// (0x00056e83) listscroll_sp_fs_schedule_track_pane

0xa2ba,	// (0x00056e8c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2ba,	// (0x00056e8c) main_sp_fs_ctrlbar_pane_cp01

0xe94f,	// (0x0005b521) main_sp_fs_ribbon_pane

0xa2cd,	// (0x00056e9f) popup_sp_fs_cale_preview_window

0x8aba,	// (0x0005568c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8aba,	// (0x0005568c) list_single_sp_fs_schedule_track_pane

0xb155,	// (0x00057d27) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb155,	// (0x00057d27) bg_sp_fs_highlight_list_pane_cp03

0x8ace,	// (0x000556a0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ace,	// (0x000556a0) list_single_sp_fs_schedule_track_pane_g1

0x8ada,	// (0x000556ac) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ada,	// (0x000556ac) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005c98c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005c98c) list_single_sp_fs_schedule_track_pane_g

0x8ae6,	// (0x000556b8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ae6,	// (0x000556b8) list_single_sp_fs_schedule_track_pane_t1

0x8b00,	// (0x000556d2) sp_fs_schedule_track_pane_ParamLimits

0x8b00,	// (0x000556d2) sp_fs_schedule_track_pane

0xe957,	// (0x0005b529) sp_fs_schedule_track_pane_g1

0xe95f,	// (0x0005b531) sp_fs_schedule_track_pane_g2

0xe967,	// (0x0005b539) sp_fs_schedule_track_pane_g3

0xe96f,	// (0x0005b541) sp_fs_schedule_track_pane_g4

0xe977,	// (0x0005b549) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005c991) sp_fs_schedule_track_pane_g

0xd706,	// (0x0005a2d8) bg_sp_fs_schedule_viewer_highlight_g1

0xac41,	// (0x00057813) bg_sp_fs_schedule_viewer_highlight_g2

0xd70e,	// (0x0005a2e0) bg_sp_fs_schedule_viewer_highlight_g3

0xd716,	// (0x0005a2e8) bg_sp_fs_schedule_viewer_highlight_g4

0xd945,	// (0x0005a517) bg_sp_fs_schedule_viewer_highlight_g5

0xd726,	// (0x0005a2f8) bg_sp_fs_schedule_viewer_highlight_g6

0xd72e,	// (0x0005a300) bg_sp_fs_schedule_viewer_highlight_g7

0xd736,	// (0x0005a308) bg_sp_fs_schedule_viewer_highlight_g8

0xac21,	// (0x000577f3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005c99c) bg_sp_fs_schedule_viewer_highlight_g

0x9728,	// (0x000562fa) bg_main_sp_fs_ribbon_pane

0x8b11,	// (0x000556e3) main_sp_fs_ribbon_pane_g1

0xe97f,	// (0x0005b551) main_sp_fs_ribbon_pane_t1

0x8b1a,	// (0x000556ec) main_sp_fs_ribbon_pane_t2

0xe98e,	// (0x0005b560) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005c9af) main_sp_fs_ribbon_pane_t

0xe99d,	// (0x0005b56f) main_sp_fs_ribbon_scheduler_pane

0xe9a5,	// (0x0005b577) bg_main_sp_fs_ribbon_pane_g1

0xe9ae,	// (0x0005b580) bg_main_sp_fs_ribbon_pane_g2

0xe9b7,	// (0x0005b589) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x000f,	// (0x0004cbe1) bg_main_sp_fs_ribbon_pane_g

0xe9bf,	// (0x0005b591) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c8,	// (0x0005b59a) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d1,	// (0x0005b5a3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0016,	// (0x0004cbe8) main_sp_fs_ribbon_scheduler_pane_g

0xe9da,	// (0x0005b5ac) list_cale_mrui_pane

0x8b29,	// (0x000556fb) sp_fs_scroll_pane_cp07_ParamLimits

0x8b29,	// (0x000556fb) sp_fs_scroll_pane_cp07

0x8b45,	// (0x00055717) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b45,	// (0x00055717) bg_sp_fs_schedule_viewer_highlight

0xe9e7,	// (0x0005b5b9) list_single_sp_fs_schedule_track_pane_cp01

0xe9ef,	// (0x0005b5c1) list_sp_fs_schedule_track_pane

0xe9f7,	// (0x0005b5c9) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f7,	// (0x0005b5c9) sp_fs_scroll_pane_cp06

0xcc85,	// (0x00059857) bgmain_sp_fs_calendar_pane_g1

0x0e3e,	// (0x0004da10) list_single_cale_mrui_pane_ParamLimits

0x0e3e,	// (0x0004da10) list_single_cale_mrui_pane

0xa2df,	// (0x00056eb1) list_single_cale_mrui_row_pane_ParamLimits

0xa2df,	// (0x00056eb1) list_single_cale_mrui_row_pane

0xa2ec,	// (0x00056ebe) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2ec,	// (0x00056ebe) list_single_cale_mrui_row_pane_g1

0xa324,	// (0x00056ef6) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa324,	// (0x00056ef6) list_single_cale_mrui_row_pane_t1

0x0e5f,	// (0x0004da31) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e5f,	// (0x0004da31) list_single_cale_mrui_row_pane_t2

0xa336,	// (0x00056f08) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa336,	// (0x00056f08) list_single_cale_mrui_row_pane_t3

0xa365,	// (0x00056f37) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa365,	// (0x00056f37) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdeb,	// (0x0005c9bd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdeb,	// (0x0005c9bd) list_single_cale_mrui_row_pane_t

0x0ec7,	// (0x0004da99) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0ec7,	// (0x0004da99) list_single_cmail_header_editor_pane_bg_cp01

0x0eed,	// (0x0004dabf) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0eed,	// (0x0004dabf) list_single_cmail_header_editor_pane_bg_cp02

0x8b55,	// (0x00055727) main_radioblah_text_pane_t1_ParamLimits

0x8b55,	// (0x00055727) main_radioblah_text_pane_t1

0xea16,	// (0x0005b5e8) cam6_indi_pane_cp01

0xea1e,	// (0x0005b5f0) cam6_mode_pane_cp01

0xea26,	// (0x0005b5f8) cam6_pano_pane

0xea2f,	// (0x0005b601) cam6_zoom_pane_cp01

0xea37,	// (0x0005b609) cam6_pano_image_pane

0xea42,	// (0x0005b614) cam6_pano_pane_g1

0xe341,	// (0x0005af13) cam6_pano_pane_g2

0xea4b,	// (0x0005b61d) cam6_pano_pane_g3

0xea54,	// (0x0005b626) cam6_pano_pane_g4

0xd268,	// (0x00059e3a) cam6_pano_pane_g5

0xea5d,	// (0x0005b62f) cam6_pano_pane_g6

0xea67,	// (0x0005b639) cam6_pano_pane_g7

0xea6f,	// (0x0005b641) cam6_pano_pane_g8

0xea78,	// (0x0005b64a) cam6_pano_pane_g9

0x0008,

0xfdf4,	// (0x0005c9c6) cam6_pano_pane_g

0x9728,	// (0x000562fa) main_browser_tag_pane

0xe8d7,	// (0x0005b4a9) grid_navstr_albumart_pane

0xea83,	// (0x0005b655) cell_navstr_albumart_pane_ParamLimits

0xea83,	// (0x0005b655) cell_navstr_albumart_pane

0xeaa3,	// (0x0005b675) cell_navstr_albumart_pane_g1

0xc679,	// (0x0005924b) cell_navstr_albumart_pane_g2

0xc689,	// (0x0005925b) cell_navstr_albumart_pane_g3

0xc681,	// (0x00059253) cell_navstr_albumart_pane_g4

0x0003,

0x0040,	// (0x0004cc12) cell_navstr_albumart_pane_g

0x8b6f,	// (0x00055741) bt_list_pane_ParamLimits

0x8b6f,	// (0x00055741) bt_list_pane

0x8b83,	// (0x00055755) bt_list_pane_t1

0x8b92,	// (0x00055764) bt_list_pane_t2

0x0001,

0xfe07,	// (0x0005c9d9) bt_list_pane_t

0x9728,	// (0x000562fa) main_cale_prevew_pane

0x8ba1,	// (0x00055773) popup_cale_preview_window_ParamLimits

0x8ba1,	// (0x00055773) popup_cale_preview_window

0xb155,	// (0x00057d27) bg_popup_preview_window_pane_cp05_ParamLimits

0xb155,	// (0x00057d27) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0005b67d) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0005b67d) list_cale_preview_pane

0x8bbc,	// (0x0005578e) list_double_cale_preview_pane_ParamLimits

0x8bbc,	// (0x0005578e) list_double_cale_preview_pane

0x8bce,	// (0x000557a0) list_single_cale_preview_pane_ParamLimits

0x8bce,	// (0x000557a0) list_single_cale_preview_pane

0x8be4,	// (0x000557b6) list_single_cale_preview_pane_g1

0x8bec,	// (0x000557be) list_single_cale_preview_pane_t1_ParamLimits

0x8bec,	// (0x000557be) list_single_cale_preview_pane_t1

0x8c01,	// (0x000557d3) list_double_cale_preview_pane_g1

0x8c09,	// (0x000557db) list_double_cale_preview_pane_t1_ParamLimits

0x8c09,	// (0x000557db) list_double_cale_preview_pane_t1

0x8c1e,	// (0x000557f0) list_double_cale_preview_pane_t2_ParamLimits

0x8c1e,	// (0x000557f0) list_double_cale_preview_pane_t2

0x0001,

0xfe0c,	// (0x0005c9de) list_double_cale_preview_pane_t_ParamLimits

0xfe0c,	// (0x0005c9de) list_double_cale_preview_pane_t

0x9728,	// (0x000562fa) main_ezdial_pane

0xb155,	// (0x00057d27) main_sp_fs_email_pane_ParamLimits

0x868d,	// (0x0005525f) cmail_ddmenu_btn01_pane_ParamLimits

0x868d,	// (0x0005525f) cmail_ddmenu_btn01_pane

0x86a0,	// (0x00055272) cmail_ddmenu_btn02_pane_ParamLimits

0x86a0,	// (0x00055272) cmail_ddmenu_btn02_pane

0x86c3,	// (0x00055295) cmail_ddmenu_btn03_pane_ParamLimits

0x86c3,	// (0x00055295) cmail_ddmenu_btn03_pane

0x86e9,	// (0x000552bb) main_sp_fs_ctrlbar_pane_ParamLimits

0x870d,	// (0x000552df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd73e,	// (0x0005a310) list_cmail_body_pane_ParamLimits

0xe857,	// (0x0005b429) bg_button_pane_cp12

0xe860,	// (0x0005b432) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe860,	// (0x0005b432) list_single_cmail_header_detail_pane_g3

0xa226,	// (0x00056df8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa226,	// (0x00056df8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005c978) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005c978) list_single_cmail_header_detail_pane_t

0xa27e,	// (0x00056e50) phacti_term_pane_t2_ParamLimits

0xa27e,	// (0x00056e50) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005c982) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005c982) phacti_term_pane_t

0xeab7,	// (0x0005b689) aid_size_list_single_double

0x8c36,	// (0x00055808) popup_ezdial_listscroll_window

0x8c52,	// (0x00055824) popup_number_entry_window_cp01

0xa9e8,	// (0x000575ba) bg_popup_call_pane_cp09

0xeac3,	// (0x0005b695) ezdial_list_pane

0xeacb,	// (0x0005b69d) scroll_pane_cp23

0xc868,	// (0x0005943a) bg_button_pane_cp028_ParamLimits

0xc868,	// (0x0005943a) bg_button_pane_cp028

0x8c60,	// (0x00055832) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c60,	// (0x00055832) cmail_ddmenu_btn01_pane_g1

0x8c6c,	// (0x0005583e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c6c,	// (0x0005583e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe11,	// (0x0005c9e3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe11,	// (0x0005c9e3) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0005b6a5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0005b6a5) cmail_ddmenu_btn01_pane_t1

0xc868,	// (0x0005943a) bg_button_pane_cp029_ParamLimits

0xc868,	// (0x0005943a) bg_button_pane_cp029

0x8c80,	// (0x00055852) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c80,	// (0x00055852) cmail_ddmenu_btn02_pane_g1

0x8c98,	// (0x0005586a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c98,	// (0x0005586a) cmail_ddmenu_btn02_pane_t1

0xb155,	// (0x00057d27) bg_button_pane_cp031_ParamLimits

0xb155,	// (0x00057d27) bg_button_pane_cp031

0x8c80,	// (0x00055852) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c80,	// (0x00055852) cmail_ddmenu_btn03_pane_g1

0x8c98,	// (0x0005586a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c98,	// (0x0005586a) cmail_ddmenu_btn03_pane_t1

0x623c,	// (0x00052e0e) cell_dialer2_keypad_pane_t1_ParamLimits

0x6256,	// (0x00052e28) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6256,	// (0x00052e28) cell_dialer2_keypad_pane_t1_copy1

0x7f5e,	// (0x00054b30) ncimui_group_button_pane

0xb155,	// (0x00057d27) main_sp_fs_calendar_pane_ParamLimits

0x8958,	// (0x0005552a) list_single_cmail_header_caption_pane_ParamLimits

0xa293,	// (0x00056e65) aid_recal_txt_sm_pane

0x9728,	// (0x000562fa) mian_recal_day_pane

0xa2cd,	// (0x00056e9f) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0005b6bb) list_recal_day_pane

0xa3af,	// (0x00056f81) list_single_recal_day_pane_ParamLimits

0xa3af,	// (0x00056f81) list_single_recal_day_pane

0xeb10,	// (0x0005b6e2) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0005b6e2) list_single_recal_day_pane_g1

0xa3c1,	// (0x00056f93) list_single_recal_day_pane_g2_ParamLimits

0xa3c1,	// (0x00056f93) list_single_recal_day_pane_g2

0xa3d1,	// (0x00056fa3) list_single_recal_day_pane_g3_ParamLimits

0xa3d1,	// (0x00056fa3) list_single_recal_day_pane_g3

0x0f0d,	// (0x0004dadf) list_single_recal_day_pane_g4_ParamLimits

0x0f0d,	// (0x0004dadf) list_single_recal_day_pane_g4

0xa3dd,	// (0x00056faf) list_single_recal_day_pane_g5_ParamLimits

0xa3dd,	// (0x00056faf) list_single_recal_day_pane_g5

0xa3ed,	// (0x00056fbf) list_single_recal_day_pane_g6_ParamLimits

0xa3ed,	// (0x00056fbf) list_single_recal_day_pane_g6

0x0004,

0xfe20,	// (0x0005c9f2) list_single_recal_day_pane_g_ParamLimits

0xfe20,	// (0x0005c9f2) list_single_recal_day_pane_g

0xa401,	// (0x00056fd3) list_single_recal_day_pane_t1

0xa413,	// (0x00056fe5) list_single_recal_day_pane_t2

0x0001,

0xfe2b,	// (0x0005c9fd) list_single_recal_day_pane_t

0x8cbc,	// (0x0005588e) ncimui_query_button_pane_ParamLimits

0x8cbc,	// (0x0005588e) ncimui_query_button_pane

0x8ccc,	// (0x0005589e) ncimui_query_button_pane_t1_ParamLimits

0x8ccc,	// (0x0005589e) ncimui_query_button_pane_t1

0xeb1c,	// (0x0005b6ee) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0005b6ee) ncimui_query_button_pane_t2

0x0001,

0xfe30,	// (0x0005ca02) ncimui_query_button_pane_t_ParamLimits

0xfe30,	// (0x0005ca02) ncimui_query_button_pane_t

0x8cdf,	// (0x000558b1) query_button_pane_ParamLimits

0x8cdf,	// (0x000558b1) query_button_pane

0x9728,	// (0x000562fa) bg_button_pane_cp0028

0xeb2f,	// (0x0005b701) query_button_pane_t1

0x42d8,	// (0x00050eaa) main_tport_pane_ParamLimits

0x881c,	// (0x000553ee) bg_popup_window_pane_cp01_ParamLimits

0x881c,	// (0x000553ee) bg_popup_window_pane_cp01

0x8837,	// (0x00055409) heading_pane_cp08_ParamLimits

0x8837,	// (0x00055409) heading_pane_cp08

0x884a,	// (0x0005541c) heading_pane_cp07_ParamLimits

0x884a,	// (0x0005541c) heading_pane_cp07

0x88f1,	// (0x000554c3) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005c965) cell_tport_appsw_pane_g

0x38f9,	// (0x000504cb) input_candi_list_open_g1

0xae04,	// (0x000579d6) list_cale_time_pane_g6_ParamLimits

0xae04,	// (0x000579d6) list_cale_time_pane_g6

0x50a1,	// (0x00051c73) aid_size_touch_calib_1_ParamLimits

0x50a1,	// (0x00051c73) aid_size_touch_calib_1

0x50b3,	// (0x00051c85) aid_size_touch_calib_2_ParamLimits

0x50b3,	// (0x00051c85) aid_size_touch_calib_2

0x50cb,	// (0x00051c9d) aid_size_touch_calib_3_ParamLimits

0x50cb,	// (0x00051c9d) aid_size_touch_calib_3

0x50e9,	// (0x00051cbb) aid_size_touch_calib_4_ParamLimits

0x50e9,	// (0x00051cbb) aid_size_touch_calib_4

0x5101,	// (0x00051cd3) main_touch_calib_button_group_pane_ParamLimits

0x5101,	// (0x00051cd3) main_touch_calib_button_group_pane

0x5119,	// (0x00051ceb) main_touch_calib_pane_g1_ParamLimits

0x512b,	// (0x00051cfd) main_touch_calib_pane_g2_ParamLimits

0x513d,	// (0x00051d0f) main_touch_calib_pane_g3_ParamLimits

0x514f,	// (0x00051d21) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005c323) main_touch_calib_pane_g_ParamLimits

0x5161,	// (0x00051d33) main_touch_calib_pane_t1_ParamLimits

0x517b,	// (0x00051d4d) main_touch_calib_pane_t2_ParamLimits

0x5195,	// (0x00051d67) main_touch_calib_pane_t3_ParamLimits

0x51a9,	// (0x00051d7b) main_touch_calib_pane_t4_ParamLimits

0x51bd,	// (0x00051d8f) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005c32c) main_touch_calib_pane_t_ParamLimits

0xd008,	// (0x00059bda) list_single_fp_cale_pane_g3_ParamLimits

0xd008,	// (0x00059bda) list_single_fp_cale_pane_g3

0xb155,	// (0x00057d27) bg_button_pane_cp012_ParamLimits

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp03_ParamLimits

0x71c6,	// (0x00053d98) cell_vitu2_function_top_pane_g1_ParamLimits

0xb155,	// (0x00057d27) bg_vkb2_func_pane_cp04_ParamLimits

0x7eec,	// (0x00054abe) main_ncimui_button_group_pane_ParamLimits

0x7eec,	// (0x00054abe) main_ncimui_button_group_pane

0x7f4c,	// (0x00054b1e) main_ncimui_pane_t3_ParamLimits

0x7f4c,	// (0x00054b1e) main_ncimui_pane_t3

0xe8ed,	// (0x0005b4bf) phacti_button_group_pane

0xeab7,	// (0x0005b689) aid_size_list_single_double_ParamLimits

0x8c36,	// (0x00055808) popup_ezdial_listscroll_window_ParamLimits

0x8c52,	// (0x00055824) popup_number_entry_window_cp01_ParamLimits

0x8cf2,	// (0x000558c4) phacti_button_pane_ParamLimits

0x8cf2,	// (0x000558c4) phacti_button_pane

0x9728,	// (0x000562fa) bg_button_pane_cp14

0xeb3d,	// (0x0005b70f) phacti_button_pane_t1

0x8d03,	// (0x000558d5) main_touch_calib_button_pane_ParamLimits

0x8d03,	// (0x000558d5) main_touch_calib_button_pane

0xa823,	// (0x000573f5) bg_button_pane_cp18_ParamLimits

0xa823,	// (0x000573f5) bg_button_pane_cp18

0xeb4b,	// (0x0005b71d) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0005b71d) main_touch_calib_button_pane_t1

0xeb61,	// (0x0005b733) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0005b733) main_touch_calib_button_pane_t2

0x0001,

0x0077,	// (0x0004cc49) main_touch_calib_button_pane_t_ParamLimits

0x0077,	// (0x0004cc49) main_touch_calib_button_pane_t

0x9728,	// (0x000562fa) cell_ncimui_button_pane

0x9728,	// (0x000562fa) bg_button_pane_cp032

0xeb7f,	// (0x0005b751) cell_ncimui_button_pane_t1

0x9fc1,	// (0x00056b93) image3_infobar_pane_ParamLimits

0x9fc1,	// (0x00056b93) image3_infobar_pane

0x831a,	// (0x00054eec) fs_bigclock_status_pane_ParamLimits

0x831a,	// (0x00054eec) fs_bigclock_status_pane

0x8327,	// (0x00054ef9) main_fs_bigclock_clock_pane_ParamLimits

0x8327,	// (0x00054ef9) main_fs_bigclock_clock_pane

0x8347,	// (0x00054f19) main_fs_bigclock_indi_pane_ParamLimits

0x8347,	// (0x00054f19) main_fs_bigclock_indi_pane

0x8371,	// (0x00054f43) main_fs_bigclock_swipe_pane_ParamLimits

0x8371,	// (0x00054f43) main_fs_bigclock_swipe_pane

0x9728,	// (0x000562fa) main_fs_clock_dumped_data

0xe44e,	// (0x0005b020) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44e,	// (0x0005b020) list_single_fs_bigclock_indicator_pane_g1

0xe469,	// (0x0005b03b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe469,	// (0x0005b03b) list_single_fs_bigclock_indicator_pane_g2

0xe483,	// (0x0005b055) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe483,	// (0x0005b055) list_single_fs_bigclock_indicator_pane_g3

0xe49d,	// (0x0005b06f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe49d,	// (0x0005b06f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005c846) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005c846) list_single_fs_bigclock_indicator_pane_g

0xe4c8,	// (0x0005b09a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c8,	// (0x0005b09a) list_single_fs_bigclock_indicator_pane_t1

0xe4f0,	// (0x0005b0c2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f0,	// (0x0005b0c2) list_single_fs_bigclock_indicator_pane_t2

0xe518,	// (0x0005b0ea) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe518,	// (0x0005b0ea) list_single_fs_bigclock_indicator_pane_t3

0xe540,	// (0x0005b112) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe540,	// (0x0005b112) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005c851) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005c851) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0005b75f) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0005b75f) image3_infobar_fav_pane

0xeb9d,	// (0x0005b76f) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0005b76f) image3_infobar_loc_pane

0xebb1,	// (0x0005b783) image3_infobar_time_pane_ParamLimits

0xebb1,	// (0x0005b783) image3_infobar_time_pane

0xcc85,	// (0x00059857) image3_infobar_time_pane_g1

0xebc1,	// (0x0005b793) image3_infobar_time_pane_t1

0xcc85,	// (0x00059857) image3_infobar_loc_pane_g1

0xebcf,	// (0x0005b7a1) image3_infobar_loc_pane_g2

0x0001,

0xfe35,	// (0x0005ca07) image3_infobar_loc_pane_g

0xebd7,	// (0x0005b7a9) image3_infobar_loc_pane_t1

0xcc85,	// (0x00059857) image3_infobar_fav_pane_g1

0xebe5,	// (0x0005b7b7) image3_infobar_fav_pane_g2

0x0001,

0xfe3a,	// (0x0005ca0c) image3_infobar_fav_pane_g

0xebed,	// (0x0005b7bf) fs_bigclock_status_battery_pane

0xebf6,	// (0x0005b7c8) fs_bigclock_status_signal_pane

0xebff,	// (0x0005b7d1) fs_bigclock_status_title_pane

0xec08,	// (0x0005b7da) fs_bigclock_status_signal_pane_g1

0xec11,	// (0x0005b7e3) fs_bigclock_status_signal_pane_g2

0x0001,

0x0086,	// (0x0004cc58) fs_bigclock_status_signal_pane_g

0xec19,	// (0x0005b7eb) fs_bigclock_status_battery_pane_g1

0xec22,	// (0x0005b7f4) fs_bigclock_status_battery_pane_g2

0x0001,

0x008b,	// (0x0004cc5d) fs_bigclock_status_battery_pane_g

0xec2a,	// (0x0005b7fc) fs_bigclock_status_title_pane_t1

0xcc85,	// (0x00059857) main_fs_bigclock_clock_pane_g1

0xec38,	// (0x0005b80a) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0005b813) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0005b813) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe3f,	// (0x0005ca11) main_fs_bigclock_clock_pane_g

0xec49,	// (0x0005b81b) main_fs_bigclock_clock_pane_t1

0x8d18,	// (0x000558ea) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe48,	// (0x0005ca1a) main_fs_bigclock_clock_pane_t

0xec57,	// (0x0005b829) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec57,	// (0x0005b829) list_single_fs_bigclock_indicator_pane

0xec68,	// (0x0005b83a) list_single_fs_bigclock_pane_ParamLimits

0xec68,	// (0x0005b83a) list_single_fs_bigclock_pane

0xec8e,	// (0x0005b860) main_fs_bigclock_indicator_pane_t1

0xec9d,	// (0x0005b86f) list_single_fs_bigclock_pane_g1

0xeca5,	// (0x0005b877) list_single_fs_bigclock_pane_t1

0xcc85,	// (0x00059857) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0005b8ba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe54,	// (0x0005ca26) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0005b8c2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0005b8c2) main_fs_bigclock_swipe_pane_t1

0x3221,	// (0x0004fdf3) call_type_pane_ParamLimits

0x9728,	// (0x000562fa) main_btmg_pane

0xa318,	// (0x00056eea) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa318,	// (0x00056eea) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde4,	// (0x0005c9b6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde4,	// (0x0005c9b6) list_single_cale_mrui_row_pane_g

0xa39e,	// (0x00056f70) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0005b6da) list_recal_vselct_arw_up_pane

0xa3a6,	// (0x00056f78) list_recal_vselct_pane

0x8d6b,	// (0x0005593d) btmg_button_pane

0x8d75,	// (0x00055947) main_btmg_pane_g1

0x9728,	// (0x000562fa) bg_button_pane_cp044

0xed0d,	// (0x0005b8df) btmg_button_pane_t1

0xc854,	// (0x00059426) aid_listscroll_gen

0xb155,	// (0x00057d27) main_cntbar_detail_pane

0xe839,	// (0x0005b40b) list_cmail_folder_pane

0xcb8f,	// (0x00059761) sp_fs_scroll_pane_cp03_ParamLimits

0x0f2d,	// (0x0004daff) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f2d,	// (0x0004daff) list_single_fs_dyc_pane_cp01

0xed1b,	// (0x0005b8ed) aid_size_cmail_indent

0xa425,	// (0x00056ff7) list_single_dyc_row_pane_cp01

0x8db1,	// (0x00055983) cntbar_detail_list_pane_ParamLimits

0x8db1,	// (0x00055983) cntbar_detail_list_pane

0x8dfd,	// (0x000559cf) main_cntbar_detail_cont_pane_ParamLimits

0x8dfd,	// (0x000559cf) main_cntbar_detail_cont_pane

0xcb8f,	// (0x00059761) scroll_pane_cp032_ParamLimits

0xcb8f,	// (0x00059761) scroll_pane_cp032

0x8e11,	// (0x000559e3) cntbar_detail_list_event_pane_ParamLimits

0x8e11,	// (0x000559e3) cntbar_detail_list_event_pane

0x8dc1,	// (0x00055993) cntbar_detail_list_shct_pane

0xac8f,	// (0x00057861) aid_list_gen

0xed24,	// (0x0005b8f6) aid_scroll

0xed2d,	// (0x0005b8ff) aid_size_touch_scroll_bar

0x77be,	// (0x00054390) aid_list_double

0x77ac,	// (0x0005437e) aid_list_single

0x77ac,	// (0x0005437e) aid_list_single_lg

0x0f44,	// (0x0004db16) aid_list_z_g_a_sm

0x0f4c,	// (0x0004db1e) aid_list_z_g_d

0x0f54,	// (0x0004db26) aid_txt_z_prm

0x0f62,	// (0x0004db34) aid_txt_z_prm_cp01

0x0f70,	// (0x0004db42) aid_txt_z_sec

0x8e21,	// (0x000559f3) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e21,	// (0x000559f3) main_cntbar_detail_cont_pane_g1

0x8e35,	// (0x00055a07) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e35,	// (0x00055a07) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe59,	// (0x0005ca2b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe59,	// (0x0005ca2b) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0005b908) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0005b916) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0005b924) main_cntbar_detail_cont_pane_t3

0x0002,

0x00b4,	// (0x0004cc86) main_cntbar_detail_cont_pane_t

0x8e45,	// (0x00055a17) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e45,	// (0x00055a17) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0005b932) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0005b93b) cntbar_detail_list_shct_pane_g2

0x0001,

0x00bb,	// (0x0004cc8d) cntbar_detail_list_shct_pane_g

0x8e59,	// (0x00055a2b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e59,	// (0x00055a2b) cntbar_detail_list_event_pane_g1

0x8e65,	// (0x00055a37) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e65,	// (0x00055a37) cntbar_detail_list_event_pane_g2

0x0005,

0xfe5e,	// (0x0005ca30) cntbar_detail_list_event_pane_g_ParamLimits

0xfe5e,	// (0x0005ca30) cntbar_detail_list_event_pane_g

0x8ed1,	// (0x00055aa3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ed1,	// (0x00055aa3) cntbar_detail_list_event_pane_t1

0x8ee6,	// (0x00055ab8) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ee6,	// (0x00055ab8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6b,	// (0x0005ca3d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6b,	// (0x0005ca3d) cntbar_detail_list_event_pane_t

0xcc85,	// (0x00059857) cell_cntbar_detail_list_shct_pane_g1

0xb422,	// (0x00057ff4) navi_pane_mv_g3

0xb155,	// (0x00057d27) main_cntbar_detail_pane_ParamLimits

0x9728,	// (0x000562fa) main_notif_wgt_pane

0x9dd7,	// (0x000569a9) aid_tch_main_mp4_pane_g4

0x9fb9,	// (0x00056b8b) popup_slider_window_cp02

0xa394,	// (0x00056f66) list_recal_day_event_pane

0x8d7f,	// (0x00055951) cntbar_detail_btn_pane_ParamLimits

0x8d7f,	// (0x00055951) cntbar_detail_btn_pane

0x8d98,	// (0x0005596a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d98,	// (0x0005596a) cntbar_detail_btn_pane_cp01

0x8dc1,	// (0x00055993) cntbar_detail_list_shct_pane_ParamLimits

0x8dd1,	// (0x000559a3) cntbar_detail_pane_g1_ParamLimits

0x8dd1,	// (0x000559a3) cntbar_detail_pane_g1

0x8de1,	// (0x000559b3) cntbar_detail_pane_t1_ParamLimits

0x8de1,	// (0x000559b3) cntbar_detail_pane_t1

0x8e71,	// (0x00055a43) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e71,	// (0x00055a43) cntbar_detail_list_event_pane_g3

0x8e89,	// (0x00055a5b) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e89,	// (0x00055a5b) cntbar_detail_list_event_pane_g4

0x8ea1,	// (0x00055a73) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ea1,	// (0x00055a73) cntbar_detail_list_event_pane_g5

0x8eb9,	// (0x00055a8b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8eb9,	// (0x00055a8b) cntbar_detail_list_event_pane_g6

0x8efb,	// (0x00055acd) cntbar_detail_list_event_pane_t3_ParamLimits

0x8efb,	// (0x00055acd) cntbar_detail_list_event_pane_t3

0x8f0d,	// (0x00055adf) popup_notif_wgt_window_ParamLimits

0x8f0d,	// (0x00055adf) popup_notif_wgt_window

0x8f26,	// (0x00055af8) popup_submenu_window_cp01_ParamLimits

0x8f26,	// (0x00055af8) popup_submenu_window_cp01

0xa9e8,	// (0x000575ba) bg_popup_window_pane_cp10

0xed72,	// (0x0005b944) listscroll_notif_wgt_pane

0xed84,	// (0x0005b956) list_notif_wgt_window

0xed8d,	// (0x0005b95f) scroll_pane_cp033

0x8f3c,	// (0x00055b0e) list_notif_wgt_row_pane_ParamLimits

0x8f3c,	// (0x00055b0e) list_notif_wgt_row_pane

0xed96,	// (0x0005b968) aid_size_list_notif_wgt_del

0xeda3,	// (0x0005b975) list_notif_wgt_row_pane_g1

0xedaf,	// (0x0005b981) list_notif_wgt_row_pane_g2

0xedc3,	// (0x0005b995) list_notif_wgt_row_pane_g3

0x0002,

0x00d4,	// (0x0004cca6) list_notif_wgt_row_pane_g

0xedd0,	// (0x0005b9a2) list_notif_wgt_row_pane_t1

0xede6,	// (0x0005b9b8) list_notif_wgt_row_pane_t2

0xedf8,	// (0x0005b9ca) list_notif_wgt_row_pane_t3

0x0002,

0x00db,	// (0x0004ccad) list_notif_wgt_row_pane_t

0xd94d,	// (0x0005a51f) list_recal_day_event_pane_g1

0xee0a,	// (0x0005b9dc) list_recal_day_event_pane_t1

0x9728,	// (0x000562fa) bg_button_pane_cp045

0x8f4c,	// (0x00055b1e) cntbar_detail_btn_pane_t1

0xc868,	// (0x0005943a) main_callh_pane_ParamLimits

0xc868,	// (0x0005943a) main_callh_pane

0x9728,	// (0x000562fa) main_coverflow0_pane

0x9728,	// (0x000562fa) main_wgtman_pane

0x8389,	// (0x00054f5b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8389,	// (0x00054f5b) main_fs_bigclock_unlock_btn_pane

0x88e9,	// (0x000554bb) bg_button_pane_cp16

0x88f9,	// (0x000554cb) cell_tport_appsw_pane_g3

0x8f5a,	// (0x00055b2c) cf0_flow_pane_ParamLimits

0x8f5a,	// (0x00055b2c) cf0_flow_pane

0xee19,	// (0x0005b9eb) listscroll_cf0_pane

0xee24,	// (0x0005b9f6) main_cf0_pane_g1

0x8f6f,	// (0x00055b41) main_cf0_pane_t1_ParamLimits

0x8f6f,	// (0x00055b41) main_cf0_pane_t1

0x8f86,	// (0x00055b58) main_cf0_pane_t2_ParamLimits

0x8f86,	// (0x00055b58) main_cf0_pane_t2

0x0001,

0xfe72,	// (0x0005ca44) main_cf0_pane_t_ParamLimits

0xfe72,	// (0x0005ca44) main_cf0_pane_t

0xee36,	// (0x0005ba08) scroll_pane_cp11

0x8f9d,	// (0x00055b6f) cf0_flow_pane_g1

0x8fa5,	// (0x00055b77) cf0_flow_pane_g2

0x0001,

0xfe77,	// (0x0005ca49) cf0_flow_pane_g

0x8fad,	// (0x00055b7f) cf0_flow_pane_t1

0x9728,	// (0x000562fa) main_call6_pane

0x9728,	// (0x000562fa) main_calllock_pane

0x8fbb,	// (0x00055b8d) call6_btn_grp_pane_ParamLimits

0x8fbb,	// (0x00055b8d) call6_btn_grp_pane

0x8fd5,	// (0x00055ba7) call6_pane_g1_ParamLimits

0x8fd5,	// (0x00055ba7) call6_pane_g1

0x8fea,	// (0x00055bbc) popup_call6_1st_window_ParamLimits

0x8fea,	// (0x00055bbc) popup_call6_1st_window

0x8ffb,	// (0x00055bcd) popup_call6_2nd_window_ParamLimits

0x8ffb,	// (0x00055bcd) popup_call6_2nd_window

0x900c,	// (0x00055bde) cell_call6_btn_pane_ParamLimits

0x900c,	// (0x00055bde) cell_call6_btn_pane

0xa9e8,	// (0x000575ba) bg_popup_call2_in_pane_cp03

0xee41,	// (0x0005ba13) popup_call6_1st_window_g1

0xee49,	// (0x0005ba1b) popup_call6_1st_window_g2

0xee51,	// (0x0005ba23) popup_call6_1st_window_g3

0x0002,

0x00f1,	// (0x0004ccc3) popup_call6_1st_window_g

0xee59,	// (0x0005ba2b) popup_call6_1st_window_t1

0xee68,	// (0x0005ba3a) popup_call6_1st_window_t2

0xee78,	// (0x0005ba4a) popup_call6_1st_window_t3

0x0002,

0x00f8,	// (0x0004ccca) popup_call6_1st_window_t

0xa9e8,	// (0x000575ba) bg_popup_call2_in_pane_cp04

0xee41,	// (0x0005ba13) popup_call6_2nd_window_g1

0xee49,	// (0x0005ba1b) popup_call6_2nd_window_g2

0xee51,	// (0x0005ba23) popup_call6_2nd_window_g3

0x0002,

0x00f1,	// (0x0004ccc3) popup_call6_2nd_window_g

0xee59,	// (0x0005ba2b) popup_call6_2nd_window_t1

0x9728,	// (0x000562fa) bg_button_pane_cp15

0xee88,	// (0x0005ba5a) cell_call6_btn_pane_g1

0xee91,	// (0x0005ba63) cell_call6_btn_pane_t1

0x9020,	// (0x00055bf2) listscroll_wgtman_pane_ParamLimits

0x9020,	// (0x00055bf2) listscroll_wgtman_pane

0x9041,	// (0x00055c13) wgtman_btn_pane_ParamLimits

0x9041,	// (0x00055c13) wgtman_btn_pane

0xb229,	// (0x00057dfb) aid_scroll_copy1

0xeea0,	// (0x0005ba72) list_wgtman_pane

0x9084,	// (0x00055c56) wgtman_btn_pane_g1_ParamLimits

0x9084,	// (0x00055c56) wgtman_btn_pane_g1

0x90b0,	// (0x00055c82) wgtman_btn_pane_t1_ParamLimits

0x90b0,	// (0x00055c82) wgtman_btn_pane_t1

0xeeaa,	// (0x0005ba7c) wgtman_btn_pane_t2_ParamLimits

0xeeaa,	// (0x0005ba7c) wgtman_btn_pane_t2

0x0001,

0xfe7c,	// (0x0005ca4e) wgtman_btn_pane_t_ParamLimits

0xfe7c,	// (0x0005ca4e) wgtman_btn_pane_t

0x90ed,	// (0x00055cbf) listrow_wgtman_pane_ParamLimits

0x90ed,	// (0x00055cbf) listrow_wgtman_pane

0x90ff,	// (0x00055cd1) listrow_wgtman_pane_g1

0x910c,	// (0x00055cde) listrow_wgtman_pane_g2

0x0001,

0xfe81,	// (0x0005ca53) listrow_wgtman_pane_g

0x0f7e,	// (0x0004db50) listrow_wgtman_pane_t1

0x0f96,	// (0x0004db68) listrow_wgtman_pane_t2

0x0001,

0xfe86,	// (0x0005ca58) listrow_wgtman_pane_t

0x0fbc,	// (0x0004db8e) wait_bar_pane_cp09

0xeec1,	// (0x0005ba93) main_calllock_btn_pane

0xeecb,	// (0x0005ba9d) main_calllock_pane_g1

0x9728,	// (0x000562fa) bg_button_pane_cp17

0xeed7,	// (0x0005baa9) main_calllock_btn_pane_g1

0xeee0,	// (0x0005bab2) main_calllock_btn_pane_t1

0x9728,	// (0x000562fa) main_dialer3_pane

0x9728,	// (0x000562fa) main_fmrd2_pane

0xcc85,	// (0x00059857) main_fs_bigclock_unlock_btn_pane_g1

0xeef7,	// (0x0005bac9) main_fs_bigclock_unlock_btn_pane_t1

0x912a,	// (0x00055cfc) area_fmrd2_info_pane_ParamLimits

0x912a,	// (0x00055cfc) area_fmrd2_info_pane

0x913b,	// (0x00055d0d) area_fmrd2_visual_pane_ParamLimits

0x913b,	// (0x00055d0d) area_fmrd2_visual_pane

0x9149,	// (0x00055d1b) fmrd2_indi_pane_ParamLimits

0x9149,	// (0x00055d1b) fmrd2_indi_pane

0x9156,	// (0x00055d28) area_fmrd2_visual_pane_g1

0x915e,	// (0x00055d30) area_fmrd2_visual_pane_t1

0x916e,	// (0x00055d40) area_fmrd2_visual_pane_t2

0x917e,	// (0x00055d50) area_fmrd2_visual_pane_t3

0x0002,

0xfe90,	// (0x0005ca62) area_fmrd2_visual_pane_t

0x918e,	// (0x00055d60) area_fmrd2_info_pane_g1

0x9196,	// (0x00055d68) area_fmrd2_info_pane_t1

0x91a6,	// (0x00055d78) area_fmrd2_info_pane_t2

0x91b6,	// (0x00055d88) area_fmrd2_info_pane_t3

0x91c6,	// (0x00055d98) area_fmrd2_info_pane_t4

0x0003,

0xfe97,	// (0x0005ca69) area_fmrd2_info_pane_t

0x91d4,	// (0x00055da6) fmrd2_indi_pane_t1

0x91e4,	// (0x00055db6) fmrd2_indi_pane_t2

0x91f4,	// (0x00055dc6) fmrd2_indi_pane_t3

0x0002,

0xfea0,	// (0x0005ca72) fmrd2_indi_pane_t

0xe4ac,	// (0x0005b07e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4ac,	// (0x0005b07e) list_single_fs_bigclock_indicator_pane_g5

0xe55c,	// (0x0005b12e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe55c,	// (0x0005b12e) list_single_fs_bigclock_indicator_pane_t5

0x8a59,	// (0x0005562b) aid_cell_bcale_month_pane_ParamLimits

0x8a59,	// (0x0005562b) aid_cell_bcale_month_pane

0x8a77,	// (0x00055649) bcale_month_pane_ParamLimits

0x8a77,	// (0x00055649) bcale_month_pane

0x8a9b,	// (0x0005566d) bcale_preview_pane_ParamLimits

0x8a9b,	// (0x0005566d) bcale_preview_pane

0xeca5,	// (0x0005b877) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0005b896) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0005b896) list_single_fs_bigclock_pane_t2

0x0001,

0x00a5,	// (0x0004cc77) list_single_fs_bigclock_pane_t_ParamLimits

0x00a5,	// (0x0004cc77) list_single_fs_bigclock_pane_t

0xeeef,	// (0x0005bac1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe8b,	// (0x0005ca5d) main_fs_bigclock_unlock_btn_pane_g

0x9204,	// (0x00055dd6) aid_dia3_key_size_ParamLimits

0x9204,	// (0x00055dd6) aid_dia3_key_size

0x9213,	// (0x00055de5) aid_dia3_listrow_size_ParamLimits

0x9213,	// (0x00055de5) aid_dia3_listrow_size

0x9228,	// (0x00055dfa) dia3_keypad_fun_pane_ParamLimits

0x9228,	// (0x00055dfa) dia3_keypad_fun_pane

0x9244,	// (0x00055e16) dia3_keypad_num_pane_ParamLimits

0x9244,	// (0x00055e16) dia3_keypad_num_pane

0x925f,	// (0x00055e31) dia3_listscroll_pane_ParamLimits

0x925f,	// (0x00055e31) dia3_listscroll_pane

0x9272,	// (0x00055e44) dia3_numentry_pane_ParamLimits

0x9272,	// (0x00055e44) dia3_numentry_pane

0xef05,	// (0x0005bad7) dia3_list_pane

0xef10,	// (0x0005bae2) scroll_pane_cp12

0x9728,	// (0x000562fa) bg_dia3_numentry_pane

0x9286,	// (0x00055e58) dia3_numentry_pane_t1

0x9295,	// (0x00055e67) cell_dia3_key_num_pane

0x929d,	// (0x00055e6f) cell_dia3_key0_fun_pane_ParamLimits

0x929d,	// (0x00055e6f) cell_dia3_key0_fun_pane

0x92b1,	// (0x00055e83) cell_dia3_key1_fun_pane_ParamLimits

0x92b1,	// (0x00055e83) cell_dia3_key1_fun_pane

0x92c9,	// (0x00055e9b) dia3_listrow_pane

0xe1bb,	// (0x0005ad8d) bg_dia3_numentry_pane_g1

0x9728,	// (0x000562fa) bg_button_pane_cp21

0xef1b,	// (0x0005baed) cell_dia3_key_num_pane_t1

0xef29,	// (0x0005bafb) cell_dia3_key_num_pane_t2

0xef38,	// (0x0005bb0a) cell_dia3_key_num_pane_t3

0xef47,	// (0x0005bb19) cell_dia3_key_num_pane_t4

0x0003,

0x012a,	// (0x0004ccfc) cell_dia3_key_num_pane_t

0x9728,	// (0x000562fa) bg_button_pane_cp19

0x92db,	// (0x00055ead) cell_dia3_key0_fun_pane_g1

0x9728,	// (0x000562fa) bg_button_pane_cp20

0x92e3,	// (0x00055eb5) cell_dia3_key1_fun_pane_g1

0x92eb,	// (0x00055ebd) area_left_week_number_pane

0x92f7,	// (0x00055ec9) area_top_day_name_pane

0x930a,	// (0x00055edc) frame_month_view_pane

0xef56,	// (0x0005bb28) grid_month_view_pane

0x931d,	// (0x00055eef) cell_top_day_name_pane_ParamLimits

0x931d,	// (0x00055eef) cell_top_day_name_pane

0x934a,	// (0x00055f1c) cell_area_left_week_number_pane_ParamLimits

0x934a,	// (0x00055f1c) cell_area_left_week_number_pane

0x935e,	// (0x00055f30) cell_month_view_pane_ParamLimits

0x935e,	// (0x00055f30) cell_month_view_pane

0xef64,	// (0x0005bb36) frm_month_g1

0x938b,	// (0x00055f5d) frm_month_g2

0x939e,	// (0x00055f70) frm_month_g3

0x93b1,	// (0x00055f83) frm_month_g4

0x93c4,	// (0x00055f96) frm_month_g5

0x93d7,	// (0x00055fa9) frm_month_g6

0x93ea,	// (0x00055fbc) frm_month_g7

0xef71,	// (0x0005bb43) frm_month_g8

0x93fd,	// (0x00055fcf) frm_month_g9

0x940d,	// (0x00055fdf) frm_month_g10

0x941d,	// (0x00055fef) frm_month_g11

0x942d,	// (0x00055fff) frm_month_g12

0x943f,	// (0x00056011) frm_month_g13

0x9451,	// (0x00056023) frm_month_g14

0x9465,	// (0x00056037) frm_month_g15

0x9479,	// (0x0005604b) frm_month_g16

0x000f,

0xfea7,	// (0x0005ca79) frm_month_g

0xef7e,	// (0x0005bb50) cell_top_day_name_pane_t1

0x948d,	// (0x0005605f) cell_area_left_week_number_pane_g1

0x9499,	// (0x0005606b) cell_area_left_week_number_pane_t1

0xcee8,	// (0x00059aba) cell_month_view_pane_g1

0x94ac,	// (0x0005607e) cell_month_view_pane_t1

0x9728,	// (0x000562fa) main_fps_pane

0xe751,	// (0x0005b323) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe751,	// (0x0005b323) cmail_ddmenu_btn02_pane_cp1

0xe76d,	// (0x0005b33f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76d,	// (0x0005b33f) cmail_ddmenu_btn02_pane_cp2

0x8c8c,	// (0x0005585e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c8c,	// (0x0005585e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe16,	// (0x0005c9e8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe16,	// (0x0005c9e8) cmail_ddmenu_btn02_pane_g

0x8caa,	// (0x0005587c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8caa,	// (0x0005587c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1b,	// (0x0005c9ed) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1b,	// (0x0005c9ed) cmail_ddmenu_btn02_pane_t

0x94bf,	// (0x00056091) fps_text_pane_ParamLimits

0x94bf,	// (0x00056091) fps_text_pane

0x94d6,	// (0x000560a8) main_fps_pane_g1_ParamLimits

0x94d6,	// (0x000560a8) main_fps_pane_g1

0x94f0,	// (0x000560c2) wait_bar_pane_cp010_ParamLimits

0x94f0,	// (0x000560c2) wait_bar_pane_cp010

0x9501,	// (0x000560d3) fps_text_pane_t1_ParamLimits

0x9501,	// (0x000560d3) fps_text_pane_t1

0xe5d3,	// (0x0005b1a5) cam4_image_uncrop_pane_g1

0xe5dc,	// (0x0005b1ae) cam4_image_uncrop_pane_g2

0x66e2,	// (0x000532b4) cam4_image_uncrop_pane_g3

0x66eb,	// (0x000532bd) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005c4c0) cam4_image_uncrop_pane_g

0x92c9,	// (0x00055e9b) dia3_listrow_pane_ParamLimits

0x9728,	// (0x000562fa) main_phob2_pane

0x88ba,	// (0x0005548c) cell_tport_appsw_pane_cp02_ParamLimits

0x88ba,	// (0x0005548c) cell_tport_appsw_pane_cp02

0x88ce,	// (0x000554a0) cell_tport_appsw_pane_cp03_ParamLimits

0x88ce,	// (0x000554a0) cell_tport_appsw_pane_cp03

0x9728,	// (0x000562fa) phob2_contact_card_pane

0x9728,	// (0x000562fa) phob2_listscroll_pane

0xef91,	// (0x0005bb63) phob2_list_pane

0xef99,	// (0x0005bb6b) scroll_pane_cp034

0x9519,	// (0x000560eb) phob2_cc_data_pane_ParamLimits

0x9519,	// (0x000560eb) phob2_cc_data_pane

0x9538,	// (0x0005610a) phob2_cc_listscroll_pane_ParamLimits

0x9538,	// (0x0005610a) phob2_cc_listscroll_pane

0x9556,	// (0x00056128) list_double_large_graphic_phob2_pane_ParamLimits

0x9556,	// (0x00056128) list_double_large_graphic_phob2_pane

0x9568,	// (0x0005613a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9568,	// (0x0005613a) list_double_large_graphic_phob2_pane_g1

0x0fce,	// (0x0004dba0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0fce,	// (0x0004dba0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec8,	// (0x0005ca9a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec8,	// (0x0005ca9a) list_double_large_graphic_phob2_pane_g

0x0fda,	// (0x0004dbac) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0fda,	// (0x0004dbac) list_double_large_graphic_phob2_pane_t1

0x0fef,	// (0x0004dbc1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fef,	// (0x0004dbc1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfecd,	// (0x0005ca9f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfecd,	// (0x0005ca9f) list_double_large_graphic_phob2_pane_t

0x9728,	// (0x000562fa) list_highlight_pane_cp024

0x957e,	// (0x00056150) phob2_cc_button_pane

0x9586,	// (0x00056158) phob2_cc_data_pane_g1_ParamLimits

0x9586,	// (0x00056158) phob2_cc_data_pane_g1

0x959b,	// (0x0005616d) phob2_cc_data_pane_g2_ParamLimits

0x959b,	// (0x0005616d) phob2_cc_data_pane_g2

0x0001,

0xfed2,	// (0x0005caa4) phob2_cc_data_pane_g_ParamLimits

0xfed2,	// (0x0005caa4) phob2_cc_data_pane_g

0x95ab,	// (0x0005617d) phob2_cc_data_pane_t1_ParamLimits

0x95ab,	// (0x0005617d) phob2_cc_data_pane_t1

0x95c3,	// (0x00056195) phob2_cc_data_pane_t2_ParamLimits

0x95c3,	// (0x00056195) phob2_cc_data_pane_t2

0x95db,	// (0x000561ad) phob2_cc_data_pane_t3_ParamLimits

0x95db,	// (0x000561ad) phob2_cc_data_pane_t3

0x0002,

0xfed7,	// (0x0005caa9) phob2_cc_data_pane_t_ParamLimits

0xfed7,	// (0x0005caa9) phob2_cc_data_pane_t

0xefa1,	// (0x0005bb73) phob2_cc_list_pane_ParamLimits

0xefa1,	// (0x0005bb73) phob2_cc_list_pane

0xd9f6,	// (0x0005a5c8) scroll_pane_cp035_ParamLimits

0xd9f6,	// (0x0005a5c8) scroll_pane_cp035

0xb155,	// (0x00057d27) bg_button_pane_cp033

0xefad,	// (0x0005bb7f) phob2_cc_button_pane_g1

0xefb9,	// (0x0005bb8b) phob2_cc_button_pane_t1

0xefce,	// (0x0005bba0) phob2_cc_button_pane_t2

0x0001,

0x016a,	// (0x0004cd3c) phob2_cc_button_pane_t

0x95f3,	// (0x000561c5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95f3,	// (0x000561c5) list_double_large_graphic_phob2_cc_pane

0x9605,	// (0x000561d7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9605,	// (0x000561d7) list_double_large_graphic_phob2_cc_pane_g1

0x1001,	// (0x0004dbd3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1001,	// (0x0004dbd3) list_double_large_graphic_phob2_cc_pane_g2

0x100d,	// (0x0004dbdf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x100d,	// (0x0004dbdf) list_double_large_graphic_phob2_cc_pane_g3

0x1019,	// (0x0004dbeb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1019,	// (0x0004dbeb) list_double_large_graphic_phob2_cc_pane_g4

0xa42e,	// (0x00057000) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa42e,	// (0x00057000) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfede,	// (0x0005cab0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfede,	// (0x0005cab0) list_double_large_graphic_phob2_cc_pane_g

0x1025,	// (0x0004dbf7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1025,	// (0x0004dbf7) list_double_large_graphic_phob2_cc_pane_t1

0x104e,	// (0x0004dc20) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x104e,	// (0x0004dc20) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee9,	// (0x0005cabb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee9,	// (0x0005cabb) list_double_large_graphic_phob2_cc_pane_t

0xefe0,	// (0x0005bbb2) list_highlight_pane_cp025_ParamLimits

0xefe0,	// (0x0005bbb2) list_highlight_pane_cp025

0xb155,	// (0x00057d27) bg_button_pane_cp033_ParamLimits

0xefad,	// (0x0005bb7f) phob2_cc_button_pane_g1_ParamLimits

0xefb9,	// (0x0005bb8b) phob2_cc_button_pane_t1_ParamLimits

0xefce,	// (0x0005bba0) phob2_cc_button_pane_t2_ParamLimits

0x016a,	// (0x0004cd3c) phob2_cc_button_pane_t_ParamLimits

0x12c0,	// (0x0004de92) popup_wgtman_window

0xd820,	// (0x0005a3f2) scroll_pane_cp038

0x9066,	// (0x00055c38) wgtman_btn_pane_cp_01_ParamLimits

0x9066,	// (0x00055c38) wgtman_btn_pane_cp_01

0xefee,	// (0x0005bbc0) wgtman_content_pane

0xeff7,	// (0x0005bbc9) wgtman_heading_pane

0x9728,	// (0x000562fa) bg_heading_pane_cp02

0xf000,	// (0x0005bbd2) wgtman_heading_pane_g1

0xf008,	// (0x0005bbda) wgtman_heading_pane_t1

0xf016,	// (0x0005bbe8) scroll_pane_cp036

0xf01e,	// (0x0005bbf0) wgtman_list_pane

0xf026,	// (0x0005bbf8) wgtman_list_pane_t1_ParamLimits

0xf026,	// (0x0005bbf8) wgtman_list_pane_t1

0xa013,	// (0x00056be5) cam4_grid_pane

0x05e9,	// (0x0004d1bb) bg_button_pane_cp015_ParamLimits

0x7355,	// (0x00053f27) bg_button_pane_cp016_ParamLimits

0x7368,	// (0x00053f3a) bg_button_pane_cp017_ParamLimits

0x062f,	// (0x0004d201) popup_vitu2_query_window_g3_ParamLimits

0x062f,	// (0x0004d201) popup_vitu2_query_window_g3

0x06aa,	// (0x0004d27c) popup_vitu2_query_window_t6_ParamLimits

0x06aa,	// (0x0004d27c) popup_vitu2_query_window_t6

0x06d5,	// (0x0004d2a7) popup_vitu2_query_window_t7_ParamLimits

0x06d5,	// (0x0004d2a7) popup_vitu2_query_window_t7

0xe5d3,	// (0x0005b1a5) cam4_grid_pane_g1

0xe5dc,	// (0x0005b1ae) cam4_grid_pane_g2

0xf040,	// (0x0005bc12) cam4_grid_pane_g3

0xf049,	// (0x0005bc1b) cam4_grid_pane_g4

0x0003,

0xfeee,	// (0x0005cac0) cam4_grid_pane_g

0x21ba,	// (0x0004ed8c) aid_placing_vt_slider_lsc_ParamLimits

0x24c5,	// (0x0004f097) vidtel_button_pane_ParamLimits

0x24c5,	// (0x0004f097) vidtel_button_pane

0xf054,	// (0x0005bc26) bg_button_pane_cp034

0x9611,	// (0x000561e3) vidtel_button_pane_g1

0xf05e,	// (0x0005bc30) vidtel_button_pane_t1

0xd93d,	// (0x0005a50f) aid_size_vtel_slider_touch

0xd9f6,	// (0x0005a5c8) scroll_pane_cp039

0xe1f9,	// (0x0005adcb) ncim_query_button_pane_cp01_ParamLimits

0xe218,	// (0x0005adea) ncimui_query_pane_g1_ParamLimits

0xb155,	// (0x00057d27) input_focus_pane_cp012_ParamLimits

0xe23d,	// (0x0005ae0f) ncim_query_entry_pane_t1_ParamLimits

0xd9f6,	// (0x0005a5c8) scroll_pane_cp039_ParamLimits

0xb30d,	// (0x00057edf) navi_pane_bcale_mc_g1

0xb315,	// (0x00057ee7) navi_pane_bcale_mc_t1

0xe7b6,	// (0x0005b388) main_sp_fs_email_pane_g1

0xe7c2,	// (0x0005b394) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005c8b7) main_sp_fs_email_pane_g

0xea09,	// (0x0005b5db) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea09,	// (0x0005b5db) list_single_cale_mrui_row_pane_g3

0x0f23,	// (0x0004daf5) list_single_recal_day_pane_g5_event_pane

0xa3f9,	// (0x00056fcb) list_single_recal_day_pane_g7

0xf06c,	// (0x0005bc3e) list_recal_day_event_pane_cp01

0xf075,	// (0x0005bc47) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005bc4f) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005bc57) list_recal_vselct_pane_cp01

0xd94d,	// (0x0005a51f) list_recal_day_event_pane_cp01_g1

0xa43a,	// (0x0005700c) list_recal_day_event_pane_cp01_t1

0xa401,	// (0x00056fd3) list_single_recal_day_pane_t1_ParamLimits

0xa413,	// (0x00056fe5) list_single_recal_day_pane_t2_ParamLimits

0xfe2b,	// (0x0005c9fd) list_single_recal_day_pane_t_ParamLimits

0xa75e,	// (0x00057330) bg_notes_pane_ParamLimits

0xa801,	// (0x000573d3) list_notes_pane_ParamLimits

0x1609,	// (0x0004e1db) scroll_pane_cp06_ParamLimits

0xa823,	// (0x000573f5) main_notes_pane_ParamLimits

0x9728,	// (0x000562fa) main_welc_pane

0x9619,	// (0x000561eb) main_welc_body_pane_ParamLimits

0x9619,	// (0x000561eb) main_welc_body_pane

0x9637,	// (0x00056209) main_welc_opti_pane_ParamLimits

0x9637,	// (0x00056209) main_welc_opti_pane

0x967c,	// (0x0005624e) main_welc_pane_t1_ParamLimits

0x967c,	// (0x0005624e) main_welc_pane_t1

0x969a,	// (0x0005626c) main_welc_body_row_pane_ParamLimits

0x969a,	// (0x0005626c) main_welc_body_row_pane

0xe5c5,	// (0x0005b197) main_welc_opti_row_pane_ParamLimits

0xe5c5,	// (0x0005b197) main_welc_opti_row_pane

0xf08f,	// (0x0005bc61) main_welc_opti_row_pane_g1

0x96ae,	// (0x00056280) main_welc_opti_row_pane_t1

0xf097,	// (0x0005bc69) main_welc_body_row_pane_t1

0xed7c,	// (0x0005b94e) popup_notif_wgt_heading_pane

0xed96,	// (0x0005b968) aid_size_list_notif_wgt_del_ParamLimits

0xeda3,	// (0x0005b975) list_notif_wgt_row_pane_g1_ParamLimits

0xedaf,	// (0x0005b981) list_notif_wgt_row_pane_g2_ParamLimits

0xedc3,	// (0x0005b995) list_notif_wgt_row_pane_g3_ParamLimits

0x00d4,	// (0x0004cca6) list_notif_wgt_row_pane_g_ParamLimits

0xedd0,	// (0x0005b9a2) list_notif_wgt_row_pane_t1_ParamLimits

0xede6,	// (0x0005b9b8) list_notif_wgt_row_pane_t2_ParamLimits

0xedf8,	// (0x0005b9ca) list_notif_wgt_row_pane_t3_ParamLimits

0x00db,	// (0x0004ccad) list_notif_wgt_row_pane_t_ParamLimits

0x90ff,	// (0x00055cd1) listrow_wgtman_pane_g1_ParamLimits

0x910c,	// (0x00055cde) listrow_wgtman_pane_g2_ParamLimits

0xfe81,	// (0x0005ca53) listrow_wgtman_pane_g_ParamLimits

0x0f7e,	// (0x0004db50) listrow_wgtman_pane_t1_ParamLimits

0x0f96,	// (0x0004db68) listrow_wgtman_pane_t2_ParamLimits

0xfe86,	// (0x0005ca58) listrow_wgtman_pane_t_ParamLimits

0x0fbc,	// (0x0004db8e) wait_bar_pane_cp09_ParamLimits

0x9728,	// (0x000562fa) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005bc78) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005bc80) popup_notif_wgt_heading_pane_t1

0x9728,	// (0x000562fa) main_vids_pane

0x9728,	// (0x000562fa) vids_listscroll_pane

0x96bd,	// (0x0005628f) scroll_pane_cp040

0x9728,	// (0x000562fa) vids_list_pane

0x96c8,	// (0x0005629a) vids_list_double_pane_ParamLimits

0x96c8,	// (0x0005629a) vids_list_double_pane

0x96d9,	// (0x000562ab) vids_list_double_pane_g1

0x96e2,	// (0x000562b4) vids_list_double_pane_t1

0x96f2,	// (0x000562c4) vids_list_double_pane_t2

0x0001,

0xfefc,	// (0x0005cace) vids_list_double_pane_t

0xb155,	// (0x00057d27) main_ncimui_pane_ParamLimits

0x7f00,	// (0x00054ad2) main_ncimui_pane_g1_ParamLimits

0x7f0c,	// (0x00054ade) main_ncimui_pane_g2_ParamLimits

0x7f0c,	// (0x00054ade) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005c7bc) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005c7bc) main_ncimui_pane_g

0x9652,	// (0x00056224) main_welc_pane_g1_ParamLimits

0x9652,	// (0x00056224) main_welc_pane_g1

0x9667,	// (0x00056239) main_welc_pane_g2_ParamLimits

0x9667,	// (0x00056239) main_welc_pane_g2

0x0001,

0xfef7,	// (0x0005cac9) main_welc_pane_g_ParamLimits

0xfef7,	// (0x0005cac9) main_welc_pane_g

0xa75e,	// (0x00057330) listscroll_mce_pane_ParamLimits

0xb462,	// (0x00058034) wait_bar_pane_cp10

0xc85c,	// (0x0005942e) main_cale_day_pane_ParamLimits

0xc85c,	// (0x0005942e) main_cale_week_pane_ParamLimits

0xa75e,	// (0x00057330) main_messa_pane_ParamLimits

0x5a1e,	// (0x000525f0) main_clock2_btn_pane_ParamLimits

0x5a1e,	// (0x000525f0) main_clock2_btn_pane

0xd090,	// (0x00059c62) main_clock2_btn_pane_cp01_ParamLimits

0xd090,	// (0x00059c62) main_clock2_btn_pane_cp01

0xe9da,	// (0x0005b5ac) list_cale_mrui_pane_ParamLimits

0xee2e,	// (0x0005ba00) main_cf0_pane_g2

0x0001,

0x00e2,	// (0x0004ccb4) main_cf0_pane_g

0x92eb,	// (0x00055ebd) area_left_week_number_pane_ParamLimits

0x92f7,	// (0x00055ec9) area_top_day_name_pane_ParamLimits

0x930a,	// (0x00055edc) frame_month_view_pane_ParamLimits

0xef56,	// (0x0005bb28) grid_month_view_pane_ParamLimits

0xef64,	// (0x0005bb36) frm_month_g1_ParamLimits

0x938b,	// (0x00055f5d) frm_month_g2_ParamLimits

0x939e,	// (0x00055f70) frm_month_g3_ParamLimits

0x93b1,	// (0x00055f83) frm_month_g4_ParamLimits

0x93c4,	// (0x00055f96) frm_month_g5_ParamLimits

0x93d7,	// (0x00055fa9) frm_month_g6_ParamLimits

0x93ea,	// (0x00055fbc) frm_month_g7_ParamLimits

0xef71,	// (0x0005bb43) frm_month_g8_ParamLimits

0x93fd,	// (0x00055fcf) frm_month_g9_ParamLimits

0x940d,	// (0x00055fdf) frm_month_g10_ParamLimits

0x941d,	// (0x00055fef) frm_month_g11_ParamLimits

0x942d,	// (0x00055fff) frm_month_g12_ParamLimits

0x943f,	// (0x00056011) frm_month_g13_ParamLimits

0x9451,	// (0x00056023) frm_month_g14_ParamLimits

0x9465,	// (0x00056037) frm_month_g15_ParamLimits

0x9479,	// (0x0005604b) frm_month_g16_ParamLimits

0xfea7,	// (0x0005ca79) frm_month_g_ParamLimits

0xef7e,	// (0x0005bb50) cell_top_day_name_pane_t1_ParamLimits

0x948d,	// (0x0005605f) cell_area_left_week_number_pane_g1_ParamLimits

0x9499,	// (0x0005606b) cell_area_left_week_number_pane_t1_ParamLimits

0xcee8,	// (0x00059aba) cell_month_view_pane_g1_ParamLimits

0x94ac,	// (0x0005607e) cell_month_view_pane_t1_ParamLimits

0xa756,	// (0x00057328) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005bc8e) main_clock2_btn_pane_t1

0xb155,	// (0x00057d27) listscroll_cmail_pane_ParamLimits

0xe7b6,	// (0x0005b388) main_sp_fs_email_pane_g1_ParamLimits

0xe7c2,	// (0x0005b394) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005c8b7) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0005b6bb) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0005b6cc) mian_recal_day_pane_t1

0x0b47,	// (0x0004d719) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b47,	// (0x0004d719) list_single_dyc_row_text_pane_t4

0x0b90,	// (0x0004d762) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b90,	// (0x0004d762) list_single_dyc_row_text_pane_t5

0x87a5,	// (0x00055377) list_single_dyc_row_text_pane_t6_ParamLimits

0x87a5,	// (0x00055377) list_single_dyc_row_text_pane_t6

0x3167,	// (0x0004fd39) aid_mgn_list_cale_time_pane

0xb155,	// (0x00057d27) main_gallery2_pane_ParamLimits

0xd0a6,	// (0x00059c78) main_clock2_pane_cp01_t1

0xd0b6,	// (0x00059c88) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005c396) main_clock2_pane_cp01_t

0x19b5,	// (0x0004e587) cale_week_scroll_pane_g16_ParamLimits

0x19b5,	// (0x0004e587) cale_week_scroll_pane_g16

0xa9e8,	// (0x000575ba) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small

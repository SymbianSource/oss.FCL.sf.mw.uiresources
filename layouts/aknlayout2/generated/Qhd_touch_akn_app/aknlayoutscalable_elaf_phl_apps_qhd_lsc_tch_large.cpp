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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00085065 };

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
0x10f9,	// (0x0008615e) Screen

0x1105,	// (0x0008616a) application_window

0x1141,	// (0x000861a6) area_bottom_pane_ParamLimits

0x1141,	// (0x000861a6) area_bottom_pane

0x117a,	// (0x000861df) area_top_pane_ParamLimits

0x117a,	// (0x000861df) area_top_pane

0xb327,	// (0x0009038c) call_video_uplink_pane_ParamLimits

0xb327,	// (0x0009038c) call_video_uplink_pane

0x1208,	// (0x0008626d) main_pane_ParamLimits

0x1208,	// (0x0008626d) main_pane

0xc225,	// (0x0009128a) context_pane

0x5dbc,	// (0x0008ae21) navi_pane

0x5dee,	// (0x0008ae53) popup_cale_events_window_ParamLimits

0x5dee,	// (0x0008ae53) popup_cale_events_window

0xc238,	// (0x0009129d) popup_mup_playback_window

0x5e06,	// (0x0008ae6b) signal_pane

0x1b68,	// (0x00086bcd) main_browser_pane

0x4666,	// (0x000896cb) main_burst_pane

0x5b1c,	// (0x0008ab81) main_calc_pane

0xc1b7,	// (0x0009121c) main_cale_day_pane

0x1e3e,	// (0x00086ea3) main_cale_month_pane

0xc1b7,	// (0x0009121c) main_cale_week_pane

0x4666,	// (0x000896cb) main_call_pane

0x15a1,	// (0x00086606) main_call_poc_pane

0x4666,	// (0x000896cb) main_camera_pane

0x4666,	// (0x000896cb) main_chi_dic_pane

0x41c1,	// (0x00089226) main_clock_pane

0x15a1,	// (0x00086606) main_fmradio_pane

0x4666,	// (0x000896cb) main_graph_messa_pane

0x15a1,	// (0x00086606) main_help_pane

0x1b68,	// (0x00086bcd) main_im_pane

0x17fc,	// (0x00086861) main_image_pane_ParamLimits

0x17fc,	// (0x00086861) main_image_pane

0x15a1,	// (0x00086606) main_location2_pane

0x4666,	// (0x000896cb) main_location_pane

0x17fc,	// (0x00086861) main_messa_pane

0x15a1,	// (0x00086606) main_mp2_pane

0x4666,	// (0x000896cb) main_mp_pane

0x15a1,	// (0x00086606) main_msg_pane

0x15a1,	// (0x00086606) main_mup_eq_pane

0x15a1,	// (0x00086606) main_mup_pane

0x1b68,	// (0x00086bcd) main_notes_pane

0x15a1,	// (0x00086606) main_pec_pane

0x15a1,	// (0x00086606) main_phob_pane

0x15a1,	// (0x00086606) main_pinb_pane

0x15a1,	// (0x00086606) main_postcard_pane

0x15a1,	// (0x00086606) main_qdial_pane

0x4666,	// (0x000896cb) main_skin_pane

0x15a1,	// (0x00086606) main_smil2_pane

0x4666,	// (0x000896cb) main_smil_pane

0x4666,	// (0x000896cb) main_video_pane

0x4666,	// (0x000896cb) main_video_tele_pane

0x17fc,	// (0x00086861) main_viewer_pane_ParamLimits

0x17fc,	// (0x00086861) main_viewer_pane

0x4666,	// (0x000896cb) main_vorec_pane

0x5b70,	// (0x0008abd5) popup_blid_sat_info_window_ParamLimits

0x5b70,	// (0x0008abd5) popup_blid_sat_info_window

0x5bc8,	// (0x0008ac2d) popup_dyc_status_message_window_ParamLimits

0x5bc8,	// (0x0008ac2d) popup_dyc_status_message_window

0x5be2,	// (0x0008ac47) popup_grid_large_graphic_window_ParamLimits

0x5be2,	// (0x0008ac47) popup_grid_large_graphic_window

0x5c9e,	// (0x0008ad03) popup_loc_request_window_ParamLimits

0x5c9e,	// (0x0008ad03) popup_loc_request_window

0x5d94,	// (0x0008adf9) popup_wml_address_window_ParamLimits

0x5d94,	// (0x0008adf9) popup_wml_address_window

0x5956,	// (0x0008a9bb) call_muted_g1

0x5340,	// (0x0008a3a5) popup_call_audio_conf_window_ParamLimits

0x5340,	// (0x0008a3a5) popup_call_audio_conf_window

0x596a,	// (0x0008a9cf) popup_call_audio_first_window_ParamLimits

0x596a,	// (0x0008a9cf) popup_call_audio_first_window

0x59e0,	// (0x0008aa45) popup_call_audio_in_window_ParamLimits

0x59e0,	// (0x0008aa45) popup_call_audio_in_window

0x5a1c,	// (0x0008aa81) popup_call_audio_out_window_ParamLimits

0x5a1c,	// (0x0008aa81) popup_call_audio_out_window

0x5a56,	// (0x0008aabb) popup_call_audio_second_window_ParamLimits

0x5a56,	// (0x0008aabb) popup_call_audio_second_window

0x5aac,	// (0x0008ab11) popup_call_audio_wait_window_ParamLimits

0x5aac,	// (0x0008ab11) popup_call_audio_wait_window

0x5ae1,	// (0x0008ab46) popup_number_entry_window_ParamLimits

0x5ae1,	// (0x0008ab46) popup_number_entry_window

0xebdb,	// (0x00093c40) bg_popup_call_pane_cp05_ParamLimits

0xebdb,	// (0x00093c40) bg_popup_call_pane_cp05

0xebfb,	// (0x00093c60) popup_number_entry_window_t1

0xec0e,	// (0x00093c73) popup_number_entry_window_t2

0xec20,	// (0x00093c85) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x00094132) popup_number_entry_window_t

0xec32,	// (0x00093c97) text_title_cp2

0xec45,	// (0x00093caa) bg_popup_call_pane_cp_ParamLimits

0xec45,	// (0x00093caa) bg_popup_call_pane_cp

0xec53,	// (0x00093cb8) call_thumbnail_pane

0xec5b,	// (0x00093cc0) popup_call_audio_in_window_g1_ParamLimits

0xec5b,	// (0x00093cc0) popup_call_audio_in_window_g1

0xec67,	// (0x00093ccc) popup_call_audio_in_window_g2_ParamLimits

0xec67,	// (0x00093ccc) popup_call_audio_in_window_g2

0xec73,	// (0x00093cd8) popup_call_audio_in_window_g3_ParamLimits

0xec73,	// (0x00093cd8) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0009413b) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0009413b) popup_call_audio_in_window_g

0xec7f,	// (0x00093ce4) popup_call_audio_in_window_t1_ParamLimits

0xec7f,	// (0x00093ce4) popup_call_audio_in_window_t1

0xec9b,	// (0x00093d00) popup_call_audio_in_window_t2_ParamLimits

0xec9b,	// (0x00093d00) popup_call_audio_in_window_t2

0xecb7,	// (0x00093d1c) popup_call_audio_in_window_t3_ParamLimits

0xecb7,	// (0x00093d1c) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x00094142) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x00094142) popup_call_audio_in_window_t

0xec45,	// (0x00093caa) bg_popup_call_pane_cp01_ParamLimits

0xec45,	// (0x00093caa) bg_popup_call_pane_cp01

0xec53,	// (0x00093cb8) call_thumbnail_pane_cp02

0xecca,	// (0x00093d2f) call_type_pane_cp022

0xecd2,	// (0x00093d37) popup_call_audio_out_window_g1_ParamLimits

0xecd2,	// (0x00093d37) popup_call_audio_out_window_g1

0xece4,	// (0x00093d49) popup_call_audio_out_window_g2_ParamLimits

0xece4,	// (0x00093d49) popup_call_audio_out_window_g2

0xecf0,	// (0x00093d55) popup_call_audio_out_window_g3_ParamLimits

0xecf0,	// (0x00093d55) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x00094149) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x00094149) popup_call_audio_out_window_g

0xed02,	// (0x00093d67) popup_call_audio_out_window_t1_ParamLimits

0xed02,	// (0x00093d67) popup_call_audio_out_window_t1

0xed1a,	// (0x00093d7f) popup_call_audio_out_window_t2_ParamLimits

0xed1a,	// (0x00093d7f) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x00094150) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x00094150) popup_call_audio_out_window_t

0xed2f,	// (0x00093d94) bg_popup_call_pane_ParamLimits

0xed2f,	// (0x00093d94) bg_popup_call_pane

0x13d2,	// (0x00086437) call_thumbnail_pane_cp_ParamLimits

0x13d2,	// (0x00086437) call_thumbnail_pane_cp

0xedb3,	// (0x00093e18) call_type_pane_cp01_ParamLimits

0xedb3,	// (0x00093e18) call_type_pane_cp01

0xedf7,	// (0x00093e5c) popup_call_audio_first_window_g1_ParamLimits

0xedf7,	// (0x00093e5c) popup_call_audio_first_window_g1

0x13f6,	// (0x0008645b) popup_call_audio_first_window_g2_ParamLimits

0x13f6,	// (0x0008645b) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x00094155) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x00094155) popup_call_audio_first_window_g

0x143a,	// (0x0008649f) popup_call_audio_first_window_t1_ParamLimits

0x143a,	// (0x0008649f) popup_call_audio_first_window_t1

0x14e6,	// (0x0008654b) popup_call_audio_first_window_t4_ParamLimits

0x14e6,	// (0x0008654b) popup_call_audio_first_window_t4

0x1572,	// (0x000865d7) popup_call_audio_first_window_t5_ParamLimits

0x1572,	// (0x000865d7) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0009415a) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0009415a) popup_call_audio_first_window_t

0x15a1,	// (0x00086606) bg_popup_call_pane_cp02

0x15ab,	// (0x00086610) call_type_pane_cp023

0x15b3,	// (0x00086618) popup_call_audio_wait_window_g1

0x15bb,	// (0x00086620) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x00094161) popup_call_audio_wait_window_g

0x15c3,	// (0x00086628) popup_call_audio_wait_window_t3

0x15d1,	// (0x00086636) bg_popup_call_pane_cp03_ParamLimits

0x15d1,	// (0x00086636) bg_popup_call_pane_cp03

0x1631,	// (0x00086696) call_thumbnail_pane_cp011_ParamLimits

0x1631,	// (0x00086696) call_thumbnail_pane_cp011

0x163d,	// (0x000866a2) call_type_pane_cp034_ParamLimits

0x163d,	// (0x000866a2) call_type_pane_cp034

0x1679,	// (0x000866de) popup_call_audio_second_window_g1_ParamLimits

0x1679,	// (0x000866de) popup_call_audio_second_window_g1

0x16b5,	// (0x0008671a) popup_call_audio_second_window_g2_ParamLimits

0x16b5,	// (0x0008671a) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x00094166) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x00094166) popup_call_audio_second_window_g

0x16f1,	// (0x00086756) popup_call_audio_second_window_t1_ParamLimits

0x16f1,	// (0x00086756) popup_call_audio_second_window_t1

0x1772,	// (0x000867d7) popup_call_audio_second_window_t2_ParamLimits

0x1772,	// (0x000867d7) popup_call_audio_second_window_t2

0x17a8,	// (0x0008680d) popup_call_audio_second_window_t3_ParamLimits

0x17a8,	// (0x0008680d) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0009416b) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0009416b) popup_call_audio_second_window_t

0x15a1,	// (0x00086606) bg_popup_call_pane_cp04

0x17de,	// (0x00086843) list_conf_pane

0x17e6,	// (0x0008684b) popup_call_audio_conf_window_t1

0x17f4,	// (0x00086859) call_thumbnail_pane_g1

0x17fc,	// (0x00086861) bg_pinb_pane_ParamLimits

0x17fc,	// (0x00086861) bg_pinb_pane

0x180a,	// (0x0008686f) find_pinb_pane

0x1813,	// (0x00086878) listscroll_pinb_pane_ParamLimits

0x1813,	// (0x00086878) listscroll_pinb_pane

0x1822,	// (0x00086887) pinb_bg_pane_g1

0x182c,	// (0x00086891) pinb_bg_pane_g2

0x1838,	// (0x0008689d) pinb_bg_pane_g3

0x1844,	// (0x000868a9) pinb_bg_pane_g4

0x1850,	// (0x000868b5) pinb_bg_pane_g5

0x185c,	// (0x000868c1) pinb_bg_pane_g6

0x1867,	// (0x000868cc) pinb_bg_pane_g7

0x1872,	// (0x000868d7) pinb_bg_pane_g8

0x187d,	// (0x000868e2) pinb_bg_pane_g9

0x1887,	// (0x000868ec) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x00094172) pinb_bg_pane_g

0x18a4,	// (0x00086909) grid_pinb_pane

0x18ad,	// (0x00086912) list_pinb_pane

0x18b6,	// (0x0008691b) scroll_pane_cp01_ParamLimits

0x18b6,	// (0x0008691b) scroll_pane_cp01

0x18c8,	// (0x0008692d) find_pinb_pane_g1_ParamLimits

0x18c8,	// (0x0008692d) find_pinb_pane_g1

0x18e0,	// (0x00086945) find_pinb_pane_t1

0x18f2,	// (0x00086957) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0009418c) find_pinb_pane_t

0x1907,	// (0x0008696c) input_focus_pane_cp01_ParamLimits

0x1907,	// (0x0008696c) input_focus_pane_cp01

0x1913,	// (0x00086978) cell_pinb_pane_ParamLimits

0x1913,	// (0x00086978) cell_pinb_pane

0x193c,	// (0x000869a1) cell_pinb_pane_g1_ParamLimits

0x193c,	// (0x000869a1) cell_pinb_pane_g1

0x194c,	// (0x000869b1) cell_pinb_pane_g2_ParamLimits

0x194c,	// (0x000869b1) cell_pinb_pane_g2

0x1958,	// (0x000869bd) cell_pinb_pane_g3_ParamLimits

0x1958,	// (0x000869bd) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x00094191) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x00094191) cell_pinb_pane_g

0x15a1,	// (0x00086606) grid_highlight_pane_cp01

0x1964,	// (0x000869c9) list_pinb_item_pane_ParamLimits

0x1964,	// (0x000869c9) list_pinb_item_pane

0x15a1,	// (0x00086606) list_highlight_pane_cp02

0x1976,	// (0x000869db) list_pinb_item_pane_g1_ParamLimits

0x1976,	// (0x000869db) list_pinb_item_pane_g1

0x1983,	// (0x000869e8) list_pinb_item_pane_g2_ParamLimits

0x1983,	// (0x000869e8) list_pinb_item_pane_g2

0x198f,	// (0x000869f4) list_pinb_item_pane_g3_ParamLimits

0x198f,	// (0x000869f4) list_pinb_item_pane_g3

0x19a0,	// (0x00086a05) list_pinb_item_pane_g4_ParamLimits

0x19a0,	// (0x00086a05) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x00094198) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x00094198) list_pinb_item_pane_g

0x19ac,	// (0x00086a11) list_pinb_item_pane_t1_ParamLimits

0x19ac,	// (0x00086a11) list_pinb_item_pane_t1

0x19e1,	// (0x00086a46) calc_display_pane

0x1a09,	// (0x00086a6e) calc_paper_pane

0x1a2c,	// (0x00086a91) grid_calc_pane

0x15a1,	// (0x00086606) bg_list_pane_cp01

0x1a5a,	// (0x00086abf) clock_g1

0x1a62,	// (0x00086ac7) clock_g2

0x0001,

0xf13c,	// (0x000941a1) clock_g

0x1a6a,	// (0x00086acf) clock_t1_ParamLimits

0x1a6a,	// (0x00086acf) clock_t1

0x1a7f,	// (0x00086ae4) clock_t2_ParamLimits

0x1a7f,	// (0x00086ae4) clock_t2

0x1a91,	// (0x00086af6) clock_t3_ParamLimits

0x1a91,	// (0x00086af6) clock_t3

0x1aa3,	// (0x00086b08) clock_t4_ParamLimits

0x1aa3,	// (0x00086b08) clock_t4

0x1ab5,	// (0x00086b1a) clock_t5_ParamLimits

0x1ab5,	// (0x00086b1a) clock_t5

0x1aca,	// (0x00086b2f) clock_t6_ParamLimits

0x1aca,	// (0x00086b2f) clock_t6

0x1adc,	// (0x00086b41) clock_t7_ParamLimits

0x1adc,	// (0x00086b41) clock_t7

0x1aee,	// (0x00086b53) clock_t8_ParamLimits

0x1aee,	// (0x00086b53) clock_t8

0x1b02,	// (0x00086b67) clock_t9_ParamLimits

0x1b02,	// (0x00086b67) clock_t9

0x0008,

0xf141,	// (0x000941a6) clock_t_ParamLimits

0xf141,	// (0x000941a6) clock_t

0x1b16,	// (0x00086b7b) popup_clock_analogue_window_cp02

0x1b16,	// (0x00086b7b) popup_clock_digital_window_cp01

0x1b1e,	// (0x00086b83) listscroll_help_pane

0x15a1,	// (0x00086606) phob_pre_status_pane

0x1b28,	// (0x00086b8d) grid_qdial_pane

0x17fc,	// (0x00086861) listscroll_mce_pane

0x17fc,	// (0x00086861) bg_notes_pane

0x1b32,	// (0x00086b97) list_notes_pane

0x1b40,	// (0x00086ba5) scroll_pane_cp06

0x1b54,	// (0x00086bb9) bg_calc_paper_pane

0xb34d,	// (0x000903b2) list_calc_pane

0x1b68,	// (0x00086bcd) bg_calc_display_pane

0x1b74,	// (0x00086bd9) calc_display_pane_t1

0x1b86,	// (0x00086beb) calc_display_pane_t2

0xb367,	// (0x000903cc) calc_display_pane_t3

0x0002,

0xf154,	// (0x000941b9) calc_display_pane_t

0x1b98,	// (0x00086bfd) cell_calc_pane_ParamLimits

0x1b98,	// (0x00086bfd) cell_calc_pane

0x1bcd,	// (0x00086c32) bg_calc_paper_pane_g1

0x1bd9,	// (0x00086c3e) bg_calc_paper_pane_g2

0x1be5,	// (0x00086c4a) bg_calc_paper_pane_g3

0x1bf1,	// (0x00086c56) bg_calc_paper_pane_g4

0x1bfd,	// (0x00086c62) bg_calc_paper_pane_g5

0x1c09,	// (0x00086c6e) bg_calc_paper_pane_g6

0x1c18,	// (0x00086c7d) bg_calc_paper_pane_g7

0x1c27,	// (0x00086c8c) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000941c0) bg_calc_paper_pane_g

0x1c3a,	// (0x00086c9f) calc_bg_paper_pane_g9

0x1c4d,	// (0x00086cb2) list_calc_item_pane_ParamLimits

0x1c4d,	// (0x00086cb2) list_calc_item_pane

0x1c62,	// (0x00086cc7) list_calc_item_pane_g1

0xb379,	// (0x000903de) list_calc_item_pane_t1_ParamLimits

0xb379,	// (0x000903de) list_calc_item_pane_t1

0x1c6f,	// (0x00086cd4) list_calc_item_pane_t2_ParamLimits

0x1c6f,	// (0x00086cd4) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000941d1) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000941d1) list_calc_item_pane_t

0x1c89,	// (0x00086cee) cell_calc_pane_g1

0x1cab,	// (0x00086d10) grid_highlight_pane_cp02

0x1ccd,	// (0x00086d32) bg_calc_display_pane_g1

0x1cd6,	// (0x00086d3b) bg_calc_display_pane_g2

0x1ce0,	// (0x00086d45) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000941db) bg_calc_display_pane_g

0x1ce9,	// (0x00086d4e) cell_qdial_pane_ParamLimits

0x1ce9,	// (0x00086d4e) cell_qdial_pane

0x1cfd,	// (0x00086d62) cell_qdial_pane_g1_ParamLimits

0x1cfd,	// (0x00086d62) cell_qdial_pane_g1

0x1d13,	// (0x00086d78) cell_qdial_pane_g2_ParamLimits

0x1d13,	// (0x00086d78) cell_qdial_pane_g2

0x1d24,	// (0x00086d89) cell_qdial_pane_g3_ParamLimits

0x1d24,	// (0x00086d89) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000941e2) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000941e2) cell_qdial_pane_g

0x1d46,	// (0x00086dab) cell_qdial_pane_t1_ParamLimits

0x1d46,	// (0x00086dab) cell_qdial_pane_t1

0x1d5e,	// (0x00086dc3) cell_qdial_pane_t2_ParamLimits

0x1d5e,	// (0x00086dc3) cell_qdial_pane_t2

0x1d71,	// (0x00086dd6) cell_qdial_pane_t3_ParamLimits

0x1d71,	// (0x00086dd6) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000941eb) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000941eb) cell_qdial_pane_t

0x15a1,	// (0x00086606) grid_highlight_pane_cp04

0x1d84,	// (0x00086de9) thumbnail_qdial_pane_ParamLimits

0x1d84,	// (0x00086de9) thumbnail_qdial_pane

0x1de0,	// (0x00086e45) list_help_pane

0x1de9,	// (0x00086e4e) scroll_pane_cp02

0x1df2,	// (0x00086e57) help_list_pane_t1_ParamLimits

0x1df2,	// (0x00086e57) help_list_pane_t1

0xb38b,	// (0x000903f0) bg_notes_pane_g2

0xb393,	// (0x000903f8) bg_notes_pane_g3

0xb39b,	// (0x00090400) notes_bg_pane_g1

0xb3a3,	// (0x00090408) notes_bg_pane_g4

0xb3ab,	// (0x00090410) notes_bg_pane_g5

0xb3b3,	// (0x00090418) notes_bg_pane_g6

0xb3bb,	// (0x00090420) notes_bg_pane_g7

0xb3c3,	// (0x00090428) notes_bg_pane_g8

0xb3cb,	// (0x00090430) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x00094209) notes_bg_pane_g

0x1e0f,	// (0x00086e74) list_notes_text_pane_ParamLimits

0x1e0f,	// (0x00086e74) list_notes_text_pane

0x1e24,	// (0x00086e89) list_notes_text_pane_g1

0x0215,	// (0x0008527a) list_notes_text_pane_t1

0x1e3e,	// (0x00086ea3) listscroll_cale_week_pane

0x1e73,	// (0x00086ed8) bg_cale_heading_pane

0x1e8b,	// (0x00086ef0) bg_cale_pane_cp01

0x1ea9,	// (0x00086f0e) cale_week_corner_pane

0x1ec8,	// (0x00086f2d) cale_week_day_heading_pane

0x1ee5,	// (0x00086f4a) cale_week_scroll_pane_g1

0x1ef8,	// (0x00086f5d) cale_week_scroll_pane_g2

0x1f10,	// (0x00086f75) cale_week_scroll_pane_g3

0x1f28,	// (0x00086f8d) cale_week_scroll_pane_g4

0x1f40,	// (0x00086fa5) cale_week_scroll_pane_g5

0x1f60,	// (0x00086fc5) cale_week_scroll_pane_g6

0x1f80,	// (0x00086fe5) cale_week_scroll_pane_g7

0x1fa0,	// (0x00087005) cale_week_scroll_pane_g8

0x1fc4,	// (0x00087029) cale_week_scroll_pane_g9

0x1fdc,	// (0x00087041) cale_week_scroll_pane_g10

0x1ff4,	// (0x00087059) cale_week_scroll_pane_g11

0x200c,	// (0x00087071) cale_week_scroll_pane_g12

0x2024,	// (0x00087089) cale_week_scroll_pane_g13

0x2024,	// (0x00087089) cale_week_scroll_pane_g14

0x2024,	// (0x00087089) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x00094218) cale_week_scroll_pane_g

0x203c,	// (0x000870a1) cale_week_time_pane

0x2060,	// (0x000870c5) grid_cale_week_pane

0x2098,	// (0x000870fd) scroll_pane_cp08

0x20b5,	// (0x0008711a) cell_cale_week_pane_ParamLimits

0x20b5,	// (0x0008711a) cell_cale_week_pane

0x2143,	// (0x000871a8) cale_week_day_heading_pane_t1

0x2188,	// (0x000871ed) cale_week_day_heading_pane_t2

0x21d2,	// (0x00087237) cale_week_day_heading_pane_t3

0x221c,	// (0x00087281) cale_week_day_heading_pane_t4

0x2266,	// (0x000872cb) cale_week_day_heading_pane_t5

0x22b8,	// (0x0008731d) cale_week_day_heading_pane_t6

0x230a,	// (0x0008736f) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x00094237) cale_week_day_heading_pane_t

0x234f,	// (0x000873b4) bg_cale_side_pane

0x235d,	// (0x000873c2) cale_week_time_pane_t1

0x2377,	// (0x000873dc) cale_week_time_pane_t2

0x2391,	// (0x000873f6) cale_week_time_pane_t3

0x23ab,	// (0x00087410) cale_week_time_pane_t4

0x23c5,	// (0x0008742a) cale_week_time_pane_t5

0x23df,	// (0x00087444) cale_week_time_pane_t6

0x23f9,	// (0x0008745e) cale_week_time_pane_t7

0x2413,	// (0x00087478) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x00094246) cale_week_time_pane_t

0x2433,	// (0x00087498) cell_cale_week_pane_g2

0x2452,	// (0x000874b7) cell_cale_week_pane_g3_ParamLimits

0x2452,	// (0x000874b7) cell_cale_week_pane_g3

0x246a,	// (0x000874cf) grid_highlight_pane_cp07

0x2472,	// (0x000874d7) listscroll_gms_pane

0x247c,	// (0x000874e1) grid_gms_pane

0x2485,	// (0x000874ea) listscroll_gms_pane_g1

0x248d,	// (0x000874f2) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x00094257) listscroll_gms_pane_g

0x2495,	// (0x000874fa) scroll_pane_cp010

0x24a0,	// (0x00087505) cell_gms_pane_ParamLimits

0x24a0,	// (0x00087505) cell_gms_pane

0x24b3,	// (0x00087518) cell_gms_pane_g1

0x24bb,	// (0x00087520) cell_gms_pane_g2

0x24c3,	// (0x00087528) cell_gms_pane_g3

0x24cc,	// (0x00087531) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0009425c) cell_gms_pane_g

0x24d5,	// (0x0008753a) grid_highlight_pane_cp09

0x5900,	// (0x0008a965) phob_pre_status_pane_g1

0x5908,	// (0x0008a96d) phob_pre_status_pane_g2

0x5910,	// (0x0008a975) phob_pre_status_pane_g3

0x5918,	// (0x0008a97d) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0009464b) phob_pre_status_pane_g

0x5928,	// (0x0008a98d) phob_pre_status_pane_t1

0x5936,	// (0x0008a99b) phob_pre_status_pane_t2

0x5946,	// (0x0008a9ab) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x00094656) phob_pre_status_pane_t

0x15a1,	// (0x00086606) bg_list_pane_cp05

0x24e5,	// (0x0008754a) grid_vorec_pane

0x24ed,	// (0x00087552) vorec_t1

0x24fb,	// (0x00087560) vorec_t2

0x2509,	// (0x0008756e) vorec_t3

0x2517,	// (0x0008757c) vorec_t4

0xb3d3,	// (0x00090438) vorec_t5

0x2525,	// (0x0008758a) vorec_t6

0x0006,

0xf200,	// (0x00094265) vorec_t

0x2541,	// (0x000875a6) wait_bar_pane_cp01

0x2549,	// (0x000875ae) cell_vorec_pane_ParamLimits

0x2549,	// (0x000875ae) cell_vorec_pane

0xb3e1,	// (0x00090446) cell_vorec_pane_g1

0x15a1,	// (0x00086606) grid_highlight_pane_cp05

0x2571,	// (0x000875d6) cams_zoom_pane

0x2580,	// (0x000875e5) image_vga_pane

0x259a,	// (0x000875ff) main_camera_pane_g1

0x25ac,	// (0x00087611) main_camera_pane_g2

0x25bc,	// (0x00087621) main_camera_pane_g3

0x25cc,	// (0x00087631) main_camera_pane_g4

0x25dc,	// (0x00087641) main_camera_pane_g5

0x25ec,	// (0x00087651) main_camera_pane_g6

0x25fe,	// (0x00087663) main_camera_pane_g7

0x0007,

0xf20f,	// (0x00094274) main_camera_pane_g

0x261a,	// (0x0008767f) main_camera_pane_t1

0x2630,	// (0x00087695) main_camera_pane_t2

0x0001,

0xf220,	// (0x00094285) main_camera_pane_t

0x266a,	// (0x000876cf) cams_zoom_pane_cp_ParamLimits

0x266a,	// (0x000876cf) cams_zoom_pane_cp

0x2692,	// (0x000876f7) image_cif_pane_ParamLimits

0x2692,	// (0x000876f7) image_cif_pane

0x26c8,	// (0x0008772d) image_subqcif_pane

0x26d0,	// (0x00087735) main_video_pane_g1_ParamLimits

0x26d0,	// (0x00087735) main_video_pane_g1

0x26f4,	// (0x00087759) main_video_pane_g2_ParamLimits

0x26f4,	// (0x00087759) main_video_pane_g2

0x2728,	// (0x0008778d) main_video_pane_g3_ParamLimits

0x2728,	// (0x0008778d) main_video_pane_g3

0x2756,	// (0x000877bb) main_video_pane_g4_ParamLimits

0x2756,	// (0x000877bb) main_video_pane_g4

0x2784,	// (0x000877e9) main_video_pane_g5_ParamLimits

0x2784,	// (0x000877e9) main_video_pane_g5

0x279c,	// (0x00087801) main_video_pane_g6_ParamLimits

0x279c,	// (0x00087801) main_video_pane_g6

0x0006,

0xf225,	// (0x0009428a) main_video_pane_g_ParamLimits

0xf225,	// (0x0009428a) main_video_pane_g

0x27c7,	// (0x0008782c) main_video_pane_t1_ParamLimits

0x27c7,	// (0x0008782c) main_video_pane_t1

0x2810,	// (0x00087875) cams_zoom_pane_g1

0x2819,	// (0x0008787e) cams_zoom_pane_g2

0x2822,	// (0x00087887) cams_zoom_pane_g3

0x282b,	// (0x00087890) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x00094299) cams_zoom_pane_g

0x2848,	// (0x000878ad) grid_cams_pane

0x2862,	// (0x000878c7) linegrid_cams_pane

0x2876,	// (0x000878db) cell_cams_pane_ParamLimits

0x2876,	// (0x000878db) cell_cams_pane

0x2896,	// (0x000878fb) cams_burst_image_pane

0x289e,	// (0x00087903) cell_cams_pane_g1

0x15a1,	// (0x00086606) grid_highlight_pane_cp03

0x1c89,	// (0x00086cee) mp_bg_pane_g1

0x15a1,	// (0x00086606) bg_list_pane_cp03

0xc0dc,	// (0x00091141) bg_mp_pane

0xc0e4,	// (0x00091149) grid_mp_pane

0xc0ec,	// (0x00091151) media_player_g1

0xc0f4,	// (0x00091159) media_player_t1

0xc102,	// (0x00091167) media_player_t2

0xc110,	// (0x00091175) media_player_t3

0xc11e,	// (0x00091183) media_player_t4

0xc12c,	// (0x00091191) media_player_t5

0xc13a,	// (0x0009119f) media_player_t6

0xc148,	// (0x000911ad) media_player_t7

0x0006,

0xf5d0,	// (0x00094635) media_player_t

0xc156,	// (0x000911bb) wait_bar_pane_cp02

0xf5b5,	// (0x0009461a) main_usb_pane_t

0x58f7,	// (0x0008a95c) cell_mp_pane

0x1c89,	// (0x00086cee) cell_mp_pane_g1

0x15a1,	// (0x00086606) grid_highlight_pane_cp06

0x28be,	// (0x00087923) grid_skin_colour_pane

0x28c6,	// (0x0008792b) list_highlight_pane_cp03

0x28ce,	// (0x00087933) skin_g1

0x28d6,	// (0x0008793b) skin_t1

0x28e5,	// (0x0008794a) skin_t2

0x0001,

0xf269,	// (0x000942ce) skin_t

0x28f3,	// (0x00087958) cell_skin_colour_pane_ParamLimits

0x28f3,	// (0x00087958) cell_skin_colour_pane

0x2913,	// (0x00087978) cell_skin_colour_pane_g1

0x297e,	// (0x000879e3) call_video_g1_ParamLimits

0x297e,	// (0x000879e3) call_video_g1

0x299a,	// (0x000879ff) call_video_g2_ParamLimits

0x299a,	// (0x000879ff) call_video_g2

0x0001,

0xf26e,	// (0x000942d3) call_video_g_ParamLimits

0xf26e,	// (0x000942d3) call_video_g

0x29ec,	// (0x00087a51) call_video_uplink_pane_cp1_ParamLimits

0x29ec,	// (0x00087a51) call_video_uplink_pane_cp1

0x2a51,	// (0x00087ab6) call_video_uplink_pane_cp2

0x2a93,	// (0x00087af8) video_down_crop_pane_ParamLimits

0x2a93,	// (0x00087af8) video_down_crop_pane

0x2b8a,	// (0x00087bef) video_down_pane_ParamLimits

0x2b8a,	// (0x00087bef) video_down_pane

0x2c81,	// (0x00087ce6) video_down_subqcif_pane_ParamLimits

0x2c81,	// (0x00087ce6) video_down_subqcif_pane

0x2c99,	// (0x00087cfe) video_down_subqcif_pane_cp_ParamLimits

0x2c99,	// (0x00087cfe) video_down_subqcif_pane_cp

0x2cd6,	// (0x00087d3b) im_reading_pane_ParamLimits

0x2cd6,	// (0x00087d3b) im_reading_pane

0x2ce8,	// (0x00087d4d) im_writing_pane_ParamLimits

0x2ce8,	// (0x00087d4d) im_writing_pane

0x2d06,	// (0x00087d6b) im_reading_pane_t1

0x2d3f,	// (0x00087da4) list_im_pane

0x2d50,	// (0x00087db5) scroll_pane_cp07

0x2d69,	// (0x00087dce) im_writing_pane_t1_ParamLimits

0x2d69,	// (0x00087dce) im_writing_pane_t1

0x2d7e,	// (0x00087de3) im_writing_pane_t2_ParamLimits

0x2d7e,	// (0x00087de3) im_writing_pane_t2

0x0001,

0xf278,	// (0x000942dd) im_writing_pane_t_ParamLimits

0xf278,	// (0x000942dd) im_writing_pane_t

0x15a1,	// (0x00086606) input_focus_pane_cp04

0x15a1,	// (0x00086606) input_focus_pane_cp05

0x2d9b,	// (0x00087e00) list_im_single_pane_ParamLimits

0x2d9b,	// (0x00087e00) list_im_single_pane

0x2daf,	// (0x00087e14) list_single_im_pane_t1

0x58b7,	// (0x0008a91c) blid_accuracy_pane

0x58bf,	// (0x0008a924) blid_compass_pane

0x58c9,	// (0x0008a92e) main_location_t1

0x58d9,	// (0x0008a93e) main_location_t2

0x58e9,	// (0x0008a94e) main_location_t3

0x0002,

0xf5df,	// (0x00094644) main_location_t

0x15a1,	// (0x00086606) aid_levels_location

0x1c89,	// (0x00086cee) blid_accuracy_pane_g1

0x1c89,	// (0x00086cee) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0009433f) blid_accuracy_pane_g

0x2de9,	// (0x00087e4e) wml_content_pane

0x2e27,	// (0x00087e8c) wml_button_pane_ParamLimits

0x2e27,	// (0x00087e8c) wml_button_pane

0x2e3b,	// (0x00087ea0) wml_list_single_large_pane_ParamLimits

0x2e3b,	// (0x00087ea0) wml_list_single_large_pane

0x2e50,	// (0x00087eb5) wml_list_single_medium_pane_ParamLimits

0x2e50,	// (0x00087eb5) wml_list_single_medium_pane

0x2e66,	// (0x00087ecb) wml_list_single_small_pane_ParamLimits

0x2e66,	// (0x00087ecb) wml_list_single_small_pane

0x2e7e,	// (0x00087ee3) wml_selection_box_pane_ParamLimits

0x2e7e,	// (0x00087ee3) wml_selection_box_pane

0x2e91,	// (0x00087ef6) wml_list_single_pane_t1

0x2ea0,	// (0x00087f05) wml_list_single_medium_pane_t1

0x2eaf,	// (0x00087f14) wml_list_single_large_pane_t1

0x2ebe,	// (0x00087f23) input_focus_pane_cp02_ParamLimits

0x2ebe,	// (0x00087f23) input_focus_pane_cp02

0x2ed1,	// (0x00087f36) wml_selection_box_pane_g1

0x2eda,	// (0x00087f3f) wml_selection_box_pane_t1_ParamLimits

0x2eda,	// (0x00087f3f) wml_selection_box_pane_t1

0x17fc,	// (0x00086861) bg_wml_button_pane_ParamLimits

0x17fc,	// (0x00086861) bg_wml_button_pane

0x2ef2,	// (0x00087f57) wml_button_pane_g1

0x2efa,	// (0x00087f5f) wml_button_pane_t1

0x2ef2,	// (0x00087f57) wml_button_bg_pane_g1

0x2f0a,	// (0x00087f6f) wml_button_bg_pane_g2

0x2f12,	// (0x00087f77) wml_button_bg_pane_g3

0x2f1a,	// (0x00087f7f) wml_button_bg_pane_g4

0x2f22,	// (0x00087f87) wml_button_bg_pane_g5

0x2f2a,	// (0x00087f8f) wml_button_bg_pane_g6

0x2f32,	// (0x00087f97) wml_button_bg_pane_g7

0x2f3a,	// (0x00087f9f) wml_button_bg_pane_g8

0x2f42,	// (0x00087fa7) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000942e2) wml_button_bg_pane_g

0x2f4a,	// (0x00087faf) bg_list_pane_cp02

0x2f52,	// (0x00087fb7) mce_header_pane_ParamLimits

0x2f52,	// (0x00087fb7) mce_header_pane

0x2f68,	// (0x00087fcd) mce_icon_pane

0x2f68,	// (0x00087fcd) mce_image_pane

0x2f71,	// (0x00087fd6) mce_text_pane_ParamLimits

0x2f71,	// (0x00087fd6) mce_text_pane

0x2f84,	// (0x00087fe9) scroll_pane_cp03

0x2e1f,	// (0x00087e84) scroll_pane_cp04

0x2f8e,	// (0x00087ff3) scroll_pane_cp05_ParamLimits

0x2f8e,	// (0x00087ff3) scroll_pane_cp05

0x2f9a,	// (0x00087fff) mce_header_field_pane_ParamLimits

0x2f9a,	// (0x00087fff) mce_header_field_pane

0x2fb1,	// (0x00088016) mce_header_field_pane_2_ParamLimits

0x2fb1,	// (0x00088016) mce_header_field_pane_2

0x2fc7,	// (0x0008802c) mce_header_field_pane_3

0x2fcf,	// (0x00088034) list_single_mce_message_pane_ParamLimits

0x2fcf,	// (0x00088034) list_single_mce_message_pane

0x2fe4,	// (0x00088049) list_single_mce_smart_pane_ParamLimits

0x2fe4,	// (0x00088049) list_single_mce_smart_pane

0x3004,	// (0x00088069) input_focus_pane_cp03

0x300d,	// (0x00088072) list_header_data_pane

0x3015,	// (0x0008807a) mce_header_field_pane_t1

0x3025,	// (0x0008808a) list_single_mce_header_pane_ParamLimits

0x3025,	// (0x0008808a) list_single_mce_header_pane

0x3039,	// (0x0008809e) list_single_mce_header_pane_t1

0x3048,	// (0x000880ad) list_single_mce_message_pane_g1

0x3050,	// (0x000880b5) list_single_mce_message_pane_t1

0x3084,	// (0x000880e9) bg_cale_heading_pane_cp01_ParamLimits

0x3084,	// (0x000880e9) bg_cale_heading_pane_cp01

0x30b3,	// (0x00088118) bg_cale_pane_cp02_ParamLimits

0x30b3,	// (0x00088118) bg_cale_pane_cp02

0x30e0,	// (0x00088145) cale_month_corner_pane

0x30ff,	// (0x00088164) cale_month_day_heading_pane_ParamLimits

0x30ff,	// (0x00088164) cale_month_day_heading_pane

0x3146,	// (0x000881ab) cale_month_pane_g1_ParamLimits

0x3146,	// (0x000881ab) cale_month_pane_g1

0x316a,	// (0x000881cf) cale_month_pane_g2_ParamLimits

0x316a,	// (0x000881cf) cale_month_pane_g2

0x319a,	// (0x000881ff) cale_month_pane_g3_ParamLimits

0x319a,	// (0x000881ff) cale_month_pane_g3

0x31d6,	// (0x0008823b) cale_month_pane_g4_ParamLimits

0x31d6,	// (0x0008823b) cale_month_pane_g4

0x3212,	// (0x00088277) cale_month_pane_g5_ParamLimits

0x3212,	// (0x00088277) cale_month_pane_g5

0x325a,	// (0x000882bf) cale_month_pane_g6_ParamLimits

0x325a,	// (0x000882bf) cale_month_pane_g6

0x32a6,	// (0x0008830b) cale_month_pane_g7_ParamLimits

0x32a6,	// (0x0008830b) cale_month_pane_g7

0x32fa,	// (0x0008835f) cale_month_pane_g8_ParamLimits

0x32fa,	// (0x0008835f) cale_month_pane_g8

0x334e,	// (0x000883b3) cale_month_pane_g9_ParamLimits

0x334e,	// (0x000883b3) cale_month_pane_g9

0x33a0,	// (0x00088405) cale_month_pane_g10_ParamLimits

0x33a0,	// (0x00088405) cale_month_pane_g10

0x33f2,	// (0x00088457) cale_month_pane_g11_ParamLimits

0x33f2,	// (0x00088457) cale_month_pane_g11

0x3444,	// (0x000884a9) cale_month_pane_g12_ParamLimits

0x3444,	// (0x000884a9) cale_month_pane_g12

0x3496,	// (0x000884fb) cale_month_pane_g13_ParamLimits

0x3496,	// (0x000884fb) cale_month_pane_g13

0x000c,

0xf290,	// (0x000942f5) cale_month_pane_g_ParamLimits

0xf290,	// (0x000942f5) cale_month_pane_g

0x34fa,	// (0x0008855f) cale_month_week_pane

0x351e,	// (0x00088583) grid_cale_month_pane_ParamLimits

0x351e,	// (0x00088583) grid_cale_month_pane

0x355c,	// (0x000885c1) cale_month_day_heading_pane_t1

0x35e2,	// (0x00088647) cale_month_day_heading_pane_t2

0x3673,	// (0x000886d8) cale_month_day_heading_pane_t3

0x3704,	// (0x00088769) cale_month_day_heading_pane_t4

0x3799,	// (0x000887fe) cale_month_day_heading_pane_t5

0x383a,	// (0x0008889f) cale_month_day_heading_pane_t6

0x38db,	// (0x00088940) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x00094310) cale_month_day_heading_pane_t

0x234f,	// (0x000873b4) bg_cale_side_pane_cp01

0x3984,	// (0x000889e9) cale_month_week_pane_t1

0x399d,	// (0x00088a02) cale_month_week_pane_t2

0x39b6,	// (0x00088a1b) cale_month_week_pane_t3

0x39cf,	// (0x00088a34) cale_month_week_pane_t4

0x39e8,	// (0x00088a4d) cale_month_week_pane_t5

0x3a01,	// (0x00088a66) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0009431f) cale_month_week_pane_t

0x3a1a,	// (0x00088a7f) cell_cale_month_pane_ParamLimits

0x3a1a,	// (0x00088a7f) cell_cale_month_pane

0xb3eb,	// (0x00090450) cell_cale_month_pane_g1

0x3b44,	// (0x00088ba9) cell_cale_month_pane_t1_ParamLimits

0x3b44,	// (0x00088ba9) cell_cale_month_pane_t1

0x246a,	// (0x000874cf) grid_highlight_pane_cp08

0x1c89,	// (0x00086cee) main_smil_g1

0x3b64,	// (0x00088bc9) smil_status_pane

0x3b6d,	// (0x00088bd2) smil_text_pane

0xbffc,	// (0x00091061) bg_popup_call3_rect_pane_g8

0xc004,	// (0x00091069) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000945d8) bg_popup_call3_rect_pane_g

0xc29f,	// (0x00091304) smil_status_volume_pane_g1

0x3b81,	// (0x00088be6) smil_status_pane_t1

0xc2d2,	// (0x00091337) volume_smil_pane

0x3b98,	// (0x00088bfd) list_smil_text_pane

0x3ba2,	// (0x00088c07) scroll_pane_cp011

0x3bad,	// (0x00088c12) smil_text_list_pane_t1_ParamLimits

0x3bad,	// (0x00088c12) smil_text_list_pane_t1

0xb3f7,	// (0x0009045c) aid_volume_smil_ParamLimits

0xb3f7,	// (0x0009045c) aid_volume_smil

0x1c89,	// (0x00086cee) smil_volume_pane_g1

0x1c89,	// (0x00086cee) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0009433f) smil_volume_pane_g

0x1e3e,	// (0x00086ea3) listscroll_cale_day_pane

0x3be9,	// (0x00088c4e) bg_cale_pane

0x3c01,	// (0x00088c66) list_cale_pane

0x3c24,	// (0x00088c89) scroll_pane_cp09

0x3c35,	// (0x00088c9a) cale_bg_pane_g1

0x3c3d,	// (0x00088ca2) cale_bg_pane_g2

0x3c45,	// (0x00088caa) cale_bg_pane_g3

0x3c4d,	// (0x00088cb2) cale_bg_pane_g4

0x3c55,	// (0x00088cba) cale_bg_pane_g5

0x3c5d,	// (0x00088cc2) cale_bg_pane_g6

0x3c65,	// (0x00088cca) cale_bg_pane_g7

0x3c6d,	// (0x00088cd2) cale_bg_pane_g8

0x3c75,	// (0x00088cda) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x00094344) cale_bg_pane_g

0x3c85,	// (0x00088cea) list_cale_time_pane_ParamLimits

0x3c85,	// (0x00088cea) list_cale_time_pane

0x3c9a,	// (0x00088cff) list_cale_time_pane_g1_ParamLimits

0x3c9a,	// (0x00088cff) list_cale_time_pane_g1

0x3ca6,	// (0x00088d0b) list_cale_time_pane_g2_ParamLimits

0x3ca6,	// (0x00088d0b) list_cale_time_pane_g2

0x3cb3,	// (0x00088d18) list_cale_time_pane_g3_ParamLimits

0x3cb3,	// (0x00088d18) list_cale_time_pane_g3

0x3cc1,	// (0x00088d26) list_cale_time_pane_g4_ParamLimits

0x3cc1,	// (0x00088d26) list_cale_time_pane_g4

0x3ccf,	// (0x00088d34) list_cale_time_pane_g5_ParamLimits

0x3ccf,	// (0x00088d34) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x00094357) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x00094357) list_cale_time_pane_g

0x3cea,	// (0x00088d4f) list_cale_time_pane_t1_ParamLimits

0x3cea,	// (0x00088d4f) list_cale_time_pane_t1

0x3d12,	// (0x00088d77) list_cale_time_pane_t2_ParamLimits

0x3d12,	// (0x00088d77) list_cale_time_pane_t2

0x43dc,	// (0x00089441) aid_blid_cardinal_pane

0x4426,	// (0x0008948b) compass_pane_t4

0x3d3a,	// (0x00088d9f) list_cale_time_pane_t4_ParamLimits

0x3d3a,	// (0x00088d9f) list_cale_time_pane_t4

0x4434,	// (0x00089499) compass_pane_t5

0x4442,	// (0x000894a7) compass_pane_t6

0x4450,	// (0x000894b5) compass_pane_t7

0x44e6,	// (0x0008954b) navi_pane_cc_t1

0x470d,	// (0x00089772) aid_phob_thumbnail_center_pane

0x4d4b,	// (0x00089db0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x00094364) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x00094364) list_cale_time_pane_t

0xec45,	// (0x00093caa) bg_popup_window_pane_cp02_ParamLimits

0xec45,	// (0x00093caa) bg_popup_window_pane_cp02

0x3d62,	// (0x00088dc7) heading_pane_cp01_ParamLimits

0x3d62,	// (0x00088dc7) heading_pane_cp01

0x3d6e,	// (0x00088dd3) loc_req_pane_ParamLimits

0x3d6e,	// (0x00088dd3) loc_req_pane

0x3d7e,	// (0x00088de3) loc_type_pane_ParamLimits

0x3d7e,	// (0x00088de3) loc_type_pane

0x3d90,	// (0x00088df5) loc_type_pane_t1_ParamLimits

0x3d90,	// (0x00088df5) loc_type_pane_t1

0x3da2,	// (0x00088e07) loc_type_pane_t2_ParamLimits

0x3da2,	// (0x00088e07) loc_type_pane_t2

0x3db4,	// (0x00088e19) loc_type_pane_t3_ParamLimits

0x3db4,	// (0x00088e19) loc_type_pane_t3

0x0002,

0xf306,	// (0x0009436b) loc_type_pane_t_ParamLimits

0xf306,	// (0x0009436b) loc_type_pane_t

0x3dc6,	// (0x00088e2b) list_loc_req_pane

0x3dd0,	// (0x00088e35) scroll_pane_cp012

0x3ddb,	// (0x00088e40) list_single_loc_request_popup_menu_pane_ParamLimits

0x3ddb,	// (0x00088e40) list_single_loc_request_popup_menu_pane

0x3de8,	// (0x00088e4d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3de8,	// (0x00088e4d) list_single_loc_request_popup_menu_pane_g1

0x3df4,	// (0x00088e59) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3df4,	// (0x00088e59) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x00094372) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x00094372) list_single_loc_request_popup_menu_pane_g

0x3e00,	// (0x00088e65) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3e00,	// (0x00088e65) list_single_loc_request_popup_menu_pane_t1

0x17fc,	// (0x00086861) bg_popup_window_pane_cp03_ParamLimits

0x17fc,	// (0x00086861) bg_popup_window_pane_cp03

0x3e16,	// (0x00088e7b) heading_loc_req_pane_ParamLimits

0x3e16,	// (0x00088e7b) heading_loc_req_pane

0x3e22,	// (0x00088e87) popup_dyc_status_message_window_g1_ParamLimits

0x3e22,	// (0x00088e87) popup_dyc_status_message_window_g1

0x3e36,	// (0x00088e9b) popup_dyc_status_message_window_t1_ParamLimits

0x3e36,	// (0x00088e9b) popup_dyc_status_message_window_t1

0x3e4b,	// (0x00088eb0) popup_dyc_status_message_window_t2_ParamLimits

0x3e4b,	// (0x00088eb0) popup_dyc_status_message_window_t2

0x3e60,	// (0x00088ec5) popup_dyc_status_message_window_t3_ParamLimits

0x3e60,	// (0x00088ec5) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x00094377) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x00094377) popup_dyc_status_message_window_t

0x15a1,	// (0x00086606) bg_heading_pane_cp01

0x3e7c,	// (0x00088ee1) heading_loc_req_pane_g1

0x3e84,	// (0x00088ee9) heading_loc_req_pane_g2

0x3e8c,	// (0x00088ef1) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0009437e) heading_loc_req_pane_g

0x3e94,	// (0x00088ef9) heading_loc_req_pane_t1

0x3eaf,	// (0x00088f14) bg_popup_sub_pane_cp01_ParamLimits

0x3eaf,	// (0x00088f14) bg_popup_sub_pane_cp01

0x3ebd,	// (0x00088f22) popup_cale_events_window_g1_ParamLimits

0x3ebd,	// (0x00088f22) popup_cale_events_window_g1

0x3edd,	// (0x00088f42) popup_cale_events_window_g2_ParamLimits

0x3edd,	// (0x00088f42) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000943b2) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000943b2) popup_cale_events_window_g

0x3efd,	// (0x00088f62) popup_cale_events_window_t1_ParamLimits

0x3efd,	// (0x00088f62) popup_cale_events_window_t1

0x3f0f,	// (0x00088f74) popup_cale_events_window_t2_ParamLimits

0x3f0f,	// (0x00088f74) popup_cale_events_window_t2

0x3f4d,	// (0x00088fb2) popup_cale_events_window_t3_ParamLimits

0x3f4d,	// (0x00088fb2) popup_cale_events_window_t3

0x3f87,	// (0x00088fec) popup_cale_events_window_t4_ParamLimits

0x3f87,	// (0x00088fec) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000943b7) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000943b7) popup_cale_events_window_t

0x3fbd,	// (0x00089022) call_type_pane

0x3fcd,	// (0x00089032) popup_call_status_window_g1

0x3fe1,	// (0x00089046) popup_call_status_window_g2

0x3ff5,	// (0x0008905a) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000943c0) popup_call_status_window_g

0x4004,	// (0x00089069) call_type_pane_g1

0x400d,	// (0x00089072) call_type_pane_g2

0x0001,

0xf362,	// (0x000943c7) call_type_pane_g

0x15a1,	// (0x00086606) bg_popup_sub_pane_cp02

0x4016,	// (0x0008907b) listscroll_popup_wml_pane

0x401e,	// (0x00089083) list_wml_pane

0x4028,	// (0x0008908d) scroll_pane_cp013

0x4033,	// (0x00089098) list_single_graphic_popup_wml_pane_ParamLimits

0x4033,	// (0x00089098) list_single_graphic_popup_wml_pane

0x1c89,	// (0x00086cee) list_single_graphic_popup_wml_pane_g1

0x4047,	// (0x000890ac) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000943cc) list_single_graphic_popup_wml_pane_g

0x404f,	// (0x000890b4) list_single_graphic_popup_wml_pane_t1

0x4065,	// (0x000890ca) aid_call_pane

0x17f4,	// (0x00086859) popup_clock_analogue_window_g1

0x17f4,	// (0x00086859) popup_clock_analogue_window_g2

0xb425,	// (0x0009048a) popup_clock_analogue_window_g3

0xb425,	// (0x0009048a) popup_clock_analogue_window_g4

0x1c89,	// (0x00086cee) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000943d1) popup_clock_analogue_window_g

0xb42d,	// (0x00090492) popup_clock_analogue_window_t1

0xb43b,	// (0x000904a0) clock_digital_number_pane_ParamLimits

0xb43b,	// (0x000904a0) clock_digital_number_pane

0xb447,	// (0x000904ac) clock_digital_number_pane_cp02_ParamLimits

0xb447,	// (0x000904ac) clock_digital_number_pane_cp02

0xb453,	// (0x000904b8) clock_digital_number_pane_cp03_ParamLimits

0xb453,	// (0x000904b8) clock_digital_number_pane_cp03

0xb45f,	// (0x000904c4) clock_digital_number_pane_cp04_ParamLimits

0xb45f,	// (0x000904c4) clock_digital_number_pane_cp04

0xb46f,	// (0x000904d4) clock_digital_separator_pane_ParamLimits

0xb46f,	// (0x000904d4) clock_digital_separator_pane

0xb47b,	// (0x000904e0) popup_clock_digital_window_t1

0x1c89,	// (0x00086cee) clock_digital_number_pane_g1

0x1c89,	// (0x00086cee) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0009433f) clock_digital_number_pane_g

0x1c89,	// (0x00086cee) clock_digital_separator_pane_g1

0x1c89,	// (0x00086cee) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0009433f) clock_digital_separator_pane_g

0x15a1,	// (0x00086606) bg_popup_window_pane_cp04

0x406d,	// (0x000890d2) heading_pane_cp03

0x4075,	// (0x000890da) listscroll_popup_gms_pane

0x407d,	// (0x000890e2) grid_large_graphic_popup_pane

0x4087,	// (0x000890ec) listscroll_popup_gms_pane_g1

0x408f,	// (0x000890f4) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000943dc) listscroll_popup_gms_pane_g

0x2e1f,	// (0x00087e84) scroll_pane_cp014

0x4097,	// (0x000890fc) cell_large_graphic_popup_pane_ParamLimits

0x4097,	// (0x000890fc) cell_large_graphic_popup_pane

0x40af,	// (0x00089114) cell_large_graphic_popup_pane_g1_ParamLimits

0x40af,	// (0x00089114) cell_large_graphic_popup_pane_g1

0x40bb,	// (0x00089120) cell_large_graphic_popup_pane_g2_ParamLimits

0x40bb,	// (0x00089120) cell_large_graphic_popup_pane_g2

0x40c7,	// (0x0008912c) cell_large_graphic_popup_pane_g3_ParamLimits

0x40c7,	// (0x0008912c) cell_large_graphic_popup_pane_g3

0x40d4,	// (0x00089139) cell_large_graphic_popup_pane_g4_ParamLimits

0x40d4,	// (0x00089139) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000943e1) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000943e1) cell_large_graphic_popup_pane_g

0x40e4,	// (0x00089149) grid_highlight_pane_cp010

0x1c89,	// (0x00086cee) bg_popup_call_pane_g1

0x40ee,	// (0x00089153) list_single_graphic_popup_conf_pane_ParamLimits

0x40ee,	// (0x00089153) list_single_graphic_popup_conf_pane

0x4101,	// (0x00089166) list_highlight_pane_cp01

0x410a,	// (0x0008916f) list_single_graphic_popup_conf_pane_g1

0x4112,	// (0x00089177) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000943ea) list_single_graphic_popup_conf_pane_g

0x411a,	// (0x0008917f) list_single_graphic_popup_conf_pane_t1

0x4128,	// (0x0008918d) linegrid_cams_pane_g1

0x4131,	// (0x00089196) linegrid_cams_pane_g2

0x24c3,	// (0x00087528) linegrid_cams_pane_g3

0x413a,	// (0x0008919f) linegrid_cams_pane_g4

0x4143,	// (0x000891a8) linegrid_cams_pane_g5

0x414c,	// (0x000891b1) linegrid_cams_pane_g6

0x24cc,	// (0x00087531) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000943ef) linegrid_cams_pane_g

0x4157,	// (0x000891bc) popup_clock_analogue_window

0x4157,	// (0x000891bc) popup_clock_digital_window

0x15a1,	// (0x00086606) popup_phob_thumbnail_window

0x1c89,	// (0x00086cee) call_video_uplink_pane_g1

0x4160,	// (0x000891c5) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000943fe) call_video_uplink_pane_g

0x4168,	// (0x000891cd) video_uplink_pane

0x4170,	// (0x000891d5) mce_image_pane_g1

0x417a,	// (0x000891df) mce_image_pane_g2

0x4184,	// (0x000891e9) mce_image_pane_g3

0x418c,	// (0x000891f1) mce_image_pane_g4

0x4194,	// (0x000891f9) mce_image_pane_g5

0x0004,

0xf39e,	// (0x00094403) mce_image_pane_g

0x419c,	// (0x00089201) control_top_pane_stacon_cp01_ParamLimits

0x419c,	// (0x00089201) control_top_pane_stacon_cp01

0x41b0,	// (0x00089215) uni_indicator_pane_stacon_cp01_ParamLimits

0x41b0,	// (0x00089215) uni_indicator_pane_stacon_cp01

0x41c1,	// (0x00089226) bg_popup_sub_pane_cp03

0x41cb,	// (0x00089230) chi_dic_find_pane

0x41d3,	// (0x00089238) listscroll_chi_dic_pane

0x41dc,	// (0x00089241) main_pane_chidic_g1

0x41ef,	// (0x00089254) chi_dic_find_pane_t1

0x41fd,	// (0x00089262) find_chidic_pane

0x4206,	// (0x0008926b) chi_dic_list_pane_ParamLimits

0x4206,	// (0x0008926b) chi_dic_list_pane

0x4217,	// (0x0008927c) scroll_pane_cp020

0x421f,	// (0x00089284) find_chidic_pane_t1

0x15a1,	// (0x00086606) input_focus_pane_cp06

0x422e,	// (0x00089293) list_chi_dic_pane_ParamLimits

0x422e,	// (0x00089293) list_chi_dic_pane

0x4240,	// (0x000892a5) list_chi_dic_pane_t1_ParamLimits

0x4240,	// (0x000892a5) list_chi_dic_pane_t1

0x15a1,	// (0x00086606) list_highlight_pane_cp020

0x4253,	// (0x000892b8) bg_cale_heading_pane_g1

0x425b,	// (0x000892c0) bg_cale_heading_pane_g2

0x4263,	// (0x000892c8) bg_cale_heading_pane_g3

0x426b,	// (0x000892d0) bg_cale_heading_pane_g4

0x4275,	// (0x000892da) bg_cale_heading_pane_g5

0x427f,	// (0x000892e4) bg_cale_heading_pane_g6

0x4287,	// (0x000892ec) bg_cale_heading_pane_g7

0x428f,	// (0x000892f4) bg_cale_heading_pane_g8

0x4299,	// (0x000892fe) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0009440e) bg_cale_heading_pane_g

0x4253,	// (0x000892b8) bg_cale_side_pane_g1

0x42a3,	// (0x00089308) bg_cale_side_pane_g2

0x42ab,	// (0x00089310) bg_cale_side_pane_g3

0x42b3,	// (0x00089318) bg_cale_side_pane_g4

0x42bb,	// (0x00089320) bg_cale_side_pane_g5

0x42c3,	// (0x00089328) bg_cale_side_pane_g6

0x42cb,	// (0x00089330) bg_cale_side_pane_g7

0x42d3,	// (0x00089338) bg_cale_side_pane_g8

0x42db,	// (0x00089340) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x00094421) bg_cale_side_pane_g

0x42e3,	// (0x00089348) popup_call_status_window_ParamLimits

0x42e3,	// (0x00089348) popup_call_status_window

0x432c,	// (0x00089391) stacon_top_pane

0x4334,	// (0x00089399) status_pane_ParamLimits

0x4334,	// (0x00089399) status_pane

0x4349,	// (0x000893ae) status_small_pane

0x4351,	// (0x000893b6) control_pane

0x15a1,	// (0x00086606) stacon_bottom_pane

0x4359,	// (0x000893be) list_single_mce_smart_pane_t1_ParamLimits

0x4359,	// (0x000893be) list_single_mce_smart_pane_t1

0x436c,	// (0x000893d1) list_single_mce_smart_pane_t2_ParamLimits

0x436c,	// (0x000893d1) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x00094434) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x00094434) list_single_mce_smart_pane_t

0x438b,	// (0x000893f0) compass_pane

0x4394,	// (0x000893f9) main_location2_pane_t1

0x43a6,	// (0x0008940b) main_location2_pane_t2

0x43b8,	// (0x0008941d) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x00094439) main_location2_pane_t

0x43fc,	// (0x00089461) compass_pane_g1_ParamLimits

0x43fc,	// (0x00089461) compass_pane_g1

0x4408,	// (0x0008946d) compass_pane_t1

0x4417,	// (0x0008947c) compass_pane_t2

0x0005,

0xf3dd,	// (0x00094442) compass_pane_t

0x445e,	// (0x000894c3) text_secondary_cp61

0x44dd,	// (0x00089542) navi_pane_cams_g5

0x4559,	// (0x000895be) navi_pane_im_t1

0x4567,	// (0x000895cc) navi_pane_mp_g1_ParamLimits

0x4567,	// (0x000895cc) navi_pane_mp_g1

0x457b,	// (0x000895e0) navi_pane_mp_g2_ParamLimits

0x457b,	// (0x000895e0) navi_pane_mp_g2

0x4587,	// (0x000895ec) navi_pane_mp_g3_ParamLimits

0x4587,	// (0x000895ec) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x00094456) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x00094456) navi_pane_mp_g

0x4593,	// (0x000895f8) navi_pane_mp_t1

0x45a1,	// (0x00089606) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0009445d) navi_pane_mp_t

0x464e,	// (0x000896b3) navi_pane_vt_g1

0x4593,	// (0x000895f8) navi_pane_vt_t1

0x4656,	// (0x000896bb) navi_slider_pane

0x4666,	// (0x000896cb) zooming_pane

0x466e,	// (0x000896d3) navi_slider_pane_g1

0xb498,	// (0x000904fd) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x00094464) navi_slider_pane_g

0x4692,	// (0x000896f7) aid_levels_zoom

0x469a,	// (0x000896ff) zooming_pane_g1

0x46a2,	// (0x00089707) zooming_pane_g2

0x46a2,	// (0x00089707) zooming_pane_g3

0x0002,

0xf40e,	// (0x00094473) zooming_pane_g

0x46aa,	// (0x0008970f) level_10_zoom

0x46b3,	// (0x00089718) level_11_zoom

0x46bc,	// (0x00089721) level_1_zoom

0x46c5,	// (0x0008972a) level_2_zoom

0x46ce,	// (0x00089733) level_3_zoom

0x46d7,	// (0x0008973c) level_4_zoom

0x46e0,	// (0x00089745) level_5_zoom

0x46e9,	// (0x0008974e) level_6_zoom

0x46f2,	// (0x00089757) level_7_zoom

0x46fb,	// (0x00089760) level_8_zoom

0x4704,	// (0x00089769) level_9_zoom

0x4715,	// (0x0008977a) popup_phob_thumbnail_window_g1

0x471d,	// (0x00089782) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0009447a) popup_phob_thumbnail_window_g

0xc15e,	// (0x000911c3) level_1_location

0xc166,	// (0x000911cb) level_2_location

0xc16e,	// (0x000911d3) level_3_location

0xc176,	// (0x000911db) level_4_location

0x4666,	// (0x000896cb) level_5_location

0x4725,	// (0x0008978a) mce_icon_pane_g1

0x472f,	// (0x00089794) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0009447f) mce_icon_pane_g

0x4737,	// (0x0008979c) main_mup_pane_g1_ParamLimits

0x4737,	// (0x0008979c) main_mup_pane_g1

0x474d,	// (0x000897b2) main_mup_pane_g2_ParamLimits

0x474d,	// (0x000897b2) main_mup_pane_g2

0x4765,	// (0x000897ca) main_mup_pane_g3_ParamLimits

0x4765,	// (0x000897ca) main_mup_pane_g3

0x477d,	// (0x000897e2) main_mup_pane_g4_ParamLimits

0x477d,	// (0x000897e2) main_mup_pane_g4

0x4795,	// (0x000897fa) main_mup_pane_g5_ParamLimits

0x4795,	// (0x000897fa) main_mup_pane_g5

0x47b1,	// (0x00089816) main_mup_pane_g6_ParamLimits

0x47b1,	// (0x00089816) main_mup_pane_g6

0x47c9,	// (0x0008982e) main_mup_pane_g7_ParamLimits

0x47c9,	// (0x0008982e) main_mup_pane_g7

0x47e1,	// (0x00089846) main_mup_pane_g8_ParamLimits

0x47e1,	// (0x00089846) main_mup_pane_g8

0x47fb,	// (0x00089860) main_mup_pane_g9_ParamLimits

0x47fb,	// (0x00089860) main_mup_pane_g9

0x4815,	// (0x0008987a) main_mup_pane_g10_ParamLimits

0x4815,	// (0x0008987a) main_mup_pane_g10

0x482f,	// (0x00089894) main_mup_pane_g11_ParamLimits

0x482f,	// (0x00089894) main_mup_pane_g11

0x4843,	// (0x000898a8) main_mup_pane_g12_ParamLimits

0x4843,	// (0x000898a8) main_mup_pane_g12

0x4859,	// (0x000898be) main_mup_pane_g13_ParamLimits

0x4859,	// (0x000898be) main_mup_pane_g13

0x000c,

0xf41f,	// (0x00094484) main_mup_pane_g_ParamLimits

0xf41f,	// (0x00094484) main_mup_pane_g

0x486d,	// (0x000898d2) main_mup_pane_t1_ParamLimits

0x486d,	// (0x000898d2) main_mup_pane_t1

0x4887,	// (0x000898ec) main_mup_pane_t2_ParamLimits

0x4887,	// (0x000898ec) main_mup_pane_t2

0x489f,	// (0x00089904) main_mup_pane_t3_ParamLimits

0x489f,	// (0x00089904) main_mup_pane_t3

0x48b7,	// (0x0008991c) main_mup_pane_t4_ParamLimits

0x48b7,	// (0x0008991c) main_mup_pane_t4

0x48d5,	// (0x0008993a) main_mup_pane_t5_ParamLimits

0x48d5,	// (0x0008993a) main_mup_pane_t5

0x48ea,	// (0x0008994f) main_mup_pane_t6_ParamLimits

0x48ea,	// (0x0008994f) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0009449f) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0009449f) main_mup_pane_t

0x48fc,	// (0x00089961) mup_progress_pane_ParamLimits

0x48fc,	// (0x00089961) mup_progress_pane

0x4908,	// (0x0008996d) mup_visualizer_pane_ParamLimits

0x4908,	// (0x0008996d) mup_visualizer_pane

0x4938,	// (0x0008999d) mup_volume_pane_ParamLimits

0x4938,	// (0x0008999d) mup_volume_pane

0x4956,	// (0x000899bb) mup_visualizer_pane_g1_ParamLimits

0x4956,	// (0x000899bb) mup_visualizer_pane_g1

0x4956,	// (0x000899bb) mup_visualizer_pane_g2_ParamLimits

0x4956,	// (0x000899bb) mup_visualizer_pane_g2

0x43fc,	// (0x00089461) mup_visualizer_pane_g3_ParamLimits

0x43fc,	// (0x00089461) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000944ac) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000944ac) mup_visualizer_pane_g

0x1c89,	// (0x00086cee) mup_volume_pane_g1

0x496c,	// (0x000899d1) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000944b3) mup_volume_pane_g

0x1c89,	// (0x00086cee) mup_progress_pane_g1

0x4975,	// (0x000899da) mup_progress_pane_g2

0x497e,	// (0x000899e3) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000944b8) mup_progress_pane_g

0x15a1,	// (0x00086606) bg_popup_window_pane_cp05

0x4987,	// (0x000899ec) heading_pane_cp02_ParamLimits

0x4987,	// (0x000899ec) heading_pane_cp02

0x49a1,	// (0x00089a06) list_popup_blid_pane

0x49a9,	// (0x00089a0e) list_blid_sat_info_pane_ParamLimits

0x49a9,	// (0x00089a0e) list_blid_sat_info_pane

0x49bc,	// (0x00089a21) list_blid_sat_info_pane_g1

0x49c4,	// (0x00089a29) list_blid_sat_info_pane_t1

0x4aca,	// (0x00089b2f) mup_equalizer_pane_ParamLimits

0x4aca,	// (0x00089b2f) mup_equalizer_pane

0x4ae3,	// (0x00089b48) mup_equalizer_pane_cp1_ParamLimits

0x4ae3,	// (0x00089b48) mup_equalizer_pane_cp1

0x4b00,	// (0x00089b65) mup_equalizer_pane_cp2_ParamLimits

0x4b00,	// (0x00089b65) mup_equalizer_pane_cp2

0x4b1d,	// (0x00089b82) mup_equalizer_pane_cp3_ParamLimits

0x4b1d,	// (0x00089b82) mup_equalizer_pane_cp3

0x4b3e,	// (0x00089ba3) mup_equalizer_pane_cp4_ParamLimits

0x4b3e,	// (0x00089ba3) mup_equalizer_pane_cp4

0x4b5f,	// (0x00089bc4) mup_equalizer_pane_cp5

0x4b73,	// (0x00089bd8) mup_equalizer_pane_cp6

0x4b87,	// (0x00089bec) mup_equalizer_pane_cp7

0xc07c,	// (0x000910e1) bg_popup_call_poc_act_pane_g9

0xc084,	// (0x000910e9) bg_popup_call_poc_act_pane_g10

0xc08c,	// (0x000910f1) bg_popup_call_poc_act_pane_g11

0x000a,

0x17fc,	// (0x00086861) mup_scale_pane

0x1c89,	// (0x00086cee) mup_scale_pane_g1

0x4b9b,	// (0x00089c00) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000944d4) mup_scale_pane_g

0x4bd1,	// (0x00089c36) msg_data_pane

0x4bd9,	// (0x00089c3e) scroll_pane_cp017

0x0426,	// (0x0008548b) bg_list_pane_cp04_ParamLimits

0x0426,	// (0x0008548b) bg_list_pane_cp04

0x4be1,	// (0x00089c46) msg_data_pane_g1

0x4be9,	// (0x00089c4e) msg_data_pane_g2

0x4bf3,	// (0x00089c58) msg_data_pane_g3

0x4bfb,	// (0x00089c60) msg_data_pane_g4

0x4c03,	// (0x00089c68) msg_data_pane_g5

0x4c0b,	// (0x00089c70) msg_data_pane_g6

0x4c13,	// (0x00089c78) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000944e3) msg_data_pane_g

0x0446,	// (0x000854ab) msg_text_pane_ParamLimits

0x0446,	// (0x000854ab) msg_text_pane

0x4c1b,	// (0x00089c80) qrid_highlight_pane_cp011_ParamLimits

0x4c1b,	// (0x00089c80) qrid_highlight_pane_cp011

0x15a1,	// (0x00086606) msg_body_pane

0x15a1,	// (0x00086606) msg_header_pane

0x4c3c,	// (0x00089ca1) input_focus_pane_cp07

0x0476,	// (0x000854db) msg_header_pane_t1_ParamLimits

0x0476,	// (0x000854db) msg_header_pane_t1

0x0488,	// (0x000854ed) msg_header_pane_t2_ParamLimits

0x0488,	// (0x000854ed) msg_header_pane_t2

0x0001,

0xf492,	// (0x000944f7) msg_header_pane_t_ParamLimits

0xf492,	// (0x000944f7) msg_header_pane_t

0x4c51,	// (0x00089cb6) msg_body_pane_g1

0x049a,	// (0x000854ff) msg_body_pane_t1_ParamLimits

0x049a,	// (0x000854ff) msg_body_pane_t1

0x04cb,	// (0x00085530) msg_body_pane_t2_ParamLimits

0x04cb,	// (0x00085530) msg_body_pane_t2

0x04dd,	// (0x00085542) msg_body_pane_t3_ParamLimits

0x04dd,	// (0x00085542) msg_body_pane_t3

0x0002,

0xf497,	// (0x000944fc) msg_body_pane_t_ParamLimits

0xf497,	// (0x000944fc) msg_body_pane_t

0x4c93,	// (0x00089cf8) main_viewer_pane_g1_ParamLimits

0x4c93,	// (0x00089cf8) main_viewer_pane_g1

0x4ca1,	// (0x00089d06) main_viewer_pane_g2_ParamLimits

0x4ca1,	// (0x00089d06) main_viewer_pane_g2

0x4caf,	// (0x00089d14) main_viewer_pane_g3_ParamLimits

0x4caf,	// (0x00089d14) main_viewer_pane_g3

0x4cbe,	// (0x00089d23) main_viewer_pane_g4_ParamLimits

0x4cbe,	// (0x00089d23) main_viewer_pane_g4

0xb4c2,	// (0x00090527) main_viewer_pane_g5_ParamLimits

0xb4c2,	// (0x00090527) main_viewer_pane_g5

0xb4c2,	// (0x00090527) main_viewer_pane_g7_ParamLimits

0xb4c2,	// (0x00090527) main_viewer_pane_g7

0xb4d4,	// (0x00090539) main_viewer_pane_g8_ParamLimits

0xb4d4,	// (0x00090539) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0009450c) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0009450c) main_viewer_pane_g

0x4ccd,	// (0x00089d32) viewer_content_pane_ParamLimits

0x4ccd,	// (0x00089d32) viewer_content_pane

0x4d08,	// (0x00089d6d) main_postcard_pane_g1_ParamLimits

0x4d08,	// (0x00089d6d) main_postcard_pane_g1

0x4d1e,	// (0x00089d83) main_postcard_pane_g2_ParamLimits

0x4d1e,	// (0x00089d83) main_postcard_pane_g2

0x4d34,	// (0x00089d99) main_postcard_pane_g3_ParamLimits

0x4d34,	// (0x00089d99) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0009451d) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0009451d) main_postcard_pane_g

0x4d4b,	// (0x00089db0) main_postcard_pane_g4

0xc2b2,	// (0x00091317) smil_status_volume_pane_g2

0x4d8e,	// (0x00089df3) postcard_pane_ParamLimits

0x4d8e,	// (0x00089df3) postcard_pane

0x4dd0,	// (0x00089e35) postcard_pane_g1_ParamLimits

0x4dd0,	// (0x00089e35) postcard_pane_g1

0x4dde,	// (0x00089e43) postcard_pane_g2_ParamLimits

0x4dde,	// (0x00089e43) postcard_pane_g2

0x4dea,	// (0x00089e4f) postcard_pane_g3_ParamLimits

0x4dea,	// (0x00089e4f) postcard_pane_g3

0x4df6,	// (0x00089e5b) postcard_pane_g4_ParamLimits

0x4df6,	// (0x00089e5b) postcard_pane_g4

0x4e04,	// (0x00089e69) postcard_pane_g5_ParamLimits

0x4e04,	// (0x00089e69) postcard_pane_g5

0x4e19,	// (0x00089e7e) postcard_pane_g6_ParamLimits

0x4e19,	// (0x00089e7e) postcard_pane_g6

0x4dd0,	// (0x00089e35) postcard_pane_g7_ParamLimits

0x4dd0,	// (0x00089e35) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0009452a) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0009452a) postcard_pane_g

0x4e2d,	// (0x00089e92) main_mp2_pane_g1_ParamLimits

0x4e2d,	// (0x00089e92) main_mp2_pane_g1

0x4e39,	// (0x00089e9e) main_mp2_pane_g2_ParamLimits

0x4e39,	// (0x00089e9e) main_mp2_pane_g2

0x4e45,	// (0x00089eaa) main_mp2_pane_g3_ParamLimits

0x4e45,	// (0x00089eaa) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x00094539) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x00094539) main_mp2_pane_g

0x4e51,	// (0x00089eb6) main_mp2_pane_t1_ParamLimits

0x4e51,	// (0x00089eb6) main_mp2_pane_t1

0x4e66,	// (0x00089ecb) main_mp2_pane_t2_ParamLimits

0x4e66,	// (0x00089ecb) main_mp2_pane_t2

0x4e78,	// (0x00089edd) main_mp2_pane_t3_ParamLimits

0x4e78,	// (0x00089edd) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x00094540) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x00094540) main_mp2_pane_t

0x4e8a,	// (0x00089eef) pec_content_pane_ParamLimits

0x4e8a,	// (0x00089eef) pec_content_pane

0x2e1f,	// (0x00087e84) scroll_pane_cp015

0x4e9c,	// (0x00089f01) pec_attribute_pane_ParamLimits

0x4e9c,	// (0x00089f01) pec_attribute_pane

0x4eac,	// (0x00089f11) pec_content_pane_g1_ParamLimits

0x4eac,	// (0x00089f11) pec_content_pane_g1

0x4eb8,	// (0x00089f1d) pec_content_pane_t1_ParamLimits

0x4eb8,	// (0x00089f1d) pec_content_pane_t1

0x4eca,	// (0x00089f2f) pec_content_pane_t2_ParamLimits

0x4eca,	// (0x00089f2f) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x00094547) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x00094547) pec_content_pane_t

0x4edc,	// (0x00089f41) list_single_graphic_pane_cp01_ParamLimits

0x4edc,	// (0x00089f41) list_single_graphic_pane_cp01

0x17fc,	// (0x00086861) bg_popup_sub_pane_cp04

0x4ef1,	// (0x00089f56) popup_mup_playback_window_g1

0x4efd,	// (0x00089f62) popup_mup_playback_window_t1

0x4f12,	// (0x00089f77) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0009454c) popup_mup_playback_window_t

0x4f67,	// (0x00089fcc) main_image_pane_g1_ParamLimits

0x4f67,	// (0x00089fcc) main_image_pane_g1

0x5044,	// (0x0008a0a9) scroll_pane_cp018_ParamLimits

0x5044,	// (0x0008a0a9) scroll_pane_cp018

0x505c,	// (0x0008a0c1) scroll_pane_cp016_ParamLimits

0x505c,	// (0x0008a0c1) scroll_pane_cp016

0x5090,	// (0x0008a0f5) smil2_image_pane_ParamLimits

0x5090,	// (0x0008a0f5) smil2_image_pane

0x50c0,	// (0x0008a125) smil2_root_pane_ParamLimits

0x50c0,	// (0x0008a125) smil2_root_pane

0x50f8,	// (0x0008a15d) smil2_text_pane_ParamLimits

0x50f8,	// (0x0008a15d) smil2_text_pane

0x15a1,	// (0x00086606) bg_list_pane_cp06

0x5180,	// (0x0008a1e5) grid_radio_pane

0x15a1,	// (0x00086606) bg_popup_window_pane_cp06

0x5188,	// (0x0008a1ed) main_fmradio_pane_t1

0x406d,	// (0x000890d2) heading_pane_cp04

0x5196,	// (0x0008a1fb) main_fmradio_pane_t2

0xc094,	// (0x000910f9) popup_cale_lunar_info_window_g1

0x51a4,	// (0x0008a209) main_fmradio_pane_t3

0xc09c,	// (0x00091101) popup_cale_lunar_info_window_g2

0x51b2,	// (0x0008a217) main_fmradio_pane_t4

0x0001,

0x51c0,	// (0x0008a225) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x00094627) popup_cale_lunar_info_window_g

0xf4fc,	// (0x00094561) main_fmradio_pane_t

0x51ce,	// (0x0008a233) wait_bar_pane_cp03

0x51d6,	// (0x0008a23b) cell_fmradio_pane_ParamLimits

0x51d6,	// (0x0008a23b) cell_fmradio_pane

0x4dd0,	// (0x00089e35) cell_fmradio_pane_g1_ParamLimits

0x4dd0,	// (0x00089e35) cell_fmradio_pane_g1

0x15a1,	// (0x00086606) grid_highlight_pane_cp011

0x51e9,	// (0x0008a24e) poc_content_pane_ParamLimits

0x51e9,	// (0x0008a24e) poc_content_pane

0x51fb,	// (0x0008a260) scroll_pane_cp019

0x5203,	// (0x0008a268) popup_call_poc_act_window_ParamLimits

0x5203,	// (0x0008a268) popup_call_poc_act_window

0x5227,	// (0x0008a28c) popup_call_poc_inact_window_ParamLimits

0x5227,	// (0x0008a28c) popup_call_poc_inact_window

0xf599,	// (0x000945fe) bg_popup_call_poc_act_pane_g

0xc00c,	// (0x00091071) bg_popup_call_poc_inact_pane_g1

0xc014,	// (0x00091079) bg_popup_call_poc_inact_pane_g2

0x5240,	// (0x0008a2a5) popup_call_poc_act_window_g2

0xc01c,	// (0x00091081) bg_popup_call_poc_inact_pane_g3

0xc024,	// (0x00091089) bg_popup_call_poc_inact_pane_g4

0xc02c,	// (0x00091091) bg_popup_call_poc_inact_pane_g5

0x5248,	// (0x0008a2ad) popup_call_poc_act_window_t1_ParamLimits

0x5248,	// (0x0008a2ad) popup_call_poc_act_window_t1

0x5270,	// (0x0008a2d5) popup_call_poc_act_window_t2_ParamLimits

0x5270,	// (0x0008a2d5) popup_call_poc_act_window_t2

0x5298,	// (0x0008a2fd) popup_call_poc_act_window_t3_ParamLimits

0x5298,	// (0x0008a2fd) popup_call_poc_act_window_t3

0x52c0,	// (0x0008a325) popup_call_poc_act_window_t4_ParamLimits

0x52c0,	// (0x0008a325) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0009456c) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0009456c) popup_call_poc_act_window_t

0xc034,	// (0x00091099) bg_popup_call_poc_inact_pane_g6

0xc03c,	// (0x000910a1) bg_popup_call_poc_inact_pane_g7

0xc044,	// (0x000910a9) bg_popup_call_poc_inact_pane_g8

0x52d2,	// (0x0008a337) popup_call_poc_inact_window_g2

0xc04c,	// (0x000910b1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000945eb) bg_popup_call_poc_inact_pane_g

0x52da,	// (0x0008a33f) popup_call_poc_inact_window_t1_ParamLimits

0x52da,	// (0x0008a33f) popup_call_poc_inact_window_t1

0x52ef,	// (0x0008a354) popup_call_poc_inact_window_t2_ParamLimits

0x52ef,	// (0x0008a354) popup_call_poc_inact_window_t2

0x5304,	// (0x0008a369) popup_call_poc_inact_window_t3_ParamLimits

0x5304,	// (0x0008a369) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x00094575) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x00094575) popup_call_poc_inact_window_t

0xc225,	// (0x0009128a) context_pane_ParamLimits

0x5e06,	// (0x0008ae6b) signal_pane_ParamLimits

0x4666,	// (0x000896cb) main_call2_pane

0xc1fe,	// (0x00091263) popup_phob_thumbnail2_window_ParamLimits

0xc1fe,	// (0x00091263) popup_phob_thumbnail2_window

0xb4aa,	// (0x0009050f) aid_hotspot_pointer_arrow_pane

0xb4b2,	// (0x00090517) aid_hotspot_pointer_hand_pane

0x5920,	// (0x0008a985) phob_pre_status_pane_g5

0x2571,	// (0x000875d6) cams_zoom_pane_ParamLimits

0x2580,	// (0x000875e5) image_vga_pane_ParamLimits

0x259a,	// (0x000875ff) main_camera_pane_g1_ParamLimits

0x25ac,	// (0x00087611) main_camera_pane_g2_ParamLimits

0x25bc,	// (0x00087621) main_camera_pane_g3_ParamLimits

0x25cc,	// (0x00087631) main_camera_pane_g4_ParamLimits

0x25dc,	// (0x00087641) main_camera_pane_g5_ParamLimits

0x25ec,	// (0x00087651) main_camera_pane_g6_ParamLimits

0x25fe,	// (0x00087663) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x00094274) main_camera_pane_g_ParamLimits

0x261a,	// (0x0008767f) main_camera_pane_t1_ParamLimits

0x2630,	// (0x00087695) main_camera_pane_t2_ParamLimits

0xf220,	// (0x00094285) main_camera_pane_t_ParamLimits

0x17fc,	// (0x00086861) bg_popup_preview_window_pane_cp01_ParamLimits

0x17fc,	// (0x00086861) bg_popup_preview_window_pane_cp01

0x5319,	// (0x0008a37e) popup_phob_thumbnail2_window_g1_ParamLimits

0x5319,	// (0x0008a37e) popup_phob_thumbnail2_window_g1

0x15a1,	// (0x00086606) call2_cli_visual_pane

0x5340,	// (0x0008a3a5) popup_call2_audio_conf_window_ParamLimits

0x5340,	// (0x0008a3a5) popup_call2_audio_conf_window

0x5360,	// (0x0008a3c5) popup_call2_audio_first_window_ParamLimits

0x5360,	// (0x0008a3c5) popup_call2_audio_first_window

0x53f6,	// (0x0008a45b) popup_call2_audio_in_window_ParamLimits

0x53f6,	// (0x0008a45b) popup_call2_audio_in_window

0x543e,	// (0x0008a4a3) popup_call2_audio_out_window_ParamLimits

0x543e,	// (0x0008a4a3) popup_call2_audio_out_window

0x54a8,	// (0x0008a50d) popup_call2_audio_second_window_ParamLimits

0x54a8,	// (0x0008a50d) popup_call2_audio_second_window

0x550e,	// (0x0008a573) popup_call2_audio_wait_window_ParamLimits

0x550e,	// (0x0008a573) popup_call2_audio_wait_window

0x15a1,	// (0x00086606) bg_popup_call2_act_pane_cp03

0x17de,	// (0x00086843) list_conf_pane_cp

0x5548,	// (0x0008a5ad) popup_call2_audio_conf_window_t1

0x40ee,	// (0x00089153) list_single_graphic_popup_conf2_pane_ParamLimits

0x40ee,	// (0x00089153) list_single_graphic_popup_conf2_pane

0x4101,	// (0x00089166) list_highlight_pane_cp04

0x5556,	// (0x0008a5bb) list_single_graphic_popup_conf2_pane_g1

0x4112,	// (0x00089177) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0009457c) list_single_graphic_popup_conf2_pane_g

0x5560,	// (0x0008a5c5) list_single_graphic_popup_conf2_pane_t1

0x556e,	// (0x0008a5d3) bg_popup_call2_act_pane_cp01_ParamLimits

0x556e,	// (0x0008a5d3) bg_popup_call2_act_pane_cp01

0x55f8,	// (0x0008a65d) call_type_pane_cp05_ParamLimits

0x55f8,	// (0x0008a65d) call_type_pane_cp05

0x564c,	// (0x0008a6b1) popup_call2_audio_second_window_g1_ParamLimits

0x564c,	// (0x0008a6b1) popup_call2_audio_second_window_g1

0x56a0,	// (0x0008a705) popup_call2_audio_second_window_g2_ParamLimits

0x56a0,	// (0x0008a705) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x00094581) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x00094581) popup_call2_audio_second_window_g

0x5705,	// (0x0008a76a) popup_call2_audio_second_window_t1_ParamLimits

0x5705,	// (0x0008a76a) popup_call2_audio_second_window_t1

0x57c0,	// (0x0008a825) popup_call2_audio_second_window_t2_ParamLimits

0x57c0,	// (0x0008a825) popup_call2_audio_second_window_t2

0xb4ec,	// (0x00090551) popup_call2_audio_second_window_t3_ParamLimits

0xb4ec,	// (0x00090551) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x00094588) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x00094588) popup_call2_audio_second_window_t

0x15a1,	// (0x00086606) bg_popup_call2_in_pane_cp02

0x15ab,	// (0x00086610) call_type_pane_cp04

0x15b3,	// (0x00086618) popup_call2_audio_wait_window_g1

0x15bb,	// (0x00086620) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x00094161) popup_call2_audio_wait_window_g

0x15c3,	// (0x00086628) popup_call2_audio_wait_window_t3

0xb5df,	// (0x00090644) bg_popup_call2_act_pane_ParamLimits

0xb5df,	// (0x00090644) bg_popup_call2_act_pane

0xb69f,	// (0x00090704) call_type_pane_cp03_ParamLimits

0xb69f,	// (0x00090704) call_type_pane_cp03

0xb703,	// (0x00090768) popup_call2_audio_first_window_g1_ParamLimits

0xb703,	// (0x00090768) popup_call2_audio_first_window_g1

0xb773,	// (0x000907d8) popup_call2_audio_first_window_g2_ParamLimits

0xb773,	// (0x000907d8) popup_call2_audio_first_window_g2

0x4956,	// (0x000899bb) popup_call2_audio_first_window_g3_ParamLimits

0x4956,	// (0x000899bb) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x00094591) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x00094591) popup_call2_audio_first_window_g

0xb851,	// (0x000908b6) popup_call2_audio_first_window_t1_ParamLimits

0xb851,	// (0x000908b6) popup_call2_audio_first_window_t1

0xb954,	// (0x000909b9) popup_call2_audio_first_window_t4_ParamLimits

0xb954,	// (0x000909b9) popup_call2_audio_first_window_t4

0xba37,	// (0x00090a9c) popup_call2_audio_first_window_t5_ParamLimits

0xba37,	// (0x00090a9c) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0009459c) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0009459c) popup_call2_audio_first_window_t

0x17f4,	// (0x00086859) bg_popup_call2_act_pane_g1

0xc0a4,	// (0x00091109) popup_cale_lunar_info_window_t1

0xc0b2,	// (0x00091117) popup_cale_lunar_info_window_t2

0xc0c0,	// (0x00091125) popup_cale_lunar_info_window_t3

0x15a1,	// (0x00086606) bg_popup_call2_bubble_pane

0xbb38,	// (0x00090b9d) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb38,	// (0x00090b9d) bg_popup_call2_in_pane_cp01

0xecca,	// (0x00093d2f) call_type_pane_cp02

0xbb80,	// (0x00090be5) popup_call2_audio_out_window_g1_ParamLimits

0xbb80,	// (0x00090be5) popup_call2_audio_out_window_g1

0xbbac,	// (0x00090c11) popup_call2_audio_out_window_g2_ParamLimits

0xbbac,	// (0x00090c11) popup_call2_audio_out_window_g2

0xbbd4,	// (0x00090c39) popup_call2_audio_out_window_g3_ParamLimits

0xbbd4,	// (0x00090c39) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000945a5) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000945a5) popup_call2_audio_out_window_g

0xbc0f,	// (0x00090c74) popup_call2_audio_out_window_t1_ParamLimits

0xbc0f,	// (0x00090c74) popup_call2_audio_out_window_t1

0xbc6e,	// (0x00090cd3) popup_call2_audio_out_window_t2_ParamLimits

0xbc6e,	// (0x00090cd3) popup_call2_audio_out_window_t2

0xbcc2,	// (0x00090d27) popup_call2_audio_out_window_t3_ParamLimits

0xbcc2,	// (0x00090d27) popup_call2_audio_out_window_t3

0xbcd8,	// (0x00090d3d) popup_call2_audio_out_window_t4_ParamLimits

0xbcd8,	// (0x00090d3d) popup_call2_audio_out_window_t4

0xbcee,	// (0x00090d53) popup_call2_audio_out_window_t5_ParamLimits

0xbcee,	// (0x00090d53) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000945ae) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000945ae) popup_call2_audio_out_window_t

0xbd52,	// (0x00090db7) bg_popup_call2_in_pane_ParamLimits

0xbd52,	// (0x00090db7) bg_popup_call2_in_pane

0xbdae,	// (0x00090e13) popup_call2_audio_in_window_g1_ParamLimits

0xbdae,	// (0x00090e13) popup_call2_audio_in_window_g1

0xbde6,	// (0x00090e4b) popup_call2_audio_in_window_g2_ParamLimits

0xbde6,	// (0x00090e4b) popup_call2_audio_in_window_g2

0xbe1e,	// (0x00090e83) popup_call2_audio_in_window_g3_ParamLimits

0xbe1e,	// (0x00090e83) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000945bb) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000945bb) popup_call2_audio_in_window_g

0xbe76,	// (0x00090edb) popup_call2_audio_in_window_t1_ParamLimits

0xbe76,	// (0x00090edb) popup_call2_audio_in_window_t1

0xbef6,	// (0x00090f5b) popup_call2_audio_in_window_t2_ParamLimits

0xbef6,	// (0x00090f5b) popup_call2_audio_in_window_t2

0xbf76,	// (0x00090fdb) popup_call2_audio_in_window_t3_ParamLimits

0xbf76,	// (0x00090fdb) popup_call2_audio_in_window_t3

0xbf90,	// (0x00090ff5) popup_call2_audio_in_window_t4_ParamLimits

0xbf90,	// (0x00090ff5) popup_call2_audio_in_window_t4

0xbfa2,	// (0x00091007) popup_call2_audio_in_window_t5_ParamLimits

0xbfa2,	// (0x00091007) popup_call2_audio_in_window_t5

0xbfb7,	// (0x0009101c) popup_call2_audio_in_window_t6_ParamLimits

0xbfb7,	// (0x0009101c) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000945c4) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000945c4) popup_call2_audio_in_window_t

0x17f4,	// (0x00086859) bg_popup_call2_in_pane_g1

0xc0ce,	// (0x00091133) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0009462c) popup_cale_lunar_info_window_t

0x17fc,	// (0x00086861) bg_popup_call2_rect_pane_ParamLimits

0x17fc,	// (0x00086861) bg_popup_call2_rect_pane

0x15a1,	// (0x00086606) call2_cli_visual_graphic_pane

0x15a1,	// (0x00086606) call2_cli_visual_text_pane

0xc2c5,	// (0x0009132a) smil_status_volume_pane_g3

0x0002,

0x1c89,	// (0x00086cee) call2_cli_visual_graphic_pane_g1

0x1c89,	// (0x00086cee) call2_cli_visual_graphic_pane_g2

0x1c89,	// (0x00086cee) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000945d1) call2_cli_visual_graphic_pane_g

0xbfcc,	// (0x00091031) bg_popup_call2_rect_pane_g1

0x1dd8,	// (0x00086e3d) bg_popup_call2_rect_pane_g2

0xbfd4,	// (0x00091039) bg_popup_call2_rect_pane_g3

0xbfdc,	// (0x00091041) bg_popup_call2_rect_pane_g4

0xbfe4,	// (0x00091049) bg_popup_call2_rect_pane_g5

0xbfec,	// (0x00091051) bg_popup_call2_rect_pane_g6

0xbff4,	// (0x00091059) bg_popup_call2_rect_pane_g7

0xbffc,	// (0x00091061) bg_popup_call2_rect_pane_g8

0xc004,	// (0x00091069) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000945d8) bg_popup_call2_rect_pane_g

0xc00c,	// (0x00091071) bg_popup_call2_bubble_pane_g1

0xc014,	// (0x00091079) bg_popup_call2_bubble_pane_g2

0xc01c,	// (0x00091081) bg_popup_call2_bubble_pane_g3

0xc024,	// (0x00091089) bg_popup_call2_bubble_pane_g4

0xc02c,	// (0x00091091) bg_popup_call2_bubble_pane_g5

0xc034,	// (0x00091099) bg_popup_call2_bubble_pane_g6

0xc03c,	// (0x000910a1) bg_popup_call2_bubble_pane_g7

0xc044,	// (0x000910a9) bg_popup_call2_bubble_pane_g8

0xc04c,	// (0x000910b1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000945eb) bg_popup_call2_bubble_pane_g

0x1e59,	// (0x00086ebe) aid_cale_week_size_cell_pane

0x2646,	// (0x000876ab) aid_cams_cif_uncrop_pane_ParamLimits

0x2646,	// (0x000876ab) aid_cams_cif_uncrop_pane

0x2834,	// (0x00087899) aid_cams_size_cell_ParamLimits

0x2834,	// (0x00087899) aid_cams_size_cell

0x2848,	// (0x000878ad) grid_cams_pane_ParamLimits

0x2862,	// (0x000878c7) linegrid_cams_pane_ParamLimits

0x29b0,	// (0x00087a15) call_video_pane_t1

0x29ce,	// (0x00087a33) call_video_pane_t2

0x0001,

0xf273,	// (0x000942d8) call_video_pane_t

0x305e,	// (0x000880c3) aid_cale_month_size_cell_pane_ParamLimits

0x305e,	// (0x000880c3) aid_cale_month_size_cell_pane

0xf610,	// (0x00094675) smil_status_volume_pane_g

0xc2d2,	// (0x00091337) volume_smil_pane_ParamLimits

0xb2df,	// (0x00090344) aid_popup2_width_pane

0x1d30,	// (0x00086d95) cell_qdial_pane_g4_ParamLimits

0x1d30,	// (0x00086d95) cell_qdial_pane_g4

0x43dc,	// (0x00089441) aid_blid_cardinal_pane_ParamLimits

0x43e8,	// (0x0008944d) aid_blid_destination_pane_ParamLimits

0x43e8,	// (0x0008944d) aid_blid_destination_pane

0x17fc,	// (0x00086861) bg_popup_call_poc_act_pane_ParamLimits

0x17fc,	// (0x00086861) bg_popup_call_poc_act_pane

0x17fc,	// (0x00086861) bg_popup_call_poc_inact_pane_ParamLimits

0x17fc,	// (0x00086861) bg_popup_call_poc_inact_pane

0xc054,	// (0x000910b9) bg_popup_call_poc_act_pane_g1

0xc05c,	// (0x000910c1) bg_popup_call_poc_act_pane_g2

0xc064,	// (0x000910c9) bg_popup_call_poc_act_pane_g3

0xc024,	// (0x00091089) bg_popup_call_poc_act_pane_g4

0xc02c,	// (0x00091091) bg_popup_call_poc_act_pane_g5

0xc06c,	// (0x000910d1) bg_popup_call_poc_act_pane_g6

0xc03c,	// (0x000910a1) bg_popup_call_poc_act_pane_g7

0xc074,	// (0x000910d9) bg_popup_call_poc_act_pane_g8

0x15a1,	// (0x00086606) main_usb_pane

0xc1d9,	// (0x0009123e) popup_cale_lunar_info_window

0x2d06,	// (0x00087d6b) im_reading_pane_t1_ParamLimits

0x2d3f,	// (0x00087da4) list_im_pane_ParamLimits

0x2d50,	// (0x00087db5) scroll_pane_cp07_ParamLimits

0x15a1,	// (0x00086606) grid_highlight_pane_cp012

0x17fc,	// (0x00086861) mup_scale_pane_ParamLimits

0x4dd0,	// (0x00089e35) main_usb_pane_g1_ParamLimits

0x4dd0,	// (0x00089e35) main_usb_pane_g1

0x5835,	// (0x0008a89a) main_usb_pane_g2_ParamLimits

0x5835,	// (0x0008a89a) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x00094615) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x00094615) main_usb_pane_g

0x584b,	// (0x0008a8b0) main_usb_pane_t1_ParamLimits

0x584b,	// (0x0008a8b0) main_usb_pane_t1

0x585d,	// (0x0008a8c2) main_usb_pane_t2_ParamLimits

0x585d,	// (0x0008a8c2) main_usb_pane_t2

0x586f,	// (0x0008a8d4) main_usb_pane_t3_ParamLimits

0x586f,	// (0x0008a8d4) main_usb_pane_t3

0x5881,	// (0x0008a8e6) main_usb_pane_t4_ParamLimits

0x5881,	// (0x0008a8e6) main_usb_pane_t4

0x5893,	// (0x0008a8f8) main_usb_pane_t5_ParamLimits

0x5893,	// (0x0008a8f8) main_usb_pane_t5

0x58a5,	// (0x0008a90a) main_usb_pane_t6_ParamLimits

0x58a5,	// (0x0008a90a) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0009461a) main_usb_pane_t_ParamLimits

0x438b,	// (0x000893f0) aid_text_placing

0x4394,	// (0x000893f9) main_location2_pane_t1_ParamLimits

0x43a6,	// (0x0008940b) main_location2_pane_t2_ParamLimits

0x43b8,	// (0x0008941d) main_location2_pane_t3_ParamLimits

0x43ca,	// (0x0008942f) main_location2_pane_t4_ParamLimits

0x43ca,	// (0x0008942f) main_location2_pane_t4

0xf3d4,	// (0x00094439) main_location2_pane_t_ParamLimits

0x18d4,	// (0x00086939) find_pinb_pane_g2_ParamLimits

0x18d4,	// (0x00086939) find_pinb_pane_g2

0x0001,

0xf122,	// (0x00094187) find_pinb_pane_g_ParamLimits

0xf122,	// (0x00094187) find_pinb_pane_g

0x18e0,	// (0x00086945) find_pinb_pane_t1_ParamLimits

0x18f2,	// (0x00086957) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0009418c) find_pinb_pane_t_ParamLimits

0x15a1,	// (0x00086606) main_call3_pane

0x355c,	// (0x000885c1) cale_month_day_heading_pane_t1_ParamLimits

0x35e2,	// (0x00088647) cale_month_day_heading_pane_t2_ParamLimits

0x3673,	// (0x000886d8) cale_month_day_heading_pane_t3_ParamLimits

0x3704,	// (0x00088769) cale_month_day_heading_pane_t4_ParamLimits

0x3799,	// (0x000887fe) cale_month_day_heading_pane_t5_ParamLimits

0x383a,	// (0x0008889f) cale_month_day_heading_pane_t6_ParamLimits

0x38db,	// (0x00088940) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x00094310) cale_month_day_heading_pane_t_ParamLimits

0x3b8f,	// (0x00088bf4) smil_status_volume_pane

0x4dac,	// (0x00089e11) postcard_address_pane_ParamLimits

0x4dac,	// (0x00089e11) postcard_address_pane

0x4dbe,	// (0x00089e23) postcard_message_pane_ParamLimits

0x4dbe,	// (0x00089e23) postcard_message_pane

0x5813,	// (0x0008a878) call2_cli_visual_pane_t1_ParamLimits

0x5813,	// (0x0008a878) call2_cli_visual_pane_t1

0x6033,	// (0x0008b098) postcard_message_pane_t1_ParamLimits

0x6033,	// (0x0008b098) postcard_message_pane_t1

0x601c,	// (0x0008b081) postcard_address_pane_t1_ParamLimits

0x601c,	// (0x0008b081) postcard_address_pane_t1

0x6008,	// (0x0008b06d) popup_call3_audio_in_window_ParamLimits

0x6008,	// (0x0008b06d) popup_call3_audio_in_window

0x5e93,	// (0x0008aef8) bg_popup_call3_in_pane_ParamLimits

0x5e93,	// (0x0008aef8) bg_popup_call3_in_pane

0x5f09,	// (0x0008af6e) popup_call3_audio_in_window_g1_ParamLimits

0x5f09,	// (0x0008af6e) popup_call3_audio_in_window_g1

0x5f29,	// (0x0008af8e) popup_call3_audio_in_window_g2_ParamLimits

0x5f29,	// (0x0008af8e) popup_call3_audio_in_window_g2

0x5f49,	// (0x0008afae) popup_call3_audio_in_window_g3_ParamLimits

0x5f49,	// (0x0008afae) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0009467c) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0009467c) popup_call3_audio_in_window_g

0x5f7a,	// (0x0008afdf) popup_call3_audio_in_window_t1_ParamLimits

0x5f7a,	// (0x0008afdf) popup_call3_audio_in_window_t1

0x5fb8,	// (0x0008b01d) popup_call3_audio_in_window_t2_ParamLimits

0x5fb8,	// (0x0008b01d) popup_call3_audio_in_window_t2

0x5ff6,	// (0x0008b05b) popup_call3_audio_in_window_t3_ParamLimits

0x5ff6,	// (0x0008b05b) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x00094685) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x00094685) popup_call3_audio_in_window_t

0x4666,	// (0x000896cb) bg_popup_call3_rect_pane

0xbfcc,	// (0x00091031) bg_popup_call3_rect_pane_g1

0x1dd8,	// (0x00086e3d) bg_popup_call3_rect_pane_g2

0xbfd4,	// (0x00091039) bg_popup_call3_rect_pane_g3

0xbfdc,	// (0x00091041) bg_popup_call3_rect_pane_g4

0xbfe4,	// (0x00091049) bg_popup_call3_rect_pane_g5

0xbfec,	// (0x00091051) bg_popup_call3_rect_pane_g6

0xbff4,	// (0x00091059) bg_popup_call3_rect_pane_g7

0x494e,	// (0x000899b3) mup_visualizer_osc_pane

0x4964,	// (0x000899c9) mup_visualizer_spec_pane

0x5ec3,	// (0x0008af28) call3_video_qcif_pane_ParamLimits

0x5ec3,	// (0x0008af28) call3_video_qcif_pane

0x5ed6,	// (0x0008af3b) call3_video_qcif_uncrop_pane_ParamLimits

0x5ed6,	// (0x0008af3b) call3_video_qcif_uncrop_pane

0x5ee4,	// (0x0008af49) call3_video_subqcif_pane_ParamLimits

0x5ee4,	// (0x0008af49) call3_video_subqcif_pane

0x5ef8,	// (0x0008af5d) call3_video_subqcif_uncrop_pane_ParamLimits

0x5ef8,	// (0x0008af5d) call3_video_subqcif_uncrop_pane

0x5f69,	// (0x0008afce) popup_call3_audio_in_window_g4_ParamLimits

0x5f69,	// (0x0008afce) popup_call3_audio_in_window_g4

0x5e82,	// (0x0008aee7) mup_spec_half_pane

0x5e8b,	// (0x0008aef0) mup_spec_half_pane_cp

0xc285,	// (0x000912ea) mup_osc_middle_pane

0xc28e,	// (0x000912f3) mup_visualizer_osc_pane_g1

0x5e62,	// (0x0008aec7) mup_spec_bar_pane_ParamLimits

0x5e62,	// (0x0008aec7) mup_spec_bar_pane

0xc272,	// (0x000912d7) mup_spec_bar_pane_g1

0xc27c,	// (0x000912e1) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x00094670) mup_spec_bar_pane_g

0x1e59,	// (0x00086ebe) aid_cale_week_size_cell_pane_ParamLimits

0x1e73,	// (0x00086ed8) bg_cale_heading_pane_ParamLimits

0x1e8b,	// (0x00086ef0) bg_cale_pane_cp01_ParamLimits

0x1ea9,	// (0x00086f0e) cale_week_corner_pane_ParamLimits

0x1ec8,	// (0x00086f2d) cale_week_day_heading_pane_ParamLimits

0x1ee5,	// (0x00086f4a) cale_week_scroll_pane_g1_ParamLimits

0x1ef8,	// (0x00086f5d) cale_week_scroll_pane_g2_ParamLimits

0x1f10,	// (0x00086f75) cale_week_scroll_pane_g3_ParamLimits

0x1f28,	// (0x00086f8d) cale_week_scroll_pane_g4_ParamLimits

0x1f40,	// (0x00086fa5) cale_week_scroll_pane_g5_ParamLimits

0x1f60,	// (0x00086fc5) cale_week_scroll_pane_g6_ParamLimits

0x1f80,	// (0x00086fe5) cale_week_scroll_pane_g7_ParamLimits

0x1fa0,	// (0x00087005) cale_week_scroll_pane_g8_ParamLimits

0x1fc4,	// (0x00087029) cale_week_scroll_pane_g9_ParamLimits

0x1fdc,	// (0x00087041) cale_week_scroll_pane_g10_ParamLimits

0x1ff4,	// (0x00087059) cale_week_scroll_pane_g11_ParamLimits

0x200c,	// (0x00087071) cale_week_scroll_pane_g12_ParamLimits

0x2024,	// (0x00087089) cale_week_scroll_pane_g13_ParamLimits

0x2024,	// (0x00087089) cale_week_scroll_pane_g14_ParamLimits

0x2024,	// (0x00087089) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x00094218) cale_week_scroll_pane_g_ParamLimits

0x203c,	// (0x000870a1) cale_week_time_pane_ParamLimits

0x2060,	// (0x000870c5) grid_cale_week_pane_ParamLimits

0x2086,	// (0x000870eb) listscroll_cale_week_pane_t1

0x2098,	// (0x000870fd) scroll_pane_cp08_ParamLimits

0x30e0,	// (0x00088145) cale_month_corner_pane_ParamLimits

0x34e8,	// (0x0008854d) cale_month_pane_t1

0x34fa,	// (0x0008855f) cale_month_week_pane_ParamLimits

0x3fcd,	// (0x00089032) popup_call_status_window_g1_ParamLimits

0x3fe1,	// (0x00089046) popup_call_status_window_g2_ParamLimits

0x3ff5,	// (0x0008905a) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000943c0) popup_call_status_window_g_ParamLimits

0x405d,	// (0x000890c2) aid_call2_pane

0x0468,	// (0x000854cd) msg_header_pane_g1

0x4dac,	// (0x00089e11) postcard_address2_pane_ParamLimits

0x4dac,	// (0x00089e11) postcard_address2_pane

0x4dbe,	// (0x00089e23) postcard_message2_pane_ParamLimits

0x4dbe,	// (0x00089e23) postcard_message2_pane

0x5e14,	// (0x0008ae79) message2_row_pane_ParamLimits

0x5e14,	// (0x0008ae79) message2_row_pane

0x5e30,	// (0x0008ae95) address2_row_pane_ParamLimits

0x5e30,	// (0x0008ae95) address2_row_pane

0xc240,	// (0x000912a5) postcard_message2_row_pane_g1

0xc248,	// (0x000912ad) postcard_message2_row_pane_t1

0xc240,	// (0x000912a5) address2_row_pane_g1

0xc248,	// (0x000912ad) address2_row_pane_t1

0x24dd,	// (0x00087542) aid_size_cell_vorec

0x15a1,	// (0x00086606) main_rss_pane

0x5e43,	// (0x0008aea8) rss_list_single_pane_ParamLimits

0x5e43,	// (0x0008aea8) rss_list_single_pane

0xc256,	// (0x000912bb) rss_list_single_pane_t1

0xc264,	// (0x000912c9) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0009466b) rss_list_single_pane_t

0x15a1,	// (0x00086606) main_camera2_pane

0x15a1,	// (0x00086606) main_video2_pane

0x60ac,	// (0x0008b111) cams_zoom_pane_cp2_ParamLimits

0x60ac,	// (0x0008b111) cams_zoom_pane_cp2

0x60cc,	// (0x0008b131) image2_vga_pane_ParamLimits

0x60cc,	// (0x0008b131) image2_vga_pane

0x611d,	// (0x0008b182) main_camera2_pane_g1_ParamLimits

0x611d,	// (0x0008b182) main_camera2_pane_g1

0x613d,	// (0x0008b1a2) main_camera2_pane_g2_ParamLimits

0x613d,	// (0x0008b1a2) main_camera2_pane_g2

0x615d,	// (0x0008b1c2) main_camera2_pane_g3_ParamLimits

0x615d,	// (0x0008b1c2) main_camera2_pane_g3

0x617d,	// (0x0008b1e2) main_camera2_pane_g4_ParamLimits

0x617d,	// (0x0008b1e2) main_camera2_pane_g4

0x619d,	// (0x0008b202) main_camera2_pane_g5_ParamLimits

0x619d,	// (0x0008b202) main_camera2_pane_g5

0x61bd,	// (0x0008b222) main_camera2_pane_g6_ParamLimits

0x61bd,	// (0x0008b222) main_camera2_pane_g6

0x61dd,	// (0x0008b242) main_camera2_pane_g7_ParamLimits

0x61dd,	// (0x0008b242) main_camera2_pane_g7

0x61fd,	// (0x0008b262) main_camera2_pane_g8_ParamLimits

0x61fd,	// (0x0008b262) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0009468c) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0009468c) main_camera2_pane_g

0x623d,	// (0x0008b2a2) main_camera2_pane_t1_ParamLimits

0x623d,	// (0x0008b2a2) main_camera2_pane_t1

0x6272,	// (0x0008b2d7) main_camera2_pane_t2_ParamLimits

0x6272,	// (0x0008b2d7) main_camera2_pane_t2

0x6298,	// (0x0008b2fd) main_camera2_pane_t3_ParamLimits

0x6298,	// (0x0008b2fd) main_camera2_pane_t3

0x62f6,	// (0x0008b35b) main_camera2_pane_t4_ParamLimits

0x62f6,	// (0x0008b35b) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0009469f) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0009469f) main_camera2_pane_t

0x6388,	// (0x0008b3ed) cams_zoom_pane_cp4_ParamLimits

0x6388,	// (0x0008b3ed) cams_zoom_pane_cp4

0x639e,	// (0x0008b403) image2_cif_pane_ParamLimits

0x639e,	// (0x0008b403) image2_cif_pane

0x63c9,	// (0x0008b42e) image2_subqcif_pane_ParamLimits

0x63c9,	// (0x0008b42e) image2_subqcif_pane

0x63e3,	// (0x0008b448) main_video2_pane_g1_ParamLimits

0x63e3,	// (0x0008b448) main_video2_pane_g1

0x63fd,	// (0x0008b462) main_video2_pane_g2_ParamLimits

0x63fd,	// (0x0008b462) main_video2_pane_g2

0x6413,	// (0x0008b478) main_video2_pane_g3_ParamLimits

0x6413,	// (0x0008b478) main_video2_pane_g3

0x6429,	// (0x0008b48e) main_video2_pane_g4_ParamLimits

0x6429,	// (0x0008b48e) main_video2_pane_g4

0x643f,	// (0x0008b4a4) main_video2_pane_g5_ParamLimits

0x643f,	// (0x0008b4a4) main_video2_pane_g5

0x6455,	// (0x0008b4ba) main_video2_pane_g6_ParamLimits

0x6455,	// (0x0008b4ba) main_video2_pane_g6

0x0005,

0xf649,	// (0x000946ae) main_video2_pane_g_ParamLimits

0xf649,	// (0x000946ae) main_video2_pane_g

0x646f,	// (0x0008b4d4) main_video2_pane_t1_ParamLimits

0x646f,	// (0x0008b4d4) main_video2_pane_t1

0x6493,	// (0x0008b4f8) main_video2_pane_t2_ParamLimits

0x6493,	// (0x0008b4f8) main_video2_pane_t2

0x64e1,	// (0x0008b546) main_video2_pane_t3_ParamLimits

0x64e1,	// (0x0008b546) main_video2_pane_t3

0x0002,

0xf656,	// (0x000946bb) main_video2_pane_t_ParamLimits

0xf656,	// (0x000946bb) main_video2_pane_t

0x5960,	// (0x0008a9c5) call_muted_g2

0x0001,

0xf5f8,	// (0x0009465d) call_muted_g

0x15a1,	// (0x00086606) main_mup2_pane

0x6525,	// (0x0008b58a) main_mup2_pane_g1_ParamLimits

0x6525,	// (0x0008b58a) main_mup2_pane_g1

0x6531,	// (0x0008b596) main_mup2_pane_g2_ParamLimits

0x6531,	// (0x0008b596) main_mup2_pane_g2

0xc3f6,	// (0x0009145b) main_mup_pane_g13_cp1

0xc3fe,	// (0x00091463) mup_volume_pane_cp1

0x654d,	// (0x0008b5b2) main_mup2_pane_g4_ParamLimits

0x654d,	// (0x0008b5b2) main_mup2_pane_g4

0x655f,	// (0x0008b5c4) main_mup2_pane_g5_ParamLimits

0x655f,	// (0x0008b5c4) main_mup2_pane_g5

0x6571,	// (0x0008b5d6) main_mup2_pane_g6_ParamLimits

0x6571,	// (0x0008b5d6) main_mup2_pane_g6

0x6583,	// (0x0008b5e8) main_mup2_pane_g7_ParamLimits

0x6583,	// (0x0008b5e8) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000946c2) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000946c2) main_mup2_pane_g

0x659b,	// (0x0008b600) main_mup2_pane_t1_ParamLimits

0x659b,	// (0x0008b600) main_mup2_pane_t1

0x65b1,	// (0x0008b616) main_mup2_pane_t2_ParamLimits

0x65b1,	// (0x0008b616) main_mup2_pane_t2

0x65c7,	// (0x0008b62c) main_mup2_pane_t3_ParamLimits

0x65c7,	// (0x0008b62c) main_mup2_pane_t3

0x65dd,	// (0x0008b642) main_mup2_pane_t4_ParamLimits

0x65dd,	// (0x0008b642) main_mup2_pane_t4

0x65f5,	// (0x0008b65a) main_mup2_pane_t5_ParamLimits

0x65f5,	// (0x0008b65a) main_mup2_pane_t5

0x660d,	// (0x0008b672) main_mup2_pane_t6_ParamLimits

0x660d,	// (0x0008b672) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000946d1) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000946d1) main_mup2_pane_t

0x663d,	// (0x0008b6a2) mup2_visualizer_pane_ParamLimits

0x663d,	// (0x0008b6a2) mup2_visualizer_pane

0x666b,	// (0x0008b6d0) mup_progress_pane_cp_ParamLimits

0x666b,	// (0x0008b6d0) mup_progress_pane_cp

0xc3d8,	// (0x0009143d) mup_volume_pane_cp_ParamLimits

0xc3d8,	// (0x0009143d) mup_volume_pane_cp

0x667f,	// (0x0008b6e4) mup2_visualizer_pane_g1_ParamLimits

0x667f,	// (0x0008b6e4) mup2_visualizer_pane_g1

0xc317,	// (0x0009137c) mup2_visualizer_pane_g2_ParamLimits

0xc317,	// (0x0009137c) mup2_visualizer_pane_g2

0x6696,	// (0x0008b6fb) mup2_visualizer_pane_g3_ParamLimits

0x6696,	// (0x0008b6fb) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000946de) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000946de) mup2_visualizer_pane_g

0x5178,	// (0x0008a1dd) aid_size_cell_fmradio

0x5b12,	// (0x0008ab77) aid_height_parent_landcape

0x2e06,	// (0x00087e6b) wml_content_pane_cp

0x2e0e,	// (0x00087e73) wml_tabs_pane

0x2e17,	// (0x00087e7c) popup_wml_miniature_window

0x2e1f,	// (0x00087e84) scroll_pane_cp021

0x2e33,	// (0x00087e98) wml_content_pane_comp8

0x15a1,	// (0x00086606) bg_popup_sub_pane_cp05

0xc335,	// (0x0009139a) popup_wml_miniature_window_g1

0xc33d,	// (0x000913a2) wml_miniature_view_pane

0x66a2,	// (0x0008b707) aid_size_wml_view

0x66aa,	// (0x0008b70f) wml_miniature_view_pane_g1

0x66b3,	// (0x0008b718) wml_miniature_view_pane_g2

0x66bc,	// (0x0008b721) wml_miniature_view_pane_g3

0x66c4,	// (0x0008b729) wml_miniature_view_pane_g4

0x66cc,	// (0x0008b731) wml_miniature_view_pane_g5

0x66d4,	// (0x0008b739) wml_miniature_view_pane_g6

0x66dc,	// (0x0008b741) wml_miniature_view_pane_g7

0x66e4,	// (0x0008b749) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000946e5) wml_miniature_view_pane_g

0xc345,	// (0x000913aa) background_graphic_ParamLimits

0xc345,	// (0x000913aa) background_graphic

0xc351,	// (0x000913b6) wml_tabs_2_pane

0xc35a,	// (0x000913bf) wml_tabs_3_pane_ParamLimits

0xc35a,	// (0x000913bf) wml_tabs_3_pane

0xc36c,	// (0x000913d1) wml_tabs_4_pane_ParamLimits

0xc36c,	// (0x000913d1) wml_tabs_4_pane

0xc382,	// (0x000913e7) wml_tabs_5_pane_ParamLimits

0xc382,	// (0x000913e7) wml_tabs_5_pane

0xc39c,	// (0x00091401) wml_tabs_pane_g2_ParamLimits

0xc39c,	// (0x00091401) wml_tabs_pane_g2

0xc3b0,	// (0x00091415) wml_tabs_pane_g3_ParamLimits

0xc3b0,	// (0x00091415) wml_tabs_pane_g3

0x66ec,	// (0x0008b751) wml_tabs_2_active_pane_ParamLimits

0x66ec,	// (0x0008b751) wml_tabs_2_active_pane

0x6700,	// (0x0008b765) wml_tabs_2_passive_pane_ParamLimits

0x6700,	// (0x0008b765) wml_tabs_2_passive_pane

0x6714,	// (0x0008b779) wml_tabs_3_active_pane_cp_ParamLimits

0x6714,	// (0x0008b779) wml_tabs_3_active_pane_cp

0x6729,	// (0x0008b78e) wml_tabs_3_passive_pane_ParamLimits

0x6729,	// (0x0008b78e) wml_tabs_3_passive_pane

0x673c,	// (0x0008b7a1) wml_tabs_3_passive_pane_cp_ParamLimits

0x673c,	// (0x0008b7a1) wml_tabs_3_passive_pane_cp

0x6753,	// (0x0008b7b8) tabs_4_active_pane

0x675b,	// (0x0008b7c0) tabs_4_passive_pane

0x6765,	// (0x0008b7ca) tabs_4_passive_pane_cp

0x676d,	// (0x0008b7d2) tabs_4_passive_pane_cp2

0x582d,	// (0x0008a892) aid_height_text

0x4924,	// (0x00089989) mup_volume_cont_pane_ParamLimits

0x4924,	// (0x00089989) mup_volume_cont_pane

0x1892,	// (0x000868f7) aid_size_cell_pinb

0x189c,	// (0x00086901) aid_size_list_pinb

0x6657,	// (0x0008b6bc) mup2_volume_cont_pane_ParamLimits

0x6657,	// (0x0008b6bc) mup2_volume_cont_pane

0xc3c4,	// (0x00091429) mup2_volume_cont_pane_g1_ParamLimits

0xc3c4,	// (0x00091429) mup2_volume_cont_pane_g1

0x1111,	// (0x00086176) aid_size_cell_touch_ParamLimits

0x1111,	// (0x00086176) aid_size_cell_touch

0x134c,	// (0x000863b1) touch_pane_ParamLimits

0x134c,	// (0x000863b1) touch_pane

0xebd1,	// (0x00093c36) main_rss2_pane

0xc406,	// (0x0009146b) listscroll_rss2_pane

0xc40f,	// (0x00091474) rss2_navigation_pane

0xc417,	// (0x0009147c) list_rss2_pane

0x4217,	// (0x0008927c) scroll_pane_cp22

0xc41f,	// (0x00091484) rss2_navigation_pane_g1

0xc428,	// (0x0009148d) rss2_navigation_pane_g2

0xc430,	// (0x00091495) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000946f6) rss2_navigation_pane_g

0xc438,	// (0x0009149d) rss2_navigation_pane_t1

0x6777,	// (0x0008b7dc) rss2_list_single_pane_ParamLimits

0x6777,	// (0x0008b7dc) rss2_list_single_pane

0xc446,	// (0x000914ab) rss2_list_single_pane_t2

0xc454,	// (0x000914b9) rss2_list_single_pane_t3_ParamLimits

0xc454,	// (0x000914b9) rss2_list_single_pane_t3

0xc471,	// (0x000914d6) rss2_list_single_pane_t4

0x3b77,	// (0x00088bdc) smil_status_pane_g1

0x1332,	// (0x00086397) main_image2_pane_ParamLimits

0x1332,	// (0x00086397) main_image2_pane

0x621d,	// (0x0008b282) main_camera2_pane_g9_ParamLimits

0x621d,	// (0x0008b282) main_camera2_pane_g9

0x634b,	// (0x0008b3b0) main_camera2_pane_t5_ParamLimits

0x634b,	// (0x0008b3b0) main_camera2_pane_t5

0xc2e7,	// (0x0009134c) main_camera2_pane_t6_ParamLimits

0xc2e7,	// (0x0009134c) main_camera2_pane_t6

0x678c,	// (0x0008b7f1) main_image2_pane_g1_ParamLimits

0x678c,	// (0x0008b7f1) main_image2_pane_g1

0x512e,	// (0x0008a193) smil2_video_pane_ParamLimits

0x512e,	// (0x0008a193) smil2_video_pane

0xb2fb,	// (0x00090360) aid_zoom_text_primary_cp

0xb33b,	// (0x000903a0) popup_preview_fixed_window

0x2cfe,	// (0x00087d63) im_reading_pane_g1

0x6094,	// (0x0008b0f9) cams2_bc_adjust_pane_cp_ParamLimits

0x6094,	// (0x0008b0f9) cams2_bc_adjust_pane_cp

0x637a,	// (0x0008b3df) cams2_bc_adjust_pane_ParamLimits

0x637a,	// (0x0008b3df) cams2_bc_adjust_pane

0xc47f,	// (0x000914e4) cams2_bc_adjust_pane_g1

0xc487,	// (0x000914ec) cams2_slider_pane

0xc490,	// (0x000914f5) cams2_slider_pane_g1

0xc499,	// (0x000914fe) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000946fd) cams2_slider_pane_g

0x19e1,	// (0x00086a46) calc_display_pane_ParamLimits

0x1a09,	// (0x00086a6e) calc_paper_pane_ParamLimits

0x1a2c,	// (0x00086a91) grid_calc_pane_ParamLimits

0xb47b,	// (0x000904e0) popup_clock_digital_window_t1_ParamLimits

0x4fb5,	// (0x0008a01a) main_image_pane_t1

0x19c3,	// (0x00086a28) aid_size_cell_calc_ParamLimits

0x19c3,	// (0x00086a28) aid_size_cell_calc

0x5b58,	// (0x0008abbd) popup_blid_sat_info2_window_ParamLimits

0x5b58,	// (0x0008abbd) popup_blid_sat_info2_window

0xc4bb,	// (0x00091520) aid_size_cell_blid

0xc4c3,	// (0x00091528) bg_popup_window_pane_cp07

0xc4e6,	// (0x0009154b) grid_popup_blid_pane

0xc4f0,	// (0x00091555) heading_pane_cp05_ParamLimits

0xc4f0,	// (0x00091555) heading_pane_cp05

0xc5ba,	// (0x0009161f) cell_popup_blid_pane_ParamLimits

0xc5ba,	// (0x0009161f) cell_popup_blid_pane

0xc5de,	// (0x00091643) cell_popup_blid_pane_g1

0xc5e6,	// (0x0009164b) cell_popup_blid_pane_t1

0x6627,	// (0x0008b68c) mup2_indicator_pane_ParamLimits

0x6627,	// (0x0008b68c) mup2_indicator_pane

0x4666,	// (0x000896cb) mup2_visualizer_osc_pane

0xc323,	// (0x00091388) mup2_visualizer_spec_pane_ParamLimits

0xc323,	// (0x00091388) mup2_visualizer_spec_pane

0x67a2,	// (0x0008b807) mup2_spec_half_pane

0x67ab,	// (0x0008b810) mup2_spec_half_pane_cp

0x67b3,	// (0x0008b818) mup2_spec_bar_pane_ParamLimits

0x67b3,	// (0x0008b818) mup2_spec_bar_pane

0xc272,	// (0x000912d7) mup2_spec_bar_pane_g1

0xc27c,	// (0x000912e1) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x00094670) mup2_spec_bar_pane_g

0x67d3,	// (0x0008b838) mup2_osc_middle_pane

0xc28e,	// (0x000912f3) mup2_visualizer_osc_pane_g1

0xebfb,	// (0x00093c60) popup_number_entry_window_t1_ParamLimits

0xec0e,	// (0x00093c73) popup_number_entry_window_t2_ParamLimits

0xec20,	// (0x00093c85) popup_number_entry_window_t3_ParamLimits

0x139e,	// (0x00086403) popup_number_entry_window_t5_ParamLimits

0x139e,	// (0x00086403) popup_number_entry_window_t5

0xf0cd,	// (0x00094132) popup_number_entry_window_t_ParamLimits

0xec32,	// (0x00093c97) text_title_cp2_ParamLimits

0xb4ba,	// (0x0009051f) aid_hotspot_pointer_text2_pane

0xb4e0,	// (0x00090545) main_viewer_pane_g9_ParamLimits

0xb4e0,	// (0x00090545) main_viewer_pane_g9

0x34e8,	// (0x0008854d) cale_month_pane_t1_ParamLimits

0x3be9,	// (0x00088c4e) bg_cale_pane_ParamLimits

0x3c01,	// (0x00088c66) list_cale_pane_ParamLimits

0x3c12,	// (0x00088c77) listscroll_cale_day_pane_t1

0x3c24,	// (0x00088c89) scroll_pane_cp09_ParamLimits

0x49d2,	// (0x00089a37) main_mup_eq_pane_t1_ParamLimits

0x49d2,	// (0x00089a37) main_mup_eq_pane_t1

0x49ec,	// (0x00089a51) main_mup_eq_pane_t2_ParamLimits

0x49ec,	// (0x00089a51) main_mup_eq_pane_t2

0x4a06,	// (0x00089a6b) main_mup_eq_pane_t3_ParamLimits

0x4a06,	// (0x00089a6b) main_mup_eq_pane_t3

0x4a22,	// (0x00089a87) main_mup_eq_pane_t4_ParamLimits

0x4a22,	// (0x00089a87) main_mup_eq_pane_t4

0x4a3e,	// (0x00089aa3) main_mup_eq_pane_t5_ParamLimits

0x4a3e,	// (0x00089aa3) main_mup_eq_pane_t5

0x4a5a,	// (0x00089abf) main_mup_eq_pane_t6_ParamLimits

0x4a5a,	// (0x00089abf) main_mup_eq_pane_t6

0x4a6e,	// (0x00089ad3) main_mup_eq_pane_t7_ParamLimits

0x4a6e,	// (0x00089ad3) main_mup_eq_pane_t7

0x4a82,	// (0x00089ae7) main_mup_eq_pane_t8_ParamLimits

0x4a82,	// (0x00089ae7) main_mup_eq_pane_t8

0x4a96,	// (0x00089afb) main_mup_eq_pane_t9_ParamLimits

0x4a96,	// (0x00089afb) main_mup_eq_pane_t9

0x4ab0,	// (0x00089b15) main_mup_eq_pane_t10_ParamLimits

0x4ab0,	// (0x00089b15) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000944bf) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000944bf) main_mup_eq_pane_t

0x4b5f,	// (0x00089bc4) mup_equalizer_pane_cp5_ParamLimits

0x4b73,	// (0x00089bd8) mup_equalizer_pane_cp6_ParamLimits

0x4b87,	// (0x00089bec) mup_equalizer_pane_cp7_ParamLimits

0xebd1,	// (0x00093c36) main_gallery_pane

0xc297,	// (0x000912fc) smil2_volume_pane

0xc29f,	// (0x00091304) smil_status_volume_pane_g1_ParamLimits

0xc2b2,	// (0x00091317) smil_status_volume_pane_g2_ParamLimits

0xc2c5,	// (0x0009132a) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x00094675) smil_status_volume_pane_g_ParamLimits

0xc4c3,	// (0x00091528) bg_popup_window_pane_cp07_ParamLimits

0xc4d1,	// (0x00091536) blid_firmament_pane

0x67dc,	// (0x0008b841) aid_size_cell_gallery_ParamLimits

0x67dc,	// (0x0008b841) aid_size_cell_gallery

0x67f2,	// (0x0008b857) grid_gallery_pane_ParamLimits

0x67f2,	// (0x0008b857) grid_gallery_pane

0x680b,	// (0x0008b870) cell_gallery_pane_ParamLimits

0x680b,	// (0x0008b870) cell_gallery_pane

0xc5f4,	// (0x00091659) bg_cell_gallery_focus_pane_ParamLimits

0xc5f4,	// (0x00091659) bg_cell_gallery_focus_pane

0xc606,	// (0x0009166b) cell_gallery_pane_g1_ParamLimits

0xc606,	// (0x0009166b) cell_gallery_pane_g1

0x6854,	// (0x0008b8b9) cell_gallery_pane_g2_ParamLimits

0x6854,	// (0x0008b8b9) cell_gallery_pane_g2

0x6861,	// (0x0008b8c6) cell_gallery_pane_g3_ParamLimits

0x6861,	// (0x0008b8c6) cell_gallery_pane_g3

0xc612,	// (0x00091677) cell_gallery_pane_g4_ParamLimits

0xc612,	// (0x00091677) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x00094723) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x00094723) cell_gallery_pane_g

0xc61e,	// (0x00091683) bg_cell_gallery_focus_pane_g1

0xc626,	// (0x0009168b) bg_cell_gallery_focus_pane_g2

0xc62e,	// (0x00091693) bg_cell_gallery_focus_pane_g3

0xc636,	// (0x0009169b) bg_cell_gallery_focus_pane_g4

0xc63e,	// (0x000916a3) bg_cell_gallery_focus_pane_g5

0xc646,	// (0x000916ab) bg_cell_gallery_focus_pane_g6

0xc64e,	// (0x000916b3) bg_cell_gallery_focus_pane_g7

0xc656,	// (0x000916bb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0009472c) bg_cell_gallery_focus_pane_g

0xc65e,	// (0x000916c3) aid_firma_cardinal

0xc672,	// (0x000916d7) blid_firmament_pane_t1

0xc689,	// (0x000916ee) blid_firmament_pane_t2

0xc6a0,	// (0x00091705) blid_firmament_pane_t3

0xc6b7,	// (0x0009171c) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0009473d) blid_firmament_pane_t

0xc6ce,	// (0x00091733) blid_sat_info_pane

0xc6de,	// (0x00091743) blid_sat_info_pane_g1

0xc6de,	// (0x00091743) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x00094746) blid_sat_info_pane_g

0xc6e8,	// (0x0009174d) blid_sat_info_pane_t1

0xc6f6,	// (0x0009175b) smil2_volume_content_pane

0xc6ff,	// (0x00091764) smil2_volume_pane_g1

0xc707,	// (0x0009176c) smil2_volume_content_pane_g1

0xc710,	// (0x00091775) smil2_volume_content_pane_g2

0xc719,	// (0x0009177e) smil2_volume_content_pane_g3

0xc722,	// (0x00091787) smil2_volume_content_pane_g4

0xc72b,	// (0x00091790) smil2_volume_content_pane_g5

0xc734,	// (0x00091799) smil2_volume_content_pane_g6

0xc73d,	// (0x000917a2) smil2_volume_content_pane_g7

0xc746,	// (0x000917ab) smil2_volume_content_pane_g8

0xc74f,	// (0x000917b4) smil2_volume_content_pane_g9

0xc758,	// (0x000917bd) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0009474b) smil2_volume_content_pane_g

0x2143,	// (0x000871a8) cale_week_day_heading_pane_t1_ParamLimits

0x2188,	// (0x000871ed) cale_week_day_heading_pane_t2_ParamLimits

0x21d2,	// (0x00087237) cale_week_day_heading_pane_t3_ParamLimits

0x221c,	// (0x00087281) cale_week_day_heading_pane_t4_ParamLimits

0x2266,	// (0x000872cb) cale_week_day_heading_pane_t5_ParamLimits

0x22b8,	// (0x0008731d) cale_week_day_heading_pane_t6_ParamLimits

0x230a,	// (0x0008736f) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x00094237) cale_week_day_heading_pane_t_ParamLimits

0x234f,	// (0x000873b4) bg_cale_side_pane_ParamLimits

0x235d,	// (0x000873c2) cale_week_time_pane_t1_ParamLimits

0x2377,	// (0x000873dc) cale_week_time_pane_t2_ParamLimits

0x2391,	// (0x000873f6) cale_week_time_pane_t3_ParamLimits

0x23ab,	// (0x00087410) cale_week_time_pane_t4_ParamLimits

0x23c5,	// (0x0008742a) cale_week_time_pane_t5_ParamLimits

0x23df,	// (0x00087444) cale_week_time_pane_t6_ParamLimits

0x23f9,	// (0x0008745e) cale_week_time_pane_t7_ParamLimits

0x2413,	// (0x00087478) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x00094246) cale_week_time_pane_t_ParamLimits

0x2433,	// (0x00087498) cell_cale_week_pane_g2_ParamLimits

0x234f,	// (0x000873b4) bg_cale_side_pane_cp01_ParamLimits

0x3984,	// (0x000889e9) cale_month_week_pane_t1_ParamLimits

0x399d,	// (0x00088a02) cale_month_week_pane_t2_ParamLimits

0x39b6,	// (0x00088a1b) cale_month_week_pane_t3_ParamLimits

0x39cf,	// (0x00088a34) cale_month_week_pane_t4_ParamLimits

0x39e8,	// (0x00088a4d) cale_month_week_pane_t5_ParamLimits

0x3a01,	// (0x00088a66) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0009431f) cale_month_week_pane_t_ParamLimits

0xb3eb,	// (0x00090450) cell_cale_month_pane_g1_ParamLimits

0xebd1,	// (0x00093c36) main_cale_event_viewer_pane

0xebd1,	// (0x00093c36) listscroll_cale_event_viewer_pane

0xc761,	// (0x000917c6) list_cale_ev_pane

0xc769,	// (0x000917ce) scroll_pane_cp023

0xc775,	// (0x000917da) field_cale_ev_pane_ParamLimits

0xc775,	// (0x000917da) field_cale_ev_pane

0xc793,	// (0x000917f8) field_cale_ev_content_pane_ParamLimits

0xc793,	// (0x000917f8) field_cale_ev_content_pane

0xc79f,	// (0x00091804) field_cale_ev_pane_g1_ParamLimits

0xc79f,	// (0x00091804) field_cale_ev_pane_g1

0xc7ab,	// (0x00091810) field_cale_ev_pane_g2_ParamLimits

0xc7ab,	// (0x00091810) field_cale_ev_pane_g2

0xc7c3,	// (0x00091828) field_cale_ev_pane_g3_ParamLimits

0xc7c3,	// (0x00091828) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x00094760) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x00094760) field_cale_ev_pane_g

0xc7db,	// (0x00091840) field_cale_ev_pane_t1_ParamLimits

0xc7db,	// (0x00091840) field_cale_ev_pane_t1

0xc7f2,	// (0x00091857) field_cale_ev_content_pane_t1_ParamLimits

0xc7f2,	// (0x00091857) field_cale_ev_content_pane_t1

0x4c31,	// (0x00089c96) bg_button_pane_cp01

0x1e3e,	// (0x00086ea3) listscroll_cale_week_pane_ParamLimits

0x1e50,	// (0x00086eb5) popup_toolbar_window_cp01

0x2086,	// (0x000870eb) listscroll_cale_week_pane_t1_ParamLimits

0x1e3e,	// (0x00086ea3) listscroll_cale_day_pane_ParamLimits

0x1e50,	// (0x00086eb5) popup_toolbar_window_cp02

0x3c12,	// (0x00088c77) listscroll_cale_day_pane_t1_ParamLimits

0x1e3e,	// (0x00086ea3) main_cale_month_pane_ParamLimits

0xc210,	// (0x00091275) popup_toolbar_window_cp03_ParamLimits

0xc210,	// (0x00091275) popup_toolbar_window_cp03

0x4f93,	// (0x00089ff8) main_image_pane_g2_ParamLimits

0x4f93,	// (0x00089ff8) main_image_pane_g2

0x4fa4,	// (0x0008a009) main_image_pane_g3_ParamLimits

0x4fa4,	// (0x0008a009) main_image_pane_g3

0x0002,

0xf4ec,	// (0x00094551) main_image_pane_g_ParamLimits

0xf4ec,	// (0x00094551) main_image_pane_g

0x4fb5,	// (0x0008a01a) main_image_pane_t1_ParamLimits

0x4fcc,	// (0x0008a031) main_image_pane_t2_ParamLimits

0x4fcc,	// (0x0008a031) main_image_pane_t2

0x4fde,	// (0x0008a043) main_image_pane_t3_ParamLimits

0x4fde,	// (0x0008a043) main_image_pane_t3

0x5006,	// (0x0008a06b) main_image_pane_t4_ParamLimits

0x5006,	// (0x0008a06b) main_image_pane_t4

0x0003,

0xf4f3,	// (0x00094558) main_image_pane_t_ParamLimits

0xf4f3,	// (0x00094558) main_image_pane_t

0x5026,	// (0x0008a08b) popup_image_details_window_cp01

0x5030,	// (0x0008a095) popup_toobar_trans_pane_cp01_ParamLimits

0x5030,	// (0x0008a095) popup_toobar_trans_pane_cp01

0x5c37,	// (0x0008ac9c) popup_image_details_window_ParamLimits

0x5c37,	// (0x0008ac9c) popup_image_details_window

0xc1e3,	// (0x00091248) popup_image_focus_window

0x604e,	// (0x0008b0b3) camera2_autofocus_pane_ParamLimits

0x604e,	// (0x0008b0b3) camera2_autofocus_pane

0xebd1,	// (0x00093c36) bg_popup_sub_pane_cp06

0xc810,	// (0x00091875) popup_image_focus_window_g1

0xc818,	// (0x0009187d) popup_image_focus_window_g2

0xc820,	// (0x00091885) popup_image_focus_window_g3

0xc828,	// (0x0009188d) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x00094767) popup_image_focus_window_g

0xc830,	// (0x00091895) popup_image_focus_window_t1

0xc83e,	// (0x000918a3) popup_image_focus_window_t2

0xc84e,	// (0x000918b3) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x00094770) popup_image_focus_window_t

0xc85c,	// (0x000918c1) camera2_autofocus_pane_g1

0x1332,	// (0x00086397) bg_tb_trans_pane_cp01

0xc86a,	// (0x000918cf) popup_image_details_window_g1

0xc87d,	// (0x000918e2) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x00094782) popup_image_details_window_g

0xc8a6,	// (0x0009190b) popup_image_details_window_t1

0xc8b8,	// (0x0009191d) popup_image_details_window_t2

0xc8d1,	// (0x00091936) popup_image_details_window_t3

0xc8e5,	// (0x0009194a) popup_image_details_window_t4

0xc900,	// (0x00091965) popup_image_details_window_t5

0x0004,

0xf724,	// (0x00094789) popup_image_details_window_t

0x1b54,	// (0x00086bb9) bg_calc_paper_pane_ParamLimits

0xebd1,	// (0x00093c36) grid_highlight_pane_cp013

0xb34d,	// (0x000903b2) list_calc_pane_ParamLimits

0xb35f,	// (0x000903c4) scroll_pane_cp024

0x1b68,	// (0x00086bcd) bg_calc_display_pane_ParamLimits

0x1b74,	// (0x00086bd9) calc_display_pane_t1_ParamLimits

0x1b86,	// (0x00086beb) calc_display_pane_t2_ParamLimits

0xb367,	// (0x000903cc) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000941b9) calc_display_pane_t_ParamLimits

0x1c93,	// (0x00086cf8) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000941d6) cell_calc_pane_g

0x1c9c,	// (0x00086d01) cell_calc_pane_t1

0x1cab,	// (0x00086d10) grid_highlight_pane_cp02_ParamLimits

0x1cc1,	// (0x00086d26) toolbar_button_pane_cp01_ParamLimits

0x1cc1,	// (0x00086d26) toolbar_button_pane_cp01

0x5072,	// (0x0008a0d7) temp_image_control_pane_ParamLimits

0x5072,	// (0x0008a0d7) temp_image_control_pane

0x1332,	// (0x00086397) main_mp3_pane

0xc91a,	// (0x0009197f) temp_image_control_pane_g1_ParamLimits

0xc91a,	// (0x0009197f) temp_image_control_pane_g1

0xc928,	// (0x0009198d) temp_image_control_pane_g2_ParamLimits

0xc928,	// (0x0009198d) temp_image_control_pane_g2

0xc93a,	// (0x0009199f) temp_image_control_pane_g3_ParamLimits

0xc93a,	// (0x0009199f) temp_image_control_pane_g3

0x689e,	// (0x0008b903) temp_image_control_pane_g4_ParamLimits

0x689e,	// (0x0008b903) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x00094794) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x00094794) temp_image_control_pane_g

0xc91a,	// (0x0009197f) main_mp3_pane_g1

0x68b1,	// (0x0008b916) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0009479d) main_mp3_pane_g

0xc97d,	// (0x000919e2) main_mp3_pane_t1

0x260e,	// (0x00087673) main_camera_pane_g8_ParamLimits

0x260e,	// (0x00087673) main_camera_pane_g8

0x27b6,	// (0x0008781b) main_video_pane_g7_ParamLimits

0x27b6,	// (0x0008781b) main_video_pane_g7

0xc305,	// (0x0009136a) main_camera2_pane_t7_ParamLimits

0xc305,	// (0x0009136a) main_camera2_pane_t7

0x2dc6,	// (0x00087e2b) scroll_pane_cp025_ParamLimits

0x2dc6,	// (0x00087e2b) scroll_pane_cp025

0x2dda,	// (0x00087e3f) scroll_pane_cp026_ParamLimits

0x2dda,	// (0x00087e3f) scroll_pane_cp026

0x2de9,	// (0x00087e4e) wml_content_pane_ParamLimits

0xebd1,	// (0x00093c36) main_touch_calib_pane

0x6985,	// (0x0008b9ea) main_touch_calib_pane_g1

0x6997,	// (0x0008b9fc) main_touch_calib_pane_g2

0x69a9,	// (0x0008ba0e) main_touch_calib_pane_g3

0x69bb,	// (0x0008ba20) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000947bb) main_touch_calib_pane_g

0x69cd,	// (0x0008ba32) main_touch_calib_pane_t1

0x69e7,	// (0x0008ba4c) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000947c4) main_touch_calib_pane_t

0x44bf,	// (0x00089524) mup_progress_pane_cp02

0x44f4,	// (0x00089559) navi_pane_g1

0x45af,	// (0x00089614) navi_pane_mp_t3

0x1332,	// (0x00086397) main_mp3_pane_ParamLimits

0x5dbc,	// (0x0008ae21) navi_pane_ParamLimits

0xc91a,	// (0x0009197f) main_mp3_pane_g1_ParamLimits

0x68b1,	// (0x0008b916) main_mp3_pane_g2_ParamLimits

0x68bf,	// (0x0008b924) main_mp3_pane_g3_ParamLimits

0x68bf,	// (0x0008b924) main_mp3_pane_g3

0x68cd,	// (0x0008b932) main_mp3_pane_g4_ParamLimits

0x68cd,	// (0x0008b932) main_mp3_pane_g4

0xc94a,	// (0x000919af) main_mp3_pane_g5_ParamLimits

0xc94a,	// (0x000919af) main_mp3_pane_g5

0xc958,	// (0x000919bd) main_mp3_pane_g6_ParamLimits

0xc958,	// (0x000919bd) main_mp3_pane_g6

0xc965,	// (0x000919ca) main_mp3_pane_g7_ParamLimits

0xc965,	// (0x000919ca) main_mp3_pane_g7

0xc971,	// (0x000919d6) main_mp3_pane_g8_ParamLimits

0xc971,	// (0x000919d6) main_mp3_pane_g8

0xf738,	// (0x0009479d) main_mp3_pane_g_ParamLimits

0x68d9,	// (0x0008b93e) main_mp3_pane_t2

0x68e7,	// (0x0008b94c) main_mp3_pane_t3

0xc98b,	// (0x000919f0) main_mp3_pane_t4

0xc999,	// (0x000919fe) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000947ae) main_mp3_pane_t

0xc9a7,	// (0x00091a0c) mup_progress_pane_cp01

0xb2fb,	// (0x00090360) aid_zoom_text_secondary2

0xc761,	// (0x000917c6) list_cale_ev2_pane

0xc769,	// (0x000917ce) scroll_pane_cp023_ParamLimits

0x6a3d,	// (0x0008baa2) field_cale_ev2_pane_ParamLimits

0x6a3d,	// (0x0008baa2) field_cale_ev2_pane

0x6a5d,	// (0x0008bac2) field_cale_ev2_pane_g1_ParamLimits

0x6a5d,	// (0x0008bac2) field_cale_ev2_pane_g1

0x6a69,	// (0x0008bace) field_cale_ev2_pane_g2_ParamLimits

0x6a69,	// (0x0008bace) field_cale_ev2_pane_g2

0x6a81,	// (0x0008bae6) field_cale_ev2_pane_g3_ParamLimits

0x6a81,	// (0x0008bae6) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000947cf) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000947cf) field_cale_ev2_pane_g

0xc9bb,	// (0x00091a20) field_cale_ev2_pane_t1_ParamLimits

0xc9bb,	// (0x00091a20) field_cale_ev2_pane_t1

0xc9d2,	// (0x00091a37) field_cale_ev2_pane_t2_ParamLimits

0xc9d2,	// (0x00091a37) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000947d8) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000947d8) field_cale_ev2_pane_t

0x4d62,	// (0x00089dc7) main_postcard_pane_g5_ParamLimits

0x4d62,	// (0x00089dc7) main_postcard_pane_g5

0x4d78,	// (0x00089ddd) main_postcard_pane_g6_ParamLimits

0x4d78,	// (0x00089ddd) main_postcard_pane_g6

0x255c,	// (0x000875c1) camera2_autofocus_pane_cp_ParamLimits

0x255c,	// (0x000875c1) camera2_autofocus_pane_cp

0x1332,	// (0x00086397) main_mup3_pane

0x6a99,	// (0x0008bafe) main_mup3_pane_g1_ParamLimits

0x6a99,	// (0x0008bafe) main_mup3_pane_g1

0x6abb,	// (0x0008bb20) main_mup3_pane_g2_ParamLimits

0x6abb,	// (0x0008bb20) main_mup3_pane_g2

0x6b39,	// (0x0008bb9e) main_mup3_pane_g3_ParamLimits

0x6b39,	// (0x0008bb9e) main_mup3_pane_g3

0x6b7f,	// (0x0008bbe4) main_mup3_pane_g4_ParamLimits

0x6b7f,	// (0x0008bbe4) main_mup3_pane_g4

0x6bc5,	// (0x0008bc2a) main_mup3_pane_g5_ParamLimits

0x6bc5,	// (0x0008bc2a) main_mup3_pane_g5

0x6c0b,	// (0x0008bc70) main_mup3_pane_g6_ParamLimits

0x6c0b,	// (0x0008bc70) main_mup3_pane_g6

0xca07,	// (0x00091a6c) main_mup3_pane_g7_ParamLimits

0xca07,	// (0x00091a6c) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000947e8) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000947e8) main_mup3_pane_g

0x6c89,	// (0x0008bcee) main_mup3_pane_t1_ParamLimits

0x6c89,	// (0x0008bcee) main_mup3_pane_t1

0x6cfd,	// (0x0008bd62) main_mup3_pane_t2_ParamLimits

0x6cfd,	// (0x0008bd62) main_mup3_pane_t2

0x6dd1,	// (0x0008be36) main_mup3_pane_t4_ParamLimits

0x6dd1,	// (0x0008be36) main_mup3_pane_t4

0x6e27,	// (0x0008be8c) main_mup3_pane_t5_ParamLimits

0x6e27,	// (0x0008be8c) main_mup3_pane_t5

0x6ee3,	// (0x0008bf48) main_mup3_pane_t6_ParamLimits

0x6ee3,	// (0x0008bf48) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000947f9) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000947f9) main_mup3_pane_t

0x6f9b,	// (0x0008c000) mup3_progress_pane_ParamLimits

0x6f9b,	// (0x0008c000) mup3_progress_pane

0x7031,	// (0x0008c096) popup_mup3_control_window_ParamLimits

0x7031,	// (0x0008c096) popup_mup3_control_window

0xca15,	// (0x00091a7a) popup_mup3_text_window

0x7063,	// (0x0008c0c8) mup3_progress_pane_t1

0x7082,	// (0x0008c0e7) mup3_progress_pane_t2

0xca1d,	// (0x00091a82) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x00094806) mup3_progress_pane_t

0xca3a,	// (0x00091a9f) mup_progress_pane_cp03

0xebd1,	// (0x00093c36) bg_tb_trans_pane_cp04

0x70a1,	// (0x0008c106) mup3_volume_pane

0x70a9,	// (0x0008c10e) popup_mup3_control_window_g1

0x70b2,	// (0x0008c117) mup3_volume_pane_g1

0x70bb,	// (0x0008c120) mup3_volume_pane_g2

0x70c4,	// (0x0008c129) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0009480d) mup3_volume_pane_g

0xebd1,	// (0x00093c36) bg_tb_trans_pane_cp03

0xca4a,	// (0x00091aaf) popup_mup3_text_window_g1

0xca52,	// (0x00091ab7) popup_mup3_text_window_t1

0x1c62,	// (0x00086cc7) list_calc_item_pane_g1_ParamLimits

0xc3ed,	// (0x00091452) mup_volume_pane_cp_g1

0x6a01,	// (0x0008ba66) main_touch_calib_pane_t3

0x6a15,	// (0x0008ba7a) main_touch_calib_pane_t4

0x6a29,	// (0x0008ba8e) main_touch_calib_pane_t5

0xb2d7,	// (0x0009033c) aid_cell_size_toolbar2

0xb2df,	// (0x00090344) aid_popup3_width_pane

0xb2eb,	// (0x00090350) aid_zoom_text_msg_primary

0x2533,	// (0x00087598) vorec_t7

0x1bcd,	// (0x00086c32) bg_calc_paper_pane_g1_ParamLimits

0x1bd9,	// (0x00086c3e) bg_calc_paper_pane_g2_ParamLimits

0x1be5,	// (0x00086c4a) bg_calc_paper_pane_g3_ParamLimits

0x1bf1,	// (0x00086c56) bg_calc_paper_pane_g4_ParamLimits

0x1bfd,	// (0x00086c62) bg_calc_paper_pane_g5_ParamLimits

0x1c09,	// (0x00086c6e) bg_calc_paper_pane_g6_ParamLimits

0x1c18,	// (0x00086c7d) bg_calc_paper_pane_g7_ParamLimits

0x1c27,	// (0x00086c8c) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000941c0) bg_calc_paper_pane_g_ParamLimits

0x1c3a,	// (0x00086c9f) calc_bg_paper_pane_g9_ParamLimits

0x26b3,	// (0x00087718) image_qvga_pane_ParamLimits

0x26b3,	// (0x00087718) image_qvga_pane

0x17fc,	// (0x00086861) bg_popup_sub_pane_cp04_ParamLimits

0x4ef1,	// (0x00089f56) popup_mup_playback_window_g1_ParamLimits

0x4efd,	// (0x00089f62) popup_mup_playback_window_t1_ParamLimits

0x4f12,	// (0x00089f77) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0009454c) popup_mup_playback_window_t_ParamLimits

0x6541,	// (0x0008b5a6) main_mup2_pane_g3_ParamLimits

0x6541,	// (0x0008b5a6) main_mup2_pane_g3

0x2a59,	// (0x00087abe) popup_toolbar_window_cp04

0x56f4,	// (0x0008a759) popup_call2_audio_second_window_g3_ParamLimits

0x56f4,	// (0x0008a759) popup_call2_audio_second_window_g3

0xb7d7,	// (0x0009083c) popup_call2_audio_first_window_g4_ParamLimits

0xb7d7,	// (0x0009083c) popup_call2_audio_first_window_g4

0xbe56,	// (0x00090ebb) popup_call2_audio_in_window_g4_ParamLimits

0xbe56,	// (0x00090ebb) popup_call2_audio_in_window_g4

0x4f27,	// (0x00089f8c) aid_area_sk_bg_cut_ParamLimits

0x4f27,	// (0x00089f8c) aid_area_sk_bg_cut

0x4f45,	// (0x00089faa) aid_area_sk_bg_cut_2_ParamLimits

0x4f45,	// (0x00089faa) aid_area_sk_bg_cut_2

0x6844,	// (0x0008b8a9) aid_placing_details_win

0x684c,	// (0x0008b8b1) aid_placing_details_win_2

0xc85c,	// (0x000918c1) camera2_autofocus_pane_g1_ParamLimits

0x12d7,	// (0x0008633c) popup_fixed_preview_cale_window_ParamLimits

0x12d7,	// (0x0008633c) popup_fixed_preview_cale_window

0x4677,	// (0x000896dc) navi_slider_pane_g3

0x4680,	// (0x000896e5) navi_slider_pane_g4

0x4689,	// (0x000896ee) navi_slider_pane_g5

0x4677,	// (0x000896dc) navi_slider_pane_g6

0xb4a1,	// (0x00090506) navi_slider_pane_g7

0x4ba4,	// (0x00089c09) mup_scale_pane_g3

0x4bad,	// (0x00089c12) mup_scale_pane_g4

0x4bb6,	// (0x00089c1b) mup_scale_pane_g5

0x4bbf,	// (0x00089c24) mup_scale_pane_g6

0x4bc8,	// (0x00089c2d) mup_scale_pane_g7

0x4677,	// (0x000896dc) cams2_slider_pane_g3

0xc4a2,	// (0x00091507) cams2_slider_pane_g4

0xc4aa,	// (0x0009150f) cams2_slider_pane_g5

0x4677,	// (0x000896dc) cams2_slider_pane_g6

0xc4b2,	// (0x00091517) cams2_slider_pane_g7

0xc6de,	// (0x00091743) camera2_autofocus_pane_cp_g1

0xc1b7,	// (0x0009121c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc1b7,	// (0x0009121c) bg_popup_preview_window_pane_cp02

0xca60,	// (0x00091ac5) list_fp_cale_pane_ParamLimits

0xca60,	// (0x00091ac5) list_fp_cale_pane

0xca6c,	// (0x00091ad1) popup_fixed_preview_cale_window_t1_ParamLimits

0xca6c,	// (0x00091ad1) popup_fixed_preview_cale_window_t1

0x70cd,	// (0x0008c132) popup_fixed_preview_cale_window_t2_ParamLimits

0x70cd,	// (0x0008c132) popup_fixed_preview_cale_window_t2

0x70e2,	// (0x0008c147) popup_fixed_preview_cale_window_t3_ParamLimits

0x70e2,	// (0x0008c147) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x00094814) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x00094814) popup_fixed_preview_cale_window_t

0x70f7,	// (0x0008c15c) list_single_fp_cale_pane_ParamLimits

0x70f7,	// (0x0008c15c) list_single_fp_cale_pane

0xca8a,	// (0x00091aef) list_single_fp_cale_pane_g1_ParamLimits

0xca8a,	// (0x00091aef) list_single_fp_cale_pane_g1

0xca96,	// (0x00091afb) list_single_fp_cale_pane_g2_ParamLimits

0xca96,	// (0x00091afb) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0009481b) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0009481b) list_single_fp_cale_pane_g

0xcaaf,	// (0x00091b14) list_single_fp_cale_pane_t1_ParamLimits

0xcaaf,	// (0x00091b14) list_single_fp_cale_pane_t1

0xcac1,	// (0x00091b26) list_single_fp_cale_pane_t2_ParamLimits

0xcac1,	// (0x00091b26) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x00094822) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x00094822) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xebd1,	// (0x00093c36) main_dialer_pane

0x710c,	// (0x0008c171) aid_cell_size_keypad

0x7116,	// (0x0008c17b) dialer_ne_pane

0x711e,	// (0x0008c183) grid_dialer_command_1_pane

0x7126,	// (0x0008c18b) grid_dialer_command_2_pane

0x712e,	// (0x0008c193) grid_dialer_keypad_pane

0x7140,	// (0x0008c1a5) bg_popup_call_pane_cp06_ParamLimits

0x7140,	// (0x0008c1a5) bg_popup_call_pane_cp06

0x714c,	// (0x0008c1b1) dialer_ne_clear_pane_ParamLimits

0x714c,	// (0x0008c1b1) dialer_ne_clear_pane

0xcaf4,	// (0x00091b59) dialer_ne_pane_g1

0xcafc,	// (0x00091b61) dialer_ne_pane_t1_ParamLimits

0xcafc,	// (0x00091b61) dialer_ne_pane_t1

0x7158,	// (0x0008c1bd) dialer_ne_pane_t2_ParamLimits

0x7158,	// (0x0008c1bd) dialer_ne_pane_t2

0x7182,	// (0x0008c1e7) dialer_ne_pane_t3_ParamLimits

0x7182,	// (0x0008c1e7) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x00094827) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x00094827) dialer_ne_pane_t

0x71b2,	// (0x0008c217) dialer_ne_pane_t3_copy1_ParamLimits

0x71b2,	// (0x0008c217) dialer_ne_pane_t3_copy1

0x71e1,	// (0x0008c246) cell_dialer_keypad_pane_ParamLimits

0x71e1,	// (0x0008c246) cell_dialer_keypad_pane

0x71f8,	// (0x0008c25d) cell_dialer_command_1_pane_ParamLimits

0x71f8,	// (0x0008c25d) cell_dialer_command_1_pane

0x720e,	// (0x0008c273) cell_dialer_command_2_pane_ParamLimits

0x720e,	// (0x0008c273) cell_dialer_command_2_pane

0xcb0e,	// (0x00091b73) bg_button_pane_cp02_ParamLimits

0xcb0e,	// (0x00091b73) bg_button_pane_cp02

0x721d,	// (0x0008c282) cell_dialer_keypad_pane_g1_ParamLimits

0x721d,	// (0x0008c282) cell_dialer_keypad_pane_g1

0xcb0e,	// (0x00091b73) bg_button_pane_cp03_ParamLimits

0xcb0e,	// (0x00091b73) bg_button_pane_cp03

0x7231,	// (0x0008c296) cell_dialer_command_1_pane_g1_ParamLimits

0x7231,	// (0x0008c296) cell_dialer_command_1_pane_g1

0xcb1a,	// (0x00091b7f) bg_button_pane_cp04

0x7245,	// (0x0008c2aa) cell_dialer_command_2_pane_g1

0x4666,	// (0x000896cb) bg_button_pane_cp06

0xcb22,	// (0x00091b87) dialer_ne_clear_pane_g1

0x4500,	// (0x00089565) navi_pane_g2

0x452e,	// (0x00089593) navi_pane_g3

0x0002,

0xf3ea,	// (0x0009444f) navi_pane_g

0x45bd,	// (0x00089622) navi_pane_mv_g2

0x45e4,	// (0x00089649) navi_pane_mv_g5

0x45ec,	// (0x00089651) navi_pane_mv_t1

0x1b68,	// (0x00086bcd) main_clock2_pane

0x7290,	// (0x0008c2f5) main_clock2_list_pane_ParamLimits

0x7290,	// (0x0008c2f5) main_clock2_list_pane

0x72c8,	// (0x0008c32d) main_clock2_pane_t1_ParamLimits

0x72c8,	// (0x0008c32d) main_clock2_pane_t1

0x7304,	// (0x0008c369) main_clock2_pane_t2_ParamLimits

0x7304,	// (0x0008c369) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009482e) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009482e) main_clock2_pane_t

0x73a2,	// (0x0008c407) popup_clock_analogue_window_cp03_ParamLimits

0x73a2,	// (0x0008c407) popup_clock_analogue_window_cp03

0x73c7,	// (0x0008c42c) popup_clock_digital_window_cp02_ParamLimits

0x73c7,	// (0x0008c42c) popup_clock_digital_window_cp02

0x7438,	// (0x0008c49d) main_clock2_list_single_pane_ParamLimits

0x7438,	// (0x0008c49d) main_clock2_list_single_pane

0x4666,	// (0x000896cb) list_highlight_pane_cp05

0xcb40,	// (0x00091ba5) main_clock2_list_single_pane_t1

0x2a59,	// (0x00087abe) popup_toolbar_window_cp04_ParamLimits

0x686e,	// (0x0008b8d3) camera2_autofocus_pane_g2_ParamLimits

0x686e,	// (0x0008b8d3) camera2_autofocus_pane_g2

0x687a,	// (0x0008b8df) camera2_autofocus_pane_g3_ParamLimits

0x687a,	// (0x0008b8df) camera2_autofocus_pane_g3

0x6886,	// (0x0008b8eb) camera2_autofocus_pane_g4_ParamLimits

0x6886,	// (0x0008b8eb) camera2_autofocus_pane_g4

0x6892,	// (0x0008b8f7) camera2_autofocus_pane_g5_ParamLimits

0x6892,	// (0x0008b8f7) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x00094777) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x00094777) camera2_autofocus_pane_g

0xc9e7,	// (0x00091a4c) camera2_autofocus_pane_cp_g2

0xc9ef,	// (0x00091a54) camera2_autofocus_pane_cp_g3

0xc9f7,	// (0x00091a5c) camera2_autofocus_pane_cp_g4

0xc9ff,	// (0x00091a64) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000947dd) camera2_autofocus_pane_cp_g

0x7138,	// (0x0008c19d) popup_dialer_spcha_window

0xebd1,	// (0x00093c36) bg_popup_sub_pane_cp07

0xcb4e,	// (0x00091bb3) list_spcha_pane

0xcb56,	// (0x00091bbb) list_single_spcha_pane_ParamLimits

0xcb56,	// (0x00091bbb) list_single_spcha_pane

0xebd1,	// (0x00093c36) list_highlight_pane_cp06

0xcb67,	// (0x00091bcc) list_single_spcha_pane_t1

0xbc00,	// (0x00090c65) popup_call2_audio_out_window_g4_ParamLimits

0xbc00,	// (0x00090c65) popup_call2_audio_out_window_g4

0xebd1,	// (0x00093c36) main_imed2_pane

0xc1eb,	// (0x00091250) popup_imed_adjust2_window

0x5c4f,	// (0x0008acb4) popup_imed_trans_window_ParamLimits

0x5c4f,	// (0x0008acb4) popup_imed_trans_window

0xc51c,	// (0x00091581) popup_blid_sat_info2_window_t1

0xc52a,	// (0x0009158f) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0009470c) popup_blid_sat_info2_window_t

0x74e2,	// (0x0008c547) aid_size_cell_colour_35

0x7502,	// (0x0008c567) aid_size_cell_colour_112

0x7522,	// (0x0008c587) aid_size_cell_effect

0xc1c3,	// (0x00091228) bg_tb_trans_pane_cp02

0x3d62,	// (0x00088dc7) heading_imed_pane

0x7542,	// (0x0008c5a7) listscroll_imed_pane

0xcb75,	// (0x00091bda) heading_imed_pane_g1

0xcb7d,	// (0x00091be2) heading_imed_pane_t1

0xcb8b,	// (0x00091bf0) grid_imed_colour_35_pane_ParamLimits

0xcb8b,	// (0x00091bf0) grid_imed_colour_35_pane

0x754e,	// (0x0008c5b3) grid_imed_effect_pane

0xcba2,	// (0x00091c07) list_imed_aspect_pane

0x7564,	// (0x0008c5c9) scroll_pane_cp027_ParamLimits

0x7564,	// (0x0008c5c9) scroll_pane_cp027

0x7575,	// (0x0008c5da) cell_imed_effect_pane_ParamLimits

0x7575,	// (0x0008c5da) cell_imed_effect_pane

0xcbaa,	// (0x00091c0f) cell_imed_colour_pane_ParamLimits

0xcbaa,	// (0x00091c0f) cell_imed_colour_pane

0xcbec,	// (0x00091c51) cell_imed_colour_pane_g1_ParamLimits

0xcbec,	// (0x00091c51) cell_imed_colour_pane_g1

0xcbfd,	// (0x00091c62) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbfd,	// (0x00091c62) hgihlgiht_grid_pane_cp016

0x759c,	// (0x0008c601) cell_imed_effect_pane_g1

0x75a4,	// (0x0008c609) grid_highlight_pane_cp017

0xcc0e,	// (0x00091c73) list_imed_single_pane_ParamLimits

0xcc0e,	// (0x00091c73) list_imed_single_pane

0xebd1,	// (0x00093c36) list_highlight_pane_cp07

0xcc23,	// (0x00091c88) list_imed_aspect_pane_comp1_t1

0xc1c3,	// (0x00091228) bg_tb_trans_pane_cp05

0xcc45,	// (0x00091caa) popup_imed_adjust2_window_g1

0xcc6c,	// (0x00091cd1) popup_imed_adjust2_window_t1

0xcc84,	// (0x00091ce9) slider_imed_adjust_pane

0xcc98,	// (0x00091cfd) slider_imed_adjust_pane_g1

0xcca8,	// (0x00091d0d) slider_imed_adjust_pane_g2

0xccb8,	// (0x00091d1d) slider_imed_adjust_pane_g3

0xccc9,	// (0x00091d2e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009484b) slider_imed_adjust_pane_g

0x75ad,	// (0x0008c612) aid_size_cell_clipart2

0x75b9,	// (0x0008c61e) grid_imed_clipart_pane

0xccda,	// (0x00091d3f) scroll_pane_cp031

0x75c3,	// (0x0008c628) cell_imed_clipart_pane_ParamLimits

0x75c3,	// (0x0008c628) cell_imed_clipart_pane

0x75e5,	// (0x0008c64a) cell_imed_clipart_pane_g1

0xebd1,	// (0x00093c36) grid_highlight_pane_cp014

0x72a5,	// (0x0008c30a) main_clock2_pane_g1_ParamLimits

0x72a5,	// (0x0008c30a) main_clock2_pane_g1

0x73e3,	// (0x0008c448) aid_call2_pane_cp10

0x73f5,	// (0x0008c45a) aid_call_pane_cp10

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g1

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g2

0x7407,	// (0x0008c46c) popup_clock_analogue_window_cp10_g3

0x7407,	// (0x0008c46c) popup_clock_analogue_window_cp10_g4

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00094839) popup_clock_analogue_window_cp10_g

0x7419,	// (0x0008c47e) popup_clock_analogue_window_cp10_t1

0x744a,	// (0x0008c4af) clock_digital_number_pane_cp10_ParamLimits

0x744a,	// (0x0008c4af) clock_digital_number_pane_cp10

0x7462,	// (0x0008c4c7) clock_digital_number_pane_cp11_ParamLimits

0x7462,	// (0x0008c4c7) clock_digital_number_pane_cp11

0x747a,	// (0x0008c4df) clock_digital_number_pane_cp12_ParamLimits

0x747a,	// (0x0008c4df) clock_digital_number_pane_cp12

0x7492,	// (0x0008c4f7) clock_digital_number_pane_cp13_ParamLimits

0x7492,	// (0x0008c4f7) clock_digital_number_pane_cp13

0x74aa,	// (0x0008c50f) clock_digital_separator_pane_cp10_ParamLimits

0x74aa,	// (0x0008c50f) clock_digital_separator_pane_cp10

0x74c2,	// (0x0008c527) popup_clock_digital_window_cp02_t1_ParamLimits

0x74c2,	// (0x0008c527) popup_clock_digital_window_cp02_t1

0x17f4,	// (0x00086859) clock_digital_number_pane_cp10_g1

0x17f4,	// (0x00086859) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00094854) clock_digital_number_pane_cp10_g

0x17f4,	// (0x00086859) clock_digital_separator_pane_cp10_g1

0x17f4,	// (0x00086859) clock_digital_separator_pane_g2_cp10

0x462e,	// (0x00089693) navi_pane_vded_g4

0x4637,	// (0x0008969c) navi_pane_vded_g5

0x4640,	// (0x000896a5) navi_pane_vded_t1

0xebd1,	// (0x00093c36) main_vded_pane

0x75ee,	// (0x0008c653) main_vded_pane_g1

0x75f8,	// (0x0008c65d) main_vded_pane_g2

0x7602,	// (0x0008c667) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00094859) main_vded_pane_g

0x760c,	// (0x0008c671) main_vded_pane_t1

0x761a,	// (0x0008c67f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00094860) main_vded_pane_t

0x7628,	// (0x0008c68d) vded_slider_pane

0x7630,	// (0x0008c695) vded_video_pane

0xcce2,	// (0x00091d47) vded_video_pane_g1

0x7638,	// (0x0008c69d) vded_video_pane_g2

0xc6de,	// (0x00091743) vded_video_pane_g3

0x0002,

0xf800,	// (0x00094865) vded_video_pane_g

0xccec,	// (0x00091d51) vded_slider_pane_g1

0xc3ed,	// (0x00091452) vded_slider_pane_g2

0xccf5,	// (0x00091d5a) vded_slider_pane_g3

0xccfe,	// (0x00091d63) vded_slider_pane_g4

0xcd07,	// (0x00091d6c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009486c) vded_slider_pane_g

0x7019,	// (0x0008c07e) mup3_rocker_pane_ParamLimits

0x7019,	// (0x0008c07e) mup3_rocker_pane

0x7641,	// (0x0008c6a6) mup3_control_keys_pane_g1

0x7649,	// (0x0008c6ae) mup3_control_keys_pane_g2

0x7651,	// (0x0008c6b6) mup3_control_keys_pane_g3

0x7659,	// (0x0008c6be) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00094877) mup3_control_keys_pane_g

0x130e,	// (0x00086373) popup_toolbar2_fixed_window_cp01_ParamLimits

0x130e,	// (0x00086373) popup_toolbar2_fixed_window_cp01

0x704d,	// (0x0008c0b2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x704d,	// (0x0008c0b2) popup_toolbar2_fixed_window_cp02

0xb53f,	// (0x000905a4) popup_call2_audio_second_window_t4_ParamLimits

0xb53f,	// (0x000905a4) popup_call2_audio_second_window_t4

0xba6d,	// (0x00090ad2) popup_call2_audio_first_window_t6_ParamLimits

0xba6d,	// (0x00090ad2) popup_call2_audio_first_window_t6

0xbd03,	// (0x00090d68) popup_call2_audio_out_window_t6_ParamLimits

0xbd03,	// (0x00090d68) popup_call2_audio_out_window_t6

0xebd1,	// (0x00093c36) main_vitu_pane

0x7669,	// (0x0008c6ce) aid_size_cell_itu_ParamLimits

0x7669,	// (0x0008c6ce) aid_size_cell_itu

0x1332,	// (0x00086397) bg_popup_window_pane_cp08_ParamLimits

0x1332,	// (0x00086397) bg_popup_window_pane_cp08

0x767f,	// (0x0008c6e4) field_vitu_entry_pane_ParamLimits

0x767f,	// (0x0008c6e4) field_vitu_entry_pane

0x7696,	// (0x0008c6fb) grid_vitu_function_pane_ParamLimits

0x7696,	// (0x0008c6fb) grid_vitu_function_pane

0x76b1,	// (0x0008c716) grid_vitu_itu_pane_ParamLimits

0x76b1,	// (0x0008c716) grid_vitu_itu_pane

0x76cf,	// (0x0008c734) cell_vitu_itu_pane_ParamLimits

0x76cf,	// (0x0008c734) cell_vitu_itu_pane

0x76f1,	// (0x0008c756) cell_vitu_function_pane_ParamLimits

0x76f1,	// (0x0008c756) cell_vitu_function_pane

0x1332,	// (0x00086397) bg_popup_sub_pane_cp08_ParamLimits

0x1332,	// (0x00086397) bg_popup_sub_pane_cp08

0x770a,	// (0x0008c76f) field_vitu_entry_pane_t1_ParamLimits

0x770a,	// (0x0008c76f) field_vitu_entry_pane_t1

0xcd28,	// (0x00091d8d) field_vitu_entry_pane_t2_ParamLimits

0xcd28,	// (0x00091d8d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00094885) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00094885) field_vitu_entry_pane_t

0xcd45,	// (0x00091daa) bg_button_pane_cp05_ParamLimits

0xcd45,	// (0x00091daa) bg_button_pane_cp05

0x7728,	// (0x0008c78d) cell_vitu_itu_pane_g1

0x7740,	// (0x0008c7a5) cell_vitu_itu_pane_t1_ParamLimits

0x7740,	// (0x0008c7a5) cell_vitu_itu_pane_t1

0x7752,	// (0x0008c7b7) cell_vitu_itu_pane_t2_ParamLimits

0x7752,	// (0x0008c7b7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009488a) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009488a) cell_vitu_itu_pane_t

0xcd53,	// (0x00091db8) bg_button_pane_cp07

0x7787,	// (0x0008c7ec) cell_vitu_function_pane_g1

0xb345,	// (0x000903aa) main_calc_pane_g1

0x1135,	// (0x0008619a) aid_visual_content_pane

0xebd1,	// (0x00093c36) main_vradio_pane

0x7790,	// (0x0008c7f5) main_vradio_pane_g1_ParamLimits

0x7790,	// (0x0008c7f5) main_vradio_pane_g1

0xcd5d,	// (0x00091dc2) main_vradio_pane_g2_ParamLimits

0xcd5d,	// (0x00091dc2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00094891) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00094891) main_vradio_pane_g

0x77a9,	// (0x0008c80e) main_vradio_pane_t1_ParamLimits

0x77a9,	// (0x0008c80e) main_vradio_pane_t1

0x77be,	// (0x0008c823) main_vradio_pane_t2_ParamLimits

0x77be,	// (0x0008c823) main_vradio_pane_t2

0xcd6a,	// (0x00091dcf) main_vradio_pane_t3_ParamLimits

0xcd6a,	// (0x00091dcf) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00094896) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00094896) main_vradio_pane_t

0x77d3,	// (0x0008c838) vradio_rocker_control_pane_ParamLimits

0x77d3,	// (0x0008c838) vradio_rocker_control_pane

0x77e5,	// (0x0008c84a) vradio_station_info_pane_ParamLimits

0x77e5,	// (0x0008c84a) vradio_station_info_pane

0xcd7e,	// (0x00091de3) vradio_frequency_info_pane_ParamLimits

0xcd7e,	// (0x00091de3) vradio_frequency_info_pane

0xc6de,	// (0x00091743) vradio_station_info_pane_g1

0xcd8d,	// (0x00091df2) vradio_station_info_pane_t1_ParamLimits

0xcd8d,	// (0x00091df2) vradio_station_info_pane_t1

0xcdaf,	// (0x00091e14) vradio_station_info_pane_t2_ParamLimits

0xcdaf,	// (0x00091e14) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009489d) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009489d) vradio_station_info_pane_t

0xcdc1,	// (0x00091e26) vradio_tuning_pane

0xcdc9,	// (0x00091e2e) vradio_rocker_control_pane_g1

0xcdd1,	// (0x00091e36) vradio_rocker_control_pane_g2

0xcdd9,	// (0x00091e3e) vradio_rocker_control_pane_g3

0xcde1,	// (0x00091e46) vradio_rocker_control_pane_g4

0xcde9,	// (0x00091e4e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000948a2) vradio_rocker_control_pane_g

0x77f7,	// (0x0008c85c) vradio_frequency_info_pane_g1

0xcdf1,	// (0x00091e56) vradio_frequency_info_pane_t1_ParamLimits

0xcdf1,	// (0x00091e56) vradio_frequency_info_pane_t1

0x7801,	// (0x0008c866) vradio_tuning_pane_g1

0x780c,	// (0x0008c871) vradio_tuning_pane_t1

0xb303,	// (0x00090368) area_side_right_pane_ParamLimits

0xb303,	// (0x00090368) area_side_right_pane

0xc17e,	// (0x000911e3) status_small_pane_g1

0xc186,	// (0x000911eb) status_small_pane_g2

0xc18f,	// (0x000911f4) status_small_pane_g3

0xc198,	// (0x000911fd) status_small_pane_g4

0x0003,

0xf5fd,	// (0x00094662) status_small_pane_g

0xc1a1,	// (0x00091206) status_small_pane_t1

0xebd1,	// (0x00093c36) main_video3_pane

0xce05,	// (0x00091e6a) cams_zoom_vslider_pane

0xce0d,	// (0x00091e72) image3_wide_pane_ParamLimits

0xce0d,	// (0x00091e72) image3_wide_pane

0xce27,	// (0x00091e8c) image3_wide_small_pane

0xce33,	// (0x00091e98) main_video3_pane_g1_ParamLimits

0xce33,	// (0x00091e98) main_video3_pane_g1

0xce4f,	// (0x00091eb4) main_video3_pane_g2_ParamLimits

0xce4f,	// (0x00091eb4) main_video3_pane_g2

0x0001,

0xf848,	// (0x000948ad) main_video3_pane_g_ParamLimits

0xf848,	// (0x000948ad) main_video3_pane_g

0xce6b,	// (0x00091ed0) main_video3_pane_t1_ParamLimits

0xce6b,	// (0x00091ed0) main_video3_pane_t1

0xce96,	// (0x00091efb) main_video3_pane_t2_ParamLimits

0xce96,	// (0x00091efb) main_video3_pane_t2

0xcec1,	// (0x00091f26) main_video3_pane_t3_ParamLimits

0xcec1,	// (0x00091f26) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000948b2) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000948b2) main_video3_pane_t

0xceee,	// (0x00091f53) cams_zoom_vslider_pane_g1

0xcef7,	// (0x00091f5c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000948b9) cams_zoom_vslider_pane_g

0xceff,	// (0x00091f64) small_slider_vertical_pane

0xc6de,	// (0x00091743) small_slider_vertical_pane_g1

0xc6de,	// (0x00091743) small_slider_vertical_pane_g2

0xcf07,	// (0x00091f6c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000948be) small_slider_vertical_pane_g

0xebd1,	// (0x00093c36) main_hwr_training_pane

0xcf10,	// (0x00091f75) hwr_training_instruct_pane_ParamLimits

0xcf10,	// (0x00091f75) hwr_training_instruct_pane

0x781b,	// (0x0008c880) hwr_training_navi_pane_ParamLimits

0x781b,	// (0x0008c880) hwr_training_navi_pane

0x783a,	// (0x0008c89f) hwr_training_write_pane_ParamLimits

0x783a,	// (0x0008c89f) hwr_training_write_pane

0xebd1,	// (0x00093c36) bg_frame_shadow_pane

0xcf47,	// (0x00091fac) hwr_training_write_pane_g1

0xcf4f,	// (0x00091fb4) hwr_training_write_pane_g2

0xcf57,	// (0x00091fbc) hwr_training_write_pane_g3

0xcf5f,	// (0x00091fc4) hwr_training_write_pane_g4

0xcf67,	// (0x00091fcc) hwr_training_write_pane_g5

0xcf6f,	// (0x00091fd4) hwr_training_write_pane_g6

0xcf77,	// (0x00091fdc) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000948c5) hwr_training_write_pane_g

0xcf7f,	// (0x00091fe4) hwr_training_navi_pane_g1_ParamLimits

0xcf7f,	// (0x00091fe4) hwr_training_navi_pane_g1

0xcf91,	// (0x00091ff6) hwr_training_navi_pane_g2_ParamLimits

0xcf91,	// (0x00091ff6) hwr_training_navi_pane_g2

0xcfa3,	// (0x00092008) hwr_training_navi_pane_g3_ParamLimits

0xcfa3,	// (0x00092008) hwr_training_navi_pane_g3

0xcfb3,	// (0x00092018) hwr_training_navi_pane_g4_ParamLimits

0xcfb3,	// (0x00092018) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000948d4) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000948d4) hwr_training_navi_pane_g

0xcfc0,	// (0x00092025) hwr_training_navi_pane_t1

0x7882,	// (0x0008c8e7) list_single_hwr_training_instruct_pane_ParamLimits

0x7882,	// (0x0008c8e7) list_single_hwr_training_instruct_pane

0xcfce,	// (0x00092033) list_single_hwr_training_instruct_pane_t1

0xc61e,	// (0x00091683) bg_frame_shadow_pane_g1

0xcfdd,	// (0x00092042) bg_frame_shadow_pane_g2

0xcfe5,	// (0x0009204a) bg_frame_shadow_pane_g3

0xcfed,	// (0x00092052) bg_frame_shadow_pane_g4

0xcff5,	// (0x0009205a) bg_frame_shadow_pane_g5

0xcffd,	// (0x00092062) bg_frame_shadow_pane_g6

0xd005,	// (0x0009206a) bg_frame_shadow_pane_g7

0x1db0,	// (0x00086e15) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000948df) bg_frame_shadow_pane_g

0xebd1,	// (0x00093c36) main_video_tele_dialer_pane

0x7897,	// (0x0008c8fc) aid_size_cell_video_keypad_ParamLimits

0x7897,	// (0x0008c8fc) aid_size_cell_video_keypad

0x78b1,	// (0x0008c916) grid_video_dialer_keypad_pane_ParamLimits

0x78b1,	// (0x0008c916) grid_video_dialer_keypad_pane

0x78fd,	// (0x0008c962) video_down_pane_cp_ParamLimits

0x78fd,	// (0x0008c962) video_down_pane_cp

0x792f,	// (0x0008c994) cell_video_dialer_keypad_pane_ParamLimits

0x792f,	// (0x0008c994) cell_video_dialer_keypad_pane

0xd00d,	// (0x00092072) bg_button_pane_cp08_ParamLimits

0xd00d,	// (0x00092072) bg_button_pane_cp08

0x7951,	// (0x0008c9b6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7951,	// (0x0008c9b6) cell_video_dialer_keypad_pane_g1

0x7003,	// (0x0008c068) mup3_rocker2_pane_ParamLimits

0x7003,	// (0x0008c068) mup3_rocker2_pane

0xc6de,	// (0x00091743) mup3_rocker2_pane_g1

0x5b30,	// (0x0008ab95) main_dialer2_pane

0xebd1,	// (0x00093c36) main_mp4_pane

0xd021,	// (0x00092086) main_mp4_pane_g1_ParamLimits

0xd021,	// (0x00092086) main_mp4_pane_g1

0xd021,	// (0x00092086) main_mp4_pane_g2_ParamLimits

0xd021,	// (0x00092086) main_mp4_pane_g2

0x7988,	// (0x0008c9ed) main_mp4_pane_g3_ParamLimits

0x7988,	// (0x0008c9ed) main_mp4_pane_g3

0xd02f,	// (0x00092094) main_mp4_pane_g4_ParamLimits

0xd02f,	// (0x00092094) main_mp4_pane_g4

0xd057,	// (0x000920bc) main_mp4_pane_g5_ParamLimits

0xd057,	// (0x000920bc) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000948ff) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000948ff) main_mp4_pane_g

0xd0a7,	// (0x0009210c) main_mp4_pane_t1_ParamLimits

0xd0a7,	// (0x0009210c) main_mp4_pane_t1

0xd103,	// (0x00092168) main_mp4_pane_t2_ParamLimits

0xd103,	// (0x00092168) main_mp4_pane_t2

0xd155,	// (0x000921ba) main_mp4_pane_t3_ParamLimits

0xd155,	// (0x000921ba) main_mp4_pane_t3

0xd175,	// (0x000921da) main_mp4_pane_t4_ParamLimits

0xd175,	// (0x000921da) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009490c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009490c) main_mp4_pane_t

0xd1b9,	// (0x0009221e) mp4_progress_pane_ParamLimits

0xd1b9,	// (0x0009221e) mp4_progress_pane

0xd203,	// (0x00092268) mp4_rocker_pane_ParamLimits

0xd203,	// (0x00092268) mp4_rocker_pane

0xd22b,	// (0x00092290) mp4_progress_pane_t1

0xd244,	// (0x000922a9) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00094915) mp4_progress_pane_t

0xd25d,	// (0x000922c2) mup_progress_pane_cp04

0xc6de,	// (0x00091743) mp4_rocker_pane_g1

0x79c4,	// (0x0008ca29) aid_cell_size_keypad2_ParamLimits

0x79c4,	// (0x0008ca29) aid_cell_size_keypad2

0x79da,	// (0x0008ca3f) dialer2_ne_pane_ParamLimits

0x79da,	// (0x0008ca3f) dialer2_ne_pane

0x79f4,	// (0x0008ca59) grid_dialer2_keypad_pane_ParamLimits

0x79f4,	// (0x0008ca59) grid_dialer2_keypad_pane

0xc4c3,	// (0x00091528) bg_popup_call_pane_cp07_ParamLimits

0xc4c3,	// (0x00091528) bg_popup_call_pane_cp07

0x7a10,	// (0x0008ca75) dialer2_ne_pane_t1_ParamLimits

0x7a10,	// (0x0008ca75) dialer2_ne_pane_t1

0x7a4b,	// (0x0008cab0) cell_dialer2_keypad_pane_ParamLimits

0x7a4b,	// (0x0008cab0) cell_dialer2_keypad_pane

0xd27b,	// (0x000922e0) bg_button_pane_pane_cp04_ParamLimits

0xd27b,	// (0x000922e0) bg_button_pane_pane_cp04

0x7a6d,	// (0x0008cad2) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a6d,	// (0x0008cad2) cell_dialer2_keypad_pane_g1

0x291b,	// (0x00087980) aid_placing_vt_set_content_ParamLimits

0x291b,	// (0x00087980) aid_placing_vt_set_content

0x2943,	// (0x000879a8) aid_placing_vt_set_title_ParamLimits

0x2943,	// (0x000879a8) aid_placing_vt_set_title

0xebd1,	// (0x00093c36) main_image3_pane

0x7b33,	// (0x0008cb98) area_side_right_pane_cp01_ParamLimits

0x7b33,	// (0x0008cb98) area_side_right_pane_cp01

0xd021,	// (0x00092086) main_image3_pane_g1_ParamLimits

0xd021,	// (0x00092086) main_image3_pane_g1

0x7b4a,	// (0x0008cbaf) main_image3_pane_g2_ParamLimits

0x7b4a,	// (0x0008cbaf) main_image3_pane_g2

0x7b72,	// (0x0008cbd7) main_image3_pane_g3_ParamLimits

0x7b72,	// (0x0008cbd7) main_image3_pane_g3

0x7b9c,	// (0x0008cc01) main_image3_pane_g4_ParamLimits

0x7b9c,	// (0x0008cc01) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00094924) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00094924) main_image3_pane_g

0x7bc6,	// (0x0008cc2b) main_image3_pane_t1_ParamLimits

0x7bc6,	// (0x0008cc2b) main_image3_pane_t1

0x7c1e,	// (0x0008cc83) main_image3_pane_t2_ParamLimits

0x7c1e,	// (0x0008cc83) main_image3_pane_t2

0x7c70,	// (0x0008ccd5) main_image3_pane_t3_ParamLimits

0x7c70,	// (0x0008ccd5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009492d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009492d) main_image3_pane_t

0x1332,	// (0x00086397) grid_sctrl_middle_pane_cp01_ParamLimits

0x1332,	// (0x00086397) grid_sctrl_middle_pane_cp01

0x7cf8,	// (0x0008cd5d) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cf8,	// (0x0008cd5d) cell_sctrl_middle_pane_cp01

0x7d15,	// (0x0008cd7a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d15,	// (0x0008cd7a) cell_sctrl_middle_pane_cp01_g1

0xebd1,	// (0x00093c36) main_call4_pane

0x7d2b,	// (0x0008cd90) aid_size_button_call4_ParamLimits

0x7d2b,	// (0x0008cd90) aid_size_button_call4

0x7d5c,	// (0x0008cdc1) call4_windows_pane_ParamLimits

0x7d5c,	// (0x0008cdc1) call4_windows_pane

0x7d7c,	// (0x0008cde1) grid_call4_button_pane_ParamLimits

0x7d7c,	// (0x0008cde1) grid_call4_button_pane

0xd2b9,	// (0x0009231e) call4_windows_conf_pane

0xd2d0,	// (0x00092335) popup_call4_audio_first_window_ParamLimits

0xd2d0,	// (0x00092335) popup_call4_audio_first_window

0xd31c,	// (0x00092381) popup_call4_audio_second_window_ParamLimits

0xd31c,	// (0x00092381) popup_call4_audio_second_window

0xd330,	// (0x00092395) popup_call4_audio_wait_window_ParamLimits

0xd330,	// (0x00092395) popup_call4_audio_wait_window

0x7da9,	// (0x0008ce0e) cell_call4_button_pane_ParamLimits

0x7da9,	// (0x0008ce0e) cell_call4_button_pane

0x7dd2,	// (0x0008ce37) bg_button_pane_cp09_ParamLimits

0x7dd2,	// (0x0008ce37) bg_button_pane_cp09

0x7dde,	// (0x0008ce43) cell_call4_button_pane_g1_ParamLimits

0x7dde,	// (0x0008ce43) cell_call4_button_pane_g1

0x7e04,	// (0x0008ce69) cell_call4_button_pane_t1_ParamLimits

0x7e04,	// (0x0008ce69) cell_call4_button_pane_t1

0xd378,	// (0x000923dd) popup_call4_audio_conf_window_ParamLimits

0xd378,	// (0x000923dd) popup_call4_audio_conf_window

0x7063,	// (0x0008c0c8) mup3_progress_pane_t1_ParamLimits

0x7082,	// (0x0008c0e7) mup3_progress_pane_t2_ParamLimits

0xca1d,	// (0x00091a82) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x00094806) mup3_progress_pane_t_ParamLimits

0xca3a,	// (0x00091a9f) mup_progress_pane_cp03_ParamLimits

0x7661,	// (0x0008c6c6) mup3_control_keys_pane_g4_copy1

0xd1e7,	// (0x0009224c) mp4_rocker2_pane_ParamLimits

0xd1e7,	// (0x0009224c) mp4_rocker2_pane

0xd38c,	// (0x000923f1) mp4_rocker2_pane_g1

0xd394,	// (0x000923f9) mp4_rocker2_pane_g2

0xee43,	// (0x00093ea8) mp4_rocker2_pane_g3

0xee4b,	// (0x00093eb0) mp4_rocker2_pane_g4

0xee53,	// (0x00093eb8) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00094936) mp4_rocker2_pane_g

0xebd1,	// (0x00093c36) main_camera4_pane

0xebd1,	// (0x00093c36) main_video4_pane

0x78cb,	// (0x0008c930) main_video_tele_dialer_pane_t1_ParamLimits

0x78cb,	// (0x0008c930) main_video_tele_dialer_pane_t1

0x78e4,	// (0x0008c949) main_video_tele_dialer_pane_t2_ParamLimits

0x78e4,	// (0x0008c949) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000948f0) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000948f0) main_video_tele_dialer_pane_t

0x7e42,	// (0x0008cea7) cam4_autofocus_pane_ParamLimits

0x7e42,	// (0x0008cea7) cam4_autofocus_pane

0x7e58,	// (0x0008cebd) cam4_image_uncrop_pane_ParamLimits

0x7e58,	// (0x0008cebd) cam4_image_uncrop_pane

0x7e72,	// (0x0008ced7) cam4_indicators_pane_ParamLimits

0x7e72,	// (0x0008ced7) cam4_indicators_pane

0x7e9d,	// (0x0008cf02) main_camera4_pane_g1_ParamLimits

0x7e9d,	// (0x0008cf02) main_camera4_pane_g1

0x7eaf,	// (0x0008cf14) main_camera4_pane_g2_ParamLimits

0x7eaf,	// (0x0008cf14) main_camera4_pane_g2

0x7ec2,	// (0x0008cf27) main_camera4_pane_g3_ParamLimits

0x7ec2,	// (0x0008cf27) main_camera4_pane_g3

0x7ed5,	// (0x0008cf3a) main_camera4_pane_g4_ParamLimits

0x7ed5,	// (0x0008cf3a) main_camera4_pane_g4

0x7ee8,	// (0x0008cf4d) main_camera4_pane_g5_ParamLimits

0x7ee8,	// (0x0008cf4d) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00094941) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00094941) main_camera4_pane_g

0x7f0c,	// (0x0008cf71) main_camera4_pane_t1_ParamLimits

0x7f0c,	// (0x0008cf71) main_camera4_pane_t1

0xc94a,	// (0x000919af) bg_tb_trans_pane_cp06

0xee7f,	// (0x00093ee4) cam4_indicators_pane_g1

0xee90,	// (0x00093ef5) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009495c) cam4_indicators_pane_g

0xeeae,	// (0x00093f13) cam4_indicators_pane_t1

0x7f70,	// (0x0008cfd5) main_video4_pane_g1_ParamLimits

0x7f70,	// (0x0008cfd5) main_video4_pane_g1

0x7f7f,	// (0x0008cfe4) main_video4_pane_g2_ParamLimits

0x7f7f,	// (0x0008cfe4) main_video4_pane_g2

0x7f8e,	// (0x0008cff3) main_video4_pane_g3_ParamLimits

0x7f8e,	// (0x0008cff3) main_video4_pane_g3

0x7f9d,	// (0x0008d002) main_video4_pane_g4_ParamLimits

0x7f9d,	// (0x0008d002) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00094963) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00094963) main_video4_pane_g

0x7fbb,	// (0x0008d020) vid4_indicators_pane_ParamLimits

0x7fbb,	// (0x0008d020) vid4_indicators_pane

0x7fe9,	// (0x0008d04e) video4_image_uncrop_cif_pane_ParamLimits

0x7fe9,	// (0x0008d04e) video4_image_uncrop_cif_pane

0x8003,	// (0x0008d068) video4_image_uncrop_nhd_pane_ParamLimits

0x8003,	// (0x0008d068) video4_image_uncrop_nhd_pane

0x7e58,	// (0x0008cebd) video4_image_uncrop_vga_pane_ParamLimits

0x7e58,	// (0x0008cebd) video4_image_uncrop_vga_pane

0x1332,	// (0x00086397) bg_tb_trans_pane_cp07

0xeeda,	// (0x00093f3f) vid4_indicators_pane_g1

0xeeee,	// (0x00093f53) vid4_indicators_pane_g2

0xef02,	// (0x00093f67) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009496e) vid4_indicators_pane_g

0xef31,	// (0x00093f96) vid4_indicators_pane_t1

0x8017,	// (0x0008d07c) cam4_autofocus_pane_g1

0x801f,	// (0x0008d084) cam4_autofocus_pane_g2

0x8027,	// (0x0008d08c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00094979) cam4_autofocus_pane_g

0x802f,	// (0x0008d094) cam4_autofocus_pane_g3_copy1

0x7913,	// (0x0008c978) video_down_pane_cp_t1

0x7921,	// (0x0008c986) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000948f5) video_down_pane_cp_t

0x1332,	// (0x00086397) popup_vitu2_window_ParamLimits

0x1332,	// (0x00086397) popup_vitu2_window

0x8037,	// (0x0008d09c) aid_size_cell2_itu2_ParamLimits

0x8037,	// (0x0008d09c) aid_size_cell2_itu2

0x805d,	// (0x0008d0c2) aid_size_cell_itu2_ParamLimits

0x805d,	// (0x0008d0c2) aid_size_cell_itu2

0x80b9,	// (0x0008d11e) bg_popup_window_pane_cp09_ParamLimits

0x80b9,	// (0x0008d11e) bg_popup_window_pane_cp09

0x80c7,	// (0x0008d12c) field_vitu2_entry_pane_ParamLimits

0x80c7,	// (0x0008d12c) field_vitu2_entry_pane

0x80ed,	// (0x0008d152) grid_vitu2_function_pane_ParamLimits

0x80ed,	// (0x0008d152) grid_vitu2_function_pane

0x813e,	// (0x0008d1a3) grid_vitu2_itu_pane_ParamLimits

0x813e,	// (0x0008d1a3) grid_vitu2_itu_pane

0x81d1,	// (0x0008d236) cell_vitu2_itu_pane_ParamLimits

0x81d1,	// (0x0008d236) cell_vitu2_itu_pane

0x81f5,	// (0x0008d25a) cell_vitu2_function_pane_ParamLimits

0x81f5,	// (0x0008d25a) cell_vitu2_function_pane

0xd3ae,	// (0x00092413) bg_popup_call_pane_cp08_ParamLimits

0xd3ae,	// (0x00092413) bg_popup_call_pane_cp08

0xd3c7,	// (0x0009242c) field_vitu2_entry_pane_g1

0xd3d3,	// (0x00092438) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00094980) field_vitu2_entry_pane_g

0x04ef,	// (0x00085554) field_vitu2_entry_pane_t1_ParamLimits

0x04ef,	// (0x00085554) field_vitu2_entry_pane_t1

0xd3ed,	// (0x00092452) field_vitu2_entry_pane_t2_ParamLimits

0xd3ed,	// (0x00092452) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00094987) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00094987) field_vitu2_entry_pane_t

0x8234,	// (0x0008d299) bg_button_pane_cp010_ParamLimits

0x8234,	// (0x0008d299) bg_button_pane_cp010

0x8242,	// (0x0008d2a7) cell_vitu2_itu_pane_g1

0x826d,	// (0x0008d2d2) cell_vitu2_itu_pane_t1_ParamLimits

0x826d,	// (0x0008d2d2) cell_vitu2_itu_pane_t1

0x051e,	// (0x00085583) cell_vitu2_itu_pane_t2_ParamLimits

0x051e,	// (0x00085583) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00094991) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00094991) cell_vitu2_itu_pane_t

0x1332,	// (0x00086397) bg_button_pane_cp011

0x82cb,	// (0x0008d330) cell_vitu2_function_pane_g1

0xebd1,	// (0x00093c36) main_myfav_hc_pane

0x7cc0,	// (0x0008cd25) popup_image3_note_pane_ParamLimits

0x7cc0,	// (0x0008cd25) popup_image3_note_pane

0x7cdc,	// (0x0008cd41) popup_image3_tool_bar_pane_ParamLimits

0x7cdc,	// (0x0008cd41) popup_image3_tool_bar_pane

0x05ac,	// (0x00085611) cell_vitu2_itu_pane_t3_ParamLimits

0x05ac,	// (0x00085611) cell_vitu2_itu_pane_t3

0xebd1,	// (0x00093c36) bg_popup_trans_pane

0xd412,	// (0x00092477) grid_image3_tool_bar_pane

0xd41c,	// (0x00092481) bg_popup_trans_pane_g1

0x2f12,	// (0x00087f77) bg_popup_trans_pane_g2

0xd424,	// (0x00092489) bg_popup_trans_pane_g3

0xd42c,	// (0x00092491) bg_popup_trans_pane_g4

0xd434,	// (0x00092499) bg_popup_trans_pane_g5

0xd43c,	// (0x000924a1) bg_popup_trans_pane_g6

0xd444,	// (0x000924a9) bg_popup_trans_pane_g7

0xd44c,	// (0x000924b1) bg_popup_trans_pane_g8

0x2ef2,	// (0x00087f57) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00094998) bg_popup_trans_pane_g

0xd454,	// (0x000924b9) cell_image3_tool_bar_pane_ParamLimits

0xd454,	// (0x000924b9) cell_image3_tool_bar_pane

0xc6de,	// (0x00091743) cell_image3_tool_bar_pane_g1

0xebd1,	// (0x00093c36) bg_popup_trans_pane_cp1

0xd468,	// (0x000924cd) popup_image3_note_pane_t1

0xd476,	// (0x000924db) popup_image3_note_pane_t2

0xd484,	// (0x000924e9) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000949ab) popup_image3_note_pane_t

0xd492,	// (0x000924f7) popup_image3_note_pane_t3_copy1

0x82df,	// (0x0008d344) bg_myfav_hc_instruction_pane_ParamLimits

0x82df,	// (0x0008d344) bg_myfav_hc_instruction_pane

0x82f3,	// (0x0008d358) cell_myfav_contact_pane_ParamLimits

0x82f3,	// (0x0008d358) cell_myfav_contact_pane

0x8311,	// (0x0008d376) cell_myfav_contact_pane_cp1_ParamLimits

0x8311,	// (0x0008d376) cell_myfav_contact_pane_cp1

0x8329,	// (0x0008d38e) cell_myfav_contact_pane_cp2_ParamLimits

0x8329,	// (0x0008d38e) cell_myfav_contact_pane_cp2

0x8341,	// (0x0008d3a6) cell_myfav_contact_pane_cp3_ParamLimits

0x8341,	// (0x0008d3a6) cell_myfav_contact_pane_cp3

0x8358,	// (0x0008d3bd) cell_myfav_contact_pane_cp4_ParamLimits

0x8358,	// (0x0008d3bd) cell_myfav_contact_pane_cp4

0x8370,	// (0x0008d3d5) cell_myfav_contact_pane_cp5_ParamLimits

0x8370,	// (0x0008d3d5) cell_myfav_contact_pane_cp5

0x8384,	// (0x0008d3e9) cell_myfav_contact_pane_cp6_ParamLimits

0x8384,	// (0x0008d3e9) cell_myfav_contact_pane_cp6

0x839a,	// (0x0008d3ff) cell_myfav_contact_pane_cp7_ParamLimits

0x839a,	// (0x0008d3ff) cell_myfav_contact_pane_cp7

0xd4a0,	// (0x00092505) listscroll_gen_pane_cp05

0x83b4,	// (0x0008d419) main_myfav_hc_pane_g1_ParamLimits

0x83b4,	// (0x0008d419) main_myfav_hc_pane_g1

0x83ce,	// (0x0008d433) main_myfav_hc_pane_g2_ParamLimits

0x83ce,	// (0x0008d433) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000949b2) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000949b2) main_myfav_hc_pane_g

0x8400,	// (0x0008d465) main_myfav_hc_pane_t1_ParamLimits

0x8400,	// (0x0008d465) main_myfav_hc_pane_t1

0xd4a9,	// (0x0009250e) main_myfav_hc_pane_t2_ParamLimits

0xd4a9,	// (0x0009250e) main_myfav_hc_pane_t2

0xd4bb,	// (0x00092520) main_myfav_hc_pane_t3_ParamLimits

0xd4bb,	// (0x00092520) main_myfav_hc_pane_t3

0x8417,	// (0x0008d47c) main_myfav_hc_pane_t4_ParamLimits

0x8417,	// (0x0008d47c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000949b9) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000949b9) main_myfav_hc_pane_t

0xc6de,	// (0x00091743) bg_myfav_hc_instruction_pane_g1

0xd4cd,	// (0x00092532) cell_myfav_contact_pane_g1_ParamLimits

0xd4cd,	// (0x00092532) cell_myfav_contact_pane_g1

0xd4cd,	// (0x00092532) cell_myfav_contact_pane_g2_ParamLimits

0xd4cd,	// (0x00092532) cell_myfav_contact_pane_g2

0xd4d9,	// (0x0009253e) cell_myfav_contact_pane_g3_ParamLimits

0xd4d9,	// (0x0009253e) cell_myfav_contact_pane_g3

0xca07,	// (0x00091a6c) cell_myfav_contact_pane_g4_ParamLimits

0xca07,	// (0x00091a6c) cell_myfav_contact_pane_g4

0xd4e6,	// (0x0009254b) cell_myfav_contact_pane_g5_ParamLimits

0xd4e6,	// (0x0009254b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000949c4) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000949c4) cell_myfav_contact_pane_g

0x83e8,	// (0x0008d44d) main_myfav_hc_pane_g3_ParamLimits

0x83e8,	// (0x0008d44d) main_myfav_hc_pane_g3

0x1270,	// (0x000862d5) popup_adpt_find_window

0x843f,	// (0x0008d4a4) afind_page_pane_ParamLimits

0x843f,	// (0x0008d4a4) afind_page_pane

0x8454,	// (0x0008d4b9) aid_size_cell_afind_ParamLimits

0x8454,	// (0x0008d4b9) aid_size_cell_afind

0x8472,	// (0x0008d4d7) bg_popup_sub_pane_cp09_ParamLimits

0x8472,	// (0x0008d4d7) bg_popup_sub_pane_cp09

0x847f,	// (0x0008d4e4) find_pane_cp01_ParamLimits

0x847f,	// (0x0008d4e4) find_pane_cp01

0xd4f2,	// (0x00092557) grid_afind_control_pane_ParamLimits

0xd4f2,	// (0x00092557) grid_afind_control_pane

0x848c,	// (0x0008d4f1) grid_afind_pane_ParamLimits

0x848c,	// (0x0008d4f1) grid_afind_pane

0x84ae,	// (0x0008d513) cell_afind_pane_ParamLimits

0x84ae,	// (0x0008d513) cell_afind_pane

0xc6de,	// (0x00091743) afind_page_pane_g1

0x850f,	// (0x0008d574) afind_page_pane_g2

0x8518,	// (0x0008d57d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000949cf) afind_page_pane_g

0x8521,	// (0x0008d586) afind_page_pane_t1

0xd506,	// (0x0009256b) cell_afind_grid_control_pane_ParamLimits

0xd506,	// (0x0009256b) cell_afind_grid_control_pane

0xd27b,	// (0x000922e0) bg_button_pane_cp69_ParamLimits

0xd27b,	// (0x000922e0) bg_button_pane_cp69

0x8541,	// (0x0008d5a6) cell_afind_pane_g1_ParamLimits

0x8541,	// (0x0008d5a6) cell_afind_pane_g1

0x854e,	// (0x0008d5b3) cell_afind_pane_t1_ParamLimits

0x854e,	// (0x0008d5b3) cell_afind_pane_t1

0x2896,	// (0x000878fb) bg_button_pane_cp72

0xd515,	// (0x0009257a) cell_afind_grid_control_pane_g1

0x5325,	// (0x0008a38a) aid_image_placing_area_ParamLimits

0x5325,	// (0x0008a38a) aid_image_placing_area

0xcd10,	// (0x00091d75) field_vitu_entry_pane_g1_ParamLimits

0xcd10,	// (0x00091d75) field_vitu_entry_pane_g1

0xcd1c,	// (0x00091d81) field_vitu_entry_pane_g2_ParamLimits

0xcd1c,	// (0x00091d81) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00094880) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00094880) field_vitu_entry_pane_g

0x7728,	// (0x0008c78d) cell_vitu_itu_pane_g1_ParamLimits

0x776a,	// (0x0008c7cf) cell_vitu_itu_pane_t3_ParamLimits

0x776a,	// (0x0008c7cf) cell_vitu_itu_pane_t3

0xd22b,	// (0x00092290) mp4_progress_pane_t1_ParamLimits

0xd244,	// (0x000922a9) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00094915) mp4_progress_pane_t_ParamLimits

0xd25d,	// (0x000922c2) mup_progress_pane_cp04_ParamLimits

0x842b,	// (0x0008d490) main_myfav_hc_pane_t5_ParamLimits

0x842b,	// (0x0008d490) main_myfav_hc_pane_t5

0xb2f3,	// (0x00090358) aid_zoom_text_primary

0x1270,	// (0x000862d5) popup_adpt_find_window_ParamLimits

0x1332,	// (0x00086397) main_cam_set_pane

0x7e89,	// (0x0008ceee) cam4_zoom_pane_ParamLimits

0x7e89,	// (0x0008ceee) cam4_zoom_pane

0x8560,	// (0x0008d5c5) main_cam_set_pane_g1_ParamLimits

0x8560,	// (0x0008d5c5) main_cam_set_pane_g1

0x856e,	// (0x0008d5d3) main_cam_set_pane_g2_ParamLimits

0x856e,	// (0x0008d5d3) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000949d6) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000949d6) main_cam_set_pane_g

0x858f,	// (0x0008d5f4) main_cam_set_pane_t1_ParamLimits

0x858f,	// (0x0008d5f4) main_cam_set_pane_t1

0x85aa,	// (0x0008d60f) main_cset_listscroll_pane_ParamLimits

0x85aa,	// (0x0008d60f) main_cset_listscroll_pane

0x85ca,	// (0x0008d62f) main_cset_slider_pane_ParamLimits

0x85ca,	// (0x0008d62f) main_cset_slider_pane

0xd526,	// (0x0009258b) main_cset_list_pane_ParamLimits

0xd526,	// (0x0009258b) main_cset_list_pane

0xd536,	// (0x0009259b) scroll_pane_cp028

0x85f0,	// (0x0008d655) aid_area_touch_slider

0x860c,	// (0x0008d671) cset_slider_pane

0x8636,	// (0x0008d69b) main_cset_slider_pane_g1

0x864b,	// (0x0008d6b0) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000949db) main_cset_slider_pane_g

0xd56f,	// (0x000925d4) main_cset_slider_pane_t1

0x8707,	// (0x0008d76c) main_cset_slider_pane_t2

0x8721,	// (0x0008d786) main_cset_slider_pane_t3

0x873b,	// (0x0008d7a0) main_cset_slider_pane_t4

0x8755,	// (0x0008d7ba) main_cset_slider_pane_t5

0x876f,	// (0x0008d7d4) main_cset_slider_pane_t6

0x8784,	// (0x0008d7e9) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00094a00) main_cset_slider_pane_t

0x8888,	// (0x0008d8ed) cset_list_set_pane_ParamLimits

0x8888,	// (0x0008d8ed) cset_list_set_pane

0x889a,	// (0x0008d8ff) aid_position_infowindow_above

0x88a2,	// (0x0008d907) aid_position_infowindow_below

0xef48,	// (0x00093fad) cset_list_set_pane_g1_ParamLimits

0xef48,	// (0x00093fad) cset_list_set_pane_g1

0xd60f,	// (0x00092674) cset_list_set_pane_g3_ParamLimits

0xd60f,	// (0x00092674) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00094a1f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00094a1f) cset_list_set_pane_g

0xd61e,	// (0x00092683) cset_list_set_pane_t1_ParamLimits

0xd61e,	// (0x00092683) cset_list_set_pane_t1

0x1332,	// (0x00086397) list_highlight_pane_cp021_ParamLimits

0x1332,	// (0x00086397) list_highlight_pane_cp021

0x4ba4,	// (0x00089c09) cset_slider_pane_g1

0x4bb6,	// (0x00089c1b) cset_slider_pane_g2

0x4bad,	// (0x00089c12) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00094a24) cset_slider_pane_g

0xef54,	// (0x00093fb9) aid_area_touch_cam4_zoom

0xef5c,	// (0x00093fc1) cam4_zoom_cont_pane

0xef64,	// (0x00093fc9) cam4_zoom_pane_g1

0xef6c,	// (0x00093fd1) cam4_zoom_pane_g2

0x88aa,	// (0x0008d90f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00094a2b) cam4_zoom_pane_g

0xd633,	// (0x00092698) cam4_zoom_cont_pane_g1

0xd63c,	// (0x000926a1) cam4_zoom_cont_pane_g2

0xd645,	// (0x000926aa) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00094a32) cam4_zoom_cont_pane_g

0x7d49,	// (0x0008cdae) call4_image_pane_ParamLimits

0x7d49,	// (0x0008cdae) call4_image_pane

0xd2b9,	// (0x0009231e) call4_windows_conf_pane_ParamLimits

0xd2fa,	// (0x0009235f) popup_call4_audio_in_window_ParamLimits

0xd2fa,	// (0x0009235f) popup_call4_audio_in_window

0xebd1,	// (0x00093c36) bg_popup_call2_act_pane_cp02

0xd370,	// (0x000923d5) call4_list_conf_pane

0xc6de,	// (0x00091743) call4_image_pane_g1

0xc6de,	// (0x00091743) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x00094746) call4_image_pane_g

0xd64e,	// (0x000926b3) list_single_graphic_popup_conf4_pane_ParamLimits

0xd64e,	// (0x000926b3) list_single_graphic_popup_conf4_pane

0xebd1,	// (0x00093c36) list_highlight_pane_cp022

0xd661,	// (0x000926c6) list_single_graphic_popup_conf4_pane_g1

0x4112,	// (0x00089177) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00094a39) list_single_graphic_popup_conf4_pane_g

0xd669,	// (0x000926ce) list_single_graphic_popup_conf4_pane_t1

0x2a79,	// (0x00087ade) popup_vtel_slider_window_ParamLimits

0x2a79,	// (0x00087ade) popup_vtel_slider_window

0xd269,	// (0x000922ce) dialer2_ne_pane_t2_ParamLimits

0xd269,	// (0x000922ce) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0009491a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0009491a) dialer2_ne_pane_t

0xc4c3,	// (0x00091528) bg_popup_sub_pane_cp010_ParamLimits

0xc4c3,	// (0x00091528) bg_popup_sub_pane_cp010

0x88b2,	// (0x0008d917) popup_vtel_slider_window_g1_ParamLimits

0x88b2,	// (0x0008d917) popup_vtel_slider_window_g1

0x88c5,	// (0x0008d92a) popup_vtel_slider_window_g2_ParamLimits

0x88c5,	// (0x0008d92a) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00094a3e) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00094a3e) popup_vtel_slider_window_g

0x891b,	// (0x0008d980) vtel_slider_pane_ParamLimits

0x891b,	// (0x0008d980) vtel_slider_pane

0x893d,	// (0x0008d9a2) vtel_slider_pane_g1_ParamLimits

0x893d,	// (0x0008d9a2) vtel_slider_pane_g1

0x8951,	// (0x0008d9b6) vtel_slider_pane_g2_ParamLimits

0x8951,	// (0x0008d9b6) vtel_slider_pane_g2

0x8969,	// (0x0008d9ce) vtel_slider_pane_g3_ParamLimits

0x8969,	// (0x0008d9ce) vtel_slider_pane_g3

0x893d,	// (0x0008d9a2) vtel_slider_pane_g4_ParamLimits

0x893d,	// (0x0008d9a2) vtel_slider_pane_g4

0x897f,	// (0x0008d9e4) vtel_slider_pane_g5_ParamLimits

0x897f,	// (0x0008d9e4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00094a47) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00094a47) vtel_slider_pane_g

0x1332,	// (0x00086397) main_gallery2_pane

0x8089,	// (0x0008d0ee) aid_size_row_itut2_dropdow_list_ParamLimits

0x8089,	// (0x0008d0ee) aid_size_row_itut2_dropdow_list

0x8115,	// (0x0008d17a) grid_vitu2_function_top_pane_ParamLimits

0x8115,	// (0x0008d17a) grid_vitu2_function_top_pane

0x817a,	// (0x0008d1df) popup_vitu2_dropdown_list_window_ParamLimits

0x817a,	// (0x0008d1df) popup_vitu2_dropdown_list_window

0x81a3,	// (0x0008d208) popup_vitu2_match_list_window

0x8995,	// (0x0008d9fa) cell_vitu2_function_top_pane_ParamLimits

0x8995,	// (0x0008d9fa) cell_vitu2_function_top_pane

0x89b3,	// (0x0008da18) cell_vitu2_function_top_pane_cp01_ParamLimits

0x89b3,	// (0x0008da18) cell_vitu2_function_top_pane_cp01

0x89d1,	// (0x0008da36) cell_vitu2_function_top_wide_pane_ParamLimits

0x89d1,	// (0x0008da36) cell_vitu2_function_top_wide_pane

0x1332,	// (0x00086397) bg_button_pane_cp012

0x89ef,	// (0x0008da54) cell_vitu2_function_top_pane_g1

0xef74,	// (0x00093fd9) bg_button_pane_cp013_ParamLimits

0xef74,	// (0x00093fd9) bg_button_pane_cp013

0x8a03,	// (0x0008da68) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a03,	// (0x0008da68) cell_vitu2_function_top_wide_pane_g1

0x1332,	// (0x00086397) bg_popup_sub_pane_cp20

0x8a1b,	// (0x0008da80) list_vitu2_match_list_pane

0xd41c,	// (0x00092481) bg_popup_sub_pane_cp20_g1

0xd424,	// (0x00092489) bg_popup_sub_pane_cp20_g2

0x2f12,	// (0x00087f77) bg_popup_sub_pane_cp20_g3

0xd42c,	// (0x00092491) bg_popup_sub_pane_cp20_g4

0x2ef2,	// (0x00087f57) bg_popup_sub_pane_cp20_g5

0xd67f,	// (0x000926e4) bg_popup_sub_pane_cp20_g6

0xd43c,	// (0x000924a1) bg_popup_sub_pane_cp20_g7

0xd444,	// (0x000924a9) bg_popup_sub_pane_cp20_g8

0xd44c,	// (0x000924b1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00094a52) bg_popup_sub_pane_cp20_g

0xef90,	// (0x00093ff5) list_vitu2_match_list_item_pane_ParamLimits

0xef90,	// (0x00093ff5) list_vitu2_match_list_item_pane

0xefa2,	// (0x00094007) list_vitu2_match_list_item_pane_t1

0xebd1,	// (0x00093c36) bg_popup_sub_pane_cp21

0x4016,	// (0x0008907b) grid_vitu2_dropdown_list_pane

0x8a39,	// (0x0008da9e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a39,	// (0x0008da9e) cell_vitu2_dropdown_list_char_pane

0x8a5a,	// (0x0008dabf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a5a,	// (0x0008dabf) cell_vitu2_dropdown_list_ctrl_pane

0xd687,	// (0x000926ec) cell_vitu2_dropdown_list_char_pane_g1

0xd690,	// (0x000926f5) cell_vitu2_dropdown_list_char_pane_g2

0xd699,	// (0x000926fe) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00094a6f) cell_vitu2_dropdown_list_char_pane_g

0x8a86,	// (0x0008daeb) cell_vitu2_dropdown_list_char_pane_t1

0x8a94,	// (0x0008daf9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a94,	// (0x0008daf9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8aa1,	// (0x0008db06) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8aa1,	// (0x0008db06) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8aae,	// (0x0008db13) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8aae,	// (0x0008db13) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8abb,	// (0x0008db20) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8abb,	// (0x0008db20) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc94a,	// (0x000919af) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc94a,	// (0x000919af) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00094a76) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00094a76) cell_vitu2_dropdown_list_ctrl_pane_g

0x8ad7,	// (0x0008db3c) aid_size_cell_gallery2_ParamLimits

0x8ad7,	// (0x0008db3c) aid_size_cell_gallery2

0x8af5,	// (0x0008db5a) grid_gallery2_pane_ParamLimits

0x8af5,	// (0x0008db5a) grid_gallery2_pane

0x8b0f,	// (0x0008db74) scroll_pane_cp029_ParamLimits

0x8b0f,	// (0x0008db74) scroll_pane_cp029

0x8b1b,	// (0x0008db80) cell_gallery2_pane_ParamLimits

0x8b1b,	// (0x0008db80) cell_gallery2_pane

0xd6a2,	// (0x00092707) cell_gallery2_pane_g2

0x8b76,	// (0x0008dbdb) cell_gallery2_pane_g3

0xd6aa,	// (0x0009270f) cell_gallery2_pane_g4

0xd6b2,	// (0x00092717) cell_gallery2_pane_g5

0x4666,	// (0x000896cb) grid_highlight_pane_cp10

0x81a3,	// (0x0008d208) popup_vitu2_match_list_window_ParamLimits

0x81ba,	// (0x0008d21f) popup_vitu2_query_window_ParamLimits

0x81ba,	// (0x0008d21f) popup_vitu2_query_window

0xebd1,	// (0x00093c36) bg_vitu2_candi_button_pane

0xd687,	// (0x000926ec) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd690,	// (0x000926f5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd699,	// (0x000926fe) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0662,	// (0x000856c7) bg_button_pane_cp015

0x8b7e,	// (0x0008dbe3) bg_button_pane_cp016

0x8b91,	// (0x0008dbf6) bg_button_pane_cp017

0xc1c3,	// (0x00091228) bg_popup_sub_pane_cp22

0xd6ba,	// (0x0009271f) popup_vitu2_query_window_g1

0x0695,	// (0x000856fa) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00094a81) popup_vitu2_query_window_g

0x06b4,	// (0x00085719) popup_vitu2_query_window_t1_ParamLimits

0x06b4,	// (0x00085719) popup_vitu2_query_window_t1

0x06e9,	// (0x0008574e) popup_vitu2_query_window_t2_ParamLimits

0x06e9,	// (0x0008574e) popup_vitu2_query_window_t2

0x06fb,	// (0x00085760) popup_vitu2_query_window_t3_ParamLimits

0x06fb,	// (0x00085760) popup_vitu2_query_window_t3

0x8bb5,	// (0x0008dc1a) popup_vitu2_query_window_t4_ParamLimits

0x8bb5,	// (0x0008dc1a) popup_vitu2_query_window_t4

0x8bd6,	// (0x0008dc3b) popup_vitu2_query_window_t5_ParamLimits

0x8bd6,	// (0x0008dc3b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00094a88) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00094a88) popup_vitu2_query_window_t

0xd51e,	// (0x00092583) main_cset_text_pane

0x85f0,	// (0x0008d655) aid_area_touch_slider_ParamLimits

0x860c,	// (0x0008d671) cset_slider_pane_ParamLimits

0x8636,	// (0x0008d69b) main_cset_slider_pane_g1_ParamLimits

0x864b,	// (0x0008d6b0) main_cset_slider_pane_g2_ParamLimits

0xd53f,	// (0x000925a4) main_cset_slider_pane_g3_ParamLimits

0xd53f,	// (0x000925a4) main_cset_slider_pane_g3

0x8660,	// (0x0008d6c5) main_cset_slider_pane_g4_ParamLimits

0x8660,	// (0x0008d6c5) main_cset_slider_pane_g4

0x866f,	// (0x0008d6d4) main_cset_slider_pane_g5_ParamLimits

0x866f,	// (0x0008d6d4) main_cset_slider_pane_g5

0x867b,	// (0x0008d6e0) main_cset_slider_pane_g6_ParamLimits

0x867b,	// (0x0008d6e0) main_cset_slider_pane_g6

0xf976,	// (0x000949db) main_cset_slider_pane_g_ParamLimits

0xd56f,	// (0x000925d4) main_cset_slider_pane_t1_ParamLimits

0x8707,	// (0x0008d76c) main_cset_slider_pane_t2_ParamLimits

0x8721,	// (0x0008d786) main_cset_slider_pane_t3_ParamLimits

0x873b,	// (0x0008d7a0) main_cset_slider_pane_t4_ParamLimits

0x8755,	// (0x0008d7ba) main_cset_slider_pane_t5_ParamLimits

0x876f,	// (0x0008d7d4) main_cset_slider_pane_t6_ParamLimits

0x8784,	// (0x0008d7e9) main_cset_slider_pane_t7_ParamLimits

0x87ae,	// (0x0008d813) main_cset_slider_pane_t8_ParamLimits

0x87ae,	// (0x0008d813) main_cset_slider_pane_t8

0x87d6,	// (0x0008d83b) main_cset_slider_pane_t9_ParamLimits

0x87d6,	// (0x0008d83b) main_cset_slider_pane_t9

0x87fe,	// (0x0008d863) main_cset_slider_pane_t10_ParamLimits

0x87fe,	// (0x0008d863) main_cset_slider_pane_t10

0x8826,	// (0x0008d88b) main_cset_slider_pane_t11_ParamLimits

0x8826,	// (0x0008d88b) main_cset_slider_pane_t11

0x884e,	// (0x0008d8b3) main_cset_slider_pane_t12_ParamLimits

0x884e,	// (0x0008d8b3) main_cset_slider_pane_t12

0x886b,	// (0x0008d8d0) main_cset_slider_pane_t13_ParamLimits

0x886b,	// (0x0008d8d0) main_cset_slider_pane_t13

0xf99b,	// (0x00094a00) main_cset_slider_pane_t_ParamLimits

0xebd1,	// (0x00093c36) bg_popup_sub_pane_cp011

0xd6c6,	// (0x0009272b) main_cset_text_pane_g1

0xd6ce,	// (0x00092733) main_cset_text_pane_t1

0xd6dc,	// (0x00092741) main_cset_text_pane_t2

0xd6ea,	// (0x0009274f) main_cset_text_pane_t3

0xd6f8,	// (0x0009275d) main_cset_text_pane_t4

0xd706,	// (0x0009276b) main_cset_text_pane_t5

0xd714,	// (0x00092779) main_cset_text_pane_t6

0xd722,	// (0x00092787) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00094a97) main_cset_text_pane_t

0xebd1,	// (0x00093c36) main_cam4_burst_pane

0xebd1,	// (0x00093c36) main_cam5_pane

0x852f,	// (0x0008d594) bg_button_pane_cp019

0x8538,	// (0x0008d59d) bg_button_pane_cp020

0xd54b,	// (0x000925b0) main_cset_slider_pane_g7_ParamLimits

0xd54b,	// (0x000925b0) main_cset_slider_pane_g7

0xd557,	// (0x000925bc) main_cset_slider_pane_g8_ParamLimits

0xd557,	// (0x000925bc) main_cset_slider_pane_g8

0x868f,	// (0x0008d6f4) main_cset_slider_pane_g9_ParamLimits

0x868f,	// (0x0008d6f4) main_cset_slider_pane_g9

0x869b,	// (0x0008d700) main_cset_slider_pane_g10_ParamLimits

0x869b,	// (0x0008d700) main_cset_slider_pane_g10

0x86a7,	// (0x0008d70c) main_cset_slider_pane_g11_ParamLimits

0x86a7,	// (0x0008d70c) main_cset_slider_pane_g11

0x86b3,	// (0x0008d718) main_cset_slider_pane_g12_ParamLimits

0x86b3,	// (0x0008d718) main_cset_slider_pane_g12

0x86bf,	// (0x0008d724) main_cset_slider_pane_g13_ParamLimits

0x86bf,	// (0x0008d724) main_cset_slider_pane_g13

0x86cb,	// (0x0008d730) main_cset_slider_pane_g14_ParamLimits

0x86cb,	// (0x0008d730) main_cset_slider_pane_g14

0x86d7,	// (0x0008d73c) main_cset_slider_pane_g15_ParamLimits

0x86d7,	// (0x0008d73c) main_cset_slider_pane_g15

0xd59d,	// (0x00092602) main_cset_slider_pane_t14_ParamLimits

0xd59d,	// (0x00092602) main_cset_slider_pane_t14

0xd5d6,	// (0x0009263b) main_cset_slider_pane_t15_ParamLimits

0xd5d6,	// (0x0009263b) main_cset_slider_pane_t15

0x8bf7,	// (0x0008dc5c) aid_cam4_burst_size_cell_ParamLimits

0x8bf7,	// (0x0008dc5c) aid_cam4_burst_size_cell

0x8c17,	// (0x0008dc7c) grid_cam4_burst_pane_ParamLimits

0x8c17,	// (0x0008dc7c) grid_cam4_burst_pane

0x8c4f,	// (0x0008dcb4) linegrid_cam4_burst_pane_ParamLimits

0x8c4f,	// (0x0008dcb4) linegrid_cam4_burst_pane

0xd730,	// (0x00092795) scroll_pane_cp30_ParamLimits

0xd730,	// (0x00092795) scroll_pane_cp30

0x8c73,	// (0x0008dcd8) cell_cam4_burst_pane_ParamLimits

0x8c73,	// (0x0008dcd8) cell_cam4_burst_pane

0xd73c,	// (0x000927a1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd73c,	// (0x000927a1) linegrid_cam4_burst_pane_g1

0x8cc0,	// (0x0008dd25) linegrid_cam4_burst_pane_g2_ParamLimits

0x8cc0,	// (0x0008dd25) linegrid_cam4_burst_pane_g2

0xd749,	// (0x000927ae) linegrid_cam4_burst_pane_g3_ParamLimits

0xd749,	// (0x000927ae) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00094aa6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00094aa6) linegrid_cam4_burst_pane_g

0x8cd1,	// (0x0008dd36) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8cd1,	// (0x0008dd36) linegrid_cam4_burst_pane_g3_copy1

0xd756,	// (0x000927bb) linegrid_cam4_burst_pane_g4_ParamLimits

0xd756,	// (0x000927bb) linegrid_cam4_burst_pane_g4

0x8ceb,	// (0x0008dd50) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ceb,	// (0x0008dd50) linegrid_cam4_burst_pane_g5

0x8cfc,	// (0x0008dd61) linegrid_cam4_burst_pane_g6_ParamLimits

0x8cfc,	// (0x0008dd61) linegrid_cam4_burst_pane_g6

0xd763,	// (0x000927c8) linegrid_cam4_burst_pane_g7_ParamLimits

0xd763,	// (0x000927c8) linegrid_cam4_burst_pane_g7

0x8d13,	// (0x0008dd78) cell_cam4_burst_pane_g1

0xd77c,	// (0x000927e1) main_cam5_pane_t1_ParamLimits

0xd77c,	// (0x000927e1) main_cam5_pane_t1

0xd78e,	// (0x000927f3) main_cam5_pane_t2_ParamLimits

0xd78e,	// (0x000927f3) main_cam5_pane_t2

0xd7a0,	// (0x00092805) main_cam5_pane_t3_ParamLimits

0xd7a0,	// (0x00092805) main_cam5_pane_t3

0xd7b2,	// (0x00092817) main_cam5_pane_t4_ParamLimits

0xd7b2,	// (0x00092817) main_cam5_pane_t4

0xd7ca,	// (0x0009282f) main_cam5_pane_t5_ParamLimits

0xd7ca,	// (0x0009282f) main_cam5_pane_t5

0xd7de,	// (0x00092843) main_cam5_pane_t6_ParamLimits

0xd7de,	// (0x00092843) main_cam5_pane_t6

0xd7f2,	// (0x00092857) main_cam5_pane_t7_ParamLimits

0xd7f2,	// (0x00092857) main_cam5_pane_t7

0xd804,	// (0x00092869) main_cam5_pane_t8_ParamLimits

0xd804,	// (0x00092869) main_cam5_pane_t8

0xd820,	// (0x00092885) main_cam5_pane_t9_ParamLimits

0xd820,	// (0x00092885) main_cam5_pane_t9

0xd832,	// (0x00092897) main_cam5_pane_t10_ParamLimits

0xd832,	// (0x00092897) main_cam5_pane_t10

0xd844,	// (0x000928a9) main_cam5_pane_t11_ParamLimits

0xd844,	// (0x000928a9) main_cam5_pane_t11

0xd856,	// (0x000928bb) main_cam5_pane_t12_ParamLimits

0xd856,	// (0x000928bb) main_cam5_pane_t12

0xd86b,	// (0x000928d0) main_cam5_pane_t13_ParamLimits

0xd86b,	// (0x000928d0) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00094ab2) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00094ab2) main_cam5_pane_t

0x12f2,	// (0x00086357) popup_scut_keymap_window_ParamLimits

0x12f2,	// (0x00086357) popup_scut_keymap_window

0x8d26,	// (0x0008dd8b) aid_size_cell_brow_shortcut

0x4666,	// (0x000896cb) bg_popup_window_pane_cp010

0x8d32,	// (0x0008dd97) grid_scut_pane

0x8d3e,	// (0x0008dda3) cell_scut_pane_ParamLimits

0x8d3e,	// (0x0008dda3) cell_scut_pane

0x8d55,	// (0x0008ddba) cell_scut_pane_g1

0xd888,	// (0x000928ed) cell_scut_pane_t1

0xd897,	// (0x000928fc) cell_scut_pane_t2

0x8d5e,	// (0x0008ddc3) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00094acd) cell_scut_pane_t

0x6c1c,	// (0x0008bc81) main_mup3_pane_g8_ParamLimits

0x6c1c,	// (0x0008bc81) main_mup3_pane_g8

0x80a1,	// (0x0008d106) area_vitu2_query_pane_ParamLimits

0x80a1,	// (0x0008d106) area_vitu2_query_pane

0x0674,	// (0x000856d9) input_focus_pane_cp08

0xd8a6,	// (0x0009290b) area_vitu2_query_pane_g1

0x0779,	// (0x000857de) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00094ad4) area_vitu2_query_pane_g

0x8d6c,	// (0x0008ddd1) area_vitu2_query_pane_t1_ParamLimits

0x8d6c,	// (0x0008ddd1) area_vitu2_query_pane_t1

0x8d80,	// (0x0008dde5) area_vitu2_query_pane_t2_ParamLimits

0x8d80,	// (0x0008dde5) area_vitu2_query_pane_t2

0x078a,	// (0x000857ef) area_vitu2_query_pane_t3_ParamLimits

0x078a,	// (0x000857ef) area_vitu2_query_pane_t3

0xd8b2,	// (0x00092917) area_vitu2_query_pane_t4_ParamLimits

0xd8b2,	// (0x00092917) area_vitu2_query_pane_t4

0xd8da,	// (0x0009293f) area_vitu2_query_pane_t5_ParamLimits

0xd8da,	// (0x0009293f) area_vitu2_query_pane_t5

0xd902,	// (0x00092967) area_vitu2_query_pane_t6_ParamLimits

0xd902,	// (0x00092967) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00094ad9) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00094ad9) area_vitu2_query_pane_t

0x8d94,	// (0x0008ddf9) bg_button_pane_cp018

0x8da2,	// (0x0008de07) bg_button_pane_cp021

0x07b2,	// (0x00085817) bg_button_pane_cp022

0x07c1,	// (0x00085826) input_focus_pane_cp09

0x446d,	// (0x000894d2) aid_size_touch_mv_arrow_left

0x4496,	// (0x000894fb) aid_size_touch_mv_arrow_right

0x86ef,	// (0x0008d754) main_cset_slider_pane_g16_ParamLimits

0x86ef,	// (0x0008d754) main_cset_slider_pane_g16

0x86fb,	// (0x0008d760) main_cset_slider_pane_g17_ParamLimits

0x86fb,	// (0x0008d760) main_cset_slider_pane_g17

0x8d13,	// (0x0008dd78) cell_cam4_burst_pane_g1_ParamLimits

0xebd1,	// (0x00093c36) compa_mode_pane

0x88d5,	// (0x0008d93a) popup_vtel_slider_window_g3_ParamLimits

0x88d5,	// (0x0008d93a) popup_vtel_slider_window_g3

0x88ec,	// (0x0008d951) popup_vtel_slider_window_g4_ParamLimits

0x88ec,	// (0x0008d951) popup_vtel_slider_window_g4

0x8903,	// (0x0008d968) popup_vtel_slider_window_t1_ParamLimits

0x8903,	// (0x0008d968) popup_vtel_slider_window_t1

0xebd1,	// (0x00093c36) main_cl_pane

0xc1eb,	// (0x00091250) popup_imed_adjust2_window_ParamLimits

0xc1c3,	// (0x00091228) bg_tb_trans_pane_cp05_ParamLimits

0xcc45,	// (0x00091caa) popup_imed_adjust2_window_g1_ParamLimits

0xcc54,	// (0x00091cb9) popup_imed_adjust2_window_g2_ParamLimits

0xcc54,	// (0x00091cb9) popup_imed_adjust2_window_g2

0xcc60,	// (0x00091cc5) popup_imed_adjust2_window_g3_ParamLimits

0xcc60,	// (0x00091cc5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00094844) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00094844) popup_imed_adjust2_window_g

0xcc6c,	// (0x00091cd1) popup_imed_adjust2_window_t1_ParamLimits

0xcc84,	// (0x00091ce9) slider_imed_adjust_pane_ParamLimits

0xcc98,	// (0x00091cfd) slider_imed_adjust_pane_g1_ParamLimits

0xcca8,	// (0x00091d0d) slider_imed_adjust_pane_g2_ParamLimits

0xccb8,	// (0x00091d1d) slider_imed_adjust_pane_g3_ParamLimits

0xccc9,	// (0x00091d2e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009484b) slider_imed_adjust_pane_g_ParamLimits

0x7e2a,	// (0x0008ce8f) aid_touch_area_cam4_ParamLimits

0x7e2a,	// (0x0008ce8f) aid_touch_area_cam4

0xee5b,	// (0x00093ec0) battery_pane_cp01

0x7ef9,	// (0x0008cf5e) main_camera4_pane_g6_ParamLimits

0x7ef9,	// (0x0008cf5e) main_camera4_pane_g6

0x7f23,	// (0x0008cf88) main_camera4_pane_t2_ParamLimits

0x7f23,	// (0x0008cf88) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009494e) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009494e) main_camera4_pane_t

0x7f58,	// (0x0008cfbd) aid_touch_area_vid4_ParamLimits

0x7f58,	// (0x0008cfbd) aid_touch_area_vid4

0x7fac,	// (0x0008d011) main_video4_pane_g5_ParamLimits

0x7fac,	// (0x0008d011) main_video4_pane_g5

0x7fd1,	// (0x0008d036) vid4_progress_pane_ParamLimits

0x7fd1,	// (0x0008d036) vid4_progress_pane

0xd563,	// (0x000925c8) main_cset_slider_pane_g18_ParamLimits

0xd563,	// (0x000925c8) main_cset_slider_pane_g18

0xd770,	// (0x000927d5) cell_cam4_burst_pane_g2_ParamLimits

0xd770,	// (0x000927d5) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00094aad) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00094aad) cell_cam4_burst_pane_g

0x1b68,	// (0x00086bcd) bg_cl_pane_ParamLimits

0x1b68,	// (0x00086bcd) bg_cl_pane

0x8dae,	// (0x0008de13) cl_header_pane_ParamLimits

0x8dae,	// (0x0008de13) cl_header_pane

0x8dc2,	// (0x0008de27) cl_listscroll_pane_ParamLimits

0x8dc2,	// (0x0008de27) cl_listscroll_pane

0xd94e,	// (0x000929b3) bg_cl_pane_g1

0xd956,	// (0x000929bb) bg_cl_pane_g2

0xd95e,	// (0x000929c3) bg_cl_pane_g3

0xd966,	// (0x000929cb) bg_cl_pane_g4

0xd96e,	// (0x000929d3) bg_cl_pane_g5

0xd976,	// (0x000929db) bg_cl_pane_g6

0xd97e,	// (0x000929e3) bg_cl_pane_g7

0xd986,	// (0x000929eb) bg_cl_pane_g8

0xd98e,	// (0x000929f3) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00094ae8) bg_cl_pane_g

0x8dd2,	// (0x0008de37) aid_height_cl_leading_ParamLimits

0x8dd2,	// (0x0008de37) aid_height_cl_leading

0x8dde,	// (0x0008de43) aid_height_cl_text_ParamLimits

0x8dde,	// (0x0008de43) aid_height_cl_text

0x1332,	// (0x00086397) bg_cl_header_pane_ParamLimits

0x1332,	// (0x00086397) bg_cl_header_pane

0x8dfd,	// (0x0008de62) cl_header_pane_g1_ParamLimits

0x8dfd,	// (0x0008de62) cl_header_pane_g1

0x8e13,	// (0x0008de78) cl_header_pane_t1_ParamLimits

0x8e13,	// (0x0008de78) cl_header_pane_t1

0xd996,	// (0x000929fb) cl_list_pane

0xd536,	// (0x0009259b) hc_scroll_pane_cp01

0x2ef2,	// (0x00087f57) bg_cl_header_pane_g1

0xd41c,	// (0x00092481) bg_cl_header_pane_g2

0x2f12,	// (0x00087f77) bg_cl_header_pane_g3

0xd42c,	// (0x00092491) bg_cl_header_pane_g4

0xd424,	// (0x00092489) bg_cl_header_pane_g5

0xd67f,	// (0x000926e4) bg_cl_header_pane_g6

0xd444,	// (0x000924a9) bg_cl_header_pane_g7

0xd44c,	// (0x000924b1) bg_cl_header_pane_g8

0xd43c,	// (0x000924a1) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00094afb) bg_cl_header_pane_g

0x8e2c,	// (0x0008de91) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e2c,	// (0x0008de91) hc_cl_list_double_graphic_heading_pane

0x8e3d,	// (0x0008dea2) hc_cl_list_single_graphic_pane_ParamLimits

0x8e3d,	// (0x0008dea2) hc_cl_list_single_graphic_pane

0x8e53,	// (0x0008deb8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e53,	// (0x0008deb8) hc_cl_list_single_graphic_pane_g1

0x8e5f,	// (0x0008dec4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e5f,	// (0x0008dec4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00094b0e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00094b0e) hc_cl_list_single_graphic_pane_g

0x8e73,	// (0x0008ded8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e73,	// (0x0008ded8) hc_cl_list_single_graphic_pane_t1

0x8e53,	// (0x0008deb8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e53,	// (0x0008deb8) hc_cl_list_double_graphic_heading_pane_g1

0x8e88,	// (0x0008deed) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e88,	// (0x0008deed) hc_cl_list_double_graphic_heading_pane_g2

0x8e9c,	// (0x0008df01) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e9c,	// (0x0008df01) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00094b13) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00094b13) hc_cl_list_double_graphic_heading_pane_g

0x8eb0,	// (0x0008df15) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8eb0,	// (0x0008df15) hc_cl_list_double_graphic_heading_pane_t1

0x8ec5,	// (0x0008df2a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ec5,	// (0x0008df2a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00094b1a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00094b1a) hc_cl_list_double_graphic_heading_pane_t

0x8eda,	// (0x0008df3f) vid4_progress_pane_g1

0x8eec,	// (0x0008df51) vid4_progress_pane_g2

0xb4d4,	// (0x00090539) vid4_progress_pane_g3

0xefb8,	// (0x0009401d) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00094b1f) vid4_progress_pane_g

0xefd6,	// (0x0009403b) vid4_progress_pane_t1

0xefeb,	// (0x00094050) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00094b2a) vid4_progress_pane_t

0xf016,	// (0x0009407b) wait_bar_pane_cp07

0xc4d1,	// (0x00091536) blid_firmament_pane_ParamLimits

0xc514,	// (0x00091579) popup_blid_sat_info2_window_g1

0xc538,	// (0x0009159d) popup_blid_sat_info2_window_t3

0xc546,	// (0x000915ab) popup_blid_sat_info2_window_t4

0xc554,	// (0x000915b9) popup_blid_sat_info2_window_t5

0xc562,	// (0x000915c7) popup_blid_sat_info2_window_t6

0xc572,	// (0x000915d7) popup_blid_sat_info2_window_t7

0xc580,	// (0x000915e5) popup_blid_sat_info2_window_t8

0xc58e,	// (0x000915f3) popup_blid_sat_info2_window_t9

0xc59c,	// (0x00091601) popup_blid_sat_info2_window_t10

0xc65e,	// (0x000916c3) aid_firma_cardinal_ParamLimits

0xc672,	// (0x000916d7) blid_firmament_pane_t1_ParamLimits

0xc689,	// (0x000916ee) blid_firmament_pane_t2_ParamLimits

0xc6a0,	// (0x00091705) blid_firmament_pane_t3_ParamLimits

0xc6b7,	// (0x0009171c) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0009473d) blid_firmament_pane_t_ParamLimits

0xc6ce,	// (0x00091733) blid_sat_info_pane_ParamLimits

0x1332,	// (0x00086397) main_cam_set_pane_ParamLimits

0x74e2,	// (0x0008c547) aid_size_cell_colour_35_ParamLimits

0x7502,	// (0x0008c567) aid_size_cell_colour_112_ParamLimits

0x7522,	// (0x0008c587) aid_size_cell_effect_ParamLimits

0xc1c3,	// (0x00091228) bg_tb_trans_pane_cp02_ParamLimits

0x3d62,	// (0x00088dc7) heading_imed_pane_ParamLimits

0x7542,	// (0x0008c5a7) listscroll_imed_pane_ParamLimits

0xb7e9,	// (0x0009084e) popup_call2_audio_first_window_g5_ParamLimits

0xb7e9,	// (0x0009084e) popup_call2_audio_first_window_g5

0x7ad5,	// (0x0008cb3a) aid_size_touch_image3_arrow_left_ParamLimits

0x7ad5,	// (0x0008cb3a) aid_size_touch_image3_arrow_left

0x7b01,	// (0x0008cb66) aid_size_touch_image3_arrow_right_ParamLimits

0x7b01,	// (0x0008cb66) aid_size_touch_image3_arrow_right

0xf001,	// (0x00094066) vid4_progress_pane_t3

0x7855,	// (0x0008c8ba) main_hwr_training_symbol_option_pane_ParamLimits

0x7855,	// (0x0008c8ba) main_hwr_training_symbol_option_pane

0xcf32,	// (0x00091f97) popup_hwr_training_preview_window_ParamLimits

0xcf32,	// (0x00091f97) popup_hwr_training_preview_window

0x7875,	// (0x0008c8da) hwr_training_navi_pane_g5_ParamLimits

0x7875,	// (0x0008c8da) hwr_training_navi_pane_g5

0xd40a,	// (0x0009246f) popup_char_count_window

0x1332,	// (0x00086397) bg_popup_sub_pane_cp20_ParamLimits

0x8a1b,	// (0x0008da80) list_vitu2_match_list_pane_ParamLimits

0x8a2a,	// (0x0008da8f) vitu2_page_scroll_pane_ParamLimits

0x8a2a,	// (0x0008da8f) vitu2_page_scroll_pane

0xd9b9,	// (0x00092a1e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9b9,	// (0x00092a1e) list_single_hwr_training_symbol_option_pane

0xd9cc,	// (0x00092a31) list_single_hwr_training_symbol_option_pane_g1

0xd9d4,	// (0x00092a39) list_single_hwr_training_symbol_option_pane_t1

0xd9e2,	// (0x00092a47) bg_button_pane_cp023

0xd9eb,	// (0x00092a50) bg_button_pane_cp024

0x8f19,	// (0x0008df7e) vitu2_page_scroll_pane_g1

0x8f21,	// (0x0008df86) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00094b31) vitu2_page_scroll_pane_g

0x8f29,	// (0x0008df8e) vitu2_page_scroll_pane_t1

0xda1e,	// (0x00092a83) popup_char_count_window_g1

0xda27,	// (0x00092a8c) popup_char_count_window_g2

0xda30,	// (0x00092a95) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00094b36) popup_char_count_window_g

0xda39,	// (0x00092a9e) popup_char_count_window_t1

0xebd1,	// (0x00093c36) main_vded2_pane

0xcc31,	// (0x00091c96) aid_size_cell_imed_line

0xcc3b,	// (0x00091ca0) grid_imed_line_width_pane

0xef13,	// (0x00093f78) vid4_indicators_pane_g4

0xda47,	// (0x00092aac) cell_imed_line_width_pane_ParamLimits

0xda47,	// (0x00092aac) cell_imed_line_width_pane

0xda5b,	// (0x00092ac0) cell_imed_line_width_pane_g1

0xda64,	// (0x00092ac9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00094b3d) cell_imed_line_width_pane_g

0x8f38,	// (0x0008df9d) main_vded2_pane_g1_ParamLimits

0x8f38,	// (0x0008df9d) main_vded2_pane_g1

0x8f4e,	// (0x0008dfb3) main_vded2_pane_g2_ParamLimits

0x8f4e,	// (0x0008dfb3) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00094b42) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00094b42) main_vded2_pane_g

0x8f60,	// (0x0008dfc5) vded2_slider_pane_ParamLimits

0x8f60,	// (0x0008dfc5) vded2_slider_pane

0x8f70,	// (0x0008dfd5) aid_size_touch_vded2_end

0x8f7a,	// (0x0008dfdf) aid_size_touch_vded2_playhead

0xda6c,	// (0x00092ad1) aid_size_touch_vded2_start

0xda74,	// (0x00092ad9) vded2_slider_bg_pane

0xda7d,	// (0x00092ae2) vded2_slider_pane_g1

0xda86,	// (0x00092aeb) vded2_slider_pane_g2

0x8f84,	// (0x0008dfe9) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00094b47) vded2_slider_pane_g

0xda8e,	// (0x00092af3) vded2_slider_bg_pane_g1

0xda97,	// (0x00092afc) vded2_slider_bg_pane_g2

0xdaa0,	// (0x00092b05) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00094b4e) vded2_slider_bg_pane_g

0x4cdb,	// (0x00089d40) aid_postcard_touch_down_pane_ParamLimits

0x4cdb,	// (0x00089d40) aid_postcard_touch_down_pane

0x4cf1,	// (0x00089d56) aid_postcard_touch_up_pane_ParamLimits

0x4cf1,	// (0x00089d56) aid_postcard_touch_up_pane

0xebd1,	// (0x00093c36) main_blid2_pane

0xc1d1,	// (0x00091236) popup_blid2_search_window

0xebd1,	// (0x00093c36) blid2_gps_pane

0xebd1,	// (0x00093c36) blid2_navig_pane

0xebd1,	// (0x00093c36) blid2_search_pane

0xebd1,	// (0x00093c36) blid2_tripm_pane

0x8f8f,	// (0x0008dff4) blid2_search_pane_g1_ParamLimits

0x8f8f,	// (0x0008dff4) blid2_search_pane_g1

0x8fa9,	// (0x0008e00e) blid2_search_pane_t1_ParamLimits

0x8fa9,	// (0x0008e00e) blid2_search_pane_t1

0x8fbb,	// (0x0008e020) aid_size_cell_blid2_gps_ParamLimits

0x8fbb,	// (0x0008e020) aid_size_cell_blid2_gps

0x8fd3,	// (0x0008e038) blid2_gps_pane_g1_ParamLimits

0x8fd3,	// (0x0008e038) blid2_gps_pane_g1

0x8fe7,	// (0x0008e04c) grid_blid2_satellite_pane_ParamLimits

0x8fe7,	// (0x0008e04c) grid_blid2_satellite_pane

0x9001,	// (0x0008e066) blid2_navig_pane_g1_ParamLimits

0x9001,	// (0x0008e066) blid2_navig_pane_g1

0x900d,	// (0x0008e072) blid2_navig_pane_t1_ParamLimits

0x900d,	// (0x0008e072) blid2_navig_pane_t1

0x9028,	// (0x0008e08d) blid2_navig_pane_t2_ParamLimits

0x9028,	// (0x0008e08d) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00094b55) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00094b55) blid2_navig_pane_t

0x9043,	// (0x0008e0a8) blid2_navig_ring_pane_ParamLimits

0x9043,	// (0x0008e0a8) blid2_navig_ring_pane

0x905c,	// (0x0008e0c1) blid2_speed_pane_ParamLimits

0x905c,	// (0x0008e0c1) blid2_speed_pane

0x9068,	// (0x0008e0cd) blid2_tripm_pane_g1_ParamLimits

0x9068,	// (0x0008e0cd) blid2_tripm_pane_g1

0x9081,	// (0x0008e0e6) blid2_tripm_pane_g2_ParamLimits

0x9081,	// (0x0008e0e6) blid2_tripm_pane_g2

0x9095,	// (0x0008e0fa) blid2_tripm_pane_g3_ParamLimits

0x9095,	// (0x0008e0fa) blid2_tripm_pane_g3

0x90a9,	// (0x0008e10e) blid2_tripm_pane_g4_ParamLimits

0x90a9,	// (0x0008e10e) blid2_tripm_pane_g4

0x90bd,	// (0x0008e122) blid2_tripm_pane_g5_ParamLimits

0x90bd,	// (0x0008e122) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00094b5a) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00094b5a) blid2_tripm_pane_g

0x90e3,	// (0x0008e148) blid2_tripm_pane_t1_ParamLimits

0x90e3,	// (0x0008e148) blid2_tripm_pane_t1

0x90fe,	// (0x0008e163) blid2_tripm_pane_t2_ParamLimits

0x90fe,	// (0x0008e163) blid2_tripm_pane_t2

0x9117,	// (0x0008e17c) blid2_tripm_pane_t3_ParamLimits

0x9117,	// (0x0008e17c) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00094b67) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00094b67) blid2_tripm_pane_t

0x915e,	// (0x0008e1c3) cell_blid2_satellite_pane_ParamLimits

0x915e,	// (0x0008e1c3) cell_blid2_satellite_pane

0x917c,	// (0x0008e1e1) cell_blid2_satellite_pane_g1

0xdaa9,	// (0x00092b0e) cell_blid2_satellite_pane_t1

0xc6de,	// (0x00091743) blid2_speed_pane_g1

0xdab7,	// (0x00092b1c) blid2_speed_pane_t1

0xdac5,	// (0x00092b2a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00094b70) blid2_speed_pane_t

0xc6de,	// (0x00091743) blid2_navig_ring_pane_g1

0x9185,	// (0x0008e1ea) blid2_navig_ring_pane_g2

0x918d,	// (0x0008e1f2) blid2_navig_ring_pane_g3

0x9195,	// (0x0008e1fa) blid2_navig_ring_pane_g4

0x919d,	// (0x0008e202) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00094b75) blid2_navig_ring_pane_g

0xebd1,	// (0x00093c36) bg_popup_window_pane_cp011

0xdad3,	// (0x00092b38) popup_blid2_search_window_g1

0xdadb,	// (0x00092b40) popup_blid2_search_window_t1

0xdae9,	// (0x00092b4e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00094b80) popup_blid2_search_window_t

0x2dbe,	// (0x00087e23) main_browser_pane_g1

0x1b68,	// (0x00086bcd) main_browser_pane_ParamLimits

0x1332,	// (0x00086397) bg_button_pane_cp011_ParamLimits

0x82cb,	// (0x0008d330) cell_vitu2_function_pane_g1_ParamLimits

0xc1c3,	// (0x00091228) bg_popup_sub_pane_cp22_ParamLimits

0x0674,	// (0x000856d9) input_focus_pane_cp08_ParamLimits

0x8ba4,	// (0x0008dc09) popup_vitu2_query_button_pane_ParamLimits

0x8ba4,	// (0x0008dc09) popup_vitu2_query_button_pane

0x068b,	// (0x000856f0) popup_vitu2_query_input_button_pane

0xd6ba,	// (0x0009271f) popup_vitu2_query_window_g1_ParamLimits

0x0695,	// (0x000856fa) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00094a81) popup_vitu2_query_window_g_ParamLimits

0xebd1,	// (0x00093c36) bg_button_pane_cp026

0x91a5,	// (0x0008e20a) popup_vitu2_query_input_button_pane_g1

0xebd1,	// (0x00093c36) bg_button_pane_cp025

0xdaf7,	// (0x00092b5c) popup_vitu2_query_button_pane_t1

0x68f5,	// (0x0008b95a) main_mp3_pane_t6

0x6903,	// (0x0008b968) popup_slider_window_cp01

0xee77,	// (0x00093edc) cam4_battery_pane

0xeed0,	// (0x00093f35) cam4_battery_pane_cp02

0xefb0,	// (0x00094015) cam4_battery_pane_cp01

0xefb0,	// (0x00094015) cam4_battery_pane_cp03

0xc6de,	// (0x00091743) cam4_battery_pane_g1

0xdb05,	// (0x00092b6a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00094b85) cam4_battery_pane_g

0xc5aa,	// (0x0009160f) popup_blid_sat_info2_window_t11

0x446d,	// (0x000894d2) aid_size_touch_mv_arrow_left_ParamLimits

0x4496,	// (0x000894fb) aid_size_touch_mv_arrow_right_ParamLimits

0x44f4,	// (0x00089559) navi_pane_g1_ParamLimits

0x4500,	// (0x00089565) navi_pane_g2_ParamLimits

0x452e,	// (0x00089593) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0009444f) navi_pane_g_ParamLimits

0x45ec,	// (0x00089651) navi_pane_mv_t1_ParamLimits

0x754e,	// (0x0008c5b3) grid_imed_effect_pane_ParamLimits

0x2964,	// (0x000879c9) aid_placing_vt_slider_lsc

0x2974,	// (0x000879d9) aid_placing_vt_slider_prt

0x1332,	// (0x00086397) bg_tb_trans_pane_cp01_ParamLimits

0xc86a,	// (0x000918cf) popup_image_details_window_g1_ParamLimits

0xc87d,	// (0x000918e2) popup_image_details_window_g2_ParamLimits

0xc892,	// (0x000918f7) popup_image_details_window_g3_ParamLimits

0xc892,	// (0x000918f7) popup_image_details_window_g3

0xf71d,	// (0x00094782) popup_image_details_window_g_ParamLimits

0xc8a6,	// (0x0009190b) popup_image_details_window_t1_ParamLimits

0xc8b8,	// (0x0009191d) popup_image_details_window_t2_ParamLimits

0xc8d1,	// (0x00091936) popup_image_details_window_t3_ParamLimits

0xc8e5,	// (0x0009194a) popup_image_details_window_t4_ParamLimits

0xc900,	// (0x00091965) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x00094789) popup_image_details_window_t_ParamLimits

0x8dea,	// (0x0008de4f) cl_header_name_pane_ParamLimits

0x8dea,	// (0x0008de4f) cl_header_name_pane

0x91ad,	// (0x0008e212) cl_header_name_pane_t1_ParamLimits

0x91ad,	// (0x0008e212) cl_header_name_pane_t1

0x91ce,	// (0x0008e233) cl_header_name_pane_t2_ParamLimits

0x91ce,	// (0x0008e233) cl_header_name_pane_t2

0x9210,	// (0x0008e275) cl_header_name_pane_t3_ParamLimits

0x9210,	// (0x0008e275) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00094b8a) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00094b8a) cl_header_name_pane_t

0x45bd,	// (0x00089622) navi_pane_mv_g2_ParamLimits

0xd3c7,	// (0x0009242c) field_vitu2_entry_pane_g1_ParamLimits

0xd3d3,	// (0x00092438) field_vitu2_entry_pane_g2_ParamLimits

0xd3df,	// (0x00092444) field_vitu2_entry_pane_g3_ParamLimits

0xd3df,	// (0x00092444) field_vitu2_entry_pane_g3

0xf91b,	// (0x00094980) field_vitu2_entry_pane_g_ParamLimits

0x8242,	// (0x0008d2a7) cell_vitu2_itu_pane_g1_ParamLimits

0x8252,	// (0x0008d2b7) cell_vitu2_itu_pane_g2_ParamLimits

0x8252,	// (0x0008d2b7) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009498c) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009498c) cell_vitu2_itu_pane_g

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp05_ParamLimits

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp05

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp03

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp04

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp10_ParamLimits

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp10

0x07b2,	// (0x00085817) bg_vkb2_func_pane_cp08

0x8d94,	// (0x0008ddf9) bg_vkb2_func_pane_cp06

0x8da2,	// (0x0008de07) bg_vkb2_func_pane_cp07

0xd9f4,	// (0x00092a59) bg_vkb2_func_pane_cp11_ParamLimits

0xd9f4,	// (0x00092a59) bg_vkb2_func_pane_cp11

0xda09,	// (0x00092a6e) bg_vkb2_func_pane_cp12_ParamLimits

0xda09,	// (0x00092a6e) bg_vkb2_func_pane_cp12

0xebd1,	// (0x00093c36) bg_vkb2_func_pane_cp09

0xd41c,	// (0x00092481) bg_vkb2_func_pane_g1

0x2f12,	// (0x00087f77) bg_vkb2_func_pane_g2

0xd424,	// (0x00092489) bg_vkb2_func_pane_g3

0xd42c,	// (0x00092491) bg_vkb2_func_pane_g4

0xd67f,	// (0x000926e4) bg_vkb2_func_pane_g5

0xd444,	// (0x000924a9) bg_vkb2_func_pane_g6

0xd44c,	// (0x000924b1) bg_vkb2_func_pane_g7

0xd43c,	// (0x000924a1) bg_vkb2_func_pane_g8

0x2ef2,	// (0x00087f57) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00094b91) bg_vkb2_func_pane_g

0x90d1,	// (0x0008e136) blid2_tripm_pane_g6_ParamLimits

0x90d1,	// (0x0008e136) blid2_tripm_pane_g6

0xd223,	// (0x00092288) mp4_progress_pane_g1

0x914a,	// (0x0008e1af) blid2_tripm_values_pane_ParamLimits

0x914a,	// (0x0008e1af) blid2_tripm_values_pane

0x9241,	// (0x0008e2a6) blid2_tripm_values_pane_t1

0x924f,	// (0x0008e2b4) blid2_tripm_values_pane_t2

0x925d,	// (0x0008e2c2) blid2_tripm_values_pane_t3

0x926b,	// (0x0008e2d0) blid2_tripm_values_pane_t4

0x9279,	// (0x0008e2de) blid2_tripm_values_pane_t5

0x9287,	// (0x0008e2ec) blid2_tripm_values_pane_t6

0x9295,	// (0x0008e2fa) blid2_tripm_values_pane_t7

0x92a3,	// (0x0008e308) blid2_tripm_values_pane_t8

0x92b1,	// (0x0008e316) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00094ba4) blid2_tripm_values_pane_t

0x29b0,	// (0x00087a15) call_video_pane_t1_ParamLimits

0x29ce,	// (0x00087a33) call_video_pane_t2_ParamLimits

0xf273,	// (0x000942d8) call_video_pane_t_ParamLimits

0x0468,	// (0x000854cd) msg_header_pane_g1_ParamLimits

0x4c45,	// (0x00089caa) msg_header_pane_g2_ParamLimits

0x4c45,	// (0x00089caa) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000944f2) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000944f2) msg_header_pane_g

0x1b68,	// (0x00086bcd) main_clock2_pane_ParamLimits

0x724d,	// (0x0008c2b2) grid_clock2_toolbar_pane_ParamLimits

0x724d,	// (0x0008c2b2) grid_clock2_toolbar_pane

0x724d,	// (0x0008c2b2) listscroll_clock2_pane_ParamLimits

0x724d,	// (0x0008c2b2) listscroll_clock2_pane

0x7342,	// (0x0008c3a7) main_clock2_pane_t3_ParamLimits

0x7342,	// (0x0008c3a7) main_clock2_pane_t3

0x7366,	// (0x0008c3cb) main_clock2_pane_t4_ParamLimits

0x7366,	// (0x0008c3cb) main_clock2_pane_t4

0xdb0f,	// (0x00092b74) cell_clock2_toolbar_pane

0xdb17,	// (0x00092b7c) cell_clock2_toolbar_pane_cp01

0xdb17,	// (0x00092b7c) cell_clock2_toolbar_pane_cp02

0xdb1f,	// (0x00092b84) cell_clock2_toolbar_pane_cp03

0xdb27,	// (0x00092b8c) list_clock2_pane

0x4217,	// (0x0008927c) scroll_pane_cp10

0xdb2f,	// (0x00092b94) list_single_clock2_pane_ParamLimits

0xdb2f,	// (0x00092b94) list_single_clock2_pane

0x4666,	// (0x000896cb) list_highlight_pane_cp08

0xdb3c,	// (0x00092ba1) list_single_clock2_pane_t1

0xdb4a,	// (0x00092baf) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00094bb7) list_single_clock2_pane_t

0xebd1,	// (0x00093c36) bg_button_pane_cp10

0xdb58,	// (0x00092bbd) cell_clock2_toolbar_pane_g1

0x4c59,	// (0x00089cbe) aid_main_viewer_pane_g1_ParamLimits

0x4c59,	// (0x00089cbe) aid_main_viewer_pane_g1

0x4c67,	// (0x00089ccc) aid_main_viewer_pane_g2_ParamLimits

0x4c67,	// (0x00089ccc) aid_main_viewer_pane_g2

0x4c75,	// (0x00089cda) aid_main_viewer_pane_g3_ParamLimits

0x4c75,	// (0x00089cda) aid_main_viewer_pane_g3

0x4c84,	// (0x00089ce9) aid_main_viewer_pane_g4_ParamLimits

0x4c84,	// (0x00089ce9) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x00094503) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00094503) aid_main_viewer_pane_g

0x5b1c,	// (0x0008ab81) main_calc_pane_ParamLimits

0x5b30,	// (0x0008ab95) main_dialer2_pane_ParamLimits

0xebd1,	// (0x00093c36) main_cam6_pane

0xebd1,	// (0x00093c36) main_vid6_pane

0x7259,	// (0x0008c2be) listscroll_gen_pane_cp06_ParamLimits

0x7259,	// (0x0008c2be) listscroll_gen_pane_cp06

0x7389,	// (0x0008c3ee) main_clock2_pane_t5_ParamLimits

0x7389,	// (0x0008c3ee) main_clock2_pane_t5

0x73e3,	// (0x0008c448) aid_call2_pane_cp10_ParamLimits

0x73f5,	// (0x0008c45a) aid_call_pane_cp10_ParamLimits

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g1_ParamLimits

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7407,	// (0x0008c46c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7407,	// (0x0008c46c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x43fc,	// (0x00089461) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00094839) popup_clock_analogue_window_cp10_g_ParamLimits

0x7419,	// (0x0008c47e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7a82,	// (0x0008cae7) cell_dialer2_keypad_pane_g2_ParamLimits

0x7a82,	// (0x0008cae7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009491f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009491f) cell_dialer2_keypad_pane_g

0x7a9e,	// (0x0008cb03) cell_dialer2_keypad_pane_t1

0x85e2,	// (0x0008d647) main_cset_text2_pane_ParamLimits

0x85e2,	// (0x0008d647) main_cset_text2_pane

0xd8a6,	// (0x0009290b) area_vitu2_query_pane_g1_ParamLimits

0x0779,	// (0x000857de) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00094ad4) area_vitu2_query_pane_g_ParamLimits

0xd92a,	// (0x0009298f) area_vitu2_query_pane_t7_ParamLimits

0xd92a,	// (0x0009298f) area_vitu2_query_pane_t7

0x8d94,	// (0x0008ddf9) bg_button_pane_cp018_ParamLimits

0x8da2,	// (0x0008de07) bg_button_pane_cp021_ParamLimits

0x07b2,	// (0x00085817) bg_button_pane_cp022_ParamLimits

0x07b2,	// (0x00085817) bg_vkb2_func_pane_cp08_ParamLimits

0x8d94,	// (0x0008ddf9) bg_vkb2_func_pane_cp06_ParamLimits

0x8da2,	// (0x0008de07) bg_vkb2_func_pane_cp07_ParamLimits

0x07c1,	// (0x00085826) input_focus_pane_cp09_ParamLimits

0xf030,	// (0x00094095) cam6_autofocus_pane_ParamLimits

0xf030,	// (0x00094095) cam6_autofocus_pane

0x92bf,	// (0x0008e324) cam6_image_uncrop_pane_ParamLimits

0x92bf,	// (0x0008e324) cam6_image_uncrop_pane

0x92ce,	// (0x0008e333) cam6_indi_pane_ParamLimits

0x92ce,	// (0x0008e333) cam6_indi_pane

0x92e4,	// (0x0008e349) cam6_mode_pane_ParamLimits

0x92e4,	// (0x0008e349) cam6_mode_pane

0x92f6,	// (0x0008e35b) cam6_timer_pane_ParamLimits

0x92f6,	// (0x0008e35b) cam6_timer_pane

0x9302,	// (0x0008e367) cam6_zoom_pane_ParamLimits

0x9302,	// (0x0008e367) cam6_zoom_pane

0x930e,	// (0x0008e373) cam6_mode_pane_g1_ParamLimits

0x930e,	// (0x0008e373) cam6_mode_pane_g1

0x931e,	// (0x0008e383) cam6_mode_pane_g2_ParamLimits

0x931e,	// (0x0008e383) cam6_mode_pane_g2

0x932e,	// (0x0008e393) cam6_mode_pane_g3_ParamLimits

0x932e,	// (0x0008e393) cam6_mode_pane_g3

0x933e,	// (0x0008e3a3) cam6_mode_pane_g4_ParamLimits

0x933e,	// (0x0008e3a3) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00094bbc) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00094bbc) cam6_mode_pane_g

0xdb60,	// (0x00092bc5) bg_tb_trans_pane_cp08_ParamLimits

0xdb60,	// (0x00092bc5) bg_tb_trans_pane_cp08

0xdb6e,	// (0x00092bd3) cam6_battery_pane_ParamLimits

0xdb6e,	// (0x00092bd3) cam6_battery_pane

0xdb84,	// (0x00092be9) cam6_indi_pane_g1_ParamLimits

0xdb84,	// (0x00092be9) cam6_indi_pane_g1

0xdb96,	// (0x00092bfb) cam6_indi_pane_g2_ParamLimits

0xdb96,	// (0x00092bfb) cam6_indi_pane_g2

0xdba8,	// (0x00092c0d) cam6_indi_pane_g3_ParamLimits

0xdba8,	// (0x00092c0d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00094bc5) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00094bc5) cam6_indi_pane_g

0xdbba,	// (0x00092c1f) cam6_indi_pane_t1_ParamLimits

0xdbba,	// (0x00092c1f) cam6_indi_pane_t1

0x934e,	// (0x0008e3b3) cam6_autofocus_pane_g1

0x9356,	// (0x0008e3bb) cam6_autofocus_pane_g2

0x935e,	// (0x0008e3c3) cam6_autofocus_pane_g3

0x9366,	// (0x0008e3cb) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00094bcc) cam6_autofocus_pane_g

0xdbe0,	// (0x00092c45) cam6_timer_pane_g1

0xdbe8,	// (0x00092c4d) cam6_timer_pane_t1

0xdbf6,	// (0x00092c5b) cam6_zoom_cont_pane

0xdbfe,	// (0x00092c63) cam6_zoom_pane_g1

0xdc06,	// (0x00092c6b) cam6_zoom_pane_g2

0x936e,	// (0x0008e3d3) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00094bd5) cam6_zoom_pane_g

0xc6de,	// (0x00091743) cam6_battery_pane_g1

0xc6de,	// (0x00091743) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x00094746) cam6_battery_pane_g

0xdc0e,	// (0x00092c73) cam6_zoom_cont_pane_g1

0xdc17,	// (0x00092c7c) cam6_zoom_cont_pane_g2

0xdc20,	// (0x00092c85) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00094bdc) cam6_zoom_cont_pane_g

0x938b,	// (0x0008e3f0) cam6_mode_pane_cp_ParamLimits

0x938b,	// (0x0008e3f0) cam6_mode_pane_cp

0x9302,	// (0x0008e367) cam6_zoom_pane_cp_ParamLimits

0x9302,	// (0x0008e367) cam6_zoom_pane_cp

0x939d,	// (0x0008e402) vid6_image_uncrop_cif_pane_ParamLimits

0x939d,	// (0x0008e402) vid6_image_uncrop_cif_pane

0x93ad,	// (0x0008e412) vid6_image_uncrop_nhd_pane_ParamLimits

0x93ad,	// (0x0008e412) vid6_image_uncrop_nhd_pane

0x92bf,	// (0x0008e324) vid6_image_uncrop_vga_pane_ParamLimits

0x92bf,	// (0x0008e324) vid6_image_uncrop_vga_pane

0x93bc,	// (0x0008e421) vid6_image_uncrop_wvga_pane_ParamLimits

0x93bc,	// (0x0008e421) vid6_image_uncrop_wvga_pane

0x93cb,	// (0x0008e430) vid6_indi_pane_ParamLimits

0x93cb,	// (0x0008e430) vid6_indi_pane

0xdb60,	// (0x00092bc5) bg_tb_trans_pane_cp09_ParamLimits

0xdb60,	// (0x00092bc5) bg_tb_trans_pane_cp09

0xdc38,	// (0x00092c9d) cam6_battery_pane_cp_ParamLimits

0xdc38,	// (0x00092c9d) cam6_battery_pane_cp

0xdc44,	// (0x00092ca9) vid6_indi_pane_g1_ParamLimits

0xdc44,	// (0x00092ca9) vid6_indi_pane_g1

0xdc56,	// (0x00092cbb) vid6_indi_pane_g2_ParamLimits

0xdc56,	// (0x00092cbb) vid6_indi_pane_g2

0xdc68,	// (0x00092ccd) vid6_indi_pane_g3_ParamLimits

0xdc68,	// (0x00092ccd) vid6_indi_pane_g3

0xdc7d,	// (0x00092ce2) vid6_indi_pane_g4_ParamLimits

0xdc7d,	// (0x00092ce2) vid6_indi_pane_g4

0xdc92,	// (0x00092cf7) vid6_indi_pane_g5_ParamLimits

0xdc92,	// (0x00092cf7) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00094be3) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00094be3) vid6_indi_pane_g

0xdcac,	// (0x00092d11) vid6_indi_pane_t1_ParamLimits

0xdcac,	// (0x00092d11) vid6_indi_pane_t1

0xdcc2,	// (0x00092d27) vid6_indi_pane_t2_ParamLimits

0xdcc2,	// (0x00092d27) vid6_indi_pane_t2

0xdcea,	// (0x00092d4f) vid6_indi_pane_t3_ParamLimits

0xdcea,	// (0x00092d4f) vid6_indi_pane_t3

0xdd12,	// (0x00092d77) vid6_indi_pane_t4_ParamLimits

0xdd12,	// (0x00092d77) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00094bee) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00094bee) vid6_indi_pane_t

0xdd36,	// (0x00092d9b) wait_bar_pane_cp08

0x93e3,	// (0x0008e448) main_cset_text2_pane_t1_ParamLimits

0x93e3,	// (0x0008e448) main_cset_text2_pane_t1

0x9376,	// (0x0008e3db) listscroll_gen_pane_cp06_t1_ParamLimits

0x9376,	// (0x0008e3db) listscroll_gen_pane_cp06_t1

0xebd1,	// (0x00093c36) main_cam6_set_pane

0xc94a,	// (0x000919af) bg_tb_trans_pane_cp06_ParamLimits

0xee7f,	// (0x00093ee4) cam4_indicators_pane_g1_ParamLimits

0xee90,	// (0x00093ef5) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009495c) cam4_indicators_pane_g_ParamLimits

0xeeae,	// (0x00093f13) cam4_indicators_pane_t1_ParamLimits

0x1332,	// (0x00086397) bg_tb_trans_pane_cp07_ParamLimits

0xeeda,	// (0x00093f3f) vid4_indicators_pane_g1_ParamLimits

0xeeee,	// (0x00093f53) vid4_indicators_pane_g2_ParamLimits

0xef02,	// (0x00093f67) vid4_indicators_pane_g3_ParamLimits

0xef13,	// (0x00093f78) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009496e) vid4_indicators_pane_g_ParamLimits

0xef31,	// (0x00093f96) vid4_indicators_pane_t1_ParamLimits

0x8eda,	// (0x0008df3f) vid4_progress_pane_g1_ParamLimits

0x8eec,	// (0x0008df51) vid4_progress_pane_g2_ParamLimits

0xb4d4,	// (0x00090539) vid4_progress_pane_g3_ParamLimits

0xefb8,	// (0x0009401d) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00094b1f) vid4_progress_pane_g_ParamLimits

0xefd6,	// (0x0009403b) vid4_progress_pane_t1_ParamLimits

0xefeb,	// (0x00094050) vid4_progress_pane_t2_ParamLimits

0xf001,	// (0x00094066) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00094b2a) vid4_progress_pane_t_ParamLimits

0xf016,	// (0x0009407b) wait_bar_pane_cp07_ParamLimits

0x9400,	// (0x0008e465) main_cam6_set_pane_g2_ParamLimits

0x9400,	// (0x0008e465) main_cam6_set_pane_g2

0x9424,	// (0x0008e489) main_cset6_listscroll_pane_ParamLimits

0x9424,	// (0x0008e489) main_cset6_listscroll_pane

0x9444,	// (0x0008e4a9) main_cset6_slider_pane_ParamLimits

0x9444,	// (0x0008e4a9) main_cset6_slider_pane

0x945a,	// (0x0008e4bf) main_cset6_text2_pane_ParamLimits

0x945a,	// (0x0008e4bf) main_cset6_text2_pane

0xdd45,	// (0x00092daa) main_cset6_text_pane

0xdd4d,	// (0x00092db2) main_cset_list_pane_copy1_ParamLimits

0xdd4d,	// (0x00092db2) main_cset_list_pane_copy1

0xdd5d,	// (0x00092dc2) scroll_pane_cp028_copy1

0x9468,	// (0x0008e4cd) cset_list_set_pane_copy1

0x9479,	// (0x0008e4de) aid_position_infowindow_above_copy1

0x9481,	// (0x0008e4e6) aid_position_infowindow_below_copy1

0x9489,	// (0x0008e4ee) cset_list_set_pane_g1_copy1

0x07e4,	// (0x00085849) cset_list_set_pane_g3_copy1_ParamLimits

0x07e4,	// (0x00085849) cset_list_set_pane_g3_copy1

0x07f3,	// (0x00085858) cset_list_set_pane_t1_copy1_ParamLimits

0x07f3,	// (0x00085858) cset_list_set_pane_t1_copy1

0x1332,	// (0x00086397) list_highlight_pane_cp021_copy1_ParamLimits

0x1332,	// (0x00086397) list_highlight_pane_cp021_copy1

0xdd66,	// (0x00092dcb) cset6_slider_pane_ParamLimits

0xdd66,	// (0x00092dcb) cset6_slider_pane

0xdd92,	// (0x00092df7) main_cset6_slider_pane_g1_ParamLimits

0xdd92,	// (0x00092df7) main_cset6_slider_pane_g1

0x9491,	// (0x0008e4f6) main_cset6_slider_pane_g2_ParamLimits

0x9491,	// (0x0008e4f6) main_cset6_slider_pane_g2

0xddba,	// (0x00092e1f) main_cset6_slider_pane_g3_ParamLimits

0xddba,	// (0x00092e1f) main_cset6_slider_pane_g3

0x94b9,	// (0x0008e51e) main_cset6_slider_pane_g4_ParamLimits

0x94b9,	// (0x0008e51e) main_cset6_slider_pane_g4

0x94c5,	// (0x0008e52a) main_cset6_slider_pane_g5_ParamLimits

0x94c5,	// (0x0008e52a) main_cset6_slider_pane_g5

0xd54b,	// (0x000925b0) main_cset6_slider_pane_g7_ParamLimits

0xd54b,	// (0x000925b0) main_cset6_slider_pane_g7

0xd557,	// (0x000925bc) main_cset6_slider_pane_g8_ParamLimits

0xd557,	// (0x000925bc) main_cset6_slider_pane_g8

0x868f,	// (0x0008d6f4) main_cset6_slider_pane_g9_ParamLimits

0x868f,	// (0x0008d6f4) main_cset6_slider_pane_g9

0x869b,	// (0x0008d700) main_cset6_slider_pane_g10_ParamLimits

0x869b,	// (0x0008d700) main_cset6_slider_pane_g10

0x86a7,	// (0x0008d70c) main_cset6_slider_pane_g11_ParamLimits

0x86a7,	// (0x0008d70c) main_cset6_slider_pane_g11

0x86b3,	// (0x0008d718) main_cset6_slider_pane_g12_ParamLimits

0x86b3,	// (0x0008d718) main_cset6_slider_pane_g12

0x86bf,	// (0x0008d724) main_cset6_slider_pane_g13_ParamLimits

0x86bf,	// (0x0008d724) main_cset6_slider_pane_g13

0x86cb,	// (0x0008d730) main_cset6_slider_pane_g14_ParamLimits

0x86cb,	// (0x0008d730) main_cset6_slider_pane_g14

0x94d1,	// (0x0008e536) main_cset6_slider_pane_g15_ParamLimits

0x94d1,	// (0x0008e536) main_cset6_slider_pane_g15

0x86ef,	// (0x0008d754) main_cset6_slider_pane_g16_ParamLimits

0x86ef,	// (0x0008d754) main_cset6_slider_pane_g16

0x86fb,	// (0x0008d760) main_cset6_slider_pane_g17_ParamLimits

0x86fb,	// (0x0008d760) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00094bf7) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00094bf7) main_cset6_slider_pane_g

0xddc6,	// (0x00092e2b) main_cset6_slider_pane_t1_ParamLimits

0xddc6,	// (0x00092e2b) main_cset6_slider_pane_t1

0x9501,	// (0x0008e566) main_cset6_slider_pane_t2_ParamLimits

0x9501,	// (0x0008e566) main_cset6_slider_pane_t2

0x952c,	// (0x0008e591) main_cset6_slider_pane_t3_ParamLimits

0x952c,	// (0x0008e591) main_cset6_slider_pane_t3

0x9557,	// (0x0008e5bc) main_cset6_slider_pane_t4_ParamLimits

0x9557,	// (0x0008e5bc) main_cset6_slider_pane_t4

0x9582,	// (0x0008e5e7) main_cset6_slider_pane_t5_ParamLimits

0x9582,	// (0x0008e5e7) main_cset6_slider_pane_t5

0xde07,	// (0x00092e6c) main_cset6_slider_pane_t7_ParamLimits

0xde07,	// (0x00092e6c) main_cset6_slider_pane_t7

0x95ad,	// (0x0008e612) main_cset6_slider_pane_t8_ParamLimits

0x95ad,	// (0x0008e612) main_cset6_slider_pane_t8

0x95d1,	// (0x0008e636) main_cset6_slider_pane_t9_ParamLimits

0x95d1,	// (0x0008e636) main_cset6_slider_pane_t9

0x95f5,	// (0x0008e65a) main_cset6_slider_pane_t10_ParamLimits

0x95f5,	// (0x0008e65a) main_cset6_slider_pane_t10

0x9619,	// (0x0008e67e) main_cset6_slider_pane_t11_ParamLimits

0x9619,	// (0x0008e67e) main_cset6_slider_pane_t11

0xde3d,	// (0x00092ea2) main_cset6_slider_pane_t14_ParamLimits

0xde3d,	// (0x00092ea2) main_cset6_slider_pane_t14

0xde76,	// (0x00092edb) main_cset6_slider_pane_t15_ParamLimits

0xde76,	// (0x00092edb) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00094c1c) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00094c1c) main_cset6_slider_pane_t

0xd633,	// (0x00092698) cset_slider_pane_g1_copy1

0xd63c,	// (0x000926a1) cset_slider_pane_g2_copy1

0xd645,	// (0x000926aa) cset_slider_pane_g3_copy1

0xebd1,	// (0x00093c36) bg_popup_sub_pane_cp011_copy1

0xdeaf,	// (0x00092f14) main_cset_text_pane_g1_copy1

0xd6ce,	// (0x00092733) main_cset_text_pane_t1_copy1

0xd6dc,	// (0x00092741) main_cset_text_pane_t2_copy1

0xd6ea,	// (0x0009274f) main_cset_text_pane_t3_copy1

0xd6f8,	// (0x0009275d) main_cset_text_pane_t4_copy1

0xd706,	// (0x0009276b) main_cset_text_pane_t5_copy1

0xdeb7,	// (0x00092f1c) main_cset_text_pane_t6_copy1

0xd722,	// (0x00092787) main_cset_text_pane_t7_copy1

0x93e3,	// (0x0008e448) main_cset_text2_pane_t1_copy1

0x1332,	// (0x00086397) main_ncimui_pane

0x5d7a,	// (0x0008addf) popup_query_ncimui_window_ParamLimits

0x5d7a,	// (0x0008addf) popup_query_ncimui_window

0xc9af,	// (0x00091a14) field_cale_ev2_pane_g4_ParamLimits

0xc9af,	// (0x00091a14) field_cale_ev2_pane_g4

0x7962,	// (0x0008c9c7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7962,	// (0x0008c9c7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000948fa) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000948fa) cell_video_dialer_keypad_pane_g

0x797a,	// (0x0008c9df) cell_video_dialer_keypad_pane_t1

0xebd1,	// (0x00093c36) bg_popup_window_pane_cp012

0x406d,	// (0x000890d2) heading_pane_cp06

0xdee3,	// (0x00092f48) ncim_query_content_pane

0xebd1,	// (0x00093c36) bg_popup_heading_pane_cp01

0xdeeb,	// (0x00092f50) ncim_heading_pane_t1

0xdef9,	// (0x00092f5e) ncim_indicator_popup_pane

0xdf0b,	// (0x00092f70) ncim_query_button_pane

0xdf1f,	// (0x00092f84) ncim_query_content_pane_t1

0xdf31,	// (0x00092f96) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00094c60) ncim_query_content_pane_t

0xdf6b,	// (0x00092fd0) ncim_query_list_pane

0xdf7d,	// (0x00092fe2) ncim_query_popup_pane

0xdef9,	// (0x00092f5e) ncim_indicator_popup_pane_ParamLimits

0x977e,	// (0x0008e7e3) ncim_query_content_pane_g1_ParamLimits

0x977e,	// (0x0008e7e3) ncim_query_content_pane_g1

0xdf1f,	// (0x00092f84) ncim_query_content_pane_t1_ParamLimits

0xdf31,	// (0x00092f96) ncim_query_content_pane_t2_ParamLimits

0x978a,	// (0x0008e7ef) ncim_query_content_pane_t3_ParamLimits

0x978a,	// (0x0008e7ef) ncim_query_content_pane_t3

0x97b2,	// (0x0008e817) ncim_query_content_pane_t4_ParamLimits

0x97b2,	// (0x0008e817) ncim_query_content_pane_t4

0x97da,	// (0x0008e83f) ncim_query_content_pane_t5_ParamLimits

0x97da,	// (0x0008e83f) ncim_query_content_pane_t5

0xdf43,	// (0x00092fa8) ncim_query_content_pane_t6_ParamLimits

0xdf43,	// (0x00092fa8) ncim_query_content_pane_t6

0xfbfb,	// (0x00094c60) ncim_query_content_pane_t_ParamLimits

0xdf6b,	// (0x00092fd0) ncim_query_list_pane_ParamLimits

0xdf7d,	// (0x00092fe2) ncim_query_popup_pane_ParamLimits

0xdf91,	// (0x00092ff6) wait_bar_pane_cp04

0xebd1,	// (0x00093c36) input_focus_pane_cp011

0xdf99,	// (0x00092ffe) ncim_query_popup_pane_t1

0xdfa7,	// (0x0009300c) ncim_list_query_list_pane_ParamLimits

0xdfa7,	// (0x0009300c) ncim_list_query_list_pane

0xebd1,	// (0x00093c36) bg_button_pane_cp027

0xdfb4,	// (0x00093019) ncim_query_button_pane_g1

0xebd1,	// (0x00093c36) list_highlight_pane_cp012

0xdfbe,	// (0x00093023) ncim_list_query_list_pane_g1

0xdfc6,	// (0x0009302b) ncim_list_query_list_pane_t1

0xee9f,	// (0x00093f04) cam4_indicators_pane_g3_ParamLimits

0xee9f,	// (0x00093f04) cam4_indicators_pane_g3

0xef1f,	// (0x00093f84) vid4_indicators_pane_g5_ParamLimits

0xef1f,	// (0x00093f84) vid4_indicators_pane_g5

0xefc7,	// (0x0009402c) vid4_progress_pane_g5_ParamLimits

0xefc7,	// (0x0009402c) vid4_progress_pane_g5

0x966c,	// (0x0008e6d1) main_ncimui_pane_g1

0x96d2,	// (0x0008e737) ncimui_group_query_pane_ParamLimits

0x96d2,	// (0x0008e737) ncimui_group_query_pane

0x971a,	// (0x0008e77f) ncimui_list_pane_ParamLimits

0x971a,	// (0x0008e77f) ncimui_list_pane

0x9741,	// (0x0008e7a6) ncimui_text_pane_ParamLimits

0x9741,	// (0x0008e7a6) ncimui_text_pane

0x9802,	// (0x0008e867) ncimui_text_pane_t1_ParamLimits

0x9802,	// (0x0008e867) ncimui_text_pane_t1

0xdfd4,	// (0x00093039) ncimui_list_single_graphic_pane_ParamLimits

0xdfd4,	// (0x00093039) ncimui_list_single_graphic_pane

0x9820,	// (0x0008e885) ncimui_query_pane_ParamLimits

0x9820,	// (0x0008e885) ncimui_query_pane

0xebd1,	// (0x00093c36) list_highlight_pane_cp013

0xdfe4,	// (0x00093049) ncim_list_query_list_pane_t1_copy1

0xdfbe,	// (0x00093023) ncim_list_single_graphic_pane_g1

0xdff2,	// (0x00093057) ncim_query_button_pane_cp01

0xdffe,	// (0x00093063) ncim_query_entry_pane_ParamLimits

0xdffe,	// (0x00093063) ncim_query_entry_pane

0xe011,	// (0x00093076) ncimui_query_pane_g1

0xe01d,	// (0x00093082) ncimui_query_pane_t1_ParamLimits

0xe01d,	// (0x00093082) ncimui_query_pane_t1

0x1332,	// (0x00086397) input_focus_pane_cp012

0xe036,	// (0x0009309b) ncim_query_entry_pane_t1

0x1b68,	// (0x00086bcd) main_im_pane_ParamLimits

0x1332,	// (0x00086397) main_mobtv_pane_ParamLimits

0x1332,	// (0x00086397) main_mobtv_pane

0x94e9,	// (0x0008e54e) main_cset6_slider_pane_g18_ParamLimits

0x94e9,	// (0x0008e54e) main_cset6_slider_pane_g18

0x94f5,	// (0x0008e55a) main_cset6_slider_pane_g19_ParamLimits

0x94f5,	// (0x0008e55a) main_cset6_slider_pane_g19

0xf03e,	// (0x000940a3) bg_main_mobtv_pane_ParamLimits

0xf03e,	// (0x000940a3) bg_main_mobtv_pane

0x9833,	// (0x0008e898) main_mobtv_info_pane

0x983c,	// (0x0008e8a1) main_mobtv_loading_pane_ParamLimits

0x983c,	// (0x0008e8a1) main_mobtv_loading_pane

0xe048,	// (0x000930ad) main_mobtv_pg_channel_list_pane

0xe052,	// (0x000930b7) main_mobtv_pg_hdr_pane

0x9849,	// (0x0008e8ae) main_mobtv_programe_curr_pane_ParamLimits

0x9849,	// (0x0008e8ae) main_mobtv_programe_curr_pane

0x9856,	// (0x0008e8bb) main_mobtv_programe_next_pane_ParamLimits

0x9856,	// (0x0008e8bb) main_mobtv_programe_next_pane

0xe05b,	// (0x000930c0) popup_mobtv_noti_window

0xc6de,	// (0x00091743) main_tv_pg_hdr_pane_g1

0xe063,	// (0x000930c8) main_tv_pg_hdr_pane_g2

0xe06b,	// (0x000930d0) main_tv_pg_hdr_pane_g3

0xe073,	// (0x000930d8) main_tv_pg_hdr_pane_g4

0xe07b,	// (0x000930e0) main_tv_pg_hdr_pane_g5

0xe085,	// (0x000930ea) main_tv_pg_hdr_pane_g6

0xe08f,	// (0x000930f4) main_tv_pg_hdr_pane_g7

0xe099,	// (0x000930fe) main_tv_pg_hdr_pane_g8

0xe0a3,	// (0x00093108) main_tv_pg_hdr_pane_g9

0xe0ad,	// (0x00093112) main_tv_pg_hdr_pane_g10

0xe0b7,	// (0x0009311c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00094c6d) main_tv_pg_hdr_pane_g

0xe0c1,	// (0x00093126) main_tv_pg_hdr_pane_t1

0xe0cf,	// (0x00093134) main_tv_pg_hdr_pane_t2

0xe0dd,	// (0x00093142) main_tv_pg_hdr_pane_t3

0xe0ed,	// (0x00093152) main_tv_pg_hdr_pane_t4

0xe0fd,	// (0x00093162) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00094c84) main_tv_pg_hdr_pane_t

0xe10d,	// (0x00093172) single_mobtv_pg_channel_pane_ParamLimits

0xe10d,	// (0x00093172) single_mobtv_pg_channel_pane

0xe11f,	// (0x00093184) single_mobtv_pg_channel_table_pane

0xe128,	// (0x0009318d) single_mobtv_pg_channel_thumb_pane

0xe131,	// (0x00093196) single_tv_pg_channel_pane_g1

0xe13a,	// (0x0009319f) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00094c8f) single_tv_pg_channel_pane_g

0xc94a,	// (0x000919af) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc94a,	// (0x000919af) bg_single_mobtv_pg_channel_thumb_pane

0xe143,	// (0x000931a8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe143,	// (0x000931a8) single_mobtv_pg_channel_thumb_pane_g1

0xe151,	// (0x000931b6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe151,	// (0x000931b6) single_mobtv_pg_channel_thumb_pane_g2

0xe15d,	// (0x000931c2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe15d,	// (0x000931c2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00094c94) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00094c94) single_mobtv_pg_channel_thumb_pane_g

0xe169,	// (0x000931ce) single_mobtv_pg_channel_thumb_pane_t1

0xe177,	// (0x000931dc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00094c9b) single_mobtv_pg_channel_thumb_pane_t

0xc6de,	// (0x00091743) bg_single_mobtv_pg_channel_table_pane_g1

0xc6de,	// (0x00091743) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x00094746) bg_single_mobtv_pg_channel_table_pane_g

0xe185,	// (0x000931ea) single_mobtv_pg_channel_table_pane_t1

0xe193,	// (0x000931f8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00094ca0) single_mobtv_pg_channel_table_pane_t

0x986b,	// (0x0008e8d0) main_mobtv_info_pane_g1_ParamLimits

0x986b,	// (0x0008e8d0) main_mobtv_info_pane_g1

0x9889,	// (0x0008e8ee) main_mobtv_info_pane_t1_ParamLimits

0x9889,	// (0x0008e8ee) main_mobtv_info_pane_t1

0x9901,	// (0x0008e966) main_mobtv_info_pane_t2_ParamLimits

0x9901,	// (0x0008e966) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00094caa) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00094caa) main_mobtv_info_pane_t

0x9990,	// (0x0008e9f5) wait_bar_pane_cp05

0x99a2,	// (0x0008ea07) main_mobtv_loading_pane_g1_ParamLimits

0x99a2,	// (0x0008ea07) main_mobtv_loading_pane_g1

0x99b5,	// (0x0008ea1a) main_mobtv_loading_pane_g2_ParamLimits

0x99b5,	// (0x0008ea1a) main_mobtv_loading_pane_g2

0x99c1,	// (0x0008ea26) main_mobtv_loading_pane_g3_ParamLimits

0x99c1,	// (0x0008ea26) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00094cb1) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00094cb1) main_mobtv_loading_pane_g

0xe1a1,	// (0x00093206) main_mobtv_loading_pane_t1_ParamLimits

0xe1a1,	// (0x00093206) main_mobtv_loading_pane_t1

0xe1b9,	// (0x0009321e) main_mobtv_loading_pane_t2_ParamLimits

0xe1b9,	// (0x0009321e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00094cb8) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00094cb8) main_mobtv_loading_pane_t

0x99d4,	// (0x0008ea39) wait_bar_pane_cp06_ParamLimits

0x99d4,	// (0x0008ea39) wait_bar_pane_cp06

0xe1dd,	// (0x00093242) main_mobtv_programe_curr_pane_t1

0xe1eb,	// (0x00093250) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00094cbd) main_mobtv_programe_curr_pane_t

0xe1f9,	// (0x0009325e) main_mobtv_programe_next_pane_t1

0xe207,	// (0x0009326c) main_mobtv_programe_next_pane_t2

0xe215,	// (0x0009327a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00094cc2) main_mobtv_programe_next_pane_t

0xebd1,	// (0x00093c36) bg_popup_mobtv_noti_window_pane

0xe223,	// (0x00093288) popup_mobtv_noti_window_g1

0xe22b,	// (0x00093290) popup_mobtv_noti_window_t1

0xe239,	// (0x0009329e) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00094cc9) popup_mobtv_noti_window_t

0xc6de,	// (0x00091743) bg_popup_mobtv_noti_window_pane_g1

0xebd1,	// (0x00093c36) sc_clock_pane

0xebd1,	// (0x00093c36) main_fs_bigclock_pane

0x9134,	// (0x0008e199) blid2_tripm_pane_t4_ParamLimits

0x9134,	// (0x0008e199) blid2_tripm_pane_t4

0x99e3,	// (0x0008ea48) sc_clock_pane_g1_ParamLimits

0x99e3,	// (0x0008ea48) sc_clock_pane_g1

0x99f5,	// (0x0008ea5a) sc_clock_pane_t1_ParamLimits

0x99f5,	// (0x0008ea5a) sc_clock_pane_t1

0x9a17,	// (0x0008ea7c) sc_clock_pane_t2_ParamLimits

0x9a17,	// (0x0008ea7c) sc_clock_pane_t2

0x9a2f,	// (0x0008ea94) sc_clock_pane_t3_ParamLimits

0x9a2f,	// (0x0008ea94) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00094cce) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00094cce) sc_clock_pane_t

0xa4ae,	// (0x0008f513) main_fs_bigclock_indicator_pane_ParamLimits

0xa4ae,	// (0x0008f513) main_fs_bigclock_indicator_pane

0xc91a,	// (0x0009197f) main_fs_bigclock_pane_g1_ParamLimits

0xc91a,	// (0x0009197f) main_fs_bigclock_pane_g1

0xa4ba,	// (0x0008f51f) main_fs_bigclock_pane_t1_ParamLimits

0xa4ba,	// (0x0008f51f) main_fs_bigclock_pane_t1

0xa4cc,	// (0x0008f531) main_fs_bigclock_pane_t2_ParamLimits

0xa4cc,	// (0x0008f531) main_fs_bigclock_pane_t2

0xa4e0,	// (0x0008f545) main_fs_bigclock_pane_t3_ParamLimits

0xa4e0,	// (0x0008f545) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00094ed8) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00094ed8) main_fs_bigclock_pane_t

0xa4f2,	// (0x0008f557) main_fs_bigclock_indicator_pane_g1

0xdf13,	// (0x00092f78) ncim_query_content_pane_g2_ParamLimits

0xdf13,	// (0x00092f78) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00094c5b) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00094c5b) ncim_query_content_pane_g

0x9a48,	// (0x0008eaad) sc_clock_pane_t4_ParamLimits

0x9a48,	// (0x0008eaad) sc_clock_pane_t4

0x1332,	// (0x00086397) main_radioblah_pane

0xd33e,	// (0x000923a3) cell_call4_button_pane_t1_copy1_ParamLimits

0xd33e,	// (0x000923a3) cell_call4_button_pane_t1_copy1

0x9684,	// (0x0008e6e9) main_ncimui_pane_t1_ParamLimits

0x9684,	// (0x0008e6e9) main_ncimui_pane_t1

0x969e,	// (0x0008e703) main_ncimui_pane_t2_ParamLimits

0x969e,	// (0x0008e703) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00094c54) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00094c54) main_ncimui_pane_t

0xe373,	// (0x000933d8) main_radioblah_anim_pane_ParamLimits

0xe373,	// (0x000933d8) main_radioblah_anim_pane

0xe384,	// (0x000933e9) main_radioblah_info_pane_ParamLimits

0xe384,	// (0x000933e9) main_radioblah_info_pane

0xe398,	// (0x000933fd) main_radioblah_pane_t1_ParamLimits

0xe398,	// (0x000933fd) main_radioblah_pane_t1

0xe3b4,	// (0x00093419) main_radioblah_pane_t2_ParamLimits

0xe3b4,	// (0x00093419) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00094cef) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00094cef) main_radioblah_pane_t

0x9afe,	// (0x0008eb63) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9afe,	// (0x0008eb63) main_radioblah_rocker_ctrl_pane

0xe3fc,	// (0x00093461) main_radioblah_info_pane_t1_ParamLimits

0xe3fc,	// (0x00093461) main_radioblah_info_pane_t1

0x9b56,	// (0x0008ebbb) main_radioblah_info_pane_t2_ParamLimits

0x9b56,	// (0x0008ebbb) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00094cf8) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00094cf8) main_radioblah_info_pane_t

0xc6de,	// (0x00091743) main_radioblah_rocker_ctrl_pane_g1

0x9c06,	// (0x0008ec6b) main_radioblah_rocker_ctrl_pane_g2

0x9c0e,	// (0x0008ec73) main_radioblah_rocker_ctrl_pane_g3

0x9c16,	// (0x0008ec7b) main_radioblah_rocker_ctrl_pane_g4

0x9c1e,	// (0x0008ec83) main_radioblah_rocker_ctrl_pane_g5

0x9c26,	// (0x0008ec8b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00094d01) main_radioblah_rocker_ctrl_pane_g

0x93e3,	// (0x0008e448) main_cset_text2_pane_t1_copy1_ParamLimits

0xee6f,	// (0x00093ed4) cam4_image_uncrop_qvga_pane

0xeec8,	// (0x00093f2d) vid4_image_uncrop_qcif_pane

0xf030,	// (0x00094095) cam6_image_uncrop_qvga_pane_ParamLimits

0xf030,	// (0x00094095) cam6_image_uncrop_qvga_pane

0xdc28,	// (0x00092c8d) vid6_image_uncrop_qcif_pane_ParamLimits

0xdc28,	// (0x00092c8d) vid6_image_uncrop_qcif_pane

0xebd1,	// (0x00093c36) bg_popup_preview_window_pane_cp03

0xdec5,	// (0x00092f2a) list_cset_text2_pane

0xdecd,	// (0x00092f32) main_cset6_text2_pane_g1

0xded5,	// (0x00092f3a) main_cset6_text2_pane_t1

0x9c2e,	// (0x0008ec93) list_cset_text2_pane_t1_ParamLimits

0x9c2e,	// (0x0008ec93) list_cset_text2_pane_t1

0x1332,	// (0x00086397) main_radioblah_pane_ParamLimits

0x997c,	// (0x0008e9e1) main_mobtv_info_pane_t3_ParamLimits

0x997c,	// (0x0008e9e1) main_mobtv_info_pane_t3

0x9aec,	// (0x0008eb51) main_radioblah_pane_g1

0x9b26,	// (0x0008eb8b) main_radioblah_info_pane_g1

0x9bab,	// (0x0008ec10) main_radioblah_info_pane_t3_ParamLimits

0x9bab,	// (0x0008ec10) main_radioblah_info_pane_t3

0x3b1e,	// (0x00088b83) highlight_cell_cale_month_pane_ParamLimits

0x3b1e,	// (0x00088b83) highlight_cell_cale_month_pane

0xebd1,	// (0x00093c36) main_phob_fisheye_pane

0xca7e,	// (0x00091ae3) scroll_pane_cp0031_ParamLimits

0xca7e,	// (0x00091ae3) scroll_pane_cp0031

0xdd36,	// (0x00092d9b) wait_bar_pane_cp08_ParamLimits

0x9468,	// (0x0008e4cd) cset_list_set_pane_copy1_ParamLimits

0xe436,	// (0x0009349b) highlight_cell_cale_month_pane_g1

0x9c47,	// (0x0008ecac) highlight_cell_cale_month_pane_t1

0xd996,	// (0x000929fb) list_gen_pane_cp01

0xd536,	// (0x0009259b) scroll_pane_01

0xf04c,	// (0x000940b1) list_single_double_fisheye_pane

0x08be,	// (0x00085923) list_double_fisheye_pane_g1_ParamLimits

0x08be,	// (0x00085923) list_double_fisheye_pane_g1

0x08ca,	// (0x0008592f) list_double_fisheye_pane_g2_ParamLimits

0x08ca,	// (0x0008592f) list_double_fisheye_pane_g2

0x9c55,	// (0x0008ecba) list_double_fisheye_pane_g3_ParamLimits

0x9c55,	// (0x0008ecba) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00094d0e) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00094d0e) list_double_fisheye_pane_g

0x08fb,	// (0x00085960) list_double_fisheye_pane_t1_ParamLimits

0x08fb,	// (0x00085960) list_double_fisheye_pane_t1

0x0916,	// (0x0008597b) list_double_fisheye_pane_t2_ParamLimits

0x0916,	// (0x0008597b) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00094d19) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00094d19) list_double_fisheye_pane_t

0xebd1,	// (0x00093c36) main_call5_pane

0x9a73,	// (0x0008ead8) sc_swipe_pane_ParamLimits

0x9a73,	// (0x0008ead8) sc_swipe_pane

0x9c74,	// (0x0008ecd9) call5_image_pane_ParamLimits

0x9c74,	// (0x0008ecd9) call5_image_pane

0x9c91,	// (0x0008ecf6) call5_swipe_1_pane_ParamLimits

0x9c91,	// (0x0008ecf6) call5_swipe_1_pane

0x9ca4,	// (0x0008ed09) call5_swipe_2_pane_ParamLimits

0x9ca4,	// (0x0008ed09) call5_swipe_2_pane

0x9ccf,	// (0x0008ed34) popup_call5_audio_first_window_ParamLimits

0x9ccf,	// (0x0008ed34) popup_call5_audio_first_window

0xc94a,	// (0x000919af) call5_swipe_1_pane_g1_ParamLimits

0xc94a,	// (0x000919af) call5_swipe_1_pane_g1

0xe43e,	// (0x000934a3) call5_swipe_1_pane_g2_ParamLimits

0xe43e,	// (0x000934a3) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00094d1e) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00094d1e) call5_swipe_1_pane_g

0xe44a,	// (0x000934af) call5_swipe_1_pane_t1_ParamLimits

0xe44a,	// (0x000934af) call5_swipe_1_pane_t1

0xc94a,	// (0x000919af) call5_swipe_2_pane_g1_ParamLimits

0xc94a,	// (0x000919af) call5_swipe_2_pane_g1

0xe45f,	// (0x000934c4) call5_swipe_2_pane_g2_ParamLimits

0xe45f,	// (0x000934c4) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00094d23) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00094d23) call5_swipe_2_pane_g

0xe46b,	// (0x000934d0) call5_swipe_2_pane_t1_ParamLimits

0xe46b,	// (0x000934d0) call5_swipe_2_pane_t1

0xe480,	// (0x000934e5) sc_swipe_pane_g1_ParamLimits

0xe480,	// (0x000934e5) sc_swipe_pane_g1

0xe48d,	// (0x000934f2) sc_swipe_pane_g2_ParamLimits

0xe48d,	// (0x000934f2) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00094d28) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00094d28) sc_swipe_pane_g

0xe499,	// (0x000934fe) sc_swipe_pane_t1_ParamLimits

0xe499,	// (0x000934fe) sc_swipe_pane_t1

0xebd1,	// (0x00093c36) main_cmail_launcher_pane

0x9ce0,	// (0x0008ed45) aid_size_cell_cmail_l_ParamLimits

0x9ce0,	// (0x0008ed45) aid_size_cell_cmail_l

0x9cfa,	// (0x0008ed5f) grid_cmail_l_pane_ParamLimits

0x9cfa,	// (0x0008ed5f) grid_cmail_l_pane

0x9d15,	// (0x0008ed7a) cell_cmail_l_pane_ParamLimits

0x9d15,	// (0x0008ed7a) cell_cmail_l_pane

0x9d3b,	// (0x0008eda0) cell_cmail_l_pane_g1_ParamLimits

0x9d3b,	// (0x0008eda0) cell_cmail_l_pane_g1

0x9d47,	// (0x0008edac) cell_cmail_l_pane_t1_ParamLimits

0x9d47,	// (0x0008edac) cell_cmail_l_pane_t1

0xe4ae,	// (0x00093513) cell_cmail_l_pane_t2_ParamLimits

0xe4ae,	// (0x00093513) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00094d2d) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00094d2d) cell_cmail_l_pane_t

0x1332,	// (0x00086397) grid_highlight_pane_cp018_ParamLimits

0x1332,	// (0x00086397) grid_highlight_pane_cp018

0x11d7,	// (0x0008623c) main2_pane_ParamLimits

0x11d7,	// (0x0008623c) main2_pane

0x1d90,	// (0x00086df5) popup_sp_fs_action_menu_bg_pane_g1

0x1d98,	// (0x00086dfd) popup_sp_fs_action_menu_bg_pane_g2

0x1da0,	// (0x00086e05) popup_sp_fs_action_menu_bg_pane_g3

0x1da8,	// (0x00086e0d) popup_sp_fs_action_menu_bg_pane_g4

0x1db0,	// (0x00086e15) popup_sp_fs_action_menu_bg_pane_g5

0x1db8,	// (0x00086e1d) popup_sp_fs_action_menu_bg_pane_g6

0x1dc0,	// (0x00086e25) popup_sp_fs_action_menu_bg_pane_g7

0x1dc8,	// (0x00086e2d) popup_sp_fs_action_menu_bg_pane_g8

0x1dd0,	// (0x00086e35) popup_sp_fs_action_menu_bg_pane_g9

0x1dd8,	// (0x00086e3d) popup_sp_fs_action_menu_bg_pane_g10

0x1dd8,	// (0x00086e3d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000941f2) popup_sp_fs_action_menu_bg_pane_g

0x0223,	// (0x00085288) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t3_g3_g1

0x28a6,	// (0x0008790b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_t3_g3_g2

0x022f,	// (0x00085294) list_medium_line_x2_t3_g3_g3_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000942a2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000942a2) list_medium_line_x2_t3_g3_g

0x023b,	// (0x000852a0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x023b,	// (0x000852a0) list_medium_line_x2_t3_g3_t1

0x0250,	// (0x000852b5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0250,	// (0x000852b5) list_medium_line_x2_t3_g3_t2

0x0264,	// (0x000852c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000942a9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000942a9) list_medium_line_x2_t3_g3_t

0x0223,	// (0x00085288) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t3_g2_g1

0x022f,	// (0x00085294) list_medium_line_x2_t3_g2_g2_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000942b0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000942b0) list_medium_line_x2_t3_g2_g

0x0279,	// (0x000852de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0279,	// (0x000852de) list_medium_line_x2_t3_g2_t1

0x028f,	// (0x000852f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x028f,	// (0x000852f4) list_medium_line_x2_t3_g2_t2

0x02a1,	// (0x00085306) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02a1,	// (0x00085306) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000942b5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000942b5) list_medium_line_x2_t3_g2_t

0x0223,	// (0x00085288) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t4_g4_g1

0x28b2,	// (0x00087917) list_medium_line_x2_t4_g4_g2_ParamLimits

0x28b2,	// (0x00087917) list_medium_line_x2_t4_g4_g2

0x28a6,	// (0x0008790b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_t4_g4_g3

0x02be,	// (0x00085323) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02be,	// (0x00085323) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000942bc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000942bc) list_medium_line_x2_t4_g4_g

0x02ca,	// (0x0008532f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02ca,	// (0x0008532f) list_medium_line_x2_t4_g4_t1

0x02e4,	// (0x00085349) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02e4,	// (0x00085349) list_medium_line_x2_t4_g4_t2

0x02fa,	// (0x0008535f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x02fa,	// (0x0008535f) list_medium_line_x2_t4_g4_t3

0x030f,	// (0x00085374) list_medium_line_x2_t4_g4_t4_ParamLimits

0x030f,	// (0x00085374) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000942c5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000942c5) list_medium_line_x2_t4_g4_t

0x0223,	// (0x00085288) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t2_g4_g1

0x28b2,	// (0x00087917) list_medium_line_x2_t2_g4_g2_ParamLimits

0x28b2,	// (0x00087917) list_medium_line_x2_t2_g4_g2

0x28a6,	// (0x0008790b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_t2_g4_g3

0x022f,	// (0x00085294) list_medium_line_x2_t2_g4_g4_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0009432c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0009432c) list_medium_line_x2_t2_g4_g

0x0321,	// (0x00085386) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0321,	// (0x00085386) list_medium_line_x2_t2_g4_t1

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x00094335) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x00094335) list_medium_line_x2_t2_g4_t

0x0223,	// (0x00085288) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t2_g3_g1

0x28a6,	// (0x0008790b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_t2_g3_g2

0x022f,	// (0x00085294) list_medium_line_x2_t2_g3_g3_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000942a2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000942a2) list_medium_line_x2_t2_g3_g

0x0336,	// (0x0008539b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0336,	// (0x0008539b) list_medium_line_x2_t2_g3_t1

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0009433a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0009433a) list_medium_line_x2_t2_g3_t

0x3ea3,	// (0x00088f08) main_sp_fs_list_pane_ParamLimits

0x3ea3,	// (0x00088f08) main_sp_fs_list_pane

0xb419,	// (0x0009047e) sp_fs_scroll_pane_ParamLimits

0xb419,	// (0x0009047e) sp_fs_scroll_pane

0x034b,	// (0x000853b0) list_medium_line_x2_t3_t1

0x035b,	// (0x000853c0) list_medium_line_x2_t3_t2

0x0369,	// (0x000853ce) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x00094385) list_medium_line_x2_t3_t

0x0377,	// (0x000853dc) list_medium_line_x3_t4_t1

0x0387,	// (0x000853ec) list_medium_line_x3_t4_t2

0x0395,	// (0x000853fa) list_medium_line_x3_t4_t3

0x0369,	// (0x000853ce) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0009438c) list_medium_line_x3_t4_t

0x03a3,	// (0x00085408) list_medium_line_x4_t5_t1

0x03b3,	// (0x00085418) list_medium_line_x4_t5_t2

0x0395,	// (0x000853fa) list_medium_line_x4_t5_t3

0x03c1,	// (0x00085426) list_medium_line_x4_t5_t4

0x0369,	// (0x000853ce) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x00094395) list_medium_line_x4_t5_t

0x0223,	// (0x00085288) list_medium_line_t4_g4_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_t4_g4_g1

0x03cf,	// (0x00085434) list_medium_line_t4_g4_g2_ParamLimits

0x03cf,	// (0x00085434) list_medium_line_t4_g4_g2

0x03db,	// (0x00085440) list_medium_line_t4_g4_g3_ParamLimits

0x03db,	// (0x00085440) list_medium_line_t4_g4_g3

0x022f,	// (0x00085294) list_medium_line_t4_g4_g4_ParamLimits

0x022f,	// (0x00085294) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000943a0) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000943a0) list_medium_line_t4_g4_g

0x03e7,	// (0x0008544c) list_medium_line_t4_g4_t1_ParamLimits

0x03e7,	// (0x0008544c) list_medium_line_t4_g4_t1

0x03fc,	// (0x00085461) list_medium_line_t4_g4_t2_ParamLimits

0x03fc,	// (0x00085461) list_medium_line_t4_g4_t2

0x0411,	// (0x00085476) list_medium_line_t4_g4_t3_ParamLimits

0x0411,	// (0x00085476) list_medium_line_t4_g4_t3

0x0264,	// (0x000852c9) list_medium_line_t4_g4_t4_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000943a9) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000943a9) list_medium_line_t4_g4_t

0x41e4,	// (0x00089249) chi_dic_find_pane_g1

0x5b44,	// (0x0008aba9) main_tport_pane

0x060a,	// (0x0008566f) list_medium_line_plain_t1

0x0618,	// (0x0008567d) list_medium_line_t2_g2_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t2_g2_g1

0x0624,	// (0x00085689) list_medium_line_t2_g2_g2_ParamLimits

0x0624,	// (0x00085689) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00094a65) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00094a65) list_medium_line_t2_g2_g

0x0630,	// (0x00085695) list_medium_line_t2_g2_t1_ParamLimits

0x0630,	// (0x00085695) list_medium_line_t2_g2_t1

0x0647,	// (0x000856ac) list_medium_line_t2_g2_t2_ParamLimits

0x0647,	// (0x000856ac) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00094a6a) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00094a6a) list_medium_line_t2_g2_t

0xd99f,	// (0x00092a04) aid_sp_fs_list_icon_a_sm

0xf028,	// (0x0009408d) aid_sp_fs_list_icon_d

0xd9a7,	// (0x00092a0c) aid_sp_fs_text_primary

0xd9b0,	// (0x00092a15) aid_sp_fs_text_secondary

0x8efe,	// (0x0008df63) list_medium_line

0x8efe,	// (0x0008df63) list_medium_line_g2

0x8efe,	// (0x0008df63) list_medium_line_g3

0x8efe,	// (0x0008df63) list_medium_line_plain

0x8efe,	// (0x0008df63) list_medium_line_plain_t2

0x8efe,	// (0x0008df63) list_medium_line_plain_t3

0x8efe,	// (0x0008df63) list_medium_line_right_icon

0x8efe,	// (0x0008df63) list_medium_line_right_iconx2

0x8efe,	// (0x0008df63) list_medium_line_t2

0x8efe,	// (0x0008df63) list_medium_line_t2_g2

0x8efe,	// (0x0008df63) list_medium_line_t2_g3

0x8efe,	// (0x0008df63) list_medium_line_t2_right_icon

0x8efe,	// (0x0008df63) list_medium_line_t2_right_iconx2

0x8efe,	// (0x0008df63) list_medium_line_t3

0x8efe,	// (0x0008df63) list_medium_line_t3_g2

0x8efe,	// (0x0008df63) list_medium_line_t3_g3

0x8efe,	// (0x0008df63) list_medium_line_t3_right_iconx2

0x8f07,	// (0x0008df6c) list_medium_line_t4_g4

0x8efe,	// (0x0008df63) list_medium_line_x2

0x8efe,	// (0x0008df63) list_medium_line_x2_t2_g2

0x8efe,	// (0x0008df63) list_medium_line_x2_t2_g3

0x8efe,	// (0x0008df63) list_medium_line_x2_t2_g4

0x8efe,	// (0x0008df63) list_medium_line_x2_t3

0x8efe,	// (0x0008df63) list_medium_line_x2_t3_g2

0x8efe,	// (0x0008df63) list_medium_line_x2_t3_g3

0x8efe,	// (0x0008df63) list_medium_line_x2_t3_g4

0x8efe,	// (0x0008df63) list_medium_line_x2_t4_g2

0x8efe,	// (0x0008df63) list_medium_line_x2_t4_g4

0x8f10,	// (0x0008df75) list_medium_line_x3

0x8f10,	// (0x0008df75) list_medium_line_x3_t4

0x8f10,	// (0x0008df75) list_medium_line_x3_t4_g4

0x8f07,	// (0x0008df6c) list_medium_line_x4_t4

0x8f07,	// (0x0008df6c) list_medium_line_x4_t4_g7

0x8f07,	// (0x0008df6c) list_medium_line_x4_t5

0x07d0,	// (0x00085835) list_single_fs_dyc_pane_ParamLimits

0x07d0,	// (0x00085835) list_single_fs_dyc_pane

0x0223,	// (0x00085288) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x4_t4_g7_g1

0x0808,	// (0x0008586d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0808,	// (0x0008586d) list_medium_line_x4_t4_g7_g2

0x963d,	// (0x0008e6a2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x963d,	// (0x0008e6a2) list_medium_line_x4_t4_g7_g3

0x964c,	// (0x0008e6b1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x964c,	// (0x0008e6b1) list_medium_line_x4_t4_g7_g4

0x0814,	// (0x00085879) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0814,	// (0x00085879) list_medium_line_x4_t4_g7_g5

0x0823,	// (0x00085888) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0823,	// (0x00085888) list_medium_line_x4_t4_g7_g6

0x0832,	// (0x00085897) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0832,	// (0x00085897) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00094c35) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00094c35) list_medium_line_x4_t4_g7_g

0x083e,	// (0x000858a3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x083e,	// (0x000858a3) list_medium_line_x4_t4_g7_t1

0x0853,	// (0x000858b8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0853,	// (0x000858b8) list_medium_line_x4_t4_g7_t2

0x0868,	// (0x000858cd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0868,	// (0x000858cd) list_medium_line_x4_t4_g7_t3

0x087d,	// (0x000858e2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x087d,	// (0x000858e2) list_medium_line_x4_t4_g7_t4

0x088f,	// (0x000858f4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x088f,	// (0x000858f4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00094c44) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00094c44) list_medium_line_x4_t4_g7_t

0x08a1,	// (0x00085906) list_single_dyc_row_pane_ParamLimits

0x08a1,	// (0x00085906) list_single_dyc_row_pane

0x9c61,	// (0x0008ecc6) call5_gesture_pane_ParamLimits

0x9c61,	// (0x0008ecc6) call5_gesture_pane

0x9cb7,	// (0x0008ed1c) call5_windows_pane_ParamLimits

0x9cb7,	// (0x0008ed1c) call5_windows_pane

0x9d5d,	// (0x0008edc2) call5_swipe_1_pane_cp_ParamLimits

0x9d5d,	// (0x0008edc2) call5_swipe_1_pane_cp

0x9d69,	// (0x0008edce) call5_swipe_2_pane_cp_ParamLimits

0x9d69,	// (0x0008edce) call5_swipe_2_pane_cp

0x4666,	// (0x000896cb) call5_image_pane_cp

0x9d75,	// (0x0008edda) popup_call5_audio_first_window_cp_ParamLimits

0x9d75,	// (0x0008edda) popup_call5_audio_first_window_cp

0xe480,	// (0x000934e5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe480,	// (0x000934e5) call5_swipe_1_pane_g1_cp

0xe4c0,	// (0x00093525) call5_swipe_1_pane_g2_cp

0xe499,	// (0x000934fe) call5_swipe_1_pane_t1_cp_ParamLimits

0xe499,	// (0x000934fe) call5_swipe_1_pane_t1_cp

0xe480,	// (0x000934e5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe480,	// (0x000934e5) call5_swipe_2_pane_g1_cp

0xe4c8,	// (0x0009352d) call5_swipe_2_pane_g2_cp

0xe4d0,	// (0x00093535) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4d0,	// (0x00093535) call5_swipe_2_pane_t1_cp

0x1332,	// (0x00086397) main_sp_fs_email_pane

0xe4e5,	// (0x0009354a) main_sp_fs_listscroll_pane_te

0x9d83,	// (0x0008ede8) popup_sp_fs_action_menu_pane_ParamLimits

0x9d83,	// (0x0008ede8) popup_sp_fs_action_menu_pane

0xc6de,	// (0x00091743) bg_sp_fs_ctrlbar_pane_g1

0xccf5,	// (0x00091d5a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd07,	// (0x00091d6c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xccfe,	// (0x00091d63) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc6de,	// (0x00091743) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00094d32) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc4c3,	// (0x00091528) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc4c3,	// (0x00091528) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4ee,	// (0x00093553) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4ee,	// (0x00093553) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4fa,	// (0x0009355f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe4fa,	// (0x0009355f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00094d3b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00094d3b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe506,	// (0x0009356b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe506,	// (0x0009356b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0938,	// (0x0008599d) list_medium_line_t2_right_icon_g1

0x0940,	// (0x000859a5) list_medium_line_t2_right_icon_t1

0x0950,	// (0x000859b5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00094d40) list_medium_line_t2_right_icon_t

0xc1c3,	// (0x00091228) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc1c3,	// (0x00091228) bg_sp_fs_ctrlbar_pane

0x9e0f,	// (0x0008ee74) main_sp_fs_ctrlbar_button_pane_cp01

0x9e19,	// (0x0008ee7e) main_sp_fs_ctrlbar_ddmenu_pane

0xe558,	// (0x000935bd) main_sp_fs_ctrlbar_pane_g1

0xe564,	// (0x000935c9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00094d45) main_sp_fs_ctrlbar_pane_g

0xe570,	// (0x000935d5) main_sp_fs_ctrlbar_pane_t1

0x9e23,	// (0x0008ee88) main_sp_fs_ctrlbar_pane

0x9e47,	// (0x0008eeac) main_sp_fs_listscroll_pane_te_cp01

0x0962,	// (0x000859c7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0962,	// (0x000859c7) popup_sp_fs_action_menu_pane_cp01

0x1332,	// (0x00086397) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1332,	// (0x00086397) bg_sp_fs_highlight_list_pane_cp01

0xe5a0,	// (0x00093605) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe5a0,	// (0x00093605) sp_fs_action_menu_list_gene_pane_g1

0xe5af,	// (0x00093614) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5af,	// (0x00093614) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00094d4f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00094d4f) sp_fs_action_menu_list_gene_pane_g

0xe5bc,	// (0x00093621) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5bc,	// (0x00093621) sp_fs_action_menu_list_gene_pane_t1

0xe5d4,	// (0x00093639) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5d4,	// (0x00093639) sp_fs_action_menu_list_gene_pane

0xe5f5,	// (0x0009365a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5f5,	// (0x0009365a) popup_sp_fs_action_menu_bg_pane

0xe603,	// (0x00093668) sp_fs_action_menu_list_pane_ParamLimits

0xe603,	// (0x00093668) sp_fs_action_menu_list_pane

0x9e67,	// (0x0008eecc) sp_fs_scroll_pane_cp01_ParamLimits

0x9e67,	// (0x0008eecc) sp_fs_scroll_pane_cp01

0x0992,	// (0x000859f7) list_medium_line_plain_t2_t1

0x09a2,	// (0x00085a07) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00094d54) list_medium_line_plain_t2_t

0x09b2,	// (0x00085a17) list_medium_line_plain_t3_t1

0x09c2,	// (0x00085a27) list_medium_line_plain_t3_t2

0x09d0,	// (0x00085a35) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00094d59) list_medium_line_plain_t3_t

0x0223,	// (0x00085288) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t2_g2_g1

0x022f,	// (0x00085294) list_medium_line_x2_t2_g2_g2_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000942b0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000942b0) list_medium_line_x2_t2_g2_g

0x03e7,	// (0x0008544c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03e7,	// (0x0008544c) list_medium_line_x2_t2_g2_t1

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00094d60) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00094d60) list_medium_line_x2_t2_g2_t

0x0223,	// (0x00085288) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t4_g2_g1

0x09de,	// (0x00085a43) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09de,	// (0x00085a43) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00094d65) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00094d65) list_medium_line_x2_t4_g2_g

0x09f0,	// (0x00085a55) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09f0,	// (0x00085a55) list_medium_line_x2_t4_g2_t1

0x0a0a,	// (0x00085a6f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a0a,	// (0x00085a6f) list_medium_line_x2_t4_g2_t2

0x0a1f,	// (0x00085a84) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a1f,	// (0x00085a84) list_medium_line_x2_t4_g2_t3

0x0264,	// (0x000852c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00094d6a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00094d6a) list_medium_line_x2_t4_g2_t

0x0a34,	// (0x00085a99) list_medium_line_t3_right_iconx2_g1

0x0938,	// (0x0008599d) list_medium_line_t3_right_iconx2_g2

0x0a3c,	// (0x00085aa1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00094d73) list_medium_line_t3_right_iconx2_g

0x0a46,	// (0x00085aab) list_medium_line_t3_right_iconx2_t1

0x0a56,	// (0x00085abb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00094d7a) list_medium_line_t3_right_iconx2_t

0x0223,	// (0x00085288) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x3_t4_g4_g1

0x28a6,	// (0x0008790b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x3_t4_g4_g2

0x03cf,	// (0x00085434) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03cf,	// (0x00085434) list_medium_line_x3_t4_g4_g3

0x9e8d,	// (0x0008eef2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9e8d,	// (0x0008eef2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00094d7f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00094d7f) list_medium_line_x3_t4_g4_g

0x0a64,	// (0x00085ac9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a64,	// (0x00085ac9) list_medium_line_x3_t4_g4_t1

0x0a7b,	// (0x00085ae0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a7b,	// (0x00085ae0) list_medium_line_x3_t4_g4_t2

0x03fc,	// (0x00085461) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03fc,	// (0x00085461) list_medium_line_x3_t4_g4_t3

0x0a96,	// (0x00085afb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a96,	// (0x00085afb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00094d88) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00094d88) list_medium_line_x3_t4_g4_t

0x0ab3,	// (0x00085b18) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ab3,	// (0x00085b18) list_single_dyc_row_text_pane_t1

0x0afc,	// (0x00085b61) list_single_dyc_row_text_pane_t2_ParamLimits

0x0afc,	// (0x00085b61) list_single_dyc_row_text_pane_t2

0xe625,	// (0x0009368a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe625,	// (0x0009368a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00094d91) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00094d91) list_single_dyc_row_text_pane_t

0xe649,	// (0x000936ae) list_single_dyc_row_pane_g1_ParamLimits

0xe649,	// (0x000936ae) list_single_dyc_row_pane_g1

0xe655,	// (0x000936ba) list_single_dyc_row_pane_g2_ParamLimits

0xe655,	// (0x000936ba) list_single_dyc_row_pane_g2

0xe661,	// (0x000936c6) list_single_dyc_row_pane_g3_ParamLimits

0xe661,	// (0x000936c6) list_single_dyc_row_pane_g3

0xe66d,	// (0x000936d2) list_single_dyc_row_pane_g4_ParamLimits

0xe66d,	// (0x000936d2) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00094d9e) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00094d9e) list_single_dyc_row_pane_g

0xe679,	// (0x000936de) list_single_dyc_row_text_pane_ParamLimits

0xe679,	// (0x000936de) list_single_dyc_row_text_pane

0xebd1,	// (0x00093c36) bg_sp_fs_scroll_pane

0xe698,	// (0x000936fd) thumb_sp_fs_scroll_pane

0x0618,	// (0x0008567d) list_medium_line_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_g1

0x0c31,	// (0x00085c96) list_medium_line_t1_ParamLimits

0x0c31,	// (0x00085c96) list_medium_line_t1

0x0223,	// (0x00085288) list_medium_line_x2_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_g1

0x28a6,	// (0x0008790b) list_medium_line_x2_g2_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00094da7) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00094da7) list_medium_line_x2_g

0xe6a1,	// (0x00093706) list_medium_line_x2_t1_ParamLimits

0xe6a1,	// (0x00093706) list_medium_line_x2_t1

0x0223,	// (0x00085288) list_medium_line_x3_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x3_g1

0x28a6,	// (0x0008790b) list_medium_line_x3_g2_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00094da7) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00094da7) list_medium_line_x3_g

0xe6a1,	// (0x00093706) list_medium_line_x3_t1_ParamLimits

0xe6a1,	// (0x00093706) list_medium_line_x3_t1

0xe6b7,	// (0x0009371c) thumb_sp_fs_scroll_pane_g1

0xe6c0,	// (0x00093725) thumb_sp_fs_scroll_pane_g2

0xe6c9,	// (0x0009372e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00094dac) thumb_sp_fs_scroll_pane_g

0xe6b7,	// (0x0009371c) bg_sp_fs_scroll_pane_g1

0xe6c0,	// (0x00093725) bg_sp_fs_scroll_pane_g2

0xe6c9,	// (0x0009372e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00094dac) bg_sp_fs_scroll_pane_g

0x0223,	// (0x00085288) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0223,	// (0x00085288) list_medium_line_x2_t3_g4_g1

0x28b2,	// (0x00087917) list_medium_line_x2_t3_g4_g2_ParamLimits

0x28b2,	// (0x00087917) list_medium_line_x2_t3_g4_g2

0x28a6,	// (0x0008790b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x28a6,	// (0x0008790b) list_medium_line_x2_t3_g4_g3

0x022f,	// (0x00085294) list_medium_line_x2_t3_g4_g4_ParamLimits

0x022f,	// (0x00085294) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0009432c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0009432c) list_medium_line_x2_t3_g4_g

0x0c46,	// (0x00085cab) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c46,	// (0x00085cab) list_medium_line_x2_t3_g4_t1

0x0c60,	// (0x00085cc5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c60,	// (0x00085cc5) list_medium_line_x2_t3_g4_t2

0x0264,	// (0x000852c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0264,	// (0x000852c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00094db3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00094db3) list_medium_line_x2_t3_g4_t

0x0618,	// (0x0008567d) list_medium_line_g2_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_g2_g1

0x0624,	// (0x00085689) list_medium_line_g2_g2_ParamLimits

0x0624,	// (0x00085689) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00094a65) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00094a65) list_medium_line_g2_g

0x0c7a,	// (0x00085cdf) list_medium_line_g2_t1_ParamLimits

0x0c7a,	// (0x00085cdf) list_medium_line_g2_t1

0x0618,	// (0x0008567d) list_medium_line_t3_g2_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t3_g2_g1

0x0624,	// (0x00085689) list_medium_line_t3_g2_g2_ParamLimits

0x0624,	// (0x00085689) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00094a65) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00094a65) list_medium_line_t3_g2_g

0x0c8f,	// (0x00085cf4) list_medium_line_t3_g2_t1_ParamLimits

0x0c8f,	// (0x00085cf4) list_medium_line_t3_g2_t1

0x0ca6,	// (0x00085d0b) list_medium_line_t3_g2_t2_ParamLimits

0x0ca6,	// (0x00085d0b) list_medium_line_t3_g2_t2

0x0cbb,	// (0x00085d20) list_medium_line_t3_g2_t3_ParamLimits

0x0cbb,	// (0x00085d20) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00094dba) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00094dba) list_medium_line_t3_g2_t

0x0938,	// (0x0008599d) list_medium_line_right_icon_g1

0x0cd4,	// (0x00085d39) list_medium_line_right_icon_t1

0x0618,	// (0x0008567d) list_medium_line_t2_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t2_g1

0x0ce2,	// (0x00085d47) list_medium_line_t2_t1_ParamLimits

0x0ce2,	// (0x00085d47) list_medium_line_t2_t1

0x0cfc,	// (0x00085d61) list_medium_line_t2_t2_ParamLimits

0x0cfc,	// (0x00085d61) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00094dc1) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00094dc1) list_medium_line_t2_t

0x0618,	// (0x0008567d) list_medium_line_t3_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t3_g1

0x0d15,	// (0x00085d7a) list_medium_line_t3_t1_ParamLimits

0x0d15,	// (0x00085d7a) list_medium_line_t3_t1

0x0d2c,	// (0x00085d91) list_medium_line_t3_t2_ParamLimits

0x0d2c,	// (0x00085d91) list_medium_line_t3_t2

0x0d41,	// (0x00085da6) list_medium_line_t3_t3_ParamLimits

0x0d41,	// (0x00085da6) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00094dc6) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00094dc6) list_medium_line_t3_t

0x0618,	// (0x0008567d) list_medium_line_g3_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_g3_g1

0x0d53,	// (0x00085db8) list_medium_line_g3_g2_ParamLimits

0x0d53,	// (0x00085db8) list_medium_line_g3_g2

0x0624,	// (0x00085689) list_medium_line_g3_g3_ParamLimits

0x0624,	// (0x00085689) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00094dcd) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00094dcd) list_medium_line_g3_g

0x0d5f,	// (0x00085dc4) list_medium_line_g3_t1_ParamLimits

0x0d5f,	// (0x00085dc4) list_medium_line_g3_t1

0x0618,	// (0x0008567d) list_medium_line_t2_g3_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t2_g3_g1

0x0d53,	// (0x00085db8) list_medium_line_t2_g3_g2_ParamLimits

0x0d53,	// (0x00085db8) list_medium_line_t2_g3_g2

0x0624,	// (0x00085689) list_medium_line_t2_g3_g3_ParamLimits

0x0624,	// (0x00085689) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00094dcd) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00094dcd) list_medium_line_t2_g3_g

0x0d74,	// (0x00085dd9) list_medium_line_t2_g3_t1_ParamLimits

0x0d74,	// (0x00085dd9) list_medium_line_t2_g3_t1

0x0d8b,	// (0x00085df0) list_medium_line_t2_g3_t2_ParamLimits

0x0d8b,	// (0x00085df0) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00094dd4) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00094dd4) list_medium_line_t2_g3_t

0x0618,	// (0x0008567d) list_medium_line_t3_g3_g1_ParamLimits

0x0618,	// (0x0008567d) list_medium_line_t3_g3_g1

0x0d53,	// (0x00085db8) list_medium_line_t3_g3_g2_ParamLimits

0x0d53,	// (0x00085db8) list_medium_line_t3_g3_g2

0x0624,	// (0x00085689) list_medium_line_t3_g3_g3_ParamLimits

0x0624,	// (0x00085689) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00094dcd) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00094dcd) list_medium_line_t3_g3_g

0x0da6,	// (0x00085e0b) list_medium_line_t3_g3_t1_ParamLimits

0x0da6,	// (0x00085e0b) list_medium_line_t3_g3_t1

0x0dba,	// (0x00085e1f) list_medium_line_t3_g3_t2_ParamLimits

0x0dba,	// (0x00085e1f) list_medium_line_t3_g3_t2

0x0dcc,	// (0x00085e31) list_medium_line_t3_g3_t3_ParamLimits

0x0dcc,	// (0x00085e31) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00094dd9) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00094dd9) list_medium_line_t3_g3_t

0x0a34,	// (0x00085a99) list_medium_line_right_iconx2_g1

0x0938,	// (0x0008599d) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00094de0) list_medium_line_right_iconx2_g

0x0de0,	// (0x00085e45) list_medium_line_right_iconx2_t1

0x0a34,	// (0x00085a99) list_medium_line_t2_right_iconx2_g1

0x0938,	// (0x0008599d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00094de0) list_medium_line_t2_right_iconx2_g

0x0dee,	// (0x00085e53) list_medium_line_t2_right_iconx2_t1

0x0dfe,	// (0x00085e63) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00094de5) list_medium_line_t2_right_iconx2_t

0x0e10,	// (0x00085e75) list_medium_line_x4_t4_t1

0x0e1e,	// (0x00085e83) list_medium_line_x4_t4_t2

0x0e2e,	// (0x00085e93) list_medium_line_x4_t4_t3

0x0e3e,	// (0x00085ea3) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00094dea) list_medium_line_x4_t4_t

0x9edc,	// (0x0008ef41) tport_appsw_pane_ParamLimits

0x9edc,	// (0x0008ef41) tport_appsw_pane

0x9ef4,	// (0x0008ef59) tport_contact_pane_ParamLimits

0x9ef4,	// (0x0008ef59) tport_contact_pane

0x9f0c,	// (0x0008ef71) tport_listscroll_pane_ParamLimits

0x9f0c,	// (0x0008ef71) tport_listscroll_pane

0x9f26,	// (0x0008ef8b) cell_tport_appsw_pane_ParamLimits

0x9f26,	// (0x0008ef8b) cell_tport_appsw_pane

0xd3df,	// (0x00092444) tport_appsw_pane_g1_ParamLimits

0xd3df,	// (0x00092444) tport_appsw_pane_g1

0xe6d2,	// (0x00093737) tport_contact_pane_g1

0xdf99,	// (0x00092ffe) tport_contact_pane_t1

0xe6db,	// (0x00093740) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00094df3) tport_contact_pane_t

0xe6e9,	// (0x0009374e) list_tport_pane

0xe6f2,	// (0x00093757) scroll_pane_cp_030

0x9f6e,	// (0x0008efd3) cell_tport_appsw_pane_g1

0x9f7e,	// (0x0008efe3) cell_tport_appsw_pane_t1

0x9f8c,	// (0x0008eff1) grid_highlight_pane_cp019

0x9f94,	// (0x0008eff9) list_tport_double_graphic_pane_ParamLimits

0x9f94,	// (0x0008eff9) list_tport_double_graphic_pane

0x1332,	// (0x00086397) list_highlight_pane_cp023_ParamLimits

0x1332,	// (0x00086397) list_highlight_pane_cp023

0x9fa1,	// (0x0008f006) list_tport_double_graphic_pane_g1_ParamLimits

0x9fa1,	// (0x0008f006) list_tport_double_graphic_pane_g1

0x9fae,	// (0x0008f013) list_tport_double_graphic_pane_t1_ParamLimits

0x9fae,	// (0x0008f013) list_tport_double_graphic_pane_t1

0x9fc3,	// (0x0008f028) list_tport_double_graphic_pane_t2_ParamLimits

0x9fc3,	// (0x0008f028) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00094dff) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00094dff) list_tport_double_graphic_pane_t

0xebd1,	// (0x00093c36) main_cale_note_pane

0x821a,	// (0x0008d27f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x821a,	// (0x0008d27f) cell_vitu2_function_top_wide_pane_cp01

0x9990,	// (0x0008e9f5) wait_bar_pane_cp05_ParamLimits

0x1332,	// (0x00086397) listscroll_cmail_pane

0xe6fb,	// (0x00093760) list_cmail_pane

0xd454,	// (0x000924b9) list_cmail_body_pane

0x9fd5,	// (0x0008f03a) list_single_cmail_header_caption_pane

0x9fec,	// (0x0008f051) list_single_cmail_header_detail_pane_ParamLimits

0x9fec,	// (0x0008f051) list_single_cmail_header_detail_pane

0xe70b,	// (0x00093770) list_single_cmail_header_caption_pane_t1

0x0e4e,	// (0x00085eb3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e4e,	// (0x00085eb3) list_single_cmail_header_detail_pane_g1

0xf055,	// (0x000940ba) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf055,	// (0x000940ba) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00094e04) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00094e04) list_single_cmail_header_detail_pane_g

0x0e66,	// (0x00085ecb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0e66,	// (0x00085ecb) list_single_cmail_header_detail_pane_t1

0x0ea4,	// (0x00085f09) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0ea4,	// (0x00085f09) list_single_cmail_header_editor_pane_bg

0xe13a,	// (0x0009319f) list_cmail_body_pane_g1

0xe74a,	// (0x000937af) list_cmail_body_pane_t1

0xd41c,	// (0x00092481) list_single_cmail_header_editor_pane_bg_g1

0x2f12,	// (0x00087f77) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd42c,	// (0x00092491) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd424,	// (0x00092489) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd67f,	// (0x000926e4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd44c,	// (0x000924b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd43c,	// (0x000924a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd444,	// (0x000924a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2ef2,	// (0x00087f57) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa021,	// (0x0008f086) calenote_gesture_pane_ParamLimits

0xa021,	// (0x0008f086) calenote_gesture_pane

0xa041,	// (0x0008f0a6) calenote_window_pane_ParamLimits

0xa041,	// (0x0008f0a6) calenote_window_pane

0xe758,	// (0x000937bd) popup_note_window_cp01

0xa05d,	// (0x0008f0c2) calenote_swipe_1_pane_ParamLimits

0xa05d,	// (0x0008f0c2) calenote_swipe_1_pane

0x9d69,	// (0x0008edce) calenote_swipe_2_pane_ParamLimits

0x9d69,	// (0x0008edce) calenote_swipe_2_pane

0xe480,	// (0x000934e5) calenote_swipe_1_pane_g1_ParamLimits

0xe480,	// (0x000934e5) calenote_swipe_1_pane_g1

0xe48d,	// (0x000934f2) calenote_swipe_1_pane_g2_ParamLimits

0xe48d,	// (0x000934f2) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00094d28) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00094d28) calenote_swipe_1_pane_g

0xe76a,	// (0x000937cf) calenote_swipe_1_pane_t1_ParamLimits

0xe76a,	// (0x000937cf) calenote_swipe_1_pane_t1

0xe480,	// (0x000934e5) calenote_swipe_2_pane_g1_ParamLimits

0xe480,	// (0x000934e5) calenote_swipe_2_pane_g1

0xe789,	// (0x000937ee) calenote_swipe_2_pane_g2_ParamLimits

0xe789,	// (0x000937ee) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00094e10) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00094e10) calenote_swipe_2_pane_g

0xe795,	// (0x000937fa) calenote_swipe_2_pane_t1_ParamLimits

0xe795,	// (0x000937fa) calenote_swipe_2_pane_t1

0xebd1,	// (0x00093c36) main_mup_navstr_pane

0x6ef5,	// (0x0008bf5a) main_mup3_pane_t7_ParamLimits

0x6ef5,	// (0x0008bf5a) main_mup3_pane_t7

0xd07f,	// (0x000920e4) main_mp4_pane_g6_ParamLimits

0xd07f,	// (0x000920e4) main_mp4_pane_g6

0xd2a7,	// (0x0009230c) main_image3_pane_t4_ParamLimits

0xd2a7,	// (0x0009230c) main_image3_pane_t4

0xa072,	// (0x0008f0d7) popup_navstr_preview_pane_ParamLimits

0xa072,	// (0x0008f0d7) popup_navstr_preview_pane

0xa086,	// (0x0008f0eb) scroll_navstr_pane_ParamLimits

0xa086,	// (0x0008f0eb) scroll_navstr_pane

0xebd1,	// (0x00093c36) bg_popup_preview_window_pane_cp04

0xe7bc,	// (0x00093821) popup_navstr_preview_pane_t1

0xa09a,	// (0x0008f0ff) scroll_navstr_pane_g1_ParamLimits

0xa09a,	// (0x0008f0ff) scroll_navstr_pane_g1

0xa0ae,	// (0x0008f113) scroll_navstr_pane_t1_ParamLimits

0xa0ae,	// (0x0008f113) scroll_navstr_pane_t1

0xe761,	// (0x000937c6) bg_button_pane_cp014

0xe761,	// (0x000937c6) bg_button_pane_cp030

0x08de,	// (0x00085943) list_double_fisheye_pane_g4_ParamLimits

0x08de,	// (0x00085943) list_double_fisheye_pane_g4

0x08ea,	// (0x0008594f) list_double_fisheye_pane_g5_ParamLimits

0x08ea,	// (0x0008594f) list_double_fisheye_pane_g5

0xb419,	// (0x0009047e) sp_fs_scroll_pane_cp03

0xe558,	// (0x000935bd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe564,	// (0x000935c9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00094d45) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe570,	// (0x000935d5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe703,	// (0x00093768) sp_fs_scroll_pane_cp02

0x1e2d,	// (0x00086e92) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1e2d,	// (0x00086e92) popup_sp_fs_calendar_preview_list_single_pane

0xebd1,	// (0x00093c36) main_cam6_pano_pane

0x1332,	// (0x00086397) main_mup3_pane_ParamLimits

0xebd1,	// (0x00093c36) main_phacti_pane

0x9863,	// (0x0008e8c8) bg_button_pane_cp11

0x987d,	// (0x0008e8e2) main_mobtv_info_pane_g2_ParamLimits

0x987d,	// (0x0008e8e2) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00094ca5) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00094ca5) main_mobtv_info_pane_g

0x9a5a,	// (0x0008eabf) sc_clock_pane_t5_ParamLimits

0x9a5a,	// (0x0008eabf) sc_clock_pane_t5

0x9aec,	// (0x0008eb51) main_radioblah_pane_g1_ParamLimits

0xe3cc,	// (0x00093431) main_radioblah_pane_t3_ParamLimits

0xe3cc,	// (0x00093431) main_radioblah_pane_t3

0xe3e4,	// (0x00093449) main_radioblah_pane_t4_ParamLimits

0xe3e4,	// (0x00093449) main_radioblah_pane_t4

0x9b14,	// (0x0008eb79) main_radioblah_text_pane_ParamLimits

0x9b14,	// (0x0008eb79) main_radioblah_text_pane

0x9b26,	// (0x0008eb8b) main_radioblah_info_pane_g1_ParamLimits

0x9bbf,	// (0x0008ec24) main_radioblah_info_pane_t4_ParamLimits

0x9bbf,	// (0x0008ec24) main_radioblah_info_pane_t4

0x1332,	// (0x00086397) main_sp_fs_calendar_pane

0xa0c5,	// (0x0008f12a) main_phacti_pane_g1

0xa0cd,	// (0x0008f132) phacti_note_pane_ParamLimits

0xa0cd,	// (0x0008f132) phacti_note_pane

0xe7d3,	// (0x00093838) phacti_term_pane_ParamLimits

0xe7d3,	// (0x00093838) phacti_term_pane

0xe7e8,	// (0x0009384d) phacti_note_pane_t1_ParamLimits

0xe7e8,	// (0x0009384d) phacti_note_pane_t1

0xe7ff,	// (0x00093864) phacti_term_pane_g1

0xe807,	// (0x0009386c) phacti_term_pane_t1_ParamLimits

0xe807,	// (0x0009386c) phacti_term_pane_t1

0xe831,	// (0x00093896) popup_sp_fs_calendar_preview_list_single_pane_g1

0x289e,	// (0x00087903) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00094e1a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe839,	// (0x0009389e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe839,	// (0x0009389e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe84e,	// (0x000938b3) aid_popup_sp_fs_bg_corner_pane

0xc6de,	// (0x00091743) popup_sp_fs_calendar_preview_bg_pane_g1

0xebd1,	// (0x00093c36) popup_sp_fs_calendar_preview_bg_pane

0xe856,	// (0x000938bb) popup_sp_fs_calendar_preview_list_pane

0xc1c3,	// (0x00091228) bg_main_sp_fs_cale_pane_ParamLimits

0xc1c3,	// (0x00091228) bg_main_sp_fs_cale_pane

0xe85e,	// (0x000938c3) listscroll_cale_mrui_pane_ParamLimits

0xe85e,	// (0x000938c3) listscroll_cale_mrui_pane

0xd4a0,	// (0x00092505) listscroll_sp_fs_schedule_track_pane

0xe873,	// (0x000938d8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe873,	// (0x000938d8) main_sp_fs_ctrlbar_pane_cp01

0xe886,	// (0x000938eb) main_sp_fs_ribbon_pane

0xe88e,	// (0x000938f3) popup_sp_fs_cale_preview_window

0xa142,	// (0x0008f1a7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa142,	// (0x0008f1a7) list_single_sp_fs_schedule_track_pane

0x1332,	// (0x00086397) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1332,	// (0x00086397) bg_sp_fs_highlight_list_pane_cp03

0xa156,	// (0x0008f1bb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa156,	// (0x0008f1bb) list_single_sp_fs_schedule_track_pane_g1

0xa162,	// (0x0008f1c7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa162,	// (0x0008f1c7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00094e1f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00094e1f) list_single_sp_fs_schedule_track_pane_g

0xa16e,	// (0x0008f1d3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa16e,	// (0x0008f1d3) list_single_sp_fs_schedule_track_pane_t1

0xa188,	// (0x0008f1ed) sp_fs_schedule_track_pane_ParamLimits

0xa188,	// (0x0008f1ed) sp_fs_schedule_track_pane

0xe8a0,	// (0x00093905) sp_fs_schedule_track_pane_g1

0xe8a8,	// (0x0009390d) sp_fs_schedule_track_pane_g2

0xe8b0,	// (0x00093915) sp_fs_schedule_track_pane_g3

0xe8b8,	// (0x0009391d) sp_fs_schedule_track_pane_g4

0xe8c0,	// (0x00093925) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00094e24) sp_fs_schedule_track_pane_g

0xd41c,	// (0x00092481) bg_sp_fs_schedule_viewer_highlight_g1

0x2f12,	// (0x00087f77) bg_sp_fs_schedule_viewer_highlight_g2

0xd424,	// (0x00092489) bg_sp_fs_schedule_viewer_highlight_g3

0xd42c,	// (0x00092491) bg_sp_fs_schedule_viewer_highlight_g4

0xd67f,	// (0x000926e4) bg_sp_fs_schedule_viewer_highlight_g5

0xd43c,	// (0x000924a1) bg_sp_fs_schedule_viewer_highlight_g6

0xd444,	// (0x000924a9) bg_sp_fs_schedule_viewer_highlight_g7

0xd44c,	// (0x000924b1) bg_sp_fs_schedule_viewer_highlight_g8

0x2ef2,	// (0x00087f57) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00094e2f) bg_sp_fs_schedule_viewer_highlight_g

0xebd1,	// (0x00093c36) bg_main_sp_fs_ribbon_pane

0xa199,	// (0x0008f1fe) main_sp_fs_ribbon_pane_g1

0xe8c8,	// (0x0009392d) main_sp_fs_ribbon_pane_t1

0xa1a2,	// (0x0008f207) main_sp_fs_ribbon_pane_t2

0xe8d7,	// (0x0009393c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00094e42) main_sp_fs_ribbon_pane_t

0xe8e6,	// (0x0009394b) main_sp_fs_ribbon_scheduler_pane

0xe8ee,	// (0x00093953) bg_main_sp_fs_ribbon_pane_g1

0xe8f7,	// (0x0009395c) bg_main_sp_fs_ribbon_pane_g2

0xe900,	// (0x00093965) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00094e49) bg_main_sp_fs_ribbon_pane_g

0xe908,	// (0x0009396d) main_sp_fs_ribbon_scheduler_pane_g1

0xe911,	// (0x00093976) main_sp_fs_ribbon_scheduler_pane_g2

0xe91a,	// (0x0009397f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00094e50) main_sp_fs_ribbon_scheduler_pane_g

0xe923,	// (0x00093988) list_cale_mrui_pane

0xa1b1,	// (0x0008f216) sp_fs_scroll_pane_cp07_ParamLimits

0xa1b1,	// (0x0008f216) sp_fs_scroll_pane_cp07

0xa1cd,	// (0x0008f232) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa1cd,	// (0x0008f232) bg_sp_fs_schedule_viewer_highlight

0xe930,	// (0x00093995) list_single_sp_fs_schedule_track_pane_cp01

0xe938,	// (0x0009399d) list_sp_fs_schedule_track_pane

0xe940,	// (0x000939a5) sp_fs_scroll_pane_cp06_ParamLimits

0xe940,	// (0x000939a5) sp_fs_scroll_pane_cp06

0xc6de,	// (0x00091743) bgmain_sp_fs_calendar_pane_g1

0x0ebd,	// (0x00085f22) list_single_cale_mrui_pane_ParamLimits

0x0ebd,	// (0x00085f22) list_single_cale_mrui_pane

0xe952,	// (0x000939b7) list_single_cale_mrui_row_pane_ParamLimits

0xe952,	// (0x000939b7) list_single_cale_mrui_row_pane

0xe95f,	// (0x000939c4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe95f,	// (0x000939c4) list_single_cale_mrui_row_pane_g1

0xe9a4,	// (0x00093a09) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9a4,	// (0x00093a09) list_single_cale_mrui_row_pane_t1

0x0ede,	// (0x00085f43) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ede,	// (0x00085f43) list_single_cale_mrui_row_pane_t2

0xe9b6,	// (0x00093a1b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9b6,	// (0x00093a1b) list_single_cale_mrui_row_pane_t3

0xe9e5,	// (0x00093a4a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9e5,	// (0x00093a4a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00094e5e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00094e5e) list_single_cale_mrui_row_pane_t

0x0f46,	// (0x00085fab) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f46,	// (0x00085fab) list_single_cmail_header_editor_pane_bg_cp01

0x0f6c,	// (0x00085fd1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f6c,	// (0x00085fd1) list_single_cmail_header_editor_pane_bg_cp02

0xa1dd,	// (0x0008f242) main_radioblah_text_pane_t1_ParamLimits

0xa1dd,	// (0x0008f242) main_radioblah_text_pane_t1

0xea14,	// (0x00093a79) cam6_indi_pane_cp01

0xea1c,	// (0x00093a81) cam6_mode_pane_cp01

0xea24,	// (0x00093a89) cam6_pano_pane

0xea2d,	// (0x00093a92) cam6_zoom_pane_cp01

0xea35,	// (0x00093a9a) cam6_pano_image_pane

0xea40,	// (0x00093aa5) cam6_pano_pane_g1

0xe13a,	// (0x0009319f) cam6_pano_pane_g2

0xea49,	// (0x00093aae) cam6_pano_pane_g3

0xea52,	// (0x00093ab7) cam6_pano_pane_g4

0xcce2,	// (0x00091d47) cam6_pano_pane_g5

0xea5b,	// (0x00093ac0) cam6_pano_pane_g6

0xea65,	// (0x00093aca) cam6_pano_pane_g7

0xea6d,	// (0x00093ad2) cam6_pano_pane_g8

0xea76,	// (0x00093adb) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00094e67) cam6_pano_pane_g

0xebd1,	// (0x00093c36) main_browser_tag_pane

0xe7b4,	// (0x00093819) grid_navstr_albumart_pane

0xea81,	// (0x00093ae6) cell_navstr_albumart_pane_ParamLimits

0xea81,	// (0x00093ae6) cell_navstr_albumart_pane

0xeaa1,	// (0x00093b06) cell_navstr_albumart_pane_g1

0xbfd4,	// (0x00091039) cell_navstr_albumart_pane_g2

0xbfe4,	// (0x00091049) cell_navstr_albumart_pane_g3

0xbfdc,	// (0x00091041) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00094e7a) cell_navstr_albumart_pane_g

0xa1f7,	// (0x0008f25c) bt_list_pane_ParamLimits

0xa1f7,	// (0x0008f25c) bt_list_pane

0xa20b,	// (0x0008f270) bt_list_pane_t1

0xa21a,	// (0x0008f27f) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00094e83) bt_list_pane_t

0xebd1,	// (0x00093c36) main_cale_prevew_pane

0xa229,	// (0x0008f28e) popup_cale_preview_window_ParamLimits

0xa229,	// (0x0008f28e) popup_cale_preview_window

0x1332,	// (0x00086397) bg_popup_preview_window_pane_cp05_ParamLimits

0x1332,	// (0x00086397) bg_popup_preview_window_pane_cp05

0xeaa9,	// (0x00093b0e) list_cale_preview_pane_ParamLimits

0xeaa9,	// (0x00093b0e) list_cale_preview_pane

0xa244,	// (0x0008f2a9) list_double_cale_preview_pane_ParamLimits

0xa244,	// (0x0008f2a9) list_double_cale_preview_pane

0xa256,	// (0x0008f2bb) list_single_cale_preview_pane_ParamLimits

0xa256,	// (0x0008f2bb) list_single_cale_preview_pane

0xa26c,	// (0x0008f2d1) list_single_cale_preview_pane_g1

0xa274,	// (0x0008f2d9) list_single_cale_preview_pane_t1_ParamLimits

0xa274,	// (0x0008f2d9) list_single_cale_preview_pane_t1

0xa289,	// (0x0008f2ee) list_double_cale_preview_pane_g1

0xa291,	// (0x0008f2f6) list_double_cale_preview_pane_t1_ParamLimits

0xa291,	// (0x0008f2f6) list_double_cale_preview_pane_t1

0xa2a6,	// (0x0008f30b) list_double_cale_preview_pane_t2_ParamLimits

0xa2a6,	// (0x0008f30b) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00094e88) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00094e88) list_double_cale_preview_pane_t

0xebd1,	// (0x00093c36) main_ezdial_pane

0x1332,	// (0x00086397) main_sp_fs_email_pane_ParamLimits

0x9dc7,	// (0x0008ee2c) cmail_ddmenu_btn01_pane_ParamLimits

0x9dc7,	// (0x0008ee2c) cmail_ddmenu_btn01_pane

0x9dda,	// (0x0008ee3f) cmail_ddmenu_btn02_pane_ParamLimits

0x9dda,	// (0x0008ee3f) cmail_ddmenu_btn02_pane

0x9dfd,	// (0x0008ee62) cmail_ddmenu_btn03_pane_ParamLimits

0x9dfd,	// (0x0008ee62) cmail_ddmenu_btn03_pane

0x9e23,	// (0x0008ee88) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e47,	// (0x0008eeac) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd454,	// (0x000924b9) list_cmail_body_pane_ParamLimits

0xa016,	// (0x0008f07b) bg_button_pane_cp12

0xe719,	// (0x0009377e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe719,	// (0x0009377e) list_single_cmail_header_detail_pane_g3

0xe726,	// (0x0009378b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe726,	// (0x0009378b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00094e0b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00094e0b) list_single_cmail_header_detail_pane_t

0xe81c,	// (0x00093881) phacti_term_pane_t2_ParamLimits

0xe81c,	// (0x00093881) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00094e15) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00094e15) phacti_term_pane_t

0xeab5,	// (0x00093b1a) aid_size_list_single_double

0xa2be,	// (0x0008f323) popup_ezdial_listscroll_window

0xa2da,	// (0x0008f33f) popup_number_entry_window_cp01

0x4666,	// (0x000896cb) bg_popup_call_pane_cp09

0xeac1,	// (0x00093b26) ezdial_list_pane

0xeac9,	// (0x00093b2e) scroll_pane_cp23

0xc1c3,	// (0x00091228) bg_button_pane_cp028_ParamLimits

0xc1c3,	// (0x00091228) bg_button_pane_cp028

0xa2e8,	// (0x0008f34d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa2e8,	// (0x0008f34d) cmail_ddmenu_btn01_pane_g1

0xa2f4,	// (0x0008f359) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa2f4,	// (0x0008f359) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00094e8d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00094e8d) cmail_ddmenu_btn01_pane_g

0xead1,	// (0x00093b36) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead1,	// (0x00093b36) cmail_ddmenu_btn01_pane_t1

0xc1c3,	// (0x00091228) bg_button_pane_cp029_ParamLimits

0xc1c3,	// (0x00091228) bg_button_pane_cp029

0xa308,	// (0x0008f36d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa308,	// (0x0008f36d) cmail_ddmenu_btn02_pane_g1

0xa320,	// (0x0008f385) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa320,	// (0x0008f385) cmail_ddmenu_btn02_pane_t1

0x1332,	// (0x00086397) bg_button_pane_cp031_ParamLimits

0x1332,	// (0x00086397) bg_button_pane_cp031

0xa308,	// (0x0008f36d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa308,	// (0x0008f36d) cmail_ddmenu_btn03_pane_g1

0xa320,	// (0x0008f385) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa320,	// (0x0008f385) cmail_ddmenu_btn03_pane_t1

0x7a9e,	// (0x0008cb03) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ab8,	// (0x0008cb1d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ab8,	// (0x0008cb1d) cell_dialer2_keypad_pane_t1_copy1

0x96ca,	// (0x0008e72f) ncimui_group_button_pane

0x1332,	// (0x00086397) main_sp_fs_calendar_pane_ParamLimits

0x9fd5,	// (0x0008f03a) list_single_cmail_header_caption_pane_ParamLimits

0xf061,	// (0x000940c6) aid_recal_txt_sm_pane

0xebd1,	// (0x00093c36) mian_recal_day_pane

0xe88e,	// (0x000938f3) popup_sp_fs_cale_preview_window_ParamLimits

0xeae7,	// (0x00093b4c) list_recal_day_pane

0xeb2a,	// (0x00093b8f) list_single_recal_day_pane_ParamLimits

0xeb2a,	// (0x00093b8f) list_single_recal_day_pane

0xeb3c,	// (0x00093ba1) list_single_recal_day_pane_g1_ParamLimits

0xeb3c,	// (0x00093ba1) list_single_recal_day_pane_g1

0xeb48,	// (0x00093bad) list_single_recal_day_pane_g2_ParamLimits

0xeb48,	// (0x00093bad) list_single_recal_day_pane_g2

0xeb58,	// (0x00093bbd) list_single_recal_day_pane_g3_ParamLimits

0xeb58,	// (0x00093bbd) list_single_recal_day_pane_g3

0x0f8c,	// (0x00085ff1) list_single_recal_day_pane_g4_ParamLimits

0x0f8c,	// (0x00085ff1) list_single_recal_day_pane_g4

0xeb64,	// (0x00093bc9) list_single_recal_day_pane_g5_ParamLimits

0xeb64,	// (0x00093bc9) list_single_recal_day_pane_g5

0xeb74,	// (0x00093bd9) list_single_recal_day_pane_g6_ParamLimits

0xeb74,	// (0x00093bd9) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00094e9c) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00094e9c) list_single_recal_day_pane_g

0xeb88,	// (0x00093bed) list_single_recal_day_pane_t1

0xeb9a,	// (0x00093bff) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00094ea7) list_single_recal_day_pane_t

0xa344,	// (0x0008f3a9) ncimui_query_button_pane_ParamLimits

0xa344,	// (0x0008f3a9) ncimui_query_button_pane

0xa354,	// (0x0008f3b9) ncimui_query_button_pane_t1_ParamLimits

0xa354,	// (0x0008f3b9) ncimui_query_button_pane_t1

0xf06a,	// (0x000940cf) ncimui_query_button_pane_t2_ParamLimits

0xf06a,	// (0x000940cf) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00094eac) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00094eac) ncimui_query_button_pane_t

0xa367,	// (0x0008f3cc) query_button_pane_ParamLimits

0xa367,	// (0x0008f3cc) query_button_pane

0xebd1,	// (0x00093c36) bg_button_pane_cp0028

0xf07d,	// (0x000940e2) query_button_pane_t1

0x5b44,	// (0x0008aba9) main_tport_pane_ParamLimits

0x9e99,	// (0x0008eefe) bg_popup_window_pane_cp01_ParamLimits

0x9e99,	// (0x0008eefe) bg_popup_window_pane_cp01

0x9eb4,	// (0x0008ef19) heading_pane_cp08_ParamLimits

0x9eb4,	// (0x0008ef19) heading_pane_cp08

0x9ec7,	// (0x0008ef2c) heading_pane_cp07_ParamLimits

0x9ec7,	// (0x0008ef2c) heading_pane_cp07

0x9f6e,	// (0x0008efd3) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00094df8) cell_tport_appsw_pane_g

0x043e,	// (0x000854a3) input_candi_list_open_g1

0x3cdd,	// (0x00088d42) list_cale_time_pane_g6_ParamLimits

0x3cdd,	// (0x00088d42) list_cale_time_pane_g6

0x690d,	// (0x0008b972) aid_size_touch_calib_1_ParamLimits

0x690d,	// (0x0008b972) aid_size_touch_calib_1

0x691f,	// (0x0008b984) aid_size_touch_calib_2_ParamLimits

0x691f,	// (0x0008b984) aid_size_touch_calib_2

0x6937,	// (0x0008b99c) aid_size_touch_calib_3_ParamLimits

0x6937,	// (0x0008b99c) aid_size_touch_calib_3

0x6955,	// (0x0008b9ba) aid_size_touch_calib_4_ParamLimits

0x6955,	// (0x0008b9ba) aid_size_touch_calib_4

0x696d,	// (0x0008b9d2) main_touch_calib_button_group_pane_ParamLimits

0x696d,	// (0x0008b9d2) main_touch_calib_button_group_pane

0x6985,	// (0x0008b9ea) main_touch_calib_pane_g1_ParamLimits

0x6997,	// (0x0008b9fc) main_touch_calib_pane_g2_ParamLimits

0x69a9,	// (0x0008ba0e) main_touch_calib_pane_g3_ParamLimits

0x69bb,	// (0x0008ba20) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000947bb) main_touch_calib_pane_g_ParamLimits

0x69cd,	// (0x0008ba32) main_touch_calib_pane_t1_ParamLimits

0x69e7,	// (0x0008ba4c) main_touch_calib_pane_t2_ParamLimits

0x6a01,	// (0x0008ba66) main_touch_calib_pane_t3_ParamLimits

0x6a15,	// (0x0008ba7a) main_touch_calib_pane_t4_ParamLimits

0x6a29,	// (0x0008ba8e) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000947c4) main_touch_calib_pane_t_ParamLimits

0xcaa2,	// (0x00091b07) list_single_fp_cale_pane_g3_ParamLimits

0xcaa2,	// (0x00091b07) list_single_fp_cale_pane_g3

0x1332,	// (0x00086397) bg_button_pane_cp012_ParamLimits

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp03_ParamLimits

0x89ef,	// (0x0008da54) cell_vitu2_function_top_pane_g1_ParamLimits

0x1332,	// (0x00086397) bg_vkb2_func_pane_cp04_ParamLimits

0x9658,	// (0x0008e6bd) main_ncimui_button_group_pane_ParamLimits

0x9658,	// (0x0008e6bd) main_ncimui_button_group_pane

0x96b8,	// (0x0008e71d) main_ncimui_pane_t3_ParamLimits

0x96b8,	// (0x0008e71d) main_ncimui_pane_t3

0xe7ca,	// (0x0009382f) phacti_button_group_pane

0xeab5,	// (0x00093b1a) aid_size_list_single_double_ParamLimits

0xa2be,	// (0x0008f323) popup_ezdial_listscroll_window_ParamLimits

0xa2da,	// (0x0008f33f) popup_number_entry_window_cp01_ParamLimits

0xa37a,	// (0x0008f3df) phacti_button_pane_ParamLimits

0xa37a,	// (0x0008f3df) phacti_button_pane

0xebd1,	// (0x00093c36) bg_button_pane_cp14

0xf08b,	// (0x000940f0) phacti_button_pane_t1

0xa38b,	// (0x0008f3f0) main_touch_calib_button_pane_ParamLimits

0xa38b,	// (0x0008f3f0) main_touch_calib_button_pane

0x1b68,	// (0x00086bcd) bg_button_pane_cp18_ParamLimits

0x1b68,	// (0x00086bcd) bg_button_pane_cp18

0xf099,	// (0x000940fe) main_touch_calib_button_pane_t1_ParamLimits

0xf099,	// (0x000940fe) main_touch_calib_button_pane_t1

0xf0af,	// (0x00094114) main_touch_calib_button_pane_t2_ParamLimits

0xf0af,	// (0x00094114) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00094eb1) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00094eb1) main_touch_calib_button_pane_t

0xebd1,	// (0x00093c36) cell_ncimui_button_pane

0xebd1,	// (0x00093c36) bg_button_pane_cp032

0xa3a0,	// (0x0008f405) cell_ncimui_button_pane_t1

0xd287,	// (0x000922ec) image3_infobar_pane_ParamLimits

0xd287,	// (0x000922ec) image3_infobar_pane

0x9a86,	// (0x0008eaeb) fs_bigclock_status_pane_ParamLimits

0x9a86,	// (0x0008eaeb) fs_bigclock_status_pane

0x9a93,	// (0x0008eaf8) main_fs_bigclock_clock_pane_ParamLimits

0x9a93,	// (0x0008eaf8) main_fs_bigclock_clock_pane

0x9aaf,	// (0x0008eb14) main_fs_bigclock_indi_pane_ParamLimits

0x9aaf,	// (0x0008eb14) main_fs_bigclock_indi_pane

0x9ac8,	// (0x0008eb2d) main_fs_bigclock_swipe_pane_ParamLimits

0x9ac8,	// (0x0008eb2d) main_fs_bigclock_swipe_pane

0xebd1,	// (0x00093c36) main_fs_clock_dumped_data

0xe247,	// (0x000932ac) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe247,	// (0x000932ac) list_single_fs_bigclock_indicator_pane_g1

0xe261,	// (0x000932c6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe261,	// (0x000932c6) list_single_fs_bigclock_indicator_pane_g2

0xe27b,	// (0x000932e0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe27b,	// (0x000932e0) list_single_fs_bigclock_indicator_pane_g3

0xe295,	// (0x000932fa) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe295,	// (0x000932fa) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00094cd9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00094cd9) list_single_fs_bigclock_indicator_pane_g

0xe2be,	// (0x00093323) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe2be,	// (0x00093323) list_single_fs_bigclock_indicator_pane_t1

0xe2e6,	// (0x0009334b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe2e6,	// (0x0009334b) list_single_fs_bigclock_indicator_pane_t2

0xe30e,	// (0x00093373) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe30e,	// (0x00093373) list_single_fs_bigclock_indicator_pane_t3

0xe336,	// (0x0009339b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe336,	// (0x0009339b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00094ce4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00094ce4) list_single_fs_bigclock_indicator_pane_t

0xa3ae,	// (0x0008f413) image3_infobar_fav_pane_ParamLimits

0xa3ae,	// (0x0008f413) image3_infobar_fav_pane

0xa3be,	// (0x0008f423) image3_infobar_loc_pane_ParamLimits

0xa3be,	// (0x0008f423) image3_infobar_loc_pane

0xa3d2,	// (0x0008f437) image3_infobar_time_pane_ParamLimits

0xa3d2,	// (0x0008f437) image3_infobar_time_pane

0xc6de,	// (0x00091743) image3_infobar_time_pane_g1

0xa3e2,	// (0x0008f447) image3_infobar_time_pane_t1

0xc6de,	// (0x00091743) image3_infobar_loc_pane_g1

0xa3f0,	// (0x0008f455) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00094eb6) image3_infobar_loc_pane_g

0xa3f8,	// (0x0008f45d) image3_infobar_loc_pane_t1

0xc6de,	// (0x00091743) image3_infobar_fav_pane_g1

0xa406,	// (0x0008f46b) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00094ebb) image3_infobar_fav_pane_g

0xa40e,	// (0x0008f473) fs_bigclock_status_battery_pane

0xa417,	// (0x0008f47c) fs_bigclock_status_signal_pane

0xa420,	// (0x0008f485) fs_bigclock_status_title_pane

0xa429,	// (0x0008f48e) fs_bigclock_status_signal_pane_g1

0xa432,	// (0x0008f497) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00094ec0) fs_bigclock_status_signal_pane_g

0xa43a,	// (0x0008f49f) fs_bigclock_status_battery_pane_g1

0xa443,	// (0x0008f4a8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00094ec5) fs_bigclock_status_battery_pane_g

0xa44b,	// (0x0008f4b0) fs_bigclock_status_title_pane_t1

0xc6de,	// (0x00091743) main_fs_bigclock_clock_pane_g1

0xa459,	// (0x0008f4be) main_fs_bigclock_clock_pane_g2

0xa459,	// (0x0008f4be) main_fs_bigclock_clock_pane_g3

0xa459,	// (0x0008f4be) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00094eca) main_fs_bigclock_clock_pane_g

0xa461,	// (0x0008f4c6) main_fs_bigclock_clock_pane_t1

0xa46f,	// (0x0008f4d4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00094ed3) main_fs_bigclock_clock_pane_t

0xa47e,	// (0x0008f4e3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa47e,	// (0x0008f4e3) list_single_fs_bigclock_indicator_pane

0xa48f,	// (0x0008f4f4) list_single_fs_bigclock_pane_ParamLimits

0xa48f,	// (0x0008f4f4) list_single_fs_bigclock_pane

0xa4fb,	// (0x0008f560) main_fs_bigclock_indicator_pane_t1

0xa50a,	// (0x0008f56f) list_single_fs_bigclock_pane_g1

0xa512,	// (0x0008f577) list_single_fs_bigclock_pane_t1

0xc6de,	// (0x00091743) main_fs_bigclock_swipe_pane_g1

0xa555,	// (0x0008f5ba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00094ee4) main_fs_bigclock_swipe_pane_g

0xa55d,	// (0x0008f5c2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa55d,	// (0x0008f5c2) main_fs_bigclock_swipe_pane_t1

0x3fbd,	// (0x00089022) call_type_pane_ParamLimits

0xebd1,	// (0x00093c36) main_btmg_pane

0xe98b,	// (0x000939f0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe98b,	// (0x000939f0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00094e57) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00094e57) list_single_cale_mrui_row_pane_g

0xeb10,	// (0x00093b75) list_recal_vselct_arw_lo_pane

0xeb18,	// (0x00093b7d) list_recal_vselct_arw_up_pane

0xeb20,	// (0x00093b85) list_recal_vselct_pane

0xa57a,	// (0x0008f5df) btmg_button_pane

0xa584,	// (0x0008f5e9) main_btmg_pane_g1

0xebd1,	// (0x00093c36) bg_button_pane_cp044

0xa58e,	// (0x0008f5f3) btmg_button_pane_t1

0xc1af,	// (0x00091214) aid_listscroll_gen

0x1332,	// (0x00086397) main_cntbar_detail_pane

0xe6fb,	// (0x00093760) list_cmail_folder_pane

0xb419,	// (0x0009047e) sp_fs_scroll_pane_cp03_ParamLimits

0x0fac,	// (0x00086011) list_single_fs_dyc_pane_cp01_ParamLimits

0x0fac,	// (0x00086011) list_single_fs_dyc_pane_cp01

0xa59c,	// (0x0008f601) aid_size_cmail_indent

0xebac,	// (0x00093c11) list_single_dyc_row_pane_cp01

0xa5d7,	// (0x0008f63c) cntbar_detail_list_pane_ParamLimits

0xa5d7,	// (0x0008f63c) cntbar_detail_list_pane

0xa623,	// (0x0008f688) main_cntbar_detail_cont_pane_ParamLimits

0xa623,	// (0x0008f688) main_cntbar_detail_cont_pane

0xb419,	// (0x0009047e) scroll_pane_cp032_ParamLimits

0xb419,	// (0x0009047e) scroll_pane_cp032

0xa637,	// (0x0008f69c) cntbar_detail_list_event_pane_ParamLimits

0xa637,	// (0x0008f69c) cntbar_detail_list_event_pane

0xa5e7,	// (0x0008f64c) cntbar_detail_list_shct_pane

0x2f68,	// (0x00087fcd) aid_list_gen

0xa647,	// (0x0008f6ac) aid_scroll

0xa650,	// (0x0008f6b5) aid_size_touch_scroll_bar

0x8efe,	// (0x0008df63) aid_list_double

0xa659,	// (0x0008f6be) aid_list_single

0x8efe,	// (0x0008df63) aid_list_single_lg

0x0fc2,	// (0x00086027) aid_list_z_g_a_sm

0xa662,	// (0x0008f6c7) aid_list_z_g_d

0x0fca,	// (0x0008602f) aid_txt_z_prm

0x0fd8,	// (0x0008603d) aid_txt_z_prm_cp01

0x0fe6,	// (0x0008604b) aid_txt_z_sec

0xa66a,	// (0x0008f6cf) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa66a,	// (0x0008f6cf) main_cntbar_detail_cont_pane_g1

0xa67e,	// (0x0008f6e3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa67e,	// (0x0008f6e3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00094ee9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00094ee9) main_cntbar_detail_cont_pane_g

0xa68e,	// (0x0008f6f3) main_cntbar_detail_cont_pane_t1

0xa69c,	// (0x0008f701) main_cntbar_detail_cont_pane_t2

0xa6aa,	// (0x0008f70f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00094eee) main_cntbar_detail_cont_pane_t

0xa6b8,	// (0x0008f71d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa6b8,	// (0x0008f71d) cell_cntbar_detail_list_shct_pane

0xa6cc,	// (0x0008f731) cntbar_detail_list_shct_pane_g1

0xa6d5,	// (0x0008f73a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00094ef5) cntbar_detail_list_shct_pane_g

0xa6de,	// (0x0008f743) cntbar_detail_list_event_pane_g1_ParamLimits

0xa6de,	// (0x0008f743) cntbar_detail_list_event_pane_g1

0xa6ea,	// (0x0008f74f) cntbar_detail_list_event_pane_g2_ParamLimits

0xa6ea,	// (0x0008f74f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00094efa) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00094efa) cntbar_detail_list_event_pane_g

0xa756,	// (0x0008f7bb) cntbar_detail_list_event_pane_t1_ParamLimits

0xa756,	// (0x0008f7bb) cntbar_detail_list_event_pane_t1

0xa76b,	// (0x0008f7d0) cntbar_detail_list_event_pane_t2_ParamLimits

0xa76b,	// (0x0008f7d0) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00094f07) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00094f07) cntbar_detail_list_event_pane_t

0xc6de,	// (0x00091743) cell_cntbar_detail_list_shct_pane_g1

0x45dc,	// (0x00089641) navi_pane_mv_g3

0x1332,	// (0x00086397) main_cntbar_detail_pane_ParamLimits

0xebd1,	// (0x00093c36) main_notif_wgt_pane

0xd019,	// (0x0009207e) aid_tch_main_mp4_pane_g4

0xd21b,	// (0x00092280) popup_slider_window_cp02

0xeb06,	// (0x00093b6b) list_recal_day_event_pane

0xa5a5,	// (0x0008f60a) cntbar_detail_btn_pane_ParamLimits

0xa5a5,	// (0x0008f60a) cntbar_detail_btn_pane

0xa5be,	// (0x0008f623) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5be,	// (0x0008f623) cntbar_detail_btn_pane_cp01

0xa5e7,	// (0x0008f64c) cntbar_detail_list_shct_pane_ParamLimits

0xa5f7,	// (0x0008f65c) cntbar_detail_pane_g1_ParamLimits

0xa5f7,	// (0x0008f65c) cntbar_detail_pane_g1

0xa607,	// (0x0008f66c) cntbar_detail_pane_t1_ParamLimits

0xa607,	// (0x0008f66c) cntbar_detail_pane_t1

0xa6f6,	// (0x0008f75b) cntbar_detail_list_event_pane_g3_ParamLimits

0xa6f6,	// (0x0008f75b) cntbar_detail_list_event_pane_g3

0xa70e,	// (0x0008f773) cntbar_detail_list_event_pane_g4_ParamLimits

0xa70e,	// (0x0008f773) cntbar_detail_list_event_pane_g4

0xa726,	// (0x0008f78b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa726,	// (0x0008f78b) cntbar_detail_list_event_pane_g5

0xa73e,	// (0x0008f7a3) cntbar_detail_list_event_pane_g6_ParamLimits

0xa73e,	// (0x0008f7a3) cntbar_detail_list_event_pane_g6

0xa780,	// (0x0008f7e5) cntbar_detail_list_event_pane_t3_ParamLimits

0xa780,	// (0x0008f7e5) cntbar_detail_list_event_pane_t3

0xa792,	// (0x0008f7f7) popup_notif_wgt_window_ParamLimits

0xa792,	// (0x0008f7f7) popup_notif_wgt_window

0xa7ab,	// (0x0008f810) popup_submenu_window_cp01_ParamLimits

0xa7ab,	// (0x0008f810) popup_submenu_window_cp01

0x4666,	// (0x000896cb) bg_popup_window_pane_cp10

0xa7c1,	// (0x0008f826) listscroll_notif_wgt_pane

0xa7d3,	// (0x0008f838) list_notif_wgt_window

0xa7dc,	// (0x0008f841) scroll_pane_cp033

0xa7e5,	// (0x0008f84a) list_notif_wgt_row_pane_ParamLimits

0xa7e5,	// (0x0008f84a) list_notif_wgt_row_pane

0xa7f5,	// (0x0008f85a) aid_size_list_notif_wgt_del

0xa802,	// (0x0008f867) list_notif_wgt_row_pane_g1

0xa80e,	// (0x0008f873) list_notif_wgt_row_pane_g2

0xa81a,	// (0x0008f87f) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00094f0e) list_notif_wgt_row_pane_g

0xa827,	// (0x0008f88c) list_notif_wgt_row_pane_t1

0xa83c,	// (0x0008f8a1) list_notif_wgt_row_pane_t2

0xa84e,	// (0x0008f8b3) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00094f15) list_notif_wgt_row_pane_t

0xd687,	// (0x000926ec) list_recal_day_event_pane_g1

0xa860,	// (0x0008f8c5) list_recal_day_event_pane_t1

0xebd1,	// (0x00093c36) bg_button_pane_cp045

0xa86f,	// (0x0008f8d4) cntbar_detail_btn_pane_t1

0xc1c3,	// (0x00091228) main_callh_pane_ParamLimits

0xc1c3,	// (0x00091228) main_callh_pane

0xebd1,	// (0x00093c36) main_coverflow0_pane

0xebd1,	// (0x00093c36) main_wgtman_pane

0x9ad6,	// (0x0008eb3b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ad6,	// (0x0008eb3b) main_fs_bigclock_unlock_btn_pane

0x9f66,	// (0x0008efcb) bg_button_pane_cp16

0x9f76,	// (0x0008efdb) cell_tport_appsw_pane_g3

0xa87d,	// (0x0008f8e2) cf0_flow_pane_ParamLimits

0xa87d,	// (0x0008f8e2) cf0_flow_pane

0xa892,	// (0x0008f8f7) listscroll_cf0_pane

0xa89d,	// (0x0008f902) main_cf0_pane_g1

0xa8af,	// (0x0008f914) main_cf0_pane_t1_ParamLimits

0xa8af,	// (0x0008f914) main_cf0_pane_t1

0xa8c6,	// (0x0008f92b) main_cf0_pane_t2_ParamLimits

0xa8c6,	// (0x0008f92b) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00094f21) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00094f21) main_cf0_pane_t

0xa8dd,	// (0x0008f942) scroll_pane_cp11

0xa8e8,	// (0x0008f94d) cf0_flow_pane_g1

0xa8f0,	// (0x0008f955) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00094f26) cf0_flow_pane_g

0xa8f8,	// (0x0008f95d) cf0_flow_pane_t1

0xebd1,	// (0x00093c36) main_call6_pane

0xebd1,	// (0x00093c36) main_calllock_pane

0xa906,	// (0x0008f96b) call6_btn_grp_pane_ParamLimits

0xa906,	// (0x0008f96b) call6_btn_grp_pane

0xa920,	// (0x0008f985) call6_pane_g1_ParamLimits

0xa920,	// (0x0008f985) call6_pane_g1

0xa935,	// (0x0008f99a) popup_call6_1st_window_ParamLimits

0xa935,	// (0x0008f99a) popup_call6_1st_window

0xa946,	// (0x0008f9ab) popup_call6_2nd_window_ParamLimits

0xa946,	// (0x0008f9ab) popup_call6_2nd_window

0xa957,	// (0x0008f9bc) cell_call6_btn_pane_ParamLimits

0xa957,	// (0x0008f9bc) cell_call6_btn_pane

0x4666,	// (0x000896cb) bg_popup_call2_in_pane_cp03

0xa96b,	// (0x0008f9d0) popup_call6_1st_window_g1

0xa973,	// (0x0008f9d8) popup_call6_1st_window_g2

0xa97b,	// (0x0008f9e0) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00094f2b) popup_call6_1st_window_g

0xa983,	// (0x0008f9e8) popup_call6_1st_window_t1

0xa992,	// (0x0008f9f7) popup_call6_1st_window_t2

0xa9a2,	// (0x0008fa07) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00094f32) popup_call6_1st_window_t

0x4666,	// (0x000896cb) bg_popup_call2_in_pane_cp04

0xa96b,	// (0x0008f9d0) popup_call6_2nd_window_g1

0xa973,	// (0x0008f9d8) popup_call6_2nd_window_g2

0xa97b,	// (0x0008f9e0) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00094f2b) popup_call6_2nd_window_g

0xa983,	// (0x0008f9e8) popup_call6_2nd_window_t1

0xebd1,	// (0x00093c36) bg_button_pane_cp15

0xa9b2,	// (0x0008fa17) cell_call6_btn_pane_g1

0xa9bb,	// (0x0008fa20) cell_call6_btn_pane_t1

0xa9ca,	// (0x0008fa2f) listscroll_wgtman_pane_ParamLimits

0xa9ca,	// (0x0008fa2f) listscroll_wgtman_pane

0xa9eb,	// (0x0008fa50) wgtman_btn_pane_ParamLimits

0xa9eb,	// (0x0008fa50) wgtman_btn_pane

0x4217,	// (0x0008927c) aid_scroll_copy1

0xaa2e,	// (0x0008fa93) list_wgtman_pane

0xaa38,	// (0x0008fa9d) wgtman_btn_pane_g1_ParamLimits

0xaa38,	// (0x0008fa9d) wgtman_btn_pane_g1

0xaa64,	// (0x0008fac9) wgtman_btn_pane_t1_ParamLimits

0xaa64,	// (0x0008fac9) wgtman_btn_pane_t1

0xaaa1,	// (0x0008fb06) wgtman_btn_pane_t2_ParamLimits

0xaaa1,	// (0x0008fb06) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00094f39) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00094f39) wgtman_btn_pane_t

0xaab8,	// (0x0008fb1d) listrow_wgtman_pane_ParamLimits

0xaab8,	// (0x0008fb1d) listrow_wgtman_pane

0xaaca,	// (0x0008fb2f) listrow_wgtman_pane_g1

0xaad7,	// (0x0008fb3c) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00094f3e) listrow_wgtman_pane_g

0x0ff4,	// (0x00086059) listrow_wgtman_pane_t1

0x100c,	// (0x00086071) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00094f43) listrow_wgtman_pane_t

0x1032,	// (0x00086097) wait_bar_pane_cp09

0xaaf5,	// (0x0008fb5a) main_calllock_btn_pane

0xaaff,	// (0x0008fb64) main_calllock_pane_g1

0xebd1,	// (0x00093c36) bg_button_pane_cp17

0xab0b,	// (0x0008fb70) main_calllock_btn_pane_g1

0xab14,	// (0x0008fb79) main_calllock_btn_pane_t1

0xebd1,	// (0x00093c36) main_dialer3_pane

0xebd1,	// (0x00093c36) main_fmrd2_pane

0xc6de,	// (0x00091743) main_fs_bigclock_unlock_btn_pane_g1

0xab2b,	// (0x0008fb90) main_fs_bigclock_unlock_btn_pane_t1

0xab39,	// (0x0008fb9e) area_fmrd2_info_pane_ParamLimits

0xab39,	// (0x0008fb9e) area_fmrd2_info_pane

0xab4a,	// (0x0008fbaf) area_fmrd2_visual_pane_ParamLimits

0xab4a,	// (0x0008fbaf) area_fmrd2_visual_pane

0xab58,	// (0x0008fbbd) fmrd2_indi_pane_ParamLimits

0xab58,	// (0x0008fbbd) fmrd2_indi_pane

0xab65,	// (0x0008fbca) area_fmrd2_visual_pane_g1

0xab6d,	// (0x0008fbd2) area_fmrd2_visual_pane_t1

0xab7d,	// (0x0008fbe2) area_fmrd2_visual_pane_t2

0xab8d,	// (0x0008fbf2) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00094f4d) area_fmrd2_visual_pane_t

0xab9d,	// (0x0008fc02) area_fmrd2_info_pane_g1

0xaba5,	// (0x0008fc0a) area_fmrd2_info_pane_t1

0xabb5,	// (0x0008fc1a) area_fmrd2_info_pane_t2

0xabc5,	// (0x0008fc2a) area_fmrd2_info_pane_t3

0xabd5,	// (0x0008fc3a) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00094f54) area_fmrd2_info_pane_t

0xabe3,	// (0x0008fc48) fmrd2_indi_pane_t1

0xabf3,	// (0x0008fc58) fmrd2_indi_pane_t2

0xac03,	// (0x0008fc68) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00094f5d) fmrd2_indi_pane_t

0xe2a4,	// (0x00093309) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe2a4,	// (0x00093309) list_single_fs_bigclock_indicator_pane_g5

0xe34b,	// (0x000933b0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe34b,	// (0x000933b0) list_single_fs_bigclock_indicator_pane_t5

0xa0e1,	// (0x0008f146) aid_cell_bcale_month_pane_ParamLimits

0xa0e1,	// (0x0008f146) aid_cell_bcale_month_pane

0xa0ff,	// (0x0008f164) bcale_month_pane_ParamLimits

0xa0ff,	// (0x0008f164) bcale_month_pane

0xa123,	// (0x0008f188) bcale_preview_pane_ParamLimits

0xa123,	// (0x0008f188) bcale_preview_pane

0xa512,	// (0x0008f577) list_single_fs_bigclock_pane_t1_ParamLimits

0xa531,	// (0x0008f596) list_single_fs_bigclock_pane_t2_ParamLimits

0xa531,	// (0x0008f596) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00094edf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00094edf) list_single_fs_bigclock_pane_t

0xab23,	// (0x0008fb88) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00094f48) main_fs_bigclock_unlock_btn_pane_g

0xac13,	// (0x0008fc78) aid_dia3_key_size_ParamLimits

0xac13,	// (0x0008fc78) aid_dia3_key_size

0xac22,	// (0x0008fc87) aid_dia3_listrow_size_ParamLimits

0xac22,	// (0x0008fc87) aid_dia3_listrow_size

0xac37,	// (0x0008fc9c) dia3_keypad_fun_pane_ParamLimits

0xac37,	// (0x0008fc9c) dia3_keypad_fun_pane

0xac53,	// (0x0008fcb8) dia3_keypad_num_pane_ParamLimits

0xac53,	// (0x0008fcb8) dia3_keypad_num_pane

0xac6e,	// (0x0008fcd3) dia3_listscroll_pane_ParamLimits

0xac6e,	// (0x0008fcd3) dia3_listscroll_pane

0xac81,	// (0x0008fce6) dia3_numentry_pane_ParamLimits

0xac81,	// (0x0008fce6) dia3_numentry_pane

0xac95,	// (0x0008fcfa) dia3_list_pane

0xaca0,	// (0x0008fd05) scroll_pane_cp12

0xebd1,	// (0x00093c36) bg_dia3_numentry_pane

0xacab,	// (0x0008fd10) dia3_numentry_pane_t1

0xacba,	// (0x0008fd1f) cell_dia3_key_num_pane

0xacc2,	// (0x0008fd27) cell_dia3_key0_fun_pane_ParamLimits

0xacc2,	// (0x0008fd27) cell_dia3_key0_fun_pane

0xacd6,	// (0x0008fd3b) cell_dia3_key1_fun_pane_ParamLimits

0xacd6,	// (0x0008fd3b) cell_dia3_key1_fun_pane

0xacee,	// (0x0008fd53) dia3_listrow_pane

0xdfb4,	// (0x00093019) bg_dia3_numentry_pane_g1

0xebd1,	// (0x00093c36) bg_button_pane_cp21

0xad00,	// (0x0008fd65) cell_dia3_key_num_pane_t1

0xad0e,	// (0x0008fd73) cell_dia3_key_num_pane_t2

0xad1d,	// (0x0008fd82) cell_dia3_key_num_pane_t3

0xad2c,	// (0x0008fd91) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00094f64) cell_dia3_key_num_pane_t

0xebd1,	// (0x00093c36) bg_button_pane_cp19

0xad3b,	// (0x0008fda0) cell_dia3_key0_fun_pane_g1

0xebd1,	// (0x00093c36) bg_button_pane_cp20

0xad43,	// (0x0008fda8) cell_dia3_key1_fun_pane_g1

0xad4b,	// (0x0008fdb0) area_left_week_number_pane

0xad57,	// (0x0008fdbc) area_top_day_name_pane

0xad6a,	// (0x0008fdcf) frame_month_view_pane

0xad7d,	// (0x0008fde2) grid_month_view_pane

0xad8b,	// (0x0008fdf0) cell_top_day_name_pane_ParamLimits

0xad8b,	// (0x0008fdf0) cell_top_day_name_pane

0xadb8,	// (0x0008fe1d) cell_area_left_week_number_pane_ParamLimits

0xadb8,	// (0x0008fe1d) cell_area_left_week_number_pane

0xadcc,	// (0x0008fe31) cell_month_view_pane_ParamLimits

0xadcc,	// (0x0008fe31) cell_month_view_pane

0xadf9,	// (0x0008fe5e) frm_month_g1

0xae06,	// (0x0008fe6b) frm_month_g2

0xae19,	// (0x0008fe7e) frm_month_g3

0xae2c,	// (0x0008fe91) frm_month_g4

0xae3f,	// (0x0008fea4) frm_month_g5

0xae52,	// (0x0008feb7) frm_month_g6

0xae65,	// (0x0008feca) frm_month_g7

0xae78,	// (0x0008fedd) frm_month_g8

0xae85,	// (0x0008feea) frm_month_g9

0xae95,	// (0x0008fefa) frm_month_g10

0xaea5,	// (0x0008ff0a) frm_month_g11

0xaeb5,	// (0x0008ff1a) frm_month_g12

0xaec7,	// (0x0008ff2c) frm_month_g13

0xaed9,	// (0x0008ff3e) frm_month_g14

0xaeed,	// (0x0008ff52) frm_month_g15

0xaf01,	// (0x0008ff66) frm_month_g16

0x000f,

0xff08,	// (0x00094f6d) frm_month_g

0xaf15,	// (0x0008ff7a) cell_top_day_name_pane_t1

0xaf28,	// (0x0008ff8d) cell_area_left_week_number_pane_g1

0xaf34,	// (0x0008ff99) cell_area_left_week_number_pane_t1

0xc94a,	// (0x000919af) cell_month_view_pane_g1

0xaf47,	// (0x0008ffac) cell_month_view_pane_t1

0xebd1,	// (0x00093c36) main_fps_pane

0xe520,	// (0x00093585) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe520,	// (0x00093585) cmail_ddmenu_btn02_pane_cp1

0xe53c,	// (0x000935a1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe53c,	// (0x000935a1) cmail_ddmenu_btn02_pane_cp2

0xa314,	// (0x0008f379) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa314,	// (0x0008f379) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00094e92) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00094e92) cmail_ddmenu_btn02_pane_g

0xa332,	// (0x0008f397) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa332,	// (0x0008f397) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00094e97) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00094e97) cmail_ddmenu_btn02_pane_t

0xaf5a,	// (0x0008ffbf) fps_text_pane_ParamLimits

0xaf5a,	// (0x0008ffbf) fps_text_pane

0xaf71,	// (0x0008ffd6) main_fps_pane_g1_ParamLimits

0xaf71,	// (0x0008ffd6) main_fps_pane_g1

0xaf8b,	// (0x0008fff0) wait_bar_pane_cp010_ParamLimits

0xaf8b,	// (0x0008fff0) wait_bar_pane_cp010

0xaf9c,	// (0x00090001) fps_text_pane_t1_ParamLimits

0xaf9c,	// (0x00090001) fps_text_pane_t1

0xd39c,	// (0x00092401) cam4_image_uncrop_pane_g1

0xd3a5,	// (0x0009240a) cam4_image_uncrop_pane_g2

0x7f44,	// (0x0008cfa9) cam4_image_uncrop_pane_g3

0x7f4d,	// (0x0008cfb2) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00094953) cam4_image_uncrop_pane_g

0xacee,	// (0x0008fd53) dia3_listrow_pane_ParamLimits

0xebd1,	// (0x00093c36) main_phob2_pane

0x9f37,	// (0x0008ef9c) cell_tport_appsw_pane_cp02_ParamLimits

0x9f37,	// (0x0008ef9c) cell_tport_appsw_pane_cp02

0x9f4b,	// (0x0008efb0) cell_tport_appsw_pane_cp03_ParamLimits

0x9f4b,	// (0x0008efb0) cell_tport_appsw_pane_cp03

0xebd1,	// (0x00093c36) phob2_contact_card_pane

0xebd1,	// (0x00093c36) phob2_listscroll_pane

0xafb4,	// (0x00090019) phob2_list_pane

0xafbc,	// (0x00090021) scroll_pane_cp034

0xafc4,	// (0x00090029) phob2_cc_data_pane_ParamLimits

0xafc4,	// (0x00090029) phob2_cc_data_pane

0xafe3,	// (0x00090048) phob2_cc_listscroll_pane_ParamLimits

0xafe3,	// (0x00090048) phob2_cc_listscroll_pane

0xb001,	// (0x00090066) list_double_large_graphic_phob2_pane_ParamLimits

0xb001,	// (0x00090066) list_double_large_graphic_phob2_pane

0xb013,	// (0x00090078) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb013,	// (0x00090078) list_double_large_graphic_phob2_pane_g1

0x1044,	// (0x000860a9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1044,	// (0x000860a9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00094f8e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00094f8e) list_double_large_graphic_phob2_pane_g

0x1050,	// (0x000860b5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1050,	// (0x000860b5) list_double_large_graphic_phob2_pane_t1

0x1065,	// (0x000860ca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1065,	// (0x000860ca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00094f93) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00094f93) list_double_large_graphic_phob2_pane_t

0xebd1,	// (0x00093c36) list_highlight_pane_cp024

0xb029,	// (0x0009008e) phob2_cc_button_pane

0xb031,	// (0x00090096) phob2_cc_data_pane_g1_ParamLimits

0xb031,	// (0x00090096) phob2_cc_data_pane_g1

0xb046,	// (0x000900ab) phob2_cc_data_pane_g2_ParamLimits

0xb046,	// (0x000900ab) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00094f98) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00094f98) phob2_cc_data_pane_g

0xb056,	// (0x000900bb) phob2_cc_data_pane_t1_ParamLimits

0xb056,	// (0x000900bb) phob2_cc_data_pane_t1

0xb06e,	// (0x000900d3) phob2_cc_data_pane_t2_ParamLimits

0xb06e,	// (0x000900d3) phob2_cc_data_pane_t2

0xb086,	// (0x000900eb) phob2_cc_data_pane_t3_ParamLimits

0xb086,	// (0x000900eb) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00094f9d) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00094f9d) phob2_cc_data_pane_t

0xb09e,	// (0x00090103) phob2_cc_list_pane_ParamLimits

0xb09e,	// (0x00090103) phob2_cc_list_pane

0xd730,	// (0x00092795) scroll_pane_cp035_ParamLimits

0xd730,	// (0x00092795) scroll_pane_cp035

0x1332,	// (0x00086397) bg_button_pane_cp033

0xb0aa,	// (0x0009010f) phob2_cc_button_pane_g1

0xb0b6,	// (0x0009011b) phob2_cc_button_pane_t1

0xb0cb,	// (0x00090130) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00094fa4) phob2_cc_button_pane_t

0xb0dd,	// (0x00090142) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb0dd,	// (0x00090142) list_double_large_graphic_phob2_cc_pane

0xb0ef,	// (0x00090154) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb0ef,	// (0x00090154) list_double_large_graphic_phob2_cc_pane_g1

0x1077,	// (0x000860dc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1077,	// (0x000860dc) list_double_large_graphic_phob2_cc_pane_g2

0x1083,	// (0x000860e8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1083,	// (0x000860e8) list_double_large_graphic_phob2_cc_pane_g3

0x108f,	// (0x000860f4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x108f,	// (0x000860f4) list_double_large_graphic_phob2_cc_pane_g4

0x109b,	// (0x00086100) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x109b,	// (0x00086100) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00094fa9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00094fa9) list_double_large_graphic_phob2_cc_pane_g

0x10a7,	// (0x0008610c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10a7,	// (0x0008610c) list_double_large_graphic_phob2_cc_pane_t1

0x10d0,	// (0x00086135) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10d0,	// (0x00086135) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00094fb4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00094fb4) list_double_large_graphic_phob2_cc_pane_t

0xb0fb,	// (0x00090160) list_highlight_pane_cp025_ParamLimits

0xb0fb,	// (0x00090160) list_highlight_pane_cp025

0x1332,	// (0x00086397) bg_button_pane_cp033_ParamLimits

0xb0aa,	// (0x0009010f) phob2_cc_button_pane_g1_ParamLimits

0xb0b6,	// (0x0009011b) phob2_cc_button_pane_t1_ParamLimits

0xb0cb,	// (0x00090130) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00094fa4) phob2_cc_button_pane_t_ParamLimits

0x1340,	// (0x000863a5) popup_wgtman_window

0xd536,	// (0x0009259b) scroll_pane_cp038

0xaa10,	// (0x0008fa75) wgtman_btn_pane_cp_01_ParamLimits

0xaa10,	// (0x0008fa75) wgtman_btn_pane_cp_01

0xb109,	// (0x0009016e) wgtman_content_pane

0xb112,	// (0x00090177) wgtman_heading_pane

0xebd1,	// (0x00093c36) bg_heading_pane_cp02

0xb11b,	// (0x00090180) wgtman_heading_pane_g1

0xb123,	// (0x00090188) wgtman_heading_pane_t1

0xb131,	// (0x00090196) scroll_pane_cp036

0xb139,	// (0x0009019e) wgtman_list_pane

0xb141,	// (0x000901a6) wgtman_list_pane_t1_ParamLimits

0xb141,	// (0x000901a6) wgtman_list_pane_t1

0xee63,	// (0x00093ec8) cam4_grid_pane

0x0662,	// (0x000856c7) bg_button_pane_cp015_ParamLimits

0x8b7e,	// (0x0008dbe3) bg_button_pane_cp016_ParamLimits

0x8b91,	// (0x0008dbf6) bg_button_pane_cp017_ParamLimits

0x06a8,	// (0x0008570d) popup_vitu2_query_window_g3_ParamLimits

0x06a8,	// (0x0008570d) popup_vitu2_query_window_g3

0x0723,	// (0x00085788) popup_vitu2_query_window_t6_ParamLimits

0x0723,	// (0x00085788) popup_vitu2_query_window_t6

0x074e,	// (0x000857b3) popup_vitu2_query_window_t7_ParamLimits

0x074e,	// (0x000857b3) popup_vitu2_query_window_t7

0xd39c,	// (0x00092401) cam4_grid_pane_g1

0xd3a5,	// (0x0009240a) cam4_grid_pane_g2

0xb15b,	// (0x000901c0) cam4_grid_pane_g3

0xb164,	// (0x000901c9) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00094fb9) cam4_grid_pane_g

0x2964,	// (0x000879c9) aid_placing_vt_slider_lsc_ParamLimits

0x2cbf,	// (0x00087d24) vidtel_button_pane_ParamLimits

0x2cbf,	// (0x00087d24) vidtel_button_pane

0xb16f,	// (0x000901d4) bg_button_pane_cp034

0xb179,	// (0x000901de) vidtel_button_pane_g1

0xb181,	// (0x000901e6) vidtel_button_pane_t1

0xd677,	// (0x000926dc) aid_size_vtel_slider_touch

0xd730,	// (0x00092795) scroll_pane_cp039

0xdff2,	// (0x00093057) ncim_query_button_pane_cp01_ParamLimits

0xe011,	// (0x00093076) ncimui_query_pane_g1_ParamLimits

0x1332,	// (0x00086397) input_focus_pane_cp012_ParamLimits

0xe036,	// (0x0009309b) ncim_query_entry_pane_t1_ParamLimits

0xd730,	// (0x00092795) scroll_pane_cp039_ParamLimits

0x44c7,	// (0x0008952c) navi_pane_bcale_mc_g1

0x44cf,	// (0x00089534) navi_pane_bcale_mc_t1

0xe585,	// (0x000935ea) main_sp_fs_email_pane_g1

0xe591,	// (0x000935f6) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00094d4a) main_sp_fs_email_pane_g

0xe997,	// (0x000939fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe997,	// (0x000939fc) list_single_cale_mrui_row_pane_g3

0x0fa2,	// (0x00086007) list_single_recal_day_pane_g5_event_pane

0xeb80,	// (0x00093be5) list_single_recal_day_pane_g7

0xb18f,	// (0x000901f4) list_recal_day_event_pane_cp01

0xb198,	// (0x000901fd) list_recal_vselct_arw_lo_pane_cp01

0xb1a0,	// (0x00090205) list_recal_vselct_arw_up_pane_cp01

0xb1a8,	// (0x0009020d) list_recal_vselct_pane_cp01

0xd687,	// (0x000926ec) list_recal_day_event_pane_cp01_g1

0xebb5,	// (0x00093c1a) list_recal_day_event_pane_cp01_t1

0xeb88,	// (0x00093bed) list_single_recal_day_pane_t1_ParamLimits

0xeb9a,	// (0x00093bff) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00094ea7) list_single_recal_day_pane_t_ParamLimits

0x17fc,	// (0x00086861) bg_notes_pane_ParamLimits

0x1b32,	// (0x00086b97) list_notes_pane_ParamLimits

0x1b40,	// (0x00086ba5) scroll_pane_cp06_ParamLimits

0x1b68,	// (0x00086bcd) main_notes_pane_ParamLimits

0xebd1,	// (0x00093c36) main_welc_pane

0xb1b2,	// (0x00090217) main_welc_body_pane_ParamLimits

0xb1b2,	// (0x00090217) main_welc_body_pane

0xb1d0,	// (0x00090235) main_welc_opti_pane_ParamLimits

0xb1d0,	// (0x00090235) main_welc_opti_pane

0xb215,	// (0x0009027a) main_welc_pane_t1_ParamLimits

0xb215,	// (0x0009027a) main_welc_pane_t1

0xb233,	// (0x00090298) main_welc_body_row_pane_ParamLimits

0xb233,	// (0x00090298) main_welc_body_row_pane

0xebc3,	// (0x00093c28) main_welc_opti_row_pane_ParamLimits

0xebc3,	// (0x00093c28) main_welc_opti_row_pane

0xb247,	// (0x000902ac) main_welc_opti_row_pane_g1

0xb24f,	// (0x000902b4) main_welc_opti_row_pane_t1

0xb25f,	// (0x000902c4) main_welc_body_row_pane_t1

0xa7cb,	// (0x0008f830) popup_notif_wgt_heading_pane

0xa7f5,	// (0x0008f85a) aid_size_list_notif_wgt_del_ParamLimits

0xa802,	// (0x0008f867) list_notif_wgt_row_pane_g1_ParamLimits

0xa80e,	// (0x0008f873) list_notif_wgt_row_pane_g2_ParamLimits

0xa81a,	// (0x0008f87f) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00094f0e) list_notif_wgt_row_pane_g_ParamLimits

0xa827,	// (0x0008f88c) list_notif_wgt_row_pane_t1_ParamLimits

0xa83c,	// (0x0008f8a1) list_notif_wgt_row_pane_t2_ParamLimits

0xa84e,	// (0x0008f8b3) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00094f15) list_notif_wgt_row_pane_t_ParamLimits

0xaaca,	// (0x0008fb2f) listrow_wgtman_pane_g1_ParamLimits

0xaad7,	// (0x0008fb3c) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00094f3e) listrow_wgtman_pane_g_ParamLimits

0x0ff4,	// (0x00086059) listrow_wgtman_pane_t1_ParamLimits

0x100c,	// (0x00086071) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00094f43) listrow_wgtman_pane_t_ParamLimits

0x1032,	// (0x00086097) wait_bar_pane_cp09_ParamLimits

0xebd1,	// (0x00093c36) bg_popup_heading_pane_cp02

0xb26e,	// (0x000902d3) popup_notif_wgt_heading_pane_g1

0xb276,	// (0x000902db) popup_notif_wgt_heading_pane_t1

0xebd1,	// (0x00093c36) main_vids_pane

0xebd1,	// (0x00093c36) vids_listscroll_pane

0xb284,	// (0x000902e9) scroll_pane_cp040

0xebd1,	// (0x00093c36) vids_list_pane

0xb28f,	// (0x000902f4) vids_list_double_pane_ParamLimits

0xb28f,	// (0x000902f4) vids_list_double_pane

0xb2a0,	// (0x00090305) vids_list_double_pane_g1

0xb2a9,	// (0x0009030e) vids_list_double_pane_t1

0xb2b9,	// (0x0009031e) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00094fc7) vids_list_double_pane_t

0x1332,	// (0x00086397) main_ncimui_pane_ParamLimits

0x966c,	// (0x0008e6d1) main_ncimui_pane_g1_ParamLimits

0x9678,	// (0x0008e6dd) main_ncimui_pane_g2_ParamLimits

0x9678,	// (0x0008e6dd) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00094c4f) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00094c4f) main_ncimui_pane_g

0xb1eb,	// (0x00090250) main_welc_pane_g1_ParamLimits

0xb1eb,	// (0x00090250) main_welc_pane_g1

0xb200,	// (0x00090265) main_welc_pane_g2_ParamLimits

0xb200,	// (0x00090265) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00094fc2) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00094fc2) main_welc_pane_g

0x17fc,	// (0x00086861) listscroll_mce_pane_ParamLimits

0x465e,	// (0x000896c3) wait_bar_pane_cp10

0xc1b7,	// (0x0009121c) main_cale_day_pane_ParamLimits

0xc1b7,	// (0x0009121c) main_cale_week_pane_ParamLimits

0x17fc,	// (0x00086861) main_messa_pane_ParamLimits

0x727e,	// (0x0008c2e3) main_clock2_btn_pane_ParamLimits

0x727e,	// (0x0008c2e3) main_clock2_btn_pane

0xcb2a,	// (0x00091b8f) main_clock2_btn_pane_cp01_ParamLimits

0xcb2a,	// (0x00091b8f) main_clock2_btn_pane_cp01

0xe923,	// (0x00093988) list_cale_mrui_pane_ParamLimits

0xa8a7,	// (0x0008f90c) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00094f1c) main_cf0_pane_g

0xad4b,	// (0x0008fdb0) area_left_week_number_pane_ParamLimits

0xad57,	// (0x0008fdbc) area_top_day_name_pane_ParamLimits

0xad6a,	// (0x0008fdcf) frame_month_view_pane_ParamLimits

0xad7d,	// (0x0008fde2) grid_month_view_pane_ParamLimits

0xadf9,	// (0x0008fe5e) frm_month_g1_ParamLimits

0xae06,	// (0x0008fe6b) frm_month_g2_ParamLimits

0xae19,	// (0x0008fe7e) frm_month_g3_ParamLimits

0xae2c,	// (0x0008fe91) frm_month_g4_ParamLimits

0xae3f,	// (0x0008fea4) frm_month_g5_ParamLimits

0xae52,	// (0x0008feb7) frm_month_g6_ParamLimits

0xae65,	// (0x0008feca) frm_month_g7_ParamLimits

0xae78,	// (0x0008fedd) frm_month_g8_ParamLimits

0xae85,	// (0x0008feea) frm_month_g9_ParamLimits

0xae95,	// (0x0008fefa) frm_month_g10_ParamLimits

0xaea5,	// (0x0008ff0a) frm_month_g11_ParamLimits

0xaeb5,	// (0x0008ff1a) frm_month_g12_ParamLimits

0xaec7,	// (0x0008ff2c) frm_month_g13_ParamLimits

0xaed9,	// (0x0008ff3e) frm_month_g14_ParamLimits

0xaeed,	// (0x0008ff52) frm_month_g15_ParamLimits

0xaf01,	// (0x0008ff66) frm_month_g16_ParamLimits

0xff08,	// (0x00094f6d) frm_month_g_ParamLimits

0xaf15,	// (0x0008ff7a) cell_top_day_name_pane_t1_ParamLimits

0xaf28,	// (0x0008ff8d) cell_area_left_week_number_pane_g1_ParamLimits

0xaf34,	// (0x0008ff99) cell_area_left_week_number_pane_t1_ParamLimits

0xc94a,	// (0x000919af) cell_month_view_pane_g1_ParamLimits

0xaf47,	// (0x0008ffac) cell_month_view_pane_t1_ParamLimits

0x17f4,	// (0x00086859) main_clock2_btn_pane_g1

0xb2c9,	// (0x0009032e) main_clock2_btn_pane_t1

0x1332,	// (0x00086397) listscroll_cmail_pane_ParamLimits

0xe585,	// (0x000935ea) main_sp_fs_email_pane_g1_ParamLimits

0xe591,	// (0x000935f6) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00094d4a) main_sp_fs_email_pane_g_ParamLimits

0xeae7,	// (0x00093b4c) list_recal_day_pane_ParamLimits

0xeaf8,	// (0x00093b5d) mian_recal_day_pane_t1

0x0b72,	// (0x00085bd7) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b72,	// (0x00085bd7) list_single_dyc_row_text_pane_t4

0x0bbb,	// (0x00085c20) list_single_dyc_row_text_pane_t5_ParamLimits

0x0bbb,	// (0x00085c20) list_single_dyc_row_text_pane_t5

0xe637,	// (0x0009369c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe637,	// (0x0009369c) list_single_dyc_row_text_pane_t6

0x3c7d,	// (0x00088ce2) aid_mgn_list_cale_time_pane

0x1332,	// (0x00086397) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large

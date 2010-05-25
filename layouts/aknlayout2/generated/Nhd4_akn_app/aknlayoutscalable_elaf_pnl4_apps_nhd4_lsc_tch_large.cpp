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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00084f10 };

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
0x1201,	// (0x00086111) Screen

0x120d,	// (0x0008611d) application_window

0x1249,	// (0x00086159) area_bottom_pane_ParamLimits

0x1249,	// (0x00086159) area_bottom_pane

0x1282,	// (0x00086192) area_top_pane_ParamLimits

0x1282,	// (0x00086192) area_top_pane

0xb127,	// (0x00090037) call_video_uplink_pane_ParamLimits

0xb127,	// (0x00090037) call_video_uplink_pane

0x1310,	// (0x00086220) main_pane_ParamLimits

0x1310,	// (0x00086220) main_pane

0xbba1,	// (0x00090ab1) context_pane

0x6040,	// (0x0008af50) navi_pane

0x6072,	// (0x0008af82) popup_cale_events_window_ParamLimits

0x6072,	// (0x0008af82) popup_cale_events_window

0xbbb4,	// (0x00090ac4) popup_mup_playback_window

0x608a,	// (0x0008af9a) signal_pane

0x1b79,	// (0x00086a89) main_browser_pane

0x245d,	// (0x0008736d) main_burst_pane

0x5da8,	// (0x0008acb8) main_calc_pane

0xbb33,	// (0x00090a43) main_cale_day_pane

0x1e4c,	// (0x00086d5c) main_cale_month_pane

0xbb33,	// (0x00090a43) main_cale_week_pane

0x245d,	// (0x0008736d) main_call_pane

0x15ac,	// (0x000864bc) main_call_poc_pane

0x245d,	// (0x0008736d) main_camera_pane

0x245d,	// (0x0008736d) main_chi_dic_pane

0x3f03,	// (0x00088e13) main_clock_pane

0x15ac,	// (0x000864bc) main_fmradio_pane

0x245d,	// (0x0008736d) main_graph_messa_pane

0x15ac,	// (0x000864bc) main_help_pane

0x1b79,	// (0x00086a89) main_im_pane

0x1807,	// (0x00086717) main_image_pane_ParamLimits

0x1807,	// (0x00086717) main_image_pane

0x15ac,	// (0x000864bc) main_location2_pane

0x245d,	// (0x0008736d) main_location_pane

0x1807,	// (0x00086717) main_messa_pane

0x15ac,	// (0x000864bc) main_mp2_pane

0x245d,	// (0x0008736d) main_mp_pane

0x15ac,	// (0x000864bc) main_msg_pane

0x15ac,	// (0x000864bc) main_mup_eq_pane

0x15ac,	// (0x000864bc) main_mup_pane

0x1b79,	// (0x00086a89) main_notes_pane

0x15ac,	// (0x000864bc) main_pec_pane

0x15ac,	// (0x000864bc) main_phob_pane

0x15ac,	// (0x000864bc) main_pinb_pane

0x15ac,	// (0x000864bc) main_postcard_pane

0x15ac,	// (0x000864bc) main_qdial_pane

0x245d,	// (0x0008736d) main_skin_pane

0x15ac,	// (0x000864bc) main_smil2_pane

0x245d,	// (0x0008736d) main_smil_pane

0x245d,	// (0x0008736d) main_video_pane

0x245d,	// (0x0008736d) main_video_tele_pane

0x1807,	// (0x00086717) main_viewer_pane_ParamLimits

0x1807,	// (0x00086717) main_viewer_pane

0x245d,	// (0x0008736d) main_vorec_pane

0x5dfc,	// (0x0008ad0c) popup_blid_sat_info_window_ParamLimits

0x5dfc,	// (0x0008ad0c) popup_blid_sat_info_window

0x5e54,	// (0x0008ad64) popup_dyc_status_message_window_ParamLimits

0x5e54,	// (0x0008ad64) popup_dyc_status_message_window

0x5e6c,	// (0x0008ad7c) popup_grid_large_graphic_window_ParamLimits

0x5e6c,	// (0x0008ad7c) popup_grid_large_graphic_window

0x5f1c,	// (0x0008ae2c) popup_loc_request_window_ParamLimits

0x5f1c,	// (0x0008ae2c) popup_loc_request_window

0x6018,	// (0x0008af28) popup_wml_address_window_ParamLimits

0x6018,	// (0x0008af28) popup_wml_address_window

0x5be2,	// (0x0008aaf2) call_muted_g1

0x506d,	// (0x00089f7d) popup_call_audio_conf_window_ParamLimits

0x506d,	// (0x00089f7d) popup_call_audio_conf_window

0x5bf6,	// (0x0008ab06) popup_call_audio_first_window_ParamLimits

0x5bf6,	// (0x0008ab06) popup_call_audio_first_window

0x5c6c,	// (0x0008ab7c) popup_call_audio_in_window_ParamLimits

0x5c6c,	// (0x0008ab7c) popup_call_audio_in_window

0x5ca8,	// (0x0008abb8) popup_call_audio_out_window_ParamLimits

0x5ca8,	// (0x0008abb8) popup_call_audio_out_window

0x5ce2,	// (0x0008abf2) popup_call_audio_second_window_ParamLimits

0x5ce2,	// (0x0008abf2) popup_call_audio_second_window

0x5d38,	// (0x0008ac48) popup_call_audio_wait_window_ParamLimits

0x5d38,	// (0x0008ac48) popup_call_audio_wait_window

0x5d6d,	// (0x0008ac7d) popup_number_entry_window_ParamLimits

0x5d6d,	// (0x0008ac7d) popup_number_entry_window

0xeae1,	// (0x000939f1) bg_popup_call_pane_cp05_ParamLimits

0xeae1,	// (0x000939f1) bg_popup_call_pane_cp05

0xeb01,	// (0x00093a11) popup_number_entry_window_t1

0xeb14,	// (0x00093a24) popup_number_entry_window_t2

0xeb26,	// (0x00093a36) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00093fda) popup_number_entry_window_t

0xeb38,	// (0x00093a48) text_title_cp2

0xeb4b,	// (0x00093a5b) bg_popup_call_pane_cp_ParamLimits

0xeb4b,	// (0x00093a5b) bg_popup_call_pane_cp

0xeb59,	// (0x00093a69) call_thumbnail_pane

0xeb61,	// (0x00093a71) popup_call_audio_in_window_g1_ParamLimits

0xeb61,	// (0x00093a71) popup_call_audio_in_window_g1

0xeb6d,	// (0x00093a7d) popup_call_audio_in_window_g2_ParamLimits

0xeb6d,	// (0x00093a7d) popup_call_audio_in_window_g2

0xeb79,	// (0x00093a89) popup_call_audio_in_window_g3_ParamLimits

0xeb79,	// (0x00093a89) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00093fe3) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00093fe3) popup_call_audio_in_window_g

0xeb85,	// (0x00093a95) popup_call_audio_in_window_t1_ParamLimits

0xeb85,	// (0x00093a95) popup_call_audio_in_window_t1

0xeba1,	// (0x00093ab1) popup_call_audio_in_window_t2_ParamLimits

0xeba1,	// (0x00093ab1) popup_call_audio_in_window_t2

0xebbd,	// (0x00093acd) popup_call_audio_in_window_t3_ParamLimits

0xebbd,	// (0x00093acd) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00093fea) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00093fea) popup_call_audio_in_window_t

0xeb4b,	// (0x00093a5b) bg_popup_call_pane_cp01_ParamLimits

0xeb4b,	// (0x00093a5b) bg_popup_call_pane_cp01

0xeb59,	// (0x00093a69) call_thumbnail_pane_cp02

0xebd0,	// (0x00093ae0) call_type_pane_cp022

0xebd8,	// (0x00093ae8) popup_call_audio_out_window_g1_ParamLimits

0xebd8,	// (0x00093ae8) popup_call_audio_out_window_g1

0xebea,	// (0x00093afa) popup_call_audio_out_window_g2_ParamLimits

0xebea,	// (0x00093afa) popup_call_audio_out_window_g2

0xebf6,	// (0x00093b06) popup_call_audio_out_window_g3_ParamLimits

0xebf6,	// (0x00093b06) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00093ff1) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00093ff1) popup_call_audio_out_window_g

0xec08,	// (0x00093b18) popup_call_audio_out_window_t1_ParamLimits

0xec08,	// (0x00093b18) popup_call_audio_out_window_t1

0xec20,	// (0x00093b30) popup_call_audio_out_window_t2_ParamLimits

0xec20,	// (0x00093b30) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00093ff8) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00093ff8) popup_call_audio_out_window_t

0xec35,	// (0x00093b45) bg_popup_call_pane_ParamLimits

0xec35,	// (0x00093b45) bg_popup_call_pane

0x14cd,	// (0x000863dd) call_thumbnail_pane_cp_ParamLimits

0x14cd,	// (0x000863dd) call_thumbnail_pane_cp

0xecb9,	// (0x00093bc9) call_type_pane_cp01_ParamLimits

0xecb9,	// (0x00093bc9) call_type_pane_cp01

0xecfd,	// (0x00093c0d) popup_call_audio_first_window_g1_ParamLimits

0xecfd,	// (0x00093c0d) popup_call_audio_first_window_g1

0xed49,	// (0x00093c59) popup_call_audio_first_window_g2_ParamLimits

0xed49,	// (0x00093c59) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00093ffd) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00093ffd) popup_call_audio_first_window_g

0xed8d,	// (0x00093c9d) popup_call_audio_first_window_t1_ParamLimits

0xed8d,	// (0x00093c9d) popup_call_audio_first_window_t1

0x14f1,	// (0x00086401) popup_call_audio_first_window_t4_ParamLimits

0x14f1,	// (0x00086401) popup_call_audio_first_window_t4

0x157d,	// (0x0008648d) popup_call_audio_first_window_t5_ParamLimits

0x157d,	// (0x0008648d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00094002) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00094002) popup_call_audio_first_window_t

0x15ac,	// (0x000864bc) bg_popup_call_pane_cp02

0x15b6,	// (0x000864c6) call_type_pane_cp023

0x15be,	// (0x000864ce) popup_call_audio_wait_window_g1

0x15c6,	// (0x000864d6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00094009) popup_call_audio_wait_window_g

0x15ce,	// (0x000864de) popup_call_audio_wait_window_t3

0x15dc,	// (0x000864ec) bg_popup_call_pane_cp03_ParamLimits

0x15dc,	// (0x000864ec) bg_popup_call_pane_cp03

0x163c,	// (0x0008654c) call_thumbnail_pane_cp011_ParamLimits

0x163c,	// (0x0008654c) call_thumbnail_pane_cp011

0x1648,	// (0x00086558) call_type_pane_cp034_ParamLimits

0x1648,	// (0x00086558) call_type_pane_cp034

0x1684,	// (0x00086594) popup_call_audio_second_window_g1_ParamLimits

0x1684,	// (0x00086594) popup_call_audio_second_window_g1

0x16c0,	// (0x000865d0) popup_call_audio_second_window_g2_ParamLimits

0x16c0,	// (0x000865d0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009400e) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009400e) popup_call_audio_second_window_g

0x16fc,	// (0x0008660c) popup_call_audio_second_window_t1_ParamLimits

0x16fc,	// (0x0008660c) popup_call_audio_second_window_t1

0x177d,	// (0x0008668d) popup_call_audio_second_window_t2_ParamLimits

0x177d,	// (0x0008668d) popup_call_audio_second_window_t2

0x17b3,	// (0x000866c3) popup_call_audio_second_window_t3_ParamLimits

0x17b3,	// (0x000866c3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00094013) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00094013) popup_call_audio_second_window_t

0x15ac,	// (0x000864bc) bg_popup_call_pane_cp04

0x17e9,	// (0x000866f9) list_conf_pane

0x17f1,	// (0x00086701) popup_call_audio_conf_window_t1

0x17ff,	// (0x0008670f) call_thumbnail_pane_g1

0x1807,	// (0x00086717) bg_pinb_pane_ParamLimits

0x1807,	// (0x00086717) bg_pinb_pane

0x1815,	// (0x00086725) find_pinb_pane

0x181e,	// (0x0008672e) listscroll_pinb_pane_ParamLimits

0x181e,	// (0x0008672e) listscroll_pinb_pane

0x182d,	// (0x0008673d) pinb_bg_pane_g1

0x1837,	// (0x00086747) pinb_bg_pane_g2

0x1843,	// (0x00086753) pinb_bg_pane_g3

0x184f,	// (0x0008675f) pinb_bg_pane_g4

0x185b,	// (0x0008676b) pinb_bg_pane_g5

0x1867,	// (0x00086777) pinb_bg_pane_g6

0x1872,	// (0x00086782) pinb_bg_pane_g7

0x187d,	// (0x0008678d) pinb_bg_pane_g8

0x1888,	// (0x00086798) pinb_bg_pane_g9

0x1892,	// (0x000867a2) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009401a) pinb_bg_pane_g

0x18af,	// (0x000867bf) grid_pinb_pane

0x18b8,	// (0x000867c8) list_pinb_pane

0x18c1,	// (0x000867d1) scroll_pane_cp01_ParamLimits

0x18c1,	// (0x000867d1) scroll_pane_cp01

0x18d3,	// (0x000867e3) find_pinb_pane_g1_ParamLimits

0x18d3,	// (0x000867e3) find_pinb_pane_g1

0x18eb,	// (0x000867fb) find_pinb_pane_t1

0x18fd,	// (0x0008680d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00094034) find_pinb_pane_t

0x1912,	// (0x00086822) input_focus_pane_cp01_ParamLimits

0x1912,	// (0x00086822) input_focus_pane_cp01

0x191e,	// (0x0008682e) cell_pinb_pane_ParamLimits

0x191e,	// (0x0008682e) cell_pinb_pane

0x1949,	// (0x00086859) cell_pinb_pane_g1_ParamLimits

0x1949,	// (0x00086859) cell_pinb_pane_g1

0x195c,	// (0x0008686c) cell_pinb_pane_g2_ParamLimits

0x195c,	// (0x0008686c) cell_pinb_pane_g2

0x1968,	// (0x00086878) cell_pinb_pane_g3_ParamLimits

0x1968,	// (0x00086878) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00094039) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00094039) cell_pinb_pane_g

0x15ac,	// (0x000864bc) grid_highlight_pane_cp01

0x1974,	// (0x00086884) list_pinb_item_pane_ParamLimits

0x1974,	// (0x00086884) list_pinb_item_pane

0x15ac,	// (0x000864bc) list_highlight_pane_cp02

0x1987,	// (0x00086897) list_pinb_item_pane_g1_ParamLimits

0x1987,	// (0x00086897) list_pinb_item_pane_g1

0x1994,	// (0x000868a4) list_pinb_item_pane_g2_ParamLimits

0x1994,	// (0x000868a4) list_pinb_item_pane_g2

0x19a0,	// (0x000868b0) list_pinb_item_pane_g3_ParamLimits

0x19a0,	// (0x000868b0) list_pinb_item_pane_g3

0x19b1,	// (0x000868c1) list_pinb_item_pane_g4_ParamLimits

0x19b1,	// (0x000868c1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00094040) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00094040) list_pinb_item_pane_g

0x19bd,	// (0x000868cd) list_pinb_item_pane_t1_ParamLimits

0x19bd,	// (0x000868cd) list_pinb_item_pane_t1

0x19f2,	// (0x00086902) calc_display_pane

0x1a1a,	// (0x0008692a) calc_paper_pane

0x1a3d,	// (0x0008694d) grid_calc_pane

0x15ac,	// (0x000864bc) bg_list_pane_cp01

0x1a6b,	// (0x0008697b) clock_g1

0x1a73,	// (0x00086983) clock_g2

0x0001,

0xf139,	// (0x00094049) clock_g

0x1a7b,	// (0x0008698b) clock_t1_ParamLimits

0x1a7b,	// (0x0008698b) clock_t1

0x1a90,	// (0x000869a0) clock_t2_ParamLimits

0x1a90,	// (0x000869a0) clock_t2

0x1aa2,	// (0x000869b2) clock_t3_ParamLimits

0x1aa2,	// (0x000869b2) clock_t3

0x1ab4,	// (0x000869c4) clock_t4_ParamLimits

0x1ab4,	// (0x000869c4) clock_t4

0x1ac6,	// (0x000869d6) clock_t5_ParamLimits

0x1ac6,	// (0x000869d6) clock_t5

0x1adb,	// (0x000869eb) clock_t6_ParamLimits

0x1adb,	// (0x000869eb) clock_t6

0x1aed,	// (0x000869fd) clock_t7_ParamLimits

0x1aed,	// (0x000869fd) clock_t7

0x1aff,	// (0x00086a0f) clock_t8_ParamLimits

0x1aff,	// (0x00086a0f) clock_t8

0x1b13,	// (0x00086a23) clock_t9_ParamLimits

0x1b13,	// (0x00086a23) clock_t9

0x0008,

0xf13e,	// (0x0009404e) clock_t_ParamLimits

0xf13e,	// (0x0009404e) clock_t

0x1b27,	// (0x00086a37) popup_clock_analogue_window_cp02

0x1b27,	// (0x00086a37) popup_clock_digital_window_cp01

0x1b2f,	// (0x00086a3f) listscroll_help_pane

0x15ac,	// (0x000864bc) phob_pre_status_pane

0x1b39,	// (0x00086a49) grid_qdial_pane

0x1807,	// (0x00086717) listscroll_mce_pane

0x1807,	// (0x00086717) bg_notes_pane

0x1b43,	// (0x00086a53) list_notes_pane

0x1b51,	// (0x00086a61) scroll_pane_cp06

0x1b65,	// (0x00086a75) bg_calc_paper_pane

0xb14d,	// (0x0009005d) list_calc_pane

0x1b79,	// (0x00086a89) bg_calc_display_pane

0x1b85,	// (0x00086a95) calc_display_pane_t1

0x1b97,	// (0x00086aa7) calc_display_pane_t2

0xb167,	// (0x00090077) calc_display_pane_t3

0x0002,

0xf151,	// (0x00094061) calc_display_pane_t

0x1ba9,	// (0x00086ab9) cell_calc_pane_ParamLimits

0x1ba9,	// (0x00086ab9) cell_calc_pane

0x1be0,	// (0x00086af0) bg_calc_paper_pane_g1

0x1bec,	// (0x00086afc) bg_calc_paper_pane_g2

0x1bf8,	// (0x00086b08) bg_calc_paper_pane_g3

0x1c04,	// (0x00086b14) bg_calc_paper_pane_g4

0x1c10,	// (0x00086b20) bg_calc_paper_pane_g5

0x1c1c,	// (0x00086b2c) bg_calc_paper_pane_g6

0x1c2b,	// (0x00086b3b) bg_calc_paper_pane_g7

0x1c3a,	// (0x00086b4a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00094068) bg_calc_paper_pane_g

0x1c4d,	// (0x00086b5d) calc_bg_paper_pane_g9

0x1c60,	// (0x00086b70) list_calc_item_pane_ParamLimits

0x1c60,	// (0x00086b70) list_calc_item_pane

0x1c79,	// (0x00086b89) list_calc_item_pane_g1

0xb179,	// (0x00090089) list_calc_item_pane_t1_ParamLimits

0xb179,	// (0x00090089) list_calc_item_pane_t1

0x1c86,	// (0x00086b96) list_calc_item_pane_t2_ParamLimits

0x1c86,	// (0x00086b96) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00094079) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00094079) list_calc_item_pane_t

0x1ca0,	// (0x00086bb0) cell_calc_pane_g1

0x1cc2,	// (0x00086bd2) grid_highlight_pane_cp02

0x1ce4,	// (0x00086bf4) bg_calc_display_pane_g1

0xb18b,	// (0x0009009b) bg_calc_display_pane_g2

0x1ced,	// (0x00086bfd) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00094083) bg_calc_display_pane_g

0x1cf6,	// (0x00086c06) cell_qdial_pane_ParamLimits

0x1cf6,	// (0x00086c06) cell_qdial_pane

0x1d0a,	// (0x00086c1a) cell_qdial_pane_g1_ParamLimits

0x1d0a,	// (0x00086c1a) cell_qdial_pane_g1

0x1d20,	// (0x00086c30) cell_qdial_pane_g2_ParamLimits

0x1d20,	// (0x00086c30) cell_qdial_pane_g2

0x1d30,	// (0x00086c40) cell_qdial_pane_g3_ParamLimits

0x1d30,	// (0x00086c40) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009408a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009408a) cell_qdial_pane_g

0x1d52,	// (0x00086c62) cell_qdial_pane_t1_ParamLimits

0x1d52,	// (0x00086c62) cell_qdial_pane_t1

0x1d6a,	// (0x00086c7a) cell_qdial_pane_t2_ParamLimits

0x1d6a,	// (0x00086c7a) cell_qdial_pane_t2

0x1d7d,	// (0x00086c8d) cell_qdial_pane_t3_ParamLimits

0x1d7d,	// (0x00086c8d) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00094093) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00094093) cell_qdial_pane_t

0x15ac,	// (0x000864bc) grid_highlight_pane_cp04

0x1d90,	// (0x00086ca0) thumbnail_qdial_pane_ParamLimits

0x1d90,	// (0x00086ca0) thumbnail_qdial_pane

0x1dec,	// (0x00086cfc) list_help_pane

0x1df5,	// (0x00086d05) scroll_pane_cp02

0x1dfe,	// (0x00086d0e) help_list_pane_t1_ParamLimits

0x1dfe,	// (0x00086d0e) help_list_pane_t1

0xb195,	// (0x000900a5) bg_notes_pane_g2

0xb19d,	// (0x000900ad) bg_notes_pane_g3

0xb1a5,	// (0x000900b5) notes_bg_pane_g1

0xb1ad,	// (0x000900bd) notes_bg_pane_g4

0xb1b5,	// (0x000900c5) notes_bg_pane_g5

0xb1bd,	// (0x000900cd) notes_bg_pane_g6

0xb1c5,	// (0x000900d5) notes_bg_pane_g7

0xb1cd,	// (0x000900dd) notes_bg_pane_g8

0xb1d5,	// (0x000900e5) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000940b1) notes_bg_pane_g

0x1e1c,	// (0x00086d2c) list_notes_text_pane_ParamLimits

0x1e1c,	// (0x00086d2c) list_notes_text_pane

0x1e32,	// (0x00086d42) list_notes_text_pane_g1

0xb1dd,	// (0x000900ed) list_notes_text_pane_t1

0x1e4c,	// (0x00086d5c) listscroll_cale_week_pane

0x1e81,	// (0x00086d91) bg_cale_heading_pane

0x1e99,	// (0x00086da9) bg_cale_pane_cp01

0x1eb6,	// (0x00086dc6) cale_week_corner_pane

0x1ed5,	// (0x00086de5) cale_week_day_heading_pane

0x1ef2,	// (0x00086e02) cale_week_scroll_pane_g1

0x1f05,	// (0x00086e15) cale_week_scroll_pane_g2

0x1f1d,	// (0x00086e2d) cale_week_scroll_pane_g3

0x1f35,	// (0x00086e45) cale_week_scroll_pane_g4

0x1f4d,	// (0x00086e5d) cale_week_scroll_pane_g5

0x1f6d,	// (0x00086e7d) cale_week_scroll_pane_g6

0x1f8d,	// (0x00086e9d) cale_week_scroll_pane_g7

0x1fad,	// (0x00086ebd) cale_week_scroll_pane_g8

0x1fd1,	// (0x00086ee1) cale_week_scroll_pane_g9

0x1fe9,	// (0x00086ef9) cale_week_scroll_pane_g10

0x2001,	// (0x00086f11) cale_week_scroll_pane_g11

0x2019,	// (0x00086f29) cale_week_scroll_pane_g12

0x2031,	// (0x00086f41) cale_week_scroll_pane_g13

0x2031,	// (0x00086f41) cale_week_scroll_pane_g14

0x2031,	// (0x00086f41) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000940c0) cale_week_scroll_pane_g

0x206d,	// (0x00086f7d) cale_week_time_pane

0x2091,	// (0x00086fa1) grid_cale_week_pane

0x20c9,	// (0x00086fd9) scroll_pane_cp08

0x20e6,	// (0x00086ff6) cell_cale_week_pane_ParamLimits

0x20e6,	// (0x00086ff6) cell_cale_week_pane

0x2174,	// (0x00087084) cale_week_day_heading_pane_t1

0x219e,	// (0x000870ae) cale_week_day_heading_pane_t2

0x21cd,	// (0x000870dd) cale_week_day_heading_pane_t3

0x21fc,	// (0x0008710c) cale_week_day_heading_pane_t4

0x222b,	// (0x0008713b) cale_week_day_heading_pane_t5

0x2262,	// (0x00087172) cale_week_day_heading_pane_t6

0x2299,	// (0x000871a9) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000940e1) cale_week_day_heading_pane_t

0x22c3,	// (0x000871d3) bg_cale_side_pane

0x22d1,	// (0x000871e1) cale_week_time_pane_t1

0x22eb,	// (0x000871fb) cale_week_time_pane_t2

0x2305,	// (0x00087215) cale_week_time_pane_t3

0x231f,	// (0x0008722f) cale_week_time_pane_t4

0x2339,	// (0x00087249) cale_week_time_pane_t5

0x2353,	// (0x00087263) cale_week_time_pane_t6

0x236d,	// (0x0008727d) cale_week_time_pane_t7

0x2387,	// (0x00087297) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000940f0) cale_week_time_pane_t

0x23a7,	// (0x000872b7) cell_cale_week_pane_g2

0x23cb,	// (0x000872db) cell_cale_week_pane_g3_ParamLimits

0x23cb,	// (0x000872db) cell_cale_week_pane_g3

0x23e3,	// (0x000872f3) grid_highlight_pane_cp07

0x23eb,	// (0x000872fb) listscroll_gms_pane

0x23f5,	// (0x00087305) grid_gms_pane

0x23fe,	// (0x0008730e) listscroll_gms_pane_g1

0x2406,	// (0x00087316) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00094101) listscroll_gms_pane_g

0x240e,	// (0x0008731e) scroll_pane_cp010

0x2419,	// (0x00087329) cell_gms_pane_ParamLimits

0x2419,	// (0x00087329) cell_gms_pane

0x242b,	// (0x0008733b) cell_gms_pane_g1

0x2433,	// (0x00087343) cell_gms_pane_g2

0x243b,	// (0x0008734b) cell_gms_pane_g3

0x2444,	// (0x00087354) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00094106) cell_gms_pane_g

0x244d,	// (0x0008735d) grid_highlight_pane_cp09

0x5b8c,	// (0x0008aa9c) phob_pre_status_pane_g1

0x5b94,	// (0x0008aaa4) phob_pre_status_pane_g2

0x5b9c,	// (0x0008aaac) phob_pre_status_pane_g3

0x5ba4,	// (0x0008aab4) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00094504) phob_pre_status_pane_g

0x5bb4,	// (0x0008aac4) phob_pre_status_pane_t1

0x5bc2,	// (0x0008aad2) phob_pre_status_pane_t2

0x5bd2,	// (0x0008aae2) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0009450f) phob_pre_status_pane_t

0x245d,	// (0x0008736d) bg_list_pane_cp05

0x2465,	// (0x00087375) grid_vorec_pane

0x246d,	// (0x0008737d) vorec_t1

0x247b,	// (0x0008738b) vorec_t2

0x2489,	// (0x00087399) vorec_t3

0x2497,	// (0x000873a7) vorec_t4

0xb0b1,	// (0x0008ffc1) vorec_t5

0xb0bf,	// (0x0008ffcf) vorec_t6

0x0004,

0xf1ff,	// (0x0009410f) vorec_t

0xb0cd,	// (0x0008ffdd) wait_bar_pane_cp01

0x24b3,	// (0x000873c3) cell_vorec_pane_ParamLimits

0x24b3,	// (0x000873c3) cell_vorec_pane

0xb1eb,	// (0x000900fb) cell_vorec_pane_g1

0x15ac,	// (0x000864bc) grid_highlight_pane_cp05

0x24de,	// (0x000873ee) cams_zoom_pane

0x24ed,	// (0x000873fd) image_vga_pane

0x2507,	// (0x00087417) main_camera_pane_g1

0x2519,	// (0x00087429) main_camera_pane_g2

0x2529,	// (0x00087439) main_camera_pane_g3

0x2539,	// (0x00087449) main_camera_pane_g4

0x2549,	// (0x00087459) main_camera_pane_g5

0x2559,	// (0x00087469) main_camera_pane_g6

0x2569,	// (0x00087479) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009411a) main_camera_pane_g

0x2585,	// (0x00087495) main_camera_pane_t1

0x259b,	// (0x000874ab) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009412b) main_camera_pane_t

0x25d5,	// (0x000874e5) cams_zoom_pane_cp_ParamLimits

0x25d5,	// (0x000874e5) cams_zoom_pane_cp

0x25fd,	// (0x0008750d) image_cif_pane_ParamLimits

0x25fd,	// (0x0008750d) image_cif_pane

0x2638,	// (0x00087548) image_subqcif_pane

0x2640,	// (0x00087550) main_video_pane_g1_ParamLimits

0x2640,	// (0x00087550) main_video_pane_g1

0x2664,	// (0x00087574) main_video_pane_g2_ParamLimits

0x2664,	// (0x00087574) main_video_pane_g2

0x2698,	// (0x000875a8) main_video_pane_g3_ParamLimits

0x2698,	// (0x000875a8) main_video_pane_g3

0x26c6,	// (0x000875d6) main_video_pane_g4_ParamLimits

0x26c6,	// (0x000875d6) main_video_pane_g4

0x26f4,	// (0x00087604) main_video_pane_g5_ParamLimits

0x26f4,	// (0x00087604) main_video_pane_g5

0x270c,	// (0x0008761c) main_video_pane_g6_ParamLimits

0x270c,	// (0x0008761c) main_video_pane_g6

0x0006,

0xf220,	// (0x00094130) main_video_pane_g_ParamLimits

0xf220,	// (0x00094130) main_video_pane_g

0x2737,	// (0x00087647) main_video_pane_t1_ParamLimits

0x2737,	// (0x00087647) main_video_pane_t1

0x2780,	// (0x00087690) cams_zoom_pane_g1

0x2789,	// (0x00087699) cams_zoom_pane_g2

0x2792,	// (0x000876a2) cams_zoom_pane_g3

0x279b,	// (0x000876ab) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009413f) cams_zoom_pane_g

0x27b8,	// (0x000876c8) grid_cams_pane

0x27d2,	// (0x000876e2) linegrid_cams_pane

0x27e5,	// (0x000876f5) cell_cams_pane_ParamLimits

0x27e5,	// (0x000876f5) cell_cams_pane

0x2805,	// (0x00087715) cams_burst_image_pane

0x280d,	// (0x0008771d) cell_cams_pane_g1

0x15ac,	// (0x000864bc) grid_highlight_pane_cp03

0x1ca0,	// (0x00086bb0) mp_bg_pane_g1

0x15ac,	// (0x000864bc) bg_list_pane_cp03

0xba58,	// (0x00090968) bg_mp_pane

0xba60,	// (0x00090970) grid_mp_pane

0xba68,	// (0x00090978) media_player_g1

0xba70,	// (0x00090980) media_player_t1

0xba7e,	// (0x0009098e) media_player_t2

0xba8c,	// (0x0009099c) media_player_t3

0xba9a,	// (0x000909aa) media_player_t4

0xbaa8,	// (0x000909b8) media_player_t5

0xbab6,	// (0x000909c6) media_player_t6

0xbac4,	// (0x000909d4) media_player_t7

0x0006,

0xf5de,	// (0x000944ee) media_player_t

0xbad2,	// (0x000909e2) wait_bar_pane_cp02

0xf5c3,	// (0x000944d3) main_usb_pane_t

0x5b83,	// (0x0008aa93) cell_mp_pane

0x1ca0,	// (0x00086bb0) cell_mp_pane_g1

0x15ac,	// (0x000864bc) grid_highlight_pane_cp06

0x282d,	// (0x0008773d) grid_skin_colour_pane

0x2835,	// (0x00087745) list_highlight_pane_cp03

0x283d,	// (0x0008774d) skin_g1

0x2845,	// (0x00087755) skin_t1

0x2854,	// (0x00087764) skin_t2

0x0001,

0xf264,	// (0x00094174) skin_t

0x2862,	// (0x00087772) cell_skin_colour_pane_ParamLimits

0x2862,	// (0x00087772) cell_skin_colour_pane

0x2882,	// (0x00087792) cell_skin_colour_pane_g1

0x28ed,	// (0x000877fd) call_video_g1_ParamLimits

0x28ed,	// (0x000877fd) call_video_g1

0x2909,	// (0x00087819) call_video_g2_ParamLimits

0x2909,	// (0x00087819) call_video_g2

0x0001,

0xf269,	// (0x00094179) call_video_g_ParamLimits

0xf269,	// (0x00094179) call_video_g

0x295b,	// (0x0008786b) call_video_uplink_pane_cp1_ParamLimits

0x295b,	// (0x0008786b) call_video_uplink_pane_cp1

0x29c0,	// (0x000878d0) call_video_uplink_pane_cp2

0x2a02,	// (0x00087912) video_down_crop_pane_ParamLimits

0x2a02,	// (0x00087912) video_down_crop_pane

0x2aeb,	// (0x000879fb) video_down_pane_ParamLimits

0x2aeb,	// (0x000879fb) video_down_pane

0x2be2,	// (0x00087af2) video_down_subqcif_pane_ParamLimits

0x2be2,	// (0x00087af2) video_down_subqcif_pane

0x2bfa,	// (0x00087b0a) video_down_subqcif_pane_cp_ParamLimits

0x2bfa,	// (0x00087b0a) video_down_subqcif_pane_cp

0x2c37,	// (0x00087b47) im_reading_pane_ParamLimits

0x2c37,	// (0x00087b47) im_reading_pane

0x2c49,	// (0x00087b59) im_writing_pane_ParamLimits

0x2c49,	// (0x00087b59) im_writing_pane

0x2c67,	// (0x00087b77) im_reading_pane_t1

0x2ca1,	// (0x00087bb1) list_im_pane

0x2cb2,	// (0x00087bc2) scroll_pane_cp07

0x2ccb,	// (0x00087bdb) im_writing_pane_t1_ParamLimits

0x2ccb,	// (0x00087bdb) im_writing_pane_t1

0x2ce0,	// (0x00087bf0) im_writing_pane_t2_ParamLimits

0x2ce0,	// (0x00087bf0) im_writing_pane_t2

0x0001,

0xf273,	// (0x00094183) im_writing_pane_t_ParamLimits

0xf273,	// (0x00094183) im_writing_pane_t

0x15ac,	// (0x000864bc) input_focus_pane_cp04

0x15ac,	// (0x000864bc) input_focus_pane_cp05

0x2cfd,	// (0x00087c0d) list_im_single_pane_ParamLimits

0x2cfd,	// (0x00087c0d) list_im_single_pane

0x2d12,	// (0x00087c22) list_single_im_pane_t1

0x5b43,	// (0x0008aa53) blid_accuracy_pane

0x5b4b,	// (0x0008aa5b) blid_compass_pane

0x5b55,	// (0x0008aa65) main_location_t1

0x5b65,	// (0x0008aa75) main_location_t2

0x5b75,	// (0x0008aa85) main_location_t3

0x0002,

0xf5ed,	// (0x000944fd) main_location_t

0x15ac,	// (0x000864bc) aid_levels_location

0x1ca0,	// (0x00086bb0) blid_accuracy_pane_g1

0x1ca0,	// (0x00086bb0) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000941e5) blid_accuracy_pane_g

0x2d4c,	// (0x00087c5c) wml_content_pane

0x2d8a,	// (0x00087c9a) wml_button_pane_ParamLimits

0x2d8a,	// (0x00087c9a) wml_button_pane

0x2d9e,	// (0x00087cae) wml_list_single_large_pane_ParamLimits

0x2d9e,	// (0x00087cae) wml_list_single_large_pane

0x2db3,	// (0x00087cc3) wml_list_single_medium_pane_ParamLimits

0x2db3,	// (0x00087cc3) wml_list_single_medium_pane

0x2dca,	// (0x00087cda) wml_list_single_small_pane_ParamLimits

0x2dca,	// (0x00087cda) wml_list_single_small_pane

0x2de3,	// (0x00087cf3) wml_selection_box_pane_ParamLimits

0x2de3,	// (0x00087cf3) wml_selection_box_pane

0x2df6,	// (0x00087d06) wml_list_single_pane_t1

0x2e05,	// (0x00087d15) wml_list_single_medium_pane_t1

0x2e14,	// (0x00087d24) wml_list_single_large_pane_t1

0x2e23,	// (0x00087d33) input_focus_pane_cp02_ParamLimits

0x2e23,	// (0x00087d33) input_focus_pane_cp02

0x2e36,	// (0x00087d46) wml_selection_box_pane_g1

0x2e3f,	// (0x00087d4f) wml_selection_box_pane_t1_ParamLimits

0x2e3f,	// (0x00087d4f) wml_selection_box_pane_t1

0x1807,	// (0x00086717) bg_wml_button_pane_ParamLimits

0x1807,	// (0x00086717) bg_wml_button_pane

0x2e57,	// (0x00087d67) wml_button_pane_g1

0x2e5f,	// (0x00087d6f) wml_button_pane_t1

0x2e57,	// (0x00087d67) wml_button_bg_pane_g1

0x2e6f,	// (0x00087d7f) wml_button_bg_pane_g2

0x2e77,	// (0x00087d87) wml_button_bg_pane_g3

0x2e7f,	// (0x00087d8f) wml_button_bg_pane_g4

0x2e87,	// (0x00087d97) wml_button_bg_pane_g5

0x2e8f,	// (0x00087d9f) wml_button_bg_pane_g6

0x2e97,	// (0x00087da7) wml_button_bg_pane_g7

0x2e9f,	// (0x00087daf) wml_button_bg_pane_g8

0x2ea7,	// (0x00087db7) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00094188) wml_button_bg_pane_g

0x2eaf,	// (0x00087dbf) bg_list_pane_cp02

0x2eb7,	// (0x00087dc7) mce_header_pane_ParamLimits

0x2eb7,	// (0x00087dc7) mce_header_pane

0x2ecd,	// (0x00087ddd) mce_icon_pane

0x2ecd,	// (0x00087ddd) mce_image_pane

0x2ed6,	// (0x00087de6) mce_text_pane_ParamLimits

0x2ed6,	// (0x00087de6) mce_text_pane

0x2ee9,	// (0x00087df9) scroll_pane_cp03

0x2d82,	// (0x00087c92) scroll_pane_cp04

0x2ef3,	// (0x00087e03) scroll_pane_cp05_ParamLimits

0x2ef3,	// (0x00087e03) scroll_pane_cp05

0x2eff,	// (0x00087e0f) mce_header_field_pane_ParamLimits

0x2eff,	// (0x00087e0f) mce_header_field_pane

0x2f16,	// (0x00087e26) mce_header_field_pane_2_ParamLimits

0x2f16,	// (0x00087e26) mce_header_field_pane_2

0x2f2c,	// (0x00087e3c) mce_header_field_pane_3

0x2f34,	// (0x00087e44) list_single_mce_message_pane_ParamLimits

0x2f34,	// (0x00087e44) list_single_mce_message_pane

0x2f4a,	// (0x00087e5a) list_single_mce_smart_pane_ParamLimits

0x2f4a,	// (0x00087e5a) list_single_mce_smart_pane

0x2f6b,	// (0x00087e7b) input_focus_pane_cp03

0x2f74,	// (0x00087e84) list_header_data_pane

0x2f7c,	// (0x00087e8c) mce_header_field_pane_t1

0x2f8c,	// (0x00087e9c) list_single_mce_header_pane_ParamLimits

0x2f8c,	// (0x00087e9c) list_single_mce_header_pane

0x2fa0,	// (0x00087eb0) list_single_mce_header_pane_t1

0x2faf,	// (0x00087ebf) list_single_mce_message_pane_g1

0x2fb7,	// (0x00087ec7) list_single_mce_message_pane_t1

0x2feb,	// (0x00087efb) bg_cale_heading_pane_cp01_ParamLimits

0x2feb,	// (0x00087efb) bg_cale_heading_pane_cp01

0x3025,	// (0x00087f35) bg_cale_pane_cp02_ParamLimits

0x3025,	// (0x00087f35) bg_cale_pane_cp02

0x3052,	// (0x00087f62) cale_month_corner_pane

0x3071,	// (0x00087f81) cale_month_day_heading_pane_ParamLimits

0x3071,	// (0x00087f81) cale_month_day_heading_pane

0x30c3,	// (0x00087fd3) cale_month_pane_g1_ParamLimits

0x30c3,	// (0x00087fd3) cale_month_pane_g1

0x30f2,	// (0x00088002) cale_month_pane_g2_ParamLimits

0x30f2,	// (0x00088002) cale_month_pane_g2

0x3122,	// (0x00088032) cale_month_pane_g3_ParamLimits

0x3122,	// (0x00088032) cale_month_pane_g3

0x315e,	// (0x0008806e) cale_month_pane_g4_ParamLimits

0x315e,	// (0x0008806e) cale_month_pane_g4

0x319a,	// (0x000880aa) cale_month_pane_g5_ParamLimits

0x319a,	// (0x000880aa) cale_month_pane_g5

0x31e2,	// (0x000880f2) cale_month_pane_g6_ParamLimits

0x31e2,	// (0x000880f2) cale_month_pane_g6

0x322e,	// (0x0008813e) cale_month_pane_g7_ParamLimits

0x322e,	// (0x0008813e) cale_month_pane_g7

0x327e,	// (0x0008818e) cale_month_pane_g8_ParamLimits

0x327e,	// (0x0008818e) cale_month_pane_g8

0x32d2,	// (0x000881e2) cale_month_pane_g9_ParamLimits

0x32d2,	// (0x000881e2) cale_month_pane_g9

0x3324,	// (0x00088234) cale_month_pane_g10_ParamLimits

0x3324,	// (0x00088234) cale_month_pane_g10

0x3376,	// (0x00088286) cale_month_pane_g11_ParamLimits

0x3376,	// (0x00088286) cale_month_pane_g11

0x33c8,	// (0x000882d8) cale_month_pane_g12_ParamLimits

0x33c8,	// (0x000882d8) cale_month_pane_g12

0x341a,	// (0x0008832a) cale_month_pane_g13_ParamLimits

0x341a,	// (0x0008832a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009419b) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009419b) cale_month_pane_g

0x347e,	// (0x0008838e) cale_month_week_pane

0x34a2,	// (0x000883b2) grid_cale_month_pane_ParamLimits

0x34a2,	// (0x000883b2) grid_cale_month_pane

0x34eb,	// (0x000883fb) cale_month_day_heading_pane_t1

0x352d,	// (0x0008843d) cale_month_day_heading_pane_t2

0x3562,	// (0x00088472) cale_month_day_heading_pane_t3

0x3597,	// (0x000884a7) cale_month_day_heading_pane_t4

0x35d4,	// (0x000884e4) cale_month_day_heading_pane_t5

0x3619,	// (0x00088529) cale_month_day_heading_pane_t6

0x365e,	// (0x0008856e) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000941b6) cale_month_day_heading_pane_t

0x22c3,	// (0x000871d3) bg_cale_side_pane_cp01

0x36ab,	// (0x000885bb) cale_month_week_pane_t1

0x36c4,	// (0x000885d4) cale_month_week_pane_t2

0x36dd,	// (0x000885ed) cale_month_week_pane_t3

0x36f6,	// (0x00088606) cale_month_week_pane_t4

0x370f,	// (0x0008861f) cale_month_week_pane_t5

0x3728,	// (0x00088638) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000941c5) cale_month_week_pane_t

0x3741,	// (0x00088651) cell_cale_month_pane_ParamLimits

0x3741,	// (0x00088651) cell_cale_month_pane

0xb1f5,	// (0x00090105) cell_cale_month_pane_g1

0x386f,	// (0x0008877f) cell_cale_month_pane_t1_ParamLimits

0x386f,	// (0x0008877f) cell_cale_month_pane_t1

0x23e3,	// (0x000872f3) grid_highlight_pane_cp08

0x1ca0,	// (0x00086bb0) main_smil_g1

0x389b,	// (0x000887ab) smil_status_pane

0x38a6,	// (0x000887b6) smil_text_pane

0xb938,	// (0x00090848) bg_popup_call3_rect_pane_g8

0xb940,	// (0x00090850) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009447e) bg_popup_call3_rect_pane_g

0xbc1b,	// (0x00090b2b) smil_status_volume_pane_g1

0x38ba,	// (0x000887ca) smil_status_pane_t1

0xbc4e,	// (0x00090b5e) volume_smil_pane

0x38d1,	// (0x000887e1) list_smil_text_pane

0x38db,	// (0x000887eb) scroll_pane_cp011

0x38e6,	// (0x000887f6) smil_text_list_pane_t1_ParamLimits

0x38e6,	// (0x000887f6) smil_text_list_pane_t1

0xb201,	// (0x00090111) aid_volume_smil_ParamLimits

0xb201,	// (0x00090111) aid_volume_smil

0x1ca0,	// (0x00086bb0) smil_volume_pane_g1

0x1ca0,	// (0x00086bb0) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000941e5) smil_volume_pane_g

0x1e4c,	// (0x00086d5c) listscroll_cale_day_pane

0x392a,	// (0x0008883a) bg_cale_pane

0x3942,	// (0x00088852) list_cale_pane

0x3965,	// (0x00088875) scroll_pane_cp09

0x3976,	// (0x00088886) cale_bg_pane_g1

0x397e,	// (0x0008888e) cale_bg_pane_g2

0x3986,	// (0x00088896) cale_bg_pane_g3

0x398e,	// (0x0008889e) cale_bg_pane_g4

0x3996,	// (0x000888a6) cale_bg_pane_g5

0x399e,	// (0x000888ae) cale_bg_pane_g6

0x39a6,	// (0x000888b6) cale_bg_pane_g7

0x39ae,	// (0x000888be) cale_bg_pane_g8

0x39b6,	// (0x000888c6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000941ea) cale_bg_pane_g

0x39c6,	// (0x000888d6) list_cale_time_pane_ParamLimits

0x39c6,	// (0x000888d6) list_cale_time_pane

0x39dc,	// (0x000888ec) list_cale_time_pane_g1_ParamLimits

0x39dc,	// (0x000888ec) list_cale_time_pane_g1

0x39e8,	// (0x000888f8) list_cale_time_pane_g2_ParamLimits

0x39e8,	// (0x000888f8) list_cale_time_pane_g2

0x39f5,	// (0x00088905) list_cale_time_pane_g3_ParamLimits

0x39f5,	// (0x00088905) list_cale_time_pane_g3

0x3a03,	// (0x00088913) list_cale_time_pane_g4_ParamLimits

0x3a03,	// (0x00088913) list_cale_time_pane_g4

0x3a11,	// (0x00088921) list_cale_time_pane_g5_ParamLimits

0x3a11,	// (0x00088921) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000941fd) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000941fd) list_cale_time_pane_g

0x3a2c,	// (0x0008893c) list_cale_time_pane_t1_ParamLimits

0x3a2c,	// (0x0008893c) list_cale_time_pane_t1

0x3a54,	// (0x00088964) list_cale_time_pane_t2_ParamLimits

0x3a54,	// (0x00088964) list_cale_time_pane_t2

0x411c,	// (0x0008902c) aid_blid_cardinal_pane

0x4166,	// (0x00089076) compass_pane_t4

0x3a7c,	// (0x0008898c) list_cale_time_pane_t4_ParamLimits

0x3a7c,	// (0x0008898c) list_cale_time_pane_t4

0x4174,	// (0x00089084) compass_pane_t5

0x4182,	// (0x00089092) compass_pane_t6

0x4190,	// (0x000890a0) compass_pane_t7

0x4228,	// (0x00089138) navi_pane_cc_t1

0x4447,	// (0x00089357) aid_phob_thumbnail_center_pane

0x4a77,	// (0x00089987) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0009420a) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0009420a) list_cale_time_pane_t

0xeb4b,	// (0x00093a5b) bg_popup_window_pane_cp02_ParamLimits

0xeb4b,	// (0x00093a5b) bg_popup_window_pane_cp02

0x3aa4,	// (0x000889b4) heading_pane_cp01_ParamLimits

0x3aa4,	// (0x000889b4) heading_pane_cp01

0x3ab0,	// (0x000889c0) loc_req_pane_ParamLimits

0x3ab0,	// (0x000889c0) loc_req_pane

0x3ac0,	// (0x000889d0) loc_type_pane_ParamLimits

0x3ac0,	// (0x000889d0) loc_type_pane

0x3ad2,	// (0x000889e2) loc_type_pane_t1_ParamLimits

0x3ad2,	// (0x000889e2) loc_type_pane_t1

0x3ae4,	// (0x000889f4) loc_type_pane_t2_ParamLimits

0x3ae4,	// (0x000889f4) loc_type_pane_t2

0x3af6,	// (0x00088a06) loc_type_pane_t3_ParamLimits

0x3af6,	// (0x00088a06) loc_type_pane_t3

0x0002,

0xf301,	// (0x00094211) loc_type_pane_t_ParamLimits

0xf301,	// (0x00094211) loc_type_pane_t

0x3b08,	// (0x00088a18) list_loc_req_pane

0x3b12,	// (0x00088a22) scroll_pane_cp012

0x3b1d,	// (0x00088a2d) list_single_loc_request_popup_menu_pane_ParamLimits

0x3b1d,	// (0x00088a2d) list_single_loc_request_popup_menu_pane

0x3b2a,	// (0x00088a3a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3b2a,	// (0x00088a3a) list_single_loc_request_popup_menu_pane_g1

0x3b36,	// (0x00088a46) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3b36,	// (0x00088a46) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00094218) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00094218) list_single_loc_request_popup_menu_pane_g

0x3b42,	// (0x00088a52) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3b42,	// (0x00088a52) list_single_loc_request_popup_menu_pane_t1

0x1807,	// (0x00086717) bg_popup_window_pane_cp03_ParamLimits

0x1807,	// (0x00086717) bg_popup_window_pane_cp03

0x3b58,	// (0x00088a68) heading_loc_req_pane_ParamLimits

0x3b58,	// (0x00088a68) heading_loc_req_pane

0x3b64,	// (0x00088a74) popup_dyc_status_message_window_g1_ParamLimits

0x3b64,	// (0x00088a74) popup_dyc_status_message_window_g1

0x3b78,	// (0x00088a88) popup_dyc_status_message_window_t1_ParamLimits

0x3b78,	// (0x00088a88) popup_dyc_status_message_window_t1

0x3b8d,	// (0x00088a9d) popup_dyc_status_message_window_t2_ParamLimits

0x3b8d,	// (0x00088a9d) popup_dyc_status_message_window_t2

0x3ba2,	// (0x00088ab2) popup_dyc_status_message_window_t3_ParamLimits

0x3ba2,	// (0x00088ab2) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009421d) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009421d) popup_dyc_status_message_window_t

0x15ac,	// (0x000864bc) bg_heading_pane_cp01

0x3bbe,	// (0x00088ace) heading_loc_req_pane_g1

0x3bc6,	// (0x00088ad6) heading_loc_req_pane_g2

0x3bce,	// (0x00088ade) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00094224) heading_loc_req_pane_g

0x3bd6,	// (0x00088ae6) heading_loc_req_pane_t1

0x3bf1,	// (0x00088b01) bg_popup_sub_pane_cp01_ParamLimits

0x3bf1,	// (0x00088b01) bg_popup_sub_pane_cp01

0x3bff,	// (0x00088b0f) popup_cale_events_window_g1_ParamLimits

0x3bff,	// (0x00088b0f) popup_cale_events_window_g1

0x3c1f,	// (0x00088b2f) popup_cale_events_window_g2_ParamLimits

0x3c1f,	// (0x00088b2f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00094258) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00094258) popup_cale_events_window_g

0x3c3f,	// (0x00088b4f) popup_cale_events_window_t1_ParamLimits

0x3c3f,	// (0x00088b4f) popup_cale_events_window_t1

0x3c51,	// (0x00088b61) popup_cale_events_window_t2_ParamLimits

0x3c51,	// (0x00088b61) popup_cale_events_window_t2

0x3c8f,	// (0x00088b9f) popup_cale_events_window_t3_ParamLimits

0x3c8f,	// (0x00088b9f) popup_cale_events_window_t3

0x3cc9,	// (0x00088bd9) popup_cale_events_window_t4_ParamLimits

0x3cc9,	// (0x00088bd9) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009425d) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009425d) popup_cale_events_window_t

0x3cff,	// (0x00088c0f) call_type_pane

0x3d0f,	// (0x00088c1f) popup_call_status_window_g1

0x3d23,	// (0x00088c33) popup_call_status_window_g2

0x3d37,	// (0x00088c47) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00094266) popup_call_status_window_g

0x3d46,	// (0x00088c56) call_type_pane_g1

0x3d4f,	// (0x00088c5f) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009426d) call_type_pane_g

0x15ac,	// (0x000864bc) bg_popup_sub_pane_cp02

0x3d58,	// (0x00088c68) listscroll_popup_wml_pane

0x3d60,	// (0x00088c70) list_wml_pane

0x3d6a,	// (0x00088c7a) scroll_pane_cp013

0x3d75,	// (0x00088c85) list_single_graphic_popup_wml_pane_ParamLimits

0x3d75,	// (0x00088c85) list_single_graphic_popup_wml_pane

0x1ca0,	// (0x00086bb0) list_single_graphic_popup_wml_pane_g1

0x3d89,	// (0x00088c99) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00094272) list_single_graphic_popup_wml_pane_g

0x3d91,	// (0x00088ca1) list_single_graphic_popup_wml_pane_t1

0x3da7,	// (0x00088cb7) aid_call_pane

0x17ff,	// (0x0008670f) popup_clock_analogue_window_g1

0x17ff,	// (0x0008670f) popup_clock_analogue_window_g2

0xb22f,	// (0x0009013f) popup_clock_analogue_window_g3

0xb22f,	// (0x0009013f) popup_clock_analogue_window_g4

0x1ca0,	// (0x00086bb0) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00094277) popup_clock_analogue_window_g

0xb237,	// (0x00090147) popup_clock_analogue_window_t1

0xb245,	// (0x00090155) clock_digital_number_pane_ParamLimits

0xb245,	// (0x00090155) clock_digital_number_pane

0xb251,	// (0x00090161) clock_digital_number_pane_cp02_ParamLimits

0xb251,	// (0x00090161) clock_digital_number_pane_cp02

0xb25d,	// (0x0009016d) clock_digital_number_pane_cp03_ParamLimits

0xb25d,	// (0x0009016d) clock_digital_number_pane_cp03

0xb269,	// (0x00090179) clock_digital_number_pane_cp04_ParamLimits

0xb269,	// (0x00090179) clock_digital_number_pane_cp04

0xb275,	// (0x00090185) clock_digital_separator_pane_ParamLimits

0xb275,	// (0x00090185) clock_digital_separator_pane

0xb281,	// (0x00090191) popup_clock_digital_window_t1

0x1ca0,	// (0x00086bb0) clock_digital_number_pane_g1

0x1ca0,	// (0x00086bb0) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000941e5) clock_digital_number_pane_g

0x1ca0,	// (0x00086bb0) clock_digital_separator_pane_g1

0x1ca0,	// (0x00086bb0) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000941e5) clock_digital_separator_pane_g

0x15ac,	// (0x000864bc) bg_popup_window_pane_cp04

0x3daf,	// (0x00088cbf) heading_pane_cp03

0x3db7,	// (0x00088cc7) listscroll_popup_gms_pane

0x3dbf,	// (0x00088ccf) grid_large_graphic_popup_pane

0x3dc9,	// (0x00088cd9) listscroll_popup_gms_pane_g1

0x3dd1,	// (0x00088ce1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00094282) listscroll_popup_gms_pane_g

0x2d82,	// (0x00087c92) scroll_pane_cp014

0x3dd9,	// (0x00088ce9) cell_large_graphic_popup_pane_ParamLimits

0x3dd9,	// (0x00088ce9) cell_large_graphic_popup_pane

0x3df1,	// (0x00088d01) cell_large_graphic_popup_pane_g1_ParamLimits

0x3df1,	// (0x00088d01) cell_large_graphic_popup_pane_g1

0x3dfd,	// (0x00088d0d) cell_large_graphic_popup_pane_g2_ParamLimits

0x3dfd,	// (0x00088d0d) cell_large_graphic_popup_pane_g2

0x3e09,	// (0x00088d19) cell_large_graphic_popup_pane_g3_ParamLimits

0x3e09,	// (0x00088d19) cell_large_graphic_popup_pane_g3

0x3e16,	// (0x00088d26) cell_large_graphic_popup_pane_g4_ParamLimits

0x3e16,	// (0x00088d26) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00094287) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00094287) cell_large_graphic_popup_pane_g

0x3e26,	// (0x00088d36) grid_highlight_pane_cp010

0x1ca0,	// (0x00086bb0) bg_popup_call_pane_g1

0x3e30,	// (0x00088d40) list_single_graphic_popup_conf_pane_ParamLimits

0x3e30,	// (0x00088d40) list_single_graphic_popup_conf_pane

0x3e43,	// (0x00088d53) list_highlight_pane_cp01

0x3e4c,	// (0x00088d5c) list_single_graphic_popup_conf_pane_g1

0x3e54,	// (0x00088d64) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00094290) list_single_graphic_popup_conf_pane_g

0x3e5c,	// (0x00088d6c) list_single_graphic_popup_conf_pane_t1

0x3e6a,	// (0x00088d7a) linegrid_cams_pane_g1

0x3e73,	// (0x00088d83) linegrid_cams_pane_g2

0x243b,	// (0x0008734b) linegrid_cams_pane_g3

0x3e7c,	// (0x00088d8c) linegrid_cams_pane_g4

0x3e85,	// (0x00088d95) linegrid_cams_pane_g5

0x3e8e,	// (0x00088d9e) linegrid_cams_pane_g6

0x2444,	// (0x00087354) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00094295) linegrid_cams_pane_g

0x3e99,	// (0x00088da9) popup_clock_analogue_window

0x3e99,	// (0x00088da9) popup_clock_digital_window

0x15ac,	// (0x000864bc) popup_phob_thumbnail_window

0x1ca0,	// (0x00086bb0) call_video_uplink_pane_g1

0x3ea2,	// (0x00088db2) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000942a4) call_video_uplink_pane_g

0x3eaa,	// (0x00088dba) video_uplink_pane

0x3eb2,	// (0x00088dc2) mce_image_pane_g1

0x3ebc,	// (0x00088dcc) mce_image_pane_g2

0x3ec4,	// (0x00088dd4) mce_image_pane_g3

0x3ecc,	// (0x00088ddc) mce_image_pane_g4

0x3ed6,	// (0x00088de6) mce_image_pane_g5

0x0004,

0xf399,	// (0x000942a9) mce_image_pane_g

0x3ede,	// (0x00088dee) control_top_pane_stacon_cp01_ParamLimits

0x3ede,	// (0x00088dee) control_top_pane_stacon_cp01

0x3ef2,	// (0x00088e02) uni_indicator_pane_stacon_cp01_ParamLimits

0x3ef2,	// (0x00088e02) uni_indicator_pane_stacon_cp01

0x3f03,	// (0x00088e13) bg_popup_sub_pane_cp03

0x3f0d,	// (0x00088e1d) chi_dic_find_pane

0x3f15,	// (0x00088e25) listscroll_chi_dic_pane

0x3f1e,	// (0x00088e2e) main_pane_chidic_g1

0x3f31,	// (0x00088e41) chi_dic_find_pane_t1

0x3f3f,	// (0x00088e4f) find_chidic_pane

0x3f48,	// (0x00088e58) chi_dic_list_pane_ParamLimits

0x3f48,	// (0x00088e58) chi_dic_list_pane

0x3f59,	// (0x00088e69) scroll_pane_cp020

0x3f61,	// (0x00088e71) find_chidic_pane_t1

0x15ac,	// (0x000864bc) input_focus_pane_cp06

0x3f70,	// (0x00088e80) list_chi_dic_pane_ParamLimits

0x3f70,	// (0x00088e80) list_chi_dic_pane

0x3f82,	// (0x00088e92) list_chi_dic_pane_t1_ParamLimits

0x3f82,	// (0x00088e92) list_chi_dic_pane_t1

0x15ac,	// (0x000864bc) list_highlight_pane_cp020

0x3f95,	// (0x00088ea5) bg_cale_heading_pane_g1

0x3f9d,	// (0x00088ead) bg_cale_heading_pane_g2

0x3fa5,	// (0x00088eb5) bg_cale_heading_pane_g3

0x3fad,	// (0x00088ebd) bg_cale_heading_pane_g4

0x3fb7,	// (0x00088ec7) bg_cale_heading_pane_g5

0x3fc1,	// (0x00088ed1) bg_cale_heading_pane_g6

0x3fc9,	// (0x00088ed9) bg_cale_heading_pane_g7

0x3fd1,	// (0x00088ee1) bg_cale_heading_pane_g8

0x3fdb,	// (0x00088eeb) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000942b4) bg_cale_heading_pane_g

0x3f95,	// (0x00088ea5) bg_cale_side_pane_g1

0x3fe5,	// (0x00088ef5) bg_cale_side_pane_g2

0x3fed,	// (0x00088efd) bg_cale_side_pane_g3

0x3ff5,	// (0x00088f05) bg_cale_side_pane_g4

0x3ffd,	// (0x00088f0d) bg_cale_side_pane_g5

0x4005,	// (0x00088f15) bg_cale_side_pane_g6

0x400d,	// (0x00088f1d) bg_cale_side_pane_g7

0x4015,	// (0x00088f25) bg_cale_side_pane_g8

0x401d,	// (0x00088f2d) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000942c7) bg_cale_side_pane_g

0x4025,	// (0x00088f35) popup_call_status_window_ParamLimits

0x4025,	// (0x00088f35) popup_call_status_window

0x406c,	// (0x00088f7c) stacon_top_pane

0x4074,	// (0x00088f84) status_pane_ParamLimits

0x4074,	// (0x00088f84) status_pane

0x4089,	// (0x00088f99) status_small_pane

0x4091,	// (0x00088fa1) control_pane

0x15ac,	// (0x000864bc) stacon_bottom_pane

0x4099,	// (0x00088fa9) list_single_mce_smart_pane_t1_ParamLimits

0x4099,	// (0x00088fa9) list_single_mce_smart_pane_t1

0x40ac,	// (0x00088fbc) list_single_mce_smart_pane_t2_ParamLimits

0x40ac,	// (0x00088fbc) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000942da) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000942da) list_single_mce_smart_pane_t

0x40cb,	// (0x00088fdb) compass_pane

0x40d4,	// (0x00088fe4) main_location2_pane_t1

0x40e6,	// (0x00088ff6) main_location2_pane_t2

0x40f8,	// (0x00089008) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000942df) main_location2_pane_t

0x413c,	// (0x0008904c) compass_pane_g1_ParamLimits

0x413c,	// (0x0008904c) compass_pane_g1

0x4148,	// (0x00089058) compass_pane_t1

0x4157,	// (0x00089067) compass_pane_t2

0x0005,

0xf3d8,	// (0x000942e8) compass_pane_t

0x419e,	// (0x000890ae) text_secondary_cp61

0x421f,	// (0x0008912f) navi_pane_cams_g5

0x429b,	// (0x000891ab) navi_pane_im_t1

0x42a9,	// (0x000891b9) navi_pane_mp_g1_ParamLimits

0x42a9,	// (0x000891b9) navi_pane_mp_g1

0x42bd,	// (0x000891cd) navi_pane_mp_g2_ParamLimits

0x42bd,	// (0x000891cd) navi_pane_mp_g2

0x42c9,	// (0x000891d9) navi_pane_mp_g3_ParamLimits

0x42c9,	// (0x000891d9) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000942fc) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000942fc) navi_pane_mp_g

0x42d5,	// (0x000891e5) navi_pane_mp_t1

0x42e3,	// (0x000891f3) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00094303) navi_pane_mp_t

0x4390,	// (0x000892a0) navi_pane_vt_g1

0x42d5,	// (0x000891e5) navi_pane_vt_t1

0x4398,	// (0x000892a8) navi_slider_pane

0x245d,	// (0x0008736d) zooming_pane

0x43a8,	// (0x000892b8) navi_slider_pane_g1

0xb29e,	// (0x000901ae) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0009430a) navi_slider_pane_g

0x43cc,	// (0x000892dc) aid_levels_zoom

0x43d4,	// (0x000892e4) zooming_pane_g1

0x43dc,	// (0x000892ec) zooming_pane_g2

0x43dc,	// (0x000892ec) zooming_pane_g3

0x0002,

0xf409,	// (0x00094319) zooming_pane_g

0x43e4,	// (0x000892f4) level_10_zoom

0x43ed,	// (0x000892fd) level_11_zoom

0x43f6,	// (0x00089306) level_1_zoom

0x43ff,	// (0x0008930f) level_2_zoom

0x4408,	// (0x00089318) level_3_zoom

0x4411,	// (0x00089321) level_4_zoom

0x441a,	// (0x0008932a) level_5_zoom

0x4423,	// (0x00089333) level_6_zoom

0x442c,	// (0x0008933c) level_7_zoom

0x4435,	// (0x00089345) level_8_zoom

0x443e,	// (0x0008934e) level_9_zoom

0x444f,	// (0x0008935f) popup_phob_thumbnail_window_g1

0x4457,	// (0x00089367) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00094320) popup_phob_thumbnail_window_g

0xbada,	// (0x000909ea) level_1_location

0xbae2,	// (0x000909f2) level_2_location

0xbaea,	// (0x000909fa) level_3_location

0xbaf2,	// (0x00090a02) level_4_location

0x245d,	// (0x0008736d) level_5_location

0x445f,	// (0x0008936f) mce_icon_pane_g1

0x4469,	// (0x00089379) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00094325) mce_icon_pane_g

0x4471,	// (0x00089381) main_mup_pane_g1_ParamLimits

0x4471,	// (0x00089381) main_mup_pane_g1

0x4487,	// (0x00089397) main_mup_pane_g2_ParamLimits

0x4487,	// (0x00089397) main_mup_pane_g2

0x4499,	// (0x000893a9) main_mup_pane_g3_ParamLimits

0x4499,	// (0x000893a9) main_mup_pane_g3

0x44ab,	// (0x000893bb) main_mup_pane_g4_ParamLimits

0x44ab,	// (0x000893bb) main_mup_pane_g4

0x44c3,	// (0x000893d3) main_mup_pane_g5_ParamLimits

0x44c3,	// (0x000893d3) main_mup_pane_g5

0x44df,	// (0x000893ef) main_mup_pane_g6_ParamLimits

0x44df,	// (0x000893ef) main_mup_pane_g6

0x44f7,	// (0x00089407) main_mup_pane_g7_ParamLimits

0x44f7,	// (0x00089407) main_mup_pane_g7

0x450f,	// (0x0008941f) main_mup_pane_g8_ParamLimits

0x450f,	// (0x0008941f) main_mup_pane_g8

0x4527,	// (0x00089437) main_mup_pane_g9_ParamLimits

0x4527,	// (0x00089437) main_mup_pane_g9

0x4541,	// (0x00089451) main_mup_pane_g10_ParamLimits

0x4541,	// (0x00089451) main_mup_pane_g10

0x455b,	// (0x0008946b) main_mup_pane_g11_ParamLimits

0x455b,	// (0x0008946b) main_mup_pane_g11

0x456f,	// (0x0008947f) main_mup_pane_g12_ParamLimits

0x456f,	// (0x0008947f) main_mup_pane_g12

0x4585,	// (0x00089495) main_mup_pane_g13_ParamLimits

0x4585,	// (0x00089495) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0009432a) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0009432a) main_mup_pane_g

0x4599,	// (0x000894a9) main_mup_pane_t1_ParamLimits

0x4599,	// (0x000894a9) main_mup_pane_t1

0x45b3,	// (0x000894c3) main_mup_pane_t2_ParamLimits

0x45b3,	// (0x000894c3) main_mup_pane_t2

0x45cb,	// (0x000894db) main_mup_pane_t3_ParamLimits

0x45cb,	// (0x000894db) main_mup_pane_t3

0x45e3,	// (0x000894f3) main_mup_pane_t4_ParamLimits

0x45e3,	// (0x000894f3) main_mup_pane_t4

0x4601,	// (0x00089511) main_mup_pane_t5_ParamLimits

0x4601,	// (0x00089511) main_mup_pane_t5

0x4616,	// (0x00089526) main_mup_pane_t6_ParamLimits

0x4616,	// (0x00089526) main_mup_pane_t6

0x0005,

0xf435,	// (0x00094345) main_mup_pane_t_ParamLimits

0xf435,	// (0x00094345) main_mup_pane_t

0x4628,	// (0x00089538) mup_progress_pane_ParamLimits

0x4628,	// (0x00089538) mup_progress_pane

0x4634,	// (0x00089544) mup_visualizer_pane_ParamLimits

0x4634,	// (0x00089544) mup_visualizer_pane

0x4668,	// (0x00089578) mup_volume_pane_ParamLimits

0x4668,	// (0x00089578) mup_volume_pane

0x4686,	// (0x00089596) mup_visualizer_pane_g1_ParamLimits

0x4686,	// (0x00089596) mup_visualizer_pane_g1

0x4686,	// (0x00089596) mup_visualizer_pane_g2_ParamLimits

0x4686,	// (0x00089596) mup_visualizer_pane_g2

0x413c,	// (0x0008904c) mup_visualizer_pane_g3_ParamLimits

0x413c,	// (0x0008904c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00094352) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00094352) mup_visualizer_pane_g

0x1ca0,	// (0x00086bb0) mup_volume_pane_g1

0x469c,	// (0x000895ac) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00094359) mup_volume_pane_g

0x1ca0,	// (0x00086bb0) mup_progress_pane_g1

0x46a5,	// (0x000895b5) mup_progress_pane_g2

0x46ae,	// (0x000895be) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009435e) mup_progress_pane_g

0x15ac,	// (0x000864bc) bg_popup_window_pane_cp05

0x46b7,	// (0x000895c7) heading_pane_cp02_ParamLimits

0x46b7,	// (0x000895c7) heading_pane_cp02

0x46d1,	// (0x000895e1) list_popup_blid_pane

0x46d9,	// (0x000895e9) list_blid_sat_info_pane_ParamLimits

0x46d9,	// (0x000895e9) list_blid_sat_info_pane

0x46ec,	// (0x000895fc) list_blid_sat_info_pane_g1

0x46f4,	// (0x00089604) list_blid_sat_info_pane_t1

0x47fa,	// (0x0008970a) mup_equalizer_pane_ParamLimits

0x47fa,	// (0x0008970a) mup_equalizer_pane

0x4813,	// (0x00089723) mup_equalizer_pane_cp1_ParamLimits

0x4813,	// (0x00089723) mup_equalizer_pane_cp1

0x4830,	// (0x00089740) mup_equalizer_pane_cp2_ParamLimits

0x4830,	// (0x00089740) mup_equalizer_pane_cp2

0x484d,	// (0x0008975d) mup_equalizer_pane_cp3_ParamLimits

0x484d,	// (0x0008975d) mup_equalizer_pane_cp3

0x486e,	// (0x0008977e) mup_equalizer_pane_cp4_ParamLimits

0x486e,	// (0x0008977e) mup_equalizer_pane_cp4

0x488f,	// (0x0008979f) mup_equalizer_pane_cp5

0x48a3,	// (0x000897b3) mup_equalizer_pane_cp6

0x48b7,	// (0x000897c7) mup_equalizer_pane_cp7

0xb9b8,	// (0x000908c8) bg_popup_call_poc_act_pane_g9

0xb9c0,	// (0x000908d0) bg_popup_call_poc_act_pane_g10

0xb9c8,	// (0x000908d8) bg_popup_call_poc_act_pane_g11

0x000a,

0x1807,	// (0x00086717) mup_scale_pane

0x1ca0,	// (0x00086bb0) mup_scale_pane_g1

0x48cb,	// (0x000897db) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009437a) mup_scale_pane_g

0x4901,	// (0x00089811) msg_data_pane

0x4909,	// (0x00089819) scroll_pane_cp017

0x05f1,	// (0x00085501) bg_list_pane_cp04_ParamLimits

0x05f1,	// (0x00085501) bg_list_pane_cp04

0x4911,	// (0x00089821) msg_data_pane_g1

0x4919,	// (0x00089829) msg_data_pane_g2

0x4921,	// (0x00089831) msg_data_pane_g3

0x4929,	// (0x00089839) msg_data_pane_g4

0x4931,	// (0x00089841) msg_data_pane_g5

0x4939,	// (0x00089849) msg_data_pane_g6

0x4941,	// (0x00089851) msg_data_pane_g7

0x0006,

0xf479,	// (0x00094389) msg_data_pane_g

0x0609,	// (0x00085519) msg_text_pane_ParamLimits

0x0609,	// (0x00085519) msg_text_pane

0x4949,	// (0x00089859) qrid_highlight_pane_cp011_ParamLimits

0x4949,	// (0x00089859) qrid_highlight_pane_cp011

0x15ac,	// (0x000864bc) msg_body_pane

0x15ac,	// (0x000864bc) msg_header_pane

0x4968,	// (0x00089878) input_focus_pane_cp07

0xb2b8,	// (0x000901c8) msg_header_pane_t1_ParamLimits

0xb2b8,	// (0x000901c8) msg_header_pane_t1

0xb2ca,	// (0x000901da) msg_header_pane_t2_ParamLimits

0xb2ca,	// (0x000901da) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0009439d) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0009439d) msg_header_pane_t

0x497d,	// (0x0008988d) msg_body_pane_g1

0xb2dc,	// (0x000901ec) msg_body_pane_t1_ParamLimits

0xb2dc,	// (0x000901ec) msg_body_pane_t1

0xb30d,	// (0x0009021d) msg_body_pane_t2_ParamLimits

0xb30d,	// (0x0009021d) msg_body_pane_t2

0xb31f,	// (0x0009022f) msg_body_pane_t3_ParamLimits

0xb31f,	// (0x0009022f) msg_body_pane_t3

0x0002,

0xf492,	// (0x000943a2) msg_body_pane_t_ParamLimits

0xf492,	// (0x000943a2) msg_body_pane_t

0x49bf,	// (0x000898cf) main_viewer_pane_g1_ParamLimits

0x49bf,	// (0x000898cf) main_viewer_pane_g1

0x49cd,	// (0x000898dd) main_viewer_pane_g2_ParamLimits

0x49cd,	// (0x000898dd) main_viewer_pane_g2

0x49db,	// (0x000898eb) main_viewer_pane_g3_ParamLimits

0x49db,	// (0x000898eb) main_viewer_pane_g3

0x49ea,	// (0x000898fa) main_viewer_pane_g4_ParamLimits

0x49ea,	// (0x000898fa) main_viewer_pane_g4

0xb349,	// (0x00090259) main_viewer_pane_g5_ParamLimits

0xb349,	// (0x00090259) main_viewer_pane_g5

0xb349,	// (0x00090259) main_viewer_pane_g7_ParamLimits

0xb349,	// (0x00090259) main_viewer_pane_g7

0xb35b,	// (0x0009026b) main_viewer_pane_g8_ParamLimits

0xb35b,	// (0x0009026b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000943b2) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000943b2) main_viewer_pane_g

0x49f9,	// (0x00089909) viewer_content_pane_ParamLimits

0x49f9,	// (0x00089909) viewer_content_pane

0x4a34,	// (0x00089944) main_postcard_pane_g1_ParamLimits

0x4a34,	// (0x00089944) main_postcard_pane_g1

0x4a4a,	// (0x0008995a) main_postcard_pane_g2_ParamLimits

0x4a4a,	// (0x0008995a) main_postcard_pane_g2

0x4a60,	// (0x00089970) main_postcard_pane_g3_ParamLimits

0x4a60,	// (0x00089970) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000943c3) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000943c3) main_postcard_pane_g

0x4a77,	// (0x00089987) main_postcard_pane_g4

0xbc2e,	// (0x00090b3e) smil_status_volume_pane_g2

0x4aba,	// (0x000899ca) postcard_pane_ParamLimits

0x4aba,	// (0x000899ca) postcard_pane

0x4afc,	// (0x00089a0c) postcard_pane_g1_ParamLimits

0x4afc,	// (0x00089a0c) postcard_pane_g1

0x4b0a,	// (0x00089a1a) postcard_pane_g2_ParamLimits

0x4b0a,	// (0x00089a1a) postcard_pane_g2

0x4b16,	// (0x00089a26) postcard_pane_g3_ParamLimits

0x4b16,	// (0x00089a26) postcard_pane_g3

0x4b22,	// (0x00089a32) postcard_pane_g4_ParamLimits

0x4b22,	// (0x00089a32) postcard_pane_g4

0x4b30,	// (0x00089a40) postcard_pane_g5_ParamLimits

0x4b30,	// (0x00089a40) postcard_pane_g5

0x4b45,	// (0x00089a55) postcard_pane_g6_ParamLimits

0x4b45,	// (0x00089a55) postcard_pane_g6

0x4afc,	// (0x00089a0c) postcard_pane_g7_ParamLimits

0x4afc,	// (0x00089a0c) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000943d0) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000943d0) postcard_pane_g

0x4b59,	// (0x00089a69) main_mp2_pane_g1_ParamLimits

0x4b59,	// (0x00089a69) main_mp2_pane_g1

0x4b65,	// (0x00089a75) main_mp2_pane_g2_ParamLimits

0x4b65,	// (0x00089a75) main_mp2_pane_g2

0x4b71,	// (0x00089a81) main_mp2_pane_g3_ParamLimits

0x4b71,	// (0x00089a81) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000943df) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000943df) main_mp2_pane_g

0x4b7d,	// (0x00089a8d) main_mp2_pane_t1_ParamLimits

0x4b7d,	// (0x00089a8d) main_mp2_pane_t1

0x4b92,	// (0x00089aa2) main_mp2_pane_t2_ParamLimits

0x4b92,	// (0x00089aa2) main_mp2_pane_t2

0x4ba4,	// (0x00089ab4) main_mp2_pane_t3_ParamLimits

0x4ba4,	// (0x00089ab4) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000943e6) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000943e6) main_mp2_pane_t

0x4bb6,	// (0x00089ac6) pec_content_pane_ParamLimits

0x4bb6,	// (0x00089ac6) pec_content_pane

0x2d82,	// (0x00087c92) scroll_pane_cp015

0x4bc8,	// (0x00089ad8) pec_attribute_pane_ParamLimits

0x4bc8,	// (0x00089ad8) pec_attribute_pane

0x4bd8,	// (0x00089ae8) pec_content_pane_g1_ParamLimits

0x4bd8,	// (0x00089ae8) pec_content_pane_g1

0x4be4,	// (0x00089af4) pec_content_pane_t1_ParamLimits

0x4be4,	// (0x00089af4) pec_content_pane_t1

0x4bf6,	// (0x00089b06) pec_content_pane_t2_ParamLimits

0x4bf6,	// (0x00089b06) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000943ed) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000943ed) pec_content_pane_t

0x4c08,	// (0x00089b18) list_single_graphic_pane_cp01_ParamLimits

0x4c08,	// (0x00089b18) list_single_graphic_pane_cp01

0x1807,	// (0x00086717) bg_popup_sub_pane_cp04

0x4c1e,	// (0x00089b2e) popup_mup_playback_window_g1

0x4c2a,	// (0x00089b3a) popup_mup_playback_window_t1

0x4c3f,	// (0x00089b4f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000943f2) popup_mup_playback_window_t

0x4c94,	// (0x00089ba4) main_image_pane_g1_ParamLimits

0x4c94,	// (0x00089ba4) main_image_pane_g1

0x4d71,	// (0x00089c81) scroll_pane_cp018_ParamLimits

0x4d71,	// (0x00089c81) scroll_pane_cp018

0x4d89,	// (0x00089c99) scroll_pane_cp016_ParamLimits

0x4d89,	// (0x00089c99) scroll_pane_cp016

0x4dbd,	// (0x00089ccd) smil2_image_pane_ParamLimits

0x4dbd,	// (0x00089ccd) smil2_image_pane

0x4ded,	// (0x00089cfd) smil2_root_pane_ParamLimits

0x4ded,	// (0x00089cfd) smil2_root_pane

0x4e25,	// (0x00089d35) smil2_text_pane_ParamLimits

0x4e25,	// (0x00089d35) smil2_text_pane

0x15ac,	// (0x000864bc) bg_list_pane_cp06

0x4ead,	// (0x00089dbd) grid_radio_pane

0x15ac,	// (0x000864bc) bg_popup_window_pane_cp06

0x4eb5,	// (0x00089dc5) main_fmradio_pane_t1

0x3daf,	// (0x00088cbf) heading_pane_cp04

0x4ec3,	// (0x00089dd3) main_fmradio_pane_t2

0xba10,	// (0x00090920) popup_cale_lunar_info_window_g1

0x4ed1,	// (0x00089de1) main_fmradio_pane_t3

0xba18,	// (0x00090928) popup_cale_lunar_info_window_g2

0x4edf,	// (0x00089def) main_fmradio_pane_t4

0x0001,

0x4eed,	// (0x00089dfd) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000944e0) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00094407) main_fmradio_pane_t

0x4efb,	// (0x00089e0b) wait_bar_pane_cp03

0x4f03,	// (0x00089e13) cell_fmradio_pane_ParamLimits

0x4f03,	// (0x00089e13) cell_fmradio_pane

0x4afc,	// (0x00089a0c) cell_fmradio_pane_g1_ParamLimits

0x4afc,	// (0x00089a0c) cell_fmradio_pane_g1

0x15ac,	// (0x000864bc) grid_highlight_pane_cp011

0x4f16,	// (0x00089e26) poc_content_pane_ParamLimits

0x4f16,	// (0x00089e26) poc_content_pane

0x4f28,	// (0x00089e38) scroll_pane_cp019

0x4f30,	// (0x00089e40) popup_call_poc_act_window_ParamLimits

0x4f30,	// (0x00089e40) popup_call_poc_act_window

0x4f54,	// (0x00089e64) popup_call_poc_inact_window_ParamLimits

0x4f54,	// (0x00089e64) popup_call_poc_inact_window

0xf594,	// (0x000944a4) bg_popup_call_poc_act_pane_g

0xb9d0,	// (0x000908e0) bg_popup_call_poc_inact_pane_g1

0xb9d8,	// (0x000908e8) bg_popup_call_poc_inact_pane_g2

0x4f6d,	// (0x00089e7d) popup_call_poc_act_window_g2

0xb9e0,	// (0x000908f0) bg_popup_call_poc_inact_pane_g3

0xb960,	// (0x00090870) bg_popup_call_poc_inact_pane_g4

0xb9e8,	// (0x000908f8) bg_popup_call_poc_inact_pane_g5

0x4f75,	// (0x00089e85) popup_call_poc_act_window_t1_ParamLimits

0x4f75,	// (0x00089e85) popup_call_poc_act_window_t1

0x4f9d,	// (0x00089ead) popup_call_poc_act_window_t2_ParamLimits

0x4f9d,	// (0x00089ead) popup_call_poc_act_window_t2

0x4fc5,	// (0x00089ed5) popup_call_poc_act_window_t3_ParamLimits

0x4fc5,	// (0x00089ed5) popup_call_poc_act_window_t3

0x4fed,	// (0x00089efd) popup_call_poc_act_window_t4_ParamLimits

0x4fed,	// (0x00089efd) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00094412) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00094412) popup_call_poc_act_window_t

0xb9f0,	// (0x00090900) bg_popup_call_poc_inact_pane_g6

0xb9f8,	// (0x00090908) bg_popup_call_poc_inact_pane_g7

0xba00,	// (0x00090910) bg_popup_call_poc_inact_pane_g8

0x4fff,	// (0x00089f0f) popup_call_poc_inact_window_g2

0xba08,	// (0x00090918) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000944bb) bg_popup_call_poc_inact_pane_g

0x5007,	// (0x00089f17) popup_call_poc_inact_window_t1_ParamLimits

0x5007,	// (0x00089f17) popup_call_poc_inact_window_t1

0x501c,	// (0x00089f2c) popup_call_poc_inact_window_t2_ParamLimits

0x501c,	// (0x00089f2c) popup_call_poc_inact_window_t2

0x5031,	// (0x00089f41) popup_call_poc_inact_window_t3_ParamLimits

0x5031,	// (0x00089f41) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0009441b) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0009441b) popup_call_poc_inact_window_t

0xbba1,	// (0x00090ab1) context_pane_ParamLimits

0x608a,	// (0x0008af9a) signal_pane_ParamLimits

0x245d,	// (0x0008736d) main_call2_pane

0xbb7a,	// (0x00090a8a) popup_phob_thumbnail2_window_ParamLimits

0xbb7a,	// (0x00090a8a) popup_phob_thumbnail2_window

0xb331,	// (0x00090241) aid_hotspot_pointer_arrow_pane

0xb339,	// (0x00090249) aid_hotspot_pointer_hand_pane

0x5bac,	// (0x0008aabc) phob_pre_status_pane_g5

0x24de,	// (0x000873ee) cams_zoom_pane_ParamLimits

0x24ed,	// (0x000873fd) image_vga_pane_ParamLimits

0x2507,	// (0x00087417) main_camera_pane_g1_ParamLimits

0x2519,	// (0x00087429) main_camera_pane_g2_ParamLimits

0x2529,	// (0x00087439) main_camera_pane_g3_ParamLimits

0x2539,	// (0x00087449) main_camera_pane_g4_ParamLimits

0x2549,	// (0x00087459) main_camera_pane_g5_ParamLimits

0x2559,	// (0x00087469) main_camera_pane_g6_ParamLimits

0x2569,	// (0x00087479) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009411a) main_camera_pane_g_ParamLimits

0x2585,	// (0x00087495) main_camera_pane_t1_ParamLimits

0x259b,	// (0x000874ab) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009412b) main_camera_pane_t_ParamLimits

0x1807,	// (0x00086717) bg_popup_preview_window_pane_cp01_ParamLimits

0x1807,	// (0x00086717) bg_popup_preview_window_pane_cp01

0x5046,	// (0x00089f56) popup_phob_thumbnail2_window_g1_ParamLimits

0x5046,	// (0x00089f56) popup_phob_thumbnail2_window_g1

0x15ac,	// (0x000864bc) call2_cli_visual_pane

0x506d,	// (0x00089f7d) popup_call2_audio_conf_window_ParamLimits

0x506d,	// (0x00089f7d) popup_call2_audio_conf_window

0x508d,	// (0x00089f9d) popup_call2_audio_first_window_ParamLimits

0x508d,	// (0x00089f9d) popup_call2_audio_first_window

0x5123,	// (0x0008a033) popup_call2_audio_in_window_ParamLimits

0x5123,	// (0x0008a033) popup_call2_audio_in_window

0x516b,	// (0x0008a07b) popup_call2_audio_out_window_ParamLimits

0x516b,	// (0x0008a07b) popup_call2_audio_out_window

0x51d5,	// (0x0008a0e5) popup_call2_audio_second_window_ParamLimits

0x51d5,	// (0x0008a0e5) popup_call2_audio_second_window

0x523b,	// (0x0008a14b) popup_call2_audio_wait_window_ParamLimits

0x523b,	// (0x0008a14b) popup_call2_audio_wait_window

0x15ac,	// (0x000864bc) bg_popup_call2_act_pane_cp03

0x17e9,	// (0x000866f9) list_conf_pane_cp

0x5275,	// (0x0008a185) popup_call2_audio_conf_window_t1

0x5283,	// (0x0008a193) list_single_graphic_popup_conf2_pane_ParamLimits

0x5283,	// (0x0008a193) list_single_graphic_popup_conf2_pane

0x3e43,	// (0x00088d53) list_highlight_pane_cp04

0x5296,	// (0x0008a1a6) list_single_graphic_popup_conf2_pane_g1

0x3e54,	// (0x00088d64) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00094422) list_single_graphic_popup_conf2_pane_g

0x52a0,	// (0x0008a1b0) list_single_graphic_popup_conf2_pane_t1

0x52ae,	// (0x0008a1be) bg_popup_call2_act_pane_cp01_ParamLimits

0x52ae,	// (0x0008a1be) bg_popup_call2_act_pane_cp01

0x5338,	// (0x0008a248) call_type_pane_cp05_ParamLimits

0x5338,	// (0x0008a248) call_type_pane_cp05

0x538c,	// (0x0008a29c) popup_call2_audio_second_window_g1_ParamLimits

0x538c,	// (0x0008a29c) popup_call2_audio_second_window_g1

0x53e0,	// (0x0008a2f0) popup_call2_audio_second_window_g2_ParamLimits

0x53e0,	// (0x0008a2f0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00094427) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00094427) popup_call2_audio_second_window_g

0x5445,	// (0x0008a355) popup_call2_audio_second_window_t1_ParamLimits

0x5445,	// (0x0008a355) popup_call2_audio_second_window_t1

0x5500,	// (0x0008a410) popup_call2_audio_second_window_t2_ParamLimits

0x5500,	// (0x0008a410) popup_call2_audio_second_window_t2

0x5553,	// (0x0008a463) popup_call2_audio_second_window_t3_ParamLimits

0x5553,	// (0x0008a463) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009442e) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009442e) popup_call2_audio_second_window_t

0x15ac,	// (0x000864bc) bg_popup_call2_in_pane_cp02

0x15b6,	// (0x000864c6) call_type_pane_cp04

0x15be,	// (0x000864ce) popup_call2_audio_wait_window_g1

0x15c6,	// (0x000864d6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00094009) popup_call2_audio_wait_window_g

0x15ce,	// (0x000864de) popup_call2_audio_wait_window_t3

0x5646,	// (0x0008a556) bg_popup_call2_act_pane_ParamLimits

0x5646,	// (0x0008a556) bg_popup_call2_act_pane

0x5706,	// (0x0008a616) call_type_pane_cp03_ParamLimits

0x5706,	// (0x0008a616) call_type_pane_cp03

0x576a,	// (0x0008a67a) popup_call2_audio_first_window_g1_ParamLimits

0x576a,	// (0x0008a67a) popup_call2_audio_first_window_g1

0x57da,	// (0x0008a6ea) popup_call2_audio_first_window_g2_ParamLimits

0x57da,	// (0x0008a6ea) popup_call2_audio_first_window_g2

0x4686,	// (0x00089596) popup_call2_audio_first_window_g3_ParamLimits

0x4686,	// (0x00089596) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00094437) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00094437) popup_call2_audio_first_window_g

0x58b8,	// (0x0008a7c8) popup_call2_audio_first_window_t1_ParamLimits

0x58b8,	// (0x0008a7c8) popup_call2_audio_first_window_t1

0x59bb,	// (0x0008a8cb) popup_call2_audio_first_window_t4_ParamLimits

0x59bb,	// (0x0008a8cb) popup_call2_audio_first_window_t4

0xb373,	// (0x00090283) popup_call2_audio_first_window_t5_ParamLimits

0xb373,	// (0x00090283) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00094442) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00094442) popup_call2_audio_first_window_t

0x17ff,	// (0x0008670f) bg_popup_call2_act_pane_g1

0xba20,	// (0x00090930) popup_cale_lunar_info_window_t1

0xba2e,	// (0x0009093e) popup_cale_lunar_info_window_t2

0xba3c,	// (0x0009094c) popup_cale_lunar_info_window_t3

0x15ac,	// (0x000864bc) bg_popup_call2_bubble_pane

0xb474,	// (0x00090384) bg_popup_call2_in_pane_cp01_ParamLimits

0xb474,	// (0x00090384) bg_popup_call2_in_pane_cp01

0xebd0,	// (0x00093ae0) call_type_pane_cp02

0xb4bc,	// (0x000903cc) popup_call2_audio_out_window_g1_ParamLimits

0xb4bc,	// (0x000903cc) popup_call2_audio_out_window_g1

0xb4e8,	// (0x000903f8) popup_call2_audio_out_window_g2_ParamLimits

0xb4e8,	// (0x000903f8) popup_call2_audio_out_window_g2

0xb510,	// (0x00090420) popup_call2_audio_out_window_g3_ParamLimits

0xb510,	// (0x00090420) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0009444b) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0009444b) popup_call2_audio_out_window_g

0xb54b,	// (0x0009045b) popup_call2_audio_out_window_t1_ParamLimits

0xb54b,	// (0x0009045b) popup_call2_audio_out_window_t1

0xb5aa,	// (0x000904ba) popup_call2_audio_out_window_t2_ParamLimits

0xb5aa,	// (0x000904ba) popup_call2_audio_out_window_t2

0xb5fe,	// (0x0009050e) popup_call2_audio_out_window_t3_ParamLimits

0xb5fe,	// (0x0009050e) popup_call2_audio_out_window_t3

0xb614,	// (0x00090524) popup_call2_audio_out_window_t4_ParamLimits

0xb614,	// (0x00090524) popup_call2_audio_out_window_t4

0xb62a,	// (0x0009053a) popup_call2_audio_out_window_t5_ParamLimits

0xb62a,	// (0x0009053a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00094454) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00094454) popup_call2_audio_out_window_t

0xb68e,	// (0x0009059e) bg_popup_call2_in_pane_ParamLimits

0xb68e,	// (0x0009059e) bg_popup_call2_in_pane

0xb6ea,	// (0x000905fa) popup_call2_audio_in_window_g1_ParamLimits

0xb6ea,	// (0x000905fa) popup_call2_audio_in_window_g1

0xb722,	// (0x00090632) popup_call2_audio_in_window_g2_ParamLimits

0xb722,	// (0x00090632) popup_call2_audio_in_window_g2

0xb75a,	// (0x0009066a) popup_call2_audio_in_window_g3_ParamLimits

0xb75a,	// (0x0009066a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00094461) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00094461) popup_call2_audio_in_window_g

0xb7b2,	// (0x000906c2) popup_call2_audio_in_window_t1_ParamLimits

0xb7b2,	// (0x000906c2) popup_call2_audio_in_window_t1

0xb832,	// (0x00090742) popup_call2_audio_in_window_t2_ParamLimits

0xb832,	// (0x00090742) popup_call2_audio_in_window_t2

0xb8b2,	// (0x000907c2) popup_call2_audio_in_window_t3_ParamLimits

0xb8b2,	// (0x000907c2) popup_call2_audio_in_window_t3

0xb8cc,	// (0x000907dc) popup_call2_audio_in_window_t4_ParamLimits

0xb8cc,	// (0x000907dc) popup_call2_audio_in_window_t4

0xb8de,	// (0x000907ee) popup_call2_audio_in_window_t5_ParamLimits

0xb8de,	// (0x000907ee) popup_call2_audio_in_window_t5

0xb8f3,	// (0x00090803) popup_call2_audio_in_window_t6_ParamLimits

0xb8f3,	// (0x00090803) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009446a) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009446a) popup_call2_audio_in_window_t

0x17ff,	// (0x0008670f) bg_popup_call2_in_pane_g1

0xba4a,	// (0x0009095a) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000944e5) popup_cale_lunar_info_window_t

0x1807,	// (0x00086717) bg_popup_call2_rect_pane_ParamLimits

0x1807,	// (0x00086717) bg_popup_call2_rect_pane

0x15ac,	// (0x000864bc) call2_cli_visual_graphic_pane

0x15ac,	// (0x000864bc) call2_cli_visual_text_pane

0xbc41,	// (0x00090b51) smil_status_volume_pane_g3

0x0002,

0x1ca0,	// (0x00086bb0) call2_cli_visual_graphic_pane_g1

0x1ca0,	// (0x00086bb0) call2_cli_visual_graphic_pane_g2

0x1ca0,	// (0x00086bb0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00094477) call2_cli_visual_graphic_pane_g

0xb908,	// (0x00090818) bg_popup_call2_rect_pane_g1

0x1de4,	// (0x00086cf4) bg_popup_call2_rect_pane_g2

0xb910,	// (0x00090820) bg_popup_call2_rect_pane_g3

0xb918,	// (0x00090828) bg_popup_call2_rect_pane_g4

0xb920,	// (0x00090830) bg_popup_call2_rect_pane_g5

0xb928,	// (0x00090838) bg_popup_call2_rect_pane_g6

0xb930,	// (0x00090840) bg_popup_call2_rect_pane_g7

0xb938,	// (0x00090848) bg_popup_call2_rect_pane_g8

0xb940,	// (0x00090850) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009447e) bg_popup_call2_rect_pane_g

0xb948,	// (0x00090858) bg_popup_call2_bubble_pane_g1

0xb950,	// (0x00090860) bg_popup_call2_bubble_pane_g2

0xb958,	// (0x00090868) bg_popup_call2_bubble_pane_g3

0xb960,	// (0x00090870) bg_popup_call2_bubble_pane_g4

0xb968,	// (0x00090878) bg_popup_call2_bubble_pane_g5

0xb970,	// (0x00090880) bg_popup_call2_bubble_pane_g6

0xb978,	// (0x00090888) bg_popup_call2_bubble_pane_g7

0xb980,	// (0x00090890) bg_popup_call2_bubble_pane_g8

0xb988,	// (0x00090898) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00094491) bg_popup_call2_bubble_pane_g

0x1e67,	// (0x00086d77) aid_cale_week_size_cell_pane

0x25b1,	// (0x000874c1) aid_cams_cif_uncrop_pane_ParamLimits

0x25b1,	// (0x000874c1) aid_cams_cif_uncrop_pane

0x27a4,	// (0x000876b4) aid_cams_size_cell_ParamLimits

0x27a4,	// (0x000876b4) aid_cams_size_cell

0x27b8,	// (0x000876c8) grid_cams_pane_ParamLimits

0x27d2,	// (0x000876e2) linegrid_cams_pane_ParamLimits

0x291f,	// (0x0008782f) call_video_pane_t1

0x293d,	// (0x0008784d) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009417e) call_video_pane_t

0x2fc5,	// (0x00087ed5) aid_cale_month_size_cell_pane_ParamLimits

0x2fc5,	// (0x00087ed5) aid_cale_month_size_cell_pane

0xf61e,	// (0x0009452e) smil_status_volume_pane_g

0xbc4e,	// (0x00090b5e) volume_smil_pane_ParamLimits

0xb0df,	// (0x0008ffef) aid_popup2_width_pane

0x1d3c,	// (0x00086c4c) cell_qdial_pane_g4_ParamLimits

0x1d3c,	// (0x00086c4c) cell_qdial_pane_g4

0x411c,	// (0x0008902c) aid_blid_cardinal_pane_ParamLimits

0x4128,	// (0x00089038) aid_blid_destination_pane_ParamLimits

0x4128,	// (0x00089038) aid_blid_destination_pane

0x1807,	// (0x00086717) bg_popup_call_poc_act_pane_ParamLimits

0x1807,	// (0x00086717) bg_popup_call_poc_act_pane

0x1807,	// (0x00086717) bg_popup_call_poc_inact_pane_ParamLimits

0x1807,	// (0x00086717) bg_popup_call_poc_inact_pane

0xb990,	// (0x000908a0) bg_popup_call_poc_act_pane_g1

0xb998,	// (0x000908a8) bg_popup_call_poc_act_pane_g2

0xb9a0,	// (0x000908b0) bg_popup_call_poc_act_pane_g3

0xb960,	// (0x00090870) bg_popup_call_poc_act_pane_g4

0xb968,	// (0x00090878) bg_popup_call_poc_act_pane_g5

0xb9a8,	// (0x000908b8) bg_popup_call_poc_act_pane_g6

0xb978,	// (0x00090888) bg_popup_call_poc_act_pane_g7

0xb9b0,	// (0x000908c0) bg_popup_call_poc_act_pane_g8

0x15ac,	// (0x000864bc) main_usb_pane

0xbb55,	// (0x00090a65) popup_cale_lunar_info_window

0x2c67,	// (0x00087b77) im_reading_pane_t1_ParamLimits

0x2ca1,	// (0x00087bb1) list_im_pane_ParamLimits

0x2cb2,	// (0x00087bc2) scroll_pane_cp07_ParamLimits

0x15ac,	// (0x000864bc) grid_highlight_pane_cp012

0x1807,	// (0x00086717) mup_scale_pane_ParamLimits

0x4afc,	// (0x00089a0c) main_usb_pane_g1_ParamLimits

0x4afc,	// (0x00089a0c) main_usb_pane_g1

0x5ac1,	// (0x0008a9d1) main_usb_pane_g2_ParamLimits

0x5ac1,	// (0x0008a9d1) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000944ce) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000944ce) main_usb_pane_g

0x5ad7,	// (0x0008a9e7) main_usb_pane_t1_ParamLimits

0x5ad7,	// (0x0008a9e7) main_usb_pane_t1

0x5ae9,	// (0x0008a9f9) main_usb_pane_t2_ParamLimits

0x5ae9,	// (0x0008a9f9) main_usb_pane_t2

0x5afb,	// (0x0008aa0b) main_usb_pane_t3_ParamLimits

0x5afb,	// (0x0008aa0b) main_usb_pane_t3

0x5b0d,	// (0x0008aa1d) main_usb_pane_t4_ParamLimits

0x5b0d,	// (0x0008aa1d) main_usb_pane_t4

0x5b1f,	// (0x0008aa2f) main_usb_pane_t5_ParamLimits

0x5b1f,	// (0x0008aa2f) main_usb_pane_t5

0x5b31,	// (0x0008aa41) main_usb_pane_t6_ParamLimits

0x5b31,	// (0x0008aa41) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000944d3) main_usb_pane_t_ParamLimits

0x40cb,	// (0x00088fdb) aid_text_placing

0x40d4,	// (0x00088fe4) main_location2_pane_t1_ParamLimits

0x40e6,	// (0x00088ff6) main_location2_pane_t2_ParamLimits

0x40f8,	// (0x00089008) main_location2_pane_t3_ParamLimits

0x410a,	// (0x0008901a) main_location2_pane_t4_ParamLimits

0x410a,	// (0x0008901a) main_location2_pane_t4

0xf3cf,	// (0x000942df) main_location2_pane_t_ParamLimits

0x18df,	// (0x000867ef) find_pinb_pane_g2_ParamLimits

0x18df,	// (0x000867ef) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009402f) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009402f) find_pinb_pane_g

0x18eb,	// (0x000867fb) find_pinb_pane_t1_ParamLimits

0x18fd,	// (0x0008680d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00094034) find_pinb_pane_t_ParamLimits

0x15ac,	// (0x000864bc) main_call3_pane

0x34eb,	// (0x000883fb) cale_month_day_heading_pane_t1_ParamLimits

0x352d,	// (0x0008843d) cale_month_day_heading_pane_t2_ParamLimits

0x3562,	// (0x00088472) cale_month_day_heading_pane_t3_ParamLimits

0x3597,	// (0x000884a7) cale_month_day_heading_pane_t4_ParamLimits

0x35d4,	// (0x000884e4) cale_month_day_heading_pane_t5_ParamLimits

0x3619,	// (0x00088529) cale_month_day_heading_pane_t6_ParamLimits

0x365e,	// (0x0008856e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000941b6) cale_month_day_heading_pane_t_ParamLimits

0x38c8,	// (0x000887d8) smil_status_volume_pane

0x4ad8,	// (0x000899e8) postcard_address_pane_ParamLimits

0x4ad8,	// (0x000899e8) postcard_address_pane

0x4aea,	// (0x000899fa) postcard_message_pane_ParamLimits

0x4aea,	// (0x000899fa) postcard_message_pane

0x5a9e,	// (0x0008a9ae) call2_cli_visual_pane_t1_ParamLimits

0x5a9e,	// (0x0008a9ae) call2_cli_visual_pane_t1

0x62b9,	// (0x0008b1c9) postcard_message_pane_t1_ParamLimits

0x62b9,	// (0x0008b1c9) postcard_message_pane_t1

0x62a2,	// (0x0008b1b2) postcard_address_pane_t1_ParamLimits

0x62a2,	// (0x0008b1b2) postcard_address_pane_t1

0x628e,	// (0x0008b19e) popup_call3_audio_in_window_ParamLimits

0x628e,	// (0x0008b19e) popup_call3_audio_in_window

0x6119,	// (0x0008b029) bg_popup_call3_in_pane_ParamLimits

0x6119,	// (0x0008b029) bg_popup_call3_in_pane

0x618f,	// (0x0008b09f) popup_call3_audio_in_window_g1_ParamLimits

0x618f,	// (0x0008b09f) popup_call3_audio_in_window_g1

0x61af,	// (0x0008b0bf) popup_call3_audio_in_window_g2_ParamLimits

0x61af,	// (0x0008b0bf) popup_call3_audio_in_window_g2

0x61cf,	// (0x0008b0df) popup_call3_audio_in_window_g3_ParamLimits

0x61cf,	// (0x0008b0df) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00094535) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00094535) popup_call3_audio_in_window_g

0x6200,	// (0x0008b110) popup_call3_audio_in_window_t1_ParamLimits

0x6200,	// (0x0008b110) popup_call3_audio_in_window_t1

0x623e,	// (0x0008b14e) popup_call3_audio_in_window_t2_ParamLimits

0x623e,	// (0x0008b14e) popup_call3_audio_in_window_t2

0x627c,	// (0x0008b18c) popup_call3_audio_in_window_t3_ParamLimits

0x627c,	// (0x0008b18c) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0009453e) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0009453e) popup_call3_audio_in_window_t

0x245d,	// (0x0008736d) bg_popup_call3_rect_pane

0xb908,	// (0x00090818) bg_popup_call3_rect_pane_g1

0x1de4,	// (0x00086cf4) bg_popup_call3_rect_pane_g2

0xb910,	// (0x00090820) bg_popup_call3_rect_pane_g3

0xb918,	// (0x00090828) bg_popup_call3_rect_pane_g4

0xb920,	// (0x00090830) bg_popup_call3_rect_pane_g5

0xb928,	// (0x00090838) bg_popup_call3_rect_pane_g6

0xb930,	// (0x00090840) bg_popup_call3_rect_pane_g7

0x467e,	// (0x0008958e) mup_visualizer_osc_pane

0x4694,	// (0x000895a4) mup_visualizer_spec_pane

0x6149,	// (0x0008b059) call3_video_qcif_pane_ParamLimits

0x6149,	// (0x0008b059) call3_video_qcif_pane

0x615c,	// (0x0008b06c) call3_video_qcif_uncrop_pane_ParamLimits

0x615c,	// (0x0008b06c) call3_video_qcif_uncrop_pane

0x616a,	// (0x0008b07a) call3_video_subqcif_pane_ParamLimits

0x616a,	// (0x0008b07a) call3_video_subqcif_pane

0x617e,	// (0x0008b08e) call3_video_subqcif_uncrop_pane_ParamLimits

0x617e,	// (0x0008b08e) call3_video_subqcif_uncrop_pane

0x61ef,	// (0x0008b0ff) popup_call3_audio_in_window_g4_ParamLimits

0x61ef,	// (0x0008b0ff) popup_call3_audio_in_window_g4

0x6108,	// (0x0008b018) mup_spec_half_pane

0x6111,	// (0x0008b021) mup_spec_half_pane_cp

0xbc01,	// (0x00090b11) mup_osc_middle_pane

0xbc0a,	// (0x00090b1a) mup_visualizer_osc_pane_g1

0x60e8,	// (0x0008aff8) mup_spec_bar_pane_ParamLimits

0x60e8,	// (0x0008aff8) mup_spec_bar_pane

0xbbee,	// (0x00090afe) mup_spec_bar_pane_g1

0xbbf8,	// (0x00090b08) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00094529) mup_spec_bar_pane_g

0x1e67,	// (0x00086d77) aid_cale_week_size_cell_pane_ParamLimits

0x1e81,	// (0x00086d91) bg_cale_heading_pane_ParamLimits

0x1e99,	// (0x00086da9) bg_cale_pane_cp01_ParamLimits

0x1eb6,	// (0x00086dc6) cale_week_corner_pane_ParamLimits

0x1ed5,	// (0x00086de5) cale_week_day_heading_pane_ParamLimits

0x1ef2,	// (0x00086e02) cale_week_scroll_pane_g1_ParamLimits

0x1f05,	// (0x00086e15) cale_week_scroll_pane_g2_ParamLimits

0x1f1d,	// (0x00086e2d) cale_week_scroll_pane_g3_ParamLimits

0x1f35,	// (0x00086e45) cale_week_scroll_pane_g4_ParamLimits

0x1f4d,	// (0x00086e5d) cale_week_scroll_pane_g5_ParamLimits

0x1f6d,	// (0x00086e7d) cale_week_scroll_pane_g6_ParamLimits

0x1f8d,	// (0x00086e9d) cale_week_scroll_pane_g7_ParamLimits

0x1fad,	// (0x00086ebd) cale_week_scroll_pane_g8_ParamLimits

0x1fd1,	// (0x00086ee1) cale_week_scroll_pane_g9_ParamLimits

0x1fe9,	// (0x00086ef9) cale_week_scroll_pane_g10_ParamLimits

0x2001,	// (0x00086f11) cale_week_scroll_pane_g11_ParamLimits

0x2019,	// (0x00086f29) cale_week_scroll_pane_g12_ParamLimits

0x2031,	// (0x00086f41) cale_week_scroll_pane_g13_ParamLimits

0x2031,	// (0x00086f41) cale_week_scroll_pane_g14_ParamLimits

0x2031,	// (0x00086f41) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000940c0) cale_week_scroll_pane_g_ParamLimits

0x206d,	// (0x00086f7d) cale_week_time_pane_ParamLimits

0x2091,	// (0x00086fa1) grid_cale_week_pane_ParamLimits

0x20b7,	// (0x00086fc7) listscroll_cale_week_pane_t1

0x20c9,	// (0x00086fd9) scroll_pane_cp08_ParamLimits

0x3052,	// (0x00087f62) cale_month_corner_pane_ParamLimits

0x346c,	// (0x0008837c) cale_month_pane_t1

0x347e,	// (0x0008838e) cale_month_week_pane_ParamLimits

0x3d0f,	// (0x00088c1f) popup_call_status_window_g1_ParamLimits

0x3d23,	// (0x00088c33) popup_call_status_window_g2_ParamLimits

0x3d37,	// (0x00088c47) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00094266) popup_call_status_window_g_ParamLimits

0x3d9f,	// (0x00088caf) aid_call2_pane

0x0634,	// (0x00085544) msg_header_pane_g1

0x4ad8,	// (0x000899e8) postcard_address2_pane_ParamLimits

0x4ad8,	// (0x000899e8) postcard_address2_pane

0x4aea,	// (0x000899fa) postcard_message2_pane_ParamLimits

0x4aea,	// (0x000899fa) postcard_message2_pane

0x6098,	// (0x0008afa8) message2_row_pane_ParamLimits

0x6098,	// (0x0008afa8) message2_row_pane

0x60b5,	// (0x0008afc5) address2_row_pane_ParamLimits

0x60b5,	// (0x0008afc5) address2_row_pane

0xbbbc,	// (0x00090acc) postcard_message2_row_pane_g1

0xbbc4,	// (0x00090ad4) postcard_message2_row_pane_t1

0xbbbc,	// (0x00090acc) address2_row_pane_g1

0xbbc4,	// (0x00090ad4) address2_row_pane_t1

0x2455,	// (0x00087365) aid_size_cell_vorec

0x15ac,	// (0x000864bc) main_rss_pane

0x60c8,	// (0x0008afd8) rss_list_single_pane_ParamLimits

0x60c8,	// (0x0008afd8) rss_list_single_pane

0xbbd2,	// (0x00090ae2) rss_list_single_pane_t1

0xbbe0,	// (0x00090af0) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00094524) rss_list_single_pane_t

0x15ac,	// (0x000864bc) main_camera2_pane

0x15ac,	// (0x000864bc) main_video2_pane

0x6332,	// (0x0008b242) cams_zoom_pane_cp2_ParamLimits

0x6332,	// (0x0008b242) cams_zoom_pane_cp2

0x6352,	// (0x0008b262) image2_vga_pane_ParamLimits

0x6352,	// (0x0008b262) image2_vga_pane

0x63a3,	// (0x0008b2b3) main_camera2_pane_g1_ParamLimits

0x63a3,	// (0x0008b2b3) main_camera2_pane_g1

0x63c3,	// (0x0008b2d3) main_camera2_pane_g2_ParamLimits

0x63c3,	// (0x0008b2d3) main_camera2_pane_g2

0x63e3,	// (0x0008b2f3) main_camera2_pane_g3_ParamLimits

0x63e3,	// (0x0008b2f3) main_camera2_pane_g3

0x6403,	// (0x0008b313) main_camera2_pane_g4_ParamLimits

0x6403,	// (0x0008b313) main_camera2_pane_g4

0x6423,	// (0x0008b333) main_camera2_pane_g5_ParamLimits

0x6423,	// (0x0008b333) main_camera2_pane_g5

0x6443,	// (0x0008b353) main_camera2_pane_g6_ParamLimits

0x6443,	// (0x0008b353) main_camera2_pane_g6

0x6463,	// (0x0008b373) main_camera2_pane_g7_ParamLimits

0x6463,	// (0x0008b373) main_camera2_pane_g7

0x6483,	// (0x0008b393) main_camera2_pane_g8_ParamLimits

0x6483,	// (0x0008b393) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00094545) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00094545) main_camera2_pane_g

0x64c3,	// (0x0008b3d3) main_camera2_pane_t1_ParamLimits

0x64c3,	// (0x0008b3d3) main_camera2_pane_t1

0x64f8,	// (0x0008b408) main_camera2_pane_t2_ParamLimits

0x64f8,	// (0x0008b408) main_camera2_pane_t2

0x651e,	// (0x0008b42e) main_camera2_pane_t3_ParamLimits

0x651e,	// (0x0008b42e) main_camera2_pane_t3

0x657c,	// (0x0008b48c) main_camera2_pane_t4_ParamLimits

0x657c,	// (0x0008b48c) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00094558) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00094558) main_camera2_pane_t

0x660e,	// (0x0008b51e) cams_zoom_pane_cp4_ParamLimits

0x660e,	// (0x0008b51e) cams_zoom_pane_cp4

0x6624,	// (0x0008b534) image2_cif_pane_ParamLimits

0x6624,	// (0x0008b534) image2_cif_pane

0x664f,	// (0x0008b55f) image2_subqcif_pane_ParamLimits

0x664f,	// (0x0008b55f) image2_subqcif_pane

0x6669,	// (0x0008b579) main_video2_pane_g1_ParamLimits

0x6669,	// (0x0008b579) main_video2_pane_g1

0x6683,	// (0x0008b593) main_video2_pane_g2_ParamLimits

0x6683,	// (0x0008b593) main_video2_pane_g2

0x6699,	// (0x0008b5a9) main_video2_pane_g3_ParamLimits

0x6699,	// (0x0008b5a9) main_video2_pane_g3

0x66af,	// (0x0008b5bf) main_video2_pane_g4_ParamLimits

0x66af,	// (0x0008b5bf) main_video2_pane_g4

0x66c5,	// (0x0008b5d5) main_video2_pane_g5_ParamLimits

0x66c5,	// (0x0008b5d5) main_video2_pane_g5

0x66db,	// (0x0008b5eb) main_video2_pane_g6_ParamLimits

0x66db,	// (0x0008b5eb) main_video2_pane_g6

0x0005,

0xf657,	// (0x00094567) main_video2_pane_g_ParamLimits

0xf657,	// (0x00094567) main_video2_pane_g

0x66f5,	// (0x0008b605) main_video2_pane_t1_ParamLimits

0x66f5,	// (0x0008b605) main_video2_pane_t1

0x6719,	// (0x0008b629) main_video2_pane_t2_ParamLimits

0x6719,	// (0x0008b629) main_video2_pane_t2

0x6767,	// (0x0008b677) main_video2_pane_t3_ParamLimits

0x6767,	// (0x0008b677) main_video2_pane_t3

0x0002,

0xf664,	// (0x00094574) main_video2_pane_t_ParamLimits

0xf664,	// (0x00094574) main_video2_pane_t

0x5bec,	// (0x0008aafc) call_muted_g2

0x0001,

0xf606,	// (0x00094516) call_muted_g

0x15ac,	// (0x000864bc) main_mup2_pane

0x67af,	// (0x0008b6bf) main_mup2_pane_g1_ParamLimits

0x67af,	// (0x0008b6bf) main_mup2_pane_g1

0x67bb,	// (0x0008b6cb) main_mup2_pane_g2_ParamLimits

0x67bb,	// (0x0008b6cb) main_mup2_pane_g2

0xbd72,	// (0x00090c82) main_mup_pane_g13_cp1

0xbd7a,	// (0x00090c8a) mup_volume_pane_cp1

0x67d7,	// (0x0008b6e7) main_mup2_pane_g4_ParamLimits

0x67d7,	// (0x0008b6e7) main_mup2_pane_g4

0x67e9,	// (0x0008b6f9) main_mup2_pane_g5_ParamLimits

0x67e9,	// (0x0008b6f9) main_mup2_pane_g5

0x67fb,	// (0x0008b70b) main_mup2_pane_g6_ParamLimits

0x67fb,	// (0x0008b70b) main_mup2_pane_g6

0x680d,	// (0x0008b71d) main_mup2_pane_g7_ParamLimits

0x680d,	// (0x0008b71d) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0009457b) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0009457b) main_mup2_pane_g

0x6825,	// (0x0008b735) main_mup2_pane_t1_ParamLimits

0x6825,	// (0x0008b735) main_mup2_pane_t1

0x683b,	// (0x0008b74b) main_mup2_pane_t2_ParamLimits

0x683b,	// (0x0008b74b) main_mup2_pane_t2

0x6851,	// (0x0008b761) main_mup2_pane_t3_ParamLimits

0x6851,	// (0x0008b761) main_mup2_pane_t3

0x6867,	// (0x0008b777) main_mup2_pane_t4_ParamLimits

0x6867,	// (0x0008b777) main_mup2_pane_t4

0x687f,	// (0x0008b78f) main_mup2_pane_t5_ParamLimits

0x687f,	// (0x0008b78f) main_mup2_pane_t5

0x6897,	// (0x0008b7a7) main_mup2_pane_t6_ParamLimits

0x6897,	// (0x0008b7a7) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0009458a) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0009458a) main_mup2_pane_t

0x68c7,	// (0x0008b7d7) mup2_visualizer_pane_ParamLimits

0x68c7,	// (0x0008b7d7) mup2_visualizer_pane

0x68f5,	// (0x0008b805) mup_progress_pane_cp_ParamLimits

0x68f5,	// (0x0008b805) mup_progress_pane_cp

0xbd54,	// (0x00090c64) mup_volume_pane_cp_ParamLimits

0xbd54,	// (0x00090c64) mup_volume_pane_cp

0x6909,	// (0x0008b819) mup2_visualizer_pane_g1_ParamLimits

0x6909,	// (0x0008b819) mup2_visualizer_pane_g1

0xbc93,	// (0x00090ba3) mup2_visualizer_pane_g2_ParamLimits

0xbc93,	// (0x00090ba3) mup2_visualizer_pane_g2

0x6920,	// (0x0008b830) mup2_visualizer_pane_g3_ParamLimits

0x6920,	// (0x0008b830) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00094597) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00094597) mup2_visualizer_pane_g

0x4ea5,	// (0x00089db5) aid_size_cell_fmradio

0x5d9e,	// (0x0008acae) aid_height_parent_landcape

0x2d69,	// (0x00087c79) wml_content_pane_cp

0x2d71,	// (0x00087c81) wml_tabs_pane

0x2d7a,	// (0x00087c8a) popup_wml_miniature_window

0x2d82,	// (0x00087c92) scroll_pane_cp021

0x2d96,	// (0x00087ca6) wml_content_pane_comp8

0x15ac,	// (0x000864bc) bg_popup_sub_pane_cp05

0xbcb1,	// (0x00090bc1) popup_wml_miniature_window_g1

0xbcb9,	// (0x00090bc9) wml_miniature_view_pane

0x692c,	// (0x0008b83c) aid_size_wml_view

0x6934,	// (0x0008b844) wml_miniature_view_pane_g1

0x693d,	// (0x0008b84d) wml_miniature_view_pane_g2

0x6946,	// (0x0008b856) wml_miniature_view_pane_g3

0x694e,	// (0x0008b85e) wml_miniature_view_pane_g4

0x6956,	// (0x0008b866) wml_miniature_view_pane_g5

0x695e,	// (0x0008b86e) wml_miniature_view_pane_g6

0x6966,	// (0x0008b876) wml_miniature_view_pane_g7

0x696e,	// (0x0008b87e) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0009459e) wml_miniature_view_pane_g

0xbcc1,	// (0x00090bd1) background_graphic_ParamLimits

0xbcc1,	// (0x00090bd1) background_graphic

0xbccd,	// (0x00090bdd) wml_tabs_2_pane

0xbcd6,	// (0x00090be6) wml_tabs_3_pane_ParamLimits

0xbcd6,	// (0x00090be6) wml_tabs_3_pane

0xbce8,	// (0x00090bf8) wml_tabs_4_pane_ParamLimits

0xbce8,	// (0x00090bf8) wml_tabs_4_pane

0xbcfe,	// (0x00090c0e) wml_tabs_5_pane_ParamLimits

0xbcfe,	// (0x00090c0e) wml_tabs_5_pane

0xbd18,	// (0x00090c28) wml_tabs_pane_g2_ParamLimits

0xbd18,	// (0x00090c28) wml_tabs_pane_g2

0xbd2c,	// (0x00090c3c) wml_tabs_pane_g3_ParamLimits

0xbd2c,	// (0x00090c3c) wml_tabs_pane_g3

0x6976,	// (0x0008b886) wml_tabs_2_active_pane_ParamLimits

0x6976,	// (0x0008b886) wml_tabs_2_active_pane

0x698a,	// (0x0008b89a) wml_tabs_2_passive_pane_ParamLimits

0x698a,	// (0x0008b89a) wml_tabs_2_passive_pane

0x699e,	// (0x0008b8ae) wml_tabs_3_active_pane_cp_ParamLimits

0x699e,	// (0x0008b8ae) wml_tabs_3_active_pane_cp

0x69b3,	// (0x0008b8c3) wml_tabs_3_passive_pane_ParamLimits

0x69b3,	// (0x0008b8c3) wml_tabs_3_passive_pane

0x69c6,	// (0x0008b8d6) wml_tabs_3_passive_pane_cp_ParamLimits

0x69c6,	// (0x0008b8d6) wml_tabs_3_passive_pane_cp

0x69dd,	// (0x0008b8ed) tabs_4_active_pane

0x69e5,	// (0x0008b8f5) tabs_4_passive_pane

0x69ef,	// (0x0008b8ff) tabs_4_passive_pane_cp

0x69f7,	// (0x0008b907) tabs_4_passive_pane_cp2

0x5ab9,	// (0x0008a9c9) aid_height_text

0x4650,	// (0x00089560) mup_volume_cont_pane_ParamLimits

0x4650,	// (0x00089560) mup_volume_cont_pane

0x189d,	// (0x000867ad) aid_size_cell_pinb

0x18a7,	// (0x000867b7) aid_size_list_pinb

0x68e1,	// (0x0008b7f1) mup2_volume_cont_pane_ParamLimits

0x68e1,	// (0x0008b7f1) mup2_volume_cont_pane

0xbd40,	// (0x00090c50) mup2_volume_cont_pane_g1_ParamLimits

0xbd40,	// (0x00090c50) mup2_volume_cont_pane_g1

0x1219,	// (0x00086129) aid_size_cell_touch_ParamLimits

0x1219,	// (0x00086129) aid_size_cell_touch

0x1446,	// (0x00086356) touch_pane_ParamLimits

0x1446,	// (0x00086356) touch_pane

0xeac9,	// (0x000939d9) main_rss2_pane

0xbd82,	// (0x00090c92) listscroll_rss2_pane

0xbd8b,	// (0x00090c9b) rss2_navigation_pane

0xbd93,	// (0x00090ca3) list_rss2_pane

0x3f59,	// (0x00088e69) scroll_pane_cp22

0xbd9b,	// (0x00090cab) rss2_navigation_pane_g1

0xbda4,	// (0x00090cb4) rss2_navigation_pane_g2

0xbdac,	// (0x00090cbc) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000945af) rss2_navigation_pane_g

0xbdb4,	// (0x00090cc4) rss2_navigation_pane_t1

0x6a01,	// (0x0008b911) rss2_list_single_pane_ParamLimits

0x6a01,	// (0x0008b911) rss2_list_single_pane

0xbdc2,	// (0x00090cd2) rss2_list_single_pane_t2

0xbdd0,	// (0x00090ce0) rss2_list_single_pane_t3_ParamLimits

0xbdd0,	// (0x00090ce0) rss2_list_single_pane_t3

0xbded,	// (0x00090cfd) rss2_list_single_pane_t4

0x38b0,	// (0x000887c0) smil_status_pane_g1

0xead3,	// (0x000939e3) main_image2_pane_ParamLimits

0xead3,	// (0x000939e3) main_image2_pane

0x64a3,	// (0x0008b3b3) main_camera2_pane_g9_ParamLimits

0x64a3,	// (0x0008b3b3) main_camera2_pane_g9

0x65d1,	// (0x0008b4e1) main_camera2_pane_t5_ParamLimits

0x65d1,	// (0x0008b4e1) main_camera2_pane_t5

0xbc63,	// (0x00090b73) main_camera2_pane_t6_ParamLimits

0xbc63,	// (0x00090b73) main_camera2_pane_t6

0x6a17,	// (0x0008b927) main_image2_pane_g1_ParamLimits

0x6a17,	// (0x0008b927) main_image2_pane_g1

0x4e5b,	// (0x00089d6b) smil2_video_pane_ParamLimits

0x4e5b,	// (0x00089d6b) smil2_video_pane

0xb0fb,	// (0x0009000b) aid_zoom_text_primary_cp

0xb13b,	// (0x0009004b) popup_preview_fixed_window

0x2c5f,	// (0x00087b6f) im_reading_pane_g1

0x631a,	// (0x0008b22a) cams2_bc_adjust_pane_cp_ParamLimits

0x631a,	// (0x0008b22a) cams2_bc_adjust_pane_cp

0x6600,	// (0x0008b510) cams2_bc_adjust_pane_ParamLimits

0x6600,	// (0x0008b510) cams2_bc_adjust_pane

0xbdfb,	// (0x00090d0b) cams2_bc_adjust_pane_g1

0xbe03,	// (0x00090d13) cams2_slider_pane

0xbe0c,	// (0x00090d1c) cams2_slider_pane_g1

0xbe15,	// (0x00090d25) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000945b6) cams2_slider_pane_g

0x19f2,	// (0x00086902) calc_display_pane_ParamLimits

0x1a1a,	// (0x0008692a) calc_paper_pane_ParamLimits

0x1a3d,	// (0x0008694d) grid_calc_pane_ParamLimits

0xb281,	// (0x00090191) popup_clock_digital_window_t1_ParamLimits

0x4ce2,	// (0x00089bf2) main_image_pane_t1

0x19d4,	// (0x000868e4) aid_size_cell_calc_ParamLimits

0x19d4,	// (0x000868e4) aid_size_cell_calc

0x5de4,	// (0x0008acf4) popup_blid_sat_info2_window_ParamLimits

0x5de4,	// (0x0008acf4) popup_blid_sat_info2_window

0xbe37,	// (0x00090d47) aid_size_cell_blid

0xbe3f,	// (0x00090d4f) bg_popup_window_pane_cp07

0xbe62,	// (0x00090d72) grid_popup_blid_pane

0xbe6c,	// (0x00090d7c) heading_pane_cp05_ParamLimits

0xbe6c,	// (0x00090d7c) heading_pane_cp05

0xbf36,	// (0x00090e46) cell_popup_blid_pane_ParamLimits

0xbf36,	// (0x00090e46) cell_popup_blid_pane

0xbf5a,	// (0x00090e6a) cell_popup_blid_pane_g1

0xbf62,	// (0x00090e72) cell_popup_blid_pane_t1

0x68b1,	// (0x0008b7c1) mup2_indicator_pane_ParamLimits

0x68b1,	// (0x0008b7c1) mup2_indicator_pane

0x245d,	// (0x0008736d) mup2_visualizer_osc_pane

0xbc9f,	// (0x00090baf) mup2_visualizer_spec_pane_ParamLimits

0xbc9f,	// (0x00090baf) mup2_visualizer_spec_pane

0x6a2d,	// (0x0008b93d) mup2_spec_half_pane

0x6a36,	// (0x0008b946) mup2_spec_half_pane_cp

0x6a3e,	// (0x0008b94e) mup2_spec_bar_pane_ParamLimits

0x6a3e,	// (0x0008b94e) mup2_spec_bar_pane

0xbbee,	// (0x00090afe) mup2_spec_bar_pane_g1

0xbbf8,	// (0x00090b08) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00094529) mup2_spec_bar_pane_g

0x6a5e,	// (0x0008b96e) mup2_osc_middle_pane

0xbc0a,	// (0x00090b1a) mup2_visualizer_osc_pane_g1

0xeb01,	// (0x00093a11) popup_number_entry_window_t1_ParamLimits

0xeb14,	// (0x00093a24) popup_number_entry_window_t2_ParamLimits

0xeb26,	// (0x00093a36) popup_number_entry_window_t3_ParamLimits

0x1498,	// (0x000863a8) popup_number_entry_window_t5_ParamLimits

0x1498,	// (0x000863a8) popup_number_entry_window_t5

0xf0ca,	// (0x00093fda) popup_number_entry_window_t_ParamLimits

0xeb38,	// (0x00093a48) text_title_cp2_ParamLimits

0xb341,	// (0x00090251) aid_hotspot_pointer_text2_pane

0xb367,	// (0x00090277) main_viewer_pane_g9_ParamLimits

0xb367,	// (0x00090277) main_viewer_pane_g9

0x346c,	// (0x0008837c) cale_month_pane_t1_ParamLimits

0x392a,	// (0x0008883a) bg_cale_pane_ParamLimits

0x3942,	// (0x00088852) list_cale_pane_ParamLimits

0x3953,	// (0x00088863) listscroll_cale_day_pane_t1

0x3965,	// (0x00088875) scroll_pane_cp09_ParamLimits

0x4702,	// (0x00089612) main_mup_eq_pane_t1_ParamLimits

0x4702,	// (0x00089612) main_mup_eq_pane_t1

0x471c,	// (0x0008962c) main_mup_eq_pane_t2_ParamLimits

0x471c,	// (0x0008962c) main_mup_eq_pane_t2

0x4736,	// (0x00089646) main_mup_eq_pane_t3_ParamLimits

0x4736,	// (0x00089646) main_mup_eq_pane_t3

0x4752,	// (0x00089662) main_mup_eq_pane_t4_ParamLimits

0x4752,	// (0x00089662) main_mup_eq_pane_t4

0x476e,	// (0x0008967e) main_mup_eq_pane_t5_ParamLimits

0x476e,	// (0x0008967e) main_mup_eq_pane_t5

0x478a,	// (0x0008969a) main_mup_eq_pane_t6_ParamLimits

0x478a,	// (0x0008969a) main_mup_eq_pane_t6

0x479e,	// (0x000896ae) main_mup_eq_pane_t7_ParamLimits

0x479e,	// (0x000896ae) main_mup_eq_pane_t7

0x47b2,	// (0x000896c2) main_mup_eq_pane_t8_ParamLimits

0x47b2,	// (0x000896c2) main_mup_eq_pane_t8

0x47c6,	// (0x000896d6) main_mup_eq_pane_t9_ParamLimits

0x47c6,	// (0x000896d6) main_mup_eq_pane_t9

0x47e0,	// (0x000896f0) main_mup_eq_pane_t10_ParamLimits

0x47e0,	// (0x000896f0) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00094365) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00094365) main_mup_eq_pane_t

0x488f,	// (0x0008979f) mup_equalizer_pane_cp5_ParamLimits

0x48a3,	// (0x000897b3) mup_equalizer_pane_cp6_ParamLimits

0x48b7,	// (0x000897c7) mup_equalizer_pane_cp7_ParamLimits

0xeac9,	// (0x000939d9) main_gallery_pane

0xbc13,	// (0x00090b23) smil2_volume_pane

0xbc1b,	// (0x00090b2b) smil_status_volume_pane_g1_ParamLimits

0xbc2e,	// (0x00090b3e) smil_status_volume_pane_g2_ParamLimits

0xbc41,	// (0x00090b51) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0009452e) smil_status_volume_pane_g_ParamLimits

0xbe3f,	// (0x00090d4f) bg_popup_window_pane_cp07_ParamLimits

0xbe4d,	// (0x00090d5d) blid_firmament_pane

0x6a67,	// (0x0008b977) aid_size_cell_gallery_ParamLimits

0x6a67,	// (0x0008b977) aid_size_cell_gallery

0x6a7d,	// (0x0008b98d) grid_gallery_pane_ParamLimits

0x6a7d,	// (0x0008b98d) grid_gallery_pane

0x6a96,	// (0x0008b9a6) cell_gallery_pane_ParamLimits

0x6a96,	// (0x0008b9a6) cell_gallery_pane

0xbf70,	// (0x00090e80) bg_cell_gallery_focus_pane_ParamLimits

0xbf70,	// (0x00090e80) bg_cell_gallery_focus_pane

0xbf82,	// (0x00090e92) cell_gallery_pane_g1_ParamLimits

0xbf82,	// (0x00090e92) cell_gallery_pane_g1

0x6adf,	// (0x0008b9ef) cell_gallery_pane_g2_ParamLimits

0x6adf,	// (0x0008b9ef) cell_gallery_pane_g2

0x6aec,	// (0x0008b9fc) cell_gallery_pane_g3_ParamLimits

0x6aec,	// (0x0008b9fc) cell_gallery_pane_g3

0xbf8e,	// (0x00090e9e) cell_gallery_pane_g4_ParamLimits

0xbf8e,	// (0x00090e9e) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000945dc) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000945dc) cell_gallery_pane_g

0xbf9a,	// (0x00090eaa) bg_cell_gallery_focus_pane_g1

0xbfa2,	// (0x00090eb2) bg_cell_gallery_focus_pane_g2

0xbfaa,	// (0x00090eba) bg_cell_gallery_focus_pane_g3

0xbfb2,	// (0x00090ec2) bg_cell_gallery_focus_pane_g4

0xbfba,	// (0x00090eca) bg_cell_gallery_focus_pane_g5

0xbfc2,	// (0x00090ed2) bg_cell_gallery_focus_pane_g6

0xbfca,	// (0x00090eda) bg_cell_gallery_focus_pane_g7

0xbfd2,	// (0x00090ee2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000945e5) bg_cell_gallery_focus_pane_g

0xbfda,	// (0x00090eea) aid_firma_cardinal

0xbfee,	// (0x00090efe) blid_firmament_pane_t1

0xc005,	// (0x00090f15) blid_firmament_pane_t2

0xc01c,	// (0x00090f2c) blid_firmament_pane_t3

0xc033,	// (0x00090f43) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000945f6) blid_firmament_pane_t

0xc04a,	// (0x00090f5a) blid_sat_info_pane

0xc05a,	// (0x00090f6a) blid_sat_info_pane_g1

0xc05a,	// (0x00090f6a) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000945ff) blid_sat_info_pane_g

0xc064,	// (0x00090f74) blid_sat_info_pane_t1

0xc072,	// (0x00090f82) smil2_volume_content_pane

0xc07b,	// (0x00090f8b) smil2_volume_pane_g1

0xc083,	// (0x00090f93) smil2_volume_content_pane_g1

0xc08c,	// (0x00090f9c) smil2_volume_content_pane_g2

0xc095,	// (0x00090fa5) smil2_volume_content_pane_g3

0xc09e,	// (0x00090fae) smil2_volume_content_pane_g4

0xc0a7,	// (0x00090fb7) smil2_volume_content_pane_g5

0xc0b0,	// (0x00090fc0) smil2_volume_content_pane_g6

0xc0b9,	// (0x00090fc9) smil2_volume_content_pane_g7

0xc0c2,	// (0x00090fd2) smil2_volume_content_pane_g8

0xc0cb,	// (0x00090fdb) smil2_volume_content_pane_g9

0xc0d4,	// (0x00090fe4) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00094604) smil2_volume_content_pane_g

0x2174,	// (0x00087084) cale_week_day_heading_pane_t1_ParamLimits

0x219e,	// (0x000870ae) cale_week_day_heading_pane_t2_ParamLimits

0x21cd,	// (0x000870dd) cale_week_day_heading_pane_t3_ParamLimits

0x21fc,	// (0x0008710c) cale_week_day_heading_pane_t4_ParamLimits

0x222b,	// (0x0008713b) cale_week_day_heading_pane_t5_ParamLimits

0x2262,	// (0x00087172) cale_week_day_heading_pane_t6_ParamLimits

0x2299,	// (0x000871a9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000940e1) cale_week_day_heading_pane_t_ParamLimits

0x22c3,	// (0x000871d3) bg_cale_side_pane_ParamLimits

0x22d1,	// (0x000871e1) cale_week_time_pane_t1_ParamLimits

0x22eb,	// (0x000871fb) cale_week_time_pane_t2_ParamLimits

0x2305,	// (0x00087215) cale_week_time_pane_t3_ParamLimits

0x231f,	// (0x0008722f) cale_week_time_pane_t4_ParamLimits

0x2339,	// (0x00087249) cale_week_time_pane_t5_ParamLimits

0x2353,	// (0x00087263) cale_week_time_pane_t6_ParamLimits

0x236d,	// (0x0008727d) cale_week_time_pane_t7_ParamLimits

0x2387,	// (0x00087297) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000940f0) cale_week_time_pane_t_ParamLimits

0x23a7,	// (0x000872b7) cell_cale_week_pane_g2_ParamLimits

0x22c3,	// (0x000871d3) bg_cale_side_pane_cp01_ParamLimits

0x36ab,	// (0x000885bb) cale_month_week_pane_t1_ParamLimits

0x36c4,	// (0x000885d4) cale_month_week_pane_t2_ParamLimits

0x36dd,	// (0x000885ed) cale_month_week_pane_t3_ParamLimits

0x36f6,	// (0x00088606) cale_month_week_pane_t4_ParamLimits

0x370f,	// (0x0008861f) cale_month_week_pane_t5_ParamLimits

0x3728,	// (0x00088638) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000941c5) cale_month_week_pane_t_ParamLimits

0xb1f5,	// (0x00090105) cell_cale_month_pane_g1_ParamLimits

0xeac9,	// (0x000939d9) main_cale_event_viewer_pane

0xeac9,	// (0x000939d9) listscroll_cale_event_viewer_pane

0xc0dd,	// (0x00090fed) list_cale_ev_pane

0xc0e5,	// (0x00090ff5) scroll_pane_cp023

0xc0f1,	// (0x00091001) field_cale_ev_pane_ParamLimits

0xc0f1,	// (0x00091001) field_cale_ev_pane

0xc10f,	// (0x0009101f) field_cale_ev_content_pane_ParamLimits

0xc10f,	// (0x0009101f) field_cale_ev_content_pane

0xc11b,	// (0x0009102b) field_cale_ev_pane_g1_ParamLimits

0xc11b,	// (0x0009102b) field_cale_ev_pane_g1

0xc127,	// (0x00091037) field_cale_ev_pane_g2_ParamLimits

0xc127,	// (0x00091037) field_cale_ev_pane_g2

0xc13f,	// (0x0009104f) field_cale_ev_pane_g3_ParamLimits

0xc13f,	// (0x0009104f) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00094619) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00094619) field_cale_ev_pane_g

0xc157,	// (0x00091067) field_cale_ev_pane_t1_ParamLimits

0xc157,	// (0x00091067) field_cale_ev_pane_t1

0x1dfe,	// (0x00086d0e) field_cale_ev_content_pane_t1_ParamLimits

0x1dfe,	// (0x00086d0e) field_cale_ev_content_pane_t1

0x495f,	// (0x0008986f) bg_button_pane_cp01

0x1e4c,	// (0x00086d5c) listscroll_cale_week_pane_ParamLimits

0x1e5e,	// (0x00086d6e) popup_toolbar_window_cp01

0x20b7,	// (0x00086fc7) listscroll_cale_week_pane_t1_ParamLimits

0x1e4c,	// (0x00086d5c) listscroll_cale_day_pane_ParamLimits

0x1e5e,	// (0x00086d6e) popup_toolbar_window_cp02

0x3953,	// (0x00088863) listscroll_cale_day_pane_t1_ParamLimits

0x1e4c,	// (0x00086d5c) main_cale_month_pane_ParamLimits

0xbb8c,	// (0x00090a9c) popup_toolbar_window_cp03_ParamLimits

0xbb8c,	// (0x00090a9c) popup_toolbar_window_cp03

0x4cc0,	// (0x00089bd0) main_image_pane_g2_ParamLimits

0x4cc0,	// (0x00089bd0) main_image_pane_g2

0x4cd1,	// (0x00089be1) main_image_pane_g3_ParamLimits

0x4cd1,	// (0x00089be1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000943f7) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000943f7) main_image_pane_g

0x4ce2,	// (0x00089bf2) main_image_pane_t1_ParamLimits

0x4cf9,	// (0x00089c09) main_image_pane_t2_ParamLimits

0x4cf9,	// (0x00089c09) main_image_pane_t2

0x4d0b,	// (0x00089c1b) main_image_pane_t3_ParamLimits

0x4d0b,	// (0x00089c1b) main_image_pane_t3

0x4d33,	// (0x00089c43) main_image_pane_t4_ParamLimits

0x4d33,	// (0x00089c43) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000943fe) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000943fe) main_image_pane_t

0x4d53,	// (0x00089c63) popup_image_details_window_cp01

0x4d5d,	// (0x00089c6d) popup_toobar_trans_pane_cp01_ParamLimits

0x4d5d,	// (0x00089c6d) popup_toobar_trans_pane_cp01

0x5eb5,	// (0x0008adc5) popup_image_details_window_ParamLimits

0x5eb5,	// (0x0008adc5) popup_image_details_window

0xbb5f,	// (0x00090a6f) popup_image_focus_window

0x62d4,	// (0x0008b1e4) camera2_autofocus_pane_ParamLimits

0x62d4,	// (0x0008b1e4) camera2_autofocus_pane

0xeac9,	// (0x000939d9) bg_popup_sub_pane_cp06

0xc16e,	// (0x0009107e) popup_image_focus_window_g1

0xc176,	// (0x00091086) popup_image_focus_window_g2

0xc17e,	// (0x0009108e) popup_image_focus_window_g3

0xc186,	// (0x00091096) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00094620) popup_image_focus_window_g

0xc18e,	// (0x0009109e) popup_image_focus_window_t1

0xc19c,	// (0x000910ac) popup_image_focus_window_t2

0xc1ac,	// (0x000910bc) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00094629) popup_image_focus_window_t

0xc1ba,	// (0x000910ca) camera2_autofocus_pane_g1

0xead3,	// (0x000939e3) bg_tb_trans_pane_cp01

0xc1c8,	// (0x000910d8) popup_image_details_window_g1

0xc1db,	// (0x000910eb) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0009463b) popup_image_details_window_g

0xc204,	// (0x00091114) popup_image_details_window_t1

0xc216,	// (0x00091126) popup_image_details_window_t2

0xc22f,	// (0x0009113f) popup_image_details_window_t3

0xc243,	// (0x00091153) popup_image_details_window_t4

0xc25e,	// (0x0009116e) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00094642) popup_image_details_window_t

0x1b65,	// (0x00086a75) bg_calc_paper_pane_ParamLimits

0xeac9,	// (0x000939d9) grid_highlight_pane_cp013

0xb14d,	// (0x0009005d) list_calc_pane_ParamLimits

0xb15f,	// (0x0009006f) scroll_pane_cp024

0x1b79,	// (0x00086a89) bg_calc_display_pane_ParamLimits

0x1b85,	// (0x00086a95) calc_display_pane_t1_ParamLimits

0x1b97,	// (0x00086aa7) calc_display_pane_t2_ParamLimits

0xb167,	// (0x00090077) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00094061) calc_display_pane_t_ParamLimits

0x1caa,	// (0x00086bba) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009407e) cell_calc_pane_g

0x1cb3,	// (0x00086bc3) cell_calc_pane_t1

0x1cc2,	// (0x00086bd2) grid_highlight_pane_cp02_ParamLimits

0x1cd8,	// (0x00086be8) toolbar_button_pane_cp01_ParamLimits

0x1cd8,	// (0x00086be8) toolbar_button_pane_cp01

0x4d9f,	// (0x00089caf) temp_image_control_pane_ParamLimits

0x4d9f,	// (0x00089caf) temp_image_control_pane

0xead3,	// (0x000939e3) main_mp3_pane

0xc278,	// (0x00091188) temp_image_control_pane_g1_ParamLimits

0xc278,	// (0x00091188) temp_image_control_pane_g1

0xc286,	// (0x00091196) temp_image_control_pane_g2_ParamLimits

0xc286,	// (0x00091196) temp_image_control_pane_g2

0xc298,	// (0x000911a8) temp_image_control_pane_g3_ParamLimits

0xc298,	// (0x000911a8) temp_image_control_pane_g3

0x6b29,	// (0x0008ba39) temp_image_control_pane_g4_ParamLimits

0x6b29,	// (0x0008ba39) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0009464d) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0009464d) temp_image_control_pane_g

0xc278,	// (0x00091188) main_mp3_pane_g1

0x6b3c,	// (0x0008ba4c) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00094656) main_mp3_pane_g

0xc2db,	// (0x000911eb) main_mp3_pane_t1

0x2579,	// (0x00087489) main_camera_pane_g8_ParamLimits

0x2579,	// (0x00087489) main_camera_pane_g8

0x2726,	// (0x00087636) main_video_pane_g7_ParamLimits

0x2726,	// (0x00087636) main_video_pane_g7

0xbc81,	// (0x00090b91) main_camera2_pane_t7_ParamLimits

0xbc81,	// (0x00090b91) main_camera2_pane_t7

0x2d29,	// (0x00087c39) scroll_pane_cp025_ParamLimits

0x2d29,	// (0x00087c39) scroll_pane_cp025

0x2d3d,	// (0x00087c4d) scroll_pane_cp026_ParamLimits

0x2d3d,	// (0x00087c4d) scroll_pane_cp026

0x2d4c,	// (0x00087c5c) wml_content_pane_ParamLimits

0xeac9,	// (0x000939d9) main_touch_calib_pane

0x6c10,	// (0x0008bb20) main_touch_calib_pane_g1

0x6c22,	// (0x0008bb32) main_touch_calib_pane_g2

0x6c34,	// (0x0008bb44) main_touch_calib_pane_g3

0x6c46,	// (0x0008bb56) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00094674) main_touch_calib_pane_g

0x6c58,	// (0x0008bb68) main_touch_calib_pane_t1

0x6c72,	// (0x0008bb82) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0009467d) main_touch_calib_pane_t

0x4201,	// (0x00089111) mup_progress_pane_cp02

0x4236,	// (0x00089146) navi_pane_g1

0x42f1,	// (0x00089201) navi_pane_mp_t3

0xead3,	// (0x000939e3) main_mp3_pane_ParamLimits

0x6040,	// (0x0008af50) navi_pane_ParamLimits

0xc278,	// (0x00091188) main_mp3_pane_g1_ParamLimits

0x6b3c,	// (0x0008ba4c) main_mp3_pane_g2_ParamLimits

0x6b4a,	// (0x0008ba5a) main_mp3_pane_g3_ParamLimits

0x6b4a,	// (0x0008ba5a) main_mp3_pane_g3

0x6b58,	// (0x0008ba68) main_mp3_pane_g4_ParamLimits

0x6b58,	// (0x0008ba68) main_mp3_pane_g4

0xc2a8,	// (0x000911b8) main_mp3_pane_g5_ParamLimits

0xc2a8,	// (0x000911b8) main_mp3_pane_g5

0xc2b6,	// (0x000911c6) main_mp3_pane_g6_ParamLimits

0xc2b6,	// (0x000911c6) main_mp3_pane_g6

0xc2c3,	// (0x000911d3) main_mp3_pane_g7_ParamLimits

0xc2c3,	// (0x000911d3) main_mp3_pane_g7

0xc2cf,	// (0x000911df) main_mp3_pane_g8_ParamLimits

0xc2cf,	// (0x000911df) main_mp3_pane_g8

0xf746,	// (0x00094656) main_mp3_pane_g_ParamLimits

0x6b64,	// (0x0008ba74) main_mp3_pane_t2

0x6b72,	// (0x0008ba82) main_mp3_pane_t3

0xc2e9,	// (0x000911f9) main_mp3_pane_t4

0xc2f7,	// (0x00091207) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00094667) main_mp3_pane_t

0xc305,	// (0x00091215) mup_progress_pane_cp01

0xb0fb,	// (0x0009000b) aid_zoom_text_secondary2

0xc0dd,	// (0x00090fed) list_cale_ev2_pane

0xc0e5,	// (0x00090ff5) scroll_pane_cp023_ParamLimits

0x6cc8,	// (0x0008bbd8) field_cale_ev2_pane_ParamLimits

0x6cc8,	// (0x0008bbd8) field_cale_ev2_pane

0xc30d,	// (0x0009121d) field_cale_ev2_pane_g1_ParamLimits

0xc30d,	// (0x0009121d) field_cale_ev2_pane_g1

0xc319,	// (0x00091229) field_cale_ev2_pane_g2_ParamLimits

0xc319,	// (0x00091229) field_cale_ev2_pane_g2

0xc331,	// (0x00091241) field_cale_ev2_pane_g3_ParamLimits

0xc331,	// (0x00091241) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00094688) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00094688) field_cale_ev2_pane_g

0xc355,	// (0x00091265) field_cale_ev2_pane_t1_ParamLimits

0xc355,	// (0x00091265) field_cale_ev2_pane_t1

0xc36c,	// (0x0009127c) field_cale_ev2_pane_t2_ParamLimits

0xc36c,	// (0x0009127c) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00094691) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00094691) field_cale_ev2_pane_t

0x4a8e,	// (0x0008999e) main_postcard_pane_g5_ParamLimits

0x4a8e,	// (0x0008999e) main_postcard_pane_g5

0x4aa4,	// (0x000899b4) main_postcard_pane_g6_ParamLimits

0x4aa4,	// (0x000899b4) main_postcard_pane_g6

0x24c6,	// (0x000873d6) camera2_autofocus_pane_cp_ParamLimits

0x24c6,	// (0x000873d6) camera2_autofocus_pane_cp

0xead3,	// (0x000939e3) main_mup3_pane

0x6d09,	// (0x0008bc19) main_mup3_pane_g1_ParamLimits

0x6d09,	// (0x0008bc19) main_mup3_pane_g1

0x6d2b,	// (0x0008bc3b) main_mup3_pane_g2_ParamLimits

0x6d2b,	// (0x0008bc3b) main_mup3_pane_g2

0x6dab,	// (0x0008bcbb) main_mup3_pane_g3_ParamLimits

0x6dab,	// (0x0008bcbb) main_mup3_pane_g3

0x6df1,	// (0x0008bd01) main_mup3_pane_g4_ParamLimits

0x6df1,	// (0x0008bd01) main_mup3_pane_g4

0x6e37,	// (0x0008bd47) main_mup3_pane_g5_ParamLimits

0x6e37,	// (0x0008bd47) main_mup3_pane_g5

0x6e7d,	// (0x0008bd8d) main_mup3_pane_g6_ParamLimits

0x6e7d,	// (0x0008bd8d) main_mup3_pane_g6

0xc381,	// (0x00091291) main_mup3_pane_g7_ParamLimits

0xc381,	// (0x00091291) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000946a1) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000946a1) main_mup3_pane_g

0x6efb,	// (0x0008be0b) main_mup3_pane_t1_ParamLimits

0x6efb,	// (0x0008be0b) main_mup3_pane_t1

0x6f6f,	// (0x0008be7f) main_mup3_pane_t2_ParamLimits

0x6f6f,	// (0x0008be7f) main_mup3_pane_t2

0x7043,	// (0x0008bf53) main_mup3_pane_t4_ParamLimits

0x7043,	// (0x0008bf53) main_mup3_pane_t4

0x7099,	// (0x0008bfa9) main_mup3_pane_t5_ParamLimits

0x7099,	// (0x0008bfa9) main_mup3_pane_t5

0x7155,	// (0x0008c065) main_mup3_pane_t6_ParamLimits

0x7155,	// (0x0008c065) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000946b2) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000946b2) main_mup3_pane_t

0x720d,	// (0x0008c11d) mup3_progress_pane_ParamLimits

0x720d,	// (0x0008c11d) mup3_progress_pane

0x7299,	// (0x0008c1a9) popup_mup3_control_window_ParamLimits

0x7299,	// (0x0008c1a9) popup_mup3_control_window

0xc38f,	// (0x0009129f) popup_mup3_text_window

0x72cb,	// (0x0008c1db) mup3_progress_pane_t1

0x72ea,	// (0x0008c1fa) mup3_progress_pane_t2

0xc397,	// (0x000912a7) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000946bf) mup3_progress_pane_t

0xc3b4,	// (0x000912c4) mup_progress_pane_cp03

0xeac9,	// (0x000939d9) bg_tb_trans_pane_cp04

0x7309,	// (0x0008c219) mup3_volume_pane

0x7311,	// (0x0008c221) popup_mup3_control_window_g1

0x731a,	// (0x0008c22a) mup3_volume_pane_g1

0x7323,	// (0x0008c233) mup3_volume_pane_g2

0x732c,	// (0x0008c23c) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000946c6) mup3_volume_pane_g

0xeac9,	// (0x000939d9) bg_tb_trans_pane_cp03

0xc3c4,	// (0x000912d4) popup_mup3_text_window_g1

0xc3cc,	// (0x000912dc) popup_mup3_text_window_t1

0x1c79,	// (0x00086b89) list_calc_item_pane_g1_ParamLimits

0xbd69,	// (0x00090c79) mup_volume_pane_cp_g1

0x6c8c,	// (0x0008bb9c) main_touch_calib_pane_t3

0x6ca0,	// (0x0008bbb0) main_touch_calib_pane_t4

0x6cb4,	// (0x0008bbc4) main_touch_calib_pane_t5

0xb0d7,	// (0x0008ffe7) aid_cell_size_toolbar2

0xb0df,	// (0x0008ffef) aid_popup3_width_pane

0xb0eb,	// (0x0008fffb) aid_zoom_text_msg_primary

0x24a5,	// (0x000873b5) vorec_t7

0x1be0,	// (0x00086af0) bg_calc_paper_pane_g1_ParamLimits

0x1bec,	// (0x00086afc) bg_calc_paper_pane_g2_ParamLimits

0x1bf8,	// (0x00086b08) bg_calc_paper_pane_g3_ParamLimits

0x1c04,	// (0x00086b14) bg_calc_paper_pane_g4_ParamLimits

0x1c10,	// (0x00086b20) bg_calc_paper_pane_g5_ParamLimits

0x1c1c,	// (0x00086b2c) bg_calc_paper_pane_g6_ParamLimits

0x1c2b,	// (0x00086b3b) bg_calc_paper_pane_g7_ParamLimits

0x1c3a,	// (0x00086b4a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00094068) bg_calc_paper_pane_g_ParamLimits

0x1c4d,	// (0x00086b5d) calc_bg_paper_pane_g9_ParamLimits

0x261e,	// (0x0008752e) image_qvga_pane_ParamLimits

0x261e,	// (0x0008752e) image_qvga_pane

0x1807,	// (0x00086717) bg_popup_sub_pane_cp04_ParamLimits

0x4c1e,	// (0x00089b2e) popup_mup_playback_window_g1_ParamLimits

0x4c2a,	// (0x00089b3a) popup_mup_playback_window_t1_ParamLimits

0x4c3f,	// (0x00089b4f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000943f2) popup_mup_playback_window_t_ParamLimits

0x67cb,	// (0x0008b6db) main_mup2_pane_g3_ParamLimits

0x67cb,	// (0x0008b6db) main_mup2_pane_g3

0x29c8,	// (0x000878d8) popup_toolbar_window_cp04

0x5434,	// (0x0008a344) popup_call2_audio_second_window_g3_ParamLimits

0x5434,	// (0x0008a344) popup_call2_audio_second_window_g3

0x583e,	// (0x0008a74e) popup_call2_audio_first_window_g4_ParamLimits

0x583e,	// (0x0008a74e) popup_call2_audio_first_window_g4

0xb792,	// (0x000906a2) popup_call2_audio_in_window_g4_ParamLimits

0xb792,	// (0x000906a2) popup_call2_audio_in_window_g4

0x4c54,	// (0x00089b64) aid_area_sk_bg_cut_ParamLimits

0x4c54,	// (0x00089b64) aid_area_sk_bg_cut

0x4c72,	// (0x00089b82) aid_area_sk_bg_cut_2_ParamLimits

0x4c72,	// (0x00089b82) aid_area_sk_bg_cut_2

0x6acf,	// (0x0008b9df) aid_placing_details_win

0x6ad7,	// (0x0008b9e7) aid_placing_details_win_2

0xc1ba,	// (0x000910ca) camera2_autofocus_pane_g1_ParamLimits

0x13df,	// (0x000862ef) popup_fixed_preview_cale_window_ParamLimits

0x13df,	// (0x000862ef) popup_fixed_preview_cale_window

0x43b1,	// (0x000892c1) navi_slider_pane_g3

0x43ba,	// (0x000892ca) navi_slider_pane_g4

0x43c3,	// (0x000892d3) navi_slider_pane_g5

0x43b1,	// (0x000892c1) navi_slider_pane_g6

0xb2a7,	// (0x000901b7) navi_slider_pane_g7

0x48d4,	// (0x000897e4) mup_scale_pane_g3

0x48dd,	// (0x000897ed) mup_scale_pane_g4

0x48e6,	// (0x000897f6) mup_scale_pane_g5

0x48ef,	// (0x000897ff) mup_scale_pane_g6

0x48f8,	// (0x00089808) mup_scale_pane_g7

0x43b1,	// (0x000892c1) cams2_slider_pane_g3

0xbe1e,	// (0x00090d2e) cams2_slider_pane_g4

0xbe26,	// (0x00090d36) cams2_slider_pane_g5

0x43b1,	// (0x000892c1) cams2_slider_pane_g6

0xbe2e,	// (0x00090d3e) cams2_slider_pane_g7

0xc05a,	// (0x00090f6a) camera2_autofocus_pane_cp_g1

0xbb33,	// (0x00090a43) bg_popup_preview_window_pane_cp02_ParamLimits

0xbb33,	// (0x00090a43) bg_popup_preview_window_pane_cp02

0xc3da,	// (0x000912ea) list_fp_cale_pane_ParamLimits

0xc3da,	// (0x000912ea) list_fp_cale_pane

0xc3e6,	// (0x000912f6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc3e6,	// (0x000912f6) popup_fixed_preview_cale_window_t1

0x7335,	// (0x0008c245) popup_fixed_preview_cale_window_t2_ParamLimits

0x7335,	// (0x0008c245) popup_fixed_preview_cale_window_t2

0x734a,	// (0x0008c25a) popup_fixed_preview_cale_window_t3_ParamLimits

0x734a,	// (0x0008c25a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000946cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000946cd) popup_fixed_preview_cale_window_t

0x735f,	// (0x0008c26f) list_single_fp_cale_pane_ParamLimits

0x735f,	// (0x0008c26f) list_single_fp_cale_pane

0xc404,	// (0x00091314) list_single_fp_cale_pane_g1_ParamLimits

0xc404,	// (0x00091314) list_single_fp_cale_pane_g1

0xc410,	// (0x00091320) list_single_fp_cale_pane_g2_ParamLimits

0xc410,	// (0x00091320) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000946d4) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000946d4) list_single_fp_cale_pane_g

0xc429,	// (0x00091339) list_single_fp_cale_pane_t1_ParamLimits

0xc429,	// (0x00091339) list_single_fp_cale_pane_t1

0xc43b,	// (0x0009134b) list_single_fp_cale_pane_t2_ParamLimits

0xc43b,	// (0x0009134b) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000946db) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000946db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeac9,	// (0x000939d9) main_dialer_pane

0x7375,	// (0x0008c285) aid_cell_size_keypad

0x737f,	// (0x0008c28f) dialer_ne_pane

0x7387,	// (0x0008c297) grid_dialer_command_1_pane

0x738f,	// (0x0008c29f) grid_dialer_command_2_pane

0x7397,	// (0x0008c2a7) grid_dialer_keypad_pane

0x73a9,	// (0x0008c2b9) bg_popup_call_pane_cp06_ParamLimits

0x73a9,	// (0x0008c2b9) bg_popup_call_pane_cp06

0x73b5,	// (0x0008c2c5) dialer_ne_clear_pane_ParamLimits

0x73b5,	// (0x0008c2c5) dialer_ne_clear_pane

0xc46e,	// (0x0009137e) dialer_ne_pane_g1

0xc476,	// (0x00091386) dialer_ne_pane_t1_ParamLimits

0xc476,	// (0x00091386) dialer_ne_pane_t1

0x73c1,	// (0x0008c2d1) dialer_ne_pane_t2_ParamLimits

0x73c1,	// (0x0008c2d1) dialer_ne_pane_t2

0x73eb,	// (0x0008c2fb) dialer_ne_pane_t3_ParamLimits

0x73eb,	// (0x0008c2fb) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000946e0) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000946e0) dialer_ne_pane_t

0x741b,	// (0x0008c32b) dialer_ne_pane_t3_copy1_ParamLimits

0x741b,	// (0x0008c32b) dialer_ne_pane_t3_copy1

0x744a,	// (0x0008c35a) cell_dialer_keypad_pane_ParamLimits

0x744a,	// (0x0008c35a) cell_dialer_keypad_pane

0x7461,	// (0x0008c371) cell_dialer_command_1_pane_ParamLimits

0x7461,	// (0x0008c371) cell_dialer_command_1_pane

0x7477,	// (0x0008c387) cell_dialer_command_2_pane_ParamLimits

0x7477,	// (0x0008c387) cell_dialer_command_2_pane

0xc488,	// (0x00091398) bg_button_pane_cp02_ParamLimits

0xc488,	// (0x00091398) bg_button_pane_cp02

0x7486,	// (0x0008c396) cell_dialer_keypad_pane_g1_ParamLimits

0x7486,	// (0x0008c396) cell_dialer_keypad_pane_g1

0xc488,	// (0x00091398) bg_button_pane_cp03_ParamLimits

0xc488,	// (0x00091398) bg_button_pane_cp03

0x749a,	// (0x0008c3aa) cell_dialer_command_1_pane_g1_ParamLimits

0x749a,	// (0x0008c3aa) cell_dialer_command_1_pane_g1

0xc494,	// (0x000913a4) bg_button_pane_cp04

0x74ae,	// (0x0008c3be) cell_dialer_command_2_pane_g1

0x245d,	// (0x0008736d) bg_button_pane_cp06

0xc49c,	// (0x000913ac) dialer_ne_clear_pane_g1

0x4242,	// (0x00089152) navi_pane_g2

0x4270,	// (0x00089180) navi_pane_g3

0x0002,

0xf3e5,	// (0x000942f5) navi_pane_g

0x42ff,	// (0x0008920f) navi_pane_mv_g2

0x4326,	// (0x00089236) navi_pane_mv_g5

0x432e,	// (0x0008923e) navi_pane_mv_t1

0x1b79,	// (0x00086a89) main_clock2_pane

0x74fc,	// (0x0008c40c) main_clock2_list_pane_ParamLimits

0x74fc,	// (0x0008c40c) main_clock2_list_pane

0x7536,	// (0x0008c446) main_clock2_pane_t1_ParamLimits

0x7536,	// (0x0008c446) main_clock2_pane_t1

0x7574,	// (0x0008c484) main_clock2_pane_t2_ParamLimits

0x7574,	// (0x0008c484) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000946ec) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000946ec) main_clock2_pane_t

0x7612,	// (0x0008c522) popup_clock_analogue_window_cp03_ParamLimits

0x7612,	// (0x0008c522) popup_clock_analogue_window_cp03

0x7637,	// (0x0008c547) popup_clock_digital_window_cp02_ParamLimits

0x7637,	// (0x0008c547) popup_clock_digital_window_cp02

0x76a8,	// (0x0008c5b8) main_clock2_list_single_pane_ParamLimits

0x76a8,	// (0x0008c5b8) main_clock2_list_single_pane

0x245d,	// (0x0008736d) list_highlight_pane_cp05

0xc4d6,	// (0x000913e6) main_clock2_list_single_pane_t1

0x29c8,	// (0x000878d8) popup_toolbar_window_cp04_ParamLimits

0x6af9,	// (0x0008ba09) camera2_autofocus_pane_g2_ParamLimits

0x6af9,	// (0x0008ba09) camera2_autofocus_pane_g2

0x6b05,	// (0x0008ba15) camera2_autofocus_pane_g3_ParamLimits

0x6b05,	// (0x0008ba15) camera2_autofocus_pane_g3

0x6b11,	// (0x0008ba21) camera2_autofocus_pane_g4_ParamLimits

0x6b11,	// (0x0008ba21) camera2_autofocus_pane_g4

0x6b1d,	// (0x0008ba2d) camera2_autofocus_pane_g5_ParamLimits

0x6b1d,	// (0x0008ba2d) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00094630) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00094630) camera2_autofocus_pane_g

0x6ce9,	// (0x0008bbf9) camera2_autofocus_pane_cp_g2

0x6cf1,	// (0x0008bc01) camera2_autofocus_pane_cp_g3

0x6cf9,	// (0x0008bc09) camera2_autofocus_pane_cp_g4

0x6d01,	// (0x0008bc11) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00094696) camera2_autofocus_pane_cp_g

0x73a1,	// (0x0008c2b1) popup_dialer_spcha_window

0xeac9,	// (0x000939d9) bg_popup_sub_pane_cp07

0xc4e4,	// (0x000913f4) list_spcha_pane

0xc4ec,	// (0x000913fc) list_single_spcha_pane_ParamLimits

0xc4ec,	// (0x000913fc) list_single_spcha_pane

0xeac9,	// (0x000939d9) list_highlight_pane_cp06

0xc4fd,	// (0x0009140d) list_single_spcha_pane_t1

0xb53c,	// (0x0009044c) popup_call2_audio_out_window_g4_ParamLimits

0xb53c,	// (0x0009044c) popup_call2_audio_out_window_g4

0xeac9,	// (0x000939d9) main_imed2_pane

0xbb67,	// (0x00090a77) popup_imed_adjust2_window

0x5ecd,	// (0x0008addd) popup_imed_trans_window_ParamLimits

0x5ecd,	// (0x0008addd) popup_imed_trans_window

0xbe98,	// (0x00090da8) popup_blid_sat_info2_window_t1

0xbea6,	// (0x00090db6) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000945c5) popup_blid_sat_info2_window_t

0x7751,	// (0x0008c661) aid_size_cell_colour_35

0x7771,	// (0x0008c681) aid_size_cell_colour_112

0x7791,	// (0x0008c6a1) aid_size_cell_effect

0xbb3f,	// (0x00090a4f) bg_tb_trans_pane_cp02

0x3aa4,	// (0x000889b4) heading_imed_pane

0x77b1,	// (0x0008c6c1) listscroll_imed_pane

0xc50b,	// (0x0009141b) heading_imed_pane_g1

0xc513,	// (0x00091423) heading_imed_pane_t1

0xc521,	// (0x00091431) grid_imed_colour_35_pane_ParamLimits

0xc521,	// (0x00091431) grid_imed_colour_35_pane

0x77bd,	// (0x0008c6cd) grid_imed_effect_pane

0xc539,	// (0x00091449) list_imed_aspect_pane

0x77d3,	// (0x0008c6e3) scroll_pane_cp027_ParamLimits

0x77d3,	// (0x0008c6e3) scroll_pane_cp027

0x77e4,	// (0x0008c6f4) cell_imed_effect_pane_ParamLimits

0x77e4,	// (0x0008c6f4) cell_imed_effect_pane

0xc541,	// (0x00091451) cell_imed_colour_pane_ParamLimits

0xc541,	// (0x00091451) cell_imed_colour_pane

0xc583,	// (0x00091493) cell_imed_colour_pane_g1_ParamLimits

0xc583,	// (0x00091493) cell_imed_colour_pane_g1

0xc594,	// (0x000914a4) hgihlgiht_grid_pane_cp016_ParamLimits

0xc594,	// (0x000914a4) hgihlgiht_grid_pane_cp016

0x780b,	// (0x0008c71b) cell_imed_effect_pane_g1

0x7813,	// (0x0008c723) grid_highlight_pane_cp017

0xc5a5,	// (0x000914b5) list_imed_single_pane_ParamLimits

0xc5a5,	// (0x000914b5) list_imed_single_pane

0xeac9,	// (0x000939d9) list_highlight_pane_cp07

0xc5ba,	// (0x000914ca) list_imed_aspect_pane_comp1_t1

0xbb3f,	// (0x00090a4f) bg_tb_trans_pane_cp05

0xc5dc,	// (0x000914ec) popup_imed_adjust2_window_g1

0xc603,	// (0x00091513) popup_imed_adjust2_window_t1

0xc61b,	// (0x0009152b) slider_imed_adjust_pane

0xc62f,	// (0x0009153f) slider_imed_adjust_pane_g1

0xc63f,	// (0x0009154f) slider_imed_adjust_pane_g2

0xc64f,	// (0x0009155f) slider_imed_adjust_pane_g3

0xc660,	// (0x00091570) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00094709) slider_imed_adjust_pane_g

0x781c,	// (0x0008c72c) aid_size_cell_clipart2

0x7828,	// (0x0008c738) grid_imed_clipart_pane

0xc671,	// (0x00091581) scroll_pane_cp031

0x7832,	// (0x0008c742) cell_imed_clipart_pane_ParamLimits

0x7832,	// (0x0008c742) cell_imed_clipart_pane

0x7854,	// (0x0008c764) cell_imed_clipart_pane_g1

0xeac9,	// (0x000939d9) grid_highlight_pane_cp014

0x7511,	// (0x0008c421) main_clock2_pane_g1_ParamLimits

0x7511,	// (0x0008c421) main_clock2_pane_g1

0x7653,	// (0x0008c563) aid_call2_pane_cp10

0x7665,	// (0x0008c575) aid_call_pane_cp10

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g1

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g2

0x7677,	// (0x0008c587) popup_clock_analogue_window_cp10_g3

0x7677,	// (0x0008c587) popup_clock_analogue_window_cp10_g4

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000946f7) popup_clock_analogue_window_cp10_g

0x7689,	// (0x0008c599) popup_clock_analogue_window_cp10_t1

0x76ba,	// (0x0008c5ca) clock_digital_number_pane_cp10_ParamLimits

0x76ba,	// (0x0008c5ca) clock_digital_number_pane_cp10

0x76d2,	// (0x0008c5e2) clock_digital_number_pane_cp11_ParamLimits

0x76d2,	// (0x0008c5e2) clock_digital_number_pane_cp11

0x76ea,	// (0x0008c5fa) clock_digital_number_pane_cp12_ParamLimits

0x76ea,	// (0x0008c5fa) clock_digital_number_pane_cp12

0x7702,	// (0x0008c612) clock_digital_number_pane_cp13_ParamLimits

0x7702,	// (0x0008c612) clock_digital_number_pane_cp13

0x771a,	// (0x0008c62a) clock_digital_separator_pane_cp10_ParamLimits

0x771a,	// (0x0008c62a) clock_digital_separator_pane_cp10

0x7732,	// (0x0008c642) popup_clock_digital_window_cp02_t1_ParamLimits

0x7732,	// (0x0008c642) popup_clock_digital_window_cp02_t1

0x17ff,	// (0x0008670f) clock_digital_number_pane_cp10_g1

0x17ff,	// (0x0008670f) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00094712) clock_digital_number_pane_cp10_g

0x17ff,	// (0x0008670f) clock_digital_separator_pane_cp10_g1

0x17ff,	// (0x0008670f) clock_digital_separator_pane_g2_cp10

0x4370,	// (0x00089280) navi_pane_vded_g4

0x4379,	// (0x00089289) navi_pane_vded_g5

0x4382,	// (0x00089292) navi_pane_vded_t1

0xeac9,	// (0x000939d9) main_vded_pane

0x785d,	// (0x0008c76d) main_vded_pane_g1

0x7867,	// (0x0008c777) main_vded_pane_g2

0x7871,	// (0x0008c781) main_vded_pane_g3

0x0002,

0xf807,	// (0x00094717) main_vded_pane_g

0x787b,	// (0x0008c78b) main_vded_pane_t1

0x7889,	// (0x0008c799) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0009471e) main_vded_pane_t

0x7897,	// (0x0008c7a7) vded_slider_pane

0x789f,	// (0x0008c7af) vded_video_pane

0xc679,	// (0x00091589) vded_video_pane_g1

0x78a7,	// (0x0008c7b7) vded_video_pane_g2

0xc05a,	// (0x00090f6a) vded_video_pane_g3

0x0002,

0xf813,	// (0x00094723) vded_video_pane_g

0xc683,	// (0x00091593) vded_slider_pane_g1

0xbd69,	// (0x00090c79) vded_slider_pane_g2

0xc68c,	// (0x0009159c) vded_slider_pane_g3

0xc695,	// (0x000915a5) vded_slider_pane_g4

0xc69e,	// (0x000915ae) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0009472a) vded_slider_pane_g

0x7281,	// (0x0008c191) mup3_rocker_pane_ParamLimits

0x7281,	// (0x0008c191) mup3_rocker_pane

0x78b0,	// (0x0008c7c0) mup3_control_keys_pane_g1

0x78b8,	// (0x0008c7c8) mup3_control_keys_pane_g2

0x78c0,	// (0x0008c7d0) mup3_control_keys_pane_g3

0x78c8,	// (0x0008c7d8) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00094735) mup3_control_keys_pane_g

0x1416,	// (0x00086326) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1416,	// (0x00086326) popup_toolbar2_fixed_window_cp01

0x72b5,	// (0x0008c1c5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x72b5,	// (0x0008c1c5) popup_toolbar2_fixed_window_cp02

0x55a6,	// (0x0008a4b6) popup_call2_audio_second_window_t4_ParamLimits

0x55a6,	// (0x0008a4b6) popup_call2_audio_second_window_t4

0xb3a9,	// (0x000902b9) popup_call2_audio_first_window_t6_ParamLimits

0xb3a9,	// (0x000902b9) popup_call2_audio_first_window_t6

0xb63f,	// (0x0009054f) popup_call2_audio_out_window_t6_ParamLimits

0xb63f,	// (0x0009054f) popup_call2_audio_out_window_t6

0xeac9,	// (0x000939d9) main_vitu_pane

0x78d8,	// (0x0008c7e8) aid_size_cell_itu_ParamLimits

0x78d8,	// (0x0008c7e8) aid_size_cell_itu

0xead3,	// (0x000939e3) bg_popup_window_pane_cp08_ParamLimits

0xead3,	// (0x000939e3) bg_popup_window_pane_cp08

0x78ee,	// (0x0008c7fe) field_vitu_entry_pane_ParamLimits

0x78ee,	// (0x0008c7fe) field_vitu_entry_pane

0x7906,	// (0x0008c816) grid_vitu_function_pane_ParamLimits

0x7906,	// (0x0008c816) grid_vitu_function_pane

0x7921,	// (0x0008c831) grid_vitu_itu_pane_ParamLimits

0x7921,	// (0x0008c831) grid_vitu_itu_pane

0x793f,	// (0x0008c84f) cell_vitu_itu_pane_ParamLimits

0x793f,	// (0x0008c84f) cell_vitu_itu_pane

0x7961,	// (0x0008c871) cell_vitu_function_pane_ParamLimits

0x7961,	// (0x0008c871) cell_vitu_function_pane

0xead3,	// (0x000939e3) bg_popup_sub_pane_cp08_ParamLimits

0xead3,	// (0x000939e3) bg_popup_sub_pane_cp08

0x797a,	// (0x0008c88a) field_vitu_entry_pane_t1_ParamLimits

0x797a,	// (0x0008c88a) field_vitu_entry_pane_t1

0xc6bf,	// (0x000915cf) field_vitu_entry_pane_t2_ParamLimits

0xc6bf,	// (0x000915cf) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00094743) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00094743) field_vitu_entry_pane_t

0xc6dc,	// (0x000915ec) bg_button_pane_cp05_ParamLimits

0xc6dc,	// (0x000915ec) bg_button_pane_cp05

0x7999,	// (0x0008c8a9) cell_vitu_itu_pane_g1

0x79b1,	// (0x0008c8c1) cell_vitu_itu_pane_t1_ParamLimits

0x79b1,	// (0x0008c8c1) cell_vitu_itu_pane_t1

0x79c3,	// (0x0008c8d3) cell_vitu_itu_pane_t2_ParamLimits

0x79c3,	// (0x0008c8d3) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00094748) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00094748) cell_vitu_itu_pane_t

0xc6ea,	// (0x000915fa) bg_button_pane_cp07

0x79f8,	// (0x0008c908) cell_vitu_function_pane_g1

0xb145,	// (0x00090055) main_calc_pane_g1

0x123d,	// (0x0008614d) aid_visual_content_pane

0xeac9,	// (0x000939d9) main_vradio_pane

0x7a01,	// (0x0008c911) main_vradio_pane_g1_ParamLimits

0x7a01,	// (0x0008c911) main_vradio_pane_g1

0xc6f4,	// (0x00091604) main_vradio_pane_g2_ParamLimits

0xc6f4,	// (0x00091604) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0009474f) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0009474f) main_vradio_pane_g

0x7a1a,	// (0x0008c92a) main_vradio_pane_t1_ParamLimits

0x7a1a,	// (0x0008c92a) main_vradio_pane_t1

0x7a2f,	// (0x0008c93f) main_vradio_pane_t2_ParamLimits

0x7a2f,	// (0x0008c93f) main_vradio_pane_t2

0xc701,	// (0x00091611) main_vradio_pane_t3_ParamLimits

0xc701,	// (0x00091611) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00094754) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00094754) main_vradio_pane_t

0x7a44,	// (0x0008c954) vradio_rocker_control_pane_ParamLimits

0x7a44,	// (0x0008c954) vradio_rocker_control_pane

0x7a56,	// (0x0008c966) vradio_station_info_pane_ParamLimits

0x7a56,	// (0x0008c966) vradio_station_info_pane

0xc715,	// (0x00091625) vradio_frequency_info_pane_ParamLimits

0xc715,	// (0x00091625) vradio_frequency_info_pane

0xc05a,	// (0x00090f6a) vradio_station_info_pane_g1

0xc724,	// (0x00091634) vradio_station_info_pane_t1_ParamLimits

0xc724,	// (0x00091634) vradio_station_info_pane_t1

0xc746,	// (0x00091656) vradio_station_info_pane_t2_ParamLimits

0xc746,	// (0x00091656) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0009475b) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0009475b) vradio_station_info_pane_t

0xc758,	// (0x00091668) vradio_tuning_pane

0xc760,	// (0x00091670) vradio_rocker_control_pane_g1

0xc768,	// (0x00091678) vradio_rocker_control_pane_g2

0xc770,	// (0x00091680) vradio_rocker_control_pane_g3

0xc778,	// (0x00091688) vradio_rocker_control_pane_g4

0xc780,	// (0x00091690) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00094760) vradio_rocker_control_pane_g

0x7a68,	// (0x0008c978) vradio_frequency_info_pane_g1

0xc788,	// (0x00091698) vradio_frequency_info_pane_t1_ParamLimits

0xc788,	// (0x00091698) vradio_frequency_info_pane_t1

0x7a72,	// (0x0008c982) vradio_tuning_pane_g1

0x7a7d,	// (0x0008c98d) vradio_tuning_pane_t1

0xb103,	// (0x00090013) area_side_right_pane_ParamLimits

0xb103,	// (0x00090013) area_side_right_pane

0xbafa,	// (0x00090a0a) status_small_pane_g1

0xbb02,	// (0x00090a12) status_small_pane_g2

0xbb0b,	// (0x00090a1b) status_small_pane_g3

0xbb14,	// (0x00090a24) status_small_pane_g4

0x0003,

0xf60b,	// (0x0009451b) status_small_pane_g

0xbb1d,	// (0x00090a2d) status_small_pane_t1

0xeac9,	// (0x000939d9) main_video3_pane

0xc79c,	// (0x000916ac) cams_zoom_vslider_pane

0xc7a4,	// (0x000916b4) image3_wide_pane_ParamLimits

0xc7a4,	// (0x000916b4) image3_wide_pane

0xc7be,	// (0x000916ce) image3_wide_small_pane

0xc7ca,	// (0x000916da) main_video3_pane_g1_ParamLimits

0xc7ca,	// (0x000916da) main_video3_pane_g1

0xc7e6,	// (0x000916f6) main_video3_pane_g2_ParamLimits

0xc7e6,	// (0x000916f6) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0009476b) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0009476b) main_video3_pane_g

0xc802,	// (0x00091712) main_video3_pane_t1_ParamLimits

0xc802,	// (0x00091712) main_video3_pane_t1

0xc82d,	// (0x0009173d) main_video3_pane_t2_ParamLimits

0xc82d,	// (0x0009173d) main_video3_pane_t2

0xc858,	// (0x00091768) main_video3_pane_t3_ParamLimits

0xc858,	// (0x00091768) main_video3_pane_t3

0x0002,

0xf860,	// (0x00094770) main_video3_pane_t_ParamLimits

0xf860,	// (0x00094770) main_video3_pane_t

0xc885,	// (0x00091795) cams_zoom_vslider_pane_g1

0xc88e,	// (0x0009179e) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00094777) cams_zoom_vslider_pane_g

0xc896,	// (0x000917a6) small_slider_vertical_pane

0xc05a,	// (0x00090f6a) small_slider_vertical_pane_g1

0xc05a,	// (0x00090f6a) small_slider_vertical_pane_g2

0xc89e,	// (0x000917ae) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0009477c) small_slider_vertical_pane_g

0xeac9,	// (0x000939d9) main_hwr_training_pane

0xc8a7,	// (0x000917b7) hwr_training_instruct_pane_ParamLimits

0xc8a7,	// (0x000917b7) hwr_training_instruct_pane

0x7a8c,	// (0x0008c99c) hwr_training_navi_pane_ParamLimits

0x7a8c,	// (0x0008c99c) hwr_training_navi_pane

0x7aab,	// (0x0008c9bb) hwr_training_write_pane_ParamLimits

0x7aab,	// (0x0008c9bb) hwr_training_write_pane

0xeac9,	// (0x000939d9) bg_frame_shadow_pane

0xc8de,	// (0x000917ee) hwr_training_write_pane_g1

0xc8e6,	// (0x000917f6) hwr_training_write_pane_g2

0xc8ee,	// (0x000917fe) hwr_training_write_pane_g3

0xc8f6,	// (0x00091806) hwr_training_write_pane_g4

0xc8fe,	// (0x0009180e) hwr_training_write_pane_g5

0xc906,	// (0x00091816) hwr_training_write_pane_g6

0xc90e,	// (0x0009181e) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00094783) hwr_training_write_pane_g

0xc916,	// (0x00091826) hwr_training_navi_pane_g1_ParamLimits

0xc916,	// (0x00091826) hwr_training_navi_pane_g1

0xc928,	// (0x00091838) hwr_training_navi_pane_g2_ParamLimits

0xc928,	// (0x00091838) hwr_training_navi_pane_g2

0xc93a,	// (0x0009184a) hwr_training_navi_pane_g3_ParamLimits

0xc93a,	// (0x0009184a) hwr_training_navi_pane_g3

0xc94a,	// (0x0009185a) hwr_training_navi_pane_g4_ParamLimits

0xc94a,	// (0x0009185a) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00094792) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00094792) hwr_training_navi_pane_g

0xc957,	// (0x00091867) hwr_training_navi_pane_t1

0x7af5,	// (0x0008ca05) list_single_hwr_training_instruct_pane_ParamLimits

0x7af5,	// (0x0008ca05) list_single_hwr_training_instruct_pane

0xc965,	// (0x00091875) list_single_hwr_training_instruct_pane_t1

0xbf9a,	// (0x00090eaa) bg_frame_shadow_pane_g1

0xc974,	// (0x00091884) bg_frame_shadow_pane_g2

0xc97c,	// (0x0009188c) bg_frame_shadow_pane_g3

0xc984,	// (0x00091894) bg_frame_shadow_pane_g4

0xc98c,	// (0x0009189c) bg_frame_shadow_pane_g5

0xc994,	// (0x000918a4) bg_frame_shadow_pane_g6

0xc99c,	// (0x000918ac) bg_frame_shadow_pane_g7

0x1dbc,	// (0x00086ccc) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0009479d) bg_frame_shadow_pane_g

0xeac9,	// (0x000939d9) main_video_tele_dialer_pane

0x7b0b,	// (0x0008ca1b) aid_size_cell_video_keypad_ParamLimits

0x7b0b,	// (0x0008ca1b) aid_size_cell_video_keypad

0x7b25,	// (0x0008ca35) grid_video_dialer_keypad_pane_ParamLimits

0x7b25,	// (0x0008ca35) grid_video_dialer_keypad_pane

0x7b73,	// (0x0008ca83) video_down_pane_cp_ParamLimits

0x7b73,	// (0x0008ca83) video_down_pane_cp

0x7ba5,	// (0x0008cab5) cell_video_dialer_keypad_pane_ParamLimits

0x7ba5,	// (0x0008cab5) cell_video_dialer_keypad_pane

0xc9a4,	// (0x000918b4) bg_button_pane_cp08_ParamLimits

0xc9a4,	// (0x000918b4) bg_button_pane_cp08

0x7bc7,	// (0x0008cad7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7bc7,	// (0x0008cad7) cell_video_dialer_keypad_pane_g1

0x726b,	// (0x0008c17b) mup3_rocker2_pane_ParamLimits

0x726b,	// (0x0008c17b) mup3_rocker2_pane

0xc05a,	// (0x00090f6a) mup3_rocker2_pane_g1

0x5dbc,	// (0x0008accc) main_dialer2_pane

0xeac9,	// (0x000939d9) main_mp4_pane

0xc9b8,	// (0x000918c8) main_mp4_pane_g1_ParamLimits

0xc9b8,	// (0x000918c8) main_mp4_pane_g1

0xc9b8,	// (0x000918c8) main_mp4_pane_g2_ParamLimits

0xc9b8,	// (0x000918c8) main_mp4_pane_g2

0x7c01,	// (0x0008cb11) main_mp4_pane_g3_ParamLimits

0x7c01,	// (0x0008cb11) main_mp4_pane_g3

0xc9c6,	// (0x000918d6) main_mp4_pane_g4_ParamLimits

0xc9c6,	// (0x000918d6) main_mp4_pane_g4

0xc9ee,	// (0x000918fe) main_mp4_pane_g5_ParamLimits

0xc9ee,	// (0x000918fe) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000947bd) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000947bd) main_mp4_pane_g

0xca3e,	// (0x0009194e) main_mp4_pane_t1_ParamLimits

0xca3e,	// (0x0009194e) main_mp4_pane_t1

0xca9a,	// (0x000919aa) main_mp4_pane_t2_ParamLimits

0xca9a,	// (0x000919aa) main_mp4_pane_t2

0xcaec,	// (0x000919fc) main_mp4_pane_t3_ParamLimits

0xcaec,	// (0x000919fc) main_mp4_pane_t3

0xcb0c,	// (0x00091a1c) main_mp4_pane_t4_ParamLimits

0xcb0c,	// (0x00091a1c) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000947ca) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000947ca) main_mp4_pane_t

0xcb50,	// (0x00091a60) mp4_progress_pane_ParamLimits

0xcb50,	// (0x00091a60) mp4_progress_pane

0xee55,	// (0x00093d65) mp4_rocker_pane_ParamLimits

0xee55,	// (0x00093d65) mp4_rocker_pane

0xcb86,	// (0x00091a96) mp4_progress_pane_t1

0xcb9f,	// (0x00091aaf) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000947d3) mp4_progress_pane_t

0xcbb8,	// (0x00091ac8) mup_progress_pane_cp04

0xc05a,	// (0x00090f6a) mp4_rocker_pane_g1

0x7c3d,	// (0x0008cb4d) aid_cell_size_keypad2_ParamLimits

0x7c3d,	// (0x0008cb4d) aid_cell_size_keypad2

0x7c53,	// (0x0008cb63) dialer2_ne_pane_ParamLimits

0x7c53,	// (0x0008cb63) dialer2_ne_pane

0x7c6d,	// (0x0008cb7d) grid_dialer2_keypad_pane_ParamLimits

0x7c6d,	// (0x0008cb7d) grid_dialer2_keypad_pane

0xbe3f,	// (0x00090d4f) bg_popup_call_pane_cp07_ParamLimits

0xbe3f,	// (0x00090d4f) bg_popup_call_pane_cp07

0x7c89,	// (0x0008cb99) dialer2_ne_pane_t1_ParamLimits

0x7c89,	// (0x0008cb99) dialer2_ne_pane_t1

0x7cc5,	// (0x0008cbd5) cell_dialer2_keypad_pane_ParamLimits

0x7cc5,	// (0x0008cbd5) cell_dialer2_keypad_pane

0xcbd6,	// (0x00091ae6) bg_button_pane_pane_cp04_ParamLimits

0xcbd6,	// (0x00091ae6) bg_button_pane_pane_cp04

0x7ce7,	// (0x0008cbf7) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ce7,	// (0x0008cbf7) cell_dialer2_keypad_pane_g1

0x288a,	// (0x0008779a) aid_placing_vt_set_content_ParamLimits

0x288a,	// (0x0008779a) aid_placing_vt_set_content

0x28b2,	// (0x000877c2) aid_placing_vt_set_title_ParamLimits

0x28b2,	// (0x000877c2) aid_placing_vt_set_title

0xeac9,	// (0x000939d9) main_image3_pane

0x7dad,	// (0x0008ccbd) area_side_right_pane_cp01_ParamLimits

0x7dad,	// (0x0008ccbd) area_side_right_pane_cp01

0xc9b8,	// (0x000918c8) main_image3_pane_g1_ParamLimits

0xc9b8,	// (0x000918c8) main_image3_pane_g1

0x7dc4,	// (0x0008ccd4) main_image3_pane_g2_ParamLimits

0x7dc4,	// (0x0008ccd4) main_image3_pane_g2

0x7dec,	// (0x0008ccfc) main_image3_pane_g3_ParamLimits

0x7dec,	// (0x0008ccfc) main_image3_pane_g3

0x7e16,	// (0x0008cd26) main_image3_pane_g4_ParamLimits

0x7e16,	// (0x0008cd26) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000947e2) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000947e2) main_image3_pane_g

0x7e40,	// (0x0008cd50) main_image3_pane_t1_ParamLimits

0x7e40,	// (0x0008cd50) main_image3_pane_t1

0x7e98,	// (0x0008cda8) main_image3_pane_t2_ParamLimits

0x7e98,	// (0x0008cda8) main_image3_pane_t2

0x7eea,	// (0x0008cdfa) main_image3_pane_t3_ParamLimits

0x7eea,	// (0x0008cdfa) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000947eb) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000947eb) main_image3_pane_t

0xead3,	// (0x000939e3) grid_sctrl_middle_pane_cp01_ParamLimits

0xead3,	// (0x000939e3) grid_sctrl_middle_pane_cp01

0x7f72,	// (0x0008ce82) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f72,	// (0x0008ce82) cell_sctrl_middle_pane_cp01

0x7f8f,	// (0x0008ce9f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f8f,	// (0x0008ce9f) cell_sctrl_middle_pane_cp01_g1

0xeac9,	// (0x000939d9) main_call4_pane

0x7fa5,	// (0x0008ceb5) aid_size_button_call4_ParamLimits

0x7fa5,	// (0x0008ceb5) aid_size_button_call4

0x7fd6,	// (0x0008cee6) call4_windows_pane_ParamLimits

0x7fd6,	// (0x0008cee6) call4_windows_pane

0x7ff6,	// (0x0008cf06) grid_call4_button_pane_ParamLimits

0x7ff6,	// (0x0008cf06) grid_call4_button_pane

0xcbe2,	// (0x00091af2) call4_windows_conf_pane

0xcbf9,	// (0x00091b09) popup_call4_audio_first_window_ParamLimits

0xcbf9,	// (0x00091b09) popup_call4_audio_first_window

0xcc45,	// (0x00091b55) popup_call4_audio_second_window_ParamLimits

0xcc45,	// (0x00091b55) popup_call4_audio_second_window

0xcc59,	// (0x00091b69) popup_call4_audio_wait_window_ParamLimits

0xcc59,	// (0x00091b69) popup_call4_audio_wait_window

0x8023,	// (0x0008cf33) cell_call4_button_pane_ParamLimits

0x8023,	// (0x0008cf33) cell_call4_button_pane

0x804c,	// (0x0008cf5c) bg_button_pane_cp09_ParamLimits

0x804c,	// (0x0008cf5c) bg_button_pane_cp09

0x8058,	// (0x0008cf68) cell_call4_button_pane_g1_ParamLimits

0x8058,	// (0x0008cf68) cell_call4_button_pane_g1

0x807e,	// (0x0008cf8e) cell_call4_button_pane_t1_ParamLimits

0x807e,	// (0x0008cf8e) cell_call4_button_pane_t1

0xcca1,	// (0x00091bb1) popup_call4_audio_conf_window_ParamLimits

0xcca1,	// (0x00091bb1) popup_call4_audio_conf_window

0x72cb,	// (0x0008c1db) mup3_progress_pane_t1_ParamLimits

0x72ea,	// (0x0008c1fa) mup3_progress_pane_t2_ParamLimits

0xc397,	// (0x000912a7) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000946bf) mup3_progress_pane_t_ParamLimits

0xc3b4,	// (0x000912c4) mup_progress_pane_cp03_ParamLimits

0x78d0,	// (0x0008c7e0) mup3_control_keys_pane_g4_copy1

0xee39,	// (0x00093d49) mp4_rocker2_pane_ParamLimits

0xee39,	// (0x00093d49) mp4_rocker2_pane

0xccb5,	// (0x00091bc5) mp4_rocker2_pane_g1

0xccbd,	// (0x00091bcd) mp4_rocker2_pane_g2

0xeea7,	// (0x00093db7) mp4_rocker2_pane_g3

0xeeaf,	// (0x00093dbf) mp4_rocker2_pane_g4

0xeeb7,	// (0x00093dc7) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000947f4) mp4_rocker2_pane_g

0xeac9,	// (0x000939d9) main_camera4_pane

0xeac9,	// (0x000939d9) main_video4_pane

0x7b41,	// (0x0008ca51) main_video_tele_dialer_pane_t1_ParamLimits

0x7b41,	// (0x0008ca51) main_video_tele_dialer_pane_t1

0x7b5a,	// (0x0008ca6a) main_video_tele_dialer_pane_t2_ParamLimits

0x7b5a,	// (0x0008ca6a) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000947ae) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000947ae) main_video_tele_dialer_pane_t

0x80c0,	// (0x0008cfd0) cam4_autofocus_pane_ParamLimits

0x80c0,	// (0x0008cfd0) cam4_autofocus_pane

0x80d6,	// (0x0008cfe6) cam4_image_uncrop_pane_ParamLimits

0x80d6,	// (0x0008cfe6) cam4_image_uncrop_pane

0x80f0,	// (0x0008d000) cam4_indicators_pane_ParamLimits

0x80f0,	// (0x0008d000) cam4_indicators_pane

0x811b,	// (0x0008d02b) main_camera4_pane_g1_ParamLimits

0x811b,	// (0x0008d02b) main_camera4_pane_g1

0x812d,	// (0x0008d03d) main_camera4_pane_g2_ParamLimits

0x812d,	// (0x0008d03d) main_camera4_pane_g2

0x8140,	// (0x0008d050) main_camera4_pane_g3_ParamLimits

0x8140,	// (0x0008d050) main_camera4_pane_g3

0x8153,	// (0x0008d063) main_camera4_pane_g4_ParamLimits

0x8153,	// (0x0008d063) main_camera4_pane_g4

0x8166,	// (0x0008d076) main_camera4_pane_g5_ParamLimits

0x8166,	// (0x0008d076) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000947ff) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000947ff) main_camera4_pane_g

0x818a,	// (0x0008d09a) main_camera4_pane_t1_ParamLimits

0x818a,	// (0x0008d09a) main_camera4_pane_t1

0xc2a8,	// (0x000911b8) bg_tb_trans_pane_cp06

0xeee3,	// (0x00093df3) cam4_indicators_pane_g1

0xeef4,	// (0x00093e04) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0009481a) cam4_indicators_pane_g

0xef0c,	// (0x00093e1c) cam4_indicators_pane_t1

0x81ee,	// (0x0008d0fe) main_video4_pane_g1_ParamLimits

0x81ee,	// (0x0008d0fe) main_video4_pane_g1

0x81fd,	// (0x0008d10d) main_video4_pane_g2_ParamLimits

0x81fd,	// (0x0008d10d) main_video4_pane_g2

0x820c,	// (0x0008d11c) main_video4_pane_g3_ParamLimits

0x820c,	// (0x0008d11c) main_video4_pane_g3

0x821b,	// (0x0008d12b) main_video4_pane_g4_ParamLimits

0x821b,	// (0x0008d12b) main_video4_pane_g4

0x0004,

0xf911,	// (0x00094821) main_video4_pane_g_ParamLimits

0xf911,	// (0x00094821) main_video4_pane_g

0x8239,	// (0x0008d149) vid4_indicators_pane_ParamLimits

0x8239,	// (0x0008d149) vid4_indicators_pane

0x8267,	// (0x0008d177) video4_image_uncrop_cif_pane_ParamLimits

0x8267,	// (0x0008d177) video4_image_uncrop_cif_pane

0x8281,	// (0x0008d191) video4_image_uncrop_nhd_pane_ParamLimits

0x8281,	// (0x0008d191) video4_image_uncrop_nhd_pane

0x80d6,	// (0x0008cfe6) video4_image_uncrop_vga_pane_ParamLimits

0x80d6,	// (0x0008cfe6) video4_image_uncrop_vga_pane

0xead3,	// (0x000939e3) bg_tb_trans_pane_cp07

0xef36,	// (0x00093e46) vid4_indicators_pane_g1

0xef4a,	// (0x00093e5a) vid4_indicators_pane_g2

0xef5e,	// (0x00093e6e) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0009482c) vid4_indicators_pane_g

0xef8b,	// (0x00093e9b) vid4_indicators_pane_t1

0x8295,	// (0x0008d1a5) cam4_autofocus_pane_g1

0x829d,	// (0x0008d1ad) cam4_autofocus_pane_g2

0x82a5,	// (0x0008d1b5) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00094837) cam4_autofocus_pane_g

0x82ad,	// (0x0008d1bd) cam4_autofocus_pane_g3_copy1

0x7b89,	// (0x0008ca99) video_down_pane_cp_t1

0x7b97,	// (0x0008caa7) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000947b3) video_down_pane_cp_t

0xead3,	// (0x000939e3) popup_vitu2_window_ParamLimits

0xead3,	// (0x000939e3) popup_vitu2_window

0x82b5,	// (0x0008d1c5) aid_size_cell2_itu2_ParamLimits

0x82b5,	// (0x0008d1c5) aid_size_cell2_itu2

0x82db,	// (0x0008d1eb) aid_size_cell_itu2_ParamLimits

0x82db,	// (0x0008d1eb) aid_size_cell_itu2

0x8337,	// (0x0008d247) bg_popup_window_pane_cp09_ParamLimits

0x8337,	// (0x0008d247) bg_popup_window_pane_cp09

0x8345,	// (0x0008d255) field_vitu2_entry_pane_ParamLimits

0x8345,	// (0x0008d255) field_vitu2_entry_pane

0x836b,	// (0x0008d27b) grid_vitu2_function_pane_ParamLimits

0x836b,	// (0x0008d27b) grid_vitu2_function_pane

0x83bc,	// (0x0008d2cc) grid_vitu2_itu_pane_ParamLimits

0x83bc,	// (0x0008d2cc) grid_vitu2_itu_pane

0x8452,	// (0x0008d362) cell_vitu2_itu_pane_ParamLimits

0x8452,	// (0x0008d362) cell_vitu2_itu_pane

0x847e,	// (0x0008d38e) cell_vitu2_function_pane_ParamLimits

0x847e,	// (0x0008d38e) cell_vitu2_function_pane

0xccd7,	// (0x00091be7) bg_popup_call_pane_cp08_ParamLimits

0xccd7,	// (0x00091be7) bg_popup_call_pane_cp08

0xccee,	// (0x00091bfe) field_vitu2_entry_pane_g1

0xccfa,	// (0x00091c0a) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0009483e) field_vitu2_entry_pane_g

0x0642,	// (0x00085552) field_vitu2_entry_pane_t1_ParamLimits

0x0642,	// (0x00085552) field_vitu2_entry_pane_t1

0xcd14,	// (0x00091c24) field_vitu2_entry_pane_t2_ParamLimits

0xcd14,	// (0x00091c24) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00094845) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00094845) field_vitu2_entry_pane_t

0x84bd,	// (0x0008d3cd) bg_button_pane_cp010_ParamLimits

0x84bd,	// (0x0008d3cd) bg_button_pane_cp010

0xefa2,	// (0x00093eb2) cell_vitu2_itu_pane_g1

0x84d9,	// (0x0008d3e9) cell_vitu2_itu_pane_t1_ParamLimits

0x84d9,	// (0x0008d3e9) cell_vitu2_itu_pane_t1

0x0671,	// (0x00085581) cell_vitu2_itu_pane_t2_ParamLimits

0x0671,	// (0x00085581) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0009484f) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0009484f) cell_vitu2_itu_pane_t

0xead3,	// (0x000939e3) bg_button_pane_cp011

0x8537,	// (0x0008d447) cell_vitu2_function_pane_g1

0xeac9,	// (0x000939d9) main_myfav_hc_pane

0x7f3a,	// (0x0008ce4a) popup_image3_note_pane_ParamLimits

0x7f3a,	// (0x0008ce4a) popup_image3_note_pane

0x7f56,	// (0x0008ce66) popup_image3_tool_bar_pane_ParamLimits

0x7f56,	// (0x0008ce66) popup_image3_tool_bar_pane

0x06ff,	// (0x0008560f) cell_vitu2_itu_pane_t3_ParamLimits

0x06ff,	// (0x0008560f) cell_vitu2_itu_pane_t3

0xeac9,	// (0x000939d9) bg_popup_trans_pane

0xcd39,	// (0x00091c49) grid_image3_tool_bar_pane

0xcd43,	// (0x00091c53) bg_popup_trans_pane_g1

0x2e77,	// (0x00087d87) bg_popup_trans_pane_g2

0xcd4b,	// (0x00091c5b) bg_popup_trans_pane_g3

0xcd53,	// (0x00091c63) bg_popup_trans_pane_g4

0xcd5b,	// (0x00091c6b) bg_popup_trans_pane_g5

0xcd63,	// (0x00091c73) bg_popup_trans_pane_g6

0xcd6b,	// (0x00091c7b) bg_popup_trans_pane_g7

0xcd73,	// (0x00091c83) bg_popup_trans_pane_g8

0x2e57,	// (0x00087d67) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00094856) bg_popup_trans_pane_g

0xcd7b,	// (0x00091c8b) cell_image3_tool_bar_pane_ParamLimits

0xcd7b,	// (0x00091c8b) cell_image3_tool_bar_pane

0xc05a,	// (0x00090f6a) cell_image3_tool_bar_pane_g1

0xeac9,	// (0x000939d9) bg_popup_trans_pane_cp1

0xcd8f,	// (0x00091c9f) popup_image3_note_pane_t1

0xcd9d,	// (0x00091cad) popup_image3_note_pane_t2

0xcdab,	// (0x00091cbb) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00094869) popup_image3_note_pane_t

0xcdb9,	// (0x00091cc9) popup_image3_note_pane_t3_copy1

0x854b,	// (0x0008d45b) bg_myfav_hc_instruction_pane_ParamLimits

0x854b,	// (0x0008d45b) bg_myfav_hc_instruction_pane

0x855f,	// (0x0008d46f) cell_myfav_contact_pane_ParamLimits

0x855f,	// (0x0008d46f) cell_myfav_contact_pane

0x857d,	// (0x0008d48d) cell_myfav_contact_pane_cp1_ParamLimits

0x857d,	// (0x0008d48d) cell_myfav_contact_pane_cp1

0x8595,	// (0x0008d4a5) cell_myfav_contact_pane_cp2_ParamLimits

0x8595,	// (0x0008d4a5) cell_myfav_contact_pane_cp2

0x85ad,	// (0x0008d4bd) cell_myfav_contact_pane_cp3_ParamLimits

0x85ad,	// (0x0008d4bd) cell_myfav_contact_pane_cp3

0x85c4,	// (0x0008d4d4) cell_myfav_contact_pane_cp4_ParamLimits

0x85c4,	// (0x0008d4d4) cell_myfav_contact_pane_cp4

0x85dc,	// (0x0008d4ec) cell_myfav_contact_pane_cp5_ParamLimits

0x85dc,	// (0x0008d4ec) cell_myfav_contact_pane_cp5

0x85f0,	// (0x0008d500) cell_myfav_contact_pane_cp6_ParamLimits

0x85f0,	// (0x0008d500) cell_myfav_contact_pane_cp6

0x8606,	// (0x0008d516) cell_myfav_contact_pane_cp7_ParamLimits

0x8606,	// (0x0008d516) cell_myfav_contact_pane_cp7

0xcdc7,	// (0x00091cd7) listscroll_gen_pane_cp05

0x8620,	// (0x0008d530) main_myfav_hc_pane_g1_ParamLimits

0x8620,	// (0x0008d530) main_myfav_hc_pane_g1

0x863a,	// (0x0008d54a) main_myfav_hc_pane_g2_ParamLimits

0x863a,	// (0x0008d54a) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00094870) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00094870) main_myfav_hc_pane_g

0x866c,	// (0x0008d57c) main_myfav_hc_pane_t1_ParamLimits

0x866c,	// (0x0008d57c) main_myfav_hc_pane_t1

0xcdd0,	// (0x00091ce0) main_myfav_hc_pane_t2_ParamLimits

0xcdd0,	// (0x00091ce0) main_myfav_hc_pane_t2

0xcde2,	// (0x00091cf2) main_myfav_hc_pane_t3_ParamLimits

0xcde2,	// (0x00091cf2) main_myfav_hc_pane_t3

0x8683,	// (0x0008d593) main_myfav_hc_pane_t4_ParamLimits

0x8683,	// (0x0008d593) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00094877) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00094877) main_myfav_hc_pane_t

0xc05a,	// (0x00090f6a) bg_myfav_hc_instruction_pane_g1

0xcdf4,	// (0x00091d04) cell_myfav_contact_pane_g1_ParamLimits

0xcdf4,	// (0x00091d04) cell_myfav_contact_pane_g1

0xcdf4,	// (0x00091d04) cell_myfav_contact_pane_g2_ParamLimits

0xcdf4,	// (0x00091d04) cell_myfav_contact_pane_g2

0xce00,	// (0x00091d10) cell_myfav_contact_pane_g3_ParamLimits

0xce00,	// (0x00091d10) cell_myfav_contact_pane_g3

0xc381,	// (0x00091291) cell_myfav_contact_pane_g4_ParamLimits

0xc381,	// (0x00091291) cell_myfav_contact_pane_g4

0xce0d,	// (0x00091d1d) cell_myfav_contact_pane_g5_ParamLimits

0xce0d,	// (0x00091d1d) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00094882) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00094882) cell_myfav_contact_pane_g

0x8654,	// (0x0008d564) main_myfav_hc_pane_g3_ParamLimits

0x8654,	// (0x0008d564) main_myfav_hc_pane_g3

0x1378,	// (0x00086288) popup_adpt_find_window

0x86ab,	// (0x0008d5bb) afind_page_pane_ParamLimits

0x86ab,	// (0x0008d5bb) afind_page_pane

0x86c0,	// (0x0008d5d0) aid_size_cell_afind_ParamLimits

0x86c0,	// (0x0008d5d0) aid_size_cell_afind

0x86de,	// (0x0008d5ee) bg_popup_sub_pane_cp09_ParamLimits

0x86de,	// (0x0008d5ee) bg_popup_sub_pane_cp09

0x86eb,	// (0x0008d5fb) find_pane_cp01_ParamLimits

0x86eb,	// (0x0008d5fb) find_pane_cp01

0xce19,	// (0x00091d29) grid_afind_control_pane_ParamLimits

0xce19,	// (0x00091d29) grid_afind_control_pane

0x86f8,	// (0x0008d608) grid_afind_pane_ParamLimits

0x86f8,	// (0x0008d608) grid_afind_pane

0x8717,	// (0x0008d627) cell_afind_pane_ParamLimits

0x8717,	// (0x0008d627) cell_afind_pane

0xc05a,	// (0x00090f6a) afind_page_pane_g1

0x877e,	// (0x0008d68e) afind_page_pane_g2

0x8787,	// (0x0008d697) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0009488d) afind_page_pane_g

0x8790,	// (0x0008d6a0) afind_page_pane_t1

0xce2d,	// (0x00091d3d) cell_afind_grid_control_pane_ParamLimits

0xce2d,	// (0x00091d3d) cell_afind_grid_control_pane

0xcbd6,	// (0x00091ae6) bg_button_pane_cp69_ParamLimits

0xcbd6,	// (0x00091ae6) bg_button_pane_cp69

0x87b0,	// (0x0008d6c0) cell_afind_pane_g1_ParamLimits

0x87b0,	// (0x0008d6c0) cell_afind_pane_g1

0x87bd,	// (0x0008d6cd) cell_afind_pane_t1_ParamLimits

0x87bd,	// (0x0008d6cd) cell_afind_pane_t1

0x2805,	// (0x00087715) bg_button_pane_cp72

0xce3c,	// (0x00091d4c) cell_afind_grid_control_pane_g1

0x5052,	// (0x00089f62) aid_image_placing_area_ParamLimits

0x5052,	// (0x00089f62) aid_image_placing_area

0xc6a7,	// (0x000915b7) field_vitu_entry_pane_g1_ParamLimits

0xc6a7,	// (0x000915b7) field_vitu_entry_pane_g1

0xc6b3,	// (0x000915c3) field_vitu_entry_pane_g2_ParamLimits

0xc6b3,	// (0x000915c3) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0009473e) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0009473e) field_vitu_entry_pane_g

0x7999,	// (0x0008c8a9) cell_vitu_itu_pane_g1_ParamLimits

0x79db,	// (0x0008c8eb) cell_vitu_itu_pane_t3_ParamLimits

0x79db,	// (0x0008c8eb) cell_vitu_itu_pane_t3

0xcb86,	// (0x00091a96) mp4_progress_pane_t1_ParamLimits

0xcb9f,	// (0x00091aaf) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000947d3) mp4_progress_pane_t_ParamLimits

0xcbb8,	// (0x00091ac8) mup_progress_pane_cp04_ParamLimits

0x8697,	// (0x0008d5a7) main_myfav_hc_pane_t5_ParamLimits

0x8697,	// (0x0008d5a7) main_myfav_hc_pane_t5

0xb0f3,	// (0x00090003) aid_zoom_text_primary

0x1378,	// (0x00086288) popup_adpt_find_window_ParamLimits

0xead3,	// (0x000939e3) main_cam_set_pane

0x8107,	// (0x0008d017) cam4_zoom_pane_ParamLimits

0x8107,	// (0x0008d017) cam4_zoom_pane

0x87cf,	// (0x0008d6df) main_cam_set_pane_g1_ParamLimits

0x87cf,	// (0x0008d6df) main_cam_set_pane_g1

0x87dd,	// (0x0008d6ed) main_cam_set_pane_g2_ParamLimits

0x87dd,	// (0x0008d6ed) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00094894) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00094894) main_cam_set_pane_g

0x87fe,	// (0x0008d70e) main_cam_set_pane_t1_ParamLimits

0x87fe,	// (0x0008d70e) main_cam_set_pane_t1

0x8819,	// (0x0008d729) main_cset_listscroll_pane_ParamLimits

0x8819,	// (0x0008d729) main_cset_listscroll_pane

0x8839,	// (0x0008d749) main_cset_slider_pane_ParamLimits

0x8839,	// (0x0008d749) main_cset_slider_pane

0xce4d,	// (0x00091d5d) main_cset_list_pane_ParamLimits

0xce4d,	// (0x00091d5d) main_cset_list_pane

0xce5d,	// (0x00091d6d) scroll_pane_cp028

0x885f,	// (0x0008d76f) aid_area_touch_slider

0x887b,	// (0x0008d78b) cset_slider_pane

0x88a5,	// (0x0008d7b5) main_cset_slider_pane_g1

0x88ba,	// (0x0008d7ca) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00094899) main_cset_slider_pane_g

0xceae,	// (0x00091dbe) main_cset_slider_pane_t1

0x895e,	// (0x0008d86e) main_cset_slider_pane_t2

0x8978,	// (0x0008d888) main_cset_slider_pane_t3

0x8992,	// (0x0008d8a2) main_cset_slider_pane_t4

0x89ac,	// (0x0008d8bc) main_cset_slider_pane_t5

0x89c6,	// (0x0008d8d6) main_cset_slider_pane_t6

0x89db,	// (0x0008d8eb) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000948be) main_cset_slider_pane_t

0x8adf,	// (0x0008d9ef) cset_list_set_pane_ParamLimits

0x8adf,	// (0x0008d9ef) cset_list_set_pane

0x8af1,	// (0x0008da01) aid_position_infowindow_above

0x8af9,	// (0x0008da09) aid_position_infowindow_below

0x8b01,	// (0x0008da11) cset_list_set_pane_g1_ParamLimits

0x8b01,	// (0x0008da11) cset_list_set_pane_g1

0x075d,	// (0x0008566d) cset_list_set_pane_g3_ParamLimits

0x075d,	// (0x0008566d) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000948dd) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000948dd) cset_list_set_pane_g

0x076c,	// (0x0008567c) cset_list_set_pane_t1_ParamLimits

0x076c,	// (0x0008567c) cset_list_set_pane_t1

0xead3,	// (0x000939e3) list_highlight_pane_cp021_ParamLimits

0xead3,	// (0x000939e3) list_highlight_pane_cp021

0x48d4,	// (0x000897e4) cset_slider_pane_g1

0x48e6,	// (0x000897f6) cset_slider_pane_g2

0x48dd,	// (0x000897ed) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000948e2) cset_slider_pane_g

0xefb4,	// (0x00093ec4) aid_area_touch_cam4_zoom

0xefbc,	// (0x00093ecc) cam4_zoom_cont_pane

0xefc4,	// (0x00093ed4) cam4_zoom_pane_g1

0xefcc,	// (0x00093edc) cam4_zoom_pane_g2

0x8b0d,	// (0x0008da1d) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000948e9) cam4_zoom_pane_g

0xc89e,	// (0x000917ae) cam4_zoom_cont_pane_g1

0xcf4e,	// (0x00091e5e) cam4_zoom_cont_pane_g2

0xcf57,	// (0x00091e67) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000948f0) cam4_zoom_cont_pane_g

0x7fc3,	// (0x0008ced3) call4_image_pane_ParamLimits

0x7fc3,	// (0x0008ced3) call4_image_pane

0xcbe2,	// (0x00091af2) call4_windows_conf_pane_ParamLimits

0xcc23,	// (0x00091b33) popup_call4_audio_in_window_ParamLimits

0xcc23,	// (0x00091b33) popup_call4_audio_in_window

0xeac9,	// (0x000939d9) bg_popup_call2_act_pane_cp02

0xcc99,	// (0x00091ba9) call4_list_conf_pane

0xc05a,	// (0x00090f6a) call4_image_pane_g1

0xc05a,	// (0x00090f6a) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000945ff) call4_image_pane_g

0xcf60,	// (0x00091e70) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf60,	// (0x00091e70) list_single_graphic_popup_conf4_pane

0xeac9,	// (0x000939d9) list_highlight_pane_cp022

0xcf73,	// (0x00091e83) list_single_graphic_popup_conf4_pane_g1

0x3e54,	// (0x00088d64) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000948f7) list_single_graphic_popup_conf4_pane_g

0xcf7b,	// (0x00091e8b) list_single_graphic_popup_conf4_pane_t1

0x29e8,	// (0x000878f8) popup_vtel_slider_window_ParamLimits

0x29e8,	// (0x000878f8) popup_vtel_slider_window

0xcbc4,	// (0x00091ad4) dialer2_ne_pane_t2_ParamLimits

0xcbc4,	// (0x00091ad4) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000947d8) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000947d8) dialer2_ne_pane_t

0xbe3f,	// (0x00090d4f) bg_popup_sub_pane_cp010_ParamLimits

0xbe3f,	// (0x00090d4f) bg_popup_sub_pane_cp010

0x8b15,	// (0x0008da25) popup_vtel_slider_window_g1_ParamLimits

0x8b15,	// (0x0008da25) popup_vtel_slider_window_g1

0x8b28,	// (0x0008da38) popup_vtel_slider_window_g2_ParamLimits

0x8b28,	// (0x0008da38) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000948fc) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000948fc) popup_vtel_slider_window_g

0x8b7e,	// (0x0008da8e) vtel_slider_pane_ParamLimits

0x8b7e,	// (0x0008da8e) vtel_slider_pane

0x8ba0,	// (0x0008dab0) vtel_slider_pane_g1_ParamLimits

0x8ba0,	// (0x0008dab0) vtel_slider_pane_g1

0x8bb4,	// (0x0008dac4) vtel_slider_pane_g2_ParamLimits

0x8bb4,	// (0x0008dac4) vtel_slider_pane_g2

0x8bcc,	// (0x0008dadc) vtel_slider_pane_g3_ParamLimits

0x8bcc,	// (0x0008dadc) vtel_slider_pane_g3

0x8ba0,	// (0x0008dab0) vtel_slider_pane_g4_ParamLimits

0x8ba0,	// (0x0008dab0) vtel_slider_pane_g4

0x8be2,	// (0x0008daf2) vtel_slider_pane_g5_ParamLimits

0x8be2,	// (0x0008daf2) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00094905) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00094905) vtel_slider_pane_g

0xead3,	// (0x000939e3) main_gallery2_pane

0x8307,	// (0x0008d217) aid_size_row_itut2_dropdow_list_ParamLimits

0x8307,	// (0x0008d217) aid_size_row_itut2_dropdow_list

0x8393,	// (0x0008d2a3) grid_vitu2_function_top_pane_ParamLimits

0x8393,	// (0x0008d2a3) grid_vitu2_function_top_pane

0x83fd,	// (0x0008d30d) popup_vitu2_dropdown_list_window_ParamLimits

0x83fd,	// (0x0008d30d) popup_vitu2_dropdown_list_window

0x8426,	// (0x0008d336) popup_vitu2_match_list_window

0x8bf8,	// (0x0008db08) cell_vitu2_function_top_pane_ParamLimits

0x8bf8,	// (0x0008db08) cell_vitu2_function_top_pane

0x8c10,	// (0x0008db20) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8c10,	// (0x0008db20) cell_vitu2_function_top_pane_cp01

0x8c2c,	// (0x0008db3c) cell_vitu2_function_top_wide_pane_ParamLimits

0x8c2c,	// (0x0008db3c) cell_vitu2_function_top_wide_pane

0xead3,	// (0x000939e3) bg_button_pane_cp012

0x8c48,	// (0x0008db58) cell_vitu2_function_top_pane_g1

0xefd4,	// (0x00093ee4) bg_button_pane_cp013_ParamLimits

0xefd4,	// (0x00093ee4) bg_button_pane_cp013

0x8c5c,	// (0x0008db6c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c5c,	// (0x0008db6c) cell_vitu2_function_top_wide_pane_g1

0xead3,	// (0x000939e3) bg_popup_sub_pane_cp20

0x8c74,	// (0x0008db84) list_vitu2_match_list_pane

0xcd43,	// (0x00091c53) bg_popup_sub_pane_cp20_g1

0xcd4b,	// (0x00091c5b) bg_popup_sub_pane_cp20_g2

0x2e77,	// (0x00087d87) bg_popup_sub_pane_cp20_g3

0xcd53,	// (0x00091c63) bg_popup_sub_pane_cp20_g4

0x2e57,	// (0x00087d67) bg_popup_sub_pane_cp20_g5

0xcf91,	// (0x00091ea1) bg_popup_sub_pane_cp20_g6

0xcd63,	// (0x00091c73) bg_popup_sub_pane_cp20_g7

0xcd6b,	// (0x00091c7b) bg_popup_sub_pane_cp20_g8

0xcd73,	// (0x00091c83) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00094910) bg_popup_sub_pane_cp20_g

0xeff0,	// (0x00093f00) list_vitu2_match_list_item_pane_ParamLimits

0xeff0,	// (0x00093f00) list_vitu2_match_list_item_pane

0xf002,	// (0x00093f12) list_vitu2_match_list_item_pane_t1

0xeac9,	// (0x000939d9) bg_popup_sub_pane_cp21

0x3d58,	// (0x00088c68) grid_vitu2_dropdown_list_pane

0x8c9e,	// (0x0008dbae) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8c9e,	// (0x0008dbae) cell_vitu2_dropdown_list_char_pane

0x8cbf,	// (0x0008dbcf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8cbf,	// (0x0008dbcf) cell_vitu2_dropdown_list_ctrl_pane

0xcf99,	// (0x00091ea9) cell_vitu2_dropdown_list_char_pane_g1

0xcfa2,	// (0x00091eb2) cell_vitu2_dropdown_list_char_pane_g2

0xcfab,	// (0x00091ebb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0009492d) cell_vitu2_dropdown_list_char_pane_g

0x8ceb,	// (0x0008dbfb) cell_vitu2_dropdown_list_char_pane_t1

0x8cf9,	// (0x0008dc09) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8cf9,	// (0x0008dc09) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8d06,	// (0x0008dc16) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8d06,	// (0x0008dc16) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8d13,	// (0x0008dc23) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8d13,	// (0x0008dc23) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8d20,	// (0x0008dc30) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8d20,	// (0x0008dc30) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc2a8,	// (0x000911b8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc2a8,	// (0x000911b8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00094934) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00094934) cell_vitu2_dropdown_list_ctrl_pane_g

0x8d3c,	// (0x0008dc4c) aid_size_cell_gallery2_ParamLimits

0x8d3c,	// (0x0008dc4c) aid_size_cell_gallery2

0x8d5a,	// (0x0008dc6a) grid_gallery2_pane_ParamLimits

0x8d5a,	// (0x0008dc6a) grid_gallery2_pane

0x8d74,	// (0x0008dc84) scroll_pane_cp029_ParamLimits

0x8d74,	// (0x0008dc84) scroll_pane_cp029

0x8d80,	// (0x0008dc90) cell_gallery2_pane_ParamLimits

0x8d80,	// (0x0008dc90) cell_gallery2_pane

0xcfb4,	// (0x00091ec4) cell_gallery2_pane_g2

0x8ddc,	// (0x0008dcec) cell_gallery2_pane_g3

0xcfbc,	// (0x00091ecc) cell_gallery2_pane_g4

0xcfc4,	// (0x00091ed4) cell_gallery2_pane_g5

0x245d,	// (0x0008736d) grid_highlight_pane_cp10

0x8426,	// (0x0008d336) popup_vitu2_match_list_window_ParamLimits

0x843b,	// (0x0008d34b) popup_vitu2_query_window_ParamLimits

0x843b,	// (0x0008d34b) popup_vitu2_query_window

0xeac9,	// (0x000939d9) bg_vitu2_candi_button_pane

0xcf99,	// (0x00091ea9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcfa2,	// (0x00091eb2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcfab,	// (0x00091ebb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x07d3,	// (0x000856e3) bg_button_pane_cp015

0x8de4,	// (0x0008dcf4) bg_button_pane_cp016

0x8df7,	// (0x0008dd07) bg_button_pane_cp017

0xbb3f,	// (0x00090a4f) bg_popup_sub_pane_cp22

0xcfcc,	// (0x00091edc) popup_vitu2_query_window_g1

0x0808,	// (0x00085718) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0009493f) popup_vitu2_query_window_g

0x0827,	// (0x00085737) popup_vitu2_query_window_t1_ParamLimits

0x0827,	// (0x00085737) popup_vitu2_query_window_t1

0x085c,	// (0x0008576c) popup_vitu2_query_window_t2_ParamLimits

0x085c,	// (0x0008576c) popup_vitu2_query_window_t2

0x086e,	// (0x0008577e) popup_vitu2_query_window_t3_ParamLimits

0x086e,	// (0x0008577e) popup_vitu2_query_window_t3

0x8e1b,	// (0x0008dd2b) popup_vitu2_query_window_t4_ParamLimits

0x8e1b,	// (0x0008dd2b) popup_vitu2_query_window_t4

0x8e3c,	// (0x0008dd4c) popup_vitu2_query_window_t5_ParamLimits

0x8e3c,	// (0x0008dd4c) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00094946) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00094946) popup_vitu2_query_window_t

0xce45,	// (0x00091d55) main_cset_text_pane

0x885f,	// (0x0008d76f) aid_area_touch_slider_ParamLimits

0x887b,	// (0x0008d78b) cset_slider_pane_ParamLimits

0x88a5,	// (0x0008d7b5) main_cset_slider_pane_g1_ParamLimits

0x88ba,	// (0x0008d7ca) main_cset_slider_pane_g2_ParamLimits

0xce66,	// (0x00091d76) main_cset_slider_pane_g3_ParamLimits

0xce66,	// (0x00091d76) main_cset_slider_pane_g3

0x88cf,	// (0x0008d7df) main_cset_slider_pane_g4_ParamLimits

0x88cf,	// (0x0008d7df) main_cset_slider_pane_g4

0x88de,	// (0x0008d7ee) main_cset_slider_pane_g5_ParamLimits

0x88de,	// (0x0008d7ee) main_cset_slider_pane_g5

0x88ea,	// (0x0008d7fa) main_cset_slider_pane_g6_ParamLimits

0x88ea,	// (0x0008d7fa) main_cset_slider_pane_g6

0xf989,	// (0x00094899) main_cset_slider_pane_g_ParamLimits

0xceae,	// (0x00091dbe) main_cset_slider_pane_t1_ParamLimits

0x895e,	// (0x0008d86e) main_cset_slider_pane_t2_ParamLimits

0x8978,	// (0x0008d888) main_cset_slider_pane_t3_ParamLimits

0x8992,	// (0x0008d8a2) main_cset_slider_pane_t4_ParamLimits

0x89ac,	// (0x0008d8bc) main_cset_slider_pane_t5_ParamLimits

0x89c6,	// (0x0008d8d6) main_cset_slider_pane_t6_ParamLimits

0x89db,	// (0x0008d8eb) main_cset_slider_pane_t7_ParamLimits

0x8a05,	// (0x0008d915) main_cset_slider_pane_t8_ParamLimits

0x8a05,	// (0x0008d915) main_cset_slider_pane_t8

0x8a2d,	// (0x0008d93d) main_cset_slider_pane_t9_ParamLimits

0x8a2d,	// (0x0008d93d) main_cset_slider_pane_t9

0x8a55,	// (0x0008d965) main_cset_slider_pane_t10_ParamLimits

0x8a55,	// (0x0008d965) main_cset_slider_pane_t10

0x8a7d,	// (0x0008d98d) main_cset_slider_pane_t11_ParamLimits

0x8a7d,	// (0x0008d98d) main_cset_slider_pane_t11

0x8aa5,	// (0x0008d9b5) main_cset_slider_pane_t12_ParamLimits

0x8aa5,	// (0x0008d9b5) main_cset_slider_pane_t12

0x8ac2,	// (0x0008d9d2) main_cset_slider_pane_t13_ParamLimits

0x8ac2,	// (0x0008d9d2) main_cset_slider_pane_t13

0xf9ae,	// (0x000948be) main_cset_slider_pane_t_ParamLimits

0xeac9,	// (0x000939d9) bg_popup_sub_pane_cp011

0xcfd8,	// (0x00091ee8) main_cset_text_pane_g1

0xcfe0,	// (0x00091ef0) main_cset_text_pane_t1

0xcfee,	// (0x00091efe) main_cset_text_pane_t2

0xcffc,	// (0x00091f0c) main_cset_text_pane_t3

0xd00a,	// (0x00091f1a) main_cset_text_pane_t4

0xd018,	// (0x00091f28) main_cset_text_pane_t5

0xd026,	// (0x00091f36) main_cset_text_pane_t6

0xd034,	// (0x00091f44) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00094955) main_cset_text_pane_t

0xeac9,	// (0x000939d9) main_cam4_burst_pane

0xeac9,	// (0x000939d9) main_cam5_pane

0x879e,	// (0x0008d6ae) bg_button_pane_cp019

0x87a7,	// (0x0008d6b7) bg_button_pane_cp020

0xce72,	// (0x00091d82) main_cset_slider_pane_g7_ParamLimits

0xce72,	// (0x00091d82) main_cset_slider_pane_g7

0xce7e,	// (0x00091d8e) main_cset_slider_pane_g8_ParamLimits

0xce7e,	// (0x00091d8e) main_cset_slider_pane_g8

0x88fe,	// (0x0008d80e) main_cset_slider_pane_g9_ParamLimits

0x88fe,	// (0x0008d80e) main_cset_slider_pane_g9

0x890a,	// (0x0008d81a) main_cset_slider_pane_g10_ParamLimits

0x890a,	// (0x0008d81a) main_cset_slider_pane_g10

0x8916,	// (0x0008d826) main_cset_slider_pane_g11_ParamLimits

0x8916,	// (0x0008d826) main_cset_slider_pane_g11

0x8922,	// (0x0008d832) main_cset_slider_pane_g12_ParamLimits

0x8922,	// (0x0008d832) main_cset_slider_pane_g12

0x892e,	// (0x0008d83e) main_cset_slider_pane_g13_ParamLimits

0x892e,	// (0x0008d83e) main_cset_slider_pane_g13

0x893a,	// (0x0008d84a) main_cset_slider_pane_g14_ParamLimits

0x893a,	// (0x0008d84a) main_cset_slider_pane_g14

0x8946,	// (0x0008d856) main_cset_slider_pane_g15_ParamLimits

0x8946,	// (0x0008d856) main_cset_slider_pane_g15

0xcedc,	// (0x00091dec) main_cset_slider_pane_t14_ParamLimits

0xcedc,	// (0x00091dec) main_cset_slider_pane_t14

0xcf15,	// (0x00091e25) main_cset_slider_pane_t15_ParamLimits

0xcf15,	// (0x00091e25) main_cset_slider_pane_t15

0x8e5d,	// (0x0008dd6d) aid_cam4_burst_size_cell_ParamLimits

0x8e5d,	// (0x0008dd6d) aid_cam4_burst_size_cell

0x8e7d,	// (0x0008dd8d) grid_cam4_burst_pane_ParamLimits

0x8e7d,	// (0x0008dd8d) grid_cam4_burst_pane

0x8eb5,	// (0x0008ddc5) linegrid_cam4_burst_pane_ParamLimits

0x8eb5,	// (0x0008ddc5) linegrid_cam4_burst_pane

0xd042,	// (0x00091f52) scroll_pane_cp30_ParamLimits

0xd042,	// (0x00091f52) scroll_pane_cp30

0x8ed9,	// (0x0008dde9) cell_cam4_burst_pane_ParamLimits

0x8ed9,	// (0x0008dde9) cell_cam4_burst_pane

0xd04e,	// (0x00091f5e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd04e,	// (0x00091f5e) linegrid_cam4_burst_pane_g1

0x8f26,	// (0x0008de36) linegrid_cam4_burst_pane_g2_ParamLimits

0x8f26,	// (0x0008de36) linegrid_cam4_burst_pane_g2

0xd05b,	// (0x00091f6b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd05b,	// (0x00091f6b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x00094964) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00094964) linegrid_cam4_burst_pane_g

0x8f37,	// (0x0008de47) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f37,	// (0x0008de47) linegrid_cam4_burst_pane_g3_copy1

0xd068,	// (0x00091f78) linegrid_cam4_burst_pane_g4_ParamLimits

0xd068,	// (0x00091f78) linegrid_cam4_burst_pane_g4

0x8f51,	// (0x0008de61) linegrid_cam4_burst_pane_g5_ParamLimits

0x8f51,	// (0x0008de61) linegrid_cam4_burst_pane_g5

0x8f62,	// (0x0008de72) linegrid_cam4_burst_pane_g6_ParamLimits

0x8f62,	// (0x0008de72) linegrid_cam4_burst_pane_g6

0xd075,	// (0x00091f85) linegrid_cam4_burst_pane_g7_ParamLimits

0xd075,	// (0x00091f85) linegrid_cam4_burst_pane_g7

0x8f79,	// (0x0008de89) cell_cam4_burst_pane_g1

0xd08e,	// (0x00091f9e) main_cam5_pane_t1_ParamLimits

0xd08e,	// (0x00091f9e) main_cam5_pane_t1

0xd0a0,	// (0x00091fb0) main_cam5_pane_t2_ParamLimits

0xd0a0,	// (0x00091fb0) main_cam5_pane_t2

0xd0b2,	// (0x00091fc2) main_cam5_pane_t3_ParamLimits

0xd0b2,	// (0x00091fc2) main_cam5_pane_t3

0xd0c4,	// (0x00091fd4) main_cam5_pane_t4_ParamLimits

0xd0c4,	// (0x00091fd4) main_cam5_pane_t4

0xd0dc,	// (0x00091fec) main_cam5_pane_t5_ParamLimits

0xd0dc,	// (0x00091fec) main_cam5_pane_t5

0xd0f0,	// (0x00092000) main_cam5_pane_t6_ParamLimits

0xd0f0,	// (0x00092000) main_cam5_pane_t6

0xd104,	// (0x00092014) main_cam5_pane_t7_ParamLimits

0xd104,	// (0x00092014) main_cam5_pane_t7

0xd116,	// (0x00092026) main_cam5_pane_t8_ParamLimits

0xd116,	// (0x00092026) main_cam5_pane_t8

0xd132,	// (0x00092042) main_cam5_pane_t9_ParamLimits

0xd132,	// (0x00092042) main_cam5_pane_t9

0xd144,	// (0x00092054) main_cam5_pane_t10_ParamLimits

0xd144,	// (0x00092054) main_cam5_pane_t10

0xd156,	// (0x00092066) main_cam5_pane_t11_ParamLimits

0xd156,	// (0x00092066) main_cam5_pane_t11

0xd168,	// (0x00092078) main_cam5_pane_t12_ParamLimits

0xd168,	// (0x00092078) main_cam5_pane_t12

0xd17d,	// (0x0009208d) main_cam5_pane_t13_ParamLimits

0xd17d,	// (0x0009208d) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x00094970) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x00094970) main_cam5_pane_t

0x13fa,	// (0x0008630a) popup_scut_keymap_window_ParamLimits

0x13fa,	// (0x0008630a) popup_scut_keymap_window

0x8f8c,	// (0x0008de9c) aid_size_cell_brow_shortcut

0x245d,	// (0x0008736d) bg_popup_window_pane_cp010

0x8f98,	// (0x0008dea8) grid_scut_pane

0x8fa4,	// (0x0008deb4) cell_scut_pane_ParamLimits

0x8fa4,	// (0x0008deb4) cell_scut_pane

0x8fbb,	// (0x0008decb) cell_scut_pane_g1

0xd19a,	// (0x000920aa) cell_scut_pane_t1

0xd1a9,	// (0x000920b9) cell_scut_pane_t2

0x8fc4,	// (0x0008ded4) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0009498b) cell_scut_pane_t

0x6e8e,	// (0x0008bd9e) main_mup3_pane_g8_ParamLimits

0x6e8e,	// (0x0008bd9e) main_mup3_pane_g8

0x831f,	// (0x0008d22f) area_vitu2_query_pane_ParamLimits

0x831f,	// (0x0008d22f) area_vitu2_query_pane

0x07e7,	// (0x000856f7) input_focus_pane_cp08

0xd1b8,	// (0x000920c8) area_vitu2_query_pane_g1

0x08ec,	// (0x000857fc) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x00094992) area_vitu2_query_pane_g

0x8fd2,	// (0x0008dee2) area_vitu2_query_pane_t1_ParamLimits

0x8fd2,	// (0x0008dee2) area_vitu2_query_pane_t1

0x8fe6,	// (0x0008def6) area_vitu2_query_pane_t2_ParamLimits

0x8fe6,	// (0x0008def6) area_vitu2_query_pane_t2

0x08fd,	// (0x0008580d) area_vitu2_query_pane_t3_ParamLimits

0x08fd,	// (0x0008580d) area_vitu2_query_pane_t3

0xd1c4,	// (0x000920d4) area_vitu2_query_pane_t4_ParamLimits

0xd1c4,	// (0x000920d4) area_vitu2_query_pane_t4

0xd1ec,	// (0x000920fc) area_vitu2_query_pane_t5_ParamLimits

0xd1ec,	// (0x000920fc) area_vitu2_query_pane_t5

0xd214,	// (0x00092124) area_vitu2_query_pane_t6_ParamLimits

0xd214,	// (0x00092124) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00094997) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00094997) area_vitu2_query_pane_t

0x8ffa,	// (0x0008df0a) bg_button_pane_cp018

0x9008,	// (0x0008df18) bg_button_pane_cp021

0x0925,	// (0x00085835) bg_button_pane_cp022

0x0936,	// (0x00085846) input_focus_pane_cp09

0x41ad,	// (0x000890bd) aid_size_touch_mv_arrow_left

0x41d8,	// (0x000890e8) aid_size_touch_mv_arrow_right

0xce8a,	// (0x00091d9a) main_cset_slider_pane_g16_ParamLimits

0xce8a,	// (0x00091d9a) main_cset_slider_pane_g16

0xce96,	// (0x00091da6) main_cset_slider_pane_g17_ParamLimits

0xce96,	// (0x00091da6) main_cset_slider_pane_g17

0x8f79,	// (0x0008de89) cell_cam4_burst_pane_g1_ParamLimits

0xeac9,	// (0x000939d9) compa_mode_pane

0x8b38,	// (0x0008da48) popup_vtel_slider_window_g3_ParamLimits

0x8b38,	// (0x0008da48) popup_vtel_slider_window_g3

0x8b4f,	// (0x0008da5f) popup_vtel_slider_window_g4_ParamLimits

0x8b4f,	// (0x0008da5f) popup_vtel_slider_window_g4

0x8b66,	// (0x0008da76) popup_vtel_slider_window_t1_ParamLimits

0x8b66,	// (0x0008da76) popup_vtel_slider_window_t1

0xeac9,	// (0x000939d9) main_cl_pane

0xbb67,	// (0x00090a77) popup_imed_adjust2_window_ParamLimits

0xbb3f,	// (0x00090a4f) bg_tb_trans_pane_cp05_ParamLimits

0xc5dc,	// (0x000914ec) popup_imed_adjust2_window_g1_ParamLimits

0xc5eb,	// (0x000914fb) popup_imed_adjust2_window_g2_ParamLimits

0xc5eb,	// (0x000914fb) popup_imed_adjust2_window_g2

0xc5f7,	// (0x00091507) popup_imed_adjust2_window_g3_ParamLimits

0xc5f7,	// (0x00091507) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00094702) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00094702) popup_imed_adjust2_window_g

0xc603,	// (0x00091513) popup_imed_adjust2_window_t1_ParamLimits

0xc61b,	// (0x0009152b) slider_imed_adjust_pane_ParamLimits

0xc62f,	// (0x0009153f) slider_imed_adjust_pane_g1_ParamLimits

0xc63f,	// (0x0009154f) slider_imed_adjust_pane_g2_ParamLimits

0xc64f,	// (0x0009155f) slider_imed_adjust_pane_g3_ParamLimits

0xc660,	// (0x00091570) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00094709) slider_imed_adjust_pane_g_ParamLimits

0x80a8,	// (0x0008cfb8) aid_touch_area_cam4_ParamLimits

0x80a8,	// (0x0008cfb8) aid_touch_area_cam4

0xeebf,	// (0x00093dcf) battery_pane_cp01

0x8177,	// (0x0008d087) main_camera4_pane_g6_ParamLimits

0x8177,	// (0x0008d087) main_camera4_pane_g6

0x81a1,	// (0x0008d0b1) main_camera4_pane_t2_ParamLimits

0x81a1,	// (0x0008d0b1) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0009480c) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0009480c) main_camera4_pane_t

0x81d6,	// (0x0008d0e6) aid_touch_area_vid4_ParamLimits

0x81d6,	// (0x0008d0e6) aid_touch_area_vid4

0x822a,	// (0x0008d13a) main_video4_pane_g5_ParamLimits

0x822a,	// (0x0008d13a) main_video4_pane_g5

0x824f,	// (0x0008d15f) vid4_progress_pane_ParamLimits

0x824f,	// (0x0008d15f) vid4_progress_pane

0xcea2,	// (0x00091db2) main_cset_slider_pane_g18_ParamLimits

0xcea2,	// (0x00091db2) main_cset_slider_pane_g18

0xd082,	// (0x00091f92) cell_cam4_burst_pane_g2_ParamLimits

0xd082,	// (0x00091f92) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0009496b) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0009496b) cell_cam4_burst_pane_g

0x1b79,	// (0x00086a89) bg_cl_pane_ParamLimits

0x1b79,	// (0x00086a89) bg_cl_pane

0x9014,	// (0x0008df24) cl_header_pane_ParamLimits

0x9014,	// (0x0008df24) cl_header_pane

0x9028,	// (0x0008df38) cl_listscroll_pane_ParamLimits

0x9028,	// (0x0008df38) cl_listscroll_pane

0xd260,	// (0x00092170) bg_cl_pane_g1

0xd268,	// (0x00092178) bg_cl_pane_g2

0xd270,	// (0x00092180) bg_cl_pane_g3

0xd278,	// (0x00092188) bg_cl_pane_g4

0xd280,	// (0x00092190) bg_cl_pane_g5

0xd288,	// (0x00092198) bg_cl_pane_g6

0xd290,	// (0x000921a0) bg_cl_pane_g7

0xd298,	// (0x000921a8) bg_cl_pane_g8

0xd2a0,	// (0x000921b0) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000949a6) bg_cl_pane_g

0x9038,	// (0x0008df48) aid_height_cl_leading_ParamLimits

0x9038,	// (0x0008df48) aid_height_cl_leading

0x9044,	// (0x0008df54) aid_height_cl_text_ParamLimits

0x9044,	// (0x0008df54) aid_height_cl_text

0xead3,	// (0x000939e3) bg_cl_header_pane_ParamLimits

0xead3,	// (0x000939e3) bg_cl_header_pane

0x9063,	// (0x0008df73) cl_header_pane_g1_ParamLimits

0x9063,	// (0x0008df73) cl_header_pane_g1

0x9079,	// (0x0008df89) cl_header_pane_t1_ParamLimits

0x9079,	// (0x0008df89) cl_header_pane_t1

0xd2a8,	// (0x000921b8) cl_list_pane

0xce5d,	// (0x00091d6d) hc_scroll_pane_cp01

0x2e57,	// (0x00087d67) bg_cl_header_pane_g1

0xcd43,	// (0x00091c53) bg_cl_header_pane_g2

0x2e77,	// (0x00087d87) bg_cl_header_pane_g3

0xcd53,	// (0x00091c63) bg_cl_header_pane_g4

0xcd4b,	// (0x00091c5b) bg_cl_header_pane_g5

0xcf91,	// (0x00091ea1) bg_cl_header_pane_g6

0xcd6b,	// (0x00091c7b) bg_cl_header_pane_g7

0xcd73,	// (0x00091c83) bg_cl_header_pane_g8

0xcd63,	// (0x00091c73) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000949b9) bg_cl_header_pane_g

0x9092,	// (0x0008dfa2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9092,	// (0x0008dfa2) hc_cl_list_double_graphic_heading_pane

0x90a3,	// (0x0008dfb3) hc_cl_list_single_graphic_pane_ParamLimits

0x90a3,	// (0x0008dfb3) hc_cl_list_single_graphic_pane

0x90bc,	// (0x0008dfcc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x90bc,	// (0x0008dfcc) hc_cl_list_single_graphic_pane_g1

0x90c8,	// (0x0008dfd8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x90c8,	// (0x0008dfd8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000949cc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000949cc) hc_cl_list_single_graphic_pane_g

0x90dc,	// (0x0008dfec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x90dc,	// (0x0008dfec) hc_cl_list_single_graphic_pane_t1

0x90bc,	// (0x0008dfcc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x90bc,	// (0x0008dfcc) hc_cl_list_double_graphic_heading_pane_g1

0x90f1,	// (0x0008e001) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x90f1,	// (0x0008e001) hc_cl_list_double_graphic_heading_pane_g2

0x9105,	// (0x0008e015) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9105,	// (0x0008e015) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000949d1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000949d1) hc_cl_list_double_graphic_heading_pane_g

0x9119,	// (0x0008e029) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9119,	// (0x0008e029) hc_cl_list_double_graphic_heading_pane_t1

0x912e,	// (0x0008e03e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x912e,	// (0x0008e03e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000949d8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000949d8) hc_cl_list_double_graphic_heading_pane_t

0xf018,	// (0x00093f28) vid4_progress_pane_g1

0xf028,	// (0x00093f38) vid4_progress_pane_g2

0x9143,	// (0x0008e053) vid4_progress_pane_g3

0xf038,	// (0x00093f48) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000949dd) vid4_progress_pane_g

0x9155,	// (0x0008e065) vid4_progress_pane_t1

0xf050,	// (0x00093f60) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000949e8) vid4_progress_pane_t

0x916b,	// (0x0008e07b) wait_bar_pane_cp07

0xbe4d,	// (0x00090d5d) blid_firmament_pane_ParamLimits

0xbe90,	// (0x00090da0) popup_blid_sat_info2_window_g1

0xbeb4,	// (0x00090dc4) popup_blid_sat_info2_window_t3

0xbec2,	// (0x00090dd2) popup_blid_sat_info2_window_t4

0xbed0,	// (0x00090de0) popup_blid_sat_info2_window_t5

0xbede,	// (0x00090dee) popup_blid_sat_info2_window_t6

0xbeee,	// (0x00090dfe) popup_blid_sat_info2_window_t7

0xbefc,	// (0x00090e0c) popup_blid_sat_info2_window_t8

0xbf0a,	// (0x00090e1a) popup_blid_sat_info2_window_t9

0xbf18,	// (0x00090e28) popup_blid_sat_info2_window_t10

0xbfda,	// (0x00090eea) aid_firma_cardinal_ParamLimits

0xbfee,	// (0x00090efe) blid_firmament_pane_t1_ParamLimits

0xc005,	// (0x00090f15) blid_firmament_pane_t2_ParamLimits

0xc01c,	// (0x00090f2c) blid_firmament_pane_t3_ParamLimits

0xc033,	// (0x00090f43) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000945f6) blid_firmament_pane_t_ParamLimits

0xc04a,	// (0x00090f5a) blid_sat_info_pane_ParamLimits

0xead3,	// (0x000939e3) main_cam_set_pane_ParamLimits

0x7751,	// (0x0008c661) aid_size_cell_colour_35_ParamLimits

0x7771,	// (0x0008c681) aid_size_cell_colour_112_ParamLimits

0x7791,	// (0x0008c6a1) aid_size_cell_effect_ParamLimits

0xbb3f,	// (0x00090a4f) bg_tb_trans_pane_cp02_ParamLimits

0x3aa4,	// (0x000889b4) heading_imed_pane_ParamLimits

0x77b1,	// (0x0008c6c1) listscroll_imed_pane_ParamLimits

0x5850,	// (0x0008a760) popup_call2_audio_first_window_g5_ParamLimits

0x5850,	// (0x0008a760) popup_call2_audio_first_window_g5

0x7d4f,	// (0x0008cc5f) aid_size_touch_image3_arrow_left_ParamLimits

0x7d4f,	// (0x0008cc5f) aid_size_touch_image3_arrow_left

0x7d7b,	// (0x0008cc8b) aid_size_touch_image3_arrow_right_ParamLimits

0x7d7b,	// (0x0008cc8b) aid_size_touch_image3_arrow_right

0xf065,	// (0x00093f75) vid4_progress_pane_t3

0x7ac6,	// (0x0008c9d6) main_hwr_training_symbol_option_pane_ParamLimits

0x7ac6,	// (0x0008c9d6) main_hwr_training_symbol_option_pane

0xc8c9,	// (0x000917d9) popup_hwr_training_preview_window_ParamLimits

0xc8c9,	// (0x000917d9) popup_hwr_training_preview_window

0x7ae6,	// (0x0008c9f6) hwr_training_navi_pane_g5_ParamLimits

0x7ae6,	// (0x0008c9f6) hwr_training_navi_pane_g5

0xcd31,	// (0x00091c41) popup_char_count_window

0xead3,	// (0x000939e3) bg_popup_sub_pane_cp20_ParamLimits

0x8c74,	// (0x0008db84) list_vitu2_match_list_pane_ParamLimits

0x8c83,	// (0x0008db93) vitu2_page_scroll_pane_ParamLimits

0x8c83,	// (0x0008db93) vitu2_page_scroll_pane

0xd2b9,	// (0x000921c9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2b9,	// (0x000921c9) list_single_hwr_training_symbol_option_pane

0xd2cc,	// (0x000921dc) list_single_hwr_training_symbol_option_pane_g1

0xd2d4,	// (0x000921e4) list_single_hwr_training_symbol_option_pane_t1

0xd2e2,	// (0x000921f2) bg_button_pane_cp023

0xd2eb,	// (0x000921fb) bg_button_pane_cp024

0x91a9,	// (0x0008e0b9) vitu2_page_scroll_pane_g1

0x91b1,	// (0x0008e0c1) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000949ef) vitu2_page_scroll_pane_g

0x91b9,	// (0x0008e0c9) vitu2_page_scroll_pane_t1

0xc083,	// (0x00090f93) popup_char_count_window_g1

0xd31e,	// (0x0009222e) popup_char_count_window_g2

0xd327,	// (0x00092237) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000949f4) popup_char_count_window_g

0xd330,	// (0x00092240) popup_char_count_window_t1

0xeac9,	// (0x000939d9) main_vded2_pane

0xc5c8,	// (0x000914d8) aid_size_cell_imed_line

0xc5d2,	// (0x000914e2) grid_imed_line_width_pane

0xef6f,	// (0x00093e7f) vid4_indicators_pane_g4

0xd33e,	// (0x0009224e) cell_imed_line_width_pane_ParamLimits

0xd33e,	// (0x0009224e) cell_imed_line_width_pane

0xd352,	// (0x00092262) cell_imed_line_width_pane_g1

0xd35b,	// (0x0009226b) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000949fb) cell_imed_line_width_pane_g

0x91c8,	// (0x0008e0d8) main_vded2_pane_g1_ParamLimits

0x91c8,	// (0x0008e0d8) main_vded2_pane_g1

0x91de,	// (0x0008e0ee) main_vded2_pane_g2_ParamLimits

0x91de,	// (0x0008e0ee) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00094a00) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00094a00) main_vded2_pane_g

0x91f0,	// (0x0008e100) vded2_slider_pane_ParamLimits

0x91f0,	// (0x0008e100) vded2_slider_pane

0x9200,	// (0x0008e110) aid_size_touch_vded2_end

0x920a,	// (0x0008e11a) aid_size_touch_vded2_playhead

0xd363,	// (0x00092273) aid_size_touch_vded2_start

0xd36b,	// (0x0009227b) vded2_slider_bg_pane

0xd374,	// (0x00092284) vded2_slider_pane_g1

0xd37d,	// (0x0009228d) vded2_slider_pane_g2

0x9214,	// (0x0008e124) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00094a05) vded2_slider_pane_g

0xd385,	// (0x00092295) vded2_slider_bg_pane_g1

0xd38e,	// (0x0009229e) vded2_slider_bg_pane_g2

0xd397,	// (0x000922a7) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00094a0c) vded2_slider_bg_pane_g

0x4a07,	// (0x00089917) aid_postcard_touch_down_pane_ParamLimits

0x4a07,	// (0x00089917) aid_postcard_touch_down_pane

0x4a1d,	// (0x0008992d) aid_postcard_touch_up_pane_ParamLimits

0x4a1d,	// (0x0008992d) aid_postcard_touch_up_pane

0xeac9,	// (0x000939d9) main_blid2_pane

0xbb4d,	// (0x00090a5d) popup_blid2_search_window

0xeac9,	// (0x000939d9) blid2_gps_pane

0xeac9,	// (0x000939d9) blid2_navig_pane

0xeac9,	// (0x000939d9) blid2_search_pane

0xeac9,	// (0x000939d9) blid2_tripm_pane

0x921f,	// (0x0008e12f) blid2_search_pane_g1_ParamLimits

0x921f,	// (0x0008e12f) blid2_search_pane_g1

0x9237,	// (0x0008e147) blid2_search_pane_t1_ParamLimits

0x9237,	// (0x0008e147) blid2_search_pane_t1

0x9249,	// (0x0008e159) aid_size_cell_blid2_gps_ParamLimits

0x9249,	// (0x0008e159) aid_size_cell_blid2_gps

0x9261,	// (0x0008e171) blid2_gps_pane_g1_ParamLimits

0x9261,	// (0x0008e171) blid2_gps_pane_g1

0x9275,	// (0x0008e185) grid_blid2_satellite_pane_ParamLimits

0x9275,	// (0x0008e185) grid_blid2_satellite_pane

0x928f,	// (0x0008e19f) blid2_navig_pane_g1_ParamLimits

0x928f,	// (0x0008e19f) blid2_navig_pane_g1

0x929b,	// (0x0008e1ab) blid2_navig_pane_t1_ParamLimits

0x929b,	// (0x0008e1ab) blid2_navig_pane_t1

0x92b6,	// (0x0008e1c6) blid2_navig_pane_t2_ParamLimits

0x92b6,	// (0x0008e1c6) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00094a13) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00094a13) blid2_navig_pane_t

0x92d1,	// (0x0008e1e1) blid2_navig_ring_pane_ParamLimits

0x92d1,	// (0x0008e1e1) blid2_navig_ring_pane

0x92ea,	// (0x0008e1fa) blid2_speed_pane_ParamLimits

0x92ea,	// (0x0008e1fa) blid2_speed_pane

0x92f6,	// (0x0008e206) blid2_tripm_pane_g1_ParamLimits

0x92f6,	// (0x0008e206) blid2_tripm_pane_g1

0x9311,	// (0x0008e221) blid2_tripm_pane_g2_ParamLimits

0x9311,	// (0x0008e221) blid2_tripm_pane_g2

0x9325,	// (0x0008e235) blid2_tripm_pane_g3_ParamLimits

0x9325,	// (0x0008e235) blid2_tripm_pane_g3

0x9339,	// (0x0008e249) blid2_tripm_pane_g4_ParamLimits

0x9339,	// (0x0008e249) blid2_tripm_pane_g4

0x934d,	// (0x0008e25d) blid2_tripm_pane_g5_ParamLimits

0x934d,	// (0x0008e25d) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00094a18) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00094a18) blid2_tripm_pane_g

0x9373,	// (0x0008e283) blid2_tripm_pane_t1_ParamLimits

0x9373,	// (0x0008e283) blid2_tripm_pane_t1

0x938e,	// (0x0008e29e) blid2_tripm_pane_t2_ParamLimits

0x938e,	// (0x0008e29e) blid2_tripm_pane_t2

0x93a7,	// (0x0008e2b7) blid2_tripm_pane_t3_ParamLimits

0x93a7,	// (0x0008e2b7) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00094a25) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00094a25) blid2_tripm_pane_t

0x93ee,	// (0x0008e2fe) cell_blid2_satellite_pane_ParamLimits

0x93ee,	// (0x0008e2fe) cell_blid2_satellite_pane

0x940c,	// (0x0008e31c) cell_blid2_satellite_pane_g1

0xd3a0,	// (0x000922b0) cell_blid2_satellite_pane_t1

0xc05a,	// (0x00090f6a) blid2_speed_pane_g1

0xd3ae,	// (0x000922be) blid2_speed_pane_t1

0xd3bc,	// (0x000922cc) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00094a2e) blid2_speed_pane_t

0xc05a,	// (0x00090f6a) blid2_navig_ring_pane_g1

0x9415,	// (0x0008e325) blid2_navig_ring_pane_g2

0x941d,	// (0x0008e32d) blid2_navig_ring_pane_g3

0x9425,	// (0x0008e335) blid2_navig_ring_pane_g4

0x942d,	// (0x0008e33d) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00094a33) blid2_navig_ring_pane_g

0xeac9,	// (0x000939d9) bg_popup_window_pane_cp011

0xd3ca,	// (0x000922da) popup_blid2_search_window_g1

0xd3d2,	// (0x000922e2) popup_blid2_search_window_t1

0xd3e0,	// (0x000922f0) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00094a3e) popup_blid2_search_window_t

0x2d21,	// (0x00087c31) main_browser_pane_g1

0x1b79,	// (0x00086a89) main_browser_pane_ParamLimits

0xead3,	// (0x000939e3) bg_button_pane_cp011_ParamLimits

0x8537,	// (0x0008d447) cell_vitu2_function_pane_g1_ParamLimits

0xbb3f,	// (0x00090a4f) bg_popup_sub_pane_cp22_ParamLimits

0x07e7,	// (0x000856f7) input_focus_pane_cp08_ParamLimits

0x8e0a,	// (0x0008dd1a) popup_vitu2_query_button_pane_ParamLimits

0x8e0a,	// (0x0008dd1a) popup_vitu2_query_button_pane

0x07fe,	// (0x0008570e) popup_vitu2_query_input_button_pane

0xcfcc,	// (0x00091edc) popup_vitu2_query_window_g1_ParamLimits

0x0808,	// (0x00085718) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0009493f) popup_vitu2_query_window_g_ParamLimits

0xeac9,	// (0x000939d9) bg_button_pane_cp026

0x9435,	// (0x0008e345) popup_vitu2_query_input_button_pane_g1

0xeac9,	// (0x000939d9) bg_button_pane_cp025

0xd3ee,	// (0x000922fe) popup_vitu2_query_button_pane_t1

0x6b80,	// (0x0008ba90) main_mp3_pane_t6

0x6b8e,	// (0x0008ba9e) popup_slider_window_cp01

0xeedb,	// (0x00093deb) cam4_battery_pane

0xef2e,	// (0x00093e3e) cam4_battery_pane_cp02

0xf010,	// (0x00093f20) cam4_battery_pane_cp01

0xf010,	// (0x00093f20) cam4_battery_pane_cp03

0xc05a,	// (0x00090f6a) cam4_battery_pane_g1

0xd3fc,	// (0x0009230c) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00094a43) cam4_battery_pane_g

0xbf26,	// (0x00090e36) popup_blid_sat_info2_window_t11

0x41ad,	// (0x000890bd) aid_size_touch_mv_arrow_left_ParamLimits

0x41d8,	// (0x000890e8) aid_size_touch_mv_arrow_right_ParamLimits

0x4236,	// (0x00089146) navi_pane_g1_ParamLimits

0x4242,	// (0x00089152) navi_pane_g2_ParamLimits

0x4270,	// (0x00089180) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000942f5) navi_pane_g_ParamLimits

0x432e,	// (0x0008923e) navi_pane_mv_t1_ParamLimits

0x77bd,	// (0x0008c6cd) grid_imed_effect_pane_ParamLimits

0x28d3,	// (0x000877e3) aid_placing_vt_slider_lsc

0x28e3,	// (0x000877f3) aid_placing_vt_slider_prt

0xead3,	// (0x000939e3) bg_tb_trans_pane_cp01_ParamLimits

0xc1c8,	// (0x000910d8) popup_image_details_window_g1_ParamLimits

0xc1db,	// (0x000910eb) popup_image_details_window_g2_ParamLimits

0xc1f0,	// (0x00091100) popup_image_details_window_g3_ParamLimits

0xc1f0,	// (0x00091100) popup_image_details_window_g3

0xf72b,	// (0x0009463b) popup_image_details_window_g_ParamLimits

0xc204,	// (0x00091114) popup_image_details_window_t1_ParamLimits

0xc216,	// (0x00091126) popup_image_details_window_t2_ParamLimits

0xc22f,	// (0x0009113f) popup_image_details_window_t3_ParamLimits

0xc243,	// (0x00091153) popup_image_details_window_t4_ParamLimits

0xc25e,	// (0x0009116e) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00094642) popup_image_details_window_t_ParamLimits

0x9050,	// (0x0008df60) cl_header_name_pane_ParamLimits

0x9050,	// (0x0008df60) cl_header_name_pane

0x943d,	// (0x0008e34d) cl_header_name_pane_t1_ParamLimits

0x943d,	// (0x0008e34d) cl_header_name_pane_t1

0x945e,	// (0x0008e36e) cl_header_name_pane_t2_ParamLimits

0x945e,	// (0x0008e36e) cl_header_name_pane_t2

0x94a0,	// (0x0008e3b0) cl_header_name_pane_t3_ParamLimits

0x94a0,	// (0x0008e3b0) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00094a48) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00094a48) cl_header_name_pane_t

0x42ff,	// (0x0008920f) navi_pane_mv_g2_ParamLimits

0xccee,	// (0x00091bfe) field_vitu2_entry_pane_g1_ParamLimits

0xccfa,	// (0x00091c0a) field_vitu2_entry_pane_g2_ParamLimits

0xcd06,	// (0x00091c16) field_vitu2_entry_pane_g3_ParamLimits

0xcd06,	// (0x00091c16) field_vitu2_entry_pane_g3

0xf92e,	// (0x0009483e) field_vitu2_entry_pane_g_ParamLimits

0xefa2,	// (0x00093eb2) cell_vitu2_itu_pane_g1_ParamLimits

0x84cb,	// (0x0008d3db) cell_vitu2_itu_pane_g2_ParamLimits

0x84cb,	// (0x0008d3db) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0009484a) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0009484a) cell_vitu2_itu_pane_g

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp05_ParamLimits

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp05

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp03

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp04

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp10_ParamLimits

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp10

0x0925,	// (0x00085835) bg_vkb2_func_pane_cp08

0x8ffa,	// (0x0008df0a) bg_vkb2_func_pane_cp06

0x9008,	// (0x0008df18) bg_vkb2_func_pane_cp07

0xd2f4,	// (0x00092204) bg_vkb2_func_pane_cp11_ParamLimits

0xd2f4,	// (0x00092204) bg_vkb2_func_pane_cp11

0xd309,	// (0x00092219) bg_vkb2_func_pane_cp12_ParamLimits

0xd309,	// (0x00092219) bg_vkb2_func_pane_cp12

0xeac9,	// (0x000939d9) bg_vkb2_func_pane_cp09

0xcd43,	// (0x00091c53) bg_vkb2_func_pane_g1

0x2e77,	// (0x00087d87) bg_vkb2_func_pane_g2

0xcd4b,	// (0x00091c5b) bg_vkb2_func_pane_g3

0xcd53,	// (0x00091c63) bg_vkb2_func_pane_g4

0xcf91,	// (0x00091ea1) bg_vkb2_func_pane_g5

0xcd6b,	// (0x00091c7b) bg_vkb2_func_pane_g6

0xcd73,	// (0x00091c83) bg_vkb2_func_pane_g7

0xcd63,	// (0x00091c73) bg_vkb2_func_pane_g8

0x2e57,	// (0x00087d67) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00094a4f) bg_vkb2_func_pane_g

0x9361,	// (0x0008e271) blid2_tripm_pane_g6_ParamLimits

0x9361,	// (0x0008e271) blid2_tripm_pane_g6

0xcb7e,	// (0x00091a8e) mp4_progress_pane_g1

0x93da,	// (0x0008e2ea) blid2_tripm_values_pane_ParamLimits

0x93da,	// (0x0008e2ea) blid2_tripm_values_pane

0x94d1,	// (0x0008e3e1) blid2_tripm_values_pane_t1

0x94df,	// (0x0008e3ef) blid2_tripm_values_pane_t2

0x94ed,	// (0x0008e3fd) blid2_tripm_values_pane_t3

0x94fb,	// (0x0008e40b) blid2_tripm_values_pane_t4

0x9509,	// (0x0008e419) blid2_tripm_values_pane_t5

0x9517,	// (0x0008e427) blid2_tripm_values_pane_t6

0x9525,	// (0x0008e435) blid2_tripm_values_pane_t7

0x9533,	// (0x0008e443) blid2_tripm_values_pane_t8

0x9541,	// (0x0008e451) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00094a62) blid2_tripm_values_pane_t

0x291f,	// (0x0008782f) call_video_pane_t1_ParamLimits

0x293d,	// (0x0008784d) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009417e) call_video_pane_t_ParamLimits

0x0634,	// (0x00085544) msg_header_pane_g1_ParamLimits

0x4971,	// (0x00089881) msg_header_pane_g2_ParamLimits

0x4971,	// (0x00089881) msg_header_pane_g2

0x0001,

0xf488,	// (0x00094398) msg_header_pane_g_ParamLimits

0xf488,	// (0x00094398) msg_header_pane_g

0x1b79,	// (0x00086a89) main_clock2_pane_ParamLimits

0x74b6,	// (0x0008c3c6) grid_clock2_toolbar_pane_ParamLimits

0x74b6,	// (0x0008c3c6) grid_clock2_toolbar_pane

0x74b6,	// (0x0008c3c6) listscroll_clock2_pane_ParamLimits

0x74b6,	// (0x0008c3c6) listscroll_clock2_pane

0x75b2,	// (0x0008c4c2) main_clock2_pane_t3_ParamLimits

0x75b2,	// (0x0008c4c2) main_clock2_pane_t3

0x75d6,	// (0x0008c4e6) main_clock2_pane_t4_ParamLimits

0x75d6,	// (0x0008c4e6) main_clock2_pane_t4

0xd406,	// (0x00092316) cell_clock2_toolbar_pane

0xd40e,	// (0x0009231e) cell_clock2_toolbar_pane_cp01

0xd40e,	// (0x0009231e) cell_clock2_toolbar_pane_cp02

0xd416,	// (0x00092326) cell_clock2_toolbar_pane_cp03

0xd41e,	// (0x0009232e) list_clock2_pane

0x3f59,	// (0x00088e69) scroll_pane_cp10

0xd426,	// (0x00092336) list_single_clock2_pane_ParamLimits

0xd426,	// (0x00092336) list_single_clock2_pane

0x245d,	// (0x0008736d) list_highlight_pane_cp08

0xd433,	// (0x00092343) list_single_clock2_pane_t1

0xd441,	// (0x00092351) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00094a75) list_single_clock2_pane_t

0xeac9,	// (0x000939d9) bg_button_pane_cp10

0xd44f,	// (0x0009235f) cell_clock2_toolbar_pane_g1

0x4985,	// (0x00089895) aid_main_viewer_pane_g1_ParamLimits

0x4985,	// (0x00089895) aid_main_viewer_pane_g1

0x4993,	// (0x000898a3) aid_main_viewer_pane_g2_ParamLimits

0x4993,	// (0x000898a3) aid_main_viewer_pane_g2

0x49a1,	// (0x000898b1) aid_main_viewer_pane_g3_ParamLimits

0x49a1,	// (0x000898b1) aid_main_viewer_pane_g3

0x49b0,	// (0x000898c0) aid_main_viewer_pane_g4_ParamLimits

0x49b0,	// (0x000898c0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000943a9) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000943a9) aid_main_viewer_pane_g

0x5da8,	// (0x0008acb8) main_calc_pane_ParamLimits

0x5dbc,	// (0x0008accc) main_dialer2_pane_ParamLimits

0xeac9,	// (0x000939d9) main_cam6_pane

0xeac9,	// (0x000939d9) main_vid6_pane

0x74c2,	// (0x0008c3d2) listscroll_gen_pane_cp06_ParamLimits

0x74c2,	// (0x0008c3d2) listscroll_gen_pane_cp06

0x75f9,	// (0x0008c509) main_clock2_pane_t5_ParamLimits

0x75f9,	// (0x0008c509) main_clock2_pane_t5

0x7653,	// (0x0008c563) aid_call2_pane_cp10_ParamLimits

0x7665,	// (0x0008c575) aid_call_pane_cp10_ParamLimits

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7677,	// (0x0008c587) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7677,	// (0x0008c587) popup_clock_analogue_window_cp10_g4_ParamLimits

0x413c,	// (0x0008904c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000946f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x7689,	// (0x0008c599) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7cfc,	// (0x0008cc0c) cell_dialer2_keypad_pane_g2_ParamLimits

0x7cfc,	// (0x0008cc0c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000947dd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000947dd) cell_dialer2_keypad_pane_g

0x7d18,	// (0x0008cc28) cell_dialer2_keypad_pane_t1

0x8851,	// (0x0008d761) main_cset_text2_pane_ParamLimits

0x8851,	// (0x0008d761) main_cset_text2_pane

0xd1b8,	// (0x000920c8) area_vitu2_query_pane_g1_ParamLimits

0x08ec,	// (0x000857fc) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x00094992) area_vitu2_query_pane_g_ParamLimits

0xd23c,	// (0x0009214c) area_vitu2_query_pane_t7_ParamLimits

0xd23c,	// (0x0009214c) area_vitu2_query_pane_t7

0x8ffa,	// (0x0008df0a) bg_button_pane_cp018_ParamLimits

0x9008,	// (0x0008df18) bg_button_pane_cp021_ParamLimits

0x0925,	// (0x00085835) bg_button_pane_cp022_ParamLimits

0x0925,	// (0x00085835) bg_vkb2_func_pane_cp08_ParamLimits

0x8ffa,	// (0x0008df0a) bg_vkb2_func_pane_cp06_ParamLimits

0x9008,	// (0x0008df18) bg_vkb2_func_pane_cp07_ParamLimits

0x0936,	// (0x00085846) input_focus_pane_cp09_ParamLimits

0xf08c,	// (0x00093f9c) cam6_autofocus_pane_ParamLimits

0xf08c,	// (0x00093f9c) cam6_autofocus_pane

0x954f,	// (0x0008e45f) cam6_image_uncrop_pane_ParamLimits

0x954f,	// (0x0008e45f) cam6_image_uncrop_pane

0x955e,	// (0x0008e46e) cam6_indi_pane_ParamLimits

0x955e,	// (0x0008e46e) cam6_indi_pane

0x9574,	// (0x0008e484) cam6_mode_pane_ParamLimits

0x9574,	// (0x0008e484) cam6_mode_pane

0x9586,	// (0x0008e496) cam6_timer_pane_ParamLimits

0x9586,	// (0x0008e496) cam6_timer_pane

0x9596,	// (0x0008e4a6) cam6_zoom_pane_ParamLimits

0x9596,	// (0x0008e4a6) cam6_zoom_pane

0x95a2,	// (0x0008e4b2) cam6_mode_pane_g1_ParamLimits

0x95a2,	// (0x0008e4b2) cam6_mode_pane_g1

0x95b2,	// (0x0008e4c2) cam6_mode_pane_g2_ParamLimits

0x95b2,	// (0x0008e4c2) cam6_mode_pane_g2

0x95c2,	// (0x0008e4d2) cam6_mode_pane_g3_ParamLimits

0x95c2,	// (0x0008e4d2) cam6_mode_pane_g3

0x95d2,	// (0x0008e4e2) cam6_mode_pane_g4_ParamLimits

0x95d2,	// (0x0008e4e2) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00094a7a) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00094a7a) cam6_mode_pane_g

0xd457,	// (0x00092367) bg_tb_trans_pane_cp08_ParamLimits

0xd457,	// (0x00092367) bg_tb_trans_pane_cp08

0xd465,	// (0x00092375) cam6_battery_pane_ParamLimits

0xd465,	// (0x00092375) cam6_battery_pane

0xd47b,	// (0x0009238b) cam6_indi_pane_g1_ParamLimits

0xd47b,	// (0x0009238b) cam6_indi_pane_g1

0xd48d,	// (0x0009239d) cam6_indi_pane_g2_ParamLimits

0xd48d,	// (0x0009239d) cam6_indi_pane_g2

0xd49f,	// (0x000923af) cam6_indi_pane_g3_ParamLimits

0xd49f,	// (0x000923af) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00094a83) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00094a83) cam6_indi_pane_g

0xd4b1,	// (0x000923c1) cam6_indi_pane_t1_ParamLimits

0xd4b1,	// (0x000923c1) cam6_indi_pane_t1

0x95e2,	// (0x0008e4f2) cam6_autofocus_pane_g1

0x95ea,	// (0x0008e4fa) cam6_autofocus_pane_g2

0x95f2,	// (0x0008e502) cam6_autofocus_pane_g3

0x95fa,	// (0x0008e50a) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00094a8a) cam6_autofocus_pane_g

0xd4d7,	// (0x000923e7) cam6_timer_pane_g1

0xd4df,	// (0x000923ef) cam6_timer_pane_t1

0xd4ed,	// (0x000923fd) cam6_zoom_cont_pane

0xd4f5,	// (0x00092405) cam6_zoom_pane_g1

0xd4fd,	// (0x0009240d) cam6_zoom_pane_g2

0x9602,	// (0x0008e512) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00094a93) cam6_zoom_pane_g

0xc05a,	// (0x00090f6a) cam6_battery_pane_g1

0xc05a,	// (0x00090f6a) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000945ff) cam6_battery_pane_g

0xd505,	// (0x00092415) cam6_zoom_cont_pane_g1

0xd50e,	// (0x0009241e) cam6_zoom_cont_pane_g2

0xd517,	// (0x00092427) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00094a9a) cam6_zoom_cont_pane_g

0x961f,	// (0x0008e52f) cam6_mode_pane_cp_ParamLimits

0x961f,	// (0x0008e52f) cam6_mode_pane_cp

0x9596,	// (0x0008e4a6) cam6_zoom_pane_cp_ParamLimits

0x9596,	// (0x0008e4a6) cam6_zoom_pane_cp

0x9631,	// (0x0008e541) vid6_image_uncrop_cif_pane_ParamLimits

0x9631,	// (0x0008e541) vid6_image_uncrop_cif_pane

0x9641,	// (0x0008e551) vid6_image_uncrop_nhd_pane_ParamLimits

0x9641,	// (0x0008e551) vid6_image_uncrop_nhd_pane

0x954f,	// (0x0008e45f) vid6_image_uncrop_vga_pane_ParamLimits

0x954f,	// (0x0008e45f) vid6_image_uncrop_vga_pane

0x9650,	// (0x0008e560) vid6_image_uncrop_wvga_pane_ParamLimits

0x9650,	// (0x0008e560) vid6_image_uncrop_wvga_pane

0x965f,	// (0x0008e56f) vid6_indi_pane_ParamLimits

0x965f,	// (0x0008e56f) vid6_indi_pane

0xd457,	// (0x00092367) bg_tb_trans_pane_cp09_ParamLimits

0xd457,	// (0x00092367) bg_tb_trans_pane_cp09

0xd52f,	// (0x0009243f) cam6_battery_pane_cp_ParamLimits

0xd52f,	// (0x0009243f) cam6_battery_pane_cp

0xd53b,	// (0x0009244b) vid6_indi_pane_g1_ParamLimits

0xd53b,	// (0x0009244b) vid6_indi_pane_g1

0xd54d,	// (0x0009245d) vid6_indi_pane_g2_ParamLimits

0xd54d,	// (0x0009245d) vid6_indi_pane_g2

0xd55f,	// (0x0009246f) vid6_indi_pane_g3_ParamLimits

0xd55f,	// (0x0009246f) vid6_indi_pane_g3

0xd574,	// (0x00092484) vid6_indi_pane_g4_ParamLimits

0xd574,	// (0x00092484) vid6_indi_pane_g4

0xd589,	// (0x00092499) vid6_indi_pane_g5_ParamLimits

0xd589,	// (0x00092499) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00094aa1) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00094aa1) vid6_indi_pane_g

0xd5a3,	// (0x000924b3) vid6_indi_pane_t1_ParamLimits

0xd5a3,	// (0x000924b3) vid6_indi_pane_t1

0xd5b9,	// (0x000924c9) vid6_indi_pane_t2_ParamLimits

0xd5b9,	// (0x000924c9) vid6_indi_pane_t2

0xd5e1,	// (0x000924f1) vid6_indi_pane_t3_ParamLimits

0xd5e1,	// (0x000924f1) vid6_indi_pane_t3

0xd609,	// (0x00092519) vid6_indi_pane_t4_ParamLimits

0xd609,	// (0x00092519) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00094aac) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00094aac) vid6_indi_pane_t

0xd62d,	// (0x0009253d) wait_bar_pane_cp08

0x9677,	// (0x0008e587) main_cset_text2_pane_t1_ParamLimits

0x9677,	// (0x0008e587) main_cset_text2_pane_t1

0x960a,	// (0x0008e51a) listscroll_gen_pane_cp06_t1_ParamLimits

0x960a,	// (0x0008e51a) listscroll_gen_pane_cp06_t1

0xeac9,	// (0x000939d9) main_cam6_set_pane

0xc2a8,	// (0x000911b8) bg_tb_trans_pane_cp06_ParamLimits

0xeee3,	// (0x00093df3) cam4_indicators_pane_g1_ParamLimits

0xeef4,	// (0x00093e04) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0009481a) cam4_indicators_pane_g_ParamLimits

0xef0c,	// (0x00093e1c) cam4_indicators_pane_t1_ParamLimits

0xead3,	// (0x000939e3) bg_tb_trans_pane_cp07_ParamLimits

0xef36,	// (0x00093e46) vid4_indicators_pane_g1_ParamLimits

0xef4a,	// (0x00093e5a) vid4_indicators_pane_g2_ParamLimits

0xef5e,	// (0x00093e6e) vid4_indicators_pane_g3_ParamLimits

0xef6f,	// (0x00093e7f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0009482c) vid4_indicators_pane_g_ParamLimits

0xef8b,	// (0x00093e9b) vid4_indicators_pane_t1_ParamLimits

0xf018,	// (0x00093f28) vid4_progress_pane_g1_ParamLimits

0xf028,	// (0x00093f38) vid4_progress_pane_g2_ParamLimits

0x9143,	// (0x0008e053) vid4_progress_pane_g3_ParamLimits

0xf038,	// (0x00093f48) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000949dd) vid4_progress_pane_g_ParamLimits

0x9155,	// (0x0008e065) vid4_progress_pane_t1_ParamLimits

0xf050,	// (0x00093f60) vid4_progress_pane_t2_ParamLimits

0xf065,	// (0x00093f75) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000949e8) vid4_progress_pane_t_ParamLimits

0x916b,	// (0x0008e07b) wait_bar_pane_cp07_ParamLimits

0x9695,	// (0x0008e5a5) main_cam6_set_pane_g2_ParamLimits

0x9695,	// (0x0008e5a5) main_cam6_set_pane_g2

0x96b9,	// (0x0008e5c9) main_cset6_listscroll_pane_ParamLimits

0x96b9,	// (0x0008e5c9) main_cset6_listscroll_pane

0x96d5,	// (0x0008e5e5) main_cset6_slider_pane_ParamLimits

0x96d5,	// (0x0008e5e5) main_cset6_slider_pane

0x96eb,	// (0x0008e5fb) main_cset6_text2_pane_ParamLimits

0x96eb,	// (0x0008e5fb) main_cset6_text2_pane

0xd63c,	// (0x0009254c) main_cset6_text_pane

0xd644,	// (0x00092554) main_cset_list_pane_copy1_ParamLimits

0xd644,	// (0x00092554) main_cset_list_pane_copy1

0xd654,	// (0x00092564) scroll_pane_cp028_copy1

0x96f9,	// (0x0008e609) cset_list_set_pane_copy1

0x970b,	// (0x0008e61b) aid_position_infowindow_above_copy1

0x9713,	// (0x0008e623) aid_position_infowindow_below_copy1

0xf09a,	// (0x00093faa) cset_list_set_pane_g1_copy1

0xd65d,	// (0x0009256d) cset_list_set_pane_g3_copy1_ParamLimits

0xd65d,	// (0x0009256d) cset_list_set_pane_g3_copy1

0xd66c,	// (0x0009257c) cset_list_set_pane_t1_copy1_ParamLimits

0xd66c,	// (0x0009257c) cset_list_set_pane_t1_copy1

0xead3,	// (0x000939e3) list_highlight_pane_cp021_copy1_ParamLimits

0xead3,	// (0x000939e3) list_highlight_pane_cp021_copy1

0xd681,	// (0x00092591) cset6_slider_pane_ParamLimits

0xd681,	// (0x00092591) cset6_slider_pane

0xd6ad,	// (0x000925bd) main_cset6_slider_pane_g1_ParamLimits

0xd6ad,	// (0x000925bd) main_cset6_slider_pane_g1

0x971b,	// (0x0008e62b) main_cset6_slider_pane_g2_ParamLimits

0x971b,	// (0x0008e62b) main_cset6_slider_pane_g2

0xd6d5,	// (0x000925e5) main_cset6_slider_pane_g3_ParamLimits

0xd6d5,	// (0x000925e5) main_cset6_slider_pane_g3

0x9743,	// (0x0008e653) main_cset6_slider_pane_g4_ParamLimits

0x9743,	// (0x0008e653) main_cset6_slider_pane_g4

0xd6e1,	// (0x000925f1) main_cset6_slider_pane_g5_ParamLimits

0xd6e1,	// (0x000925f1) main_cset6_slider_pane_g5

0xce72,	// (0x00091d82) main_cset6_slider_pane_g7_ParamLimits

0xce72,	// (0x00091d82) main_cset6_slider_pane_g7

0xce7e,	// (0x00091d8e) main_cset6_slider_pane_g8_ParamLimits

0xce7e,	// (0x00091d8e) main_cset6_slider_pane_g8

0x88fe,	// (0x0008d80e) main_cset6_slider_pane_g9_ParamLimits

0x88fe,	// (0x0008d80e) main_cset6_slider_pane_g9

0x890a,	// (0x0008d81a) main_cset6_slider_pane_g10_ParamLimits

0x890a,	// (0x0008d81a) main_cset6_slider_pane_g10

0x8916,	// (0x0008d826) main_cset6_slider_pane_g11_ParamLimits

0x8916,	// (0x0008d826) main_cset6_slider_pane_g11

0x8922,	// (0x0008d832) main_cset6_slider_pane_g12_ParamLimits

0x8922,	// (0x0008d832) main_cset6_slider_pane_g12

0x892e,	// (0x0008d83e) main_cset6_slider_pane_g13_ParamLimits

0x892e,	// (0x0008d83e) main_cset6_slider_pane_g13

0x893a,	// (0x0008d84a) main_cset6_slider_pane_g14_ParamLimits

0x893a,	// (0x0008d84a) main_cset6_slider_pane_g14

0x974f,	// (0x0008e65f) main_cset6_slider_pane_g15_ParamLimits

0x974f,	// (0x0008e65f) main_cset6_slider_pane_g15

0xce8a,	// (0x00091d9a) main_cset6_slider_pane_g16_ParamLimits

0xce8a,	// (0x00091d9a) main_cset6_slider_pane_g16

0xce96,	// (0x00091da6) main_cset6_slider_pane_g17_ParamLimits

0xce96,	// (0x00091da6) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00094ab5) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00094ab5) main_cset6_slider_pane_g

0xd6ed,	// (0x000925fd) main_cset6_slider_pane_t1_ParamLimits

0xd6ed,	// (0x000925fd) main_cset6_slider_pane_t1

0x977f,	// (0x0008e68f) main_cset6_slider_pane_t2_ParamLimits

0x977f,	// (0x0008e68f) main_cset6_slider_pane_t2

0x97aa,	// (0x0008e6ba) main_cset6_slider_pane_t3_ParamLimits

0x97aa,	// (0x0008e6ba) main_cset6_slider_pane_t3

0x97d5,	// (0x0008e6e5) main_cset6_slider_pane_t4_ParamLimits

0x97d5,	// (0x0008e6e5) main_cset6_slider_pane_t4

0x9800,	// (0x0008e710) main_cset6_slider_pane_t5_ParamLimits

0x9800,	// (0x0008e710) main_cset6_slider_pane_t5

0xd72e,	// (0x0009263e) main_cset6_slider_pane_t7_ParamLimits

0xd72e,	// (0x0009263e) main_cset6_slider_pane_t7

0x982b,	// (0x0008e73b) main_cset6_slider_pane_t8_ParamLimits

0x982b,	// (0x0008e73b) main_cset6_slider_pane_t8

0x984f,	// (0x0008e75f) main_cset6_slider_pane_t9_ParamLimits

0x984f,	// (0x0008e75f) main_cset6_slider_pane_t9

0x9873,	// (0x0008e783) main_cset6_slider_pane_t10_ParamLimits

0x9873,	// (0x0008e783) main_cset6_slider_pane_t10

0x9897,	// (0x0008e7a7) main_cset6_slider_pane_t11_ParamLimits

0x9897,	// (0x0008e7a7) main_cset6_slider_pane_t11

0xd764,	// (0x00092674) main_cset6_slider_pane_t14_ParamLimits

0xd764,	// (0x00092674) main_cset6_slider_pane_t14

0xd79d,	// (0x000926ad) main_cset6_slider_pane_t15_ParamLimits

0xd79d,	// (0x000926ad) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00094ada) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00094ada) main_cset6_slider_pane_t

0xc89e,	// (0x000917ae) cset_slider_pane_g1_copy1

0xcf4e,	// (0x00091e5e) cset_slider_pane_g2_copy1

0xcf57,	// (0x00091e67) cset_slider_pane_g3_copy1

0xeac9,	// (0x000939d9) bg_popup_sub_pane_cp011_copy1

0xd7d6,	// (0x000926e6) main_cset_text_pane_g1_copy1

0xcfe0,	// (0x00091ef0) main_cset_text_pane_t1_copy1

0xcfee,	// (0x00091efe) main_cset_text_pane_t2_copy1

0xcffc,	// (0x00091f0c) main_cset_text_pane_t3_copy1

0xd00a,	// (0x00091f1a) main_cset_text_pane_t4_copy1

0xd018,	// (0x00091f28) main_cset_text_pane_t5_copy1

0xd7de,	// (0x000926ee) main_cset_text_pane_t6_copy1

0xd7ec,	// (0x000926fc) main_cset_text_pane_t7_copy1

0x9677,	// (0x0008e587) main_cset_text2_pane_t1_copy1

0xead3,	// (0x000939e3) main_ncimui_pane

0x6000,	// (0x0008af10) popup_query_ncimui_window_ParamLimits

0x6000,	// (0x0008af10) popup_query_ncimui_window

0xc349,	// (0x00091259) field_cale_ev2_pane_g4_ParamLimits

0xc349,	// (0x00091259) field_cale_ev2_pane_g4

0x7bdb,	// (0x0008caeb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7bdb,	// (0x0008caeb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000947b8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000947b8) cell_video_dialer_keypad_pane_g

0x7bf3,	// (0x0008cb03) cell_video_dialer_keypad_pane_t1

0xeac9,	// (0x000939d9) bg_popup_window_pane_cp012

0x3daf,	// (0x00088cbf) heading_pane_cp06

0xd818,	// (0x00092728) ncim_query_content_pane

0xeac9,	// (0x000939d9) bg_popup_heading_pane_cp01

0xd820,	// (0x00092730) ncim_heading_pane_t1

0xd82e,	// (0x0009273e) ncim_indicator_popup_pane

0xd840,	// (0x00092750) ncim_query_button_pane

0xd854,	// (0x00092764) ncim_query_content_pane_t1

0xd866,	// (0x00092776) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00094b1e) ncim_query_content_pane_t

0xd8a0,	// (0x000927b0) ncim_query_list_pane

0xd8b2,	// (0x000927c2) ncim_query_popup_pane

0xd82e,	// (0x0009273e) ncim_indicator_popup_pane_ParamLimits

0x99ff,	// (0x0008e90f) ncim_query_content_pane_g1_ParamLimits

0x99ff,	// (0x0008e90f) ncim_query_content_pane_g1

0xd854,	// (0x00092764) ncim_query_content_pane_t1_ParamLimits

0xd866,	// (0x00092776) ncim_query_content_pane_t2_ParamLimits

0x9a0b,	// (0x0008e91b) ncim_query_content_pane_t3_ParamLimits

0x9a0b,	// (0x0008e91b) ncim_query_content_pane_t3

0x9a33,	// (0x0008e943) ncim_query_content_pane_t4_ParamLimits

0x9a33,	// (0x0008e943) ncim_query_content_pane_t4

0x9a5b,	// (0x0008e96b) ncim_query_content_pane_t5_ParamLimits

0x9a5b,	// (0x0008e96b) ncim_query_content_pane_t5

0xd878,	// (0x00092788) ncim_query_content_pane_t6_ParamLimits

0xd878,	// (0x00092788) ncim_query_content_pane_t6

0xfc0e,	// (0x00094b1e) ncim_query_content_pane_t_ParamLimits

0xd8a0,	// (0x000927b0) ncim_query_list_pane_ParamLimits

0xd8b2,	// (0x000927c2) ncim_query_popup_pane_ParamLimits

0xd8c6,	// (0x000927d6) wait_bar_pane_cp04

0xeac9,	// (0x000939d9) input_focus_pane_cp011

0xd8ce,	// (0x000927de) ncim_query_popup_pane_t1

0xd8dc,	// (0x000927ec) ncim_list_query_list_pane_ParamLimits

0xd8dc,	// (0x000927ec) ncim_list_query_list_pane

0xeac9,	// (0x000939d9) bg_button_pane_cp027

0xd8e9,	// (0x000927f9) ncim_query_button_pane_g1

0xeac9,	// (0x000939d9) list_highlight_pane_cp012

0xd8f3,	// (0x00092803) ncim_list_query_list_pane_g1

0xd8fb,	// (0x0009280b) ncim_list_query_list_pane_t1

0xef00,	// (0x00093e10) cam4_indicators_pane_g3_ParamLimits

0xef00,	// (0x00093e10) cam4_indicators_pane_g3

0xef7b,	// (0x00093e8b) vid4_indicators_pane_g5_ParamLimits

0xef7b,	// (0x00093e8b) vid4_indicators_pane_g5

0xf044,	// (0x00093f54) vid4_progress_pane_g5_ParamLimits

0xf044,	// (0x00093f54) vid4_progress_pane_g5

0x98ea,	// (0x0008e7fa) main_ncimui_pane_g1

0x9953,	// (0x0008e863) ncimui_group_query_pane_ParamLimits

0x9953,	// (0x0008e863) ncimui_group_query_pane

0x999b,	// (0x0008e8ab) ncimui_list_pane_ParamLimits

0x999b,	// (0x0008e8ab) ncimui_list_pane

0x99c2,	// (0x0008e8d2) ncimui_text_pane_ParamLimits

0x99c2,	// (0x0008e8d2) ncimui_text_pane

0x9a83,	// (0x0008e993) ncimui_text_pane_t1_ParamLimits

0x9a83,	// (0x0008e993) ncimui_text_pane_t1

0xd909,	// (0x00092819) ncimui_list_single_graphic_pane_ParamLimits

0xd909,	// (0x00092819) ncimui_list_single_graphic_pane

0x9aa1,	// (0x0008e9b1) ncimui_query_pane_ParamLimits

0x9aa1,	// (0x0008e9b1) ncimui_query_pane

0xeac9,	// (0x000939d9) list_highlight_pane_cp013

0xd919,	// (0x00092829) ncim_list_query_list_pane_t1_copy1

0xd927,	// (0x00092837) ncim_list_single_graphic_pane_g1

0x9ab4,	// (0x0008e9c4) ncim_query_button_pane_cp01

0x9ac0,	// (0x0008e9d0) ncim_query_entry_pane_ParamLimits

0x9ac0,	// (0x0008e9d0) ncim_query_entry_pane

0x9ad3,	// (0x0008e9e3) ncimui_query_pane_g1

0x9adf,	// (0x0008e9ef) ncimui_query_pane_t1_ParamLimits

0x9adf,	// (0x0008e9ef) ncimui_query_pane_t1

0xead3,	// (0x000939e3) input_focus_pane_cp012

0xd92f,	// (0x0009283f) ncim_query_entry_pane_t1

0x1b79,	// (0x00086a89) main_im_pane_ParamLimits

0xead3,	// (0x000939e3) main_mobtv_pane_ParamLimits

0xead3,	// (0x000939e3) main_mobtv_pane

0x9767,	// (0x0008e677) main_cset6_slider_pane_g18_ParamLimits

0x9767,	// (0x0008e677) main_cset6_slider_pane_g18

0x9773,	// (0x0008e683) main_cset6_slider_pane_g19_ParamLimits

0x9773,	// (0x0008e683) main_cset6_slider_pane_g19

0xf0a2,	// (0x00093fb2) bg_main_mobtv_pane_ParamLimits

0xf0a2,	// (0x00093fb2) bg_main_mobtv_pane

0x9af8,	// (0x0008ea08) main_mobtv_info_pane

0x9b01,	// (0x0008ea11) main_mobtv_loading_pane_ParamLimits

0x9b01,	// (0x0008ea11) main_mobtv_loading_pane

0xd941,	// (0x00092851) main_mobtv_pg_channel_list_pane

0xd94b,	// (0x0009285b) main_mobtv_pg_hdr_pane

0x9b0e,	// (0x0008ea1e) main_mobtv_programe_curr_pane_ParamLimits

0x9b0e,	// (0x0008ea1e) main_mobtv_programe_curr_pane

0x9b1b,	// (0x0008ea2b) main_mobtv_programe_next_pane_ParamLimits

0x9b1b,	// (0x0008ea2b) main_mobtv_programe_next_pane

0xd954,	// (0x00092864) popup_mobtv_noti_window

0xc05a,	// (0x00090f6a) main_tv_pg_hdr_pane_g1

0xd95c,	// (0x0009286c) main_tv_pg_hdr_pane_g2

0xd964,	// (0x00092874) main_tv_pg_hdr_pane_g3

0xd96c,	// (0x0009287c) main_tv_pg_hdr_pane_g4

0xd974,	// (0x00092884) main_tv_pg_hdr_pane_g5

0xd97e,	// (0x0009288e) main_tv_pg_hdr_pane_g6

0xd988,	// (0x00092898) main_tv_pg_hdr_pane_g7

0xd992,	// (0x000928a2) main_tv_pg_hdr_pane_g8

0xd99c,	// (0x000928ac) main_tv_pg_hdr_pane_g9

0xd9a6,	// (0x000928b6) main_tv_pg_hdr_pane_g10

0xd9b0,	// (0x000928c0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00094b2b) main_tv_pg_hdr_pane_g

0xd9ba,	// (0x000928ca) main_tv_pg_hdr_pane_t1

0xd9c8,	// (0x000928d8) main_tv_pg_hdr_pane_t2

0xd9d6,	// (0x000928e6) main_tv_pg_hdr_pane_t3

0xd9e6,	// (0x000928f6) main_tv_pg_hdr_pane_t4

0xd9f6,	// (0x00092906) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00094b42) main_tv_pg_hdr_pane_t

0xda06,	// (0x00092916) single_mobtv_pg_channel_pane_ParamLimits

0xda06,	// (0x00092916) single_mobtv_pg_channel_pane

0xda18,	// (0x00092928) single_mobtv_pg_channel_table_pane

0x38c8,	// (0x000887d8) single_mobtv_pg_channel_thumb_pane

0xda21,	// (0x00092931) single_tv_pg_channel_pane_g1

0xda2a,	// (0x0009293a) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00094b4d) single_tv_pg_channel_pane_g

0xc2a8,	// (0x000911b8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc2a8,	// (0x000911b8) bg_single_mobtv_pg_channel_thumb_pane

0xda33,	// (0x00092943) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda33,	// (0x00092943) single_mobtv_pg_channel_thumb_pane_g1

0xda41,	// (0x00092951) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda41,	// (0x00092951) single_mobtv_pg_channel_thumb_pane_g2

0xda4d,	// (0x0009295d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda4d,	// (0x0009295d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00094b52) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00094b52) single_mobtv_pg_channel_thumb_pane_g

0xda59,	// (0x00092969) single_mobtv_pg_channel_thumb_pane_t1

0xda67,	// (0x00092977) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00094b59) single_mobtv_pg_channel_thumb_pane_t

0xc05a,	// (0x00090f6a) bg_single_mobtv_pg_channel_table_pane_g1

0xc05a,	// (0x00090f6a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000945ff) bg_single_mobtv_pg_channel_table_pane_g

0xda75,	// (0x00092985) single_mobtv_pg_channel_table_pane_t1

0xda83,	// (0x00092993) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00094b5e) single_mobtv_pg_channel_table_pane_t

0x9b30,	// (0x0008ea40) main_mobtv_info_pane_g1_ParamLimits

0x9b30,	// (0x0008ea40) main_mobtv_info_pane_g1

0x9b4e,	// (0x0008ea5e) main_mobtv_info_pane_t1_ParamLimits

0x9b4e,	// (0x0008ea5e) main_mobtv_info_pane_t1

0x9bc6,	// (0x0008ead6) main_mobtv_info_pane_t2_ParamLimits

0x9bc6,	// (0x0008ead6) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00094b68) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00094b68) main_mobtv_info_pane_t

0x9c55,	// (0x0008eb65) wait_bar_pane_cp05

0x9c67,	// (0x0008eb77) main_mobtv_loading_pane_g1_ParamLimits

0x9c67,	// (0x0008eb77) main_mobtv_loading_pane_g1

0x9c7a,	// (0x0008eb8a) main_mobtv_loading_pane_g2_ParamLimits

0x9c7a,	// (0x0008eb8a) main_mobtv_loading_pane_g2

0x9c86,	// (0x0008eb96) main_mobtv_loading_pane_g3_ParamLimits

0x9c86,	// (0x0008eb96) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00094b6f) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00094b6f) main_mobtv_loading_pane_g

0xda91,	// (0x000929a1) main_mobtv_loading_pane_t1_ParamLimits

0xda91,	// (0x000929a1) main_mobtv_loading_pane_t1

0xdaa9,	// (0x000929b9) main_mobtv_loading_pane_t2_ParamLimits

0xdaa9,	// (0x000929b9) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00094b76) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00094b76) main_mobtv_loading_pane_t

0x9c99,	// (0x0008eba9) wait_bar_pane_cp06_ParamLimits

0x9c99,	// (0x0008eba9) wait_bar_pane_cp06

0xdacd,	// (0x000929dd) main_mobtv_programe_curr_pane_t1

0xdadb,	// (0x000929eb) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00094b7b) main_mobtv_programe_curr_pane_t

0xdae9,	// (0x000929f9) main_mobtv_programe_next_pane_t1

0xdaf7,	// (0x00092a07) main_mobtv_programe_next_pane_t2

0xdb05,	// (0x00092a15) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00094b80) main_mobtv_programe_next_pane_t

0xeac9,	// (0x000939d9) bg_popup_mobtv_noti_window_pane

0xdb13,	// (0x00092a23) popup_mobtv_noti_window_g1

0xdb1b,	// (0x00092a2b) popup_mobtv_noti_window_t1

0xdb29,	// (0x00092a39) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00094b87) popup_mobtv_noti_window_t

0xc05a,	// (0x00090f6a) bg_popup_mobtv_noti_window_pane_g1

0xeac9,	// (0x000939d9) sc_clock_pane

0xeac9,	// (0x000939d9) main_fs_bigclock_pane

0x93c4,	// (0x0008e2d4) blid2_tripm_pane_t4_ParamLimits

0x93c4,	// (0x0008e2d4) blid2_tripm_pane_t4

0x9ca8,	// (0x0008ebb8) sc_clock_pane_g1_ParamLimits

0x9ca8,	// (0x0008ebb8) sc_clock_pane_g1

0x9cba,	// (0x0008ebca) sc_clock_pane_t1_ParamLimits

0x9cba,	// (0x0008ebca) sc_clock_pane_t1

0x9cdc,	// (0x0008ebec) sc_clock_pane_t2_ParamLimits

0x9cdc,	// (0x0008ebec) sc_clock_pane_t2

0x9cf4,	// (0x0008ec04) sc_clock_pane_t3_ParamLimits

0x9cf4,	// (0x0008ec04) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00094b8c) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00094b8c) sc_clock_pane_t

0xa6c1,	// (0x0008f5d1) main_fs_bigclock_indicator_pane_ParamLimits

0xa6c1,	// (0x0008f5d1) main_fs_bigclock_indicator_pane

0x9d9a,	// (0x0008ecaa) main_fs_bigclock_pane_g1_ParamLimits

0x9d9a,	// (0x0008ecaa) main_fs_bigclock_pane_g1

0xa6cd,	// (0x0008f5dd) main_fs_bigclock_pane_t1_ParamLimits

0xa6cd,	// (0x0008f5dd) main_fs_bigclock_pane_t1

0xa6df,	// (0x0008f5ef) main_fs_bigclock_pane_t2_ParamLimits

0xa6df,	// (0x0008f5ef) main_fs_bigclock_pane_t2

0xa6f3,	// (0x0008f603) main_fs_bigclock_pane_t3_ParamLimits

0xa6f3,	// (0x0008f603) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00094d96) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00094d96) main_fs_bigclock_pane_t

0xe697,	// (0x000935a7) main_fs_bigclock_indicator_pane_g1

0xd848,	// (0x00092758) ncim_query_content_pane_g2_ParamLimits

0xd848,	// (0x00092758) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00094b19) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00094b19) ncim_query_content_pane_g

0x9d0d,	// (0x0008ec1d) sc_clock_pane_t4_ParamLimits

0x9d0d,	// (0x0008ec1d) sc_clock_pane_t4

0xead3,	// (0x000939e3) main_radioblah_pane

0xcc67,	// (0x00091b77) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc67,	// (0x00091b77) cell_call4_button_pane_t1_copy1

0x9902,	// (0x0008e812) main_ncimui_pane_t1_ParamLimits

0x9902,	// (0x0008e812) main_ncimui_pane_t1

0x991c,	// (0x0008e82c) main_ncimui_pane_t2_ParamLimits

0x991c,	// (0x0008e82c) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00094b12) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00094b12) main_ncimui_pane_t

0xdc6f,	// (0x00092b7f) main_radioblah_anim_pane_ParamLimits

0xdc6f,	// (0x00092b7f) main_radioblah_anim_pane

0xdc80,	// (0x00092b90) main_radioblah_info_pane_ParamLimits

0xdc80,	// (0x00092b90) main_radioblah_info_pane

0xdc94,	// (0x00092ba4) main_radioblah_pane_t1_ParamLimits

0xdc94,	// (0x00092ba4) main_radioblah_pane_t1

0xdcb0,	// (0x00092bc0) main_radioblah_pane_t2_ParamLimits

0xdcb0,	// (0x00092bc0) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00094bad) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00094bad) main_radioblah_pane_t

0x9df9,	// (0x0008ed09) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9df9,	// (0x0008ed09) main_radioblah_rocker_ctrl_pane

0xdcf8,	// (0x00092c08) main_radioblah_info_pane_t1_ParamLimits

0xdcf8,	// (0x00092c08) main_radioblah_info_pane_t1

0x9e51,	// (0x0008ed61) main_radioblah_info_pane_t2_ParamLimits

0x9e51,	// (0x0008ed61) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00094bb6) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00094bb6) main_radioblah_info_pane_t

0xc05a,	// (0x00090f6a) main_radioblah_rocker_ctrl_pane_g1

0x9f01,	// (0x0008ee11) main_radioblah_rocker_ctrl_pane_g2

0x9f09,	// (0x0008ee19) main_radioblah_rocker_ctrl_pane_g3

0x9f11,	// (0x0008ee21) main_radioblah_rocker_ctrl_pane_g4

0x9f19,	// (0x0008ee29) main_radioblah_rocker_ctrl_pane_g5

0x9f21,	// (0x0008ee31) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00094bbf) main_radioblah_rocker_ctrl_pane_g

0x9677,	// (0x0008e587) main_cset_text2_pane_t1_copy1_ParamLimits

0xeed3,	// (0x00093de3) cam4_image_uncrop_qvga_pane

0xef26,	// (0x00093e36) vid4_image_uncrop_qcif_pane

0xf08c,	// (0x00093f9c) cam6_image_uncrop_qvga_pane_ParamLimits

0xf08c,	// (0x00093f9c) cam6_image_uncrop_qvga_pane

0xd51f,	// (0x0009242f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd51f,	// (0x0009242f) vid6_image_uncrop_qcif_pane

0xeac9,	// (0x000939d9) bg_popup_preview_window_pane_cp03

0xd7fa,	// (0x0009270a) list_cset_text2_pane

0xd802,	// (0x00092712) main_cset6_text2_pane_g1

0xd80a,	// (0x0009271a) main_cset6_text2_pane_t1

0xdd32,	// (0x00092c42) list_cset_text2_pane_t1_ParamLimits

0xdd32,	// (0x00092c42) list_cset_text2_pane_t1

0xead3,	// (0x000939e3) main_radioblah_pane_ParamLimits

0x9c41,	// (0x0008eb51) main_mobtv_info_pane_t3_ParamLimits

0x9c41,	// (0x0008eb51) main_mobtv_info_pane_t3

0x9de7,	// (0x0008ecf7) main_radioblah_pane_g1

0x9e21,	// (0x0008ed31) main_radioblah_info_pane_g1

0x9ea6,	// (0x0008edb6) main_radioblah_info_pane_t3_ParamLimits

0x9ea6,	// (0x0008edb6) main_radioblah_info_pane_t3

0x3849,	// (0x00088759) highlight_cell_cale_month_pane_ParamLimits

0x3849,	// (0x00088759) highlight_cell_cale_month_pane

0xeac9,	// (0x000939d9) main_phob_fisheye_pane

0xc3f8,	// (0x00091308) scroll_pane_cp0031_ParamLimits

0xc3f8,	// (0x00091308) scroll_pane_cp0031

0xd62d,	// (0x0009253d) wait_bar_pane_cp08_ParamLimits

0x96f9,	// (0x0008e609) cset_list_set_pane_copy1_ParamLimits

0xdd4d,	// (0x00092c5d) highlight_cell_cale_month_pane_g1

0x9f29,	// (0x0008ee39) highlight_cell_cale_month_pane_t1

0xd2a8,	// (0x000921b8) list_gen_pane_cp01

0xce5d,	// (0x00091d6d) scroll_pane_01

0x9f37,	// (0x0008ee47) list_single_double_fisheye_pane

0x0a0f,	// (0x0008591f) list_double_fisheye_pane_g1_ParamLimits

0x0a0f,	// (0x0008591f) list_double_fisheye_pane_g1

0x0a1b,	// (0x0008592b) list_double_fisheye_pane_g2_ParamLimits

0x0a1b,	// (0x0008592b) list_double_fisheye_pane_g2

0x9f40,	// (0x0008ee50) list_double_fisheye_pane_g3_ParamLimits

0x9f40,	// (0x0008ee50) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00094bcc) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00094bcc) list_double_fisheye_pane_g

0x0a4c,	// (0x0008595c) list_double_fisheye_pane_t1_ParamLimits

0x0a4c,	// (0x0008595c) list_double_fisheye_pane_t1

0x0a67,	// (0x00085977) list_double_fisheye_pane_t2_ParamLimits

0x0a67,	// (0x00085977) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00094bd7) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00094bd7) list_double_fisheye_pane_t

0xeac9,	// (0x000939d9) main_call5_pane

0x9d38,	// (0x0008ec48) sc_swipe_pane_ParamLimits

0x9d38,	// (0x0008ec48) sc_swipe_pane

0x9f5f,	// (0x0008ee6f) call5_image_pane_ParamLimits

0x9f5f,	// (0x0008ee6f) call5_image_pane

0x9f7c,	// (0x0008ee8c) call5_swipe_1_pane_ParamLimits

0x9f7c,	// (0x0008ee8c) call5_swipe_1_pane

0x9f8f,	// (0x0008ee9f) call5_swipe_2_pane_ParamLimits

0x9f8f,	// (0x0008ee9f) call5_swipe_2_pane

0x9fba,	// (0x0008eeca) popup_call5_audio_first_window_ParamLimits

0x9fba,	// (0x0008eeca) popup_call5_audio_first_window

0xc2a8,	// (0x000911b8) call5_swipe_1_pane_g1_ParamLimits

0xc2a8,	// (0x000911b8) call5_swipe_1_pane_g1

0xdd55,	// (0x00092c65) call5_swipe_1_pane_g2_ParamLimits

0xdd55,	// (0x00092c65) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00094bdc) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00094bdc) call5_swipe_1_pane_g

0xdd61,	// (0x00092c71) call5_swipe_1_pane_t1_ParamLimits

0xdd61,	// (0x00092c71) call5_swipe_1_pane_t1

0xc2a8,	// (0x000911b8) call5_swipe_2_pane_g1_ParamLimits

0xc2a8,	// (0x000911b8) call5_swipe_2_pane_g1

0xdd76,	// (0x00092c86) call5_swipe_2_pane_g2_ParamLimits

0xdd76,	// (0x00092c86) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00094be1) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00094be1) call5_swipe_2_pane_g

0xdd82,	// (0x00092c92) call5_swipe_2_pane_t1_ParamLimits

0xdd82,	// (0x00092c92) call5_swipe_2_pane_t1

0xdd97,	// (0x00092ca7) sc_swipe_pane_g1_ParamLimits

0xdd97,	// (0x00092ca7) sc_swipe_pane_g1

0xdda4,	// (0x00092cb4) sc_swipe_pane_g2_ParamLimits

0xdda4,	// (0x00092cb4) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00094be6) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00094be6) sc_swipe_pane_g

0xddb0,	// (0x00092cc0) sc_swipe_pane_t1_ParamLimits

0xddb0,	// (0x00092cc0) sc_swipe_pane_t1

0xeac9,	// (0x000939d9) main_cmail_launcher_pane

0x9fcb,	// (0x0008eedb) aid_size_cell_cmail_l_ParamLimits

0x9fcb,	// (0x0008eedb) aid_size_cell_cmail_l

0x9fe5,	// (0x0008eef5) grid_cmail_l_pane_ParamLimits

0x9fe5,	// (0x0008eef5) grid_cmail_l_pane

0x9fff,	// (0x0008ef0f) cell_cmail_l_pane_ParamLimits

0x9fff,	// (0x0008ef0f) cell_cmail_l_pane

0xa025,	// (0x0008ef35) cell_cmail_l_pane_g1_ParamLimits

0xa025,	// (0x0008ef35) cell_cmail_l_pane_g1

0xa036,	// (0x0008ef46) cell_cmail_l_pane_t1_ParamLimits

0xa036,	// (0x0008ef46) cell_cmail_l_pane_t1

0xddc5,	// (0x00092cd5) cell_cmail_l_pane_t2_ParamLimits

0xddc5,	// (0x00092cd5) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00094beb) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00094beb) cell_cmail_l_pane_t

0xead3,	// (0x000939e3) grid_highlight_pane_cp018_ParamLimits

0xead3,	// (0x000939e3) grid_highlight_pane_cp018

0x12df,	// (0x000861ef) main2_pane_ParamLimits

0x12df,	// (0x000861ef) main2_pane

0x1d9c,	// (0x00086cac) popup_sp_fs_action_menu_bg_pane_g1

0x1da4,	// (0x00086cb4) popup_sp_fs_action_menu_bg_pane_g2

0x1dac,	// (0x00086cbc) popup_sp_fs_action_menu_bg_pane_g3

0x1db4,	// (0x00086cc4) popup_sp_fs_action_menu_bg_pane_g4

0x1dbc,	// (0x00086ccc) popup_sp_fs_action_menu_bg_pane_g5

0x1dc4,	// (0x00086cd4) popup_sp_fs_action_menu_bg_pane_g6

0x1dcc,	// (0x00086cdc) popup_sp_fs_action_menu_bg_pane_g7

0x1dd4,	// (0x00086ce4) popup_sp_fs_action_menu_bg_pane_g8

0x1ddc,	// (0x00086cec) popup_sp_fs_action_menu_bg_pane_g9

0x1de4,	// (0x00086cf4) popup_sp_fs_action_menu_bg_pane_g10

0x1de4,	// (0x00086cf4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009409a) popup_sp_fs_action_menu_bg_pane_g

0x0417,	// (0x00085327) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t3_g3_g1

0x2815,	// (0x00087725) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_t3_g3_g2

0x0423,	// (0x00085333) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00094148) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00094148) list_medium_line_x2_t3_g3_g

0x042f,	// (0x0008533f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x042f,	// (0x0008533f) list_medium_line_x2_t3_g3_t1

0x0444,	// (0x00085354) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0444,	// (0x00085354) list_medium_line_x2_t3_g3_t2

0x0458,	// (0x00085368) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009414f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009414f) list_medium_line_x2_t3_g3_t

0x0417,	// (0x00085327) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t3_g2_g1

0x0423,	// (0x00085333) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00094156) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00094156) list_medium_line_x2_t3_g2_g

0x046d,	// (0x0008537d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x046d,	// (0x0008537d) list_medium_line_x2_t3_g2_t1

0x0483,	// (0x00085393) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0483,	// (0x00085393) list_medium_line_x2_t3_g2_t2

0x0458,	// (0x00085368) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009415b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009415b) list_medium_line_x2_t3_g2_t

0x0417,	// (0x00085327) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t4_g4_g1

0x2821,	// (0x00087731) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2821,	// (0x00087731) list_medium_line_x2_t4_g4_g2

0x2815,	// (0x00087725) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_t4_g4_g3

0x0495,	// (0x000853a5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0495,	// (0x000853a5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00094162) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00094162) list_medium_line_x2_t4_g4_g

0x04a1,	// (0x000853b1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x04a1,	// (0x000853b1) list_medium_line_x2_t4_g4_t1

0x04bb,	// (0x000853cb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x04bb,	// (0x000853cb) list_medium_line_x2_t4_g4_t2

0x04d1,	// (0x000853e1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x04d1,	// (0x000853e1) list_medium_line_x2_t4_g4_t3

0x04e6,	// (0x000853f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x04e6,	// (0x000853f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009416b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009416b) list_medium_line_x2_t4_g4_t

0x0417,	// (0x00085327) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t2_g4_g1

0x2821,	// (0x00087731) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2821,	// (0x00087731) list_medium_line_x2_t2_g4_g2

0x2815,	// (0x00087725) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_t2_g4_g3

0x0423,	// (0x00085333) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000941d2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000941d2) list_medium_line_x2_t2_g4_g

0x04f8,	// (0x00085408) list_medium_line_x2_t2_g4_t1_ParamLimits

0x04f8,	// (0x00085408) list_medium_line_x2_t2_g4_t1

0x0458,	// (0x00085368) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000941db) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000941db) list_medium_line_x2_t2_g4_t

0x0417,	// (0x00085327) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t2_g3_g1

0x2815,	// (0x00087725) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_t2_g3_g2

0x0423,	// (0x00085333) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00094148) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00094148) list_medium_line_x2_t2_g3_g

0x050d,	// (0x0008541d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x050d,	// (0x0008541d) list_medium_line_x2_t2_g3_t1

0x0458,	// (0x00085368) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000941e0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000941e0) list_medium_line_x2_t2_g3_t

0x3be5,	// (0x00088af5) main_sp_fs_list_pane_ParamLimits

0x3be5,	// (0x00088af5) main_sp_fs_list_pane

0xb223,	// (0x00090133) sp_fs_scroll_pane_ParamLimits

0xb223,	// (0x00090133) sp_fs_scroll_pane

0x0522,	// (0x00085432) list_medium_line_x2_t3_t1

0x0532,	// (0x00085442) list_medium_line_x2_t3_t2

0x0540,	// (0x00085450) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0009422b) list_medium_line_x2_t3_t

0x054e,	// (0x0008545e) list_medium_line_x3_t4_t1

0x055e,	// (0x0008546e) list_medium_line_x3_t4_t2

0x056c,	// (0x0008547c) list_medium_line_x3_t4_t3

0x0540,	// (0x00085450) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00094232) list_medium_line_x3_t4_t

0x057a,	// (0x0008548a) list_medium_line_x4_t5_t1

0x058a,	// (0x0008549a) list_medium_line_x4_t5_t2

0x056c,	// (0x0008547c) list_medium_line_x4_t5_t3

0x0598,	// (0x000854a8) list_medium_line_x4_t5_t4

0x0540,	// (0x00085450) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0009423b) list_medium_line_x4_t5_t

0x0417,	// (0x00085327) list_medium_line_t4_g4_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_t4_g4_g1

0x0495,	// (0x000853a5) list_medium_line_t4_g4_g2_ParamLimits

0x0495,	// (0x000853a5) list_medium_line_t4_g4_g2

0x05a6,	// (0x000854b6) list_medium_line_t4_g4_g3_ParamLimits

0x05a6,	// (0x000854b6) list_medium_line_t4_g4_g3

0x0423,	// (0x00085333) list_medium_line_t4_g4_g4_ParamLimits

0x0423,	// (0x00085333) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00094246) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00094246) list_medium_line_t4_g4_g

0x05b2,	// (0x000854c2) list_medium_line_t4_g4_t1_ParamLimits

0x05b2,	// (0x000854c2) list_medium_line_t4_g4_t1

0x05c7,	// (0x000854d7) list_medium_line_t4_g4_t2_ParamLimits

0x05c7,	// (0x000854d7) list_medium_line_t4_g4_t2

0x05dc,	// (0x000854ec) list_medium_line_t4_g4_t3_ParamLimits

0x05dc,	// (0x000854ec) list_medium_line_t4_g4_t3

0x0458,	// (0x00085368) list_medium_line_t4_g4_t4_ParamLimits

0x0458,	// (0x00085368) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009424f) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009424f) list_medium_line_t4_g4_t

0x3f26,	// (0x00088e36) chi_dic_find_pane_g1

0x5dd0,	// (0x0008ace0) main_tport_pane

0x0781,	// (0x00085691) list_medium_line_plain_t1

0x078f,	// (0x0008569f) list_medium_line_t2_g2_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t2_g2_g1

0x8c92,	// (0x0008dba2) list_medium_line_t2_g2_g2_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00094923) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00094923) list_medium_line_t2_g2_g

0x079b,	// (0x000856ab) list_medium_line_t2_g2_t1_ParamLimits

0x079b,	// (0x000856ab) list_medium_line_t2_g2_t1

0x07b5,	// (0x000856c5) list_medium_line_t2_g2_t2_ParamLimits

0x07b5,	// (0x000856c5) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00094928) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00094928) list_medium_line_t2_g2_t

0xd2b1,	// (0x000921c1) aid_sp_fs_list_icon_a_sm

0xf07b,	// (0x00093f8b) aid_sp_fs_list_icon_d

0x917c,	// (0x0008e08c) aid_sp_fs_text_primary

0xf083,	// (0x00093f93) aid_sp_fs_text_secondary

0x9185,	// (0x0008e095) list_medium_line

0x9185,	// (0x0008e095) list_medium_line_g2

0x9185,	// (0x0008e095) list_medium_line_g3

0x9185,	// (0x0008e095) list_medium_line_plain

0x9185,	// (0x0008e095) list_medium_line_plain_t2

0x9185,	// (0x0008e095) list_medium_line_plain_t3

0x9185,	// (0x0008e095) list_medium_line_right_icon

0x9185,	// (0x0008e095) list_medium_line_right_iconx2

0x9185,	// (0x0008e095) list_medium_line_t2

0x9185,	// (0x0008e095) list_medium_line_t2_g2

0x9185,	// (0x0008e095) list_medium_line_t2_g3

0x9185,	// (0x0008e095) list_medium_line_t2_right_icon

0x9185,	// (0x0008e095) list_medium_line_t2_right_iconx2

0x9185,	// (0x0008e095) list_medium_line_t3

0x9185,	// (0x0008e095) list_medium_line_t3_g2

0x9185,	// (0x0008e095) list_medium_line_t3_g3

0x9185,	// (0x0008e095) list_medium_line_t3_right_iconx2

0x918e,	// (0x0008e09e) list_medium_line_t4_g4

0x9197,	// (0x0008e0a7) list_medium_line_x2

0x9197,	// (0x0008e0a7) list_medium_line_x2_t2_g2

0x9197,	// (0x0008e0a7) list_medium_line_x2_t2_g3

0x9197,	// (0x0008e0a7) list_medium_line_x2_t2_g4

0x9197,	// (0x0008e0a7) list_medium_line_x2_t3

0x9197,	// (0x0008e0a7) list_medium_line_x2_t3_g2

0x9197,	// (0x0008e0a7) list_medium_line_x2_t3_g3

0x9197,	// (0x0008e0a7) list_medium_line_x2_t3_g4

0x9197,	// (0x0008e0a7) list_medium_line_x2_t4_g2

0x9197,	// (0x0008e0a7) list_medium_line_x2_t4_g4

0x91a0,	// (0x0008e0b0) list_medium_line_x3

0x91a0,	// (0x0008e0b0) list_medium_line_x3_t4

0x91a0,	// (0x0008e0b0) list_medium_line_x3_t4_g4

0x918e,	// (0x0008e09e) list_medium_line_x4_t4

0x918e,	// (0x0008e09e) list_medium_line_x4_t4_g7

0x918e,	// (0x0008e09e) list_medium_line_x4_t5

0x0947,	// (0x00085857) list_single_fs_dyc_pane_ParamLimits

0x0947,	// (0x00085857) list_single_fs_dyc_pane

0x0417,	// (0x00085327) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x4_t4_g7_g1

0x095b,	// (0x0008586b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x095b,	// (0x0008586b) list_medium_line_x4_t4_g7_g2

0x98bb,	// (0x0008e7cb) list_medium_line_x4_t4_g7_g3_ParamLimits

0x98bb,	// (0x0008e7cb) list_medium_line_x4_t4_g7_g3

0x98ca,	// (0x0008e7da) list_medium_line_x4_t4_g7_g4_ParamLimits

0x98ca,	// (0x0008e7da) list_medium_line_x4_t4_g7_g4

0x0967,	// (0x00085877) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0967,	// (0x00085877) list_medium_line_x4_t4_g7_g5

0x0976,	// (0x00085886) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0976,	// (0x00085886) list_medium_line_x4_t4_g7_g6

0x0985,	// (0x00085895) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0985,	// (0x00085895) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00094af3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00094af3) list_medium_line_x4_t4_g7_g

0x0991,	// (0x000858a1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0991,	// (0x000858a1) list_medium_line_x4_t4_g7_t1

0x09a6,	// (0x000858b6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09a6,	// (0x000858b6) list_medium_line_x4_t4_g7_t2

0x09bb,	// (0x000858cb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x09bb,	// (0x000858cb) list_medium_line_x4_t4_g7_t3

0x09d0,	// (0x000858e0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x09d0,	// (0x000858e0) list_medium_line_x4_t4_g7_t4

0x09e2,	// (0x000858f2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x09e2,	// (0x000858f2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00094b02) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00094b02) list_medium_line_x4_t4_g7_t

0x09f4,	// (0x00085904) list_single_dyc_row_pane_ParamLimits

0x09f4,	// (0x00085904) list_single_dyc_row_pane

0x9f4c,	// (0x0008ee5c) call5_gesture_pane_ParamLimits

0x9f4c,	// (0x0008ee5c) call5_gesture_pane

0x9fa2,	// (0x0008eeb2) call5_windows_pane_ParamLimits

0x9fa2,	// (0x0008eeb2) call5_windows_pane

0xa04c,	// (0x0008ef5c) call5_swipe_1_pane_cp_ParamLimits

0xa04c,	// (0x0008ef5c) call5_swipe_1_pane_cp

0xa058,	// (0x0008ef68) call5_swipe_2_pane_cp_ParamLimits

0xa058,	// (0x0008ef68) call5_swipe_2_pane_cp

0x245d,	// (0x0008736d) call5_image_pane_cp

0xa064,	// (0x0008ef74) popup_call5_audio_first_window_cp_ParamLimits

0xa064,	// (0x0008ef74) popup_call5_audio_first_window_cp

0xdd97,	// (0x00092ca7) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd97,	// (0x00092ca7) call5_swipe_1_pane_g1_cp

0xddd7,	// (0x00092ce7) call5_swipe_1_pane_g2_cp

0xddb0,	// (0x00092cc0) call5_swipe_1_pane_t1_cp_ParamLimits

0xddb0,	// (0x00092cc0) call5_swipe_1_pane_t1_cp

0xdd97,	// (0x00092ca7) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd97,	// (0x00092ca7) call5_swipe_2_pane_g1_cp

0xdddf,	// (0x00092cef) call5_swipe_2_pane_g2_cp

0xdde7,	// (0x00092cf7) call5_swipe_2_pane_t1_cp_ParamLimits

0xdde7,	// (0x00092cf7) call5_swipe_2_pane_t1_cp

0xead3,	// (0x000939e3) main_sp_fs_email_pane

0xddfc,	// (0x00092d0c) main_sp_fs_listscroll_pane_te

0xa072,	// (0x0008ef82) popup_sp_fs_action_menu_pane_ParamLimits

0xa072,	// (0x0008ef82) popup_sp_fs_action_menu_pane

0xc05a,	// (0x00090f6a) bg_sp_fs_ctrlbar_pane_g1

0xde05,	// (0x00092d15) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde0e,	// (0x00092d1e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde17,	// (0x00092d27) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc05a,	// (0x00090f6a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00094bf0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe3f,	// (0x00090d4f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe3f,	// (0x00090d4f) bg_sp_fs_ctrlbar_ddmenu_pane

0xde20,	// (0x00092d30) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde20,	// (0x00092d30) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde2c,	// (0x00092d3c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde2c,	// (0x00092d3c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00094bf9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00094bf9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde38,	// (0x00092d48) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde38,	// (0x00092d48) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa0b6,	// (0x0008efc6) list_medium_line_t2_right_icon_g1

0x0a89,	// (0x00085999) list_medium_line_t2_right_icon_t1

0x0a99,	// (0x000859a9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00094bfe) list_medium_line_t2_right_icon_t

0xbb3f,	// (0x00090a4f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbb3f,	// (0x00090a4f) bg_sp_fs_ctrlbar_pane

0xa106,	// (0x0008f016) main_sp_fs_ctrlbar_button_pane_cp01

0xa110,	// (0x0008f020) main_sp_fs_ctrlbar_ddmenu_pane

0xde8a,	// (0x00092d9a) main_sp_fs_ctrlbar_pane_g1

0xde96,	// (0x00092da6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00094c03) main_sp_fs_ctrlbar_pane_g

0xdea2,	// (0x00092db2) main_sp_fs_ctrlbar_pane_t1

0xa11a,	// (0x0008f02a) main_sp_fs_ctrlbar_pane

0xa13e,	// (0x0008f04e) main_sp_fs_listscroll_pane_te_cp01

0x0aab,	// (0x000859bb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0aab,	// (0x000859bb) popup_sp_fs_action_menu_pane_cp01

0xead3,	// (0x000939e3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xead3,	// (0x000939e3) bg_sp_fs_highlight_list_pane_cp01

0xded2,	// (0x00092de2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xded2,	// (0x00092de2) sp_fs_action_menu_list_gene_pane_g1

0xdee1,	// (0x00092df1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdee1,	// (0x00092df1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00094c0d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00094c0d) sp_fs_action_menu_list_gene_pane_g

0xdeee,	// (0x00092dfe) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdeee,	// (0x00092dfe) sp_fs_action_menu_list_gene_pane_t1

0xdf06,	// (0x00092e16) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf06,	// (0x00092e16) sp_fs_action_menu_list_gene_pane

0xdf25,	// (0x00092e35) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf25,	// (0x00092e35) popup_sp_fs_action_menu_bg_pane

0xdf33,	// (0x00092e43) sp_fs_action_menu_list_pane_ParamLimits

0xdf33,	// (0x00092e43) sp_fs_action_menu_list_pane

0x0adb,	// (0x000859eb) sp_fs_scroll_pane_cp01_ParamLimits

0x0adb,	// (0x000859eb) sp_fs_scroll_pane_cp01

0x0b01,	// (0x00085a11) list_medium_line_plain_t2_t1

0x0b11,	// (0x00085a21) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00094c12) list_medium_line_plain_t2_t

0x0b21,	// (0x00085a31) list_medium_line_plain_t3_t1

0x0b31,	// (0x00085a41) list_medium_line_plain_t3_t2

0x0b3f,	// (0x00085a4f) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00094c17) list_medium_line_plain_t3_t

0x0417,	// (0x00085327) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t2_g2_g1

0x0423,	// (0x00085333) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00094156) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00094156) list_medium_line_x2_t2_g2_g

0x05b2,	// (0x000854c2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x05b2,	// (0x000854c2) list_medium_line_x2_t2_g2_t1

0x0458,	// (0x00085368) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00094c1e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00094c1e) list_medium_line_x2_t2_g2_t

0x0417,	// (0x00085327) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t4_g2_g1

0x0b4d,	// (0x00085a5d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b4d,	// (0x00085a5d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00094c23) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00094c23) list_medium_line_x2_t4_g2_g

0x0b5f,	// (0x00085a6f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b5f,	// (0x00085a6f) list_medium_line_x2_t4_g2_t1

0x0b79,	// (0x00085a89) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b79,	// (0x00085a89) list_medium_line_x2_t4_g2_t2

0x0b8f,	// (0x00085a9f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b8f,	// (0x00085a9f) list_medium_line_x2_t4_g2_t3

0x0458,	// (0x00085368) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x00094c28) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x00094c28) list_medium_line_x2_t4_g2_t

0xa15e,	// (0x0008f06e) list_medium_line_t3_right_iconx2_g1

0xa0b6,	// (0x0008efc6) list_medium_line_t3_right_iconx2_g2

0x0ba4,	// (0x00085ab4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00094c31) list_medium_line_t3_right_iconx2_g

0x0bae,	// (0x00085abe) list_medium_line_t3_right_iconx2_t1

0x0bbe,	// (0x00085ace) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x00094c38) list_medium_line_t3_right_iconx2_t

0x0417,	// (0x00085327) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x3_t4_g4_g1

0x2815,	// (0x00087725) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x3_t4_g4_g2

0x0495,	// (0x000853a5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0495,	// (0x000853a5) list_medium_line_x3_t4_g4_g3

0xa166,	// (0x0008f076) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa166,	// (0x0008f076) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x00094c3d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x00094c3d) list_medium_line_x3_t4_g4_g

0x0bcc,	// (0x00085adc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0bcc,	// (0x00085adc) list_medium_line_x3_t4_g4_t1

0x0be3,	// (0x00085af3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0be3,	// (0x00085af3) list_medium_line_x3_t4_g4_t2

0x05c7,	// (0x000854d7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x05c7,	// (0x000854d7) list_medium_line_x3_t4_g4_t3

0x0bfe,	// (0x00085b0e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0bfe,	// (0x00085b0e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x00094c46) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x00094c46) list_medium_line_x3_t4_g4_t

0x0c1b,	// (0x00085b2b) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c1b,	// (0x00085b2b) list_single_dyc_row_text_pane_t1

0x0c64,	// (0x00085b74) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c64,	// (0x00085b74) list_single_dyc_row_text_pane_t2

0xdf53,	// (0x00092e63) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf53,	// (0x00092e63) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x00094c4f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x00094c4f) list_single_dyc_row_text_pane_t

0xdf77,	// (0x00092e87) list_single_dyc_row_pane_g1_ParamLimits

0xdf77,	// (0x00092e87) list_single_dyc_row_pane_g1

0xdf83,	// (0x00092e93) list_single_dyc_row_pane_g2_ParamLimits

0xdf83,	// (0x00092e93) list_single_dyc_row_pane_g2

0xdf8f,	// (0x00092e9f) list_single_dyc_row_pane_g3_ParamLimits

0xdf8f,	// (0x00092e9f) list_single_dyc_row_pane_g3

0xdf9b,	// (0x00092eab) list_single_dyc_row_pane_g4_ParamLimits

0xdf9b,	// (0x00092eab) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00094c5c) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00094c5c) list_single_dyc_row_pane_g

0xdfa7,	// (0x00092eb7) list_single_dyc_row_text_pane_ParamLimits

0xdfa7,	// (0x00092eb7) list_single_dyc_row_text_pane

0xeac9,	// (0x000939d9) bg_sp_fs_scroll_pane

0xdfc6,	// (0x00092ed6) thumb_sp_fs_scroll_pane

0x078f,	// (0x0008569f) list_medium_line_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_g1

0x0d99,	// (0x00085ca9) list_medium_line_t1_ParamLimits

0x0d99,	// (0x00085ca9) list_medium_line_t1

0x0417,	// (0x00085327) list_medium_line_x2_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_g1

0x2815,	// (0x00087725) list_medium_line_x2_g2_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00094c65) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00094c65) list_medium_line_x2_g

0xdfcf,	// (0x00092edf) list_medium_line_x2_t1_ParamLimits

0xdfcf,	// (0x00092edf) list_medium_line_x2_t1

0x0417,	// (0x00085327) list_medium_line_x3_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x3_g1

0x2815,	// (0x00087725) list_medium_line_x3_g2_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00094c65) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00094c65) list_medium_line_x3_g

0xdfcf,	// (0x00092edf) list_medium_line_x3_t1_ParamLimits

0xdfcf,	// (0x00092edf) list_medium_line_x3_t1

0xdfe5,	// (0x00092ef5) thumb_sp_fs_scroll_pane_g1

0xdfee,	// (0x00092efe) thumb_sp_fs_scroll_pane_g2

0xdff7,	// (0x00092f07) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00094c6a) thumb_sp_fs_scroll_pane_g

0xdfe5,	// (0x00092ef5) bg_sp_fs_scroll_pane_g1

0xdfee,	// (0x00092efe) bg_sp_fs_scroll_pane_g2

0xdff7,	// (0x00092f07) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00094c6a) bg_sp_fs_scroll_pane_g

0x0417,	// (0x00085327) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0417,	// (0x00085327) list_medium_line_x2_t3_g4_g1

0x2821,	// (0x00087731) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2821,	// (0x00087731) list_medium_line_x2_t3_g4_g2

0x2815,	// (0x00087725) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2815,	// (0x00087725) list_medium_line_x2_t3_g4_g3

0x0423,	// (0x00085333) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0423,	// (0x00085333) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000941d2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000941d2) list_medium_line_x2_t3_g4_g

0x0dae,	// (0x00085cbe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0dae,	// (0x00085cbe) list_medium_line_x2_t3_g4_t1

0x0dc8,	// (0x00085cd8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0dc8,	// (0x00085cd8) list_medium_line_x2_t3_g4_t2

0x0458,	// (0x00085368) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0458,	// (0x00085368) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00094c71) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00094c71) list_medium_line_x2_t3_g4_t

0x078f,	// (0x0008569f) list_medium_line_g2_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_g2_g1

0x8c92,	// (0x0008dba2) list_medium_line_g2_g2_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00094923) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00094923) list_medium_line_g2_g

0x0de2,	// (0x00085cf2) list_medium_line_g2_t1_ParamLimits

0x0de2,	// (0x00085cf2) list_medium_line_g2_t1

0x078f,	// (0x0008569f) list_medium_line_t3_g2_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t3_g2_g1

0x8c92,	// (0x0008dba2) list_medium_line_t3_g2_g2_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00094923) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00094923) list_medium_line_t3_g2_g

0x0df7,	// (0x00085d07) list_medium_line_t3_g2_t1_ParamLimits

0x0df7,	// (0x00085d07) list_medium_line_t3_g2_t1

0x0e11,	// (0x00085d21) list_medium_line_t3_g2_t2_ParamLimits

0x0e11,	// (0x00085d21) list_medium_line_t3_g2_t2

0x0e27,	// (0x00085d37) list_medium_line_t3_g2_t3_ParamLimits

0x0e27,	// (0x00085d37) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00094c78) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00094c78) list_medium_line_t3_g2_t

0xa0b6,	// (0x0008efc6) list_medium_line_right_icon_g1

0x0e41,	// (0x00085d51) list_medium_line_right_icon_t1

0x078f,	// (0x0008569f) list_medium_line_t2_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t2_g1

0x0e4f,	// (0x00085d5f) list_medium_line_t2_t1_ParamLimits

0x0e4f,	// (0x00085d5f) list_medium_line_t2_t1

0x0e69,	// (0x00085d79) list_medium_line_t2_t2_ParamLimits

0x0e69,	// (0x00085d79) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00094c7f) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00094c7f) list_medium_line_t2_t

0x078f,	// (0x0008569f) list_medium_line_t3_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t3_g1

0x0e82,	// (0x00085d92) list_medium_line_t3_t1_ParamLimits

0x0e82,	// (0x00085d92) list_medium_line_t3_t1

0x0e9c,	// (0x00085dac) list_medium_line_t3_t2_ParamLimits

0x0e9c,	// (0x00085dac) list_medium_line_t3_t2

0x0eb2,	// (0x00085dc2) list_medium_line_t3_t3_ParamLimits

0x0eb2,	// (0x00085dc2) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00094c84) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00094c84) list_medium_line_t3_t

0x078f,	// (0x0008569f) list_medium_line_g3_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_g3_g1

0xa172,	// (0x0008f082) list_medium_line_g3_g2_ParamLimits

0xa172,	// (0x0008f082) list_medium_line_g3_g2

0x8c92,	// (0x0008dba2) list_medium_line_g3_g3_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00094c8b) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00094c8b) list_medium_line_g3_g

0x0ec7,	// (0x00085dd7) list_medium_line_g3_t1_ParamLimits

0x0ec7,	// (0x00085dd7) list_medium_line_g3_t1

0x078f,	// (0x0008569f) list_medium_line_t2_g3_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t2_g3_g1

0xa172,	// (0x0008f082) list_medium_line_t2_g3_g2_ParamLimits

0xa172,	// (0x0008f082) list_medium_line_t2_g3_g2

0x8c92,	// (0x0008dba2) list_medium_line_t2_g3_g3_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00094c8b) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00094c8b) list_medium_line_t2_g3_g

0x0edc,	// (0x00085dec) list_medium_line_t2_g3_t1_ParamLimits

0x0edc,	// (0x00085dec) list_medium_line_t2_g3_t1

0x0ef6,	// (0x00085e06) list_medium_line_t2_g3_t2_ParamLimits

0x0ef6,	// (0x00085e06) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00094c92) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00094c92) list_medium_line_t2_g3_t

0x078f,	// (0x0008569f) list_medium_line_t3_g3_g1_ParamLimits

0x078f,	// (0x0008569f) list_medium_line_t3_g3_g1

0xa172,	// (0x0008f082) list_medium_line_t3_g3_g2_ParamLimits

0xa172,	// (0x0008f082) list_medium_line_t3_g3_g2

0x8c92,	// (0x0008dba2) list_medium_line_t3_g3_g3_ParamLimits

0x8c92,	// (0x0008dba2) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00094c8b) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00094c8b) list_medium_line_t3_g3_g

0x0f14,	// (0x00085e24) list_medium_line_t3_g3_t1_ParamLimits

0x0f14,	// (0x00085e24) list_medium_line_t3_g3_t1

0x0f2d,	// (0x00085e3d) list_medium_line_t3_g3_t2_ParamLimits

0x0f2d,	// (0x00085e3d) list_medium_line_t3_g3_t2

0x0f43,	// (0x00085e53) list_medium_line_t3_g3_t3_ParamLimits

0x0f43,	// (0x00085e53) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00094c97) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00094c97) list_medium_line_t3_g3_t

0xa15e,	// (0x0008f06e) list_medium_line_right_iconx2_g1

0xa0b6,	// (0x0008efc6) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00094c9e) list_medium_line_right_iconx2_g

0xf0b0,	// (0x00093fc0) list_medium_line_right_iconx2_t1

0xa15e,	// (0x0008f06e) list_medium_line_t2_right_iconx2_g1

0xa0b6,	// (0x0008efc6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00094c9e) list_medium_line_t2_right_iconx2_g

0x0f5d,	// (0x00085e6d) list_medium_line_t2_right_iconx2_t1

0x0f6d,	// (0x00085e7d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00094ca3) list_medium_line_t2_right_iconx2_t

0x0f7f,	// (0x00085e8f) list_medium_line_x4_t4_t1

0x0f8d,	// (0x00085e9d) list_medium_line_x4_t4_t2

0x0f9d,	// (0x00085ead) list_medium_line_x4_t4_t3

0x0fad,	// (0x00085ebd) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00094ca8) list_medium_line_x4_t4_t

0xa1c1,	// (0x0008f0d1) tport_appsw_pane_ParamLimits

0xa1c1,	// (0x0008f0d1) tport_appsw_pane

0xa1d9,	// (0x0008f0e9) tport_contact_pane_ParamLimits

0xa1d9,	// (0x0008f0e9) tport_contact_pane

0xa1f1,	// (0x0008f101) tport_listscroll_pane_ParamLimits

0xa1f1,	// (0x0008f101) tport_listscroll_pane

0xa20b,	// (0x0008f11b) cell_tport_appsw_pane_ParamLimits

0xa20b,	// (0x0008f11b) cell_tport_appsw_pane

0xcd06,	// (0x00091c16) tport_appsw_pane_g1_ParamLimits

0xcd06,	// (0x00091c16) tport_appsw_pane_g1

0xe000,	// (0x00092f10) tport_contact_pane_g1

0xe009,	// (0x00092f19) tport_contact_pane_t1

0xe017,	// (0x00092f27) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00094cb1) tport_contact_pane_t

0xe025,	// (0x00092f35) list_tport_pane

0xe02e,	// (0x00092f3e) scroll_pane_cp_030

0xa253,	// (0x0008f163) cell_tport_appsw_pane_g1

0xa263,	// (0x0008f173) cell_tport_appsw_pane_t1

0xa271,	// (0x0008f181) grid_highlight_pane_cp019

0xa279,	// (0x0008f189) list_tport_double_graphic_pane_ParamLimits

0xa279,	// (0x0008f189) list_tport_double_graphic_pane

0xead3,	// (0x000939e3) list_highlight_pane_cp023_ParamLimits

0xead3,	// (0x000939e3) list_highlight_pane_cp023

0xa286,	// (0x0008f196) list_tport_double_graphic_pane_g1_ParamLimits

0xa286,	// (0x0008f196) list_tport_double_graphic_pane_g1

0xa293,	// (0x0008f1a3) list_tport_double_graphic_pane_t1_ParamLimits

0xa293,	// (0x0008f1a3) list_tport_double_graphic_pane_t1

0xa2a8,	// (0x0008f1b8) list_tport_double_graphic_pane_t2_ParamLimits

0xa2a8,	// (0x0008f1b8) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00094cbd) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00094cbd) list_tport_double_graphic_pane_t

0xeac9,	// (0x000939d9) main_cale_note_pane

0x84a3,	// (0x0008d3b3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x84a3,	// (0x0008d3b3) cell_vitu2_function_top_wide_pane_cp01

0x9c55,	// (0x0008eb65) wait_bar_pane_cp05_ParamLimits

0xead3,	// (0x000939e3) listscroll_cmail_pane

0xe037,	// (0x00092f47) list_cmail_pane

0xa2ba,	// (0x0008f1ca) list_cmail_body_pane

0xa2cf,	// (0x0008f1df) list_single_cmail_header_caption_pane

0xa2e6,	// (0x0008f1f6) list_single_cmail_header_detail_pane_ParamLimits

0xa2e6,	// (0x0008f1f6) list_single_cmail_header_detail_pane

0xe047,	// (0x00092f57) list_single_cmail_header_caption_pane_t1

0x0fbd,	// (0x00085ecd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0fbd,	// (0x00085ecd) list_single_cmail_header_detail_pane_g1

0xf0be,	// (0x00093fce) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0be,	// (0x00093fce) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00094cc2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00094cc2) list_single_cmail_header_detail_pane_g

0xe06b,	// (0x00092f7b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe06b,	// (0x00092f7b) list_single_cmail_header_detail_pane_t1

0xe0cb,	// (0x00092fdb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe0cb,	// (0x00092fdb) list_single_cmail_header_editor_pane_bg

0xda2a,	// (0x0009293a) list_cmail_body_pane_g1

0xe0e2,	// (0x00092ff2) list_cmail_body_pane_t1

0xcd43,	// (0x00091c53) list_single_cmail_header_editor_pane_bg_g1

0x2e77,	// (0x00087d87) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd53,	// (0x00091c63) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd4b,	// (0x00091c5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcf91,	// (0x00091ea1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd73,	// (0x00091c83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd63,	// (0x00091c73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd6b,	// (0x00091c7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2e57,	// (0x00087d67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa310,	// (0x0008f220) calenote_gesture_pane_ParamLimits

0xa310,	// (0x0008f220) calenote_gesture_pane

0xa330,	// (0x0008f240) calenote_window_pane_ParamLimits

0xa330,	// (0x0008f240) calenote_window_pane

0xe0f0,	// (0x00093000) popup_note_window_cp01

0xa34c,	// (0x0008f25c) calenote_swipe_1_pane_ParamLimits

0xa34c,	// (0x0008f25c) calenote_swipe_1_pane

0xa058,	// (0x0008ef68) calenote_swipe_2_pane_ParamLimits

0xa058,	// (0x0008ef68) calenote_swipe_2_pane

0xdd97,	// (0x00092ca7) calenote_swipe_1_pane_g1_ParamLimits

0xdd97,	// (0x00092ca7) calenote_swipe_1_pane_g1

0xdda4,	// (0x00092cb4) calenote_swipe_1_pane_g2_ParamLimits

0xdda4,	// (0x00092cb4) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00094be6) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00094be6) calenote_swipe_1_pane_g

0xe102,	// (0x00093012) calenote_swipe_1_pane_t1_ParamLimits

0xe102,	// (0x00093012) calenote_swipe_1_pane_t1

0xdd97,	// (0x00092ca7) calenote_swipe_2_pane_g1_ParamLimits

0xdd97,	// (0x00092ca7) calenote_swipe_2_pane_g1

0xe121,	// (0x00093031) calenote_swipe_2_pane_g2_ParamLimits

0xe121,	// (0x00093031) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00094cce) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00094cce) calenote_swipe_2_pane_g

0xe12d,	// (0x0009303d) calenote_swipe_2_pane_t1_ParamLimits

0xe12d,	// (0x0009303d) calenote_swipe_2_pane_t1

0xeac9,	// (0x000939d9) main_mup_navstr_pane

0x7167,	// (0x0008c077) main_mup3_pane_t7_ParamLimits

0x7167,	// (0x0008c077) main_mup3_pane_t7

0xca16,	// (0x00091926) main_mp4_pane_g6_ParamLimits

0xca16,	// (0x00091926) main_mp4_pane_g6

0xee95,	// (0x00093da5) main_image3_pane_t4_ParamLimits

0xee95,	// (0x00093da5) main_image3_pane_t4

0xa361,	// (0x0008f271) popup_navstr_preview_pane_ParamLimits

0xa361,	// (0x0008f271) popup_navstr_preview_pane

0xa375,	// (0x0008f285) scroll_navstr_pane_ParamLimits

0xa375,	// (0x0008f285) scroll_navstr_pane

0xeac9,	// (0x000939d9) bg_popup_preview_window_pane_cp04

0xe154,	// (0x00093064) popup_navstr_preview_pane_t1

0xa389,	// (0x0008f299) scroll_navstr_pane_g1_ParamLimits

0xa389,	// (0x0008f299) scroll_navstr_pane_g1

0xa39d,	// (0x0008f2ad) scroll_navstr_pane_t1_ParamLimits

0xa39d,	// (0x0008f2ad) scroll_navstr_pane_t1

0xe0f9,	// (0x00093009) bg_button_pane_cp014

0xe0f9,	// (0x00093009) bg_button_pane_cp030

0x0a2f,	// (0x0008593f) list_double_fisheye_pane_g4_ParamLimits

0x0a2f,	// (0x0008593f) list_double_fisheye_pane_g4

0x0a3b,	// (0x0008594b) list_double_fisheye_pane_g5_ParamLimits

0x0a3b,	// (0x0008594b) list_double_fisheye_pane_g5

0xb223,	// (0x00090133) sp_fs_scroll_pane_cp03

0xde8a,	// (0x00092d9a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde96,	// (0x00092da6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00094c03) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdea2,	// (0x00092db2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe03f,	// (0x00092f4f) sp_fs_scroll_pane_cp02

0x1e3b,	// (0x00086d4b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1e3b,	// (0x00086d4b) popup_sp_fs_calendar_preview_list_single_pane

0xeac9,	// (0x000939d9) main_cam6_pano_pane

0xead3,	// (0x000939e3) main_mup3_pane_ParamLimits

0xeac9,	// (0x000939d9) main_phacti_pane

0x9b28,	// (0x0008ea38) bg_button_pane_cp11

0x9b42,	// (0x0008ea52) main_mobtv_info_pane_g2_ParamLimits

0x9b42,	// (0x0008ea52) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00094b63) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00094b63) main_mobtv_info_pane_g

0x9d1f,	// (0x0008ec2f) sc_clock_pane_t5_ParamLimits

0x9d1f,	// (0x0008ec2f) sc_clock_pane_t5

0x9de7,	// (0x0008ecf7) main_radioblah_pane_g1_ParamLimits

0xdcc8,	// (0x00092bd8) main_radioblah_pane_t3_ParamLimits

0xdcc8,	// (0x00092bd8) main_radioblah_pane_t3

0xdce0,	// (0x00092bf0) main_radioblah_pane_t4_ParamLimits

0xdce0,	// (0x00092bf0) main_radioblah_pane_t4

0x9e0f,	// (0x0008ed1f) main_radioblah_text_pane_ParamLimits

0x9e0f,	// (0x0008ed1f) main_radioblah_text_pane

0x9e21,	// (0x0008ed31) main_radioblah_info_pane_g1_ParamLimits

0x9eba,	// (0x0008edca) main_radioblah_info_pane_t4_ParamLimits

0x9eba,	// (0x0008edca) main_radioblah_info_pane_t4

0xead3,	// (0x000939e3) main_sp_fs_calendar_pane

0xa3b4,	// (0x0008f2c4) main_phacti_pane_g1

0xa3bc,	// (0x0008f2cc) phacti_note_pane_ParamLimits

0xa3bc,	// (0x0008f2cc) phacti_note_pane

0xe16b,	// (0x0009307b) phacti_term_pane_ParamLimits

0xe16b,	// (0x0009307b) phacti_term_pane

0xe180,	// (0x00093090) phacti_note_pane_t1_ParamLimits

0xe180,	// (0x00093090) phacti_note_pane_t1

0xe197,	// (0x000930a7) phacti_term_pane_g1

0xe19f,	// (0x000930af) phacti_term_pane_t1_ParamLimits

0xe19f,	// (0x000930af) phacti_term_pane_t1

0xe1c9,	// (0x000930d9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe1d1,	// (0x000930e1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00094cd8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe1d9,	// (0x000930e9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe1d9,	// (0x000930e9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1ef,	// (0x000930ff) aid_popup_sp_fs_bg_corner_pane

0xc05a,	// (0x00090f6a) popup_sp_fs_calendar_preview_bg_pane_g1

0xeac9,	// (0x000939d9) popup_sp_fs_calendar_preview_bg_pane

0x2650,	// (0x00087560) popup_sp_fs_calendar_preview_list_pane

0xbb3f,	// (0x00090a4f) bg_main_sp_fs_cale_pane_ParamLimits

0xbb3f,	// (0x00090a4f) bg_main_sp_fs_cale_pane

0xe200,	// (0x00093110) listscroll_cale_mrui_pane_ParamLimits

0xe200,	// (0x00093110) listscroll_cale_mrui_pane

0xe215,	// (0x00093125) listscroll_sp_fs_schedule_track_pane

0xe21e,	// (0x0009312e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe21e,	// (0x0009312e) main_sp_fs_ctrlbar_pane_cp01

0xe231,	// (0x00093141) main_sp_fs_ribbon_pane

0xe239,	// (0x00093149) popup_sp_fs_cale_preview_window

0xa431,	// (0x0008f341) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa431,	// (0x0008f341) list_single_sp_fs_schedule_track_pane

0xead3,	// (0x000939e3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xead3,	// (0x000939e3) bg_sp_fs_highlight_list_pane_cp03

0xa445,	// (0x0008f355) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa445,	// (0x0008f355) list_single_sp_fs_schedule_track_pane_g1

0xa451,	// (0x0008f361) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa451,	// (0x0008f361) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00094cdd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00094cdd) list_single_sp_fs_schedule_track_pane_g

0xa45d,	// (0x0008f36d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa45d,	// (0x0008f36d) list_single_sp_fs_schedule_track_pane_t1

0xa477,	// (0x0008f387) sp_fs_schedule_track_pane_ParamLimits

0xa477,	// (0x0008f387) sp_fs_schedule_track_pane

0xe24b,	// (0x0009315b) sp_fs_schedule_track_pane_g1

0xe253,	// (0x00093163) sp_fs_schedule_track_pane_g2

0xe25b,	// (0x0009316b) sp_fs_schedule_track_pane_g3

0xe263,	// (0x00093173) sp_fs_schedule_track_pane_g4

0xe26b,	// (0x0009317b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00094ce2) sp_fs_schedule_track_pane_g

0xcd43,	// (0x00091c53) bg_sp_fs_schedule_viewer_highlight_g1

0x2e77,	// (0x00087d87) bg_sp_fs_schedule_viewer_highlight_g2

0xcd4b,	// (0x00091c5b) bg_sp_fs_schedule_viewer_highlight_g3

0xcd53,	// (0x00091c63) bg_sp_fs_schedule_viewer_highlight_g4

0xcf91,	// (0x00091ea1) bg_sp_fs_schedule_viewer_highlight_g5

0xcd63,	// (0x00091c73) bg_sp_fs_schedule_viewer_highlight_g6

0xcd6b,	// (0x00091c7b) bg_sp_fs_schedule_viewer_highlight_g7

0xcd73,	// (0x00091c83) bg_sp_fs_schedule_viewer_highlight_g8

0x2e57,	// (0x00087d67) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00094ced) bg_sp_fs_schedule_viewer_highlight_g

0xeac9,	// (0x000939d9) bg_main_sp_fs_ribbon_pane

0xa488,	// (0x0008f398) main_sp_fs_ribbon_pane_g1

0xe273,	// (0x00093183) main_sp_fs_ribbon_pane_t1

0xa491,	// (0x0008f3a1) main_sp_fs_ribbon_pane_t2

0xe282,	// (0x00093192) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00094d00) main_sp_fs_ribbon_pane_t

0xe291,	// (0x000931a1) main_sp_fs_ribbon_scheduler_pane

0xe299,	// (0x000931a9) bg_main_sp_fs_ribbon_pane_g1

0xe2a2,	// (0x000931b2) bg_main_sp_fs_ribbon_pane_g2

0xe2ab,	// (0x000931bb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00094d07) bg_main_sp_fs_ribbon_pane_g

0xe2b3,	// (0x000931c3) main_sp_fs_ribbon_scheduler_pane_g1

0xe2bc,	// (0x000931cc) main_sp_fs_ribbon_scheduler_pane_g2

0xe2c5,	// (0x000931d5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00094d0e) main_sp_fs_ribbon_scheduler_pane_g

0xe2ce,	// (0x000931de) list_cale_mrui_pane

0xa4a0,	// (0x0008f3b0) sp_fs_scroll_pane_cp07_ParamLimits

0xa4a0,	// (0x0008f3b0) sp_fs_scroll_pane_cp07

0xa4bc,	// (0x0008f3cc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa4bc,	// (0x0008f3cc) bg_sp_fs_schedule_viewer_highlight

0xe2db,	// (0x000931eb) list_single_sp_fs_schedule_track_pane_cp01

0xe2e3,	// (0x000931f3) list_sp_fs_schedule_track_pane

0xe2eb,	// (0x000931fb) sp_fs_scroll_pane_cp06_ParamLimits

0xe2eb,	// (0x000931fb) sp_fs_scroll_pane_cp06

0xc05a,	// (0x00090f6a) bgmain_sp_fs_calendar_pane_g1

0x0fd5,	// (0x00085ee5) list_single_cale_mrui_pane_ParamLimits

0x0fd5,	// (0x00085ee5) list_single_cale_mrui_pane

0xe2fd,	// (0x0009320d) list_single_cale_mrui_row_pane_ParamLimits

0xe2fd,	// (0x0009320d) list_single_cale_mrui_row_pane

0xe30a,	// (0x0009321a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe30a,	// (0x0009321a) list_single_cale_mrui_row_pane_g1

0xe34f,	// (0x0009325f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe34f,	// (0x0009325f) list_single_cale_mrui_row_pane_t1

0x0ff6,	// (0x00085f06) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ff6,	// (0x00085f06) list_single_cale_mrui_row_pane_t2

0xe361,	// (0x00093271) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe361,	// (0x00093271) list_single_cale_mrui_row_pane_t3

0xe390,	// (0x000932a0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe390,	// (0x000932a0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00094d1c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00094d1c) list_single_cale_mrui_row_pane_t

0x105e,	// (0x00085f6e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x105e,	// (0x00085f6e) list_single_cmail_header_editor_pane_bg_cp01

0x1084,	// (0x00085f94) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1084,	// (0x00085f94) list_single_cmail_header_editor_pane_bg_cp02

0xa4cc,	// (0x0008f3dc) main_radioblah_text_pane_t1_ParamLimits

0xa4cc,	// (0x0008f3dc) main_radioblah_text_pane_t1

0xe3bf,	// (0x000932cf) cam6_indi_pane_cp01

0xe3c7,	// (0x000932d7) cam6_mode_pane_cp01

0xe3cf,	// (0x000932df) cam6_pano_pane

0xe3d8,	// (0x000932e8) cam6_zoom_pane_cp01

0xe3e0,	// (0x000932f0) cam6_pano_image_pane

0xe3eb,	// (0x000932fb) cam6_pano_pane_g1

0xda2a,	// (0x0009293a) cam6_pano_pane_g2

0xe3f4,	// (0x00093304) cam6_pano_pane_g3

0xe3fd,	// (0x0009330d) cam6_pano_pane_g4

0xc679,	// (0x00091589) cam6_pano_pane_g5

0xe406,	// (0x00093316) cam6_pano_pane_g6

0xe410,	// (0x00093320) cam6_pano_pane_g7

0xe418,	// (0x00093328) cam6_pano_pane_g8

0xe421,	// (0x00093331) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x00094d25) cam6_pano_pane_g

0xeac9,	// (0x000939d9) main_browser_tag_pane

0xe14c,	// (0x0009305c) grid_navstr_albumart_pane

0xe42c,	// (0x0009333c) cell_navstr_albumart_pane_ParamLimits

0xe42c,	// (0x0009333c) cell_navstr_albumart_pane

0xe44c,	// (0x0009335c) cell_navstr_albumart_pane_g1

0xb910,	// (0x00090820) cell_navstr_albumart_pane_g2

0xb920,	// (0x00090830) cell_navstr_albumart_pane_g3

0xb918,	// (0x00090828) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x00094d38) cell_navstr_albumart_pane_g

0xa4e7,	// (0x0008f3f7) bt_list_pane_ParamLimits

0xa4e7,	// (0x0008f3f7) bt_list_pane

0xa4fb,	// (0x0008f40b) bt_list_pane_t1

0xa50a,	// (0x0008f41a) bt_list_pane_t2

0x0001,

0xfe31,	// (0x00094d41) bt_list_pane_t

0xeac9,	// (0x000939d9) main_cale_prevew_pane

0xa519,	// (0x0008f429) popup_cale_preview_window_ParamLimits

0xa519,	// (0x0008f429) popup_cale_preview_window

0xead3,	// (0x000939e3) bg_popup_preview_window_pane_cp05_ParamLimits

0xead3,	// (0x000939e3) bg_popup_preview_window_pane_cp05

0xe454,	// (0x00093364) list_cale_preview_pane_ParamLimits

0xe454,	// (0x00093364) list_cale_preview_pane

0xa532,	// (0x0008f442) list_double_cale_preview_pane_ParamLimits

0xa532,	// (0x0008f442) list_double_cale_preview_pane

0xcd7b,	// (0x00091c8b) list_single_cale_preview_pane_ParamLimits

0xcd7b,	// (0x00091c8b) list_single_cale_preview_pane

0xa544,	// (0x0008f454) list_single_cale_preview_pane_g1

0xa54c,	// (0x0008f45c) list_single_cale_preview_pane_t1_ParamLimits

0xa54c,	// (0x0008f45c) list_single_cale_preview_pane_t1

0xa561,	// (0x0008f471) list_double_cale_preview_pane_g1

0xa569,	// (0x0008f479) list_double_cale_preview_pane_t1_ParamLimits

0xa569,	// (0x0008f479) list_double_cale_preview_pane_t1

0xa57e,	// (0x0008f48e) list_double_cale_preview_pane_t2_ParamLimits

0xa57e,	// (0x0008f48e) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x00094d46) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x00094d46) list_double_cale_preview_pane_t

0xeac9,	// (0x000939d9) main_ezdial_pane

0xead3,	// (0x000939e3) main_sp_fs_email_pane_ParamLimits

0xa0be,	// (0x0008efce) cmail_ddmenu_btn01_pane_ParamLimits

0xa0be,	// (0x0008efce) cmail_ddmenu_btn01_pane

0xa0d1,	// (0x0008efe1) cmail_ddmenu_btn02_pane_ParamLimits

0xa0d1,	// (0x0008efe1) cmail_ddmenu_btn02_pane

0xa0f4,	// (0x0008f004) cmail_ddmenu_btn03_pane_ParamLimits

0xa0f4,	// (0x0008f004) cmail_ddmenu_btn03_pane

0xa11a,	// (0x0008f02a) main_sp_fs_ctrlbar_pane_ParamLimits

0xa13e,	// (0x0008f04e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2ba,	// (0x0008f1ca) list_cmail_body_pane_ParamLimits

0xe055,	// (0x00092f65) bg_button_pane_cp12

0xe05e,	// (0x00092f6e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe05e,	// (0x00092f6e) list_single_cmail_header_detail_pane_g3

0xe0a7,	// (0x00092fb7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe0a7,	// (0x00092fb7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00094cc9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00094cc9) list_single_cmail_header_detail_pane_t

0xe1b4,	// (0x000930c4) phacti_term_pane_t2_ParamLimits

0xe1b4,	// (0x000930c4) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00094cd3) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00094cd3) phacti_term_pane_t

0xe460,	// (0x00093370) aid_size_list_single_double

0xa596,	// (0x0008f4a6) popup_ezdial_listscroll_window

0xa5b2,	// (0x0008f4c2) popup_number_entry_window_cp01

0x245d,	// (0x0008736d) bg_popup_call_pane_cp09

0xe46c,	// (0x0009337c) ezdial_list_pane

0xe474,	// (0x00093384) scroll_pane_cp23

0xbb3f,	// (0x00090a4f) bg_button_pane_cp028_ParamLimits

0xbb3f,	// (0x00090a4f) bg_button_pane_cp028

0xa5c0,	// (0x0008f4d0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa5c0,	// (0x0008f4d0) cmail_ddmenu_btn01_pane_g1

0xa5cc,	// (0x0008f4dc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa5cc,	// (0x0008f4dc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x00094d4b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x00094d4b) cmail_ddmenu_btn01_pane_g

0xe47c,	// (0x0009338c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe47c,	// (0x0009338c) cmail_ddmenu_btn01_pane_t1

0xbb3f,	// (0x00090a4f) bg_button_pane_cp029_ParamLimits

0xbb3f,	// (0x00090a4f) bg_button_pane_cp029

0xa5d8,	// (0x0008f4e8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa5d8,	// (0x0008f4e8) cmail_ddmenu_btn02_pane_g1

0xa5f1,	// (0x0008f501) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa5f1,	// (0x0008f501) cmail_ddmenu_btn02_pane_t1

0xead3,	// (0x000939e3) bg_button_pane_cp031_ParamLimits

0xead3,	// (0x000939e3) bg_button_pane_cp031

0xa5d8,	// (0x0008f4e8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa5d8,	// (0x0008f4e8) cmail_ddmenu_btn03_pane_g1

0xa5f1,	// (0x0008f501) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa5f1,	// (0x0008f501) cmail_ddmenu_btn03_pane_t1

0x7d18,	// (0x0008cc28) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d32,	// (0x0008cc42) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d32,	// (0x0008cc42) cell_dialer2_keypad_pane_t1_copy1

0x994b,	// (0x0008e85b) ncimui_group_button_pane

0xead3,	// (0x000939e3) main_sp_fs_calendar_pane_ParamLimits

0xa2cf,	// (0x0008f1df) list_single_cmail_header_caption_pane_ParamLimits

0xe1f7,	// (0x00093107) aid_recal_txt_sm_pane

0xeac9,	// (0x000939d9) mian_recal_day_pane

0xe239,	// (0x00093149) popup_sp_fs_cale_preview_window_ParamLimits

0xe491,	// (0x000933a1) list_recal_day_pane

0xe4d3,	// (0x000933e3) list_single_recal_day_pane_ParamLimits

0xe4d3,	// (0x000933e3) list_single_recal_day_pane

0xe4e5,	// (0x000933f5) list_single_recal_day_pane_g1_ParamLimits

0xe4e5,	// (0x000933f5) list_single_recal_day_pane_g1

0xe4f1,	// (0x00093401) list_single_recal_day_pane_g2_ParamLimits

0xe4f1,	// (0x00093401) list_single_recal_day_pane_g2

0xe4fd,	// (0x0009340d) list_single_recal_day_pane_g3_ParamLimits

0xe4fd,	// (0x0009340d) list_single_recal_day_pane_g3

0x10a4,	// (0x00085fb4) list_single_recal_day_pane_g4_ParamLimits

0x10a4,	// (0x00085fb4) list_single_recal_day_pane_g4

0xe509,	// (0x00093419) list_single_recal_day_pane_g5_ParamLimits

0xe509,	// (0x00093419) list_single_recal_day_pane_g5

0xe515,	// (0x00093425) list_single_recal_day_pane_g6_ParamLimits

0xe515,	// (0x00093425) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x00094d5a) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x00094d5a) list_single_recal_day_pane_g

0xe529,	// (0x00093439) list_single_recal_day_pane_t1

0xe53b,	// (0x0009344b) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00094d65) list_single_recal_day_pane_t

0xa615,	// (0x0008f525) ncimui_query_button_pane_ParamLimits

0xa615,	// (0x0008f525) ncimui_query_button_pane

0xa625,	// (0x0008f535) ncimui_query_button_pane_t1_ParamLimits

0xa625,	// (0x0008f535) ncimui_query_button_pane_t1

0xe54d,	// (0x0009345d) ncimui_query_button_pane_t2_ParamLimits

0xe54d,	// (0x0009345d) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00094d6a) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00094d6a) ncimui_query_button_pane_t

0xa638,	// (0x0008f548) query_button_pane_ParamLimits

0xa638,	// (0x0008f548) query_button_pane

0xeac9,	// (0x000939d9) bg_button_pane_cp0028

0xe560,	// (0x00093470) query_button_pane_t1

0x5dd0,	// (0x0008ace0) main_tport_pane_ParamLimits

0xa17e,	// (0x0008f08e) bg_popup_window_pane_cp01_ParamLimits

0xa17e,	// (0x0008f08e) bg_popup_window_pane_cp01

0xa199,	// (0x0008f0a9) heading_pane_cp08_ParamLimits

0xa199,	// (0x0008f0a9) heading_pane_cp08

0xa1ac,	// (0x0008f0bc) heading_pane_cp07_ParamLimits

0xa1ac,	// (0x0008f0bc) heading_pane_cp07

0xa253,	// (0x0008f163) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00094cb6) cell_tport_appsw_pane_g

0xb2b0,	// (0x000901c0) input_candi_list_open_g1

0x3a1f,	// (0x0008892f) list_cale_time_pane_g6_ParamLimits

0x3a1f,	// (0x0008892f) list_cale_time_pane_g6

0x6b98,	// (0x0008baa8) aid_size_touch_calib_1_ParamLimits

0x6b98,	// (0x0008baa8) aid_size_touch_calib_1

0x6baa,	// (0x0008baba) aid_size_touch_calib_2_ParamLimits

0x6baa,	// (0x0008baba) aid_size_touch_calib_2

0x6bc2,	// (0x0008bad2) aid_size_touch_calib_3_ParamLimits

0x6bc2,	// (0x0008bad2) aid_size_touch_calib_3

0x6be0,	// (0x0008baf0) aid_size_touch_calib_4_ParamLimits

0x6be0,	// (0x0008baf0) aid_size_touch_calib_4

0x6bf8,	// (0x0008bb08) main_touch_calib_button_group_pane_ParamLimits

0x6bf8,	// (0x0008bb08) main_touch_calib_button_group_pane

0x6c10,	// (0x0008bb20) main_touch_calib_pane_g1_ParamLimits

0x6c22,	// (0x0008bb32) main_touch_calib_pane_g2_ParamLimits

0x6c34,	// (0x0008bb44) main_touch_calib_pane_g3_ParamLimits

0x6c46,	// (0x0008bb56) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00094674) main_touch_calib_pane_g_ParamLimits

0x6c58,	// (0x0008bb68) main_touch_calib_pane_t1_ParamLimits

0x6c72,	// (0x0008bb82) main_touch_calib_pane_t2_ParamLimits

0x6c8c,	// (0x0008bb9c) main_touch_calib_pane_t3_ParamLimits

0x6ca0,	// (0x0008bbb0) main_touch_calib_pane_t4_ParamLimits

0x6cb4,	// (0x0008bbc4) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0009467d) main_touch_calib_pane_t_ParamLimits

0xc41c,	// (0x0009132c) list_single_fp_cale_pane_g3_ParamLimits

0xc41c,	// (0x0009132c) list_single_fp_cale_pane_g3

0xead3,	// (0x000939e3) bg_button_pane_cp012_ParamLimits

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp03_ParamLimits

0x8c48,	// (0x0008db58) cell_vitu2_function_top_pane_g1_ParamLimits

0xead3,	// (0x000939e3) bg_vkb2_func_pane_cp04_ParamLimits

0x98d6,	// (0x0008e7e6) main_ncimui_button_group_pane_ParamLimits

0x98d6,	// (0x0008e7e6) main_ncimui_button_group_pane

0x9936,	// (0x0008e846) main_ncimui_pane_t3_ParamLimits

0x9936,	// (0x0008e846) main_ncimui_pane_t3

0xe162,	// (0x00093072) phacti_button_group_pane

0xe460,	// (0x00093370) aid_size_list_single_double_ParamLimits

0xa596,	// (0x0008f4a6) popup_ezdial_listscroll_window_ParamLimits

0xa5b2,	// (0x0008f4c2) popup_number_entry_window_cp01_ParamLimits

0xa64b,	// (0x0008f55b) phacti_button_pane_ParamLimits

0xa64b,	// (0x0008f55b) phacti_button_pane

0xeac9,	// (0x000939d9) bg_button_pane_cp14

0xe56e,	// (0x0009347e) phacti_button_pane_t1

0xa65c,	// (0x0008f56c) main_touch_calib_button_pane_ParamLimits

0xa65c,	// (0x0008f56c) main_touch_calib_button_pane

0x1b79,	// (0x00086a89) bg_button_pane_cp18_ParamLimits

0x1b79,	// (0x00086a89) bg_button_pane_cp18

0xe57c,	// (0x0009348c) main_touch_calib_button_pane_t1_ParamLimits

0xe57c,	// (0x0009348c) main_touch_calib_button_pane_t1

0xe592,	// (0x000934a2) main_touch_calib_button_pane_t2_ParamLimits

0xe592,	// (0x000934a2) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x00094d6f) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x00094d6f) main_touch_calib_button_pane_t

0xeac9,	// (0x000939d9) cell_ncimui_button_pane

0xeac9,	// (0x000939d9) bg_button_pane_cp032

0xe5b0,	// (0x000934c0) cell_ncimui_button_pane_t1

0xee75,	// (0x00093d85) image3_infobar_pane_ParamLimits

0xee75,	// (0x00093d85) image3_infobar_pane

0x9d4b,	// (0x0008ec5b) fs_bigclock_status_pane_ParamLimits

0x9d4b,	// (0x0008ec5b) fs_bigclock_status_pane

0x9d58,	// (0x0008ec68) main_fs_bigclock_clock_pane_ParamLimits

0x9d58,	// (0x0008ec68) main_fs_bigclock_clock_pane

0x9d76,	// (0x0008ec86) main_fs_bigclock_indi_pane_ParamLimits

0x9d76,	// (0x0008ec86) main_fs_bigclock_indi_pane

0x9da8,	// (0x0008ecb8) main_fs_bigclock_swipe_pane_ParamLimits

0x9da8,	// (0x0008ecb8) main_fs_bigclock_swipe_pane

0xeac9,	// (0x000939d9) main_fs_clock_dumped_data

0xdb37,	// (0x00092a47) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb37,	// (0x00092a47) list_single_fs_bigclock_indicator_pane_g1

0xdb53,	// (0x00092a63) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb53,	// (0x00092a63) list_single_fs_bigclock_indicator_pane_g2

0xdb6d,	// (0x00092a7d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb6d,	// (0x00092a7d) list_single_fs_bigclock_indicator_pane_g3

0xdb87,	// (0x00092a97) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb87,	// (0x00092a97) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00094b97) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00094b97) list_single_fs_bigclock_indicator_pane_g

0xdbb2,	// (0x00092ac2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbb2,	// (0x00092ac2) list_single_fs_bigclock_indicator_pane_t1

0xdbda,	// (0x00092aea) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbda,	// (0x00092aea) list_single_fs_bigclock_indicator_pane_t2

0xdc02,	// (0x00092b12) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc02,	// (0x00092b12) list_single_fs_bigclock_indicator_pane_t3

0xdc2a,	// (0x00092b3a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc2a,	// (0x00092b3a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00094ba2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00094ba2) list_single_fs_bigclock_indicator_pane_t

0xe5be,	// (0x000934ce) image3_infobar_fav_pane_ParamLimits

0xe5be,	// (0x000934ce) image3_infobar_fav_pane

0xe5ce,	// (0x000934de) image3_infobar_loc_pane_ParamLimits

0xe5ce,	// (0x000934de) image3_infobar_loc_pane

0xe5e2,	// (0x000934f2) image3_infobar_time_pane_ParamLimits

0xe5e2,	// (0x000934f2) image3_infobar_time_pane

0xc05a,	// (0x00090f6a) image3_infobar_time_pane_g1

0xe5f2,	// (0x00093502) image3_infobar_time_pane_t1

0xc05a,	// (0x00090f6a) image3_infobar_loc_pane_g1

0xe600,	// (0x00093510) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00094d74) image3_infobar_loc_pane_g

0xe608,	// (0x00093518) image3_infobar_loc_pane_t1

0xc05a,	// (0x00090f6a) image3_infobar_fav_pane_g1

0xe616,	// (0x00093526) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00094d79) image3_infobar_fav_pane_g

0xe61e,	// (0x0009352e) fs_bigclock_status_battery_pane

0xe627,	// (0x00093537) fs_bigclock_status_signal_pane

0xe630,	// (0x00093540) fs_bigclock_status_title_pane

0xe639,	// (0x00093549) fs_bigclock_status_signal_pane_g1

0xe642,	// (0x00093552) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x00094d7e) fs_bigclock_status_signal_pane_g

0xe64a,	// (0x0009355a) fs_bigclock_status_battery_pane_g1

0xe653,	// (0x00093563) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00094d83) fs_bigclock_status_battery_pane_g

0xe65b,	// (0x0009356b) fs_bigclock_status_title_pane_t1

0xa671,	// (0x0008f581) main_fs_bigclock_clock_pane_g1

0xa671,	// (0x0008f581) main_fs_bigclock_clock_pane_g2

0xa682,	// (0x0008f592) main_fs_bigclock_clock_pane_g3

0xa682,	// (0x0008f592) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00094d88) main_fs_bigclock_clock_pane_g

0xa695,	// (0x0008f5a5) main_fs_bigclock_clock_pane_t1

0xa6ab,	// (0x0008f5bb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00094d91) main_fs_bigclock_clock_pane_t

0xe669,	// (0x00093579) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe669,	// (0x00093579) list_single_fs_bigclock_indicator_pane

0xe67a,	// (0x0009358a) list_single_fs_bigclock_pane_ParamLimits

0xe67a,	// (0x0009358a) list_single_fs_bigclock_pane

0xe6a0,	// (0x000935b0) main_fs_bigclock_indicator_pane_t1

0xe6af,	// (0x000935bf) list_single_fs_bigclock_pane_g1

0xe6b7,	// (0x000935c7) list_single_fs_bigclock_pane_t1

0xc05a,	// (0x00090f6a) main_fs_bigclock_swipe_pane_g1

0xe6fa,	// (0x0009360a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00094da2) main_fs_bigclock_swipe_pane_g

0xe702,	// (0x00093612) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe702,	// (0x00093612) main_fs_bigclock_swipe_pane_t1

0x3cff,	// (0x00088c0f) call_type_pane_ParamLimits

0xeac9,	// (0x000939d9) main_btmg_pane

0xe336,	// (0x00093246) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe336,	// (0x00093246) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x00094d15) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00094d15) list_single_cale_mrui_row_pane_g

0xe4ba,	// (0x000933ca) list_recal_vselct_arw_lo_pane

0xe4c2,	// (0x000933d2) list_recal_vselct_arw_up_pane

0xe4ca,	// (0x000933da) list_recal_vselct_pane

0xa705,	// (0x0008f615) btmg_button_pane

0xa70f,	// (0x0008f61f) main_btmg_pane_g1

0xeac9,	// (0x000939d9) bg_button_pane_cp044

0xe71f,	// (0x0009362f) btmg_button_pane_t1

0xbb2b,	// (0x00090a3b) aid_listscroll_gen

0xead3,	// (0x000939e3) main_cntbar_detail_pane

0xe037,	// (0x00092f47) list_cmail_folder_pane

0xb223,	// (0x00090133) sp_fs_scroll_pane_cp03_ParamLimits

0x10bc,	// (0x00085fcc) list_single_fs_dyc_pane_cp01_ParamLimits

0x10bc,	// (0x00085fcc) list_single_fs_dyc_pane_cp01

0xe72d,	// (0x0009363d) aid_size_cmail_indent

0xe736,	// (0x00093646) list_single_dyc_row_pane_cp01

0xa74b,	// (0x0008f65b) cntbar_detail_list_pane_ParamLimits

0xa74b,	// (0x0008f65b) cntbar_detail_list_pane

0xa797,	// (0x0008f6a7) main_cntbar_detail_cont_pane_ParamLimits

0xa797,	// (0x0008f6a7) main_cntbar_detail_cont_pane

0xb223,	// (0x00090133) scroll_pane_cp032_ParamLimits

0xb223,	// (0x00090133) scroll_pane_cp032

0xa7ab,	// (0x0008f6bb) cntbar_detail_list_event_pane_ParamLimits

0xa7ab,	// (0x0008f6bb) cntbar_detail_list_event_pane

0xa75b,	// (0x0008f66b) cntbar_detail_list_shct_pane

0x2ecd,	// (0x00087ddd) aid_list_gen

0xe73f,	// (0x0009364f) aid_scroll

0xe748,	// (0x00093658) aid_size_touch_scroll_bar

0x9197,	// (0x0008e0a7) aid_list_double

0x9185,	// (0x0008e095) aid_list_single

0x9185,	// (0x0008e095) aid_list_single_lg

0x10d2,	// (0x00085fe2) aid_list_z_g_a_sm

0xa7bb,	// (0x0008f6cb) aid_list_z_g_d

0x10da,	// (0x00085fea) aid_txt_z_prm

0x10e8,	// (0x00085ff8) aid_txt_z_prm_cp01

0x10f6,	// (0x00086006) aid_txt_z_sec

0xa7c3,	// (0x0008f6d3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa7c3,	// (0x0008f6d3) main_cntbar_detail_cont_pane_g1

0xa7d7,	// (0x0008f6e7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7d7,	// (0x0008f6e7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00094da7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00094da7) main_cntbar_detail_cont_pane_g

0xe751,	// (0x00093661) main_cntbar_detail_cont_pane_t1

0xe75f,	// (0x0009366f) main_cntbar_detail_cont_pane_t2

0xe76d,	// (0x0009367d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00094dac) main_cntbar_detail_cont_pane_t

0xa7e7,	// (0x0008f6f7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7e7,	// (0x0008f6f7) cell_cntbar_detail_list_shct_pane

0xe77b,	// (0x0009368b) cntbar_detail_list_shct_pane_g1

0xe784,	// (0x00093694) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00094db3) cntbar_detail_list_shct_pane_g

0xa7fb,	// (0x0008f70b) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7fb,	// (0x0008f70b) cntbar_detail_list_event_pane_g1

0xa807,	// (0x0008f717) cntbar_detail_list_event_pane_g2_ParamLimits

0xa807,	// (0x0008f717) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00094db8) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00094db8) cntbar_detail_list_event_pane_g

0xa873,	// (0x0008f783) cntbar_detail_list_event_pane_t1_ParamLimits

0xa873,	// (0x0008f783) cntbar_detail_list_event_pane_t1

0xa888,	// (0x0008f798) cntbar_detail_list_event_pane_t2_ParamLimits

0xa888,	// (0x0008f798) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00094dc5) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00094dc5) cntbar_detail_list_event_pane_t

0xc05a,	// (0x00090f6a) cell_cntbar_detail_list_shct_pane_g1

0x431e,	// (0x0008922e) navi_pane_mv_g3

0xead3,	// (0x000939e3) main_cntbar_detail_pane_ParamLimits

0xeac9,	// (0x000939d9) main_notif_wgt_pane

0xc9b0,	// (0x000918c0) aid_tch_main_mp4_pane_g4

0xee6d,	// (0x00093d7d) popup_slider_window_cp02

0xe4b0,	// (0x000933c0) list_recal_day_event_pane

0xa719,	// (0x0008f629) cntbar_detail_btn_pane_ParamLimits

0xa719,	// (0x0008f629) cntbar_detail_btn_pane

0xa732,	// (0x0008f642) cntbar_detail_btn_pane_cp01_ParamLimits

0xa732,	// (0x0008f642) cntbar_detail_btn_pane_cp01

0xa75b,	// (0x0008f66b) cntbar_detail_list_shct_pane_ParamLimits

0xa76b,	// (0x0008f67b) cntbar_detail_pane_g1_ParamLimits

0xa76b,	// (0x0008f67b) cntbar_detail_pane_g1

0xa77b,	// (0x0008f68b) cntbar_detail_pane_t1_ParamLimits

0xa77b,	// (0x0008f68b) cntbar_detail_pane_t1

0xa813,	// (0x0008f723) cntbar_detail_list_event_pane_g3_ParamLimits

0xa813,	// (0x0008f723) cntbar_detail_list_event_pane_g3

0xa82b,	// (0x0008f73b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa82b,	// (0x0008f73b) cntbar_detail_list_event_pane_g4

0xa843,	// (0x0008f753) cntbar_detail_list_event_pane_g5_ParamLimits

0xa843,	// (0x0008f753) cntbar_detail_list_event_pane_g5

0xa85b,	// (0x0008f76b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa85b,	// (0x0008f76b) cntbar_detail_list_event_pane_g6

0xa89d,	// (0x0008f7ad) cntbar_detail_list_event_pane_t3_ParamLimits

0xa89d,	// (0x0008f7ad) cntbar_detail_list_event_pane_t3

0xa8af,	// (0x0008f7bf) popup_notif_wgt_window_ParamLimits

0xa8af,	// (0x0008f7bf) popup_notif_wgt_window

0xa8c8,	// (0x0008f7d8) popup_submenu_window_cp01_ParamLimits

0xa8c8,	// (0x0008f7d8) popup_submenu_window_cp01

0x245d,	// (0x0008736d) bg_popup_window_pane_cp10

0xe78d,	// (0x0009369d) listscroll_notif_wgt_pane

0xe79f,	// (0x000936af) list_notif_wgt_window

0xe7a8,	// (0x000936b8) scroll_pane_cp033

0xa8da,	// (0x0008f7ea) list_notif_wgt_row_pane_ParamLimits

0xa8da,	// (0x0008f7ea) list_notif_wgt_row_pane

0xe7b1,	// (0x000936c1) aid_size_list_notif_wgt_del

0xe7be,	// (0x000936ce) list_notif_wgt_row_pane_g1

0xe7ca,	// (0x000936da) list_notif_wgt_row_pane_g2

0xe7d9,	// (0x000936e9) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00094dcc) list_notif_wgt_row_pane_g

0xe7e6,	// (0x000936f6) list_notif_wgt_row_pane_t1

0xe7fc,	// (0x0009370c) list_notif_wgt_row_pane_t2

0xe80e,	// (0x0009371e) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00094dd3) list_notif_wgt_row_pane_t

0xcf99,	// (0x00091ea9) list_recal_day_event_pane_g1

0xe820,	// (0x00093730) list_recal_day_event_pane_t1

0xeac9,	// (0x000939d9) bg_button_pane_cp045

0xa8ea,	// (0x0008f7fa) cntbar_detail_btn_pane_t1

0xbb3f,	// (0x00090a4f) main_callh_pane_ParamLimits

0xbb3f,	// (0x00090a4f) main_callh_pane

0xeac9,	// (0x000939d9) main_coverflow0_pane

0xeac9,	// (0x000939d9) main_wgtman_pane

0x9dc0,	// (0x0008ecd0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9dc0,	// (0x0008ecd0) main_fs_bigclock_unlock_btn_pane

0xa24b,	// (0x0008f15b) bg_button_pane_cp16

0xa25b,	// (0x0008f16b) cell_tport_appsw_pane_g3

0xa8f8,	// (0x0008f808) cf0_flow_pane_ParamLimits

0xa8f8,	// (0x0008f808) cf0_flow_pane

0xe82f,	// (0x0009373f) listscroll_cf0_pane

0xe83a,	// (0x0009374a) main_cf0_pane_g1

0xa90d,	// (0x0008f81d) main_cf0_pane_t1_ParamLimits

0xa90d,	// (0x0008f81d) main_cf0_pane_t1

0xa924,	// (0x0008f834) main_cf0_pane_t2_ParamLimits

0xa924,	// (0x0008f834) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00094ddf) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00094ddf) main_cf0_pane_t

0xe84c,	// (0x0009375c) scroll_pane_cp11

0xa93b,	// (0x0008f84b) cf0_flow_pane_g1

0xa943,	// (0x0008f853) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00094de4) cf0_flow_pane_g

0xa94b,	// (0x0008f85b) cf0_flow_pane_t1

0xeac9,	// (0x000939d9) main_call6_pane

0xeac9,	// (0x000939d9) main_calllock_pane

0xa959,	// (0x0008f869) call6_btn_grp_pane_ParamLimits

0xa959,	// (0x0008f869) call6_btn_grp_pane

0xa973,	// (0x0008f883) call6_pane_g1_ParamLimits

0xa973,	// (0x0008f883) call6_pane_g1

0xa988,	// (0x0008f898) popup_call6_1st_window_ParamLimits

0xa988,	// (0x0008f898) popup_call6_1st_window

0xa999,	// (0x0008f8a9) popup_call6_2nd_window_ParamLimits

0xa999,	// (0x0008f8a9) popup_call6_2nd_window

0xa9aa,	// (0x0008f8ba) cell_call6_btn_pane_ParamLimits

0xa9aa,	// (0x0008f8ba) cell_call6_btn_pane

0x245d,	// (0x0008736d) bg_popup_call2_in_pane_cp03

0xe857,	// (0x00093767) popup_call6_1st_window_g1

0xe85f,	// (0x0009376f) popup_call6_1st_window_g2

0xe867,	// (0x00093777) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00094de9) popup_call6_1st_window_g

0xe86f,	// (0x0009377f) popup_call6_1st_window_t1

0xe87e,	// (0x0009378e) popup_call6_1st_window_t2

0xe88e,	// (0x0009379e) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00094df0) popup_call6_1st_window_t

0x245d,	// (0x0008736d) bg_popup_call2_in_pane_cp04

0xe857,	// (0x00093767) popup_call6_2nd_window_g1

0xe85f,	// (0x0009376f) popup_call6_2nd_window_g2

0xe867,	// (0x00093777) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00094de9) popup_call6_2nd_window_g

0xe86f,	// (0x0009377f) popup_call6_2nd_window_t1

0xeac9,	// (0x000939d9) bg_button_pane_cp15

0xe89e,	// (0x000937ae) cell_call6_btn_pane_g1

0xe8a7,	// (0x000937b7) cell_call6_btn_pane_t1

0xa9be,	// (0x0008f8ce) listscroll_wgtman_pane_ParamLimits

0xa9be,	// (0x0008f8ce) listscroll_wgtman_pane

0xa9df,	// (0x0008f8ef) wgtman_btn_pane_ParamLimits

0xa9df,	// (0x0008f8ef) wgtman_btn_pane

0x3f59,	// (0x00088e69) aid_scroll_copy1

0xe8b6,	// (0x000937c6) list_wgtman_pane

0xaa22,	// (0x0008f932) wgtman_btn_pane_g1_ParamLimits

0xaa22,	// (0x0008f932) wgtman_btn_pane_g1

0xaa4e,	// (0x0008f95e) wgtman_btn_pane_t1_ParamLimits

0xaa4e,	// (0x0008f95e) wgtman_btn_pane_t1

0xe8c0,	// (0x000937d0) wgtman_btn_pane_t2_ParamLimits

0xe8c0,	// (0x000937d0) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00094df7) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00094df7) wgtman_btn_pane_t

0xaa8b,	// (0x0008f99b) listrow_wgtman_pane_ParamLimits

0xaa8b,	// (0x0008f99b) listrow_wgtman_pane

0xaa9d,	// (0x0008f9ad) listrow_wgtman_pane_g1

0xaaaa,	// (0x0008f9ba) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00094dfc) listrow_wgtman_pane_g

0x1104,	// (0x00086014) listrow_wgtman_pane_t1

0x111c,	// (0x0008602c) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00094e01) listrow_wgtman_pane_t

0x1142,	// (0x00086052) wait_bar_pane_cp09

0xe8d7,	// (0x000937e7) main_calllock_btn_pane

0xe8e1,	// (0x000937f1) main_calllock_pane_g1

0xeac9,	// (0x000939d9) bg_button_pane_cp17

0xe8ec,	// (0x000937fc) main_calllock_btn_pane_g1

0xe8f5,	// (0x00093805) main_calllock_btn_pane_t1

0xeac9,	// (0x000939d9) main_dialer3_pane

0xeac9,	// (0x000939d9) main_fmrd2_pane

0xc05a,	// (0x00090f6a) main_fs_bigclock_unlock_btn_pane_g1

0xaad0,	// (0x0008f9e0) main_fs_bigclock_unlock_btn_pane_t1

0xaade,	// (0x0008f9ee) area_fmrd2_info_pane_ParamLimits

0xaade,	// (0x0008f9ee) area_fmrd2_info_pane

0xaaef,	// (0x0008f9ff) area_fmrd2_visual_pane_ParamLimits

0xaaef,	// (0x0008f9ff) area_fmrd2_visual_pane

0xaafd,	// (0x0008fa0d) fmrd2_indi_pane_ParamLimits

0xaafd,	// (0x0008fa0d) fmrd2_indi_pane

0xab0a,	// (0x0008fa1a) area_fmrd2_visual_pane_g1

0xab12,	// (0x0008fa22) area_fmrd2_visual_pane_t1

0xab22,	// (0x0008fa32) area_fmrd2_visual_pane_t2

0xab32,	// (0x0008fa42) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00094e0b) area_fmrd2_visual_pane_t

0xab42,	// (0x0008fa52) area_fmrd2_info_pane_g1

0xab4a,	// (0x0008fa5a) area_fmrd2_info_pane_t1

0xab5a,	// (0x0008fa6a) area_fmrd2_info_pane_t2

0xab6a,	// (0x0008fa7a) area_fmrd2_info_pane_t3

0xab7a,	// (0x0008fa8a) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00094e12) area_fmrd2_info_pane_t

0xab88,	// (0x0008fa98) fmrd2_indi_pane_t1

0xab98,	// (0x0008faa8) fmrd2_indi_pane_t2

0xaba8,	// (0x0008fab8) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00094e1b) fmrd2_indi_pane_t

0xdb96,	// (0x00092aa6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb96,	// (0x00092aa6) list_single_fs_bigclock_indicator_pane_g5

0xdc47,	// (0x00092b57) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc47,	// (0x00092b57) list_single_fs_bigclock_indicator_pane_t5

0xa3d0,	// (0x0008f2e0) aid_cell_bcale_month_pane_ParamLimits

0xa3d0,	// (0x0008f2e0) aid_cell_bcale_month_pane

0xa3ee,	// (0x0008f2fe) bcale_month_pane_ParamLimits

0xa3ee,	// (0x0008f2fe) bcale_month_pane

0xa412,	// (0x0008f322) bcale_preview_pane_ParamLimits

0xa412,	// (0x0008f322) bcale_preview_pane

0xe6b7,	// (0x000935c7) list_single_fs_bigclock_pane_t1_ParamLimits

0xe6d6,	// (0x000935e6) list_single_fs_bigclock_pane_t2_ParamLimits

0xe6d6,	// (0x000935e6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x00094d9d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x00094d9d) list_single_fs_bigclock_pane_t

0xaac8,	// (0x0008f9d8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00094e06) main_fs_bigclock_unlock_btn_pane_g

0xabb8,	// (0x0008fac8) aid_dia3_key_size_ParamLimits

0xabb8,	// (0x0008fac8) aid_dia3_key_size

0xabc7,	// (0x0008fad7) aid_dia3_listrow_size_ParamLimits

0xabc7,	// (0x0008fad7) aid_dia3_listrow_size

0xabdc,	// (0x0008faec) dia3_keypad_fun_pane_ParamLimits

0xabdc,	// (0x0008faec) dia3_keypad_fun_pane

0xabf8,	// (0x0008fb08) dia3_keypad_num_pane_ParamLimits

0xabf8,	// (0x0008fb08) dia3_keypad_num_pane

0xac13,	// (0x0008fb23) dia3_listscroll_pane_ParamLimits

0xac13,	// (0x0008fb23) dia3_listscroll_pane

0xac26,	// (0x0008fb36) dia3_numentry_pane_ParamLimits

0xac26,	// (0x0008fb36) dia3_numentry_pane

0xe904,	// (0x00093814) dia3_list_pane

0xe90f,	// (0x0009381f) scroll_pane_cp12

0xeac9,	// (0x000939d9) bg_dia3_numentry_pane

0xac3a,	// (0x0008fb4a) dia3_numentry_pane_t1

0xac49,	// (0x0008fb59) cell_dia3_key_num_pane

0xac51,	// (0x0008fb61) cell_dia3_key0_fun_pane_ParamLimits

0xac51,	// (0x0008fb61) cell_dia3_key0_fun_pane

0xac65,	// (0x0008fb75) cell_dia3_key1_fun_pane_ParamLimits

0xac65,	// (0x0008fb75) cell_dia3_key1_fun_pane

0xac7d,	// (0x0008fb8d) dia3_listrow_pane

0xd8e9,	// (0x000927f9) bg_dia3_numentry_pane_g1

0xeac9,	// (0x000939d9) bg_button_pane_cp21

0xe91a,	// (0x0009382a) cell_dia3_key_num_pane_t1

0xe928,	// (0x00093838) cell_dia3_key_num_pane_t2

0xe937,	// (0x00093847) cell_dia3_key_num_pane_t3

0xe946,	// (0x00093856) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00094e22) cell_dia3_key_num_pane_t

0xeac9,	// (0x000939d9) bg_button_pane_cp19

0xac8f,	// (0x0008fb9f) cell_dia3_key0_fun_pane_g1

0xeac9,	// (0x000939d9) bg_button_pane_cp20

0xac97,	// (0x0008fba7) cell_dia3_key1_fun_pane_g1

0xac9f,	// (0x0008fbaf) area_left_week_number_pane

0xacab,	// (0x0008fbbb) area_top_day_name_pane

0xacbe,	// (0x0008fbce) frame_month_view_pane

0xe955,	// (0x00093865) grid_month_view_pane

0xacd1,	// (0x0008fbe1) cell_top_day_name_pane_ParamLimits

0xacd1,	// (0x0008fbe1) cell_top_day_name_pane

0xacfe,	// (0x0008fc0e) cell_area_left_week_number_pane_ParamLimits

0xacfe,	// (0x0008fc0e) cell_area_left_week_number_pane

0xad12,	// (0x0008fc22) cell_month_view_pane_ParamLimits

0xad12,	// (0x0008fc22) cell_month_view_pane

0xe963,	// (0x00093873) frm_month_g1

0xad3f,	// (0x0008fc4f) frm_month_g2

0xad52,	// (0x0008fc62) frm_month_g3

0xad65,	// (0x0008fc75) frm_month_g4

0xad78,	// (0x0008fc88) frm_month_g5

0xad8b,	// (0x0008fc9b) frm_month_g6

0xad9e,	// (0x0008fcae) frm_month_g7

0xe970,	// (0x00093880) frm_month_g8

0xadb1,	// (0x0008fcc1) frm_month_g9

0xadc1,	// (0x0008fcd1) frm_month_g10

0xadd1,	// (0x0008fce1) frm_month_g11

0xade1,	// (0x0008fcf1) frm_month_g12

0xadf3,	// (0x0008fd03) frm_month_g13

0xae05,	// (0x0008fd15) frm_month_g14

0xae19,	// (0x0008fd29) frm_month_g15

0xae2d,	// (0x0008fd3d) frm_month_g16

0x000f,

0xff1b,	// (0x00094e2b) frm_month_g

0xe97d,	// (0x0009388d) cell_top_day_name_pane_t1

0xae41,	// (0x0008fd51) cell_area_left_week_number_pane_g1

0xae4d,	// (0x0008fd5d) cell_area_left_week_number_pane_t1

0xc2a8,	// (0x000911b8) cell_month_view_pane_g1

0xae60,	// (0x0008fd70) cell_month_view_pane_t1

0xeac9,	// (0x000939d9) main_fps_pane

0xde52,	// (0x00092d62) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde52,	// (0x00092d62) cmail_ddmenu_btn02_pane_cp1

0xde6e,	// (0x00092d7e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde6e,	// (0x00092d7e) cmail_ddmenu_btn02_pane_cp2

0xa5e4,	// (0x0008f4f4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa5e4,	// (0x0008f4f4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x00094d50) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x00094d50) cmail_ddmenu_btn02_pane_g

0xa603,	// (0x0008f513) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa603,	// (0x0008f513) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x00094d55) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x00094d55) cmail_ddmenu_btn02_pane_t

0xae73,	// (0x0008fd83) fps_text_pane_ParamLimits

0xae73,	// (0x0008fd83) fps_text_pane

0xae8a,	// (0x0008fd9a) main_fps_pane_g1_ParamLimits

0xae8a,	// (0x0008fd9a) main_fps_pane_g1

0xaea4,	// (0x0008fdb4) wait_bar_pane_cp010_ParamLimits

0xaea4,	// (0x0008fdb4) wait_bar_pane_cp010

0xaeb5,	// (0x0008fdc5) fps_text_pane_t1_ParamLimits

0xaeb5,	// (0x0008fdc5) fps_text_pane_t1

0xccc5,	// (0x00091bd5) cam4_image_uncrop_pane_g1

0xccce,	// (0x00091bde) cam4_image_uncrop_pane_g2

0x81c2,	// (0x0008d0d2) cam4_image_uncrop_pane_g3

0x81cb,	// (0x0008d0db) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00094811) cam4_image_uncrop_pane_g

0xac7d,	// (0x0008fb8d) dia3_listrow_pane_ParamLimits

0xeac9,	// (0x000939d9) main_phob2_pane

0xa21c,	// (0x0008f12c) cell_tport_appsw_pane_cp02_ParamLimits

0xa21c,	// (0x0008f12c) cell_tport_appsw_pane_cp02

0xa230,	// (0x0008f140) cell_tport_appsw_pane_cp03_ParamLimits

0xa230,	// (0x0008f140) cell_tport_appsw_pane_cp03

0xeac9,	// (0x000939d9) phob2_contact_card_pane

0xeac9,	// (0x000939d9) phob2_listscroll_pane

0xe990,	// (0x000938a0) phob2_list_pane

0xe998,	// (0x000938a8) scroll_pane_cp034

0xaecd,	// (0x0008fddd) phob2_cc_data_pane_ParamLimits

0xaecd,	// (0x0008fddd) phob2_cc_data_pane

0xaeec,	// (0x0008fdfc) phob2_cc_listscroll_pane_ParamLimits

0xaeec,	// (0x0008fdfc) phob2_cc_listscroll_pane

0xaa8b,	// (0x0008f99b) list_double_large_graphic_phob2_pane_ParamLimits

0xaa8b,	// (0x0008f99b) list_double_large_graphic_phob2_pane

0xaf0a,	// (0x0008fe1a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf0a,	// (0x0008fe1a) list_double_large_graphic_phob2_pane_g1

0x1154,	// (0x00086064) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1154,	// (0x00086064) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00094e4c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00094e4c) list_double_large_graphic_phob2_pane_g

0x1160,	// (0x00086070) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1160,	// (0x00086070) list_double_large_graphic_phob2_pane_t1

0x1176,	// (0x00086086) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1176,	// (0x00086086) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00094e51) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00094e51) list_double_large_graphic_phob2_pane_t

0xeac9,	// (0x000939d9) list_highlight_pane_cp024

0xaf20,	// (0x0008fe30) phob2_cc_button_pane

0xaf28,	// (0x0008fe38) phob2_cc_data_pane_g1_ParamLimits

0xaf28,	// (0x0008fe38) phob2_cc_data_pane_g1

0xaf3d,	// (0x0008fe4d) phob2_cc_data_pane_g2_ParamLimits

0xaf3d,	// (0x0008fe4d) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00094e56) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00094e56) phob2_cc_data_pane_g

0xaf4d,	// (0x0008fe5d) phob2_cc_data_pane_t1_ParamLimits

0xaf4d,	// (0x0008fe5d) phob2_cc_data_pane_t1

0xaf65,	// (0x0008fe75) phob2_cc_data_pane_t2_ParamLimits

0xaf65,	// (0x0008fe75) phob2_cc_data_pane_t2

0xaf7d,	// (0x0008fe8d) phob2_cc_data_pane_t3_ParamLimits

0xaf7d,	// (0x0008fe8d) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00094e5b) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00094e5b) phob2_cc_data_pane_t

0xe9a0,	// (0x000938b0) phob2_cc_list_pane_ParamLimits

0xe9a0,	// (0x000938b0) phob2_cc_list_pane

0xd042,	// (0x00091f52) scroll_pane_cp035_ParamLimits

0xd042,	// (0x00091f52) scroll_pane_cp035

0xead3,	// (0x000939e3) bg_button_pane_cp033

0xe9ac,	// (0x000938bc) phob2_cc_button_pane_g1

0xe9b8,	// (0x000938c8) phob2_cc_button_pane_t1

0xe9cd,	// (0x000938dd) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00094e62) phob2_cc_button_pane_t

0xaf95,	// (0x0008fea5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf95,	// (0x0008fea5) list_double_large_graphic_phob2_cc_pane

0xafa8,	// (0x0008feb8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xafa8,	// (0x0008feb8) list_double_large_graphic_phob2_cc_pane_g1

0x118b,	// (0x0008609b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x118b,	// (0x0008609b) list_double_large_graphic_phob2_cc_pane_g2

0xafb4,	// (0x0008fec4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xafb4,	// (0x0008fec4) list_double_large_graphic_phob2_cc_pane_g3

0x1197,	// (0x000860a7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1197,	// (0x000860a7) list_double_large_graphic_phob2_cc_pane_g4

0x11a3,	// (0x000860b3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x11a3,	// (0x000860b3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00094e67) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00094e67) list_double_large_graphic_phob2_cc_pane_g

0x11af,	// (0x000860bf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x11af,	// (0x000860bf) list_double_large_graphic_phob2_cc_pane_t1

0x11d8,	// (0x000860e8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x11d8,	// (0x000860e8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00094e72) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00094e72) list_double_large_graphic_phob2_cc_pane_t

0xe9df,	// (0x000938ef) list_highlight_pane_cp025_ParamLimits

0xe9df,	// (0x000938ef) list_highlight_pane_cp025

0xead3,	// (0x000939e3) bg_button_pane_cp033_ParamLimits

0xe9ac,	// (0x000938bc) phob2_cc_button_pane_g1_ParamLimits

0xe9b8,	// (0x000938c8) phob2_cc_button_pane_t1_ParamLimits

0xe9cd,	// (0x000938dd) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00094e62) phob2_cc_button_pane_t_ParamLimits

0x143a,	// (0x0008634a) popup_wgtman_window

0xce5d,	// (0x00091d6d) scroll_pane_cp038

0xaa04,	// (0x0008f914) wgtman_btn_pane_cp_01_ParamLimits

0xaa04,	// (0x0008f914) wgtman_btn_pane_cp_01

0xe9ed,	// (0x000938fd) wgtman_content_pane

0xe9f6,	// (0x00093906) wgtman_heading_pane

0xeac9,	// (0x000939d9) bg_heading_pane_cp02

0xe9ff,	// (0x0009390f) wgtman_heading_pane_g1

0xea07,	// (0x00093917) wgtman_heading_pane_t1

0xea15,	// (0x00093925) scroll_pane_cp036

0xea1d,	// (0x0009392d) wgtman_list_pane

0xdd32,	// (0x00092c42) wgtman_list_pane_t1_ParamLimits

0xdd32,	// (0x00092c42) wgtman_list_pane_t1

0xeec7,	// (0x00093dd7) cam4_grid_pane

0x07d3,	// (0x000856e3) bg_button_pane_cp015_ParamLimits

0x8de4,	// (0x0008dcf4) bg_button_pane_cp016_ParamLimits

0x8df7,	// (0x0008dd07) bg_button_pane_cp017_ParamLimits

0x081b,	// (0x0008572b) popup_vitu2_query_window_g3_ParamLimits

0x081b,	// (0x0008572b) popup_vitu2_query_window_g3

0x0896,	// (0x000857a6) popup_vitu2_query_window_t6_ParamLimits

0x0896,	// (0x000857a6) popup_vitu2_query_window_t6

0x08c1,	// (0x000857d1) popup_vitu2_query_window_t7_ParamLimits

0x08c1,	// (0x000857d1) popup_vitu2_query_window_t7

0xccc5,	// (0x00091bd5) cam4_grid_pane_g1

0xccce,	// (0x00091bde) cam4_grid_pane_g2

0xea25,	// (0x00093935) cam4_grid_pane_g3

0xea2e,	// (0x0009393e) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x00094e77) cam4_grid_pane_g

0x28d3,	// (0x000877e3) aid_placing_vt_slider_lsc_ParamLimits

0x2c20,	// (0x00087b30) vidtel_button_pane_ParamLimits

0x2c20,	// (0x00087b30) vidtel_button_pane

0xeac9,	// (0x000939d9) bg_button_pane_cp034

0xafc0,	// (0x0008fed0) vidtel_button_pane_g1

0xea39,	// (0x00093949) vidtel_button_pane_t1

0xcf89,	// (0x00091e99) aid_size_vtel_slider_touch

0xd042,	// (0x00091f52) scroll_pane_cp039

0x9ab4,	// (0x0008e9c4) ncim_query_button_pane_cp01_ParamLimits

0x9ad3,	// (0x0008e9e3) ncimui_query_pane_g1_ParamLimits

0xead3,	// (0x000939e3) input_focus_pane_cp012_ParamLimits

0xd92f,	// (0x0009283f) ncim_query_entry_pane_t1_ParamLimits

0xd042,	// (0x00091f52) scroll_pane_cp039_ParamLimits

0x4209,	// (0x00089119) navi_pane_bcale_mc_g1

0x4211,	// (0x00089121) navi_pane_bcale_mc_t1

0xdeb7,	// (0x00092dc7) main_sp_fs_email_pane_g1

0xdec3,	// (0x00092dd3) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x00094c08) main_sp_fs_email_pane_g

0xe342,	// (0x00093252) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe342,	// (0x00093252) list_single_cale_mrui_row_pane_g3

0x10b2,	// (0x00085fc2) list_single_recal_day_pane_g5_event_pane

0xe521,	// (0x00093431) list_single_recal_day_pane_g7

0xea4f,	// (0x0009395f) list_recal_day_event_pane_cp01

0xea58,	// (0x00093968) list_recal_vselct_arw_lo_pane_cp01

0xea60,	// (0x00093970) list_recal_vselct_arw_up_pane_cp01

0xea68,	// (0x00093978) list_recal_vselct_pane_cp01

0xcf99,	// (0x00091ea9) list_recal_day_event_pane_cp01_g1

0xea72,	// (0x00093982) list_recal_day_event_pane_cp01_t1

0xe529,	// (0x00093439) list_single_recal_day_pane_t1_ParamLimits

0xe53b,	// (0x0009344b) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x00094d65) list_single_recal_day_pane_t_ParamLimits

0x1807,	// (0x00086717) bg_notes_pane_ParamLimits

0x1b43,	// (0x00086a53) list_notes_pane_ParamLimits

0x1b51,	// (0x00086a61) scroll_pane_cp06_ParamLimits

0x1b79,	// (0x00086a89) main_notes_pane_ParamLimits

0xeac9,	// (0x000939d9) main_welc_pane

0xafc8,	// (0x0008fed8) main_welc_body_pane_ParamLimits

0xafc8,	// (0x0008fed8) main_welc_body_pane

0xafe5,	// (0x0008fef5) main_welc_opti_pane_ParamLimits

0xafe5,	// (0x0008fef5) main_welc_opti_pane

0xb02a,	// (0x0008ff3a) main_welc_pane_t1_ParamLimits

0xb02a,	// (0x0008ff3a) main_welc_pane_t1

0xb048,	// (0x0008ff58) main_welc_body_row_pane_ParamLimits

0xb048,	// (0x0008ff58) main_welc_body_row_pane

0xea80,	// (0x00093990) main_welc_opti_row_pane_ParamLimits

0xea80,	// (0x00093990) main_welc_opti_row_pane

0xea8e,	// (0x0009399e) main_welc_opti_row_pane_g1

0xb05d,	// (0x0008ff6d) main_welc_opti_row_pane_t1

0xea96,	// (0x000939a6) main_welc_body_row_pane_t1

0xe797,	// (0x000936a7) popup_notif_wgt_heading_pane

0xe7b1,	// (0x000936c1) aid_size_list_notif_wgt_del_ParamLimits

0xe7be,	// (0x000936ce) list_notif_wgt_row_pane_g1_ParamLimits

0xe7ca,	// (0x000936da) list_notif_wgt_row_pane_g2_ParamLimits

0xe7d9,	// (0x000936e9) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x00094dcc) list_notif_wgt_row_pane_g_ParamLimits

0xe7e6,	// (0x000936f6) list_notif_wgt_row_pane_t1_ParamLimits

0xe7fc,	// (0x0009370c) list_notif_wgt_row_pane_t2_ParamLimits

0xe80e,	// (0x0009371e) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x00094dd3) list_notif_wgt_row_pane_t_ParamLimits

0xaa9d,	// (0x0008f9ad) listrow_wgtman_pane_g1_ParamLimits

0xaaaa,	// (0x0008f9ba) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00094dfc) listrow_wgtman_pane_g_ParamLimits

0x1104,	// (0x00086014) listrow_wgtman_pane_t1_ParamLimits

0x111c,	// (0x0008602c) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x00094e01) listrow_wgtman_pane_t_ParamLimits

0x1142,	// (0x00086052) wait_bar_pane_cp09_ParamLimits

0xeac9,	// (0x000939d9) bg_popup_heading_pane_cp02

0xeaa5,	// (0x000939b5) popup_notif_wgt_heading_pane_g1

0xeaad,	// (0x000939bd) popup_notif_wgt_heading_pane_t1

0xeac9,	// (0x000939d9) main_vids_pane

0xeac9,	// (0x000939d9) vids_listscroll_pane

0xb06c,	// (0x0008ff7c) scroll_pane_cp040

0xeac9,	// (0x000939d9) vids_list_pane

0xb077,	// (0x0008ff87) vids_list_double_pane_ParamLimits

0xb077,	// (0x0008ff87) vids_list_double_pane

0xb088,	// (0x0008ff98) vids_list_double_pane_g1

0xb091,	// (0x0008ffa1) vids_list_double_pane_t1

0xb0a1,	// (0x0008ffb1) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x00094e85) vids_list_double_pane_t

0xead3,	// (0x000939e3) main_ncimui_pane_ParamLimits

0x98ea,	// (0x0008e7fa) main_ncimui_pane_g1_ParamLimits

0x98f6,	// (0x0008e806) main_ncimui_pane_g2_ParamLimits

0x98f6,	// (0x0008e806) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00094b0d) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00094b0d) main_ncimui_pane_g

0xb000,	// (0x0008ff10) main_welc_pane_g1_ParamLimits

0xb000,	// (0x0008ff10) main_welc_pane_g1

0xb015,	// (0x0008ff25) main_welc_pane_g2_ParamLimits

0xb015,	// (0x0008ff25) main_welc_pane_g2

0x0001,

0xff70,	// (0x00094e80) main_welc_pane_g_ParamLimits

0xff70,	// (0x00094e80) main_welc_pane_g

0x1807,	// (0x00086717) listscroll_mce_pane_ParamLimits

0x43a0,	// (0x000892b0) wait_bar_pane_cp10

0xbb33,	// (0x00090a43) main_cale_day_pane_ParamLimits

0xbb33,	// (0x00090a43) main_cale_week_pane_ParamLimits

0x1807,	// (0x00086717) main_messa_pane_ParamLimits

0x74ea,	// (0x0008c3fa) main_clock2_btn_pane_ParamLimits

0x74ea,	// (0x0008c3fa) main_clock2_btn_pane

0xc4a4,	// (0x000913b4) main_clock2_btn_pane_cp01_ParamLimits

0xc4a4,	// (0x000913b4) main_clock2_btn_pane_cp01

0xe2ce,	// (0x000931de) list_cale_mrui_pane_ParamLimits

0xe844,	// (0x00093754) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00094dda) main_cf0_pane_g

0xac9f,	// (0x0008fbaf) area_left_week_number_pane_ParamLimits

0xacab,	// (0x0008fbbb) area_top_day_name_pane_ParamLimits

0xacbe,	// (0x0008fbce) frame_month_view_pane_ParamLimits

0xe955,	// (0x00093865) grid_month_view_pane_ParamLimits

0xe963,	// (0x00093873) frm_month_g1_ParamLimits

0xad3f,	// (0x0008fc4f) frm_month_g2_ParamLimits

0xad52,	// (0x0008fc62) frm_month_g3_ParamLimits

0xad65,	// (0x0008fc75) frm_month_g4_ParamLimits

0xad78,	// (0x0008fc88) frm_month_g5_ParamLimits

0xad8b,	// (0x0008fc9b) frm_month_g6_ParamLimits

0xad9e,	// (0x0008fcae) frm_month_g7_ParamLimits

0xe970,	// (0x00093880) frm_month_g8_ParamLimits

0xadb1,	// (0x0008fcc1) frm_month_g9_ParamLimits

0xadc1,	// (0x0008fcd1) frm_month_g10_ParamLimits

0xadd1,	// (0x0008fce1) frm_month_g11_ParamLimits

0xade1,	// (0x0008fcf1) frm_month_g12_ParamLimits

0xadf3,	// (0x0008fd03) frm_month_g13_ParamLimits

0xae05,	// (0x0008fd15) frm_month_g14_ParamLimits

0xae19,	// (0x0008fd29) frm_month_g15_ParamLimits

0xae2d,	// (0x0008fd3d) frm_month_g16_ParamLimits

0xff1b,	// (0x00094e2b) frm_month_g_ParamLimits

0xe97d,	// (0x0009388d) cell_top_day_name_pane_t1_ParamLimits

0xae41,	// (0x0008fd51) cell_area_left_week_number_pane_g1_ParamLimits

0xae4d,	// (0x0008fd5d) cell_area_left_week_number_pane_t1_ParamLimits

0xc2a8,	// (0x000911b8) cell_month_view_pane_g1_ParamLimits

0xae60,	// (0x0008fd70) cell_month_view_pane_t1_ParamLimits

0x17ff,	// (0x0008670f) main_clock2_btn_pane_g1

0xeabb,	// (0x000939cb) main_clock2_btn_pane_t1

0xead3,	// (0x000939e3) listscroll_cmail_pane_ParamLimits

0xdeb7,	// (0x00092dc7) main_sp_fs_email_pane_g1_ParamLimits

0xdec3,	// (0x00092dd3) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x00094c08) main_sp_fs_email_pane_g_ParamLimits

0xe491,	// (0x000933a1) list_recal_day_pane_ParamLimits

0xe4a2,	// (0x000933b2) mian_recal_day_pane_t1

0x0cda,	// (0x00085bea) list_single_dyc_row_text_pane_t4_ParamLimits

0x0cda,	// (0x00085bea) list_single_dyc_row_text_pane_t4

0x0d23,	// (0x00085c33) list_single_dyc_row_text_pane_t5_ParamLimits

0x0d23,	// (0x00085c33) list_single_dyc_row_text_pane_t5

0xdf65,	// (0x00092e75) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf65,	// (0x00092e75) list_single_dyc_row_text_pane_t6

0x39be,	// (0x000888ce) aid_mgn_list_cale_time_pane

0xead3,	// (0x000939e3) main_gallery2_pane_ParamLimits

0xc4ba,	// (0x000913ca) main_clock2_pane_cp01_t1

0xc4c8,	// (0x000913d8) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000946e7) main_clock2_pane_cp01_t

0x2049,	// (0x00086f59) cale_week_scroll_pane_g16_ParamLimits

0x2049,	// (0x00086f59) cale_week_scroll_pane_g16

0x245d,	// (0x0008736d) vorec_slider_pane

0xea39,	// (0x00093949) vidtel_button_pane_t1_ParamLimits

0xa671,	// (0x0008f581) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa671,	// (0x0008f581) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa682,	// (0x0008f592) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa682,	// (0x0008f592) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x00094d88) main_fs_bigclock_clock_pane_g_ParamLimits

0xa695,	// (0x0008f5a5) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa6ab,	// (0x0008f5bb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x00094d91) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large

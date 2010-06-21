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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00059ed3 };

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
0x0d08,	// (0x0005abdb) Screen

0x0d12,	// (0x0005abe5) application_window

0x0d48,	// (0x0005ac1b) area_bottom_pane_ParamLimits

0x0d48,	// (0x0005ac1b) area_bottom_pane

0x0d7b,	// (0x0005ac4e) area_top_pane_ParamLimits

0x0d7b,	// (0x0005ac4e) area_top_pane

0x9866,	// (0x00063739) call_video_uplink_pane_ParamLimits

0x9866,	// (0x00063739) call_video_uplink_pane

0x0dfb,	// (0x0005acce) main_pane_ParamLimits

0x0dfb,	// (0x0005acce) main_pane

0xe39e,	// (0x00068271) context_pane

0x3ff0,	// (0x0005dec3) navi_pane

0x4019,	// (0x0005deec) popup_cale_events_window_ParamLimits

0x4019,	// (0x0005deec) popup_cale_events_window

0xe3b1,	// (0x00068284) popup_mup_playback_window

0x4031,	// (0x0005df04) signal_pane

0x9ff1,	// (0x00063ec4) main_browser_pane

0xa260,	// (0x00064133) main_burst_pane

0x9882,	// (0x00063755) main_calc_pane

0xe37a,	// (0x0006824d) main_cale_day_pane

0x3d96,	// (0x0005dc69) main_cale_month_pane

0xe37a,	// (0x0006824d) main_cale_week_pane

0xa260,	// (0x00064133) main_call_pane

0x9cab,	// (0x00063b7e) main_call_poc_pane

0xa260,	// (0x00064133) main_camera_pane

0xa260,	// (0x00064133) main_chi_dic_pane

0xaaf5,	// (0x000649c8) main_clock_pane

0x9cab,	// (0x00063b7e) main_fmradio_pane

0xa260,	// (0x00064133) main_graph_messa_pane

0x9cab,	// (0x00063b7e) main_help_pane

0x9ff1,	// (0x00063ec4) main_im_pane

0x9f06,	// (0x00063dd9) main_image_pane_ParamLimits

0x9f06,	// (0x00063dd9) main_image_pane

0x9cab,	// (0x00063b7e) main_location2_pane

0xa260,	// (0x00064133) main_location_pane

0x9f06,	// (0x00063dd9) main_messa_pane

0x9cab,	// (0x00063b7e) main_mp2_pane

0xa260,	// (0x00064133) main_mp_pane

0x9cab,	// (0x00063b7e) main_msg_pane

0x9cab,	// (0x00063b7e) main_mup_eq_pane

0x9cab,	// (0x00063b7e) main_mup_pane

0x9ff1,	// (0x00063ec4) main_notes_pane

0x9cab,	// (0x00063b7e) main_pec_pane

0x9cab,	// (0x00063b7e) main_phob_pane

0x9cab,	// (0x00063b7e) main_pinb_pane

0x9cab,	// (0x00063b7e) main_postcard_pane

0x9cab,	// (0x00063b7e) main_qdial_pane

0xa260,	// (0x00064133) main_skin_pane

0x9cab,	// (0x00063b7e) main_smil2_pane

0xa260,	// (0x00064133) main_smil_pane

0xa260,	// (0x00064133) main_video_pane

0xa260,	// (0x00064133) main_video_tele_pane

0x9f06,	// (0x00063dd9) main_viewer_pane_ParamLimits

0x9f06,	// (0x00063dd9) main_viewer_pane

0xa260,	// (0x00064133) main_vorec_pane

0x3de4,	// (0x0005dcb7) popup_blid_sat_info_window_ParamLimits

0x3de4,	// (0x0005dcb7) popup_blid_sat_info_window

0x3e3a,	// (0x0005dd0d) popup_dyc_status_message_window_ParamLimits

0x3e3a,	// (0x0005dd0d) popup_dyc_status_message_window

0x3e50,	// (0x0005dd23) popup_grid_large_graphic_window_ParamLimits

0x3e50,	// (0x0005dd23) popup_grid_large_graphic_window

0x3ee6,	// (0x0005ddb9) popup_loc_request_window_ParamLimits

0x3ee6,	// (0x0005ddb9) popup_loc_request_window

0x3fca,	// (0x0005de9d) popup_wml_address_window_ParamLimits

0x3fca,	// (0x0005de9d) popup_wml_address_window

0x3c2a,	// (0x0005dafd) call_muted_g1

0x394f,	// (0x0005d822) popup_call_audio_conf_window_ParamLimits

0x394f,	// (0x0005d822) popup_call_audio_conf_window

0x3c3a,	// (0x0005db0d) popup_call_audio_first_window_ParamLimits

0x3c3a,	// (0x0005db0d) popup_call_audio_first_window

0x3c98,	// (0x0005db6b) popup_call_audio_in_window_ParamLimits

0x3c98,	// (0x0005db6b) popup_call_audio_in_window

0x3cc4,	// (0x0005db97) popup_call_audio_out_window_ParamLimits

0x3cc4,	// (0x0005db97) popup_call_audio_out_window

0x3cf2,	// (0x0005dbc5) popup_call_audio_second_window_ParamLimits

0x3cf2,	// (0x0005dbc5) popup_call_audio_second_window

0x3d38,	// (0x0005dc0b) popup_call_audio_wait_window_ParamLimits

0x3d38,	// (0x0005dc0b) popup_call_audio_wait_window

0x3d6b,	// (0x0005dc3e) popup_number_entry_window_ParamLimits

0x3d6b,	// (0x0005dc3e) popup_number_entry_window

0x989a,	// (0x0006376d) bg_popup_call_pane_cp05_ParamLimits

0x989a,	// (0x0006376d) bg_popup_call_pane_cp05

0x98ba,	// (0x0006378d) popup_number_entry_window_t1

0x98cd,	// (0x000637a0) popup_number_entry_window_t2

0x98df,	// (0x000637b2) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00068f99) popup_number_entry_window_t

0x98f1,	// (0x000637c4) text_title_cp2

0x9904,	// (0x000637d7) bg_popup_call_pane_cp_ParamLimits

0x9904,	// (0x000637d7) bg_popup_call_pane_cp

0x9912,	// (0x000637e5) call_thumbnail_pane

0x991a,	// (0x000637ed) popup_call_audio_in_window_g1_ParamLimits

0x991a,	// (0x000637ed) popup_call_audio_in_window_g1

0x9926,	// (0x000637f9) popup_call_audio_in_window_g2_ParamLimits

0x9926,	// (0x000637f9) popup_call_audio_in_window_g2

0x9932,	// (0x00063805) popup_call_audio_in_window_g3_ParamLimits

0x9932,	// (0x00063805) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00068fa2) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00068fa2) popup_call_audio_in_window_g

0x993e,	// (0x00063811) popup_call_audio_in_window_t1_ParamLimits

0x993e,	// (0x00063811) popup_call_audio_in_window_t1

0x9959,	// (0x0006382c) popup_call_audio_in_window_t2_ParamLimits

0x9959,	// (0x0006382c) popup_call_audio_in_window_t2

0x9974,	// (0x00063847) popup_call_audio_in_window_t3_ParamLimits

0x9974,	// (0x00063847) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00068fa9) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00068fa9) popup_call_audio_in_window_t

0x9904,	// (0x000637d7) bg_popup_call_pane_cp01_ParamLimits

0x9904,	// (0x000637d7) bg_popup_call_pane_cp01

0x9912,	// (0x000637e5) call_thumbnail_pane_cp02

0x9987,	// (0x0006385a) call_type_pane_cp022

0x998f,	// (0x00063862) popup_call_audio_out_window_g1_ParamLimits

0x998f,	// (0x00063862) popup_call_audio_out_window_g1

0x99a1,	// (0x00063874) popup_call_audio_out_window_g2_ParamLimits

0x99a1,	// (0x00063874) popup_call_audio_out_window_g2

0x99ad,	// (0x00063880) popup_call_audio_out_window_g3_ParamLimits

0x99ad,	// (0x00063880) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00068fb0) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00068fb0) popup_call_audio_out_window_g

0x99bf,	// (0x00063892) popup_call_audio_out_window_t1_ParamLimits

0x99bf,	// (0x00063892) popup_call_audio_out_window_t1

0x99d7,	// (0x000638aa) popup_call_audio_out_window_t2_ParamLimits

0x99d7,	// (0x000638aa) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00068fb7) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00068fb7) popup_call_audio_out_window_t

0x99ec,	// (0x000638bf) bg_popup_call_pane_ParamLimits

0x99ec,	// (0x000638bf) bg_popup_call_pane

0x0f84,	// (0x0005ae57) call_thumbnail_pane_cp_ParamLimits

0x0f84,	// (0x0005ae57) call_thumbnail_pane_cp

0x9a70,	// (0x00063943) call_type_pane_cp01_ParamLimits

0x9a70,	// (0x00063943) call_type_pane_cp01

0x9ab4,	// (0x00063987) popup_call_audio_first_window_g1_ParamLimits

0x9ab4,	// (0x00063987) popup_call_audio_first_window_g1

0x9b00,	// (0x000639d3) popup_call_audio_first_window_g2_ParamLimits

0x9b00,	// (0x000639d3) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00068fbc) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00068fbc) popup_call_audio_first_window_g

0x9b44,	// (0x00063a17) popup_call_audio_first_window_t1_ParamLimits

0x9b44,	// (0x00063a17) popup_call_audio_first_window_t1

0x9bf0,	// (0x00063ac3) popup_call_audio_first_window_t4_ParamLimits

0x9bf0,	// (0x00063ac3) popup_call_audio_first_window_t4

0x9c7c,	// (0x00063b4f) popup_call_audio_first_window_t5_ParamLimits

0x9c7c,	// (0x00063b4f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00068fc1) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00068fc1) popup_call_audio_first_window_t

0x9cab,	// (0x00063b7e) bg_popup_call_pane_cp02

0x9cb5,	// (0x00063b88) call_type_pane_cp023

0x9cbd,	// (0x00063b90) popup_call_audio_wait_window_g1

0x9cc5,	// (0x00063b98) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00068fc8) popup_call_audio_wait_window_g

0x9ccd,	// (0x00063ba0) popup_call_audio_wait_window_t3

0x9cdb,	// (0x00063bae) bg_popup_call_pane_cp03_ParamLimits

0x9cdb,	// (0x00063bae) bg_popup_call_pane_cp03

0x9d3b,	// (0x00063c0e) call_thumbnail_pane_cp011_ParamLimits

0x9d3b,	// (0x00063c0e) call_thumbnail_pane_cp011

0x9d47,	// (0x00063c1a) call_type_pane_cp034_ParamLimits

0x9d47,	// (0x00063c1a) call_type_pane_cp034

0x9d83,	// (0x00063c56) popup_call_audio_second_window_g1_ParamLimits

0x9d83,	// (0x00063c56) popup_call_audio_second_window_g1

0x9dbf,	// (0x00063c92) popup_call_audio_second_window_g2_ParamLimits

0x9dbf,	// (0x00063c92) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00068fcd) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00068fcd) popup_call_audio_second_window_g

0x9dfb,	// (0x00063cce) popup_call_audio_second_window_t1_ParamLimits

0x9dfb,	// (0x00063cce) popup_call_audio_second_window_t1

0x9e7c,	// (0x00063d4f) popup_call_audio_second_window_t2_ParamLimits

0x9e7c,	// (0x00063d4f) popup_call_audio_second_window_t2

0x9eb2,	// (0x00063d85) popup_call_audio_second_window_t3_ParamLimits

0x9eb2,	// (0x00063d85) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00068fd2) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00068fd2) popup_call_audio_second_window_t

0x9cab,	// (0x00063b7e) bg_popup_call_pane_cp04

0x9ee8,	// (0x00063dbb) list_conf_pane

0x9ef0,	// (0x00063dc3) popup_call_audio_conf_window_t1

0x9efe,	// (0x00063dd1) call_thumbnail_pane_g1

0x9f06,	// (0x00063dd9) bg_pinb_pane_ParamLimits

0x9f06,	// (0x00063dd9) bg_pinb_pane

0x9f14,	// (0x00063de7) find_pinb_pane

0x9f1d,	// (0x00063df0) listscroll_pinb_pane_ParamLimits

0x9f1d,	// (0x00063df0) listscroll_pinb_pane

0x9f2c,	// (0x00063dff) pinb_bg_pane_g1

0x0fa8,	// (0x0005ae7b) pinb_bg_pane_g2

0x0fb2,	// (0x0005ae85) pinb_bg_pane_g3

0x0fbc,	// (0x0005ae8f) pinb_bg_pane_g4

0x0fc6,	// (0x0005ae99) pinb_bg_pane_g5

0x0fd0,	// (0x0005aea3) pinb_bg_pane_g6

0x0fd9,	// (0x0005aeac) pinb_bg_pane_g7

0x0fe2,	// (0x0005aeb5) pinb_bg_pane_g8

0x0fed,	// (0x0005aec0) pinb_bg_pane_g9

0x0ff7,	// (0x0005aeca) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00068fd9) pinb_bg_pane_g

0x1012,	// (0x0005aee5) grid_pinb_pane

0x101b,	// (0x0005aeee) list_pinb_pane

0x1024,	// (0x0005aef7) scroll_pane_cp01_ParamLimits

0x1024,	// (0x0005aef7) scroll_pane_cp01

0x9f36,	// (0x00063e09) find_pinb_pane_g1_ParamLimits

0x9f36,	// (0x00063e09) find_pinb_pane_g1

0x9f4e,	// (0x00063e21) find_pinb_pane_t1

0x9f60,	// (0x00063e33) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00068ff3) find_pinb_pane_t

0x9f75,	// (0x00063e48) input_focus_pane_cp01_ParamLimits

0x9f75,	// (0x00063e48) input_focus_pane_cp01

0x1036,	// (0x0005af09) cell_pinb_pane_ParamLimits

0x1036,	// (0x0005af09) cell_pinb_pane

0x1051,	// (0x0005af24) cell_pinb_pane_g1_ParamLimits

0x1051,	// (0x0005af24) cell_pinb_pane_g1

0x1061,	// (0x0005af34) cell_pinb_pane_g2_ParamLimits

0x1061,	// (0x0005af34) cell_pinb_pane_g2

0x9f81,	// (0x00063e54) cell_pinb_pane_g3_ParamLimits

0x9f81,	// (0x00063e54) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00068ff8) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00068ff8) cell_pinb_pane_g

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp01

0x106d,	// (0x0005af40) list_pinb_item_pane_ParamLimits

0x106d,	// (0x0005af40) list_pinb_item_pane

0x9cab,	// (0x00063b7e) list_highlight_pane_cp02

0x107f,	// (0x0005af52) list_pinb_item_pane_g1_ParamLimits

0x107f,	// (0x0005af52) list_pinb_item_pane_g1

0x108c,	// (0x0005af5f) list_pinb_item_pane_g2_ParamLimits

0x108c,	// (0x0005af5f) list_pinb_item_pane_g2

0x1098,	// (0x0005af6b) list_pinb_item_pane_g3_ParamLimits

0x1098,	// (0x0005af6b) list_pinb_item_pane_g3

0x10a9,	// (0x0005af7c) list_pinb_item_pane_g4_ParamLimits

0x10a9,	// (0x0005af7c) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00068fff) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00068fff) list_pinb_item_pane_g

0x10b5,	// (0x0005af88) list_pinb_item_pane_t1_ParamLimits

0x10b5,	// (0x0005af88) list_pinb_item_pane_t1

0x10ea,	// (0x0005afbd) calc_display_pane

0x1106,	// (0x0005afd9) calc_paper_pane

0x1127,	// (0x0005affa) grid_calc_pane

0x9cab,	// (0x00063b7e) bg_list_pane_cp01

0x1143,	// (0x0005b016) clock_g1

0x114b,	// (0x0005b01e) clock_g2

0x0001,

0xf135,	// (0x00069008) clock_g

0x1153,	// (0x0005b026) clock_t1_ParamLimits

0x1153,	// (0x0005b026) clock_t1

0x1168,	// (0x0005b03b) clock_t2_ParamLimits

0x1168,	// (0x0005b03b) clock_t2

0x117a,	// (0x0005b04d) clock_t3_ParamLimits

0x117a,	// (0x0005b04d) clock_t3

0x118c,	// (0x0005b05f) clock_t4_ParamLimits

0x118c,	// (0x0005b05f) clock_t4

0x119e,	// (0x0005b071) clock_t5_ParamLimits

0x119e,	// (0x0005b071) clock_t5

0x11b3,	// (0x0005b086) clock_t6_ParamLimits

0x11b3,	// (0x0005b086) clock_t6

0x11c5,	// (0x0005b098) clock_t7_ParamLimits

0x11c5,	// (0x0005b098) clock_t7

0x11d7,	// (0x0005b0aa) clock_t8_ParamLimits

0x11d7,	// (0x0005b0aa) clock_t8

0x11e9,	// (0x0005b0bc) clock_t9_ParamLimits

0x11e9,	// (0x0005b0bc) clock_t9

0x0008,

0xf13a,	// (0x0006900d) clock_t_ParamLimits

0xf13a,	// (0x0006900d) clock_t

0x9f95,	// (0x00063e68) popup_clock_analogue_window_cp02

0x9f95,	// (0x00063e68) popup_clock_digital_window_cp01

0x9f9d,	// (0x00063e70) listscroll_help_pane

0x9cab,	// (0x00063b7e) phob_pre_status_pane

0x9fa7,	// (0x00063e7a) grid_qdial_pane

0x9f06,	// (0x00063dd9) listscroll_mce_pane

0x9f06,	// (0x00063dd9) bg_notes_pane

0x9fb1,	// (0x00063e84) list_notes_pane

0x11fb,	// (0x0005b0ce) scroll_pane_cp06

0x9fbf,	// (0x00063e92) bg_calc_paper_pane

0x9fd7,	// (0x00063eaa) list_calc_pane

0x9ff1,	// (0x00063ec4) bg_calc_display_pane

0x9ffd,	// (0x00063ed0) calc_display_pane_t1

0xa012,	// (0x00063ee5) calc_display_pane_t2

0xa027,	// (0x00063efa) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00069020) calc_display_pane_t

0x120d,	// (0x0005b0e0) cell_calc_pane_ParamLimits

0x120d,	// (0x0005b0e0) cell_calc_pane

0xa039,	// (0x00063f0c) bg_calc_paper_pane_g1

0xa045,	// (0x00063f18) bg_calc_paper_pane_g2

0xa051,	// (0x00063f24) bg_calc_paper_pane_g3

0xa05d,	// (0x00063f30) bg_calc_paper_pane_g4

0xa069,	// (0x00063f3c) bg_calc_paper_pane_g5

0x1240,	// (0x0005b113) bg_calc_paper_pane_g6

0x124f,	// (0x0005b122) bg_calc_paper_pane_g7

0x125e,	// (0x0005b131) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00069027) bg_calc_paper_pane_g

0x126d,	// (0x0005b140) calc_bg_paper_pane_g9

0x127c,	// (0x0005b14f) list_calc_item_pane_ParamLimits

0x127c,	// (0x0005b14f) list_calc_item_pane

0xa075,	// (0x00063f48) list_calc_item_pane_g1

0xa082,	// (0x00063f55) list_calc_item_pane_t1_ParamLimits

0xa082,	// (0x00063f55) list_calc_item_pane_t1

0x1290,	// (0x0005b163) list_calc_item_pane_t2_ParamLimits

0x1290,	// (0x0005b163) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00069038) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00069038) list_calc_item_pane_t

0xa094,	// (0x00063f67) cell_calc_pane_g1

0xa09e,	// (0x00063f71) grid_highlight_pane_cp02

0xa0c0,	// (0x00063f93) bg_calc_display_pane_g1

0xa0c9,	// (0x00063f9c) bg_calc_display_pane_g2

0xa0d3,	// (0x00063fa6) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00069042) bg_calc_display_pane_g

0x12be,	// (0x0005b191) cell_qdial_pane_ParamLimits

0x12be,	// (0x0005b191) cell_qdial_pane

0x12d0,	// (0x0005b1a3) cell_qdial_pane_g1_ParamLimits

0x12d0,	// (0x0005b1a3) cell_qdial_pane_g1

0x12e6,	// (0x0005b1b9) cell_qdial_pane_g2_ParamLimits

0x12e6,	// (0x0005b1b9) cell_qdial_pane_g2

0xa0dc,	// (0x00063faf) cell_qdial_pane_g3_ParamLimits

0xa0dc,	// (0x00063faf) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00069049) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00069049) cell_qdial_pane_g

0x130d,	// (0x0005b1e0) cell_qdial_pane_t1_ParamLimits

0x130d,	// (0x0005b1e0) cell_qdial_pane_t1

0x1325,	// (0x0005b1f8) cell_qdial_pane_t2_ParamLimits

0x1325,	// (0x0005b1f8) cell_qdial_pane_t2

0x1338,	// (0x0005b20b) cell_qdial_pane_t3_ParamLimits

0x1338,	// (0x0005b20b) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00069052) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00069052) cell_qdial_pane_t

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp04

0xa0e8,	// (0x00063fbb) thumbnail_qdial_pane_ParamLimits

0xa0e8,	// (0x00063fbb) thumbnail_qdial_pane

0xa144,	// (0x00064017) list_help_pane

0xa14e,	// (0x00064021) scroll_pane_cp02

0x134b,	// (0x0005b21e) help_list_pane_t1_ParamLimits

0x134b,	// (0x0005b21e) help_list_pane_t1

0xa157,	// (0x0006402a) bg_notes_pane_g2

0xa15f,	// (0x00064032) bg_notes_pane_g3

0xa167,	// (0x0006403a) notes_bg_pane_g1

0xa16f,	// (0x00064042) notes_bg_pane_g4

0xa177,	// (0x0006404a) notes_bg_pane_g5

0xa17f,	// (0x00064052) notes_bg_pane_g6

0xa187,	// (0x0006405a) notes_bg_pane_g7

0xa18f,	// (0x00064062) notes_bg_pane_g8

0xa197,	// (0x0006406a) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00069070) notes_bg_pane_g

0x1367,	// (0x0005b23a) list_notes_text_pane_ParamLimits

0x1367,	// (0x0005b23a) list_notes_text_pane

0xa19f,	// (0x00064072) list_notes_text_pane_g1

0x138a,	// (0x0005b25d) list_notes_text_pane_t1

0x1398,	// (0x0005b26b) listscroll_cale_week_pane

0x13c2,	// (0x0005b295) bg_cale_heading_pane

0xa1c2,	// (0x00064095) bg_cale_pane_cp01

0x13da,	// (0x0005b2ad) cale_week_corner_pane

0x13f9,	// (0x0005b2cc) cale_week_day_heading_pane

0x1416,	// (0x0005b2e9) cale_week_scroll_pane_g1

0x1429,	// (0x0005b2fc) cale_week_scroll_pane_g2

0x1441,	// (0x0005b314) cale_week_scroll_pane_g3

0x1459,	// (0x0005b32c) cale_week_scroll_pane_g4

0x1471,	// (0x0005b344) cale_week_scroll_pane_g5

0x1489,	// (0x0005b35c) cale_week_scroll_pane_g6

0x14a1,	// (0x0005b374) cale_week_scroll_pane_g7

0x14b9,	// (0x0005b38c) cale_week_scroll_pane_g8

0x14d5,	// (0x0005b3a8) cale_week_scroll_pane_g9

0x14ed,	// (0x0005b3c0) cale_week_scroll_pane_g10

0x1505,	// (0x0005b3d8) cale_week_scroll_pane_g11

0x151d,	// (0x0005b3f0) cale_week_scroll_pane_g12

0x1535,	// (0x0005b408) cale_week_scroll_pane_g13

0x154d,	// (0x0005b420) cale_week_scroll_pane_g14

0x1565,	// (0x0005b438) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006907f) cale_week_scroll_pane_g

0x1599,	// (0x0005b46c) cale_week_time_pane

0x15b5,	// (0x0005b488) grid_cale_week_pane

0xa1f1,	// (0x000640c4) scroll_pane_cp08

0x15d3,	// (0x0005b4a6) cell_cale_week_pane_ParamLimits

0x15d3,	// (0x0005b4a6) cell_cale_week_pane

0x1649,	// (0x0005b51c) cale_week_day_heading_pane_t1

0x1673,	// (0x0005b546) cale_week_day_heading_pane_t2

0x16a2,	// (0x0005b575) cale_week_day_heading_pane_t3

0x16d1,	// (0x0005b5a4) cale_week_day_heading_pane_t4

0x1700,	// (0x0005b5d3) cale_week_day_heading_pane_t5

0x172f,	// (0x0005b602) cale_week_day_heading_pane_t6

0x175e,	// (0x0005b631) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000690a0) cale_week_day_heading_pane_t

0xa20e,	// (0x000640e1) bg_cale_side_pane

0x1788,	// (0x0005b65b) cale_week_time_pane_t1

0x17c2,	// (0x0005b695) cale_week_time_pane_t2

0x17fc,	// (0x0005b6cf) cale_week_time_pane_t3

0x1836,	// (0x0005b709) cale_week_time_pane_t4

0x1870,	// (0x0005b743) cale_week_time_pane_t5

0x18aa,	// (0x0005b77d) cale_week_time_pane_t6

0x18e4,	// (0x0005b7b7) cale_week_time_pane_t7

0x191e,	// (0x0005b7f1) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000690af) cale_week_time_pane_t

0x1958,	// (0x0005b82b) cell_cale_week_pane_g2

0x1977,	// (0x0005b84a) cell_cale_week_pane_g3_ParamLimits

0x1977,	// (0x0005b84a) cell_cale_week_pane_g3

0xa21c,	// (0x000640ef) grid_highlight_pane_cp07

0xa224,	// (0x000640f7) listscroll_gms_pane

0xa22e,	// (0x00064101) grid_gms_pane

0xa237,	// (0x0006410a) listscroll_gms_pane_g1

0xa23f,	// (0x00064112) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000690c0) listscroll_gms_pane_g

0x198f,	// (0x0005b862) scroll_pane_cp010

0x199a,	// (0x0005b86d) cell_gms_pane_ParamLimits

0x199a,	// (0x0005b86d) cell_gms_pane

0x19aa,	// (0x0005b87d) cell_gms_pane_g1

0xa247,	// (0x0006411a) cell_gms_pane_g2

0xa19f,	// (0x00064072) cell_gms_pane_g3

0xa24f,	// (0x00064122) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000690c5) cell_gms_pane_g

0xa258,	// (0x0006412b) grid_highlight_pane_cp09

0x3bd8,	// (0x0005daab) phob_pre_status_pane_g1

0x3be0,	// (0x0005dab3) phob_pre_status_pane_g2

0x3be8,	// (0x0005dabb) phob_pre_status_pane_g3

0x3bf0,	// (0x0005dac3) phob_pre_status_pane_g4

0x0004,

0xf56a,	// (0x0006943d) phob_pre_status_pane_g

0x3c00,	// (0x0005dad3) phob_pre_status_pane_t1

0x3c0e,	// (0x0005dae1) phob_pre_status_pane_t2

0x3c1c,	// (0x0005daef) phob_pre_status_pane_t3

0x0002,

0xf575,	// (0x00069448) phob_pre_status_pane_t

0xa260,	// (0x00064133) bg_list_pane_cp05

0x19ba,	// (0x0005b88d) grid_vorec_pane

0xa268,	// (0x0006413b) vorec_t1

0xa276,	// (0x00064149) vorec_t2

0xa284,	// (0x00064157) vorec_t3

0x19c2,	// (0x0005b895) vorec_t4

0x97e4,	// (0x000636b7) vorec_t5

0x97f2,	// (0x000636c5) vorec_t6

0x0004,

0xf1fb,	// (0x000690ce) vorec_t

0x9800,	// (0x000636d3) wait_bar_pane_cp01

0x19d0,	// (0x0005b8a3) cell_vorec_pane_ParamLimits

0x19d0,	// (0x0005b8a3) cell_vorec_pane

0xa2a0,	// (0x00064173) cell_vorec_pane_g1

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp05

0x19f5,	// (0x0005b8c8) cams_zoom_pane

0x1a04,	// (0x0005b8d7) image_vga_pane

0x1a1c,	// (0x0005b8ef) main_camera_pane_g1

0x1a2c,	// (0x0005b8ff) main_camera_pane_g2

0x1a3c,	// (0x0005b90f) main_camera_pane_g3

0x1a4c,	// (0x0005b91f) main_camera_pane_g4

0x1a5c,	// (0x0005b92f) main_camera_pane_g5

0x1a6c,	// (0x0005b93f) main_camera_pane_g6

0x1a7c,	// (0x0005b94f) main_camera_pane_g7

0x0007,

0xf206,	// (0x000690d9) main_camera_pane_g

0x1a8c,	// (0x0005b95f) main_camera_pane_t1

0x1aa2,	// (0x0005b975) main_camera_pane_t2

0x0001,

0xf217,	// (0x000690ea) main_camera_pane_t

0x1ad4,	// (0x0005b9a7) cams_zoom_pane_cp_ParamLimits

0x1ad4,	// (0x0005b9a7) cams_zoom_pane_cp

0x1afc,	// (0x0005b9cf) image_cif_pane_ParamLimits

0x1afc,	// (0x0005b9cf) image_cif_pane

0x1b2d,	// (0x0005ba00) image_subqcif_pane

0x1b35,	// (0x0005ba08) main_video_pane_g1_ParamLimits

0x1b35,	// (0x0005ba08) main_video_pane_g1

0x1b59,	// (0x0005ba2c) main_video_pane_g2_ParamLimits

0x1b59,	// (0x0005ba2c) main_video_pane_g2

0x1b8d,	// (0x0005ba60) main_video_pane_g3_ParamLimits

0x1b8d,	// (0x0005ba60) main_video_pane_g3

0x1bbb,	// (0x0005ba8e) main_video_pane_g4_ParamLimits

0x1bbb,	// (0x0005ba8e) main_video_pane_g4

0x1be9,	// (0x0005babc) main_video_pane_g5_ParamLimits

0x1be9,	// (0x0005babc) main_video_pane_g5

0xa2b6,	// (0x00064189) main_video_pane_g6_ParamLimits

0xa2b6,	// (0x00064189) main_video_pane_g6

0x0006,

0xf21c,	// (0x000690ef) main_video_pane_g_ParamLimits

0xf21c,	// (0x000690ef) main_video_pane_g

0x1c10,	// (0x0005bae3) main_video_pane_t1_ParamLimits

0x1c10,	// (0x0005bae3) main_video_pane_t1

0xa2d0,	// (0x000641a3) cams_zoom_pane_g1

0xa2d9,	// (0x000641ac) cams_zoom_pane_g2

0xa2e2,	// (0x000641b5) cams_zoom_pane_g3

0xa2eb,	// (0x000641be) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000690fe) cams_zoom_pane_g

0x1c6d,	// (0x0005bb40) grid_cams_pane

0x1c82,	// (0x0005bb55) linegrid_cams_pane

0x1c93,	// (0x0005bb66) cell_cams_pane_ParamLimits

0x1c93,	// (0x0005bb66) cell_cams_pane

0xa2f4,	// (0x000641c7) cams_burst_image_pane

0xa2fc,	// (0x000641cf) cell_cams_pane_g1

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp03

0xa094,	// (0x00063f67) mp_bg_pane_g1

0x9cab,	// (0x00063b7e) bg_list_pane_cp03

0xe29f,	// (0x00068172) bg_mp_pane

0xe2a7,	// (0x0006817a) grid_mp_pane

0xe2af,	// (0x00068182) media_player_g1

0xe2b7,	// (0x0006818a) media_player_t1

0xe2c5,	// (0x00068198) media_player_t2

0xe2d3,	// (0x000681a6) media_player_t3

0xe2e1,	// (0x000681b4) media_player_t4

0xe2ef,	// (0x000681c2) media_player_t5

0xe2fd,	// (0x000681d0) media_player_t6

0xe30b,	// (0x000681de) media_player_t7

0x0006,

0x027c,	// (0x0005a14f) media_player_t

0xe319,	// (0x000681ec) wait_bar_pane_cp02

0xf556,	// (0x00069429) main_usb_pane_t

0x3bcf,	// (0x0005daa2) cell_mp_pane

0xa094,	// (0x00063f67) cell_mp_pane_g1

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp06

0xa304,	// (0x000641d7) grid_skin_colour_pane

0xa30c,	// (0x000641df) list_highlight_pane_cp03

0x1da7,	// (0x0005bc7a) skin_g1

0xa314,	// (0x000641e7) skin_t1

0xa323,	// (0x000641f6) skin_t2

0x0001,

0xf260,	// (0x00069133) skin_t

0x1daf,	// (0x0005bc82) cell_skin_colour_pane_ParamLimits

0x1daf,	// (0x0005bc82) cell_skin_colour_pane

0xa331,	// (0x00064204) cell_skin_colour_pane_g1

0x1e18,	// (0x0005bceb) call_video_g1_ParamLimits

0x1e18,	// (0x0005bceb) call_video_g1

0x1e2e,	// (0x0005bd01) call_video_g2_ParamLimits

0x1e2e,	// (0x0005bd01) call_video_g2

0x0001,

0xf265,	// (0x00069138) call_video_g_ParamLimits

0xf265,	// (0x00069138) call_video_g

0x1e76,	// (0x0005bd49) call_video_uplink_pane_cp1_ParamLimits

0x1e76,	// (0x0005bd49) call_video_uplink_pane_cp1

0xa343,	// (0x00064216) call_video_uplink_pane_cp2

0x1f0b,	// (0x0005bdde) video_down_crop_pane_ParamLimits

0x1f0b,	// (0x0005bdde) video_down_crop_pane

0x1fce,	// (0x0005bea1) video_down_pane_ParamLimits

0x1fce,	// (0x0005bea1) video_down_pane

0xa34b,	// (0x0006421e) video_down_subqcif_pane_ParamLimits

0xa34b,	// (0x0006421e) video_down_subqcif_pane

0xa363,	// (0x00064236) video_down_subqcif_pane_cp_ParamLimits

0xa363,	// (0x00064236) video_down_subqcif_pane_cp

0xa387,	// (0x0006425a) im_reading_pane_ParamLimits

0xa387,	// (0x0006425a) im_reading_pane

0x208b,	// (0x0005bf5e) im_writing_pane_ParamLimits

0x208b,	// (0x0005bf5e) im_writing_pane

0x20a1,	// (0x0005bf74) im_reading_pane_t1

0xa3a1,	// (0x00064274) list_im_pane

0xa3b2,	// (0x00064285) scroll_pane_cp07

0x20d7,	// (0x0005bfaa) im_writing_pane_t1_ParamLimits

0x20d7,	// (0x0005bfaa) im_writing_pane_t1

0xa3cb,	// (0x0006429e) im_writing_pane_t2_ParamLimits

0xa3cb,	// (0x0006429e) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00069142) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00069142) im_writing_pane_t

0x9cab,	// (0x00063b7e) input_focus_pane_cp04

0x9cab,	// (0x00063b7e) input_focus_pane_cp05

0x20ec,	// (0x0005bfbf) list_im_single_pane_ParamLimits

0x20ec,	// (0x0005bfbf) list_im_single_pane

0xa3e8,	// (0x000642bb) list_single_im_pane_t1

0x3b95,	// (0x0005da68) blid_accuracy_pane

0x3b9d,	// (0x0005da70) blid_compass_pane

0x3ba5,	// (0x0005da78) main_location_t1

0x3bb3,	// (0x0005da86) main_location_t2

0x3bc1,	// (0x0005da94) main_location_t3

0x0002,

0xf563,	// (0x00069436) main_location_t

0x9cab,	// (0x00063b7e) aid_levels_location

0xa094,	// (0x00063f67) blid_accuracy_pane_g1

0xa094,	// (0x00063f67) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000691a4) blid_accuracy_pane_g

0xa422,	// (0x000642f5) wml_content_pane

0xa460,	// (0x00064333) wml_button_pane_ParamLimits

0xa460,	// (0x00064333) wml_button_pane

0x2102,	// (0x0005bfd5) wml_list_single_large_pane_ParamLimits

0x2102,	// (0x0005bfd5) wml_list_single_large_pane

0x2116,	// (0x0005bfe9) wml_list_single_medium_pane_ParamLimits

0x2116,	// (0x0005bfe9) wml_list_single_medium_pane

0x212b,	// (0x0005bffe) wml_list_single_small_pane_ParamLimits

0x212b,	// (0x0005bffe) wml_list_single_small_pane

0xa474,	// (0x00064347) wml_selection_box_pane_ParamLimits

0xa474,	// (0x00064347) wml_selection_box_pane

0xa487,	// (0x0006435a) wml_list_single_pane_t1

0xa496,	// (0x00064369) wml_list_single_medium_pane_t1

0xa4a5,	// (0x00064378) wml_list_single_large_pane_t1

0xa4b4,	// (0x00064387) input_focus_pane_cp02_ParamLimits

0xa4b4,	// (0x00064387) input_focus_pane_cp02

0xa4c7,	// (0x0006439a) wml_selection_box_pane_g1

0xa4d0,	// (0x000643a3) wml_selection_box_pane_t1_ParamLimits

0xa4d0,	// (0x000643a3) wml_selection_box_pane_t1

0x9f06,	// (0x00063dd9) bg_wml_button_pane_ParamLimits

0x9f06,	// (0x00063dd9) bg_wml_button_pane

0xa4e8,	// (0x000643bb) wml_button_pane_g1

0xa4f0,	// (0x000643c3) wml_button_pane_t1

0xa4e8,	// (0x000643bb) wml_button_bg_pane_g1

0xa500,	// (0x000643d3) wml_button_bg_pane_g2

0xa508,	// (0x000643db) wml_button_bg_pane_g3

0xa510,	// (0x000643e3) wml_button_bg_pane_g4

0xa518,	// (0x000643eb) wml_button_bg_pane_g5

0xa520,	// (0x000643f3) wml_button_bg_pane_g6

0xa528,	// (0x000643fb) wml_button_bg_pane_g7

0xa530,	// (0x00064403) wml_button_bg_pane_g8

0xa538,	// (0x0006440b) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00069147) wml_button_bg_pane_g

0x2142,	// (0x0005c015) bg_list_pane_cp02

0xa540,	// (0x00064413) mce_header_pane_ParamLimits

0xa540,	// (0x00064413) mce_header_pane

0xa554,	// (0x00064427) mce_icon_pane

0xa554,	// (0x00064427) mce_image_pane

0xa55d,	// (0x00064430) mce_text_pane_ParamLimits

0xa55d,	// (0x00064430) mce_text_pane

0x214b,	// (0x0005c01e) scroll_pane_cp03

0x214b,	// (0x0005c01e) scroll_pane_cp04

0xa571,	// (0x00064444) scroll_pane_cp05_ParamLimits

0xa571,	// (0x00064444) scroll_pane_cp05

0x2155,	// (0x0005c028) mce_header_field_pane_ParamLimits

0x2155,	// (0x0005c028) mce_header_field_pane

0x216c,	// (0x0005c03f) mce_header_field_pane_2_ParamLimits

0x216c,	// (0x0005c03f) mce_header_field_pane_2

0x2182,	// (0x0005c055) mce_header_field_pane_3

0x218a,	// (0x0005c05d) list_single_mce_message_pane_ParamLimits

0x218a,	// (0x0005c05d) list_single_mce_message_pane

0x219f,	// (0x0005c072) list_single_mce_smart_pane_ParamLimits

0x219f,	// (0x0005c072) list_single_mce_smart_pane

0xa57d,	// (0x00064450) input_focus_pane_cp03

0xa586,	// (0x00064459) list_header_data_pane

0x21bf,	// (0x0005c092) mce_header_field_pane_t1

0x21cd,	// (0x0005c0a0) list_single_mce_header_pane_ParamLimits

0x21cd,	// (0x0005c0a0) list_single_mce_header_pane

0xa58e,	// (0x00064461) list_single_mce_header_pane_t1

0xa59d,	// (0x00064470) list_single_mce_message_pane_g1

0xa5a6,	// (0x00064479) list_single_mce_message_pane_t1

0x2207,	// (0x0005c0da) bg_cale_heading_pane_cp01_ParamLimits

0x2207,	// (0x0005c0da) bg_cale_heading_pane_cp01

0xa5b5,	// (0x00064488) bg_cale_pane_cp02_ParamLimits

0xa5b5,	// (0x00064488) bg_cale_pane_cp02

0x2236,	// (0x0005c109) cale_month_corner_pane

0x2255,	// (0x0005c128) cale_month_day_heading_pane_ParamLimits

0x2255,	// (0x0005c128) cale_month_day_heading_pane

0x228c,	// (0x0005c15f) cale_month_pane_g1_ParamLimits

0x228c,	// (0x0005c15f) cale_month_pane_g1

0x22b0,	// (0x0005c183) cale_month_pane_g2_ParamLimits

0x22b0,	// (0x0005c183) cale_month_pane_g2

0x22d8,	// (0x0005c1ab) cale_month_pane_g3_ParamLimits

0x22d8,	// (0x0005c1ab) cale_month_pane_g3

0x2314,	// (0x0005c1e7) cale_month_pane_g4_ParamLimits

0x2314,	// (0x0005c1e7) cale_month_pane_g4

0x2350,	// (0x0005c223) cale_month_pane_g5_ParamLimits

0x2350,	// (0x0005c223) cale_month_pane_g5

0x238c,	// (0x0005c25f) cale_month_pane_g6_ParamLimits

0x238c,	// (0x0005c25f) cale_month_pane_g6

0x23c8,	// (0x0005c29b) cale_month_pane_g7_ParamLimits

0x23c8,	// (0x0005c29b) cale_month_pane_g7

0x2404,	// (0x0005c2d7) cale_month_pane_g8_ParamLimits

0x2404,	// (0x0005c2d7) cale_month_pane_g8

0x2448,	// (0x0005c31b) cale_month_pane_g9_ParamLimits

0x2448,	// (0x0005c31b) cale_month_pane_g9

0x248a,	// (0x0005c35d) cale_month_pane_g10_ParamLimits

0x248a,	// (0x0005c35d) cale_month_pane_g10

0x24cc,	// (0x0005c39f) cale_month_pane_g11_ParamLimits

0x24cc,	// (0x0005c39f) cale_month_pane_g11

0x250e,	// (0x0005c3e1) cale_month_pane_g12_ParamLimits

0x250e,	// (0x0005c3e1) cale_month_pane_g12

0x2550,	// (0x0005c423) cale_month_pane_g13_ParamLimits

0x2550,	// (0x0005c423) cale_month_pane_g13

0x000c,

0xf287,	// (0x0006915a) cale_month_pane_g_ParamLimits

0xf287,	// (0x0006915a) cale_month_pane_g

0x2592,	// (0x0005c465) cale_month_week_pane

0x25ae,	// (0x0005c481) grid_cale_month_pane_ParamLimits

0x25ae,	// (0x0005c481) grid_cale_month_pane

0x25dc,	// (0x0005c4af) cale_month_day_heading_pane_t1

0x2662,	// (0x0005c535) cale_month_day_heading_pane_t2

0x26f3,	// (0x0005c5c6) cale_month_day_heading_pane_t3

0x2784,	// (0x0005c657) cale_month_day_heading_pane_t4

0x2815,	// (0x0005c6e8) cale_month_day_heading_pane_t5

0x28a6,	// (0x0005c779) cale_month_day_heading_pane_t6

0x2937,	// (0x0005c80a) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00069175) cale_month_day_heading_pane_t

0xa20e,	// (0x000640e1) bg_cale_side_pane_cp01

0x29cc,	// (0x0005c89f) cale_month_week_pane_t1

0x29e5,	// (0x0005c8b8) cale_month_week_pane_t2

0x29fe,	// (0x0005c8d1) cale_month_week_pane_t3

0x2a17,	// (0x0005c8ea) cale_month_week_pane_t4

0x2a30,	// (0x0005c903) cale_month_week_pane_t5

0x2a49,	// (0x0005c91c) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00069184) cale_month_week_pane_t

0x2a62,	// (0x0005c935) cell_cale_month_pane_ParamLimits

0x2a62,	// (0x0005c935) cell_cale_month_pane

0xa5f4,	// (0x000644c7) cell_cale_month_pane_g1

0x2b7e,	// (0x0005ca51) cell_cale_month_pane_t1_ParamLimits

0x2b7e,	// (0x0005ca51) cell_cale_month_pane_t1

0xa21c,	// (0x000640ef) grid_highlight_pane_cp08

0xa094,	// (0x00063f67) main_smil_g1

0x2b9e,	// (0x0005ca71) smil_status_pane

0xa600,	// (0x000644d3) smil_text_pane

0xe17f,	// (0x00068052) bg_popup_call3_rect_pane_g8

0xe187,	// (0x0006805a) bg_popup_call3_rect_pane_g9

0x0008,

0xf53e,	// (0x00069411) bg_popup_call3_rect_pane_g

0xe418,	// (0x000682eb) smil_status_volume_pane_g1

0x2baf,	// (0x0005ca82) smil_status_pane_t1

0xba50,	// (0x00065923) volume_smil_pane

0xa60a,	// (0x000644dd) list_smil_text_pane

0x2bc6,	// (0x0005ca99) scroll_pane_cp011

0x2bd1,	// (0x0005caa4) smil_text_list_pane_t1_ParamLimits

0x2bd1,	// (0x0005caa4) smil_text_list_pane_t1

0xa614,	// (0x000644e7) aid_volume_smil_ParamLimits

0xa614,	// (0x000644e7) aid_volume_smil

0xa094,	// (0x00063f67) smil_volume_pane_g1

0xa094,	// (0x00063f67) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000691a4) smil_volume_pane_g

0x1398,	// (0x0005b26b) listscroll_cale_day_pane

0xa636,	// (0x00064509) bg_cale_pane

0xa64e,	// (0x00064521) list_cale_pane

0xa671,	// (0x00064544) scroll_pane_cp09

0xa682,	// (0x00064555) cale_bg_pane_g1

0xa68a,	// (0x0006455d) cale_bg_pane_g2

0xa692,	// (0x00064565) cale_bg_pane_g3

0xa69a,	// (0x0006456d) cale_bg_pane_g4

0xa6a2,	// (0x00064575) cale_bg_pane_g5

0xa6aa,	// (0x0006457d) cale_bg_pane_g6

0xa6b2,	// (0x00064585) cale_bg_pane_g7

0xa6ba,	// (0x0006458d) cale_bg_pane_g8

0xa6c2,	// (0x00064595) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000691a9) cale_bg_pane_g

0x2c15,	// (0x0005cae8) list_cale_time_pane_ParamLimits

0x2c15,	// (0x0005cae8) list_cale_time_pane

0xa6ca,	// (0x0006459d) list_cale_time_pane_g1_ParamLimits

0xa6ca,	// (0x0006459d) list_cale_time_pane_g1

0xa6d6,	// (0x000645a9) list_cale_time_pane_g2_ParamLimits

0xa6d6,	// (0x000645a9) list_cale_time_pane_g2

0x2c2a,	// (0x0005cafd) list_cale_time_pane_g3_ParamLimits

0x2c2a,	// (0x0005cafd) list_cale_time_pane_g3

0x2c36,	// (0x0005cb09) list_cale_time_pane_g4_ParamLimits

0x2c36,	// (0x0005cb09) list_cale_time_pane_g4

0x2c42,	// (0x0005cb15) list_cale_time_pane_g5_ParamLimits

0x2c42,	// (0x0005cb15) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000691bc) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000691bc) list_cale_time_pane_g

0xa6f0,	// (0x000645c3) list_cale_time_pane_t1_ParamLimits

0xa6f0,	// (0x000645c3) list_cale_time_pane_t1

0xa718,	// (0x000645eb) list_cale_time_pane_t2_ParamLimits

0xa718,	// (0x000645eb) list_cale_time_pane_t2

0x2fd8,	// (0x0005ceab) aid_blid_cardinal_pane

0x3016,	// (0x0005cee9) compass_pane_t4

0xa740,	// (0x00064613) list_cale_time_pane_t4_ParamLimits

0xa740,	// (0x00064613) list_cale_time_pane_t4

0x3024,	// (0x0005cef7) compass_pane_t5

0x3032,	// (0x0005cf05) compass_pane_t6

0x3040,	// (0x0005cf13) compass_pane_t7

0xac1a,	// (0x00064aed) navi_pane_cc_t1

0xadd1,	// (0x00064ca4) aid_phob_thumbnail_center_pane

0x3647,	// (0x0005d51a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000691c9) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000691c9) list_cale_time_pane_t

0x9904,	// (0x000637d7) bg_popup_window_pane_cp02_ParamLimits

0x9904,	// (0x000637d7) bg_popup_window_pane_cp02

0xa768,	// (0x0006463b) heading_pane_cp01_ParamLimits

0xa768,	// (0x0006463b) heading_pane_cp01

0xa774,	// (0x00064647) loc_req_pane_ParamLimits

0xa774,	// (0x00064647) loc_req_pane

0xa784,	// (0x00064657) loc_type_pane_ParamLimits

0xa784,	// (0x00064657) loc_type_pane

0xa796,	// (0x00064669) loc_type_pane_t1_ParamLimits

0xa796,	// (0x00064669) loc_type_pane_t1

0xa7a8,	// (0x0006467b) loc_type_pane_t2_ParamLimits

0xa7a8,	// (0x0006467b) loc_type_pane_t2

0xa7ba,	// (0x0006468d) loc_type_pane_t3_ParamLimits

0xa7ba,	// (0x0006468d) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000691d0) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000691d0) loc_type_pane_t

0xa7cc,	// (0x0006469f) list_loc_req_pane

0xa7d6,	// (0x000646a9) scroll_pane_cp012

0x2c4e,	// (0x0005cb21) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c4e,	// (0x0005cb21) list_single_loc_request_popup_menu_pane

0xa7df,	// (0x000646b2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa7df,	// (0x000646b2) list_single_loc_request_popup_menu_pane_g1

0xa7eb,	// (0x000646be) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa7eb,	// (0x000646be) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000691d7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000691d7) list_single_loc_request_popup_menu_pane_g

0xa7f7,	// (0x000646ca) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa7f7,	// (0x000646ca) list_single_loc_request_popup_menu_pane_t1

0x9f06,	// (0x00063dd9) bg_popup_window_pane_cp03_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_window_pane_cp03

0xa80d,	// (0x000646e0) heading_loc_req_pane_ParamLimits

0xa80d,	// (0x000646e0) heading_loc_req_pane

0x2c5b,	// (0x0005cb2e) popup_dyc_status_message_window_g1_ParamLimits

0x2c5b,	// (0x0005cb2e) popup_dyc_status_message_window_g1

0x2c6f,	// (0x0005cb42) popup_dyc_status_message_window_t1_ParamLimits

0x2c6f,	// (0x0005cb42) popup_dyc_status_message_window_t1

0x2c84,	// (0x0005cb57) popup_dyc_status_message_window_t2_ParamLimits

0x2c84,	// (0x0005cb57) popup_dyc_status_message_window_t2

0x2c99,	// (0x0005cb6c) popup_dyc_status_message_window_t3_ParamLimits

0x2c99,	// (0x0005cb6c) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000691dc) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000691dc) popup_dyc_status_message_window_t

0x9cab,	// (0x00063b7e) bg_heading_pane_cp01

0xa819,	// (0x000646ec) heading_loc_req_pane_g1

0xa821,	// (0x000646f4) heading_loc_req_pane_g2

0xa829,	// (0x000646fc) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000691e3) heading_loc_req_pane_g

0xa831,	// (0x00064704) heading_loc_req_pane_t1

0xa840,	// (0x00064713) bg_popup_sub_pane_cp01_ParamLimits

0xa840,	// (0x00064713) bg_popup_sub_pane_cp01

0xa84e,	// (0x00064721) popup_cale_events_window_g1_ParamLimits

0xa84e,	// (0x00064721) popup_cale_events_window_g1

0xa86e,	// (0x00064741) popup_cale_events_window_g2_ParamLimits

0xa86e,	// (0x00064741) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00069217) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00069217) popup_cale_events_window_g

0xa88e,	// (0x00064761) popup_cale_events_window_t1_ParamLimits

0xa88e,	// (0x00064761) popup_cale_events_window_t1

0xa8a0,	// (0x00064773) popup_cale_events_window_t2_ParamLimits

0xa8a0,	// (0x00064773) popup_cale_events_window_t2

0xa8de,	// (0x000647b1) popup_cale_events_window_t3_ParamLimits

0xa8de,	// (0x000647b1) popup_cale_events_window_t3

0xa918,	// (0x000647eb) popup_cale_events_window_t4_ParamLimits

0xa918,	// (0x000647eb) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0006921c) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0006921c) popup_cale_events_window_t

0x2dc3,	// (0x0005cc96) call_type_pane

0x2dd3,	// (0x0005cca6) popup_call_status_window_g1

0x2de7,	// (0x0005ccba) popup_call_status_window_g2

0x2dfb,	// (0x0005ccce) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00069225) popup_call_status_window_g

0xa94e,	// (0x00064821) call_type_pane_g1

0xa957,	// (0x0006482a) call_type_pane_g2

0x0001,

0xf359,	// (0x0006922c) call_type_pane_g

0x9cab,	// (0x00063b7e) bg_popup_sub_pane_cp02

0xa960,	// (0x00064833) listscroll_popup_wml_pane

0xa968,	// (0x0006483b) list_wml_pane

0xa972,	// (0x00064845) scroll_pane_cp013

0x2e0b,	// (0x0005ccde) list_single_graphic_popup_wml_pane_ParamLimits

0x2e0b,	// (0x0005ccde) list_single_graphic_popup_wml_pane

0xa094,	// (0x00063f67) list_single_graphic_popup_wml_pane_g1

0xa97b,	// (0x0006484e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x00069231) list_single_graphic_popup_wml_pane_g

0xa983,	// (0x00064856) list_single_graphic_popup_wml_pane_t1

0xa999,	// (0x0006486c) aid_call_pane

0x9efe,	// (0x00063dd1) popup_clock_analogue_window_g1

0x9efe,	// (0x00063dd1) popup_clock_analogue_window_g2

0xa9a1,	// (0x00064874) popup_clock_analogue_window_g3

0xa9a1,	// (0x00064874) popup_clock_analogue_window_g4

0xa094,	// (0x00063f67) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00069236) popup_clock_analogue_window_g

0xa9a9,	// (0x0006487c) popup_clock_analogue_window_t1

0xa9b7,	// (0x0006488a) clock_digital_number_pane_ParamLimits

0xa9b7,	// (0x0006488a) clock_digital_number_pane

0xa9c3,	// (0x00064896) clock_digital_number_pane_cp02_ParamLimits

0xa9c3,	// (0x00064896) clock_digital_number_pane_cp02

0xa9cf,	// (0x000648a2) clock_digital_number_pane_cp03_ParamLimits

0xa9cf,	// (0x000648a2) clock_digital_number_pane_cp03

0xa9db,	// (0x000648ae) clock_digital_number_pane_cp04_ParamLimits

0xa9db,	// (0x000648ae) clock_digital_number_pane_cp04

0xa9e7,	// (0x000648ba) clock_digital_separator_pane_ParamLimits

0xa9e7,	// (0x000648ba) clock_digital_separator_pane

0xa9f3,	// (0x000648c6) popup_clock_digital_window_t1

0xa094,	// (0x00063f67) clock_digital_number_pane_g1

0xa094,	// (0x00063f67) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000691a4) clock_digital_number_pane_g

0xa094,	// (0x00063f67) clock_digital_separator_pane_g1

0xa094,	// (0x00063f67) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000691a4) clock_digital_separator_pane_g

0x9cab,	// (0x00063b7e) bg_popup_window_pane_cp04

0xaa10,	// (0x000648e3) heading_pane_cp03

0xaa18,	// (0x000648eb) listscroll_popup_gms_pane

0xaa20,	// (0x000648f3) grid_large_graphic_popup_pane

0xaa2a,	// (0x000648fd) listscroll_popup_gms_pane_g1

0xaa32,	// (0x00064905) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x00069241) listscroll_popup_gms_pane_g

0xa458,	// (0x0006432b) scroll_pane_cp014

0x2e1e,	// (0x0005ccf1) cell_large_graphic_popup_pane_ParamLimits

0x2e1e,	// (0x0005ccf1) cell_large_graphic_popup_pane

0x2e34,	// (0x0005cd07) cell_large_graphic_popup_pane_g1_ParamLimits

0x2e34,	// (0x0005cd07) cell_large_graphic_popup_pane_g1

0xaa3a,	// (0x0006490d) cell_large_graphic_popup_pane_g2_ParamLimits

0xaa3a,	// (0x0006490d) cell_large_graphic_popup_pane_g2

0xaa46,	// (0x00064919) cell_large_graphic_popup_pane_g3_ParamLimits

0xaa46,	// (0x00064919) cell_large_graphic_popup_pane_g3

0xaa53,	// (0x00064926) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa53,	// (0x00064926) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00069246) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00069246) cell_large_graphic_popup_pane_g

0xaa63,	// (0x00064936) grid_highlight_pane_cp010

0xa094,	// (0x00063f67) bg_popup_call_pane_g1

0xaa6d,	// (0x00064940) list_single_graphic_popup_conf_pane_ParamLimits

0xaa6d,	// (0x00064940) list_single_graphic_popup_conf_pane

0xaa80,	// (0x00064953) list_highlight_pane_cp01

0xaa89,	// (0x0006495c) list_single_graphic_popup_conf_pane_g1

0xaa91,	// (0x00064964) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0006924f) list_single_graphic_popup_conf_pane_g

0xaa99,	// (0x0006496c) list_single_graphic_popup_conf_pane_t1

0xaaa7,	// (0x0006497a) linegrid_cams_pane_g1

0x2e40,	// (0x0005cd13) linegrid_cams_pane_g2

0xa19f,	// (0x00064072) linegrid_cams_pane_g3

0xaab0,	// (0x00064983) linegrid_cams_pane_g4

0x2e49,	// (0x0005cd1c) linegrid_cams_pane_g5

0x2e52,	// (0x0005cd25) linegrid_cams_pane_g6

0xa24f,	// (0x00064122) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00069254) linegrid_cams_pane_g

0xaab9,	// (0x0006498c) popup_clock_analogue_window

0xaab9,	// (0x0006498c) popup_clock_digital_window

0x9cab,	// (0x00063b7e) popup_phob_thumbnail_window

0xa094,	// (0x00063f67) call_video_uplink_pane_g1

0xaac2,	// (0x00064995) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00069263) call_video_uplink_pane_g

0xa21c,	// (0x000640ef) video_uplink_pane

0xaaca,	// (0x0006499d) mce_image_pane_g1

0x2e5b,	// (0x0005cd2e) mce_image_pane_g2

0x2e63,	// (0x0005cd36) mce_image_pane_g3

0x2e6b,	// (0x0005cd3e) mce_image_pane_g4

0x2e73,	// (0x0005cd46) mce_image_pane_g5

0x0004,

0xf395,	// (0x00069268) mce_image_pane_g

0xaad4,	// (0x000649a7) control_top_pane_stacon_cp01_ParamLimits

0xaad4,	// (0x000649a7) control_top_pane_stacon_cp01

0xaae4,	// (0x000649b7) uni_indicator_pane_stacon_cp01_ParamLimits

0xaae4,	// (0x000649b7) uni_indicator_pane_stacon_cp01

0xaaf5,	// (0x000649c8) bg_popup_sub_pane_cp03

0xaaff,	// (0x000649d2) chi_dic_find_pane

0x2e7b,	// (0x0005cd4e) listscroll_chi_dic_pane

0xab07,	// (0x000649da) main_pane_chidic_g1

0xab0f,	// (0x000649e2) chi_dic_find_pane_t1

0xab1d,	// (0x000649f0) find_chidic_pane

0xab26,	// (0x000649f9) chi_dic_list_pane_ParamLimits

0xab26,	// (0x000649f9) chi_dic_list_pane

0xab37,	// (0x00064a0a) scroll_pane_cp020

0xab3f,	// (0x00064a12) find_chidic_pane_t1

0x9cab,	// (0x00063b7e) input_focus_pane_cp06

0x2e8f,	// (0x0005cd62) list_chi_dic_pane_ParamLimits

0x2e8f,	// (0x0005cd62) list_chi_dic_pane

0x2ea1,	// (0x0005cd74) list_chi_dic_pane_t1_ParamLimits

0x2ea1,	// (0x0005cd74) list_chi_dic_pane_t1

0x9cab,	// (0x00063b7e) list_highlight_pane_cp020

0xab4e,	// (0x00064a21) bg_cale_heading_pane_g1

0x2eb4,	// (0x0005cd87) bg_cale_heading_pane_g2

0x2ebc,	// (0x0005cd8f) bg_cale_heading_pane_g3

0x2ec4,	// (0x0005cd97) bg_cale_heading_pane_g4

0x2ecc,	// (0x0005cd9f) bg_cale_heading_pane_g5

0x2ed4,	// (0x0005cda7) bg_cale_heading_pane_g6

0x2edc,	// (0x0005cdaf) bg_cale_heading_pane_g7

0x2ee4,	// (0x0005cdb7) bg_cale_heading_pane_g8

0x2eec,	// (0x0005cdbf) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00069273) bg_cale_heading_pane_g

0xab4e,	// (0x00064a21) bg_cale_side_pane_g1

0x2ef4,	// (0x0005cdc7) bg_cale_side_pane_g2

0x2efc,	// (0x0005cdcf) bg_cale_side_pane_g3

0x2f04,	// (0x0005cdd7) bg_cale_side_pane_g4

0x2f0c,	// (0x0005cddf) bg_cale_side_pane_g5

0x2f14,	// (0x0005cde7) bg_cale_side_pane_g6

0x2f1c,	// (0x0005cdef) bg_cale_side_pane_g7

0x2f24,	// (0x0005cdf7) bg_cale_side_pane_g8

0x2f2c,	// (0x0005cdff) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00069286) bg_cale_side_pane_g

0x2f34,	// (0x0005ce07) popup_call_status_window_ParamLimits

0x2f34,	// (0x0005ce07) popup_call_status_window

0xab56,	// (0x00064a29) stacon_top_pane

0xab5e,	// (0x00064a31) status_pane_ParamLimits

0xab5e,	// (0x00064a31) status_pane

0xab78,	// (0x00064a4b) status_small_pane

0xab80,	// (0x00064a53) control_pane

0x9cab,	// (0x00063b7e) stacon_bottom_pane

0xab88,	// (0x00064a5b) list_single_mce_smart_pane_t1_ParamLimits

0xab88,	// (0x00064a5b) list_single_mce_smart_pane_t1

0xab9b,	// (0x00064a6e) list_single_mce_smart_pane_t2_ParamLimits

0xab9b,	// (0x00064a6e) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00069299) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00069299) list_single_mce_smart_pane_t

0x2f7b,	// (0x0005ce4e) compass_pane

0x2f84,	// (0x0005ce57) main_location2_pane_t1

0x2f9a,	// (0x0005ce6d) main_location2_pane_t2

0x2fb0,	// (0x0005ce83) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0006929e) main_location2_pane_t

0xabc3,	// (0x00064a96) compass_pane_g1_ParamLimits

0xabc3,	// (0x00064a96) compass_pane_g1

0x2ff8,	// (0x0005cecb) compass_pane_t1

0x3007,	// (0x0005ceda) compass_pane_t2

0x0005,

0xf3d4,	// (0x000692a7) compass_pane_t

0x304e,	// (0x0005cf21) text_secondary_cp61

0xac11,	// (0x00064ae4) navi_pane_cams_g5

0xac5d,	// (0x00064b30) navi_pane_im_t1

0xac6b,	// (0x00064b3e) navi_pane_mp_g1_ParamLimits

0xac6b,	// (0x00064b3e) navi_pane_mp_g1

0xac7f,	// (0x00064b52) navi_pane_mp_g2_ParamLimits

0xac7f,	// (0x00064b52) navi_pane_mp_g2

0xac8b,	// (0x00064b5e) navi_pane_mp_g3_ParamLimits

0xac8b,	// (0x00064b5e) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000692bb) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000692bb) navi_pane_mp_g

0xac97,	// (0x00064b6a) navi_pane_mp_t1

0xaca5,	// (0x00064b78) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000692c2) navi_pane_mp_t

0xad10,	// (0x00064be3) navi_pane_vt_g1

0xac97,	// (0x00064b6a) navi_pane_vt_t1

0xad18,	// (0x00064beb) navi_slider_pane

0xa260,	// (0x00064133) zooming_pane

0xad20,	// (0x00064bf3) navi_slider_pane_g1

0xad29,	// (0x00064bfc) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000692c9) navi_slider_pane_g

0xad56,	// (0x00064c29) aid_levels_zoom

0xad5e,	// (0x00064c31) zooming_pane_g1

0xad66,	// (0x00064c39) zooming_pane_g2

0xad66,	// (0x00064c39) zooming_pane_g3

0x0002,

0xf405,	// (0x000692d8) zooming_pane_g

0xad6e,	// (0x00064c41) level_10_zoom

0xad77,	// (0x00064c4a) level_11_zoom

0xad80,	// (0x00064c53) level_1_zoom

0xad89,	// (0x00064c5c) level_2_zoom

0xad92,	// (0x00064c65) level_3_zoom

0xad9b,	// (0x00064c6e) level_4_zoom

0xada4,	// (0x00064c77) level_5_zoom

0xadad,	// (0x00064c80) level_6_zoom

0xadb6,	// (0x00064c89) level_7_zoom

0xadbf,	// (0x00064c92) level_8_zoom

0xadc8,	// (0x00064c9b) level_9_zoom

0xadd9,	// (0x00064cac) popup_phob_thumbnail_window_g1

0xade1,	// (0x00064cb4) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000692df) popup_phob_thumbnail_window_g

0xe321,	// (0x000681f4) level_1_location

0xe329,	// (0x000681fc) level_2_location

0xe331,	// (0x00068204) level_3_location

0xe339,	// (0x0006820c) level_4_location

0xa260,	// (0x00064133) level_5_location

0x30e4,	// (0x0005cfb7) mce_icon_pane_g1

0x30ec,	// (0x0005cfbf) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000692e4) mce_icon_pane_g

0x30f4,	// (0x0005cfc7) main_mup_pane_g1_ParamLimits

0x30f4,	// (0x0005cfc7) main_mup_pane_g1

0x310a,	// (0x0005cfdd) main_mup_pane_g2_ParamLimits

0x310a,	// (0x0005cfdd) main_mup_pane_g2

0x3122,	// (0x0005cff5) main_mup_pane_g3_ParamLimits

0x3122,	// (0x0005cff5) main_mup_pane_g3

0x313a,	// (0x0005d00d) main_mup_pane_g4_ParamLimits

0x313a,	// (0x0005d00d) main_mup_pane_g4

0x3152,	// (0x0005d025) main_mup_pane_g5_ParamLimits

0x3152,	// (0x0005d025) main_mup_pane_g5

0x316c,	// (0x0005d03f) main_mup_pane_g6_ParamLimits

0x316c,	// (0x0005d03f) main_mup_pane_g6

0x3184,	// (0x0005d057) main_mup_pane_g7_ParamLimits

0x3184,	// (0x0005d057) main_mup_pane_g7

0x319c,	// (0x0005d06f) main_mup_pane_g8_ParamLimits

0x319c,	// (0x0005d06f) main_mup_pane_g8

0x31b4,	// (0x0005d087) main_mup_pane_g9_ParamLimits

0x31b4,	// (0x0005d087) main_mup_pane_g9

0x31c8,	// (0x0005d09b) main_mup_pane_g10_ParamLimits

0x31c8,	// (0x0005d09b) main_mup_pane_g10

0x31dc,	// (0x0005d0af) main_mup_pane_g11_ParamLimits

0x31dc,	// (0x0005d0af) main_mup_pane_g11

0x31ee,	// (0x0005d0c1) main_mup_pane_g12_ParamLimits

0x31ee,	// (0x0005d0c1) main_mup_pane_g12

0x3202,	// (0x0005d0d5) main_mup_pane_g13_ParamLimits

0x3202,	// (0x0005d0d5) main_mup_pane_g13

0x000c,

0xf416,	// (0x000692e9) main_mup_pane_g_ParamLimits

0xf416,	// (0x000692e9) main_mup_pane_g

0x3214,	// (0x0005d0e7) main_mup_pane_t1_ParamLimits

0x3214,	// (0x0005d0e7) main_mup_pane_t1

0x322e,	// (0x0005d101) main_mup_pane_t2_ParamLimits

0x322e,	// (0x0005d101) main_mup_pane_t2

0x3246,	// (0x0005d119) main_mup_pane_t3_ParamLimits

0x3246,	// (0x0005d119) main_mup_pane_t3

0x325e,	// (0x0005d131) main_mup_pane_t4_ParamLimits

0x325e,	// (0x0005d131) main_mup_pane_t4

0x327c,	// (0x0005d14f) main_mup_pane_t5_ParamLimits

0x327c,	// (0x0005d14f) main_mup_pane_t5

0x3291,	// (0x0005d164) main_mup_pane_t6_ParamLimits

0x3291,	// (0x0005d164) main_mup_pane_t6

0x0005,

0xf431,	// (0x00069304) main_mup_pane_t_ParamLimits

0xf431,	// (0x00069304) main_mup_pane_t

0x32a3,	// (0x0005d176) mup_progress_pane_ParamLimits

0x32a3,	// (0x0005d176) mup_progress_pane

0x32af,	// (0x0005d182) mup_visualizer_pane_ParamLimits

0x32af,	// (0x0005d182) mup_visualizer_pane

0x32d7,	// (0x0005d1aa) mup_volume_pane_ParamLimits

0x32d7,	// (0x0005d1aa) mup_volume_pane

0xade9,	// (0x00064cbc) mup_visualizer_pane_g1_ParamLimits

0xade9,	// (0x00064cbc) mup_visualizer_pane_g1

0xade9,	// (0x00064cbc) mup_visualizer_pane_g2_ParamLimits

0xade9,	// (0x00064cbc) mup_visualizer_pane_g2

0xabc3,	// (0x00064a96) mup_visualizer_pane_g3_ParamLimits

0xabc3,	// (0x00064a96) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00069311) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00069311) mup_visualizer_pane_g

0xa094,	// (0x00063f67) mup_volume_pane_g1

0xadff,	// (0x00064cd2) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00069318) mup_volume_pane_g

0xa094,	// (0x00063f67) mup_progress_pane_g1

0xae08,	// (0x00064cdb) mup_progress_pane_g2

0xae11,	// (0x00064ce4) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0006931d) mup_progress_pane_g

0x9cab,	// (0x00063b7e) bg_popup_window_pane_cp05

0xae1a,	// (0x00064ced) heading_pane_cp02_ParamLimits

0xae1a,	// (0x00064ced) heading_pane_cp02

0xae34,	// (0x00064d07) list_popup_blid_pane

0xae3c,	// (0x00064d0f) list_blid_sat_info_pane_ParamLimits

0xae3c,	// (0x00064d0f) list_blid_sat_info_pane

0xae4f,	// (0x00064d22) list_blid_sat_info_pane_g1

0xae57,	// (0x00064d2a) list_blid_sat_info_pane_t1

0x33c7,	// (0x0005d29a) mup_equalizer_pane_ParamLimits

0x33c7,	// (0x0005d29a) mup_equalizer_pane

0x33e0,	// (0x0005d2b3) mup_equalizer_pane_cp1_ParamLimits

0x33e0,	// (0x0005d2b3) mup_equalizer_pane_cp1

0x33f9,	// (0x0005d2cc) mup_equalizer_pane_cp2_ParamLimits

0x33f9,	// (0x0005d2cc) mup_equalizer_pane_cp2

0x3412,	// (0x0005d2e5) mup_equalizer_pane_cp3_ParamLimits

0x3412,	// (0x0005d2e5) mup_equalizer_pane_cp3

0x342b,	// (0x0005d2fe) mup_equalizer_pane_cp4_ParamLimits

0x342b,	// (0x0005d2fe) mup_equalizer_pane_cp4

0x3444,	// (0x0005d317) mup_equalizer_pane_cp5

0x3456,	// (0x0005d329) mup_equalizer_pane_cp6

0x3468,	// (0x0005d33b) mup_equalizer_pane_cp7

0xe1ff,	// (0x000680d2) bg_popup_call_poc_act_pane_g9

0xe207,	// (0x000680da) bg_popup_call_poc_act_pane_g10

0xe20f,	// (0x000680e2) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f06,	// (0x00063dd9) mup_scale_pane

0xa094,	// (0x00063f67) mup_scale_pane_g1

0xae65,	// (0x00064d38) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00069339) mup_scale_pane_g

0xae89,	// (0x00064d5c) msg_data_pane

0xae91,	// (0x00064d64) scroll_pane_cp017

0x348e,	// (0x0005d361) bg_list_pane_cp04_ParamLimits

0x348e,	// (0x0005d361) bg_list_pane_cp04

0xae99,	// (0x00064d6c) msg_data_pane_g1

0x2e5b,	// (0x0005cd2e) msg_data_pane_g2

0x2e63,	// (0x0005cd36) msg_data_pane_g3

0x34ae,	// (0x0005d381) msg_data_pane_g4

0x2e73,	// (0x0005cd46) msg_data_pane_g5

0x30e4,	// (0x0005cfb7) msg_data_pane_g6

0x34b6,	// (0x0005d389) msg_data_pane_g7

0x0006,

0xf475,	// (0x00069348) msg_data_pane_g

0x34be,	// (0x0005d391) msg_text_pane_ParamLimits

0x34be,	// (0x0005d391) msg_text_pane

0x34e6,	// (0x0005d3b9) qrid_highlight_pane_cp011_ParamLimits

0x34e6,	// (0x0005d3b9) qrid_highlight_pane_cp011

0x9cab,	// (0x00063b7e) msg_body_pane

0x9cab,	// (0x00063b7e) msg_header_pane

0xaeaa,	// (0x00064d7d) input_focus_pane_cp07

0x3508,	// (0x0005d3db) msg_header_pane_t1_ParamLimits

0x3508,	// (0x0005d3db) msg_header_pane_t1

0x351a,	// (0x0005d3ed) msg_header_pane_t2_ParamLimits

0x351a,	// (0x0005d3ed) msg_header_pane_t2

0x0001,

0xf489,	// (0x0006935c) msg_header_pane_t_ParamLimits

0xf489,	// (0x0006935c) msg_header_pane_t

0xaebf,	// (0x00064d92) msg_body_pane_g1

0x352c,	// (0x0005d3ff) msg_body_pane_t1_ParamLimits

0x352c,	// (0x0005d3ff) msg_body_pane_t1

0x3557,	// (0x0005d42a) msg_body_pane_t2_ParamLimits

0x3557,	// (0x0005d42a) msg_body_pane_t2

0x3569,	// (0x0005d43c) msg_body_pane_t3_ParamLimits

0x3569,	// (0x0005d43c) msg_body_pane_t3

0x0002,

0xf48e,	// (0x00069361) msg_body_pane_t_ParamLimits

0xf48e,	// (0x00069361) msg_body_pane_t

0x35b1,	// (0x0005d484) main_viewer_pane_g1_ParamLimits

0x35b1,	// (0x0005d484) main_viewer_pane_g1

0x35bd,	// (0x0005d490) main_viewer_pane_g2_ParamLimits

0x35bd,	// (0x0005d490) main_viewer_pane_g2

0x35c9,	// (0x0005d49c) main_viewer_pane_g3_ParamLimits

0x35c9,	// (0x0005d49c) main_viewer_pane_g3

0x35d8,	// (0x0005d4ab) main_viewer_pane_g4_ParamLimits

0x35d8,	// (0x0005d4ab) main_viewer_pane_g4

0xaedf,	// (0x00064db2) main_viewer_pane_g5_ParamLimits

0xaedf,	// (0x00064db2) main_viewer_pane_g5

0xaedf,	// (0x00064db2) main_viewer_pane_g7_ParamLimits

0xaedf,	// (0x00064db2) main_viewer_pane_g7

0xaef1,	// (0x00064dc4) main_viewer_pane_g8_ParamLimits

0xaef1,	// (0x00064dc4) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x00069371) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00069371) main_viewer_pane_g

0xaf09,	// (0x00064ddc) viewer_content_pane_ParamLimits

0xaf09,	// (0x00064ddc) viewer_content_pane

0x360c,	// (0x0005d4df) main_postcard_pane_g1_ParamLimits

0x360c,	// (0x0005d4df) main_postcard_pane_g1

0x3620,	// (0x0005d4f3) main_postcard_pane_g2_ParamLimits

0x3620,	// (0x0005d4f3) main_postcard_pane_g2

0x3634,	// (0x0005d507) main_postcard_pane_g3_ParamLimits

0x3634,	// (0x0005d507) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00069382) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00069382) main_postcard_pane_g

0x3647,	// (0x0005d51a) main_postcard_pane_g4

0xe42b,	// (0x000682fe) smil_status_volume_pane_g2

0x3682,	// (0x0005d555) postcard_pane_ParamLimits

0x3682,	// (0x0005d555) postcard_pane

0xaf17,	// (0x00064dea) postcard_pane_g1_ParamLimits

0xaf17,	// (0x00064dea) postcard_pane_g1

0x36c2,	// (0x0005d595) postcard_pane_g2_ParamLimits

0x36c2,	// (0x0005d595) postcard_pane_g2

0x36ce,	// (0x0005d5a1) postcard_pane_g3_ParamLimits

0x36ce,	// (0x0005d5a1) postcard_pane_g3

0xaf25,	// (0x00064df8) postcard_pane_g4_ParamLimits

0xaf25,	// (0x00064df8) postcard_pane_g4

0x36da,	// (0x0005d5ad) postcard_pane_g5_ParamLimits

0x36da,	// (0x0005d5ad) postcard_pane_g5

0x36ef,	// (0x0005d5c2) postcard_pane_g6_ParamLimits

0x36ef,	// (0x0005d5c2) postcard_pane_g6

0xaf17,	// (0x00064dea) postcard_pane_g7_ParamLimits

0xaf17,	// (0x00064dea) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0006938f) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0006938f) postcard_pane_g

0x3703,	// (0x0005d5d6) main_mp2_pane_g1_ParamLimits

0x3703,	// (0x0005d5d6) main_mp2_pane_g1

0x370f,	// (0x0005d5e2) main_mp2_pane_g2_ParamLimits

0x370f,	// (0x0005d5e2) main_mp2_pane_g2

0x371b,	// (0x0005d5ee) main_mp2_pane_g3_ParamLimits

0x371b,	// (0x0005d5ee) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0006939e) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0006939e) main_mp2_pane_g

0x3727,	// (0x0005d5fa) main_mp2_pane_t1_ParamLimits

0x3727,	// (0x0005d5fa) main_mp2_pane_t1

0x373c,	// (0x0005d60f) main_mp2_pane_t2_ParamLimits

0x373c,	// (0x0005d60f) main_mp2_pane_t2

0x374e,	// (0x0005d621) main_mp2_pane_t3_ParamLimits

0x374e,	// (0x0005d621) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000693a5) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000693a5) main_mp2_pane_t

0xaf33,	// (0x00064e06) pec_content_pane_ParamLimits

0xaf33,	// (0x00064e06) pec_content_pane

0xa458,	// (0x0006432b) scroll_pane_cp015

0xaf45,	// (0x00064e18) pec_attribute_pane_ParamLimits

0xaf45,	// (0x00064e18) pec_attribute_pane

0x3760,	// (0x0005d633) pec_content_pane_g1_ParamLimits

0x3760,	// (0x0005d633) pec_content_pane_g1

0xaf55,	// (0x00064e28) pec_content_pane_t1_ParamLimits

0xaf55,	// (0x00064e28) pec_content_pane_t1

0xaf67,	// (0x00064e3a) pec_content_pane_t2_ParamLimits

0xaf67,	// (0x00064e3a) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000693ac) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000693ac) pec_content_pane_t

0x376c,	// (0x0005d63f) list_single_graphic_pane_cp01_ParamLimits

0x376c,	// (0x0005d63f) list_single_graphic_pane_cp01

0x9f06,	// (0x00063dd9) bg_popup_sub_pane_cp04

0xaf79,	// (0x00064e4c) popup_mup_playback_window_g1

0xaf85,	// (0x00064e58) popup_mup_playback_window_t1

0xaf9a,	// (0x00064e6d) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000693b1) popup_mup_playback_window_t

0xafd1,	// (0x00064ea4) main_image_pane_g1_ParamLimits

0xafd1,	// (0x00064ea4) main_image_pane_g1

0xb014,	// (0x00064ee7) scroll_pane_cp018_ParamLimits

0xb014,	// (0x00064ee7) scroll_pane_cp018

0xb02c,	// (0x00064eff) scroll_pane_cp016_ParamLimits

0xb02c,	// (0x00064eff) scroll_pane_cp016

0x3837,	// (0x0005d70a) smil2_image_pane_ParamLimits

0x3837,	// (0x0005d70a) smil2_image_pane

0x385f,	// (0x0005d732) smil2_root_pane_ParamLimits

0x385f,	// (0x0005d732) smil2_root_pane

0x3897,	// (0x0005d76a) smil2_text_pane_ParamLimits

0x3897,	// (0x0005d76a) smil2_text_pane

0x9cab,	// (0x00063b7e) bg_list_pane_cp06

0xb068,	// (0x00064f3b) grid_radio_pane

0x9cab,	// (0x00063b7e) bg_popup_window_pane_cp06

0xb070,	// (0x00064f43) main_fmradio_pane_t1

0xaa10,	// (0x000648e3) heading_pane_cp04

0xb07e,	// (0x00064f51) main_fmradio_pane_t2

0xe257,	// (0x0006812a) popup_cale_lunar_info_window_g1

0xb08c,	// (0x00064f5f) main_fmradio_pane_t3

0xe25f,	// (0x00068132) popup_cale_lunar_info_window_g2

0xb09a,	// (0x00064f6d) main_fmradio_pane_t4

0x0001,

0xb0a8,	// (0x00064f7b) main_fmradio_pane_t5

0x0004,

0x026e,	// (0x0005a141) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000693c6) main_fmradio_pane_t

0xb0b6,	// (0x00064f89) wait_bar_pane_cp03

0xb0be,	// (0x00064f91) cell_fmradio_pane_ParamLimits

0xb0be,	// (0x00064f91) cell_fmradio_pane

0xaf17,	// (0x00064dea) cell_fmradio_pane_g1_ParamLimits

0xaf17,	// (0x00064dea) cell_fmradio_pane_g1

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp011

0xb0d1,	// (0x00064fa4) poc_content_pane_ParamLimits

0xb0d1,	// (0x00064fa4) poc_content_pane

0xb0e4,	// (0x00064fb7) scroll_pane_cp019

0x3903,	// (0x0005d7d6) popup_call_poc_act_window_ParamLimits

0x3903,	// (0x0005d7d6) popup_call_poc_act_window

0x3923,	// (0x0005d7f6) popup_call_poc_inact_window_ParamLimits

0x3923,	// (0x0005d7f6) popup_call_poc_inact_window

0x0232,	// (0x0005a105) bg_popup_call_poc_act_pane_g

0xe217,	// (0x000680ea) bg_popup_call_poc_inact_pane_g1

0xe21f,	// (0x000680f2) bg_popup_call_poc_inact_pane_g2

0xb0ec,	// (0x00064fbf) popup_call_poc_act_window_g2

0xe227,	// (0x000680fa) bg_popup_call_poc_inact_pane_g3

0xe1a7,	// (0x0006807a) bg_popup_call_poc_inact_pane_g4

0xe22f,	// (0x00068102) bg_popup_call_poc_inact_pane_g5

0xb0f4,	// (0x00064fc7) popup_call_poc_act_window_t1_ParamLimits

0xb0f4,	// (0x00064fc7) popup_call_poc_act_window_t1

0xb11c,	// (0x00064fef) popup_call_poc_act_window_t2_ParamLimits

0xb11c,	// (0x00064fef) popup_call_poc_act_window_t2

0xb144,	// (0x00065017) popup_call_poc_act_window_t3_ParamLimits

0xb144,	// (0x00065017) popup_call_poc_act_window_t3

0xb16c,	// (0x0006503f) popup_call_poc_act_window_t4_ParamLimits

0xb16c,	// (0x0006503f) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000693d1) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000693d1) popup_call_poc_act_window_t

0xe237,	// (0x0006810a) bg_popup_call_poc_inact_pane_g6

0xe23f,	// (0x00068112) bg_popup_call_poc_inact_pane_g7

0xe247,	// (0x0006811a) bg_popup_call_poc_inact_pane_g8

0xb17e,	// (0x00065051) popup_call_poc_inact_window_g2

0xe24f,	// (0x00068122) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0249,	// (0x0005a11c) bg_popup_call_poc_inact_pane_g

0xb186,	// (0x00065059) popup_call_poc_inact_window_t1_ParamLimits

0xb186,	// (0x00065059) popup_call_poc_inact_window_t1

0xb19b,	// (0x0006506e) popup_call_poc_inact_window_t2_ParamLimits

0xb19b,	// (0x0006506e) popup_call_poc_inact_window_t2

0xb1b0,	// (0x00065083) popup_call_poc_inact_window_t3_ParamLimits

0xb1b0,	// (0x00065083) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000693da) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000693da) popup_call_poc_inact_window_t

0xe39e,	// (0x00068271) context_pane_ParamLimits

0x4031,	// (0x0005df04) signal_pane_ParamLimits

0xa260,	// (0x00064133) main_call2_pane

0xba1c,	// (0x000658ef) popup_phob_thumbnail2_window_ParamLimits

0xba1c,	// (0x000658ef) popup_phob_thumbnail2_window

0xaec7,	// (0x00064d9a) aid_hotspot_pointer_arrow_pane

0xaecf,	// (0x00064da2) aid_hotspot_pointer_hand_pane

0x3bf8,	// (0x0005dacb) phob_pre_status_pane_g5

0x19f5,	// (0x0005b8c8) cams_zoom_pane_ParamLimits

0x1a04,	// (0x0005b8d7) image_vga_pane_ParamLimits

0x1a1c,	// (0x0005b8ef) main_camera_pane_g1_ParamLimits

0x1a2c,	// (0x0005b8ff) main_camera_pane_g2_ParamLimits

0x1a3c,	// (0x0005b90f) main_camera_pane_g3_ParamLimits

0x1a4c,	// (0x0005b91f) main_camera_pane_g4_ParamLimits

0x1a5c,	// (0x0005b92f) main_camera_pane_g5_ParamLimits

0x1a6c,	// (0x0005b93f) main_camera_pane_g6_ParamLimits

0x1a7c,	// (0x0005b94f) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000690d9) main_camera_pane_g_ParamLimits

0x1a8c,	// (0x0005b95f) main_camera_pane_t1_ParamLimits

0x1aa2,	// (0x0005b975) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000690ea) main_camera_pane_t_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_preview_window_pane_cp01

0xb1c5,	// (0x00065098) popup_phob_thumbnail2_window_g1_ParamLimits

0xb1c5,	// (0x00065098) popup_phob_thumbnail2_window_g1

0x9cab,	// (0x00063b7e) call2_cli_visual_pane

0x394f,	// (0x0005d822) popup_call2_audio_conf_window_ParamLimits

0x394f,	// (0x0005d822) popup_call2_audio_conf_window

0x396d,	// (0x0005d840) popup_call2_audio_first_window_ParamLimits

0x396d,	// (0x0005d840) popup_call2_audio_first_window

0x39e3,	// (0x0005d8b6) popup_call2_audio_in_window_ParamLimits

0x39e3,	// (0x0005d8b6) popup_call2_audio_in_window

0x3a17,	// (0x0005d8ea) popup_call2_audio_out_window_ParamLimits

0x3a17,	// (0x0005d8ea) popup_call2_audio_out_window

0x3a69,	// (0x0005d93c) popup_call2_audio_second_window_ParamLimits

0x3a69,	// (0x0005d93c) popup_call2_audio_second_window

0x3abb,	// (0x0005d98e) popup_call2_audio_wait_window_ParamLimits

0x3abb,	// (0x0005d98e) popup_call2_audio_wait_window

0x9cab,	// (0x00063b7e) bg_popup_call2_act_pane_cp03

0x9ee8,	// (0x00063dbb) list_conf_pane_cp

0xb1d1,	// (0x000650a4) popup_call2_audio_conf_window_t1

0xaa6d,	// (0x00064940) list_single_graphic_popup_conf2_pane_ParamLimits

0xaa6d,	// (0x00064940) list_single_graphic_popup_conf2_pane

0xaa80,	// (0x00064953) list_highlight_pane_cp04

0xb1df,	// (0x000650b2) list_single_graphic_popup_conf2_pane_g1

0xaa91,	// (0x00064964) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000693e1) list_single_graphic_popup_conf2_pane_g

0xb1e7,	// (0x000650ba) list_single_graphic_popup_conf2_pane_t1

0xb1f5,	// (0x000650c8) bg_popup_call2_act_pane_cp01_ParamLimits

0xb1f5,	// (0x000650c8) bg_popup_call2_act_pane_cp01

0xb27f,	// (0x00065152) call_type_pane_cp05_ParamLimits

0xb27f,	// (0x00065152) call_type_pane_cp05

0xb2d3,	// (0x000651a6) popup_call2_audio_second_window_g1_ParamLimits

0xb2d3,	// (0x000651a6) popup_call2_audio_second_window_g1

0xb327,	// (0x000651fa) popup_call2_audio_second_window_g2_ParamLimits

0xb327,	// (0x000651fa) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000693e6) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000693e6) popup_call2_audio_second_window_g

0xb38c,	// (0x0006525f) popup_call2_audio_second_window_t1_ParamLimits

0xb38c,	// (0x0006525f) popup_call2_audio_second_window_t1

0xb447,	// (0x0006531a) popup_call2_audio_second_window_t2_ParamLimits

0xb447,	// (0x0006531a) popup_call2_audio_second_window_t2

0xb49a,	// (0x0006536d) popup_call2_audio_second_window_t3_ParamLimits

0xb49a,	// (0x0006536d) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000693ed) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000693ed) popup_call2_audio_second_window_t

0x9cab,	// (0x00063b7e) bg_popup_call2_in_pane_cp02

0x9cb5,	// (0x00063b88) call_type_pane_cp04

0x9cbd,	// (0x00063b90) popup_call2_audio_wait_window_g1

0x9cc5,	// (0x00063b98) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00068fc8) popup_call2_audio_wait_window_g

0x9ccd,	// (0x00063ba0) popup_call2_audio_wait_window_t3

0xb58d,	// (0x00065460) bg_popup_call2_act_pane_ParamLimits

0xb58d,	// (0x00065460) bg_popup_call2_act_pane

0xb64d,	// (0x00065520) call_type_pane_cp03_ParamLimits

0xb64d,	// (0x00065520) call_type_pane_cp03

0xb6b1,	// (0x00065584) popup_call2_audio_first_window_g1_ParamLimits

0xb6b1,	// (0x00065584) popup_call2_audio_first_window_g1

0xb721,	// (0x000655f4) popup_call2_audio_first_window_g2_ParamLimits

0xb721,	// (0x000655f4) popup_call2_audio_first_window_g2

0xade9,	// (0x00064cbc) popup_call2_audio_first_window_g3_ParamLimits

0xade9,	// (0x00064cbc) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000693f6) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000693f6) popup_call2_audio_first_window_g

0xb7ff,	// (0x000656d2) popup_call2_audio_first_window_t1_ParamLimits

0xb7ff,	// (0x000656d2) popup_call2_audio_first_window_t1

0xb902,	// (0x000657d5) popup_call2_audio_first_window_t4_ParamLimits

0xb902,	// (0x000657d5) popup_call2_audio_first_window_t4

0xdbba,	// (0x00067a8d) popup_call2_audio_first_window_t5_ParamLimits

0xdbba,	// (0x00067a8d) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00069401) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00069401) popup_call2_audio_first_window_t

0x9efe,	// (0x00063dd1) bg_popup_call2_act_pane_g1

0xe267,	// (0x0006813a) popup_cale_lunar_info_window_t1

0xe275,	// (0x00068148) popup_cale_lunar_info_window_t2

0xe283,	// (0x00068156) popup_cale_lunar_info_window_t3

0x9cab,	// (0x00063b7e) bg_popup_call2_bubble_pane

0xdcbb,	// (0x00067b8e) bg_popup_call2_in_pane_cp01_ParamLimits

0xdcbb,	// (0x00067b8e) bg_popup_call2_in_pane_cp01

0x9987,	// (0x0006385a) call_type_pane_cp02

0xdd03,	// (0x00067bd6) popup_call2_audio_out_window_g1_ParamLimits

0xdd03,	// (0x00067bd6) popup_call2_audio_out_window_g1

0xdd2f,	// (0x00067c02) popup_call2_audio_out_window_g2_ParamLimits

0xdd2f,	// (0x00067c02) popup_call2_audio_out_window_g2

0xdd57,	// (0x00067c2a) popup_call2_audio_out_window_g3_ParamLimits

0xdd57,	// (0x00067c2a) popup_call2_audio_out_window_g3

0x0003,

0x01d9,	// (0x0005a0ac) popup_call2_audio_out_window_g_ParamLimits

0x01d9,	// (0x0005a0ac) popup_call2_audio_out_window_g

0xdd92,	// (0x00067c65) popup_call2_audio_out_window_t1_ParamLimits

0xdd92,	// (0x00067c65) popup_call2_audio_out_window_t1

0xddf1,	// (0x00067cc4) popup_call2_audio_out_window_t2_ParamLimits

0xddf1,	// (0x00067cc4) popup_call2_audio_out_window_t2

0xde45,	// (0x00067d18) popup_call2_audio_out_window_t3_ParamLimits

0xde45,	// (0x00067d18) popup_call2_audio_out_window_t3

0xde5b,	// (0x00067d2e) popup_call2_audio_out_window_t4_ParamLimits

0xde5b,	// (0x00067d2e) popup_call2_audio_out_window_t4

0xde71,	// (0x00067d44) popup_call2_audio_out_window_t5_ParamLimits

0xde71,	// (0x00067d44) popup_call2_audio_out_window_t5

0x0005,

0x01e2,	// (0x0005a0b5) popup_call2_audio_out_window_t_ParamLimits

0x01e2,	// (0x0005a0b5) popup_call2_audio_out_window_t

0xded5,	// (0x00067da8) bg_popup_call2_in_pane_ParamLimits

0xded5,	// (0x00067da8) bg_popup_call2_in_pane

0xdf31,	// (0x00067e04) popup_call2_audio_in_window_g1_ParamLimits

0xdf31,	// (0x00067e04) popup_call2_audio_in_window_g1

0xdf69,	// (0x00067e3c) popup_call2_audio_in_window_g2_ParamLimits

0xdf69,	// (0x00067e3c) popup_call2_audio_in_window_g2

0xdfa1,	// (0x00067e74) popup_call2_audio_in_window_g3_ParamLimits

0xdfa1,	// (0x00067e74) popup_call2_audio_in_window_g3

0x0003,

0x01ef,	// (0x0005a0c2) popup_call2_audio_in_window_g_ParamLimits

0x01ef,	// (0x0005a0c2) popup_call2_audio_in_window_g

0xdff9,	// (0x00067ecc) popup_call2_audio_in_window_t1_ParamLimits

0xdff9,	// (0x00067ecc) popup_call2_audio_in_window_t1

0xe079,	// (0x00067f4c) popup_call2_audio_in_window_t2_ParamLimits

0xe079,	// (0x00067f4c) popup_call2_audio_in_window_t2

0xe0f9,	// (0x00067fcc) popup_call2_audio_in_window_t3_ParamLimits

0xe0f9,	// (0x00067fcc) popup_call2_audio_in_window_t3

0xe113,	// (0x00067fe6) popup_call2_audio_in_window_t4_ParamLimits

0xe113,	// (0x00067fe6) popup_call2_audio_in_window_t4

0xe125,	// (0x00067ff8) popup_call2_audio_in_window_t5_ParamLimits

0xe125,	// (0x00067ff8) popup_call2_audio_in_window_t5

0xe13a,	// (0x0006800d) popup_call2_audio_in_window_t6_ParamLimits

0xe13a,	// (0x0006800d) popup_call2_audio_in_window_t6

0x0005,

0x01f8,	// (0x0005a0cb) popup_call2_audio_in_window_t_ParamLimits

0x01f8,	// (0x0005a0cb) popup_call2_audio_in_window_t

0x9efe,	// (0x00063dd1) bg_popup_call2_in_pane_g1

0xe291,	// (0x00068164) popup_cale_lunar_info_window_t4

0x0003,

0x0273,	// (0x0005a146) popup_cale_lunar_info_window_t

0x9f06,	// (0x00063dd9) bg_popup_call2_rect_pane_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_call2_rect_pane

0x9cab,	// (0x00063b7e) call2_cli_visual_graphic_pane

0x9cab,	// (0x00063b7e) call2_cli_visual_text_pane

0xba43,	// (0x00065916) smil_status_volume_pane_g3

0x0002,

0xa094,	// (0x00063f67) call2_cli_visual_graphic_pane_g1

0xa094,	// (0x00063f67) call2_cli_visual_graphic_pane_g2

0xa094,	// (0x00063f67) call2_cli_visual_graphic_pane_g3

0x0002,

0xf537,	// (0x0006940a) call2_cli_visual_graphic_pane_g

0xe14f,	// (0x00068022) bg_popup_call2_rect_pane_g1

0xa13c,	// (0x0006400f) bg_popup_call2_rect_pane_g2

0xe157,	// (0x0006802a) bg_popup_call2_rect_pane_g3

0xe15f,	// (0x00068032) bg_popup_call2_rect_pane_g4

0xe167,	// (0x0006803a) bg_popup_call2_rect_pane_g5

0xe16f,	// (0x00068042) bg_popup_call2_rect_pane_g6

0xe177,	// (0x0006804a) bg_popup_call2_rect_pane_g7

0xe17f,	// (0x00068052) bg_popup_call2_rect_pane_g8

0xe187,	// (0x0006805a) bg_popup_call2_rect_pane_g9

0x0008,

0xf53e,	// (0x00069411) bg_popup_call2_rect_pane_g

0xe18f,	// (0x00068062) bg_popup_call2_bubble_pane_g1

0xe197,	// (0x0006806a) bg_popup_call2_bubble_pane_g2

0xe19f,	// (0x00068072) bg_popup_call2_bubble_pane_g3

0xe1a7,	// (0x0006807a) bg_popup_call2_bubble_pane_g4

0xe1af,	// (0x00068082) bg_popup_call2_bubble_pane_g5

0xe1b7,	// (0x0006808a) bg_popup_call2_bubble_pane_g6

0xe1bf,	// (0x00068092) bg_popup_call2_bubble_pane_g7

0xe1c7,	// (0x0006809a) bg_popup_call2_bubble_pane_g8

0xe1cf,	// (0x000680a2) bg_popup_call2_bubble_pane_g9

0x0008,

0x021f,	// (0x0005a0f2) bg_popup_call2_bubble_pane_g

0x13a8,	// (0x0005b27b) aid_cale_week_size_cell_pane

0x1ab8,	// (0x0005b98b) aid_cams_cif_uncrop_pane_ParamLimits

0x1ab8,	// (0x0005b98b) aid_cams_cif_uncrop_pane

0x1c59,	// (0x0005bb2c) aid_cams_size_cell_ParamLimits

0x1c59,	// (0x0005bb2c) aid_cams_size_cell

0x1c6d,	// (0x0005bb40) grid_cams_pane_ParamLimits

0x1c82,	// (0x0005bb55) linegrid_cams_pane_ParamLimits

0x1e42,	// (0x0005bd15) call_video_pane_t1

0x1e5c,	// (0x0005bd2f) call_video_pane_t2

0x0001,

0xf26a,	// (0x0006913d) call_video_pane_t

0x21e1,	// (0x0005c0b4) aid_cale_month_size_cell_pane_ParamLimits

0x21e1,	// (0x0005c0b4) aid_cale_month_size_cell_pane

0xf581,	// (0x00069454) smil_status_volume_pane_g

0xba50,	// (0x00065923) volume_smil_pane_ParamLimits

0x9839,	// (0x0006370c) aid_popup2_width_pane

0x12f7,	// (0x0005b1ca) cell_qdial_pane_g4_ParamLimits

0x12f7,	// (0x0005b1ca) cell_qdial_pane_g4

0x2fd8,	// (0x0005ceab) aid_blid_cardinal_pane_ParamLimits

0x2fe4,	// (0x0005ceb7) aid_blid_destination_pane_ParamLimits

0x2fe4,	// (0x0005ceb7) aid_blid_destination_pane

0x9f06,	// (0x00063dd9) bg_popup_call_poc_act_pane_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_call_poc_act_pane

0x9f06,	// (0x00063dd9) bg_popup_call_poc_inact_pane_ParamLimits

0x9f06,	// (0x00063dd9) bg_popup_call_poc_inact_pane

0xe1d7,	// (0x000680aa) bg_popup_call_poc_act_pane_g1

0xe1df,	// (0x000680b2) bg_popup_call_poc_act_pane_g2

0xe1e7,	// (0x000680ba) bg_popup_call_poc_act_pane_g3

0xe1a7,	// (0x0006807a) bg_popup_call_poc_act_pane_g4

0xe1af,	// (0x00068082) bg_popup_call_poc_act_pane_g5

0xe1ef,	// (0x000680c2) bg_popup_call_poc_act_pane_g6

0xe1bf,	// (0x00068092) bg_popup_call_poc_act_pane_g7

0xe1f7,	// (0x000680ca) bg_popup_call_poc_act_pane_g8

0x9cab,	// (0x00063b7e) main_usb_pane

0xb9fb,	// (0x000658ce) popup_cale_lunar_info_window

0x20a1,	// (0x0005bf74) im_reading_pane_t1_ParamLimits

0xa3a1,	// (0x00064274) list_im_pane_ParamLimits

0xa3b2,	// (0x00064285) scroll_pane_cp07_ParamLimits

0x9cab,	// (0x00063b7e) grid_highlight_pane_cp012

0x9f06,	// (0x00063dd9) mup_scale_pane_ParamLimits

0xaf17,	// (0x00064dea) main_usb_pane_g1_ParamLimits

0xaf17,	// (0x00064dea) main_usb_pane_g1

0x3b15,	// (0x0005d9e8) main_usb_pane_g2_ParamLimits

0x3b15,	// (0x0005d9e8) main_usb_pane_g2

0x0001,

0xf551,	// (0x00069424) main_usb_pane_g_ParamLimits

0xf551,	// (0x00069424) main_usb_pane_g

0x3b29,	// (0x0005d9fc) main_usb_pane_t1_ParamLimits

0x3b29,	// (0x0005d9fc) main_usb_pane_t1

0x3b3b,	// (0x0005da0e) main_usb_pane_t2_ParamLimits

0x3b3b,	// (0x0005da0e) main_usb_pane_t2

0x3b4d,	// (0x0005da20) main_usb_pane_t3_ParamLimits

0x3b4d,	// (0x0005da20) main_usb_pane_t3

0x3b5f,	// (0x0005da32) main_usb_pane_t4_ParamLimits

0x3b5f,	// (0x0005da32) main_usb_pane_t4

0x3b71,	// (0x0005da44) main_usb_pane_t5_ParamLimits

0x3b71,	// (0x0005da44) main_usb_pane_t5

0x3b83,	// (0x0005da56) main_usb_pane_t6_ParamLimits

0x3b83,	// (0x0005da56) main_usb_pane_t6

0x0005,

0xf556,	// (0x00069429) main_usb_pane_t_ParamLimits

0xabba,	// (0x00064a8d) aid_text_placing

0x2f84,	// (0x0005ce57) main_location2_pane_t1_ParamLimits

0x2f9a,	// (0x0005ce6d) main_location2_pane_t2_ParamLimits

0x2fb0,	// (0x0005ce83) main_location2_pane_t3_ParamLimits

0x2fc6,	// (0x0005ce99) main_location2_pane_t4_ParamLimits

0x2fc6,	// (0x0005ce99) main_location2_pane_t4

0xf3cb,	// (0x0006929e) main_location2_pane_t_ParamLimits

0x9f42,	// (0x00063e15) find_pinb_pane_g2_ParamLimits

0x9f42,	// (0x00063e15) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00068fee) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00068fee) find_pinb_pane_g

0x9f4e,	// (0x00063e21) find_pinb_pane_t1_ParamLimits

0x9f60,	// (0x00063e33) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00068ff3) find_pinb_pane_t_ParamLimits

0x9cab,	// (0x00063b7e) main_call3_pane

0x25dc,	// (0x0005c4af) cale_month_day_heading_pane_t1_ParamLimits

0x2662,	// (0x0005c535) cale_month_day_heading_pane_t2_ParamLimits

0x26f3,	// (0x0005c5c6) cale_month_day_heading_pane_t3_ParamLimits

0x2784,	// (0x0005c657) cale_month_day_heading_pane_t4_ParamLimits

0x2815,	// (0x0005c6e8) cale_month_day_heading_pane_t5_ParamLimits

0x28a6,	// (0x0005c779) cale_month_day_heading_pane_t6_ParamLimits

0x2937,	// (0x0005c80a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00069175) cale_month_day_heading_pane_t_ParamLimits

0x2bbd,	// (0x0005ca90) smil_status_volume_pane

0x369e,	// (0x0005d571) postcard_address_pane_ParamLimits

0x369e,	// (0x0005d571) postcard_address_pane

0x36b0,	// (0x0005d583) postcard_message_pane_ParamLimits

0x36b0,	// (0x0005d583) postcard_message_pane

0x3af3,	// (0x0005d9c6) call2_cli_visual_pane_t1_ParamLimits

0x3af3,	// (0x0005d9c6) call2_cli_visual_pane_t1

0x424d,	// (0x0005e120) postcard_message_pane_t1_ParamLimits

0x424d,	// (0x0005e120) postcard_message_pane_t1

0x4236,	// (0x0005e109) postcard_address_pane_t1_ParamLimits

0x4236,	// (0x0005e109) postcard_address_pane_t1

0x4224,	// (0x0005e0f7) popup_call3_audio_in_window_ParamLimits

0x4224,	// (0x0005e0f7) popup_call3_audio_in_window

0x40b3,	// (0x0005df86) bg_popup_call3_in_pane_ParamLimits

0x40b3,	// (0x0005df86) bg_popup_call3_in_pane

0x4125,	// (0x0005dff8) popup_call3_audio_in_window_g1_ParamLimits

0x4125,	// (0x0005dff8) popup_call3_audio_in_window_g1

0x4145,	// (0x0005e018) popup_call3_audio_in_window_g2_ParamLimits

0x4145,	// (0x0005e018) popup_call3_audio_in_window_g2

0x4165,	// (0x0005e038) popup_call3_audio_in_window_g3_ParamLimits

0x4165,	// (0x0005e038) popup_call3_audio_in_window_g3

0x0003,

0xf588,	// (0x0006945b) popup_call3_audio_in_window_g_ParamLimits

0xf588,	// (0x0006945b) popup_call3_audio_in_window_g

0x4196,	// (0x0005e069) popup_call3_audio_in_window_t1_ParamLimits

0x4196,	// (0x0005e069) popup_call3_audio_in_window_t1

0x41d4,	// (0x0005e0a7) popup_call3_audio_in_window_t2_ParamLimits

0x41d4,	// (0x0005e0a7) popup_call3_audio_in_window_t2

0x4212,	// (0x0005e0e5) popup_call3_audio_in_window_t3_ParamLimits

0x4212,	// (0x0005e0e5) popup_call3_audio_in_window_t3

0x0002,

0xf591,	// (0x00069464) popup_call3_audio_in_window_t_ParamLimits

0xf591,	// (0x00069464) popup_call3_audio_in_window_t

0xa260,	// (0x00064133) bg_popup_call3_rect_pane

0xe14f,	// (0x00068022) bg_popup_call3_rect_pane_g1

0xa13c,	// (0x0006400f) bg_popup_call3_rect_pane_g2

0xe157,	// (0x0006802a) bg_popup_call3_rect_pane_g3

0xe15f,	// (0x00068032) bg_popup_call3_rect_pane_g4

0xe167,	// (0x0006803a) bg_popup_call3_rect_pane_g5

0xe16f,	// (0x00068042) bg_popup_call3_rect_pane_g6

0xe177,	// (0x0006804a) bg_popup_call3_rect_pane_g7

0x32ed,	// (0x0005d1c0) mup_visualizer_osc_pane

0xadf7,	// (0x00064cca) mup_visualizer_spec_pane

0x40e3,	// (0x0005dfb6) call3_video_qcif_pane_ParamLimits

0x40e3,	// (0x0005dfb6) call3_video_qcif_pane

0x40f4,	// (0x0005dfc7) call3_video_qcif_uncrop_pane_ParamLimits

0x40f4,	// (0x0005dfc7) call3_video_qcif_uncrop_pane

0x4100,	// (0x0005dfd3) call3_video_subqcif_pane_ParamLimits

0x4100,	// (0x0005dfd3) call3_video_subqcif_pane

0x4114,	// (0x0005dfe7) call3_video_subqcif_uncrop_pane_ParamLimits

0x4114,	// (0x0005dfe7) call3_video_subqcif_uncrop_pane

0x4185,	// (0x0005e058) popup_call3_audio_in_window_g4_ParamLimits

0x4185,	// (0x0005e058) popup_call3_audio_in_window_g4

0x40a2,	// (0x0005df75) mup_spec_half_pane

0x40ab,	// (0x0005df7e) mup_spec_half_pane_cp

0xe3fe,	// (0x000682d1) mup_osc_middle_pane

0xe407,	// (0x000682da) mup_visualizer_osc_pane_g1

0x4083,	// (0x0005df56) mup_spec_bar_pane_ParamLimits

0x4083,	// (0x0005df56) mup_spec_bar_pane

0xe3eb,	// (0x000682be) mup_spec_bar_pane_g1

0xe3f5,	// (0x000682c8) mup_spec_bar_pane_g2

0x0001,

0x02b7,	// (0x0005a18a) mup_spec_bar_pane_g

0x13a8,	// (0x0005b27b) aid_cale_week_size_cell_pane_ParamLimits

0x13c2,	// (0x0005b295) bg_cale_heading_pane_ParamLimits

0xa1c2,	// (0x00064095) bg_cale_pane_cp01_ParamLimits

0x13da,	// (0x0005b2ad) cale_week_corner_pane_ParamLimits

0x13f9,	// (0x0005b2cc) cale_week_day_heading_pane_ParamLimits

0x1416,	// (0x0005b2e9) cale_week_scroll_pane_g1_ParamLimits

0x1429,	// (0x0005b2fc) cale_week_scroll_pane_g2_ParamLimits

0x1441,	// (0x0005b314) cale_week_scroll_pane_g3_ParamLimits

0x1459,	// (0x0005b32c) cale_week_scroll_pane_g4_ParamLimits

0x1471,	// (0x0005b344) cale_week_scroll_pane_g5_ParamLimits

0x1489,	// (0x0005b35c) cale_week_scroll_pane_g6_ParamLimits

0x14a1,	// (0x0005b374) cale_week_scroll_pane_g7_ParamLimits

0x14b9,	// (0x0005b38c) cale_week_scroll_pane_g8_ParamLimits

0x14d5,	// (0x0005b3a8) cale_week_scroll_pane_g9_ParamLimits

0x14ed,	// (0x0005b3c0) cale_week_scroll_pane_g10_ParamLimits

0x1505,	// (0x0005b3d8) cale_week_scroll_pane_g11_ParamLimits

0x151d,	// (0x0005b3f0) cale_week_scroll_pane_g12_ParamLimits

0x1535,	// (0x0005b408) cale_week_scroll_pane_g13_ParamLimits

0x154d,	// (0x0005b420) cale_week_scroll_pane_g14_ParamLimits

0x1565,	// (0x0005b438) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006907f) cale_week_scroll_pane_g_ParamLimits

0x1599,	// (0x0005b46c) cale_week_time_pane_ParamLimits

0x15b5,	// (0x0005b488) grid_cale_week_pane_ParamLimits

0xa1df,	// (0x000640b2) listscroll_cale_week_pane_t1

0xa1f1,	// (0x000640c4) scroll_pane_cp08_ParamLimits

0x2236,	// (0x0005c109) cale_month_corner_pane_ParamLimits

0xa5e2,	// (0x000644b5) cale_month_pane_t1

0x2592,	// (0x0005c465) cale_month_week_pane_ParamLimits

0x2dd3,	// (0x0005cca6) popup_call_status_window_g1_ParamLimits

0x2de7,	// (0x0005ccba) popup_call_status_window_g2_ParamLimits

0x2dfb,	// (0x0005ccce) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00069225) popup_call_status_window_g_ParamLimits

0xa991,	// (0x00064864) aid_call2_pane

0x34fc,	// (0x0005d3cf) msg_header_pane_g1

0x369e,	// (0x0005d571) postcard_address2_pane_ParamLimits

0x369e,	// (0x0005d571) postcard_address2_pane

0x36b0,	// (0x0005d583) postcard_message2_pane_ParamLimits

0x36b0,	// (0x0005d583) postcard_message2_pane

0x403f,	// (0x0005df12) message2_row_pane_ParamLimits

0x403f,	// (0x0005df12) message2_row_pane

0x4059,	// (0x0005df2c) address2_row_pane_ParamLimits

0x4059,	// (0x0005df2c) address2_row_pane

0xe3b9,	// (0x0006828c) postcard_message2_row_pane_g1

0xe3c1,	// (0x00068294) postcard_message2_row_pane_t1

0xe3b9,	// (0x0006828c) address2_row_pane_g1

0xe3c1,	// (0x00068294) address2_row_pane_t1

0x19b2,	// (0x0005b885) aid_size_cell_vorec

0x9cab,	// (0x00063b7e) main_rss_pane

0x406c,	// (0x0005df3f) rss_list_single_pane_ParamLimits

0x406c,	// (0x0005df3f) rss_list_single_pane

0xe3cf,	// (0x000682a2) rss_list_single_pane_t1

0xe3dd,	// (0x000682b0) rss_list_single_pane_t2

0x0001,

0x02b2,	// (0x0005a185) rss_list_single_pane_t

0x9cab,	// (0x00063b7e) main_camera2_pane

0x9cab,	// (0x00063b7e) main_video2_pane

0x42a6,	// (0x0005e179) cams_zoom_pane_cp2_ParamLimits

0x42a6,	// (0x0005e179) cams_zoom_pane_cp2

0x42bd,	// (0x0005e190) image2_vga_pane_ParamLimits

0x42bd,	// (0x0005e190) image2_vga_pane

0x42f3,	// (0x0005e1c6) main_camera2_pane_g1_ParamLimits

0x42f3,	// (0x0005e1c6) main_camera2_pane_g1

0x4313,	// (0x0005e1e6) main_camera2_pane_g2_ParamLimits

0x4313,	// (0x0005e1e6) main_camera2_pane_g2

0x432a,	// (0x0005e1fd) main_camera2_pane_g3_ParamLimits

0x432a,	// (0x0005e1fd) main_camera2_pane_g3

0x4341,	// (0x0005e214) main_camera2_pane_g4_ParamLimits

0x4341,	// (0x0005e214) main_camera2_pane_g4

0x4358,	// (0x0005e22b) main_camera2_pane_g5_ParamLimits

0x4358,	// (0x0005e22b) main_camera2_pane_g5

0x436f,	// (0x0005e242) main_camera2_pane_g6_ParamLimits

0x436f,	// (0x0005e242) main_camera2_pane_g6

0x4386,	// (0x0005e259) main_camera2_pane_g7_ParamLimits

0x4386,	// (0x0005e259) main_camera2_pane_g7

0x439d,	// (0x0005e270) main_camera2_pane_g8_ParamLimits

0x439d,	// (0x0005e270) main_camera2_pane_g8

0x0008,

0xf598,	// (0x0006946b) main_camera2_pane_g_ParamLimits

0xf598,	// (0x0006946b) main_camera2_pane_g

0x43cb,	// (0x0005e29e) main_camera2_pane_t1_ParamLimits

0x43cb,	// (0x0005e29e) main_camera2_pane_t1

0x43fa,	// (0x0005e2cd) main_camera2_pane_t2_ParamLimits

0x43fa,	// (0x0005e2cd) main_camera2_pane_t2

0x4417,	// (0x0005e2ea) main_camera2_pane_t3_ParamLimits

0x4417,	// (0x0005e2ea) main_camera2_pane_t3

0x4463,	// (0x0005e336) main_camera2_pane_t4_ParamLimits

0x4463,	// (0x0005e336) main_camera2_pane_t4

0x0006,

0xf5ab,	// (0x0006947e) main_camera2_pane_t_ParamLimits

0xf5ab,	// (0x0006947e) main_camera2_pane_t

0x44d8,	// (0x0005e3ab) cams_zoom_pane_cp4_ParamLimits

0x44d8,	// (0x0005e3ab) cams_zoom_pane_cp4

0x44ee,	// (0x0005e3c1) image2_cif_pane_ParamLimits

0x44ee,	// (0x0005e3c1) image2_cif_pane

0x4511,	// (0x0005e3e4) image2_subqcif_pane_ParamLimits

0x4511,	// (0x0005e3e4) image2_subqcif_pane

0x4527,	// (0x0005e3fa) main_video2_pane_g1_ParamLimits

0x4527,	// (0x0005e3fa) main_video2_pane_g1

0x4541,	// (0x0005e414) main_video2_pane_g2_ParamLimits

0x4541,	// (0x0005e414) main_video2_pane_g2

0x4557,	// (0x0005e42a) main_video2_pane_g3_ParamLimits

0x4557,	// (0x0005e42a) main_video2_pane_g3

0x456d,	// (0x0005e440) main_video2_pane_g4_ParamLimits

0x456d,	// (0x0005e440) main_video2_pane_g4

0x4583,	// (0x0005e456) main_video2_pane_g5_ParamLimits

0x4583,	// (0x0005e456) main_video2_pane_g5

0x4599,	// (0x0005e46c) main_video2_pane_g6_ParamLimits

0x4599,	// (0x0005e46c) main_video2_pane_g6

0x0005,

0xf5ba,	// (0x0006948d) main_video2_pane_g_ParamLimits

0xf5ba,	// (0x0006948d) main_video2_pane_g

0x45b3,	// (0x0005e486) main_video2_pane_t1_ParamLimits

0x45b3,	// (0x0005e486) main_video2_pane_t1

0x45d7,	// (0x0005e4aa) main_video2_pane_t2_ParamLimits

0x45d7,	// (0x0005e4aa) main_video2_pane_t2

0x4621,	// (0x0005e4f4) main_video2_pane_t3_ParamLimits

0x4621,	// (0x0005e4f4) main_video2_pane_t3

0x0002,

0xf5c7,	// (0x0006949a) main_video2_pane_t_ParamLimits

0xf5c7,	// (0x0006949a) main_video2_pane_t

0x3c32,	// (0x0005db05) call_muted_g2

0x0001,

0xf57c,	// (0x0006944f) call_muted_g

0x9cab,	// (0x00063b7e) main_mup2_pane

0x4663,	// (0x0005e536) main_mup2_pane_g1_ParamLimits

0x4663,	// (0x0005e536) main_mup2_pane_g1

0x466f,	// (0x0005e542) main_mup2_pane_g2_ParamLimits

0x466f,	// (0x0005e542) main_mup2_pane_g2

0xbab9,	// (0x0006598c) main_mup_pane_g13_cp1

0xbac1,	// (0x00065994) mup_volume_pane_cp1

0x468b,	// (0x0005e55e) main_mup2_pane_g4_ParamLimits

0x468b,	// (0x0005e55e) main_mup2_pane_g4

0x469b,	// (0x0005e56e) main_mup2_pane_g5_ParamLimits

0x469b,	// (0x0005e56e) main_mup2_pane_g5

0x46ab,	// (0x0005e57e) main_mup2_pane_g6_ParamLimits

0x46ab,	// (0x0005e57e) main_mup2_pane_g6

0x46bb,	// (0x0005e58e) main_mup2_pane_g7_ParamLimits

0x46bb,	// (0x0005e58e) main_mup2_pane_g7

0x0006,

0xf5ce,	// (0x000694a1) main_mup2_pane_g_ParamLimits

0xf5ce,	// (0x000694a1) main_mup2_pane_g

0x46d3,	// (0x0005e5a6) main_mup2_pane_t1_ParamLimits

0x46d3,	// (0x0005e5a6) main_mup2_pane_t1

0x46e9,	// (0x0005e5bc) main_mup2_pane_t2_ParamLimits

0x46e9,	// (0x0005e5bc) main_mup2_pane_t2

0x46ff,	// (0x0005e5d2) main_mup2_pane_t3_ParamLimits

0x46ff,	// (0x0005e5d2) main_mup2_pane_t3

0x4715,	// (0x0005e5e8) main_mup2_pane_t4_ParamLimits

0x4715,	// (0x0005e5e8) main_mup2_pane_t4

0x472d,	// (0x0005e600) main_mup2_pane_t5_ParamLimits

0x472d,	// (0x0005e600) main_mup2_pane_t5

0x4745,	// (0x0005e618) main_mup2_pane_t6_ParamLimits

0x4745,	// (0x0005e618) main_mup2_pane_t6

0x0005,

0xf5dd,	// (0x000694b0) main_mup2_pane_t_ParamLimits

0xf5dd,	// (0x000694b0) main_mup2_pane_t

0x4775,	// (0x0005e648) mup2_visualizer_pane_ParamLimits

0x4775,	// (0x0005e648) mup2_visualizer_pane

0x47a0,	// (0x0005e673) mup_progress_pane_cp_ParamLimits

0x47a0,	// (0x0005e673) mup_progress_pane_cp

0xbaa4,	// (0x00065977) mup_volume_pane_cp_ParamLimits

0xbaa4,	// (0x00065977) mup_volume_pane_cp

0x47b4,	// (0x0005e687) mup2_visualizer_pane_g1_ParamLimits

0x47b4,	// (0x0005e687) mup2_visualizer_pane_g1

0xe43e,	// (0x00068311) mup2_visualizer_pane_g2_ParamLimits

0xe43e,	// (0x00068311) mup2_visualizer_pane_g2

0x47c9,	// (0x0005e69c) mup2_visualizer_pane_g3_ParamLimits

0x47c9,	// (0x0005e69c) mup2_visualizer_pane_g3

0x0002,

0xf5ea,	// (0x000694bd) mup2_visualizer_pane_g_ParamLimits

0xf5ea,	// (0x000694bd) mup2_visualizer_pane_g

0xb060,	// (0x00064f33) aid_size_cell_fmradio

0x3d8e,	// (0x0005dc61) aid_height_parent_landcape

0xa43f,	// (0x00064312) wml_content_pane_cp

0xa447,	// (0x0006431a) wml_tabs_pane

0xa450,	// (0x00064323) popup_wml_miniature_window

0xa458,	// (0x0006432b) scroll_pane_cp021

0xa46c,	// (0x0006433f) wml_content_pane_comp8

0x9cab,	// (0x00063b7e) bg_popup_sub_pane_cp05

0xe45c,	// (0x0006832f) popup_wml_miniature_window_g1

0xe464,	// (0x00068337) wml_miniature_view_pane

0x47d5,	// (0x0005e6a8) aid_size_wml_view

0x47dd,	// (0x0005e6b0) wml_miniature_view_pane_g1

0x47e6,	// (0x0005e6b9) wml_miniature_view_pane_g2

0x47ef,	// (0x0005e6c2) wml_miniature_view_pane_g3

0x47f7,	// (0x0005e6ca) wml_miniature_view_pane_g4

0x47ff,	// (0x0005e6d2) wml_miniature_view_pane_g5

0x4807,	// (0x0005e6da) wml_miniature_view_pane_g6

0x480f,	// (0x0005e6e2) wml_miniature_view_pane_g7

0x4817,	// (0x0005e6ea) wml_miniature_view_pane_g8

0x0007,

0xf5f1,	// (0x000694c4) wml_miniature_view_pane_g

0xe46c,	// (0x0006833f) background_graphic_ParamLimits

0xe46c,	// (0x0006833f) background_graphic

0xe478,	// (0x0006834b) wml_tabs_2_pane

0xe481,	// (0x00068354) wml_tabs_3_pane_ParamLimits

0xe481,	// (0x00068354) wml_tabs_3_pane

0xe493,	// (0x00068366) wml_tabs_4_pane_ParamLimits

0xe493,	// (0x00068366) wml_tabs_4_pane

0xe4a9,	// (0x0006837c) wml_tabs_5_pane_ParamLimits

0xe4a9,	// (0x0006837c) wml_tabs_5_pane

0xe4c3,	// (0x00068396) wml_tabs_pane_g2_ParamLimits

0xe4c3,	// (0x00068396) wml_tabs_pane_g2

0xe4d7,	// (0x000683aa) wml_tabs_pane_g3_ParamLimits

0xe4d7,	// (0x000683aa) wml_tabs_pane_g3

0x481f,	// (0x0005e6f2) wml_tabs_2_active_pane_ParamLimits

0x481f,	// (0x0005e6f2) wml_tabs_2_active_pane

0x482f,	// (0x0005e702) wml_tabs_2_passive_pane_ParamLimits

0x482f,	// (0x0005e702) wml_tabs_2_passive_pane

0x483f,	// (0x0005e712) wml_tabs_3_active_pane_cp_ParamLimits

0x483f,	// (0x0005e712) wml_tabs_3_active_pane_cp

0x4850,	// (0x0005e723) wml_tabs_3_passive_pane_ParamLimits

0x4850,	// (0x0005e723) wml_tabs_3_passive_pane

0x4861,	// (0x0005e734) wml_tabs_3_passive_pane_cp_ParamLimits

0x4861,	// (0x0005e734) wml_tabs_3_passive_pane_cp

0x4872,	// (0x0005e745) tabs_4_active_pane

0x487a,	// (0x0005e74d) tabs_4_passive_pane

0x4882,	// (0x0005e755) tabs_4_passive_pane_cp

0x488a,	// (0x0005e75d) tabs_4_passive_pane_cp2

0x3b0d,	// (0x0005d9e0) aid_height_text

0x32c3,	// (0x0005d196) mup_volume_cont_pane_ParamLimits

0x32c3,	// (0x0005d196) mup_volume_cont_pane

0x1000,	// (0x0005aed3) aid_size_cell_pinb

0x100a,	// (0x0005aedd) aid_size_list_pinb

0x478c,	// (0x0005e65f) mup2_volume_cont_pane_ParamLimits

0x478c,	// (0x0005e65f) mup2_volume_cont_pane

0xba90,	// (0x00065963) mup2_volume_cont_pane_g1_ParamLimits

0xba90,	// (0x00065963) mup2_volume_cont_pane_g1

0x0d1c,	// (0x0005abef) aid_size_cell_touch_ParamLimits

0x0d1c,	// (0x0005abef) aid_size_cell_touch

0x0f08,	// (0x0005addb) touch_pane_ParamLimits

0x0f08,	// (0x0005addb) touch_pane

0x9890,	// (0x00063763) main_rss2_pane

0xe4f4,	// (0x000683c7) listscroll_rss2_pane

0xe4fd,	// (0x000683d0) rss2_navigation_pane

0xe505,	// (0x000683d8) list_rss2_pane

0xab37,	// (0x00064a0a) scroll_pane_cp22

0xe50d,	// (0x000683e0) rss2_navigation_pane_g1

0xe516,	// (0x000683e9) rss2_navigation_pane_g2

0xe51e,	// (0x000683f1) rss2_navigation_pane_g3

0x0002,

0x033d,	// (0x0005a210) rss2_navigation_pane_g

0xe526,	// (0x000683f9) rss2_navigation_pane_t1

0x4892,	// (0x0005e765) rss2_list_single_pane_ParamLimits

0x4892,	// (0x0005e765) rss2_list_single_pane

0xe534,	// (0x00068407) rss2_list_single_pane_t2

0xe542,	// (0x00068415) rss2_list_single_pane_t3_ParamLimits

0xe542,	// (0x00068415) rss2_list_single_pane_t3

0xe55f,	// (0x00068432) rss2_list_single_pane_t4

0x2ba7,	// (0x0005ca7a) smil_status_pane_g1

0x9882,	// (0x00063755) main_image2_pane_ParamLimits

0x9882,	// (0x00063755) main_image2_pane

0x43b4,	// (0x0005e287) main_camera2_pane_g9_ParamLimits

0x43b4,	// (0x0005e287) main_camera2_pane_g9

0x44a6,	// (0x0005e379) main_camera2_pane_t5_ParamLimits

0x44a6,	// (0x0005e379) main_camera2_pane_t5

0xba65,	// (0x00065938) main_camera2_pane_t6_ParamLimits

0xba65,	// (0x00065938) main_camera2_pane_t6

0x48a6,	// (0x0005e779) main_image2_pane_g1_ParamLimits

0x48a6,	// (0x0005e779) main_image2_pane_g1

0x38c5,	// (0x0005d798) smil2_video_pane_ParamLimits

0x38c5,	// (0x0005d798) smil2_video_pane

0x9851,	// (0x00063724) aid_zoom_text_primary_cp

0x987a,	// (0x0006374d) popup_preview_fixed_window

0xa399,	// (0x0006426c) im_reading_pane_g1

0x429a,	// (0x0005e16d) cams2_bc_adjust_pane_cp_ParamLimits

0x429a,	// (0x0005e16d) cams2_bc_adjust_pane_cp

0x44cc,	// (0x0005e39f) cams2_bc_adjust_pane_ParamLimits

0x44cc,	// (0x0005e39f) cams2_bc_adjust_pane

0xe56d,	// (0x00068440) cams2_bc_adjust_pane_g1

0xbac9,	// (0x0006599c) cams2_slider_pane

0xbad2,	// (0x000659a5) cams2_slider_pane_g1

0xbadb,	// (0x000659ae) cams2_slider_pane_g2

0x0006,

0xf602,	// (0x000694d5) cams2_slider_pane_g

0x10ea,	// (0x0005afbd) calc_display_pane_ParamLimits

0x1106,	// (0x0005afd9) calc_paper_pane_ParamLimits

0x1127,	// (0x0005affa) grid_calc_pane_ParamLimits

0xa9f3,	// (0x000648c6) popup_clock_digital_window_t1_ParamLimits

0xaffd,	// (0x00064ed0) main_image_pane_t1

0x10cc,	// (0x0005af9f) aid_size_cell_calc_ParamLimits

0x10cc,	// (0x0005af9f) aid_size_cell_calc

0x3dce,	// (0x0005dca1) popup_blid_sat_info2_window_ParamLimits

0x3dce,	// (0x0005dca1) popup_blid_sat_info2_window

0xe57d,	// (0x00068450) aid_size_cell_blid

0xe585,	// (0x00068458) bg_popup_window_pane_cp07

0xe5a8,	// (0x0006847b) grid_popup_blid_pane

0xe5b0,	// (0x00068483) heading_pane_cp05_ParamLimits

0xe5b0,	// (0x00068483) heading_pane_cp05

0xe678,	// (0x0006854b) cell_popup_blid_pane_ParamLimits

0xe678,	// (0x0006854b) cell_popup_blid_pane

0xe698,	// (0x0006856b) cell_popup_blid_pane_g1

0xe6a0,	// (0x00068573) cell_popup_blid_pane_t1

0x475f,	// (0x0005e632) mup2_indicator_pane_ParamLimits

0x475f,	// (0x0005e632) mup2_indicator_pane

0xa260,	// (0x00064133) mup2_visualizer_osc_pane

0xe44a,	// (0x0006831d) mup2_visualizer_spec_pane_ParamLimits

0xe44a,	// (0x0006831d) mup2_visualizer_spec_pane

0x48ba,	// (0x0005e78d) mup2_spec_half_pane

0x48c3,	// (0x0005e796) mup2_spec_half_pane_cp

0x48cb,	// (0x0005e79e) mup2_spec_bar_pane_ParamLimits

0x48cb,	// (0x0005e79e) mup2_spec_bar_pane

0xe3eb,	// (0x000682be) mup2_spec_bar_pane_g1

0xe3f5,	// (0x000682c8) mup2_spec_bar_pane_g2

0x0001,

0x02b7,	// (0x0005a18a) mup2_spec_bar_pane_g

0x48ea,	// (0x0005e7bd) mup2_osc_middle_pane

0xe407,	// (0x000682da) mup2_visualizer_osc_pane_g1

0x98ba,	// (0x0006378d) popup_number_entry_window_t1_ParamLimits

0x98cd,	// (0x000637a0) popup_number_entry_window_t2_ParamLimits

0x98df,	// (0x000637b2) popup_number_entry_window_t3_ParamLimits

0x0f50,	// (0x0005ae23) popup_number_entry_window_t5_ParamLimits

0x0f50,	// (0x0005ae23) popup_number_entry_window_t5

0xf0c6,	// (0x00068f99) popup_number_entry_window_t_ParamLimits

0x98f1,	// (0x000637c4) text_title_cp2_ParamLimits

0xaed7,	// (0x00064daa) aid_hotspot_pointer_text2_pane

0xaefd,	// (0x00064dd0) main_viewer_pane_g9_ParamLimits

0xaefd,	// (0x00064dd0) main_viewer_pane_g9

0xa5e2,	// (0x000644b5) cale_month_pane_t1_ParamLimits

0xa636,	// (0x00064509) bg_cale_pane_ParamLimits

0xa64e,	// (0x00064521) list_cale_pane_ParamLimits

0xa65f,	// (0x00064532) listscroll_cale_day_pane_t1

0xa671,	// (0x00064544) scroll_pane_cp09_ParamLimits

0x32f5,	// (0x0005d1c8) main_mup_eq_pane_t1_ParamLimits

0x32f5,	// (0x0005d1c8) main_mup_eq_pane_t1

0x330d,	// (0x0005d1e0) main_mup_eq_pane_t2_ParamLimits

0x330d,	// (0x0005d1e0) main_mup_eq_pane_t2

0x3323,	// (0x0005d1f6) main_mup_eq_pane_t3_ParamLimits

0x3323,	// (0x0005d1f6) main_mup_eq_pane_t3

0x3339,	// (0x0005d20c) main_mup_eq_pane_t4_ParamLimits

0x3339,	// (0x0005d20c) main_mup_eq_pane_t4

0x334f,	// (0x0005d222) main_mup_eq_pane_t5_ParamLimits

0x334f,	// (0x0005d222) main_mup_eq_pane_t5

0x3365,	// (0x0005d238) main_mup_eq_pane_t6_ParamLimits

0x3365,	// (0x0005d238) main_mup_eq_pane_t6

0x3377,	// (0x0005d24a) main_mup_eq_pane_t7_ParamLimits

0x3377,	// (0x0005d24a) main_mup_eq_pane_t7

0x3389,	// (0x0005d25c) main_mup_eq_pane_t8_ParamLimits

0x3389,	// (0x0005d25c) main_mup_eq_pane_t8

0x339b,	// (0x0005d26e) main_mup_eq_pane_t9_ParamLimits

0x339b,	// (0x0005d26e) main_mup_eq_pane_t9

0x33b1,	// (0x0005d284) main_mup_eq_pane_t10_ParamLimits

0x33b1,	// (0x0005d284) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00069324) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00069324) main_mup_eq_pane_t

0x3444,	// (0x0005d317) mup_equalizer_pane_cp5_ParamLimits

0x3456,	// (0x0005d329) mup_equalizer_pane_cp6_ParamLimits

0x3468,	// (0x0005d33b) mup_equalizer_pane_cp7_ParamLimits

0x9890,	// (0x00063763) main_gallery_pane

0xe410,	// (0x000682e3) smil2_volume_pane

0xe418,	// (0x000682eb) smil_status_volume_pane_g1_ParamLimits

0xe42b,	// (0x000682fe) smil_status_volume_pane_g2_ParamLimits

0xba43,	// (0x00065916) smil_status_volume_pane_g3_ParamLimits

0xf581,	// (0x00069454) smil_status_volume_pane_g_ParamLimits

0xe585,	// (0x00068458) bg_popup_window_pane_cp07_ParamLimits

0xe593,	// (0x00068466) blid_firmament_pane

0x48f3,	// (0x0005e7c6) aid_size_cell_gallery_ParamLimits

0x48f3,	// (0x0005e7c6) aid_size_cell_gallery

0x4909,	// (0x0005e7dc) grid_gallery_pane_ParamLimits

0x4909,	// (0x0005e7dc) grid_gallery_pane

0x491d,	// (0x0005e7f0) cell_gallery_pane_ParamLimits

0x491d,	// (0x0005e7f0) cell_gallery_pane

0xe6ae,	// (0x00068581) bg_cell_gallery_focus_pane_ParamLimits

0xe6ae,	// (0x00068581) bg_cell_gallery_focus_pane

0xe6c0,	// (0x00068593) cell_gallery_pane_g1_ParamLimits

0xe6c0,	// (0x00068593) cell_gallery_pane_g1

0x4964,	// (0x0005e837) cell_gallery_pane_g2_ParamLimits

0x4964,	// (0x0005e837) cell_gallery_pane_g2

0x4971,	// (0x0005e844) cell_gallery_pane_g3_ParamLimits

0x4971,	// (0x0005e844) cell_gallery_pane_g3

0xe6cc,	// (0x0006859f) cell_gallery_pane_g4_ParamLimits

0xe6cc,	// (0x0006859f) cell_gallery_pane_g4

0x0003,

0xf611,	// (0x000694e4) cell_gallery_pane_g_ParamLimits

0xf611,	// (0x000694e4) cell_gallery_pane_g

0xe6d8,	// (0x000685ab) bg_cell_gallery_focus_pane_g1

0xe6e0,	// (0x000685b3) bg_cell_gallery_focus_pane_g2

0xe6e8,	// (0x000685bb) bg_cell_gallery_focus_pane_g3

0xe6f0,	// (0x000685c3) bg_cell_gallery_focus_pane_g4

0xe6f8,	// (0x000685cb) bg_cell_gallery_focus_pane_g5

0xe700,	// (0x000685d3) bg_cell_gallery_focus_pane_g6

0xe708,	// (0x000685db) bg_cell_gallery_focus_pane_g7

0xe710,	// (0x000685e3) bg_cell_gallery_focus_pane_g8

0x0007,

0x0373,	// (0x0005a246) bg_cell_gallery_focus_pane_g

0xe718,	// (0x000685eb) aid_firma_cardinal

0xe72c,	// (0x000685ff) blid_firmament_pane_t1

0xe743,	// (0x00068616) blid_firmament_pane_t2

0xe75a,	// (0x0006862d) blid_firmament_pane_t3

0xe771,	// (0x00068644) blid_firmament_pane_t4

0x0003,

0x0384,	// (0x0005a257) blid_firmament_pane_t

0xe788,	// (0x0006865b) blid_sat_info_pane

0xe798,	// (0x0006866b) blid_sat_info_pane_g1

0xe798,	// (0x0006866b) blid_sat_info_pane_g2

0x0001,

0x038d,	// (0x0005a260) blid_sat_info_pane_g

0xe7a2,	// (0x00068675) blid_sat_info_pane_t1

0xe7b0,	// (0x00068683) smil2_volume_content_pane

0xe7b9,	// (0x0006868c) smil2_volume_pane_g1

0xe7c1,	// (0x00068694) smil2_volume_content_pane_g1

0xe7ca,	// (0x0006869d) smil2_volume_content_pane_g2

0xe7d3,	// (0x000686a6) smil2_volume_content_pane_g3

0xe7dc,	// (0x000686af) smil2_volume_content_pane_g4

0xe7e5,	// (0x000686b8) smil2_volume_content_pane_g5

0xe7ee,	// (0x000686c1) smil2_volume_content_pane_g6

0xe7f7,	// (0x000686ca) smil2_volume_content_pane_g7

0xe800,	// (0x000686d3) smil2_volume_content_pane_g8

0xe809,	// (0x000686dc) smil2_volume_content_pane_g9

0xe812,	// (0x000686e5) smil2_volume_content_pane_g10

0x0009,

0x0392,	// (0x0005a265) smil2_volume_content_pane_g

0x1649,	// (0x0005b51c) cale_week_day_heading_pane_t1_ParamLimits

0x1673,	// (0x0005b546) cale_week_day_heading_pane_t2_ParamLimits

0x16a2,	// (0x0005b575) cale_week_day_heading_pane_t3_ParamLimits

0x16d1,	// (0x0005b5a4) cale_week_day_heading_pane_t4_ParamLimits

0x1700,	// (0x0005b5d3) cale_week_day_heading_pane_t5_ParamLimits

0x172f,	// (0x0005b602) cale_week_day_heading_pane_t6_ParamLimits

0x175e,	// (0x0005b631) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000690a0) cale_week_day_heading_pane_t_ParamLimits

0xa20e,	// (0x000640e1) bg_cale_side_pane_ParamLimits

0x1788,	// (0x0005b65b) cale_week_time_pane_t1_ParamLimits

0x17c2,	// (0x0005b695) cale_week_time_pane_t2_ParamLimits

0x17fc,	// (0x0005b6cf) cale_week_time_pane_t3_ParamLimits

0x1836,	// (0x0005b709) cale_week_time_pane_t4_ParamLimits

0x1870,	// (0x0005b743) cale_week_time_pane_t5_ParamLimits

0x18aa,	// (0x0005b77d) cale_week_time_pane_t6_ParamLimits

0x18e4,	// (0x0005b7b7) cale_week_time_pane_t7_ParamLimits

0x191e,	// (0x0005b7f1) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000690af) cale_week_time_pane_t_ParamLimits

0x1958,	// (0x0005b82b) cell_cale_week_pane_g2_ParamLimits

0xa20e,	// (0x000640e1) bg_cale_side_pane_cp01_ParamLimits

0x29cc,	// (0x0005c89f) cale_month_week_pane_t1_ParamLimits

0x29e5,	// (0x0005c8b8) cale_month_week_pane_t2_ParamLimits

0x29fe,	// (0x0005c8d1) cale_month_week_pane_t3_ParamLimits

0x2a17,	// (0x0005c8ea) cale_month_week_pane_t4_ParamLimits

0x2a30,	// (0x0005c903) cale_month_week_pane_t5_ParamLimits

0x2a49,	// (0x0005c91c) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00069184) cale_month_week_pane_t_ParamLimits

0xa5f4,	// (0x000644c7) cell_cale_month_pane_g1_ParamLimits

0x9890,	// (0x00063763) main_cale_event_viewer_pane

0x9827,	// (0x000636fa) listscroll_cale_event_viewer_pane

0xe81b,	// (0x000686ee) list_cale_ev_pane

0xe823,	// (0x000686f6) scroll_pane_cp023

0x497e,	// (0x0005e851) field_cale_ev_pane_ParamLimits

0x497e,	// (0x0005e851) field_cale_ev_pane

0xe82f,	// (0x00068702) field_cale_ev_content_pane_ParamLimits

0xe82f,	// (0x00068702) field_cale_ev_content_pane

0xe83b,	// (0x0006870e) field_cale_ev_pane_g1_ParamLimits

0xe83b,	// (0x0006870e) field_cale_ev_pane_g1

0xe847,	// (0x0006871a) field_cale_ev_pane_g2_ParamLimits

0xe847,	// (0x0006871a) field_cale_ev_pane_g2

0xe85f,	// (0x00068732) field_cale_ev_pane_g3_ParamLimits

0xe85f,	// (0x00068732) field_cale_ev_pane_g3

0x0002,

0x03a7,	// (0x0005a27a) field_cale_ev_pane_g_ParamLimits

0x03a7,	// (0x0005a27a) field_cale_ev_pane_g

0xe877,	// (0x0006874a) field_cale_ev_pane_t1_ParamLimits

0xe877,	// (0x0006874a) field_cale_ev_pane_t1

0x4998,	// (0x0005e86b) field_cale_ev_content_pane_t1_ParamLimits

0x4998,	// (0x0005e86b) field_cale_ev_content_pane_t1

0xaea1,	// (0x00064d74) bg_button_pane_cp01

0x1398,	// (0x0005b26b) listscroll_cale_week_pane_ParamLimits

0xa1b9,	// (0x0006408c) popup_toolbar_window_cp01

0xa1df,	// (0x000640b2) listscroll_cale_week_pane_t1_ParamLimits

0x1398,	// (0x0005b26b) listscroll_cale_day_pane_ParamLimits

0xa1b9,	// (0x0006408c) popup_toolbar_window_cp02

0xa65f,	// (0x00064532) listscroll_cale_day_pane_t1_ParamLimits

0x3d96,	// (0x0005dc69) main_cale_month_pane_ParamLimits

0xba2e,	// (0x00065901) popup_toolbar_window_cp03_ParamLimits

0xba2e,	// (0x00065901) popup_toolbar_window_cp03

0x379f,	// (0x0005d672) main_image_pane_g2_ParamLimits

0x379f,	// (0x0005d672) main_image_pane_g2

0x37b0,	// (0x0005d683) main_image_pane_g3_ParamLimits

0x37b0,	// (0x0005d683) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000693b6) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000693b6) main_image_pane_g

0xaffd,	// (0x00064ed0) main_image_pane_t1_ParamLimits

0x37c1,	// (0x0005d694) main_image_pane_t2_ParamLimits

0x37c1,	// (0x0005d694) main_image_pane_t2

0x37d3,	// (0x0005d6a6) main_image_pane_t3_ParamLimits

0x37d3,	// (0x0005d6a6) main_image_pane_t3

0x37fb,	// (0x0005d6ce) main_image_pane_t4_ParamLimits

0x37fb,	// (0x0005d6ce) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000693bd) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000693bd) main_image_pane_t

0x381b,	// (0x0005d6ee) popup_image_details_window_cp01

0x3823,	// (0x0005d6f6) popup_toobar_trans_pane_cp01_ParamLimits

0x3823,	// (0x0005d6f6) popup_toobar_trans_pane_cp01

0x3e97,	// (0x0005dd6a) popup_image_details_window_ParamLimits

0x3e97,	// (0x0005dd6a) popup_image_details_window

0xba03,	// (0x000658d6) popup_image_focus_window

0x4268,	// (0x0005e13b) camera2_autofocus_pane_ParamLimits

0x4268,	// (0x0005e13b) camera2_autofocus_pane

0x9827,	// (0x000636fa) bg_popup_sub_pane_cp06

0xe88e,	// (0x00068761) popup_image_focus_window_g1

0xe896,	// (0x00068769) popup_image_focus_window_g2

0xe89e,	// (0x00068771) popup_image_focus_window_g3

0xe8a6,	// (0x00068779) popup_image_focus_window_g4

0x0003,

0x03ae,	// (0x0005a281) popup_image_focus_window_g

0xe8ae,	// (0x00068781) popup_image_focus_window_t1

0xe8bc,	// (0x0006878f) popup_image_focus_window_t2

0xe8cb,	// (0x0006879e) popup_image_focus_window_t3

0x0002,

0x03b7,	// (0x0005a28a) popup_image_focus_window_t

0xe8d9,	// (0x000687ac) camera2_autofocus_pane_g1

0xb9e5,	// (0x000658b8) bg_tb_trans_pane_cp01

0xe8e7,	// (0x000687ba) popup_image_details_window_g1

0xe8fa,	// (0x000687cd) popup_image_details_window_g2

0x0002,

0x03c9,	// (0x0005a29c) popup_image_details_window_g

0xe923,	// (0x000687f6) popup_image_details_window_t1

0xe935,	// (0x00068808) popup_image_details_window_t2

0xe94e,	// (0x00068821) popup_image_details_window_t3

0xe962,	// (0x00068835) popup_image_details_window_t4

0xe97d,	// (0x00068850) popup_image_details_window_t5

0x0004,

0x03d0,	// (0x0005a2a3) popup_image_details_window_t

0x9fbf,	// (0x00063e92) bg_calc_paper_pane_ParamLimits

0x9890,	// (0x00063763) grid_highlight_pane_cp013

0x9fd7,	// (0x00063eaa) list_calc_pane_ParamLimits

0x9fe9,	// (0x00063ebc) scroll_pane_cp024

0x9ff1,	// (0x00063ec4) bg_calc_display_pane_ParamLimits

0x9ffd,	// (0x00063ed0) calc_display_pane_t1_ParamLimits

0xa012,	// (0x00063ee5) calc_display_pane_t2_ParamLimits

0xa027,	// (0x00063efa) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00069020) calc_display_pane_t_ParamLimits

0x12a6,	// (0x0005b179) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006903d) cell_calc_pane_g

0x12af,	// (0x0005b182) cell_calc_pane_t1

0xa09e,	// (0x00063f71) grid_highlight_pane_cp02_ParamLimits

0xa0b4,	// (0x00063f87) toolbar_button_pane_cp01_ParamLimits

0xa0b4,	// (0x00063f87) toolbar_button_pane_cp01

0xb042,	// (0x00064f15) temp_image_control_pane_ParamLimits

0xb042,	// (0x00064f15) temp_image_control_pane

0x9882,	// (0x00063755) main_mp3_pane

0xe997,	// (0x0006886a) temp_image_control_pane_g1_ParamLimits

0xe997,	// (0x0006886a) temp_image_control_pane_g1

0xe9a5,	// (0x00068878) temp_image_control_pane_g2_ParamLimits

0xe9a5,	// (0x00068878) temp_image_control_pane_g2

0xe9b7,	// (0x0006888a) temp_image_control_pane_g3_ParamLimits

0xe9b7,	// (0x0006888a) temp_image_control_pane_g3

0x49e5,	// (0x0005e8b8) temp_image_control_pane_g4_ParamLimits

0x49e5,	// (0x0005e8b8) temp_image_control_pane_g4

0x0003,

0xf625,	// (0x000694f8) temp_image_control_pane_g_ParamLimits

0xf625,	// (0x000694f8) temp_image_control_pane_g

0xe997,	// (0x0006886a) main_mp3_pane_g1

0x49f6,	// (0x0005e8c9) main_mp3_pane_g2

0x0007,

0xf62e,	// (0x00069501) main_mp3_pane_g

0xe9fa,	// (0x000688cd) main_mp3_pane_t1

0xa2aa,	// (0x0006417d) main_camera_pane_g8_ParamLimits

0xa2aa,	// (0x0006417d) main_camera_pane_g8

0x1c01,	// (0x0005bad4) main_video_pane_g7_ParamLimits

0x1c01,	// (0x0005bad4) main_video_pane_g7

0xba7e,	// (0x00065951) main_camera2_pane_t7_ParamLimits

0xba7e,	// (0x00065951) main_camera2_pane_t7

0xa3ff,	// (0x000642d2) scroll_pane_cp025_ParamLimits

0xa3ff,	// (0x000642d2) scroll_pane_cp025

0xa413,	// (0x000642e6) scroll_pane_cp026_ParamLimits

0xa413,	// (0x000642e6) scroll_pane_cp026

0xa422,	// (0x000642f5) wml_content_pane_ParamLimits

0x9890,	// (0x00063763) main_touch_calib_pane

0x4ab8,	// (0x0005e98b) main_touch_calib_pane_g1

0x4aca,	// (0x0005e99d) main_touch_calib_pane_g2

0x4adc,	// (0x0005e9af) main_touch_calib_pane_g3

0x4aee,	// (0x0005e9c1) main_touch_calib_pane_g4

0x0003,

0xf64c,	// (0x0006951f) main_touch_calib_pane_g

0x4b00,	// (0x0005e9d3) main_touch_calib_pane_t1

0x4b18,	// (0x0005e9eb) main_touch_calib_pane_t2

0x0004,

0xf655,	// (0x00069528) main_touch_calib_pane_t

0xabf3,	// (0x00064ac6) mup_progress_pane_cp02

0xac28,	// (0x00064afb) navi_pane_g1

0xacb3,	// (0x00064b86) navi_pane_mp_t3

0x9882,	// (0x00063755) main_mp3_pane_ParamLimits

0x3ff0,	// (0x0005dec3) navi_pane_ParamLimits

0xe997,	// (0x0006886a) main_mp3_pane_g1_ParamLimits

0x49f6,	// (0x0005e8c9) main_mp3_pane_g2_ParamLimits

0x4a02,	// (0x0005e8d5) main_mp3_pane_g3_ParamLimits

0x4a02,	// (0x0005e8d5) main_mp3_pane_g3

0x4a0e,	// (0x0005e8e1) main_mp3_pane_g4_ParamLimits

0x4a0e,	// (0x0005e8e1) main_mp3_pane_g4

0xe9c7,	// (0x0006889a) main_mp3_pane_g5_ParamLimits

0xe9c7,	// (0x0006889a) main_mp3_pane_g5

0xe9d5,	// (0x000688a8) main_mp3_pane_g6_ParamLimits

0xe9d5,	// (0x000688a8) main_mp3_pane_g6

0xe9e2,	// (0x000688b5) main_mp3_pane_g7_ParamLimits

0xe9e2,	// (0x000688b5) main_mp3_pane_g7

0xe9ee,	// (0x000688c1) main_mp3_pane_g8_ParamLimits

0xe9ee,	// (0x000688c1) main_mp3_pane_g8

0xf62e,	// (0x00069501) main_mp3_pane_g_ParamLimits

0x4a1a,	// (0x0005e8ed) main_mp3_pane_t2

0x4a28,	// (0x0005e8fb) main_mp3_pane_t3

0xea08,	// (0x000688db) main_mp3_pane_t4

0xea16,	// (0x000688e9) main_mp3_pane_t5

0x0005,

0xf63f,	// (0x00069512) main_mp3_pane_t

0xea24,	// (0x000688f7) mup_progress_pane_cp01

0x9851,	// (0x00063724) aid_zoom_text_secondary2

0xe81b,	// (0x000686ee) list_cale_ev2_pane

0xe823,	// (0x000686f6) scroll_pane_cp023_ParamLimits

0x4b66,	// (0x0005ea39) field_cale_ev2_pane_ParamLimits

0x4b66,	// (0x0005ea39) field_cale_ev2_pane

0x4b7e,	// (0x0005ea51) field_cale_ev2_pane_g1_ParamLimits

0x4b7e,	// (0x0005ea51) field_cale_ev2_pane_g1

0x4b8a,	// (0x0005ea5d) field_cale_ev2_pane_g2_ParamLimits

0x4b8a,	// (0x0005ea5d) field_cale_ev2_pane_g2

0x4ba2,	// (0x0005ea75) field_cale_ev2_pane_g3_ParamLimits

0x4ba2,	// (0x0005ea75) field_cale_ev2_pane_g3

0x0003,

0xf660,	// (0x00069533) field_cale_ev2_pane_g_ParamLimits

0xf660,	// (0x00069533) field_cale_ev2_pane_g

0x4bc6,	// (0x0005ea99) field_cale_ev2_pane_t1_ParamLimits

0x4bc6,	// (0x0005ea99) field_cale_ev2_pane_t1

0x4bdd,	// (0x0005eab0) field_cale_ev2_pane_t2_ParamLimits

0x4bdd,	// (0x0005eab0) field_cale_ev2_pane_t2

0x0001,

0xf669,	// (0x0006953c) field_cale_ev2_pane_t_ParamLimits

0xf669,	// (0x0006953c) field_cale_ev2_pane_t

0x365a,	// (0x0005d52d) main_postcard_pane_g5_ParamLimits

0x365a,	// (0x0005d52d) main_postcard_pane_g5

0x366e,	// (0x0005d541) main_postcard_pane_g6_ParamLimits

0x366e,	// (0x0005d541) main_postcard_pane_g6

0x19e3,	// (0x0005b8b6) camera2_autofocus_pane_cp_ParamLimits

0x19e3,	// (0x0005b8b6) camera2_autofocus_pane_cp

0x9882,	// (0x00063755) main_mup3_pane

0x4c30,	// (0x0005eb03) main_mup3_pane_g1_ParamLimits

0x4c30,	// (0x0005eb03) main_mup3_pane_g1

0x4c52,	// (0x0005eb25) main_mup3_pane_g2_ParamLimits

0x4c52,	// (0x0005eb25) main_mup3_pane_g2

0x4cc5,	// (0x0005eb98) main_mup3_pane_g3_ParamLimits

0x4cc5,	// (0x0005eb98) main_mup3_pane_g3

0x4d03,	// (0x0005ebd6) main_mup3_pane_g4_ParamLimits

0x4d03,	// (0x0005ebd6) main_mup3_pane_g4

0x4d41,	// (0x0005ec14) main_mup3_pane_g5_ParamLimits

0x4d41,	// (0x0005ec14) main_mup3_pane_g5

0x4d7f,	// (0x0005ec52) main_mup3_pane_g6_ParamLimits

0x4d7f,	// (0x0005ec52) main_mup3_pane_g6

0xea2c,	// (0x000688ff) main_mup3_pane_g7_ParamLimits

0xea2c,	// (0x000688ff) main_mup3_pane_g7

0x0007,

0xf679,	// (0x0006954c) main_mup3_pane_g_ParamLimits

0xf679,	// (0x0006954c) main_mup3_pane_g

0x4df5,	// (0x0005ecc8) main_mup3_pane_t1_ParamLimits

0x4df5,	// (0x0005ecc8) main_mup3_pane_t1

0x4e5b,	// (0x0005ed2e) main_mup3_pane_t2_ParamLimits

0x4e5b,	// (0x0005ed2e) main_mup3_pane_t2

0x4f21,	// (0x0005edf4) main_mup3_pane_t4_ParamLimits

0x4f21,	// (0x0005edf4) main_mup3_pane_t4

0x4f6f,	// (0x0005ee42) main_mup3_pane_t5_ParamLimits

0x4f6f,	// (0x0005ee42) main_mup3_pane_t5

0x501d,	// (0x0005eef0) main_mup3_pane_t6_ParamLimits

0x501d,	// (0x0005eef0) main_mup3_pane_t6

0x0005,

0xf68a,	// (0x0006955d) main_mup3_pane_t_ParamLimits

0xf68a,	// (0x0006955d) main_mup3_pane_t

0x50d1,	// (0x0005efa4) mup3_progress_pane_ParamLimits

0x50d1,	// (0x0005efa4) mup3_progress_pane

0x514d,	// (0x0005f020) popup_mup3_control_window_ParamLimits

0x514d,	// (0x0005f020) popup_mup3_control_window

0xea3a,	// (0x0006890d) popup_mup3_text_window

0x517b,	// (0x0005f04e) mup3_progress_pane_t1

0x5199,	// (0x0005f06c) mup3_progress_pane_t2

0xea42,	// (0x00068915) mup3_progress_pane_t3

0x0002,

0xf697,	// (0x0006956a) mup3_progress_pane_t

0xea5f,	// (0x00068932) mup_progress_pane_cp03

0x9827,	// (0x000636fa) bg_tb_trans_pane_cp04

0x51b7,	// (0x0005f08a) mup3_volume_pane

0x51bf,	// (0x0005f092) popup_mup3_control_window_g1

0x51c8,	// (0x0005f09b) mup3_volume_pane_g1

0x51d1,	// (0x0005f0a4) mup3_volume_pane_g2

0x51da,	// (0x0005f0ad) mup3_volume_pane_g3

0x0002,

0xf69e,	// (0x00069571) mup3_volume_pane_g

0x9827,	// (0x000636fa) bg_tb_trans_pane_cp03

0xea6f,	// (0x00068942) popup_mup3_text_window_g1

0xea77,	// (0x0006894a) popup_mup3_text_window_t1

0xa075,	// (0x00063f48) list_calc_item_pane_g1_ParamLimits

0xe4eb,	// (0x000683be) mup_volume_pane_cp_g1

0x4b30,	// (0x0005ea03) main_touch_calib_pane_t3

0x4b42,	// (0x0005ea15) main_touch_calib_pane_t4

0x4b54,	// (0x0005ea27) main_touch_calib_pane_t5

0x9831,	// (0x00063704) aid_cell_size_toolbar2

0x9839,	// (0x0006370c) aid_popup3_width_pane

0x9841,	// (0x00063714) aid_zoom_text_msg_primary

0xa292,	// (0x00064165) vorec_t7

0xa039,	// (0x00063f0c) bg_calc_paper_pane_g1_ParamLimits

0xa045,	// (0x00063f18) bg_calc_paper_pane_g2_ParamLimits

0xa051,	// (0x00063f24) bg_calc_paper_pane_g3_ParamLimits

0xa05d,	// (0x00063f30) bg_calc_paper_pane_g4_ParamLimits

0xa069,	// (0x00063f3c) bg_calc_paper_pane_g5_ParamLimits

0x1240,	// (0x0005b113) bg_calc_paper_pane_g6_ParamLimits

0x124f,	// (0x0005b122) bg_calc_paper_pane_g7_ParamLimits

0x125e,	// (0x0005b131) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00069027) bg_calc_paper_pane_g_ParamLimits

0x126d,	// (0x0005b140) calc_bg_paper_pane_g9_ParamLimits

0x1b17,	// (0x0005b9ea) image_qvga_pane_ParamLimits

0x1b17,	// (0x0005b9ea) image_qvga_pane

0x9f06,	// (0x00063dd9) bg_popup_sub_pane_cp04_ParamLimits

0xaf79,	// (0x00064e4c) popup_mup_playback_window_g1_ParamLimits

0xaf85,	// (0x00064e58) popup_mup_playback_window_t1_ParamLimits

0xaf9a,	// (0x00064e6d) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000693b1) popup_mup_playback_window_t_ParamLimits

0x467f,	// (0x0005e552) main_mup2_pane_g3_ParamLimits

0x467f,	// (0x0005e552) main_mup2_pane_g3

0x1edb,	// (0x0005bdae) popup_toolbar_window_cp04

0xb37b,	// (0x0006524e) popup_call2_audio_second_window_g3_ParamLimits

0xb37b,	// (0x0006524e) popup_call2_audio_second_window_g3

0xb785,	// (0x00065658) popup_call2_audio_first_window_g4_ParamLimits

0xb785,	// (0x00065658) popup_call2_audio_first_window_g4

0xdfd9,	// (0x00067eac) popup_call2_audio_in_window_g4_ParamLimits

0xdfd9,	// (0x00067eac) popup_call2_audio_in_window_g4

0x3781,	// (0x0005d654) aid_area_sk_bg_cut_ParamLimits

0x3781,	// (0x0005d654) aid_area_sk_bg_cut

0xafaf,	// (0x00064e82) aid_area_sk_bg_cut_2_ParamLimits

0xafaf,	// (0x00064e82) aid_area_sk_bg_cut_2

0x4954,	// (0x0005e827) aid_placing_details_win

0x495c,	// (0x0005e82f) aid_placing_details_win_2

0xe8d9,	// (0x000687ac) camera2_autofocus_pane_g1_ParamLimits

0x0ea9,	// (0x0005ad7c) popup_fixed_preview_cale_window_ParamLimits

0x0ea9,	// (0x0005ad7c) popup_fixed_preview_cale_window

0xad32,	// (0x00064c05) navi_slider_pane_g3

0xad3b,	// (0x00064c0e) navi_slider_pane_g4

0xad44,	// (0x00064c17) navi_slider_pane_g5

0xad32,	// (0x00064c05) navi_slider_pane_g6

0xad4d,	// (0x00064c20) navi_slider_pane_g7

0xae6e,	// (0x00064d41) mup_scale_pane_g3

0xae77,	// (0x00064d4a) mup_scale_pane_g4

0xae80,	// (0x00064d53) mup_scale_pane_g5

0x347c,	// (0x0005d34f) mup_scale_pane_g6

0x3485,	// (0x0005d358) mup_scale_pane_g7

0xad32,	// (0x00064c05) cams2_slider_pane_g3

0xe575,	// (0x00068448) cams2_slider_pane_g4

0xbae4,	// (0x000659b7) cams2_slider_pane_g5

0xad32,	// (0x00064c05) cams2_slider_pane_g6

0xbaec,	// (0x000659bf) cams2_slider_pane_g7

0xe798,	// (0x0006866b) camera2_autofocus_pane_cp_g1

0xe37a,	// (0x0006824d) bg_popup_preview_window_pane_cp02_ParamLimits

0xe37a,	// (0x0006824d) bg_popup_preview_window_pane_cp02

0xea85,	// (0x00068958) list_fp_cale_pane_ParamLimits

0xea85,	// (0x00068958) list_fp_cale_pane

0xea91,	// (0x00068964) popup_fixed_preview_cale_window_t1_ParamLimits

0xea91,	// (0x00068964) popup_fixed_preview_cale_window_t1

0x51e3,	// (0x0005f0b6) popup_fixed_preview_cale_window_t2_ParamLimits

0x51e3,	// (0x0005f0b6) popup_fixed_preview_cale_window_t2

0x51f8,	// (0x0005f0cb) popup_fixed_preview_cale_window_t3_ParamLimits

0x51f8,	// (0x0005f0cb) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a5,	// (0x00069578) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a5,	// (0x00069578) popup_fixed_preview_cale_window_t

0x520d,	// (0x0005f0e0) list_single_fp_cale_pane_ParamLimits

0x520d,	// (0x0005f0e0) list_single_fp_cale_pane

0xeaaf,	// (0x00068982) list_single_fp_cale_pane_g1_ParamLimits

0xeaaf,	// (0x00068982) list_single_fp_cale_pane_g1

0xeabb,	// (0x0006898e) list_single_fp_cale_pane_g2_ParamLimits

0xeabb,	// (0x0006898e) list_single_fp_cale_pane_g2

0x0002,

0x0462,	// (0x0005a335) list_single_fp_cale_pane_g_ParamLimits

0x0462,	// (0x0005a335) list_single_fp_cale_pane_g

0xead4,	// (0x000689a7) list_single_fp_cale_pane_t1_ParamLimits

0xead4,	// (0x000689a7) list_single_fp_cale_pane_t1

0xeae6,	// (0x000689b9) list_single_fp_cale_pane_t2_ParamLimits

0xeae6,	// (0x000689b9) list_single_fp_cale_pane_t2

0x0001,

0x0469,	// (0x0005a33c) list_single_fp_cale_pane_t_ParamLimits

0x0469,	// (0x0005a33c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9890,	// (0x00063763) main_dialer_pane

0x5221,	// (0x0005f0f4) aid_cell_size_keypad

0x522b,	// (0x0005f0fe) dialer_ne_pane

0x5233,	// (0x0005f106) grid_dialer_command_1_pane

0x523b,	// (0x0005f10e) grid_dialer_command_2_pane

0x5243,	// (0x0005f116) grid_dialer_keypad_pane

0x5253,	// (0x0005f126) bg_popup_call_pane_cp06_ParamLimits

0x5253,	// (0x0005f126) bg_popup_call_pane_cp06

0x525f,	// (0x0005f132) dialer_ne_clear_pane_ParamLimits

0x525f,	// (0x0005f132) dialer_ne_clear_pane

0xeb19,	// (0x000689ec) dialer_ne_pane_g1

0xeb21,	// (0x000689f4) dialer_ne_pane_t1_ParamLimits

0xeb21,	// (0x000689f4) dialer_ne_pane_t1

0x526b,	// (0x0005f13e) dialer_ne_pane_t2_ParamLimits

0x526b,	// (0x0005f13e) dialer_ne_pane_t2

0x5295,	// (0x0005f168) dialer_ne_pane_t3_ParamLimits

0x5295,	// (0x0005f168) dialer_ne_pane_t3

0x0002,

0xf6ac,	// (0x0006957f) dialer_ne_pane_t_ParamLimits

0xf6ac,	// (0x0006957f) dialer_ne_pane_t

0x52c5,	// (0x0005f198) dialer_ne_pane_t3_copy1_ParamLimits

0x52c5,	// (0x0005f198) dialer_ne_pane_t3_copy1

0x52f4,	// (0x0005f1c7) cell_dialer_keypad_pane_ParamLimits

0x52f4,	// (0x0005f1c7) cell_dialer_keypad_pane

0x5309,	// (0x0005f1dc) cell_dialer_command_1_pane_ParamLimits

0x5309,	// (0x0005f1dc) cell_dialer_command_1_pane

0x531f,	// (0x0005f1f2) cell_dialer_command_2_pane_ParamLimits

0x531f,	// (0x0005f1f2) cell_dialer_command_2_pane

0xeb33,	// (0x00068a06) bg_button_pane_cp02_ParamLimits

0xeb33,	// (0x00068a06) bg_button_pane_cp02

0x532e,	// (0x0005f201) cell_dialer_keypad_pane_g1_ParamLimits

0x532e,	// (0x0005f201) cell_dialer_keypad_pane_g1

0xeb33,	// (0x00068a06) bg_button_pane_cp03_ParamLimits

0xeb33,	// (0x00068a06) bg_button_pane_cp03

0x5343,	// (0x0005f216) cell_dialer_command_1_pane_g1_ParamLimits

0x5343,	// (0x0005f216) cell_dialer_command_1_pane_g1

0xeb3f,	// (0x00068a12) bg_button_pane_cp04

0x5357,	// (0x0005f22a) cell_dialer_command_2_pane_g1

0xa260,	// (0x00064133) bg_button_pane_cp06

0xeb47,	// (0x00068a1a) dialer_ne_clear_pane_g1

0xac34,	// (0x00064b07) navi_pane_g2

0x3081,	// (0x0005cf54) navi_pane_g3

0x0002,

0xf3e1,	// (0x000692b4) navi_pane_g

0xacc1,	// (0x00064b94) navi_pane_mv_g2

0xace8,	// (0x00064bbb) navi_pane_mv_g5

0x309e,	// (0x0005cf71) navi_pane_mv_t1

0x9ff1,	// (0x00063ec4) main_clock2_pane

0x539c,	// (0x0005f26f) main_clock2_list_pane_ParamLimits

0x539c,	// (0x0005f26f) main_clock2_list_pane

0x53ce,	// (0x0005f2a1) main_clock2_pane_t1_ParamLimits

0x53ce,	// (0x0005f2a1) main_clock2_pane_t1

0x5408,	// (0x0005f2db) main_clock2_pane_t2_ParamLimits

0x5408,	// (0x0005f2db) main_clock2_pane_t2

0x0004,

0xf6b3,	// (0x00069586) main_clock2_pane_t_ParamLimits

0xf6b3,	// (0x00069586) main_clock2_pane_t

0x549c,	// (0x0005f36f) popup_clock_analogue_window_cp03_ParamLimits

0x549c,	// (0x0005f36f) popup_clock_analogue_window_cp03

0x54c1,	// (0x0005f394) popup_clock_digital_window_cp02_ParamLimits

0x54c1,	// (0x0005f394) popup_clock_digital_window_cp02

0x5532,	// (0x0005f405) main_clock2_list_single_pane_ParamLimits

0x5532,	// (0x0005f405) main_clock2_list_single_pane

0xa260,	// (0x00064133) list_highlight_pane_cp05

0xeb7f,	// (0x00068a52) main_clock2_list_single_pane_t1

0x1edb,	// (0x0005bdae) popup_toolbar_window_cp04_ParamLimits

0x49b5,	// (0x0005e888) camera2_autofocus_pane_g2_ParamLimits

0x49b5,	// (0x0005e888) camera2_autofocus_pane_g2

0x49c1,	// (0x0005e894) camera2_autofocus_pane_g3_ParamLimits

0x49c1,	// (0x0005e894) camera2_autofocus_pane_g3

0x49cd,	// (0x0005e8a0) camera2_autofocus_pane_g4_ParamLimits

0x49cd,	// (0x0005e8a0) camera2_autofocus_pane_g4

0x49d9,	// (0x0005e8ac) camera2_autofocus_pane_g5_ParamLimits

0x49d9,	// (0x0005e8ac) camera2_autofocus_pane_g5

0x0004,

0xf61a,	// (0x000694ed) camera2_autofocus_pane_g_ParamLimits

0xf61a,	// (0x000694ed) camera2_autofocus_pane_g

0x4bf2,	// (0x0005eac5) camera2_autofocus_pane_cp_g2

0x4bfa,	// (0x0005eacd) camera2_autofocus_pane_cp_g3

0x4c02,	// (0x0005ead5) camera2_autofocus_pane_cp_g4

0x4c0a,	// (0x0005eadd) camera2_autofocus_pane_cp_g5

0x0004,

0xf66e,	// (0x00069541) camera2_autofocus_pane_cp_g

0x524b,	// (0x0005f11e) popup_dialer_spcha_window

0x9827,	// (0x000636fa) bg_popup_sub_pane_cp07

0xeb8d,	// (0x00068a60) list_spcha_pane

0xeb95,	// (0x00068a68) list_single_spcha_pane_ParamLimits

0xeb95,	// (0x00068a68) list_single_spcha_pane

0x9827,	// (0x000636fa) list_highlight_pane_cp06

0xeba6,	// (0x00068a79) list_single_spcha_pane_t1

0xdd83,	// (0x00067c56) popup_call2_audio_out_window_g4_ParamLimits

0xdd83,	// (0x00067c56) popup_call2_audio_out_window_g4

0x9890,	// (0x00063763) main_imed2_pane

0xba0b,	// (0x000658de) popup_imed_adjust2_window

0x3ead,	// (0x0005dd80) popup_imed_trans_window_ParamLimits

0x3ead,	// (0x0005dd80) popup_imed_trans_window

0xe5dc,	// (0x000684af) popup_blid_sat_info2_window_t1

0xe5ea,	// (0x000684bd) popup_blid_sat_info2_window_t2

0x000a,

0x0353,	// (0x0005a226) popup_blid_sat_info2_window_t

0x55dc,	// (0x0005f4af) aid_size_cell_colour_35

0x55fc,	// (0x0005f4cf) aid_size_cell_colour_112

0x561c,	// (0x0005f4ef) aid_size_cell_effect

0xe386,	// (0x00068259) bg_tb_trans_pane_cp02

0xa768,	// (0x0006463b) heading_imed_pane

0x563c,	// (0x0005f50f) listscroll_imed_pane

0xebb4,	// (0x00068a87) heading_imed_pane_g1

0xebbc,	// (0x00068a8f) heading_imed_pane_t1

0xebca,	// (0x00068a9d) grid_imed_colour_35_pane_ParamLimits

0xebca,	// (0x00068a9d) grid_imed_colour_35_pane

0x5648,	// (0x0005f51b) grid_imed_effect_pane

0xebdd,	// (0x00068ab0) list_imed_aspect_pane

0x565b,	// (0x0005f52e) scroll_pane_cp027_ParamLimits

0x565b,	// (0x0005f52e) scroll_pane_cp027

0x5667,	// (0x0005f53a) cell_imed_effect_pane_ParamLimits

0x5667,	// (0x0005f53a) cell_imed_effect_pane

0xebe5,	// (0x00068ab8) cell_imed_colour_pane_ParamLimits

0xebe5,	// (0x00068ab8) cell_imed_colour_pane

0xec1f,	// (0x00068af2) cell_imed_colour_pane_g1_ParamLimits

0xec1f,	// (0x00068af2) cell_imed_colour_pane_g1

0xec30,	// (0x00068b03) hgihlgiht_grid_pane_cp016_ParamLimits

0xec30,	// (0x00068b03) hgihlgiht_grid_pane_cp016

0x568c,	// (0x0005f55f) cell_imed_effect_pane_g1

0x5694,	// (0x0005f567) grid_highlight_pane_cp017

0xec41,	// (0x00068b14) list_imed_single_pane_ParamLimits

0xec41,	// (0x00068b14) list_imed_single_pane

0x9827,	// (0x000636fa) list_highlight_pane_cp07

0xec54,	// (0x00068b27) list_imed_aspect_pane_comp1_t1

0xe386,	// (0x00068259) bg_tb_trans_pane_cp05

0xec74,	// (0x00068b47) popup_imed_adjust2_window_g1

0xec9b,	// (0x00068b6e) popup_imed_adjust2_window_t1

0xecb3,	// (0x00068b86) slider_imed_adjust_pane

0xecc7,	// (0x00068b9a) slider_imed_adjust_pane_g1

0xecd7,	// (0x00068baa) slider_imed_adjust_pane_g2

0xece7,	// (0x00068bba) slider_imed_adjust_pane_g3

0xecf8,	// (0x00068bcb) slider_imed_adjust_pane_g4

0x0003,

0x0497,	// (0x0005a36a) slider_imed_adjust_pane_g

0x569d,	// (0x0005f570) aid_size_cell_clipart2

0x56a9,	// (0x0005f57c) grid_imed_clipart_pane

0xed09,	// (0x00068bdc) scroll_pane_cp031

0x56b3,	// (0x0005f586) cell_imed_clipart_pane_ParamLimits

0x56b3,	// (0x0005f586) cell_imed_clipart_pane

0x56cb,	// (0x0005f59e) cell_imed_clipart_pane_g1

0x9827,	// (0x000636fa) grid_highlight_pane_cp014

0x53af,	// (0x0005f282) main_clock2_pane_g1_ParamLimits

0x53af,	// (0x0005f282) main_clock2_pane_g1

0x54dd,	// (0x0005f3b0) aid_call2_pane_cp10

0x54ef,	// (0x0005f3c2) aid_call_pane_cp10

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g1

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g2

0x5501,	// (0x0005f3d4) popup_clock_analogue_window_cp10_g3

0x5501,	// (0x0005f3d4) popup_clock_analogue_window_cp10_g4

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6be,	// (0x00069591) popup_clock_analogue_window_cp10_g

0x5513,	// (0x0005f3e6) popup_clock_analogue_window_cp10_t1

0x5544,	// (0x0005f417) clock_digital_number_pane_cp10_ParamLimits

0x5544,	// (0x0005f417) clock_digital_number_pane_cp10

0x555c,	// (0x0005f42f) clock_digital_number_pane_cp11_ParamLimits

0x555c,	// (0x0005f42f) clock_digital_number_pane_cp11

0x5574,	// (0x0005f447) clock_digital_number_pane_cp12_ParamLimits

0x5574,	// (0x0005f447) clock_digital_number_pane_cp12

0x558c,	// (0x0005f45f) clock_digital_number_pane_cp13_ParamLimits

0x558c,	// (0x0005f45f) clock_digital_number_pane_cp13

0x55a4,	// (0x0005f477) clock_digital_separator_pane_cp10_ParamLimits

0x55a4,	// (0x0005f477) clock_digital_separator_pane_cp10

0x55bc,	// (0x0005f48f) popup_clock_digital_window_cp02_t1_ParamLimits

0x55bc,	// (0x0005f48f) popup_clock_digital_window_cp02_t1

0x9efe,	// (0x00063dd1) clock_digital_number_pane_cp10_g1

0x9efe,	// (0x00063dd1) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c9,	// (0x0006959c) clock_digital_number_pane_cp10_g

0x9efe,	// (0x00063dd1) clock_digital_separator_pane_cp10_g1

0x9efe,	// (0x00063dd1) clock_digital_separator_pane_g2_cp10

0xacf0,	// (0x00064bc3) navi_pane_vded_g4

0xacf9,	// (0x00064bcc) navi_pane_vded_g5

0xad02,	// (0x00064bd5) navi_pane_vded_t1

0x9890,	// (0x00063763) main_vded_pane

0x56d4,	// (0x0005f5a7) main_vded_pane_g1

0x56de,	// (0x0005f5b1) main_vded_pane_g2

0x56e6,	// (0x0005f5b9) main_vded_pane_g3

0x0002,

0xf6ce,	// (0x000695a1) main_vded_pane_g

0x56ee,	// (0x0005f5c1) main_vded_pane_t1

0x56fc,	// (0x0005f5cf) main_vded_pane_t2

0x0001,

0xf6d5,	// (0x000695a8) main_vded_pane_t

0x570a,	// (0x0005f5dd) vded_slider_pane

0x5712,	// (0x0005f5e5) vded_video_pane

0xed11,	// (0x00068be4) vded_video_pane_g1

0x571a,	// (0x0005f5ed) vded_video_pane_g2

0xe798,	// (0x0006866b) vded_video_pane_g3

0x0002,

0xf6da,	// (0x000695ad) vded_video_pane_g

0xed1b,	// (0x00068bee) vded_slider_pane_g1

0xe4eb,	// (0x000683be) vded_slider_pane_g2

0xed24,	// (0x00068bf7) vded_slider_pane_g3

0xed2d,	// (0x00068c00) vded_slider_pane_g4

0xed36,	// (0x00068c09) vded_slider_pane_g5

0x0004,

0x04b8,	// (0x0005a38b) vded_slider_pane_g

0x5137,	// (0x0005f00a) mup3_rocker_pane_ParamLimits

0x5137,	// (0x0005f00a) mup3_rocker_pane

0x5723,	// (0x0005f5f6) mup3_control_keys_pane_g1

0x572b,	// (0x0005f5fe) mup3_control_keys_pane_g2

0x5733,	// (0x0005f606) mup3_control_keys_pane_g3

0x573b,	// (0x0005f60e) mup3_control_keys_pane_g4

0x0003,

0xf6e1,	// (0x000695b4) mup3_control_keys_pane_g

0x0edc,	// (0x0005adaf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0edc,	// (0x0005adaf) popup_toolbar2_fixed_window_cp01

0x5165,	// (0x0005f038) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5165,	// (0x0005f038) popup_toolbar2_fixed_window_cp02

0xb4ed,	// (0x000653c0) popup_call2_audio_second_window_t4_ParamLimits

0xb4ed,	// (0x000653c0) popup_call2_audio_second_window_t4

0xdbf0,	// (0x00067ac3) popup_call2_audio_first_window_t6_ParamLimits

0xdbf0,	// (0x00067ac3) popup_call2_audio_first_window_t6

0xde86,	// (0x00067d59) popup_call2_audio_out_window_t6_ParamLimits

0xde86,	// (0x00067d59) popup_call2_audio_out_window_t6

0x9890,	// (0x00063763) main_vitu_pane

0x574b,	// (0x0005f61e) aid_size_cell_itu_ParamLimits

0x574b,	// (0x0005f61e) aid_size_cell_itu

0xb9e5,	// (0x000658b8) bg_popup_window_pane_cp08_ParamLimits

0xb9e5,	// (0x000658b8) bg_popup_window_pane_cp08

0x5761,	// (0x0005f634) field_vitu_entry_pane_ParamLimits

0x5761,	// (0x0005f634) field_vitu_entry_pane

0x5774,	// (0x0005f647) grid_vitu_function_pane_ParamLimits

0x5774,	// (0x0005f647) grid_vitu_function_pane

0x5789,	// (0x0005f65c) grid_vitu_itu_pane_ParamLimits

0x5789,	// (0x0005f65c) grid_vitu_itu_pane

0x579f,	// (0x0005f672) cell_vitu_itu_pane_ParamLimits

0x579f,	// (0x0005f672) cell_vitu_itu_pane

0x57c1,	// (0x0005f694) cell_vitu_function_pane_ParamLimits

0x57c1,	// (0x0005f694) cell_vitu_function_pane

0xb9e5,	// (0x000658b8) bg_popup_sub_pane_cp08_ParamLimits

0xb9e5,	// (0x000658b8) bg_popup_sub_pane_cp08

0x57da,	// (0x0005f6ad) field_vitu_entry_pane_t1_ParamLimits

0x57da,	// (0x0005f6ad) field_vitu_entry_pane_t1

0xed57,	// (0x00068c2a) field_vitu_entry_pane_t2_ParamLimits

0xed57,	// (0x00068c2a) field_vitu_entry_pane_t2

0x0001,

0xf6ea,	// (0x000695bd) field_vitu_entry_pane_t_ParamLimits

0xf6ea,	// (0x000695bd) field_vitu_entry_pane_t

0xed74,	// (0x00068c47) bg_button_pane_cp05_ParamLimits

0xed74,	// (0x00068c47) bg_button_pane_cp05

0x57f6,	// (0x0005f6c9) cell_vitu_itu_pane_g1

0x580e,	// (0x0005f6e1) cell_vitu_itu_pane_t1_ParamLimits

0x580e,	// (0x0005f6e1) cell_vitu_itu_pane_t1

0x5820,	// (0x0005f6f3) cell_vitu_itu_pane_t2_ParamLimits

0x5820,	// (0x0005f6f3) cell_vitu_itu_pane_t2

0x0002,

0xf6ef,	// (0x000695c2) cell_vitu_itu_pane_t_ParamLimits

0xf6ef,	// (0x000695c2) cell_vitu_itu_pane_t

0xed82,	// (0x00068c55) bg_button_pane_cp07

0x5855,	// (0x0005f728) cell_vitu_function_pane_g1

0x9f8d,	// (0x00063e60) main_calc_pane_g1

0x0d40,	// (0x0005ac13) aid_visual_content_pane

0x9890,	// (0x00063763) main_vradio_pane

0x585e,	// (0x0005f731) main_vradio_pane_g1_ParamLimits

0x585e,	// (0x0005f731) main_vradio_pane_g1

0xed8c,	// (0x00068c5f) main_vradio_pane_g2_ParamLimits

0xed8c,	// (0x00068c5f) main_vradio_pane_g2

0x0001,

0xf6f6,	// (0x000695c9) main_vradio_pane_g_ParamLimits

0xf6f6,	// (0x000695c9) main_vradio_pane_g

0x5874,	// (0x0005f747) main_vradio_pane_t1_ParamLimits

0x5874,	// (0x0005f747) main_vradio_pane_t1

0x5889,	// (0x0005f75c) main_vradio_pane_t2_ParamLimits

0x5889,	// (0x0005f75c) main_vradio_pane_t2

0xed99,	// (0x00068c6c) main_vradio_pane_t3_ParamLimits

0xed99,	// (0x00068c6c) main_vradio_pane_t3

0x0002,

0xf6fb,	// (0x000695ce) main_vradio_pane_t_ParamLimits

0xf6fb,	// (0x000695ce) main_vradio_pane_t

0x589e,	// (0x0005f771) vradio_rocker_control_pane_ParamLimits

0x589e,	// (0x0005f771) vradio_rocker_control_pane

0x58b0,	// (0x0005f783) vradio_station_info_pane_ParamLimits

0x58b0,	// (0x0005f783) vradio_station_info_pane

0xedab,	// (0x00068c7e) vradio_frequency_info_pane_ParamLimits

0xedab,	// (0x00068c7e) vradio_frequency_info_pane

0xe798,	// (0x0006866b) vradio_station_info_pane_g1

0xedba,	// (0x00068c8d) vradio_station_info_pane_t1_ParamLimits

0xedba,	// (0x00068c8d) vradio_station_info_pane_t1

0xeddc,	// (0x00068caf) vradio_station_info_pane_t2_ParamLimits

0xeddc,	// (0x00068caf) vradio_station_info_pane_t2

0x0001,

0x04e9,	// (0x0005a3bc) vradio_station_info_pane_t_ParamLimits

0x04e9,	// (0x0005a3bc) vradio_station_info_pane_t

0xedee,	// (0x00068cc1) vradio_tuning_pane

0xedf6,	// (0x00068cc9) vradio_rocker_control_pane_g1

0xedfe,	// (0x00068cd1) vradio_rocker_control_pane_g2

0xee06,	// (0x00068cd9) vradio_rocker_control_pane_g3

0xee0e,	// (0x00068ce1) vradio_rocker_control_pane_g4

0xee16,	// (0x00068ce9) vradio_rocker_control_pane_g5

0x0004,

0x04ee,	// (0x0005a3c1) vradio_rocker_control_pane_g

0x58c0,	// (0x0005f793) vradio_frequency_info_pane_g1

0xee1e,	// (0x00068cf1) vradio_frequency_info_pane_t1_ParamLimits

0xee1e,	// (0x00068cf1) vradio_frequency_info_pane_t1

0x58ca,	// (0x0005f79d) vradio_tuning_pane_g1

0x58d3,	// (0x0005f7a6) vradio_tuning_pane_t1

0x9859,	// (0x0006372c) area_side_right_pane_ParamLimits

0x9859,	// (0x0006372c) area_side_right_pane

0xe341,	// (0x00068214) status_small_pane_g1

0xe349,	// (0x0006821c) status_small_pane_g2

0xe352,	// (0x00068225) status_small_pane_g3

0xe35b,	// (0x0006822e) status_small_pane_g4

0x0003,

0x02a9,	// (0x0005a17c) status_small_pane_g

0xe364,	// (0x00068237) status_small_pane_t1

0x9890,	// (0x00063763) main_video3_pane

0xee32,	// (0x00068d05) cams_zoom_vslider_pane

0xee3a,	// (0x00068d0d) image3_wide_pane_ParamLimits

0xee3a,	// (0x00068d0d) image3_wide_pane

0xee54,	// (0x00068d27) image3_wide_small_pane

0xee5e,	// (0x00068d31) main_video3_pane_g1_ParamLimits

0xee5e,	// (0x00068d31) main_video3_pane_g1

0xee7a,	// (0x00068d4d) main_video3_pane_g2_ParamLimits

0xee7a,	// (0x00068d4d) main_video3_pane_g2

0x0001,

0x04f9,	// (0x0005a3cc) main_video3_pane_g_ParamLimits

0x04f9,	// (0x0005a3cc) main_video3_pane_g

0xee96,	// (0x00068d69) main_video3_pane_t1_ParamLimits

0xee96,	// (0x00068d69) main_video3_pane_t1

0xeec1,	// (0x00068d94) main_video3_pane_t2_ParamLimits

0xeec1,	// (0x00068d94) main_video3_pane_t2

0xeeec,	// (0x00068dbf) main_video3_pane_t3_ParamLimits

0xeeec,	// (0x00068dbf) main_video3_pane_t3

0x0002,

0x04fe,	// (0x0005a3d1) main_video3_pane_t_ParamLimits

0x04fe,	// (0x0005a3d1) main_video3_pane_t

0xef17,	// (0x00068dea) cams_zoom_vslider_pane_g1

0xef20,	// (0x00068df3) cams_zoom_vslider_pane_g2

0x0001,

0x0505,	// (0x0005a3d8) cams_zoom_vslider_pane_g

0xef28,	// (0x00068dfb) small_slider_vertical_pane

0xe798,	// (0x0006866b) small_slider_vertical_pane_g1

0xe798,	// (0x0006866b) small_slider_vertical_pane_g2

0xef30,	// (0x00068e03) small_slider_vertical_pane_g3

0x0002,

0x050a,	// (0x0005a3dd) small_slider_vertical_pane_g

0x9890,	// (0x00063763) main_hwr_training_pane

0xef39,	// (0x00068e0c) hwr_training_instruct_pane_ParamLimits

0xef39,	// (0x00068e0c) hwr_training_instruct_pane

0x58e2,	// (0x0005f7b5) hwr_training_navi_pane_ParamLimits

0x58e2,	// (0x0005f7b5) hwr_training_navi_pane

0x58f9,	// (0x0005f7cc) hwr_training_write_pane_ParamLimits

0x58f9,	// (0x0005f7cc) hwr_training_write_pane

0x9827,	// (0x000636fa) bg_frame_shadow_pane

0xef68,	// (0x00068e3b) hwr_training_write_pane_g1

0xef70,	// (0x00068e43) hwr_training_write_pane_g2

0xef78,	// (0x00068e4b) hwr_training_write_pane_g3

0xef80,	// (0x00068e53) hwr_training_write_pane_g4

0xef88,	// (0x00068e5b) hwr_training_write_pane_g5

0xef90,	// (0x00068e63) hwr_training_write_pane_g6

0xef98,	// (0x00068e6b) hwr_training_write_pane_g7

0x0006,

0x0511,	// (0x0005a3e4) hwr_training_write_pane_g

0xd6c0,	// (0x00067593) hwr_training_navi_pane_g1_ParamLimits

0xd6c0,	// (0x00067593) hwr_training_navi_pane_g1

0xd6d2,	// (0x000675a5) hwr_training_navi_pane_g2_ParamLimits

0xd6d2,	// (0x000675a5) hwr_training_navi_pane_g2

0xd6e4,	// (0x000675b7) hwr_training_navi_pane_g3_ParamLimits

0xd6e4,	// (0x000675b7) hwr_training_navi_pane_g3

0xd6f4,	// (0x000675c7) hwr_training_navi_pane_g4_ParamLimits

0xd6f4,	// (0x000675c7) hwr_training_navi_pane_g4

0x0004,

0xf702,	// (0x000695d5) hwr_training_navi_pane_g_ParamLimits

0xf702,	// (0x000695d5) hwr_training_navi_pane_g

0xd701,	// (0x000675d4) hwr_training_navi_pane_t1

0x5939,	// (0x0005f80c) list_single_hwr_training_instruct_pane_ParamLimits

0x5939,	// (0x0005f80c) list_single_hwr_training_instruct_pane

0xefa0,	// (0x00068e73) list_single_hwr_training_instruct_pane_t1

0xe6d8,	// (0x000685ab) bg_frame_shadow_pane_g1

0xefaf,	// (0x00068e82) bg_frame_shadow_pane_g2

0xefb7,	// (0x00068e8a) bg_frame_shadow_pane_g3

0xefbf,	// (0x00068e92) bg_frame_shadow_pane_g4

0xefc7,	// (0x00068e9a) bg_frame_shadow_pane_g5

0xefcf,	// (0x00068ea2) bg_frame_shadow_pane_g6

0xefd7,	// (0x00068eaa) bg_frame_shadow_pane_g7

0xa114,	// (0x00063fe7) bg_frame_shadow_pane_g8

0x0007,

0xf70d,	// (0x000695e0) bg_frame_shadow_pane_g

0x9890,	// (0x00063763) main_video_tele_dialer_pane

0x5951,	// (0x0005f824) aid_size_cell_video_keypad_ParamLimits

0x5951,	// (0x0005f824) aid_size_cell_video_keypad

0x596b,	// (0x0005f83e) grid_video_dialer_keypad_pane_ParamLimits

0x596b,	// (0x0005f83e) grid_video_dialer_keypad_pane

0x59ad,	// (0x0005f880) video_down_pane_cp_ParamLimits

0x59ad,	// (0x0005f880) video_down_pane_cp

0x59dd,	// (0x0005f8b0) cell_video_dialer_keypad_pane_ParamLimits

0x59dd,	// (0x0005f8b0) cell_video_dialer_keypad_pane

0xefdf,	// (0x00068eb2) bg_button_pane_cp08_ParamLimits

0xefdf,	// (0x00068eb2) bg_button_pane_cp08

0x59ff,	// (0x0005f8d2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x59ff,	// (0x0005f8d2) cell_video_dialer_keypad_pane_g1

0x5121,	// (0x0005eff4) mup3_rocker2_pane_ParamLimits

0x5121,	// (0x0005eff4) mup3_rocker2_pane

0xe798,	// (0x0006866b) mup3_rocker2_pane_g1

0x3da6,	// (0x0005dc79) main_dialer2_pane

0x9890,	// (0x00063763) main_mp4_pane

0xd71f,	// (0x000675f2) main_mp4_pane_g1_ParamLimits

0xd71f,	// (0x000675f2) main_mp4_pane_g1

0xd71f,	// (0x000675f2) main_mp4_pane_g2_ParamLimits

0xd71f,	// (0x000675f2) main_mp4_pane_g2

0x5a3a,	// (0x0005f90d) main_mp4_pane_g3_ParamLimits

0x5a3a,	// (0x0005f90d) main_mp4_pane_g3

0xd72d,	// (0x00067600) main_mp4_pane_g4_ParamLimits

0xd72d,	// (0x00067600) main_mp4_pane_g4

0xd75b,	// (0x0006762e) main_mp4_pane_g5_ParamLimits

0xd75b,	// (0x0006762e) main_mp4_pane_g5

0x0007,

0xf72d,	// (0x00069600) main_mp4_pane_g_ParamLimits

0xf72d,	// (0x00069600) main_mp4_pane_g

0xd7cf,	// (0x000676a2) main_mp4_pane_t1_ParamLimits

0xd7cf,	// (0x000676a2) main_mp4_pane_t1

0xd827,	// (0x000676fa) main_mp4_pane_t2_ParamLimits

0xd827,	// (0x000676fa) main_mp4_pane_t2

0xefeb,	// (0x00068ebe) main_mp4_pane_t3_ParamLimits

0xefeb,	// (0x00068ebe) main_mp4_pane_t3

0xd879,	// (0x0006774c) main_mp4_pane_t4_ParamLimits

0xd879,	// (0x0006774c) main_mp4_pane_t4

0x0003,

0xf73e,	// (0x00069611) main_mp4_pane_t_ParamLimits

0xf73e,	// (0x00069611) main_mp4_pane_t

0xd8b9,	// (0x0006778c) mp4_progress_pane_ParamLimits

0xd8b9,	// (0x0006778c) mp4_progress_pane

0xd8fd,	// (0x000677d0) mp4_rocker_pane_ParamLimits

0xd8fd,	// (0x000677d0) mp4_rocker_pane

0xf019,	// (0x00068eec) mp4_progress_pane_t1

0xf030,	// (0x00068f03) mp4_progress_pane_t2

0x0001,

0x0565,	// (0x0005a438) mp4_progress_pane_t

0xf047,	// (0x00068f1a) mup_progress_pane_cp04

0xf053,	// (0x00068f26) mp4_rocker_pane_g1

0x5a6a,	// (0x0005f93d) aid_cell_size_keypad2_ParamLimits

0x5a6a,	// (0x0005f93d) aid_cell_size_keypad2

0x5a84,	// (0x0005f957) dialer2_ne_pane_ParamLimits

0x5a84,	// (0x0005f957) dialer2_ne_pane

0x5a99,	// (0x0005f96c) grid_dialer2_keypad_pane_ParamLimits

0x5a99,	// (0x0005f96c) grid_dialer2_keypad_pane

0xe585,	// (0x00068458) bg_popup_call_pane_cp07_ParamLimits

0xe585,	// (0x00068458) bg_popup_call_pane_cp07

0x5aaf,	// (0x0005f982) dialer2_ne_pane_t1_ParamLimits

0x5aaf,	// (0x0005f982) dialer2_ne_pane_t1

0x5aec,	// (0x0005f9bf) cell_dialer2_keypad_pane_ParamLimits

0x5aec,	// (0x0005f9bf) cell_dialer2_keypad_pane

0xf06f,	// (0x00068f42) bg_button_pane_pane_cp04_ParamLimits

0xf06f,	// (0x00068f42) bg_button_pane_pane_cp04

0x5b0e,	// (0x0005f9e1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5b0e,	// (0x0005f9e1) cell_dialer2_keypad_pane_g1

0x1dc9,	// (0x0005bc9c) aid_placing_vt_set_content_ParamLimits

0x1dc9,	// (0x0005bc9c) aid_placing_vt_set_content

0x1deb,	// (0x0005bcbe) aid_placing_vt_set_title_ParamLimits

0x1deb,	// (0x0005bcbe) aid_placing_vt_set_title

0x9890,	// (0x00063763) main_image3_pane

0x5b9d,	// (0x0005fa70) area_side_right_pane_cp01_ParamLimits

0x5b9d,	// (0x0005fa70) area_side_right_pane_cp01

0xd71f,	// (0x000675f2) main_image3_pane_g1_ParamLimits

0xd71f,	// (0x000675f2) main_image3_pane_g1

0x5bb4,	// (0x0005fa87) main_image3_pane_g2_ParamLimits

0x5bb4,	// (0x0005fa87) main_image3_pane_g2

0x5bda,	// (0x0005faad) main_image3_pane_g3_ParamLimits

0x5bda,	// (0x0005faad) main_image3_pane_g3

0x5c00,	// (0x0005fad3) main_image3_pane_g4_ParamLimits

0x5c00,	// (0x0005fad3) main_image3_pane_g4

0x0003,

0xf751,	// (0x00069624) main_image3_pane_g_ParamLimits

0xf751,	// (0x00069624) main_image3_pane_g

0x5c26,	// (0x0005faf9) main_image3_pane_t1_ParamLimits

0x5c26,	// (0x0005faf9) main_image3_pane_t1

0x5c7e,	// (0x0005fb51) main_image3_pane_t2_ParamLimits

0x5c7e,	// (0x0005fb51) main_image3_pane_t2

0x5cd0,	// (0x0005fba3) main_image3_pane_t3_ParamLimits

0x5cd0,	// (0x0005fba3) main_image3_pane_t3

0x0003,

0xf75a,	// (0x0006962d) main_image3_pane_t_ParamLimits

0xf75a,	// (0x0006962d) main_image3_pane_t

0xb9e5,	// (0x000658b8) grid_sctrl_middle_pane_cp01_ParamLimits

0xb9e5,	// (0x000658b8) grid_sctrl_middle_pane_cp01

0x5d50,	// (0x0005fc23) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d50,	// (0x0005fc23) cell_sctrl_middle_pane_cp01

0x5d6d,	// (0x0005fc40) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d6d,	// (0x0005fc40) cell_sctrl_middle_pane_cp01_g1

0x9890,	// (0x00063763) main_call4_pane

0x5d83,	// (0x0005fc56) aid_size_button_call4_ParamLimits

0x5d83,	// (0x0005fc56) aid_size_button_call4

0x5db0,	// (0x0005fc83) call4_windows_pane_ParamLimits

0x5db0,	// (0x0005fc83) call4_windows_pane

0x5dc6,	// (0x0005fc99) grid_call4_button_pane_ParamLimits

0x5dc6,	// (0x0005fc99) grid_call4_button_pane

0xf093,	// (0x00068f66) call4_windows_conf_pane

0x5ded,	// (0x0005fcc0) popup_call4_audio_first_window_ParamLimits

0x5ded,	// (0x0005fcc0) popup_call4_audio_first_window

0x5e0d,	// (0x0005fce0) popup_call4_audio_second_window_ParamLimits

0x5e0d,	// (0x0005fce0) popup_call4_audio_second_window

0x5e1f,	// (0x0005fcf2) popup_call4_audio_wait_window_ParamLimits

0x5e1f,	// (0x0005fcf2) popup_call4_audio_wait_window

0x5e2b,	// (0x0005fcfe) cell_call4_button_pane_ParamLimits

0x5e2b,	// (0x0005fcfe) cell_call4_button_pane

0x5e50,	// (0x0005fd23) bg_button_pane_cp09_ParamLimits

0x5e50,	// (0x0005fd23) bg_button_pane_cp09

0x5e5c,	// (0x0005fd2f) cell_call4_button_pane_g1_ParamLimits

0x5e5c,	// (0x0005fd2f) cell_call4_button_pane_g1

0x5e82,	// (0x0005fd55) cell_call4_button_pane_t1_ParamLimits

0x5e82,	// (0x0005fd55) cell_call4_button_pane_t1

0x5eb4,	// (0x0005fd87) popup_call4_audio_conf_window_ParamLimits

0x5eb4,	// (0x0005fd87) popup_call4_audio_conf_window

0x517b,	// (0x0005f04e) mup3_progress_pane_t1_ParamLimits

0x5199,	// (0x0005f06c) mup3_progress_pane_t2_ParamLimits

0xea42,	// (0x00068915) mup3_progress_pane_t3_ParamLimits

0xf697,	// (0x0006956a) mup3_progress_pane_t_ParamLimits

0xea5f,	// (0x00068932) mup_progress_pane_cp03_ParamLimits

0x5743,	// (0x0005f616) mup3_control_keys_pane_g4_copy1

0xd8e7,	// (0x000677ba) mp4_rocker2_pane_ParamLimits

0xd8e7,	// (0x000677ba) mp4_rocker2_pane

0x5ec8,	// (0x0005fd9b) mp4_rocker2_pane_g1

0x5ed0,	// (0x0005fda3) mp4_rocker2_pane_g2

0xd97f,	// (0x00067852) mp4_rocker2_pane_g3

0xd987,	// (0x0006785a) mp4_rocker2_pane_g4

0xd98f,	// (0x00067862) mp4_rocker2_pane_g5

0x0004,

0xf763,	// (0x00069636) mp4_rocker2_pane_g

0x9890,	// (0x00063763) main_camera4_pane

0x9890,	// (0x00063763) main_video4_pane

0x597f,	// (0x0005f852) main_video_tele_dialer_pane_t1_ParamLimits

0x597f,	// (0x0005f852) main_video_tele_dialer_pane_t1

0x5996,	// (0x0005f869) main_video_tele_dialer_pane_t2_ParamLimits

0x5996,	// (0x0005f869) main_video_tele_dialer_pane_t2

0x0001,

0xf71e,	// (0x000695f1) main_video_tele_dialer_pane_t_ParamLimits

0xf71e,	// (0x000695f1) main_video_tele_dialer_pane_t

0x5eec,	// (0x0005fdbf) cam4_autofocus_pane_ParamLimits

0x5eec,	// (0x0005fdbf) cam4_autofocus_pane

0x5f00,	// (0x0005fdd3) cam4_image_uncrop_pane_ParamLimits

0x5f00,	// (0x0005fdd3) cam4_image_uncrop_pane

0x5f17,	// (0x0005fdea) cam4_indicators_pane_ParamLimits

0x5f17,	// (0x0005fdea) cam4_indicators_pane

0x5f3b,	// (0x0005fe0e) main_camera4_pane_g1_ParamLimits

0x5f3b,	// (0x0005fe0e) main_camera4_pane_g1

0x5f47,	// (0x0005fe1a) main_camera4_pane_g2_ParamLimits

0x5f47,	// (0x0005fe1a) main_camera4_pane_g2

0x5f47,	// (0x0005fe1a) main_camera4_pane_g3_ParamLimits

0x5f47,	// (0x0005fe1a) main_camera4_pane_g3

0x5f53,	// (0x0005fe26) main_camera4_pane_g4_ParamLimits

0x5f53,	// (0x0005fe26) main_camera4_pane_g4

0x5f5f,	// (0x0005fe32) main_camera4_pane_g5_ParamLimits

0x5f5f,	// (0x0005fe32) main_camera4_pane_g5

0x0005,

0xf76e,	// (0x00069641) main_camera4_pane_g_ParamLimits

0xf76e,	// (0x00069641) main_camera4_pane_g

0x5f7c,	// (0x0005fe4f) main_camera4_pane_t1_ParamLimits

0x5f7c,	// (0x0005fe4f) main_camera4_pane_t1

0xd9b1,	// (0x00067884) bg_tb_trans_pane_cp06

0xd9c7,	// (0x0006789a) cam4_indicators_pane_g1

0xd9d7,	// (0x000678aa) cam4_indicators_pane_g2

0x0002,

0xf789,	// (0x0006965c) cam4_indicators_pane_g

0xd9f7,	// (0x000678ca) cam4_indicators_pane_t1

0x5fe3,	// (0x0005feb6) main_video4_pane_g1_ParamLimits

0x5fe3,	// (0x0005feb6) main_video4_pane_g1

0x5ff5,	// (0x0005fec8) main_video4_pane_g2_ParamLimits

0x5ff5,	// (0x0005fec8) main_video4_pane_g2

0x5ff5,	// (0x0005fec8) main_video4_pane_g3_ParamLimits

0x5ff5,	// (0x0005fec8) main_video4_pane_g3

0x6004,	// (0x0005fed7) main_video4_pane_g4_ParamLimits

0x6004,	// (0x0005fed7) main_video4_pane_g4

0x0004,

0xf790,	// (0x00069663) main_video4_pane_g_ParamLimits

0xf790,	// (0x00069663) main_video4_pane_g

0x6022,	// (0x0005fef5) vid4_indicators_pane_ParamLimits

0x6022,	// (0x0005fef5) vid4_indicators_pane

0x604a,	// (0x0005ff1d) video4_image_uncrop_cif_pane_ParamLimits

0x604a,	// (0x0005ff1d) video4_image_uncrop_cif_pane

0x6062,	// (0x0005ff35) video4_image_uncrop_nhd_pane_ParamLimits

0x6062,	// (0x0005ff35) video4_image_uncrop_nhd_pane

0x6076,	// (0x0005ff49) video4_image_uncrop_vga_pane_ParamLimits

0x6076,	// (0x0005ff49) video4_image_uncrop_vga_pane

0x9882,	// (0x00063755) bg_tb_trans_pane_cp07

0xd9c7,	// (0x0006789a) vid4_indicators_pane_g1

0xda19,	// (0x000678ec) vid4_indicators_pane_g2

0xda29,	// (0x000678fc) vid4_indicators_pane_g3

0x0004,

0xf79b,	// (0x0006966e) vid4_indicators_pane_g

0xda56,	// (0x00067929) vid4_indicators_pane_t1

0x608e,	// (0x0005ff61) cam4_autofocus_pane_g1

0x6096,	// (0x0005ff69) cam4_autofocus_pane_g2

0x609e,	// (0x0005ff71) cam4_autofocus_pane_g3

0x0002,

0xf7a6,	// (0x00069679) cam4_autofocus_pane_g

0x60a6,	// (0x0005ff79) cam4_autofocus_pane_g3_copy1

0x59c1,	// (0x0005f894) video_down_pane_cp_t1

0x59cf,	// (0x0005f8a2) video_down_pane_cp_t2

0x0001,

0xf723,	// (0x000695f6) video_down_pane_cp_t

0x9882,	// (0x00063755) popup_vitu2_window_ParamLimits

0x9882,	// (0x00063755) popup_vitu2_window

0x60ae,	// (0x0005ff81) aid_size_cell2_itu2_ParamLimits

0x60ae,	// (0x0005ff81) aid_size_cell2_itu2

0x60d4,	// (0x0005ffa7) aid_size_cell_itu2_ParamLimits

0x60d4,	// (0x0005ffa7) aid_size_cell_itu2

0x6125,	// (0x0005fff8) bg_popup_window_pane_cp09_ParamLimits

0x6125,	// (0x0005fff8) bg_popup_window_pane_cp09

0x6133,	// (0x00060006) field_vitu2_entry_pane_ParamLimits

0x6133,	// (0x00060006) field_vitu2_entry_pane

0x614a,	// (0x0006001d) grid_vitu2_function_pane_ParamLimits

0x614a,	// (0x0006001d) grid_vitu2_function_pane

0x617f,	// (0x00060052) grid_vitu2_itu_pane_ParamLimits

0x617f,	// (0x00060052) grid_vitu2_itu_pane

0x61e6,	// (0x000600b9) cell_vitu2_itu_pane_ParamLimits

0x61e6,	// (0x000600b9) cell_vitu2_itu_pane

0x620e,	// (0x000600e1) cell_vitu2_function_pane_ParamLimits

0x620e,	// (0x000600e1) cell_vitu2_function_pane

0x624d,	// (0x00060120) bg_popup_call_pane_cp08_ParamLimits

0x624d,	// (0x00060120) bg_popup_call_pane_cp08

0x6264,	// (0x00060137) field_vitu2_entry_pane_g1

0x6270,	// (0x00060143) field_vitu2_entry_pane_g2

0x0002,

0xf7ad,	// (0x00069680) field_vitu2_entry_pane_g

0x628a,	// (0x0006015d) field_vitu2_entry_pane_t1_ParamLimits

0x628a,	// (0x0006015d) field_vitu2_entry_pane_t1

0x62b8,	// (0x0006018b) field_vitu2_entry_pane_t2_ParamLimits

0x62b8,	// (0x0006018b) field_vitu2_entry_pane_t2

0x0001,

0xf7b4,	// (0x00069687) field_vitu2_entry_pane_t_ParamLimits

0xf7b4,	// (0x00069687) field_vitu2_entry_pane_t

0x62dd,	// (0x000601b0) bg_button_pane_cp010_ParamLimits

0x62dd,	// (0x000601b0) bg_button_pane_cp010

0xda70,	// (0x00067943) cell_vitu2_itu_pane_g1

0x62f9,	// (0x000601cc) cell_vitu2_itu_pane_t1_ParamLimits

0x62f9,	// (0x000601cc) cell_vitu2_itu_pane_t1

0x0c1c,	// (0x0005aaef) cell_vitu2_itu_pane_t2_ParamLimits

0x0c1c,	// (0x0005aaef) cell_vitu2_itu_pane_t2

0x0002,

0xf7be,	// (0x00069691) cell_vitu2_itu_pane_t_ParamLimits

0xf7be,	// (0x00069691) cell_vitu2_itu_pane_t

0x9882,	// (0x00063755) bg_button_pane_cp011

0x6357,	// (0x0006022a) cell_vitu2_function_pane_g1

0x9890,	// (0x00063763) main_myfav_hc_pane

0x5d1c,	// (0x0005fbef) popup_image3_note_pane_ParamLimits

0x5d1c,	// (0x0005fbef) popup_image3_note_pane

0x5d36,	// (0x0005fc09) popup_image3_tool_bar_pane_ParamLimits

0x5d36,	// (0x0005fc09) popup_image3_tool_bar_pane

0x0caa,	// (0x0005ab7d) cell_vitu2_itu_pane_t3_ParamLimits

0x0caa,	// (0x0005ab7d) cell_vitu2_itu_pane_t3

0x9827,	// (0x000636fa) bg_popup_trans_pane

0x636a,	// (0x0006023d) grid_image3_tool_bar_pane

0x6374,	// (0x00060247) bg_popup_trans_pane_g1

0xa508,	// (0x000643db) bg_popup_trans_pane_g2

0x637c,	// (0x0006024f) bg_popup_trans_pane_g3

0x6384,	// (0x00060257) bg_popup_trans_pane_g4

0x638c,	// (0x0006025f) bg_popup_trans_pane_g5

0x6394,	// (0x00060267) bg_popup_trans_pane_g6

0x639c,	// (0x0006026f) bg_popup_trans_pane_g7

0x63a4,	// (0x00060277) bg_popup_trans_pane_g8

0xa4e8,	// (0x000643bb) bg_popup_trans_pane_g9

0x0008,

0xf7c5,	// (0x00069698) bg_popup_trans_pane_g

0x63ac,	// (0x0006027f) cell_image3_tool_bar_pane_ParamLimits

0x63ac,	// (0x0006027f) cell_image3_tool_bar_pane

0xe798,	// (0x0006866b) cell_image3_tool_bar_pane_g1

0x9827,	// (0x000636fa) bg_popup_trans_pane_cp1

0x63c0,	// (0x00060293) popup_image3_note_pane_t1

0x63ce,	// (0x000602a1) popup_image3_note_pane_t2

0x63dc,	// (0x000602af) popup_image3_note_pane_t3

0x0002,

0xf7d8,	// (0x000696ab) popup_image3_note_pane_t

0x63ea,	// (0x000602bd) popup_image3_note_pane_t3_copy1

0x63f8,	// (0x000602cb) bg_myfav_hc_instruction_pane_ParamLimits

0x63f8,	// (0x000602cb) bg_myfav_hc_instruction_pane

0x640a,	// (0x000602dd) cell_myfav_contact_pane_ParamLimits

0x640a,	// (0x000602dd) cell_myfav_contact_pane

0x6424,	// (0x000602f7) cell_myfav_contact_pane_cp1_ParamLimits

0x6424,	// (0x000602f7) cell_myfav_contact_pane_cp1

0x643a,	// (0x0006030d) cell_myfav_contact_pane_cp2_ParamLimits

0x643a,	// (0x0006030d) cell_myfav_contact_pane_cp2

0x6450,	// (0x00060323) cell_myfav_contact_pane_cp3_ParamLimits

0x6450,	// (0x00060323) cell_myfav_contact_pane_cp3

0x6465,	// (0x00060338) cell_myfav_contact_pane_cp4_ParamLimits

0x6465,	// (0x00060338) cell_myfav_contact_pane_cp4

0x6479,	// (0x0006034c) cell_myfav_contact_pane_cp5_ParamLimits

0x6479,	// (0x0006034c) cell_myfav_contact_pane_cp5

0x648d,	// (0x00060360) cell_myfav_contact_pane_cp6_ParamLimits

0x648d,	// (0x00060360) cell_myfav_contact_pane_cp6

0x64a1,	// (0x00060374) cell_myfav_contact_pane_cp7_ParamLimits

0x64a1,	// (0x00060374) cell_myfav_contact_pane_cp7

0x64b9,	// (0x0006038c) listscroll_gen_pane_cp05

0x64c2,	// (0x00060395) main_myfav_hc_pane_g1_ParamLimits

0x64c2,	// (0x00060395) main_myfav_hc_pane_g1

0x64d8,	// (0x000603ab) main_myfav_hc_pane_g2_ParamLimits

0x64d8,	// (0x000603ab) main_myfav_hc_pane_g2

0x0002,

0xf7df,	// (0x000696b2) main_myfav_hc_pane_g_ParamLimits

0xf7df,	// (0x000696b2) main_myfav_hc_pane_g

0x6502,	// (0x000603d5) main_myfav_hc_pane_t1_ParamLimits

0x6502,	// (0x000603d5) main_myfav_hc_pane_t1

0x6517,	// (0x000603ea) main_myfav_hc_pane_t2_ParamLimits

0x6517,	// (0x000603ea) main_myfav_hc_pane_t2

0x6529,	// (0x000603fc) main_myfav_hc_pane_t3_ParamLimits

0x6529,	// (0x000603fc) main_myfav_hc_pane_t3

0x653b,	// (0x0006040e) main_myfav_hc_pane_t4_ParamLimits

0x653b,	// (0x0006040e) main_myfav_hc_pane_t4

0x0004,

0xf7e6,	// (0x000696b9) main_myfav_hc_pane_t_ParamLimits

0xf7e6,	// (0x000696b9) main_myfav_hc_pane_t

0xe798,	// (0x0006866b) bg_myfav_hc_instruction_pane_g1

0x655f,	// (0x00060432) cell_myfav_contact_pane_g1_ParamLimits

0x655f,	// (0x00060432) cell_myfav_contact_pane_g1

0x655f,	// (0x00060432) cell_myfav_contact_pane_g2_ParamLimits

0x655f,	// (0x00060432) cell_myfav_contact_pane_g2

0x656b,	// (0x0006043e) cell_myfav_contact_pane_g3_ParamLimits

0x656b,	// (0x0006043e) cell_myfav_contact_pane_g3

0xea2c,	// (0x000688ff) cell_myfav_contact_pane_g4_ParamLimits

0xea2c,	// (0x000688ff) cell_myfav_contact_pane_g4

0x6578,	// (0x0006044b) cell_myfav_contact_pane_g5_ParamLimits

0x6578,	// (0x0006044b) cell_myfav_contact_pane_g5

0x0004,

0xf7f1,	// (0x000696c4) cell_myfav_contact_pane_g_ParamLimits

0xf7f1,	// (0x000696c4) cell_myfav_contact_pane_g

0x64ee,	// (0x000603c1) main_myfav_hc_pane_g3_ParamLimits

0x64ee,	// (0x000603c1) main_myfav_hc_pane_g3

0x0e62,	// (0x0005ad35) popup_adpt_find_window

0x6584,	// (0x00060457) afind_page_pane_ParamLimits

0x6584,	// (0x00060457) afind_page_pane

0x6599,	// (0x0006046c) aid_size_cell_afind_ParamLimits

0x6599,	// (0x0006046c) aid_size_cell_afind

0x65b7,	// (0x0006048a) bg_popup_sub_pane_cp09_ParamLimits

0x65b7,	// (0x0006048a) bg_popup_sub_pane_cp09

0x65c4,	// (0x00060497) find_pane_cp01_ParamLimits

0x65c4,	// (0x00060497) find_pane_cp01

0x65d1,	// (0x000604a4) grid_afind_control_pane_ParamLimits

0x65d1,	// (0x000604a4) grid_afind_control_pane

0x65e5,	// (0x000604b8) grid_afind_pane_ParamLimits

0x65e5,	// (0x000604b8) grid_afind_pane

0x6603,	// (0x000604d6) cell_afind_pane_ParamLimits

0x6603,	// (0x000604d6) cell_afind_pane

0xe798,	// (0x0006866b) afind_page_pane_g1

0x6652,	// (0x00060525) afind_page_pane_g2

0x665b,	// (0x0006052e) afind_page_pane_g3

0x0002,

0xf7fc,	// (0x000696cf) afind_page_pane_g

0x6664,	// (0x00060537) afind_page_pane_t1

0x6684,	// (0x00060557) cell_afind_grid_control_pane_ParamLimits

0x6684,	// (0x00060557) cell_afind_grid_control_pane

0xf06f,	// (0x00068f42) bg_button_pane_cp69_ParamLimits

0xf06f,	// (0x00068f42) bg_button_pane_cp69

0x6693,	// (0x00060566) cell_afind_pane_g1_ParamLimits

0x6693,	// (0x00060566) cell_afind_pane_g1

0x66a0,	// (0x00060573) cell_afind_pane_t1_ParamLimits

0x66a0,	// (0x00060573) cell_afind_pane_t1

0xa2f4,	// (0x000641c7) bg_button_pane_cp72

0x66b2,	// (0x00060585) cell_afind_grid_control_pane_g1

0x3938,	// (0x0005d80b) aid_image_placing_area_ParamLimits

0x3938,	// (0x0005d80b) aid_image_placing_area

0xed3f,	// (0x00068c12) field_vitu_entry_pane_g1_ParamLimits

0xed3f,	// (0x00068c12) field_vitu_entry_pane_g1

0xed4b,	// (0x00068c1e) field_vitu_entry_pane_g2_ParamLimits

0xed4b,	// (0x00068c1e) field_vitu_entry_pane_g2

0x0001,

0x04cc,	// (0x0005a39f) field_vitu_entry_pane_g_ParamLimits

0x04cc,	// (0x0005a39f) field_vitu_entry_pane_g

0x57f6,	// (0x0005f6c9) cell_vitu_itu_pane_g1_ParamLimits

0x5838,	// (0x0005f70b) cell_vitu_itu_pane_t3_ParamLimits

0x5838,	// (0x0005f70b) cell_vitu_itu_pane_t3

0xf019,	// (0x00068eec) mp4_progress_pane_t1_ParamLimits

0xf030,	// (0x00068f03) mp4_progress_pane_t2_ParamLimits

0x0565,	// (0x0005a438) mp4_progress_pane_t_ParamLimits

0xf047,	// (0x00068f1a) mup_progress_pane_cp04_ParamLimits

0x654d,	// (0x00060420) main_myfav_hc_pane_t5_ParamLimits

0x654d,	// (0x00060420) main_myfav_hc_pane_t5

0x9849,	// (0x0006371c) aid_zoom_text_primary

0x0e62,	// (0x0005ad35) popup_adpt_find_window_ParamLimits

0x9882,	// (0x00063755) main_cam_set_pane

0x5f29,	// (0x0005fdfc) cam4_zoom_pane_ParamLimits

0x5f29,	// (0x0005fdfc) cam4_zoom_pane

0x66bb,	// (0x0006058e) main_cam_set_pane_g1_ParamLimits

0x66bb,	// (0x0006058e) main_cam_set_pane_g1

0x66c9,	// (0x0006059c) main_cam_set_pane_g2_ParamLimits

0x66c9,	// (0x0006059c) main_cam_set_pane_g2

0x0001,

0xf803,	// (0x000696d6) main_cam_set_pane_g_ParamLimits

0xf803,	// (0x000696d6) main_cam_set_pane_g

0x66e8,	// (0x000605bb) main_cam_set_pane_t1_ParamLimits

0x66e8,	// (0x000605bb) main_cam_set_pane_t1

0x66fa,	// (0x000605cd) main_cset_listscroll_pane_ParamLimits

0x66fa,	// (0x000605cd) main_cset_listscroll_pane

0x6718,	// (0x000605eb) main_cset_slider_pane_ParamLimits

0x6718,	// (0x000605eb) main_cset_slider_pane

0x6744,	// (0x00060617) main_cset_list_pane_ParamLimits

0x6744,	// (0x00060617) main_cset_list_pane

0x6754,	// (0x00060627) scroll_pane_cp028

0x675d,	// (0x00060630) aid_area_touch_slider

0x6779,	// (0x0006064c) cset_slider_pane

0x67a3,	// (0x00060676) main_cset_slider_pane_g1

0x67b8,	// (0x0006068b) main_cset_slider_pane_g2

0x0011,

0xf808,	// (0x000696db) main_cset_slider_pane_g

0x68a4,	// (0x00060777) main_cset_slider_pane_t1

0x68d2,	// (0x000607a5) main_cset_slider_pane_t2

0x68ec,	// (0x000607bf) main_cset_slider_pane_t3

0x6906,	// (0x000607d9) main_cset_slider_pane_t4

0x6920,	// (0x000607f3) main_cset_slider_pane_t5

0x693a,	// (0x0006080d) main_cset_slider_pane_t6

0x694f,	// (0x00060822) main_cset_slider_pane_t7

0x000e,

0xf82d,	// (0x00069700) main_cset_slider_pane_t

0x6ac5,	// (0x00060998) cset_list_set_pane_ParamLimits

0x6ac5,	// (0x00060998) cset_list_set_pane

0x6ad6,	// (0x000609a9) aid_position_infowindow_above

0x6ade,	// (0x000609b1) aid_position_infowindow_below

0x6ae6,	// (0x000609b9) cset_list_set_pane_g1_ParamLimits

0x6ae6,	// (0x000609b9) cset_list_set_pane_g1

0x6af2,	// (0x000609c5) cset_list_set_pane_g3_ParamLimits

0x6af2,	// (0x000609c5) cset_list_set_pane_g3

0x0001,

0xf84c,	// (0x0006971f) cset_list_set_pane_g_ParamLimits

0xf84c,	// (0x0006971f) cset_list_set_pane_g

0x6b01,	// (0x000609d4) cset_list_set_pane_t1_ParamLimits

0x6b01,	// (0x000609d4) cset_list_set_pane_t1

0xb9e5,	// (0x000658b8) list_highlight_pane_cp021_ParamLimits

0xb9e5,	// (0x000658b8) list_highlight_pane_cp021

0xae6e,	// (0x00064d41) cset_slider_pane_g1

0xae80,	// (0x00064d53) cset_slider_pane_g2

0xae77,	// (0x00064d4a) cset_slider_pane_g3

0x0002,

0xf851,	// (0x00069724) cset_slider_pane_g

0xda82,	// (0x00067955) aid_area_touch_cam4_zoom

0xda8a,	// (0x0006795d) cam4_zoom_cont_pane

0xda92,	// (0x00067965) cam4_zoom_pane_g1

0xda9a,	// (0x0006796d) cam4_zoom_pane_g2

0x6b16,	// (0x000609e9) cam4_zoom_pane_g3

0x0002,

0xf858,	// (0x0006972b) cam4_zoom_pane_g

0xdaa2,	// (0x00067975) cam4_zoom_cont_pane_g1

0xdaab,	// (0x0006797e) cam4_zoom_cont_pane_g2

0xdab4,	// (0x00067987) cam4_zoom_cont_pane_g3

0x0002,

0xf85f,	// (0x00069732) cam4_zoom_cont_pane_g

0x5da1,	// (0x0005fc74) call4_image_pane_ParamLimits

0x5da1,	// (0x0005fc74) call4_image_pane

0xf093,	// (0x00068f66) call4_windows_conf_pane_ParamLimits

0xf0a6,	// (0x00068f79) popup_call4_audio_in_window_ParamLimits

0xf0a6,	// (0x00068f79) popup_call4_audio_in_window

0x9827,	// (0x000636fa) bg_popup_call2_act_pane_cp02

0x5eac,	// (0x0005fd7f) call4_list_conf_pane

0xe798,	// (0x0006866b) call4_image_pane_g1

0xe798,	// (0x0006866b) call4_image_pane_g2

0x0001,

0x038d,	// (0x0005a260) call4_image_pane_g

0x6b1e,	// (0x000609f1) list_single_graphic_popup_conf4_pane_ParamLimits

0x6b1e,	// (0x000609f1) list_single_graphic_popup_conf4_pane

0x9827,	// (0x000636fa) list_highlight_pane_cp022

0xbaf5,	// (0x000659c8) list_single_graphic_popup_conf4_pane_g1

0xaa91,	// (0x00064964) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf866,	// (0x00069739) list_single_graphic_popup_conf4_pane_g

0xbafd,	// (0x000659d0) list_single_graphic_popup_conf4_pane_t1

0x1ef5,	// (0x0005bdc8) popup_vtel_slider_window_ParamLimits

0x1ef5,	// (0x0005bdc8) popup_vtel_slider_window

0xf05d,	// (0x00068f30) dialer2_ne_pane_t2_ParamLimits

0xf05d,	// (0x00068f30) dialer2_ne_pane_t2

0x0001,

0xf747,	// (0x0006961a) dialer2_ne_pane_t_ParamLimits

0xf747,	// (0x0006961a) dialer2_ne_pane_t

0xe585,	// (0x00068458) bg_popup_sub_pane_cp010_ParamLimits

0xe585,	// (0x00068458) bg_popup_sub_pane_cp010

0x6b31,	// (0x00060a04) popup_vtel_slider_window_g1_ParamLimits

0x6b31,	// (0x00060a04) popup_vtel_slider_window_g1

0x6b44,	// (0x00060a17) popup_vtel_slider_window_g2_ParamLimits

0x6b44,	// (0x00060a17) popup_vtel_slider_window_g2

0x0003,

0xf86b,	// (0x0006973e) popup_vtel_slider_window_g_ParamLimits

0xf86b,	// (0x0006973e) popup_vtel_slider_window_g

0x6b98,	// (0x00060a6b) vtel_slider_pane_ParamLimits

0x6b98,	// (0x00060a6b) vtel_slider_pane

0x6bba,	// (0x00060a8d) vtel_slider_pane_g1_ParamLimits

0x6bba,	// (0x00060a8d) vtel_slider_pane_g1

0x6bce,	// (0x00060aa1) vtel_slider_pane_g2_ParamLimits

0x6bce,	// (0x00060aa1) vtel_slider_pane_g2

0x6be6,	// (0x00060ab9) vtel_slider_pane_g3_ParamLimits

0x6be6,	// (0x00060ab9) vtel_slider_pane_g3

0x6bba,	// (0x00060a8d) vtel_slider_pane_g4_ParamLimits

0x6bba,	// (0x00060a8d) vtel_slider_pane_g4

0x6bfc,	// (0x00060acf) vtel_slider_pane_g5_ParamLimits

0x6bfc,	// (0x00060acf) vtel_slider_pane_g5

0x0004,

0xf874,	// (0x00069747) vtel_slider_pane_g_ParamLimits

0xf874,	// (0x00069747) vtel_slider_pane_g

0x9882,	// (0x00063755) main_gallery2_pane

0x6100,	// (0x0005ffd3) aid_size_row_itut2_dropdow_list_ParamLimits

0x6100,	// (0x0005ffd3) aid_size_row_itut2_dropdow_list

0x6163,	// (0x00060036) grid_vitu2_function_top_pane_ParamLimits

0x6163,	// (0x00060036) grid_vitu2_function_top_pane

0x61a8,	// (0x0006007b) popup_vitu2_dropdown_list_window_ParamLimits

0x61a8,	// (0x0006007b) popup_vitu2_dropdown_list_window

0x61c4,	// (0x00060097) popup_vitu2_match_list_window

0x6c20,	// (0x00060af3) cell_vitu2_function_top_pane_ParamLimits

0x6c20,	// (0x00060af3) cell_vitu2_function_top_pane

0x6c38,	// (0x00060b0b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c38,	// (0x00060b0b) cell_vitu2_function_top_pane_cp01

0x6c54,	// (0x00060b27) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c54,	// (0x00060b27) cell_vitu2_function_top_wide_pane

0x9882,	// (0x00063755) bg_button_pane_cp012

0x6c70,	// (0x00060b43) cell_vitu2_function_top_pane_g1

0xdabd,	// (0x00067990) bg_button_pane_cp013_ParamLimits

0xdabd,	// (0x00067990) bg_button_pane_cp013

0x6c84,	// (0x00060b57) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c84,	// (0x00060b57) cell_vitu2_function_top_wide_pane_g1

0x9882,	// (0x00063755) bg_popup_sub_pane_cp20

0x6c9c,	// (0x00060b6f) list_vitu2_match_list_pane

0x6374,	// (0x00060247) bg_popup_sub_pane_cp20_g1

0x637c,	// (0x0006024f) bg_popup_sub_pane_cp20_g2

0xa508,	// (0x000643db) bg_popup_sub_pane_cp20_g3

0x6384,	// (0x00060257) bg_popup_sub_pane_cp20_g4

0xa4e8,	// (0x000643bb) bg_popup_sub_pane_cp20_g5

0xbb13,	// (0x000659e6) bg_popup_sub_pane_cp20_g6

0x6394,	// (0x00060267) bg_popup_sub_pane_cp20_g7

0x639c,	// (0x0006026f) bg_popup_sub_pane_cp20_g8

0x63a4,	// (0x00060277) bg_popup_sub_pane_cp20_g9

0x0008,

0xf87f,	// (0x00069752) bg_popup_sub_pane_cp20_g

0xdad9,	// (0x000679ac) list_vitu2_match_list_item_pane_ParamLimits

0xdad9,	// (0x000679ac) list_vitu2_match_list_item_pane

0xdaeb,	// (0x000679be) list_vitu2_match_list_item_pane_t1

0x9890,	// (0x00063763) bg_popup_sub_pane_cp21

0xdaf9,	// (0x000679cc) grid_vitu2_dropdown_list_pane

0x6d01,	// (0x00060bd4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d01,	// (0x00060bd4) cell_vitu2_dropdown_list_char_pane

0x6d22,	// (0x00060bf5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d22,	// (0x00060bf5) cell_vitu2_dropdown_list_ctrl_pane

0xbb1b,	// (0x000659ee) cell_vitu2_dropdown_list_char_pane_g1

0xbb24,	// (0x000659f7) cell_vitu2_dropdown_list_char_pane_g2

0xbb2d,	// (0x00065a00) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf89c,	// (0x0006976f) cell_vitu2_dropdown_list_char_pane_g

0x6d4e,	// (0x00060c21) cell_vitu2_dropdown_list_char_pane_t1

0x6d5c,	// (0x00060c2f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d5c,	// (0x00060c2f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d69,	// (0x00060c3c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d69,	// (0x00060c3c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d76,	// (0x00060c49) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d76,	// (0x00060c49) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d83,	// (0x00060c56) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d83,	// (0x00060c56) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd9b1,	// (0x00067884) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd9b1,	// (0x00067884) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8a3,	// (0x00069776) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8a3,	// (0x00069776) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d9f,	// (0x00060c72) aid_size_cell_gallery2_ParamLimits

0x6d9f,	// (0x00060c72) aid_size_cell_gallery2

0x6dbd,	// (0x00060c90) grid_gallery2_pane_ParamLimits

0x6dbd,	// (0x00060c90) grid_gallery2_pane

0x565b,	// (0x0005f52e) scroll_pane_cp029_ParamLimits

0x565b,	// (0x0005f52e) scroll_pane_cp029

0x6dd1,	// (0x00060ca4) cell_gallery2_pane_ParamLimits

0x6dd1,	// (0x00060ca4) cell_gallery2_pane

0xbb36,	// (0x00065a09) cell_gallery2_pane_g2

0x6e2a,	// (0x00060cfd) cell_gallery2_pane_g3

0xbb3e,	// (0x00065a11) cell_gallery2_pane_g4

0xbb46,	// (0x00065a19) cell_gallery2_pane_g5

0xa260,	// (0x00064133) grid_highlight_pane_cp10

0x61c4,	// (0x00060097) popup_vitu2_match_list_window_ParamLimits

0x61d5,	// (0x000600a8) popup_vitu2_query_window_ParamLimits

0x61d5,	// (0x000600a8) popup_vitu2_query_window

0x9890,	// (0x00063763) bg_vitu2_candi_button_pane

0xbb1b,	// (0x000659ee) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbb24,	// (0x000659f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbb2d,	// (0x00065a00) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e32,	// (0x00060d05) bg_button_pane_cp015

0x6e42,	// (0x00060d15) bg_button_pane_cp016

0x6e54,	// (0x00060d27) bg_button_pane_cp017

0xe386,	// (0x00068259) bg_popup_sub_pane_cp22

0xbb4e,	// (0x00065a21) popup_vitu2_query_window_g1

0x6e95,	// (0x00060d68) popup_vitu2_query_window_g2

0x0002,

0xf8ae,	// (0x00069781) popup_vitu2_query_window_g

0x6eb0,	// (0x00060d83) popup_vitu2_query_window_t1_ParamLimits

0x6eb0,	// (0x00060d83) popup_vitu2_query_window_t1

0x6ee3,	// (0x00060db6) popup_vitu2_query_window_t2_ParamLimits

0x6ee3,	// (0x00060db6) popup_vitu2_query_window_t2

0x6ef5,	// (0x00060dc8) popup_vitu2_query_window_t3_ParamLimits

0x6ef5,	// (0x00060dc8) popup_vitu2_query_window_t3

0x6f1d,	// (0x00060df0) popup_vitu2_query_window_t4_ParamLimits

0x6f1d,	// (0x00060df0) popup_vitu2_query_window_t4

0x6f3a,	// (0x00060e0d) popup_vitu2_query_window_t5_ParamLimits

0x6f3a,	// (0x00060e0d) popup_vitu2_query_window_t5

0x0006,

0xf8b5,	// (0x00069788) popup_vitu2_query_window_t_ParamLimits

0xf8b5,	// (0x00069788) popup_vitu2_query_window_t

0x673c,	// (0x0006060f) main_cset_text_pane

0x675d,	// (0x00060630) aid_area_touch_slider_ParamLimits

0x6779,	// (0x0006064c) cset_slider_pane_ParamLimits

0x67a3,	// (0x00060676) main_cset_slider_pane_g1_ParamLimits

0x67b8,	// (0x0006068b) main_cset_slider_pane_g2_ParamLimits

0x67cd,	// (0x000606a0) main_cset_slider_pane_g3_ParamLimits

0x67cd,	// (0x000606a0) main_cset_slider_pane_g3

0x67d9,	// (0x000606ac) main_cset_slider_pane_g4_ParamLimits

0x67d9,	// (0x000606ac) main_cset_slider_pane_g4

0x67e8,	// (0x000606bb) main_cset_slider_pane_g5_ParamLimits

0x67e8,	// (0x000606bb) main_cset_slider_pane_g5

0x67f4,	// (0x000606c7) main_cset_slider_pane_g6_ParamLimits

0x67f4,	// (0x000606c7) main_cset_slider_pane_g6

0xf808,	// (0x000696db) main_cset_slider_pane_g_ParamLimits

0x68a4,	// (0x00060777) main_cset_slider_pane_t1_ParamLimits

0x68d2,	// (0x000607a5) main_cset_slider_pane_t2_ParamLimits

0x68ec,	// (0x000607bf) main_cset_slider_pane_t3_ParamLimits

0x6906,	// (0x000607d9) main_cset_slider_pane_t4_ParamLimits

0x6920,	// (0x000607f3) main_cset_slider_pane_t5_ParamLimits

0x693a,	// (0x0006080d) main_cset_slider_pane_t6_ParamLimits

0x694f,	// (0x00060822) main_cset_slider_pane_t7_ParamLimits

0x6979,	// (0x0006084c) main_cset_slider_pane_t8_ParamLimits

0x6979,	// (0x0006084c) main_cset_slider_pane_t8

0x69a1,	// (0x00060874) main_cset_slider_pane_t9_ParamLimits

0x69a1,	// (0x00060874) main_cset_slider_pane_t9

0x69c9,	// (0x0006089c) main_cset_slider_pane_t10_ParamLimits

0x69c9,	// (0x0006089c) main_cset_slider_pane_t10

0x69f1,	// (0x000608c4) main_cset_slider_pane_t11_ParamLimits

0x69f1,	// (0x000608c4) main_cset_slider_pane_t11

0x6a19,	// (0x000608ec) main_cset_slider_pane_t12_ParamLimits

0x6a19,	// (0x000608ec) main_cset_slider_pane_t12

0x6a36,	// (0x00060909) main_cset_slider_pane_t13_ParamLimits

0x6a36,	// (0x00060909) main_cset_slider_pane_t13

0xf82d,	// (0x00069700) main_cset_slider_pane_t_ParamLimits

0x9827,	// (0x000636fa) bg_popup_sub_pane_cp011

0xbb5a,	// (0x00065a2d) main_cset_text_pane_g1

0xbb62,	// (0x00065a35) main_cset_text_pane_t1

0xbb70,	// (0x00065a43) main_cset_text_pane_t2

0xbb7e,	// (0x00065a51) main_cset_text_pane_t3

0xbb8c,	// (0x00065a5f) main_cset_text_pane_t4

0xbb9a,	// (0x00065a6d) main_cset_text_pane_t5

0xbba8,	// (0x00065a7b) main_cset_text_pane_t6

0xbbb6,	// (0x00065a89) main_cset_text_pane_t7

0x0006,

0xf8c4,	// (0x00069797) main_cset_text_pane_t

0x9890,	// (0x00063763) main_cam4_burst_pane

0x9890,	// (0x00063763) main_cam5_pane

0x6672,	// (0x00060545) bg_button_pane_cp019

0x667b,	// (0x0006054e) bg_button_pane_cp020

0x6808,	// (0x000606db) main_cset_slider_pane_g7_ParamLimits

0x6808,	// (0x000606db) main_cset_slider_pane_g7

0x6814,	// (0x000606e7) main_cset_slider_pane_g8_ParamLimits

0x6814,	// (0x000606e7) main_cset_slider_pane_g8

0x6820,	// (0x000606f3) main_cset_slider_pane_g9_ParamLimits

0x6820,	// (0x000606f3) main_cset_slider_pane_g9

0x682c,	// (0x000606ff) main_cset_slider_pane_g10_ParamLimits

0x682c,	// (0x000606ff) main_cset_slider_pane_g10

0x6838,	// (0x0006070b) main_cset_slider_pane_g11_ParamLimits

0x6838,	// (0x0006070b) main_cset_slider_pane_g11

0x6844,	// (0x00060717) main_cset_slider_pane_g12_ParamLimits

0x6844,	// (0x00060717) main_cset_slider_pane_g12

0x6850,	// (0x00060723) main_cset_slider_pane_g13_ParamLimits

0x6850,	// (0x00060723) main_cset_slider_pane_g13

0x685c,	// (0x0006072f) main_cset_slider_pane_g14_ParamLimits

0x685c,	// (0x0006072f) main_cset_slider_pane_g14

0x6868,	// (0x0006073b) main_cset_slider_pane_g15_ParamLimits

0x6868,	// (0x0006073b) main_cset_slider_pane_g15

0x6a53,	// (0x00060926) main_cset_slider_pane_t14_ParamLimits

0x6a53,	// (0x00060926) main_cset_slider_pane_t14

0x6a8c,	// (0x0006095f) main_cset_slider_pane_t15_ParamLimits

0x6a8c,	// (0x0006095f) main_cset_slider_pane_t15

0x6fad,	// (0x00060e80) aid_cam4_burst_size_cell_ParamLimits

0x6fad,	// (0x00060e80) aid_cam4_burst_size_cell

0x6fcd,	// (0x00060ea0) grid_cam4_burst_pane_ParamLimits

0x6fcd,	// (0x00060ea0) grid_cam4_burst_pane

0x6ff3,	// (0x00060ec6) linegrid_cam4_burst_pane_ParamLimits

0x6ff3,	// (0x00060ec6) linegrid_cam4_burst_pane

0x7015,	// (0x00060ee8) scroll_pane_cp30_ParamLimits

0x7015,	// (0x00060ee8) scroll_pane_cp30

0x7021,	// (0x00060ef4) cell_cam4_burst_pane_ParamLimits

0x7021,	// (0x00060ef4) cell_cam4_burst_pane

0xbbc4,	// (0x00065a97) linegrid_cam4_burst_pane_g1_ParamLimits

0xbbc4,	// (0x00065a97) linegrid_cam4_burst_pane_g1

0x7068,	// (0x00060f3b) linegrid_cam4_burst_pane_g2_ParamLimits

0x7068,	// (0x00060f3b) linegrid_cam4_burst_pane_g2

0xbbd1,	// (0x00065aa4) linegrid_cam4_burst_pane_g3_ParamLimits

0xbbd1,	// (0x00065aa4) linegrid_cam4_burst_pane_g3

0x0002,

0xf8d3,	// (0x000697a6) linegrid_cam4_burst_pane_g_ParamLimits

0xf8d3,	// (0x000697a6) linegrid_cam4_burst_pane_g

0x7079,	// (0x00060f4c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7079,	// (0x00060f4c) linegrid_cam4_burst_pane_g3_copy1

0xbbde,	// (0x00065ab1) linegrid_cam4_burst_pane_g4_ParamLimits

0xbbde,	// (0x00065ab1) linegrid_cam4_burst_pane_g4

0x7093,	// (0x00060f66) linegrid_cam4_burst_pane_g5_ParamLimits

0x7093,	// (0x00060f66) linegrid_cam4_burst_pane_g5

0x70a4,	// (0x00060f77) linegrid_cam4_burst_pane_g6_ParamLimits

0x70a4,	// (0x00060f77) linegrid_cam4_burst_pane_g6

0xbbeb,	// (0x00065abe) linegrid_cam4_burst_pane_g7_ParamLimits

0xbbeb,	// (0x00065abe) linegrid_cam4_burst_pane_g7

0x70b5,	// (0x00060f88) cell_cam4_burst_pane_g1

0xbc04,	// (0x00065ad7) main_cam5_pane_t1_ParamLimits

0xbc04,	// (0x00065ad7) main_cam5_pane_t1

0xbc16,	// (0x00065ae9) main_cam5_pane_t2_ParamLimits

0xbc16,	// (0x00065ae9) main_cam5_pane_t2

0xbc28,	// (0x00065afb) main_cam5_pane_t3_ParamLimits

0xbc28,	// (0x00065afb) main_cam5_pane_t3

0xbc3a,	// (0x00065b0d) main_cam5_pane_t4_ParamLimits

0xbc3a,	// (0x00065b0d) main_cam5_pane_t4

0xbc50,	// (0x00065b23) main_cam5_pane_t5_ParamLimits

0xbc50,	// (0x00065b23) main_cam5_pane_t5

0xbc62,	// (0x00065b35) main_cam5_pane_t6_ParamLimits

0xbc62,	// (0x00065b35) main_cam5_pane_t6

0xbc74,	// (0x00065b47) main_cam5_pane_t7_ParamLimits

0xbc74,	// (0x00065b47) main_cam5_pane_t7

0xbc86,	// (0x00065b59) main_cam5_pane_t8_ParamLimits

0xbc86,	// (0x00065b59) main_cam5_pane_t8

0xbca2,	// (0x00065b75) main_cam5_pane_t9_ParamLimits

0xbca2,	// (0x00065b75) main_cam5_pane_t9

0xbcb4,	// (0x00065b87) main_cam5_pane_t10_ParamLimits

0xbcb4,	// (0x00065b87) main_cam5_pane_t10

0xbcc6,	// (0x00065b99) main_cam5_pane_t11_ParamLimits

0xbcc6,	// (0x00065b99) main_cam5_pane_t11

0xbcd8,	// (0x00065bab) main_cam5_pane_t12_ParamLimits

0xbcd8,	// (0x00065bab) main_cam5_pane_t12

0xbced,	// (0x00065bc0) main_cam5_pane_t13_ParamLimits

0xbced,	// (0x00065bc0) main_cam5_pane_t13

0x000c,

0xf8df,	// (0x000697b2) main_cam5_pane_t_ParamLimits

0xf8df,	// (0x000697b2) main_cam5_pane_t

0x0ec0,	// (0x0005ad93) popup_scut_keymap_window_ParamLimits

0x0ec0,	// (0x0005ad93) popup_scut_keymap_window

0x70ca,	// (0x00060f9d) aid_size_cell_brow_shortcut

0xa260,	// (0x00064133) bg_popup_window_pane_cp010

0x70d6,	// (0x00060fa9) grid_scut_pane

0x70e0,	// (0x00060fb3) cell_scut_pane_ParamLimits

0x70e0,	// (0x00060fb3) cell_scut_pane

0x70f5,	// (0x00060fc8) cell_scut_pane_g1

0xbd0a,	// (0x00065bdd) cell_scut_pane_t1

0xbd19,	// (0x00065bec) cell_scut_pane_t2

0x70fe,	// (0x00060fd1) cell_scut_pane_t3

0x0002,

0xf8fa,	// (0x000697cd) cell_scut_pane_t

0x4d8e,	// (0x0005ec61) main_mup3_pane_g8_ParamLimits

0x4d8e,	// (0x0005ec61) main_mup3_pane_g8

0x6113,	// (0x0005ffe6) area_vitu2_query_pane_ParamLimits

0x6113,	// (0x0005ffe6) area_vitu2_query_pane

0x6e66,	// (0x00060d39) input_focus_pane_cp08

0xbd28,	// (0x00065bfb) area_vitu2_query_pane_g1

0x710c,	// (0x00060fdf) area_vitu2_query_pane_g2

0x0001,

0xf901,	// (0x000697d4) area_vitu2_query_pane_g

0x711b,	// (0x00060fee) area_vitu2_query_pane_t1_ParamLimits

0x711b,	// (0x00060fee) area_vitu2_query_pane_t1

0x712d,	// (0x00061000) area_vitu2_query_pane_t2_ParamLimits

0x712d,	// (0x00061000) area_vitu2_query_pane_t2

0x713f,	// (0x00061012) area_vitu2_query_pane_t3_ParamLimits

0x713f,	// (0x00061012) area_vitu2_query_pane_t3

0xbd34,	// (0x00065c07) area_vitu2_query_pane_t4_ParamLimits

0xbd34,	// (0x00065c07) area_vitu2_query_pane_t4

0xbd5c,	// (0x00065c2f) area_vitu2_query_pane_t5_ParamLimits

0xbd5c,	// (0x00065c2f) area_vitu2_query_pane_t5

0xbd84,	// (0x00065c57) area_vitu2_query_pane_t6_ParamLimits

0xbd84,	// (0x00065c57) area_vitu2_query_pane_t6

0x0006,

0xf906,	// (0x000697d9) area_vitu2_query_pane_t_ParamLimits

0xf906,	// (0x000697d9) area_vitu2_query_pane_t

0x7167,	// (0x0006103a) bg_button_pane_cp018

0x7174,	// (0x00061047) bg_button_pane_cp021

0x7180,	// (0x00061053) bg_button_pane_cp022

0x718f,	// (0x00061062) input_focus_pane_cp09

0x305d,	// (0x0005cf30) aid_size_touch_mv_arrow_left

0xabcf,	// (0x00064aa2) aid_size_touch_mv_arrow_right

0x6880,	// (0x00060753) main_cset_slider_pane_g16_ParamLimits

0x6880,	// (0x00060753) main_cset_slider_pane_g16

0x688c,	// (0x0006075f) main_cset_slider_pane_g17_ParamLimits

0x688c,	// (0x0006075f) main_cset_slider_pane_g17

0x70b5,	// (0x00060f88) cell_cam4_burst_pane_g1_ParamLimits

0x9827,	// (0x000636fa) compa_mode_pane

0x6b54,	// (0x00060a27) popup_vtel_slider_window_g3_ParamLimits

0x6b54,	// (0x00060a27) popup_vtel_slider_window_g3

0x6b6b,	// (0x00060a3e) popup_vtel_slider_window_g4_ParamLimits

0x6b6b,	// (0x00060a3e) popup_vtel_slider_window_g4

0x6b82,	// (0x00060a55) popup_vtel_slider_window_t1_ParamLimits

0x6b82,	// (0x00060a55) popup_vtel_slider_window_t1

0x9890,	// (0x00063763) main_cl_pane

0xba0b,	// (0x000658de) popup_imed_adjust2_window_ParamLimits

0xe386,	// (0x00068259) bg_tb_trans_pane_cp05_ParamLimits

0xec74,	// (0x00068b47) popup_imed_adjust2_window_g1_ParamLimits

0xec83,	// (0x00068b56) popup_imed_adjust2_window_g2_ParamLimits

0xec83,	// (0x00068b56) popup_imed_adjust2_window_g2

0xec8f,	// (0x00068b62) popup_imed_adjust2_window_g3_ParamLimits

0xec8f,	// (0x00068b62) popup_imed_adjust2_window_g3

0x0002,

0x0490,	// (0x0005a363) popup_imed_adjust2_window_g_ParamLimits

0x0490,	// (0x0005a363) popup_imed_adjust2_window_g

0xec9b,	// (0x00068b6e) popup_imed_adjust2_window_t1_ParamLimits

0xecb3,	// (0x00068b86) slider_imed_adjust_pane_ParamLimits

0xecc7,	// (0x00068b9a) slider_imed_adjust_pane_g1_ParamLimits

0xecd7,	// (0x00068baa) slider_imed_adjust_pane_g2_ParamLimits

0xece7,	// (0x00068bba) slider_imed_adjust_pane_g3_ParamLimits

0xecf8,	// (0x00068bcb) slider_imed_adjust_pane_g4_ParamLimits

0x0497,	// (0x0005a36a) slider_imed_adjust_pane_g_ParamLimits

0x5ed8,	// (0x0005fdab) aid_touch_area_cam4_ParamLimits

0x5ed8,	// (0x0005fdab) aid_touch_area_cam4

0xd997,	// (0x0006786a) battery_pane_cp01

0x5f70,	// (0x0005fe43) main_camera4_pane_g6_ParamLimits

0x5f70,	// (0x0005fe43) main_camera4_pane_g6

0x5f91,	// (0x0005fe64) main_camera4_pane_t2_ParamLimits

0x5f91,	// (0x0005fe64) main_camera4_pane_t2

0x0001,

0xf77b,	// (0x0006964e) main_camera4_pane_t_ParamLimits

0xf77b,	// (0x0006964e) main_camera4_pane_t

0x5fd1,	// (0x0005fea4) aid_touch_area_vid4_ParamLimits

0x5fd1,	// (0x0005fea4) aid_touch_area_vid4

0x6013,	// (0x0005fee6) main_video4_pane_g5_ParamLimits

0x6013,	// (0x0005fee6) main_video4_pane_g5

0x6034,	// (0x0005ff07) vid4_progress_pane_ParamLimits

0x6034,	// (0x0005ff07) vid4_progress_pane

0x6898,	// (0x0006076b) main_cset_slider_pane_g18_ParamLimits

0x6898,	// (0x0006076b) main_cset_slider_pane_g18

0xbbf8,	// (0x00065acb) cell_cam4_burst_pane_g2_ParamLimits

0xbbf8,	// (0x00065acb) cell_cam4_burst_pane_g2

0x0001,

0xf8da,	// (0x000697ad) cell_cam4_burst_pane_g_ParamLimits

0xf8da,	// (0x000697ad) cell_cam4_burst_pane_g

0x9ff1,	// (0x00063ec4) bg_cl_pane_ParamLimits

0x9ff1,	// (0x00063ec4) bg_cl_pane

0x719e,	// (0x00061071) cl_header_pane_ParamLimits

0x719e,	// (0x00061071) cl_header_pane

0x71b2,	// (0x00061085) cl_listscroll_pane_ParamLimits

0x71b2,	// (0x00061085) cl_listscroll_pane

0xbdd0,	// (0x00065ca3) bg_cl_pane_g1

0xbdd8,	// (0x00065cab) bg_cl_pane_g2

0xbde0,	// (0x00065cb3) bg_cl_pane_g3

0xbde8,	// (0x00065cbb) bg_cl_pane_g4

0xbdf0,	// (0x00065cc3) bg_cl_pane_g5

0xbdf8,	// (0x00065ccb) bg_cl_pane_g6

0xbe00,	// (0x00065cd3) bg_cl_pane_g7

0xbe08,	// (0x00065cdb) bg_cl_pane_g8

0xbe10,	// (0x00065ce3) bg_cl_pane_g9

0x0008,

0xf915,	// (0x000697e8) bg_cl_pane_g

0x71c2,	// (0x00061095) aid_height_cl_leading_ParamLimits

0x71c2,	// (0x00061095) aid_height_cl_leading

0x71ce,	// (0x000610a1) aid_height_cl_text_ParamLimits

0x71ce,	// (0x000610a1) aid_height_cl_text

0xb9e5,	// (0x000658b8) bg_cl_header_pane_ParamLimits

0xb9e5,	// (0x000658b8) bg_cl_header_pane

0x71ed,	// (0x000610c0) cl_header_pane_g1_ParamLimits

0x71ed,	// (0x000610c0) cl_header_pane_g1

0x7203,	// (0x000610d6) cl_header_pane_t1_ParamLimits

0x7203,	// (0x000610d6) cl_header_pane_t1

0xbe18,	// (0x00065ceb) cl_list_pane

0xbe21,	// (0x00065cf4) hc_scroll_pane_cp01

0xa4e8,	// (0x000643bb) bg_cl_header_pane_g1

0x6374,	// (0x00060247) bg_cl_header_pane_g2

0xa508,	// (0x000643db) bg_cl_header_pane_g3

0x6384,	// (0x00060257) bg_cl_header_pane_g4

0x637c,	// (0x0006024f) bg_cl_header_pane_g5

0xbb13,	// (0x000659e6) bg_cl_header_pane_g6

0x639c,	// (0x0006026f) bg_cl_header_pane_g7

0x63a4,	// (0x00060277) bg_cl_header_pane_g8

0x6394,	// (0x00060267) bg_cl_header_pane_g9

0x0008,

0xf928,	// (0x000697fb) bg_cl_header_pane_g

0x721c,	// (0x000610ef) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x721c,	// (0x000610ef) hc_cl_list_double_graphic_heading_pane

0x722c,	// (0x000610ff) hc_cl_list_single_graphic_pane_ParamLimits

0x722c,	// (0x000610ff) hc_cl_list_single_graphic_pane

0x723f,	// (0x00061112) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x723f,	// (0x00061112) hc_cl_list_single_graphic_pane_g1

0x724b,	// (0x0006111e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x724b,	// (0x0006111e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf93b,	// (0x0006980e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf93b,	// (0x0006980e) hc_cl_list_single_graphic_pane_g

0x725f,	// (0x00061132) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x725f,	// (0x00061132) hc_cl_list_single_graphic_pane_t1

0x723f,	// (0x00061112) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x723f,	// (0x00061112) hc_cl_list_double_graphic_heading_pane_g1

0x7274,	// (0x00061147) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7274,	// (0x00061147) hc_cl_list_double_graphic_heading_pane_g2

0x7288,	// (0x0006115b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7288,	// (0x0006115b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf940,	// (0x00069813) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf940,	// (0x00069813) hc_cl_list_double_graphic_heading_pane_g

0x729c,	// (0x0006116f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x729c,	// (0x0006116f) hc_cl_list_double_graphic_heading_pane_t1

0x72b1,	// (0x00061184) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x72b1,	// (0x00061184) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf947,	// (0x0006981a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf947,	// (0x0006981a) hc_cl_list_double_graphic_heading_pane_t

0xdb01,	// (0x000679d4) vid4_progress_pane_g1

0xdb10,	// (0x000679e3) vid4_progress_pane_g2

0xdb1f,	// (0x000679f2) vid4_progress_pane_g3

0xdb2e,	// (0x00067a01) vid4_progress_pane_g4

0x0004,

0xf94c,	// (0x0006981f) vid4_progress_pane_g

0xdb46,	// (0x00067a19) vid4_progress_pane_t1

0xdb5c,	// (0x00067a2f) vid4_progress_pane_t2

0x0002,

0xf957,	// (0x0006982a) vid4_progress_pane_t

0xdb86,	// (0x00067a59) wait_bar_pane_cp07

0xe593,	// (0x00068466) blid_firmament_pane_ParamLimits

0xe5d4,	// (0x000684a7) popup_blid_sat_info2_window_g1

0xe5f8,	// (0x000684cb) popup_blid_sat_info2_window_t3

0xe606,	// (0x000684d9) popup_blid_sat_info2_window_t4

0xe614,	// (0x000684e7) popup_blid_sat_info2_window_t5

0xe622,	// (0x000684f5) popup_blid_sat_info2_window_t6

0xe632,	// (0x00068505) popup_blid_sat_info2_window_t7

0xe640,	// (0x00068513) popup_blid_sat_info2_window_t8

0xe64e,	// (0x00068521) popup_blid_sat_info2_window_t9

0xe65c,	// (0x0006852f) popup_blid_sat_info2_window_t10

0xe718,	// (0x000685eb) aid_firma_cardinal_ParamLimits

0xe72c,	// (0x000685ff) blid_firmament_pane_t1_ParamLimits

0xe743,	// (0x00068616) blid_firmament_pane_t2_ParamLimits

0xe75a,	// (0x0006862d) blid_firmament_pane_t3_ParamLimits

0xe771,	// (0x00068644) blid_firmament_pane_t4_ParamLimits

0x0384,	// (0x0005a257) blid_firmament_pane_t_ParamLimits

0xe788,	// (0x0006865b) blid_sat_info_pane_ParamLimits

0x9882,	// (0x00063755) main_cam_set_pane_ParamLimits

0x55dc,	// (0x0005f4af) aid_size_cell_colour_35_ParamLimits

0x55fc,	// (0x0005f4cf) aid_size_cell_colour_112_ParamLimits

0x561c,	// (0x0005f4ef) aid_size_cell_effect_ParamLimits

0xe386,	// (0x00068259) bg_tb_trans_pane_cp02_ParamLimits

0xa768,	// (0x0006463b) heading_imed_pane_ParamLimits

0x563c,	// (0x0005f50f) listscroll_imed_pane_ParamLimits

0xb797,	// (0x0006566a) popup_call2_audio_first_window_g5_ParamLimits

0xb797,	// (0x0006566a) popup_call2_audio_first_window_g5

0x5b59,	// (0x0005fa2c) aid_size_touch_image3_arrow_left_ParamLimits

0x5b59,	// (0x0005fa2c) aid_size_touch_image3_arrow_left

0x5b79,	// (0x0005fa4c) aid_size_touch_image3_arrow_right_ParamLimits

0x5b79,	// (0x0005fa4c) aid_size_touch_image3_arrow_right

0xdb71,	// (0x00067a44) vid4_progress_pane_t3

0x5910,	// (0x0005f7e3) main_hwr_training_symbol_option_pane_ParamLimits

0x5910,	// (0x0005f7e3) main_hwr_training_symbol_option_pane

0xef53,	// (0x00068e26) popup_hwr_training_preview_window_ParamLimits

0xef53,	// (0x00068e26) popup_hwr_training_preview_window

0x592c,	// (0x0005f7ff) hwr_training_navi_pane_g5_ParamLimits

0x592c,	// (0x0005f7ff) hwr_training_navi_pane_g5

0x62d5,	// (0x000601a8) popup_char_count_window

0x9882,	// (0x00063755) bg_popup_sub_pane_cp20_ParamLimits

0x6c9c,	// (0x00060b6f) list_vitu2_match_list_pane_ParamLimits

0x6cab,	// (0x00060b7e) vitu2_page_scroll_pane_ParamLimits

0x6cab,	// (0x00060b7e) vitu2_page_scroll_pane

0xbe67,	// (0x00065d3a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbe67,	// (0x00065d3a) list_single_hwr_training_symbol_option_pane

0xbe7a,	// (0x00065d4d) list_single_hwr_training_symbol_option_pane_g1

0xbe82,	// (0x00065d55) list_single_hwr_training_symbol_option_pane_t1

0xbe90,	// (0x00065d63) bg_button_pane_cp023

0xbe99,	// (0x00065d6c) bg_button_pane_cp024

0x72da,	// (0x000611ad) vitu2_page_scroll_pane_g1

0x72e2,	// (0x000611b5) vitu2_page_scroll_pane_g2

0x0001,

0xf95e,	// (0x00069831) vitu2_page_scroll_pane_g

0x72ea,	// (0x000611bd) vitu2_page_scroll_pane_t1

0xe7c1,	// (0x00068694) popup_char_count_window_g1

0xbecc,	// (0x00065d9f) popup_char_count_window_g2

0xbed5,	// (0x00065da8) popup_char_count_window_g3

0x0002,

0xf963,	// (0x00069836) popup_char_count_window_g

0xbede,	// (0x00065db1) popup_char_count_window_t1

0x9890,	// (0x00063763) main_vded2_pane

0xec62,	// (0x00068b35) aid_size_cell_imed_line

0xec6c,	// (0x00068b3f) grid_imed_line_width_pane

0xda3a,	// (0x0006790d) vid4_indicators_pane_g4

0xbeec,	// (0x00065dbf) cell_imed_line_width_pane_ParamLimits

0xbeec,	// (0x00065dbf) cell_imed_line_width_pane

0xbefe,	// (0x00065dd1) cell_imed_line_width_pane_g1

0xe56d,	// (0x00068440) cell_imed_line_width_pane_g2

0x0001,

0xf96a,	// (0x0006983d) cell_imed_line_width_pane_g

0x72f9,	// (0x000611cc) main_vded2_pane_g1_ParamLimits

0x72f9,	// (0x000611cc) main_vded2_pane_g1

0x730f,	// (0x000611e2) main_vded2_pane_g2_ParamLimits

0x730f,	// (0x000611e2) main_vded2_pane_g2

0x0001,

0xf96f,	// (0x00069842) main_vded2_pane_g_ParamLimits

0xf96f,	// (0x00069842) main_vded2_pane_g

0x731f,	// (0x000611f2) vded2_slider_pane_ParamLimits

0x731f,	// (0x000611f2) vded2_slider_pane

0x7332,	// (0x00061205) aid_size_touch_vded2_end

0x733a,	// (0x0006120d) aid_size_touch_vded2_playhead

0x7342,	// (0x00061215) aid_size_touch_vded2_start

0x734a,	// (0x0006121d) vded2_slider_bg_pane

0x7353,	// (0x00061226) vded2_slider_pane_g1

0x735c,	// (0x0006122f) vded2_slider_pane_g2

0x7364,	// (0x00061237) vded2_slider_pane_g3

0x0002,

0xf974,	// (0x00069847) vded2_slider_pane_g

0x736d,	// (0x00061240) vded2_slider_bg_pane_g1

0x7376,	// (0x00061249) vded2_slider_bg_pane_g2

0x737f,	// (0x00061252) vded2_slider_bg_pane_g3

0x0002,

0xf97b,	// (0x0006984e) vded2_slider_bg_pane_g

0x35e7,	// (0x0005d4ba) aid_postcard_touch_down_pane_ParamLimits

0x35e7,	// (0x0005d4ba) aid_postcard_touch_down_pane

0x35f9,	// (0x0005d4cc) aid_postcard_touch_up_pane_ParamLimits

0x35f9,	// (0x0005d4cc) aid_postcard_touch_up_pane

0x9890,	// (0x00063763) main_blid2_pane

0xb9f3,	// (0x000658c6) popup_blid2_search_window

0x9827,	// (0x000636fa) blid2_gps_pane

0x9827,	// (0x000636fa) blid2_navig_pane

0x9827,	// (0x000636fa) blid2_search_pane

0x9827,	// (0x000636fa) blid2_tripm_pane

0x7388,	// (0x0006125b) blid2_search_pane_g1_ParamLimits

0x7388,	// (0x0006125b) blid2_search_pane_g1

0x739c,	// (0x0006126f) blid2_search_pane_t1_ParamLimits

0x739c,	// (0x0006126f) blid2_search_pane_t1

0x73ae,	// (0x00061281) aid_size_cell_blid2_gps_ParamLimits

0x73ae,	// (0x00061281) aid_size_cell_blid2_gps

0x73c6,	// (0x00061299) blid2_gps_pane_g1_ParamLimits

0x73c6,	// (0x00061299) blid2_gps_pane_g1

0x73da,	// (0x000612ad) grid_blid2_satellite_pane_ParamLimits

0x73da,	// (0x000612ad) grid_blid2_satellite_pane

0x73ee,	// (0x000612c1) blid2_navig_pane_g1_ParamLimits

0x73ee,	// (0x000612c1) blid2_navig_pane_g1

0x73fa,	// (0x000612cd) blid2_navig_pane_t1_ParamLimits

0x73fa,	// (0x000612cd) blid2_navig_pane_t1

0x7413,	// (0x000612e6) blid2_navig_pane_t2_ParamLimits

0x7413,	// (0x000612e6) blid2_navig_pane_t2

0x0001,

0xf982,	// (0x00069855) blid2_navig_pane_t_ParamLimits

0xf982,	// (0x00069855) blid2_navig_pane_t

0x742c,	// (0x000612ff) blid2_navig_ring_pane_ParamLimits

0x742c,	// (0x000612ff) blid2_navig_ring_pane

0x7441,	// (0x00061314) blid2_speed_pane_ParamLimits

0x7441,	// (0x00061314) blid2_speed_pane

0x744d,	// (0x00061320) blid2_tripm_pane_g1_ParamLimits

0x744d,	// (0x00061320) blid2_tripm_pane_g1

0x7462,	// (0x00061335) blid2_tripm_pane_g2_ParamLimits

0x7462,	// (0x00061335) blid2_tripm_pane_g2

0x7476,	// (0x00061349) blid2_tripm_pane_g3_ParamLimits

0x7476,	// (0x00061349) blid2_tripm_pane_g3

0x748a,	// (0x0006135d) blid2_tripm_pane_g4_ParamLimits

0x748a,	// (0x0006135d) blid2_tripm_pane_g4

0x749e,	// (0x00061371) blid2_tripm_pane_g5_ParamLimits

0x749e,	// (0x00061371) blid2_tripm_pane_g5

0x0005,

0xf987,	// (0x0006985a) blid2_tripm_pane_g_ParamLimits

0xf987,	// (0x0006985a) blid2_tripm_pane_g

0x74c0,	// (0x00061393) blid2_tripm_pane_t1_ParamLimits

0x74c0,	// (0x00061393) blid2_tripm_pane_t1

0x74d7,	// (0x000613aa) blid2_tripm_pane_t2_ParamLimits

0x74d7,	// (0x000613aa) blid2_tripm_pane_t2

0x74ee,	// (0x000613c1) blid2_tripm_pane_t3_ParamLimits

0x74ee,	// (0x000613c1) blid2_tripm_pane_t3

0x0003,

0xf994,	// (0x00069867) blid2_tripm_pane_t_ParamLimits

0xf994,	// (0x00069867) blid2_tripm_pane_t

0x7531,	// (0x00061404) cell_blid2_satellite_pane_ParamLimits

0x7531,	// (0x00061404) cell_blid2_satellite_pane

0x7549,	// (0x0006141c) cell_blid2_satellite_pane_g1

0xbf07,	// (0x00065dda) cell_blid2_satellite_pane_t1

0xe798,	// (0x0006866b) blid2_speed_pane_g1

0xbf15,	// (0x00065de8) blid2_speed_pane_t1

0xbf23,	// (0x00065df6) blid2_speed_pane_t2

0x0001,

0xf99d,	// (0x00069870) blid2_speed_pane_t

0xe798,	// (0x0006866b) blid2_navig_ring_pane_g1

0x7552,	// (0x00061425) blid2_navig_ring_pane_g2

0x755a,	// (0x0006142d) blid2_navig_ring_pane_g3

0x7562,	// (0x00061435) blid2_navig_ring_pane_g4

0x756a,	// (0x0006143d) blid2_navig_ring_pane_g5

0x0004,

0xf9a2,	// (0x00069875) blid2_navig_ring_pane_g

0x9827,	// (0x000636fa) bg_popup_window_pane_cp011

0xbf31,	// (0x00065e04) popup_blid2_search_window_g1

0xbf39,	// (0x00065e0c) popup_blid2_search_window_t1

0xbf47,	// (0x00065e1a) popup_blid2_search_window_t2

0x0001,

0xf9ad,	// (0x00069880) popup_blid2_search_window_t

0xa3f7,	// (0x000642ca) main_browser_pane_g1

0x9ff1,	// (0x00063ec4) main_browser_pane_ParamLimits

0x9882,	// (0x00063755) bg_button_pane_cp011_ParamLimits

0x6357,	// (0x0006022a) cell_vitu2_function_pane_g1_ParamLimits

0xe386,	// (0x00068259) bg_popup_sub_pane_cp22_ParamLimits

0x6e66,	// (0x00060d39) input_focus_pane_cp08_ParamLimits

0x6e7d,	// (0x00060d50) popup_vitu2_query_button_pane_ParamLimits

0x6e7d,	// (0x00060d50) popup_vitu2_query_button_pane

0x6e8d,	// (0x00060d60) popup_vitu2_query_input_button_pane

0xbb4e,	// (0x00065a21) popup_vitu2_query_window_g1_ParamLimits

0x6e95,	// (0x00060d68) popup_vitu2_query_window_g2_ParamLimits

0xf8ae,	// (0x00069781) popup_vitu2_query_window_g_ParamLimits

0x9827,	// (0x000636fa) bg_button_pane_cp026

0x7572,	// (0x00061445) popup_vitu2_query_input_button_pane_g1

0x9827,	// (0x000636fa) bg_button_pane_cp025

0xbf55,	// (0x00065e28) popup_vitu2_query_button_pane_t1

0x4a36,	// (0x0005e909) main_mp3_pane_t6

0x4a44,	// (0x0005e917) popup_slider_window_cp01

0xd9bf,	// (0x00067892) cam4_battery_pane

0xd9bf,	// (0x00067892) cam4_battery_pane_cp02

0xd9bf,	// (0x00067892) cam4_battery_pane_cp01

0xd9bf,	// (0x00067892) cam4_battery_pane_cp03

0xf053,	// (0x00068f26) cam4_battery_pane_g1

0xe798,	// (0x0006866b) cam4_battery_pane_g2

0x0001,

0x07d5,	// (0x0005a6a8) cam4_battery_pane_g

0xe66a,	// (0x0006853d) popup_blid_sat_info2_window_t11

0x305d,	// (0x0005cf30) aid_size_touch_mv_arrow_left_ParamLimits

0xabcf,	// (0x00064aa2) aid_size_touch_mv_arrow_right_ParamLimits

0xac28,	// (0x00064afb) navi_pane_g1_ParamLimits

0xac34,	// (0x00064b07) navi_pane_g2_ParamLimits

0x3081,	// (0x0005cf54) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000692b4) navi_pane_g_ParamLimits

0x309e,	// (0x0005cf71) navi_pane_mv_t1_ParamLimits

0x5648,	// (0x0005f51b) grid_imed_effect_pane_ParamLimits

0x1e08,	// (0x0005bcdb) aid_placing_vt_slider_lsc

0xa339,	// (0x0006420c) aid_placing_vt_slider_prt

0xb9e5,	// (0x000658b8) bg_tb_trans_pane_cp01_ParamLimits

0xe8e7,	// (0x000687ba) popup_image_details_window_g1_ParamLimits

0xe8fa,	// (0x000687cd) popup_image_details_window_g2_ParamLimits

0xe90f,	// (0x000687e2) popup_image_details_window_g3_ParamLimits

0xe90f,	// (0x000687e2) popup_image_details_window_g3

0x03c9,	// (0x0005a29c) popup_image_details_window_g_ParamLimits

0xe923,	// (0x000687f6) popup_image_details_window_t1_ParamLimits

0xe935,	// (0x00068808) popup_image_details_window_t2_ParamLimits

0xe94e,	// (0x00068821) popup_image_details_window_t3_ParamLimits

0xe962,	// (0x00068835) popup_image_details_window_t4_ParamLimits

0xe97d,	// (0x00068850) popup_image_details_window_t5_ParamLimits

0x03d0,	// (0x0005a2a3) popup_image_details_window_t_ParamLimits

0x71da,	// (0x000610ad) cl_header_name_pane_ParamLimits

0x71da,	// (0x000610ad) cl_header_name_pane

0x757a,	// (0x0006144d) cl_header_name_pane_t1_ParamLimits

0x757a,	// (0x0006144d) cl_header_name_pane_t1

0x759b,	// (0x0006146e) cl_header_name_pane_t2_ParamLimits

0x759b,	// (0x0006146e) cl_header_name_pane_t2

0x75dd,	// (0x000614b0) cl_header_name_pane_t3_ParamLimits

0x75dd,	// (0x000614b0) cl_header_name_pane_t3

0x0002,

0xf9b2,	// (0x00069885) cl_header_name_pane_t_ParamLimits

0xf9b2,	// (0x00069885) cl_header_name_pane_t

0xacc1,	// (0x00064b94) navi_pane_mv_g2_ParamLimits

0x6264,	// (0x00060137) field_vitu2_entry_pane_g1_ParamLimits

0x6270,	// (0x00060143) field_vitu2_entry_pane_g2_ParamLimits

0x627c,	// (0x0006014f) field_vitu2_entry_pane_g3_ParamLimits

0x627c,	// (0x0006014f) field_vitu2_entry_pane_g3

0xf7ad,	// (0x00069680) field_vitu2_entry_pane_g_ParamLimits

0xda70,	// (0x00067943) cell_vitu2_itu_pane_g1_ParamLimits

0x62eb,	// (0x000601be) cell_vitu2_itu_pane_g2_ParamLimits

0x62eb,	// (0x000601be) cell_vitu2_itu_pane_g2

0x0001,

0xf7b9,	// (0x0006968c) cell_vitu2_itu_pane_g_ParamLimits

0xf7b9,	// (0x0006968c) cell_vitu2_itu_pane_g

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp05_ParamLimits

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp05

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp03

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp04

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp10_ParamLimits

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp10

0x7180,	// (0x00061053) bg_vkb2_func_pane_cp08

0x7167,	// (0x0006103a) bg_vkb2_func_pane_cp06

0x7174,	// (0x00061047) bg_vkb2_func_pane_cp07

0xbea2,	// (0x00065d75) bg_vkb2_func_pane_cp11_ParamLimits

0xbea2,	// (0x00065d75) bg_vkb2_func_pane_cp11

0xbeb7,	// (0x00065d8a) bg_vkb2_func_pane_cp12_ParamLimits

0xbeb7,	// (0x00065d8a) bg_vkb2_func_pane_cp12

0x9827,	// (0x000636fa) bg_vkb2_func_pane_cp09

0x6374,	// (0x00060247) bg_vkb2_func_pane_g1

0xa508,	// (0x000643db) bg_vkb2_func_pane_g2

0x637c,	// (0x0006024f) bg_vkb2_func_pane_g3

0x6384,	// (0x00060257) bg_vkb2_func_pane_g4

0xbb13,	// (0x000659e6) bg_vkb2_func_pane_g5

0x639c,	// (0x0006026f) bg_vkb2_func_pane_g6

0x63a4,	// (0x00060277) bg_vkb2_func_pane_g7

0x6394,	// (0x00060267) bg_vkb2_func_pane_g8

0xa4e8,	// (0x000643bb) bg_vkb2_func_pane_g9

0x0008,

0xf9b9,	// (0x0006988c) bg_vkb2_func_pane_g

0x74b0,	// (0x00061383) blid2_tripm_pane_g6_ParamLimits

0x74b0,	// (0x00061383) blid2_tripm_pane_g6

0xf011,	// (0x00068ee4) mp4_progress_pane_g1

0x751f,	// (0x000613f2) blid2_tripm_values_pane_ParamLimits

0x751f,	// (0x000613f2) blid2_tripm_values_pane

0x760e,	// (0x000614e1) blid2_tripm_values_pane_t1

0x761c,	// (0x000614ef) blid2_tripm_values_pane_t2

0x762a,	// (0x000614fd) blid2_tripm_values_pane_t3

0x7638,	// (0x0006150b) blid2_tripm_values_pane_t4

0x7646,	// (0x00061519) blid2_tripm_values_pane_t5

0x7654,	// (0x00061527) blid2_tripm_values_pane_t6

0x7662,	// (0x00061535) blid2_tripm_values_pane_t7

0x7670,	// (0x00061543) blid2_tripm_values_pane_t8

0x767e,	// (0x00061551) blid2_tripm_values_pane_t9

0x0008,

0xf9cc,	// (0x0006989f) blid2_tripm_values_pane_t

0x1e42,	// (0x0005bd15) call_video_pane_t1_ParamLimits

0x1e5c,	// (0x0005bd2f) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0006913d) call_video_pane_t_ParamLimits

0x34fc,	// (0x0005d3cf) msg_header_pane_g1_ParamLimits

0xaeb3,	// (0x00064d86) msg_header_pane_g2_ParamLimits

0xaeb3,	// (0x00064d86) msg_header_pane_g2

0x0001,

0xf484,	// (0x00069357) msg_header_pane_g_ParamLimits

0xf484,	// (0x00069357) msg_header_pane_g

0x9ff1,	// (0x00063ec4) main_clock2_pane_ParamLimits

0x535f,	// (0x0005f232) grid_clock2_toolbar_pane_ParamLimits

0x535f,	// (0x0005f232) grid_clock2_toolbar_pane

0x535f,	// (0x0005f232) listscroll_clock2_pane_ParamLimits

0x535f,	// (0x0005f232) listscroll_clock2_pane

0x5442,	// (0x0005f315) main_clock2_pane_t3_ParamLimits

0x5442,	// (0x0005f315) main_clock2_pane_t3

0x5464,	// (0x0005f337) main_clock2_pane_t4_ParamLimits

0x5464,	// (0x0005f337) main_clock2_pane_t4

0xbf63,	// (0x00065e36) cell_clock2_toolbar_pane

0xbf6b,	// (0x00065e3e) cell_clock2_toolbar_pane_cp01

0xbf6b,	// (0x00065e3e) cell_clock2_toolbar_pane_cp02

0xbf73,	// (0x00065e46) cell_clock2_toolbar_pane_cp03

0xbf7b,	// (0x00065e4e) list_clock2_pane

0xbf83,	// (0x00065e56) scroll_pane_cp10

0xbf8b,	// (0x00065e5e) list_single_clock2_pane_ParamLimits

0xbf8b,	// (0x00065e5e) list_single_clock2_pane

0xa260,	// (0x00064133) list_highlight_pane_cp08

0xbf98,	// (0x00065e6b) list_single_clock2_pane_t1

0xbfa6,	// (0x00065e79) list_single_clock2_pane_t2

0x0001,

0xf9df,	// (0x000698b2) list_single_clock2_pane_t

0x9827,	// (0x000636fa) bg_button_pane_cp10

0xbfb4,	// (0x00065e87) cell_clock2_toolbar_pane_g1

0x357b,	// (0x0005d44e) aid_main_viewer_pane_g1_ParamLimits

0x357b,	// (0x0005d44e) aid_main_viewer_pane_g1

0x3587,	// (0x0005d45a) aid_main_viewer_pane_g2_ParamLimits

0x3587,	// (0x0005d45a) aid_main_viewer_pane_g2

0x3593,	// (0x0005d466) aid_main_viewer_pane_g3_ParamLimits

0x3593,	// (0x0005d466) aid_main_viewer_pane_g3

0x35a2,	// (0x0005d475) aid_main_viewer_pane_g4_ParamLimits

0x35a2,	// (0x0005d475) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00069368) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00069368) aid_main_viewer_pane_g

0x9882,	// (0x00063755) main_calc_pane_ParamLimits

0x3da6,	// (0x0005dc79) main_dialer2_pane_ParamLimits

0x9890,	// (0x00063763) main_cam6_pane

0x9890,	// (0x00063763) main_vid6_pane

0x536b,	// (0x0005f23e) listscroll_gen_pane_cp06_ParamLimits

0x536b,	// (0x0005f23e) listscroll_gen_pane_cp06

0x5485,	// (0x0005f358) main_clock2_pane_t5_ParamLimits

0x5485,	// (0x0005f358) main_clock2_pane_t5

0x54dd,	// (0x0005f3b0) aid_call2_pane_cp10_ParamLimits

0x54ef,	// (0x0005f3c2) aid_call_pane_cp10_ParamLimits

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g1_ParamLimits

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5501,	// (0x0005f3d4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5501,	// (0x0005f3d4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xabc3,	// (0x00064a96) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6be,	// (0x00069591) popup_clock_analogue_window_cp10_g_ParamLimits

0x5513,	// (0x0005f3e6) popup_clock_analogue_window_cp10_t1_ParamLimits

0xf07b,	// (0x00068f4e) cell_dialer2_keypad_pane_g2_ParamLimits

0xf07b,	// (0x00068f4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf74c,	// (0x0006961f) cell_dialer2_keypad_pane_g_ParamLimits

0xf74c,	// (0x0006961f) cell_dialer2_keypad_pane_g

0x5b22,	// (0x0005f9f5) cell_dialer2_keypad_pane_t1

0x672e,	// (0x00060601) main_cset_text2_pane_ParamLimits

0x672e,	// (0x00060601) main_cset_text2_pane

0xbd28,	// (0x00065bfb) area_vitu2_query_pane_g1_ParamLimits

0x710c,	// (0x00060fdf) area_vitu2_query_pane_g2_ParamLimits

0xf901,	// (0x000697d4) area_vitu2_query_pane_g_ParamLimits

0xbdac,	// (0x00065c7f) area_vitu2_query_pane_t7_ParamLimits

0xbdac,	// (0x00065c7f) area_vitu2_query_pane_t7

0x7167,	// (0x0006103a) bg_button_pane_cp018_ParamLimits

0x7174,	// (0x00061047) bg_button_pane_cp021_ParamLimits

0x7180,	// (0x00061053) bg_button_pane_cp022_ParamLimits

0x7180,	// (0x00061053) bg_vkb2_func_pane_cp08_ParamLimits

0x7167,	// (0x0006103a) bg_vkb2_func_pane_cp06_ParamLimits

0x7174,	// (0x00061047) bg_vkb2_func_pane_cp07_ParamLimits

0x718f,	// (0x00061062) input_focus_pane_cp09_ParamLimits

0xdb96,	// (0x00067a69) cam6_autofocus_pane_ParamLimits

0xdb96,	// (0x00067a69) cam6_autofocus_pane

0x768c,	// (0x0006155f) cam6_image_uncrop_pane_ParamLimits

0x768c,	// (0x0006155f) cam6_image_uncrop_pane

0x7699,	// (0x0006156c) cam6_indi_pane_ParamLimits

0x7699,	// (0x0006156c) cam6_indi_pane

0x76af,	// (0x00061582) cam6_mode_pane_ParamLimits

0x76af,	// (0x00061582) cam6_mode_pane

0x76c1,	// (0x00061594) cam6_timer_pane_ParamLimits

0x76c1,	// (0x00061594) cam6_timer_pane

0x76cd,	// (0x000615a0) cam6_zoom_pane_ParamLimits

0x76cd,	// (0x000615a0) cam6_zoom_pane

0x76d9,	// (0x000615ac) cam6_mode_pane_g1_ParamLimits

0x76d9,	// (0x000615ac) cam6_mode_pane_g1

0x76e9,	// (0x000615bc) cam6_mode_pane_g2_ParamLimits

0x76e9,	// (0x000615bc) cam6_mode_pane_g2

0x76f9,	// (0x000615cc) cam6_mode_pane_g3_ParamLimits

0x76f9,	// (0x000615cc) cam6_mode_pane_g3

0x7709,	// (0x000615dc) cam6_mode_pane_g4_ParamLimits

0x7709,	// (0x000615dc) cam6_mode_pane_g4

0x0003,

0xf9e4,	// (0x000698b7) cam6_mode_pane_g_ParamLimits

0xf9e4,	// (0x000698b7) cam6_mode_pane_g

0xbfbc,	// (0x00065e8f) bg_tb_trans_pane_cp08_ParamLimits

0xbfbc,	// (0x00065e8f) bg_tb_trans_pane_cp08

0xbfca,	// (0x00065e9d) cam6_battery_pane_ParamLimits

0xbfca,	// (0x00065e9d) cam6_battery_pane

0xbfe0,	// (0x00065eb3) cam6_indi_pane_g1_ParamLimits

0xbfe0,	// (0x00065eb3) cam6_indi_pane_g1

0xbff2,	// (0x00065ec5) cam6_indi_pane_g2_ParamLimits

0xbff2,	// (0x00065ec5) cam6_indi_pane_g2

0xc004,	// (0x00065ed7) cam6_indi_pane_g3_ParamLimits

0xc004,	// (0x00065ed7) cam6_indi_pane_g3

0x0002,

0xf9ed,	// (0x000698c0) cam6_indi_pane_g_ParamLimits

0xf9ed,	// (0x000698c0) cam6_indi_pane_g

0xc016,	// (0x00065ee9) cam6_indi_pane_t1_ParamLimits

0xc016,	// (0x00065ee9) cam6_indi_pane_t1

0x6096,	// (0x0005ff69) cam6_autofocus_pane_g1

0x608e,	// (0x0005ff61) cam6_autofocus_pane_g2

0x60a6,	// (0x0005ff79) cam6_autofocus_pane_g3

0x609e,	// (0x0005ff71) cam6_autofocus_pane_g4

0x0003,

0xf9f4,	// (0x000698c7) cam6_autofocus_pane_g

0xc03c,	// (0x00065f0f) cam6_timer_pane_g1

0xc044,	// (0x00065f17) cam6_timer_pane_t1

0xc052,	// (0x00065f25) cam6_zoom_cont_pane

0xc05a,	// (0x00065f2d) cam6_zoom_pane_g1

0xc062,	// (0x00065f35) cam6_zoom_pane_g2

0x7719,	// (0x000615ec) cam6_zoom_pane_g3

0x0002,

0xf9fd,	// (0x000698d0) cam6_zoom_pane_g

0xe798,	// (0x0006866b) cam6_battery_pane_g1

0xe798,	// (0x0006866b) cam6_battery_pane_g2

0x0001,

0x038d,	// (0x0005a260) cam6_battery_pane_g

0xc06a,	// (0x00065f3d) cam6_zoom_cont_pane_g1

0xc073,	// (0x00065f46) cam6_zoom_cont_pane_g2

0xc07c,	// (0x00065f4f) cam6_zoom_cont_pane_g3

0x0002,

0xfa04,	// (0x000698d7) cam6_zoom_cont_pane_g

0x7736,	// (0x00061609) cam6_mode_pane_cp_ParamLimits

0x7736,	// (0x00061609) cam6_mode_pane_cp

0x7748,	// (0x0006161b) cam6_zoom_pane_cp_ParamLimits

0x7748,	// (0x0006161b) cam6_zoom_pane_cp

0x7754,	// (0x00061627) vid6_image_uncrop_cif_pane_ParamLimits

0x7754,	// (0x00061627) vid6_image_uncrop_cif_pane

0x7762,	// (0x00061635) vid6_image_uncrop_nhd_pane_ParamLimits

0x7762,	// (0x00061635) vid6_image_uncrop_nhd_pane

0x776f,	// (0x00061642) vid6_image_uncrop_vga_pane_ParamLimits

0x776f,	// (0x00061642) vid6_image_uncrop_vga_pane

0x777c,	// (0x0006164f) vid6_image_uncrop_wvga_pane_ParamLimits

0x777c,	// (0x0006164f) vid6_image_uncrop_wvga_pane

0x7789,	// (0x0006165c) vid6_indi_pane_ParamLimits

0x7789,	// (0x0006165c) vid6_indi_pane

0xbfbc,	// (0x00065e8f) bg_tb_trans_pane_cp09_ParamLimits

0xbfbc,	// (0x00065e8f) bg_tb_trans_pane_cp09

0xc090,	// (0x00065f63) cam6_battery_pane_cp_ParamLimits

0xc090,	// (0x00065f63) cam6_battery_pane_cp

0xc09c,	// (0x00065f6f) vid6_indi_pane_g1_ParamLimits

0xc09c,	// (0x00065f6f) vid6_indi_pane_g1

0xc0ae,	// (0x00065f81) vid6_indi_pane_g2_ParamLimits

0xc0ae,	// (0x00065f81) vid6_indi_pane_g2

0xc0c0,	// (0x00065f93) vid6_indi_pane_g3_ParamLimits

0xc0c0,	// (0x00065f93) vid6_indi_pane_g3

0xc0d5,	// (0x00065fa8) vid6_indi_pane_g4_ParamLimits

0xc0d5,	// (0x00065fa8) vid6_indi_pane_g4

0xc0ea,	// (0x00065fbd) vid6_indi_pane_g5_ParamLimits

0xc0ea,	// (0x00065fbd) vid6_indi_pane_g5

0x0004,

0xfa0b,	// (0x000698de) vid6_indi_pane_g_ParamLimits

0xfa0b,	// (0x000698de) vid6_indi_pane_g

0xc104,	// (0x00065fd7) vid6_indi_pane_t1_ParamLimits

0xc104,	// (0x00065fd7) vid6_indi_pane_t1

0xc11a,	// (0x00065fed) vid6_indi_pane_t2_ParamLimits

0xc11a,	// (0x00065fed) vid6_indi_pane_t2

0xc142,	// (0x00066015) vid6_indi_pane_t3_ParamLimits

0xc142,	// (0x00066015) vid6_indi_pane_t3

0xc16a,	// (0x0006603d) vid6_indi_pane_t4_ParamLimits

0xc16a,	// (0x0006603d) vid6_indi_pane_t4

0x0003,

0xfa16,	// (0x000698e9) vid6_indi_pane_t_ParamLimits

0xfa16,	// (0x000698e9) vid6_indi_pane_t

0xc18e,	// (0x00066061) wait_bar_pane_cp08

0x77a0,	// (0x00061673) main_cset_text2_pane_t1_ParamLimits

0x77a0,	// (0x00061673) main_cset_text2_pane_t1

0x7721,	// (0x000615f4) listscroll_gen_pane_cp06_t1_ParamLimits

0x7721,	// (0x000615f4) listscroll_gen_pane_cp06_t1

0x9890,	// (0x00063763) main_cam6_set_pane

0xd9b1,	// (0x00067884) bg_tb_trans_pane_cp06_ParamLimits

0xd9c7,	// (0x0006789a) cam4_indicators_pane_g1_ParamLimits

0xd9d7,	// (0x000678aa) cam4_indicators_pane_g2_ParamLimits

0xf789,	// (0x0006965c) cam4_indicators_pane_g_ParamLimits

0xd9f7,	// (0x000678ca) cam4_indicators_pane_t1_ParamLimits

0x9882,	// (0x00063755) bg_tb_trans_pane_cp07_ParamLimits

0xd9c7,	// (0x0006789a) vid4_indicators_pane_g1_ParamLimits

0xda19,	// (0x000678ec) vid4_indicators_pane_g2_ParamLimits

0xda29,	// (0x000678fc) vid4_indicators_pane_g3_ParamLimits

0xda3a,	// (0x0006790d) vid4_indicators_pane_g4_ParamLimits

0xf79b,	// (0x0006966e) vid4_indicators_pane_g_ParamLimits

0xda56,	// (0x00067929) vid4_indicators_pane_t1_ParamLimits

0xdb01,	// (0x000679d4) vid4_progress_pane_g1_ParamLimits

0xdb10,	// (0x000679e3) vid4_progress_pane_g2_ParamLimits

0xdb1f,	// (0x000679f2) vid4_progress_pane_g3_ParamLimits

0xdb2e,	// (0x00067a01) vid4_progress_pane_g4_ParamLimits

0xf94c,	// (0x0006981f) vid4_progress_pane_g_ParamLimits

0xdb46,	// (0x00067a19) vid4_progress_pane_t1_ParamLimits

0xdb5c,	// (0x00067a2f) vid4_progress_pane_t2_ParamLimits

0xdb71,	// (0x00067a44) vid4_progress_pane_t3_ParamLimits

0xf957,	// (0x0006982a) vid4_progress_pane_t_ParamLimits

0xdb86,	// (0x00067a59) wait_bar_pane_cp07_ParamLimits

0x77bb,	// (0x0006168e) main_cam6_set_pane_g2_ParamLimits

0x77bb,	// (0x0006168e) main_cam6_set_pane_g2

0x77dd,	// (0x000616b0) main_cset6_listscroll_pane_ParamLimits

0x77dd,	// (0x000616b0) main_cset6_listscroll_pane

0x77f7,	// (0x000616ca) main_cset6_slider_pane_ParamLimits

0x77f7,	// (0x000616ca) main_cset6_slider_pane

0x780d,	// (0x000616e0) main_cset6_text2_pane_ParamLimits

0x780d,	// (0x000616e0) main_cset6_text2_pane

0xc19e,	// (0x00066071) main_cset6_text_pane

0x6744,	// (0x00060617) main_cset_list_pane_copy1_ParamLimits

0x6744,	// (0x00060617) main_cset_list_pane_copy1

0x6754,	// (0x00060627) scroll_pane_cp028_copy1

0x781b,	// (0x000616ee) cset_list_set_pane_copy1

0x782d,	// (0x00061700) aid_position_infowindow_above_copy1

0x7835,	// (0x00061708) aid_position_infowindow_below_copy1

0x783d,	// (0x00061710) cset_list_set_pane_g1_copy1

0x7845,	// (0x00061718) cset_list_set_pane_g3_copy1_ParamLimits

0x7845,	// (0x00061718) cset_list_set_pane_g3_copy1

0x7854,	// (0x00061727) cset_list_set_pane_t1_copy1_ParamLimits

0x7854,	// (0x00061727) cset_list_set_pane_t1_copy1

0xb9e5,	// (0x000658b8) list_highlight_pane_cp021_copy1_ParamLimits

0xb9e5,	// (0x000658b8) list_highlight_pane_cp021_copy1

0xc1a6,	// (0x00066079) cset6_slider_pane_ParamLimits

0xc1a6,	// (0x00066079) cset6_slider_pane

0xc1d2,	// (0x000660a5) main_cset6_slider_pane_g1_ParamLimits

0xc1d2,	// (0x000660a5) main_cset6_slider_pane_g1

0x7869,	// (0x0006173c) main_cset6_slider_pane_g2_ParamLimits

0x7869,	// (0x0006173c) main_cset6_slider_pane_g2

0x6808,	// (0x000606db) main_cset6_slider_pane_g3_ParamLimits

0x6808,	// (0x000606db) main_cset6_slider_pane_g3

0x6838,	// (0x0006070b) main_cset6_slider_pane_g4_ParamLimits

0x6838,	// (0x0006070b) main_cset6_slider_pane_g4

0x6880,	// (0x00060753) main_cset6_slider_pane_g5_ParamLimits

0x6880,	// (0x00060753) main_cset6_slider_pane_g5

0x6808,	// (0x000606db) main_cset6_slider_pane_g7_ParamLimits

0x6808,	// (0x000606db) main_cset6_slider_pane_g7

0x6814,	// (0x000606e7) main_cset6_slider_pane_g8_ParamLimits

0x6814,	// (0x000606e7) main_cset6_slider_pane_g8

0x6820,	// (0x000606f3) main_cset6_slider_pane_g9_ParamLimits

0x6820,	// (0x000606f3) main_cset6_slider_pane_g9

0x682c,	// (0x000606ff) main_cset6_slider_pane_g10_ParamLimits

0x682c,	// (0x000606ff) main_cset6_slider_pane_g10

0x6838,	// (0x0006070b) main_cset6_slider_pane_g11_ParamLimits

0x6838,	// (0x0006070b) main_cset6_slider_pane_g11

0x6844,	// (0x00060717) main_cset6_slider_pane_g12_ParamLimits

0x6844,	// (0x00060717) main_cset6_slider_pane_g12

0x6850,	// (0x00060723) main_cset6_slider_pane_g13_ParamLimits

0x6850,	// (0x00060723) main_cset6_slider_pane_g13

0x685c,	// (0x0006072f) main_cset6_slider_pane_g14_ParamLimits

0x685c,	// (0x0006072f) main_cset6_slider_pane_g14

0x7891,	// (0x00061764) main_cset6_slider_pane_g15_ParamLimits

0x7891,	// (0x00061764) main_cset6_slider_pane_g15

0x6880,	// (0x00060753) main_cset6_slider_pane_g16_ParamLimits

0x6880,	// (0x00060753) main_cset6_slider_pane_g16

0x688c,	// (0x0006075f) main_cset6_slider_pane_g17_ParamLimits

0x688c,	// (0x0006075f) main_cset6_slider_pane_g17

0x0011,

0xfa1f,	// (0x000698f2) main_cset6_slider_pane_g_ParamLimits

0xfa1f,	// (0x000698f2) main_cset6_slider_pane_g

0xc1fa,	// (0x000660cd) main_cset6_slider_pane_t1_ParamLimits

0xc1fa,	// (0x000660cd) main_cset6_slider_pane_t1

0xc23b,	// (0x0006610e) main_cset6_slider_pane_t2_ParamLimits

0xc23b,	// (0x0006610e) main_cset6_slider_pane_t2

0xc266,	// (0x00066139) main_cset6_slider_pane_t3_ParamLimits

0xc266,	// (0x00066139) main_cset6_slider_pane_t3

0x78a9,	// (0x0006177c) main_cset6_slider_pane_t4_ParamLimits

0x78a9,	// (0x0006177c) main_cset6_slider_pane_t4

0x78d4,	// (0x000617a7) main_cset6_slider_pane_t5_ParamLimits

0x78d4,	// (0x000617a7) main_cset6_slider_pane_t5

0xc291,	// (0x00066164) main_cset6_slider_pane_t7_ParamLimits

0xc291,	// (0x00066164) main_cset6_slider_pane_t7

0x78ff,	// (0x000617d2) main_cset6_slider_pane_t8_ParamLimits

0x78ff,	// (0x000617d2) main_cset6_slider_pane_t8

0x7923,	// (0x000617f6) main_cset6_slider_pane_t9_ParamLimits

0x7923,	// (0x000617f6) main_cset6_slider_pane_t9

0x7947,	// (0x0006181a) main_cset6_slider_pane_t10_ParamLimits

0x7947,	// (0x0006181a) main_cset6_slider_pane_t10

0x796b,	// (0x0006183e) main_cset6_slider_pane_t11_ParamLimits

0x796b,	// (0x0006183e) main_cset6_slider_pane_t11

0xc2c7,	// (0x0006619a) main_cset6_slider_pane_t14_ParamLimits

0xc2c7,	// (0x0006619a) main_cset6_slider_pane_t14

0xc300,	// (0x000661d3) main_cset6_slider_pane_t15_ParamLimits

0xc300,	// (0x000661d3) main_cset6_slider_pane_t15

0x000b,

0xfa44,	// (0x00069917) main_cset6_slider_pane_t_ParamLimits

0xfa44,	// (0x00069917) main_cset6_slider_pane_t

0x798f,	// (0x00061862) cset_slider_pane_g1_copy1

0x7998,	// (0x0006186b) cset_slider_pane_g2_copy1

0x79a1,	// (0x00061874) cset_slider_pane_g3_copy1

0x9827,	// (0x000636fa) bg_popup_sub_pane_cp011_copy1

0xbb5a,	// (0x00065a2d) main_cset_text_pane_g1_copy1

0xbb62,	// (0x00065a35) main_cset_text_pane_t1_copy1

0xbb70,	// (0x00065a43) main_cset_text_pane_t2_copy1

0xbb7e,	// (0x00065a51) main_cset_text_pane_t3_copy1

0xbb8c,	// (0x00065a5f) main_cset_text_pane_t4_copy1

0xbb9a,	// (0x00065a6d) main_cset_text_pane_t5_copy1

0xbba8,	// (0x00065a7b) main_cset_text_pane_t6_copy1

0xbbb6,	// (0x00065a89) main_cset_text_pane_t7_copy1

0x79c7,	// (0x0006189a) main_cset_text2_pane_t1_copy1

0x9882,	// (0x00063755) main_ncimui_pane

0x3fb4,	// (0x0005de87) popup_query_ncimui_window_ParamLimits

0x3fb4,	// (0x0005de87) popup_query_ncimui_window

0x4bba,	// (0x0005ea8d) field_cale_ev2_pane_g4_ParamLimits

0x4bba,	// (0x0005ea8d) field_cale_ev2_pane_g4

0x5a14,	// (0x0005f8e7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5a14,	// (0x0005f8e7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf728,	// (0x000695fb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf728,	// (0x000695fb) cell_video_dialer_keypad_pane_g

0x5a2c,	// (0x0005f8ff) cell_video_dialer_keypad_pane_t1

0x9827,	// (0x000636fa) bg_popup_window_pane_cp012

0xaa10,	// (0x000648e3) heading_pane_cp06

0xc417,	// (0x000662ea) ncim_query_content_pane

0x9827,	// (0x000636fa) bg_popup_heading_pane_cp01

0xc41f,	// (0x000662f2) ncim_heading_pane_t1

0xc42d,	// (0x00066300) ncim_indicator_popup_pane

0xc43f,	// (0x00066312) ncim_query_button_pane

0xc453,	// (0x00066326) ncim_query_content_pane_t1

0xc465,	// (0x00066338) ncim_query_content_pane_t2

0x0005,

0xfa88,	// (0x0006995b) ncim_query_content_pane_t

0xc49f,	// (0x00066372) ncim_query_list_pane

0xc4b1,	// (0x00066384) ncim_query_popup_pane

0xc42d,	// (0x00066300) ncim_indicator_popup_pane_ParamLimits

0x7b06,	// (0x000619d9) ncim_query_content_pane_g1_ParamLimits

0x7b06,	// (0x000619d9) ncim_query_content_pane_g1

0xc453,	// (0x00066326) ncim_query_content_pane_t1_ParamLimits

0xc465,	// (0x00066338) ncim_query_content_pane_t2_ParamLimits

0x7b12,	// (0x000619e5) ncim_query_content_pane_t3_ParamLimits

0x7b12,	// (0x000619e5) ncim_query_content_pane_t3

0x7b3a,	// (0x00061a0d) ncim_query_content_pane_t4_ParamLimits

0x7b3a,	// (0x00061a0d) ncim_query_content_pane_t4

0x7b62,	// (0x00061a35) ncim_query_content_pane_t5_ParamLimits

0x7b62,	// (0x00061a35) ncim_query_content_pane_t5

0xc477,	// (0x0006634a) ncim_query_content_pane_t6_ParamLimits

0xc477,	// (0x0006634a) ncim_query_content_pane_t6

0xfa88,	// (0x0006995b) ncim_query_content_pane_t_ParamLimits

0xc49f,	// (0x00066372) ncim_query_list_pane_ParamLimits

0xc4b1,	// (0x00066384) ncim_query_popup_pane_ParamLimits

0xc4c5,	// (0x00066398) wait_bar_pane_cp04

0x9827,	// (0x000636fa) input_focus_pane_cp011

0xc4cd,	// (0x000663a0) ncim_query_popup_pane_t1

0xc4db,	// (0x000663ae) ncim_list_query_list_pane_ParamLimits

0xc4db,	// (0x000663ae) ncim_list_query_list_pane

0x9827,	// (0x000636fa) bg_button_pane_cp027

0xc4ee,	// (0x000663c1) ncim_query_button_pane_g1

0x9827,	// (0x000636fa) list_highlight_pane_cp012

0xc4f8,	// (0x000663cb) ncim_list_query_list_pane_g1

0xc500,	// (0x000663d3) ncim_list_query_list_pane_t1

0xd9e7,	// (0x000678ba) cam4_indicators_pane_g3_ParamLimits

0xd9e7,	// (0x000678ba) cam4_indicators_pane_g3

0xda46,	// (0x00067919) vid4_indicators_pane_g5_ParamLimits

0xda46,	// (0x00067919) vid4_indicators_pane_g5

0xdb3a,	// (0x00067a0d) vid4_progress_pane_g5_ParamLimits

0xdb3a,	// (0x00067a0d) vid4_progress_pane_g5

0x79f6,	// (0x000618c9) main_ncimui_pane_g1

0x7a5c,	// (0x0006192f) ncimui_group_query_pane_ParamLimits

0x7a5c,	// (0x0006192f) ncimui_group_query_pane

0x7aa4,	// (0x00061977) ncimui_list_pane_ParamLimits

0x7aa4,	// (0x00061977) ncimui_list_pane

0x7ac9,	// (0x0006199c) ncimui_text_pane_ParamLimits

0x7ac9,	// (0x0006199c) ncimui_text_pane

0x7b8a,	// (0x00061a5d) ncimui_text_pane_t1_ParamLimits

0x7b8a,	// (0x00061a5d) ncimui_text_pane_t1

0xc517,	// (0x000663ea) ncimui_list_single_graphic_pane_ParamLimits

0xc517,	// (0x000663ea) ncimui_list_single_graphic_pane

0x7ba8,	// (0x00061a7b) ncimui_query_pane_ParamLimits

0x7ba8,	// (0x00061a7b) ncimui_query_pane

0x9827,	// (0x000636fa) list_highlight_pane_cp013

0xc527,	// (0x000663fa) ncim_list_query_list_pane_t1_copy1

0xc535,	// (0x00066408) ncim_list_single_graphic_pane_g1

0xc53d,	// (0x00066410) ncim_query_button_pane_cp01

0xc549,	// (0x0006641c) ncim_query_entry_pane_ParamLimits

0xc549,	// (0x0006641c) ncim_query_entry_pane

0xc55c,	// (0x0006642f) ncimui_query_pane_g1

0xc568,	// (0x0006643b) ncimui_query_pane_t1_ParamLimits

0xc568,	// (0x0006643b) ncimui_query_pane_t1

0xb9e5,	// (0x000658b8) input_focus_pane_cp012

0xc581,	// (0x00066454) ncim_query_entry_pane_t1

0x9ff1,	// (0x00063ec4) main_im_pane_ParamLimits

0x9882,	// (0x00063755) main_mobtv_pane_ParamLimits

0x9882,	// (0x00063755) main_mobtv_pane

0x6820,	// (0x000606f3) main_cset6_slider_pane_g18_ParamLimits

0x6820,	// (0x000606f3) main_cset6_slider_pane_g18

0x6850,	// (0x00060723) main_cset6_slider_pane_g19_ParamLimits

0x6850,	// (0x00060723) main_cset6_slider_pane_g19

0xc593,	// (0x00066466) bg_main_mobtv_pane_ParamLimits

0xc593,	// (0x00066466) bg_main_mobtv_pane

0x7bb8,	// (0x00061a8b) main_mobtv_info_pane

0x7bc1,	// (0x00061a94) main_mobtv_loading_pane_ParamLimits

0x7bc1,	// (0x00061a94) main_mobtv_loading_pane

0xc5a1,	// (0x00066474) main_mobtv_pg_channel_list_pane

0xc5ab,	// (0x0006647e) main_mobtv_pg_hdr_pane

0x7bce,	// (0x00061aa1) main_mobtv_programe_curr_pane_ParamLimits

0x7bce,	// (0x00061aa1) main_mobtv_programe_curr_pane

0x7bdb,	// (0x00061aae) main_mobtv_programe_next_pane_ParamLimits

0x7bdb,	// (0x00061aae) main_mobtv_programe_next_pane

0xc5b4,	// (0x00066487) popup_mobtv_noti_window

0xe798,	// (0x0006866b) main_tv_pg_hdr_pane_g1

0xc5bc,	// (0x0006648f) main_tv_pg_hdr_pane_g2

0xc5c4,	// (0x00066497) main_tv_pg_hdr_pane_g3

0xc5cc,	// (0x0006649f) main_tv_pg_hdr_pane_g4

0xc5d4,	// (0x000664a7) main_tv_pg_hdr_pane_g5

0xc5dc,	// (0x000664af) main_tv_pg_hdr_pane_g6

0xc5e4,	// (0x000664b7) main_tv_pg_hdr_pane_g7

0xc5ec,	// (0x000664bf) main_tv_pg_hdr_pane_g8

0xc5f4,	// (0x000664c7) main_tv_pg_hdr_pane_g9

0xc5fc,	// (0x000664cf) main_tv_pg_hdr_pane_g10

0xc606,	// (0x000664d9) main_tv_pg_hdr_pane_g11

0x000a,

0xfa95,	// (0x00069968) main_tv_pg_hdr_pane_g

0xc610,	// (0x000664e3) main_tv_pg_hdr_pane_t1

0xc61e,	// (0x000664f1) main_tv_pg_hdr_pane_t2

0xc62c,	// (0x000664ff) main_tv_pg_hdr_pane_t3

0xc63a,	// (0x0006650d) main_tv_pg_hdr_pane_t4

0xc648,	// (0x0006651b) main_tv_pg_hdr_pane_t5

0x0004,

0xfaac,	// (0x0006997f) main_tv_pg_hdr_pane_t

0xc656,	// (0x00066529) single_mobtv_pg_channel_pane_ParamLimits

0xc656,	// (0x00066529) single_mobtv_pg_channel_pane

0xc668,	// (0x0006653b) single_mobtv_pg_channel_table_pane

0xc671,	// (0x00066544) single_mobtv_pg_channel_thumb_pane

0xc67a,	// (0x0006654d) single_tv_pg_channel_pane_g1

0xc683,	// (0x00066556) single_tv_pg_channel_pane_g2

0x0001,

0xfab7,	// (0x0006998a) single_tv_pg_channel_pane_g

0xe9c7,	// (0x0006889a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe9c7,	// (0x0006889a) bg_single_mobtv_pg_channel_thumb_pane

0xc68c,	// (0x0006655f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc68c,	// (0x0006655f) single_mobtv_pg_channel_thumb_pane_g1

0xc69a,	// (0x0006656d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc69a,	// (0x0006656d) single_mobtv_pg_channel_thumb_pane_g2

0xc6a6,	// (0x00066579) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc6a6,	// (0x00066579) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfabc,	// (0x0006998f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfabc,	// (0x0006998f) single_mobtv_pg_channel_thumb_pane_g

0xc6b2,	// (0x00066585) single_mobtv_pg_channel_thumb_pane_t1

0xc6c0,	// (0x00066593) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfac3,	// (0x00069996) single_mobtv_pg_channel_thumb_pane_t

0xe798,	// (0x0006866b) bg_single_mobtv_pg_channel_table_pane_g1

0xe798,	// (0x0006866b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x038d,	// (0x0005a260) bg_single_mobtv_pg_channel_table_pane_g

0xc6ce,	// (0x000665a1) single_mobtv_pg_channel_table_pane_t1

0xc6dc,	// (0x000665af) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfac8,	// (0x0006999b) single_mobtv_pg_channel_table_pane_t

0x7bf0,	// (0x00061ac3) main_mobtv_info_pane_g1_ParamLimits

0x7bf0,	// (0x00061ac3) main_mobtv_info_pane_g1

0x7c0c,	// (0x00061adf) main_mobtv_info_pane_t1_ParamLimits

0x7c0c,	// (0x00061adf) main_mobtv_info_pane_t1

0x7c72,	// (0x00061b45) main_mobtv_info_pane_t2_ParamLimits

0x7c72,	// (0x00061b45) main_mobtv_info_pane_t2

0x0002,

0xfad2,	// (0x000699a5) main_mobtv_info_pane_t_ParamLimits

0xfad2,	// (0x000699a5) main_mobtv_info_pane_t

0x7cf5,	// (0x00061bc8) wait_bar_pane_cp05

0x7d05,	// (0x00061bd8) main_mobtv_loading_pane_g1_ParamLimits

0x7d05,	// (0x00061bd8) main_mobtv_loading_pane_g1

0x7d16,	// (0x00061be9) main_mobtv_loading_pane_g2_ParamLimits

0x7d16,	// (0x00061be9) main_mobtv_loading_pane_g2

0x7d22,	// (0x00061bf5) main_mobtv_loading_pane_g3_ParamLimits

0x7d22,	// (0x00061bf5) main_mobtv_loading_pane_g3

0x0002,

0xfad9,	// (0x000699ac) main_mobtv_loading_pane_g_ParamLimits

0xfad9,	// (0x000699ac) main_mobtv_loading_pane_g

0xc6ea,	// (0x000665bd) main_mobtv_loading_pane_t1_ParamLimits

0xc6ea,	// (0x000665bd) main_mobtv_loading_pane_t1

0xc702,	// (0x000665d5) main_mobtv_loading_pane_t2_ParamLimits

0xc702,	// (0x000665d5) main_mobtv_loading_pane_t2

0x0001,

0xfae0,	// (0x000699b3) main_mobtv_loading_pane_t_ParamLimits

0xfae0,	// (0x000699b3) main_mobtv_loading_pane_t

0x7d33,	// (0x00061c06) wait_bar_pane_cp06_ParamLimits

0x7d33,	// (0x00061c06) wait_bar_pane_cp06

0xc726,	// (0x000665f9) main_mobtv_programe_curr_pane_t1

0xc734,	// (0x00066607) main_mobtv_programe_curr_pane_t2

0x0001,

0xfae5,	// (0x000699b8) main_mobtv_programe_curr_pane_t

0xc742,	// (0x00066615) main_mobtv_programe_next_pane_t1

0xc750,	// (0x00066623) main_mobtv_programe_next_pane_t2

0xc75e,	// (0x00066631) main_mobtv_programe_next_pane_t3

0x0002,

0xfaea,	// (0x000699bd) main_mobtv_programe_next_pane_t

0x9827,	// (0x000636fa) bg_popup_mobtv_noti_window_pane

0xc76c,	// (0x0006663f) popup_mobtv_noti_window_g1

0xc774,	// (0x00066647) popup_mobtv_noti_window_t1

0xc782,	// (0x00066655) popup_mobtv_noti_window_t2

0x0001,

0xfaf1,	// (0x000699c4) popup_mobtv_noti_window_t

0xe798,	// (0x0006866b) bg_popup_mobtv_noti_window_pane_g1

0x9890,	// (0x00063763) sc_clock_pane

0x9890,	// (0x00063763) main_fs_bigclock_pane

0x7509,	// (0x000613dc) blid2_tripm_pane_t4_ParamLimits

0x7509,	// (0x000613dc) blid2_tripm_pane_t4

0x7d42,	// (0x00061c15) sc_clock_pane_g1_ParamLimits

0x7d42,	// (0x00061c15) sc_clock_pane_g1

0x7d54,	// (0x00061c27) sc_clock_pane_t1_ParamLimits

0x7d54,	// (0x00061c27) sc_clock_pane_t1

0x7d76,	// (0x00061c49) sc_clock_pane_t2_ParamLimits

0x7d76,	// (0x00061c49) sc_clock_pane_t2

0x7d8c,	// (0x00061c5f) sc_clock_pane_t3_ParamLimits

0x7d8c,	// (0x00061c5f) sc_clock_pane_t3

0x0004,

0xfaf6,	// (0x000699c9) sc_clock_pane_t_ParamLimits

0xfaf6,	// (0x000699c9) sc_clock_pane_t

0x8d6f,	// (0x00062c42) main_fs_bigclock_indicator_pane_ParamLimits

0x8d6f,	// (0x00062c42) main_fs_bigclock_indicator_pane

0x7e28,	// (0x00061cfb) main_fs_bigclock_pane_g1_ParamLimits

0x7e28,	// (0x00061cfb) main_fs_bigclock_pane_g1

0x8d7b,	// (0x00062c4e) main_fs_bigclock_pane_t1_ParamLimits

0x8d7b,	// (0x00062c4e) main_fs_bigclock_pane_t1

0x8d8d,	// (0x00062c60) main_fs_bigclock_pane_t2_ParamLimits

0x8d8d,	// (0x00062c60) main_fs_bigclock_pane_t2

0x8d9f,	// (0x00062c72) main_fs_bigclock_pane_t3_ParamLimits

0x8d9f,	// (0x00062c72) main_fs_bigclock_pane_t3

0x0002,

0xfcf7,	// (0x00069bca) main_fs_bigclock_pane_t_ParamLimits

0xfcf7,	// (0x00069bca) main_fs_bigclock_pane_t

0xd27d,	// (0x00067150) main_fs_bigclock_indicator_pane_g1

0xc447,	// (0x0006631a) ncim_query_content_pane_g2_ParamLimits

0xc447,	// (0x0006631a) ncim_query_content_pane_g2

0x0001,

0xfa83,	// (0x00069956) ncim_query_content_pane_g_ParamLimits

0xfa83,	// (0x00069956) ncim_query_content_pane_g

0x7da3,	// (0x00061c76) sc_clock_pane_t4_ParamLimits

0x7da3,	// (0x00061c76) sc_clock_pane_t4

0x9882,	// (0x00063755) main_radioblah_pane

0xd94d,	// (0x00067820) cell_call4_button_pane_t1_copy1_ParamLimits

0xd94d,	// (0x00067820) cell_call4_button_pane_t1_copy1

0x7a0e,	// (0x000618e1) main_ncimui_pane_t1_ParamLimits

0x7a0e,	// (0x000618e1) main_ncimui_pane_t1

0x7a28,	// (0x000618fb) main_ncimui_pane_t2_ParamLimits

0x7a28,	// (0x000618fb) main_ncimui_pane_t2

0x0002,

0xfa7c,	// (0x0006994f) main_ncimui_pane_t_ParamLimits

0xfa7c,	// (0x0006994f) main_ncimui_pane_t

0xc8c3,	// (0x00066796) main_radioblah_anim_pane_ParamLimits

0xc8c3,	// (0x00066796) main_radioblah_anim_pane

0xc8d4,	// (0x000667a7) main_radioblah_info_pane_ParamLimits

0xc8d4,	// (0x000667a7) main_radioblah_info_pane

0xc8e8,	// (0x000667bb) main_radioblah_pane_t1_ParamLimits

0xc8e8,	// (0x000667bb) main_radioblah_pane_t1

0xc904,	// (0x000667d7) main_radioblah_pane_t2_ParamLimits

0xc904,	// (0x000667d7) main_radioblah_pane_t2

0x0003,

0xfb17,	// (0x000699ea) main_radioblah_pane_t_ParamLimits

0xfb17,	// (0x000699ea) main_radioblah_pane_t

0x7e72,	// (0x00061d45) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7e72,	// (0x00061d45) main_radioblah_rocker_ctrl_pane

0xc94c,	// (0x0006681f) main_radioblah_info_pane_t1_ParamLimits

0xc94c,	// (0x0006681f) main_radioblah_info_pane_t1

0x7ec6,	// (0x00061d99) main_radioblah_info_pane_t2_ParamLimits

0x7ec6,	// (0x00061d99) main_radioblah_info_pane_t2

0x0003,

0xfb20,	// (0x000699f3) main_radioblah_info_pane_t_ParamLimits

0xfb20,	// (0x000699f3) main_radioblah_info_pane_t

0xe798,	// (0x0006866b) main_radioblah_rocker_ctrl_pane_g1

0x7f74,	// (0x00061e47) main_radioblah_rocker_ctrl_pane_g2

0x7f7c,	// (0x00061e4f) main_radioblah_rocker_ctrl_pane_g3

0x7f84,	// (0x00061e57) main_radioblah_rocker_ctrl_pane_g4

0x7f8c,	// (0x00061e5f) main_radioblah_rocker_ctrl_pane_g5

0x7f94,	// (0x00061e67) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb29,	// (0x000699fc) main_radioblah_rocker_ctrl_pane_g

0x79c7,	// (0x0006189a) main_cset_text2_pane_t1_copy1_ParamLimits

0xd9a9,	// (0x0006787c) cam4_image_uncrop_qvga_pane

0xda11,	// (0x000678e4) vid4_image_uncrop_qcif_pane

0xdb96,	// (0x00067a69) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb96,	// (0x00067a69) cam6_image_uncrop_qvga_pane

0xc084,	// (0x00065f57) vid6_image_uncrop_qcif_pane_ParamLimits

0xc084,	// (0x00065f57) vid6_image_uncrop_qcif_pane

0x9827,	// (0x000636fa) bg_popup_preview_window_pane_cp03

0xc3ed,	// (0x000662c0) list_cset_text2_pane

0xc3f5,	// (0x000662c8) main_cset6_text2_pane_g1

0xc3fd,	// (0x000662d0) main_cset6_text2_pane_t1

0x7f9c,	// (0x00061e6f) list_cset_text2_pane_t1_ParamLimits

0x7f9c,	// (0x00061e6f) list_cset_text2_pane_t1

0x9882,	// (0x00063755) main_radioblah_pane_ParamLimits

0x7ce3,	// (0x00061bb6) main_mobtv_info_pane_t3_ParamLimits

0x7ce3,	// (0x00061bb6) main_mobtv_info_pane_t3

0x7e60,	// (0x00061d33) main_radioblah_pane_g1

0x7e9a,	// (0x00061d6d) main_radioblah_info_pane_g1

0x7f19,	// (0x00061dec) main_radioblah_info_pane_t3_ParamLimits

0x7f19,	// (0x00061dec) main_radioblah_info_pane_t3

0x2b2e,	// (0x0005ca01) highlight_cell_cale_month_pane_ParamLimits

0x2b2e,	// (0x0005ca01) highlight_cell_cale_month_pane

0x9890,	// (0x00063763) main_phob_fisheye_pane

0xeaa3,	// (0x00068976) scroll_pane_cp0031_ParamLimits

0xeaa3,	// (0x00068976) scroll_pane_cp0031

0xc18e,	// (0x00066061) wait_bar_pane_cp08_ParamLimits

0x781b,	// (0x000616ee) cset_list_set_pane_copy1_ParamLimits

0xc986,	// (0x00066859) highlight_cell_cale_month_pane_g1

0x7fb5,	// (0x00061e88) highlight_cell_cale_month_pane_t1

0xc98e,	// (0x00066861) list_gen_pane_cp01

0x6754,	// (0x00060627) scroll_pane_01

0xc997,	// (0x0006686a) list_single_double_fisheye_pane

0xc9a0,	// (0x00066873) list_double_fisheye_pane_g1_ParamLimits

0xc9a0,	// (0x00066873) list_double_fisheye_pane_g1

0xc9ac,	// (0x0006687f) list_double_fisheye_pane_g2_ParamLimits

0xc9ac,	// (0x0006687f) list_double_fisheye_pane_g2

0xc9c0,	// (0x00066893) list_double_fisheye_pane_g3_ParamLimits

0xc9c0,	// (0x00066893) list_double_fisheye_pane_g3

0x0004,

0xfb36,	// (0x00069a09) list_double_fisheye_pane_g_ParamLimits

0xfb36,	// (0x00069a09) list_double_fisheye_pane_g

0xc9e9,	// (0x000668bc) list_double_fisheye_pane_t1_ParamLimits

0xc9e9,	// (0x000668bc) list_double_fisheye_pane_t1

0xca04,	// (0x000668d7) list_double_fisheye_pane_t2_ParamLimits

0xca04,	// (0x000668d7) list_double_fisheye_pane_t2

0x0001,

0xfb41,	// (0x00069a14) list_double_fisheye_pane_t_ParamLimits

0xfb41,	// (0x00069a14) list_double_fisheye_pane_t

0x9890,	// (0x00063763) main_call5_pane

0x7dcc,	// (0x00061c9f) sc_swipe_pane_ParamLimits

0x7dcc,	// (0x00061c9f) sc_swipe_pane

0x7fd4,	// (0x00061ea7) call5_image_pane_ParamLimits

0x7fd4,	// (0x00061ea7) call5_image_pane

0x7fe9,	// (0x00061ebc) call5_swipe_1_pane_ParamLimits

0x7fe9,	// (0x00061ebc) call5_swipe_1_pane

0x7ffa,	// (0x00061ecd) call5_swipe_2_pane_ParamLimits

0x7ffa,	// (0x00061ecd) call5_swipe_2_pane

0x801f,	// (0x00061ef2) popup_call5_audio_first_window_ParamLimits

0x801f,	// (0x00061ef2) popup_call5_audio_first_window

0xe9c7,	// (0x0006889a) call5_swipe_1_pane_g1_ParamLimits

0xe9c7,	// (0x0006889a) call5_swipe_1_pane_g1

0xca26,	// (0x000668f9) call5_swipe_1_pane_g2_ParamLimits

0xca26,	// (0x000668f9) call5_swipe_1_pane_g2

0x0001,

0xfb46,	// (0x00069a19) call5_swipe_1_pane_g_ParamLimits

0xfb46,	// (0x00069a19) call5_swipe_1_pane_g

0xca32,	// (0x00066905) call5_swipe_1_pane_t1_ParamLimits

0xca32,	// (0x00066905) call5_swipe_1_pane_t1

0xe9c7,	// (0x0006889a) call5_swipe_2_pane_g1_ParamLimits

0xe9c7,	// (0x0006889a) call5_swipe_2_pane_g1

0xca47,	// (0x0006691a) call5_swipe_2_pane_g2_ParamLimits

0xca47,	// (0x0006691a) call5_swipe_2_pane_g2

0x0001,

0xfb4b,	// (0x00069a1e) call5_swipe_2_pane_g_ParamLimits

0xfb4b,	// (0x00069a1e) call5_swipe_2_pane_g

0xca53,	// (0x00066926) call5_swipe_2_pane_t1_ParamLimits

0xca53,	// (0x00066926) call5_swipe_2_pane_t1

0xca68,	// (0x0006693b) sc_swipe_pane_g1_ParamLimits

0xca68,	// (0x0006693b) sc_swipe_pane_g1

0xca75,	// (0x00066948) sc_swipe_pane_g2_ParamLimits

0xca75,	// (0x00066948) sc_swipe_pane_g2

0x0001,

0xfb50,	// (0x00069a23) sc_swipe_pane_g_ParamLimits

0xfb50,	// (0x00069a23) sc_swipe_pane_g

0xca81,	// (0x00066954) sc_swipe_pane_t1_ParamLimits

0xca81,	// (0x00066954) sc_swipe_pane_t1

0x9890,	// (0x00063763) main_cmail_launcher_pane

0x802e,	// (0x00061f01) aid_size_cell_cmail_l_ParamLimits

0x802e,	// (0x00061f01) aid_size_cell_cmail_l

0x8047,	// (0x00061f1a) grid_cmail_l_pane_ParamLimits

0x8047,	// (0x00061f1a) grid_cmail_l_pane

0x805c,	// (0x00061f2f) cell_cmail_l_pane_ParamLimits

0x805c,	// (0x00061f2f) cell_cmail_l_pane

0x807e,	// (0x00061f51) cell_cmail_l_pane_g1_ParamLimits

0x807e,	// (0x00061f51) cell_cmail_l_pane_g1

0x808e,	// (0x00061f61) cell_cmail_l_pane_t1_ParamLimits

0x808e,	// (0x00061f61) cell_cmail_l_pane_t1

0x80a4,	// (0x00061f77) cell_cmail_l_pane_t2_ParamLimits

0x80a4,	// (0x00061f77) cell_cmail_l_pane_t2

0x0001,

0xfb55,	// (0x00069a28) cell_cmail_l_pane_t_ParamLimits

0xfb55,	// (0x00069a28) cell_cmail_l_pane_t

0xb9e5,	// (0x000658b8) grid_highlight_pane_cp018_ParamLimits

0xb9e5,	// (0x000658b8) grid_highlight_pane_cp018

0x0dd0,	// (0x0005aca3) main2_pane_ParamLimits

0x0dd0,	// (0x0005aca3) main2_pane

0xa0f4,	// (0x00063fc7) popup_sp_fs_action_menu_bg_pane_g1

0xa0fc,	// (0x00063fcf) popup_sp_fs_action_menu_bg_pane_g2

0xa104,	// (0x00063fd7) popup_sp_fs_action_menu_bg_pane_g3

0xa10c,	// (0x00063fdf) popup_sp_fs_action_menu_bg_pane_g4

0xa114,	// (0x00063fe7) popup_sp_fs_action_menu_bg_pane_g5

0xa11c,	// (0x00063fef) popup_sp_fs_action_menu_bg_pane_g6

0xa124,	// (0x00063ff7) popup_sp_fs_action_menu_bg_pane_g7

0xa12c,	// (0x00063fff) popup_sp_fs_action_menu_bg_pane_g8

0xa134,	// (0x00064007) popup_sp_fs_action_menu_bg_pane_g9

0xa13c,	// (0x0006400f) popup_sp_fs_action_menu_bg_pane_g10

0xa13c,	// (0x0006400f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00069059) popup_sp_fs_action_menu_bg_pane_g

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g3_g1

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t3_g3_g2

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00069107) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00069107) list_medium_line_x2_t3_g3_g

0x1cd5,	// (0x0005bba8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1cd5,	// (0x0005bba8) list_medium_line_x2_t3_g3_t1

0x1cea,	// (0x0005bbbd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cea,	// (0x0005bbbd) list_medium_line_x2_t3_g3_t2

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0006910e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0006910e) list_medium_line_x2_t3_g3_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g2_g1

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00069115) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00069115) list_medium_line_x2_t3_g2_g

0x1d11,	// (0x0005bbe4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d11,	// (0x0005bbe4) list_medium_line_x2_t3_g2_t1

0x1d27,	// (0x0005bbfa) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d27,	// (0x0005bbfa) list_medium_line_x2_t3_g2_t2

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0006911a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0006911a) list_medium_line_x2_t3_g2_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t4_g4_g1

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t4_g4_g2

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t4_g4_g3

0x1d45,	// (0x0005bc18) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d45,	// (0x0005bc18) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x00069121) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x00069121) list_medium_line_x2_t4_g4_g

0x1d51,	// (0x0005bc24) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d51,	// (0x0005bc24) list_medium_line_x2_t4_g4_t1

0x1d6b,	// (0x0005bc3e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d6b,	// (0x0005bc3e) list_medium_line_x2_t4_g4_t2

0x1d80,	// (0x0005bc53) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d80,	// (0x0005bc53) list_medium_line_x2_t4_g4_t3

0x1d95,	// (0x0005bc68) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d95,	// (0x0005bc68) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0006912a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0006912a) list_medium_line_x2_t4_g4_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g4_g1

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t2_g4_g2

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t2_g4_g3

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00069191) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00069191) list_medium_line_x2_t2_g4_g

0x2b54,	// (0x0005ca27) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2b54,	// (0x0005ca27) list_medium_line_x2_t2_g4_t1

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0006919a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0006919a) list_medium_line_x2_t2_g4_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g3_g1

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t2_g3_g2

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00069107) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00069107) list_medium_line_x2_t2_g3_g

0x2b69,	// (0x0005ca3c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2b69,	// (0x0005ca3c) list_medium_line_x2_t2_g3_t1

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0006919f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0006919f) list_medium_line_x2_t2_g3_t

0x2cb5,	// (0x0005cb88) main_sp_fs_list_pane_ParamLimits

0x2cb5,	// (0x0005cb88) main_sp_fs_list_pane

0x2cc2,	// (0x0005cb95) sp_fs_scroll_pane_ParamLimits

0x2cc2,	// (0x0005cb95) sp_fs_scroll_pane

0x2ccf,	// (0x0005cba2) list_medium_line_x2_t3_t1

0x2cdf,	// (0x0005cbb2) list_medium_line_x2_t3_t2

0x2ced,	// (0x0005cbc0) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000691ea) list_medium_line_x2_t3_t

0x2cfb,	// (0x0005cbce) list_medium_line_x3_t4_t1

0x2d0b,	// (0x0005cbde) list_medium_line_x3_t4_t2

0x2d19,	// (0x0005cbec) list_medium_line_x3_t4_t3

0x2d27,	// (0x0005cbfa) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000691f1) list_medium_line_x3_t4_t

0x2d35,	// (0x0005cc08) list_medium_line_x4_t5_t1

0x2d45,	// (0x0005cc18) list_medium_line_x4_t5_t2

0x2d19,	// (0x0005cbec) list_medium_line_x4_t5_t3

0x2d53,	// (0x0005cc26) list_medium_line_x4_t5_t4

0x2d27,	// (0x0005cbfa) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000691fa) list_medium_line_x4_t5_t

0x1cb1,	// (0x0005bb84) list_medium_line_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_t4_g4_g1

0x1d45,	// (0x0005bc18) list_medium_line_t4_g4_g2_ParamLimits

0x1d45,	// (0x0005bc18) list_medium_line_t4_g4_g2

0x2d61,	// (0x0005cc34) list_medium_line_t4_g4_g3_ParamLimits

0x2d61,	// (0x0005cc34) list_medium_line_t4_g4_g3

0x1cc9,	// (0x0005bb9c) list_medium_line_t4_g4_g4_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00069205) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00069205) list_medium_line_t4_g4_g

0x2d6d,	// (0x0005cc40) list_medium_line_t4_g4_t1_ParamLimits

0x2d6d,	// (0x0005cc40) list_medium_line_t4_g4_t1

0x2d82,	// (0x0005cc55) list_medium_line_t4_g4_t2_ParamLimits

0x2d82,	// (0x0005cc55) list_medium_line_t4_g4_t2

0x2d98,	// (0x0005cc6b) list_medium_line_t4_g4_t3_ParamLimits

0x2d98,	// (0x0005cc6b) list_medium_line_t4_g4_t3

0x2dae,	// (0x0005cc81) list_medium_line_t4_g4_t4_ParamLimits

0x2dae,	// (0x0005cc81) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0006920e) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0006920e) list_medium_line_t4_g4_t

0x2e84,	// (0x0005cd57) chi_dic_find_pane_g1

0x3dba,	// (0x0005dc8d) main_tport_pane

0x6c12,	// (0x00060ae5) list_medium_line_plain_t1

0x6cba,	// (0x00060b8d) list_medium_line_t2_g2_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t2_g2_g1

0x6cc6,	// (0x00060b99) list_medium_line_t2_g2_g2_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_t2_g2_g2

0x0001,

0xf892,	// (0x00069765) list_medium_line_t2_g2_g_ParamLimits

0xf892,	// (0x00069765) list_medium_line_t2_g2_g

0x6cd2,	// (0x00060ba5) list_medium_line_t2_g2_t1_ParamLimits

0x6cd2,	// (0x00060ba5) list_medium_line_t2_g2_t1

0x6cec,	// (0x00060bbf) list_medium_line_t2_g2_t2_ParamLimits

0x6cec,	// (0x00060bbf) list_medium_line_t2_g2_t2

0x0001,

0xf897,	// (0x0006976a) list_medium_line_t2_g2_t_ParamLimits

0xf897,	// (0x0006976a) list_medium_line_t2_g2_t

0xbe2a,	// (0x00065cfd) aid_sp_fs_list_icon_a_sm

0xbe32,	// (0x00065d05) aid_sp_fs_list_icon_d

0xbe3a,	// (0x00065d0d) aid_sp_fs_text_primary

0xbe43,	// (0x00065d16) aid_sp_fs_text_secondary

0xbe4c,	// (0x00065d1f) list_medium_line

0xbe4c,	// (0x00065d1f) list_medium_line_g2

0xbe4c,	// (0x00065d1f) list_medium_line_g3

0xbe4c,	// (0x00065d1f) list_medium_line_plain

0xbe4c,	// (0x00065d1f) list_medium_line_plain_t2

0xbe4c,	// (0x00065d1f) list_medium_line_plain_t3

0xbe4c,	// (0x00065d1f) list_medium_line_right_icon

0xbe4c,	// (0x00065d1f) list_medium_line_right_iconx2

0xbe4c,	// (0x00065d1f) list_medium_line_t2

0xbe4c,	// (0x00065d1f) list_medium_line_t2_g2

0xbe4c,	// (0x00065d1f) list_medium_line_t2_g3

0xbe4c,	// (0x00065d1f) list_medium_line_t2_right_icon

0xbe4c,	// (0x00065d1f) list_medium_line_t2_right_iconx2

0xbe4c,	// (0x00065d1f) list_medium_line_t3

0xbe4c,	// (0x00065d1f) list_medium_line_t3_g2

0xbe4c,	// (0x00065d1f) list_medium_line_t3_g3

0xbe4c,	// (0x00065d1f) list_medium_line_t3_right_iconx2

0xbe55,	// (0x00065d28) list_medium_line_t4_g4

0xbe4c,	// (0x00065d1f) list_medium_line_x2

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t2_g2

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t2_g3

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t2_g4

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t3

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t3_g2

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t3_g3

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t3_g4

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t4_g2

0xbe4c,	// (0x00065d1f) list_medium_line_x2_t4_g4

0xbe5e,	// (0x00065d31) list_medium_line_x3

0xbe5e,	// (0x00065d31) list_medium_line_x3_t4

0xbe5e,	// (0x00065d31) list_medium_line_x3_t4_g4

0xbe55,	// (0x00065d28) list_medium_line_x4_t4

0xbe55,	// (0x00065d28) list_medium_line_x4_t4_g7

0xbe55,	// (0x00065d28) list_medium_line_x4_t5

0x72c6,	// (0x00061199) list_single_fs_dyc_pane_ParamLimits

0x72c6,	// (0x00061199) list_single_fs_dyc_pane

0x1cb1,	// (0x0005bb84) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x4_t4_g7_g1

0xc339,	// (0x0006620c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc339,	// (0x0006620c) list_medium_line_x4_t4_g7_g2

0xc345,	// (0x00066218) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc345,	// (0x00066218) list_medium_line_x4_t4_g7_g3

0xc354,	// (0x00066227) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc354,	// (0x00066227) list_medium_line_x4_t4_g7_g4

0xc360,	// (0x00066233) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc360,	// (0x00066233) list_medium_line_x4_t4_g7_g5

0xc36f,	// (0x00066242) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc36f,	// (0x00066242) list_medium_line_x4_t4_g7_g6

0xc37e,	// (0x00066251) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc37e,	// (0x00066251) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa5d,	// (0x00069930) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa5d,	// (0x00069930) list_medium_line_x4_t4_g7_g

0xc38a,	// (0x0006625d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc38a,	// (0x0006625d) list_medium_line_x4_t4_g7_t1

0xc39f,	// (0x00066272) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc39f,	// (0x00066272) list_medium_line_x4_t4_g7_t2

0xc3b4,	// (0x00066287) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc3b4,	// (0x00066287) list_medium_line_x4_t4_g7_t3

0xc3c9,	// (0x0006629c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc3c9,	// (0x0006629c) list_medium_line_x4_t4_g7_t4

0xc3db,	// (0x000662ae) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc3db,	// (0x000662ae) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa6c,	// (0x0006993f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa6c,	// (0x0006993f) list_medium_line_x4_t4_g7_t

0x79aa,	// (0x0006187d) list_single_dyc_row_pane_ParamLimits

0x79aa,	// (0x0006187d) list_single_dyc_row_pane

0x7fc3,	// (0x00061e96) call5_gesture_pane_ParamLimits

0x7fc3,	// (0x00061e96) call5_gesture_pane

0x800b,	// (0x00061ede) call5_windows_pane_ParamLimits

0x800b,	// (0x00061ede) call5_windows_pane

0x80bc,	// (0x00061f8f) call5_swipe_1_pane_cp_ParamLimits

0x80bc,	// (0x00061f8f) call5_swipe_1_pane_cp

0x80c8,	// (0x00061f9b) call5_swipe_2_pane_cp_ParamLimits

0x80c8,	// (0x00061f9b) call5_swipe_2_pane_cp

0xa260,	// (0x00064133) call5_image_pane_cp

0x80d4,	// (0x00061fa7) popup_call5_audio_first_window_cp_ParamLimits

0x80d4,	// (0x00061fa7) popup_call5_audio_first_window_cp

0xca68,	// (0x0006693b) call5_swipe_1_pane_g1_cp_ParamLimits

0xca68,	// (0x0006693b) call5_swipe_1_pane_g1_cp

0xca96,	// (0x00066969) call5_swipe_1_pane_g2_cp

0xca81,	// (0x00066954) call5_swipe_1_pane_t1_cp_ParamLimits

0xca81,	// (0x00066954) call5_swipe_1_pane_t1_cp

0xca68,	// (0x0006693b) call5_swipe_2_pane_g1_cp_ParamLimits

0xca68,	// (0x0006693b) call5_swipe_2_pane_g1_cp

0xca9e,	// (0x00066971) call5_swipe_2_pane_g2_cp

0xcaa6,	// (0x00066979) call5_swipe_2_pane_t1_cp_ParamLimits

0xcaa6,	// (0x00066979) call5_swipe_2_pane_t1_cp

0xb9e5,	// (0x000658b8) main_sp_fs_email_pane

0xcabb,	// (0x0006698e) main_sp_fs_listscroll_pane_te

0x80e0,	// (0x00061fb3) popup_sp_fs_action_menu_pane_ParamLimits

0x80e0,	// (0x00061fb3) popup_sp_fs_action_menu_pane

0xe798,	// (0x0006866b) bg_sp_fs_ctrlbar_pane_g1

0xed24,	// (0x00068bf7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xed36,	// (0x00068c09) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xed2d,	// (0x00068c00) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe798,	// (0x0006866b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0982,	// (0x0005a855) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe585,	// (0x00068458) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe585,	// (0x00068458) bg_sp_fs_ctrlbar_ddmenu_pane

0xcac4,	// (0x00066997) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcac4,	// (0x00066997) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcad0,	// (0x000669a3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcad0,	// (0x000669a3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb5a,	// (0x00069a2d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb5a,	// (0x00069a2d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcadc,	// (0x000669af) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcadc,	// (0x000669af) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8112,	// (0x00061fe5) list_medium_line_t2_right_icon_g1

0x811a,	// (0x00061fed) list_medium_line_t2_right_icon_t1

0x812a,	// (0x00061ffd) list_medium_line_t2_right_icon_t2

0x0001,

0xfb5f,	// (0x00069a32) list_medium_line_t2_right_icon_t

0xe386,	// (0x00068259) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe386,	// (0x00068259) bg_sp_fs_ctrlbar_pane

0x817e,	// (0x00062051) main_sp_fs_ctrlbar_button_pane_cp01

0x8186,	// (0x00062059) main_sp_fs_ctrlbar_ddmenu_pane

0xcb2e,	// (0x00066a01) main_sp_fs_ctrlbar_pane_g1

0xcb3a,	// (0x00066a0d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb64,	// (0x00069a37) main_sp_fs_ctrlbar_pane_g

0xcb46,	// (0x00066a19) main_sp_fs_ctrlbar_pane_t1

0x8190,	// (0x00062063) main_sp_fs_ctrlbar_pane

0x81b1,	// (0x00062084) main_sp_fs_listscroll_pane_te_cp01

0x81d1,	// (0x000620a4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x81d1,	// (0x000620a4) popup_sp_fs_action_menu_pane_cp01

0xb9e5,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb9e5,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp01

0x81f5,	// (0x000620c8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x81f5,	// (0x000620c8) sp_fs_action_menu_list_gene_pane_g1

0xcb76,	// (0x00066a49) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcb76,	// (0x00066a49) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb6e,	// (0x00069a41) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb6e,	// (0x00069a41) sp_fs_action_menu_list_gene_pane_g

0x8204,	// (0x000620d7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8204,	// (0x000620d7) sp_fs_action_menu_list_gene_pane_t1

0x821c,	// (0x000620ef) sp_fs_action_menu_list_gene_pane_ParamLimits

0x821c,	// (0x000620ef) sp_fs_action_menu_list_gene_pane

0xcb83,	// (0x00066a56) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb83,	// (0x00066a56) popup_sp_fs_action_menu_bg_pane

0x8239,	// (0x0006210c) sp_fs_action_menu_list_pane_ParamLimits

0x8239,	// (0x0006210c) sp_fs_action_menu_list_pane

0xcb91,	// (0x00066a64) sp_fs_scroll_pane_cp01_ParamLimits

0xcb91,	// (0x00066a64) sp_fs_scroll_pane_cp01

0x8257,	// (0x0006212a) list_medium_line_plain_t2_t1

0x8267,	// (0x0006213a) list_medium_line_plain_t2_t2

0x0001,

0xfb73,	// (0x00069a46) list_medium_line_plain_t2_t

0x8275,	// (0x00062148) list_medium_line_plain_t3_t1

0x8285,	// (0x00062158) list_medium_line_plain_t3_t2

0x8293,	// (0x00062166) list_medium_line_plain_t3_t3

0x0002,

0xfb78,	// (0x00069a4b) list_medium_line_plain_t3_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t2_g2_g1

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00069115) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00069115) list_medium_line_x2_t2_g2_g

0x2d6d,	// (0x0005cc40) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2d6d,	// (0x0005cc40) list_medium_line_x2_t2_g2_t1

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb7f,	// (0x00069a52) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb7f,	// (0x00069a52) list_medium_line_x2_t2_g2_t

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t4_g2_g1

0xcbb7,	// (0x00066a8a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcbb7,	// (0x00066a8a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb84,	// (0x00069a57) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb84,	// (0x00069a57) list_medium_line_x2_t4_g2_g

0x82a1,	// (0x00062174) list_medium_line_x2_t4_g2_t1_ParamLimits

0x82a1,	// (0x00062174) list_medium_line_x2_t4_g2_t1

0x82bb,	// (0x0006218e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x82bb,	// (0x0006218e) list_medium_line_x2_t4_g2_t2

0x82d0,	// (0x000621a3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x82d0,	// (0x000621a3) list_medium_line_x2_t4_g2_t3

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb89,	// (0x00069a5c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb89,	// (0x00069a5c) list_medium_line_x2_t4_g2_t

0x82e5,	// (0x000621b8) list_medium_line_t3_right_iconx2_g1

0x8112,	// (0x00061fe5) list_medium_line_t3_right_iconx2_g2

0x82ed,	// (0x000621c0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb92,	// (0x00069a65) list_medium_line_t3_right_iconx2_g

0x82f5,	// (0x000621c8) list_medium_line_t3_right_iconx2_t1

0x8305,	// (0x000621d8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb99,	// (0x00069a6c) list_medium_line_t3_right_iconx2_t

0x1cb1,	// (0x0005bb84) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x3_t4_g4_g1

0x1cbd,	// (0x0005bb90) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x3_t4_g4_g2

0x1d45,	// (0x0005bc18) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d45,	// (0x0005bc18) list_medium_line_x3_t4_g4_g3

0xcbc9,	// (0x00066a9c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcbc9,	// (0x00066a9c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfb9e,	// (0x00069a71) list_medium_line_x3_t4_g4_g_ParamLimits

0xfb9e,	// (0x00069a71) list_medium_line_x3_t4_g4_g

0x8313,	// (0x000621e6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8313,	// (0x000621e6) list_medium_line_x3_t4_g4_t1

0x832a,	// (0x000621fd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x832a,	// (0x000621fd) list_medium_line_x3_t4_g4_t2

0xcbd5,	// (0x00066aa8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcbd5,	// (0x00066aa8) list_medium_line_x3_t4_g4_t3

0xcbea,	// (0x00066abd) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcbea,	// (0x00066abd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfba7,	// (0x00069a7a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfba7,	// (0x00069a7a) list_medium_line_x3_t4_g4_t

0x833f,	// (0x00062212) list_single_dyc_row_text_pane_t1_ParamLimits

0x833f,	// (0x00062212) list_single_dyc_row_text_pane_t1

0x8376,	// (0x00062249) list_single_dyc_row_text_pane_t2_ParamLimits

0x8376,	// (0x00062249) list_single_dyc_row_text_pane_t2

0xcc07,	// (0x00066ada) list_single_dyc_row_text_pane_t3_ParamLimits

0xcc07,	// (0x00066ada) list_single_dyc_row_text_pane_t3

0x0005,

0xfbb0,	// (0x00069a83) list_single_dyc_row_text_pane_t_ParamLimits

0xfbb0,	// (0x00069a83) list_single_dyc_row_text_pane_t

0xcc2b,	// (0x00066afe) list_single_dyc_row_pane_g1_ParamLimits

0xcc2b,	// (0x00066afe) list_single_dyc_row_pane_g1

0xcc37,	// (0x00066b0a) list_single_dyc_row_pane_g2_ParamLimits

0xcc37,	// (0x00066b0a) list_single_dyc_row_pane_g2

0xcc43,	// (0x00066b16) list_single_dyc_row_pane_g3_ParamLimits

0xcc43,	// (0x00066b16) list_single_dyc_row_pane_g3

0xcc4f,	// (0x00066b22) list_single_dyc_row_pane_g4_ParamLimits

0xcc4f,	// (0x00066b22) list_single_dyc_row_pane_g4

0x0003,

0xfbbd,	// (0x00069a90) list_single_dyc_row_pane_g_ParamLimits

0xfbbd,	// (0x00069a90) list_single_dyc_row_pane_g

0xcc5b,	// (0x00066b2e) list_single_dyc_row_text_pane_ParamLimits

0xcc5b,	// (0x00066b2e) list_single_dyc_row_text_pane

0x9827,	// (0x000636fa) bg_sp_fs_scroll_pane

0xcc7a,	// (0x00066b4d) thumb_sp_fs_scroll_pane

0x6cba,	// (0x00060b8d) list_medium_line_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_g1

0x8499,	// (0x0006236c) list_medium_line_t1_ParamLimits

0x8499,	// (0x0006236c) list_medium_line_t1

0x1cb1,	// (0x0005bb84) list_medium_line_x2_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_g1

0x1cbd,	// (0x0005bb90) list_medium_line_x2_g2_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_g2

0x0001,

0xfbc6,	// (0x00069a99) list_medium_line_x2_g_ParamLimits

0xfbc6,	// (0x00069a99) list_medium_line_x2_g

0xcc83,	// (0x00066b56) list_medium_line_x2_t1_ParamLimits

0xcc83,	// (0x00066b56) list_medium_line_x2_t1

0x1cb1,	// (0x0005bb84) list_medium_line_x3_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x3_g1

0x1cbd,	// (0x0005bb90) list_medium_line_x3_g2_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x3_g2

0x0001,

0xfbc6,	// (0x00069a99) list_medium_line_x3_g_ParamLimits

0xfbc6,	// (0x00069a99) list_medium_line_x3_g

0xcc83,	// (0x00066b56) list_medium_line_x3_t1_ParamLimits

0xcc83,	// (0x00066b56) list_medium_line_x3_t1

0xcc99,	// (0x00066b6c) thumb_sp_fs_scroll_pane_g1

0xcca2,	// (0x00066b75) thumb_sp_fs_scroll_pane_g2

0xccab,	// (0x00066b7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbcb,	// (0x00069a9e) thumb_sp_fs_scroll_pane_g

0xcc99,	// (0x00066b6c) bg_sp_fs_scroll_pane_g1

0xcca2,	// (0x00066b75) bg_sp_fs_scroll_pane_g2

0xccab,	// (0x00066b7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbcb,	// (0x00069a9e) bg_sp_fs_scroll_pane_g

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1cb1,	// (0x0005bb84) list_medium_line_x2_t3_g4_g1

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d39,	// (0x0005bc0c) list_medium_line_x2_t3_g4_g2

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1cbd,	// (0x0005bb90) list_medium_line_x2_t3_g4_g3

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1cc9,	// (0x0005bb9c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00069191) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00069191) list_medium_line_x2_t3_g4_g

0x84ae,	// (0x00062381) list_medium_line_x2_t3_g4_t1_ParamLimits

0x84ae,	// (0x00062381) list_medium_line_x2_t3_g4_t1

0x84c4,	// (0x00062397) list_medium_line_x2_t3_g4_t2_ParamLimits

0x84c4,	// (0x00062397) list_medium_line_x2_t3_g4_t2

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1cfc,	// (0x0005bbcf) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbd2,	// (0x00069aa5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbd2,	// (0x00069aa5) list_medium_line_x2_t3_g4_t

0x6cba,	// (0x00060b8d) list_medium_line_g2_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_g2_g1

0x6cc6,	// (0x00060b99) list_medium_line_g2_g2_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_g2_g2

0x0001,

0xf892,	// (0x00069765) list_medium_line_g2_g_ParamLimits

0xf892,	// (0x00069765) list_medium_line_g2_g

0x84dd,	// (0x000623b0) list_medium_line_g2_t1_ParamLimits

0x84dd,	// (0x000623b0) list_medium_line_g2_t1

0x6cba,	// (0x00060b8d) list_medium_line_t3_g2_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t3_g2_g1

0x6cc6,	// (0x00060b99) list_medium_line_t3_g2_g2_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_t3_g2_g2

0x0001,

0xf892,	// (0x00069765) list_medium_line_t3_g2_g_ParamLimits

0xf892,	// (0x00069765) list_medium_line_t3_g2_g

0x84f2,	// (0x000623c5) list_medium_line_t3_g2_t1_ParamLimits

0x84f2,	// (0x000623c5) list_medium_line_t3_g2_t1

0x8509,	// (0x000623dc) list_medium_line_t3_g2_t2_ParamLimits

0x8509,	// (0x000623dc) list_medium_line_t3_g2_t2

0x851e,	// (0x000623f1) list_medium_line_t3_g2_t3_ParamLimits

0x851e,	// (0x000623f1) list_medium_line_t3_g2_t3

0x0002,

0xfbd9,	// (0x00069aac) list_medium_line_t3_g2_t_ParamLimits

0xfbd9,	// (0x00069aac) list_medium_line_t3_g2_t

0x8112,	// (0x00061fe5) list_medium_line_right_icon_g1

0x8533,	// (0x00062406) list_medium_line_right_icon_t1

0x6cba,	// (0x00060b8d) list_medium_line_t2_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t2_g1

0x8541,	// (0x00062414) list_medium_line_t2_t1_ParamLimits

0x8541,	// (0x00062414) list_medium_line_t2_t1

0x8558,	// (0x0006242b) list_medium_line_t2_t2_ParamLimits

0x8558,	// (0x0006242b) list_medium_line_t2_t2

0x0001,

0xfbe0,	// (0x00069ab3) list_medium_line_t2_t_ParamLimits

0xfbe0,	// (0x00069ab3) list_medium_line_t2_t

0x6cba,	// (0x00060b8d) list_medium_line_t3_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t3_g1

0x856a,	// (0x0006243d) list_medium_line_t3_t1_ParamLimits

0x856a,	// (0x0006243d) list_medium_line_t3_t1

0x8581,	// (0x00062454) list_medium_line_t3_t2_ParamLimits

0x8581,	// (0x00062454) list_medium_line_t3_t2

0x8596,	// (0x00062469) list_medium_line_t3_t3_ParamLimits

0x8596,	// (0x00062469) list_medium_line_t3_t3

0x0002,

0xfbe5,	// (0x00069ab8) list_medium_line_t3_t_ParamLimits

0xfbe5,	// (0x00069ab8) list_medium_line_t3_t

0x6cba,	// (0x00060b8d) list_medium_line_g3_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_g3_g1

0x85a8,	// (0x0006247b) list_medium_line_g3_g2_ParamLimits

0x85a8,	// (0x0006247b) list_medium_line_g3_g2

0x6cc6,	// (0x00060b99) list_medium_line_g3_g3_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_g3_g3

0x0002,

0xfbec,	// (0x00069abf) list_medium_line_g3_g_ParamLimits

0xfbec,	// (0x00069abf) list_medium_line_g3_g

0x85b4,	// (0x00062487) list_medium_line_g3_t1_ParamLimits

0x85b4,	// (0x00062487) list_medium_line_g3_t1

0x6cba,	// (0x00060b8d) list_medium_line_t2_g3_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t2_g3_g1

0x85a8,	// (0x0006247b) list_medium_line_t2_g3_g2_ParamLimits

0x85a8,	// (0x0006247b) list_medium_line_t2_g3_g2

0x6cc6,	// (0x00060b99) list_medium_line_t2_g3_g3_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_t2_g3_g3

0x0002,

0xfbec,	// (0x00069abf) list_medium_line_t2_g3_g_ParamLimits

0xfbec,	// (0x00069abf) list_medium_line_t2_g3_g

0x85c9,	// (0x0006249c) list_medium_line_t2_g3_t1_ParamLimits

0x85c9,	// (0x0006249c) list_medium_line_t2_g3_t1

0x85e3,	// (0x000624b6) list_medium_line_t2_g3_t2_ParamLimits

0x85e3,	// (0x000624b6) list_medium_line_t2_g3_t2

0x0001,

0xfbf3,	// (0x00069ac6) list_medium_line_t2_g3_t_ParamLimits

0xfbf3,	// (0x00069ac6) list_medium_line_t2_g3_t

0x6cba,	// (0x00060b8d) list_medium_line_t3_g3_g1_ParamLimits

0x6cba,	// (0x00060b8d) list_medium_line_t3_g3_g1

0x85a8,	// (0x0006247b) list_medium_line_t3_g3_g2_ParamLimits

0x85a8,	// (0x0006247b) list_medium_line_t3_g3_g2

0x6cc6,	// (0x00060b99) list_medium_line_t3_g3_g3_ParamLimits

0x6cc6,	// (0x00060b99) list_medium_line_t3_g3_g3

0x0002,

0xfbec,	// (0x00069abf) list_medium_line_t3_g3_g_ParamLimits

0xfbec,	// (0x00069abf) list_medium_line_t3_g3_g

0x85f8,	// (0x000624cb) list_medium_line_t3_g3_t1_ParamLimits

0x85f8,	// (0x000624cb) list_medium_line_t3_g3_t1

0x860c,	// (0x000624df) list_medium_line_t3_g3_t2_ParamLimits

0x860c,	// (0x000624df) list_medium_line_t3_g3_t2

0x861e,	// (0x000624f1) list_medium_line_t3_g3_t3_ParamLimits

0x861e,	// (0x000624f1) list_medium_line_t3_g3_t3

0x0002,

0xfbf8,	// (0x00069acb) list_medium_line_t3_g3_t_ParamLimits

0xfbf8,	// (0x00069acb) list_medium_line_t3_g3_t

0x82e5,	// (0x000621b8) list_medium_line_right_iconx2_g1

0x8112,	// (0x00061fe5) list_medium_line_right_iconx2_g2

0x0001,

0xfbff,	// (0x00069ad2) list_medium_line_right_iconx2_g

0x8630,	// (0x00062503) list_medium_line_right_iconx2_t1

0x82e5,	// (0x000621b8) list_medium_line_t2_right_iconx2_g1

0x8112,	// (0x00061fe5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfbff,	// (0x00069ad2) list_medium_line_t2_right_iconx2_g

0x863e,	// (0x00062511) list_medium_line_t2_right_iconx2_t1

0x864e,	// (0x00062521) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc04,	// (0x00069ad7) list_medium_line_t2_right_iconx2_t

0xccb4,	// (0x00066b87) list_medium_line_x4_t4_t1

0x865c,	// (0x0006252f) list_medium_line_x4_t4_t2

0x866c,	// (0x0006253f) list_medium_line_x4_t4_t3

0x867c,	// (0x0006254f) list_medium_line_x4_t4_t4

0x0003,

0xfc09,	// (0x00069adc) list_medium_line_x4_t4_t

0x86c5,	// (0x00062598) tport_appsw_pane_ParamLimits

0x86c5,	// (0x00062598) tport_appsw_pane

0x86d6,	// (0x000625a9) tport_contact_pane_ParamLimits

0x86d6,	// (0x000625a9) tport_contact_pane

0x86ea,	// (0x000625bd) tport_listscroll_pane_ParamLimits

0x86ea,	// (0x000625bd) tport_listscroll_pane

0x8702,	// (0x000625d5) cell_tport_appsw_pane_ParamLimits

0x8702,	// (0x000625d5) cell_tport_appsw_pane

0x627c,	// (0x0006014f) tport_appsw_pane_g1_ParamLimits

0x627c,	// (0x0006014f) tport_appsw_pane_g1

0xccc2,	// (0x00066b95) tport_contact_pane_g1

0xcccb,	// (0x00066b9e) tport_contact_pane_t1

0xccd9,	// (0x00066bac) tport_contact_pane_t2

0x0001,

0xfc12,	// (0x00069ae5) tport_contact_pane_t

0xcce7,	// (0x00066bba) list_tport_pane

0xa14e,	// (0x00064021) scroll_pane_cp_030

0xccf8,	// (0x00066bcb) cell_tport_appsw_pane_g1

0xcd08,	// (0x00066bdb) cell_tport_appsw_pane_t1

0xcd16,	// (0x00066be9) grid_highlight_pane_cp019

0x8738,	// (0x0006260b) list_tport_double_graphic_pane_ParamLimits

0x8738,	// (0x0006260b) list_tport_double_graphic_pane

0xb9e5,	// (0x000658b8) list_highlight_pane_cp023_ParamLimits

0xb9e5,	// (0x000658b8) list_highlight_pane_cp023

0x8745,	// (0x00062618) list_tport_double_graphic_pane_g1_ParamLimits

0x8745,	// (0x00062618) list_tport_double_graphic_pane_g1

0x8752,	// (0x00062625) list_tport_double_graphic_pane_t1_ParamLimits

0x8752,	// (0x00062625) list_tport_double_graphic_pane_t1

0x8767,	// (0x0006263a) list_tport_double_graphic_pane_t2_ParamLimits

0x8767,	// (0x0006263a) list_tport_double_graphic_pane_t2

0x0001,

0xfc1e,	// (0x00069af1) list_tport_double_graphic_pane_t_ParamLimits

0xfc1e,	// (0x00069af1) list_tport_double_graphic_pane_t

0x9827,	// (0x000636fa) main_cale_note_pane

0x6233,	// (0x00060106) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6233,	// (0x00060106) cell_vitu2_function_top_wide_pane_cp01

0x7cf5,	// (0x00061bc8) wait_bar_pane_cp05_ParamLimits

0xb9e5,	// (0x000658b8) listscroll_cmail_pane

0xcd1e,	// (0x00066bf1) list_cmail_pane

0x8779,	// (0x0006264c) list_cmail_body_pane

0x8779,	// (0x0006264c) list_single_cmail_header_caption_pane

0x8790,	// (0x00062663) list_single_cmail_header_detail_pane_ParamLimits

0x8790,	// (0x00062663) list_single_cmail_header_detail_pane

0xcd3a,	// (0x00066c0d) list_single_cmail_header_caption_pane_t1

0x87b9,	// (0x0006268c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x87b9,	// (0x0006268c) list_single_cmail_header_detail_pane_g1

0xcd51,	// (0x00066c24) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd51,	// (0x00066c24) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc23,	// (0x00069af6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc23,	// (0x00069af6) list_single_cmail_header_detail_pane_g

0x87cf,	// (0x000626a2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x87cf,	// (0x000626a2) list_single_cmail_header_detail_pane_t1

0xcd8e,	// (0x00066c61) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd8e,	// (0x00066c61) list_single_cmail_header_editor_pane_bg

0xcda5,	// (0x00066c78) list_cmail_body_pane_g1

0xcdae,	// (0x00066c81) list_cmail_body_pane_t1

0x6374,	// (0x00060247) list_single_cmail_header_editor_pane_bg_g1

0xa508,	// (0x000643db) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6384,	// (0x00060257) list_single_cmail_header_editor_pane_bg_g1_copy2

0x637c,	// (0x0006024f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbb13,	// (0x000659e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0x63a4,	// (0x00060277) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6394,	// (0x00060267) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x639c,	// (0x0006026f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa4e8,	// (0x000643bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x87fa,	// (0x000626cd) calenote_gesture_pane_ParamLimits

0x87fa,	// (0x000626cd) calenote_gesture_pane

0x8816,	// (0x000626e9) calenote_window_pane_ParamLimits

0x8816,	// (0x000626e9) calenote_window_pane

0xcdbc,	// (0x00066c8f) popup_note_window_cp01

0x8832,	// (0x00062705) calenote_swipe_1_pane_ParamLimits

0x8832,	// (0x00062705) calenote_swipe_1_pane

0x80c8,	// (0x00061f9b) calenote_swipe_2_pane_ParamLimits

0x80c8,	// (0x00061f9b) calenote_swipe_2_pane

0xca68,	// (0x0006693b) calenote_swipe_1_pane_g1_ParamLimits

0xca68,	// (0x0006693b) calenote_swipe_1_pane_g1

0xca75,	// (0x00066948) calenote_swipe_1_pane_g2_ParamLimits

0xca75,	// (0x00066948) calenote_swipe_1_pane_g2

0x0001,

0xfb50,	// (0x00069a23) calenote_swipe_1_pane_g_ParamLimits

0xfb50,	// (0x00069a23) calenote_swipe_1_pane_g

0xcdce,	// (0x00066ca1) calenote_swipe_1_pane_t1_ParamLimits

0xcdce,	// (0x00066ca1) calenote_swipe_1_pane_t1

0xca68,	// (0x0006693b) calenote_swipe_2_pane_g1_ParamLimits

0xca68,	// (0x0006693b) calenote_swipe_2_pane_g1

0xcded,	// (0x00066cc0) calenote_swipe_2_pane_g2_ParamLimits

0xcded,	// (0x00066cc0) calenote_swipe_2_pane_g2

0x0001,

0xfc2f,	// (0x00069b02) calenote_swipe_2_pane_g_ParamLimits

0xfc2f,	// (0x00069b02) calenote_swipe_2_pane_g

0xcdf9,	// (0x00066ccc) calenote_swipe_2_pane_t1_ParamLimits

0xcdf9,	// (0x00066ccc) calenote_swipe_2_pane_t1

0x9827,	// (0x000636fa) main_mup_navstr_pane

0x502f,	// (0x0005ef02) main_mup3_pane_t7_ParamLimits

0x502f,	// (0x0005ef02) main_mup3_pane_t7

0xd789,	// (0x0006765c) main_mp4_pane_g6_ParamLimits

0xd789,	// (0x0006765c) main_mp4_pane_g6

0xd93b,	// (0x0006780e) main_image3_pane_t4_ParamLimits

0xd93b,	// (0x0006780e) main_image3_pane_t4

0x8847,	// (0x0006271a) popup_navstr_preview_pane_ParamLimits

0x8847,	// (0x0006271a) popup_navstr_preview_pane

0x8857,	// (0x0006272a) scroll_navstr_pane_ParamLimits

0x8857,	// (0x0006272a) scroll_navstr_pane

0x9827,	// (0x000636fa) bg_popup_preview_window_pane_cp04

0xce20,	// (0x00066cf3) popup_navstr_preview_pane_t1

0x886b,	// (0x0006273e) scroll_navstr_pane_g1_ParamLimits

0x886b,	// (0x0006273e) scroll_navstr_pane_g1

0x887f,	// (0x00062752) scroll_navstr_pane_t1_ParamLimits

0x887f,	// (0x00062752) scroll_navstr_pane_t1

0xcdc5,	// (0x00066c98) bg_button_pane_cp014

0xcdc5,	// (0x00066c98) bg_button_pane_cp030

0xc9cc,	// (0x0006689f) list_double_fisheye_pane_g4_ParamLimits

0xc9cc,	// (0x0006689f) list_double_fisheye_pane_g4

0xc9d8,	// (0x000668ab) list_double_fisheye_pane_g5_ParamLimits

0xc9d8,	// (0x000668ab) list_double_fisheye_pane_g5

0xcd2e,	// (0x00066c01) sp_fs_scroll_pane_cp03

0xcb2e,	// (0x00066a01) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcb3a,	// (0x00066a0d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb64,	// (0x00069a37) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcb46,	// (0x00066a19) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd26,	// (0x00066bf9) sp_fs_scroll_pane_cp02

0xa1a8,	// (0x0006407b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa1a8,	// (0x0006407b) popup_sp_fs_calendar_preview_list_single_pane

0x9827,	// (0x000636fa) main_cam6_pano_pane

0x9882,	// (0x00063755) main_mup3_pane_ParamLimits

0x9827,	// (0x000636fa) main_phacti_pane

0x7be8,	// (0x00061abb) bg_button_pane_cp11

0x7c00,	// (0x00061ad3) main_mobtv_info_pane_g2_ParamLimits

0x7c00,	// (0x00061ad3) main_mobtv_info_pane_g2

0x0001,

0xfacd,	// (0x000699a0) main_mobtv_info_pane_g_ParamLimits

0xfacd,	// (0x000699a0) main_mobtv_info_pane_g

0x7db5,	// (0x00061c88) sc_clock_pane_t5_ParamLimits

0x7db5,	// (0x00061c88) sc_clock_pane_t5

0x7e60,	// (0x00061d33) main_radioblah_pane_g1_ParamLimits

0xc91c,	// (0x000667ef) main_radioblah_pane_t3_ParamLimits

0xc91c,	// (0x000667ef) main_radioblah_pane_t3

0xc934,	// (0x00066807) main_radioblah_pane_t4_ParamLimits

0xc934,	// (0x00066807) main_radioblah_pane_t4

0x7e88,	// (0x00061d5b) main_radioblah_text_pane_ParamLimits

0x7e88,	// (0x00061d5b) main_radioblah_text_pane

0x7e9a,	// (0x00061d6d) main_radioblah_info_pane_g1_ParamLimits

0x7f2d,	// (0x00061e00) main_radioblah_info_pane_t4_ParamLimits

0x7f2d,	// (0x00061e00) main_radioblah_info_pane_t4

0xb9e5,	// (0x000658b8) main_sp_fs_calendar_pane

0x8895,	// (0x00062768) main_phacti_pane_g1

0x889d,	// (0x00062770) phacti_note_pane_ParamLimits

0x889d,	// (0x00062770) phacti_note_pane

0xce37,	// (0x00066d0a) phacti_term_pane_ParamLimits

0xce37,	// (0x00066d0a) phacti_term_pane

0xce4c,	// (0x00066d1f) phacti_note_pane_t1_ParamLimits

0xce4c,	// (0x00066d1f) phacti_note_pane_t1

0xce63,	// (0x00066d36) phacti_term_pane_g1

0xce6b,	// (0x00066d3e) phacti_term_pane_t1_ParamLimits

0xce6b,	// (0x00066d3e) phacti_term_pane_t1

0xce95,	// (0x00066d68) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce9d,	// (0x00066d70) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc39,	// (0x00069b0c) popup_sp_fs_calendar_preview_list_single_pane_g

0xcea5,	// (0x00066d78) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcea5,	// (0x00066d78) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcebb,	// (0x00066d8e) aid_popup_sp_fs_bg_corner_pane

0xe798,	// (0x0006866b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9827,	// (0x000636fa) popup_sp_fs_calendar_preview_bg_pane

0xcec3,	// (0x00066d96) popup_sp_fs_calendar_preview_list_pane

0xe386,	// (0x00068259) bg_main_sp_fs_cale_pane_ParamLimits

0xe386,	// (0x00068259) bg_main_sp_fs_cale_pane

0xced4,	// (0x00066da7) listscroll_cale_mrui_pane_ParamLimits

0xced4,	// (0x00066da7) listscroll_cale_mrui_pane

0xcee9,	// (0x00066dbc) listscroll_sp_fs_schedule_track_pane

0xcef2,	// (0x00066dc5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcef2,	// (0x00066dc5) main_sp_fs_ctrlbar_pane_cp01

0xcf05,	// (0x00066dd8) main_sp_fs_ribbon_pane

0xcf0d,	// (0x00066de0) popup_sp_fs_cale_preview_window

0x8900,	// (0x000627d3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8900,	// (0x000627d3) list_single_sp_fs_schedule_track_pane

0xb9e5,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb9e5,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp03

0x8914,	// (0x000627e7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8914,	// (0x000627e7) list_single_sp_fs_schedule_track_pane_g1

0x8920,	// (0x000627f3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8920,	// (0x000627f3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc3e,	// (0x00069b11) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc3e,	// (0x00069b11) list_single_sp_fs_schedule_track_pane_g

0x892c,	// (0x000627ff) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x892c,	// (0x000627ff) list_single_sp_fs_schedule_track_pane_t1

0x8946,	// (0x00062819) sp_fs_schedule_track_pane_ParamLimits

0x8946,	// (0x00062819) sp_fs_schedule_track_pane

0xcf1c,	// (0x00066def) sp_fs_schedule_track_pane_g1

0xcf24,	// (0x00066df7) sp_fs_schedule_track_pane_g2

0xcf2c,	// (0x00066dff) sp_fs_schedule_track_pane_g3

0xcf34,	// (0x00066e07) sp_fs_schedule_track_pane_g4

0xcf3c,	// (0x00066e0f) sp_fs_schedule_track_pane_g5

0x0004,

0xfc43,	// (0x00069b16) sp_fs_schedule_track_pane_g

0x6374,	// (0x00060247) bg_sp_fs_schedule_viewer_highlight_g1

0xa508,	// (0x000643db) bg_sp_fs_schedule_viewer_highlight_g2

0x637c,	// (0x0006024f) bg_sp_fs_schedule_viewer_highlight_g3

0x6384,	// (0x00060257) bg_sp_fs_schedule_viewer_highlight_g4

0xbb13,	// (0x000659e6) bg_sp_fs_schedule_viewer_highlight_g5

0x6394,	// (0x00060267) bg_sp_fs_schedule_viewer_highlight_g6

0x639c,	// (0x0006026f) bg_sp_fs_schedule_viewer_highlight_g7

0x63a4,	// (0x00060277) bg_sp_fs_schedule_viewer_highlight_g8

0xa4e8,	// (0x000643bb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc4e,	// (0x00069b21) bg_sp_fs_schedule_viewer_highlight_g

0x9827,	// (0x000636fa) bg_main_sp_fs_ribbon_pane

0x8957,	// (0x0006282a) main_sp_fs_ribbon_pane_g1

0xcf44,	// (0x00066e17) main_sp_fs_ribbon_pane_t1

0x8960,	// (0x00062833) main_sp_fs_ribbon_pane_t2

0xcf53,	// (0x00066e26) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc61,	// (0x00069b34) main_sp_fs_ribbon_pane_t

0xcf62,	// (0x00066e35) main_sp_fs_ribbon_scheduler_pane

0xcf6a,	// (0x00066e3d) bg_main_sp_fs_ribbon_pane_g1

0xcf73,	// (0x00066e46) bg_main_sp_fs_ribbon_pane_g2

0xcf7c,	// (0x00066e4f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc68,	// (0x00069b3b) bg_main_sp_fs_ribbon_pane_g

0xcf84,	// (0x00066e57) main_sp_fs_ribbon_scheduler_pane_g1

0xcf8d,	// (0x00066e60) main_sp_fs_ribbon_scheduler_pane_g2

0xcf96,	// (0x00066e69) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc6f,	// (0x00069b42) main_sp_fs_ribbon_scheduler_pane_g

0xcf9f,	// (0x00066e72) list_cale_mrui_pane

0x896f,	// (0x00062842) sp_fs_scroll_pane_cp07_ParamLimits

0x896f,	// (0x00062842) sp_fs_scroll_pane_cp07

0x8987,	// (0x0006285a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8987,	// (0x0006285a) bg_sp_fs_schedule_viewer_highlight

0xcfac,	// (0x00066e7f) list_single_sp_fs_schedule_track_pane_cp01

0xcfb4,	// (0x00066e87) list_sp_fs_schedule_track_pane

0xcfbc,	// (0x00066e8f) sp_fs_scroll_pane_cp06_ParamLimits

0xcfbc,	// (0x00066e8f) sp_fs_scroll_pane_cp06

0xe798,	// (0x0006866b) bgmain_sp_fs_calendar_pane_g1

0x8997,	// (0x0006286a) list_single_cale_mrui_pane_ParamLimits

0x8997,	// (0x0006286a) list_single_cale_mrui_pane

0xcfce,	// (0x00066ea1) list_single_cale_mrui_row_pane_ParamLimits

0xcfce,	// (0x00066ea1) list_single_cale_mrui_row_pane

0x89b8,	// (0x0006288b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x89b8,	// (0x0006288b) list_single_cale_mrui_row_pane_g1

0x89f0,	// (0x000628c3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x89f0,	// (0x000628c3) list_single_cale_mrui_row_pane_t1

0x8a02,	// (0x000628d5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8a02,	// (0x000628d5) list_single_cale_mrui_row_pane_t2

0x8a68,	// (0x0006293b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8a68,	// (0x0006293b) list_single_cale_mrui_row_pane_t3

0x8a97,	// (0x0006296a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8a97,	// (0x0006296a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc7d,	// (0x00069b50) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc7d,	// (0x00069b50) list_single_cale_mrui_row_pane_t

0x8ac6,	// (0x00062999) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ac6,	// (0x00062999) list_single_cmail_header_editor_pane_bg_cp01

0x8aea,	// (0x000629bd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8aea,	// (0x000629bd) list_single_cmail_header_editor_pane_bg_cp02

0x8b08,	// (0x000629db) main_radioblah_text_pane_t1_ParamLimits

0x8b08,	// (0x000629db) main_radioblah_text_pane_t1

0xcff1,	// (0x00066ec4) cam6_indi_pane_cp01

0xcff9,	// (0x00066ecc) cam6_mode_pane_cp01

0xd001,	// (0x00066ed4) cam6_pano_pane

0xd00a,	// (0x00066edd) cam6_zoom_pane_cp01

0xd012,	// (0x00066ee5) cam6_pano_image_pane

0xd01b,	// (0x00066eee) cam6_pano_pane_g1

0xc683,	// (0x00066556) cam6_pano_pane_g2

0xd024,	// (0x00066ef7) cam6_pano_pane_g3

0xd02d,	// (0x00066f00) cam6_pano_pane_g4

0xed11,	// (0x00068be4) cam6_pano_pane_g5

0xd036,	// (0x00066f09) cam6_pano_pane_g6

0xd03e,	// (0x00066f11) cam6_pano_pane_g7

0xd046,	// (0x00066f19) cam6_pano_pane_g8

0xd04f,	// (0x00066f22) cam6_pano_pane_g9

0x0008,

0xfc86,	// (0x00069b59) cam6_pano_pane_g

0x9827,	// (0x000636fa) main_browser_tag_pane

0xce18,	// (0x00066ceb) grid_navstr_albumart_pane

0xd058,	// (0x00066f2b) cell_navstr_albumart_pane_ParamLimits

0xd058,	// (0x00066f2b) cell_navstr_albumart_pane

0xae99,	// (0x00064d6c) cell_navstr_albumart_pane_g1

0xe157,	// (0x0006802a) cell_navstr_albumart_pane_g2

0xe167,	// (0x0006803a) cell_navstr_albumart_pane_g3

0xe15f,	// (0x00068032) cell_navstr_albumart_pane_g4

0x0003,

0xfc99,	// (0x00069b6c) cell_navstr_albumart_pane_g

0x8b21,	// (0x000629f4) bt_list_pane_ParamLimits

0x8b21,	// (0x000629f4) bt_list_pane

0x8b34,	// (0x00062a07) bt_list_pane_t1

0x8b43,	// (0x00062a16) bt_list_pane_t2

0x0001,

0xfca2,	// (0x00069b75) bt_list_pane_t

0x9827,	// (0x000636fa) main_cale_prevew_pane

0x8b52,	// (0x00062a25) popup_cale_preview_window_ParamLimits

0x8b52,	// (0x00062a25) popup_cale_preview_window

0xb9e5,	// (0x000658b8) bg_popup_preview_window_pane_cp05_ParamLimits

0xb9e5,	// (0x000658b8) bg_popup_preview_window_pane_cp05

0xd06f,	// (0x00066f42) list_cale_preview_pane_ParamLimits

0xd06f,	// (0x00066f42) list_cale_preview_pane

0x8b67,	// (0x00062a3a) list_double_cale_preview_pane_ParamLimits

0x8b67,	// (0x00062a3a) list_double_cale_preview_pane

0x8b78,	// (0x00062a4b) list_single_cale_preview_pane_ParamLimits

0x8b78,	// (0x00062a4b) list_single_cale_preview_pane

0xd07b,	// (0x00066f4e) list_single_cale_preview_pane_g1

0xd083,	// (0x00066f56) list_single_cale_preview_pane_t1_ParamLimits

0xd083,	// (0x00066f56) list_single_cale_preview_pane_t1

0x8b8c,	// (0x00062a5f) list_double_cale_preview_pane_g1

0x8b94,	// (0x00062a67) list_double_cale_preview_pane_t1_ParamLimits

0x8b94,	// (0x00062a67) list_double_cale_preview_pane_t1

0x8ba9,	// (0x00062a7c) list_double_cale_preview_pane_t2_ParamLimits

0x8ba9,	// (0x00062a7c) list_double_cale_preview_pane_t2

0x0001,

0xfca7,	// (0x00069b7a) list_double_cale_preview_pane_t_ParamLimits

0xfca7,	// (0x00069b7a) list_double_cale_preview_pane_t

0x9827,	// (0x000636fa) main_ezdial_pane

0xb9e5,	// (0x000658b8) main_sp_fs_email_pane_ParamLimits

0x8138,	// (0x0006200b) cmail_ddmenu_btn01_pane_ParamLimits

0x8138,	// (0x0006200b) cmail_ddmenu_btn01_pane

0x814b,	// (0x0006201e) cmail_ddmenu_btn02_pane_ParamLimits

0x814b,	// (0x0006201e) cmail_ddmenu_btn02_pane

0x816e,	// (0x00062041) cmail_ddmenu_btn03_pane_ParamLimits

0x816e,	// (0x00062041) cmail_ddmenu_btn03_pane

0x8190,	// (0x00062063) main_sp_fs_ctrlbar_pane_ParamLimits

0x81b1,	// (0x00062084) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8779,	// (0x0006264c) list_cmail_body_pane_ParamLimits

0xcd48,	// (0x00066c1b) bg_button_pane_cp12

0xcd5d,	// (0x00066c30) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd5d,	// (0x00066c30) list_single_cmail_header_detail_pane_g3

0xcd6a,	// (0x00066c3d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd6a,	// (0x00066c3d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc2a,	// (0x00069afd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc2a,	// (0x00069afd) list_single_cmail_header_detail_pane_t

0xce80,	// (0x00066d53) phacti_term_pane_t2_ParamLimits

0xce80,	// (0x00066d53) phacti_term_pane_t2

0x0001,

0xfc34,	// (0x00069b07) phacti_term_pane_t_ParamLimits

0xfc34,	// (0x00069b07) phacti_term_pane_t

0xd098,	// (0x00066f6b) aid_size_list_single_double

0x8bc1,	// (0x00062a94) popup_ezdial_listscroll_window

0x8bd7,	// (0x00062aaa) popup_number_entry_window_cp01

0xa260,	// (0x00064133) bg_popup_call_pane_cp09

0xd0a4,	// (0x00066f77) ezdial_list_pane

0xd0ac,	// (0x00066f7f) scroll_pane_cp23

0xe386,	// (0x00068259) bg_button_pane_cp028_ParamLimits

0xe386,	// (0x00068259) bg_button_pane_cp028

0x8be3,	// (0x00062ab6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8be3,	// (0x00062ab6) cmail_ddmenu_btn01_pane_g1

0x8bef,	// (0x00062ac2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8bef,	// (0x00062ac2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcac,	// (0x00069b7f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcac,	// (0x00069b7f) cmail_ddmenu_btn01_pane_g

0xd0b4,	// (0x00066f87) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd0b4,	// (0x00066f87) cmail_ddmenu_btn01_pane_t1

0xe386,	// (0x00068259) bg_button_pane_cp029_ParamLimits

0xe386,	// (0x00068259) bg_button_pane_cp029

0x8bfb,	// (0x00062ace) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8bfb,	// (0x00062ace) cmail_ddmenu_btn02_pane_g1

0x8c13,	// (0x00062ae6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c13,	// (0x00062ae6) cmail_ddmenu_btn02_pane_t1

0xb9e5,	// (0x000658b8) bg_button_pane_cp031_ParamLimits

0xb9e5,	// (0x000658b8) bg_button_pane_cp031

0x8bfb,	// (0x00062ace) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8bfb,	// (0x00062ace) cmail_ddmenu_btn03_pane_g1

0x8c13,	// (0x00062ae6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c13,	// (0x00062ae6) cmail_ddmenu_btn03_pane_t1

0x5b22,	// (0x0005f9f5) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b3c,	// (0x0005fa0f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b3c,	// (0x0005fa0f) cell_dialer2_keypad_pane_t1_copy1

0x7a54,	// (0x00061927) ncimui_group_button_pane

0xb9e5,	// (0x000658b8) main_sp_fs_calendar_pane_ParamLimits

0x8779,	// (0x0006264c) list_single_cmail_header_caption_pane_ParamLimits

0xcecb,	// (0x00066d9e) aid_recal_txt_sm_pane

0x9827,	// (0x000636fa) mian_recal_day_pane

0xcf0d,	// (0x00066de0) popup_sp_fs_cale_preview_window_ParamLimits

0xd0c9,	// (0x00066f9c) list_recal_day_pane

0xd10b,	// (0x00066fde) list_single_recal_day_pane_ParamLimits

0xd10b,	// (0x00066fde) list_single_recal_day_pane

0xd11d,	// (0x00066ff0) list_single_recal_day_pane_g1_ParamLimits

0xd11d,	// (0x00066ff0) list_single_recal_day_pane_g1

0xd129,	// (0x00066ffc) list_single_recal_day_pane_g2_ParamLimits

0xd129,	// (0x00066ffc) list_single_recal_day_pane_g2

0xd135,	// (0x00067008) list_single_recal_day_pane_g3_ParamLimits

0xd135,	// (0x00067008) list_single_recal_day_pane_g3

0x8c37,	// (0x00062b0a) list_single_recal_day_pane_g4_ParamLimits

0x8c37,	// (0x00062b0a) list_single_recal_day_pane_g4

0xd141,	// (0x00067014) list_single_recal_day_pane_g5_ParamLimits

0xd141,	// (0x00067014) list_single_recal_day_pane_g5

0x8c4f,	// (0x00062b22) list_single_recal_day_pane_g6_ParamLimits

0x8c4f,	// (0x00062b22) list_single_recal_day_pane_g6

0x0004,

0xfcbb,	// (0x00069b8e) list_single_recal_day_pane_g_ParamLimits

0xfcbb,	// (0x00069b8e) list_single_recal_day_pane_g

0xd155,	// (0x00067028) list_single_recal_day_pane_t1

0x8c5b,	// (0x00062b2e) list_single_recal_day_pane_t2

0x0001,

0xfcc6,	// (0x00069b99) list_single_recal_day_pane_t

0x8c6d,	// (0x00062b40) ncimui_query_button_pane_ParamLimits

0x8c6d,	// (0x00062b40) ncimui_query_button_pane

0x8c7d,	// (0x00062b50) ncimui_query_button_pane_t1_ParamLimits

0x8c7d,	// (0x00062b50) ncimui_query_button_pane_t1

0xd167,	// (0x0006703a) ncimui_query_button_pane_t2_ParamLimits

0xd167,	// (0x0006703a) ncimui_query_button_pane_t2

0x0001,

0xfccb,	// (0x00069b9e) ncimui_query_button_pane_t_ParamLimits

0xfccb,	// (0x00069b9e) ncimui_query_button_pane_t

0x8c90,	// (0x00062b63) query_button_pane_ParamLimits

0x8c90,	// (0x00062b63) query_button_pane

0x9827,	// (0x000636fa) bg_button_pane_cp0028

0xd17a,	// (0x0006704d) query_button_pane_t1

0x3dba,	// (0x0005dc8d) main_tport_pane_ParamLimits

0x868c,	// (0x0006255f) bg_popup_window_pane_cp01_ParamLimits

0x868c,	// (0x0006255f) bg_popup_window_pane_cp01

0x86a3,	// (0x00062576) heading_pane_cp08_ParamLimits

0x86a3,	// (0x00062576) heading_pane_cp08

0x86b4,	// (0x00062587) heading_pane_cp07_ParamLimits

0x86b4,	// (0x00062587) heading_pane_cp07

0xccf8,	// (0x00066bcb) cell_tport_appsw_pane_g2

0x0002,

0xfc17,	// (0x00069aea) cell_tport_appsw_pane_g

0x34a6,	// (0x0005d379) input_candi_list_open_g1

0xa6e3,	// (0x000645b6) list_cale_time_pane_g6_ParamLimits

0xa6e3,	// (0x000645b6) list_cale_time_pane_g6

0x4a4c,	// (0x0005e91f) aid_size_touch_calib_1_ParamLimits

0x4a4c,	// (0x0005e91f) aid_size_touch_calib_1

0x4a5e,	// (0x0005e931) aid_size_touch_calib_2_ParamLimits

0x4a5e,	// (0x0005e931) aid_size_touch_calib_2

0x4a74,	// (0x0005e947) aid_size_touch_calib_3_ParamLimits

0x4a74,	// (0x0005e947) aid_size_touch_calib_3

0x4a8c,	// (0x0005e95f) aid_size_touch_calib_4_ParamLimits

0x4a8c,	// (0x0005e95f) aid_size_touch_calib_4

0x4aa0,	// (0x0005e973) main_touch_calib_button_group_pane_ParamLimits

0x4aa0,	// (0x0005e973) main_touch_calib_button_group_pane

0x4ab8,	// (0x0005e98b) main_touch_calib_pane_g1_ParamLimits

0x4aca,	// (0x0005e99d) main_touch_calib_pane_g2_ParamLimits

0x4adc,	// (0x0005e9af) main_touch_calib_pane_g3_ParamLimits

0x4aee,	// (0x0005e9c1) main_touch_calib_pane_g4_ParamLimits

0xf64c,	// (0x0006951f) main_touch_calib_pane_g_ParamLimits

0x4b00,	// (0x0005e9d3) main_touch_calib_pane_t1_ParamLimits

0x4b18,	// (0x0005e9eb) main_touch_calib_pane_t2_ParamLimits

0x4b30,	// (0x0005ea03) main_touch_calib_pane_t3_ParamLimits

0x4b42,	// (0x0005ea15) main_touch_calib_pane_t4_ParamLimits

0x4b54,	// (0x0005ea27) main_touch_calib_pane_t5_ParamLimits

0xf655,	// (0x00069528) main_touch_calib_pane_t_ParamLimits

0xeac7,	// (0x0006899a) list_single_fp_cale_pane_g3_ParamLimits

0xeac7,	// (0x0006899a) list_single_fp_cale_pane_g3

0x9882,	// (0x00063755) bg_button_pane_cp012_ParamLimits

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp03_ParamLimits

0x6c70,	// (0x00060b43) cell_vitu2_function_top_pane_g1_ParamLimits

0x9882,	// (0x00063755) bg_vkb2_func_pane_cp04_ParamLimits

0x79e4,	// (0x000618b7) main_ncimui_button_group_pane_ParamLimits

0x79e4,	// (0x000618b7) main_ncimui_button_group_pane

0x7a42,	// (0x00061915) main_ncimui_pane_t3_ParamLimits

0x7a42,	// (0x00061915) main_ncimui_pane_t3

0xce2e,	// (0x00066d01) phacti_button_group_pane

0xd098,	// (0x00066f6b) aid_size_list_single_double_ParamLimits

0x8bc1,	// (0x00062a94) popup_ezdial_listscroll_window_ParamLimits

0x8bd7,	// (0x00062aaa) popup_number_entry_window_cp01_ParamLimits

0x8ca2,	// (0x00062b75) phacti_button_pane_ParamLimits

0x8ca2,	// (0x00062b75) phacti_button_pane

0x9827,	// (0x000636fa) bg_button_pane_cp14

0xd188,	// (0x0006705b) phacti_button_pane_t1

0x8cb1,	// (0x00062b84) main_touch_calib_button_pane_ParamLimits

0x8cb1,	// (0x00062b84) main_touch_calib_button_pane

0x9ff1,	// (0x00063ec4) bg_button_pane_cp18_ParamLimits

0x9ff1,	// (0x00063ec4) bg_button_pane_cp18

0x8ccc,	// (0x00062b9f) main_touch_calib_button_pane_t1_ParamLimits

0x8ccc,	// (0x00062b9f) main_touch_calib_button_pane_t1

0x8ce2,	// (0x00062bb5) main_touch_calib_button_pane_t2_ParamLimits

0x8ce2,	// (0x00062bb5) main_touch_calib_button_pane_t2

0x0001,

0xfcd0,	// (0x00069ba3) main_touch_calib_button_pane_t_ParamLimits

0xfcd0,	// (0x00069ba3) main_touch_calib_button_pane_t

0x9827,	// (0x000636fa) cell_ncimui_button_pane

0x9827,	// (0x000636fa) bg_button_pane_cp032

0xd196,	// (0x00067069) cell_ncimui_button_pane_t1

0xd91b,	// (0x000677ee) image3_infobar_pane_ParamLimits

0xd91b,	// (0x000677ee) image3_infobar_pane

0x7ddd,	// (0x00061cb0) fs_bigclock_status_pane_ParamLimits

0x7ddd,	// (0x00061cb0) fs_bigclock_status_pane

0x7dea,	// (0x00061cbd) main_fs_bigclock_clock_pane_ParamLimits

0x7dea,	// (0x00061cbd) main_fs_bigclock_clock_pane

0x7e0c,	// (0x00061cdf) main_fs_bigclock_indi_pane_ParamLimits

0x7e0c,	// (0x00061cdf) main_fs_bigclock_indi_pane

0x7e36,	// (0x00061d09) main_fs_bigclock_swipe_pane_ParamLimits

0x7e36,	// (0x00061d09) main_fs_bigclock_swipe_pane

0x9827,	// (0x000636fa) main_fs_clock_dumped_data

0xc790,	// (0x00066663) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc790,	// (0x00066663) list_single_fs_bigclock_indicator_pane_g1

0xc7aa,	// (0x0006667d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc7aa,	// (0x0006667d) list_single_fs_bigclock_indicator_pane_g2

0xc7c4,	// (0x00066697) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc7c4,	// (0x00066697) list_single_fs_bigclock_indicator_pane_g3

0xc7de,	// (0x000666b1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc7de,	// (0x000666b1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb01,	// (0x000699d4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb01,	// (0x000699d4) list_single_fs_bigclock_indicator_pane_g

0xc807,	// (0x000666da) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc807,	// (0x000666da) list_single_fs_bigclock_indicator_pane_t1

0xc82f,	// (0x00066702) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc82f,	// (0x00066702) list_single_fs_bigclock_indicator_pane_t2

0xc857,	// (0x0006672a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc857,	// (0x0006672a) list_single_fs_bigclock_indicator_pane_t3

0xc87f,	// (0x00066752) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc87f,	// (0x00066752) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb0c,	// (0x000699df) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb0c,	// (0x000699df) list_single_fs_bigclock_indicator_pane_t

0xd1a4,	// (0x00067077) image3_infobar_fav_pane_ParamLimits

0xd1a4,	// (0x00067077) image3_infobar_fav_pane

0xd1b4,	// (0x00067087) image3_infobar_loc_pane_ParamLimits

0xd1b4,	// (0x00067087) image3_infobar_loc_pane

0xd1c8,	// (0x0006709b) image3_infobar_time_pane_ParamLimits

0xd1c8,	// (0x0006709b) image3_infobar_time_pane

0xe798,	// (0x0006866b) image3_infobar_time_pane_g1

0xd1d8,	// (0x000670ab) image3_infobar_time_pane_t1

0xe798,	// (0x0006866b) image3_infobar_loc_pane_g1

0xd1e6,	// (0x000670b9) image3_infobar_loc_pane_g2

0x0001,

0xfcd5,	// (0x00069ba8) image3_infobar_loc_pane_g

0xd1ee,	// (0x000670c1) image3_infobar_loc_pane_t1

0xe798,	// (0x0006866b) image3_infobar_fav_pane_g1

0xd1fc,	// (0x000670cf) image3_infobar_fav_pane_g2

0x0001,

0xfcda,	// (0x00069bad) image3_infobar_fav_pane_g

0xd204,	// (0x000670d7) fs_bigclock_status_battery_pane

0xd20d,	// (0x000670e0) fs_bigclock_status_signal_pane

0xd216,	// (0x000670e9) fs_bigclock_status_title_pane

0xd21f,	// (0x000670f2) fs_bigclock_status_signal_pane_g1

0xd228,	// (0x000670fb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcdf,	// (0x00069bb2) fs_bigclock_status_signal_pane_g

0xd230,	// (0x00067103) fs_bigclock_status_battery_pane_g1

0xd239,	// (0x0006710c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfce4,	// (0x00069bb7) fs_bigclock_status_battery_pane_g

0xd241,	// (0x00067114) fs_bigclock_status_title_pane_t1

0x8d00,	// (0x00062bd3) main_fs_bigclock_clock_pane_g1

0x8d12,	// (0x00062be5) main_fs_bigclock_clock_pane_g2

0x8d23,	// (0x00062bf6) main_fs_bigclock_clock_pane_g3

0x8d23,	// (0x00062bf6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfce9,	// (0x00069bbc) main_fs_bigclock_clock_pane_g

0x8d36,	// (0x00062c09) main_fs_bigclock_clock_pane_t1

0x8d51,	// (0x00062c24) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf2,	// (0x00069bc5) main_fs_bigclock_clock_pane_t

0xd24f,	// (0x00067122) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd24f,	// (0x00067122) list_single_fs_bigclock_indicator_pane

0xd260,	// (0x00067133) list_single_fs_bigclock_pane_ParamLimits

0xd260,	// (0x00067133) list_single_fs_bigclock_pane

0xd286,	// (0x00067159) main_fs_bigclock_indicator_pane_t1

0xd295,	// (0x00067168) list_single_fs_bigclock_pane_g1

0xd29d,	// (0x00067170) list_single_fs_bigclock_pane_t1

0xe798,	// (0x0006866b) main_fs_bigclock_swipe_pane_g1

0xd2dd,	// (0x000671b0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd03,	// (0x00069bd6) main_fs_bigclock_swipe_pane_g

0xd2e5,	// (0x000671b8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd2e5,	// (0x000671b8) main_fs_bigclock_swipe_pane_t1

0x2dc3,	// (0x0005cc96) call_type_pane_ParamLimits

0x9827,	// (0x000636fa) main_btmg_pane

0x89e4,	// (0x000628b7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x89e4,	// (0x000628b7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc76,	// (0x00069b49) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc76,	// (0x00069b49) list_single_cale_mrui_row_pane_g

0xd0f2,	// (0x00066fc5) list_recal_vselct_arw_lo_pane

0xd0fa,	// (0x00066fcd) list_recal_vselct_arw_up_pane

0xd102,	// (0x00066fd5) list_recal_vselct_pane

0xd302,	// (0x000671d5) btmg_button_pane

0x8db1,	// (0x00062c84) main_btmg_pane_g1

0x9827,	// (0x000636fa) bg_button_pane_cp044

0xd30a,	// (0x000671dd) btmg_button_pane_t1

0xe372,	// (0x00068245) aid_listscroll_gen

0xb9e5,	// (0x000658b8) main_cntbar_detail_pane

0xcd1e,	// (0x00066bf1) list_cmail_folder_pane

0xcd2e,	// (0x00066c01) sp_fs_scroll_pane_cp03_ParamLimits

0x8779,	// (0x0006264c) list_single_fs_dyc_pane_cp01_ParamLimits

0x8779,	// (0x0006264c) list_single_fs_dyc_pane_cp01

0xd318,	// (0x000671eb) aid_size_cmail_indent

0xd321,	// (0x000671f4) list_single_dyc_row_pane_cp01

0x8de1,	// (0x00062cb4) cntbar_detail_list_pane_ParamLimits

0x8de1,	// (0x00062cb4) cntbar_detail_list_pane

0x8e27,	// (0x00062cfa) main_cntbar_detail_cont_pane_ParamLimits

0x8e27,	// (0x00062cfa) main_cntbar_detail_cont_pane

0x8e3b,	// (0x00062d0e) scroll_pane_cp032_ParamLimits

0x8e3b,	// (0x00062d0e) scroll_pane_cp032

0x8e47,	// (0x00062d1a) cntbar_detail_list_event_pane_ParamLimits

0x8e47,	// (0x00062d1a) cntbar_detail_list_event_pane

0x8df1,	// (0x00062cc4) cntbar_detail_list_shct_pane

0xd32a,	// (0x000671fd) aid_list_gen

0xa14e,	// (0x00064021) aid_scroll

0xbe21,	// (0x00065cf4) aid_size_touch_scroll_bar

0xbe4c,	// (0x00065d1f) aid_list_double

0x8e58,	// (0x00062d2b) aid_list_single

0xbe4c,	// (0x00065d1f) aid_list_single_lg

0x8e61,	// (0x00062d34) aid_list_z_g_a_sm

0x8e69,	// (0x00062d3c) aid_list_z_g_d

0x8e71,	// (0x00062d44) aid_txt_z_prm

0xd333,	// (0x00067206) aid_txt_z_prm_cp01

0xd341,	// (0x00067214) aid_txt_z_sec

0x8e7f,	// (0x00062d52) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e7f,	// (0x00062d52) main_cntbar_detail_cont_pane_g1

0x8e93,	// (0x00062d66) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e93,	// (0x00062d66) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd08,	// (0x00069bdb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd08,	// (0x00069bdb) main_cntbar_detail_cont_pane_g

0xd34f,	// (0x00067222) main_cntbar_detail_cont_pane_t1

0xd35d,	// (0x00067230) main_cntbar_detail_cont_pane_t2

0xd36b,	// (0x0006723e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd0d,	// (0x00069be0) main_cntbar_detail_cont_pane_t

0x8ea3,	// (0x00062d76) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ea3,	// (0x00062d76) cell_cntbar_detail_list_shct_pane

0xd379,	// (0x0006724c) cntbar_detail_list_shct_pane_g1

0xd382,	// (0x00067255) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd14,	// (0x00069be7) cntbar_detail_list_shct_pane_g

0x8eb5,	// (0x00062d88) cntbar_detail_list_event_pane_g1_ParamLimits

0x8eb5,	// (0x00062d88) cntbar_detail_list_event_pane_g1

0x8ec1,	// (0x00062d94) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ec1,	// (0x00062d94) cntbar_detail_list_event_pane_g2

0x0005,

0xfd19,	// (0x00069bec) cntbar_detail_list_event_pane_g_ParamLimits

0xfd19,	// (0x00069bec) cntbar_detail_list_event_pane_g

0x8f2d,	// (0x00062e00) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f2d,	// (0x00062e00) cntbar_detail_list_event_pane_t1

0x8f42,	// (0x00062e15) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f42,	// (0x00062e15) cntbar_detail_list_event_pane_t2

0x0002,

0xfd26,	// (0x00069bf9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd26,	// (0x00069bf9) cntbar_detail_list_event_pane_t

0xe798,	// (0x0006866b) cell_cntbar_detail_list_shct_pane_g1

0xace0,	// (0x00064bb3) navi_pane_mv_g3

0xb9e5,	// (0x000658b8) main_cntbar_detail_pane_ParamLimits

0x9827,	// (0x000636fa) main_notif_wgt_pane

0xd717,	// (0x000675ea) aid_tch_main_mp4_pane_g4

0xd913,	// (0x000677e6) popup_slider_window_cp02

0xd0e8,	// (0x00066fbb) list_recal_day_event_pane

0x8db9,	// (0x00062c8c) cntbar_detail_btn_pane_ParamLimits

0x8db9,	// (0x00062c8c) cntbar_detail_btn_pane

0x8dcc,	// (0x00062c9f) cntbar_detail_btn_pane_cp01_ParamLimits

0x8dcc,	// (0x00062c9f) cntbar_detail_btn_pane_cp01

0x8df1,	// (0x00062cc4) cntbar_detail_list_shct_pane_ParamLimits

0x8e01,	// (0x00062cd4) cntbar_detail_pane_g1_ParamLimits

0x8e01,	// (0x00062cd4) cntbar_detail_pane_g1

0x8e11,	// (0x00062ce4) cntbar_detail_pane_t1_ParamLimits

0x8e11,	// (0x00062ce4) cntbar_detail_pane_t1

0x8ecd,	// (0x00062da0) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ecd,	// (0x00062da0) cntbar_detail_list_event_pane_g3

0x8ee5,	// (0x00062db8) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ee5,	// (0x00062db8) cntbar_detail_list_event_pane_g4

0x8efd,	// (0x00062dd0) cntbar_detail_list_event_pane_g5_ParamLimits

0x8efd,	// (0x00062dd0) cntbar_detail_list_event_pane_g5

0x8f15,	// (0x00062de8) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f15,	// (0x00062de8) cntbar_detail_list_event_pane_g6

0x8f57,	// (0x00062e2a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f57,	// (0x00062e2a) cntbar_detail_list_event_pane_t3

0x8f69,	// (0x00062e3c) popup_notif_wgt_window_ParamLimits

0x8f69,	// (0x00062e3c) popup_notif_wgt_window

0x8f7e,	// (0x00062e51) popup_submenu_window_cp01_ParamLimits

0x8f7e,	// (0x00062e51) popup_submenu_window_cp01

0xa260,	// (0x00064133) bg_popup_window_pane_cp10

0xd38b,	// (0x0006725e) listscroll_notif_wgt_pane

0xd39c,	// (0x0006726f) list_notif_wgt_window

0xd3a5,	// (0x00067278) scroll_pane_cp033

0x8f8e,	// (0x00062e61) list_notif_wgt_row_pane_ParamLimits

0x8f8e,	// (0x00062e61) list_notif_wgt_row_pane

0xd3ae,	// (0x00067281) aid_size_list_notif_wgt_del

0xd3bb,	// (0x0006728e) list_notif_wgt_row_pane_g1

0xd3c7,	// (0x0006729a) list_notif_wgt_row_pane_g2

0xd3db,	// (0x000672ae) list_notif_wgt_row_pane_g3

0x0002,

0xfd2d,	// (0x00069c00) list_notif_wgt_row_pane_g

0xd3e8,	// (0x000672bb) list_notif_wgt_row_pane_t1

0xd3fe,	// (0x000672d1) list_notif_wgt_row_pane_t2

0xd410,	// (0x000672e3) list_notif_wgt_row_pane_t3

0x0002,

0xfd34,	// (0x00069c07) list_notif_wgt_row_pane_t

0xbb2d,	// (0x00065a00) list_recal_day_event_pane_g1

0xd422,	// (0x000672f5) list_recal_day_event_pane_t1

0x9827,	// (0x000636fa) bg_button_pane_cp045

0x8f9e,	// (0x00062e71) cntbar_detail_btn_pane_t1

0xe386,	// (0x00068259) main_callh_pane_ParamLimits

0xe386,	// (0x00068259) main_callh_pane

0x9827,	// (0x000636fa) main_coverflow0_pane

0x9827,	// (0x000636fa) main_wgtman_pane

0x7e4a,	// (0x00061d1d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7e4a,	// (0x00061d1d) main_fs_bigclock_unlock_btn_pane

0xccf0,	// (0x00066bc3) bg_button_pane_cp16

0xcd00,	// (0x00066bd3) cell_tport_appsw_pane_g3

0x8fac,	// (0x00062e7f) cf0_flow_pane_ParamLimits

0x8fac,	// (0x00062e7f) cf0_flow_pane

0xd431,	// (0x00067304) listscroll_cf0_pane

0xd43a,	// (0x0006730d) main_cf0_pane_g1

0x8fc1,	// (0x00062e94) main_cf0_pane_t1_ParamLimits

0x8fc1,	// (0x00062e94) main_cf0_pane_t1

0x8fd6,	// (0x00062ea9) main_cf0_pane_t2_ParamLimits

0x8fd6,	// (0x00062ea9) main_cf0_pane_t2

0x0001,

0xfd40,	// (0x00069c13) main_cf0_pane_t_ParamLimits

0xfd40,	// (0x00069c13) main_cf0_pane_t

0xd44c,	// (0x0006731f) scroll_pane_cp11

0x8feb,	// (0x00062ebe) cf0_flow_pane_g1

0x8ff3,	// (0x00062ec6) cf0_flow_pane_g2

0x0001,

0xfd45,	// (0x00069c18) cf0_flow_pane_g

0x8ffb,	// (0x00062ece) cf0_flow_pane_t1

0x9827,	// (0x000636fa) main_call6_pane

0x9827,	// (0x000636fa) main_calllock_pane

0x9009,	// (0x00062edc) call6_btn_grp_pane_ParamLimits

0x9009,	// (0x00062edc) call6_btn_grp_pane

0x901f,	// (0x00062ef2) call6_pane_g1_ParamLimits

0x901f,	// (0x00062ef2) call6_pane_g1

0x9032,	// (0x00062f05) popup_call6_1st_window_ParamLimits

0x9032,	// (0x00062f05) popup_call6_1st_window

0x9041,	// (0x00062f14) popup_call6_2nd_window_ParamLimits

0x9041,	// (0x00062f14) popup_call6_2nd_window

0x9050,	// (0x00062f23) cell_call6_btn_pane_ParamLimits

0x9050,	// (0x00062f23) cell_call6_btn_pane

0xa260,	// (0x00064133) bg_popup_call2_in_pane_cp03

0xd455,	// (0x00067328) popup_call6_1st_window_g1

0xd45d,	// (0x00067330) popup_call6_1st_window_g2

0xd465,	// (0x00067338) popup_call6_1st_window_g3

0x0002,

0xfd4a,	// (0x00069c1d) popup_call6_1st_window_g

0xd46d,	// (0x00067340) popup_call6_1st_window_t1

0xd47c,	// (0x0006734f) popup_call6_1st_window_t2

0xd48a,	// (0x0006735d) popup_call6_1st_window_t3

0x0002,

0xfd51,	// (0x00069c24) popup_call6_1st_window_t

0xa260,	// (0x00064133) bg_popup_call2_in_pane_cp04

0xd455,	// (0x00067328) popup_call6_2nd_window_g1

0xd45d,	// (0x00067330) popup_call6_2nd_window_g2

0xd465,	// (0x00067338) popup_call6_2nd_window_g3

0x0002,

0xfd4a,	// (0x00069c1d) popup_call6_2nd_window_g

0xd46d,	// (0x00067340) popup_call6_2nd_window_t1

0x9890,	// (0x00063763) bg_button_pane_cp15

0xdba2,	// (0x00067a75) cell_call6_btn_pane_g1

0xdbab,	// (0x00067a7e) cell_call6_btn_pane_t1

0x9064,	// (0x00062f37) listscroll_wgtman_pane_ParamLimits

0x9064,	// (0x00062f37) listscroll_wgtman_pane

0x9085,	// (0x00062f58) wgtman_btn_pane_ParamLimits

0x9085,	// (0x00062f58) wgtman_btn_pane

0xab37,	// (0x00064a0a) aid_scroll_copy1

0xd498,	// (0x0006736b) list_wgtman_pane

0x90c5,	// (0x00062f98) wgtman_btn_pane_g1_ParamLimits

0x90c5,	// (0x00062f98) wgtman_btn_pane_g1

0x90f1,	// (0x00062fc4) wgtman_btn_pane_t1_ParamLimits

0x90f1,	// (0x00062fc4) wgtman_btn_pane_t1

0xd4a2,	// (0x00067375) wgtman_btn_pane_t2_ParamLimits

0xd4a2,	// (0x00067375) wgtman_btn_pane_t2

0x0001,

0xfd58,	// (0x00069c2b) wgtman_btn_pane_t_ParamLimits

0xfd58,	// (0x00069c2b) wgtman_btn_pane_t

0x912e,	// (0x00063001) listrow_wgtman_pane_ParamLimits

0x912e,	// (0x00063001) listrow_wgtman_pane

0x913f,	// (0x00063012) listrow_wgtman_pane_g1

0x914c,	// (0x0006301f) listrow_wgtman_pane_g2

0x0001,

0xfd5d,	// (0x00069c30) listrow_wgtman_pane_g

0x9164,	// (0x00063037) listrow_wgtman_pane_t1

0x917c,	// (0x0006304f) listrow_wgtman_pane_t2

0x0001,

0xfd62,	// (0x00069c35) listrow_wgtman_pane_t

0x91a2,	// (0x00063075) wait_bar_pane_cp09

0xd4b9,	// (0x0006738c) main_calllock_btn_pane

0xd4c1,	// (0x00067394) main_calllock_pane_g1

0x9827,	// (0x000636fa) bg_button_pane_cp17

0xd4ca,	// (0x0006739d) main_calllock_btn_pane_g1

0xd4d3,	// (0x000673a6) main_calllock_btn_pane_t1

0x9827,	// (0x000636fa) main_dialer3_pane

0x9827,	// (0x000636fa) main_fmrd2_pane

0xe798,	// (0x0006866b) main_fs_bigclock_unlock_btn_pane_g1

0xd4ea,	// (0x000673bd) main_fs_bigclock_unlock_btn_pane_t1

0x91b4,	// (0x00063087) area_fmrd2_info_pane_ParamLimits

0x91b4,	// (0x00063087) area_fmrd2_info_pane

0x91c3,	// (0x00063096) area_fmrd2_visual_pane_ParamLimits

0x91c3,	// (0x00063096) area_fmrd2_visual_pane

0x91d1,	// (0x000630a4) fmrd2_indi_pane_ParamLimits

0x91d1,	// (0x000630a4) fmrd2_indi_pane

0x91de,	// (0x000630b1) area_fmrd2_visual_pane_g1

0x91e6,	// (0x000630b9) area_fmrd2_visual_pane_t1

0x91f4,	// (0x000630c7) area_fmrd2_visual_pane_t2

0x9202,	// (0x000630d5) area_fmrd2_visual_pane_t3

0x0002,

0xfd6c,	// (0x00069c3f) area_fmrd2_visual_pane_t

0x9210,	// (0x000630e3) area_fmrd2_info_pane_g1

0x9218,	// (0x000630eb) area_fmrd2_info_pane_t1

0x9226,	// (0x000630f9) area_fmrd2_info_pane_t2

0x9234,	// (0x00063107) area_fmrd2_info_pane_t3

0x9242,	// (0x00063115) area_fmrd2_info_pane_t4

0x0003,

0xfd73,	// (0x00069c46) area_fmrd2_info_pane_t

0x9250,	// (0x00063123) fmrd2_indi_pane_t1

0x925e,	// (0x00063131) fmrd2_indi_pane_t2

0x926c,	// (0x0006313f) fmrd2_indi_pane_t3

0x0002,

0xfd7c,	// (0x00069c4f) fmrd2_indi_pane_t

0xc7ed,	// (0x000666c0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc7ed,	// (0x000666c0) list_single_fs_bigclock_indicator_pane_g5

0xc89b,	// (0x0006676e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc89b,	// (0x0006676e) list_single_fs_bigclock_indicator_pane_t5

0x88b1,	// (0x00062784) aid_cell_bcale_month_pane_ParamLimits

0x88b1,	// (0x00062784) aid_cell_bcale_month_pane

0x88cf,	// (0x000627a2) bcale_month_pane_ParamLimits

0x88cf,	// (0x000627a2) bcale_month_pane

0x88e7,	// (0x000627ba) bcale_preview_pane_ParamLimits

0x88e7,	// (0x000627ba) bcale_preview_pane

0xd29d,	// (0x00067170) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2b9,	// (0x0006718c) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2b9,	// (0x0006718c) list_single_fs_bigclock_pane_t2

0x0001,

0xfcfe,	// (0x00069bd1) list_single_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x00069bd1) list_single_fs_bigclock_pane_t

0xd4e2,	// (0x000673b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd67,	// (0x00069c3a) main_fs_bigclock_unlock_btn_pane_g

0x927a,	// (0x0006314d) aid_dia3_key_size_ParamLimits

0x927a,	// (0x0006314d) aid_dia3_key_size

0x9289,	// (0x0006315c) aid_dia3_listrow_size_ParamLimits

0x9289,	// (0x0006315c) aid_dia3_listrow_size

0x929c,	// (0x0006316f) dia3_keypad_fun_pane_ParamLimits

0x929c,	// (0x0006316f) dia3_keypad_fun_pane

0x92b0,	// (0x00063183) dia3_keypad_num_pane_ParamLimits

0x92b0,	// (0x00063183) dia3_keypad_num_pane

0x92c1,	// (0x00063194) dia3_listscroll_pane_ParamLimits

0x92c1,	// (0x00063194) dia3_listscroll_pane

0x92d2,	// (0x000631a5) dia3_numentry_pane_ParamLimits

0x92d2,	// (0x000631a5) dia3_numentry_pane

0xd4f8,	// (0x000673cb) dia3_list_pane

0xd501,	// (0x000673d4) scroll_pane_cp12

0x9827,	// (0x000636fa) bg_dia3_numentry_pane

0x92e4,	// (0x000631b7) dia3_numentry_pane_t1

0x92f3,	// (0x000631c6) cell_dia3_key_num_pane

0x92fb,	// (0x000631ce) cell_dia3_key0_fun_pane_ParamLimits

0x92fb,	// (0x000631ce) cell_dia3_key0_fun_pane

0x930f,	// (0x000631e2) cell_dia3_key1_fun_pane_ParamLimits

0x930f,	// (0x000631e2) cell_dia3_key1_fun_pane

0x9326,	// (0x000631f9) dia3_listrow_pane

0xc4ee,	// (0x000663c1) bg_dia3_numentry_pane_g1

0x9827,	// (0x000636fa) bg_button_pane_cp21

0xd50a,	// (0x000673dd) cell_dia3_key_num_pane_t1

0xd518,	// (0x000673eb) cell_dia3_key_num_pane_t2

0xd527,	// (0x000673fa) cell_dia3_key_num_pane_t3

0xd536,	// (0x00067409) cell_dia3_key_num_pane_t4

0x0003,

0xfd83,	// (0x00069c56) cell_dia3_key_num_pane_t

0x9827,	// (0x000636fa) bg_button_pane_cp19

0xd545,	// (0x00067418) cell_dia3_key0_fun_pane_g1

0x9827,	// (0x000636fa) bg_button_pane_cp20

0x9338,	// (0x0006320b) cell_dia3_key1_fun_pane_g1

0x9340,	// (0x00063213) area_left_week_number_pane

0x934c,	// (0x0006321f) area_top_day_name_pane

0x935d,	// (0x00063230) frame_month_view_pane

0xd54d,	// (0x00067420) grid_month_view_pane

0x936e,	// (0x00063241) cell_top_day_name_pane_ParamLimits

0x936e,	// (0x00063241) cell_top_day_name_pane

0x9391,	// (0x00063264) cell_area_left_week_number_pane_ParamLimits

0x9391,	// (0x00063264) cell_area_left_week_number_pane

0x93a5,	// (0x00063278) cell_month_view_pane_ParamLimits

0x93a5,	// (0x00063278) cell_month_view_pane

0xd55b,	// (0x0006742e) frm_month_g1

0x93ca,	// (0x0006329d) frm_month_g2

0x93db,	// (0x000632ae) frm_month_g3

0x93ec,	// (0x000632bf) frm_month_g4

0x93fd,	// (0x000632d0) frm_month_g5

0x940e,	// (0x000632e1) frm_month_g6

0x941f,	// (0x000632f2) frm_month_g7

0xd568,	// (0x0006743b) frm_month_g8

0x9430,	// (0x00063303) frm_month_g9

0x9440,	// (0x00063313) frm_month_g10

0x9450,	// (0x00063323) frm_month_g11

0x9460,	// (0x00063333) frm_month_g12

0x9470,	// (0x00063343) frm_month_g13

0x9480,	// (0x00063353) frm_month_g14

0x9490,	// (0x00063363) frm_month_g15

0x94a2,	// (0x00063375) frm_month_g16

0x000f,

0xfd8c,	// (0x00069c5f) frm_month_g

0xd575,	// (0x00067448) cell_top_day_name_pane_t1

0x94b4,	// (0x00063387) cell_area_left_week_number_pane_g1

0x94c0,	// (0x00063393) cell_area_left_week_number_pane_t1

0xe9c7,	// (0x0006889a) cell_month_view_pane_g1

0x94d3,	// (0x000633a6) cell_month_view_pane_t1

0x9827,	// (0x000636fa) main_fps_pane

0xcaf6,	// (0x000669c9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcaf6,	// (0x000669c9) cmail_ddmenu_btn02_pane_cp1

0xcb12,	// (0x000669e5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcb12,	// (0x000669e5) cmail_ddmenu_btn02_pane_cp2

0x8c07,	// (0x00062ada) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c07,	// (0x00062ada) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb1,	// (0x00069b84) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb1,	// (0x00069b84) cmail_ddmenu_btn02_pane_g

0x8c25,	// (0x00062af8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c25,	// (0x00062af8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcb6,	// (0x00069b89) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcb6,	// (0x00069b89) cmail_ddmenu_btn02_pane_t

0x94e6,	// (0x000633b9) fps_text_pane_ParamLimits

0x94e6,	// (0x000633b9) fps_text_pane

0x94fc,	// (0x000633cf) main_fps_pane_g1_ParamLimits

0x94fc,	// (0x000633cf) main_fps_pane_g1

0x9512,	// (0x000633e5) wait_bar_pane_cp010_ParamLimits

0x9512,	// (0x000633e5) wait_bar_pane_cp010

0x9523,	// (0x000633f6) fps_text_pane_t1_ParamLimits

0x9523,	// (0x000633f6) fps_text_pane_t1

0x5fad,	// (0x0005fe80) cam4_image_uncrop_pane_g1

0x5fb6,	// (0x0005fe89) cam4_image_uncrop_pane_g2

0x5fbf,	// (0x0005fe92) cam4_image_uncrop_pane_g3

0x5fc8,	// (0x0005fe9b) cam4_image_uncrop_pane_g4

0x0003,

0xf780,	// (0x00069653) cam4_image_uncrop_pane_g

0x9326,	// (0x000631f9) dia3_listrow_pane_ParamLimits

0x9827,	// (0x000636fa) main_phob2_pane

0x8713,	// (0x000625e6) cell_tport_appsw_pane_cp02_ParamLimits

0x8713,	// (0x000625e6) cell_tport_appsw_pane_cp02

0x8723,	// (0x000625f6) cell_tport_appsw_pane_cp03_ParamLimits

0x8723,	// (0x000625f6) cell_tport_appsw_pane_cp03

0x9827,	// (0x000636fa) phob2_contact_card_pane

0x9827,	// (0x000636fa) phob2_listscroll_pane

0xd588,	// (0x0006745b) phob2_list_pane

0xd590,	// (0x00067463) scroll_pane_cp034

0x953b,	// (0x0006340e) phob2_cc_data_pane_ParamLimits

0x953b,	// (0x0006340e) phob2_cc_data_pane

0x9558,	// (0x0006342b) phob2_cc_listscroll_pane_ParamLimits

0x9558,	// (0x0006342b) phob2_cc_listscroll_pane

0x912e,	// (0x00063001) list_double_large_graphic_phob2_pane_ParamLimits

0x912e,	// (0x00063001) list_double_large_graphic_phob2_pane

0x9574,	// (0x00063447) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9574,	// (0x00063447) list_double_large_graphic_phob2_pane_g1

0x958a,	// (0x0006345d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x958a,	// (0x0006345d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdad,	// (0x00069c80) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdad,	// (0x00069c80) list_double_large_graphic_phob2_pane_g

0x9596,	// (0x00063469) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9596,	// (0x00063469) list_double_large_graphic_phob2_pane_t1

0x95ac,	// (0x0006347f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x95ac,	// (0x0006347f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb2,	// (0x00069c85) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb2,	// (0x00069c85) list_double_large_graphic_phob2_pane_t

0x9827,	// (0x000636fa) list_highlight_pane_cp024

0x95c1,	// (0x00063494) phob2_cc_button_pane

0x95c9,	// (0x0006349c) phob2_cc_data_pane_g1_ParamLimits

0x95c9,	// (0x0006349c) phob2_cc_data_pane_g1

0x95de,	// (0x000634b1) phob2_cc_data_pane_g2_ParamLimits

0x95de,	// (0x000634b1) phob2_cc_data_pane_g2

0x0001,

0xfdb7,	// (0x00069c8a) phob2_cc_data_pane_g_ParamLimits

0xfdb7,	// (0x00069c8a) phob2_cc_data_pane_g

0x95ee,	// (0x000634c1) phob2_cc_data_pane_t1_ParamLimits

0x95ee,	// (0x000634c1) phob2_cc_data_pane_t1

0x9606,	// (0x000634d9) phob2_cc_data_pane_t2_ParamLimits

0x9606,	// (0x000634d9) phob2_cc_data_pane_t2

0x961e,	// (0x000634f1) phob2_cc_data_pane_t3_ParamLimits

0x961e,	// (0x000634f1) phob2_cc_data_pane_t3

0x0002,

0xfdbc,	// (0x00069c8f) phob2_cc_data_pane_t_ParamLimits

0xfdbc,	// (0x00069c8f) phob2_cc_data_pane_t

0xd598,	// (0x0006746b) phob2_cc_list_pane_ParamLimits

0xd598,	// (0x0006746b) phob2_cc_list_pane

0xc40b,	// (0x000662de) scroll_pane_cp035_ParamLimits

0xc40b,	// (0x000662de) scroll_pane_cp035

0xb9e5,	// (0x000658b8) bg_button_pane_cp033

0xd5a4,	// (0x00067477) phob2_cc_button_pane_g1

0xd5b0,	// (0x00067483) phob2_cc_button_pane_t1

0xd5c5,	// (0x00067498) phob2_cc_button_pane_t2

0x0001,

0xfdc3,	// (0x00069c96) phob2_cc_button_pane_t

0x9636,	// (0x00063509) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9636,	// (0x00063509) list_double_large_graphic_phob2_cc_pane

0x9664,	// (0x00063537) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9664,	// (0x00063537) list_double_large_graphic_phob2_cc_pane_g1

0x9670,	// (0x00063543) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9670,	// (0x00063543) list_double_large_graphic_phob2_cc_pane_g2

0x967c,	// (0x0006354f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x967c,	// (0x0006354f) list_double_large_graphic_phob2_cc_pane_g3

0x9688,	// (0x0006355b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9688,	// (0x0006355b) list_double_large_graphic_phob2_cc_pane_g4

0x9694,	// (0x00063567) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9694,	// (0x00063567) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc8,	// (0x00069c9b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc8,	// (0x00069c9b) list_double_large_graphic_phob2_cc_pane_g

0x96a0,	// (0x00063573) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x96a0,	// (0x00063573) list_double_large_graphic_phob2_cc_pane_t1

0x96c9,	// (0x0006359c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x96c9,	// (0x0006359c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdd3,	// (0x00069ca6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdd3,	// (0x00069ca6) list_double_large_graphic_phob2_cc_pane_t

0xd5d7,	// (0x000674aa) list_highlight_pane_cp025_ParamLimits

0xd5d7,	// (0x000674aa) list_highlight_pane_cp025

0xb9e5,	// (0x000658b8) bg_button_pane_cp033_ParamLimits

0xd5a4,	// (0x00067477) phob2_cc_button_pane_g1_ParamLimits

0xd5b0,	// (0x00067483) phob2_cc_button_pane_t1_ParamLimits

0xd5c5,	// (0x00067498) phob2_cc_button_pane_t2_ParamLimits

0xfdc3,	// (0x00069c96) phob2_cc_button_pane_t_ParamLimits

0x0f00,	// (0x0005add3) popup_wgtman_window

0xc50e,	// (0x000663e1) scroll_pane_cp038

0x90a7,	// (0x00062f7a) wgtman_btn_pane_cp_01_ParamLimits

0x90a7,	// (0x00062f7a) wgtman_btn_pane_cp_01

0xd5e5,	// (0x000674b8) wgtman_content_pane

0xd5ee,	// (0x000674c1) wgtman_heading_pane

0x9827,	// (0x000636fa) bg_heading_pane_cp02

0xd5f7,	// (0x000674ca) wgtman_heading_pane_g1

0xd5ff,	// (0x000674d2) wgtman_heading_pane_t1

0xd60d,	// (0x000674e0) scroll_pane_cp036

0xd615,	// (0x000674e8) wgtman_list_pane

0xd61d,	// (0x000674f0) wgtman_list_pane_t1_ParamLimits

0xd61d,	// (0x000674f0) wgtman_list_pane_t1

0xd99f,	// (0x00067872) cam4_grid_pane

0x6e32,	// (0x00060d05) bg_button_pane_cp015_ParamLimits

0x6e42,	// (0x00060d15) bg_button_pane_cp016_ParamLimits

0x6e54,	// (0x00060d27) bg_button_pane_cp017_ParamLimits

0x6ea4,	// (0x00060d77) popup_vitu2_query_window_g3_ParamLimits

0x6ea4,	// (0x00060d77) popup_vitu2_query_window_g3

0x6f57,	// (0x00060e2a) popup_vitu2_query_window_t6_ParamLimits

0x6f57,	// (0x00060e2a) popup_vitu2_query_window_t6

0x6f82,	// (0x00060e55) popup_vitu2_query_window_t7_ParamLimits

0x6f82,	// (0x00060e55) popup_vitu2_query_window_t7

0x5fad,	// (0x0005fe80) cam4_grid_pane_g1

0x5fb6,	// (0x0005fe89) cam4_grid_pane_g2

0xd634,	// (0x00067507) cam4_grid_pane_g3

0xd63d,	// (0x00067510) cam4_grid_pane_g4

0x0003,

0xfdd8,	// (0x00069cab) cam4_grid_pane_g

0x1e08,	// (0x0005bcdb) aid_placing_vt_slider_lsc_ParamLimits

0x2078,	// (0x0005bf4b) vidtel_button_pane_ParamLimits

0x2078,	// (0x0005bf4b) vidtel_button_pane

0x9827,	// (0x000636fa) bg_button_pane_cp034

0x96f2,	// (0x000635c5) vidtel_button_pane_g1

0x96fa,	// (0x000635cd) vidtel_button_pane_t1

0xbb0b,	// (0x000659de) aid_size_vtel_slider_touch

0xc40b,	// (0x000662de) scroll_pane_cp039

0xc53d,	// (0x00066410) ncim_query_button_pane_cp01_ParamLimits

0xc55c,	// (0x0006642f) ncimui_query_pane_g1_ParamLimits

0xb9e5,	// (0x000658b8) input_focus_pane_cp012_ParamLimits

0xc581,	// (0x00066454) ncim_query_entry_pane_t1_ParamLimits

0xc40b,	// (0x000662de) scroll_pane_cp039_ParamLimits

0xabfb,	// (0x00064ace) navi_pane_bcale_mc_g1

0xac03,	// (0x00064ad6) navi_pane_bcale_mc_t1

0xcb5b,	// (0x00066a2e) main_sp_fs_email_pane_g1

0xcb67,	// (0x00066a3a) main_sp_fs_email_pane_g2

0x0001,

0xfb69,	// (0x00069a3c) main_sp_fs_email_pane_g

0xcfe4,	// (0x00066eb7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcfe4,	// (0x00066eb7) list_single_cale_mrui_row_pane_g3

0x8c45,	// (0x00062b18) list_single_recal_day_pane_g5_event_pane

0xd14d,	// (0x00067020) list_single_recal_day_pane_g7

0xd646,	// (0x00067519) list_recal_day_event_pane_cp01

0xd64f,	// (0x00067522) list_recal_vselct_arw_lo_pane_cp01

0xd657,	// (0x0006752a) list_recal_vselct_arw_up_pane_cp01

0xd65f,	// (0x00067532) list_recal_vselct_pane_cp01

0xbb2d,	// (0x00065a00) list_recal_day_event_pane_cp01_g1

0xd669,	// (0x0006753c) list_recal_day_event_pane_cp01_t1

0xd155,	// (0x00067028) list_single_recal_day_pane_t1_ParamLimits

0x8c5b,	// (0x00062b2e) list_single_recal_day_pane_t2_ParamLimits

0xfcc6,	// (0x00069b99) list_single_recal_day_pane_t_ParamLimits

0x9f06,	// (0x00063dd9) bg_notes_pane_ParamLimits

0x9fb1,	// (0x00063e84) list_notes_pane_ParamLimits

0x11fb,	// (0x0005b0ce) scroll_pane_cp06_ParamLimits

0x9ff1,	// (0x00063ec4) main_notes_pane_ParamLimits

0x9827,	// (0x000636fa) main_welc_pane

0x9710,	// (0x000635e3) main_welc_body_pane_ParamLimits

0x9710,	// (0x000635e3) main_welc_body_pane

0x972c,	// (0x000635ff) main_welc_opti_pane_ParamLimits

0x972c,	// (0x000635ff) main_welc_opti_pane

0x9769,	// (0x0006363c) main_welc_pane_t1_ParamLimits

0x9769,	// (0x0006363c) main_welc_pane_t1

0x9783,	// (0x00063656) main_welc_body_row_pane_ParamLimits

0x9783,	// (0x00063656) main_welc_body_row_pane

0xd677,	// (0x0006754a) main_welc_opti_row_pane_ParamLimits

0xd677,	// (0x0006754a) main_welc_opti_row_pane

0xd685,	// (0x00067558) main_welc_opti_row_pane_g1

0x9796,	// (0x00063669) main_welc_opti_row_pane_t1

0xd68d,	// (0x00067560) main_welc_body_row_pane_t1

0xd394,	// (0x00067267) popup_notif_wgt_heading_pane

0xd3ae,	// (0x00067281) aid_size_list_notif_wgt_del_ParamLimits

0xd3bb,	// (0x0006728e) list_notif_wgt_row_pane_g1_ParamLimits

0xd3c7,	// (0x0006729a) list_notif_wgt_row_pane_g2_ParamLimits

0xd3db,	// (0x000672ae) list_notif_wgt_row_pane_g3_ParamLimits

0xfd2d,	// (0x00069c00) list_notif_wgt_row_pane_g_ParamLimits

0xd3e8,	// (0x000672bb) list_notif_wgt_row_pane_t1_ParamLimits

0xd3fe,	// (0x000672d1) list_notif_wgt_row_pane_t2_ParamLimits

0xd410,	// (0x000672e3) list_notif_wgt_row_pane_t3_ParamLimits

0xfd34,	// (0x00069c07) list_notif_wgt_row_pane_t_ParamLimits

0x913f,	// (0x00063012) listrow_wgtman_pane_g1_ParamLimits

0x914c,	// (0x0006301f) listrow_wgtman_pane_g2_ParamLimits

0xfd5d,	// (0x00069c30) listrow_wgtman_pane_g_ParamLimits

0x9164,	// (0x00063037) listrow_wgtman_pane_t1_ParamLimits

0x917c,	// (0x0006304f) listrow_wgtman_pane_t2_ParamLimits

0xfd62,	// (0x00069c35) listrow_wgtman_pane_t_ParamLimits

0x91a2,	// (0x00063075) wait_bar_pane_cp09_ParamLimits

0x9827,	// (0x000636fa) bg_popup_heading_pane_cp02

0xd69c,	// (0x0006756f) popup_notif_wgt_heading_pane_g1

0xd6a4,	// (0x00067577) popup_notif_wgt_heading_pane_t1

0xe394,	// (0x00068267) main_vids_pane

0x9827,	// (0x000636fa) vids_listscroll_pane

0x97a5,	// (0x00063678) scroll_pane_cp040

0x9827,	// (0x000636fa) vids_list_pane

0x97b0,	// (0x00063683) vids_list_double_pane_ParamLimits

0x97b0,	// (0x00063683) vids_list_double_pane

0x97bd,	// (0x00063690) vids_list_double_pane_g1

0x97c6,	// (0x00063699) vids_list_double_pane_t1

0x97d6,	// (0x000636a9) vids_list_double_pane_t2

0x0001,

0xfde6,	// (0x00069cb9) vids_list_double_pane_t

0x9882,	// (0x00063755) main_ncimui_pane_ParamLimits

0x79f6,	// (0x000618c9) main_ncimui_pane_g1_ParamLimits

0x7a02,	// (0x000618d5) main_ncimui_pane_g2_ParamLimits

0x7a02,	// (0x000618d5) main_ncimui_pane_g2

0x0001,

0xfa77,	// (0x0006994a) main_ncimui_pane_g_ParamLimits

0xfa77,	// (0x0006994a) main_ncimui_pane_g

0x9743,	// (0x00063616) main_welc_pane_g1_ParamLimits

0x9743,	// (0x00063616) main_welc_pane_g1

0x9756,	// (0x00063629) main_welc_pane_g2_ParamLimits

0x9756,	// (0x00063629) main_welc_pane_g2

0x0001,

0xfde1,	// (0x00069cb4) main_welc_pane_g_ParamLimits

0xfde1,	// (0x00069cb4) main_welc_pane_g

0x9f06,	// (0x00063dd9) listscroll_mce_pane_ParamLimits

0x30dc,	// (0x0005cfaf) wait_bar_pane_cp10

0xe37a,	// (0x0006824d) main_cale_day_pane_ParamLimits

0xe37a,	// (0x0006824d) main_cale_week_pane_ParamLimits

0x9f06,	// (0x00063dd9) main_messa_pane_ParamLimits

0x538c,	// (0x0005f25f) main_clock2_btn_pane_ParamLimits

0x538c,	// (0x0005f25f) main_clock2_btn_pane

0xeb4f,	// (0x00068a22) main_clock2_btn_pane_cp01_ParamLimits

0xeb4f,	// (0x00068a22) main_clock2_btn_pane_cp01

0xcf9f,	// (0x00066e72) list_cale_mrui_pane_ParamLimits

0xd444,	// (0x00067317) main_cf0_pane_g2

0x0001,

0xfd3b,	// (0x00069c0e) main_cf0_pane_g

0x9340,	// (0x00063213) area_left_week_number_pane_ParamLimits

0x934c,	// (0x0006321f) area_top_day_name_pane_ParamLimits

0x935d,	// (0x00063230) frame_month_view_pane_ParamLimits

0xd54d,	// (0x00067420) grid_month_view_pane_ParamLimits

0xd55b,	// (0x0006742e) frm_month_g1_ParamLimits

0x93ca,	// (0x0006329d) frm_month_g2_ParamLimits

0x93db,	// (0x000632ae) frm_month_g3_ParamLimits

0x93ec,	// (0x000632bf) frm_month_g4_ParamLimits

0x93fd,	// (0x000632d0) frm_month_g5_ParamLimits

0x940e,	// (0x000632e1) frm_month_g6_ParamLimits

0x941f,	// (0x000632f2) frm_month_g7_ParamLimits

0xd568,	// (0x0006743b) frm_month_g8_ParamLimits

0x9430,	// (0x00063303) frm_month_g9_ParamLimits

0x9440,	// (0x00063313) frm_month_g10_ParamLimits

0x9450,	// (0x00063323) frm_month_g11_ParamLimits

0x9460,	// (0x00063333) frm_month_g12_ParamLimits

0x9470,	// (0x00063343) frm_month_g13_ParamLimits

0x9480,	// (0x00063353) frm_month_g14_ParamLimits

0x9490,	// (0x00063363) frm_month_g15_ParamLimits

0x94a2,	// (0x00063375) frm_month_g16_ParamLimits

0xfd8c,	// (0x00069c5f) frm_month_g_ParamLimits

0xd575,	// (0x00067448) cell_top_day_name_pane_t1_ParamLimits

0x94b4,	// (0x00063387) cell_area_left_week_number_pane_g1_ParamLimits

0x94c0,	// (0x00063393) cell_area_left_week_number_pane_t1_ParamLimits

0xe9c7,	// (0x0006889a) cell_month_view_pane_g1_ParamLimits

0x94d3,	// (0x000633a6) cell_month_view_pane_t1_ParamLimits

0x9efe,	// (0x00063dd1) main_clock2_btn_pane_g1

0xd6b2,	// (0x00067585) main_clock2_btn_pane_t1

0xb9e5,	// (0x000658b8) listscroll_cmail_pane_ParamLimits

0xcb5b,	// (0x00066a2e) main_sp_fs_email_pane_g1_ParamLimits

0xcb67,	// (0x00066a3a) main_sp_fs_email_pane_g2_ParamLimits

0xfb69,	// (0x00069a3c) main_sp_fs_email_pane_g_ParamLimits

0xd0c9,	// (0x00066f9c) list_recal_day_pane_ParamLimits

0xd0da,	// (0x00066fad) mian_recal_day_pane_t1

0x83ec,	// (0x000622bf) list_single_dyc_row_text_pane_t4_ParamLimits

0x83ec,	// (0x000622bf) list_single_dyc_row_text_pane_t4

0x8423,	// (0x000622f6) list_single_dyc_row_text_pane_t5_ParamLimits

0x8423,	// (0x000622f6) list_single_dyc_row_text_pane_t5

0xcc19,	// (0x00066aec) list_single_dyc_row_text_pane_t6_ParamLimits

0xcc19,	// (0x00066aec) list_single_dyc_row_text_pane_t6

0x2c0d,	// (0x0005cae0) aid_mgn_list_cale_time_pane

0x9882,	// (0x00063755) main_gallery2_pane_ParamLimits

0xeb63,	// (0x00068a36) main_clock2_pane_cp01_t1

0xeb71,	// (0x00068a44) main_clock2_pane_cp01_t3

0x0001,

0x0475,	// (0x0005a348) main_clock2_pane_cp01_t

0x157d,	// (0x0005b450) cale_week_scroll_pane_g16_ParamLimits

0x157d,	// (0x0005b450) cale_week_scroll_pane_g16

0xa260,	// (0x00064133) vorec_slider_pane

0x96fa,	// (0x000635cd) vidtel_button_pane_t1_ParamLimits

0x8d00,	// (0x00062bd3) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d12,	// (0x00062be5) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d23,	// (0x00062bf6) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d23,	// (0x00062bf6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfce9,	// (0x00069bbc) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d36,	// (0x00062c09) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d51,	// (0x00062c24) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf2,	// (0x00069bc5) main_fs_bigclock_clock_pane_t_ParamLimits

0x4c12,	// (0x0005eae5) main_mup3_lyrics_pane_ParamLimits

0x4c12,	// (0x0005eae5) main_mup3_lyrics_pane

0x9808,	// (0x000636db) main_mup3_lyrics_pane_t1_ParamLimits

0x9808,	// (0x000636db) main_mup3_lyrics_pane_t1

0xd70f,	// (0x000675e2) aid_main_mp4_pane_t1_area

0xd70f,	// (0x000675e2) aid_main_mp4_pane_t2_area

0xd7b7,	// (0x0006768a) main_mp4_pane_g7_ParamLimits

0xd7b7,	// (0x0006768a) main_mp4_pane_g7

0xd7c3,	// (0x00067696) main_mp4_pane_g8_ParamLimits

0xd7c3,	// (0x00067696) main_mp4_pane_g8

0x5de5,	// (0x0005fcb8) aid_call6_pane_g1_size

0x9650,	// (0x00063523) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9650,	// (0x00063523) list_double_large_graphic_phob2_other_pane

0xab4e,	// (0x00064a21) list_double_large_graphic_phob2_other_pane_g1

0x9827,	// (0x000636fa) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small

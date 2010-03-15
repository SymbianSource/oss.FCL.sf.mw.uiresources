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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008c51a };

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
0x2331,	// (0x0008e84b) Screen

0x233d,	// (0x0008e857) application_window

0x2399,	// (0x0008e8b3) area_bottom_pane_ParamLimits

0x2399,	// (0x0008e8b3) area_bottom_pane

0x23f2,	// (0x0008e90c) area_top_pane_ParamLimits

0x23f2,	// (0x0008e90c) area_top_pane

0x2456,	// (0x0008e970) call_video_uplink_pane_ParamLimits

0x2456,	// (0x0008e970) call_video_uplink_pane

0x2495,	// (0x0008e9af) main_pane_ParamLimits

0x2495,	// (0x0008e9af) main_pane

0xe286,	// (0x0009a7a0) context_pane

0x5ba3,	// (0x000920bd) navi_pane

0x5bc3,	// (0x000920dd) popup_cale_events_window_ParamLimits

0x5bc3,	// (0x000920dd) popup_cale_events_window

0xe299,	// (0x0009a7b3) popup_mup_playback_window

0x5bdb,	// (0x000920f5) signal_pane

0xb3bf,	// (0x000978d9) main_browser_pane

0xcde5,	// (0x000992ff) main_burst_pane

0x5a21,	// (0x00091f3b) main_calc_pane

0xe26c,	// (0x0009a786) main_cale_day_pane

0x2bf8,	// (0x0008f112) main_cale_month_pane

0xe26c,	// (0x0009a786) main_cale_week_pane

0xcde5,	// (0x000992ff) main_call_pane

0xb09f,	// (0x000975b9) main_call_poc_pane

0xcde5,	// (0x000992ff) main_camera_pane

0xcde5,	// (0x000992ff) main_chi_dic_pane

0xcc5a,	// (0x00099174) main_clock_pane

0xb09f,	// (0x000975b9) main_fmradio_pane

0xcde5,	// (0x000992ff) main_graph_messa_pane

0xb09f,	// (0x000975b9) main_help_pane

0xb3bf,	// (0x000978d9) main_im_pane

0xb2fa,	// (0x00097814) main_image_pane_ParamLimits

0xb2fa,	// (0x00097814) main_image_pane

0xb09f,	// (0x000975b9) main_location2_pane

0xcde5,	// (0x000992ff) main_location_pane

0xb2fa,	// (0x00097814) main_messa_pane

0xb09f,	// (0x000975b9) main_mp2_pane

0xcde5,	// (0x000992ff) main_mp_pane

0xb09f,	// (0x000975b9) main_msg_pane

0xb09f,	// (0x000975b9) main_mup_eq_pane

0xb09f,	// (0x000975b9) main_mup_pane

0xb3bf,	// (0x000978d9) main_notes_pane

0xb09f,	// (0x000975b9) main_pec_pane

0xb09f,	// (0x000975b9) main_phob_pane

0xb09f,	// (0x000975b9) main_pinb_pane

0xb09f,	// (0x000975b9) main_postcard_pane

0xb09f,	// (0x000975b9) main_qdial_pane

0xcde5,	// (0x000992ff) main_skin_pane

0xb09f,	// (0x000975b9) main_smil2_pane

0xcde5,	// (0x000992ff) main_smil_pane

0xcde5,	// (0x000992ff) main_video_pane

0xcde5,	// (0x000992ff) main_video_tele_pane

0xb2fa,	// (0x00097814) main_viewer_pane_ParamLimits

0xb2fa,	// (0x00097814) main_viewer_pane

0xcde5,	// (0x000992ff) main_vorec_pane

0x5a6d,	// (0x00091f87) popup_blid_sat_info_window_ParamLimits

0x5a6d,	// (0x00091f87) popup_blid_sat_info_window

0x5a8d,	// (0x00091fa7) popup_dyc_status_message_window_ParamLimits

0x5a8d,	// (0x00091fa7) popup_dyc_status_message_window

0x5a9d,	// (0x00091fb7) popup_grid_large_graphic_window_ParamLimits

0x5a9d,	// (0x00091fb7) popup_grid_large_graphic_window

0x5b2e,	// (0x00092048) popup_loc_request_window_ParamLimits

0x5b2e,	// (0x00092048) popup_loc_request_window

0x5b7b,	// (0x00092095) popup_wml_address_window_ParamLimits

0x5b7b,	// (0x00092095) popup_wml_address_window

0x58f9,	// (0x00091e13) call_muted_g1

0x55bb,	// (0x00091ad5) popup_call_audio_conf_window_ParamLimits

0x55bb,	// (0x00091ad5) popup_call_audio_conf_window

0x5909,	// (0x00091e23) popup_call_audio_first_window_ParamLimits

0x5909,	// (0x00091e23) popup_call_audio_first_window

0x5949,	// (0x00091e63) popup_call_audio_in_window_ParamLimits

0x5949,	// (0x00091e63) popup_call_audio_in_window

0x596d,	// (0x00091e87) popup_call_audio_out_window_ParamLimits

0x596d,	// (0x00091e87) popup_call_audio_out_window

0x598f,	// (0x00091ea9) popup_call_audio_second_window_ParamLimits

0x598f,	// (0x00091ea9) popup_call_audio_second_window

0x59bf,	// (0x00091ed9) popup_call_audio_wait_window_ParamLimits

0x59bf,	// (0x00091ed9) popup_call_audio_wait_window

0x59e0,	// (0x00091efa) popup_number_entry_window_ParamLimits

0x59e0,	// (0x00091efa) popup_number_entry_window

0x0f60,	// (0x0008d47a) bg_popup_call_pane_cp05_ParamLimits

0x0f60,	// (0x0008d47a) bg_popup_call_pane_cp05

0x0f80,	// (0x0008d49a) popup_number_entry_window_t1

0x0f93,	// (0x0008d4ad) popup_number_entry_window_t2

0x0fa5,	// (0x0008d4bf) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0009b5ed) popup_number_entry_window_t

0x0fb7,	// (0x0008d4d1) text_title_cp2

0x0fca,	// (0x0008d4e4) bg_popup_call_pane_cp_ParamLimits

0x0fca,	// (0x0008d4e4) bg_popup_call_pane_cp

0x0fd8,	// (0x0008d4f2) call_thumbnail_pane

0x0fe0,	// (0x0008d4fa) popup_call_audio_in_window_g1_ParamLimits

0x0fe0,	// (0x0008d4fa) popup_call_audio_in_window_g1

0x0fec,	// (0x0008d506) popup_call_audio_in_window_g2_ParamLimits

0x0fec,	// (0x0008d506) popup_call_audio_in_window_g2

0x0ff8,	// (0x0008d512) popup_call_audio_in_window_g3_ParamLimits

0x0ff8,	// (0x0008d512) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0009b5f6) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0009b5f6) popup_call_audio_in_window_g

0x1004,	// (0x0008d51e) popup_call_audio_in_window_t1_ParamLimits

0x1004,	// (0x0008d51e) popup_call_audio_in_window_t1

0x1020,	// (0x0008d53a) popup_call_audio_in_window_t2_ParamLimits

0x1020,	// (0x0008d53a) popup_call_audio_in_window_t2

0x103c,	// (0x0008d556) popup_call_audio_in_window_t3_ParamLimits

0x103c,	// (0x0008d556) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0009b5fd) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0009b5fd) popup_call_audio_in_window_t

0x0fca,	// (0x0008d4e4) bg_popup_call_pane_cp01_ParamLimits

0x0fca,	// (0x0008d4e4) bg_popup_call_pane_cp01

0x0fd8,	// (0x0008d4f2) call_thumbnail_pane_cp02

0x104f,	// (0x0008d569) call_type_pane_cp022

0x1057,	// (0x0008d571) popup_call_audio_out_window_g1_ParamLimits

0x1057,	// (0x0008d571) popup_call_audio_out_window_g1

0x1069,	// (0x0008d583) popup_call_audio_out_window_g2_ParamLimits

0x1069,	// (0x0008d583) popup_call_audio_out_window_g2

0x1075,	// (0x0008d58f) popup_call_audio_out_window_g3_ParamLimits

0x1075,	// (0x0008d58f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0009b604) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0009b604) popup_call_audio_out_window_g

0x1087,	// (0x0008d5a1) popup_call_audio_out_window_t1_ParamLimits

0x1087,	// (0x0008d5a1) popup_call_audio_out_window_t1

0x109f,	// (0x0008d5b9) popup_call_audio_out_window_t2_ParamLimits

0x109f,	// (0x0008d5b9) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0009b60b) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0009b60b) popup_call_audio_out_window_t

0x10b4,	// (0x0008d5ce) bg_popup_call_pane_ParamLimits

0x10b4,	// (0x0008d5ce) bg_popup_call_pane

0x26ae,	// (0x0008ebc8) call_thumbnail_pane_cp_ParamLimits

0x26ae,	// (0x0008ebc8) call_thumbnail_pane_cp

0x1138,	// (0x0008d652) call_type_pane_cp01_ParamLimits

0x1138,	// (0x0008d652) call_type_pane_cp01

0x117c,	// (0x0008d696) popup_call_audio_first_window_g1_ParamLimits

0x117c,	// (0x0008d696) popup_call_audio_first_window_g1

0x11c8,	// (0x0008d6e2) popup_call_audio_first_window_g2_ParamLimits

0x11c8,	// (0x0008d6e2) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0009b610) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0009b610) popup_call_audio_first_window_g

0x120c,	// (0x0008d726) popup_call_audio_first_window_t1_ParamLimits

0x120c,	// (0x0008d726) popup_call_audio_first_window_t1

0x12b8,	// (0x0008d7d2) popup_call_audio_first_window_t4_ParamLimits

0x12b8,	// (0x0008d7d2) popup_call_audio_first_window_t4

0xb070,	// (0x0009758a) popup_call_audio_first_window_t5_ParamLimits

0xb070,	// (0x0009758a) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0009b615) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0009b615) popup_call_audio_first_window_t

0xb09f,	// (0x000975b9) bg_popup_call_pane_cp02

0xb0a9,	// (0x000975c3) call_type_pane_cp023

0xb0b1,	// (0x000975cb) popup_call_audio_wait_window_g1

0xb0b9,	// (0x000975d3) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0009b61c) popup_call_audio_wait_window_g

0xb0c1,	// (0x000975db) popup_call_audio_wait_window_t3

0xb0cf,	// (0x000975e9) bg_popup_call_pane_cp03_ParamLimits

0xb0cf,	// (0x000975e9) bg_popup_call_pane_cp03

0xb12f,	// (0x00097649) call_thumbnail_pane_cp011_ParamLimits

0xb12f,	// (0x00097649) call_thumbnail_pane_cp011

0xb13b,	// (0x00097655) call_type_pane_cp034_ParamLimits

0xb13b,	// (0x00097655) call_type_pane_cp034

0xb177,	// (0x00097691) popup_call_audio_second_window_g1_ParamLimits

0xb177,	// (0x00097691) popup_call_audio_second_window_g1

0xb1b3,	// (0x000976cd) popup_call_audio_second_window_g2_ParamLimits

0xb1b3,	// (0x000976cd) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0009b621) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0009b621) popup_call_audio_second_window_g

0xb1ef,	// (0x00097709) popup_call_audio_second_window_t1_ParamLimits

0xb1ef,	// (0x00097709) popup_call_audio_second_window_t1

0xb270,	// (0x0009778a) popup_call_audio_second_window_t2_ParamLimits

0xb270,	// (0x0009778a) popup_call_audio_second_window_t2

0xb2a6,	// (0x000977c0) popup_call_audio_second_window_t3_ParamLimits

0xb2a6,	// (0x000977c0) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0009b626) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0009b626) popup_call_audio_second_window_t

0xb09f,	// (0x000975b9) bg_popup_call_pane_cp04

0xb2dc,	// (0x000977f6) list_conf_pane

0xb2e4,	// (0x000977fe) popup_call_audio_conf_window_t1

0xb2f2,	// (0x0009780c) call_thumbnail_pane_g1

0xb2fa,	// (0x00097814) bg_pinb_pane_ParamLimits

0xb2fa,	// (0x00097814) bg_pinb_pane

0xb308,	// (0x00097822) find_pinb_pane

0xb311,	// (0x0009782b) listscroll_pinb_pane_ParamLimits

0xb311,	// (0x0009782b) listscroll_pinb_pane

0xb320,	// (0x0009783a) pinb_bg_pane_g1

0x26d2,	// (0x0008ebec) pinb_bg_pane_g2

0x26de,	// (0x0008ebf8) pinb_bg_pane_g3

0x26ea,	// (0x0008ec04) pinb_bg_pane_g4

0x26f6,	// (0x0008ec10) pinb_bg_pane_g5

0x2702,	// (0x0008ec1c) pinb_bg_pane_g6

0x270d,	// (0x0008ec27) pinb_bg_pane_g7

0x2718,	// (0x0008ec32) pinb_bg_pane_g8

0x2723,	// (0x0008ec3d) pinb_bg_pane_g9

0x272d,	// (0x0008ec47) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0009b62d) pinb_bg_pane_g

0x274a,	// (0x0008ec64) grid_pinb_pane

0x2755,	// (0x0008ec6f) list_pinb_pane

0x2760,	// (0x0008ec7a) scroll_pane_cp01_ParamLimits

0x2760,	// (0x0008ec7a) scroll_pane_cp01

0xb32a,	// (0x00097844) find_pinb_pane_g1_ParamLimits

0xb32a,	// (0x00097844) find_pinb_pane_g1

0xb342,	// (0x0009785c) find_pinb_pane_t1

0xb354,	// (0x0009786e) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0009b647) find_pinb_pane_t

0xb369,	// (0x00097883) input_focus_pane_cp01_ParamLimits

0xb369,	// (0x00097883) input_focus_pane_cp01

0x2772,	// (0x0008ec8c) cell_pinb_pane_ParamLimits

0x2772,	// (0x0008ec8c) cell_pinb_pane

0x279a,	// (0x0008ecb4) cell_pinb_pane_g1_ParamLimits

0x279a,	// (0x0008ecb4) cell_pinb_pane_g1

0x27af,	// (0x0008ecc9) cell_pinb_pane_g2_ParamLimits

0x27af,	// (0x0008ecc9) cell_pinb_pane_g2

0xb375,	// (0x0009788f) cell_pinb_pane_g3_ParamLimits

0xb375,	// (0x0009788f) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0009b64c) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0009b64c) cell_pinb_pane_g

0xb09f,	// (0x000975b9) grid_highlight_pane_cp01

0x27bb,	// (0x0008ecd5) list_pinb_item_pane_ParamLimits

0x27bb,	// (0x0008ecd5) list_pinb_item_pane

0xb09f,	// (0x000975b9) list_highlight_pane_cp02

0x27e1,	// (0x0008ecfb) list_pinb_item_pane_g1_ParamLimits

0x27e1,	// (0x0008ecfb) list_pinb_item_pane_g1

0x27ee,	// (0x0008ed08) list_pinb_item_pane_g2_ParamLimits

0x27ee,	// (0x0008ed08) list_pinb_item_pane_g2

0x27fa,	// (0x0008ed14) list_pinb_item_pane_g3_ParamLimits

0x27fa,	// (0x0008ed14) list_pinb_item_pane_g3

0x280b,	// (0x0008ed25) list_pinb_item_pane_g4_ParamLimits

0x280b,	// (0x0008ed25) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0009b653) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0009b653) list_pinb_item_pane_g

0x2817,	// (0x0008ed31) list_pinb_item_pane_t1_ParamLimits

0x2817,	// (0x0008ed31) list_pinb_item_pane_t1

0x2848,	// (0x0008ed62) calc_display_pane

0x2866,	// (0x0008ed80) calc_paper_pane

0x2882,	// (0x0008ed9c) grid_calc_pane

0xb09f,	// (0x000975b9) bg_list_pane_cp01

0x28ae,	// (0x0008edc8) clock_g1

0x28b6,	// (0x0008edd0) clock_g2

0x0001,

0xf142,	// (0x0009b65c) clock_g

0x28c0,	// (0x0008edda) clock_t1_ParamLimits

0x28c0,	// (0x0008edda) clock_t1

0x28d5,	// (0x0008edef) clock_t2_ParamLimits

0x28d5,	// (0x0008edef) clock_t2

0x28e7,	// (0x0008ee01) clock_t3_ParamLimits

0x28e7,	// (0x0008ee01) clock_t3

0x28f9,	// (0x0008ee13) clock_t4_ParamLimits

0x28f9,	// (0x0008ee13) clock_t4

0x290b,	// (0x0008ee25) clock_t5_ParamLimits

0x290b,	// (0x0008ee25) clock_t5

0x2920,	// (0x0008ee3a) clock_t6_ParamLimits

0x2920,	// (0x0008ee3a) clock_t6

0x2932,	// (0x0008ee4c) clock_t7_ParamLimits

0x2932,	// (0x0008ee4c) clock_t7

0x2944,	// (0x0008ee5e) clock_t8_ParamLimits

0x2944,	// (0x0008ee5e) clock_t8

0x295a,	// (0x0008ee74) clock_t9_ParamLimits

0x295a,	// (0x0008ee74) clock_t9

0x0008,

0xf147,	// (0x0009b661) clock_t_ParamLimits

0xf147,	// (0x0009b661) clock_t

0xb381,	// (0x0009789b) popup_clock_analogue_window_cp02

0xb381,	// (0x0009789b) popup_clock_digital_window_cp01

0xb389,	// (0x000978a3) listscroll_help_pane

0xb09f,	// (0x000975b9) phob_pre_status_pane

0xb393,	// (0x000978ad) grid_qdial_pane

0xb2fa,	// (0x00097814) listscroll_mce_pane

0xb2fa,	// (0x00097814) bg_notes_pane

0xb39d,	// (0x000978b7) list_notes_pane

0x2970,	// (0x0008ee8a) scroll_pane_cp06

0xb3ab,	// (0x000978c5) bg_calc_paper_pane

0x297f,	// (0x0008ee99) list_calc_pane

0xb3bf,	// (0x000978d9) bg_calc_display_pane

0x2999,	// (0x0008eeb3) calc_display_pane_t1

0x29ae,	// (0x0008eec8) calc_display_pane_t2

0x29c3,	// (0x0008eedd) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0009b674) calc_display_pane_t

0x29d5,	// (0x0008eeef) cell_calc_pane_ParamLimits

0x29d5,	// (0x0008eeef) cell_calc_pane

0xb3cb,	// (0x000978e5) bg_calc_paper_pane_g1

0xb3d7,	// (0x000978f1) bg_calc_paper_pane_g2

0xb3e3,	// (0x000978fd) bg_calc_paper_pane_g3

0xb3ef,	// (0x00097909) bg_calc_paper_pane_g4

0xb3fb,	// (0x00097915) bg_calc_paper_pane_g5

0x2a02,	// (0x0008ef1c) bg_calc_paper_pane_g6

0x2a13,	// (0x0008ef2d) bg_calc_paper_pane_g7

0x2a24,	// (0x0008ef3e) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0009b67b) bg_calc_paper_pane_g

0x2a35,	// (0x0008ef4f) calc_bg_paper_pane_g9

0x2a46,	// (0x0008ef60) list_calc_item_pane_ParamLimits

0x2a46,	// (0x0008ef60) list_calc_item_pane

0xb407,	// (0x00097921) list_calc_item_pane_g1

0x2a75,	// (0x0008ef8f) list_calc_item_pane_t1_ParamLimits

0x2a75,	// (0x0008ef8f) list_calc_item_pane_t1

0x2a87,	// (0x0008efa1) list_calc_item_pane_t2_ParamLimits

0x2a87,	// (0x0008efa1) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0009b68c) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0009b68c) list_calc_item_pane_t

0xb414,	// (0x0009792e) cell_calc_pane_g1

0xb41e,	// (0x00097938) grid_highlight_pane_cp02

0x2ab7,	// (0x0008efd1) bg_calc_display_pane_g1

0x2ac0,	// (0x0008efda) bg_calc_display_pane_g2

0xe53e,	// (0x0009aa58) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0009b696) bg_calc_display_pane_g

0x2aca,	// (0x0008efe4) cell_qdial_pane_ParamLimits

0x2aca,	// (0x0008efe4) cell_qdial_pane

0x2ade,	// (0x0008eff8) cell_qdial_pane_g1_ParamLimits

0x2ade,	// (0x0008eff8) cell_qdial_pane_g1

0x2aeb,	// (0x0008f005) cell_qdial_pane_g2_ParamLimits

0x2aeb,	// (0x0008f005) cell_qdial_pane_g2

0xb440,	// (0x0009795a) cell_qdial_pane_g3_ParamLimits

0xb440,	// (0x0009795a) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0009b69d) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0009b69d) cell_qdial_pane_g

0x2b09,	// (0x0008f023) cell_qdial_pane_t1_ParamLimits

0x2b09,	// (0x0008f023) cell_qdial_pane_t1

0x2b21,	// (0x0008f03b) cell_qdial_pane_t2_ParamLimits

0x2b21,	// (0x0008f03b) cell_qdial_pane_t2

0x2b34,	// (0x0008f04e) cell_qdial_pane_t3_ParamLimits

0x2b34,	// (0x0008f04e) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0009b6a6) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0009b6a6) cell_qdial_pane_t

0xb09f,	// (0x000975b9) grid_highlight_pane_cp04

0xb44c,	// (0x00097966) thumbnail_qdial_pane_ParamLimits

0xb44c,	// (0x00097966) thumbnail_qdial_pane

0xb4a8,	// (0x000979c2) list_help_pane

0xb4b1,	// (0x000979cb) scroll_pane_cp02

0x2b47,	// (0x0008f061) help_list_pane_t1_ParamLimits

0x2b47,	// (0x0008f061) help_list_pane_t1

0x2b7a,	// (0x0008f094) bg_notes_pane_g2

0x2b82,	// (0x0008f09c) bg_notes_pane_g3

0x2b8a,	// (0x0008f0a4) notes_bg_pane_g1

0x2b92,	// (0x0008f0ac) notes_bg_pane_g4

0x2b9a,	// (0x0008f0b4) notes_bg_pane_g5

0x2ba2,	// (0x0008f0bc) notes_bg_pane_g6

0x2baa,	// (0x0008f0c4) notes_bg_pane_g7

0x2bb2,	// (0x0008f0cc) notes_bg_pane_g8

0x2bba,	// (0x0008f0d4) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0009b6c4) notes_bg_pane_g

0x2bc2,	// (0x0008f0dc) list_notes_text_pane_ParamLimits

0x2bc2,	// (0x0008f0dc) list_notes_text_pane

0xb4ba,	// (0x000979d4) list_notes_text_pane_g1

0x2bea,	// (0x0008f104) list_notes_text_pane_t1

0x2bf8,	// (0x0008f112) listscroll_cale_week_pane

0x2c1d,	// (0x0008f137) bg_cale_heading_pane

0xb4dd,	// (0x000979f7) bg_cale_pane_cp01

0x2c3f,	// (0x0008f159) cale_week_corner_pane

0x2c59,	// (0x0008f173) cale_week_day_heading_pane

0x2c7b,	// (0x0008f195) cale_week_scroll_pane_g1

0x2c98,	// (0x0008f1b2) cale_week_scroll_pane_g2

0x2cab,	// (0x0008f1c5) cale_week_scroll_pane_g3

0x2cbe,	// (0x0008f1d8) cale_week_scroll_pane_g4

0x2cd1,	// (0x0008f1eb) cale_week_scroll_pane_g5

0x2ce4,	// (0x0008f1fe) cale_week_scroll_pane_g6

0x2cf7,	// (0x0008f211) cale_week_scroll_pane_g7

0x2d0a,	// (0x0008f224) cale_week_scroll_pane_g8

0x2d1f,	// (0x0008f239) cale_week_scroll_pane_g9

0x2d32,	// (0x0008f24c) cale_week_scroll_pane_g10

0x2d45,	// (0x0008f25f) cale_week_scroll_pane_g11

0x2d58,	// (0x0008f272) cale_week_scroll_pane_g12

0x2d6f,	// (0x0008f289) cale_week_scroll_pane_g13

0x2d8a,	// (0x0008f2a4) cale_week_scroll_pane_g14

0x2da5,	// (0x0008f2bf) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0009b6d3) cale_week_scroll_pane_g

0x2dc0,	// (0x0008f2da) cale_week_time_pane

0x2dd5,	// (0x0008f2ef) grid_cale_week_pane

0xb50d,	// (0x00097a27) scroll_pane_cp08

0x2df4,	// (0x0008f30e) cell_cale_week_pane_ParamLimits

0x2df4,	// (0x0008f30e) cell_cale_week_pane

0x2e56,	// (0x0008f370) cale_week_day_heading_pane_t1

0x2e91,	// (0x0008f3ab) cale_week_day_heading_pane_t2

0x2ecc,	// (0x0008f3e6) cale_week_day_heading_pane_t3

0x2f07,	// (0x0008f421) cale_week_day_heading_pane_t4

0x2f42,	// (0x0008f45c) cale_week_day_heading_pane_t5

0x2f7d,	// (0x0008f497) cale_week_day_heading_pane_t6

0x2fb8,	// (0x0008f4d2) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0009b6f2) cale_week_day_heading_pane_t

0xb52a,	// (0x00097a44) bg_cale_side_pane

0x2ff3,	// (0x0008f50d) cale_week_time_pane_t1

0x300d,	// (0x0008f527) cale_week_time_pane_t2

0x3027,	// (0x0008f541) cale_week_time_pane_t3

0x3041,	// (0x0008f55b) cale_week_time_pane_t4

0x305b,	// (0x0008f575) cale_week_time_pane_t5

0x3075,	// (0x0008f58f) cale_week_time_pane_t6

0x3095,	// (0x0008f5af) cale_week_time_pane_t7

0x30b7,	// (0x0008f5d1) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0009b701) cale_week_time_pane_t

0x30db,	// (0x0008f5f5) cell_cale_week_pane_g2

0x30ee,	// (0x0008f608) cell_cale_week_pane_g3_ParamLimits

0x30ee,	// (0x0008f608) cell_cale_week_pane_g3

0xb538,	// (0x00097a52) grid_highlight_pane_cp07

0xb540,	// (0x00097a5a) listscroll_gms_pane

0xb54a,	// (0x00097a64) grid_gms_pane

0xb553,	// (0x00097a6d) listscroll_gms_pane_g1

0xb55b,	// (0x00097a75) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0009b712) listscroll_gms_pane_g

0x3106,	// (0x0008f620) scroll_pane_cp010

0x3111,	// (0x0008f62b) cell_gms_pane_ParamLimits

0x3111,	// (0x0008f62b) cell_gms_pane

0x3124,	// (0x0008f63e) cell_gms_pane_g1

0xb563,	// (0x00097a7d) cell_gms_pane_g2

0xb56b,	// (0x00097a85) cell_gms_pane_g3

0xb574,	// (0x00097a8e) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0009b717) cell_gms_pane_g

0xb57d,	// (0x00097a97) grid_highlight_pane_cp09

0x58a1,	// (0x00091dbb) phob_pre_status_pane_g1

0x58a9,	// (0x00091dc3) phob_pre_status_pane_g2

0x58b1,	// (0x00091dcb) phob_pre_status_pane_g3

0x58b9,	// (0x00091dd3) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0009bb06) phob_pre_status_pane_g

0x58c9,	// (0x00091de3) phob_pre_status_pane_t1

0x58d9,	// (0x00091df3) phob_pre_status_pane_t2

0x58e9,	// (0x00091e03) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0009bb11) phob_pre_status_pane_t

0xb09f,	// (0x000975b9) bg_list_pane_cp05

0x3134,	// (0x0008f64e) grid_vorec_pane

0x3140,	// (0x0008f65a) vorec_t1

0x314e,	// (0x0008f668) vorec_t2

0x315c,	// (0x0008f676) vorec_t3

0x316a,	// (0x0008f684) vorec_t4

0x3178,	// (0x0008f692) vorec_t5

0x3186,	// (0x0008f6a0) vorec_t6

0x0006,

0xf206,	// (0x0009b720) vorec_t

0x31a2,	// (0x0008f6bc) wait_bar_pane_cp01

0x31aa,	// (0x0008f6c4) cell_vorec_pane_ParamLimits

0x31aa,	// (0x0008f6c4) cell_vorec_pane

0xb585,	// (0x00097a9f) cell_vorec_pane_g1

0xb09f,	// (0x000975b9) grid_highlight_pane_cp05

0x31cd,	// (0x0008f6e7) cams_zoom_pane

0x31d9,	// (0x0008f6f3) image_vga_pane

0x31e8,	// (0x0008f702) main_camera_pane_g1

0x31f6,	// (0x0008f710) main_camera_pane_g2

0x3202,	// (0x0008f71c) main_camera_pane_g3

0x320e,	// (0x0008f728) main_camera_pane_g4

0x321a,	// (0x0008f734) main_camera_pane_g5

0x3226,	// (0x0008f740) main_camera_pane_g6

0x3232,	// (0x0008f74c) main_camera_pane_g7

0x0007,

0xf215,	// (0x0009b72f) main_camera_pane_g

0x323e,	// (0x0008f758) main_camera_pane_t1

0x3250,	// (0x0008f76a) main_camera_pane_t2

0x0001,

0xf226,	// (0x0009b740) main_camera_pane_t

0x3271,	// (0x0008f78b) cams_zoom_pane_cp_ParamLimits

0x3271,	// (0x0008f78b) cams_zoom_pane_cp

0x3295,	// (0x0008f7af) image_cif_pane_ParamLimits

0x3295,	// (0x0008f7af) image_cif_pane

0x32b3,	// (0x0008f7cd) image_subqcif_pane

0x32bb,	// (0x0008f7d5) main_video_pane_g1_ParamLimits

0x32bb,	// (0x0008f7d5) main_video_pane_g1

0x32db,	// (0x0008f7f5) main_video_pane_g2_ParamLimits

0x32db,	// (0x0008f7f5) main_video_pane_g2

0x330b,	// (0x0008f825) main_video_pane_g3_ParamLimits

0x330b,	// (0x0008f825) main_video_pane_g3

0x3334,	// (0x0008f84e) main_video_pane_g4_ParamLimits

0x3334,	// (0x0008f84e) main_video_pane_g4

0x335d,	// (0x0008f877) main_video_pane_g5_ParamLimits

0x335d,	// (0x0008f877) main_video_pane_g5

0xb59b,	// (0x00097ab5) main_video_pane_g6_ParamLimits

0xb59b,	// (0x00097ab5) main_video_pane_g6

0x0006,

0xf22b,	// (0x0009b745) main_video_pane_g_ParamLimits

0xf22b,	// (0x0009b745) main_video_pane_g

0x337f,	// (0x0008f899) main_video_pane_t1_ParamLimits

0x337f,	// (0x0008f899) main_video_pane_t1

0xb5b5,	// (0x00097acf) cams_zoom_pane_g1

0xb5be,	// (0x00097ad8) cams_zoom_pane_g2

0xb5c7,	// (0x00097ae1) cams_zoom_pane_g3

0xb5d0,	// (0x00097aea) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0009b754) cams_zoom_pane_g

0x33c9,	// (0x0008f8e3) grid_cams_pane

0x33d7,	// (0x0008f8f1) linegrid_cams_pane

0x33e5,	// (0x0008f8ff) cell_cams_pane_ParamLimits

0x33e5,	// (0x0008f8ff) cell_cams_pane

0xb5d9,	// (0x00097af3) cams_burst_image_pane

0xb5e1,	// (0x00097afb) cell_cams_pane_g1

0xb09f,	// (0x000975b9) grid_highlight_pane_cp03

0xb414,	// (0x0009792e) mp_bg_pane_g1

0xb09f,	// (0x000975b9) bg_list_pane_cp03

0xe191,	// (0x0009a6ab) bg_mp_pane

0xe199,	// (0x0009a6b3) grid_mp_pane

0xe1a1,	// (0x0009a6bb) media_player_g1

0xe1a9,	// (0x0009a6c3) media_player_t1

0xe1b7,	// (0x0009a6d1) media_player_t2

0xe1c5,	// (0x0009a6df) media_player_t3

0xe1d3,	// (0x0009a6ed) media_player_t4

0xe1e1,	// (0x0009a6fb) media_player_t5

0xe1ef,	// (0x0009a709) media_player_t6

0xe1fd,	// (0x0009a717) media_player_t7

0x0006,

0xf5d6,	// (0x0009baf0) media_player_t

0xe20b,	// (0x0009a725) wait_bar_pane_cp02

0xf5bb,	// (0x0009bad5) main_usb_pane_t

0x5898,	// (0x00091db2) cell_mp_pane

0xb414,	// (0x0009792e) cell_mp_pane_g1

0xb09f,	// (0x000975b9) grid_highlight_pane_cp06

0xb5e9,	// (0x00097b03) grid_skin_colour_pane

0xb5f1,	// (0x00097b0b) list_highlight_pane_cp03

0x350c,	// (0x0008fa26) skin_g1

0xb5f9,	// (0x00097b13) skin_t1

0xb608,	// (0x00097b22) skin_t2

0x0001,

0xf26f,	// (0x0009b789) skin_t

0x3516,	// (0x0008fa30) cell_skin_colour_pane_ParamLimits

0x3516,	// (0x0008fa30) cell_skin_colour_pane

0xb616,	// (0x00097b30) cell_skin_colour_pane_g1

0x359a,	// (0x0008fab4) call_video_g1_ParamLimits

0x359a,	// (0x0008fab4) call_video_g1

0x35aa,	// (0x0008fac4) call_video_g2_ParamLimits

0x35aa,	// (0x0008fac4) call_video_g2

0x0001,

0xf274,	// (0x0009b78e) call_video_g_ParamLimits

0xf274,	// (0x0009b78e) call_video_g

0x3604,	// (0x0008fb1e) call_video_uplink_pane_cp1_ParamLimits

0x3604,	// (0x0008fb1e) call_video_uplink_pane_cp1

0xb628,	// (0x00097b42) call_video_uplink_pane_cp2

0x36d0,	// (0x0008fbea) video_down_crop_pane_ParamLimits

0x36d0,	// (0x0008fbea) video_down_crop_pane

0x37ce,	// (0x0008fce8) video_down_pane_ParamLimits

0x37ce,	// (0x0008fce8) video_down_pane

0xb630,	// (0x00097b4a) video_down_subqcif_pane_ParamLimits

0xb630,	// (0x00097b4a) video_down_subqcif_pane

0xb648,	// (0x00097b62) video_down_subqcif_pane_cp_ParamLimits

0xb648,	// (0x00097b62) video_down_subqcif_pane_cp

0xb66e,	// (0x00097b88) im_reading_pane_ParamLimits

0xb66e,	// (0x00097b88) im_reading_pane

0x38f0,	// (0x0008fe0a) im_writing_pane_ParamLimits

0x38f0,	// (0x0008fe0a) im_writing_pane

0x390e,	// (0x0008fe28) im_reading_pane_t1

0xb688,	// (0x00097ba2) list_im_pane

0xb699,	// (0x00097bb3) scroll_pane_cp07

0x3962,	// (0x0008fe7c) im_writing_pane_t1_ParamLimits

0x3962,	// (0x0008fe7c) im_writing_pane_t1

0xb6b2,	// (0x00097bcc) im_writing_pane_t2_ParamLimits

0xb6b2,	// (0x00097bcc) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0009b798) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0009b798) im_writing_pane_t

0xb09f,	// (0x000975b9) input_focus_pane_cp04

0xb09f,	// (0x000975b9) input_focus_pane_cp05

0x3977,	// (0x0008fe91) list_im_single_pane_ParamLimits

0x3977,	// (0x0008fe91) list_im_single_pane

0x399b,	// (0x0008feb5) list_single_im_pane_t1

0x585c,	// (0x00091d76) blid_accuracy_pane

0x5864,	// (0x00091d7e) blid_compass_pane

0x586e,	// (0x00091d88) main_location_t1

0x587c,	// (0x00091d96) main_location_t2

0x588a,	// (0x00091da4) main_location_t3

0x0002,

0xf5e5,	// (0x0009baff) main_location_t

0xb09f,	// (0x000975b9) aid_levels_location

0xb414,	// (0x0009792e) blid_accuracy_pane_g1

0xb414,	// (0x0009792e) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0009b7fa) blid_accuracy_pane_g

0xb6fa,	// (0x00097c14) wml_content_pane

0xb738,	// (0x00097c52) wml_button_pane_ParamLimits

0xb738,	// (0x00097c52) wml_button_pane

0x39aa,	// (0x0008fec4) wml_list_single_large_pane_ParamLimits

0x39aa,	// (0x0008fec4) wml_list_single_large_pane

0x39d4,	// (0x0008feee) wml_list_single_medium_pane_ParamLimits

0x39d4,	// (0x0008feee) wml_list_single_medium_pane

0x3a05,	// (0x0008ff1f) wml_list_single_small_pane_ParamLimits

0x3a05,	// (0x0008ff1f) wml_list_single_small_pane

0xb74c,	// (0x00097c66) wml_selection_box_pane_ParamLimits

0xb74c,	// (0x00097c66) wml_selection_box_pane

0xb75f,	// (0x00097c79) wml_list_single_pane_t1

0xb76e,	// (0x00097c88) wml_list_single_medium_pane_t1

0xb77d,	// (0x00097c97) wml_list_single_large_pane_t1

0xb78c,	// (0x00097ca6) input_focus_pane_cp02_ParamLimits

0xb78c,	// (0x00097ca6) input_focus_pane_cp02

0xb79f,	// (0x00097cb9) wml_selection_box_pane_g1

0xb7a8,	// (0x00097cc2) wml_selection_box_pane_t1_ParamLimits

0xb7a8,	// (0x00097cc2) wml_selection_box_pane_t1

0xb2fa,	// (0x00097814) bg_wml_button_pane_ParamLimits

0xb2fa,	// (0x00097814) bg_wml_button_pane

0xb7c0,	// (0x00097cda) wml_button_pane_g1

0xb7c8,	// (0x00097ce2) wml_button_pane_t1

0xb7c0,	// (0x00097cda) wml_button_bg_pane_g1

0xb7d8,	// (0x00097cf2) wml_button_bg_pane_g2

0xb7e0,	// (0x00097cfa) wml_button_bg_pane_g3

0xb7e8,	// (0x00097d02) wml_button_bg_pane_g4

0xb7f0,	// (0x00097d0a) wml_button_bg_pane_g5

0xb7f8,	// (0x00097d12) wml_button_bg_pane_g6

0xb800,	// (0x00097d1a) wml_button_bg_pane_g7

0xb808,	// (0x00097d22) wml_button_bg_pane_g8

0xb810,	// (0x00097d2a) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0009b79d) wml_button_bg_pane_g

0x3a3f,	// (0x0008ff59) bg_list_pane_cp02

0xb818,	// (0x00097d32) mce_header_pane_ParamLimits

0xb818,	// (0x00097d32) mce_header_pane

0xb82e,	// (0x00097d48) mce_icon_pane

0xb82e,	// (0x00097d48) mce_image_pane

0xb837,	// (0x00097d51) mce_text_pane_ParamLimits

0xb837,	// (0x00097d51) mce_text_pane

0x3a49,	// (0x0008ff63) scroll_pane_cp03

0xb730,	// (0x00097c4a) scroll_pane_cp04

0xb84a,	// (0x00097d64) scroll_pane_cp05_ParamLimits

0xb84a,	// (0x00097d64) scroll_pane_cp05

0x3a53,	// (0x0008ff6d) mce_header_field_pane_ParamLimits

0x3a53,	// (0x0008ff6d) mce_header_field_pane

0x3a73,	// (0x0008ff8d) mce_header_field_pane_2_ParamLimits

0x3a73,	// (0x0008ff8d) mce_header_field_pane_2

0x3a89,	// (0x0008ffa3) mce_header_field_pane_3

0x3a91,	// (0x0008ffab) list_single_mce_message_pane_ParamLimits

0x3a91,	// (0x0008ffab) list_single_mce_message_pane

0x3abc,	// (0x0008ffd6) list_single_mce_smart_pane_ParamLimits

0x3abc,	// (0x0008ffd6) list_single_mce_smart_pane

0xb856,	// (0x00097d70) input_focus_pane_cp03

0xb85f,	// (0x00097d79) list_header_data_pane

0x3af2,	// (0x0009000c) mce_header_field_pane_t1

0x3b00,	// (0x0009001a) list_single_mce_header_pane_ParamLimits

0x3b00,	// (0x0009001a) list_single_mce_header_pane

0xb867,	// (0x00097d81) list_single_mce_header_pane_t1

0xb876,	// (0x00097d90) list_single_mce_message_pane_g1

0xb87e,	// (0x00097d98) list_single_mce_message_pane_t1

0x3b52,	// (0x0009006c) bg_cale_heading_pane_cp01_ParamLimits

0x3b52,	// (0x0009006c) bg_cale_heading_pane_cp01

0xb88c,	// (0x00097da6) bg_cale_pane_cp02_ParamLimits

0xb88c,	// (0x00097da6) bg_cale_pane_cp02

0x3b95,	// (0x000900af) cale_month_corner_pane

0x3baf,	// (0x000900c9) cale_month_day_heading_pane_ParamLimits

0x3baf,	// (0x000900c9) cale_month_day_heading_pane

0x3c0a,	// (0x00090124) cale_month_pane_g1_ParamLimits

0x3c0a,	// (0x00090124) cale_month_pane_g1

0x3c42,	// (0x0009015c) cale_month_pane_g2_ParamLimits

0x3c42,	// (0x0009015c) cale_month_pane_g2

0x3c6b,	// (0x00090185) cale_month_pane_g3_ParamLimits

0x3c6b,	// (0x00090185) cale_month_pane_g3

0x3cb7,	// (0x000901d1) cale_month_pane_g4_ParamLimits

0x3cb7,	// (0x000901d1) cale_month_pane_g4

0x3d03,	// (0x0009021d) cale_month_pane_g5_ParamLimits

0x3d03,	// (0x0009021d) cale_month_pane_g5

0x3d4f,	// (0x00090269) cale_month_pane_g6_ParamLimits

0x3d4f,	// (0x00090269) cale_month_pane_g6

0x3d9b,	// (0x000902b5) cale_month_pane_g7_ParamLimits

0x3d9b,	// (0x000902b5) cale_month_pane_g7

0x3dff,	// (0x00090319) cale_month_pane_g8_ParamLimits

0x3dff,	// (0x00090319) cale_month_pane_g8

0x3e63,	// (0x0009037d) cale_month_pane_g9_ParamLimits

0x3e63,	// (0x0009037d) cale_month_pane_g9

0x3ec1,	// (0x000903db) cale_month_pane_g10_ParamLimits

0x3ec1,	// (0x000903db) cale_month_pane_g10

0x3f1d,	// (0x00090437) cale_month_pane_g11_ParamLimits

0x3f1d,	// (0x00090437) cale_month_pane_g11

0x3f71,	// (0x0009048b) cale_month_pane_g12_ParamLimits

0x3f71,	// (0x0009048b) cale_month_pane_g12

0x3fc7,	// (0x000904e1) cale_month_pane_g13_ParamLimits

0x3fc7,	// (0x000904e1) cale_month_pane_g13

0x000c,

0xf296,	// (0x0009b7b0) cale_month_pane_g_ParamLimits

0xf296,	// (0x0009b7b0) cale_month_pane_g

0x401d,	// (0x00090537) cale_month_week_pane

0x4032,	// (0x0009054c) grid_cale_month_pane_ParamLimits

0x4032,	// (0x0009054c) grid_cale_month_pane

0x4080,	// (0x0009059a) cale_month_day_heading_pane_t1

0x4106,	// (0x00090620) cale_month_day_heading_pane_t2

0x4197,	// (0x000906b1) cale_month_day_heading_pane_t3

0x4228,	// (0x00090742) cale_month_day_heading_pane_t4

0x42b9,	// (0x000907d3) cale_month_day_heading_pane_t5

0x434a,	// (0x00090864) cale_month_day_heading_pane_t6

0x43db,	// (0x000908f5) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0009b7cb) cale_month_day_heading_pane_t

0xb52a,	// (0x00097a44) bg_cale_side_pane_cp01

0x4484,	// (0x0009099e) cale_month_week_pane_t1

0x449d,	// (0x000909b7) cale_month_week_pane_t2

0x44b6,	// (0x000909d0) cale_month_week_pane_t3

0x44cf,	// (0x000909e9) cale_month_week_pane_t4

0x44e8,	// (0x00090a02) cale_month_week_pane_t5

0x4509,	// (0x00090a23) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0009b7da) cale_month_week_pane_t

0x452a,	// (0x00090a44) cell_cale_month_pane_ParamLimits

0x452a,	// (0x00090a44) cell_cale_month_pane

0x4676,	// (0x00090b90) cell_cale_month_pane_g1

0x4682,	// (0x00090b9c) cell_cale_month_pane_t1_ParamLimits

0x4682,	// (0x00090b9c) cell_cale_month_pane_t1

0xb538,	// (0x00097a52) grid_highlight_pane_cp08

0xb414,	// (0x0009792e) main_smil_g1

0x46a2,	// (0x00090bbc) smil_status_pane

0xb8cb,	// (0x00097de5) smil_text_pane

0xe0b1,	// (0x0009a5cb) bg_popup_call3_rect_pane_g8

0xe0b9,	// (0x0009a5d3) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0009ba93) bg_popup_call3_rect_pane_g

0xe300,	// (0x0009a81a) smil_status_volume_pane_g1

0xb8d5,	// (0x00097def) smil_status_pane_t1

0x5c8e,	// (0x000921a8) volume_smil_pane

0xb8ec,	// (0x00097e06) list_smil_text_pane

0x46b5,	// (0x00090bcf) scroll_pane_cp011

0x46c0,	// (0x00090bda) smil_text_list_pane_t1_ParamLimits

0x46c0,	// (0x00090bda) smil_text_list_pane_t1

0x4738,	// (0x00090c52) aid_volume_smil_ParamLimits

0x4738,	// (0x00090c52) aid_volume_smil

0xb414,	// (0x0009792e) smil_volume_pane_g1

0xb414,	// (0x0009792e) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0009b7fa) smil_volume_pane_g

0x2bf8,	// (0x0008f112) listscroll_cale_day_pane

0xb8f6,	// (0x00097e10) bg_cale_pane

0xb90e,	// (0x00097e28) list_cale_pane

0xb931,	// (0x00097e4b) scroll_pane_cp09

0xb942,	// (0x00097e5c) cale_bg_pane_g1

0xb94a,	// (0x00097e64) cale_bg_pane_g2

0xb952,	// (0x00097e6c) cale_bg_pane_g3

0xb95a,	// (0x00097e74) cale_bg_pane_g4

0xb962,	// (0x00097e7c) cale_bg_pane_g5

0xb96a,	// (0x00097e84) cale_bg_pane_g6

0xb972,	// (0x00097e8c) cale_bg_pane_g7

0xb97a,	// (0x00097e94) cale_bg_pane_g8

0xb982,	// (0x00097e9c) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0009b7ff) cale_bg_pane_g

0x475a,	// (0x00090c74) list_cale_time_pane_ParamLimits

0x475a,	// (0x00090c74) list_cale_time_pane

0xb98a,	// (0x00097ea4) list_cale_time_pane_g1_ParamLimits

0xb98a,	// (0x00097ea4) list_cale_time_pane_g1

0xb996,	// (0x00097eb0) list_cale_time_pane_g2_ParamLimits

0xb996,	// (0x00097eb0) list_cale_time_pane_g2

0x4776,	// (0x00090c90) list_cale_time_pane_g3_ParamLimits

0x4776,	// (0x00090c90) list_cale_time_pane_g3

0x4784,	// (0x00090c9e) list_cale_time_pane_g4_ParamLimits

0x4784,	// (0x00090c9e) list_cale_time_pane_g4

0x4792,	// (0x00090cac) list_cale_time_pane_g5_ParamLimits

0x4792,	// (0x00090cac) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0009b812) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0009b812) list_cale_time_pane_g

0xb9b0,	// (0x00097eca) list_cale_time_pane_t1_ParamLimits

0xb9b0,	// (0x00097eca) list_cale_time_pane_t1

0xb9d8,	// (0x00097ef2) list_cale_time_pane_t2_ParamLimits

0xb9d8,	// (0x00097ef2) list_cale_time_pane_t2

0x4b28,	// (0x00091042) aid_blid_cardinal_pane

0x4b6a,	// (0x00091084) compass_pane_t4

0xba00,	// (0x00097f1a) list_cale_time_pane_t4_ParamLimits

0xba00,	// (0x00097f1a) list_cale_time_pane_t4

0x4b78,	// (0x00091092) compass_pane_t5

0x4b88,	// (0x000910a2) compass_pane_t6

0x4b96,	// (0x000910b0) compass_pane_t7

0xcd37,	// (0x00099251) navi_pane_cc_t1

0xce8c,	// (0x000993a6) aid_phob_thumbnail_center_pane

0x5362,	// (0x0009187c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0009b81f) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0009b81f) list_cale_time_pane_t

0x0fca,	// (0x0008d4e4) bg_popup_window_pane_cp02_ParamLimits

0x0fca,	// (0x0008d4e4) bg_popup_window_pane_cp02

0xba28,	// (0x00097f42) heading_pane_cp01_ParamLimits

0xba28,	// (0x00097f42) heading_pane_cp01

0xba34,	// (0x00097f4e) loc_req_pane_ParamLimits

0xba34,	// (0x00097f4e) loc_req_pane

0xba44,	// (0x00097f5e) loc_type_pane_ParamLimits

0xba44,	// (0x00097f5e) loc_type_pane

0xba56,	// (0x00097f70) loc_type_pane_t1_ParamLimits

0xba56,	// (0x00097f70) loc_type_pane_t1

0xba68,	// (0x00097f82) loc_type_pane_t2_ParamLimits

0xba68,	// (0x00097f82) loc_type_pane_t2

0xba7a,	// (0x00097f94) loc_type_pane_t3_ParamLimits

0xba7a,	// (0x00097f94) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0009b826) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0009b826) loc_type_pane_t

0xba8c,	// (0x00097fa6) list_loc_req_pane

0xba96,	// (0x00097fb0) scroll_pane_cp012

0x47a0,	// (0x00090cba) list_single_loc_request_popup_menu_pane_ParamLimits

0x47a0,	// (0x00090cba) list_single_loc_request_popup_menu_pane

0xbaa1,	// (0x00097fbb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbaa1,	// (0x00097fbb) list_single_loc_request_popup_menu_pane_g1

0xbaad,	// (0x00097fc7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbaad,	// (0x00097fc7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0009b82d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0009b82d) list_single_loc_request_popup_menu_pane_g

0xbab9,	// (0x00097fd3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbab9,	// (0x00097fd3) list_single_loc_request_popup_menu_pane_t1

0x47b2,	// (0x00090ccc) bg_popup_window_pane_cp03_ParamLimits

0x47b2,	// (0x00090ccc) bg_popup_window_pane_cp03

0x47c0,	// (0x00090cda) heading_loc_req_pane_ParamLimits

0x47c0,	// (0x00090cda) heading_loc_req_pane

0x47cc,	// (0x00090ce6) popup_dyc_status_message_window_g1_ParamLimits

0x47cc,	// (0x00090ce6) popup_dyc_status_message_window_g1

0x47d8,	// (0x00090cf2) popup_dyc_status_message_window_t1_ParamLimits

0x47d8,	// (0x00090cf2) popup_dyc_status_message_window_t1

0x47ea,	// (0x00090d04) popup_dyc_status_message_window_t2_ParamLimits

0x47ea,	// (0x00090d04) popup_dyc_status_message_window_t2

0x47fc,	// (0x00090d16) popup_dyc_status_message_window_t3_ParamLimits

0x47fc,	// (0x00090d16) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0009b832) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0009b832) popup_dyc_status_message_window_t

0xb09f,	// (0x000975b9) bg_heading_pane_cp01

0xbacf,	// (0x00097fe9) heading_loc_req_pane_g1

0xbad7,	// (0x00097ff1) heading_loc_req_pane_g2

0xbadf,	// (0x00097ff9) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0009b839) heading_loc_req_pane_g

0xbae7,	// (0x00098001) heading_loc_req_pane_t1

0xbaf6,	// (0x00098010) bg_popup_sub_pane_cp01_ParamLimits

0xbaf6,	// (0x00098010) bg_popup_sub_pane_cp01

0xbb04,	// (0x0009801e) popup_cale_events_window_g1_ParamLimits

0xbb04,	// (0x0009801e) popup_cale_events_window_g1

0xbb24,	// (0x0009803e) popup_cale_events_window_g2_ParamLimits

0xbb24,	// (0x0009803e) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0009b86d) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0009b86d) popup_cale_events_window_g

0xbb44,	// (0x0009805e) popup_cale_events_window_t1_ParamLimits

0xbb44,	// (0x0009805e) popup_cale_events_window_t1

0xbb56,	// (0x00098070) popup_cale_events_window_t2_ParamLimits

0xbb56,	// (0x00098070) popup_cale_events_window_t2

0xbb94,	// (0x000980ae) popup_cale_events_window_t3_ParamLimits

0xbb94,	// (0x000980ae) popup_cale_events_window_t3

0xbbce,	// (0x000980e8) popup_cale_events_window_t4_ParamLimits

0xbbce,	// (0x000980e8) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0009b872) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0009b872) popup_cale_events_window_t

0x48f5,	// (0x00090e0f) call_type_pane

0xcb35,	// (0x0009904f) popup_call_status_window_g1

0x4901,	// (0x00090e1b) popup_call_status_window_g2

0x490d,	// (0x00090e27) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0009b87b) popup_call_status_window_g

0xbc04,	// (0x0009811e) call_type_pane_g1

0xbc0d,	// (0x00098127) call_type_pane_g2

0x0001,

0xf368,	// (0x0009b882) call_type_pane_g

0xb09f,	// (0x000975b9) bg_popup_sub_pane_cp02

0xbc16,	// (0x00098130) listscroll_popup_wml_pane

0xbc1e,	// (0x00098138) list_wml_pane

0xbc28,	// (0x00098142) scroll_pane_cp013

0xbc33,	// (0x0009814d) list_single_graphic_popup_wml_pane_ParamLimits

0xbc33,	// (0x0009814d) list_single_graphic_popup_wml_pane

0xb414,	// (0x0009792e) list_single_graphic_popup_wml_pane_g1

0xcb43,	// (0x0009905d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0009b887) list_single_graphic_popup_wml_pane_g

0xcb4b,	// (0x00099065) list_single_graphic_popup_wml_pane_t1

0xcb61,	// (0x0009907b) aid_call_pane

0xb2f2,	// (0x0009780c) popup_clock_analogue_window_g1

0xb2f2,	// (0x0009780c) popup_clock_analogue_window_g2

0x4919,	// (0x00090e33) popup_clock_analogue_window_g3

0x4919,	// (0x00090e33) popup_clock_analogue_window_g4

0xb414,	// (0x0009792e) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0009b88c) popup_clock_analogue_window_g

0x4921,	// (0x00090e3b) popup_clock_analogue_window_t1

0x492f,	// (0x00090e49) clock_digital_number_pane_ParamLimits

0x492f,	// (0x00090e49) clock_digital_number_pane

0x493b,	// (0x00090e55) clock_digital_number_pane_cp02_ParamLimits

0x493b,	// (0x00090e55) clock_digital_number_pane_cp02

0x4947,	// (0x00090e61) clock_digital_number_pane_cp03_ParamLimits

0x4947,	// (0x00090e61) clock_digital_number_pane_cp03

0x4953,	// (0x00090e6d) clock_digital_number_pane_cp04_ParamLimits

0x4953,	// (0x00090e6d) clock_digital_number_pane_cp04

0x4963,	// (0x00090e7d) clock_digital_separator_pane_ParamLimits

0x4963,	// (0x00090e7d) clock_digital_separator_pane

0x496f,	// (0x00090e89) popup_clock_digital_window_t1

0xb414,	// (0x0009792e) clock_digital_number_pane_g1

0xb414,	// (0x0009792e) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0009b7fa) clock_digital_number_pane_g

0xb414,	// (0x0009792e) clock_digital_separator_pane_g1

0xb414,	// (0x0009792e) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0009b7fa) clock_digital_separator_pane_g

0xb09f,	// (0x000975b9) bg_popup_window_pane_cp04

0xcb69,	// (0x00099083) heading_pane_cp03

0xcb71,	// (0x0009908b) listscroll_popup_gms_pane

0xcb79,	// (0x00099093) grid_large_graphic_popup_pane

0xcb83,	// (0x0009909d) listscroll_popup_gms_pane_g1

0xcb8b,	// (0x000990a5) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0009b897) listscroll_popup_gms_pane_g

0xb730,	// (0x00097c4a) scroll_pane_cp014

0x498c,	// (0x00090ea6) cell_large_graphic_popup_pane_ParamLimits

0x498c,	// (0x00090ea6) cell_large_graphic_popup_pane

0x49a4,	// (0x00090ebe) cell_large_graphic_popup_pane_g1_ParamLimits

0x49a4,	// (0x00090ebe) cell_large_graphic_popup_pane_g1

0xcb93,	// (0x000990ad) cell_large_graphic_popup_pane_g2_ParamLimits

0xcb93,	// (0x000990ad) cell_large_graphic_popup_pane_g2

0xcb9f,	// (0x000990b9) cell_large_graphic_popup_pane_g3_ParamLimits

0xcb9f,	// (0x000990b9) cell_large_graphic_popup_pane_g3

0xcbac,	// (0x000990c6) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbac,	// (0x000990c6) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0009b89c) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0009b89c) cell_large_graphic_popup_pane_g

0xcbbc,	// (0x000990d6) grid_highlight_pane_cp010

0xb414,	// (0x0009792e) bg_popup_call_pane_g1

0xcbc6,	// (0x000990e0) list_single_graphic_popup_conf_pane_ParamLimits

0xcbc6,	// (0x000990e0) list_single_graphic_popup_conf_pane

0xcbd9,	// (0x000990f3) list_highlight_pane_cp01

0xcbe2,	// (0x000990fc) list_single_graphic_popup_conf_pane_g1

0xcbea,	// (0x00099104) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0009b8a5) list_single_graphic_popup_conf_pane_g

0xcbf2,	// (0x0009910c) list_single_graphic_popup_conf_pane_t1

0xcc00,	// (0x0009911a) linegrid_cams_pane_g1

0x49b0,	// (0x00090eca) linegrid_cams_pane_g2

0xb56b,	// (0x00097a85) linegrid_cams_pane_g3

0xcc09,	// (0x00099123) linegrid_cams_pane_g4

0x49b9,	// (0x00090ed3) linegrid_cams_pane_g5

0x49c2,	// (0x00090edc) linegrid_cams_pane_g6

0xb574,	// (0x00097a8e) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0009b8aa) linegrid_cams_pane_g

0xcc12,	// (0x0009912c) popup_clock_analogue_window

0xcc12,	// (0x0009912c) popup_clock_digital_window

0xb09f,	// (0x000975b9) popup_phob_thumbnail_window

0xb414,	// (0x0009792e) call_video_uplink_pane_g1

0xcc1b,	// (0x00099135) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0009b8b9) call_video_uplink_pane_g

0xcc23,	// (0x0009913d) video_uplink_pane

0xcc2b,	// (0x00099145) mce_image_pane_g1

0x49cb,	// (0x00090ee5) mce_image_pane_g2

0x49d5,	// (0x00090eef) mce_image_pane_g3

0x49dd,	// (0x00090ef7) mce_image_pane_g4

0x49e5,	// (0x00090eff) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0009b8be) mce_image_pane_g

0xcc35,	// (0x0009914f) control_top_pane_stacon_cp01_ParamLimits

0xcc35,	// (0x0009914f) control_top_pane_stacon_cp01

0xcc49,	// (0x00099163) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc49,	// (0x00099163) uni_indicator_pane_stacon_cp01

0xcc5a,	// (0x00099174) bg_popup_sub_pane_cp03

0xcc64,	// (0x0009917e) chi_dic_find_pane

0x49ed,	// (0x00090f07) listscroll_chi_dic_pane

0xcc6c,	// (0x00099186) main_pane_chidic_g1

0xcc74,	// (0x0009918e) chi_dic_find_pane_t1

0xcc82,	// (0x0009919c) find_chidic_pane

0xcc8b,	// (0x000991a5) chi_dic_list_pane_ParamLimits

0xcc8b,	// (0x000991a5) chi_dic_list_pane

0xcc9c,	// (0x000991b6) scroll_pane_cp020

0xcca4,	// (0x000991be) find_chidic_pane_t1

0xb09f,	// (0x000975b9) input_focus_pane_cp06

0x4a01,	// (0x00090f1b) list_chi_dic_pane_ParamLimits

0x4a01,	// (0x00090f1b) list_chi_dic_pane

0x4a1b,	// (0x00090f35) list_chi_dic_pane_t1_ParamLimits

0x4a1b,	// (0x00090f35) list_chi_dic_pane_t1

0xb09f,	// (0x000975b9) list_highlight_pane_cp020

0xccb3,	// (0x000991cd) bg_cale_heading_pane_g1

0x4a2e,	// (0x00090f48) bg_cale_heading_pane_g2

0x4a36,	// (0x00090f50) bg_cale_heading_pane_g3

0x4a3e,	// (0x00090f58) bg_cale_heading_pane_g4

0x4a48,	// (0x00090f62) bg_cale_heading_pane_g5

0x4a52,	// (0x00090f6c) bg_cale_heading_pane_g6

0x4a5a,	// (0x00090f74) bg_cale_heading_pane_g7

0x4a62,	// (0x00090f7c) bg_cale_heading_pane_g8

0x4a6c,	// (0x00090f86) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0009b8c9) bg_cale_heading_pane_g

0xccb3,	// (0x000991cd) bg_cale_side_pane_g1

0x4a76,	// (0x00090f90) bg_cale_side_pane_g2

0x4a80,	// (0x00090f9a) bg_cale_side_pane_g3

0x4a8a,	// (0x00090fa4) bg_cale_side_pane_g4

0x4a94,	// (0x00090fae) bg_cale_side_pane_g5

0x4a9e,	// (0x00090fb8) bg_cale_side_pane_g6

0x4aa8,	// (0x00090fc2) bg_cale_side_pane_g7

0x4ab2,	// (0x00090fcc) bg_cale_side_pane_g8

0x4aba,	// (0x00090fd4) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0009b8dc) bg_cale_side_pane_g

0x4ac2,	// (0x00090fdc) popup_call_status_window_ParamLimits

0x4ac2,	// (0x00090fdc) popup_call_status_window

0xccbb,	// (0x000991d5) stacon_top_pane

0xccc3,	// (0x000991dd) status_pane_ParamLimits

0xccc3,	// (0x000991dd) status_pane

0xccd8,	// (0x000991f2) status_small_pane

0xcce0,	// (0x000991fa) control_pane

0xb09f,	// (0x000975b9) stacon_bottom_pane

0xcce8,	// (0x00099202) list_single_mce_smart_pane_t1_ParamLimits

0xcce8,	// (0x00099202) list_single_mce_smart_pane_t1

0xccfb,	// (0x00099215) list_single_mce_smart_pane_t2_ParamLimits

0xccfb,	// (0x00099215) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0009b8ef) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0009b8ef) list_single_mce_smart_pane_t

0x4ace,	// (0x00090fe8) compass_pane

0x4ada,	// (0x00090ff4) main_location2_pane_t1

0x4aee,	// (0x00091008) main_location2_pane_t2

0x4b02,	// (0x0009101c) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0009b8f4) main_location2_pane_t

0xcd1a,	// (0x00099234) compass_pane_g1_ParamLimits

0xcd1a,	// (0x00099234) compass_pane_g1

0x4b4c,	// (0x00091066) compass_pane_t1

0x4b5b,	// (0x00091075) compass_pane_t2

0x0005,

0xf3e3,	// (0x0009b8fd) compass_pane_t

0x4ba6,	// (0x000910c0) text_secondary_cp61

0xcd2e,	// (0x00099248) navi_pane_cams_g5

0xcd51,	// (0x0009926b) navi_pane_im_t1

0xcd5f,	// (0x00099279) navi_pane_mp_g1_ParamLimits

0xcd5f,	// (0x00099279) navi_pane_mp_g1

0xcd73,	// (0x0009928d) navi_pane_mp_g2_ParamLimits

0xcd73,	// (0x0009928d) navi_pane_mp_g2

0xcd7f,	// (0x00099299) navi_pane_mp_g3_ParamLimits

0xcd7f,	// (0x00099299) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0009b911) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0009b911) navi_pane_mp_g

0xcd8b,	// (0x000992a5) navi_pane_mp_t1

0xcd99,	// (0x000992b3) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0009b918) navi_pane_mp_t

0xcdd5,	// (0x000992ef) navi_pane_vt_g1

0xcd8b,	// (0x000992a5) navi_pane_vt_t1

0xcddd,	// (0x000992f7) navi_slider_pane

0xcde5,	// (0x000992ff) zooming_pane

0xcded,	// (0x00099307) navi_slider_pane_g1

0x4cd9,	// (0x000911f3) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0009b91f) navi_slider_pane_g

0xce11,	// (0x0009932b) aid_levels_zoom

0xce19,	// (0x00099333) zooming_pane_g1

0xce21,	// (0x0009933b) zooming_pane_g2

0xce21,	// (0x0009933b) zooming_pane_g3

0x0002,

0xf414,	// (0x0009b92e) zooming_pane_g

0xce29,	// (0x00099343) level_10_zoom

0xce32,	// (0x0009934c) level_11_zoom

0xce3b,	// (0x00099355) level_1_zoom

0xce44,	// (0x0009935e) level_2_zoom

0xce4d,	// (0x00099367) level_3_zoom

0xce56,	// (0x00099370) level_4_zoom

0xce5f,	// (0x00099379) level_5_zoom

0xce68,	// (0x00099382) level_6_zoom

0xce71,	// (0x0009938b) level_7_zoom

0xce7a,	// (0x00099394) level_8_zoom

0xce83,	// (0x0009939d) level_9_zoom

0xce94,	// (0x000993ae) popup_phob_thumbnail_window_g1

0xce9c,	// (0x000993b6) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0009b935) popup_phob_thumbnail_window_g

0xe213,	// (0x0009a72d) level_1_location

0xe21b,	// (0x0009a735) level_2_location

0xe223,	// (0x0009a73d) level_3_location

0xe22b,	// (0x0009a745) level_4_location

0xcde5,	// (0x000992ff) level_5_location

0x4ceb,	// (0x00091205) mce_icon_pane_g1

0x4cf3,	// (0x0009120d) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0009b93a) mce_icon_pane_g

0x4cfb,	// (0x00091215) main_mup_pane_g1_ParamLimits

0x4cfb,	// (0x00091215) main_mup_pane_g1

0x4d13,	// (0x0009122d) main_mup_pane_g2_ParamLimits

0x4d13,	// (0x0009122d) main_mup_pane_g2

0x4d2f,	// (0x00091249) main_mup_pane_g3_ParamLimits

0x4d2f,	// (0x00091249) main_mup_pane_g3

0x4d4b,	// (0x00091265) main_mup_pane_g4_ParamLimits

0x4d4b,	// (0x00091265) main_mup_pane_g4

0x4d67,	// (0x00091281) main_mup_pane_g5_ParamLimits

0x4d67,	// (0x00091281) main_mup_pane_g5

0x4d88,	// (0x000912a2) main_mup_pane_g6_ParamLimits

0x4d88,	// (0x000912a2) main_mup_pane_g6

0x4da4,	// (0x000912be) main_mup_pane_g7_ParamLimits

0x4da4,	// (0x000912be) main_mup_pane_g7

0x4dc0,	// (0x000912da) main_mup_pane_g8_ParamLimits

0x4dc0,	// (0x000912da) main_mup_pane_g8

0x4de0,	// (0x000912fa) main_mup_pane_g9_ParamLimits

0x4de0,	// (0x000912fa) main_mup_pane_g9

0x4dff,	// (0x00091319) main_mup_pane_g10_ParamLimits

0x4dff,	// (0x00091319) main_mup_pane_g10

0x4e1e,	// (0x00091338) main_mup_pane_g11_ParamLimits

0x4e1e,	// (0x00091338) main_mup_pane_g11

0x4e36,	// (0x00091350) main_mup_pane_g12_ParamLimits

0x4e36,	// (0x00091350) main_mup_pane_g12

0x4e44,	// (0x0009135e) main_mup_pane_g13_ParamLimits

0x4e44,	// (0x0009135e) main_mup_pane_g13

0x000c,

0xf425,	// (0x0009b93f) main_mup_pane_g_ParamLimits

0xf425,	// (0x0009b93f) main_mup_pane_g

0x4e5a,	// (0x00091374) main_mup_pane_t1_ParamLimits

0x4e5a,	// (0x00091374) main_mup_pane_t1

0x4e77,	// (0x00091391) main_mup_pane_t2_ParamLimits

0x4e77,	// (0x00091391) main_mup_pane_t2

0x4e91,	// (0x000913ab) main_mup_pane_t3_ParamLimits

0x4e91,	// (0x000913ab) main_mup_pane_t3

0x4eab,	// (0x000913c5) main_mup_pane_t4_ParamLimits

0x4eab,	// (0x000913c5) main_mup_pane_t4

0x4ebd,	// (0x000913d7) main_mup_pane_t5_ParamLimits

0x4ebd,	// (0x000913d7) main_mup_pane_t5

0x4ecf,	// (0x000913e9) main_mup_pane_t6_ParamLimits

0x4ecf,	// (0x000913e9) main_mup_pane_t6

0x0005,

0xf440,	// (0x0009b95a) main_mup_pane_t_ParamLimits

0xf440,	// (0x0009b95a) main_mup_pane_t

0x4ee5,	// (0x000913ff) mup_progress_pane_ParamLimits

0x4ee5,	// (0x000913ff) mup_progress_pane

0x4ef1,	// (0x0009140b) mup_visualizer_pane_ParamLimits

0x4ef1,	// (0x0009140b) mup_visualizer_pane

0x4f2b,	// (0x00091445) mup_volume_pane_ParamLimits

0x4f2b,	// (0x00091445) mup_volume_pane

0xcb35,	// (0x0009904f) mup_visualizer_pane_g1_ParamLimits

0xcb35,	// (0x0009904f) mup_visualizer_pane_g1

0xcb35,	// (0x0009904f) mup_visualizer_pane_g2_ParamLimits

0xcb35,	// (0x0009904f) mup_visualizer_pane_g2

0xcd1a,	// (0x00099234) mup_visualizer_pane_g3_ParamLimits

0xcd1a,	// (0x00099234) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0009b967) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0009b967) mup_visualizer_pane_g

0xb414,	// (0x0009792e) mup_volume_pane_g1

0xceac,	// (0x000993c6) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0009b96e) mup_volume_pane_g

0xb414,	// (0x0009792e) mup_progress_pane_g1

0xceb5,	// (0x000993cf) mup_progress_pane_g2

0xcebe,	// (0x000993d8) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0009b973) mup_progress_pane_g

0xb09f,	// (0x000975b9) bg_popup_window_pane_cp05

0xcec7,	// (0x000993e1) heading_pane_cp02_ParamLimits

0xcec7,	// (0x000993e1) heading_pane_cp02

0xcee1,	// (0x000993fb) list_popup_blid_pane

0xcee9,	// (0x00099403) list_blid_sat_info_pane_ParamLimits

0xcee9,	// (0x00099403) list_blid_sat_info_pane

0xcefc,	// (0x00099416) list_blid_sat_info_pane_g1

0xcf04,	// (0x0009941e) list_blid_sat_info_pane_t1

0x5038,	// (0x00091552) mup_equalizer_pane_ParamLimits

0x5038,	// (0x00091552) mup_equalizer_pane

0x5059,	// (0x00091573) mup_equalizer_pane_cp1_ParamLimits

0x5059,	// (0x00091573) mup_equalizer_pane_cp1

0x507a,	// (0x00091594) mup_equalizer_pane_cp2_ParamLimits

0x507a,	// (0x00091594) mup_equalizer_pane_cp2

0x509b,	// (0x000915b5) mup_equalizer_pane_cp3_ParamLimits

0x509b,	// (0x000915b5) mup_equalizer_pane_cp3

0x50bc,	// (0x000915d6) mup_equalizer_pane_cp4_ParamLimits

0x50bc,	// (0x000915d6) mup_equalizer_pane_cp4

0x50dd,	// (0x000915f7) mup_equalizer_pane_cp5

0x50f3,	// (0x0009160d) mup_equalizer_pane_cp6

0x510b,	// (0x00091625) mup_equalizer_pane_cp7

0xe131,	// (0x0009a64b) bg_popup_call_poc_act_pane_g9

0xe139,	// (0x0009a653) bg_popup_call_poc_act_pane_g10

0xe141,	// (0x0009a65b) bg_popup_call_poc_act_pane_g11

0x000a,

0xb2fa,	// (0x00097814) mup_scale_pane

0xb414,	// (0x0009792e) mup_scale_pane_g1

0xcf12,	// (0x0009942c) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0009b98f) mup_scale_pane_g

0xcf36,	// (0x00099450) msg_data_pane

0xcfe2,	// (0x000994fc) scroll_pane_cp017

0x5135,	// (0x0009164f) bg_list_pane_cp04_ParamLimits

0x5135,	// (0x0009164f) bg_list_pane_cp04

0xcfea,	// (0x00099504) msg_data_pane_g1

0x515b,	// (0x00091675) msg_data_pane_g2

0x5165,	// (0x0009167f) msg_data_pane_g3

0x516d,	// (0x00091687) msg_data_pane_g4

0x5175,	// (0x0009168f) msg_data_pane_g5

0x517d,	// (0x00091697) msg_data_pane_g6

0x5185,	// (0x0009169f) msg_data_pane_g7

0x0006,

0xf484,	// (0x0009b99e) msg_data_pane_g

0x518d,	// (0x000916a7) msg_text_pane_ParamLimits

0x518d,	// (0x000916a7) msg_text_pane

0x51c4,	// (0x000916de) qrid_highlight_pane_cp011_ParamLimits

0x51c4,	// (0x000916de) qrid_highlight_pane_cp011

0xb09f,	// (0x000975b9) msg_body_pane

0xb09f,	// (0x000975b9) msg_header_pane

0xcff2,	// (0x0009950c) input_focus_pane_cp07

0x51f3,	// (0x0009170d) msg_header_pane_t1_ParamLimits

0x51f3,	// (0x0009170d) msg_header_pane_t1

0x5205,	// (0x0009171f) msg_header_pane_t2_ParamLimits

0x5205,	// (0x0009171f) msg_header_pane_t2

0x0001,

0xf498,	// (0x0009b9b2) msg_header_pane_t_ParamLimits

0xf498,	// (0x0009b9b2) msg_header_pane_t

0xd007,	// (0x00099521) msg_body_pane_g1

0x5217,	// (0x00091731) msg_body_pane_t1_ParamLimits

0x5217,	// (0x00091731) msg_body_pane_t1

0x5248,	// (0x00091762) msg_body_pane_t2_ParamLimits

0x5248,	// (0x00091762) msg_body_pane_t2

0x525a,	// (0x00091774) msg_body_pane_t3_ParamLimits

0x525a,	// (0x00091774) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0009b9b7) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0009b9b7) msg_body_pane_t

0x52be,	// (0x000917d8) main_viewer_pane_g1_ParamLimits

0x52be,	// (0x000917d8) main_viewer_pane_g1

0x52ca,	// (0x000917e4) main_viewer_pane_g2_ParamLimits

0x52ca,	// (0x000917e4) main_viewer_pane_g2

0x52d6,	// (0x000917f0) main_viewer_pane_g3_ParamLimits

0x52d6,	// (0x000917f0) main_viewer_pane_g3

0x52e7,	// (0x00091801) main_viewer_pane_g4_ParamLimits

0x52e7,	// (0x00091801) main_viewer_pane_g4

0x52f8,	// (0x00091812) main_viewer_pane_g5_ParamLimits

0x52f8,	// (0x00091812) main_viewer_pane_g5

0x52f8,	// (0x00091812) main_viewer_pane_g7_ParamLimits

0x52f8,	// (0x00091812) main_viewer_pane_g7

0xbaa1,	// (0x00097fbb) main_viewer_pane_g8_ParamLimits

0xbaa1,	// (0x00097fbb) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0009b9c7) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0009b9c7) main_viewer_pane_g

0xd00f,	// (0x00099529) viewer_content_pane_ParamLimits

0xd00f,	// (0x00099529) viewer_content_pane

0x5336,	// (0x00091850) main_postcard_pane_g1_ParamLimits

0x5336,	// (0x00091850) main_postcard_pane_g1

0x5344,	// (0x0009185e) main_postcard_pane_g2_ParamLimits

0x5344,	// (0x0009185e) main_postcard_pane_g2

0x5352,	// (0x0009186c) main_postcard_pane_g3_ParamLimits

0x5352,	// (0x0009186c) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0009b9d8) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0009b9d8) main_postcard_pane_g

0x5362,	// (0x0009187c) main_postcard_pane_g4

0xe313,	// (0x0009a82d) smil_status_volume_pane_g2

0x538e,	// (0x000918a8) postcard_pane_ParamLimits

0x538e,	// (0x000918a8) postcard_pane

0xcb35,	// (0x0009904f) postcard_pane_g1_ParamLimits

0xcb35,	// (0x0009904f) postcard_pane_g1

0x53c0,	// (0x000918da) postcard_pane_g2_ParamLimits

0x53c0,	// (0x000918da) postcard_pane_g2

0x53cc,	// (0x000918e6) postcard_pane_g3_ParamLimits

0x53cc,	// (0x000918e6) postcard_pane_g3

0xd01d,	// (0x00099537) postcard_pane_g4_ParamLimits

0xd01d,	// (0x00099537) postcard_pane_g4

0x53d8,	// (0x000918f2) postcard_pane_g5_ParamLimits

0x53d8,	// (0x000918f2) postcard_pane_g5

0x53e4,	// (0x000918fe) postcard_pane_g6_ParamLimits

0x53e4,	// (0x000918fe) postcard_pane_g6

0xd02b,	// (0x00099545) postcard_pane_g7_ParamLimits

0xd02b,	// (0x00099545) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0009b9e5) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0009b9e5) postcard_pane_g

0x53f0,	// (0x0009190a) main_mp2_pane_g1_ParamLimits

0x53f0,	// (0x0009190a) main_mp2_pane_g1

0x53fc,	// (0x00091916) main_mp2_pane_g2_ParamLimits

0x53fc,	// (0x00091916) main_mp2_pane_g2

0x5408,	// (0x00091922) main_mp2_pane_g3_ParamLimits

0x5408,	// (0x00091922) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0009b9f4) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0009b9f4) main_mp2_pane_g

0x5414,	// (0x0009192e) main_mp2_pane_t1_ParamLimits

0x5414,	// (0x0009192e) main_mp2_pane_t1

0x542b,	// (0x00091945) main_mp2_pane_t2_ParamLimits

0x542b,	// (0x00091945) main_mp2_pane_t2

0x543f,	// (0x00091959) main_mp2_pane_t3_ParamLimits

0x543f,	// (0x00091959) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0009b9fb) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0009b9fb) main_mp2_pane_t

0xd039,	// (0x00099553) pec_content_pane_ParamLimits

0xd039,	// (0x00099553) pec_content_pane

0xb730,	// (0x00097c4a) scroll_pane_cp015

0xd04b,	// (0x00099565) pec_attribute_pane_ParamLimits

0xd04b,	// (0x00099565) pec_attribute_pane

0x5451,	// (0x0009196b) pec_content_pane_g1_ParamLimits

0x5451,	// (0x0009196b) pec_content_pane_g1

0xd05b,	// (0x00099575) pec_content_pane_t1_ParamLimits

0xd05b,	// (0x00099575) pec_content_pane_t1

0xd06d,	// (0x00099587) pec_content_pane_t2_ParamLimits

0xd06d,	// (0x00099587) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0009ba02) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0009ba02) pec_content_pane_t

0x545d,	// (0x00091977) list_single_graphic_pane_cp01_ParamLimits

0x545d,	// (0x00091977) list_single_graphic_pane_cp01

0xb2fa,	// (0x00097814) bg_popup_sub_pane_cp04

0xd07f,	// (0x00099599) popup_mup_playback_window_g1

0xd08b,	// (0x000995a5) popup_mup_playback_window_t1

0xd0a0,	// (0x000995ba) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0009ba07) popup_mup_playback_window_t

0xd0d7,	// (0x000995f1) main_image_pane_g1_ParamLimits

0xd0d7,	// (0x000995f1) main_image_pane_g1

0xd11a,	// (0x00099634) scroll_pane_cp018_ParamLimits

0xd11a,	// (0x00099634) scroll_pane_cp018

0xd132,	// (0x0009964c) scroll_pane_cp016_ParamLimits

0xd132,	// (0x0009964c) scroll_pane_cp016

0x54f6,	// (0x00091a10) smil2_image_pane_ParamLimits

0x54f6,	// (0x00091a10) smil2_image_pane

0x5526,	// (0x00091a40) smil2_root_pane_ParamLimits

0x5526,	// (0x00091a40) smil2_root_pane

0x5552,	// (0x00091a6c) smil2_text_pane_ParamLimits

0x5552,	// (0x00091a6c) smil2_text_pane

0xb09f,	// (0x000975b9) bg_list_pane_cp06

0xd16e,	// (0x00099688) grid_radio_pane

0xb09f,	// (0x000975b9) bg_popup_window_pane_cp06

0xd176,	// (0x00099690) main_fmradio_pane_t1

0xcb69,	// (0x00099083) heading_pane_cp04

0xd184,	// (0x0009969e) main_fmradio_pane_t2

0xe149,	// (0x0009a663) popup_cale_lunar_info_window_g1

0xd192,	// (0x000996ac) main_fmradio_pane_t3

0xe151,	// (0x0009a66b) popup_cale_lunar_info_window_g2

0xd1a0,	// (0x000996ba) main_fmradio_pane_t4

0x0001,

0xd1ae,	// (0x000996c8) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0009bae2) popup_cale_lunar_info_window_g

0xf502,	// (0x0009ba1c) main_fmradio_pane_t

0xd1bc,	// (0x000996d6) wait_bar_pane_cp03

0xd1c4,	// (0x000996de) cell_fmradio_pane_ParamLimits

0xd1c4,	// (0x000996de) cell_fmradio_pane

0xd02b,	// (0x00099545) cell_fmradio_pane_g1_ParamLimits

0xd02b,	// (0x00099545) cell_fmradio_pane_g1

0xb09f,	// (0x000975b9) grid_highlight_pane_cp011

0xd1d7,	// (0x000996f1) poc_content_pane_ParamLimits

0xd1d7,	// (0x000996f1) poc_content_pane

0xd1e9,	// (0x00099703) scroll_pane_cp019

0x5592,	// (0x00091aac) popup_call_poc_act_window_ParamLimits

0x5592,	// (0x00091aac) popup_call_poc_act_window

0x559f,	// (0x00091ab9) popup_call_poc_inact_window_ParamLimits

0x559f,	// (0x00091ab9) popup_call_poc_inact_window

0xf59f,	// (0x0009bab9) bg_popup_call_poc_act_pane_g

0xe0c1,	// (0x0009a5db) bg_popup_call_poc_inact_pane_g1

0xe0c9,	// (0x0009a5e3) bg_popup_call_poc_inact_pane_g2

0xd1f1,	// (0x0009970b) popup_call_poc_act_window_g2

0xe0d1,	// (0x0009a5eb) bg_popup_call_poc_inact_pane_g3

0xe0d9,	// (0x0009a5f3) bg_popup_call_poc_inact_pane_g4

0xe0e1,	// (0x0009a5fb) bg_popup_call_poc_inact_pane_g5

0xd1f9,	// (0x00099713) popup_call_poc_act_window_t1_ParamLimits

0xd1f9,	// (0x00099713) popup_call_poc_act_window_t1

0xd221,	// (0x0009973b) popup_call_poc_act_window_t2_ParamLimits

0xd221,	// (0x0009973b) popup_call_poc_act_window_t2

0xd249,	// (0x00099763) popup_call_poc_act_window_t3_ParamLimits

0xd249,	// (0x00099763) popup_call_poc_act_window_t3

0xd271,	// (0x0009978b) popup_call_poc_act_window_t4_ParamLimits

0xd271,	// (0x0009978b) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0009ba27) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0009ba27) popup_call_poc_act_window_t

0xe0e9,	// (0x0009a603) bg_popup_call_poc_inact_pane_g6

0xe0f1,	// (0x0009a60b) bg_popup_call_poc_inact_pane_g7

0xe0f9,	// (0x0009a613) bg_popup_call_poc_inact_pane_g8

0xd283,	// (0x0009979d) popup_call_poc_inact_window_g2

0xe101,	// (0x0009a61b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0009baa6) bg_popup_call_poc_inact_pane_g

0xd28b,	// (0x000997a5) popup_call_poc_inact_window_t1_ParamLimits

0xd28b,	// (0x000997a5) popup_call_poc_inact_window_t1

0xd2a0,	// (0x000997ba) popup_call_poc_inact_window_t2_ParamLimits

0xd2a0,	// (0x000997ba) popup_call_poc_inact_window_t2

0xd2b5,	// (0x000997cf) popup_call_poc_inact_window_t3_ParamLimits

0xd2b5,	// (0x000997cf) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0009ba30) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0009ba30) popup_call_poc_inact_window_t

0xe286,	// (0x0009a7a0) context_pane_ParamLimits

0x5bdb,	// (0x000920f5) signal_pane_ParamLimits

0xcde5,	// (0x000992ff) main_call2_pane

0x5b54,	// (0x0009206e) popup_phob_thumbnail2_window_ParamLimits

0x5b54,	// (0x0009206e) popup_phob_thumbnail2_window

0x526c,	// (0x00091786) aid_hotspot_pointer_arrow_pane

0x5274,	// (0x0009178e) aid_hotspot_pointer_hand_pane

0x58c1,	// (0x00091ddb) phob_pre_status_pane_g5

0x31cd,	// (0x0008f6e7) cams_zoom_pane_ParamLimits

0x31d9,	// (0x0008f6f3) image_vga_pane_ParamLimits

0x31e8,	// (0x0008f702) main_camera_pane_g1_ParamLimits

0x31f6,	// (0x0008f710) main_camera_pane_g2_ParamLimits

0x3202,	// (0x0008f71c) main_camera_pane_g3_ParamLimits

0x320e,	// (0x0008f728) main_camera_pane_g4_ParamLimits

0x321a,	// (0x0008f734) main_camera_pane_g5_ParamLimits

0x3226,	// (0x0008f740) main_camera_pane_g6_ParamLimits

0x3232,	// (0x0008f74c) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0009b72f) main_camera_pane_g_ParamLimits

0x323e,	// (0x0008f758) main_camera_pane_t1_ParamLimits

0x3250,	// (0x0008f76a) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0009b740) main_camera_pane_t_ParamLimits

0xb2fa,	// (0x00097814) bg_popup_preview_window_pane_cp01_ParamLimits

0xb2fa,	// (0x00097814) bg_popup_preview_window_pane_cp01

0xd2ca,	// (0x000997e4) popup_phob_thumbnail2_window_g1_ParamLimits

0xd2ca,	// (0x000997e4) popup_phob_thumbnail2_window_g1

0xb09f,	// (0x000975b9) call2_cli_visual_pane

0x55bb,	// (0x00091ad5) popup_call2_audio_conf_window_ParamLimits

0x55bb,	// (0x00091ad5) popup_call2_audio_conf_window

0x55d0,	// (0x00091aea) popup_call2_audio_first_window_ParamLimits

0x55d0,	// (0x00091aea) popup_call2_audio_first_window

0x566e,	// (0x00091b88) popup_call2_audio_in_window_ParamLimits

0x566e,	// (0x00091b88) popup_call2_audio_in_window

0x56b0,	// (0x00091bca) popup_call2_audio_out_window_ParamLimits

0x56b0,	// (0x00091bca) popup_call2_audio_out_window

0x5712,	// (0x00091c2c) popup_call2_audio_second_window_ParamLimits

0x5712,	// (0x00091c2c) popup_call2_audio_second_window

0x5770,	// (0x00091c8a) popup_call2_audio_wait_window_ParamLimits

0x5770,	// (0x00091c8a) popup_call2_audio_wait_window

0xb09f,	// (0x000975b9) bg_popup_call2_act_pane_cp03

0xb2dc,	// (0x000977f6) list_conf_pane_cp

0xd2d6,	// (0x000997f0) popup_call2_audio_conf_window_t1

0xcbc6,	// (0x000990e0) list_single_graphic_popup_conf2_pane_ParamLimits

0xcbc6,	// (0x000990e0) list_single_graphic_popup_conf2_pane

0xcbd9,	// (0x000990f3) list_highlight_pane_cp04

0xd2e4,	// (0x000997fe) list_single_graphic_popup_conf2_pane_g1

0xcbea,	// (0x00099104) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0009ba37) list_single_graphic_popup_conf2_pane_g

0xd2ee,	// (0x00099808) list_single_graphic_popup_conf2_pane_t1

0xd2fc,	// (0x00099816) bg_popup_call2_act_pane_cp01_ParamLimits

0xd2fc,	// (0x00099816) bg_popup_call2_act_pane_cp01

0xd386,	// (0x000998a0) call_type_pane_cp05_ParamLimits

0xd386,	// (0x000998a0) call_type_pane_cp05

0xd3da,	// (0x000998f4) popup_call2_audio_second_window_g1_ParamLimits

0xd3da,	// (0x000998f4) popup_call2_audio_second_window_g1

0xd42e,	// (0x00099948) popup_call2_audio_second_window_g2_ParamLimits

0xd42e,	// (0x00099948) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0009ba3c) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0009ba3c) popup_call2_audio_second_window_g

0xd493,	// (0x000999ad) popup_call2_audio_second_window_t1_ParamLimits

0xd493,	// (0x000999ad) popup_call2_audio_second_window_t1

0xd54e,	// (0x00099a68) popup_call2_audio_second_window_t2_ParamLimits

0xd54e,	// (0x00099a68) popup_call2_audio_second_window_t2

0xd5a1,	// (0x00099abb) popup_call2_audio_second_window_t3_ParamLimits

0xd5a1,	// (0x00099abb) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0009ba43) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0009ba43) popup_call2_audio_second_window_t

0xb09f,	// (0x000975b9) bg_popup_call2_in_pane_cp02

0xb0a9,	// (0x000975c3) call_type_pane_cp04

0xb0b1,	// (0x000975cb) popup_call2_audio_wait_window_g1

0xb0b9,	// (0x000975d3) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0009b61c) popup_call2_audio_wait_window_g

0xb0c1,	// (0x000975db) popup_call2_audio_wait_window_t3

0xd694,	// (0x00099bae) bg_popup_call2_act_pane_ParamLimits

0xd694,	// (0x00099bae) bg_popup_call2_act_pane

0xd754,	// (0x00099c6e) call_type_pane_cp03_ParamLimits

0xd754,	// (0x00099c6e) call_type_pane_cp03

0xd7b8,	// (0x00099cd2) popup_call2_audio_first_window_g1_ParamLimits

0xd7b8,	// (0x00099cd2) popup_call2_audio_first_window_g1

0xd828,	// (0x00099d42) popup_call2_audio_first_window_g2_ParamLimits

0xd828,	// (0x00099d42) popup_call2_audio_first_window_g2

0xcb35,	// (0x0009904f) popup_call2_audio_first_window_g3_ParamLimits

0xcb35,	// (0x0009904f) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0009ba4c) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0009ba4c) popup_call2_audio_first_window_g

0xd906,	// (0x00099e20) popup_call2_audio_first_window_t1_ParamLimits

0xd906,	// (0x00099e20) popup_call2_audio_first_window_t1

0xda09,	// (0x00099f23) popup_call2_audio_first_window_t4_ParamLimits

0xda09,	// (0x00099f23) popup_call2_audio_first_window_t4

0xdaec,	// (0x0009a006) popup_call2_audio_first_window_t5_ParamLimits

0xdaec,	// (0x0009a006) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0009ba57) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0009ba57) popup_call2_audio_first_window_t

0xb2f2,	// (0x0009780c) bg_popup_call2_act_pane_g1

0xe159,	// (0x0009a673) popup_cale_lunar_info_window_t1

0xe167,	// (0x0009a681) popup_cale_lunar_info_window_t2

0xe175,	// (0x0009a68f) popup_cale_lunar_info_window_t3

0xb09f,	// (0x000975b9) bg_popup_call2_bubble_pane

0xdbed,	// (0x0009a107) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbed,	// (0x0009a107) bg_popup_call2_in_pane_cp01

0x104f,	// (0x0008d569) call_type_pane_cp02

0xdc35,	// (0x0009a14f) popup_call2_audio_out_window_g1_ParamLimits

0xdc35,	// (0x0009a14f) popup_call2_audio_out_window_g1

0xdc61,	// (0x0009a17b) popup_call2_audio_out_window_g2_ParamLimits

0xdc61,	// (0x0009a17b) popup_call2_audio_out_window_g2

0xdc89,	// (0x0009a1a3) popup_call2_audio_out_window_g3_ParamLimits

0xdc89,	// (0x0009a1a3) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0009ba60) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0009ba60) popup_call2_audio_out_window_g

0xdcc4,	// (0x0009a1de) popup_call2_audio_out_window_t1_ParamLimits

0xdcc4,	// (0x0009a1de) popup_call2_audio_out_window_t1

0xdd23,	// (0x0009a23d) popup_call2_audio_out_window_t2_ParamLimits

0xdd23,	// (0x0009a23d) popup_call2_audio_out_window_t2

0xdd77,	// (0x0009a291) popup_call2_audio_out_window_t3_ParamLimits

0xdd77,	// (0x0009a291) popup_call2_audio_out_window_t3

0xdd8d,	// (0x0009a2a7) popup_call2_audio_out_window_t4_ParamLimits

0xdd8d,	// (0x0009a2a7) popup_call2_audio_out_window_t4

0xdda3,	// (0x0009a2bd) popup_call2_audio_out_window_t5_ParamLimits

0xdda3,	// (0x0009a2bd) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0009ba69) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0009ba69) popup_call2_audio_out_window_t

0xde07,	// (0x0009a321) bg_popup_call2_in_pane_ParamLimits

0xde07,	// (0x0009a321) bg_popup_call2_in_pane

0xde63,	// (0x0009a37d) popup_call2_audio_in_window_g1_ParamLimits

0xde63,	// (0x0009a37d) popup_call2_audio_in_window_g1

0xde9b,	// (0x0009a3b5) popup_call2_audio_in_window_g2_ParamLimits

0xde9b,	// (0x0009a3b5) popup_call2_audio_in_window_g2

0xded3,	// (0x0009a3ed) popup_call2_audio_in_window_g3_ParamLimits

0xded3,	// (0x0009a3ed) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0009ba76) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0009ba76) popup_call2_audio_in_window_g

0xdf2b,	// (0x0009a445) popup_call2_audio_in_window_t1_ParamLimits

0xdf2b,	// (0x0009a445) popup_call2_audio_in_window_t1

0xdfab,	// (0x0009a4c5) popup_call2_audio_in_window_t2_ParamLimits

0xdfab,	// (0x0009a4c5) popup_call2_audio_in_window_t2

0xe02b,	// (0x0009a545) popup_call2_audio_in_window_t3_ParamLimits

0xe02b,	// (0x0009a545) popup_call2_audio_in_window_t3

0xe045,	// (0x0009a55f) popup_call2_audio_in_window_t4_ParamLimits

0xe045,	// (0x0009a55f) popup_call2_audio_in_window_t4

0xe057,	// (0x0009a571) popup_call2_audio_in_window_t5_ParamLimits

0xe057,	// (0x0009a571) popup_call2_audio_in_window_t5

0xe06c,	// (0x0009a586) popup_call2_audio_in_window_t6_ParamLimits

0xe06c,	// (0x0009a586) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0009ba7f) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0009ba7f) popup_call2_audio_in_window_t

0xb2f2,	// (0x0009780c) bg_popup_call2_in_pane_g1

0xe183,	// (0x0009a69d) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0009bae7) popup_cale_lunar_info_window_t

0xb2fa,	// (0x00097814) bg_popup_call2_rect_pane_ParamLimits

0xb2fa,	// (0x00097814) bg_popup_call2_rect_pane

0xb09f,	// (0x000975b9) call2_cli_visual_graphic_pane

0xb09f,	// (0x000975b9) call2_cli_visual_text_pane

0x5c81,	// (0x0009219b) smil_status_volume_pane_g3

0x0002,

0xb414,	// (0x0009792e) call2_cli_visual_graphic_pane_g1

0xb414,	// (0x0009792e) call2_cli_visual_graphic_pane_g2

0xb414,	// (0x0009792e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0009ba8c) call2_cli_visual_graphic_pane_g

0xe081,	// (0x0009a59b) bg_popup_call2_rect_pane_g1

0xb4a0,	// (0x000979ba) bg_popup_call2_rect_pane_g2

0xe089,	// (0x0009a5a3) bg_popup_call2_rect_pane_g3

0xe091,	// (0x0009a5ab) bg_popup_call2_rect_pane_g4

0xe099,	// (0x0009a5b3) bg_popup_call2_rect_pane_g5

0xe0a1,	// (0x0009a5bb) bg_popup_call2_rect_pane_g6

0xe0a9,	// (0x0009a5c3) bg_popup_call2_rect_pane_g7

0xe0b1,	// (0x0009a5cb) bg_popup_call2_rect_pane_g8

0xe0b9,	// (0x0009a5d3) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0009ba93) bg_popup_call2_rect_pane_g

0xe0c1,	// (0x0009a5db) bg_popup_call2_bubble_pane_g1

0xe0c9,	// (0x0009a5e3) bg_popup_call2_bubble_pane_g2

0xe0d1,	// (0x0009a5eb) bg_popup_call2_bubble_pane_g3

0xe0d9,	// (0x0009a5f3) bg_popup_call2_bubble_pane_g4

0xe0e1,	// (0x0009a5fb) bg_popup_call2_bubble_pane_g5

0xe0e9,	// (0x0009a603) bg_popup_call2_bubble_pane_g6

0xe0f1,	// (0x0009a60b) bg_popup_call2_bubble_pane_g7

0xe0f9,	// (0x0009a613) bg_popup_call2_bubble_pane_g8

0xe101,	// (0x0009a61b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0009baa6) bg_popup_call2_bubble_pane_g

0x2c08,	// (0x0008f122) aid_cale_week_size_cell_pane

0x3262,	// (0x0008f77c) aid_cams_cif_uncrop_pane_ParamLimits

0x3262,	// (0x0008f77c) aid_cams_cif_uncrop_pane

0x33bd,	// (0x0008f8d7) aid_cams_size_cell_ParamLimits

0x33bd,	// (0x0008f8d7) aid_cams_size_cell

0x33c9,	// (0x0008f8e3) grid_cams_pane_ParamLimits

0x33d7,	// (0x0008f8f1) linegrid_cams_pane_ParamLimits

0x35c2,	// (0x0008fadc) call_video_pane_t1

0x35e3,	// (0x0008fafd) call_video_pane_t2

0x0001,

0xf279,	// (0x0009b793) call_video_pane_t

0x3b2c,	// (0x00090046) aid_cale_month_size_cell_pane_ParamLimits

0x3b2c,	// (0x00090046) aid_cale_month_size_cell_pane

0xf616,	// (0x0009bb30) smil_status_volume_pane_g

0x5c8e,	// (0x000921a8) volume_smil_pane_ParamLimits

0x2351,	// (0x0008e86b) aid_popup2_width_pane

0x2afc,	// (0x0008f016) cell_qdial_pane_g4_ParamLimits

0x2afc,	// (0x0008f016) cell_qdial_pane_g4

0x4b28,	// (0x00091042) aid_blid_cardinal_pane_ParamLimits

0x4b38,	// (0x00091052) aid_blid_destination_pane_ParamLimits

0x4b38,	// (0x00091052) aid_blid_destination_pane

0xb2fa,	// (0x00097814) bg_popup_call_poc_act_pane_ParamLimits

0xb2fa,	// (0x00097814) bg_popup_call_poc_act_pane

0xb2fa,	// (0x00097814) bg_popup_call_poc_inact_pane_ParamLimits

0xb2fa,	// (0x00097814) bg_popup_call_poc_inact_pane

0xe109,	// (0x0009a623) bg_popup_call_poc_act_pane_g1

0xe111,	// (0x0009a62b) bg_popup_call_poc_act_pane_g2

0xe119,	// (0x0009a633) bg_popup_call_poc_act_pane_g3

0xe0d9,	// (0x0009a5f3) bg_popup_call_poc_act_pane_g4

0xe0e1,	// (0x0009a5fb) bg_popup_call_poc_act_pane_g5

0xe121,	// (0x0009a63b) bg_popup_call_poc_act_pane_g6

0xe0f1,	// (0x0009a60b) bg_popup_call_poc_act_pane_g7

0xe129,	// (0x0009a643) bg_popup_call_poc_act_pane_g8

0xb09f,	// (0x000975b9) main_usb_pane

0x5a83,	// (0x00091f9d) popup_cale_lunar_info_window

0x390e,	// (0x0008fe28) im_reading_pane_t1_ParamLimits

0xb688,	// (0x00097ba2) list_im_pane_ParamLimits

0xb699,	// (0x00097bb3) scroll_pane_cp07_ParamLimits

0xb09f,	// (0x000975b9) grid_highlight_pane_cp012

0xb2fa,	// (0x00097814) mup_scale_pane_ParamLimits

0xcb35,	// (0x0009904f) main_usb_pane_g1_ParamLimits

0xcb35,	// (0x0009904f) main_usb_pane_g1

0x57e4,	// (0x00091cfe) main_usb_pane_g2_ParamLimits

0x57e4,	// (0x00091cfe) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0009bad0) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0009bad0) main_usb_pane_g

0x57f0,	// (0x00091d0a) main_usb_pane_t1_ParamLimits

0x57f0,	// (0x00091d0a) main_usb_pane_t1

0x5802,	// (0x00091d1c) main_usb_pane_t2_ParamLimits

0x5802,	// (0x00091d1c) main_usb_pane_t2

0x5814,	// (0x00091d2e) main_usb_pane_t3_ParamLimits

0x5814,	// (0x00091d2e) main_usb_pane_t3

0x5826,	// (0x00091d40) main_usb_pane_t4_ParamLimits

0x5826,	// (0x00091d40) main_usb_pane_t4

0x5838,	// (0x00091d52) main_usb_pane_t5_ParamLimits

0x5838,	// (0x00091d52) main_usb_pane_t5

0x584a,	// (0x00091d64) main_usb_pane_t6_ParamLimits

0x584a,	// (0x00091d64) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0009bad5) main_usb_pane_t_ParamLimits

0x4ace,	// (0x00090fe8) aid_text_placing

0x4ada,	// (0x00090ff4) main_location2_pane_t1_ParamLimits

0x4aee,	// (0x00091008) main_location2_pane_t2_ParamLimits

0x4b02,	// (0x0009101c) main_location2_pane_t3_ParamLimits

0x4b16,	// (0x00091030) main_location2_pane_t4_ParamLimits

0x4b16,	// (0x00091030) main_location2_pane_t4

0xf3da,	// (0x0009b8f4) main_location2_pane_t_ParamLimits

0xb336,	// (0x00097850) find_pinb_pane_g2_ParamLimits

0xb336,	// (0x00097850) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0009b642) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0009b642) find_pinb_pane_g

0xb342,	// (0x0009785c) find_pinb_pane_t1_ParamLimits

0xb354,	// (0x0009786e) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0009b647) find_pinb_pane_t_ParamLimits

0xb09f,	// (0x000975b9) main_call3_pane

0x4080,	// (0x0009059a) cale_month_day_heading_pane_t1_ParamLimits

0x4106,	// (0x00090620) cale_month_day_heading_pane_t2_ParamLimits

0x4197,	// (0x000906b1) cale_month_day_heading_pane_t3_ParamLimits

0x4228,	// (0x00090742) cale_month_day_heading_pane_t4_ParamLimits

0x42b9,	// (0x000907d3) cale_month_day_heading_pane_t5_ParamLimits

0x434a,	// (0x00090864) cale_month_day_heading_pane_t6_ParamLimits

0x43db,	// (0x000908f5) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0009b7cb) cale_month_day_heading_pane_t_ParamLimits

0xb8e3,	// (0x00097dfd) smil_status_volume_pane

0x53a8,	// (0x000918c2) postcard_address_pane_ParamLimits

0x53a8,	// (0x000918c2) postcard_address_pane

0x53b4,	// (0x000918ce) postcard_message_pane_ParamLimits

0x53b4,	// (0x000918ce) postcard_message_pane

0x57af,	// (0x00091cc9) call2_cli_visual_pane_t1_ParamLimits

0x57af,	// (0x00091cc9) call2_cli_visual_pane_t1

0x5de5,	// (0x000922ff) postcard_message_pane_t1_ParamLimits

0x5de5,	// (0x000922ff) postcard_message_pane_t1

0x5dce,	// (0x000922e8) postcard_address_pane_t1_ParamLimits

0x5dce,	// (0x000922e8) postcard_address_pane_t1

0x5dbf,	// (0x000922d9) popup_call3_audio_in_window_ParamLimits

0x5dbf,	// (0x000922d9) popup_call3_audio_in_window

0x5ca3,	// (0x000921bd) bg_popup_call3_in_pane_ParamLimits

0x5ca3,	// (0x000921bd) bg_popup_call3_in_pane

0x5d05,	// (0x0009221f) popup_call3_audio_in_window_g1_ParamLimits

0x5d05,	// (0x0009221f) popup_call3_audio_in_window_g1

0x5d1d,	// (0x00092237) popup_call3_audio_in_window_g2_ParamLimits

0x5d1d,	// (0x00092237) popup_call3_audio_in_window_g2

0x5d35,	// (0x0009224f) popup_call3_audio_in_window_g3_ParamLimits

0x5d35,	// (0x0009224f) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0009bb37) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0009bb37) popup_call3_audio_in_window_g

0x5d5d,	// (0x00092277) popup_call3_audio_in_window_t1_ParamLimits

0x5d5d,	// (0x00092277) popup_call3_audio_in_window_t1

0x5d85,	// (0x0009229f) popup_call3_audio_in_window_t2_ParamLimits

0x5d85,	// (0x0009229f) popup_call3_audio_in_window_t2

0x5dad,	// (0x000922c7) popup_call3_audio_in_window_t3_ParamLimits

0x5dad,	// (0x000922c7) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0009bb40) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0009bb40) popup_call3_audio_in_window_t

0xcde5,	// (0x000992ff) bg_popup_call3_rect_pane

0xe081,	// (0x0009a59b) bg_popup_call3_rect_pane_g1

0xb4a0,	// (0x000979ba) bg_popup_call3_rect_pane_g2

0xe089,	// (0x0009a5a3) bg_popup_call3_rect_pane_g3

0xe091,	// (0x0009a5ab) bg_popup_call3_rect_pane_g4

0xe099,	// (0x0009a5b3) bg_popup_call3_rect_pane_g5

0xe0a1,	// (0x0009a5bb) bg_popup_call3_rect_pane_g6

0xe0a9,	// (0x0009a5c3) bg_popup_call3_rect_pane_g7

0x4f46,	// (0x00091460) mup_visualizer_osc_pane

0xcea4,	// (0x000993be) mup_visualizer_spec_pane

0x5cc3,	// (0x000921dd) call3_video_qcif_pane_ParamLimits

0x5cc3,	// (0x000921dd) call3_video_qcif_pane

0x5cd5,	// (0x000921ef) call3_video_qcif_uncrop_pane_ParamLimits

0x5cd5,	// (0x000921ef) call3_video_qcif_uncrop_pane

0x5ce3,	// (0x000921fd) call3_video_subqcif_pane_ParamLimits

0x5ce3,	// (0x000921fd) call3_video_subqcif_pane

0x5cf5,	// (0x0009220f) call3_video_subqcif_uncrop_pane_ParamLimits

0x5cf5,	// (0x0009220f) call3_video_subqcif_uncrop_pane

0x5d4d,	// (0x00092267) popup_call3_audio_in_window_g4_ParamLimits

0x5d4d,	// (0x00092267) popup_call3_audio_in_window_g4

0x5c70,	// (0x0009218a) mup_spec_half_pane

0x5c79,	// (0x00092193) mup_spec_half_pane_cp

0xe2e6,	// (0x0009a800) mup_osc_middle_pane

0xe2ef,	// (0x0009a809) mup_visualizer_osc_pane_g1

0x5c51,	// (0x0009216b) mup_spec_bar_pane_ParamLimits

0x5c51,	// (0x0009216b) mup_spec_bar_pane

0xe2d3,	// (0x0009a7ed) mup_spec_bar_pane_g1

0xe2dd,	// (0x0009a7f7) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0009bb2b) mup_spec_bar_pane_g

0x2c08,	// (0x0008f122) aid_cale_week_size_cell_pane_ParamLimits

0x2c1d,	// (0x0008f137) bg_cale_heading_pane_ParamLimits

0xb4dd,	// (0x000979f7) bg_cale_pane_cp01_ParamLimits

0x2c3f,	// (0x0008f159) cale_week_corner_pane_ParamLimits

0x2c59,	// (0x0008f173) cale_week_day_heading_pane_ParamLimits

0x2c7b,	// (0x0008f195) cale_week_scroll_pane_g1_ParamLimits

0x2c98,	// (0x0008f1b2) cale_week_scroll_pane_g2_ParamLimits

0x2cab,	// (0x0008f1c5) cale_week_scroll_pane_g3_ParamLimits

0x2cbe,	// (0x0008f1d8) cale_week_scroll_pane_g4_ParamLimits

0x2cd1,	// (0x0008f1eb) cale_week_scroll_pane_g5_ParamLimits

0x2ce4,	// (0x0008f1fe) cale_week_scroll_pane_g6_ParamLimits

0x2cf7,	// (0x0008f211) cale_week_scroll_pane_g7_ParamLimits

0x2d0a,	// (0x0008f224) cale_week_scroll_pane_g8_ParamLimits

0x2d1f,	// (0x0008f239) cale_week_scroll_pane_g9_ParamLimits

0x2d32,	// (0x0008f24c) cale_week_scroll_pane_g10_ParamLimits

0x2d45,	// (0x0008f25f) cale_week_scroll_pane_g11_ParamLimits

0x2d58,	// (0x0008f272) cale_week_scroll_pane_g12_ParamLimits

0x2d6f,	// (0x0008f289) cale_week_scroll_pane_g13_ParamLimits

0x2d8a,	// (0x0008f2a4) cale_week_scroll_pane_g14_ParamLimits

0x2da5,	// (0x0008f2bf) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0009b6d3) cale_week_scroll_pane_g_ParamLimits

0x2dc0,	// (0x0008f2da) cale_week_time_pane_ParamLimits

0x2dd5,	// (0x0008f2ef) grid_cale_week_pane_ParamLimits

0xb4fb,	// (0x00097a15) listscroll_cale_week_pane_t1

0xb50d,	// (0x00097a27) scroll_pane_cp08_ParamLimits

0x3b95,	// (0x000900af) cale_month_corner_pane_ParamLimits

0xb8b9,	// (0x00097dd3) cale_month_pane_t1

0x401d,	// (0x00090537) cale_month_week_pane_ParamLimits

0xcb35,	// (0x0009904f) popup_call_status_window_g1_ParamLimits

0x4901,	// (0x00090e1b) popup_call_status_window_g2_ParamLimits

0x490d,	// (0x00090e27) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0009b87b) popup_call_status_window_g_ParamLimits

0xcb59,	// (0x00099073) aid_call2_pane

0x51e7,	// (0x00091701) msg_header_pane_g1

0x53a8,	// (0x000918c2) postcard_address2_pane_ParamLimits

0x53a8,	// (0x000918c2) postcard_address2_pane

0x53b4,	// (0x000918ce) postcard_message2_pane_ParamLimits

0x53b4,	// (0x000918ce) postcard_message2_pane

0x5be9,	// (0x00092103) message2_row_pane_ParamLimits

0x5be9,	// (0x00092103) message2_row_pane

0x5c04,	// (0x0009211e) address2_row_pane_ParamLimits

0x5c04,	// (0x0009211e) address2_row_pane

0xe2a1,	// (0x0009a7bb) postcard_message2_row_pane_g1

0xe2a9,	// (0x0009a7c3) postcard_message2_row_pane_t1

0xe2a1,	// (0x0009a7bb) address2_row_pane_g1

0xe2a9,	// (0x0009a7c3) address2_row_pane_t1

0x312c,	// (0x0008f646) aid_size_cell_vorec

0xb09f,	// (0x000975b9) main_rss_pane

0x5c17,	// (0x00092131) rss_list_single_pane_ParamLimits

0x5c17,	// (0x00092131) rss_list_single_pane

0xe2b7,	// (0x0009a7d1) rss_list_single_pane_t1

0xe2c5,	// (0x0009a7df) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0009bb26) rss_list_single_pane_t

0xb09f,	// (0x000975b9) main_camera2_pane

0xb09f,	// (0x000975b9) main_video2_pane

0x5e49,	// (0x00092363) cams_zoom_pane_cp2_ParamLimits

0x5e49,	// (0x00092363) cams_zoom_pane_cp2

0x5e55,	// (0x0009236f) image2_vga_pane_ParamLimits

0x5e55,	// (0x0009236f) image2_vga_pane

0x5e64,	// (0x0009237e) main_camera2_pane_g1_ParamLimits

0x5e64,	// (0x0009237e) main_camera2_pane_g1

0x5e70,	// (0x0009238a) main_camera2_pane_g2_ParamLimits

0x5e70,	// (0x0009238a) main_camera2_pane_g2

0x5e7c,	// (0x00092396) main_camera2_pane_g3_ParamLimits

0x5e7c,	// (0x00092396) main_camera2_pane_g3

0x5e88,	// (0x000923a2) main_camera2_pane_g4_ParamLimits

0x5e88,	// (0x000923a2) main_camera2_pane_g4

0x5e94,	// (0x000923ae) main_camera2_pane_g5_ParamLimits

0x5e94,	// (0x000923ae) main_camera2_pane_g5

0x5ea0,	// (0x000923ba) main_camera2_pane_g6_ParamLimits

0x5ea0,	// (0x000923ba) main_camera2_pane_g6

0x5eac,	// (0x000923c6) main_camera2_pane_g7_ParamLimits

0x5eac,	// (0x000923c6) main_camera2_pane_g7

0x5eb8,	// (0x000923d2) main_camera2_pane_g8_ParamLimits

0x5eb8,	// (0x000923d2) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0009bb47) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0009bb47) main_camera2_pane_g

0x5ed0,	// (0x000923ea) main_camera2_pane_t1_ParamLimits

0x5ed0,	// (0x000923ea) main_camera2_pane_t1

0x5ee2,	// (0x000923fc) main_camera2_pane_t2_ParamLimits

0x5ee2,	// (0x000923fc) main_camera2_pane_t2

0x5ef4,	// (0x0009240e) main_camera2_pane_t3_ParamLimits

0x5ef4,	// (0x0009240e) main_camera2_pane_t3

0x5f06,	// (0x00092420) main_camera2_pane_t4_ParamLimits

0x5f06,	// (0x00092420) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0009bb5a) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0009bb5a) main_camera2_pane_t

0x5f68,	// (0x00092482) cams_zoom_pane_cp4_ParamLimits

0x5f68,	// (0x00092482) cams_zoom_pane_cp4

0x5f78,	// (0x00092492) image2_cif_pane_ParamLimits

0x5f78,	// (0x00092492) image2_cif_pane

0x5f8d,	// (0x000924a7) image2_subqcif_pane_ParamLimits

0x5f8d,	// (0x000924a7) image2_subqcif_pane

0x5f9c,	// (0x000924b6) main_video2_pane_g1_ParamLimits

0x5f9c,	// (0x000924b6) main_video2_pane_g1

0x5fae,	// (0x000924c8) main_video2_pane_g2_ParamLimits

0x5fae,	// (0x000924c8) main_video2_pane_g2

0x5fbe,	// (0x000924d8) main_video2_pane_g3_ParamLimits

0x5fbe,	// (0x000924d8) main_video2_pane_g3

0x5fce,	// (0x000924e8) main_video2_pane_g4_ParamLimits

0x5fce,	// (0x000924e8) main_video2_pane_g4

0x5fde,	// (0x000924f8) main_video2_pane_g5_ParamLimits

0x5fde,	// (0x000924f8) main_video2_pane_g5

0x5fee,	// (0x00092508) main_video2_pane_g6_ParamLimits

0x5fee,	// (0x00092508) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0009bb69) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0009bb69) main_video2_pane_g

0x6000,	// (0x0009251a) main_video2_pane_t1_ParamLimits

0x6000,	// (0x0009251a) main_video2_pane_t1

0x601a,	// (0x00092534) main_video2_pane_t2_ParamLimits

0x601a,	// (0x00092534) main_video2_pane_t2

0x6040,	// (0x0009255a) main_video2_pane_t3_ParamLimits

0x6040,	// (0x0009255a) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0009bb76) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0009bb76) main_video2_pane_t

0x5901,	// (0x00091e1b) call_muted_g2

0x0001,

0xf5fe,	// (0x0009bb18) call_muted_g

0xb09f,	// (0x000975b9) main_mup2_pane

0xe326,	// (0x0009a840) main_mup2_pane_g1_ParamLimits

0xe326,	// (0x0009a840) main_mup2_pane_g1

0x6066,	// (0x00092580) main_mup2_pane_g2_ParamLimits

0x6066,	// (0x00092580) main_mup2_pane_g2

0x62e8,	// (0x00092802) main_mup_pane_g13_cp1

0x62f0,	// (0x0009280a) mup_volume_pane_cp1

0x6086,	// (0x000925a0) main_mup2_pane_g4_ParamLimits

0x6086,	// (0x000925a0) main_mup2_pane_g4

0x609b,	// (0x000925b5) main_mup2_pane_g5_ParamLimits

0x609b,	// (0x000925b5) main_mup2_pane_g5

0x60b0,	// (0x000925ca) main_mup2_pane_g6_ParamLimits

0x60b0,	// (0x000925ca) main_mup2_pane_g6

0x60c5,	// (0x000925df) main_mup2_pane_g7_ParamLimits

0x60c5,	// (0x000925df) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0009bb7d) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0009bb7d) main_mup2_pane_g

0x60e1,	// (0x000925fb) main_mup2_pane_t1_ParamLimits

0x60e1,	// (0x000925fb) main_mup2_pane_t1

0x60f8,	// (0x00092612) main_mup2_pane_t2_ParamLimits

0x60f8,	// (0x00092612) main_mup2_pane_t2

0x610f,	// (0x00092629) main_mup2_pane_t3_ParamLimits

0x610f,	// (0x00092629) main_mup2_pane_t3

0x6126,	// (0x00092640) main_mup2_pane_t4_ParamLimits

0x6126,	// (0x00092640) main_mup2_pane_t4

0x6140,	// (0x0009265a) main_mup2_pane_t5_ParamLimits

0x6140,	// (0x0009265a) main_mup2_pane_t5

0x615a,	// (0x00092674) main_mup2_pane_t6_ParamLimits

0x615a,	// (0x00092674) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0009bb8c) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0009bb8c) main_mup2_pane_t

0x6192,	// (0x000926ac) mup2_visualizer_pane_ParamLimits

0x6192,	// (0x000926ac) mup2_visualizer_pane

0x61c8,	// (0x000926e2) mup_progress_pane_cp_ParamLimits

0x61c8,	// (0x000926e2) mup_progress_pane_cp

0x62d3,	// (0x000927ed) mup_volume_pane_cp_ParamLimits

0x62d3,	// (0x000927ed) mup_volume_pane_cp

0x61df,	// (0x000926f9) mup2_visualizer_pane_g1_ParamLimits

0x61df,	// (0x000926f9) mup2_visualizer_pane_g1

0xe332,	// (0x0009a84c) mup2_visualizer_pane_g2_ParamLimits

0xe332,	// (0x0009a84c) mup2_visualizer_pane_g2

0x61f4,	// (0x0009270e) mup2_visualizer_pane_g3_ParamLimits

0x61f4,	// (0x0009270e) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0009bb99) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0009bb99) mup2_visualizer_pane_g

0xd166,	// (0x00099680) aid_size_cell_fmradio

0x5a17,	// (0x00091f31) aid_height_parent_landcape

0xb717,	// (0x00097c31) wml_content_pane_cp

0xb71f,	// (0x00097c39) wml_tabs_pane

0xb728,	// (0x00097c42) popup_wml_miniature_window

0xb730,	// (0x00097c4a) scroll_pane_cp021

0xb744,	// (0x00097c5e) wml_content_pane_comp8

0xb09f,	// (0x000975b9) bg_popup_sub_pane_cp05

0xe350,	// (0x0009a86a) popup_wml_miniature_window_g1

0xe358,	// (0x0009a872) wml_miniature_view_pane

0x6202,	// (0x0009271c) aid_size_wml_view

0x620a,	// (0x00092724) wml_miniature_view_pane_g1

0x6213,	// (0x0009272d) wml_miniature_view_pane_g2

0x621c,	// (0x00092736) wml_miniature_view_pane_g3

0x6224,	// (0x0009273e) wml_miniature_view_pane_g4

0x622c,	// (0x00092746) wml_miniature_view_pane_g5

0x6234,	// (0x0009274e) wml_miniature_view_pane_g6

0x623c,	// (0x00092756) wml_miniature_view_pane_g7

0x6244,	// (0x0009275e) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0009bba0) wml_miniature_view_pane_g

0xe326,	// (0x0009a840) background_graphic_ParamLimits

0xe326,	// (0x0009a840) background_graphic

0xe360,	// (0x0009a87a) wml_tabs_2_pane

0xe369,	// (0x0009a883) wml_tabs_3_pane_ParamLimits

0xe369,	// (0x0009a883) wml_tabs_3_pane

0xe37b,	// (0x0009a895) wml_tabs_4_pane_ParamLimits

0xe37b,	// (0x0009a895) wml_tabs_4_pane

0xe391,	// (0x0009a8ab) wml_tabs_5_pane_ParamLimits

0xe391,	// (0x0009a8ab) wml_tabs_5_pane

0xe3ab,	// (0x0009a8c5) wml_tabs_pane_g2_ParamLimits

0xe3ab,	// (0x0009a8c5) wml_tabs_pane_g2

0xe3bf,	// (0x0009a8d9) wml_tabs_pane_g3_ParamLimits

0xe3bf,	// (0x0009a8d9) wml_tabs_pane_g3

0x624c,	// (0x00092766) wml_tabs_2_active_pane_ParamLimits

0x624c,	// (0x00092766) wml_tabs_2_active_pane

0x625c,	// (0x00092776) wml_tabs_2_passive_pane_ParamLimits

0x625c,	// (0x00092776) wml_tabs_2_passive_pane

0x626c,	// (0x00092786) wml_tabs_3_active_pane_cp_ParamLimits

0x626c,	// (0x00092786) wml_tabs_3_active_pane_cp

0x627d,	// (0x00092797) wml_tabs_3_passive_pane_ParamLimits

0x627d,	// (0x00092797) wml_tabs_3_passive_pane

0x628e,	// (0x000927a8) wml_tabs_3_passive_pane_cp_ParamLimits

0x628e,	// (0x000927a8) wml_tabs_3_passive_pane_cp

0x629f,	// (0x000927b9) tabs_4_active_pane

0x62a7,	// (0x000927c1) tabs_4_passive_pane

0x62af,	// (0x000927c9) tabs_4_passive_pane_cp

0x62b7,	// (0x000927d1) tabs_4_passive_pane_cp2

0x57dc,	// (0x00091cf6) aid_height_text

0x4f13,	// (0x0009142d) mup_volume_cont_pane_ParamLimits

0x4f13,	// (0x0009142d) mup_volume_cont_pane

0x2738,	// (0x0008ec52) aid_size_cell_pinb

0x2742,	// (0x0008ec5c) aid_size_list_pinb

0x61b1,	// (0x000926cb) mup2_volume_cont_pane_ParamLimits

0x61b1,	// (0x000926cb) mup2_volume_cont_pane

0x62bf,	// (0x000927d9) mup2_volume_cont_pane_g1_ParamLimits

0x62bf,	// (0x000927d9) mup2_volume_cont_pane_g1

0x235d,	// (0x0008e877) aid_size_cell_touch_ParamLimits

0x235d,	// (0x0008e877) aid_size_cell_touch

0x261e,	// (0x0008eb38) touch_pane_ParamLimits

0x261e,	// (0x0008eb38) touch_pane

0x2614,	// (0x0008eb2e) main_rss2_pane

0xe3dc,	// (0x0009a8f6) listscroll_rss2_pane

0xe3e5,	// (0x0009a8ff) rss2_navigation_pane

0xe3ed,	// (0x0009a907) list_rss2_pane

0xcc9c,	// (0x000991b6) scroll_pane_cp22

0xe3f5,	// (0x0009a90f) rss2_navigation_pane_g1

0xe3fe,	// (0x0009a918) rss2_navigation_pane_g2

0xe406,	// (0x0009a920) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0009bbb1) rss2_navigation_pane_g

0xe40e,	// (0x0009a928) rss2_navigation_pane_t1

0x62f8,	// (0x00092812) rss2_list_single_pane_ParamLimits

0x62f8,	// (0x00092812) rss2_list_single_pane

0xe41c,	// (0x0009a936) rss2_list_single_pane_t2

0xe42a,	// (0x0009a944) rss2_list_single_pane_t3_ParamLimits

0xe42a,	// (0x0009a944) rss2_list_single_pane_t3

0xe447,	// (0x0009a961) rss2_list_single_pane_t4

0x46ad,	// (0x00090bc7) smil_status_pane_g1

0x5a2e,	// (0x00091f48) main_image2_pane_ParamLimits

0x5a2e,	// (0x00091f48) main_image2_pane

0x5ec4,	// (0x000923de) main_camera2_pane_g9_ParamLimits

0x5ec4,	// (0x000923de) main_camera2_pane_g9

0x5f18,	// (0x00092432) main_camera2_pane_t5_ParamLimits

0x5f18,	// (0x00092432) main_camera2_pane_t5

0x5f2a,	// (0x00092444) main_camera2_pane_t6_ParamLimits

0x5f2a,	// (0x00092444) main_camera2_pane_t6

0x6329,	// (0x00092843) main_image2_pane_g1_ParamLimits

0x6329,	// (0x00092843) main_image2_pane_g1

0x557c,	// (0x00091a96) smil2_video_pane_ParamLimits

0x557c,	// (0x00091a96) smil2_video_pane

0x2391,	// (0x0008e8ab) aid_zoom_text_primary_cp

0x25af,	// (0x0008eac9) popup_preview_fixed_window

0xb680,	// (0x00097b9a) im_reading_pane_g1

0x5e0e,	// (0x00092328) cams2_bc_adjust_pane_cp_ParamLimits

0x5e0e,	// (0x00092328) cams2_bc_adjust_pane_cp

0x5f5a,	// (0x00092474) cams2_bc_adjust_pane_ParamLimits

0x5f5a,	// (0x00092474) cams2_bc_adjust_pane

0x0ab9,	// (0x0008cfd3) cams2_bc_adjust_pane_g1

0x6335,	// (0x0009284f) cams2_slider_pane

0x633e,	// (0x00092858) cams2_slider_pane_g1

0x6347,	// (0x00092861) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0009bbb8) cams2_slider_pane_g

0x2848,	// (0x0008ed62) calc_display_pane_ParamLimits

0x2866,	// (0x0008ed80) calc_paper_pane_ParamLimits

0x2882,	// (0x0008ed9c) grid_calc_pane_ParamLimits

0x496f,	// (0x00090e89) popup_clock_digital_window_t1_ParamLimits

0xd103,	// (0x0009961d) main_image_pane_t1

0x282e,	// (0x0008ed48) aid_size_cell_calc_ParamLimits

0x282e,	// (0x0008ed48) aid_size_cell_calc

0x5a5f,	// (0x00091f79) popup_blid_sat_info2_window_ParamLimits

0x5a5f,	// (0x00091f79) popup_blid_sat_info2_window

0xe45d,	// (0x0009a977) aid_size_cell_blid

0xe465,	// (0x0009a97f) bg_popup_window_pane_cp07

0xe488,	// (0x0009a9a2) grid_popup_blid_pane

0xe492,	// (0x0009a9ac) heading_pane_cp05_ParamLimits

0xe492,	// (0x0009a9ac) heading_pane_cp05

0xe565,	// (0x0009aa7f) cell_popup_blid_pane_ParamLimits

0xe565,	// (0x0009aa7f) cell_popup_blid_pane

0xe589,	// (0x0009aaa3) cell_popup_blid_pane_g1

0xe591,	// (0x0009aaab) cell_popup_blid_pane_t1

0x6177,	// (0x00092691) mup2_indicator_pane_ParamLimits

0x6177,	// (0x00092691) mup2_indicator_pane

0xcde5,	// (0x000992ff) mup2_visualizer_osc_pane

0xe33e,	// (0x0009a858) mup2_visualizer_spec_pane_ParamLimits

0xe33e,	// (0x0009a858) mup2_visualizer_spec_pane

0x6361,	// (0x0009287b) mup2_spec_half_pane

0x636a,	// (0x00092884) mup2_spec_half_pane_cp

0x6374,	// (0x0009288e) mup2_spec_bar_pane_ParamLimits

0x6374,	// (0x0009288e) mup2_spec_bar_pane

0xe2d3,	// (0x0009a7ed) mup2_spec_bar_pane_g1

0xe2dd,	// (0x0009a7f7) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0009bb2b) mup2_spec_bar_pane_g

0x6393,	// (0x000928ad) mup2_osc_middle_pane

0xe2ef,	// (0x0009a809) mup2_visualizer_osc_pane_g1

0x0f80,	// (0x0008d49a) popup_number_entry_window_t1_ParamLimits

0x0f93,	// (0x0008d4ad) popup_number_entry_window_t2_ParamLimits

0x0fa5,	// (0x0008d4bf) popup_number_entry_window_t3_ParamLimits

0x2675,	// (0x0008eb8f) popup_number_entry_window_t5_ParamLimits

0x2675,	// (0x0008eb8f) popup_number_entry_window_t5

0xf0d3,	// (0x0009b5ed) popup_number_entry_window_t_ParamLimits

0x0fb7,	// (0x0008d4d1) text_title_cp2_ParamLimits

0x527c,	// (0x00091796) aid_hotspot_pointer_text2_pane

0x530a,	// (0x00091824) main_viewer_pane_g9_ParamLimits

0x530a,	// (0x00091824) main_viewer_pane_g9

0xb8b9,	// (0x00097dd3) cale_month_pane_t1_ParamLimits

0xb8f6,	// (0x00097e10) bg_cale_pane_ParamLimits

0xb90e,	// (0x00097e28) list_cale_pane_ParamLimits

0xb91f,	// (0x00097e39) listscroll_cale_day_pane_t1

0xb931,	// (0x00097e4b) scroll_pane_cp09_ParamLimits

0x4f4e,	// (0x00091468) main_mup_eq_pane_t1_ParamLimits

0x4f4e,	// (0x00091468) main_mup_eq_pane_t1

0x4f68,	// (0x00091482) main_mup_eq_pane_t2_ParamLimits

0x4f68,	// (0x00091482) main_mup_eq_pane_t2

0x4f82,	// (0x0009149c) main_mup_eq_pane_t3_ParamLimits

0x4f82,	// (0x0009149c) main_mup_eq_pane_t3

0x4f9a,	// (0x000914b4) main_mup_eq_pane_t4_ParamLimits

0x4f9a,	// (0x000914b4) main_mup_eq_pane_t4

0x4fb2,	// (0x000914cc) main_mup_eq_pane_t5_ParamLimits

0x4fb2,	// (0x000914cc) main_mup_eq_pane_t5

0x4fca,	// (0x000914e4) main_mup_eq_pane_t6_ParamLimits

0x4fca,	// (0x000914e4) main_mup_eq_pane_t6

0x4fde,	// (0x000914f8) main_mup_eq_pane_t7_ParamLimits

0x4fde,	// (0x000914f8) main_mup_eq_pane_t7

0x4ff2,	// (0x0009150c) main_mup_eq_pane_t8_ParamLimits

0x4ff2,	// (0x0009150c) main_mup_eq_pane_t8

0x5008,	// (0x00091522) main_mup_eq_pane_t9_ParamLimits

0x5008,	// (0x00091522) main_mup_eq_pane_t9

0x5020,	// (0x0009153a) main_mup_eq_pane_t10_ParamLimits

0x5020,	// (0x0009153a) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0009b97a) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0009b97a) main_mup_eq_pane_t

0x50dd,	// (0x000915f7) mup_equalizer_pane_cp5_ParamLimits

0x50f3,	// (0x0009160d) mup_equalizer_pane_cp6_ParamLimits

0x510b,	// (0x00091625) mup_equalizer_pane_cp7_ParamLimits

0x2614,	// (0x0008eb2e) main_gallery_pane

0xe2f8,	// (0x0009a812) smil2_volume_pane

0xe300,	// (0x0009a81a) smil_status_volume_pane_g1_ParamLimits

0xe313,	// (0x0009a82d) smil_status_volume_pane_g2_ParamLimits

0x5c81,	// (0x0009219b) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0009bb30) smil_status_volume_pane_g_ParamLimits

0xe465,	// (0x0009a97f) bg_popup_window_pane_cp07_ParamLimits

0xe473,	// (0x0009a98d) blid_firmament_pane

0x639c,	// (0x000928b6) aid_size_cell_gallery_ParamLimits

0x639c,	// (0x000928b6) aid_size_cell_gallery

0x63aa,	// (0x000928c4) grid_gallery_pane_ParamLimits

0x63aa,	// (0x000928c4) grid_gallery_pane

0x63ba,	// (0x000928d4) cell_gallery_pane_ParamLimits

0x63ba,	// (0x000928d4) cell_gallery_pane

0xe59f,	// (0x0009aab9) bg_cell_gallery_focus_pane_ParamLimits

0xe59f,	// (0x0009aab9) bg_cell_gallery_focus_pane

0xe5b1,	// (0x0009aacb) cell_gallery_pane_g1_ParamLimits

0xe5b1,	// (0x0009aacb) cell_gallery_pane_g1

0x6408,	// (0x00092922) cell_gallery_pane_g2_ParamLimits

0x6408,	// (0x00092922) cell_gallery_pane_g2

0x6415,	// (0x0009292f) cell_gallery_pane_g3_ParamLimits

0x6415,	// (0x0009292f) cell_gallery_pane_g3

0xe5bd,	// (0x0009aad7) cell_gallery_pane_g4_ParamLimits

0xe5bd,	// (0x0009aad7) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0009bbde) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0009bbde) cell_gallery_pane_g

0xe5c9,	// (0x0009aae3) bg_cell_gallery_focus_pane_g1

0xe5d1,	// (0x0009aaeb) bg_cell_gallery_focus_pane_g2

0xe5d9,	// (0x0009aaf3) bg_cell_gallery_focus_pane_g3

0xe5e1,	// (0x0009aafb) bg_cell_gallery_focus_pane_g4

0xe5e9,	// (0x0009ab03) bg_cell_gallery_focus_pane_g5

0xe5f1,	// (0x0009ab0b) bg_cell_gallery_focus_pane_g6

0xe5f9,	// (0x0009ab13) bg_cell_gallery_focus_pane_g7

0xe601,	// (0x0009ab1b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0009bbe7) bg_cell_gallery_focus_pane_g

0xe609,	// (0x0009ab23) aid_firma_cardinal

0xe61d,	// (0x0009ab37) blid_firmament_pane_t1

0xe634,	// (0x0009ab4e) blid_firmament_pane_t2

0xe64b,	// (0x0009ab65) blid_firmament_pane_t3

0xe662,	// (0x0009ab7c) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0009bbf8) blid_firmament_pane_t

0xe679,	// (0x0009ab93) blid_sat_info_pane

0xe689,	// (0x0009aba3) blid_sat_info_pane_g1

0xe689,	// (0x0009aba3) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0009bc01) blid_sat_info_pane_g

0xe693,	// (0x0009abad) blid_sat_info_pane_t1

0xe6a1,	// (0x0009abbb) smil2_volume_content_pane

0xe6aa,	// (0x0009abc4) smil2_volume_pane_g1

0xe53e,	// (0x0009aa58) smil2_volume_content_pane_g1

0xe6b2,	// (0x0009abcc) smil2_volume_content_pane_g2

0xe6bb,	// (0x0009abd5) smil2_volume_content_pane_g3

0xe6c4,	// (0x0009abde) smil2_volume_content_pane_g4

0xe6cd,	// (0x0009abe7) smil2_volume_content_pane_g5

0xe6d6,	// (0x0009abf0) smil2_volume_content_pane_g6

0xe6df,	// (0x0009abf9) smil2_volume_content_pane_g7

0xe6e8,	// (0x0009ac02) smil2_volume_content_pane_g8

0xe6f1,	// (0x0009ac0b) smil2_volume_content_pane_g9

0xe6fa,	// (0x0009ac14) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0009bc06) smil2_volume_content_pane_g

0x2e56,	// (0x0008f370) cale_week_day_heading_pane_t1_ParamLimits

0x2e91,	// (0x0008f3ab) cale_week_day_heading_pane_t2_ParamLimits

0x2ecc,	// (0x0008f3e6) cale_week_day_heading_pane_t3_ParamLimits

0x2f07,	// (0x0008f421) cale_week_day_heading_pane_t4_ParamLimits

0x2f42,	// (0x0008f45c) cale_week_day_heading_pane_t5_ParamLimits

0x2f7d,	// (0x0008f497) cale_week_day_heading_pane_t6_ParamLimits

0x2fb8,	// (0x0008f4d2) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0009b6f2) cale_week_day_heading_pane_t_ParamLimits

0xb52a,	// (0x00097a44) bg_cale_side_pane_ParamLimits

0x2ff3,	// (0x0008f50d) cale_week_time_pane_t1_ParamLimits

0x300d,	// (0x0008f527) cale_week_time_pane_t2_ParamLimits

0x3027,	// (0x0008f541) cale_week_time_pane_t3_ParamLimits

0x3041,	// (0x0008f55b) cale_week_time_pane_t4_ParamLimits

0x305b,	// (0x0008f575) cale_week_time_pane_t5_ParamLimits

0x3075,	// (0x0008f58f) cale_week_time_pane_t6_ParamLimits

0x3095,	// (0x0008f5af) cale_week_time_pane_t7_ParamLimits

0x30b7,	// (0x0008f5d1) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0009b701) cale_week_time_pane_t_ParamLimits

0x30db,	// (0x0008f5f5) cell_cale_week_pane_g2_ParamLimits

0xb52a,	// (0x00097a44) bg_cale_side_pane_cp01_ParamLimits

0x4484,	// (0x0009099e) cale_month_week_pane_t1_ParamLimits

0x449d,	// (0x000909b7) cale_month_week_pane_t2_ParamLimits

0x44b6,	// (0x000909d0) cale_month_week_pane_t3_ParamLimits

0x44cf,	// (0x000909e9) cale_month_week_pane_t4_ParamLimits

0x44e8,	// (0x00090a02) cale_month_week_pane_t5_ParamLimits

0x4509,	// (0x00090a23) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0009b7da) cale_month_week_pane_t_ParamLimits

0x4676,	// (0x00090b90) cell_cale_month_pane_g1_ParamLimits

0x2614,	// (0x0008eb2e) main_cale_event_viewer_pane

0x0f56,	// (0x0008d470) listscroll_cale_event_viewer_pane

0xe703,	// (0x0009ac1d) list_cale_ev_pane

0xe70b,	// (0x0009ac25) scroll_pane_cp023

0xe717,	// (0x0009ac31) field_cale_ev_pane_ParamLimits

0xe717,	// (0x0009ac31) field_cale_ev_pane

0xe735,	// (0x0009ac4f) field_cale_ev_content_pane_ParamLimits

0xe735,	// (0x0009ac4f) field_cale_ev_content_pane

0xe741,	// (0x0009ac5b) field_cale_ev_pane_g1_ParamLimits

0xe741,	// (0x0009ac5b) field_cale_ev_pane_g1

0xe74d,	// (0x0009ac67) field_cale_ev_pane_g2_ParamLimits

0xe74d,	// (0x0009ac67) field_cale_ev_pane_g2

0xe765,	// (0x0009ac7f) field_cale_ev_pane_g3_ParamLimits

0xe765,	// (0x0009ac7f) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0009bc1b) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0009bc1b) field_cale_ev_pane_g

0xe77d,	// (0x0009ac97) field_cale_ev_pane_t1_ParamLimits

0xe77d,	// (0x0009ac97) field_cale_ev_pane_t1

0xe794,	// (0x0009acae) field_cale_ev_content_pane_t1_ParamLimits

0xe794,	// (0x0009acae) field_cale_ev_content_pane_t1

0x51de,	// (0x000916f8) bg_button_pane_cp01

0x2bf8,	// (0x0008f112) listscroll_cale_week_pane_ParamLimits

0xb4d4,	// (0x000979ee) popup_toolbar_window_cp01

0xb4fb,	// (0x00097a15) listscroll_cale_week_pane_t1_ParamLimits

0x2bf8,	// (0x0008f112) listscroll_cale_day_pane_ParamLimits

0xb4d4,	// (0x000979ee) popup_toolbar_window_cp02

0xb91f,	// (0x00097e39) listscroll_cale_day_pane_t1_ParamLimits

0x2bf8,	// (0x0008f112) main_cale_month_pane_ParamLimits

0x5b66,	// (0x00092080) popup_toolbar_window_cp03_ParamLimits

0x5b66,	// (0x00092080) popup_toolbar_window_cp03

0x5492,	// (0x000919ac) main_image_pane_g2_ParamLimits

0x5492,	// (0x000919ac) main_image_pane_g2

0x549e,	// (0x000919b8) main_image_pane_g3_ParamLimits

0x549e,	// (0x000919b8) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0009ba0c) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0009ba0c) main_image_pane_g

0xd103,	// (0x0009961d) main_image_pane_t1_ParamLimits

0x54aa,	// (0x000919c4) main_image_pane_t2_ParamLimits

0x54aa,	// (0x000919c4) main_image_pane_t2

0x54bc,	// (0x000919d6) main_image_pane_t3_ParamLimits

0x54bc,	// (0x000919d6) main_image_pane_t3

0x54ce,	// (0x000919e8) main_image_pane_t4_ParamLimits

0x54ce,	// (0x000919e8) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0009ba13) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0009ba13) main_image_pane_t

0x54e0,	// (0x000919fa) popup_image_details_window_cp01

0x54ea,	// (0x00091a04) popup_toobar_trans_pane_cp01_ParamLimits

0x54ea,	// (0x00091a04) popup_toobar_trans_pane_cp01

0x5ab6,	// (0x00091fd0) popup_image_details_window_ParamLimits

0x5ab6,	// (0x00091fd0) popup_image_details_window

0x5ac4,	// (0x00091fde) popup_image_focus_window

0x5e00,	// (0x0009231a) camera2_autofocus_pane_ParamLimits

0x5e00,	// (0x0009231a) camera2_autofocus_pane

0x0f56,	// (0x0008d470) bg_popup_sub_pane_cp06

0xe7b2,	// (0x0009accc) popup_image_focus_window_g1

0xe7ba,	// (0x0009acd4) popup_image_focus_window_g2

0xe7c2,	// (0x0009acdc) popup_image_focus_window_g3

0xe7ca,	// (0x0009ace4) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0009bc22) popup_image_focus_window_g

0xe7d2,	// (0x0009acec) popup_image_focus_window_t1

0xe7e0,	// (0x0009acfa) popup_image_focus_window_t2

0xe7f0,	// (0x0009ad0a) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0009bc2b) popup_image_focus_window_t

0xe7fe,	// (0x0009ad18) camera2_autofocus_pane_g1

0xcf3e,	// (0x00099458) bg_tb_trans_pane_cp01

0xe80c,	// (0x0009ad26) popup_image_details_window_g1

0xe81f,	// (0x0009ad39) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0009bc3d) popup_image_details_window_g

0xe848,	// (0x0009ad62) popup_image_details_window_t1

0xe85a,	// (0x0009ad74) popup_image_details_window_t2

0xe873,	// (0x0009ad8d) popup_image_details_window_t3

0xe887,	// (0x0009ada1) popup_image_details_window_t4

0xe8a2,	// (0x0009adbc) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0009bc44) popup_image_details_window_t

0xb3ab,	// (0x000978c5) bg_calc_paper_pane_ParamLimits

0x2614,	// (0x0008eb2e) grid_highlight_pane_cp013

0x297f,	// (0x0008ee99) list_calc_pane_ParamLimits

0x2991,	// (0x0008eeab) scroll_pane_cp024

0xb3bf,	// (0x000978d9) bg_calc_display_pane_ParamLimits

0x2999,	// (0x0008eeb3) calc_display_pane_t1_ParamLimits

0x29ae,	// (0x0008eec8) calc_display_pane_t2_ParamLimits

0x29c3,	// (0x0008eedd) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0009b674) calc_display_pane_t_ParamLimits

0x2a9f,	// (0x0008efb9) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0009b691) cell_calc_pane_g

0x2aa8,	// (0x0008efc2) cell_calc_pane_t1

0xb41e,	// (0x00097938) grid_highlight_pane_cp02_ParamLimits

0xb434,	// (0x0009794e) toolbar_button_pane_cp01_ParamLimits

0xb434,	// (0x0009794e) toolbar_button_pane_cp01

0xd148,	// (0x00099662) temp_image_control_pane_ParamLimits

0xd148,	// (0x00099662) temp_image_control_pane

0x5a2e,	// (0x00091f48) main_mp3_pane

0xe8bc,	// (0x0009add6) temp_image_control_pane_g1_ParamLimits

0xe8bc,	// (0x0009add6) temp_image_control_pane_g1

0xe8ca,	// (0x0009ade4) temp_image_control_pane_g2_ParamLimits

0xe8ca,	// (0x0009ade4) temp_image_control_pane_g2

0xe8dc,	// (0x0009adf6) temp_image_control_pane_g3_ParamLimits

0xe8dc,	// (0x0009adf6) temp_image_control_pane_g3

0x6452,	// (0x0009296c) temp_image_control_pane_g4_ParamLimits

0x6452,	// (0x0009296c) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0009bc4f) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0009bc4f) temp_image_control_pane_g

0xe8bc,	// (0x0009add6) main_mp3_pane_g1

0x6463,	// (0x0009297d) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0009bc58) main_mp3_pane_g

0xe91f,	// (0x0009ae39) main_mp3_pane_t1

0xb58f,	// (0x00097aa9) main_camera_pane_g8_ParamLimits

0xb58f,	// (0x00097aa9) main_camera_pane_g8

0x3373,	// (0x0008f88d) main_video_pane_g7_ParamLimits

0x3373,	// (0x0008f88d) main_video_pane_g7

0x5f48,	// (0x00092462) main_camera2_pane_t7_ParamLimits

0x5f48,	// (0x00092462) main_camera2_pane_t7

0xb6d7,	// (0x00097bf1) scroll_pane_cp025_ParamLimits

0xb6d7,	// (0x00097bf1) scroll_pane_cp025

0xb6eb,	// (0x00097c05) scroll_pane_cp026_ParamLimits

0xb6eb,	// (0x00097c05) scroll_pane_cp026

0xb6fa,	// (0x00097c14) wml_content_pane_ParamLimits

0x2614,	// (0x0008eb2e) main_touch_calib_pane

0x6507,	// (0x00092a21) main_touch_calib_pane_g1

0x6513,	// (0x00092a2d) main_touch_calib_pane_g2

0x651f,	// (0x00092a39) main_touch_calib_pane_g3

0x652b,	// (0x00092a45) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0009bc76) main_touch_calib_pane_g

0x6537,	// (0x00092a51) main_touch_calib_pane_t1

0x6550,	// (0x00092a6a) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0009bc7f) main_touch_calib_pane_t

0xcd26,	// (0x00099240) mup_progress_pane_cp02

0xcd45,	// (0x0009925f) navi_pane_g1

0xcda7,	// (0x000992c1) navi_pane_mp_t3

0x5a2e,	// (0x00091f48) main_mp3_pane_ParamLimits

0x5ba3,	// (0x000920bd) navi_pane_ParamLimits

0xe8bc,	// (0x0009add6) main_mp3_pane_g1_ParamLimits

0x6463,	// (0x0009297d) main_mp3_pane_g2_ParamLimits

0x646f,	// (0x00092989) main_mp3_pane_g3_ParamLimits

0x646f,	// (0x00092989) main_mp3_pane_g3

0x647b,	// (0x00092995) main_mp3_pane_g4_ParamLimits

0x647b,	// (0x00092995) main_mp3_pane_g4

0xe8ec,	// (0x0009ae06) main_mp3_pane_g5_ParamLimits

0xe8ec,	// (0x0009ae06) main_mp3_pane_g5

0xe8fa,	// (0x0009ae14) main_mp3_pane_g6_ParamLimits

0xe8fa,	// (0x0009ae14) main_mp3_pane_g6

0xe907,	// (0x0009ae21) main_mp3_pane_g7_ParamLimits

0xe907,	// (0x0009ae21) main_mp3_pane_g7

0xe913,	// (0x0009ae2d) main_mp3_pane_g8_ParamLimits

0xe913,	// (0x0009ae2d) main_mp3_pane_g8

0xf73e,	// (0x0009bc58) main_mp3_pane_g_ParamLimits

0x6487,	// (0x000929a1) main_mp3_pane_t2

0x6497,	// (0x000929b1) main_mp3_pane_t3

0xe92d,	// (0x0009ae47) main_mp3_pane_t4

0xe93b,	// (0x0009ae55) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0009bc69) main_mp3_pane_t

0xe949,	// (0x0009ae63) mup_progress_pane_cp01

0x2391,	// (0x0008e8ab) aid_zoom_text_secondary2

0xe703,	// (0x0009ac1d) list_cale_ev2_pane

0xe70b,	// (0x0009ac25) scroll_pane_cp023_ParamLimits

0x65ab,	// (0x00092ac5) field_cale_ev2_pane_ParamLimits

0x65ab,	// (0x00092ac5) field_cale_ev2_pane

0x65d4,	// (0x00092aee) field_cale_ev2_pane_g1_ParamLimits

0x65d4,	// (0x00092aee) field_cale_ev2_pane_g1

0x65e0,	// (0x00092afa) field_cale_ev2_pane_g2_ParamLimits

0x65e0,	// (0x00092afa) field_cale_ev2_pane_g2

0x65f8,	// (0x00092b12) field_cale_ev2_pane_g3_ParamLimits

0x65f8,	// (0x00092b12) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0009bc8a) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0009bc8a) field_cale_ev2_pane_g

0xe95d,	// (0x0009ae77) field_cale_ev2_pane_t1_ParamLimits

0xe95d,	// (0x0009ae77) field_cale_ev2_pane_t1

0xe974,	// (0x0009ae8e) field_cale_ev2_pane_t2_ParamLimits

0xe974,	// (0x0009ae8e) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0009bc93) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0009bc93) field_cale_ev2_pane_t

0x5372,	// (0x0009188c) main_postcard_pane_g5_ParamLimits

0x5372,	// (0x0009188c) main_postcard_pane_g5

0x5380,	// (0x0009189a) main_postcard_pane_g6_ParamLimits

0x5380,	// (0x0009189a) main_postcard_pane_g6

0x31bd,	// (0x0008f6d7) camera2_autofocus_pane_cp_ParamLimits

0x31bd,	// (0x0008f6d7) camera2_autofocus_pane_cp

0x5a2e,	// (0x00091f48) main_mup3_pane

0x6610,	// (0x00092b2a) main_mup3_pane_g1_ParamLimits

0x6610,	// (0x00092b2a) main_mup3_pane_g1

0x6631,	// (0x00092b4b) main_mup3_pane_g2_ParamLimits

0x6631,	// (0x00092b4b) main_mup3_pane_g2

0x66a9,	// (0x00092bc3) main_mup3_pane_g3_ParamLimits

0x66a9,	// (0x00092bc3) main_mup3_pane_g3

0x66ec,	// (0x00092c06) main_mup3_pane_g4_ParamLimits

0x66ec,	// (0x00092c06) main_mup3_pane_g4

0x672f,	// (0x00092c49) main_mup3_pane_g5_ParamLimits

0x672f,	// (0x00092c49) main_mup3_pane_g5

0x6772,	// (0x00092c8c) main_mup3_pane_g6_ParamLimits

0x6772,	// (0x00092c8c) main_mup3_pane_g6

0xe9a9,	// (0x0009aec3) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x0009aec3) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0009bca3) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0009bca3) main_mup3_pane_g

0x67e8,	// (0x00092d02) main_mup3_pane_t1_ParamLimits

0x67e8,	// (0x00092d02) main_mup3_pane_t1

0x6857,	// (0x00092d71) main_mup3_pane_t2_ParamLimits

0x6857,	// (0x00092d71) main_mup3_pane_t2

0x6920,	// (0x00092e3a) main_mup3_pane_t4_ParamLimits

0x6920,	// (0x00092e3a) main_mup3_pane_t4

0x696e,	// (0x00092e88) main_mup3_pane_t5_ParamLimits

0x696e,	// (0x00092e88) main_mup3_pane_t5

0x6a1e,	// (0x00092f38) main_mup3_pane_t6_ParamLimits

0x6a1e,	// (0x00092f38) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0009bcb4) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0009bcb4) main_mup3_pane_t

0x6aca,	// (0x00092fe4) mup3_progress_pane_ParamLimits

0x6aca,	// (0x00092fe4) mup3_progress_pane

0x6b48,	// (0x00093062) popup_mup3_control_window_ParamLimits

0x6b48,	// (0x00093062) popup_mup3_control_window

0xe9b7,	// (0x0009aed1) popup_mup3_text_window

0x6b61,	// (0x0009307b) mup3_progress_pane_t1

0x6b80,	// (0x0009309a) mup3_progress_pane_t2

0xe9bf,	// (0x0009aed9) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0009bcc1) mup3_progress_pane_t

0xe9dc,	// (0x0009aef6) mup_progress_pane_cp03

0x0f56,	// (0x0008d470) bg_tb_trans_pane_cp04

0x6b9f,	// (0x000930b9) mup3_volume_pane

0x6ba7,	// (0x000930c1) popup_mup3_control_window_g1

0x6bb0,	// (0x000930ca) mup3_volume_pane_g1

0x6bb9,	// (0x000930d3) mup3_volume_pane_g2

0x6bc2,	// (0x000930dc) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0009bcc8) mup3_volume_pane_g

0x0f56,	// (0x0008d470) bg_tb_trans_pane_cp03

0xe9ec,	// (0x0009af06) popup_mup3_text_window_g1

0xe9f4,	// (0x0009af0e) popup_mup3_text_window_t1

0xb407,	// (0x00097921) list_calc_item_pane_g1_ParamLimits

0xe3d3,	// (0x0009a8ed) mup_volume_pane_cp_g1

0x6569,	// (0x00092a83) main_touch_calib_pane_t3

0x657f,	// (0x00092a99) main_touch_calib_pane_t4

0x6595,	// (0x00092aaf) main_touch_calib_pane_t5

0x2349,	// (0x0008e863) aid_cell_size_toolbar2

0x2351,	// (0x0008e86b) aid_popup3_width_pane

0x2266,	// (0x0008e780) aid_zoom_text_msg_primary

0x3194,	// (0x0008f6ae) vorec_t7

0xb3cb,	// (0x000978e5) bg_calc_paper_pane_g1_ParamLimits

0xb3d7,	// (0x000978f1) bg_calc_paper_pane_g2_ParamLimits

0xb3e3,	// (0x000978fd) bg_calc_paper_pane_g3_ParamLimits

0xb3ef,	// (0x00097909) bg_calc_paper_pane_g4_ParamLimits

0xb3fb,	// (0x00097915) bg_calc_paper_pane_g5_ParamLimits

0x2a02,	// (0x0008ef1c) bg_calc_paper_pane_g6_ParamLimits

0x2a13,	// (0x0008ef2d) bg_calc_paper_pane_g7_ParamLimits

0x2a24,	// (0x0008ef3e) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0009b67b) bg_calc_paper_pane_g_ParamLimits

0x2a35,	// (0x0008ef4f) calc_bg_paper_pane_g9_ParamLimits

0x32a4,	// (0x0008f7be) image_qvga_pane_ParamLimits

0x32a4,	// (0x0008f7be) image_qvga_pane

0xb2fa,	// (0x00097814) bg_popup_sub_pane_cp04_ParamLimits

0xd07f,	// (0x00099599) popup_mup_playback_window_g1_ParamLimits

0xd08b,	// (0x000995a5) popup_mup_playback_window_t1_ParamLimits

0xd0a0,	// (0x000995ba) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0009ba07) popup_mup_playback_window_t_ParamLimits

0x6077,	// (0x00092591) main_mup2_pane_g3_ParamLimits

0x6077,	// (0x00092591) main_mup2_pane_g3

0x3670,	// (0x0008fb8a) popup_toolbar_window_cp04

0xd482,	// (0x0009999c) popup_call2_audio_second_window_g3_ParamLimits

0xd482,	// (0x0009999c) popup_call2_audio_second_window_g3

0xd88c,	// (0x00099da6) popup_call2_audio_first_window_g4_ParamLimits

0xd88c,	// (0x00099da6) popup_call2_audio_first_window_g4

0xdf0b,	// (0x0009a425) popup_call2_audio_in_window_g4_ParamLimits

0xdf0b,	// (0x0009a425) popup_call2_audio_in_window_g4

0x5485,	// (0x0009199f) aid_area_sk_bg_cut_ParamLimits

0x5485,	// (0x0009199f) aid_area_sk_bg_cut

0xd0b5,	// (0x000995cf) aid_area_sk_bg_cut_2_ParamLimits

0xd0b5,	// (0x000995cf) aid_area_sk_bg_cut_2

0x63f8,	// (0x00092912) aid_placing_details_win

0x6400,	// (0x0009291a) aid_placing_details_win_2

0xe7fe,	// (0x0009ad18) camera2_autofocus_pane_g1_ParamLimits

0x25a0,	// (0x0008eaba) popup_fixed_preview_cale_window_ParamLimits

0x25a0,	// (0x0008eaba) popup_fixed_preview_cale_window

0xcdf6,	// (0x00099310) navi_slider_pane_g3

0xcdff,	// (0x00099319) navi_slider_pane_g4

0xce08,	// (0x00099322) navi_slider_pane_g5

0xcdf6,	// (0x00099310) navi_slider_pane_g6

0x4ce2,	// (0x000911fc) navi_slider_pane_g7

0xcf1b,	// (0x00099435) mup_scale_pane_g3

0xcf24,	// (0x0009943e) mup_scale_pane_g4

0xcf2d,	// (0x00099447) mup_scale_pane_g5

0x5123,	// (0x0009163d) mup_scale_pane_g6

0x512c,	// (0x00091646) mup_scale_pane_g7

0xcdf6,	// (0x00099310) cams2_slider_pane_g3

0xe455,	// (0x0009a96f) cams2_slider_pane_g4

0x6350,	// (0x0009286a) cams2_slider_pane_g5

0xcdf6,	// (0x00099310) cams2_slider_pane_g6

0x6358,	// (0x00092872) cams2_slider_pane_g7

0xe689,	// (0x0009aba3) camera2_autofocus_pane_cp_g1

0xe26c,	// (0x0009a786) bg_popup_preview_window_pane_cp02_ParamLimits

0xe26c,	// (0x0009a786) bg_popup_preview_window_pane_cp02

0xea02,	// (0x0009af1c) list_fp_cale_pane_ParamLimits

0xea02,	// (0x0009af1c) list_fp_cale_pane

0xea0e,	// (0x0009af28) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x0009af28) popup_fixed_preview_cale_window_t1

0x6bcb,	// (0x000930e5) popup_fixed_preview_cale_window_t2_ParamLimits

0x6bcb,	// (0x000930e5) popup_fixed_preview_cale_window_t2

0x6be0,	// (0x000930fa) popup_fixed_preview_cale_window_t3_ParamLimits

0x6be0,	// (0x000930fa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0009bccf) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0009bccf) popup_fixed_preview_cale_window_t

0x6bf5,	// (0x0009310f) list_single_fp_cale_pane_ParamLimits

0x6bf5,	// (0x0009310f) list_single_fp_cale_pane

0xea2c,	// (0x0009af46) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x0009af46) list_single_fp_cale_pane_g1

0xea38,	// (0x0009af52) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x0009af52) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0009bcd6) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0009bcd6) list_single_fp_cale_pane_g

0xea51,	// (0x0009af6b) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x0009af6b) list_single_fp_cale_pane_t1

0xea63,	// (0x0009af7d) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x0009af7d) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0009bcdd) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0009bcdd) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2614,	// (0x0008eb2e) main_dialer_pane

0x6c08,	// (0x00093122) aid_cell_size_keypad

0x6c12,	// (0x0009312c) dialer_ne_pane

0x6c1c,	// (0x00093136) grid_dialer_command_1_pane

0x6c24,	// (0x0009313e) grid_dialer_command_2_pane

0x6c2c,	// (0x00093146) grid_dialer_keypad_pane

0x6c3e,	// (0x00093158) bg_popup_call_pane_cp06_ParamLimits

0x6c3e,	// (0x00093158) bg_popup_call_pane_cp06

0x6c4a,	// (0x00093164) dialer_ne_clear_pane_ParamLimits

0x6c4a,	// (0x00093164) dialer_ne_clear_pane

0xea96,	// (0x0009afb0) dialer_ne_pane_g1

0xea9e,	// (0x0009afb8) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x0009afb8) dialer_ne_pane_t1

0x6c56,	// (0x00093170) dialer_ne_pane_t2_ParamLimits

0x6c56,	// (0x00093170) dialer_ne_pane_t2

0x6c73,	// (0x0009318d) dialer_ne_pane_t3_ParamLimits

0x6c73,	// (0x0009318d) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0009bce2) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0009bce2) dialer_ne_pane_t

0x6c97,	// (0x000931b1) dialer_ne_pane_t3_copy1_ParamLimits

0x6c97,	// (0x000931b1) dialer_ne_pane_t3_copy1

0x6cbb,	// (0x000931d5) cell_dialer_keypad_pane_ParamLimits

0x6cbb,	// (0x000931d5) cell_dialer_keypad_pane

0x6cd2,	// (0x000931ec) cell_dialer_command_1_pane_ParamLimits

0x6cd2,	// (0x000931ec) cell_dialer_command_1_pane

0x6ce8,	// (0x00093202) cell_dialer_command_2_pane_ParamLimits

0x6ce8,	// (0x00093202) cell_dialer_command_2_pane

0xeab0,	// (0x0009afca) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x0009afca) bg_button_pane_cp02

0x6cf7,	// (0x00093211) cell_dialer_keypad_pane_g1_ParamLimits

0x6cf7,	// (0x00093211) cell_dialer_keypad_pane_g1

0xeab0,	// (0x0009afca) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x0009afca) bg_button_pane_cp03

0x6d0c,	// (0x00093226) cell_dialer_command_1_pane_g1_ParamLimits

0x6d0c,	// (0x00093226) cell_dialer_command_1_pane_g1

0xeabc,	// (0x0009afd6) bg_button_pane_cp04

0x6d20,	// (0x0009323a) cell_dialer_command_2_pane_g1

0xcde5,	// (0x000992ff) bg_button_pane_cp06

0xeac4,	// (0x0009afde) dialer_ne_clear_pane_g1

0x4c1d,	// (0x00091137) navi_pane_g2

0x4c4b,	// (0x00091165) navi_pane_g3

0x0002,

0xf3f0,	// (0x0009b90a) navi_pane_g

0x4c76,	// (0x00091190) navi_pane_mv_g2

0x4c9d,	// (0x000911b7) navi_pane_mv_g5

0x4ca5,	// (0x000911bf) navi_pane_mv_t1

0xb3bf,	// (0x000978d9) main_clock2_pane

0x6d5e,	// (0x00093278) main_clock2_list_pane_ParamLimits

0x6d5e,	// (0x00093278) main_clock2_list_pane

0x6d86,	// (0x000932a0) main_clock2_pane_t1_ParamLimits

0x6d86,	// (0x000932a0) main_clock2_pane_t1

0x6da8,	// (0x000932c2) main_clock2_pane_t2_ParamLimits

0x6da8,	// (0x000932c2) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0009bce9) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0009bce9) main_clock2_pane_t

0x6e03,	// (0x0009331d) popup_clock_analogue_window_cp03_ParamLimits

0x6e03,	// (0x0009331d) popup_clock_analogue_window_cp03

0x6e21,	// (0x0009333b) popup_clock_digital_window_cp02_ParamLimits

0x6e21,	// (0x0009333b) popup_clock_digital_window_cp02

0x6e8e,	// (0x000933a8) main_clock2_list_single_pane_ParamLimits

0x6e8e,	// (0x000933a8) main_clock2_list_single_pane

0xcde5,	// (0x000992ff) list_highlight_pane_cp05

0xeae2,	// (0x0009affc) main_clock2_list_single_pane_t1

0x3670,	// (0x0008fb8a) popup_toolbar_window_cp04_ParamLimits

0x6422,	// (0x0009293c) camera2_autofocus_pane_g2_ParamLimits

0x6422,	// (0x0009293c) camera2_autofocus_pane_g2

0x642e,	// (0x00092948) camera2_autofocus_pane_g3_ParamLimits

0x642e,	// (0x00092948) camera2_autofocus_pane_g3

0x643a,	// (0x00092954) camera2_autofocus_pane_g4_ParamLimits

0x643a,	// (0x00092954) camera2_autofocus_pane_g4

0x6446,	// (0x00092960) camera2_autofocus_pane_g5_ParamLimits

0x6446,	// (0x00092960) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0009bc32) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0009bc32) camera2_autofocus_pane_g

0xe989,	// (0x0009aea3) camera2_autofocus_pane_cp_g2

0xe991,	// (0x0009aeab) camera2_autofocus_pane_cp_g3

0xe999,	// (0x0009aeb3) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x0009aebb) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0009bc98) camera2_autofocus_pane_cp_g

0x6c36,	// (0x00093150) popup_dialer_spcha_window

0x0f56,	// (0x0008d470) bg_popup_sub_pane_cp07

0xeaf0,	// (0x0009b00a) list_spcha_pane

0xeaf8,	// (0x0009b012) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x0009b012) list_single_spcha_pane

0x0f56,	// (0x0008d470) list_highlight_pane_cp06

0xeb09,	// (0x0009b023) list_single_spcha_pane_t1

0xdcb5,	// (0x0009a1cf) popup_call2_audio_out_window_g4_ParamLimits

0xdcb5,	// (0x0009a1cf) popup_call2_audio_out_window_g4

0x2614,	// (0x0008eb2e) main_imed2_pane

0x5acc,	// (0x00091fe6) popup_imed_adjust2_window

0x5adf,	// (0x00091ff9) popup_imed_trans_window_ParamLimits

0x5adf,	// (0x00091ff9) popup_imed_trans_window

0xe4be,	// (0x0009a9d8) popup_blid_sat_info2_window_t1

0xe4cc,	// (0x0009a9e6) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0009bbc7) popup_blid_sat_info2_window_t

0x6f38,	// (0x00093452) aid_size_cell_colour_35

0x6f52,	// (0x0009346c) aid_size_cell_colour_112

0x6f69,	// (0x00093483) aid_size_cell_effect

0xcf3e,	// (0x00099458) bg_tb_trans_pane_cp02

0xcf4c,	// (0x00099466) heading_imed_pane

0x6f83,	// (0x0009349d) listscroll_imed_pane

0xeb17,	// (0x0009b031) heading_imed_pane_g1

0xeb1f,	// (0x0009b039) heading_imed_pane_t1

0xeb2d,	// (0x0009b047) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x0009b047) grid_imed_colour_35_pane

0x6f8f,	// (0x000934a9) grid_imed_effect_pane

0xeb44,	// (0x0009b05e) list_imed_aspect_pane

0x6f9f,	// (0x000934b9) scroll_pane_cp027_ParamLimits

0x6f9f,	// (0x000934b9) scroll_pane_cp027

0x6fab,	// (0x000934c5) cell_imed_effect_pane_ParamLimits

0x6fab,	// (0x000934c5) cell_imed_effect_pane

0xeb4c,	// (0x0009b066) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x0009b066) cell_imed_colour_pane

0xeb8e,	// (0x0009b0a8) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x0009b0a8) cell_imed_colour_pane_g1

0xeb9f,	// (0x0009b0b9) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x0009b0b9) hgihlgiht_grid_pane_cp016

0x6fc3,	// (0x000934dd) cell_imed_effect_pane_g1

0x6fcb,	// (0x000934e5) grid_highlight_pane_cp017

0xebb0,	// (0x0009b0ca) list_imed_single_pane_ParamLimits

0xebb0,	// (0x0009b0ca) list_imed_single_pane

0x0f56,	// (0x0008d470) list_highlight_pane_cp07

0xebc5,	// (0x0009b0df) list_imed_aspect_pane_comp1_t1

0xe278,	// (0x0009a792) bg_tb_trans_pane_cp05

0xebe7,	// (0x0009b101) popup_imed_adjust2_window_g1

0xec0e,	// (0x0009b128) popup_imed_adjust2_window_t1

0xec26,	// (0x0009b140) slider_imed_adjust_pane

0xec3a,	// (0x0009b154) slider_imed_adjust_pane_g1

0xec4a,	// (0x0009b164) slider_imed_adjust_pane_g2

0xec5a,	// (0x0009b174) slider_imed_adjust_pane_g3

0xec6b,	// (0x0009b185) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0009bd06) slider_imed_adjust_pane_g

0x6fd4,	// (0x000934ee) aid_size_cell_clipart2

0x6fe0,	// (0x000934fa) grid_imed_clipart_pane

0xec7c,	// (0x0009b196) scroll_pane_cp031

0x6fea,	// (0x00093504) cell_imed_clipart_pane_ParamLimits

0x6fea,	// (0x00093504) cell_imed_clipart_pane

0x700c,	// (0x00093526) cell_imed_clipart_pane_g1

0x0f56,	// (0x0008d470) grid_highlight_pane_cp014

0x6d6a,	// (0x00093284) main_clock2_pane_g1_ParamLimits

0x6d6a,	// (0x00093284) main_clock2_pane_g1

0x6e39,	// (0x00093353) aid_call2_pane_cp10

0x6e4b,	// (0x00093365) aid_call_pane_cp10

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g1

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g2

0x6e5d,	// (0x00093377) popup_clock_analogue_window_cp10_g3

0x6e5d,	// (0x00093377) popup_clock_analogue_window_cp10_g4

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0009bcf4) popup_clock_analogue_window_cp10_g

0x6e6f,	// (0x00093389) popup_clock_analogue_window_cp10_t1

0x6ea0,	// (0x000933ba) clock_digital_number_pane_cp10_ParamLimits

0x6ea0,	// (0x000933ba) clock_digital_number_pane_cp10

0x6eb8,	// (0x000933d2) clock_digital_number_pane_cp11_ParamLimits

0x6eb8,	// (0x000933d2) clock_digital_number_pane_cp11

0x6ed0,	// (0x000933ea) clock_digital_number_pane_cp12_ParamLimits

0x6ed0,	// (0x000933ea) clock_digital_number_pane_cp12

0x6ee8,	// (0x00093402) clock_digital_number_pane_cp13_ParamLimits

0x6ee8,	// (0x00093402) clock_digital_number_pane_cp13

0x6f00,	// (0x0009341a) clock_digital_separator_pane_cp10_ParamLimits

0x6f00,	// (0x0009341a) clock_digital_separator_pane_cp10

0x6f18,	// (0x00093432) popup_clock_digital_window_cp02_t1_ParamLimits

0x6f18,	// (0x00093432) popup_clock_digital_window_cp02_t1

0xb2f2,	// (0x0009780c) clock_digital_number_pane_cp10_g1

0xb2f2,	// (0x0009780c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0009bd0f) clock_digital_number_pane_cp10_g

0xb2f2,	// (0x0009780c) clock_digital_separator_pane_cp10_g1

0xb2f2,	// (0x0009780c) clock_digital_separator_pane_g2_cp10

0xcdb5,	// (0x000992cf) navi_pane_vded_g4

0xcdbe,	// (0x000992d8) navi_pane_vded_g5

0xcdc7,	// (0x000992e1) navi_pane_vded_t1

0x2614,	// (0x0008eb2e) main_vded_pane

0x7015,	// (0x0009352f) main_vded_pane_g1

0x7021,	// (0x0009353b) main_vded_pane_g2

0x702b,	// (0x00093545) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0009bd14) main_vded_pane_g

0x7035,	// (0x0009354f) main_vded_pane_t1

0x7043,	// (0x0009355d) main_vded_pane_t2

0x0001,

0xf801,	// (0x0009bd1b) main_vded_pane_t

0x7051,	// (0x0009356b) vded_slider_pane

0x705b,	// (0x00093575) vded_video_pane

0xec84,	// (0x0009b19e) vded_video_pane_g1

0x7065,	// (0x0009357f) vded_video_pane_g2

0xe689,	// (0x0009aba3) vded_video_pane_g3

0x0002,

0xf806,	// (0x0009bd20) vded_video_pane_g

0xec8e,	// (0x0009b1a8) vded_slider_pane_g1

0xe3d3,	// (0x0009a8ed) vded_slider_pane_g2

0xec97,	// (0x0009b1b1) vded_slider_pane_g3

0xeca0,	// (0x0009b1ba) vded_slider_pane_g4

0xeca9,	// (0x0009b1c3) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0009bd27) vded_slider_pane_g

0x6b3a,	// (0x00093054) mup3_rocker_pane_ParamLimits

0x6b3a,	// (0x00093054) mup3_rocker_pane

0x706e,	// (0x00093588) mup3_control_keys_pane_g1

0x7076,	// (0x00093590) mup3_control_keys_pane_g2

0x707e,	// (0x00093598) mup3_control_keys_pane_g3

0x7086,	// (0x000935a0) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0009bd32) mup3_control_keys_pane_g

0x25c8,	// (0x0008eae2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x25c8,	// (0x0008eae2) popup_toolbar2_fixed_window_cp01

0x6b54,	// (0x0009306e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6b54,	// (0x0009306e) popup_toolbar2_fixed_window_cp02

0xd5f4,	// (0x00099b0e) popup_call2_audio_second_window_t4_ParamLimits

0xd5f4,	// (0x00099b0e) popup_call2_audio_second_window_t4

0xdb22,	// (0x0009a03c) popup_call2_audio_first_window_t6_ParamLimits

0xdb22,	// (0x0009a03c) popup_call2_audio_first_window_t6

0xddb8,	// (0x0009a2d2) popup_call2_audio_out_window_t6_ParamLimits

0xddb8,	// (0x0009a2d2) popup_call2_audio_out_window_t6

0x2614,	// (0x0008eb2e) main_vitu_pane

0x7096,	// (0x000935b0) aid_size_cell_itu_ParamLimits

0x7096,	// (0x000935b0) aid_size_cell_itu

0xcf58,	// (0x00099472) bg_popup_window_pane_cp08_ParamLimits

0xcf58,	// (0x00099472) bg_popup_window_pane_cp08

0x70a4,	// (0x000935be) field_vitu_entry_pane_ParamLimits

0x70a4,	// (0x000935be) field_vitu_entry_pane

0x70b3,	// (0x000935cd) grid_vitu_function_pane_ParamLimits

0x70b3,	// (0x000935cd) grid_vitu_function_pane

0x70c3,	// (0x000935dd) grid_vitu_itu_pane_ParamLimits

0x70c3,	// (0x000935dd) grid_vitu_itu_pane

0x70d3,	// (0x000935ed) cell_vitu_itu_pane_ParamLimits

0x70d3,	// (0x000935ed) cell_vitu_itu_pane

0x70e8,	// (0x00093602) cell_vitu_function_pane_ParamLimits

0x70e8,	// (0x00093602) cell_vitu_function_pane

0xcf3e,	// (0x00099458) bg_popup_sub_pane_cp08_ParamLimits

0xcf3e,	// (0x00099458) bg_popup_sub_pane_cp08

0x70fa,	// (0x00093614) field_vitu_entry_pane_t1_ParamLimits

0x70fa,	// (0x00093614) field_vitu_entry_pane_t1

0xecca,	// (0x0009b1e4) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x0009b1e4) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0009bd40) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0009bd40) field_vitu_entry_pane_t

0xece7,	// (0x0009b201) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x0009b201) bg_button_pane_cp05

0x7116,	// (0x00093630) cell_vitu_itu_pane_g1

0x712e,	// (0x00093648) cell_vitu_itu_pane_t1_ParamLimits

0x712e,	// (0x00093648) cell_vitu_itu_pane_t1

0x7140,	// (0x0009365a) cell_vitu_itu_pane_t2_ParamLimits

0x7140,	// (0x0009365a) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0009bd45) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0009bd45) cell_vitu_itu_pane_t

0xecf5,	// (0x0009b20f) bg_button_pane_cp07

0x7175,	// (0x0009368f) cell_vitu_function_pane_g1

0x28a6,	// (0x0008edc0) main_calc_pane_g1

0x2385,	// (0x0008e89f) aid_visual_content_pane

0x2614,	// (0x0008eb2e) main_vradio_pane

0x717e,	// (0x00093698) main_vradio_pane_g1_ParamLimits

0x717e,	// (0x00093698) main_vradio_pane_g1

0xecff,	// (0x0009b219) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x0009b219) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0009bd4c) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0009bd4c) main_vradio_pane_g

0x718e,	// (0x000936a8) main_vradio_pane_t1_ParamLimits

0x718e,	// (0x000936a8) main_vradio_pane_t1

0x71a0,	// (0x000936ba) main_vradio_pane_t2_ParamLimits

0x71a0,	// (0x000936ba) main_vradio_pane_t2

0xed0c,	// (0x0009b226) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x0009b226) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0009bd51) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0009bd51) main_vradio_pane_t

0x71b2,	// (0x000936cc) vradio_rocker_control_pane_ParamLimits

0x71b2,	// (0x000936cc) vradio_rocker_control_pane

0x71be,	// (0x000936d8) vradio_station_info_pane_ParamLimits

0x71be,	// (0x000936d8) vradio_station_info_pane

0xed20,	// (0x0009b23a) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x0009b23a) vradio_frequency_info_pane

0xe689,	// (0x0009aba3) vradio_station_info_pane_g1

0xed2f,	// (0x0009b249) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x0009b249) vradio_station_info_pane_t1

0xed51,	// (0x0009b26b) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x0009b26b) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0009bd58) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0009bd58) vradio_station_info_pane_t

0xed63,	// (0x0009b27d) vradio_tuning_pane

0xed6b,	// (0x0009b285) vradio_rocker_control_pane_g1

0xed73,	// (0x0009b28d) vradio_rocker_control_pane_g2

0xed7b,	// (0x0009b295) vradio_rocker_control_pane_g3

0xed83,	// (0x0009b29d) vradio_rocker_control_pane_g4

0xed8b,	// (0x0009b2a5) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0009bd5d) vradio_rocker_control_pane_g

0x71cd,	// (0x000936e7) vradio_frequency_info_pane_g1

0xed93,	// (0x0009b2ad) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x0009b2ad) vradio_frequency_info_pane_t1

0x71d7,	// (0x000936f1) vradio_tuning_pane_g1

0x71e0,	// (0x000936fa) vradio_tuning_pane_t1

0x23ce,	// (0x0008e8e8) area_side_right_pane_ParamLimits

0x23ce,	// (0x0008e8e8) area_side_right_pane

0xe233,	// (0x0009a74d) status_small_pane_g1

0xe23b,	// (0x0009a755) status_small_pane_g2

0xe244,	// (0x0009a75e) status_small_pane_g3

0xe24d,	// (0x0009a767) status_small_pane_g4

0x0003,

0xf603,	// (0x0009bb1d) status_small_pane_g

0xe256,	// (0x0009a770) status_small_pane_t1

0x2614,	// (0x0008eb2e) main_video3_pane

0xeda7,	// (0x0009b2c1) cams_zoom_vslider_pane

0xedaf,	// (0x0009b2c9) image3_wide_pane_ParamLimits

0xedaf,	// (0x0009b2c9) image3_wide_pane

0xedc9,	// (0x0009b2e3) image3_wide_small_pane

0xedd5,	// (0x0009b2ef) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x0009b2ef) main_video3_pane_g1

0xedf1,	// (0x0009b30b) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x0009b30b) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0009bd68) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0009bd68) main_video3_pane_g

0xee0d,	// (0x0009b327) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x0009b327) main_video3_pane_t1

0xee38,	// (0x0009b352) main_video3_pane_t2_ParamLimits

0xee38,	// (0x0009b352) main_video3_pane_t2

0xee63,	// (0x0009b37d) main_video3_pane_t3_ParamLimits

0xee63,	// (0x0009b37d) main_video3_pane_t3

0x0002,

0xf853,	// (0x0009bd6d) main_video3_pane_t_ParamLimits

0xf853,	// (0x0009bd6d) main_video3_pane_t

0xee90,	// (0x0009b3aa) cams_zoom_vslider_pane_g1

0xee99,	// (0x0009b3b3) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0009bd74) cams_zoom_vslider_pane_g

0xeea1,	// (0x0009b3bb) small_slider_vertical_pane

0xe689,	// (0x0009aba3) small_slider_vertical_pane_g1

0xe689,	// (0x0009aba3) small_slider_vertical_pane_g2

0xeea9,	// (0x0009b3c3) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0009bd79) small_slider_vertical_pane_g

0x2614,	// (0x0008eb2e) main_hwr_training_pane

0xeeb2,	// (0x0009b3cc) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x0009b3cc) hwr_training_instruct_pane

0x71ef,	// (0x00093709) hwr_training_navi_pane_ParamLimits

0x71ef,	// (0x00093709) hwr_training_navi_pane

0x7209,	// (0x00093723) hwr_training_write_pane_ParamLimits

0x7209,	// (0x00093723) hwr_training_write_pane

0x0f56,	// (0x0008d470) bg_frame_shadow_pane

0xeee9,	// (0x0009b403) hwr_training_write_pane_g1

0xeef1,	// (0x0009b40b) hwr_training_write_pane_g2

0xeef9,	// (0x0009b413) hwr_training_write_pane_g3

0xef01,	// (0x0009b41b) hwr_training_write_pane_g4

0xef09,	// (0x0009b423) hwr_training_write_pane_g5

0xef11,	// (0x0009b42b) hwr_training_write_pane_g6

0xef19,	// (0x0009b433) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0009bd80) hwr_training_write_pane_g

0x7241,	// (0x0009375b) hwr_training_navi_pane_g1_ParamLimits

0x7241,	// (0x0009375b) hwr_training_navi_pane_g1

0x7253,	// (0x0009376d) hwr_training_navi_pane_g2_ParamLimits

0x7253,	// (0x0009376d) hwr_training_navi_pane_g2

0x7265,	// (0x0009377f) hwr_training_navi_pane_g3_ParamLimits

0x7265,	// (0x0009377f) hwr_training_navi_pane_g3

0x7275,	// (0x0009378f) hwr_training_navi_pane_g4_ParamLimits

0x7275,	// (0x0009378f) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0009bd8f) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0009bd8f) hwr_training_navi_pane_g

0x728f,	// (0x000937a9) hwr_training_navi_pane_t1

0x729d,	// (0x000937b7) list_single_hwr_training_instruct_pane_ParamLimits

0x729d,	// (0x000937b7) list_single_hwr_training_instruct_pane

0xef21,	// (0x0009b43b) list_single_hwr_training_instruct_pane_t1

0xe5c9,	// (0x0009aae3) bg_frame_shadow_pane_g1

0xef30,	// (0x0009b44a) bg_frame_shadow_pane_g2

0xef38,	// (0x0009b452) bg_frame_shadow_pane_g3

0xef40,	// (0x0009b45a) bg_frame_shadow_pane_g4

0xef48,	// (0x0009b462) bg_frame_shadow_pane_g5

0xef50,	// (0x0009b46a) bg_frame_shadow_pane_g6

0xef58,	// (0x0009b472) bg_frame_shadow_pane_g7

0xb478,	// (0x00097992) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0009bd9a) bg_frame_shadow_pane_g

0x2614,	// (0x0008eb2e) main_video_tele_dialer_pane

0x72c2,	// (0x000937dc) aid_size_cell_video_keypad_ParamLimits

0x72c2,	// (0x000937dc) aid_size_cell_video_keypad

0x72d2,	// (0x000937ec) grid_video_dialer_keypad_pane_ParamLimits

0x72d2,	// (0x000937ec) grid_video_dialer_keypad_pane

0x7306,	// (0x00093820) video_down_pane_cp_ParamLimits

0x7306,	// (0x00093820) video_down_pane_cp

0x7330,	// (0x0009384a) cell_video_dialer_keypad_pane_ParamLimits

0x7330,	// (0x0009384a) cell_video_dialer_keypad_pane

0xef60,	// (0x0009b47a) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x0009b47a) bg_button_pane_cp08

0x7345,	// (0x0009385f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7345,	// (0x0009385f) cell_video_dialer_keypad_pane_g1

0x6b2e,	// (0x00093048) mup3_rocker2_pane_ParamLimits

0x6b2e,	// (0x00093048) mup3_rocker2_pane

0xe689,	// (0x0009aba3) mup3_rocker2_pane_g1

0x5a3c,	// (0x00091f56) main_dialer2_pane

0x2614,	// (0x0008eb2e) main_mp4_pane

0x7384,	// (0x0009389e) main_mp4_pane_g1_ParamLimits

0x7384,	// (0x0009389e) main_mp4_pane_g1

0x7392,	// (0x000938ac) main_mp4_pane_g2_ParamLimits

0x7392,	// (0x000938ac) main_mp4_pane_g2

0x73a0,	// (0x000938ba) main_mp4_pane_g3_ParamLimits

0x73a0,	// (0x000938ba) main_mp4_pane_g3

0x73e5,	// (0x000938ff) main_mp4_pane_g4_ParamLimits

0x73e5,	// (0x000938ff) main_mp4_pane_g4

0x740d,	// (0x00093927) main_mp4_pane_g5_ParamLimits

0x740d,	// (0x00093927) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0009bdba) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0009bdba) main_mp4_pane_g

0x745d,	// (0x00093977) main_mp4_pane_t1_ParamLimits

0x745d,	// (0x00093977) main_mp4_pane_t1

0x74b9,	// (0x000939d3) main_mp4_pane_t2_ParamLimits

0x74b9,	// (0x000939d3) main_mp4_pane_t2

0xef6c,	// (0x0009b486) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x0009b486) main_mp4_pane_t3

0x750b,	// (0x00093a25) main_mp4_pane_t4_ParamLimits

0x750b,	// (0x00093a25) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0009bdc7) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0009bdc7) main_mp4_pane_t

0x754f,	// (0x00093a69) mp4_progress_pane_ParamLimits

0x754f,	// (0x00093a69) mp4_progress_pane

0x7599,	// (0x00093ab3) mp4_rocker_pane_ParamLimits

0x7599,	// (0x00093ab3) mp4_rocker_pane

0xef94,	// (0x0009b4ae) mp4_progress_pane_t1

0xefad,	// (0x0009b4c7) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0009bdd0) mp4_progress_pane_t

0xefc6,	// (0x0009b4e0) mup_progress_pane_cp04

0x0b5a,	// (0x0008d074) mp4_rocker_pane_g1

0x75b9,	// (0x00093ad3) aid_cell_size_keypad2_ParamLimits

0x75b9,	// (0x00093ad3) aid_cell_size_keypad2

0x75c9,	// (0x00093ae3) dialer2_ne_pane_ParamLimits

0x75c9,	// (0x00093ae3) dialer2_ne_pane

0x75d7,	// (0x00093af1) grid_dialer2_keypad_pane_ParamLimits

0x75d7,	// (0x00093af1) grid_dialer2_keypad_pane

0x0bc3,	// (0x0008d0dd) bg_popup_call_pane_cp07_ParamLimits

0x0bc3,	// (0x0008d0dd) bg_popup_call_pane_cp07

0x75e7,	// (0x00093b01) dialer2_ne_pane_t1_ParamLimits

0x75e7,	// (0x00093b01) dialer2_ne_pane_t1

0x760c,	// (0x00093b26) cell_dialer2_keypad_pane_ParamLimits

0x760c,	// (0x00093b26) cell_dialer2_keypad_pane

0xefe4,	// (0x0009b4fe) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x0009b4fe) bg_button_pane_pane_cp04

0x7621,	// (0x00093b3b) cell_dialer2_keypad_pane_g1_ParamLimits

0x7621,	// (0x00093b3b) cell_dialer2_keypad_pane_g1

0x3532,	// (0x0008fa4c) aid_placing_vt_set_content_ParamLimits

0x3532,	// (0x0008fa4c) aid_placing_vt_set_content

0x355e,	// (0x0008fa78) aid_placing_vt_set_title_ParamLimits

0x355e,	// (0x0008fa78) aid_placing_vt_set_title

0x2614,	// (0x0008eb2e) main_image3_pane

0x76bb,	// (0x00093bd5) area_side_right_pane_cp01_ParamLimits

0x76bb,	// (0x00093bd5) area_side_right_pane_cp01

0x76e8,	// (0x00093c02) main_image3_pane_g1_ParamLimits

0x76e8,	// (0x00093c02) main_image3_pane_g1

0x76f6,	// (0x00093c10) main_image3_pane_g2_ParamLimits

0x76f6,	// (0x00093c10) main_image3_pane_g2

0x770f,	// (0x00093c29) main_image3_pane_g3_ParamLimits

0x770f,	// (0x00093c29) main_image3_pane_g3

0x7728,	// (0x00093c42) main_image3_pane_g4_ParamLimits

0x7728,	// (0x00093c42) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0009bddf) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0009bddf) main_image3_pane_g

0x7741,	// (0x00093c5b) main_image3_pane_t1_ParamLimits

0x7741,	// (0x00093c5b) main_image3_pane_t1

0x7766,	// (0x00093c80) main_image3_pane_t2_ParamLimits

0x7766,	// (0x00093c80) main_image3_pane_t2

0x7785,	// (0x00093c9f) main_image3_pane_t3_ParamLimits

0x7785,	// (0x00093c9f) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0009bde8) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0009bde8) main_image3_pane_t

0xcf58,	// (0x00099472) grid_sctrl_middle_pane_cp01_ParamLimits

0xcf58,	// (0x00099472) grid_sctrl_middle_pane_cp01

0x77e6,	// (0x00093d00) cell_sctrl_middle_pane_cp01_ParamLimits

0x77e6,	// (0x00093d00) cell_sctrl_middle_pane_cp01

0x77f7,	// (0x00093d11) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x77f7,	// (0x00093d11) cell_sctrl_middle_pane_cp01_g1

0x2614,	// (0x0008eb2e) main_call4_pane

0x7804,	// (0x00093d1e) aid_size_button_call4_ParamLimits

0x7804,	// (0x00093d1e) aid_size_button_call4

0x7834,	// (0x00093d4e) call4_windows_pane_ParamLimits

0x7834,	// (0x00093d4e) call4_windows_pane

0x784e,	// (0x00093d68) grid_call4_button_pane_ParamLimits

0x784e,	// (0x00093d68) grid_call4_button_pane

0xeff0,	// (0x0009b50a) call4_windows_conf_pane

0xf007,	// (0x0009b521) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x0009b521) popup_call4_audio_first_window

0xf053,	// (0x0009b56d) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x0009b56d) popup_call4_audio_second_window

0xf067,	// (0x0009b581) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x0009b581) popup_call4_audio_wait_window

0x7872,	// (0x00093d8c) cell_call4_button_pane_ParamLimits

0x7872,	// (0x00093d8c) cell_call4_button_pane

0x7897,	// (0x00093db1) bg_button_pane_cp09_ParamLimits

0x7897,	// (0x00093db1) bg_button_pane_cp09

0x78a3,	// (0x00093dbd) cell_call4_button_pane_g1_ParamLimits

0x78a3,	// (0x00093dbd) cell_call4_button_pane_g1

0x78b0,	// (0x00093dca) cell_call4_button_pane_t1_ParamLimits

0x78b0,	// (0x00093dca) cell_call4_button_pane_t1

0xf0af,	// (0x0009b5c9) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x0009b5c9) popup_call4_audio_conf_window

0x6b61,	// (0x0009307b) mup3_progress_pane_t1_ParamLimits

0x6b80,	// (0x0009309a) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x0009aed9) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0009bcc1) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x0009aef6) mup_progress_pane_cp03_ParamLimits

0x708e,	// (0x000935a8) mup3_control_keys_pane_g4_copy1

0x757d,	// (0x00093a97) mp4_rocker2_pane_ParamLimits

0x757d,	// (0x00093a97) mp4_rocker2_pane

0xf0c3,	// (0x0009b5dd) mp4_rocker2_pane_g1

0xf0cb,	// (0x0009b5e5) mp4_rocker2_pane_g2

0x78c2,	// (0x00093ddc) mp4_rocker2_pane_g3

0x78ca,	// (0x00093de4) mp4_rocker2_pane_g4

0x78d2,	// (0x00093dec) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0009bdf1) mp4_rocker2_pane_g

0x2614,	// (0x0008eb2e) main_camera4_pane

0x2614,	// (0x0008eb2e) main_video4_pane

0x72e2,	// (0x000937fc) main_video_tele_dialer_pane_t1_ParamLimits

0x72e2,	// (0x000937fc) main_video_tele_dialer_pane_t1

0x72f4,	// (0x0009380e) main_video_tele_dialer_pane_t2_ParamLimits

0x72f4,	// (0x0009380e) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0009bdab) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0009bdab) main_video_tele_dialer_pane_t

0x78f2,	// (0x00093e0c) cam4_autofocus_pane_ParamLimits

0x78f2,	// (0x00093e0c) cam4_autofocus_pane

0x790c,	// (0x00093e26) cam4_image_uncrop_pane_ParamLimits

0x790c,	// (0x00093e26) cam4_image_uncrop_pane

0x7923,	// (0x00093e3d) cam4_indicators_pane_ParamLimits

0x7923,	// (0x00093e3d) cam4_indicators_pane

0x793f,	// (0x00093e59) main_camera4_pane_g1_ParamLimits

0x793f,	// (0x00093e59) main_camera4_pane_g1

0x794b,	// (0x00093e65) main_camera4_pane_g2_ParamLimits

0x794b,	// (0x00093e65) main_camera4_pane_g2

0x794b,	// (0x00093e65) main_camera4_pane_g3_ParamLimits

0x794b,	// (0x00093e65) main_camera4_pane_g3

0x7957,	// (0x00093e71) main_camera4_pane_g4_ParamLimits

0x7957,	// (0x00093e71) main_camera4_pane_g4

0x7963,	// (0x00093e7d) main_camera4_pane_g5_ParamLimits

0x7963,	// (0x00093e7d) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0009bdfc) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0009bdfc) main_camera4_pane_g

0x797d,	// (0x00093e97) main_camera4_pane_t1_ParamLimits

0x797d,	// (0x00093e97) main_camera4_pane_t1

0x79c5,	// (0x00093edf) bg_tb_trans_pane_cp06

0x79db,	// (0x00093ef5) cam4_indicators_pane_g1

0x79ec,	// (0x00093f06) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0009be17) cam4_indicators_pane_g

0x7a0a,	// (0x00093f24) cam4_indicators_pane_t1

0x7a34,	// (0x00093f4e) main_video4_pane_g1_ParamLimits

0x7a34,	// (0x00093f4e) main_video4_pane_g1

0x7a40,	// (0x00093f5a) main_video4_pane_g2_ParamLimits

0x7a40,	// (0x00093f5a) main_video4_pane_g2

0x7a4c,	// (0x00093f66) main_video4_pane_g3_ParamLimits

0x7a4c,	// (0x00093f66) main_video4_pane_g3

0x7a58,	// (0x00093f72) main_video4_pane_g4_ParamLimits

0x7a58,	// (0x00093f72) main_video4_pane_g4

0x0004,

0xf904,	// (0x0009be1e) main_video4_pane_g_ParamLimits

0xf904,	// (0x0009be1e) main_video4_pane_g

0x7a78,	// (0x00093f92) vid4_indicators_pane_ParamLimits

0x7a78,	// (0x00093f92) vid4_indicators_pane

0x7a97,	// (0x00093fb1) video4_image_uncrop_cif_pane_ParamLimits

0x7a97,	// (0x00093fb1) video4_image_uncrop_cif_pane

0x7aa6,	// (0x00093fc0) video4_image_uncrop_nhd_pane_ParamLimits

0x7aa6,	// (0x00093fc0) video4_image_uncrop_nhd_pane

0x790c,	// (0x00093e26) video4_image_uncrop_vga_pane_ParamLimits

0x790c,	// (0x00093e26) video4_image_uncrop_vga_pane

0x5a2e,	// (0x00091f48) bg_tb_trans_pane_cp07

0x7abd,	// (0x00093fd7) vid4_indicators_pane_g1

0x7ad1,	// (0x00093feb) vid4_indicators_pane_g2

0x7ae5,	// (0x00093fff) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0009be29) vid4_indicators_pane_g

0x7b14,	// (0x0009402e) vid4_indicators_pane_t1

0x7b2b,	// (0x00094045) cam4_autofocus_pane_g1

0x7b33,	// (0x0009404d) cam4_autofocus_pane_g2

0x7b3b,	// (0x00094055) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0009be34) cam4_autofocus_pane_g

0x7b43,	// (0x0009405d) cam4_autofocus_pane_g3_copy1

0x7314,	// (0x0009382e) video_down_pane_cp_t1

0x7322,	// (0x0009383c) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0009bdb0) video_down_pane_cp_t

0x25fa,	// (0x0008eb14) popup_vitu2_window_ParamLimits

0x25fa,	// (0x0008eb14) popup_vitu2_window

0x7b4b,	// (0x00094065) aid_size_cell2_itu2_ParamLimits

0x7b4b,	// (0x00094065) aid_size_cell2_itu2

0x7b6d,	// (0x00094087) aid_size_cell_itu2_ParamLimits

0x7b6d,	// (0x00094087) aid_size_cell_itu2

0x7bb1,	// (0x000940cb) bg_popup_window_pane_cp09_ParamLimits

0x7bb1,	// (0x000940cb) bg_popup_window_pane_cp09

0x7bbf,	// (0x000940d9) field_vitu2_entry_pane_ParamLimits

0x7bbf,	// (0x000940d9) field_vitu2_entry_pane

0x7bdf,	// (0x000940f9) grid_vitu2_function_pane_ParamLimits

0x7bdf,	// (0x000940f9) grid_vitu2_function_pane

0x7c23,	// (0x0009413d) grid_vitu2_itu_pane_ParamLimits

0x7c23,	// (0x0009413d) grid_vitu2_itu_pane

0x7c9b,	// (0x000941b5) cell_vitu2_itu_pane_ParamLimits

0x7c9b,	// (0x000941b5) cell_vitu2_itu_pane

0x7cb0,	// (0x000941ca) cell_vitu2_function_pane_ParamLimits

0x7cb0,	// (0x000941ca) cell_vitu2_function_pane

0x0413,	// (0x0008c92d) bg_popup_call_pane_cp08_ParamLimits

0x0413,	// (0x0008c92d) bg_popup_call_pane_cp08

0x042c,	// (0x0008c946) field_vitu2_entry_pane_g1

0x0438,	// (0x0008c952) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0009be3b) field_vitu2_entry_pane_g

0x001e,	// (0x0008c538) field_vitu2_entry_pane_t1_ParamLimits

0x001e,	// (0x0008c538) field_vitu2_entry_pane_t1

0x004d,	// (0x0008c567) field_vitu2_entry_pane_t2_ParamLimits

0x004d,	// (0x0008c567) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0009be42) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0009be42) field_vitu2_entry_pane_t

0x7cef,	// (0x00094209) bg_button_pane_cp010_ParamLimits

0x7cef,	// (0x00094209) bg_button_pane_cp010

0x7cfd,	// (0x00094217) cell_vitu2_itu_pane_g1

0x7d1b,	// (0x00094235) cell_vitu2_itu_pane_t1_ParamLimits

0x7d1b,	// (0x00094235) cell_vitu2_itu_pane_t1

0x2276,	// (0x0008e790) cell_vitu2_itu_pane_t2_ParamLimits

0x2276,	// (0x0008e790) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0009be4c) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0009be4c) cell_vitu2_itu_pane_t

0x5a2e,	// (0x00091f48) bg_button_pane_cp011

0x7d6d,	// (0x00094287) cell_vitu2_function_pane_g1

0x2614,	// (0x0008eb2e) main_myfav_hc_pane

0x77c7,	// (0x00093ce1) popup_image3_note_pane_ParamLimits

0x77c7,	// (0x00093ce1) popup_image3_note_pane

0x77d5,	// (0x00093cef) popup_image3_tool_bar_pane_ParamLimits

0x77d5,	// (0x00093cef) popup_image3_tool_bar_pane

0x22e4,	// (0x0008e7fe) cell_vitu2_itu_pane_t3_ParamLimits

0x22e4,	// (0x0008e7fe) cell_vitu2_itu_pane_t3

0x0f56,	// (0x0008d470) bg_popup_trans_pane

0x045a,	// (0x0008c974) grid_image3_tool_bar_pane

0x0464,	// (0x0008c97e) bg_popup_trans_pane_g1

0xb7e0,	// (0x00097cfa) bg_popup_trans_pane_g2

0x046c,	// (0x0008c986) bg_popup_trans_pane_g3

0x0474,	// (0x0008c98e) bg_popup_trans_pane_g4

0x047c,	// (0x0008c996) bg_popup_trans_pane_g5

0x0484,	// (0x0008c99e) bg_popup_trans_pane_g6

0x048c,	// (0x0008c9a6) bg_popup_trans_pane_g7

0x0494,	// (0x0008c9ae) bg_popup_trans_pane_g8

0xb7c0,	// (0x00097cda) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0009be53) bg_popup_trans_pane_g

0x049c,	// (0x0008c9b6) cell_image3_tool_bar_pane_ParamLimits

0x049c,	// (0x0008c9b6) cell_image3_tool_bar_pane

0xe689,	// (0x0009aba3) cell_image3_tool_bar_pane_g1

0x0f56,	// (0x0008d470) bg_popup_trans_pane_cp1

0x04b0,	// (0x0008c9ca) popup_image3_note_pane_t1

0x04be,	// (0x0008c9d8) popup_image3_note_pane_t2

0x04cc,	// (0x0008c9e6) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0009be66) popup_image3_note_pane_t

0x04da,	// (0x0008c9f4) popup_image3_note_pane_t3_copy1

0x7d81,	// (0x0009429b) bg_myfav_hc_instruction_pane_ParamLimits

0x7d81,	// (0x0009429b) bg_myfav_hc_instruction_pane

0x7d99,	// (0x000942b3) cell_myfav_contact_pane_ParamLimits

0x7d99,	// (0x000942b3) cell_myfav_contact_pane

0x7db3,	// (0x000942cd) cell_myfav_contact_pane_cp1_ParamLimits

0x7db3,	// (0x000942cd) cell_myfav_contact_pane_cp1

0x7dcb,	// (0x000942e5) cell_myfav_contact_pane_cp2_ParamLimits

0x7dcb,	// (0x000942e5) cell_myfav_contact_pane_cp2

0x7de3,	// (0x000942fd) cell_myfav_contact_pane_cp3_ParamLimits

0x7de3,	// (0x000942fd) cell_myfav_contact_pane_cp3

0x7dfa,	// (0x00094314) cell_myfav_contact_pane_cp4_ParamLimits

0x7dfa,	// (0x00094314) cell_myfav_contact_pane_cp4

0x7e10,	// (0x0009432a) cell_myfav_contact_pane_cp5_ParamLimits

0x7e10,	// (0x0009432a) cell_myfav_contact_pane_cp5

0x7e24,	// (0x0009433e) cell_myfav_contact_pane_cp6_ParamLimits

0x7e24,	// (0x0009433e) cell_myfav_contact_pane_cp6

0x7e38,	// (0x00094352) cell_myfav_contact_pane_cp7_ParamLimits

0x7e38,	// (0x00094352) cell_myfav_contact_pane_cp7

0x04e8,	// (0x0008ca02) listscroll_gen_pane_cp05

0x7e50,	// (0x0009436a) main_myfav_hc_pane_g1_ParamLimits

0x7e50,	// (0x0009436a) main_myfav_hc_pane_g1

0x7e66,	// (0x00094380) main_myfav_hc_pane_g2_ParamLimits

0x7e66,	// (0x00094380) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0009be6d) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0009be6d) main_myfav_hc_pane_g

0x7e94,	// (0x000943ae) main_myfav_hc_pane_t1_ParamLimits

0x7e94,	// (0x000943ae) main_myfav_hc_pane_t1

0x04f1,	// (0x0008ca0b) main_myfav_hc_pane_t2_ParamLimits

0x04f1,	// (0x0008ca0b) main_myfav_hc_pane_t2

0x0503,	// (0x0008ca1d) main_myfav_hc_pane_t3_ParamLimits

0x0503,	// (0x0008ca1d) main_myfav_hc_pane_t3

0x7eab,	// (0x000943c5) main_myfav_hc_pane_t4_ParamLimits

0x7eab,	// (0x000943c5) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0009be74) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0009be74) main_myfav_hc_pane_t

0xe689,	// (0x0009aba3) bg_myfav_hc_instruction_pane_g1

0x0515,	// (0x0008ca2f) cell_myfav_contact_pane_g1_ParamLimits

0x0515,	// (0x0008ca2f) cell_myfav_contact_pane_g1

0x0515,	// (0x0008ca2f) cell_myfav_contact_pane_g2_ParamLimits

0x0515,	// (0x0008ca2f) cell_myfav_contact_pane_g2

0x0521,	// (0x0008ca3b) cell_myfav_contact_pane_g3_ParamLimits

0x0521,	// (0x0008ca3b) cell_myfav_contact_pane_g3

0xe9a9,	// (0x0009aec3) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x0009aec3) cell_myfav_contact_pane_g4

0x052e,	// (0x0008ca48) cell_myfav_contact_pane_g5_ParamLimits

0x052e,	// (0x0008ca48) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0009be7f) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0009be7f) cell_myfav_contact_pane_g

0x7e7c,	// (0x00094396) main_myfav_hc_pane_g3_ParamLimits

0x7e7c,	// (0x00094396) main_myfav_hc_pane_g3

0x2503,	// (0x0008ea1d) popup_adpt_find_window

0x7ed5,	// (0x000943ef) afind_page_pane_ParamLimits

0x7ed5,	// (0x000943ef) afind_page_pane

0x7ee2,	// (0x000943fc) aid_size_cell_afind_ParamLimits

0x7ee2,	// (0x000943fc) aid_size_cell_afind

0x7efc,	// (0x00094416) bg_popup_sub_pane_cp09_ParamLimits

0x7efc,	// (0x00094416) bg_popup_sub_pane_cp09

0x7f09,	// (0x00094423) find_pane_cp01_ParamLimits

0x7f09,	// (0x00094423) find_pane_cp01

0x053a,	// (0x0008ca54) grid_afind_control_pane_ParamLimits

0x053a,	// (0x0008ca54) grid_afind_control_pane

0x7f16,	// (0x00094430) grid_afind_pane_ParamLimits

0x7f16,	// (0x00094430) grid_afind_pane

0x7f32,	// (0x0009444c) cell_afind_pane_ParamLimits

0x7f32,	// (0x0009444c) cell_afind_pane

0xe689,	// (0x0009aba3) afind_page_pane_g1

0x7f7a,	// (0x00094494) afind_page_pane_g2

0x7f83,	// (0x0009449d) afind_page_pane_g3

0x0002,

0xf970,	// (0x0009be8a) afind_page_pane_g

0x7f8c,	// (0x000944a6) afind_page_pane_t1

0x054e,	// (0x0008ca68) cell_afind_grid_control_pane_ParamLimits

0x054e,	// (0x0008ca68) cell_afind_grid_control_pane

0xefe4,	// (0x0009b4fe) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x0009b4fe) bg_button_pane_cp69

0x7fac,	// (0x000944c6) cell_afind_pane_g1_ParamLimits

0x7fac,	// (0x000944c6) cell_afind_pane_g1

0x7fb9,	// (0x000944d3) cell_afind_pane_t1_ParamLimits

0x7fb9,	// (0x000944d3) cell_afind_pane_t1

0xb5d9,	// (0x00097af3) bg_button_pane_cp72

0x055d,	// (0x0008ca77) cell_afind_grid_control_pane_g1

0x55ac,	// (0x00091ac6) aid_image_placing_area_ParamLimits

0x55ac,	// (0x00091ac6) aid_image_placing_area

0xecb2,	// (0x0009b1cc) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x0009b1cc) field_vitu_entry_pane_g1

0xecbe,	// (0x0009b1d8) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x0009b1d8) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0009bd3b) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0009bd3b) field_vitu_entry_pane_g

0x7116,	// (0x00093630) cell_vitu_itu_pane_g1_ParamLimits

0x7158,	// (0x00093672) cell_vitu_itu_pane_t3_ParamLimits

0x7158,	// (0x00093672) cell_vitu_itu_pane_t3

0xef94,	// (0x0009b4ae) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x0009b4c7) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0009bdd0) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x0009b4e0) mup_progress_pane_cp04_ParamLimits

0x7ebf,	// (0x000943d9) main_myfav_hc_pane_t5_ParamLimits

0x7ebf,	// (0x000943d9) main_myfav_hc_pane_t5

0x226e,	// (0x0008e788) aid_zoom_text_primary

0x2503,	// (0x0008ea1d) popup_adpt_find_window_ParamLimits

0x5a2e,	// (0x00091f48) main_cam_set_pane

0x7931,	// (0x00093e4b) cam4_zoom_pane_ParamLimits

0x7931,	// (0x00093e4b) cam4_zoom_pane

0x7fcb,	// (0x000944e5) main_cam_set_pane_g1_ParamLimits

0x7fcb,	// (0x000944e5) main_cam_set_pane_g1

0x7fd9,	// (0x000944f3) main_cam_set_pane_g2_ParamLimits

0x7fd9,	// (0x000944f3) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0009be91) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0009be91) main_cam_set_pane_g

0x7fe5,	// (0x000944ff) main_cam_set_pane_t1_ParamLimits

0x7fe5,	// (0x000944ff) main_cam_set_pane_t1

0x8001,	// (0x0009451b) main_cset_listscroll_pane_ParamLimits

0x8001,	// (0x0009451b) main_cset_listscroll_pane

0x802c,	// (0x00094546) main_cset_slider_pane_ParamLimits

0x802c,	// (0x00094546) main_cset_slider_pane

0x056e,	// (0x0008ca88) main_cset_list_pane_ParamLimits

0x056e,	// (0x0008ca88) main_cset_list_pane

0x057e,	// (0x0008ca98) scroll_pane_cp028

0x804b,	// (0x00094565) aid_area_touch_slider

0x8067,	// (0x00094581) cset_slider_pane

0x8091,	// (0x000945ab) main_cset_slider_pane_g1

0x80a6,	// (0x000945c0) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0009be96) main_cset_slider_pane_g

0x05b7,	// (0x0008cad1) main_cset_slider_pane_t1

0x8168,	// (0x00094682) main_cset_slider_pane_t2

0x8182,	// (0x0009469c) main_cset_slider_pane_t3

0x819c,	// (0x000946b6) main_cset_slider_pane_t4

0x81b6,	// (0x000946d0) main_cset_slider_pane_t5

0x81d4,	// (0x000946ee) main_cset_slider_pane_t6

0x81eb,	// (0x00094705) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0009bebb) main_cset_slider_pane_t

0x82f7,	// (0x00094811) cset_list_set_pane_ParamLimits

0x82f7,	// (0x00094811) cset_list_set_pane

0x830d,	// (0x00094827) aid_position_infowindow_above

0x8315,	// (0x0009482f) aid_position_infowindow_below

0x0657,	// (0x0008cb71) cset_list_set_pane_g1_ParamLimits

0x0657,	// (0x0008cb71) cset_list_set_pane_g1

0x006a,	// (0x0008c584) cset_list_set_pane_g3_ParamLimits

0x006a,	// (0x0008c584) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0009beda) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0009beda) cset_list_set_pane_g

0x0079,	// (0x0008c593) cset_list_set_pane_t1_ParamLimits

0x0079,	// (0x0008c593) cset_list_set_pane_t1

0xcf3e,	// (0x00099458) list_highlight_pane_cp021_ParamLimits

0xcf3e,	// (0x00099458) list_highlight_pane_cp021

0xcf1b,	// (0x00099435) cset_slider_pane_g1

0xcf2d,	// (0x00099447) cset_slider_pane_g2

0xcf24,	// (0x0009943e) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0009bedf) cset_slider_pane_g

0x831d,	// (0x00094837) aid_area_touch_cam4_zoom

0x8325,	// (0x0009483f) cam4_zoom_cont_pane

0x832d,	// (0x00094847) cam4_zoom_pane_g1

0x8335,	// (0x0009484f) cam4_zoom_pane_g2

0x833d,	// (0x00094857) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0009bee6) cam4_zoom_pane_g

0x8345,	// (0x0009485f) cam4_zoom_cont_pane_g1

0x834e,	// (0x00094868) cam4_zoom_cont_pane_g2

0x8357,	// (0x00094871) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0009beed) cam4_zoom_cont_pane_g

0x781e,	// (0x00093d38) call4_image_pane_ParamLimits

0x781e,	// (0x00093d38) call4_image_pane

0xeff0,	// (0x0009b50a) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x0009b54b) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x0009b54b) popup_call4_audio_in_window

0x0f56,	// (0x0008d470) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x0009b5c1) call4_list_conf_pane

0xe689,	// (0x0009aba3) call4_image_pane_g1

0xe689,	// (0x0009aba3) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0009bc01) call4_image_pane_g

0x069e,	// (0x0008cbb8) list_single_graphic_popup_conf4_pane_ParamLimits

0x069e,	// (0x0008cbb8) list_single_graphic_popup_conf4_pane

0x0f56,	// (0x0008d470) list_highlight_pane_cp022

0x06b1,	// (0x0008cbcb) list_single_graphic_popup_conf4_pane_g1

0xcbea,	// (0x00099104) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0009bef4) list_single_graphic_popup_conf4_pane_g

0x06b9,	// (0x0008cbd3) list_single_graphic_popup_conf4_pane_t1

0x36c2,	// (0x0008fbdc) popup_vtel_slider_window_ParamLimits

0x36c2,	// (0x0008fbdc) popup_vtel_slider_window

0xefd2,	// (0x0009b4ec) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x0009b4ec) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0009bdd5) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0009bdd5) dialer2_ne_pane_t

0xcf3e,	// (0x00099458) bg_popup_sub_pane_cp010_ParamLimits

0xcf3e,	// (0x00099458) bg_popup_sub_pane_cp010

0x8360,	// (0x0009487a) popup_vtel_slider_window_g1_ParamLimits

0x8360,	// (0x0009487a) popup_vtel_slider_window_g1

0x836c,	// (0x00094886) popup_vtel_slider_window_g2_ParamLimits

0x836c,	// (0x00094886) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0009bef9) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0009bef9) popup_vtel_slider_window_g

0x83b4,	// (0x000948ce) vtel_slider_pane_ParamLimits

0x83b4,	// (0x000948ce) vtel_slider_pane

0x83c3,	// (0x000948dd) vtel_slider_pane_g1_ParamLimits

0x83c3,	// (0x000948dd) vtel_slider_pane_g1

0x83d0,	// (0x000948ea) vtel_slider_pane_g2_ParamLimits

0x83d0,	// (0x000948ea) vtel_slider_pane_g2

0x83dd,	// (0x000948f7) vtel_slider_pane_g3_ParamLimits

0x83dd,	// (0x000948f7) vtel_slider_pane_g3

0x83c3,	// (0x000948dd) vtel_slider_pane_g4_ParamLimits

0x83c3,	// (0x000948dd) vtel_slider_pane_g4

0x83ea,	// (0x00094904) vtel_slider_pane_g5_ParamLimits

0x83ea,	// (0x00094904) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0009bf02) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0009bf02) vtel_slider_pane_g

0x2614,	// (0x0008eb2e) main_gallery2_pane

0x7b93,	// (0x000940ad) aid_size_row_itut2_dropdow_list_ParamLimits

0x7b93,	// (0x000940ad) aid_size_row_itut2_dropdow_list

0x7c01,	// (0x0009411b) grid_vitu2_function_top_pane_ParamLimits

0x7c01,	// (0x0009411b) grid_vitu2_function_top_pane

0x7c57,	// (0x00094171) popup_vitu2_dropdown_list_window_ParamLimits

0x7c57,	// (0x00094171) popup_vitu2_dropdown_list_window

0x7c77,	// (0x00094191) popup_vitu2_match_list_window

0x8405,	// (0x0009491f) cell_vitu2_function_top_pane_ParamLimits

0x8405,	// (0x0009491f) cell_vitu2_function_top_pane

0x8425,	// (0x0009493f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8425,	// (0x0009493f) cell_vitu2_function_top_pane_cp01

0x8443,	// (0x0009495d) cell_vitu2_function_top_wide_pane_ParamLimits

0x8443,	// (0x0009495d) cell_vitu2_function_top_wide_pane

0x5a2e,	// (0x00091f48) bg_button_pane_cp012

0x8461,	// (0x0009497b) cell_vitu2_function_top_pane_g1

0x8470,	// (0x0009498a) bg_button_pane_cp013_ParamLimits

0x8470,	// (0x0009498a) bg_button_pane_cp013

0x848c,	// (0x000949a6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x848c,	// (0x000949a6) cell_vitu2_function_top_wide_pane_g1

0x25fa,	// (0x0008eb14) bg_popup_sub_pane_cp20

0x84a4,	// (0x000949be) list_vitu2_match_list_pane

0x0464,	// (0x0008c97e) bg_popup_sub_pane_cp20_g1

0x046c,	// (0x0008c986) bg_popup_sub_pane_cp20_g2

0xb7e0,	// (0x00097cfa) bg_popup_sub_pane_cp20_g3

0x0474,	// (0x0008c98e) bg_popup_sub_pane_cp20_g4

0xb7c0,	// (0x00097cda) bg_popup_sub_pane_cp20_g5

0x06eb,	// (0x0008cc05) bg_popup_sub_pane_cp20_g6

0x0484,	// (0x0008c99e) bg_popup_sub_pane_cp20_g7

0x048c,	// (0x0008c9a6) bg_popup_sub_pane_cp20_g8

0x0494,	// (0x0008c9ae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0009bf0d) bg_popup_sub_pane_cp20_g

0x84bc,	// (0x000949d6) list_vitu2_match_list_item_pane_ParamLimits

0x84bc,	// (0x000949d6) list_vitu2_match_list_item_pane

0x84ce,	// (0x000949e8) list_vitu2_match_list_item_pane_t1

0x2614,	// (0x0008eb2e) bg_popup_sub_pane_cp21

0x8523,	// (0x00094a3d) grid_vitu2_dropdown_list_pane

0x852b,	// (0x00094a45) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x852b,	// (0x00094a45) cell_vitu2_dropdown_list_char_pane

0x854c,	// (0x00094a66) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x854c,	// (0x00094a66) cell_vitu2_dropdown_list_ctrl_pane

0x0725,	// (0x0008cc3f) cell_vitu2_dropdown_list_char_pane_g1

0x071c,	// (0x0008cc36) cell_vitu2_dropdown_list_char_pane_g2

0x0713,	// (0x0008cc2d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0009bf2a) cell_vitu2_dropdown_list_char_pane_g

0x8578,	// (0x00094a92) cell_vitu2_dropdown_list_char_pane_t1

0x8586,	// (0x00094aa0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8586,	// (0x00094aa0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8596,	// (0x00094ab0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8596,	// (0x00094ab0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x85a7,	// (0x00094ac1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x85a7,	// (0x00094ac1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x85b7,	// (0x00094ad1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x85b7,	// (0x00094ad1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x79c5,	// (0x00093edf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x79c5,	// (0x00093edf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0009bf31) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0009bf31) cell_vitu2_dropdown_list_ctrl_pane_g

0x85d3,	// (0x00094aed) aid_size_cell_gallery2_ParamLimits

0x85d3,	// (0x00094aed) aid_size_cell_gallery2

0x85e1,	// (0x00094afb) grid_gallery2_pane_ParamLimits

0x85e1,	// (0x00094afb) grid_gallery2_pane

0x85f0,	// (0x00094b0a) scroll_pane_cp029_ParamLimits

0x85f0,	// (0x00094b0a) scroll_pane_cp029

0x85fc,	// (0x00094b16) cell_gallery2_pane_ParamLimits

0x85fc,	// (0x00094b16) cell_gallery2_pane

0x072e,	// (0x0008cc48) cell_gallery2_pane_g2

0xc3f4,	// (0x0009890e) cell_gallery2_pane_g3

0x0738,	// (0x0008cc52) cell_gallery2_pane_g4

0x0740,	// (0x0008cc5a) cell_gallery2_pane_g5

0xcde5,	// (0x000992ff) grid_highlight_pane_cp10

0x7c77,	// (0x00094191) popup_vitu2_match_list_window_ParamLimits

0x7c8b,	// (0x000941a5) popup_vitu2_query_window_ParamLimits

0x7c8b,	// (0x000941a5) popup_vitu2_query_window

0x2614,	// (0x0008eb2e) bg_vitu2_candi_button_pane

0x0725,	// (0x0008cc3f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x071c,	// (0x0008cc36) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0713,	// (0x0008cc2d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x862a,	// (0x00094b44) bg_button_pane_cp015

0x863c,	// (0x00094b56) bg_button_pane_cp016

0x864f,	// (0x00094b69) bg_button_pane_cp017

0xe278,	// (0x0009a792) bg_popup_sub_pane_cp22

0x0748,	// (0x0008cc62) popup_vitu2_query_window_g1

0x8694,	// (0x00094bae) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0009bf3c) popup_vitu2_query_window_g

0x86b1,	// (0x00094bcb) popup_vitu2_query_window_t1_ParamLimits

0x86b1,	// (0x00094bcb) popup_vitu2_query_window_t1

0x86e4,	// (0x00094bfe) popup_vitu2_query_window_t2_ParamLimits

0x86e4,	// (0x00094bfe) popup_vitu2_query_window_t2

0x86f6,	// (0x00094c10) popup_vitu2_query_window_t3_ParamLimits

0x86f6,	// (0x00094c10) popup_vitu2_query_window_t3

0x871e,	// (0x00094c38) popup_vitu2_query_window_t4_ParamLimits

0x871e,	// (0x00094c38) popup_vitu2_query_window_t4

0x873f,	// (0x00094c59) popup_vitu2_query_window_t5_ParamLimits

0x873f,	// (0x00094c59) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0009bf43) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0009bf43) popup_vitu2_query_window_t

0x0566,	// (0x0008ca80) main_cset_text_pane

0x804b,	// (0x00094565) aid_area_touch_slider_ParamLimits

0x8067,	// (0x00094581) cset_slider_pane_ParamLimits

0x8091,	// (0x000945ab) main_cset_slider_pane_g1_ParamLimits

0x80a6,	// (0x000945c0) main_cset_slider_pane_g2_ParamLimits

0x0587,	// (0x0008caa1) main_cset_slider_pane_g3_ParamLimits

0x0587,	// (0x0008caa1) main_cset_slider_pane_g3

0x80bb,	// (0x000945d5) main_cset_slider_pane_g4_ParamLimits

0x80bb,	// (0x000945d5) main_cset_slider_pane_g4

0x80ca,	// (0x000945e4) main_cset_slider_pane_g5_ParamLimits

0x80ca,	// (0x000945e4) main_cset_slider_pane_g5

0x80d8,	// (0x000945f2) main_cset_slider_pane_g6_ParamLimits

0x80d8,	// (0x000945f2) main_cset_slider_pane_g6

0xf97c,	// (0x0009be96) main_cset_slider_pane_g_ParamLimits

0x05b7,	// (0x0008cad1) main_cset_slider_pane_t1_ParamLimits

0x8168,	// (0x00094682) main_cset_slider_pane_t2_ParamLimits

0x8182,	// (0x0009469c) main_cset_slider_pane_t3_ParamLimits

0x819c,	// (0x000946b6) main_cset_slider_pane_t4_ParamLimits

0x81b6,	// (0x000946d0) main_cset_slider_pane_t5_ParamLimits

0x81d4,	// (0x000946ee) main_cset_slider_pane_t6_ParamLimits

0x81eb,	// (0x00094705) main_cset_slider_pane_t7_ParamLimits

0x8219,	// (0x00094733) main_cset_slider_pane_t8_ParamLimits

0x8219,	// (0x00094733) main_cset_slider_pane_t8

0x8241,	// (0x0009475b) main_cset_slider_pane_t9_ParamLimits

0x8241,	// (0x0009475b) main_cset_slider_pane_t9

0x8269,	// (0x00094783) main_cset_slider_pane_t10_ParamLimits

0x8269,	// (0x00094783) main_cset_slider_pane_t10

0x8291,	// (0x000947ab) main_cset_slider_pane_t11_ParamLimits

0x8291,	// (0x000947ab) main_cset_slider_pane_t11

0x82bb,	// (0x000947d5) main_cset_slider_pane_t12_ParamLimits

0x82bb,	// (0x000947d5) main_cset_slider_pane_t12

0x82d8,	// (0x000947f2) main_cset_slider_pane_t13_ParamLimits

0x82d8,	// (0x000947f2) main_cset_slider_pane_t13

0xf9a1,	// (0x0009bebb) main_cset_slider_pane_t_ParamLimits

0x0f56,	// (0x0008d470) bg_popup_sub_pane_cp011

0x0754,	// (0x0008cc6e) main_cset_text_pane_g1

0x075c,	// (0x0008cc76) main_cset_text_pane_t1

0x076a,	// (0x0008cc84) main_cset_text_pane_t2

0x0778,	// (0x0008cc92) main_cset_text_pane_t3

0x0786,	// (0x0008cca0) main_cset_text_pane_t4

0x0794,	// (0x0008ccae) main_cset_text_pane_t5

0x07a2,	// (0x0008ccbc) main_cset_text_pane_t6

0x07b0,	// (0x0008ccca) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0009bf52) main_cset_text_pane_t

0x2614,	// (0x0008eb2e) main_cam4_burst_pane

0x2614,	// (0x0008eb2e) main_cam5_pane

0x7f9a,	// (0x000944b4) bg_button_pane_cp019

0x7fa3,	// (0x000944bd) bg_button_pane_cp020

0x0593,	// (0x0008caad) main_cset_slider_pane_g7_ParamLimits

0x0593,	// (0x0008caad) main_cset_slider_pane_g7

0x059f,	// (0x0008cab9) main_cset_slider_pane_g8_ParamLimits

0x059f,	// (0x0008cab9) main_cset_slider_pane_g8

0x80ec,	// (0x00094606) main_cset_slider_pane_g9_ParamLimits

0x80ec,	// (0x00094606) main_cset_slider_pane_g9

0x80f8,	// (0x00094612) main_cset_slider_pane_g10_ParamLimits

0x80f8,	// (0x00094612) main_cset_slider_pane_g10

0x8104,	// (0x0009461e) main_cset_slider_pane_g11_ParamLimits

0x8104,	// (0x0009461e) main_cset_slider_pane_g11

0x8110,	// (0x0009462a) main_cset_slider_pane_g12_ParamLimits

0x8110,	// (0x0009462a) main_cset_slider_pane_g12

0x811c,	// (0x00094636) main_cset_slider_pane_g13_ParamLimits

0x811c,	// (0x00094636) main_cset_slider_pane_g13

0x8128,	// (0x00094642) main_cset_slider_pane_g14_ParamLimits

0x8128,	// (0x00094642) main_cset_slider_pane_g14

0x8134,	// (0x0009464e) main_cset_slider_pane_g15_ParamLimits

0x8134,	// (0x0009464e) main_cset_slider_pane_g15

0x05e5,	// (0x0008caff) main_cset_slider_pane_t14_ParamLimits

0x05e5,	// (0x0008caff) main_cset_slider_pane_t14

0x061e,	// (0x0008cb38) main_cset_slider_pane_t15_ParamLimits

0x061e,	// (0x0008cb38) main_cset_slider_pane_t15

0x87b6,	// (0x00094cd0) aid_cam4_burst_size_cell_ParamLimits

0x87b6,	// (0x00094cd0) aid_cam4_burst_size_cell

0x87d2,	// (0x00094cec) grid_cam4_burst_pane_ParamLimits

0x87d2,	// (0x00094cec) grid_cam4_burst_pane

0x8802,	// (0x00094d1c) linegrid_cam4_burst_pane_ParamLimits

0x8802,	// (0x00094d1c) linegrid_cam4_burst_pane

0x8822,	// (0x00094d3c) scroll_pane_cp30_ParamLimits

0x8822,	// (0x00094d3c) scroll_pane_cp30

0x882e,	// (0x00094d48) cell_cam4_burst_pane_ParamLimits

0x882e,	// (0x00094d48) cell_cam4_burst_pane

0x07be,	// (0x0008ccd8) linegrid_cam4_burst_pane_g1_ParamLimits

0x07be,	// (0x0008ccd8) linegrid_cam4_burst_pane_g1

0x886a,	// (0x00094d84) linegrid_cam4_burst_pane_g2_ParamLimits

0x886a,	// (0x00094d84) linegrid_cam4_burst_pane_g2

0x07cb,	// (0x0008cce5) linegrid_cam4_burst_pane_g3_ParamLimits

0x07cb,	// (0x0008cce5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0009bf61) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0009bf61) linegrid_cam4_burst_pane_g

0x887b,	// (0x00094d95) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x887b,	// (0x00094d95) linegrid_cam4_burst_pane_g3_copy1

0x07d8,	// (0x0008ccf2) linegrid_cam4_burst_pane_g4_ParamLimits

0x07d8,	// (0x0008ccf2) linegrid_cam4_burst_pane_g4

0x8895,	// (0x00094daf) linegrid_cam4_burst_pane_g5_ParamLimits

0x8895,	// (0x00094daf) linegrid_cam4_burst_pane_g5

0x88a6,	// (0x00094dc0) linegrid_cam4_burst_pane_g6_ParamLimits

0x88a6,	// (0x00094dc0) linegrid_cam4_burst_pane_g6

0x07e5,	// (0x0008ccff) linegrid_cam4_burst_pane_g7_ParamLimits

0x07e5,	// (0x0008ccff) linegrid_cam4_burst_pane_g7

0x88b7,	// (0x00094dd1) cell_cam4_burst_pane_g1

0x07fe,	// (0x0008cd18) main_cam5_pane_t1_ParamLimits

0x07fe,	// (0x0008cd18) main_cam5_pane_t1

0x0810,	// (0x0008cd2a) main_cam5_pane_t2_ParamLimits

0x0810,	// (0x0008cd2a) main_cam5_pane_t2

0x0822,	// (0x0008cd3c) main_cam5_pane_t3_ParamLimits

0x0822,	// (0x0008cd3c) main_cam5_pane_t3

0x0834,	// (0x0008cd4e) main_cam5_pane_t4_ParamLimits

0x0834,	// (0x0008cd4e) main_cam5_pane_t4

0x084c,	// (0x0008cd66) main_cam5_pane_t5_ParamLimits

0x084c,	// (0x0008cd66) main_cam5_pane_t5

0x0860,	// (0x0008cd7a) main_cam5_pane_t6_ParamLimits

0x0860,	// (0x0008cd7a) main_cam5_pane_t6

0x0874,	// (0x0008cd8e) main_cam5_pane_t7_ParamLimits

0x0874,	// (0x0008cd8e) main_cam5_pane_t7

0x0886,	// (0x0008cda0) main_cam5_pane_t8_ParamLimits

0x0886,	// (0x0008cda0) main_cam5_pane_t8

0x08a2,	// (0x0008cdbc) main_cam5_pane_t9_ParamLimits

0x08a2,	// (0x0008cdbc) main_cam5_pane_t9

0x08b4,	// (0x0008cdce) main_cam5_pane_t10_ParamLimits

0x08b4,	// (0x0008cdce) main_cam5_pane_t10

0x08c6,	// (0x0008cde0) main_cam5_pane_t11_ParamLimits

0x08c6,	// (0x0008cde0) main_cam5_pane_t11

0x08d8,	// (0x0008cdf2) main_cam5_pane_t12_ParamLimits

0x08d8,	// (0x0008cdf2) main_cam5_pane_t12

0x08ed,	// (0x0008ce07) main_cam5_pane_t13_ParamLimits

0x08ed,	// (0x0008ce07) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0009bf6d) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0009bf6d) main_cam5_pane_t

0x25b9,	// (0x0008ead3) popup_scut_keymap_window_ParamLimits

0x25b9,	// (0x0008ead3) popup_scut_keymap_window

0x88ca,	// (0x00094de4) aid_size_cell_brow_shortcut

0xcde5,	// (0x000992ff) bg_popup_window_pane_cp010

0x88d6,	// (0x00094df0) grid_scut_pane

0x88e2,	// (0x00094dfc) cell_scut_pane_ParamLimits

0x88e2,	// (0x00094dfc) cell_scut_pane

0x88f9,	// (0x00094e13) cell_scut_pane_g1

0x090a,	// (0x0008ce24) cell_scut_pane_t1

0x0919,	// (0x0008ce33) cell_scut_pane_t2

0x8902,	// (0x00094e1c) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0009bf88) cell_scut_pane_t

0x6780,	// (0x00092c9a) main_mup3_pane_g8_ParamLimits

0x6780,	// (0x00092c9a) main_mup3_pane_g8

0x7ba1,	// (0x000940bb) area_vitu2_query_pane_ParamLimits

0x7ba1,	// (0x000940bb) area_vitu2_query_pane

0x8662,	// (0x00094b7c) input_focus_pane_cp08

0x0928,	// (0x0008ce42) area_vitu2_query_pane_g1

0x8910,	// (0x00094e2a) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0009bf8f) area_vitu2_query_pane_g

0x8921,	// (0x00094e3b) area_vitu2_query_pane_t1_ParamLimits

0x8921,	// (0x00094e3b) area_vitu2_query_pane_t1

0x8935,	// (0x00094e4f) area_vitu2_query_pane_t2_ParamLimits

0x8935,	// (0x00094e4f) area_vitu2_query_pane_t2

0x8949,	// (0x00094e63) area_vitu2_query_pane_t3_ParamLimits

0x8949,	// (0x00094e63) area_vitu2_query_pane_t3

0x008e,	// (0x0008c5a8) area_vitu2_query_pane_t4_ParamLimits

0x008e,	// (0x0008c5a8) area_vitu2_query_pane_t4

0x00b6,	// (0x0008c5d0) area_vitu2_query_pane_t5_ParamLimits

0x00b6,	// (0x0008c5d0) area_vitu2_query_pane_t5

0x00de,	// (0x0008c5f8) area_vitu2_query_pane_t6_ParamLimits

0x00de,	// (0x0008c5f8) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0009bf94) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0009bf94) area_vitu2_query_pane_t

0x8971,	// (0x00094e8b) bg_button_pane_cp018

0x897f,	// (0x00094e99) bg_button_pane_cp021

0x898b,	// (0x00094ea5) bg_button_pane_cp022

0x899c,	// (0x00094eb6) input_focus_pane_cp09

0x4bb5,	// (0x000910cf) aid_size_touch_mv_arrow_left

0x4bde,	// (0x000910f8) aid_size_touch_mv_arrow_right

0x814c,	// (0x00094666) main_cset_slider_pane_g16_ParamLimits

0x814c,	// (0x00094666) main_cset_slider_pane_g16

0x815a,	// (0x00094674) main_cset_slider_pane_g17_ParamLimits

0x815a,	// (0x00094674) main_cset_slider_pane_g17

0x88b7,	// (0x00094dd1) cell_cam4_burst_pane_g1_ParamLimits

0x0f56,	// (0x0008d470) compa_mode_pane

0x8378,	// (0x00094892) popup_vtel_slider_window_g3_ParamLimits

0x8378,	// (0x00094892) popup_vtel_slider_window_g3

0x838c,	// (0x000948a6) popup_vtel_slider_window_g4_ParamLimits

0x838c,	// (0x000948a6) popup_vtel_slider_window_g4

0x83a0,	// (0x000948ba) popup_vtel_slider_window_t1_ParamLimits

0x83a0,	// (0x000948ba) popup_vtel_slider_window_t1

0x2614,	// (0x0008eb2e) main_cl_pane

0x5acc,	// (0x00091fe6) popup_imed_adjust2_window_ParamLimits

0xe278,	// (0x0009a792) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x0009b101) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x0009b110) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x0009b110) popup_imed_adjust2_window_g2

0xec02,	// (0x0009b11c) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x0009b11c) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0009bcff) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0009bcff) popup_imed_adjust2_window_g

0xec0e,	// (0x0009b128) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x0009b140) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x0009b154) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x0009b164) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x0009b174) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x0009b185) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0009bd06) slider_imed_adjust_pane_g_ParamLimits

0x78da,	// (0x00093df4) aid_touch_area_cam4_ParamLimits

0x78da,	// (0x00093df4) aid_touch_area_cam4

0x78ea,	// (0x00093e04) battery_pane_cp01

0x7971,	// (0x00093e8b) main_camera4_pane_g6_ParamLimits

0x7971,	// (0x00093e8b) main_camera4_pane_g6

0x798f,	// (0x00093ea9) main_camera4_pane_t2_ParamLimits

0x798f,	// (0x00093ea9) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0009be09) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0009be09) main_camera4_pane_t

0x7a24,	// (0x00093f3e) aid_touch_area_vid4_ParamLimits

0x7a24,	// (0x00093f3e) aid_touch_area_vid4

0x7a64,	// (0x00093f7e) main_video4_pane_g5_ParamLimits

0x7a64,	// (0x00093f7e) main_video4_pane_g5

0x7a88,	// (0x00093fa2) vid4_progress_pane_ParamLimits

0x7a88,	// (0x00093fa2) vid4_progress_pane

0x05ab,	// (0x0008cac5) main_cset_slider_pane_g18_ParamLimits

0x05ab,	// (0x0008cac5) main_cset_slider_pane_g18

0x07f2,	// (0x0008cd0c) cell_cam4_burst_pane_g2_ParamLimits

0x07f2,	// (0x0008cd0c) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0009bf68) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0009bf68) cell_cam4_burst_pane_g

0x89ad,	// (0x00094ec7) bg_cl_pane_ParamLimits

0x89ad,	// (0x00094ec7) bg_cl_pane

0x89b9,	// (0x00094ed3) cl_header_pane_ParamLimits

0x89b9,	// (0x00094ed3) cl_header_pane

0x89c5,	// (0x00094edf) cl_listscroll_pane_ParamLimits

0x89c5,	// (0x00094edf) cl_listscroll_pane

0x0934,	// (0x0008ce4e) bg_cl_pane_g1

0x093c,	// (0x0008ce56) bg_cl_pane_g2

0x0944,	// (0x0008ce5e) bg_cl_pane_g3

0x094c,	// (0x0008ce66) bg_cl_pane_g4

0x0954,	// (0x0008ce6e) bg_cl_pane_g5

0x095c,	// (0x0008ce76) bg_cl_pane_g6

0x0964,	// (0x0008ce7e) bg_cl_pane_g7

0x096c,	// (0x0008ce86) bg_cl_pane_g8

0x0974,	// (0x0008ce8e) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0009bfa3) bg_cl_pane_g

0x89d1,	// (0x00094eeb) aid_height_cl_leading_ParamLimits

0x89d1,	// (0x00094eeb) aid_height_cl_leading

0x89dd,	// (0x00094ef7) aid_height_cl_text_ParamLimits

0x89dd,	// (0x00094ef7) aid_height_cl_text

0xcf58,	// (0x00099472) bg_cl_header_pane_ParamLimits

0xcf58,	// (0x00099472) bg_cl_header_pane

0x89f5,	// (0x00094f0f) cl_header_pane_g1_ParamLimits

0x89f5,	// (0x00094f0f) cl_header_pane_g1

0x8a02,	// (0x00094f1c) cl_header_pane_t1_ParamLimits

0x8a02,	// (0x00094f1c) cl_header_pane_t1

0x097c,	// (0x0008ce96) cl_list_pane

0x057e,	// (0x0008ca98) hc_scroll_pane_cp01

0xb7c0,	// (0x00097cda) bg_cl_header_pane_g1

0x0464,	// (0x0008c97e) bg_cl_header_pane_g2

0xb7e0,	// (0x00097cfa) bg_cl_header_pane_g3

0x0474,	// (0x0008c98e) bg_cl_header_pane_g4

0x046c,	// (0x0008c986) bg_cl_header_pane_g5

0x06eb,	// (0x0008cc05) bg_cl_header_pane_g6

0x048c,	// (0x0008c9a6) bg_cl_header_pane_g7

0x0494,	// (0x0008c9ae) bg_cl_header_pane_g8

0x0484,	// (0x0008c99e) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0009bfb6) bg_cl_header_pane_g

0x8a14,	// (0x00094f2e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8a14,	// (0x00094f2e) hc_cl_list_double_graphic_heading_pane

0x8a25,	// (0x00094f3f) hc_cl_list_single_graphic_pane_ParamLimits

0x8a25,	// (0x00094f3f) hc_cl_list_single_graphic_pane

0x8a3e,	// (0x00094f58) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8a3e,	// (0x00094f58) hc_cl_list_single_graphic_pane_g1

0x8a4a,	// (0x00094f64) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8a4a,	// (0x00094f64) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0009bfc9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0009bfc9) hc_cl_list_single_graphic_pane_g

0x8a5e,	// (0x00094f78) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8a5e,	// (0x00094f78) hc_cl_list_single_graphic_pane_t1

0x8a3e,	// (0x00094f58) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8a3e,	// (0x00094f58) hc_cl_list_double_graphic_heading_pane_g1

0x8a73,	// (0x00094f8d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8a73,	// (0x00094f8d) hc_cl_list_double_graphic_heading_pane_g2

0x8a87,	// (0x00094fa1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8a87,	// (0x00094fa1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0009bfce) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0009bfce) hc_cl_list_double_graphic_heading_pane_g

0x8a9b,	// (0x00094fb5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a9b,	// (0x00094fb5) hc_cl_list_double_graphic_heading_pane_t1

0x8ab0,	// (0x00094fca) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ab0,	// (0x00094fca) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0009bfd5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0009bfd5) hc_cl_list_double_graphic_heading_pane_t

0x8acd,	// (0x00094fe7) vid4_progress_pane_g1

0x8adf,	// (0x00094ff9) vid4_progress_pane_g2

0xbaa1,	// (0x00097fbb) vid4_progress_pane_g3

0x8aef,	// (0x00095009) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0009bfda) vid4_progress_pane_g

0x8b0d,	// (0x00095027) vid4_progress_pane_t1

0x8b22,	// (0x0009503c) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0009bfe5) vid4_progress_pane_t

0x8b4d,	// (0x00095067) wait_bar_pane_cp07

0xe473,	// (0x0009a98d) blid_firmament_pane_ParamLimits

0xe4b6,	// (0x0009a9d0) popup_blid_sat_info2_window_g1

0xe4da,	// (0x0009a9f4) popup_blid_sat_info2_window_t3

0xe4e8,	// (0x0009aa02) popup_blid_sat_info2_window_t4

0xe4f6,	// (0x0009aa10) popup_blid_sat_info2_window_t5

0xe504,	// (0x0009aa1e) popup_blid_sat_info2_window_t6

0xe514,	// (0x0009aa2e) popup_blid_sat_info2_window_t7

0xe522,	// (0x0009aa3c) popup_blid_sat_info2_window_t8

0xe530,	// (0x0009aa4a) popup_blid_sat_info2_window_t9

0xe547,	// (0x0009aa61) popup_blid_sat_info2_window_t10

0xe609,	// (0x0009ab23) aid_firma_cardinal_ParamLimits

0xe61d,	// (0x0009ab37) blid_firmament_pane_t1_ParamLimits

0xe634,	// (0x0009ab4e) blid_firmament_pane_t2_ParamLimits

0xe64b,	// (0x0009ab65) blid_firmament_pane_t3_ParamLimits

0xe662,	// (0x0009ab7c) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0009bbf8) blid_firmament_pane_t_ParamLimits

0xe679,	// (0x0009ab93) blid_sat_info_pane_ParamLimits

0x5a2e,	// (0x00091f48) main_cam_set_pane_ParamLimits

0x6f38,	// (0x00093452) aid_size_cell_colour_35_ParamLimits

0x6f52,	// (0x0009346c) aid_size_cell_colour_112_ParamLimits

0x6f69,	// (0x00093483) aid_size_cell_effect_ParamLimits

0xcf3e,	// (0x00099458) bg_tb_trans_pane_cp02_ParamLimits

0xcf4c,	// (0x00099466) heading_imed_pane_ParamLimits

0x6f83,	// (0x0009349d) listscroll_imed_pane_ParamLimits

0xd89e,	// (0x00099db8) popup_call2_audio_first_window_g5_ParamLimits

0xd89e,	// (0x00099db8) popup_call2_audio_first_window_g5

0x7689,	// (0x00093ba3) aid_size_touch_image3_arrow_left_ParamLimits

0x7689,	// (0x00093ba3) aid_size_touch_image3_arrow_left

0x769f,	// (0x00093bb9) aid_size_touch_image3_arrow_right_ParamLimits

0x769f,	// (0x00093bb9) aid_size_touch_image3_arrow_right

0x8b38,	// (0x00095052) vid4_progress_pane_t3

0x7221,	// (0x0009373b) main_hwr_training_symbol_option_pane_ParamLimits

0x7221,	// (0x0009373b) main_hwr_training_symbol_option_pane

0xeed4,	// (0x0009b3ee) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x0009b3ee) popup_hwr_training_preview_window

0x7282,	// (0x0009379c) hwr_training_navi_pane_g5_ParamLimits

0x7282,	// (0x0009379c) hwr_training_navi_pane_g5

0x0452,	// (0x0008c96c) popup_char_count_window

0x25fa,	// (0x0008eb14) bg_popup_sub_pane_cp20_ParamLimits

0x84a4,	// (0x000949be) list_vitu2_match_list_pane_ParamLimits

0x84b0,	// (0x000949ca) vitu2_page_scroll_pane_ParamLimits

0x84b0,	// (0x000949ca) vitu2_page_scroll_pane

0x0a0e,	// (0x0008cf28) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a0e,	// (0x0008cf28) list_single_hwr_training_symbol_option_pane

0x0a21,	// (0x0008cf3b) list_single_hwr_training_symbol_option_pane_g1

0x0a29,	// (0x0008cf43) list_single_hwr_training_symbol_option_pane_t1

0x0a37,	// (0x0008cf51) bg_button_pane_cp023

0x0a40,	// (0x0008cf5a) bg_button_pane_cp024

0x8b8e,	// (0x000950a8) vitu2_page_scroll_pane_g1

0x8b96,	// (0x000950b0) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0009bfec) vitu2_page_scroll_pane_g

0x8b9e,	// (0x000950b8) vitu2_page_scroll_pane_t1

0x0a73,	// (0x0008cf8d) popup_char_count_window_g1

0x0a7c,	// (0x0008cf96) popup_char_count_window_g2

0x0a85,	// (0x0008cf9f) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0009bff1) popup_char_count_window_g

0x0a8e,	// (0x0008cfa8) popup_char_count_window_t1

0x2614,	// (0x0008eb2e) main_vded2_pane

0xebd3,	// (0x0009b0ed) aid_size_cell_imed_line

0xebdd,	// (0x0009b0f7) grid_imed_line_width_pane

0x7af6,	// (0x00094010) vid4_indicators_pane_g4

0x0a9c,	// (0x0008cfb6) cell_imed_line_width_pane_ParamLimits

0x0a9c,	// (0x0008cfb6) cell_imed_line_width_pane

0x0ab0,	// (0x0008cfca) cell_imed_line_width_pane_g1

0x0ab9,	// (0x0008cfd3) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0009bff8) cell_imed_line_width_pane_g

0x8bad,	// (0x000950c7) main_vded2_pane_g1_ParamLimits

0x8bad,	// (0x000950c7) main_vded2_pane_g1

0x8bba,	// (0x000950d4) main_vded2_pane_g2_ParamLimits

0x8bba,	// (0x000950d4) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0009bffd) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0009bffd) main_vded2_pane_g

0x8bc8,	// (0x000950e2) vded2_slider_pane_ParamLimits

0x8bc8,	// (0x000950e2) vded2_slider_pane

0x8bd5,	// (0x000950ef) aid_size_touch_vded2_end

0x8bdf,	// (0x000950f9) aid_size_touch_vded2_playhead

0x0ac1,	// (0x0008cfdb) aid_size_touch_vded2_start

0x0ac9,	// (0x0008cfe3) vded2_slider_bg_pane

0x0ad2,	// (0x0008cfec) vded2_slider_pane_g1

0x0adb,	// (0x0008cff5) vded2_slider_pane_g2

0x8be7,	// (0x00095101) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0009c002) vded2_slider_pane_g

0x0ae3,	// (0x0008cffd) vded2_slider_bg_pane_g1

0x0aec,	// (0x0008d006) vded2_slider_bg_pane_g2

0x0af5,	// (0x0008d00f) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0009c009) vded2_slider_bg_pane_g

0x5316,	// (0x00091830) aid_postcard_touch_down_pane_ParamLimits

0x5316,	// (0x00091830) aid_postcard_touch_down_pane

0x5326,	// (0x00091840) aid_postcard_touch_up_pane_ParamLimits

0x5326,	// (0x00091840) aid_postcard_touch_up_pane

0x2614,	// (0x0008eb2e) main_blid2_pane

0x5a57,	// (0x00091f71) popup_blid2_search_window

0x0f56,	// (0x0008d470) blid2_gps_pane

0x0f56,	// (0x0008d470) blid2_navig_pane

0x0f56,	// (0x0008d470) blid2_search_pane

0x0f56,	// (0x0008d470) blid2_tripm_pane

0x8bf0,	// (0x0009510a) blid2_search_pane_g1_ParamLimits

0x8bf0,	// (0x0009510a) blid2_search_pane_g1

0x8c00,	// (0x0009511a) blid2_search_pane_t1_ParamLimits

0x8c00,	// (0x0009511a) blid2_search_pane_t1

0x8c12,	// (0x0009512c) aid_size_cell_blid2_gps_ParamLimits

0x8c12,	// (0x0009512c) aid_size_cell_blid2_gps

0x8c22,	// (0x0009513c) blid2_gps_pane_g1_ParamLimits

0x8c22,	// (0x0009513c) blid2_gps_pane_g1

0x8c2e,	// (0x00095148) grid_blid2_satellite_pane_ParamLimits

0x8c2e,	// (0x00095148) grid_blid2_satellite_pane

0x8c3e,	// (0x00095158) blid2_navig_pane_g1_ParamLimits

0x8c3e,	// (0x00095158) blid2_navig_pane_g1

0x8c4a,	// (0x00095164) blid2_navig_pane_t1_ParamLimits

0x8c4a,	// (0x00095164) blid2_navig_pane_t1

0x8c5c,	// (0x00095176) blid2_navig_pane_t2_ParamLimits

0x8c5c,	// (0x00095176) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0009c010) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0009c010) blid2_navig_pane_t

0x8c6e,	// (0x00095188) blid2_navig_ring_pane_ParamLimits

0x8c6e,	// (0x00095188) blid2_navig_ring_pane

0x8c7e,	// (0x00095198) blid2_speed_pane_ParamLimits

0x8c7e,	// (0x00095198) blid2_speed_pane

0x8c8a,	// (0x000951a4) blid2_tripm_pane_g1_ParamLimits

0x8c8a,	// (0x000951a4) blid2_tripm_pane_g1

0x8c9a,	// (0x000951b4) blid2_tripm_pane_g2_ParamLimits

0x8c9a,	// (0x000951b4) blid2_tripm_pane_g2

0x8ca6,	// (0x000951c0) blid2_tripm_pane_g3_ParamLimits

0x8ca6,	// (0x000951c0) blid2_tripm_pane_g3

0x8cb2,	// (0x000951cc) blid2_tripm_pane_g4_ParamLimits

0x8cb2,	// (0x000951cc) blid2_tripm_pane_g4

0x8cbe,	// (0x000951d8) blid2_tripm_pane_g5_ParamLimits

0x8cbe,	// (0x000951d8) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0009c015) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0009c015) blid2_tripm_pane_g

0x8cda,	// (0x000951f4) blid2_tripm_pane_t1_ParamLimits

0x8cda,	// (0x000951f4) blid2_tripm_pane_t1

0x8cee,	// (0x00095208) blid2_tripm_pane_t2_ParamLimits

0x8cee,	// (0x00095208) blid2_tripm_pane_t2

0x8d00,	// (0x0009521a) blid2_tripm_pane_t3_ParamLimits

0x8d00,	// (0x0009521a) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0009c022) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0009c022) blid2_tripm_pane_t

0x8d32,	// (0x0009524c) cell_blid2_satellite_pane_ParamLimits

0x8d32,	// (0x0009524c) cell_blid2_satellite_pane

0x8d4c,	// (0x00095266) cell_blid2_satellite_pane_g1

0x0afe,	// (0x0008d018) cell_blid2_satellite_pane_t1

0xe689,	// (0x0009aba3) blid2_speed_pane_g1

0x0b0c,	// (0x0008d026) blid2_speed_pane_t1

0x0b1a,	// (0x0008d034) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0009c02b) blid2_speed_pane_t

0xe689,	// (0x0009aba3) blid2_navig_ring_pane_g1

0x8d55,	// (0x0009526f) blid2_navig_ring_pane_g2

0x8d5d,	// (0x00095277) blid2_navig_ring_pane_g3

0x8d65,	// (0x0009527f) blid2_navig_ring_pane_g4

0x8d6d,	// (0x00095287) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0009c030) blid2_navig_ring_pane_g

0x0f56,	// (0x0008d470) bg_popup_window_pane_cp011

0x0b28,	// (0x0008d042) popup_blid2_search_window_g1

0x0b30,	// (0x0008d04a) popup_blid2_search_window_t1

0x0b3e,	// (0x0008d058) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0009c03b) popup_blid2_search_window_t

0xb6cf,	// (0x00097be9) main_browser_pane_g1

0xb3bf,	// (0x000978d9) main_browser_pane_ParamLimits

0x5a2e,	// (0x00091f48) bg_button_pane_cp011_ParamLimits

0x7d6d,	// (0x00094287) cell_vitu2_function_pane_g1_ParamLimits

0xe278,	// (0x0009a792) bg_popup_sub_pane_cp22_ParamLimits

0x8662,	// (0x00094b7c) input_focus_pane_cp08_ParamLimits

0x8679,	// (0x00094b93) popup_vitu2_query_button_pane_ParamLimits

0x8679,	// (0x00094b93) popup_vitu2_query_button_pane

0x868a,	// (0x00094ba4) popup_vitu2_query_input_button_pane

0x0748,	// (0x0008cc62) popup_vitu2_query_window_g1_ParamLimits

0x8694,	// (0x00094bae) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0009bf3c) popup_vitu2_query_window_g_ParamLimits

0x0f56,	// (0x0008d470) bg_button_pane_cp026

0x8d75,	// (0x0009528f) popup_vitu2_query_input_button_pane_g1

0x0f56,	// (0x0008d470) bg_button_pane_cp025

0x0b4c,	// (0x0008d066) popup_vitu2_query_button_pane_t1

0x64a7,	// (0x000929c1) main_mp3_pane_t6

0x64b7,	// (0x000929d1) popup_slider_window_cp01

0x79d3,	// (0x00093eed) cam4_battery_pane

0x7ab3,	// (0x00093fcd) cam4_battery_pane_cp02

0x8ac5,	// (0x00094fdf) cam4_battery_pane_cp01

0x8ac5,	// (0x00094fdf) cam4_battery_pane_cp03

0x0b5a,	// (0x0008d074) cam4_battery_pane_g1

0xe689,	// (0x0009aba3) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0009c040) cam4_battery_pane_g

0xe555,	// (0x0009aa6f) popup_blid_sat_info2_window_t11

0x4bb5,	// (0x000910cf) aid_size_touch_mv_arrow_left_ParamLimits

0x4bde,	// (0x000910f8) aid_size_touch_mv_arrow_right_ParamLimits

0xcd45,	// (0x0009925f) navi_pane_g1_ParamLimits

0x4c1d,	// (0x00091137) navi_pane_g2_ParamLimits

0x4c4b,	// (0x00091165) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0009b90a) navi_pane_g_ParamLimits

0x4ca5,	// (0x000911bf) navi_pane_mv_t1_ParamLimits

0x6f8f,	// (0x000934a9) grid_imed_effect_pane_ParamLimits

0x3582,	// (0x0008fa9c) aid_placing_vt_slider_lsc

0xb61e,	// (0x00097b38) aid_placing_vt_slider_prt

0xcf3e,	// (0x00099458) bg_tb_trans_pane_cp01_ParamLimits

0xe80c,	// (0x0009ad26) popup_image_details_window_g1_ParamLimits

0xe81f,	// (0x0009ad39) popup_image_details_window_g2_ParamLimits

0xe834,	// (0x0009ad4e) popup_image_details_window_g3_ParamLimits

0xe834,	// (0x0009ad4e) popup_image_details_window_g3

0xf723,	// (0x0009bc3d) popup_image_details_window_g_ParamLimits

0xe848,	// (0x0009ad62) popup_image_details_window_t1_ParamLimits

0xe85a,	// (0x0009ad74) popup_image_details_window_t2_ParamLimits

0xe873,	// (0x0009ad8d) popup_image_details_window_t3_ParamLimits

0xe887,	// (0x0009ada1) popup_image_details_window_t4_ParamLimits

0xe8a2,	// (0x0009adbc) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0009bc44) popup_image_details_window_t_ParamLimits

0x89e9,	// (0x00094f03) cl_header_name_pane_ParamLimits

0x89e9,	// (0x00094f03) cl_header_name_pane

0x8d7d,	// (0x00095297) cl_header_name_pane_t1_ParamLimits

0x8d7d,	// (0x00095297) cl_header_name_pane_t1

0x8d94,	// (0x000952ae) cl_header_name_pane_t2_ParamLimits

0x8d94,	// (0x000952ae) cl_header_name_pane_t2

0x8dbe,	// (0x000952d8) cl_header_name_pane_t3_ParamLimits

0x8dbe,	// (0x000952d8) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0009c045) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0009c045) cl_header_name_pane_t

0x4c76,	// (0x00091190) navi_pane_mv_g2_ParamLimits

0x042c,	// (0x0008c946) field_vitu2_entry_pane_g1_ParamLimits

0x0438,	// (0x0008c952) field_vitu2_entry_pane_g2_ParamLimits

0x0444,	// (0x0008c95e) field_vitu2_entry_pane_g3_ParamLimits

0x0444,	// (0x0008c95e) field_vitu2_entry_pane_g3

0xf921,	// (0x0009be3b) field_vitu2_entry_pane_g_ParamLimits

0x7cfd,	// (0x00094217) cell_vitu2_itu_pane_g1_ParamLimits

0x7d0d,	// (0x00094227) cell_vitu2_itu_pane_g2_ParamLimits

0x7d0d,	// (0x00094227) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0009be47) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0009be47) cell_vitu2_itu_pane_g

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp05_ParamLimits

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp05

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp03

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp04

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp10_ParamLimits

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp10

0x898b,	// (0x00094ea5) bg_vkb2_func_pane_cp08

0x8971,	// (0x00094e8b) bg_vkb2_func_pane_cp06

0x897f,	// (0x00094e99) bg_vkb2_func_pane_cp07

0x0a49,	// (0x0008cf63) bg_vkb2_func_pane_cp11_ParamLimits

0x0a49,	// (0x0008cf63) bg_vkb2_func_pane_cp11

0x0a5e,	// (0x0008cf78) bg_vkb2_func_pane_cp12_ParamLimits

0x0a5e,	// (0x0008cf78) bg_vkb2_func_pane_cp12

0x0f56,	// (0x0008d470) bg_vkb2_func_pane_cp09

0x0464,	// (0x0008c97e) bg_vkb2_func_pane_g1

0xb7e0,	// (0x00097cfa) bg_vkb2_func_pane_g2

0x046c,	// (0x0008c986) bg_vkb2_func_pane_g3

0x0474,	// (0x0008c98e) bg_vkb2_func_pane_g4

0x06eb,	// (0x0008cc05) bg_vkb2_func_pane_g5

0x048c,	// (0x0008c9a6) bg_vkb2_func_pane_g6

0x0494,	// (0x0008c9ae) bg_vkb2_func_pane_g7

0x0484,	// (0x0008c99e) bg_vkb2_func_pane_g8

0xb7c0,	// (0x00097cda) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0009c04c) bg_vkb2_func_pane_g

0x8ccc,	// (0x000951e6) blid2_tripm_pane_g6_ParamLimits

0x8ccc,	// (0x000951e6) blid2_tripm_pane_g6

0xef8c,	// (0x0009b4a6) mp4_progress_pane_g1

0x8d26,	// (0x00095240) blid2_tripm_values_pane_ParamLimits

0x8d26,	// (0x00095240) blid2_tripm_values_pane

0x8de3,	// (0x000952fd) blid2_tripm_values_pane_t1

0x8df1,	// (0x0009530b) blid2_tripm_values_pane_t2

0x8dff,	// (0x00095319) blid2_tripm_values_pane_t3

0x8e0d,	// (0x00095327) blid2_tripm_values_pane_t4

0x8e1b,	// (0x00095335) blid2_tripm_values_pane_t5

0x8e29,	// (0x00095343) blid2_tripm_values_pane_t6

0x8e37,	// (0x00095351) blid2_tripm_values_pane_t7

0x8e45,	// (0x0009535f) blid2_tripm_values_pane_t8

0x8e53,	// (0x0009536d) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0009c05f) blid2_tripm_values_pane_t

0x35c2,	// (0x0008fadc) call_video_pane_t1_ParamLimits

0x35e3,	// (0x0008fafd) call_video_pane_t2_ParamLimits

0xf279,	// (0x0009b793) call_video_pane_t_ParamLimits

0x51e7,	// (0x00091701) msg_header_pane_g1_ParamLimits

0xcffb,	// (0x00099515) msg_header_pane_g2_ParamLimits

0xcffb,	// (0x00099515) msg_header_pane_g2

0x0001,

0xf493,	// (0x0009b9ad) msg_header_pane_g_ParamLimits

0xf493,	// (0x0009b9ad) msg_header_pane_g

0xb3bf,	// (0x000978d9) main_clock2_pane_ParamLimits

0x6d28,	// (0x00093242) grid_clock2_toolbar_pane_ParamLimits

0x6d28,	// (0x00093242) grid_clock2_toolbar_pane

0x6d28,	// (0x00093242) listscroll_clock2_pane_ParamLimits

0x6d28,	// (0x00093242) listscroll_clock2_pane

0x6dcc,	// (0x000932e6) main_clock2_pane_t3_ParamLimits

0x6dcc,	// (0x000932e6) main_clock2_pane_t3

0x6dde,	// (0x000932f8) main_clock2_pane_t4_ParamLimits

0x6dde,	// (0x000932f8) main_clock2_pane_t4

0x0b64,	// (0x0008d07e) cell_clock2_toolbar_pane

0x0b6c,	// (0x0008d086) cell_clock2_toolbar_pane_cp01

0x0b6c,	// (0x0008d086) cell_clock2_toolbar_pane_cp02

0x0b74,	// (0x0008d08e) cell_clock2_toolbar_pane_cp03

0x0b7c,	// (0x0008d096) list_clock2_pane

0xcc9c,	// (0x000991b6) scroll_pane_cp10

0x0b84,	// (0x0008d09e) list_single_clock2_pane_ParamLimits

0x0b84,	// (0x0008d09e) list_single_clock2_pane

0xcde5,	// (0x000992ff) list_highlight_pane_cp08

0x0b91,	// (0x0008d0ab) list_single_clock2_pane_t1

0x0b9f,	// (0x0008d0b9) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0009c072) list_single_clock2_pane_t

0x0f56,	// (0x0008d470) bg_button_pane_cp10

0x0bad,	// (0x0008d0c7) cell_clock2_toolbar_pane_g1

0x5284,	// (0x0009179e) aid_main_viewer_pane_g1_ParamLimits

0x5284,	// (0x0009179e) aid_main_viewer_pane_g1

0x5290,	// (0x000917aa) aid_main_viewer_pane_g2_ParamLimits

0x5290,	// (0x000917aa) aid_main_viewer_pane_g2

0x529c,	// (0x000917b6) aid_main_viewer_pane_g3_ParamLimits

0x529c,	// (0x000917b6) aid_main_viewer_pane_g3

0x52ad,	// (0x000917c7) aid_main_viewer_pane_g4_ParamLimits

0x52ad,	// (0x000917c7) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0009b9be) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0009b9be) aid_main_viewer_pane_g

0x5a21,	// (0x00091f3b) main_calc_pane_ParamLimits

0x5a3c,	// (0x00091f56) main_dialer2_pane_ParamLimits

0x2614,	// (0x0008eb2e) main_cam6_pane

0x2614,	// (0x0008eb2e) main_vid6_pane

0x6d34,	// (0x0009324e) listscroll_gen_pane_cp06_ParamLimits

0x6d34,	// (0x0009324e) listscroll_gen_pane_cp06

0x6df0,	// (0x0009330a) main_clock2_pane_t5_ParamLimits

0x6df0,	// (0x0009330a) main_clock2_pane_t5

0x6e39,	// (0x00093353) aid_call2_pane_cp10_ParamLimits

0x6e4b,	// (0x00093365) aid_call_pane_cp10_ParamLimits

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6e5d,	// (0x00093377) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6e5d,	// (0x00093377) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd1a,	// (0x00099234) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0009bcf4) popup_clock_analogue_window_cp10_g_ParamLimits

0x6e6f,	// (0x00093389) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7636,	// (0x00093b50) cell_dialer2_keypad_pane_g2_ParamLimits

0x7636,	// (0x00093b50) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0009bdda) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0009bdda) cell_dialer2_keypad_pane_g

0x7652,	// (0x00093b6c) cell_dialer2_keypad_pane_t1

0x8038,	// (0x00094552) main_cset_text2_pane_ParamLimits

0x8038,	// (0x00094552) main_cset_text2_pane

0x0928,	// (0x0008ce42) area_vitu2_query_pane_g1_ParamLimits

0x8910,	// (0x00094e2a) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0009bf8f) area_vitu2_query_pane_g_ParamLimits

0x0106,	// (0x0008c620) area_vitu2_query_pane_t7_ParamLimits

0x0106,	// (0x0008c620) area_vitu2_query_pane_t7

0x8971,	// (0x00094e8b) bg_button_pane_cp018_ParamLimits

0x897f,	// (0x00094e99) bg_button_pane_cp021_ParamLimits

0x898b,	// (0x00094ea5) bg_button_pane_cp022_ParamLimits

0x898b,	// (0x00094ea5) bg_vkb2_func_pane_cp08_ParamLimits

0x8971,	// (0x00094e8b) bg_vkb2_func_pane_cp06_ParamLimits

0x897f,	// (0x00094e99) bg_vkb2_func_pane_cp07_ParamLimits

0x899c,	// (0x00094eb6) input_focus_pane_cp09_ParamLimits

0x8e61,	// (0x0009537b) cam6_autofocus_pane_ParamLimits

0x8e61,	// (0x0009537b) cam6_autofocus_pane

0x8e83,	// (0x0009539d) cam6_image_uncrop_pane_ParamLimits

0x8e83,	// (0x0009539d) cam6_image_uncrop_pane

0x8eb0,	// (0x000953ca) cam6_indi_pane_ParamLimits

0x8eb0,	// (0x000953ca) cam6_indi_pane

0x8eca,	// (0x000953e4) cam6_mode_pane_ParamLimits

0x8eca,	// (0x000953e4) cam6_mode_pane

0x8ede,	// (0x000953f8) cam6_timer_pane_ParamLimits

0x8ede,	// (0x000953f8) cam6_timer_pane

0x8eea,	// (0x00095404) cam6_zoom_pane_ParamLimits

0x8eea,	// (0x00095404) cam6_zoom_pane

0x8f02,	// (0x0009541c) cam6_mode_pane_g1_ParamLimits

0x8f02,	// (0x0009541c) cam6_mode_pane_g1

0x8f0e,	// (0x00095428) cam6_mode_pane_g2_ParamLimits

0x8f0e,	// (0x00095428) cam6_mode_pane_g2

0x8f1a,	// (0x00095434) cam6_mode_pane_g3_ParamLimits

0x8f1a,	// (0x00095434) cam6_mode_pane_g3

0x8f26,	// (0x00095440) cam6_mode_pane_g4_ParamLimits

0x8f26,	// (0x00095440) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0009c077) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0009c077) cam6_mode_pane_g

0x0bc3,	// (0x0008d0dd) bg_tb_trans_pane_cp08_ParamLimits

0x0bc3,	// (0x0008d0dd) bg_tb_trans_pane_cp08

0x0bd1,	// (0x0008d0eb) cam6_battery_pane_ParamLimits

0x0bd1,	// (0x0008d0eb) cam6_battery_pane

0x0be7,	// (0x0008d101) cam6_indi_pane_g1_ParamLimits

0x0be7,	// (0x0008d101) cam6_indi_pane_g1

0x0bf9,	// (0x0008d113) cam6_indi_pane_g2_ParamLimits

0x0bf9,	// (0x0008d113) cam6_indi_pane_g2

0x0c0b,	// (0x0008d125) cam6_indi_pane_g3_ParamLimits

0x0c0b,	// (0x0008d125) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0009c080) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0009c080) cam6_indi_pane_g

0x0c1d,	// (0x0008d137) cam6_indi_pane_t1_ParamLimits

0x0c1d,	// (0x0008d137) cam6_indi_pane_t1

0x7b33,	// (0x0009404d) cam6_autofocus_pane_g1

0x7b2b,	// (0x00094045) cam6_autofocus_pane_g2

0x7b43,	// (0x0009405d) cam6_autofocus_pane_g3

0x7b3b,	// (0x00094055) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0009c087) cam6_autofocus_pane_g

0x0c43,	// (0x0008d15d) cam6_timer_pane_g1

0x0c4b,	// (0x0008d165) cam6_timer_pane_t1

0x0c59,	// (0x0008d173) cam6_zoom_cont_pane

0x0c61,	// (0x0008d17b) cam6_zoom_pane_g1

0x0c69,	// (0x0008d183) cam6_zoom_pane_g2

0x8f32,	// (0x0009544c) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0009c090) cam6_zoom_pane_g

0xe689,	// (0x0009aba3) cam6_battery_pane_g1

0xe689,	// (0x0009aba3) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0009bc01) cam6_battery_pane_g

0x0c71,	// (0x0008d18b) cam6_zoom_cont_pane_g1

0x0c7a,	// (0x0008d194) cam6_zoom_cont_pane_g2

0x0c83,	// (0x0008d19d) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0009c097) cam6_zoom_cont_pane_g

0x8f4f,	// (0x00095469) cam6_mode_pane_cp_ParamLimits

0x8f4f,	// (0x00095469) cam6_mode_pane_cp

0x8f63,	// (0x0009547d) cam6_zoom_pane_cp_ParamLimits

0x8f63,	// (0x0009547d) cam6_zoom_pane_cp

0x8f7b,	// (0x00095495) vid6_image_uncrop_cif_pane_ParamLimits

0x8f7b,	// (0x00095495) vid6_image_uncrop_cif_pane

0x8fa7,	// (0x000954c1) vid6_image_uncrop_nhd_pane_ParamLimits

0x8fa7,	// (0x000954c1) vid6_image_uncrop_nhd_pane

0x8fc4,	// (0x000954de) vid6_image_uncrop_vga_pane_ParamLimits

0x8fc4,	// (0x000954de) vid6_image_uncrop_vga_pane

0x8fe3,	// (0x000954fd) vid6_image_uncrop_wvga_pane_ParamLimits

0x8fe3,	// (0x000954fd) vid6_image_uncrop_wvga_pane

0x9000,	// (0x0009551a) vid6_indi_pane_ParamLimits

0x9000,	// (0x0009551a) vid6_indi_pane

0x0bc3,	// (0x0008d0dd) bg_tb_trans_pane_cp09_ParamLimits

0x0bc3,	// (0x0008d0dd) bg_tb_trans_pane_cp09

0x0c9b,	// (0x0008d1b5) cam6_battery_pane_cp_ParamLimits

0x0c9b,	// (0x0008d1b5) cam6_battery_pane_cp

0x0ca7,	// (0x0008d1c1) vid6_indi_pane_g1_ParamLimits

0x0ca7,	// (0x0008d1c1) vid6_indi_pane_g1

0x0cb9,	// (0x0008d1d3) vid6_indi_pane_g2_ParamLimits

0x0cb9,	// (0x0008d1d3) vid6_indi_pane_g2

0x0ccb,	// (0x0008d1e5) vid6_indi_pane_g3_ParamLimits

0x0ccb,	// (0x0008d1e5) vid6_indi_pane_g3

0x0ce0,	// (0x0008d1fa) vid6_indi_pane_g4_ParamLimits

0x0ce0,	// (0x0008d1fa) vid6_indi_pane_g4

0x0cf5,	// (0x0008d20f) vid6_indi_pane_g5_ParamLimits

0x0cf5,	// (0x0008d20f) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0009c09e) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0009c09e) vid6_indi_pane_g

0x0d0f,	// (0x0008d229) vid6_indi_pane_t1_ParamLimits

0x0d0f,	// (0x0008d229) vid6_indi_pane_t1

0x0d25,	// (0x0008d23f) vid6_indi_pane_t2_ParamLimits

0x0d25,	// (0x0008d23f) vid6_indi_pane_t2

0x0d4d,	// (0x0008d267) vid6_indi_pane_t3_ParamLimits

0x0d4d,	// (0x0008d267) vid6_indi_pane_t3

0x0d75,	// (0x0008d28f) vid6_indi_pane_t4_ParamLimits

0x0d75,	// (0x0008d28f) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0009c0a9) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0009c0a9) vid6_indi_pane_t

0x0d99,	// (0x0008d2b3) wait_bar_pane_cp08

0x9025,	// (0x0009553f) main_cset_text2_pane_t1_ParamLimits

0x9025,	// (0x0009553f) main_cset_text2_pane_t1

0x8f3a,	// (0x00095454) listscroll_gen_pane_cp06_t1_ParamLimits

0x8f3a,	// (0x00095454) listscroll_gen_pane_cp06_t1

0x2614,	// (0x0008eb2e) main_cam6_set_pane

0x79c5,	// (0x00093edf) bg_tb_trans_pane_cp06_ParamLimits

0x79db,	// (0x00093ef5) cam4_indicators_pane_g1_ParamLimits

0x79ec,	// (0x00093f06) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0009be17) cam4_indicators_pane_g_ParamLimits

0x7a0a,	// (0x00093f24) cam4_indicators_pane_t1_ParamLimits

0x5a2e,	// (0x00091f48) bg_tb_trans_pane_cp07_ParamLimits

0x7abd,	// (0x00093fd7) vid4_indicators_pane_g1_ParamLimits

0x7ad1,	// (0x00093feb) vid4_indicators_pane_g2_ParamLimits

0x7ae5,	// (0x00093fff) vid4_indicators_pane_g3_ParamLimits

0x7af6,	// (0x00094010) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0009be29) vid4_indicators_pane_g_ParamLimits

0x7b14,	// (0x0009402e) vid4_indicators_pane_t1_ParamLimits

0x8acd,	// (0x00094fe7) vid4_progress_pane_g1_ParamLimits

0x8adf,	// (0x00094ff9) vid4_progress_pane_g2_ParamLimits

0xbaa1,	// (0x00097fbb) vid4_progress_pane_g3_ParamLimits

0x8aef,	// (0x00095009) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0009bfda) vid4_progress_pane_g_ParamLimits

0x8b0d,	// (0x00095027) vid4_progress_pane_t1_ParamLimits

0x8b22,	// (0x0009503c) vid4_progress_pane_t2_ParamLimits

0x8b38,	// (0x00095052) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0009bfe5) vid4_progress_pane_t_ParamLimits

0x8b4d,	// (0x00095067) wait_bar_pane_cp07_ParamLimits

0x9058,	// (0x00095572) main_cam6_set_pane_g2_ParamLimits

0x9058,	// (0x00095572) main_cam6_set_pane_g2

0x9064,	// (0x0009557e) main_cset6_listscroll_pane_ParamLimits

0x9064,	// (0x0009557e) main_cset6_listscroll_pane

0x908f,	// (0x000955a9) main_cset6_slider_pane_ParamLimits

0x908f,	// (0x000955a9) main_cset6_slider_pane

0x909b,	// (0x000955b5) main_cset6_text2_pane_ParamLimits

0x909b,	// (0x000955b5) main_cset6_text2_pane

0x0da8,	// (0x0008d2c2) main_cset6_text_pane

0x0db0,	// (0x0008d2ca) main_cset_list_pane_copy1_ParamLimits

0x0db0,	// (0x0008d2ca) main_cset_list_pane_copy1

0x0dc0,	// (0x0008d2da) scroll_pane_cp028_copy1

0x90ae,	// (0x000955c8) cset_list_set_pane_copy1

0x90c1,	// (0x000955db) aid_position_infowindow_above_copy1

0x90c9,	// (0x000955e3) aid_position_infowindow_below_copy1

0x90d1,	// (0x000955eb) cset_list_set_pane_g1_copy1

0x006a,	// (0x0008c584) cset_list_set_pane_g3_copy1_ParamLimits

0x006a,	// (0x0008c584) cset_list_set_pane_g3_copy1

0x0079,	// (0x0008c593) cset_list_set_pane_t1_copy1_ParamLimits

0x0079,	// (0x0008c593) cset_list_set_pane_t1_copy1

0xcf3e,	// (0x00099458) list_highlight_pane_cp021_copy1_ParamLimits

0xcf3e,	// (0x00099458) list_highlight_pane_cp021_copy1

0x0dc9,	// (0x0008d2e3) cset6_slider_pane_ParamLimits

0x0dc9,	// (0x0008d2e3) cset6_slider_pane

0x0df5,	// (0x0008d30f) main_cset6_slider_pane_g1_ParamLimits

0x0df5,	// (0x0008d30f) main_cset6_slider_pane_g1

0x90d9,	// (0x000955f3) main_cset6_slider_pane_g2_ParamLimits

0x90d9,	// (0x000955f3) main_cset6_slider_pane_g2

0x0e1d,	// (0x0008d337) main_cset6_slider_pane_g3_ParamLimits

0x0e1d,	// (0x0008d337) main_cset6_slider_pane_g3

0x9101,	// (0x0009561b) main_cset6_slider_pane_g4_ParamLimits

0x9101,	// (0x0009561b) main_cset6_slider_pane_g4

0x910d,	// (0x00095627) main_cset6_slider_pane_g5_ParamLimits

0x910d,	// (0x00095627) main_cset6_slider_pane_g5

0x0593,	// (0x0008caad) main_cset6_slider_pane_g7_ParamLimits

0x0593,	// (0x0008caad) main_cset6_slider_pane_g7

0x059f,	// (0x0008cab9) main_cset6_slider_pane_g8_ParamLimits

0x059f,	// (0x0008cab9) main_cset6_slider_pane_g8

0x911b,	// (0x00095635) main_cset6_slider_pane_g9_ParamLimits

0x911b,	// (0x00095635) main_cset6_slider_pane_g9

0x9127,	// (0x00095641) main_cset6_slider_pane_g10_ParamLimits

0x9127,	// (0x00095641) main_cset6_slider_pane_g10

0x9133,	// (0x0009564d) main_cset6_slider_pane_g11_ParamLimits

0x9133,	// (0x0009564d) main_cset6_slider_pane_g11

0x913f,	// (0x00095659) main_cset6_slider_pane_g12_ParamLimits

0x913f,	// (0x00095659) main_cset6_slider_pane_g12

0x914b,	// (0x00095665) main_cset6_slider_pane_g13_ParamLimits

0x914b,	// (0x00095665) main_cset6_slider_pane_g13

0x9157,	// (0x00095671) main_cset6_slider_pane_g14_ParamLimits

0x9157,	// (0x00095671) main_cset6_slider_pane_g14

0x9163,	// (0x0009567d) main_cset6_slider_pane_g15_ParamLimits

0x9163,	// (0x0009567d) main_cset6_slider_pane_g15

0x917b,	// (0x00095695) main_cset6_slider_pane_g16_ParamLimits

0x917b,	// (0x00095695) main_cset6_slider_pane_g16

0x9189,	// (0x000956a3) main_cset6_slider_pane_g17_ParamLimits

0x9189,	// (0x000956a3) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0009c0b2) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0009c0b2) main_cset6_slider_pane_g

0x0e29,	// (0x0008d343) main_cset6_slider_pane_t1_ParamLimits

0x0e29,	// (0x0008d343) main_cset6_slider_pane_t1

0x91af,	// (0x000956c9) main_cset6_slider_pane_t2_ParamLimits

0x91af,	// (0x000956c9) main_cset6_slider_pane_t2

0x91da,	// (0x000956f4) main_cset6_slider_pane_t3_ParamLimits

0x91da,	// (0x000956f4) main_cset6_slider_pane_t3

0x9205,	// (0x0009571f) main_cset6_slider_pane_t4_ParamLimits

0x9205,	// (0x0009571f) main_cset6_slider_pane_t4

0x9230,	// (0x0009574a) main_cset6_slider_pane_t5_ParamLimits

0x9230,	// (0x0009574a) main_cset6_slider_pane_t5

0x0e6a,	// (0x0008d384) main_cset6_slider_pane_t7_ParamLimits

0x0e6a,	// (0x0008d384) main_cset6_slider_pane_t7

0x925d,	// (0x00095777) main_cset6_slider_pane_t8_ParamLimits

0x925d,	// (0x00095777) main_cset6_slider_pane_t8

0x9281,	// (0x0009579b) main_cset6_slider_pane_t9_ParamLimits

0x9281,	// (0x0009579b) main_cset6_slider_pane_t9

0x92a5,	// (0x000957bf) main_cset6_slider_pane_t10_ParamLimits

0x92a5,	// (0x000957bf) main_cset6_slider_pane_t10

0x92c9,	// (0x000957e3) main_cset6_slider_pane_t11_ParamLimits

0x92c9,	// (0x000957e3) main_cset6_slider_pane_t11

0x0ea0,	// (0x0008d3ba) main_cset6_slider_pane_t14_ParamLimits

0x0ea0,	// (0x0008d3ba) main_cset6_slider_pane_t14

0x0ed9,	// (0x0008d3f3) main_cset6_slider_pane_t15_ParamLimits

0x0ed9,	// (0x0008d3f3) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0009c0d7) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0009c0d7) main_cset6_slider_pane_t

0x0683,	// (0x0008cb9d) cset_slider_pane_g1_copy1

0x068c,	// (0x0008cba6) cset_slider_pane_g2_copy1

0x0695,	// (0x0008cbaf) cset_slider_pane_g3_copy1

0x0f56,	// (0x0008d470) bg_popup_sub_pane_cp011_copy1

0x136e,	// (0x0008d888) main_cset_text_pane_g1_copy1

0x075c,	// (0x0008cc76) main_cset_text_pane_t1_copy1

0x076a,	// (0x0008cc84) main_cset_text_pane_t2_copy1

0x0778,	// (0x0008cc92) main_cset_text_pane_t3_copy1

0x0786,	// (0x0008cca0) main_cset_text_pane_t4_copy1

0x0794,	// (0x0008ccae) main_cset_text_pane_t5_copy1

0x1376,	// (0x0008d890) main_cset_text_pane_t6_copy1

0x07b0,	// (0x0008ccca) main_cset_text_pane_t7_copy1

0x93bd,	// (0x000958d7) main_cset_text2_pane_t1_copy1

0x5a2e,	// (0x00091f48) main_ncimui_pane

0x5a8d,	// (0x00091fa7) popup_query_ncimui_window_ParamLimits

0x5a8d,	// (0x00091fa7) popup_query_ncimui_window

0xe951,	// (0x0009ae6b) field_cale_ev2_pane_g4_ParamLimits

0xe951,	// (0x0009ae6b) field_cale_ev2_pane_g4

0x7356,	// (0x00093870) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7356,	// (0x00093870) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0009bdb5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0009bdb5) cell_video_dialer_keypad_pane_g

0x736e,	// (0x00093888) cell_video_dialer_keypad_pane_t1

0x0f56,	// (0x0008d470) bg_popup_window_pane_cp012

0xcb69,	// (0x00099083) heading_pane_cp06

0x13a2,	// (0x0008d8bc) ncim_query_content_pane

0x0f56,	// (0x0008d470) bg_popup_heading_pane_cp01

0x13aa,	// (0x0008d8c4) ncim_heading_pane_t1

0x13b8,	// (0x0008d8d2) ncim_indicator_popup_pane

0x13ca,	// (0x0008d8e4) ncim_query_button_pane

0xbc53,	// (0x0009816d) ncim_query_content_pane_t1

0xbc65,	// (0x0009817f) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0009c11b) ncim_query_content_pane_t

0xbc9f,	// (0x000981b9) ncim_query_list_pane

0xbcb1,	// (0x000981cb) ncim_query_popup_pane

0x13b8,	// (0x0008d8d2) ncim_indicator_popup_pane_ParamLimits

0x9510,	// (0x00095a2a) ncim_query_content_pane_g1_ParamLimits

0x9510,	// (0x00095a2a) ncim_query_content_pane_g1

0xbc53,	// (0x0009816d) ncim_query_content_pane_t1_ParamLimits

0xbc65,	// (0x0009817f) ncim_query_content_pane_t2_ParamLimits

0x951c,	// (0x00095a36) ncim_query_content_pane_t3_ParamLimits

0x951c,	// (0x00095a36) ncim_query_content_pane_t3

0x9539,	// (0x00095a53) ncim_query_content_pane_t4_ParamLimits

0x9539,	// (0x00095a53) ncim_query_content_pane_t4

0x9556,	// (0x00095a70) ncim_query_content_pane_t5_ParamLimits

0x9556,	// (0x00095a70) ncim_query_content_pane_t5

0xbc77,	// (0x00098191) ncim_query_content_pane_t6_ParamLimits

0xbc77,	// (0x00098191) ncim_query_content_pane_t6

0xfc01,	// (0x0009c11b) ncim_query_content_pane_t_ParamLimits

0xbc9f,	// (0x000981b9) ncim_query_list_pane_ParamLimits

0xbcb1,	// (0x000981cb) ncim_query_popup_pane_ParamLimits

0xbcc5,	// (0x000981df) wait_bar_pane_cp04

0x0f56,	// (0x0008d470) input_focus_pane_cp011

0xbccd,	// (0x000981e7) ncim_query_popup_pane_t1

0xbcdb,	// (0x000981f5) ncim_list_query_list_pane_ParamLimits

0xbcdb,	// (0x000981f5) ncim_list_query_list_pane

0x0f56,	// (0x0008d470) bg_button_pane_cp027

0xbce8,	// (0x00098202) ncim_query_button_pane_g1

0x0f56,	// (0x0008d470) list_highlight_pane_cp012

0xbcf2,	// (0x0009820c) ncim_list_query_list_pane_g1

0xbcfa,	// (0x00098214) ncim_list_query_list_pane_t1

0x79fb,	// (0x00093f15) cam4_indicators_pane_g3_ParamLimits

0x79fb,	// (0x00093f15) cam4_indicators_pane_g3

0x7b02,	// (0x0009401c) vid4_indicators_pane_g5_ParamLimits

0x7b02,	// (0x0009401c) vid4_indicators_pane_g5

0x8afe,	// (0x00095018) vid4_progress_pane_g5_ParamLimits

0x8afe,	// (0x00095018) vid4_progress_pane_g5

0x93fc,	// (0x00095916) main_ncimui_pane_g1

0x9464,	// (0x0009597e) ncimui_group_query_pane_ParamLimits

0x9464,	// (0x0009597e) ncimui_group_query_pane

0x94ac,	// (0x000959c6) ncimui_list_pane_ParamLimits

0x94ac,	// (0x000959c6) ncimui_list_pane

0x94d3,	// (0x000959ed) ncimui_text_pane_ParamLimits

0x94d3,	// (0x000959ed) ncimui_text_pane

0x9573,	// (0x00095a8d) ncimui_text_pane_t1_ParamLimits

0x9573,	// (0x00095a8d) ncimui_text_pane_t1

0xbd08,	// (0x00098222) ncimui_list_single_graphic_pane_ParamLimits

0xbd08,	// (0x00098222) ncimui_list_single_graphic_pane

0x9592,	// (0x00095aac) ncimui_query_pane_ParamLimits

0x9592,	// (0x00095aac) ncimui_query_pane

0x0f56,	// (0x0008d470) list_highlight_pane_cp013

0xbd18,	// (0x00098232) ncim_list_query_list_pane_t1_copy1

0xbcf2,	// (0x0009820c) ncim_list_single_graphic_pane_g1

0xbd26,	// (0x00098240) ncim_query_button_pane_cp01

0xbd32,	// (0x0009824c) ncim_query_entry_pane_ParamLimits

0xbd32,	// (0x0009824c) ncim_query_entry_pane

0xbd45,	// (0x0009825f) ncimui_query_pane_g1

0xbd51,	// (0x0009826b) ncimui_query_pane_t1_ParamLimits

0xbd51,	// (0x0009826b) ncimui_query_pane_t1

0xcf3e,	// (0x00099458) input_focus_pane_cp012

0xbd6a,	// (0x00098284) ncim_query_entry_pane_t1

0xb3bf,	// (0x000978d9) main_im_pane_ParamLimits

0x5a2e,	// (0x00091f48) main_mobtv_pane_ParamLimits

0x5a2e,	// (0x00091f48) main_mobtv_pane

0x9197,	// (0x000956b1) main_cset6_slider_pane_g18_ParamLimits

0x9197,	// (0x000956b1) main_cset6_slider_pane_g18

0x91a3,	// (0x000956bd) main_cset6_slider_pane_g19_ParamLimits

0x91a3,	// (0x000956bd) main_cset6_slider_pane_g19

0x0444,	// (0x0008c95e) bg_main_mobtv_pane_ParamLimits

0x0444,	// (0x0008c95e) bg_main_mobtv_pane

0x95a5,	// (0x00095abf) main_mobtv_info_pane

0x95b0,	// (0x00095aca) main_mobtv_loading_pane_ParamLimits

0x95b0,	// (0x00095aca) main_mobtv_loading_pane

0xbd7c,	// (0x00098296) main_mobtv_pg_channel_list_pane

0xbd86,	// (0x000982a0) main_mobtv_pg_hdr_pane

0x95bd,	// (0x00095ad7) main_mobtv_programe_curr_pane_ParamLimits

0x95bd,	// (0x00095ad7) main_mobtv_programe_curr_pane

0x95ca,	// (0x00095ae4) main_mobtv_programe_next_pane_ParamLimits

0x95ca,	// (0x00095ae4) main_mobtv_programe_next_pane

0xbd8f,	// (0x000982a9) popup_mobtv_noti_window

0xe689,	// (0x0009aba3) main_tv_pg_hdr_pane_g1

0xbd97,	// (0x000982b1) main_tv_pg_hdr_pane_g2

0xbd9f,	// (0x000982b9) main_tv_pg_hdr_pane_g3

0xbda7,	// (0x000982c1) main_tv_pg_hdr_pane_g4

0xbdaf,	// (0x000982c9) main_tv_pg_hdr_pane_g5

0xbdb9,	// (0x000982d3) main_tv_pg_hdr_pane_g6

0xbdc3,	// (0x000982dd) main_tv_pg_hdr_pane_g7

0xbdcd,	// (0x000982e7) main_tv_pg_hdr_pane_g8

0xbdd7,	// (0x000982f1) main_tv_pg_hdr_pane_g9

0xbde1,	// (0x000982fb) main_tv_pg_hdr_pane_g10

0xbdeb,	// (0x00098305) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0009c128) main_tv_pg_hdr_pane_g

0xbdf5,	// (0x0009830f) main_tv_pg_hdr_pane_t1

0xbe03,	// (0x0009831d) main_tv_pg_hdr_pane_t2

0xbe11,	// (0x0009832b) main_tv_pg_hdr_pane_t3

0xbe21,	// (0x0009833b) main_tv_pg_hdr_pane_t4

0xbe31,	// (0x0009834b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0009c13f) main_tv_pg_hdr_pane_t

0xbe41,	// (0x0009835b) single_mobtv_pg_channel_pane_ParamLimits

0xbe41,	// (0x0009835b) single_mobtv_pg_channel_pane

0xbe53,	// (0x0009836d) single_mobtv_pg_channel_table_pane

0xbe5c,	// (0x00098376) single_mobtv_pg_channel_thumb_pane

0xbe65,	// (0x0009837f) single_tv_pg_channel_pane_g1

0xbe6e,	// (0x00098388) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0009c14a) single_tv_pg_channel_pane_g

0xe8ec,	// (0x0009ae06) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8ec,	// (0x0009ae06) bg_single_mobtv_pg_channel_thumb_pane

0xbe77,	// (0x00098391) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xbe77,	// (0x00098391) single_mobtv_pg_channel_thumb_pane_g1

0xbe85,	// (0x0009839f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xbe85,	// (0x0009839f) single_mobtv_pg_channel_thumb_pane_g2

0xbe91,	// (0x000983ab) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xbe91,	// (0x000983ab) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0009c14f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0009c14f) single_mobtv_pg_channel_thumb_pane_g

0xbe9d,	// (0x000983b7) single_mobtv_pg_channel_thumb_pane_t1

0xbeab,	// (0x000983c5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0009c156) single_mobtv_pg_channel_thumb_pane_t

0xe689,	// (0x0009aba3) bg_single_mobtv_pg_channel_table_pane_g1

0xe689,	// (0x0009aba3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0009bc01) bg_single_mobtv_pg_channel_table_pane_g

0xbeb9,	// (0x000983d3) single_mobtv_pg_channel_table_pane_t1

0xbec7,	// (0x000983e1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0009c15b) single_mobtv_pg_channel_table_pane_t

0x95df,	// (0x00095af9) main_mobtv_info_pane_g1_ParamLimits

0x95df,	// (0x00095af9) main_mobtv_info_pane_g1

0x95fb,	// (0x00095b15) main_mobtv_info_pane_t1_ParamLimits

0x95fb,	// (0x00095b15) main_mobtv_info_pane_t1

0x9673,	// (0x00095b8d) main_mobtv_info_pane_t2_ParamLimits

0x9673,	// (0x00095b8d) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0009c165) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0009c165) main_mobtv_info_pane_t

0x9702,	// (0x00095c1c) wait_bar_pane_cp05

0x9714,	// (0x00095c2e) main_mobtv_loading_pane_g1_ParamLimits

0x9714,	// (0x00095c2e) main_mobtv_loading_pane_g1

0x9722,	// (0x00095c3c) main_mobtv_loading_pane_g2_ParamLimits

0x9722,	// (0x00095c3c) main_mobtv_loading_pane_g2

0x972e,	// (0x00095c48) main_mobtv_loading_pane_g3_ParamLimits

0x972e,	// (0x00095c48) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0009c16c) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0009c16c) main_mobtv_loading_pane_g

0xbed5,	// (0x000983ef) main_mobtv_loading_pane_t1_ParamLimits

0xbed5,	// (0x000983ef) main_mobtv_loading_pane_t1

0xbeed,	// (0x00098407) main_mobtv_loading_pane_t2_ParamLimits

0xbeed,	// (0x00098407) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0009c173) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0009c173) main_mobtv_loading_pane_t

0x973c,	// (0x00095c56) wait_bar_pane_cp06_ParamLimits

0x973c,	// (0x00095c56) wait_bar_pane_cp06

0xbf11,	// (0x0009842b) main_mobtv_programe_curr_pane_t1

0xbf1f,	// (0x00098439) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0009c178) main_mobtv_programe_curr_pane_t

0xbf2d,	// (0x00098447) main_mobtv_programe_next_pane_t1

0xbf3b,	// (0x00098455) main_mobtv_programe_next_pane_t2

0xbf49,	// (0x00098463) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0009c17d) main_mobtv_programe_next_pane_t

0x0f56,	// (0x0008d470) bg_popup_mobtv_noti_window_pane

0xbf57,	// (0x00098471) popup_mobtv_noti_window_g1

0xbf5f,	// (0x00098479) popup_mobtv_noti_window_t1

0xbf6d,	// (0x00098487) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0009c184) popup_mobtv_noti_window_t

0xe689,	// (0x0009aba3) bg_popup_mobtv_noti_window_pane_g1

0x2614,	// (0x0008eb2e) sc_clock_pane

0x2614,	// (0x0008eb2e) main_fs_bigclock_pane

0x8d14,	// (0x0009522e) blid2_tripm_pane_t4_ParamLimits

0x8d14,	// (0x0009522e) blid2_tripm_pane_t4

0x9748,	// (0x00095c62) sc_clock_pane_g1_ParamLimits

0x9748,	// (0x00095c62) sc_clock_pane_g1

0x9756,	// (0x00095c70) sc_clock_pane_t1_ParamLimits

0x9756,	// (0x00095c70) sc_clock_pane_t1

0x9769,	// (0x00095c83) sc_clock_pane_t2_ParamLimits

0x9769,	// (0x00095c83) sc_clock_pane_t2

0x977b,	// (0x00095c95) sc_clock_pane_t3_ParamLimits

0x977b,	// (0x00095c95) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0009c189) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0009c189) sc_clock_pane_t

0xa63b,	// (0x00096b55) main_fs_bigclock_indicator_pane_ParamLimits

0xa63b,	// (0x00096b55) main_fs_bigclock_indicator_pane

0x9816,	// (0x00095d30) main_fs_bigclock_pane_g1_ParamLimits

0x9816,	// (0x00095d30) main_fs_bigclock_pane_g1

0xa647,	// (0x00096b61) main_fs_bigclock_pane_t1_ParamLimits

0xa647,	// (0x00096b61) main_fs_bigclock_pane_t1

0xa659,	// (0x00096b73) main_fs_bigclock_pane_t2_ParamLimits

0xa659,	// (0x00096b73) main_fs_bigclock_pane_t2

0xa66d,	// (0x00096b87) main_fs_bigclock_pane_t3_ParamLimits

0xa66d,	// (0x00096b87) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009c38d) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009c38d) main_fs_bigclock_pane_t

0xc75d,	// (0x00098c77) main_fs_bigclock_indicator_pane_g1

0xbc47,	// (0x00098161) ncim_query_content_pane_g2_ParamLimits

0xbc47,	// (0x00098161) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0009c116) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0009c116) ncim_query_content_pane_g

0x978f,	// (0x00095ca9) sc_clock_pane_t4_ParamLimits

0x978f,	// (0x00095ca9) sc_clock_pane_t4

0x5a2e,	// (0x00091f48) main_radioblah_pane

0xf075,	// (0x0009b58f) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x0009b58f) cell_call4_button_pane_t1_copy1

0x9416,	// (0x00095930) main_ncimui_pane_t1_ParamLimits

0x9416,	// (0x00095930) main_ncimui_pane_t1

0x9430,	// (0x0009594a) main_ncimui_pane_t2_ParamLimits

0x9430,	// (0x0009594a) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0009c10f) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0009c10f) main_ncimui_pane_t

0xc0a7,	// (0x000985c1) main_radioblah_anim_pane_ParamLimits

0xc0a7,	// (0x000985c1) main_radioblah_anim_pane

0xc0b8,	// (0x000985d2) main_radioblah_info_pane_ParamLimits

0xc0b8,	// (0x000985d2) main_radioblah_info_pane

0xc0cc,	// (0x000985e6) main_radioblah_pane_t1_ParamLimits

0xc0cc,	// (0x000985e6) main_radioblah_pane_t1

0xc0e8,	// (0x00098602) main_radioblah_pane_t2_ParamLimits

0xc0e8,	// (0x00098602) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0009c1aa) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0009c1aa) main_radioblah_pane_t

0x9868,	// (0x00095d82) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9868,	// (0x00095d82) main_radioblah_rocker_ctrl_pane

0xc130,	// (0x0009864a) main_radioblah_info_pane_t1_ParamLimits

0xc130,	// (0x0009864a) main_radioblah_info_pane_t1

0x98ad,	// (0x00095dc7) main_radioblah_info_pane_t2_ParamLimits

0x98ad,	// (0x00095dc7) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0009c1b3) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0009c1b3) main_radioblah_info_pane_t

0xe689,	// (0x0009aba3) main_radioblah_rocker_ctrl_pane_g1

0x995d,	// (0x00095e77) main_radioblah_rocker_ctrl_pane_g2

0x9965,	// (0x00095e7f) main_radioblah_rocker_ctrl_pane_g3

0x996d,	// (0x00095e87) main_radioblah_rocker_ctrl_pane_g4

0x9975,	// (0x00095e8f) main_radioblah_rocker_ctrl_pane_g5

0x997d,	// (0x00095e97) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0009c1bc) main_radioblah_rocker_ctrl_pane_g

0x93bd,	// (0x000958d7) main_cset_text2_pane_t1_copy1_ParamLimits

0x791b,	// (0x00093e35) cam4_image_uncrop_qvga_pane

0x7a70,	// (0x00093f8a) vid4_image_uncrop_qcif_pane

0x8ea2,	// (0x000953bc) cam6_image_uncrop_qvga_pane_ParamLimits

0x8ea2,	// (0x000953bc) cam6_image_uncrop_qvga_pane

0x0c8b,	// (0x0008d1a5) vid6_image_uncrop_qcif_pane_ParamLimits

0x0c8b,	// (0x0008d1a5) vid6_image_uncrop_qcif_pane

0x0f56,	// (0x0008d470) bg_popup_preview_window_pane_cp03

0x1384,	// (0x0008d89e) list_cset_text2_pane

0x138c,	// (0x0008d8a6) main_cset6_text2_pane_g1

0x1394,	// (0x0008d8ae) main_cset6_text2_pane_t1

0x9985,	// (0x00095e9f) list_cset_text2_pane_t1_ParamLimits

0x9985,	// (0x00095e9f) list_cset_text2_pane_t1

0x5a2e,	// (0x00091f48) main_radioblah_pane_ParamLimits

0x96ee,	// (0x00095c08) main_mobtv_info_pane_t3_ParamLimits

0x96ee,	// (0x00095c08) main_mobtv_info_pane_t3

0x9856,	// (0x00095d70) main_radioblah_pane_g1

0x9881,	// (0x00095d9b) main_radioblah_info_pane_g1

0x9902,	// (0x00095e1c) main_radioblah_info_pane_t3_ParamLimits

0x9902,	// (0x00095e1c) main_radioblah_info_pane_t3

0x4626,	// (0x00090b40) highlight_cell_cale_month_pane_ParamLimits

0x4626,	// (0x00090b40) highlight_cell_cale_month_pane

0x2614,	// (0x0008eb2e) main_phob_fisheye_pane

0xea20,	// (0x0009af3a) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x0009af3a) scroll_pane_cp0031

0x0d99,	// (0x0008d2b3) wait_bar_pane_cp08_ParamLimits

0x90ae,	// (0x000955c8) cset_list_set_pane_copy1_ParamLimits

0xc16a,	// (0x00098684) highlight_cell_cale_month_pane_g1

0x99a2,	// (0x00095ebc) highlight_cell_cale_month_pane_t1

0x097c,	// (0x0008ce96) list_gen_pane_cp01

0x057e,	// (0x0008ca98) scroll_pane_01

0x99b0,	// (0x00095eca) list_single_double_fisheye_pane

0x99b9,	// (0x00095ed3) list_double_fisheye_pane_g1_ParamLimits

0x99b9,	// (0x00095ed3) list_double_fisheye_pane_g1

0x99c5,	// (0x00095edf) list_double_fisheye_pane_g2_ParamLimits

0x99c5,	// (0x00095edf) list_double_fisheye_pane_g2

0x99d9,	// (0x00095ef3) list_double_fisheye_pane_g3_ParamLimits

0x99d9,	// (0x00095ef3) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0009c1c9) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0009c1c9) list_double_fisheye_pane_g

0x9a02,	// (0x00095f1c) list_double_fisheye_pane_t1_ParamLimits

0x9a02,	// (0x00095f1c) list_double_fisheye_pane_t1

0x9a1d,	// (0x00095f37) list_double_fisheye_pane_t2_ParamLimits

0x9a1d,	// (0x00095f37) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0009c1d4) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0009c1d4) list_double_fisheye_pane_t

0x2614,	// (0x0008eb2e) main_call5_pane

0x97b5,	// (0x00095ccf) sc_swipe_pane_ParamLimits

0x97b5,	// (0x00095ccf) sc_swipe_pane

0x9a4b,	// (0x00095f65) call5_image_pane_ParamLimits

0x9a4b,	// (0x00095f65) call5_image_pane

0x9a5b,	// (0x00095f75) call5_swipe_1_pane_ParamLimits

0x9a5b,	// (0x00095f75) call5_swipe_1_pane

0x9a67,	// (0x00095f81) call5_swipe_2_pane_ParamLimits

0x9a67,	// (0x00095f81) call5_swipe_2_pane

0x9a81,	// (0x00095f9b) popup_call5_audio_first_window_ParamLimits

0x9a81,	// (0x00095f9b) popup_call5_audio_first_window

0xe8ec,	// (0x0009ae06) call5_swipe_1_pane_g1_ParamLimits

0xe8ec,	// (0x0009ae06) call5_swipe_1_pane_g1

0xc172,	// (0x0009868c) call5_swipe_1_pane_g2_ParamLimits

0xc172,	// (0x0009868c) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0009c1d9) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0009c1d9) call5_swipe_1_pane_g

0xc17e,	// (0x00098698) call5_swipe_1_pane_t1_ParamLimits

0xc17e,	// (0x00098698) call5_swipe_1_pane_t1

0xe8ec,	// (0x0009ae06) call5_swipe_2_pane_g1_ParamLimits

0xe8ec,	// (0x0009ae06) call5_swipe_2_pane_g1

0xc193,	// (0x000986ad) call5_swipe_2_pane_g2_ParamLimits

0xc193,	// (0x000986ad) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0009c1de) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0009c1de) call5_swipe_2_pane_g

0xc19f,	// (0x000986b9) call5_swipe_2_pane_t1_ParamLimits

0xc19f,	// (0x000986b9) call5_swipe_2_pane_t1

0xc1b4,	// (0x000986ce) sc_swipe_pane_g1_ParamLimits

0xc1b4,	// (0x000986ce) sc_swipe_pane_g1

0xc1c1,	// (0x000986db) sc_swipe_pane_g2_ParamLimits

0xc1c1,	// (0x000986db) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0009c1e3) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0009c1e3) sc_swipe_pane_g

0xc1cd,	// (0x000986e7) sc_swipe_pane_t1_ParamLimits

0xc1cd,	// (0x000986e7) sc_swipe_pane_t1

0x2614,	// (0x0008eb2e) main_cmail_launcher_pane

0x9a8f,	// (0x00095fa9) aid_size_cell_cmail_l_ParamLimits

0x9a8f,	// (0x00095fa9) aid_size_cell_cmail_l

0x9a9f,	// (0x00095fb9) grid_cmail_l_pane_ParamLimits

0x9a9f,	// (0x00095fb9) grid_cmail_l_pane

0x9aaf,	// (0x00095fc9) cell_cmail_l_pane_ParamLimits

0x9aaf,	// (0x00095fc9) cell_cmail_l_pane

0x9ac3,	// (0x00095fdd) cell_cmail_l_pane_g1_ParamLimits

0x9ac3,	// (0x00095fdd) cell_cmail_l_pane_g1

0x9acf,	// (0x00095fe9) cell_cmail_l_pane_t1_ParamLimits

0x9acf,	// (0x00095fe9) cell_cmail_l_pane_t1

0xc1e2,	// (0x000986fc) cell_cmail_l_pane_t2_ParamLimits

0xc1e2,	// (0x000986fc) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0009c1e8) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0009c1e8) cell_cmail_l_pane_t

0xcf3e,	// (0x00099458) grid_highlight_pane_cp018_ParamLimits

0xcf3e,	// (0x00099458) grid_highlight_pane_cp018

0x246a,	// (0x0008e984) main2_pane_ParamLimits

0x246a,	// (0x0008e984) main2_pane

0xb458,	// (0x00097972) popup_sp_fs_action_menu_bg_pane_g1

0xb460,	// (0x0009797a) popup_sp_fs_action_menu_bg_pane_g2

0xb468,	// (0x00097982) popup_sp_fs_action_menu_bg_pane_g3

0xb470,	// (0x0009798a) popup_sp_fs_action_menu_bg_pane_g4

0xb478,	// (0x00097992) popup_sp_fs_action_menu_bg_pane_g5

0xb480,	// (0x0009799a) popup_sp_fs_action_menu_bg_pane_g6

0xb488,	// (0x000979a2) popup_sp_fs_action_menu_bg_pane_g7

0xb490,	// (0x000979aa) popup_sp_fs_action_menu_bg_pane_g8

0xb498,	// (0x000979b2) popup_sp_fs_action_menu_bg_pane_g9

0xb4a0,	// (0x000979ba) popup_sp_fs_action_menu_bg_pane_g10

0xb4a0,	// (0x000979ba) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0009b6ad) popup_sp_fs_action_menu_bg_pane_g

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g3_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g3_g1

0x3404,	// (0x0008f91e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_t3_g3_g2

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0009b75d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0009b75d) list_medium_line_x2_t3_g3_g

0x341c,	// (0x0008f936) list_medium_line_x2_t3_g3_t1_ParamLimits

0x341c,	// (0x0008f936) list_medium_line_x2_t3_g3_t1

0x3431,	// (0x0008f94b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3431,	// (0x0008f94b) list_medium_line_x2_t3_g3_t2

0x3443,	// (0x0008f95d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0009b764) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0009b764) list_medium_line_x2_t3_g3_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g2_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g2_g1

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0009b76b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0009b76b) list_medium_line_x2_t3_g2_g

0x3458,	// (0x0008f972) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3458,	// (0x0008f972) list_medium_line_x2_t3_g2_t1

0x346e,	// (0x0008f988) list_medium_line_x2_t3_g2_t2_ParamLimits

0x346e,	// (0x0008f988) list_medium_line_x2_t3_g2_t2

0x3480,	// (0x0008f99a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3480,	// (0x0008f99a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0009b770) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0009b770) list_medium_line_x2_t3_g2_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t4_g4_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t4_g4_g1

0x349d,	// (0x0008f9b7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x349d,	// (0x0008f9b7) list_medium_line_x2_t4_g4_g2

0x3404,	// (0x0008f91e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_t4_g4_g3

0x34a9,	// (0x0008f9c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x34a9,	// (0x0008f9c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0009b777) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0009b777) list_medium_line_x2_t4_g4_g

0x34b5,	// (0x0008f9cf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x34b5,	// (0x0008f9cf) list_medium_line_x2_t4_g4_t1

0x34cf,	// (0x0008f9e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x34cf,	// (0x0008f9e9) list_medium_line_x2_t4_g4_t2

0x34e5,	// (0x0008f9ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0x34e5,	// (0x0008f9ff) list_medium_line_x2_t4_g4_t3

0x34fa,	// (0x0008fa14) list_medium_line_x2_t4_g4_t4_ParamLimits

0x34fa,	// (0x0008fa14) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0009b780) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0009b780) list_medium_line_x2_t4_g4_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g4_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g4_g1

0x349d,	// (0x0008f9b7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x349d,	// (0x0008f9b7) list_medium_line_x2_t2_g4_g2

0x3404,	// (0x0008f91e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_t2_g4_g3

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0009b7e7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0009b7e7) list_medium_line_x2_t2_g4_g

0x464c,	// (0x00090b66) list_medium_line_x2_t2_g4_t1_ParamLimits

0x464c,	// (0x00090b66) list_medium_line_x2_t2_g4_t1

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0009b7f0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0009b7f0) list_medium_line_x2_t2_g4_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g3_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g3_g1

0x3404,	// (0x0008f91e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_t2_g3_g2

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0009b75d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0009b75d) list_medium_line_x2_t2_g3_g

0x4661,	// (0x00090b7b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4661,	// (0x00090b7b) list_medium_line_x2_t2_g3_t1

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0009b7f5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0009b7f5) list_medium_line_x2_t2_g3_t

0x480e,	// (0x00090d28) main_sp_fs_list_pane_ParamLimits

0x480e,	// (0x00090d28) main_sp_fs_list_pane

0x481a,	// (0x00090d34) sp_fs_scroll_pane_ParamLimits

0x481a,	// (0x00090d34) sp_fs_scroll_pane

0x4826,	// (0x00090d40) list_medium_line_x2_t3_t1

0x4836,	// (0x00090d50) list_medium_line_x2_t3_t2

0x4844,	// (0x00090d5e) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0009b840) list_medium_line_x2_t3_t

0x4852,	// (0x00090d6c) list_medium_line_x3_t4_t1

0x4862,	// (0x00090d7c) list_medium_line_x3_t4_t2

0x4870,	// (0x00090d8a) list_medium_line_x3_t4_t3

0x4844,	// (0x00090d5e) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0009b847) list_medium_line_x3_t4_t

0x487e,	// (0x00090d98) list_medium_line_x4_t5_t1

0x488e,	// (0x00090da8) list_medium_line_x4_t5_t2

0x4870,	// (0x00090d8a) list_medium_line_x4_t5_t3

0x489c,	// (0x00090db6) list_medium_line_x4_t5_t4

0x4844,	// (0x00090d5e) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0009b850) list_medium_line_x4_t5_t

0x33f8,	// (0x0008f912) list_medium_line_t4_g4_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_t4_g4_g1

0x34a9,	// (0x0008f9c3) list_medium_line_t4_g4_g2_ParamLimits

0x34a9,	// (0x0008f9c3) list_medium_line_t4_g4_g2

0x48aa,	// (0x00090dc4) list_medium_line_t4_g4_g3_ParamLimits

0x48aa,	// (0x00090dc4) list_medium_line_t4_g4_g3

0x3410,	// (0x0008f92a) list_medium_line_t4_g4_g4_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0009b85b) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0009b85b) list_medium_line_t4_g4_g

0x48b6,	// (0x00090dd0) list_medium_line_t4_g4_t1_ParamLimits

0x48b6,	// (0x00090dd0) list_medium_line_t4_g4_t1

0x48cb,	// (0x00090de5) list_medium_line_t4_g4_t2_ParamLimits

0x48cb,	// (0x00090de5) list_medium_line_t4_g4_t2

0x48e0,	// (0x00090dfa) list_medium_line_t4_g4_t3_ParamLimits

0x48e0,	// (0x00090dfa) list_medium_line_t4_g4_t3

0x3443,	// (0x0008f95d) list_medium_line_t4_g4_t4_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0009b864) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0009b864) list_medium_line_t4_g4_t

0x49f6,	// (0x00090f10) chi_dic_find_pane_g1

0x5a4a,	// (0x00091f64) main_tport_pane

0x83f7,	// (0x00094911) list_medium_line_plain_t1

0x84dc,	// (0x000949f6) list_medium_line_t2_g2_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t2_g2_g1

0x84e8,	// (0x00094a02) list_medium_line_t2_g2_g2_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0009bf20) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0009bf20) list_medium_line_t2_g2_g

0x84f4,	// (0x00094a0e) list_medium_line_t2_g2_t1_ParamLimits

0x84f4,	// (0x00094a0e) list_medium_line_t2_g2_t1

0x850e,	// (0x00094a28) list_medium_line_t2_g2_t2_ParamLimits

0x850e,	// (0x00094a28) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0009bf25) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0009bf25) list_medium_line_t2_g2_t

0x012a,	// (0x0008c644) aid_sp_fs_list_icon_a_sm

0x09fd,	// (0x0008cf17) aid_sp_fs_list_icon_d

0x0a05,	// (0x0008cf1f) aid_sp_fs_text_primary

0x0132,	// (0x0008c64c) aid_sp_fs_text_secondary

0x8b5f,	// (0x00095079) list_medium_line

0x8b5f,	// (0x00095079) list_medium_line_g2

0x8b5f,	// (0x00095079) list_medium_line_g3

0x8b5f,	// (0x00095079) list_medium_line_plain

0x8b5f,	// (0x00095079) list_medium_line_plain_t2

0x8b5f,	// (0x00095079) list_medium_line_plain_t3

0x8b5f,	// (0x00095079) list_medium_line_right_icon

0x8b5f,	// (0x00095079) list_medium_line_right_iconx2

0x8b5f,	// (0x00095079) list_medium_line_t2

0x8b5f,	// (0x00095079) list_medium_line_t2_g2

0x8b5f,	// (0x00095079) list_medium_line_t2_g3

0x8b5f,	// (0x00095079) list_medium_line_t2_right_icon

0x8b5f,	// (0x00095079) list_medium_line_t2_right_iconx2

0x8b5f,	// (0x00095079) list_medium_line_t3

0x8b5f,	// (0x00095079) list_medium_line_t3_g2

0x8b5f,	// (0x00095079) list_medium_line_t3_g3

0x8b5f,	// (0x00095079) list_medium_line_t3_right_iconx2

0x8b68,	// (0x00095082) list_medium_line_t4_g4

0x0f12,	// (0x0008d42c) list_medium_line_x2

0x0f12,	// (0x0008d42c) list_medium_line_x2_t2_g2

0x0f12,	// (0x0008d42c) list_medium_line_x2_t2_g3

0x0f12,	// (0x0008d42c) list_medium_line_x2_t2_g4

0x0f12,	// (0x0008d42c) list_medium_line_x2_t3

0x0f12,	// (0x0008d42c) list_medium_line_x2_t3_g2

0x0f12,	// (0x0008d42c) list_medium_line_x2_t3_g3

0x0f12,	// (0x0008d42c) list_medium_line_x2_t3_g4

0x0f12,	// (0x0008d42c) list_medium_line_x2_t4_g2

0x0f12,	// (0x0008d42c) list_medium_line_x2_t4_g4

0x8b71,	// (0x0009508b) list_medium_line_x3

0x8b71,	// (0x0009508b) list_medium_line_x3_t4

0x8b71,	// (0x0009508b) list_medium_line_x3_t4_g4

0x8b68,	// (0x00095082) list_medium_line_x4_t4

0x8b68,	// (0x00095082) list_medium_line_x4_t4_g7

0x8b68,	// (0x00095082) list_medium_line_x4_t5

0x8b7a,	// (0x00095094) list_single_fs_dyc_pane_ParamLimits

0x8b7a,	// (0x00095094) list_single_fs_dyc_pane

0x33f8,	// (0x0008f912) list_medium_line_x4_t4_g7_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x4_t4_g7_g1

0x92ed,	// (0x00095807) list_medium_line_x4_t4_g7_g2_ParamLimits

0x92ed,	// (0x00095807) list_medium_line_x4_t4_g7_g2

0x92f9,	// (0x00095813) list_medium_line_x4_t4_g7_g3_ParamLimits

0x92f9,	// (0x00095813) list_medium_line_x4_t4_g7_g3

0x9308,	// (0x00095822) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9308,	// (0x00095822) list_medium_line_x4_t4_g7_g4

0x9314,	// (0x0009582e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9314,	// (0x0009582e) list_medium_line_x4_t4_g7_g5

0x9323,	// (0x0009583d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9323,	// (0x0009583d) list_medium_line_x4_t4_g7_g6

0x9332,	// (0x0009584c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9332,	// (0x0009584c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0009c0f0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0009c0f0) list_medium_line_x4_t4_g7_g

0x933e,	// (0x00095858) list_medium_line_x4_t4_g7_t1_ParamLimits

0x933e,	// (0x00095858) list_medium_line_x4_t4_g7_t1

0x9353,	// (0x0009586d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9353,	// (0x0009586d) list_medium_line_x4_t4_g7_t2

0x9368,	// (0x00095882) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9368,	// (0x00095882) list_medium_line_x4_t4_g7_t3

0x937d,	// (0x00095897) list_medium_line_x4_t4_g7_t4_ParamLimits

0x937d,	// (0x00095897) list_medium_line_x4_t4_g7_t4

0x938f,	// (0x000958a9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x938f,	// (0x000958a9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0009c0ff) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0009c0ff) list_medium_line_x4_t4_g7_t

0x93a1,	// (0x000958bb) list_single_dyc_row_pane_ParamLimits

0x93a1,	// (0x000958bb) list_single_dyc_row_pane

0x9a3f,	// (0x00095f59) call5_gesture_pane_ParamLimits

0x9a3f,	// (0x00095f59) call5_gesture_pane

0x9a73,	// (0x00095f8d) call5_windows_pane_ParamLimits

0x9a73,	// (0x00095f8d) call5_windows_pane

0x9ae5,	// (0x00095fff) call5_swipe_1_pane_cp_ParamLimits

0x9ae5,	// (0x00095fff) call5_swipe_1_pane_cp

0x9af1,	// (0x0009600b) call5_swipe_2_pane_cp_ParamLimits

0x9af1,	// (0x0009600b) call5_swipe_2_pane_cp

0xcde5,	// (0x000992ff) call5_image_pane_cp

0x9afd,	// (0x00096017) popup_call5_audio_first_window_cp_ParamLimits

0x9afd,	// (0x00096017) popup_call5_audio_first_window_cp

0xc1b4,	// (0x000986ce) call5_swipe_1_pane_g1_cp_ParamLimits

0xc1b4,	// (0x000986ce) call5_swipe_1_pane_g1_cp

0xc1f4,	// (0x0009870e) call5_swipe_1_pane_g2_cp

0xc1cd,	// (0x000986e7) call5_swipe_1_pane_t1_cp_ParamLimits

0xc1cd,	// (0x000986e7) call5_swipe_1_pane_t1_cp

0xc1b4,	// (0x000986ce) call5_swipe_2_pane_g1_cp_ParamLimits

0xc1b4,	// (0x000986ce) call5_swipe_2_pane_g1_cp

0xc1fc,	// (0x00098716) call5_swipe_2_pane_g2_cp

0xc204,	// (0x0009871e) call5_swipe_2_pane_t1_cp_ParamLimits

0xc204,	// (0x0009871e) call5_swipe_2_pane_t1_cp

0xcf3e,	// (0x00099458) main_sp_fs_email_pane

0xc219,	// (0x00098733) main_sp_fs_listscroll_pane_te

0x9b0b,	// (0x00096025) popup_sp_fs_action_menu_pane_ParamLimits

0x9b0b,	// (0x00096025) popup_sp_fs_action_menu_pane

0xe689,	// (0x0009aba3) bg_sp_fs_ctrlbar_pane_g1

0xc222,	// (0x0009873c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc22b,	// (0x00098745) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc234,	// (0x0009874e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe689,	// (0x0009aba3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0009c1ed) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe465,	// (0x0009a97f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe465,	// (0x0009a97f) bg_sp_fs_ctrlbar_ddmenu_pane

0xc23d,	// (0x00098757) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc23d,	// (0x00098757) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc249,	// (0x00098763) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc249,	// (0x00098763) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0009c1f6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0009c1f6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc255,	// (0x0009876f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc255,	// (0x0009876f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9b4f,	// (0x00096069) list_medium_line_t2_right_icon_g1

0x9b57,	// (0x00096071) list_medium_line_t2_right_icon_t1

0x9b67,	// (0x00096081) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0009c1fb) list_medium_line_t2_right_icon_t

0xe278,	// (0x0009a792) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe278,	// (0x0009a792) bg_sp_fs_ctrlbar_pane

0x9bcc,	// (0x000960e6) main_sp_fs_ctrlbar_button_pane_cp01

0x9bd4,	// (0x000960ee) main_sp_fs_ctrlbar_ddmenu_pane

0xc2a7,	// (0x000987c1) main_sp_fs_ctrlbar_pane_g1

0xc2b3,	// (0x000987cd) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0009c200) main_sp_fs_ctrlbar_pane_g

0xc2bf,	// (0x000987d9) main_sp_fs_ctrlbar_pane_t1

0x9bde,	// (0x000960f8) main_sp_fs_ctrlbar_pane

0x9bf4,	// (0x0009610e) main_sp_fs_listscroll_pane_te_cp01

0x9c05,	// (0x0009611f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9c05,	// (0x0009611f) popup_sp_fs_action_menu_pane_cp01

0xcf3e,	// (0x00099458) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcf3e,	// (0x00099458) bg_sp_fs_highlight_list_pane_cp01

0x013b,	// (0x0008c655) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x013b,	// (0x0008c655) sp_fs_action_menu_list_gene_pane_g1

0xc2ef,	// (0x00098809) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc2ef,	// (0x00098809) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0009c20a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0009c20a) sp_fs_action_menu_list_gene_pane_g

0x014a,	// (0x0008c664) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x014a,	// (0x0008c664) sp_fs_action_menu_list_gene_pane_t1

0x0162,	// (0x0008c67c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0162,	// (0x0008c67c) sp_fs_action_menu_list_gene_pane

0xc2fc,	// (0x00098816) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc2fc,	// (0x00098816) popup_sp_fs_action_menu_bg_pane

0x0183,	// (0x0008c69d) sp_fs_action_menu_list_pane_ParamLimits

0x0183,	// (0x0008c69d) sp_fs_action_menu_list_pane

0x0f1b,	// (0x0008d435) sp_fs_scroll_pane_cp01_ParamLimits

0x0f1b,	// (0x0008d435) sp_fs_scroll_pane_cp01

0x9c2f,	// (0x00096149) list_medium_line_plain_t2_t1

0x9c3f,	// (0x00096159) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0009c20f) list_medium_line_plain_t2_t

0x9c4d,	// (0x00096167) list_medium_line_plain_t3_t1

0x9c5d,	// (0x00096177) list_medium_line_plain_t3_t2

0x9c6b,	// (0x00096185) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0009c214) list_medium_line_plain_t3_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g2_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t2_g2_g1

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0009b76b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0009b76b) list_medium_line_x2_t2_g2_g

0x48b6,	// (0x00090dd0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x48b6,	// (0x00090dd0) list_medium_line_x2_t2_g2_t1

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0009c21b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0009c21b) list_medium_line_x2_t2_g2_t

0x33f8,	// (0x0008f912) list_medium_line_x2_t4_g2_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t4_g2_g1

0x9c79,	// (0x00096193) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9c79,	// (0x00096193) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0009c220) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0009c220) list_medium_line_x2_t4_g2_g

0x9c8b,	// (0x000961a5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c8b,	// (0x000961a5) list_medium_line_x2_t4_g2_t1

0x9ca2,	// (0x000961bc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ca2,	// (0x000961bc) list_medium_line_x2_t4_g2_t2

0x9cb7,	// (0x000961d1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9cb7,	// (0x000961d1) list_medium_line_x2_t4_g2_t3

0x3443,	// (0x0008f95d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0009c225) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0009c225) list_medium_line_x2_t4_g2_t

0x9cc9,	// (0x000961e3) list_medium_line_t3_right_iconx2_g1

0x9b4f,	// (0x00096069) list_medium_line_t3_right_iconx2_g2

0x9cd1,	// (0x000961eb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0009c22e) list_medium_line_t3_right_iconx2_g

0x9cd9,	// (0x000961f3) list_medium_line_t3_right_iconx2_t1

0x9ce9,	// (0x00096203) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0009c235) list_medium_line_t3_right_iconx2_t

0x33f8,	// (0x0008f912) list_medium_line_x3_t4_g4_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x3_t4_g4_g1

0x3404,	// (0x0008f91e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x3_t4_g4_g2

0x34a9,	// (0x0008f9c3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x34a9,	// (0x0008f9c3) list_medium_line_x3_t4_g4_g3

0x9cf7,	// (0x00096211) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9cf7,	// (0x00096211) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0009c23a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0009c23a) list_medium_line_x3_t4_g4_g

0x9d03,	// (0x0009621d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9d03,	// (0x0009621d) list_medium_line_x3_t4_g4_t1

0x9d1a,	// (0x00096234) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9d1a,	// (0x00096234) list_medium_line_x3_t4_g4_t2

0x48cb,	// (0x00090de5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x48cb,	// (0x00090de5) list_medium_line_x3_t4_g4_t3

0x9d2f,	// (0x00096249) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9d2f,	// (0x00096249) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0009c243) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0009c243) list_medium_line_x3_t4_g4_t

0x9d4c,	// (0x00096266) list_single_dyc_row_text_pane_t1_ParamLimits

0x9d4c,	// (0x00096266) list_single_dyc_row_text_pane_t1

0x9d83,	// (0x0009629d) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d83,	// (0x0009629d) list_single_dyc_row_text_pane_t2

0x01a5,	// (0x0008c6bf) list_single_dyc_row_text_pane_t3_ParamLimits

0x01a5,	// (0x0008c6bf) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0009c24c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0009c24c) list_single_dyc_row_text_pane_t

0x01b7,	// (0x0008c6d1) list_single_dyc_row_pane_g1_ParamLimits

0x01b7,	// (0x0008c6d1) list_single_dyc_row_pane_g1

0x01c3,	// (0x0008c6dd) list_single_dyc_row_pane_g2_ParamLimits

0x01c3,	// (0x0008c6dd) list_single_dyc_row_pane_g2

0x01cf,	// (0x0008c6e9) list_single_dyc_row_pane_g3_ParamLimits

0x01cf,	// (0x0008c6e9) list_single_dyc_row_pane_g3

0x01db,	// (0x0008c6f5) list_single_dyc_row_pane_g4_ParamLimits

0x01db,	// (0x0008c6f5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009c253) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009c253) list_single_dyc_row_pane_g

0x01e7,	// (0x0008c701) list_single_dyc_row_text_pane_ParamLimits

0x01e7,	// (0x0008c701) list_single_dyc_row_text_pane

0x0f56,	// (0x0008d470) bg_sp_fs_scroll_pane

0xc30a,	// (0x00098824) thumb_sp_fs_scroll_pane

0x84dc,	// (0x000949f6) list_medium_line_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_g1

0x9ddd,	// (0x000962f7) list_medium_line_t1_ParamLimits

0x9ddd,	// (0x000962f7) list_medium_line_t1

0x33f8,	// (0x0008f912) list_medium_line_x2_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_g1

0x3404,	// (0x0008f91e) list_medium_line_x2_g2_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009c25c) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009c25c) list_medium_line_x2_g

0x0206,	// (0x0008c720) list_medium_line_x2_t1_ParamLimits

0x0206,	// (0x0008c720) list_medium_line_x2_t1

0x33f8,	// (0x0008f912) list_medium_line_x3_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x3_g1

0x3404,	// (0x0008f91e) list_medium_line_x3_g2_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009c25c) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009c25c) list_medium_line_x3_g

0x0206,	// (0x0008c720) list_medium_line_x3_t1_ParamLimits

0x0206,	// (0x0008c720) list_medium_line_x3_t1

0xc313,	// (0x0009882d) thumb_sp_fs_scroll_pane_g1

0xc31c,	// (0x00098836) thumb_sp_fs_scroll_pane_g2

0xc325,	// (0x0009883f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009c261) thumb_sp_fs_scroll_pane_g

0xc313,	// (0x0009882d) bg_sp_fs_scroll_pane_g1

0xc31c,	// (0x00098836) bg_sp_fs_scroll_pane_g2

0xc325,	// (0x0009883f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009c261) bg_sp_fs_scroll_pane_g

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g4_g1_ParamLimits

0x33f8,	// (0x0008f912) list_medium_line_x2_t3_g4_g1

0x349d,	// (0x0008f9b7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x349d,	// (0x0008f9b7) list_medium_line_x2_t3_g4_g2

0x3404,	// (0x0008f91e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3404,	// (0x0008f91e) list_medium_line_x2_t3_g4_g3

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3410,	// (0x0008f92a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0009b7e7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0009b7e7) list_medium_line_x2_t3_g4_g

0x9df2,	// (0x0009630c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9df2,	// (0x0009630c) list_medium_line_x2_t3_g4_t1

0x9e08,	// (0x00096322) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9e08,	// (0x00096322) list_medium_line_x2_t3_g4_t2

0x3443,	// (0x0008f95d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3443,	// (0x0008f95d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009c268) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009c268) list_medium_line_x2_t3_g4_t

0x84dc,	// (0x000949f6) list_medium_line_g2_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_g2_g1

0x84e8,	// (0x00094a02) list_medium_line_g2_g2_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0009bf20) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0009bf20) list_medium_line_g2_g

0x9e22,	// (0x0009633c) list_medium_line_g2_t1_ParamLimits

0x9e22,	// (0x0009633c) list_medium_line_g2_t1

0x84dc,	// (0x000949f6) list_medium_line_t3_g2_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t3_g2_g1

0x84e8,	// (0x00094a02) list_medium_line_t3_g2_g2_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0009bf20) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0009bf20) list_medium_line_t3_g2_g

0x9e37,	// (0x00096351) list_medium_line_t3_g2_t1_ParamLimits

0x9e37,	// (0x00096351) list_medium_line_t3_g2_t1

0x9e4e,	// (0x00096368) list_medium_line_t3_g2_t2_ParamLimits

0x9e4e,	// (0x00096368) list_medium_line_t3_g2_t2

0x9e63,	// (0x0009637d) list_medium_line_t3_g2_t3_ParamLimits

0x9e63,	// (0x0009637d) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009c26f) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009c26f) list_medium_line_t3_g2_t

0x9b4f,	// (0x00096069) list_medium_line_right_icon_g1

0x9e78,	// (0x00096392) list_medium_line_right_icon_t1

0x84dc,	// (0x000949f6) list_medium_line_t2_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t2_g1

0x9e86,	// (0x000963a0) list_medium_line_t2_t1_ParamLimits

0x9e86,	// (0x000963a0) list_medium_line_t2_t1

0x9ea0,	// (0x000963ba) list_medium_line_t2_t2_ParamLimits

0x9ea0,	// (0x000963ba) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009c276) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009c276) list_medium_line_t2_t

0x84dc,	// (0x000949f6) list_medium_line_t3_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t3_g1

0x9eb5,	// (0x000963cf) list_medium_line_t3_t1_ParamLimits

0x9eb5,	// (0x000963cf) list_medium_line_t3_t1

0x9ecc,	// (0x000963e6) list_medium_line_t3_t2_ParamLimits

0x9ecc,	// (0x000963e6) list_medium_line_t3_t2

0x9ee1,	// (0x000963fb) list_medium_line_t3_t3_ParamLimits

0x9ee1,	// (0x000963fb) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009c27b) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009c27b) list_medium_line_t3_t

0x84dc,	// (0x000949f6) list_medium_line_g3_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_g3_g1

0x9ef3,	// (0x0009640d) list_medium_line_g3_g2_ParamLimits

0x9ef3,	// (0x0009640d) list_medium_line_g3_g2

0x84e8,	// (0x00094a02) list_medium_line_g3_g3_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009c282) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009c282) list_medium_line_g3_g

0x9eff,	// (0x00096419) list_medium_line_g3_t1_ParamLimits

0x9eff,	// (0x00096419) list_medium_line_g3_t1

0x84dc,	// (0x000949f6) list_medium_line_t2_g3_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t2_g3_g1

0x9ef3,	// (0x0009640d) list_medium_line_t2_g3_g2_ParamLimits

0x9ef3,	// (0x0009640d) list_medium_line_t2_g3_g2

0x84e8,	// (0x00094a02) list_medium_line_t2_g3_g3_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009c282) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009c282) list_medium_line_t2_g3_g

0x9f14,	// (0x0009642e) list_medium_line_t2_g3_t1_ParamLimits

0x9f14,	// (0x0009642e) list_medium_line_t2_g3_t1

0x9f2e,	// (0x00096448) list_medium_line_t2_g3_t2_ParamLimits

0x9f2e,	// (0x00096448) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009c289) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009c289) list_medium_line_t2_g3_t

0x84dc,	// (0x000949f6) list_medium_line_t3_g3_g1_ParamLimits

0x84dc,	// (0x000949f6) list_medium_line_t3_g3_g1

0x9ef3,	// (0x0009640d) list_medium_line_t3_g3_g2_ParamLimits

0x9ef3,	// (0x0009640d) list_medium_line_t3_g3_g2

0x84e8,	// (0x00094a02) list_medium_line_t3_g3_g3_ParamLimits

0x84e8,	// (0x00094a02) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009c282) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009c282) list_medium_line_t3_g3_g

0x9f43,	// (0x0009645d) list_medium_line_t3_g3_t1_ParamLimits

0x9f43,	// (0x0009645d) list_medium_line_t3_g3_t1

0x9f57,	// (0x00096471) list_medium_line_t3_g3_t2_ParamLimits

0x9f57,	// (0x00096471) list_medium_line_t3_g3_t2

0x9f69,	// (0x00096483) list_medium_line_t3_g3_t3_ParamLimits

0x9f69,	// (0x00096483) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009c28e) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009c28e) list_medium_line_t3_g3_t

0x9cc9,	// (0x000961e3) list_medium_line_right_iconx2_g1

0x9b4f,	// (0x00096069) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009c295) list_medium_line_right_iconx2_g

0x9f7b,	// (0x00096495) list_medium_line_right_iconx2_t1

0x9cc9,	// (0x000961e3) list_medium_line_t2_right_iconx2_g1

0x9b4f,	// (0x00096069) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009c295) list_medium_line_t2_right_iconx2_g

0x9f89,	// (0x000964a3) list_medium_line_t2_right_iconx2_t1

0x9f99,	// (0x000964b3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009c29a) list_medium_line_t2_right_iconx2_t

0x9fa7,	// (0x000964c1) list_medium_line_x4_t4_t1

0x9fb5,	// (0x000964cf) list_medium_line_x4_t4_t2

0x9fc5,	// (0x000964df) list_medium_line_x4_t4_t3

0x9fd5,	// (0x000964ef) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009c29f) list_medium_line_x4_t4_t

0xa00f,	// (0x00096529) tport_appsw_pane_ParamLimits

0xa00f,	// (0x00096529) tport_appsw_pane

0xa01d,	// (0x00096537) tport_contact_pane_ParamLimits

0xa01d,	// (0x00096537) tport_contact_pane

0xa02d,	// (0x00096547) tport_listscroll_pane_ParamLimits

0xa02d,	// (0x00096547) tport_listscroll_pane

0xa03d,	// (0x00096557) cell_tport_appsw_pane_ParamLimits

0xa03d,	// (0x00096557) cell_tport_appsw_pane

0xe9a9,	// (0x0009aec3) tport_appsw_pane_g1_ParamLimits

0xe9a9,	// (0x0009aec3) tport_appsw_pane_g1

0xc32e,	// (0x00098848) tport_contact_pane_g1

0xbccd,	// (0x000981e7) tport_contact_pane_t1

0xc337,	// (0x00098851) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009c2a8) tport_contact_pane_t

0xc345,	// (0x0009885f) list_tport_pane

0xc34e,	// (0x00098868) scroll_pane_cp_030

0xa070,	// (0x0009658a) cell_tport_appsw_pane_g1

0xa080,	// (0x0009659a) cell_tport_appsw_pane_t1

0x0f56,	// (0x0008d470) grid_highlight_pane_cp019

0xa08e,	// (0x000965a8) list_tport_double_graphic_pane_ParamLimits

0xa08e,	// (0x000965a8) list_tport_double_graphic_pane

0xcf3e,	// (0x00099458) list_highlight_pane_cp023_ParamLimits

0xcf3e,	// (0x00099458) list_highlight_pane_cp023

0xa09f,	// (0x000965b9) list_tport_double_graphic_pane_g1_ParamLimits

0xa09f,	// (0x000965b9) list_tport_double_graphic_pane_g1

0xa0ac,	// (0x000965c6) list_tport_double_graphic_pane_t1_ParamLimits

0xa0ac,	// (0x000965c6) list_tport_double_graphic_pane_t1

0xa0c1,	// (0x000965db) list_tport_double_graphic_pane_t2_ParamLimits

0xa0c1,	// (0x000965db) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009c2b4) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009c2b4) list_tport_double_graphic_pane_t

0x0f56,	// (0x0008d470) main_cale_note_pane

0x7cd5,	// (0x000941ef) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7cd5,	// (0x000941ef) cell_vitu2_function_top_wide_pane_cp01

0x9702,	// (0x00095c1c) wait_bar_pane_cp05_ParamLimits

0xcf3e,	// (0x00099458) listscroll_cmail_pane

0xc357,	// (0x00098871) list_cmail_pane

0xa0d3,	// (0x000965ed) list_cmail_body_pane

0xa0f3,	// (0x0009660d) list_single_cmail_header_caption_pane

0xa11e,	// (0x00096638) list_single_cmail_header_detail_pane_ParamLimits

0xa11e,	// (0x00096638) list_single_cmail_header_detail_pane

0xc367,	// (0x00098881) list_single_cmail_header_caption_pane_t1

0xa15d,	// (0x00096677) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa15d,	// (0x00096677) list_single_cmail_header_detail_pane_g1

0x0f41,	// (0x0008d45b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0f41,	// (0x0008d45b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009c2b9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009c2b9) list_single_cmail_header_detail_pane_g

0xa173,	// (0x0009668d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa173,	// (0x0009668d) list_single_cmail_header_detail_pane_t1

0xa1af,	// (0x000966c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa1af,	// (0x000966c9) list_single_cmail_header_editor_pane_bg

0xbe6e,	// (0x00098388) list_cmail_body_pane_g1

0xc382,	// (0x0009889c) list_cmail_body_pane_t1

0x0464,	// (0x0008c97e) list_single_cmail_header_editor_pane_bg_g1

0xb7e0,	// (0x00097cfa) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0474,	// (0x0008c98e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x046c,	// (0x0008c986) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06eb,	// (0x0008cc05) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0494,	// (0x0008c9ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0484,	// (0x0008c99e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x048c,	// (0x0008c9a6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb7c0,	// (0x00097cda) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa1c6,	// (0x000966e0) calenote_gesture_pane_ParamLimits

0xa1c6,	// (0x000966e0) calenote_gesture_pane

0xa1e0,	// (0x000966fa) calenote_window_pane_ParamLimits

0xa1e0,	// (0x000966fa) calenote_window_pane

0xc390,	// (0x000988aa) popup_note_window_cp01

0xa1f8,	// (0x00096712) calenote_swipe_1_pane_ParamLimits

0xa1f8,	// (0x00096712) calenote_swipe_1_pane

0x9af1,	// (0x0009600b) calenote_swipe_2_pane_ParamLimits

0x9af1,	// (0x0009600b) calenote_swipe_2_pane

0xc1b4,	// (0x000986ce) calenote_swipe_1_pane_g1_ParamLimits

0xc1b4,	// (0x000986ce) calenote_swipe_1_pane_g1

0xc1c1,	// (0x000986db) calenote_swipe_1_pane_g2_ParamLimits

0xc1c1,	// (0x000986db) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0009c1e3) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0009c1e3) calenote_swipe_1_pane_g

0xc3a2,	// (0x000988bc) calenote_swipe_1_pane_t1_ParamLimits

0xc3a2,	// (0x000988bc) calenote_swipe_1_pane_t1

0xc1b4,	// (0x000986ce) calenote_swipe_2_pane_g1_ParamLimits

0xc1b4,	// (0x000986ce) calenote_swipe_2_pane_g1

0xc3c1,	// (0x000988db) calenote_swipe_2_pane_g2_ParamLimits

0xc3c1,	// (0x000988db) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009c2c5) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009c2c5) calenote_swipe_2_pane_g

0xc3cd,	// (0x000988e7) calenote_swipe_2_pane_t1_ParamLimits

0xc3cd,	// (0x000988e7) calenote_swipe_2_pane_t1

0x0f56,	// (0x0008d470) main_mup_navstr_pane

0x6a30,	// (0x00092f4a) main_mup3_pane_t7_ParamLimits

0x6a30,	// (0x00092f4a) main_mup3_pane_t7

0x7435,	// (0x0009394f) main_mp4_pane_g6_ParamLimits

0x7435,	// (0x0009394f) main_mp4_pane_g6

0x77b5,	// (0x00093ccf) main_image3_pane_t4_ParamLimits

0x77b5,	// (0x00093ccf) main_image3_pane_t4

0xa20b,	// (0x00096725) popup_navstr_preview_pane_ParamLimits

0xa20b,	// (0x00096725) popup_navstr_preview_pane

0xa217,	// (0x00096731) scroll_navstr_pane_ParamLimits

0xa217,	// (0x00096731) scroll_navstr_pane

0x0f56,	// (0x0008d470) bg_popup_preview_window_pane_cp04

0xc3fc,	// (0x00098916) popup_navstr_preview_pane_t1

0xa223,	// (0x0009673d) scroll_navstr_pane_g1_ParamLimits

0xa223,	// (0x0009673d) scroll_navstr_pane_g1

0xa230,	// (0x0009674a) scroll_navstr_pane_t1_ParamLimits

0xa230,	// (0x0009674a) scroll_navstr_pane_t1

0xc399,	// (0x000988b3) bg_button_pane_cp014

0xc399,	// (0x000988b3) bg_button_pane_cp030

0x99e5,	// (0x00095eff) list_double_fisheye_pane_g4_ParamLimits

0x99e5,	// (0x00095eff) list_double_fisheye_pane_g4

0x99f1,	// (0x00095f0b) list_double_fisheye_pane_g5_ParamLimits

0x99f1,	// (0x00095f0b) list_double_fisheye_pane_g5

0x1344,	// (0x0008d85e) sp_fs_scroll_pane_cp03

0xc2a7,	// (0x000987c1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc2b3,	// (0x000987cd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0009c200) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc2bf,	// (0x000987d9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc35f,	// (0x00098879) sp_fs_scroll_pane_cp02

0xb4c3,	// (0x000979dd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb4c3,	// (0x000979dd) popup_sp_fs_calendar_preview_list_single_pane

0x0f56,	// (0x0008d470) main_cam6_pano_pane

0x5a2e,	// (0x00091f48) main_mup3_pane_ParamLimits

0x0f56,	// (0x0008d470) main_phacti_pane

0x95d7,	// (0x00095af1) bg_button_pane_cp11

0x95ef,	// (0x00095b09) main_mobtv_info_pane_g2_ParamLimits

0x95ef,	// (0x00095b09) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0009c160) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0009c160) main_mobtv_info_pane_g

0x97a1,	// (0x00095cbb) sc_clock_pane_t5_ParamLimits

0x97a1,	// (0x00095cbb) sc_clock_pane_t5

0x9856,	// (0x00095d70) main_radioblah_pane_g1_ParamLimits

0xc100,	// (0x0009861a) main_radioblah_pane_t3_ParamLimits

0xc100,	// (0x0009861a) main_radioblah_pane_t3

0xc118,	// (0x00098632) main_radioblah_pane_t4_ParamLimits

0xc118,	// (0x00098632) main_radioblah_pane_t4

0x9874,	// (0x00095d8e) main_radioblah_text_pane_ParamLimits

0x9874,	// (0x00095d8e) main_radioblah_text_pane

0x9881,	// (0x00095d9b) main_radioblah_info_pane_g1_ParamLimits

0x9916,	// (0x00095e30) main_radioblah_info_pane_t4_ParamLimits

0x9916,	// (0x00095e30) main_radioblah_info_pane_t4

0xcf3e,	// (0x00099458) main_sp_fs_calendar_pane

0xa242,	// (0x0009675c) main_phacti_pane_g1

0xa24a,	// (0x00096764) phacti_note_pane_ParamLimits

0xa24a,	// (0x00096764) phacti_note_pane

0xc413,	// (0x0009892d) phacti_term_pane_ParamLimits

0xc413,	// (0x0009892d) phacti_term_pane

0xc428,	// (0x00098942) phacti_note_pane_t1_ParamLimits

0xc428,	// (0x00098942) phacti_note_pane_t1

0x0240,	// (0x0008c75a) phacti_term_pane_g1

0x0248,	// (0x0008c762) phacti_term_pane_t1_ParamLimits

0x0248,	// (0x0008c762) phacti_term_pane_t1

0xc43f,	// (0x00098959) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb5e1,	// (0x00097afb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009c2cf) popup_sp_fs_calendar_preview_list_single_pane_g

0xc447,	// (0x00098961) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc447,	// (0x00098961) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc45c,	// (0x00098976) aid_popup_sp_fs_bg_corner_pane

0xe689,	// (0x0009aba3) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f56,	// (0x0008d470) popup_sp_fs_calendar_preview_bg_pane

0xc464,	// (0x0009897e) popup_sp_fs_calendar_preview_list_pane

0xe278,	// (0x0009a792) bg_main_sp_fs_cale_pane_ParamLimits

0xe278,	// (0x0009a792) bg_main_sp_fs_cale_pane

0x0272,	// (0x0008c78c) listscroll_cale_mrui_pane_ParamLimits

0x0272,	// (0x0008c78c) listscroll_cale_mrui_pane

0x0287,	// (0x0008c7a1) listscroll_sp_fs_schedule_track_pane

0x0290,	// (0x0008c7aa) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0290,	// (0x0008c7aa) main_sp_fs_ctrlbar_pane_cp01

0xc46c,	// (0x00098986) main_sp_fs_ribbon_pane

0x02a3,	// (0x0008c7bd) popup_sp_fs_cale_preview_window

0xa2ad,	// (0x000967c7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa2ad,	// (0x000967c7) list_single_sp_fs_schedule_track_pane

0xcf58,	// (0x00099472) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcf58,	// (0x00099472) bg_sp_fs_highlight_list_pane_cp03

0xa2cf,	// (0x000967e9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa2cf,	// (0x000967e9) list_single_sp_fs_schedule_track_pane_g1

0xa2db,	// (0x000967f5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2db,	// (0x000967f5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009c2d4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009c2d4) list_single_sp_fs_schedule_track_pane_g

0xa2e7,	// (0x00096801) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa2e7,	// (0x00096801) list_single_sp_fs_schedule_track_pane_t1

0xa2ff,	// (0x00096819) sp_fs_schedule_track_pane_ParamLimits

0xa2ff,	// (0x00096819) sp_fs_schedule_track_pane

0xc474,	// (0x0009898e) sp_fs_schedule_track_pane_g1

0xc47c,	// (0x00098996) sp_fs_schedule_track_pane_g2

0xc484,	// (0x0009899e) sp_fs_schedule_track_pane_g3

0xc48c,	// (0x000989a6) sp_fs_schedule_track_pane_g4

0xc494,	// (0x000989ae) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009c2d9) sp_fs_schedule_track_pane_g

0x0464,	// (0x0008c97e) bg_sp_fs_schedule_viewer_highlight_g1

0xb7e0,	// (0x00097cfa) bg_sp_fs_schedule_viewer_highlight_g2

0x046c,	// (0x0008c986) bg_sp_fs_schedule_viewer_highlight_g3

0x0474,	// (0x0008c98e) bg_sp_fs_schedule_viewer_highlight_g4

0x06eb,	// (0x0008cc05) bg_sp_fs_schedule_viewer_highlight_g5

0x0484,	// (0x0008c99e) bg_sp_fs_schedule_viewer_highlight_g6

0x048c,	// (0x0008c9a6) bg_sp_fs_schedule_viewer_highlight_g7

0x0494,	// (0x0008c9ae) bg_sp_fs_schedule_viewer_highlight_g8

0xb7c0,	// (0x00097cda) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009c2e4) bg_sp_fs_schedule_viewer_highlight_g

0x0f56,	// (0x0008d470) bg_main_sp_fs_ribbon_pane

0xa30f,	// (0x00096829) main_sp_fs_ribbon_pane_g1

0xc49c,	// (0x000989b6) main_sp_fs_ribbon_pane_t1

0xa318,	// (0x00096832) main_sp_fs_ribbon_pane_t2

0xc4ab,	// (0x000989c5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009c2f7) main_sp_fs_ribbon_pane_t

0xc4ba,	// (0x000989d4) main_sp_fs_ribbon_scheduler_pane

0xc4c2,	// (0x000989dc) bg_main_sp_fs_ribbon_pane_g1

0xc4cb,	// (0x000989e5) bg_main_sp_fs_ribbon_pane_g2

0xc4d4,	// (0x000989ee) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009c2fe) bg_main_sp_fs_ribbon_pane_g

0xc4dc,	// (0x000989f6) main_sp_fs_ribbon_scheduler_pane_g1

0xc4e5,	// (0x000989ff) main_sp_fs_ribbon_scheduler_pane_g2

0xc4ee,	// (0x00098a08) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009c305) main_sp_fs_ribbon_scheduler_pane_g

0xc4f7,	// (0x00098a11) list_cale_mrui_pane

0xa327,	// (0x00096841) sp_fs_scroll_pane_cp07_ParamLimits

0xa327,	// (0x00096841) sp_fs_scroll_pane_cp07

0xa343,	// (0x0009685d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa343,	// (0x0009685d) bg_sp_fs_schedule_viewer_highlight

0xc504,	// (0x00098a1e) list_single_sp_fs_schedule_track_pane_cp01

0xc50c,	// (0x00098a26) list_sp_fs_schedule_track_pane

0xc514,	// (0x00098a2e) sp_fs_scroll_pane_cp06_ParamLimits

0xc514,	// (0x00098a2e) sp_fs_scroll_pane_cp06

0xe689,	// (0x0009aba3) bgmain_sp_fs_calendar_pane_g1

0xa350,	// (0x0009686a) list_single_cale_mrui_pane_ParamLimits

0xa350,	// (0x0009686a) list_single_cale_mrui_pane

0x02b5,	// (0x0008c7cf) list_single_cale_mrui_row_pane_ParamLimits

0x02b5,	// (0x0008c7cf) list_single_cale_mrui_row_pane

0x02c2,	// (0x0008c7dc) list_single_cale_mrui_row_pane_g1_ParamLimits

0x02c2,	// (0x0008c7dc) list_single_cale_mrui_row_pane_g1

0x02fa,	// (0x0008c814) list_single_cale_mrui_row_pane_t1_ParamLimits

0x02fa,	// (0x0008c814) list_single_cale_mrui_row_pane_t1

0xa37d,	// (0x00096897) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa37d,	// (0x00096897) list_single_cale_mrui_row_pane_t2

0x030c,	// (0x0008c826) list_single_cale_mrui_row_pane_t3_ParamLimits

0x030c,	// (0x0008c826) list_single_cale_mrui_row_pane_t3

0x033b,	// (0x0008c855) list_single_cale_mrui_row_pane_t4_ParamLimits

0x033b,	// (0x0008c855) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009c313) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009c313) list_single_cale_mrui_row_pane_t

0xa3e3,	// (0x000968fd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa3e3,	// (0x000968fd) list_single_cmail_header_editor_pane_bg_cp01

0xa403,	// (0x0009691d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa403,	// (0x0009691d) list_single_cmail_header_editor_pane_bg_cp02

0xa41f,	// (0x00096939) main_radioblah_text_pane_t1_ParamLimits

0xa41f,	// (0x00096939) main_radioblah_text_pane_t1

0xc533,	// (0x00098a4d) cam6_indi_pane_cp01

0xc53b,	// (0x00098a55) cam6_mode_pane_cp01

0xc543,	// (0x00098a5d) cam6_pano_pane

0xc54c,	// (0x00098a66) cam6_zoom_pane_cp01

0xc554,	// (0x00098a6e) cam6_pano_image_pane

0xc55f,	// (0x00098a79) cam6_pano_pane_g1

0xbe6e,	// (0x00098388) cam6_pano_pane_g2

0xc568,	// (0x00098a82) cam6_pano_pane_g3

0xc571,	// (0x00098a8b) cam6_pano_pane_g4

0xec84,	// (0x0009b19e) cam6_pano_pane_g5

0xc57a,	// (0x00098a94) cam6_pano_pane_g6

0xc3f4,	// (0x0009890e) cam6_pano_pane_g7

0xc584,	// (0x00098a9e) cam6_pano_pane_g8

0xc58d,	// (0x00098aa7) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009c31c) cam6_pano_pane_g

0x0f56,	// (0x0008d470) main_browser_tag_pane

0xc3ec,	// (0x00098906) grid_navstr_albumart_pane

0xc598,	// (0x00098ab2) cell_navstr_albumart_pane_ParamLimits

0xc598,	// (0x00098ab2) cell_navstr_albumart_pane

0xc5b8,	// (0x00098ad2) cell_navstr_albumart_pane_g1

0xe089,	// (0x0009a5a3) cell_navstr_albumart_pane_g2

0xe099,	// (0x0009a5b3) cell_navstr_albumart_pane_g3

0xe091,	// (0x0009a5ab) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009c32f) cell_navstr_albumart_pane_g

0xa43a,	// (0x00096954) bt_list_pane_ParamLimits

0xa43a,	// (0x00096954) bt_list_pane

0xa45a,	// (0x00096974) bt_list_pane_t1

0xa469,	// (0x00096983) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009c338) bt_list_pane_t

0x0f56,	// (0x0008d470) main_cale_prevew_pane

0xa478,	// (0x00096992) popup_cale_preview_window_ParamLimits

0xa478,	// (0x00096992) popup_cale_preview_window

0xcf3e,	// (0x00099458) bg_popup_preview_window_pane_cp05_ParamLimits

0xcf3e,	// (0x00099458) bg_popup_preview_window_pane_cp05

0xc5c0,	// (0x00098ada) list_cale_preview_pane_ParamLimits

0xc5c0,	// (0x00098ada) list_cale_preview_pane

0xa491,	// (0x000969ab) list_double_cale_preview_pane_ParamLimits

0xa491,	// (0x000969ab) list_double_cale_preview_pane

0xa4a3,	// (0x000969bd) list_single_cale_preview_pane_ParamLimits

0xa4a3,	// (0x000969bd) list_single_cale_preview_pane

0xa4b9,	// (0x000969d3) list_single_cale_preview_pane_g1

0xa4c1,	// (0x000969db) list_single_cale_preview_pane_t1_ParamLimits

0xa4c1,	// (0x000969db) list_single_cale_preview_pane_t1

0xa4d6,	// (0x000969f0) list_double_cale_preview_pane_g1

0xa4de,	// (0x000969f8) list_double_cale_preview_pane_t1_ParamLimits

0xa4de,	// (0x000969f8) list_double_cale_preview_pane_t1

0xa4f3,	// (0x00096a0d) list_double_cale_preview_pane_t2_ParamLimits

0xa4f3,	// (0x00096a0d) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009c33d) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009c33d) list_double_cale_preview_pane_t

0x0f56,	// (0x0008d470) main_ezdial_pane

0xcf3e,	// (0x00099458) main_sp_fs_email_pane_ParamLimits

0x9b75,	// (0x0009608f) cmail_ddmenu_btn01_pane_ParamLimits

0x9b75,	// (0x0009608f) cmail_ddmenu_btn01_pane

0x9b92,	// (0x000960ac) cmail_ddmenu_btn02_pane_ParamLimits

0x9b92,	// (0x000960ac) cmail_ddmenu_btn02_pane

0x9bb0,	// (0x000960ca) cmail_ddmenu_btn03_pane_ParamLimits

0x9bb0,	// (0x000960ca) cmail_ddmenu_btn03_pane

0x9bde,	// (0x000960f8) main_sp_fs_ctrlbar_pane_ParamLimits

0x9bf4,	// (0x0009610e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0d3,	// (0x000965ed) list_cmail_body_pane_ParamLimits

0xa154,	// (0x0009666e) bg_button_pane_cp12

0xc375,	// (0x0009888f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc375,	// (0x0009888f) list_single_cmail_header_detail_pane_g3

0x021c,	// (0x0008c736) list_single_cmail_header_detail_pane_t2_ParamLimits

0x021c,	// (0x0008c736) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009c2c0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009c2c0) list_single_cmail_header_detail_pane_t

0x025d,	// (0x0008c777) phacti_term_pane_t2_ParamLimits

0x025d,	// (0x0008c777) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009c2ca) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009c2ca) phacti_term_pane_t

0xc5cc,	// (0x00098ae6) aid_size_list_single_double

0xa50b,	// (0x00096a25) popup_ezdial_listscroll_window

0xa52c,	// (0x00096a46) popup_number_entry_window_cp01

0xcde5,	// (0x000992ff) bg_popup_call_pane_cp09

0xc5d8,	// (0x00098af2) ezdial_list_pane

0xc5e0,	// (0x00098afa) scroll_pane_cp23

0xe465,	// (0x0009a97f) bg_button_pane_cp028_ParamLimits

0xe465,	// (0x0009a97f) bg_button_pane_cp028

0xa53a,	// (0x00096a54) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa53a,	// (0x00096a54) cmail_ddmenu_btn01_pane_g1

0xa54c,	// (0x00096a66) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa54c,	// (0x00096a66) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009c342) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009c342) cmail_ddmenu_btn01_pane_g

0xc5e8,	// (0x00098b02) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc5e8,	// (0x00098b02) cmail_ddmenu_btn01_pane_t1

0xe278,	// (0x0009a792) bg_button_pane_cp029_ParamLimits

0xe278,	// (0x0009a792) bg_button_pane_cp029

0xa54c,	// (0x00096a66) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa54c,	// (0x00096a66) cmail_ddmenu_btn02_pane_g1

0xa564,	// (0x00096a7e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa564,	// (0x00096a7e) cmail_ddmenu_btn02_pane_t1

0xcf58,	// (0x00099472) bg_button_pane_cp031_ParamLimits

0xcf58,	// (0x00099472) bg_button_pane_cp031

0xa54c,	// (0x00096a66) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa54c,	// (0x00096a66) cmail_ddmenu_btn03_pane_g1

0xa564,	// (0x00096a7e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa564,	// (0x00096a7e) cmail_ddmenu_btn03_pane_t1

0x7652,	// (0x00093b6c) cell_dialer2_keypad_pane_t1_ParamLimits

0x766c,	// (0x00093b86) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x766c,	// (0x00093b86) cell_dialer2_keypad_pane_t1_copy1

0x945c,	// (0x00095976) ncimui_group_button_pane

0xcf3e,	// (0x00099458) main_sp_fs_calendar_pane_ParamLimits

0xa0f3,	// (0x0009660d) list_single_cmail_header_caption_pane_ParamLimits

0x0f4d,	// (0x0008d467) aid_recal_txt_sm_pane

0x0f56,	// (0x0008d470) mian_recal_day_pane

0x02a3,	// (0x0008c7bd) popup_sp_fs_cale_preview_window_ParamLimits

0xc5fd,	// (0x00098b17) list_recal_day_pane

0x0386,	// (0x0008c8a0) list_single_recal_day_pane_ParamLimits

0x0386,	// (0x0008c8a0) list_single_recal_day_pane

0xc624,	// (0x00098b3e) list_single_recal_day_pane_g1_ParamLimits

0xc624,	// (0x00098b3e) list_single_recal_day_pane_g1

0x0398,	// (0x0008c8b2) list_single_recal_day_pane_g2_ParamLimits

0x0398,	// (0x0008c8b2) list_single_recal_day_pane_g2

0x03a8,	// (0x0008c8c2) list_single_recal_day_pane_g3_ParamLimits

0x03a8,	// (0x0008c8c2) list_single_recal_day_pane_g3

0xa588,	// (0x00096aa2) list_single_recal_day_pane_g4_ParamLimits

0xa588,	// (0x00096aa2) list_single_recal_day_pane_g4

0x03b4,	// (0x0008c8ce) list_single_recal_day_pane_g5_ParamLimits

0x03b4,	// (0x0008c8ce) list_single_recal_day_pane_g5

0x03c4,	// (0x0008c8de) list_single_recal_day_pane_g6_ParamLimits

0x03c4,	// (0x0008c8de) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009c351) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009c351) list_single_recal_day_pane_g

0x03d8,	// (0x0008c8f2) list_single_recal_day_pane_t1

0x03ea,	// (0x0008c904) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009c35c) list_single_recal_day_pane_t

0xa5a8,	// (0x00096ac2) ncimui_query_button_pane_ParamLimits

0xa5a8,	// (0x00096ac2) ncimui_query_button_pane

0xa5b8,	// (0x00096ad2) ncimui_query_button_pane_t1_ParamLimits

0xa5b8,	// (0x00096ad2) ncimui_query_button_pane_t1

0xc630,	// (0x00098b4a) ncimui_query_button_pane_t2_ParamLimits

0xc630,	// (0x00098b4a) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009c361) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009c361) ncimui_query_button_pane_t

0xa5cb,	// (0x00096ae5) query_button_pane_ParamLimits

0xa5cb,	// (0x00096ae5) query_button_pane

0x0f56,	// (0x0008d470) bg_button_pane_cp0028

0xc643,	// (0x00098b5d) query_button_pane_t1

0x5a4a,	// (0x00091f64) main_tport_pane_ParamLimits

0x9fe5,	// (0x000964ff) bg_popup_window_pane_cp01_ParamLimits

0x9fe5,	// (0x000964ff) bg_popup_window_pane_cp01

0x9ff3,	// (0x0009650d) heading_pane_cp08_ParamLimits

0x9ff3,	// (0x0009650d) heading_pane_cp08

0xa001,	// (0x0009651b) heading_pane_cp07_ParamLimits

0xa001,	// (0x0009651b) heading_pane_cp07

0xa070,	// (0x0009658a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009c2ad) cell_tport_appsw_pane_g

0x5153,	// (0x0009166d) input_candi_list_open_g1

0xb9a3,	// (0x00097ebd) list_cale_time_pane_g6_ParamLimits

0xb9a3,	// (0x00097ebd) list_cale_time_pane_g6

0x64c1,	// (0x000929db) aid_size_touch_calib_1_ParamLimits

0x64c1,	// (0x000929db) aid_size_touch_calib_1

0x64cd,	// (0x000929e7) aid_size_touch_calib_2_ParamLimits

0x64cd,	// (0x000929e7) aid_size_touch_calib_2

0x64db,	// (0x000929f5) aid_size_touch_calib_3_ParamLimits

0x64db,	// (0x000929f5) aid_size_touch_calib_3

0x64eb,	// (0x00092a05) aid_size_touch_calib_4_ParamLimits

0x64eb,	// (0x00092a05) aid_size_touch_calib_4

0x64f9,	// (0x00092a13) main_touch_calib_button_group_pane_ParamLimits

0x64f9,	// (0x00092a13) main_touch_calib_button_group_pane

0x6507,	// (0x00092a21) main_touch_calib_pane_g1_ParamLimits

0x6513,	// (0x00092a2d) main_touch_calib_pane_g2_ParamLimits

0x651f,	// (0x00092a39) main_touch_calib_pane_g3_ParamLimits

0x652b,	// (0x00092a45) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0009bc76) main_touch_calib_pane_g_ParamLimits

0x6537,	// (0x00092a51) main_touch_calib_pane_t1_ParamLimits

0x6550,	// (0x00092a6a) main_touch_calib_pane_t2_ParamLimits

0x6569,	// (0x00092a83) main_touch_calib_pane_t3_ParamLimits

0x657f,	// (0x00092a99) main_touch_calib_pane_t4_ParamLimits

0x6595,	// (0x00092aaf) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0009bc7f) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x0009af5e) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x0009af5e) list_single_fp_cale_pane_g3

0x5a2e,	// (0x00091f48) bg_button_pane_cp012_ParamLimits

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp03_ParamLimits

0x8461,	// (0x0009497b) cell_vitu2_function_top_pane_g1_ParamLimits

0x5a2e,	// (0x00091f48) bg_vkb2_func_pane_cp04_ParamLimits

0x93e4,	// (0x000958fe) main_ncimui_button_group_pane_ParamLimits

0x93e4,	// (0x000958fe) main_ncimui_button_group_pane

0x944a,	// (0x00095964) main_ncimui_pane_t3_ParamLimits

0x944a,	// (0x00095964) main_ncimui_pane_t3

0xc40a,	// (0x00098924) phacti_button_group_pane

0xc5cc,	// (0x00098ae6) aid_size_list_single_double_ParamLimits

0xa50b,	// (0x00096a25) popup_ezdial_listscroll_window_ParamLimits

0xa52c,	// (0x00096a46) popup_number_entry_window_cp01_ParamLimits

0xa5d8,	// (0x00096af2) phacti_button_pane_ParamLimits

0xa5d8,	// (0x00096af2) phacti_button_pane

0x0f56,	// (0x0008d470) bg_button_pane_cp14

0xc651,	// (0x00098b6b) phacti_button_pane_t1

0xa5e9,	// (0x00096b03) main_touch_calib_button_pane_ParamLimits

0xa5e9,	// (0x00096b03) main_touch_calib_button_pane

0xb3bf,	// (0x000978d9) bg_button_pane_cp18_ParamLimits

0xb3bf,	// (0x000978d9) bg_button_pane_cp18

0xc65f,	// (0x00098b79) main_touch_calib_button_pane_t1_ParamLimits

0xc65f,	// (0x00098b79) main_touch_calib_button_pane_t1

0xc675,	// (0x00098b8f) main_touch_calib_button_pane_t2_ParamLimits

0xc675,	// (0x00098b8f) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009c366) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009c366) main_touch_calib_button_pane_t

0x0f56,	// (0x0008d470) cell_ncimui_button_pane

0x0f56,	// (0x0008d470) bg_button_pane_cp032

0xc693,	// (0x00098bad) cell_ncimui_button_pane_t1

0x76c8,	// (0x00093be2) image3_infobar_pane_ParamLimits

0x76c8,	// (0x00093be2) image3_infobar_pane

0x97c3,	// (0x00095cdd) fs_bigclock_status_pane_ParamLimits

0x97c3,	// (0x00095cdd) fs_bigclock_status_pane

0x97d0,	// (0x00095cea) main_fs_bigclock_clock_pane_ParamLimits

0x97d0,	// (0x00095cea) main_fs_bigclock_clock_pane

0x97f4,	// (0x00095d0e) main_fs_bigclock_indi_pane_ParamLimits

0x97f4,	// (0x00095d0e) main_fs_bigclock_indi_pane

0x9824,	// (0x00095d3e) main_fs_bigclock_swipe_pane_ParamLimits

0x9824,	// (0x00095d3e) main_fs_bigclock_swipe_pane

0x0f56,	// (0x0008d470) main_fs_clock_dumped_data

0xbf7b,	// (0x00098495) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xbf7b,	// (0x00098495) list_single_fs_bigclock_indicator_pane_g1

0xbf95,	// (0x000984af) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbf95,	// (0x000984af) list_single_fs_bigclock_indicator_pane_g2

0xbfaf,	// (0x000984c9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbfaf,	// (0x000984c9) list_single_fs_bigclock_indicator_pane_g3

0xbfc9,	// (0x000984e3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbfc9,	// (0x000984e3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0009c194) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0009c194) list_single_fs_bigclock_indicator_pane_g

0xbff2,	// (0x0009850c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbff2,	// (0x0009850c) list_single_fs_bigclock_indicator_pane_t1

0xc01a,	// (0x00098534) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc01a,	// (0x00098534) list_single_fs_bigclock_indicator_pane_t2

0xc042,	// (0x0009855c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc042,	// (0x0009855c) list_single_fs_bigclock_indicator_pane_t3

0xc06a,	// (0x00098584) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc06a,	// (0x00098584) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0009c19f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0009c19f) list_single_fs_bigclock_indicator_pane_t

0xc6a1,	// (0x00098bbb) image3_infobar_fav_pane_ParamLimits

0xc6a1,	// (0x00098bbb) image3_infobar_fav_pane

0xc6b1,	// (0x00098bcb) image3_infobar_loc_pane_ParamLimits

0xc6b1,	// (0x00098bcb) image3_infobar_loc_pane

0xc6c5,	// (0x00098bdf) image3_infobar_time_pane_ParamLimits

0xc6c5,	// (0x00098bdf) image3_infobar_time_pane

0xe689,	// (0x0009aba3) image3_infobar_time_pane_g1

0xc6d5,	// (0x00098bef) image3_infobar_time_pane_t1

0xe689,	// (0x0009aba3) image3_infobar_loc_pane_g1

0xc6e3,	// (0x00098bfd) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009c36b) image3_infobar_loc_pane_g

0xc6eb,	// (0x00098c05) image3_infobar_loc_pane_t1

0xe689,	// (0x0009aba3) image3_infobar_fav_pane_g1

0xc6f9,	// (0x00098c13) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009c370) image3_infobar_fav_pane_g

0xc701,	// (0x00098c1b) fs_bigclock_status_battery_pane

0xc70a,	// (0x00098c24) fs_bigclock_status_signal_pane

0xc713,	// (0x00098c2d) fs_bigclock_status_title_pane

0xc71c,	// (0x00098c36) fs_bigclock_status_signal_pane_g1

0xc725,	// (0x00098c3f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009c375) fs_bigclock_status_signal_pane_g

0xc72d,	// (0x00098c47) fs_bigclock_status_battery_pane_g1

0xc736,	// (0x00098c50) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009c37a) fs_bigclock_status_battery_pane_g

0xc73e,	// (0x00098c58) fs_bigclock_status_title_pane_t1

0xe689,	// (0x0009aba3) main_fs_bigclock_clock_pane_g1

0xa5f9,	// (0x00096b13) main_fs_bigclock_clock_pane_g2

0xa5f9,	// (0x00096b13) main_fs_bigclock_clock_pane_g3

0xa5f9,	// (0x00096b13) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009c37f) main_fs_bigclock_clock_pane_g

0xa601,	// (0x00096b1b) main_fs_bigclock_clock_pane_t1

0xa60f,	// (0x00096b29) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009c388) main_fs_bigclock_clock_pane_t

0xc74c,	// (0x00098c66) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc74c,	// (0x00098c66) list_single_fs_bigclock_indicator_pane

0xa61e,	// (0x00096b38) list_single_fs_bigclock_pane_ParamLimits

0xa61e,	// (0x00096b38) list_single_fs_bigclock_pane

0xc766,	// (0x00098c80) main_fs_bigclock_indicator_pane_t1

0xc775,	// (0x00098c8f) list_single_fs_bigclock_pane_g1

0xc77d,	// (0x00098c97) list_single_fs_bigclock_pane_t1

0xe689,	// (0x0009aba3) main_fs_bigclock_swipe_pane_g1

0xc7c0,	// (0x00098cda) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009c399) main_fs_bigclock_swipe_pane_g

0xc7c8,	// (0x00098ce2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc7c8,	// (0x00098ce2) main_fs_bigclock_swipe_pane_t1

0x48f5,	// (0x00090e0f) call_type_pane_ParamLimits

0x0f56,	// (0x0008d470) main_btmg_pane

0x02ee,	// (0x0008c808) list_single_cale_mrui_row_pane_g2_ParamLimits

0x02ee,	// (0x0008c808) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009c30c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009c30c) list_single_cale_mrui_row_pane_g

0x0374,	// (0x0008c88e) list_recal_vselct_arw_lo_pane

0xc61c,	// (0x00098b36) list_recal_vselct_arw_up_pane

0x037c,	// (0x0008c896) list_recal_vselct_pane

0xa67f,	// (0x00096b99) btmg_button_pane

0xa68b,	// (0x00096ba5) main_btmg_pane_g1

0x0f56,	// (0x0008d470) bg_button_pane_cp044

0xc7e5,	// (0x00098cff) btmg_button_pane_t1

0xe264,	// (0x0009a77e) aid_listscroll_gen

0xcf3e,	// (0x00099458) main_cntbar_detail_pane

0xc357,	// (0x00098871) list_cmail_folder_pane

0x1344,	// (0x0008d85e) sp_fs_scroll_pane_cp03_ParamLimits

0xa693,	// (0x00096bad) list_single_fs_dyc_pane_cp01_ParamLimits

0xa693,	// (0x00096bad) list_single_fs_dyc_pane_cp01

0xc7f3,	// (0x00098d0d) aid_size_cmail_indent

0x03fc,	// (0x0008c916) list_single_dyc_row_pane_cp01

0xa6d8,	// (0x00096bf2) cntbar_detail_list_pane_ParamLimits

0xa6d8,	// (0x00096bf2) cntbar_detail_list_pane

0xa712,	// (0x00096c2c) main_cntbar_detail_cont_pane_ParamLimits

0xa712,	// (0x00096c2c) main_cntbar_detail_cont_pane

0x481a,	// (0x00090d34) scroll_pane_cp032_ParamLimits

0x481a,	// (0x00090d34) scroll_pane_cp032

0xa71e,	// (0x00096c38) cntbar_detail_list_event_pane_ParamLimits

0xa71e,	// (0x00096c38) cntbar_detail_list_event_pane

0xa6e4,	// (0x00096bfe) cntbar_detail_list_shct_pane

0xb82e,	// (0x00097d48) aid_list_gen

0xc7fc,	// (0x00098d16) aid_scroll

0xc805,	// (0x00098d1f) aid_size_touch_scroll_bar

0x0f12,	// (0x0008d42c) aid_list_double

0xa732,	// (0x00096c4c) aid_list_single

0x8b5f,	// (0x00095079) aid_list_single_lg

0xa73b,	// (0x00096c55) aid_list_z_g_a_sm

0xa743,	// (0x00096c5d) aid_list_z_g_d

0xa74b,	// (0x00096c65) aid_txt_z_prm

0xa759,	// (0x00096c73) aid_txt_z_prm_cp01

0xa767,	// (0x00096c81) aid_txt_z_sec

0xa775,	// (0x00096c8f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa775,	// (0x00096c8f) main_cntbar_detail_cont_pane_g1

0xa782,	// (0x00096c9c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa782,	// (0x00096c9c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009c39e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009c39e) main_cntbar_detail_cont_pane_g

0xc80e,	// (0x00098d28) main_cntbar_detail_cont_pane_t1

0xc81c,	// (0x00098d36) main_cntbar_detail_cont_pane_t2

0xc82a,	// (0x00098d44) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009c3a3) main_cntbar_detail_cont_pane_t

0xa78e,	// (0x00096ca8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa78e,	// (0x00096ca8) cell_cntbar_detail_list_shct_pane

0xc838,	// (0x00098d52) cntbar_detail_list_shct_pane_g1

0xc841,	// (0x00098d5b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009c3aa) cntbar_detail_list_shct_pane_g

0xa7a2,	// (0x00096cbc) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7a2,	// (0x00096cbc) cntbar_detail_list_event_pane_g1

0xa7ae,	// (0x00096cc8) cntbar_detail_list_event_pane_g2_ParamLimits

0xa7ae,	// (0x00096cc8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009c3af) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009c3af) cntbar_detail_list_event_pane_g

0xa81a,	// (0x00096d34) cntbar_detail_list_event_pane_t1_ParamLimits

0xa81a,	// (0x00096d34) cntbar_detail_list_event_pane_t1

0xa82f,	// (0x00096d49) cntbar_detail_list_event_pane_t2_ParamLimits

0xa82f,	// (0x00096d49) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009c3bc) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009c3bc) cntbar_detail_list_event_pane_t

0xe689,	// (0x0009aba3) cell_cntbar_detail_list_shct_pane_g1

0x4c95,	// (0x000911af) navi_pane_mv_g3

0xcf3e,	// (0x00099458) main_cntbar_detail_pane_ParamLimits

0x0f56,	// (0x0008d470) main_notif_wgt_pane

0x737c,	// (0x00093896) aid_tch_main_mp4_pane_g4

0x75b1,	// (0x00093acb) popup_slider_window_cp02

0x036a,	// (0x0008c884) list_recal_day_event_pane

0xa6b8,	// (0x00096bd2) cntbar_detail_btn_pane_ParamLimits

0xa6b8,	// (0x00096bd2) cntbar_detail_btn_pane

0xa6c8,	// (0x00096be2) cntbar_detail_btn_pane_cp01_ParamLimits

0xa6c8,	// (0x00096be2) cntbar_detail_btn_pane_cp01

0xa6e4,	// (0x00096bfe) cntbar_detail_list_shct_pane_ParamLimits

0xa6f0,	// (0x00096c0a) cntbar_detail_pane_g1_ParamLimits

0xa6f0,	// (0x00096c0a) cntbar_detail_pane_g1

0xa6fc,	// (0x00096c16) cntbar_detail_pane_t1_ParamLimits

0xa6fc,	// (0x00096c16) cntbar_detail_pane_t1

0xa7ba,	// (0x00096cd4) cntbar_detail_list_event_pane_g3_ParamLimits

0xa7ba,	// (0x00096cd4) cntbar_detail_list_event_pane_g3

0xa7d2,	// (0x00096cec) cntbar_detail_list_event_pane_g4_ParamLimits

0xa7d2,	// (0x00096cec) cntbar_detail_list_event_pane_g4

0xa7ea,	// (0x00096d04) cntbar_detail_list_event_pane_g5_ParamLimits

0xa7ea,	// (0x00096d04) cntbar_detail_list_event_pane_g5

0xa802,	// (0x00096d1c) cntbar_detail_list_event_pane_g6_ParamLimits

0xa802,	// (0x00096d1c) cntbar_detail_list_event_pane_g6

0xa844,	// (0x00096d5e) cntbar_detail_list_event_pane_t3_ParamLimits

0xa844,	// (0x00096d5e) cntbar_detail_list_event_pane_t3

0xa856,	// (0x00096d70) popup_notif_wgt_window_ParamLimits

0xa856,	// (0x00096d70) popup_notif_wgt_window

0xa866,	// (0x00096d80) popup_submenu_window_cp01_ParamLimits

0xa866,	// (0x00096d80) popup_submenu_window_cp01

0xcde5,	// (0x000992ff) bg_popup_window_pane_cp10

0xc84a,	// (0x00098d64) listscroll_notif_wgt_pane

0xc85c,	// (0x00098d76) list_notif_wgt_window

0xc865,	// (0x00098d7f) scroll_pane_cp033

0xa878,	// (0x00096d92) list_notif_wgt_row_pane_ParamLimits

0xa878,	// (0x00096d92) list_notif_wgt_row_pane

0xc86e,	// (0x00098d88) aid_size_list_notif_wgt_del

0xc87b,	// (0x00098d95) list_notif_wgt_row_pane_g1

0xc887,	// (0x00098da1) list_notif_wgt_row_pane_g2

0xc893,	// (0x00098dad) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009c3c3) list_notif_wgt_row_pane_g

0xc8a0,	// (0x00098dba) list_notif_wgt_row_pane_t1

0xc8b5,	// (0x00098dcf) list_notif_wgt_row_pane_t2

0xc8c7,	// (0x00098de1) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009c3ca) list_notif_wgt_row_pane_t

0x0713,	// (0x0008cc2d) list_recal_day_event_pane_g1

0xc8d9,	// (0x00098df3) list_recal_day_event_pane_t1

0x0f56,	// (0x0008d470) bg_button_pane_cp045

0xa889,	// (0x00096da3) cntbar_detail_btn_pane_t1

0xe278,	// (0x0009a792) main_callh_pane_ParamLimits

0xe278,	// (0x0009a792) main_callh_pane

0x0f56,	// (0x0008d470) main_coverflow0_pane

0x0f56,	// (0x0008d470) main_wgtman_pane

0x983c,	// (0x00095d56) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x983c,	// (0x00095d56) main_fs_bigclock_unlock_btn_pane

0xa068,	// (0x00096582) bg_button_pane_cp16

0xa078,	// (0x00096592) cell_tport_appsw_pane_g3

0xa897,	// (0x00096db1) cf0_flow_pane_ParamLimits

0xa897,	// (0x00096db1) cf0_flow_pane

0xc8e8,	// (0x00098e02) listscroll_cf0_pane

0xc8f3,	// (0x00098e0d) main_cf0_pane_g1

0xa8a6,	// (0x00096dc0) main_cf0_pane_t1_ParamLimits

0xa8a6,	// (0x00096dc0) main_cf0_pane_t1

0xa8ba,	// (0x00096dd4) main_cf0_pane_t2_ParamLimits

0xa8ba,	// (0x00096dd4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0009c3d6) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0009c3d6) main_cf0_pane_t

0xc905,	// (0x00098e1f) scroll_pane_cp11

0xa8ce,	// (0x00096de8) cf0_flow_pane_g1

0xa8d6,	// (0x00096df0) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009c3db) cf0_flow_pane_g

0xa8de,	// (0x00096df8) cf0_flow_pane_t1

0x0f56,	// (0x0008d470) main_call6_pane

0x0f56,	// (0x0008d470) main_calllock_pane

0xa8ec,	// (0x00096e06) call6_btn_grp_pane_ParamLimits

0xa8ec,	// (0x00096e06) call6_btn_grp_pane

0xa8fb,	// (0x00096e15) call6_pane_g1_ParamLimits

0xa8fb,	// (0x00096e15) call6_pane_g1

0xa90a,	// (0x00096e24) popup_call6_1st_window_ParamLimits

0xa90a,	// (0x00096e24) popup_call6_1st_window

0xa918,	// (0x00096e32) popup_call6_2nd_window_ParamLimits

0xa918,	// (0x00096e32) popup_call6_2nd_window

0xa926,	// (0x00096e40) cell_call6_btn_pane_ParamLimits

0xa926,	// (0x00096e40) cell_call6_btn_pane

0xcde5,	// (0x000992ff) bg_popup_call2_in_pane_cp03

0xc910,	// (0x00098e2a) popup_call6_1st_window_g1

0xc918,	// (0x00098e32) popup_call6_1st_window_g2

0xc920,	// (0x00098e3a) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0009c3e0) popup_call6_1st_window_g

0xc928,	// (0x00098e42) popup_call6_1st_window_t1

0xc937,	// (0x00098e51) popup_call6_1st_window_t2

0xc947,	// (0x00098e61) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0009c3e7) popup_call6_1st_window_t

0xcde5,	// (0x000992ff) bg_popup_call2_in_pane_cp04

0xc910,	// (0x00098e2a) popup_call6_2nd_window_g1

0xc918,	// (0x00098e32) popup_call6_2nd_window_g2

0xc920,	// (0x00098e3a) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0009c3e0) popup_call6_2nd_window_g

0xc928,	// (0x00098e42) popup_call6_2nd_window_t1

0x0f56,	// (0x0008d470) bg_button_pane_cp15

0xc957,	// (0x00098e71) cell_call6_btn_pane_g1

0xc960,	// (0x00098e7a) cell_call6_btn_pane_t1

0xa935,	// (0x00096e4f) listscroll_wgtman_pane_ParamLimits

0xa935,	// (0x00096e4f) listscroll_wgtman_pane

0xa953,	// (0x00096e6d) wgtman_btn_pane_ParamLimits

0xa953,	// (0x00096e6d) wgtman_btn_pane

0xcc9c,	// (0x000991b6) aid_scroll_copy1

0xc96f,	// (0x00098e89) list_wgtman_pane

0xa988,	// (0x00096ea2) wgtman_btn_pane_g1_ParamLimits

0xa988,	// (0x00096ea2) wgtman_btn_pane_g1

0xa9b0,	// (0x00096eca) wgtman_btn_pane_t1_ParamLimits

0xa9b0,	// (0x00096eca) wgtman_btn_pane_t1

0xc979,	// (0x00098e93) wgtman_btn_pane_t2_ParamLimits

0xc979,	// (0x00098e93) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0009c3ee) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0009c3ee) wgtman_btn_pane_t

0xa9e7,	// (0x00096f01) listrow_wgtman_pane_ParamLimits

0xa9e7,	// (0x00096f01) listrow_wgtman_pane

0xa9ff,	// (0x00096f19) listrow_wgtman_pane_g1

0xaa0c,	// (0x00096f26) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0009c3f3) listrow_wgtman_pane_g

0xaa2a,	// (0x00096f44) listrow_wgtman_pane_t1

0xaa42,	// (0x00096f5c) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009c3f8) listrow_wgtman_pane_t

0xaa68,	// (0x00096f82) wait_bar_pane_cp09

0xc990,	// (0x00098eaa) main_calllock_btn_pane

0xc99a,	// (0x00098eb4) main_calllock_pane_g1

0x0f56,	// (0x0008d470) bg_button_pane_cp17

0xc9a6,	// (0x00098ec0) main_calllock_btn_pane_g1

0xc9af,	// (0x00098ec9) main_calllock_btn_pane_t1

0x0f56,	// (0x0008d470) main_dialer3_pane

0x0f56,	// (0x0008d470) main_fmrd2_pane

0xe689,	// (0x0009aba3) main_fs_bigclock_unlock_btn_pane_g1

0xc9c6,	// (0x00098ee0) main_fs_bigclock_unlock_btn_pane_t1

0xaa7a,	// (0x00096f94) area_fmrd2_info_pane_ParamLimits

0xaa7a,	// (0x00096f94) area_fmrd2_info_pane

0xaa88,	// (0x00096fa2) area_fmrd2_visual_pane_ParamLimits

0xaa88,	// (0x00096fa2) area_fmrd2_visual_pane

0xaa96,	// (0x00096fb0) fmrd2_indi_pane_ParamLimits

0xaa96,	// (0x00096fb0) fmrd2_indi_pane

0xaaa3,	// (0x00096fbd) area_fmrd2_visual_pane_g1

0xaaab,	// (0x00096fc5) area_fmrd2_visual_pane_t1

0xaabb,	// (0x00096fd5) area_fmrd2_visual_pane_t2

0xaacb,	// (0x00096fe5) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0009c402) area_fmrd2_visual_pane_t

0xaadb,	// (0x00096ff5) area_fmrd2_info_pane_g1

0xaae3,	// (0x00096ffd) area_fmrd2_info_pane_t1

0xaaf3,	// (0x0009700d) area_fmrd2_info_pane_t2

0xab03,	// (0x0009701d) area_fmrd2_info_pane_t3

0xab13,	// (0x0009702d) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009c409) area_fmrd2_info_pane_t

0xab21,	// (0x0009703b) fmrd2_indi_pane_t1

0xab31,	// (0x0009704b) fmrd2_indi_pane_t2

0xab41,	// (0x0009705b) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0009c412) fmrd2_indi_pane_t

0xbfd8,	// (0x000984f2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbfd8,	// (0x000984f2) list_single_fs_bigclock_indicator_pane_g5

0xc07f,	// (0x00098599) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc07f,	// (0x00098599) list_single_fs_bigclock_indicator_pane_t5

0xa260,	// (0x0009677a) aid_cell_bcale_month_pane_ParamLimits

0xa260,	// (0x0009677a) aid_cell_bcale_month_pane

0xa27e,	// (0x00096798) bcale_month_pane_ParamLimits

0xa27e,	// (0x00096798) bcale_month_pane

0xa29c,	// (0x000967b6) bcale_preview_pane_ParamLimits

0xa29c,	// (0x000967b6) bcale_preview_pane

0xc77d,	// (0x00098c97) list_single_fs_bigclock_pane_t1_ParamLimits

0xc79c,	// (0x00098cb6) list_single_fs_bigclock_pane_t2_ParamLimits

0xc79c,	// (0x00098cb6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009c394) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009c394) list_single_fs_bigclock_pane_t

0xc9be,	// (0x00098ed8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009c3fd) main_fs_bigclock_unlock_btn_pane_g

0xab4f,	// (0x00097069) aid_dia3_key_size_ParamLimits

0xab4f,	// (0x00097069) aid_dia3_key_size

0xab5b,	// (0x00097075) aid_dia3_listrow_size_ParamLimits

0xab5b,	// (0x00097075) aid_dia3_listrow_size

0xab6b,	// (0x00097085) dia3_keypad_fun_pane_ParamLimits

0xab6b,	// (0x00097085) dia3_keypad_fun_pane

0xab7d,	// (0x00097097) dia3_keypad_num_pane_ParamLimits

0xab7d,	// (0x00097097) dia3_keypad_num_pane

0xab8f,	// (0x000970a9) dia3_listscroll_pane_ParamLimits

0xab8f,	// (0x000970a9) dia3_listscroll_pane

0xab9d,	// (0x000970b7) dia3_numentry_pane_ParamLimits

0xab9d,	// (0x000970b7) dia3_numentry_pane

0xc9d4,	// (0x00098eee) dia3_list_pane

0xc9df,	// (0x00098ef9) scroll_pane_cp12

0x0f56,	// (0x0008d470) bg_dia3_numentry_pane

0xabab,	// (0x000970c5) dia3_numentry_pane_t1

0xabba,	// (0x000970d4) cell_dia3_key_num_pane

0xabc2,	// (0x000970dc) cell_dia3_key0_fun_pane_ParamLimits

0xabc2,	// (0x000970dc) cell_dia3_key0_fun_pane

0xabcf,	// (0x000970e9) cell_dia3_key1_fun_pane_ParamLimits

0xabcf,	// (0x000970e9) cell_dia3_key1_fun_pane

0xabdc,	// (0x000970f6) dia3_listrow_pane

0xbce8,	// (0x00098202) bg_dia3_numentry_pane_g1

0x0f56,	// (0x0008d470) bg_button_pane_cp21

0xc9ea,	// (0x00098f04) cell_dia3_key_num_pane_t1

0xc9f8,	// (0x00098f12) cell_dia3_key_num_pane_t2

0xca07,	// (0x00098f21) cell_dia3_key_num_pane_t3

0xca16,	// (0x00098f30) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009c419) cell_dia3_key_num_pane_t

0x0f56,	// (0x0008d470) bg_button_pane_cp19

0xabe9,	// (0x00097103) cell_dia3_key0_fun_pane_g1

0x0f56,	// (0x0008d470) bg_button_pane_cp20

0xabf1,	// (0x0009710b) cell_dia3_key1_fun_pane_g1

0xabf9,	// (0x00097113) area_left_week_number_pane

0xac0c,	// (0x00097126) area_top_day_name_pane

0xac1a,	// (0x00097134) frame_month_view_pane

0xca25,	// (0x00098f3f) grid_month_view_pane

0xac2f,	// (0x00097149) cell_top_day_name_pane_ParamLimits

0xac2f,	// (0x00097149) cell_top_day_name_pane

0xac49,	// (0x00097163) cell_area_left_week_number_pane_ParamLimits

0xac49,	// (0x00097163) cell_area_left_week_number_pane

0xac6c,	// (0x00097186) cell_month_view_pane_ParamLimits

0xac6c,	// (0x00097186) cell_month_view_pane

0xca33,	// (0x00098f4d) frm_month_g1

0xac98,	// (0x000971b2) frm_month_g2

0xaca9,	// (0x000971c3) frm_month_g3

0xacba,	// (0x000971d4) frm_month_g4

0xaccb,	// (0x000971e5) frm_month_g5

0xacde,	// (0x000971f8) frm_month_g6

0xacf1,	// (0x0009720b) frm_month_g7

0xca40,	// (0x00098f5a) frm_month_g8

0xad04,	// (0x0009721e) frm_month_g9

0xad11,	// (0x0009722b) frm_month_g10

0xad1e,	// (0x00097238) frm_month_g11

0xad2b,	// (0x00097245) frm_month_g12

0xad38,	// (0x00097252) frm_month_g13

0xad45,	// (0x0009725f) frm_month_g14

0xad54,	// (0x0009726e) frm_month_g15

0xad63,	// (0x0009727d) frm_month_g16

0x000f,

0xff08,	// (0x0009c422) frm_month_g

0xca4d,	// (0x00098f67) cell_top_day_name_pane_t1

0xad72,	// (0x0009728c) cell_area_left_week_number_pane_g1

0xad81,	// (0x0009729b) cell_area_left_week_number_pane_t1

0xe8ec,	// (0x0009ae06) cell_month_view_pane_g1

0xad97,	// (0x000972b1) cell_month_view_pane_t1

0x0f56,	// (0x0008d470) main_fps_pane

0xc26f,	// (0x00098789) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc26f,	// (0x00098789) cmail_ddmenu_btn02_pane_cp1

0xc28b,	// (0x000987a5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc28b,	// (0x000987a5) cmail_ddmenu_btn02_pane_cp2

0xa558,	// (0x00096a72) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa558,	// (0x00096a72) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009c347) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009c347) cmail_ddmenu_btn02_pane_g

0xa576,	// (0x00096a90) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa576,	// (0x00096a90) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009c34c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009c34c) cmail_ddmenu_btn02_pane_t

0xadad,	// (0x000972c7) fps_text_pane_ParamLimits

0xadad,	// (0x000972c7) fps_text_pane

0xadba,	// (0x000972d4) main_fps_pane_g1_ParamLimits

0xadba,	// (0x000972d4) main_fps_pane_g1

0xadc8,	// (0x000972e2) wait_bar_pane_cp010_ParamLimits

0xadc8,	// (0x000972e2) wait_bar_pane_cp010

0xadd4,	// (0x000972ee) fps_text_pane_t1_ParamLimits

0xadd4,	// (0x000972ee) fps_text_pane_t1

0x79a1,	// (0x00093ebb) cam4_image_uncrop_pane_g1

0x79aa,	// (0x00093ec4) cam4_image_uncrop_pane_g2

0x79b3,	// (0x00093ecd) cam4_image_uncrop_pane_g3

0x79bc,	// (0x00093ed6) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0009be0e) cam4_image_uncrop_pane_g

0xabdc,	// (0x000970f6) dia3_listrow_pane_ParamLimits

0x0f56,	// (0x0008d470) main_phob2_pane

0xa04a,	// (0x00096564) cell_tport_appsw_pane_cp02_ParamLimits

0xa04a,	// (0x00096564) cell_tport_appsw_pane_cp02

0xa059,	// (0x00096573) cell_tport_appsw_pane_cp03_ParamLimits

0xa059,	// (0x00096573) cell_tport_appsw_pane_cp03

0x0f56,	// (0x0008d470) phob2_contact_card_pane

0x0f56,	// (0x0008d470) phob2_listscroll_pane

0xca60,	// (0x00098f7a) phob2_list_pane

0xca68,	// (0x00098f82) scroll_pane_cp034

0xaded,	// (0x00097307) phob2_cc_data_pane_ParamLimits

0xaded,	// (0x00097307) phob2_cc_data_pane

0xae07,	// (0x00097321) phob2_cc_listscroll_pane_ParamLimits

0xae07,	// (0x00097321) phob2_cc_listscroll_pane

0xae21,	// (0x0009733b) list_double_large_graphic_phob2_pane_ParamLimits

0xae21,	// (0x0009733b) list_double_large_graphic_phob2_pane

0xae3f,	// (0x00097359) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xae3f,	// (0x00097359) list_double_large_graphic_phob2_pane_g1

0xae55,	// (0x0009736f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xae55,	// (0x0009736f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0009c443) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0009c443) list_double_large_graphic_phob2_pane_g

0xae61,	// (0x0009737b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xae61,	// (0x0009737b) list_double_large_graphic_phob2_pane_t1

0xae76,	// (0x00097390) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xae76,	// (0x00097390) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009c448) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009c448) list_double_large_graphic_phob2_pane_t

0x0f56,	// (0x0008d470) list_highlight_pane_cp024

0xca70,	// (0x00098f8a) phob2_cc_button_pane

0xae88,	// (0x000973a2) phob2_cc_data_pane_g1_ParamLimits

0xae88,	// (0x000973a2) phob2_cc_data_pane_g1

0xae94,	// (0x000973ae) phob2_cc_data_pane_g2_ParamLimits

0xae94,	// (0x000973ae) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009c44d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009c44d) phob2_cc_data_pane_g

0xaea0,	// (0x000973ba) phob2_cc_data_pane_t1_ParamLimits

0xaea0,	// (0x000973ba) phob2_cc_data_pane_t1

0xaeb2,	// (0x000973cc) phob2_cc_data_pane_t2_ParamLimits

0xaeb2,	// (0x000973cc) phob2_cc_data_pane_t2

0xaec4,	// (0x000973de) phob2_cc_data_pane_t3_ParamLimits

0xaec4,	// (0x000973de) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0009c452) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0009c452) phob2_cc_data_pane_t

0xca78,	// (0x00098f92) phob2_cc_list_pane_ParamLimits

0xca78,	// (0x00098f92) phob2_cc_list_pane

0x1362,	// (0x0008d87c) scroll_pane_cp035_ParamLimits

0x1362,	// (0x0008d87c) scroll_pane_cp035

0xcf3e,	// (0x00099458) bg_button_pane_cp033

0xca84,	// (0x00098f9e) phob2_cc_button_pane_g1

0xca90,	// (0x00098faa) phob2_cc_button_pane_t1

0xcaa5,	// (0x00098fbf) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009c459) phob2_cc_button_pane_t

0xaed6,	// (0x000973f0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaed6,	// (0x000973f0) list_double_large_graphic_phob2_cc_pane

0xaefd,	// (0x00097417) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaefd,	// (0x00097417) list_double_large_graphic_phob2_cc_pane_g1

0xaf0e,	// (0x00097428) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf0e,	// (0x00097428) list_double_large_graphic_phob2_cc_pane_g2

0xaf1a,	// (0x00097434) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf1a,	// (0x00097434) list_double_large_graphic_phob2_cc_pane_g3

0xaf26,	// (0x00097440) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf26,	// (0x00097440) list_double_large_graphic_phob2_cc_pane_g4

0xaf32,	// (0x0009744c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf32,	// (0x0009744c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0009c45e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0009c45e) list_double_large_graphic_phob2_cc_pane_g

0xaf3e,	// (0x00097458) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf3e,	// (0x00097458) list_double_large_graphic_phob2_cc_pane_t1

0xaf67,	// (0x00097481) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf67,	// (0x00097481) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009c469) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009c469) list_double_large_graphic_phob2_cc_pane_t

0xcab7,	// (0x00098fd1) list_highlight_pane_cp025_ParamLimits

0xcab7,	// (0x00098fd1) list_highlight_pane_cp025

0xcf3e,	// (0x00099458) bg_button_pane_cp033_ParamLimits

0xca84,	// (0x00098f9e) phob2_cc_button_pane_g1_ParamLimits

0xca90,	// (0x00098faa) phob2_cc_button_pane_t1_ParamLimits

0xcaa5,	// (0x00098fbf) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009c459) phob2_cc_button_pane_t_ParamLimits

0x2608,	// (0x0008eb22) popup_wgtman_window

0x057e,	// (0x0008ca98) scroll_pane_cp038

0xa970,	// (0x00096e8a) wgtman_btn_pane_cp_01_ParamLimits

0xa970,	// (0x00096e8a) wgtman_btn_pane_cp_01

0xcac5,	// (0x00098fdf) wgtman_content_pane

0xcace,	// (0x00098fe8) wgtman_heading_pane

0x0f56,	// (0x0008d470) bg_heading_pane_cp02

0xcad7,	// (0x00098ff1) wgtman_heading_pane_g1

0xcadf,	// (0x00098ff9) wgtman_heading_pane_t1

0xcaed,	// (0x00099007) scroll_pane_cp036

0xcaf5,	// (0x0009900f) wgtman_list_pane

0xcafd,	// (0x00099017) wgtman_list_pane_t1_ParamLimits

0xcafd,	// (0x00099017) wgtman_list_pane_t1

0x7900,	// (0x00093e1a) cam4_grid_pane

0x862a,	// (0x00094b44) bg_button_pane_cp015_ParamLimits

0x863c,	// (0x00094b56) bg_button_pane_cp016_ParamLimits

0x864f,	// (0x00094b69) bg_button_pane_cp017_ParamLimits

0x86a5,	// (0x00094bbf) popup_vitu2_query_window_g3_ParamLimits

0x86a5,	// (0x00094bbf) popup_vitu2_query_window_g3

0x8760,	// (0x00094c7a) popup_vitu2_query_window_t6_ParamLimits

0x8760,	// (0x00094c7a) popup_vitu2_query_window_t6

0x878b,	// (0x00094ca5) popup_vitu2_query_window_t7_ParamLimits

0x878b,	// (0x00094ca5) popup_vitu2_query_window_t7

0x1350,	// (0x0008d86a) cam4_grid_pane_g1

0x1359,	// (0x0008d873) cam4_grid_pane_g2

0xcb17,	// (0x00099031) cam4_grid_pane_g3

0xcb20,	// (0x0009903a) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0009c46e) cam4_grid_pane_g

0x3582,	// (0x0008fa9c) aid_placing_vt_slider_lsc_ParamLimits

0x38ce,	// (0x0008fde8) vidtel_button_pane_ParamLimits

0x38ce,	// (0x0008fde8) vidtel_button_pane

0xcb2b,	// (0x00099045) bg_button_pane_cp034

0xaf90,	// (0x000974aa) vidtel_button_pane_g1

0xcf66,	// (0x00099480) vidtel_button_pane_t1

0x06c7,	// (0x0008cbe1) aid_size_vtel_slider_touch

0x1362,	// (0x0008d87c) scroll_pane_cp039

0xbd26,	// (0x00098240) ncim_query_button_pane_cp01_ParamLimits

0xbd45,	// (0x0009825f) ncimui_query_pane_g1_ParamLimits

0xcf3e,	// (0x00099458) input_focus_pane_cp012_ParamLimits

0xbd6a,	// (0x00098284) ncim_query_entry_pane_t1_ParamLimits

0x1362,	// (0x0008d87c) scroll_pane_cp039_ParamLimits

0x4c07,	// (0x00091121) navi_pane_bcale_mc_g1

0x4c0f,	// (0x00091129) navi_pane_bcale_mc_t1

0xc2d4,	// (0x000987ee) main_sp_fs_email_pane_g1

0xc2e0,	// (0x000987fa) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0009c205) main_sp_fs_email_pane_g

0xc526,	// (0x00098a40) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc526,	// (0x00098a40) list_single_cale_mrui_row_pane_g3

0xa59e,	// (0x00096ab8) list_single_recal_day_pane_g5_event_pane

0x03d0,	// (0x0008c8ea) list_single_recal_day_pane_g7

0xcf74,	// (0x0009948e) list_recal_day_event_pane_cp01

0xcf7d,	// (0x00099497) list_recal_vselct_arw_lo_pane_cp01

0xcf85,	// (0x0009949f) list_recal_vselct_arw_up_pane_cp01

0xcf8d,	// (0x000994a7) list_recal_vselct_pane_cp01

0x0713,	// (0x0008cc2d) list_recal_day_event_pane_cp01_g1

0x0405,	// (0x0008c91f) list_recal_day_event_pane_cp01_t1

0x03d8,	// (0x0008c8f2) list_single_recal_day_pane_t1_ParamLimits

0x03ea,	// (0x0008c904) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009c35c) list_single_recal_day_pane_t_ParamLimits

0xb2fa,	// (0x00097814) bg_notes_pane_ParamLimits

0xb39d,	// (0x000978b7) list_notes_pane_ParamLimits

0x2970,	// (0x0008ee8a) scroll_pane_cp06_ParamLimits

0xb3bf,	// (0x000978d9) main_notes_pane_ParamLimits

0x0f56,	// (0x0008d470) main_welc_pane

0xaf98,	// (0x000974b2) main_welc_body_pane_ParamLimits

0xaf98,	// (0x000974b2) main_welc_body_pane

0xafb2,	// (0x000974cc) main_welc_opti_pane_ParamLimits

0xafb2,	// (0x000974cc) main_welc_opti_pane

0xafe5,	// (0x000974ff) main_welc_pane_t1_ParamLimits

0xafe5,	// (0x000974ff) main_welc_pane_t1

0xafff,	// (0x00097519) main_welc_body_row_pane_ParamLimits

0xafff,	// (0x00097519) main_welc_body_row_pane

0xcf58,	// (0x00099472) main_welc_opti_row_pane_ParamLimits

0xcf58,	// (0x00099472) main_welc_opti_row_pane

0xcf97,	// (0x000994b1) main_welc_opti_row_pane_g1

0xcf9f,	// (0x000994b9) main_welc_opti_row_pane_t1

0xcfaf,	// (0x000994c9) main_welc_body_row_pane_t1

0xc854,	// (0x00098d6e) popup_notif_wgt_heading_pane

0xc86e,	// (0x00098d88) aid_size_list_notif_wgt_del_ParamLimits

0xc87b,	// (0x00098d95) list_notif_wgt_row_pane_g1_ParamLimits

0xc887,	// (0x00098da1) list_notif_wgt_row_pane_g2_ParamLimits

0xc893,	// (0x00098dad) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009c3c3) list_notif_wgt_row_pane_g_ParamLimits

0xc8a0,	// (0x00098dba) list_notif_wgt_row_pane_t1_ParamLimits

0xc8b5,	// (0x00098dcf) list_notif_wgt_row_pane_t2_ParamLimits

0xc8c7,	// (0x00098de1) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009c3ca) list_notif_wgt_row_pane_t_ParamLimits

0xa9ff,	// (0x00096f19) listrow_wgtman_pane_g1_ParamLimits

0xaa0c,	// (0x00096f26) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0009c3f3) listrow_wgtman_pane_g_ParamLimits

0xaa2a,	// (0x00096f44) listrow_wgtman_pane_t1_ParamLimits

0xaa42,	// (0x00096f5c) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009c3f8) listrow_wgtman_pane_t_ParamLimits

0xaa68,	// (0x00096f82) wait_bar_pane_cp09_ParamLimits

0x0f56,	// (0x0008d470) bg_popup_heading_pane_cp02

0xcfbe,	// (0x000994d8) popup_notif_wgt_heading_pane_g1

0xcfc6,	// (0x000994e0) popup_notif_wgt_heading_pane_t1

0x0f56,	// (0x0008d470) main_vids_pane

0x0f56,	// (0x0008d470) vids_listscroll_pane

0xb024,	// (0x0009753e) scroll_pane_cp040

0x0f56,	// (0x0008d470) vids_list_pane

0xb02f,	// (0x00097549) vids_list_double_pane_ParamLimits

0xb02f,	// (0x00097549) vids_list_double_pane

0xb049,	// (0x00097563) vids_list_double_pane_g1

0xb052,	// (0x0009756c) vids_list_double_pane_t1

0xb062,	// (0x0009757c) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009c47c) vids_list_double_pane_t

0x5a2e,	// (0x00091f48) main_ncimui_pane_ParamLimits

0x93fc,	// (0x00095916) main_ncimui_pane_g1_ParamLimits

0x9408,	// (0x00095922) main_ncimui_pane_g2_ParamLimits

0x9408,	// (0x00095922) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0009c10a) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0009c10a) main_ncimui_pane_g

0xafcb,	// (0x000974e5) main_welc_pane_g1_ParamLimits

0xafcb,	// (0x000974e5) main_welc_pane_g1

0xafd7,	// (0x000974f1) main_welc_pane_g2_ParamLimits

0xafd7,	// (0x000974f1) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009c477) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009c477) main_welc_pane_g

0xb2fa,	// (0x00097814) listscroll_mce_pane_ParamLimits

0x4cd1,	// (0x000911eb) wait_bar_pane_cp10

0xe26c,	// (0x0009a786) main_cale_day_pane_ParamLimits

0xe26c,	// (0x0009a786) main_cale_week_pane_ParamLimits

0xb2fa,	// (0x00097814) main_messa_pane_ParamLimits

0x6d52,	// (0x0009326c) main_clock2_btn_pane_ParamLimits

0x6d52,	// (0x0009326c) main_clock2_btn_pane

0xeacc,	// (0x0009afe6) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x0009afe6) main_clock2_btn_pane_cp01

0xc4f7,	// (0x00098a11) list_cale_mrui_pane_ParamLimits

0xc8fd,	// (0x00098e17) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0009c3d1) main_cf0_pane_g

0xabf9,	// (0x00097113) area_left_week_number_pane_ParamLimits

0xac0c,	// (0x00097126) area_top_day_name_pane_ParamLimits

0xac1a,	// (0x00097134) frame_month_view_pane_ParamLimits

0xca25,	// (0x00098f3f) grid_month_view_pane_ParamLimits

0xca33,	// (0x00098f4d) frm_month_g1_ParamLimits

0xac98,	// (0x000971b2) frm_month_g2_ParamLimits

0xaca9,	// (0x000971c3) frm_month_g3_ParamLimits

0xacba,	// (0x000971d4) frm_month_g4_ParamLimits

0xaccb,	// (0x000971e5) frm_month_g5_ParamLimits

0xacde,	// (0x000971f8) frm_month_g6_ParamLimits

0xacf1,	// (0x0009720b) frm_month_g7_ParamLimits

0xca40,	// (0x00098f5a) frm_month_g8_ParamLimits

0xad04,	// (0x0009721e) frm_month_g9_ParamLimits

0xad11,	// (0x0009722b) frm_month_g10_ParamLimits

0xad1e,	// (0x00097238) frm_month_g11_ParamLimits

0xad2b,	// (0x00097245) frm_month_g12_ParamLimits

0xad38,	// (0x00097252) frm_month_g13_ParamLimits

0xad45,	// (0x0009725f) frm_month_g14_ParamLimits

0xad54,	// (0x0009726e) frm_month_g15_ParamLimits

0xad63,	// (0x0009727d) frm_month_g16_ParamLimits

0xff08,	// (0x0009c422) frm_month_g_ParamLimits

0xca4d,	// (0x00098f67) cell_top_day_name_pane_t1_ParamLimits

0xad72,	// (0x0009728c) cell_area_left_week_number_pane_g1_ParamLimits

0xad81,	// (0x0009729b) cell_area_left_week_number_pane_t1_ParamLimits

0xe8ec,	// (0x0009ae06) cell_month_view_pane_g1_ParamLimits

0xad97,	// (0x000972b1) cell_month_view_pane_t1_ParamLimits

0xb2f2,	// (0x0009780c) main_clock2_btn_pane_g1

0xcfd4,	// (0x000994ee) main_clock2_btn_pane_t1

0xcf3e,	// (0x00099458) listscroll_cmail_pane_ParamLimits

0xc2d4,	// (0x000987ee) main_sp_fs_email_pane_g1_ParamLimits

0xc2e0,	// (0x000987fa) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0009c205) main_sp_fs_email_pane_g_ParamLimits

0xc5fd,	// (0x00098b17) list_recal_day_pane_ParamLimits

0xc60e,	// (0x00098b28) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

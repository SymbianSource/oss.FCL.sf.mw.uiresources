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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00088627 };

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
0x24e1,	// (0x0008ab08) Screen

0x24ed,	// (0x0008ab14) application_window

0x2549,	// (0x0008ab70) area_bottom_pane_ParamLimits

0x2549,	// (0x0008ab70) area_bottom_pane

0x25a1,	// (0x0008abc8) area_top_pane_ParamLimits

0x25a1,	// (0x0008abc8) area_top_pane

0x2605,	// (0x0008ac2c) call_video_uplink_pane_ParamLimits

0x2605,	// (0x0008ac2c) call_video_uplink_pane

0x2644,	// (0x0008ac6b) main_pane_ParamLimits

0x2644,	// (0x0008ac6b) main_pane

0xe4f5,	// (0x00096b1c) context_pane

0x5385,	// (0x0008d9ac) navi_pane

0x53ab,	// (0x0008d9d2) popup_cale_events_window_ParamLimits

0x53ab,	// (0x0008d9d2) popup_cale_events_window

0xe508,	// (0x00096b2f) popup_mup_playback_window

0x53c3,	// (0x0008d9ea) signal_pane

0xc61e,	// (0x00094c45) main_browser_pane

0xc7d0,	// (0x00094df7) main_burst_pane

0x5203,	// (0x0008d82a) main_calc_pane

0xe4e9,	// (0x00096b10) main_cale_day_pane

0x2b91,	// (0x0008b1b8) main_cale_month_pane

0xe4e9,	// (0x00096b10) main_cale_week_pane

0xc7d0,	// (0x00094df7) main_call_pane

0xc2ac,	// (0x000948d3) main_call_poc_pane

0xc7d0,	// (0x00094df7) main_camera_pane

0xc7d0,	// (0x00094df7) main_chi_dic_pane

0xcfa6,	// (0x000955cd) main_clock_pane

0xc2ac,	// (0x000948d3) main_fmradio_pane

0xc7d0,	// (0x00094df7) main_graph_messa_pane

0xc2ac,	// (0x000948d3) main_help_pane

0xc61e,	// (0x00094c45) main_im_pane

0xc507,	// (0x00094b2e) main_image_pane_ParamLimits

0xc507,	// (0x00094b2e) main_image_pane

0xc2ac,	// (0x000948d3) main_location2_pane

0xc7d0,	// (0x00094df7) main_location_pane

0xc507,	// (0x00094b2e) main_messa_pane

0xc2ac,	// (0x000948d3) main_mp2_pane

0xc7d0,	// (0x00094df7) main_mp_pane

0xc2ac,	// (0x000948d3) main_msg_pane

0xc2ac,	// (0x000948d3) main_mup_eq_pane

0xc2ac,	// (0x000948d3) main_mup_pane

0xc61e,	// (0x00094c45) main_notes_pane

0xc2ac,	// (0x000948d3) main_pec_pane

0xc2ac,	// (0x000948d3) main_phob_pane

0xc2ac,	// (0x000948d3) main_pinb_pane

0xc2ac,	// (0x000948d3) main_postcard_pane

0xc2ac,	// (0x000948d3) main_qdial_pane

0xc7d0,	// (0x00094df7) main_skin_pane

0xc2ac,	// (0x000948d3) main_smil2_pane

0xc7d0,	// (0x00094df7) main_smil_pane

0xc7d0,	// (0x00094df7) main_video_pane

0xc7d0,	// (0x00094df7) main_video_tele_pane

0xc507,	// (0x00094b2e) main_viewer_pane_ParamLimits

0xc507,	// (0x00094b2e) main_viewer_pane

0xc7d0,	// (0x00094df7) main_vorec_pane

0x524f,	// (0x0008d876) popup_blid_sat_info_window_ParamLimits

0x524f,	// (0x0008d876) popup_blid_sat_info_window

0x526f,	// (0x0008d896) popup_dyc_status_message_window_ParamLimits

0x526f,	// (0x0008d896) popup_dyc_status_message_window

0x527f,	// (0x0008d8a6) popup_grid_large_graphic_window_ParamLimits

0x527f,	// (0x0008d8a6) popup_grid_large_graphic_window

0x5310,	// (0x0008d937) popup_loc_request_window_ParamLimits

0x5310,	// (0x0008d937) popup_loc_request_window

0x535d,	// (0x0008d984) popup_wml_address_window_ParamLimits

0x535d,	// (0x0008d984) popup_wml_address_window

0x50db,	// (0x0008d702) call_muted_g1

0x4dce,	// (0x0008d3f5) popup_call_audio_conf_window_ParamLimits

0x4dce,	// (0x0008d3f5) popup_call_audio_conf_window

0x50eb,	// (0x0008d712) popup_call_audio_first_window_ParamLimits

0x50eb,	// (0x0008d712) popup_call_audio_first_window

0x512b,	// (0x0008d752) popup_call_audio_in_window_ParamLimits

0x512b,	// (0x0008d752) popup_call_audio_in_window

0x514f,	// (0x0008d776) popup_call_audio_out_window_ParamLimits

0x514f,	// (0x0008d776) popup_call_audio_out_window

0x5171,	// (0x0008d798) popup_call_audio_second_window_ParamLimits

0x5171,	// (0x0008d798) popup_call_audio_second_window

0x51a1,	// (0x0008d7c8) popup_call_audio_wait_window_ParamLimits

0x51a1,	// (0x0008d7c8) popup_call_audio_wait_window

0x51c2,	// (0x0008d7e9) popup_number_entry_window_ParamLimits

0x51c2,	// (0x0008d7e9) popup_number_entry_window

0xac20,	// (0x00093247) bg_popup_call_pane_cp05_ParamLimits

0xac20,	// (0x00093247) bg_popup_call_pane_cp05

0xac40,	// (0x00093267) popup_number_entry_window_t1

0xbebe,	// (0x000944e5) popup_number_entry_window_t2

0xbed0,	// (0x000944f7) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00097667) popup_number_entry_window_t

0xbee2,	// (0x00094509) text_title_cp2

0xbef5,	// (0x0009451c) bg_popup_call_pane_cp_ParamLimits

0xbef5,	// (0x0009451c) bg_popup_call_pane_cp

0xbf03,	// (0x0009452a) call_thumbnail_pane

0xbf0b,	// (0x00094532) popup_call_audio_in_window_g1_ParamLimits

0xbf0b,	// (0x00094532) popup_call_audio_in_window_g1

0xbf17,	// (0x0009453e) popup_call_audio_in_window_g2_ParamLimits

0xbf17,	// (0x0009453e) popup_call_audio_in_window_g2

0xbf23,	// (0x0009454a) popup_call_audio_in_window_g3_ParamLimits

0xbf23,	// (0x0009454a) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00097670) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00097670) popup_call_audio_in_window_g

0xbf2f,	// (0x00094556) popup_call_audio_in_window_t1_ParamLimits

0xbf2f,	// (0x00094556) popup_call_audio_in_window_t1

0xbf4b,	// (0x00094572) popup_call_audio_in_window_t2_ParamLimits

0xbf4b,	// (0x00094572) popup_call_audio_in_window_t2

0xbf67,	// (0x0009458e) popup_call_audio_in_window_t3_ParamLimits

0xbf67,	// (0x0009458e) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00097677) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00097677) popup_call_audio_in_window_t

0xbef5,	// (0x0009451c) bg_popup_call_pane_cp01_ParamLimits

0xbef5,	// (0x0009451c) bg_popup_call_pane_cp01

0xbf03,	// (0x0009452a) call_thumbnail_pane_cp02

0xbf7a,	// (0x000945a1) call_type_pane_cp022

0xbf82,	// (0x000945a9) popup_call_audio_out_window_g1_ParamLimits

0xbf82,	// (0x000945a9) popup_call_audio_out_window_g1

0xbf94,	// (0x000945bb) popup_call_audio_out_window_g2_ParamLimits

0xbf94,	// (0x000945bb) popup_call_audio_out_window_g2

0xbfa0,	// (0x000945c7) popup_call_audio_out_window_g3_ParamLimits

0xbfa0,	// (0x000945c7) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0009767e) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0009767e) popup_call_audio_out_window_g

0xbfb2,	// (0x000945d9) popup_call_audio_out_window_t1_ParamLimits

0xbfb2,	// (0x000945d9) popup_call_audio_out_window_t1

0xbfca,	// (0x000945f1) popup_call_audio_out_window_t2_ParamLimits

0xbfca,	// (0x000945f1) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00097685) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00097685) popup_call_audio_out_window_t

0xbfdf,	// (0x00094606) bg_popup_call_pane_ParamLimits

0xbfdf,	// (0x00094606) bg_popup_call_pane

0x285c,	// (0x0008ae83) call_thumbnail_pane_cp_ParamLimits

0x285c,	// (0x0008ae83) call_thumbnail_pane_cp

0xc063,	// (0x0009468a) call_type_pane_cp01_ParamLimits

0xc063,	// (0x0009468a) call_type_pane_cp01

0xc0a7,	// (0x000946ce) popup_call_audio_first_window_g1_ParamLimits

0xc0a7,	// (0x000946ce) popup_call_audio_first_window_g1

0xc0f3,	// (0x0009471a) popup_call_audio_first_window_g2_ParamLimits

0xc0f3,	// (0x0009471a) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0009768a) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0009768a) popup_call_audio_first_window_g

0xc137,	// (0x0009475e) popup_call_audio_first_window_t1_ParamLimits

0xc137,	// (0x0009475e) popup_call_audio_first_window_t1

0xc1e3,	// (0x0009480a) popup_call_audio_first_window_t4_ParamLimits

0xc1e3,	// (0x0009480a) popup_call_audio_first_window_t4

0xc26f,	// (0x00094896) popup_call_audio_first_window_t5_ParamLimits

0xc26f,	// (0x00094896) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0009768f) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0009768f) popup_call_audio_first_window_t

0xc2ac,	// (0x000948d3) bg_popup_call_pane_cp02

0xc2b6,	// (0x000948dd) call_type_pane_cp023

0xc2be,	// (0x000948e5) popup_call_audio_wait_window_g1

0xc2c6,	// (0x000948ed) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00097696) popup_call_audio_wait_window_g

0xc2ce,	// (0x000948f5) popup_call_audio_wait_window_t3

0xc2dc,	// (0x00094903) bg_popup_call_pane_cp03_ParamLimits

0xc2dc,	// (0x00094903) bg_popup_call_pane_cp03

0xc33c,	// (0x00094963) call_thumbnail_pane_cp011_ParamLimits

0xc33c,	// (0x00094963) call_thumbnail_pane_cp011

0xc348,	// (0x0009496f) call_type_pane_cp034_ParamLimits

0xc348,	// (0x0009496f) call_type_pane_cp034

0xc384,	// (0x000949ab) popup_call_audio_second_window_g1_ParamLimits

0xc384,	// (0x000949ab) popup_call_audio_second_window_g1

0xc3c0,	// (0x000949e7) popup_call_audio_second_window_g2_ParamLimits

0xc3c0,	// (0x000949e7) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0009769b) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0009769b) popup_call_audio_second_window_g

0xc3fc,	// (0x00094a23) popup_call_audio_second_window_t1_ParamLimits

0xc3fc,	// (0x00094a23) popup_call_audio_second_window_t1

0xc47d,	// (0x00094aa4) popup_call_audio_second_window_t2_ParamLimits

0xc47d,	// (0x00094aa4) popup_call_audio_second_window_t2

0xc4b3,	// (0x00094ada) popup_call_audio_second_window_t3_ParamLimits

0xc4b3,	// (0x00094ada) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000976a0) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000976a0) popup_call_audio_second_window_t

0xc2ac,	// (0x000948d3) bg_popup_call_pane_cp04

0xc4e9,	// (0x00094b10) list_conf_pane

0xc4f1,	// (0x00094b18) popup_call_audio_conf_window_t1

0xc4ff,	// (0x00094b26) call_thumbnail_pane_g1

0xc507,	// (0x00094b2e) bg_pinb_pane_ParamLimits

0xc507,	// (0x00094b2e) bg_pinb_pane

0xc515,	// (0x00094b3c) find_pinb_pane

0xc507,	// (0x00094b2e) listscroll_pinb_pane_ParamLimits

0xc507,	// (0x00094b2e) listscroll_pinb_pane

0xc51f,	// (0x00094b46) pinb_bg_pane_g1

0xc51f,	// (0x00094b46) pinb_bg_pane_g2

0xc51f,	// (0x00094b46) pinb_bg_pane_g3

0xc51f,	// (0x00094b46) pinb_bg_pane_g4

0xc51f,	// (0x00094b46) pinb_bg_pane_g5

0xc51f,	// (0x00094b46) pinb_bg_pane_g6

0xc51f,	// (0x00094b46) pinb_bg_pane_g7

0xc51f,	// (0x00094b46) pinb_bg_pane_g8

0xc51f,	// (0x00094b46) pinb_bg_pane_g9

0xc51f,	// (0x00094b46) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000976a7) pinb_bg_pane_g

0xac16,	// (0x0009323d) grid_pinb_pane

0xac16,	// (0x0009323d) list_pinb_pane

0xc29e,	// (0x000948c5) scroll_pane_cp01_ParamLimits

0xc29e,	// (0x000948c5) scroll_pane_cp01

0xc529,	// (0x00094b50) find_pinb_pane_g1_ParamLimits

0xc529,	// (0x00094b50) find_pinb_pane_g1

0xc541,	// (0x00094b68) find_pinb_pane_t1

0xc553,	// (0x00094b7a) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000976c1) find_pinb_pane_t

0xc568,	// (0x00094b8f) input_focus_pane_cp01_ParamLimits

0xc568,	// (0x00094b8f) input_focus_pane_cp01

0xc574,	// (0x00094b9b) cell_pinb_pane_ParamLimits

0xc574,	// (0x00094b9b) cell_pinb_pane

0xc582,	// (0x00094ba9) cell_pinb_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_pinb_pane_g1

0xc590,	// (0x00094bb7) cell_pinb_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) cell_pinb_pane_g2

0xc590,	// (0x00094bb7) cell_pinb_pane_g3_ParamLimits

0xc590,	// (0x00094bb7) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000976c6) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000976c6) cell_pinb_pane_g

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp01

0xc574,	// (0x00094b9b) list_pinb_item_pane_ParamLimits

0xc574,	// (0x00094b9b) list_pinb_item_pane

0xac16,	// (0x0009323d) list_highlight_pane_cp02

0xc59e,	// (0x00094bc5) list_pinb_item_pane_g1_ParamLimits

0xc59e,	// (0x00094bc5) list_pinb_item_pane_g1

0xc590,	// (0x00094bb7) list_pinb_item_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) list_pinb_item_pane_g2

0xc582,	// (0x00094ba9) list_pinb_item_pane_g3_ParamLimits

0xc582,	// (0x00094ba9) list_pinb_item_pane_g3

0xc590,	// (0x00094bb7) list_pinb_item_pane_g4_ParamLimits

0xc590,	// (0x00094bb7) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000976cd) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000976cd) list_pinb_item_pane_g

0xc5ac,	// (0x00094bd3) list_pinb_item_pane_t1_ParamLimits

0xc5ac,	// (0x00094bd3) list_pinb_item_pane_t1

0x289a,	// (0x0008aec1) calc_display_pane

0x28b8,	// (0x0008aedf) calc_paper_pane

0x28d4,	// (0x0008aefb) grid_calc_pane

0xac16,	// (0x0009323d) bg_list_pane_cp01

0xc5c0,	// (0x00094be7) clock_g1

0xc5c0,	// (0x00094be7) clock_g2

0x0001,

0xf0af,	// (0x000976d6) clock_g

0xc5ca,	// (0x00094bf1) clock_t1_ParamLimits

0xc5ca,	// (0x00094bf1) clock_t1

0xc5de,	// (0x00094c05) clock_t2_ParamLimits

0xc5de,	// (0x00094c05) clock_t2

0xc5de,	// (0x00094c05) clock_t3_ParamLimits

0xc5de,	// (0x00094c05) clock_t3

0xc5de,	// (0x00094c05) clock_t4_ParamLimits

0xc5de,	// (0x00094c05) clock_t4

0xc5ca,	// (0x00094bf1) clock_t5_ParamLimits

0xc5ca,	// (0x00094bf1) clock_t5

0xc5de,	// (0x00094c05) clock_t6_ParamLimits

0xc5de,	// (0x00094c05) clock_t6

0xc5de,	// (0x00094c05) clock_t7_ParamLimits

0xc5de,	// (0x00094c05) clock_t7

0xc5de,	// (0x00094c05) clock_t8_ParamLimits

0xc5de,	// (0x00094c05) clock_t8

0xc5de,	// (0x00094c05) clock_t9_ParamLimits

0xc5de,	// (0x00094c05) clock_t9

0x0008,

0xf0b4,	// (0x000976db) clock_t_ParamLimits

0xf0b4,	// (0x000976db) clock_t

0xac16,	// (0x0009323d) popup_clock_analogue_window_cp02

0xac16,	// (0x0009323d) popup_clock_digital_window_cp01

0xc2ac,	// (0x000948d3) listscroll_help_pane

0xc2ac,	// (0x000948d3) phob_pre_status_pane

0xc5f2,	// (0x00094c19) grid_qdial_pane

0xc507,	// (0x00094b2e) listscroll_mce_pane

0xc507,	// (0x00094b2e) bg_notes_pane

0xc5fc,	// (0x00094c23) list_notes_pane

0x2900,	// (0x0008af27) scroll_pane_cp06

0xc60a,	// (0x00094c31) bg_calc_paper_pane

0x290f,	// (0x0008af36) list_calc_pane

0xc61e,	// (0x00094c45) bg_calc_display_pane

0x2929,	// (0x0008af50) calc_display_pane_t1

0x293e,	// (0x0008af65) calc_display_pane_t2

0x2953,	// (0x0008af7a) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000976ee) calc_display_pane_t

0x2965,	// (0x0008af8c) cell_calc_pane_ParamLimits

0x2965,	// (0x0008af8c) cell_calc_pane

0xc62a,	// (0x00094c51) bg_calc_paper_pane_g1

0xc642,	// (0x00094c69) bg_calc_paper_pane_g2

0xc636,	// (0x00094c5d) bg_calc_paper_pane_g3

0xc64e,	// (0x00094c75) bg_calc_paper_pane_g4

0xc65a,	// (0x00094c81) bg_calc_paper_pane_g5

0x2992,	// (0x0008afb9) bg_calc_paper_pane_g6

0x29a3,	// (0x0008afca) bg_calc_paper_pane_g7

0x29b4,	// (0x0008afdb) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000976f5) bg_calc_paper_pane_g

0x29c5,	// (0x0008afec) calc_bg_paper_pane_g9

0x29d6,	// (0x0008affd) list_calc_item_pane_ParamLimits

0x29d6,	// (0x0008affd) list_calc_item_pane

0xc666,	// (0x00094c8d) list_calc_item_pane_g1

0x2a02,	// (0x0008b029) list_calc_item_pane_t1_ParamLimits

0x2a02,	// (0x0008b029) list_calc_item_pane_t1

0x2a14,	// (0x0008b03b) list_calc_item_pane_t2_ParamLimits

0x2a14,	// (0x0008b03b) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00097706) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00097706) list_calc_item_pane_t

0xc51f,	// (0x00094b46) cell_calc_pane_g1

0xc673,	// (0x00094c9a) grid_highlight_pane_cp02

0x2a44,	// (0x0008b06b) bg_calc_display_pane_g1

0x2a4d,	// (0x0008b074) bg_calc_display_pane_g2

0x2a57,	// (0x0008b07e) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00097710) bg_calc_display_pane_g

0x2a60,	// (0x0008b087) cell_qdial_pane_ParamLimits

0x2a60,	// (0x0008b087) cell_qdial_pane

0x2a74,	// (0x0008b09b) cell_qdial_pane_g1_ParamLimits

0x2a74,	// (0x0008b09b) cell_qdial_pane_g1

0x2a81,	// (0x0008b0a8) cell_qdial_pane_g2_ParamLimits

0x2a81,	// (0x0008b0a8) cell_qdial_pane_g2

0xc695,	// (0x00094cbc) cell_qdial_pane_g3_ParamLimits

0xc695,	// (0x00094cbc) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00097717) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00097717) cell_qdial_pane_g

0x2a9f,	// (0x0008b0c6) cell_qdial_pane_t1_ParamLimits

0x2a9f,	// (0x0008b0c6) cell_qdial_pane_t1

0x2ab7,	// (0x0008b0de) cell_qdial_pane_t2_ParamLimits

0x2ab7,	// (0x0008b0de) cell_qdial_pane_t2

0x2aca,	// (0x0008b0f1) cell_qdial_pane_t3_ParamLimits

0x2aca,	// (0x0008b0f1) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00097720) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00097720) cell_qdial_pane_t

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp04

0xc6a1,	// (0x00094cc8) thumbnail_qdial_pane_ParamLimits

0xc6a1,	// (0x00094cc8) thumbnail_qdial_pane

0xc6fd,	// (0x00094d24) list_help_pane

0xc706,	// (0x00094d2d) scroll_pane_cp02

0x2add,	// (0x0008b104) help_list_pane_t1_ParamLimits

0x2add,	// (0x0008b104) help_list_pane_t1

0x2b13,	// (0x0008b13a) bg_notes_pane_g2

0x2b1b,	// (0x0008b142) bg_notes_pane_g3

0x2b23,	// (0x0008b14a) notes_bg_pane_g1

0x2b2b,	// (0x0008b152) notes_bg_pane_g4

0x2b33,	// (0x0008b15a) notes_bg_pane_g5

0x2b3b,	// (0x0008b162) notes_bg_pane_g6

0x2b43,	// (0x0008b16a) notes_bg_pane_g7

0x2b4b,	// (0x0008b172) notes_bg_pane_g8

0x2b53,	// (0x0008b17a) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0009773e) notes_bg_pane_g

0x2b5b,	// (0x0008b182) list_notes_text_pane_ParamLimits

0x2b5b,	// (0x0008b182) list_notes_text_pane

0xc70f,	// (0x00094d36) list_notes_text_pane_g1

0x2b83,	// (0x0008b1aa) list_notes_text_pane_t1

0x2b91,	// (0x0008b1b8) listscroll_cale_week_pane

0x2bb6,	// (0x0008b1dd) bg_cale_heading_pane

0xc732,	// (0x00094d59) bg_cale_pane_cp01

0x2bd6,	// (0x0008b1fd) cale_week_corner_pane

0x2bf0,	// (0x0008b217) cale_week_day_heading_pane

0x2c10,	// (0x0008b237) cale_week_scroll_pane_g1

0x2c2b,	// (0x0008b252) cale_week_scroll_pane_g2

0x2c3e,	// (0x0008b265) cale_week_scroll_pane_g3

0x2c51,	// (0x0008b278) cale_week_scroll_pane_g4

0x2c64,	// (0x0008b28b) cale_week_scroll_pane_g5

0x2c77,	// (0x0008b29e) cale_week_scroll_pane_g6

0x2c8a,	// (0x0008b2b1) cale_week_scroll_pane_g7

0x2c9f,	// (0x0008b2c6) cale_week_scroll_pane_g8

0x2cb4,	// (0x0008b2db) cale_week_scroll_pane_g9

0x2cc7,	// (0x0008b2ee) cale_week_scroll_pane_g10

0x2cda,	// (0x0008b301) cale_week_scroll_pane_g11

0x2ced,	// (0x0008b314) cale_week_scroll_pane_g12

0x2d04,	// (0x0008b32b) cale_week_scroll_pane_g13

0x2d1f,	// (0x0008b346) cale_week_scroll_pane_g14

0x2d3a,	// (0x0008b361) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0009774d) cale_week_scroll_pane_g

0x2d6a,	// (0x0008b391) cale_week_time_pane

0x2d7f,	// (0x0008b3a6) grid_cale_week_pane

0xc761,	// (0x00094d88) scroll_pane_cp08

0x2d9e,	// (0x0008b3c5) cell_cale_week_pane_ParamLimits

0x2d9e,	// (0x0008b3c5) cell_cale_week_pane

0x2e00,	// (0x0008b427) cale_week_day_heading_pane_t1

0x2e1b,	// (0x0008b442) cale_week_day_heading_pane_t2

0x2e36,	// (0x0008b45d) cale_week_day_heading_pane_t3

0x2e51,	// (0x0008b478) cale_week_day_heading_pane_t4

0x2e6c,	// (0x0008b493) cale_week_day_heading_pane_t5

0x2e87,	// (0x0008b4ae) cale_week_day_heading_pane_t6

0x2ea2,	// (0x0008b4c9) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0009776e) cale_week_day_heading_pane_t

0xc77e,	// (0x00094da5) bg_cale_side_pane

0x2ebd,	// (0x0008b4e4) cale_week_time_pane_t1

0x2ed7,	// (0x0008b4fe) cale_week_time_pane_t2

0x2ef1,	// (0x0008b518) cale_week_time_pane_t3

0x2f0b,	// (0x0008b532) cale_week_time_pane_t4

0x2f25,	// (0x0008b54c) cale_week_time_pane_t5

0x2f3f,	// (0x0008b566) cale_week_time_pane_t6

0x2f5d,	// (0x0008b584) cale_week_time_pane_t7

0x2f7f,	// (0x0008b5a6) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0009777d) cale_week_time_pane_t

0x2fa3,	// (0x0008b5ca) cell_cale_week_pane_g2

0x2fc7,	// (0x0008b5ee) cell_cale_week_pane_g3_ParamLimits

0x2fc7,	// (0x0008b5ee) cell_cale_week_pane_g3

0xc78c,	// (0x00094db3) grid_highlight_pane_cp07

0xc794,	// (0x00094dbb) listscroll_gms_pane

0xc79e,	// (0x00094dc5) grid_gms_pane

0xc7a7,	// (0x00094dce) listscroll_gms_pane_g1

0xc7af,	// (0x00094dd6) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0009778e) listscroll_gms_pane_g

0x2fdf,	// (0x0008b606) scroll_pane_cp010

0x2fea,	// (0x0008b611) cell_gms_pane_ParamLimits

0x2fea,	// (0x0008b611) cell_gms_pane

0x2ffd,	// (0x0008b624) cell_gms_pane_g1

0xc7b7,	// (0x00094dde) cell_gms_pane_g2

0xc70f,	// (0x00094d36) cell_gms_pane_g3

0xc7bf,	// (0x00094de6) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00097793) cell_gms_pane_g

0xc7c8,	// (0x00094def) grid_highlight_pane_cp09

0x505f,	// (0x0008d686) phob_pre_status_pane_g1

0x5067,	// (0x0008d68e) phob_pre_status_pane_g2

0x506f,	// (0x0008d696) phob_pre_status_pane_g3

0x5077,	// (0x0008d69e) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x00097b4c) phob_pre_status_pane_g

0x5087,	// (0x0008d6ae) phob_pre_status_pane_t1

0x5097,	// (0x0008d6be) phob_pre_status_pane_t2

0x50a7,	// (0x0008d6ce) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x00097b57) phob_pre_status_pane_t

0xc7d0,	// (0x00094df7) bg_list_pane_cp05

0x300d,	// (0x0008b634) grid_vorec_pane

0x3017,	// (0x0008b63e) vorec_t1

0x3025,	// (0x0008b64c) vorec_t2

0x3033,	// (0x0008b65a) vorec_t3

0x3041,	// (0x0008b668) vorec_t4

0x9ee9,	// (0x00092510) vorec_t5

0x9ef7,	// (0x0009251e) vorec_t6

0x0004,

0xf175,	// (0x0009779c) vorec_t

0x9f05,	// (0x0009252c) wait_bar_pane_cp01

0x305d,	// (0x0008b684) cell_vorec_pane_ParamLimits

0x305d,	// (0x0008b684) cell_vorec_pane

0x3070,	// (0x0008b697) cell_vorec_pane_g1

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp05

0xc574,	// (0x00094b9b) cams_zoom_pane

0xc574,	// (0x00094b9b) image_vga_pane

0xc590,	// (0x00094bb7) main_camera_pane_g1

0xc590,	// (0x00094bb7) main_camera_pane_g2

0xc590,	// (0x00094bb7) main_camera_pane_g3

0xc590,	// (0x00094bb7) main_camera_pane_g4

0xc590,	// (0x00094bb7) main_camera_pane_g5

0xc590,	// (0x00094bb7) main_camera_pane_g6

0xc590,	// (0x00094bb7) main_camera_pane_g7

0x0007,

0xf180,	// (0x000977a7) main_camera_pane_g

0xc5de,	// (0x00094c05) main_camera_pane_t1

0xc5de,	// (0x00094c05) main_camera_pane_t2

0x0001,

0xf191,	// (0x000977b8) main_camera_pane_t

0x307a,	// (0x0008b6a1) cams_zoom_pane_cp_ParamLimits

0x307a,	// (0x0008b6a1) cams_zoom_pane_cp

0x30a8,	// (0x0008b6cf) image_cif_pane_ParamLimits

0x30a8,	// (0x0008b6cf) image_cif_pane

0xac16,	// (0x0009323d) image_subqcif_pane

0x30b6,	// (0x0008b6dd) main_video_pane_g1_ParamLimits

0x30b6,	// (0x0008b6dd) main_video_pane_g1

0x30de,	// (0x0008b705) main_video_pane_g2_ParamLimits

0x30de,	// (0x0008b705) main_video_pane_g2

0x3111,	// (0x0008b738) main_video_pane_g3_ParamLimits

0x3111,	// (0x0008b738) main_video_pane_g3

0x3111,	// (0x0008b738) main_video_pane_g4_ParamLimits

0x3111,	// (0x0008b738) main_video_pane_g4

0x313f,	// (0x0008b766) main_video_pane_g5_ParamLimits

0x313f,	// (0x0008b766) main_video_pane_g5

0xc7d8,	// (0x00094dff) main_video_pane_g6_ParamLimits

0xc7d8,	// (0x00094dff) main_video_pane_g6

0x0006,

0xf196,	// (0x000977bd) main_video_pane_g_ParamLimits

0xf196,	// (0x000977bd) main_video_pane_g

0x315b,	// (0x0008b782) main_video_pane_t1_ParamLimits

0x315b,	// (0x0008b782) main_video_pane_t1

0xc5c0,	// (0x00094be7) cams_zoom_pane_g1

0xc5c0,	// (0x00094be7) cams_zoom_pane_g2

0xc5c0,	// (0x00094be7) cams_zoom_pane_g3

0xc5c0,	// (0x00094be7) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000977cc) cams_zoom_pane_g

0xc574,	// (0x00094b9b) grid_cams_pane

0xc574,	// (0x00094b9b) linegrid_cams_pane

0x3195,	// (0x0008b7bc) cell_cams_pane_ParamLimits

0x3195,	// (0x0008b7bc) cell_cams_pane

0xac16,	// (0x0009323d) cams_burst_image_pane

0xc5c0,	// (0x00094be7) cell_cams_pane_g1

0xac16,	// (0x0009323d) grid_highlight_pane_cp03

0xc51f,	// (0x00094b46) mp_bg_pane_g1

0xac16,	// (0x0009323d) bg_list_pane_cp03

0xac16,	// (0x0009323d) bg_mp_pane

0xac16,	// (0x0009323d) grid_mp_pane

0xc5c0,	// (0x00094be7) media_player_g1

0xcd2e,	// (0x00095355) media_player_t1

0xcd2e,	// (0x00095355) media_player_t2

0xcd2e,	// (0x00095355) media_player_t3

0xcd2e,	// (0x00095355) media_player_t4

0xcd2e,	// (0x00095355) media_player_t5

0xcd2e,	// (0x00095355) media_player_t6

0xcd2e,	// (0x00095355) media_player_t7

0x0006,

0xf50f,	// (0x00097b36) media_player_t

0xac16,	// (0x0009323d) wait_bar_pane_cp02

0xf4f4,	// (0x00097b1b) main_usb_pane_t

0xcfa6,	// (0x000955cd) cell_mp_pane

0xc51f,	// (0x00094b46) cell_mp_pane_g1

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp06

0xc7f2,	// (0x00094e19) grid_skin_colour_pane

0xc7fa,	// (0x00094e21) list_highlight_pane_cp03

0x31aa,	// (0x0008b7d1) skin_g1

0xc802,	// (0x00094e29) skin_t1

0xc811,	// (0x00094e38) skin_t2

0x0001,

0xf1d3,	// (0x000977fa) skin_t

0x31b4,	// (0x0008b7db) cell_skin_colour_pane_ParamLimits

0x31b4,	// (0x0008b7db) cell_skin_colour_pane

0xc81f,	// (0x00094e46) cell_skin_colour_pane_g1

0x3238,	// (0x0008b85f) call_video_g1_ParamLimits

0x3238,	// (0x0008b85f) call_video_g1

0x3248,	// (0x0008b86f) call_video_g2_ParamLimits

0x3248,	// (0x0008b86f) call_video_g2

0x0001,

0xf1d8,	// (0x000977ff) call_video_g_ParamLimits

0xf1d8,	// (0x000977ff) call_video_g

0x32a2,	// (0x0008b8c9) call_video_uplink_pane_cp1_ParamLimits

0x32a2,	// (0x0008b8c9) call_video_uplink_pane_cp1

0xc831,	// (0x00094e58) call_video_uplink_pane_cp2

0x336e,	// (0x0008b995) video_down_crop_pane_ParamLimits

0x336e,	// (0x0008b995) video_down_crop_pane

0x346c,	// (0x0008ba93) video_down_pane_ParamLimits

0x346c,	// (0x0008ba93) video_down_pane

0xc839,	// (0x00094e60) video_down_subqcif_pane_ParamLimits

0xc839,	// (0x00094e60) video_down_subqcif_pane

0xc851,	// (0x00094e78) video_down_subqcif_pane_cp_ParamLimits

0xc851,	// (0x00094e78) video_down_subqcif_pane_cp

0xc877,	// (0x00094e9e) im_reading_pane_ParamLimits

0xc877,	// (0x00094e9e) im_reading_pane

0x358c,	// (0x0008bbb3) im_writing_pane_ParamLimits

0x358c,	// (0x0008bbb3) im_writing_pane

0x35aa,	// (0x0008bbd1) im_reading_pane_t1

0xc891,	// (0x00094eb8) list_im_pane

0xc8a2,	// (0x00094ec9) scroll_pane_cp07

0x35fe,	// (0x0008bc25) im_writing_pane_t1_ParamLimits

0x35fe,	// (0x0008bc25) im_writing_pane_t1

0xc8bb,	// (0x00094ee2) im_writing_pane_t2_ParamLimits

0xc8bb,	// (0x00094ee2) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00097809) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00097809) im_writing_pane_t

0xc2ac,	// (0x000948d3) input_focus_pane_cp04

0xc2ac,	// (0x000948d3) input_focus_pane_cp05

0x3613,	// (0x0008bc3a) list_im_single_pane_ParamLimits

0x3613,	// (0x0008bc3a) list_im_single_pane

0x3637,	// (0x0008bc5e) list_single_im_pane_t1

0xc7d0,	// (0x00094df7) blid_accuracy_pane

0xc7d0,	// (0x00094df7) blid_compass_pane

0xe4a1,	// (0x00096ac8) main_location_t1

0xe4a1,	// (0x00096ac8) main_location_t2

0xe4a1,	// (0x00096ac8) main_location_t3

0x0002,

0xf51e,	// (0x00097b45) main_location_t

0xc2ac,	// (0x000948d3) aid_levels_location

0xc51f,	// (0x00094b46) blid_accuracy_pane_g1

0xc51f,	// (0x00094b46) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0009785d) blid_accuracy_pane_g

0xc903,	// (0x00094f2a) wml_content_pane

0xc941,	// (0x00094f68) wml_button_pane_ParamLimits

0xc941,	// (0x00094f68) wml_button_pane

0x3646,	// (0x0008bc6d) wml_list_single_large_pane_ParamLimits

0x3646,	// (0x0008bc6d) wml_list_single_large_pane

0x3670,	// (0x0008bc97) wml_list_single_medium_pane_ParamLimits

0x3670,	// (0x0008bc97) wml_list_single_medium_pane

0x36a1,	// (0x0008bcc8) wml_list_single_small_pane_ParamLimits

0x36a1,	// (0x0008bcc8) wml_list_single_small_pane

0xc97c,	// (0x00094fa3) wml_selection_box_pane_ParamLimits

0xc97c,	// (0x00094fa3) wml_selection_box_pane

0xc98f,	// (0x00094fb6) wml_list_single_pane_t1

0xc99e,	// (0x00094fc5) wml_list_single_medium_pane_t1

0xc9ad,	// (0x00094fd4) wml_list_single_large_pane_t1

0xc9bc,	// (0x00094fe3) input_focus_pane_cp02_ParamLimits

0xc9bc,	// (0x00094fe3) input_focus_pane_cp02

0xc9cf,	// (0x00094ff6) wml_selection_box_pane_g1

0xc9d8,	// (0x00094fff) wml_selection_box_pane_t1_ParamLimits

0xc9d8,	// (0x00094fff) wml_selection_box_pane_t1

0xc507,	// (0x00094b2e) bg_wml_button_pane_ParamLimits

0xc507,	// (0x00094b2e) bg_wml_button_pane

0xc9f0,	// (0x00095017) wml_button_pane_g1

0xc9f8,	// (0x0009501f) wml_button_pane_t1

0xc9f0,	// (0x00095017) wml_button_bg_pane_g1

0xca08,	// (0x0009502f) wml_button_bg_pane_g2

0xca10,	// (0x00095037) wml_button_bg_pane_g3

0xca18,	// (0x0009503f) wml_button_bg_pane_g4

0xca20,	// (0x00095047) wml_button_bg_pane_g5

0xca28,	// (0x0009504f) wml_button_bg_pane_g6

0xca30,	// (0x00095057) wml_button_bg_pane_g7

0xca38,	// (0x0009505f) wml_button_bg_pane_g8

0xca40,	// (0x00095067) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0009780e) wml_button_bg_pane_g

0x36db,	// (0x0008bd02) bg_list_pane_cp02

0xca48,	// (0x0009506f) mce_header_pane_ParamLimits

0xca48,	// (0x0009506f) mce_header_pane

0xca5e,	// (0x00095085) mce_icon_pane

0xca5e,	// (0x00095085) mce_image_pane

0xca67,	// (0x0009508e) mce_text_pane_ParamLimits

0xca67,	// (0x0009508e) mce_text_pane

0x36e5,	// (0x0008bd0c) scroll_pane_cp03

0xc939,	// (0x00094f60) scroll_pane_cp04

0xca7a,	// (0x000950a1) scroll_pane_cp05_ParamLimits

0xca7a,	// (0x000950a1) scroll_pane_cp05

0x36ef,	// (0x0008bd16) mce_header_field_pane_ParamLimits

0x36ef,	// (0x0008bd16) mce_header_field_pane

0x370f,	// (0x0008bd36) mce_header_field_pane_2_ParamLimits

0x370f,	// (0x0008bd36) mce_header_field_pane_2

0x3725,	// (0x0008bd4c) mce_header_field_pane_3

0x372d,	// (0x0008bd54) list_single_mce_message_pane_ParamLimits

0x372d,	// (0x0008bd54) list_single_mce_message_pane

0x3758,	// (0x0008bd7f) list_single_mce_smart_pane_ParamLimits

0x3758,	// (0x0008bd7f) list_single_mce_smart_pane

0xca86,	// (0x000950ad) input_focus_pane_cp03

0xca8f,	// (0x000950b6) list_header_data_pane

0x378e,	// (0x0008bdb5) mce_header_field_pane_t1

0x379c,	// (0x0008bdc3) list_single_mce_header_pane_ParamLimits

0x379c,	// (0x0008bdc3) list_single_mce_header_pane

0xca97,	// (0x000950be) list_single_mce_header_pane_t1

0xcaa6,	// (0x000950cd) list_single_mce_message_pane_g1

0xcaae,	// (0x000950d5) list_single_mce_message_pane_t1

0x37ee,	// (0x0008be15) bg_cale_heading_pane_cp01_ParamLimits

0x37ee,	// (0x0008be15) bg_cale_heading_pane_cp01

0xcabc,	// (0x000950e3) bg_cale_pane_cp02_ParamLimits

0xcabc,	// (0x000950e3) bg_cale_pane_cp02

0x383c,	// (0x0008be63) cale_month_corner_pane

0x385b,	// (0x0008be82) cale_month_day_heading_pane_ParamLimits

0x385b,	// (0x0008be82) cale_month_day_heading_pane

0x38c1,	// (0x0008bee8) cale_month_pane_g1_ParamLimits

0x38c1,	// (0x0008bee8) cale_month_pane_g1

0x3904,	// (0x0008bf2b) cale_month_pane_g2_ParamLimits

0x3904,	// (0x0008bf2b) cale_month_pane_g2

0x393c,	// (0x0008bf63) cale_month_pane_g3_ParamLimits

0x393c,	// (0x0008bf63) cale_month_pane_g3

0x3988,	// (0x0008bfaf) cale_month_pane_g4_ParamLimits

0x3988,	// (0x0008bfaf) cale_month_pane_g4

0x39d4,	// (0x0008bffb) cale_month_pane_g5_ParamLimits

0x39d4,	// (0x0008bffb) cale_month_pane_g5

0x3a20,	// (0x0008c047) cale_month_pane_g6_ParamLimits

0x3a20,	// (0x0008c047) cale_month_pane_g6

0x3a6c,	// (0x0008c093) cale_month_pane_g7_ParamLimits

0x3a6c,	// (0x0008c093) cale_month_pane_g7

0x3ad0,	// (0x0008c0f7) cale_month_pane_g8_ParamLimits

0x3ad0,	// (0x0008c0f7) cale_month_pane_g8

0x3b34,	// (0x0008c15b) cale_month_pane_g9_ParamLimits

0x3b34,	// (0x0008c15b) cale_month_pane_g9

0x3b92,	// (0x0008c1b9) cale_month_pane_g10_ParamLimits

0x3b92,	// (0x0008c1b9) cale_month_pane_g10

0x3bee,	// (0x0008c215) cale_month_pane_g11_ParamLimits

0x3bee,	// (0x0008c215) cale_month_pane_g11

0x3c42,	// (0x0008c269) cale_month_pane_g12_ParamLimits

0x3c42,	// (0x0008c269) cale_month_pane_g12

0x3c98,	// (0x0008c2bf) cale_month_pane_g13_ParamLimits

0x3c98,	// (0x0008c2bf) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00097821) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00097821) cale_month_pane_g

0x3cee,	// (0x0008c315) cale_month_week_pane

0x3d12,	// (0x0008c339) grid_cale_month_pane_ParamLimits

0x3d12,	// (0x0008c339) grid_cale_month_pane

0x3d6b,	// (0x0008c392) cale_month_day_heading_pane_t1

0x3df1,	// (0x0008c418) cale_month_day_heading_pane_t2

0x3e6a,	// (0x0008c491) cale_month_day_heading_pane_t3

0x3ee3,	// (0x0008c50a) cale_month_day_heading_pane_t4

0x3f5c,	// (0x0008c583) cale_month_day_heading_pane_t5

0x3fd5,	// (0x0008c5fc) cale_month_day_heading_pane_t6

0x404e,	// (0x0008c675) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0009783c) cale_month_day_heading_pane_t

0xc77e,	// (0x00094da5) bg_cale_side_pane_cp01

0x40df,	// (0x0008c706) cale_month_week_pane_t1

0x40f8,	// (0x0008c71f) cale_month_week_pane_t2

0x4111,	// (0x0008c738) cale_month_week_pane_t3

0x412a,	// (0x0008c751) cale_month_week_pane_t4

0x4143,	// (0x0008c76a) cale_month_week_pane_t5

0x4164,	// (0x0008c78b) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0009784b) cale_month_week_pane_t

0x4185,	// (0x0008c7ac) cell_cale_month_pane_ParamLimits

0x4185,	// (0x0008c7ac) cell_cale_month_pane

0x42a7,	// (0x0008c8ce) cell_cale_month_pane_g1

0x42b3,	// (0x0008c8da) cell_cale_month_pane_t1_ParamLimits

0x42b3,	// (0x0008c8da) cell_cale_month_pane_t1

0xc78c,	// (0x00094db3) grid_highlight_pane_cp08

0xc51f,	// (0x00094b46) main_smil_g1

0x42df,	// (0x0008c906) smil_status_pane

0xcafb,	// (0x00095122) smil_text_pane

0xe3ab,	// (0x000969d2) bg_popup_call3_rect_pane_g8

0xe3b3,	// (0x000969da) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00097ad9) bg_popup_call3_rect_pane_g

0xe56a,	// (0x00096b91) smil_status_volume_pane_g1

0xcb05,	// (0x0009512c) smil_status_pane_t1

0x540c,	// (0x0008da33) volume_smil_pane

0xcb1c,	// (0x00095143) list_smil_text_pane

0x42f2,	// (0x0008c919) scroll_pane_cp011

0x42fd,	// (0x0008c924) smil_text_list_pane_t1_ParamLimits

0x42fd,	// (0x0008c924) smil_text_list_pane_t1

0x4375,	// (0x0008c99c) aid_volume_smil_ParamLimits

0x4375,	// (0x0008c99c) aid_volume_smil

0xc51f,	// (0x00094b46) smil_volume_pane_g1

0xc51f,	// (0x00094b46) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0009785d) smil_volume_pane_g

0x2b91,	// (0x0008b1b8) listscroll_cale_day_pane

0xcb26,	// (0x0009514d) bg_cale_pane

0xcb3e,	// (0x00095165) list_cale_pane

0xcb61,	// (0x00095188) scroll_pane_cp09

0xcb72,	// (0x00095199) cale_bg_pane_g1

0xcb7a,	// (0x000951a1) cale_bg_pane_g2

0xcb82,	// (0x000951a9) cale_bg_pane_g3

0xcb8a,	// (0x000951b1) cale_bg_pane_g4

0xcb92,	// (0x000951b9) cale_bg_pane_g5

0xcb9a,	// (0x000951c1) cale_bg_pane_g6

0xcba2,	// (0x000951c9) cale_bg_pane_g7

0xcbaa,	// (0x000951d1) cale_bg_pane_g8

0xcbb2,	// (0x000951d9) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00097862) cale_bg_pane_g

0x4397,	// (0x0008c9be) list_cale_time_pane_ParamLimits

0x4397,	// (0x0008c9be) list_cale_time_pane

0xcbc2,	// (0x000951e9) list_cale_time_pane_g1_ParamLimits

0xcbc2,	// (0x000951e9) list_cale_time_pane_g1

0xcbce,	// (0x000951f5) list_cale_time_pane_g2_ParamLimits

0xcbce,	// (0x000951f5) list_cale_time_pane_g2

0x43b9,	// (0x0008c9e0) list_cale_time_pane_g3_ParamLimits

0x43b9,	// (0x0008c9e0) list_cale_time_pane_g3

0x43c7,	// (0x0008c9ee) list_cale_time_pane_g4_ParamLimits

0x43c7,	// (0x0008c9ee) list_cale_time_pane_g4

0x43d5,	// (0x0008c9fc) list_cale_time_pane_g5_ParamLimits

0x43d5,	// (0x0008c9fc) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00097875) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00097875) list_cale_time_pane_g

0xcbe8,	// (0x0009520f) list_cale_time_pane_t1_ParamLimits

0xcbe8,	// (0x0009520f) list_cale_time_pane_t1

0xcc10,	// (0x00095237) list_cale_time_pane_t2_ParamLimits

0xcc10,	// (0x00095237) list_cale_time_pane_t2

0x4678,	// (0x0008cc9f) aid_blid_cardinal_pane

0x46ba,	// (0x0008cce1) compass_pane_t4

0xcc38,	// (0x0009525f) list_cale_time_pane_t4_ParamLimits

0xcc38,	// (0x0009525f) list_cale_time_pane_t4

0x46c8,	// (0x0008ccef) compass_pane_t5

0x46d8,	// (0x0008ccff) compass_pane_t6

0x46e6,	// (0x0008cd0d) compass_pane_t7

0xd0eb,	// (0x00095712) navi_pane_cc_t1

0xd2c8,	// (0x000958ef) aid_phob_thumbnail_center_pane

0x4ba9,	// (0x0008d1d0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00097882) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00097882) list_cale_time_pane_t

0xbef5,	// (0x0009451c) bg_popup_window_pane_cp02_ParamLimits

0xbef5,	// (0x0009451c) bg_popup_window_pane_cp02

0xcc60,	// (0x00095287) heading_pane_cp01_ParamLimits

0xcc60,	// (0x00095287) heading_pane_cp01

0xcc6c,	// (0x00095293) loc_req_pane_ParamLimits

0xcc6c,	// (0x00095293) loc_req_pane

0xcc7c,	// (0x000952a3) loc_type_pane_ParamLimits

0xcc7c,	// (0x000952a3) loc_type_pane

0xcc8e,	// (0x000952b5) loc_type_pane_t1_ParamLimits

0xcc8e,	// (0x000952b5) loc_type_pane_t1

0xcca0,	// (0x000952c7) loc_type_pane_t2_ParamLimits

0xcca0,	// (0x000952c7) loc_type_pane_t2

0xccb2,	// (0x000952d9) loc_type_pane_t3_ParamLimits

0xccb2,	// (0x000952d9) loc_type_pane_t3

0x0002,

0xf262,	// (0x00097889) loc_type_pane_t_ParamLimits

0xf262,	// (0x00097889) loc_type_pane_t

0xccc4,	// (0x000952eb) list_loc_req_pane

0xccce,	// (0x000952f5) scroll_pane_cp012

0x43e3,	// (0x0008ca0a) list_single_loc_request_popup_menu_pane_ParamLimits

0x43e3,	// (0x0008ca0a) list_single_loc_request_popup_menu_pane

0xccd9,	// (0x00095300) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xccd9,	// (0x00095300) list_single_loc_request_popup_menu_pane_g1

0xcce5,	// (0x0009530c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcce5,	// (0x0009530c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00097890) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00097890) list_single_loc_request_popup_menu_pane_g

0xccf1,	// (0x00095318) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xccf1,	// (0x00095318) list_single_loc_request_popup_menu_pane_t1

0x43f5,	// (0x0008ca1c) bg_popup_window_pane_cp03_ParamLimits

0x43f5,	// (0x0008ca1c) bg_popup_window_pane_cp03

0x4403,	// (0x0008ca2a) heading_loc_req_pane_ParamLimits

0x4403,	// (0x0008ca2a) heading_loc_req_pane

0x440f,	// (0x0008ca36) popup_dyc_status_message_window_g1_ParamLimits

0x440f,	// (0x0008ca36) popup_dyc_status_message_window_g1

0x441b,	// (0x0008ca42) popup_dyc_status_message_window_t1_ParamLimits

0x441b,	// (0x0008ca42) popup_dyc_status_message_window_t1

0x442d,	// (0x0008ca54) popup_dyc_status_message_window_t2_ParamLimits

0x442d,	// (0x0008ca54) popup_dyc_status_message_window_t2

0x443f,	// (0x0008ca66) popup_dyc_status_message_window_t3_ParamLimits

0x443f,	// (0x0008ca66) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00097895) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00097895) popup_dyc_status_message_window_t

0xc2ac,	// (0x000948d3) bg_heading_pane_cp01

0xcd07,	// (0x0009532e) heading_loc_req_pane_g1

0xcd0f,	// (0x00095336) heading_loc_req_pane_g2

0xcd17,	// (0x0009533e) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0009789c) heading_loc_req_pane_g

0xcd1f,	// (0x00095346) heading_loc_req_pane_t1

0xcd3e,	// (0x00095365) bg_popup_sub_pane_cp01_ParamLimits

0xcd3e,	// (0x00095365) bg_popup_sub_pane_cp01

0xcd4c,	// (0x00095373) popup_cale_events_window_g1_ParamLimits

0xcd4c,	// (0x00095373) popup_cale_events_window_g1

0xcd6c,	// (0x00095393) popup_cale_events_window_g2_ParamLimits

0xcd6c,	// (0x00095393) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000978be) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000978be) popup_cale_events_window_g

0xcd8c,	// (0x000953b3) popup_cale_events_window_t1_ParamLimits

0xcd8c,	// (0x000953b3) popup_cale_events_window_t1

0xcd9e,	// (0x000953c5) popup_cale_events_window_t2_ParamLimits

0xcd9e,	// (0x000953c5) popup_cale_events_window_t2

0xcddc,	// (0x00095403) popup_cale_events_window_t3_ParamLimits

0xcddc,	// (0x00095403) popup_cale_events_window_t3

0xce16,	// (0x0009543d) popup_cale_events_window_t4_ParamLimits

0xce16,	// (0x0009543d) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000978c3) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000978c3) popup_cale_events_window_t

0x4469,	// (0x0008ca90) call_type_pane

0xdafc,	// (0x00096123) popup_call_status_window_g1

0x4475,	// (0x0008ca9c) popup_call_status_window_g2

0x4481,	// (0x0008caa8) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000978cc) popup_call_status_window_g

0xce4c,	// (0x00095473) call_type_pane_g1

0xce55,	// (0x0009547c) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000978d3) call_type_pane_g

0xc2ac,	// (0x000948d3) bg_popup_sub_pane_cp02

0xce5e,	// (0x00095485) listscroll_popup_wml_pane

0xce66,	// (0x0009548d) list_wml_pane

0xce70,	// (0x00095497) scroll_pane_cp013

0xce7b,	// (0x000954a2) list_single_graphic_popup_wml_pane_ParamLimits

0xce7b,	// (0x000954a2) list_single_graphic_popup_wml_pane

0xc51f,	// (0x00094b46) list_single_graphic_popup_wml_pane_g1

0xce8f,	// (0x000954b6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000978d8) list_single_graphic_popup_wml_pane_g

0xce97,	// (0x000954be) list_single_graphic_popup_wml_pane_t1

0xcead,	// (0x000954d4) aid_call_pane

0xc4ff,	// (0x00094b26) popup_clock_analogue_window_g1

0xc4ff,	// (0x00094b26) popup_clock_analogue_window_g2

0x448d,	// (0x0008cab4) popup_clock_analogue_window_g3

0x448d,	// (0x0008cab4) popup_clock_analogue_window_g4

0xc51f,	// (0x00094b46) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000978dd) popup_clock_analogue_window_g

0x4495,	// (0x0008cabc) popup_clock_analogue_window_t1

0x44a3,	// (0x0008caca) clock_digital_number_pane_ParamLimits

0x44a3,	// (0x0008caca) clock_digital_number_pane

0x44af,	// (0x0008cad6) clock_digital_number_pane_cp02_ParamLimits

0x44af,	// (0x0008cad6) clock_digital_number_pane_cp02

0x44bb,	// (0x0008cae2) clock_digital_number_pane_cp03_ParamLimits

0x44bb,	// (0x0008cae2) clock_digital_number_pane_cp03

0x44c7,	// (0x0008caee) clock_digital_number_pane_cp04_ParamLimits

0x44c7,	// (0x0008caee) clock_digital_number_pane_cp04

0x44d7,	// (0x0008cafe) clock_digital_separator_pane_ParamLimits

0x44d7,	// (0x0008cafe) clock_digital_separator_pane

0x44e3,	// (0x0008cb0a) popup_clock_digital_window_t1

0xc51f,	// (0x00094b46) clock_digital_number_pane_g1

0xc51f,	// (0x00094b46) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0009785d) clock_digital_number_pane_g

0xc51f,	// (0x00094b46) clock_digital_separator_pane_g1

0xc51f,	// (0x00094b46) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0009785d) clock_digital_separator_pane_g

0xc2ac,	// (0x000948d3) bg_popup_window_pane_cp04

0xceb5,	// (0x000954dc) heading_pane_cp03

0xc7d0,	// (0x00094df7) listscroll_popup_gms_pane

0xc2ac,	// (0x000948d3) grid_large_graphic_popup_pane

0xcebe,	// (0x000954e5) listscroll_popup_gms_pane_g1

0xcec7,	// (0x000954ee) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000978e8) listscroll_popup_gms_pane_g

0xced0,	// (0x000954f7) scroll_pane_cp014

0xc574,	// (0x00094b9b) cell_large_graphic_popup_pane_ParamLimits

0xc574,	// (0x00094b9b) cell_large_graphic_popup_pane

0xc582,	// (0x00094ba9) cell_large_graphic_popup_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_large_graphic_popup_pane_g1

0xced9,	// (0x00095500) cell_large_graphic_popup_pane_g2_ParamLimits

0xced9,	// (0x00095500) cell_large_graphic_popup_pane_g2

0xcee7,	// (0x0009550e) cell_large_graphic_popup_pane_g3_ParamLimits

0xcee7,	// (0x0009550e) cell_large_graphic_popup_pane_g3

0xcef5,	// (0x0009551c) cell_large_graphic_popup_pane_g4_ParamLimits

0xcef5,	// (0x0009551c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000978ed) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000978ed) cell_large_graphic_popup_pane_g

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp010

0xc51f,	// (0x00094b46) bg_popup_call_pane_g1

0xcf12,	// (0x00095539) list_single_graphic_popup_conf_pane_ParamLimits

0xcf12,	// (0x00095539) list_single_graphic_popup_conf_pane

0xcf25,	// (0x0009554c) list_highlight_pane_cp01

0xcf2e,	// (0x00095555) list_single_graphic_popup_conf_pane_g1

0xcf36,	// (0x0009555d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000978f6) list_single_graphic_popup_conf_pane_g

0xcf3e,	// (0x00095565) list_single_graphic_popup_conf_pane_t1

0xcf4c,	// (0x00095573) linegrid_cams_pane_g1

0x4500,	// (0x0008cb27) linegrid_cams_pane_g2

0xc70f,	// (0x00094d36) linegrid_cams_pane_g3

0xcf55,	// (0x0009557c) linegrid_cams_pane_g4

0x4509,	// (0x0008cb30) linegrid_cams_pane_g5

0x4512,	// (0x0008cb39) linegrid_cams_pane_g6

0xc7bf,	// (0x00094de6) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000978fb) linegrid_cams_pane_g

0xcf5e,	// (0x00095585) popup_clock_analogue_window

0xcf5e,	// (0x00095585) popup_clock_digital_window

0xc2ac,	// (0x000948d3) popup_phob_thumbnail_window

0xc51f,	// (0x00094b46) call_video_uplink_pane_g1

0xcf67,	// (0x0009558e) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0009790a) call_video_uplink_pane_g

0xcf6f,	// (0x00095596) video_uplink_pane

0xcf77,	// (0x0009559e) mce_image_pane_g1

0x451b,	// (0x0008cb42) mce_image_pane_g2

0x4525,	// (0x0008cb4c) mce_image_pane_g3

0x452d,	// (0x0008cb54) mce_image_pane_g4

0x4535,	// (0x0008cb5c) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0009790f) mce_image_pane_g

0xcf81,	// (0x000955a8) control_top_pane_stacon_cp01_ParamLimits

0xcf81,	// (0x000955a8) control_top_pane_stacon_cp01

0xcf95,	// (0x000955bc) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf95,	// (0x000955bc) uni_indicator_pane_stacon_cp01

0xcfa6,	// (0x000955cd) bg_popup_sub_pane_cp03

0xcfb0,	// (0x000955d7) chi_dic_find_pane

0x453d,	// (0x0008cb64) listscroll_chi_dic_pane

0xcfb8,	// (0x000955df) main_pane_chidic_g1

0xcfc0,	// (0x000955e7) chi_dic_find_pane_t1

0xcfce,	// (0x000955f5) find_chidic_pane

0xcfd7,	// (0x000955fe) chi_dic_list_pane_ParamLimits

0xcfd7,	// (0x000955fe) chi_dic_list_pane

0xcfe8,	// (0x0009560f) scroll_pane_cp020

0xcff0,	// (0x00095617) find_chidic_pane_t1

0xc2ac,	// (0x000948d3) input_focus_pane_cp06

0x4551,	// (0x0008cb78) list_chi_dic_pane_ParamLimits

0x4551,	// (0x0008cb78) list_chi_dic_pane

0x456b,	// (0x0008cb92) list_chi_dic_pane_t1_ParamLimits

0x456b,	// (0x0008cb92) list_chi_dic_pane_t1

0xc2ac,	// (0x000948d3) list_highlight_pane_cp020

0xcfff,	// (0x00095626) bg_cale_heading_pane_g1

0x457e,	// (0x0008cba5) bg_cale_heading_pane_g2

0x4586,	// (0x0008cbad) bg_cale_heading_pane_g3

0x458e,	// (0x0008cbb5) bg_cale_heading_pane_g4

0x4598,	// (0x0008cbbf) bg_cale_heading_pane_g5

0x45a2,	// (0x0008cbc9) bg_cale_heading_pane_g6

0x45aa,	// (0x0008cbd1) bg_cale_heading_pane_g7

0x45b2,	// (0x0008cbd9) bg_cale_heading_pane_g8

0x45bc,	// (0x0008cbe3) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0009791a) bg_cale_heading_pane_g

0xcfff,	// (0x00095626) bg_cale_side_pane_g1

0x45c6,	// (0x0008cbed) bg_cale_side_pane_g2

0x45d0,	// (0x0008cbf7) bg_cale_side_pane_g3

0x45da,	// (0x0008cc01) bg_cale_side_pane_g4

0x45e4,	// (0x0008cc0b) bg_cale_side_pane_g5

0x45ee,	// (0x0008cc15) bg_cale_side_pane_g6

0x45f8,	// (0x0008cc1f) bg_cale_side_pane_g7

0x4602,	// (0x0008cc29) bg_cale_side_pane_g8

0x460a,	// (0x0008cc31) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0009792d) bg_cale_side_pane_g

0x4612,	// (0x0008cc39) popup_call_status_window_ParamLimits

0x4612,	// (0x0008cc39) popup_call_status_window

0xd007,	// (0x0009562e) stacon_top_pane

0xd00f,	// (0x00095636) status_pane_ParamLimits

0xd00f,	// (0x00095636) status_pane

0xd024,	// (0x0009564b) status_small_pane

0xd02c,	// (0x00095653) control_pane

0xc2ac,	// (0x000948d3) stacon_bottom_pane

0xd034,	// (0x0009565b) list_single_mce_smart_pane_t1_ParamLimits

0xd034,	// (0x0009565b) list_single_mce_smart_pane_t1

0xd047,	// (0x0009566e) list_single_mce_smart_pane_t2_ParamLimits

0xd047,	// (0x0009566e) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00097940) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00097940) list_single_mce_smart_pane_t

0x461e,	// (0x0008cc45) compass_pane

0x462a,	// (0x0008cc51) main_location2_pane_t1

0x463e,	// (0x0008cc65) main_location2_pane_t2

0x4652,	// (0x0008cc79) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00097945) main_location2_pane_t

0xd066,	// (0x0009568d) compass_pane_g1_ParamLimits

0xd066,	// (0x0009568d) compass_pane_g1

0x469c,	// (0x0008ccc3) compass_pane_t1

0x46ab,	// (0x0008ccd2) compass_pane_t2

0x0005,

0xf327,	// (0x0009794e) compass_pane_t

0x46f6,	// (0x0008cd1d) text_secondary_cp61

0xd0e2,	// (0x00095709) navi_pane_cams_g5

0xd15e,	// (0x00095785) navi_pane_im_t1

0xd16c,	// (0x00095793) navi_pane_mp_g1_ParamLimits

0xd16c,	// (0x00095793) navi_pane_mp_g1

0xd180,	// (0x000957a7) navi_pane_mp_g2_ParamLimits

0xd180,	// (0x000957a7) navi_pane_mp_g2

0xd18c,	// (0x000957b3) navi_pane_mp_g3_ParamLimits

0xd18c,	// (0x000957b3) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00097962) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00097962) navi_pane_mp_g

0xd198,	// (0x000957bf) navi_pane_mp_t1

0xd1a6,	// (0x000957cd) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00097969) navi_pane_mp_t

0xd211,	// (0x00095838) navi_pane_vt_g1

0xd198,	// (0x000957bf) navi_pane_vt_t1

0xd219,	// (0x00095840) navi_slider_pane

0xc7d0,	// (0x00094df7) zooming_pane

0xd229,	// (0x00095850) navi_slider_pane_g1

0x4731,	// (0x0008cd58) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00097970) navi_slider_pane_g

0xd24d,	// (0x00095874) aid_levels_zoom

0xd255,	// (0x0009587c) zooming_pane_g1

0xd25d,	// (0x00095884) zooming_pane_g2

0xd25d,	// (0x00095884) zooming_pane_g3

0x0002,

0xf358,	// (0x0009797f) zooming_pane_g

0xd265,	// (0x0009588c) level_10_zoom

0xd26e,	// (0x00095895) level_11_zoom

0xd277,	// (0x0009589e) level_1_zoom

0xd280,	// (0x000958a7) level_2_zoom

0xd289,	// (0x000958b0) level_3_zoom

0xd292,	// (0x000958b9) level_4_zoom

0xd29b,	// (0x000958c2) level_5_zoom

0xd2a4,	// (0x000958cb) level_6_zoom

0xd2ad,	// (0x000958d4) level_7_zoom

0xd2b6,	// (0x000958dd) level_8_zoom

0xd2bf,	// (0x000958e6) level_9_zoom

0xd2d0,	// (0x000958f7) popup_phob_thumbnail_window_g1

0xd2d8,	// (0x000958ff) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00097986) popup_phob_thumbnail_window_g

0x50b7,	// (0x0008d6de) level_1_location

0x50bf,	// (0x0008d6e6) level_2_location

0x50c7,	// (0x0008d6ee) level_3_location

0x50d1,	// (0x0008d6f8) level_4_location

0xc7d0,	// (0x00094df7) level_5_location

0x4743,	// (0x0008cd6a) mce_icon_pane_g1

0x474b,	// (0x0008cd72) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0009798b) mce_icon_pane_g

0x4753,	// (0x0008cd7a) main_mup_pane_g1_ParamLimits

0x4753,	// (0x0008cd7a) main_mup_pane_g1

0xc59e,	// (0x00094bc5) main_mup_pane_g2_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g2

0xc59e,	// (0x00094bc5) main_mup_pane_g3_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g3

0xc59e,	// (0x00094bc5) main_mup_pane_g4_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g4

0xc59e,	// (0x00094bc5) main_mup_pane_g5_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g5

0xc59e,	// (0x00094bc5) main_mup_pane_g6_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g6

0xc59e,	// (0x00094bc5) main_mup_pane_g7_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g7

0xc59e,	// (0x00094bc5) main_mup_pane_g8_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g8

0xc59e,	// (0x00094bc5) main_mup_pane_g9_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g9

0xc59e,	// (0x00094bc5) main_mup_pane_g10_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g10

0xc59e,	// (0x00094bc5) main_mup_pane_g11_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g11

0xc590,	// (0x00094bb7) main_mup_pane_g12_ParamLimits

0xc590,	// (0x00094bb7) main_mup_pane_g12

0xc59e,	// (0x00094bc5) main_mup_pane_g13_ParamLimits

0xc59e,	// (0x00094bc5) main_mup_pane_g13

0x000c,

0xf369,	// (0x00097990) main_mup_pane_g_ParamLimits

0xf369,	// (0x00097990) main_mup_pane_g

0xc5ac,	// (0x00094bd3) main_mup_pane_t1_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup_pane_t1

0xc5ac,	// (0x00094bd3) main_mup_pane_t2_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup_pane_t2

0xc5ac,	// (0x00094bd3) main_mup_pane_t3_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup_pane_t3

0xc5de,	// (0x00094c05) main_mup_pane_t4_ParamLimits

0xc5de,	// (0x00094c05) main_mup_pane_t4

0xc5de,	// (0x00094c05) main_mup_pane_t5_ParamLimits

0xc5de,	// (0x00094c05) main_mup_pane_t5

0xc5ca,	// (0x00094bf1) main_mup_pane_t6_ParamLimits

0xc5ca,	// (0x00094bf1) main_mup_pane_t6

0x0005,

0xf384,	// (0x000979ab) main_mup_pane_t_ParamLimits

0xf384,	// (0x000979ab) main_mup_pane_t

0xc29e,	// (0x000948c5) mup_progress_pane_ParamLimits

0xc29e,	// (0x000948c5) mup_progress_pane

0xe443,	// (0x00096a6a) mup_visualizer_pane_ParamLimits

0xe443,	// (0x00096a6a) mup_visualizer_pane

0xe443,	// (0x00096a6a) mup_volume_pane_ParamLimits

0xe443,	// (0x00096a6a) mup_volume_pane

0xc590,	// (0x00094bb7) mup_visualizer_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) mup_visualizer_pane_g1

0xd2e0,	// (0x00095907) mup_visualizer_pane_g2_ParamLimits

0xd2e0,	// (0x00095907) mup_visualizer_pane_g2

0xc582,	// (0x00094ba9) mup_visualizer_pane_g3_ParamLimits

0xc582,	// (0x00094ba9) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000979b8) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000979b8) mup_visualizer_pane_g

0xc5c0,	// (0x00094be7) mup_volume_pane_g1

0xc5c0,	// (0x00094be7) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000976d6) mup_volume_pane_g

0xc5c0,	// (0x00094be7) mup_progress_pane_g1

0xc5c0,	// (0x00094be7) mup_progress_pane_g2

0xc5c0,	// (0x00094be7) mup_progress_pane_g3

0x0002,

0xf398,	// (0x000979bf) mup_progress_pane_g

0xc2ac,	// (0x000948d3) bg_popup_window_pane_cp05

0xd2ee,	// (0x00095915) heading_pane_cp02_ParamLimits

0xd2ee,	// (0x00095915) heading_pane_cp02

0xd308,	// (0x0009592f) list_popup_blid_pane

0xd310,	// (0x00095937) list_blid_sat_info_pane_ParamLimits

0xd310,	// (0x00095937) list_blid_sat_info_pane

0xd323,	// (0x0009594a) list_blid_sat_info_pane_g1

0xd32b,	// (0x00095952) list_blid_sat_info_pane_t1

0x4850,	// (0x0008ce77) mup_equalizer_pane_ParamLimits

0x4850,	// (0x0008ce77) mup_equalizer_pane

0x4871,	// (0x0008ce98) mup_equalizer_pane_cp1_ParamLimits

0x4871,	// (0x0008ce98) mup_equalizer_pane_cp1

0x4892,	// (0x0008ceb9) mup_equalizer_pane_cp2_ParamLimits

0x4892,	// (0x0008ceb9) mup_equalizer_pane_cp2

0x48b3,	// (0x0008ceda) mup_equalizer_pane_cp3_ParamLimits

0x48b3,	// (0x0008ceda) mup_equalizer_pane_cp3

0x48d4,	// (0x0008cefb) mup_equalizer_pane_cp4_ParamLimits

0x48d4,	// (0x0008cefb) mup_equalizer_pane_cp4

0x48f5,	// (0x0008cf1c) mup_equalizer_pane_cp5

0x490b,	// (0x0008cf32) mup_equalizer_pane_cp6

0x4923,	// (0x0008cf4a) mup_equalizer_pane_cp7

0xe42b,	// (0x00096a52) bg_popup_call_poc_act_pane_g9

0xe433,	// (0x00096a5a) bg_popup_call_poc_act_pane_g10

0xe43b,	// (0x00096a62) bg_popup_call_poc_act_pane_g11

0x000a,

0xc507,	// (0x00094b2e) mup_scale_pane

0xc51f,	// (0x00094b46) mup_scale_pane_g1

0xd339,	// (0x00095960) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x000979db) mup_scale_pane_g

0xd35d,	// (0x00095984) msg_data_pane

0xd365,	// (0x0009598c) scroll_pane_cp017

0x494d,	// (0x0008cf74) bg_list_pane_cp04_ParamLimits

0x494d,	// (0x0008cf74) bg_list_pane_cp04

0xd36d,	// (0x00095994) msg_data_pane_g1

0x4973,	// (0x0008cf9a) msg_data_pane_g2

0x497d,	// (0x0008cfa4) msg_data_pane_g3

0x4985,	// (0x0008cfac) msg_data_pane_g4

0x498d,	// (0x0008cfb4) msg_data_pane_g5

0x4995,	// (0x0008cfbc) msg_data_pane_g6

0x499d,	// (0x0008cfc4) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x000979ea) msg_data_pane_g

0x49a5,	// (0x0008cfcc) msg_text_pane_ParamLimits

0x49a5,	// (0x0008cfcc) msg_text_pane

0x49fa,	// (0x0008d021) qrid_highlight_pane_cp011_ParamLimits

0x49fa,	// (0x0008d021) qrid_highlight_pane_cp011

0xc2ac,	// (0x000948d3) msg_body_pane

0xc507,	// (0x00094b2e) msg_header_pane

0xd389,	// (0x000959b0) input_focus_pane_cp07

0x4a22,	// (0x0008d049) msg_header_pane_t1_ParamLimits

0x4a22,	// (0x0008d049) msg_header_pane_t1

0x4a3e,	// (0x0008d065) msg_header_pane_t2_ParamLimits

0x4a3e,	// (0x0008d065) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x000979fe) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x000979fe) msg_header_pane_t

0xd3aa,	// (0x000959d1) msg_body_pane_g1

0x4a5e,	// (0x0008d085) msg_body_pane_t1_ParamLimits

0x4a5e,	// (0x0008d085) msg_body_pane_t1

0x4a8f,	// (0x0008d0b6) msg_body_pane_t2_ParamLimits

0x4a8f,	// (0x0008d0b6) msg_body_pane_t2

0x4aa1,	// (0x0008d0c8) msg_body_pane_t3_ParamLimits

0x4aa1,	// (0x0008d0c8) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00097a03) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00097a03) msg_body_pane_t

0x4b05,	// (0x0008d12c) main_viewer_pane_g1_ParamLimits

0x4b05,	// (0x0008d12c) main_viewer_pane_g1

0x4b11,	// (0x0008d138) main_viewer_pane_g2_ParamLimits

0x4b11,	// (0x0008d138) main_viewer_pane_g2

0x4b1d,	// (0x0008d144) main_viewer_pane_g3_ParamLimits

0x4b1d,	// (0x0008d144) main_viewer_pane_g3

0x4b2e,	// (0x0008d155) main_viewer_pane_g4_ParamLimits

0x4b2e,	// (0x0008d155) main_viewer_pane_g4

0x4b3f,	// (0x0008d166) main_viewer_pane_g5_ParamLimits

0x4b3f,	// (0x0008d166) main_viewer_pane_g5

0x4b3f,	// (0x0008d166) main_viewer_pane_g7_ParamLimits

0x4b3f,	// (0x0008d166) main_viewer_pane_g7

0xccd9,	// (0x00095300) main_viewer_pane_g8_ParamLimits

0xccd9,	// (0x00095300) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00097a13) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00097a13) main_viewer_pane_g

0xd3e2,	// (0x00095a09) viewer_content_pane_ParamLimits

0xd3e2,	// (0x00095a09) viewer_content_pane

0x4b7d,	// (0x0008d1a4) main_postcard_pane_g1_ParamLimits

0x4b7d,	// (0x0008d1a4) main_postcard_pane_g1

0x4b8b,	// (0x0008d1b2) main_postcard_pane_g2_ParamLimits

0x4b8b,	// (0x0008d1b2) main_postcard_pane_g2

0x4b99,	// (0x0008d1c0) main_postcard_pane_g3_ParamLimits

0x4b99,	// (0x0008d1c0) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00097a24) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00097a24) main_postcard_pane_g

0x4ba9,	// (0x0008d1d0) main_postcard_pane_g4

0xe57d,	// (0x00096ba4) smil_status_volume_pane_g2

0x4bd5,	// (0x0008d1fc) postcard_pane_ParamLimits

0x4bd5,	// (0x0008d1fc) postcard_pane

0xdafc,	// (0x00096123) postcard_pane_g1_ParamLimits

0xdafc,	// (0x00096123) postcard_pane_g1

0x4c07,	// (0x0008d22e) postcard_pane_g2_ParamLimits

0x4c07,	// (0x0008d22e) postcard_pane_g2

0x4c13,	// (0x0008d23a) postcard_pane_g3_ParamLimits

0x4c13,	// (0x0008d23a) postcard_pane_g3

0xd3f0,	// (0x00095a17) postcard_pane_g4_ParamLimits

0xd3f0,	// (0x00095a17) postcard_pane_g4

0x4c1f,	// (0x0008d246) postcard_pane_g5_ParamLimits

0x4c1f,	// (0x0008d246) postcard_pane_g5

0x4c2b,	// (0x0008d252) postcard_pane_g6_ParamLimits

0x4c2b,	// (0x0008d252) postcard_pane_g6

0xd3fe,	// (0x00095a25) postcard_pane_g7_ParamLimits

0xd3fe,	// (0x00095a25) postcard_pane_g7

0x0006,

0xf40a,	// (0x00097a31) postcard_pane_g_ParamLimits

0xf40a,	// (0x00097a31) postcard_pane_g

0x4c37,	// (0x0008d25e) main_mp2_pane_g1_ParamLimits

0x4c37,	// (0x0008d25e) main_mp2_pane_g1

0x4c43,	// (0x0008d26a) main_mp2_pane_g2_ParamLimits

0x4c43,	// (0x0008d26a) main_mp2_pane_g2

0x4c4f,	// (0x0008d276) main_mp2_pane_g3_ParamLimits

0x4c4f,	// (0x0008d276) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00097a40) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00097a40) main_mp2_pane_g

0x4c5b,	// (0x0008d282) main_mp2_pane_t1_ParamLimits

0x4c5b,	// (0x0008d282) main_mp2_pane_t1

0x4c72,	// (0x0008d299) main_mp2_pane_t2_ParamLimits

0x4c72,	// (0x0008d299) main_mp2_pane_t2

0x4c86,	// (0x0008d2ad) main_mp2_pane_t3_ParamLimits

0x4c86,	// (0x0008d2ad) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00097a47) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00097a47) main_mp2_pane_t

0xc29e,	// (0x000948c5) pec_content_pane_ParamLimits

0xc29e,	// (0x000948c5) pec_content_pane

0xac16,	// (0x0009323d) scroll_pane_cp015

0xd3b2,	// (0x000959d9) pec_attribute_pane_ParamLimits

0xd3b2,	// (0x000959d9) pec_attribute_pane

0xc582,	// (0x00094ba9) pec_content_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) pec_content_pane_g1

0xd40c,	// (0x00095a33) pec_content_pane_t1_ParamLimits

0xd40c,	// (0x00095a33) pec_content_pane_t1

0xd420,	// (0x00095a47) pec_content_pane_t2_ParamLimits

0xd420,	// (0x00095a47) pec_content_pane_t2

0x0001,

0xf427,	// (0x00097a4e) pec_content_pane_t_ParamLimits

0xf427,	// (0x00097a4e) pec_content_pane_t

0xc574,	// (0x00094b9b) list_single_graphic_pane_cp01_ParamLimits

0xc574,	// (0x00094b9b) list_single_graphic_pane_cp01

0xc507,	// (0x00094b2e) bg_popup_sub_pane_cp04

0xd434,	// (0x00095a5b) popup_mup_playback_window_g1

0xd440,	// (0x00095a67) popup_mup_playback_window_t1

0xd455,	// (0x00095a7c) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00097a53) popup_mup_playback_window_t

0xd48c,	// (0x00095ab3) main_image_pane_g1_ParamLimits

0xd48c,	// (0x00095ab3) main_image_pane_g1

0xd4cf,	// (0x00095af6) scroll_pane_cp018_ParamLimits

0xd4cf,	// (0x00095af6) scroll_pane_cp018

0xd4e7,	// (0x00095b0e) scroll_pane_cp016_ParamLimits

0xd4e7,	// (0x00095b0e) scroll_pane_cp016

0x4d09,	// (0x0008d330) smil2_image_pane_ParamLimits

0x4d09,	// (0x0008d330) smil2_image_pane

0x4d39,	// (0x0008d360) smil2_root_pane_ParamLimits

0x4d39,	// (0x0008d360) smil2_root_pane

0x4d65,	// (0x0008d38c) smil2_text_pane_ParamLimits

0x4d65,	// (0x0008d38c) smil2_text_pane

0xac16,	// (0x0009323d) bg_list_pane_cp06

0xac16,	// (0x0009323d) grid_radio_pane

0xc2ac,	// (0x000948d3) bg_popup_window_pane_cp06

0xcd2e,	// (0x00095355) main_fmradio_pane_t1

0xe451,	// (0x00096a78) heading_pane_cp04

0xcd2e,	// (0x00095355) main_fmradio_pane_t2

0xe459,	// (0x00096a80) popup_cale_lunar_info_window_g1

0xcd2e,	// (0x00095355) main_fmradio_pane_t3

0xe461,	// (0x00096a88) popup_cale_lunar_info_window_g2

0xcd2e,	// (0x00095355) main_fmradio_pane_t4

0x0001,

0xcd2e,	// (0x00095355) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x00097b28) popup_cale_lunar_info_window_g

0xf28c,	// (0x000978b3) main_fmradio_pane_t

0xac16,	// (0x0009323d) wait_bar_pane_cp03

0xc574,	// (0x00094b9b) cell_fmradio_pane_ParamLimits

0xc574,	// (0x00094b9b) cell_fmradio_pane

0xc582,	// (0x00094ba9) cell_fmradio_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_fmradio_pane_g1

0xac16,	// (0x0009323d) grid_highlight_pane_cp011

0xd51b,	// (0x00095b42) poc_content_pane_ParamLimits

0xd51b,	// (0x00095b42) poc_content_pane

0xd52d,	// (0x00095b54) scroll_pane_cp019

0x4da5,	// (0x0008d3cc) popup_call_poc_act_window_ParamLimits

0x4da5,	// (0x0008d3cc) popup_call_poc_act_window

0x4db2,	// (0x0008d3d9) popup_call_poc_inact_window_ParamLimits

0x4db2,	// (0x0008d3d9) popup_call_poc_inact_window

0xf4d8,	// (0x00097aff) bg_popup_call_poc_act_pane_g

0xe3bb,	// (0x000969e2) bg_popup_call_poc_inact_pane_g1

0xe3c3,	// (0x000969ea) bg_popup_call_poc_inact_pane_g2

0xd535,	// (0x00095b5c) popup_call_poc_act_window_g2

0xe3cb,	// (0x000969f2) bg_popup_call_poc_inact_pane_g3

0xe3d3,	// (0x000969fa) bg_popup_call_poc_inact_pane_g4

0xe3db,	// (0x00096a02) bg_popup_call_poc_inact_pane_g5

0xd53d,	// (0x00095b64) popup_call_poc_act_window_t1_ParamLimits

0xd53d,	// (0x00095b64) popup_call_poc_act_window_t1

0xd565,	// (0x00095b8c) popup_call_poc_act_window_t2_ParamLimits

0xd565,	// (0x00095b8c) popup_call_poc_act_window_t2

0xd58d,	// (0x00095bb4) popup_call_poc_act_window_t3_ParamLimits

0xd58d,	// (0x00095bb4) popup_call_poc_act_window_t3

0xd5b5,	// (0x00095bdc) popup_call_poc_act_window_t4_ParamLimits

0xd5b5,	// (0x00095bdc) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00097a68) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00097a68) popup_call_poc_act_window_t

0xe3e3,	// (0x00096a0a) bg_popup_call_poc_inact_pane_g6

0xe3eb,	// (0x00096a12) bg_popup_call_poc_inact_pane_g7

0xe3f3,	// (0x00096a1a) bg_popup_call_poc_inact_pane_g8

0xd5c7,	// (0x00095bee) popup_call_poc_inact_window_g2

0xe3fb,	// (0x00096a22) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00097aec) bg_popup_call_poc_inact_pane_g

0xd5cf,	// (0x00095bf6) popup_call_poc_inact_window_t1_ParamLimits

0xd5cf,	// (0x00095bf6) popup_call_poc_inact_window_t1

0xd5e4,	// (0x00095c0b) popup_call_poc_inact_window_t2_ParamLimits

0xd5e4,	// (0x00095c0b) popup_call_poc_inact_window_t2

0xd5f9,	// (0x00095c20) popup_call_poc_inact_window_t3_ParamLimits

0xd5f9,	// (0x00095c20) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00097a71) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00097a71) popup_call_poc_inact_window_t

0xe4f5,	// (0x00096b1c) context_pane_ParamLimits

0x53c3,	// (0x0008d9ea) signal_pane_ParamLimits

0xc7d0,	// (0x00094df7) main_call2_pane

0x5336,	// (0x0008d95d) popup_phob_thumbnail2_window_ParamLimits

0x5336,	// (0x0008d95d) popup_phob_thumbnail2_window

0x4ab3,	// (0x0008d0da) aid_hotspot_pointer_arrow_pane

0x4abb,	// (0x0008d0e2) aid_hotspot_pointer_hand_pane

0x507f,	// (0x0008d6a6) phob_pre_status_pane_g5

0xc574,	// (0x00094b9b) cams_zoom_pane_ParamLimits

0xc574,	// (0x00094b9b) image_vga_pane_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g3_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g4_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g5_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g6_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000977a7) main_camera_pane_g_ParamLimits

0xc5de,	// (0x00094c05) main_camera_pane_t1_ParamLimits

0xc5de,	// (0x00094c05) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000977b8) main_camera_pane_t_ParamLimits

0xc507,	// (0x00094b2e) bg_popup_preview_window_pane_cp01_ParamLimits

0xc507,	// (0x00094b2e) bg_popup_preview_window_pane_cp01

0xd60e,	// (0x00095c35) popup_phob_thumbnail2_window_g1_ParamLimits

0xd60e,	// (0x00095c35) popup_phob_thumbnail2_window_g1

0xc2ac,	// (0x000948d3) call2_cli_visual_pane

0x4dce,	// (0x0008d3f5) popup_call2_audio_conf_window_ParamLimits

0x4dce,	// (0x0008d3f5) popup_call2_audio_conf_window

0x4de3,	// (0x0008d40a) popup_call2_audio_first_window_ParamLimits

0x4de3,	// (0x0008d40a) popup_call2_audio_first_window

0x4e81,	// (0x0008d4a8) popup_call2_audio_in_window_ParamLimits

0x4e81,	// (0x0008d4a8) popup_call2_audio_in_window

0x4ec3,	// (0x0008d4ea) popup_call2_audio_out_window_ParamLimits

0x4ec3,	// (0x0008d4ea) popup_call2_audio_out_window

0x4f25,	// (0x0008d54c) popup_call2_audio_second_window_ParamLimits

0x4f25,	// (0x0008d54c) popup_call2_audio_second_window

0x4f83,	// (0x0008d5aa) popup_call2_audio_wait_window_ParamLimits

0x4f83,	// (0x0008d5aa) popup_call2_audio_wait_window

0xc2ac,	// (0x000948d3) bg_popup_call2_act_pane_cp03

0xc4e9,	// (0x00094b10) list_conf_pane_cp

0xd61a,	// (0x00095c41) popup_call2_audio_conf_window_t1

0xcf12,	// (0x00095539) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf12,	// (0x00095539) list_single_graphic_popup_conf2_pane

0xcf25,	// (0x0009554c) list_highlight_pane_cp04

0xd628,	// (0x00095c4f) list_single_graphic_popup_conf2_pane_g1

0xcf36,	// (0x0009555d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00097a78) list_single_graphic_popup_conf2_pane_g

0xd632,	// (0x00095c59) list_single_graphic_popup_conf2_pane_t1

0xd640,	// (0x00095c67) bg_popup_call2_act_pane_cp01_ParamLimits

0xd640,	// (0x00095c67) bg_popup_call2_act_pane_cp01

0xd6ca,	// (0x00095cf1) call_type_pane_cp05_ParamLimits

0xd6ca,	// (0x00095cf1) call_type_pane_cp05

0xd71e,	// (0x00095d45) popup_call2_audio_second_window_g1_ParamLimits

0xd71e,	// (0x00095d45) popup_call2_audio_second_window_g1

0xd772,	// (0x00095d99) popup_call2_audio_second_window_g2_ParamLimits

0xd772,	// (0x00095d99) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00097a7d) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00097a7d) popup_call2_audio_second_window_g

0xd7d7,	// (0x00095dfe) popup_call2_audio_second_window_t1_ParamLimits

0xd7d7,	// (0x00095dfe) popup_call2_audio_second_window_t1

0xd892,	// (0x00095eb9) popup_call2_audio_second_window_t2_ParamLimits

0xd892,	// (0x00095eb9) popup_call2_audio_second_window_t2

0xd8e5,	// (0x00095f0c) popup_call2_audio_second_window_t3_ParamLimits

0xd8e5,	// (0x00095f0c) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00097a84) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00097a84) popup_call2_audio_second_window_t

0xc2ac,	// (0x000948d3) bg_popup_call2_in_pane_cp02

0xc2b6,	// (0x000948dd) call_type_pane_cp04

0x4fc2,	// (0x0008d5e9) popup_call2_audio_wait_window_g1

0x4fca,	// (0x0008d5f1) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00097a8d) popup_call2_audio_wait_window_g

0xc2ce,	// (0x000948f5) popup_call2_audio_wait_window_t3

0xd9d8,	// (0x00095fff) bg_popup_call2_act_pane_ParamLimits

0xd9d8,	// (0x00095fff) bg_popup_call2_act_pane

0xda98,	// (0x000960bf) call_type_pane_cp03_ParamLimits

0xda98,	// (0x000960bf) call_type_pane_cp03

0xdb0a,	// (0x00096131) popup_call2_audio_first_window_g1_ParamLimits

0xdb0a,	// (0x00096131) popup_call2_audio_first_window_g1

0xdb7a,	// (0x000961a1) popup_call2_audio_first_window_g2_ParamLimits

0xdb7a,	// (0x000961a1) popup_call2_audio_first_window_g2

0xdafc,	// (0x00096123) popup_call2_audio_first_window_g3_ParamLimits

0xdafc,	// (0x00096123) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00097a92) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00097a92) popup_call2_audio_first_window_g

0xdc58,	// (0x0009627f) popup_call2_audio_first_window_t1_ParamLimits

0xdc58,	// (0x0009627f) popup_call2_audio_first_window_t1

0xdd5b,	// (0x00096382) popup_call2_audio_first_window_t4_ParamLimits

0xdd5b,	// (0x00096382) popup_call2_audio_first_window_t4

0xde3e,	// (0x00096465) popup_call2_audio_first_window_t5_ParamLimits

0xde3e,	// (0x00096465) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00097a9d) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00097a9d) popup_call2_audio_first_window_t

0xc4ff,	// (0x00094b26) bg_popup_call2_act_pane_g1

0xe469,	// (0x00096a90) popup_cale_lunar_info_window_t1

0xe477,	// (0x00096a9e) popup_cale_lunar_info_window_t2

0xe485,	// (0x00096aac) popup_cale_lunar_info_window_t3

0xc2ac,	// (0x000948d3) bg_popup_call2_bubble_pane

0xdf3f,	// (0x00096566) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf3f,	// (0x00096566) bg_popup_call2_in_pane_cp01

0xbf7a,	// (0x000945a1) call_type_pane_cp02

0x4fd2,	// (0x0008d5f9) popup_call2_audio_out_window_g1_ParamLimits

0x4fd2,	// (0x0008d5f9) popup_call2_audio_out_window_g1

0xdf87,	// (0x000965ae) popup_call2_audio_out_window_g2_ParamLimits

0xdf87,	// (0x000965ae) popup_call2_audio_out_window_g2

0x4ffe,	// (0x0008d625) popup_call2_audio_out_window_g3_ParamLimits

0x4ffe,	// (0x0008d625) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00097aa6) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00097aa6) popup_call2_audio_out_window_g

0xdfbe,	// (0x000965e5) popup_call2_audio_out_window_t1_ParamLimits

0xdfbe,	// (0x000965e5) popup_call2_audio_out_window_t1

0xe01d,	// (0x00096644) popup_call2_audio_out_window_t2_ParamLimits

0xe01d,	// (0x00096644) popup_call2_audio_out_window_t2

0xe071,	// (0x00096698) popup_call2_audio_out_window_t3_ParamLimits

0xe071,	// (0x00096698) popup_call2_audio_out_window_t3

0xe087,	// (0x000966ae) popup_call2_audio_out_window_t4_ParamLimits

0xe087,	// (0x000966ae) popup_call2_audio_out_window_t4

0xe09d,	// (0x000966c4) popup_call2_audio_out_window_t5_ParamLimits

0xe09d,	// (0x000966c4) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00097aaf) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00097aaf) popup_call2_audio_out_window_t

0xe101,	// (0x00096728) bg_popup_call2_in_pane_ParamLimits

0xe101,	// (0x00096728) bg_popup_call2_in_pane

0xe15d,	// (0x00096784) popup_call2_audio_in_window_g1_ParamLimits

0xe15d,	// (0x00096784) popup_call2_audio_in_window_g1

0xe195,	// (0x000967bc) popup_call2_audio_in_window_g2_ParamLimits

0xe195,	// (0x000967bc) popup_call2_audio_in_window_g2

0xe1cd,	// (0x000967f4) popup_call2_audio_in_window_g3_ParamLimits

0xe1cd,	// (0x000967f4) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00097abc) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00097abc) popup_call2_audio_in_window_g

0xe225,	// (0x0009684c) popup_call2_audio_in_window_t1_ParamLimits

0xe225,	// (0x0009684c) popup_call2_audio_in_window_t1

0xe2a5,	// (0x000968cc) popup_call2_audio_in_window_t2_ParamLimits

0xe2a5,	// (0x000968cc) popup_call2_audio_in_window_t2

0xe325,	// (0x0009694c) popup_call2_audio_in_window_t3_ParamLimits

0xe325,	// (0x0009694c) popup_call2_audio_in_window_t3

0xe33f,	// (0x00096966) popup_call2_audio_in_window_t4_ParamLimits

0xe33f,	// (0x00096966) popup_call2_audio_in_window_t4

0xe351,	// (0x00096978) popup_call2_audio_in_window_t5_ParamLimits

0xe351,	// (0x00096978) popup_call2_audio_in_window_t5

0xe366,	// (0x0009698d) popup_call2_audio_in_window_t6_ParamLimits

0xe366,	// (0x0009698d) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00097ac5) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00097ac5) popup_call2_audio_in_window_t

0xc4ff,	// (0x00094b26) bg_popup_call2_in_pane_g1

0xe493,	// (0x00096aba) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x00097b2d) popup_cale_lunar_info_window_t

0xc507,	// (0x00094b2e) bg_popup_call2_rect_pane_ParamLimits

0xc507,	// (0x00094b2e) bg_popup_call2_rect_pane

0xc2ac,	// (0x000948d3) call2_cli_visual_graphic_pane

0xc2ac,	// (0x000948d3) call2_cli_visual_text_pane

0x53ff,	// (0x0008da26) smil_status_volume_pane_g3

0x0002,

0xc51f,	// (0x00094b46) call2_cli_visual_graphic_pane_g1

0xc51f,	// (0x00094b46) call2_cli_visual_graphic_pane_g2

0xc51f,	// (0x00094b46) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00097ad2) call2_cli_visual_graphic_pane_g

0xe37b,	// (0x000969a2) bg_popup_call2_rect_pane_g1

0xc6f5,	// (0x00094d1c) bg_popup_call2_rect_pane_g2

0xe383,	// (0x000969aa) bg_popup_call2_rect_pane_g3

0xe38b,	// (0x000969b2) bg_popup_call2_rect_pane_g4

0xe393,	// (0x000969ba) bg_popup_call2_rect_pane_g5

0xe39b,	// (0x000969c2) bg_popup_call2_rect_pane_g6

0xe3a3,	// (0x000969ca) bg_popup_call2_rect_pane_g7

0xe3ab,	// (0x000969d2) bg_popup_call2_rect_pane_g8

0xe3b3,	// (0x000969da) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00097ad9) bg_popup_call2_rect_pane_g

0xe3bb,	// (0x000969e2) bg_popup_call2_bubble_pane_g1

0xe3c3,	// (0x000969ea) bg_popup_call2_bubble_pane_g2

0xe3cb,	// (0x000969f2) bg_popup_call2_bubble_pane_g3

0xe3d3,	// (0x000969fa) bg_popup_call2_bubble_pane_g4

0xe3db,	// (0x00096a02) bg_popup_call2_bubble_pane_g5

0xe3e3,	// (0x00096a0a) bg_popup_call2_bubble_pane_g6

0xe3eb,	// (0x00096a12) bg_popup_call2_bubble_pane_g7

0xe3f3,	// (0x00096a1a) bg_popup_call2_bubble_pane_g8

0xe3fb,	// (0x00096a22) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00097aec) bg_popup_call2_bubble_pane_g

0x2ba1,	// (0x0008b1c8) aid_cale_week_size_cell_pane

0xc507,	// (0x00094b2e) aid_cams_cif_uncrop_pane_ParamLimits

0xc507,	// (0x00094b2e) aid_cams_cif_uncrop_pane

0xc574,	// (0x00094b9b) aid_cams_size_cell_ParamLimits

0xc574,	// (0x00094b9b) aid_cams_size_cell

0xc574,	// (0x00094b9b) grid_cams_pane_ParamLimits

0xc574,	// (0x00094b9b) linegrid_cams_pane_ParamLimits

0x3260,	// (0x0008b887) call_video_pane_t1

0x3281,	// (0x0008b8a8) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00097804) call_video_pane_t

0x37c8,	// (0x0008bdef) aid_cale_month_size_cell_pane_ParamLimits

0x37c8,	// (0x0008bdef) aid_cale_month_size_cell_pane

0xf54a,	// (0x00097b71) smil_status_volume_pane_g

0x540c,	// (0x0008da33) volume_smil_pane_ParamLimits

0x2501,	// (0x0008ab28) aid_popup2_width_pane

0x2a92,	// (0x0008b0b9) cell_qdial_pane_g4_ParamLimits

0x2a92,	// (0x0008b0b9) cell_qdial_pane_g4

0x4678,	// (0x0008cc9f) aid_blid_cardinal_pane_ParamLimits

0x4688,	// (0x0008ccaf) aid_blid_destination_pane_ParamLimits

0x4688,	// (0x0008ccaf) aid_blid_destination_pane

0xc507,	// (0x00094b2e) bg_popup_call_poc_act_pane_ParamLimits

0xc507,	// (0x00094b2e) bg_popup_call_poc_act_pane

0xc507,	// (0x00094b2e) bg_popup_call_poc_inact_pane_ParamLimits

0xc507,	// (0x00094b2e) bg_popup_call_poc_inact_pane

0xe403,	// (0x00096a2a) bg_popup_call_poc_act_pane_g1

0xe40b,	// (0x00096a32) bg_popup_call_poc_act_pane_g2

0xe413,	// (0x00096a3a) bg_popup_call_poc_act_pane_g3

0xe3d3,	// (0x000969fa) bg_popup_call_poc_act_pane_g4

0xe3db,	// (0x00096a02) bg_popup_call_poc_act_pane_g5

0xe41b,	// (0x00096a42) bg_popup_call_poc_act_pane_g6

0xe3eb,	// (0x00096a12) bg_popup_call_poc_act_pane_g7

0xe423,	// (0x00096a4a) bg_popup_call_poc_act_pane_g8

0xc2ac,	// (0x000948d3) main_usb_pane

0x5265,	// (0x0008d88c) popup_cale_lunar_info_window

0x35aa,	// (0x0008bbd1) im_reading_pane_t1_ParamLimits

0xc891,	// (0x00094eb8) list_im_pane_ParamLimits

0xc8a2,	// (0x00094ec9) scroll_pane_cp07_ParamLimits

0xc2ac,	// (0x000948d3) grid_highlight_pane_cp012

0xc507,	// (0x00094b2e) mup_scale_pane_ParamLimits

0xc590,	// (0x00094bb7) main_usb_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) main_usb_pane_g1

0xc590,	// (0x00094bb7) main_usb_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x00097b16) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x00097b16) main_usb_pane_g

0xc5de,	// (0x00094c05) main_usb_pane_t1_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t1

0xc5de,	// (0x00094c05) main_usb_pane_t2_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t2

0xc5de,	// (0x00094c05) main_usb_pane_t3_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t3

0xc5de,	// (0x00094c05) main_usb_pane_t4_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t4

0xc5de,	// (0x00094c05) main_usb_pane_t5_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t5

0xc5de,	// (0x00094c05) main_usb_pane_t6_ParamLimits

0xc5de,	// (0x00094c05) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x00097b1b) main_usb_pane_t_ParamLimits

0x461e,	// (0x0008cc45) aid_text_placing

0x462a,	// (0x0008cc51) main_location2_pane_t1_ParamLimits

0x463e,	// (0x0008cc65) main_location2_pane_t2_ParamLimits

0x4652,	// (0x0008cc79) main_location2_pane_t3_ParamLimits

0x4666,	// (0x0008cc8d) main_location2_pane_t4_ParamLimits

0x4666,	// (0x0008cc8d) main_location2_pane_t4

0xf31e,	// (0x00097945) main_location2_pane_t_ParamLimits

0xc535,	// (0x00094b5c) find_pinb_pane_g2_ParamLimits

0xc535,	// (0x00094b5c) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000976bc) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000976bc) find_pinb_pane_g

0xc541,	// (0x00094b68) find_pinb_pane_t1_ParamLimits

0xc553,	// (0x00094b7a) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000976c1) find_pinb_pane_t_ParamLimits

0xc2ac,	// (0x000948d3) main_call3_pane

0x3d6b,	// (0x0008c392) cale_month_day_heading_pane_t1_ParamLimits

0x3df1,	// (0x0008c418) cale_month_day_heading_pane_t2_ParamLimits

0x3e6a,	// (0x0008c491) cale_month_day_heading_pane_t3_ParamLimits

0x3ee3,	// (0x0008c50a) cale_month_day_heading_pane_t4_ParamLimits

0x3f5c,	// (0x0008c583) cale_month_day_heading_pane_t5_ParamLimits

0x3fd5,	// (0x0008c5fc) cale_month_day_heading_pane_t6_ParamLimits

0x404e,	// (0x0008c675) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0009783c) cale_month_day_heading_pane_t_ParamLimits

0xcb13,	// (0x0009513a) smil_status_volume_pane

0x4bef,	// (0x0008d216) postcard_address_pane_ParamLimits

0x4bef,	// (0x0008d216) postcard_address_pane

0x4bfb,	// (0x0008d222) postcard_message_pane_ParamLimits

0x4bfb,	// (0x0008d222) postcard_message_pane

0x502a,	// (0x0008d651) call2_cli_visual_pane_t1_ParamLimits

0x502a,	// (0x0008d651) call2_cli_visual_pane_t1

0xe5a8,	// (0x00096bcf) postcard_message_pane_t1_ParamLimits

0xe5a8,	// (0x00096bcf) postcard_message_pane_t1

0xe590,	// (0x00096bb7) postcard_address_pane_t1_ParamLimits

0xe590,	// (0x00096bb7) postcard_address_pane_t1

0x553d,	// (0x0008db64) popup_call3_audio_in_window_ParamLimits

0x553d,	// (0x0008db64) popup_call3_audio_in_window

0x5421,	// (0x0008da48) bg_popup_call3_in_pane_ParamLimits

0x5421,	// (0x0008da48) bg_popup_call3_in_pane

0x5483,	// (0x0008daaa) popup_call3_audio_in_window_g1_ParamLimits

0x5483,	// (0x0008daaa) popup_call3_audio_in_window_g1

0x549b,	// (0x0008dac2) popup_call3_audio_in_window_g2_ParamLimits

0x549b,	// (0x0008dac2) popup_call3_audio_in_window_g2

0x54b3,	// (0x0008dada) popup_call3_audio_in_window_g3_ParamLimits

0x54b3,	// (0x0008dada) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x00097b78) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x00097b78) popup_call3_audio_in_window_g

0x54db,	// (0x0008db02) popup_call3_audio_in_window_t1_ParamLimits

0x54db,	// (0x0008db02) popup_call3_audio_in_window_t1

0x5503,	// (0x0008db2a) popup_call3_audio_in_window_t2_ParamLimits

0x5503,	// (0x0008db2a) popup_call3_audio_in_window_t2

0x552b,	// (0x0008db52) popup_call3_audio_in_window_t3_ParamLimits

0x552b,	// (0x0008db52) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x00097b81) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x00097b81) popup_call3_audio_in_window_t

0xc7d0,	// (0x00094df7) bg_popup_call3_rect_pane

0xe37b,	// (0x000969a2) bg_popup_call3_rect_pane_g1

0xc6f5,	// (0x00094d1c) bg_popup_call3_rect_pane_g2

0xe383,	// (0x000969aa) bg_popup_call3_rect_pane_g3

0xe38b,	// (0x000969b2) bg_popup_call3_rect_pane_g4

0xe393,	// (0x000969ba) bg_popup_call3_rect_pane_g5

0xe39b,	// (0x000969c2) bg_popup_call3_rect_pane_g6

0xe3a3,	// (0x000969ca) bg_popup_call3_rect_pane_g7

0xac16,	// (0x0009323d) mup_visualizer_osc_pane

0xac16,	// (0x0009323d) mup_visualizer_spec_pane

0x5441,	// (0x0008da68) call3_video_qcif_pane_ParamLimits

0x5441,	// (0x0008da68) call3_video_qcif_pane

0x5453,	// (0x0008da7a) call3_video_qcif_uncrop_pane_ParamLimits

0x5453,	// (0x0008da7a) call3_video_qcif_uncrop_pane

0x5461,	// (0x0008da88) call3_video_subqcif_pane_ParamLimits

0x5461,	// (0x0008da88) call3_video_subqcif_pane

0x5473,	// (0x0008da9a) call3_video_subqcif_uncrop_pane_ParamLimits

0x5473,	// (0x0008da9a) call3_video_subqcif_uncrop_pane

0x54cb,	// (0x0008daf2) popup_call3_audio_in_window_g4_ParamLimits

0x54cb,	// (0x0008daf2) popup_call3_audio_in_window_g4

0xac16,	// (0x0009323d) mup_spec_half_pane

0xac16,	// (0x0009323d) mup_spec_half_pane_cp

0xac16,	// (0x0009323d) mup_osc_middle_pane

0xc5c0,	// (0x00094be7) mup_visualizer_osc_pane_g1

0xe543,	// (0x00096b6a) mup_spec_bar_pane_ParamLimits

0xe543,	// (0x00096b6a) mup_spec_bar_pane

0xc5c0,	// (0x00094be7) mup_spec_bar_pane_g1

0xc5c0,	// (0x00094be7) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000976d6) mup_spec_bar_pane_g

0x2ba1,	// (0x0008b1c8) aid_cale_week_size_cell_pane_ParamLimits

0x2bb6,	// (0x0008b1dd) bg_cale_heading_pane_ParamLimits

0xc732,	// (0x00094d59) bg_cale_pane_cp01_ParamLimits

0x2bd6,	// (0x0008b1fd) cale_week_corner_pane_ParamLimits

0x2bf0,	// (0x0008b217) cale_week_day_heading_pane_ParamLimits

0x2c10,	// (0x0008b237) cale_week_scroll_pane_g1_ParamLimits

0x2c2b,	// (0x0008b252) cale_week_scroll_pane_g2_ParamLimits

0x2c3e,	// (0x0008b265) cale_week_scroll_pane_g3_ParamLimits

0x2c51,	// (0x0008b278) cale_week_scroll_pane_g4_ParamLimits

0x2c64,	// (0x0008b28b) cale_week_scroll_pane_g5_ParamLimits

0x2c77,	// (0x0008b29e) cale_week_scroll_pane_g6_ParamLimits

0x2c8a,	// (0x0008b2b1) cale_week_scroll_pane_g7_ParamLimits

0x2c9f,	// (0x0008b2c6) cale_week_scroll_pane_g8_ParamLimits

0x2cb4,	// (0x0008b2db) cale_week_scroll_pane_g9_ParamLimits

0x2cc7,	// (0x0008b2ee) cale_week_scroll_pane_g10_ParamLimits

0x2cda,	// (0x0008b301) cale_week_scroll_pane_g11_ParamLimits

0x2ced,	// (0x0008b314) cale_week_scroll_pane_g12_ParamLimits

0x2d04,	// (0x0008b32b) cale_week_scroll_pane_g13_ParamLimits

0x2d1f,	// (0x0008b346) cale_week_scroll_pane_g14_ParamLimits

0x2d3a,	// (0x0008b361) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0009774d) cale_week_scroll_pane_g_ParamLimits

0x2d6a,	// (0x0008b391) cale_week_time_pane_ParamLimits

0x2d7f,	// (0x0008b3a6) grid_cale_week_pane_ParamLimits

0xc74f,	// (0x00094d76) listscroll_cale_week_pane_t1

0xc761,	// (0x00094d88) scroll_pane_cp08_ParamLimits

0x383c,	// (0x0008be63) cale_month_corner_pane_ParamLimits

0xcae9,	// (0x00095110) cale_month_pane_t1

0x3cee,	// (0x0008c315) cale_month_week_pane_ParamLimits

0xdafc,	// (0x00096123) popup_call_status_window_g1_ParamLimits

0x4475,	// (0x0008ca9c) popup_call_status_window_g2_ParamLimits

0x4481,	// (0x0008caa8) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000978cc) popup_call_status_window_g_ParamLimits

0xcea5,	// (0x000954cc) aid_call2_pane

0x4a16,	// (0x0008d03d) msg_header_pane_g1

0x4bef,	// (0x0008d216) postcard_address2_pane_ParamLimits

0x4bef,	// (0x0008d216) postcard_address2_pane

0x4bfb,	// (0x0008d222) postcard_message2_pane_ParamLimits

0x4bfb,	// (0x0008d222) postcard_message2_pane

0x53d1,	// (0x0008d9f8) message2_row_pane_ParamLimits

0x53d1,	// (0x0008d9f8) message2_row_pane

0x53ec,	// (0x0008da13) address2_row_pane_ParamLimits

0x53ec,	// (0x0008da13) address2_row_pane

0xe510,	// (0x00096b37) postcard_message2_row_pane_g1

0xe518,	// (0x00096b3f) postcard_message2_row_pane_t1

0xe510,	// (0x00096b37) address2_row_pane_g1

0xe518,	// (0x00096b3f) address2_row_pane_t1

0x3005,	// (0x0008b62c) aid_size_cell_vorec

0xc2ac,	// (0x000948d3) main_rss_pane

0xe526,	// (0x00096b4d) rss_list_single_pane_ParamLimits

0xe526,	// (0x00096b4d) rss_list_single_pane

0xe534,	// (0x00096b5b) rss_list_single_pane_t1

0xe534,	// (0x00096b5b) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x00097b6c) rss_list_single_pane_t

0xc2ac,	// (0x000948d3) main_camera2_pane

0xc2ac,	// (0x000948d3) main_video2_pane

0x27a8,	// (0x0008adcf) cams_zoom_pane_cp2_ParamLimits

0x27a8,	// (0x0008adcf) cams_zoom_pane_cp2

0x27a8,	// (0x0008adcf) image2_vga_pane_ParamLimits

0x27a8,	// (0x0008adcf) image2_vga_pane

0xced9,	// (0x00095500) main_camera2_pane_g1_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g1

0xced9,	// (0x00095500) main_camera2_pane_g2_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g2

0xced9,	// (0x00095500) main_camera2_pane_g3_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g3

0xced9,	// (0x00095500) main_camera2_pane_g4_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g4

0xced9,	// (0x00095500) main_camera2_pane_g5_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g5

0xced9,	// (0x00095500) main_camera2_pane_g6_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g6

0xced9,	// (0x00095500) main_camera2_pane_g7_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g7

0xced9,	// (0x00095500) main_camera2_pane_g8_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00097b88) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00097b88) main_camera2_pane_g

0x555a,	// (0x0008db81) main_camera2_pane_t1_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t1

0x555a,	// (0x0008db81) main_camera2_pane_t2_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t2

0x555a,	// (0x0008db81) main_camera2_pane_t3_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t3

0x555a,	// (0x0008db81) main_camera2_pane_t4_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00097b9b) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00097b9b) main_camera2_pane_t

0x5582,	// (0x0008dba9) cams_zoom_pane_cp4_ParamLimits

0x5582,	// (0x0008dba9) cams_zoom_pane_cp4

0x5210,	// (0x0008d837) image2_cif_pane_ParamLimits

0x5210,	// (0x0008d837) image2_cif_pane

0x27a8,	// (0x0008adcf) image2_subqcif_pane_ParamLimits

0x27a8,	// (0x0008adcf) image2_subqcif_pane

0x5590,	// (0x0008dbb7) main_video2_pane_g1_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g1

0x5590,	// (0x0008dbb7) main_video2_pane_g2_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g2

0x5590,	// (0x0008dbb7) main_video2_pane_g3_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g3

0x5590,	// (0x0008dbb7) main_video2_pane_g4_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g4

0x5590,	// (0x0008dbb7) main_video2_pane_g5_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g5

0x5590,	// (0x0008dbb7) main_video2_pane_g6_ParamLimits

0x5590,	// (0x0008dbb7) main_video2_pane_g6

0x0005,

0xf583,	// (0x00097baa) main_video2_pane_g_ParamLimits

0xf583,	// (0x00097baa) main_video2_pane_g

0x559e,	// (0x0008dbc5) main_video2_pane_t1_ParamLimits

0x559e,	// (0x0008dbc5) main_video2_pane_t1

0x559e,	// (0x0008dbc5) main_video2_pane_t2_ParamLimits

0x559e,	// (0x0008dbc5) main_video2_pane_t2

0x559e,	// (0x0008dbc5) main_video2_pane_t3_ParamLimits

0x559e,	// (0x0008dbc5) main_video2_pane_t3

0x0002,

0xf590,	// (0x00097bb7) main_video2_pane_t_ParamLimits

0xf590,	// (0x00097bb7) main_video2_pane_t

0x50e3,	// (0x0008d70a) call_muted_g2

0x0001,

0xf537,	// (0x00097b5e) call_muted_g

0xc2ac,	// (0x000948d3) main_mup2_pane

0xc59e,	// (0x00094bc5) main_mup2_pane_g1_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g1

0xc59e,	// (0x00094bc5) main_mup2_pane_g2_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g2

0x14e7,	// (0x00089b0e) main_mup_pane_g13_cp1

0x27c2,	// (0x0008ade9) mup_volume_pane_cp1

0xc59e,	// (0x00094bc5) main_mup2_pane_g4_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g4

0xc59e,	// (0x00094bc5) main_mup2_pane_g5_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g5

0xc59e,	// (0x00094bc5) main_mup2_pane_g6_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g6

0xc59e,	// (0x00094bc5) main_mup2_pane_g7_ParamLimits

0xc59e,	// (0x00094bc5) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00097bbe) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00097bbe) main_mup2_pane_g

0xc5ac,	// (0x00094bd3) main_mup2_pane_t1_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t1

0xc5ac,	// (0x00094bd3) main_mup2_pane_t2_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t2

0xc5ac,	// (0x00094bd3) main_mup2_pane_t3_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t3

0xc5ac,	// (0x00094bd3) main_mup2_pane_t4_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t4

0xc5ac,	// (0x00094bd3) main_mup2_pane_t5_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t5

0xc5ac,	// (0x00094bd3) main_mup2_pane_t6_ParamLimits

0xc5ac,	// (0x00094bd3) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00097bcd) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00097bcd) main_mup2_pane_t

0xe443,	// (0x00096a6a) mup2_visualizer_pane_ParamLimits

0xe443,	// (0x00096a6a) mup2_visualizer_pane

0xe443,	// (0x00096a6a) mup_progress_pane_cp_ParamLimits

0xe443,	// (0x00096a6a) mup_progress_pane_cp

0x5665,	// (0x0008dc8c) mup_volume_pane_cp_ParamLimits

0x5665,	// (0x0008dc8c) mup_volume_pane_cp

0xc582,	// (0x00094ba9) mup2_visualizer_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) mup2_visualizer_pane_g1

0xc590,	// (0x00094bb7) mup2_visualizer_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) mup2_visualizer_pane_g2

0xc590,	// (0x00094bb7) mup2_visualizer_pane_g3_ParamLimits

0xc590,	// (0x00094bb7) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000976c6) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000976c6) mup2_visualizer_pane_g

0xac16,	// (0x0009323d) aid_size_cell_fmradio

0x51f9,	// (0x0008d820) aid_height_parent_landcape

0xc920,	// (0x00094f47) wml_content_pane_cp

0xc928,	// (0x00094f4f) wml_tabs_pane

0xc931,	// (0x00094f58) popup_wml_miniature_window

0xc939,	// (0x00094f60) scroll_pane_cp021

0xc974,	// (0x00094f9b) wml_content_pane_comp8

0xc2ac,	// (0x000948d3) bg_popup_sub_pane_cp05

0xe5fc,	// (0x00096c23) popup_wml_miniature_window_g1

0xe604,	// (0x00096c2b) wml_miniature_view_pane

0x55b2,	// (0x0008dbd9) aid_size_wml_view

0x55ba,	// (0x0008dbe1) wml_miniature_view_pane_g1

0x55c3,	// (0x0008dbea) wml_miniature_view_pane_g2

0x55cc,	// (0x0008dbf3) wml_miniature_view_pane_g3

0x55d4,	// (0x0008dbfb) wml_miniature_view_pane_g4

0x55dc,	// (0x0008dc03) wml_miniature_view_pane_g5

0x55e4,	// (0x0008dc0b) wml_miniature_view_pane_g6

0x55ec,	// (0x0008dc13) wml_miniature_view_pane_g7

0x55f4,	// (0x0008dc1b) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x00097bda) wml_miniature_view_pane_g

0xe60c,	// (0x00096c33) background_graphic_ParamLimits

0xe60c,	// (0x00096c33) background_graphic

0xe618,	// (0x00096c3f) wml_tabs_2_pane

0xe621,	// (0x00096c48) wml_tabs_3_pane_ParamLimits

0xe621,	// (0x00096c48) wml_tabs_3_pane

0xe633,	// (0x00096c5a) wml_tabs_4_pane_ParamLimits

0xe633,	// (0x00096c5a) wml_tabs_4_pane

0xe649,	// (0x00096c70) wml_tabs_5_pane_ParamLimits

0xe649,	// (0x00096c70) wml_tabs_5_pane

0xe663,	// (0x00096c8a) wml_tabs_pane_g2_ParamLimits

0xe663,	// (0x00096c8a) wml_tabs_pane_g2

0xe678,	// (0x00096c9f) wml_tabs_pane_g3_ParamLimits

0xe678,	// (0x00096c9f) wml_tabs_pane_g3

0xe68d,	// (0x00096cb4) wml_tabs_2_active_pane_ParamLimits

0xe68d,	// (0x00096cb4) wml_tabs_2_active_pane

0xe68d,	// (0x00096cb4) wml_tabs_2_passive_pane_ParamLimits

0xe68d,	// (0x00096cb4) wml_tabs_2_passive_pane

0x55fc,	// (0x0008dc23) wml_tabs_3_active_pane_cp_ParamLimits

0x55fc,	// (0x0008dc23) wml_tabs_3_active_pane_cp

0x560d,	// (0x0008dc34) wml_tabs_3_passive_pane_ParamLimits

0x560d,	// (0x0008dc34) wml_tabs_3_passive_pane

0x561e,	// (0x0008dc45) wml_tabs_3_passive_pane_cp_ParamLimits

0x561e,	// (0x0008dc45) wml_tabs_3_passive_pane_cp

0x562f,	// (0x0008dc56) tabs_4_active_pane

0x5637,	// (0x0008dc5e) tabs_4_passive_pane

0x563f,	// (0x0008dc66) tabs_4_passive_pane_cp

0x5647,	// (0x0008dc6e) tabs_4_passive_pane_cp2

0x5057,	// (0x0008d67e) aid_height_text

0xe443,	// (0x00096a6a) mup_volume_cont_pane_ParamLimits

0xe443,	// (0x00096a6a) mup_volume_cont_pane

0xac16,	// (0x0009323d) aid_size_cell_pinb

0xac16,	// (0x0009323d) aid_size_list_pinb

0xe443,	// (0x00096a6a) mup2_volume_cont_pane_ParamLimits

0xe443,	// (0x00096a6a) mup2_volume_cont_pane

0x564f,	// (0x0008dc76) mup2_volume_cont_pane_g1_ParamLimits

0x564f,	// (0x0008dc76) mup2_volume_cont_pane_g1

0x250d,	// (0x0008ab34) aid_size_cell_touch_ParamLimits

0x250d,	// (0x0008ab34) aid_size_cell_touch

0x27cc,	// (0x0008adf3) touch_pane_ParamLimits

0x27cc,	// (0x0008adf3) touch_pane

0x27c2,	// (0x0008ade9) main_rss2_pane

0xe6a4,	// (0x00096ccb) listscroll_rss2_pane

0xe6ad,	// (0x00096cd4) rss2_navigation_pane

0xe6b5,	// (0x00096cdc) list_rss2_pane

0xcfe8,	// (0x0009560f) scroll_pane_cp22

0xe6bd,	// (0x00096ce4) rss2_navigation_pane_g1

0xe6c6,	// (0x00096ced) rss2_navigation_pane_g2

0xe6ce,	// (0x00096cf5) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x00097beb) rss2_navigation_pane_g

0xe6d6,	// (0x00096cfd) rss2_navigation_pane_t1

0x567b,	// (0x0008dca2) rss2_list_single_pane_ParamLimits

0x567b,	// (0x0008dca2) rss2_list_single_pane

0xe6e4,	// (0x00096d0b) rss2_list_single_pane_t2

0xe6f2,	// (0x00096d19) rss2_list_single_pane_t3_ParamLimits

0xe6f2,	// (0x00096d19) rss2_list_single_pane_t3

0xe70f,	// (0x00096d36) rss2_list_single_pane_t4

0x42ea,	// (0x0008c911) smil_status_pane_g1

0x5210,	// (0x0008d837) main_image2_pane_ParamLimits

0x5210,	// (0x0008d837) main_image2_pane

0xced9,	// (0x00095500) main_camera2_pane_g9_ParamLimits

0xced9,	// (0x00095500) main_camera2_pane_g9

0x555a,	// (0x0008db81) main_camera2_pane_t5_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t5

0x556e,	// (0x0008db95) main_camera2_pane_t6_ParamLimits

0x556e,	// (0x0008db95) main_camera2_pane_t6

0x56ac,	// (0x0008dcd3) main_image2_pane_g1_ParamLimits

0x56ac,	// (0x0008dcd3) main_image2_pane_g1

0x4d8f,	// (0x0008d3b6) smil2_video_pane_ParamLimits

0x4d8f,	// (0x0008d3b6) smil2_video_pane

0x2541,	// (0x0008ab68) aid_zoom_text_primary_cp

0x275d,	// (0x0008ad84) popup_preview_fixed_window

0xc889,	// (0x00094eb0) im_reading_pane_g1

0x554c,	// (0x0008db73) cams2_bc_adjust_pane_cp_ParamLimits

0x554c,	// (0x0008db73) cams2_bc_adjust_pane_cp

0x27a8,	// (0x0008adcf) cams2_bc_adjust_pane_ParamLimits

0x27a8,	// (0x0008adcf) cams2_bc_adjust_pane

0x14e7,	// (0x00089b0e) cams2_bc_adjust_pane_g1

0x27c2,	// (0x0008ade9) cams2_slider_pane

0x14e7,	// (0x00089b0e) cams2_slider_pane_g1

0x14e7,	// (0x00089b0e) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x00097bf2) cams2_slider_pane_g

0x289a,	// (0x0008aec1) calc_display_pane_ParamLimits

0x28b8,	// (0x0008aedf) calc_paper_pane_ParamLimits

0x28d4,	// (0x0008aefb) grid_calc_pane_ParamLimits

0x44e3,	// (0x0008cb0a) popup_clock_digital_window_t1_ParamLimits

0xd4b8,	// (0x00095adf) main_image_pane_t1

0x2880,	// (0x0008aea7) aid_size_cell_calc_ParamLimits

0x2880,	// (0x0008aea7) aid_size_cell_calc

0x5241,	// (0x0008d868) popup_blid_sat_info2_window_ParamLimits

0x5241,	// (0x0008d868) popup_blid_sat_info2_window

0xe71d,	// (0x00096d44) aid_size_cell_blid

0xe443,	// (0x00096a6a) bg_popup_window_pane_cp07

0xe73a,	// (0x00096d61) grid_popup_blid_pane

0xe744,	// (0x00096d6b) heading_pane_cp05_ParamLimits

0xe744,	// (0x00096d6b) heading_pane_cp05

0xe80e,	// (0x00096e35) cell_popup_blid_pane_ParamLimits

0xe80e,	// (0x00096e35) cell_popup_blid_pane

0xe832,	// (0x00096e59) cell_popup_blid_pane_g1

0xe83a,	// (0x00096e61) cell_popup_blid_pane_t1

0xe443,	// (0x00096a6a) mup2_indicator_pane_ParamLimits

0xe443,	// (0x00096a6a) mup2_indicator_pane

0xac16,	// (0x0009323d) mup2_visualizer_osc_pane

0xe5c4,	// (0x00096beb) mup2_visualizer_spec_pane_ParamLimits

0xe5c4,	// (0x00096beb) mup2_visualizer_spec_pane

0xac16,	// (0x0009323d) mup2_spec_half_pane

0xac16,	// (0x0009323d) mup2_spec_half_pane_cp

0xe848,	// (0x00096e6f) mup2_spec_bar_pane_ParamLimits

0xe848,	// (0x00096e6f) mup2_spec_bar_pane

0xc5c0,	// (0x00094be7) mup2_spec_bar_pane_g1

0xe867,	// (0x00096e8e) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x00097c18) mup2_spec_bar_pane_g

0xac16,	// (0x0009323d) mup2_osc_middle_pane

0xc5c0,	// (0x00094be7) mup2_visualizer_osc_pane_g1

0xac40,	// (0x00093267) popup_number_entry_window_t1_ParamLimits

0xbebe,	// (0x000944e5) popup_number_entry_window_t2_ParamLimits

0xbed0,	// (0x000944f7) popup_number_entry_window_t3_ParamLimits

0x2823,	// (0x0008ae4a) popup_number_entry_window_t5_ParamLimits

0x2823,	// (0x0008ae4a) popup_number_entry_window_t5

0xf040,	// (0x00097667) popup_number_entry_window_t_ParamLimits

0xbee2,	// (0x00094509) text_title_cp2_ParamLimits

0x4ac3,	// (0x0008d0ea) aid_hotspot_pointer_text2_pane

0x4b51,	// (0x0008d178) main_viewer_pane_g9_ParamLimits

0x4b51,	// (0x0008d178) main_viewer_pane_g9

0xcae9,	// (0x00095110) cale_month_pane_t1_ParamLimits

0xcb26,	// (0x0009514d) bg_cale_pane_ParamLimits

0xcb3e,	// (0x00095165) list_cale_pane_ParamLimits

0xcb4f,	// (0x00095176) listscroll_cale_day_pane_t1

0xcb61,	// (0x00095188) scroll_pane_cp09_ParamLimits

0x4766,	// (0x0008cd8d) main_mup_eq_pane_t1_ParamLimits

0x4766,	// (0x0008cd8d) main_mup_eq_pane_t1

0x4780,	// (0x0008cda7) main_mup_eq_pane_t2_ParamLimits

0x4780,	// (0x0008cda7) main_mup_eq_pane_t2

0x479a,	// (0x0008cdc1) main_mup_eq_pane_t3_ParamLimits

0x479a,	// (0x0008cdc1) main_mup_eq_pane_t3

0x47b2,	// (0x0008cdd9) main_mup_eq_pane_t4_ParamLimits

0x47b2,	// (0x0008cdd9) main_mup_eq_pane_t4

0x47ca,	// (0x0008cdf1) main_mup_eq_pane_t5_ParamLimits

0x47ca,	// (0x0008cdf1) main_mup_eq_pane_t5

0x47e2,	// (0x0008ce09) main_mup_eq_pane_t6_ParamLimits

0x47e2,	// (0x0008ce09) main_mup_eq_pane_t6

0x47f6,	// (0x0008ce1d) main_mup_eq_pane_t7_ParamLimits

0x47f6,	// (0x0008ce1d) main_mup_eq_pane_t7

0x480a,	// (0x0008ce31) main_mup_eq_pane_t8_ParamLimits

0x480a,	// (0x0008ce31) main_mup_eq_pane_t8

0x4820,	// (0x0008ce47) main_mup_eq_pane_t9_ParamLimits

0x4820,	// (0x0008ce47) main_mup_eq_pane_t9

0x4838,	// (0x0008ce5f) main_mup_eq_pane_t10_ParamLimits

0x4838,	// (0x0008ce5f) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x000979c6) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x000979c6) main_mup_eq_pane_t

0x48f5,	// (0x0008cf1c) mup_equalizer_pane_cp5_ParamLimits

0x490b,	// (0x0008cf32) mup_equalizer_pane_cp6_ParamLimits

0x4923,	// (0x0008cf4a) mup_equalizer_pane_cp7_ParamLimits

0x27c2,	// (0x0008ade9) main_gallery_pane

0xe562,	// (0x00096b89) smil2_volume_pane

0xe56a,	// (0x00096b91) smil_status_volume_pane_g1_ParamLimits

0xe57d,	// (0x00096ba4) smil_status_volume_pane_g2_ParamLimits

0x53ff,	// (0x0008da26) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x00097b71) smil_status_volume_pane_g_ParamLimits

0xe443,	// (0x00096a6a) bg_popup_window_pane_cp07_ParamLimits

0xe725,	// (0x00096d4c) blid_firmament_pane

0xc574,	// (0x00094b9b) aid_size_cell_gallery_ParamLimits

0xc574,	// (0x00094b9b) aid_size_cell_gallery

0xc574,	// (0x00094b9b) grid_gallery_pane_ParamLimits

0xc574,	// (0x00094b9b) grid_gallery_pane

0xd3b2,	// (0x000959d9) cell_gallery_pane_ParamLimits

0xd3b2,	// (0x000959d9) cell_gallery_pane

0xc29e,	// (0x000948c5) bg_cell_gallery_focus_pane_ParamLimits

0xc29e,	// (0x000948c5) bg_cell_gallery_focus_pane

0xc582,	// (0x00094ba9) cell_gallery_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_gallery_pane_g1

0xc582,	// (0x00094ba9) cell_gallery_pane_g2_ParamLimits

0xc582,	// (0x00094ba9) cell_gallery_pane_g2

0xc582,	// (0x00094ba9) cell_gallery_pane_g3_ParamLimits

0xc582,	// (0x00094ba9) cell_gallery_pane_g3

0xc590,	// (0x00094bb7) cell_gallery_pane_g4_ParamLimits

0xc590,	// (0x00094bb7) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x00097c1d) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x00097c1d) cell_gallery_pane_g

0xe871,	// (0x00096e98) bg_cell_gallery_focus_pane_g1

0xe879,	// (0x00096ea0) bg_cell_gallery_focus_pane_g2

0xe881,	// (0x00096ea8) bg_cell_gallery_focus_pane_g3

0xe889,	// (0x00096eb0) bg_cell_gallery_focus_pane_g4

0xe891,	// (0x00096eb8) bg_cell_gallery_focus_pane_g5

0xe899,	// (0x00096ec0) bg_cell_gallery_focus_pane_g6

0xe8a1,	// (0x00096ec8) bg_cell_gallery_focus_pane_g7

0xe8a9,	// (0x00096ed0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x00097c26) bg_cell_gallery_focus_pane_g

0xe8b1,	// (0x00096ed8) aid_firma_cardinal

0xe8c5,	// (0x00096eec) blid_firmament_pane_t1

0xe8dc,	// (0x00096f03) blid_firmament_pane_t2

0xe8f3,	// (0x00096f1a) blid_firmament_pane_t3

0xe90a,	// (0x00096f31) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x00097c37) blid_firmament_pane_t

0xe921,	// (0x00096f48) blid_sat_info_pane

0xc5c0,	// (0x00094be7) blid_sat_info_pane_g1

0xc5c0,	// (0x00094be7) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000976d6) blid_sat_info_pane_g

0xe931,	// (0x00096f58) blid_sat_info_pane_t1

0xe93f,	// (0x00096f66) smil2_volume_content_pane

0xe948,	// (0x00096f6f) smil2_volume_pane_g1

0xc94d,	// (0x00094f74) smil2_volume_content_pane_g1

0xe950,	// (0x00096f77) smil2_volume_content_pane_g2

0xe959,	// (0x00096f80) smil2_volume_content_pane_g3

0xe962,	// (0x00096f89) smil2_volume_content_pane_g4

0xe96b,	// (0x00096f92) smil2_volume_content_pane_g5

0xe974,	// (0x00096f9b) smil2_volume_content_pane_g6

0xe97d,	// (0x00096fa4) smil2_volume_content_pane_g7

0xe986,	// (0x00096fad) smil2_volume_content_pane_g8

0xe98f,	// (0x00096fb6) smil2_volume_content_pane_g9

0xe998,	// (0x00096fbf) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x00097c40) smil2_volume_content_pane_g

0x2e00,	// (0x0008b427) cale_week_day_heading_pane_t1_ParamLimits

0x2e1b,	// (0x0008b442) cale_week_day_heading_pane_t2_ParamLimits

0x2e36,	// (0x0008b45d) cale_week_day_heading_pane_t3_ParamLimits

0x2e51,	// (0x0008b478) cale_week_day_heading_pane_t4_ParamLimits

0x2e6c,	// (0x0008b493) cale_week_day_heading_pane_t5_ParamLimits

0x2e87,	// (0x0008b4ae) cale_week_day_heading_pane_t6_ParamLimits

0x2ea2,	// (0x0008b4c9) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0009776e) cale_week_day_heading_pane_t_ParamLimits

0xc77e,	// (0x00094da5) bg_cale_side_pane_ParamLimits

0x2ebd,	// (0x0008b4e4) cale_week_time_pane_t1_ParamLimits

0x2ed7,	// (0x0008b4fe) cale_week_time_pane_t2_ParamLimits

0x2ef1,	// (0x0008b518) cale_week_time_pane_t3_ParamLimits

0x2f0b,	// (0x0008b532) cale_week_time_pane_t4_ParamLimits

0x2f25,	// (0x0008b54c) cale_week_time_pane_t5_ParamLimits

0x2f3f,	// (0x0008b566) cale_week_time_pane_t6_ParamLimits

0x2f5d,	// (0x0008b584) cale_week_time_pane_t7_ParamLimits

0x2f7f,	// (0x0008b5a6) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0009777d) cale_week_time_pane_t_ParamLimits

0x2fa3,	// (0x0008b5ca) cell_cale_week_pane_g2_ParamLimits

0xc77e,	// (0x00094da5) bg_cale_side_pane_cp01_ParamLimits

0x40df,	// (0x0008c706) cale_month_week_pane_t1_ParamLimits

0x40f8,	// (0x0008c71f) cale_month_week_pane_t2_ParamLimits

0x4111,	// (0x0008c738) cale_month_week_pane_t3_ParamLimits

0x412a,	// (0x0008c751) cale_month_week_pane_t4_ParamLimits

0x4143,	// (0x0008c76a) cale_month_week_pane_t5_ParamLimits

0x4164,	// (0x0008c78b) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0009784b) cale_month_week_pane_t_ParamLimits

0x42a7,	// (0x0008c8ce) cell_cale_month_pane_g1_ParamLimits

0x27c2,	// (0x0008ade9) main_cale_event_viewer_pane

0xac16,	// (0x0009323d) listscroll_cale_event_viewer_pane

0xe9a1,	// (0x00096fc8) list_cale_ev_pane

0xe9a9,	// (0x00096fd0) scroll_pane_cp023

0xe9b5,	// (0x00096fdc) field_cale_ev_pane_ParamLimits

0xe9b5,	// (0x00096fdc) field_cale_ev_pane

0xe9d3,	// (0x00096ffa) field_cale_ev_content_pane_ParamLimits

0xe9d3,	// (0x00096ffa) field_cale_ev_content_pane

0xe9df,	// (0x00097006) field_cale_ev_pane_g1_ParamLimits

0xe9df,	// (0x00097006) field_cale_ev_pane_g1

0xe9eb,	// (0x00097012) field_cale_ev_pane_g2_ParamLimits

0xe9eb,	// (0x00097012) field_cale_ev_pane_g2

0xea03,	// (0x0009702a) field_cale_ev_pane_g3_ParamLimits

0xea03,	// (0x0009702a) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x00097c55) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x00097c55) field_cale_ev_pane_g

0xea1b,	// (0x00097042) field_cale_ev_pane_t1_ParamLimits

0xea1b,	// (0x00097042) field_cale_ev_pane_t1

0xc956,	// (0x00094f7d) field_cale_ev_content_pane_t1_ParamLimits

0xc956,	// (0x00094f7d) field_cale_ev_content_pane_t1

0xd375,	// (0x0009599c) bg_button_pane_cp01

0x2b91,	// (0x0008b1b8) listscroll_cale_week_pane_ParamLimits

0xc729,	// (0x00094d50) popup_toolbar_window_cp01

0xc74f,	// (0x00094d76) listscroll_cale_week_pane_t1_ParamLimits

0x2b91,	// (0x0008b1b8) listscroll_cale_day_pane_ParamLimits

0xc729,	// (0x00094d50) popup_toolbar_window_cp02

0xcb4f,	// (0x00095176) listscroll_cale_day_pane_t1_ParamLimits

0x2b91,	// (0x0008b1b8) main_cale_month_pane_ParamLimits

0x5348,	// (0x0008d96f) popup_toolbar_window_cp03_ParamLimits

0x5348,	// (0x0008d96f) popup_toolbar_window_cp03

0x4ca5,	// (0x0008d2cc) main_image_pane_g2_ParamLimits

0x4ca5,	// (0x0008d2cc) main_image_pane_g2

0x4cb1,	// (0x0008d2d8) main_image_pane_g3_ParamLimits

0x4cb1,	// (0x0008d2d8) main_image_pane_g3

0x0002,

0xf431,	// (0x00097a58) main_image_pane_g_ParamLimits

0xf431,	// (0x00097a58) main_image_pane_g

0xd4b8,	// (0x00095adf) main_image_pane_t1_ParamLimits

0x4cbd,	// (0x0008d2e4) main_image_pane_t2_ParamLimits

0x4cbd,	// (0x0008d2e4) main_image_pane_t2

0x4ccf,	// (0x0008d2f6) main_image_pane_t3_ParamLimits

0x4ccf,	// (0x0008d2f6) main_image_pane_t3

0x4ce1,	// (0x0008d308) main_image_pane_t4_ParamLimits

0x4ce1,	// (0x0008d308) main_image_pane_t4

0x0003,

0xf438,	// (0x00097a5f) main_image_pane_t_ParamLimits

0xf438,	// (0x00097a5f) main_image_pane_t

0x4cf3,	// (0x0008d31a) popup_image_details_window_cp01

0x4cfd,	// (0x0008d324) popup_toobar_trans_pane_cp01_ParamLimits

0x4cfd,	// (0x0008d324) popup_toobar_trans_pane_cp01

0x5298,	// (0x0008d8bf) popup_image_details_window_ParamLimits

0x5298,	// (0x0008d8bf) popup_image_details_window

0x52a6,	// (0x0008d8cd) popup_image_focus_window

0x27a8,	// (0x0008adcf) camera2_autofocus_pane_ParamLimits

0x27a8,	// (0x0008adcf) camera2_autofocus_pane

0xac16,	// (0x0009323d) bg_popup_sub_pane_cp06

0xea32,	// (0x00097059) popup_image_focus_window_g1

0xea3a,	// (0x00097061) popup_image_focus_window_g2

0xea42,	// (0x00097069) popup_image_focus_window_g3

0xea4a,	// (0x00097071) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x00097c5c) popup_image_focus_window_g

0xea52,	// (0x00097079) popup_image_focus_window_t1

0xea60,	// (0x00097087) popup_image_focus_window_t2

0xea70,	// (0x00097097) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x00097c65) popup_image_focus_window_t

0xc582,	// (0x00094ba9) camera2_autofocus_pane_g1

0xc29e,	// (0x000948c5) bg_tb_trans_pane_cp01

0xea7e,	// (0x000970a5) popup_image_details_window_g1

0xea91,	// (0x000970b8) popup_image_details_window_g2

0x0002,

0xf650,	// (0x00097c77) popup_image_details_window_g

0xeaba,	// (0x000970e1) popup_image_details_window_t1

0xeacc,	// (0x000970f3) popup_image_details_window_t2

0xeae5,	// (0x0009710c) popup_image_details_window_t3

0xeaf9,	// (0x00097120) popup_image_details_window_t4

0xeb14,	// (0x0009713b) popup_image_details_window_t5

0x0004,

0xf657,	// (0x00097c7e) popup_image_details_window_t

0xc60a,	// (0x00094c31) bg_calc_paper_pane_ParamLimits

0x27c2,	// (0x0008ade9) grid_highlight_pane_cp013

0x290f,	// (0x0008af36) list_calc_pane_ParamLimits

0x2921,	// (0x0008af48) scroll_pane_cp024

0xc61e,	// (0x00094c45) bg_calc_display_pane_ParamLimits

0x2929,	// (0x0008af50) calc_display_pane_t1_ParamLimits

0x293e,	// (0x0008af65) calc_display_pane_t2_ParamLimits

0x2953,	// (0x0008af7a) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000976ee) calc_display_pane_t_ParamLimits

0x2a2c,	// (0x0008b053) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0009770b) cell_calc_pane_g

0x2a35,	// (0x0008b05c) cell_calc_pane_t1

0xc673,	// (0x00094c9a) grid_highlight_pane_cp02_ParamLimits

0xc689,	// (0x00094cb0) toolbar_button_pane_cp01_ParamLimits

0xc689,	// (0x00094cb0) toolbar_button_pane_cp01

0xd4fd,	// (0x00095b24) temp_image_control_pane_ParamLimits

0xd4fd,	// (0x00095b24) temp_image_control_pane

0x5210,	// (0x0008d837) main_mp3_pane

0xeb2e,	// (0x00097155) temp_image_control_pane_g1_ParamLimits

0xeb2e,	// (0x00097155) temp_image_control_pane_g1

0xeb3c,	// (0x00097163) temp_image_control_pane_g2_ParamLimits

0xeb3c,	// (0x00097163) temp_image_control_pane_g2

0xeb4e,	// (0x00097175) temp_image_control_pane_g3_ParamLimits

0xeb4e,	// (0x00097175) temp_image_control_pane_g3

0x56b8,	// (0x0008dcdf) temp_image_control_pane_g4_ParamLimits

0x56b8,	// (0x0008dcdf) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x00097c89) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x00097c89) temp_image_control_pane_g

0xeb2e,	// (0x00097155) main_mp3_pane_g1

0x56c9,	// (0x0008dcf0) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x00097c92) main_mp3_pane_g

0xeb83,	// (0x000971aa) main_mp3_pane_t1

0xc590,	// (0x00094bb7) main_camera_pane_g8_ParamLimits

0xc590,	// (0x00094bb7) main_camera_pane_g8

0x314d,	// (0x0008b774) main_video_pane_g7_ParamLimits

0x314d,	// (0x0008b774) main_video_pane_g7

0x555a,	// (0x0008db81) main_camera2_pane_t7_ParamLimits

0x555a,	// (0x0008db81) main_camera2_pane_t7

0xc8e0,	// (0x00094f07) scroll_pane_cp025_ParamLimits

0xc8e0,	// (0x00094f07) scroll_pane_cp025

0xc8f4,	// (0x00094f1b) scroll_pane_cp026_ParamLimits

0xc8f4,	// (0x00094f1b) scroll_pane_cp026

0xc903,	// (0x00094f2a) wml_content_pane_ParamLimits

0x27c2,	// (0x0008ade9) main_touch_calib_pane

0x576d,	// (0x0008dd94) main_touch_calib_pane_g1

0x5779,	// (0x0008dda0) main_touch_calib_pane_g2

0x5785,	// (0x0008ddac) main_touch_calib_pane_g3

0x5791,	// (0x0008ddb8) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x00097cb0) main_touch_calib_pane_g

0x579d,	// (0x0008ddc4) main_touch_calib_pane_t1

0x57b6,	// (0x0008dddd) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x00097cb9) main_touch_calib_pane_t

0xd0c4,	// (0x000956eb) mup_progress_pane_cp02

0xd0f9,	// (0x00095720) navi_pane_g1

0xd1b4,	// (0x000957db) navi_pane_mp_t3

0x5210,	// (0x0008d837) main_mp3_pane_ParamLimits

0x5385,	// (0x0008d9ac) navi_pane_ParamLimits

0xeb2e,	// (0x00097155) main_mp3_pane_g1_ParamLimits

0x56c9,	// (0x0008dcf0) main_mp3_pane_g2_ParamLimits

0x56d5,	// (0x0008dcfc) main_mp3_pane_g3_ParamLimits

0x56d5,	// (0x0008dcfc) main_mp3_pane_g3

0x56e1,	// (0x0008dd08) main_mp3_pane_g4_ParamLimits

0x56e1,	// (0x0008dd08) main_mp3_pane_g4

0xc582,	// (0x00094ba9) main_mp3_pane_g5_ParamLimits

0xc582,	// (0x00094ba9) main_mp3_pane_g5

0xeb5e,	// (0x00097185) main_mp3_pane_g6_ParamLimits

0xeb5e,	// (0x00097185) main_mp3_pane_g6

0xeb6b,	// (0x00097192) main_mp3_pane_g7_ParamLimits

0xeb6b,	// (0x00097192) main_mp3_pane_g7

0xeb77,	// (0x0009719e) main_mp3_pane_g8_ParamLimits

0xeb77,	// (0x0009719e) main_mp3_pane_g8

0xf66b,	// (0x00097c92) main_mp3_pane_g_ParamLimits

0x56ed,	// (0x0008dd14) main_mp3_pane_t2

0x56fd,	// (0x0008dd24) main_mp3_pane_t3

0xeb91,	// (0x000971b8) main_mp3_pane_t4

0xeb9f,	// (0x000971c6) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x00097ca3) main_mp3_pane_t

0xebad,	// (0x000971d4) mup_progress_pane_cp01

0x2541,	// (0x0008ab68) aid_zoom_text_secondary2

0xe9a1,	// (0x00096fc8) list_cale_ev2_pane

0xe9a9,	// (0x00096fd0) scroll_pane_cp023_ParamLimits

0x5811,	// (0x0008de38) field_cale_ev2_pane_ParamLimits

0x5811,	// (0x0008de38) field_cale_ev2_pane

0x583a,	// (0x0008de61) field_cale_ev2_pane_g1_ParamLimits

0x583a,	// (0x0008de61) field_cale_ev2_pane_g1

0x5846,	// (0x0008de6d) field_cale_ev2_pane_g2_ParamLimits

0x5846,	// (0x0008de6d) field_cale_ev2_pane_g2

0x585e,	// (0x0008de85) field_cale_ev2_pane_g3_ParamLimits

0x585e,	// (0x0008de85) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x00097cc4) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x00097cc4) field_cale_ev2_pane_g

0xebc1,	// (0x000971e8) field_cale_ev2_pane_t1_ParamLimits

0xebc1,	// (0x000971e8) field_cale_ev2_pane_t1

0xebd8,	// (0x000971ff) field_cale_ev2_pane_t2_ParamLimits

0xebd8,	// (0x000971ff) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x00097ccd) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x00097ccd) field_cale_ev2_pane_t

0x4bb9,	// (0x0008d1e0) main_postcard_pane_g5_ParamLimits

0x4bb9,	// (0x0008d1e0) main_postcard_pane_g5

0x4bc7,	// (0x0008d1ee) main_postcard_pane_g6_ParamLimits

0x4bc7,	// (0x0008d1ee) main_postcard_pane_g6

0xc574,	// (0x00094b9b) camera2_autofocus_pane_cp_ParamLimits

0xc574,	// (0x00094b9b) camera2_autofocus_pane_cp

0x5210,	// (0x0008d837) main_mup3_pane

0x58b5,	// (0x0008dedc) main_mup3_pane_g1_ParamLimits

0x58b5,	// (0x0008dedc) main_mup3_pane_g1

0x58d6,	// (0x0008defd) main_mup3_pane_g2_ParamLimits

0x58d6,	// (0x0008defd) main_mup3_pane_g2

0x594e,	// (0x0008df75) main_mup3_pane_g3_ParamLimits

0x594e,	// (0x0008df75) main_mup3_pane_g3

0x5991,	// (0x0008dfb8) main_mup3_pane_g4_ParamLimits

0x5991,	// (0x0008dfb8) main_mup3_pane_g4

0x59d4,	// (0x0008dffb) main_mup3_pane_g5_ParamLimits

0x59d4,	// (0x0008dffb) main_mup3_pane_g5

0x5a17,	// (0x0008e03e) main_mup3_pane_g6_ParamLimits

0x5a17,	// (0x0008e03e) main_mup3_pane_g6

0xc590,	// (0x00094bb7) main_mup3_pane_g7_ParamLimits

0xc590,	// (0x00094bb7) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x00097cdd) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x00097cdd) main_mup3_pane_g

0x5a8d,	// (0x0008e0b4) main_mup3_pane_t1_ParamLimits

0x5a8d,	// (0x0008e0b4) main_mup3_pane_t1

0x5afc,	// (0x0008e123) main_mup3_pane_t2_ParamLimits

0x5afc,	// (0x0008e123) main_mup3_pane_t2

0x5bc5,	// (0x0008e1ec) main_mup3_pane_t4_ParamLimits

0x5bc5,	// (0x0008e1ec) main_mup3_pane_t4

0x5c13,	// (0x0008e23a) main_mup3_pane_t5_ParamLimits

0x5c13,	// (0x0008e23a) main_mup3_pane_t5

0x5cc3,	// (0x0008e2ea) main_mup3_pane_t6_ParamLimits

0x5cc3,	// (0x0008e2ea) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x00097cee) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x00097cee) main_mup3_pane_t

0x5d6f,	// (0x0008e396) mup3_progress_pane_ParamLimits

0x5d6f,	// (0x0008e396) mup3_progress_pane

0x5ded,	// (0x0008e414) popup_mup3_control_window_ParamLimits

0x5ded,	// (0x0008e414) popup_mup3_control_window

0xebed,	// (0x00097214) popup_mup3_text_window

0x5e06,	// (0x0008e42d) mup3_progress_pane_t1

0x5e25,	// (0x0008e44c) mup3_progress_pane_t2

0xebf5,	// (0x0009721c) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x00097cfb) mup3_progress_pane_t

0xec12,	// (0x00097239) mup_progress_pane_cp03

0xac16,	// (0x0009323d) bg_tb_trans_pane_cp04

0x5e44,	// (0x0008e46b) mup3_volume_pane

0x5e4c,	// (0x0008e473) popup_mup3_control_window_g1

0x5e55,	// (0x0008e47c) mup3_volume_pane_g1

0x5e5e,	// (0x0008e485) mup3_volume_pane_g2

0x5e67,	// (0x0008e48e) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x00097d02) mup3_volume_pane_g

0xac16,	// (0x0009323d) bg_tb_trans_pane_cp03

0xec22,	// (0x00097249) popup_mup3_text_window_g1

0xec2a,	// (0x00097251) popup_mup3_text_window_t1

0xc666,	// (0x00094c8d) list_calc_item_pane_g1_ParamLimits

0xe69b,	// (0x00096cc2) mup_volume_pane_cp_g1

0x57cf,	// (0x0008ddf6) main_touch_calib_pane_t3

0x57e5,	// (0x0008de0c) main_touch_calib_pane_t4

0x57fb,	// (0x0008de22) main_touch_calib_pane_t5

0x24f9,	// (0x0008ab20) aid_cell_size_toolbar2

0x2501,	// (0x0008ab28) aid_popup3_width_pane

0x2409,	// (0x0008aa30) aid_zoom_text_msg_primary

0x304f,	// (0x0008b676) vorec_t7

0xc62a,	// (0x00094c51) bg_calc_paper_pane_g1_ParamLimits

0xc642,	// (0x00094c69) bg_calc_paper_pane_g2_ParamLimits

0xc636,	// (0x00094c5d) bg_calc_paper_pane_g3_ParamLimits

0xc64e,	// (0x00094c75) bg_calc_paper_pane_g4_ParamLimits

0xc65a,	// (0x00094c81) bg_calc_paper_pane_g5_ParamLimits

0x2992,	// (0x0008afb9) bg_calc_paper_pane_g6_ParamLimits

0x29a3,	// (0x0008afca) bg_calc_paper_pane_g7_ParamLimits

0x29b4,	// (0x0008afdb) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000976f5) bg_calc_paper_pane_g_ParamLimits

0x29c5,	// (0x0008afec) calc_bg_paper_pane_g9_ParamLimits

0xc574,	// (0x00094b9b) image_qvga_pane_ParamLimits

0xc574,	// (0x00094b9b) image_qvga_pane

0xc507,	// (0x00094b2e) bg_popup_sub_pane_cp04_ParamLimits

0xd434,	// (0x00095a5b) popup_mup_playback_window_g1_ParamLimits

0xd440,	// (0x00095a67) popup_mup_playback_window_t1_ParamLimits

0xd455,	// (0x00095a7c) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00097a53) popup_mup_playback_window_t_ParamLimits

0xc582,	// (0x00094ba9) main_mup2_pane_g3_ParamLimits

0xc582,	// (0x00094ba9) main_mup2_pane_g3

0x330e,	// (0x0008b935) popup_toolbar_window_cp04

0xd7c6,	// (0x00095ded) popup_call2_audio_second_window_g3_ParamLimits

0xd7c6,	// (0x00095ded) popup_call2_audio_second_window_g3

0xdbde,	// (0x00096205) popup_call2_audio_first_window_g4_ParamLimits

0xdbde,	// (0x00096205) popup_call2_audio_first_window_g4

0xe205,	// (0x0009682c) popup_call2_audio_in_window_g4_ParamLimits

0xe205,	// (0x0009682c) popup_call2_audio_in_window_g4

0x4c98,	// (0x0008d2bf) aid_area_sk_bg_cut_ParamLimits

0x4c98,	// (0x0008d2bf) aid_area_sk_bg_cut

0xd46a,	// (0x00095a91) aid_area_sk_bg_cut_2_ParamLimits

0xd46a,	// (0x00095a91) aid_area_sk_bg_cut_2

0xac16,	// (0x0009323d) aid_placing_details_win

0xac16,	// (0x0009323d) aid_placing_details_win_2

0xc582,	// (0x00094ba9) camera2_autofocus_pane_g1_ParamLimits

0x274e,	// (0x0008ad75) popup_fixed_preview_cale_window_ParamLimits

0x274e,	// (0x0008ad75) popup_fixed_preview_cale_window

0xd232,	// (0x00095859) navi_slider_pane_g3

0xd23b,	// (0x00095862) navi_slider_pane_g4

0xd244,	// (0x0009586b) navi_slider_pane_g5

0xd232,	// (0x00095859) navi_slider_pane_g6

0x473a,	// (0x0008cd61) navi_slider_pane_g7

0xd342,	// (0x00095969) mup_scale_pane_g3

0xd34b,	// (0x00095972) mup_scale_pane_g4

0xd354,	// (0x0009597b) mup_scale_pane_g5

0x493b,	// (0x0008cf62) mup_scale_pane_g6

0x4944,	// (0x0008cf6b) mup_scale_pane_g7

0x14e7,	// (0x00089b0e) cams2_slider_pane_g3

0x14e7,	// (0x00089b0e) cams2_slider_pane_g4

0x14e7,	// (0x00089b0e) cams2_slider_pane_g5

0x14e7,	// (0x00089b0e) cams2_slider_pane_g6

0x14e7,	// (0x00089b0e) cams2_slider_pane_g7

0xc5c0,	// (0x00094be7) camera2_autofocus_pane_cp_g1

0xe4e9,	// (0x00096b10) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4e9,	// (0x00096b10) bg_popup_preview_window_pane_cp02

0xec38,	// (0x0009725f) list_fp_cale_pane_ParamLimits

0xec38,	// (0x0009725f) list_fp_cale_pane

0xec44,	// (0x0009726b) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x0009726b) popup_fixed_preview_cale_window_t1

0x5e70,	// (0x0008e497) popup_fixed_preview_cale_window_t2_ParamLimits

0x5e70,	// (0x0008e497) popup_fixed_preview_cale_window_t2

0x5e85,	// (0x0008e4ac) popup_fixed_preview_cale_window_t3_ParamLimits

0x5e85,	// (0x0008e4ac) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x00097d09) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x00097d09) popup_fixed_preview_cale_window_t

0x5e9a,	// (0x0008e4c1) list_single_fp_cale_pane_ParamLimits

0x5e9a,	// (0x0008e4c1) list_single_fp_cale_pane

0xec62,	// (0x00097289) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x00097289) list_single_fp_cale_pane_g1

0xec6e,	// (0x00097295) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x00097295) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x00097d10) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x00097d10) list_single_fp_cale_pane_g

0xec87,	// (0x000972ae) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x000972ae) list_single_fp_cale_pane_t1

0xec99,	// (0x000972c0) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x000972c0) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x00097d17) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x00097d17) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x27c2,	// (0x0008ade9) main_dialer_pane

0xac16,	// (0x0009323d) aid_cell_size_keypad

0xac16,	// (0x0009323d) dialer_ne_pane

0xac16,	// (0x0009323d) grid_dialer_command_1_pane

0xac16,	// (0x0009323d) grid_dialer_command_2_pane

0xac16,	// (0x0009323d) grid_dialer_keypad_pane

0xe443,	// (0x00096a6a) bg_popup_call_pane_cp06_ParamLimits

0xe443,	// (0x00096a6a) bg_popup_call_pane_cp06

0xe443,	// (0x00096a6a) dialer_ne_clear_pane_ParamLimits

0xe443,	// (0x00096a6a) dialer_ne_clear_pane

0xc5c0,	// (0x00094be7) dialer_ne_pane_g1

0xc5de,	// (0x00094c05) dialer_ne_pane_t1_ParamLimits

0xc5de,	// (0x00094c05) dialer_ne_pane_t1

0xee7d,	// (0x000974a4) dialer_ne_pane_t2_ParamLimits

0xee7d,	// (0x000974a4) dialer_ne_pane_t2

0x5ead,	// (0x0008e4d4) dialer_ne_pane_t3_ParamLimits

0x5ead,	// (0x0008e4d4) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x00097d1c) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x00097d1c) dialer_ne_pane_t

0x5ead,	// (0x0008e4d4) dialer_ne_pane_t3_copy1_ParamLimits

0x5ead,	// (0x0008e4d4) dialer_ne_pane_t3_copy1

0xeccc,	// (0x000972f3) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x000972f3) cell_dialer_keypad_pane

0xc29e,	// (0x000948c5) cell_dialer_command_1_pane_ParamLimits

0xc29e,	// (0x000948c5) cell_dialer_command_1_pane

0xece3,	// (0x0009730a) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x0009730a) cell_dialer_command_2_pane

0xc29e,	// (0x000948c5) bg_button_pane_cp02_ParamLimits

0xc29e,	// (0x000948c5) bg_button_pane_cp02

0xc582,	// (0x00094ba9) cell_dialer_keypad_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_dialer_keypad_pane_g1

0xc29e,	// (0x000948c5) bg_button_pane_cp03_ParamLimits

0xc29e,	// (0x000948c5) bg_button_pane_cp03

0xc582,	// (0x00094ba9) cell_dialer_command_1_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_dialer_command_1_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp04

0xc5c0,	// (0x00094be7) cell_dialer_command_2_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp06

0xc5c0,	// (0x00094be7) dialer_ne_clear_pane_g1

0xd105,	// (0x0009572c) navi_pane_g2

0xd133,	// (0x0009575a) navi_pane_g3

0x0002,

0xf334,	// (0x0009795b) navi_pane_g

0xd1c2,	// (0x000957e9) navi_pane_mv_g2

0xd1e9,	// (0x00095810) navi_pane_mv_g5

0x4705,	// (0x0008cd2c) navi_pane_mv_t1

0xc61e,	// (0x00094c45) main_clock2_pane

0xc574,	// (0x00094b9b) main_clock2_list_pane_ParamLimits

0xc574,	// (0x00094b9b) main_clock2_list_pane

0x5f23,	// (0x0008e54a) main_clock2_pane_t1_ParamLimits

0x5f23,	// (0x0008e54a) main_clock2_pane_t1

0x5f51,	// (0x0008e578) main_clock2_pane_t2_ParamLimits

0x5f51,	// (0x0008e578) main_clock2_pane_t2

0x0004,

0xf701,	// (0x00097d28) main_clock2_pane_t_ParamLimits

0xf701,	// (0x00097d28) main_clock2_pane_t

0x5fb6,	// (0x0008e5dd) popup_clock_analogue_window_cp03_ParamLimits

0x5fb6,	// (0x0008e5dd) popup_clock_analogue_window_cp03

0x5fd4,	// (0x0008e5fb) popup_clock_digital_window_cp02_ParamLimits

0x5fd4,	// (0x0008e5fb) popup_clock_digital_window_cp02

0x6049,	// (0x0008e670) main_clock2_list_single_pane_ParamLimits

0x6049,	// (0x0008e670) main_clock2_list_single_pane

0xc7d0,	// (0x00094df7) list_highlight_pane_cp05

0xed2a,	// (0x00097351) main_clock2_list_single_pane_t1

0x330e,	// (0x0008b935) popup_toolbar_window_cp04_ParamLimits

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g2

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g3_ParamLimits

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g3

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g4_ParamLimits

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g4

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g5_ParamLimits

0xc590,	// (0x00094bb7) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x00097c6c) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x00097c6c) camera2_autofocus_pane_g

0x5876,	// (0x0008de9d) camera2_autofocus_pane_cp_g2

0x587e,	// (0x0008dea5) camera2_autofocus_pane_cp_g3

0x5886,	// (0x0008dead) camera2_autofocus_pane_cp_g4

0x588e,	// (0x0008deb5) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x00097cd2) camera2_autofocus_pane_cp_g

0xac16,	// (0x0009323d) popup_dialer_spcha_window

0xac16,	// (0x0009323d) bg_popup_sub_pane_cp07

0xac16,	// (0x0009323d) list_spcha_pane

0xed38,	// (0x0009735f) list_single_spcha_pane_ParamLimits

0xed38,	// (0x0009735f) list_single_spcha_pane

0xac16,	// (0x0009323d) list_highlight_pane_cp06

0xcd2e,	// (0x00095355) list_single_spcha_pane_t1

0xdfaf,	// (0x000965d6) popup_call2_audio_out_window_g4_ParamLimits

0xdfaf,	// (0x000965d6) popup_call2_audio_out_window_g4

0x27c2,	// (0x0008ade9) main_imed2_pane

0x52ae,	// (0x0008d8d5) popup_imed_adjust2_window

0x52c1,	// (0x0008d8e8) popup_imed_trans_window_ParamLimits

0x52c1,	// (0x0008d8e8) popup_imed_trans_window

0xe770,	// (0x00096d97) popup_blid_sat_info2_window_t1

0xe77e,	// (0x00096da5) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x00097c01) popup_blid_sat_info2_window_t

0x60fe,	// (0x0008e725) aid_size_cell_colour_35

0x6118,	// (0x0008e73f) aid_size_cell_colour_112

0x612f,	// (0x0008e756) aid_size_cell_effect

0xc29e,	// (0x000948c5) bg_tb_trans_pane_cp02

0xcf06,	// (0x0009552d) heading_imed_pane

0x6149,	// (0x0008e770) listscroll_imed_pane

0xed4a,	// (0x00097371) heading_imed_pane_g1

0xed52,	// (0x00097379) heading_imed_pane_t1

0xed60,	// (0x00097387) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x00097387) grid_imed_colour_35_pane

0x6155,	// (0x0008e77c) grid_imed_effect_pane

0xed77,	// (0x0009739e) list_imed_aspect_pane

0x6165,	// (0x0008e78c) scroll_pane_cp027_ParamLimits

0x6165,	// (0x0008e78c) scroll_pane_cp027

0x6171,	// (0x0008e798) cell_imed_effect_pane_ParamLimits

0x6171,	// (0x0008e798) cell_imed_effect_pane

0xed7f,	// (0x000973a6) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x000973a6) cell_imed_colour_pane

0xedc1,	// (0x000973e8) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x000973e8) cell_imed_colour_pane_g1

0xedd2,	// (0x000973f9) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x000973f9) hgihlgiht_grid_pane_cp016

0x6189,	// (0x0008e7b0) cell_imed_effect_pane_g1

0x6191,	// (0x0008e7b8) grid_highlight_pane_cp017

0xede3,	// (0x0009740a) list_imed_single_pane_ParamLimits

0xede3,	// (0x0009740a) list_imed_single_pane

0xac16,	// (0x0009323d) list_highlight_pane_cp07

0xedf8,	// (0x0009741f) list_imed_aspect_pane_comp1_t1

0xd3b2,	// (0x000959d9) bg_tb_trans_pane_cp05

0xee1a,	// (0x00097441) popup_imed_adjust2_window_g1

0xee41,	// (0x00097468) popup_imed_adjust2_window_t1

0xee59,	// (0x00097480) slider_imed_adjust_pane

0xee6d,	// (0x00097494) slider_imed_adjust_pane_g1

0xee9a,	// (0x000974c1) slider_imed_adjust_pane_g2

0xeeaa,	// (0x000974d1) slider_imed_adjust_pane_g3

0xeebb,	// (0x000974e2) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x00097d45) slider_imed_adjust_pane_g

0x619a,	// (0x0008e7c1) aid_size_cell_clipart2

0x61a6,	// (0x0008e7cd) grid_imed_clipart_pane

0xd365,	// (0x0009598c) scroll_pane_cp031

0x61b0,	// (0x0008e7d7) cell_imed_clipart_pane_ParamLimits

0x61b0,	// (0x0008e7d7) cell_imed_clipart_pane

0x61d2,	// (0x0008e7f9) cell_imed_clipart_pane_g1

0xac16,	// (0x0009323d) grid_highlight_pane_cp014

0x5f05,	// (0x0008e52c) main_clock2_pane_g1_ParamLimits

0x5f05,	// (0x0008e52c) main_clock2_pane_g1

0x5ff0,	// (0x0008e617) aid_call2_pane_cp10

0x6002,	// (0x0008e629) aid_call_pane_cp10

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g1

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g2

0x6014,	// (0x0008e63b) popup_clock_analogue_window_cp10_g3

0x6014,	// (0x0008e63b) popup_clock_analogue_window_cp10_g4

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x00097d33) popup_clock_analogue_window_cp10_g

0x602a,	// (0x0008e651) popup_clock_analogue_window_cp10_t1

0x605b,	// (0x0008e682) clock_digital_number_pane_cp10_ParamLimits

0x605b,	// (0x0008e682) clock_digital_number_pane_cp10

0x6075,	// (0x0008e69c) clock_digital_number_pane_cp11_ParamLimits

0x6075,	// (0x0008e69c) clock_digital_number_pane_cp11

0x608f,	// (0x0008e6b6) clock_digital_number_pane_cp12_ParamLimits

0x608f,	// (0x0008e6b6) clock_digital_number_pane_cp12

0x60a9,	// (0x0008e6d0) clock_digital_number_pane_cp13_ParamLimits

0x60a9,	// (0x0008e6d0) clock_digital_number_pane_cp13

0x60c3,	// (0x0008e6ea) clock_digital_separator_pane_cp10_ParamLimits

0x60c3,	// (0x0008e6ea) clock_digital_separator_pane_cp10

0x60dd,	// (0x0008e704) popup_clock_digital_window_cp02_t1_ParamLimits

0x60dd,	// (0x0008e704) popup_clock_digital_window_cp02_t1

0xc4ff,	// (0x00094b26) clock_digital_number_pane_cp10_g1

0xc4ff,	// (0x00094b26) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x00097d4e) clock_digital_number_pane_cp10_g

0xc4ff,	// (0x00094b26) clock_digital_separator_pane_cp10_g1

0xc4ff,	// (0x00094b26) clock_digital_separator_pane_g2_cp10

0xd1f1,	// (0x00095818) navi_pane_vded_g4

0xd1fa,	// (0x00095821) navi_pane_vded_g5

0xd203,	// (0x0009582a) navi_pane_vded_t1

0x27c2,	// (0x0008ade9) main_vded_pane

0x61db,	// (0x0008e802) main_vded_pane_g1

0x61e7,	// (0x0008e80e) main_vded_pane_g2

0x61f1,	// (0x0008e818) main_vded_pane_g3

0x0002,

0xf72c,	// (0x00097d53) main_vded_pane_g

0x61fb,	// (0x0008e822) main_vded_pane_t1

0x6209,	// (0x0008e830) main_vded_pane_t2

0x0001,

0xf733,	// (0x00097d5a) main_vded_pane_t

0x6217,	// (0x0008e83e) vded_slider_pane

0x6221,	// (0x0008e848) vded_video_pane

0xeecc,	// (0x000974f3) vded_video_pane_g1

0x622b,	// (0x0008e852) vded_video_pane_g2

0xc5c0,	// (0x00094be7) vded_video_pane_g3

0x0002,

0xf738,	// (0x00097d5f) vded_video_pane_g

0xeed6,	// (0x000974fd) vded_slider_pane_g1

0xe69b,	// (0x00096cc2) vded_slider_pane_g2

0xeedf,	// (0x00097506) vded_slider_pane_g3

0xeee8,	// (0x0009750f) vded_slider_pane_g4

0xeef1,	// (0x00097518) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x00097d66) vded_slider_pane_g

0x5ddf,	// (0x0008e406) mup3_rocker_pane_ParamLimits

0x5ddf,	// (0x0008e406) mup3_rocker_pane

0x6234,	// (0x0008e85b) mup3_control_keys_pane_g1

0x623c,	// (0x0008e863) mup3_control_keys_pane_g2

0x6244,	// (0x0008e86b) mup3_control_keys_pane_g3

0x624c,	// (0x0008e873) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x00097d71) mup3_control_keys_pane_g

0x2776,	// (0x0008ad9d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2776,	// (0x0008ad9d) popup_toolbar2_fixed_window_cp01

0x5df9,	// (0x0008e420) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5df9,	// (0x0008e420) popup_toolbar2_fixed_window_cp02

0xd938,	// (0x00095f5f) popup_call2_audio_second_window_t4_ParamLimits

0xd938,	// (0x00095f5f) popup_call2_audio_second_window_t4

0xde74,	// (0x0009649b) popup_call2_audio_first_window_t6_ParamLimits

0xde74,	// (0x0009649b) popup_call2_audio_first_window_t6

0xe0b2,	// (0x000966d9) popup_call2_audio_out_window_t6_ParamLimits

0xe0b2,	// (0x000966d9) popup_call2_audio_out_window_t6

0x27c2,	// (0x0008ade9) main_vitu_pane

0xc574,	// (0x00094b9b) aid_size_cell_itu_ParamLimits

0xc574,	// (0x00094b9b) aid_size_cell_itu

0xc574,	// (0x00094b9b) bg_popup_window_pane_cp08_ParamLimits

0xc574,	// (0x00094b9b) bg_popup_window_pane_cp08

0xc574,	// (0x00094b9b) field_vitu_entry_pane_ParamLimits

0xc574,	// (0x00094b9b) field_vitu_entry_pane

0xc574,	// (0x00094b9b) grid_vitu_function_pane_ParamLimits

0xc574,	// (0x00094b9b) grid_vitu_function_pane

0xc574,	// (0x00094b9b) grid_vitu_itu_pane_ParamLimits

0xc574,	// (0x00094b9b) grid_vitu_itu_pane

0xc574,	// (0x00094b9b) cell_vitu_itu_pane_ParamLimits

0xc574,	// (0x00094b9b) cell_vitu_itu_pane

0xc574,	// (0x00094b9b) cell_vitu_function_pane_ParamLimits

0xc574,	// (0x00094b9b) cell_vitu_function_pane

0xc29e,	// (0x000948c5) bg_popup_sub_pane_cp08_ParamLimits

0xc29e,	// (0x000948c5) bg_popup_sub_pane_cp08

0xc5ca,	// (0x00094bf1) field_vitu_entry_pane_t1_ParamLimits

0xc5ca,	// (0x00094bf1) field_vitu_entry_pane_t1

0xee7d,	// (0x000974a4) field_vitu_entry_pane_t2_ParamLimits

0xee7d,	// (0x000974a4) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x00097d7a) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x00097d7a) field_vitu_entry_pane_t

0xe443,	// (0x00096a6a) bg_button_pane_cp05_ParamLimits

0xe443,	// (0x00096a6a) bg_button_pane_cp05

0xeefa,	// (0x00097521) cell_vitu_itu_pane_g1

0xd3c0,	// (0x000959e7) cell_vitu_itu_pane_t1_ParamLimits

0xd3c0,	// (0x000959e7) cell_vitu_itu_pane_t1

0xd3c0,	// (0x000959e7) cell_vitu_itu_pane_t2_ParamLimits

0xd3c0,	// (0x000959e7) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x00097d7f) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x00097d7f) cell_vitu_itu_pane_t

0xac16,	// (0x0009323d) bg_button_pane_cp07

0xc5c0,	// (0x00094be7) cell_vitu_function_pane_g1

0x28f8,	// (0x0008af1f) main_calc_pane_g1

0x2535,	// (0x0008ab5c) aid_visual_content_pane

0x27c2,	// (0x0008ade9) main_vradio_pane

0xc590,	// (0x00094bb7) main_vradio_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) main_vradio_pane_g1

0xc590,	// (0x00094bb7) main_vradio_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x00097b16) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x00097b16) main_vradio_pane_g

0xc5de,	// (0x00094c05) main_vradio_pane_t1_ParamLimits

0xc5de,	// (0x00094c05) main_vradio_pane_t1

0xc5de,	// (0x00094c05) main_vradio_pane_t2_ParamLimits

0xc5de,	// (0x00094c05) main_vradio_pane_t2

0xc5de,	// (0x00094c05) main_vradio_pane_t3_ParamLimits

0xc5de,	// (0x00094c05) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x00097d86) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x00097d86) main_vradio_pane_t

0xc574,	// (0x00094b9b) vradio_rocker_control_pane_ParamLimits

0xc574,	// (0x00094b9b) vradio_rocker_control_pane

0xc574,	// (0x00094b9b) vradio_station_info_pane_ParamLimits

0xc574,	// (0x00094b9b) vradio_station_info_pane

0xc29e,	// (0x000948c5) vradio_frequency_info_pane_ParamLimits

0xc29e,	// (0x000948c5) vradio_frequency_info_pane

0xc5c0,	// (0x00094be7) vradio_station_info_pane_g1

0xd3c0,	// (0x000959e7) vradio_station_info_pane_t1_ParamLimits

0xd3c0,	// (0x000959e7) vradio_station_info_pane_t1

0xc5de,	// (0x00094c05) vradio_station_info_pane_t2_ParamLimits

0xc5de,	// (0x00094c05) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x00097d8d) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x00097d8d) vradio_station_info_pane_t

0xac16,	// (0x0009323d) vradio_tuning_pane

0x625c,	// (0x0008e883) vradio_rocker_control_pane_g1

0xef16,	// (0x0009753d) vradio_rocker_control_pane_g2

0x6264,	// (0x0008e88b) vradio_rocker_control_pane_g3

0x626c,	// (0x0008e893) vradio_rocker_control_pane_g4

0x6274,	// (0x0008e89b) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x00097d92) vradio_rocker_control_pane_g

0xc5c0,	// (0x00094be7) vradio_frequency_info_pane_g1

0xc5ca,	// (0x00094bf1) vradio_frequency_info_pane_t1_ParamLimits

0xc5ca,	// (0x00094bf1) vradio_frequency_info_pane_t1

0x627c,	// (0x0008e8a3) vradio_tuning_pane_g1

0x6289,	// (0x0008e8b0) vradio_tuning_pane_t1

0x257e,	// (0x0008aba5) area_side_right_pane_ParamLimits

0x257e,	// (0x0008aba5) area_side_right_pane

0xe4b0,	// (0x00096ad7) status_small_pane_g1

0xe4b8,	// (0x00096adf) status_small_pane_g2

0xe4c1,	// (0x00096ae8) status_small_pane_g3

0xe4ca,	// (0x00096af1) status_small_pane_g4

0x0003,

0xf53c,	// (0x00097b63) status_small_pane_g

0xe4d3,	// (0x00096afa) status_small_pane_t1

0x27c2,	// (0x0008ade9) main_video3_pane

0xac16,	// (0x0009323d) cams_zoom_vslider_pane

0xef1e,	// (0x00097545) image3_wide_pane_ParamLimits

0xef1e,	// (0x00097545) image3_wide_pane

0xac16,	// (0x0009323d) image3_wide_small_pane

0xef38,	// (0x0009755f) main_video3_pane_g1_ParamLimits

0xef38,	// (0x0009755f) main_video3_pane_g1

0xef38,	// (0x0009755f) main_video3_pane_g2_ParamLimits

0xef38,	// (0x0009755f) main_video3_pane_g2

0x0001,

0xf776,	// (0x00097d9d) main_video3_pane_g_ParamLimits

0xf776,	// (0x00097d9d) main_video3_pane_g

0xef56,	// (0x0009757d) main_video3_pane_t1_ParamLimits

0xef56,	// (0x0009757d) main_video3_pane_t1

0xef56,	// (0x0009757d) main_video3_pane_t2_ParamLimits

0xef56,	// (0x0009757d) main_video3_pane_t2

0xef56,	// (0x0009757d) main_video3_pane_t3_ParamLimits

0xef56,	// (0x0009757d) main_video3_pane_t3

0x0002,

0xf77b,	// (0x00097da2) main_video3_pane_t_ParamLimits

0xf77b,	// (0x00097da2) main_video3_pane_t

0xc5c0,	// (0x00094be7) cams_zoom_vslider_pane_g1

0xc5c0,	// (0x00094be7) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000976d6) cams_zoom_vslider_pane_g

0xac16,	// (0x0009323d) small_slider_vertical_pane

0xc5c0,	// (0x00094be7) small_slider_vertical_pane_g1

0xc5c0,	// (0x00094be7) small_slider_vertical_pane_g2

0xef7d,	// (0x000975a4) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x00097da9) small_slider_vertical_pane_g

0x27c2,	// (0x0008ade9) main_hwr_training_pane

0xef86,	// (0x000975ad) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x000975ad) hwr_training_instruct_pane

0x6298,	// (0x0008e8bf) hwr_training_navi_pane_ParamLimits

0x6298,	// (0x0008e8bf) hwr_training_navi_pane

0x62b2,	// (0x0008e8d9) hwr_training_write_pane_ParamLimits

0x62b2,	// (0x0008e8d9) hwr_training_write_pane

0xac16,	// (0x0009323d) bg_frame_shadow_pane

0xefbd,	// (0x000975e4) hwr_training_write_pane_g1

0xefc5,	// (0x000975ec) hwr_training_write_pane_g2

0xefcd,	// (0x000975f4) hwr_training_write_pane_g3

0xefd5,	// (0x000975fc) hwr_training_write_pane_g4

0xefdd,	// (0x00097604) hwr_training_write_pane_g5

0xefe5,	// (0x0009760c) hwr_training_write_pane_g6

0xefed,	// (0x00097614) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x00097db0) hwr_training_write_pane_g

0x62ea,	// (0x0008e911) hwr_training_navi_pane_g1_ParamLimits

0x62ea,	// (0x0008e911) hwr_training_navi_pane_g1

0x62fc,	// (0x0008e923) hwr_training_navi_pane_g2_ParamLimits

0x62fc,	// (0x0008e923) hwr_training_navi_pane_g2

0x630e,	// (0x0008e935) hwr_training_navi_pane_g3_ParamLimits

0x630e,	// (0x0008e935) hwr_training_navi_pane_g3

0x631e,	// (0x0008e945) hwr_training_navi_pane_g4_ParamLimits

0x631e,	// (0x0008e945) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x00097dbf) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x00097dbf) hwr_training_navi_pane_g

0x6338,	// (0x0008e95f) hwr_training_navi_pane_t1

0x6346,	// (0x0008e96d) list_single_hwr_training_instruct_pane_ParamLimits

0x6346,	// (0x0008e96d) list_single_hwr_training_instruct_pane

0xeff5,	// (0x0009761c) list_single_hwr_training_instruct_pane_t1

0xe871,	// (0x00096e98) bg_frame_shadow_pane_g1

0xf004,	// (0x0009762b) bg_frame_shadow_pane_g2

0xf00c,	// (0x00097633) bg_frame_shadow_pane_g3

0xf014,	// (0x0009763b) bg_frame_shadow_pane_g4

0xf01c,	// (0x00097643) bg_frame_shadow_pane_g5

0xf024,	// (0x0009764b) bg_frame_shadow_pane_g6

0xf02c,	// (0x00097653) bg_frame_shadow_pane_g7

0xc6cd,	// (0x00094cf4) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x00097dca) bg_frame_shadow_pane_g

0x27c2,	// (0x0008ade9) main_video_tele_dialer_pane

0x636b,	// (0x0008e992) aid_size_cell_video_keypad_ParamLimits

0x636b,	// (0x0008e992) aid_size_cell_video_keypad

0x637b,	// (0x0008e9a2) grid_video_dialer_keypad_pane_ParamLimits

0x637b,	// (0x0008e9a2) grid_video_dialer_keypad_pane

0x63af,	// (0x0008e9d6) video_down_pane_cp_ParamLimits

0x63af,	// (0x0008e9d6) video_down_pane_cp

0x63d9,	// (0x0008ea00) cell_video_dialer_keypad_pane_ParamLimits

0x63d9,	// (0x0008ea00) cell_video_dialer_keypad_pane

0xf034,	// (0x0009765b) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x0009765b) bg_button_pane_cp08

0x63ee,	// (0x0008ea15) cell_video_dialer_keypad_pane_g1_ParamLimits

0x63ee,	// (0x0008ea15) cell_video_dialer_keypad_pane_g1

0x5dd3,	// (0x0008e3fa) mup3_rocker2_pane_ParamLimits

0x5dd3,	// (0x0008e3fa) mup3_rocker2_pane

0xc5c0,	// (0x00094be7) mup3_rocker2_pane_g1

0x521e,	// (0x0008d845) main_dialer2_pane

0x27c2,	// (0x0008ade9) main_mp4_pane

0x6443,	// (0x0008ea6a) main_mp4_pane_g1_ParamLimits

0x6443,	// (0x0008ea6a) main_mp4_pane_g1

0x6465,	// (0x0008ea8c) main_mp4_pane_g2_ParamLimits

0x6465,	// (0x0008ea8c) main_mp4_pane_g2

0x6483,	// (0x0008eaaa) main_mp4_pane_g3_ParamLimits

0x6483,	// (0x0008eaaa) main_mp4_pane_g3

0x64bc,	// (0x0008eae3) main_mp4_pane_g4_ParamLimits

0x64bc,	// (0x0008eae3) main_mp4_pane_g4

0x64e4,	// (0x0008eb0b) main_mp4_pane_g5_ParamLimits

0x64e4,	// (0x0008eb0b) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x00097dea) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x00097dea) main_mp4_pane_g

0x654c,	// (0x0008eb73) main_mp4_pane_t1_ParamLimits

0x654c,	// (0x0008eb73) main_mp4_pane_t1

0x65ae,	// (0x0008ebd5) main_mp4_pane_t2_ParamLimits

0x65ae,	// (0x0008ebd5) main_mp4_pane_t2

0x6612,	// (0x0008ec39) main_mp4_pane_t3_ParamLimits

0x6612,	// (0x0008ec39) main_mp4_pane_t3

0x6670,	// (0x0008ec97) main_mp4_pane_t4_ParamLimits

0x6670,	// (0x0008ec97) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x00097dfb) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x00097dfb) main_mp4_pane_t

0x66ce,	// (0x0008ecf5) mp4_progress_pane_ParamLimits

0x66ce,	// (0x0008ecf5) mp4_progress_pane

0x6702,	// (0x0008ed29) mp4_rocker_pane_ParamLimits

0x6702,	// (0x0008ed29) mp4_rocker_pane

0x0b1e,	// (0x00089145) mp4_progress_pane_t1

0x0b40,	// (0x00089167) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x00097e04) mp4_progress_pane_t

0x0b62,	// (0x00089189) mup_progress_pane_cp04

0x14e7,	// (0x00089b0e) mp4_rocker_pane_g1

0x27a8,	// (0x0008adcf) aid_cell_size_keypad2_ParamLimits

0x27a8,	// (0x0008adcf) aid_cell_size_keypad2

0x27a8,	// (0x0008adcf) dialer2_ne_pane_ParamLimits

0x27a8,	// (0x0008adcf) dialer2_ne_pane

0x27a8,	// (0x0008adcf) grid_dialer2_keypad_pane_ParamLimits

0x27a8,	// (0x0008adcf) grid_dialer2_keypad_pane

0xe5da,	// (0x00096c01) bg_popup_call_pane_cp07_ParamLimits

0xe5da,	// (0x00096c01) bg_popup_call_pane_cp07

0x6716,	// (0x0008ed3d) dialer2_ne_pane_t1_ParamLimits

0x6716,	// (0x0008ed3d) dialer2_ne_pane_t1

0x673d,	// (0x0008ed64) cell_dialer2_keypad_pane_ParamLimits

0x673d,	// (0x0008ed64) cell_dialer2_keypad_pane

0xe443,	// (0x00096a6a) bg_button_pane_pane_cp04_ParamLimits

0xe443,	// (0x00096a6a) bg_button_pane_pane_cp04

0xc582,	// (0x00094ba9) cell_dialer2_keypad_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) cell_dialer2_keypad_pane_g1

0x31d0,	// (0x0008b7f7) aid_placing_vt_set_content_ParamLimits

0x31d0,	// (0x0008b7f7) aid_placing_vt_set_content

0x31fc,	// (0x0008b823) aid_placing_vt_set_title_ParamLimits

0x31fc,	// (0x0008b823) aid_placing_vt_set_title

0x27c2,	// (0x0008ade9) main_image3_pane

0x6786,	// (0x0008edad) area_side_right_pane_cp01_ParamLimits

0x6786,	// (0x0008edad) area_side_right_pane_cp01

0x67b3,	// (0x0008edda) main_image3_pane_g1_ParamLimits

0x67b3,	// (0x0008edda) main_image3_pane_g1

0x67c1,	// (0x0008ede8) main_image3_pane_g2_ParamLimits

0x67c1,	// (0x0008ede8) main_image3_pane_g2

0x67da,	// (0x0008ee01) main_image3_pane_g3_ParamLimits

0x67da,	// (0x0008ee01) main_image3_pane_g3

0x67f3,	// (0x0008ee1a) main_image3_pane_g4_ParamLimits

0x67f3,	// (0x0008ee1a) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x00097e13) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x00097e13) main_image3_pane_g

0x680c,	// (0x0008ee33) main_image3_pane_t1_ParamLimits

0x680c,	// (0x0008ee33) main_image3_pane_t1

0x6831,	// (0x0008ee58) main_image3_pane_t2_ParamLimits

0x6831,	// (0x0008ee58) main_image3_pane_t2

0x6850,	// (0x0008ee77) main_image3_pane_t3_ParamLimits

0x6850,	// (0x0008ee77) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x00097e1c) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x00097e1c) main_image3_pane_t

0xc574,	// (0x00094b9b) grid_sctrl_middle_pane_cp01_ParamLimits

0xc574,	// (0x00094b9b) grid_sctrl_middle_pane_cp01

0x68b1,	// (0x0008eed8) cell_sctrl_middle_pane_cp01_ParamLimits

0x68b1,	// (0x0008eed8) cell_sctrl_middle_pane_cp01

0x68c2,	// (0x0008eee9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68c2,	// (0x0008eee9) cell_sctrl_middle_pane_cp01_g1

0x27c2,	// (0x0008ade9) main_call4_pane

0x68cf,	// (0x0008eef6) aid_size_button_call4_ParamLimits

0x68cf,	// (0x0008eef6) aid_size_button_call4

0x6905,	// (0x0008ef2c) call4_windows_pane_ParamLimits

0x6905,	// (0x0008ef2c) call4_windows_pane

0x691a,	// (0x0008ef41) grid_call4_button_pane_ParamLimits

0x691a,	// (0x0008ef41) grid_call4_button_pane

0x6948,	// (0x0008ef6f) call4_windows_conf_pane

0x695f,	// (0x0008ef86) popup_call4_audio_first_window_ParamLimits

0x695f,	// (0x0008ef86) popup_call4_audio_first_window

0x69af,	// (0x0008efd6) popup_call4_audio_second_window_ParamLimits

0x69af,	// (0x0008efd6) popup_call4_audio_second_window

0x69c8,	// (0x0008efef) popup_call4_audio_wait_window_ParamLimits

0x69c8,	// (0x0008efef) popup_call4_audio_wait_window

0x69d6,	// (0x0008effd) cell_call4_button_pane_ParamLimits

0x69d6,	// (0x0008effd) cell_call4_button_pane

0x69f9,	// (0x0008f020) bg_button_pane_cp09_ParamLimits

0x69f9,	// (0x0008f020) bg_button_pane_cp09

0x6a05,	// (0x0008f02c) cell_call4_button_pane_g1_ParamLimits

0x6a05,	// (0x0008f02c) cell_call4_button_pane_g1

0x6a12,	// (0x0008f039) cell_call4_button_pane_t1_ParamLimits

0x6a12,	// (0x0008f039) cell_call4_button_pane_t1

0x0bdd,	// (0x00089204) popup_call4_audio_conf_window_ParamLimits

0x0bdd,	// (0x00089204) popup_call4_audio_conf_window

0x5e06,	// (0x0008e42d) mup3_progress_pane_t1_ParamLimits

0x5e25,	// (0x0008e44c) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x0009721c) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x00097cfb) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x00097239) mup_progress_pane_cp03_ParamLimits

0x6254,	// (0x0008e87b) mup3_control_keys_pane_g4_copy1

0x6702,	// (0x0008ed29) mp4_rocker2_pane_ParamLimits

0x6702,	// (0x0008ed29) mp4_rocker2_pane

0x6a56,	// (0x0008f07d) mp4_rocker2_pane_g1

0x6a56,	// (0x0008f07d) mp4_rocker2_pane_g2

0x6a56,	// (0x0008f07d) mp4_rocker2_pane_g3

0x6a56,	// (0x0008f07d) mp4_rocker2_pane_g4

0x6a56,	// (0x0008f07d) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x00097e25) mp4_rocker2_pane_g

0x27c2,	// (0x0008ade9) main_camera4_pane

0x27c2,	// (0x0008ade9) main_video4_pane

0x638b,	// (0x0008e9b2) main_video_tele_dialer_pane_t1_ParamLimits

0x638b,	// (0x0008e9b2) main_video_tele_dialer_pane_t1

0x639d,	// (0x0008e9c4) main_video_tele_dialer_pane_t2_ParamLimits

0x639d,	// (0x0008e9c4) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x00097ddb) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x00097ddb) main_video_tele_dialer_pane_t

0x6a76,	// (0x0008f09d) cam4_autofocus_pane_ParamLimits

0x6a76,	// (0x0008f09d) cam4_autofocus_pane

0x6a90,	// (0x0008f0b7) cam4_image_uncrop_pane_ParamLimits

0x6a90,	// (0x0008f0b7) cam4_image_uncrop_pane

0x6aa7,	// (0x0008f0ce) cam4_indicators_pane_ParamLimits

0x6aa7,	// (0x0008f0ce) cam4_indicators_pane

0x6ac3,	// (0x0008f0ea) main_camera4_pane_g1_ParamLimits

0x6ac3,	// (0x0008f0ea) main_camera4_pane_g1

0x6acf,	// (0x0008f0f6) main_camera4_pane_g2_ParamLimits

0x6acf,	// (0x0008f0f6) main_camera4_pane_g2

0x6acf,	// (0x0008f0f6) main_camera4_pane_g3_ParamLimits

0x6acf,	// (0x0008f0f6) main_camera4_pane_g3

0x6adb,	// (0x0008f102) main_camera4_pane_g4_ParamLimits

0x6adb,	// (0x0008f102) main_camera4_pane_g4

0x6ae7,	// (0x0008f10e) main_camera4_pane_g5_ParamLimits

0x6ae7,	// (0x0008f10e) main_camera4_pane_g5

0x0005,

0xf809,	// (0x00097e30) main_camera4_pane_g_ParamLimits

0xf809,	// (0x00097e30) main_camera4_pane_g

0x6b01,	// (0x0008f128) main_camera4_pane_t1_ParamLimits

0x6b01,	// (0x0008f128) main_camera4_pane_t1

0xac53,	// (0x0009327a) bg_tb_trans_pane_cp06

0x6b51,	// (0x0008f178) cam4_indicators_pane_g1

0x6b62,	// (0x0008f189) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x00097e4b) cam4_indicators_pane_g

0x6b80,	// (0x0008f1a7) cam4_indicators_pane_t1

0x6baa,	// (0x0008f1d1) main_video4_pane_g1_ParamLimits

0x6baa,	// (0x0008f1d1) main_video4_pane_g1

0x6bb6,	// (0x0008f1dd) main_video4_pane_g2_ParamLimits

0x6bb6,	// (0x0008f1dd) main_video4_pane_g2

0x6bc2,	// (0x0008f1e9) main_video4_pane_g3_ParamLimits

0x6bc2,	// (0x0008f1e9) main_video4_pane_g3

0x6bce,	// (0x0008f1f5) main_video4_pane_g4_ParamLimits

0x6bce,	// (0x0008f1f5) main_video4_pane_g4

0x0004,

0xf82b,	// (0x00097e52) main_video4_pane_g_ParamLimits

0xf82b,	// (0x00097e52) main_video4_pane_g

0x6bee,	// (0x0008f215) vid4_indicators_pane_ParamLimits

0x6bee,	// (0x0008f215) vid4_indicators_pane

0x6c0d,	// (0x0008f234) video4_image_uncrop_cif_pane_ParamLimits

0x6c0d,	// (0x0008f234) video4_image_uncrop_cif_pane

0x6c1c,	// (0x0008f243) video4_image_uncrop_nhd_pane_ParamLimits

0x6c1c,	// (0x0008f243) video4_image_uncrop_nhd_pane

0x6a90,	// (0x0008f0b7) video4_image_uncrop_vga_pane_ParamLimits

0x6a90,	// (0x0008f0b7) video4_image_uncrop_vga_pane

0x5210,	// (0x0008d837) bg_tb_trans_pane_cp07

0x6c33,	// (0x0008f25a) vid4_indicators_pane_g1

0x6c47,	// (0x0008f26e) vid4_indicators_pane_g2

0x6c5b,	// (0x0008f282) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x00097e5d) vid4_indicators_pane_g

0x6c8a,	// (0x0008f2b1) vid4_indicators_pane_t1

0x6ca1,	// (0x0008f2c8) cam4_autofocus_pane_g1

0x6ca9,	// (0x0008f2d0) cam4_autofocus_pane_g2

0x6cb1,	// (0x0008f2d8) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x00097e68) cam4_autofocus_pane_g

0x6cb9,	// (0x0008f2e0) cam4_autofocus_pane_g3_copy1

0x63bd,	// (0x0008e9e4) video_down_pane_cp_t1

0x63cb,	// (0x0008e9f2) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x00097de0) video_down_pane_cp_t

0x27a8,	// (0x0008adcf) popup_vitu2_window_ParamLimits

0x27a8,	// (0x0008adcf) popup_vitu2_window

0x6cc1,	// (0x0008f2e8) aid_size_cell2_itu2_ParamLimits

0x6cc1,	// (0x0008f2e8) aid_size_cell2_itu2

0x6ce3,	// (0x0008f30a) aid_size_cell_itu2_ParamLimits

0x6ce3,	// (0x0008f30a) aid_size_cell_itu2

0x6d27,	// (0x0008f34e) bg_popup_window_pane_cp09_ParamLimits

0x6d27,	// (0x0008f34e) bg_popup_window_pane_cp09

0x6d35,	// (0x0008f35c) field_vitu2_entry_pane_ParamLimits

0x6d35,	// (0x0008f35c) field_vitu2_entry_pane

0x6d55,	// (0x0008f37c) grid_vitu2_function_pane_ParamLimits

0x6d55,	// (0x0008f37c) grid_vitu2_function_pane

0x6d99,	// (0x0008f3c0) grid_vitu2_itu_pane_ParamLimits

0x6d99,	// (0x0008f3c0) grid_vitu2_itu_pane

0x6e11,	// (0x0008f438) cell_vitu2_itu_pane_ParamLimits

0x6e11,	// (0x0008f438) cell_vitu2_itu_pane

0x6e2a,	// (0x0008f451) cell_vitu2_function_pane_ParamLimits

0x6e2a,	// (0x0008f451) cell_vitu2_function_pane

0x0ce6,	// (0x0008930d) bg_popup_call_pane_cp08_ParamLimits

0x0ce6,	// (0x0008930d) bg_popup_call_pane_cp08

0x0cfd,	// (0x00089324) field_vitu2_entry_pane_g1

0x0d09,	// (0x00089330) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x00097e6f) field_vitu2_entry_pane_g

0x6e6b,	// (0x0008f492) field_vitu2_entry_pane_t1_ParamLimits

0x6e6b,	// (0x0008f492) field_vitu2_entry_pane_t1

0x0175,	// (0x0008879c) field_vitu2_entry_pane_t2_ParamLimits

0x0175,	// (0x0008879c) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x00097e76) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x00097e76) field_vitu2_entry_pane_t

0x554c,	// (0x0008db73) bg_button_pane_cp010_ParamLimits

0x554c,	// (0x0008db73) bg_button_pane_cp010

0x6e9d,	// (0x0008f4c4) cell_vitu2_itu_pane_g1

0x6ec3,	// (0x0008f4ea) cell_vitu2_itu_pane_t1_ParamLimits

0x6ec3,	// (0x0008f4ea) cell_vitu2_itu_pane_t1

0x2419,	// (0x0008aa40) cell_vitu2_itu_pane_t2_ParamLimits

0x2419,	// (0x0008aa40) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x00097e80) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x00097e80) cell_vitu2_itu_pane_t

0x5210,	// (0x0008d837) bg_button_pane_cp011

0x6f0f,	// (0x0008f536) cell_vitu2_function_pane_g1

0x27c2,	// (0x0008ade9) main_myfav_hc_pane

0x6892,	// (0x0008eeb9) popup_image3_note_pane_ParamLimits

0x6892,	// (0x0008eeb9) popup_image3_note_pane

0x68a0,	// (0x0008eec7) popup_image3_tool_bar_pane_ParamLimits

0x68a0,	// (0x0008eec7) popup_image3_tool_bar_pane

0x248f,	// (0x0008aab6) cell_vitu2_itu_pane_t3_ParamLimits

0x248f,	// (0x0008aab6) cell_vitu2_itu_pane_t3

0xac16,	// (0x0009323d) bg_popup_trans_pane

0x0d1d,	// (0x00089344) grid_image3_tool_bar_pane

0x0d27,	// (0x0008934e) bg_popup_trans_pane_g1

0xca10,	// (0x00095037) bg_popup_trans_pane_g2

0x0d2f,	// (0x00089356) bg_popup_trans_pane_g3

0x0d37,	// (0x0008935e) bg_popup_trans_pane_g4

0x0d3f,	// (0x00089366) bg_popup_trans_pane_g5

0x0d47,	// (0x0008936e) bg_popup_trans_pane_g6

0x0d4f,	// (0x00089376) bg_popup_trans_pane_g7

0x0d57,	// (0x0008937e) bg_popup_trans_pane_g8

0xc9f0,	// (0x00095017) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x00097e87) bg_popup_trans_pane_g

0x0d5f,	// (0x00089386) cell_image3_tool_bar_pane_ParamLimits

0x0d5f,	// (0x00089386) cell_image3_tool_bar_pane

0xc5c0,	// (0x00094be7) cell_image3_tool_bar_pane_g1

0xac16,	// (0x0009323d) bg_popup_trans_pane_cp1

0x0d73,	// (0x0008939a) popup_image3_note_pane_t1

0x0d81,	// (0x000893a8) popup_image3_note_pane_t2

0x0d8f,	// (0x000893b6) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x00097e9a) popup_image3_note_pane_t

0x0d9d,	// (0x000893c4) popup_image3_note_pane_t3_copy1

0x6f23,	// (0x0008f54a) bg_myfav_hc_instruction_pane_ParamLimits

0x6f23,	// (0x0008f54a) bg_myfav_hc_instruction_pane

0x6f3b,	// (0x0008f562) cell_myfav_contact_pane_ParamLimits

0x6f3b,	// (0x0008f562) cell_myfav_contact_pane

0x6f55,	// (0x0008f57c) cell_myfav_contact_pane_cp1_ParamLimits

0x6f55,	// (0x0008f57c) cell_myfav_contact_pane_cp1

0x6f6d,	// (0x0008f594) cell_myfav_contact_pane_cp2_ParamLimits

0x6f6d,	// (0x0008f594) cell_myfav_contact_pane_cp2

0x6f85,	// (0x0008f5ac) cell_myfav_contact_pane_cp3_ParamLimits

0x6f85,	// (0x0008f5ac) cell_myfav_contact_pane_cp3

0x6f9c,	// (0x0008f5c3) cell_myfav_contact_pane_cp4_ParamLimits

0x6f9c,	// (0x0008f5c3) cell_myfav_contact_pane_cp4

0x6fb2,	// (0x0008f5d9) cell_myfav_contact_pane_cp5_ParamLimits

0x6fb2,	// (0x0008f5d9) cell_myfav_contact_pane_cp5

0x6fc6,	// (0x0008f5ed) cell_myfav_contact_pane_cp6_ParamLimits

0x6fc6,	// (0x0008f5ed) cell_myfav_contact_pane_cp6

0x6fda,	// (0x0008f601) cell_myfav_contact_pane_cp7_ParamLimits

0x6fda,	// (0x0008f601) cell_myfav_contact_pane_cp7

0x0dab,	// (0x000893d2) listscroll_gen_pane_cp05

0x6ff2,	// (0x0008f619) main_myfav_hc_pane_g1_ParamLimits

0x6ff2,	// (0x0008f619) main_myfav_hc_pane_g1

0x7008,	// (0x0008f62f) main_myfav_hc_pane_g2_ParamLimits

0x7008,	// (0x0008f62f) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x00097ea1) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x00097ea1) main_myfav_hc_pane_g

0x7036,	// (0x0008f65d) main_myfav_hc_pane_t1_ParamLimits

0x7036,	// (0x0008f65d) main_myfav_hc_pane_t1

0x0db4,	// (0x000893db) main_myfav_hc_pane_t2_ParamLimits

0x0db4,	// (0x000893db) main_myfav_hc_pane_t2

0x0dc6,	// (0x000893ed) main_myfav_hc_pane_t3_ParamLimits

0x0dc6,	// (0x000893ed) main_myfav_hc_pane_t3

0x704d,	// (0x0008f674) main_myfav_hc_pane_t4_ParamLimits

0x704d,	// (0x0008f674) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x00097ea8) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x00097ea8) main_myfav_hc_pane_t

0xc5c0,	// (0x00094be7) bg_myfav_hc_instruction_pane_g1

0x0dd8,	// (0x000893ff) cell_myfav_contact_pane_g1_ParamLimits

0x0dd8,	// (0x000893ff) cell_myfav_contact_pane_g1

0x0dd8,	// (0x000893ff) cell_myfav_contact_pane_g2_ParamLimits

0x0dd8,	// (0x000893ff) cell_myfav_contact_pane_g2

0x0de4,	// (0x0008940b) cell_myfav_contact_pane_g3_ParamLimits

0x0de4,	// (0x0008940b) cell_myfav_contact_pane_g3

0xc590,	// (0x00094bb7) cell_myfav_contact_pane_g4_ParamLimits

0xc590,	// (0x00094bb7) cell_myfav_contact_pane_g4

0x0df1,	// (0x00089418) cell_myfav_contact_pane_g5_ParamLimits

0x0df1,	// (0x00089418) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x00097eb3) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x00097eb3) cell_myfav_contact_pane_g

0x701e,	// (0x0008f645) main_myfav_hc_pane_g3_ParamLimits

0x701e,	// (0x0008f645) main_myfav_hc_pane_g3

0x26b2,	// (0x0008acd9) popup_adpt_find_window

0x7077,	// (0x0008f69e) afind_page_pane_ParamLimits

0x7077,	// (0x0008f69e) afind_page_pane

0x7084,	// (0x0008f6ab) aid_size_cell_afind_ParamLimits

0x7084,	// (0x0008f6ab) aid_size_cell_afind

0x709e,	// (0x0008f6c5) bg_popup_sub_pane_cp09_ParamLimits

0x709e,	// (0x0008f6c5) bg_popup_sub_pane_cp09

0x70ab,	// (0x0008f6d2) find_pane_cp01_ParamLimits

0x70ab,	// (0x0008f6d2) find_pane_cp01

0x0dfd,	// (0x00089424) grid_afind_control_pane_ParamLimits

0x0dfd,	// (0x00089424) grid_afind_control_pane

0x70b8,	// (0x0008f6df) grid_afind_pane_ParamLimits

0x70b8,	// (0x0008f6df) grid_afind_pane

0x70d4,	// (0x0008f6fb) cell_afind_pane_ParamLimits

0x70d4,	// (0x0008f6fb) cell_afind_pane

0xc5c0,	// (0x00094be7) afind_page_pane_g1

0x711c,	// (0x0008f743) afind_page_pane_g2

0x7124,	// (0x0008f74b) afind_page_pane_g3

0x0002,

0xf897,	// (0x00097ebe) afind_page_pane_g

0x712c,	// (0x0008f753) afind_page_pane_t1

0x0e23,	// (0x0008944a) cell_afind_grid_control_pane_ParamLimits

0x0e23,	// (0x0008944a) cell_afind_grid_control_pane

0x0e32,	// (0x00089459) bg_button_pane_cp69_ParamLimits

0x0e32,	// (0x00089459) bg_button_pane_cp69

0x713a,	// (0x0008f761) cell_afind_pane_g1_ParamLimits

0x713a,	// (0x0008f761) cell_afind_pane_g1

0x7147,	// (0x0008f76e) cell_afind_pane_t1_ParamLimits

0x7147,	// (0x0008f76e) cell_afind_pane_t1

0x0e3e,	// (0x00089465) bg_button_pane_cp72

0x0e46,	// (0x0008946d) cell_afind_grid_control_pane_g1

0x4dbf,	// (0x0008d3e6) aid_image_placing_area_ParamLimits

0x4dbf,	// (0x0008d3e6) aid_image_placing_area

0xc582,	// (0x00094ba9) field_vitu_entry_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) field_vitu_entry_pane_g1

0xc582,	// (0x00094ba9) field_vitu_entry_pane_g2_ParamLimits

0xc582,	// (0x00094ba9) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000977e3) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000977e3) field_vitu_entry_pane_g

0xeefa,	// (0x00097521) cell_vitu_itu_pane_g1_ParamLimits

0xee7d,	// (0x000974a4) cell_vitu_itu_pane_t3_ParamLimits

0xee7d,	// (0x000974a4) cell_vitu_itu_pane_t3

0x0b1e,	// (0x00089145) mp4_progress_pane_t1_ParamLimits

0x0b40,	// (0x00089167) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x00097e04) mp4_progress_pane_t_ParamLimits

0x0b62,	// (0x00089189) mup_progress_pane_cp04_ParamLimits

0x7061,	// (0x0008f688) main_myfav_hc_pane_t5_ParamLimits

0x7061,	// (0x0008f688) main_myfav_hc_pane_t5

0x2411,	// (0x0008aa38) aid_zoom_text_primary

0x26b2,	// (0x0008acd9) popup_adpt_find_window_ParamLimits

0x5210,	// (0x0008d837) main_cam_set_pane

0x6ab5,	// (0x0008f0dc) cam4_zoom_pane_ParamLimits

0x6ab5,	// (0x0008f0dc) cam4_zoom_pane

0x7159,	// (0x0008f780) main_cam_set_pane_g1_ParamLimits

0x7159,	// (0x0008f780) main_cam_set_pane_g1

0x7167,	// (0x0008f78e) main_cam_set_pane_g2_ParamLimits

0x7167,	// (0x0008f78e) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x00097ec5) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x00097ec5) main_cam_set_pane_g

0x7173,	// (0x0008f79a) main_cam_set_pane_t1_ParamLimits

0x7173,	// (0x0008f79a) main_cam_set_pane_t1

0x718f,	// (0x0008f7b6) main_cset_listscroll_pane_ParamLimits

0x718f,	// (0x0008f7b6) main_cset_listscroll_pane

0x71c1,	// (0x0008f7e8) main_cset_slider_pane_ParamLimits

0x71c1,	// (0x0008f7e8) main_cset_slider_pane

0x0e57,	// (0x0008947e) main_cset_list_pane_ParamLimits

0x0e57,	// (0x0008947e) main_cset_list_pane

0x0e67,	// (0x0008948e) scroll_pane_cp028

0x71e0,	// (0x0008f807) aid_area_touch_slider

0x71fc,	// (0x0008f823) cset_slider_pane

0x721f,	// (0x0008f846) main_cset_slider_pane_g1

0x7234,	// (0x0008f85b) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x00097eca) main_cset_slider_pane_g

0x0ea0,	// (0x000894c7) main_cset_slider_pane_t1

0x72f6,	// (0x0008f91d) main_cset_slider_pane_t2

0x7310,	// (0x0008f937) main_cset_slider_pane_t3

0x732a,	// (0x0008f951) main_cset_slider_pane_t4

0x7344,	// (0x0008f96b) main_cset_slider_pane_t5

0x7362,	// (0x0008f989) main_cset_slider_pane_t6

0x7379,	// (0x0008f9a0) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x00097eef) main_cset_slider_pane_t

0x7485,	// (0x0008faac) cset_list_set_pane_ParamLimits

0x7485,	// (0x0008faac) cset_list_set_pane

0x0f3a,	// (0x00089561) aid_position_infowindow_above

0x0f42,	// (0x00089569) aid_position_infowindow_below

0x0f4a,	// (0x00089571) cset_list_set_pane_g1_ParamLimits

0x0f4a,	// (0x00089571) cset_list_set_pane_g1

0x0192,	// (0x000887b9) cset_list_set_pane_g3_ParamLimits

0x0192,	// (0x000887b9) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x00097f0e) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x00097f0e) cset_list_set_pane_g

0x01a1,	// (0x000887c8) cset_list_set_pane_t1_ParamLimits

0x01a1,	// (0x000887c8) cset_list_set_pane_t1

0xc29e,	// (0x000948c5) list_highlight_pane_cp021_ParamLimits

0xc29e,	// (0x000948c5) list_highlight_pane_cp021

0xd342,	// (0x00095969) cset_slider_pane_g1

0xd354,	// (0x0009597b) cset_slider_pane_g2

0xd34b,	// (0x00095972) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x00097f13) cset_slider_pane_g

0x749b,	// (0x0008fac2) aid_area_touch_cam4_zoom

0x74a3,	// (0x0008faca) cam4_zoom_cont_pane

0x74ab,	// (0x0008fad2) cam4_zoom_pane_g1

0x74b3,	// (0x0008fada) cam4_zoom_pane_g2

0x74bb,	// (0x0008fae2) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x00097f1a) cam4_zoom_pane_g

0x74c3,	// (0x0008faea) cam4_zoom_cont_pane_g1

0x74cc,	// (0x0008faf3) cam4_zoom_cont_pane_g2

0x74d5,	// (0x0008fafc) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x00097f21) cam4_zoom_cont_pane_g

0x68e9,	// (0x0008ef10) call4_image_pane_ParamLimits

0x68e9,	// (0x0008ef10) call4_image_pane

0x6948,	// (0x0008ef6f) call4_windows_conf_pane_ParamLimits

0x698d,	// (0x0008efb4) popup_call4_audio_in_window_ParamLimits

0x698d,	// (0x0008efb4) popup_call4_audio_in_window

0xac16,	// (0x0009323d) bg_popup_call2_act_pane_cp02

0x0bd5,	// (0x000891fc) call4_list_conf_pane

0xc5c0,	// (0x00094be7) call4_image_pane_g1

0xc5c0,	// (0x00094be7) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000976d6) call4_image_pane_g

0x0f91,	// (0x000895b8) list_single_graphic_popup_conf4_pane_ParamLimits

0x0f91,	// (0x000895b8) list_single_graphic_popup_conf4_pane

0xac16,	// (0x0009323d) list_highlight_pane_cp022

0x0fa4,	// (0x000895cb) list_single_graphic_popup_conf4_pane_g1

0xcf36,	// (0x0009555d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x00097f28) list_single_graphic_popup_conf4_pane_g

0x0fac,	// (0x000895d3) list_single_graphic_popup_conf4_pane_t1

0x3360,	// (0x0008b987) popup_vtel_slider_window_ParamLimits

0x3360,	// (0x0008b987) popup_vtel_slider_window

0x0b75,	// (0x0008919c) dialer2_ne_pane_t2_ParamLimits

0x0b75,	// (0x0008919c) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x00097e09) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x00097e09) dialer2_ne_pane_t

0xc29e,	// (0x000948c5) bg_popup_sub_pane_cp010_ParamLimits

0xc29e,	// (0x000948c5) bg_popup_sub_pane_cp010

0x74de,	// (0x0008fb05) popup_vtel_slider_window_g1_ParamLimits

0x74de,	// (0x0008fb05) popup_vtel_slider_window_g1

0x74ea,	// (0x0008fb11) popup_vtel_slider_window_g2_ParamLimits

0x74ea,	// (0x0008fb11) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x00097f2d) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x00097f2d) popup_vtel_slider_window_g

0x7532,	// (0x0008fb59) vtel_slider_pane_ParamLimits

0x7532,	// (0x0008fb59) vtel_slider_pane

0x7541,	// (0x0008fb68) vtel_slider_pane_g1_ParamLimits

0x7541,	// (0x0008fb68) vtel_slider_pane_g1

0x754e,	// (0x0008fb75) vtel_slider_pane_g2_ParamLimits

0x754e,	// (0x0008fb75) vtel_slider_pane_g2

0x755b,	// (0x0008fb82) vtel_slider_pane_g3_ParamLimits

0x755b,	// (0x0008fb82) vtel_slider_pane_g3

0x7541,	// (0x0008fb68) vtel_slider_pane_g4_ParamLimits

0x7541,	// (0x0008fb68) vtel_slider_pane_g4

0x7568,	// (0x0008fb8f) vtel_slider_pane_g5_ParamLimits

0x7568,	// (0x0008fb8f) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x00097f36) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x00097f36) vtel_slider_pane_g

0x5210,	// (0x0008d837) main_gallery2_pane

0x6d09,	// (0x0008f330) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d09,	// (0x0008f330) aid_size_row_itut2_dropdow_list

0x6d77,	// (0x0008f39e) grid_vitu2_function_top_pane_ParamLimits

0x6d77,	// (0x0008f39e) grid_vitu2_function_top_pane

0x6dd1,	// (0x0008f3f8) popup_vitu2_dropdown_list_window_ParamLimits

0x6dd1,	// (0x0008f3f8) popup_vitu2_dropdown_list_window

0x6def,	// (0x0008f416) popup_vitu2_match_list_window

0x7575,	// (0x0008fb9c) cell_vitu2_function_top_pane_ParamLimits

0x7575,	// (0x0008fb9c) cell_vitu2_function_top_pane

0x758f,	// (0x0008fbb6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x758f,	// (0x0008fbb6) cell_vitu2_function_top_pane_cp01

0x75ab,	// (0x0008fbd2) cell_vitu2_function_top_wide_pane_ParamLimits

0x75ab,	// (0x0008fbd2) cell_vitu2_function_top_wide_pane

0x5210,	// (0x0008d837) bg_button_pane_cp012

0x75c9,	// (0x0008fbf0) cell_vitu2_function_top_pane_g1

0x75dd,	// (0x0008fc04) bg_button_pane_cp013_ParamLimits

0x75dd,	// (0x0008fc04) bg_button_pane_cp013

0x75f9,	// (0x0008fc20) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x75f9,	// (0x0008fc20) cell_vitu2_function_top_wide_pane_g1

0x27a8,	// (0x0008adcf) bg_popup_sub_pane_cp20

0x7611,	// (0x0008fc38) list_vitu2_match_list_pane

0x0d27,	// (0x0008934e) bg_popup_sub_pane_cp20_g1

0x0d2f,	// (0x00089356) bg_popup_sub_pane_cp20_g2

0xca10,	// (0x00095037) bg_popup_sub_pane_cp20_g3

0x0d37,	// (0x0008935e) bg_popup_sub_pane_cp20_g4

0xc9f0,	// (0x00095017) bg_popup_sub_pane_cp20_g5

0x0fde,	// (0x00089605) bg_popup_sub_pane_cp20_g6

0x0d47,	// (0x0008936e) bg_popup_sub_pane_cp20_g7

0x0d4f,	// (0x00089376) bg_popup_sub_pane_cp20_g8

0x0d57,	// (0x0008937e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x00097f41) bg_popup_sub_pane_cp20_g

0x7629,	// (0x0008fc50) list_vitu2_match_list_item_pane_ParamLimits

0x7629,	// (0x0008fc50) list_vitu2_match_list_item_pane

0x763b,	// (0x0008fc62) list_vitu2_match_list_item_pane_t1

0x27c2,	// (0x0008ade9) bg_popup_sub_pane_cp21

0xc7d0,	// (0x00094df7) grid_vitu2_dropdown_list_pane

0x7649,	// (0x0008fc70) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7649,	// (0x0008fc70) cell_vitu2_dropdown_list_char_pane

0x766b,	// (0x0008fc92) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x766b,	// (0x0008fc92) cell_vitu2_dropdown_list_ctrl_pane

0x1018,	// (0x0008963f) cell_vitu2_dropdown_list_char_pane_g1

0x100f,	// (0x00089636) cell_vitu2_dropdown_list_char_pane_g2

0x1006,	// (0x0008962d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x00097f54) cell_vitu2_dropdown_list_char_pane_g

0x7693,	// (0x0008fcba) cell_vitu2_dropdown_list_char_pane_t1

0x76a1,	// (0x0008fcc8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x76a1,	// (0x0008fcc8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x76ae,	// (0x0008fcd5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x76ae,	// (0x0008fcd5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x76bb,	// (0x0008fce2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x76bb,	// (0x0008fce2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x76c8,	// (0x0008fcef) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x76c8,	// (0x0008fcef) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac53,	// (0x0009327a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac53,	// (0x0009327a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x00097f5b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x00097f5b) cell_vitu2_dropdown_list_ctrl_pane_g

0x76e4,	// (0x0008fd0b) aid_size_cell_gallery2_ParamLimits

0x76e4,	// (0x0008fd0b) aid_size_cell_gallery2

0x76fe,	// (0x0008fd25) grid_gallery2_pane_ParamLimits

0x76fe,	// (0x0008fd25) grid_gallery2_pane

0x7715,	// (0x0008fd3c) scroll_pane_cp029_ParamLimits

0x7715,	// (0x0008fd3c) scroll_pane_cp029

0x7725,	// (0x0008fd4c) cell_gallery2_pane_ParamLimits

0x7725,	// (0x0008fd4c) cell_gallery2_pane

0x1021,	// (0x00089648) cell_gallery2_pane_g2

0x1139,	// (0x00089760) cell_gallery2_pane_g3

0x1029,	// (0x00089650) cell_gallery2_pane_g4

0x1031,	// (0x00089658) cell_gallery2_pane_g5

0xc7d0,	// (0x00094df7) grid_highlight_pane_cp10

0x6def,	// (0x0008f416) popup_vitu2_match_list_window_ParamLimits

0x6e01,	// (0x0008f428) popup_vitu2_query_window_ParamLimits

0x6e01,	// (0x0008f428) popup_vitu2_query_window

0x27c2,	// (0x0008ade9) bg_vitu2_candi_button_pane

0x1018,	// (0x0008963f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x100f,	// (0x00089636) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1006,	// (0x0008962d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x777a,	// (0x0008fda1) bg_button_pane_cp015

0x778f,	// (0x0008fdb6) bg_button_pane_cp016

0x779b,	// (0x0008fdc2) bg_button_pane_cp017

0xd3b2,	// (0x000959d9) bg_popup_sub_pane_cp22

0x1039,	// (0x00089660) popup_vitu2_query_window_g1

0x77db,	// (0x0008fe02) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x00097f66) popup_vitu2_query_window_g

0x77ff,	// (0x0008fe26) popup_vitu2_query_window_t1_ParamLimits

0x77ff,	// (0x0008fe26) popup_vitu2_query_window_t1

0x7832,	// (0x0008fe59) popup_vitu2_query_window_t2_ParamLimits

0x7832,	// (0x0008fe59) popup_vitu2_query_window_t2

0x7844,	// (0x0008fe6b) popup_vitu2_query_window_t3_ParamLimits

0x7844,	// (0x0008fe6b) popup_vitu2_query_window_t3

0x786c,	// (0x0008fe93) popup_vitu2_query_window_t4_ParamLimits

0x786c,	// (0x0008fe93) popup_vitu2_query_window_t4

0x7880,	// (0x0008fea7) popup_vitu2_query_window_t5_ParamLimits

0x7880,	// (0x0008fea7) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x00097f6d) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x00097f6d) popup_vitu2_query_window_t

0x0e4f,	// (0x00089476) main_cset_text_pane

0x71e0,	// (0x0008f807) aid_area_touch_slider_ParamLimits

0x71fc,	// (0x0008f823) cset_slider_pane_ParamLimits

0x721f,	// (0x0008f846) main_cset_slider_pane_g1_ParamLimits

0x7234,	// (0x0008f85b) main_cset_slider_pane_g2_ParamLimits

0x0e70,	// (0x00089497) main_cset_slider_pane_g3_ParamLimits

0x0e70,	// (0x00089497) main_cset_slider_pane_g3

0x7249,	// (0x0008f870) main_cset_slider_pane_g4_ParamLimits

0x7249,	// (0x0008f870) main_cset_slider_pane_g4

0x7258,	// (0x0008f87f) main_cset_slider_pane_g5_ParamLimits

0x7258,	// (0x0008f87f) main_cset_slider_pane_g5

0x7266,	// (0x0008f88d) main_cset_slider_pane_g6_ParamLimits

0x7266,	// (0x0008f88d) main_cset_slider_pane_g6

0xf8a3,	// (0x00097eca) main_cset_slider_pane_g_ParamLimits

0x0ea0,	// (0x000894c7) main_cset_slider_pane_t1_ParamLimits

0x72f6,	// (0x0008f91d) main_cset_slider_pane_t2_ParamLimits

0x7310,	// (0x0008f937) main_cset_slider_pane_t3_ParamLimits

0x732a,	// (0x0008f951) main_cset_slider_pane_t4_ParamLimits

0x7344,	// (0x0008f96b) main_cset_slider_pane_t5_ParamLimits

0x7362,	// (0x0008f989) main_cset_slider_pane_t6_ParamLimits

0x7379,	// (0x0008f9a0) main_cset_slider_pane_t7_ParamLimits

0x73a7,	// (0x0008f9ce) main_cset_slider_pane_t8_ParamLimits

0x73a7,	// (0x0008f9ce) main_cset_slider_pane_t8

0x73cf,	// (0x0008f9f6) main_cset_slider_pane_t9_ParamLimits

0x73cf,	// (0x0008f9f6) main_cset_slider_pane_t9

0x73f7,	// (0x0008fa1e) main_cset_slider_pane_t10_ParamLimits

0x73f7,	// (0x0008fa1e) main_cset_slider_pane_t10

0x741f,	// (0x0008fa46) main_cset_slider_pane_t11_ParamLimits

0x741f,	// (0x0008fa46) main_cset_slider_pane_t11

0x7449,	// (0x0008fa70) main_cset_slider_pane_t12_ParamLimits

0x7449,	// (0x0008fa70) main_cset_slider_pane_t12

0x7466,	// (0x0008fa8d) main_cset_slider_pane_t13_ParamLimits

0x7466,	// (0x0008fa8d) main_cset_slider_pane_t13

0xf8c8,	// (0x00097eef) main_cset_slider_pane_t_ParamLimits

0xac16,	// (0x0009323d) bg_popup_sub_pane_cp011

0x1045,	// (0x0008966c) main_cset_text_pane_g1

0x104d,	// (0x00089674) main_cset_text_pane_t1

0x105b,	// (0x00089682) main_cset_text_pane_t2

0x1163,	// (0x0008978a) main_cset_text_pane_t3

0x1171,	// (0x00089798) main_cset_text_pane_t4

0x117f,	// (0x000897a6) main_cset_text_pane_t5

0x118d,	// (0x000897b4) main_cset_text_pane_t6

0x119b,	// (0x000897c2) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x00097f7c) main_cset_text_pane_t

0x27c2,	// (0x0008ade9) main_cam4_burst_pane

0x27c2,	// (0x0008ade9) main_cam5_pane

0x0e11,	// (0x00089438) bg_button_pane_cp019

0x0e1a,	// (0x00089441) bg_button_pane_cp020

0x0e7c,	// (0x000894a3) main_cset_slider_pane_g7_ParamLimits

0x0e7c,	// (0x000894a3) main_cset_slider_pane_g7

0x0e88,	// (0x000894af) main_cset_slider_pane_g8_ParamLimits

0x0e88,	// (0x000894af) main_cset_slider_pane_g8

0x727a,	// (0x0008f8a1) main_cset_slider_pane_g9_ParamLimits

0x727a,	// (0x0008f8a1) main_cset_slider_pane_g9

0x7286,	// (0x0008f8ad) main_cset_slider_pane_g10_ParamLimits

0x7286,	// (0x0008f8ad) main_cset_slider_pane_g10

0x7292,	// (0x0008f8b9) main_cset_slider_pane_g11_ParamLimits

0x7292,	// (0x0008f8b9) main_cset_slider_pane_g11

0x729e,	// (0x0008f8c5) main_cset_slider_pane_g12_ParamLimits

0x729e,	// (0x0008f8c5) main_cset_slider_pane_g12

0x72aa,	// (0x0008f8d1) main_cset_slider_pane_g13_ParamLimits

0x72aa,	// (0x0008f8d1) main_cset_slider_pane_g13

0x72b6,	// (0x0008f8dd) main_cset_slider_pane_g14_ParamLimits

0x72b6,	// (0x0008f8dd) main_cset_slider_pane_g14

0x72c2,	// (0x0008f8e9) main_cset_slider_pane_g15_ParamLimits

0x72c2,	// (0x0008f8e9) main_cset_slider_pane_g15

0x0ec8,	// (0x000894ef) main_cset_slider_pane_t14_ParamLimits

0x0ec8,	// (0x000894ef) main_cset_slider_pane_t14

0x0f01,	// (0x00089528) main_cset_slider_pane_t15_ParamLimits

0x0f01,	// (0x00089528) main_cset_slider_pane_t15

0x78ea,	// (0x0008ff11) aid_cam4_burst_size_cell_ParamLimits

0x78ea,	// (0x0008ff11) aid_cam4_burst_size_cell

0x7906,	// (0x0008ff2d) grid_cam4_burst_pane_ParamLimits

0x7906,	// (0x0008ff2d) grid_cam4_burst_pane

0x7936,	// (0x0008ff5d) linegrid_cam4_burst_pane_ParamLimits

0x7936,	// (0x0008ff5d) linegrid_cam4_burst_pane

0x7956,	// (0x0008ff7d) scroll_pane_cp30_ParamLimits

0x7956,	// (0x0008ff7d) scroll_pane_cp30

0x7962,	// (0x0008ff89) cell_cam4_burst_pane_ParamLimits

0x7962,	// (0x0008ff89) cell_cam4_burst_pane

0x11b5,	// (0x000897dc) linegrid_cam4_burst_pane_g1_ParamLimits

0x11b5,	// (0x000897dc) linegrid_cam4_burst_pane_g1

0x799e,	// (0x0008ffc5) linegrid_cam4_burst_pane_g2_ParamLimits

0x799e,	// (0x0008ffc5) linegrid_cam4_burst_pane_g2

0x11c2,	// (0x000897e9) linegrid_cam4_burst_pane_g3_ParamLimits

0x11c2,	// (0x000897e9) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x00097f8b) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x00097f8b) linegrid_cam4_burst_pane_g

0x79af,	// (0x0008ffd6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x79af,	// (0x0008ffd6) linegrid_cam4_burst_pane_g3_copy1

0x11cf,	// (0x000897f6) linegrid_cam4_burst_pane_g4_ParamLimits

0x11cf,	// (0x000897f6) linegrid_cam4_burst_pane_g4

0x79c9,	// (0x0008fff0) linegrid_cam4_burst_pane_g5_ParamLimits

0x79c9,	// (0x0008fff0) linegrid_cam4_burst_pane_g5

0x79da,	// (0x00090001) linegrid_cam4_burst_pane_g6_ParamLimits

0x79da,	// (0x00090001) linegrid_cam4_burst_pane_g6

0x11dc,	// (0x00089803) linegrid_cam4_burst_pane_g7_ParamLimits

0x11dc,	// (0x00089803) linegrid_cam4_burst_pane_g7

0x79eb,	// (0x00090012) cell_cam4_burst_pane_g1

0x11f5,	// (0x0008981c) main_cam5_pane_t1_ParamLimits

0x11f5,	// (0x0008981c) main_cam5_pane_t1

0x1207,	// (0x0008982e) main_cam5_pane_t2_ParamLimits

0x1207,	// (0x0008982e) main_cam5_pane_t2

0x1219,	// (0x00089840) main_cam5_pane_t3_ParamLimits

0x1219,	// (0x00089840) main_cam5_pane_t3

0x122b,	// (0x00089852) main_cam5_pane_t4_ParamLimits

0x122b,	// (0x00089852) main_cam5_pane_t4

0x1243,	// (0x0008986a) main_cam5_pane_t5_ParamLimits

0x1243,	// (0x0008986a) main_cam5_pane_t5

0x1257,	// (0x0008987e) main_cam5_pane_t6_ParamLimits

0x1257,	// (0x0008987e) main_cam5_pane_t6

0x126b,	// (0x00089892) main_cam5_pane_t7_ParamLimits

0x126b,	// (0x00089892) main_cam5_pane_t7

0x127d,	// (0x000898a4) main_cam5_pane_t8_ParamLimits

0x127d,	// (0x000898a4) main_cam5_pane_t8

0x1299,	// (0x000898c0) main_cam5_pane_t9_ParamLimits

0x1299,	// (0x000898c0) main_cam5_pane_t9

0x12ab,	// (0x000898d2) main_cam5_pane_t10_ParamLimits

0x12ab,	// (0x000898d2) main_cam5_pane_t10

0x12bd,	// (0x000898e4) main_cam5_pane_t11_ParamLimits

0x12bd,	// (0x000898e4) main_cam5_pane_t11

0x12cf,	// (0x000898f6) main_cam5_pane_t12_ParamLimits

0x12cf,	// (0x000898f6) main_cam5_pane_t12

0x12e4,	// (0x0008990b) main_cam5_pane_t13_ParamLimits

0x12e4,	// (0x0008990b) main_cam5_pane_t13

0x000c,

0xf970,	// (0x00097f97) main_cam5_pane_t_ParamLimits

0xf970,	// (0x00097f97) main_cam5_pane_t

0x2767,	// (0x0008ad8e) popup_scut_keymap_window_ParamLimits

0x2767,	// (0x0008ad8e) popup_scut_keymap_window

0x79fe,	// (0x00090025) aid_size_cell_brow_shortcut

0xc7d0,	// (0x00094df7) bg_popup_window_pane_cp010

0x7a0a,	// (0x00090031) grid_scut_pane

0x7a16,	// (0x0009003d) cell_scut_pane_ParamLimits

0x7a16,	// (0x0009003d) cell_scut_pane

0x7a2d,	// (0x00090054) cell_scut_pane_g1

0x1301,	// (0x00089928) cell_scut_pane_t1

0x1310,	// (0x00089937) cell_scut_pane_t2

0x7a36,	// (0x0009005d) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x00097fb2) cell_scut_pane_t

0x5a25,	// (0x0008e04c) main_mup3_pane_g8_ParamLimits

0x5a25,	// (0x0008e04c) main_mup3_pane_g8

0x6d17,	// (0x0008f33e) area_vitu2_query_pane_ParamLimits

0x6d17,	// (0x0008f33e) area_vitu2_query_pane

0x77a7,	// (0x0008fdce) input_focus_pane_cp08

0x131f,	// (0x00089946) area_vitu2_query_pane_g1

0x7a44,	// (0x0009006b) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x00097fb9) area_vitu2_query_pane_g

0x7a55,	// (0x0009007c) area_vitu2_query_pane_t1_ParamLimits

0x7a55,	// (0x0009007c) area_vitu2_query_pane_t1

0x7a69,	// (0x00090090) area_vitu2_query_pane_t2_ParamLimits

0x7a69,	// (0x00090090) area_vitu2_query_pane_t2

0x7a7d,	// (0x000900a4) area_vitu2_query_pane_t3_ParamLimits

0x7a7d,	// (0x000900a4) area_vitu2_query_pane_t3

0x01b6,	// (0x000887dd) area_vitu2_query_pane_t4_ParamLimits

0x01b6,	// (0x000887dd) area_vitu2_query_pane_t4

0x01de,	// (0x00088805) area_vitu2_query_pane_t5_ParamLimits

0x01de,	// (0x00088805) area_vitu2_query_pane_t5

0x0206,	// (0x0008882d) area_vitu2_query_pane_t6_ParamLimits

0x0206,	// (0x0008882d) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x00097fbe) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x00097fbe) area_vitu2_query_pane_t

0x778f,	// (0x0008fdb6) bg_button_pane_cp018

0x7aa5,	// (0x000900cc) bg_button_pane_cp021

0x7ab1,	// (0x000900d8) bg_button_pane_cp022

0x7ad4,	// (0x000900fb) input_focus_pane_cp09

0xd072,	// (0x00095699) aid_size_touch_mv_arrow_left

0xd09b,	// (0x000956c2) aid_size_touch_mv_arrow_right

0x72da,	// (0x0008f901) main_cset_slider_pane_g16_ParamLimits

0x72da,	// (0x0008f901) main_cset_slider_pane_g16

0x72e8,	// (0x0008f90f) main_cset_slider_pane_g17_ParamLimits

0x72e8,	// (0x0008f90f) main_cset_slider_pane_g17

0x79eb,	// (0x00090012) cell_cam4_burst_pane_g1_ParamLimits

0xac16,	// (0x0009323d) compa_mode_pane

0x74f6,	// (0x0008fb1d) popup_vtel_slider_window_g3_ParamLimits

0x74f6,	// (0x0008fb1d) popup_vtel_slider_window_g3

0x750a,	// (0x0008fb31) popup_vtel_slider_window_g4_ParamLimits

0x750a,	// (0x0008fb31) popup_vtel_slider_window_g4

0x751e,	// (0x0008fb45) popup_vtel_slider_window_t1_ParamLimits

0x751e,	// (0x0008fb45) popup_vtel_slider_window_t1

0x27c2,	// (0x0008ade9) main_cl_pane

0x52ae,	// (0x0008d8d5) popup_imed_adjust2_window_ParamLimits

0xd3b2,	// (0x000959d9) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x00097441) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x00097450) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x00097450) popup_imed_adjust2_window_g2

0xee35,	// (0x0009745c) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x0009745c) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x00097d3e) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x00097d3e) popup_imed_adjust2_window_g

0xee41,	// (0x00097468) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x00097480) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x00097494) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x000974c1) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x000974d1) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x000974e2) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x00097d45) slider_imed_adjust_pane_g_ParamLimits

0x6a5e,	// (0x0008f085) aid_touch_area_cam4_ParamLimits

0x6a5e,	// (0x0008f085) aid_touch_area_cam4

0x6a6e,	// (0x0008f095) battery_pane_cp01

0x6af5,	// (0x0008f11c) main_camera4_pane_g6_ParamLimits

0x6af5,	// (0x0008f11c) main_camera4_pane_g6

0x6b13,	// (0x0008f13a) main_camera4_pane_t2_ParamLimits

0x6b13,	// (0x0008f13a) main_camera4_pane_t2

0x0001,

0xf816,	// (0x00097e3d) main_camera4_pane_t_ParamLimits

0xf816,	// (0x00097e3d) main_camera4_pane_t

0x6b9a,	// (0x0008f1c1) aid_touch_area_vid4_ParamLimits

0x6b9a,	// (0x0008f1c1) aid_touch_area_vid4

0x6bda,	// (0x0008f201) main_video4_pane_g5_ParamLimits

0x6bda,	// (0x0008f201) main_video4_pane_g5

0x6bfe,	// (0x0008f225) vid4_progress_pane_ParamLimits

0x6bfe,	// (0x0008f225) vid4_progress_pane

0x0e94,	// (0x000894bb) main_cset_slider_pane_g18_ParamLimits

0x0e94,	// (0x000894bb) main_cset_slider_pane_g18

0x11e9,	// (0x00089810) cell_cam4_burst_pane_g2_ParamLimits

0x11e9,	// (0x00089810) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x00097f92) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x00097f92) cell_cam4_burst_pane_g

0x7ae4,	// (0x0009010b) bg_cl_pane_ParamLimits

0x7ae4,	// (0x0009010b) bg_cl_pane

0x7af0,	// (0x00090117) cl_header_pane_ParamLimits

0x7af0,	// (0x00090117) cl_header_pane

0x7afc,	// (0x00090123) cl_listscroll_pane_ParamLimits

0x7afc,	// (0x00090123) cl_listscroll_pane

0x132b,	// (0x00089952) bg_cl_pane_g1

0x1333,	// (0x0008995a) bg_cl_pane_g2

0x133b,	// (0x00089962) bg_cl_pane_g3

0x1343,	// (0x0008996a) bg_cl_pane_g4

0x134b,	// (0x00089972) bg_cl_pane_g5

0x1353,	// (0x0008997a) bg_cl_pane_g6

0x135b,	// (0x00089982) bg_cl_pane_g7

0x1363,	// (0x0008998a) bg_cl_pane_g8

0x136b,	// (0x00089992) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x00097fcd) bg_cl_pane_g

0x7b08,	// (0x0009012f) aid_height_cl_leading_ParamLimits

0x7b08,	// (0x0009012f) aid_height_cl_leading

0x7b14,	// (0x0009013b) aid_height_cl_text_ParamLimits

0x7b14,	// (0x0009013b) aid_height_cl_text

0xc574,	// (0x00094b9b) bg_cl_header_pane_ParamLimits

0xc574,	// (0x00094b9b) bg_cl_header_pane

0x7b2c,	// (0x00090153) cl_header_pane_g1_ParamLimits

0x7b2c,	// (0x00090153) cl_header_pane_g1

0x7b39,	// (0x00090160) cl_header_pane_t1_ParamLimits

0x7b39,	// (0x00090160) cl_header_pane_t1

0x1373,	// (0x0008999a) cl_list_pane

0x0e67,	// (0x0008948e) hc_scroll_pane_cp01

0xc9f0,	// (0x00095017) bg_cl_header_pane_g1

0x0d27,	// (0x0008934e) bg_cl_header_pane_g2

0xca10,	// (0x00095037) bg_cl_header_pane_g3

0x0d37,	// (0x0008935e) bg_cl_header_pane_g4

0x0d2f,	// (0x00089356) bg_cl_header_pane_g5

0x0fde,	// (0x00089605) bg_cl_header_pane_g6

0x0d4f,	// (0x00089376) bg_cl_header_pane_g7

0x0d57,	// (0x0008937e) bg_cl_header_pane_g8

0x0d47,	// (0x0008936e) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x00097fe0) bg_cl_header_pane_g

0x7b4b,	// (0x00090172) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b4b,	// (0x00090172) hc_cl_list_double_graphic_heading_pane

0x7b5c,	// (0x00090183) hc_cl_list_single_graphic_pane_ParamLimits

0x7b5c,	// (0x00090183) hc_cl_list_single_graphic_pane

0x7b75,	// (0x0009019c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b75,	// (0x0009019c) hc_cl_list_single_graphic_pane_g1

0x7b81,	// (0x000901a8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b81,	// (0x000901a8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x00097ff3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x00097ff3) hc_cl_list_single_graphic_pane_g

0x7b95,	// (0x000901bc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b95,	// (0x000901bc) hc_cl_list_single_graphic_pane_t1

0x7b75,	// (0x0009019c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b75,	// (0x0009019c) hc_cl_list_double_graphic_heading_pane_g1

0x7baa,	// (0x000901d1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7baa,	// (0x000901d1) hc_cl_list_double_graphic_heading_pane_g2

0x7bbe,	// (0x000901e5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7bbe,	// (0x000901e5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x00097ff8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x00097ff8) hc_cl_list_double_graphic_heading_pane_g

0x7bd2,	// (0x000901f9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7bd2,	// (0x000901f9) hc_cl_list_double_graphic_heading_pane_t1

0x7be7,	// (0x0009020e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7be7,	// (0x0009020e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x00097fff) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x00097fff) hc_cl_list_double_graphic_heading_pane_t

0x7c04,	// (0x0009022b) vid4_progress_pane_g1

0x7c14,	// (0x0009023b) vid4_progress_pane_g2

0x7c24,	// (0x0009024b) vid4_progress_pane_g3

0x7c36,	// (0x0009025d) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x00098004) vid4_progress_pane_g

0x7c4e,	// (0x00090275) vid4_progress_pane_t1

0x7c64,	// (0x0009028b) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x0009800f) vid4_progress_pane_t

0x7c8e,	// (0x000902b5) wait_bar_pane_cp07

0xe725,	// (0x00096d4c) blid_firmament_pane_ParamLimits

0xe768,	// (0x00096d8f) popup_blid_sat_info2_window_g1

0xe78c,	// (0x00096db3) popup_blid_sat_info2_window_t3

0xe79a,	// (0x00096dc1) popup_blid_sat_info2_window_t4

0xe7a8,	// (0x00096dcf) popup_blid_sat_info2_window_t5

0xe7b6,	// (0x00096ddd) popup_blid_sat_info2_window_t6

0xe7c6,	// (0x00096ded) popup_blid_sat_info2_window_t7

0xe7d4,	// (0x00096dfb) popup_blid_sat_info2_window_t8

0xe7e2,	// (0x00096e09) popup_blid_sat_info2_window_t9

0xe7f0,	// (0x00096e17) popup_blid_sat_info2_window_t10

0xe8b1,	// (0x00096ed8) aid_firma_cardinal_ParamLimits

0xe8c5,	// (0x00096eec) blid_firmament_pane_t1_ParamLimits

0xe8dc,	// (0x00096f03) blid_firmament_pane_t2_ParamLimits

0xe8f3,	// (0x00096f1a) blid_firmament_pane_t3_ParamLimits

0xe90a,	// (0x00096f31) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x00097c37) blid_firmament_pane_t_ParamLimits

0xe921,	// (0x00096f48) blid_sat_info_pane_ParamLimits

0x5210,	// (0x0008d837) main_cam_set_pane_ParamLimits

0x60fe,	// (0x0008e725) aid_size_cell_colour_35_ParamLimits

0x6118,	// (0x0008e73f) aid_size_cell_colour_112_ParamLimits

0x612f,	// (0x0008e756) aid_size_cell_effect_ParamLimits

0xc29e,	// (0x000948c5) bg_tb_trans_pane_cp02_ParamLimits

0xcf06,	// (0x0009552d) heading_imed_pane_ParamLimits

0x6149,	// (0x0008e770) listscroll_imed_pane_ParamLimits

0xdbf0,	// (0x00096217) popup_call2_audio_first_window_g5_ParamLimits

0xdbf0,	// (0x00096217) popup_call2_audio_first_window_g5

0x6754,	// (0x0008ed7b) aid_size_touch_image3_arrow_left_ParamLimits

0x6754,	// (0x0008ed7b) aid_size_touch_image3_arrow_left

0x676a,	// (0x0008ed91) aid_size_touch_image3_arrow_right_ParamLimits

0x676a,	// (0x0008ed91) aid_size_touch_image3_arrow_right

0x7c79,	// (0x000902a0) vid4_progress_pane_t3

0x62ca,	// (0x0008e8f1) main_hwr_training_symbol_option_pane_ParamLimits

0x62ca,	// (0x0008e8f1) main_hwr_training_symbol_option_pane

0xefa8,	// (0x000975cf) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x000975cf) popup_hwr_training_preview_window

0x632b,	// (0x0008e952) hwr_training_navi_pane_g5_ParamLimits

0x632b,	// (0x0008e952) hwr_training_navi_pane_g5

0x0d15,	// (0x0008933c) popup_char_count_window

0x27a8,	// (0x0008adcf) bg_popup_sub_pane_cp20_ParamLimits

0x7611,	// (0x0008fc38) list_vitu2_match_list_pane_ParamLimits

0x761d,	// (0x0008fc44) vitu2_page_scroll_pane_ParamLimits

0x761d,	// (0x0008fc44) vitu2_page_scroll_pane

0x1385,	// (0x000899ac) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1385,	// (0x000899ac) list_single_hwr_training_symbol_option_pane

0x1398,	// (0x000899bf) list_single_hwr_training_symbol_option_pane_g1

0x13a0,	// (0x000899c7) list_single_hwr_training_symbol_option_pane_t1

0x13ae,	// (0x000899d5) bg_button_pane_cp023

0x13b7,	// (0x000899de) bg_button_pane_cp024

0x13ea,	// (0x00089a11) vitu2_page_scroll_pane_g1

0x13f2,	// (0x00089a19) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x00098016) vitu2_page_scroll_pane_g

0x13fa,	// (0x00089a21) vitu2_page_scroll_pane_t1

0xe69b,	// (0x00096cc2) popup_char_count_window_g1

0x1409,	// (0x00089a30) popup_char_count_window_g2

0x1412,	// (0x00089a39) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0009801b) popup_char_count_window_g

0x141b,	// (0x00089a42) popup_char_count_window_t1

0x27c2,	// (0x0008ade9) main_vded2_pane

0xee06,	// (0x0009742d) aid_size_cell_imed_line

0xee10,	// (0x00097437) grid_imed_line_width_pane

0x6c6c,	// (0x0008f293) vid4_indicators_pane_g4

0x1429,	// (0x00089a50) cell_imed_line_width_pane_ParamLimits

0x1429,	// (0x00089a50) cell_imed_line_width_pane

0x143d,	// (0x00089a64) cell_imed_line_width_pane_g1

0x1446,	// (0x00089a6d) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x00098022) cell_imed_line_width_pane_g

0x7cb5,	// (0x000902dc) main_vded2_pane_g1_ParamLimits

0x7cb5,	// (0x000902dc) main_vded2_pane_g1

0x7cc2,	// (0x000902e9) main_vded2_pane_g2_ParamLimits

0x7cc2,	// (0x000902e9) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x00098027) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x00098027) main_vded2_pane_g

0x7cd0,	// (0x000902f7) vded2_slider_pane_ParamLimits

0x7cd0,	// (0x000902f7) vded2_slider_pane

0x7cdd,	// (0x00090304) aid_size_touch_vded2_end

0x7ce7,	// (0x0009030e) aid_size_touch_vded2_playhead

0x144e,	// (0x00089a75) aid_size_touch_vded2_start

0x1456,	// (0x00089a7d) vded2_slider_bg_pane

0x145f,	// (0x00089a86) vded2_slider_pane_g1

0x1468,	// (0x00089a8f) vded2_slider_pane_g2

0x7cef,	// (0x00090316) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0009802c) vded2_slider_pane_g

0x1470,	// (0x00089a97) vded2_slider_bg_pane_g1

0x1479,	// (0x00089aa0) vded2_slider_bg_pane_g2

0x1482,	// (0x00089aa9) vded2_slider_bg_pane_g3

0x0002,

0xfa0c,	// (0x00098033) vded2_slider_bg_pane_g

0x4b5d,	// (0x0008d184) aid_postcard_touch_down_pane_ParamLimits

0x4b5d,	// (0x0008d184) aid_postcard_touch_down_pane

0x4b6d,	// (0x0008d194) aid_postcard_touch_up_pane_ParamLimits

0x4b6d,	// (0x0008d194) aid_postcard_touch_up_pane

0x27c2,	// (0x0008ade9) main_blid2_pane

0x5239,	// (0x0008d860) popup_blid2_search_window

0xac16,	// (0x0009323d) blid2_gps_pane

0xac16,	// (0x0009323d) blid2_navig_pane

0xac16,	// (0x0009323d) blid2_search_pane

0xac16,	// (0x0009323d) blid2_tripm_pane

0x7cf8,	// (0x0009031f) blid2_search_pane_g1_ParamLimits

0x7cf8,	// (0x0009031f) blid2_search_pane_g1

0x7d08,	// (0x0009032f) blid2_search_pane_t1_ParamLimits

0x7d08,	// (0x0009032f) blid2_search_pane_t1

0x7d1a,	// (0x00090341) aid_size_cell_blid2_gps_ParamLimits

0x7d1a,	// (0x00090341) aid_size_cell_blid2_gps

0x7d2a,	// (0x00090351) blid2_gps_pane_g1_ParamLimits

0x7d2a,	// (0x00090351) blid2_gps_pane_g1

0x7d36,	// (0x0009035d) grid_blid2_satellite_pane_ParamLimits

0x7d36,	// (0x0009035d) grid_blid2_satellite_pane

0x7d46,	// (0x0009036d) blid2_navig_pane_g1_ParamLimits

0x7d46,	// (0x0009036d) blid2_navig_pane_g1

0x7d52,	// (0x00090379) blid2_navig_pane_t1_ParamLimits

0x7d52,	// (0x00090379) blid2_navig_pane_t1

0x7d64,	// (0x0009038b) blid2_navig_pane_t2_ParamLimits

0x7d64,	// (0x0009038b) blid2_navig_pane_t2

0x0001,

0xfa13,	// (0x0009803a) blid2_navig_pane_t_ParamLimits

0xfa13,	// (0x0009803a) blid2_navig_pane_t

0x7d76,	// (0x0009039d) blid2_navig_ring_pane_ParamLimits

0x7d76,	// (0x0009039d) blid2_navig_ring_pane

0x7d86,	// (0x000903ad) blid2_speed_pane_ParamLimits

0x7d86,	// (0x000903ad) blid2_speed_pane

0x7d92,	// (0x000903b9) blid2_tripm_pane_g1_ParamLimits

0x7d92,	// (0x000903b9) blid2_tripm_pane_g1

0x7da2,	// (0x000903c9) blid2_tripm_pane_g2_ParamLimits

0x7da2,	// (0x000903c9) blid2_tripm_pane_g2

0x7dae,	// (0x000903d5) blid2_tripm_pane_g3_ParamLimits

0x7dae,	// (0x000903d5) blid2_tripm_pane_g3

0x7dba,	// (0x000903e1) blid2_tripm_pane_g4_ParamLimits

0x7dba,	// (0x000903e1) blid2_tripm_pane_g4

0x7dc6,	// (0x000903ed) blid2_tripm_pane_g5_ParamLimits

0x7dc6,	// (0x000903ed) blid2_tripm_pane_g5

0x0005,

0xfa18,	// (0x0009803f) blid2_tripm_pane_g_ParamLimits

0xfa18,	// (0x0009803f) blid2_tripm_pane_g

0x7de2,	// (0x00090409) blid2_tripm_pane_t1_ParamLimits

0x7de2,	// (0x00090409) blid2_tripm_pane_t1

0x7df6,	// (0x0009041d) blid2_tripm_pane_t2_ParamLimits

0x7df6,	// (0x0009041d) blid2_tripm_pane_t2

0x7e08,	// (0x0009042f) blid2_tripm_pane_t3_ParamLimits

0x7e08,	// (0x0009042f) blid2_tripm_pane_t3

0x0003,

0xfa25,	// (0x0009804c) blid2_tripm_pane_t_ParamLimits

0xfa25,	// (0x0009804c) blid2_tripm_pane_t

0x7e3a,	// (0x00090461) cell_blid2_satellite_pane_ParamLimits

0x7e3a,	// (0x00090461) cell_blid2_satellite_pane

0x7e54,	// (0x0009047b) cell_blid2_satellite_pane_g1

0x148b,	// (0x00089ab2) cell_blid2_satellite_pane_t1

0xc5c0,	// (0x00094be7) blid2_speed_pane_g1

0x1499,	// (0x00089ac0) blid2_speed_pane_t1

0x14a7,	// (0x00089ace) blid2_speed_pane_t2

0x0001,

0xfa2e,	// (0x00098055) blid2_speed_pane_t

0xc5c0,	// (0x00094be7) blid2_navig_ring_pane_g1

0x7e5d,	// (0x00090484) blid2_navig_ring_pane_g2

0x7e65,	// (0x0009048c) blid2_navig_ring_pane_g3

0x7e6d,	// (0x00090494) blid2_navig_ring_pane_g4

0x7e75,	// (0x0009049c) blid2_navig_ring_pane_g5

0x0004,

0xfa33,	// (0x0009805a) blid2_navig_ring_pane_g

0xac16,	// (0x0009323d) bg_popup_window_pane_cp011

0x14b5,	// (0x00089adc) popup_blid2_search_window_g1

0x14bd,	// (0x00089ae4) popup_blid2_search_window_t1

0x14cb,	// (0x00089af2) popup_blid2_search_window_t2

0x0001,

0xfa3e,	// (0x00098065) popup_blid2_search_window_t

0xc8d8,	// (0x00094eff) main_browser_pane_g1

0xc61e,	// (0x00094c45) main_browser_pane_ParamLimits

0x5210,	// (0x0008d837) bg_button_pane_cp011_ParamLimits

0x6f0f,	// (0x0008f536) cell_vitu2_function_pane_g1_ParamLimits

0xd3b2,	// (0x000959d9) bg_popup_sub_pane_cp22_ParamLimits

0x77a7,	// (0x0008fdce) input_focus_pane_cp08_ParamLimits

0x77c2,	// (0x0008fde9) popup_vitu2_query_button_pane_ParamLimits

0x77c2,	// (0x0008fde9) popup_vitu2_query_button_pane

0x77d1,	// (0x0008fdf8) popup_vitu2_query_input_button_pane

0x1039,	// (0x00089660) popup_vitu2_query_window_g1_ParamLimits

0x77db,	// (0x0008fe02) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x00097f66) popup_vitu2_query_window_g_ParamLimits

0xac16,	// (0x0009323d) bg_button_pane_cp026

0x7e7d,	// (0x000904a4) popup_vitu2_query_input_button_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp025

0x14d9,	// (0x00089b00) popup_vitu2_query_button_pane_t1

0x570d,	// (0x0008dd34) main_mp3_pane_t6

0x571d,	// (0x0008dd44) popup_slider_window_cp01

0x6b49,	// (0x0008f170) cam4_battery_pane

0x6c29,	// (0x0008f250) cam4_battery_pane_cp02

0x7bfc,	// (0x00090223) cam4_battery_pane_cp01

0x7bfc,	// (0x00090223) cam4_battery_pane_cp03

0x14e7,	// (0x00089b0e) cam4_battery_pane_g1

0xc5c0,	// (0x00094be7) cam4_battery_pane_g2

0x0001,

0xfa43,	// (0x0009806a) cam4_battery_pane_g

0xe7fe,	// (0x00096e25) popup_blid_sat_info2_window_t11

0xd072,	// (0x00095699) aid_size_touch_mv_arrow_left_ParamLimits

0xd09b,	// (0x000956c2) aid_size_touch_mv_arrow_right_ParamLimits

0xd0f9,	// (0x00095720) navi_pane_g1_ParamLimits

0xd105,	// (0x0009572c) navi_pane_g2_ParamLimits

0xd133,	// (0x0009575a) navi_pane_g3_ParamLimits

0xf334,	// (0x0009795b) navi_pane_g_ParamLimits

0x4705,	// (0x0008cd2c) navi_pane_mv_t1_ParamLimits

0x6155,	// (0x0008e77c) grid_imed_effect_pane_ParamLimits

0x3220,	// (0x0008b847) aid_placing_vt_slider_lsc

0xc827,	// (0x00094e4e) aid_placing_vt_slider_prt

0xc29e,	// (0x000948c5) bg_tb_trans_pane_cp01_ParamLimits

0xea7e,	// (0x000970a5) popup_image_details_window_g1_ParamLimits

0xea91,	// (0x000970b8) popup_image_details_window_g2_ParamLimits

0xeaa6,	// (0x000970cd) popup_image_details_window_g3_ParamLimits

0xeaa6,	// (0x000970cd) popup_image_details_window_g3

0xf650,	// (0x00097c77) popup_image_details_window_g_ParamLimits

0xeaba,	// (0x000970e1) popup_image_details_window_t1_ParamLimits

0xeacc,	// (0x000970f3) popup_image_details_window_t2_ParamLimits

0xeae5,	// (0x0009710c) popup_image_details_window_t3_ParamLimits

0xeaf9,	// (0x00097120) popup_image_details_window_t4_ParamLimits

0xeb14,	// (0x0009713b) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x00097c7e) popup_image_details_window_t_ParamLimits

0x7b20,	// (0x00090147) cl_header_name_pane_ParamLimits

0x7b20,	// (0x00090147) cl_header_name_pane

0x7e85,	// (0x000904ac) cl_header_name_pane_t1_ParamLimits

0x7e85,	// (0x000904ac) cl_header_name_pane_t1

0x7e9c,	// (0x000904c3) cl_header_name_pane_t2_ParamLimits

0x7e9c,	// (0x000904c3) cl_header_name_pane_t2

0x7ec6,	// (0x000904ed) cl_header_name_pane_t3_ParamLimits

0x7ec6,	// (0x000904ed) cl_header_name_pane_t3

0x0002,

0xfa48,	// (0x0009806f) cl_header_name_pane_t_ParamLimits

0xfa48,	// (0x0009806f) cl_header_name_pane_t

0xd1c2,	// (0x000957e9) navi_pane_mv_g2_ParamLimits

0x0cfd,	// (0x00089324) field_vitu2_entry_pane_g1_ParamLimits

0x0d09,	// (0x00089330) field_vitu2_entry_pane_g2_ParamLimits

0xd3d4,	// (0x000959fb) field_vitu2_entry_pane_g3_ParamLimits

0xd3d4,	// (0x000959fb) field_vitu2_entry_pane_g3

0xf848,	// (0x00097e6f) field_vitu2_entry_pane_g_ParamLimits

0x6e9d,	// (0x0008f4c4) cell_vitu2_itu_pane_g1_ParamLimits

0x6eb5,	// (0x0008f4dc) cell_vitu2_itu_pane_g2_ParamLimits

0x6eb5,	// (0x0008f4dc) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x00097e7b) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x00097e7b) cell_vitu2_itu_pane_g

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp05_ParamLimits

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp05

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp03

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp04

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp10_ParamLimits

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp10

0x7ac2,	// (0x000900e9) bg_vkb2_func_pane_cp08

0x778f,	// (0x0008fdb6) bg_vkb2_func_pane_cp06

0x7aa5,	// (0x000900cc) bg_vkb2_func_pane_cp07

0x13c0,	// (0x000899e7) bg_vkb2_func_pane_cp11_ParamLimits

0x13c0,	// (0x000899e7) bg_vkb2_func_pane_cp11

0x13d5,	// (0x000899fc) bg_vkb2_func_pane_cp12_ParamLimits

0x13d5,	// (0x000899fc) bg_vkb2_func_pane_cp12

0xac16,	// (0x0009323d) bg_vkb2_func_pane_cp09

0x0d27,	// (0x0008934e) bg_vkb2_func_pane_g1

0xca10,	// (0x00095037) bg_vkb2_func_pane_g2

0x0d2f,	// (0x00089356) bg_vkb2_func_pane_g3

0x0d37,	// (0x0008935e) bg_vkb2_func_pane_g4

0x0fde,	// (0x00089605) bg_vkb2_func_pane_g5

0x0d4f,	// (0x00089376) bg_vkb2_func_pane_g6

0x0d57,	// (0x0008937e) bg_vkb2_func_pane_g7

0x0d47,	// (0x0008936e) bg_vkb2_func_pane_g8

0xc9f0,	// (0x00095017) bg_vkb2_func_pane_g9

0x0008,

0xfa4f,	// (0x00098076) bg_vkb2_func_pane_g

0x7dd4,	// (0x000903fb) blid2_tripm_pane_g6_ParamLimits

0x7dd4,	// (0x000903fb) blid2_tripm_pane_g6

0x0b16,	// (0x0008913d) mp4_progress_pane_g1

0x7e2e,	// (0x00090455) blid2_tripm_values_pane_ParamLimits

0x7e2e,	// (0x00090455) blid2_tripm_values_pane

0x7eeb,	// (0x00090512) blid2_tripm_values_pane_t1

0x7ef9,	// (0x00090520) blid2_tripm_values_pane_t2

0x7f07,	// (0x0009052e) blid2_tripm_values_pane_t3

0x7f15,	// (0x0009053c) blid2_tripm_values_pane_t4

0x7f23,	// (0x0009054a) blid2_tripm_values_pane_t5

0x7f31,	// (0x00090558) blid2_tripm_values_pane_t6

0x7f3f,	// (0x00090566) blid2_tripm_values_pane_t7

0x7f4d,	// (0x00090574) blid2_tripm_values_pane_t8

0x7f5b,	// (0x00090582) blid2_tripm_values_pane_t9

0x0008,

0xfa62,	// (0x00098089) blid2_tripm_values_pane_t

0x3260,	// (0x0008b887) call_video_pane_t1_ParamLimits

0x3281,	// (0x0008b8a8) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00097804) call_video_pane_t_ParamLimits

0x4a16,	// (0x0008d03d) msg_header_pane_g1_ParamLimits

0xd39e,	// (0x000959c5) msg_header_pane_g2_ParamLimits

0xd39e,	// (0x000959c5) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x000979f9) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x000979f9) msg_header_pane_g

0xc61e,	// (0x00094c45) main_clock2_pane_ParamLimits

0x5ecf,	// (0x0008e4f6) grid_clock2_toolbar_pane_ParamLimits

0x5ecf,	// (0x0008e4f6) grid_clock2_toolbar_pane

0x5ecf,	// (0x0008e4f6) listscroll_clock2_pane_ParamLimits

0x5ecf,	// (0x0008e4f6) listscroll_clock2_pane

0x5f7f,	// (0x0008e5a6) main_clock2_pane_t3_ParamLimits

0x5f7f,	// (0x0008e5a6) main_clock2_pane_t3

0x5f91,	// (0x0008e5b8) main_clock2_pane_t4_ParamLimits

0x5f91,	// (0x0008e5b8) main_clock2_pane_t4

0x14f1,	// (0x00089b18) cell_clock2_toolbar_pane

0x14f9,	// (0x00089b20) cell_clock2_toolbar_pane_cp01

0x14f9,	// (0x00089b20) cell_clock2_toolbar_pane_cp02

0x1501,	// (0x00089b28) cell_clock2_toolbar_pane_cp03

0x1509,	// (0x00089b30) list_clock2_pane

0xcfe8,	// (0x0009560f) scroll_pane_cp10

0x1511,	// (0x00089b38) list_single_clock2_pane_ParamLimits

0x1511,	// (0x00089b38) list_single_clock2_pane

0xc7d0,	// (0x00094df7) list_highlight_pane_cp08

0x151e,	// (0x00089b45) list_single_clock2_pane_t1

0x152c,	// (0x00089b53) list_single_clock2_pane_t2

0x0001,

0xfa75,	// (0x0009809c) list_single_clock2_pane_t

0xac16,	// (0x0009323d) bg_button_pane_cp10

0x153a,	// (0x00089b61) cell_clock2_toolbar_pane_g1

0x4acb,	// (0x0008d0f2) aid_main_viewer_pane_g1_ParamLimits

0x4acb,	// (0x0008d0f2) aid_main_viewer_pane_g1

0x4ad7,	// (0x0008d0fe) aid_main_viewer_pane_g2_ParamLimits

0x4ad7,	// (0x0008d0fe) aid_main_viewer_pane_g2

0x4ae3,	// (0x0008d10a) aid_main_viewer_pane_g3_ParamLimits

0x4ae3,	// (0x0008d10a) aid_main_viewer_pane_g3

0x4af4,	// (0x0008d11b) aid_main_viewer_pane_g4_ParamLimits

0x4af4,	// (0x0008d11b) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00097a0a) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00097a0a) aid_main_viewer_pane_g

0x5203,	// (0x0008d82a) main_calc_pane_ParamLimits

0x521e,	// (0x0008d845) main_dialer2_pane_ParamLimits

0x27c2,	// (0x0008ade9) main_cam6_pane

0x27c2,	// (0x0008ade9) main_vid6_pane

0x5edb,	// (0x0008e502) listscroll_gen_pane_cp06_ParamLimits

0x5edb,	// (0x0008e502) listscroll_gen_pane_cp06

0x5fa3,	// (0x0008e5ca) main_clock2_pane_t5_ParamLimits

0x5fa3,	// (0x0008e5ca) main_clock2_pane_t5

0x5ff0,	// (0x0008e617) aid_call2_pane_cp10_ParamLimits

0x6002,	// (0x0008e629) aid_call_pane_cp10_ParamLimits

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6014,	// (0x0008e63b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6014,	// (0x0008e63b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd066,	// (0x0009568d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x00097d33) popup_clock_analogue_window_cp10_g_ParamLimits

0x602a,	// (0x0008e651) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0b87,	// (0x000891ae) cell_dialer2_keypad_pane_g2_ParamLimits

0x0b87,	// (0x000891ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x00097e0e) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x00097e0e) cell_dialer2_keypad_pane_g

0xc5ca,	// (0x00094bf1) cell_dialer2_keypad_pane_t1

0x71cd,	// (0x0008f7f4) main_cset_text2_pane_ParamLimits

0x71cd,	// (0x0008f7f4) main_cset_text2_pane

0x131f,	// (0x00089946) area_vitu2_query_pane_g1_ParamLimits

0x7a44,	// (0x0009006b) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x00097fb9) area_vitu2_query_pane_g_ParamLimits

0x022e,	// (0x00088855) area_vitu2_query_pane_t7_ParamLimits

0x022e,	// (0x00088855) area_vitu2_query_pane_t7

0x778f,	// (0x0008fdb6) bg_button_pane_cp018_ParamLimits

0x7aa5,	// (0x000900cc) bg_button_pane_cp021_ParamLimits

0x7ab1,	// (0x000900d8) bg_button_pane_cp022_ParamLimits

0x7ac2,	// (0x000900e9) bg_vkb2_func_pane_cp08_ParamLimits

0x778f,	// (0x0008fdb6) bg_vkb2_func_pane_cp06_ParamLimits

0x7aa5,	// (0x000900cc) bg_vkb2_func_pane_cp07_ParamLimits

0x7ad4,	// (0x000900fb) input_focus_pane_cp09_ParamLimits

0x7f69,	// (0x00090590) cam6_autofocus_pane_ParamLimits

0x7f69,	// (0x00090590) cam6_autofocus_pane

0x7f85,	// (0x000905ac) cam6_image_uncrop_pane_ParamLimits

0x7f85,	// (0x000905ac) cam6_image_uncrop_pane

0x7fbe,	// (0x000905e5) cam6_indi_pane_ParamLimits

0x7fbe,	// (0x000905e5) cam6_indi_pane

0x7fd8,	// (0x000905ff) cam6_mode_pane_ParamLimits

0x7fd8,	// (0x000905ff) cam6_mode_pane

0x7fec,	// (0x00090613) cam6_timer_pane_ParamLimits

0x7fec,	// (0x00090613) cam6_timer_pane

0x8000,	// (0x00090627) cam6_zoom_pane_ParamLimits

0x8000,	// (0x00090627) cam6_zoom_pane

0x801b,	// (0x00090642) cam6_mode_pane_g1_ParamLimits

0x801b,	// (0x00090642) cam6_mode_pane_g1

0x8027,	// (0x0009064e) cam6_mode_pane_g2_ParamLimits

0x8027,	// (0x0009064e) cam6_mode_pane_g2

0x8033,	// (0x0009065a) cam6_mode_pane_g3_ParamLimits

0x8033,	// (0x0009065a) cam6_mode_pane_g3

0x803f,	// (0x00090666) cam6_mode_pane_g4_ParamLimits

0x803f,	// (0x00090666) cam6_mode_pane_g4

0x0003,

0xfa7a,	// (0x000980a1) cam6_mode_pane_g_ParamLimits

0xfa7a,	// (0x000980a1) cam6_mode_pane_g

0xe5da,	// (0x00096c01) bg_tb_trans_pane_cp08_ParamLimits

0xe5da,	// (0x00096c01) bg_tb_trans_pane_cp08

0x1542,	// (0x00089b69) cam6_battery_pane_ParamLimits

0x1542,	// (0x00089b69) cam6_battery_pane

0x1558,	// (0x00089b7f) cam6_indi_pane_g1_ParamLimits

0x1558,	// (0x00089b7f) cam6_indi_pane_g1

0x156a,	// (0x00089b91) cam6_indi_pane_g2_ParamLimits

0x156a,	// (0x00089b91) cam6_indi_pane_g2

0x157c,	// (0x00089ba3) cam6_indi_pane_g3_ParamLimits

0x157c,	// (0x00089ba3) cam6_indi_pane_g3

0x0002,

0xfa83,	// (0x000980aa) cam6_indi_pane_g_ParamLimits

0xfa83,	// (0x000980aa) cam6_indi_pane_g

0x158e,	// (0x00089bb5) cam6_indi_pane_t1_ParamLimits

0x158e,	// (0x00089bb5) cam6_indi_pane_t1

0x6ca9,	// (0x0008f2d0) cam6_autofocus_pane_g1

0x6ca1,	// (0x0008f2c8) cam6_autofocus_pane_g2

0x6cb9,	// (0x0008f2e0) cam6_autofocus_pane_g3

0x6cb1,	// (0x0008f2d8) cam6_autofocus_pane_g4

0x0003,

0xfa8a,	// (0x000980b1) cam6_autofocus_pane_g

0xac61,	// (0x00093288) cam6_timer_pane_g1

0xac69,	// (0x00093290) cam6_timer_pane_t1

0xac77,	// (0x0009329e) cam6_zoom_cont_pane

0xac7f,	// (0x000932a6) cam6_zoom_pane_g1

0xac88,	// (0x000932af) cam6_zoom_pane_g2

0x804b,	// (0x00090672) cam6_zoom_pane_g3

0x0002,

0xfa93,	// (0x000980ba) cam6_zoom_pane_g

0xc5c0,	// (0x00094be7) cam6_battery_pane_g1

0xc5c0,	// (0x00094be7) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000976d6) cam6_battery_pane_g

0xac7f,	// (0x000932a6) cam6_zoom_cont_pane_g1

0xac88,	// (0x000932af) cam6_zoom_cont_pane_g2

0xac91,	// (0x000932b8) cam6_zoom_cont_pane_g3

0x0002,

0xfa9a,	// (0x000980c1) cam6_zoom_cont_pane_g

0x8069,	// (0x00090690) cam6_mode_pane_cp_ParamLimits

0x8069,	// (0x00090690) cam6_mode_pane_cp

0x807d,	// (0x000906a4) cam6_zoom_pane_cp_ParamLimits

0x807d,	// (0x000906a4) cam6_zoom_pane_cp

0x8095,	// (0x000906bc) vid6_image_uncrop_cif_pane_ParamLimits

0x8095,	// (0x000906bc) vid6_image_uncrop_cif_pane

0x80c1,	// (0x000906e8) vid6_image_uncrop_nhd_pane_ParamLimits

0x80c1,	// (0x000906e8) vid6_image_uncrop_nhd_pane

0x80de,	// (0x00090705) vid6_image_uncrop_vga_pane_ParamLimits

0x80de,	// (0x00090705) vid6_image_uncrop_vga_pane

0x80fd,	// (0x00090724) vid6_image_uncrop_wvga_pane_ParamLimits

0x80fd,	// (0x00090724) vid6_image_uncrop_wvga_pane

0x811a,	// (0x00090741) vid6_indi_pane_ParamLimits

0x811a,	// (0x00090741) vid6_indi_pane

0xe5da,	// (0x00096c01) bg_tb_trans_pane_cp09_ParamLimits

0xe5da,	// (0x00096c01) bg_tb_trans_pane_cp09

0xaca9,	// (0x000932d0) cam6_battery_pane_cp_ParamLimits

0xaca9,	// (0x000932d0) cam6_battery_pane_cp

0xacb5,	// (0x000932dc) vid6_indi_pane_g1_ParamLimits

0xacb5,	// (0x000932dc) vid6_indi_pane_g1

0xacc7,	// (0x000932ee) vid6_indi_pane_g2_ParamLimits

0xacc7,	// (0x000932ee) vid6_indi_pane_g2

0xacd9,	// (0x00093300) vid6_indi_pane_g3_ParamLimits

0xacd9,	// (0x00093300) vid6_indi_pane_g3

0xacee,	// (0x00093315) vid6_indi_pane_g4_ParamLimits

0xacee,	// (0x00093315) vid6_indi_pane_g4

0xad03,	// (0x0009332a) vid6_indi_pane_g5_ParamLimits

0xad03,	// (0x0009332a) vid6_indi_pane_g5

0x0004,

0xfaa1,	// (0x000980c8) vid6_indi_pane_g_ParamLimits

0xfaa1,	// (0x000980c8) vid6_indi_pane_g

0xad1d,	// (0x00093344) vid6_indi_pane_t1_ParamLimits

0xad1d,	// (0x00093344) vid6_indi_pane_t1

0xad33,	// (0x0009335a) vid6_indi_pane_t2_ParamLimits

0xad33,	// (0x0009335a) vid6_indi_pane_t2

0xad5b,	// (0x00093382) vid6_indi_pane_t3_ParamLimits

0xad5b,	// (0x00093382) vid6_indi_pane_t3

0xad83,	// (0x000933aa) vid6_indi_pane_t4_ParamLimits

0xad83,	// (0x000933aa) vid6_indi_pane_t4

0x0003,

0xfaac,	// (0x000980d3) vid6_indi_pane_t_ParamLimits

0xfaac,	// (0x000980d3) vid6_indi_pane_t

0xada7,	// (0x000933ce) wait_bar_pane_cp08

0x813f,	// (0x00090766) main_cset_text2_pane_t1_ParamLimits

0x813f,	// (0x00090766) main_cset_text2_pane_t1

0x8054,	// (0x0009067b) listscroll_gen_pane_cp06_t1_ParamLimits

0x8054,	// (0x0009067b) listscroll_gen_pane_cp06_t1

0x27c2,	// (0x0008ade9) main_cam6_set_pane

0xac53,	// (0x0009327a) bg_tb_trans_pane_cp06_ParamLimits

0x6b51,	// (0x0008f178) cam4_indicators_pane_g1_ParamLimits

0x6b62,	// (0x0008f189) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x00097e4b) cam4_indicators_pane_g_ParamLimits

0x6b80,	// (0x0008f1a7) cam4_indicators_pane_t1_ParamLimits

0x5210,	// (0x0008d837) bg_tb_trans_pane_cp07_ParamLimits

0x6c33,	// (0x0008f25a) vid4_indicators_pane_g1_ParamLimits

0x6c47,	// (0x0008f26e) vid4_indicators_pane_g2_ParamLimits

0x6c5b,	// (0x0008f282) vid4_indicators_pane_g3_ParamLimits

0x6c6c,	// (0x0008f293) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x00097e5d) vid4_indicators_pane_g_ParamLimits

0x6c8a,	// (0x0008f2b1) vid4_indicators_pane_t1_ParamLimits

0x7c04,	// (0x0009022b) vid4_progress_pane_g1_ParamLimits

0x7c14,	// (0x0009023b) vid4_progress_pane_g2_ParamLimits

0x7c24,	// (0x0009024b) vid4_progress_pane_g3_ParamLimits

0x7c36,	// (0x0009025d) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x00098004) vid4_progress_pane_g_ParamLimits

0x7c4e,	// (0x00090275) vid4_progress_pane_t1_ParamLimits

0x7c64,	// (0x0009028b) vid4_progress_pane_t2_ParamLimits

0x7c79,	// (0x000902a0) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x0009800f) vid4_progress_pane_t_ParamLimits

0x7c8e,	// (0x000902b5) wait_bar_pane_cp07_ParamLimits

0x8172,	// (0x00090799) main_cam6_set_pane_g2_ParamLimits

0x8172,	// (0x00090799) main_cam6_set_pane_g2

0x817e,	// (0x000907a5) main_cset6_listscroll_pane_ParamLimits

0x817e,	// (0x000907a5) main_cset6_listscroll_pane

0x81a9,	// (0x000907d0) main_cset6_slider_pane_ParamLimits

0x81a9,	// (0x000907d0) main_cset6_slider_pane

0x81b5,	// (0x000907dc) main_cset6_text2_pane_ParamLimits

0x81b5,	// (0x000907dc) main_cset6_text2_pane

0xadb6,	// (0x000933dd) main_cset6_text_pane

0xadbe,	// (0x000933e5) main_cset_list_pane_copy1_ParamLimits

0xadbe,	// (0x000933e5) main_cset_list_pane_copy1

0xadce,	// (0x000933f5) scroll_pane_cp028_copy1

0x81c8,	// (0x000907ef) cset_list_set_pane_copy1

0x81db,	// (0x00090802) aid_position_infowindow_above_copy1

0x81e3,	// (0x0009080a) aid_position_infowindow_below_copy1

0x81eb,	// (0x00090812) cset_list_set_pane_g1_copy1

0x0192,	// (0x000887b9) cset_list_set_pane_g3_copy1_ParamLimits

0x0192,	// (0x000887b9) cset_list_set_pane_g3_copy1

0x01a1,	// (0x000887c8) cset_list_set_pane_t1_copy1_ParamLimits

0x01a1,	// (0x000887c8) cset_list_set_pane_t1_copy1

0xc29e,	// (0x000948c5) list_highlight_pane_cp021_copy1_ParamLimits

0xc29e,	// (0x000948c5) list_highlight_pane_cp021_copy1

0xadd7,	// (0x000933fe) cset6_slider_pane_ParamLimits

0xadd7,	// (0x000933fe) cset6_slider_pane

0xae03,	// (0x0009342a) main_cset6_slider_pane_g1_ParamLimits

0xae03,	// (0x0009342a) main_cset6_slider_pane_g1

0x81f3,	// (0x0009081a) main_cset6_slider_pane_g2_ParamLimits

0x81f3,	// (0x0009081a) main_cset6_slider_pane_g2

0xae2b,	// (0x00093452) main_cset6_slider_pane_g3_ParamLimits

0xae2b,	// (0x00093452) main_cset6_slider_pane_g3

0x821b,	// (0x00090842) main_cset6_slider_pane_g4_ParamLimits

0x821b,	// (0x00090842) main_cset6_slider_pane_g4

0x8227,	// (0x0009084e) main_cset6_slider_pane_g5_ParamLimits

0x8227,	// (0x0009084e) main_cset6_slider_pane_g5

0x0e7c,	// (0x000894a3) main_cset6_slider_pane_g7_ParamLimits

0x0e7c,	// (0x000894a3) main_cset6_slider_pane_g7

0x0e88,	// (0x000894af) main_cset6_slider_pane_g8_ParamLimits

0x0e88,	// (0x000894af) main_cset6_slider_pane_g8

0x8235,	// (0x0009085c) main_cset6_slider_pane_g9_ParamLimits

0x8235,	// (0x0009085c) main_cset6_slider_pane_g9

0x8241,	// (0x00090868) main_cset6_slider_pane_g10_ParamLimits

0x8241,	// (0x00090868) main_cset6_slider_pane_g10

0x824d,	// (0x00090874) main_cset6_slider_pane_g11_ParamLimits

0x824d,	// (0x00090874) main_cset6_slider_pane_g11

0x8259,	// (0x00090880) main_cset6_slider_pane_g12_ParamLimits

0x8259,	// (0x00090880) main_cset6_slider_pane_g12

0x8265,	// (0x0009088c) main_cset6_slider_pane_g13_ParamLimits

0x8265,	// (0x0009088c) main_cset6_slider_pane_g13

0x8271,	// (0x00090898) main_cset6_slider_pane_g14_ParamLimits

0x8271,	// (0x00090898) main_cset6_slider_pane_g14

0x827d,	// (0x000908a4) main_cset6_slider_pane_g15_ParamLimits

0x827d,	// (0x000908a4) main_cset6_slider_pane_g15

0x8295,	// (0x000908bc) main_cset6_slider_pane_g16_ParamLimits

0x8295,	// (0x000908bc) main_cset6_slider_pane_g16

0x82a3,	// (0x000908ca) main_cset6_slider_pane_g17_ParamLimits

0x82a3,	// (0x000908ca) main_cset6_slider_pane_g17

0x0011,

0xfab5,	// (0x000980dc) main_cset6_slider_pane_g_ParamLimits

0xfab5,	// (0x000980dc) main_cset6_slider_pane_g

0xae37,	// (0x0009345e) main_cset6_slider_pane_t1_ParamLimits

0xae37,	// (0x0009345e) main_cset6_slider_pane_t1

0x82c9,	// (0x000908f0) main_cset6_slider_pane_t2_ParamLimits

0x82c9,	// (0x000908f0) main_cset6_slider_pane_t2

0x82f4,	// (0x0009091b) main_cset6_slider_pane_t3_ParamLimits

0x82f4,	// (0x0009091b) main_cset6_slider_pane_t3

0x831f,	// (0x00090946) main_cset6_slider_pane_t4_ParamLimits

0x831f,	// (0x00090946) main_cset6_slider_pane_t4

0x834a,	// (0x00090971) main_cset6_slider_pane_t5_ParamLimits

0x834a,	// (0x00090971) main_cset6_slider_pane_t5

0xae78,	// (0x0009349f) main_cset6_slider_pane_t7_ParamLimits

0xae78,	// (0x0009349f) main_cset6_slider_pane_t7

0x8377,	// (0x0009099e) main_cset6_slider_pane_t8_ParamLimits

0x8377,	// (0x0009099e) main_cset6_slider_pane_t8

0x839b,	// (0x000909c2) main_cset6_slider_pane_t9_ParamLimits

0x839b,	// (0x000909c2) main_cset6_slider_pane_t9

0x83bf,	// (0x000909e6) main_cset6_slider_pane_t10_ParamLimits

0x83bf,	// (0x000909e6) main_cset6_slider_pane_t10

0x83e3,	// (0x00090a0a) main_cset6_slider_pane_t11_ParamLimits

0x83e3,	// (0x00090a0a) main_cset6_slider_pane_t11

0xaeae,	// (0x000934d5) main_cset6_slider_pane_t14_ParamLimits

0xaeae,	// (0x000934d5) main_cset6_slider_pane_t14

0xaee7,	// (0x0009350e) main_cset6_slider_pane_t15_ParamLimits

0xaee7,	// (0x0009350e) main_cset6_slider_pane_t15

0x000b,

0xfada,	// (0x00098101) main_cset6_slider_pane_t_ParamLimits

0xfada,	// (0x00098101) main_cset6_slider_pane_t

0x0f76,	// (0x0008959d) cset_slider_pane_g1_copy1

0x0f7f,	// (0x000895a6) cset_slider_pane_g2_copy1

0x0f88,	// (0x000895af) cset_slider_pane_g3_copy1

0xac16,	// (0x0009323d) bg_popup_sub_pane_cp011_copy1

0xaf20,	// (0x00093547) main_cset_text_pane_g1_copy1

0x104d,	// (0x00089674) main_cset_text_pane_t1_copy1

0x105b,	// (0x00089682) main_cset_text_pane_t2_copy1

0x1163,	// (0x0008978a) main_cset_text_pane_t3_copy1

0x1171,	// (0x00089798) main_cset_text_pane_t4_copy1

0x117f,	// (0x000897a6) main_cset_text_pane_t5_copy1

0xaf28,	// (0x0009354f) main_cset_text_pane_t6_copy1

0xaf36,	// (0x0009355d) main_cset_text_pane_t7_copy1

0x8424,	// (0x00090a4b) main_cset_text2_pane_t1_copy1

0x5210,	// (0x0008d837) main_ncimui_pane

0x526f,	// (0x0008d896) popup_query_ncimui_window_ParamLimits

0x526f,	// (0x0008d896) popup_query_ncimui_window

0xebb5,	// (0x000971dc) field_cale_ev2_pane_g4_ParamLimits

0xebb5,	// (0x000971dc) field_cale_ev2_pane_g4

0x63ff,	// (0x0008ea26) cell_video_dialer_keypad_pane_g2_ParamLimits

0x63ff,	// (0x0008ea26) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x00097de5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x00097de5) cell_video_dialer_keypad_pane_g

0x6417,	// (0x0008ea3e) cell_video_dialer_keypad_pane_t1

0xac16,	// (0x0009323d) bg_popup_window_pane_cp012

0xe451,	// (0x00096a78) heading_pane_cp06

0xaf62,	// (0x00093589) ncim_query_content_pane

0xac16,	// (0x0009323d) bg_popup_heading_pane_cp01

0xaf6a,	// (0x00093591) ncim_heading_pane_t1

0xaf78,	// (0x0009359f) ncim_indicator_popup_pane

0xaf8a,	// (0x000935b1) ncim_query_button_pane

0xaf9e,	// (0x000935c5) ncim_query_content_pane_t1

0xafb0,	// (0x000935d7) ncim_query_content_pane_t2

0x0005,

0xfb1e,	// (0x00098145) ncim_query_content_pane_t

0xafea,	// (0x00093611) ncim_query_list_pane

0xaffc,	// (0x00093623) ncim_query_popup_pane

0xaf78,	// (0x0009359f) ncim_indicator_popup_pane_ParamLimits

0x8577,	// (0x00090b9e) ncim_query_content_pane_g1_ParamLimits

0x8577,	// (0x00090b9e) ncim_query_content_pane_g1

0xaf9e,	// (0x000935c5) ncim_query_content_pane_t1_ParamLimits

0xafb0,	// (0x000935d7) ncim_query_content_pane_t2_ParamLimits

0x8583,	// (0x00090baa) ncim_query_content_pane_t3_ParamLimits

0x8583,	// (0x00090baa) ncim_query_content_pane_t3

0x85a0,	// (0x00090bc7) ncim_query_content_pane_t4_ParamLimits

0x85a0,	// (0x00090bc7) ncim_query_content_pane_t4

0x85bd,	// (0x00090be4) ncim_query_content_pane_t5_ParamLimits

0x85bd,	// (0x00090be4) ncim_query_content_pane_t5

0xafc2,	// (0x000935e9) ncim_query_content_pane_t6_ParamLimits

0xafc2,	// (0x000935e9) ncim_query_content_pane_t6

0xfb1e,	// (0x00098145) ncim_query_content_pane_t_ParamLimits

0xafea,	// (0x00093611) ncim_query_list_pane_ParamLimits

0xaffc,	// (0x00093623) ncim_query_popup_pane_ParamLimits

0xb010,	// (0x00093637) wait_bar_pane_cp04

0xac16,	// (0x0009323d) input_focus_pane_cp011

0xb018,	// (0x0009363f) ncim_query_popup_pane_t1

0xb026,	// (0x0009364d) ncim_list_query_list_pane_ParamLimits

0xb026,	// (0x0009364d) ncim_list_query_list_pane

0xac16,	// (0x0009323d) bg_button_pane_cp027

0xb033,	// (0x0009365a) ncim_query_button_pane_g1

0xac16,	// (0x0009323d) list_highlight_pane_cp012

0xb03d,	// (0x00093664) ncim_list_query_list_pane_g1

0xb045,	// (0x0009366c) ncim_list_query_list_pane_t1

0x6b71,	// (0x0008f198) cam4_indicators_pane_g3_ParamLimits

0x6b71,	// (0x0008f198) cam4_indicators_pane_g3

0x6c78,	// (0x0008f29f) vid4_indicators_pane_g5_ParamLimits

0x6c78,	// (0x0008f29f) vid4_indicators_pane_g5

0x7c42,	// (0x00090269) vid4_progress_pane_g5_ParamLimits

0x7c42,	// (0x00090269) vid4_progress_pane_g5

0x8463,	// (0x00090a8a) main_ncimui_pane_g1

0x84cb,	// (0x00090af2) ncimui_group_query_pane_ParamLimits

0x84cb,	// (0x00090af2) ncimui_group_query_pane

0x8513,	// (0x00090b3a) ncimui_list_pane_ParamLimits

0x8513,	// (0x00090b3a) ncimui_list_pane

0x853a,	// (0x00090b61) ncimui_text_pane_ParamLimits

0x853a,	// (0x00090b61) ncimui_text_pane

0x85da,	// (0x00090c01) ncimui_text_pane_t1_ParamLimits

0x85da,	// (0x00090c01) ncimui_text_pane_t1

0xb053,	// (0x0009367a) ncimui_list_single_graphic_pane_ParamLimits

0xb053,	// (0x0009367a) ncimui_list_single_graphic_pane

0x85f9,	// (0x00090c20) ncimui_query_pane_ParamLimits

0x85f9,	// (0x00090c20) ncimui_query_pane

0xac16,	// (0x0009323d) list_highlight_pane_cp013

0xb063,	// (0x0009368a) ncim_list_query_list_pane_t1_copy1

0xb03d,	// (0x00093664) ncim_list_single_graphic_pane_g1

0x860c,	// (0x00090c33) ncim_query_button_pane_cp01

0x8618,	// (0x00090c3f) ncim_query_entry_pane_ParamLimits

0x8618,	// (0x00090c3f) ncim_query_entry_pane

0x862b,	// (0x00090c52) ncimui_query_pane_g1

0x8637,	// (0x00090c5e) ncimui_query_pane_t1_ParamLimits

0x8637,	// (0x00090c5e) ncimui_query_pane_t1

0xc29e,	// (0x000948c5) input_focus_pane_cp012

0xb071,	// (0x00093698) ncim_query_entry_pane_t1

0xc61e,	// (0x00094c45) main_im_pane_ParamLimits

0x5210,	// (0x0008d837) main_mobtv_pane_ParamLimits

0x5210,	// (0x0008d837) main_mobtv_pane

0x82b1,	// (0x000908d8) main_cset6_slider_pane_g18_ParamLimits

0x82b1,	// (0x000908d8) main_cset6_slider_pane_g18

0x82bd,	// (0x000908e4) main_cset6_slider_pane_g19_ParamLimits

0x82bd,	// (0x000908e4) main_cset6_slider_pane_g19

0xd3d4,	// (0x000959fb) bg_main_mobtv_pane_ParamLimits

0xd3d4,	// (0x000959fb) bg_main_mobtv_pane

0x8650,	// (0x00090c77) main_mobtv_info_pane

0x865b,	// (0x00090c82) main_mobtv_loading_pane_ParamLimits

0x865b,	// (0x00090c82) main_mobtv_loading_pane

0xb083,	// (0x000936aa) main_mobtv_pg_channel_list_pane

0xb08d,	// (0x000936b4) main_mobtv_pg_hdr_pane

0x8668,	// (0x00090c8f) main_mobtv_programe_curr_pane_ParamLimits

0x8668,	// (0x00090c8f) main_mobtv_programe_curr_pane

0x8675,	// (0x00090c9c) main_mobtv_programe_next_pane_ParamLimits

0x8675,	// (0x00090c9c) main_mobtv_programe_next_pane

0xb096,	// (0x000936bd) popup_mobtv_noti_window

0xc5c0,	// (0x00094be7) main_tv_pg_hdr_pane_g1

0xb09e,	// (0x000936c5) main_tv_pg_hdr_pane_g2

0xb0a6,	// (0x000936cd) main_tv_pg_hdr_pane_g3

0xb0ae,	// (0x000936d5) main_tv_pg_hdr_pane_g4

0xb0b6,	// (0x000936dd) main_tv_pg_hdr_pane_g5

0xb0c0,	// (0x000936e7) main_tv_pg_hdr_pane_g6

0xb0ca,	// (0x000936f1) main_tv_pg_hdr_pane_g7

0xb0d4,	// (0x000936fb) main_tv_pg_hdr_pane_g8

0xb0de,	// (0x00093705) main_tv_pg_hdr_pane_g9

0xb0e8,	// (0x0009370f) main_tv_pg_hdr_pane_g10

0xb0f2,	// (0x00093719) main_tv_pg_hdr_pane_g11

0x000a,

0xfb2b,	// (0x00098152) main_tv_pg_hdr_pane_g

0xb0fc,	// (0x00093723) main_tv_pg_hdr_pane_t1

0xb10a,	// (0x00093731) main_tv_pg_hdr_pane_t2

0xb118,	// (0x0009373f) main_tv_pg_hdr_pane_t3

0xb128,	// (0x0009374f) main_tv_pg_hdr_pane_t4

0xb138,	// (0x0009375f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb42,	// (0x00098169) main_tv_pg_hdr_pane_t

0xb148,	// (0x0009376f) single_mobtv_pg_channel_pane_ParamLimits

0xb148,	// (0x0009376f) single_mobtv_pg_channel_pane

0xb15a,	// (0x00093781) single_mobtv_pg_channel_table_pane

0xb163,	// (0x0009378a) single_mobtv_pg_channel_thumb_pane

0xb16c,	// (0x00093793) single_tv_pg_channel_pane_g1

0xb175,	// (0x0009379c) single_tv_pg_channel_pane_g2

0x0001,

0xfb4d,	// (0x00098174) single_tv_pg_channel_pane_g

0xc582,	// (0x00094ba9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc582,	// (0x00094ba9) bg_single_mobtv_pg_channel_thumb_pane

0xb17e,	// (0x000937a5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb17e,	// (0x000937a5) single_mobtv_pg_channel_thumb_pane_g1

0xb18c,	// (0x000937b3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb18c,	// (0x000937b3) single_mobtv_pg_channel_thumb_pane_g2

0xb198,	// (0x000937bf) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb198,	// (0x000937bf) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb52,	// (0x00098179) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb52,	// (0x00098179) single_mobtv_pg_channel_thumb_pane_g

0xb1a4,	// (0x000937cb) single_mobtv_pg_channel_thumb_pane_t1

0xb1b2,	// (0x000937d9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb59,	// (0x00098180) single_mobtv_pg_channel_thumb_pane_t

0xc5c0,	// (0x00094be7) bg_single_mobtv_pg_channel_table_pane_g1

0xc5c0,	// (0x00094be7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000976d6) bg_single_mobtv_pg_channel_table_pane_g

0xb1c0,	// (0x000937e7) single_mobtv_pg_channel_table_pane_t1

0xb1ce,	// (0x000937f5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5e,	// (0x00098185) single_mobtv_pg_channel_table_pane_t

0x868a,	// (0x00090cb1) main_mobtv_info_pane_g1_ParamLimits

0x868a,	// (0x00090cb1) main_mobtv_info_pane_g1

0x86a6,	// (0x00090ccd) main_mobtv_info_pane_t1_ParamLimits

0x86a6,	// (0x00090ccd) main_mobtv_info_pane_t1

0x871e,	// (0x00090d45) main_mobtv_info_pane_t2_ParamLimits

0x871e,	// (0x00090d45) main_mobtv_info_pane_t2

0x0002,

0xfb68,	// (0x0009818f) main_mobtv_info_pane_t_ParamLimits

0xfb68,	// (0x0009818f) main_mobtv_info_pane_t

0x87ad,	// (0x00090dd4) wait_bar_pane_cp05

0x87bf,	// (0x00090de6) main_mobtv_loading_pane_g1_ParamLimits

0x87bf,	// (0x00090de6) main_mobtv_loading_pane_g1

0x87cd,	// (0x00090df4) main_mobtv_loading_pane_g2_ParamLimits

0x87cd,	// (0x00090df4) main_mobtv_loading_pane_g2

0x87d9,	// (0x00090e00) main_mobtv_loading_pane_g3_ParamLimits

0x87d9,	// (0x00090e00) main_mobtv_loading_pane_g3

0x0002,

0xfb6f,	// (0x00098196) main_mobtv_loading_pane_g_ParamLimits

0xfb6f,	// (0x00098196) main_mobtv_loading_pane_g

0xb1dc,	// (0x00093803) main_mobtv_loading_pane_t1_ParamLimits

0xb1dc,	// (0x00093803) main_mobtv_loading_pane_t1

0xb1f4,	// (0x0009381b) main_mobtv_loading_pane_t2_ParamLimits

0xb1f4,	// (0x0009381b) main_mobtv_loading_pane_t2

0x0001,

0xfb76,	// (0x0009819d) main_mobtv_loading_pane_t_ParamLimits

0xfb76,	// (0x0009819d) main_mobtv_loading_pane_t

0x87e7,	// (0x00090e0e) wait_bar_pane_cp06_ParamLimits

0x87e7,	// (0x00090e0e) wait_bar_pane_cp06

0xb218,	// (0x0009383f) main_mobtv_programe_curr_pane_t1

0xb226,	// (0x0009384d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb7b,	// (0x000981a2) main_mobtv_programe_curr_pane_t

0xb234,	// (0x0009385b) main_mobtv_programe_next_pane_t1

0xb242,	// (0x00093869) main_mobtv_programe_next_pane_t2

0xb250,	// (0x00093877) main_mobtv_programe_next_pane_t3

0x0002,

0xfb80,	// (0x000981a7) main_mobtv_programe_next_pane_t

0xac16,	// (0x0009323d) bg_popup_mobtv_noti_window_pane

0xb25e,	// (0x00093885) popup_mobtv_noti_window_g1

0xb266,	// (0x0009388d) popup_mobtv_noti_window_t1

0xb274,	// (0x0009389b) popup_mobtv_noti_window_t2

0x0001,

0xfb87,	// (0x000981ae) popup_mobtv_noti_window_t

0xc5c0,	// (0x00094be7) bg_popup_mobtv_noti_window_pane_g1

0x27c2,	// (0x0008ade9) sc_clock_pane

0x27c2,	// (0x0008ade9) main_fs_bigclock_pane

0x7e1c,	// (0x00090443) blid2_tripm_pane_t4_ParamLimits

0x7e1c,	// (0x00090443) blid2_tripm_pane_t4

0xc590,	// (0x00094bb7) sc_clock_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) sc_clock_pane_g1

0xc5de,	// (0x00094c05) sc_clock_pane_t1_ParamLimits

0xc5de,	// (0x00094c05) sc_clock_pane_t1

0xc5de,	// (0x00094c05) sc_clock_pane_t2_ParamLimits

0xc5de,	// (0x00094c05) sc_clock_pane_t2

0xc5de,	// (0x00094c05) sc_clock_pane_t3_ParamLimits

0xc5de,	// (0x00094c05) sc_clock_pane_t3

0x0004,

0xfb8c,	// (0x000981b3) sc_clock_pane_t_ParamLimits

0xfb8c,	// (0x000981b3) sc_clock_pane_t

0x9289,	// (0x000918b0) main_fs_bigclock_indicator_pane_ParamLimits

0x9289,	// (0x000918b0) main_fs_bigclock_indicator_pane

0x882e,	// (0x00090e55) main_fs_bigclock_pane_g1_ParamLimits

0x882e,	// (0x00090e55) main_fs_bigclock_pane_g1

0x9295,	// (0x000918bc) main_fs_bigclock_pane_t1_ParamLimits

0x9295,	// (0x000918bc) main_fs_bigclock_pane_t1

0x92a7,	// (0x000918ce) main_fs_bigclock_pane_t2_ParamLimits

0x92a7,	// (0x000918ce) main_fs_bigclock_pane_t2

0x92bb,	// (0x000918e2) main_fs_bigclock_pane_t3_ParamLimits

0x92bb,	// (0x000918e2) main_fs_bigclock_pane_t3

0x0002,

0xfd22,	// (0x00098349) main_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x00098349) main_fs_bigclock_pane_t

0xbaad,	// (0x000940d4) main_fs_bigclock_indicator_pane_g1

0xaf92,	// (0x000935b9) ncim_query_content_pane_g2_ParamLimits

0xaf92,	// (0x000935b9) ncim_query_content_pane_g2

0x0001,

0xfb19,	// (0x00098140) ncim_query_content_pane_g_ParamLimits

0xfb19,	// (0x00098140) ncim_query_content_pane_g

0xc5de,	// (0x00094c05) sc_clock_pane_t4_ParamLimits

0xc5de,	// (0x00094c05) sc_clock_pane_t4

0x5210,	// (0x0008d837) main_radioblah_pane

0x6a24,	// (0x0008f04b) cell_call4_button_pane_t1_copy1_ParamLimits

0x6a24,	// (0x0008f04b) cell_call4_button_pane_t1_copy1

0x847d,	// (0x00090aa4) main_ncimui_pane_t1_ParamLimits

0x847d,	// (0x00090aa4) main_ncimui_pane_t1

0x8497,	// (0x00090abe) main_ncimui_pane_t2_ParamLimits

0x8497,	// (0x00090abe) main_ncimui_pane_t2

0x0002,

0xfb12,	// (0x00098139) main_ncimui_pane_t_ParamLimits

0xfb12,	// (0x00098139) main_ncimui_pane_t

0xd3b2,	// (0x000959d9) main_radioblah_anim_pane_ParamLimits

0xd3b2,	// (0x000959d9) main_radioblah_anim_pane

0xd3b2,	// (0x000959d9) main_radioblah_info_pane_ParamLimits

0xd3b2,	// (0x000959d9) main_radioblah_info_pane

0xd3c0,	// (0x000959e7) main_radioblah_pane_t1_ParamLimits

0xd3c0,	// (0x000959e7) main_radioblah_pane_t1

0xd3c0,	// (0x000959e7) main_radioblah_pane_t2_ParamLimits

0xd3c0,	// (0x000959e7) main_radioblah_pane_t2

0x0003,

0xfbad,	// (0x000981d4) main_radioblah_pane_t_ParamLimits

0xfbad,	// (0x000981d4) main_radioblah_pane_t

0xc574,	// (0x00094b9b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc574,	// (0x00094b9b) main_radioblah_rocker_ctrl_pane

0xe5e8,	// (0x00096c0f) main_radioblah_info_pane_t1_ParamLimits

0xe5e8,	// (0x00096c0f) main_radioblah_info_pane_t1

0xb3e9,	// (0x00093a10) main_radioblah_info_pane_t2_ParamLimits

0xb3e9,	// (0x00093a10) main_radioblah_info_pane_t2

0x0003,

0xfbb6,	// (0x000981dd) main_radioblah_info_pane_t_ParamLimits

0xfbb6,	// (0x000981dd) main_radioblah_info_pane_t

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g1

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g2

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g3

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g4

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g5

0xc5c0,	// (0x00094be7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbf,	// (0x000981e6) main_radioblah_rocker_ctrl_pane_g

0x8424,	// (0x00090a4b) main_cset_text2_pane_t1_copy1_ParamLimits

0x6a9f,	// (0x0008f0c6) cam4_image_uncrop_qvga_pane

0x6be6,	// (0x0008f20d) vid4_image_uncrop_qcif_pane

0x7fb0,	// (0x000905d7) cam6_image_uncrop_qvga_pane_ParamLimits

0x7fb0,	// (0x000905d7) cam6_image_uncrop_qvga_pane

0xac99,	// (0x000932c0) vid6_image_uncrop_qcif_pane_ParamLimits

0xac99,	// (0x000932c0) vid6_image_uncrop_qcif_pane

0xac16,	// (0x0009323d) bg_popup_preview_window_pane_cp03

0xaf44,	// (0x0009356b) list_cset_text2_pane

0xaf4c,	// (0x00093573) main_cset6_text2_pane_g1

0xaf54,	// (0x0009357b) main_cset6_text2_pane_t1

0x8872,	// (0x00090e99) list_cset_text2_pane_t1_ParamLimits

0x8872,	// (0x00090e99) list_cset_text2_pane_t1

0x5210,	// (0x0008d837) main_radioblah_pane_ParamLimits

0x8799,	// (0x00090dc0) main_mobtv_info_pane_t3_ParamLimits

0x8799,	// (0x00090dc0) main_mobtv_info_pane_t3

0xd3d4,	// (0x000959fb) main_radioblah_pane_g1

0xb3b9,	// (0x000939e0) main_radioblah_info_pane_g1

0xc5de,	// (0x00094c05) main_radioblah_info_pane_t3_ParamLimits

0xc5de,	// (0x00094c05) main_radioblah_info_pane_t3

0x4281,	// (0x0008c8a8) highlight_cell_cale_month_pane_ParamLimits

0x4281,	// (0x0008c8a8) highlight_cell_cale_month_pane

0x27c2,	// (0x0008ade9) main_phob_fisheye_pane

0xec56,	// (0x0009727d) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x0009727d) scroll_pane_cp0031

0xada7,	// (0x000933ce) wait_bar_pane_cp08_ParamLimits

0x81c8,	// (0x000907ef) cset_list_set_pane_copy1_ParamLimits

0xb438,	// (0x00093a5f) highlight_cell_cale_month_pane_g1

0x888f,	// (0x00090eb6) highlight_cell_cale_month_pane_t1

0x1373,	// (0x0008999a) list_gen_pane_cp01

0x0e67,	// (0x0008948e) scroll_pane_01

0x889d,	// (0x00090ec4) list_single_double_fisheye_pane

0x88a6,	// (0x00090ecd) list_double_fisheye_pane_g1_ParamLimits

0x88a6,	// (0x00090ecd) list_double_fisheye_pane_g1

0x88b2,	// (0x00090ed9) list_double_fisheye_pane_g2_ParamLimits

0x88b2,	// (0x00090ed9) list_double_fisheye_pane_g2

0x88c6,	// (0x00090eed) list_double_fisheye_pane_g3_ParamLimits

0x88c6,	// (0x00090eed) list_double_fisheye_pane_g3

0x0004,

0xfbcc,	// (0x000981f3) list_double_fisheye_pane_g_ParamLimits

0xfbcc,	// (0x000981f3) list_double_fisheye_pane_g

0x88ef,	// (0x00090f16) list_double_fisheye_pane_t1_ParamLimits

0x88ef,	// (0x00090f16) list_double_fisheye_pane_t1

0x890a,	// (0x00090f31) list_double_fisheye_pane_t2_ParamLimits

0x890a,	// (0x00090f31) list_double_fisheye_pane_t2

0x0001,

0xfbd7,	// (0x000981fe) list_double_fisheye_pane_t_ParamLimits

0xfbd7,	// (0x000981fe) list_double_fisheye_pane_t

0x27c2,	// (0x0008ade9) main_call5_pane

0xc574,	// (0x00094b9b) sc_swipe_pane_ParamLimits

0xc574,	// (0x00094b9b) sc_swipe_pane

0x8938,	// (0x00090f5f) call5_image_pane_ParamLimits

0x8938,	// (0x00090f5f) call5_image_pane

0x8948,	// (0x00090f6f) call5_swipe_1_pane_ParamLimits

0x8948,	// (0x00090f6f) call5_swipe_1_pane

0x8954,	// (0x00090f7b) call5_swipe_2_pane_ParamLimits

0x8954,	// (0x00090f7b) call5_swipe_2_pane

0x896e,	// (0x00090f95) popup_call5_audio_first_window_ParamLimits

0x896e,	// (0x00090f95) popup_call5_audio_first_window

0xc582,	// (0x00094ba9) call5_swipe_1_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) call5_swipe_1_pane_g1

0xb440,	// (0x00093a67) call5_swipe_1_pane_g2_ParamLimits

0xb440,	// (0x00093a67) call5_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x00098203) call5_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x00098203) call5_swipe_1_pane_g

0xb44c,	// (0x00093a73) call5_swipe_1_pane_t1_ParamLimits

0xb44c,	// (0x00093a73) call5_swipe_1_pane_t1

0xc582,	// (0x00094ba9) call5_swipe_2_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) call5_swipe_2_pane_g1

0xb461,	// (0x00093a88) call5_swipe_2_pane_g2_ParamLimits

0xb461,	// (0x00093a88) call5_swipe_2_pane_g2

0x0001,

0xfbe1,	// (0x00098208) call5_swipe_2_pane_g_ParamLimits

0xfbe1,	// (0x00098208) call5_swipe_2_pane_g

0xb46d,	// (0x00093a94) call5_swipe_2_pane_t1_ParamLimits

0xb46d,	// (0x00093a94) call5_swipe_2_pane_t1

0xc582,	// (0x00094ba9) sc_swipe_pane_g1_ParamLimits

0xc582,	// (0x00094ba9) sc_swipe_pane_g1

0xc590,	// (0x00094bb7) sc_swipe_pane_g2_ParamLimits

0xc590,	// (0x00094bb7) sc_swipe_pane_g2

0x0001,

0xfbe6,	// (0x0009820d) sc_swipe_pane_g_ParamLimits

0xfbe6,	// (0x0009820d) sc_swipe_pane_g

0xc5ca,	// (0x00094bf1) sc_swipe_pane_t1_ParamLimits

0xc5ca,	// (0x00094bf1) sc_swipe_pane_t1

0x27c2,	// (0x0008ade9) main_cmail_launcher_pane

0x897c,	// (0x00090fa3) aid_size_cell_cmail_l_ParamLimits

0x897c,	// (0x00090fa3) aid_size_cell_cmail_l

0x898a,	// (0x00090fb1) grid_cmail_l_pane_ParamLimits

0x898a,	// (0x00090fb1) grid_cmail_l_pane

0x899a,	// (0x00090fc1) cell_cmail_l_pane_ParamLimits

0x899a,	// (0x00090fc1) cell_cmail_l_pane

0xb482,	// (0x00093aa9) cell_cmail_l_pane_g1_ParamLimits

0xb482,	// (0x00093aa9) cell_cmail_l_pane_g1

0xb48e,	// (0x00093ab5) cell_cmail_l_pane_t1_ParamLimits

0xb48e,	// (0x00093ab5) cell_cmail_l_pane_t1

0xb4a4,	// (0x00093acb) cell_cmail_l_pane_t2_ParamLimits

0xb4a4,	// (0x00093acb) cell_cmail_l_pane_t2

0x0001,

0xfbeb,	// (0x00098212) cell_cmail_l_pane_t_ParamLimits

0xfbeb,	// (0x00098212) cell_cmail_l_pane_t

0xc29e,	// (0x000948c5) grid_highlight_pane_cp018_ParamLimits

0xc29e,	// (0x000948c5) grid_highlight_pane_cp018

0x2619,	// (0x0008ac40) main2_pane_ParamLimits

0x2619,	// (0x0008ac40) main2_pane

0xc6ad,	// (0x00094cd4) popup_sp_fs_action_menu_bg_pane_g1

0xc6b5,	// (0x00094cdc) popup_sp_fs_action_menu_bg_pane_g2

0xc6bd,	// (0x00094ce4) popup_sp_fs_action_menu_bg_pane_g3

0xc6c5,	// (0x00094cec) popup_sp_fs_action_menu_bg_pane_g4

0xc6cd,	// (0x00094cf4) popup_sp_fs_action_menu_bg_pane_g5

0xc6d5,	// (0x00094cfc) popup_sp_fs_action_menu_bg_pane_g6

0xc6dd,	// (0x00094d04) popup_sp_fs_action_menu_bg_pane_g7

0xc6e5,	// (0x00094d0c) popup_sp_fs_action_menu_bg_pane_g8

0xc6ed,	// (0x00094d14) popup_sp_fs_action_menu_bg_pane_g9

0xc6f5,	// (0x00094d1c) popup_sp_fs_action_menu_bg_pane_g10

0xc6f5,	// (0x00094d1c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00097727) popup_sp_fs_action_menu_bg_pane_g

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g2

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000977d5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000977d5) list_medium_line_x2_t3_g3_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g3_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_x2_t3_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g2_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g2

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g3

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000977e8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000977e8) list_medium_line_x2_t4_g4_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t3

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000977f1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000977f1) list_medium_line_x2_t4_g4_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g2

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g3

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000977e8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000977e8) list_medium_line_x2_t2_g4_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g4_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_x2_t2_g4_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g2

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000977d5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000977d5) list_medium_line_x2_t2_g3_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g3_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_x2_t2_g3_t

0x4451,	// (0x0008ca78) main_sp_fs_list_pane_ParamLimits

0x4451,	// (0x0008ca78) main_sp_fs_list_pane

0x445d,	// (0x0008ca84) sp_fs_scroll_pane_ParamLimits

0x445d,	// (0x0008ca84) sp_fs_scroll_pane

0xcd2e,	// (0x00095355) list_medium_line_x2_t3_t1

0xcd2e,	// (0x00095355) list_medium_line_x2_t3_t2

0xcd2e,	// (0x00095355) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000978a3) list_medium_line_x2_t3_t

0xcd2e,	// (0x00095355) list_medium_line_x3_t4_t1

0xcd2e,	// (0x00095355) list_medium_line_x3_t4_t2

0xcd2e,	// (0x00095355) list_medium_line_x3_t4_t3

0xcd2e,	// (0x00095355) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000978aa) list_medium_line_x3_t4_t

0xcd2e,	// (0x00095355) list_medium_line_x4_t5_t1

0xcd2e,	// (0x00095355) list_medium_line_x4_t5_t2

0xcd2e,	// (0x00095355) list_medium_line_x4_t5_t3

0xcd2e,	// (0x00095355) list_medium_line_x4_t5_t4

0xcd2e,	// (0x00095355) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000978b3) list_medium_line_x4_t5_t

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g1

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g2

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g3

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000977e8) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000977e8) list_medium_line_t4_g4_g

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t2

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t3

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t4_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000977f1) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000977f1) list_medium_line_t4_g4_t

0x4546,	// (0x0008cb6d) chi_dic_find_pane_g1

0x522c,	// (0x0008d853) main_tport_pane

0xcd2e,	// (0x00095355) list_medium_line_plain_t1

0xc582,	// (0x00094ba9) list_medium_line_t2_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_t2_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_t2_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_t2_g2_t

0x0252,	// (0x00088879) aid_sp_fs_list_icon_a_sm

0x10d3,	// (0x000896fa) aid_sp_fs_list_icon_d

0x137c,	// (0x000899a3) aid_sp_fs_text_primary

0x025a,	// (0x00088881) aid_sp_fs_text_secondary

0xac16,	// (0x0009323d) list_medium_line

0xac16,	// (0x0009323d) list_medium_line_g2

0xac16,	// (0x0009323d) list_medium_line_g3

0xac16,	// (0x0009323d) list_medium_line_plain

0xac16,	// (0x0009323d) list_medium_line_plain_t2

0xac16,	// (0x0009323d) list_medium_line_plain_t3

0xac16,	// (0x0009323d) list_medium_line_right_icon

0xac16,	// (0x0009323d) list_medium_line_right_iconx2

0xac16,	// (0x0009323d) list_medium_line_t2

0xac16,	// (0x0009323d) list_medium_line_t2_g2

0xac16,	// (0x0009323d) list_medium_line_t2_g3

0xac16,	// (0x0009323d) list_medium_line_t2_right_icon

0xac16,	// (0x0009323d) list_medium_line_t2_right_iconx2

0xac16,	// (0x0009323d) list_medium_line_t3

0xac16,	// (0x0009323d) list_medium_line_t3_g2

0xac16,	// (0x0009323d) list_medium_line_t3_g3

0xac16,	// (0x0009323d) list_medium_line_t3_right_iconx2

0xac16,	// (0x0009323d) list_medium_line_t4_g4

0xac16,	// (0x0009323d) list_medium_line_x2

0xac16,	// (0x0009323d) list_medium_line_x2_t2_g2

0xac16,	// (0x0009323d) list_medium_line_x2_t2_g3

0xac16,	// (0x0009323d) list_medium_line_x2_t2_g4

0xac16,	// (0x0009323d) list_medium_line_x2_t3

0xac16,	// (0x0009323d) list_medium_line_x2_t3_g2

0xac16,	// (0x0009323d) list_medium_line_x2_t3_g3

0xac16,	// (0x0009323d) list_medium_line_x2_t3_g4

0xac16,	// (0x0009323d) list_medium_line_x2_t4_g2

0xac16,	// (0x0009323d) list_medium_line_x2_t4_g4

0xac16,	// (0x0009323d) list_medium_line_x3

0xac16,	// (0x0009323d) list_medium_line_x3_t4

0xac16,	// (0x0009323d) list_medium_line_x3_t4_g4

0xac16,	// (0x0009323d) list_medium_line_x4_t4

0xac16,	// (0x0009323d) list_medium_line_x4_t4_g7

0xac16,	// (0x0009323d) list_medium_line_x4_t5

0x7ca1,	// (0x000902c8) list_single_fs_dyc_pane_ParamLimits

0x7ca1,	// (0x000902c8) list_single_fs_dyc_pane

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g1

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g2

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g3

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g4

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g5

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x4_t4_g7_g6

0xc590,	// (0x00094bb7) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc590,	// (0x00094bb7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf3,	// (0x0009811a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf3,	// (0x0009811a) list_medium_line_x4_t4_g7_g

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x4_t4_g7_t3

0xc5de,	// (0x00094c05) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc5de,	// (0x00094c05) list_medium_line_x4_t4_g7_t4

0xc5de,	// (0x00094c05) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc5de,	// (0x00094c05) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb02,	// (0x00098129) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb02,	// (0x00098129) list_medium_line_x4_t4_g7_t

0x8407,	// (0x00090a2e) list_single_dyc_row_pane_ParamLimits

0x8407,	// (0x00090a2e) list_single_dyc_row_pane

0x892c,	// (0x00090f53) call5_gesture_pane_ParamLimits

0x892c,	// (0x00090f53) call5_gesture_pane

0x8960,	// (0x00090f87) call5_windows_pane_ParamLimits

0x8960,	// (0x00090f87) call5_windows_pane

0x89b3,	// (0x00090fda) call5_swipe_1_pane_cp_ParamLimits

0x89b3,	// (0x00090fda) call5_swipe_1_pane_cp

0x89bf,	// (0x00090fe6) call5_swipe_2_pane_cp_ParamLimits

0x89bf,	// (0x00090fe6) call5_swipe_2_pane_cp

0xc7d0,	// (0x00094df7) call5_image_pane_cp

0x89cb,	// (0x00090ff2) popup_call5_audio_first_window_cp_ParamLimits

0x89cb,	// (0x00090ff2) popup_call5_audio_first_window_cp

0xb4c1,	// (0x00093ae8) call5_swipe_1_pane_g1_cp_ParamLimits

0xb4c1,	// (0x00093ae8) call5_swipe_1_pane_g1_cp

0xb4ce,	// (0x00093af5) call5_swipe_1_pane_g2_cp

0xb4d6,	// (0x00093afd) call5_swipe_1_pane_t1_cp_ParamLimits

0xb4d6,	// (0x00093afd) call5_swipe_1_pane_t1_cp

0xb4c1,	// (0x00093ae8) call5_swipe_2_pane_g1_cp_ParamLimits

0xb4c1,	// (0x00093ae8) call5_swipe_2_pane_g1_cp

0xb4eb,	// (0x00093b12) call5_swipe_2_pane_g2_cp

0xb4f3,	// (0x00093b1a) call5_swipe_2_pane_t1_cp_ParamLimits

0xb4f3,	// (0x00093b1a) call5_swipe_2_pane_t1_cp

0xc29e,	// (0x000948c5) main_sp_fs_email_pane

0xb508,	// (0x00093b2f) main_sp_fs_listscroll_pane_te

0x10e9,	// (0x00089710) popup_sp_fs_action_menu_pane_ParamLimits

0x10e9,	// (0x00089710) popup_sp_fs_action_menu_pane

0xc5c0,	// (0x00094be7) bg_sp_fs_ctrlbar_pane_g1

0xb511,	// (0x00093b38) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb51a,	// (0x00093b41) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb523,	// (0x00093b4a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc5c0,	// (0x00094be7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf0,	// (0x00098217) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe443,	// (0x00096a6a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe443,	// (0x00096a6a) bg_sp_fs_ctrlbar_ddmenu_pane

0xb52c,	// (0x00093b53) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb52c,	// (0x00093b53) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb538,	// (0x00093b5f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb538,	// (0x00093b5f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf9,	// (0x00098220) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf9,	// (0x00098220) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb544,	// (0x00093b6b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb544,	// (0x00093b6b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc5c0,	// (0x00094be7) list_medium_line_t2_right_icon_g1

0xcd2e,	// (0x00095355) list_medium_line_t2_right_icon_t1

0xcd2e,	// (0x00095355) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfe,	// (0x00098225) list_medium_line_t2_right_icon_t

0xd3b2,	// (0x000959d9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd3b2,	// (0x000959d9) bg_sp_fs_ctrlbar_pane

0x8a30,	// (0x00091057) main_sp_fs_ctrlbar_button_pane_cp01

0x8a38,	// (0x0009105f) main_sp_fs_ctrlbar_ddmenu_pane

0xb596,	// (0x00093bbd) main_sp_fs_ctrlbar_pane_g1

0xb5a2,	// (0x00093bc9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc03,	// (0x0009822a) main_sp_fs_ctrlbar_pane_g

0x8a74,	// (0x0009109b) main_sp_fs_ctrlbar_pane_t1

0x8aaf,	// (0x000910d6) main_sp_fs_ctrlbar_pane

0x8ac5,	// (0x000910ec) main_sp_fs_listscroll_pane_te_cp01

0x8ae0,	// (0x00091107) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8ae0,	// (0x00091107) popup_sp_fs_action_menu_pane_cp01

0xc29e,	// (0x000948c5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc29e,	// (0x000948c5) bg_sp_fs_highlight_list_pane_cp01

0x0263,	// (0x0008888a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0263,	// (0x0008888a) sp_fs_action_menu_list_gene_pane_g1

0xb5c9,	// (0x00093bf0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb5c9,	// (0x00093bf0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc11,	// (0x00098238) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc11,	// (0x00098238) sp_fs_action_menu_list_gene_pane_g

0x0272,	// (0x00088899) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0272,	// (0x00088899) sp_fs_action_menu_list_gene_pane_t1

0x028a,	// (0x000888b1) sp_fs_action_menu_list_gene_pane_ParamLimits

0x028a,	// (0x000888b1) sp_fs_action_menu_list_gene_pane

0xb5d6,	// (0x00093bfd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb5d6,	// (0x00093bfd) popup_sp_fs_action_menu_bg_pane

0x02ab,	// (0x000888d2) sp_fs_action_menu_list_pane_ParamLimits

0x02ab,	// (0x000888d2) sp_fs_action_menu_list_pane

0x02cd,	// (0x000888f4) sp_fs_scroll_pane_cp01_ParamLimits

0x02cd,	// (0x000888f4) sp_fs_scroll_pane_cp01

0xcd2e,	// (0x00095355) list_medium_line_plain_t2_t1

0xcd2e,	// (0x00095355) list_medium_line_plain_t2_t2

0x0001,

0xfbfe,	// (0x00098225) list_medium_line_plain_t2_t

0xcd2e,	// (0x00095355) list_medium_line_plain_t3_t1

0xcd2e,	// (0x00095355) list_medium_line_plain_t3_t2

0xcd2e,	// (0x00095355) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000978a3) list_medium_line_plain_t3_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_x2_t2_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_x2_t2_g2_t

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_x2_t4_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t3

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000977f1) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000977f1) list_medium_line_x2_t4_g2_t

0xc5c0,	// (0x00094be7) list_medium_line_t3_right_iconx2_g1

0xc5c0,	// (0x00094be7) list_medium_line_t3_right_iconx2_g2

0xc5c0,	// (0x00094be7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x000979bf) list_medium_line_t3_right_iconx2_g

0xcd2e,	// (0x00095355) list_medium_line_t3_right_iconx2_t1

0xcd2e,	// (0x00095355) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbfe,	// (0x00098225) list_medium_line_t3_right_iconx2_t

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g1

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g2

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g3

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000977e8) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000977e8) list_medium_line_x3_t4_g4_g

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t3

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000977f1) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000977f1) list_medium_line_x3_t4_g4_t

0x8b00,	// (0x00091127) list_single_dyc_row_text_pane_t1_ParamLimits

0x8b00,	// (0x00091127) list_single_dyc_row_text_pane_t1

0x8b37,	// (0x0009115e) list_single_dyc_row_text_pane_t2_ParamLimits

0x8b37,	// (0x0009115e) list_single_dyc_row_text_pane_t2

0x02f3,	// (0x0008891a) list_single_dyc_row_text_pane_t3_ParamLimits

0x02f3,	// (0x0008891a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc16,	// (0x0009823d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc16,	// (0x0009823d) list_single_dyc_row_text_pane_t

0x0317,	// (0x0008893e) list_single_dyc_row_pane_g1_ParamLimits

0x0317,	// (0x0008893e) list_single_dyc_row_pane_g1

0x0323,	// (0x0008894a) list_single_dyc_row_pane_g2_ParamLimits

0x0323,	// (0x0008894a) list_single_dyc_row_pane_g2

0x032f,	// (0x00088956) list_single_dyc_row_pane_g3_ParamLimits

0x032f,	// (0x00088956) list_single_dyc_row_pane_g3

0x033b,	// (0x00088962) list_single_dyc_row_pane_g4_ParamLimits

0x033b,	// (0x00088962) list_single_dyc_row_pane_g4

0x0003,

0xfc23,	// (0x0009824a) list_single_dyc_row_pane_g_ParamLimits

0xfc23,	// (0x0009824a) list_single_dyc_row_pane_g

0x0347,	// (0x0008896e) list_single_dyc_row_text_pane_ParamLimits

0x0347,	// (0x0008896e) list_single_dyc_row_text_pane

0xac16,	// (0x0009323d) bg_sp_fs_scroll_pane

0xb5e4,	// (0x00093c0b) thumb_sp_fs_scroll_pane

0xc582,	// (0x00094ba9) list_medium_line_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g1

0xc5ca,	// (0x00094bf1) list_medium_line_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t1

0xc582,	// (0x00094ba9) list_medium_line_x2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_x2_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t1

0xc582,	// (0x00094ba9) list_medium_line_x3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x3_g1

0xac53,	// (0x0009327a) list_medium_line_x3_g2_ParamLimits

0xac53,	// (0x0009327a) list_medium_line_x3_g2

0x0001,

0xfc2c,	// (0x00098253) list_medium_line_x3_g_ParamLimits

0xfc2c,	// (0x00098253) list_medium_line_x3_g

0xb5ed,	// (0x00093c14) list_medium_line_x3_t1_ParamLimits

0xb5ed,	// (0x00093c14) list_medium_line_x3_t1

0xb601,	// (0x00093c28) thumb_sp_fs_scroll_pane_g1

0xb60a,	// (0x00093c31) thumb_sp_fs_scroll_pane_g2

0xb613,	// (0x00093c3a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x00098258) thumb_sp_fs_scroll_pane_g

0xb601,	// (0x00093c28) bg_sp_fs_scroll_pane_g1

0xb60a,	// (0x00093c31) bg_sp_fs_scroll_pane_g2

0xb613,	// (0x00093c3a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x00098258) bg_sp_fs_scroll_pane_g

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g1

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g2

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g3

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000977e8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000977e8) list_medium_line_x2_t3_g4_g

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t1

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t2

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_x2_t3_g4_t

0xc582,	// (0x00094ba9) list_medium_line_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_g2_t1

0xc582,	// (0x00094ba9) list_medium_line_t3_g2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g2_g1

0xc582,	// (0x00094ba9) list_medium_line_t3_g2_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000977e3) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000977e3) list_medium_line_t3_g2_g

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t2

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_t3_g2_t

0xc5c0,	// (0x00094be7) list_medium_line_right_icon_g1

0xcd2e,	// (0x00095355) list_medium_line_right_icon_t1

0xc582,	// (0x00094ba9) list_medium_line_t2_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g1

0xc5ca,	// (0x00094bf1) list_medium_line_t2_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t2_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_t2_t

0xc582,	// (0x00094ba9) list_medium_line_t3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g1

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t2

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_t3_t

0xc582,	// (0x00094ba9) list_medium_line_g3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g3_g1

0xc582,	// (0x00094ba9) list_medium_line_g3_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g3_g2

0xc582,	// (0x00094ba9) list_medium_line_g3_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000977d5) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000977d5) list_medium_line_g3_g

0xc5ca,	// (0x00094bf1) list_medium_line_g3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_g3_t1

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g1

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g2

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000977d5) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000977d5) list_medium_line_t2_g3_g

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g3_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g3_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00097858) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00097858) list_medium_line_t2_g3_t

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g1_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g1

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g2_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g2

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g3_ParamLimits

0xc582,	// (0x00094ba9) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000977d5) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000977d5) list_medium_line_t3_g3_g

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t1_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t1

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t2_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t2

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t3_ParamLimits

0xc5ca,	// (0x00094bf1) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000977dc) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000977dc) list_medium_line_t3_g3_t

0xc5c0,	// (0x00094be7) list_medium_line_right_iconx2_g1

0xc5c0,	// (0x00094be7) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000976d6) list_medium_line_right_iconx2_g

0xcd2e,	// (0x00095355) list_medium_line_right_iconx2_t1

0xc5c0,	// (0x00094be7) list_medium_line_t2_right_iconx2_g1

0xc5c0,	// (0x00094be7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000976d6) list_medium_line_t2_right_iconx2_g

0xcd2e,	// (0x00095355) list_medium_line_t2_right_iconx2_t1

0xcd2e,	// (0x00095355) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfe,	// (0x00098225) list_medium_line_t2_right_iconx2_t

0xcd2e,	// (0x00095355) list_medium_line_x4_t4_t1

0xcd2e,	// (0x00095355) list_medium_line_x4_t4_t2

0xcd2e,	// (0x00095355) list_medium_line_x4_t4_t3

0xcd2e,	// (0x00095355) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000978aa) list_medium_line_x4_t4_t

0x8c84,	// (0x000912ab) tport_appsw_pane_ParamLimits

0x8c84,	// (0x000912ab) tport_appsw_pane

0x8c92,	// (0x000912b9) tport_contact_pane_ParamLimits

0x8c92,	// (0x000912b9) tport_contact_pane

0x8ca2,	// (0x000912c9) tport_listscroll_pane_ParamLimits

0x8ca2,	// (0x000912c9) tport_listscroll_pane

0x8cb2,	// (0x000912d9) cell_tport_appsw_pane_ParamLimits

0x8cb2,	// (0x000912d9) cell_tport_appsw_pane

0xc590,	// (0x00094bb7) tport_appsw_pane_g1_ParamLimits

0xc590,	// (0x00094bb7) tport_appsw_pane_g1

0xb61c,	// (0x00093c43) tport_contact_pane_g1

0xb018,	// (0x0009363f) tport_contact_pane_t1

0xb625,	// (0x00093c4c) tport_contact_pane_t2

0x0001,

0xfc38,	// (0x0009825f) tport_contact_pane_t

0xb633,	// (0x00093c5a) list_tport_pane

0xb63c,	// (0x00093c63) scroll_pane_cp_030

0x8ce5,	// (0x0009130c) cell_tport_appsw_pane_g1

0x8cf5,	// (0x0009131c) cell_tport_appsw_pane_t1

0x8d03,	// (0x0009132a) grid_highlight_pane_cp019

0x8d0b,	// (0x00091332) list_tport_double_graphic_pane_ParamLimits

0x8d0b,	// (0x00091332) list_tport_double_graphic_pane

0xc29e,	// (0x000948c5) list_highlight_pane_cp023_ParamLimits

0xc29e,	// (0x000948c5) list_highlight_pane_cp023

0x8d1c,	// (0x00091343) list_tport_double_graphic_pane_g1_ParamLimits

0x8d1c,	// (0x00091343) list_tport_double_graphic_pane_g1

0x8d29,	// (0x00091350) list_tport_double_graphic_pane_t1_ParamLimits

0x8d29,	// (0x00091350) list_tport_double_graphic_pane_t1

0x8d3e,	// (0x00091365) list_tport_double_graphic_pane_t2_ParamLimits

0x8d3e,	// (0x00091365) list_tport_double_graphic_pane_t2

0x0001,

0xfc44,	// (0x0009826b) list_tport_double_graphic_pane_t_ParamLimits

0xfc44,	// (0x0009826b) list_tport_double_graphic_pane_t

0xac16,	// (0x0009323d) main_cale_note_pane

0x6e51,	// (0x0008f478) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6e51,	// (0x0008f478) cell_vitu2_function_top_wide_pane_cp01

0x87ad,	// (0x00090dd4) wait_bar_pane_cp05_ParamLimits

0xc29e,	// (0x000948c5) listscroll_cmail_pane

0xb64d,	// (0x00093c74) list_cmail_pane

0x8d50,	// (0x00091377) list_cmail_body_pane

0x8d77,	// (0x0009139e) list_single_cmail_header_caption_pane

0x8da0,	// (0x000913c7) list_single_cmail_header_detail_pane_ParamLimits

0x8da0,	// (0x000913c7) list_single_cmail_header_detail_pane

0xb664,	// (0x00093c8b) list_single_cmail_header_caption_pane_t1

0x8dda,	// (0x00091401) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8dda,	// (0x00091401) list_single_cmail_header_detail_pane_g1

0x112d,	// (0x00089754) list_single_cmail_header_detail_pane_g2_ParamLimits

0x112d,	// (0x00089754) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc49,	// (0x00098270) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc49,	// (0x00098270) list_single_cmail_header_detail_pane_g

0x8df0,	// (0x00091417) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8df0,	// (0x00091417) list_single_cmail_header_detail_pane_t1

0x8e2c,	// (0x00091453) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e2c,	// (0x00091453) list_single_cmail_header_editor_pane_bg

0xb175,	// (0x0009379c) list_cmail_body_pane_g1

0xb688,	// (0x00093caf) list_cmail_body_pane_t1

0x0d27,	// (0x0008934e) list_single_cmail_header_editor_pane_bg_g1

0xca10,	// (0x00095037) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0d37,	// (0x0008935e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0d2f,	// (0x00089356) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0fde,	// (0x00089605) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0d57,	// (0x0008937e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0d47,	// (0x0008936e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0d4f,	// (0x00089376) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9f0,	// (0x00095017) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e43,	// (0x0009146a) calenote_gesture_pane_ParamLimits

0x8e43,	// (0x0009146a) calenote_gesture_pane

0x8e5d,	// (0x00091484) calenote_window_pane_ParamLimits

0x8e5d,	// (0x00091484) calenote_window_pane

0xb696,	// (0x00093cbd) popup_note_window_cp01

0x8e75,	// (0x0009149c) calenote_swipe_1_pane_ParamLimits

0x8e75,	// (0x0009149c) calenote_swipe_1_pane

0x89bf,	// (0x00090fe6) calenote_swipe_2_pane_ParamLimits

0x89bf,	// (0x00090fe6) calenote_swipe_2_pane

0xb4c1,	// (0x00093ae8) calenote_swipe_1_pane_g1_ParamLimits

0xb4c1,	// (0x00093ae8) calenote_swipe_1_pane_g1

0xb6a8,	// (0x00093ccf) calenote_swipe_1_pane_g2_ParamLimits

0xb6a8,	// (0x00093ccf) calenote_swipe_1_pane_g2

0x0001,

0xfc55,	// (0x0009827c) calenote_swipe_1_pane_g_ParamLimits

0xfc55,	// (0x0009827c) calenote_swipe_1_pane_g

0xb6b4,	// (0x00093cdb) calenote_swipe_1_pane_t1_ParamLimits

0xb6b4,	// (0x00093cdb) calenote_swipe_1_pane_t1

0xb4c1,	// (0x00093ae8) calenote_swipe_2_pane_g1_ParamLimits

0xb4c1,	// (0x00093ae8) calenote_swipe_2_pane_g1

0xb6d3,	// (0x00093cfa) calenote_swipe_2_pane_g2_ParamLimits

0xb6d3,	// (0x00093cfa) calenote_swipe_2_pane_g2

0x0001,

0xfc5a,	// (0x00098281) calenote_swipe_2_pane_g_ParamLimits

0xfc5a,	// (0x00098281) calenote_swipe_2_pane_g

0xb6df,	// (0x00093d06) calenote_swipe_2_pane_t1_ParamLimits

0xb6df,	// (0x00093d06) calenote_swipe_2_pane_t1

0xac16,	// (0x0009323d) main_mup_navstr_pane

0x5cd5,	// (0x0008e2fc) main_mup3_pane_t7_ParamLimits

0x5cd5,	// (0x0008e2fc) main_mup3_pane_t7

0x650c,	// (0x0008eb33) main_mp4_pane_g6_ParamLimits

0x650c,	// (0x0008eb33) main_mp4_pane_g6

0x6880,	// (0x0008eea7) main_image3_pane_t4_ParamLimits

0x6880,	// (0x0008eea7) main_image3_pane_t4

0x8e88,	// (0x000914af) popup_navstr_preview_pane_ParamLimits

0x8e88,	// (0x000914af) popup_navstr_preview_pane

0x8e94,	// (0x000914bb) scroll_navstr_pane_ParamLimits

0x8e94,	// (0x000914bb) scroll_navstr_pane

0xac16,	// (0x0009323d) bg_popup_preview_window_pane_cp04

0xb706,	// (0x00093d2d) popup_navstr_preview_pane_t1

0x8ea0,	// (0x000914c7) scroll_navstr_pane_g1_ParamLimits

0x8ea0,	// (0x000914c7) scroll_navstr_pane_g1

0x8ead,	// (0x000914d4) scroll_navstr_pane_t1_ParamLimits

0x8ead,	// (0x000914d4) scroll_navstr_pane_t1

0xb69f,	// (0x00093cc6) bg_button_pane_cp014

0xb69f,	// (0x00093cc6) bg_button_pane_cp030

0x88d2,	// (0x00090ef9) list_double_fisheye_pane_g4_ParamLimits

0x88d2,	// (0x00090ef9) list_double_fisheye_pane_g4

0x88de,	// (0x00090f05) list_double_fisheye_pane_g5_ParamLimits

0x88de,	// (0x00090f05) list_double_fisheye_pane_g5

0x1157,	// (0x0008977e) sp_fs_scroll_pane_cp03

0xb596,	// (0x00093bbd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb5a2,	// (0x00093bc9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc03,	// (0x0009822a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8a74,	// (0x0009109b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb65c,	// (0x00093c83) sp_fs_scroll_pane_cp02

0xc718,	// (0x00094d3f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc718,	// (0x00094d3f) popup_sp_fs_calendar_preview_list_single_pane

0xac16,	// (0x0009323d) main_cam6_pano_pane

0x5210,	// (0x0008d837) main_mup3_pane_ParamLimits

0xac16,	// (0x0009323d) main_phacti_pane

0x8682,	// (0x00090ca9) bg_button_pane_cp11

0x869a,	// (0x00090cc1) main_mobtv_info_pane_g2_ParamLimits

0x869a,	// (0x00090cc1) main_mobtv_info_pane_g2

0x0001,

0xfb63,	// (0x0009818a) main_mobtv_info_pane_g_ParamLimits

0xfb63,	// (0x0009818a) main_mobtv_info_pane_g

0xc5de,	// (0x00094c05) sc_clock_pane_t5_ParamLimits

0xc5de,	// (0x00094c05) sc_clock_pane_t5

0xd3d4,	// (0x000959fb) main_radioblah_pane_g1_ParamLimits

0xd3c0,	// (0x000959e7) main_radioblah_pane_t3_ParamLimits

0xd3c0,	// (0x000959e7) main_radioblah_pane_t3

0xd3c0,	// (0x000959e7) main_radioblah_pane_t4_ParamLimits

0xd3c0,	// (0x000959e7) main_radioblah_pane_t4

0xc574,	// (0x00094b9b) main_radioblah_text_pane_ParamLimits

0xc574,	// (0x00094b9b) main_radioblah_text_pane

0xb3b9,	// (0x000939e0) main_radioblah_info_pane_g1_ParamLimits

0xb3fd,	// (0x00093a24) main_radioblah_info_pane_t4_ParamLimits

0xb3fd,	// (0x00093a24) main_radioblah_info_pane_t4

0xc29e,	// (0x000948c5) main_sp_fs_calendar_pane

0x8ebf,	// (0x000914e6) main_phacti_pane_g1

0x8ec7,	// (0x000914ee) phacti_note_pane_ParamLimits

0x8ec7,	// (0x000914ee) phacti_note_pane

0xb71d,	// (0x00093d44) phacti_term_pane_ParamLimits

0xb71d,	// (0x00093d44) phacti_term_pane

0xb732,	// (0x00093d59) phacti_note_pane_t1_ParamLimits

0xb732,	// (0x00093d59) phacti_note_pane_t1

0x038a,	// (0x000889b1) phacti_term_pane_g1

0x0392,	// (0x000889b9) phacti_term_pane_t1_ParamLimits

0x0392,	// (0x000889b9) phacti_term_pane_t1

0xb749,	// (0x00093d70) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc7b7,	// (0x00094dde) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc64,	// (0x0009828b) popup_sp_fs_calendar_preview_list_single_pane_g

0xb751,	// (0x00093d78) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb751,	// (0x00093d78) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb767,	// (0x00093d8e) aid_popup_sp_fs_bg_corner_pane

0xc5c0,	// (0x00094be7) popup_sp_fs_calendar_preview_bg_pane_g1

0xac16,	// (0x0009323d) popup_sp_fs_calendar_preview_bg_pane

0xb76f,	// (0x00093d96) popup_sp_fs_calendar_preview_list_pane

0xd3b2,	// (0x000959d9) bg_main_sp_fs_cale_pane_ParamLimits

0xd3b2,	// (0x000959d9) bg_main_sp_fs_cale_pane

0x03c5,	// (0x000889ec) listscroll_cale_mrui_pane_ParamLimits

0x03c5,	// (0x000889ec) listscroll_cale_mrui_pane

0x03da,	// (0x00088a01) listscroll_sp_fs_schedule_track_pane

0x03e3,	// (0x00088a0a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x03e3,	// (0x00088a0a) main_sp_fs_ctrlbar_pane_cp01

0xb777,	// (0x00093d9e) main_sp_fs_ribbon_pane

0x03f6,	// (0x00088a1d) popup_sp_fs_cale_preview_window

0x8f2a,	// (0x00091551) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f2a,	// (0x00091551) list_single_sp_fs_schedule_track_pane

0xc574,	// (0x00094b9b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc574,	// (0x00094b9b) bg_sp_fs_highlight_list_pane_cp03

0x8f4a,	// (0x00091571) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f4a,	// (0x00091571) list_single_sp_fs_schedule_track_pane_g1

0x8f56,	// (0x0009157d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f56,	// (0x0009157d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc69,	// (0x00098290) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc69,	// (0x00098290) list_single_sp_fs_schedule_track_pane_g

0x8f62,	// (0x00091589) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f62,	// (0x00091589) list_single_sp_fs_schedule_track_pane_t1

0x8f7a,	// (0x000915a1) sp_fs_schedule_track_pane_ParamLimits

0x8f7a,	// (0x000915a1) sp_fs_schedule_track_pane

0xb77f,	// (0x00093da6) sp_fs_schedule_track_pane_g1

0xb787,	// (0x00093dae) sp_fs_schedule_track_pane_g2

0xb78f,	// (0x00093db6) sp_fs_schedule_track_pane_g3

0xb797,	// (0x00093dbe) sp_fs_schedule_track_pane_g4

0xb79f,	// (0x00093dc6) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6e,	// (0x00098295) sp_fs_schedule_track_pane_g

0x0d27,	// (0x0008934e) bg_sp_fs_schedule_viewer_highlight_g1

0xca10,	// (0x00095037) bg_sp_fs_schedule_viewer_highlight_g2

0x0d2f,	// (0x00089356) bg_sp_fs_schedule_viewer_highlight_g3

0x0d37,	// (0x0008935e) bg_sp_fs_schedule_viewer_highlight_g4

0x0fde,	// (0x00089605) bg_sp_fs_schedule_viewer_highlight_g5

0x0d47,	// (0x0008936e) bg_sp_fs_schedule_viewer_highlight_g6

0x0d4f,	// (0x00089376) bg_sp_fs_schedule_viewer_highlight_g7

0x0d57,	// (0x0008937e) bg_sp_fs_schedule_viewer_highlight_g8

0xc9f0,	// (0x00095017) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc79,	// (0x000982a0) bg_sp_fs_schedule_viewer_highlight_g

0xac16,	// (0x0009323d) bg_main_sp_fs_ribbon_pane

0x8f8a,	// (0x000915b1) main_sp_fs_ribbon_pane_g1

0xb7a7,	// (0x00093dce) main_sp_fs_ribbon_pane_t1

0x8f93,	// (0x000915ba) main_sp_fs_ribbon_pane_t2

0xb7b6,	// (0x00093ddd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8c,	// (0x000982b3) main_sp_fs_ribbon_pane_t

0xb7c5,	// (0x00093dec) main_sp_fs_ribbon_scheduler_pane

0xb7cd,	// (0x00093df4) bg_main_sp_fs_ribbon_pane_g1

0xb7d6,	// (0x00093dfd) bg_main_sp_fs_ribbon_pane_g2

0xb7df,	// (0x00093e06) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc93,	// (0x000982ba) bg_main_sp_fs_ribbon_pane_g

0xb7e7,	// (0x00093e0e) main_sp_fs_ribbon_scheduler_pane_g1

0xb7f0,	// (0x00093e17) main_sp_fs_ribbon_scheduler_pane_g2

0xb7f9,	// (0x00093e20) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9a,	// (0x000982c1) main_sp_fs_ribbon_scheduler_pane_g

0xb802,	// (0x00093e29) list_cale_mrui_pane

0x8fa2,	// (0x000915c9) sp_fs_scroll_pane_cp07_ParamLimits

0x8fa2,	// (0x000915c9) sp_fs_scroll_pane_cp07

0x8fbe,	// (0x000915e5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fbe,	// (0x000915e5) bg_sp_fs_schedule_viewer_highlight

0xb80f,	// (0x00093e36) list_single_sp_fs_schedule_track_pane_cp01

0xb817,	// (0x00093e3e) list_sp_fs_schedule_track_pane

0xb81f,	// (0x00093e46) sp_fs_scroll_pane_cp06_ParamLimits

0xb81f,	// (0x00093e46) sp_fs_scroll_pane_cp06

0xc5c0,	// (0x00094be7) bgmain_sp_fs_calendar_pane_g1

0x8fcb,	// (0x000915f2) list_single_cale_mrui_pane_ParamLimits

0x8fcb,	// (0x000915f2) list_single_cale_mrui_pane

0x0408,	// (0x00088a2f) list_single_cale_mrui_row_pane_ParamLimits

0x0408,	// (0x00088a2f) list_single_cale_mrui_row_pane

0x0415,	// (0x00088a3c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0415,	// (0x00088a3c) list_single_cale_mrui_row_pane_g1

0x044d,	// (0x00088a74) list_single_cale_mrui_row_pane_t1_ParamLimits

0x044d,	// (0x00088a74) list_single_cale_mrui_row_pane_t1

0x8ff5,	// (0x0009161c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ff5,	// (0x0009161c) list_single_cale_mrui_row_pane_t2

0x045f,	// (0x00088a86) list_single_cale_mrui_row_pane_t3_ParamLimits

0x045f,	// (0x00088a86) list_single_cale_mrui_row_pane_t3

0x048e,	// (0x00088ab5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x048e,	// (0x00088ab5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca8,	// (0x000982cf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca8,	// (0x000982cf) list_single_cale_mrui_row_pane_t

0x905b,	// (0x00091682) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x905b,	// (0x00091682) list_single_cmail_header_editor_pane_bg_cp01

0x9083,	// (0x000916aa) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9083,	// (0x000916aa) list_single_cmail_header_editor_pane_bg_cp02

0xb83e,	// (0x00093e65) main_radioblah_text_pane_t1_ParamLimits

0xb83e,	// (0x00093e65) main_radioblah_text_pane_t1

0xb858,	// (0x00093e7f) cam6_indi_pane_cp01

0xb860,	// (0x00093e87) cam6_mode_pane_cp01

0xb868,	// (0x00093e8f) cam6_pano_pane

0xb871,	// (0x00093e98) cam6_zoom_pane_cp01

0xb879,	// (0x00093ea0) cam6_pano_image_pane

0xb884,	// (0x00093eab) cam6_pano_pane_g1

0xb175,	// (0x0009379c) cam6_pano_pane_g2

0xb88d,	// (0x00093eb4) cam6_pano_pane_g3

0xb896,	// (0x00093ebd) cam6_pano_pane_g4

0xeecc,	// (0x000974f3) cam6_pano_pane_g5

0xb89f,	// (0x00093ec6) cam6_pano_pane_g6

0x1139,	// (0x00089760) cam6_pano_pane_g7

0xb8a9,	// (0x00093ed0) cam6_pano_pane_g8

0xb8b2,	// (0x00093ed9) cam6_pano_pane_g9

0x0008,

0xfcb1,	// (0x000982d8) cam6_pano_pane_g

0xac16,	// (0x0009323d) main_browser_tag_pane

0xb6fe,	// (0x00093d25) grid_navstr_albumart_pane

0xb8bd,	// (0x00093ee4) cell_navstr_albumart_pane_ParamLimits

0xb8bd,	// (0x00093ee4) cell_navstr_albumart_pane

0xb8dd,	// (0x00093f04) cell_navstr_albumart_pane_g1

0xe383,	// (0x000969aa) cell_navstr_albumart_pane_g2

0xe393,	// (0x000969ba) cell_navstr_albumart_pane_g3

0xe38b,	// (0x000969b2) cell_navstr_albumart_pane_g4

0x0003,

0xfcc4,	// (0x000982eb) cell_navstr_albumart_pane_g

0x909f,	// (0x000916c6) bt_list_pane_ParamLimits

0x909f,	// (0x000916c6) bt_list_pane

0x90bf,	// (0x000916e6) bt_list_pane_t1

0x90ce,	// (0x000916f5) bt_list_pane_t2

0x0001,

0xfccd,	// (0x000982f4) bt_list_pane_t

0xac16,	// (0x0009323d) main_cale_prevew_pane

0x90dd,	// (0x00091704) popup_cale_preview_window_ParamLimits

0x90dd,	// (0x00091704) popup_cale_preview_window

0xc29e,	// (0x000948c5) bg_popup_preview_window_pane_cp05_ParamLimits

0xc29e,	// (0x000948c5) bg_popup_preview_window_pane_cp05

0xb8e5,	// (0x00093f0c) list_cale_preview_pane_ParamLimits

0xb8e5,	// (0x00093f0c) list_cale_preview_pane

0x90f6,	// (0x0009171d) list_double_cale_preview_pane_ParamLimits

0x90f6,	// (0x0009171d) list_double_cale_preview_pane

0x9108,	// (0x0009172f) list_single_cale_preview_pane_ParamLimits

0x9108,	// (0x0009172f) list_single_cale_preview_pane

0x911e,	// (0x00091745) list_single_cale_preview_pane_g1

0x9126,	// (0x0009174d) list_single_cale_preview_pane_t1_ParamLimits

0x9126,	// (0x0009174d) list_single_cale_preview_pane_t1

0x913b,	// (0x00091762) list_double_cale_preview_pane_g1

0x9143,	// (0x0009176a) list_double_cale_preview_pane_t1_ParamLimits

0x9143,	// (0x0009176a) list_double_cale_preview_pane_t1

0x9158,	// (0x0009177f) list_double_cale_preview_pane_t2_ParamLimits

0x9158,	// (0x0009177f) list_double_cale_preview_pane_t2

0x0001,

0xfcd2,	// (0x000982f9) list_double_cale_preview_pane_t_ParamLimits

0xfcd2,	// (0x000982f9) list_double_cale_preview_pane_t

0xac16,	// (0x0009323d) main_ezdial_pane

0xc29e,	// (0x000948c5) main_sp_fs_email_pane_ParamLimits

0x89d9,	// (0x00091000) cmail_ddmenu_btn01_pane_ParamLimits

0x89d9,	// (0x00091000) cmail_ddmenu_btn01_pane

0x89f6,	// (0x0009101d) cmail_ddmenu_btn02_pane_ParamLimits

0x89f6,	// (0x0009101d) cmail_ddmenu_btn02_pane

0x8a14,	// (0x0009103b) cmail_ddmenu_btn03_pane_ParamLimits

0x8a14,	// (0x0009103b) cmail_ddmenu_btn03_pane

0x8aaf,	// (0x000910d6) main_sp_fs_ctrlbar_pane_ParamLimits

0x8ac5,	// (0x000910ec) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d50,	// (0x00091377) list_cmail_body_pane_ParamLimits

0xb672,	// (0x00093c99) bg_button_pane_cp12

0xb67b,	// (0x00093ca2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb67b,	// (0x00093ca2) list_single_cmail_header_detail_pane_g3

0x0366,	// (0x0008898d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0366,	// (0x0008898d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc50,	// (0x00098277) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc50,	// (0x00098277) list_single_cmail_header_detail_pane_t

0x03a7,	// (0x000889ce) phacti_term_pane_t2_ParamLimits

0x03a7,	// (0x000889ce) phacti_term_pane_t2

0x0001,

0xfc5f,	// (0x00098286) phacti_term_pane_t_ParamLimits

0xfc5f,	// (0x00098286) phacti_term_pane_t

0xb8f1,	// (0x00093f18) aid_size_list_single_double

0x9170,	// (0x00091797) popup_ezdial_listscroll_window

0xb8fd,	// (0x00093f24) popup_number_entry_window_cp01

0xc7d0,	// (0x00094df7) bg_popup_call_pane_cp09

0xb90a,	// (0x00093f31) ezdial_list_pane

0xb912,	// (0x00093f39) scroll_pane_cp23

0xe443,	// (0x00096a6a) bg_button_pane_cp028_ParamLimits

0xe443,	// (0x00096a6a) bg_button_pane_cp028

0x9189,	// (0x000917b0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9189,	// (0x000917b0) cmail_ddmenu_btn01_pane_g1

0x9199,	// (0x000917c0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9199,	// (0x000917c0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd7,	// (0x000982fe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd7,	// (0x000982fe) cmail_ddmenu_btn01_pane_g

0xb91a,	// (0x00093f41) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb91a,	// (0x00093f41) cmail_ddmenu_btn01_pane_t1

0xd3b2,	// (0x000959d9) bg_button_pane_cp029_ParamLimits

0xd3b2,	// (0x000959d9) bg_button_pane_cp029

0x91a5,	// (0x000917cc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91a5,	// (0x000917cc) cmail_ddmenu_btn02_pane_g1

0x91bd,	// (0x000917e4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91bd,	// (0x000917e4) cmail_ddmenu_btn02_pane_t1

0xc574,	// (0x00094b9b) bg_button_pane_cp031_ParamLimits

0xc574,	// (0x00094b9b) bg_button_pane_cp031

0x91a5,	// (0x000917cc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91a5,	// (0x000917cc) cmail_ddmenu_btn03_pane_g1

0x91bd,	// (0x000917e4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91bd,	// (0x000917e4) cmail_ddmenu_btn03_pane_t1

0xc5ca,	// (0x00094bf1) cell_dialer2_keypad_pane_t1_ParamLimits

0xee7d,	// (0x000974a4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee7d,	// (0x000974a4) cell_dialer2_keypad_pane_t1_copy1

0x84c3,	// (0x00090aea) ncimui_group_button_pane

0xc29e,	// (0x000948c5) main_sp_fs_calendar_pane_ParamLimits

0x8d77,	// (0x0009139e) list_single_cmail_header_caption_pane_ParamLimits

0x03bc,	// (0x000889e3) aid_recal_txt_sm_pane

0xac16,	// (0x0009323d) mian_recal_day_pane

0x03f6,	// (0x00088a1d) popup_sp_fs_cale_preview_window_ParamLimits

0xb930,	// (0x00093f57) list_recal_day_pane

0x04d8,	// (0x00088aff) list_single_recal_day_pane_ParamLimits

0x04d8,	// (0x00088aff) list_single_recal_day_pane

0xb957,	// (0x00093f7e) list_single_recal_day_pane_g1_ParamLimits

0xb957,	// (0x00093f7e) list_single_recal_day_pane_g1

0x04ea,	// (0x00088b11) list_single_recal_day_pane_g2_ParamLimits

0x04ea,	// (0x00088b11) list_single_recal_day_pane_g2

0x04f6,	// (0x00088b1d) list_single_recal_day_pane_g3_ParamLimits

0x04f6,	// (0x00088b1d) list_single_recal_day_pane_g3

0x91e1,	// (0x00091808) list_single_recal_day_pane_g4_ParamLimits

0x91e1,	// (0x00091808) list_single_recal_day_pane_g4

0x0502,	// (0x00088b29) list_single_recal_day_pane_g5_ParamLimits

0x0502,	// (0x00088b29) list_single_recal_day_pane_g5

0x050e,	// (0x00088b35) list_single_recal_day_pane_g6_ParamLimits

0x050e,	// (0x00088b35) list_single_recal_day_pane_g6

0x0004,

0xfce6,	// (0x0009830d) list_single_recal_day_pane_g_ParamLimits

0xfce6,	// (0x0009830d) list_single_recal_day_pane_g

0x0522,	// (0x00088b49) list_single_recal_day_pane_t1

0x0534,	// (0x00088b5b) list_single_recal_day_pane_t2

0x0001,

0xfcf1,	// (0x00098318) list_single_recal_day_pane_t

0x91f9,	// (0x00091820) ncimui_query_button_pane_ParamLimits

0x91f9,	// (0x00091820) ncimui_query_button_pane

0x9209,	// (0x00091830) ncimui_query_button_pane_t1_ParamLimits

0x9209,	// (0x00091830) ncimui_query_button_pane_t1

0xb963,	// (0x00093f8a) ncimui_query_button_pane_t2_ParamLimits

0xb963,	// (0x00093f8a) ncimui_query_button_pane_t2

0x0001,

0xfcf6,	// (0x0009831d) ncimui_query_button_pane_t_ParamLimits

0xfcf6,	// (0x0009831d) ncimui_query_button_pane_t

0x921c,	// (0x00091843) query_button_pane_ParamLimits

0x921c,	// (0x00091843) query_button_pane

0xac16,	// (0x0009323d) bg_button_pane_cp0028

0xb976,	// (0x00093f9d) query_button_pane_t1

0x522c,	// (0x0008d853) main_tport_pane_ParamLimits

0x8c5a,	// (0x00091281) bg_popup_window_pane_cp01_ParamLimits

0x8c5a,	// (0x00091281) bg_popup_window_pane_cp01

0x8c68,	// (0x0009128f) heading_pane_cp08_ParamLimits

0x8c68,	// (0x0009128f) heading_pane_cp08

0x8c76,	// (0x0009129d) heading_pane_cp07_ParamLimits

0x8c76,	// (0x0009129d) heading_pane_cp07

0x8ce5,	// (0x0009130c) cell_tport_appsw_pane_g2

0x0002,

0xfc3d,	// (0x00098264) cell_tport_appsw_pane_g

0x496b,	// (0x0008cf92) input_candi_list_open_g1

0xcbdb,	// (0x00095202) list_cale_time_pane_g6_ParamLimits

0xcbdb,	// (0x00095202) list_cale_time_pane_g6

0x5727,	// (0x0008dd4e) aid_size_touch_calib_1_ParamLimits

0x5727,	// (0x0008dd4e) aid_size_touch_calib_1

0x5733,	// (0x0008dd5a) aid_size_touch_calib_2_ParamLimits

0x5733,	// (0x0008dd5a) aid_size_touch_calib_2

0x5741,	// (0x0008dd68) aid_size_touch_calib_3_ParamLimits

0x5741,	// (0x0008dd68) aid_size_touch_calib_3

0x5751,	// (0x0008dd78) aid_size_touch_calib_4_ParamLimits

0x5751,	// (0x0008dd78) aid_size_touch_calib_4

0x575f,	// (0x0008dd86) main_touch_calib_button_group_pane_ParamLimits

0x575f,	// (0x0008dd86) main_touch_calib_button_group_pane

0x576d,	// (0x0008dd94) main_touch_calib_pane_g1_ParamLimits

0x5779,	// (0x0008dda0) main_touch_calib_pane_g2_ParamLimits

0x5785,	// (0x0008ddac) main_touch_calib_pane_g3_ParamLimits

0x5791,	// (0x0008ddb8) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x00097cb0) main_touch_calib_pane_g_ParamLimits

0x579d,	// (0x0008ddc4) main_touch_calib_pane_t1_ParamLimits

0x57b6,	// (0x0008dddd) main_touch_calib_pane_t2_ParamLimits

0x57cf,	// (0x0008ddf6) main_touch_calib_pane_t3_ParamLimits

0x57e5,	// (0x0008de0c) main_touch_calib_pane_t4_ParamLimits

0x57fb,	// (0x0008de22) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x00097cb9) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x000972a1) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x000972a1) list_single_fp_cale_pane_g3

0x5210,	// (0x0008d837) bg_button_pane_cp012_ParamLimits

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp03_ParamLimits

0x75c9,	// (0x0008fbf0) cell_vitu2_function_top_pane_g1_ParamLimits

0x5210,	// (0x0008d837) bg_vkb2_func_pane_cp04_ParamLimits

0x844b,	// (0x00090a72) main_ncimui_button_group_pane_ParamLimits

0x844b,	// (0x00090a72) main_ncimui_button_group_pane

0x84b1,	// (0x00090ad8) main_ncimui_pane_t3_ParamLimits

0x84b1,	// (0x00090ad8) main_ncimui_pane_t3

0xb714,	// (0x00093d3b) phacti_button_group_pane

0xb8f1,	// (0x00093f18) aid_size_list_single_double_ParamLimits

0x9170,	// (0x00091797) popup_ezdial_listscroll_window_ParamLimits

0xb8fd,	// (0x00093f24) popup_number_entry_window_cp01_ParamLimits

0x9229,	// (0x00091850) phacti_button_pane_ParamLimits

0x9229,	// (0x00091850) phacti_button_pane

0xac16,	// (0x0009323d) bg_button_pane_cp14

0xb984,	// (0x00093fab) phacti_button_pane_t1

0x923a,	// (0x00091861) main_touch_calib_button_pane_ParamLimits

0x923a,	// (0x00091861) main_touch_calib_button_pane

0xc61e,	// (0x00094c45) bg_button_pane_cp18_ParamLimits

0xc61e,	// (0x00094c45) bg_button_pane_cp18

0xb992,	// (0x00093fb9) main_touch_calib_button_pane_t1_ParamLimits

0xb992,	// (0x00093fb9) main_touch_calib_button_pane_t1

0xb9a8,	// (0x00093fcf) main_touch_calib_button_pane_t2_ParamLimits

0xb9a8,	// (0x00093fcf) main_touch_calib_button_pane_t2

0x0001,

0xfcfb,	// (0x00098322) main_touch_calib_button_pane_t_ParamLimits

0xfcfb,	// (0x00098322) main_touch_calib_button_pane_t

0xac16,	// (0x0009323d) cell_ncimui_button_pane

0xac16,	// (0x0009323d) bg_button_pane_cp032

0xb9c6,	// (0x00093fed) cell_ncimui_button_pane_t1

0x6793,	// (0x0008edba) image3_infobar_pane_ParamLimits

0x6793,	// (0x0008edba) image3_infobar_pane

0x87f3,	// (0x00090e1a) fs_bigclock_status_pane_ParamLimits

0x87f3,	// (0x00090e1a) fs_bigclock_status_pane

0x8800,	// (0x00090e27) main_fs_bigclock_clock_pane_ParamLimits

0x8800,	// (0x00090e27) main_fs_bigclock_clock_pane

0x8814,	// (0x00090e3b) main_fs_bigclock_indi_pane_ParamLimits

0x8814,	// (0x00090e3b) main_fs_bigclock_indi_pane

0x883c,	// (0x00090e63) main_fs_bigclock_swipe_pane_ParamLimits

0x883c,	// (0x00090e63) main_fs_bigclock_swipe_pane

0xac16,	// (0x0009323d) main_fs_clock_dumped_data

0xb282,	// (0x000938a9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb282,	// (0x000938a9) list_single_fs_bigclock_indicator_pane_g1

0xb29d,	// (0x000938c4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb29d,	// (0x000938c4) list_single_fs_bigclock_indicator_pane_g2

0xb2b7,	// (0x000938de) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb2b7,	// (0x000938de) list_single_fs_bigclock_indicator_pane_g3

0xb2d1,	// (0x000938f8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb2d1,	// (0x000938f8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb97,	// (0x000981be) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb97,	// (0x000981be) list_single_fs_bigclock_indicator_pane_g

0xb2fc,	// (0x00093923) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb2fc,	// (0x00093923) list_single_fs_bigclock_indicator_pane_t1

0xb324,	// (0x0009394b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb324,	// (0x0009394b) list_single_fs_bigclock_indicator_pane_t2

0xb34c,	// (0x00093973) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb34c,	// (0x00093973) list_single_fs_bigclock_indicator_pane_t3

0xb374,	// (0x0009399b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb374,	// (0x0009399b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba2,	// (0x000981c9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba2,	// (0x000981c9) list_single_fs_bigclock_indicator_pane_t

0xb9d4,	// (0x00093ffb) image3_infobar_fav_pane_ParamLimits

0xb9d4,	// (0x00093ffb) image3_infobar_fav_pane

0xb9e4,	// (0x0009400b) image3_infobar_loc_pane_ParamLimits

0xb9e4,	// (0x0009400b) image3_infobar_loc_pane

0xb9f8,	// (0x0009401f) image3_infobar_time_pane_ParamLimits

0xb9f8,	// (0x0009401f) image3_infobar_time_pane

0xc5c0,	// (0x00094be7) image3_infobar_time_pane_g1

0xba08,	// (0x0009402f) image3_infobar_time_pane_t1

0xc5c0,	// (0x00094be7) image3_infobar_loc_pane_g1

0xba16,	// (0x0009403d) image3_infobar_loc_pane_g2

0x0001,

0xfd00,	// (0x00098327) image3_infobar_loc_pane_g

0xba1e,	// (0x00094045) image3_infobar_loc_pane_t1

0xc5c0,	// (0x00094be7) image3_infobar_fav_pane_g1

0xba2c,	// (0x00094053) image3_infobar_fav_pane_g2

0x0001,

0xfd05,	// (0x0009832c) image3_infobar_fav_pane_g

0xba34,	// (0x0009405b) fs_bigclock_status_battery_pane

0xba3d,	// (0x00094064) fs_bigclock_status_signal_pane

0xba46,	// (0x0009406d) fs_bigclock_status_title_pane

0xba4f,	// (0x00094076) fs_bigclock_status_signal_pane_g1

0xba58,	// (0x0009407f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0a,	// (0x00098331) fs_bigclock_status_signal_pane_g

0xba60,	// (0x00094087) fs_bigclock_status_battery_pane_g1

0xba69,	// (0x00094090) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd0f,	// (0x00098336) fs_bigclock_status_battery_pane_g

0xba71,	// (0x00094098) fs_bigclock_status_title_pane_t1

0x924a,	// (0x00091871) main_fs_bigclock_clock_pane_g1

0x924a,	// (0x00091871) main_fs_bigclock_clock_pane_g2

0x9257,	// (0x0009187e) main_fs_bigclock_clock_pane_g3

0x9257,	// (0x0009187e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd14,	// (0x0009833b) main_fs_bigclock_clock_pane_g

0x9263,	// (0x0009188a) main_fs_bigclock_clock_pane_t1

0x9276,	// (0x0009189d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1d,	// (0x00098344) main_fs_bigclock_clock_pane_t

0xba7f,	// (0x000940a6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xba7f,	// (0x000940a6) list_single_fs_bigclock_indicator_pane

0xba90,	// (0x000940b7) list_single_fs_bigclock_pane_ParamLimits

0xba90,	// (0x000940b7) list_single_fs_bigclock_pane

0xbab6,	// (0x000940dd) main_fs_bigclock_indicator_pane_t1

0xbac5,	// (0x000940ec) list_single_fs_bigclock_pane_g1

0xbacd,	// (0x000940f4) list_single_fs_bigclock_pane_t1

0xc5c0,	// (0x00094be7) main_fs_bigclock_swipe_pane_g1

0xbb10,	// (0x00094137) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2e,	// (0x00098355) main_fs_bigclock_swipe_pane_g

0xbb18,	// (0x0009413f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbb18,	// (0x0009413f) main_fs_bigclock_swipe_pane_t1

0x4469,	// (0x0008ca90) call_type_pane_ParamLimits

0xac16,	// (0x0009323d) main_btmg_pane

0x0441,	// (0x00088a68) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0441,	// (0x00088a68) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca1,	// (0x000982c8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca1,	// (0x000982c8) list_single_cale_mrui_row_pane_g

0x04c7,	// (0x00088aee) list_recal_vselct_arw_lo_pane

0xb94f,	// (0x00093f76) list_recal_vselct_arw_up_pane

0x04cf,	// (0x00088af6) list_recal_vselct_pane

0x92cd,	// (0x000918f4) btmg_button_pane

0x92d9,	// (0x00091900) main_btmg_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp044

0xbb35,	// (0x0009415c) btmg_button_pane_t1

0xe4e1,	// (0x00096b08) aid_listscroll_gen

0xc29e,	// (0x000948c5) main_cntbar_detail_pane

0xb645,	// (0x00093c6c) list_cmail_folder_pane

0x1157,	// (0x0008977e) sp_fs_scroll_pane_cp03_ParamLimits

0x92e1,	// (0x00091908) list_single_fs_dyc_pane_cp01_ParamLimits

0x92e1,	// (0x00091908) list_single_fs_dyc_pane_cp01

0xbb43,	// (0x0009416a) aid_size_cmail_indent

0x0546,	// (0x00088b6d) list_single_dyc_row_pane_cp01

0x9329,	// (0x00091950) cntbar_detail_list_pane_ParamLimits

0x9329,	// (0x00091950) cntbar_detail_list_pane

0x9363,	// (0x0009198a) main_cntbar_detail_cont_pane_ParamLimits

0x9363,	// (0x0009198a) main_cntbar_detail_cont_pane

0x445d,	// (0x0008ca84) scroll_pane_cp032_ParamLimits

0x445d,	// (0x0008ca84) scroll_pane_cp032

0x936f,	// (0x00091996) cntbar_detail_list_event_pane_ParamLimits

0x936f,	// (0x00091996) cntbar_detail_list_event_pane

0x9335,	// (0x0009195c) cntbar_detail_list_shct_pane

0xca5e,	// (0x00095085) aid_list_gen

0xbb4c,	// (0x00094173) aid_scroll

0xbb55,	// (0x0009417c) aid_size_touch_scroll_bar

0x9383,	// (0x000919aa) aid_list_double

0xbb5e,	// (0x00094185) aid_list_single

0x938c,	// (0x000919b3) aid_list_single_lg

0x054f,	// (0x00088b76) aid_list_z_g_a_sm

0x1141,	// (0x00089768) aid_list_z_g_d

0x0557,	// (0x00088b7e) aid_txt_z_prm

0x9395,	// (0x000919bc) aid_txt_z_prm_cp01

0x93a3,	// (0x000919ca) aid_txt_z_sec

0x93b1,	// (0x000919d8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93b1,	// (0x000919d8) main_cntbar_detail_cont_pane_g1

0x93be,	// (0x000919e5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93be,	// (0x000919e5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd33,	// (0x0009835a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd33,	// (0x0009835a) main_cntbar_detail_cont_pane_g

0xbb67,	// (0x0009418e) main_cntbar_detail_cont_pane_t1

0xbb75,	// (0x0009419c) main_cntbar_detail_cont_pane_t2

0xbb83,	// (0x000941aa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd38,	// (0x0009835f) main_cntbar_detail_cont_pane_t

0x93ca,	// (0x000919f1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93ca,	// (0x000919f1) cell_cntbar_detail_list_shct_pane

0xbb91,	// (0x000941b8) cntbar_detail_list_shct_pane_g1

0xbb9a,	// (0x000941c1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd3f,	// (0x00098366) cntbar_detail_list_shct_pane_g

0x93de,	// (0x00091a05) cntbar_detail_list_event_pane_g1_ParamLimits

0x93de,	// (0x00091a05) cntbar_detail_list_event_pane_g1

0x93ea,	// (0x00091a11) cntbar_detail_list_event_pane_g2_ParamLimits

0x93ea,	// (0x00091a11) cntbar_detail_list_event_pane_g2

0x0005,

0xfd44,	// (0x0009836b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd44,	// (0x0009836b) cntbar_detail_list_event_pane_g

0x9456,	// (0x00091a7d) cntbar_detail_list_event_pane_t1_ParamLimits

0x9456,	// (0x00091a7d) cntbar_detail_list_event_pane_t1

0x946b,	// (0x00091a92) cntbar_detail_list_event_pane_t2_ParamLimits

0x946b,	// (0x00091a92) cntbar_detail_list_event_pane_t2

0x0002,

0xfd51,	// (0x00098378) cntbar_detail_list_event_pane_t_ParamLimits

0xfd51,	// (0x00098378) cntbar_detail_list_event_pane_t

0xc5c0,	// (0x00094be7) cell_cntbar_detail_list_shct_pane_g1

0xd1e1,	// (0x00095808) navi_pane_mv_g3

0xc29e,	// (0x000948c5) main_cntbar_detail_pane_ParamLimits

0xac16,	// (0x0009323d) main_notif_wgt_pane

0x643b,	// (0x0008ea62) aid_tch_main_mp4_pane_g4

0x670e,	// (0x0008ed35) popup_slider_window_cp02

0x04bd,	// (0x00088ae4) list_recal_day_event_pane

0x9309,	// (0x00091930) cntbar_detail_btn_pane_ParamLimits

0x9309,	// (0x00091930) cntbar_detail_btn_pane

0x9319,	// (0x00091940) cntbar_detail_btn_pane_cp01_ParamLimits

0x9319,	// (0x00091940) cntbar_detail_btn_pane_cp01

0x9335,	// (0x0009195c) cntbar_detail_list_shct_pane_ParamLimits

0x9341,	// (0x00091968) cntbar_detail_pane_g1_ParamLimits

0x9341,	// (0x00091968) cntbar_detail_pane_g1

0x934d,	// (0x00091974) cntbar_detail_pane_t1_ParamLimits

0x934d,	// (0x00091974) cntbar_detail_pane_t1

0x93f6,	// (0x00091a1d) cntbar_detail_list_event_pane_g3_ParamLimits

0x93f6,	// (0x00091a1d) cntbar_detail_list_event_pane_g3

0x940e,	// (0x00091a35) cntbar_detail_list_event_pane_g4_ParamLimits

0x940e,	// (0x00091a35) cntbar_detail_list_event_pane_g4

0x9426,	// (0x00091a4d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9426,	// (0x00091a4d) cntbar_detail_list_event_pane_g5

0x943e,	// (0x00091a65) cntbar_detail_list_event_pane_g6_ParamLimits

0x943e,	// (0x00091a65) cntbar_detail_list_event_pane_g6

0x9480,	// (0x00091aa7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9480,	// (0x00091aa7) cntbar_detail_list_event_pane_t3

0x9492,	// (0x00091ab9) popup_notif_wgt_window_ParamLimits

0x9492,	// (0x00091ab9) popup_notif_wgt_window

0x94a2,	// (0x00091ac9) popup_submenu_window_cp01_ParamLimits

0x94a2,	// (0x00091ac9) popup_submenu_window_cp01

0xc7d0,	// (0x00094df7) bg_popup_window_pane_cp10

0xbba3,	// (0x000941ca) listscroll_notif_wgt_pane

0xbbb5,	// (0x000941dc) list_notif_wgt_window

0xbbbe,	// (0x000941e5) scroll_pane_cp033

0x94b4,	// (0x00091adb) list_notif_wgt_row_pane_ParamLimits

0x94b4,	// (0x00091adb) list_notif_wgt_row_pane

0xbbc7,	// (0x000941ee) aid_size_list_notif_wgt_del

0xbbd4,	// (0x000941fb) list_notif_wgt_row_pane_g1

0xbbe0,	// (0x00094207) list_notif_wgt_row_pane_g2

0xbbef,	// (0x00094216) list_notif_wgt_row_pane_g3

0x0002,

0xfd58,	// (0x0009837f) list_notif_wgt_row_pane_g

0xbbfc,	// (0x00094223) list_notif_wgt_row_pane_t1

0xbc12,	// (0x00094239) list_notif_wgt_row_pane_t2

0xbc24,	// (0x0009424b) list_notif_wgt_row_pane_t3

0x0002,

0xfd5f,	// (0x00098386) list_notif_wgt_row_pane_t

0x1006,	// (0x0008962d) list_recal_day_event_pane_g1

0xbc36,	// (0x0009425d) list_recal_day_event_pane_t1

0xac16,	// (0x0009323d) bg_button_pane_cp045

0xbc45,	// (0x0009426c) cntbar_detail_btn_pane_t1

0xd3b2,	// (0x000959d9) main_callh_pane_ParamLimits

0xd3b2,	// (0x000959d9) main_callh_pane

0xac16,	// (0x0009323d) main_coverflow0_pane

0xac16,	// (0x0009323d) main_wgtman_pane

0x8854,	// (0x00090e7b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8854,	// (0x00090e7b) main_fs_bigclock_unlock_btn_pane

0x8cdd,	// (0x00091304) bg_button_pane_cp16

0x8ced,	// (0x00091314) cell_tport_appsw_pane_g3

0x94c6,	// (0x00091aed) cf0_flow_pane_ParamLimits

0x94c6,	// (0x00091aed) cf0_flow_pane

0xbc53,	// (0x0009427a) listscroll_cf0_pane

0xbc5e,	// (0x00094285) main_cf0_pane_g1

0x94d5,	// (0x00091afc) main_cf0_pane_t1_ParamLimits

0x94d5,	// (0x00091afc) main_cf0_pane_t1

0x94e9,	// (0x00091b10) main_cf0_pane_t2_ParamLimits

0x94e9,	// (0x00091b10) main_cf0_pane_t2

0x0001,

0xfd6b,	// (0x00098392) main_cf0_pane_t_ParamLimits

0xfd6b,	// (0x00098392) main_cf0_pane_t

0xbc70,	// (0x00094297) scroll_pane_cp11

0x94fd,	// (0x00091b24) cf0_flow_pane_g1

0x9505,	// (0x00091b2c) cf0_flow_pane_g2

0x0001,

0xfd70,	// (0x00098397) cf0_flow_pane_g

0x950d,	// (0x00091b34) cf0_flow_pane_t1

0xac16,	// (0x0009323d) main_call6_pane

0xac16,	// (0x0009323d) main_calllock_pane

0x951b,	// (0x00091b42) call6_btn_grp_pane_ParamLimits

0x951b,	// (0x00091b42) call6_btn_grp_pane

0x952a,	// (0x00091b51) call6_pane_g1_ParamLimits

0x952a,	// (0x00091b51) call6_pane_g1

0x953a,	// (0x00091b61) popup_call6_1st_window_ParamLimits

0x953a,	// (0x00091b61) popup_call6_1st_window

0x9548,	// (0x00091b6f) popup_call6_2nd_window_ParamLimits

0x9548,	// (0x00091b6f) popup_call6_2nd_window

0x9556,	// (0x00091b7d) cell_call6_btn_pane_ParamLimits

0x9556,	// (0x00091b7d) cell_call6_btn_pane

0xc7d0,	// (0x00094df7) bg_popup_call2_in_pane_cp03

0xbc7b,	// (0x000942a2) popup_call6_1st_window_g1

0xbc83,	// (0x000942aa) popup_call6_1st_window_g2

0xbc8b,	// (0x000942b2) popup_call6_1st_window_g3

0x0002,

0xfd75,	// (0x0009839c) popup_call6_1st_window_g

0xbc93,	// (0x000942ba) popup_call6_1st_window_t1

0xbca2,	// (0x000942c9) popup_call6_1st_window_t2

0xbcb0,	// (0x000942d7) popup_call6_1st_window_t3

0x0002,

0xfd7c,	// (0x000983a3) popup_call6_1st_window_t

0xc7d0,	// (0x00094df7) bg_popup_call2_in_pane_cp04

0xbcbe,	// (0x000942e5) popup_call6_2nd_window_g1

0xbcc6,	// (0x000942ed) popup_call6_2nd_window_g2

0xbcce,	// (0x000942f5) popup_call6_2nd_window_g3

0x0002,

0xfd83,	// (0x000983aa) popup_call6_2nd_window_g

0xbcd6,	// (0x000942fd) popup_call6_2nd_window_t1

0x27c2,	// (0x0008ade9) bg_button_pane_cp15

0x9565,	// (0x00091b8c) cell_call6_btn_pane_g1

0x956e,	// (0x00091b95) cell_call6_btn_pane_t1

0x957d,	// (0x00091ba4) listscroll_wgtman_pane_ParamLimits

0x957d,	// (0x00091ba4) listscroll_wgtman_pane

0x9599,	// (0x00091bc0) wgtman_btn_pane_ParamLimits

0x9599,	// (0x00091bc0) wgtman_btn_pane

0xcfe8,	// (0x0009560f) aid_scroll_copy1

0xbce5,	// (0x0009430c) list_wgtman_pane

0x95ce,	// (0x00091bf5) wgtman_btn_pane_g1_ParamLimits

0x95ce,	// (0x00091bf5) wgtman_btn_pane_g1

0x95f6,	// (0x00091c1d) wgtman_btn_pane_t1_ParamLimits

0x95f6,	// (0x00091c1d) wgtman_btn_pane_t1

0xbcef,	// (0x00094316) wgtman_btn_pane_t2_ParamLimits

0xbcef,	// (0x00094316) wgtman_btn_pane_t2

0x0001,

0xfd8a,	// (0x000983b1) wgtman_btn_pane_t_ParamLimits

0xfd8a,	// (0x000983b1) wgtman_btn_pane_t

0x962d,	// (0x00091c54) listrow_wgtman_pane_ParamLimits

0x962d,	// (0x00091c54) listrow_wgtman_pane

0x9648,	// (0x00091c6f) listrow_wgtman_pane_g1

0x9655,	// (0x00091c7c) listrow_wgtman_pane_g2

0x0001,

0xfd8f,	// (0x000983b6) listrow_wgtman_pane_g

0x9673,	// (0x00091c9a) listrow_wgtman_pane_t1

0x968b,	// (0x00091cb2) listrow_wgtman_pane_t2

0x0001,

0xfd94,	// (0x000983bb) listrow_wgtman_pane_t

0x96b1,	// (0x00091cd8) wait_bar_pane_cp09

0xbd06,	// (0x0009432d) main_calllock_btn_pane

0xbd10,	// (0x00094337) main_calllock_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp17

0xbd18,	// (0x0009433f) main_calllock_btn_pane_g1

0xbd21,	// (0x00094348) main_calllock_btn_pane_t1

0xac16,	// (0x0009323d) main_dialer3_pane

0xac16,	// (0x0009323d) main_fmrd2_pane

0xc5c0,	// (0x00094be7) main_fs_bigclock_unlock_btn_pane_g1

0x96cb,	// (0x00091cf2) main_fs_bigclock_unlock_btn_pane_t1

0x96d9,	// (0x00091d00) area_fmrd2_info_pane_ParamLimits

0x96d9,	// (0x00091d00) area_fmrd2_info_pane

0x96e7,	// (0x00091d0e) area_fmrd2_visual_pane_ParamLimits

0x96e7,	// (0x00091d0e) area_fmrd2_visual_pane

0x96f5,	// (0x00091d1c) fmrd2_indi_pane_ParamLimits

0x96f5,	// (0x00091d1c) fmrd2_indi_pane

0x9702,	// (0x00091d29) area_fmrd2_visual_pane_g1

0x970a,	// (0x00091d31) area_fmrd2_visual_pane_t1

0x971a,	// (0x00091d41) area_fmrd2_visual_pane_t2

0x972a,	// (0x00091d51) area_fmrd2_visual_pane_t3

0x0002,

0xfd9e,	// (0x000983c5) area_fmrd2_visual_pane_t

0x973a,	// (0x00091d61) area_fmrd2_info_pane_g1

0x9742,	// (0x00091d69) area_fmrd2_info_pane_t1

0x9752,	// (0x00091d79) area_fmrd2_info_pane_t2

0x9762,	// (0x00091d89) area_fmrd2_info_pane_t3

0x9772,	// (0x00091d99) area_fmrd2_info_pane_t4

0x0003,

0xfda5,	// (0x000983cc) area_fmrd2_info_pane_t

0x9780,	// (0x00091da7) fmrd2_indi_pane_t1

0x9790,	// (0x00091db7) fmrd2_indi_pane_t2

0x97a0,	// (0x00091dc7) fmrd2_indi_pane_t3

0x0002,

0xfdae,	// (0x000983d5) fmrd2_indi_pane_t

0xb2e0,	// (0x00093907) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb2e0,	// (0x00093907) list_single_fs_bigclock_indicator_pane_g5

0xb391,	// (0x000939b8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb391,	// (0x000939b8) list_single_fs_bigclock_indicator_pane_t5

0x8edd,	// (0x00091504) aid_cell_bcale_month_pane_ParamLimits

0x8edd,	// (0x00091504) aid_cell_bcale_month_pane

0x8efb,	// (0x00091522) bcale_month_pane_ParamLimits

0x8efb,	// (0x00091522) bcale_month_pane

0x8f19,	// (0x00091540) bcale_preview_pane_ParamLimits

0x8f19,	// (0x00091540) bcale_preview_pane

0xbacd,	// (0x000940f4) list_single_fs_bigclock_pane_t1_ParamLimits

0xbaec,	// (0x00094113) list_single_fs_bigclock_pane_t2_ParamLimits

0xbaec,	// (0x00094113) list_single_fs_bigclock_pane_t2

0x0001,

0xfd29,	// (0x00098350) list_single_fs_bigclock_pane_t_ParamLimits

0xfd29,	// (0x00098350) list_single_fs_bigclock_pane_t

0x96c3,	// (0x00091cea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd99,	// (0x000983c0) main_fs_bigclock_unlock_btn_pane_g

0x97ae,	// (0x00091dd5) aid_dia3_key_size_ParamLimits

0x97ae,	// (0x00091dd5) aid_dia3_key_size

0x97ba,	// (0x00091de1) aid_dia3_listrow_size_ParamLimits

0x97ba,	// (0x00091de1) aid_dia3_listrow_size

0x97ca,	// (0x00091df1) dia3_keypad_fun_pane_ParamLimits

0x97ca,	// (0x00091df1) dia3_keypad_fun_pane

0x97dc,	// (0x00091e03) dia3_keypad_num_pane_ParamLimits

0x97dc,	// (0x00091e03) dia3_keypad_num_pane

0x97ee,	// (0x00091e15) dia3_listscroll_pane_ParamLimits

0x97ee,	// (0x00091e15) dia3_listscroll_pane

0x97fc,	// (0x00091e23) dia3_numentry_pane_ParamLimits

0x97fc,	// (0x00091e23) dia3_numentry_pane

0xbd30,	// (0x00094357) dia3_list_pane

0xbd3b,	// (0x00094362) scroll_pane_cp12

0xac16,	// (0x0009323d) bg_dia3_numentry_pane

0x980a,	// (0x00091e31) dia3_numentry_pane_t1

0x9819,	// (0x00091e40) cell_dia3_key_num_pane

0x9821,	// (0x00091e48) cell_dia3_key0_fun_pane_ParamLimits

0x9821,	// (0x00091e48) cell_dia3_key0_fun_pane

0x982e,	// (0x00091e55) cell_dia3_key1_fun_pane_ParamLimits

0x982e,	// (0x00091e55) cell_dia3_key1_fun_pane

0x983b,	// (0x00091e62) dia3_listrow_pane

0xb033,	// (0x0009365a) bg_dia3_numentry_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp21

0xbd46,	// (0x0009436d) cell_dia3_key_num_pane_t1

0xbd54,	// (0x0009437b) cell_dia3_key_num_pane_t2

0xbd63,	// (0x0009438a) cell_dia3_key_num_pane_t3

0xbd72,	// (0x00094399) cell_dia3_key_num_pane_t4

0x0003,

0xfdb5,	// (0x000983dc) cell_dia3_key_num_pane_t

0xac16,	// (0x0009323d) bg_button_pane_cp19

0x9848,	// (0x00091e6f) cell_dia3_key0_fun_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp20

0x9850,	// (0x00091e77) cell_dia3_key1_fun_pane_g1

0x9858,	// (0x00091e7f) area_left_week_number_pane

0x986b,	// (0x00091e92) area_top_day_name_pane

0x9879,	// (0x00091ea0) frame_month_view_pane

0xbd81,	// (0x000943a8) grid_month_view_pane

0x988e,	// (0x00091eb5) cell_top_day_name_pane_ParamLimits

0x988e,	// (0x00091eb5) cell_top_day_name_pane

0x98a8,	// (0x00091ecf) cell_area_left_week_number_pane_ParamLimits

0x98a8,	// (0x00091ecf) cell_area_left_week_number_pane

0x98cb,	// (0x00091ef2) cell_month_view_pane_ParamLimits

0x98cb,	// (0x00091ef2) cell_month_view_pane

0xbd8f,	// (0x000943b6) frm_month_g1

0x98f7,	// (0x00091f1e) frm_month_g2

0x9908,	// (0x00091f2f) frm_month_g3

0x9919,	// (0x00091f40) frm_month_g4

0x992a,	// (0x00091f51) frm_month_g5

0x993d,	// (0x00091f64) frm_month_g6

0x9950,	// (0x00091f77) frm_month_g7

0xbd9c,	// (0x000943c3) frm_month_g8

0x9963,	// (0x00091f8a) frm_month_g9

0x9970,	// (0x00091f97) frm_month_g10

0x997d,	// (0x00091fa4) frm_month_g11

0x998a,	// (0x00091fb1) frm_month_g12

0x9997,	// (0x00091fbe) frm_month_g13

0x99a4,	// (0x00091fcb) frm_month_g14

0x99b3,	// (0x00091fda) frm_month_g15

0x99c2,	// (0x00091fe9) frm_month_g16

0x000f,

0xfdbe,	// (0x000983e5) frm_month_g

0xbda9,	// (0x000943d0) cell_top_day_name_pane_t1

0x99d1,	// (0x00091ff8) cell_area_left_week_number_pane_g1

0x99e0,	// (0x00092007) cell_area_left_week_number_pane_t1

0xc582,	// (0x00094ba9) cell_month_view_pane_g1

0x99f6,	// (0x0009201d) cell_month_view_pane_t1

0xac16,	// (0x0009323d) main_fps_pane

0xb55e,	// (0x00093b85) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb55e,	// (0x00093b85) cmail_ddmenu_btn02_pane_cp1

0xb57a,	// (0x00093ba1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb57a,	// (0x00093ba1) cmail_ddmenu_btn02_pane_cp2

0x91b1,	// (0x000917d8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91b1,	// (0x000917d8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdc,	// (0x00098303) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdc,	// (0x00098303) cmail_ddmenu_btn02_pane_g

0x91cf,	// (0x000917f6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91cf,	// (0x000917f6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce1,	// (0x00098308) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce1,	// (0x00098308) cmail_ddmenu_btn02_pane_t

0x9a0c,	// (0x00092033) fps_text_pane_ParamLimits

0x9a0c,	// (0x00092033) fps_text_pane

0x9a19,	// (0x00092040) main_fps_pane_g1_ParamLimits

0x9a19,	// (0x00092040) main_fps_pane_g1

0x9a27,	// (0x0009204e) wait_bar_pane_cp010_ParamLimits

0x9a27,	// (0x0009204e) wait_bar_pane_cp010

0x9a33,	// (0x0009205a) fps_text_pane_t1_ParamLimits

0x9a33,	// (0x0009205a) fps_text_pane_t1

0x6b25,	// (0x0008f14c) cam4_image_uncrop_pane_g1

0x6b2e,	// (0x0008f155) cam4_image_uncrop_pane_g2

0x6b37,	// (0x0008f15e) cam4_image_uncrop_pane_g3

0x6b40,	// (0x0008f167) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x00097e42) cam4_image_uncrop_pane_g

0x983b,	// (0x00091e62) dia3_listrow_pane_ParamLimits

0xac16,	// (0x0009323d) main_phob2_pane

0x8cbf,	// (0x000912e6) cell_tport_appsw_pane_cp02_ParamLimits

0x8cbf,	// (0x000912e6) cell_tport_appsw_pane_cp02

0x8cce,	// (0x000912f5) cell_tport_appsw_pane_cp03_ParamLimits

0x8cce,	// (0x000912f5) cell_tport_appsw_pane_cp03

0xac16,	// (0x0009323d) phob2_contact_card_pane

0xac16,	// (0x0009323d) phob2_listscroll_pane

0xbdbc,	// (0x000943e3) phob2_list_pane

0xb912,	// (0x00093f39) scroll_pane_cp034

0x9a4c,	// (0x00092073) phob2_cc_data_pane_ParamLimits

0x9a4c,	// (0x00092073) phob2_cc_data_pane

0x9a66,	// (0x0009208d) phob2_cc_listscroll_pane_ParamLimits

0x9a66,	// (0x0009208d) phob2_cc_listscroll_pane

0x962d,	// (0x00091c54) list_double_large_graphic_phob2_pane_ParamLimits

0x962d,	// (0x00091c54) list_double_large_graphic_phob2_pane

0x9a80,	// (0x000920a7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a80,	// (0x000920a7) list_double_large_graphic_phob2_pane_g1

0x9a8d,	// (0x000920b4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a8d,	// (0x000920b4) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfddf,	// (0x00098406) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfddf,	// (0x00098406) list_double_large_graphic_phob2_pane_g

0x9ab3,	// (0x000920da) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9ab3,	// (0x000920da) list_double_large_graphic_phob2_pane_t1

0x9ac8,	// (0x000920ef) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9ac8,	// (0x000920ef) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde8,	// (0x0009840f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde8,	// (0x0009840f) list_double_large_graphic_phob2_pane_t

0xac16,	// (0x0009323d) list_highlight_pane_cp024

0xbdc4,	// (0x000943eb) phob2_cc_button_pane

0x9add,	// (0x00092104) phob2_cc_data_pane_g1_ParamLimits

0x9add,	// (0x00092104) phob2_cc_data_pane_g1

0x9aec,	// (0x00092113) phob2_cc_data_pane_g2_ParamLimits

0x9aec,	// (0x00092113) phob2_cc_data_pane_g2

0x0001,

0xfded,	// (0x00098414) phob2_cc_data_pane_g_ParamLimits

0xfded,	// (0x00098414) phob2_cc_data_pane_g

0x9afb,	// (0x00092122) phob2_cc_data_pane_t1_ParamLimits

0x9afb,	// (0x00092122) phob2_cc_data_pane_t1

0x9b10,	// (0x00092137) phob2_cc_data_pane_t2_ParamLimits

0x9b10,	// (0x00092137) phob2_cc_data_pane_t2

0x9b25,	// (0x0009214c) phob2_cc_data_pane_t3_ParamLimits

0x9b25,	// (0x0009214c) phob2_cc_data_pane_t3

0x0002,

0xfdf2,	// (0x00098419) phob2_cc_data_pane_t_ParamLimits

0xfdf2,	// (0x00098419) phob2_cc_data_pane_t

0xbdcc,	// (0x000943f3) phob2_cc_list_pane_ParamLimits

0xbdcc,	// (0x000943f3) phob2_cc_list_pane

0x11a9,	// (0x000897d0) scroll_pane_cp035_ParamLimits

0x11a9,	// (0x000897d0) scroll_pane_cp035

0xc29e,	// (0x000948c5) bg_button_pane_cp033

0xbdd8,	// (0x000943ff) phob2_cc_button_pane_g1

0xbde4,	// (0x0009440b) phob2_cc_button_pane_t1

0xbdf9,	// (0x00094420) phob2_cc_button_pane_t2

0x0001,

0xfdf9,	// (0x00098420) phob2_cc_button_pane_t

0x9b3a,	// (0x00092161) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b3a,	// (0x00092161) list_double_large_graphic_phob2_cc_pane

0x9ba8,	// (0x000921cf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ba8,	// (0x000921cf) list_double_large_graphic_phob2_cc_pane_g1

0x9bb9,	// (0x000921e0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9bb9,	// (0x000921e0) list_double_large_graphic_phob2_cc_pane_g2

0x9bc5,	// (0x000921ec) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9bc5,	// (0x000921ec) list_double_large_graphic_phob2_cc_pane_g3

0x9bd1,	// (0x000921f8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9bd1,	// (0x000921f8) list_double_large_graphic_phob2_cc_pane_g4

0x9bdd,	// (0x00092204) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9bdd,	// (0x00092204) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdfe,	// (0x00098425) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdfe,	// (0x00098425) list_double_large_graphic_phob2_cc_pane_g

0x9be9,	// (0x00092210) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9be9,	// (0x00092210) list_double_large_graphic_phob2_cc_pane_t1

0x9c12,	// (0x00092239) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c12,	// (0x00092239) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe09,	// (0x00098430) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe09,	// (0x00098430) list_double_large_graphic_phob2_cc_pane_t

0xbe0b,	// (0x00094432) list_highlight_pane_cp025_ParamLimits

0xbe0b,	// (0x00094432) list_highlight_pane_cp025

0xc29e,	// (0x000948c5) bg_button_pane_cp033_ParamLimits

0xbdd8,	// (0x000943ff) phob2_cc_button_pane_g1_ParamLimits

0xbde4,	// (0x0009440b) phob2_cc_button_pane_t1_ParamLimits

0xbdf9,	// (0x00094420) phob2_cc_button_pane_t2_ParamLimits

0xfdf9,	// (0x00098420) phob2_cc_button_pane_t_ParamLimits

0x27b6,	// (0x0008addd) popup_wgtman_window

0x0e67,	// (0x0008948e) scroll_pane_cp038

0x95b6,	// (0x00091bdd) wgtman_btn_pane_cp_01_ParamLimits

0x95b6,	// (0x00091bdd) wgtman_btn_pane_cp_01

0xbe19,	// (0x00094440) wgtman_content_pane

0xbe22,	// (0x00094449) wgtman_heading_pane

0xac16,	// (0x0009323d) bg_heading_pane_cp02

0xbe2b,	// (0x00094452) wgtman_heading_pane_g1

0xbe33,	// (0x0009445a) wgtman_heading_pane_t1

0xbe41,	// (0x00094468) scroll_pane_cp036

0xbe49,	// (0x00094470) wgtman_list_pane

0xbe51,	// (0x00094478) wgtman_list_pane_t1_ParamLimits

0xbe51,	// (0x00094478) wgtman_list_pane_t1

0x6a84,	// (0x0008f0ab) cam4_grid_pane

0x777a,	// (0x0008fda1) bg_button_pane_cp015_ParamLimits

0x778f,	// (0x0008fdb6) bg_button_pane_cp016_ParamLimits

0x779b,	// (0x0008fdc2) bg_button_pane_cp017_ParamLimits

0x77f3,	// (0x0008fe1a) popup_vitu2_query_window_g3_ParamLimits

0x77f3,	// (0x0008fe1a) popup_vitu2_query_window_g3

0x7894,	// (0x0008febb) popup_vitu2_query_window_t6_ParamLimits

0x7894,	// (0x0008febb) popup_vitu2_query_window_t6

0x78bf,	// (0x0008fee6) popup_vitu2_query_window_t7_ParamLimits

0x78bf,	// (0x0008fee6) popup_vitu2_query_window_t7

0xbe6b,	// (0x00094492) cam4_grid_pane_g1

0xbe74,	// (0x0009449b) cam4_grid_pane_g2

0xbe7d,	// (0x000944a4) cam4_grid_pane_g3

0xbe86,	// (0x000944ad) cam4_grid_pane_g4

0x0003,

0xfe0e,	// (0x00098435) cam4_grid_pane_g

0x3220,	// (0x0008b847) aid_placing_vt_slider_lsc_ParamLimits

0x356c,	// (0x0008bb93) vidtel_button_pane_ParamLimits

0x356c,	// (0x0008bb93) vidtel_button_pane

0xac16,	// (0x0009323d) bg_button_pane_cp034

0xbe91,	// (0x000944b8) vidtel_button_pane_g1

0xbe99,	// (0x000944c0) vidtel_button_pane_t1

0x0fba,	// (0x000895e1) aid_size_vtel_slider_touch

0x11a9,	// (0x000897d0) scroll_pane_cp039

0x860c,	// (0x00090c33) ncim_query_button_pane_cp01_ParamLimits

0x862b,	// (0x00090c52) ncimui_query_pane_g1_ParamLimits

0xc29e,	// (0x000948c5) input_focus_pane_cp012_ParamLimits

0xb071,	// (0x00093698) ncim_query_entry_pane_t1_ParamLimits

0x11a9,	// (0x000897d0) scroll_pane_cp039_ParamLimits

0xd0cc,	// (0x000956f3) navi_pane_bcale_mc_g1

0xd0d4,	// (0x000956fb) navi_pane_bcale_mc_t1

0xb5ae,	// (0x00093bd5) main_sp_fs_email_pane_g1

0xb5ba,	// (0x00093be1) main_sp_fs_email_pane_g2

0x0001,

0xfc0c,	// (0x00098233) main_sp_fs_email_pane_g

0xb831,	// (0x00093e58) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb831,	// (0x00093e58) list_single_cale_mrui_row_pane_g3

0x91ef,	// (0x00091816) list_single_recal_day_pane_g5_event_pane

0x051a,	// (0x00088b41) list_single_recal_day_pane_g7

0x0565,	// (0x00088b8c) list_recal_day_event_pane_cp01

0x056e,	// (0x00088b95) list_recal_vselct_arw_lo_pane_cp01

0x0576,	// (0x00088b9d) list_recal_vselct_arw_up_pane_cp01

0x057e,	// (0x00088ba5) list_recal_vselct_pane_cp01

0x1006,	// (0x0008962d) list_recal_day_event_pane_cp01_g1

0x0588,	// (0x00088baf) list_recal_day_event_pane_cp01_t1

0x0522,	// (0x00088b49) list_single_recal_day_pane_t1_ParamLimits

0x0534,	// (0x00088b5b) list_single_recal_day_pane_t2_ParamLimits

0xfcf1,	// (0x00098318) list_single_recal_day_pane_t_ParamLimits

0xc507,	// (0x00094b2e) bg_notes_pane_ParamLimits

0xc5fc,	// (0x00094c23) list_notes_pane_ParamLimits

0x2900,	// (0x0008af27) scroll_pane_cp06_ParamLimits

0xc61e,	// (0x00094c45) main_notes_pane_ParamLimits

0xc29e,	// (0x000948c5) main_welc_pane

0x9c5d,	// (0x00092284) main_welc_body_pane_ParamLimits

0x9c5d,	// (0x00092284) main_welc_body_pane

0x9c77,	// (0x0009229e) main_welc_opti_pane_ParamLimits

0x9c77,	// (0x0009229e) main_welc_opti_pane

0x9cd6,	// (0x000922fd) main_welc_pane_t1_ParamLimits

0x9cd6,	// (0x000922fd) main_welc_pane_t1

0x9e6c,	// (0x00092493) main_welc_body_row_pane_ParamLimits

0x9e6c,	// (0x00092493) main_welc_body_row_pane

0xc574,	// (0x00094b9b) main_welc_opti_row_pane_ParamLimits

0xc574,	// (0x00094b9b) main_welc_opti_row_pane

0x05a6,	// (0x00088bcd) main_welc_opti_row_pane_g1

0x9e91,	// (0x000924b8) main_welc_opti_row_pane_t1

0x05ae,	// (0x00088bd5) main_welc_body_row_pane_t1

0xbbad,	// (0x000941d4) popup_notif_wgt_heading_pane

0xbbc7,	// (0x000941ee) aid_size_list_notif_wgt_del_ParamLimits

0xbbd4,	// (0x000941fb) list_notif_wgt_row_pane_g1_ParamLimits

0xbbe0,	// (0x00094207) list_notif_wgt_row_pane_g2_ParamLimits

0xbbef,	// (0x00094216) list_notif_wgt_row_pane_g3_ParamLimits

0xfd58,	// (0x0009837f) list_notif_wgt_row_pane_g_ParamLimits

0xbbfc,	// (0x00094223) list_notif_wgt_row_pane_t1_ParamLimits

0xbc12,	// (0x00094239) list_notif_wgt_row_pane_t2_ParamLimits

0xbc24,	// (0x0009424b) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5f,	// (0x00098386) list_notif_wgt_row_pane_t_ParamLimits

0x9648,	// (0x00091c6f) listrow_wgtman_pane_g1_ParamLimits

0x9655,	// (0x00091c7c) listrow_wgtman_pane_g2_ParamLimits

0xfd8f,	// (0x000983b6) listrow_wgtman_pane_g_ParamLimits

0x9673,	// (0x00091c9a) listrow_wgtman_pane_t1_ParamLimits

0x968b,	// (0x00091cb2) listrow_wgtman_pane_t2_ParamLimits

0xfd94,	// (0x000983bb) listrow_wgtman_pane_t_ParamLimits

0x96b1,	// (0x00091cd8) wait_bar_pane_cp09_ParamLimits

0xac16,	// (0x0009323d) bg_popup_heading_pane_cp02

0x05bd,	// (0x00088be4) popup_notif_wgt_heading_pane_g1

0x05c5,	// (0x00088bec) popup_notif_wgt_heading_pane_t1

0xac16,	// (0x0009323d) main_vids_pane

0xac16,	// (0x0009323d) vids_listscroll_pane

0x9ea0,	// (0x000924c7) scroll_pane_cp040

0xac16,	// (0x0009323d) vids_list_pane

0x9eab,	// (0x000924d2) vids_list_double_pane_ParamLimits

0x9eab,	// (0x000924d2) vids_list_double_pane

0x9ec2,	// (0x000924e9) vids_list_double_pane_g1

0x9ecb,	// (0x000924f2) vids_list_double_pane_t1

0x9edb,	// (0x00092502) vids_list_double_pane_t2

0x0001,

0xfe2d,	// (0x00098454) vids_list_double_pane_t

0x5210,	// (0x0008d837) main_ncimui_pane_ParamLimits

0x8463,	// (0x00090a8a) main_ncimui_pane_g1_ParamLimits

0x846f,	// (0x00090a96) main_ncimui_pane_g2_ParamLimits

0x846f,	// (0x00090a96) main_ncimui_pane_g2

0x0001,

0xfb0d,	// (0x00098134) main_ncimui_pane_g_ParamLimits

0xfb0d,	// (0x00098134) main_ncimui_pane_g

0x9c90,	// (0x000922b7) main_welc_pane_g1_ParamLimits

0x9c90,	// (0x000922b7) main_welc_pane_g1

0x9c9c,	// (0x000922c3) main_welc_pane_g2_ParamLimits

0x9c9c,	// (0x000922c3) main_welc_pane_g2

0x0003,

0xfe17,	// (0x0009843e) main_welc_pane_g_ParamLimits

0xfe17,	// (0x0009843e) main_welc_pane_g

0xc507,	// (0x00094b2e) listscroll_mce_pane_ParamLimits

0xd221,	// (0x00095848) wait_bar_pane_cp10

0xe4e9,	// (0x00096b10) main_cale_day_pane_ParamLimits

0xe4e9,	// (0x00096b10) main_cale_week_pane_ParamLimits

0xc507,	// (0x00094b2e) main_messa_pane_ParamLimits

0x5ef9,	// (0x0008e520) main_clock2_btn_pane_ParamLimits

0x5ef9,	// (0x0008e520) main_clock2_btn_pane

0xecf4,	// (0x0009731b) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x0009731b) main_clock2_btn_pane_cp01

0xb802,	// (0x00093e29) list_cale_mrui_pane_ParamLimits

0xbc68,	// (0x0009428f) main_cf0_pane_g2

0x0001,

0xfd66,	// (0x0009838d) main_cf0_pane_g

0x9858,	// (0x00091e7f) area_left_week_number_pane_ParamLimits

0x986b,	// (0x00091e92) area_top_day_name_pane_ParamLimits

0x9879,	// (0x00091ea0) frame_month_view_pane_ParamLimits

0xbd81,	// (0x000943a8) grid_month_view_pane_ParamLimits

0xbd8f,	// (0x000943b6) frm_month_g1_ParamLimits

0x98f7,	// (0x00091f1e) frm_month_g2_ParamLimits

0x9908,	// (0x00091f2f) frm_month_g3_ParamLimits

0x9919,	// (0x00091f40) frm_month_g4_ParamLimits

0x992a,	// (0x00091f51) frm_month_g5_ParamLimits

0x993d,	// (0x00091f64) frm_month_g6_ParamLimits

0x9950,	// (0x00091f77) frm_month_g7_ParamLimits

0xbd9c,	// (0x000943c3) frm_month_g8_ParamLimits

0x9963,	// (0x00091f8a) frm_month_g9_ParamLimits

0x9970,	// (0x00091f97) frm_month_g10_ParamLimits

0x997d,	// (0x00091fa4) frm_month_g11_ParamLimits

0x998a,	// (0x00091fb1) frm_month_g12_ParamLimits

0x9997,	// (0x00091fbe) frm_month_g13_ParamLimits

0x99a4,	// (0x00091fcb) frm_month_g14_ParamLimits

0x99b3,	// (0x00091fda) frm_month_g15_ParamLimits

0x99c2,	// (0x00091fe9) frm_month_g16_ParamLimits

0xfdbe,	// (0x000983e5) frm_month_g_ParamLimits

0xbda9,	// (0x000943d0) cell_top_day_name_pane_t1_ParamLimits

0x99d1,	// (0x00091ff8) cell_area_left_week_number_pane_g1_ParamLimits

0x99e0,	// (0x00092007) cell_area_left_week_number_pane_t1_ParamLimits

0xc582,	// (0x00094ba9) cell_month_view_pane_g1_ParamLimits

0x99f6,	// (0x0009201d) cell_month_view_pane_t1_ParamLimits

0xc4ff,	// (0x00094b26) main_clock2_btn_pane_g1

0x05d3,	// (0x00088bfa) main_clock2_btn_pane_t1

0xc29e,	// (0x000948c5) listscroll_cmail_pane_ParamLimits

0xb5ae,	// (0x00093bd5) main_sp_fs_email_pane_g1_ParamLimits

0xb5ba,	// (0x00093be1) main_sp_fs_email_pane_g2_ParamLimits

0xfc0c,	// (0x00098233) main_sp_fs_email_pane_g_ParamLimits

0xb930,	// (0x00093f57) list_recal_day_pane_ParamLimits

0xb941,	// (0x00093f68) mian_recal_day_pane_t1

0x8bad,	// (0x000911d4) list_single_dyc_row_text_pane_t4_ParamLimits

0x8bad,	// (0x000911d4) list_single_dyc_row_text_pane_t4

0x8be4,	// (0x0009120b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8be4,	// (0x0009120b) list_single_dyc_row_text_pane_t5

0x0305,	// (0x0008892c) list_single_dyc_row_text_pane_t6_ParamLimits

0x0305,	// (0x0008892c) list_single_dyc_row_text_pane_t6

0xcbba,	// (0x000951e1) aid_mgn_list_cale_time_pane

0x5210,	// (0x0008d837) main_gallery2_pane_ParamLimits

0xed0a,	// (0x00097331) main_clock2_pane_cp01_t1

0xed1a,	// (0x00097341) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x00097d23) main_clock2_pane_cp01_t

0x2d55,	// (0x0008b37c) cale_week_scroll_pane_g16_ParamLimits

0x2d55,	// (0x0008b37c) cale_week_scroll_pane_g16

0xc7d0,	// (0x00094df7) vorec_slider_pane

0xbe99,	// (0x000944c0) vidtel_button_pane_t1_ParamLimits

0x924a,	// (0x00091871) main_fs_bigclock_clock_pane_g1_ParamLimits

0x924a,	// (0x00091871) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9257,	// (0x0009187e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9257,	// (0x0009187e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd14,	// (0x0009833b) main_fs_bigclock_clock_pane_g_ParamLimits

0x9263,	// (0x0009188a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9276,	// (0x0009189d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1d,	// (0x00098344) main_fs_bigclock_clock_pane_t_ParamLimits

0x5896,	// (0x0008debd) main_mup3_lyrics_pane_ParamLimits

0x5896,	// (0x0008debd) main_mup3_lyrics_pane

0x9f0e,	// (0x00092535) main_mup3_lyrics_pane_t1_ParamLimits

0x9f0e,	// (0x00092535) main_mup3_lyrics_pane_t1

0x6425,	// (0x0008ea4c) aid_main_mp4_pane_t1_area

0x642f,	// (0x0008ea56) aid_main_mp4_pane_t2_area

0x6534,	// (0x0008eb5b) main_mp4_pane_g7_ParamLimits

0x6534,	// (0x0008eb5b) main_mp4_pane_g7

0x6540,	// (0x0008eb67) main_mp4_pane_g8_ParamLimits

0x6540,	// (0x0008eb67) main_mp4_pane_g8

0x693c,	// (0x0008ef63) aid_call6_pane_g1_size

0x9b7c,	// (0x000921a3) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b7c,	// (0x000921a3) list_double_large_graphic_phob2_other_pane

0xcb72,	// (0x00095199) list_double_large_graphic_phob2_other_pane_g1

0xac16,	// (0x0009323d) list_highlight_pane_cp026

0xc29e,	// (0x000948c5) main_welc_pane_ParamLimits

0x8a42,	// (0x00091069) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8a42,	// (0x00091069) main_sp_fs_ctrlbar_pane_g3

0x8a5a,	// (0x00091081) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8a5a,	// (0x00091081) main_sp_fs_ctrlbar_pane_g4

0x8a8c,	// (0x000910b3) toolbar2_fixed_button_pane_cp01

0x8a97,	// (0x000910be) toolbar2_fixed_button_pane_cp02

0x8aa2,	// (0x000910c9) toolbar2_fixed_button_pane_cp03

0x9c4d,	// (0x00092274) list_welc_entry_pane_ParamLimits

0x9c4d,	// (0x00092274) list_welc_entry_pane

0x9caa,	// (0x000922d1) main_welc_pane_g3_ParamLimits

0x9caa,	// (0x000922d1) main_welc_pane_g3

0x9cf0,	// (0x00092317) main_welc_pane_t2_ParamLimits

0x9cf0,	// (0x00092317) main_welc_pane_t2

0x9d04,	// (0x0009232b) main_welc_pane_t3_ParamLimits

0x9d04,	// (0x0009232b) main_welc_pane_t3

0x0005,

0xfe20,	// (0x00098447) main_welc_pane_t_ParamLimits

0xfe20,	// (0x00098447) main_welc_pane_t

0x9e00,	// (0x00092427) welc_button_pane_ParamLimits

0x9e00,	// (0x00092427) welc_button_pane

0x9e5e,	// (0x00092485) welc_service_logo_pane_ParamLimits

0x9e5e,	// (0x00092485) welc_service_logo_pane

0x9f40,	// (0x00092567) list_single_welc_entry_pane_ParamLimits

0x9f40,	// (0x00092567) list_single_welc_entry_pane

0x9f51,	// (0x00092578) list_single_welc_entry_pane_g1

0x9f59,	// (0x00092580) list_single_welc_entry_pane_t1

0x9f67,	// (0x0009258e) list_single_welc_entry_pane_t2

0x0001,

0xfe32,	// (0x00098459) list_single_welc_entry_pane_t

0xac16,	// (0x0009323d) bg_button_pane_cp035

0x9f75,	// (0x0009259c) welc_button_pane_t1

0x05e1,	// (0x00088c08) welc_service_logo_pane_g1

0x05ea,	// (0x00088c11) welc_service_logo_pane_g2

0x0001,

0xfe37,	// (0x0009845e) welc_service_logo_pane_g

0x27c2,	// (0x0008ade9) main_int_radio_pane

0xc94d,	// (0x00094f74) list_single_fs_dyc_pane_g1

0x9a99,	// (0x000920c0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9a99,	// (0x000920c0) list_double_large_graphic_phob2_pane_g3

0x9aa5,	// (0x000920cc) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9aa5,	// (0x000920cc) list_double_large_graphic_phob2_pane_g4

0x9f83,	// (0x000925aa) main_int_radio1_pane_ParamLimits

0x9f83,	// (0x000925aa) main_int_radio1_pane

0x05f3,	// (0x00088c1a) find_pane_cp02

0x9f95,	// (0x000925bc) input_focus_pane_cp12_ParamLimits

0x9f95,	// (0x000925bc) input_focus_pane_cp12

0x9fa1,	// (0x000925c8) input_focus_pane_cp13_ParamLimits

0x9fa1,	// (0x000925c8) input_focus_pane_cp13

0x9fb9,	// (0x000925e0) input_focus_pane_cp14_ParamLimits

0x9fb9,	// (0x000925e0) input_focus_pane_cp14

0x05fc,	// (0x00088c23) int_radio1_listscroll_pane

0x9fd1,	// (0x000925f8) main_int_radio1_pane_g1_ParamLimits

0x9fd1,	// (0x000925f8) main_int_radio1_pane_g1

0x9fe1,	// (0x00092608) main_int_radio1_pane_t1_ParamLimits

0x9fe1,	// (0x00092608) main_int_radio1_pane_t1

0x9ff5,	// (0x0009261c) main_int_radio1_pane_t2_ParamLimits

0x9ff5,	// (0x0009261c) main_int_radio1_pane_t2

0xa009,	// (0x00092630) main_int_radio1_pane_t3_ParamLimits

0xa009,	// (0x00092630) main_int_radio1_pane_t3

0xa01d,	// (0x00092644) main_int_radio1_pane_t4_ParamLimits

0xa01d,	// (0x00092644) main_int_radio1_pane_t4

0x0606,	// (0x00088c2d) main_int_radio1_pane_t5_ParamLimits

0x0606,	// (0x00088c2d) main_int_radio1_pane_t5

0xa034,	// (0x0009265b) main_int_radio1_pane_t6_ParamLimits

0xa034,	// (0x0009265b) main_int_radio1_pane_t6

0xa046,	// (0x0009266d) main_int_radio1_pane_t7_ParamLimits

0xa046,	// (0x0009266d) main_int_radio1_pane_t7

0xa058,	// (0x0009267f) main_int_radio1_pane_t8_ParamLimits

0xa058,	// (0x0009267f) main_int_radio1_pane_t8

0xa06c,	// (0x00092693) main_int_radio1_pane_t9_ParamLimits

0xa06c,	// (0x00092693) main_int_radio1_pane_t9

0xa07e,	// (0x000926a5) main_int_radio1_pane_t10_ParamLimits

0xa07e,	// (0x000926a5) main_int_radio1_pane_t10

0xa0af,	// (0x000926d6) main_int_radio1_pane_t11_ParamLimits

0xa0af,	// (0x000926d6) main_int_radio1_pane_t11

0xa0e0,	// (0x00092707) main_int_radio1_pane_t12_ParamLimits

0xa0e0,	// (0x00092707) main_int_radio1_pane_t12

0x000b,

0xfe3c,	// (0x00098463) main_int_radio1_pane_t_ParamLimits

0xfe3c,	// (0x00098463) main_int_radio1_pane_t

0x0618,	// (0x00088c3f) int_radio_list_pane

0xb912,	// (0x00093f39) scroll_pane_cp037

0x0620,	// (0x00088c47) list_double_large_graphic_int_radio_pane_ParamLimits

0x0620,	// (0x00088c47) list_double_large_graphic_int_radio_pane

0x0638,	// (0x00088c5f) list_double_large_graphic_int_radio_pane_g1

0x0641,	// (0x00088c68) list_double_large_graphic_int_radio_pane_t1

0x064f,	// (0x00088c76) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe55,	// (0x0009847c) list_double_large_graphic_int_radio_pane_t

0xac16,	// (0x0009323d) list_highlight_pane_cp027

0x0596,	// (0x00088bbd) main_button_pane_4

0x9cb6,	// (0x000922dd) main_welc_pane_g4_ParamLimits

0x9cb6,	// (0x000922dd) main_welc_pane_g4

0x9d16,	// (0x0009233d) main_welc_pane_t4_ParamLimits

0x9d16,	// (0x0009233d) main_welc_pane_t4

0x9d28,	// (0x0009234f) main_welc_pane_t5_ParamLimits

0x9d28,	// (0x0009234f) main_welc_pane_t5

0x9d58,	// (0x0009237f) main_welc_pane_t6_ParamLimits

0x9d58,	// (0x0009237f) main_welc_pane_t6

0x9e0e,	// (0x00092435) welc_button_pane_2_ParamLimits

0x9e0e,	// (0x00092435) welc_button_pane_2

0x9e26,	// (0x0009244d) welc_button_pane_3_ParamLimits

0x9e26,	// (0x0009244d) welc_button_pane_3

0x059e,	// (0x00088bc5) welc_button_pane_4

0x9e40,	// (0x00092467) welc_button_pane_5_ParamLimits

0x9e40,	// (0x00092467) welc_button_pane_5

0x2535,	// (0x0008ab5c) main_popup_welc_pane

0x0675,	// (0x00088c9c) main_welc_sk_g3

0x067f,	// (0x00088ca6) main_welc_sk_g4

0x0689,	// (0x00088cb0) main_welc_sk_t3

0x0699,	// (0x00088cc0) main_welc_sk_t4

0x06a9,	// (0x00088cd0) popup_welc_pane_t4

0x06b7,	// (0x00088cde) popup_welc_pane_t5

0x06c5,	// (0x00088cec) popup_welc_pane_t6

0x27c2,	// (0x0008ade9) main_acti_pane

0xac16,	// (0x0009323d) main_sso_pane

0xa0f7,	// (0x0009271e) sso_body_pane_ParamLimits

0xa0f7,	// (0x0009271e) sso_body_pane

0xa105,	// (0x0009272c) sso_logo_pane_ParamLimits

0xa105,	// (0x0009272c) sso_logo_pane

0xa136,	// (0x0009275d) sso_sk_pane_ParamLimits

0xa136,	// (0x0009275d) sso_sk_pane

0x0703,	// (0x00088d2a) main_sso_logo_pane_g1

0xa143,	// (0x0009276a) sso_sk_pane_t1_ParamLimits

0xa143,	// (0x0009276a) sso_sk_pane_t1

0xa157,	// (0x0009277e) sso_sk_pane_t2_ParamLimits

0xa157,	// (0x0009277e) sso_sk_pane_t2

0x0001,

0xfe5a,	// (0x00098481) sso_sk_pane_t_ParamLimits

0xfe5a,	// (0x00098481) sso_sk_pane_t

0x070e,	// (0x00088d35) aid_sso_gap

0x0717,	// (0x00088d3e) aid_sso_txt1

0x0721,	// (0x00088d48) aid_sso_txt2

0x072b,	// (0x00088d52) aid_sso_txt3

0x0002,

0xfe5f,	// (0x00098486) aid_sso_txt

0x0735,	// (0x00088d5c) aid_sso_widget

0xa1b4,	// (0x000927db) sso_btn_pane_ParamLimits

0xa1b4,	// (0x000927db) sso_btn_pane

0xa228,	// (0x0009284f) sso_option_pane_ParamLimits

0xa228,	// (0x0009284f) sso_option_pane

0xa2d4,	// (0x000928fb) sso_query_pane_ParamLimits

0xa2d4,	// (0x000928fb) sso_query_pane

0xa324,	// (0x0009294b) sso_query_pane_cp01_ParamLimits

0xa324,	// (0x0009294b) sso_query_pane_cp01

0xa376,	// (0x0009299d) sso_t_hdr_pane_ParamLimits

0xa376,	// (0x0009299d) sso_t_hdr_pane

0xa39a,	// (0x000929c1) sso_t_nml_pane_ParamLimits

0xa39a,	// (0x000929c1) sso_t_nml_pane

0x073f,	// (0x00088d66) sso_t_sub_pane

0xa112,	// (0x00092739) sso_popup_window_ParamLimits

0xa112,	// (0x00092739) sso_popup_window

0xa169,	// (0x00092790) sso_apps_pane_ParamLimits

0xa169,	// (0x00092790) sso_apps_pane

0xa18c,	// (0x000927b3) sso_body_pane_g1

0xa194,	// (0x000927bb) sso_body_pane_t1

0xa1a4,	// (0x000927cb) sso_body_pane_t2

0x0001,

0xfe66,	// (0x0009848d) sso_body_pane_t

0xa1f8,	// (0x0009281f) sso_btn_pane_cp01_ParamLimits

0xa1f8,	// (0x0009281f) sso_btn_pane_cp01

0xa2a6,	// (0x000928cd) sso_prog_pane_ParamLimits

0xa2a6,	// (0x000928cd) sso_prog_pane

0xa3ea,	// (0x00092a11) sso_t_hdr_pane_t1_ParamLimits

0xa3ea,	// (0x00092a11) sso_t_hdr_pane_t1

0x0754,	// (0x00088d7b) input_focus_pane_cp10_ParamLimits

0x0754,	// (0x00088d7b) input_focus_pane_cp10

0x0768,	// (0x00088d8f) sso_query_pane_t1_ParamLimits

0x0768,	// (0x00088d8f) sso_query_pane_t1

0x077b,	// (0x00088da2) sso_query_pane_t2_ParamLimits

0x077b,	// (0x00088da2) sso_query_pane_t2

0x0794,	// (0x00088dbb) sso_query_pane_t3_ParamLimits

0x0794,	// (0x00088dbb) sso_query_pane_t3

0x07be,	// (0x00088de5) sso_query_pane_t4_ParamLimits

0x07be,	// (0x00088de5) sso_query_pane_t4

0x0003,

0xfe6b,	// (0x00098492) sso_query_pane_t_ParamLimits

0xfe6b,	// (0x00098492) sso_query_pane_t

0x066c,	// (0x00088c93) bg_button_pane_cp22

0x065d,	// (0x00088c84) sso_btn_pane_t1

0xa403,	// (0x00092a2a) sso_t_nml_pane_t1_ParamLimits

0xa403,	// (0x00092a2a) sso_t_nml_pane_t1

0x07e2,	// (0x00088e09) sso_option_row_pane_ParamLimits

0x07e2,	// (0x00088e09) sso_option_row_pane

0x07ef,	// (0x00088e16) sso_t_sub_pane_t1_ParamLimits

0x07ef,	// (0x00088e16) sso_t_sub_pane_t1

0xc29e,	// (0x000948c5) bg_popup_window_pane_cp11_ParamLimits

0xc29e,	// (0x000948c5) bg_popup_window_pane_cp11

0x080c,	// (0x00088e33) popup_sk_window_cp01_ParamLimits

0x080c,	// (0x00088e33) popup_sk_window_cp01

0x0819,	// (0x00088e40) sso_popup_body_pane_ParamLimits

0x0819,	// (0x00088e40) sso_popup_body_pane

0x0826,	// (0x00088e4d) scroll_pane_cp21_ParamLimits

0x0826,	// (0x00088e4d) scroll_pane_cp21

0x0833,	// (0x00088e5a) sso_popup_body_t_pane_ParamLimits

0x0833,	// (0x00088e5a) sso_popup_body_t_pane

0x0840,	// (0x00088e67) sso_popup_body_t_hdr_pane_ParamLimits

0x0840,	// (0x00088e67) sso_popup_body_t_hdr_pane

0xa420,	// (0x00092a47) sso_popup_body_t_nml_pane_ParamLimits

0xa420,	// (0x00092a47) sso_popup_body_t_nml_pane

0xa43e,	// (0x00092a65) sso_popup_body_t_sub_pane_ParamLimits

0xa43e,	// (0x00092a65) sso_popup_body_t_sub_pane

0x0852,	// (0x00088e79) sso_popup_body_t_hdr_pane_t1

0xa461,	// (0x00092a88) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa461,	// (0x00092a88) sso_popup_body_t_nml_pane_t1

0x0862,	// (0x00088e89) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0862,	// (0x00088e89) sso_popup_body_t_sub_pane_t1

0xc5c0,	// (0x00094be7) sso_prog_pane_g1

0xa4a5,	// (0x00092acc) sso_apps_pane_comp1_ParamLimits

0xa4a5,	// (0x00092acc) sso_apps_pane_comp1

0x0887,	// (0x00088eae) sso_apps_pane_comp1_g1

0x088f,	// (0x00088eb6) sso_apps_pane_comp1_t1

0x08ab,	// (0x00088ed2) sso_option_row_pane_g1

0x08b3,	// (0x00088eda) sso_option_row_pane_t1

0xb64d,	// (0x00093c74) list_cmail_pane_ParamLimits

0xac16,	// (0x0009323d) main_call7_pane

0x9c3b,	// (0x00092262) bg_welc_area_ParamLimits

0x9c3b,	// (0x00092262) bg_welc_area

0x9d8e,	// (0x000923b5) sso_t_hdr_pane_a_t1_ParamLimits

0x9d8e,	// (0x000923b5) sso_t_hdr_pane_a_t1

0x9da2,	// (0x000923c9) sso_t_nml_pane_a_t1_ParamLimits

0x9da2,	// (0x000923c9) sso_t_nml_pane_a_t1

0x9dcc,	// (0x000923f3) sso_t_sub_pane_a_t1_ParamLimits

0x9dcc,	// (0x000923f3) sso_t_sub_pane_a_t1

0x9e50,	// (0x00092477) welc_button_pane_cp01_ParamLimits

0x9e50,	// (0x00092477) welc_button_pane_cp01

0x065d,	// (0x00088c84) sso_btn_pane_t1_copy1

0x066c,	// (0x00088c93) welc_button_pane_2_comp1

0x06d3,	// (0x00088cfa) sso_t_hdr_pane_p_t1

0x06e3,	// (0x00088d0a) sso_t_nml_pane_p_t1

0x06f3,	// (0x00088d1a) sso_t_sub_pane_p_t1

0xac16,	// (0x0009323d) main_att_pane

0xac16,	// (0x0009323d) main_vod_pane

0x073f,	// (0x00088d66) sso_t_sub_pane_ParamLimits

0x089d,	// (0x00088ec4) input_focus_pane_cp10_t1

0x08b3,	// (0x00088eda) sso_option_row_pane_t1_ParamLimits

0xa4bc,	// (0x00092ae3) main_att_body_pane_ParamLimits

0xa4bc,	// (0x00092ae3) main_att_body_pane

0xa4d0,	// (0x00092af7) att_btn_emg_pane_ParamLimits

0xa4d0,	// (0x00092af7) att_btn_emg_pane

0xa4e8,	// (0x00092b0f) att_btn_pane_ParamLimits

0xa4e8,	// (0x00092b0f) att_btn_pane

0xa550,	// (0x00092b77) att_btn_pane_cp01_ParamLimits

0xa550,	// (0x00092b77) att_btn_pane_cp01

0xa56a,	// (0x00092b91) att_li_srv_pane_ParamLimits

0xa56a,	// (0x00092b91) att_li_srv_pane

0xa57c,	// (0x00092ba3) att_opt_pane_ParamLimits

0xa57c,	// (0x00092ba3) att_opt_pane

0xa5c0,	// (0x00092be7) att_query_pane_ParamLimits

0xa5c0,	// (0x00092be7) att_query_pane

0xa630,	// (0x00092c57) att_query_pane_cp01_ParamLimits

0xa630,	// (0x00092c57) att_query_pane_cp01

0xa674,	// (0x00092c9b) att_t_hdr_pane_ParamLimits

0xa674,	// (0x00092c9b) att_t_hdr_pane

0xa6da,	// (0x00092d01) att_t_nml_pane_ParamLimits

0xa6da,	// (0x00092d01) att_t_nml_pane

0xa742,	// (0x00092d69) att_t_nml_pane_cp01_ParamLimits

0xa742,	// (0x00092d69) att_t_nml_pane_cp01

0xa766,	// (0x00092d8d) att_t_nmlb_pane_ParamLimits

0xa766,	// (0x00092d8d) att_t_nmlb_pane

0xa7ca,	// (0x00092df1) att_term_pane_ParamLimits

0xa7ca,	// (0x00092df1) att_term_pane

0xa80c,	// (0x00092e33) main_att_body_pane_g1_ParamLimits

0xa80c,	// (0x00092e33) main_att_body_pane_g1

0x08cc,	// (0x00088ef3) att_t_hdr_pane_t1_ParamLimits

0x08cc,	// (0x00088ef3) att_t_hdr_pane_t1

0x08e5,	// (0x00088f0c) att_t_nml_pane_t1_ParamLimits

0x08e5,	// (0x00088f0c) att_t_nml_pane_t1

0x090a,	// (0x00088f31) att_btn_pane_t1

0x066c,	// (0x00088c93) bg_button_pane_cp23

0xa836,	// (0x00092e5d) att_li_srv_row_pane_ParamLimits

0xa836,	// (0x00092e5d) att_li_srv_row_pane

0x091a,	// (0x00088f41) att_t_nmlb_pane_t1_ParamLimits

0x091a,	// (0x00088f41) att_t_nmlb_pane_t1

0x0938,	// (0x00088f5f) att_query_pane_t1

0x0947,	// (0x00088f6e) att_query_pane_t2

0x0956,	// (0x00088f7d) att_query_pane_t3

0x0002,

0xfe74,	// (0x0009849b) att_query_pane_t

0x0965,	// (0x00088f8c) input_focus_pane_cp11

0x096e,	// (0x00088f95) att_term_pane_t1_ParamLimits

0x096e,	// (0x00088f95) att_term_pane_t1

0xac16,	// (0x0009323d) att_opt_row_pane

0x08ab,	// (0x00088ed2) att_opt_row_pane_g1

0x098b,	// (0x00088fb2) att_opt_row_pane_t1_ParamLimits

0x098b,	// (0x00088fb2) att_opt_row_pane_t1

0xa846,	// (0x00092e6d) att_li_srv_row_pane_g1

0xa84e,	// (0x00092e75) att_li_srv_row_pane_t1_ParamLimits

0xa84e,	// (0x00092e75) att_li_srv_row_pane_t1

0xa863,	// (0x00092e8a) att_li_srv_row_pane_t2_ParamLimits

0xa863,	// (0x00092e8a) att_li_srv_row_pane_t2

0x0001,

0xfe7b,	// (0x000984a2) att_li_srv_row_pane_t_ParamLimits

0xfe7b,	// (0x000984a2) att_li_srv_row_pane_t

0x09a4,	// (0x00088fcb) att_btn_close_pane_g1

0xac16,	// (0x0009323d) bg_button_pane_cp24

0xa878,	// (0x00092e9f) main_vod_body_pane_ParamLimits

0xa878,	// (0x00092e9f) main_vod_body_pane

0xa886,	// (0x00092ead) main_vod_body_pane_g1_ParamLimits

0xa886,	// (0x00092ead) main_vod_body_pane_g1

0xa8b6,	// (0x00092edd) scroll_pane_cp24_ParamLimits

0xa8b6,	// (0x00092edd) scroll_pane_cp24

0xa8fe,	// (0x00092f25) vod_btn_pane_ParamLimits

0xa8fe,	// (0x00092f25) vod_btn_pane

0xa93c,	// (0x00092f63) vod_det_pane_ParamLimits

0xa93c,	// (0x00092f63) vod_det_pane

0xa968,	// (0x00092f8f) vod_logo_g1_ParamLimits

0xa968,	// (0x00092f8f) vod_logo_g1

0xa9a2,	// (0x00092fc9) vod_opt_pane_ParamLimits

0xa9a2,	// (0x00092fc9) vod_opt_pane

0xa9d2,	// (0x00092ff9) vod_opt_pane_cp01_ParamLimits

0xa9d2,	// (0x00092ff9) vod_opt_pane_cp01

0xa9fa,	// (0x00093021) vod_query_pane_ParamLimits

0xa9fa,	// (0x00093021) vod_query_pane

0xaa22,	// (0x00093049) vod_query_pane_cp01_ParamLimits

0xaa22,	// (0x00093049) vod_query_pane_cp01

0xaa2e,	// (0x00093055) vod_t_nml_pane_ParamLimits

0xaa2e,	// (0x00093055) vod_t_nml_pane

0xaad4,	// (0x000930fb) vod_t_nml_pane_cp01_ParamLimits

0xaad4,	// (0x000930fb) vod_t_nml_pane_cp01

0xab0c,	// (0x00093133) vod_t_sub_pane_ParamLimits

0xab0c,	// (0x00093133) vod_t_sub_pane

0xab38,	// (0x0009315f) vod_t_sub_pane_cp01_ParamLimits

0xab38,	// (0x0009315f) vod_t_sub_pane_cp01

0x0965,	// (0x00088f8c) vod_query_field_pane

0x09ac,	// (0x00088fd3) vod_query_pane_t1

0x066c,	// (0x00088c93) bg_button_pane_cp25

0x065d,	// (0x00088c84) sso_btn_pane_t1_copy2

0xab60,	// (0x00093187) vod_t_nml_pane_t1_ParamLimits

0xab60,	// (0x00093187) vod_t_nml_pane_t1

0x09bb,	// (0x00088fe2) vod_opt_row_pane_ParamLimits

0x09bb,	// (0x00088fe2) vod_opt_row_pane

0x09cd,	// (0x00088ff4) vod_t_sub_pane_t1_ParamLimits

0x09cd,	// (0x00088ff4) vod_t_sub_pane_t1

0x09e6,	// (0x0008900d) vod_det_cell_pane_ParamLimits

0x09e6,	// (0x0008900d) vod_det_cell_pane

0xac16,	// (0x0009323d) input_focus_pane_cp15

0x09f7,	// (0x0008901e) vod_query_field_pane_t1

0x0a05,	// (0x0008902c) vod_opt_row_pane_g1_ParamLimits

0x0a05,	// (0x0008902c) vod_opt_row_pane_g1

0x0a11,	// (0x00089038) vod_opt_row_pane_t1_ParamLimits

0x0a11,	// (0x00089038) vod_opt_row_pane_t1

0x0a30,	// (0x00089057) vod_det_cell_field_pane

0x0a39,	// (0x00089060) vod_det_cell_pane_g1

0x0a41,	// (0x00089068) vod_det_cell_pane_t1

0xac16,	// (0x0009323d) input_focus_pane_cp16

0x0a50,	// (0x00089077) vod_det_cell_field_pane_t1

0xab97,	// (0x000931be) call7_btn_grp_pane_ParamLimits

0xab97,	// (0x000931be) call7_btn_grp_pane

0xaba6,	// (0x000931cd) call7_bubble_pane_ParamLimits

0xaba6,	// (0x000931cd) call7_bubble_pane

0xabb4,	// (0x000931db) cell_call7_btn_pane_ParamLimits

0xabb4,	// (0x000931db) cell_call7_btn_pane

0xabc3,	// (0x000931ea) call7_pane_g1_ParamLimits

0xabc3,	// (0x000931ea) call7_pane_g1

0xabd2,	// (0x000931f9) call7_windows_conf_pane_ParamLimits

0xabd2,	// (0x000931f9) call7_windows_conf_pane

0xabec,	// (0x00093213) popup_call7_1st_window_ParamLimits

0xabec,	// (0x00093213) popup_call7_1st_window

0xabfa,	// (0x00093221) popup_call7_2nd_window_ParamLimits

0xabfa,	// (0x00093221) popup_call7_2nd_window

0xac08,	// (0x0009322f) popup_call7_3rd_window_ParamLimits

0xac08,	// (0x0009322f) popup_call7_3rd_window

0xac16,	// (0x0009323d) bg_button_pane_cp26

0xbd18,	// (0x0009433f) cell_call7_btn_pane_g1

0xbeaf,	// (0x000944d6) cell_call7_btn_pane_t1

0xac16,	// (0x0009323d) bg_popup_window_pane_cp12

0x0a5e,	// (0x00089085) popup_call7_1st_window_g1

0x0a66,	// (0x0008908d) popup_call7_1st_window_g2

0x0a6e,	// (0x00089095) popup_call7_1st_window_g3

0x0002,

0xfe80,	// (0x000984a7) popup_call7_1st_window_g

0x0a76,	// (0x0008909d) popup_call7_1st_window_t1

0x0a85,	// (0x000890ac) popup_call7_1st_window_t2

0x0a93,	// (0x000890ba) popup_call7_1st_window_t3

0x0002,

0xfe87,	// (0x000984ae) popup_call7_1st_window_t

0xac16,	// (0x0009323d) bg_popup_window_pane_cp13

0x0aa1,	// (0x000890c8) popup_call7_2nd_window_g1

0x0aa9,	// (0x000890d0) popup_call7_2nd_window_g2

0x0ab1,	// (0x000890d8) popup_call7_2nd_window_g3

0x0002,

0xfe8e,	// (0x000984b5) popup_call7_2nd_window_g

0x0a76,	// (0x0008909d) popup_call7_2nd_window_t1

0xac16,	// (0x0009323d) bg_popup_window_pane_cp14

0x0ab9,	// (0x000890e0) call7_list_conf_pane

0x0ac1,	// (0x000890e8) call7_list_conf_row_pane_ParamLimits

0x0ac1,	// (0x000890e8) call7_list_conf_row_pane

0x0ad4,	// (0x000890fb) call7_list_conf_row_pane_g1

0x0adc,	// (0x00089103) call7_list_conf_row_pane_g2

0x0001,

0xfe95,	// (0x000984bc) call7_list_conf_row_pane_g

0x0ae4,	// (0x0008910b) call7_list_conf_row_pane_t1

0xac16,	// (0x0009323d) list_highlight_pane_cp22

0xa278,	// (0x0009289f) sso_option_pane_cp01_ParamLimits

0xa278,	// (0x0009289f) sso_option_pane_cp01

0xc507,	// (0x00094b2e) msg_header_pane_ParamLimits

0xd375,	// (0x0009599c) bg_button_pane_cp01_ParamLimits

0xd389,	// (0x000959b0) input_focus_pane_cp07_ParamLimits

0x8ad6,	// (0x000910fd) popup_email_progress_window

0xc5c0,	// (0x00094be7) popup_email_progress_window_g1

0x0af2,	// (0x00089119) popup_email_progress_window_g2

0x0001,

0xfe9a,	// (0x000984c1) popup_email_progress_window_g

0x0afa,	// (0x00089121) popup_email_progress_window_t1
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000383d1 };

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
0x40e5,	// (0x0003c4b6) Screen

0x40f1,	// (0x0003c4c2) application_window

0x414d,	// (0x0003c51e) area_bottom_pane_ParamLimits

0x414d,	// (0x0003c51e) area_bottom_pane

0x41a5,	// (0x0003c576) area_top_pane_ParamLimits

0x41a5,	// (0x0003c576) area_top_pane

0x4209,	// (0x0003c5da) call_video_uplink_pane_ParamLimits

0x4209,	// (0x0003c5da) call_video_uplink_pane

0x4248,	// (0x0003c619) main_pane_ParamLimits

0x4248,	// (0x0003c619) main_pane

0x11ad,	// (0x0003957e) context_pane

0x6f3f,	// (0x0003f310) navi_pane

0x6f65,	// (0x0003f336) popup_cale_events_window_ParamLimits

0x6f65,	// (0x0003f336) popup_cale_events_window

0x11c0,	// (0x00039591) popup_mup_playback_window

0x6f7d,	// (0x0003f34e) signal_pane

0xe256,	// (0x00046627) main_browser_pane

0xe42f,	// (0x00046800) main_burst_pane

0x6dcb,	// (0x0003f19c) main_calc_pane

0x11a1,	// (0x00039572) main_cale_day_pane

0x4795,	// (0x0003cb66) main_cale_month_pane

0x11a1,	// (0x00039572) main_cale_week_pane

0xe42f,	// (0x00046800) main_call_pane

0xdf00,	// (0x000462d1) main_call_poc_pane

0xe42f,	// (0x00046800) main_camera_pane

0xe42f,	// (0x00046800) main_chi_dic_pane

0xec0c,	// (0x00046fdd) main_clock_pane

0xdf00,	// (0x000462d1) main_fmradio_pane

0xe42f,	// (0x00046800) main_graph_messa_pane

0xdf00,	// (0x000462d1) main_help_pane

0xe256,	// (0x00046627) main_im_pane

0xe15b,	// (0x0004652c) main_image_pane_ParamLimits

0xe15b,	// (0x0004652c) main_image_pane

0xdf00,	// (0x000462d1) main_location2_pane

0xe42f,	// (0x00046800) main_location_pane

0xe15b,	// (0x0004652c) main_messa_pane

0xdf00,	// (0x000462d1) main_mp2_pane

0xe42f,	// (0x00046800) main_mp_pane

0xdf00,	// (0x000462d1) main_msg_pane

0xdf00,	// (0x000462d1) main_mup_eq_pane

0xdf00,	// (0x000462d1) main_mup_pane

0xe256,	// (0x00046627) main_notes_pane

0xdf00,	// (0x000462d1) main_pec_pane

0xdf00,	// (0x000462d1) main_phob_pane

0xdf00,	// (0x000462d1) main_pinb_pane

0xdf00,	// (0x000462d1) main_postcard_pane

0xdf00,	// (0x000462d1) main_qdial_pane

0xe42f,	// (0x00046800) main_skin_pane

0xdf00,	// (0x000462d1) main_smil2_pane

0xe42f,	// (0x00046800) main_smil_pane

0xe42f,	// (0x00046800) main_video_pane

0xe42f,	// (0x00046800) main_video_tele_pane

0xe15b,	// (0x0004652c) main_viewer_pane_ParamLimits

0xe15b,	// (0x0004652c) main_viewer_pane

0xe42f,	// (0x00046800) main_vorec_pane

0x6e09,	// (0x0003f1da) popup_blid_sat_info_window_ParamLimits

0x6e09,	// (0x0003f1da) popup_blid_sat_info_window

0x6e29,	// (0x0003f1fa) popup_dyc_status_message_window_ParamLimits

0x6e29,	// (0x0003f1fa) popup_dyc_status_message_window

0x6e39,	// (0x0003f20a) popup_grid_large_graphic_window_ParamLimits

0x6e39,	// (0x0003f20a) popup_grid_large_graphic_window

0x6eca,	// (0x0003f29b) popup_loc_request_window_ParamLimits

0x6eca,	// (0x0003f29b) popup_loc_request_window

0x6f17,	// (0x0003f2e8) popup_wml_address_window_ParamLimits

0x6f17,	// (0x0003f2e8) popup_wml_address_window

0x6ca3,	// (0x0003f074) call_muted_g1

0x691e,	// (0x0003ecef) popup_call_audio_conf_window_ParamLimits

0x691e,	// (0x0003ecef) popup_call_audio_conf_window

0x6cb3,	// (0x0003f084) popup_call_audio_first_window_ParamLimits

0x6cb3,	// (0x0003f084) popup_call_audio_first_window

0x6cf3,	// (0x0003f0c4) popup_call_audio_in_window_ParamLimits

0x6cf3,	// (0x0003f0c4) popup_call_audio_in_window

0x6d17,	// (0x0003f0e8) popup_call_audio_out_window_ParamLimits

0x6d17,	// (0x0003f0e8) popup_call_audio_out_window

0x6d39,	// (0x0003f10a) popup_call_audio_second_window_ParamLimits

0x6d39,	// (0x0003f10a) popup_call_audio_second_window

0x6d69,	// (0x0003f13a) popup_call_audio_wait_window_ParamLimits

0x6d69,	// (0x0003f13a) popup_call_audio_wait_window

0x6d8a,	// (0x0003f15b) popup_number_entry_window_ParamLimits

0x6d8a,	// (0x0003f15b) popup_number_entry_window

0xd5d5,	// (0x000459a6) bg_popup_call_pane_cp05_ParamLimits

0xd5d5,	// (0x000459a6) bg_popup_call_pane_cp05

0xd5f5,	// (0x000459c6) popup_number_entry_window_t1

0xd608,	// (0x000459d9) popup_number_entry_window_t2

0xd61a,	// (0x000459eb) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00047416) popup_number_entry_window_t

0xd62c,	// (0x000459fd) text_title_cp2

0xd63f,	// (0x00045a10) bg_popup_call_pane_cp_ParamLimits

0xd63f,	// (0x00045a10) bg_popup_call_pane_cp

0xd64d,	// (0x00045a1e) call_thumbnail_pane

0xd655,	// (0x00045a26) popup_call_audio_in_window_g1_ParamLimits

0xd655,	// (0x00045a26) popup_call_audio_in_window_g1

0xd661,	// (0x00045a32) popup_call_audio_in_window_g2_ParamLimits

0xd661,	// (0x00045a32) popup_call_audio_in_window_g2

0xd66d,	// (0x00045a3e) popup_call_audio_in_window_g3_ParamLimits

0xd66d,	// (0x00045a3e) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0004741f) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0004741f) popup_call_audio_in_window_g

0xd679,	// (0x00045a4a) popup_call_audio_in_window_t1_ParamLimits

0xd679,	// (0x00045a4a) popup_call_audio_in_window_t1

0xd695,	// (0x00045a66) popup_call_audio_in_window_t2_ParamLimits

0xd695,	// (0x00045a66) popup_call_audio_in_window_t2

0xd6b1,	// (0x00045a82) popup_call_audio_in_window_t3_ParamLimits

0xd6b1,	// (0x00045a82) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00047426) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00047426) popup_call_audio_in_window_t

0xd63f,	// (0x00045a10) bg_popup_call_pane_cp01_ParamLimits

0xd63f,	// (0x00045a10) bg_popup_call_pane_cp01

0xd64d,	// (0x00045a1e) call_thumbnail_pane_cp02

0xd6c4,	// (0x00045a95) call_type_pane_cp022

0xd6cc,	// (0x00045a9d) popup_call_audio_out_window_g1_ParamLimits

0xd6cc,	// (0x00045a9d) popup_call_audio_out_window_g1

0xd6de,	// (0x00045aaf) popup_call_audio_out_window_g2_ParamLimits

0xd6de,	// (0x00045aaf) popup_call_audio_out_window_g2

0xd6ea,	// (0x00045abb) popup_call_audio_out_window_g3_ParamLimits

0xd6ea,	// (0x00045abb) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0004742d) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0004742d) popup_call_audio_out_window_g

0xd6fc,	// (0x00045acd) popup_call_audio_out_window_t1_ParamLimits

0xd6fc,	// (0x00045acd) popup_call_audio_out_window_t1

0xd714,	// (0x00045ae5) popup_call_audio_out_window_t2_ParamLimits

0xd714,	// (0x00045ae5) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00047434) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00047434) popup_call_audio_out_window_t

0xd729,	// (0x00045afa) bg_popup_call_pane_ParamLimits

0xd729,	// (0x00045afa) bg_popup_call_pane

0x43ac,	// (0x0003c77d) call_thumbnail_pane_cp_ParamLimits

0x43ac,	// (0x0003c77d) call_thumbnail_pane_cp

0xd7ad,	// (0x00045b7e) call_type_pane_cp01_ParamLimits

0xd7ad,	// (0x00045b7e) call_type_pane_cp01

0xd7f1,	// (0x00045bc2) popup_call_audio_first_window_g1_ParamLimits

0xd7f1,	// (0x00045bc2) popup_call_audio_first_window_g1

0xd83d,	// (0x00045c0e) popup_call_audio_first_window_g2_ParamLimits

0xd83d,	// (0x00045c0e) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00047439) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00047439) popup_call_audio_first_window_g

0xd881,	// (0x00045c52) popup_call_audio_first_window_t1_ParamLimits

0xd881,	// (0x00045c52) popup_call_audio_first_window_t1

0xde45,	// (0x00046216) popup_call_audio_first_window_t4_ParamLimits

0xde45,	// (0x00046216) popup_call_audio_first_window_t4

0xded1,	// (0x000462a2) popup_call_audio_first_window_t5_ParamLimits

0xded1,	// (0x000462a2) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0004743e) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0004743e) popup_call_audio_first_window_t

0xdf00,	// (0x000462d1) bg_popup_call_pane_cp02

0xdf0a,	// (0x000462db) call_type_pane_cp023

0xdf12,	// (0x000462e3) popup_call_audio_wait_window_g1

0xdf1a,	// (0x000462eb) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00047445) popup_call_audio_wait_window_g

0xdf22,	// (0x000462f3) popup_call_audio_wait_window_t3

0xdf30,	// (0x00046301) bg_popup_call_pane_cp03_ParamLimits

0xdf30,	// (0x00046301) bg_popup_call_pane_cp03

0xdf90,	// (0x00046361) call_thumbnail_pane_cp011_ParamLimits

0xdf90,	// (0x00046361) call_thumbnail_pane_cp011

0xdf9c,	// (0x0004636d) call_type_pane_cp034_ParamLimits

0xdf9c,	// (0x0004636d) call_type_pane_cp034

0xdfd8,	// (0x000463a9) popup_call_audio_second_window_g1_ParamLimits

0xdfd8,	// (0x000463a9) popup_call_audio_second_window_g1

0xe014,	// (0x000463e5) popup_call_audio_second_window_g2_ParamLimits

0xe014,	// (0x000463e5) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0004744a) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0004744a) popup_call_audio_second_window_g

0xe050,	// (0x00046421) popup_call_audio_second_window_t1_ParamLimits

0xe050,	// (0x00046421) popup_call_audio_second_window_t1

0xe0d1,	// (0x000464a2) popup_call_audio_second_window_t2_ParamLimits

0xe0d1,	// (0x000464a2) popup_call_audio_second_window_t2

0xe107,	// (0x000464d8) popup_call_audio_second_window_t3_ParamLimits

0xe107,	// (0x000464d8) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0004744f) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0004744f) popup_call_audio_second_window_t

0xdf00,	// (0x000462d1) bg_popup_call_pane_cp04

0xe13d,	// (0x0004650e) list_conf_pane

0xe145,	// (0x00046516) popup_call_audio_conf_window_t1

0xe153,	// (0x00046524) call_thumbnail_pane_g1

0xe15b,	// (0x0004652c) bg_pinb_pane_ParamLimits

0xe15b,	// (0x0004652c) bg_pinb_pane

0xe169,	// (0x0004653a) find_pinb_pane

0xe15b,	// (0x0004652c) listscroll_pinb_pane_ParamLimits

0xe15b,	// (0x0004652c) listscroll_pinb_pane

0xe173,	// (0x00046544) pinb_bg_pane_g1

0xe173,	// (0x00046544) pinb_bg_pane_g2

0xe173,	// (0x00046544) pinb_bg_pane_g3

0xe173,	// (0x00046544) pinb_bg_pane_g4

0xe173,	// (0x00046544) pinb_bg_pane_g5

0xe173,	// (0x00046544) pinb_bg_pane_g6

0xe173,	// (0x00046544) pinb_bg_pane_g7

0xe173,	// (0x00046544) pinb_bg_pane_g8

0xe173,	// (0x00046544) pinb_bg_pane_g9

0xe173,	// (0x00046544) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00047456) pinb_bg_pane_g

0xd5cb,	// (0x0004599c) grid_pinb_pane

0xd5cb,	// (0x0004599c) list_pinb_pane

0xe17d,	// (0x0004654e) scroll_pane_cp01_ParamLimits

0xe17d,	// (0x0004654e) scroll_pane_cp01

0xe18b,	// (0x0004655c) find_pinb_pane_g1_ParamLimits

0xe18b,	// (0x0004655c) find_pinb_pane_g1

0xe1a3,	// (0x00046574) find_pinb_pane_t1

0xe1b5,	// (0x00046586) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00047470) find_pinb_pane_t

0xe1d8,	// (0x000465a9) input_focus_pane_cp01_ParamLimits

0xe1d8,	// (0x000465a9) input_focus_pane_cp01

0xe1ca,	// (0x0004659b) cell_pinb_pane_ParamLimits

0xe1ca,	// (0x0004659b) cell_pinb_pane

0xe1e4,	// (0x000465b5) cell_pinb_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) cell_pinb_pane_g1

0xe1f2,	// (0x000465c3) cell_pinb_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) cell_pinb_pane_g2

0xe1f2,	// (0x000465c3) cell_pinb_pane_g3_ParamLimits

0xe1f2,	// (0x000465c3) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00047475) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00047475) cell_pinb_pane_g

0xdf00,	// (0x000462d1) grid_highlight_pane_cp01

0xe1ca,	// (0x0004659b) list_pinb_item_pane_ParamLimits

0xe1ca,	// (0x0004659b) list_pinb_item_pane

0xd5cb,	// (0x0004599c) list_highlight_pane_cp02

0xe200,	// (0x000465d1) list_pinb_item_pane_g1_ParamLimits

0xe200,	// (0x000465d1) list_pinb_item_pane_g1

0xe1f2,	// (0x000465c3) list_pinb_item_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) list_pinb_item_pane_g2

0xe1e4,	// (0x000465b5) list_pinb_item_pane_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_pinb_item_pane_g3

0xe1f2,	// (0x000465c3) list_pinb_item_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0004747c) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0004747c) list_pinb_item_pane_g

0xe20e,	// (0x000465df) list_pinb_item_pane_t1_ParamLimits

0xe20e,	// (0x000465df) list_pinb_item_pane_t1

0x43ea,	// (0x0003c7bb) calc_display_pane

0x4408,	// (0x0003c7d9) calc_paper_pane

0x4424,	// (0x0003c7f5) grid_calc_pane

0xdf00,	// (0x000462d1) bg_list_pane_cp01

0x4450,	// (0x0003c821) clock_g1

0x4458,	// (0x0003c829) clock_g2

0x0001,

0xf0b4,	// (0x00047485) clock_g

0x4462,	// (0x0003c833) clock_t1_ParamLimits

0x4462,	// (0x0003c833) clock_t1

0x4477,	// (0x0003c848) clock_t2_ParamLimits

0x4477,	// (0x0003c848) clock_t2

0x4489,	// (0x0003c85a) clock_t3_ParamLimits

0x4489,	// (0x0003c85a) clock_t3

0x449b,	// (0x0003c86c) clock_t4_ParamLimits

0x449b,	// (0x0003c86c) clock_t4

0x44ad,	// (0x0003c87e) clock_t5_ParamLimits

0x44ad,	// (0x0003c87e) clock_t5

0x44c2,	// (0x0003c893) clock_t6_ParamLimits

0x44c2,	// (0x0003c893) clock_t6

0x44d4,	// (0x0003c8a5) clock_t7_ParamLimits

0x44d4,	// (0x0003c8a5) clock_t7

0x44e6,	// (0x0003c8b7) clock_t8_ParamLimits

0x44e6,	// (0x0003c8b7) clock_t8

0x44fc,	// (0x0003c8cd) clock_t9_ParamLimits

0x44fc,	// (0x0003c8cd) clock_t9

0x0008,

0xf0b9,	// (0x0004748a) clock_t_ParamLimits

0xf0b9,	// (0x0004748a) clock_t

0xe222,	// (0x000465f3) popup_clock_analogue_window_cp02

0xe222,	// (0x000465f3) popup_clock_digital_window_cp01

0xdf00,	// (0x000462d1) listscroll_help_pane

0xdf00,	// (0x000462d1) phob_pre_status_pane

0xe22a,	// (0x000465fb) grid_qdial_pane

0xe15b,	// (0x0004652c) listscroll_mce_pane

0xe15b,	// (0x0004652c) bg_notes_pane

0xe234,	// (0x00046605) list_notes_pane

0x4512,	// (0x0003c8e3) scroll_pane_cp06

0xe242,	// (0x00046613) bg_calc_paper_pane

0x4521,	// (0x0003c8f2) list_calc_pane

0xe256,	// (0x00046627) bg_calc_display_pane

0x453b,	// (0x0003c90c) calc_display_pane_t1

0x4550,	// (0x0003c921) calc_display_pane_t2

0x4565,	// (0x0003c936) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0004749d) calc_display_pane_t

0x4577,	// (0x0003c948) cell_calc_pane_ParamLimits

0x4577,	// (0x0003c948) cell_calc_pane

0xe262,	// (0x00046633) bg_calc_paper_pane_g1

0xe26e,	// (0x0004663f) bg_calc_paper_pane_g2

0xe27a,	// (0x0004664b) bg_calc_paper_pane_g3

0xe286,	// (0x00046657) bg_calc_paper_pane_g4

0xe292,	// (0x00046663) bg_calc_paper_pane_g5

0x45a4,	// (0x0003c975) bg_calc_paper_pane_g6

0x45b5,	// (0x0003c986) bg_calc_paper_pane_g7

0x45c6,	// (0x0003c997) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000474a4) bg_calc_paper_pane_g

0x45d7,	// (0x0003c9a8) calc_bg_paper_pane_g9

0x45e8,	// (0x0003c9b9) list_calc_item_pane_ParamLimits

0x45e8,	// (0x0003c9b9) list_calc_item_pane

0xe29e,	// (0x0004666f) list_calc_item_pane_g1

0x4614,	// (0x0003c9e5) list_calc_item_pane_t1_ParamLimits

0x4614,	// (0x0003c9e5) list_calc_item_pane_t1

0x4626,	// (0x0003c9f7) list_calc_item_pane_t2_ParamLimits

0x4626,	// (0x0003c9f7) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000474b5) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000474b5) list_calc_item_pane_t

0xe173,	// (0x00046544) cell_calc_pane_g1

0xe2ab,	// (0x0004667c) grid_highlight_pane_cp02

0x4656,	// (0x0003ca27) bg_calc_display_pane_g1

0x465f,	// (0x0003ca30) bg_calc_display_pane_g2

0x4669,	// (0x0003ca3a) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000474bf) bg_calc_display_pane_g

0x4672,	// (0x0003ca43) cell_qdial_pane_ParamLimits

0x4672,	// (0x0003ca43) cell_qdial_pane

0x4686,	// (0x0003ca57) cell_qdial_pane_g1_ParamLimits

0x4686,	// (0x0003ca57) cell_qdial_pane_g1

0x4693,	// (0x0003ca64) cell_qdial_pane_g2_ParamLimits

0x4693,	// (0x0003ca64) cell_qdial_pane_g2

0xe2cd,	// (0x0004669e) cell_qdial_pane_g3_ParamLimits

0xe2cd,	// (0x0004669e) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000474c6) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000474c6) cell_qdial_pane_g

0x46b1,	// (0x0003ca82) cell_qdial_pane_t1_ParamLimits

0x46b1,	// (0x0003ca82) cell_qdial_pane_t1

0x46c9,	// (0x0003ca9a) cell_qdial_pane_t2_ParamLimits

0x46c9,	// (0x0003ca9a) cell_qdial_pane_t2

0x46dc,	// (0x0003caad) cell_qdial_pane_t3_ParamLimits

0x46dc,	// (0x0003caad) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000474cf) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000474cf) cell_qdial_pane_t

0xdf00,	// (0x000462d1) grid_highlight_pane_cp04

0xe2d9,	// (0x000466aa) thumbnail_qdial_pane_ParamLimits

0xe2d9,	// (0x000466aa) thumbnail_qdial_pane

0xe33e,	// (0x0004670f) list_help_pane

0xe347,	// (0x00046718) scroll_pane_cp02

0x46ef,	// (0x0003cac0) help_list_pane_t1_ParamLimits

0x46ef,	// (0x0003cac0) help_list_pane_t1

0x4725,	// (0x0003caf6) bg_notes_pane_g2

0x472d,	// (0x0003cafe) bg_notes_pane_g3

0x4735,	// (0x0003cb06) notes_bg_pane_g1

0x473d,	// (0x0003cb0e) notes_bg_pane_g4

0x4745,	// (0x0003cb16) notes_bg_pane_g5

0x474d,	// (0x0003cb1e) notes_bg_pane_g6

0x4755,	// (0x0003cb26) notes_bg_pane_g7

0x475d,	// (0x0003cb2e) notes_bg_pane_g8

0x4765,	// (0x0003cb36) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000474ed) notes_bg_pane_g

0x476d,	// (0x0003cb3e) list_notes_text_pane_ParamLimits

0x476d,	// (0x0003cb3e) list_notes_text_pane

0xe350,	// (0x00046721) list_notes_text_pane_g1

0x3361,	// (0x0003b732) list_notes_text_pane_t1

0x4795,	// (0x0003cb66) listscroll_cale_week_pane

0x47ba,	// (0x0003cb8b) bg_cale_heading_pane

0xe373,	// (0x00046744) bg_cale_pane_cp01

0x47da,	// (0x0003cbab) cale_week_corner_pane

0x47f4,	// (0x0003cbc5) cale_week_day_heading_pane

0x4814,	// (0x0003cbe5) cale_week_scroll_pane_g1

0x482f,	// (0x0003cc00) cale_week_scroll_pane_g2

0x4842,	// (0x0003cc13) cale_week_scroll_pane_g3

0x4855,	// (0x0003cc26) cale_week_scroll_pane_g4

0x4868,	// (0x0003cc39) cale_week_scroll_pane_g5

0x487b,	// (0x0003cc4c) cale_week_scroll_pane_g6

0x488e,	// (0x0003cc5f) cale_week_scroll_pane_g7

0x48a3,	// (0x0003cc74) cale_week_scroll_pane_g8

0x48b8,	// (0x0003cc89) cale_week_scroll_pane_g9

0x48cb,	// (0x0003cc9c) cale_week_scroll_pane_g10

0x48de,	// (0x0003ccaf) cale_week_scroll_pane_g11

0x48f1,	// (0x0003ccc2) cale_week_scroll_pane_g12

0x4908,	// (0x0003ccd9) cale_week_scroll_pane_g13

0x4923,	// (0x0003ccf4) cale_week_scroll_pane_g14

0x493e,	// (0x0003cd0f) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000474fc) cale_week_scroll_pane_g

0x496e,	// (0x0003cd3f) cale_week_time_pane

0x4983,	// (0x0003cd54) grid_cale_week_pane

0xe3c0,	// (0x00046791) scroll_pane_cp08

0x49a2,	// (0x0003cd73) cell_cale_week_pane_ParamLimits

0x49a2,	// (0x0003cd73) cell_cale_week_pane

0x4a04,	// (0x0003cdd5) cale_week_day_heading_pane_t1

0x4a1f,	// (0x0003cdf0) cale_week_day_heading_pane_t2

0x4a3a,	// (0x0003ce0b) cale_week_day_heading_pane_t3

0x4a55,	// (0x0003ce26) cale_week_day_heading_pane_t4

0x4a70,	// (0x0003ce41) cale_week_day_heading_pane_t5

0x4a8b,	// (0x0003ce5c) cale_week_day_heading_pane_t6

0x4aa6,	// (0x0003ce77) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0004751d) cale_week_day_heading_pane_t

0xe3dd,	// (0x000467ae) bg_cale_side_pane

0x4ac1,	// (0x0003ce92) cale_week_time_pane_t1

0x4adb,	// (0x0003ceac) cale_week_time_pane_t2

0x4af5,	// (0x0003cec6) cale_week_time_pane_t3

0x4b0f,	// (0x0003cee0) cale_week_time_pane_t4

0x4b29,	// (0x0003cefa) cale_week_time_pane_t5

0x4b43,	// (0x0003cf14) cale_week_time_pane_t6

0x4b61,	// (0x0003cf32) cale_week_time_pane_t7

0x4b83,	// (0x0003cf54) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0004752c) cale_week_time_pane_t

0x4ba7,	// (0x0003cf78) cell_cale_week_pane_g2

0x4bcb,	// (0x0003cf9c) cell_cale_week_pane_g3_ParamLimits

0x4bcb,	// (0x0003cf9c) cell_cale_week_pane_g3

0xe3eb,	// (0x000467bc) grid_highlight_pane_cp07

0xe3f3,	// (0x000467c4) listscroll_gms_pane

0xe3fd,	// (0x000467ce) grid_gms_pane

0xe406,	// (0x000467d7) listscroll_gms_pane_g1

0xe40e,	// (0x000467df) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0004753d) listscroll_gms_pane_g

0x4be3,	// (0x0003cfb4) scroll_pane_cp010

0x4bee,	// (0x0003cfbf) cell_gms_pane_ParamLimits

0x4bee,	// (0x0003cfbf) cell_gms_pane

0x4c01,	// (0x0003cfd2) cell_gms_pane_g1

0xe416,	// (0x000467e7) cell_gms_pane_g2

0xe350,	// (0x00046721) cell_gms_pane_g3

0xe41e,	// (0x000467ef) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00047542) cell_gms_pane_g

0xe427,	// (0x000467f8) grid_highlight_pane_cp09

0x6c27,	// (0x0003eff8) phob_pre_status_pane_g1

0x6c2f,	// (0x0003f000) phob_pre_status_pane_g2

0x6c37,	// (0x0003f008) phob_pre_status_pane_g3

0x6c3f,	// (0x0003f010) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0004790b) phob_pre_status_pane_g

0x6c4f,	// (0x0003f020) phob_pre_status_pane_t1

0x6c5f,	// (0x0003f030) phob_pre_status_pane_t2

0x6c6f,	// (0x0003f040) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x00047916) phob_pre_status_pane_t

0xe42f,	// (0x00046800) bg_list_pane_cp05

0x4c11,	// (0x0003cfe2) grid_vorec_pane

0x4c1b,	// (0x0003cfec) vorec_t1

0x4c29,	// (0x0003cffa) vorec_t2

0x4c37,	// (0x0003d008) vorec_t3

0x4c45,	// (0x0003d016) vorec_t4

0xb510,	// (0x000438e1) vorec_t5

0xb51e,	// (0x000438ef) vorec_t6

0x0004,

0xf17a,	// (0x0004754b) vorec_t

0xb52c,	// (0x000438fd) wait_bar_pane_cp01

0x4c61,	// (0x0003d032) cell_vorec_pane_ParamLimits

0x4c61,	// (0x0003d032) cell_vorec_pane

0x4c74,	// (0x0003d045) cell_vorec_pane_g1

0xdf00,	// (0x000462d1) grid_highlight_pane_cp05

0xe1ca,	// (0x0004659b) cams_zoom_pane

0xe1ca,	// (0x0004659b) image_vga_pane

0xe1f2,	// (0x000465c3) main_camera_pane_g1

0xe1f2,	// (0x000465c3) main_camera_pane_g2

0xe1f2,	// (0x000465c3) main_camera_pane_g3

0xe1f2,	// (0x000465c3) main_camera_pane_g4

0xe1f2,	// (0x000465c3) main_camera_pane_g5

0xe1f2,	// (0x000465c3) main_camera_pane_g6

0xe1f2,	// (0x000465c3) main_camera_pane_g7

0x0007,

0xf185,	// (0x00047556) main_camera_pane_g

0xef2e,	// (0x000472ff) main_camera_pane_t1

0xef2e,	// (0x000472ff) main_camera_pane_t2

0x0001,

0xf196,	// (0x00047567) main_camera_pane_t

0x4c7e,	// (0x0003d04f) cams_zoom_pane_cp_ParamLimits

0x4c7e,	// (0x0003d04f) cams_zoom_pane_cp

0x4cac,	// (0x0003d07d) image_cif_pane_ParamLimits

0x4cac,	// (0x0003d07d) image_cif_pane

0xd5cb,	// (0x0004599c) image_subqcif_pane

0x4cba,	// (0x0003d08b) main_video_pane_g1_ParamLimits

0x4cba,	// (0x0003d08b) main_video_pane_g1

0x4ce2,	// (0x0003d0b3) main_video_pane_g2_ParamLimits

0x4ce2,	// (0x0003d0b3) main_video_pane_g2

0x4d15,	// (0x0003d0e6) main_video_pane_g3_ParamLimits

0x4d15,	// (0x0003d0e6) main_video_pane_g3

0x4d15,	// (0x0003d0e6) main_video_pane_g4_ParamLimits

0x4d15,	// (0x0003d0e6) main_video_pane_g4

0x4d43,	// (0x0003d114) main_video_pane_g5_ParamLimits

0x4d43,	// (0x0003d114) main_video_pane_g5

0xe437,	// (0x00046808) main_video_pane_g6_ParamLimits

0xe437,	// (0x00046808) main_video_pane_g6

0x0006,

0xf19b,	// (0x0004756c) main_video_pane_g_ParamLimits

0xf19b,	// (0x0004756c) main_video_pane_g

0x4d5f,	// (0x0003d130) main_video_pane_t1_ParamLimits

0x4d5f,	// (0x0003d130) main_video_pane_t1

0xe451,	// (0x00046822) cams_zoom_pane_g1

0xe451,	// (0x00046822) cams_zoom_pane_g2

0xe451,	// (0x00046822) cams_zoom_pane_g3

0xe451,	// (0x00046822) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0004757b) cams_zoom_pane_g

0x4da5,	// (0x0003d176) grid_cams_pane

0x4db3,	// (0x0003d184) linegrid_cams_pane

0x4dc1,	// (0x0003d192) cell_cams_pane_ParamLimits

0x4dc1,	// (0x0003d192) cell_cams_pane

0xe45b,	// (0x0004682c) cams_burst_image_pane

0xe463,	// (0x00046834) cell_cams_pane_g1

0xdf00,	// (0x000462d1) grid_highlight_pane_cp03

0xe173,	// (0x00046544) mp_bg_pane_g1

0xd5cb,	// (0x0004599c) bg_list_pane_cp03

0xd5cb,	// (0x0004599c) bg_mp_pane

0xd5cb,	// (0x0004599c) grid_mp_pane

0xe451,	// (0x00046822) media_player_g1

0xe994,	// (0x00046d65) media_player_t1

0xe994,	// (0x00046d65) media_player_t2

0xe994,	// (0x00046d65) media_player_t3

0xe994,	// (0x00046d65) media_player_t4

0xe994,	// (0x00046d65) media_player_t5

0xe994,	// (0x00046d65) media_player_t6

0xe994,	// (0x00046d65) media_player_t7

0x0006,

0xf524,	// (0x000478f5) media_player_t

0xd5cb,	// (0x0004599c) wait_bar_pane_cp02

0xf509,	// (0x000478da) main_usb_pane_t

0xec0c,	// (0x00046fdd) cell_mp_pane

0xe173,	// (0x00046544) cell_mp_pane_g1

0xdf00,	// (0x000462d1) grid_highlight_pane_cp06

0xe47f,	// (0x00046850) grid_skin_colour_pane

0xe487,	// (0x00046858) list_highlight_pane_cp03

0x4dd4,	// (0x0003d1a5) skin_g1

0xe48f,	// (0x00046860) skin_t1

0xe49e,	// (0x0004686f) skin_t2

0x0001,

0xf1d8,	// (0x000475a9) skin_t

0x4dde,	// (0x0003d1af) cell_skin_colour_pane_ParamLimits

0x4dde,	// (0x0003d1af) cell_skin_colour_pane

0xe4ac,	// (0x0004687d) cell_skin_colour_pane_g1

0x4e62,	// (0x0003d233) call_video_g1_ParamLimits

0x4e62,	// (0x0003d233) call_video_g1

0x4e72,	// (0x0003d243) call_video_g2_ParamLimits

0x4e72,	// (0x0003d243) call_video_g2

0x0001,

0xf1dd,	// (0x000475ae) call_video_g_ParamLimits

0xf1dd,	// (0x000475ae) call_video_g

0x4ecc,	// (0x0003d29d) call_video_uplink_pane_cp1_ParamLimits

0x4ecc,	// (0x0003d29d) call_video_uplink_pane_cp1

0xe4be,	// (0x0004688f) call_video_uplink_pane_cp2

0x4f98,	// (0x0003d369) video_down_crop_pane_ParamLimits

0x4f98,	// (0x0003d369) video_down_crop_pane

0x5096,	// (0x0003d467) video_down_pane_ParamLimits

0x5096,	// (0x0003d467) video_down_pane

0xe4c6,	// (0x00046897) video_down_subqcif_pane_ParamLimits

0xe4c6,	// (0x00046897) video_down_subqcif_pane

0xe4de,	// (0x000468af) video_down_subqcif_pane_cp_ParamLimits

0xe4de,	// (0x000468af) video_down_subqcif_pane_cp

0xe504,	// (0x000468d5) im_reading_pane_ParamLimits

0xe504,	// (0x000468d5) im_reading_pane

0x51b6,	// (0x0003d587) im_writing_pane_ParamLimits

0x51b6,	// (0x0003d587) im_writing_pane

0x51d4,	// (0x0003d5a5) im_reading_pane_t1

0xe51e,	// (0x000468ef) list_im_pane

0xe52f,	// (0x00046900) scroll_pane_cp07

0x5228,	// (0x0003d5f9) im_writing_pane_t1_ParamLimits

0x5228,	// (0x0003d5f9) im_writing_pane_t1

0xe548,	// (0x00046919) im_writing_pane_t2_ParamLimits

0xe548,	// (0x00046919) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000475b8) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000475b8) im_writing_pane_t

0xdf00,	// (0x000462d1) input_focus_pane_cp04

0xdf00,	// (0x000462d1) input_focus_pane_cp05

0x523d,	// (0x0003d60e) list_im_single_pane_ParamLimits

0x523d,	// (0x0003d60e) list_im_single_pane

0x5261,	// (0x0003d632) list_single_im_pane_t1

0xe42f,	// (0x00046800) blid_accuracy_pane

0xe42f,	// (0x00046800) blid_compass_pane

0x1159,	// (0x0003952a) main_location_t1

0x1159,	// (0x0003952a) main_location_t2

0x1159,	// (0x0003952a) main_location_t3

0x0002,

0xf533,	// (0x00047904) main_location_t

0xdf00,	// (0x000462d1) aid_levels_location

0xe173,	// (0x00046544) blid_accuracy_pane_g1

0xe173,	// (0x00046544) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0004760c) blid_accuracy_pane_g

0xe590,	// (0x00046961) wml_content_pane

0xe5ce,	// (0x0004699f) wml_button_pane_ParamLimits

0xe5ce,	// (0x0004699f) wml_button_pane

0x5270,	// (0x0003d641) wml_list_single_large_pane_ParamLimits

0x5270,	// (0x0003d641) wml_list_single_large_pane

0x529a,	// (0x0003d66b) wml_list_single_medium_pane_ParamLimits

0x529a,	// (0x0003d66b) wml_list_single_medium_pane

0x52cb,	// (0x0003d69c) wml_list_single_small_pane_ParamLimits

0x52cb,	// (0x0003d69c) wml_list_single_small_pane

0xe5e2,	// (0x000469b3) wml_selection_box_pane_ParamLimits

0xe5e2,	// (0x000469b3) wml_selection_box_pane

0xe5f5,	// (0x000469c6) wml_list_single_pane_t1

0xe604,	// (0x000469d5) wml_list_single_medium_pane_t1

0xe613,	// (0x000469e4) wml_list_single_large_pane_t1

0xe622,	// (0x000469f3) input_focus_pane_cp02_ParamLimits

0xe622,	// (0x000469f3) input_focus_pane_cp02

0xe635,	// (0x00046a06) wml_selection_box_pane_g1

0xe63e,	// (0x00046a0f) wml_selection_box_pane_t1_ParamLimits

0xe63e,	// (0x00046a0f) wml_selection_box_pane_t1

0xe15b,	// (0x0004652c) bg_wml_button_pane_ParamLimits

0xe15b,	// (0x0004652c) bg_wml_button_pane

0xe656,	// (0x00046a27) wml_button_pane_g1

0xe65e,	// (0x00046a2f) wml_button_pane_t1

0xe656,	// (0x00046a27) wml_button_bg_pane_g1

0xe66e,	// (0x00046a3f) wml_button_bg_pane_g2

0xe676,	// (0x00046a47) wml_button_bg_pane_g3

0xe67e,	// (0x00046a4f) wml_button_bg_pane_g4

0xe686,	// (0x00046a57) wml_button_bg_pane_g5

0xe68e,	// (0x00046a5f) wml_button_bg_pane_g6

0xe696,	// (0x00046a67) wml_button_bg_pane_g7

0xe69e,	// (0x00046a6f) wml_button_bg_pane_g8

0xe6a6,	// (0x00046a77) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000475bd) wml_button_bg_pane_g

0x5305,	// (0x0003d6d6) bg_list_pane_cp02

0xe6ae,	// (0x00046a7f) mce_header_pane_ParamLimits

0xe6ae,	// (0x00046a7f) mce_header_pane

0xe6c4,	// (0x00046a95) mce_icon_pane

0xe6c4,	// (0x00046a95) mce_image_pane

0xe6cd,	// (0x00046a9e) mce_text_pane_ParamLimits

0xe6cd,	// (0x00046a9e) mce_text_pane

0x530f,	// (0x0003d6e0) scroll_pane_cp03

0xe5c6,	// (0x00046997) scroll_pane_cp04

0xe6e0,	// (0x00046ab1) scroll_pane_cp05_ParamLimits

0xe6e0,	// (0x00046ab1) scroll_pane_cp05

0x5319,	// (0x0003d6ea) mce_header_field_pane_ParamLimits

0x5319,	// (0x0003d6ea) mce_header_field_pane

0x5339,	// (0x0003d70a) mce_header_field_pane_2_ParamLimits

0x5339,	// (0x0003d70a) mce_header_field_pane_2

0x534f,	// (0x0003d720) mce_header_field_pane_3

0x5357,	// (0x0003d728) list_single_mce_message_pane_ParamLimits

0x5357,	// (0x0003d728) list_single_mce_message_pane

0x5382,	// (0x0003d753) list_single_mce_smart_pane_ParamLimits

0x5382,	// (0x0003d753) list_single_mce_smart_pane

0xe6ec,	// (0x00046abd) input_focus_pane_cp03

0xe6f5,	// (0x00046ac6) list_header_data_pane

0x53b8,	// (0x0003d789) mce_header_field_pane_t1

0x53c6,	// (0x0003d797) list_single_mce_header_pane_ParamLimits

0x53c6,	// (0x0003d797) list_single_mce_header_pane

0xe6fd,	// (0x00046ace) list_single_mce_header_pane_t1

0xe70c,	// (0x00046add) list_single_mce_message_pane_g1

0xe714,	// (0x00046ae5) list_single_mce_message_pane_t1

0x5418,	// (0x0003d7e9) bg_cale_heading_pane_cp01_ParamLimits

0x5418,	// (0x0003d7e9) bg_cale_heading_pane_cp01

0xe722,	// (0x00046af3) bg_cale_pane_cp02_ParamLimits

0xe722,	// (0x00046af3) bg_cale_pane_cp02

0x5466,	// (0x0003d837) cale_month_corner_pane

0x5485,	// (0x0003d856) cale_month_day_heading_pane_ParamLimits

0x5485,	// (0x0003d856) cale_month_day_heading_pane

0x54eb,	// (0x0003d8bc) cale_month_pane_g1_ParamLimits

0x54eb,	// (0x0003d8bc) cale_month_pane_g1

0x552e,	// (0x0003d8ff) cale_month_pane_g2_ParamLimits

0x552e,	// (0x0003d8ff) cale_month_pane_g2

0x5566,	// (0x0003d937) cale_month_pane_g3_ParamLimits

0x5566,	// (0x0003d937) cale_month_pane_g3

0x55b2,	// (0x0003d983) cale_month_pane_g4_ParamLimits

0x55b2,	// (0x0003d983) cale_month_pane_g4

0x55fe,	// (0x0003d9cf) cale_month_pane_g5_ParamLimits

0x55fe,	// (0x0003d9cf) cale_month_pane_g5

0x564a,	// (0x0003da1b) cale_month_pane_g6_ParamLimits

0x564a,	// (0x0003da1b) cale_month_pane_g6

0x5696,	// (0x0003da67) cale_month_pane_g7_ParamLimits

0x5696,	// (0x0003da67) cale_month_pane_g7

0x56fa,	// (0x0003dacb) cale_month_pane_g8_ParamLimits

0x56fa,	// (0x0003dacb) cale_month_pane_g8

0x575e,	// (0x0003db2f) cale_month_pane_g9_ParamLimits

0x575e,	// (0x0003db2f) cale_month_pane_g9

0x57bc,	// (0x0003db8d) cale_month_pane_g10_ParamLimits

0x57bc,	// (0x0003db8d) cale_month_pane_g10

0x5818,	// (0x0003dbe9) cale_month_pane_g11_ParamLimits

0x5818,	// (0x0003dbe9) cale_month_pane_g11

0x586c,	// (0x0003dc3d) cale_month_pane_g12_ParamLimits

0x586c,	// (0x0003dc3d) cale_month_pane_g12

0x58c2,	// (0x0003dc93) cale_month_pane_g13_ParamLimits

0x58c2,	// (0x0003dc93) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000475d0) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000475d0) cale_month_pane_g

0x5918,	// (0x0003dce9) cale_month_week_pane

0x593c,	// (0x0003dd0d) grid_cale_month_pane_ParamLimits

0x593c,	// (0x0003dd0d) grid_cale_month_pane

0x5995,	// (0x0003dd66) cale_month_day_heading_pane_t1

0x5a1b,	// (0x0003ddec) cale_month_day_heading_pane_t2

0x5a94,	// (0x0003de65) cale_month_day_heading_pane_t3

0x5b0d,	// (0x0003dede) cale_month_day_heading_pane_t4

0x5b86,	// (0x0003df57) cale_month_day_heading_pane_t5

0x5bff,	// (0x0003dfd0) cale_month_day_heading_pane_t6

0x5c78,	// (0x0003e049) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000475eb) cale_month_day_heading_pane_t

0xe3dd,	// (0x000467ae) bg_cale_side_pane_cp01

0x5d09,	// (0x0003e0da) cale_month_week_pane_t1

0x5d22,	// (0x0003e0f3) cale_month_week_pane_t2

0x5d3b,	// (0x0003e10c) cale_month_week_pane_t3

0x5d54,	// (0x0003e125) cale_month_week_pane_t4

0x5d6d,	// (0x0003e13e) cale_month_week_pane_t5

0x5d8e,	// (0x0003e15f) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000475fa) cale_month_week_pane_t

0x5daf,	// (0x0003e180) cell_cale_month_pane_ParamLimits

0x5daf,	// (0x0003e180) cell_cale_month_pane

0x5ed1,	// (0x0003e2a2) cell_cale_month_pane_g1

0x5edd,	// (0x0003e2ae) cell_cale_month_pane_t1_ParamLimits

0x5edd,	// (0x0003e2ae) cell_cale_month_pane_t1

0xe3eb,	// (0x000467bc) grid_highlight_pane_cp08

0xe173,	// (0x00046544) main_smil_g1

0x5f09,	// (0x0003e2da) smil_status_pane

0xe761,	// (0x00046b32) smil_text_pane

0x1071,	// (0x00039442) bg_popup_call3_rect_pane_g8

0x1079,	// (0x0003944a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x00047898) bg_popup_call3_rect_pane_g

0x1235,	// (0x00039606) smil_status_volume_pane_g1

0xe76b,	// (0x00046b3c) smil_status_pane_t1

0x6fc6,	// (0x0003f397) volume_smil_pane

0xe782,	// (0x00046b53) list_smil_text_pane

0x5f1c,	// (0x0003e2ed) scroll_pane_cp011

0x5f27,	// (0x0003e2f8) smil_text_list_pane_t1_ParamLimits

0x5f27,	// (0x0003e2f8) smil_text_list_pane_t1

0x5f9f,	// (0x0003e370) aid_volume_smil_ParamLimits

0x5f9f,	// (0x0003e370) aid_volume_smil

0xe173,	// (0x00046544) smil_volume_pane_g1

0xe173,	// (0x00046544) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0004760c) smil_volume_pane_g

0x4795,	// (0x0003cb66) listscroll_cale_day_pane

0xe78c,	// (0x00046b5d) bg_cale_pane

0xe7a4,	// (0x00046b75) list_cale_pane

0xe7c7,	// (0x00046b98) scroll_pane_cp09

0xe7d8,	// (0x00046ba9) cale_bg_pane_g1

0xe7e0,	// (0x00046bb1) cale_bg_pane_g2

0xe7e8,	// (0x00046bb9) cale_bg_pane_g3

0xe7f0,	// (0x00046bc1) cale_bg_pane_g4

0xe7f8,	// (0x00046bc9) cale_bg_pane_g5

0xe800,	// (0x00046bd1) cale_bg_pane_g6

0xe808,	// (0x00046bd9) cale_bg_pane_g7

0xe810,	// (0x00046be1) cale_bg_pane_g8

0xe818,	// (0x00046be9) cale_bg_pane_g9

0x0008,

0xf240,	// (0x00047611) cale_bg_pane_g

0x5fc1,	// (0x0003e392) list_cale_time_pane_ParamLimits

0x5fc1,	// (0x0003e392) list_cale_time_pane

0xe828,	// (0x00046bf9) list_cale_time_pane_g1_ParamLimits

0xe828,	// (0x00046bf9) list_cale_time_pane_g1

0xe834,	// (0x00046c05) list_cale_time_pane_g2_ParamLimits

0xe834,	// (0x00046c05) list_cale_time_pane_g2

0x5fe3,	// (0x0003e3b4) list_cale_time_pane_g3_ParamLimits

0x5fe3,	// (0x0003e3b4) list_cale_time_pane_g3

0x5ff1,	// (0x0003e3c2) list_cale_time_pane_g4_ParamLimits

0x5ff1,	// (0x0003e3c2) list_cale_time_pane_g4

0x5fff,	// (0x0003e3d0) list_cale_time_pane_g5_ParamLimits

0x5fff,	// (0x0003e3d0) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x00047624) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x00047624) list_cale_time_pane_g

0xe84e,	// (0x00046c1f) list_cale_time_pane_t1_ParamLimits

0xe84e,	// (0x00046c1f) list_cale_time_pane_t1

0xe876,	// (0x00046c47) list_cale_time_pane_t2_ParamLimits

0xe876,	// (0x00046c47) list_cale_time_pane_t2

0x62a2,	// (0x0003e673) aid_blid_cardinal_pane

0x62e4,	// (0x0003e6b5) compass_pane_t4

0xe89e,	// (0x00046c6f) list_cale_time_pane_t4_ParamLimits

0xe89e,	// (0x00046c6f) list_cale_time_pane_t4

0x62f2,	// (0x0003e6c3) compass_pane_t5

0x6302,	// (0x0003e6d3) compass_pane_t6

0x6310,	// (0x0003e6e1) compass_pane_t7

0xed51,	// (0x00047122) navi_pane_cc_t1

0xef42,	// (0x00047313) aid_phob_thumbnail_center_pane

0x66c5,	// (0x0003ea96) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x00047631) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x00047631) list_cale_time_pane_t

0xd63f,	// (0x00045a10) bg_popup_window_pane_cp02_ParamLimits

0xd63f,	// (0x00045a10) bg_popup_window_pane_cp02

0xe8c6,	// (0x00046c97) heading_pane_cp01_ParamLimits

0xe8c6,	// (0x00046c97) heading_pane_cp01

0xe8d2,	// (0x00046ca3) loc_req_pane_ParamLimits

0xe8d2,	// (0x00046ca3) loc_req_pane

0xe8e2,	// (0x00046cb3) loc_type_pane_ParamLimits

0xe8e2,	// (0x00046cb3) loc_type_pane

0xe8f4,	// (0x00046cc5) loc_type_pane_t1_ParamLimits

0xe8f4,	// (0x00046cc5) loc_type_pane_t1

0xe906,	// (0x00046cd7) loc_type_pane_t2_ParamLimits

0xe906,	// (0x00046cd7) loc_type_pane_t2

0xe918,	// (0x00046ce9) loc_type_pane_t3_ParamLimits

0xe918,	// (0x00046ce9) loc_type_pane_t3

0x0002,

0xf267,	// (0x00047638) loc_type_pane_t_ParamLimits

0xf267,	// (0x00047638) loc_type_pane_t

0xe92a,	// (0x00046cfb) list_loc_req_pane

0xe934,	// (0x00046d05) scroll_pane_cp012

0x600d,	// (0x0003e3de) list_single_loc_request_popup_menu_pane_ParamLimits

0x600d,	// (0x0003e3de) list_single_loc_request_popup_menu_pane

0xe93f,	// (0x00046d10) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe93f,	// (0x00046d10) list_single_loc_request_popup_menu_pane_g1

0xe94b,	// (0x00046d1c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe94b,	// (0x00046d1c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0004763f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0004763f) list_single_loc_request_popup_menu_pane_g

0xe957,	// (0x00046d28) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe957,	// (0x00046d28) list_single_loc_request_popup_menu_pane_t1

0x601f,	// (0x0003e3f0) bg_popup_window_pane_cp03_ParamLimits

0x601f,	// (0x0003e3f0) bg_popup_window_pane_cp03

0x602d,	// (0x0003e3fe) heading_loc_req_pane_ParamLimits

0x602d,	// (0x0003e3fe) heading_loc_req_pane

0x6039,	// (0x0003e40a) popup_dyc_status_message_window_g1_ParamLimits

0x6039,	// (0x0003e40a) popup_dyc_status_message_window_g1

0x6045,	// (0x0003e416) popup_dyc_status_message_window_t1_ParamLimits

0x6045,	// (0x0003e416) popup_dyc_status_message_window_t1

0x6057,	// (0x0003e428) popup_dyc_status_message_window_t2_ParamLimits

0x6057,	// (0x0003e428) popup_dyc_status_message_window_t2

0x6069,	// (0x0003e43a) popup_dyc_status_message_window_t3_ParamLimits

0x6069,	// (0x0003e43a) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x00047644) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x00047644) popup_dyc_status_message_window_t

0xdf00,	// (0x000462d1) bg_heading_pane_cp01

0xe96d,	// (0x00046d3e) heading_loc_req_pane_g1

0xe975,	// (0x00046d46) heading_loc_req_pane_g2

0xe97d,	// (0x00046d4e) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0004764b) heading_loc_req_pane_g

0xe985,	// (0x00046d56) heading_loc_req_pane_t1

0xe9b0,	// (0x00046d81) bg_popup_sub_pane_cp01_ParamLimits

0xe9b0,	// (0x00046d81) bg_popup_sub_pane_cp01

0xe9be,	// (0x00046d8f) popup_cale_events_window_g1_ParamLimits

0xe9be,	// (0x00046d8f) popup_cale_events_window_g1

0xe9de,	// (0x00046daf) popup_cale_events_window_g2_ParamLimits

0xe9de,	// (0x00046daf) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0004766d) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0004766d) popup_cale_events_window_g

0xe9fe,	// (0x00046dcf) popup_cale_events_window_t1_ParamLimits

0xe9fe,	// (0x00046dcf) popup_cale_events_window_t1

0xea10,	// (0x00046de1) popup_cale_events_window_t2_ParamLimits

0xea10,	// (0x00046de1) popup_cale_events_window_t2

0xea4e,	// (0x00046e1f) popup_cale_events_window_t3_ParamLimits

0xea4e,	// (0x00046e1f) popup_cale_events_window_t3

0xea88,	// (0x00046e59) popup_cale_events_window_t4_ParamLimits

0xea88,	// (0x00046e59) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x00047672) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x00047672) popup_cale_events_window_t

0x6093,	// (0x0003e464) call_type_pane

0x0896,	// (0x00038c67) popup_call_status_window_g1

0x609f,	// (0x0003e470) popup_call_status_window_g2

0x60ab,	// (0x0003e47c) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0004767b) popup_call_status_window_g

0xeabe,	// (0x00046e8f) call_type_pane_g1

0xeac7,	// (0x00046e98) call_type_pane_g2

0x0001,

0xf2b1,	// (0x00047682) call_type_pane_g

0xdf00,	// (0x000462d1) bg_popup_sub_pane_cp02

0xead0,	// (0x00046ea1) listscroll_popup_wml_pane

0xead8,	// (0x00046ea9) list_wml_pane

0xeae2,	// (0x00046eb3) scroll_pane_cp013

0xeaed,	// (0x00046ebe) list_single_graphic_popup_wml_pane_ParamLimits

0xeaed,	// (0x00046ebe) list_single_graphic_popup_wml_pane

0xe173,	// (0x00046544) list_single_graphic_popup_wml_pane_g1

0xeb01,	// (0x00046ed2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x00047687) list_single_graphic_popup_wml_pane_g

0xeb09,	// (0x00046eda) list_single_graphic_popup_wml_pane_t1

0xeb1f,	// (0x00046ef0) aid_call_pane

0xe153,	// (0x00046524) popup_clock_analogue_window_g1

0xe153,	// (0x00046524) popup_clock_analogue_window_g2

0x60b7,	// (0x0003e488) popup_clock_analogue_window_g3

0x60b7,	// (0x0003e488) popup_clock_analogue_window_g4

0xe173,	// (0x00046544) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0004768c) popup_clock_analogue_window_g

0x60bf,	// (0x0003e490) popup_clock_analogue_window_t1

0x60cd,	// (0x0003e49e) clock_digital_number_pane_ParamLimits

0x60cd,	// (0x0003e49e) clock_digital_number_pane

0x60d9,	// (0x0003e4aa) clock_digital_number_pane_cp02_ParamLimits

0x60d9,	// (0x0003e4aa) clock_digital_number_pane_cp02

0x60e5,	// (0x0003e4b6) clock_digital_number_pane_cp03_ParamLimits

0x60e5,	// (0x0003e4b6) clock_digital_number_pane_cp03

0x60f1,	// (0x0003e4c2) clock_digital_number_pane_cp04_ParamLimits

0x60f1,	// (0x0003e4c2) clock_digital_number_pane_cp04

0x6101,	// (0x0003e4d2) clock_digital_separator_pane_ParamLimits

0x6101,	// (0x0003e4d2) clock_digital_separator_pane

0x610d,	// (0x0003e4de) popup_clock_digital_window_t1

0xe173,	// (0x00046544) clock_digital_number_pane_g1

0xe173,	// (0x00046544) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0004760c) clock_digital_number_pane_g

0xe173,	// (0x00046544) clock_digital_separator_pane_g1

0xe173,	// (0x00046544) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0004760c) clock_digital_separator_pane_g

0xdf00,	// (0x000462d1) bg_popup_window_pane_cp04

0xeb27,	// (0x00046ef8) heading_pane_cp03

0xe42f,	// (0x00046800) listscroll_popup_gms_pane

0xdf00,	// (0x000462d1) grid_large_graphic_popup_pane

0xeb30,	// (0x00046f01) listscroll_popup_gms_pane_g1

0xeb39,	// (0x00046f0a) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x00047697) listscroll_popup_gms_pane_g

0xeb42,	// (0x00046f13) scroll_pane_cp014

0xe1ca,	// (0x0004659b) cell_large_graphic_popup_pane_ParamLimits

0xe1ca,	// (0x0004659b) cell_large_graphic_popup_pane

0xe1e4,	// (0x000465b5) cell_large_graphic_popup_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) cell_large_graphic_popup_pane_g1

0xeb4b,	// (0x00046f1c) cell_large_graphic_popup_pane_g2_ParamLimits

0xeb4b,	// (0x00046f1c) cell_large_graphic_popup_pane_g2

0xeb59,	// (0x00046f2a) cell_large_graphic_popup_pane_g3_ParamLimits

0xeb59,	// (0x00046f2a) cell_large_graphic_popup_pane_g3

0xeb67,	// (0x00046f38) cell_large_graphic_popup_pane_g4_ParamLimits

0xeb67,	// (0x00046f38) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0004769c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0004769c) cell_large_graphic_popup_pane_g

0xdf00,	// (0x000462d1) grid_highlight_pane_cp010

0xe173,	// (0x00046544) bg_popup_call_pane_g1

0xeb78,	// (0x00046f49) list_single_graphic_popup_conf_pane_ParamLimits

0xeb78,	// (0x00046f49) list_single_graphic_popup_conf_pane

0xeb8b,	// (0x00046f5c) list_highlight_pane_cp01

0xeb94,	// (0x00046f65) list_single_graphic_popup_conf_pane_g1

0xeb9c,	// (0x00046f6d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x000476a5) list_single_graphic_popup_conf_pane_g

0xeba4,	// (0x00046f75) list_single_graphic_popup_conf_pane_t1

0xebb2,	// (0x00046f83) linegrid_cams_pane_g1

0x612a,	// (0x0003e4fb) linegrid_cams_pane_g2

0xe350,	// (0x00046721) linegrid_cams_pane_g3

0xebbb,	// (0x00046f8c) linegrid_cams_pane_g4

0x6133,	// (0x0003e504) linegrid_cams_pane_g5

0x613c,	// (0x0003e50d) linegrid_cams_pane_g6

0xe41e,	// (0x000467ef) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x000476aa) linegrid_cams_pane_g

0xebc4,	// (0x00046f95) popup_clock_analogue_window

0xebc4,	// (0x00046f95) popup_clock_digital_window

0xdf00,	// (0x000462d1) popup_phob_thumbnail_window

0xe173,	// (0x00046544) call_video_uplink_pane_g1

0xebcd,	// (0x00046f9e) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x000476b9) call_video_uplink_pane_g

0xebd5,	// (0x00046fa6) video_uplink_pane

0xebdd,	// (0x00046fae) mce_image_pane_g1

0x6145,	// (0x0003e516) mce_image_pane_g2

0x614f,	// (0x0003e520) mce_image_pane_g3

0x6157,	// (0x0003e528) mce_image_pane_g4

0x615f,	// (0x0003e530) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x000476be) mce_image_pane_g

0xebe7,	// (0x00046fb8) control_top_pane_stacon_cp01_ParamLimits

0xebe7,	// (0x00046fb8) control_top_pane_stacon_cp01

0xebfb,	// (0x00046fcc) uni_indicator_pane_stacon_cp01_ParamLimits

0xebfb,	// (0x00046fcc) uni_indicator_pane_stacon_cp01

0xec0c,	// (0x00046fdd) bg_popup_sub_pane_cp03

0xec16,	// (0x00046fe7) chi_dic_find_pane

0x6167,	// (0x0003e538) listscroll_chi_dic_pane

0xec1e,	// (0x00046fef) main_pane_chidic_g1

0xec26,	// (0x00046ff7) chi_dic_find_pane_t1

0xec34,	// (0x00047005) find_chidic_pane

0xec3d,	// (0x0004700e) chi_dic_list_pane_ParamLimits

0xec3d,	// (0x0004700e) chi_dic_list_pane

0xec4e,	// (0x0004701f) scroll_pane_cp020

0xec56,	// (0x00047027) find_chidic_pane_t1

0xdf00,	// (0x000462d1) input_focus_pane_cp06

0x617b,	// (0x0003e54c) list_chi_dic_pane_ParamLimits

0x617b,	// (0x0003e54c) list_chi_dic_pane

0x6195,	// (0x0003e566) list_chi_dic_pane_t1_ParamLimits

0x6195,	// (0x0003e566) list_chi_dic_pane_t1

0xdf00,	// (0x000462d1) list_highlight_pane_cp020

0xec65,	// (0x00047036) bg_cale_heading_pane_g1

0x61a8,	// (0x0003e579) bg_cale_heading_pane_g2

0x61b0,	// (0x0003e581) bg_cale_heading_pane_g3

0x61b8,	// (0x0003e589) bg_cale_heading_pane_g4

0x61c2,	// (0x0003e593) bg_cale_heading_pane_g5

0x61cc,	// (0x0003e59d) bg_cale_heading_pane_g6

0x61d4,	// (0x0003e5a5) bg_cale_heading_pane_g7

0x61dc,	// (0x0003e5ad) bg_cale_heading_pane_g8

0x61e6,	// (0x0003e5b7) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x000476c9) bg_cale_heading_pane_g

0xec65,	// (0x00047036) bg_cale_side_pane_g1

0x61f0,	// (0x0003e5c1) bg_cale_side_pane_g2

0x61fa,	// (0x0003e5cb) bg_cale_side_pane_g3

0x6204,	// (0x0003e5d5) bg_cale_side_pane_g4

0x620e,	// (0x0003e5df) bg_cale_side_pane_g5

0x6218,	// (0x0003e5e9) bg_cale_side_pane_g6

0x6222,	// (0x0003e5f3) bg_cale_side_pane_g7

0x622c,	// (0x0003e5fd) bg_cale_side_pane_g8

0x6234,	// (0x0003e605) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x000476dc) bg_cale_side_pane_g

0x623c,	// (0x0003e60d) popup_call_status_window_ParamLimits

0x623c,	// (0x0003e60d) popup_call_status_window

0xec6d,	// (0x0004703e) stacon_top_pane

0xec75,	// (0x00047046) status_pane_ParamLimits

0xec75,	// (0x00047046) status_pane

0xec8a,	// (0x0004705b) status_small_pane

0xec92,	// (0x00047063) control_pane

0xdf00,	// (0x000462d1) stacon_bottom_pane

0xec9a,	// (0x0004706b) list_single_mce_smart_pane_t1_ParamLimits

0xec9a,	// (0x0004706b) list_single_mce_smart_pane_t1

0xecad,	// (0x0004707e) list_single_mce_smart_pane_t2_ParamLimits

0xecad,	// (0x0004707e) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x000476ef) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x000476ef) list_single_mce_smart_pane_t

0x6248,	// (0x0003e619) compass_pane

0x6254,	// (0x0003e625) main_location2_pane_t1

0x6268,	// (0x0003e639) main_location2_pane_t2

0x627c,	// (0x0003e64d) main_location2_pane_t3

0x0003,

0xf323,	// (0x000476f4) main_location2_pane_t

0xeccc,	// (0x0004709d) compass_pane_g1_ParamLimits

0xeccc,	// (0x0004709d) compass_pane_g1

0x62c6,	// (0x0003e697) compass_pane_t1

0x62d5,	// (0x0003e6a6) compass_pane_t2

0x0005,

0xf32c,	// (0x000476fd) compass_pane_t

0x6320,	// (0x0003e6f1) text_secondary_cp61

0xed48,	// (0x00047119) navi_pane_cams_g5

0xedc4,	// (0x00047195) navi_pane_im_t1

0xedd2,	// (0x000471a3) navi_pane_mp_g1_ParamLimits

0xedd2,	// (0x000471a3) navi_pane_mp_g1

0xede6,	// (0x000471b7) navi_pane_mp_g2_ParamLimits

0xede6,	// (0x000471b7) navi_pane_mp_g2

0xedf2,	// (0x000471c3) navi_pane_mp_g3_ParamLimits

0xedf2,	// (0x000471c3) navi_pane_mp_g3

0x0002,

0xf340,	// (0x00047711) navi_pane_mp_g_ParamLimits

0xf340,	// (0x00047711) navi_pane_mp_g

0xedfe,	// (0x000471cf) navi_pane_mp_t1

0xee0c,	// (0x000471dd) navi_pane_mp_t2

0x0002,

0xf347,	// (0x00047718) navi_pane_mp_t

0xee77,	// (0x00047248) navi_pane_vt_g1

0xedfe,	// (0x000471cf) navi_pane_vt_t1

0xee7f,	// (0x00047250) navi_slider_pane

0xe42f,	// (0x00046800) zooming_pane

0xee8f,	// (0x00047260) navi_slider_pane_g1

0x635b,	// (0x0003e72c) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0004771f) navi_slider_pane_g

0xeeb3,	// (0x00047284) aid_levels_zoom

0xeebb,	// (0x0004728c) zooming_pane_g1

0xeec3,	// (0x00047294) zooming_pane_g2

0xeec3,	// (0x00047294) zooming_pane_g3

0x0002,

0xf35d,	// (0x0004772e) zooming_pane_g

0xeecb,	// (0x0004729c) level_10_zoom

0xeed4,	// (0x000472a5) level_11_zoom

0xeedd,	// (0x000472ae) level_1_zoom

0xeee6,	// (0x000472b7) level_2_zoom

0xeeef,	// (0x000472c0) level_3_zoom

0xeef8,	// (0x000472c9) level_4_zoom

0xef01,	// (0x000472d2) level_5_zoom

0xef0a,	// (0x000472db) level_6_zoom

0xef13,	// (0x000472e4) level_7_zoom

0xef1c,	// (0x000472ed) level_8_zoom

0xef25,	// (0x000472f6) level_9_zoom

0xef4a,	// (0x0004731b) popup_phob_thumbnail_window_g1

0xef52,	// (0x00047323) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x00047735) popup_phob_thumbnail_window_g

0x6c7f,	// (0x0003f050) level_1_location

0x6c87,	// (0x0003f058) level_2_location

0x6c8f,	// (0x0003f060) level_3_location

0x6c99,	// (0x0003f06a) level_4_location

0xe42f,	// (0x00046800) level_5_location

0x636d,	// (0x0003e73e) mce_icon_pane_g1

0x6375,	// (0x0003e746) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0004773a) mce_icon_pane_g

0x637d,	// (0x0003e74e) main_mup_pane_g1_ParamLimits

0x637d,	// (0x0003e74e) main_mup_pane_g1

0xe200,	// (0x000465d1) main_mup_pane_g2_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g2

0xe200,	// (0x000465d1) main_mup_pane_g3_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g3

0xe200,	// (0x000465d1) main_mup_pane_g4_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g4

0xe200,	// (0x000465d1) main_mup_pane_g5_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g5

0xe200,	// (0x000465d1) main_mup_pane_g6_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g6

0xe200,	// (0x000465d1) main_mup_pane_g7_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g7

0xe200,	// (0x000465d1) main_mup_pane_g8_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g8

0xe200,	// (0x000465d1) main_mup_pane_g9_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g9

0xe200,	// (0x000465d1) main_mup_pane_g10_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g10

0xe200,	// (0x000465d1) main_mup_pane_g11_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g11

0xe1f2,	// (0x000465c3) main_mup_pane_g12_ParamLimits

0xe1f2,	// (0x000465c3) main_mup_pane_g12

0xe200,	// (0x000465d1) main_mup_pane_g13_ParamLimits

0xe200,	// (0x000465d1) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0004773f) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0004773f) main_mup_pane_g

0xe20e,	// (0x000465df) main_mup_pane_t1_ParamLimits

0xe20e,	// (0x000465df) main_mup_pane_t1

0xe20e,	// (0x000465df) main_mup_pane_t2_ParamLimits

0xe20e,	// (0x000465df) main_mup_pane_t2

0xe20e,	// (0x000465df) main_mup_pane_t3_ParamLimits

0xe20e,	// (0x000465df) main_mup_pane_t3

0xef2e,	// (0x000472ff) main_mup_pane_t4_ParamLimits

0xef2e,	// (0x000472ff) main_mup_pane_t4

0xef2e,	// (0x000472ff) main_mup_pane_t5_ParamLimits

0xef2e,	// (0x000472ff) main_mup_pane_t5

0xe46b,	// (0x0004683c) main_mup_pane_t6_ParamLimits

0xe46b,	// (0x0004683c) main_mup_pane_t6

0x0005,

0xf389,	// (0x0004775a) main_mup_pane_t_ParamLimits

0xf389,	// (0x0004775a) main_mup_pane_t

0xe17d,	// (0x0004654e) mup_progress_pane_ParamLimits

0xe17d,	// (0x0004654e) mup_progress_pane

0x13bb,	// (0x0003978c) mup_visualizer_pane_ParamLimits

0x13bb,	// (0x0003978c) mup_visualizer_pane

0x13bb,	// (0x0003978c) mup_volume_pane_ParamLimits

0x13bb,	// (0x0003978c) mup_volume_pane

0xe1f2,	// (0x000465c3) mup_visualizer_pane_g1_ParamLimits

0xe1f2,	// (0x000465c3) mup_visualizer_pane_g1

0xef5a,	// (0x0004732b) mup_visualizer_pane_g2_ParamLimits

0xef5a,	// (0x0004732b) mup_visualizer_pane_g2

0xe1e4,	// (0x000465b5) mup_visualizer_pane_g3_ParamLimits

0xe1e4,	// (0x000465b5) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x00047767) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x00047767) mup_visualizer_pane_g

0xe451,	// (0x00046822) mup_volume_pane_g1

0xe451,	// (0x00046822) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0004776e) mup_volume_pane_g

0xe451,	// (0x00046822) mup_progress_pane_g1

0xe451,	// (0x00046822) mup_progress_pane_g2

0xe451,	// (0x00046822) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x00047773) mup_progress_pane_g

0xdf00,	// (0x000462d1) bg_popup_window_pane_cp05

0xef68,	// (0x00047339) heading_pane_cp02_ParamLimits

0xef68,	// (0x00047339) heading_pane_cp02

0xefb2,	// (0x00047383) list_popup_blid_pane

0xefba,	// (0x0004738b) list_blid_sat_info_pane_ParamLimits

0xefba,	// (0x0004738b) list_blid_sat_info_pane

0xefcd,	// (0x0004739e) list_blid_sat_info_pane_g1

0xefd5,	// (0x000473a6) list_blid_sat_info_pane_t1

0x647a,	// (0x0003e84b) mup_equalizer_pane_ParamLimits

0x647a,	// (0x0003e84b) mup_equalizer_pane

0x649b,	// (0x0003e86c) mup_equalizer_pane_cp1_ParamLimits

0x649b,	// (0x0003e86c) mup_equalizer_pane_cp1

0x64bc,	// (0x0003e88d) mup_equalizer_pane_cp2_ParamLimits

0x64bc,	// (0x0003e88d) mup_equalizer_pane_cp2

0x64dd,	// (0x0003e8ae) mup_equalizer_pane_cp3_ParamLimits

0x64dd,	// (0x0003e8ae) mup_equalizer_pane_cp3

0x64fe,	// (0x0003e8cf) mup_equalizer_pane_cp4_ParamLimits

0x64fe,	// (0x0003e8cf) mup_equalizer_pane_cp4

0x651f,	// (0x0003e8f0) mup_equalizer_pane_cp5

0x6535,	// (0x0003e906) mup_equalizer_pane_cp6

0x654d,	// (0x0003e91e) mup_equalizer_pane_cp7

0x10f1,	// (0x000394c2) bg_popup_call_poc_act_pane_g9

0x10f9,	// (0x000394ca) bg_popup_call_poc_act_pane_g10

0x1101,	// (0x000394d2) bg_popup_call_poc_act_pane_g11

0x000a,

0xe15b,	// (0x0004652c) mup_scale_pane

0xe173,	// (0x00046544) mup_scale_pane_g1

0xefe3,	// (0x000473b4) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0004778f) mup_scale_pane_g

0xf007,	// (0x000473d8) msg_data_pane

0xf00f,	// (0x000473e0) scroll_pane_cp017

0x336f,	// (0x0003b740) bg_list_pane_cp04_ParamLimits

0x336f,	// (0x0003b740) bg_list_pane_cp04

0xf017,	// (0x000473e8) msg_data_pane_g1

0x6577,	// (0x0003e948) msg_data_pane_g2

0x6581,	// (0x0003e952) msg_data_pane_g3

0x6589,	// (0x0003e95a) msg_data_pane_g4

0x6591,	// (0x0003e962) msg_data_pane_g5

0x6599,	// (0x0003e96a) msg_data_pane_g6

0x65a1,	// (0x0003e972) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0004779e) msg_data_pane_g

0x3393,	// (0x0003b764) msg_text_pane_ParamLimits

0x3393,	// (0x0003b764) msg_text_pane

0x65a9,	// (0x0003e97a) qrid_highlight_pane_cp011_ParamLimits

0x65a9,	// (0x0003e97a) qrid_highlight_pane_cp011

0xdf00,	// (0x000462d1) msg_body_pane

0xdf00,	// (0x000462d1) msg_header_pane

0xf028,	// (0x000473f9) input_focus_pane_cp07

0x33ee,	// (0x0003b7bf) msg_header_pane_t1_ParamLimits

0x33ee,	// (0x0003b7bf) msg_header_pane_t1

0x3404,	// (0x0003b7d5) msg_header_pane_t2_ParamLimits

0x3404,	// (0x0003b7d5) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x000477b2) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x000477b2) msg_header_pane_t

0xf03d,	// (0x0004740e) msg_body_pane_g1

0x341b,	// (0x0003b7ec) msg_body_pane_t1_ParamLimits

0x341b,	// (0x0003b7ec) msg_body_pane_t1

0x344c,	// (0x0003b81d) msg_body_pane_t2_ParamLimits

0x344c,	// (0x0003b81d) msg_body_pane_t2

0x345e,	// (0x0003b82f) msg_body_pane_t3_ParamLimits

0x345e,	// (0x0003b82f) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x000477b7) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x000477b7) msg_body_pane_t

0x6615,	// (0x0003e9e6) main_viewer_pane_g1_ParamLimits

0x6615,	// (0x0003e9e6) main_viewer_pane_g1

0x6621,	// (0x0003e9f2) main_viewer_pane_g2_ParamLimits

0x6621,	// (0x0003e9f2) main_viewer_pane_g2

0x662d,	// (0x0003e9fe) main_viewer_pane_g3_ParamLimits

0x662d,	// (0x0003e9fe) main_viewer_pane_g3

0x663e,	// (0x0003ea0f) main_viewer_pane_g4_ParamLimits

0x663e,	// (0x0003ea0f) main_viewer_pane_g4

0x664f,	// (0x0003ea20) main_viewer_pane_g5_ParamLimits

0x664f,	// (0x0003ea20) main_viewer_pane_g5

0x664f,	// (0x0003ea20) main_viewer_pane_g7_ParamLimits

0x664f,	// (0x0003ea20) main_viewer_pane_g7

0x6661,	// (0x0003ea32) main_viewer_pane_g8_ParamLimits

0x6661,	// (0x0003ea32) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x000477c7) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x000477c7) main_viewer_pane_g

0x0019,	// (0x000383ea) viewer_content_pane_ParamLimits

0x0019,	// (0x000383ea) viewer_content_pane

0x6699,	// (0x0003ea6a) main_postcard_pane_g1_ParamLimits

0x6699,	// (0x0003ea6a) main_postcard_pane_g1

0x66a7,	// (0x0003ea78) main_postcard_pane_g2_ParamLimits

0x66a7,	// (0x0003ea78) main_postcard_pane_g2

0x66b5,	// (0x0003ea86) main_postcard_pane_g3_ParamLimits

0x66b5,	// (0x0003ea86) main_postcard_pane_g3

0x0005,

0xf407,	// (0x000477d8) main_postcard_pane_g_ParamLimits

0xf407,	// (0x000477d8) main_postcard_pane_g

0x66c5,	// (0x0003ea96) main_postcard_pane_g4

0x1222,	// (0x000395f3) smil_status_volume_pane_g2

0x66f1,	// (0x0003eac2) postcard_pane_ParamLimits

0x66f1,	// (0x0003eac2) postcard_pane

0x0896,	// (0x00038c67) postcard_pane_g1_ParamLimits

0x0896,	// (0x00038c67) postcard_pane_g1

0x6723,	// (0x0003eaf4) postcard_pane_g2_ParamLimits

0x6723,	// (0x0003eaf4) postcard_pane_g2

0x672f,	// (0x0003eb00) postcard_pane_g3_ParamLimits

0x672f,	// (0x0003eb00) postcard_pane_g3

0x0035,	// (0x00038406) postcard_pane_g4_ParamLimits

0x0035,	// (0x00038406) postcard_pane_g4

0x673b,	// (0x0003eb0c) postcard_pane_g5_ParamLimits

0x673b,	// (0x0003eb0c) postcard_pane_g5

0x6747,	// (0x0003eb18) postcard_pane_g6_ParamLimits

0x6747,	// (0x0003eb18) postcard_pane_g6

0x0027,	// (0x000383f8) postcard_pane_g7_ParamLimits

0x0027,	// (0x000383f8) postcard_pane_g7

0x0006,

0xf414,	// (0x000477e5) postcard_pane_g_ParamLimits

0xf414,	// (0x000477e5) postcard_pane_g

0x6753,	// (0x0003eb24) main_mp2_pane_g1_ParamLimits

0x6753,	// (0x0003eb24) main_mp2_pane_g1

0x675f,	// (0x0003eb30) main_mp2_pane_g2_ParamLimits

0x675f,	// (0x0003eb30) main_mp2_pane_g2

0x676b,	// (0x0003eb3c) main_mp2_pane_g3_ParamLimits

0x676b,	// (0x0003eb3c) main_mp2_pane_g3

0x0002,

0xf423,	// (0x000477f4) main_mp2_pane_g_ParamLimits

0xf423,	// (0x000477f4) main_mp2_pane_g

0x6777,	// (0x0003eb48) main_mp2_pane_t1_ParamLimits

0x6777,	// (0x0003eb48) main_mp2_pane_t1

0x678e,	// (0x0003eb5f) main_mp2_pane_t2_ParamLimits

0x678e,	// (0x0003eb5f) main_mp2_pane_t2

0x67a2,	// (0x0003eb73) main_mp2_pane_t3_ParamLimits

0x67a2,	// (0x0003eb73) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x000477fb) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x000477fb) main_mp2_pane_t

0x0043,	// (0x00038414) pec_content_pane_ParamLimits

0x0043,	// (0x00038414) pec_content_pane

0xe5c6,	// (0x00046997) scroll_pane_cp015

0x0055,	// (0x00038426) pec_attribute_pane_ParamLimits

0x0055,	// (0x00038426) pec_attribute_pane

0x67b4,	// (0x0003eb85) pec_content_pane_g1_ParamLimits

0x67b4,	// (0x0003eb85) pec_content_pane_g1

0x0065,	// (0x00038436) pec_content_pane_t1_ParamLimits

0x0065,	// (0x00038436) pec_content_pane_t1

0x0077,	// (0x00038448) pec_content_pane_t2_ParamLimits

0x0077,	// (0x00038448) pec_content_pane_t2

0x0001,

0xf431,	// (0x00047802) pec_content_pane_t_ParamLimits

0xf431,	// (0x00047802) pec_content_pane_t

0x67c0,	// (0x0003eb91) list_single_graphic_pane_cp01_ParamLimits

0x67c0,	// (0x0003eb91) list_single_graphic_pane_cp01

0xe15b,	// (0x0004652c) bg_popup_sub_pane_cp04

0x0089,	// (0x0003845a) popup_mup_playback_window_g1

0x0095,	// (0x00038466) popup_mup_playback_window_t1

0x00aa,	// (0x0003847b) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x00047807) popup_mup_playback_window_t

0x00e1,	// (0x000384b2) main_image_pane_g1_ParamLimits

0x00e1,	// (0x000384b2) main_image_pane_g1

0x0124,	// (0x000384f5) scroll_pane_cp018_ParamLimits

0x0124,	// (0x000384f5) scroll_pane_cp018

0x013c,	// (0x0003850d) scroll_pane_cp016_ParamLimits

0x013c,	// (0x0003850d) scroll_pane_cp016

0x6859,	// (0x0003ec2a) smil2_image_pane_ParamLimits

0x6859,	// (0x0003ec2a) smil2_image_pane

0x6889,	// (0x0003ec5a) smil2_root_pane_ParamLimits

0x6889,	// (0x0003ec5a) smil2_root_pane

0x68b5,	// (0x0003ec86) smil2_text_pane_ParamLimits

0x68b5,	// (0x0003ec86) smil2_text_pane

0xdf00,	// (0x000462d1) bg_list_pane_cp06

0x0178,	// (0x00038549) grid_radio_pane

0xdf00,	// (0x000462d1) bg_popup_window_pane_cp06

0x0180,	// (0x00038551) main_fmradio_pane_t1

0x1109,	// (0x000394da) heading_pane_cp04

0x018e,	// (0x0003855f) main_fmradio_pane_t2

0x1111,	// (0x000394e2) popup_cale_lunar_info_window_g1

0x019c,	// (0x0003856d) main_fmradio_pane_t3

0x1119,	// (0x000394ea) popup_cale_lunar_info_window_g2

0x01aa,	// (0x0003857b) main_fmradio_pane_t4

0x0001,

0x01b8,	// (0x00038589) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x000478e7) popup_cale_lunar_info_window_g

0xf44b,	// (0x0004781c) main_fmradio_pane_t

0x01c6,	// (0x00038597) wait_bar_pane_cp03

0x01ce,	// (0x0003859f) cell_fmradio_pane_ParamLimits

0x01ce,	// (0x0003859f) cell_fmradio_pane

0x0027,	// (0x000383f8) cell_fmradio_pane_g1_ParamLimits

0x0027,	// (0x000383f8) cell_fmradio_pane_g1

0xdf00,	// (0x000462d1) grid_highlight_pane_cp011

0x01e1,	// (0x000385b2) poc_content_pane_ParamLimits

0x01e1,	// (0x000385b2) poc_content_pane

0x01f3,	// (0x000385c4) scroll_pane_cp019

0x68f5,	// (0x0003ecc6) popup_call_poc_act_window_ParamLimits

0x68f5,	// (0x0003ecc6) popup_call_poc_act_window

0x6902,	// (0x0003ecd3) popup_call_poc_inact_window_ParamLimits

0x6902,	// (0x0003ecd3) popup_call_poc_inact_window

0xf4ed,	// (0x000478be) bg_popup_call_poc_act_pane_g

0x1081,	// (0x00039452) bg_popup_call_poc_inact_pane_g1

0x1089,	// (0x0003945a) bg_popup_call_poc_inact_pane_g2

0x01fb,	// (0x000385cc) popup_call_poc_act_window_g2

0x1091,	// (0x00039462) bg_popup_call_poc_inact_pane_g3

0x1099,	// (0x0003946a) bg_popup_call_poc_inact_pane_g4

0x10a1,	// (0x00039472) bg_popup_call_poc_inact_pane_g5

0x0203,	// (0x000385d4) popup_call_poc_act_window_t1_ParamLimits

0x0203,	// (0x000385d4) popup_call_poc_act_window_t1

0x022b,	// (0x000385fc) popup_call_poc_act_window_t2_ParamLimits

0x022b,	// (0x000385fc) popup_call_poc_act_window_t2

0x0253,	// (0x00038624) popup_call_poc_act_window_t3_ParamLimits

0x0253,	// (0x00038624) popup_call_poc_act_window_t3

0x027b,	// (0x0003864c) popup_call_poc_act_window_t4_ParamLimits

0x027b,	// (0x0003864c) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x00047827) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x00047827) popup_call_poc_act_window_t

0x10a9,	// (0x0003947a) bg_popup_call_poc_inact_pane_g6

0x10b1,	// (0x00039482) bg_popup_call_poc_inact_pane_g7

0x10b9,	// (0x0003948a) bg_popup_call_poc_inact_pane_g8

0x028d,	// (0x0003865e) popup_call_poc_inact_window_g2

0x10c1,	// (0x00039492) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x000478ab) bg_popup_call_poc_inact_pane_g

0x0295,	// (0x00038666) popup_call_poc_inact_window_t1_ParamLimits

0x0295,	// (0x00038666) popup_call_poc_inact_window_t1

0x02aa,	// (0x0003867b) popup_call_poc_inact_window_t2_ParamLimits

0x02aa,	// (0x0003867b) popup_call_poc_inact_window_t2

0x02bf,	// (0x00038690) popup_call_poc_inact_window_t3_ParamLimits

0x02bf,	// (0x00038690) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x00047830) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x00047830) popup_call_poc_inact_window_t

0x11ad,	// (0x0003957e) context_pane_ParamLimits

0x6f7d,	// (0x0003f34e) signal_pane_ParamLimits

0xe42f,	// (0x00046800) main_call2_pane

0x6ef0,	// (0x0003f2c1) popup_phob_thumbnail2_window_ParamLimits

0x6ef0,	// (0x0003f2c1) popup_phob_thumbnail2_window

0x65c3,	// (0x0003e994) aid_hotspot_pointer_arrow_pane

0x65cb,	// (0x0003e99c) aid_hotspot_pointer_hand_pane

0x6c47,	// (0x0003f018) phob_pre_status_pane_g5

0xe1ca,	// (0x0004659b) cams_zoom_pane_ParamLimits

0xe1ca,	// (0x0004659b) image_vga_pane_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g1_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g3_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g5_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g6_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00047556) main_camera_pane_g_ParamLimits

0xef2e,	// (0x000472ff) main_camera_pane_t1_ParamLimits

0xef2e,	// (0x000472ff) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00047567) main_camera_pane_t_ParamLimits

0xe15b,	// (0x0004652c) bg_popup_preview_window_pane_cp01_ParamLimits

0xe15b,	// (0x0004652c) bg_popup_preview_window_pane_cp01

0x02d4,	// (0x000386a5) popup_phob_thumbnail2_window_g1_ParamLimits

0x02d4,	// (0x000386a5) popup_phob_thumbnail2_window_g1

0xdf00,	// (0x000462d1) call2_cli_visual_pane

0x691e,	// (0x0003ecef) popup_call2_audio_conf_window_ParamLimits

0x691e,	// (0x0003ecef) popup_call2_audio_conf_window

0x6933,	// (0x0003ed04) popup_call2_audio_first_window_ParamLimits

0x6933,	// (0x0003ed04) popup_call2_audio_first_window

0x69d1,	// (0x0003eda2) popup_call2_audio_in_window_ParamLimits

0x69d1,	// (0x0003eda2) popup_call2_audio_in_window

0x6a13,	// (0x0003ede4) popup_call2_audio_out_window_ParamLimits

0x6a13,	// (0x0003ede4) popup_call2_audio_out_window

0x6a75,	// (0x0003ee46) popup_call2_audio_second_window_ParamLimits

0x6a75,	// (0x0003ee46) popup_call2_audio_second_window

0x6ad3,	// (0x0003eea4) popup_call2_audio_wait_window_ParamLimits

0x6ad3,	// (0x0003eea4) popup_call2_audio_wait_window

0xdf00,	// (0x000462d1) bg_popup_call2_act_pane_cp03

0xe13d,	// (0x0004650e) list_conf_pane_cp

0x02e0,	// (0x000386b1) popup_call2_audio_conf_window_t1

0xeb78,	// (0x00046f49) list_single_graphic_popup_conf2_pane_ParamLimits

0xeb78,	// (0x00046f49) list_single_graphic_popup_conf2_pane

0xeb8b,	// (0x00046f5c) list_highlight_pane_cp04

0x02ee,	// (0x000386bf) list_single_graphic_popup_conf2_pane_g1

0xeb9c,	// (0x00046f6d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x00047837) list_single_graphic_popup_conf2_pane_g

0x02f8,	// (0x000386c9) list_single_graphic_popup_conf2_pane_t1

0x0306,	// (0x000386d7) bg_popup_call2_act_pane_cp01_ParamLimits

0x0306,	// (0x000386d7) bg_popup_call2_act_pane_cp01

0x0390,	// (0x00038761) call_type_pane_cp05_ParamLimits

0x0390,	// (0x00038761) call_type_pane_cp05

0x03e4,	// (0x000387b5) popup_call2_audio_second_window_g1_ParamLimits

0x03e4,	// (0x000387b5) popup_call2_audio_second_window_g1

0x0438,	// (0x00038809) popup_call2_audio_second_window_g2_ParamLimits

0x0438,	// (0x00038809) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0004783c) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0004783c) popup_call2_audio_second_window_g

0x049d,	// (0x0003886e) popup_call2_audio_second_window_t1_ParamLimits

0x049d,	// (0x0003886e) popup_call2_audio_second_window_t1

0x0558,	// (0x00038929) popup_call2_audio_second_window_t2_ParamLimits

0x0558,	// (0x00038929) popup_call2_audio_second_window_t2

0x05ab,	// (0x0003897c) popup_call2_audio_second_window_t3_ParamLimits

0x05ab,	// (0x0003897c) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x00047843) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x00047843) popup_call2_audio_second_window_t

0xdf00,	// (0x000462d1) bg_popup_call2_in_pane_cp02

0xdf0a,	// (0x000462db) call_type_pane_cp04

0x6b12,	// (0x0003eee3) popup_call2_audio_wait_window_g1

0x6b1a,	// (0x0003eeeb) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0004784c) popup_call2_audio_wait_window_g

0xdf22,	// (0x000462f3) popup_call2_audio_wait_window_t3

0x069e,	// (0x00038a6f) bg_popup_call2_act_pane_ParamLimits

0x069e,	// (0x00038a6f) bg_popup_call2_act_pane

0x075e,	// (0x00038b2f) call_type_pane_cp03_ParamLimits

0x075e,	// (0x00038b2f) call_type_pane_cp03

0x07c2,	// (0x00038b93) popup_call2_audio_first_window_g1_ParamLimits

0x07c2,	// (0x00038b93) popup_call2_audio_first_window_g1

0x0832,	// (0x00038c03) popup_call2_audio_first_window_g2_ParamLimits

0x0832,	// (0x00038c03) popup_call2_audio_first_window_g2

0x0896,	// (0x00038c67) popup_call2_audio_first_window_g3_ParamLimits

0x0896,	// (0x00038c67) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x00047851) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x00047851) popup_call2_audio_first_window_g

0x091e,	// (0x00038cef) popup_call2_audio_first_window_t1_ParamLimits

0x091e,	// (0x00038cef) popup_call2_audio_first_window_t1

0x0a21,	// (0x00038df2) popup_call2_audio_first_window_t4_ParamLimits

0x0a21,	// (0x00038df2) popup_call2_audio_first_window_t4

0x0b04,	// (0x00038ed5) popup_call2_audio_first_window_t5_ParamLimits

0x0b04,	// (0x00038ed5) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0004785c) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0004785c) popup_call2_audio_first_window_t

0xe153,	// (0x00046524) bg_popup_call2_act_pane_g1

0x1121,	// (0x000394f2) popup_cale_lunar_info_window_t1

0x112f,	// (0x00039500) popup_cale_lunar_info_window_t2

0x113d,	// (0x0003950e) popup_cale_lunar_info_window_t3

0xdf00,	// (0x000462d1) bg_popup_call2_bubble_pane

0x0c05,	// (0x00038fd6) bg_popup_call2_in_pane_cp01_ParamLimits

0x0c05,	// (0x00038fd6) bg_popup_call2_in_pane_cp01

0xd6c4,	// (0x00045a95) call_type_pane_cp02

0x6b22,	// (0x0003eef3) popup_call2_audio_out_window_g1_ParamLimits

0x6b22,	// (0x0003eef3) popup_call2_audio_out_window_g1

0x0c4d,	// (0x0003901e) popup_call2_audio_out_window_g2_ParamLimits

0x0c4d,	// (0x0003901e) popup_call2_audio_out_window_g2

0x6b4e,	// (0x0003ef1f) popup_call2_audio_out_window_g3_ParamLimits

0x6b4e,	// (0x0003ef1f) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x00047865) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x00047865) popup_call2_audio_out_window_g

0x0c84,	// (0x00039055) popup_call2_audio_out_window_t1_ParamLimits

0x0c84,	// (0x00039055) popup_call2_audio_out_window_t1

0x0ce3,	// (0x000390b4) popup_call2_audio_out_window_t2_ParamLimits

0x0ce3,	// (0x000390b4) popup_call2_audio_out_window_t2

0x0d37,	// (0x00039108) popup_call2_audio_out_window_t3_ParamLimits

0x0d37,	// (0x00039108) popup_call2_audio_out_window_t3

0x0d4d,	// (0x0003911e) popup_call2_audio_out_window_t4_ParamLimits

0x0d4d,	// (0x0003911e) popup_call2_audio_out_window_t4

0x0d63,	// (0x00039134) popup_call2_audio_out_window_t5_ParamLimits

0x0d63,	// (0x00039134) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0004786e) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0004786e) popup_call2_audio_out_window_t

0x0dc7,	// (0x00039198) bg_popup_call2_in_pane_ParamLimits

0x0dc7,	// (0x00039198) bg_popup_call2_in_pane

0x0e23,	// (0x000391f4) popup_call2_audio_in_window_g1_ParamLimits

0x0e23,	// (0x000391f4) popup_call2_audio_in_window_g1

0x0e5b,	// (0x0003922c) popup_call2_audio_in_window_g2_ParamLimits

0x0e5b,	// (0x0003922c) popup_call2_audio_in_window_g2

0x0e93,	// (0x00039264) popup_call2_audio_in_window_g3_ParamLimits

0x0e93,	// (0x00039264) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0004787b) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0004787b) popup_call2_audio_in_window_g

0x0eeb,	// (0x000392bc) popup_call2_audio_in_window_t1_ParamLimits

0x0eeb,	// (0x000392bc) popup_call2_audio_in_window_t1

0x0f6b,	// (0x0003933c) popup_call2_audio_in_window_t2_ParamLimits

0x0f6b,	// (0x0003933c) popup_call2_audio_in_window_t2

0x0feb,	// (0x000393bc) popup_call2_audio_in_window_t3_ParamLimits

0x0feb,	// (0x000393bc) popup_call2_audio_in_window_t3

0x1005,	// (0x000393d6) popup_call2_audio_in_window_t4_ParamLimits

0x1005,	// (0x000393d6) popup_call2_audio_in_window_t4

0x1017,	// (0x000393e8) popup_call2_audio_in_window_t5_ParamLimits

0x1017,	// (0x000393e8) popup_call2_audio_in_window_t5

0x102c,	// (0x000393fd) popup_call2_audio_in_window_t6_ParamLimits

0x102c,	// (0x000393fd) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x00047884) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x00047884) popup_call2_audio_in_window_t

0xe153,	// (0x00046524) bg_popup_call2_in_pane_g1

0x114b,	// (0x0003951c) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x000478ec) popup_cale_lunar_info_window_t

0xe15b,	// (0x0004652c) bg_popup_call2_rect_pane_ParamLimits

0xe15b,	// (0x0004652c) bg_popup_call2_rect_pane

0xdf00,	// (0x000462d1) call2_cli_visual_graphic_pane

0xdf00,	// (0x000462d1) call2_cli_visual_text_pane

0x6fb9,	// (0x0003f38a) smil_status_volume_pane_g3

0x0002,

0xe173,	// (0x00046544) call2_cli_visual_graphic_pane_g1

0xe173,	// (0x00046544) call2_cli_visual_graphic_pane_g2

0xe173,	// (0x00046544) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x00047891) call2_cli_visual_graphic_pane_g

0x1041,	// (0x00039412) bg_popup_call2_rect_pane_g1

0xe336,	// (0x00046707) bg_popup_call2_rect_pane_g2

0x1049,	// (0x0003941a) bg_popup_call2_rect_pane_g3

0x1051,	// (0x00039422) bg_popup_call2_rect_pane_g4

0x1059,	// (0x0003942a) bg_popup_call2_rect_pane_g5

0x1061,	// (0x00039432) bg_popup_call2_rect_pane_g6

0x1069,	// (0x0003943a) bg_popup_call2_rect_pane_g7

0x1071,	// (0x00039442) bg_popup_call2_rect_pane_g8

0x1079,	// (0x0003944a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x00047898) bg_popup_call2_rect_pane_g

0x1081,	// (0x00039452) bg_popup_call2_bubble_pane_g1

0x1089,	// (0x0003945a) bg_popup_call2_bubble_pane_g2

0x1091,	// (0x00039462) bg_popup_call2_bubble_pane_g3

0x1099,	// (0x0003946a) bg_popup_call2_bubble_pane_g4

0x10a1,	// (0x00039472) bg_popup_call2_bubble_pane_g5

0x10a9,	// (0x0003947a) bg_popup_call2_bubble_pane_g6

0x10b1,	// (0x00039482) bg_popup_call2_bubble_pane_g7

0x10b9,	// (0x0003948a) bg_popup_call2_bubble_pane_g8

0x10c1,	// (0x00039492) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x000478ab) bg_popup_call2_bubble_pane_g

0x47a5,	// (0x0003cb76) aid_cale_week_size_cell_pane

0xe15b,	// (0x0004652c) aid_cams_cif_uncrop_pane_ParamLimits

0xe15b,	// (0x0004652c) aid_cams_cif_uncrop_pane

0x4d99,	// (0x0003d16a) aid_cams_size_cell_ParamLimits

0x4d99,	// (0x0003d16a) aid_cams_size_cell

0x4da5,	// (0x0003d176) grid_cams_pane_ParamLimits

0x4db3,	// (0x0003d184) linegrid_cams_pane_ParamLimits

0x4e8a,	// (0x0003d25b) call_video_pane_t1

0x4eab,	// (0x0003d27c) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000475b3) call_video_pane_t

0x53f2,	// (0x0003d7c3) aid_cale_month_size_cell_pane_ParamLimits

0x53f2,	// (0x0003d7c3) aid_cale_month_size_cell_pane

0xf55f,	// (0x00047930) smil_status_volume_pane_g

0x6fc6,	// (0x0003f397) volume_smil_pane_ParamLimits

0x4105,	// (0x0003c4d6) aid_popup2_width_pane

0x46a4,	// (0x0003ca75) cell_qdial_pane_g4_ParamLimits

0x46a4,	// (0x0003ca75) cell_qdial_pane_g4

0x62a2,	// (0x0003e673) aid_blid_cardinal_pane_ParamLimits

0x62b2,	// (0x0003e683) aid_blid_destination_pane_ParamLimits

0x62b2,	// (0x0003e683) aid_blid_destination_pane

0xe15b,	// (0x0004652c) bg_popup_call_poc_act_pane_ParamLimits

0xe15b,	// (0x0004652c) bg_popup_call_poc_act_pane

0xe15b,	// (0x0004652c) bg_popup_call_poc_inact_pane_ParamLimits

0xe15b,	// (0x0004652c) bg_popup_call_poc_inact_pane

0x10c9,	// (0x0003949a) bg_popup_call_poc_act_pane_g1

0x10d1,	// (0x000394a2) bg_popup_call_poc_act_pane_g2

0x10d9,	// (0x000394aa) bg_popup_call_poc_act_pane_g3

0x1099,	// (0x0003946a) bg_popup_call_poc_act_pane_g4

0x10a1,	// (0x00039472) bg_popup_call_poc_act_pane_g5

0x10e1,	// (0x000394b2) bg_popup_call_poc_act_pane_g6

0x10b1,	// (0x00039482) bg_popup_call_poc_act_pane_g7

0x10e9,	// (0x000394ba) bg_popup_call_poc_act_pane_g8

0xdf00,	// (0x000462d1) main_usb_pane

0x6e1f,	// (0x0003f1f0) popup_cale_lunar_info_window

0x51d4,	// (0x0003d5a5) im_reading_pane_t1_ParamLimits

0xe51e,	// (0x000468ef) list_im_pane_ParamLimits

0xe52f,	// (0x00046900) scroll_pane_cp07_ParamLimits

0xdf00,	// (0x000462d1) grid_highlight_pane_cp012

0xe15b,	// (0x0004652c) mup_scale_pane_ParamLimits

0x0896,	// (0x00038c67) main_usb_pane_g1_ParamLimits

0x0896,	// (0x00038c67) main_usb_pane_g1

0x6baf,	// (0x0003ef80) main_usb_pane_g2_ParamLimits

0x6baf,	// (0x0003ef80) main_usb_pane_g2

0x0001,

0xf504,	// (0x000478d5) main_usb_pane_g_ParamLimits

0xf504,	// (0x000478d5) main_usb_pane_g

0x6bbb,	// (0x0003ef8c) main_usb_pane_t1_ParamLimits

0x6bbb,	// (0x0003ef8c) main_usb_pane_t1

0x6bcd,	// (0x0003ef9e) main_usb_pane_t2_ParamLimits

0x6bcd,	// (0x0003ef9e) main_usb_pane_t2

0x6bdf,	// (0x0003efb0) main_usb_pane_t3_ParamLimits

0x6bdf,	// (0x0003efb0) main_usb_pane_t3

0x6bf1,	// (0x0003efc2) main_usb_pane_t4_ParamLimits

0x6bf1,	// (0x0003efc2) main_usb_pane_t4

0x6c03,	// (0x0003efd4) main_usb_pane_t5_ParamLimits

0x6c03,	// (0x0003efd4) main_usb_pane_t5

0x6c15,	// (0x0003efe6) main_usb_pane_t6_ParamLimits

0x6c15,	// (0x0003efe6) main_usb_pane_t6

0x0005,

0xf509,	// (0x000478da) main_usb_pane_t_ParamLimits

0x6248,	// (0x0003e619) aid_text_placing

0x6254,	// (0x0003e625) main_location2_pane_t1_ParamLimits

0x6268,	// (0x0003e639) main_location2_pane_t2_ParamLimits

0x627c,	// (0x0003e64d) main_location2_pane_t3_ParamLimits

0x6290,	// (0x0003e661) main_location2_pane_t4_ParamLimits

0x6290,	// (0x0003e661) main_location2_pane_t4

0xf323,	// (0x000476f4) main_location2_pane_t_ParamLimits

0xe197,	// (0x00046568) find_pinb_pane_g2_ParamLimits

0xe197,	// (0x00046568) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0004746b) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0004746b) find_pinb_pane_g

0xe1a3,	// (0x00046574) find_pinb_pane_t1_ParamLimits

0xe1b5,	// (0x00046586) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00047470) find_pinb_pane_t_ParamLimits

0xdf00,	// (0x000462d1) main_call3_pane

0x5995,	// (0x0003dd66) cale_month_day_heading_pane_t1_ParamLimits

0x5a1b,	// (0x0003ddec) cale_month_day_heading_pane_t2_ParamLimits

0x5a94,	// (0x0003de65) cale_month_day_heading_pane_t3_ParamLimits

0x5b0d,	// (0x0003dede) cale_month_day_heading_pane_t4_ParamLimits

0x5b86,	// (0x0003df57) cale_month_day_heading_pane_t5_ParamLimits

0x5bff,	// (0x0003dfd0) cale_month_day_heading_pane_t6_ParamLimits

0x5c78,	// (0x0003e049) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000475eb) cale_month_day_heading_pane_t_ParamLimits

0xe779,	// (0x00046b4a) smil_status_volume_pane

0x670b,	// (0x0003eadc) postcard_address_pane_ParamLimits

0x670b,	// (0x0003eadc) postcard_address_pane

0x6717,	// (0x0003eae8) postcard_message_pane_ParamLimits

0x6717,	// (0x0003eae8) postcard_message_pane

0x6b7a,	// (0x0003ef4b) call2_cli_visual_pane_t1_ParamLimits

0x6b7a,	// (0x0003ef4b) call2_cli_visual_pane_t1

0x1260,	// (0x00039631) postcard_message_pane_t1_ParamLimits

0x1260,	// (0x00039631) postcard_message_pane_t1

0x1248,	// (0x00039619) postcard_address_pane_t1_ParamLimits

0x1248,	// (0x00039619) postcard_address_pane_t1

0x70f7,	// (0x0003f4c8) popup_call3_audio_in_window_ParamLimits

0x70f7,	// (0x0003f4c8) popup_call3_audio_in_window

0x6fdb,	// (0x0003f3ac) bg_popup_call3_in_pane_ParamLimits

0x6fdb,	// (0x0003f3ac) bg_popup_call3_in_pane

0x703d,	// (0x0003f40e) popup_call3_audio_in_window_g1_ParamLimits

0x703d,	// (0x0003f40e) popup_call3_audio_in_window_g1

0x7055,	// (0x0003f426) popup_call3_audio_in_window_g2_ParamLimits

0x7055,	// (0x0003f426) popup_call3_audio_in_window_g2

0x706d,	// (0x0003f43e) popup_call3_audio_in_window_g3_ParamLimits

0x706d,	// (0x0003f43e) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x00047937) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x00047937) popup_call3_audio_in_window_g

0x7095,	// (0x0003f466) popup_call3_audio_in_window_t1_ParamLimits

0x7095,	// (0x0003f466) popup_call3_audio_in_window_t1

0x70bd,	// (0x0003f48e) popup_call3_audio_in_window_t2_ParamLimits

0x70bd,	// (0x0003f48e) popup_call3_audio_in_window_t2

0x70e5,	// (0x0003f4b6) popup_call3_audio_in_window_t3_ParamLimits

0x70e5,	// (0x0003f4b6) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x00047940) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x00047940) popup_call3_audio_in_window_t

0xe42f,	// (0x00046800) bg_popup_call3_rect_pane

0x1041,	// (0x00039412) bg_popup_call3_rect_pane_g1

0xe336,	// (0x00046707) bg_popup_call3_rect_pane_g2

0x1049,	// (0x0003941a) bg_popup_call3_rect_pane_g3

0x1051,	// (0x00039422) bg_popup_call3_rect_pane_g4

0x1059,	// (0x0003942a) bg_popup_call3_rect_pane_g5

0x1061,	// (0x00039432) bg_popup_call3_rect_pane_g6

0x1069,	// (0x0003943a) bg_popup_call3_rect_pane_g7

0xd5cb,	// (0x0004599c) mup_visualizer_osc_pane

0xd5cb,	// (0x0004599c) mup_visualizer_spec_pane

0x6ffb,	// (0x0003f3cc) call3_video_qcif_pane_ParamLimits

0x6ffb,	// (0x0003f3cc) call3_video_qcif_pane

0x700d,	// (0x0003f3de) call3_video_qcif_uncrop_pane_ParamLimits

0x700d,	// (0x0003f3de) call3_video_qcif_uncrop_pane

0x701b,	// (0x0003f3ec) call3_video_subqcif_pane_ParamLimits

0x701b,	// (0x0003f3ec) call3_video_subqcif_pane

0x702d,	// (0x0003f3fe) call3_video_subqcif_uncrop_pane_ParamLimits

0x702d,	// (0x0003f3fe) call3_video_subqcif_uncrop_pane

0x7085,	// (0x0003f456) popup_call3_audio_in_window_g4_ParamLimits

0x7085,	// (0x0003f456) popup_call3_audio_in_window_g4

0xd5cb,	// (0x0004599c) mup_spec_half_pane

0xd5cb,	// (0x0004599c) mup_spec_half_pane_cp

0xd5cb,	// (0x0004599c) mup_osc_middle_pane

0xe451,	// (0x00046822) mup_visualizer_osc_pane_g1

0x11fb,	// (0x000395cc) mup_spec_bar_pane_ParamLimits

0x11fb,	// (0x000395cc) mup_spec_bar_pane

0xe451,	// (0x00046822) mup_spec_bar_pane_g1

0xe451,	// (0x00046822) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0004776e) mup_spec_bar_pane_g

0x47a5,	// (0x0003cb76) aid_cale_week_size_cell_pane_ParamLimits

0x47ba,	// (0x0003cb8b) bg_cale_heading_pane_ParamLimits

0xe373,	// (0x00046744) bg_cale_pane_cp01_ParamLimits

0x47da,	// (0x0003cbab) cale_week_corner_pane_ParamLimits

0x47f4,	// (0x0003cbc5) cale_week_day_heading_pane_ParamLimits

0x4814,	// (0x0003cbe5) cale_week_scroll_pane_g1_ParamLimits

0x482f,	// (0x0003cc00) cale_week_scroll_pane_g2_ParamLimits

0x4842,	// (0x0003cc13) cale_week_scroll_pane_g3_ParamLimits

0x4855,	// (0x0003cc26) cale_week_scroll_pane_g4_ParamLimits

0x4868,	// (0x0003cc39) cale_week_scroll_pane_g5_ParamLimits

0x487b,	// (0x0003cc4c) cale_week_scroll_pane_g6_ParamLimits

0x488e,	// (0x0003cc5f) cale_week_scroll_pane_g7_ParamLimits

0x48a3,	// (0x0003cc74) cale_week_scroll_pane_g8_ParamLimits

0x48b8,	// (0x0003cc89) cale_week_scroll_pane_g9_ParamLimits

0x48cb,	// (0x0003cc9c) cale_week_scroll_pane_g10_ParamLimits

0x48de,	// (0x0003ccaf) cale_week_scroll_pane_g11_ParamLimits

0x48f1,	// (0x0003ccc2) cale_week_scroll_pane_g12_ParamLimits

0x4908,	// (0x0003ccd9) cale_week_scroll_pane_g13_ParamLimits

0x4923,	// (0x0003ccf4) cale_week_scroll_pane_g14_ParamLimits

0x493e,	// (0x0003cd0f) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000474fc) cale_week_scroll_pane_g_ParamLimits

0x496e,	// (0x0003cd3f) cale_week_time_pane_ParamLimits

0x4983,	// (0x0003cd54) grid_cale_week_pane_ParamLimits

0xe3ae,	// (0x0004677f) listscroll_cale_week_pane_t1

0xe3c0,	// (0x00046791) scroll_pane_cp08_ParamLimits

0x5466,	// (0x0003d837) cale_month_corner_pane_ParamLimits

0xe74f,	// (0x00046b20) cale_month_pane_t1

0x5918,	// (0x0003dce9) cale_month_week_pane_ParamLimits

0x0896,	// (0x00038c67) popup_call_status_window_g1_ParamLimits

0x609f,	// (0x0003e470) popup_call_status_window_g2_ParamLimits

0x60ab,	// (0x0003e47c) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0004767b) popup_call_status_window_g_ParamLimits

0xeb17,	// (0x00046ee8) aid_call2_pane

0x33e2,	// (0x0003b7b3) msg_header_pane_g1

0x670b,	// (0x0003eadc) postcard_address2_pane_ParamLimits

0x670b,	// (0x0003eadc) postcard_address2_pane

0x6717,	// (0x0003eae8) postcard_message2_pane_ParamLimits

0x6717,	// (0x0003eae8) postcard_message2_pane

0x6f8b,	// (0x0003f35c) message2_row_pane_ParamLimits

0x6f8b,	// (0x0003f35c) message2_row_pane

0x6fa6,	// (0x0003f377) address2_row_pane_ParamLimits

0x6fa6,	// (0x0003f377) address2_row_pane

0x11c8,	// (0x00039599) postcard_message2_row_pane_g1

0x11d0,	// (0x000395a1) postcard_message2_row_pane_t1

0x11c8,	// (0x00039599) address2_row_pane_g1

0x11d0,	// (0x000395a1) address2_row_pane_t1

0x4c09,	// (0x0003cfda) aid_size_cell_vorec

0xdf00,	// (0x000462d1) main_rss_pane

0x11de,	// (0x000395af) rss_list_single_pane_ParamLimits

0x11de,	// (0x000395af) rss_list_single_pane

0x11ec,	// (0x000395bd) rss_list_single_pane_t1

0x11ec,	// (0x000395bd) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0004792b) rss_list_single_pane_t

0xdf00,	// (0x000462d1) main_camera2_pane

0xdf00,	// (0x000462d1) main_video2_pane

0xe1ca,	// (0x0004659b) cams_zoom_pane_cp2_ParamLimits

0xe1ca,	// (0x0004659b) cams_zoom_pane_cp2

0xe1ca,	// (0x0004659b) image2_vga_pane_ParamLimits

0xe1ca,	// (0x0004659b) image2_vga_pane

0xe1f2,	// (0x000465c3) main_camera2_pane_g1_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g1

0xe1f2,	// (0x000465c3) main_camera2_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g2

0xe1f2,	// (0x000465c3) main_camera2_pane_g3_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g3

0xe1f2,	// (0x000465c3) main_camera2_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g4

0xe1f2,	// (0x000465c3) main_camera2_pane_g5_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g5

0xe1f2,	// (0x000465c3) main_camera2_pane_g6_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g6

0xe1f2,	// (0x000465c3) main_camera2_pane_g7_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g7

0xe1f2,	// (0x000465c3) main_camera2_pane_g8_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g8

0x0008,

0xf576,	// (0x00047947) main_camera2_pane_g_ParamLimits

0xf576,	// (0x00047947) main_camera2_pane_g

0xef2e,	// (0x000472ff) main_camera2_pane_t1_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t1

0xef2e,	// (0x000472ff) main_camera2_pane_t2_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t2

0xef2e,	// (0x000472ff) main_camera2_pane_t3_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t3

0xef2e,	// (0x000472ff) main_camera2_pane_t4_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0004795a) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0004795a) main_camera2_pane_t

0xef82,	// (0x00047353) cams_zoom_pane_cp4_ParamLimits

0xef82,	// (0x00047353) cams_zoom_pane_cp4

0xe17d,	// (0x0004654e) image2_cif_pane_ParamLimits

0xe17d,	// (0x0004654e) image2_cif_pane

0xe1ca,	// (0x0004659b) image2_subqcif_pane_ParamLimits

0xe1ca,	// (0x0004659b) image2_subqcif_pane

0xef90,	// (0x00047361) main_video2_pane_g1_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g1

0xef90,	// (0x00047361) main_video2_pane_g2_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g2

0xef90,	// (0x00047361) main_video2_pane_g3_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g3

0xef90,	// (0x00047361) main_video2_pane_g4_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g4

0xef90,	// (0x00047361) main_video2_pane_g5_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g5

0xef90,	// (0x00047361) main_video2_pane_g6_ParamLimits

0xef90,	// (0x00047361) main_video2_pane_g6

0x0005,

0xf598,	// (0x00047969) main_video2_pane_g_ParamLimits

0xf598,	// (0x00047969) main_video2_pane_g

0xef9e,	// (0x0004736f) main_video2_pane_t1_ParamLimits

0xef9e,	// (0x0004736f) main_video2_pane_t1

0xef9e,	// (0x0004736f) main_video2_pane_t2_ParamLimits

0xef9e,	// (0x0004736f) main_video2_pane_t2

0xef9e,	// (0x0004736f) main_video2_pane_t3_ParamLimits

0xef9e,	// (0x0004736f) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x00047976) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x00047976) main_video2_pane_t

0x6cab,	// (0x0003f07c) call_muted_g2

0x0001,

0xf54c,	// (0x0004791d) call_muted_g

0xdf00,	// (0x000462d1) main_mup2_pane

0xe200,	// (0x000465d1) main_mup2_pane_g1_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g1

0xe200,	// (0x000465d1) main_mup2_pane_g2_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g2

0xe451,	// (0x00046822) main_mup_pane_g13_cp1

0xd5cb,	// (0x0004599c) mup_volume_pane_cp1

0xe200,	// (0x000465d1) main_mup2_pane_g4_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g4

0xe200,	// (0x000465d1) main_mup2_pane_g5_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g5

0xe200,	// (0x000465d1) main_mup2_pane_g6_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g6

0xe200,	// (0x000465d1) main_mup2_pane_g7_ParamLimits

0xe200,	// (0x000465d1) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0004797d) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0004797d) main_mup2_pane_g

0xe20e,	// (0x000465df) main_mup2_pane_t1_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t1

0xe20e,	// (0x000465df) main_mup2_pane_t2_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t2

0xe20e,	// (0x000465df) main_mup2_pane_t3_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t3

0xe20e,	// (0x000465df) main_mup2_pane_t4_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t4

0xe20e,	// (0x000465df) main_mup2_pane_t5_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t5

0xe20e,	// (0x000465df) main_mup2_pane_t6_ParamLimits

0xe20e,	// (0x000465df) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0004798c) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0004798c) main_mup2_pane_t

0x13bb,	// (0x0003978c) mup2_visualizer_pane_ParamLimits

0x13bb,	// (0x0003978c) mup2_visualizer_pane

0x13bb,	// (0x0003978c) mup_progress_pane_cp_ParamLimits

0x13bb,	// (0x0003978c) mup_progress_pane_cp

0x127c,	// (0x0003964d) mup_volume_pane_cp_ParamLimits

0x127c,	// (0x0003964d) mup_volume_pane_cp

0xe1e4,	// (0x000465b5) mup2_visualizer_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) mup2_visualizer_pane_g1

0xe1f2,	// (0x000465c3) mup2_visualizer_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) mup2_visualizer_pane_g2

0xe1f2,	// (0x000465c3) mup2_visualizer_pane_g3_ParamLimits

0xe1f2,	// (0x000465c3) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00047475) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00047475) mup2_visualizer_pane_g

0x0170,	// (0x00038541) aid_size_cell_fmradio

0x6dc1,	// (0x0003f192) aid_height_parent_landcape

0xe5ad,	// (0x0004697e) wml_content_pane_cp

0xe5b5,	// (0x00046986) wml_tabs_pane

0xe5be,	// (0x0004698f) popup_wml_miniature_window

0xe5c6,	// (0x00046997) scroll_pane_cp021

0xe5da,	// (0x000469ab) wml_content_pane_comp8

0xdf00,	// (0x000462d1) bg_popup_sub_pane_cp05

0x1292,	// (0x00039663) popup_wml_miniature_window_g1

0x129a,	// (0x0003966b) wml_miniature_view_pane

0x7128,	// (0x0003f4f9) aid_size_wml_view

0x7130,	// (0x0003f501) wml_miniature_view_pane_g1

0x7139,	// (0x0003f50a) wml_miniature_view_pane_g2

0x7142,	// (0x0003f513) wml_miniature_view_pane_g3

0x714a,	// (0x0003f51b) wml_miniature_view_pane_g4

0x7152,	// (0x0003f523) wml_miniature_view_pane_g5

0x715a,	// (0x0003f52b) wml_miniature_view_pane_g6

0x7162,	// (0x0003f533) wml_miniature_view_pane_g7

0x716a,	// (0x0003f53b) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x00047999) wml_miniature_view_pane_g

0x12a2,	// (0x00039673) background_graphic_ParamLimits

0x12a2,	// (0x00039673) background_graphic

0x12ae,	// (0x0003967f) wml_tabs_2_pane

0x12b7,	// (0x00039688) wml_tabs_3_pane_ParamLimits

0x12b7,	// (0x00039688) wml_tabs_3_pane

0x12c9,	// (0x0003969a) wml_tabs_4_pane_ParamLimits

0x12c9,	// (0x0003969a) wml_tabs_4_pane

0x12df,	// (0x000396b0) wml_tabs_5_pane_ParamLimits

0x12df,	// (0x000396b0) wml_tabs_5_pane

0x12f9,	// (0x000396ca) wml_tabs_pane_g2_ParamLimits

0x12f9,	// (0x000396ca) wml_tabs_pane_g2

0x130e,	// (0x000396df) wml_tabs_pane_g3_ParamLimits

0x130e,	// (0x000396df) wml_tabs_pane_g3

0x1323,	// (0x000396f4) wml_tabs_2_active_pane_ParamLimits

0x1323,	// (0x000396f4) wml_tabs_2_active_pane

0x1323,	// (0x000396f4) wml_tabs_2_passive_pane_ParamLimits

0x1323,	// (0x000396f4) wml_tabs_2_passive_pane

0x7172,	// (0x0003f543) wml_tabs_3_active_pane_cp_ParamLimits

0x7172,	// (0x0003f543) wml_tabs_3_active_pane_cp

0x7183,	// (0x0003f554) wml_tabs_3_passive_pane_ParamLimits

0x7183,	// (0x0003f554) wml_tabs_3_passive_pane

0x7194,	// (0x0003f565) wml_tabs_3_passive_pane_cp_ParamLimits

0x7194,	// (0x0003f565) wml_tabs_3_passive_pane_cp

0x71a5,	// (0x0003f576) tabs_4_active_pane

0x71ad,	// (0x0003f57e) tabs_4_passive_pane

0x71b5,	// (0x0003f586) tabs_4_passive_pane_cp

0x71bd,	// (0x0003f58e) tabs_4_passive_pane_cp2

0x6ba7,	// (0x0003ef78) aid_height_text

0x13bb,	// (0x0003978c) mup_volume_cont_pane_ParamLimits

0x13bb,	// (0x0003978c) mup_volume_cont_pane

0xd5cb,	// (0x0004599c) aid_size_cell_pinb

0xd5cb,	// (0x0004599c) aid_size_list_pinb

0x13bb,	// (0x0003978c) mup2_volume_cont_pane_ParamLimits

0x13bb,	// (0x0003978c) mup2_volume_cont_pane

0x71c5,	// (0x0003f596) mup2_volume_cont_pane_g1_ParamLimits

0x71c5,	// (0x0003f596) mup2_volume_cont_pane_g1

0x4111,	// (0x0003c4e2) aid_size_cell_touch_ParamLimits

0x4111,	// (0x0003c4e2) aid_size_cell_touch

0x431c,	// (0x0003c6ed) touch_pane_ParamLimits

0x431c,	// (0x0003c6ed) touch_pane

0xd5cb,	// (0x0004599c) main_rss2_pane

0x133a,	// (0x0003970b) listscroll_rss2_pane

0x1343,	// (0x00039714) rss2_navigation_pane

0x134b,	// (0x0003971c) list_rss2_pane

0xec4e,	// (0x0004701f) scroll_pane_cp22

0x1353,	// (0x00039724) rss2_navigation_pane_g1

0x135c,	// (0x0003972d) rss2_navigation_pane_g2

0x1364,	// (0x00039735) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x000479aa) rss2_navigation_pane_g

0x136c,	// (0x0003973d) rss2_navigation_pane_t1

0x71db,	// (0x0003f5ac) rss2_list_single_pane_ParamLimits

0x71db,	// (0x0003f5ac) rss2_list_single_pane

0x137a,	// (0x0003974b) rss2_list_single_pane_t2

0x1388,	// (0x00039759) rss2_list_single_pane_t3_ParamLimits

0x1388,	// (0x00039759) rss2_list_single_pane_t3

0x13a5,	// (0x00039776) rss2_list_single_pane_t4

0x5f14,	// (0x0003e2e5) smil_status_pane_g1

0xe17d,	// (0x0004654e) main_image2_pane_ParamLimits

0xe17d,	// (0x0004654e) main_image2_pane

0xe1f2,	// (0x000465c3) main_camera2_pane_g9_ParamLimits

0xe1f2,	// (0x000465c3) main_camera2_pane_g9

0xef2e,	// (0x000472ff) main_camera2_pane_t5_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t5

0x7114,	// (0x0003f4e5) main_camera2_pane_t6_ParamLimits

0x7114,	// (0x0003f4e5) main_camera2_pane_t6

0x720c,	// (0x0003f5dd) main_image2_pane_g1_ParamLimits

0x720c,	// (0x0003f5dd) main_image2_pane_g1

0x68df,	// (0x0003ecb0) smil2_video_pane_ParamLimits

0x68df,	// (0x0003ecb0) smil2_video_pane

0x32bd,	// (0x0003b68e) aid_zoom_text_primary_cp

0x42c5,	// (0x0003c696) popup_preview_fixed_window

0xe516,	// (0x000468e7) im_reading_pane_g1

0x7106,	// (0x0003f4d7) cams2_bc_adjust_pane_cp_ParamLimits

0x7106,	// (0x0003f4d7) cams2_bc_adjust_pane_cp

0xe1ca,	// (0x0004659b) cams2_bc_adjust_pane_ParamLimits

0xe1ca,	// (0x0004659b) cams2_bc_adjust_pane

0xe451,	// (0x00046822) cams2_bc_adjust_pane_g1

0xd5cb,	// (0x0004599c) cams2_slider_pane

0xe451,	// (0x00046822) cams2_slider_pane_g1

0xe451,	// (0x00046822) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x000479b1) cams2_slider_pane_g

0x43ea,	// (0x0003c7bb) calc_display_pane_ParamLimits

0x4408,	// (0x0003c7d9) calc_paper_pane_ParamLimits

0x4424,	// (0x0003c7f5) grid_calc_pane_ParamLimits

0x610d,	// (0x0003e4de) popup_clock_digital_window_t1_ParamLimits

0x010d,	// (0x000384de) main_image_pane_t1

0x43d0,	// (0x0003c7a1) aid_size_cell_calc_ParamLimits

0x43d0,	// (0x0003c7a1) aid_size_cell_calc

0x6dfb,	// (0x0003f1cc) popup_blid_sat_info2_window_ParamLimits

0x6dfb,	// (0x0003f1cc) popup_blid_sat_info2_window

0x13b3,	// (0x00039784) aid_size_cell_blid

0x13bb,	// (0x0003978c) bg_popup_window_pane_cp07

0x13de,	// (0x000397af) grid_popup_blid_pane

0x13e8,	// (0x000397b9) heading_pane_cp05_ParamLimits

0x13e8,	// (0x000397b9) heading_pane_cp05

0x14b2,	// (0x00039883) cell_popup_blid_pane_ParamLimits

0x14b2,	// (0x00039883) cell_popup_blid_pane

0x14d6,	// (0x000398a7) cell_popup_blid_pane_g1

0x14de,	// (0x000398af) cell_popup_blid_pane_t1

0x13bb,	// (0x0003978c) mup2_indicator_pane_ParamLimits

0x13bb,	// (0x0003978c) mup2_indicator_pane

0xd5cb,	// (0x0004599c) mup2_visualizer_osc_pane

0x127c,	// (0x0003964d) mup2_visualizer_spec_pane_ParamLimits

0x127c,	// (0x0003964d) mup2_visualizer_spec_pane

0xd5cb,	// (0x0004599c) mup2_spec_half_pane

0xd5cb,	// (0x0004599c) mup2_spec_half_pane_cp

0x14ec,	// (0x000398bd) mup2_spec_bar_pane_ParamLimits

0x14ec,	// (0x000398bd) mup2_spec_bar_pane

0xe451,	// (0x00046822) mup2_spec_bar_pane_g1

0x150b,	// (0x000398dc) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000479d7) mup2_spec_bar_pane_g

0xd5cb,	// (0x0004599c) mup2_osc_middle_pane

0xe451,	// (0x00046822) mup2_visualizer_osc_pane_g1

0xd5f5,	// (0x000459c6) popup_number_entry_window_t1_ParamLimits

0xd608,	// (0x000459d9) popup_number_entry_window_t2_ParamLimits

0xd61a,	// (0x000459eb) popup_number_entry_window_t3_ParamLimits

0x4373,	// (0x0003c744) popup_number_entry_window_t5_ParamLimits

0x4373,	// (0x0003c744) popup_number_entry_window_t5

0xf045,	// (0x00047416) popup_number_entry_window_t_ParamLimits

0xd62c,	// (0x000459fd) text_title_cp2_ParamLimits

0x65d3,	// (0x0003e9a4) aid_hotspot_pointer_text2_pane

0x666d,	// (0x0003ea3e) main_viewer_pane_g9_ParamLimits

0x666d,	// (0x0003ea3e) main_viewer_pane_g9

0xe74f,	// (0x00046b20) cale_month_pane_t1_ParamLimits

0xe78c,	// (0x00046b5d) bg_cale_pane_ParamLimits

0xe7a4,	// (0x00046b75) list_cale_pane_ParamLimits

0xe7b5,	// (0x00046b86) listscroll_cale_day_pane_t1

0xe7c7,	// (0x00046b98) scroll_pane_cp09_ParamLimits

0x6390,	// (0x0003e761) main_mup_eq_pane_t1_ParamLimits

0x6390,	// (0x0003e761) main_mup_eq_pane_t1

0x63aa,	// (0x0003e77b) main_mup_eq_pane_t2_ParamLimits

0x63aa,	// (0x0003e77b) main_mup_eq_pane_t2

0x63c4,	// (0x0003e795) main_mup_eq_pane_t3_ParamLimits

0x63c4,	// (0x0003e795) main_mup_eq_pane_t3

0x63dc,	// (0x0003e7ad) main_mup_eq_pane_t4_ParamLimits

0x63dc,	// (0x0003e7ad) main_mup_eq_pane_t4

0x63f4,	// (0x0003e7c5) main_mup_eq_pane_t5_ParamLimits

0x63f4,	// (0x0003e7c5) main_mup_eq_pane_t5

0x640c,	// (0x0003e7dd) main_mup_eq_pane_t6_ParamLimits

0x640c,	// (0x0003e7dd) main_mup_eq_pane_t6

0x6420,	// (0x0003e7f1) main_mup_eq_pane_t7_ParamLimits

0x6420,	// (0x0003e7f1) main_mup_eq_pane_t7

0x6434,	// (0x0003e805) main_mup_eq_pane_t8_ParamLimits

0x6434,	// (0x0003e805) main_mup_eq_pane_t8

0x644a,	// (0x0003e81b) main_mup_eq_pane_t9_ParamLimits

0x644a,	// (0x0003e81b) main_mup_eq_pane_t9

0x6462,	// (0x0003e833) main_mup_eq_pane_t10_ParamLimits

0x6462,	// (0x0003e833) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0004777a) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0004777a) main_mup_eq_pane_t

0x651f,	// (0x0003e8f0) mup_equalizer_pane_cp5_ParamLimits

0x6535,	// (0x0003e906) mup_equalizer_pane_cp6_ParamLimits

0x654d,	// (0x0003e91e) mup_equalizer_pane_cp7_ParamLimits

0xd5cb,	// (0x0004599c) main_gallery_pane

0x121a,	// (0x000395eb) smil2_volume_pane

0x1235,	// (0x00039606) smil_status_volume_pane_g1_ParamLimits

0x1222,	// (0x000395f3) smil_status_volume_pane_g2_ParamLimits

0x6fb9,	// (0x0003f38a) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x00047930) smil_status_volume_pane_g_ParamLimits

0x13bb,	// (0x0003978c) bg_popup_window_pane_cp07_ParamLimits

0x13c9,	// (0x0003979a) blid_firmament_pane

0xe1ca,	// (0x0004659b) aid_size_cell_gallery_ParamLimits

0xe1ca,	// (0x0004659b) aid_size_cell_gallery

0xe1ca,	// (0x0004659b) grid_gallery_pane_ParamLimits

0xe1ca,	// (0x0004659b) grid_gallery_pane

0xef82,	// (0x00047353) cell_gallery_pane_ParamLimits

0xef82,	// (0x00047353) cell_gallery_pane

0xe17d,	// (0x0004654e) bg_cell_gallery_focus_pane_ParamLimits

0xe17d,	// (0x0004654e) bg_cell_gallery_focus_pane

0xe1e4,	// (0x000465b5) cell_gallery_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) cell_gallery_pane_g1

0xe1e4,	// (0x000465b5) cell_gallery_pane_g2_ParamLimits

0xe1e4,	// (0x000465b5) cell_gallery_pane_g2

0xe1e4,	// (0x000465b5) cell_gallery_pane_g3_ParamLimits

0xe1e4,	// (0x000465b5) cell_gallery_pane_g3

0xe1f2,	// (0x000465c3) cell_gallery_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x000479dc) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x000479dc) cell_gallery_pane_g

0x1515,	// (0x000398e6) bg_cell_gallery_focus_pane_g1

0x151d,	// (0x000398ee) bg_cell_gallery_focus_pane_g2

0x1525,	// (0x000398f6) bg_cell_gallery_focus_pane_g3

0x152d,	// (0x000398fe) bg_cell_gallery_focus_pane_g4

0x1535,	// (0x00039906) bg_cell_gallery_focus_pane_g5

0x153d,	// (0x0003990e) bg_cell_gallery_focus_pane_g6

0x1545,	// (0x00039916) bg_cell_gallery_focus_pane_g7

0x154d,	// (0x0003991e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x000479e5) bg_cell_gallery_focus_pane_g

0x1555,	// (0x00039926) aid_firma_cardinal

0x1569,	// (0x0003993a) blid_firmament_pane_t1

0x1580,	// (0x00039951) blid_firmament_pane_t2

0x1597,	// (0x00039968) blid_firmament_pane_t3

0x15ae,	// (0x0003997f) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x000479f6) blid_firmament_pane_t

0x15c5,	// (0x00039996) blid_sat_info_pane

0xe451,	// (0x00046822) blid_sat_info_pane_g1

0xe451,	// (0x00046822) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0004776e) blid_sat_info_pane_g

0x15d5,	// (0x000399a6) blid_sat_info_pane_t1

0x15e3,	// (0x000399b4) smil2_volume_content_pane

0x15ec,	// (0x000399bd) smil2_volume_pane_g1

0xe32d,	// (0x000466fe) smil2_volume_content_pane_g1

0x15f4,	// (0x000399c5) smil2_volume_content_pane_g2

0x15fd,	// (0x000399ce) smil2_volume_content_pane_g3

0x1606,	// (0x000399d7) smil2_volume_content_pane_g4

0x160f,	// (0x000399e0) smil2_volume_content_pane_g5

0x1618,	// (0x000399e9) smil2_volume_content_pane_g6

0x1621,	// (0x000399f2) smil2_volume_content_pane_g7

0x162a,	// (0x000399fb) smil2_volume_content_pane_g8

0x1633,	// (0x00039a04) smil2_volume_content_pane_g9

0x163c,	// (0x00039a0d) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x000479ff) smil2_volume_content_pane_g

0x4a04,	// (0x0003cdd5) cale_week_day_heading_pane_t1_ParamLimits

0x4a1f,	// (0x0003cdf0) cale_week_day_heading_pane_t2_ParamLimits

0x4a3a,	// (0x0003ce0b) cale_week_day_heading_pane_t3_ParamLimits

0x4a55,	// (0x0003ce26) cale_week_day_heading_pane_t4_ParamLimits

0x4a70,	// (0x0003ce41) cale_week_day_heading_pane_t5_ParamLimits

0x4a8b,	// (0x0003ce5c) cale_week_day_heading_pane_t6_ParamLimits

0x4aa6,	// (0x0003ce77) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0004751d) cale_week_day_heading_pane_t_ParamLimits

0xe3dd,	// (0x000467ae) bg_cale_side_pane_ParamLimits

0x4ac1,	// (0x0003ce92) cale_week_time_pane_t1_ParamLimits

0x4adb,	// (0x0003ceac) cale_week_time_pane_t2_ParamLimits

0x4af5,	// (0x0003cec6) cale_week_time_pane_t3_ParamLimits

0x4b0f,	// (0x0003cee0) cale_week_time_pane_t4_ParamLimits

0x4b29,	// (0x0003cefa) cale_week_time_pane_t5_ParamLimits

0x4b43,	// (0x0003cf14) cale_week_time_pane_t6_ParamLimits

0x4b61,	// (0x0003cf32) cale_week_time_pane_t7_ParamLimits

0x4b83,	// (0x0003cf54) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0004752c) cale_week_time_pane_t_ParamLimits

0x4ba7,	// (0x0003cf78) cell_cale_week_pane_g2_ParamLimits

0xe3dd,	// (0x000467ae) bg_cale_side_pane_cp01_ParamLimits

0x5d09,	// (0x0003e0da) cale_month_week_pane_t1_ParamLimits

0x5d22,	// (0x0003e0f3) cale_month_week_pane_t2_ParamLimits

0x5d3b,	// (0x0003e10c) cale_month_week_pane_t3_ParamLimits

0x5d54,	// (0x0003e125) cale_month_week_pane_t4_ParamLimits

0x5d6d,	// (0x0003e13e) cale_month_week_pane_t5_ParamLimits

0x5d8e,	// (0x0003e15f) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000475fa) cale_month_week_pane_t_ParamLimits

0x5ed1,	// (0x0003e2a2) cell_cale_month_pane_g1_ParamLimits

0xd5cb,	// (0x0004599c) main_cale_event_viewer_pane

0xd5cb,	// (0x0004599c) listscroll_cale_event_viewer_pane

0x1645,	// (0x00039a16) list_cale_ev_pane

0x164d,	// (0x00039a1e) scroll_pane_cp023

0x1659,	// (0x00039a2a) field_cale_ev_pane_ParamLimits

0x1659,	// (0x00039a2a) field_cale_ev_pane

0x1677,	// (0x00039a48) field_cale_ev_content_pane_ParamLimits

0x1677,	// (0x00039a48) field_cale_ev_content_pane

0x1683,	// (0x00039a54) field_cale_ev_pane_g1_ParamLimits

0x1683,	// (0x00039a54) field_cale_ev_pane_g1

0x168f,	// (0x00039a60) field_cale_ev_pane_g2_ParamLimits

0x168f,	// (0x00039a60) field_cale_ev_pane_g2

0x16a7,	// (0x00039a78) field_cale_ev_pane_g3_ParamLimits

0x16a7,	// (0x00039a78) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x00047a14) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x00047a14) field_cale_ev_pane_g

0x16bf,	// (0x00039a90) field_cale_ev_pane_t1_ParamLimits

0x16bf,	// (0x00039a90) field_cale_ev_pane_t1

0xe390,	// (0x00046761) field_cale_ev_content_pane_t1_ParamLimits

0xe390,	// (0x00046761) field_cale_ev_content_pane_t1

0xf01f,	// (0x000473f0) bg_button_pane_cp01

0x4795,	// (0x0003cb66) listscroll_cale_week_pane_ParamLimits

0xe36a,	// (0x0004673b) popup_toolbar_window_cp01

0xe3ae,	// (0x0004677f) listscroll_cale_week_pane_t1_ParamLimits

0x4795,	// (0x0003cb66) listscroll_cale_day_pane_ParamLimits

0xe36a,	// (0x0004673b) popup_toolbar_window_cp02

0xe7b5,	// (0x00046b86) listscroll_cale_day_pane_t1_ParamLimits

0x4795,	// (0x0003cb66) main_cale_month_pane_ParamLimits

0x6f02,	// (0x0003f2d3) popup_toolbar_window_cp03_ParamLimits

0x6f02,	// (0x0003f2d3) popup_toolbar_window_cp03

0x67f5,	// (0x0003ebc6) main_image_pane_g2_ParamLimits

0x67f5,	// (0x0003ebc6) main_image_pane_g2

0x6801,	// (0x0003ebd2) main_image_pane_g3_ParamLimits

0x6801,	// (0x0003ebd2) main_image_pane_g3

0x0002,

0xf43b,	// (0x0004780c) main_image_pane_g_ParamLimits

0xf43b,	// (0x0004780c) main_image_pane_g

0x010d,	// (0x000384de) main_image_pane_t1_ParamLimits

0x680d,	// (0x0003ebde) main_image_pane_t2_ParamLimits

0x680d,	// (0x0003ebde) main_image_pane_t2

0x681f,	// (0x0003ebf0) main_image_pane_t3_ParamLimits

0x681f,	// (0x0003ebf0) main_image_pane_t3

0x6831,	// (0x0003ec02) main_image_pane_t4_ParamLimits

0x6831,	// (0x0003ec02) main_image_pane_t4

0x0003,

0xf442,	// (0x00047813) main_image_pane_t_ParamLimits

0xf442,	// (0x00047813) main_image_pane_t

0x6843,	// (0x0003ec14) popup_image_details_window_cp01

0x684d,	// (0x0003ec1e) popup_toobar_trans_pane_cp01_ParamLimits

0x684d,	// (0x0003ec1e) popup_toobar_trans_pane_cp01

0x6e52,	// (0x0003f223) popup_image_details_window_ParamLimits

0x6e52,	// (0x0003f223) popup_image_details_window

0x6e60,	// (0x0003f231) popup_image_focus_window

0xe1ca,	// (0x0004659b) camera2_autofocus_pane_ParamLimits

0xe1ca,	// (0x0004659b) camera2_autofocus_pane

0xd5cb,	// (0x0004599c) bg_popup_sub_pane_cp06

0x16d6,	// (0x00039aa7) popup_image_focus_window_g1

0x16de,	// (0x00039aaf) popup_image_focus_window_g2

0x16e6,	// (0x00039ab7) popup_image_focus_window_g3

0x16ee,	// (0x00039abf) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x00047a1b) popup_image_focus_window_g

0x16f6,	// (0x00039ac7) popup_image_focus_window_t1

0x1704,	// (0x00039ad5) popup_image_focus_window_t2

0x1714,	// (0x00039ae5) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x00047a24) popup_image_focus_window_t

0xe1e4,	// (0x000465b5) camera2_autofocus_pane_g1

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp01

0x1722,	// (0x00039af3) popup_image_details_window_g1

0x1735,	// (0x00039b06) popup_image_details_window_g2

0x0002,

0xf665,	// (0x00047a36) popup_image_details_window_g

0x175e,	// (0x00039b2f) popup_image_details_window_t1

0x1770,	// (0x00039b41) popup_image_details_window_t2

0x1789,	// (0x00039b5a) popup_image_details_window_t3

0x179d,	// (0x00039b6e) popup_image_details_window_t4

0x17b8,	// (0x00039b89) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x00047a3d) popup_image_details_window_t

0xe242,	// (0x00046613) bg_calc_paper_pane_ParamLimits

0xd5cb,	// (0x0004599c) grid_highlight_pane_cp013

0x4521,	// (0x0003c8f2) list_calc_pane_ParamLimits

0x4533,	// (0x0003c904) scroll_pane_cp024

0xe256,	// (0x00046627) bg_calc_display_pane_ParamLimits

0x453b,	// (0x0003c90c) calc_display_pane_t1_ParamLimits

0x4550,	// (0x0003c921) calc_display_pane_t2_ParamLimits

0x4565,	// (0x0003c936) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0004749d) calc_display_pane_t_ParamLimits

0x463e,	// (0x0003ca0f) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000474ba) cell_calc_pane_g

0x4647,	// (0x0003ca18) cell_calc_pane_t1

0xe2ab,	// (0x0004667c) grid_highlight_pane_cp02_ParamLimits

0xe2c1,	// (0x00046692) toolbar_button_pane_cp01_ParamLimits

0xe2c1,	// (0x00046692) toolbar_button_pane_cp01

0x0152,	// (0x00038523) temp_image_control_pane_ParamLimits

0x0152,	// (0x00038523) temp_image_control_pane

0xe17d,	// (0x0004654e) main_mp3_pane

0x17d2,	// (0x00039ba3) temp_image_control_pane_g1_ParamLimits

0x17d2,	// (0x00039ba3) temp_image_control_pane_g1

0x17e0,	// (0x00039bb1) temp_image_control_pane_g2_ParamLimits

0x17e0,	// (0x00039bb1) temp_image_control_pane_g2

0x17f2,	// (0x00039bc3) temp_image_control_pane_g3_ParamLimits

0x17f2,	// (0x00039bc3) temp_image_control_pane_g3

0x7218,	// (0x0003f5e9) temp_image_control_pane_g4_ParamLimits

0x7218,	// (0x0003f5e9) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x00047a48) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x00047a48) temp_image_control_pane_g

0x17d2,	// (0x00039ba3) main_mp3_pane_g1

0x7229,	// (0x0003f5fa) main_mp3_pane_g2

0x0007,

0xf680,	// (0x00047a51) main_mp3_pane_g

0x1827,	// (0x00039bf8) main_mp3_pane_t1

0xe1f2,	// (0x000465c3) main_camera_pane_g8_ParamLimits

0xe1f2,	// (0x000465c3) main_camera_pane_g8

0x4d51,	// (0x0003d122) main_video_pane_g7_ParamLimits

0x4d51,	// (0x0003d122) main_video_pane_g7

0xef2e,	// (0x000472ff) main_camera2_pane_t7_ParamLimits

0xef2e,	// (0x000472ff) main_camera2_pane_t7

0xe56d,	// (0x0004693e) scroll_pane_cp025_ParamLimits

0xe56d,	// (0x0004693e) scroll_pane_cp025

0xe581,	// (0x00046952) scroll_pane_cp026_ParamLimits

0xe581,	// (0x00046952) scroll_pane_cp026

0xe590,	// (0x00046961) wml_content_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_touch_calib_pane

0x72cd,	// (0x0003f69e) main_touch_calib_pane_g1

0x72d9,	// (0x0003f6aa) main_touch_calib_pane_g2

0x72e5,	// (0x0003f6b6) main_touch_calib_pane_g3

0x72f1,	// (0x0003f6c2) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x00047a6f) main_touch_calib_pane_g

0x72fd,	// (0x0003f6ce) main_touch_calib_pane_t1

0x7316,	// (0x0003f6e7) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x00047a78) main_touch_calib_pane_t

0xed2a,	// (0x000470fb) mup_progress_pane_cp02

0xed5f,	// (0x00047130) navi_pane_g1

0xee1a,	// (0x000471eb) navi_pane_mp_t3

0xe17d,	// (0x0004654e) main_mp3_pane_ParamLimits

0x6f3f,	// (0x0003f310) navi_pane_ParamLimits

0x17d2,	// (0x00039ba3) main_mp3_pane_g1_ParamLimits

0x7229,	// (0x0003f5fa) main_mp3_pane_g2_ParamLimits

0x7235,	// (0x0003f606) main_mp3_pane_g3_ParamLimits

0x7235,	// (0x0003f606) main_mp3_pane_g3

0x7241,	// (0x0003f612) main_mp3_pane_g4_ParamLimits

0x7241,	// (0x0003f612) main_mp3_pane_g4

0xe1e4,	// (0x000465b5) main_mp3_pane_g5_ParamLimits

0xe1e4,	// (0x000465b5) main_mp3_pane_g5

0x1802,	// (0x00039bd3) main_mp3_pane_g6_ParamLimits

0x1802,	// (0x00039bd3) main_mp3_pane_g6

0x180f,	// (0x00039be0) main_mp3_pane_g7_ParamLimits

0x180f,	// (0x00039be0) main_mp3_pane_g7

0x181b,	// (0x00039bec) main_mp3_pane_g8_ParamLimits

0x181b,	// (0x00039bec) main_mp3_pane_g8

0xf680,	// (0x00047a51) main_mp3_pane_g_ParamLimits

0x724d,	// (0x0003f61e) main_mp3_pane_t2

0x725d,	// (0x0003f62e) main_mp3_pane_t3

0x1835,	// (0x00039c06) main_mp3_pane_t4

0x1843,	// (0x00039c14) main_mp3_pane_t5

0x0005,

0xf691,	// (0x00047a62) main_mp3_pane_t

0x1851,	// (0x00039c22) mup_progress_pane_cp01

0x32bd,	// (0x0003b68e) aid_zoom_text_secondary2

0x1645,	// (0x00039a16) list_cale_ev2_pane

0x164d,	// (0x00039a1e) scroll_pane_cp023_ParamLimits

0x7371,	// (0x0003f742) field_cale_ev2_pane_ParamLimits

0x7371,	// (0x0003f742) field_cale_ev2_pane

0x3470,	// (0x0003b841) field_cale_ev2_pane_g1_ParamLimits

0x3470,	// (0x0003b841) field_cale_ev2_pane_g1

0x347c,	// (0x0003b84d) field_cale_ev2_pane_g2_ParamLimits

0x347c,	// (0x0003b84d) field_cale_ev2_pane_g2

0x3494,	// (0x0003b865) field_cale_ev2_pane_g3_ParamLimits

0x3494,	// (0x0003b865) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x00047a83) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x00047a83) field_cale_ev2_pane_g

0x34b8,	// (0x0003b889) field_cale_ev2_pane_t1_ParamLimits

0x34b8,	// (0x0003b889) field_cale_ev2_pane_t1

0x34cf,	// (0x0003b8a0) field_cale_ev2_pane_t2_ParamLimits

0x34cf,	// (0x0003b8a0) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x00047a8c) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x00047a8c) field_cale_ev2_pane_t

0x66d5,	// (0x0003eaa6) main_postcard_pane_g5_ParamLimits

0x66d5,	// (0x0003eaa6) main_postcard_pane_g5

0x66e3,	// (0x0003eab4) main_postcard_pane_g6_ParamLimits

0x66e3,	// (0x0003eab4) main_postcard_pane_g6

0xe1ca,	// (0x0004659b) camera2_autofocus_pane_cp_ParamLimits

0xe1ca,	// (0x0004659b) camera2_autofocus_pane_cp

0xe17d,	// (0x0004654e) main_mup3_pane

0x73d9,	// (0x0003f7aa) main_mup3_pane_g1_ParamLimits

0x73d9,	// (0x0003f7aa) main_mup3_pane_g1

0x73fa,	// (0x0003f7cb) main_mup3_pane_g2_ParamLimits

0x73fa,	// (0x0003f7cb) main_mup3_pane_g2

0x7472,	// (0x0003f843) main_mup3_pane_g3_ParamLimits

0x7472,	// (0x0003f843) main_mup3_pane_g3

0x74b5,	// (0x0003f886) main_mup3_pane_g4_ParamLimits

0x74b5,	// (0x0003f886) main_mup3_pane_g4

0x74f8,	// (0x0003f8c9) main_mup3_pane_g5_ParamLimits

0x74f8,	// (0x0003f8c9) main_mup3_pane_g5

0x753b,	// (0x0003f90c) main_mup3_pane_g6_ParamLimits

0x753b,	// (0x0003f90c) main_mup3_pane_g6

0xe1f2,	// (0x000465c3) main_mup3_pane_g7_ParamLimits

0xe1f2,	// (0x000465c3) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x00047a9c) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x00047a9c) main_mup3_pane_g

0x75b1,	// (0x0003f982) main_mup3_pane_t1_ParamLimits

0x75b1,	// (0x0003f982) main_mup3_pane_t1

0x7620,	// (0x0003f9f1) main_mup3_pane_t2_ParamLimits

0x7620,	// (0x0003f9f1) main_mup3_pane_t2

0x76e9,	// (0x0003faba) main_mup3_pane_t4_ParamLimits

0x76e9,	// (0x0003faba) main_mup3_pane_t4

0x7737,	// (0x0003fb08) main_mup3_pane_t5_ParamLimits

0x7737,	// (0x0003fb08) main_mup3_pane_t5

0x77e7,	// (0x0003fbb8) main_mup3_pane_t6_ParamLimits

0x77e7,	// (0x0003fbb8) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x00047aad) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x00047aad) main_mup3_pane_t

0x7893,	// (0x0003fc64) mup3_progress_pane_ParamLimits

0x7893,	// (0x0003fc64) mup3_progress_pane

0x7911,	// (0x0003fce2) popup_mup3_control_window_ParamLimits

0x7911,	// (0x0003fce2) popup_mup3_control_window

0x1865,	// (0x00039c36) popup_mup3_text_window

0x792a,	// (0x0003fcfb) mup3_progress_pane_t1

0x7949,	// (0x0003fd1a) mup3_progress_pane_t2

0x186d,	// (0x00039c3e) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x00047aba) mup3_progress_pane_t

0x188a,	// (0x00039c5b) mup_progress_pane_cp03

0xd5cb,	// (0x0004599c) bg_tb_trans_pane_cp04

0x7968,	// (0x0003fd39) mup3_volume_pane

0x7970,	// (0x0003fd41) popup_mup3_control_window_g1

0x7979,	// (0x0003fd4a) mup3_volume_pane_g1

0x7982,	// (0x0003fd53) mup3_volume_pane_g2

0x798b,	// (0x0003fd5c) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x00047ac1) mup3_volume_pane_g

0xd5cb,	// (0x0004599c) bg_tb_trans_pane_cp03

0x189a,	// (0x00039c6b) popup_mup3_text_window_g1

0x18a2,	// (0x00039c73) popup_mup3_text_window_t1

0xe29e,	// (0x0004666f) list_calc_item_pane_g1_ParamLimits

0x1331,	// (0x00039702) mup_volume_pane_cp_g1

0x732f,	// (0x0003f700) main_touch_calib_pane_t3

0x7345,	// (0x0003f716) main_touch_calib_pane_t4

0x735b,	// (0x0003f72c) main_touch_calib_pane_t5

0x40fd,	// (0x0003c4ce) aid_cell_size_toolbar2

0x4105,	// (0x0003c4d6) aid_popup3_width_pane

0x32b5,	// (0x0003b686) aid_zoom_text_msg_primary

0x4c53,	// (0x0003d024) vorec_t7

0xe262,	// (0x00046633) bg_calc_paper_pane_g1_ParamLimits

0xe26e,	// (0x0004663f) bg_calc_paper_pane_g2_ParamLimits

0xe27a,	// (0x0004664b) bg_calc_paper_pane_g3_ParamLimits

0xe286,	// (0x00046657) bg_calc_paper_pane_g4_ParamLimits

0xe292,	// (0x00046663) bg_calc_paper_pane_g5_ParamLimits

0x45a4,	// (0x0003c975) bg_calc_paper_pane_g6_ParamLimits

0x45b5,	// (0x0003c986) bg_calc_paper_pane_g7_ParamLimits

0x45c6,	// (0x0003c997) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000474a4) bg_calc_paper_pane_g_ParamLimits

0x45d7,	// (0x0003c9a8) calc_bg_paper_pane_g9_ParamLimits

0xe1ca,	// (0x0004659b) image_qvga_pane_ParamLimits

0xe1ca,	// (0x0004659b) image_qvga_pane

0xe15b,	// (0x0004652c) bg_popup_sub_pane_cp04_ParamLimits

0x0089,	// (0x0003845a) popup_mup_playback_window_g1_ParamLimits

0x0095,	// (0x00038466) popup_mup_playback_window_t1_ParamLimits

0x00aa,	// (0x0003847b) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x00047807) popup_mup_playback_window_t_ParamLimits

0xe1e4,	// (0x000465b5) main_mup2_pane_g3_ParamLimits

0xe1e4,	// (0x000465b5) main_mup2_pane_g3

0x4f38,	// (0x0003d309) popup_toolbar_window_cp04

0x048c,	// (0x0003885d) popup_call2_audio_second_window_g3_ParamLimits

0x048c,	// (0x0003885d) popup_call2_audio_second_window_g3

0x08a4,	// (0x00038c75) popup_call2_audio_first_window_g4_ParamLimits

0x08a4,	// (0x00038c75) popup_call2_audio_first_window_g4

0x0ecb,	// (0x0003929c) popup_call2_audio_in_window_g4_ParamLimits

0x0ecb,	// (0x0003929c) popup_call2_audio_in_window_g4

0x67e8,	// (0x0003ebb9) aid_area_sk_bg_cut_ParamLimits

0x67e8,	// (0x0003ebb9) aid_area_sk_bg_cut

0x00bf,	// (0x00038490) aid_area_sk_bg_cut_2_ParamLimits

0x00bf,	// (0x00038490) aid_area_sk_bg_cut_2

0xd5cb,	// (0x0004599c) aid_placing_details_win

0xd5cb,	// (0x0004599c) aid_placing_details_win_2

0xe1e4,	// (0x000465b5) camera2_autofocus_pane_g1_ParamLimits

0x42b6,	// (0x0003c687) popup_fixed_preview_cale_window_ParamLimits

0x42b6,	// (0x0003c687) popup_fixed_preview_cale_window

0xee98,	// (0x00047269) navi_slider_pane_g3

0xeea1,	// (0x00047272) navi_slider_pane_g4

0xeeaa,	// (0x0004727b) navi_slider_pane_g5

0xee98,	// (0x00047269) navi_slider_pane_g6

0x6364,	// (0x0003e735) navi_slider_pane_g7

0xefec,	// (0x000473bd) mup_scale_pane_g3

0xeff5,	// (0x000473c6) mup_scale_pane_g4

0xeffe,	// (0x000473cf) mup_scale_pane_g5

0x6565,	// (0x0003e936) mup_scale_pane_g6

0x656e,	// (0x0003e93f) mup_scale_pane_g7

0xe451,	// (0x00046822) cams2_slider_pane_g3

0xe451,	// (0x00046822) cams2_slider_pane_g4

0xe451,	// (0x00046822) cams2_slider_pane_g5

0xe451,	// (0x00046822) cams2_slider_pane_g6

0xe451,	// (0x00046822) cams2_slider_pane_g7

0xe451,	// (0x00046822) camera2_autofocus_pane_cp_g1

0x11a1,	// (0x00039572) bg_popup_preview_window_pane_cp02_ParamLimits

0x11a1,	// (0x00039572) bg_popup_preview_window_pane_cp02

0x18b0,	// (0x00039c81) list_fp_cale_pane_ParamLimits

0x18b0,	// (0x00039c81) list_fp_cale_pane

0x18bc,	// (0x00039c8d) popup_fixed_preview_cale_window_t1_ParamLimits

0x18bc,	// (0x00039c8d) popup_fixed_preview_cale_window_t1

0x7994,	// (0x0003fd65) popup_fixed_preview_cale_window_t2_ParamLimits

0x7994,	// (0x0003fd65) popup_fixed_preview_cale_window_t2

0x79a9,	// (0x0003fd7a) popup_fixed_preview_cale_window_t3_ParamLimits

0x79a9,	// (0x0003fd7a) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x00047ac8) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x00047ac8) popup_fixed_preview_cale_window_t

0x79be,	// (0x0003fd8f) list_single_fp_cale_pane_ParamLimits

0x79be,	// (0x0003fd8f) list_single_fp_cale_pane

0x18da,	// (0x00039cab) list_single_fp_cale_pane_g1_ParamLimits

0x18da,	// (0x00039cab) list_single_fp_cale_pane_g1

0x18e6,	// (0x00039cb7) list_single_fp_cale_pane_g2_ParamLimits

0x18e6,	// (0x00039cb7) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x00047acf) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x00047acf) list_single_fp_cale_pane_g

0x18ff,	// (0x00039cd0) list_single_fp_cale_pane_t1_ParamLimits

0x18ff,	// (0x00039cd0) list_single_fp_cale_pane_t1

0x1911,	// (0x00039ce2) list_single_fp_cale_pane_t2_ParamLimits

0x1911,	// (0x00039ce2) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x00047ad6) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x00047ad6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd5cb,	// (0x0004599c) main_dialer_pane

0xd5cb,	// (0x0004599c) aid_cell_size_keypad

0xd5cb,	// (0x0004599c) dialer_ne_pane

0xd5cb,	// (0x0004599c) grid_dialer_command_1_pane

0xd5cb,	// (0x0004599c) grid_dialer_command_2_pane

0xd5cb,	// (0x0004599c) grid_dialer_keypad_pane

0x13bb,	// (0x0003978c) bg_popup_call_pane_cp06_ParamLimits

0x13bb,	// (0x0003978c) bg_popup_call_pane_cp06

0x13bb,	// (0x0003978c) dialer_ne_clear_pane_ParamLimits

0x13bb,	// (0x0003978c) dialer_ne_clear_pane

0xe451,	// (0x00046822) dialer_ne_pane_g1

0xef2e,	// (0x000472ff) dialer_ne_pane_t1_ParamLimits

0xef2e,	// (0x000472ff) dialer_ne_pane_t1

0x1b77,	// (0x00039f48) dialer_ne_pane_t2_ParamLimits

0x1b77,	// (0x00039f48) dialer_ne_pane_t2

0x79d1,	// (0x0003fda2) dialer_ne_pane_t3_ParamLimits

0x79d1,	// (0x0003fda2) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x00047adb) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x00047adb) dialer_ne_pane_t

0x79d1,	// (0x0003fda2) dialer_ne_pane_t3_copy1_ParamLimits

0x79d1,	// (0x0003fda2) dialer_ne_pane_t3_copy1

0x1944,	// (0x00039d15) cell_dialer_keypad_pane_ParamLimits

0x1944,	// (0x00039d15) cell_dialer_keypad_pane

0xe17d,	// (0x0004654e) cell_dialer_command_1_pane_ParamLimits

0xe17d,	// (0x0004654e) cell_dialer_command_1_pane

0x195b,	// (0x00039d2c) cell_dialer_command_2_pane_ParamLimits

0x195b,	// (0x00039d2c) cell_dialer_command_2_pane

0xe17d,	// (0x0004654e) bg_button_pane_cp02_ParamLimits

0xe17d,	// (0x0004654e) bg_button_pane_cp02

0xe1e4,	// (0x000465b5) cell_dialer_keypad_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) cell_dialer_keypad_pane_g1

0xe17d,	// (0x0004654e) bg_button_pane_cp03_ParamLimits

0xe17d,	// (0x0004654e) bg_button_pane_cp03

0xe1e4,	// (0x000465b5) cell_dialer_command_1_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) cell_dialer_command_1_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp04

0xe451,	// (0x00046822) cell_dialer_command_2_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp06

0xe451,	// (0x00046822) dialer_ne_clear_pane_g1

0xed6b,	// (0x0004713c) navi_pane_g2

0xed99,	// (0x0004716a) navi_pane_g3

0x0002,

0xf339,	// (0x0004770a) navi_pane_g

0xee28,	// (0x000471f9) navi_pane_mv_g2

0xee4f,	// (0x00047220) navi_pane_mv_g5

0x632f,	// (0x0003e700) navi_pane_mv_t1

0xe256,	// (0x00046627) main_clock2_pane

0xe1ca,	// (0x0004659b) main_clock2_list_pane_ParamLimits

0xe1ca,	// (0x0004659b) main_clock2_list_pane

0x7a47,	// (0x0003fe18) main_clock2_pane_t1_ParamLimits

0x7a47,	// (0x0003fe18) main_clock2_pane_t1

0x7a75,	// (0x0003fe46) main_clock2_pane_t2_ParamLimits

0x7a75,	// (0x0003fe46) main_clock2_pane_t2

0x0004,

0xf716,	// (0x00047ae7) main_clock2_pane_t_ParamLimits

0xf716,	// (0x00047ae7) main_clock2_pane_t

0x7ada,	// (0x0003feab) popup_clock_analogue_window_cp03_ParamLimits

0x7ada,	// (0x0003feab) popup_clock_analogue_window_cp03

0x7af8,	// (0x0003fec9) popup_clock_digital_window_cp02_ParamLimits

0x7af8,	// (0x0003fec9) popup_clock_digital_window_cp02

0x7b6d,	// (0x0003ff3e) main_clock2_list_single_pane_ParamLimits

0x7b6d,	// (0x0003ff3e) main_clock2_list_single_pane

0xe42f,	// (0x00046800) list_highlight_pane_cp05

0x19bc,	// (0x00039d8d) main_clock2_list_single_pane_t1

0x4f38,	// (0x0003d309) popup_toolbar_window_cp04_ParamLimits

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g2

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g3_ParamLimits

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g3

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g4

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g5_ParamLimits

0xe1f2,	// (0x000465c3) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x00047a2b) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x00047a2b) camera2_autofocus_pane_g

0x739a,	// (0x0003f76b) camera2_autofocus_pane_cp_g2

0x73a2,	// (0x0003f773) camera2_autofocus_pane_cp_g3

0x73aa,	// (0x0003f77b) camera2_autofocus_pane_cp_g4

0x73b2,	// (0x0003f783) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x00047a91) camera2_autofocus_pane_cp_g

0xd5cb,	// (0x0004599c) popup_dialer_spcha_window

0xd5cb,	// (0x0004599c) bg_popup_sub_pane_cp07

0xd5cb,	// (0x0004599c) list_spcha_pane

0x19ca,	// (0x00039d9b) list_single_spcha_pane_ParamLimits

0x19ca,	// (0x00039d9b) list_single_spcha_pane

0xd5cb,	// (0x0004599c) list_highlight_pane_cp06

0xe994,	// (0x00046d65) list_single_spcha_pane_t1

0x0c75,	// (0x00039046) popup_call2_audio_out_window_g4_ParamLimits

0x0c75,	// (0x00039046) popup_call2_audio_out_window_g4

0xd5cb,	// (0x0004599c) main_imed2_pane

0x6e68,	// (0x0003f239) popup_imed_adjust2_window

0x6e7b,	// (0x0003f24c) popup_imed_trans_window_ParamLimits

0x6e7b,	// (0x0003f24c) popup_imed_trans_window

0x1414,	// (0x000397e5) popup_blid_sat_info2_window_t1

0x1422,	// (0x000397f3) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x000479c0) popup_blid_sat_info2_window_t

0x7c22,	// (0x0003fff3) aid_size_cell_colour_35

0x7c3c,	// (0x0004000d) aid_size_cell_colour_112

0x7c53,	// (0x00040024) aid_size_cell_effect

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp02

0xe9a4,	// (0x00046d75) heading_imed_pane

0x7c6d,	// (0x0004003e) listscroll_imed_pane

0x19dc,	// (0x00039dad) heading_imed_pane_g1

0x19e4,	// (0x00039db5) heading_imed_pane_t1

0x19f2,	// (0x00039dc3) grid_imed_colour_35_pane_ParamLimits

0x19f2,	// (0x00039dc3) grid_imed_colour_35_pane

0x7c79,	// (0x0004004a) grid_imed_effect_pane

0x1a09,	// (0x00039dda) list_imed_aspect_pane

0x7c89,	// (0x0004005a) scroll_pane_cp027_ParamLimits

0x7c89,	// (0x0004005a) scroll_pane_cp027

0x7c95,	// (0x00040066) cell_imed_effect_pane_ParamLimits

0x7c95,	// (0x00040066) cell_imed_effect_pane

0x1a11,	// (0x00039de2) cell_imed_colour_pane_ParamLimits

0x1a11,	// (0x00039de2) cell_imed_colour_pane

0x1a53,	// (0x00039e24) cell_imed_colour_pane_g1_ParamLimits

0x1a53,	// (0x00039e24) cell_imed_colour_pane_g1

0x1a64,	// (0x00039e35) hgihlgiht_grid_pane_cp016_ParamLimits

0x1a64,	// (0x00039e35) hgihlgiht_grid_pane_cp016

0x7cad,	// (0x0004007e) cell_imed_effect_pane_g1

0x7cb5,	// (0x00040086) grid_highlight_pane_cp017

0x1a75,	// (0x00039e46) list_imed_single_pane_ParamLimits

0x1a75,	// (0x00039e46) list_imed_single_pane

0xd5cb,	// (0x0004599c) list_highlight_pane_cp07

0x1a8a,	// (0x00039e5b) list_imed_aspect_pane_comp1_t1

0xef82,	// (0x00047353) bg_tb_trans_pane_cp05

0x1aac,	// (0x00039e7d) popup_imed_adjust2_window_g1

0x1ad3,	// (0x00039ea4) popup_imed_adjust2_window_t1

0x1aeb,	// (0x00039ebc) slider_imed_adjust_pane

0x1aff,	// (0x00039ed0) slider_imed_adjust_pane_g1

0x1b0f,	// (0x00039ee0) slider_imed_adjust_pane_g2

0x1b1f,	// (0x00039ef0) slider_imed_adjust_pane_g3

0x1b30,	// (0x00039f01) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x00047b04) slider_imed_adjust_pane_g

0x7cbe,	// (0x0004008f) aid_size_cell_clipart2

0x7cca,	// (0x0004009b) grid_imed_clipart_pane

0x1b41,	// (0x00039f12) scroll_pane_cp031

0x7cd4,	// (0x000400a5) cell_imed_clipart_pane_ParamLimits

0x7cd4,	// (0x000400a5) cell_imed_clipart_pane

0x7cf6,	// (0x000400c7) cell_imed_clipart_pane_g1

0xd5cb,	// (0x0004599c) grid_highlight_pane_cp014

0x7a29,	// (0x0003fdfa) main_clock2_pane_g1_ParamLimits

0x7a29,	// (0x0003fdfa) main_clock2_pane_g1

0x7b14,	// (0x0003fee5) aid_call2_pane_cp10

0x7b26,	// (0x0003fef7) aid_call_pane_cp10

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g1

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g2

0x7b38,	// (0x0003ff09) popup_clock_analogue_window_cp10_g3

0x7b38,	// (0x0003ff09) popup_clock_analogue_window_cp10_g4

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x00047af2) popup_clock_analogue_window_cp10_g

0x7b4e,	// (0x0003ff1f) popup_clock_analogue_window_cp10_t1

0x7b7f,	// (0x0003ff50) clock_digital_number_pane_cp10_ParamLimits

0x7b7f,	// (0x0003ff50) clock_digital_number_pane_cp10

0x7b99,	// (0x0003ff6a) clock_digital_number_pane_cp11_ParamLimits

0x7b99,	// (0x0003ff6a) clock_digital_number_pane_cp11

0x7bb3,	// (0x0003ff84) clock_digital_number_pane_cp12_ParamLimits

0x7bb3,	// (0x0003ff84) clock_digital_number_pane_cp12

0x7bcd,	// (0x0003ff9e) clock_digital_number_pane_cp13_ParamLimits

0x7bcd,	// (0x0003ff9e) clock_digital_number_pane_cp13

0x7be7,	// (0x0003ffb8) clock_digital_separator_pane_cp10_ParamLimits

0x7be7,	// (0x0003ffb8) clock_digital_separator_pane_cp10

0x7c01,	// (0x0003ffd2) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c01,	// (0x0003ffd2) popup_clock_digital_window_cp02_t1

0xe153,	// (0x00046524) clock_digital_number_pane_cp10_g1

0xe153,	// (0x00046524) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x00047b0d) clock_digital_number_pane_cp10_g

0xe153,	// (0x00046524) clock_digital_separator_pane_cp10_g1

0xe153,	// (0x00046524) clock_digital_separator_pane_g2_cp10

0xee57,	// (0x00047228) navi_pane_vded_g4

0xee60,	// (0x00047231) navi_pane_vded_g5

0xee69,	// (0x0004723a) navi_pane_vded_t1

0xd5cb,	// (0x0004599c) main_vded_pane

0x7cff,	// (0x000400d0) main_vded_pane_g1

0x7d0b,	// (0x000400dc) main_vded_pane_g2

0x7d15,	// (0x000400e6) main_vded_pane_g3

0x0002,

0xf741,	// (0x00047b12) main_vded_pane_g

0x7d1f,	// (0x000400f0) main_vded_pane_t1

0x7d2d,	// (0x000400fe) main_vded_pane_t2

0x0001,

0xf748,	// (0x00047b19) main_vded_pane_t

0x7d3b,	// (0x0004010c) vded_slider_pane

0x7d45,	// (0x00040116) vded_video_pane

0x1b49,	// (0x00039f1a) vded_video_pane_g1

0x7d4f,	// (0x00040120) vded_video_pane_g2

0xe451,	// (0x00046822) vded_video_pane_g3

0x0002,

0xf74d,	// (0x00047b1e) vded_video_pane_g

0x1b53,	// (0x00039f24) vded_slider_pane_g1

0x1331,	// (0x00039702) vded_slider_pane_g2

0x1b5c,	// (0x00039f2d) vded_slider_pane_g3

0x1b65,	// (0x00039f36) vded_slider_pane_g4

0x1b6e,	// (0x00039f3f) vded_slider_pane_g5

0x0004,

0xf754,	// (0x00047b25) vded_slider_pane_g

0x7903,	// (0x0003fcd4) mup3_rocker_pane_ParamLimits

0x7903,	// (0x0003fcd4) mup3_rocker_pane

0x7d58,	// (0x00040129) mup3_control_keys_pane_g1

0x7d60,	// (0x00040131) mup3_control_keys_pane_g2

0x7d68,	// (0x00040139) mup3_control_keys_pane_g3

0x7d70,	// (0x00040141) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x00047b30) mup3_control_keys_pane_g

0x42de,	// (0x0003c6af) popup_toolbar2_fixed_window_cp01_ParamLimits

0x42de,	// (0x0003c6af) popup_toolbar2_fixed_window_cp01

0x791d,	// (0x0003fcee) popup_toolbar2_fixed_window_cp02_ParamLimits

0x791d,	// (0x0003fcee) popup_toolbar2_fixed_window_cp02

0x05fe,	// (0x000389cf) popup_call2_audio_second_window_t4_ParamLimits

0x05fe,	// (0x000389cf) popup_call2_audio_second_window_t4

0x0b3a,	// (0x00038f0b) popup_call2_audio_first_window_t6_ParamLimits

0x0b3a,	// (0x00038f0b) popup_call2_audio_first_window_t6

0x0d78,	// (0x00039149) popup_call2_audio_out_window_t6_ParamLimits

0x0d78,	// (0x00039149) popup_call2_audio_out_window_t6

0xd5cb,	// (0x0004599c) main_vitu_pane

0xe1ca,	// (0x0004659b) aid_size_cell_itu_ParamLimits

0xe1ca,	// (0x0004659b) aid_size_cell_itu

0xe1ca,	// (0x0004659b) bg_popup_window_pane_cp08_ParamLimits

0xe1ca,	// (0x0004659b) bg_popup_window_pane_cp08

0xe1ca,	// (0x0004659b) field_vitu_entry_pane_ParamLimits

0xe1ca,	// (0x0004659b) field_vitu_entry_pane

0xe1ca,	// (0x0004659b) grid_vitu_function_pane_ParamLimits

0xe1ca,	// (0x0004659b) grid_vitu_function_pane

0xe1ca,	// (0x0004659b) grid_vitu_itu_pane_ParamLimits

0xe1ca,	// (0x0004659b) grid_vitu_itu_pane

0xe1ca,	// (0x0004659b) cell_vitu_itu_pane_ParamLimits

0xe1ca,	// (0x0004659b) cell_vitu_itu_pane

0xe1ca,	// (0x0004659b) cell_vitu_function_pane_ParamLimits

0xe1ca,	// (0x0004659b) cell_vitu_function_pane

0xe17d,	// (0x0004654e) bg_popup_sub_pane_cp08_ParamLimits

0xe17d,	// (0x0004654e) bg_popup_sub_pane_cp08

0xe46b,	// (0x0004683c) field_vitu_entry_pane_t1_ParamLimits

0xe46b,	// (0x0004683c) field_vitu_entry_pane_t1

0x1b77,	// (0x00039f48) field_vitu_entry_pane_t2_ParamLimits

0x1b77,	// (0x00039f48) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x00047b39) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x00047b39) field_vitu_entry_pane_t

0x13bb,	// (0x0003978c) bg_button_pane_cp05_ParamLimits

0x13bb,	// (0x0003978c) bg_button_pane_cp05

0x1b94,	// (0x00039f65) cell_vitu_itu_pane_g1

0xef9e,	// (0x0004736f) cell_vitu_itu_pane_t1_ParamLimits

0xef9e,	// (0x0004736f) cell_vitu_itu_pane_t1

0xef9e,	// (0x0004736f) cell_vitu_itu_pane_t2_ParamLimits

0xef9e,	// (0x0004736f) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x00047b3e) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x00047b3e) cell_vitu_itu_pane_t

0xd5cb,	// (0x0004599c) bg_button_pane_cp07

0xe451,	// (0x00046822) cell_vitu_function_pane_g1

0x4448,	// (0x0003c819) main_calc_pane_g1

0x4139,	// (0x0003c50a) aid_visual_content_pane

0xd5cb,	// (0x0004599c) main_vradio_pane

0xe1f2,	// (0x000465c3) main_vradio_pane_g1_ParamLimits

0xe1f2,	// (0x000465c3) main_vradio_pane_g1

0xe1f2,	// (0x000465c3) main_vradio_pane_g2_ParamLimits

0xe1f2,	// (0x000465c3) main_vradio_pane_g2

0x0001,

0xf774,	// (0x00047b45) main_vradio_pane_g_ParamLimits

0xf774,	// (0x00047b45) main_vradio_pane_g

0xef2e,	// (0x000472ff) main_vradio_pane_t1_ParamLimits

0xef2e,	// (0x000472ff) main_vradio_pane_t1

0xef2e,	// (0x000472ff) main_vradio_pane_t2_ParamLimits

0xef2e,	// (0x000472ff) main_vradio_pane_t2

0xef2e,	// (0x000472ff) main_vradio_pane_t3_ParamLimits

0xef2e,	// (0x000472ff) main_vradio_pane_t3

0x0002,

0xf779,	// (0x00047b4a) main_vradio_pane_t_ParamLimits

0xf779,	// (0x00047b4a) main_vradio_pane_t

0xe1ca,	// (0x0004659b) vradio_rocker_control_pane_ParamLimits

0xe1ca,	// (0x0004659b) vradio_rocker_control_pane

0xe1ca,	// (0x0004659b) vradio_station_info_pane_ParamLimits

0xe1ca,	// (0x0004659b) vradio_station_info_pane

0xe17d,	// (0x0004654e) vradio_frequency_info_pane_ParamLimits

0xe17d,	// (0x0004654e) vradio_frequency_info_pane

0xe451,	// (0x00046822) vradio_station_info_pane_g1

0xef9e,	// (0x0004736f) vradio_station_info_pane_t1_ParamLimits

0xef9e,	// (0x0004736f) vradio_station_info_pane_t1

0xef2e,	// (0x000472ff) vradio_station_info_pane_t2_ParamLimits

0xef2e,	// (0x000472ff) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x00047b51) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x00047b51) vradio_station_info_pane_t

0xd5cb,	// (0x0004599c) vradio_tuning_pane

0x7d80,	// (0x00040151) vradio_rocker_control_pane_g1

0x1bb0,	// (0x00039f81) vradio_rocker_control_pane_g2

0x7d88,	// (0x00040159) vradio_rocker_control_pane_g3

0x7d90,	// (0x00040161) vradio_rocker_control_pane_g4

0x7d98,	// (0x00040169) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x00047b56) vradio_rocker_control_pane_g

0xe451,	// (0x00046822) vradio_frequency_info_pane_g1

0xe46b,	// (0x0004683c) vradio_frequency_info_pane_t1_ParamLimits

0xe46b,	// (0x0004683c) vradio_frequency_info_pane_t1

0x7da0,	// (0x00040171) vradio_tuning_pane_g1

0x7dad,	// (0x0004017e) vradio_tuning_pane_t1

0x4182,	// (0x0003c553) area_side_right_pane_ParamLimits

0x4182,	// (0x0003c553) area_side_right_pane

0x1168,	// (0x00039539) status_small_pane_g1

0x1170,	// (0x00039541) status_small_pane_g2

0x1179,	// (0x0003954a) status_small_pane_g3

0x1182,	// (0x00039553) status_small_pane_g4

0x0003,

0xf551,	// (0x00047922) status_small_pane_g

0x118b,	// (0x0003955c) status_small_pane_t1

0xd5cb,	// (0x0004599c) main_video3_pane

0x1bb8,	// (0x00039f89) cams_zoom_vslider_pane

0x1bc0,	// (0x00039f91) image3_wide_pane_ParamLimits

0x1bc0,	// (0x00039f91) image3_wide_pane

0x1bda,	// (0x00039fab) image3_wide_small_pane

0x1be6,	// (0x00039fb7) main_video3_pane_g1_ParamLimits

0x1be6,	// (0x00039fb7) main_video3_pane_g1

0x1c02,	// (0x00039fd3) main_video3_pane_g2_ParamLimits

0x1c02,	// (0x00039fd3) main_video3_pane_g2

0x0001,

0xf790,	// (0x00047b61) main_video3_pane_g_ParamLimits

0xf790,	// (0x00047b61) main_video3_pane_g

0x1c1e,	// (0x00039fef) main_video3_pane_t1_ParamLimits

0x1c1e,	// (0x00039fef) main_video3_pane_t1

0x1c49,	// (0x0003a01a) main_video3_pane_t2_ParamLimits

0x1c49,	// (0x0003a01a) main_video3_pane_t2

0x1c74,	// (0x0003a045) main_video3_pane_t3_ParamLimits

0x1c74,	// (0x0003a045) main_video3_pane_t3

0x0002,

0xf795,	// (0x00047b66) main_video3_pane_t_ParamLimits

0xf795,	// (0x00047b66) main_video3_pane_t

0x1ca1,	// (0x0003a072) cams_zoom_vslider_pane_g1

0x1caa,	// (0x0003a07b) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x00047b6d) cams_zoom_vslider_pane_g

0x1cb2,	// (0x0003a083) small_slider_vertical_pane

0xe451,	// (0x00046822) small_slider_vertical_pane_g1

0xe451,	// (0x00046822) small_slider_vertical_pane_g2

0x1cba,	// (0x0003a08b) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x00047b72) small_slider_vertical_pane_g

0xd5cb,	// (0x0004599c) main_hwr_training_pane

0x1cc3,	// (0x0003a094) hwr_training_instruct_pane_ParamLimits

0x1cc3,	// (0x0003a094) hwr_training_instruct_pane

0x7dbc,	// (0x0004018d) hwr_training_navi_pane_ParamLimits

0x7dbc,	// (0x0004018d) hwr_training_navi_pane

0x7dd6,	// (0x000401a7) hwr_training_write_pane_ParamLimits

0x7dd6,	// (0x000401a7) hwr_training_write_pane

0xd5cb,	// (0x0004599c) bg_frame_shadow_pane

0x1cfa,	// (0x0003a0cb) hwr_training_write_pane_g1

0x1d02,	// (0x0003a0d3) hwr_training_write_pane_g2

0x1d0a,	// (0x0003a0db) hwr_training_write_pane_g3

0x1d12,	// (0x0003a0e3) hwr_training_write_pane_g4

0x1d1a,	// (0x0003a0eb) hwr_training_write_pane_g5

0x1d22,	// (0x0003a0f3) hwr_training_write_pane_g6

0x1d2a,	// (0x0003a0fb) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x00047b79) hwr_training_write_pane_g

0x7e0e,	// (0x000401df) hwr_training_navi_pane_g1_ParamLimits

0x7e0e,	// (0x000401df) hwr_training_navi_pane_g1

0x7e20,	// (0x000401f1) hwr_training_navi_pane_g2_ParamLimits

0x7e20,	// (0x000401f1) hwr_training_navi_pane_g2

0x7e32,	// (0x00040203) hwr_training_navi_pane_g3_ParamLimits

0x7e32,	// (0x00040203) hwr_training_navi_pane_g3

0x7e42,	// (0x00040213) hwr_training_navi_pane_g4_ParamLimits

0x7e42,	// (0x00040213) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x00047b88) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x00047b88) hwr_training_navi_pane_g

0x7e5c,	// (0x0004022d) hwr_training_navi_pane_t1

0x7e6a,	// (0x0004023b) list_single_hwr_training_instruct_pane_ParamLimits

0x7e6a,	// (0x0004023b) list_single_hwr_training_instruct_pane

0x1d32,	// (0x0003a103) list_single_hwr_training_instruct_pane_t1

0x1515,	// (0x000398e6) bg_frame_shadow_pane_g1

0x1d41,	// (0x0003a112) bg_frame_shadow_pane_g2

0x1d49,	// (0x0003a11a) bg_frame_shadow_pane_g3

0x1d51,	// (0x0003a122) bg_frame_shadow_pane_g4

0x1d59,	// (0x0003a12a) bg_frame_shadow_pane_g5

0x1d61,	// (0x0003a132) bg_frame_shadow_pane_g6

0x1d69,	// (0x0003a13a) bg_frame_shadow_pane_g7

0xe305,	// (0x000466d6) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x00047b93) bg_frame_shadow_pane_g

0xd5cb,	// (0x0004599c) main_video_tele_dialer_pane

0x7e8f,	// (0x00040260) aid_size_cell_video_keypad_ParamLimits

0x7e8f,	// (0x00040260) aid_size_cell_video_keypad

0x7e9f,	// (0x00040270) grid_video_dialer_keypad_pane_ParamLimits

0x7e9f,	// (0x00040270) grid_video_dialer_keypad_pane

0x7ed3,	// (0x000402a4) video_down_pane_cp_ParamLimits

0x7ed3,	// (0x000402a4) video_down_pane_cp

0x7efd,	// (0x000402ce) cell_video_dialer_keypad_pane_ParamLimits

0x7efd,	// (0x000402ce) cell_video_dialer_keypad_pane

0x1d71,	// (0x0003a142) bg_button_pane_cp08_ParamLimits

0x1d71,	// (0x0003a142) bg_button_pane_cp08

0x7f12,	// (0x000402e3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f12,	// (0x000402e3) cell_video_dialer_keypad_pane_g1

0x78f7,	// (0x0003fcc8) mup3_rocker2_pane_ParamLimits

0x78f7,	// (0x0003fcc8) mup3_rocker2_pane

0xe451,	// (0x00046822) mup3_rocker2_pane_g1

0x6dd8,	// (0x0003f1a9) main_dialer2_pane

0xd5cb,	// (0x0004599c) main_mp4_pane

0x7f67,	// (0x00040338) main_mp4_pane_g1_ParamLimits

0x7f67,	// (0x00040338) main_mp4_pane_g1

0x7f75,	// (0x00040346) main_mp4_pane_g2_ParamLimits

0x7f75,	// (0x00040346) main_mp4_pane_g2

0x7f83,	// (0x00040354) main_mp4_pane_g3_ParamLimits

0x7f83,	// (0x00040354) main_mp4_pane_g3

0x7fc8,	// (0x00040399) main_mp4_pane_g4_ParamLimits

0x7fc8,	// (0x00040399) main_mp4_pane_g4

0x7ff6,	// (0x000403c7) main_mp4_pane_g5_ParamLimits

0x7ff6,	// (0x000403c7) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x00047bb3) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x00047bb3) main_mp4_pane_g

0x806a,	// (0x0004043b) main_mp4_pane_t1_ParamLimits

0x806a,	// (0x0004043b) main_mp4_pane_t1

0x80c6,	// (0x00040497) main_mp4_pane_t2_ParamLimits

0x80c6,	// (0x00040497) main_mp4_pane_t2

0x1d7d,	// (0x0003a14e) main_mp4_pane_t3_ParamLimits

0x1d7d,	// (0x0003a14e) main_mp4_pane_t3

0x8118,	// (0x000404e9) main_mp4_pane_t4_ParamLimits

0x8118,	// (0x000404e9) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x00047bc4) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x00047bc4) main_mp4_pane_t

0x815c,	// (0x0004052d) mp4_progress_pane_ParamLimits

0x815c,	// (0x0004052d) mp4_progress_pane

0x81a6,	// (0x00040577) mp4_rocker_pane_ParamLimits

0x81a6,	// (0x00040577) mp4_rocker_pane

0x1dab,	// (0x0003a17c) mp4_progress_pane_t1

0x1dc4,	// (0x0003a195) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x00047bcd) mp4_progress_pane_t

0x1ddd,	// (0x0003a1ae) mup_progress_pane_cp04

0xe451,	// (0x00046822) mp4_rocker_pane_g1

0x81c6,	// (0x00040597) aid_cell_size_keypad2_ParamLimits

0x81c6,	// (0x00040597) aid_cell_size_keypad2

0x81d6,	// (0x000405a7) dialer2_ne_pane_ParamLimits

0x81d6,	// (0x000405a7) dialer2_ne_pane

0x81e4,	// (0x000405b5) grid_dialer2_keypad_pane_ParamLimits

0x81e4,	// (0x000405b5) grid_dialer2_keypad_pane

0x1982,	// (0x00039d53) bg_popup_call_pane_cp07_ParamLimits

0x1982,	// (0x00039d53) bg_popup_call_pane_cp07

0x81f4,	// (0x000405c5) dialer2_ne_pane_t1_ParamLimits

0x81f4,	// (0x000405c5) dialer2_ne_pane_t1

0x8219,	// (0x000405ea) cell_dialer2_keypad_pane_ParamLimits

0x8219,	// (0x000405ea) cell_dialer2_keypad_pane

0x1e02,	// (0x0003a1d3) bg_button_pane_pane_cp04_ParamLimits

0x1e02,	// (0x0003a1d3) bg_button_pane_pane_cp04

0x822e,	// (0x000405ff) cell_dialer2_keypad_pane_g1_ParamLimits

0x822e,	// (0x000405ff) cell_dialer2_keypad_pane_g1

0x4dfa,	// (0x0003d1cb) aid_placing_vt_set_content_ParamLimits

0x4dfa,	// (0x0003d1cb) aid_placing_vt_set_content

0x4e26,	// (0x0003d1f7) aid_placing_vt_set_title_ParamLimits

0x4e26,	// (0x0003d1f7) aid_placing_vt_set_title

0xd5cb,	// (0x0004599c) main_image3_pane

0x82c8,	// (0x00040699) area_side_right_pane_cp01_ParamLimits

0x82c8,	// (0x00040699) area_side_right_pane_cp01

0xe200,	// (0x000465d1) main_image3_pane_g1_ParamLimits

0xe200,	// (0x000465d1) main_image3_pane_g1

0x82f5,	// (0x000406c6) main_image3_pane_g2_ParamLimits

0x82f5,	// (0x000406c6) main_image3_pane_g2

0x830e,	// (0x000406df) main_image3_pane_g3_ParamLimits

0x830e,	// (0x000406df) main_image3_pane_g3

0x8327,	// (0x000406f8) main_image3_pane_g4_ParamLimits

0x8327,	// (0x000406f8) main_image3_pane_g4

0x0003,

0xf80b,	// (0x00047bdc) main_image3_pane_g_ParamLimits

0xf80b,	// (0x00047bdc) main_image3_pane_g

0x8340,	// (0x00040711) main_image3_pane_t1_ParamLimits

0x8340,	// (0x00040711) main_image3_pane_t1

0x8365,	// (0x00040736) main_image3_pane_t2_ParamLimits

0x8365,	// (0x00040736) main_image3_pane_t2

0x8384,	// (0x00040755) main_image3_pane_t3_ParamLimits

0x8384,	// (0x00040755) main_image3_pane_t3

0x0003,

0xf814,	// (0x00047be5) main_image3_pane_t_ParamLimits

0xf814,	// (0x00047be5) main_image3_pane_t

0xe1ca,	// (0x0004659b) grid_sctrl_middle_pane_cp01_ParamLimits

0xe1ca,	// (0x0004659b) grid_sctrl_middle_pane_cp01

0x83e5,	// (0x000407b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x83e5,	// (0x000407b6) cell_sctrl_middle_pane_cp01

0x83f6,	// (0x000407c7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x83f6,	// (0x000407c7) cell_sctrl_middle_pane_cp01_g1

0xd5cb,	// (0x0004599c) main_call4_pane

0x8403,	// (0x000407d4) aid_size_button_call4_ParamLimits

0x8403,	// (0x000407d4) aid_size_button_call4

0x8439,	// (0x0004080a) call4_windows_pane_ParamLimits

0x8439,	// (0x0004080a) call4_windows_pane

0x844e,	// (0x0004081f) grid_call4_button_pane_ParamLimits

0x844e,	// (0x0004081f) grid_call4_button_pane

0x847c,	// (0x0004084d) call4_windows_conf_pane

0x8493,	// (0x00040864) popup_call4_audio_first_window_ParamLimits

0x8493,	// (0x00040864) popup_call4_audio_first_window

0x84e3,	// (0x000408b4) popup_call4_audio_second_window_ParamLimits

0x84e3,	// (0x000408b4) popup_call4_audio_second_window

0x84fc,	// (0x000408cd) popup_call4_audio_wait_window_ParamLimits

0x84fc,	// (0x000408cd) popup_call4_audio_wait_window

0x850a,	// (0x000408db) cell_call4_button_pane_ParamLimits

0x850a,	// (0x000408db) cell_call4_button_pane

0x852d,	// (0x000408fe) bg_button_pane_cp09_ParamLimits

0x852d,	// (0x000408fe) bg_button_pane_cp09

0x8539,	// (0x0004090a) cell_call4_button_pane_g1_ParamLimits

0x8539,	// (0x0004090a) cell_call4_button_pane_g1

0x8546,	// (0x00040917) cell_call4_button_pane_t1_ParamLimits

0x8546,	// (0x00040917) cell_call4_button_pane_t1

0x1e16,	// (0x0003a1e7) popup_call4_audio_conf_window_ParamLimits

0x1e16,	// (0x0003a1e7) popup_call4_audio_conf_window

0x792a,	// (0x0003fcfb) mup3_progress_pane_t1_ParamLimits

0x7949,	// (0x0003fd1a) mup3_progress_pane_t2_ParamLimits

0x186d,	// (0x00039c3e) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x00047aba) mup3_progress_pane_t_ParamLimits

0x188a,	// (0x00039c5b) mup_progress_pane_cp03_ParamLimits

0x7d78,	// (0x00040149) mup3_control_keys_pane_g4_copy1

0x818a,	// (0x0004055b) mp4_rocker2_pane_ParamLimits

0x818a,	// (0x0004055b) mp4_rocker2_pane

0x1e32,	// (0x0003a203) mp4_rocker2_pane_g1

0x1e2a,	// (0x0003a1fb) mp4_rocker2_pane_g2

0x858a,	// (0x0004095b) mp4_rocker2_pane_g3

0x8592,	// (0x00040963) mp4_rocker2_pane_g4

0x859a,	// (0x0004096b) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x00047bee) mp4_rocker2_pane_g

0xd5cb,	// (0x0004599c) main_camera4_pane

0xd5cb,	// (0x0004599c) main_video4_pane

0x7eaf,	// (0x00040280) main_video_tele_dialer_pane_t1_ParamLimits

0x7eaf,	// (0x00040280) main_video_tele_dialer_pane_t1

0x7ec1,	// (0x00040292) main_video_tele_dialer_pane_t2_ParamLimits

0x7ec1,	// (0x00040292) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x00047ba4) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x00047ba4) main_video_tele_dialer_pane_t

0x85ba,	// (0x0004098b) cam4_autofocus_pane_ParamLimits

0x85ba,	// (0x0004098b) cam4_autofocus_pane

0x85d4,	// (0x000409a5) cam4_image_uncrop_pane_ParamLimits

0x85d4,	// (0x000409a5) cam4_image_uncrop_pane

0x85eb,	// (0x000409bc) cam4_indicators_pane_ParamLimits

0x85eb,	// (0x000409bc) cam4_indicators_pane

0x8607,	// (0x000409d8) main_camera4_pane_g1_ParamLimits

0x8607,	// (0x000409d8) main_camera4_pane_g1

0x8613,	// (0x000409e4) main_camera4_pane_g2_ParamLimits

0x8613,	// (0x000409e4) main_camera4_pane_g2

0x8613,	// (0x000409e4) main_camera4_pane_g3_ParamLimits

0x8613,	// (0x000409e4) main_camera4_pane_g3

0x861f,	// (0x000409f0) main_camera4_pane_g4_ParamLimits

0x861f,	// (0x000409f0) main_camera4_pane_g4

0x862b,	// (0x000409fc) main_camera4_pane_g5_ParamLimits

0x862b,	// (0x000409fc) main_camera4_pane_g5

0x0005,

0xf828,	// (0x00047bf9) main_camera4_pane_g_ParamLimits

0xf828,	// (0x00047bf9) main_camera4_pane_g

0x8645,	// (0x00040a16) main_camera4_pane_t1_ParamLimits

0x8645,	// (0x00040a16) main_camera4_pane_t1

0xe1e4,	// (0x000465b5) bg_tb_trans_pane_cp06

0x8695,	// (0x00040a66) cam4_indicators_pane_g1

0x86a6,	// (0x00040a77) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x00047c14) cam4_indicators_pane_g

0x86c4,	// (0x00040a95) cam4_indicators_pane_t1

0x86ee,	// (0x00040abf) main_video4_pane_g1_ParamLimits

0x86ee,	// (0x00040abf) main_video4_pane_g1

0x86fa,	// (0x00040acb) main_video4_pane_g2_ParamLimits

0x86fa,	// (0x00040acb) main_video4_pane_g2

0x8706,	// (0x00040ad7) main_video4_pane_g3_ParamLimits

0x8706,	// (0x00040ad7) main_video4_pane_g3

0x8712,	// (0x00040ae3) main_video4_pane_g4_ParamLimits

0x8712,	// (0x00040ae3) main_video4_pane_g4

0x0004,

0xf84a,	// (0x00047c1b) main_video4_pane_g_ParamLimits

0xf84a,	// (0x00047c1b) main_video4_pane_g

0x8732,	// (0x00040b03) vid4_indicators_pane_ParamLimits

0x8732,	// (0x00040b03) vid4_indicators_pane

0x8751,	// (0x00040b22) video4_image_uncrop_cif_pane_ParamLimits

0x8751,	// (0x00040b22) video4_image_uncrop_cif_pane

0x8760,	// (0x00040b31) video4_image_uncrop_nhd_pane_ParamLimits

0x8760,	// (0x00040b31) video4_image_uncrop_nhd_pane

0x85d4,	// (0x000409a5) video4_image_uncrop_vga_pane_ParamLimits

0x85d4,	// (0x000409a5) video4_image_uncrop_vga_pane

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp07

0x8777,	// (0x00040b48) vid4_indicators_pane_g1

0x878b,	// (0x00040b5c) vid4_indicators_pane_g2

0x879f,	// (0x00040b70) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x00047c26) vid4_indicators_pane_g

0x87ce,	// (0x00040b9f) vid4_indicators_pane_t1

0x87e5,	// (0x00040bb6) cam4_autofocus_pane_g1

0x87ed,	// (0x00040bbe) cam4_autofocus_pane_g2

0x87f5,	// (0x00040bc6) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x00047c31) cam4_autofocus_pane_g

0x87fd,	// (0x00040bce) cam4_autofocus_pane_g3_copy1

0x7ee1,	// (0x000402b2) video_down_pane_cp_t1

0x7eef,	// (0x000402c0) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x00047ba9) video_down_pane_cp_t

0xe1ca,	// (0x0004659b) popup_vitu2_window_ParamLimits

0xe1ca,	// (0x0004659b) popup_vitu2_window

0x8805,	// (0x00040bd6) aid_size_cell2_itu2_ParamLimits

0x8805,	// (0x00040bd6) aid_size_cell2_itu2

0x8827,	// (0x00040bf8) aid_size_cell_itu2_ParamLimits

0x8827,	// (0x00040bf8) aid_size_cell_itu2

0x1982,	// (0x00039d53) bg_popup_window_pane_cp09_ParamLimits

0x1982,	// (0x00039d53) bg_popup_window_pane_cp09

0x886b,	// (0x00040c3c) field_vitu2_entry_pane_ParamLimits

0x886b,	// (0x00040c3c) field_vitu2_entry_pane

0x888b,	// (0x00040c5c) grid_vitu2_function_pane_ParamLimits

0x888b,	// (0x00040c5c) grid_vitu2_function_pane

0x88cf,	// (0x00040ca0) grid_vitu2_itu_pane_ParamLimits

0x88cf,	// (0x00040ca0) grid_vitu2_itu_pane

0x8947,	// (0x00040d18) cell_vitu2_itu_pane_ParamLimits

0x8947,	// (0x00040d18) cell_vitu2_itu_pane

0x8960,	// (0x00040d31) cell_vitu2_function_pane_ParamLimits

0x8960,	// (0x00040d31) cell_vitu2_function_pane

0x1e3a,	// (0x0003a20b) bg_popup_call_pane_cp08_ParamLimits

0x1e3a,	// (0x0003a20b) bg_popup_call_pane_cp08

0x1e51,	// (0x0003a222) field_vitu2_entry_pane_g1

0x1e5d,	// (0x0003a22e) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x00047c38) field_vitu2_entry_pane_g

0x34e4,	// (0x0003b8b5) field_vitu2_entry_pane_t1_ParamLimits

0x34e4,	// (0x0003b8b5) field_vitu2_entry_pane_t1

0x3518,	// (0x0003b8e9) field_vitu2_entry_pane_t2_ParamLimits

0x3518,	// (0x0003b8e9) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x00047c3f) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x00047c3f) field_vitu2_entry_pane_t

0x7106,	// (0x0003f4d7) bg_button_pane_cp010_ParamLimits

0x7106,	// (0x0003f4d7) bg_button_pane_cp010

0x89a1,	// (0x00040d72) cell_vitu2_itu_pane_g1

0x89c7,	// (0x00040d98) cell_vitu2_itu_pane_t1_ParamLimits

0x89c7,	// (0x00040d98) cell_vitu2_itu_pane_t1

0x3535,	// (0x0003b906) cell_vitu2_itu_pane_t2_ParamLimits

0x3535,	// (0x0003b906) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x00047c49) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x00047c49) cell_vitu2_itu_pane_t

0xe17d,	// (0x0004654e) bg_button_pane_cp011

0x8a13,	// (0x00040de4) cell_vitu2_function_pane_g1

0xd5cb,	// (0x0004599c) main_myfav_hc_pane

0x83c6,	// (0x00040797) popup_image3_note_pane_ParamLimits

0x83c6,	// (0x00040797) popup_image3_note_pane

0x83d4,	// (0x000407a5) popup_image3_tool_bar_pane_ParamLimits

0x83d4,	// (0x000407a5) popup_image3_tool_bar_pane

0x35ab,	// (0x0003b97c) cell_vitu2_itu_pane_t3_ParamLimits

0x35ab,	// (0x0003b97c) cell_vitu2_itu_pane_t3

0xd5cb,	// (0x0004599c) bg_popup_trans_pane

0x1e8e,	// (0x0003a25f) grid_image3_tool_bar_pane

0x1e98,	// (0x0003a269) bg_popup_trans_pane_g1

0xe676,	// (0x00046a47) bg_popup_trans_pane_g2

0x1ea0,	// (0x0003a271) bg_popup_trans_pane_g3

0x1ea8,	// (0x0003a279) bg_popup_trans_pane_g4

0x1eb0,	// (0x0003a281) bg_popup_trans_pane_g5

0x1eb8,	// (0x0003a289) bg_popup_trans_pane_g6

0x1ec0,	// (0x0003a291) bg_popup_trans_pane_g7

0x1ec8,	// (0x0003a299) bg_popup_trans_pane_g8

0xe656,	// (0x00046a27) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x00047c50) bg_popup_trans_pane_g

0x1ed0,	// (0x0003a2a1) cell_image3_tool_bar_pane_ParamLimits

0x1ed0,	// (0x0003a2a1) cell_image3_tool_bar_pane

0xe451,	// (0x00046822) cell_image3_tool_bar_pane_g1

0xd5cb,	// (0x0004599c) bg_popup_trans_pane_cp1

0x1ee4,	// (0x0003a2b5) popup_image3_note_pane_t1

0x1ef2,	// (0x0003a2c3) popup_image3_note_pane_t2

0x1f00,	// (0x0003a2d1) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x00047c63) popup_image3_note_pane_t

0x1f0e,	// (0x0003a2df) popup_image3_note_pane_t3_copy1

0x8a27,	// (0x00040df8) bg_myfav_hc_instruction_pane_ParamLimits

0x8a27,	// (0x00040df8) bg_myfav_hc_instruction_pane

0x8a3f,	// (0x00040e10) cell_myfav_contact_pane_ParamLimits

0x8a3f,	// (0x00040e10) cell_myfav_contact_pane

0x8a59,	// (0x00040e2a) cell_myfav_contact_pane_cp1_ParamLimits

0x8a59,	// (0x00040e2a) cell_myfav_contact_pane_cp1

0x8a71,	// (0x00040e42) cell_myfav_contact_pane_cp2_ParamLimits

0x8a71,	// (0x00040e42) cell_myfav_contact_pane_cp2

0x8a89,	// (0x00040e5a) cell_myfav_contact_pane_cp3_ParamLimits

0x8a89,	// (0x00040e5a) cell_myfav_contact_pane_cp3

0x8aa0,	// (0x00040e71) cell_myfav_contact_pane_cp4_ParamLimits

0x8aa0,	// (0x00040e71) cell_myfav_contact_pane_cp4

0x8ab6,	// (0x00040e87) cell_myfav_contact_pane_cp5_ParamLimits

0x8ab6,	// (0x00040e87) cell_myfav_contact_pane_cp5

0x8aca,	// (0x00040e9b) cell_myfav_contact_pane_cp6_ParamLimits

0x8aca,	// (0x00040e9b) cell_myfav_contact_pane_cp6

0x8ade,	// (0x00040eaf) cell_myfav_contact_pane_cp7_ParamLimits

0x8ade,	// (0x00040eaf) cell_myfav_contact_pane_cp7

0x1f1c,	// (0x0003a2ed) listscroll_gen_pane_cp05

0x8af6,	// (0x00040ec7) main_myfav_hc_pane_g1_ParamLimits

0x8af6,	// (0x00040ec7) main_myfav_hc_pane_g1

0x8b0c,	// (0x00040edd) main_myfav_hc_pane_g2_ParamLimits

0x8b0c,	// (0x00040edd) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x00047c6a) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x00047c6a) main_myfav_hc_pane_g

0x8b3a,	// (0x00040f0b) main_myfav_hc_pane_t1_ParamLimits

0x8b3a,	// (0x00040f0b) main_myfav_hc_pane_t1

0x1f25,	// (0x0003a2f6) main_myfav_hc_pane_t2_ParamLimits

0x1f25,	// (0x0003a2f6) main_myfav_hc_pane_t2

0x1f37,	// (0x0003a308) main_myfav_hc_pane_t3_ParamLimits

0x1f37,	// (0x0003a308) main_myfav_hc_pane_t3

0x8b51,	// (0x00040f22) main_myfav_hc_pane_t4_ParamLimits

0x8b51,	// (0x00040f22) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x00047c71) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x00047c71) main_myfav_hc_pane_t

0xe451,	// (0x00046822) bg_myfav_hc_instruction_pane_g1

0x1f49,	// (0x0003a31a) cell_myfav_contact_pane_g1_ParamLimits

0x1f49,	// (0x0003a31a) cell_myfav_contact_pane_g1

0x1f49,	// (0x0003a31a) cell_myfav_contact_pane_g2_ParamLimits

0x1f49,	// (0x0003a31a) cell_myfav_contact_pane_g2

0x1f55,	// (0x0003a326) cell_myfav_contact_pane_g3_ParamLimits

0x1f55,	// (0x0003a326) cell_myfav_contact_pane_g3

0xe1f2,	// (0x000465c3) cell_myfav_contact_pane_g4_ParamLimits

0xe1f2,	// (0x000465c3) cell_myfav_contact_pane_g4

0x1f62,	// (0x0003a333) cell_myfav_contact_pane_g5_ParamLimits

0x1f62,	// (0x0003a333) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x00047c7c) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x00047c7c) cell_myfav_contact_pane_g

0x8b22,	// (0x00040ef3) main_myfav_hc_pane_g3_ParamLimits

0x8b22,	// (0x00040ef3) main_myfav_hc_pane_g3

0x32c5,	// (0x0003b696) popup_adpt_find_window

0x8b7b,	// (0x00040f4c) afind_page_pane_ParamLimits

0x8b7b,	// (0x00040f4c) afind_page_pane

0x8b88,	// (0x00040f59) aid_size_cell_afind_ParamLimits

0x8b88,	// (0x00040f59) aid_size_cell_afind

0x8ba2,	// (0x00040f73) bg_popup_sub_pane_cp09_ParamLimits

0x8ba2,	// (0x00040f73) bg_popup_sub_pane_cp09

0x8baf,	// (0x00040f80) find_pane_cp01_ParamLimits

0x8baf,	// (0x00040f80) find_pane_cp01

0x1f6e,	// (0x0003a33f) grid_afind_control_pane_ParamLimits

0x1f6e,	// (0x0003a33f) grid_afind_control_pane

0x8bbc,	// (0x00040f8d) grid_afind_pane_ParamLimits

0x8bbc,	// (0x00040f8d) grid_afind_pane

0x8bd8,	// (0x00040fa9) cell_afind_pane_ParamLimits

0x8bd8,	// (0x00040fa9) cell_afind_pane

0xe451,	// (0x00046822) afind_page_pane_g1

0x8c20,	// (0x00040ff1) afind_page_pane_g2

0x8c28,	// (0x00040ff9) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x00047c87) afind_page_pane_g

0x8c30,	// (0x00041001) afind_page_pane_t1

0x1f94,	// (0x0003a365) cell_afind_grid_control_pane_ParamLimits

0x1f94,	// (0x0003a365) cell_afind_grid_control_pane

0x1e02,	// (0x0003a1d3) bg_button_pane_cp69_ParamLimits

0x1e02,	// (0x0003a1d3) bg_button_pane_cp69

0x8c3e,	// (0x0004100f) cell_afind_pane_g1_ParamLimits

0x8c3e,	// (0x0004100f) cell_afind_pane_g1

0x8c4b,	// (0x0004101c) cell_afind_pane_t1_ParamLimits

0x8c4b,	// (0x0004101c) cell_afind_pane_t1

0xe45b,	// (0x0004682c) bg_button_pane_cp72

0x1fa3,	// (0x0003a374) cell_afind_grid_control_pane_g1

0x690f,	// (0x0003ece0) aid_image_placing_area_ParamLimits

0x690f,	// (0x0003ece0) aid_image_placing_area

0xe1e4,	// (0x000465b5) field_vitu_entry_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) field_vitu_entry_pane_g1

0xe1e4,	// (0x000465b5) field_vitu_entry_pane_g2_ParamLimits

0xe1e4,	// (0x000465b5) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x00047592) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x00047592) field_vitu_entry_pane_g

0x1b94,	// (0x00039f65) cell_vitu_itu_pane_g1_ParamLimits

0x1b77,	// (0x00039f48) cell_vitu_itu_pane_t3_ParamLimits

0x1b77,	// (0x00039f48) cell_vitu_itu_pane_t3

0x1dab,	// (0x0003a17c) mp4_progress_pane_t1_ParamLimits

0x1dc4,	// (0x0003a195) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x00047bcd) mp4_progress_pane_t_ParamLimits

0x1ddd,	// (0x0003a1ae) mup_progress_pane_cp04_ParamLimits

0x8b65,	// (0x00040f36) main_myfav_hc_pane_t5_ParamLimits

0x8b65,	// (0x00040f36) main_myfav_hc_pane_t5

0x4145,	// (0x0003c516) aid_zoom_text_primary

0x32c5,	// (0x0003b696) popup_adpt_find_window_ParamLimits

0xe17d,	// (0x0004654e) main_cam_set_pane

0x85f9,	// (0x000409ca) cam4_zoom_pane_ParamLimits

0x85f9,	// (0x000409ca) cam4_zoom_pane

0x8c5d,	// (0x0004102e) main_cam_set_pane_g1_ParamLimits

0x8c5d,	// (0x0004102e) main_cam_set_pane_g1

0x8c6b,	// (0x0004103c) main_cam_set_pane_g2_ParamLimits

0x8c6b,	// (0x0004103c) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x00047c8e) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x00047c8e) main_cam_set_pane_g

0x8c77,	// (0x00041048) main_cam_set_pane_t1_ParamLimits

0x8c77,	// (0x00041048) main_cam_set_pane_t1

0x8c93,	// (0x00041064) main_cset_listscroll_pane_ParamLimits

0x8c93,	// (0x00041064) main_cset_listscroll_pane

0x8cc5,	// (0x00041096) main_cset_slider_pane_ParamLimits

0x8cc5,	// (0x00041096) main_cset_slider_pane

0x1fb4,	// (0x0003a385) main_cset_list_pane_ParamLimits

0x1fb4,	// (0x0003a385) main_cset_list_pane

0x1fc4,	// (0x0003a395) scroll_pane_cp028

0x8ce4,	// (0x000410b5) aid_area_touch_slider

0x8d00,	// (0x000410d1) cset_slider_pane

0x8d23,	// (0x000410f4) main_cset_slider_pane_g1

0x8d38,	// (0x00041109) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x00047c93) main_cset_slider_pane_g

0x1ffd,	// (0x0003a3ce) main_cset_slider_pane_t1

0x8dfa,	// (0x000411cb) main_cset_slider_pane_t2

0x8e14,	// (0x000411e5) main_cset_slider_pane_t3

0x8e2e,	// (0x000411ff) main_cset_slider_pane_t4

0x8e48,	// (0x00041219) main_cset_slider_pane_t5

0x8e66,	// (0x00041237) main_cset_slider_pane_t6

0x8e7d,	// (0x0004124e) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x00047cb8) main_cset_slider_pane_t

0x8f89,	// (0x0004135a) cset_list_set_pane_ParamLimits

0x8f89,	// (0x0004135a) cset_list_set_pane

0x2097,	// (0x0003a468) aid_position_infowindow_above

0x209f,	// (0x0003a470) aid_position_infowindow_below

0x35fd,	// (0x0003b9ce) cset_list_set_pane_g1_ParamLimits

0x35fd,	// (0x0003b9ce) cset_list_set_pane_g1

0x3609,	// (0x0003b9da) cset_list_set_pane_g3_ParamLimits

0x3609,	// (0x0003b9da) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x00047cd7) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x00047cd7) cset_list_set_pane_g

0x3618,	// (0x0003b9e9) cset_list_set_pane_t1_ParamLimits

0x3618,	// (0x0003b9e9) cset_list_set_pane_t1

0xe17d,	// (0x0004654e) list_highlight_pane_cp021_ParamLimits

0xe17d,	// (0x0004654e) list_highlight_pane_cp021

0xefec,	// (0x000473bd) cset_slider_pane_g1

0xeffe,	// (0x000473cf) cset_slider_pane_g2

0xeff5,	// (0x000473c6) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x00047cdc) cset_slider_pane_g

0x8f9f,	// (0x00041370) aid_area_touch_cam4_zoom

0x8fa7,	// (0x00041378) cam4_zoom_cont_pane

0x8faf,	// (0x00041380) cam4_zoom_pane_g1

0x8fb7,	// (0x00041388) cam4_zoom_pane_g2

0x8fbf,	// (0x00041390) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x00047ce3) cam4_zoom_pane_g

0x2428,	// (0x0003a7f9) cam4_zoom_cont_pane_g1

0x2431,	// (0x0003a802) cam4_zoom_cont_pane_g2

0x243a,	// (0x0003a80b) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x00047cea) cam4_zoom_cont_pane_g

0x841d,	// (0x000407ee) call4_image_pane_ParamLimits

0x841d,	// (0x000407ee) call4_image_pane

0x847c,	// (0x0004084d) call4_windows_conf_pane_ParamLimits

0x84c1,	// (0x00040892) popup_call4_audio_in_window_ParamLimits

0x84c1,	// (0x00040892) popup_call4_audio_in_window

0xd5cb,	// (0x0004599c) bg_popup_call2_act_pane_cp02

0x1e0e,	// (0x0003a1df) call4_list_conf_pane

0xe451,	// (0x00046822) call4_image_pane_g1

0xe451,	// (0x00046822) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0004776e) call4_image_pane_g

0x20d7,	// (0x0003a4a8) list_single_graphic_popup_conf4_pane_ParamLimits

0x20d7,	// (0x0003a4a8) list_single_graphic_popup_conf4_pane

0xd5cb,	// (0x0004599c) list_highlight_pane_cp022

0x20ea,	// (0x0003a4bb) list_single_graphic_popup_conf4_pane_g1

0xeb9c,	// (0x00046f6d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x00047cf1) list_single_graphic_popup_conf4_pane_g

0x20f2,	// (0x0003a4c3) list_single_graphic_popup_conf4_pane_t1

0x4f8a,	// (0x0003d35b) popup_vtel_slider_window_ParamLimits

0x4f8a,	// (0x0003d35b) popup_vtel_slider_window

0x1df0,	// (0x0003a1c1) dialer2_ne_pane_t2_ParamLimits

0x1df0,	// (0x0003a1c1) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x00047bd2) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x00047bd2) dialer2_ne_pane_t

0xe17d,	// (0x0004654e) bg_popup_sub_pane_cp010_ParamLimits

0xe17d,	// (0x0004654e) bg_popup_sub_pane_cp010

0x8fc7,	// (0x00041398) popup_vtel_slider_window_g1_ParamLimits

0x8fc7,	// (0x00041398) popup_vtel_slider_window_g1

0x8fd3,	// (0x000413a4) popup_vtel_slider_window_g2_ParamLimits

0x8fd3,	// (0x000413a4) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x00047cf6) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x00047cf6) popup_vtel_slider_window_g

0x901b,	// (0x000413ec) vtel_slider_pane_ParamLimits

0x901b,	// (0x000413ec) vtel_slider_pane

0x902a,	// (0x000413fb) vtel_slider_pane_g1_ParamLimits

0x902a,	// (0x000413fb) vtel_slider_pane_g1

0x9037,	// (0x00041408) vtel_slider_pane_g2_ParamLimits

0x9037,	// (0x00041408) vtel_slider_pane_g2

0x9044,	// (0x00041415) vtel_slider_pane_g3_ParamLimits

0x9044,	// (0x00041415) vtel_slider_pane_g3

0x902a,	// (0x000413fb) vtel_slider_pane_g4_ParamLimits

0x902a,	// (0x000413fb) vtel_slider_pane_g4

0x9051,	// (0x00041422) vtel_slider_pane_g5_ParamLimits

0x9051,	// (0x00041422) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x00047cff) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x00047cff) vtel_slider_pane_g

0xe17d,	// (0x0004654e) main_gallery2_pane

0x884d,	// (0x00040c1e) aid_size_row_itut2_dropdow_list_ParamLimits

0x884d,	// (0x00040c1e) aid_size_row_itut2_dropdow_list

0x88ad,	// (0x00040c7e) grid_vitu2_function_top_pane_ParamLimits

0x88ad,	// (0x00040c7e) grid_vitu2_function_top_pane

0x8907,	// (0x00040cd8) popup_vitu2_dropdown_list_window_ParamLimits

0x8907,	// (0x00040cd8) popup_vitu2_dropdown_list_window

0x8925,	// (0x00040cf6) popup_vitu2_match_list_window

0x905e,	// (0x0004142f) cell_vitu2_function_top_pane_ParamLimits

0x905e,	// (0x0004142f) cell_vitu2_function_top_pane

0x9078,	// (0x00041449) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9078,	// (0x00041449) cell_vitu2_function_top_pane_cp01

0x9094,	// (0x00041465) cell_vitu2_function_top_wide_pane_ParamLimits

0x9094,	// (0x00041465) cell_vitu2_function_top_wide_pane

0xe17d,	// (0x0004654e) bg_button_pane_cp012

0x90b2,	// (0x00041483) cell_vitu2_function_top_pane_g1

0x90c6,	// (0x00041497) bg_button_pane_cp013_ParamLimits

0x90c6,	// (0x00041497) bg_button_pane_cp013

0x90e2,	// (0x000414b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x90e2,	// (0x000414b3) cell_vitu2_function_top_wide_pane_g1

0xe1ca,	// (0x0004659b) bg_popup_sub_pane_cp20

0x90fa,	// (0x000414cb) list_vitu2_match_list_pane

0x1e98,	// (0x0003a269) bg_popup_sub_pane_cp20_g1

0x1ea0,	// (0x0003a271) bg_popup_sub_pane_cp20_g2

0xe676,	// (0x00046a47) bg_popup_sub_pane_cp20_g3

0x1ea8,	// (0x0003a279) bg_popup_sub_pane_cp20_g4

0xe656,	// (0x00046a27) bg_popup_sub_pane_cp20_g5

0x2108,	// (0x0003a4d9) bg_popup_sub_pane_cp20_g6

0x1eb8,	// (0x0003a289) bg_popup_sub_pane_cp20_g7

0x1ec0,	// (0x0003a291) bg_popup_sub_pane_cp20_g8

0x1ec8,	// (0x0003a299) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x00047d0a) bg_popup_sub_pane_cp20_g

0x9112,	// (0x000414e3) list_vitu2_match_list_item_pane_ParamLimits

0x9112,	// (0x000414e3) list_vitu2_match_list_item_pane

0x9124,	// (0x000414f5) list_vitu2_match_list_item_pane_t1

0xd5cb,	// (0x0004599c) bg_popup_sub_pane_cp21

0xe42f,	// (0x00046800) grid_vitu2_dropdown_list_pane

0x9132,	// (0x00041503) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9132,	// (0x00041503) cell_vitu2_dropdown_list_char_pane

0x9154,	// (0x00041525) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9154,	// (0x00041525) cell_vitu2_dropdown_list_ctrl_pane

0x2122,	// (0x0003a4f3) cell_vitu2_dropdown_list_char_pane_g1

0x2119,	// (0x0003a4ea) cell_vitu2_dropdown_list_char_pane_g2

0x2110,	// (0x0003a4e1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x00047d1d) cell_vitu2_dropdown_list_char_pane_g

0x917c,	// (0x0004154d) cell_vitu2_dropdown_list_char_pane_t1

0x918a,	// (0x0004155b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x918a,	// (0x0004155b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9197,	// (0x00041568) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9197,	// (0x00041568) cell_vitu2_dropdown_list_ctrl_pane_g2

0x91a4,	// (0x00041575) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x91a4,	// (0x00041575) cell_vitu2_dropdown_list_ctrl_pane_g3

0x91b1,	// (0x00041582) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x91b1,	// (0x00041582) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe1e4,	// (0x000465b5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe1e4,	// (0x000465b5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x00047d24) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x00047d24) cell_vitu2_dropdown_list_ctrl_pane_g

0x91cd,	// (0x0004159e) aid_size_cell_gallery2_ParamLimits

0x91cd,	// (0x0004159e) aid_size_cell_gallery2

0x91e7,	// (0x000415b8) grid_gallery2_pane_ParamLimits

0x91e7,	// (0x000415b8) grid_gallery2_pane

0x91fe,	// (0x000415cf) scroll_pane_cp029_ParamLimits

0x91fe,	// (0x000415cf) scroll_pane_cp029

0x920e,	// (0x000415df) cell_gallery2_pane_ParamLimits

0x920e,	// (0x000415df) cell_gallery2_pane

0x212b,	// (0x0003a4fc) cell_gallery2_pane_g2

0x2443,	// (0x0003a814) cell_gallery2_pane_g3

0x2133,	// (0x0003a504) cell_gallery2_pane_g4

0x213b,	// (0x0003a50c) cell_gallery2_pane_g5

0xe42f,	// (0x00046800) grid_highlight_pane_cp10

0x8925,	// (0x00040cf6) popup_vitu2_match_list_window_ParamLimits

0x8937,	// (0x00040d08) popup_vitu2_query_window_ParamLimits

0x8937,	// (0x00040d08) popup_vitu2_query_window

0xd5cb,	// (0x0004599c) bg_vitu2_candi_button_pane

0x2122,	// (0x0003a4f3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2119,	// (0x0003a4ea) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2110,	// (0x0003a4e1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x362d,	// (0x0003b9fe) bg_button_pane_cp015

0x9263,	// (0x00041634) bg_button_pane_cp016

0x926f,	// (0x00041640) bg_button_pane_cp017

0xef82,	// (0x00047353) bg_popup_sub_pane_cp22

0x2143,	// (0x0003a514) popup_vitu2_query_window_g1

0x3667,	// (0x0003ba38) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x00047d2f) popup_vitu2_query_window_g

0x367f,	// (0x0003ba50) popup_vitu2_query_window_t1_ParamLimits

0x367f,	// (0x0003ba50) popup_vitu2_query_window_t1

0x36b2,	// (0x0003ba83) popup_vitu2_query_window_t2_ParamLimits

0x36b2,	// (0x0003ba83) popup_vitu2_query_window_t2

0x36c4,	// (0x0003ba95) popup_vitu2_query_window_t3_ParamLimits

0x36c4,	// (0x0003ba95) popup_vitu2_query_window_t3

0x9296,	// (0x00041667) popup_vitu2_query_window_t4_ParamLimits

0x9296,	// (0x00041667) popup_vitu2_query_window_t4

0x92aa,	// (0x0004167b) popup_vitu2_query_window_t5_ParamLimits

0x92aa,	// (0x0004167b) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x00047d36) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x00047d36) popup_vitu2_query_window_t

0x1fac,	// (0x0003a37d) main_cset_text_pane

0x8ce4,	// (0x000410b5) aid_area_touch_slider_ParamLimits

0x8d00,	// (0x000410d1) cset_slider_pane_ParamLimits

0x8d23,	// (0x000410f4) main_cset_slider_pane_g1_ParamLimits

0x8d38,	// (0x00041109) main_cset_slider_pane_g2_ParamLimits

0x1fcd,	// (0x0003a39e) main_cset_slider_pane_g3_ParamLimits

0x1fcd,	// (0x0003a39e) main_cset_slider_pane_g3

0x8d4d,	// (0x0004111e) main_cset_slider_pane_g4_ParamLimits

0x8d4d,	// (0x0004111e) main_cset_slider_pane_g4

0x8d5c,	// (0x0004112d) main_cset_slider_pane_g5_ParamLimits

0x8d5c,	// (0x0004112d) main_cset_slider_pane_g5

0x8d6a,	// (0x0004113b) main_cset_slider_pane_g6_ParamLimits

0x8d6a,	// (0x0004113b) main_cset_slider_pane_g6

0xf8c2,	// (0x00047c93) main_cset_slider_pane_g_ParamLimits

0x1ffd,	// (0x0003a3ce) main_cset_slider_pane_t1_ParamLimits

0x8dfa,	// (0x000411cb) main_cset_slider_pane_t2_ParamLimits

0x8e14,	// (0x000411e5) main_cset_slider_pane_t3_ParamLimits

0x8e2e,	// (0x000411ff) main_cset_slider_pane_t4_ParamLimits

0x8e48,	// (0x00041219) main_cset_slider_pane_t5_ParamLimits

0x8e66,	// (0x00041237) main_cset_slider_pane_t6_ParamLimits

0x8e7d,	// (0x0004124e) main_cset_slider_pane_t7_ParamLimits

0x8eab,	// (0x0004127c) main_cset_slider_pane_t8_ParamLimits

0x8eab,	// (0x0004127c) main_cset_slider_pane_t8

0x8ed3,	// (0x000412a4) main_cset_slider_pane_t9_ParamLimits

0x8ed3,	// (0x000412a4) main_cset_slider_pane_t9

0x8efb,	// (0x000412cc) main_cset_slider_pane_t10_ParamLimits

0x8efb,	// (0x000412cc) main_cset_slider_pane_t10

0x8f23,	// (0x000412f4) main_cset_slider_pane_t11_ParamLimits

0x8f23,	// (0x000412f4) main_cset_slider_pane_t11

0x8f4d,	// (0x0004131e) main_cset_slider_pane_t12_ParamLimits

0x8f4d,	// (0x0004131e) main_cset_slider_pane_t12

0x8f6a,	// (0x0004133b) main_cset_slider_pane_t13_ParamLimits

0x8f6a,	// (0x0004133b) main_cset_slider_pane_t13

0xf8e7,	// (0x00047cb8) main_cset_slider_pane_t_ParamLimits

0xd5cb,	// (0x0004599c) bg_popup_sub_pane_cp011

0x214f,	// (0x0003a520) main_cset_text_pane_g1

0x2157,	// (0x0003a528) main_cset_text_pane_t1

0x2165,	// (0x0003a536) main_cset_text_pane_t2

0x2173,	// (0x0003a544) main_cset_text_pane_t3

0x2181,	// (0x0003a552) main_cset_text_pane_t4

0x218f,	// (0x0003a560) main_cset_text_pane_t5

0x219d,	// (0x0003a56e) main_cset_text_pane_t6

0x21ab,	// (0x0003a57c) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x00047d45) main_cset_text_pane_t

0xd5cb,	// (0x0004599c) main_cam4_burst_pane

0xd5cb,	// (0x0004599c) main_cam5_pane

0x1f82,	// (0x0003a353) bg_button_pane_cp019

0x1f8b,	// (0x0003a35c) bg_button_pane_cp020

0x1fd9,	// (0x0003a3aa) main_cset_slider_pane_g7_ParamLimits

0x1fd9,	// (0x0003a3aa) main_cset_slider_pane_g7

0x1fe5,	// (0x0003a3b6) main_cset_slider_pane_g8_ParamLimits

0x1fe5,	// (0x0003a3b6) main_cset_slider_pane_g8

0x8d7e,	// (0x0004114f) main_cset_slider_pane_g9_ParamLimits

0x8d7e,	// (0x0004114f) main_cset_slider_pane_g9

0x8d8a,	// (0x0004115b) main_cset_slider_pane_g10_ParamLimits

0x8d8a,	// (0x0004115b) main_cset_slider_pane_g10

0x8d96,	// (0x00041167) main_cset_slider_pane_g11_ParamLimits

0x8d96,	// (0x00041167) main_cset_slider_pane_g11

0x8da2,	// (0x00041173) main_cset_slider_pane_g12_ParamLimits

0x8da2,	// (0x00041173) main_cset_slider_pane_g12

0x8dae,	// (0x0004117f) main_cset_slider_pane_g13_ParamLimits

0x8dae,	// (0x0004117f) main_cset_slider_pane_g13

0x8dba,	// (0x0004118b) main_cset_slider_pane_g14_ParamLimits

0x8dba,	// (0x0004118b) main_cset_slider_pane_g14

0x8dc6,	// (0x00041197) main_cset_slider_pane_g15_ParamLimits

0x8dc6,	// (0x00041197) main_cset_slider_pane_g15

0x2025,	// (0x0003a3f6) main_cset_slider_pane_t14_ParamLimits

0x2025,	// (0x0003a3f6) main_cset_slider_pane_t14

0x205e,	// (0x0003a42f) main_cset_slider_pane_t15_ParamLimits

0x205e,	// (0x0003a42f) main_cset_slider_pane_t15

0x92be,	// (0x0004168f) aid_cam4_burst_size_cell_ParamLimits

0x92be,	// (0x0004168f) aid_cam4_burst_size_cell

0x92da,	// (0x000416ab) grid_cam4_burst_pane_ParamLimits

0x92da,	// (0x000416ab) grid_cam4_burst_pane

0x930a,	// (0x000416db) linegrid_cam4_burst_pane_ParamLimits

0x930a,	// (0x000416db) linegrid_cam4_burst_pane

0x932a,	// (0x000416fb) scroll_pane_cp30_ParamLimits

0x932a,	// (0x000416fb) scroll_pane_cp30

0x9336,	// (0x00041707) cell_cam4_burst_pane_ParamLimits

0x9336,	// (0x00041707) cell_cam4_burst_pane

0x21c5,	// (0x0003a596) linegrid_cam4_burst_pane_g1_ParamLimits

0x21c5,	// (0x0003a596) linegrid_cam4_burst_pane_g1

0x9372,	// (0x00041743) linegrid_cam4_burst_pane_g2_ParamLimits

0x9372,	// (0x00041743) linegrid_cam4_burst_pane_g2

0x21d2,	// (0x0003a5a3) linegrid_cam4_burst_pane_g3_ParamLimits

0x21d2,	// (0x0003a5a3) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x00047d54) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x00047d54) linegrid_cam4_burst_pane_g

0x9383,	// (0x00041754) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9383,	// (0x00041754) linegrid_cam4_burst_pane_g3_copy1

0x21df,	// (0x0003a5b0) linegrid_cam4_burst_pane_g4_ParamLimits

0x21df,	// (0x0003a5b0) linegrid_cam4_burst_pane_g4

0x939d,	// (0x0004176e) linegrid_cam4_burst_pane_g5_ParamLimits

0x939d,	// (0x0004176e) linegrid_cam4_burst_pane_g5

0x93ae,	// (0x0004177f) linegrid_cam4_burst_pane_g6_ParamLimits

0x93ae,	// (0x0004177f) linegrid_cam4_burst_pane_g6

0x21ec,	// (0x0003a5bd) linegrid_cam4_burst_pane_g7_ParamLimits

0x21ec,	// (0x0003a5bd) linegrid_cam4_burst_pane_g7

0x93bf,	// (0x00041790) cell_cam4_burst_pane_g1

0x2205,	// (0x0003a5d6) main_cam5_pane_t1_ParamLimits

0x2205,	// (0x0003a5d6) main_cam5_pane_t1

0x2217,	// (0x0003a5e8) main_cam5_pane_t2_ParamLimits

0x2217,	// (0x0003a5e8) main_cam5_pane_t2

0x2229,	// (0x0003a5fa) main_cam5_pane_t3_ParamLimits

0x2229,	// (0x0003a5fa) main_cam5_pane_t3

0x223b,	// (0x0003a60c) main_cam5_pane_t4_ParamLimits

0x223b,	// (0x0003a60c) main_cam5_pane_t4

0x2253,	// (0x0003a624) main_cam5_pane_t5_ParamLimits

0x2253,	// (0x0003a624) main_cam5_pane_t5

0x2267,	// (0x0003a638) main_cam5_pane_t6_ParamLimits

0x2267,	// (0x0003a638) main_cam5_pane_t6

0x227b,	// (0x0003a64c) main_cam5_pane_t7_ParamLimits

0x227b,	// (0x0003a64c) main_cam5_pane_t7

0x228d,	// (0x0003a65e) main_cam5_pane_t8_ParamLimits

0x228d,	// (0x0003a65e) main_cam5_pane_t8

0x22a9,	// (0x0003a67a) main_cam5_pane_t9_ParamLimits

0x22a9,	// (0x0003a67a) main_cam5_pane_t9

0x22bb,	// (0x0003a68c) main_cam5_pane_t10_ParamLimits

0x22bb,	// (0x0003a68c) main_cam5_pane_t10

0x22cd,	// (0x0003a69e) main_cam5_pane_t11_ParamLimits

0x22cd,	// (0x0003a69e) main_cam5_pane_t11

0x22df,	// (0x0003a6b0) main_cam5_pane_t12_ParamLimits

0x22df,	// (0x0003a6b0) main_cam5_pane_t12

0x22f4,	// (0x0003a6c5) main_cam5_pane_t13_ParamLimits

0x22f4,	// (0x0003a6c5) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x00047d60) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x00047d60) main_cam5_pane_t

0x42cf,	// (0x0003c6a0) popup_scut_keymap_window_ParamLimits

0x42cf,	// (0x0003c6a0) popup_scut_keymap_window

0x93d2,	// (0x000417a3) aid_size_cell_brow_shortcut

0xe42f,	// (0x00046800) bg_popup_window_pane_cp010

0x93de,	// (0x000417af) grid_scut_pane

0x93ea,	// (0x000417bb) cell_scut_pane_ParamLimits

0x93ea,	// (0x000417bb) cell_scut_pane

0x9401,	// (0x000417d2) cell_scut_pane_g1

0x2311,	// (0x0003a6e2) cell_scut_pane_t1

0x2320,	// (0x0003a6f1) cell_scut_pane_t2

0x940a,	// (0x000417db) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x00047d7b) cell_scut_pane_t

0x7549,	// (0x0003f91a) main_mup3_pane_g8_ParamLimits

0x7549,	// (0x0003f91a) main_mup3_pane_g8

0x885b,	// (0x00040c2c) area_vitu2_query_pane_ParamLimits

0x885b,	// (0x00040c2c) area_vitu2_query_pane

0x3642,	// (0x0003ba13) input_focus_pane_cp08

0x232f,	// (0x0003a700) area_vitu2_query_pane_g1

0x3742,	// (0x0003bb13) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x00047d82) area_vitu2_query_pane_g

0x9418,	// (0x000417e9) area_vitu2_query_pane_t1_ParamLimits

0x9418,	// (0x000417e9) area_vitu2_query_pane_t1

0x942c,	// (0x000417fd) area_vitu2_query_pane_t2_ParamLimits

0x942c,	// (0x000417fd) area_vitu2_query_pane_t2

0x3753,	// (0x0003bb24) area_vitu2_query_pane_t3_ParamLimits

0x3753,	// (0x0003bb24) area_vitu2_query_pane_t3

0x377b,	// (0x0003bb4c) area_vitu2_query_pane_t4_ParamLimits

0x377b,	// (0x0003bb4c) area_vitu2_query_pane_t4

0x37a3,	// (0x0003bb74) area_vitu2_query_pane_t5_ParamLimits

0x37a3,	// (0x0003bb74) area_vitu2_query_pane_t5

0x37cb,	// (0x0003bb9c) area_vitu2_query_pane_t6_ParamLimits

0x37cb,	// (0x0003bb9c) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x00047d87) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x00047d87) area_vitu2_query_pane_t

0x9263,	// (0x00041634) bg_button_pane_cp018

0x9440,	// (0x00041811) bg_button_pane_cp021

0x3817,	// (0x0003bbe8) bg_button_pane_cp022

0x383a,	// (0x0003bc0b) input_focus_pane_cp09

0xecd8,	// (0x000470a9) aid_size_touch_mv_arrow_left

0xed01,	// (0x000470d2) aid_size_touch_mv_arrow_right

0x8dde,	// (0x000411af) main_cset_slider_pane_g16_ParamLimits

0x8dde,	// (0x000411af) main_cset_slider_pane_g16

0x8dec,	// (0x000411bd) main_cset_slider_pane_g17_ParamLimits

0x8dec,	// (0x000411bd) main_cset_slider_pane_g17

0x93bf,	// (0x00041790) cell_cam4_burst_pane_g1_ParamLimits

0xd5cb,	// (0x0004599c) compa_mode_pane

0x8fdf,	// (0x000413b0) popup_vtel_slider_window_g3_ParamLimits

0x8fdf,	// (0x000413b0) popup_vtel_slider_window_g3

0x8ff3,	// (0x000413c4) popup_vtel_slider_window_g4_ParamLimits

0x8ff3,	// (0x000413c4) popup_vtel_slider_window_g4

0x9007,	// (0x000413d8) popup_vtel_slider_window_t1_ParamLimits

0x9007,	// (0x000413d8) popup_vtel_slider_window_t1

0xd5cb,	// (0x0004599c) main_cl_pane

0x6e68,	// (0x0003f239) popup_imed_adjust2_window_ParamLimits

0xef82,	// (0x00047353) bg_tb_trans_pane_cp05_ParamLimits

0x1aac,	// (0x00039e7d) popup_imed_adjust2_window_g1_ParamLimits

0x1abb,	// (0x00039e8c) popup_imed_adjust2_window_g2_ParamLimits

0x1abb,	// (0x00039e8c) popup_imed_adjust2_window_g2

0x1ac7,	// (0x00039e98) popup_imed_adjust2_window_g3_ParamLimits

0x1ac7,	// (0x00039e98) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x00047afd) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x00047afd) popup_imed_adjust2_window_g

0x1ad3,	// (0x00039ea4) popup_imed_adjust2_window_t1_ParamLimits

0x1aeb,	// (0x00039ebc) slider_imed_adjust_pane_ParamLimits

0x1aff,	// (0x00039ed0) slider_imed_adjust_pane_g1_ParamLimits

0x1b0f,	// (0x00039ee0) slider_imed_adjust_pane_g2_ParamLimits

0x1b1f,	// (0x00039ef0) slider_imed_adjust_pane_g3_ParamLimits

0x1b30,	// (0x00039f01) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x00047b04) slider_imed_adjust_pane_g_ParamLimits

0x85a2,	// (0x00040973) aid_touch_area_cam4_ParamLimits

0x85a2,	// (0x00040973) aid_touch_area_cam4

0x85b2,	// (0x00040983) battery_pane_cp01

0x8639,	// (0x00040a0a) main_camera4_pane_g6_ParamLimits

0x8639,	// (0x00040a0a) main_camera4_pane_g6

0x8657,	// (0x00040a28) main_camera4_pane_t2_ParamLimits

0x8657,	// (0x00040a28) main_camera4_pane_t2

0x0001,

0xf835,	// (0x00047c06) main_camera4_pane_t_ParamLimits

0xf835,	// (0x00047c06) main_camera4_pane_t

0x86de,	// (0x00040aaf) aid_touch_area_vid4_ParamLimits

0x86de,	// (0x00040aaf) aid_touch_area_vid4

0x871e,	// (0x00040aef) main_video4_pane_g5_ParamLimits

0x871e,	// (0x00040aef) main_video4_pane_g5

0x8742,	// (0x00040b13) vid4_progress_pane_ParamLimits

0x8742,	// (0x00040b13) vid4_progress_pane

0x1ff1,	// (0x0003a3c2) main_cset_slider_pane_g18_ParamLimits

0x1ff1,	// (0x0003a3c2) main_cset_slider_pane_g18

0x21f9,	// (0x0003a5ca) cell_cam4_burst_pane_g2_ParamLimits

0x21f9,	// (0x0003a5ca) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x00047d5b) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x00047d5b) cell_cam4_burst_pane_g

0x944c,	// (0x0004181d) bg_cl_pane_ParamLimits

0x944c,	// (0x0004181d) bg_cl_pane

0x9458,	// (0x00041829) cl_header_pane_ParamLimits

0x9458,	// (0x00041829) cl_header_pane

0x9464,	// (0x00041835) cl_listscroll_pane_ParamLimits

0x9464,	// (0x00041835) cl_listscroll_pane

0x23d7,	// (0x0003a7a8) bg_cl_pane_g1

0x23df,	// (0x0003a7b0) bg_cl_pane_g2

0x23e7,	// (0x0003a7b8) bg_cl_pane_g3

0x23ef,	// (0x0003a7c0) bg_cl_pane_g4

0x23f7,	// (0x0003a7c8) bg_cl_pane_g5

0x23ff,	// (0x0003a7d0) bg_cl_pane_g6

0x2407,	// (0x0003a7d8) bg_cl_pane_g7

0x240f,	// (0x0003a7e0) bg_cl_pane_g8

0x2417,	// (0x0003a7e8) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x00047d96) bg_cl_pane_g

0x9470,	// (0x00041841) aid_height_cl_leading_ParamLimits

0x9470,	// (0x00041841) aid_height_cl_leading

0x947c,	// (0x0004184d) aid_height_cl_text_ParamLimits

0x947c,	// (0x0004184d) aid_height_cl_text

0xe1ca,	// (0x0004659b) bg_cl_header_pane_ParamLimits

0xe1ca,	// (0x0004659b) bg_cl_header_pane

0x9494,	// (0x00041865) cl_header_pane_g1_ParamLimits

0x9494,	// (0x00041865) cl_header_pane_g1

0x94a1,	// (0x00041872) cl_header_pane_t1_ParamLimits

0x94a1,	// (0x00041872) cl_header_pane_t1

0x241f,	// (0x0003a7f0) cl_list_pane

0x1fc4,	// (0x0003a395) hc_scroll_pane_cp01

0xe656,	// (0x00046a27) bg_cl_header_pane_g1

0x1e98,	// (0x0003a269) bg_cl_header_pane_g2

0xe676,	// (0x00046a47) bg_cl_header_pane_g3

0x1ea8,	// (0x0003a279) bg_cl_header_pane_g4

0x1ea0,	// (0x0003a271) bg_cl_header_pane_g5

0x2108,	// (0x0003a4d9) bg_cl_header_pane_g6

0x1ec0,	// (0x0003a291) bg_cl_header_pane_g7

0x1ec8,	// (0x0003a299) bg_cl_header_pane_g8

0x1eb8,	// (0x0003a289) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x00047da9) bg_cl_header_pane_g

0x94b3,	// (0x00041884) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x94b3,	// (0x00041884) hc_cl_list_double_graphic_heading_pane

0x94c4,	// (0x00041895) hc_cl_list_single_graphic_pane_ParamLimits

0x94c4,	// (0x00041895) hc_cl_list_single_graphic_pane

0x94dd,	// (0x000418ae) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x94dd,	// (0x000418ae) hc_cl_list_single_graphic_pane_g1

0x94e9,	// (0x000418ba) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x94e9,	// (0x000418ba) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x00047dbc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x00047dbc) hc_cl_list_single_graphic_pane_g

0x94fd,	// (0x000418ce) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x94fd,	// (0x000418ce) hc_cl_list_single_graphic_pane_t1

0x94dd,	// (0x000418ae) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x94dd,	// (0x000418ae) hc_cl_list_double_graphic_heading_pane_g1

0x9512,	// (0x000418e3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9512,	// (0x000418e3) hc_cl_list_double_graphic_heading_pane_g2

0x9526,	// (0x000418f7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9526,	// (0x000418f7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x00047dc1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x00047dc1) hc_cl_list_double_graphic_heading_pane_g

0x953a,	// (0x0004190b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x953a,	// (0x0004190b) hc_cl_list_double_graphic_heading_pane_t1

0x954f,	// (0x00041920) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x954f,	// (0x00041920) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x00047dc8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x00047dc8) hc_cl_list_double_graphic_heading_pane_t

0x956c,	// (0x0004193d) vid4_progress_pane_g1

0x957c,	// (0x0004194d) vid4_progress_pane_g2

0x958c,	// (0x0004195d) vid4_progress_pane_g3

0x959e,	// (0x0004196f) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x00047dcd) vid4_progress_pane_g

0x95b6,	// (0x00041987) vid4_progress_pane_t1

0x95cc,	// (0x0004199d) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x00047dd8) vid4_progress_pane_t

0x95f6,	// (0x000419c7) wait_bar_pane_cp07

0x13c9,	// (0x0003979a) blid_firmament_pane_ParamLimits

0x140c,	// (0x000397dd) popup_blid_sat_info2_window_g1

0x1430,	// (0x00039801) popup_blid_sat_info2_window_t3

0x143e,	// (0x0003980f) popup_blid_sat_info2_window_t4

0x144c,	// (0x0003981d) popup_blid_sat_info2_window_t5

0x145a,	// (0x0003982b) popup_blid_sat_info2_window_t6

0x146a,	// (0x0003983b) popup_blid_sat_info2_window_t7

0x1478,	// (0x00039849) popup_blid_sat_info2_window_t8

0x1486,	// (0x00039857) popup_blid_sat_info2_window_t9

0x1494,	// (0x00039865) popup_blid_sat_info2_window_t10

0x1555,	// (0x00039926) aid_firma_cardinal_ParamLimits

0x1569,	// (0x0003993a) blid_firmament_pane_t1_ParamLimits

0x1580,	// (0x00039951) blid_firmament_pane_t2_ParamLimits

0x1597,	// (0x00039968) blid_firmament_pane_t3_ParamLimits

0x15ae,	// (0x0003997f) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x000479f6) blid_firmament_pane_t_ParamLimits

0x15c5,	// (0x00039996) blid_sat_info_pane_ParamLimits

0xe17d,	// (0x0004654e) main_cam_set_pane_ParamLimits

0x7c22,	// (0x0003fff3) aid_size_cell_colour_35_ParamLimits

0x7c3c,	// (0x0004000d) aid_size_cell_colour_112_ParamLimits

0x7c53,	// (0x00040024) aid_size_cell_effect_ParamLimits

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp02_ParamLimits

0xe9a4,	// (0x00046d75) heading_imed_pane_ParamLimits

0x7c6d,	// (0x0004003e) listscroll_imed_pane_ParamLimits

0x08b6,	// (0x00038c87) popup_call2_audio_first_window_g5_ParamLimits

0x08b6,	// (0x00038c87) popup_call2_audio_first_window_g5

0x8296,	// (0x00040667) aid_size_touch_image3_arrow_left_ParamLimits

0x8296,	// (0x00040667) aid_size_touch_image3_arrow_left

0x82ac,	// (0x0004067d) aid_size_touch_image3_arrow_right_ParamLimits

0x82ac,	// (0x0004067d) aid_size_touch_image3_arrow_right

0x95e1,	// (0x000419b2) vid4_progress_pane_t3

0x7dee,	// (0x000401bf) main_hwr_training_symbol_option_pane_ParamLimits

0x7dee,	// (0x000401bf) main_hwr_training_symbol_option_pane

0x1ce5,	// (0x0003a0b6) popup_hwr_training_preview_window_ParamLimits

0x1ce5,	// (0x0003a0b6) popup_hwr_training_preview_window

0x7e4f,	// (0x00040220) hwr_training_navi_pane_g5_ParamLimits

0x7e4f,	// (0x00040220) hwr_training_navi_pane_g5

0x1e86,	// (0x0003a257) popup_char_count_window

0xe1ca,	// (0x0004659b) bg_popup_sub_pane_cp20_ParamLimits

0x90fa,	// (0x000414cb) list_vitu2_match_list_pane_ParamLimits

0x9106,	// (0x000414d7) vitu2_page_scroll_pane_ParamLimits

0x9106,	// (0x000414d7) vitu2_page_scroll_pane

0xc0ad,	// (0x0004447e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc0ad,	// (0x0004447e) list_single_hwr_training_symbol_option_pane

0xc0c0,	// (0x00044491) list_single_hwr_training_symbol_option_pane_g1

0xc0c8,	// (0x00044499) list_single_hwr_training_symbol_option_pane_t1

0xc0d6,	// (0x000444a7) bg_button_pane_cp023

0xc0df,	// (0x000444b0) bg_button_pane_cp024

0xc112,	// (0x000444e3) vitu2_page_scroll_pane_g1

0xc11a,	// (0x000444eb) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x00047ddf) vitu2_page_scroll_pane_g

0xc122,	// (0x000444f3) vitu2_page_scroll_pane_t1

0x1331,	// (0x00039702) popup_char_count_window_g1

0xc131,	// (0x00044502) popup_char_count_window_g2

0xc13a,	// (0x0004450b) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x00047de4) popup_char_count_window_g

0xc143,	// (0x00044514) popup_char_count_window_t1

0xd5cb,	// (0x0004599c) main_vded2_pane

0x1a98,	// (0x00039e69) aid_size_cell_imed_line

0x1aa2,	// (0x00039e73) grid_imed_line_width_pane

0x87b0,	// (0x00040b81) vid4_indicators_pane_g4

0xc151,	// (0x00044522) cell_imed_line_width_pane_ParamLimits

0xc151,	// (0x00044522) cell_imed_line_width_pane

0xc165,	// (0x00044536) cell_imed_line_width_pane_g1

0xc16e,	// (0x0004453f) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x00047deb) cell_imed_line_width_pane_g

0x9609,	// (0x000419da) main_vded2_pane_g1_ParamLimits

0x9609,	// (0x000419da) main_vded2_pane_g1

0x9616,	// (0x000419e7) main_vded2_pane_g2_ParamLimits

0x9616,	// (0x000419e7) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x00047df0) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x00047df0) main_vded2_pane_g

0x9624,	// (0x000419f5) vded2_slider_pane_ParamLimits

0x9624,	// (0x000419f5) vded2_slider_pane

0x9631,	// (0x00041a02) aid_size_touch_vded2_end

0x963b,	// (0x00041a0c) aid_size_touch_vded2_playhead

0xc176,	// (0x00044547) aid_size_touch_vded2_start

0xc17e,	// (0x0004454f) vded2_slider_bg_pane

0xc187,	// (0x00044558) vded2_slider_pane_g1

0xc190,	// (0x00044561) vded2_slider_pane_g2

0x9643,	// (0x00041a14) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x00047df5) vded2_slider_pane_g

0xc198,	// (0x00044569) vded2_slider_bg_pane_g1

0xc1a1,	// (0x00044572) vded2_slider_bg_pane_g2

0xc1aa,	// (0x0004457b) vded2_slider_bg_pane_g3

0x0002,

0xfa2b,	// (0x00047dfc) vded2_slider_bg_pane_g

0x6679,	// (0x0003ea4a) aid_postcard_touch_down_pane_ParamLimits

0x6679,	// (0x0003ea4a) aid_postcard_touch_down_pane

0x6689,	// (0x0003ea5a) aid_postcard_touch_up_pane_ParamLimits

0x6689,	// (0x0003ea5a) aid_postcard_touch_up_pane

0xd5cb,	// (0x0004599c) main_blid2_pane

0x6df3,	// (0x0003f1c4) popup_blid2_search_window

0xd5cb,	// (0x0004599c) blid2_gps_pane

0xd5cb,	// (0x0004599c) blid2_navig_pane

0xd5cb,	// (0x0004599c) blid2_search_pane

0xd5cb,	// (0x0004599c) blid2_tripm_pane

0x964c,	// (0x00041a1d) blid2_search_pane_g1_ParamLimits

0x964c,	// (0x00041a1d) blid2_search_pane_g1

0x965c,	// (0x00041a2d) blid2_search_pane_t1_ParamLimits

0x965c,	// (0x00041a2d) blid2_search_pane_t1

0x966e,	// (0x00041a3f) aid_size_cell_blid2_gps_ParamLimits

0x966e,	// (0x00041a3f) aid_size_cell_blid2_gps

0x967e,	// (0x00041a4f) blid2_gps_pane_g1_ParamLimits

0x967e,	// (0x00041a4f) blid2_gps_pane_g1

0x968a,	// (0x00041a5b) grid_blid2_satellite_pane_ParamLimits

0x968a,	// (0x00041a5b) grid_blid2_satellite_pane

0x969a,	// (0x00041a6b) blid2_navig_pane_g1_ParamLimits

0x969a,	// (0x00041a6b) blid2_navig_pane_g1

0x96a6,	// (0x00041a77) blid2_navig_pane_t1_ParamLimits

0x96a6,	// (0x00041a77) blid2_navig_pane_t1

0x96b8,	// (0x00041a89) blid2_navig_pane_t2_ParamLimits

0x96b8,	// (0x00041a89) blid2_navig_pane_t2

0x0001,

0xfa32,	// (0x00047e03) blid2_navig_pane_t_ParamLimits

0xfa32,	// (0x00047e03) blid2_navig_pane_t

0x96ca,	// (0x00041a9b) blid2_navig_ring_pane_ParamLimits

0x96ca,	// (0x00041a9b) blid2_navig_ring_pane

0x96da,	// (0x00041aab) blid2_speed_pane_ParamLimits

0x96da,	// (0x00041aab) blid2_speed_pane

0x96e6,	// (0x00041ab7) blid2_tripm_pane_g1_ParamLimits

0x96e6,	// (0x00041ab7) blid2_tripm_pane_g1

0x96f6,	// (0x00041ac7) blid2_tripm_pane_g2_ParamLimits

0x96f6,	// (0x00041ac7) blid2_tripm_pane_g2

0x9702,	// (0x00041ad3) blid2_tripm_pane_g3_ParamLimits

0x9702,	// (0x00041ad3) blid2_tripm_pane_g3

0x970e,	// (0x00041adf) blid2_tripm_pane_g4_ParamLimits

0x970e,	// (0x00041adf) blid2_tripm_pane_g4

0x971a,	// (0x00041aeb) blid2_tripm_pane_g5_ParamLimits

0x971a,	// (0x00041aeb) blid2_tripm_pane_g5

0x0005,

0xfa37,	// (0x00047e08) blid2_tripm_pane_g_ParamLimits

0xfa37,	// (0x00047e08) blid2_tripm_pane_g

0x9736,	// (0x00041b07) blid2_tripm_pane_t1_ParamLimits

0x9736,	// (0x00041b07) blid2_tripm_pane_t1

0x974a,	// (0x00041b1b) blid2_tripm_pane_t2_ParamLimits

0x974a,	// (0x00041b1b) blid2_tripm_pane_t2

0x975c,	// (0x00041b2d) blid2_tripm_pane_t3_ParamLimits

0x975c,	// (0x00041b2d) blid2_tripm_pane_t3

0x0003,

0xfa44,	// (0x00047e15) blid2_tripm_pane_t_ParamLimits

0xfa44,	// (0x00047e15) blid2_tripm_pane_t

0x978e,	// (0x00041b5f) cell_blid2_satellite_pane_ParamLimits

0x978e,	// (0x00041b5f) cell_blid2_satellite_pane

0x97a8,	// (0x00041b79) cell_blid2_satellite_pane_g1

0xc1b3,	// (0x00044584) cell_blid2_satellite_pane_t1

0xe451,	// (0x00046822) blid2_speed_pane_g1

0xc1c1,	// (0x00044592) blid2_speed_pane_t1

0xc1cf,	// (0x000445a0) blid2_speed_pane_t2

0x0001,

0xfa4d,	// (0x00047e1e) blid2_speed_pane_t

0xe451,	// (0x00046822) blid2_navig_ring_pane_g1

0x97b1,	// (0x00041b82) blid2_navig_ring_pane_g2

0x97b9,	// (0x00041b8a) blid2_navig_ring_pane_g3

0x97c1,	// (0x00041b92) blid2_navig_ring_pane_g4

0x97c9,	// (0x00041b9a) blid2_navig_ring_pane_g5

0x0004,

0xfa52,	// (0x00047e23) blid2_navig_ring_pane_g

0xd5cb,	// (0x0004599c) bg_popup_window_pane_cp011

0xc1dd,	// (0x000445ae) popup_blid2_search_window_g1

0xc1e5,	// (0x000445b6) popup_blid2_search_window_t1

0xc1f3,	// (0x000445c4) popup_blid2_search_window_t2

0x0001,

0xfa5d,	// (0x00047e2e) popup_blid2_search_window_t

0xe565,	// (0x00046936) main_browser_pane_g1

0xe256,	// (0x00046627) main_browser_pane_ParamLimits

0xe17d,	// (0x0004654e) bg_button_pane_cp011_ParamLimits

0x8a13,	// (0x00040de4) cell_vitu2_function_pane_g1_ParamLimits

0xef82,	// (0x00047353) bg_popup_sub_pane_cp22_ParamLimits

0x3642,	// (0x0003ba13) input_focus_pane_cp08_ParamLimits

0x927b,	// (0x0004164c) popup_vitu2_query_button_pane_ParamLimits

0x927b,	// (0x0004164c) popup_vitu2_query_button_pane

0x365d,	// (0x0003ba2e) popup_vitu2_query_input_button_pane

0x2143,	// (0x0003a514) popup_vitu2_query_window_g1_ParamLimits

0x3667,	// (0x0003ba38) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x00047d2f) popup_vitu2_query_window_g_ParamLimits

0xd5cb,	// (0x0004599c) bg_button_pane_cp026

0x97d1,	// (0x00041ba2) popup_vitu2_query_input_button_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp025

0xc201,	// (0x000445d2) popup_vitu2_query_button_pane_t1

0x726d,	// (0x0003f63e) main_mp3_pane_t6

0x727d,	// (0x0003f64e) popup_slider_window_cp01

0x868d,	// (0x00040a5e) cam4_battery_pane

0x876d,	// (0x00040b3e) cam4_battery_pane_cp02

0x9564,	// (0x00041935) cam4_battery_pane_cp01

0x9564,	// (0x00041935) cam4_battery_pane_cp03

0xe451,	// (0x00046822) cam4_battery_pane_g1

0xc20f,	// (0x000445e0) cam4_battery_pane_g2

0x0001,

0xfa62,	// (0x00047e33) cam4_battery_pane_g

0x14a2,	// (0x00039873) popup_blid_sat_info2_window_t11

0xecd8,	// (0x000470a9) aid_size_touch_mv_arrow_left_ParamLimits

0xed01,	// (0x000470d2) aid_size_touch_mv_arrow_right_ParamLimits

0xed5f,	// (0x00047130) navi_pane_g1_ParamLimits

0xed6b,	// (0x0004713c) navi_pane_g2_ParamLimits

0xed99,	// (0x0004716a) navi_pane_g3_ParamLimits

0xf339,	// (0x0004770a) navi_pane_g_ParamLimits

0x632f,	// (0x0003e700) navi_pane_mv_t1_ParamLimits

0x7c79,	// (0x0004004a) grid_imed_effect_pane_ParamLimits

0x4e4a,	// (0x0003d21b) aid_placing_vt_slider_lsc

0xe4b4,	// (0x00046885) aid_placing_vt_slider_prt

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp01_ParamLimits

0x1722,	// (0x00039af3) popup_image_details_window_g1_ParamLimits

0x1735,	// (0x00039b06) popup_image_details_window_g2_ParamLimits

0x174a,	// (0x00039b1b) popup_image_details_window_g3_ParamLimits

0x174a,	// (0x00039b1b) popup_image_details_window_g3

0xf665,	// (0x00047a36) popup_image_details_window_g_ParamLimits

0x175e,	// (0x00039b2f) popup_image_details_window_t1_ParamLimits

0x1770,	// (0x00039b41) popup_image_details_window_t2_ParamLimits

0x1789,	// (0x00039b5a) popup_image_details_window_t3_ParamLimits

0x179d,	// (0x00039b6e) popup_image_details_window_t4_ParamLimits

0x17b8,	// (0x00039b89) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x00047a3d) popup_image_details_window_t_ParamLimits

0x9488,	// (0x00041859) cl_header_name_pane_ParamLimits

0x9488,	// (0x00041859) cl_header_name_pane

0x97d9,	// (0x00041baa) cl_header_name_pane_t1_ParamLimits

0x97d9,	// (0x00041baa) cl_header_name_pane_t1

0x97f0,	// (0x00041bc1) cl_header_name_pane_t2_ParamLimits

0x97f0,	// (0x00041bc1) cl_header_name_pane_t2

0x981a,	// (0x00041beb) cl_header_name_pane_t3_ParamLimits

0x981a,	// (0x00041beb) cl_header_name_pane_t3

0x0002,

0xfa67,	// (0x00047e38) cl_header_name_pane_t_ParamLimits

0xfa67,	// (0x00047e38) cl_header_name_pane_t

0xee28,	// (0x000471f9) navi_pane_mv_g2_ParamLimits

0x1e51,	// (0x0003a222) field_vitu2_entry_pane_g1_ParamLimits

0x1e5d,	// (0x0003a22e) field_vitu2_entry_pane_g2_ParamLimits

0xef90,	// (0x00047361) field_vitu2_entry_pane_g3_ParamLimits

0xef90,	// (0x00047361) field_vitu2_entry_pane_g3

0xf867,	// (0x00047c38) field_vitu2_entry_pane_g_ParamLimits

0x89a1,	// (0x00040d72) cell_vitu2_itu_pane_g1_ParamLimits

0x89b9,	// (0x00040d8a) cell_vitu2_itu_pane_g2_ParamLimits

0x89b9,	// (0x00040d8a) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x00047c44) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x00047c44) cell_vitu2_itu_pane_g

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp05_ParamLimits

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp05

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp03

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp04

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp10_ParamLimits

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp10

0x3828,	// (0x0003bbf9) bg_vkb2_func_pane_cp08

0x9263,	// (0x00041634) bg_vkb2_func_pane_cp06

0x9440,	// (0x00041811) bg_vkb2_func_pane_cp07

0xc0e8,	// (0x000444b9) bg_vkb2_func_pane_cp11_ParamLimits

0xc0e8,	// (0x000444b9) bg_vkb2_func_pane_cp11

0xc0fd,	// (0x000444ce) bg_vkb2_func_pane_cp12_ParamLimits

0xc0fd,	// (0x000444ce) bg_vkb2_func_pane_cp12

0xd5cb,	// (0x0004599c) bg_vkb2_func_pane_cp09

0x1e98,	// (0x0003a269) bg_vkb2_func_pane_g1

0xe676,	// (0x00046a47) bg_vkb2_func_pane_g2

0x1ea0,	// (0x0003a271) bg_vkb2_func_pane_g3

0x1ea8,	// (0x0003a279) bg_vkb2_func_pane_g4

0x2108,	// (0x0003a4d9) bg_vkb2_func_pane_g5

0x1ec0,	// (0x0003a291) bg_vkb2_func_pane_g6

0x1ec8,	// (0x0003a299) bg_vkb2_func_pane_g7

0x1eb8,	// (0x0003a289) bg_vkb2_func_pane_g8

0xe656,	// (0x00046a27) bg_vkb2_func_pane_g9

0x0008,

0xfa6e,	// (0x00047e3f) bg_vkb2_func_pane_g

0x9728,	// (0x00041af9) blid2_tripm_pane_g6_ParamLimits

0x9728,	// (0x00041af9) blid2_tripm_pane_g6

0x1da3,	// (0x0003a174) mp4_progress_pane_g1

0x9782,	// (0x00041b53) blid2_tripm_values_pane_ParamLimits

0x9782,	// (0x00041b53) blid2_tripm_values_pane

0x983f,	// (0x00041c10) blid2_tripm_values_pane_t1

0x984d,	// (0x00041c1e) blid2_tripm_values_pane_t2

0x985b,	// (0x00041c2c) blid2_tripm_values_pane_t3

0x9869,	// (0x00041c3a) blid2_tripm_values_pane_t4

0x9877,	// (0x00041c48) blid2_tripm_values_pane_t5

0x9885,	// (0x00041c56) blid2_tripm_values_pane_t6

0x9893,	// (0x00041c64) blid2_tripm_values_pane_t7

0x98a1,	// (0x00041c72) blid2_tripm_values_pane_t8

0x98af,	// (0x00041c80) blid2_tripm_values_pane_t9

0x0008,

0xfa81,	// (0x00047e52) blid2_tripm_values_pane_t

0x4e8a,	// (0x0003d25b) call_video_pane_t1_ParamLimits

0x4eab,	// (0x0003d27c) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000475b3) call_video_pane_t_ParamLimits

0x33e2,	// (0x0003b7b3) msg_header_pane_g1_ParamLimits

0xf031,	// (0x00047402) msg_header_pane_g2_ParamLimits

0xf031,	// (0x00047402) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x000477ad) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x000477ad) msg_header_pane_g

0xe256,	// (0x00046627) main_clock2_pane_ParamLimits

0x79f3,	// (0x0003fdc4) grid_clock2_toolbar_pane_ParamLimits

0x79f3,	// (0x0003fdc4) grid_clock2_toolbar_pane

0x79f3,	// (0x0003fdc4) listscroll_clock2_pane_ParamLimits

0x79f3,	// (0x0003fdc4) listscroll_clock2_pane

0x7aa3,	// (0x0003fe74) main_clock2_pane_t3_ParamLimits

0x7aa3,	// (0x0003fe74) main_clock2_pane_t3

0x7ab5,	// (0x0003fe86) main_clock2_pane_t4_ParamLimits

0x7ab5,	// (0x0003fe86) main_clock2_pane_t4

0xc219,	// (0x000445ea) cell_clock2_toolbar_pane

0xc221,	// (0x000445f2) cell_clock2_toolbar_pane_cp01

0xc221,	// (0x000445f2) cell_clock2_toolbar_pane_cp02

0xc229,	// (0x000445fa) cell_clock2_toolbar_pane_cp03

0xc231,	// (0x00044602) list_clock2_pane

0xec4e,	// (0x0004701f) scroll_pane_cp10

0xc239,	// (0x0004460a) list_single_clock2_pane_ParamLimits

0xc239,	// (0x0004460a) list_single_clock2_pane

0xe42f,	// (0x00046800) list_highlight_pane_cp08

0xc246,	// (0x00044617) list_single_clock2_pane_t1

0xc254,	// (0x00044625) list_single_clock2_pane_t2

0x0001,

0xfa94,	// (0x00047e65) list_single_clock2_pane_t

0xd5cb,	// (0x0004599c) bg_button_pane_cp10

0xc262,	// (0x00044633) cell_clock2_toolbar_pane_g1

0x65db,	// (0x0003e9ac) aid_main_viewer_pane_g1_ParamLimits

0x65db,	// (0x0003e9ac) aid_main_viewer_pane_g1

0x65e7,	// (0x0003e9b8) aid_main_viewer_pane_g2_ParamLimits

0x65e7,	// (0x0003e9b8) aid_main_viewer_pane_g2

0x65f3,	// (0x0003e9c4) aid_main_viewer_pane_g3_ParamLimits

0x65f3,	// (0x0003e9c4) aid_main_viewer_pane_g3

0x6604,	// (0x0003e9d5) aid_main_viewer_pane_g4_ParamLimits

0x6604,	// (0x0003e9d5) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x000477be) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x000477be) aid_main_viewer_pane_g

0x6dcb,	// (0x0003f19c) main_calc_pane_ParamLimits

0x6dd8,	// (0x0003f1a9) main_dialer2_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_cam6_pane

0xd5cb,	// (0x0004599c) main_vid6_pane

0x79ff,	// (0x0003fdd0) listscroll_gen_pane_cp06_ParamLimits

0x79ff,	// (0x0003fdd0) listscroll_gen_pane_cp06

0x7ac7,	// (0x0003fe98) main_clock2_pane_t5_ParamLimits

0x7ac7,	// (0x0003fe98) main_clock2_pane_t5

0x7b14,	// (0x0003fee5) aid_call2_pane_cp10_ParamLimits

0x7b26,	// (0x0003fef7) aid_call_pane_cp10_ParamLimits

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b38,	// (0x0003ff09) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b38,	// (0x0003ff09) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeccc,	// (0x0004709d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x00047af2) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b4e,	// (0x0003ff1f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8243,	// (0x00040614) cell_dialer2_keypad_pane_g2_ParamLimits

0x8243,	// (0x00040614) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x00047bd7) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x00047bd7) cell_dialer2_keypad_pane_g

0x825f,	// (0x00040630) cell_dialer2_keypad_pane_t1

0x8cd1,	// (0x000410a2) main_cset_text2_pane_ParamLimits

0x8cd1,	// (0x000410a2) main_cset_text2_pane

0x232f,	// (0x0003a700) area_vitu2_query_pane_g1_ParamLimits

0x3742,	// (0x0003bb13) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x00047d82) area_vitu2_query_pane_g_ParamLimits

0x37f3,	// (0x0003bbc4) area_vitu2_query_pane_t7_ParamLimits

0x37f3,	// (0x0003bbc4) area_vitu2_query_pane_t7

0x9263,	// (0x00041634) bg_button_pane_cp018_ParamLimits

0x9440,	// (0x00041811) bg_button_pane_cp021_ParamLimits

0x3817,	// (0x0003bbe8) bg_button_pane_cp022_ParamLimits

0x3828,	// (0x0003bbf9) bg_vkb2_func_pane_cp08_ParamLimits

0x9263,	// (0x00041634) bg_vkb2_func_pane_cp06_ParamLimits

0x9440,	// (0x00041811) bg_vkb2_func_pane_cp07_ParamLimits

0x383a,	// (0x0003bc0b) input_focus_pane_cp09_ParamLimits

0x98bd,	// (0x00041c8e) cam6_autofocus_pane_ParamLimits

0x98bd,	// (0x00041c8e) cam6_autofocus_pane

0x98d9,	// (0x00041caa) cam6_image_uncrop_pane_ParamLimits

0x98d9,	// (0x00041caa) cam6_image_uncrop_pane

0x9912,	// (0x00041ce3) cam6_indi_pane_ParamLimits

0x9912,	// (0x00041ce3) cam6_indi_pane

0x992c,	// (0x00041cfd) cam6_mode_pane_ParamLimits

0x992c,	// (0x00041cfd) cam6_mode_pane

0x9940,	// (0x00041d11) cam6_timer_pane_ParamLimits

0x9940,	// (0x00041d11) cam6_timer_pane

0x9954,	// (0x00041d25) cam6_zoom_pane_ParamLimits

0x9954,	// (0x00041d25) cam6_zoom_pane

0x996f,	// (0x00041d40) cam6_mode_pane_g1_ParamLimits

0x996f,	// (0x00041d40) cam6_mode_pane_g1

0x997b,	// (0x00041d4c) cam6_mode_pane_g2_ParamLimits

0x997b,	// (0x00041d4c) cam6_mode_pane_g2

0x9987,	// (0x00041d58) cam6_mode_pane_g3_ParamLimits

0x9987,	// (0x00041d58) cam6_mode_pane_g3

0x9993,	// (0x00041d64) cam6_mode_pane_g4_ParamLimits

0x9993,	// (0x00041d64) cam6_mode_pane_g4

0x0003,

0xfa99,	// (0x00047e6a) cam6_mode_pane_g_ParamLimits

0xfa99,	// (0x00047e6a) cam6_mode_pane_g

0x1982,	// (0x00039d53) bg_tb_trans_pane_cp08_ParamLimits

0x1982,	// (0x00039d53) bg_tb_trans_pane_cp08

0xc26a,	// (0x0004463b) cam6_battery_pane_ParamLimits

0xc26a,	// (0x0004463b) cam6_battery_pane

0xc280,	// (0x00044651) cam6_indi_pane_g1_ParamLimits

0xc280,	// (0x00044651) cam6_indi_pane_g1

0xc292,	// (0x00044663) cam6_indi_pane_g2_ParamLimits

0xc292,	// (0x00044663) cam6_indi_pane_g2

0xc2a4,	// (0x00044675) cam6_indi_pane_g3_ParamLimits

0xc2a4,	// (0x00044675) cam6_indi_pane_g3

0x0002,

0xfaa2,	// (0x00047e73) cam6_indi_pane_g_ParamLimits

0xfaa2,	// (0x00047e73) cam6_indi_pane_g

0xc2b6,	// (0x00044687) cam6_indi_pane_t1_ParamLimits

0xc2b6,	// (0x00044687) cam6_indi_pane_t1

0x87e5,	// (0x00040bb6) cam6_autofocus_pane_g1

0x87ed,	// (0x00040bbe) cam6_autofocus_pane_g2

0x87f5,	// (0x00040bc6) cam6_autofocus_pane_g3

0x87fd,	// (0x00040bce) cam6_autofocus_pane_g4

0x0003,

0xfaa9,	// (0x00047e7a) cam6_autofocus_pane_g

0xc2dc,	// (0x000446ad) cam6_timer_pane_g1

0xc2e4,	// (0x000446b5) cam6_timer_pane_t1

0xc2f2,	// (0x000446c3) cam6_zoom_cont_pane

0xc2fa,	// (0x000446cb) cam6_zoom_pane_g1

0xc303,	// (0x000446d4) cam6_zoom_pane_g2

0x999f,	// (0x00041d70) cam6_zoom_pane_g3

0x0002,

0xfab2,	// (0x00047e83) cam6_zoom_pane_g

0xe451,	// (0x00046822) cam6_battery_pane_g1

0xe451,	// (0x00046822) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0004776e) cam6_battery_pane_g

0xc2fa,	// (0x000446cb) cam6_zoom_cont_pane_g1

0xc303,	// (0x000446d4) cam6_zoom_cont_pane_g2

0xc30c,	// (0x000446dd) cam6_zoom_cont_pane_g3

0x0002,

0xfab9,	// (0x00047e8a) cam6_zoom_cont_pane_g

0x99bd,	// (0x00041d8e) cam6_mode_pane_cp_ParamLimits

0x99bd,	// (0x00041d8e) cam6_mode_pane_cp

0x99d1,	// (0x00041da2) cam6_zoom_pane_cp_ParamLimits

0x99d1,	// (0x00041da2) cam6_zoom_pane_cp

0x99e9,	// (0x00041dba) vid6_image_uncrop_cif_pane_ParamLimits

0x99e9,	// (0x00041dba) vid6_image_uncrop_cif_pane

0x9a15,	// (0x00041de6) vid6_image_uncrop_nhd_pane_ParamLimits

0x9a15,	// (0x00041de6) vid6_image_uncrop_nhd_pane

0x9a32,	// (0x00041e03) vid6_image_uncrop_vga_pane_ParamLimits

0x9a32,	// (0x00041e03) vid6_image_uncrop_vga_pane

0x9a51,	// (0x00041e22) vid6_image_uncrop_wvga_pane_ParamLimits

0x9a51,	// (0x00041e22) vid6_image_uncrop_wvga_pane

0x9a6e,	// (0x00041e3f) vid6_indi_pane_ParamLimits

0x9a6e,	// (0x00041e3f) vid6_indi_pane

0x1982,	// (0x00039d53) bg_tb_trans_pane_cp09_ParamLimits

0x1982,	// (0x00039d53) bg_tb_trans_pane_cp09

0xc324,	// (0x000446f5) cam6_battery_pane_cp_ParamLimits

0xc324,	// (0x000446f5) cam6_battery_pane_cp

0xc330,	// (0x00044701) vid6_indi_pane_g1_ParamLimits

0xc330,	// (0x00044701) vid6_indi_pane_g1

0xc342,	// (0x00044713) vid6_indi_pane_g2_ParamLimits

0xc342,	// (0x00044713) vid6_indi_pane_g2

0xc354,	// (0x00044725) vid6_indi_pane_g3_ParamLimits

0xc354,	// (0x00044725) vid6_indi_pane_g3

0xc369,	// (0x0004473a) vid6_indi_pane_g4_ParamLimits

0xc369,	// (0x0004473a) vid6_indi_pane_g4

0xc37e,	// (0x0004474f) vid6_indi_pane_g5_ParamLimits

0xc37e,	// (0x0004474f) vid6_indi_pane_g5

0x0004,

0xfac0,	// (0x00047e91) vid6_indi_pane_g_ParamLimits

0xfac0,	// (0x00047e91) vid6_indi_pane_g

0xc398,	// (0x00044769) vid6_indi_pane_t1_ParamLimits

0xc398,	// (0x00044769) vid6_indi_pane_t1

0xc3ae,	// (0x0004477f) vid6_indi_pane_t2_ParamLimits

0xc3ae,	// (0x0004477f) vid6_indi_pane_t2

0xc3d6,	// (0x000447a7) vid6_indi_pane_t3_ParamLimits

0xc3d6,	// (0x000447a7) vid6_indi_pane_t3

0xc3fe,	// (0x000447cf) vid6_indi_pane_t4_ParamLimits

0xc3fe,	// (0x000447cf) vid6_indi_pane_t4

0x0003,

0xfacb,	// (0x00047e9c) vid6_indi_pane_t_ParamLimits

0xfacb,	// (0x00047e9c) vid6_indi_pane_t

0xc422,	// (0x000447f3) wait_bar_pane_cp08

0x9a93,	// (0x00041e64) main_cset_text2_pane_t1_ParamLimits

0x9a93,	// (0x00041e64) main_cset_text2_pane_t1

0x99a8,	// (0x00041d79) listscroll_gen_pane_cp06_t1_ParamLimits

0x99a8,	// (0x00041d79) listscroll_gen_pane_cp06_t1

0xd5cb,	// (0x0004599c) main_cam6_set_pane

0xe1e4,	// (0x000465b5) bg_tb_trans_pane_cp06_ParamLimits

0x8695,	// (0x00040a66) cam4_indicators_pane_g1_ParamLimits

0x86a6,	// (0x00040a77) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x00047c14) cam4_indicators_pane_g_ParamLimits

0x86c4,	// (0x00040a95) cam4_indicators_pane_t1_ParamLimits

0xe17d,	// (0x0004654e) bg_tb_trans_pane_cp07_ParamLimits

0x8777,	// (0x00040b48) vid4_indicators_pane_g1_ParamLimits

0x878b,	// (0x00040b5c) vid4_indicators_pane_g2_ParamLimits

0x879f,	// (0x00040b70) vid4_indicators_pane_g3_ParamLimits

0x87b0,	// (0x00040b81) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x00047c26) vid4_indicators_pane_g_ParamLimits

0x87ce,	// (0x00040b9f) vid4_indicators_pane_t1_ParamLimits

0x956c,	// (0x0004193d) vid4_progress_pane_g1_ParamLimits

0x957c,	// (0x0004194d) vid4_progress_pane_g2_ParamLimits

0x958c,	// (0x0004195d) vid4_progress_pane_g3_ParamLimits

0x959e,	// (0x0004196f) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x00047dcd) vid4_progress_pane_g_ParamLimits

0x95b6,	// (0x00041987) vid4_progress_pane_t1_ParamLimits

0x95cc,	// (0x0004199d) vid4_progress_pane_t2_ParamLimits

0x95e1,	// (0x000419b2) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x00047dd8) vid4_progress_pane_t_ParamLimits

0x95f6,	// (0x000419c7) wait_bar_pane_cp07_ParamLimits

0x9ac6,	// (0x00041e97) main_cam6_set_pane_g2_ParamLimits

0x9ac6,	// (0x00041e97) main_cam6_set_pane_g2

0x9ad2,	// (0x00041ea3) main_cset6_listscroll_pane_ParamLimits

0x9ad2,	// (0x00041ea3) main_cset6_listscroll_pane

0x9afd,	// (0x00041ece) main_cset6_slider_pane_ParamLimits

0x9afd,	// (0x00041ece) main_cset6_slider_pane

0x9b09,	// (0x00041eda) main_cset6_text2_pane_ParamLimits

0x9b09,	// (0x00041eda) main_cset6_text2_pane

0xc431,	// (0x00044802) main_cset6_text_pane

0xc439,	// (0x0004480a) main_cset_list_pane_copy1_ParamLimits

0xc439,	// (0x0004480a) main_cset_list_pane_copy1

0xc449,	// (0x0004481a) scroll_pane_cp028_copy1

0x9b1c,	// (0x00041eed) cset_list_set_pane_copy1

0x9b2f,	// (0x00041f00) aid_position_infowindow_above_copy1

0x9b37,	// (0x00041f08) aid_position_infowindow_below_copy1

0x3877,	// (0x0003bc48) cset_list_set_pane_g1_copy1

0x3609,	// (0x0003b9da) cset_list_set_pane_g3_copy1_ParamLimits

0x3609,	// (0x0003b9da) cset_list_set_pane_g3_copy1

0x3618,	// (0x0003b9e9) cset_list_set_pane_t1_copy1_ParamLimits

0x3618,	// (0x0003b9e9) cset_list_set_pane_t1_copy1

0xe17d,	// (0x0004654e) list_highlight_pane_cp021_copy1_ParamLimits

0xe17d,	// (0x0004654e) list_highlight_pane_cp021_copy1

0xc452,	// (0x00044823) cset6_slider_pane_ParamLimits

0xc452,	// (0x00044823) cset6_slider_pane

0xc47e,	// (0x0004484f) main_cset6_slider_pane_g1_ParamLimits

0xc47e,	// (0x0004484f) main_cset6_slider_pane_g1

0x9b3f,	// (0x00041f10) main_cset6_slider_pane_g2_ParamLimits

0x9b3f,	// (0x00041f10) main_cset6_slider_pane_g2

0xc4a6,	// (0x00044877) main_cset6_slider_pane_g3_ParamLimits

0xc4a6,	// (0x00044877) main_cset6_slider_pane_g3

0x9b67,	// (0x00041f38) main_cset6_slider_pane_g4_ParamLimits

0x9b67,	// (0x00041f38) main_cset6_slider_pane_g4

0x9b73,	// (0x00041f44) main_cset6_slider_pane_g5_ParamLimits

0x9b73,	// (0x00041f44) main_cset6_slider_pane_g5

0x1fd9,	// (0x0003a3aa) main_cset6_slider_pane_g7_ParamLimits

0x1fd9,	// (0x0003a3aa) main_cset6_slider_pane_g7

0x1fe5,	// (0x0003a3b6) main_cset6_slider_pane_g8_ParamLimits

0x1fe5,	// (0x0003a3b6) main_cset6_slider_pane_g8

0x9b81,	// (0x00041f52) main_cset6_slider_pane_g9_ParamLimits

0x9b81,	// (0x00041f52) main_cset6_slider_pane_g9

0x9b8d,	// (0x00041f5e) main_cset6_slider_pane_g10_ParamLimits

0x9b8d,	// (0x00041f5e) main_cset6_slider_pane_g10

0x9b99,	// (0x00041f6a) main_cset6_slider_pane_g11_ParamLimits

0x9b99,	// (0x00041f6a) main_cset6_slider_pane_g11

0x9ba5,	// (0x00041f76) main_cset6_slider_pane_g12_ParamLimits

0x9ba5,	// (0x00041f76) main_cset6_slider_pane_g12

0x9bb1,	// (0x00041f82) main_cset6_slider_pane_g13_ParamLimits

0x9bb1,	// (0x00041f82) main_cset6_slider_pane_g13

0x9bbd,	// (0x00041f8e) main_cset6_slider_pane_g14_ParamLimits

0x9bbd,	// (0x00041f8e) main_cset6_slider_pane_g14

0x9bc9,	// (0x00041f9a) main_cset6_slider_pane_g15_ParamLimits

0x9bc9,	// (0x00041f9a) main_cset6_slider_pane_g15

0x9be1,	// (0x00041fb2) main_cset6_slider_pane_g16_ParamLimits

0x9be1,	// (0x00041fb2) main_cset6_slider_pane_g16

0x9bef,	// (0x00041fc0) main_cset6_slider_pane_g17_ParamLimits

0x9bef,	// (0x00041fc0) main_cset6_slider_pane_g17

0x0011,

0xfad4,	// (0x00047ea5) main_cset6_slider_pane_g_ParamLimits

0xfad4,	// (0x00047ea5) main_cset6_slider_pane_g

0xc4b2,	// (0x00044883) main_cset6_slider_pane_t1_ParamLimits

0xc4b2,	// (0x00044883) main_cset6_slider_pane_t1

0x9c15,	// (0x00041fe6) main_cset6_slider_pane_t2_ParamLimits

0x9c15,	// (0x00041fe6) main_cset6_slider_pane_t2

0x9c40,	// (0x00042011) main_cset6_slider_pane_t3_ParamLimits

0x9c40,	// (0x00042011) main_cset6_slider_pane_t3

0x9c6b,	// (0x0004203c) main_cset6_slider_pane_t4_ParamLimits

0x9c6b,	// (0x0004203c) main_cset6_slider_pane_t4

0x9c96,	// (0x00042067) main_cset6_slider_pane_t5_ParamLimits

0x9c96,	// (0x00042067) main_cset6_slider_pane_t5

0xc4f3,	// (0x000448c4) main_cset6_slider_pane_t7_ParamLimits

0xc4f3,	// (0x000448c4) main_cset6_slider_pane_t7

0x9cc3,	// (0x00042094) main_cset6_slider_pane_t8_ParamLimits

0x9cc3,	// (0x00042094) main_cset6_slider_pane_t8

0x9ce7,	// (0x000420b8) main_cset6_slider_pane_t9_ParamLimits

0x9ce7,	// (0x000420b8) main_cset6_slider_pane_t9

0x9d0b,	// (0x000420dc) main_cset6_slider_pane_t10_ParamLimits

0x9d0b,	// (0x000420dc) main_cset6_slider_pane_t10

0x9d2f,	// (0x00042100) main_cset6_slider_pane_t11_ParamLimits

0x9d2f,	// (0x00042100) main_cset6_slider_pane_t11

0xc529,	// (0x000448fa) main_cset6_slider_pane_t14_ParamLimits

0xc529,	// (0x000448fa) main_cset6_slider_pane_t14

0xc562,	// (0x00044933) main_cset6_slider_pane_t15_ParamLimits

0xc562,	// (0x00044933) main_cset6_slider_pane_t15

0x000b,

0xfaf9,	// (0x00047eca) main_cset6_slider_pane_t_ParamLimits

0xfaf9,	// (0x00047eca) main_cset6_slider_pane_t

0x2428,	// (0x0003a7f9) cset_slider_pane_g1_copy1

0x2431,	// (0x0003a802) cset_slider_pane_g2_copy1

0x243a,	// (0x0003a80b) cset_slider_pane_g3_copy1

0xd5cb,	// (0x0004599c) bg_popup_sub_pane_cp011_copy1

0xc59b,	// (0x0004496c) main_cset_text_pane_g1_copy1

0x2157,	// (0x0003a528) main_cset_text_pane_t1_copy1

0x2165,	// (0x0003a536) main_cset_text_pane_t2_copy1

0x2173,	// (0x0003a544) main_cset_text_pane_t3_copy1

0x2181,	// (0x0003a552) main_cset_text_pane_t4_copy1

0x218f,	// (0x0003a560) main_cset_text_pane_t5_copy1

0xc5a3,	// (0x00044974) main_cset_text_pane_t6_copy1

0xc5b1,	// (0x00044982) main_cset_text_pane_t7_copy1

0x9d53,	// (0x00042124) main_cset_text2_pane_t1_copy1

0xe17d,	// (0x0004654e) main_ncimui_pane

0x6e29,	// (0x0003f1fa) popup_query_ncimui_window_ParamLimits

0x6e29,	// (0x0003f1fa) popup_query_ncimui_window

0x34ac,	// (0x0003b87d) field_cale_ev2_pane_g4_ParamLimits

0x34ac,	// (0x0003b87d) field_cale_ev2_pane_g4

0x7f23,	// (0x000402f4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f23,	// (0x000402f4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x00047bae) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x00047bae) cell_video_dialer_keypad_pane_g

0x7f3b,	// (0x0004030c) cell_video_dialer_keypad_pane_t1

0xd5cb,	// (0x0004599c) bg_popup_window_pane_cp012

0x1109,	// (0x000394da) heading_pane_cp06

0xc5dd,	// (0x000449ae) ncim_query_content_pane

0xd5cb,	// (0x0004599c) bg_popup_heading_pane_cp01

0xc5e5,	// (0x000449b6) ncim_heading_pane_t1

0xc5f3,	// (0x000449c4) ncim_indicator_popup_pane

0xc605,	// (0x000449d6) ncim_query_button_pane

0xc619,	// (0x000449ea) ncim_query_content_pane_t1

0xc62b,	// (0x000449fc) ncim_query_content_pane_t2

0x0005,

0xfb3d,	// (0x00047f0e) ncim_query_content_pane_t

0xc665,	// (0x00044a36) ncim_query_list_pane

0xc677,	// (0x00044a48) ncim_query_popup_pane

0xc5f3,	// (0x000449c4) ncim_indicator_popup_pane_ParamLimits

0x9ea6,	// (0x00042277) ncim_query_content_pane_g1_ParamLimits

0x9ea6,	// (0x00042277) ncim_query_content_pane_g1

0xc619,	// (0x000449ea) ncim_query_content_pane_t1_ParamLimits

0xc62b,	// (0x000449fc) ncim_query_content_pane_t2_ParamLimits

0x9eb2,	// (0x00042283) ncim_query_content_pane_t3_ParamLimits

0x9eb2,	// (0x00042283) ncim_query_content_pane_t3

0x9ecf,	// (0x000422a0) ncim_query_content_pane_t4_ParamLimits

0x9ecf,	// (0x000422a0) ncim_query_content_pane_t4

0x9eec,	// (0x000422bd) ncim_query_content_pane_t5_ParamLimits

0x9eec,	// (0x000422bd) ncim_query_content_pane_t5

0xc63d,	// (0x00044a0e) ncim_query_content_pane_t6_ParamLimits

0xc63d,	// (0x00044a0e) ncim_query_content_pane_t6

0xfb3d,	// (0x00047f0e) ncim_query_content_pane_t_ParamLimits

0xc665,	// (0x00044a36) ncim_query_list_pane_ParamLimits

0xc677,	// (0x00044a48) ncim_query_popup_pane_ParamLimits

0xc68b,	// (0x00044a5c) wait_bar_pane_cp04

0xd5cb,	// (0x0004599c) input_focus_pane_cp011

0xc693,	// (0x00044a64) ncim_query_popup_pane_t1

0xc6a1,	// (0x00044a72) ncim_list_query_list_pane_ParamLimits

0xc6a1,	// (0x00044a72) ncim_list_query_list_pane

0xd5cb,	// (0x0004599c) bg_button_pane_cp027

0xc6ae,	// (0x00044a7f) ncim_query_button_pane_g1

0xd5cb,	// (0x0004599c) list_highlight_pane_cp012

0xc6b8,	// (0x00044a89) ncim_list_query_list_pane_g1

0xc6c0,	// (0x00044a91) ncim_list_query_list_pane_t1

0x86b5,	// (0x00040a86) cam4_indicators_pane_g3_ParamLimits

0x86b5,	// (0x00040a86) cam4_indicators_pane_g3

0x87bc,	// (0x00040b8d) vid4_indicators_pane_g5_ParamLimits

0x87bc,	// (0x00040b8d) vid4_indicators_pane_g5

0x95aa,	// (0x0004197b) vid4_progress_pane_g5_ParamLimits

0x95aa,	// (0x0004197b) vid4_progress_pane_g5

0x9d92,	// (0x00042163) main_ncimui_pane_g1

0x9dfa,	// (0x000421cb) ncimui_group_query_pane_ParamLimits

0x9dfa,	// (0x000421cb) ncimui_group_query_pane

0x9e42,	// (0x00042213) ncimui_list_pane_ParamLimits

0x9e42,	// (0x00042213) ncimui_list_pane

0x9e69,	// (0x0004223a) ncimui_text_pane_ParamLimits

0x9e69,	// (0x0004223a) ncimui_text_pane

0x9f09,	// (0x000422da) ncimui_text_pane_t1_ParamLimits

0x9f09,	// (0x000422da) ncimui_text_pane_t1

0xc6ce,	// (0x00044a9f) ncimui_list_single_graphic_pane_ParamLimits

0xc6ce,	// (0x00044a9f) ncimui_list_single_graphic_pane

0x9f28,	// (0x000422f9) ncimui_query_pane_ParamLimits

0x9f28,	// (0x000422f9) ncimui_query_pane

0xd5cb,	// (0x0004599c) list_highlight_pane_cp013

0xc6de,	// (0x00044aaf) ncim_list_query_list_pane_t1_copy1

0xc6b8,	// (0x00044a89) ncim_list_single_graphic_pane_g1

0x9f3b,	// (0x0004230c) ncim_query_button_pane_cp01

0x9f47,	// (0x00042318) ncim_query_entry_pane_ParamLimits

0x9f47,	// (0x00042318) ncim_query_entry_pane

0x9f5a,	// (0x0004232b) ncimui_query_pane_g1

0x9f66,	// (0x00042337) ncimui_query_pane_t1_ParamLimits

0x9f66,	// (0x00042337) ncimui_query_pane_t1

0xe17d,	// (0x0004654e) input_focus_pane_cp012

0xc6ec,	// (0x00044abd) ncim_query_entry_pane_t1

0xe256,	// (0x00046627) main_im_pane_ParamLimits

0xe17d,	// (0x0004654e) main_mobtv_pane_ParamLimits

0xe17d,	// (0x0004654e) main_mobtv_pane

0x9bfd,	// (0x00041fce) main_cset6_slider_pane_g18_ParamLimits

0x9bfd,	// (0x00041fce) main_cset6_slider_pane_g18

0x9c09,	// (0x00041fda) main_cset6_slider_pane_g19_ParamLimits

0x9c09,	// (0x00041fda) main_cset6_slider_pane_g19

0xef90,	// (0x00047361) bg_main_mobtv_pane_ParamLimits

0xef90,	// (0x00047361) bg_main_mobtv_pane

0x9f7f,	// (0x00042350) main_mobtv_info_pane

0x9f8a,	// (0x0004235b) main_mobtv_loading_pane_ParamLimits

0x9f8a,	// (0x0004235b) main_mobtv_loading_pane

0xc6fe,	// (0x00044acf) main_mobtv_pg_channel_list_pane

0xc708,	// (0x00044ad9) main_mobtv_pg_hdr_pane

0x9f97,	// (0x00042368) main_mobtv_programe_curr_pane_ParamLimits

0x9f97,	// (0x00042368) main_mobtv_programe_curr_pane

0x9fa4,	// (0x00042375) main_mobtv_programe_next_pane_ParamLimits

0x9fa4,	// (0x00042375) main_mobtv_programe_next_pane

0xc711,	// (0x00044ae2) popup_mobtv_noti_window

0xe451,	// (0x00046822) main_tv_pg_hdr_pane_g1

0xc719,	// (0x00044aea) main_tv_pg_hdr_pane_g2

0xc721,	// (0x00044af2) main_tv_pg_hdr_pane_g3

0xc729,	// (0x00044afa) main_tv_pg_hdr_pane_g4

0xc731,	// (0x00044b02) main_tv_pg_hdr_pane_g5

0xc73b,	// (0x00044b0c) main_tv_pg_hdr_pane_g6

0xc745,	// (0x00044b16) main_tv_pg_hdr_pane_g7

0xc74f,	// (0x00044b20) main_tv_pg_hdr_pane_g8

0xc759,	// (0x00044b2a) main_tv_pg_hdr_pane_g9

0xc763,	// (0x00044b34) main_tv_pg_hdr_pane_g10

0xc76d,	// (0x00044b3e) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4a,	// (0x00047f1b) main_tv_pg_hdr_pane_g

0xc777,	// (0x00044b48) main_tv_pg_hdr_pane_t1

0xc785,	// (0x00044b56) main_tv_pg_hdr_pane_t2

0xc793,	// (0x00044b64) main_tv_pg_hdr_pane_t3

0xc7a3,	// (0x00044b74) main_tv_pg_hdr_pane_t4

0xc7b3,	// (0x00044b84) main_tv_pg_hdr_pane_t5

0x0004,

0xfb61,	// (0x00047f32) main_tv_pg_hdr_pane_t

0xc7c3,	// (0x00044b94) single_mobtv_pg_channel_pane_ParamLimits

0xc7c3,	// (0x00044b94) single_mobtv_pg_channel_pane

0xc7d5,	// (0x00044ba6) single_mobtv_pg_channel_table_pane

0xc7de,	// (0x00044baf) single_mobtv_pg_channel_thumb_pane

0xc7e7,	// (0x00044bb8) single_tv_pg_channel_pane_g1

0xc7f0,	// (0x00044bc1) single_tv_pg_channel_pane_g2

0x0001,

0xfb6c,	// (0x00047f3d) single_tv_pg_channel_pane_g

0xe1e4,	// (0x000465b5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe1e4,	// (0x000465b5) bg_single_mobtv_pg_channel_thumb_pane

0xc7f9,	// (0x00044bca) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc7f9,	// (0x00044bca) single_mobtv_pg_channel_thumb_pane_g1

0xc807,	// (0x00044bd8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc807,	// (0x00044bd8) single_mobtv_pg_channel_thumb_pane_g2

0xc813,	// (0x00044be4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc813,	// (0x00044be4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb71,	// (0x00047f42) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb71,	// (0x00047f42) single_mobtv_pg_channel_thumb_pane_g

0xc81f,	// (0x00044bf0) single_mobtv_pg_channel_thumb_pane_t1

0xc82d,	// (0x00044bfe) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb78,	// (0x00047f49) single_mobtv_pg_channel_thumb_pane_t

0xe451,	// (0x00046822) bg_single_mobtv_pg_channel_table_pane_g1

0xe451,	// (0x00046822) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0004776e) bg_single_mobtv_pg_channel_table_pane_g

0xc83b,	// (0x00044c0c) single_mobtv_pg_channel_table_pane_t1

0xc849,	// (0x00044c1a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb7d,	// (0x00047f4e) single_mobtv_pg_channel_table_pane_t

0x9fb9,	// (0x0004238a) main_mobtv_info_pane_g1_ParamLimits

0x9fb9,	// (0x0004238a) main_mobtv_info_pane_g1

0x9fd5,	// (0x000423a6) main_mobtv_info_pane_t1_ParamLimits

0x9fd5,	// (0x000423a6) main_mobtv_info_pane_t1

0xa04d,	// (0x0004241e) main_mobtv_info_pane_t2_ParamLimits

0xa04d,	// (0x0004241e) main_mobtv_info_pane_t2

0x0002,

0xfb87,	// (0x00047f58) main_mobtv_info_pane_t_ParamLimits

0xfb87,	// (0x00047f58) main_mobtv_info_pane_t

0xa0dc,	// (0x000424ad) wait_bar_pane_cp05

0xa0ee,	// (0x000424bf) main_mobtv_loading_pane_g1_ParamLimits

0xa0ee,	// (0x000424bf) main_mobtv_loading_pane_g1

0xa0fc,	// (0x000424cd) main_mobtv_loading_pane_g2_ParamLimits

0xa0fc,	// (0x000424cd) main_mobtv_loading_pane_g2

0xa108,	// (0x000424d9) main_mobtv_loading_pane_g3_ParamLimits

0xa108,	// (0x000424d9) main_mobtv_loading_pane_g3

0x0002,

0xfb8e,	// (0x00047f5f) main_mobtv_loading_pane_g_ParamLimits

0xfb8e,	// (0x00047f5f) main_mobtv_loading_pane_g

0xc857,	// (0x00044c28) main_mobtv_loading_pane_t1_ParamLimits

0xc857,	// (0x00044c28) main_mobtv_loading_pane_t1

0xc86f,	// (0x00044c40) main_mobtv_loading_pane_t2_ParamLimits

0xc86f,	// (0x00044c40) main_mobtv_loading_pane_t2

0x0001,

0xfb95,	// (0x00047f66) main_mobtv_loading_pane_t_ParamLimits

0xfb95,	// (0x00047f66) main_mobtv_loading_pane_t

0xa116,	// (0x000424e7) wait_bar_pane_cp06_ParamLimits

0xa116,	// (0x000424e7) wait_bar_pane_cp06

0xc893,	// (0x00044c64) main_mobtv_programe_curr_pane_t1

0xc8a1,	// (0x00044c72) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9a,	// (0x00047f6b) main_mobtv_programe_curr_pane_t

0xc8af,	// (0x00044c80) main_mobtv_programe_next_pane_t1

0xc8bd,	// (0x00044c8e) main_mobtv_programe_next_pane_t2

0xc8cb,	// (0x00044c9c) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9f,	// (0x00047f70) main_mobtv_programe_next_pane_t

0xd5cb,	// (0x0004599c) bg_popup_mobtv_noti_window_pane

0xc8d9,	// (0x00044caa) popup_mobtv_noti_window_g1

0xc8e1,	// (0x00044cb2) popup_mobtv_noti_window_t1

0xc8ef,	// (0x00044cc0) popup_mobtv_noti_window_t2

0x0001,

0xfba6,	// (0x00047f77) popup_mobtv_noti_window_t

0xe451,	// (0x00046822) bg_popup_mobtv_noti_window_pane_g1

0xd5cb,	// (0x0004599c) sc_clock_pane

0xd5cb,	// (0x0004599c) main_fs_bigclock_pane

0x9770,	// (0x00041b41) blid2_tripm_pane_t4_ParamLimits

0x9770,	// (0x00041b41) blid2_tripm_pane_t4

0xa122,	// (0x000424f3) sc_clock_pane_g1_ParamLimits

0xa122,	// (0x000424f3) sc_clock_pane_g1

0xa130,	// (0x00042501) sc_clock_pane_t1_ParamLimits

0xa130,	// (0x00042501) sc_clock_pane_t1

0xa143,	// (0x00042514) sc_clock_pane_t2_ParamLimits

0xa143,	// (0x00042514) sc_clock_pane_t2

0xa155,	// (0x00042526) sc_clock_pane_t3_ParamLimits

0xa155,	// (0x00042526) sc_clock_pane_t3

0x0004,

0xfbab,	// (0x00047f7c) sc_clock_pane_t_ParamLimits

0xfbab,	// (0x00047f7c) sc_clock_pane_t

0xaa40,	// (0x00042e11) main_fs_bigclock_indicator_pane_ParamLimits

0xaa40,	// (0x00042e11) main_fs_bigclock_indicator_pane

0xa1d8,	// (0x000425a9) main_fs_bigclock_pane_g1_ParamLimits

0xa1d8,	// (0x000425a9) main_fs_bigclock_pane_g1

0xaa4c,	// (0x00042e1d) main_fs_bigclock_pane_t1_ParamLimits

0xaa4c,	// (0x00042e1d) main_fs_bigclock_pane_t1

0xaa5e,	// (0x00042e2f) main_fs_bigclock_pane_t2_ParamLimits

0xaa5e,	// (0x00042e2f) main_fs_bigclock_pane_t2

0xaa72,	// (0x00042e43) main_fs_bigclock_pane_t3_ParamLimits

0xaa72,	// (0x00042e43) main_fs_bigclock_pane_t3

0x0002,

0xfd3c,	// (0x0004810d) main_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0004810d) main_fs_bigclock_pane_t

0xd153,	// (0x00045524) main_fs_bigclock_indicator_pane_g1

0xc60d,	// (0x000449de) ncim_query_content_pane_g2_ParamLimits

0xc60d,	// (0x000449de) ncim_query_content_pane_g2

0x0001,

0xfb38,	// (0x00047f09) ncim_query_content_pane_g_ParamLimits

0xfb38,	// (0x00047f09) ncim_query_content_pane_g

0xa169,	// (0x0004253a) sc_clock_pane_t4_ParamLimits

0xa169,	// (0x0004253a) sc_clock_pane_t4

0xe17d,	// (0x0004654e) main_radioblah_pane

0x8558,	// (0x00040929) cell_call4_button_pane_t1_copy1_ParamLimits

0x8558,	// (0x00040929) cell_call4_button_pane_t1_copy1

0x9dac,	// (0x0004217d) main_ncimui_pane_t1_ParamLimits

0x9dac,	// (0x0004217d) main_ncimui_pane_t1

0x9dc6,	// (0x00042197) main_ncimui_pane_t2_ParamLimits

0x9dc6,	// (0x00042197) main_ncimui_pane_t2

0x0002,

0xfb31,	// (0x00047f02) main_ncimui_pane_t_ParamLimits

0xfb31,	// (0x00047f02) main_ncimui_pane_t

0xca34,	// (0x00044e05) main_radioblah_anim_pane_ParamLimits

0xca34,	// (0x00044e05) main_radioblah_anim_pane

0xca45,	// (0x00044e16) main_radioblah_info_pane_ParamLimits

0xca45,	// (0x00044e16) main_radioblah_info_pane

0xca59,	// (0x00044e2a) main_radioblah_pane_t1_ParamLimits

0xca59,	// (0x00044e2a) main_radioblah_pane_t1

0xca75,	// (0x00044e46) main_radioblah_pane_t2_ParamLimits

0xca75,	// (0x00044e46) main_radioblah_pane_t2

0x0003,

0xfbcc,	// (0x00047f9d) main_radioblah_pane_t_ParamLimits

0xfbcc,	// (0x00047f9d) main_radioblah_pane_t

0xa22e,	// (0x000425ff) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa22e,	// (0x000425ff) main_radioblah_rocker_ctrl_pane

0xcabd,	// (0x00044e8e) main_radioblah_info_pane_t1_ParamLimits

0xcabd,	// (0x00044e8e) main_radioblah_info_pane_t1

0xa273,	// (0x00042644) main_radioblah_info_pane_t2_ParamLimits

0xa273,	// (0x00042644) main_radioblah_info_pane_t2

0x0003,

0xfbd5,	// (0x00047fa6) main_radioblah_info_pane_t_ParamLimits

0xfbd5,	// (0x00047fa6) main_radioblah_info_pane_t

0xe451,	// (0x00046822) main_radioblah_rocker_ctrl_pane_g1

0xa323,	// (0x000426f4) main_radioblah_rocker_ctrl_pane_g2

0xa32b,	// (0x000426fc) main_radioblah_rocker_ctrl_pane_g3

0xa333,	// (0x00042704) main_radioblah_rocker_ctrl_pane_g4

0xa33b,	// (0x0004270c) main_radioblah_rocker_ctrl_pane_g5

0xa343,	// (0x00042714) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbde,	// (0x00047faf) main_radioblah_rocker_ctrl_pane_g

0x9d53,	// (0x00042124) main_cset_text2_pane_t1_copy1_ParamLimits

0x85e3,	// (0x000409b4) cam4_image_uncrop_qvga_pane

0x872a,	// (0x00040afb) vid4_image_uncrop_qcif_pane

0x9904,	// (0x00041cd5) cam6_image_uncrop_qvga_pane_ParamLimits

0x9904,	// (0x00041cd5) cam6_image_uncrop_qvga_pane

0xc314,	// (0x000446e5) vid6_image_uncrop_qcif_pane_ParamLimits

0xc314,	// (0x000446e5) vid6_image_uncrop_qcif_pane

0xd5cb,	// (0x0004599c) bg_popup_preview_window_pane_cp03

0xc5bf,	// (0x00044990) list_cset_text2_pane

0xc5c7,	// (0x00044998) main_cset6_text2_pane_g1

0xc5cf,	// (0x000449a0) main_cset6_text2_pane_t1

0xa34b,	// (0x0004271c) list_cset_text2_pane_t1_ParamLimits

0xa34b,	// (0x0004271c) list_cset_text2_pane_t1

0xe17d,	// (0x0004654e) main_radioblah_pane_ParamLimits

0xa0c8,	// (0x00042499) main_mobtv_info_pane_t3_ParamLimits

0xa0c8,	// (0x00042499) main_mobtv_info_pane_t3

0xa21c,	// (0x000425ed) main_radioblah_pane_g1

0xa247,	// (0x00042618) main_radioblah_info_pane_g1

0xa2c8,	// (0x00042699) main_radioblah_info_pane_t3_ParamLimits

0xa2c8,	// (0x00042699) main_radioblah_info_pane_t3

0x5eab,	// (0x0003e27c) highlight_cell_cale_month_pane_ParamLimits

0x5eab,	// (0x0003e27c) highlight_cell_cale_month_pane

0xd5cb,	// (0x0004599c) main_phob_fisheye_pane

0x18ce,	// (0x00039c9f) scroll_pane_cp0031_ParamLimits

0x18ce,	// (0x00039c9f) scroll_pane_cp0031

0xc422,	// (0x000447f3) wait_bar_pane_cp08_ParamLimits

0x9b1c,	// (0x00041eed) cset_list_set_pane_copy1_ParamLimits

0xcaf7,	// (0x00044ec8) highlight_cell_cale_month_pane_g1

0xa368,	// (0x00042739) highlight_cell_cale_month_pane_t1

0x241f,	// (0x0003a7f0) list_gen_pane_cp01

0x1fc4,	// (0x0003a395) scroll_pane_01

0xa376,	// (0x00042747) list_single_double_fisheye_pane

0x389c,	// (0x0003bc6d) list_double_fisheye_pane_g1_ParamLimits

0x389c,	// (0x0003bc6d) list_double_fisheye_pane_g1

0x38a8,	// (0x0003bc79) list_double_fisheye_pane_g2_ParamLimits

0x38a8,	// (0x0003bc79) list_double_fisheye_pane_g2

0xa37f,	// (0x00042750) list_double_fisheye_pane_g3_ParamLimits

0xa37f,	// (0x00042750) list_double_fisheye_pane_g3

0x0004,

0xfbeb,	// (0x00047fbc) list_double_fisheye_pane_g_ParamLimits

0xfbeb,	// (0x00047fbc) list_double_fisheye_pane_g

0x38d9,	// (0x0003bcaa) list_double_fisheye_pane_t1_ParamLimits

0x38d9,	// (0x0003bcaa) list_double_fisheye_pane_t1

0x38f4,	// (0x0003bcc5) list_double_fisheye_pane_t2_ParamLimits

0x38f4,	// (0x0003bcc5) list_double_fisheye_pane_t2

0x0001,

0xfbf6,	// (0x00047fc7) list_double_fisheye_pane_t_ParamLimits

0xfbf6,	// (0x00047fc7) list_double_fisheye_pane_t

0xd5cb,	// (0x0004599c) main_call5_pane

0xa18f,	// (0x00042560) sc_swipe_pane_ParamLimits

0xa18f,	// (0x00042560) sc_swipe_pane

0xa397,	// (0x00042768) call5_image_pane_ParamLimits

0xa397,	// (0x00042768) call5_image_pane

0xa3a7,	// (0x00042778) call5_swipe_1_pane_ParamLimits

0xa3a7,	// (0x00042778) call5_swipe_1_pane

0xa3b3,	// (0x00042784) call5_swipe_2_pane_ParamLimits

0xa3b3,	// (0x00042784) call5_swipe_2_pane

0xa3cd,	// (0x0004279e) popup_call5_audio_first_window_ParamLimits

0xa3cd,	// (0x0004279e) popup_call5_audio_first_window

0xe1e4,	// (0x000465b5) call5_swipe_1_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) call5_swipe_1_pane_g1

0xcaff,	// (0x00044ed0) call5_swipe_1_pane_g2_ParamLimits

0xcaff,	// (0x00044ed0) call5_swipe_1_pane_g2

0x0001,

0xfbfb,	// (0x00047fcc) call5_swipe_1_pane_g_ParamLimits

0xfbfb,	// (0x00047fcc) call5_swipe_1_pane_g

0xcb0b,	// (0x00044edc) call5_swipe_1_pane_t1_ParamLimits

0xcb0b,	// (0x00044edc) call5_swipe_1_pane_t1

0xe1e4,	// (0x000465b5) call5_swipe_2_pane_g1_ParamLimits

0xe1e4,	// (0x000465b5) call5_swipe_2_pane_g1

0xcb20,	// (0x00044ef1) call5_swipe_2_pane_g2_ParamLimits

0xcb20,	// (0x00044ef1) call5_swipe_2_pane_g2

0x0001,

0xfc00,	// (0x00047fd1) call5_swipe_2_pane_g_ParamLimits

0xfc00,	// (0x00047fd1) call5_swipe_2_pane_g

0xcb2c,	// (0x00044efd) call5_swipe_2_pane_t1_ParamLimits

0xcb2c,	// (0x00044efd) call5_swipe_2_pane_t1

0xcb41,	// (0x00044f12) sc_swipe_pane_g1_ParamLimits

0xcb41,	// (0x00044f12) sc_swipe_pane_g1

0xcb4e,	// (0x00044f1f) sc_swipe_pane_g2_ParamLimits

0xcb4e,	// (0x00044f1f) sc_swipe_pane_g2

0x0001,

0xfc05,	// (0x00047fd6) sc_swipe_pane_g_ParamLimits

0xfc05,	// (0x00047fd6) sc_swipe_pane_g

0xcb5a,	// (0x00044f2b) sc_swipe_pane_t1_ParamLimits

0xcb5a,	// (0x00044f2b) sc_swipe_pane_t1

0xd5cb,	// (0x0004599c) main_cmail_launcher_pane

0xa3db,	// (0x000427ac) aid_size_cell_cmail_l_ParamLimits

0xa3db,	// (0x000427ac) aid_size_cell_cmail_l

0xa3e9,	// (0x000427ba) grid_cmail_l_pane_ParamLimits

0xa3e9,	// (0x000427ba) grid_cmail_l_pane

0xa3f9,	// (0x000427ca) cell_cmail_l_pane_ParamLimits

0xa3f9,	// (0x000427ca) cell_cmail_l_pane

0xcb6f,	// (0x00044f40) cell_cmail_l_pane_g1_ParamLimits

0xcb6f,	// (0x00044f40) cell_cmail_l_pane_g1

0xcb7b,	// (0x00044f4c) cell_cmail_l_pane_t1_ParamLimits

0xcb7b,	// (0x00044f4c) cell_cmail_l_pane_t1

0xcb91,	// (0x00044f62) cell_cmail_l_pane_t2_ParamLimits

0xcb91,	// (0x00044f62) cell_cmail_l_pane_t2

0x0001,

0xfc0a,	// (0x00047fdb) cell_cmail_l_pane_t_ParamLimits

0xfc0a,	// (0x00047fdb) cell_cmail_l_pane_t

0xe17d,	// (0x0004654e) grid_highlight_pane_cp018_ParamLimits

0xe17d,	// (0x0004654e) grid_highlight_pane_cp018

0x421d,	// (0x0003c5ee) main2_pane_ParamLimits

0x421d,	// (0x0003c5ee) main2_pane

0xe2e5,	// (0x000466b6) popup_sp_fs_action_menu_bg_pane_g1

0xe2ed,	// (0x000466be) popup_sp_fs_action_menu_bg_pane_g2

0xe2f5,	// (0x000466c6) popup_sp_fs_action_menu_bg_pane_g3

0xe2fd,	// (0x000466ce) popup_sp_fs_action_menu_bg_pane_g4

0xe305,	// (0x000466d6) popup_sp_fs_action_menu_bg_pane_g5

0xe30d,	// (0x000466de) popup_sp_fs_action_menu_bg_pane_g6

0xe315,	// (0x000466e6) popup_sp_fs_action_menu_bg_pane_g7

0xe31d,	// (0x000466ee) popup_sp_fs_action_menu_bg_pane_g8

0xe325,	// (0x000466f6) popup_sp_fs_action_menu_bg_pane_g9

0xe336,	// (0x00046707) popup_sp_fs_action_menu_bg_pane_g10

0xe336,	// (0x00046707) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000474d6) popup_sp_fs_action_menu_bg_pane_g

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g2

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00047584) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00047584) list_medium_line_x2_t3_g3_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t2

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g3_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_x2_t3_g2_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t2

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g2_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g2

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g3

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00047597) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00047597) list_medium_line_x2_t4_g4_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t2

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t3

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000475a0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000475a0) list_medium_line_x2_t4_g4_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g2

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g3

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00047597) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00047597) list_medium_line_x2_t2_g4_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g4_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_x2_t2_g4_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g2

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00047584) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00047584) list_medium_line_x2_t2_g3_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g3_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_x2_t2_g3_t

0x607b,	// (0x0003e44c) main_sp_fs_list_pane_ParamLimits

0x607b,	// (0x0003e44c) main_sp_fs_list_pane

0x6087,	// (0x0003e458) sp_fs_scroll_pane_ParamLimits

0x6087,	// (0x0003e458) sp_fs_scroll_pane

0xe994,	// (0x00046d65) list_medium_line_x2_t3_t1

0xe994,	// (0x00046d65) list_medium_line_x2_t3_t2

0xe994,	// (0x00046d65) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x00047652) list_medium_line_x2_t3_t

0xe994,	// (0x00046d65) list_medium_line_x3_t4_t1

0xe994,	// (0x00046d65) list_medium_line_x3_t4_t2

0xe994,	// (0x00046d65) list_medium_line_x3_t4_t3

0xe994,	// (0x00046d65) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x00047659) list_medium_line_x3_t4_t

0xe994,	// (0x00046d65) list_medium_line_x4_t5_t1

0xe994,	// (0x00046d65) list_medium_line_x4_t5_t2

0xe994,	// (0x00046d65) list_medium_line_x4_t5_t3

0xe994,	// (0x00046d65) list_medium_line_x4_t5_t4

0xe994,	// (0x00046d65) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x00047662) list_medium_line_x4_t5_t

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g1

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g2

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g3

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00047597) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00047597) list_medium_line_t4_g4_g

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t1

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t2

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t3

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t4_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000475a0) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000475a0) list_medium_line_t4_g4_t

0x6170,	// (0x0003e541) chi_dic_find_pane_g1

0x6de6,	// (0x0003f1b7) main_tport_pane

0xe994,	// (0x00046d65) list_medium_line_plain_t1

0xe1e4,	// (0x000465b5) list_medium_line_t2_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_t2_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_t2_g2_g

0xe46b,	// (0x0004683c) list_medium_line_t2_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_g2_t1

0xe46b,	// (0x0004683c) list_medium_line_t2_g2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_t2_g2_t

0x384a,	// (0x0003bc1b) aid_sp_fs_list_icon_a_sm

0x3852,	// (0x0003bc23) aid_sp_fs_list_icon_d

0xc0a4,	// (0x00044475) aid_sp_fs_text_primary

0x385a,	// (0x0003bc2b) aid_sp_fs_text_secondary

0xd5cb,	// (0x0004599c) list_medium_line

0xd5cb,	// (0x0004599c) list_medium_line_g2

0xd5cb,	// (0x0004599c) list_medium_line_g3

0xd5cb,	// (0x0004599c) list_medium_line_plain

0xd5cb,	// (0x0004599c) list_medium_line_plain_t2

0xd5cb,	// (0x0004599c) list_medium_line_plain_t3

0xd5cb,	// (0x0004599c) list_medium_line_right_icon

0xd5cb,	// (0x0004599c) list_medium_line_right_iconx2

0xd5cb,	// (0x0004599c) list_medium_line_t2

0xd5cb,	// (0x0004599c) list_medium_line_t2_g2

0xd5cb,	// (0x0004599c) list_medium_line_t2_g3

0xd5cb,	// (0x0004599c) list_medium_line_t2_right_icon

0xd5cb,	// (0x0004599c) list_medium_line_t2_right_iconx2

0xd5cb,	// (0x0004599c) list_medium_line_t3

0xd5cb,	// (0x0004599c) list_medium_line_t3_g2

0xd5cb,	// (0x0004599c) list_medium_line_t3_g3

0xd5cb,	// (0x0004599c) list_medium_line_t3_right_iconx2

0xd5cb,	// (0x0004599c) list_medium_line_t4_g4

0xd5cb,	// (0x0004599c) list_medium_line_x2

0xd5cb,	// (0x0004599c) list_medium_line_x2_t2_g2

0xd5cb,	// (0x0004599c) list_medium_line_x2_t2_g3

0xd5cb,	// (0x0004599c) list_medium_line_x2_t2_g4

0xd5cb,	// (0x0004599c) list_medium_line_x2_t3

0xd5cb,	// (0x0004599c) list_medium_line_x2_t3_g2

0xd5cb,	// (0x0004599c) list_medium_line_x2_t3_g3

0xd5cb,	// (0x0004599c) list_medium_line_x2_t3_g4

0xd5cb,	// (0x0004599c) list_medium_line_x2_t4_g2

0xd5cb,	// (0x0004599c) list_medium_line_x2_t4_g4

0xd5cb,	// (0x0004599c) list_medium_line_x3

0xd5cb,	// (0x0004599c) list_medium_line_x3_t4

0xd5cb,	// (0x0004599c) list_medium_line_x3_t4_g4

0xd5cb,	// (0x0004599c) list_medium_line_x4_t4

0xd5cb,	// (0x0004599c) list_medium_line_x4_t4_g7

0xd5cb,	// (0x0004599c) list_medium_line_x4_t5

0x3863,	// (0x0003bc34) list_single_fs_dyc_pane_ParamLimits

0x3863,	// (0x0003bc34) list_single_fs_dyc_pane

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g1

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g2

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g3

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g4

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g5

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x4_t4_g7_g6

0xe1f2,	// (0x000465c3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe1f2,	// (0x000465c3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb12,	// (0x00047ee3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb12,	// (0x00047ee3) list_medium_line_x4_t4_g7_g

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t1

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t2

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x4_t4_g7_t3

0xef2e,	// (0x000472ff) list_medium_line_x4_t4_g7_t4_ParamLimits

0xef2e,	// (0x000472ff) list_medium_line_x4_t4_g7_t4

0xef2e,	// (0x000472ff) list_medium_line_x4_t4_g7_t5_ParamLimits

0xef2e,	// (0x000472ff) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb21,	// (0x00047ef2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb21,	// (0x00047ef2) list_medium_line_x4_t4_g7_t

0x387f,	// (0x0003bc50) list_single_dyc_row_pane_ParamLimits

0x387f,	// (0x0003bc50) list_single_dyc_row_pane

0xa38b,	// (0x0004275c) call5_gesture_pane_ParamLimits

0xa38b,	// (0x0004275c) call5_gesture_pane

0xa3bf,	// (0x00042790) call5_windows_pane_ParamLimits

0xa3bf,	// (0x00042790) call5_windows_pane

0xa412,	// (0x000427e3) call5_swipe_1_pane_cp_ParamLimits

0xa412,	// (0x000427e3) call5_swipe_1_pane_cp

0xa41e,	// (0x000427ef) call5_swipe_2_pane_cp_ParamLimits

0xa41e,	// (0x000427ef) call5_swipe_2_pane_cp

0xe42f,	// (0x00046800) call5_image_pane_cp

0xa42a,	// (0x000427fb) popup_call5_audio_first_window_cp_ParamLimits

0xa42a,	// (0x000427fb) popup_call5_audio_first_window_cp

0xcb41,	// (0x00044f12) call5_swipe_1_pane_g1_cp_ParamLimits

0xcb41,	// (0x00044f12) call5_swipe_1_pane_g1_cp

0xcbae,	// (0x00044f7f) call5_swipe_1_pane_g2_cp

0xcb5a,	// (0x00044f2b) call5_swipe_1_pane_t1_cp_ParamLimits

0xcb5a,	// (0x00044f2b) call5_swipe_1_pane_t1_cp

0xcb41,	// (0x00044f12) call5_swipe_2_pane_g1_cp_ParamLimits

0xcb41,	// (0x00044f12) call5_swipe_2_pane_g1_cp

0xcbb6,	// (0x00044f87) call5_swipe_2_pane_g2_cp

0xcbbe,	// (0x00044f8f) call5_swipe_2_pane_t1_cp_ParamLimits

0xcbbe,	// (0x00044f8f) call5_swipe_2_pane_t1_cp

0xe17d,	// (0x0004654e) main_sp_fs_email_pane

0xcbd3,	// (0x00044fa4) main_sp_fs_listscroll_pane_te

0x3916,	// (0x0003bce7) popup_sp_fs_action_menu_pane_ParamLimits

0x3916,	// (0x0003bce7) popup_sp_fs_action_menu_pane

0xe451,	// (0x00046822) bg_sp_fs_ctrlbar_pane_g1

0xcbdc,	// (0x00044fad) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcbe5,	// (0x00044fb6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcbee,	// (0x00044fbf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe451,	// (0x00046822) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0f,	// (0x00047fe0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x13bb,	// (0x0003978c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x13bb,	// (0x0003978c) bg_sp_fs_ctrlbar_ddmenu_pane

0xcbf7,	// (0x00044fc8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcbf7,	// (0x00044fc8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc03,	// (0x00044fd4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcc03,	// (0x00044fd4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc18,	// (0x00047fe9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc18,	// (0x00047fe9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcc0f,	// (0x00044fe0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcc0f,	// (0x00044fe0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe451,	// (0x00046822) list_medium_line_t2_right_icon_g1

0xe994,	// (0x00046d65) list_medium_line_t2_right_icon_t1

0xe994,	// (0x00046d65) list_medium_line_t2_right_icon_t2

0x0001,

0xfc1d,	// (0x00047fee) list_medium_line_t2_right_icon_t

0xef82,	// (0x00047353) bg_sp_fs_ctrlbar_pane_ParamLimits

0xef82,	// (0x00047353) bg_sp_fs_ctrlbar_pane

0xa48f,	// (0x00042860) main_sp_fs_ctrlbar_button_pane_cp01

0xa497,	// (0x00042868) main_sp_fs_ctrlbar_ddmenu_pane

0xcc61,	// (0x00045032) main_sp_fs_ctrlbar_pane_g1

0xcc6d,	// (0x0004503e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc22,	// (0x00047ff3) main_sp_fs_ctrlbar_pane_g

0xa4d3,	// (0x000428a4) main_sp_fs_ctrlbar_pane_t1

0xa50e,	// (0x000428df) main_sp_fs_ctrlbar_pane

0xa524,	// (0x000428f5) main_sp_fs_listscroll_pane_te_cp01

0x395a,	// (0x0003bd2b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x395a,	// (0x0003bd2b) popup_sp_fs_action_menu_pane_cp01

0xe17d,	// (0x0004654e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe17d,	// (0x0004654e) bg_sp_fs_highlight_list_pane_cp01

0x397a,	// (0x0003bd4b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x397a,	// (0x0003bd4b) sp_fs_action_menu_list_gene_pane_g1

0xcc94,	// (0x00045065) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcc94,	// (0x00045065) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x00048001) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x00048001) sp_fs_action_menu_list_gene_pane_g

0x3989,	// (0x0003bd5a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3989,	// (0x0003bd5a) sp_fs_action_menu_list_gene_pane_t1

0x39a1,	// (0x0003bd72) sp_fs_action_menu_list_gene_pane_ParamLimits

0x39a1,	// (0x0003bd72) sp_fs_action_menu_list_gene_pane

0xcca1,	// (0x00045072) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcca1,	// (0x00045072) popup_sp_fs_action_menu_bg_pane

0x39c0,	// (0x0003bd91) sp_fs_action_menu_list_pane_ParamLimits

0x39c0,	// (0x0003bd91) sp_fs_action_menu_list_pane

0x39e0,	// (0x0003bdb1) sp_fs_scroll_pane_cp01_ParamLimits

0x39e0,	// (0x0003bdb1) sp_fs_scroll_pane_cp01

0xe994,	// (0x00046d65) list_medium_line_plain_t2_t1

0xe994,	// (0x00046d65) list_medium_line_plain_t2_t2

0x0001,

0xfc1d,	// (0x00047fee) list_medium_line_plain_t2_t

0xe994,	// (0x00046d65) list_medium_line_plain_t3_t1

0xe994,	// (0x00046d65) list_medium_line_plain_t3_t2

0xe994,	// (0x00046d65) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x00047652) list_medium_line_plain_t3_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_x2_t2_g2_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g2_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_x2_t2_g2_t

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_x2_t4_g2_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t2

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t3

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000475a0) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000475a0) list_medium_line_x2_t4_g2_t

0xe451,	// (0x00046822) list_medium_line_t3_right_iconx2_g1

0xe451,	// (0x00046822) list_medium_line_t3_right_iconx2_g2

0xe451,	// (0x00046822) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x00047773) list_medium_line_t3_right_iconx2_g

0xe994,	// (0x00046d65) list_medium_line_t3_right_iconx2_t1

0xe994,	// (0x00046d65) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x00047fee) list_medium_line_t3_right_iconx2_t

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g1

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g2

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g3

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00047597) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00047597) list_medium_line_x3_t4_g4_g

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t1

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t2

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t3

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000475a0) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000475a0) list_medium_line_x3_t4_g4_t

0x3a06,	// (0x0003bdd7) list_single_dyc_row_text_pane_t1_ParamLimits

0x3a06,	// (0x0003bdd7) list_single_dyc_row_text_pane_t1

0x3a3d,	// (0x0003be0e) list_single_dyc_row_text_pane_t2_ParamLimits

0x3a3d,	// (0x0003be0e) list_single_dyc_row_text_pane_t2

0x3ab3,	// (0x0003be84) list_single_dyc_row_text_pane_t3_ParamLimits

0x3ab3,	// (0x0003be84) list_single_dyc_row_text_pane_t3

0x0005,

0xfc35,	// (0x00048006) list_single_dyc_row_text_pane_t_ParamLimits

0xfc35,	// (0x00048006) list_single_dyc_row_text_pane_t

0x3b84,	// (0x0003bf55) list_single_dyc_row_pane_g1_ParamLimits

0x3b84,	// (0x0003bf55) list_single_dyc_row_pane_g1

0x3b90,	// (0x0003bf61) list_single_dyc_row_pane_g2_ParamLimits

0x3b90,	// (0x0003bf61) list_single_dyc_row_pane_g2

0x3b9c,	// (0x0003bf6d) list_single_dyc_row_pane_g3_ParamLimits

0x3b9c,	// (0x0003bf6d) list_single_dyc_row_pane_g3

0x3ba8,	// (0x0003bf79) list_single_dyc_row_pane_g4_ParamLimits

0x3ba8,	// (0x0003bf79) list_single_dyc_row_pane_g4

0x0003,

0xfc42,	// (0x00048013) list_single_dyc_row_pane_g_ParamLimits

0xfc42,	// (0x00048013) list_single_dyc_row_pane_g

0x3bb4,	// (0x0003bf85) list_single_dyc_row_text_pane_ParamLimits

0x3bb4,	// (0x0003bf85) list_single_dyc_row_text_pane

0xd5cb,	// (0x0004599c) bg_sp_fs_scroll_pane

0xccaf,	// (0x00045080) thumb_sp_fs_scroll_pane

0xe1e4,	// (0x000465b5) list_medium_line_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g1

0xe46b,	// (0x0004683c) list_medium_line_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t1

0xe1e4,	// (0x000465b5) list_medium_line_x2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_x2_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t1

0xe1e4,	// (0x000465b5) list_medium_line_x3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x3_g1

0xccb8,	// (0x00045089) list_medium_line_x3_g2_ParamLimits

0xccb8,	// (0x00045089) list_medium_line_x3_g2

0x0001,

0xfc4b,	// (0x0004801c) list_medium_line_x3_g_ParamLimits

0xfc4b,	// (0x0004801c) list_medium_line_x3_g

0xccc6,	// (0x00045097) list_medium_line_x3_t1_ParamLimits

0xccc6,	// (0x00045097) list_medium_line_x3_t1

0xccda,	// (0x000450ab) thumb_sp_fs_scroll_pane_g1

0xcce3,	// (0x000450b4) thumb_sp_fs_scroll_pane_g2

0xccec,	// (0x000450bd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x00048021) thumb_sp_fs_scroll_pane_g

0xccda,	// (0x000450ab) bg_sp_fs_scroll_pane_g1

0xcce3,	// (0x000450b4) bg_sp_fs_scroll_pane_g2

0xccec,	// (0x000450bd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x00048021) bg_sp_fs_scroll_pane_g

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g1

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g2

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g3

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00047597) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00047597) list_medium_line_x2_t3_g4_g

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t1

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t2

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_x2_t3_g4_t

0xe1e4,	// (0x000465b5) list_medium_line_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_g2_g

0xe46b,	// (0x0004683c) list_medium_line_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_g2_t1

0xe1e4,	// (0x000465b5) list_medium_line_t3_g2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g2_g1

0xe1e4,	// (0x000465b5) list_medium_line_t3_g2_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x00047592) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x00047592) list_medium_line_t3_g2_g

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t1

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t2

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_t3_g2_t

0xe451,	// (0x00046822) list_medium_line_right_icon_g1

0xe994,	// (0x00046d65) list_medium_line_right_icon_t1

0xe1e4,	// (0x000465b5) list_medium_line_t2_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g1

0xe46b,	// (0x0004683c) list_medium_line_t2_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_t1

0xe46b,	// (0x0004683c) list_medium_line_t2_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_t2_t

0xe1e4,	// (0x000465b5) list_medium_line_t3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g1

0xe46b,	// (0x0004683c) list_medium_line_t3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_t1

0xe46b,	// (0x0004683c) list_medium_line_t3_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_t2

0xe46b,	// (0x0004683c) list_medium_line_t3_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_t3_t

0xe1e4,	// (0x000465b5) list_medium_line_g3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g3_g1

0xe1e4,	// (0x000465b5) list_medium_line_g3_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g3_g2

0xe1e4,	// (0x000465b5) list_medium_line_g3_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00047584) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00047584) list_medium_line_g3_g

0xe46b,	// (0x0004683c) list_medium_line_g3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_g3_t1

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g1

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g2

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00047584) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00047584) list_medium_line_t2_g3_g

0xe46b,	// (0x0004683c) list_medium_line_t2_g3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_g3_t1

0xe46b,	// (0x0004683c) list_medium_line_t2_g3_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x00047607) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x00047607) list_medium_line_t2_g3_t

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g1_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g1

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g2_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g2

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g3_ParamLimits

0xe1e4,	// (0x000465b5) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00047584) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00047584) list_medium_line_t3_g3_g

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t1_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t1

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t2_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t2

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t3_ParamLimits

0xe46b,	// (0x0004683c) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004758b) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004758b) list_medium_line_t3_g3_t

0xe451,	// (0x00046822) list_medium_line_right_iconx2_g1

0xe451,	// (0x00046822) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004776e) list_medium_line_right_iconx2_g

0xe994,	// (0x00046d65) list_medium_line_right_iconx2_t1

0xe451,	// (0x00046822) list_medium_line_t2_right_iconx2_g1

0xe451,	// (0x00046822) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004776e) list_medium_line_t2_right_iconx2_g

0xe994,	// (0x00046d65) list_medium_line_t2_right_iconx2_t1

0xe994,	// (0x00046d65) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc1d,	// (0x00047fee) list_medium_line_t2_right_iconx2_t

0xe994,	// (0x00046d65) list_medium_line_x4_t4_t1

0xe994,	// (0x00046d65) list_medium_line_x4_t4_t2

0xe994,	// (0x00046d65) list_medium_line_x4_t4_t3

0xe994,	// (0x00046d65) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x00047659) list_medium_line_x4_t4_t

0xa55f,	// (0x00042930) tport_appsw_pane_ParamLimits

0xa55f,	// (0x00042930) tport_appsw_pane

0xa56d,	// (0x0004293e) tport_contact_pane_ParamLimits

0xa56d,	// (0x0004293e) tport_contact_pane

0xa57d,	// (0x0004294e) tport_listscroll_pane_ParamLimits

0xa57d,	// (0x0004294e) tport_listscroll_pane

0xa58d,	// (0x0004295e) cell_tport_appsw_pane_ParamLimits

0xa58d,	// (0x0004295e) cell_tport_appsw_pane

0xe1f2,	// (0x000465c3) tport_appsw_pane_g1_ParamLimits

0xe1f2,	// (0x000465c3) tport_appsw_pane_g1

0xccf5,	// (0x000450c6) tport_contact_pane_g1

0xc693,	// (0x00044a64) tport_contact_pane_t1

0xccfe,	// (0x000450cf) tport_contact_pane_t2

0x0001,

0xfc57,	// (0x00048028) tport_contact_pane_t

0xcd0c,	// (0x000450dd) list_tport_pane

0xcd15,	// (0x000450e6) scroll_pane_cp_030

0xa5c0,	// (0x00042991) cell_tport_appsw_pane_g1

0xa5d0,	// (0x000429a1) cell_tport_appsw_pane_t1

0xa5de,	// (0x000429af) grid_highlight_pane_cp019

0xa5e6,	// (0x000429b7) list_tport_double_graphic_pane_ParamLimits

0xa5e6,	// (0x000429b7) list_tport_double_graphic_pane

0xe17d,	// (0x0004654e) list_highlight_pane_cp023_ParamLimits

0xe17d,	// (0x0004654e) list_highlight_pane_cp023

0xa5f7,	// (0x000429c8) list_tport_double_graphic_pane_g1_ParamLimits

0xa5f7,	// (0x000429c8) list_tport_double_graphic_pane_g1

0xa604,	// (0x000429d5) list_tport_double_graphic_pane_t1_ParamLimits

0xa604,	// (0x000429d5) list_tport_double_graphic_pane_t1

0xa619,	// (0x000429ea) list_tport_double_graphic_pane_t2_ParamLimits

0xa619,	// (0x000429ea) list_tport_double_graphic_pane_t2

0x0001,

0xfc63,	// (0x00048034) list_tport_double_graphic_pane_t_ParamLimits

0xfc63,	// (0x00048034) list_tport_double_graphic_pane_t

0xd5cb,	// (0x0004599c) main_cale_note_pane

0x8987,	// (0x00040d58) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8987,	// (0x00040d58) cell_vitu2_function_top_wide_pane_cp01

0xa0dc,	// (0x000424ad) wait_bar_pane_cp05_ParamLimits

0xe17d,	// (0x0004654e) listscroll_cmail_pane

0xcd26,	// (0x000450f7) list_cmail_pane

0xa62b,	// (0x000429fc) list_cmail_body_pane

0xa652,	// (0x00042a23) list_single_cmail_header_caption_pane

0xa67b,	// (0x00042a4c) list_single_cmail_header_detail_pane_ParamLimits

0xa67b,	// (0x00042a4c) list_single_cmail_header_detail_pane

0xcd3d,	// (0x0004510e) list_single_cmail_header_caption_pane_t1

0x3bd3,	// (0x0003bfa4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3bd3,	// (0x0003bfa4) list_single_cmail_header_detail_pane_g1

0x3be9,	// (0x0003bfba) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3be9,	// (0x0003bfba) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc68,	// (0x00048039) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc68,	// (0x00048039) list_single_cmail_header_detail_pane_g

0x3bf5,	// (0x0003bfc6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3bf5,	// (0x0003bfc6) list_single_cmail_header_detail_pane_t1

0x3c55,	// (0x0003c026) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3c55,	// (0x0003c026) list_single_cmail_header_editor_pane_bg

0xc7f0,	// (0x00044bc1) list_cmail_body_pane_g1

0xcd61,	// (0x00045132) list_cmail_body_pane_t1

0x1e98,	// (0x0003a269) list_single_cmail_header_editor_pane_bg_g1

0xe676,	// (0x00046a47) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1ea8,	// (0x0003a279) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1ea0,	// (0x0003a271) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2108,	// (0x0003a4d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1ec8,	// (0x0003a299) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1eb8,	// (0x0003a289) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1ec0,	// (0x0003a291) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe656,	// (0x00046a27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa6b5,	// (0x00042a86) calenote_gesture_pane_ParamLimits

0xa6b5,	// (0x00042a86) calenote_gesture_pane

0xa6cf,	// (0x00042aa0) calenote_window_pane_ParamLimits

0xa6cf,	// (0x00042aa0) calenote_window_pane

0xcd6f,	// (0x00045140) popup_note_window_cp01

0xa6e7,	// (0x00042ab8) calenote_swipe_1_pane_ParamLimits

0xa6e7,	// (0x00042ab8) calenote_swipe_1_pane

0xa41e,	// (0x000427ef) calenote_swipe_2_pane_ParamLimits

0xa41e,	// (0x000427ef) calenote_swipe_2_pane

0xcb41,	// (0x00044f12) calenote_swipe_1_pane_g1_ParamLimits

0xcb41,	// (0x00044f12) calenote_swipe_1_pane_g1

0xcb4e,	// (0x00044f1f) calenote_swipe_1_pane_g2_ParamLimits

0xcb4e,	// (0x00044f1f) calenote_swipe_1_pane_g2

0x0001,

0xfc05,	// (0x00047fd6) calenote_swipe_1_pane_g_ParamLimits

0xfc05,	// (0x00047fd6) calenote_swipe_1_pane_g

0xcd81,	// (0x00045152) calenote_swipe_1_pane_t1_ParamLimits

0xcd81,	// (0x00045152) calenote_swipe_1_pane_t1

0xcb41,	// (0x00044f12) calenote_swipe_2_pane_g1_ParamLimits

0xcb41,	// (0x00044f12) calenote_swipe_2_pane_g1

0xcda0,	// (0x00045171) calenote_swipe_2_pane_g2_ParamLimits

0xcda0,	// (0x00045171) calenote_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x00048045) calenote_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x00048045) calenote_swipe_2_pane_g

0xcdac,	// (0x0004517d) calenote_swipe_2_pane_t1_ParamLimits

0xcdac,	// (0x0004517d) calenote_swipe_2_pane_t1

0xd5cb,	// (0x0004599c) main_mup_navstr_pane

0x77f9,	// (0x0003fbca) main_mup3_pane_t7_ParamLimits

0x77f9,	// (0x0003fbca) main_mup3_pane_t7

0x8024,	// (0x000403f5) main_mp4_pane_g6_ParamLimits

0x8024,	// (0x000403f5) main_mp4_pane_g6

0x83b4,	// (0x00040785) main_image3_pane_t4_ParamLimits

0x83b4,	// (0x00040785) main_image3_pane_t4

0xa6fa,	// (0x00042acb) popup_navstr_preview_pane_ParamLimits

0xa6fa,	// (0x00042acb) popup_navstr_preview_pane

0xa706,	// (0x00042ad7) scroll_navstr_pane_ParamLimits

0xa706,	// (0x00042ad7) scroll_navstr_pane

0xd5cb,	// (0x0004599c) bg_popup_preview_window_pane_cp04

0xcdd3,	// (0x000451a4) popup_navstr_preview_pane_t1

0xa712,	// (0x00042ae3) scroll_navstr_pane_g1_ParamLimits

0xa712,	// (0x00042ae3) scroll_navstr_pane_g1

0xa71f,	// (0x00042af0) scroll_navstr_pane_t1_ParamLimits

0xa71f,	// (0x00042af0) scroll_navstr_pane_t1

0xcd78,	// (0x00045149) bg_button_pane_cp014

0xcd78,	// (0x00045149) bg_button_pane_cp030

0x38bc,	// (0x0003bc8d) list_double_fisheye_pane_g4_ParamLimits

0x38bc,	// (0x0003bc8d) list_double_fisheye_pane_g4

0x38c8,	// (0x0003bc99) list_double_fisheye_pane_g5_ParamLimits

0x38c8,	// (0x0003bc99) list_double_fisheye_pane_g5

0x1990,	// (0x00039d61) sp_fs_scroll_pane_cp03

0xcc61,	// (0x00045032) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcc6d,	// (0x0004503e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc22,	// (0x00047ff3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa4d3,	// (0x000428a4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd35,	// (0x00045106) sp_fs_scroll_pane_cp02

0xe359,	// (0x0004672a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe359,	// (0x0004672a) popup_sp_fs_calendar_preview_list_single_pane

0xd5cb,	// (0x0004599c) main_cam6_pano_pane

0xe17d,	// (0x0004654e) main_mup3_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_phacti_pane

0x9fb1,	// (0x00042382) bg_button_pane_cp11

0x9fc9,	// (0x0004239a) main_mobtv_info_pane_g2_ParamLimits

0x9fc9,	// (0x0004239a) main_mobtv_info_pane_g2

0x0001,

0xfb82,	// (0x00047f53) main_mobtv_info_pane_g_ParamLimits

0xfb82,	// (0x00047f53) main_mobtv_info_pane_g

0xa17b,	// (0x0004254c) sc_clock_pane_t5_ParamLimits

0xa17b,	// (0x0004254c) sc_clock_pane_t5

0xa21c,	// (0x000425ed) main_radioblah_pane_g1_ParamLimits

0xca8d,	// (0x00044e5e) main_radioblah_pane_t3_ParamLimits

0xca8d,	// (0x00044e5e) main_radioblah_pane_t3

0xcaa5,	// (0x00044e76) main_radioblah_pane_t4_ParamLimits

0xcaa5,	// (0x00044e76) main_radioblah_pane_t4

0xa23a,	// (0x0004260b) main_radioblah_text_pane_ParamLimits

0xa23a,	// (0x0004260b) main_radioblah_text_pane

0xa247,	// (0x00042618) main_radioblah_info_pane_g1_ParamLimits

0xa2dc,	// (0x000426ad) main_radioblah_info_pane_t4_ParamLimits

0xa2dc,	// (0x000426ad) main_radioblah_info_pane_t4

0xe17d,	// (0x0004654e) main_sp_fs_calendar_pane

0xa731,	// (0x00042b02) main_phacti_pane_g1

0xa739,	// (0x00042b0a) phacti_note_pane_ParamLimits

0xa739,	// (0x00042b0a) phacti_note_pane

0xcdea,	// (0x000451bb) phacti_term_pane_ParamLimits

0xcdea,	// (0x000451bb) phacti_term_pane

0xcdff,	// (0x000451d0) phacti_note_pane_t1_ParamLimits

0xcdff,	// (0x000451d0) phacti_note_pane_t1

0x3c6c,	// (0x0003c03d) phacti_term_pane_g1

0x3c74,	// (0x0003c045) phacti_term_pane_t1_ParamLimits

0x3c74,	// (0x0003c045) phacti_term_pane_t1

0xce16,	// (0x000451e7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe416,	// (0x000467e7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc7e,	// (0x0004804f) popup_sp_fs_calendar_preview_list_single_pane_g

0xce1e,	// (0x000451ef) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce1e,	// (0x000451ef) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce34,	// (0x00045205) aid_popup_sp_fs_bg_corner_pane

0xe451,	// (0x00046822) popup_sp_fs_calendar_preview_bg_pane_g1

0xd5cb,	// (0x0004599c) popup_sp_fs_calendar_preview_bg_pane

0xce3c,	// (0x0004520d) popup_sp_fs_calendar_preview_list_pane

0xef82,	// (0x00047353) bg_main_sp_fs_cale_pane_ParamLimits

0xef82,	// (0x00047353) bg_main_sp_fs_cale_pane

0x3ca7,	// (0x0003c078) listscroll_cale_mrui_pane_ParamLimits

0x3ca7,	// (0x0003c078) listscroll_cale_mrui_pane

0x3cbc,	// (0x0003c08d) listscroll_sp_fs_schedule_track_pane

0x3cc5,	// (0x0003c096) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3cc5,	// (0x0003c096) main_sp_fs_ctrlbar_pane_cp01

0xce44,	// (0x00045215) main_sp_fs_ribbon_pane

0x3cd8,	// (0x0003c0a9) popup_sp_fs_cale_preview_window

0xa79c,	// (0x00042b6d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa79c,	// (0x00042b6d) list_single_sp_fs_schedule_track_pane

0xe1ca,	// (0x0004659b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe1ca,	// (0x0004659b) bg_sp_fs_highlight_list_pane_cp03

0xa7bc,	// (0x00042b8d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa7bc,	// (0x00042b8d) list_single_sp_fs_schedule_track_pane_g1

0xa7c8,	// (0x00042b99) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa7c8,	// (0x00042b99) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc83,	// (0x00048054) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc83,	// (0x00048054) list_single_sp_fs_schedule_track_pane_g

0xa7d4,	// (0x00042ba5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa7d4,	// (0x00042ba5) list_single_sp_fs_schedule_track_pane_t1

0xa7ec,	// (0x00042bbd) sp_fs_schedule_track_pane_ParamLimits

0xa7ec,	// (0x00042bbd) sp_fs_schedule_track_pane

0xce4c,	// (0x0004521d) sp_fs_schedule_track_pane_g1

0xce54,	// (0x00045225) sp_fs_schedule_track_pane_g2

0xce5c,	// (0x0004522d) sp_fs_schedule_track_pane_g3

0xce64,	// (0x00045235) sp_fs_schedule_track_pane_g4

0xce6c,	// (0x0004523d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc88,	// (0x00048059) sp_fs_schedule_track_pane_g

0x1e98,	// (0x0003a269) bg_sp_fs_schedule_viewer_highlight_g1

0xe676,	// (0x00046a47) bg_sp_fs_schedule_viewer_highlight_g2

0x1ea0,	// (0x0003a271) bg_sp_fs_schedule_viewer_highlight_g3

0x1ea8,	// (0x0003a279) bg_sp_fs_schedule_viewer_highlight_g4

0x2108,	// (0x0003a4d9) bg_sp_fs_schedule_viewer_highlight_g5

0x1eb8,	// (0x0003a289) bg_sp_fs_schedule_viewer_highlight_g6

0x1ec0,	// (0x0003a291) bg_sp_fs_schedule_viewer_highlight_g7

0x1ec8,	// (0x0003a299) bg_sp_fs_schedule_viewer_highlight_g8

0xe656,	// (0x00046a27) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc93,	// (0x00048064) bg_sp_fs_schedule_viewer_highlight_g

0xd5cb,	// (0x0004599c) bg_main_sp_fs_ribbon_pane

0xa7fc,	// (0x00042bcd) main_sp_fs_ribbon_pane_g1

0xce74,	// (0x00045245) main_sp_fs_ribbon_pane_t1

0xa805,	// (0x00042bd6) main_sp_fs_ribbon_pane_t2

0xce83,	// (0x00045254) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca6,	// (0x00048077) main_sp_fs_ribbon_pane_t

0xce92,	// (0x00045263) main_sp_fs_ribbon_scheduler_pane

0xce9a,	// (0x0004526b) bg_main_sp_fs_ribbon_pane_g1

0xcea3,	// (0x00045274) bg_main_sp_fs_ribbon_pane_g2

0xceac,	// (0x0004527d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcad,	// (0x0004807e) bg_main_sp_fs_ribbon_pane_g

0xceb4,	// (0x00045285) main_sp_fs_ribbon_scheduler_pane_g1

0xcebd,	// (0x0004528e) main_sp_fs_ribbon_scheduler_pane_g2

0xcec6,	// (0x00045297) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb4,	// (0x00048085) main_sp_fs_ribbon_scheduler_pane_g

0xcecf,	// (0x000452a0) list_cale_mrui_pane

0xa814,	// (0x00042be5) sp_fs_scroll_pane_cp07_ParamLimits

0xa814,	// (0x00042be5) sp_fs_scroll_pane_cp07

0xa830,	// (0x00042c01) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa830,	// (0x00042c01) bg_sp_fs_schedule_viewer_highlight

0xcedc,	// (0x000452ad) list_single_sp_fs_schedule_track_pane_cp01

0xcee4,	// (0x000452b5) list_sp_fs_schedule_track_pane

0xceec,	// (0x000452bd) sp_fs_scroll_pane_cp06_ParamLimits

0xceec,	// (0x000452bd) sp_fs_scroll_pane_cp06

0xe451,	// (0x00046822) bgmain_sp_fs_calendar_pane_g1

0x3cea,	// (0x0003c0bb) list_single_cale_mrui_pane_ParamLimits

0x3cea,	// (0x0003c0bb) list_single_cale_mrui_pane

0x3d18,	// (0x0003c0e9) list_single_cale_mrui_row_pane_ParamLimits

0x3d18,	// (0x0003c0e9) list_single_cale_mrui_row_pane

0x3d25,	// (0x0003c0f6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3d25,	// (0x0003c0f6) list_single_cale_mrui_row_pane_g1

0x3d5d,	// (0x0003c12e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3d5d,	// (0x0003c12e) list_single_cale_mrui_row_pane_t1

0x3d6f,	// (0x0003c140) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3d6f,	// (0x0003c140) list_single_cale_mrui_row_pane_t2

0x3dd5,	// (0x0003c1a6) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3dd5,	// (0x0003c1a6) list_single_cale_mrui_row_pane_t3

0x3e04,	// (0x0003c1d5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3e04,	// (0x0003c1d5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc2,	// (0x00048093) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc2,	// (0x00048093) list_single_cale_mrui_row_pane_t

0x3e33,	// (0x0003c204) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3e33,	// (0x0003c204) list_single_cmail_header_editor_pane_bg_cp01

0x3e5b,	// (0x0003c22c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3e5b,	// (0x0003c22c) list_single_cmail_header_editor_pane_bg_cp02

0xa83d,	// (0x00042c0e) main_radioblah_text_pane_t1_ParamLimits

0xa83d,	// (0x00042c0e) main_radioblah_text_pane_t1

0xcf0b,	// (0x000452dc) cam6_indi_pane_cp01

0xcf13,	// (0x000452e4) cam6_mode_pane_cp01

0xcf1b,	// (0x000452ec) cam6_pano_pane

0xcf24,	// (0x000452f5) cam6_zoom_pane_cp01

0xcf2c,	// (0x000452fd) cam6_pano_image_pane

0xcf37,	// (0x00045308) cam6_pano_pane_g1

0xc7f0,	// (0x00044bc1) cam6_pano_pane_g2

0xcf40,	// (0x00045311) cam6_pano_pane_g3

0xcf49,	// (0x0004531a) cam6_pano_pane_g4

0x1b49,	// (0x00039f1a) cam6_pano_pane_g5

0xcf52,	// (0x00045323) cam6_pano_pane_g6

0x2443,	// (0x0003a814) cam6_pano_pane_g7

0xcf5c,	// (0x0004532d) cam6_pano_pane_g8

0xcf65,	// (0x00045336) cam6_pano_pane_g9

0x0008,

0xfccb,	// (0x0004809c) cam6_pano_pane_g

0xd5cb,	// (0x0004599c) main_browser_tag_pane

0xcdcb,	// (0x0004519c) grid_navstr_albumart_pane

0xcf70,	// (0x00045341) cell_navstr_albumart_pane_ParamLimits

0xcf70,	// (0x00045341) cell_navstr_albumart_pane

0xcf90,	// (0x00045361) cell_navstr_albumart_pane_g1

0x1049,	// (0x0003941a) cell_navstr_albumart_pane_g2

0x1059,	// (0x0003942a) cell_navstr_albumart_pane_g3

0x1051,	// (0x00039422) cell_navstr_albumart_pane_g4

0x0003,

0xfcde,	// (0x000480af) cell_navstr_albumart_pane_g

0xa858,	// (0x00042c29) bt_list_pane_ParamLimits

0xa858,	// (0x00042c29) bt_list_pane

0xa878,	// (0x00042c49) bt_list_pane_t1

0xa887,	// (0x00042c58) bt_list_pane_t2

0x0001,

0xfce7,	// (0x000480b8) bt_list_pane_t

0xd5cb,	// (0x0004599c) main_cale_prevew_pane

0xa896,	// (0x00042c67) popup_cale_preview_window_ParamLimits

0xa896,	// (0x00042c67) popup_cale_preview_window

0xe17d,	// (0x0004654e) bg_popup_preview_window_pane_cp05_ParamLimits

0xe17d,	// (0x0004654e) bg_popup_preview_window_pane_cp05

0xcf98,	// (0x00045369) list_cale_preview_pane_ParamLimits

0xcf98,	// (0x00045369) list_cale_preview_pane

0xa8af,	// (0x00042c80) list_double_cale_preview_pane_ParamLimits

0xa8af,	// (0x00042c80) list_double_cale_preview_pane

0xa8c1,	// (0x00042c92) list_single_cale_preview_pane_ParamLimits

0xa8c1,	// (0x00042c92) list_single_cale_preview_pane

0xa8d7,	// (0x00042ca8) list_single_cale_preview_pane_g1

0xa8df,	// (0x00042cb0) list_single_cale_preview_pane_t1_ParamLimits

0xa8df,	// (0x00042cb0) list_single_cale_preview_pane_t1

0xa8f4,	// (0x00042cc5) list_double_cale_preview_pane_g1

0xa8fc,	// (0x00042ccd) list_double_cale_preview_pane_t1_ParamLimits

0xa8fc,	// (0x00042ccd) list_double_cale_preview_pane_t1

0xa911,	// (0x00042ce2) list_double_cale_preview_pane_t2_ParamLimits

0xa911,	// (0x00042ce2) list_double_cale_preview_pane_t2

0x0001,

0xfcec,	// (0x000480bd) list_double_cale_preview_pane_t_ParamLimits

0xfcec,	// (0x000480bd) list_double_cale_preview_pane_t

0xd5cb,	// (0x0004599c) main_ezdial_pane

0xe17d,	// (0x0004654e) main_sp_fs_email_pane_ParamLimits

0xa438,	// (0x00042809) cmail_ddmenu_btn01_pane_ParamLimits

0xa438,	// (0x00042809) cmail_ddmenu_btn01_pane

0xa455,	// (0x00042826) cmail_ddmenu_btn02_pane_ParamLimits

0xa455,	// (0x00042826) cmail_ddmenu_btn02_pane

0xa473,	// (0x00042844) cmail_ddmenu_btn03_pane_ParamLimits

0xa473,	// (0x00042844) cmail_ddmenu_btn03_pane

0xa50e,	// (0x000428df) main_sp_fs_ctrlbar_pane_ParamLimits

0xa524,	// (0x000428f5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa62b,	// (0x000429fc) list_cmail_body_pane_ParamLimits

0xcd4b,	// (0x0004511c) bg_button_pane_cp12

0xcd54,	// (0x00045125) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd54,	// (0x00045125) list_single_cmail_header_detail_pane_g3

0x3c31,	// (0x0003c002) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3c31,	// (0x0003c002) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6f,	// (0x00048040) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6f,	// (0x00048040) list_single_cmail_header_detail_pane_t

0x3c89,	// (0x0003c05a) phacti_term_pane_t2_ParamLimits

0x3c89,	// (0x0003c05a) phacti_term_pane_t2

0x0001,

0xfc79,	// (0x0004804a) phacti_term_pane_t_ParamLimits

0xfc79,	// (0x0004804a) phacti_term_pane_t

0xcfa4,	// (0x00045375) aid_size_list_single_double

0xa929,	// (0x00042cfa) popup_ezdial_listscroll_window

0xa94a,	// (0x00042d1b) popup_number_entry_window_cp01

0xe42f,	// (0x00046800) bg_popup_call_pane_cp09

0xcfb0,	// (0x00045381) ezdial_list_pane

0xcfb8,	// (0x00045389) scroll_pane_cp23

0x13bb,	// (0x0003978c) bg_button_pane_cp028_ParamLimits

0x13bb,	// (0x0003978c) bg_button_pane_cp028

0xa958,	// (0x00042d29) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa958,	// (0x00042d29) cmail_ddmenu_btn01_pane_g1

0xa968,	// (0x00042d39) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa968,	// (0x00042d39) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf1,	// (0x000480c2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf1,	// (0x000480c2) cmail_ddmenu_btn01_pane_g

0xcfc0,	// (0x00045391) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcfc0,	// (0x00045391) cmail_ddmenu_btn01_pane_t1

0xef82,	// (0x00047353) bg_button_pane_cp029_ParamLimits

0xef82,	// (0x00047353) bg_button_pane_cp029

0xa974,	// (0x00042d45) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa974,	// (0x00042d45) cmail_ddmenu_btn02_pane_g1

0xa98c,	// (0x00042d5d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa98c,	// (0x00042d5d) cmail_ddmenu_btn02_pane_t1

0xe1ca,	// (0x0004659b) bg_button_pane_cp031_ParamLimits

0xe1ca,	// (0x0004659b) bg_button_pane_cp031

0xa974,	// (0x00042d45) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa974,	// (0x00042d45) cmail_ddmenu_btn03_pane_g1

0xa98c,	// (0x00042d5d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa98c,	// (0x00042d5d) cmail_ddmenu_btn03_pane_t1

0x825f,	// (0x00040630) cell_dialer2_keypad_pane_t1_ParamLimits

0x8279,	// (0x0004064a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8279,	// (0x0004064a) cell_dialer2_keypad_pane_t1_copy1

0x9df2,	// (0x000421c3) ncimui_group_button_pane

0xe17d,	// (0x0004654e) main_sp_fs_calendar_pane_ParamLimits

0xa652,	// (0x00042a23) list_single_cmail_header_caption_pane_ParamLimits

0x3c9e,	// (0x0003c06f) aid_recal_txt_sm_pane

0xd5cb,	// (0x0004599c) mian_recal_day_pane

0x3cd8,	// (0x0003c0a9) popup_sp_fs_cale_preview_window_ParamLimits

0xcfd6,	// (0x000453a7) list_recal_day_pane

0x3e92,	// (0x0003c263) list_single_recal_day_pane_ParamLimits

0x3e92,	// (0x0003c263) list_single_recal_day_pane

0xcffd,	// (0x000453ce) list_single_recal_day_pane_g1_ParamLimits

0xcffd,	// (0x000453ce) list_single_recal_day_pane_g1

0x3ea4,	// (0x0003c275) list_single_recal_day_pane_g2_ParamLimits

0x3ea4,	// (0x0003c275) list_single_recal_day_pane_g2

0x3eb0,	// (0x0003c281) list_single_recal_day_pane_g3_ParamLimits

0x3eb0,	// (0x0003c281) list_single_recal_day_pane_g3

0x3ebc,	// (0x0003c28d) list_single_recal_day_pane_g4_ParamLimits

0x3ebc,	// (0x0003c28d) list_single_recal_day_pane_g4

0x3eca,	// (0x0003c29b) list_single_recal_day_pane_g5_ParamLimits

0x3eca,	// (0x0003c29b) list_single_recal_day_pane_g5

0x3ee0,	// (0x0003c2b1) list_single_recal_day_pane_g6_ParamLimits

0x3ee0,	// (0x0003c2b1) list_single_recal_day_pane_g6

0x0004,

0xfd00,	// (0x000480d1) list_single_recal_day_pane_g_ParamLimits

0xfd00,	// (0x000480d1) list_single_recal_day_pane_g

0x3ef4,	// (0x0003c2c5) list_single_recal_day_pane_t1

0x3f06,	// (0x0003c2d7) list_single_recal_day_pane_t2

0x0001,

0xfd0b,	// (0x000480dc) list_single_recal_day_pane_t

0xa9b0,	// (0x00042d81) ncimui_query_button_pane_ParamLimits

0xa9b0,	// (0x00042d81) ncimui_query_button_pane

0xa9c0,	// (0x00042d91) ncimui_query_button_pane_t1_ParamLimits

0xa9c0,	// (0x00042d91) ncimui_query_button_pane_t1

0xd009,	// (0x000453da) ncimui_query_button_pane_t2_ParamLimits

0xd009,	// (0x000453da) ncimui_query_button_pane_t2

0x0001,

0xfd10,	// (0x000480e1) ncimui_query_button_pane_t_ParamLimits

0xfd10,	// (0x000480e1) ncimui_query_button_pane_t

0xa9d3,	// (0x00042da4) query_button_pane_ParamLimits

0xa9d3,	// (0x00042da4) query_button_pane

0xd5cb,	// (0x0004599c) bg_button_pane_cp0028

0xd01c,	// (0x000453ed) query_button_pane_t1

0x6de6,	// (0x0003f1b7) main_tport_pane_ParamLimits

0xa535,	// (0x00042906) bg_popup_window_pane_cp01_ParamLimits

0xa535,	// (0x00042906) bg_popup_window_pane_cp01

0xa543,	// (0x00042914) heading_pane_cp08_ParamLimits

0xa543,	// (0x00042914) heading_pane_cp08

0xa551,	// (0x00042922) heading_pane_cp07_ParamLimits

0xa551,	// (0x00042922) heading_pane_cp07

0xa5c0,	// (0x00042991) cell_tport_appsw_pane_g2

0x0002,

0xfc5c,	// (0x0004802d) cell_tport_appsw_pane_g

0x338b,	// (0x0003b75c) input_candi_list_open_g1

0xe841,	// (0x00046c12) list_cale_time_pane_g6_ParamLimits

0xe841,	// (0x00046c12) list_cale_time_pane_g6

0x7287,	// (0x0003f658) aid_size_touch_calib_1_ParamLimits

0x7287,	// (0x0003f658) aid_size_touch_calib_1

0x7293,	// (0x0003f664) aid_size_touch_calib_2_ParamLimits

0x7293,	// (0x0003f664) aid_size_touch_calib_2

0x72a1,	// (0x0003f672) aid_size_touch_calib_3_ParamLimits

0x72a1,	// (0x0003f672) aid_size_touch_calib_3

0x72b1,	// (0x0003f682) aid_size_touch_calib_4_ParamLimits

0x72b1,	// (0x0003f682) aid_size_touch_calib_4

0x72bf,	// (0x0003f690) main_touch_calib_button_group_pane_ParamLimits

0x72bf,	// (0x0003f690) main_touch_calib_button_group_pane

0x72cd,	// (0x0003f69e) main_touch_calib_pane_g1_ParamLimits

0x72d9,	// (0x0003f6aa) main_touch_calib_pane_g2_ParamLimits

0x72e5,	// (0x0003f6b6) main_touch_calib_pane_g3_ParamLimits

0x72f1,	// (0x0003f6c2) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x00047a6f) main_touch_calib_pane_g_ParamLimits

0x72fd,	// (0x0003f6ce) main_touch_calib_pane_t1_ParamLimits

0x7316,	// (0x0003f6e7) main_touch_calib_pane_t2_ParamLimits

0x732f,	// (0x0003f700) main_touch_calib_pane_t3_ParamLimits

0x7345,	// (0x0003f716) main_touch_calib_pane_t4_ParamLimits

0x735b,	// (0x0003f72c) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x00047a78) main_touch_calib_pane_t_ParamLimits

0x18f2,	// (0x00039cc3) list_single_fp_cale_pane_g3_ParamLimits

0x18f2,	// (0x00039cc3) list_single_fp_cale_pane_g3

0xe17d,	// (0x0004654e) bg_button_pane_cp012_ParamLimits

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp03_ParamLimits

0x90b2,	// (0x00041483) cell_vitu2_function_top_pane_g1_ParamLimits

0xe17d,	// (0x0004654e) bg_vkb2_func_pane_cp04_ParamLimits

0x9d7a,	// (0x0004214b) main_ncimui_button_group_pane_ParamLimits

0x9d7a,	// (0x0004214b) main_ncimui_button_group_pane

0x9de0,	// (0x000421b1) main_ncimui_pane_t3_ParamLimits

0x9de0,	// (0x000421b1) main_ncimui_pane_t3

0xcde1,	// (0x000451b2) phacti_button_group_pane

0xcfa4,	// (0x00045375) aid_size_list_single_double_ParamLimits

0xa929,	// (0x00042cfa) popup_ezdial_listscroll_window_ParamLimits

0xa94a,	// (0x00042d1b) popup_number_entry_window_cp01_ParamLimits

0xa9e0,	// (0x00042db1) phacti_button_pane_ParamLimits

0xa9e0,	// (0x00042db1) phacti_button_pane

0xd5cb,	// (0x0004599c) bg_button_pane_cp14

0xd02a,	// (0x000453fb) phacti_button_pane_t1

0xa9f1,	// (0x00042dc2) main_touch_calib_button_pane_ParamLimits

0xa9f1,	// (0x00042dc2) main_touch_calib_button_pane

0xe256,	// (0x00046627) bg_button_pane_cp18_ParamLimits

0xe256,	// (0x00046627) bg_button_pane_cp18

0xd038,	// (0x00045409) main_touch_calib_button_pane_t1_ParamLimits

0xd038,	// (0x00045409) main_touch_calib_button_pane_t1

0xd04e,	// (0x0004541f) main_touch_calib_button_pane_t2_ParamLimits

0xd04e,	// (0x0004541f) main_touch_calib_button_pane_t2

0x0001,

0xfd15,	// (0x000480e6) main_touch_calib_button_pane_t_ParamLimits

0xfd15,	// (0x000480e6) main_touch_calib_button_pane_t

0xd5cb,	// (0x0004599c) cell_ncimui_button_pane

0xd5cb,	// (0x0004599c) bg_button_pane_cp032

0xd06c,	// (0x0004543d) cell_ncimui_button_pane_t1

0x82d5,	// (0x000406a6) image3_infobar_pane_ParamLimits

0x82d5,	// (0x000406a6) image3_infobar_pane

0xa19d,	// (0x0004256e) fs_bigclock_status_pane_ParamLimits

0xa19d,	// (0x0004256e) fs_bigclock_status_pane

0xa1aa,	// (0x0004257b) main_fs_bigclock_clock_pane_ParamLimits

0xa1aa,	// (0x0004257b) main_fs_bigclock_clock_pane

0xa1be,	// (0x0004258f) main_fs_bigclock_indi_pane_ParamLimits

0xa1be,	// (0x0004258f) main_fs_bigclock_indi_pane

0xa1e6,	// (0x000425b7) main_fs_bigclock_swipe_pane_ParamLimits

0xa1e6,	// (0x000425b7) main_fs_bigclock_swipe_pane

0xd5cb,	// (0x0004599c) main_fs_clock_dumped_data

0xc8fd,	// (0x00044cce) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc8fd,	// (0x00044cce) list_single_fs_bigclock_indicator_pane_g1

0xc918,	// (0x00044ce9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc918,	// (0x00044ce9) list_single_fs_bigclock_indicator_pane_g2

0xc932,	// (0x00044d03) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc932,	// (0x00044d03) list_single_fs_bigclock_indicator_pane_g3

0xc94c,	// (0x00044d1d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc94c,	// (0x00044d1d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb6,	// (0x00047f87) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb6,	// (0x00047f87) list_single_fs_bigclock_indicator_pane_g

0xc977,	// (0x00044d48) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc977,	// (0x00044d48) list_single_fs_bigclock_indicator_pane_t1

0xc99f,	// (0x00044d70) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc99f,	// (0x00044d70) list_single_fs_bigclock_indicator_pane_t2

0xc9c7,	// (0x00044d98) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc9c7,	// (0x00044d98) list_single_fs_bigclock_indicator_pane_t3

0xc9ef,	// (0x00044dc0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc9ef,	// (0x00044dc0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc1,	// (0x00047f92) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc1,	// (0x00047f92) list_single_fs_bigclock_indicator_pane_t

0xd07a,	// (0x0004544b) image3_infobar_fav_pane_ParamLimits

0xd07a,	// (0x0004544b) image3_infobar_fav_pane

0xd08a,	// (0x0004545b) image3_infobar_loc_pane_ParamLimits

0xd08a,	// (0x0004545b) image3_infobar_loc_pane

0xd09e,	// (0x0004546f) image3_infobar_time_pane_ParamLimits

0xd09e,	// (0x0004546f) image3_infobar_time_pane

0xe451,	// (0x00046822) image3_infobar_time_pane_g1

0xd0ae,	// (0x0004547f) image3_infobar_time_pane_t1

0xe451,	// (0x00046822) image3_infobar_loc_pane_g1

0xd0bc,	// (0x0004548d) image3_infobar_loc_pane_g2

0x0001,

0xfd1a,	// (0x000480eb) image3_infobar_loc_pane_g

0xd0c4,	// (0x00045495) image3_infobar_loc_pane_t1

0xe451,	// (0x00046822) image3_infobar_fav_pane_g1

0xd0d2,	// (0x000454a3) image3_infobar_fav_pane_g2

0x0001,

0xfd1f,	// (0x000480f0) image3_infobar_fav_pane_g

0xd0da,	// (0x000454ab) fs_bigclock_status_battery_pane

0xd0e3,	// (0x000454b4) fs_bigclock_status_signal_pane

0xd0ec,	// (0x000454bd) fs_bigclock_status_title_pane

0xd0f5,	// (0x000454c6) fs_bigclock_status_signal_pane_g1

0xd0fe,	// (0x000454cf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd24,	// (0x000480f5) fs_bigclock_status_signal_pane_g

0xd106,	// (0x000454d7) fs_bigclock_status_battery_pane_g1

0xd10f,	// (0x000454e0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd29,	// (0x000480fa) fs_bigclock_status_battery_pane_g

0xd117,	// (0x000454e8) fs_bigclock_status_title_pane_t1

0xaa01,	// (0x00042dd2) main_fs_bigclock_clock_pane_g1

0xaa01,	// (0x00042dd2) main_fs_bigclock_clock_pane_g2

0xaa0e,	// (0x00042ddf) main_fs_bigclock_clock_pane_g3

0xaa0e,	// (0x00042ddf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd2e,	// (0x000480ff) main_fs_bigclock_clock_pane_g

0xaa1a,	// (0x00042deb) main_fs_bigclock_clock_pane_t1

0xaa2d,	// (0x00042dfe) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd37,	// (0x00048108) main_fs_bigclock_clock_pane_t

0xd125,	// (0x000454f6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd125,	// (0x000454f6) list_single_fs_bigclock_indicator_pane

0xd136,	// (0x00045507) list_single_fs_bigclock_pane_ParamLimits

0xd136,	// (0x00045507) list_single_fs_bigclock_pane

0xd15c,	// (0x0004552d) main_fs_bigclock_indicator_pane_t1

0xd16b,	// (0x0004553c) list_single_fs_bigclock_pane_g1

0xd173,	// (0x00045544) list_single_fs_bigclock_pane_t1

0xe451,	// (0x00046822) main_fs_bigclock_swipe_pane_g1

0xd1b6,	// (0x00045587) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd48,	// (0x00048119) main_fs_bigclock_swipe_pane_g

0xd1be,	// (0x0004558f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd1be,	// (0x0004558f) main_fs_bigclock_swipe_pane_t1

0x6093,	// (0x0003e464) call_type_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_btmg_pane

0x3d51,	// (0x0003c122) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3d51,	// (0x0003c122) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbb,	// (0x0004808c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbb,	// (0x0004808c) list_single_cale_mrui_row_pane_g

0x3e81,	// (0x0003c252) list_recal_vselct_arw_lo_pane

0xcff5,	// (0x000453c6) list_recal_vselct_arw_up_pane

0x3e89,	// (0x0003c25a) list_recal_vselct_pane

0xaa84,	// (0x00042e55) btmg_button_pane

0xaa90,	// (0x00042e61) main_btmg_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp044

0xd1db,	// (0x000455ac) btmg_button_pane_t1

0x1199,	// (0x0003956a) aid_listscroll_gen

0xe17d,	// (0x0004654e) main_cntbar_detail_pane

0xcd1e,	// (0x000450ef) list_cmail_folder_pane

0x1990,	// (0x00039d61) sp_fs_scroll_pane_cp03_ParamLimits

0x3f18,	// (0x0003c2e9) list_single_fs_dyc_pane_cp01_ParamLimits

0x3f18,	// (0x0003c2e9) list_single_fs_dyc_pane_cp01

0xd1e9,	// (0x000455ba) aid_size_cmail_indent

0x3f44,	// (0x0003c315) list_single_dyc_row_pane_cp01

0xaab8,	// (0x00042e89) cntbar_detail_list_pane_ParamLimits

0xaab8,	// (0x00042e89) cntbar_detail_list_pane

0xaaf2,	// (0x00042ec3) main_cntbar_detail_cont_pane_ParamLimits

0xaaf2,	// (0x00042ec3) main_cntbar_detail_cont_pane

0x6087,	// (0x0003e458) scroll_pane_cp032_ParamLimits

0x6087,	// (0x0003e458) scroll_pane_cp032

0xaafe,	// (0x00042ecf) cntbar_detail_list_event_pane_ParamLimits

0xaafe,	// (0x00042ecf) cntbar_detail_list_event_pane

0xaac4,	// (0x00042e95) cntbar_detail_list_shct_pane

0xe6c4,	// (0x00046a95) aid_list_gen

0xd1f2,	// (0x000455c3) aid_scroll

0xd1fb,	// (0x000455cc) aid_size_touch_scroll_bar

0x3f4d,	// (0x0003c31e) aid_list_double

0x3f56,	// (0x0003c327) aid_list_single

0xd204,	// (0x000455d5) aid_list_single_lg

0x3f5f,	// (0x0003c330) aid_list_z_g_a_sm

0x3f67,	// (0x0003c338) aid_list_z_g_d

0x3f6f,	// (0x0003c340) aid_txt_z_prm

0x3f7d,	// (0x0003c34e) aid_txt_z_prm_cp01

0x3f8b,	// (0x0003c35c) aid_txt_z_sec

0xab12,	// (0x00042ee3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xab12,	// (0x00042ee3) main_cntbar_detail_cont_pane_g1

0xab1f,	// (0x00042ef0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xab1f,	// (0x00042ef0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd4d,	// (0x0004811e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd4d,	// (0x0004811e) main_cntbar_detail_cont_pane_g

0xd20d,	// (0x000455de) main_cntbar_detail_cont_pane_t1

0xd21b,	// (0x000455ec) main_cntbar_detail_cont_pane_t2

0xd229,	// (0x000455fa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd52,	// (0x00048123) main_cntbar_detail_cont_pane_t

0xab2b,	// (0x00042efc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xab2b,	// (0x00042efc) cell_cntbar_detail_list_shct_pane

0xd237,	// (0x00045608) cntbar_detail_list_shct_pane_g1

0xd240,	// (0x00045611) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd59,	// (0x0004812a) cntbar_detail_list_shct_pane_g

0xab3f,	// (0x00042f10) cntbar_detail_list_event_pane_g1_ParamLimits

0xab3f,	// (0x00042f10) cntbar_detail_list_event_pane_g1

0xab4b,	// (0x00042f1c) cntbar_detail_list_event_pane_g2_ParamLimits

0xab4b,	// (0x00042f1c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd5e,	// (0x0004812f) cntbar_detail_list_event_pane_g_ParamLimits

0xfd5e,	// (0x0004812f) cntbar_detail_list_event_pane_g

0xabb7,	// (0x00042f88) cntbar_detail_list_event_pane_t1_ParamLimits

0xabb7,	// (0x00042f88) cntbar_detail_list_event_pane_t1

0xabcc,	// (0x00042f9d) cntbar_detail_list_event_pane_t2_ParamLimits

0xabcc,	// (0x00042f9d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6b,	// (0x0004813c) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6b,	// (0x0004813c) cntbar_detail_list_event_pane_t

0xe451,	// (0x00046822) cell_cntbar_detail_list_shct_pane_g1

0xee47,	// (0x00047218) navi_pane_mv_g3

0xe17d,	// (0x0004654e) main_cntbar_detail_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_notif_wgt_pane

0x7f5f,	// (0x00040330) aid_tch_main_mp4_pane_g4

0x81be,	// (0x0004058f) popup_slider_window_cp02

0x3e77,	// (0x0003c248) list_recal_day_event_pane

0xaa98,	// (0x00042e69) cntbar_detail_btn_pane_ParamLimits

0xaa98,	// (0x00042e69) cntbar_detail_btn_pane

0xaaa8,	// (0x00042e79) cntbar_detail_btn_pane_cp01_ParamLimits

0xaaa8,	// (0x00042e79) cntbar_detail_btn_pane_cp01

0xaac4,	// (0x00042e95) cntbar_detail_list_shct_pane_ParamLimits

0xaad0,	// (0x00042ea1) cntbar_detail_pane_g1_ParamLimits

0xaad0,	// (0x00042ea1) cntbar_detail_pane_g1

0xaadc,	// (0x00042ead) cntbar_detail_pane_t1_ParamLimits

0xaadc,	// (0x00042ead) cntbar_detail_pane_t1

0xab57,	// (0x00042f28) cntbar_detail_list_event_pane_g3_ParamLimits

0xab57,	// (0x00042f28) cntbar_detail_list_event_pane_g3

0xab6f,	// (0x00042f40) cntbar_detail_list_event_pane_g4_ParamLimits

0xab6f,	// (0x00042f40) cntbar_detail_list_event_pane_g4

0xab87,	// (0x00042f58) cntbar_detail_list_event_pane_g5_ParamLimits

0xab87,	// (0x00042f58) cntbar_detail_list_event_pane_g5

0xab9f,	// (0x00042f70) cntbar_detail_list_event_pane_g6_ParamLimits

0xab9f,	// (0x00042f70) cntbar_detail_list_event_pane_g6

0xabe1,	// (0x00042fb2) cntbar_detail_list_event_pane_t3_ParamLimits

0xabe1,	// (0x00042fb2) cntbar_detail_list_event_pane_t3

0xabf3,	// (0x00042fc4) popup_notif_wgt_window_ParamLimits

0xabf3,	// (0x00042fc4) popup_notif_wgt_window

0xac03,	// (0x00042fd4) popup_submenu_window_cp01_ParamLimits

0xac03,	// (0x00042fd4) popup_submenu_window_cp01

0xe42f,	// (0x00046800) bg_popup_window_pane_cp10

0xd249,	// (0x0004561a) listscroll_notif_wgt_pane

0xd25b,	// (0x0004562c) list_notif_wgt_window

0xd264,	// (0x00045635) scroll_pane_cp033

0xac15,	// (0x00042fe6) list_notif_wgt_row_pane_ParamLimits

0xac15,	// (0x00042fe6) list_notif_wgt_row_pane

0xd26d,	// (0x0004563e) aid_size_list_notif_wgt_del

0xd27a,	// (0x0004564b) list_notif_wgt_row_pane_g1

0xd286,	// (0x00045657) list_notif_wgt_row_pane_g2

0xd295,	// (0x00045666) list_notif_wgt_row_pane_g3

0x0002,

0xfd72,	// (0x00048143) list_notif_wgt_row_pane_g

0xd2a2,	// (0x00045673) list_notif_wgt_row_pane_t1

0xd2b8,	// (0x00045689) list_notif_wgt_row_pane_t2

0xd2ca,	// (0x0004569b) list_notif_wgt_row_pane_t3

0x0002,

0xfd79,	// (0x0004814a) list_notif_wgt_row_pane_t

0x2122,	// (0x0003a4f3) list_recal_day_event_pane_g1

0xd2dc,	// (0x000456ad) list_recal_day_event_pane_t1

0xd5cb,	// (0x0004599c) bg_button_pane_cp045

0xd2eb,	// (0x000456bc) cntbar_detail_btn_pane_t1

0xef82,	// (0x00047353) main_callh_pane_ParamLimits

0xef82,	// (0x00047353) main_callh_pane

0xd5cb,	// (0x0004599c) main_coverflow0_pane

0xd5cb,	// (0x0004599c) main_wgtman_pane

0xa1fe,	// (0x000425cf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa1fe,	// (0x000425cf) main_fs_bigclock_unlock_btn_pane

0xa5b8,	// (0x00042989) bg_button_pane_cp16

0xa5c8,	// (0x00042999) cell_tport_appsw_pane_g3

0xac27,	// (0x00042ff8) cf0_flow_pane_ParamLimits

0xac27,	// (0x00042ff8) cf0_flow_pane

0xd2f9,	// (0x000456ca) listscroll_cf0_pane

0xd304,	// (0x000456d5) main_cf0_pane_g1

0xac36,	// (0x00043007) main_cf0_pane_t1_ParamLimits

0xac36,	// (0x00043007) main_cf0_pane_t1

0xac4a,	// (0x0004301b) main_cf0_pane_t2_ParamLimits

0xac4a,	// (0x0004301b) main_cf0_pane_t2

0x0001,

0xfd85,	// (0x00048156) main_cf0_pane_t_ParamLimits

0xfd85,	// (0x00048156) main_cf0_pane_t

0xd316,	// (0x000456e7) scroll_pane_cp11

0xac5e,	// (0x0004302f) cf0_flow_pane_g1

0xac66,	// (0x00043037) cf0_flow_pane_g2

0x0001,

0xfd8a,	// (0x0004815b) cf0_flow_pane_g

0xac6e,	// (0x0004303f) cf0_flow_pane_t1

0xd5cb,	// (0x0004599c) main_call6_pane

0xd5cb,	// (0x0004599c) main_calllock_pane

0xac7c,	// (0x0004304d) call6_btn_grp_pane_ParamLimits

0xac7c,	// (0x0004304d) call6_btn_grp_pane

0xac8b,	// (0x0004305c) call6_pane_g1_ParamLimits

0xac8b,	// (0x0004305c) call6_pane_g1

0xac9b,	// (0x0004306c) popup_call6_1st_window_ParamLimits

0xac9b,	// (0x0004306c) popup_call6_1st_window

0xaca9,	// (0x0004307a) popup_call6_2nd_window_ParamLimits

0xaca9,	// (0x0004307a) popup_call6_2nd_window

0xacb7,	// (0x00043088) cell_call6_btn_pane_ParamLimits

0xacb7,	// (0x00043088) cell_call6_btn_pane

0xe42f,	// (0x00046800) bg_popup_call2_in_pane_cp03

0xd321,	// (0x000456f2) popup_call6_1st_window_g1

0xd329,	// (0x000456fa) popup_call6_1st_window_g2

0xd331,	// (0x00045702) popup_call6_1st_window_g3

0x0002,

0xfd8f,	// (0x00048160) popup_call6_1st_window_g

0xd339,	// (0x0004570a) popup_call6_1st_window_t1

0xd348,	// (0x00045719) popup_call6_1st_window_t2

0xd356,	// (0x00045727) popup_call6_1st_window_t3

0x0002,

0xfd96,	// (0x00048167) popup_call6_1st_window_t

0xe42f,	// (0x00046800) bg_popup_call2_in_pane_cp04

0xd364,	// (0x00045735) popup_call6_2nd_window_g1

0xd36c,	// (0x0004573d) popup_call6_2nd_window_g2

0xd374,	// (0x00045745) popup_call6_2nd_window_g3

0x0002,

0xfd9d,	// (0x0004816e) popup_call6_2nd_window_g

0xd37c,	// (0x0004574d) popup_call6_2nd_window_t1

0xd5cb,	// (0x0004599c) bg_button_pane_cp15

0xd38b,	// (0x0004575c) cell_call6_btn_pane_g1

0xd92d,	// (0x00045cfe) cell_call6_btn_pane_t1

0xacc6,	// (0x00043097) listscroll_wgtman_pane_ParamLimits

0xacc6,	// (0x00043097) listscroll_wgtman_pane

0xace2,	// (0x000430b3) wgtman_btn_pane_ParamLimits

0xace2,	// (0x000430b3) wgtman_btn_pane

0xec4e,	// (0x0004701f) aid_scroll_copy1

0xd394,	// (0x00045765) list_wgtman_pane

0xad17,	// (0x000430e8) wgtman_btn_pane_g1_ParamLimits

0xad17,	// (0x000430e8) wgtman_btn_pane_g1

0xad3f,	// (0x00043110) wgtman_btn_pane_t1_ParamLimits

0xad3f,	// (0x00043110) wgtman_btn_pane_t1

0xd39e,	// (0x0004576f) wgtman_btn_pane_t2_ParamLimits

0xd39e,	// (0x0004576f) wgtman_btn_pane_t2

0x0001,

0xfda4,	// (0x00048175) wgtman_btn_pane_t_ParamLimits

0xfda4,	// (0x00048175) wgtman_btn_pane_t

0xad76,	// (0x00043147) listrow_wgtman_pane_ParamLimits

0xad76,	// (0x00043147) listrow_wgtman_pane

0xad91,	// (0x00043162) listrow_wgtman_pane_g1

0xad9e,	// (0x0004316f) listrow_wgtman_pane_g2

0x0001,

0xfda9,	// (0x0004817a) listrow_wgtman_pane_g

0x3f99,	// (0x0003c36a) listrow_wgtman_pane_t1

0x3fb1,	// (0x0003c382) listrow_wgtman_pane_t2

0x0001,

0xfdae,	// (0x0004817f) listrow_wgtman_pane_t

0x3fd7,	// (0x0003c3a8) wait_bar_pane_cp09

0xd3b5,	// (0x00045786) main_calllock_btn_pane

0xd3bf,	// (0x00045790) main_calllock_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp17

0xd38b,	// (0x0004575c) main_calllock_btn_pane_g1

0xd3c7,	// (0x00045798) main_calllock_btn_pane_t1

0xd5cb,	// (0x0004599c) main_dialer3_pane

0xd5cb,	// (0x0004599c) main_fmrd2_pane

0xe451,	// (0x00046822) main_fs_bigclock_unlock_btn_pane_g1

0xadc4,	// (0x00043195) main_fs_bigclock_unlock_btn_pane_t1

0xadd2,	// (0x000431a3) area_fmrd2_info_pane_ParamLimits

0xadd2,	// (0x000431a3) area_fmrd2_info_pane

0xade0,	// (0x000431b1) area_fmrd2_visual_pane_ParamLimits

0xade0,	// (0x000431b1) area_fmrd2_visual_pane

0xadee,	// (0x000431bf) fmrd2_indi_pane_ParamLimits

0xadee,	// (0x000431bf) fmrd2_indi_pane

0xadfb,	// (0x000431cc) area_fmrd2_visual_pane_g1

0xae03,	// (0x000431d4) area_fmrd2_visual_pane_t1

0xae13,	// (0x000431e4) area_fmrd2_visual_pane_t2

0xae23,	// (0x000431f4) area_fmrd2_visual_pane_t3

0x0002,

0xfdb8,	// (0x00048189) area_fmrd2_visual_pane_t

0xae33,	// (0x00043204) area_fmrd2_info_pane_g1

0xae3b,	// (0x0004320c) area_fmrd2_info_pane_t1

0xae4b,	// (0x0004321c) area_fmrd2_info_pane_t2

0xae5b,	// (0x0004322c) area_fmrd2_info_pane_t3

0xae6b,	// (0x0004323c) area_fmrd2_info_pane_t4

0x0003,

0xfdbf,	// (0x00048190) area_fmrd2_info_pane_t

0xae79,	// (0x0004324a) fmrd2_indi_pane_t1

0xae89,	// (0x0004325a) fmrd2_indi_pane_t2

0xae99,	// (0x0004326a) fmrd2_indi_pane_t3

0x0002,

0xfdc8,	// (0x00048199) fmrd2_indi_pane_t

0xc95b,	// (0x00044d2c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc95b,	// (0x00044d2c) list_single_fs_bigclock_indicator_pane_g5

0xca0c,	// (0x00044ddd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xca0c,	// (0x00044ddd) list_single_fs_bigclock_indicator_pane_t5

0xa74f,	// (0x00042b20) aid_cell_bcale_month_pane_ParamLimits

0xa74f,	// (0x00042b20) aid_cell_bcale_month_pane

0xa76d,	// (0x00042b3e) bcale_month_pane_ParamLimits

0xa76d,	// (0x00042b3e) bcale_month_pane

0xa78b,	// (0x00042b5c) bcale_preview_pane_ParamLimits

0xa78b,	// (0x00042b5c) bcale_preview_pane

0xd173,	// (0x00045544) list_single_fs_bigclock_pane_t1_ParamLimits

0xd192,	// (0x00045563) list_single_fs_bigclock_pane_t2_ParamLimits

0xd192,	// (0x00045563) list_single_fs_bigclock_pane_t2

0x0001,

0xfd43,	// (0x00048114) list_single_fs_bigclock_pane_t_ParamLimits

0xfd43,	// (0x00048114) list_single_fs_bigclock_pane_t

0xadbc,	// (0x0004318d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb3,	// (0x00048184) main_fs_bigclock_unlock_btn_pane_g

0xaea7,	// (0x00043278) aid_dia3_key_size_ParamLimits

0xaea7,	// (0x00043278) aid_dia3_key_size

0xaeb3,	// (0x00043284) aid_dia3_listrow_size_ParamLimits

0xaeb3,	// (0x00043284) aid_dia3_listrow_size

0xaec3,	// (0x00043294) dia3_keypad_fun_pane_ParamLimits

0xaec3,	// (0x00043294) dia3_keypad_fun_pane

0xaed5,	// (0x000432a6) dia3_keypad_num_pane_ParamLimits

0xaed5,	// (0x000432a6) dia3_keypad_num_pane

0xaee7,	// (0x000432b8) dia3_listscroll_pane_ParamLimits

0xaee7,	// (0x000432b8) dia3_listscroll_pane

0xaef5,	// (0x000432c6) dia3_numentry_pane_ParamLimits

0xaef5,	// (0x000432c6) dia3_numentry_pane

0xd3d6,	// (0x000457a7) dia3_list_pane

0xd3e1,	// (0x000457b2) scroll_pane_cp12

0xd5cb,	// (0x0004599c) bg_dia3_numentry_pane

0xaf03,	// (0x000432d4) dia3_numentry_pane_t1

0xaf12,	// (0x000432e3) cell_dia3_key_num_pane

0xaf1a,	// (0x000432eb) cell_dia3_key0_fun_pane_ParamLimits

0xaf1a,	// (0x000432eb) cell_dia3_key0_fun_pane

0xaf27,	// (0x000432f8) cell_dia3_key1_fun_pane_ParamLimits

0xaf27,	// (0x000432f8) cell_dia3_key1_fun_pane

0xaf34,	// (0x00043305) dia3_listrow_pane

0xc6ae,	// (0x00044a7f) bg_dia3_numentry_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp21

0xd3ec,	// (0x000457bd) cell_dia3_key_num_pane_t1

0xd3fa,	// (0x000457cb) cell_dia3_key_num_pane_t2

0xd409,	// (0x000457da) cell_dia3_key_num_pane_t3

0xd418,	// (0x000457e9) cell_dia3_key_num_pane_t4

0x0003,

0xfdcf,	// (0x000481a0) cell_dia3_key_num_pane_t

0xd5cb,	// (0x0004599c) bg_button_pane_cp19

0xaf41,	// (0x00043312) cell_dia3_key0_fun_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp20

0xaf49,	// (0x0004331a) cell_dia3_key1_fun_pane_g1

0xaf51,	// (0x00043322) area_left_week_number_pane

0xaf64,	// (0x00043335) area_top_day_name_pane

0xaf72,	// (0x00043343) frame_month_view_pane

0xd427,	// (0x000457f8) grid_month_view_pane

0xaf87,	// (0x00043358) cell_top_day_name_pane_ParamLimits

0xaf87,	// (0x00043358) cell_top_day_name_pane

0xafa1,	// (0x00043372) cell_area_left_week_number_pane_ParamLimits

0xafa1,	// (0x00043372) cell_area_left_week_number_pane

0xafc4,	// (0x00043395) cell_month_view_pane_ParamLimits

0xafc4,	// (0x00043395) cell_month_view_pane

0xd435,	// (0x00045806) frm_month_g1

0xaff0,	// (0x000433c1) frm_month_g2

0xb001,	// (0x000433d2) frm_month_g3

0xb012,	// (0x000433e3) frm_month_g4

0xb023,	// (0x000433f4) frm_month_g5

0xb036,	// (0x00043407) frm_month_g6

0xb049,	// (0x0004341a) frm_month_g7

0xd442,	// (0x00045813) frm_month_g8

0xb05c,	// (0x0004342d) frm_month_g9

0xb069,	// (0x0004343a) frm_month_g10

0xb076,	// (0x00043447) frm_month_g11

0xb083,	// (0x00043454) frm_month_g12

0xb090,	// (0x00043461) frm_month_g13

0xb09d,	// (0x0004346e) frm_month_g14

0xb0ac,	// (0x0004347d) frm_month_g15

0xb0bb,	// (0x0004348c) frm_month_g16

0x000f,

0xfdd8,	// (0x000481a9) frm_month_g

0xd44f,	// (0x00045820) cell_top_day_name_pane_t1

0xb0ca,	// (0x0004349b) cell_area_left_week_number_pane_g1

0xb0d9,	// (0x000434aa) cell_area_left_week_number_pane_t1

0xe1e4,	// (0x000465b5) cell_month_view_pane_g1

0xb0ef,	// (0x000434c0) cell_month_view_pane_t1

0xd5cb,	// (0x0004599c) main_fps_pane

0xcc29,	// (0x00044ffa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcc29,	// (0x00044ffa) cmail_ddmenu_btn02_pane_cp1

0xcc45,	// (0x00045016) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcc45,	// (0x00045016) cmail_ddmenu_btn02_pane_cp2

0xa980,	// (0x00042d51) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa980,	// (0x00042d51) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf6,	// (0x000480c7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf6,	// (0x000480c7) cmail_ddmenu_btn02_pane_g

0xa99e,	// (0x00042d6f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa99e,	// (0x00042d6f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcfb,	// (0x000480cc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcfb,	// (0x000480cc) cmail_ddmenu_btn02_pane_t

0xb105,	// (0x000434d6) fps_text_pane_ParamLimits

0xb105,	// (0x000434d6) fps_text_pane

0xb112,	// (0x000434e3) main_fps_pane_g1_ParamLimits

0xb112,	// (0x000434e3) main_fps_pane_g1

0xb120,	// (0x000434f1) wait_bar_pane_cp010_ParamLimits

0xb120,	// (0x000434f1) wait_bar_pane_cp010

0xb12c,	// (0x000434fd) fps_text_pane_t1_ParamLimits

0xb12c,	// (0x000434fd) fps_text_pane_t1

0x8669,	// (0x00040a3a) cam4_image_uncrop_pane_g1

0x8672,	// (0x00040a43) cam4_image_uncrop_pane_g2

0x867b,	// (0x00040a4c) cam4_image_uncrop_pane_g3

0x8684,	// (0x00040a55) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x00047c0b) cam4_image_uncrop_pane_g

0xaf34,	// (0x00043305) dia3_listrow_pane_ParamLimits

0xd5cb,	// (0x0004599c) main_phob2_pane

0xa59a,	// (0x0004296b) cell_tport_appsw_pane_cp02_ParamLimits

0xa59a,	// (0x0004296b) cell_tport_appsw_pane_cp02

0xa5a9,	// (0x0004297a) cell_tport_appsw_pane_cp03_ParamLimits

0xa5a9,	// (0x0004297a) cell_tport_appsw_pane_cp03

0xd5cb,	// (0x0004599c) phob2_contact_card_pane

0xd5cb,	// (0x0004599c) phob2_listscroll_pane

0xd462,	// (0x00045833) phob2_list_pane

0xd46a,	// (0x0004583b) scroll_pane_cp034

0xb145,	// (0x00043516) phob2_cc_data_pane_ParamLimits

0xb145,	// (0x00043516) phob2_cc_data_pane

0xb15f,	// (0x00043530) phob2_cc_listscroll_pane_ParamLimits

0xb15f,	// (0x00043530) phob2_cc_listscroll_pane

0xad76,	// (0x00043147) list_double_large_graphic_phob2_pane_ParamLimits

0xad76,	// (0x00043147) list_double_large_graphic_phob2_pane

0xb179,	// (0x0004354a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb179,	// (0x0004354a) list_double_large_graphic_phob2_pane_g1

0x3fe9,	// (0x0003c3ba) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3fe9,	// (0x0003c3ba) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf9,	// (0x000481ca) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf9,	// (0x000481ca) list_double_large_graphic_phob2_pane_g

0x400f,	// (0x0003c3e0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x400f,	// (0x0003c3e0) list_double_large_graphic_phob2_pane_t1

0x4024,	// (0x0003c3f5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4024,	// (0x0003c3f5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe02,	// (0x000481d3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe02,	// (0x000481d3) list_double_large_graphic_phob2_pane_t

0xd5cb,	// (0x0004599c) list_highlight_pane_cp024

0xd472,	// (0x00045843) phob2_cc_button_pane

0xb186,	// (0x00043557) phob2_cc_data_pane_g1_ParamLimits

0xb186,	// (0x00043557) phob2_cc_data_pane_g1

0xb195,	// (0x00043566) phob2_cc_data_pane_g2_ParamLimits

0xb195,	// (0x00043566) phob2_cc_data_pane_g2

0x0001,

0xfe07,	// (0x000481d8) phob2_cc_data_pane_g_ParamLimits

0xfe07,	// (0x000481d8) phob2_cc_data_pane_g

0xb1a4,	// (0x00043575) phob2_cc_data_pane_t1_ParamLimits

0xb1a4,	// (0x00043575) phob2_cc_data_pane_t1

0xb1b9,	// (0x0004358a) phob2_cc_data_pane_t2_ParamLimits

0xb1b9,	// (0x0004358a) phob2_cc_data_pane_t2

0xb1ce,	// (0x0004359f) phob2_cc_data_pane_t3_ParamLimits

0xb1ce,	// (0x0004359f) phob2_cc_data_pane_t3

0x0002,

0xfe0c,	// (0x000481dd) phob2_cc_data_pane_t_ParamLimits

0xfe0c,	// (0x000481dd) phob2_cc_data_pane_t

0xd47a,	// (0x0004584b) phob2_cc_list_pane_ParamLimits

0xd47a,	// (0x0004584b) phob2_cc_list_pane

0x21b9,	// (0x0003a58a) scroll_pane_cp035_ParamLimits

0x21b9,	// (0x0003a58a) scroll_pane_cp035

0xe17d,	// (0x0004654e) bg_button_pane_cp033

0xd486,	// (0x00045857) phob2_cc_button_pane_g1

0xd492,	// (0x00045863) phob2_cc_button_pane_t1

0xd4a7,	// (0x00045878) phob2_cc_button_pane_t2

0x0001,

0xfe13,	// (0x000481e4) phob2_cc_button_pane_t

0xb1e3,	// (0x000435b4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb1e3,	// (0x000435b4) list_double_large_graphic_phob2_cc_pane

0xb251,	// (0x00043622) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb251,	// (0x00043622) list_double_large_graphic_phob2_cc_pane_g1

0x4039,	// (0x0003c40a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4039,	// (0x0003c40a) list_double_large_graphic_phob2_cc_pane_g2

0x4045,	// (0x0003c416) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4045,	// (0x0003c416) list_double_large_graphic_phob2_cc_pane_g3

0x4051,	// (0x0003c422) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4051,	// (0x0003c422) list_double_large_graphic_phob2_cc_pane_g4

0x405d,	// (0x0003c42e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x405d,	// (0x0003c42e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe18,	// (0x000481e9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe18,	// (0x000481e9) list_double_large_graphic_phob2_cc_pane_g

0x4069,	// (0x0003c43a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4069,	// (0x0003c43a) list_double_large_graphic_phob2_cc_pane_t1

0x4092,	// (0x0003c463) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4092,	// (0x0003c463) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe23,	// (0x000481f4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe23,	// (0x000481f4) list_double_large_graphic_phob2_cc_pane_t

0xd4b9,	// (0x0004588a) list_highlight_pane_cp025_ParamLimits

0xd4b9,	// (0x0004588a) list_highlight_pane_cp025

0xe17d,	// (0x0004654e) bg_button_pane_cp033_ParamLimits

0xd486,	// (0x00045857) phob2_cc_button_pane_g1_ParamLimits

0xd492,	// (0x00045863) phob2_cc_button_pane_t1_ParamLimits

0xd4a7,	// (0x00045878) phob2_cc_button_pane_t2_ParamLimits

0xfe13,	// (0x000481e4) phob2_cc_button_pane_t_ParamLimits

0x4310,	// (0x0003c6e1) popup_wgtman_window

0x1fc4,	// (0x0003a395) scroll_pane_cp038

0xacff,	// (0x000430d0) wgtman_btn_pane_cp_01_ParamLimits

0xacff,	// (0x000430d0) wgtman_btn_pane_cp_01

0xd4c7,	// (0x00045898) wgtman_content_pane

0xd4d0,	// (0x000458a1) wgtman_heading_pane

0xd5cb,	// (0x0004599c) bg_heading_pane_cp02

0xd4d9,	// (0x000458aa) wgtman_heading_pane_g1

0xd4e1,	// (0x000458b2) wgtman_heading_pane_t1

0xd4ef,	// (0x000458c0) scroll_pane_cp036

0xd4f7,	// (0x000458c8) wgtman_list_pane

0xd4ff,	// (0x000458d0) wgtman_list_pane_t1_ParamLimits

0xd4ff,	// (0x000458d0) wgtman_list_pane_t1

0x85c8,	// (0x00040999) cam4_grid_pane

0x362d,	// (0x0003b9fe) bg_button_pane_cp015_ParamLimits

0x9263,	// (0x00041634) bg_button_pane_cp016_ParamLimits

0x926f,	// (0x00041640) bg_button_pane_cp017_ParamLimits

0x928a,	// (0x0004165b) popup_vitu2_query_window_g3_ParamLimits

0x928a,	// (0x0004165b) popup_vitu2_query_window_g3

0x36ec,	// (0x0003babd) popup_vitu2_query_window_t6_ParamLimits

0x36ec,	// (0x0003babd) popup_vitu2_query_window_t6

0x3717,	// (0x0003bae8) popup_vitu2_query_window_t7_ParamLimits

0x3717,	// (0x0003bae8) popup_vitu2_query_window_t7

0xd519,	// (0x000458ea) cam4_grid_pane_g1

0xd522,	// (0x000458f3) cam4_grid_pane_g2

0xd52b,	// (0x000458fc) cam4_grid_pane_g3

0xd534,	// (0x00045905) cam4_grid_pane_g4

0x0003,

0xfe28,	// (0x000481f9) cam4_grid_pane_g

0x4e4a,	// (0x0003d21b) aid_placing_vt_slider_lsc_ParamLimits

0x5196,	// (0x0003d567) vidtel_button_pane_ParamLimits

0x5196,	// (0x0003d567) vidtel_button_pane

0xd5cb,	// (0x0004599c) bg_button_pane_cp034

0xd53f,	// (0x00045910) vidtel_button_pane_g1

0xd547,	// (0x00045918) vidtel_button_pane_t1

0x2100,	// (0x0003a4d1) aid_size_vtel_slider_touch

0x21b9,	// (0x0003a58a) scroll_pane_cp039

0x9f3b,	// (0x0004230c) ncim_query_button_pane_cp01_ParamLimits

0x9f5a,	// (0x0004232b) ncimui_query_pane_g1_ParamLimits

0xe17d,	// (0x0004654e) input_focus_pane_cp012_ParamLimits

0xc6ec,	// (0x00044abd) ncim_query_entry_pane_t1_ParamLimits

0x21b9,	// (0x0003a58a) scroll_pane_cp039_ParamLimits

0xed32,	// (0x00047103) navi_pane_bcale_mc_g1

0xed3a,	// (0x0004710b) navi_pane_bcale_mc_t1

0xcc79,	// (0x0004504a) main_sp_fs_email_pane_g1

0xcc85,	// (0x00045056) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x00047ffc) main_sp_fs_email_pane_g

0xcefe,	// (0x000452cf) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcefe,	// (0x000452cf) list_single_cale_mrui_row_pane_g3

0x3ed6,	// (0x0003c2a7) list_single_recal_day_pane_g5_event_pane

0x3eec,	// (0x0003c2bd) list_single_recal_day_pane_g7

0xd55d,	// (0x0004592e) list_recal_day_event_pane_cp01

0xd566,	// (0x00045937) list_recal_vselct_arw_lo_pane_cp01

0xd56e,	// (0x0004593f) list_recal_vselct_arw_up_pane_cp01

0xd576,	// (0x00045947) list_recal_vselct_pane_cp01

0x2122,	// (0x0003a4f3) list_recal_day_event_pane_cp01_g1

0x40bb,	// (0x0003c48c) list_recal_day_event_pane_cp01_t1

0x3ef4,	// (0x0003c2c5) list_single_recal_day_pane_t1_ParamLimits

0x3f06,	// (0x0003c2d7) list_single_recal_day_pane_t2_ParamLimits

0xfd0b,	// (0x000480dc) list_single_recal_day_pane_t_ParamLimits

0xe15b,	// (0x0004652c) bg_notes_pane_ParamLimits

0xe234,	// (0x00046605) list_notes_pane_ParamLimits

0x4512,	// (0x0003c8e3) scroll_pane_cp06_ParamLimits

0xe256,	// (0x00046627) main_notes_pane_ParamLimits

0xe17d,	// (0x0004654e) main_welc_pane

0xb284,	// (0x00043655) main_welc_body_pane_ParamLimits

0xb284,	// (0x00043655) main_welc_body_pane

0xb29e,	// (0x0004366f) main_welc_opti_pane_ParamLimits

0xb29e,	// (0x0004366f) main_welc_opti_pane

0xb2fd,	// (0x000436ce) main_welc_pane_t1_ParamLimits

0xb2fd,	// (0x000436ce) main_welc_pane_t1

0xb493,	// (0x00043864) main_welc_body_row_pane_ParamLimits

0xb493,	// (0x00043864) main_welc_body_row_pane

0xe1ca,	// (0x0004659b) main_welc_opti_row_pane_ParamLimits

0xe1ca,	// (0x0004659b) main_welc_opti_row_pane

0xd590,	// (0x00045961) main_welc_opti_row_pane_g1

0xb4b8,	// (0x00043889) main_welc_opti_row_pane_t1

0xd598,	// (0x00045969) main_welc_body_row_pane_t1

0xd253,	// (0x00045624) popup_notif_wgt_heading_pane

0xd26d,	// (0x0004563e) aid_size_list_notif_wgt_del_ParamLimits

0xd27a,	// (0x0004564b) list_notif_wgt_row_pane_g1_ParamLimits

0xd286,	// (0x00045657) list_notif_wgt_row_pane_g2_ParamLimits

0xd295,	// (0x00045666) list_notif_wgt_row_pane_g3_ParamLimits

0xfd72,	// (0x00048143) list_notif_wgt_row_pane_g_ParamLimits

0xd2a2,	// (0x00045673) list_notif_wgt_row_pane_t1_ParamLimits

0xd2b8,	// (0x00045689) list_notif_wgt_row_pane_t2_ParamLimits

0xd2ca,	// (0x0004569b) list_notif_wgt_row_pane_t3_ParamLimits

0xfd79,	// (0x0004814a) list_notif_wgt_row_pane_t_ParamLimits

0xad91,	// (0x00043162) listrow_wgtman_pane_g1_ParamLimits

0xad9e,	// (0x0004316f) listrow_wgtman_pane_g2_ParamLimits

0xfda9,	// (0x0004817a) listrow_wgtman_pane_g_ParamLimits

0x3f99,	// (0x0003c36a) listrow_wgtman_pane_t1_ParamLimits

0x3fb1,	// (0x0003c382) listrow_wgtman_pane_t2_ParamLimits

0xfdae,	// (0x0004817f) listrow_wgtman_pane_t_ParamLimits

0x3fd7,	// (0x0003c3a8) wait_bar_pane_cp09_ParamLimits

0xd5cb,	// (0x0004599c) bg_popup_heading_pane_cp02

0xd5a7,	// (0x00045978) popup_notif_wgt_heading_pane_g1

0xd5af,	// (0x00045980) popup_notif_wgt_heading_pane_t1

0xd5cb,	// (0x0004599c) main_vids_pane

0xd5cb,	// (0x0004599c) vids_listscroll_pane

0xb4c7,	// (0x00043898) scroll_pane_cp040

0xd5cb,	// (0x0004599c) vids_list_pane

0xb4d2,	// (0x000438a3) vids_list_double_pane_ParamLimits

0xb4d2,	// (0x000438a3) vids_list_double_pane

0xb4e9,	// (0x000438ba) vids_list_double_pane_g1

0xb4f2,	// (0x000438c3) vids_list_double_pane_t1

0xb502,	// (0x000438d3) vids_list_double_pane_t2

0x0001,

0xfe47,	// (0x00048218) vids_list_double_pane_t

0xe17d,	// (0x0004654e) main_ncimui_pane_ParamLimits

0x9d92,	// (0x00042163) main_ncimui_pane_g1_ParamLimits

0x9d9e,	// (0x0004216f) main_ncimui_pane_g2_ParamLimits

0x9d9e,	// (0x0004216f) main_ncimui_pane_g2

0x0001,

0xfb2c,	// (0x00047efd) main_ncimui_pane_g_ParamLimits

0xfb2c,	// (0x00047efd) main_ncimui_pane_g

0xb2b7,	// (0x00043688) main_welc_pane_g1_ParamLimits

0xb2b7,	// (0x00043688) main_welc_pane_g1

0xb2c3,	// (0x00043694) main_welc_pane_g2_ParamLimits

0xb2c3,	// (0x00043694) main_welc_pane_g2

0x0003,

0xfe31,	// (0x00048202) main_welc_pane_g_ParamLimits

0xfe31,	// (0x00048202) main_welc_pane_g

0xe15b,	// (0x0004652c) listscroll_mce_pane_ParamLimits

0xee87,	// (0x00047258) wait_bar_pane_cp10

0x11a1,	// (0x00039572) main_cale_day_pane_ParamLimits

0x11a1,	// (0x00039572) main_cale_week_pane_ParamLimits

0xe15b,	// (0x0004652c) main_messa_pane_ParamLimits

0x7a1d,	// (0x0003fdee) main_clock2_btn_pane_ParamLimits

0x7a1d,	// (0x0003fdee) main_clock2_btn_pane

0x196c,	// (0x00039d3d) main_clock2_btn_pane_cp01_ParamLimits

0x196c,	// (0x00039d3d) main_clock2_btn_pane_cp01

0xcecf,	// (0x000452a0) list_cale_mrui_pane_ParamLimits

0xd30e,	// (0x000456df) main_cf0_pane_g2

0x0001,

0xfd80,	// (0x00048151) main_cf0_pane_g

0xaf51,	// (0x00043322) area_left_week_number_pane_ParamLimits

0xaf64,	// (0x00043335) area_top_day_name_pane_ParamLimits

0xaf72,	// (0x00043343) frame_month_view_pane_ParamLimits

0xd427,	// (0x000457f8) grid_month_view_pane_ParamLimits

0xd435,	// (0x00045806) frm_month_g1_ParamLimits

0xaff0,	// (0x000433c1) frm_month_g2_ParamLimits

0xb001,	// (0x000433d2) frm_month_g3_ParamLimits

0xb012,	// (0x000433e3) frm_month_g4_ParamLimits

0xb023,	// (0x000433f4) frm_month_g5_ParamLimits

0xb036,	// (0x00043407) frm_month_g6_ParamLimits

0xb049,	// (0x0004341a) frm_month_g7_ParamLimits

0xd442,	// (0x00045813) frm_month_g8_ParamLimits

0xb05c,	// (0x0004342d) frm_month_g9_ParamLimits

0xb069,	// (0x0004343a) frm_month_g10_ParamLimits

0xb076,	// (0x00043447) frm_month_g11_ParamLimits

0xb083,	// (0x00043454) frm_month_g12_ParamLimits

0xb090,	// (0x00043461) frm_month_g13_ParamLimits

0xb09d,	// (0x0004346e) frm_month_g14_ParamLimits

0xb0ac,	// (0x0004347d) frm_month_g15_ParamLimits

0xb0bb,	// (0x0004348c) frm_month_g16_ParamLimits

0xfdd8,	// (0x000481a9) frm_month_g_ParamLimits

0xd44f,	// (0x00045820) cell_top_day_name_pane_t1_ParamLimits

0xb0ca,	// (0x0004349b) cell_area_left_week_number_pane_g1_ParamLimits

0xb0d9,	// (0x000434aa) cell_area_left_week_number_pane_t1_ParamLimits

0xe1e4,	// (0x000465b5) cell_month_view_pane_g1_ParamLimits

0xb0ef,	// (0x000434c0) cell_month_view_pane_t1_ParamLimits

0xe153,	// (0x00046524) main_clock2_btn_pane_g1

0xd5bd,	// (0x0004598e) main_clock2_btn_pane_t1

0xe17d,	// (0x0004654e) listscroll_cmail_pane_ParamLimits

0xcc79,	// (0x0004504a) main_sp_fs_email_pane_g1_ParamLimits

0xcc85,	// (0x00045056) main_sp_fs_email_pane_g2_ParamLimits

0xfc2b,	// (0x00047ffc) main_sp_fs_email_pane_g_ParamLimits

0xcfd6,	// (0x000453a7) list_recal_day_pane_ParamLimits

0xcfe7,	// (0x000453b8) mian_recal_day_pane_t1

0x3ac5,	// (0x0003be96) list_single_dyc_row_text_pane_t4_ParamLimits

0x3ac5,	// (0x0003be96) list_single_dyc_row_text_pane_t4

0x3afc,	// (0x0003becd) list_single_dyc_row_text_pane_t5_ParamLimits

0x3afc,	// (0x0003becd) list_single_dyc_row_text_pane_t5

0x3b72,	// (0x0003bf43) list_single_dyc_row_text_pane_t6_ParamLimits

0x3b72,	// (0x0003bf43) list_single_dyc_row_text_pane_t6

0xe820,	// (0x00046bf1) aid_mgn_list_cale_time_pane

0xe17d,	// (0x0004654e) main_gallery2_pane_ParamLimits

0x199c,	// (0x00039d6d) main_clock2_pane_cp01_t1

0x19ac,	// (0x00039d7d) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x00047ae2) main_clock2_pane_cp01_t

0x4959,	// (0x0003cd2a) cale_week_scroll_pane_g16_ParamLimits

0x4959,	// (0x0003cd2a) cale_week_scroll_pane_g16

0xe42f,	// (0x00046800) vorec_slider_pane

0xd547,	// (0x00045918) vidtel_button_pane_t1_ParamLimits

0xaa01,	// (0x00042dd2) main_fs_bigclock_clock_pane_g1_ParamLimits

0xaa01,	// (0x00042dd2) main_fs_bigclock_clock_pane_g2_ParamLimits

0xaa0e,	// (0x00042ddf) main_fs_bigclock_clock_pane_g3_ParamLimits

0xaa0e,	// (0x00042ddf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd2e,	// (0x000480ff) main_fs_bigclock_clock_pane_g_ParamLimits

0xaa1a,	// (0x00042deb) main_fs_bigclock_clock_pane_t1_ParamLimits

0xaa2d,	// (0x00042dfe) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd37,	// (0x00048108) main_fs_bigclock_clock_pane_t_ParamLimits

0x73ba,	// (0x0003f78b) main_mup3_lyrics_pane_ParamLimits

0x73ba,	// (0x0003f78b) main_mup3_lyrics_pane

0xb535,	// (0x00043906) main_mup3_lyrics_pane_t1_ParamLimits

0xb535,	// (0x00043906) main_mup3_lyrics_pane_t1

0x7f49,	// (0x0004031a) aid_main_mp4_pane_t1_area

0x7f53,	// (0x00040324) aid_main_mp4_pane_t2_area

0x8052,	// (0x00040423) main_mp4_pane_g7_ParamLimits

0x8052,	// (0x00040423) main_mp4_pane_g7

0x805e,	// (0x0004042f) main_mp4_pane_g8_ParamLimits

0x805e,	// (0x0004042f) main_mp4_pane_g8

0x8470,	// (0x00040841) aid_call6_pane_g1_size

0xb225,	// (0x000435f6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb225,	// (0x000435f6) list_double_large_graphic_phob2_other_pane

0xe7d8,	// (0x00046ba9) list_double_large_graphic_phob2_other_pane_g1

0xd5cb,	// (0x0004599c) list_highlight_pane_cp026

0xe17d,	// (0x0004654e) main_welc_pane_ParamLimits

0xa4a1,	// (0x00042872) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa4a1,	// (0x00042872) main_sp_fs_ctrlbar_pane_g3

0xa4b9,	// (0x0004288a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa4b9,	// (0x0004288a) main_sp_fs_ctrlbar_pane_g4

0xa4eb,	// (0x000428bc) toolbar2_fixed_button_pane_cp01

0xa4f6,	// (0x000428c7) toolbar2_fixed_button_pane_cp02

0xa501,	// (0x000428d2) toolbar2_fixed_button_pane_cp03

0xb274,	// (0x00043645) list_welc_entry_pane_ParamLimits

0xb274,	// (0x00043645) list_welc_entry_pane

0xb2d1,	// (0x000436a2) main_welc_pane_g3_ParamLimits

0xb2d1,	// (0x000436a2) main_welc_pane_g3

0xb317,	// (0x000436e8) main_welc_pane_t2_ParamLimits

0xb317,	// (0x000436e8) main_welc_pane_t2

0xb32b,	// (0x000436fc) main_welc_pane_t3_ParamLimits

0xb32b,	// (0x000436fc) main_welc_pane_t3

0x0005,

0xfe3a,	// (0x0004820b) main_welc_pane_t_ParamLimits

0xfe3a,	// (0x0004820b) main_welc_pane_t

0xb427,	// (0x000437f8) welc_button_pane_ParamLimits

0xb427,	// (0x000437f8) welc_button_pane

0xb485,	// (0x00043856) welc_service_logo_pane_ParamLimits

0xb485,	// (0x00043856) welc_service_logo_pane

0xb567,	// (0x00043938) list_single_welc_entry_pane_ParamLimits

0xb567,	// (0x00043938) list_single_welc_entry_pane

0xb578,	// (0x00043949) list_single_welc_entry_pane_g1

0xb580,	// (0x00043951) list_single_welc_entry_pane_t1

0xb58e,	// (0x0004395f) list_single_welc_entry_pane_t2

0x0001,

0xfe4c,	// (0x0004821d) list_single_welc_entry_pane_t

0xd5cb,	// (0x0004599c) bg_button_pane_cp035

0xb59c,	// (0x0004396d) welc_button_pane_t1

0xd93c,	// (0x00045d0d) welc_service_logo_pane_g1

0xd945,	// (0x00045d16) welc_service_logo_pane_g2

0x0001,

0xfe51,	// (0x00048222) welc_service_logo_pane_g

0xd5cb,	// (0x0004599c) main_int_radio_pane

0xe32d,	// (0x000466fe) list_single_fs_dyc_pane_g1

0x3ff5,	// (0x0003c3c6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x3ff5,	// (0x0003c3c6) list_double_large_graphic_phob2_pane_g3

0x4001,	// (0x0003c3d2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x4001,	// (0x0003c3d2) list_double_large_graphic_phob2_pane_g4

0xb5aa,	// (0x0004397b) main_int_radio1_pane_ParamLimits

0xb5aa,	// (0x0004397b) main_int_radio1_pane

0xd94e,	// (0x00045d1f) find_pane_cp02

0xb5bc,	// (0x0004398d) input_focus_pane_cp12_ParamLimits

0xb5bc,	// (0x0004398d) input_focus_pane_cp12

0xb5c8,	// (0x00043999) input_focus_pane_cp13_ParamLimits

0xb5c8,	// (0x00043999) input_focus_pane_cp13

0xb5e0,	// (0x000439b1) input_focus_pane_cp14_ParamLimits

0xb5e0,	// (0x000439b1) input_focus_pane_cp14

0xd957,	// (0x00045d28) int_radio1_listscroll_pane

0xb5f8,	// (0x000439c9) main_int_radio1_pane_g1_ParamLimits

0xb5f8,	// (0x000439c9) main_int_radio1_pane_g1

0xb608,	// (0x000439d9) main_int_radio1_pane_t1_ParamLimits

0xb608,	// (0x000439d9) main_int_radio1_pane_t1

0xb61c,	// (0x000439ed) main_int_radio1_pane_t2_ParamLimits

0xb61c,	// (0x000439ed) main_int_radio1_pane_t2

0xb630,	// (0x00043a01) main_int_radio1_pane_t3_ParamLimits

0xb630,	// (0x00043a01) main_int_radio1_pane_t3

0xb644,	// (0x00043a15) main_int_radio1_pane_t4_ParamLimits

0xb644,	// (0x00043a15) main_int_radio1_pane_t4

0xd961,	// (0x00045d32) main_int_radio1_pane_t5_ParamLimits

0xd961,	// (0x00045d32) main_int_radio1_pane_t5

0xb65b,	// (0x00043a2c) main_int_radio1_pane_t6_ParamLimits

0xb65b,	// (0x00043a2c) main_int_radio1_pane_t6

0xb66d,	// (0x00043a3e) main_int_radio1_pane_t7_ParamLimits

0xb66d,	// (0x00043a3e) main_int_radio1_pane_t7

0xb67f,	// (0x00043a50) main_int_radio1_pane_t8_ParamLimits

0xb67f,	// (0x00043a50) main_int_radio1_pane_t8

0xb693,	// (0x00043a64) main_int_radio1_pane_t9_ParamLimits

0xb693,	// (0x00043a64) main_int_radio1_pane_t9

0xb6a5,	// (0x00043a76) main_int_radio1_pane_t10_ParamLimits

0xb6a5,	// (0x00043a76) main_int_radio1_pane_t10

0xb6d6,	// (0x00043aa7) main_int_radio1_pane_t11_ParamLimits

0xb6d6,	// (0x00043aa7) main_int_radio1_pane_t11

0xb707,	// (0x00043ad8) main_int_radio1_pane_t12_ParamLimits

0xb707,	// (0x00043ad8) main_int_radio1_pane_t12

0x000b,

0xfe56,	// (0x00048227) main_int_radio1_pane_t_ParamLimits

0xfe56,	// (0x00048227) main_int_radio1_pane_t

0xd973,	// (0x00045d44) int_radio_list_pane

0xd46a,	// (0x0004583b) scroll_pane_cp037

0xd97b,	// (0x00045d4c) list_double_large_graphic_int_radio_pane_ParamLimits

0xd97b,	// (0x00045d4c) list_double_large_graphic_int_radio_pane

0xd993,	// (0x00045d64) list_double_large_graphic_int_radio_pane_g1

0x40c9,	// (0x0003c49a) list_double_large_graphic_int_radio_pane_t1

0x40d7,	// (0x0003c4a8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6f,	// (0x00048240) list_double_large_graphic_int_radio_pane_t

0xd5cb,	// (0x0004599c) list_highlight_pane_cp027

0xd580,	// (0x00045951) main_button_pane_4

0xb2dd,	// (0x000436ae) main_welc_pane_g4_ParamLimits

0xb2dd,	// (0x000436ae) main_welc_pane_g4

0xb33d,	// (0x0004370e) main_welc_pane_t4_ParamLimits

0xb33d,	// (0x0004370e) main_welc_pane_t4

0xb34f,	// (0x00043720) main_welc_pane_t5_ParamLimits

0xb34f,	// (0x00043720) main_welc_pane_t5

0xb37f,	// (0x00043750) main_welc_pane_t6_ParamLimits

0xb37f,	// (0x00043750) main_welc_pane_t6

0xb435,	// (0x00043806) welc_button_pane_2_ParamLimits

0xb435,	// (0x00043806) welc_button_pane_2

0xb44d,	// (0x0004381e) welc_button_pane_3_ParamLimits

0xb44d,	// (0x0004381e) welc_button_pane_3

0xd588,	// (0x00045959) welc_button_pane_4

0xb467,	// (0x00043838) welc_button_pane_5_ParamLimits

0xb467,	// (0x00043838) welc_button_pane_5

0x4139,	// (0x0003c50a) main_popup_welc_pane

0xd9ab,	// (0x00045d7c) main_welc_sk_g3

0xd9b5,	// (0x00045d86) main_welc_sk_g4

0xd9bf,	// (0x00045d90) main_welc_sk_t3

0xd9cf,	// (0x00045da0) main_welc_sk_t4

0xd9df,	// (0x00045db0) popup_welc_pane_t4

0xd9ed,	// (0x00045dbe) popup_welc_pane_t5

0xd9fb,	// (0x00045dcc) popup_welc_pane_t6

0xd5cb,	// (0x0004599c) main_acti_pane

0xd5cb,	// (0x0004599c) main_sso_pane

0xb71e,	// (0x00043aef) sso_body_pane_ParamLimits

0xb71e,	// (0x00043aef) sso_body_pane

0xb72c,	// (0x00043afd) sso_logo_pane_ParamLimits

0xb72c,	// (0x00043afd) sso_logo_pane

0xb755,	// (0x00043b26) sso_sk_pane_ParamLimits

0xb755,	// (0x00043b26) sso_sk_pane

0xe451,	// (0x00046822) main_sso_logo_pane_g1

0xb762,	// (0x00043b33) sso_sk_pane_t1_ParamLimits

0xb762,	// (0x00043b33) sso_sk_pane_t1

0xb776,	// (0x00043b47) sso_sk_pane_t2_ParamLimits

0xb776,	// (0x00043b47) sso_sk_pane_t2

0x0001,

0xfe74,	// (0x00048245) sso_sk_pane_t_ParamLimits

0xfe74,	// (0x00048245) sso_sk_pane_t

0xda39,	// (0x00045e0a) aid_sso_gap

0xda42,	// (0x00045e13) aid_sso_txt1

0xda4c,	// (0x00045e1d) aid_sso_txt2

0xda56,	// (0x00045e27) aid_sso_txt3

0x0002,

0xfe79,	// (0x0004824a) aid_sso_txt

0xda60,	// (0x00045e31) aid_sso_widget

0xb7d5,	// (0x00043ba6) sso_btn_pane_ParamLimits

0xb7d5,	// (0x00043ba6) sso_btn_pane

0xb84e,	// (0x00043c1f) sso_option_pane_ParamLimits

0xb84e,	// (0x00043c1f) sso_option_pane

0xb8c8,	// (0x00043c99) sso_query_pane_ParamLimits

0xb8c8,	// (0x00043c99) sso_query_pane

0xb918,	// (0x00043ce9) sso_query_pane_cp01_ParamLimits

0xb918,	// (0x00043ce9) sso_query_pane_cp01

0xb96a,	// (0x00043d3b) sso_t_hdr_pane_ParamLimits

0xb96a,	// (0x00043d3b) sso_t_hdr_pane

0xb98e,	// (0x00043d5f) sso_t_nml_pane_ParamLimits

0xb98e,	// (0x00043d5f) sso_t_nml_pane

0xda6a,	// (0x00045e3b) sso_t_sub_pane

0xb739,	// (0x00043b0a) sso_popup_window_ParamLimits

0xb739,	// (0x00043b0a) sso_popup_window

0xb788,	// (0x00043b59) sso_apps_pane_ParamLimits

0xb788,	// (0x00043b59) sso_apps_pane

0xb7ab,	// (0x00043b7c) sso_body_pane_g1

0xb7b5,	// (0x00043b86) sso_body_pane_t1

0xb7c5,	// (0x00043b96) sso_body_pane_t2

0x0001,

0xfe80,	// (0x00048251) sso_body_pane_t

0xb820,	// (0x00043bf1) sso_btn_pane_cp01_ParamLimits

0xb820,	// (0x00043bf1) sso_btn_pane_cp01

0xb89a,	// (0x00043c6b) sso_prog_pane_ParamLimits

0xb89a,	// (0x00043c6b) sso_prog_pane

0xda7f,	// (0x00045e50) sso_t_hdr_pane_t1_ParamLimits

0xda7f,	// (0x00045e50) sso_t_hdr_pane_t1

0xda98,	// (0x00045e69) input_focus_pane_cp10_ParamLimits

0xda98,	// (0x00045e69) input_focus_pane_cp10

0xdab2,	// (0x00045e83) sso_query_pane_t1_ParamLimits

0xdab2,	// (0x00045e83) sso_query_pane_t1

0xdac5,	// (0x00045e96) sso_query_pane_t2_ParamLimits

0xdac5,	// (0x00045e96) sso_query_pane_t2

0xdae0,	// (0x00045eb1) sso_query_pane_t3_ParamLimits

0xdae0,	// (0x00045eb1) sso_query_pane_t3

0xdb0a,	// (0x00045edb) sso_query_pane_t4_ParamLimits

0xdb0a,	// (0x00045edb) sso_query_pane_t4

0x0003,

0xfe85,	// (0x00048256) sso_query_pane_t_ParamLimits

0xfe85,	// (0x00048256) sso_query_pane_t

0xd5cb,	// (0x0004599c) bg_button_pane_cp22

0xd99c,	// (0x00045d6d) sso_btn_pane_t1

0xb9de,	// (0x00043daf) sso_t_nml_pane_t1_ParamLimits

0xb9de,	// (0x00043daf) sso_t_nml_pane_t1

0xdb2e,	// (0x00045eff) sso_option_row_pane_ParamLimits

0xdb2e,	// (0x00045eff) sso_option_row_pane

0xdb41,	// (0x00045f12) sso_t_sub_pane_t1_ParamLimits

0xdb41,	// (0x00045f12) sso_t_sub_pane_t1

0xe17d,	// (0x0004654e) bg_popup_window_pane_cp11_ParamLimits

0xe17d,	// (0x0004654e) bg_popup_window_pane_cp11

0xdb5e,	// (0x00045f2f) popup_sk_window_cp01_ParamLimits

0xdb5e,	// (0x00045f2f) popup_sk_window_cp01

0xdb6b,	// (0x00045f3c) sso_popup_body_pane_ParamLimits

0xdb6b,	// (0x00045f3c) sso_popup_body_pane

0xdb78,	// (0x00045f49) scroll_pane_cp21_ParamLimits

0xdb78,	// (0x00045f49) scroll_pane_cp21

0xdb85,	// (0x00045f56) sso_popup_body_t_pane_ParamLimits

0xdb85,	// (0x00045f56) sso_popup_body_t_pane

0xdb92,	// (0x00045f63) sso_popup_body_t_hdr_pane_ParamLimits

0xdb92,	// (0x00045f63) sso_popup_body_t_hdr_pane

0xdba5,	// (0x00045f76) sso_popup_body_t_nml_pane_ParamLimits

0xdba5,	// (0x00045f76) sso_popup_body_t_nml_pane

0xdbc3,	// (0x00045f94) sso_popup_body_t_sub_pane_ParamLimits

0xdbc3,	// (0x00045f94) sso_popup_body_t_sub_pane

0xdbe6,	// (0x00045fb7) sso_popup_body_t_hdr_pane_t1

0xb9fb,	// (0x00043dcc) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb9fb,	// (0x00043dcc) sso_popup_body_t_nml_pane_t1

0xdbf6,	// (0x00045fc7) sso_popup_body_t_sub_pane_t1_ParamLimits

0xdbf6,	// (0x00045fc7) sso_popup_body_t_sub_pane_t1

0xe451,	// (0x00046822) sso_prog_pane_g1

0xba3c,	// (0x00043e0d) sso_apps_pane_comp1_ParamLimits

0xba3c,	// (0x00043e0d) sso_apps_pane_comp1

0xdc1b,	// (0x00045fec) sso_apps_pane_comp1_g1

0xdc23,	// (0x00045ff4) sso_apps_pane_comp1_t1

0xdc3f,	// (0x00046010) sso_option_row_pane_g1

0xdc47,	// (0x00046018) sso_option_row_pane_t1

0xb262,	// (0x00043633) bg_welc_area_ParamLimits

0xb262,	// (0x00043633) bg_welc_area

0xb3b5,	// (0x00043786) sso_t_hdr_pane_a_t1_ParamLimits

0xb3b5,	// (0x00043786) sso_t_hdr_pane_a_t1

0xb3c9,	// (0x0004379a) sso_t_nml_pane_a_t1_ParamLimits

0xb3c9,	// (0x0004379a) sso_t_nml_pane_a_t1

0xb3f3,	// (0x000437c4) sso_t_sub_pane_a_t1_ParamLimits

0xb3f3,	// (0x000437c4) sso_t_sub_pane_a_t1

0xd99c,	// (0x00045d6d) sso_btn_pane_t1_copy1

0xd5cb,	// (0x0004599c) welc_button_pane_2_comp1

0xda09,	// (0x00045dda) sso_t_hdr_pane_p_t1

0xda19,	// (0x00045dea) sso_t_nml_pane_p_t1

0xda29,	// (0x00045dfa) sso_t_sub_pane_p_t1

0xcd26,	// (0x000450f7) list_cmail_pane_ParamLimits

0xb477,	// (0x00043848) welc_button_pane_cp01_ParamLimits

0xb477,	// (0x00043848) welc_button_pane_cp01

0xd5cb,	// (0x0004599c) main_att_pane

0xdc31,	// (0x00046002) input_focus_pane_cp10_t1

0xdc47,	// (0x00046018) sso_option_row_pane_t1_ParamLimits

0xba56,	// (0x00043e27) main_att_body_pane_ParamLimits

0xba56,	// (0x00043e27) main_att_body_pane

0xba82,	// (0x00043e53) att_btn_pane_ParamLimits

0xba82,	// (0x00043e53) att_btn_pane

0xbaa4,	// (0x00043e75) att_btn_pane_cp01_ParamLimits

0xbaa4,	// (0x00043e75) att_btn_pane_cp01

0xbabe,	// (0x00043e8f) att_li_srv_pane_ParamLimits

0xbabe,	// (0x00043e8f) att_li_srv_pane

0xbad0,	// (0x00043ea1) att_opt_pane_ParamLimits

0xbad0,	// (0x00043ea1) att_opt_pane

0xbb14,	// (0x00043ee5) att_query_pane_ParamLimits

0xbb14,	// (0x00043ee5) att_query_pane

0xbb58,	// (0x00043f29) att_query_pane_cp01_ParamLimits

0xbb58,	// (0x00043f29) att_query_pane_cp01

0xbb9c,	// (0x00043f6d) att_t_hdr_pane_ParamLimits

0xbb9c,	// (0x00043f6d) att_t_hdr_pane

0xbbee,	// (0x00043fbf) att_t_nml_pane_ParamLimits

0xbbee,	// (0x00043fbf) att_t_nml_pane

0xbc22,	// (0x00043ff3) att_t_nml_pane_cp01_ParamLimits

0xbc22,	// (0x00043ff3) att_t_nml_pane_cp01

0xbc46,	// (0x00044017) att_t_nmlb_pane_ParamLimits

0xbc46,	// (0x00044017) att_t_nmlb_pane

0xbc60,	// (0x00044031) att_term_pane_ParamLimits

0xbc60,	// (0x00044031) att_term_pane

0xbca4,	// (0x00044075) main_att_body_pane_g1_ParamLimits

0xbca4,	// (0x00044075) main_att_body_pane_g1

0xda7f,	// (0x00045e50) att_t_hdr_pane_t1_ParamLimits

0xda7f,	// (0x00045e50) att_t_hdr_pane_t1

0xdc5d,	// (0x0004602e) att_t_nml_pane_t1_ParamLimits

0xdc5d,	// (0x0004602e) att_t_nml_pane_t1

0xdc82,	// (0x00046053) att_btn_pane_t1

0xd5cb,	// (0x0004599c) bg_button_pane_cp23

0xbcd8,	// (0x000440a9) att_li_srv_row_pane_ParamLimits

0xbcd8,	// (0x000440a9) att_li_srv_row_pane

0xdc92,	// (0x00046063) att_t_nmlb_pane_t1_ParamLimits

0xdc92,	// (0x00046063) att_t_nmlb_pane_t1

0xdcab,	// (0x0004607c) att_query_pane_t1

0xdcba,	// (0x0004608b) att_query_pane_t2

0xdcc9,	// (0x0004609a) att_query_pane_t3

0x0002,

0xfe8e,	// (0x0004825f) att_query_pane_t

0xdcd8,	// (0x000460a9) input_focus_pane_cp11

0xdce1,	// (0x000460b2) att_term_pane_t1_ParamLimits

0xdce1,	// (0x000460b2) att_term_pane_t1

0xd5cb,	// (0x0004599c) att_opt_row_pane

0xdcfe,	// (0x000460cf) att_opt_row_pane_g1

0xdd06,	// (0x000460d7) att_opt_row_pane_t1_ParamLimits

0xdd06,	// (0x000460d7) att_opt_row_pane_t1

0xbce8,	// (0x000440b9) att_li_srv_row_pane_g1

0xbcf0,	// (0x000440c1) att_li_srv_row_pane_t1

0xbd05,	// (0x000440d6) att_li_srv_row_pane_t2

0x0001,

0xfe95,	// (0x00048266) att_li_srv_row_pane_t

0xd5cb,	// (0x0004599c) main_call7_pane

0xd5cb,	// (0x0004599c) main_vod_pane

0xda6a,	// (0x00045e3b) sso_t_sub_pane_ParamLimits

0xba6a,	// (0x00043e3b) att_btn_emg_pane_ParamLimits

0xba6a,	// (0x00043e3b) att_btn_emg_pane

0xbcf0,	// (0x000440c1) att_li_srv_row_pane_t1_ParamLimits

0xbd05,	// (0x000440d6) att_li_srv_row_pane_t2_ParamLimits

0xfe95,	// (0x00048266) att_li_srv_row_pane_t_ParamLimits

0xdd1f,	// (0x000460f0) att_btn_close_pane_g1

0xd5cb,	// (0x0004599c) bg_button_pane_cp24

0x6dd8,	// (0x0003f1a9) main_vod_body_pane_ParamLimits

0x6dd8,	// (0x0003f1a9) main_vod_body_pane

0xbd1a,	// (0x000440eb) main_vod_body_pane_g1_ParamLimits

0xbd1a,	// (0x000440eb) main_vod_body_pane_g1

0xbd4a,	// (0x0004411b) scroll_pane_cp24_ParamLimits

0xbd4a,	// (0x0004411b) scroll_pane_cp24

0xbd92,	// (0x00044163) vod_btn_pane_ParamLimits

0xbd92,	// (0x00044163) vod_btn_pane

0xbdd2,	// (0x000441a3) vod_det_pane_ParamLimits

0xbdd2,	// (0x000441a3) vod_det_pane

0xbdfe,	// (0x000441cf) vod_logo_g1_ParamLimits

0xbdfe,	// (0x000441cf) vod_logo_g1

0xbe38,	// (0x00044209) vod_opt_pane_ParamLimits

0xbe38,	// (0x00044209) vod_opt_pane

0xbe68,	// (0x00044239) vod_opt_pane_cp01_ParamLimits

0xbe68,	// (0x00044239) vod_opt_pane_cp01

0xbe90,	// (0x00044261) vod_query_pane_ParamLimits

0xbe90,	// (0x00044261) vod_query_pane

0xbeba,	// (0x0004428b) vod_query_pane_cp01_ParamLimits

0xbeba,	// (0x0004428b) vod_query_pane_cp01

0xbec6,	// (0x00044297) vod_t_nml_pane_ParamLimits

0xbec6,	// (0x00044297) vod_t_nml_pane

0xbf6c,	// (0x0004433d) vod_t_nml_pane_cp01_ParamLimits

0xbf6c,	// (0x0004433d) vod_t_nml_pane_cp01

0xbfa4,	// (0x00044375) vod_t_sub_pane_ParamLimits

0xbfa4,	// (0x00044375) vod_t_sub_pane

0xbfd2,	// (0x000443a3) vod_t_sub_pane_cp01_ParamLimits

0xbfd2,	// (0x000443a3) vod_t_sub_pane_cp01

0xdcd8,	// (0x000460a9) vod_query_field_pane

0xdcab,	// (0x0004607c) vod_query_pane_t1

0xd5cb,	// (0x0004599c) bg_button_pane_cp25

0xdc82,	// (0x00046053) sso_btn_pane_t1_copy2

0xbffa,	// (0x000443cb) vod_t_nml_pane_t1_ParamLimits

0xbffa,	// (0x000443cb) vod_t_nml_pane_t1

0xdd27,	// (0x000460f8) vod_opt_row_pane_ParamLimits

0xdd27,	// (0x000460f8) vod_opt_row_pane

0xdd39,	// (0x0004610a) vod_t_sub_pane_t1_ParamLimits

0xdd39,	// (0x0004610a) vod_t_sub_pane_t1

0xc031,	// (0x00044402) vod_det_cell_pane_ParamLimits

0xc031,	// (0x00044402) vod_det_cell_pane

0xd5cb,	// (0x0004599c) input_focus_pane_cp15

0xdd52,	// (0x00046123) vod_query_field_pane_t1

0xdd60,	// (0x00046131) vod_opt_row_pane_g1_ParamLimits

0xdd60,	// (0x00046131) vod_opt_row_pane_g1

0xdd6c,	// (0x0004613d) vod_opt_row_pane_t1_ParamLimits

0xdd6c,	// (0x0004613d) vod_opt_row_pane_t1

0xdd91,	// (0x00046162) vod_det_cell_field_pane

0xdd9a,	// (0x0004616b) vod_det_cell_pane_g1

0xdcab,	// (0x0004607c) vod_det_cell_pane_t1

0xd5cb,	// (0x0004599c) input_focus_pane_cp16

0xdd52,	// (0x00046123) vod_det_cell_field_pane_t1

0xac7c,	// (0x0004304d) call7_btn_grp_pane_ParamLimits

0xac7c,	// (0x0004304d) call7_btn_grp_pane

0xc043,	// (0x00044414) call7_bubble_pane_ParamLimits

0xc043,	// (0x00044414) call7_bubble_pane

0xacb7,	// (0x00043088) cell_call7_btn_pane_ParamLimits

0xacb7,	// (0x00043088) cell_call7_btn_pane

0xc051,	// (0x00044422) call7_pane_g1_ParamLimits

0xc051,	// (0x00044422) call7_pane_g1

0xc060,	// (0x00044431) call7_windows_conf_pane_ParamLimits

0xc060,	// (0x00044431) call7_windows_conf_pane

0xc07a,	// (0x0004444b) popup_call7_1st_window_ParamLimits

0xc07a,	// (0x0004444b) popup_call7_1st_window

0xc088,	// (0x00044459) popup_call7_2nd_window_ParamLimits

0xc088,	// (0x00044459) popup_call7_2nd_window

0xc096,	// (0x00044467) popup_call7_3rd_window_ParamLimits

0xc096,	// (0x00044467) popup_call7_3rd_window

0xd5cb,	// (0x0004599c) bg_button_pane_cp26

0xd38b,	// (0x0004575c) cell_call7_btn_pane_g1

0xd92d,	// (0x00045cfe) cell_call7_btn_pane_t1

0xd5cb,	// (0x0004599c) bg_popup_window_pane_cp12

0xdda2,	// (0x00046173) popup_call7_1st_window_g1

0xddaa,	// (0x0004617b) popup_call7_1st_window_g2

0xddb2,	// (0x00046183) popup_call7_1st_window_g3

0x0002,

0xfe9a,	// (0x0004826b) popup_call7_1st_window_g

0xddba,	// (0x0004618b) popup_call7_1st_window_t1

0xddc9,	// (0x0004619a) popup_call7_1st_window_t2

0xddd7,	// (0x000461a8) popup_call7_1st_window_t3

0x0002,

0xfea1,	// (0x00048272) popup_call7_1st_window_t

0xd5cb,	// (0x0004599c) bg_popup_window_pane_cp13

0xdde5,	// (0x000461b6) popup_call7_2nd_window_g1

0xdded,	// (0x000461be) popup_call7_2nd_window_g2

0xddf5,	// (0x000461c6) popup_call7_2nd_window_g3

0x0002,

0xfea8,	// (0x00048279) popup_call7_2nd_window_g

0xddfd,	// (0x000461ce) popup_call7_2nd_window_t1

0xd5cb,	// (0x0004599c) bg_popup_window_pane_cp14

0xde0c,	// (0x000461dd) call7_list_conf_pane

0xde14,	// (0x000461e5) call7_list_conf_row_pane_ParamLimits

0xde14,	// (0x000461e5) call7_list_conf_row_pane

0xde27,	// (0x000461f8) call7_list_conf_row_pane_g1

0xde2f,	// (0x00046200) call7_list_conf_row_pane_g2

0x0001,

0xfeaf,	// (0x00048280) call7_list_conf_row_pane_g

0xde37,	// (0x00046208) call7_list_conf_row_pane_t1

0xd5cb,	// (0x0004599c) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small

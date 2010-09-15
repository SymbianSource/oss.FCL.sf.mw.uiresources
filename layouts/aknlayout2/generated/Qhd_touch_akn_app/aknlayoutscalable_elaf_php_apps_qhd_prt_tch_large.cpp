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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00071b3f };

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
0x2716,	// (0x00074255) Screen

0x2722,	// (0x00074261) application_window

0x277e,	// (0x000742bd) area_bottom_pane_ParamLimits

0x277e,	// (0x000742bd) area_bottom_pane

0x27d6,	// (0x00074315) area_top_pane_ParamLimits

0x27d6,	// (0x00074315) area_top_pane

0x283a,	// (0x00074379) call_video_uplink_pane_ParamLimits

0x283a,	// (0x00074379) call_video_uplink_pane

0x2879,	// (0x000743b8) main_pane_ParamLimits

0x2879,	// (0x000743b8) main_pane

0xe99b,	// (0x000804da) context_pane

0x560c,	// (0x0007714b) navi_pane

0x5632,	// (0x00077171) popup_cale_events_window_ParamLimits

0x5632,	// (0x00077171) popup_cale_events_window

0xe9ae,	// (0x000804ed) popup_mup_playback_window

0x564a,	// (0x00077189) signal_pane

0xbc45,	// (0x0007d784) main_browser_pane

0xbdf7,	// (0x0007d936) main_burst_pane

0x5498,	// (0x00076fd7) main_calc_pane

0xe98f,	// (0x000804ce) main_cale_day_pane

0x2e62,	// (0x000749a1) main_cale_month_pane

0xe98f,	// (0x000804ce) main_cale_week_pane

0xbdf7,	// (0x0007d936) main_call_pane

0xb8fd,	// (0x0007d43c) main_call_poc_pane

0xbdf7,	// (0x0007d936) main_camera_pane

0xbdf7,	// (0x0007d936) main_chi_dic_pane

0xc603,	// (0x0007e142) main_clock_pane

0xb8fd,	// (0x0007d43c) main_fmradio_pane

0xbdf7,	// (0x0007d936) main_graph_messa_pane

0xb8fd,	// (0x0007d43c) main_help_pane

0xbc45,	// (0x0007d784) main_im_pane

0xbb58,	// (0x0007d697) main_image_pane_ParamLimits

0xbb58,	// (0x0007d697) main_image_pane

0xb8fd,	// (0x0007d43c) main_location2_pane

0xbdf7,	// (0x0007d936) main_location_pane

0xbb58,	// (0x0007d697) main_messa_pane

0xb8fd,	// (0x0007d43c) main_mp2_pane

0xbdf7,	// (0x0007d936) main_mp_pane

0xb8fd,	// (0x0007d43c) main_msg_pane

0xb8fd,	// (0x0007d43c) main_mup_eq_pane

0xb8fd,	// (0x0007d43c) main_mup_pane

0xbc45,	// (0x0007d784) main_notes_pane

0xb8fd,	// (0x0007d43c) main_pec_pane

0xb8fd,	// (0x0007d43c) main_phob_pane

0xb8fd,	// (0x0007d43c) main_pinb_pane

0xb8fd,	// (0x0007d43c) main_postcard_pane

0xb8fd,	// (0x0007d43c) main_qdial_pane

0xbdf7,	// (0x0007d936) main_skin_pane

0xb8fd,	// (0x0007d43c) main_smil2_pane

0xbdf7,	// (0x0007d936) main_smil_pane

0xbdf7,	// (0x0007d936) main_video_pane

0xbdf7,	// (0x0007d936) main_video_tele_pane

0xbb58,	// (0x0007d697) main_viewer_pane_ParamLimits

0xbb58,	// (0x0007d697) main_viewer_pane

0xbdf7,	// (0x0007d936) main_vorec_pane

0x54d6,	// (0x00077015) popup_blid_sat_info_window_ParamLimits

0x54d6,	// (0x00077015) popup_blid_sat_info_window

0x54f6,	// (0x00077035) popup_dyc_status_message_window_ParamLimits

0x54f6,	// (0x00077035) popup_dyc_status_message_window

0x5506,	// (0x00077045) popup_grid_large_graphic_window_ParamLimits

0x5506,	// (0x00077045) popup_grid_large_graphic_window

0x5597,	// (0x000770d6) popup_loc_request_window_ParamLimits

0x5597,	// (0x000770d6) popup_loc_request_window

0x55e4,	// (0x00077123) popup_wml_address_window_ParamLimits

0x55e4,	// (0x00077123) popup_wml_address_window

0x5370,	// (0x00076eaf) call_muted_g1

0x4feb,	// (0x00076b2a) popup_call_audio_conf_window_ParamLimits

0x4feb,	// (0x00076b2a) popup_call_audio_conf_window

0x5380,	// (0x00076ebf) popup_call_audio_first_window_ParamLimits

0x5380,	// (0x00076ebf) popup_call_audio_first_window

0x53c0,	// (0x00076eff) popup_call_audio_in_window_ParamLimits

0x53c0,	// (0x00076eff) popup_call_audio_in_window

0x53e4,	// (0x00076f23) popup_call_audio_out_window_ParamLimits

0x53e4,	// (0x00076f23) popup_call_audio_out_window

0x5406,	// (0x00076f45) popup_call_audio_second_window_ParamLimits

0x5406,	// (0x00076f45) popup_call_audio_second_window

0x5436,	// (0x00076f75) popup_call_audio_wait_window_ParamLimits

0x5436,	// (0x00076f75) popup_call_audio_wait_window

0x5457,	// (0x00076f96) popup_number_entry_window_ParamLimits

0x5457,	// (0x00076f96) popup_number_entry_window

0xb4ea,	// (0x0007d029) bg_popup_call_pane_cp05_ParamLimits

0xb4ea,	// (0x0007d029) bg_popup_call_pane_cp05

0xb50a,	// (0x0007d049) popup_number_entry_window_t1

0xb51d,	// (0x0007d05c) popup_number_entry_window_t2

0xb52f,	// (0x0007d06e) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00080b84) popup_number_entry_window_t

0xb541,	// (0x0007d080) text_title_cp2

0xb554,	// (0x0007d093) bg_popup_call_pane_cp_ParamLimits

0xb554,	// (0x0007d093) bg_popup_call_pane_cp

0xb562,	// (0x0007d0a1) call_thumbnail_pane

0xb56a,	// (0x0007d0a9) popup_call_audio_in_window_g1_ParamLimits

0xb56a,	// (0x0007d0a9) popup_call_audio_in_window_g1

0xb576,	// (0x0007d0b5) popup_call_audio_in_window_g2_ParamLimits

0xb576,	// (0x0007d0b5) popup_call_audio_in_window_g2

0xb582,	// (0x0007d0c1) popup_call_audio_in_window_g3_ParamLimits

0xb582,	// (0x0007d0c1) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00080b8d) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00080b8d) popup_call_audio_in_window_g

0xb58e,	// (0x0007d0cd) popup_call_audio_in_window_t1_ParamLimits

0xb58e,	// (0x0007d0cd) popup_call_audio_in_window_t1

0xb5aa,	// (0x0007d0e9) popup_call_audio_in_window_t2_ParamLimits

0xb5aa,	// (0x0007d0e9) popup_call_audio_in_window_t2

0xb5c6,	// (0x0007d105) popup_call_audio_in_window_t3_ParamLimits

0xb5c6,	// (0x0007d105) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00080b94) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00080b94) popup_call_audio_in_window_t

0xb554,	// (0x0007d093) bg_popup_call_pane_cp01_ParamLimits

0xb554,	// (0x0007d093) bg_popup_call_pane_cp01

0xb562,	// (0x0007d0a1) call_thumbnail_pane_cp02

0xb5d9,	// (0x0007d118) call_type_pane_cp022

0xb5e1,	// (0x0007d120) popup_call_audio_out_window_g1_ParamLimits

0xb5e1,	// (0x0007d120) popup_call_audio_out_window_g1

0xb5f3,	// (0x0007d132) popup_call_audio_out_window_g2_ParamLimits

0xb5f3,	// (0x0007d132) popup_call_audio_out_window_g2

0xb5ff,	// (0x0007d13e) popup_call_audio_out_window_g3_ParamLimits

0xb5ff,	// (0x0007d13e) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00080b9b) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00080b9b) popup_call_audio_out_window_g

0xb611,	// (0x0007d150) popup_call_audio_out_window_t1_ParamLimits

0xb611,	// (0x0007d150) popup_call_audio_out_window_t1

0xb629,	// (0x0007d168) popup_call_audio_out_window_t2_ParamLimits

0xb629,	// (0x0007d168) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00080ba2) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00080ba2) popup_call_audio_out_window_t

0xb63e,	// (0x0007d17d) bg_popup_call_pane_ParamLimits

0xb63e,	// (0x0007d17d) bg_popup_call_pane

0x2a79,	// (0x000745b8) call_thumbnail_pane_cp_ParamLimits

0x2a79,	// (0x000745b8) call_thumbnail_pane_cp

0xb6c2,	// (0x0007d201) call_type_pane_cp01_ParamLimits

0xb6c2,	// (0x0007d201) call_type_pane_cp01

0xb706,	// (0x0007d245) popup_call_audio_first_window_g1_ParamLimits

0xb706,	// (0x0007d245) popup_call_audio_first_window_g1

0xb752,	// (0x0007d291) popup_call_audio_first_window_g2_ParamLimits

0xb752,	// (0x0007d291) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00080ba7) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00080ba7) popup_call_audio_first_window_g

0xb796,	// (0x0007d2d5) popup_call_audio_first_window_t1_ParamLimits

0xb796,	// (0x0007d2d5) popup_call_audio_first_window_t1

0xb842,	// (0x0007d381) popup_call_audio_first_window_t4_ParamLimits

0xb842,	// (0x0007d381) popup_call_audio_first_window_t4

0xb8ce,	// (0x0007d40d) popup_call_audio_first_window_t5_ParamLimits

0xb8ce,	// (0x0007d40d) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00080bac) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00080bac) popup_call_audio_first_window_t

0xb8fd,	// (0x0007d43c) bg_popup_call_pane_cp02

0xb907,	// (0x0007d446) call_type_pane_cp023

0xb90f,	// (0x0007d44e) popup_call_audio_wait_window_g1

0xb917,	// (0x0007d456) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00080bb3) popup_call_audio_wait_window_g

0xb91f,	// (0x0007d45e) popup_call_audio_wait_window_t3

0xb92d,	// (0x0007d46c) bg_popup_call_pane_cp03_ParamLimits

0xb92d,	// (0x0007d46c) bg_popup_call_pane_cp03

0xb98d,	// (0x0007d4cc) call_thumbnail_pane_cp011_ParamLimits

0xb98d,	// (0x0007d4cc) call_thumbnail_pane_cp011

0xb999,	// (0x0007d4d8) call_type_pane_cp034_ParamLimits

0xb999,	// (0x0007d4d8) call_type_pane_cp034

0xb9d5,	// (0x0007d514) popup_call_audio_second_window_g1_ParamLimits

0xb9d5,	// (0x0007d514) popup_call_audio_second_window_g1

0xba11,	// (0x0007d550) popup_call_audio_second_window_g2_ParamLimits

0xba11,	// (0x0007d550) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x00080bb8) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x00080bb8) popup_call_audio_second_window_g

0xba4d,	// (0x0007d58c) popup_call_audio_second_window_t1_ParamLimits

0xba4d,	// (0x0007d58c) popup_call_audio_second_window_t1

0xbace,	// (0x0007d60d) popup_call_audio_second_window_t2_ParamLimits

0xbace,	// (0x0007d60d) popup_call_audio_second_window_t2

0xbb04,	// (0x0007d643) popup_call_audio_second_window_t3_ParamLimits

0xbb04,	// (0x0007d643) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x00080bbd) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x00080bbd) popup_call_audio_second_window_t

0xb8fd,	// (0x0007d43c) bg_popup_call_pane_cp04

0xbb3a,	// (0x0007d679) list_conf_pane

0xbb42,	// (0x0007d681) popup_call_audio_conf_window_t1

0xbb50,	// (0x0007d68f) call_thumbnail_pane_g1

0xbb58,	// (0x0007d697) bg_pinb_pane_ParamLimits

0xbb58,	// (0x0007d697) bg_pinb_pane

0xbb66,	// (0x0007d6a5) find_pinb_pane

0xbb58,	// (0x0007d697) listscroll_pinb_pane_ParamLimits

0xbb58,	// (0x0007d697) listscroll_pinb_pane

0xbb70,	// (0x0007d6af) pinb_bg_pane_g1

0xbb70,	// (0x0007d6af) pinb_bg_pane_g2

0xbb70,	// (0x0007d6af) pinb_bg_pane_g3

0xbb70,	// (0x0007d6af) pinb_bg_pane_g4

0xbb70,	// (0x0007d6af) pinb_bg_pane_g5

0xbb70,	// (0x0007d6af) pinb_bg_pane_g6

0xbb70,	// (0x0007d6af) pinb_bg_pane_g7

0xbb70,	// (0x0007d6af) pinb_bg_pane_g8

0xbb70,	// (0x0007d6af) pinb_bg_pane_g9

0xbb70,	// (0x0007d6af) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00080bc4) pinb_bg_pane_g

0xb4d2,	// (0x0007d011) grid_pinb_pane

0xb4d2,	// (0x0007d011) list_pinb_pane

0xbb7a,	// (0x0007d6b9) scroll_pane_cp01_ParamLimits

0xbb7a,	// (0x0007d6b9) scroll_pane_cp01

0xbb88,	// (0x0007d6c7) find_pinb_pane_g1_ParamLimits

0xbb88,	// (0x0007d6c7) find_pinb_pane_g1

0xbba0,	// (0x0007d6df) find_pinb_pane_t1

0xbbb2,	// (0x0007d6f1) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00080bde) find_pinb_pane_t

0xbbc7,	// (0x0007d706) input_focus_pane_cp01_ParamLimits

0xbbc7,	// (0x0007d706) input_focus_pane_cp01

0xb4dc,	// (0x0007d01b) cell_pinb_pane_ParamLimits

0xb4dc,	// (0x0007d01b) cell_pinb_pane

0xbbd3,	// (0x0007d712) cell_pinb_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) cell_pinb_pane_g1

0xbbe1,	// (0x0007d720) cell_pinb_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) cell_pinb_pane_g2

0xbbe1,	// (0x0007d720) cell_pinb_pane_g3_ParamLimits

0xbbe1,	// (0x0007d720) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00080be3) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00080be3) cell_pinb_pane_g

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp01

0xb4dc,	// (0x0007d01b) list_pinb_item_pane_ParamLimits

0xb4dc,	// (0x0007d01b) list_pinb_item_pane

0xb4d2,	// (0x0007d011) list_highlight_pane_cp02

0xbbef,	// (0x0007d72e) list_pinb_item_pane_g1_ParamLimits

0xbbef,	// (0x0007d72e) list_pinb_item_pane_g1

0xbbe1,	// (0x0007d720) list_pinb_item_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) list_pinb_item_pane_g2

0xbbd3,	// (0x0007d712) list_pinb_item_pane_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_pinb_item_pane_g3

0xbbe1,	// (0x0007d720) list_pinb_item_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x00080bea) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x00080bea) list_pinb_item_pane_g

0xbbfd,	// (0x0007d73c) list_pinb_item_pane_t1_ParamLimits

0xbbfd,	// (0x0007d73c) list_pinb_item_pane_t1

0x2ab7,	// (0x000745f6) calc_display_pane

0x2ad5,	// (0x00074614) calc_paper_pane

0x2af1,	// (0x00074630) grid_calc_pane

0xb8fd,	// (0x0007d43c) bg_list_pane_cp01

0x2b1d,	// (0x0007465c) clock_g1

0x2b25,	// (0x00074664) clock_g2

0x0001,

0xf0b4,	// (0x00080bf3) clock_g

0x2b2f,	// (0x0007466e) clock_t1_ParamLimits

0x2b2f,	// (0x0007466e) clock_t1

0x2b44,	// (0x00074683) clock_t2_ParamLimits

0x2b44,	// (0x00074683) clock_t2

0x2b56,	// (0x00074695) clock_t3_ParamLimits

0x2b56,	// (0x00074695) clock_t3

0x2b68,	// (0x000746a7) clock_t4_ParamLimits

0x2b68,	// (0x000746a7) clock_t4

0x2b7a,	// (0x000746b9) clock_t5_ParamLimits

0x2b7a,	// (0x000746b9) clock_t5

0x2b8f,	// (0x000746ce) clock_t6_ParamLimits

0x2b8f,	// (0x000746ce) clock_t6

0x2ba1,	// (0x000746e0) clock_t7_ParamLimits

0x2ba1,	// (0x000746e0) clock_t7

0x2bb3,	// (0x000746f2) clock_t8_ParamLimits

0x2bb3,	// (0x000746f2) clock_t8

0x2bc9,	// (0x00074708) clock_t9_ParamLimits

0x2bc9,	// (0x00074708) clock_t9

0x0008,

0xf0b9,	// (0x00080bf8) clock_t_ParamLimits

0xf0b9,	// (0x00080bf8) clock_t

0xbc11,	// (0x0007d750) popup_clock_analogue_window_cp02

0xbc11,	// (0x0007d750) popup_clock_digital_window_cp01

0xb8fd,	// (0x0007d43c) listscroll_help_pane

0xb8fd,	// (0x0007d43c) phob_pre_status_pane

0xbc19,	// (0x0007d758) grid_qdial_pane

0xbb58,	// (0x0007d697) listscroll_mce_pane

0xbb58,	// (0x0007d697) bg_notes_pane

0xbc23,	// (0x0007d762) list_notes_pane

0x2bdf,	// (0x0007471e) scroll_pane_cp06

0xbc31,	// (0x0007d770) bg_calc_paper_pane

0x2bee,	// (0x0007472d) list_calc_pane

0xbc45,	// (0x0007d784) bg_calc_display_pane

0x2c08,	// (0x00074747) calc_display_pane_t1

0x2c1d,	// (0x0007475c) calc_display_pane_t2

0x2c32,	// (0x00074771) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x00080c0b) calc_display_pane_t

0x2c44,	// (0x00074783) cell_calc_pane_ParamLimits

0x2c44,	// (0x00074783) cell_calc_pane

0xbc51,	// (0x0007d790) bg_calc_paper_pane_g1

0xbc5d,	// (0x0007d79c) bg_calc_paper_pane_g2

0xbc69,	// (0x0007d7a8) bg_calc_paper_pane_g3

0xbc75,	// (0x0007d7b4) bg_calc_paper_pane_g4

0xbc81,	// (0x0007d7c0) bg_calc_paper_pane_g5

0x2c71,	// (0x000747b0) bg_calc_paper_pane_g6

0x2c82,	// (0x000747c1) bg_calc_paper_pane_g7

0x2c93,	// (0x000747d2) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x00080c12) bg_calc_paper_pane_g

0x2ca4,	// (0x000747e3) calc_bg_paper_pane_g9

0x2cb5,	// (0x000747f4) list_calc_item_pane_ParamLimits

0x2cb5,	// (0x000747f4) list_calc_item_pane

0xbc8d,	// (0x0007d7cc) list_calc_item_pane_g1

0x2ce1,	// (0x00074820) list_calc_item_pane_t1_ParamLimits

0x2ce1,	// (0x00074820) list_calc_item_pane_t1

0x2cf3,	// (0x00074832) list_calc_item_pane_t2_ParamLimits

0x2cf3,	// (0x00074832) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x00080c23) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x00080c23) list_calc_item_pane_t

0xbb70,	// (0x0007d6af) cell_calc_pane_g1

0xbc9a,	// (0x0007d7d9) grid_highlight_pane_cp02

0x2d23,	// (0x00074862) bg_calc_display_pane_g1

0x2d2c,	// (0x0007486b) bg_calc_display_pane_g2

0x2d36,	// (0x00074875) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00080c2d) bg_calc_display_pane_g

0x2d3f,	// (0x0007487e) cell_qdial_pane_ParamLimits

0x2d3f,	// (0x0007487e) cell_qdial_pane

0x2d53,	// (0x00074892) cell_qdial_pane_g1_ParamLimits

0x2d53,	// (0x00074892) cell_qdial_pane_g1

0x2d60,	// (0x0007489f) cell_qdial_pane_g2_ParamLimits

0x2d60,	// (0x0007489f) cell_qdial_pane_g2

0xbcbc,	// (0x0007d7fb) cell_qdial_pane_g3_ParamLimits

0xbcbc,	// (0x0007d7fb) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00080c34) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00080c34) cell_qdial_pane_g

0x2d7e,	// (0x000748bd) cell_qdial_pane_t1_ParamLimits

0x2d7e,	// (0x000748bd) cell_qdial_pane_t1

0x2d96,	// (0x000748d5) cell_qdial_pane_t2_ParamLimits

0x2d96,	// (0x000748d5) cell_qdial_pane_t2

0x2da9,	// (0x000748e8) cell_qdial_pane_t3_ParamLimits

0x2da9,	// (0x000748e8) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00080c3d) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00080c3d) cell_qdial_pane_t

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp04

0xbcc8,	// (0x0007d807) thumbnail_qdial_pane_ParamLimits

0xbcc8,	// (0x0007d807) thumbnail_qdial_pane

0xbd24,	// (0x0007d863) list_help_pane

0xbd2d,	// (0x0007d86c) scroll_pane_cp02

0x2dbc,	// (0x000748fb) help_list_pane_t1_ParamLimits

0x2dbc,	// (0x000748fb) help_list_pane_t1

0x2df2,	// (0x00074931) bg_notes_pane_g2

0x2dfa,	// (0x00074939) bg_notes_pane_g3

0x2e02,	// (0x00074941) notes_bg_pane_g1

0x2e0a,	// (0x00074949) notes_bg_pane_g4

0x2e12,	// (0x00074951) notes_bg_pane_g5

0x2e1a,	// (0x00074959) notes_bg_pane_g6

0x2e22,	// (0x00074961) notes_bg_pane_g7

0x2e2a,	// (0x00074969) notes_bg_pane_g8

0x2e32,	// (0x00074971) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00080c5b) notes_bg_pane_g

0x2e3a,	// (0x00074979) list_notes_text_pane_ParamLimits

0x2e3a,	// (0x00074979) list_notes_text_pane

0xbd36,	// (0x0007d875) list_notes_text_pane_g1

0x1a81,	// (0x000735c0) list_notes_text_pane_t1

0x2e62,	// (0x000749a1) listscroll_cale_week_pane

0x2e87,	// (0x000749c6) bg_cale_heading_pane

0xbd59,	// (0x0007d898) bg_cale_pane_cp01

0x2ea7,	// (0x000749e6) cale_week_corner_pane

0x2ec1,	// (0x00074a00) cale_week_day_heading_pane

0x2ee1,	// (0x00074a20) cale_week_scroll_pane_g1

0x2efc,	// (0x00074a3b) cale_week_scroll_pane_g2

0x2f0f,	// (0x00074a4e) cale_week_scroll_pane_g3

0x2f22,	// (0x00074a61) cale_week_scroll_pane_g4

0x2f35,	// (0x00074a74) cale_week_scroll_pane_g5

0x2f48,	// (0x00074a87) cale_week_scroll_pane_g6

0x2f5b,	// (0x00074a9a) cale_week_scroll_pane_g7

0x2f70,	// (0x00074aaf) cale_week_scroll_pane_g8

0x2f85,	// (0x00074ac4) cale_week_scroll_pane_g9

0x2f98,	// (0x00074ad7) cale_week_scroll_pane_g10

0x2fab,	// (0x00074aea) cale_week_scroll_pane_g11

0x2fbe,	// (0x00074afd) cale_week_scroll_pane_g12

0x2fd5,	// (0x00074b14) cale_week_scroll_pane_g13

0x2ff0,	// (0x00074b2f) cale_week_scroll_pane_g14

0x300b,	// (0x00074b4a) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00080c6a) cale_week_scroll_pane_g

0x303b,	// (0x00074b7a) cale_week_time_pane

0x3050,	// (0x00074b8f) grid_cale_week_pane

0xbd88,	// (0x0007d8c7) scroll_pane_cp08

0x306f,	// (0x00074bae) cell_cale_week_pane_ParamLimits

0x306f,	// (0x00074bae) cell_cale_week_pane

0x30d1,	// (0x00074c10) cale_week_day_heading_pane_t1

0x30ec,	// (0x00074c2b) cale_week_day_heading_pane_t2

0x3107,	// (0x00074c46) cale_week_day_heading_pane_t3

0x3122,	// (0x00074c61) cale_week_day_heading_pane_t4

0x313d,	// (0x00074c7c) cale_week_day_heading_pane_t5

0x3158,	// (0x00074c97) cale_week_day_heading_pane_t6

0x3173,	// (0x00074cb2) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00080c8b) cale_week_day_heading_pane_t

0xbda5,	// (0x0007d8e4) bg_cale_side_pane

0x318e,	// (0x00074ccd) cale_week_time_pane_t1

0x31a8,	// (0x00074ce7) cale_week_time_pane_t2

0x31c2,	// (0x00074d01) cale_week_time_pane_t3

0x31dc,	// (0x00074d1b) cale_week_time_pane_t4

0x31f6,	// (0x00074d35) cale_week_time_pane_t5

0x3210,	// (0x00074d4f) cale_week_time_pane_t6

0x322e,	// (0x00074d6d) cale_week_time_pane_t7

0x3250,	// (0x00074d8f) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00080c9a) cale_week_time_pane_t

0x3274,	// (0x00074db3) cell_cale_week_pane_g2

0x3298,	// (0x00074dd7) cell_cale_week_pane_g3_ParamLimits

0x3298,	// (0x00074dd7) cell_cale_week_pane_g3

0xbdb3,	// (0x0007d8f2) grid_highlight_pane_cp07

0xbdbb,	// (0x0007d8fa) listscroll_gms_pane

0xbdc5,	// (0x0007d904) grid_gms_pane

0xbdce,	// (0x0007d90d) listscroll_gms_pane_g1

0xbdd6,	// (0x0007d915) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00080cab) listscroll_gms_pane_g

0x32b0,	// (0x00074def) scroll_pane_cp010

0x32bb,	// (0x00074dfa) cell_gms_pane_ParamLimits

0x32bb,	// (0x00074dfa) cell_gms_pane

0x32ce,	// (0x00074e0d) cell_gms_pane_g1

0xbdde,	// (0x0007d91d) cell_gms_pane_g2

0xbd36,	// (0x0007d875) cell_gms_pane_g3

0xbde6,	// (0x0007d925) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00080cb0) cell_gms_pane_g

0xbdef,	// (0x0007d92e) grid_highlight_pane_cp09

0x52f4,	// (0x00076e33) phob_pre_status_pane_g1

0x52fc,	// (0x00076e3b) phob_pre_status_pane_g2

0x5304,	// (0x00076e43) phob_pre_status_pane_g3

0x530c,	// (0x00076e4b) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x00081079) phob_pre_status_pane_g

0x531c,	// (0x00076e5b) phob_pre_status_pane_t1

0x532c,	// (0x00076e6b) phob_pre_status_pane_t2

0x533c,	// (0x00076e7b) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x00081084) phob_pre_status_pane_t

0xbdf7,	// (0x0007d936) bg_list_pane_cp05

0x32de,	// (0x00074e1d) grid_vorec_pane

0x32e8,	// (0x00074e27) vorec_t1

0x32f6,	// (0x00074e35) vorec_t2

0x3304,	// (0x00074e43) vorec_t3

0x3312,	// (0x00074e51) vorec_t4

0x9cbc,	// (0x0007b7fb) vorec_t5

0x9cca,	// (0x0007b809) vorec_t6

0x0004,

0xf17a,	// (0x00080cb9) vorec_t

0x9cd8,	// (0x0007b817) wait_bar_pane_cp01

0x332e,	// (0x00074e6d) cell_vorec_pane_ParamLimits

0x332e,	// (0x00074e6d) cell_vorec_pane

0x3341,	// (0x00074e80) cell_vorec_pane_g1

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp05

0xb4dc,	// (0x0007d01b) cams_zoom_pane

0xb4dc,	// (0x0007d01b) image_vga_pane

0xbbe1,	// (0x0007d720) main_camera_pane_g1

0xbbe1,	// (0x0007d720) main_camera_pane_g2

0xbbe1,	// (0x0007d720) main_camera_pane_g3

0xbbe1,	// (0x0007d720) main_camera_pane_g4

0xbbe1,	// (0x0007d720) main_camera_pane_g5

0xbbe1,	// (0x0007d720) main_camera_pane_g6

0xbbe1,	// (0x0007d720) main_camera_pane_g7

0x0007,

0xf185,	// (0x00080cc4) main_camera_pane_g

0xc35c,	// (0x0007de9b) main_camera_pane_t1

0xc35c,	// (0x0007de9b) main_camera_pane_t2

0x0001,

0xf196,	// (0x00080cd5) main_camera_pane_t

0x334b,	// (0x00074e8a) cams_zoom_pane_cp_ParamLimits

0x334b,	// (0x00074e8a) cams_zoom_pane_cp

0x3379,	// (0x00074eb8) image_cif_pane_ParamLimits

0x3379,	// (0x00074eb8) image_cif_pane

0xb4d2,	// (0x0007d011) image_subqcif_pane

0x3387,	// (0x00074ec6) main_video_pane_g1_ParamLimits

0x3387,	// (0x00074ec6) main_video_pane_g1

0x33af,	// (0x00074eee) main_video_pane_g2_ParamLimits

0x33af,	// (0x00074eee) main_video_pane_g2

0x33e2,	// (0x00074f21) main_video_pane_g3_ParamLimits

0x33e2,	// (0x00074f21) main_video_pane_g3

0x33e2,	// (0x00074f21) main_video_pane_g4_ParamLimits

0x33e2,	// (0x00074f21) main_video_pane_g4

0x3410,	// (0x00074f4f) main_video_pane_g5_ParamLimits

0x3410,	// (0x00074f4f) main_video_pane_g5

0xbdff,	// (0x0007d93e) main_video_pane_g6_ParamLimits

0xbdff,	// (0x0007d93e) main_video_pane_g6

0x0006,

0xf19b,	// (0x00080cda) main_video_pane_g_ParamLimits

0xf19b,	// (0x00080cda) main_video_pane_g

0x342c,	// (0x00074f6b) main_video_pane_t1_ParamLimits

0x342c,	// (0x00074f6b) main_video_pane_t1

0xbe19,	// (0x0007d958) cams_zoom_pane_g1

0xbe19,	// (0x0007d958) cams_zoom_pane_g2

0xbe19,	// (0x0007d958) cams_zoom_pane_g3

0xbe19,	// (0x0007d958) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00080ce9) cams_zoom_pane_g

0x3472,	// (0x00074fb1) grid_cams_pane

0x3480,	// (0x00074fbf) linegrid_cams_pane

0x348e,	// (0x00074fcd) cell_cams_pane_ParamLimits

0x348e,	// (0x00074fcd) cell_cams_pane

0xbe23,	// (0x0007d962) cams_burst_image_pane

0xbe2b,	// (0x0007d96a) cell_cams_pane_g1

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp03

0xbb70,	// (0x0007d6af) mp_bg_pane_g1

0xb4d2,	// (0x0007d011) bg_list_pane_cp03

0xb4d2,	// (0x0007d011) bg_mp_pane

0xb4d2,	// (0x0007d011) grid_mp_pane

0xbe19,	// (0x0007d958) media_player_g1

0xc397,	// (0x0007ded6) media_player_t1

0xc397,	// (0x0007ded6) media_player_t2

0xc397,	// (0x0007ded6) media_player_t3

0xc397,	// (0x0007ded6) media_player_t4

0xc397,	// (0x0007ded6) media_player_t5

0xc397,	// (0x0007ded6) media_player_t6

0xc397,	// (0x0007ded6) media_player_t7

0x0006,

0xf524,	// (0x00081063) media_player_t

0xb4d2,	// (0x0007d011) wait_bar_pane_cp02

0xf509,	// (0x00081048) main_usb_pane_t

0xc603,	// (0x0007e142) cell_mp_pane

0xbb70,	// (0x0007d6af) cell_mp_pane_g1

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp06

0xbe47,	// (0x0007d986) grid_skin_colour_pane

0xbe4f,	// (0x0007d98e) list_highlight_pane_cp03

0x34a1,	// (0x00074fe0) skin_g1

0xbe57,	// (0x0007d996) skin_t1

0xbe66,	// (0x0007d9a5) skin_t2

0x0001,

0xf1d8,	// (0x00080d17) skin_t

0x34ab,	// (0x00074fea) cell_skin_colour_pane_ParamLimits

0x34ab,	// (0x00074fea) cell_skin_colour_pane

0xbe74,	// (0x0007d9b3) cell_skin_colour_pane_g1

0x352f,	// (0x0007506e) call_video_g1_ParamLimits

0x352f,	// (0x0007506e) call_video_g1

0x353f,	// (0x0007507e) call_video_g2_ParamLimits

0x353f,	// (0x0007507e) call_video_g2

0x0001,

0xf1dd,	// (0x00080d1c) call_video_g_ParamLimits

0xf1dd,	// (0x00080d1c) call_video_g

0x3599,	// (0x000750d8) call_video_uplink_pane_cp1_ParamLimits

0x3599,	// (0x000750d8) call_video_uplink_pane_cp1

0xbe86,	// (0x0007d9c5) call_video_uplink_pane_cp2

0x3665,	// (0x000751a4) video_down_crop_pane_ParamLimits

0x3665,	// (0x000751a4) video_down_crop_pane

0x3763,	// (0x000752a2) video_down_pane_ParamLimits

0x3763,	// (0x000752a2) video_down_pane

0xbe8e,	// (0x0007d9cd) video_down_subqcif_pane_ParamLimits

0xbe8e,	// (0x0007d9cd) video_down_subqcif_pane

0xbea6,	// (0x0007d9e5) video_down_subqcif_pane_cp_ParamLimits

0xbea6,	// (0x0007d9e5) video_down_subqcif_pane_cp

0xbecc,	// (0x0007da0b) im_reading_pane_ParamLimits

0xbecc,	// (0x0007da0b) im_reading_pane

0x3883,	// (0x000753c2) im_writing_pane_ParamLimits

0x3883,	// (0x000753c2) im_writing_pane

0x38a1,	// (0x000753e0) im_reading_pane_t1

0xbee6,	// (0x0007da25) list_im_pane

0xbef7,	// (0x0007da36) scroll_pane_cp07

0x38f5,	// (0x00075434) im_writing_pane_t1_ParamLimits

0x38f5,	// (0x00075434) im_writing_pane_t1

0xbf10,	// (0x0007da4f) im_writing_pane_t2_ParamLimits

0xbf10,	// (0x0007da4f) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00080d26) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00080d26) im_writing_pane_t

0xb8fd,	// (0x0007d43c) input_focus_pane_cp04

0xb8fd,	// (0x0007d43c) input_focus_pane_cp05

0x390a,	// (0x00075449) list_im_single_pane_ParamLimits

0x390a,	// (0x00075449) list_im_single_pane

0x392e,	// (0x0007546d) list_single_im_pane_t1

0xbdf7,	// (0x0007d936) blid_accuracy_pane

0xbdf7,	// (0x0007d936) blid_compass_pane

0xe947,	// (0x00080486) main_location_t1

0xe947,	// (0x00080486) main_location_t2

0xe947,	// (0x00080486) main_location_t3

0x0002,

0xf533,	// (0x00081072) main_location_t

0xb8fd,	// (0x0007d43c) aid_levels_location

0xbb70,	// (0x0007d6af) blid_accuracy_pane_g1

0xbb70,	// (0x0007d6af) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x00080d7a) blid_accuracy_pane_g

0xbf58,	// (0x0007da97) wml_content_pane

0xbf96,	// (0x0007dad5) wml_button_pane_ParamLimits

0xbf96,	// (0x0007dad5) wml_button_pane

0x393d,	// (0x0007547c) wml_list_single_large_pane_ParamLimits

0x393d,	// (0x0007547c) wml_list_single_large_pane

0x3967,	// (0x000754a6) wml_list_single_medium_pane_ParamLimits

0x3967,	// (0x000754a6) wml_list_single_medium_pane

0x3998,	// (0x000754d7) wml_list_single_small_pane_ParamLimits

0x3998,	// (0x000754d7) wml_list_single_small_pane

0xbfaa,	// (0x0007dae9) wml_selection_box_pane_ParamLimits

0xbfaa,	// (0x0007dae9) wml_selection_box_pane

0xbfbd,	// (0x0007dafc) wml_list_single_pane_t1

0xbfcc,	// (0x0007db0b) wml_list_single_medium_pane_t1

0xbfdb,	// (0x0007db1a) wml_list_single_large_pane_t1

0xbfea,	// (0x0007db29) input_focus_pane_cp02_ParamLimits

0xbfea,	// (0x0007db29) input_focus_pane_cp02

0xbffd,	// (0x0007db3c) wml_selection_box_pane_g1

0xc006,	// (0x0007db45) wml_selection_box_pane_t1_ParamLimits

0xc006,	// (0x0007db45) wml_selection_box_pane_t1

0xbb58,	// (0x0007d697) bg_wml_button_pane_ParamLimits

0xbb58,	// (0x0007d697) bg_wml_button_pane

0xc01e,	// (0x0007db5d) wml_button_pane_g1

0xc026,	// (0x0007db65) wml_button_pane_t1

0xc01e,	// (0x0007db5d) wml_button_bg_pane_g1

0xc036,	// (0x0007db75) wml_button_bg_pane_g2

0xc03e,	// (0x0007db7d) wml_button_bg_pane_g3

0xc046,	// (0x0007db85) wml_button_bg_pane_g4

0xc04e,	// (0x0007db8d) wml_button_bg_pane_g5

0xc056,	// (0x0007db95) wml_button_bg_pane_g6

0xc05e,	// (0x0007db9d) wml_button_bg_pane_g7

0xc066,	// (0x0007dba5) wml_button_bg_pane_g8

0xc06e,	// (0x0007dbad) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00080d2b) wml_button_bg_pane_g

0x39d2,	// (0x00075511) bg_list_pane_cp02

0xc076,	// (0x0007dbb5) mce_header_pane_ParamLimits

0xc076,	// (0x0007dbb5) mce_header_pane

0xc08c,	// (0x0007dbcb) mce_icon_pane

0xc08c,	// (0x0007dbcb) mce_image_pane

0xc095,	// (0x0007dbd4) mce_text_pane_ParamLimits

0xc095,	// (0x0007dbd4) mce_text_pane

0x39dc,	// (0x0007551b) scroll_pane_cp03

0xbf8e,	// (0x0007dacd) scroll_pane_cp04

0xc0a8,	// (0x0007dbe7) scroll_pane_cp05_ParamLimits

0xc0a8,	// (0x0007dbe7) scroll_pane_cp05

0x39e6,	// (0x00075525) mce_header_field_pane_ParamLimits

0x39e6,	// (0x00075525) mce_header_field_pane

0x3a06,	// (0x00075545) mce_header_field_pane_2_ParamLimits

0x3a06,	// (0x00075545) mce_header_field_pane_2

0x3a1c,	// (0x0007555b) mce_header_field_pane_3

0x3a24,	// (0x00075563) list_single_mce_message_pane_ParamLimits

0x3a24,	// (0x00075563) list_single_mce_message_pane

0x3a4f,	// (0x0007558e) list_single_mce_smart_pane_ParamLimits

0x3a4f,	// (0x0007558e) list_single_mce_smart_pane

0xc0b4,	// (0x0007dbf3) input_focus_pane_cp03

0xc0bd,	// (0x0007dbfc) list_header_data_pane

0x3a85,	// (0x000755c4) mce_header_field_pane_t1

0x3a93,	// (0x000755d2) list_single_mce_header_pane_ParamLimits

0x3a93,	// (0x000755d2) list_single_mce_header_pane

0xc0c5,	// (0x0007dc04) list_single_mce_header_pane_t1

0xc0d4,	// (0x0007dc13) list_single_mce_message_pane_g1

0xc0dc,	// (0x0007dc1b) list_single_mce_message_pane_t1

0x3ae5,	// (0x00075624) bg_cale_heading_pane_cp01_ParamLimits

0x3ae5,	// (0x00075624) bg_cale_heading_pane_cp01

0xc0ea,	// (0x0007dc29) bg_cale_pane_cp02_ParamLimits

0xc0ea,	// (0x0007dc29) bg_cale_pane_cp02

0x3b33,	// (0x00075672) cale_month_corner_pane

0x3b52,	// (0x00075691) cale_month_day_heading_pane_ParamLimits

0x3b52,	// (0x00075691) cale_month_day_heading_pane

0x3bb8,	// (0x000756f7) cale_month_pane_g1_ParamLimits

0x3bb8,	// (0x000756f7) cale_month_pane_g1

0x3bfb,	// (0x0007573a) cale_month_pane_g2_ParamLimits

0x3bfb,	// (0x0007573a) cale_month_pane_g2

0x3c33,	// (0x00075772) cale_month_pane_g3_ParamLimits

0x3c33,	// (0x00075772) cale_month_pane_g3

0x3c7f,	// (0x000757be) cale_month_pane_g4_ParamLimits

0x3c7f,	// (0x000757be) cale_month_pane_g4

0x3ccb,	// (0x0007580a) cale_month_pane_g5_ParamLimits

0x3ccb,	// (0x0007580a) cale_month_pane_g5

0x3d17,	// (0x00075856) cale_month_pane_g6_ParamLimits

0x3d17,	// (0x00075856) cale_month_pane_g6

0x3d63,	// (0x000758a2) cale_month_pane_g7_ParamLimits

0x3d63,	// (0x000758a2) cale_month_pane_g7

0x3dc7,	// (0x00075906) cale_month_pane_g8_ParamLimits

0x3dc7,	// (0x00075906) cale_month_pane_g8

0x3e2b,	// (0x0007596a) cale_month_pane_g9_ParamLimits

0x3e2b,	// (0x0007596a) cale_month_pane_g9

0x3e89,	// (0x000759c8) cale_month_pane_g10_ParamLimits

0x3e89,	// (0x000759c8) cale_month_pane_g10

0x3ee5,	// (0x00075a24) cale_month_pane_g11_ParamLimits

0x3ee5,	// (0x00075a24) cale_month_pane_g11

0x3f39,	// (0x00075a78) cale_month_pane_g12_ParamLimits

0x3f39,	// (0x00075a78) cale_month_pane_g12

0x3f8f,	// (0x00075ace) cale_month_pane_g13_ParamLimits

0x3f8f,	// (0x00075ace) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00080d3e) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00080d3e) cale_month_pane_g

0x3fe5,	// (0x00075b24) cale_month_week_pane

0x4009,	// (0x00075b48) grid_cale_month_pane_ParamLimits

0x4009,	// (0x00075b48) grid_cale_month_pane

0x4062,	// (0x00075ba1) cale_month_day_heading_pane_t1

0x40e8,	// (0x00075c27) cale_month_day_heading_pane_t2

0x4161,	// (0x00075ca0) cale_month_day_heading_pane_t3

0x41da,	// (0x00075d19) cale_month_day_heading_pane_t4

0x4253,	// (0x00075d92) cale_month_day_heading_pane_t5

0x42cc,	// (0x00075e0b) cale_month_day_heading_pane_t6

0x4345,	// (0x00075e84) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00080d59) cale_month_day_heading_pane_t

0xbda5,	// (0x0007d8e4) bg_cale_side_pane_cp01

0x43d6,	// (0x00075f15) cale_month_week_pane_t1

0x43ef,	// (0x00075f2e) cale_month_week_pane_t2

0x4408,	// (0x00075f47) cale_month_week_pane_t3

0x4421,	// (0x00075f60) cale_month_week_pane_t4

0x443a,	// (0x00075f79) cale_month_week_pane_t5

0x445b,	// (0x00075f9a) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00080d68) cale_month_week_pane_t

0x447c,	// (0x00075fbb) cell_cale_month_pane_ParamLimits

0x447c,	// (0x00075fbb) cell_cale_month_pane

0x459e,	// (0x000760dd) cell_cale_month_pane_g1

0x45aa,	// (0x000760e9) cell_cale_month_pane_t1_ParamLimits

0x45aa,	// (0x000760e9) cell_cale_month_pane_t1

0xbdb3,	// (0x0007d8f2) grid_highlight_pane_cp08

0xbb70,	// (0x0007d6af) main_smil_g1

0x45d6,	// (0x00076115) smil_status_pane

0xc129,	// (0x0007dc68) smil_text_pane

0xe85f,	// (0x0008039e) bg_popup_call3_rect_pane_g8

0xe867,	// (0x000803a6) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x00081006) bg_popup_call3_rect_pane_g

0xea10,	// (0x0008054f) smil_status_volume_pane_g1

0xc133,	// (0x0007dc72) smil_status_pane_t1

0x5693,	// (0x000771d2) volume_smil_pane

0xc14a,	// (0x0007dc89) list_smil_text_pane

0x45e9,	// (0x00076128) scroll_pane_cp011

0x45f4,	// (0x00076133) smil_text_list_pane_t1_ParamLimits

0x45f4,	// (0x00076133) smil_text_list_pane_t1

0x466c,	// (0x000761ab) aid_volume_smil_ParamLimits

0x466c,	// (0x000761ab) aid_volume_smil

0xbb70,	// (0x0007d6af) smil_volume_pane_g1

0xbb70,	// (0x0007d6af) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x00080d7a) smil_volume_pane_g

0x2e62,	// (0x000749a1) listscroll_cale_day_pane

0xc154,	// (0x0007dc93) bg_cale_pane

0xc16c,	// (0x0007dcab) list_cale_pane

0xc18f,	// (0x0007dcce) scroll_pane_cp09

0xc1a0,	// (0x0007dcdf) cale_bg_pane_g1

0xc1a8,	// (0x0007dce7) cale_bg_pane_g2

0xc1b0,	// (0x0007dcef) cale_bg_pane_g3

0xc1b8,	// (0x0007dcf7) cale_bg_pane_g4

0xc1c0,	// (0x0007dcff) cale_bg_pane_g5

0xc1c8,	// (0x0007dd07) cale_bg_pane_g6

0xc1d0,	// (0x0007dd0f) cale_bg_pane_g7

0xc1d8,	// (0x0007dd17) cale_bg_pane_g8

0xc1e0,	// (0x0007dd1f) cale_bg_pane_g9

0x0008,

0xf240,	// (0x00080d7f) cale_bg_pane_g

0x468e,	// (0x000761cd) list_cale_time_pane_ParamLimits

0x468e,	// (0x000761cd) list_cale_time_pane

0xc1f0,	// (0x0007dd2f) list_cale_time_pane_g1_ParamLimits

0xc1f0,	// (0x0007dd2f) list_cale_time_pane_g1

0xc1fc,	// (0x0007dd3b) list_cale_time_pane_g2_ParamLimits

0xc1fc,	// (0x0007dd3b) list_cale_time_pane_g2

0x46b0,	// (0x000761ef) list_cale_time_pane_g3_ParamLimits

0x46b0,	// (0x000761ef) list_cale_time_pane_g3

0x46be,	// (0x000761fd) list_cale_time_pane_g4_ParamLimits

0x46be,	// (0x000761fd) list_cale_time_pane_g4

0x46cc,	// (0x0007620b) list_cale_time_pane_g5_ParamLimits

0x46cc,	// (0x0007620b) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x00080d92) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x00080d92) list_cale_time_pane_g

0xc216,	// (0x0007dd55) list_cale_time_pane_t1_ParamLimits

0xc216,	// (0x0007dd55) list_cale_time_pane_t1

0xc23e,	// (0x0007dd7d) list_cale_time_pane_t2_ParamLimits

0xc23e,	// (0x0007dd7d) list_cale_time_pane_t2

0x496f,	// (0x000764ae) aid_blid_cardinal_pane

0x49b1,	// (0x000764f0) compass_pane_t4

0xc266,	// (0x0007dda5) list_cale_time_pane_t4_ParamLimits

0xc266,	// (0x0007dda5) list_cale_time_pane_t4

0x49bf,	// (0x000764fe) compass_pane_t5

0x49cf,	// (0x0007650e) compass_pane_t6

0x49dd,	// (0x0007651c) compass_pane_t7

0xc748,	// (0x0007e287) navi_pane_cc_t1

0xc925,	// (0x0007e464) aid_phob_thumbnail_center_pane

0x4d92,	// (0x000768d1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x00080d9f) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x00080d9f) list_cale_time_pane_t

0xb554,	// (0x0007d093) bg_popup_window_pane_cp02_ParamLimits

0xb554,	// (0x0007d093) bg_popup_window_pane_cp02

0xc28e,	// (0x0007ddcd) heading_pane_cp01_ParamLimits

0xc28e,	// (0x0007ddcd) heading_pane_cp01

0xc29a,	// (0x0007ddd9) loc_req_pane_ParamLimits

0xc29a,	// (0x0007ddd9) loc_req_pane

0xc2aa,	// (0x0007dde9) loc_type_pane_ParamLimits

0xc2aa,	// (0x0007dde9) loc_type_pane

0xc2bc,	// (0x0007ddfb) loc_type_pane_t1_ParamLimits

0xc2bc,	// (0x0007ddfb) loc_type_pane_t1

0xc2ce,	// (0x0007de0d) loc_type_pane_t2_ParamLimits

0xc2ce,	// (0x0007de0d) loc_type_pane_t2

0xc2e0,	// (0x0007de1f) loc_type_pane_t3_ParamLimits

0xc2e0,	// (0x0007de1f) loc_type_pane_t3

0x0002,

0xf267,	// (0x00080da6) loc_type_pane_t_ParamLimits

0xf267,	// (0x00080da6) loc_type_pane_t

0xc2f2,	// (0x0007de31) list_loc_req_pane

0xc2fc,	// (0x0007de3b) scroll_pane_cp012

0x46da,	// (0x00076219) list_single_loc_request_popup_menu_pane_ParamLimits

0x46da,	// (0x00076219) list_single_loc_request_popup_menu_pane

0xc307,	// (0x0007de46) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc307,	// (0x0007de46) list_single_loc_request_popup_menu_pane_g1

0xc313,	// (0x0007de52) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc313,	// (0x0007de52) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x00080dad) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x00080dad) list_single_loc_request_popup_menu_pane_g

0xc31f,	// (0x0007de5e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc31f,	// (0x0007de5e) list_single_loc_request_popup_menu_pane_t1

0x46ec,	// (0x0007622b) bg_popup_window_pane_cp03_ParamLimits

0x46ec,	// (0x0007622b) bg_popup_window_pane_cp03

0x46fa,	// (0x00076239) heading_loc_req_pane_ParamLimits

0x46fa,	// (0x00076239) heading_loc_req_pane

0x4706,	// (0x00076245) popup_dyc_status_message_window_g1_ParamLimits

0x4706,	// (0x00076245) popup_dyc_status_message_window_g1

0x4712,	// (0x00076251) popup_dyc_status_message_window_t1_ParamLimits

0x4712,	// (0x00076251) popup_dyc_status_message_window_t1

0x4724,	// (0x00076263) popup_dyc_status_message_window_t2_ParamLimits

0x4724,	// (0x00076263) popup_dyc_status_message_window_t2

0x4736,	// (0x00076275) popup_dyc_status_message_window_t3_ParamLimits

0x4736,	// (0x00076275) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x00080db2) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x00080db2) popup_dyc_status_message_window_t

0xb8fd,	// (0x0007d43c) bg_heading_pane_cp01

0xc370,	// (0x0007deaf) heading_loc_req_pane_g1

0xc378,	// (0x0007deb7) heading_loc_req_pane_g2

0xc380,	// (0x0007debf) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x00080db9) heading_loc_req_pane_g

0xc388,	// (0x0007dec7) heading_loc_req_pane_t1

0xc3a7,	// (0x0007dee6) bg_popup_sub_pane_cp01_ParamLimits

0xc3a7,	// (0x0007dee6) bg_popup_sub_pane_cp01

0xc3b5,	// (0x0007def4) popup_cale_events_window_g1_ParamLimits

0xc3b5,	// (0x0007def4) popup_cale_events_window_g1

0xc3d5,	// (0x0007df14) popup_cale_events_window_g2_ParamLimits

0xc3d5,	// (0x0007df14) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x00080ddb) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x00080ddb) popup_cale_events_window_g

0xc3f5,	// (0x0007df34) popup_cale_events_window_t1_ParamLimits

0xc3f5,	// (0x0007df34) popup_cale_events_window_t1

0xc407,	// (0x0007df46) popup_cale_events_window_t2_ParamLimits

0xc407,	// (0x0007df46) popup_cale_events_window_t2

0xc445,	// (0x0007df84) popup_cale_events_window_t3_ParamLimits

0xc445,	// (0x0007df84) popup_cale_events_window_t3

0xc47f,	// (0x0007dfbe) popup_cale_events_window_t4_ParamLimits

0xc47f,	// (0x0007dfbe) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x00080de0) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x00080de0) popup_cale_events_window_t

0x4760,	// (0x0007629f) call_type_pane

0xe012,	// (0x0007fb51) popup_call_status_window_g1

0x476c,	// (0x000762ab) popup_call_status_window_g2

0x4778,	// (0x000762b7) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x00080de9) popup_call_status_window_g

0xc4b5,	// (0x0007dff4) call_type_pane_g1

0xc4be,	// (0x0007dffd) call_type_pane_g2

0x0001,

0xf2b1,	// (0x00080df0) call_type_pane_g

0xb8fd,	// (0x0007d43c) bg_popup_sub_pane_cp02

0xc4c7,	// (0x0007e006) listscroll_popup_wml_pane

0xc4cf,	// (0x0007e00e) list_wml_pane

0xc4d9,	// (0x0007e018) scroll_pane_cp013

0xc4e4,	// (0x0007e023) list_single_graphic_popup_wml_pane_ParamLimits

0xc4e4,	// (0x0007e023) list_single_graphic_popup_wml_pane

0xbb70,	// (0x0007d6af) list_single_graphic_popup_wml_pane_g1

0xc4f8,	// (0x0007e037) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x00080df5) list_single_graphic_popup_wml_pane_g

0xc500,	// (0x0007e03f) list_single_graphic_popup_wml_pane_t1

0xc516,	// (0x0007e055) aid_call_pane

0xbb50,	// (0x0007d68f) popup_clock_analogue_window_g1

0xbb50,	// (0x0007d68f) popup_clock_analogue_window_g2

0x4784,	// (0x000762c3) popup_clock_analogue_window_g3

0x4784,	// (0x000762c3) popup_clock_analogue_window_g4

0xbb70,	// (0x0007d6af) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x00080dfa) popup_clock_analogue_window_g

0x478c,	// (0x000762cb) popup_clock_analogue_window_t1

0x479a,	// (0x000762d9) clock_digital_number_pane_ParamLimits

0x479a,	// (0x000762d9) clock_digital_number_pane

0x47a6,	// (0x000762e5) clock_digital_number_pane_cp02_ParamLimits

0x47a6,	// (0x000762e5) clock_digital_number_pane_cp02

0x47b2,	// (0x000762f1) clock_digital_number_pane_cp03_ParamLimits

0x47b2,	// (0x000762f1) clock_digital_number_pane_cp03

0x47be,	// (0x000762fd) clock_digital_number_pane_cp04_ParamLimits

0x47be,	// (0x000762fd) clock_digital_number_pane_cp04

0x47ce,	// (0x0007630d) clock_digital_separator_pane_ParamLimits

0x47ce,	// (0x0007630d) clock_digital_separator_pane

0x47da,	// (0x00076319) popup_clock_digital_window_t1

0xbb70,	// (0x0007d6af) clock_digital_number_pane_g1

0xbb70,	// (0x0007d6af) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x00080d7a) clock_digital_number_pane_g

0xbb70,	// (0x0007d6af) clock_digital_separator_pane_g1

0xbb70,	// (0x0007d6af) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x00080d7a) clock_digital_separator_pane_g

0xb8fd,	// (0x0007d43c) bg_popup_window_pane_cp04

0xc51e,	// (0x0007e05d) heading_pane_cp03

0xbdf7,	// (0x0007d936) listscroll_popup_gms_pane

0xb8fd,	// (0x0007d43c) grid_large_graphic_popup_pane

0xc527,	// (0x0007e066) listscroll_popup_gms_pane_g1

0xc530,	// (0x0007e06f) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x00080e05) listscroll_popup_gms_pane_g

0xc539,	// (0x0007e078) scroll_pane_cp014

0xb4dc,	// (0x0007d01b) cell_large_graphic_popup_pane_ParamLimits

0xb4dc,	// (0x0007d01b) cell_large_graphic_popup_pane

0xbbd3,	// (0x0007d712) cell_large_graphic_popup_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) cell_large_graphic_popup_pane_g1

0xc542,	// (0x0007e081) cell_large_graphic_popup_pane_g2_ParamLimits

0xc542,	// (0x0007e081) cell_large_graphic_popup_pane_g2

0xc550,	// (0x0007e08f) cell_large_graphic_popup_pane_g3_ParamLimits

0xc550,	// (0x0007e08f) cell_large_graphic_popup_pane_g3

0xc55e,	// (0x0007e09d) cell_large_graphic_popup_pane_g4_ParamLimits

0xc55e,	// (0x0007e09d) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x00080e0a) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x00080e0a) cell_large_graphic_popup_pane_g

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp010

0xbb70,	// (0x0007d6af) bg_popup_call_pane_g1

0xc56f,	// (0x0007e0ae) list_single_graphic_popup_conf_pane_ParamLimits

0xc56f,	// (0x0007e0ae) list_single_graphic_popup_conf_pane

0xc582,	// (0x0007e0c1) list_highlight_pane_cp01

0xc58b,	// (0x0007e0ca) list_single_graphic_popup_conf_pane_g1

0xc593,	// (0x0007e0d2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x00080e13) list_single_graphic_popup_conf_pane_g

0xc59b,	// (0x0007e0da) list_single_graphic_popup_conf_pane_t1

0xc5a9,	// (0x0007e0e8) linegrid_cams_pane_g1

0x47f7,	// (0x00076336) linegrid_cams_pane_g2

0xbd36,	// (0x0007d875) linegrid_cams_pane_g3

0xc5b2,	// (0x0007e0f1) linegrid_cams_pane_g4

0x4800,	// (0x0007633f) linegrid_cams_pane_g5

0x4809,	// (0x00076348) linegrid_cams_pane_g6

0xbde6,	// (0x0007d925) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x00080e18) linegrid_cams_pane_g

0xc5bb,	// (0x0007e0fa) popup_clock_analogue_window

0xc5bb,	// (0x0007e0fa) popup_clock_digital_window

0xb8fd,	// (0x0007d43c) popup_phob_thumbnail_window

0xbb70,	// (0x0007d6af) call_video_uplink_pane_g1

0xc5c4,	// (0x0007e103) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x00080e27) call_video_uplink_pane_g

0xc5cc,	// (0x0007e10b) video_uplink_pane

0xc5d4,	// (0x0007e113) mce_image_pane_g1

0x4812,	// (0x00076351) mce_image_pane_g2

0x481c,	// (0x0007635b) mce_image_pane_g3

0x4824,	// (0x00076363) mce_image_pane_g4

0x482c,	// (0x0007636b) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x00080e2c) mce_image_pane_g

0xc5de,	// (0x0007e11d) control_top_pane_stacon_cp01_ParamLimits

0xc5de,	// (0x0007e11d) control_top_pane_stacon_cp01

0xc5f2,	// (0x0007e131) uni_indicator_pane_stacon_cp01_ParamLimits

0xc5f2,	// (0x0007e131) uni_indicator_pane_stacon_cp01

0xc603,	// (0x0007e142) bg_popup_sub_pane_cp03

0xc60d,	// (0x0007e14c) chi_dic_find_pane

0x4834,	// (0x00076373) listscroll_chi_dic_pane

0xc615,	// (0x0007e154) main_pane_chidic_g1

0xc61d,	// (0x0007e15c) chi_dic_find_pane_t1

0xc62b,	// (0x0007e16a) find_chidic_pane

0xc634,	// (0x0007e173) chi_dic_list_pane_ParamLimits

0xc634,	// (0x0007e173) chi_dic_list_pane

0xc645,	// (0x0007e184) scroll_pane_cp020

0xc64d,	// (0x0007e18c) find_chidic_pane_t1

0xb8fd,	// (0x0007d43c) input_focus_pane_cp06

0x4848,	// (0x00076387) list_chi_dic_pane_ParamLimits

0x4848,	// (0x00076387) list_chi_dic_pane

0x4862,	// (0x000763a1) list_chi_dic_pane_t1_ParamLimits

0x4862,	// (0x000763a1) list_chi_dic_pane_t1

0xb8fd,	// (0x0007d43c) list_highlight_pane_cp020

0xc65c,	// (0x0007e19b) bg_cale_heading_pane_g1

0x4875,	// (0x000763b4) bg_cale_heading_pane_g2

0x487d,	// (0x000763bc) bg_cale_heading_pane_g3

0x4885,	// (0x000763c4) bg_cale_heading_pane_g4

0x488f,	// (0x000763ce) bg_cale_heading_pane_g5

0x4899,	// (0x000763d8) bg_cale_heading_pane_g6

0x48a1,	// (0x000763e0) bg_cale_heading_pane_g7

0x48a9,	// (0x000763e8) bg_cale_heading_pane_g8

0x48b3,	// (0x000763f2) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x00080e37) bg_cale_heading_pane_g

0xc65c,	// (0x0007e19b) bg_cale_side_pane_g1

0x48bd,	// (0x000763fc) bg_cale_side_pane_g2

0x48c7,	// (0x00076406) bg_cale_side_pane_g3

0x48d1,	// (0x00076410) bg_cale_side_pane_g4

0x48db,	// (0x0007641a) bg_cale_side_pane_g5

0x48e5,	// (0x00076424) bg_cale_side_pane_g6

0x48ef,	// (0x0007642e) bg_cale_side_pane_g7

0x48f9,	// (0x00076438) bg_cale_side_pane_g8

0x4901,	// (0x00076440) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x00080e4a) bg_cale_side_pane_g

0x4909,	// (0x00076448) popup_call_status_window_ParamLimits

0x4909,	// (0x00076448) popup_call_status_window

0xc664,	// (0x0007e1a3) stacon_top_pane

0xc66c,	// (0x0007e1ab) status_pane_ParamLimits

0xc66c,	// (0x0007e1ab) status_pane

0xc681,	// (0x0007e1c0) status_small_pane

0xc689,	// (0x0007e1c8) control_pane

0xb8fd,	// (0x0007d43c) stacon_bottom_pane

0xc691,	// (0x0007e1d0) list_single_mce_smart_pane_t1_ParamLimits

0xc691,	// (0x0007e1d0) list_single_mce_smart_pane_t1

0xc6a4,	// (0x0007e1e3) list_single_mce_smart_pane_t2_ParamLimits

0xc6a4,	// (0x0007e1e3) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x00080e5d) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x00080e5d) list_single_mce_smart_pane_t

0x4915,	// (0x00076454) compass_pane

0x4921,	// (0x00076460) main_location2_pane_t1

0x4935,	// (0x00076474) main_location2_pane_t2

0x4949,	// (0x00076488) main_location2_pane_t3

0x0003,

0xf323,	// (0x00080e62) main_location2_pane_t

0xc6c3,	// (0x0007e202) compass_pane_g1_ParamLimits

0xc6c3,	// (0x0007e202) compass_pane_g1

0x4993,	// (0x000764d2) compass_pane_t1

0x49a2,	// (0x000764e1) compass_pane_t2

0x0005,

0xf32c,	// (0x00080e6b) compass_pane_t

0x49ed,	// (0x0007652c) text_secondary_cp61

0xc73f,	// (0x0007e27e) navi_pane_cams_g5

0xc7bb,	// (0x0007e2fa) navi_pane_im_t1

0xc7c9,	// (0x0007e308) navi_pane_mp_g1_ParamLimits

0xc7c9,	// (0x0007e308) navi_pane_mp_g1

0xc7dd,	// (0x0007e31c) navi_pane_mp_g2_ParamLimits

0xc7dd,	// (0x0007e31c) navi_pane_mp_g2

0xc7e9,	// (0x0007e328) navi_pane_mp_g3_ParamLimits

0xc7e9,	// (0x0007e328) navi_pane_mp_g3

0x0002,

0xf340,	// (0x00080e7f) navi_pane_mp_g_ParamLimits

0xf340,	// (0x00080e7f) navi_pane_mp_g

0xc7f5,	// (0x0007e334) navi_pane_mp_t1

0xc803,	// (0x0007e342) navi_pane_mp_t2

0x0002,

0xf347,	// (0x00080e86) navi_pane_mp_t

0xc86e,	// (0x0007e3ad) navi_pane_vt_g1

0xc7f5,	// (0x0007e334) navi_pane_vt_t1

0xc876,	// (0x0007e3b5) navi_slider_pane

0xbdf7,	// (0x0007d936) zooming_pane

0xc886,	// (0x0007e3c5) navi_slider_pane_g1

0x4a28,	// (0x00076567) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x00080e8d) navi_slider_pane_g

0xc8aa,	// (0x0007e3e9) aid_levels_zoom

0xc8b2,	// (0x0007e3f1) zooming_pane_g1

0xc8ba,	// (0x0007e3f9) zooming_pane_g2

0xc8ba,	// (0x0007e3f9) zooming_pane_g3

0x0002,

0xf35d,	// (0x00080e9c) zooming_pane_g

0xc8c2,	// (0x0007e401) level_10_zoom

0xc8cb,	// (0x0007e40a) level_11_zoom

0xc8d4,	// (0x0007e413) level_1_zoom

0xc8dd,	// (0x0007e41c) level_2_zoom

0xc8e6,	// (0x0007e425) level_3_zoom

0xc8ef,	// (0x0007e42e) level_4_zoom

0xc8f8,	// (0x0007e437) level_5_zoom

0xc901,	// (0x0007e440) level_6_zoom

0xc90a,	// (0x0007e449) level_7_zoom

0xc913,	// (0x0007e452) level_8_zoom

0xc91c,	// (0x0007e45b) level_9_zoom

0xc92d,	// (0x0007e46c) popup_phob_thumbnail_window_g1

0xc935,	// (0x0007e474) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x00080ea3) popup_phob_thumbnail_window_g

0x534c,	// (0x00076e8b) level_1_location

0x5354,	// (0x00076e93) level_2_location

0x535c,	// (0x00076e9b) level_3_location

0x5366,	// (0x00076ea5) level_4_location

0xbdf7,	// (0x0007d936) level_5_location

0x4a3a,	// (0x00076579) mce_icon_pane_g1

0x4a42,	// (0x00076581) mce_icon_pane_g2

0x0001,

0xf369,	// (0x00080ea8) mce_icon_pane_g

0x4a4a,	// (0x00076589) main_mup_pane_g1_ParamLimits

0x4a4a,	// (0x00076589) main_mup_pane_g1

0xbbef,	// (0x0007d72e) main_mup_pane_g2_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g2

0xbbef,	// (0x0007d72e) main_mup_pane_g3_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g3

0xbbef,	// (0x0007d72e) main_mup_pane_g4_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g4

0xbbef,	// (0x0007d72e) main_mup_pane_g5_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g5

0xbbef,	// (0x0007d72e) main_mup_pane_g6_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g6

0xbbef,	// (0x0007d72e) main_mup_pane_g7_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g7

0xbbef,	// (0x0007d72e) main_mup_pane_g8_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g8

0xbbef,	// (0x0007d72e) main_mup_pane_g9_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g9

0xbbef,	// (0x0007d72e) main_mup_pane_g10_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g10

0xbbef,	// (0x0007d72e) main_mup_pane_g11_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g11

0xbbe1,	// (0x0007d720) main_mup_pane_g12_ParamLimits

0xbbe1,	// (0x0007d720) main_mup_pane_g12

0xbbef,	// (0x0007d72e) main_mup_pane_g13_ParamLimits

0xbbef,	// (0x0007d72e) main_mup_pane_g13

0x000c,

0xf36e,	// (0x00080ead) main_mup_pane_g_ParamLimits

0xf36e,	// (0x00080ead) main_mup_pane_g

0xbbfd,	// (0x0007d73c) main_mup_pane_t1_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup_pane_t1

0xbbfd,	// (0x0007d73c) main_mup_pane_t2_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup_pane_t2

0xbbfd,	// (0x0007d73c) main_mup_pane_t3_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup_pane_t3

0xc35c,	// (0x0007de9b) main_mup_pane_t4_ParamLimits

0xc35c,	// (0x0007de9b) main_mup_pane_t4

0xc35c,	// (0x0007de9b) main_mup_pane_t5_ParamLimits

0xc35c,	// (0x0007de9b) main_mup_pane_t5

0xbe33,	// (0x0007d972) main_mup_pane_t6_ParamLimits

0xbe33,	// (0x0007d972) main_mup_pane_t6

0x0005,

0xf389,	// (0x00080ec8) main_mup_pane_t_ParamLimits

0xf389,	// (0x00080ec8) main_mup_pane_t

0xbb7a,	// (0x0007d6b9) mup_progress_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) mup_progress_pane

0xe2e4,	// (0x0007fe23) mup_visualizer_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup_visualizer_pane

0xe2e4,	// (0x0007fe23) mup_volume_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup_volume_pane

0xbbe1,	// (0x0007d720) mup_visualizer_pane_g1_ParamLimits

0xbbe1,	// (0x0007d720) mup_visualizer_pane_g1

0xc93d,	// (0x0007e47c) mup_visualizer_pane_g2_ParamLimits

0xc93d,	// (0x0007e47c) mup_visualizer_pane_g2

0xbbd3,	// (0x0007d712) mup_visualizer_pane_g3_ParamLimits

0xbbd3,	// (0x0007d712) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x00080ed5) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x00080ed5) mup_visualizer_pane_g

0xbe19,	// (0x0007d958) mup_volume_pane_g1

0xbe19,	// (0x0007d958) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x00080edc) mup_volume_pane_g

0xbe19,	// (0x0007d958) mup_progress_pane_g1

0xbe19,	// (0x0007d958) mup_progress_pane_g2

0xbe19,	// (0x0007d958) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x00080ee1) mup_progress_pane_g

0xb8fd,	// (0x0007d43c) bg_popup_window_pane_cp05

0xc94b,	// (0x0007e48a) heading_pane_cp02_ParamLimits

0xc94b,	// (0x0007e48a) heading_pane_cp02

0xc965,	// (0x0007e4a4) list_popup_blid_pane

0xc96d,	// (0x0007e4ac) list_blid_sat_info_pane_ParamLimits

0xc96d,	// (0x0007e4ac) list_blid_sat_info_pane

0xc980,	// (0x0007e4bf) list_blid_sat_info_pane_g1

0xc988,	// (0x0007e4c7) list_blid_sat_info_pane_t1

0x4b47,	// (0x00076686) mup_equalizer_pane_ParamLimits

0x4b47,	// (0x00076686) mup_equalizer_pane

0x4b68,	// (0x000766a7) mup_equalizer_pane_cp1_ParamLimits

0x4b68,	// (0x000766a7) mup_equalizer_pane_cp1

0x4b89,	// (0x000766c8) mup_equalizer_pane_cp2_ParamLimits

0x4b89,	// (0x000766c8) mup_equalizer_pane_cp2

0x4baa,	// (0x000766e9) mup_equalizer_pane_cp3_ParamLimits

0x4baa,	// (0x000766e9) mup_equalizer_pane_cp3

0x4bcb,	// (0x0007670a) mup_equalizer_pane_cp4_ParamLimits

0x4bcb,	// (0x0007670a) mup_equalizer_pane_cp4

0x4bec,	// (0x0007672b) mup_equalizer_pane_cp5

0x4c02,	// (0x00076741) mup_equalizer_pane_cp6

0x4c1a,	// (0x00076759) mup_equalizer_pane_cp7

0xe8df,	// (0x0008041e) bg_popup_call_poc_act_pane_g9

0xe8e7,	// (0x00080426) bg_popup_call_poc_act_pane_g10

0xe8ef,	// (0x0008042e) bg_popup_call_poc_act_pane_g11

0x000a,

0xbb58,	// (0x0007d697) mup_scale_pane

0xbb70,	// (0x0007d6af) mup_scale_pane_g1

0xc9d2,	// (0x0007e511) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x00080efd) mup_scale_pane_g

0xc9f6,	// (0x0007e535) msg_data_pane

0xc9fe,	// (0x0007e53d) scroll_pane_cp017

0x1a8f,	// (0x000735ce) bg_list_pane_cp04_ParamLimits

0x1a8f,	// (0x000735ce) bg_list_pane_cp04

0xca06,	// (0x0007e545) msg_data_pane_g1

0x4c44,	// (0x00076783) msg_data_pane_g2

0x4c4e,	// (0x0007678d) msg_data_pane_g3

0x4c56,	// (0x00076795) msg_data_pane_g4

0x4c5e,	// (0x0007679d) msg_data_pane_g5

0x4c66,	// (0x000767a5) msg_data_pane_g6

0x4c6e,	// (0x000767ad) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x00080f0c) msg_data_pane_g

0x1ab5,	// (0x000735f4) msg_text_pane_ParamLimits

0x1ab5,	// (0x000735f4) msg_text_pane

0x4c76,	// (0x000767b5) qrid_highlight_pane_cp011_ParamLimits

0x4c76,	// (0x000767b5) qrid_highlight_pane_cp011

0xb8fd,	// (0x0007d43c) msg_body_pane

0xb8fd,	// (0x0007d43c) msg_header_pane

0xca17,	// (0x0007e556) input_focus_pane_cp07

0x1b04,	// (0x00073643) msg_header_pane_t1_ParamLimits

0x1b04,	// (0x00073643) msg_header_pane_t1

0x1b1a,	// (0x00073659) msg_header_pane_t2_ParamLimits

0x1b1a,	// (0x00073659) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x00080f20) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x00080f20) msg_header_pane_t

0xca2c,	// (0x0007e56b) msg_body_pane_g1

0x1b31,	// (0x00073670) msg_body_pane_t1_ParamLimits

0x1b31,	// (0x00073670) msg_body_pane_t1

0x1b62,	// (0x000736a1) msg_body_pane_t2_ParamLimits

0x1b62,	// (0x000736a1) msg_body_pane_t2

0x1b74,	// (0x000736b3) msg_body_pane_t3_ParamLimits

0x1b74,	// (0x000736b3) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x00080f25) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x00080f25) msg_body_pane_t

0x4ce2,	// (0x00076821) main_viewer_pane_g1_ParamLimits

0x4ce2,	// (0x00076821) main_viewer_pane_g1

0x4cee,	// (0x0007682d) main_viewer_pane_g2_ParamLimits

0x4cee,	// (0x0007682d) main_viewer_pane_g2

0x4cfa,	// (0x00076839) main_viewer_pane_g3_ParamLimits

0x4cfa,	// (0x00076839) main_viewer_pane_g3

0x4d0b,	// (0x0007684a) main_viewer_pane_g4_ParamLimits

0x4d0b,	// (0x0007684a) main_viewer_pane_g4

0x4d1c,	// (0x0007685b) main_viewer_pane_g5_ParamLimits

0x4d1c,	// (0x0007685b) main_viewer_pane_g5

0x4d1c,	// (0x0007685b) main_viewer_pane_g7_ParamLimits

0x4d1c,	// (0x0007685b) main_viewer_pane_g7

0x4d2e,	// (0x0007686d) main_viewer_pane_g8_ParamLimits

0x4d2e,	// (0x0007686d) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x00080f35) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x00080f35) main_viewer_pane_g

0xd7e3,	// (0x0007f322) viewer_content_pane_ParamLimits

0xd7e3,	// (0x0007f322) viewer_content_pane

0x4d66,	// (0x000768a5) main_postcard_pane_g1_ParamLimits

0x4d66,	// (0x000768a5) main_postcard_pane_g1

0x4d74,	// (0x000768b3) main_postcard_pane_g2_ParamLimits

0x4d74,	// (0x000768b3) main_postcard_pane_g2

0x4d82,	// (0x000768c1) main_postcard_pane_g3_ParamLimits

0x4d82,	// (0x000768c1) main_postcard_pane_g3

0x0005,

0xf407,	// (0x00080f46) main_postcard_pane_g_ParamLimits

0xf407,	// (0x00080f46) main_postcard_pane_g

0x4d92,	// (0x000768d1) main_postcard_pane_g4

0xea23,	// (0x00080562) smil_status_volume_pane_g2

0x4dbe,	// (0x000768fd) postcard_pane_ParamLimits

0x4dbe,	// (0x000768fd) postcard_pane

0xe012,	// (0x0007fb51) postcard_pane_g1_ParamLimits

0xe012,	// (0x0007fb51) postcard_pane_g1

0x4df0,	// (0x0007692f) postcard_pane_g2_ParamLimits

0x4df0,	// (0x0007692f) postcard_pane_g2

0x4dfc,	// (0x0007693b) postcard_pane_g3_ParamLimits

0x4dfc,	// (0x0007693b) postcard_pane_g3

0xd7f1,	// (0x0007f330) postcard_pane_g4_ParamLimits

0xd7f1,	// (0x0007f330) postcard_pane_g4

0x4e08,	// (0x00076947) postcard_pane_g5_ParamLimits

0x4e08,	// (0x00076947) postcard_pane_g5

0x4e14,	// (0x00076953) postcard_pane_g6_ParamLimits

0x4e14,	// (0x00076953) postcard_pane_g6

0xd7ff,	// (0x0007f33e) postcard_pane_g7_ParamLimits

0xd7ff,	// (0x0007f33e) postcard_pane_g7

0x0006,

0xf414,	// (0x00080f53) postcard_pane_g_ParamLimits

0xf414,	// (0x00080f53) postcard_pane_g

0x4e20,	// (0x0007695f) main_mp2_pane_g1_ParamLimits

0x4e20,	// (0x0007695f) main_mp2_pane_g1

0x4e2c,	// (0x0007696b) main_mp2_pane_g2_ParamLimits

0x4e2c,	// (0x0007696b) main_mp2_pane_g2

0x4e38,	// (0x00076977) main_mp2_pane_g3_ParamLimits

0x4e38,	// (0x00076977) main_mp2_pane_g3

0x0002,

0xf423,	// (0x00080f62) main_mp2_pane_g_ParamLimits

0xf423,	// (0x00080f62) main_mp2_pane_g

0x4e44,	// (0x00076983) main_mp2_pane_t1_ParamLimits

0x4e44,	// (0x00076983) main_mp2_pane_t1

0x4e5b,	// (0x0007699a) main_mp2_pane_t2_ParamLimits

0x4e5b,	// (0x0007699a) main_mp2_pane_t2

0x4e6f,	// (0x000769ae) main_mp2_pane_t3_ParamLimits

0x4e6f,	// (0x000769ae) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x00080f69) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x00080f69) main_mp2_pane_t

0xd80d,	// (0x0007f34c) pec_content_pane_ParamLimits

0xd80d,	// (0x0007f34c) pec_content_pane

0xbf8e,	// (0x0007dacd) scroll_pane_cp015

0xd81f,	// (0x0007f35e) pec_attribute_pane_ParamLimits

0xd81f,	// (0x0007f35e) pec_attribute_pane

0x4e81,	// (0x000769c0) pec_content_pane_g1_ParamLimits

0x4e81,	// (0x000769c0) pec_content_pane_g1

0xd82f,	// (0x0007f36e) pec_content_pane_t1_ParamLimits

0xd82f,	// (0x0007f36e) pec_content_pane_t1

0xd857,	// (0x0007f396) pec_content_pane_t2_ParamLimits

0xd857,	// (0x0007f396) pec_content_pane_t2

0x0001,

0xf431,	// (0x00080f70) pec_content_pane_t_ParamLimits

0xf431,	// (0x00080f70) pec_content_pane_t

0x4e8d,	// (0x000769cc) list_single_graphic_pane_cp01_ParamLimits

0x4e8d,	// (0x000769cc) list_single_graphic_pane_cp01

0xbb58,	// (0x0007d697) bg_popup_sub_pane_cp04

0xd869,	// (0x0007f3a8) popup_mup_playback_window_g1

0xd875,	// (0x0007f3b4) popup_mup_playback_window_t1

0xd88a,	// (0x0007f3c9) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x00080f75) popup_mup_playback_window_t

0xd8c1,	// (0x0007f400) main_image_pane_g1_ParamLimits

0xd8c1,	// (0x0007f400) main_image_pane_g1

0xd904,	// (0x0007f443) scroll_pane_cp018_ParamLimits

0xd904,	// (0x0007f443) scroll_pane_cp018

0xd91c,	// (0x0007f45b) scroll_pane_cp016_ParamLimits

0xd91c,	// (0x0007f45b) scroll_pane_cp016

0x4f26,	// (0x00076a65) smil2_image_pane_ParamLimits

0x4f26,	// (0x00076a65) smil2_image_pane

0x4f56,	// (0x00076a95) smil2_root_pane_ParamLimits

0x4f56,	// (0x00076a95) smil2_root_pane

0x4f82,	// (0x00076ac1) smil2_text_pane_ParamLimits

0x4f82,	// (0x00076ac1) smil2_text_pane

0xb8fd,	// (0x0007d43c) bg_list_pane_cp06

0xd958,	// (0x0007f497) grid_radio_pane

0xb8fd,	// (0x0007d43c) bg_popup_window_pane_cp06

0xd960,	// (0x0007f49f) main_fmradio_pane_t1

0xe8f7,	// (0x00080436) heading_pane_cp04

0xd96e,	// (0x0007f4ad) main_fmradio_pane_t2

0xe8ff,	// (0x0008043e) popup_cale_lunar_info_window_g1

0xd97c,	// (0x0007f4bb) main_fmradio_pane_t3

0xe907,	// (0x00080446) popup_cale_lunar_info_window_g2

0xd98a,	// (0x0007f4c9) main_fmradio_pane_t4

0x0001,

0xd998,	// (0x0007f4d7) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x00081055) popup_cale_lunar_info_window_g

0xf44b,	// (0x00080f8a) main_fmradio_pane_t

0xd9a6,	// (0x0007f4e5) wait_bar_pane_cp03

0xd9ae,	// (0x0007f4ed) cell_fmradio_pane_ParamLimits

0xd9ae,	// (0x0007f4ed) cell_fmradio_pane

0xd7ff,	// (0x0007f33e) cell_fmradio_pane_g1_ParamLimits

0xd7ff,	// (0x0007f33e) cell_fmradio_pane_g1

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp011

0xd9c1,	// (0x0007f500) poc_content_pane_ParamLimits

0xd9c1,	// (0x0007f500) poc_content_pane

0xd9d3,	// (0x0007f512) scroll_pane_cp019

0x4fc2,	// (0x00076b01) popup_call_poc_act_window_ParamLimits

0x4fc2,	// (0x00076b01) popup_call_poc_act_window

0x4fcf,	// (0x00076b0e) popup_call_poc_inact_window_ParamLimits

0x4fcf,	// (0x00076b0e) popup_call_poc_inact_window

0xf4ed,	// (0x0008102c) bg_popup_call_poc_act_pane_g

0xe86f,	// (0x000803ae) bg_popup_call_poc_inact_pane_g1

0xe877,	// (0x000803b6) bg_popup_call_poc_inact_pane_g2

0xd9db,	// (0x0007f51a) popup_call_poc_act_window_g2

0xe87f,	// (0x000803be) bg_popup_call_poc_inact_pane_g3

0xe887,	// (0x000803c6) bg_popup_call_poc_inact_pane_g4

0xe88f,	// (0x000803ce) bg_popup_call_poc_inact_pane_g5

0xd9e3,	// (0x0007f522) popup_call_poc_act_window_t1_ParamLimits

0xd9e3,	// (0x0007f522) popup_call_poc_act_window_t1

0xda0b,	// (0x0007f54a) popup_call_poc_act_window_t2_ParamLimits

0xda0b,	// (0x0007f54a) popup_call_poc_act_window_t2

0xda33,	// (0x0007f572) popup_call_poc_act_window_t3_ParamLimits

0xda33,	// (0x0007f572) popup_call_poc_act_window_t3

0xda5b,	// (0x0007f59a) popup_call_poc_act_window_t4_ParamLimits

0xda5b,	// (0x0007f59a) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x00080f95) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x00080f95) popup_call_poc_act_window_t

0xe897,	// (0x000803d6) bg_popup_call_poc_inact_pane_g6

0xe89f,	// (0x000803de) bg_popup_call_poc_inact_pane_g7

0xe8a7,	// (0x000803e6) bg_popup_call_poc_inact_pane_g8

0xda6d,	// (0x0007f5ac) popup_call_poc_inact_window_g2

0xe8af,	// (0x000803ee) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x00081019) bg_popup_call_poc_inact_pane_g

0xda75,	// (0x0007f5b4) popup_call_poc_inact_window_t1_ParamLimits

0xda75,	// (0x0007f5b4) popup_call_poc_inact_window_t1

0xda8a,	// (0x0007f5c9) popup_call_poc_inact_window_t2_ParamLimits

0xda8a,	// (0x0007f5c9) popup_call_poc_inact_window_t2

0xda9f,	// (0x0007f5de) popup_call_poc_inact_window_t3_ParamLimits

0xda9f,	// (0x0007f5de) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x00080f9e) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x00080f9e) popup_call_poc_inact_window_t

0xe99b,	// (0x000804da) context_pane_ParamLimits

0x564a,	// (0x00077189) signal_pane_ParamLimits

0xbdf7,	// (0x0007d936) main_call2_pane

0x55bd,	// (0x000770fc) popup_phob_thumbnail2_window_ParamLimits

0x55bd,	// (0x000770fc) popup_phob_thumbnail2_window

0x4c90,	// (0x000767cf) aid_hotspot_pointer_arrow_pane

0x4c98,	// (0x000767d7) aid_hotspot_pointer_hand_pane

0x5314,	// (0x00076e53) phob_pre_status_pane_g5

0xb4dc,	// (0x0007d01b) cams_zoom_pane_ParamLimits

0xb4dc,	// (0x0007d01b) image_vga_pane_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g1_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g3_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g5_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g6_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00080cc4) main_camera_pane_g_ParamLimits

0xc35c,	// (0x0007de9b) main_camera_pane_t1_ParamLimits

0xc35c,	// (0x0007de9b) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00080cd5) main_camera_pane_t_ParamLimits

0xbb58,	// (0x0007d697) bg_popup_preview_window_pane_cp01_ParamLimits

0xbb58,	// (0x0007d697) bg_popup_preview_window_pane_cp01

0xdab4,	// (0x0007f5f3) popup_phob_thumbnail2_window_g1_ParamLimits

0xdab4,	// (0x0007f5f3) popup_phob_thumbnail2_window_g1

0xb8fd,	// (0x0007d43c) call2_cli_visual_pane

0x4feb,	// (0x00076b2a) popup_call2_audio_conf_window_ParamLimits

0x4feb,	// (0x00076b2a) popup_call2_audio_conf_window

0x5000,	// (0x00076b3f) popup_call2_audio_first_window_ParamLimits

0x5000,	// (0x00076b3f) popup_call2_audio_first_window

0x509e,	// (0x00076bdd) popup_call2_audio_in_window_ParamLimits

0x509e,	// (0x00076bdd) popup_call2_audio_in_window

0x50e0,	// (0x00076c1f) popup_call2_audio_out_window_ParamLimits

0x50e0,	// (0x00076c1f) popup_call2_audio_out_window

0x5142,	// (0x00076c81) popup_call2_audio_second_window_ParamLimits

0x5142,	// (0x00076c81) popup_call2_audio_second_window

0x51a0,	// (0x00076cdf) popup_call2_audio_wait_window_ParamLimits

0x51a0,	// (0x00076cdf) popup_call2_audio_wait_window

0xb8fd,	// (0x0007d43c) bg_popup_call2_act_pane_cp03

0xbb3a,	// (0x0007d679) list_conf_pane_cp

0xdac0,	// (0x0007f5ff) popup_call2_audio_conf_window_t1

0xc56f,	// (0x0007e0ae) list_single_graphic_popup_conf2_pane_ParamLimits

0xc56f,	// (0x0007e0ae) list_single_graphic_popup_conf2_pane

0xc582,	// (0x0007e0c1) list_highlight_pane_cp04

0xdace,	// (0x0007f60d) list_single_graphic_popup_conf2_pane_g1

0xc593,	// (0x0007e0d2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x00080fa5) list_single_graphic_popup_conf2_pane_g

0xdad8,	// (0x0007f617) list_single_graphic_popup_conf2_pane_t1

0xdae6,	// (0x0007f625) bg_popup_call2_act_pane_cp01_ParamLimits

0xdae6,	// (0x0007f625) bg_popup_call2_act_pane_cp01

0xdb70,	// (0x0007f6af) call_type_pane_cp05_ParamLimits

0xdb70,	// (0x0007f6af) call_type_pane_cp05

0xdbc4,	// (0x0007f703) popup_call2_audio_second_window_g1_ParamLimits

0xdbc4,	// (0x0007f703) popup_call2_audio_second_window_g1

0xdc18,	// (0x0007f757) popup_call2_audio_second_window_g2_ParamLimits

0xdc18,	// (0x0007f757) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x00080faa) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x00080faa) popup_call2_audio_second_window_g

0xdc7d,	// (0x0007f7bc) popup_call2_audio_second_window_t1_ParamLimits

0xdc7d,	// (0x0007f7bc) popup_call2_audio_second_window_t1

0xdd38,	// (0x0007f877) popup_call2_audio_second_window_t2_ParamLimits

0xdd38,	// (0x0007f877) popup_call2_audio_second_window_t2

0xdd8b,	// (0x0007f8ca) popup_call2_audio_second_window_t3_ParamLimits

0xdd8b,	// (0x0007f8ca) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x00080fb1) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x00080fb1) popup_call2_audio_second_window_t

0xb8fd,	// (0x0007d43c) bg_popup_call2_in_pane_cp02

0xb907,	// (0x0007d446) call_type_pane_cp04

0x51df,	// (0x00076d1e) popup_call2_audio_wait_window_g1

0x51e7,	// (0x00076d26) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x00080fba) popup_call2_audio_wait_window_g

0xb91f,	// (0x0007d45e) popup_call2_audio_wait_window_t3

0xde7e,	// (0x0007f9bd) bg_popup_call2_act_pane_ParamLimits

0xde7e,	// (0x0007f9bd) bg_popup_call2_act_pane

0xdf3e,	// (0x0007fa7d) call_type_pane_cp03_ParamLimits

0xdf3e,	// (0x0007fa7d) call_type_pane_cp03

0xdfa2,	// (0x0007fae1) popup_call2_audio_first_window_g1_ParamLimits

0xdfa2,	// (0x0007fae1) popup_call2_audio_first_window_g1

0xe020,	// (0x0007fb5f) popup_call2_audio_first_window_g2_ParamLimits

0xe020,	// (0x0007fb5f) popup_call2_audio_first_window_g2

0xe012,	// (0x0007fb51) popup_call2_audio_first_window_g3_ParamLimits

0xe012,	// (0x0007fb51) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x00080fbf) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x00080fbf) popup_call2_audio_first_window_g

0xe0fe,	// (0x0007fc3d) popup_call2_audio_first_window_t1_ParamLimits

0xe0fe,	// (0x0007fc3d) popup_call2_audio_first_window_t1

0xe201,	// (0x0007fd40) popup_call2_audio_first_window_t4_ParamLimits

0xe201,	// (0x0007fd40) popup_call2_audio_first_window_t4

0xe2f2,	// (0x0007fe31) popup_call2_audio_first_window_t5_ParamLimits

0xe2f2,	// (0x0007fe31) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x00080fca) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x00080fca) popup_call2_audio_first_window_t

0xbb50,	// (0x0007d68f) bg_popup_call2_act_pane_g1

0xe90f,	// (0x0008044e) popup_cale_lunar_info_window_t1

0xe91d,	// (0x0008045c) popup_cale_lunar_info_window_t2

0xe92b,	// (0x0008046a) popup_cale_lunar_info_window_t3

0xb8fd,	// (0x0007d43c) bg_popup_call2_bubble_pane

0xe3f3,	// (0x0007ff32) bg_popup_call2_in_pane_cp01_ParamLimits

0xe3f3,	// (0x0007ff32) bg_popup_call2_in_pane_cp01

0xb5d9,	// (0x0007d118) call_type_pane_cp02

0x51ef,	// (0x00076d2e) popup_call2_audio_out_window_g1_ParamLimits

0x51ef,	// (0x00076d2e) popup_call2_audio_out_window_g1

0xe43b,	// (0x0007ff7a) popup_call2_audio_out_window_g2_ParamLimits

0xe43b,	// (0x0007ff7a) popup_call2_audio_out_window_g2

0x521b,	// (0x00076d5a) popup_call2_audio_out_window_g3_ParamLimits

0x521b,	// (0x00076d5a) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x00080fd3) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x00080fd3) popup_call2_audio_out_window_g

0xe472,	// (0x0007ffb1) popup_call2_audio_out_window_t1_ParamLimits

0xe472,	// (0x0007ffb1) popup_call2_audio_out_window_t1

0xe4d1,	// (0x00080010) popup_call2_audio_out_window_t2_ParamLimits

0xe4d1,	// (0x00080010) popup_call2_audio_out_window_t2

0xe525,	// (0x00080064) popup_call2_audio_out_window_t3_ParamLimits

0xe525,	// (0x00080064) popup_call2_audio_out_window_t3

0xe53b,	// (0x0008007a) popup_call2_audio_out_window_t4_ParamLimits

0xe53b,	// (0x0008007a) popup_call2_audio_out_window_t4

0xe551,	// (0x00080090) popup_call2_audio_out_window_t5_ParamLimits

0xe551,	// (0x00080090) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x00080fdc) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x00080fdc) popup_call2_audio_out_window_t

0xe5b5,	// (0x000800f4) bg_popup_call2_in_pane_ParamLimits

0xe5b5,	// (0x000800f4) bg_popup_call2_in_pane

0xe611,	// (0x00080150) popup_call2_audio_in_window_g1_ParamLimits

0xe611,	// (0x00080150) popup_call2_audio_in_window_g1

0xe649,	// (0x00080188) popup_call2_audio_in_window_g2_ParamLimits

0xe649,	// (0x00080188) popup_call2_audio_in_window_g2

0xe681,	// (0x000801c0) popup_call2_audio_in_window_g3_ParamLimits

0xe681,	// (0x000801c0) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x00080fe9) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x00080fe9) popup_call2_audio_in_window_g

0xe6d9,	// (0x00080218) popup_call2_audio_in_window_t1_ParamLimits

0xe6d9,	// (0x00080218) popup_call2_audio_in_window_t1

0xe759,	// (0x00080298) popup_call2_audio_in_window_t2_ParamLimits

0xe759,	// (0x00080298) popup_call2_audio_in_window_t2

0xe7d9,	// (0x00080318) popup_call2_audio_in_window_t3_ParamLimits

0xe7d9,	// (0x00080318) popup_call2_audio_in_window_t3

0xe7f3,	// (0x00080332) popup_call2_audio_in_window_t4_ParamLimits

0xe7f3,	// (0x00080332) popup_call2_audio_in_window_t4

0xe805,	// (0x00080344) popup_call2_audio_in_window_t5_ParamLimits

0xe805,	// (0x00080344) popup_call2_audio_in_window_t5

0xe81a,	// (0x00080359) popup_call2_audio_in_window_t6_ParamLimits

0xe81a,	// (0x00080359) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x00080ff2) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x00080ff2) popup_call2_audio_in_window_t

0xbb50,	// (0x0007d68f) bg_popup_call2_in_pane_g1

0xe939,	// (0x00080478) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0008105a) popup_cale_lunar_info_window_t

0xbb58,	// (0x0007d697) bg_popup_call2_rect_pane_ParamLimits

0xbb58,	// (0x0007d697) bg_popup_call2_rect_pane

0xb8fd,	// (0x0007d43c) call2_cli_visual_graphic_pane

0xb8fd,	// (0x0007d43c) call2_cli_visual_text_pane

0x5686,	// (0x000771c5) smil_status_volume_pane_g3

0x0002,

0xbb70,	// (0x0007d6af) call2_cli_visual_graphic_pane_g1

0xbb70,	// (0x0007d6af) call2_cli_visual_graphic_pane_g2

0xbb70,	// (0x0007d6af) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x00080fff) call2_cli_visual_graphic_pane_g

0xe82f,	// (0x0008036e) bg_popup_call2_rect_pane_g1

0xbd1c,	// (0x0007d85b) bg_popup_call2_rect_pane_g2

0xe837,	// (0x00080376) bg_popup_call2_rect_pane_g3

0xe83f,	// (0x0008037e) bg_popup_call2_rect_pane_g4

0xe847,	// (0x00080386) bg_popup_call2_rect_pane_g5

0xe84f,	// (0x0008038e) bg_popup_call2_rect_pane_g6

0xe857,	// (0x00080396) bg_popup_call2_rect_pane_g7

0xe85f,	// (0x0008039e) bg_popup_call2_rect_pane_g8

0xe867,	// (0x000803a6) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x00081006) bg_popup_call2_rect_pane_g

0xe86f,	// (0x000803ae) bg_popup_call2_bubble_pane_g1

0xe877,	// (0x000803b6) bg_popup_call2_bubble_pane_g2

0xe87f,	// (0x000803be) bg_popup_call2_bubble_pane_g3

0xe887,	// (0x000803c6) bg_popup_call2_bubble_pane_g4

0xe88f,	// (0x000803ce) bg_popup_call2_bubble_pane_g5

0xe897,	// (0x000803d6) bg_popup_call2_bubble_pane_g6

0xe89f,	// (0x000803de) bg_popup_call2_bubble_pane_g7

0xe8a7,	// (0x000803e6) bg_popup_call2_bubble_pane_g8

0xe8af,	// (0x000803ee) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x00081019) bg_popup_call2_bubble_pane_g

0x2e72,	// (0x000749b1) aid_cale_week_size_cell_pane

0xbb58,	// (0x0007d697) aid_cams_cif_uncrop_pane_ParamLimits

0xbb58,	// (0x0007d697) aid_cams_cif_uncrop_pane

0x3466,	// (0x00074fa5) aid_cams_size_cell_ParamLimits

0x3466,	// (0x00074fa5) aid_cams_size_cell

0x3472,	// (0x00074fb1) grid_cams_pane_ParamLimits

0x3480,	// (0x00074fbf) linegrid_cams_pane_ParamLimits

0x3557,	// (0x00075096) call_video_pane_t1

0x3578,	// (0x000750b7) call_video_pane_t2

0x0001,

0xf1e2,	// (0x00080d21) call_video_pane_t

0x3abf,	// (0x000755fe) aid_cale_month_size_cell_pane_ParamLimits

0x3abf,	// (0x000755fe) aid_cale_month_size_cell_pane

0xf55f,	// (0x0008109e) smil_status_volume_pane_g

0x5693,	// (0x000771d2) volume_smil_pane_ParamLimits

0x2736,	// (0x00074275) aid_popup2_width_pane

0x2d71,	// (0x000748b0) cell_qdial_pane_g4_ParamLimits

0x2d71,	// (0x000748b0) cell_qdial_pane_g4

0x496f,	// (0x000764ae) aid_blid_cardinal_pane_ParamLimits

0x497f,	// (0x000764be) aid_blid_destination_pane_ParamLimits

0x497f,	// (0x000764be) aid_blid_destination_pane

0xbb58,	// (0x0007d697) bg_popup_call_poc_act_pane_ParamLimits

0xbb58,	// (0x0007d697) bg_popup_call_poc_act_pane

0xbb58,	// (0x0007d697) bg_popup_call_poc_inact_pane_ParamLimits

0xbb58,	// (0x0007d697) bg_popup_call_poc_inact_pane

0xe8b7,	// (0x000803f6) bg_popup_call_poc_act_pane_g1

0xe8bf,	// (0x000803fe) bg_popup_call_poc_act_pane_g2

0xe8c7,	// (0x00080406) bg_popup_call_poc_act_pane_g3

0xe887,	// (0x000803c6) bg_popup_call_poc_act_pane_g4

0xe88f,	// (0x000803ce) bg_popup_call_poc_act_pane_g5

0xe8cf,	// (0x0008040e) bg_popup_call_poc_act_pane_g6

0xe89f,	// (0x000803de) bg_popup_call_poc_act_pane_g7

0xe8d7,	// (0x00080416) bg_popup_call_poc_act_pane_g8

0xb8fd,	// (0x0007d43c) main_usb_pane

0x54ec,	// (0x0007702b) popup_cale_lunar_info_window

0x38a1,	// (0x000753e0) im_reading_pane_t1_ParamLimits

0xbee6,	// (0x0007da25) list_im_pane_ParamLimits

0xbef7,	// (0x0007da36) scroll_pane_cp07_ParamLimits

0xb8fd,	// (0x0007d43c) grid_highlight_pane_cp012

0xbb58,	// (0x0007d697) mup_scale_pane_ParamLimits

0xe012,	// (0x0007fb51) main_usb_pane_g1_ParamLimits

0xe012,	// (0x0007fb51) main_usb_pane_g1

0x527c,	// (0x00076dbb) main_usb_pane_g2_ParamLimits

0x527c,	// (0x00076dbb) main_usb_pane_g2

0x0001,

0xf504,	// (0x00081043) main_usb_pane_g_ParamLimits

0xf504,	// (0x00081043) main_usb_pane_g

0x5288,	// (0x00076dc7) main_usb_pane_t1_ParamLimits

0x5288,	// (0x00076dc7) main_usb_pane_t1

0x529a,	// (0x00076dd9) main_usb_pane_t2_ParamLimits

0x529a,	// (0x00076dd9) main_usb_pane_t2

0x52ac,	// (0x00076deb) main_usb_pane_t3_ParamLimits

0x52ac,	// (0x00076deb) main_usb_pane_t3

0x52be,	// (0x00076dfd) main_usb_pane_t4_ParamLimits

0x52be,	// (0x00076dfd) main_usb_pane_t4

0x52d0,	// (0x00076e0f) main_usb_pane_t5_ParamLimits

0x52d0,	// (0x00076e0f) main_usb_pane_t5

0x52e2,	// (0x00076e21) main_usb_pane_t6_ParamLimits

0x52e2,	// (0x00076e21) main_usb_pane_t6

0x0005,

0xf509,	// (0x00081048) main_usb_pane_t_ParamLimits

0x4915,	// (0x00076454) aid_text_placing

0x4921,	// (0x00076460) main_location2_pane_t1_ParamLimits

0x4935,	// (0x00076474) main_location2_pane_t2_ParamLimits

0x4949,	// (0x00076488) main_location2_pane_t3_ParamLimits

0x495d,	// (0x0007649c) main_location2_pane_t4_ParamLimits

0x495d,	// (0x0007649c) main_location2_pane_t4

0xf323,	// (0x00080e62) main_location2_pane_t_ParamLimits

0xbb94,	// (0x0007d6d3) find_pinb_pane_g2_ParamLimits

0xbb94,	// (0x0007d6d3) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x00080bd9) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x00080bd9) find_pinb_pane_g

0xbba0,	// (0x0007d6df) find_pinb_pane_t1_ParamLimits

0xbbb2,	// (0x0007d6f1) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00080bde) find_pinb_pane_t_ParamLimits

0xb8fd,	// (0x0007d43c) main_call3_pane

0x4062,	// (0x00075ba1) cale_month_day_heading_pane_t1_ParamLimits

0x40e8,	// (0x00075c27) cale_month_day_heading_pane_t2_ParamLimits

0x4161,	// (0x00075ca0) cale_month_day_heading_pane_t3_ParamLimits

0x41da,	// (0x00075d19) cale_month_day_heading_pane_t4_ParamLimits

0x4253,	// (0x00075d92) cale_month_day_heading_pane_t5_ParamLimits

0x42cc,	// (0x00075e0b) cale_month_day_heading_pane_t6_ParamLimits

0x4345,	// (0x00075e84) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00080d59) cale_month_day_heading_pane_t_ParamLimits

0xc141,	// (0x0007dc80) smil_status_volume_pane

0x4dd8,	// (0x00076917) postcard_address_pane_ParamLimits

0x4dd8,	// (0x00076917) postcard_address_pane

0x4de4,	// (0x00076923) postcard_message_pane_ParamLimits

0x4de4,	// (0x00076923) postcard_message_pane

0x5247,	// (0x00076d86) call2_cli_visual_pane_t1_ParamLimits

0x5247,	// (0x00076d86) call2_cli_visual_pane_t1

0xea4e,	// (0x0008058d) postcard_message_pane_t1_ParamLimits

0xea4e,	// (0x0008058d) postcard_message_pane_t1

0xea36,	// (0x00080575) postcard_address_pane_t1_ParamLimits

0xea36,	// (0x00080575) postcard_address_pane_t1

0x57c4,	// (0x00077303) popup_call3_audio_in_window_ParamLimits

0x57c4,	// (0x00077303) popup_call3_audio_in_window

0x56a8,	// (0x000771e7) bg_popup_call3_in_pane_ParamLimits

0x56a8,	// (0x000771e7) bg_popup_call3_in_pane

0x570a,	// (0x00077249) popup_call3_audio_in_window_g1_ParamLimits

0x570a,	// (0x00077249) popup_call3_audio_in_window_g1

0x5722,	// (0x00077261) popup_call3_audio_in_window_g2_ParamLimits

0x5722,	// (0x00077261) popup_call3_audio_in_window_g2

0x573a,	// (0x00077279) popup_call3_audio_in_window_g3_ParamLimits

0x573a,	// (0x00077279) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x000810a5) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x000810a5) popup_call3_audio_in_window_g

0x5762,	// (0x000772a1) popup_call3_audio_in_window_t1_ParamLimits

0x5762,	// (0x000772a1) popup_call3_audio_in_window_t1

0x578a,	// (0x000772c9) popup_call3_audio_in_window_t2_ParamLimits

0x578a,	// (0x000772c9) popup_call3_audio_in_window_t2

0x57b2,	// (0x000772f1) popup_call3_audio_in_window_t3_ParamLimits

0x57b2,	// (0x000772f1) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x000810ae) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x000810ae) popup_call3_audio_in_window_t

0xbdf7,	// (0x0007d936) bg_popup_call3_rect_pane

0xe82f,	// (0x0008036e) bg_popup_call3_rect_pane_g1

0xbd1c,	// (0x0007d85b) bg_popup_call3_rect_pane_g2

0xe837,	// (0x00080376) bg_popup_call3_rect_pane_g3

0xe83f,	// (0x0008037e) bg_popup_call3_rect_pane_g4

0xe847,	// (0x00080386) bg_popup_call3_rect_pane_g5

0xe84f,	// (0x0008038e) bg_popup_call3_rect_pane_g6

0xe857,	// (0x00080396) bg_popup_call3_rect_pane_g7

0xb4d2,	// (0x0007d011) mup_visualizer_osc_pane

0xb4d2,	// (0x0007d011) mup_visualizer_spec_pane

0x56c8,	// (0x00077207) call3_video_qcif_pane_ParamLimits

0x56c8,	// (0x00077207) call3_video_qcif_pane

0x56da,	// (0x00077219) call3_video_qcif_uncrop_pane_ParamLimits

0x56da,	// (0x00077219) call3_video_qcif_uncrop_pane

0x56e8,	// (0x00077227) call3_video_subqcif_pane_ParamLimits

0x56e8,	// (0x00077227) call3_video_subqcif_pane

0x56fa,	// (0x00077239) call3_video_subqcif_uncrop_pane_ParamLimits

0x56fa,	// (0x00077239) call3_video_subqcif_uncrop_pane

0x5752,	// (0x00077291) popup_call3_audio_in_window_g4_ParamLimits

0x5752,	// (0x00077291) popup_call3_audio_in_window_g4

0xb4d2,	// (0x0007d011) mup_spec_half_pane

0xb4d2,	// (0x0007d011) mup_spec_half_pane_cp

0xb4d2,	// (0x0007d011) mup_osc_middle_pane

0xbe19,	// (0x0007d958) mup_visualizer_osc_pane_g1

0xe9e9,	// (0x00080528) mup_spec_bar_pane_ParamLimits

0xe9e9,	// (0x00080528) mup_spec_bar_pane

0xbe19,	// (0x0007d958) mup_spec_bar_pane_g1

0xbe19,	// (0x0007d958) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x00080edc) mup_spec_bar_pane_g

0x2e72,	// (0x000749b1) aid_cale_week_size_cell_pane_ParamLimits

0x2e87,	// (0x000749c6) bg_cale_heading_pane_ParamLimits

0xbd59,	// (0x0007d898) bg_cale_pane_cp01_ParamLimits

0x2ea7,	// (0x000749e6) cale_week_corner_pane_ParamLimits

0x2ec1,	// (0x00074a00) cale_week_day_heading_pane_ParamLimits

0x2ee1,	// (0x00074a20) cale_week_scroll_pane_g1_ParamLimits

0x2efc,	// (0x00074a3b) cale_week_scroll_pane_g2_ParamLimits

0x2f0f,	// (0x00074a4e) cale_week_scroll_pane_g3_ParamLimits

0x2f22,	// (0x00074a61) cale_week_scroll_pane_g4_ParamLimits

0x2f35,	// (0x00074a74) cale_week_scroll_pane_g5_ParamLimits

0x2f48,	// (0x00074a87) cale_week_scroll_pane_g6_ParamLimits

0x2f5b,	// (0x00074a9a) cale_week_scroll_pane_g7_ParamLimits

0x2f70,	// (0x00074aaf) cale_week_scroll_pane_g8_ParamLimits

0x2f85,	// (0x00074ac4) cale_week_scroll_pane_g9_ParamLimits

0x2f98,	// (0x00074ad7) cale_week_scroll_pane_g10_ParamLimits

0x2fab,	// (0x00074aea) cale_week_scroll_pane_g11_ParamLimits

0x2fbe,	// (0x00074afd) cale_week_scroll_pane_g12_ParamLimits

0x2fd5,	// (0x00074b14) cale_week_scroll_pane_g13_ParamLimits

0x2ff0,	// (0x00074b2f) cale_week_scroll_pane_g14_ParamLimits

0x300b,	// (0x00074b4a) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00080c6a) cale_week_scroll_pane_g_ParamLimits

0x303b,	// (0x00074b7a) cale_week_time_pane_ParamLimits

0x3050,	// (0x00074b8f) grid_cale_week_pane_ParamLimits

0xbd76,	// (0x0007d8b5) listscroll_cale_week_pane_t1

0xbd88,	// (0x0007d8c7) scroll_pane_cp08_ParamLimits

0x3b33,	// (0x00075672) cale_month_corner_pane_ParamLimits

0xc117,	// (0x0007dc56) cale_month_pane_t1

0x3fe5,	// (0x00075b24) cale_month_week_pane_ParamLimits

0xe012,	// (0x0007fb51) popup_call_status_window_g1_ParamLimits

0x476c,	// (0x000762ab) popup_call_status_window_g2_ParamLimits

0x4778,	// (0x000762b7) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x00080de9) popup_call_status_window_g_ParamLimits

0xc50e,	// (0x0007e04d) aid_call2_pane

0x1af8,	// (0x00073637) msg_header_pane_g1

0x4dd8,	// (0x00076917) postcard_address2_pane_ParamLimits

0x4dd8,	// (0x00076917) postcard_address2_pane

0x4de4,	// (0x00076923) postcard_message2_pane_ParamLimits

0x4de4,	// (0x00076923) postcard_message2_pane

0x5658,	// (0x00077197) message2_row_pane_ParamLimits

0x5658,	// (0x00077197) message2_row_pane

0x5673,	// (0x000771b2) address2_row_pane_ParamLimits

0x5673,	// (0x000771b2) address2_row_pane

0xe9b6,	// (0x000804f5) postcard_message2_row_pane_g1

0xe9be,	// (0x000804fd) postcard_message2_row_pane_t1

0xe9b6,	// (0x000804f5) address2_row_pane_g1

0xe9be,	// (0x000804fd) address2_row_pane_t1

0x32d6,	// (0x00074e15) aid_size_cell_vorec

0xb8fd,	// (0x0007d43c) main_rss_pane

0xe9cc,	// (0x0008050b) rss_list_single_pane_ParamLimits

0xe9cc,	// (0x0008050b) rss_list_single_pane

0xe9da,	// (0x00080519) rss_list_single_pane_t1

0xe9da,	// (0x00080519) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x00081099) rss_list_single_pane_t

0xb8fd,	// (0x0007d43c) main_camera2_pane

0xb8fd,	// (0x0007d43c) main_video2_pane

0xb4dc,	// (0x0007d01b) cams_zoom_pane_cp2_ParamLimits

0xb4dc,	// (0x0007d01b) cams_zoom_pane_cp2

0xb4dc,	// (0x0007d01b) image2_vga_pane_ParamLimits

0xb4dc,	// (0x0007d01b) image2_vga_pane

0xbbe1,	// (0x0007d720) main_camera2_pane_g1_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g1

0xbbe1,	// (0x0007d720) main_camera2_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g2

0xbbe1,	// (0x0007d720) main_camera2_pane_g3_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g3

0xbbe1,	// (0x0007d720) main_camera2_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g4

0xbbe1,	// (0x0007d720) main_camera2_pane_g5_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g5

0xbbe1,	// (0x0007d720) main_camera2_pane_g6_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g6

0xbbe1,	// (0x0007d720) main_camera2_pane_g7_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g7

0xbbe1,	// (0x0007d720) main_camera2_pane_g8_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g8

0x0008,

0xf576,	// (0x000810b5) main_camera2_pane_g_ParamLimits

0xf576,	// (0x000810b5) main_camera2_pane_g

0xc35c,	// (0x0007de9b) main_camera2_pane_t1_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t1

0xc35c,	// (0x0007de9b) main_camera2_pane_t2_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t2

0xc35c,	// (0x0007de9b) main_camera2_pane_t3_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t3

0xc35c,	// (0x0007de9b) main_camera2_pane_t4_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t4

0x0006,

0xf589,	// (0x000810c8) main_camera2_pane_t_ParamLimits

0xf589,	// (0x000810c8) main_camera2_pane_t

0xc996,	// (0x0007e4d5) cams_zoom_pane_cp4_ParamLimits

0xc996,	// (0x0007e4d5) cams_zoom_pane_cp4

0xbb7a,	// (0x0007d6b9) image2_cif_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) image2_cif_pane

0xb4dc,	// (0x0007d01b) image2_subqcif_pane_ParamLimits

0xb4dc,	// (0x0007d01b) image2_subqcif_pane

0xc9a4,	// (0x0007e4e3) main_video2_pane_g1_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g1

0xc9a4,	// (0x0007e4e3) main_video2_pane_g2_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g2

0xc9a4,	// (0x0007e4e3) main_video2_pane_g3_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g3

0xc9a4,	// (0x0007e4e3) main_video2_pane_g4_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g4

0xc9a4,	// (0x0007e4e3) main_video2_pane_g5_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g5

0xc9a4,	// (0x0007e4e3) main_video2_pane_g6_ParamLimits

0xc9a4,	// (0x0007e4e3) main_video2_pane_g6

0x0005,

0xf598,	// (0x000810d7) main_video2_pane_g_ParamLimits

0xf598,	// (0x000810d7) main_video2_pane_g

0xc9b2,	// (0x0007e4f1) main_video2_pane_t1_ParamLimits

0xc9b2,	// (0x0007e4f1) main_video2_pane_t1

0xc9b2,	// (0x0007e4f1) main_video2_pane_t2_ParamLimits

0xc9b2,	// (0x0007e4f1) main_video2_pane_t2

0xc9b2,	// (0x0007e4f1) main_video2_pane_t3_ParamLimits

0xc9b2,	// (0x0007e4f1) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x000810e4) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x000810e4) main_video2_pane_t

0x5378,	// (0x00076eb7) call_muted_g2

0x0001,

0xf54c,	// (0x0008108b) call_muted_g

0xb8fd,	// (0x0007d43c) main_mup2_pane

0xbbef,	// (0x0007d72e) main_mup2_pane_g1_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g1

0xbbef,	// (0x0007d72e) main_mup2_pane_g2_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g2

0xbe19,	// (0x0007d958) main_mup_pane_g13_cp1

0xb4d2,	// (0x0007d011) mup_volume_pane_cp1

0xbbef,	// (0x0007d72e) main_mup2_pane_g4_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g4

0xbbef,	// (0x0007d72e) main_mup2_pane_g5_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g5

0xbbef,	// (0x0007d72e) main_mup2_pane_g6_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g6

0xbbef,	// (0x0007d72e) main_mup2_pane_g7_ParamLimits

0xbbef,	// (0x0007d72e) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x000810eb) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x000810eb) main_mup2_pane_g

0xbbfd,	// (0x0007d73c) main_mup2_pane_t1_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t1

0xbbfd,	// (0x0007d73c) main_mup2_pane_t2_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t2

0xbbfd,	// (0x0007d73c) main_mup2_pane_t3_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t3

0xbbfd,	// (0x0007d73c) main_mup2_pane_t4_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t4

0xbbfd,	// (0x0007d73c) main_mup2_pane_t5_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t5

0xbbfd,	// (0x0007d73c) main_mup2_pane_t6_ParamLimits

0xbbfd,	// (0x0007d73c) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x000810fa) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x000810fa) main_mup2_pane_t

0xe2e4,	// (0x0007fe23) mup2_visualizer_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup2_visualizer_pane

0xe2e4,	// (0x0007fe23) mup_progress_pane_cp_ParamLimits

0xe2e4,	// (0x0007fe23) mup_progress_pane_cp

0xea6a,	// (0x000805a9) mup_volume_pane_cp_ParamLimits

0xea6a,	// (0x000805a9) mup_volume_pane_cp

0xbbd3,	// (0x0007d712) mup2_visualizer_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) mup2_visualizer_pane_g1

0xbbe1,	// (0x0007d720) mup2_visualizer_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) mup2_visualizer_pane_g2

0xbbe1,	// (0x0007d720) mup2_visualizer_pane_g3_ParamLimits

0xbbe1,	// (0x0007d720) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00080be3) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00080be3) mup2_visualizer_pane_g

0xd950,	// (0x0007f48f) aid_size_cell_fmradio

0x548e,	// (0x00076fcd) aid_height_parent_landcape

0xbf75,	// (0x0007dab4) wml_content_pane_cp

0xbf7d,	// (0x0007dabc) wml_tabs_pane

0xbf86,	// (0x0007dac5) popup_wml_miniature_window

0xbf8e,	// (0x0007dacd) scroll_pane_cp021

0xbfa2,	// (0x0007dae1) wml_content_pane_comp8

0xb8fd,	// (0x0007d43c) bg_popup_sub_pane_cp05

0xea80,	// (0x000805bf) popup_wml_miniature_window_g1

0xea88,	// (0x000805c7) wml_miniature_view_pane

0x57f5,	// (0x00077334) aid_size_wml_view

0x57fd,	// (0x0007733c) wml_miniature_view_pane_g1

0x5806,	// (0x00077345) wml_miniature_view_pane_g2

0x580f,	// (0x0007734e) wml_miniature_view_pane_g3

0x5817,	// (0x00077356) wml_miniature_view_pane_g4

0x581f,	// (0x0007735e) wml_miniature_view_pane_g5

0x5827,	// (0x00077366) wml_miniature_view_pane_g6

0x582f,	// (0x0007736e) wml_miniature_view_pane_g7

0x5837,	// (0x00077376) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x00081107) wml_miniature_view_pane_g

0xea90,	// (0x000805cf) background_graphic_ParamLimits

0xea90,	// (0x000805cf) background_graphic

0xea9c,	// (0x000805db) wml_tabs_2_pane

0xeaa5,	// (0x000805e4) wml_tabs_3_pane_ParamLimits

0xeaa5,	// (0x000805e4) wml_tabs_3_pane

0xeab7,	// (0x000805f6) wml_tabs_4_pane_ParamLimits

0xeab7,	// (0x000805f6) wml_tabs_4_pane

0xeacd,	// (0x0008060c) wml_tabs_5_pane_ParamLimits

0xeacd,	// (0x0008060c) wml_tabs_5_pane

0xeae7,	// (0x00080626) wml_tabs_pane_g2_ParamLimits

0xeae7,	// (0x00080626) wml_tabs_pane_g2

0xeafc,	// (0x0008063b) wml_tabs_pane_g3_ParamLimits

0xeafc,	// (0x0008063b) wml_tabs_pane_g3

0xeb11,	// (0x00080650) wml_tabs_2_active_pane_ParamLimits

0xeb11,	// (0x00080650) wml_tabs_2_active_pane

0xeb11,	// (0x00080650) wml_tabs_2_passive_pane_ParamLimits

0xeb11,	// (0x00080650) wml_tabs_2_passive_pane

0x583f,	// (0x0007737e) wml_tabs_3_active_pane_cp_ParamLimits

0x583f,	// (0x0007737e) wml_tabs_3_active_pane_cp

0x5850,	// (0x0007738f) wml_tabs_3_passive_pane_ParamLimits

0x5850,	// (0x0007738f) wml_tabs_3_passive_pane

0x5861,	// (0x000773a0) wml_tabs_3_passive_pane_cp_ParamLimits

0x5861,	// (0x000773a0) wml_tabs_3_passive_pane_cp

0x5872,	// (0x000773b1) tabs_4_active_pane

0x587a,	// (0x000773b9) tabs_4_passive_pane

0x5882,	// (0x000773c1) tabs_4_passive_pane_cp

0x588a,	// (0x000773c9) tabs_4_passive_pane_cp2

0x5274,	// (0x00076db3) aid_height_text

0xe2e4,	// (0x0007fe23) mup_volume_cont_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup_volume_cont_pane

0xb4d2,	// (0x0007d011) aid_size_cell_pinb

0xb4d2,	// (0x0007d011) aid_size_list_pinb

0xe2e4,	// (0x0007fe23) mup2_volume_cont_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup2_volume_cont_pane

0x5892,	// (0x000773d1) mup2_volume_cont_pane_g1_ParamLimits

0x5892,	// (0x000773d1) mup2_volume_cont_pane_g1

0x2742,	// (0x00074281) aid_size_cell_touch_ParamLimits

0x2742,	// (0x00074281) aid_size_cell_touch

0x29e9,	// (0x00074528) touch_pane_ParamLimits

0x29e9,	// (0x00074528) touch_pane

0xb4d2,	// (0x0007d011) main_rss2_pane

0xeb28,	// (0x00080667) listscroll_rss2_pane

0xeb31,	// (0x00080670) rss2_navigation_pane

0xeb39,	// (0x00080678) list_rss2_pane

0xc645,	// (0x0007e184) scroll_pane_cp22

0xeb41,	// (0x00080680) rss2_navigation_pane_g1

0xeb4a,	// (0x00080689) rss2_navigation_pane_g2

0xeb52,	// (0x00080691) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x00081118) rss2_navigation_pane_g

0xeb5a,	// (0x00080699) rss2_navigation_pane_t1

0x58a8,	// (0x000773e7) rss2_list_single_pane_ParamLimits

0x58a8,	// (0x000773e7) rss2_list_single_pane

0xeb68,	// (0x000806a7) rss2_list_single_pane_t2

0xeb76,	// (0x000806b5) rss2_list_single_pane_t3_ParamLimits

0xeb76,	// (0x000806b5) rss2_list_single_pane_t3

0xeb93,	// (0x000806d2) rss2_list_single_pane_t4

0x45e1,	// (0x00076120) smil_status_pane_g1

0xbb7a,	// (0x0007d6b9) main_image2_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) main_image2_pane

0xbbe1,	// (0x0007d720) main_camera2_pane_g9_ParamLimits

0xbbe1,	// (0x0007d720) main_camera2_pane_g9

0xc35c,	// (0x0007de9b) main_camera2_pane_t5_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t5

0x57e1,	// (0x00077320) main_camera2_pane_t6_ParamLimits

0x57e1,	// (0x00077320) main_camera2_pane_t6

0x58d9,	// (0x00077418) main_image2_pane_g1_ParamLimits

0x58d9,	// (0x00077418) main_image2_pane_g1

0x4fac,	// (0x00076aeb) smil2_video_pane_ParamLimits

0x4fac,	// (0x00076aeb) smil2_video_pane

0x2776,	// (0x000742b5) aid_zoom_text_primary_cp

0x2992,	// (0x000744d1) popup_preview_fixed_window

0xbede,	// (0x0007da1d) im_reading_pane_g1

0x57d3,	// (0x00077312) cams2_bc_adjust_pane_cp_ParamLimits

0x57d3,	// (0x00077312) cams2_bc_adjust_pane_cp

0xb4dc,	// (0x0007d01b) cams2_bc_adjust_pane_ParamLimits

0xb4dc,	// (0x0007d01b) cams2_bc_adjust_pane

0xbe19,	// (0x0007d958) cams2_bc_adjust_pane_g1

0xb4d2,	// (0x0007d011) cams2_slider_pane

0xbe19,	// (0x0007d958) cams2_slider_pane_g1

0xbe19,	// (0x0007d958) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0008111f) cams2_slider_pane_g

0x2ab7,	// (0x000745f6) calc_display_pane_ParamLimits

0x2ad5,	// (0x00074614) calc_paper_pane_ParamLimits

0x2af1,	// (0x00074630) grid_calc_pane_ParamLimits

0x47da,	// (0x00076319) popup_clock_digital_window_t1_ParamLimits

0xd8ed,	// (0x0007f42c) main_image_pane_t1

0x2a9d,	// (0x000745dc) aid_size_cell_calc_ParamLimits

0x2a9d,	// (0x000745dc) aid_size_cell_calc

0x54c8,	// (0x00077007) popup_blid_sat_info2_window_ParamLimits

0x54c8,	// (0x00077007) popup_blid_sat_info2_window

0xeba1,	// (0x000806e0) aid_size_cell_blid

0xe2e4,	// (0x0007fe23) bg_popup_window_pane_cp07

0xebbe,	// (0x000806fd) grid_popup_blid_pane

0xebc8,	// (0x00080707) heading_pane_cp05_ParamLimits

0xebc8,	// (0x00080707) heading_pane_cp05

0xec92,	// (0x000807d1) cell_popup_blid_pane_ParamLimits

0xec92,	// (0x000807d1) cell_popup_blid_pane

0xecb6,	// (0x000807f5) cell_popup_blid_pane_g1

0xecbe,	// (0x000807fd) cell_popup_blid_pane_t1

0xe2e4,	// (0x0007fe23) mup2_indicator_pane_ParamLimits

0xe2e4,	// (0x0007fe23) mup2_indicator_pane

0xb4d2,	// (0x0007d011) mup2_visualizer_osc_pane

0xea6a,	// (0x000805a9) mup2_visualizer_spec_pane_ParamLimits

0xea6a,	// (0x000805a9) mup2_visualizer_spec_pane

0xb4d2,	// (0x0007d011) mup2_spec_half_pane

0xb4d2,	// (0x0007d011) mup2_spec_half_pane_cp

0xeccc,	// (0x0008080b) mup2_spec_bar_pane_ParamLimits

0xeccc,	// (0x0008080b) mup2_spec_bar_pane

0xbe19,	// (0x0007d958) mup2_spec_bar_pane_g1

0xeceb,	// (0x0008082a) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00081145) mup2_spec_bar_pane_g

0xb4d2,	// (0x0007d011) mup2_osc_middle_pane

0xbe19,	// (0x0007d958) mup2_visualizer_osc_pane_g1

0xb50a,	// (0x0007d049) popup_number_entry_window_t1_ParamLimits

0xb51d,	// (0x0007d05c) popup_number_entry_window_t2_ParamLimits

0xb52f,	// (0x0007d06e) popup_number_entry_window_t3_ParamLimits

0x2a40,	// (0x0007457f) popup_number_entry_window_t5_ParamLimits

0x2a40,	// (0x0007457f) popup_number_entry_window_t5

0xf045,	// (0x00080b84) popup_number_entry_window_t_ParamLimits

0xb541,	// (0x0007d080) text_title_cp2_ParamLimits

0x4ca0,	// (0x000767df) aid_hotspot_pointer_text2_pane

0x4d3a,	// (0x00076879) main_viewer_pane_g9_ParamLimits

0x4d3a,	// (0x00076879) main_viewer_pane_g9

0xc117,	// (0x0007dc56) cale_month_pane_t1_ParamLimits

0xc154,	// (0x0007dc93) bg_cale_pane_ParamLimits

0xc16c,	// (0x0007dcab) list_cale_pane_ParamLimits

0xc17d,	// (0x0007dcbc) listscroll_cale_day_pane_t1

0xc18f,	// (0x0007dcce) scroll_pane_cp09_ParamLimits

0x4a5d,	// (0x0007659c) main_mup_eq_pane_t1_ParamLimits

0x4a5d,	// (0x0007659c) main_mup_eq_pane_t1

0x4a77,	// (0x000765b6) main_mup_eq_pane_t2_ParamLimits

0x4a77,	// (0x000765b6) main_mup_eq_pane_t2

0x4a91,	// (0x000765d0) main_mup_eq_pane_t3_ParamLimits

0x4a91,	// (0x000765d0) main_mup_eq_pane_t3

0x4aa9,	// (0x000765e8) main_mup_eq_pane_t4_ParamLimits

0x4aa9,	// (0x000765e8) main_mup_eq_pane_t4

0x4ac1,	// (0x00076600) main_mup_eq_pane_t5_ParamLimits

0x4ac1,	// (0x00076600) main_mup_eq_pane_t5

0x4ad9,	// (0x00076618) main_mup_eq_pane_t6_ParamLimits

0x4ad9,	// (0x00076618) main_mup_eq_pane_t6

0x4aed,	// (0x0007662c) main_mup_eq_pane_t7_ParamLimits

0x4aed,	// (0x0007662c) main_mup_eq_pane_t7

0x4b01,	// (0x00076640) main_mup_eq_pane_t8_ParamLimits

0x4b01,	// (0x00076640) main_mup_eq_pane_t8

0x4b17,	// (0x00076656) main_mup_eq_pane_t9_ParamLimits

0x4b17,	// (0x00076656) main_mup_eq_pane_t9

0x4b2f,	// (0x0007666e) main_mup_eq_pane_t10_ParamLimits

0x4b2f,	// (0x0007666e) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x00080ee8) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x00080ee8) main_mup_eq_pane_t

0x4bec,	// (0x0007672b) mup_equalizer_pane_cp5_ParamLimits

0x4c02,	// (0x00076741) mup_equalizer_pane_cp6_ParamLimits

0x4c1a,	// (0x00076759) mup_equalizer_pane_cp7_ParamLimits

0xb4d2,	// (0x0007d011) main_gallery_pane

0xea08,	// (0x00080547) smil2_volume_pane

0xea10,	// (0x0008054f) smil_status_volume_pane_g1_ParamLimits

0xea23,	// (0x00080562) smil_status_volume_pane_g2_ParamLimits

0x5686,	// (0x000771c5) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0008109e) smil_status_volume_pane_g_ParamLimits

0xe2e4,	// (0x0007fe23) bg_popup_window_pane_cp07_ParamLimits

0xeba9,	// (0x000806e8) blid_firmament_pane

0xb4dc,	// (0x0007d01b) aid_size_cell_gallery_ParamLimits

0xb4dc,	// (0x0007d01b) aid_size_cell_gallery

0xb4dc,	// (0x0007d01b) grid_gallery_pane_ParamLimits

0xb4dc,	// (0x0007d01b) grid_gallery_pane

0xc996,	// (0x0007e4d5) cell_gallery_pane_ParamLimits

0xc996,	// (0x0007e4d5) cell_gallery_pane

0xbb7a,	// (0x0007d6b9) bg_cell_gallery_focus_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_cell_gallery_focus_pane

0xbbd3,	// (0x0007d712) cell_gallery_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) cell_gallery_pane_g1

0xbbd3,	// (0x0007d712) cell_gallery_pane_g2_ParamLimits

0xbbd3,	// (0x0007d712) cell_gallery_pane_g2

0xbbd3,	// (0x0007d712) cell_gallery_pane_g3_ParamLimits

0xbbd3,	// (0x0007d712) cell_gallery_pane_g3

0xbbe1,	// (0x0007d720) cell_gallery_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0008114a) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0008114a) cell_gallery_pane_g

0xecf5,	// (0x00080834) bg_cell_gallery_focus_pane_g1

0xecfd,	// (0x0008083c) bg_cell_gallery_focus_pane_g2

0xed05,	// (0x00080844) bg_cell_gallery_focus_pane_g3

0xed0d,	// (0x0008084c) bg_cell_gallery_focus_pane_g4

0xed15,	// (0x00080854) bg_cell_gallery_focus_pane_g5

0xed1d,	// (0x0008085c) bg_cell_gallery_focus_pane_g6

0xed25,	// (0x00080864) bg_cell_gallery_focus_pane_g7

0xed2d,	// (0x0008086c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x00081153) bg_cell_gallery_focus_pane_g

0xed35,	// (0x00080874) aid_firma_cardinal

0xed49,	// (0x00080888) blid_firmament_pane_t1

0xed60,	// (0x0008089f) blid_firmament_pane_t2

0xed77,	// (0x000808b6) blid_firmament_pane_t3

0xed8e,	// (0x000808cd) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x00081164) blid_firmament_pane_t

0xeda5,	// (0x000808e4) blid_sat_info_pane

0xbe19,	// (0x0007d958) blid_sat_info_pane_g1

0xbe19,	// (0x0007d958) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x00080edc) blid_sat_info_pane_g

0xedb5,	// (0x000808f4) blid_sat_info_pane_t1

0xedc3,	// (0x00080902) smil2_volume_content_pane

0xedcc,	// (0x0008090b) smil2_volume_pane_g1

0xc335,	// (0x0007de74) smil2_volume_content_pane_g1

0xedd4,	// (0x00080913) smil2_volume_content_pane_g2

0xeddd,	// (0x0008091c) smil2_volume_content_pane_g3

0xede6,	// (0x00080925) smil2_volume_content_pane_g4

0xedef,	// (0x0008092e) smil2_volume_content_pane_g5

0xedf8,	// (0x00080937) smil2_volume_content_pane_g6

0xee01,	// (0x00080940) smil2_volume_content_pane_g7

0xee0a,	// (0x00080949) smil2_volume_content_pane_g8

0xee1f,	// (0x0008095e) smil2_volume_content_pane_g9

0xee28,	// (0x00080967) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0008116d) smil2_volume_content_pane_g

0x30d1,	// (0x00074c10) cale_week_day_heading_pane_t1_ParamLimits

0x30ec,	// (0x00074c2b) cale_week_day_heading_pane_t2_ParamLimits

0x3107,	// (0x00074c46) cale_week_day_heading_pane_t3_ParamLimits

0x3122,	// (0x00074c61) cale_week_day_heading_pane_t4_ParamLimits

0x313d,	// (0x00074c7c) cale_week_day_heading_pane_t5_ParamLimits

0x3158,	// (0x00074c97) cale_week_day_heading_pane_t6_ParamLimits

0x3173,	// (0x00074cb2) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00080c8b) cale_week_day_heading_pane_t_ParamLimits

0xbda5,	// (0x0007d8e4) bg_cale_side_pane_ParamLimits

0x318e,	// (0x00074ccd) cale_week_time_pane_t1_ParamLimits

0x31a8,	// (0x00074ce7) cale_week_time_pane_t2_ParamLimits

0x31c2,	// (0x00074d01) cale_week_time_pane_t3_ParamLimits

0x31dc,	// (0x00074d1b) cale_week_time_pane_t4_ParamLimits

0x31f6,	// (0x00074d35) cale_week_time_pane_t5_ParamLimits

0x3210,	// (0x00074d4f) cale_week_time_pane_t6_ParamLimits

0x322e,	// (0x00074d6d) cale_week_time_pane_t7_ParamLimits

0x3250,	// (0x00074d8f) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00080c9a) cale_week_time_pane_t_ParamLimits

0x3274,	// (0x00074db3) cell_cale_week_pane_g2_ParamLimits

0xbda5,	// (0x0007d8e4) bg_cale_side_pane_cp01_ParamLimits

0x43d6,	// (0x00075f15) cale_month_week_pane_t1_ParamLimits

0x43ef,	// (0x00075f2e) cale_month_week_pane_t2_ParamLimits

0x4408,	// (0x00075f47) cale_month_week_pane_t3_ParamLimits

0x4421,	// (0x00075f60) cale_month_week_pane_t4_ParamLimits

0x443a,	// (0x00075f79) cale_month_week_pane_t5_ParamLimits

0x445b,	// (0x00075f9a) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00080d68) cale_month_week_pane_t_ParamLimits

0x459e,	// (0x000760dd) cell_cale_month_pane_g1_ParamLimits

0xb4d2,	// (0x0007d011) main_cale_event_viewer_pane

0xb4d2,	// (0x0007d011) listscroll_cale_event_viewer_pane

0xee31,	// (0x00080970) list_cale_ev_pane

0xee39,	// (0x00080978) scroll_pane_cp023

0xee45,	// (0x00080984) field_cale_ev_pane_ParamLimits

0xee45,	// (0x00080984) field_cale_ev_pane

0xee63,	// (0x000809a2) field_cale_ev_content_pane_ParamLimits

0xee63,	// (0x000809a2) field_cale_ev_content_pane

0xee6f,	// (0x000809ae) field_cale_ev_pane_g1_ParamLimits

0xee6f,	// (0x000809ae) field_cale_ev_pane_g1

0xee7b,	// (0x000809ba) field_cale_ev_pane_g2_ParamLimits

0xee7b,	// (0x000809ba) field_cale_ev_pane_g2

0xee93,	// (0x000809d2) field_cale_ev_pane_g3_ParamLimits

0xee93,	// (0x000809d2) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x00081182) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x00081182) field_cale_ev_pane_g

0xeeab,	// (0x000809ea) field_cale_ev_pane_t1_ParamLimits

0xeeab,	// (0x000809ea) field_cale_ev_pane_t1

0xc33e,	// (0x0007de7d) field_cale_ev_content_pane_t1_ParamLimits

0xc33e,	// (0x0007de7d) field_cale_ev_content_pane_t1

0xca0e,	// (0x0007e54d) bg_button_pane_cp01

0x2e62,	// (0x000749a1) listscroll_cale_week_pane_ParamLimits

0xbd50,	// (0x0007d88f) popup_toolbar_window_cp01

0xbd76,	// (0x0007d8b5) listscroll_cale_week_pane_t1_ParamLimits

0x2e62,	// (0x000749a1) listscroll_cale_day_pane_ParamLimits

0xbd50,	// (0x0007d88f) popup_toolbar_window_cp02

0xc17d,	// (0x0007dcbc) listscroll_cale_day_pane_t1_ParamLimits

0x2e62,	// (0x000749a1) main_cale_month_pane_ParamLimits

0x55cf,	// (0x0007710e) popup_toolbar_window_cp03_ParamLimits

0x55cf,	// (0x0007710e) popup_toolbar_window_cp03

0x4ec2,	// (0x00076a01) main_image_pane_g2_ParamLimits

0x4ec2,	// (0x00076a01) main_image_pane_g2

0x4ece,	// (0x00076a0d) main_image_pane_g3_ParamLimits

0x4ece,	// (0x00076a0d) main_image_pane_g3

0x0002,

0xf43b,	// (0x00080f7a) main_image_pane_g_ParamLimits

0xf43b,	// (0x00080f7a) main_image_pane_g

0xd8ed,	// (0x0007f42c) main_image_pane_t1_ParamLimits

0x4eda,	// (0x00076a19) main_image_pane_t2_ParamLimits

0x4eda,	// (0x00076a19) main_image_pane_t2

0x4eec,	// (0x00076a2b) main_image_pane_t3_ParamLimits

0x4eec,	// (0x00076a2b) main_image_pane_t3

0x4efe,	// (0x00076a3d) main_image_pane_t4_ParamLimits

0x4efe,	// (0x00076a3d) main_image_pane_t4

0x0003,

0xf442,	// (0x00080f81) main_image_pane_t_ParamLimits

0xf442,	// (0x00080f81) main_image_pane_t

0x4f10,	// (0x00076a4f) popup_image_details_window_cp01

0x4f1a,	// (0x00076a59) popup_toobar_trans_pane_cp01_ParamLimits

0x4f1a,	// (0x00076a59) popup_toobar_trans_pane_cp01

0x551f,	// (0x0007705e) popup_image_details_window_ParamLimits

0x551f,	// (0x0007705e) popup_image_details_window

0x552d,	// (0x0007706c) popup_image_focus_window

0xb4dc,	// (0x0007d01b) camera2_autofocus_pane_ParamLimits

0xb4dc,	// (0x0007d01b) camera2_autofocus_pane

0xb4d2,	// (0x0007d011) bg_popup_sub_pane_cp06

0xeec2,	// (0x00080a01) popup_image_focus_window_g1

0xeeca,	// (0x00080a09) popup_image_focus_window_g2

0xeed2,	// (0x00080a11) popup_image_focus_window_g3

0xeeda,	// (0x00080a19) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x00081189) popup_image_focus_window_g

0xeee2,	// (0x00080a21) popup_image_focus_window_t1

0xeef0,	// (0x00080a2f) popup_image_focus_window_t2

0xef00,	// (0x00080a3f) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x00081192) popup_image_focus_window_t

0xbbd3,	// (0x0007d712) camera2_autofocus_pane_g1

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp01

0xef0e,	// (0x00080a4d) popup_image_details_window_g1

0xef21,	// (0x00080a60) popup_image_details_window_g2

0x0002,

0xf665,	// (0x000811a4) popup_image_details_window_g

0xef4a,	// (0x00080a89) popup_image_details_window_t1

0xef5c,	// (0x00080a9b) popup_image_details_window_t2

0xef75,	// (0x00080ab4) popup_image_details_window_t3

0xef89,	// (0x00080ac8) popup_image_details_window_t4

0xefa4,	// (0x00080ae3) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x000811ab) popup_image_details_window_t

0xbc31,	// (0x0007d770) bg_calc_paper_pane_ParamLimits

0xb4d2,	// (0x0007d011) grid_highlight_pane_cp013

0x2bee,	// (0x0007472d) list_calc_pane_ParamLimits

0x2c00,	// (0x0007473f) scroll_pane_cp024

0xbc45,	// (0x0007d784) bg_calc_display_pane_ParamLimits

0x2c08,	// (0x00074747) calc_display_pane_t1_ParamLimits

0x2c1d,	// (0x0007475c) calc_display_pane_t2_ParamLimits

0x2c32,	// (0x00074771) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x00080c0b) calc_display_pane_t_ParamLimits

0x2d0b,	// (0x0007484a) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00080c28) cell_calc_pane_g

0x2d14,	// (0x00074853) cell_calc_pane_t1

0xbc9a,	// (0x0007d7d9) grid_highlight_pane_cp02_ParamLimits

0xbcb0,	// (0x0007d7ef) toolbar_button_pane_cp01_ParamLimits

0xbcb0,	// (0x0007d7ef) toolbar_button_pane_cp01

0xd932,	// (0x0007f471) temp_image_control_pane_ParamLimits

0xd932,	// (0x0007f471) temp_image_control_pane

0xbb7a,	// (0x0007d6b9) main_mp3_pane

0xefbe,	// (0x00080afd) temp_image_control_pane_g1_ParamLimits

0xefbe,	// (0x00080afd) temp_image_control_pane_g1

0xefcc,	// (0x00080b0b) temp_image_control_pane_g2_ParamLimits

0xefcc,	// (0x00080b0b) temp_image_control_pane_g2

0xefde,	// (0x00080b1d) temp_image_control_pane_g3_ParamLimits

0xefde,	// (0x00080b1d) temp_image_control_pane_g3

0x58e5,	// (0x00077424) temp_image_control_pane_g4_ParamLimits

0x58e5,	// (0x00077424) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x000811b6) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x000811b6) temp_image_control_pane_g

0xefbe,	// (0x00080afd) main_mp3_pane_g1

0x58f6,	// (0x00077435) main_mp3_pane_g2

0x0007,

0xf680,	// (0x000811bf) main_mp3_pane_g

0xf013,	// (0x00080b52) main_mp3_pane_t1

0xbbe1,	// (0x0007d720) main_camera_pane_g8_ParamLimits

0xbbe1,	// (0x0007d720) main_camera_pane_g8

0x341e,	// (0x00074f5d) main_video_pane_g7_ParamLimits

0x341e,	// (0x00074f5d) main_video_pane_g7

0xc35c,	// (0x0007de9b) main_camera2_pane_t7_ParamLimits

0xc35c,	// (0x0007de9b) main_camera2_pane_t7

0xbf35,	// (0x0007da74) scroll_pane_cp025_ParamLimits

0xbf35,	// (0x0007da74) scroll_pane_cp025

0xbf49,	// (0x0007da88) scroll_pane_cp026_ParamLimits

0xbf49,	// (0x0007da88) scroll_pane_cp026

0xbf58,	// (0x0007da97) wml_content_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_touch_calib_pane

0x599a,	// (0x000774d9) main_touch_calib_pane_g1

0x59a6,	// (0x000774e5) main_touch_calib_pane_g2

0x59b2,	// (0x000774f1) main_touch_calib_pane_g3

0x59be,	// (0x000774fd) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x000811dd) main_touch_calib_pane_g

0x59ca,	// (0x00077509) main_touch_calib_pane_t1

0x59e3,	// (0x00077522) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x000811e6) main_touch_calib_pane_t

0xc721,	// (0x0007e260) mup_progress_pane_cp02

0xc756,	// (0x0007e295) navi_pane_g1

0xc811,	// (0x0007e350) navi_pane_mp_t3

0xbb7a,	// (0x0007d6b9) main_mp3_pane_ParamLimits

0x560c,	// (0x0007714b) navi_pane_ParamLimits

0xefbe,	// (0x00080afd) main_mp3_pane_g1_ParamLimits

0x58f6,	// (0x00077435) main_mp3_pane_g2_ParamLimits

0x5902,	// (0x00077441) main_mp3_pane_g3_ParamLimits

0x5902,	// (0x00077441) main_mp3_pane_g3

0x590e,	// (0x0007744d) main_mp3_pane_g4_ParamLimits

0x590e,	// (0x0007744d) main_mp3_pane_g4

0xbbd3,	// (0x0007d712) main_mp3_pane_g5_ParamLimits

0xbbd3,	// (0x0007d712) main_mp3_pane_g5

0xefee,	// (0x00080b2d) main_mp3_pane_g6_ParamLimits

0xefee,	// (0x00080b2d) main_mp3_pane_g6

0xeffb,	// (0x00080b3a) main_mp3_pane_g7_ParamLimits

0xeffb,	// (0x00080b3a) main_mp3_pane_g7

0xf007,	// (0x00080b46) main_mp3_pane_g8_ParamLimits

0xf007,	// (0x00080b46) main_mp3_pane_g8

0xf680,	// (0x000811bf) main_mp3_pane_g_ParamLimits

0x591a,	// (0x00077459) main_mp3_pane_t2

0x592a,	// (0x00077469) main_mp3_pane_t3

0xf021,	// (0x00080b60) main_mp3_pane_t4

0xf02f,	// (0x00080b6e) main_mp3_pane_t5

0x0005,

0xf691,	// (0x000811d0) main_mp3_pane_t

0xf03d,	// (0x00080b7c) mup_progress_pane_cp01

0x2776,	// (0x000742b5) aid_zoom_text_secondary2

0xee31,	// (0x00080970) list_cale_ev2_pane

0xee39,	// (0x00080978) scroll_pane_cp023_ParamLimits

0x5a3e,	// (0x0007757d) field_cale_ev2_pane_ParamLimits

0x5a3e,	// (0x0007757d) field_cale_ev2_pane

0x5a67,	// (0x000775a6) field_cale_ev2_pane_g1_ParamLimits

0x5a67,	// (0x000775a6) field_cale_ev2_pane_g1

0x5a73,	// (0x000775b2) field_cale_ev2_pane_g2_ParamLimits

0x5a73,	// (0x000775b2) field_cale_ev2_pane_g2

0x5a8b,	// (0x000775ca) field_cale_ev2_pane_g3_ParamLimits

0x5a8b,	// (0x000775ca) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x000811f1) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x000811f1) field_cale_ev2_pane_g

0x1b86,	// (0x000736c5) field_cale_ev2_pane_t1_ParamLimits

0x1b86,	// (0x000736c5) field_cale_ev2_pane_t1

0x1b9d,	// (0x000736dc) field_cale_ev2_pane_t2_ParamLimits

0x1b9d,	// (0x000736dc) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x000811fa) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x000811fa) field_cale_ev2_pane_t

0x4da2,	// (0x000768e1) main_postcard_pane_g5_ParamLimits

0x4da2,	// (0x000768e1) main_postcard_pane_g5

0x4db0,	// (0x000768ef) main_postcard_pane_g6_ParamLimits

0x4db0,	// (0x000768ef) main_postcard_pane_g6

0xb4dc,	// (0x0007d01b) camera2_autofocus_pane_cp_ParamLimits

0xb4dc,	// (0x0007d01b) camera2_autofocus_pane_cp

0xbb7a,	// (0x0007d6b9) main_mup3_pane

0x5aee,	// (0x0007762d) main_mup3_pane_g1_ParamLimits

0x5aee,	// (0x0007762d) main_mup3_pane_g1

0x5b0f,	// (0x0007764e) main_mup3_pane_g2_ParamLimits

0x5b0f,	// (0x0007764e) main_mup3_pane_g2

0x5b87,	// (0x000776c6) main_mup3_pane_g3_ParamLimits

0x5b87,	// (0x000776c6) main_mup3_pane_g3

0x5bca,	// (0x00077709) main_mup3_pane_g4_ParamLimits

0x5bca,	// (0x00077709) main_mup3_pane_g4

0x5c0d,	// (0x0007774c) main_mup3_pane_g5_ParamLimits

0x5c0d,	// (0x0007774c) main_mup3_pane_g5

0x5c50,	// (0x0007778f) main_mup3_pane_g6_ParamLimits

0x5c50,	// (0x0007778f) main_mup3_pane_g6

0xbbe1,	// (0x0007d720) main_mup3_pane_g7_ParamLimits

0xbbe1,	// (0x0007d720) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0008120a) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0008120a) main_mup3_pane_g

0x5cc6,	// (0x00077805) main_mup3_pane_t1_ParamLimits

0x5cc6,	// (0x00077805) main_mup3_pane_t1

0x5d35,	// (0x00077874) main_mup3_pane_t2_ParamLimits

0x5d35,	// (0x00077874) main_mup3_pane_t2

0x5dfe,	// (0x0007793d) main_mup3_pane_t4_ParamLimits

0x5dfe,	// (0x0007793d) main_mup3_pane_t4

0x5e4c,	// (0x0007798b) main_mup3_pane_t5_ParamLimits

0x5e4c,	// (0x0007798b) main_mup3_pane_t5

0x5efc,	// (0x00077a3b) main_mup3_pane_t6_ParamLimits

0x5efc,	// (0x00077a3b) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0008121b) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0008121b) main_mup3_pane_t

0x5fa8,	// (0x00077ae7) mup3_progress_pane_ParamLimits

0x5fa8,	// (0x00077ae7) mup3_progress_pane

0x6026,	// (0x00077b65) popup_mup3_control_window_ParamLimits

0x6026,	// (0x00077b65) popup_mup3_control_window

0x0035,	// (0x00071b74) popup_mup3_text_window

0x603f,	// (0x00077b7e) mup3_progress_pane_t1

0x605e,	// (0x00077b9d) mup3_progress_pane_t2

0x003d,	// (0x00071b7c) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x00081228) mup3_progress_pane_t

0x005a,	// (0x00071b99) mup_progress_pane_cp03

0xb4d2,	// (0x0007d011) bg_tb_trans_pane_cp04

0x607d,	// (0x00077bbc) mup3_volume_pane

0x6085,	// (0x00077bc4) popup_mup3_control_window_g1

0x608e,	// (0x00077bcd) mup3_volume_pane_g1

0x6097,	// (0x00077bd6) mup3_volume_pane_g2

0x60a0,	// (0x00077bdf) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0008122f) mup3_volume_pane_g

0xb4d2,	// (0x0007d011) bg_tb_trans_pane_cp03

0x006a,	// (0x00071ba9) popup_mup3_text_window_g1

0x0072,	// (0x00071bb1) popup_mup3_text_window_t1

0xbc8d,	// (0x0007d7cc) list_calc_item_pane_g1_ParamLimits

0xeb1f,	// (0x0008065e) mup_volume_pane_cp_g1

0x59fc,	// (0x0007753b) main_touch_calib_pane_t3

0x5a12,	// (0x00077551) main_touch_calib_pane_t4

0x5a28,	// (0x00077567) main_touch_calib_pane_t5

0x272e,	// (0x0007426d) aid_cell_size_toolbar2

0x2736,	// (0x00074275) aid_popup3_width_pane

0x1a71,	// (0x000735b0) aid_zoom_text_msg_primary

0x3320,	// (0x00074e5f) vorec_t7

0xbc51,	// (0x0007d790) bg_calc_paper_pane_g1_ParamLimits

0xbc5d,	// (0x0007d79c) bg_calc_paper_pane_g2_ParamLimits

0xbc69,	// (0x0007d7a8) bg_calc_paper_pane_g3_ParamLimits

0xbc75,	// (0x0007d7b4) bg_calc_paper_pane_g4_ParamLimits

0xbc81,	// (0x0007d7c0) bg_calc_paper_pane_g5_ParamLimits

0x2c71,	// (0x000747b0) bg_calc_paper_pane_g6_ParamLimits

0x2c82,	// (0x000747c1) bg_calc_paper_pane_g7_ParamLimits

0x2c93,	// (0x000747d2) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x00080c12) bg_calc_paper_pane_g_ParamLimits

0x2ca4,	// (0x000747e3) calc_bg_paper_pane_g9_ParamLimits

0xb4dc,	// (0x0007d01b) image_qvga_pane_ParamLimits

0xb4dc,	// (0x0007d01b) image_qvga_pane

0xbb58,	// (0x0007d697) bg_popup_sub_pane_cp04_ParamLimits

0xd869,	// (0x0007f3a8) popup_mup_playback_window_g1_ParamLimits

0xd875,	// (0x0007f3b4) popup_mup_playback_window_t1_ParamLimits

0xd88a,	// (0x0007f3c9) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x00080f75) popup_mup_playback_window_t_ParamLimits

0xbbd3,	// (0x0007d712) main_mup2_pane_g3_ParamLimits

0xbbd3,	// (0x0007d712) main_mup2_pane_g3

0x3605,	// (0x00075144) popup_toolbar_window_cp04

0xdc6c,	// (0x0007f7ab) popup_call2_audio_second_window_g3_ParamLimits

0xdc6c,	// (0x0007f7ab) popup_call2_audio_second_window_g3

0xe084,	// (0x0007fbc3) popup_call2_audio_first_window_g4_ParamLimits

0xe084,	// (0x0007fbc3) popup_call2_audio_first_window_g4

0xe6b9,	// (0x000801f8) popup_call2_audio_in_window_g4_ParamLimits

0xe6b9,	// (0x000801f8) popup_call2_audio_in_window_g4

0x4eb5,	// (0x000769f4) aid_area_sk_bg_cut_ParamLimits

0x4eb5,	// (0x000769f4) aid_area_sk_bg_cut

0xd89f,	// (0x0007f3de) aid_area_sk_bg_cut_2_ParamLimits

0xd89f,	// (0x0007f3de) aid_area_sk_bg_cut_2

0xb4d2,	// (0x0007d011) aid_placing_details_win

0xb4d2,	// (0x0007d011) aid_placing_details_win_2

0xbbd3,	// (0x0007d712) camera2_autofocus_pane_g1_ParamLimits

0x2983,	// (0x000744c2) popup_fixed_preview_cale_window_ParamLimits

0x2983,	// (0x000744c2) popup_fixed_preview_cale_window

0xc88f,	// (0x0007e3ce) navi_slider_pane_g3

0xc898,	// (0x0007e3d7) navi_slider_pane_g4

0xc8a1,	// (0x0007e3e0) navi_slider_pane_g5

0xc88f,	// (0x0007e3ce) navi_slider_pane_g6

0x4a31,	// (0x00076570) navi_slider_pane_g7

0xc9db,	// (0x0007e51a) mup_scale_pane_g3

0xc9e4,	// (0x0007e523) mup_scale_pane_g4

0xc9ed,	// (0x0007e52c) mup_scale_pane_g5

0x4c32,	// (0x00076771) mup_scale_pane_g6

0x4c3b,	// (0x0007677a) mup_scale_pane_g7

0xbe19,	// (0x0007d958) cams2_slider_pane_g3

0xbe19,	// (0x0007d958) cams2_slider_pane_g4

0xbe19,	// (0x0007d958) cams2_slider_pane_g5

0xbe19,	// (0x0007d958) cams2_slider_pane_g6

0xbe19,	// (0x0007d958) cams2_slider_pane_g7

0xbe19,	// (0x0007d958) camera2_autofocus_pane_cp_g1

0xe98f,	// (0x000804ce) bg_popup_preview_window_pane_cp02_ParamLimits

0xe98f,	// (0x000804ce) bg_popup_preview_window_pane_cp02

0x0080,	// (0x00071bbf) list_fp_cale_pane_ParamLimits

0x0080,	// (0x00071bbf) list_fp_cale_pane

0x008c,	// (0x00071bcb) popup_fixed_preview_cale_window_t1_ParamLimits

0x008c,	// (0x00071bcb) popup_fixed_preview_cale_window_t1

0x60a9,	// (0x00077be8) popup_fixed_preview_cale_window_t2_ParamLimits

0x60a9,	// (0x00077be8) popup_fixed_preview_cale_window_t2

0x60be,	// (0x00077bfd) popup_fixed_preview_cale_window_t3_ParamLimits

0x60be,	// (0x00077bfd) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x00081236) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x00081236) popup_fixed_preview_cale_window_t

0x60d3,	// (0x00077c12) list_single_fp_cale_pane_ParamLimits

0x60d3,	// (0x00077c12) list_single_fp_cale_pane

0x00aa,	// (0x00071be9) list_single_fp_cale_pane_g1_ParamLimits

0x00aa,	// (0x00071be9) list_single_fp_cale_pane_g1

0x00b6,	// (0x00071bf5) list_single_fp_cale_pane_g2_ParamLimits

0x00b6,	// (0x00071bf5) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0008123d) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0008123d) list_single_fp_cale_pane_g

0x00cf,	// (0x00071c0e) list_single_fp_cale_pane_t1_ParamLimits

0x00cf,	// (0x00071c0e) list_single_fp_cale_pane_t1

0x00e1,	// (0x00071c20) list_single_fp_cale_pane_t2_ParamLimits

0x00e1,	// (0x00071c20) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x00081244) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x00081244) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb4d2,	// (0x0007d011) main_dialer_pane

0xb4d2,	// (0x0007d011) aid_cell_size_keypad

0xb4d2,	// (0x0007d011) dialer_ne_pane

0xb4d2,	// (0x0007d011) grid_dialer_command_1_pane

0xb4d2,	// (0x0007d011) grid_dialer_command_2_pane

0xb4d2,	// (0x0007d011) grid_dialer_keypad_pane

0xe2e4,	// (0x0007fe23) bg_popup_call_pane_cp06_ParamLimits

0xe2e4,	// (0x0007fe23) bg_popup_call_pane_cp06

0xe2e4,	// (0x0007fe23) dialer_ne_clear_pane_ParamLimits

0xe2e4,	// (0x0007fe23) dialer_ne_clear_pane

0xbe19,	// (0x0007d958) dialer_ne_pane_g1

0xc35c,	// (0x0007de9b) dialer_ne_pane_t1_ParamLimits

0xc35c,	// (0x0007de9b) dialer_ne_pane_t1

0x032d,	// (0x00071e6c) dialer_ne_pane_t2_ParamLimits

0x032d,	// (0x00071e6c) dialer_ne_pane_t2

0x60e6,	// (0x00077c25) dialer_ne_pane_t3_ParamLimits

0x60e6,	// (0x00077c25) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x00081249) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x00081249) dialer_ne_pane_t

0x60e6,	// (0x00077c25) dialer_ne_pane_t3_copy1_ParamLimits

0x60e6,	// (0x00077c25) dialer_ne_pane_t3_copy1

0x0114,	// (0x00071c53) cell_dialer_keypad_pane_ParamLimits

0x0114,	// (0x00071c53) cell_dialer_keypad_pane

0xbb7a,	// (0x0007d6b9) cell_dialer_command_1_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) cell_dialer_command_1_pane

0x012b,	// (0x00071c6a) cell_dialer_command_2_pane_ParamLimits

0x012b,	// (0x00071c6a) cell_dialer_command_2_pane

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp02_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp02

0xbbd3,	// (0x0007d712) cell_dialer_keypad_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) cell_dialer_keypad_pane_g1

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp03_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp03

0xbbd3,	// (0x0007d712) cell_dialer_command_1_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) cell_dialer_command_1_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp04

0xbe19,	// (0x0007d958) cell_dialer_command_2_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp06

0xbe19,	// (0x0007d958) dialer_ne_clear_pane_g1

0xc762,	// (0x0007e2a1) navi_pane_g2

0xc790,	// (0x0007e2cf) navi_pane_g3

0x0002,

0xf339,	// (0x00080e78) navi_pane_g

0xc81f,	// (0x0007e35e) navi_pane_mv_g2

0xc846,	// (0x0007e385) navi_pane_mv_g5

0x49fc,	// (0x0007653b) navi_pane_mv_t1

0xbc45,	// (0x0007d784) main_clock2_pane

0xb4dc,	// (0x0007d01b) main_clock2_list_pane_ParamLimits

0xb4dc,	// (0x0007d01b) main_clock2_list_pane

0x615c,	// (0x00077c9b) main_clock2_pane_t1_ParamLimits

0x615c,	// (0x00077c9b) main_clock2_pane_t1

0x618a,	// (0x00077cc9) main_clock2_pane_t2_ParamLimits

0x618a,	// (0x00077cc9) main_clock2_pane_t2

0x0004,

0xf716,	// (0x00081255) main_clock2_pane_t_ParamLimits

0xf716,	// (0x00081255) main_clock2_pane_t

0x61ef,	// (0x00077d2e) popup_clock_analogue_window_cp03_ParamLimits

0x61ef,	// (0x00077d2e) popup_clock_analogue_window_cp03

0x620d,	// (0x00077d4c) popup_clock_digital_window_cp02_ParamLimits

0x620d,	// (0x00077d4c) popup_clock_digital_window_cp02

0x6282,	// (0x00077dc1) main_clock2_list_single_pane_ParamLimits

0x6282,	// (0x00077dc1) main_clock2_list_single_pane

0xbdf7,	// (0x0007d936) list_highlight_pane_cp05

0x0172,	// (0x00071cb1) main_clock2_list_single_pane_t1

0x3605,	// (0x00075144) popup_toolbar_window_cp04_ParamLimits

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g2

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g3_ParamLimits

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g3

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g4

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g5_ParamLimits

0xbbe1,	// (0x0007d720) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x00081199) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x00081199) camera2_autofocus_pane_g

0x5aaf,	// (0x000775ee) camera2_autofocus_pane_cp_g2

0x5ab7,	// (0x000775f6) camera2_autofocus_pane_cp_g3

0x5abf,	// (0x000775fe) camera2_autofocus_pane_cp_g4

0x5ac7,	// (0x00077606) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x000811ff) camera2_autofocus_pane_cp_g

0xb4d2,	// (0x0007d011) popup_dialer_spcha_window

0xb4d2,	// (0x0007d011) bg_popup_sub_pane_cp07

0xb4d2,	// (0x0007d011) list_spcha_pane

0x0180,	// (0x00071cbf) list_single_spcha_pane_ParamLimits

0x0180,	// (0x00071cbf) list_single_spcha_pane

0xb4d2,	// (0x0007d011) list_highlight_pane_cp06

0xc397,	// (0x0007ded6) list_single_spcha_pane_t1

0xe463,	// (0x0007ffa2) popup_call2_audio_out_window_g4_ParamLimits

0xe463,	// (0x0007ffa2) popup_call2_audio_out_window_g4

0xb4d2,	// (0x0007d011) main_imed2_pane

0x5535,	// (0x00077074) popup_imed_adjust2_window

0x5548,	// (0x00077087) popup_imed_trans_window_ParamLimits

0x5548,	// (0x00077087) popup_imed_trans_window

0xebf4,	// (0x00080733) popup_blid_sat_info2_window_t1

0xec02,	// (0x00080741) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0008112e) popup_blid_sat_info2_window_t

0x6337,	// (0x00077e76) aid_size_cell_colour_35

0x6351,	// (0x00077e90) aid_size_cell_colour_112

0x6368,	// (0x00077ea7) aid_size_cell_effect

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp02

0xc9c6,	// (0x0007e505) heading_imed_pane

0x6382,	// (0x00077ec1) listscroll_imed_pane

0x0192,	// (0x00071cd1) heading_imed_pane_g1

0x019a,	// (0x00071cd9) heading_imed_pane_t1

0x01a8,	// (0x00071ce7) grid_imed_colour_35_pane_ParamLimits

0x01a8,	// (0x00071ce7) grid_imed_colour_35_pane

0x638e,	// (0x00077ecd) grid_imed_effect_pane

0x01bf,	// (0x00071cfe) list_imed_aspect_pane

0x639e,	// (0x00077edd) scroll_pane_cp027_ParamLimits

0x639e,	// (0x00077edd) scroll_pane_cp027

0x63aa,	// (0x00077ee9) cell_imed_effect_pane_ParamLimits

0x63aa,	// (0x00077ee9) cell_imed_effect_pane

0x01c7,	// (0x00071d06) cell_imed_colour_pane_ParamLimits

0x01c7,	// (0x00071d06) cell_imed_colour_pane

0x0209,	// (0x00071d48) cell_imed_colour_pane_g1_ParamLimits

0x0209,	// (0x00071d48) cell_imed_colour_pane_g1

0x021a,	// (0x00071d59) hgihlgiht_grid_pane_cp016_ParamLimits

0x021a,	// (0x00071d59) hgihlgiht_grid_pane_cp016

0x63c2,	// (0x00077f01) cell_imed_effect_pane_g1

0x63ca,	// (0x00077f09) grid_highlight_pane_cp017

0x022b,	// (0x00071d6a) list_imed_single_pane_ParamLimits

0x022b,	// (0x00071d6a) list_imed_single_pane

0xb4d2,	// (0x0007d011) list_highlight_pane_cp07

0x0240,	// (0x00071d7f) list_imed_aspect_pane_comp1_t1

0xc996,	// (0x0007e4d5) bg_tb_trans_pane_cp05

0x0262,	// (0x00071da1) popup_imed_adjust2_window_g1

0x0289,	// (0x00071dc8) popup_imed_adjust2_window_t1

0x02a1,	// (0x00071de0) slider_imed_adjust_pane

0x02b5,	// (0x00071df4) slider_imed_adjust_pane_g1

0x02c5,	// (0x00071e04) slider_imed_adjust_pane_g2

0x02d5,	// (0x00071e14) slider_imed_adjust_pane_g3

0x02e6,	// (0x00071e25) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x00081272) slider_imed_adjust_pane_g

0x63d3,	// (0x00077f12) aid_size_cell_clipart2

0x63df,	// (0x00077f1e) grid_imed_clipart_pane

0x02f7,	// (0x00071e36) scroll_pane_cp031

0x63e9,	// (0x00077f28) cell_imed_clipart_pane_ParamLimits

0x63e9,	// (0x00077f28) cell_imed_clipart_pane

0x640b,	// (0x00077f4a) cell_imed_clipart_pane_g1

0xb4d2,	// (0x0007d011) grid_highlight_pane_cp014

0x613e,	// (0x00077c7d) main_clock2_pane_g1_ParamLimits

0x613e,	// (0x00077c7d) main_clock2_pane_g1

0x6229,	// (0x00077d68) aid_call2_pane_cp10

0x623b,	// (0x00077d7a) aid_call_pane_cp10

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g1

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g2

0x624d,	// (0x00077d8c) popup_clock_analogue_window_cp10_g3

0x624d,	// (0x00077d8c) popup_clock_analogue_window_cp10_g4

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x00081260) popup_clock_analogue_window_cp10_g

0x6263,	// (0x00077da2) popup_clock_analogue_window_cp10_t1

0x6294,	// (0x00077dd3) clock_digital_number_pane_cp10_ParamLimits

0x6294,	// (0x00077dd3) clock_digital_number_pane_cp10

0x62ae,	// (0x00077ded) clock_digital_number_pane_cp11_ParamLimits

0x62ae,	// (0x00077ded) clock_digital_number_pane_cp11

0x62c8,	// (0x00077e07) clock_digital_number_pane_cp12_ParamLimits

0x62c8,	// (0x00077e07) clock_digital_number_pane_cp12

0x62e2,	// (0x00077e21) clock_digital_number_pane_cp13_ParamLimits

0x62e2,	// (0x00077e21) clock_digital_number_pane_cp13

0x62fc,	// (0x00077e3b) clock_digital_separator_pane_cp10_ParamLimits

0x62fc,	// (0x00077e3b) clock_digital_separator_pane_cp10

0x6316,	// (0x00077e55) popup_clock_digital_window_cp02_t1_ParamLimits

0x6316,	// (0x00077e55) popup_clock_digital_window_cp02_t1

0xbb50,	// (0x0007d68f) clock_digital_number_pane_cp10_g1

0xbb50,	// (0x0007d68f) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0008127b) clock_digital_number_pane_cp10_g

0xbb50,	// (0x0007d68f) clock_digital_separator_pane_cp10_g1

0xbb50,	// (0x0007d68f) clock_digital_separator_pane_g2_cp10

0xc84e,	// (0x0007e38d) navi_pane_vded_g4

0xc857,	// (0x0007e396) navi_pane_vded_g5

0xc860,	// (0x0007e39f) navi_pane_vded_t1

0xb4d2,	// (0x0007d011) main_vded_pane

0x6414,	// (0x00077f53) main_vded_pane_g1

0x6420,	// (0x00077f5f) main_vded_pane_g2

0x642a,	// (0x00077f69) main_vded_pane_g3

0x0002,

0xf741,	// (0x00081280) main_vded_pane_g

0x6434,	// (0x00077f73) main_vded_pane_t1

0x6442,	// (0x00077f81) main_vded_pane_t2

0x0001,

0xf748,	// (0x00081287) main_vded_pane_t

0x6450,	// (0x00077f8f) vded_slider_pane

0x645a,	// (0x00077f99) vded_video_pane

0x02ff,	// (0x00071e3e) vded_video_pane_g1

0x6464,	// (0x00077fa3) vded_video_pane_g2

0xbe19,	// (0x0007d958) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0008128c) vded_video_pane_g

0x0309,	// (0x00071e48) vded_slider_pane_g1

0xeb1f,	// (0x0008065e) vded_slider_pane_g2

0x0312,	// (0x00071e51) vded_slider_pane_g3

0x031b,	// (0x00071e5a) vded_slider_pane_g4

0x0324,	// (0x00071e63) vded_slider_pane_g5

0x0004,

0xf754,	// (0x00081293) vded_slider_pane_g

0x6018,	// (0x00077b57) mup3_rocker_pane_ParamLimits

0x6018,	// (0x00077b57) mup3_rocker_pane

0x646d,	// (0x00077fac) mup3_control_keys_pane_g1

0x6475,	// (0x00077fb4) mup3_control_keys_pane_g2

0x647d,	// (0x00077fbc) mup3_control_keys_pane_g3

0x6485,	// (0x00077fc4) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0008129e) mup3_control_keys_pane_g

0x29ab,	// (0x000744ea) popup_toolbar2_fixed_window_cp01_ParamLimits

0x29ab,	// (0x000744ea) popup_toolbar2_fixed_window_cp01

0x6032,	// (0x00077b71) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6032,	// (0x00077b71) popup_toolbar2_fixed_window_cp02

0xddde,	// (0x0007f91d) popup_call2_audio_second_window_t4_ParamLimits

0xddde,	// (0x0007f91d) popup_call2_audio_second_window_t4

0xe328,	// (0x0007fe67) popup_call2_audio_first_window_t6_ParamLimits

0xe328,	// (0x0007fe67) popup_call2_audio_first_window_t6

0xe566,	// (0x000800a5) popup_call2_audio_out_window_t6_ParamLimits

0xe566,	// (0x000800a5) popup_call2_audio_out_window_t6

0xb4d2,	// (0x0007d011) main_vitu_pane

0xb4dc,	// (0x0007d01b) aid_size_cell_itu_ParamLimits

0xb4dc,	// (0x0007d01b) aid_size_cell_itu

0xb4dc,	// (0x0007d01b) bg_popup_window_pane_cp08_ParamLimits

0xb4dc,	// (0x0007d01b) bg_popup_window_pane_cp08

0xb4dc,	// (0x0007d01b) field_vitu_entry_pane_ParamLimits

0xb4dc,	// (0x0007d01b) field_vitu_entry_pane

0xb4dc,	// (0x0007d01b) grid_vitu_function_pane_ParamLimits

0xb4dc,	// (0x0007d01b) grid_vitu_function_pane

0xb4dc,	// (0x0007d01b) grid_vitu_itu_pane_ParamLimits

0xb4dc,	// (0x0007d01b) grid_vitu_itu_pane

0xb4dc,	// (0x0007d01b) cell_vitu_itu_pane_ParamLimits

0xb4dc,	// (0x0007d01b) cell_vitu_itu_pane

0xb4dc,	// (0x0007d01b) cell_vitu_function_pane_ParamLimits

0xb4dc,	// (0x0007d01b) cell_vitu_function_pane

0xbb7a,	// (0x0007d6b9) bg_popup_sub_pane_cp08_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_popup_sub_pane_cp08

0xbe33,	// (0x0007d972) field_vitu_entry_pane_t1_ParamLimits

0xbe33,	// (0x0007d972) field_vitu_entry_pane_t1

0x032d,	// (0x00071e6c) field_vitu_entry_pane_t2_ParamLimits

0x032d,	// (0x00071e6c) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x000812a7) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x000812a7) field_vitu_entry_pane_t

0xe2e4,	// (0x0007fe23) bg_button_pane_cp05_ParamLimits

0xe2e4,	// (0x0007fe23) bg_button_pane_cp05

0x034a,	// (0x00071e89) cell_vitu_itu_pane_g1

0xc9b2,	// (0x0007e4f1) cell_vitu_itu_pane_t1_ParamLimits

0xc9b2,	// (0x0007e4f1) cell_vitu_itu_pane_t1

0xc9b2,	// (0x0007e4f1) cell_vitu_itu_pane_t2_ParamLimits

0xc9b2,	// (0x0007e4f1) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x000812ac) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x000812ac) cell_vitu_itu_pane_t

0xb4d2,	// (0x0007d011) bg_button_pane_cp07

0xbe19,	// (0x0007d958) cell_vitu_function_pane_g1

0x2b15,	// (0x00074654) main_calc_pane_g1

0x276a,	// (0x000742a9) aid_visual_content_pane

0xb4d2,	// (0x0007d011) main_vradio_pane

0xbbe1,	// (0x0007d720) main_vradio_pane_g1_ParamLimits

0xbbe1,	// (0x0007d720) main_vradio_pane_g1

0xbbe1,	// (0x0007d720) main_vradio_pane_g2_ParamLimits

0xbbe1,	// (0x0007d720) main_vradio_pane_g2

0x0001,

0xf774,	// (0x000812b3) main_vradio_pane_g_ParamLimits

0xf774,	// (0x000812b3) main_vradio_pane_g

0xc35c,	// (0x0007de9b) main_vradio_pane_t1_ParamLimits

0xc35c,	// (0x0007de9b) main_vradio_pane_t1

0xc35c,	// (0x0007de9b) main_vradio_pane_t2_ParamLimits

0xc35c,	// (0x0007de9b) main_vradio_pane_t2

0xc35c,	// (0x0007de9b) main_vradio_pane_t3_ParamLimits

0xc35c,	// (0x0007de9b) main_vradio_pane_t3

0x0002,

0xf779,	// (0x000812b8) main_vradio_pane_t_ParamLimits

0xf779,	// (0x000812b8) main_vradio_pane_t

0xb4dc,	// (0x0007d01b) vradio_rocker_control_pane_ParamLimits

0xb4dc,	// (0x0007d01b) vradio_rocker_control_pane

0xb4dc,	// (0x0007d01b) vradio_station_info_pane_ParamLimits

0xb4dc,	// (0x0007d01b) vradio_station_info_pane

0xbb7a,	// (0x0007d6b9) vradio_frequency_info_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) vradio_frequency_info_pane

0xbe19,	// (0x0007d958) vradio_station_info_pane_g1

0xc9b2,	// (0x0007e4f1) vradio_station_info_pane_t1_ParamLimits

0xc9b2,	// (0x0007e4f1) vradio_station_info_pane_t1

0xc35c,	// (0x0007de9b) vradio_station_info_pane_t2_ParamLimits

0xc35c,	// (0x0007de9b) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x000812bf) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x000812bf) vradio_station_info_pane_t

0xb4d2,	// (0x0007d011) vradio_tuning_pane

0x6495,	// (0x00077fd4) vradio_rocker_control_pane_g1

0x0366,	// (0x00071ea5) vradio_rocker_control_pane_g2

0x649d,	// (0x00077fdc) vradio_rocker_control_pane_g3

0x64a5,	// (0x00077fe4) vradio_rocker_control_pane_g4

0x64ad,	// (0x00077fec) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x000812c4) vradio_rocker_control_pane_g

0xbe19,	// (0x0007d958) vradio_frequency_info_pane_g1

0xbe33,	// (0x0007d972) vradio_frequency_info_pane_t1_ParamLimits

0xbe33,	// (0x0007d972) vradio_frequency_info_pane_t1

0x64b5,	// (0x00077ff4) vradio_tuning_pane_g1

0x64c2,	// (0x00078001) vradio_tuning_pane_t1

0x27b3,	// (0x000742f2) area_side_right_pane_ParamLimits

0x27b3,	// (0x000742f2) area_side_right_pane

0xe956,	// (0x00080495) status_small_pane_g1

0xe95e,	// (0x0008049d) status_small_pane_g2

0xe967,	// (0x000804a6) status_small_pane_g3

0xe970,	// (0x000804af) status_small_pane_g4

0x0003,

0xf551,	// (0x00081090) status_small_pane_g

0xe979,	// (0x000804b8) status_small_pane_t1

0xb4d2,	// (0x0007d011) main_video3_pane

0x036e,	// (0x00071ead) cams_zoom_vslider_pane

0x0376,	// (0x00071eb5) image3_wide_pane_ParamLimits

0x0376,	// (0x00071eb5) image3_wide_pane

0x0390,	// (0x00071ecf) image3_wide_small_pane

0x039c,	// (0x00071edb) main_video3_pane_g1_ParamLimits

0x039c,	// (0x00071edb) main_video3_pane_g1

0x03b8,	// (0x00071ef7) main_video3_pane_g2_ParamLimits

0x03b8,	// (0x00071ef7) main_video3_pane_g2

0x0001,

0xf790,	// (0x000812cf) main_video3_pane_g_ParamLimits

0xf790,	// (0x000812cf) main_video3_pane_g

0x03d4,	// (0x00071f13) main_video3_pane_t1_ParamLimits

0x03d4,	// (0x00071f13) main_video3_pane_t1

0x03ff,	// (0x00071f3e) main_video3_pane_t2_ParamLimits

0x03ff,	// (0x00071f3e) main_video3_pane_t2

0x042a,	// (0x00071f69) main_video3_pane_t3_ParamLimits

0x042a,	// (0x00071f69) main_video3_pane_t3

0x0002,

0xf795,	// (0x000812d4) main_video3_pane_t_ParamLimits

0xf795,	// (0x000812d4) main_video3_pane_t

0x0457,	// (0x00071f96) cams_zoom_vslider_pane_g1

0x0460,	// (0x00071f9f) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x000812db) cams_zoom_vslider_pane_g

0x0468,	// (0x00071fa7) small_slider_vertical_pane

0xbe19,	// (0x0007d958) small_slider_vertical_pane_g1

0xbe19,	// (0x0007d958) small_slider_vertical_pane_g2

0x0470,	// (0x00071faf) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x000812e0) small_slider_vertical_pane_g

0xb4d2,	// (0x0007d011) main_hwr_training_pane

0x0479,	// (0x00071fb8) hwr_training_instruct_pane_ParamLimits

0x0479,	// (0x00071fb8) hwr_training_instruct_pane

0x64d1,	// (0x00078010) hwr_training_navi_pane_ParamLimits

0x64d1,	// (0x00078010) hwr_training_navi_pane

0x64eb,	// (0x0007802a) hwr_training_write_pane_ParamLimits

0x64eb,	// (0x0007802a) hwr_training_write_pane

0xb4d2,	// (0x0007d011) bg_frame_shadow_pane

0x04b0,	// (0x00071fef) hwr_training_write_pane_g1

0x04b8,	// (0x00071ff7) hwr_training_write_pane_g2

0x04c0,	// (0x00071fff) hwr_training_write_pane_g3

0x04c8,	// (0x00072007) hwr_training_write_pane_g4

0x04d0,	// (0x0007200f) hwr_training_write_pane_g5

0x04d8,	// (0x00072017) hwr_training_write_pane_g6

0x04e0,	// (0x0007201f) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x000812e7) hwr_training_write_pane_g

0x6523,	// (0x00078062) hwr_training_navi_pane_g1_ParamLimits

0x6523,	// (0x00078062) hwr_training_navi_pane_g1

0x6535,	// (0x00078074) hwr_training_navi_pane_g2_ParamLimits

0x6535,	// (0x00078074) hwr_training_navi_pane_g2

0x6547,	// (0x00078086) hwr_training_navi_pane_g3_ParamLimits

0x6547,	// (0x00078086) hwr_training_navi_pane_g3

0x6557,	// (0x00078096) hwr_training_navi_pane_g4_ParamLimits

0x6557,	// (0x00078096) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x000812f6) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x000812f6) hwr_training_navi_pane_g

0x6571,	// (0x000780b0) hwr_training_navi_pane_t1

0x657f,	// (0x000780be) list_single_hwr_training_instruct_pane_ParamLimits

0x657f,	// (0x000780be) list_single_hwr_training_instruct_pane

0x04e8,	// (0x00072027) list_single_hwr_training_instruct_pane_t1

0xecf5,	// (0x00080834) bg_frame_shadow_pane_g1

0x04f7,	// (0x00072036) bg_frame_shadow_pane_g2

0x04ff,	// (0x0007203e) bg_frame_shadow_pane_g3

0x0507,	// (0x00072046) bg_frame_shadow_pane_g4

0x050f,	// (0x0007204e) bg_frame_shadow_pane_g5

0x0517,	// (0x00072056) bg_frame_shadow_pane_g6

0x051f,	// (0x0007205e) bg_frame_shadow_pane_g7

0xbcf4,	// (0x0007d833) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x00081301) bg_frame_shadow_pane_g

0xb4d2,	// (0x0007d011) main_video_tele_dialer_pane

0x65a4,	// (0x000780e3) aid_size_cell_video_keypad_ParamLimits

0x65a4,	// (0x000780e3) aid_size_cell_video_keypad

0x65b4,	// (0x000780f3) grid_video_dialer_keypad_pane_ParamLimits

0x65b4,	// (0x000780f3) grid_video_dialer_keypad_pane

0x65e8,	// (0x00078127) video_down_pane_cp_ParamLimits

0x65e8,	// (0x00078127) video_down_pane_cp

0x6612,	// (0x00078151) cell_video_dialer_keypad_pane_ParamLimits

0x6612,	// (0x00078151) cell_video_dialer_keypad_pane

0x0527,	// (0x00072066) bg_button_pane_cp08_ParamLimits

0x0527,	// (0x00072066) bg_button_pane_cp08

0x6627,	// (0x00078166) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6627,	// (0x00078166) cell_video_dialer_keypad_pane_g1

0x600c,	// (0x00077b4b) mup3_rocker2_pane_ParamLimits

0x600c,	// (0x00077b4b) mup3_rocker2_pane

0xbe19,	// (0x0007d958) mup3_rocker2_pane_g1

0x54a5,	// (0x00076fe4) main_dialer2_pane

0xb4d2,	// (0x0007d011) main_mp4_pane

0x667c,	// (0x000781bb) main_mp4_pane_g1_ParamLimits

0x667c,	// (0x000781bb) main_mp4_pane_g1

0x668a,	// (0x000781c9) main_mp4_pane_g2_ParamLimits

0x668a,	// (0x000781c9) main_mp4_pane_g2

0x6698,	// (0x000781d7) main_mp4_pane_g3_ParamLimits

0x6698,	// (0x000781d7) main_mp4_pane_g3

0x66dd,	// (0x0007821c) main_mp4_pane_g4_ParamLimits

0x66dd,	// (0x0007821c) main_mp4_pane_g4

0x670b,	// (0x0007824a) main_mp4_pane_g5_ParamLimits

0x670b,	// (0x0007824a) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x00081321) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x00081321) main_mp4_pane_g

0x677f,	// (0x000782be) main_mp4_pane_t1_ParamLimits

0x677f,	// (0x000782be) main_mp4_pane_t1

0x67db,	// (0x0007831a) main_mp4_pane_t2_ParamLimits

0x67db,	// (0x0007831a) main_mp4_pane_t2

0x0533,	// (0x00072072) main_mp4_pane_t3_ParamLimits

0x0533,	// (0x00072072) main_mp4_pane_t3

0x682d,	// (0x0007836c) main_mp4_pane_t4_ParamLimits

0x682d,	// (0x0007836c) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x00081332) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x00081332) main_mp4_pane_t

0x6871,	// (0x000783b0) mp4_progress_pane_ParamLimits

0x6871,	// (0x000783b0) mp4_progress_pane

0x68bb,	// (0x000783fa) mp4_rocker_pane_ParamLimits

0x68bb,	// (0x000783fa) mp4_rocker_pane

0x0561,	// (0x000720a0) mp4_progress_pane_t1

0x057a,	// (0x000720b9) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0008133b) mp4_progress_pane_t

0x0593,	// (0x000720d2) mup_progress_pane_cp04

0xbe19,	// (0x0007d958) mp4_rocker_pane_g1

0x68db,	// (0x0007841a) aid_cell_size_keypad2_ParamLimits

0x68db,	// (0x0007841a) aid_cell_size_keypad2

0x68eb,	// (0x0007842a) dialer2_ne_pane_ParamLimits

0x68eb,	// (0x0007842a) dialer2_ne_pane

0x68f9,	// (0x00078438) grid_dialer2_keypad_pane_ParamLimits

0x68f9,	// (0x00078438) grid_dialer2_keypad_pane

0x088d,	// (0x000723cc) bg_popup_call_pane_cp07_ParamLimits

0x088d,	// (0x000723cc) bg_popup_call_pane_cp07

0x6909,	// (0x00078448) dialer2_ne_pane_t1_ParamLimits

0x6909,	// (0x00078448) dialer2_ne_pane_t1

0x692e,	// (0x0007846d) cell_dialer2_keypad_pane_ParamLimits

0x692e,	// (0x0007846d) cell_dialer2_keypad_pane

0x05b8,	// (0x000720f7) bg_button_pane_pane_cp04_ParamLimits

0x05b8,	// (0x000720f7) bg_button_pane_pane_cp04

0x6943,	// (0x00078482) cell_dialer2_keypad_pane_g1_ParamLimits

0x6943,	// (0x00078482) cell_dialer2_keypad_pane_g1

0x34c7,	// (0x00075006) aid_placing_vt_set_content_ParamLimits

0x34c7,	// (0x00075006) aid_placing_vt_set_content

0x34f3,	// (0x00075032) aid_placing_vt_set_title_ParamLimits

0x34f3,	// (0x00075032) aid_placing_vt_set_title

0xb4d2,	// (0x0007d011) main_image3_pane

0x69dd,	// (0x0007851c) area_side_right_pane_cp01_ParamLimits

0x69dd,	// (0x0007851c) area_side_right_pane_cp01

0xbbef,	// (0x0007d72e) main_image3_pane_g1_ParamLimits

0xbbef,	// (0x0007d72e) main_image3_pane_g1

0x6a0a,	// (0x00078549) main_image3_pane_g2_ParamLimits

0x6a0a,	// (0x00078549) main_image3_pane_g2

0x6a23,	// (0x00078562) main_image3_pane_g3_ParamLimits

0x6a23,	// (0x00078562) main_image3_pane_g3

0x6a3c,	// (0x0007857b) main_image3_pane_g4_ParamLimits

0x6a3c,	// (0x0007857b) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0008134a) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0008134a) main_image3_pane_g

0x6a55,	// (0x00078594) main_image3_pane_t1_ParamLimits

0x6a55,	// (0x00078594) main_image3_pane_t1

0x6a7a,	// (0x000785b9) main_image3_pane_t2_ParamLimits

0x6a7a,	// (0x000785b9) main_image3_pane_t2

0x6a99,	// (0x000785d8) main_image3_pane_t3_ParamLimits

0x6a99,	// (0x000785d8) main_image3_pane_t3

0x0003,

0xf814,	// (0x00081353) main_image3_pane_t_ParamLimits

0xf814,	// (0x00081353) main_image3_pane_t

0xb4dc,	// (0x0007d01b) grid_sctrl_middle_pane_cp01_ParamLimits

0xb4dc,	// (0x0007d01b) grid_sctrl_middle_pane_cp01

0x6afa,	// (0x00078639) cell_sctrl_middle_pane_cp01_ParamLimits

0x6afa,	// (0x00078639) cell_sctrl_middle_pane_cp01

0x6b0b,	// (0x0007864a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6b0b,	// (0x0007864a) cell_sctrl_middle_pane_cp01_g1

0xb4d2,	// (0x0007d011) main_call4_pane

0x6b18,	// (0x00078657) aid_size_button_call4_ParamLimits

0x6b18,	// (0x00078657) aid_size_button_call4

0x6b4e,	// (0x0007868d) call4_windows_pane_ParamLimits

0x6b4e,	// (0x0007868d) call4_windows_pane

0x6b63,	// (0x000786a2) grid_call4_button_pane_ParamLimits

0x6b63,	// (0x000786a2) grid_call4_button_pane

0x6b91,	// (0x000786d0) call4_windows_conf_pane

0x6ba8,	// (0x000786e7) popup_call4_audio_first_window_ParamLimits

0x6ba8,	// (0x000786e7) popup_call4_audio_first_window

0x6bf8,	// (0x00078737) popup_call4_audio_second_window_ParamLimits

0x6bf8,	// (0x00078737) popup_call4_audio_second_window

0x6c11,	// (0x00078750) popup_call4_audio_wait_window_ParamLimits

0x6c11,	// (0x00078750) popup_call4_audio_wait_window

0x6c1f,	// (0x0007875e) cell_call4_button_pane_ParamLimits

0x6c1f,	// (0x0007875e) cell_call4_button_pane

0x6c42,	// (0x00078781) bg_button_pane_cp09_ParamLimits

0x6c42,	// (0x00078781) bg_button_pane_cp09

0x6c4e,	// (0x0007878d) cell_call4_button_pane_g1_ParamLimits

0x6c4e,	// (0x0007878d) cell_call4_button_pane_g1

0x6c5b,	// (0x0007879a) cell_call4_button_pane_t1_ParamLimits

0x6c5b,	// (0x0007879a) cell_call4_button_pane_t1

0x05cc,	// (0x0007210b) popup_call4_audio_conf_window_ParamLimits

0x05cc,	// (0x0007210b) popup_call4_audio_conf_window

0x603f,	// (0x00077b7e) mup3_progress_pane_t1_ParamLimits

0x605e,	// (0x00077b9d) mup3_progress_pane_t2_ParamLimits

0x003d,	// (0x00071b7c) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x00081228) mup3_progress_pane_t_ParamLimits

0x005a,	// (0x00071b99) mup_progress_pane_cp03_ParamLimits

0x648d,	// (0x00077fcc) mup3_control_keys_pane_g4_copy1

0x689f,	// (0x000783de) mp4_rocker2_pane_ParamLimits

0x689f,	// (0x000783de) mp4_rocker2_pane

0x05e8,	// (0x00072127) mp4_rocker2_pane_g1

0x05e0,	// (0x0007211f) mp4_rocker2_pane_g2

0x6c9f,	// (0x000787de) mp4_rocker2_pane_g3

0x6ca7,	// (0x000787e6) mp4_rocker2_pane_g4

0x6caf,	// (0x000787ee) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0008135c) mp4_rocker2_pane_g

0xb4d2,	// (0x0007d011) main_camera4_pane

0xb4d2,	// (0x0007d011) main_video4_pane

0x65c4,	// (0x00078103) main_video_tele_dialer_pane_t1_ParamLimits

0x65c4,	// (0x00078103) main_video_tele_dialer_pane_t1

0x65d6,	// (0x00078115) main_video_tele_dialer_pane_t2_ParamLimits

0x65d6,	// (0x00078115) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x00081312) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x00081312) main_video_tele_dialer_pane_t

0x6ccf,	// (0x0007880e) cam4_autofocus_pane_ParamLimits

0x6ccf,	// (0x0007880e) cam4_autofocus_pane

0x6ce9,	// (0x00078828) cam4_image_uncrop_pane_ParamLimits

0x6ce9,	// (0x00078828) cam4_image_uncrop_pane

0x6d00,	// (0x0007883f) cam4_indicators_pane_ParamLimits

0x6d00,	// (0x0007883f) cam4_indicators_pane

0x6d1c,	// (0x0007885b) main_camera4_pane_g1_ParamLimits

0x6d1c,	// (0x0007885b) main_camera4_pane_g1

0x6d28,	// (0x00078867) main_camera4_pane_g2_ParamLimits

0x6d28,	// (0x00078867) main_camera4_pane_g2

0x6d28,	// (0x00078867) main_camera4_pane_g3_ParamLimits

0x6d28,	// (0x00078867) main_camera4_pane_g3

0x6d34,	// (0x00078873) main_camera4_pane_g4_ParamLimits

0x6d34,	// (0x00078873) main_camera4_pane_g4

0x6d40,	// (0x0007887f) main_camera4_pane_g5_ParamLimits

0x6d40,	// (0x0007887f) main_camera4_pane_g5

0x0005,

0xf828,	// (0x00081367) main_camera4_pane_g_ParamLimits

0xf828,	// (0x00081367) main_camera4_pane_g

0x6d5a,	// (0x00078899) main_camera4_pane_t1_ParamLimits

0x6d5a,	// (0x00078899) main_camera4_pane_t1

0xbbd3,	// (0x0007d712) bg_tb_trans_pane_cp06

0x6daa,	// (0x000788e9) cam4_indicators_pane_g1

0x6dbb,	// (0x000788fa) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x00081382) cam4_indicators_pane_g

0x6dd9,	// (0x00078918) cam4_indicators_pane_t1

0x6e03,	// (0x00078942) main_video4_pane_g1_ParamLimits

0x6e03,	// (0x00078942) main_video4_pane_g1

0x6e0f,	// (0x0007894e) main_video4_pane_g2_ParamLimits

0x6e0f,	// (0x0007894e) main_video4_pane_g2

0x6e1b,	// (0x0007895a) main_video4_pane_g3_ParamLimits

0x6e1b,	// (0x0007895a) main_video4_pane_g3

0x6e27,	// (0x00078966) main_video4_pane_g4_ParamLimits

0x6e27,	// (0x00078966) main_video4_pane_g4

0x0004,

0xf84a,	// (0x00081389) main_video4_pane_g_ParamLimits

0xf84a,	// (0x00081389) main_video4_pane_g

0x6e47,	// (0x00078986) vid4_indicators_pane_ParamLimits

0x6e47,	// (0x00078986) vid4_indicators_pane

0x6e66,	// (0x000789a5) video4_image_uncrop_cif_pane_ParamLimits

0x6e66,	// (0x000789a5) video4_image_uncrop_cif_pane

0x6e75,	// (0x000789b4) video4_image_uncrop_nhd_pane_ParamLimits

0x6e75,	// (0x000789b4) video4_image_uncrop_nhd_pane

0x6ce9,	// (0x00078828) video4_image_uncrop_vga_pane_ParamLimits

0x6ce9,	// (0x00078828) video4_image_uncrop_vga_pane

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp07

0x6e8c,	// (0x000789cb) vid4_indicators_pane_g1

0x6ea0,	// (0x000789df) vid4_indicators_pane_g2

0x6eb4,	// (0x000789f3) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x00081394) vid4_indicators_pane_g

0x6ee3,	// (0x00078a22) vid4_indicators_pane_t1

0x6efa,	// (0x00078a39) cam4_autofocus_pane_g1

0x6f02,	// (0x00078a41) cam4_autofocus_pane_g2

0x6f0a,	// (0x00078a49) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0008139f) cam4_autofocus_pane_g

0x6f12,	// (0x00078a51) cam4_autofocus_pane_g3_copy1

0x65f6,	// (0x00078135) video_down_pane_cp_t1

0x6604,	// (0x00078143) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x00081317) video_down_pane_cp_t

0xb4dc,	// (0x0007d01b) popup_vitu2_window_ParamLimits

0xb4dc,	// (0x0007d01b) popup_vitu2_window

0x6f1a,	// (0x00078a59) aid_size_cell2_itu2_ParamLimits

0x6f1a,	// (0x00078a59) aid_size_cell2_itu2

0x6f3c,	// (0x00078a7b) aid_size_cell_itu2_ParamLimits

0x6f3c,	// (0x00078a7b) aid_size_cell_itu2

0x088d,	// (0x000723cc) bg_popup_window_pane_cp09_ParamLimits

0x088d,	// (0x000723cc) bg_popup_window_pane_cp09

0x6f80,	// (0x00078abf) field_vitu2_entry_pane_ParamLimits

0x6f80,	// (0x00078abf) field_vitu2_entry_pane

0x6fa0,	// (0x00078adf) grid_vitu2_function_pane_ParamLimits

0x6fa0,	// (0x00078adf) grid_vitu2_function_pane

0x6fe4,	// (0x00078b23) grid_vitu2_itu_pane_ParamLimits

0x6fe4,	// (0x00078b23) grid_vitu2_itu_pane

0x705c,	// (0x00078b9b) cell_vitu2_itu_pane_ParamLimits

0x705c,	// (0x00078b9b) cell_vitu2_itu_pane

0x7075,	// (0x00078bb4) cell_vitu2_function_pane_ParamLimits

0x7075,	// (0x00078bb4) cell_vitu2_function_pane

0x05f0,	// (0x0007212f) bg_popup_call_pane_cp08_ParamLimits

0x05f0,	// (0x0007212f) bg_popup_call_pane_cp08

0x0607,	// (0x00072146) field_vitu2_entry_pane_g1

0x0613,	// (0x00072152) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x000813a6) field_vitu2_entry_pane_g

0x1bb2,	// (0x000736f1) field_vitu2_entry_pane_t1_ParamLimits

0x1bb2,	// (0x000736f1) field_vitu2_entry_pane_t1

0x1be4,	// (0x00073723) field_vitu2_entry_pane_t2_ParamLimits

0x1be4,	// (0x00073723) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x000813ad) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x000813ad) field_vitu2_entry_pane_t

0x57d3,	// (0x00077312) bg_button_pane_cp010_ParamLimits

0x57d3,	// (0x00077312) bg_button_pane_cp010

0x70b6,	// (0x00078bf5) cell_vitu2_itu_pane_g1

0x70dc,	// (0x00078c1b) cell_vitu2_itu_pane_t1_ParamLimits

0x70dc,	// (0x00078c1b) cell_vitu2_itu_pane_t1

0x1c01,	// (0x00073740) cell_vitu2_itu_pane_t2_ParamLimits

0x1c01,	// (0x00073740) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x000813b7) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x000813b7) cell_vitu2_itu_pane_t

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp011

0x7128,	// (0x00078c67) cell_vitu2_function_pane_g1

0xb4d2,	// (0x0007d011) main_myfav_hc_pane

0x6adb,	// (0x0007861a) popup_image3_note_pane_ParamLimits

0x6adb,	// (0x0007861a) popup_image3_note_pane

0x6ae9,	// (0x00078628) popup_image3_tool_bar_pane_ParamLimits

0x6ae9,	// (0x00078628) popup_image3_tool_bar_pane

0x1c77,	// (0x000737b6) cell_vitu2_itu_pane_t3_ParamLimits

0x1c77,	// (0x000737b6) cell_vitu2_itu_pane_t3

0xb4d2,	// (0x0007d011) bg_popup_trans_pane

0x0644,	// (0x00072183) grid_image3_tool_bar_pane

0x064e,	// (0x0007218d) bg_popup_trans_pane_g1

0xc03e,	// (0x0007db7d) bg_popup_trans_pane_g2

0x0656,	// (0x00072195) bg_popup_trans_pane_g3

0x065e,	// (0x0007219d) bg_popup_trans_pane_g4

0x0666,	// (0x000721a5) bg_popup_trans_pane_g5

0x066e,	// (0x000721ad) bg_popup_trans_pane_g6

0x0676,	// (0x000721b5) bg_popup_trans_pane_g7

0x067e,	// (0x000721bd) bg_popup_trans_pane_g8

0xc01e,	// (0x0007db5d) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x000813be) bg_popup_trans_pane_g

0x0686,	// (0x000721c5) cell_image3_tool_bar_pane_ParamLimits

0x0686,	// (0x000721c5) cell_image3_tool_bar_pane

0xbe19,	// (0x0007d958) cell_image3_tool_bar_pane_g1

0xb4d2,	// (0x0007d011) bg_popup_trans_pane_cp1

0x069a,	// (0x000721d9) popup_image3_note_pane_t1

0x06a8,	// (0x000721e7) popup_image3_note_pane_t2

0x06b6,	// (0x000721f5) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x000813d1) popup_image3_note_pane_t

0x06c4,	// (0x00072203) popup_image3_note_pane_t3_copy1

0x713c,	// (0x00078c7b) bg_myfav_hc_instruction_pane_ParamLimits

0x713c,	// (0x00078c7b) bg_myfav_hc_instruction_pane

0x7154,	// (0x00078c93) cell_myfav_contact_pane_ParamLimits

0x7154,	// (0x00078c93) cell_myfav_contact_pane

0x716e,	// (0x00078cad) cell_myfav_contact_pane_cp1_ParamLimits

0x716e,	// (0x00078cad) cell_myfav_contact_pane_cp1

0x7186,	// (0x00078cc5) cell_myfav_contact_pane_cp2_ParamLimits

0x7186,	// (0x00078cc5) cell_myfav_contact_pane_cp2

0x719e,	// (0x00078cdd) cell_myfav_contact_pane_cp3_ParamLimits

0x719e,	// (0x00078cdd) cell_myfav_contact_pane_cp3

0x71b5,	// (0x00078cf4) cell_myfav_contact_pane_cp4_ParamLimits

0x71b5,	// (0x00078cf4) cell_myfav_contact_pane_cp4

0x71cb,	// (0x00078d0a) cell_myfav_contact_pane_cp5_ParamLimits

0x71cb,	// (0x00078d0a) cell_myfav_contact_pane_cp5

0x71df,	// (0x00078d1e) cell_myfav_contact_pane_cp6_ParamLimits

0x71df,	// (0x00078d1e) cell_myfav_contact_pane_cp6

0x71f3,	// (0x00078d32) cell_myfav_contact_pane_cp7_ParamLimits

0x71f3,	// (0x00078d32) cell_myfav_contact_pane_cp7

0x06d2,	// (0x00072211) listscroll_gen_pane_cp05

0x720b,	// (0x00078d4a) main_myfav_hc_pane_g1_ParamLimits

0x720b,	// (0x00078d4a) main_myfav_hc_pane_g1

0x7221,	// (0x00078d60) main_myfav_hc_pane_g2_ParamLimits

0x7221,	// (0x00078d60) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x000813d8) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x000813d8) main_myfav_hc_pane_g

0x724f,	// (0x00078d8e) main_myfav_hc_pane_t1_ParamLimits

0x724f,	// (0x00078d8e) main_myfav_hc_pane_t1

0x06db,	// (0x0007221a) main_myfav_hc_pane_t2_ParamLimits

0x06db,	// (0x0007221a) main_myfav_hc_pane_t2

0x06ed,	// (0x0007222c) main_myfav_hc_pane_t3_ParamLimits

0x06ed,	// (0x0007222c) main_myfav_hc_pane_t3

0x7266,	// (0x00078da5) main_myfav_hc_pane_t4_ParamLimits

0x7266,	// (0x00078da5) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x000813df) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x000813df) main_myfav_hc_pane_t

0xbe19,	// (0x0007d958) bg_myfav_hc_instruction_pane_g1

0x06ff,	// (0x0007223e) cell_myfav_contact_pane_g1_ParamLimits

0x06ff,	// (0x0007223e) cell_myfav_contact_pane_g1

0x06ff,	// (0x0007223e) cell_myfav_contact_pane_g2_ParamLimits

0x06ff,	// (0x0007223e) cell_myfav_contact_pane_g2

0x070b,	// (0x0007224a) cell_myfav_contact_pane_g3_ParamLimits

0x070b,	// (0x0007224a) cell_myfav_contact_pane_g3

0xbbe1,	// (0x0007d720) cell_myfav_contact_pane_g4_ParamLimits

0xbbe1,	// (0x0007d720) cell_myfav_contact_pane_g4

0x0718,	// (0x00072257) cell_myfav_contact_pane_g5_ParamLimits

0x0718,	// (0x00072257) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x000813ea) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x000813ea) cell_myfav_contact_pane_g

0x7237,	// (0x00078d76) main_myfav_hc_pane_g3_ParamLimits

0x7237,	// (0x00078d76) main_myfav_hc_pane_g3

0x28e7,	// (0x00074426) popup_adpt_find_window

0x7290,	// (0x00078dcf) afind_page_pane_ParamLimits

0x7290,	// (0x00078dcf) afind_page_pane

0x729d,	// (0x00078ddc) aid_size_cell_afind_ParamLimits

0x729d,	// (0x00078ddc) aid_size_cell_afind

0x72b7,	// (0x00078df6) bg_popup_sub_pane_cp09_ParamLimits

0x72b7,	// (0x00078df6) bg_popup_sub_pane_cp09

0x72c4,	// (0x00078e03) find_pane_cp01_ParamLimits

0x72c4,	// (0x00078e03) find_pane_cp01

0x0724,	// (0x00072263) grid_afind_control_pane_ParamLimits

0x0724,	// (0x00072263) grid_afind_control_pane

0x72d1,	// (0x00078e10) grid_afind_pane_ParamLimits

0x72d1,	// (0x00078e10) grid_afind_pane

0x72ed,	// (0x00078e2c) cell_afind_pane_ParamLimits

0x72ed,	// (0x00078e2c) cell_afind_pane

0xbe19,	// (0x0007d958) afind_page_pane_g1

0x7335,	// (0x00078e74) afind_page_pane_g2

0x733d,	// (0x00078e7c) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x000813f5) afind_page_pane_g

0x7345,	// (0x00078e84) afind_page_pane_t1

0x074a,	// (0x00072289) cell_afind_grid_control_pane_ParamLimits

0x074a,	// (0x00072289) cell_afind_grid_control_pane

0x05b8,	// (0x000720f7) bg_button_pane_cp69_ParamLimits

0x05b8,	// (0x000720f7) bg_button_pane_cp69

0x7353,	// (0x00078e92) cell_afind_pane_g1_ParamLimits

0x7353,	// (0x00078e92) cell_afind_pane_g1

0x7360,	// (0x00078e9f) cell_afind_pane_t1_ParamLimits

0x7360,	// (0x00078e9f) cell_afind_pane_t1

0xbe23,	// (0x0007d962) bg_button_pane_cp72

0x0759,	// (0x00072298) cell_afind_grid_control_pane_g1

0x4fdc,	// (0x00076b1b) aid_image_placing_area_ParamLimits

0x4fdc,	// (0x00076b1b) aid_image_placing_area

0xbbd3,	// (0x0007d712) field_vitu_entry_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) field_vitu_entry_pane_g1

0xbbd3,	// (0x0007d712) field_vitu_entry_pane_g2_ParamLimits

0xbbd3,	// (0x0007d712) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x00080d00) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x00080d00) field_vitu_entry_pane_g

0x034a,	// (0x00071e89) cell_vitu_itu_pane_g1_ParamLimits

0x032d,	// (0x00071e6c) cell_vitu_itu_pane_t3_ParamLimits

0x032d,	// (0x00071e6c) cell_vitu_itu_pane_t3

0x0561,	// (0x000720a0) mp4_progress_pane_t1_ParamLimits

0x057a,	// (0x000720b9) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0008133b) mp4_progress_pane_t_ParamLimits

0x0593,	// (0x000720d2) mup_progress_pane_cp04_ParamLimits

0x727a,	// (0x00078db9) main_myfav_hc_pane_t5_ParamLimits

0x727a,	// (0x00078db9) main_myfav_hc_pane_t5

0x1a79,	// (0x000735b8) aid_zoom_text_primary

0x28e7,	// (0x00074426) popup_adpt_find_window_ParamLimits

0xbb7a,	// (0x0007d6b9) main_cam_set_pane

0x6d0e,	// (0x0007884d) cam4_zoom_pane_ParamLimits

0x6d0e,	// (0x0007884d) cam4_zoom_pane

0x7372,	// (0x00078eb1) main_cam_set_pane_g1_ParamLimits

0x7372,	// (0x00078eb1) main_cam_set_pane_g1

0x7380,	// (0x00078ebf) main_cam_set_pane_g2_ParamLimits

0x7380,	// (0x00078ebf) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x000813fc) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x000813fc) main_cam_set_pane_g

0x738c,	// (0x00078ecb) main_cam_set_pane_t1_ParamLimits

0x738c,	// (0x00078ecb) main_cam_set_pane_t1

0x73a8,	// (0x00078ee7) main_cset_listscroll_pane_ParamLimits

0x73a8,	// (0x00078ee7) main_cset_listscroll_pane

0x73da,	// (0x00078f19) main_cset_slider_pane_ParamLimits

0x73da,	// (0x00078f19) main_cset_slider_pane

0x076a,	// (0x000722a9) main_cset_list_pane_ParamLimits

0x076a,	// (0x000722a9) main_cset_list_pane

0x077a,	// (0x000722b9) scroll_pane_cp028

0x73f9,	// (0x00078f38) aid_area_touch_slider

0x7415,	// (0x00078f54) cset_slider_pane

0x7438,	// (0x00078f77) main_cset_slider_pane_g1

0x744d,	// (0x00078f8c) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x00081401) main_cset_slider_pane_g

0x07b3,	// (0x000722f2) main_cset_slider_pane_t1

0x750f,	// (0x0007904e) main_cset_slider_pane_t2

0x7529,	// (0x00079068) main_cset_slider_pane_t3

0x7543,	// (0x00079082) main_cset_slider_pane_t4

0x755d,	// (0x0007909c) main_cset_slider_pane_t5

0x757b,	// (0x000790ba) main_cset_slider_pane_t6

0x7592,	// (0x000790d1) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x00081426) main_cset_slider_pane_t

0x769e,	// (0x000791dd) cset_list_set_pane_ParamLimits

0x769e,	// (0x000791dd) cset_list_set_pane

0x084d,	// (0x0007238c) aid_position_infowindow_above

0x0855,	// (0x00072394) aid_position_infowindow_below

0x76b4,	// (0x000791f3) cset_list_set_pane_g1_ParamLimits

0x76b4,	// (0x000791f3) cset_list_set_pane_g1

0x1cc9,	// (0x00073808) cset_list_set_pane_g3_ParamLimits

0x1cc9,	// (0x00073808) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x00081445) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x00081445) cset_list_set_pane_g

0x1cd8,	// (0x00073817) cset_list_set_pane_t1_ParamLimits

0x1cd8,	// (0x00073817) cset_list_set_pane_t1

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp021_ParamLimits

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp021

0xc9db,	// (0x0007e51a) cset_slider_pane_g1

0xc9ed,	// (0x0007e52c) cset_slider_pane_g2

0xc9e4,	// (0x0007e523) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0008144a) cset_slider_pane_g

0x76c0,	// (0x000791ff) aid_area_touch_cam4_zoom

0x76c8,	// (0x00079207) cam4_zoom_cont_pane

0x76d0,	// (0x0007920f) cam4_zoom_pane_g1

0x76d8,	// (0x00079217) cam4_zoom_pane_g2

0x76e0,	// (0x0007921f) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x00081451) cam4_zoom_pane_g

0x0bec,	// (0x0007272b) cam4_zoom_cont_pane_g1

0x0bf5,	// (0x00072734) cam4_zoom_cont_pane_g2

0x0bfe,	// (0x0007273d) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x00081458) cam4_zoom_cont_pane_g

0x6b32,	// (0x00078671) call4_image_pane_ParamLimits

0x6b32,	// (0x00078671) call4_image_pane

0x6b91,	// (0x000786d0) call4_windows_conf_pane_ParamLimits

0x6bd6,	// (0x00078715) popup_call4_audio_in_window_ParamLimits

0x6bd6,	// (0x00078715) popup_call4_audio_in_window

0xb4d2,	// (0x0007d011) bg_popup_call2_act_pane_cp02

0x05c4,	// (0x00072103) call4_list_conf_pane

0xbe19,	// (0x0007d958) call4_image_pane_g1

0xbe19,	// (0x0007d958) call4_image_pane_g2

0x0001,

0xf39d,	// (0x00080edc) call4_image_pane_g

0x089b,	// (0x000723da) list_single_graphic_popup_conf4_pane_ParamLimits

0x089b,	// (0x000723da) list_single_graphic_popup_conf4_pane

0xb4d2,	// (0x0007d011) list_highlight_pane_cp022

0x08ae,	// (0x000723ed) list_single_graphic_popup_conf4_pane_g1

0xc593,	// (0x0007e0d2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0008145f) list_single_graphic_popup_conf4_pane_g

0x08b6,	// (0x000723f5) list_single_graphic_popup_conf4_pane_t1

0x3657,	// (0x00075196) popup_vtel_slider_window_ParamLimits

0x3657,	// (0x00075196) popup_vtel_slider_window

0x05a6,	// (0x000720e5) dialer2_ne_pane_t2_ParamLimits

0x05a6,	// (0x000720e5) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x00081340) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x00081340) dialer2_ne_pane_t

0xbb7a,	// (0x0007d6b9) bg_popup_sub_pane_cp010_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_popup_sub_pane_cp010

0x76e8,	// (0x00079227) popup_vtel_slider_window_g1_ParamLimits

0x76e8,	// (0x00079227) popup_vtel_slider_window_g1

0x76f4,	// (0x00079233) popup_vtel_slider_window_g2_ParamLimits

0x76f4,	// (0x00079233) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x00081464) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x00081464) popup_vtel_slider_window_g

0x773c,	// (0x0007927b) vtel_slider_pane_ParamLimits

0x773c,	// (0x0007927b) vtel_slider_pane

0x774b,	// (0x0007928a) vtel_slider_pane_g1_ParamLimits

0x774b,	// (0x0007928a) vtel_slider_pane_g1

0x7758,	// (0x00079297) vtel_slider_pane_g2_ParamLimits

0x7758,	// (0x00079297) vtel_slider_pane_g2

0x7765,	// (0x000792a4) vtel_slider_pane_g3_ParamLimits

0x7765,	// (0x000792a4) vtel_slider_pane_g3

0x774b,	// (0x0007928a) vtel_slider_pane_g4_ParamLimits

0x774b,	// (0x0007928a) vtel_slider_pane_g4

0x7772,	// (0x000792b1) vtel_slider_pane_g5_ParamLimits

0x7772,	// (0x000792b1) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0008146d) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0008146d) vtel_slider_pane_g

0xbb7a,	// (0x0007d6b9) main_gallery2_pane

0x6f62,	// (0x00078aa1) aid_size_row_itut2_dropdow_list_ParamLimits

0x6f62,	// (0x00078aa1) aid_size_row_itut2_dropdow_list

0x6fc2,	// (0x00078b01) grid_vitu2_function_top_pane_ParamLimits

0x6fc2,	// (0x00078b01) grid_vitu2_function_top_pane

0x701c,	// (0x00078b5b) popup_vitu2_dropdown_list_window_ParamLimits

0x701c,	// (0x00078b5b) popup_vitu2_dropdown_list_window

0x703a,	// (0x00078b79) popup_vitu2_match_list_window

0x777f,	// (0x000792be) cell_vitu2_function_top_pane_ParamLimits

0x777f,	// (0x000792be) cell_vitu2_function_top_pane

0x7799,	// (0x000792d8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7799,	// (0x000792d8) cell_vitu2_function_top_pane_cp01

0x77b5,	// (0x000792f4) cell_vitu2_function_top_wide_pane_ParamLimits

0x77b5,	// (0x000792f4) cell_vitu2_function_top_wide_pane

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp012

0x77d3,	// (0x00079312) cell_vitu2_function_top_pane_g1

0x77e7,	// (0x00079326) bg_button_pane_cp013_ParamLimits

0x77e7,	// (0x00079326) bg_button_pane_cp013

0x7803,	// (0x00079342) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7803,	// (0x00079342) cell_vitu2_function_top_wide_pane_g1

0xb4dc,	// (0x0007d01b) bg_popup_sub_pane_cp20

0x781b,	// (0x0007935a) list_vitu2_match_list_pane

0x064e,	// (0x0007218d) bg_popup_sub_pane_cp20_g1

0x0656,	// (0x00072195) bg_popup_sub_pane_cp20_g2

0xc03e,	// (0x0007db7d) bg_popup_sub_pane_cp20_g3

0x065e,	// (0x0007219d) bg_popup_sub_pane_cp20_g4

0xc01e,	// (0x0007db5d) bg_popup_sub_pane_cp20_g5

0x08cc,	// (0x0007240b) bg_popup_sub_pane_cp20_g6

0x066e,	// (0x000721ad) bg_popup_sub_pane_cp20_g7

0x0676,	// (0x000721b5) bg_popup_sub_pane_cp20_g8

0x067e,	// (0x000721bd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x00081478) bg_popup_sub_pane_cp20_g

0x7833,	// (0x00079372) list_vitu2_match_list_item_pane_ParamLimits

0x7833,	// (0x00079372) list_vitu2_match_list_item_pane

0x7845,	// (0x00079384) list_vitu2_match_list_item_pane_t1

0xb4d2,	// (0x0007d011) bg_popup_sub_pane_cp21

0xbdf7,	// (0x0007d936) grid_vitu2_dropdown_list_pane

0x7853,	// (0x00079392) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7853,	// (0x00079392) cell_vitu2_dropdown_list_char_pane

0x7875,	// (0x000793b4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7875,	// (0x000793b4) cell_vitu2_dropdown_list_ctrl_pane

0x08e6,	// (0x00072425) cell_vitu2_dropdown_list_char_pane_g1

0x08dd,	// (0x0007241c) cell_vitu2_dropdown_list_char_pane_g2

0x08d4,	// (0x00072413) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0008148b) cell_vitu2_dropdown_list_char_pane_g

0x789d,	// (0x000793dc) cell_vitu2_dropdown_list_char_pane_t1

0x78ab,	// (0x000793ea) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x78ab,	// (0x000793ea) cell_vitu2_dropdown_list_ctrl_pane_g1

0x78b8,	// (0x000793f7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x78b8,	// (0x000793f7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x78c5,	// (0x00079404) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x78c5,	// (0x00079404) cell_vitu2_dropdown_list_ctrl_pane_g3

0x78d2,	// (0x00079411) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x78d2,	// (0x00079411) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbbd3,	// (0x0007d712) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbbd3,	// (0x0007d712) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x00081492) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x00081492) cell_vitu2_dropdown_list_ctrl_pane_g

0x78ee,	// (0x0007942d) aid_size_cell_gallery2_ParamLimits

0x78ee,	// (0x0007942d) aid_size_cell_gallery2

0x7908,	// (0x00079447) grid_gallery2_pane_ParamLimits

0x7908,	// (0x00079447) grid_gallery2_pane

0x791f,	// (0x0007945e) scroll_pane_cp029_ParamLimits

0x791f,	// (0x0007945e) scroll_pane_cp029

0x792f,	// (0x0007946e) cell_gallery2_pane_ParamLimits

0x792f,	// (0x0007946e) cell_gallery2_pane

0x08ef,	// (0x0007242e) cell_gallery2_pane_g2

0xa850,	// (0x0007c38f) cell_gallery2_pane_g3

0x08f7,	// (0x00072436) cell_gallery2_pane_g4

0x08ff,	// (0x0007243e) cell_gallery2_pane_g5

0xbdf7,	// (0x0007d936) grid_highlight_pane_cp10

0x703a,	// (0x00078b79) popup_vitu2_match_list_window_ParamLimits

0x704c,	// (0x00078b8b) popup_vitu2_query_window_ParamLimits

0x704c,	// (0x00078b8b) popup_vitu2_query_window

0xb4d2,	// (0x0007d011) bg_vitu2_candi_button_pane

0x08e6,	// (0x00072425) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x08dd,	// (0x0007241c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x08d4,	// (0x00072413) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1ced,	// (0x0007382c) bg_button_pane_cp015

0x7984,	// (0x000794c3) bg_button_pane_cp016

0x7990,	// (0x000794cf) bg_button_pane_cp017

0xc996,	// (0x0007e4d5) bg_popup_sub_pane_cp22

0x0907,	// (0x00072446) popup_vitu2_query_window_g1

0x1d27,	// (0x00073866) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0008149d) popup_vitu2_query_window_g

0x1d3f,	// (0x0007387e) popup_vitu2_query_window_t1_ParamLimits

0x1d3f,	// (0x0007387e) popup_vitu2_query_window_t1

0x1d72,	// (0x000738b1) popup_vitu2_query_window_t2_ParamLimits

0x1d72,	// (0x000738b1) popup_vitu2_query_window_t2

0x1d84,	// (0x000738c3) popup_vitu2_query_window_t3_ParamLimits

0x1d84,	// (0x000738c3) popup_vitu2_query_window_t3

0x79b7,	// (0x000794f6) popup_vitu2_query_window_t4_ParamLimits

0x79b7,	// (0x000794f6) popup_vitu2_query_window_t4

0x79cb,	// (0x0007950a) popup_vitu2_query_window_t5_ParamLimits

0x79cb,	// (0x0007950a) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x000814a4) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x000814a4) popup_vitu2_query_window_t

0x0762,	// (0x000722a1) main_cset_text_pane

0x73f9,	// (0x00078f38) aid_area_touch_slider_ParamLimits

0x7415,	// (0x00078f54) cset_slider_pane_ParamLimits

0x7438,	// (0x00078f77) main_cset_slider_pane_g1_ParamLimits

0x744d,	// (0x00078f8c) main_cset_slider_pane_g2_ParamLimits

0x0783,	// (0x000722c2) main_cset_slider_pane_g3_ParamLimits

0x0783,	// (0x000722c2) main_cset_slider_pane_g3

0x7462,	// (0x00078fa1) main_cset_slider_pane_g4_ParamLimits

0x7462,	// (0x00078fa1) main_cset_slider_pane_g4

0x7471,	// (0x00078fb0) main_cset_slider_pane_g5_ParamLimits

0x7471,	// (0x00078fb0) main_cset_slider_pane_g5

0x747f,	// (0x00078fbe) main_cset_slider_pane_g6_ParamLimits

0x747f,	// (0x00078fbe) main_cset_slider_pane_g6

0xf8c2,	// (0x00081401) main_cset_slider_pane_g_ParamLimits

0x07b3,	// (0x000722f2) main_cset_slider_pane_t1_ParamLimits

0x750f,	// (0x0007904e) main_cset_slider_pane_t2_ParamLimits

0x7529,	// (0x00079068) main_cset_slider_pane_t3_ParamLimits

0x7543,	// (0x00079082) main_cset_slider_pane_t4_ParamLimits

0x755d,	// (0x0007909c) main_cset_slider_pane_t5_ParamLimits

0x757b,	// (0x000790ba) main_cset_slider_pane_t6_ParamLimits

0x7592,	// (0x000790d1) main_cset_slider_pane_t7_ParamLimits

0x75c0,	// (0x000790ff) main_cset_slider_pane_t8_ParamLimits

0x75c0,	// (0x000790ff) main_cset_slider_pane_t8

0x75e8,	// (0x00079127) main_cset_slider_pane_t9_ParamLimits

0x75e8,	// (0x00079127) main_cset_slider_pane_t9

0x7610,	// (0x0007914f) main_cset_slider_pane_t10_ParamLimits

0x7610,	// (0x0007914f) main_cset_slider_pane_t10

0x7638,	// (0x00079177) main_cset_slider_pane_t11_ParamLimits

0x7638,	// (0x00079177) main_cset_slider_pane_t11

0x7662,	// (0x000791a1) main_cset_slider_pane_t12_ParamLimits

0x7662,	// (0x000791a1) main_cset_slider_pane_t12

0x767f,	// (0x000791be) main_cset_slider_pane_t13_ParamLimits

0x767f,	// (0x000791be) main_cset_slider_pane_t13

0xf8e7,	// (0x00081426) main_cset_slider_pane_t_ParamLimits

0xb4d2,	// (0x0007d011) bg_popup_sub_pane_cp011

0x0913,	// (0x00072452) main_cset_text_pane_g1

0x091b,	// (0x0007245a) main_cset_text_pane_t1

0x0929,	// (0x00072468) main_cset_text_pane_t2

0x0937,	// (0x00072476) main_cset_text_pane_t3

0x0945,	// (0x00072484) main_cset_text_pane_t4

0x0953,	// (0x00072492) main_cset_text_pane_t5

0x0961,	// (0x000724a0) main_cset_text_pane_t6

0x096f,	// (0x000724ae) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x000814b3) main_cset_text_pane_t

0xb4d2,	// (0x0007d011) main_cam4_burst_pane

0xb4d2,	// (0x0007d011) main_cam5_pane

0x0738,	// (0x00072277) bg_button_pane_cp019

0x0741,	// (0x00072280) bg_button_pane_cp020

0x078f,	// (0x000722ce) main_cset_slider_pane_g7_ParamLimits

0x078f,	// (0x000722ce) main_cset_slider_pane_g7

0x079b,	// (0x000722da) main_cset_slider_pane_g8_ParamLimits

0x079b,	// (0x000722da) main_cset_slider_pane_g8

0x7493,	// (0x00078fd2) main_cset_slider_pane_g9_ParamLimits

0x7493,	// (0x00078fd2) main_cset_slider_pane_g9

0x749f,	// (0x00078fde) main_cset_slider_pane_g10_ParamLimits

0x749f,	// (0x00078fde) main_cset_slider_pane_g10

0x74ab,	// (0x00078fea) main_cset_slider_pane_g11_ParamLimits

0x74ab,	// (0x00078fea) main_cset_slider_pane_g11

0x74b7,	// (0x00078ff6) main_cset_slider_pane_g12_ParamLimits

0x74b7,	// (0x00078ff6) main_cset_slider_pane_g12

0x74c3,	// (0x00079002) main_cset_slider_pane_g13_ParamLimits

0x74c3,	// (0x00079002) main_cset_slider_pane_g13

0x74cf,	// (0x0007900e) main_cset_slider_pane_g14_ParamLimits

0x74cf,	// (0x0007900e) main_cset_slider_pane_g14

0x74db,	// (0x0007901a) main_cset_slider_pane_g15_ParamLimits

0x74db,	// (0x0007901a) main_cset_slider_pane_g15

0x07db,	// (0x0007231a) main_cset_slider_pane_t14_ParamLimits

0x07db,	// (0x0007231a) main_cset_slider_pane_t14

0x0814,	// (0x00072353) main_cset_slider_pane_t15_ParamLimits

0x0814,	// (0x00072353) main_cset_slider_pane_t15

0x79df,	// (0x0007951e) aid_cam4_burst_size_cell_ParamLimits

0x79df,	// (0x0007951e) aid_cam4_burst_size_cell

0x79fb,	// (0x0007953a) grid_cam4_burst_pane_ParamLimits

0x79fb,	// (0x0007953a) grid_cam4_burst_pane

0x7a2b,	// (0x0007956a) linegrid_cam4_burst_pane_ParamLimits

0x7a2b,	// (0x0007956a) linegrid_cam4_burst_pane

0x7a4b,	// (0x0007958a) scroll_pane_cp30_ParamLimits

0x7a4b,	// (0x0007958a) scroll_pane_cp30

0x7a57,	// (0x00079596) cell_cam4_burst_pane_ParamLimits

0x7a57,	// (0x00079596) cell_cam4_burst_pane

0x0989,	// (0x000724c8) linegrid_cam4_burst_pane_g1_ParamLimits

0x0989,	// (0x000724c8) linegrid_cam4_burst_pane_g1

0x7a93,	// (0x000795d2) linegrid_cam4_burst_pane_g2_ParamLimits

0x7a93,	// (0x000795d2) linegrid_cam4_burst_pane_g2

0x0996,	// (0x000724d5) linegrid_cam4_burst_pane_g3_ParamLimits

0x0996,	// (0x000724d5) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x000814c2) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x000814c2) linegrid_cam4_burst_pane_g

0x7aa4,	// (0x000795e3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7aa4,	// (0x000795e3) linegrid_cam4_burst_pane_g3_copy1

0x09a3,	// (0x000724e2) linegrid_cam4_burst_pane_g4_ParamLimits

0x09a3,	// (0x000724e2) linegrid_cam4_burst_pane_g4

0x7abe,	// (0x000795fd) linegrid_cam4_burst_pane_g5_ParamLimits

0x7abe,	// (0x000795fd) linegrid_cam4_burst_pane_g5

0x7acf,	// (0x0007960e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7acf,	// (0x0007960e) linegrid_cam4_burst_pane_g6

0x09b0,	// (0x000724ef) linegrid_cam4_burst_pane_g7_ParamLimits

0x09b0,	// (0x000724ef) linegrid_cam4_burst_pane_g7

0x7ae0,	// (0x0007961f) cell_cam4_burst_pane_g1

0x09c9,	// (0x00072508) main_cam5_pane_t1_ParamLimits

0x09c9,	// (0x00072508) main_cam5_pane_t1

0x09db,	// (0x0007251a) main_cam5_pane_t2_ParamLimits

0x09db,	// (0x0007251a) main_cam5_pane_t2

0x09ed,	// (0x0007252c) main_cam5_pane_t3_ParamLimits

0x09ed,	// (0x0007252c) main_cam5_pane_t3

0x09ff,	// (0x0007253e) main_cam5_pane_t4_ParamLimits

0x09ff,	// (0x0007253e) main_cam5_pane_t4

0x0a17,	// (0x00072556) main_cam5_pane_t5_ParamLimits

0x0a17,	// (0x00072556) main_cam5_pane_t5

0x0a2b,	// (0x0007256a) main_cam5_pane_t6_ParamLimits

0x0a2b,	// (0x0007256a) main_cam5_pane_t6

0x0a3f,	// (0x0007257e) main_cam5_pane_t7_ParamLimits

0x0a3f,	// (0x0007257e) main_cam5_pane_t7

0x0a51,	// (0x00072590) main_cam5_pane_t8_ParamLimits

0x0a51,	// (0x00072590) main_cam5_pane_t8

0x0a6d,	// (0x000725ac) main_cam5_pane_t9_ParamLimits

0x0a6d,	// (0x000725ac) main_cam5_pane_t9

0x0a7f,	// (0x000725be) main_cam5_pane_t10_ParamLimits

0x0a7f,	// (0x000725be) main_cam5_pane_t10

0x0a91,	// (0x000725d0) main_cam5_pane_t11_ParamLimits

0x0a91,	// (0x000725d0) main_cam5_pane_t11

0x0aa3,	// (0x000725e2) main_cam5_pane_t12_ParamLimits

0x0aa3,	// (0x000725e2) main_cam5_pane_t12

0x0ab8,	// (0x000725f7) main_cam5_pane_t13_ParamLimits

0x0ab8,	// (0x000725f7) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x000814ce) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x000814ce) main_cam5_pane_t

0x299c,	// (0x000744db) popup_scut_keymap_window_ParamLimits

0x299c,	// (0x000744db) popup_scut_keymap_window

0x7af3,	// (0x00079632) aid_size_cell_brow_shortcut

0xbdf7,	// (0x0007d936) bg_popup_window_pane_cp010

0x7aff,	// (0x0007963e) grid_scut_pane

0x7b0b,	// (0x0007964a) cell_scut_pane_ParamLimits

0x7b0b,	// (0x0007964a) cell_scut_pane

0x7b22,	// (0x00079661) cell_scut_pane_g1

0x0ad5,	// (0x00072614) cell_scut_pane_t1

0x0ae4,	// (0x00072623) cell_scut_pane_t2

0x7b2b,	// (0x0007966a) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x000814e9) cell_scut_pane_t

0x5c5e,	// (0x0007779d) main_mup3_pane_g8_ParamLimits

0x5c5e,	// (0x0007779d) main_mup3_pane_g8

0x6f70,	// (0x00078aaf) area_vitu2_query_pane_ParamLimits

0x6f70,	// (0x00078aaf) area_vitu2_query_pane

0x1d02,	// (0x00073841) input_focus_pane_cp08

0x0af3,	// (0x00072632) area_vitu2_query_pane_g1

0x1e02,	// (0x00073941) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x000814f0) area_vitu2_query_pane_g

0x7b39,	// (0x00079678) area_vitu2_query_pane_t1_ParamLimits

0x7b39,	// (0x00079678) area_vitu2_query_pane_t1

0x7b4d,	// (0x0007968c) area_vitu2_query_pane_t2_ParamLimits

0x7b4d,	// (0x0007968c) area_vitu2_query_pane_t2

0x1e13,	// (0x00073952) area_vitu2_query_pane_t3_ParamLimits

0x1e13,	// (0x00073952) area_vitu2_query_pane_t3

0x1e3b,	// (0x0007397a) area_vitu2_query_pane_t4_ParamLimits

0x1e3b,	// (0x0007397a) area_vitu2_query_pane_t4

0x1e63,	// (0x000739a2) area_vitu2_query_pane_t5_ParamLimits

0x1e63,	// (0x000739a2) area_vitu2_query_pane_t5

0x1e8b,	// (0x000739ca) area_vitu2_query_pane_t6_ParamLimits

0x1e8b,	// (0x000739ca) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x000814f5) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x000814f5) area_vitu2_query_pane_t

0x7984,	// (0x000794c3) bg_button_pane_cp018

0x7b61,	// (0x000796a0) bg_button_pane_cp021

0x1ed7,	// (0x00073a16) bg_button_pane_cp022

0x1efa,	// (0x00073a39) input_focus_pane_cp09

0xc6cf,	// (0x0007e20e) aid_size_touch_mv_arrow_left

0xc6f8,	// (0x0007e237) aid_size_touch_mv_arrow_right

0x74f3,	// (0x00079032) main_cset_slider_pane_g16_ParamLimits

0x74f3,	// (0x00079032) main_cset_slider_pane_g16

0x7501,	// (0x00079040) main_cset_slider_pane_g17_ParamLimits

0x7501,	// (0x00079040) main_cset_slider_pane_g17

0x7ae0,	// (0x0007961f) cell_cam4_burst_pane_g1_ParamLimits

0xb4d2,	// (0x0007d011) compa_mode_pane

0x7700,	// (0x0007923f) popup_vtel_slider_window_g3_ParamLimits

0x7700,	// (0x0007923f) popup_vtel_slider_window_g3

0x7714,	// (0x00079253) popup_vtel_slider_window_g4_ParamLimits

0x7714,	// (0x00079253) popup_vtel_slider_window_g4

0x7728,	// (0x00079267) popup_vtel_slider_window_t1_ParamLimits

0x7728,	// (0x00079267) popup_vtel_slider_window_t1

0xb4d2,	// (0x0007d011) main_cl_pane

0x5535,	// (0x00077074) popup_imed_adjust2_window_ParamLimits

0xc996,	// (0x0007e4d5) bg_tb_trans_pane_cp05_ParamLimits

0x0262,	// (0x00071da1) popup_imed_adjust2_window_g1_ParamLimits

0x0271,	// (0x00071db0) popup_imed_adjust2_window_g2_ParamLimits

0x0271,	// (0x00071db0) popup_imed_adjust2_window_g2

0x027d,	// (0x00071dbc) popup_imed_adjust2_window_g3_ParamLimits

0x027d,	// (0x00071dbc) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0008126b) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0008126b) popup_imed_adjust2_window_g

0x0289,	// (0x00071dc8) popup_imed_adjust2_window_t1_ParamLimits

0x02a1,	// (0x00071de0) slider_imed_adjust_pane_ParamLimits

0x02b5,	// (0x00071df4) slider_imed_adjust_pane_g1_ParamLimits

0x02c5,	// (0x00071e04) slider_imed_adjust_pane_g2_ParamLimits

0x02d5,	// (0x00071e14) slider_imed_adjust_pane_g3_ParamLimits

0x02e6,	// (0x00071e25) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x00081272) slider_imed_adjust_pane_g_ParamLimits

0x6cb7,	// (0x000787f6) aid_touch_area_cam4_ParamLimits

0x6cb7,	// (0x000787f6) aid_touch_area_cam4

0x6cc7,	// (0x00078806) battery_pane_cp01

0x6d4e,	// (0x0007888d) main_camera4_pane_g6_ParamLimits

0x6d4e,	// (0x0007888d) main_camera4_pane_g6

0x6d6c,	// (0x000788ab) main_camera4_pane_t2_ParamLimits

0x6d6c,	// (0x000788ab) main_camera4_pane_t2

0x0001,

0xf835,	// (0x00081374) main_camera4_pane_t_ParamLimits

0xf835,	// (0x00081374) main_camera4_pane_t

0x6df3,	// (0x00078932) aid_touch_area_vid4_ParamLimits

0x6df3,	// (0x00078932) aid_touch_area_vid4

0x6e33,	// (0x00078972) main_video4_pane_g5_ParamLimits

0x6e33,	// (0x00078972) main_video4_pane_g5

0x6e57,	// (0x00078996) vid4_progress_pane_ParamLimits

0x6e57,	// (0x00078996) vid4_progress_pane

0x07a7,	// (0x000722e6) main_cset_slider_pane_g18_ParamLimits

0x07a7,	// (0x000722e6) main_cset_slider_pane_g18

0x09bd,	// (0x000724fc) cell_cam4_burst_pane_g2_ParamLimits

0x09bd,	// (0x000724fc) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x000814c9) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x000814c9) cell_cam4_burst_pane_g

0x7b6d,	// (0x000796ac) bg_cl_pane_ParamLimits

0x7b6d,	// (0x000796ac) bg_cl_pane

0x7b79,	// (0x000796b8) cl_header_pane_ParamLimits

0x7b79,	// (0x000796b8) cl_header_pane

0x7b85,	// (0x000796c4) cl_listscroll_pane_ParamLimits

0x7b85,	// (0x000796c4) cl_listscroll_pane

0x0b9b,	// (0x000726da) bg_cl_pane_g1

0x0ba3,	// (0x000726e2) bg_cl_pane_g2

0x0bab,	// (0x000726ea) bg_cl_pane_g3

0x0bb3,	// (0x000726f2) bg_cl_pane_g4

0x0bbb,	// (0x000726fa) bg_cl_pane_g5

0x0bc3,	// (0x00072702) bg_cl_pane_g6

0x0bcb,	// (0x0007270a) bg_cl_pane_g7

0x0bd3,	// (0x00072712) bg_cl_pane_g8

0x0bdb,	// (0x0007271a) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x00081504) bg_cl_pane_g

0x7b91,	// (0x000796d0) aid_height_cl_leading_ParamLimits

0x7b91,	// (0x000796d0) aid_height_cl_leading

0x7b9d,	// (0x000796dc) aid_height_cl_text_ParamLimits

0x7b9d,	// (0x000796dc) aid_height_cl_text

0xb4dc,	// (0x0007d01b) bg_cl_header_pane_ParamLimits

0xb4dc,	// (0x0007d01b) bg_cl_header_pane

0x7bb5,	// (0x000796f4) cl_header_pane_g1_ParamLimits

0x7bb5,	// (0x000796f4) cl_header_pane_g1

0x7bc2,	// (0x00079701) cl_header_pane_t1_ParamLimits

0x7bc2,	// (0x00079701) cl_header_pane_t1

0x0be3,	// (0x00072722) cl_list_pane

0x077a,	// (0x000722b9) hc_scroll_pane_cp01

0xc01e,	// (0x0007db5d) bg_cl_header_pane_g1

0x064e,	// (0x0007218d) bg_cl_header_pane_g2

0xc03e,	// (0x0007db7d) bg_cl_header_pane_g3

0x065e,	// (0x0007219d) bg_cl_header_pane_g4

0x0656,	// (0x00072195) bg_cl_header_pane_g5

0x08cc,	// (0x0007240b) bg_cl_header_pane_g6

0x0676,	// (0x000721b5) bg_cl_header_pane_g7

0x067e,	// (0x000721bd) bg_cl_header_pane_g8

0x066e,	// (0x000721ad) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x00081517) bg_cl_header_pane_g

0x7bd4,	// (0x00079713) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7bd4,	// (0x00079713) hc_cl_list_double_graphic_heading_pane

0x7be5,	// (0x00079724) hc_cl_list_single_graphic_pane_ParamLimits

0x7be5,	// (0x00079724) hc_cl_list_single_graphic_pane

0x7bfe,	// (0x0007973d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7bfe,	// (0x0007973d) hc_cl_list_single_graphic_pane_g1

0x7c0a,	// (0x00079749) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7c0a,	// (0x00079749) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0008152a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0008152a) hc_cl_list_single_graphic_pane_g

0x7c1e,	// (0x0007975d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7c1e,	// (0x0007975d) hc_cl_list_single_graphic_pane_t1

0x7bfe,	// (0x0007973d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7bfe,	// (0x0007973d) hc_cl_list_double_graphic_heading_pane_g1

0x7c33,	// (0x00079772) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7c33,	// (0x00079772) hc_cl_list_double_graphic_heading_pane_g2

0x7c47,	// (0x00079786) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7c47,	// (0x00079786) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0008152f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0008152f) hc_cl_list_double_graphic_heading_pane_g

0x7c5b,	// (0x0007979a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7c5b,	// (0x0007979a) hc_cl_list_double_graphic_heading_pane_t1

0x7c70,	// (0x000797af) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c70,	// (0x000797af) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x00081536) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x00081536) hc_cl_list_double_graphic_heading_pane_t

0x7c8d,	// (0x000797cc) vid4_progress_pane_g1

0x7c9d,	// (0x000797dc) vid4_progress_pane_g2

0x7cad,	// (0x000797ec) vid4_progress_pane_g3

0x7cbf,	// (0x000797fe) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0008153b) vid4_progress_pane_g

0x7cd7,	// (0x00079816) vid4_progress_pane_t1

0x7ced,	// (0x0007982c) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x00081546) vid4_progress_pane_t

0x7d17,	// (0x00079856) wait_bar_pane_cp07

0xeba9,	// (0x000806e8) blid_firmament_pane_ParamLimits

0xebec,	// (0x0008072b) popup_blid_sat_info2_window_g1

0xec10,	// (0x0008074f) popup_blid_sat_info2_window_t3

0xec1e,	// (0x0008075d) popup_blid_sat_info2_window_t4

0xec2c,	// (0x0008076b) popup_blid_sat_info2_window_t5

0xec3a,	// (0x00080779) popup_blid_sat_info2_window_t6

0xec4a,	// (0x00080789) popup_blid_sat_info2_window_t7

0xec58,	// (0x00080797) popup_blid_sat_info2_window_t8

0xec66,	// (0x000807a5) popup_blid_sat_info2_window_t9

0xec74,	// (0x000807b3) popup_blid_sat_info2_window_t10

0xed35,	// (0x00080874) aid_firma_cardinal_ParamLimits

0xed49,	// (0x00080888) blid_firmament_pane_t1_ParamLimits

0xed60,	// (0x0008089f) blid_firmament_pane_t2_ParamLimits

0xed77,	// (0x000808b6) blid_firmament_pane_t3_ParamLimits

0xed8e,	// (0x000808cd) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x00081164) blid_firmament_pane_t_ParamLimits

0xeda5,	// (0x000808e4) blid_sat_info_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) main_cam_set_pane_ParamLimits

0x6337,	// (0x00077e76) aid_size_cell_colour_35_ParamLimits

0x6351,	// (0x00077e90) aid_size_cell_colour_112_ParamLimits

0x6368,	// (0x00077ea7) aid_size_cell_effect_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp02_ParamLimits

0xc9c6,	// (0x0007e505) heading_imed_pane_ParamLimits

0x6382,	// (0x00077ec1) listscroll_imed_pane_ParamLimits

0xe096,	// (0x0007fbd5) popup_call2_audio_first_window_g5_ParamLimits

0xe096,	// (0x0007fbd5) popup_call2_audio_first_window_g5

0x69ab,	// (0x000784ea) aid_size_touch_image3_arrow_left_ParamLimits

0x69ab,	// (0x000784ea) aid_size_touch_image3_arrow_left

0x69c1,	// (0x00078500) aid_size_touch_image3_arrow_right_ParamLimits

0x69c1,	// (0x00078500) aid_size_touch_image3_arrow_right

0x7d02,	// (0x00079841) vid4_progress_pane_t3

0x6503,	// (0x00078042) main_hwr_training_symbol_option_pane_ParamLimits

0x6503,	// (0x00078042) main_hwr_training_symbol_option_pane

0x049b,	// (0x00071fda) popup_hwr_training_preview_window_ParamLimits

0x049b,	// (0x00071fda) popup_hwr_training_preview_window

0x6564,	// (0x000780a3) hwr_training_navi_pane_g5_ParamLimits

0x6564,	// (0x000780a3) hwr_training_navi_pane_g5

0x063c,	// (0x0007217b) popup_char_count_window

0xb4dc,	// (0x0007d01b) bg_popup_sub_pane_cp20_ParamLimits

0x781b,	// (0x0007935a) list_vitu2_match_list_pane_ParamLimits

0x7827,	// (0x00079366) vitu2_page_scroll_pane_ParamLimits

0x7827,	// (0x00079366) vitu2_page_scroll_pane

0xa861,	// (0x0007c3a0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xa861,	// (0x0007c3a0) list_single_hwr_training_symbol_option_pane

0xa874,	// (0x0007c3b3) list_single_hwr_training_symbol_option_pane_g1

0xa87c,	// (0x0007c3bb) list_single_hwr_training_symbol_option_pane_t1

0xa88a,	// (0x0007c3c9) bg_button_pane_cp023

0xa893,	// (0x0007c3d2) bg_button_pane_cp024

0xa8c6,	// (0x0007c405) vitu2_page_scroll_pane_g1

0xa8ce,	// (0x0007c40d) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0008154d) vitu2_page_scroll_pane_g

0xa8d6,	// (0x0007c415) vitu2_page_scroll_pane_t1

0xeb1f,	// (0x0008065e) popup_char_count_window_g1

0xa8e5,	// (0x0007c424) popup_char_count_window_g2

0xa8ee,	// (0x0007c42d) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x00081552) popup_char_count_window_g

0xa8f7,	// (0x0007c436) popup_char_count_window_t1

0xb4d2,	// (0x0007d011) main_vded2_pane

0x024e,	// (0x00071d8d) aid_size_cell_imed_line

0x0258,	// (0x00071d97) grid_imed_line_width_pane

0x6ec5,	// (0x00078a04) vid4_indicators_pane_g4

0xa905,	// (0x0007c444) cell_imed_line_width_pane_ParamLimits

0xa905,	// (0x0007c444) cell_imed_line_width_pane

0xa919,	// (0x0007c458) cell_imed_line_width_pane_g1

0xa922,	// (0x0007c461) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x00081559) cell_imed_line_width_pane_g

0x7d32,	// (0x00079871) main_vded2_pane_g1_ParamLimits

0x7d32,	// (0x00079871) main_vded2_pane_g1

0x7d3f,	// (0x0007987e) main_vded2_pane_g2_ParamLimits

0x7d3f,	// (0x0007987e) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0008155e) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0008155e) main_vded2_pane_g

0x7d4d,	// (0x0007988c) vded2_slider_pane_ParamLimits

0x7d4d,	// (0x0007988c) vded2_slider_pane

0x7d5a,	// (0x00079899) aid_size_touch_vded2_end

0x7d64,	// (0x000798a3) aid_size_touch_vded2_playhead

0xa92a,	// (0x0007c469) aid_size_touch_vded2_start

0xa932,	// (0x0007c471) vded2_slider_bg_pane

0xa93b,	// (0x0007c47a) vded2_slider_pane_g1

0xa944,	// (0x0007c483) vded2_slider_pane_g2

0x7d6c,	// (0x000798ab) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x00081563) vded2_slider_pane_g

0xa94c,	// (0x0007c48b) vded2_slider_bg_pane_g1

0xa955,	// (0x0007c494) vded2_slider_bg_pane_g2

0xa95e,	// (0x0007c49d) vded2_slider_bg_pane_g3

0x0002,

0xfa2b,	// (0x0008156a) vded2_slider_bg_pane_g

0x4d46,	// (0x00076885) aid_postcard_touch_down_pane_ParamLimits

0x4d46,	// (0x00076885) aid_postcard_touch_down_pane

0x4d56,	// (0x00076895) aid_postcard_touch_up_pane_ParamLimits

0x4d56,	// (0x00076895) aid_postcard_touch_up_pane

0xb4d2,	// (0x0007d011) main_blid2_pane

0x54c0,	// (0x00076fff) popup_blid2_search_window

0xb4d2,	// (0x0007d011) blid2_gps_pane

0xb4d2,	// (0x0007d011) blid2_navig_pane

0xb4d2,	// (0x0007d011) blid2_search_pane

0xb4d2,	// (0x0007d011) blid2_tripm_pane

0x7d75,	// (0x000798b4) blid2_search_pane_g1_ParamLimits

0x7d75,	// (0x000798b4) blid2_search_pane_g1

0x7d85,	// (0x000798c4) blid2_search_pane_t1_ParamLimits

0x7d85,	// (0x000798c4) blid2_search_pane_t1

0x7d97,	// (0x000798d6) aid_size_cell_blid2_gps_ParamLimits

0x7d97,	// (0x000798d6) aid_size_cell_blid2_gps

0x7da7,	// (0x000798e6) blid2_gps_pane_g1_ParamLimits

0x7da7,	// (0x000798e6) blid2_gps_pane_g1

0x7db3,	// (0x000798f2) grid_blid2_satellite_pane_ParamLimits

0x7db3,	// (0x000798f2) grid_blid2_satellite_pane

0x7dc3,	// (0x00079902) blid2_navig_pane_g1_ParamLimits

0x7dc3,	// (0x00079902) blid2_navig_pane_g1

0x7dcf,	// (0x0007990e) blid2_navig_pane_t1_ParamLimits

0x7dcf,	// (0x0007990e) blid2_navig_pane_t1

0x7de1,	// (0x00079920) blid2_navig_pane_t2_ParamLimits

0x7de1,	// (0x00079920) blid2_navig_pane_t2

0x0001,

0xfa32,	// (0x00081571) blid2_navig_pane_t_ParamLimits

0xfa32,	// (0x00081571) blid2_navig_pane_t

0x7df3,	// (0x00079932) blid2_navig_ring_pane_ParamLimits

0x7df3,	// (0x00079932) blid2_navig_ring_pane

0x7e03,	// (0x00079942) blid2_speed_pane_ParamLimits

0x7e03,	// (0x00079942) blid2_speed_pane

0x7e0f,	// (0x0007994e) blid2_tripm_pane_g1_ParamLimits

0x7e0f,	// (0x0007994e) blid2_tripm_pane_g1

0x7e1f,	// (0x0007995e) blid2_tripm_pane_g2_ParamLimits

0x7e1f,	// (0x0007995e) blid2_tripm_pane_g2

0x7e2b,	// (0x0007996a) blid2_tripm_pane_g3_ParamLimits

0x7e2b,	// (0x0007996a) blid2_tripm_pane_g3

0x7e37,	// (0x00079976) blid2_tripm_pane_g4_ParamLimits

0x7e37,	// (0x00079976) blid2_tripm_pane_g4

0x7e43,	// (0x00079982) blid2_tripm_pane_g5_ParamLimits

0x7e43,	// (0x00079982) blid2_tripm_pane_g5

0x0005,

0xfa37,	// (0x00081576) blid2_tripm_pane_g_ParamLimits

0xfa37,	// (0x00081576) blid2_tripm_pane_g

0x7e5f,	// (0x0007999e) blid2_tripm_pane_t1_ParamLimits

0x7e5f,	// (0x0007999e) blid2_tripm_pane_t1

0x7e73,	// (0x000799b2) blid2_tripm_pane_t2_ParamLimits

0x7e73,	// (0x000799b2) blid2_tripm_pane_t2

0x7e85,	// (0x000799c4) blid2_tripm_pane_t3_ParamLimits

0x7e85,	// (0x000799c4) blid2_tripm_pane_t3

0x0003,

0xfa44,	// (0x00081583) blid2_tripm_pane_t_ParamLimits

0xfa44,	// (0x00081583) blid2_tripm_pane_t

0x7eb7,	// (0x000799f6) cell_blid2_satellite_pane_ParamLimits

0x7eb7,	// (0x000799f6) cell_blid2_satellite_pane

0x7ed1,	// (0x00079a10) cell_blid2_satellite_pane_g1

0xa967,	// (0x0007c4a6) cell_blid2_satellite_pane_t1

0xbe19,	// (0x0007d958) blid2_speed_pane_g1

0xa975,	// (0x0007c4b4) blid2_speed_pane_t1

0xa983,	// (0x0007c4c2) blid2_speed_pane_t2

0x0001,

0xfa4d,	// (0x0008158c) blid2_speed_pane_t

0xbe19,	// (0x0007d958) blid2_navig_ring_pane_g1

0x7eda,	// (0x00079a19) blid2_navig_ring_pane_g2

0x7ee2,	// (0x00079a21) blid2_navig_ring_pane_g3

0x7eea,	// (0x00079a29) blid2_navig_ring_pane_g4

0x7ef2,	// (0x00079a31) blid2_navig_ring_pane_g5

0x0004,

0xfa52,	// (0x00081591) blid2_navig_ring_pane_g

0xb4d2,	// (0x0007d011) bg_popup_window_pane_cp011

0xa991,	// (0x0007c4d0) popup_blid2_search_window_g1

0xa999,	// (0x0007c4d8) popup_blid2_search_window_t1

0xa9a7,	// (0x0007c4e6) popup_blid2_search_window_t2

0x0001,

0xfa5d,	// (0x0008159c) popup_blid2_search_window_t

0xbf2d,	// (0x0007da6c) main_browser_pane_g1

0xbc45,	// (0x0007d784) main_browser_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp011_ParamLimits

0x7128,	// (0x00078c67) cell_vitu2_function_pane_g1_ParamLimits

0xc996,	// (0x0007e4d5) bg_popup_sub_pane_cp22_ParamLimits

0x1d02,	// (0x00073841) input_focus_pane_cp08_ParamLimits

0x799c,	// (0x000794db) popup_vitu2_query_button_pane_ParamLimits

0x799c,	// (0x000794db) popup_vitu2_query_button_pane

0x1d1d,	// (0x0007385c) popup_vitu2_query_input_button_pane

0x0907,	// (0x00072446) popup_vitu2_query_window_g1_ParamLimits

0x1d27,	// (0x00073866) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0008149d) popup_vitu2_query_window_g_ParamLimits

0xb4d2,	// (0x0007d011) bg_button_pane_cp026

0x7efa,	// (0x00079a39) popup_vitu2_query_input_button_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp025

0xa9b5,	// (0x0007c4f4) popup_vitu2_query_button_pane_t1

0x593a,	// (0x00077479) main_mp3_pane_t6

0x594a,	// (0x00077489) popup_slider_window_cp01

0x6da2,	// (0x000788e1) cam4_battery_pane

0x6e82,	// (0x000789c1) cam4_battery_pane_cp02

0x7c85,	// (0x000797c4) cam4_battery_pane_cp01

0x7c85,	// (0x000797c4) cam4_battery_pane_cp03

0xbe19,	// (0x0007d958) cam4_battery_pane_g1

0xa9c3,	// (0x0007c502) cam4_battery_pane_g2

0x0001,

0xfa62,	// (0x000815a1) cam4_battery_pane_g

0xec82,	// (0x000807c1) popup_blid_sat_info2_window_t11

0xc6cf,	// (0x0007e20e) aid_size_touch_mv_arrow_left_ParamLimits

0xc6f8,	// (0x0007e237) aid_size_touch_mv_arrow_right_ParamLimits

0xc756,	// (0x0007e295) navi_pane_g1_ParamLimits

0xc762,	// (0x0007e2a1) navi_pane_g2_ParamLimits

0xc790,	// (0x0007e2cf) navi_pane_g3_ParamLimits

0xf339,	// (0x00080e78) navi_pane_g_ParamLimits

0x49fc,	// (0x0007653b) navi_pane_mv_t1_ParamLimits

0x638e,	// (0x00077ecd) grid_imed_effect_pane_ParamLimits

0x3517,	// (0x00075056) aid_placing_vt_slider_lsc

0xbe7c,	// (0x0007d9bb) aid_placing_vt_slider_prt

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp01_ParamLimits

0xef0e,	// (0x00080a4d) popup_image_details_window_g1_ParamLimits

0xef21,	// (0x00080a60) popup_image_details_window_g2_ParamLimits

0xef36,	// (0x00080a75) popup_image_details_window_g3_ParamLimits

0xef36,	// (0x00080a75) popup_image_details_window_g3

0xf665,	// (0x000811a4) popup_image_details_window_g_ParamLimits

0xef4a,	// (0x00080a89) popup_image_details_window_t1_ParamLimits

0xef5c,	// (0x00080a9b) popup_image_details_window_t2_ParamLimits

0xef75,	// (0x00080ab4) popup_image_details_window_t3_ParamLimits

0xef89,	// (0x00080ac8) popup_image_details_window_t4_ParamLimits

0xefa4,	// (0x00080ae3) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x000811ab) popup_image_details_window_t_ParamLimits

0x7ba9,	// (0x000796e8) cl_header_name_pane_ParamLimits

0x7ba9,	// (0x000796e8) cl_header_name_pane

0x7f02,	// (0x00079a41) cl_header_name_pane_t1_ParamLimits

0x7f02,	// (0x00079a41) cl_header_name_pane_t1

0x7f19,	// (0x00079a58) cl_header_name_pane_t2_ParamLimits

0x7f19,	// (0x00079a58) cl_header_name_pane_t2

0x7f43,	// (0x00079a82) cl_header_name_pane_t3_ParamLimits

0x7f43,	// (0x00079a82) cl_header_name_pane_t3

0x0002,

0xfa67,	// (0x000815a6) cl_header_name_pane_t_ParamLimits

0xfa67,	// (0x000815a6) cl_header_name_pane_t

0xc81f,	// (0x0007e35e) navi_pane_mv_g2_ParamLimits

0x0607,	// (0x00072146) field_vitu2_entry_pane_g1_ParamLimits

0x0613,	// (0x00072152) field_vitu2_entry_pane_g2_ParamLimits

0xc9a4,	// (0x0007e4e3) field_vitu2_entry_pane_g3_ParamLimits

0xc9a4,	// (0x0007e4e3) field_vitu2_entry_pane_g3

0xf867,	// (0x000813a6) field_vitu2_entry_pane_g_ParamLimits

0x70b6,	// (0x00078bf5) cell_vitu2_itu_pane_g1_ParamLimits

0x70ce,	// (0x00078c0d) cell_vitu2_itu_pane_g2_ParamLimits

0x70ce,	// (0x00078c0d) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x000813b2) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x000813b2) cell_vitu2_itu_pane_g

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp05_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp05

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp03

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp04

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp10_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp10

0x1ee8,	// (0x00073a27) bg_vkb2_func_pane_cp08

0x7984,	// (0x000794c3) bg_vkb2_func_pane_cp06

0x7b61,	// (0x000796a0) bg_vkb2_func_pane_cp07

0xa89c,	// (0x0007c3db) bg_vkb2_func_pane_cp11_ParamLimits

0xa89c,	// (0x0007c3db) bg_vkb2_func_pane_cp11

0xa8b1,	// (0x0007c3f0) bg_vkb2_func_pane_cp12_ParamLimits

0xa8b1,	// (0x0007c3f0) bg_vkb2_func_pane_cp12

0xb4d2,	// (0x0007d011) bg_vkb2_func_pane_cp09

0x064e,	// (0x0007218d) bg_vkb2_func_pane_g1

0xc03e,	// (0x0007db7d) bg_vkb2_func_pane_g2

0x0656,	// (0x00072195) bg_vkb2_func_pane_g3

0x065e,	// (0x0007219d) bg_vkb2_func_pane_g4

0x08cc,	// (0x0007240b) bg_vkb2_func_pane_g5

0x0676,	// (0x000721b5) bg_vkb2_func_pane_g6

0x067e,	// (0x000721bd) bg_vkb2_func_pane_g7

0x066e,	// (0x000721ad) bg_vkb2_func_pane_g8

0xc01e,	// (0x0007db5d) bg_vkb2_func_pane_g9

0x0008,

0xfa6e,	// (0x000815ad) bg_vkb2_func_pane_g

0x7e51,	// (0x00079990) blid2_tripm_pane_g6_ParamLimits

0x7e51,	// (0x00079990) blid2_tripm_pane_g6

0x0559,	// (0x00072098) mp4_progress_pane_g1

0x7eab,	// (0x000799ea) blid2_tripm_values_pane_ParamLimits

0x7eab,	// (0x000799ea) blid2_tripm_values_pane

0x7f68,	// (0x00079aa7) blid2_tripm_values_pane_t1

0x7f76,	// (0x00079ab5) blid2_tripm_values_pane_t2

0x7f84,	// (0x00079ac3) blid2_tripm_values_pane_t3

0x7f92,	// (0x00079ad1) blid2_tripm_values_pane_t4

0x7fa0,	// (0x00079adf) blid2_tripm_values_pane_t5

0x7fae,	// (0x00079aed) blid2_tripm_values_pane_t6

0x7fbc,	// (0x00079afb) blid2_tripm_values_pane_t7

0x7fca,	// (0x00079b09) blid2_tripm_values_pane_t8

0x7fd8,	// (0x00079b17) blid2_tripm_values_pane_t9

0x0008,

0xfa81,	// (0x000815c0) blid2_tripm_values_pane_t

0x3557,	// (0x00075096) call_video_pane_t1_ParamLimits

0x3578,	// (0x000750b7) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x00080d21) call_video_pane_t_ParamLimits

0x1af8,	// (0x00073637) msg_header_pane_g1_ParamLimits

0xca20,	// (0x0007e55f) msg_header_pane_g2_ParamLimits

0xca20,	// (0x0007e55f) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x00080f1b) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x00080f1b) msg_header_pane_g

0xbc45,	// (0x0007d784) main_clock2_pane_ParamLimits

0x6108,	// (0x00077c47) grid_clock2_toolbar_pane_ParamLimits

0x6108,	// (0x00077c47) grid_clock2_toolbar_pane

0x6108,	// (0x00077c47) listscroll_clock2_pane_ParamLimits

0x6108,	// (0x00077c47) listscroll_clock2_pane

0x61b8,	// (0x00077cf7) main_clock2_pane_t3_ParamLimits

0x61b8,	// (0x00077cf7) main_clock2_pane_t3

0x61ca,	// (0x00077d09) main_clock2_pane_t4_ParamLimits

0x61ca,	// (0x00077d09) main_clock2_pane_t4

0xa9cd,	// (0x0007c50c) cell_clock2_toolbar_pane

0xa9d5,	// (0x0007c514) cell_clock2_toolbar_pane_cp01

0xa9d5,	// (0x0007c514) cell_clock2_toolbar_pane_cp02

0xa9dd,	// (0x0007c51c) cell_clock2_toolbar_pane_cp03

0xa9e5,	// (0x0007c524) list_clock2_pane

0xc645,	// (0x0007e184) scroll_pane_cp10

0xa9ed,	// (0x0007c52c) list_single_clock2_pane_ParamLimits

0xa9ed,	// (0x0007c52c) list_single_clock2_pane

0xbdf7,	// (0x0007d936) list_highlight_pane_cp08

0xa9fa,	// (0x0007c539) list_single_clock2_pane_t1

0xaa08,	// (0x0007c547) list_single_clock2_pane_t2

0x0001,

0xfa94,	// (0x000815d3) list_single_clock2_pane_t

0xb4d2,	// (0x0007d011) bg_button_pane_cp10

0xaa16,	// (0x0007c555) cell_clock2_toolbar_pane_g1

0x4ca8,	// (0x000767e7) aid_main_viewer_pane_g1_ParamLimits

0x4ca8,	// (0x000767e7) aid_main_viewer_pane_g1

0x4cb4,	// (0x000767f3) aid_main_viewer_pane_g2_ParamLimits

0x4cb4,	// (0x000767f3) aid_main_viewer_pane_g2

0x4cc0,	// (0x000767ff) aid_main_viewer_pane_g3_ParamLimits

0x4cc0,	// (0x000767ff) aid_main_viewer_pane_g3

0x4cd1,	// (0x00076810) aid_main_viewer_pane_g4_ParamLimits

0x4cd1,	// (0x00076810) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x00080f2c) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x00080f2c) aid_main_viewer_pane_g

0x5498,	// (0x00076fd7) main_calc_pane_ParamLimits

0x54a5,	// (0x00076fe4) main_dialer2_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_cam6_pane

0xb4d2,	// (0x0007d011) main_vid6_pane

0x6114,	// (0x00077c53) listscroll_gen_pane_cp06_ParamLimits

0x6114,	// (0x00077c53) listscroll_gen_pane_cp06

0x61dc,	// (0x00077d1b) main_clock2_pane_t5_ParamLimits

0x61dc,	// (0x00077d1b) main_clock2_pane_t5

0x6229,	// (0x00077d68) aid_call2_pane_cp10_ParamLimits

0x623b,	// (0x00077d7a) aid_call_pane_cp10_ParamLimits

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g2_ParamLimits

0x624d,	// (0x00077d8c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x624d,	// (0x00077d8c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc6c3,	// (0x0007e202) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x00081260) popup_clock_analogue_window_cp10_g_ParamLimits

0x6263,	// (0x00077da2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6958,	// (0x00078497) cell_dialer2_keypad_pane_g2_ParamLimits

0x6958,	// (0x00078497) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x00081345) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x00081345) cell_dialer2_keypad_pane_g

0x6974,	// (0x000784b3) cell_dialer2_keypad_pane_t1

0x73e6,	// (0x00078f25) main_cset_text2_pane_ParamLimits

0x73e6,	// (0x00078f25) main_cset_text2_pane

0x0af3,	// (0x00072632) area_vitu2_query_pane_g1_ParamLimits

0x1e02,	// (0x00073941) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x000814f0) area_vitu2_query_pane_g_ParamLimits

0x1eb3,	// (0x000739f2) area_vitu2_query_pane_t7_ParamLimits

0x1eb3,	// (0x000739f2) area_vitu2_query_pane_t7

0x7984,	// (0x000794c3) bg_button_pane_cp018_ParamLimits

0x7b61,	// (0x000796a0) bg_button_pane_cp021_ParamLimits

0x1ed7,	// (0x00073a16) bg_button_pane_cp022_ParamLimits

0x1ee8,	// (0x00073a27) bg_vkb2_func_pane_cp08_ParamLimits

0x7984,	// (0x000794c3) bg_vkb2_func_pane_cp06_ParamLimits

0x7b61,	// (0x000796a0) bg_vkb2_func_pane_cp07_ParamLimits

0x1efa,	// (0x00073a39) input_focus_pane_cp09_ParamLimits

0x7fe6,	// (0x00079b25) cam6_autofocus_pane_ParamLimits

0x7fe6,	// (0x00079b25) cam6_autofocus_pane

0x8002,	// (0x00079b41) cam6_image_uncrop_pane_ParamLimits

0x8002,	// (0x00079b41) cam6_image_uncrop_pane

0x803b,	// (0x00079b7a) cam6_indi_pane_ParamLimits

0x803b,	// (0x00079b7a) cam6_indi_pane

0x8055,	// (0x00079b94) cam6_mode_pane_ParamLimits

0x8055,	// (0x00079b94) cam6_mode_pane

0x8069,	// (0x00079ba8) cam6_timer_pane_ParamLimits

0x8069,	// (0x00079ba8) cam6_timer_pane

0x807d,	// (0x00079bbc) cam6_zoom_pane_ParamLimits

0x807d,	// (0x00079bbc) cam6_zoom_pane

0x8098,	// (0x00079bd7) cam6_mode_pane_g1_ParamLimits

0x8098,	// (0x00079bd7) cam6_mode_pane_g1

0x80a4,	// (0x00079be3) cam6_mode_pane_g2_ParamLimits

0x80a4,	// (0x00079be3) cam6_mode_pane_g2

0x80b0,	// (0x00079bef) cam6_mode_pane_g3_ParamLimits

0x80b0,	// (0x00079bef) cam6_mode_pane_g3

0x80bc,	// (0x00079bfb) cam6_mode_pane_g4_ParamLimits

0x80bc,	// (0x00079bfb) cam6_mode_pane_g4

0x0003,

0xfa99,	// (0x000815d8) cam6_mode_pane_g_ParamLimits

0xfa99,	// (0x000815d8) cam6_mode_pane_g

0x088d,	// (0x000723cc) bg_tb_trans_pane_cp08_ParamLimits

0x088d,	// (0x000723cc) bg_tb_trans_pane_cp08

0xaa1e,	// (0x0007c55d) cam6_battery_pane_ParamLimits

0xaa1e,	// (0x0007c55d) cam6_battery_pane

0xaa34,	// (0x0007c573) cam6_indi_pane_g1_ParamLimits

0xaa34,	// (0x0007c573) cam6_indi_pane_g1

0xaa46,	// (0x0007c585) cam6_indi_pane_g2_ParamLimits

0xaa46,	// (0x0007c585) cam6_indi_pane_g2

0xaa58,	// (0x0007c597) cam6_indi_pane_g3_ParamLimits

0xaa58,	// (0x0007c597) cam6_indi_pane_g3

0x0002,

0xfaa2,	// (0x000815e1) cam6_indi_pane_g_ParamLimits

0xfaa2,	// (0x000815e1) cam6_indi_pane_g

0xaa6a,	// (0x0007c5a9) cam6_indi_pane_t1_ParamLimits

0xaa6a,	// (0x0007c5a9) cam6_indi_pane_t1

0x6efa,	// (0x00078a39) cam6_autofocus_pane_g1

0x6f02,	// (0x00078a41) cam6_autofocus_pane_g2

0x6f0a,	// (0x00078a49) cam6_autofocus_pane_g3

0x6f12,	// (0x00078a51) cam6_autofocus_pane_g4

0x0003,

0xfaa9,	// (0x000815e8) cam6_autofocus_pane_g

0xaa90,	// (0x0007c5cf) cam6_timer_pane_g1

0xaa98,	// (0x0007c5d7) cam6_timer_pane_t1

0xaaa6,	// (0x0007c5e5) cam6_zoom_cont_pane

0xaaae,	// (0x0007c5ed) cam6_zoom_pane_g1

0xaab7,	// (0x0007c5f6) cam6_zoom_pane_g2

0x80c8,	// (0x00079c07) cam6_zoom_pane_g3

0x0002,

0xfab2,	// (0x000815f1) cam6_zoom_pane_g

0xbe19,	// (0x0007d958) cam6_battery_pane_g1

0xbe19,	// (0x0007d958) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x00080edc) cam6_battery_pane_g

0xaaae,	// (0x0007c5ed) cam6_zoom_cont_pane_g1

0xaab7,	// (0x0007c5f6) cam6_zoom_cont_pane_g2

0xaac0,	// (0x0007c5ff) cam6_zoom_cont_pane_g3

0x0002,

0xfab9,	// (0x000815f8) cam6_zoom_cont_pane_g

0x80e6,	// (0x00079c25) cam6_mode_pane_cp_ParamLimits

0x80e6,	// (0x00079c25) cam6_mode_pane_cp

0x80fa,	// (0x00079c39) cam6_zoom_pane_cp_ParamLimits

0x80fa,	// (0x00079c39) cam6_zoom_pane_cp

0x8112,	// (0x00079c51) vid6_image_uncrop_cif_pane_ParamLimits

0x8112,	// (0x00079c51) vid6_image_uncrop_cif_pane

0x813e,	// (0x00079c7d) vid6_image_uncrop_nhd_pane_ParamLimits

0x813e,	// (0x00079c7d) vid6_image_uncrop_nhd_pane

0x815b,	// (0x00079c9a) vid6_image_uncrop_vga_pane_ParamLimits

0x815b,	// (0x00079c9a) vid6_image_uncrop_vga_pane

0x817a,	// (0x00079cb9) vid6_image_uncrop_wvga_pane_ParamLimits

0x817a,	// (0x00079cb9) vid6_image_uncrop_wvga_pane

0x8197,	// (0x00079cd6) vid6_indi_pane_ParamLimits

0x8197,	// (0x00079cd6) vid6_indi_pane

0x088d,	// (0x000723cc) bg_tb_trans_pane_cp09_ParamLimits

0x088d,	// (0x000723cc) bg_tb_trans_pane_cp09

0xaad8,	// (0x0007c617) cam6_battery_pane_cp_ParamLimits

0xaad8,	// (0x0007c617) cam6_battery_pane_cp

0xaae4,	// (0x0007c623) vid6_indi_pane_g1_ParamLimits

0xaae4,	// (0x0007c623) vid6_indi_pane_g1

0xaaf6,	// (0x0007c635) vid6_indi_pane_g2_ParamLimits

0xaaf6,	// (0x0007c635) vid6_indi_pane_g2

0xab08,	// (0x0007c647) vid6_indi_pane_g3_ParamLimits

0xab08,	// (0x0007c647) vid6_indi_pane_g3

0xab1d,	// (0x0007c65c) vid6_indi_pane_g4_ParamLimits

0xab1d,	// (0x0007c65c) vid6_indi_pane_g4

0xab32,	// (0x0007c671) vid6_indi_pane_g5_ParamLimits

0xab32,	// (0x0007c671) vid6_indi_pane_g5

0x0004,

0xfac0,	// (0x000815ff) vid6_indi_pane_g_ParamLimits

0xfac0,	// (0x000815ff) vid6_indi_pane_g

0xab4c,	// (0x0007c68b) vid6_indi_pane_t1_ParamLimits

0xab4c,	// (0x0007c68b) vid6_indi_pane_t1

0xab62,	// (0x0007c6a1) vid6_indi_pane_t2_ParamLimits

0xab62,	// (0x0007c6a1) vid6_indi_pane_t2

0xab8a,	// (0x0007c6c9) vid6_indi_pane_t3_ParamLimits

0xab8a,	// (0x0007c6c9) vid6_indi_pane_t3

0xabb2,	// (0x0007c6f1) vid6_indi_pane_t4_ParamLimits

0xabb2,	// (0x0007c6f1) vid6_indi_pane_t4

0x0003,

0xfacb,	// (0x0008160a) vid6_indi_pane_t_ParamLimits

0xfacb,	// (0x0008160a) vid6_indi_pane_t

0xabd6,	// (0x0007c715) wait_bar_pane_cp08

0x81bc,	// (0x00079cfb) main_cset_text2_pane_t1_ParamLimits

0x81bc,	// (0x00079cfb) main_cset_text2_pane_t1

0x80d1,	// (0x00079c10) listscroll_gen_pane_cp06_t1_ParamLimits

0x80d1,	// (0x00079c10) listscroll_gen_pane_cp06_t1

0xb4d2,	// (0x0007d011) main_cam6_set_pane

0xbbd3,	// (0x0007d712) bg_tb_trans_pane_cp06_ParamLimits

0x6daa,	// (0x000788e9) cam4_indicators_pane_g1_ParamLimits

0x6dbb,	// (0x000788fa) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x00081382) cam4_indicators_pane_g_ParamLimits

0x6dd9,	// (0x00078918) cam4_indicators_pane_t1_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_tb_trans_pane_cp07_ParamLimits

0x6e8c,	// (0x000789cb) vid4_indicators_pane_g1_ParamLimits

0x6ea0,	// (0x000789df) vid4_indicators_pane_g2_ParamLimits

0x6eb4,	// (0x000789f3) vid4_indicators_pane_g3_ParamLimits

0x6ec5,	// (0x00078a04) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x00081394) vid4_indicators_pane_g_ParamLimits

0x6ee3,	// (0x00078a22) vid4_indicators_pane_t1_ParamLimits

0x7c8d,	// (0x000797cc) vid4_progress_pane_g1_ParamLimits

0x7c9d,	// (0x000797dc) vid4_progress_pane_g2_ParamLimits

0x7cad,	// (0x000797ec) vid4_progress_pane_g3_ParamLimits

0x7cbf,	// (0x000797fe) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0008153b) vid4_progress_pane_g_ParamLimits

0x7cd7,	// (0x00079816) vid4_progress_pane_t1_ParamLimits

0x7ced,	// (0x0007982c) vid4_progress_pane_t2_ParamLimits

0x7d02,	// (0x00079841) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x00081546) vid4_progress_pane_t_ParamLimits

0x7d17,	// (0x00079856) wait_bar_pane_cp07_ParamLimits

0x81ef,	// (0x00079d2e) main_cam6_set_pane_g2_ParamLimits

0x81ef,	// (0x00079d2e) main_cam6_set_pane_g2

0x81fb,	// (0x00079d3a) main_cset6_listscroll_pane_ParamLimits

0x81fb,	// (0x00079d3a) main_cset6_listscroll_pane

0x8226,	// (0x00079d65) main_cset6_slider_pane_ParamLimits

0x8226,	// (0x00079d65) main_cset6_slider_pane

0x8232,	// (0x00079d71) main_cset6_text2_pane_ParamLimits

0x8232,	// (0x00079d71) main_cset6_text2_pane

0xabe5,	// (0x0007c724) main_cset6_text_pane

0xabed,	// (0x0007c72c) main_cset_list_pane_copy1_ParamLimits

0xabed,	// (0x0007c72c) main_cset_list_pane_copy1

0xabfd,	// (0x0007c73c) scroll_pane_cp028_copy1

0x8245,	// (0x00079d84) cset_list_set_pane_copy1

0x8258,	// (0x00079d97) aid_position_infowindow_above_copy1

0x8260,	// (0x00079d9f) aid_position_infowindow_below_copy1

0x8268,	// (0x00079da7) cset_list_set_pane_g1_copy1

0x1cc9,	// (0x00073808) cset_list_set_pane_g3_copy1_ParamLimits

0x1cc9,	// (0x00073808) cset_list_set_pane_g3_copy1

0x1cd8,	// (0x00073817) cset_list_set_pane_t1_copy1_ParamLimits

0x1cd8,	// (0x00073817) cset_list_set_pane_t1_copy1

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp021_copy1_ParamLimits

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp021_copy1

0xac06,	// (0x0007c745) cset6_slider_pane_ParamLimits

0xac06,	// (0x0007c745) cset6_slider_pane

0xac32,	// (0x0007c771) main_cset6_slider_pane_g1_ParamLimits

0xac32,	// (0x0007c771) main_cset6_slider_pane_g1

0x8270,	// (0x00079daf) main_cset6_slider_pane_g2_ParamLimits

0x8270,	// (0x00079daf) main_cset6_slider_pane_g2

0xac5a,	// (0x0007c799) main_cset6_slider_pane_g3_ParamLimits

0xac5a,	// (0x0007c799) main_cset6_slider_pane_g3

0x8298,	// (0x00079dd7) main_cset6_slider_pane_g4_ParamLimits

0x8298,	// (0x00079dd7) main_cset6_slider_pane_g4

0x82a4,	// (0x00079de3) main_cset6_slider_pane_g5_ParamLimits

0x82a4,	// (0x00079de3) main_cset6_slider_pane_g5

0x078f,	// (0x000722ce) main_cset6_slider_pane_g7_ParamLimits

0x078f,	// (0x000722ce) main_cset6_slider_pane_g7

0x079b,	// (0x000722da) main_cset6_slider_pane_g8_ParamLimits

0x079b,	// (0x000722da) main_cset6_slider_pane_g8

0x82b2,	// (0x00079df1) main_cset6_slider_pane_g9_ParamLimits

0x82b2,	// (0x00079df1) main_cset6_slider_pane_g9

0x82be,	// (0x00079dfd) main_cset6_slider_pane_g10_ParamLimits

0x82be,	// (0x00079dfd) main_cset6_slider_pane_g10

0x82ca,	// (0x00079e09) main_cset6_slider_pane_g11_ParamLimits

0x82ca,	// (0x00079e09) main_cset6_slider_pane_g11

0x82d6,	// (0x00079e15) main_cset6_slider_pane_g12_ParamLimits

0x82d6,	// (0x00079e15) main_cset6_slider_pane_g12

0x82e2,	// (0x00079e21) main_cset6_slider_pane_g13_ParamLimits

0x82e2,	// (0x00079e21) main_cset6_slider_pane_g13

0x82ee,	// (0x00079e2d) main_cset6_slider_pane_g14_ParamLimits

0x82ee,	// (0x00079e2d) main_cset6_slider_pane_g14

0x82fa,	// (0x00079e39) main_cset6_slider_pane_g15_ParamLimits

0x82fa,	// (0x00079e39) main_cset6_slider_pane_g15

0x8312,	// (0x00079e51) main_cset6_slider_pane_g16_ParamLimits

0x8312,	// (0x00079e51) main_cset6_slider_pane_g16

0x8320,	// (0x00079e5f) main_cset6_slider_pane_g17_ParamLimits

0x8320,	// (0x00079e5f) main_cset6_slider_pane_g17

0x0011,

0xfad4,	// (0x00081613) main_cset6_slider_pane_g_ParamLimits

0xfad4,	// (0x00081613) main_cset6_slider_pane_g

0xac66,	// (0x0007c7a5) main_cset6_slider_pane_t1_ParamLimits

0xac66,	// (0x0007c7a5) main_cset6_slider_pane_t1

0x8346,	// (0x00079e85) main_cset6_slider_pane_t2_ParamLimits

0x8346,	// (0x00079e85) main_cset6_slider_pane_t2

0x8371,	// (0x00079eb0) main_cset6_slider_pane_t3_ParamLimits

0x8371,	// (0x00079eb0) main_cset6_slider_pane_t3

0x839c,	// (0x00079edb) main_cset6_slider_pane_t4_ParamLimits

0x839c,	// (0x00079edb) main_cset6_slider_pane_t4

0x83c7,	// (0x00079f06) main_cset6_slider_pane_t5_ParamLimits

0x83c7,	// (0x00079f06) main_cset6_slider_pane_t5

0xaca7,	// (0x0007c7e6) main_cset6_slider_pane_t7_ParamLimits

0xaca7,	// (0x0007c7e6) main_cset6_slider_pane_t7

0x83f4,	// (0x00079f33) main_cset6_slider_pane_t8_ParamLimits

0x83f4,	// (0x00079f33) main_cset6_slider_pane_t8

0x8418,	// (0x00079f57) main_cset6_slider_pane_t9_ParamLimits

0x8418,	// (0x00079f57) main_cset6_slider_pane_t9

0x843c,	// (0x00079f7b) main_cset6_slider_pane_t10_ParamLimits

0x843c,	// (0x00079f7b) main_cset6_slider_pane_t10

0x8460,	// (0x00079f9f) main_cset6_slider_pane_t11_ParamLimits

0x8460,	// (0x00079f9f) main_cset6_slider_pane_t11

0xacdd,	// (0x0007c81c) main_cset6_slider_pane_t14_ParamLimits

0xacdd,	// (0x0007c81c) main_cset6_slider_pane_t14

0xad16,	// (0x0007c855) main_cset6_slider_pane_t15_ParamLimits

0xad16,	// (0x0007c855) main_cset6_slider_pane_t15

0x000b,

0xfaf9,	// (0x00081638) main_cset6_slider_pane_t_ParamLimits

0xfaf9,	// (0x00081638) main_cset6_slider_pane_t

0x0bec,	// (0x0007272b) cset_slider_pane_g1_copy1

0x0bf5,	// (0x00072734) cset_slider_pane_g2_copy1

0x0bfe,	// (0x0007273d) cset_slider_pane_g3_copy1

0xb4d2,	// (0x0007d011) bg_popup_sub_pane_cp011_copy1

0xad4f,	// (0x0007c88e) main_cset_text_pane_g1_copy1

0x091b,	// (0x0007245a) main_cset_text_pane_t1_copy1

0x0929,	// (0x00072468) main_cset_text_pane_t2_copy1

0x0937,	// (0x00072476) main_cset_text_pane_t3_copy1

0x0945,	// (0x00072484) main_cset_text_pane_t4_copy1

0x0953,	// (0x00072492) main_cset_text_pane_t5_copy1

0xad57,	// (0x0007c896) main_cset_text_pane_t6_copy1

0xad65,	// (0x0007c8a4) main_cset_text_pane_t7_copy1

0x8484,	// (0x00079fc3) main_cset_text2_pane_t1_copy1

0xbb7a,	// (0x0007d6b9) main_ncimui_pane

0x54f6,	// (0x00077035) popup_query_ncimui_window_ParamLimits

0x54f6,	// (0x00077035) popup_query_ncimui_window

0x5aa3,	// (0x000775e2) field_cale_ev2_pane_g4_ParamLimits

0x5aa3,	// (0x000775e2) field_cale_ev2_pane_g4

0x6638,	// (0x00078177) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6638,	// (0x00078177) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0008131c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0008131c) cell_video_dialer_keypad_pane_g

0x6650,	// (0x0007818f) cell_video_dialer_keypad_pane_t1

0xb4d2,	// (0x0007d011) bg_popup_window_pane_cp012

0xe8f7,	// (0x00080436) heading_pane_cp06

0xad91,	// (0x0007c8d0) ncim_query_content_pane

0xb4d2,	// (0x0007d011) bg_popup_heading_pane_cp01

0xad99,	// (0x0007c8d8) ncim_heading_pane_t1

0xada7,	// (0x0007c8e6) ncim_indicator_popup_pane

0xadb9,	// (0x0007c8f8) ncim_query_button_pane

0xadcd,	// (0x0007c90c) ncim_query_content_pane_t1

0xaddf,	// (0x0007c91e) ncim_query_content_pane_t2

0x0005,

0xfb3d,	// (0x0008167c) ncim_query_content_pane_t

0xae19,	// (0x0007c958) ncim_query_list_pane

0xae2b,	// (0x0007c96a) ncim_query_popup_pane

0xada7,	// (0x0007c8e6) ncim_indicator_popup_pane_ParamLimits

0x85d7,	// (0x0007a116) ncim_query_content_pane_g1_ParamLimits

0x85d7,	// (0x0007a116) ncim_query_content_pane_g1

0xadcd,	// (0x0007c90c) ncim_query_content_pane_t1_ParamLimits

0xaddf,	// (0x0007c91e) ncim_query_content_pane_t2_ParamLimits

0x85e3,	// (0x0007a122) ncim_query_content_pane_t3_ParamLimits

0x85e3,	// (0x0007a122) ncim_query_content_pane_t3

0x8600,	// (0x0007a13f) ncim_query_content_pane_t4_ParamLimits

0x8600,	// (0x0007a13f) ncim_query_content_pane_t4

0x861d,	// (0x0007a15c) ncim_query_content_pane_t5_ParamLimits

0x861d,	// (0x0007a15c) ncim_query_content_pane_t5

0xadf1,	// (0x0007c930) ncim_query_content_pane_t6_ParamLimits

0xadf1,	// (0x0007c930) ncim_query_content_pane_t6

0xfb3d,	// (0x0008167c) ncim_query_content_pane_t_ParamLimits

0xae19,	// (0x0007c958) ncim_query_list_pane_ParamLimits

0xae2b,	// (0x0007c96a) ncim_query_popup_pane_ParamLimits

0xae3f,	// (0x0007c97e) wait_bar_pane_cp04

0xb4d2,	// (0x0007d011) input_focus_pane_cp011

0xae47,	// (0x0007c986) ncim_query_popup_pane_t1

0xae55,	// (0x0007c994) ncim_list_query_list_pane_ParamLimits

0xae55,	// (0x0007c994) ncim_list_query_list_pane

0xb4d2,	// (0x0007d011) bg_button_pane_cp027

0xae62,	// (0x0007c9a1) ncim_query_button_pane_g1

0xb4d2,	// (0x0007d011) list_highlight_pane_cp012

0xae6c,	// (0x0007c9ab) ncim_list_query_list_pane_g1

0xae74,	// (0x0007c9b3) ncim_list_query_list_pane_t1

0x6dca,	// (0x00078909) cam4_indicators_pane_g3_ParamLimits

0x6dca,	// (0x00078909) cam4_indicators_pane_g3

0x6ed1,	// (0x00078a10) vid4_indicators_pane_g5_ParamLimits

0x6ed1,	// (0x00078a10) vid4_indicators_pane_g5

0x7ccb,	// (0x0007980a) vid4_progress_pane_g5_ParamLimits

0x7ccb,	// (0x0007980a) vid4_progress_pane_g5

0x84c3,	// (0x0007a002) main_ncimui_pane_g1

0x852b,	// (0x0007a06a) ncimui_group_query_pane_ParamLimits

0x852b,	// (0x0007a06a) ncimui_group_query_pane

0x8573,	// (0x0007a0b2) ncimui_list_pane_ParamLimits

0x8573,	// (0x0007a0b2) ncimui_list_pane

0x859a,	// (0x0007a0d9) ncimui_text_pane_ParamLimits

0x859a,	// (0x0007a0d9) ncimui_text_pane

0x863a,	// (0x0007a179) ncimui_text_pane_t1_ParamLimits

0x863a,	// (0x0007a179) ncimui_text_pane_t1

0xae82,	// (0x0007c9c1) ncimui_list_single_graphic_pane_ParamLimits

0xae82,	// (0x0007c9c1) ncimui_list_single_graphic_pane

0x8659,	// (0x0007a198) ncimui_query_pane_ParamLimits

0x8659,	// (0x0007a198) ncimui_query_pane

0xb4d2,	// (0x0007d011) list_highlight_pane_cp013

0xae92,	// (0x0007c9d1) ncim_list_query_list_pane_t1_copy1

0xae6c,	// (0x0007c9ab) ncim_list_single_graphic_pane_g1

0x866c,	// (0x0007a1ab) ncim_query_button_pane_cp01

0x8678,	// (0x0007a1b7) ncim_query_entry_pane_ParamLimits

0x8678,	// (0x0007a1b7) ncim_query_entry_pane

0x868b,	// (0x0007a1ca) ncimui_query_pane_g1

0x8697,	// (0x0007a1d6) ncimui_query_pane_t1_ParamLimits

0x8697,	// (0x0007a1d6) ncimui_query_pane_t1

0xbb7a,	// (0x0007d6b9) input_focus_pane_cp012

0xaea0,	// (0x0007c9df) ncim_query_entry_pane_t1

0xbc45,	// (0x0007d784) main_im_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) main_mobtv_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) main_mobtv_pane

0x832e,	// (0x00079e6d) main_cset6_slider_pane_g18_ParamLimits

0x832e,	// (0x00079e6d) main_cset6_slider_pane_g18

0x833a,	// (0x00079e79) main_cset6_slider_pane_g19_ParamLimits

0x833a,	// (0x00079e79) main_cset6_slider_pane_g19

0xc9a4,	// (0x0007e4e3) bg_main_mobtv_pane_ParamLimits

0xc9a4,	// (0x0007e4e3) bg_main_mobtv_pane

0x86b0,	// (0x0007a1ef) main_mobtv_info_pane

0x86bb,	// (0x0007a1fa) main_mobtv_loading_pane_ParamLimits

0x86bb,	// (0x0007a1fa) main_mobtv_loading_pane

0xaeb2,	// (0x0007c9f1) main_mobtv_pg_channel_list_pane

0xaebc,	// (0x0007c9fb) main_mobtv_pg_hdr_pane

0x86c8,	// (0x0007a207) main_mobtv_programe_curr_pane_ParamLimits

0x86c8,	// (0x0007a207) main_mobtv_programe_curr_pane

0x86d5,	// (0x0007a214) main_mobtv_programe_next_pane_ParamLimits

0x86d5,	// (0x0007a214) main_mobtv_programe_next_pane

0xaec5,	// (0x0007ca04) popup_mobtv_noti_window

0xbe19,	// (0x0007d958) main_tv_pg_hdr_pane_g1

0xaecd,	// (0x0007ca0c) main_tv_pg_hdr_pane_g2

0xaed5,	// (0x0007ca14) main_tv_pg_hdr_pane_g3

0xaedd,	// (0x0007ca1c) main_tv_pg_hdr_pane_g4

0xaee5,	// (0x0007ca24) main_tv_pg_hdr_pane_g5

0xaeef,	// (0x0007ca2e) main_tv_pg_hdr_pane_g6

0xaef9,	// (0x0007ca38) main_tv_pg_hdr_pane_g7

0xaf03,	// (0x0007ca42) main_tv_pg_hdr_pane_g8

0xaf0d,	// (0x0007ca4c) main_tv_pg_hdr_pane_g9

0xaf17,	// (0x0007ca56) main_tv_pg_hdr_pane_g10

0xaf21,	// (0x0007ca60) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4a,	// (0x00081689) main_tv_pg_hdr_pane_g

0xaf2b,	// (0x0007ca6a) main_tv_pg_hdr_pane_t1

0xaf39,	// (0x0007ca78) main_tv_pg_hdr_pane_t2

0xaf47,	// (0x0007ca86) main_tv_pg_hdr_pane_t3

0xaf57,	// (0x0007ca96) main_tv_pg_hdr_pane_t4

0xaf67,	// (0x0007caa6) main_tv_pg_hdr_pane_t5

0x0004,

0xfb61,	// (0x000816a0) main_tv_pg_hdr_pane_t

0xaf77,	// (0x0007cab6) single_mobtv_pg_channel_pane_ParamLimits

0xaf77,	// (0x0007cab6) single_mobtv_pg_channel_pane

0xaf89,	// (0x0007cac8) single_mobtv_pg_channel_table_pane

0xaf92,	// (0x0007cad1) single_mobtv_pg_channel_thumb_pane

0xaf9b,	// (0x0007cada) single_tv_pg_channel_pane_g1

0xafa4,	// (0x0007cae3) single_tv_pg_channel_pane_g2

0x0001,

0xfb6c,	// (0x000816ab) single_tv_pg_channel_pane_g

0xbbd3,	// (0x0007d712) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbbd3,	// (0x0007d712) bg_single_mobtv_pg_channel_thumb_pane

0xafad,	// (0x0007caec) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xafad,	// (0x0007caec) single_mobtv_pg_channel_thumb_pane_g1

0xafbb,	// (0x0007cafa) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xafbb,	// (0x0007cafa) single_mobtv_pg_channel_thumb_pane_g2

0xafc7,	// (0x0007cb06) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xafc7,	// (0x0007cb06) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb71,	// (0x000816b0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb71,	// (0x000816b0) single_mobtv_pg_channel_thumb_pane_g

0xafd3,	// (0x0007cb12) single_mobtv_pg_channel_thumb_pane_t1

0xafe1,	// (0x0007cb20) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb78,	// (0x000816b7) single_mobtv_pg_channel_thumb_pane_t

0xbe19,	// (0x0007d958) bg_single_mobtv_pg_channel_table_pane_g1

0xbe19,	// (0x0007d958) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x00080edc) bg_single_mobtv_pg_channel_table_pane_g

0xafef,	// (0x0007cb2e) single_mobtv_pg_channel_table_pane_t1

0xaffd,	// (0x0007cb3c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb7d,	// (0x000816bc) single_mobtv_pg_channel_table_pane_t

0x86ea,	// (0x0007a229) main_mobtv_info_pane_g1_ParamLimits

0x86ea,	// (0x0007a229) main_mobtv_info_pane_g1

0x8706,	// (0x0007a245) main_mobtv_info_pane_t1_ParamLimits

0x8706,	// (0x0007a245) main_mobtv_info_pane_t1

0x877e,	// (0x0007a2bd) main_mobtv_info_pane_t2_ParamLimits

0x877e,	// (0x0007a2bd) main_mobtv_info_pane_t2

0x0002,

0xfb87,	// (0x000816c6) main_mobtv_info_pane_t_ParamLimits

0xfb87,	// (0x000816c6) main_mobtv_info_pane_t

0x880d,	// (0x0007a34c) wait_bar_pane_cp05

0x881f,	// (0x0007a35e) main_mobtv_loading_pane_g1_ParamLimits

0x881f,	// (0x0007a35e) main_mobtv_loading_pane_g1

0x882d,	// (0x0007a36c) main_mobtv_loading_pane_g2_ParamLimits

0x882d,	// (0x0007a36c) main_mobtv_loading_pane_g2

0x8839,	// (0x0007a378) main_mobtv_loading_pane_g3_ParamLimits

0x8839,	// (0x0007a378) main_mobtv_loading_pane_g3

0x0002,

0xfb8e,	// (0x000816cd) main_mobtv_loading_pane_g_ParamLimits

0xfb8e,	// (0x000816cd) main_mobtv_loading_pane_g

0xb00b,	// (0x0007cb4a) main_mobtv_loading_pane_t1_ParamLimits

0xb00b,	// (0x0007cb4a) main_mobtv_loading_pane_t1

0xb023,	// (0x0007cb62) main_mobtv_loading_pane_t2_ParamLimits

0xb023,	// (0x0007cb62) main_mobtv_loading_pane_t2

0x0001,

0xfb95,	// (0x000816d4) main_mobtv_loading_pane_t_ParamLimits

0xfb95,	// (0x000816d4) main_mobtv_loading_pane_t

0x8847,	// (0x0007a386) wait_bar_pane_cp06_ParamLimits

0x8847,	// (0x0007a386) wait_bar_pane_cp06

0xb047,	// (0x0007cb86) main_mobtv_programe_curr_pane_t1

0xb055,	// (0x0007cb94) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9a,	// (0x000816d9) main_mobtv_programe_curr_pane_t

0xb063,	// (0x0007cba2) main_mobtv_programe_next_pane_t1

0xb071,	// (0x0007cbb0) main_mobtv_programe_next_pane_t2

0xb07f,	// (0x0007cbbe) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9f,	// (0x000816de) main_mobtv_programe_next_pane_t

0xb4d2,	// (0x0007d011) bg_popup_mobtv_noti_window_pane

0xb08d,	// (0x0007cbcc) popup_mobtv_noti_window_g1

0xb095,	// (0x0007cbd4) popup_mobtv_noti_window_t1

0xb0a3,	// (0x0007cbe2) popup_mobtv_noti_window_t2

0x0001,

0xfba6,	// (0x000816e5) popup_mobtv_noti_window_t

0xbe19,	// (0x0007d958) bg_popup_mobtv_noti_window_pane_g1

0xb4d2,	// (0x0007d011) sc_clock_pane

0xb4d2,	// (0x0007d011) main_fs_bigclock_pane

0x7e99,	// (0x000799d8) blid2_tripm_pane_t4_ParamLimits

0x7e99,	// (0x000799d8) blid2_tripm_pane_t4

0x8853,	// (0x0007a392) sc_clock_pane_g1_ParamLimits

0x8853,	// (0x0007a392) sc_clock_pane_g1

0x8861,	// (0x0007a3a0) sc_clock_pane_t1_ParamLimits

0x8861,	// (0x0007a3a0) sc_clock_pane_t1

0x8874,	// (0x0007a3b3) sc_clock_pane_t2_ParamLimits

0x8874,	// (0x0007a3b3) sc_clock_pane_t2

0x8886,	// (0x0007a3c5) sc_clock_pane_t3_ParamLimits

0x8886,	// (0x0007a3c5) sc_clock_pane_t3

0x0004,

0xfbab,	// (0x000816ea) sc_clock_pane_t_ParamLimits

0xfbab,	// (0x000816ea) sc_clock_pane_t

0x91ac,	// (0x0007aceb) main_fs_bigclock_indicator_pane_ParamLimits

0x91ac,	// (0x0007aceb) main_fs_bigclock_indicator_pane

0x8909,	// (0x0007a448) main_fs_bigclock_pane_g1_ParamLimits

0x8909,	// (0x0007a448) main_fs_bigclock_pane_g1

0x91b8,	// (0x0007acf7) main_fs_bigclock_pane_t1_ParamLimits

0x91b8,	// (0x0007acf7) main_fs_bigclock_pane_t1

0x91ca,	// (0x0007ad09) main_fs_bigclock_pane_t2_ParamLimits

0x91ca,	// (0x0007ad09) main_fs_bigclock_pane_t2

0x91de,	// (0x0007ad1d) main_fs_bigclock_pane_t3_ParamLimits

0x91de,	// (0x0007ad1d) main_fs_bigclock_pane_t3

0x0002,

0xfd3c,	// (0x0008187b) main_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0008187b) main_fs_bigclock_pane_t

0xce7b,	// (0x0007e9ba) main_fs_bigclock_indicator_pane_g1

0xadc1,	// (0x0007c900) ncim_query_content_pane_g2_ParamLimits

0xadc1,	// (0x0007c900) ncim_query_content_pane_g2

0x0001,

0xfb38,	// (0x00081677) ncim_query_content_pane_g_ParamLimits

0xfb38,	// (0x00081677) ncim_query_content_pane_g

0x889a,	// (0x0007a3d9) sc_clock_pane_t4_ParamLimits

0x889a,	// (0x0007a3d9) sc_clock_pane_t4

0xbb7a,	// (0x0007d6b9) main_radioblah_pane

0x6c6d,	// (0x000787ac) cell_call4_button_pane_t1_copy1_ParamLimits

0x6c6d,	// (0x000787ac) cell_call4_button_pane_t1_copy1

0x84dd,	// (0x0007a01c) main_ncimui_pane_t1_ParamLimits

0x84dd,	// (0x0007a01c) main_ncimui_pane_t1

0x84f7,	// (0x0007a036) main_ncimui_pane_t2_ParamLimits

0x84f7,	// (0x0007a036) main_ncimui_pane_t2

0x0002,

0xfb31,	// (0x00081670) main_ncimui_pane_t_ParamLimits

0xfb31,	// (0x00081670) main_ncimui_pane_t

0xb1e8,	// (0x0007cd27) main_radioblah_anim_pane_ParamLimits

0xb1e8,	// (0x0007cd27) main_radioblah_anim_pane

0xb1f9,	// (0x0007cd38) main_radioblah_info_pane_ParamLimits

0xb1f9,	// (0x0007cd38) main_radioblah_info_pane

0xb20d,	// (0x0007cd4c) main_radioblah_pane_t1_ParamLimits

0xb20d,	// (0x0007cd4c) main_radioblah_pane_t1

0xb229,	// (0x0007cd68) main_radioblah_pane_t2_ParamLimits

0xb229,	// (0x0007cd68) main_radioblah_pane_t2

0x0003,

0xfbcc,	// (0x0008170b) main_radioblah_pane_t_ParamLimits

0xfbcc,	// (0x0008170b) main_radioblah_pane_t

0x895f,	// (0x0007a49e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x895f,	// (0x0007a49e) main_radioblah_rocker_ctrl_pane

0xb271,	// (0x0007cdb0) main_radioblah_info_pane_t1_ParamLimits

0xb271,	// (0x0007cdb0) main_radioblah_info_pane_t1

0x89a4,	// (0x0007a4e3) main_radioblah_info_pane_t2_ParamLimits

0x89a4,	// (0x0007a4e3) main_radioblah_info_pane_t2

0x0003,

0xfbd5,	// (0x00081714) main_radioblah_info_pane_t_ParamLimits

0xfbd5,	// (0x00081714) main_radioblah_info_pane_t

0xbe19,	// (0x0007d958) main_radioblah_rocker_ctrl_pane_g1

0x8a54,	// (0x0007a593) main_radioblah_rocker_ctrl_pane_g2

0x8a5c,	// (0x0007a59b) main_radioblah_rocker_ctrl_pane_g3

0x8a64,	// (0x0007a5a3) main_radioblah_rocker_ctrl_pane_g4

0x8a6c,	// (0x0007a5ab) main_radioblah_rocker_ctrl_pane_g5

0x8a74,	// (0x0007a5b3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbde,	// (0x0008171d) main_radioblah_rocker_ctrl_pane_g

0x8484,	// (0x00079fc3) main_cset_text2_pane_t1_copy1_ParamLimits

0x6cf8,	// (0x00078837) cam4_image_uncrop_qvga_pane

0x6e3f,	// (0x0007897e) vid4_image_uncrop_qcif_pane

0x802d,	// (0x00079b6c) cam6_image_uncrop_qvga_pane_ParamLimits

0x802d,	// (0x00079b6c) cam6_image_uncrop_qvga_pane

0xaac8,	// (0x0007c607) vid6_image_uncrop_qcif_pane_ParamLimits

0xaac8,	// (0x0007c607) vid6_image_uncrop_qcif_pane

0xb4d2,	// (0x0007d011) bg_popup_preview_window_pane_cp03

0xad73,	// (0x0007c8b2) list_cset_text2_pane

0xad7b,	// (0x0007c8ba) main_cset6_text2_pane_g1

0xad83,	// (0x0007c8c2) main_cset6_text2_pane_t1

0x8a7c,	// (0x0007a5bb) list_cset_text2_pane_t1_ParamLimits

0x8a7c,	// (0x0007a5bb) list_cset_text2_pane_t1

0xbb7a,	// (0x0007d6b9) main_radioblah_pane_ParamLimits

0x87f9,	// (0x0007a338) main_mobtv_info_pane_t3_ParamLimits

0x87f9,	// (0x0007a338) main_mobtv_info_pane_t3

0x894d,	// (0x0007a48c) main_radioblah_pane_g1

0x8978,	// (0x0007a4b7) main_radioblah_info_pane_g1

0x89f9,	// (0x0007a538) main_radioblah_info_pane_t3_ParamLimits

0x89f9,	// (0x0007a538) main_radioblah_info_pane_t3

0x4578,	// (0x000760b7) highlight_cell_cale_month_pane_ParamLimits

0x4578,	// (0x000760b7) highlight_cell_cale_month_pane

0xb4d2,	// (0x0007d011) main_phob_fisheye_pane

0x009e,	// (0x00071bdd) scroll_pane_cp0031_ParamLimits

0x009e,	// (0x00071bdd) scroll_pane_cp0031

0xabd6,	// (0x0007c715) wait_bar_pane_cp08_ParamLimits

0x8245,	// (0x00079d84) cset_list_set_pane_copy1_ParamLimits

0xb2ab,	// (0x0007cdea) highlight_cell_cale_month_pane_g1

0x8a99,	// (0x0007a5d8) highlight_cell_cale_month_pane_t1

0x0be3,	// (0x00072722) list_gen_pane_cp01

0x077a,	// (0x000722b9) scroll_pane_01

0x1f4c,	// (0x00073a8b) list_single_double_fisheye_pane

0x1f55,	// (0x00073a94) list_double_fisheye_pane_g1_ParamLimits

0x1f55,	// (0x00073a94) list_double_fisheye_pane_g1

0x1f61,	// (0x00073aa0) list_double_fisheye_pane_g2_ParamLimits

0x1f61,	// (0x00073aa0) list_double_fisheye_pane_g2

0x1f75,	// (0x00073ab4) list_double_fisheye_pane_g3_ParamLimits

0x1f75,	// (0x00073ab4) list_double_fisheye_pane_g3

0x0004,

0xfbeb,	// (0x0008172a) list_double_fisheye_pane_g_ParamLimits

0xfbeb,	// (0x0008172a) list_double_fisheye_pane_g

0x1f9e,	// (0x00073add) list_double_fisheye_pane_t1_ParamLimits

0x1f9e,	// (0x00073add) list_double_fisheye_pane_t1

0x1fb9,	// (0x00073af8) list_double_fisheye_pane_t2_ParamLimits

0x1fb9,	// (0x00073af8) list_double_fisheye_pane_t2

0x0001,

0xfbf6,	// (0x00081735) list_double_fisheye_pane_t_ParamLimits

0xfbf6,	// (0x00081735) list_double_fisheye_pane_t

0xb4d2,	// (0x0007d011) main_call5_pane

0x88c0,	// (0x0007a3ff) sc_swipe_pane_ParamLimits

0x88c0,	// (0x0007a3ff) sc_swipe_pane

0x8ab3,	// (0x0007a5f2) call5_image_pane_ParamLimits

0x8ab3,	// (0x0007a5f2) call5_image_pane

0x8ac3,	// (0x0007a602) call5_swipe_1_pane_ParamLimits

0x8ac3,	// (0x0007a602) call5_swipe_1_pane

0x8acf,	// (0x0007a60e) call5_swipe_2_pane_ParamLimits

0x8acf,	// (0x0007a60e) call5_swipe_2_pane

0x8ae9,	// (0x0007a628) popup_call5_audio_first_window_ParamLimits

0x8ae9,	// (0x0007a628) popup_call5_audio_first_window

0xbbd3,	// (0x0007d712) call5_swipe_1_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) call5_swipe_1_pane_g1

0xb2b3,	// (0x0007cdf2) call5_swipe_1_pane_g2_ParamLimits

0xb2b3,	// (0x0007cdf2) call5_swipe_1_pane_g2

0x0001,

0xfbfb,	// (0x0008173a) call5_swipe_1_pane_g_ParamLimits

0xfbfb,	// (0x0008173a) call5_swipe_1_pane_g

0xb2bf,	// (0x0007cdfe) call5_swipe_1_pane_t1_ParamLimits

0xb2bf,	// (0x0007cdfe) call5_swipe_1_pane_t1

0xbbd3,	// (0x0007d712) call5_swipe_2_pane_g1_ParamLimits

0xbbd3,	// (0x0007d712) call5_swipe_2_pane_g1

0xb2d4,	// (0x0007ce13) call5_swipe_2_pane_g2_ParamLimits

0xb2d4,	// (0x0007ce13) call5_swipe_2_pane_g2

0x0001,

0xfc00,	// (0x0008173f) call5_swipe_2_pane_g_ParamLimits

0xfc00,	// (0x0008173f) call5_swipe_2_pane_g

0xb2e0,	// (0x0007ce1f) call5_swipe_2_pane_t1_ParamLimits

0xb2e0,	// (0x0007ce1f) call5_swipe_2_pane_t1

0xb2f5,	// (0x0007ce34) sc_swipe_pane_g1_ParamLimits

0xb2f5,	// (0x0007ce34) sc_swipe_pane_g1

0xb302,	// (0x0007ce41) sc_swipe_pane_g2_ParamLimits

0xb302,	// (0x0007ce41) sc_swipe_pane_g2

0x0001,

0xfc05,	// (0x00081744) sc_swipe_pane_g_ParamLimits

0xfc05,	// (0x00081744) sc_swipe_pane_g

0xb30e,	// (0x0007ce4d) sc_swipe_pane_t1_ParamLimits

0xb30e,	// (0x0007ce4d) sc_swipe_pane_t1

0xb4d2,	// (0x0007d011) main_cmail_launcher_pane

0x8af7,	// (0x0007a636) aid_size_cell_cmail_l_ParamLimits

0x8af7,	// (0x0007a636) aid_size_cell_cmail_l

0x8b05,	// (0x0007a644) grid_cmail_l_pane_ParamLimits

0x8b05,	// (0x0007a644) grid_cmail_l_pane

0x8b15,	// (0x0007a654) cell_cmail_l_pane_ParamLimits

0x8b15,	// (0x0007a654) cell_cmail_l_pane

0xb323,	// (0x0007ce62) cell_cmail_l_pane_g1_ParamLimits

0xb323,	// (0x0007ce62) cell_cmail_l_pane_g1

0xb32f,	// (0x0007ce6e) cell_cmail_l_pane_t1_ParamLimits

0xb32f,	// (0x0007ce6e) cell_cmail_l_pane_t1

0xb345,	// (0x0007ce84) cell_cmail_l_pane_t2_ParamLimits

0xb345,	// (0x0007ce84) cell_cmail_l_pane_t2

0x0001,

0xfc0a,	// (0x00081749) cell_cmail_l_pane_t_ParamLimits

0xfc0a,	// (0x00081749) cell_cmail_l_pane_t

0xbb7a,	// (0x0007d6b9) grid_highlight_pane_cp018_ParamLimits

0xbb7a,	// (0x0007d6b9) grid_highlight_pane_cp018

0x284e,	// (0x0007438d) main2_pane_ParamLimits

0x284e,	// (0x0007438d) main2_pane

0xbcd4,	// (0x0007d813) popup_sp_fs_action_menu_bg_pane_g1

0xbcdc,	// (0x0007d81b) popup_sp_fs_action_menu_bg_pane_g2

0xbce4,	// (0x0007d823) popup_sp_fs_action_menu_bg_pane_g3

0xbcec,	// (0x0007d82b) popup_sp_fs_action_menu_bg_pane_g4

0xbcf4,	// (0x0007d833) popup_sp_fs_action_menu_bg_pane_g5

0xbcfc,	// (0x0007d83b) popup_sp_fs_action_menu_bg_pane_g6

0xbd04,	// (0x0007d843) popup_sp_fs_action_menu_bg_pane_g7

0xbd0c,	// (0x0007d84b) popup_sp_fs_action_menu_bg_pane_g8

0xbd14,	// (0x0007d853) popup_sp_fs_action_menu_bg_pane_g9

0xbd1c,	// (0x0007d85b) popup_sp_fs_action_menu_bg_pane_g10

0xbd1c,	// (0x0007d85b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00080c44) popup_sp_fs_action_menu_bg_pane_g

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g2

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00080cf2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00080cf2) list_medium_line_x2_t3_g3_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t2

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g3_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_x2_t3_g2_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t2

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g2_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g2

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g3

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00080d05) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00080d05) list_medium_line_x2_t4_g4_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t2

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t3

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x00080d0e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x00080d0e) list_medium_line_x2_t4_g4_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g2

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g3

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00080d05) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00080d05) list_medium_line_x2_t2_g4_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g4_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g4_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g2

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00080cf2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00080cf2) list_medium_line_x2_t2_g3_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g3_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g3_t

0x4748,	// (0x00076287) main_sp_fs_list_pane_ParamLimits

0x4748,	// (0x00076287) main_sp_fs_list_pane

0x4754,	// (0x00076293) sp_fs_scroll_pane_ParamLimits

0x4754,	// (0x00076293) sp_fs_scroll_pane

0xc397,	// (0x0007ded6) list_medium_line_x2_t3_t1

0xc397,	// (0x0007ded6) list_medium_line_x2_t3_t2

0xc397,	// (0x0007ded6) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x00080dc0) list_medium_line_x2_t3_t

0xc397,	// (0x0007ded6) list_medium_line_x3_t4_t1

0xc397,	// (0x0007ded6) list_medium_line_x3_t4_t2

0xc397,	// (0x0007ded6) list_medium_line_x3_t4_t3

0xc397,	// (0x0007ded6) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x00080dc7) list_medium_line_x3_t4_t

0xc397,	// (0x0007ded6) list_medium_line_x4_t5_t1

0xc397,	// (0x0007ded6) list_medium_line_x4_t5_t2

0xc397,	// (0x0007ded6) list_medium_line_x4_t5_t3

0xc397,	// (0x0007ded6) list_medium_line_x4_t5_t4

0xc397,	// (0x0007ded6) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x00080dd0) list_medium_line_x4_t5_t

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g1

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g2

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g3

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00080d05) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00080d05) list_medium_line_t4_g4_g

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t1

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t2

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t3

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t4_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x00080d0e) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x00080d0e) list_medium_line_t4_g4_t

0x483d,	// (0x0007637c) chi_dic_find_pane_g1

0x54b3,	// (0x00076ff2) main_tport_pane

0xc397,	// (0x0007ded6) list_medium_line_plain_t1

0xbbd3,	// (0x0007d712) list_medium_line_t2_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_t2_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_t2_g2_g

0xbe33,	// (0x0007d972) list_medium_line_t2_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_g2_t1

0xbe33,	// (0x0007d972) list_medium_line_t2_g2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_t2_g2_t

0x1f0a,	// (0x00073a49) aid_sp_fs_list_icon_a_sm

0x7d2a,	// (0x00079869) aid_sp_fs_list_icon_d

0xa858,	// (0x0007c397) aid_sp_fs_text_primary

0x1f12,	// (0x00073a51) aid_sp_fs_text_secondary

0xb4d2,	// (0x0007d011) list_medium_line

0xb4d2,	// (0x0007d011) list_medium_line_g2

0xb4d2,	// (0x0007d011) list_medium_line_g3

0xb4d2,	// (0x0007d011) list_medium_line_plain

0xb4d2,	// (0x0007d011) list_medium_line_plain_t2

0xb4d2,	// (0x0007d011) list_medium_line_plain_t3

0xb4d2,	// (0x0007d011) list_medium_line_right_icon

0xb4d2,	// (0x0007d011) list_medium_line_right_iconx2

0xb4d2,	// (0x0007d011) list_medium_line_t2

0xb4d2,	// (0x0007d011) list_medium_line_t2_g2

0xb4d2,	// (0x0007d011) list_medium_line_t2_g3

0xb4d2,	// (0x0007d011) list_medium_line_t2_right_icon

0xb4d2,	// (0x0007d011) list_medium_line_t2_right_iconx2

0xb4d2,	// (0x0007d011) list_medium_line_t3

0xb4d2,	// (0x0007d011) list_medium_line_t3_g2

0xb4d2,	// (0x0007d011) list_medium_line_t3_g3

0xb4d2,	// (0x0007d011) list_medium_line_t3_right_iconx2

0xb4d2,	// (0x0007d011) list_medium_line_t4_g4

0xb4d2,	// (0x0007d011) list_medium_line_x2

0xb4d2,	// (0x0007d011) list_medium_line_x2_t2_g2

0xb4d2,	// (0x0007d011) list_medium_line_x2_t2_g3

0xb4d2,	// (0x0007d011) list_medium_line_x2_t2_g4

0xb4d2,	// (0x0007d011) list_medium_line_x2_t3

0xb4d2,	// (0x0007d011) list_medium_line_x2_t3_g2

0xb4d2,	// (0x0007d011) list_medium_line_x2_t3_g3

0xb4d2,	// (0x0007d011) list_medium_line_x2_t3_g4

0xb4d2,	// (0x0007d011) list_medium_line_x2_t4_g2

0xb4d2,	// (0x0007d011) list_medium_line_x2_t4_g4

0xb4d2,	// (0x0007d011) list_medium_line_x3

0xb4d2,	// (0x0007d011) list_medium_line_x3_t4

0xb4d2,	// (0x0007d011) list_medium_line_x3_t4_g4

0xb4d2,	// (0x0007d011) list_medium_line_x4_t4

0xb4d2,	// (0x0007d011) list_medium_line_x4_t4_g7

0xb4d2,	// (0x0007d011) list_medium_line_x4_t5

0x1f1b,	// (0x00073a5a) list_single_fs_dyc_pane_ParamLimits

0x1f1b,	// (0x00073a5a) list_single_fs_dyc_pane

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g1

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g2

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g3

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g4

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g5

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x4_t4_g7_g6

0xbbe1,	// (0x0007d720) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbbe1,	// (0x0007d720) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb12,	// (0x00081651) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb12,	// (0x00081651) list_medium_line_x4_t4_g7_g

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t1

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t2

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x4_t4_g7_t3

0xc35c,	// (0x0007de9b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc35c,	// (0x0007de9b) list_medium_line_x4_t4_g7_t4

0xc35c,	// (0x0007de9b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc35c,	// (0x0007de9b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb21,	// (0x00081660) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb21,	// (0x00081660) list_medium_line_x4_t4_g7_t

0x1f2f,	// (0x00073a6e) list_single_dyc_row_pane_ParamLimits

0x1f2f,	// (0x00073a6e) list_single_dyc_row_pane

0x8aa7,	// (0x0007a5e6) call5_gesture_pane_ParamLimits

0x8aa7,	// (0x0007a5e6) call5_gesture_pane

0x8adb,	// (0x0007a61a) call5_windows_pane_ParamLimits

0x8adb,	// (0x0007a61a) call5_windows_pane

0x8b2e,	// (0x0007a66d) call5_swipe_1_pane_cp_ParamLimits

0x8b2e,	// (0x0007a66d) call5_swipe_1_pane_cp

0x8b3a,	// (0x0007a679) call5_swipe_2_pane_cp_ParamLimits

0x8b3a,	// (0x0007a679) call5_swipe_2_pane_cp

0xbdf7,	// (0x0007d936) call5_image_pane_cp

0x8b46,	// (0x0007a685) popup_call5_audio_first_window_cp_ParamLimits

0x8b46,	// (0x0007a685) popup_call5_audio_first_window_cp

0xb2f5,	// (0x0007ce34) call5_swipe_1_pane_g1_cp_ParamLimits

0xb2f5,	// (0x0007ce34) call5_swipe_1_pane_g1_cp

0xb362,	// (0x0007cea1) call5_swipe_1_pane_g2_cp

0xb30e,	// (0x0007ce4d) call5_swipe_1_pane_t1_cp_ParamLimits

0xb30e,	// (0x0007ce4d) call5_swipe_1_pane_t1_cp

0xb2f5,	// (0x0007ce34) call5_swipe_2_pane_g1_cp_ParamLimits

0xb2f5,	// (0x0007ce34) call5_swipe_2_pane_g1_cp

0xb36a,	// (0x0007cea9) call5_swipe_2_pane_g2_cp

0xb372,	// (0x0007ceb1) call5_swipe_2_pane_t1_cp_ParamLimits

0xb372,	// (0x0007ceb1) call5_swipe_2_pane_t1_cp

0xbb7a,	// (0x0007d6b9) main_sp_fs_email_pane

0xb387,	// (0x0007cec6) main_sp_fs_listscroll_pane_te

0x8b54,	// (0x0007a693) popup_sp_fs_action_menu_pane_ParamLimits

0x8b54,	// (0x0007a693) popup_sp_fs_action_menu_pane

0xbe19,	// (0x0007d958) bg_sp_fs_ctrlbar_pane_g1

0xb390,	// (0x0007cecf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb399,	// (0x0007ced8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb3a2,	// (0x0007cee1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbe19,	// (0x0007d958) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0f,	// (0x0008174e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe2e4,	// (0x0007fe23) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe2e4,	// (0x0007fe23) bg_sp_fs_ctrlbar_ddmenu_pane

0xb3ab,	// (0x0007ceea) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb3ab,	// (0x0007ceea) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb3b7,	// (0x0007cef6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb3b7,	// (0x0007cef6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc18,	// (0x00081757) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc18,	// (0x00081757) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb3c3,	// (0x0007cf02) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb3c3,	// (0x0007cf02) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbe19,	// (0x0007d958) list_medium_line_t2_right_icon_g1

0xc397,	// (0x0007ded6) list_medium_line_t2_right_icon_t1

0xc397,	// (0x0007ded6) list_medium_line_t2_right_icon_t2

0x0001,

0xfc1d,	// (0x0008175c) list_medium_line_t2_right_icon_t

0xc996,	// (0x0007e4d5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc996,	// (0x0007e4d5) bg_sp_fs_ctrlbar_pane

0x8bef,	// (0x0007a72e) main_sp_fs_ctrlbar_button_pane_cp01

0x8bf7,	// (0x0007a736) main_sp_fs_ctrlbar_ddmenu_pane

0xb415,	// (0x0007cf54) main_sp_fs_ctrlbar_pane_g1

0xb421,	// (0x0007cf60) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc22,	// (0x00081761) main_sp_fs_ctrlbar_pane_g

0x8c33,	// (0x0007a772) main_sp_fs_ctrlbar_pane_t1

0x8c6e,	// (0x0007a7ad) main_sp_fs_ctrlbar_pane

0x8c84,	// (0x0007a7c3) main_sp_fs_listscroll_pane_te_cp01

0x1fdb,	// (0x00073b1a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1fdb,	// (0x00073b1a) popup_sp_fs_action_menu_pane_cp01

0xbb7a,	// (0x0007d6b9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_sp_fs_highlight_list_pane_cp01

0x1ffb,	// (0x00073b3a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1ffb,	// (0x00073b3a) sp_fs_action_menu_list_gene_pane_g1

0xb448,	// (0x0007cf87) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb448,	// (0x0007cf87) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x0008176f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x0008176f) sp_fs_action_menu_list_gene_pane_g

0x200a,	// (0x00073b49) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x200a,	// (0x00073b49) sp_fs_action_menu_list_gene_pane_t1

0x2022,	// (0x00073b61) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2022,	// (0x00073b61) sp_fs_action_menu_list_gene_pane

0xb455,	// (0x0007cf94) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb455,	// (0x0007cf94) popup_sp_fs_action_menu_bg_pane

0x2043,	// (0x00073b82) sp_fs_action_menu_list_pane_ParamLimits

0x2043,	// (0x00073b82) sp_fs_action_menu_list_pane

0x2065,	// (0x00073ba4) sp_fs_scroll_pane_cp01_ParamLimits

0x2065,	// (0x00073ba4) sp_fs_scroll_pane_cp01

0xc397,	// (0x0007ded6) list_medium_line_plain_t2_t1

0xc397,	// (0x0007ded6) list_medium_line_plain_t2_t2

0x0001,

0xfc1d,	// (0x0008175c) list_medium_line_plain_t2_t

0xc397,	// (0x0007ded6) list_medium_line_plain_t3_t1

0xc397,	// (0x0007ded6) list_medium_line_plain_t3_t2

0xc397,	// (0x0007ded6) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x00080dc0) list_medium_line_plain_t3_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_x2_t2_g2_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g2_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_x2_t2_g2_t

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_x2_t4_g2_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t2

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t3

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x00080d0e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x00080d0e) list_medium_line_x2_t4_g2_t

0xbe19,	// (0x0007d958) list_medium_line_t3_right_iconx2_g1

0xbe19,	// (0x0007d958) list_medium_line_t3_right_iconx2_g2

0xbe19,	// (0x0007d958) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x00080ee1) list_medium_line_t3_right_iconx2_g

0xc397,	// (0x0007ded6) list_medium_line_t3_right_iconx2_t1

0xc397,	// (0x0007ded6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0008175c) list_medium_line_t3_right_iconx2_t

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g1

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g2

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g3

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00080d05) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00080d05) list_medium_line_x3_t4_g4_g

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t1

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t2

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t3

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x00080d0e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x00080d0e) list_medium_line_x3_t4_g4_t

0x208b,	// (0x00073bca) list_single_dyc_row_text_pane_t1_ParamLimits

0x208b,	// (0x00073bca) list_single_dyc_row_text_pane_t1

0x20c2,	// (0x00073c01) list_single_dyc_row_text_pane_t2_ParamLimits

0x20c2,	// (0x00073c01) list_single_dyc_row_text_pane_t2

0x2138,	// (0x00073c77) list_single_dyc_row_text_pane_t3_ParamLimits

0x2138,	// (0x00073c77) list_single_dyc_row_text_pane_t3

0x0005,

0xfc35,	// (0x00081774) list_single_dyc_row_text_pane_t_ParamLimits

0xfc35,	// (0x00081774) list_single_dyc_row_text_pane_t

0x2209,	// (0x00073d48) list_single_dyc_row_pane_g1_ParamLimits

0x2209,	// (0x00073d48) list_single_dyc_row_pane_g1

0x2215,	// (0x00073d54) list_single_dyc_row_pane_g2_ParamLimits

0x2215,	// (0x00073d54) list_single_dyc_row_pane_g2

0x2221,	// (0x00073d60) list_single_dyc_row_pane_g3_ParamLimits

0x2221,	// (0x00073d60) list_single_dyc_row_pane_g3

0x222d,	// (0x00073d6c) list_single_dyc_row_pane_g4_ParamLimits

0x222d,	// (0x00073d6c) list_single_dyc_row_pane_g4

0x0003,

0xfc42,	// (0x00081781) list_single_dyc_row_pane_g_ParamLimits

0xfc42,	// (0x00081781) list_single_dyc_row_pane_g

0x2239,	// (0x00073d78) list_single_dyc_row_text_pane_ParamLimits

0x2239,	// (0x00073d78) list_single_dyc_row_text_pane

0xb4d2,	// (0x0007d011) bg_sp_fs_scroll_pane

0xb463,	// (0x0007cfa2) thumb_sp_fs_scroll_pane

0xbbd3,	// (0x0007d712) list_medium_line_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g1

0xbe33,	// (0x0007d972) list_medium_line_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t1

0xbbd3,	// (0x0007d712) list_medium_line_x2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_x2_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t1

0xbbd3,	// (0x0007d712) list_medium_line_x3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x3_g1

0xb46c,	// (0x0007cfab) list_medium_line_x3_g2_ParamLimits

0xb46c,	// (0x0007cfab) list_medium_line_x3_g2

0x0001,

0xfc4b,	// (0x0008178a) list_medium_line_x3_g_ParamLimits

0xfc4b,	// (0x0008178a) list_medium_line_x3_g

0xb47a,	// (0x0007cfb9) list_medium_line_x3_t1_ParamLimits

0xb47a,	// (0x0007cfb9) list_medium_line_x3_t1

0xb48e,	// (0x0007cfcd) thumb_sp_fs_scroll_pane_g1

0xb497,	// (0x0007cfd6) thumb_sp_fs_scroll_pane_g2

0xb4a0,	// (0x0007cfdf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0008178f) thumb_sp_fs_scroll_pane_g

0xb48e,	// (0x0007cfcd) bg_sp_fs_scroll_pane_g1

0xb497,	// (0x0007cfd6) bg_sp_fs_scroll_pane_g2

0xb4a0,	// (0x0007cfdf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0008178f) bg_sp_fs_scroll_pane_g

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g1

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g2

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g3

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00080d05) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00080d05) list_medium_line_x2_t3_g4_g

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t1

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t2

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_x2_t3_g4_t

0xbbd3,	// (0x0007d712) list_medium_line_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_g2_g

0xbe33,	// (0x0007d972) list_medium_line_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_g2_t1

0xbbd3,	// (0x0007d712) list_medium_line_t3_g2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g2_g1

0xbbd3,	// (0x0007d712) list_medium_line_t3_g2_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x00080d00) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x00080d00) list_medium_line_t3_g2_g

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t1

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t2

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_t3_g2_t

0xbe19,	// (0x0007d958) list_medium_line_right_icon_g1

0xc397,	// (0x0007ded6) list_medium_line_right_icon_t1

0xbbd3,	// (0x0007d712) list_medium_line_t2_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g1

0xbe33,	// (0x0007d972) list_medium_line_t2_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_t1

0xbe33,	// (0x0007d972) list_medium_line_t2_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_t2_t

0xbbd3,	// (0x0007d712) list_medium_line_t3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g1

0xbe33,	// (0x0007d972) list_medium_line_t3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_t1

0xbe33,	// (0x0007d972) list_medium_line_t3_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_t2

0xbe33,	// (0x0007d972) list_medium_line_t3_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_t3_t

0xbbd3,	// (0x0007d712) list_medium_line_g3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g3_g1

0xbbd3,	// (0x0007d712) list_medium_line_g3_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g3_g2

0xbbd3,	// (0x0007d712) list_medium_line_g3_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00080cf2) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00080cf2) list_medium_line_g3_g

0xbe33,	// (0x0007d972) list_medium_line_g3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_g3_t1

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g1

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g2

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00080cf2) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00080cf2) list_medium_line_t2_g3_g

0xbe33,	// (0x0007d972) list_medium_line_t2_g3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_g3_t1

0xbe33,	// (0x0007d972) list_medium_line_t2_g3_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x00080d75) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x00080d75) list_medium_line_t2_g3_t

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g1_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g1

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g2_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g2

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g3_ParamLimits

0xbbd3,	// (0x0007d712) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00080cf2) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00080cf2) list_medium_line_t3_g3_g

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t1_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t1

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t2_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t2

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t3_ParamLimits

0xbe33,	// (0x0007d972) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00080cf9) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00080cf9) list_medium_line_t3_g3_t

0xbe19,	// (0x0007d958) list_medium_line_right_iconx2_g1

0xbe19,	// (0x0007d958) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x00080edc) list_medium_line_right_iconx2_g

0xc397,	// (0x0007ded6) list_medium_line_right_iconx2_t1

0xbe19,	// (0x0007d958) list_medium_line_t2_right_iconx2_g1

0xbe19,	// (0x0007d958) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x00080edc) list_medium_line_t2_right_iconx2_g

0xc397,	// (0x0007ded6) list_medium_line_t2_right_iconx2_t1

0xc397,	// (0x0007ded6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0008175c) list_medium_line_t2_right_iconx2_t

0xc397,	// (0x0007ded6) list_medium_line_x4_t4_t1

0xc397,	// (0x0007ded6) list_medium_line_x4_t4_t2

0xc397,	// (0x0007ded6) list_medium_line_x4_t4_t3

0xc397,	// (0x0007ded6) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x00080dc7) list_medium_line_x4_t4_t

0x8cbf,	// (0x0007a7fe) tport_appsw_pane_ParamLimits

0x8cbf,	// (0x0007a7fe) tport_appsw_pane

0x8ccd,	// (0x0007a80c) tport_contact_pane_ParamLimits

0x8ccd,	// (0x0007a80c) tport_contact_pane

0x8cdd,	// (0x0007a81c) tport_listscroll_pane_ParamLimits

0x8cdd,	// (0x0007a81c) tport_listscroll_pane

0x8ced,	// (0x0007a82c) cell_tport_appsw_pane_ParamLimits

0x8ced,	// (0x0007a82c) cell_tport_appsw_pane

0xbbe1,	// (0x0007d720) tport_appsw_pane_g1_ParamLimits

0xbbe1,	// (0x0007d720) tport_appsw_pane_g1

0xb4a9,	// (0x0007cfe8) tport_contact_pane_g1

0xae47,	// (0x0007c986) tport_contact_pane_t1

0xb4b2,	// (0x0007cff1) tport_contact_pane_t2

0x0001,

0xfc57,	// (0x00081796) tport_contact_pane_t

0xca34,	// (0x0007e573) list_tport_pane

0xca3d,	// (0x0007e57c) scroll_pane_cp_030

0x8d20,	// (0x0007a85f) cell_tport_appsw_pane_g1

0x8d30,	// (0x0007a86f) cell_tport_appsw_pane_t1

0x8d3e,	// (0x0007a87d) grid_highlight_pane_cp019

0x8d46,	// (0x0007a885) list_tport_double_graphic_pane_ParamLimits

0x8d46,	// (0x0007a885) list_tport_double_graphic_pane

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp023_ParamLimits

0xbb7a,	// (0x0007d6b9) list_highlight_pane_cp023

0x8d57,	// (0x0007a896) list_tport_double_graphic_pane_g1_ParamLimits

0x8d57,	// (0x0007a896) list_tport_double_graphic_pane_g1

0x8d64,	// (0x0007a8a3) list_tport_double_graphic_pane_t1_ParamLimits

0x8d64,	// (0x0007a8a3) list_tport_double_graphic_pane_t1

0x8d79,	// (0x0007a8b8) list_tport_double_graphic_pane_t2_ParamLimits

0x8d79,	// (0x0007a8b8) list_tport_double_graphic_pane_t2

0x0001,

0xfc63,	// (0x000817a2) list_tport_double_graphic_pane_t_ParamLimits

0xfc63,	// (0x000817a2) list_tport_double_graphic_pane_t

0xb4d2,	// (0x0007d011) main_cale_note_pane

0x709c,	// (0x00078bdb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x709c,	// (0x00078bdb) cell_vitu2_function_top_wide_pane_cp01

0x880d,	// (0x0007a34c) wait_bar_pane_cp05_ParamLimits

0xbb7a,	// (0x0007d6b9) listscroll_cmail_pane

0xca4e,	// (0x0007e58d) list_cmail_pane

0x8d8b,	// (0x0007a8ca) list_cmail_body_pane

0x8db2,	// (0x0007a8f1) list_single_cmail_header_caption_pane

0x8ddb,	// (0x0007a91a) list_single_cmail_header_detail_pane_ParamLimits

0x8ddb,	// (0x0007a91a) list_single_cmail_header_detail_pane

0xca65,	// (0x0007e5a4) list_single_cmail_header_caption_pane_t1

0x2258,	// (0x00073d97) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2258,	// (0x00073d97) list_single_cmail_header_detail_pane_g1

0x8e15,	// (0x0007a954) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8e15,	// (0x0007a954) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc68,	// (0x000817a7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc68,	// (0x000817a7) list_single_cmail_header_detail_pane_g

0x226e,	// (0x00073dad) list_single_cmail_header_detail_pane_t1_ParamLimits

0x226e,	// (0x00073dad) list_single_cmail_header_detail_pane_t1

0x22ce,	// (0x00073e0d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x22ce,	// (0x00073e0d) list_single_cmail_header_editor_pane_bg

0xafa4,	// (0x0007cae3) list_cmail_body_pane_g1

0xca89,	// (0x0007e5c8) list_cmail_body_pane_t1

0x064e,	// (0x0007218d) list_single_cmail_header_editor_pane_bg_g1

0xc03e,	// (0x0007db7d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x065e,	// (0x0007219d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0656,	// (0x00072195) list_single_cmail_header_editor_pane_bg_g1_copy3

0x08cc,	// (0x0007240b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x067e,	// (0x000721bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x066e,	// (0x000721ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0676,	// (0x000721b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc01e,	// (0x0007db5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e21,	// (0x0007a960) calenote_gesture_pane_ParamLimits

0x8e21,	// (0x0007a960) calenote_gesture_pane

0x8e3b,	// (0x0007a97a) calenote_window_pane_ParamLimits

0x8e3b,	// (0x0007a97a) calenote_window_pane

0xca97,	// (0x0007e5d6) popup_note_window_cp01

0x8e53,	// (0x0007a992) calenote_swipe_1_pane_ParamLimits

0x8e53,	// (0x0007a992) calenote_swipe_1_pane

0x8b3a,	// (0x0007a679) calenote_swipe_2_pane_ParamLimits

0x8b3a,	// (0x0007a679) calenote_swipe_2_pane

0xb2f5,	// (0x0007ce34) calenote_swipe_1_pane_g1_ParamLimits

0xb2f5,	// (0x0007ce34) calenote_swipe_1_pane_g1

0xb302,	// (0x0007ce41) calenote_swipe_1_pane_g2_ParamLimits

0xb302,	// (0x0007ce41) calenote_swipe_1_pane_g2

0x0001,

0xfc05,	// (0x00081744) calenote_swipe_1_pane_g_ParamLimits

0xfc05,	// (0x00081744) calenote_swipe_1_pane_g

0xcaa9,	// (0x0007e5e8) calenote_swipe_1_pane_t1_ParamLimits

0xcaa9,	// (0x0007e5e8) calenote_swipe_1_pane_t1

0xb2f5,	// (0x0007ce34) calenote_swipe_2_pane_g1_ParamLimits

0xb2f5,	// (0x0007ce34) calenote_swipe_2_pane_g1

0xcac8,	// (0x0007e607) calenote_swipe_2_pane_g2_ParamLimits

0xcac8,	// (0x0007e607) calenote_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x000817b3) calenote_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x000817b3) calenote_swipe_2_pane_g

0xcad4,	// (0x0007e613) calenote_swipe_2_pane_t1_ParamLimits

0xcad4,	// (0x0007e613) calenote_swipe_2_pane_t1

0xb4d2,	// (0x0007d011) main_mup_navstr_pane

0x5f0e,	// (0x00077a4d) main_mup3_pane_t7_ParamLimits

0x5f0e,	// (0x00077a4d) main_mup3_pane_t7

0x6739,	// (0x00078278) main_mp4_pane_g6_ParamLimits

0x6739,	// (0x00078278) main_mp4_pane_g6

0x6ac9,	// (0x00078608) main_image3_pane_t4_ParamLimits

0x6ac9,	// (0x00078608) main_image3_pane_t4

0x8e66,	// (0x0007a9a5) popup_navstr_preview_pane_ParamLimits

0x8e66,	// (0x0007a9a5) popup_navstr_preview_pane

0x8e72,	// (0x0007a9b1) scroll_navstr_pane_ParamLimits

0x8e72,	// (0x0007a9b1) scroll_navstr_pane

0xb4d2,	// (0x0007d011) bg_popup_preview_window_pane_cp04

0xcafb,	// (0x0007e63a) popup_navstr_preview_pane_t1

0x8e7e,	// (0x0007a9bd) scroll_navstr_pane_g1_ParamLimits

0x8e7e,	// (0x0007a9bd) scroll_navstr_pane_g1

0x8e8b,	// (0x0007a9ca) scroll_navstr_pane_t1_ParamLimits

0x8e8b,	// (0x0007a9ca) scroll_navstr_pane_t1

0xcaa0,	// (0x0007e5df) bg_button_pane_cp014

0xcaa0,	// (0x0007e5df) bg_button_pane_cp030

0x1f81,	// (0x00073ac0) list_double_fisheye_pane_g4_ParamLimits

0x1f81,	// (0x00073ac0) list_double_fisheye_pane_g4

0x1f8d,	// (0x00073acc) list_double_fisheye_pane_g5_ParamLimits

0x1f8d,	// (0x00073acc) list_double_fisheye_pane_g5

0xee13,	// (0x00080952) sp_fs_scroll_pane_cp03

0xb415,	// (0x0007cf54) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb421,	// (0x0007cf60) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc22,	// (0x00081761) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8c33,	// (0x0007a772) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xca5d,	// (0x0007e59c) sp_fs_scroll_pane_cp02

0xbd3f,	// (0x0007d87e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbd3f,	// (0x0007d87e) popup_sp_fs_calendar_preview_list_single_pane

0xb4d2,	// (0x0007d011) main_cam6_pano_pane

0xbb7a,	// (0x0007d6b9) main_mup3_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_phacti_pane

0x86e2,	// (0x0007a221) bg_button_pane_cp11

0x86fa,	// (0x0007a239) main_mobtv_info_pane_g2_ParamLimits

0x86fa,	// (0x0007a239) main_mobtv_info_pane_g2

0x0001,

0xfb82,	// (0x000816c1) main_mobtv_info_pane_g_ParamLimits

0xfb82,	// (0x000816c1) main_mobtv_info_pane_g

0x88ac,	// (0x0007a3eb) sc_clock_pane_t5_ParamLimits

0x88ac,	// (0x0007a3eb) sc_clock_pane_t5

0x894d,	// (0x0007a48c) main_radioblah_pane_g1_ParamLimits

0xb241,	// (0x0007cd80) main_radioblah_pane_t3_ParamLimits

0xb241,	// (0x0007cd80) main_radioblah_pane_t3

0xb259,	// (0x0007cd98) main_radioblah_pane_t4_ParamLimits

0xb259,	// (0x0007cd98) main_radioblah_pane_t4

0x896b,	// (0x0007a4aa) main_radioblah_text_pane_ParamLimits

0x896b,	// (0x0007a4aa) main_radioblah_text_pane

0x8978,	// (0x0007a4b7) main_radioblah_info_pane_g1_ParamLimits

0x8a0d,	// (0x0007a54c) main_radioblah_info_pane_t4_ParamLimits

0x8a0d,	// (0x0007a54c) main_radioblah_info_pane_t4

0xbb7a,	// (0x0007d6b9) main_sp_fs_calendar_pane

0x8e9d,	// (0x0007a9dc) main_phacti_pane_g1

0x8ea5,	// (0x0007a9e4) phacti_note_pane_ParamLimits

0x8ea5,	// (0x0007a9e4) phacti_note_pane

0xcb12,	// (0x0007e651) phacti_term_pane_ParamLimits

0xcb12,	// (0x0007e651) phacti_term_pane

0xcb27,	// (0x0007e666) phacti_note_pane_t1_ParamLimits

0xcb27,	// (0x0007e666) phacti_note_pane_t1

0x22e5,	// (0x00073e24) phacti_term_pane_g1

0x22ed,	// (0x00073e2c) phacti_term_pane_t1_ParamLimits

0x22ed,	// (0x00073e2c) phacti_term_pane_t1

0xcb3e,	// (0x0007e67d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbdde,	// (0x0007d91d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc7e,	// (0x000817bd) popup_sp_fs_calendar_preview_list_single_pane_g

0xcb46,	// (0x0007e685) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcb46,	// (0x0007e685) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcb5c,	// (0x0007e69b) aid_popup_sp_fs_bg_corner_pane

0xbe19,	// (0x0007d958) popup_sp_fs_calendar_preview_bg_pane_g1

0xb4d2,	// (0x0007d011) popup_sp_fs_calendar_preview_bg_pane

0xcb64,	// (0x0007e6a3) popup_sp_fs_calendar_preview_list_pane

0xc996,	// (0x0007e4d5) bg_main_sp_fs_cale_pane_ParamLimits

0xc996,	// (0x0007e4d5) bg_main_sp_fs_cale_pane

0x2320,	// (0x00073e5f) listscroll_cale_mrui_pane_ParamLimits

0x2320,	// (0x00073e5f) listscroll_cale_mrui_pane

0x2335,	// (0x00073e74) listscroll_sp_fs_schedule_track_pane

0x233e,	// (0x00073e7d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x233e,	// (0x00073e7d) main_sp_fs_ctrlbar_pane_cp01

0xcb6c,	// (0x0007e6ab) main_sp_fs_ribbon_pane

0x2351,	// (0x00073e90) popup_sp_fs_cale_preview_window

0x8f08,	// (0x0007aa47) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f08,	// (0x0007aa47) list_single_sp_fs_schedule_track_pane

0xb4dc,	// (0x0007d01b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb4dc,	// (0x0007d01b) bg_sp_fs_highlight_list_pane_cp03

0x8f28,	// (0x0007aa67) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f28,	// (0x0007aa67) list_single_sp_fs_schedule_track_pane_g1

0x8f34,	// (0x0007aa73) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f34,	// (0x0007aa73) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc83,	// (0x000817c2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc83,	// (0x000817c2) list_single_sp_fs_schedule_track_pane_g

0x8f40,	// (0x0007aa7f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f40,	// (0x0007aa7f) list_single_sp_fs_schedule_track_pane_t1

0x8f58,	// (0x0007aa97) sp_fs_schedule_track_pane_ParamLimits

0x8f58,	// (0x0007aa97) sp_fs_schedule_track_pane

0xcb74,	// (0x0007e6b3) sp_fs_schedule_track_pane_g1

0xcb7c,	// (0x0007e6bb) sp_fs_schedule_track_pane_g2

0xcb84,	// (0x0007e6c3) sp_fs_schedule_track_pane_g3

0xcb8c,	// (0x0007e6cb) sp_fs_schedule_track_pane_g4

0xcb94,	// (0x0007e6d3) sp_fs_schedule_track_pane_g5

0x0004,

0xfc88,	// (0x000817c7) sp_fs_schedule_track_pane_g

0x064e,	// (0x0007218d) bg_sp_fs_schedule_viewer_highlight_g1

0xc03e,	// (0x0007db7d) bg_sp_fs_schedule_viewer_highlight_g2

0x0656,	// (0x00072195) bg_sp_fs_schedule_viewer_highlight_g3

0x065e,	// (0x0007219d) bg_sp_fs_schedule_viewer_highlight_g4

0x08cc,	// (0x0007240b) bg_sp_fs_schedule_viewer_highlight_g5

0x066e,	// (0x000721ad) bg_sp_fs_schedule_viewer_highlight_g6

0x0676,	// (0x000721b5) bg_sp_fs_schedule_viewer_highlight_g7

0x067e,	// (0x000721bd) bg_sp_fs_schedule_viewer_highlight_g8

0xc01e,	// (0x0007db5d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc93,	// (0x000817d2) bg_sp_fs_schedule_viewer_highlight_g

0xb4d2,	// (0x0007d011) bg_main_sp_fs_ribbon_pane

0x8f68,	// (0x0007aaa7) main_sp_fs_ribbon_pane_g1

0xcb9c,	// (0x0007e6db) main_sp_fs_ribbon_pane_t1

0x8f71,	// (0x0007aab0) main_sp_fs_ribbon_pane_t2

0xcbab,	// (0x0007e6ea) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca6,	// (0x000817e5) main_sp_fs_ribbon_pane_t

0xcbba,	// (0x0007e6f9) main_sp_fs_ribbon_scheduler_pane

0xcbc2,	// (0x0007e701) bg_main_sp_fs_ribbon_pane_g1

0xcbcb,	// (0x0007e70a) bg_main_sp_fs_ribbon_pane_g2

0xcbd4,	// (0x0007e713) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcad,	// (0x000817ec) bg_main_sp_fs_ribbon_pane_g

0xcbdc,	// (0x0007e71b) main_sp_fs_ribbon_scheduler_pane_g1

0xcbe5,	// (0x0007e724) main_sp_fs_ribbon_scheduler_pane_g2

0xcbee,	// (0x0007e72d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb4,	// (0x000817f3) main_sp_fs_ribbon_scheduler_pane_g

0xcbf7,	// (0x0007e736) list_cale_mrui_pane

0x8f80,	// (0x0007aabf) sp_fs_scroll_pane_cp07_ParamLimits

0x8f80,	// (0x0007aabf) sp_fs_scroll_pane_cp07

0x8f9c,	// (0x0007aadb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f9c,	// (0x0007aadb) bg_sp_fs_schedule_viewer_highlight

0xcc04,	// (0x0007e743) list_single_sp_fs_schedule_track_pane_cp01

0xcc0c,	// (0x0007e74b) list_sp_fs_schedule_track_pane

0xcc14,	// (0x0007e753) sp_fs_scroll_pane_cp06_ParamLimits

0xcc14,	// (0x0007e753) sp_fs_scroll_pane_cp06

0xbe19,	// (0x0007d958) bgmain_sp_fs_calendar_pane_g1

0x2363,	// (0x00073ea2) list_single_cale_mrui_pane_ParamLimits

0x2363,	// (0x00073ea2) list_single_cale_mrui_pane

0x238d,	// (0x00073ecc) list_single_cale_mrui_row_pane_ParamLimits

0x238d,	// (0x00073ecc) list_single_cale_mrui_row_pane

0x239a,	// (0x00073ed9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x239a,	// (0x00073ed9) list_single_cale_mrui_row_pane_g1

0x23d2,	// (0x00073f11) list_single_cale_mrui_row_pane_t1_ParamLimits

0x23d2,	// (0x00073f11) list_single_cale_mrui_row_pane_t1

0x23e4,	// (0x00073f23) list_single_cale_mrui_row_pane_t2_ParamLimits

0x23e4,	// (0x00073f23) list_single_cale_mrui_row_pane_t2

0x244a,	// (0x00073f89) list_single_cale_mrui_row_pane_t3_ParamLimits

0x244a,	// (0x00073f89) list_single_cale_mrui_row_pane_t3

0x2479,	// (0x00073fb8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2479,	// (0x00073fb8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc2,	// (0x00081801) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc2,	// (0x00081801) list_single_cale_mrui_row_pane_t

0x24a8,	// (0x00073fe7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x24a8,	// (0x00073fe7) list_single_cmail_header_editor_pane_bg_cp01

0x24d0,	// (0x0007400f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x24d0,	// (0x0007400f) list_single_cmail_header_editor_pane_bg_cp02

0x8fa9,	// (0x0007aae8) main_radioblah_text_pane_t1_ParamLimits

0x8fa9,	// (0x0007aae8) main_radioblah_text_pane_t1

0xcc33,	// (0x0007e772) cam6_indi_pane_cp01

0xcc3b,	// (0x0007e77a) cam6_mode_pane_cp01

0xcc43,	// (0x0007e782) cam6_pano_pane

0xcc4c,	// (0x0007e78b) cam6_zoom_pane_cp01

0xcc54,	// (0x0007e793) cam6_pano_image_pane

0xcc5f,	// (0x0007e79e) cam6_pano_pane_g1

0xafa4,	// (0x0007cae3) cam6_pano_pane_g2

0xcc68,	// (0x0007e7a7) cam6_pano_pane_g3

0xcc71,	// (0x0007e7b0) cam6_pano_pane_g4

0x02ff,	// (0x00071e3e) cam6_pano_pane_g5

0xcc7a,	// (0x0007e7b9) cam6_pano_pane_g6

0xa850,	// (0x0007c38f) cam6_pano_pane_g7

0xcc84,	// (0x0007e7c3) cam6_pano_pane_g8

0xcc8d,	// (0x0007e7cc) cam6_pano_pane_g9

0x0008,

0xfccb,	// (0x0008180a) cam6_pano_pane_g

0xb4d2,	// (0x0007d011) main_browser_tag_pane

0xcaf3,	// (0x0007e632) grid_navstr_albumart_pane

0xcc98,	// (0x0007e7d7) cell_navstr_albumart_pane_ParamLimits

0xcc98,	// (0x0007e7d7) cell_navstr_albumart_pane

0xccb8,	// (0x0007e7f7) cell_navstr_albumart_pane_g1

0xe837,	// (0x00080376) cell_navstr_albumart_pane_g2

0xe847,	// (0x00080386) cell_navstr_albumart_pane_g3

0xe83f,	// (0x0008037e) cell_navstr_albumart_pane_g4

0x0003,

0xfcde,	// (0x0008181d) cell_navstr_albumart_pane_g

0x8fc4,	// (0x0007ab03) bt_list_pane_ParamLimits

0x8fc4,	// (0x0007ab03) bt_list_pane

0x8fe4,	// (0x0007ab23) bt_list_pane_t1

0x8ff3,	// (0x0007ab32) bt_list_pane_t2

0x0001,

0xfce7,	// (0x00081826) bt_list_pane_t

0xb4d2,	// (0x0007d011) main_cale_prevew_pane

0x9002,	// (0x0007ab41) popup_cale_preview_window_ParamLimits

0x9002,	// (0x0007ab41) popup_cale_preview_window

0xbb7a,	// (0x0007d6b9) bg_popup_preview_window_pane_cp05_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_popup_preview_window_pane_cp05

0xccc0,	// (0x0007e7ff) list_cale_preview_pane_ParamLimits

0xccc0,	// (0x0007e7ff) list_cale_preview_pane

0x901b,	// (0x0007ab5a) list_double_cale_preview_pane_ParamLimits

0x901b,	// (0x0007ab5a) list_double_cale_preview_pane

0x902d,	// (0x0007ab6c) list_single_cale_preview_pane_ParamLimits

0x902d,	// (0x0007ab6c) list_single_cale_preview_pane

0x9043,	// (0x0007ab82) list_single_cale_preview_pane_g1

0x904b,	// (0x0007ab8a) list_single_cale_preview_pane_t1_ParamLimits

0x904b,	// (0x0007ab8a) list_single_cale_preview_pane_t1

0x9060,	// (0x0007ab9f) list_double_cale_preview_pane_g1

0x9068,	// (0x0007aba7) list_double_cale_preview_pane_t1_ParamLimits

0x9068,	// (0x0007aba7) list_double_cale_preview_pane_t1

0x907d,	// (0x0007abbc) list_double_cale_preview_pane_t2_ParamLimits

0x907d,	// (0x0007abbc) list_double_cale_preview_pane_t2

0x0001,

0xfcec,	// (0x0008182b) list_double_cale_preview_pane_t_ParamLimits

0xfcec,	// (0x0008182b) list_double_cale_preview_pane_t

0xb4d2,	// (0x0007d011) main_ezdial_pane

0xbb7a,	// (0x0007d6b9) main_sp_fs_email_pane_ParamLimits

0x8b98,	// (0x0007a6d7) cmail_ddmenu_btn01_pane_ParamLimits

0x8b98,	// (0x0007a6d7) cmail_ddmenu_btn01_pane

0x8bb5,	// (0x0007a6f4) cmail_ddmenu_btn02_pane_ParamLimits

0x8bb5,	// (0x0007a6f4) cmail_ddmenu_btn02_pane

0x8bd3,	// (0x0007a712) cmail_ddmenu_btn03_pane_ParamLimits

0x8bd3,	// (0x0007a712) cmail_ddmenu_btn03_pane

0x8c6e,	// (0x0007a7ad) main_sp_fs_ctrlbar_pane_ParamLimits

0x8c84,	// (0x0007a7c3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d8b,	// (0x0007a8ca) list_cmail_body_pane_ParamLimits

0xca73,	// (0x0007e5b2) bg_button_pane_cp12

0xca7c,	// (0x0007e5bb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca7c,	// (0x0007e5bb) list_single_cmail_header_detail_pane_g3

0x22aa,	// (0x00073de9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x22aa,	// (0x00073de9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6f,	// (0x000817ae) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6f,	// (0x000817ae) list_single_cmail_header_detail_pane_t

0x2302,	// (0x00073e41) phacti_term_pane_t2_ParamLimits

0x2302,	// (0x00073e41) phacti_term_pane_t2

0x0001,

0xfc79,	// (0x000817b8) phacti_term_pane_t_ParamLimits

0xfc79,	// (0x000817b8) phacti_term_pane_t

0xcccc,	// (0x0007e80b) aid_size_list_single_double

0x9095,	// (0x0007abd4) popup_ezdial_listscroll_window

0x90b6,	// (0x0007abf5) popup_number_entry_window_cp01

0xbdf7,	// (0x0007d936) bg_popup_call_pane_cp09

0xccd8,	// (0x0007e817) ezdial_list_pane

0xcce0,	// (0x0007e81f) scroll_pane_cp23

0xe2e4,	// (0x0007fe23) bg_button_pane_cp028_ParamLimits

0xe2e4,	// (0x0007fe23) bg_button_pane_cp028

0x90c4,	// (0x0007ac03) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90c4,	// (0x0007ac03) cmail_ddmenu_btn01_pane_g1

0x90d4,	// (0x0007ac13) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90d4,	// (0x0007ac13) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf1,	// (0x00081830) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf1,	// (0x00081830) cmail_ddmenu_btn01_pane_g

0xcce8,	// (0x0007e827) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcce8,	// (0x0007e827) cmail_ddmenu_btn01_pane_t1

0xc996,	// (0x0007e4d5) bg_button_pane_cp029_ParamLimits

0xc996,	// (0x0007e4d5) bg_button_pane_cp029

0x90e0,	// (0x0007ac1f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90e0,	// (0x0007ac1f) cmail_ddmenu_btn02_pane_g1

0x90f8,	// (0x0007ac37) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90f8,	// (0x0007ac37) cmail_ddmenu_btn02_pane_t1

0xb4dc,	// (0x0007d01b) bg_button_pane_cp031_ParamLimits

0xb4dc,	// (0x0007d01b) bg_button_pane_cp031

0x90e0,	// (0x0007ac1f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90e0,	// (0x0007ac1f) cmail_ddmenu_btn03_pane_g1

0x90f8,	// (0x0007ac37) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90f8,	// (0x0007ac37) cmail_ddmenu_btn03_pane_t1

0x6974,	// (0x000784b3) cell_dialer2_keypad_pane_t1_ParamLimits

0x698e,	// (0x000784cd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x698e,	// (0x000784cd) cell_dialer2_keypad_pane_t1_copy1

0x8523,	// (0x0007a062) ncimui_group_button_pane

0xbb7a,	// (0x0007d6b9) main_sp_fs_calendar_pane_ParamLimits

0x8db2,	// (0x0007a8f1) list_single_cmail_header_caption_pane_ParamLimits

0x2317,	// (0x00073e56) aid_recal_txt_sm_pane

0xb4d2,	// (0x0007d011) mian_recal_day_pane

0x2351,	// (0x00073e90) popup_sp_fs_cale_preview_window_ParamLimits

0xccfe,	// (0x0007e83d) list_recal_day_pane

0x2507,	// (0x00074046) list_single_recal_day_pane_ParamLimits

0x2507,	// (0x00074046) list_single_recal_day_pane

0xcd25,	// (0x0007e864) list_single_recal_day_pane_g1_ParamLimits

0xcd25,	// (0x0007e864) list_single_recal_day_pane_g1

0x2519,	// (0x00074058) list_single_recal_day_pane_g2_ParamLimits

0x2519,	// (0x00074058) list_single_recal_day_pane_g2

0x2525,	// (0x00074064) list_single_recal_day_pane_g3_ParamLimits

0x2525,	// (0x00074064) list_single_recal_day_pane_g3

0x2531,	// (0x00074070) list_single_recal_day_pane_g4_ParamLimits

0x2531,	// (0x00074070) list_single_recal_day_pane_g4

0x253f,	// (0x0007407e) list_single_recal_day_pane_g5_ParamLimits

0x253f,	// (0x0007407e) list_single_recal_day_pane_g5

0x2555,	// (0x00074094) list_single_recal_day_pane_g6_ParamLimits

0x2555,	// (0x00074094) list_single_recal_day_pane_g6

0x0004,

0xfd00,	// (0x0008183f) list_single_recal_day_pane_g_ParamLimits

0xfd00,	// (0x0008183f) list_single_recal_day_pane_g

0x2569,	// (0x000740a8) list_single_recal_day_pane_t1

0x257b,	// (0x000740ba) list_single_recal_day_pane_t2

0x0001,

0xfd0b,	// (0x0008184a) list_single_recal_day_pane_t

0x911c,	// (0x0007ac5b) ncimui_query_button_pane_ParamLimits

0x911c,	// (0x0007ac5b) ncimui_query_button_pane

0x912c,	// (0x0007ac6b) ncimui_query_button_pane_t1_ParamLimits

0x912c,	// (0x0007ac6b) ncimui_query_button_pane_t1

0xcd31,	// (0x0007e870) ncimui_query_button_pane_t2_ParamLimits

0xcd31,	// (0x0007e870) ncimui_query_button_pane_t2

0x0001,

0xfd10,	// (0x0008184f) ncimui_query_button_pane_t_ParamLimits

0xfd10,	// (0x0008184f) ncimui_query_button_pane_t

0x913f,	// (0x0007ac7e) query_button_pane_ParamLimits

0x913f,	// (0x0007ac7e) query_button_pane

0xb4d2,	// (0x0007d011) bg_button_pane_cp0028

0xcd44,	// (0x0007e883) query_button_pane_t1

0x54b3,	// (0x00076ff2) main_tport_pane_ParamLimits

0x8c95,	// (0x0007a7d4) bg_popup_window_pane_cp01_ParamLimits

0x8c95,	// (0x0007a7d4) bg_popup_window_pane_cp01

0x8ca3,	// (0x0007a7e2) heading_pane_cp08_ParamLimits

0x8ca3,	// (0x0007a7e2) heading_pane_cp08

0x8cb1,	// (0x0007a7f0) heading_pane_cp07_ParamLimits

0x8cb1,	// (0x0007a7f0) heading_pane_cp07

0x8d20,	// (0x0007a85f) cell_tport_appsw_pane_g2

0x0002,

0xfc5c,	// (0x0008179b) cell_tport_appsw_pane_g

0x1aad,	// (0x000735ec) input_candi_list_open_g1

0xc209,	// (0x0007dd48) list_cale_time_pane_g6_ParamLimits

0xc209,	// (0x0007dd48) list_cale_time_pane_g6

0x5954,	// (0x00077493) aid_size_touch_calib_1_ParamLimits

0x5954,	// (0x00077493) aid_size_touch_calib_1

0x5960,	// (0x0007749f) aid_size_touch_calib_2_ParamLimits

0x5960,	// (0x0007749f) aid_size_touch_calib_2

0x596e,	// (0x000774ad) aid_size_touch_calib_3_ParamLimits

0x596e,	// (0x000774ad) aid_size_touch_calib_3

0x597e,	// (0x000774bd) aid_size_touch_calib_4_ParamLimits

0x597e,	// (0x000774bd) aid_size_touch_calib_4

0x598c,	// (0x000774cb) main_touch_calib_button_group_pane_ParamLimits

0x598c,	// (0x000774cb) main_touch_calib_button_group_pane

0x599a,	// (0x000774d9) main_touch_calib_pane_g1_ParamLimits

0x59a6,	// (0x000774e5) main_touch_calib_pane_g2_ParamLimits

0x59b2,	// (0x000774f1) main_touch_calib_pane_g3_ParamLimits

0x59be,	// (0x000774fd) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x000811dd) main_touch_calib_pane_g_ParamLimits

0x59ca,	// (0x00077509) main_touch_calib_pane_t1_ParamLimits

0x59e3,	// (0x00077522) main_touch_calib_pane_t2_ParamLimits

0x59fc,	// (0x0007753b) main_touch_calib_pane_t3_ParamLimits

0x5a12,	// (0x00077551) main_touch_calib_pane_t4_ParamLimits

0x5a28,	// (0x00077567) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x000811e6) main_touch_calib_pane_t_ParamLimits

0x00c2,	// (0x00071c01) list_single_fp_cale_pane_g3_ParamLimits

0x00c2,	// (0x00071c01) list_single_fp_cale_pane_g3

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp012_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp03_ParamLimits

0x77d3,	// (0x00079312) cell_vitu2_function_top_pane_g1_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_vkb2_func_pane_cp04_ParamLimits

0x84ab,	// (0x00079fea) main_ncimui_button_group_pane_ParamLimits

0x84ab,	// (0x00079fea) main_ncimui_button_group_pane

0x8511,	// (0x0007a050) main_ncimui_pane_t3_ParamLimits

0x8511,	// (0x0007a050) main_ncimui_pane_t3

0xcb09,	// (0x0007e648) phacti_button_group_pane

0xcccc,	// (0x0007e80b) aid_size_list_single_double_ParamLimits

0x9095,	// (0x0007abd4) popup_ezdial_listscroll_window_ParamLimits

0x90b6,	// (0x0007abf5) popup_number_entry_window_cp01_ParamLimits

0x914c,	// (0x0007ac8b) phacti_button_pane_ParamLimits

0x914c,	// (0x0007ac8b) phacti_button_pane

0xb4d2,	// (0x0007d011) bg_button_pane_cp14

0xcd52,	// (0x0007e891) phacti_button_pane_t1

0x915d,	// (0x0007ac9c) main_touch_calib_button_pane_ParamLimits

0x915d,	// (0x0007ac9c) main_touch_calib_button_pane

0xbc45,	// (0x0007d784) bg_button_pane_cp18_ParamLimits

0xbc45,	// (0x0007d784) bg_button_pane_cp18

0xcd60,	// (0x0007e89f) main_touch_calib_button_pane_t1_ParamLimits

0xcd60,	// (0x0007e89f) main_touch_calib_button_pane_t1

0xcd76,	// (0x0007e8b5) main_touch_calib_button_pane_t2_ParamLimits

0xcd76,	// (0x0007e8b5) main_touch_calib_button_pane_t2

0x0001,

0xfd15,	// (0x00081854) main_touch_calib_button_pane_t_ParamLimits

0xfd15,	// (0x00081854) main_touch_calib_button_pane_t

0xb4d2,	// (0x0007d011) cell_ncimui_button_pane

0xb4d2,	// (0x0007d011) bg_button_pane_cp032

0xcd94,	// (0x0007e8d3) cell_ncimui_button_pane_t1

0x69ea,	// (0x00078529) image3_infobar_pane_ParamLimits

0x69ea,	// (0x00078529) image3_infobar_pane

0x88ce,	// (0x0007a40d) fs_bigclock_status_pane_ParamLimits

0x88ce,	// (0x0007a40d) fs_bigclock_status_pane

0x88db,	// (0x0007a41a) main_fs_bigclock_clock_pane_ParamLimits

0x88db,	// (0x0007a41a) main_fs_bigclock_clock_pane

0x88ef,	// (0x0007a42e) main_fs_bigclock_indi_pane_ParamLimits

0x88ef,	// (0x0007a42e) main_fs_bigclock_indi_pane

0x8917,	// (0x0007a456) main_fs_bigclock_swipe_pane_ParamLimits

0x8917,	// (0x0007a456) main_fs_bigclock_swipe_pane

0xb4d2,	// (0x0007d011) main_fs_clock_dumped_data

0xb0b1,	// (0x0007cbf0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb0b1,	// (0x0007cbf0) list_single_fs_bigclock_indicator_pane_g1

0xb0cc,	// (0x0007cc0b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb0cc,	// (0x0007cc0b) list_single_fs_bigclock_indicator_pane_g2

0xb0e6,	// (0x0007cc25) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb0e6,	// (0x0007cc25) list_single_fs_bigclock_indicator_pane_g3

0xb100,	// (0x0007cc3f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb100,	// (0x0007cc3f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb6,	// (0x000816f5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb6,	// (0x000816f5) list_single_fs_bigclock_indicator_pane_g

0xb12b,	// (0x0007cc6a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb12b,	// (0x0007cc6a) list_single_fs_bigclock_indicator_pane_t1

0xb153,	// (0x0007cc92) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb153,	// (0x0007cc92) list_single_fs_bigclock_indicator_pane_t2

0xb17b,	// (0x0007ccba) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb17b,	// (0x0007ccba) list_single_fs_bigclock_indicator_pane_t3

0xb1a3,	// (0x0007cce2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb1a3,	// (0x0007cce2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc1,	// (0x00081700) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc1,	// (0x00081700) list_single_fs_bigclock_indicator_pane_t

0xcda2,	// (0x0007e8e1) image3_infobar_fav_pane_ParamLimits

0xcda2,	// (0x0007e8e1) image3_infobar_fav_pane

0xcdb2,	// (0x0007e8f1) image3_infobar_loc_pane_ParamLimits

0xcdb2,	// (0x0007e8f1) image3_infobar_loc_pane

0xcdc6,	// (0x0007e905) image3_infobar_time_pane_ParamLimits

0xcdc6,	// (0x0007e905) image3_infobar_time_pane

0xbe19,	// (0x0007d958) image3_infobar_time_pane_g1

0xcdd6,	// (0x0007e915) image3_infobar_time_pane_t1

0xbe19,	// (0x0007d958) image3_infobar_loc_pane_g1

0xcde4,	// (0x0007e923) image3_infobar_loc_pane_g2

0x0001,

0xfd1a,	// (0x00081859) image3_infobar_loc_pane_g

0xcdec,	// (0x0007e92b) image3_infobar_loc_pane_t1

0xbe19,	// (0x0007d958) image3_infobar_fav_pane_g1

0xcdfa,	// (0x0007e939) image3_infobar_fav_pane_g2

0x0001,

0xfd1f,	// (0x0008185e) image3_infobar_fav_pane_g

0xce02,	// (0x0007e941) fs_bigclock_status_battery_pane

0xce0b,	// (0x0007e94a) fs_bigclock_status_signal_pane

0xce14,	// (0x0007e953) fs_bigclock_status_title_pane

0xce1d,	// (0x0007e95c) fs_bigclock_status_signal_pane_g1

0xce26,	// (0x0007e965) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd24,	// (0x00081863) fs_bigclock_status_signal_pane_g

0xce2e,	// (0x0007e96d) fs_bigclock_status_battery_pane_g1

0xce37,	// (0x0007e976) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd29,	// (0x00081868) fs_bigclock_status_battery_pane_g

0xce3f,	// (0x0007e97e) fs_bigclock_status_title_pane_t1

0x916d,	// (0x0007acac) main_fs_bigclock_clock_pane_g1

0x916d,	// (0x0007acac) main_fs_bigclock_clock_pane_g2

0x917a,	// (0x0007acb9) main_fs_bigclock_clock_pane_g3

0x917a,	// (0x0007acb9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd2e,	// (0x0008186d) main_fs_bigclock_clock_pane_g

0x9186,	// (0x0007acc5) main_fs_bigclock_clock_pane_t1

0x9199,	// (0x0007acd8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd37,	// (0x00081876) main_fs_bigclock_clock_pane_t

0xce4d,	// (0x0007e98c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xce4d,	// (0x0007e98c) list_single_fs_bigclock_indicator_pane

0xce5e,	// (0x0007e99d) list_single_fs_bigclock_pane_ParamLimits

0xce5e,	// (0x0007e99d) list_single_fs_bigclock_pane

0xce84,	// (0x0007e9c3) main_fs_bigclock_indicator_pane_t1

0xce93,	// (0x0007e9d2) list_single_fs_bigclock_pane_g1

0xce9b,	// (0x0007e9da) list_single_fs_bigclock_pane_t1

0xbe19,	// (0x0007d958) main_fs_bigclock_swipe_pane_g1

0xcede,	// (0x0007ea1d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd48,	// (0x00081887) main_fs_bigclock_swipe_pane_g

0xcee6,	// (0x0007ea25) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcee6,	// (0x0007ea25) main_fs_bigclock_swipe_pane_t1

0x4760,	// (0x0007629f) call_type_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_btmg_pane

0x23c6,	// (0x00073f05) list_single_cale_mrui_row_pane_g2_ParamLimits

0x23c6,	// (0x00073f05) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbb,	// (0x000817fa) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbb,	// (0x000817fa) list_single_cale_mrui_row_pane_g

0x24f6,	// (0x00074035) list_recal_vselct_arw_lo_pane

0xcd1d,	// (0x0007e85c) list_recal_vselct_arw_up_pane

0x24fe,	// (0x0007403d) list_recal_vselct_pane

0x91f0,	// (0x0007ad2f) btmg_button_pane

0x91fc,	// (0x0007ad3b) main_btmg_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp044

0xcf03,	// (0x0007ea42) btmg_button_pane_t1

0xe987,	// (0x000804c6) aid_listscroll_gen

0xbb7a,	// (0x0007d6b9) main_cntbar_detail_pane

0xca46,	// (0x0007e585) list_cmail_folder_pane

0xee13,	// (0x00080952) sp_fs_scroll_pane_cp03_ParamLimits

0x258d,	// (0x000740cc) list_single_fs_dyc_pane_cp01_ParamLimits

0x258d,	// (0x000740cc) list_single_fs_dyc_pane_cp01

0xcf11,	// (0x0007ea50) aid_size_cmail_indent

0x25b5,	// (0x000740f4) list_single_dyc_row_pane_cp01

0x9224,	// (0x0007ad63) cntbar_detail_list_pane_ParamLimits

0x9224,	// (0x0007ad63) cntbar_detail_list_pane

0x925e,	// (0x0007ad9d) main_cntbar_detail_cont_pane_ParamLimits

0x925e,	// (0x0007ad9d) main_cntbar_detail_cont_pane

0x4754,	// (0x00076293) scroll_pane_cp032_ParamLimits

0x4754,	// (0x00076293) scroll_pane_cp032

0x926a,	// (0x0007ada9) cntbar_detail_list_event_pane_ParamLimits

0x926a,	// (0x0007ada9) cntbar_detail_list_event_pane

0x9230,	// (0x0007ad6f) cntbar_detail_list_shct_pane

0xc08c,	// (0x0007dbcb) aid_list_gen

0xcf1a,	// (0x0007ea59) aid_scroll

0xcf23,	// (0x0007ea62) aid_size_touch_scroll_bar

0x927e,	// (0x0007adbd) aid_list_double

0xcf2c,	// (0x0007ea6b) aid_list_single

0x9287,	// (0x0007adc6) aid_list_single_lg

0x25be,	// (0x000740fd) aid_list_z_g_a_sm

0x9290,	// (0x0007adcf) aid_list_z_g_d

0x25c6,	// (0x00074105) aid_txt_z_prm

0x25d4,	// (0x00074113) aid_txt_z_prm_cp01

0x25e2,	// (0x00074121) aid_txt_z_sec

0x9298,	// (0x0007add7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9298,	// (0x0007add7) main_cntbar_detail_cont_pane_g1

0x92a5,	// (0x0007ade4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92a5,	// (0x0007ade4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd4d,	// (0x0008188c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd4d,	// (0x0008188c) main_cntbar_detail_cont_pane_g

0xcf35,	// (0x0007ea74) main_cntbar_detail_cont_pane_t1

0xcf43,	// (0x0007ea82) main_cntbar_detail_cont_pane_t2

0xcf51,	// (0x0007ea90) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd52,	// (0x00081891) main_cntbar_detail_cont_pane_t

0x92b1,	// (0x0007adf0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92b1,	// (0x0007adf0) cell_cntbar_detail_list_shct_pane

0xcf5f,	// (0x0007ea9e) cntbar_detail_list_shct_pane_g1

0xcf68,	// (0x0007eaa7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd59,	// (0x00081898) cntbar_detail_list_shct_pane_g

0x92c5,	// (0x0007ae04) cntbar_detail_list_event_pane_g1_ParamLimits

0x92c5,	// (0x0007ae04) cntbar_detail_list_event_pane_g1

0x92d1,	// (0x0007ae10) cntbar_detail_list_event_pane_g2_ParamLimits

0x92d1,	// (0x0007ae10) cntbar_detail_list_event_pane_g2

0x0005,

0xfd5e,	// (0x0008189d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd5e,	// (0x0008189d) cntbar_detail_list_event_pane_g

0x933d,	// (0x0007ae7c) cntbar_detail_list_event_pane_t1_ParamLimits

0x933d,	// (0x0007ae7c) cntbar_detail_list_event_pane_t1

0x9352,	// (0x0007ae91) cntbar_detail_list_event_pane_t2_ParamLimits

0x9352,	// (0x0007ae91) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6b,	// (0x000818aa) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6b,	// (0x000818aa) cntbar_detail_list_event_pane_t

0xbe19,	// (0x0007d958) cell_cntbar_detail_list_shct_pane_g1

0xc83e,	// (0x0007e37d) navi_pane_mv_g3

0xbb7a,	// (0x0007d6b9) main_cntbar_detail_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_notif_wgt_pane

0x6674,	// (0x000781b3) aid_tch_main_mp4_pane_g4

0x68d3,	// (0x00078412) popup_slider_window_cp02

0x24ec,	// (0x0007402b) list_recal_day_event_pane

0x9204,	// (0x0007ad43) cntbar_detail_btn_pane_ParamLimits

0x9204,	// (0x0007ad43) cntbar_detail_btn_pane

0x9214,	// (0x0007ad53) cntbar_detail_btn_pane_cp01_ParamLimits

0x9214,	// (0x0007ad53) cntbar_detail_btn_pane_cp01

0x9230,	// (0x0007ad6f) cntbar_detail_list_shct_pane_ParamLimits

0x923c,	// (0x0007ad7b) cntbar_detail_pane_g1_ParamLimits

0x923c,	// (0x0007ad7b) cntbar_detail_pane_g1

0x9248,	// (0x0007ad87) cntbar_detail_pane_t1_ParamLimits

0x9248,	// (0x0007ad87) cntbar_detail_pane_t1

0x92dd,	// (0x0007ae1c) cntbar_detail_list_event_pane_g3_ParamLimits

0x92dd,	// (0x0007ae1c) cntbar_detail_list_event_pane_g3

0x92f5,	// (0x0007ae34) cntbar_detail_list_event_pane_g4_ParamLimits

0x92f5,	// (0x0007ae34) cntbar_detail_list_event_pane_g4

0x930d,	// (0x0007ae4c) cntbar_detail_list_event_pane_g5_ParamLimits

0x930d,	// (0x0007ae4c) cntbar_detail_list_event_pane_g5

0x9325,	// (0x0007ae64) cntbar_detail_list_event_pane_g6_ParamLimits

0x9325,	// (0x0007ae64) cntbar_detail_list_event_pane_g6

0x9367,	// (0x0007aea6) cntbar_detail_list_event_pane_t3_ParamLimits

0x9367,	// (0x0007aea6) cntbar_detail_list_event_pane_t3

0x9379,	// (0x0007aeb8) popup_notif_wgt_window_ParamLimits

0x9379,	// (0x0007aeb8) popup_notif_wgt_window

0x9389,	// (0x0007aec8) popup_submenu_window_cp01_ParamLimits

0x9389,	// (0x0007aec8) popup_submenu_window_cp01

0xbdf7,	// (0x0007d936) bg_popup_window_pane_cp10

0xcf71,	// (0x0007eab0) listscroll_notif_wgt_pane

0xcf83,	// (0x0007eac2) list_notif_wgt_window

0xcf8c,	// (0x0007eacb) scroll_pane_cp033

0x939b,	// (0x0007aeda) list_notif_wgt_row_pane_ParamLimits

0x939b,	// (0x0007aeda) list_notif_wgt_row_pane

0xcf95,	// (0x0007ead4) aid_size_list_notif_wgt_del

0xcfa2,	// (0x0007eae1) list_notif_wgt_row_pane_g1

0xcfae,	// (0x0007eaed) list_notif_wgt_row_pane_g2

0xcfbd,	// (0x0007eafc) list_notif_wgt_row_pane_g3

0x0002,

0xfd72,	// (0x000818b1) list_notif_wgt_row_pane_g

0xcfca,	// (0x0007eb09) list_notif_wgt_row_pane_t1

0xcfe0,	// (0x0007eb1f) list_notif_wgt_row_pane_t2

0xcff2,	// (0x0007eb31) list_notif_wgt_row_pane_t3

0x0002,

0xfd79,	// (0x000818b8) list_notif_wgt_row_pane_t

0x08e6,	// (0x00072425) list_recal_day_event_pane_g1

0xd004,	// (0x0007eb43) list_recal_day_event_pane_t1

0xb4d2,	// (0x0007d011) bg_button_pane_cp045

0xd013,	// (0x0007eb52) cntbar_detail_btn_pane_t1

0xc996,	// (0x0007e4d5) main_callh_pane_ParamLimits

0xc996,	// (0x0007e4d5) main_callh_pane

0xb4d2,	// (0x0007d011) main_coverflow0_pane

0xb4d2,	// (0x0007d011) main_wgtman_pane

0x892f,	// (0x0007a46e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x892f,	// (0x0007a46e) main_fs_bigclock_unlock_btn_pane

0x8d18,	// (0x0007a857) bg_button_pane_cp16

0x8d28,	// (0x0007a867) cell_tport_appsw_pane_g3

0x93ad,	// (0x0007aeec) cf0_flow_pane_ParamLimits

0x93ad,	// (0x0007aeec) cf0_flow_pane

0xd021,	// (0x0007eb60) listscroll_cf0_pane

0xd02c,	// (0x0007eb6b) main_cf0_pane_g1

0x93bc,	// (0x0007aefb) main_cf0_pane_t1_ParamLimits

0x93bc,	// (0x0007aefb) main_cf0_pane_t1

0x93d0,	// (0x0007af0f) main_cf0_pane_t2_ParamLimits

0x93d0,	// (0x0007af0f) main_cf0_pane_t2

0x0001,

0xfd85,	// (0x000818c4) main_cf0_pane_t_ParamLimits

0xfd85,	// (0x000818c4) main_cf0_pane_t

0xd03e,	// (0x0007eb7d) scroll_pane_cp11

0x93e4,	// (0x0007af23) cf0_flow_pane_g1

0x93ec,	// (0x0007af2b) cf0_flow_pane_g2

0x0001,

0xfd8a,	// (0x000818c9) cf0_flow_pane_g

0x93f4,	// (0x0007af33) cf0_flow_pane_t1

0xb4d2,	// (0x0007d011) main_call6_pane

0xb4d2,	// (0x0007d011) main_calllock_pane

0x9402,	// (0x0007af41) call6_btn_grp_pane_ParamLimits

0x9402,	// (0x0007af41) call6_btn_grp_pane

0x9411,	// (0x0007af50) call6_pane_g1_ParamLimits

0x9411,	// (0x0007af50) call6_pane_g1

0x9421,	// (0x0007af60) popup_call6_1st_window_ParamLimits

0x9421,	// (0x0007af60) popup_call6_1st_window

0x942f,	// (0x0007af6e) popup_call6_2nd_window_ParamLimits

0x942f,	// (0x0007af6e) popup_call6_2nd_window

0x943d,	// (0x0007af7c) cell_call6_btn_pane_ParamLimits

0x943d,	// (0x0007af7c) cell_call6_btn_pane

0xbdf7,	// (0x0007d936) bg_popup_call2_in_pane_cp03

0xd049,	// (0x0007eb88) popup_call6_1st_window_g1

0xd051,	// (0x0007eb90) popup_call6_1st_window_g2

0xd059,	// (0x0007eb98) popup_call6_1st_window_g3

0x0002,

0xfd8f,	// (0x000818ce) popup_call6_1st_window_g

0xd061,	// (0x0007eba0) popup_call6_1st_window_t1

0xd070,	// (0x0007ebaf) popup_call6_1st_window_t2

0xd07e,	// (0x0007ebbd) popup_call6_1st_window_t3

0x0002,

0xfd96,	// (0x000818d5) popup_call6_1st_window_t

0xbdf7,	// (0x0007d936) bg_popup_call2_in_pane_cp04

0xd08c,	// (0x0007ebcb) popup_call6_2nd_window_g1

0xd094,	// (0x0007ebd3) popup_call6_2nd_window_g2

0xd09c,	// (0x0007ebdb) popup_call6_2nd_window_g3

0x0002,

0xfd9d,	// (0x000818dc) popup_call6_2nd_window_g

0xd0a4,	// (0x0007ebe3) popup_call6_2nd_window_t1

0xb4d2,	// (0x0007d011) bg_button_pane_cp15

0xd0b3,	// (0x0007ebf2) cell_call6_btn_pane_g1

0xd711,	// (0x0007f250) cell_call6_btn_pane_t1

0x944c,	// (0x0007af8b) listscroll_wgtman_pane_ParamLimits

0x944c,	// (0x0007af8b) listscroll_wgtman_pane

0x9468,	// (0x0007afa7) wgtman_btn_pane_ParamLimits

0x9468,	// (0x0007afa7) wgtman_btn_pane

0xc645,	// (0x0007e184) aid_scroll_copy1

0xd0bc,	// (0x0007ebfb) list_wgtman_pane

0x949d,	// (0x0007afdc) wgtman_btn_pane_g1_ParamLimits

0x949d,	// (0x0007afdc) wgtman_btn_pane_g1

0x94c5,	// (0x0007b004) wgtman_btn_pane_t1_ParamLimits

0x94c5,	// (0x0007b004) wgtman_btn_pane_t1

0xd0c6,	// (0x0007ec05) wgtman_btn_pane_t2_ParamLimits

0xd0c6,	// (0x0007ec05) wgtman_btn_pane_t2

0x0001,

0xfda4,	// (0x000818e3) wgtman_btn_pane_t_ParamLimits

0xfda4,	// (0x000818e3) wgtman_btn_pane_t

0x94fc,	// (0x0007b03b) listrow_wgtman_pane_ParamLimits

0x94fc,	// (0x0007b03b) listrow_wgtman_pane

0x9517,	// (0x0007b056) listrow_wgtman_pane_g1

0x9524,	// (0x0007b063) listrow_wgtman_pane_g2

0x0001,

0xfda9,	// (0x000818e8) listrow_wgtman_pane_g

0x25f0,	// (0x0007412f) listrow_wgtman_pane_t1

0x2608,	// (0x00074147) listrow_wgtman_pane_t2

0x0001,

0xfdae,	// (0x000818ed) listrow_wgtman_pane_t

0x262e,	// (0x0007416d) wait_bar_pane_cp09

0xd0dd,	// (0x0007ec1c) main_calllock_btn_pane

0xd0e7,	// (0x0007ec26) main_calllock_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp17

0xd0b3,	// (0x0007ebf2) main_calllock_btn_pane_g1

0xd0ef,	// (0x0007ec2e) main_calllock_btn_pane_t1

0xb4d2,	// (0x0007d011) main_dialer3_pane

0xb4d2,	// (0x0007d011) main_fmrd2_pane

0xbe19,	// (0x0007d958) main_fs_bigclock_unlock_btn_pane_g1

0x954a,	// (0x0007b089) main_fs_bigclock_unlock_btn_pane_t1

0x9558,	// (0x0007b097) area_fmrd2_info_pane_ParamLimits

0x9558,	// (0x0007b097) area_fmrd2_info_pane

0x9566,	// (0x0007b0a5) area_fmrd2_visual_pane_ParamLimits

0x9566,	// (0x0007b0a5) area_fmrd2_visual_pane

0x9574,	// (0x0007b0b3) fmrd2_indi_pane_ParamLimits

0x9574,	// (0x0007b0b3) fmrd2_indi_pane

0x9581,	// (0x0007b0c0) area_fmrd2_visual_pane_g1

0x9589,	// (0x0007b0c8) area_fmrd2_visual_pane_t1

0x9599,	// (0x0007b0d8) area_fmrd2_visual_pane_t2

0x95a9,	// (0x0007b0e8) area_fmrd2_visual_pane_t3

0x0002,

0xfdb8,	// (0x000818f7) area_fmrd2_visual_pane_t

0x95b9,	// (0x0007b0f8) area_fmrd2_info_pane_g1

0x95c1,	// (0x0007b100) area_fmrd2_info_pane_t1

0x95d1,	// (0x0007b110) area_fmrd2_info_pane_t2

0x95e1,	// (0x0007b120) area_fmrd2_info_pane_t3

0x95f1,	// (0x0007b130) area_fmrd2_info_pane_t4

0x0003,

0xfdbf,	// (0x000818fe) area_fmrd2_info_pane_t

0x95ff,	// (0x0007b13e) fmrd2_indi_pane_t1

0x960f,	// (0x0007b14e) fmrd2_indi_pane_t2

0x961f,	// (0x0007b15e) fmrd2_indi_pane_t3

0x0002,

0xfdc8,	// (0x00081907) fmrd2_indi_pane_t

0xb10f,	// (0x0007cc4e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb10f,	// (0x0007cc4e) list_single_fs_bigclock_indicator_pane_g5

0xb1c0,	// (0x0007ccff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb1c0,	// (0x0007ccff) list_single_fs_bigclock_indicator_pane_t5

0x8ebb,	// (0x0007a9fa) aid_cell_bcale_month_pane_ParamLimits

0x8ebb,	// (0x0007a9fa) aid_cell_bcale_month_pane

0x8ed9,	// (0x0007aa18) bcale_month_pane_ParamLimits

0x8ed9,	// (0x0007aa18) bcale_month_pane

0x8ef7,	// (0x0007aa36) bcale_preview_pane_ParamLimits

0x8ef7,	// (0x0007aa36) bcale_preview_pane

0xce9b,	// (0x0007e9da) list_single_fs_bigclock_pane_t1_ParamLimits

0xceba,	// (0x0007e9f9) list_single_fs_bigclock_pane_t2_ParamLimits

0xceba,	// (0x0007e9f9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd43,	// (0x00081882) list_single_fs_bigclock_pane_t_ParamLimits

0xfd43,	// (0x00081882) list_single_fs_bigclock_pane_t

0x9542,	// (0x0007b081) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb3,	// (0x000818f2) main_fs_bigclock_unlock_btn_pane_g

0x962d,	// (0x0007b16c) aid_dia3_key_size_ParamLimits

0x962d,	// (0x0007b16c) aid_dia3_key_size

0x9639,	// (0x0007b178) aid_dia3_listrow_size_ParamLimits

0x9639,	// (0x0007b178) aid_dia3_listrow_size

0x9649,	// (0x0007b188) dia3_keypad_fun_pane_ParamLimits

0x9649,	// (0x0007b188) dia3_keypad_fun_pane

0x965b,	// (0x0007b19a) dia3_keypad_num_pane_ParamLimits

0x965b,	// (0x0007b19a) dia3_keypad_num_pane

0x966d,	// (0x0007b1ac) dia3_listscroll_pane_ParamLimits

0x966d,	// (0x0007b1ac) dia3_listscroll_pane

0x967b,	// (0x0007b1ba) dia3_numentry_pane_ParamLimits

0x967b,	// (0x0007b1ba) dia3_numentry_pane

0xd0fe,	// (0x0007ec3d) dia3_list_pane

0xd109,	// (0x0007ec48) scroll_pane_cp12

0xb4d2,	// (0x0007d011) bg_dia3_numentry_pane

0x9689,	// (0x0007b1c8) dia3_numentry_pane_t1

0x9698,	// (0x0007b1d7) cell_dia3_key_num_pane

0x96a0,	// (0x0007b1df) cell_dia3_key0_fun_pane_ParamLimits

0x96a0,	// (0x0007b1df) cell_dia3_key0_fun_pane

0x96ad,	// (0x0007b1ec) cell_dia3_key1_fun_pane_ParamLimits

0x96ad,	// (0x0007b1ec) cell_dia3_key1_fun_pane

0x96ba,	// (0x0007b1f9) dia3_listrow_pane

0xae62,	// (0x0007c9a1) bg_dia3_numentry_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp21

0xd114,	// (0x0007ec53) cell_dia3_key_num_pane_t1

0xd122,	// (0x0007ec61) cell_dia3_key_num_pane_t2

0xd131,	// (0x0007ec70) cell_dia3_key_num_pane_t3

0xd140,	// (0x0007ec7f) cell_dia3_key_num_pane_t4

0x0003,

0xfdcf,	// (0x0008190e) cell_dia3_key_num_pane_t

0xb4d2,	// (0x0007d011) bg_button_pane_cp19

0x96c7,	// (0x0007b206) cell_dia3_key0_fun_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp20

0x96cf,	// (0x0007b20e) cell_dia3_key1_fun_pane_g1

0x96d7,	// (0x0007b216) area_left_week_number_pane

0x96ea,	// (0x0007b229) area_top_day_name_pane

0x96f8,	// (0x0007b237) frame_month_view_pane

0xd14f,	// (0x0007ec8e) grid_month_view_pane

0x970d,	// (0x0007b24c) cell_top_day_name_pane_ParamLimits

0x970d,	// (0x0007b24c) cell_top_day_name_pane

0x9727,	// (0x0007b266) cell_area_left_week_number_pane_ParamLimits

0x9727,	// (0x0007b266) cell_area_left_week_number_pane

0x974a,	// (0x0007b289) cell_month_view_pane_ParamLimits

0x974a,	// (0x0007b289) cell_month_view_pane

0xd15d,	// (0x0007ec9c) frm_month_g1

0x9776,	// (0x0007b2b5) frm_month_g2

0x9787,	// (0x0007b2c6) frm_month_g3

0x9798,	// (0x0007b2d7) frm_month_g4

0x97a9,	// (0x0007b2e8) frm_month_g5

0x97bc,	// (0x0007b2fb) frm_month_g6

0x97cf,	// (0x0007b30e) frm_month_g7

0xd16a,	// (0x0007eca9) frm_month_g8

0x97e2,	// (0x0007b321) frm_month_g9

0x97ef,	// (0x0007b32e) frm_month_g10

0x97fc,	// (0x0007b33b) frm_month_g11

0x9809,	// (0x0007b348) frm_month_g12

0x9816,	// (0x0007b355) frm_month_g13

0x9823,	// (0x0007b362) frm_month_g14

0x9832,	// (0x0007b371) frm_month_g15

0x9841,	// (0x0007b380) frm_month_g16

0x000f,

0xfdd8,	// (0x00081917) frm_month_g

0xd177,	// (0x0007ecb6) cell_top_day_name_pane_t1

0x9850,	// (0x0007b38f) cell_area_left_week_number_pane_g1

0x985f,	// (0x0007b39e) cell_area_left_week_number_pane_t1

0xbbd3,	// (0x0007d712) cell_month_view_pane_g1

0x9875,	// (0x0007b3b4) cell_month_view_pane_t1

0xb4d2,	// (0x0007d011) main_fps_pane

0xb3dd,	// (0x0007cf1c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb3dd,	// (0x0007cf1c) cmail_ddmenu_btn02_pane_cp1

0xb3f9,	// (0x0007cf38) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb3f9,	// (0x0007cf38) cmail_ddmenu_btn02_pane_cp2

0x90ec,	// (0x0007ac2b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90ec,	// (0x0007ac2b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf6,	// (0x00081835) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf6,	// (0x00081835) cmail_ddmenu_btn02_pane_g

0x910a,	// (0x0007ac49) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x910a,	// (0x0007ac49) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcfb,	// (0x0008183a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcfb,	// (0x0008183a) cmail_ddmenu_btn02_pane_t

0x988b,	// (0x0007b3ca) fps_text_pane_ParamLimits

0x988b,	// (0x0007b3ca) fps_text_pane

0x9898,	// (0x0007b3d7) main_fps_pane_g1_ParamLimits

0x9898,	// (0x0007b3d7) main_fps_pane_g1

0x98a6,	// (0x0007b3e5) wait_bar_pane_cp010_ParamLimits

0x98a6,	// (0x0007b3e5) wait_bar_pane_cp010

0x98b2,	// (0x0007b3f1) fps_text_pane_t1_ParamLimits

0x98b2,	// (0x0007b3f1) fps_text_pane_t1

0x6d7e,	// (0x000788bd) cam4_image_uncrop_pane_g1

0x6d87,	// (0x000788c6) cam4_image_uncrop_pane_g2

0x6d90,	// (0x000788cf) cam4_image_uncrop_pane_g3

0x6d99,	// (0x000788d8) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x00081379) cam4_image_uncrop_pane_g

0x96ba,	// (0x0007b1f9) dia3_listrow_pane_ParamLimits

0xb4d2,	// (0x0007d011) main_phob2_pane

0x8cfa,	// (0x0007a839) cell_tport_appsw_pane_cp02_ParamLimits

0x8cfa,	// (0x0007a839) cell_tport_appsw_pane_cp02

0x8d09,	// (0x0007a848) cell_tport_appsw_pane_cp03_ParamLimits

0x8d09,	// (0x0007a848) cell_tport_appsw_pane_cp03

0xb4d2,	// (0x0007d011) phob2_contact_card_pane

0xb4d2,	// (0x0007d011) phob2_listscroll_pane

0xd18a,	// (0x0007ecc9) phob2_list_pane

0xd192,	// (0x0007ecd1) scroll_pane_cp034

0x98cb,	// (0x0007b40a) phob2_cc_data_pane_ParamLimits

0x98cb,	// (0x0007b40a) phob2_cc_data_pane

0x98e5,	// (0x0007b424) phob2_cc_listscroll_pane_ParamLimits

0x98e5,	// (0x0007b424) phob2_cc_listscroll_pane

0x94fc,	// (0x0007b03b) list_double_large_graphic_phob2_pane_ParamLimits

0x94fc,	// (0x0007b03b) list_double_large_graphic_phob2_pane

0x98ff,	// (0x0007b43e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98ff,	// (0x0007b43e) list_double_large_graphic_phob2_pane_g1

0x990c,	// (0x0007b44b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x990c,	// (0x0007b44b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf9,	// (0x00081938) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf9,	// (0x00081938) list_double_large_graphic_phob2_pane_g

0x264c,	// (0x0007418b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x264c,	// (0x0007418b) list_double_large_graphic_phob2_pane_t1

0x2661,	// (0x000741a0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2661,	// (0x000741a0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe02,	// (0x00081941) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe02,	// (0x00081941) list_double_large_graphic_phob2_pane_t

0xb4d2,	// (0x0007d011) list_highlight_pane_cp024

0xd19a,	// (0x0007ecd9) phob2_cc_button_pane

0x9926,	// (0x0007b465) phob2_cc_data_pane_g1_ParamLimits

0x9926,	// (0x0007b465) phob2_cc_data_pane_g1

0x9935,	// (0x0007b474) phob2_cc_data_pane_g2_ParamLimits

0x9935,	// (0x0007b474) phob2_cc_data_pane_g2

0x0001,

0xfe07,	// (0x00081946) phob2_cc_data_pane_g_ParamLimits

0xfe07,	// (0x00081946) phob2_cc_data_pane_g

0x9944,	// (0x0007b483) phob2_cc_data_pane_t1_ParamLimits

0x9944,	// (0x0007b483) phob2_cc_data_pane_t1

0x9959,	// (0x0007b498) phob2_cc_data_pane_t2_ParamLimits

0x9959,	// (0x0007b498) phob2_cc_data_pane_t2

0x996e,	// (0x0007b4ad) phob2_cc_data_pane_t3_ParamLimits

0x996e,	// (0x0007b4ad) phob2_cc_data_pane_t3

0x0002,

0xfe0c,	// (0x0008194b) phob2_cc_data_pane_t_ParamLimits

0xfe0c,	// (0x0008194b) phob2_cc_data_pane_t

0xd1a2,	// (0x0007ece1) phob2_cc_list_pane_ParamLimits

0xd1a2,	// (0x0007ece1) phob2_cc_list_pane

0x097d,	// (0x000724bc) scroll_pane_cp035_ParamLimits

0x097d,	// (0x000724bc) scroll_pane_cp035

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp033

0xd1ae,	// (0x0007eced) phob2_cc_button_pane_g1

0xd1ba,	// (0x0007ecf9) phob2_cc_button_pane_t1

0xd1cf,	// (0x0007ed0e) phob2_cc_button_pane_t2

0x0001,

0xfe13,	// (0x00081952) phob2_cc_button_pane_t

0x9983,	// (0x0007b4c2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9983,	// (0x0007b4c2) list_double_large_graphic_phob2_cc_pane

0x99f1,	// (0x0007b530) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99f1,	// (0x0007b530) list_double_large_graphic_phob2_cc_pane_g1

0x9a02,	// (0x0007b541) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a02,	// (0x0007b541) list_double_large_graphic_phob2_cc_pane_g2

0x2676,	// (0x000741b5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2676,	// (0x000741b5) list_double_large_graphic_phob2_cc_pane_g3

0x2682,	// (0x000741c1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2682,	// (0x000741c1) list_double_large_graphic_phob2_cc_pane_g4

0x268e,	// (0x000741cd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x268e,	// (0x000741cd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe18,	// (0x00081957) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe18,	// (0x00081957) list_double_large_graphic_phob2_cc_pane_g

0x269a,	// (0x000741d9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x269a,	// (0x000741d9) list_double_large_graphic_phob2_cc_pane_t1

0x26c3,	// (0x00074202) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x26c3,	// (0x00074202) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe23,	// (0x00081962) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe23,	// (0x00081962) list_double_large_graphic_phob2_cc_pane_t

0xd1e1,	// (0x0007ed20) list_highlight_pane_cp025_ParamLimits

0xd1e1,	// (0x0007ed20) list_highlight_pane_cp025

0xbb7a,	// (0x0007d6b9) bg_button_pane_cp033_ParamLimits

0xd1ae,	// (0x0007eced) phob2_cc_button_pane_g1_ParamLimits

0xd1ba,	// (0x0007ecf9) phob2_cc_button_pane_t1_ParamLimits

0xd1cf,	// (0x0007ed0e) phob2_cc_button_pane_t2_ParamLimits

0xfe13,	// (0x00081952) phob2_cc_button_pane_t_ParamLimits

0x29dd,	// (0x0007451c) popup_wgtman_window

0x077a,	// (0x000722b9) scroll_pane_cp038

0x9485,	// (0x0007afc4) wgtman_btn_pane_cp_01_ParamLimits

0x9485,	// (0x0007afc4) wgtman_btn_pane_cp_01

0xd1ef,	// (0x0007ed2e) wgtman_content_pane

0xd1f8,	// (0x0007ed37) wgtman_heading_pane

0xb4d2,	// (0x0007d011) bg_heading_pane_cp02

0xd201,	// (0x0007ed40) wgtman_heading_pane_g1

0xd209,	// (0x0007ed48) wgtman_heading_pane_t1

0xd217,	// (0x0007ed56) scroll_pane_cp036

0xd21f,	// (0x0007ed5e) wgtman_list_pane

0xd227,	// (0x0007ed66) wgtman_list_pane_t1_ParamLimits

0xd227,	// (0x0007ed66) wgtman_list_pane_t1

0x6cdd,	// (0x0007881c) cam4_grid_pane

0x1ced,	// (0x0007382c) bg_button_pane_cp015_ParamLimits

0x7984,	// (0x000794c3) bg_button_pane_cp016_ParamLimits

0x7990,	// (0x000794cf) bg_button_pane_cp017_ParamLimits

0x79ab,	// (0x000794ea) popup_vitu2_query_window_g3_ParamLimits

0x79ab,	// (0x000794ea) popup_vitu2_query_window_g3

0x1dac,	// (0x000738eb) popup_vitu2_query_window_t6_ParamLimits

0x1dac,	// (0x000738eb) popup_vitu2_query_window_t6

0x1dd7,	// (0x00073916) popup_vitu2_query_window_t7_ParamLimits

0x1dd7,	// (0x00073916) popup_vitu2_query_window_t7

0xb4c0,	// (0x0007cfff) cam4_grid_pane_g1

0xb4c9,	// (0x0007d008) cam4_grid_pane_g2

0xd241,	// (0x0007ed80) cam4_grid_pane_g3

0xd24a,	// (0x0007ed89) cam4_grid_pane_g4

0x0003,

0xfe28,	// (0x00081967) cam4_grid_pane_g

0x3517,	// (0x00075056) aid_placing_vt_slider_lsc_ParamLimits

0x3863,	// (0x000753a2) vidtel_button_pane_ParamLimits

0x3863,	// (0x000753a2) vidtel_button_pane

0xb4d2,	// (0x0007d011) bg_button_pane_cp034

0xd255,	// (0x0007ed94) vidtel_button_pane_g1

0xd25d,	// (0x0007ed9c) vidtel_button_pane_t1

0x08c4,	// (0x00072403) aid_size_vtel_slider_touch

0x097d,	// (0x000724bc) scroll_pane_cp039

0x866c,	// (0x0007a1ab) ncim_query_button_pane_cp01_ParamLimits

0x868b,	// (0x0007a1ca) ncimui_query_pane_g1_ParamLimits

0xbb7a,	// (0x0007d6b9) input_focus_pane_cp012_ParamLimits

0xaea0,	// (0x0007c9df) ncim_query_entry_pane_t1_ParamLimits

0x097d,	// (0x000724bc) scroll_pane_cp039_ParamLimits

0xc729,	// (0x0007e268) navi_pane_bcale_mc_g1

0xc731,	// (0x0007e270) navi_pane_bcale_mc_t1

0xb42d,	// (0x0007cf6c) main_sp_fs_email_pane_g1

0xb439,	// (0x0007cf78) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x0008176a) main_sp_fs_email_pane_g

0xcc26,	// (0x0007e765) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcc26,	// (0x0007e765) list_single_cale_mrui_row_pane_g3

0x254b,	// (0x0007408a) list_single_recal_day_pane_g5_event_pane

0x2561,	// (0x000740a0) list_single_recal_day_pane_g7

0xd273,	// (0x0007edb2) list_recal_day_event_pane_cp01

0xd27c,	// (0x0007edbb) list_recal_vselct_arw_lo_pane_cp01

0xd284,	// (0x0007edc3) list_recal_vselct_arw_up_pane_cp01

0xd28c,	// (0x0007edcb) list_recal_vselct_pane_cp01

0x08e6,	// (0x00072425) list_recal_day_event_pane_cp01_g1

0x26ec,	// (0x0007422b) list_recal_day_event_pane_cp01_t1

0x2569,	// (0x000740a8) list_single_recal_day_pane_t1_ParamLimits

0x257b,	// (0x000740ba) list_single_recal_day_pane_t2_ParamLimits

0xfd0b,	// (0x0008184a) list_single_recal_day_pane_t_ParamLimits

0xbb58,	// (0x0007d697) bg_notes_pane_ParamLimits

0xbc23,	// (0x0007d762) list_notes_pane_ParamLimits

0x2bdf,	// (0x0007471e) scroll_pane_cp06_ParamLimits

0xbc45,	// (0x0007d784) main_notes_pane_ParamLimits

0xbb7a,	// (0x0007d6b9) main_welc_pane

0x9a30,	// (0x0007b56f) main_welc_body_pane_ParamLimits

0x9a30,	// (0x0007b56f) main_welc_body_pane

0x9a4a,	// (0x0007b589) main_welc_opti_pane_ParamLimits

0x9a4a,	// (0x0007b589) main_welc_opti_pane

0x9aa9,	// (0x0007b5e8) main_welc_pane_t1_ParamLimits

0x9aa9,	// (0x0007b5e8) main_welc_pane_t1

0x9c3f,	// (0x0007b77e) main_welc_body_row_pane_ParamLimits

0x9c3f,	// (0x0007b77e) main_welc_body_row_pane

0xb4dc,	// (0x0007d01b) main_welc_opti_row_pane_ParamLimits

0xb4dc,	// (0x0007d01b) main_welc_opti_row_pane

0xd2a6,	// (0x0007ede5) main_welc_opti_row_pane_g1

0x9c64,	// (0x0007b7a3) main_welc_opti_row_pane_t1

0xd2ae,	// (0x0007eded) main_welc_body_row_pane_t1

0xcf7b,	// (0x0007eaba) popup_notif_wgt_heading_pane

0xcf95,	// (0x0007ead4) aid_size_list_notif_wgt_del_ParamLimits

0xcfa2,	// (0x0007eae1) list_notif_wgt_row_pane_g1_ParamLimits

0xcfae,	// (0x0007eaed) list_notif_wgt_row_pane_g2_ParamLimits

0xcfbd,	// (0x0007eafc) list_notif_wgt_row_pane_g3_ParamLimits

0xfd72,	// (0x000818b1) list_notif_wgt_row_pane_g_ParamLimits

0xcfca,	// (0x0007eb09) list_notif_wgt_row_pane_t1_ParamLimits

0xcfe0,	// (0x0007eb1f) list_notif_wgt_row_pane_t2_ParamLimits

0xcff2,	// (0x0007eb31) list_notif_wgt_row_pane_t3_ParamLimits

0xfd79,	// (0x000818b8) list_notif_wgt_row_pane_t_ParamLimits

0x9517,	// (0x0007b056) listrow_wgtman_pane_g1_ParamLimits

0x9524,	// (0x0007b063) listrow_wgtman_pane_g2_ParamLimits

0xfda9,	// (0x000818e8) listrow_wgtman_pane_g_ParamLimits

0x25f0,	// (0x0007412f) listrow_wgtman_pane_t1_ParamLimits

0x2608,	// (0x00074147) listrow_wgtman_pane_t2_ParamLimits

0xfdae,	// (0x000818ed) listrow_wgtman_pane_t_ParamLimits

0x262e,	// (0x0007416d) wait_bar_pane_cp09_ParamLimits

0xb4d2,	// (0x0007d011) bg_popup_heading_pane_cp02

0xd2bd,	// (0x0007edfc) popup_notif_wgt_heading_pane_g1

0xd2c5,	// (0x0007ee04) popup_notif_wgt_heading_pane_t1

0xb4d2,	// (0x0007d011) main_vids_pane

0xb4d2,	// (0x0007d011) vids_listscroll_pane

0x9c73,	// (0x0007b7b2) scroll_pane_cp040

0xb4d2,	// (0x0007d011) vids_list_pane

0x9c7e,	// (0x0007b7bd) vids_list_double_pane_ParamLimits

0x9c7e,	// (0x0007b7bd) vids_list_double_pane

0x9c95,	// (0x0007b7d4) vids_list_double_pane_g1

0x9c9e,	// (0x0007b7dd) vids_list_double_pane_t1

0x9cae,	// (0x0007b7ed) vids_list_double_pane_t2

0x0001,

0xfe47,	// (0x00081986) vids_list_double_pane_t

0xbb7a,	// (0x0007d6b9) main_ncimui_pane_ParamLimits

0x84c3,	// (0x0007a002) main_ncimui_pane_g1_ParamLimits

0x84cf,	// (0x0007a00e) main_ncimui_pane_g2_ParamLimits

0x84cf,	// (0x0007a00e) main_ncimui_pane_g2

0x0001,

0xfb2c,	// (0x0008166b) main_ncimui_pane_g_ParamLimits

0xfb2c,	// (0x0008166b) main_ncimui_pane_g

0x9a63,	// (0x0007b5a2) main_welc_pane_g1_ParamLimits

0x9a63,	// (0x0007b5a2) main_welc_pane_g1

0x9a6f,	// (0x0007b5ae) main_welc_pane_g2_ParamLimits

0x9a6f,	// (0x0007b5ae) main_welc_pane_g2

0x0003,

0xfe31,	// (0x00081970) main_welc_pane_g_ParamLimits

0xfe31,	// (0x00081970) main_welc_pane_g

0xbb58,	// (0x0007d697) listscroll_mce_pane_ParamLimits

0xc87e,	// (0x0007e3bd) wait_bar_pane_cp10

0xe98f,	// (0x000804ce) main_cale_day_pane_ParamLimits

0xe98f,	// (0x000804ce) main_cale_week_pane_ParamLimits

0xbb58,	// (0x0007d697) main_messa_pane_ParamLimits

0x6132,	// (0x00077c71) main_clock2_btn_pane_ParamLimits

0x6132,	// (0x00077c71) main_clock2_btn_pane

0x013c,	// (0x00071c7b) main_clock2_btn_pane_cp01_ParamLimits

0x013c,	// (0x00071c7b) main_clock2_btn_pane_cp01

0xcbf7,	// (0x0007e736) list_cale_mrui_pane_ParamLimits

0xd036,	// (0x0007eb75) main_cf0_pane_g2

0x0001,

0xfd80,	// (0x000818bf) main_cf0_pane_g

0x96d7,	// (0x0007b216) area_left_week_number_pane_ParamLimits

0x96ea,	// (0x0007b229) area_top_day_name_pane_ParamLimits

0x96f8,	// (0x0007b237) frame_month_view_pane_ParamLimits

0xd14f,	// (0x0007ec8e) grid_month_view_pane_ParamLimits

0xd15d,	// (0x0007ec9c) frm_month_g1_ParamLimits

0x9776,	// (0x0007b2b5) frm_month_g2_ParamLimits

0x9787,	// (0x0007b2c6) frm_month_g3_ParamLimits

0x9798,	// (0x0007b2d7) frm_month_g4_ParamLimits

0x97a9,	// (0x0007b2e8) frm_month_g5_ParamLimits

0x97bc,	// (0x0007b2fb) frm_month_g6_ParamLimits

0x97cf,	// (0x0007b30e) frm_month_g7_ParamLimits

0xd16a,	// (0x0007eca9) frm_month_g8_ParamLimits

0x97e2,	// (0x0007b321) frm_month_g9_ParamLimits

0x97ef,	// (0x0007b32e) frm_month_g10_ParamLimits

0x97fc,	// (0x0007b33b) frm_month_g11_ParamLimits

0x9809,	// (0x0007b348) frm_month_g12_ParamLimits

0x9816,	// (0x0007b355) frm_month_g13_ParamLimits

0x9823,	// (0x0007b362) frm_month_g14_ParamLimits

0x9832,	// (0x0007b371) frm_month_g15_ParamLimits

0x9841,	// (0x0007b380) frm_month_g16_ParamLimits

0xfdd8,	// (0x00081917) frm_month_g_ParamLimits

0xd177,	// (0x0007ecb6) cell_top_day_name_pane_t1_ParamLimits

0x9850,	// (0x0007b38f) cell_area_left_week_number_pane_g1_ParamLimits

0x985f,	// (0x0007b39e) cell_area_left_week_number_pane_t1_ParamLimits

0xbbd3,	// (0x0007d712) cell_month_view_pane_g1_ParamLimits

0x9875,	// (0x0007b3b4) cell_month_view_pane_t1_ParamLimits

0xbb50,	// (0x0007d68f) main_clock2_btn_pane_g1

0xd2d3,	// (0x0007ee12) main_clock2_btn_pane_t1

0xbb7a,	// (0x0007d6b9) listscroll_cmail_pane_ParamLimits

0xb42d,	// (0x0007cf6c) main_sp_fs_email_pane_g1_ParamLimits

0xb439,	// (0x0007cf78) main_sp_fs_email_pane_g2_ParamLimits

0xfc2b,	// (0x0008176a) main_sp_fs_email_pane_g_ParamLimits

0xccfe,	// (0x0007e83d) list_recal_day_pane_ParamLimits

0xcd0f,	// (0x0007e84e) mian_recal_day_pane_t1

0x214a,	// (0x00073c89) list_single_dyc_row_text_pane_t4_ParamLimits

0x214a,	// (0x00073c89) list_single_dyc_row_text_pane_t4

0x2181,	// (0x00073cc0) list_single_dyc_row_text_pane_t5_ParamLimits

0x2181,	// (0x00073cc0) list_single_dyc_row_text_pane_t5

0x21f7,	// (0x00073d36) list_single_dyc_row_text_pane_t6_ParamLimits

0x21f7,	// (0x00073d36) list_single_dyc_row_text_pane_t6

0xc1e8,	// (0x0007dd27) aid_mgn_list_cale_time_pane

0xbb7a,	// (0x0007d6b9) main_gallery2_pane_ParamLimits

0x0152,	// (0x00071c91) main_clock2_pane_cp01_t1

0x0162,	// (0x00071ca1) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x00081250) main_clock2_pane_cp01_t

0x3026,	// (0x00074b65) cale_week_scroll_pane_g16_ParamLimits

0x3026,	// (0x00074b65) cale_week_scroll_pane_g16

0xbdf7,	// (0x0007d936) vorec_slider_pane

0xd25d,	// (0x0007ed9c) vidtel_button_pane_t1_ParamLimits

0x916d,	// (0x0007acac) main_fs_bigclock_clock_pane_g1_ParamLimits

0x916d,	// (0x0007acac) main_fs_bigclock_clock_pane_g2_ParamLimits

0x917a,	// (0x0007acb9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x917a,	// (0x0007acb9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd2e,	// (0x0008186d) main_fs_bigclock_clock_pane_g_ParamLimits

0x9186,	// (0x0007acc5) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9199,	// (0x0007acd8) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd37,	// (0x00081876) main_fs_bigclock_clock_pane_t_ParamLimits

0x5acf,	// (0x0007760e) main_mup3_lyrics_pane_ParamLimits

0x5acf,	// (0x0007760e) main_mup3_lyrics_pane

0x9ce1,	// (0x0007b820) main_mup3_lyrics_pane_t1_ParamLimits

0x9ce1,	// (0x0007b820) main_mup3_lyrics_pane_t1

0x665e,	// (0x0007819d) aid_main_mp4_pane_t1_area

0x6668,	// (0x000781a7) aid_main_mp4_pane_t2_area

0x6767,	// (0x000782a6) main_mp4_pane_g7_ParamLimits

0x6767,	// (0x000782a6) main_mp4_pane_g7

0x6773,	// (0x000782b2) main_mp4_pane_g8_ParamLimits

0x6773,	// (0x000782b2) main_mp4_pane_g8

0x6b85,	// (0x000786c4) aid_call6_pane_g1_size

0x99c5,	// (0x0007b504) list_double_large_graphic_phob2_other_pane_ParamLimits

0x99c5,	// (0x0007b504) list_double_large_graphic_phob2_other_pane

0xc1a0,	// (0x0007dcdf) list_double_large_graphic_phob2_other_pane_g1

0xb4d2,	// (0x0007d011) list_highlight_pane_cp026

0xbb7a,	// (0x0007d6b9) main_welc_pane_ParamLimits

0x8c01,	// (0x0007a740) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8c01,	// (0x0007a740) main_sp_fs_ctrlbar_pane_g3

0x8c19,	// (0x0007a758) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8c19,	// (0x0007a758) main_sp_fs_ctrlbar_pane_g4

0x8c4b,	// (0x0007a78a) toolbar2_fixed_button_pane_cp01

0x8c56,	// (0x0007a795) toolbar2_fixed_button_pane_cp02

0x8c61,	// (0x0007a7a0) toolbar2_fixed_button_pane_cp03

0x9a20,	// (0x0007b55f) list_welc_entry_pane_ParamLimits

0x9a20,	// (0x0007b55f) list_welc_entry_pane

0x9a7d,	// (0x0007b5bc) main_welc_pane_g3_ParamLimits

0x9a7d,	// (0x0007b5bc) main_welc_pane_g3

0x9ac3,	// (0x0007b602) main_welc_pane_t2_ParamLimits

0x9ac3,	// (0x0007b602) main_welc_pane_t2

0x9ad7,	// (0x0007b616) main_welc_pane_t3_ParamLimits

0x9ad7,	// (0x0007b616) main_welc_pane_t3

0x0005,

0xfe3a,	// (0x00081979) main_welc_pane_t_ParamLimits

0xfe3a,	// (0x00081979) main_welc_pane_t

0x9bd3,	// (0x0007b712) welc_button_pane_ParamLimits

0x9bd3,	// (0x0007b712) welc_button_pane

0x9c31,	// (0x0007b770) welc_service_logo_pane_ParamLimits

0x9c31,	// (0x0007b770) welc_service_logo_pane

0x9d13,	// (0x0007b852) list_single_welc_entry_pane_ParamLimits

0x9d13,	// (0x0007b852) list_single_welc_entry_pane

0x9d24,	// (0x0007b863) list_single_welc_entry_pane_g1

0x9d2c,	// (0x0007b86b) list_single_welc_entry_pane_t1

0x9d3a,	// (0x0007b879) list_single_welc_entry_pane_t2

0x0001,

0xfe4c,	// (0x0008198b) list_single_welc_entry_pane_t

0xb4d2,	// (0x0007d011) bg_button_pane_cp035

0x9d48,	// (0x0007b887) welc_button_pane_t1

0xd2e1,	// (0x0007ee20) welc_service_logo_pane_g1

0xd2ea,	// (0x0007ee29) welc_service_logo_pane_g2

0x0001,

0xfe51,	// (0x00081990) welc_service_logo_pane_g

0xb4d2,	// (0x0007d011) main_int_radio_pane

0xc335,	// (0x0007de74) list_single_fs_dyc_pane_g1

0x2640,	// (0x0007417f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x2640,	// (0x0007417f) list_double_large_graphic_phob2_pane_g3

0x9918,	// (0x0007b457) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9918,	// (0x0007b457) list_double_large_graphic_phob2_pane_g4

0x9d56,	// (0x0007b895) main_int_radio1_pane_ParamLimits

0x9d56,	// (0x0007b895) main_int_radio1_pane

0xd2f3,	// (0x0007ee32) find_pane_cp02

0x9d68,	// (0x0007b8a7) input_focus_pane_cp12_ParamLimits

0x9d68,	// (0x0007b8a7) input_focus_pane_cp12

0x9d74,	// (0x0007b8b3) input_focus_pane_cp13_ParamLimits

0x9d74,	// (0x0007b8b3) input_focus_pane_cp13

0x9d8c,	// (0x0007b8cb) input_focus_pane_cp14_ParamLimits

0x9d8c,	// (0x0007b8cb) input_focus_pane_cp14

0xd2fc,	// (0x0007ee3b) int_radio1_listscroll_pane

0x9da4,	// (0x0007b8e3) main_int_radio1_pane_g1_ParamLimits

0x9da4,	// (0x0007b8e3) main_int_radio1_pane_g1

0x9db4,	// (0x0007b8f3) main_int_radio1_pane_t1_ParamLimits

0x9db4,	// (0x0007b8f3) main_int_radio1_pane_t1

0x9dc8,	// (0x0007b907) main_int_radio1_pane_t2_ParamLimits

0x9dc8,	// (0x0007b907) main_int_radio1_pane_t2

0x9ddc,	// (0x0007b91b) main_int_radio1_pane_t3_ParamLimits

0x9ddc,	// (0x0007b91b) main_int_radio1_pane_t3

0x9df0,	// (0x0007b92f) main_int_radio1_pane_t4_ParamLimits

0x9df0,	// (0x0007b92f) main_int_radio1_pane_t4

0xd306,	// (0x0007ee45) main_int_radio1_pane_t5_ParamLimits

0xd306,	// (0x0007ee45) main_int_radio1_pane_t5

0x9e07,	// (0x0007b946) main_int_radio1_pane_t6_ParamLimits

0x9e07,	// (0x0007b946) main_int_radio1_pane_t6

0x9e19,	// (0x0007b958) main_int_radio1_pane_t7_ParamLimits

0x9e19,	// (0x0007b958) main_int_radio1_pane_t7

0x9e2b,	// (0x0007b96a) main_int_radio1_pane_t8_ParamLimits

0x9e2b,	// (0x0007b96a) main_int_radio1_pane_t8

0x9e3f,	// (0x0007b97e) main_int_radio1_pane_t9_ParamLimits

0x9e3f,	// (0x0007b97e) main_int_radio1_pane_t9

0x9e51,	// (0x0007b990) main_int_radio1_pane_t10_ParamLimits

0x9e51,	// (0x0007b990) main_int_radio1_pane_t10

0x9e82,	// (0x0007b9c1) main_int_radio1_pane_t11_ParamLimits

0x9e82,	// (0x0007b9c1) main_int_radio1_pane_t11

0x9eb3,	// (0x0007b9f2) main_int_radio1_pane_t12_ParamLimits

0x9eb3,	// (0x0007b9f2) main_int_radio1_pane_t12

0x000b,

0xfe56,	// (0x00081995) main_int_radio1_pane_t_ParamLimits

0xfe56,	// (0x00081995) main_int_radio1_pane_t

0xd318,	// (0x0007ee57) int_radio_list_pane

0xd192,	// (0x0007ecd1) scroll_pane_cp037

0xd320,	// (0x0007ee5f) list_double_large_graphic_int_radio_pane_ParamLimits

0xd320,	// (0x0007ee5f) list_double_large_graphic_int_radio_pane

0xd338,	// (0x0007ee77) list_double_large_graphic_int_radio_pane_g1

0x26fa,	// (0x00074239) list_double_large_graphic_int_radio_pane_t1

0x2708,	// (0x00074247) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6f,	// (0x000819ae) list_double_large_graphic_int_radio_pane_t

0xb4d2,	// (0x0007d011) list_highlight_pane_cp027

0xd296,	// (0x0007edd5) main_button_pane_4

0x9a89,	// (0x0007b5c8) main_welc_pane_g4_ParamLimits

0x9a89,	// (0x0007b5c8) main_welc_pane_g4

0x9ae9,	// (0x0007b628) main_welc_pane_t4_ParamLimits

0x9ae9,	// (0x0007b628) main_welc_pane_t4

0x9afb,	// (0x0007b63a) main_welc_pane_t5_ParamLimits

0x9afb,	// (0x0007b63a) main_welc_pane_t5

0x9b2b,	// (0x0007b66a) main_welc_pane_t6_ParamLimits

0x9b2b,	// (0x0007b66a) main_welc_pane_t6

0x9be1,	// (0x0007b720) welc_button_pane_2_ParamLimits

0x9be1,	// (0x0007b720) welc_button_pane_2

0x9bf9,	// (0x0007b738) welc_button_pane_3_ParamLimits

0x9bf9,	// (0x0007b738) welc_button_pane_3

0xd29e,	// (0x0007eddd) welc_button_pane_4

0x9c13,	// (0x0007b752) welc_button_pane_5_ParamLimits

0x9c13,	// (0x0007b752) welc_button_pane_5

0x276a,	// (0x000742a9) main_popup_welc_pane

0xd350,	// (0x0007ee8f) main_welc_sk_g3

0xd35a,	// (0x0007ee99) main_welc_sk_g4

0xd364,	// (0x0007eea3) main_welc_sk_t3

0xd374,	// (0x0007eeb3) main_welc_sk_t4

0xd384,	// (0x0007eec3) popup_welc_pane_t4

0xd392,	// (0x0007eed1) popup_welc_pane_t5

0xd3a0,	// (0x0007eedf) popup_welc_pane_t6

0xb4d2,	// (0x0007d011) main_acti_pane

0xb4d2,	// (0x0007d011) main_sso_pane

0x9eca,	// (0x0007ba09) sso_body_pane_ParamLimits

0x9eca,	// (0x0007ba09) sso_body_pane

0x9ed8,	// (0x0007ba17) sso_logo_pane_ParamLimits

0x9ed8,	// (0x0007ba17) sso_logo_pane

0x9f01,	// (0x0007ba40) sso_sk_pane_ParamLimits

0x9f01,	// (0x0007ba40) sso_sk_pane

0xbe19,	// (0x0007d958) main_sso_logo_pane_g1

0x9f0e,	// (0x0007ba4d) sso_sk_pane_t1_ParamLimits

0x9f0e,	// (0x0007ba4d) sso_sk_pane_t1

0x9f22,	// (0x0007ba61) sso_sk_pane_t2_ParamLimits

0x9f22,	// (0x0007ba61) sso_sk_pane_t2

0x0001,

0xfe74,	// (0x000819b3) sso_sk_pane_t_ParamLimits

0xfe74,	// (0x000819b3) sso_sk_pane_t

0xd3de,	// (0x0007ef1d) aid_sso_gap

0xd3e7,	// (0x0007ef26) aid_sso_txt1

0xd3f1,	// (0x0007ef30) aid_sso_txt2

0xd3fb,	// (0x0007ef3a) aid_sso_txt3

0x0002,

0xfe79,	// (0x000819b8) aid_sso_txt

0xd405,	// (0x0007ef44) aid_sso_widget

0x9f81,	// (0x0007bac0) sso_btn_pane_ParamLimits

0x9f81,	// (0x0007bac0) sso_btn_pane

0x9ffa,	// (0x0007bb39) sso_option_pane_ParamLimits

0x9ffa,	// (0x0007bb39) sso_option_pane

0xa074,	// (0x0007bbb3) sso_query_pane_ParamLimits

0xa074,	// (0x0007bbb3) sso_query_pane

0xa0c4,	// (0x0007bc03) sso_query_pane_cp01_ParamLimits

0xa0c4,	// (0x0007bc03) sso_query_pane_cp01

0xa116,	// (0x0007bc55) sso_t_hdr_pane_ParamLimits

0xa116,	// (0x0007bc55) sso_t_hdr_pane

0xa13a,	// (0x0007bc79) sso_t_nml_pane_ParamLimits

0xa13a,	// (0x0007bc79) sso_t_nml_pane

0xd40f,	// (0x0007ef4e) sso_t_sub_pane

0x9ee5,	// (0x0007ba24) sso_popup_window_ParamLimits

0x9ee5,	// (0x0007ba24) sso_popup_window

0x9f34,	// (0x0007ba73) sso_apps_pane_ParamLimits

0x9f34,	// (0x0007ba73) sso_apps_pane

0x9f57,	// (0x0007ba96) sso_body_pane_g1

0x9f61,	// (0x0007baa0) sso_body_pane_t1

0x9f71,	// (0x0007bab0) sso_body_pane_t2

0x0001,

0xfe80,	// (0x000819bf) sso_body_pane_t

0x9fcc,	// (0x0007bb0b) sso_btn_pane_cp01_ParamLimits

0x9fcc,	// (0x0007bb0b) sso_btn_pane_cp01

0xa046,	// (0x0007bb85) sso_prog_pane_ParamLimits

0xa046,	// (0x0007bb85) sso_prog_pane

0xd5bd,	// (0x0007f0fc) sso_t_hdr_pane_t1_ParamLimits

0xd5bd,	// (0x0007f0fc) sso_t_hdr_pane_t1

0xd424,	// (0x0007ef63) input_focus_pane_cp10_ParamLimits

0xd424,	// (0x0007ef63) input_focus_pane_cp10

0xd43e,	// (0x0007ef7d) sso_query_pane_t1_ParamLimits

0xd43e,	// (0x0007ef7d) sso_query_pane_t1

0xd451,	// (0x0007ef90) sso_query_pane_t2_ParamLimits

0xd451,	// (0x0007ef90) sso_query_pane_t2

0xd46c,	// (0x0007efab) sso_query_pane_t3_ParamLimits

0xd46c,	// (0x0007efab) sso_query_pane_t3

0xd496,	// (0x0007efd5) sso_query_pane_t4_ParamLimits

0xd496,	// (0x0007efd5) sso_query_pane_t4

0x0003,

0xfe85,	// (0x000819c4) sso_query_pane_t_ParamLimits

0xfe85,	// (0x000819c4) sso_query_pane_t

0xb4d2,	// (0x0007d011) bg_button_pane_cp22

0xd341,	// (0x0007ee80) sso_btn_pane_t1

0xa18a,	// (0x0007bcc9) sso_t_nml_pane_t1_ParamLimits

0xa18a,	// (0x0007bcc9) sso_t_nml_pane_t1

0xd4ba,	// (0x0007eff9) sso_option_row_pane_ParamLimits

0xd4ba,	// (0x0007eff9) sso_option_row_pane

0xd4cd,	// (0x0007f00c) sso_t_sub_pane_t1_ParamLimits

0xd4cd,	// (0x0007f00c) sso_t_sub_pane_t1

0xbb7a,	// (0x0007d6b9) bg_popup_window_pane_cp11_ParamLimits

0xbb7a,	// (0x0007d6b9) bg_popup_window_pane_cp11

0xd4ea,	// (0x0007f029) popup_sk_window_cp01_ParamLimits

0xd4ea,	// (0x0007f029) popup_sk_window_cp01

0xd4f7,	// (0x0007f036) sso_popup_body_pane_ParamLimits

0xd4f7,	// (0x0007f036) sso_popup_body_pane

0xd504,	// (0x0007f043) scroll_pane_cp21_ParamLimits

0xd504,	// (0x0007f043) scroll_pane_cp21

0xd511,	// (0x0007f050) sso_popup_body_t_pane_ParamLimits

0xd511,	// (0x0007f050) sso_popup_body_t_pane

0xd51e,	// (0x0007f05d) sso_popup_body_t_hdr_pane_ParamLimits

0xd51e,	// (0x0007f05d) sso_popup_body_t_hdr_pane

0xd531,	// (0x0007f070) sso_popup_body_t_nml_pane_ParamLimits

0xd531,	// (0x0007f070) sso_popup_body_t_nml_pane

0xd54f,	// (0x0007f08e) sso_popup_body_t_sub_pane_ParamLimits

0xd54f,	// (0x0007f08e) sso_popup_body_t_sub_pane

0xd572,	// (0x0007f0b1) sso_popup_body_t_hdr_pane_t1

0xa1a7,	// (0x0007bce6) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa1a7,	// (0x0007bce6) sso_popup_body_t_nml_pane_t1

0xd582,	// (0x0007f0c1) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd582,	// (0x0007f0c1) sso_popup_body_t_sub_pane_t1

0xbe19,	// (0x0007d958) sso_prog_pane_g1

0xa1e8,	// (0x0007bd27) sso_apps_pane_comp1_ParamLimits

0xa1e8,	// (0x0007bd27) sso_apps_pane_comp1

0xd5a7,	// (0x0007f0e6) sso_apps_pane_comp1_g1

0xd5af,	// (0x0007f0ee) sso_apps_pane_comp1_t1

0xd5e4,	// (0x0007f123) sso_option_row_pane_g1

0xd5ec,	// (0x0007f12b) sso_option_row_pane_t1

0x9a0e,	// (0x0007b54d) bg_welc_area_ParamLimits

0x9a0e,	// (0x0007b54d) bg_welc_area

0x9b61,	// (0x0007b6a0) sso_t_hdr_pane_a_t1_ParamLimits

0x9b61,	// (0x0007b6a0) sso_t_hdr_pane_a_t1

0x9b75,	// (0x0007b6b4) sso_t_nml_pane_a_t1_ParamLimits

0x9b75,	// (0x0007b6b4) sso_t_nml_pane_a_t1

0x9b9f,	// (0x0007b6de) sso_t_sub_pane_a_t1_ParamLimits

0x9b9f,	// (0x0007b6de) sso_t_sub_pane_a_t1

0xd341,	// (0x0007ee80) sso_btn_pane_t1_copy1

0xb4d2,	// (0x0007d011) welc_button_pane_2_comp1

0xd3ae,	// (0x0007eeed) sso_t_hdr_pane_p_t1

0xd3be,	// (0x0007eefd) sso_t_nml_pane_p_t1

0xd3ce,	// (0x0007ef0d) sso_t_sub_pane_p_t1

0xca4e,	// (0x0007e58d) list_cmail_pane_ParamLimits

0x9c23,	// (0x0007b762) welc_button_pane_cp01_ParamLimits

0x9c23,	// (0x0007b762) welc_button_pane_cp01

0xb4d2,	// (0x0007d011) main_att_pane

0xd5d6,	// (0x0007f115) input_focus_pane_cp10_t1

0xd5ec,	// (0x0007f12b) sso_option_row_pane_t1_ParamLimits

0xa202,	// (0x0007bd41) main_att_body_pane_ParamLimits

0xa202,	// (0x0007bd41) main_att_body_pane

0xa22e,	// (0x0007bd6d) att_btn_pane_ParamLimits

0xa22e,	// (0x0007bd6d) att_btn_pane

0xa250,	// (0x0007bd8f) att_btn_pane_cp01_ParamLimits

0xa250,	// (0x0007bd8f) att_btn_pane_cp01

0xa26a,	// (0x0007bda9) att_li_srv_pane_ParamLimits

0xa26a,	// (0x0007bda9) att_li_srv_pane

0xa27c,	// (0x0007bdbb) att_opt_pane_ParamLimits

0xa27c,	// (0x0007bdbb) att_opt_pane

0xa2c0,	// (0x0007bdff) att_query_pane_ParamLimits

0xa2c0,	// (0x0007bdff) att_query_pane

0xa304,	// (0x0007be43) att_query_pane_cp01_ParamLimits

0xa304,	// (0x0007be43) att_query_pane_cp01

0xa348,	// (0x0007be87) att_t_hdr_pane_ParamLimits

0xa348,	// (0x0007be87) att_t_hdr_pane

0xa39a,	// (0x0007bed9) att_t_nml_pane_ParamLimits

0xa39a,	// (0x0007bed9) att_t_nml_pane

0xa3ce,	// (0x0007bf0d) att_t_nml_pane_cp01_ParamLimits

0xa3ce,	// (0x0007bf0d) att_t_nml_pane_cp01

0xa3f2,	// (0x0007bf31) att_t_nmlb_pane_ParamLimits

0xa3f2,	// (0x0007bf31) att_t_nmlb_pane

0xa40c,	// (0x0007bf4b) att_term_pane_ParamLimits

0xa40c,	// (0x0007bf4b) att_term_pane

0xa450,	// (0x0007bf8f) main_att_body_pane_g1_ParamLimits

0xa450,	// (0x0007bf8f) main_att_body_pane_g1

0xd5bd,	// (0x0007f0fc) att_t_hdr_pane_t1_ParamLimits

0xd5bd,	// (0x0007f0fc) att_t_hdr_pane_t1

0xd602,	// (0x0007f141) att_t_nml_pane_t1_ParamLimits

0xd602,	// (0x0007f141) att_t_nml_pane_t1

0xd627,	// (0x0007f166) att_btn_pane_t1

0xb4d2,	// (0x0007d011) bg_button_pane_cp23

0xa484,	// (0x0007bfc3) att_li_srv_row_pane_ParamLimits

0xa484,	// (0x0007bfc3) att_li_srv_row_pane

0xd637,	// (0x0007f176) att_t_nmlb_pane_t1_ParamLimits

0xd637,	// (0x0007f176) att_t_nmlb_pane_t1

0xd650,	// (0x0007f18f) att_query_pane_t1

0xd65f,	// (0x0007f19e) att_query_pane_t2

0xd66e,	// (0x0007f1ad) att_query_pane_t3

0x0002,

0xfe8e,	// (0x000819cd) att_query_pane_t

0xd67d,	// (0x0007f1bc) input_focus_pane_cp11

0xd686,	// (0x0007f1c5) att_term_pane_t1_ParamLimits

0xd686,	// (0x0007f1c5) att_term_pane_t1

0xb4d2,	// (0x0007d011) att_opt_row_pane

0xd6a3,	// (0x0007f1e2) att_opt_row_pane_g1

0xd6ab,	// (0x0007f1ea) att_opt_row_pane_t1_ParamLimits

0xd6ab,	// (0x0007f1ea) att_opt_row_pane_t1

0xa494,	// (0x0007bfd3) att_li_srv_row_pane_g1

0xa49c,	// (0x0007bfdb) att_li_srv_row_pane_t1

0xa4b1,	// (0x0007bff0) att_li_srv_row_pane_t2

0x0001,

0xfe95,	// (0x000819d4) att_li_srv_row_pane_t

0xb4d2,	// (0x0007d011) main_call7_pane

0xb4d2,	// (0x0007d011) main_vod_pane

0xd40f,	// (0x0007ef4e) sso_t_sub_pane_ParamLimits

0xa216,	// (0x0007bd55) att_btn_emg_pane_ParamLimits

0xa216,	// (0x0007bd55) att_btn_emg_pane

0xa49c,	// (0x0007bfdb) att_li_srv_row_pane_t1_ParamLimits

0xa4b1,	// (0x0007bff0) att_li_srv_row_pane_t2_ParamLimits

0xfe95,	// (0x000819d4) att_li_srv_row_pane_t_ParamLimits

0xd6c4,	// (0x0007f203) att_btn_close_pane_g1

0xb4d2,	// (0x0007d011) bg_button_pane_cp24

0x54a5,	// (0x00076fe4) main_vod_body_pane_ParamLimits

0x54a5,	// (0x00076fe4) main_vod_body_pane

0xa4c6,	// (0x0007c005) main_vod_body_pane_g1_ParamLimits

0xa4c6,	// (0x0007c005) main_vod_body_pane_g1

0xa4f6,	// (0x0007c035) scroll_pane_cp24_ParamLimits

0xa4f6,	// (0x0007c035) scroll_pane_cp24

0xa53e,	// (0x0007c07d) vod_btn_pane_ParamLimits

0xa53e,	// (0x0007c07d) vod_btn_pane

0xa57e,	// (0x0007c0bd) vod_det_pane_ParamLimits

0xa57e,	// (0x0007c0bd) vod_det_pane

0xa5aa,	// (0x0007c0e9) vod_logo_g1_ParamLimits

0xa5aa,	// (0x0007c0e9) vod_logo_g1

0xa5e4,	// (0x0007c123) vod_opt_pane_ParamLimits

0xa5e4,	// (0x0007c123) vod_opt_pane

0xa614,	// (0x0007c153) vod_opt_pane_cp01_ParamLimits

0xa614,	// (0x0007c153) vod_opt_pane_cp01

0xa63c,	// (0x0007c17b) vod_query_pane_ParamLimits

0xa63c,	// (0x0007c17b) vod_query_pane

0xa666,	// (0x0007c1a5) vod_query_pane_cp01_ParamLimits

0xa666,	// (0x0007c1a5) vod_query_pane_cp01

0xa672,	// (0x0007c1b1) vod_t_nml_pane_ParamLimits

0xa672,	// (0x0007c1b1) vod_t_nml_pane

0xa718,	// (0x0007c257) vod_t_nml_pane_cp01_ParamLimits

0xa718,	// (0x0007c257) vod_t_nml_pane_cp01

0xa750,	// (0x0007c28f) vod_t_sub_pane_ParamLimits

0xa750,	// (0x0007c28f) vod_t_sub_pane

0xa77e,	// (0x0007c2bd) vod_t_sub_pane_cp01_ParamLimits

0xa77e,	// (0x0007c2bd) vod_t_sub_pane_cp01

0xd67d,	// (0x0007f1bc) vod_query_field_pane

0xd650,	// (0x0007f18f) vod_query_pane_t1

0xb4d2,	// (0x0007d011) bg_button_pane_cp25

0xd627,	// (0x0007f166) sso_btn_pane_t1_copy2

0xa7a6,	// (0x0007c2e5) vod_t_nml_pane_t1_ParamLimits

0xa7a6,	// (0x0007c2e5) vod_t_nml_pane_t1

0xd6cc,	// (0x0007f20b) vod_opt_row_pane_ParamLimits

0xd6cc,	// (0x0007f20b) vod_opt_row_pane

0xd6de,	// (0x0007f21d) vod_t_sub_pane_t1_ParamLimits

0xd6de,	// (0x0007f21d) vod_t_sub_pane_t1

0xa7dd,	// (0x0007c31c) vod_det_cell_pane_ParamLimits

0xa7dd,	// (0x0007c31c) vod_det_cell_pane

0xb4d2,	// (0x0007d011) input_focus_pane_cp15

0xd6f7,	// (0x0007f236) vod_query_field_pane_t1

0xd705,	// (0x0007f244) vod_opt_row_pane_g1_ParamLimits

0xd705,	// (0x0007f244) vod_opt_row_pane_g1

0xd720,	// (0x0007f25f) vod_opt_row_pane_t1_ParamLimits

0xd720,	// (0x0007f25f) vod_opt_row_pane_t1

0xd745,	// (0x0007f284) vod_det_cell_field_pane

0xd74e,	// (0x0007f28d) vod_det_cell_pane_g1

0xd650,	// (0x0007f18f) vod_det_cell_pane_t1

0xb4d2,	// (0x0007d011) input_focus_pane_cp16

0xd6f7,	// (0x0007f236) vod_det_cell_field_pane_t1

0x9402,	// (0x0007af41) call7_btn_grp_pane_ParamLimits

0x9402,	// (0x0007af41) call7_btn_grp_pane

0xa7ef,	// (0x0007c32e) call7_bubble_pane_ParamLimits

0xa7ef,	// (0x0007c32e) call7_bubble_pane

0x943d,	// (0x0007af7c) cell_call7_btn_pane_ParamLimits

0x943d,	// (0x0007af7c) cell_call7_btn_pane

0xa7fd,	// (0x0007c33c) call7_pane_g1_ParamLimits

0xa7fd,	// (0x0007c33c) call7_pane_g1

0xa80c,	// (0x0007c34b) call7_windows_conf_pane_ParamLimits

0xa80c,	// (0x0007c34b) call7_windows_conf_pane

0xa826,	// (0x0007c365) popup_call7_1st_window_ParamLimits

0xa826,	// (0x0007c365) popup_call7_1st_window

0xa834,	// (0x0007c373) popup_call7_2nd_window_ParamLimits

0xa834,	// (0x0007c373) popup_call7_2nd_window

0xa842,	// (0x0007c381) popup_call7_3rd_window_ParamLimits

0xa842,	// (0x0007c381) popup_call7_3rd_window

0xb4d2,	// (0x0007d011) bg_button_pane_cp26

0xd0b3,	// (0x0007ebf2) cell_call7_btn_pane_g1

0xd711,	// (0x0007f250) cell_call7_btn_pane_t1

0xb4d2,	// (0x0007d011) bg_popup_window_pane_cp12

0xd756,	// (0x0007f295) popup_call7_1st_window_g1

0xd75e,	// (0x0007f29d) popup_call7_1st_window_g2

0xd766,	// (0x0007f2a5) popup_call7_1st_window_g3

0x0002,

0xfe9a,	// (0x000819d9) popup_call7_1st_window_g

0xd76e,	// (0x0007f2ad) popup_call7_1st_window_t1

0xd77d,	// (0x0007f2bc) popup_call7_1st_window_t2

0xd78b,	// (0x0007f2ca) popup_call7_1st_window_t3

0x0002,

0xfea1,	// (0x000819e0) popup_call7_1st_window_t

0xb4d2,	// (0x0007d011) bg_popup_window_pane_cp13

0xd799,	// (0x0007f2d8) popup_call7_2nd_window_g1

0xd7a1,	// (0x0007f2e0) popup_call7_2nd_window_g2

0xd7a9,	// (0x0007f2e8) popup_call7_2nd_window_g3

0x0002,

0xfea8,	// (0x000819e7) popup_call7_2nd_window_g

0xd7b1,	// (0x0007f2f0) popup_call7_2nd_window_t1

0xb4d2,	// (0x0007d011) bg_popup_window_pane_cp14

0xd7c0,	// (0x0007f2ff) call7_list_conf_pane

0xd7c8,	// (0x0007f307) call7_list_conf_row_pane_ParamLimits

0xd7c8,	// (0x0007f307) call7_list_conf_row_pane

0xd7db,	// (0x0007f31a) call7_list_conf_row_pane_g1

0xd841,	// (0x0007f380) call7_list_conf_row_pane_g2

0x0001,

0xfeaf,	// (0x000819ee) call7_list_conf_row_pane_g

0xd849,	// (0x0007f388) call7_list_conf_row_pane_t1

0xb4d2,	// (0x0007d011) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

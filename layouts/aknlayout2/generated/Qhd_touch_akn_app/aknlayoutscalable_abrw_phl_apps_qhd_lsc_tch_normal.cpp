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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002419e };

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
0x2a05,	// (0x00026ba3) Screen

0x2a11,	// (0x00026baf) application_window

0x2a27,	// (0x00026bc5) area_bottom_pane_ParamLimits

0x2a27,	// (0x00026bc5) area_bottom_pane

0x15f0,	// (0x0002578e) area_top_pane_ParamLimits

0x15f0,	// (0x0002578e) area_top_pane

0xaf8c,	// (0x0002f12a) call_video_uplink_pane_ParamLimits

0xaf8c,	// (0x0002f12a) call_video_uplink_pane

0x167e,	// (0x0002581c) main_pane_ParamLimits

0x167e,	// (0x0002581c) main_pane

0xc0d5,	// (0x00030273) context_pane

0x6a2f,	// (0x0002abcd) navi_pane

0x6a61,	// (0x0002abff) popup_cale_events_window_ParamLimits

0x6a61,	// (0x0002abff) popup_cale_events_window

0xc0e8,	// (0x00030286) popup_mup_playback_window

0x6a79,	// (0x0002ac17) signal_pane

0x32fd,	// (0x0002749b) main_browser_pane

0x3a60,	// (0x00027bfe) main_burst_pane

0x1a7b,	// (0x00025c19) main_calc_pane

0xc075,	// (0x00030213) main_cale_day_pane

0x1a8f,	// (0x00025c2d) main_cale_month_pane

0xc075,	// (0x00030213) main_cale_week_pane

0x3a60,	// (0x00027bfe) main_call_pane

0x2ed7,	// (0x00027075) main_call_poc_pane

0x3a60,	// (0x00027bfe) main_camera_pane

0x3a60,	// (0x00027bfe) main_chi_dic_pane

0x5532,	// (0x000296d0) main_clock_pane

0x2ed7,	// (0x00027075) main_fmradio_pane

0x3a60,	// (0x00027bfe) main_graph_messa_pane

0x2ed7,	// (0x00027075) main_help_pane

0x32fd,	// (0x0002749b) main_im_pane

0x3132,	// (0x000272d0) main_image_pane_ParamLimits

0x3132,	// (0x000272d0) main_image_pane

0x2ed7,	// (0x00027075) main_location2_pane

0x3a60,	// (0x00027bfe) main_location_pane

0x3132,	// (0x000272d0) main_messa_pane

0x2ed7,	// (0x00027075) main_mp2_pane

0x3a60,	// (0x00027bfe) main_mp_pane

0x2ed7,	// (0x00027075) main_msg_pane

0x2ed7,	// (0x00027075) main_mup_eq_pane

0x2ed7,	// (0x00027075) main_mup_pane

0x32fd,	// (0x0002749b) main_notes_pane

0x2ed7,	// (0x00027075) main_pec_pane

0x2ed7,	// (0x00027075) main_phob_pane

0x2ed7,	// (0x00027075) main_pinb_pane

0x2ed7,	// (0x00027075) main_postcard_pane

0x2ed7,	// (0x00027075) main_qdial_pane

0x3a60,	// (0x00027bfe) main_skin_pane

0x2ed7,	// (0x00027075) main_smil2_pane

0x3a60,	// (0x00027bfe) main_smil_pane

0x3a60,	// (0x00027bfe) main_video_pane

0x3a60,	// (0x00027bfe) main_video_tele_pane

0x3132,	// (0x000272d0) main_viewer_pane_ParamLimits

0x3132,	// (0x000272d0) main_viewer_pane

0x3a60,	// (0x00027bfe) main_vorec_pane

0x1aed,	// (0x00025c8b) popup_blid_sat_info_window_ParamLimits

0x1aed,	// (0x00025c8b) popup_blid_sat_info_window

0x1b45,	// (0x00025ce3) popup_dyc_status_message_window_ParamLimits

0x1b45,	// (0x00025ce3) popup_dyc_status_message_window

0x1b5f,	// (0x00025cfd) popup_grid_large_graphic_window_ParamLimits

0x1b5f,	// (0x00025cfd) popup_grid_large_graphic_window

0x1c1b,	// (0x00025db9) popup_loc_request_window_ParamLimits

0x1c1b,	// (0x00025db9) popup_loc_request_window

0x1d11,	// (0x00025eaf) popup_wml_address_window_ParamLimits

0x1d11,	// (0x00025eaf) popup_wml_address_window

0x6873,	// (0x0002aa11) call_muted_g1

0x64e7,	// (0x0002a685) popup_call_audio_conf_window_ParamLimits

0x64e7,	// (0x0002a685) popup_call_audio_conf_window

0x6887,	// (0x0002aa25) popup_call_audio_first_window_ParamLimits

0x6887,	// (0x0002aa25) popup_call_audio_first_window

0x68fd,	// (0x0002aa9b) popup_call_audio_in_window_ParamLimits

0x68fd,	// (0x0002aa9b) popup_call_audio_in_window

0x6939,	// (0x0002aad7) popup_call_audio_out_window_ParamLimits

0x6939,	// (0x0002aad7) popup_call_audio_out_window

0x6973,	// (0x0002ab11) popup_call_audio_second_window_ParamLimits

0x6973,	// (0x0002ab11) popup_call_audio_second_window

0x69c9,	// (0x0002ab67) popup_call_audio_wait_window_ParamLimits

0x69c9,	// (0x0002ab67) popup_call_audio_wait_window

0x69fe,	// (0x0002ab9c) popup_number_entry_window_ParamLimits

0x69fe,	// (0x0002ab9c) popup_number_entry_window

0x2a6c,	// (0x00026c0a) bg_popup_call_pane_cp05_ParamLimits

0x2a6c,	// (0x00026c0a) bg_popup_call_pane_cp05

0x2a8c,	// (0x00026c2a) popup_number_entry_window_t1

0x2a9f,	// (0x00026c3d) popup_number_entry_window_t2

0x2ab1,	// (0x00026c4f) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00033223) popup_number_entry_window_t

0x2af7,	// (0x00026c95) text_title_cp2

0x2b0a,	// (0x00026ca8) bg_popup_call_pane_cp_ParamLimits

0x2b0a,	// (0x00026ca8) bg_popup_call_pane_cp

0x2b18,	// (0x00026cb6) call_thumbnail_pane

0x2b20,	// (0x00026cbe) popup_call_audio_in_window_g1_ParamLimits

0x2b20,	// (0x00026cbe) popup_call_audio_in_window_g1

0x2b2c,	// (0x00026cca) popup_call_audio_in_window_g2_ParamLimits

0x2b2c,	// (0x00026cca) popup_call_audio_in_window_g2

0x2b38,	// (0x00026cd6) popup_call_audio_in_window_g3_ParamLimits

0x2b38,	// (0x00026cd6) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0003322c) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0003322c) popup_call_audio_in_window_g

0x2b44,	// (0x00026ce2) popup_call_audio_in_window_t1_ParamLimits

0x2b44,	// (0x00026ce2) popup_call_audio_in_window_t1

0x2b60,	// (0x00026cfe) popup_call_audio_in_window_t2_ParamLimits

0x2b60,	// (0x00026cfe) popup_call_audio_in_window_t2

0x2b7c,	// (0x00026d1a) popup_call_audio_in_window_t3_ParamLimits

0x2b7c,	// (0x00026d1a) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00033233) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00033233) popup_call_audio_in_window_t

0x2b0a,	// (0x00026ca8) bg_popup_call_pane_cp01_ParamLimits

0x2b0a,	// (0x00026ca8) bg_popup_call_pane_cp01

0x2b18,	// (0x00026cb6) call_thumbnail_pane_cp02

0x2b8f,	// (0x00026d2d) call_type_pane_cp022

0x2b97,	// (0x00026d35) popup_call_audio_out_window_g1_ParamLimits

0x2b97,	// (0x00026d35) popup_call_audio_out_window_g1

0x2ba9,	// (0x00026d47) popup_call_audio_out_window_g2_ParamLimits

0x2ba9,	// (0x00026d47) popup_call_audio_out_window_g2

0x2bb5,	// (0x00026d53) popup_call_audio_out_window_g3_ParamLimits

0x2bb5,	// (0x00026d53) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003323a) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003323a) popup_call_audio_out_window_g

0x2bc7,	// (0x00026d65) popup_call_audio_out_window_t1_ParamLimits

0x2bc7,	// (0x00026d65) popup_call_audio_out_window_t1

0x2bdf,	// (0x00026d7d) popup_call_audio_out_window_t2_ParamLimits

0x2bdf,	// (0x00026d7d) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00033241) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00033241) popup_call_audio_out_window_t

0x2bf4,	// (0x00026d92) bg_popup_call_pane_ParamLimits

0x2bf4,	// (0x00026d92) bg_popup_call_pane

0x2c78,	// (0x00026e16) call_thumbnail_pane_cp_ParamLimits

0x2c78,	// (0x00026e16) call_thumbnail_pane_cp

0x2c9c,	// (0x00026e3a) call_type_pane_cp01_ParamLimits

0x2c9c,	// (0x00026e3a) call_type_pane_cp01

0x2ce0,	// (0x00026e7e) popup_call_audio_first_window_g1_ParamLimits

0x2ce0,	// (0x00026e7e) popup_call_audio_first_window_g1

0x2d2c,	// (0x00026eca) popup_call_audio_first_window_g2_ParamLimits

0x2d2c,	// (0x00026eca) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00033246) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00033246) popup_call_audio_first_window_g

0x2d70,	// (0x00026f0e) popup_call_audio_first_window_t1_ParamLimits

0x2d70,	// (0x00026f0e) popup_call_audio_first_window_t1

0x2e1c,	// (0x00026fba) popup_call_audio_first_window_t4_ParamLimits

0x2e1c,	// (0x00026fba) popup_call_audio_first_window_t4

0x2ea8,	// (0x00027046) popup_call_audio_first_window_t5_ParamLimits

0x2ea8,	// (0x00027046) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003324b) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003324b) popup_call_audio_first_window_t

0x2ed7,	// (0x00027075) bg_popup_call_pane_cp02

0x2ee1,	// (0x0002707f) call_type_pane_cp023

0x2ee9,	// (0x00027087) popup_call_audio_wait_window_g1

0x2ef1,	// (0x0002708f) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00033252) popup_call_audio_wait_window_g

0x2ef9,	// (0x00027097) popup_call_audio_wait_window_t3

0x2f07,	// (0x000270a5) bg_popup_call_pane_cp03_ParamLimits

0x2f07,	// (0x000270a5) bg_popup_call_pane_cp03

0x2f67,	// (0x00027105) call_thumbnail_pane_cp011_ParamLimits

0x2f67,	// (0x00027105) call_thumbnail_pane_cp011

0x2f73,	// (0x00027111) call_type_pane_cp034_ParamLimits

0x2f73,	// (0x00027111) call_type_pane_cp034

0x2faf,	// (0x0002714d) popup_call_audio_second_window_g1_ParamLimits

0x2faf,	// (0x0002714d) popup_call_audio_second_window_g1

0x2feb,	// (0x00027189) popup_call_audio_second_window_g2_ParamLimits

0x2feb,	// (0x00027189) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00033257) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00033257) popup_call_audio_second_window_g

0x3027,	// (0x000271c5) popup_call_audio_second_window_t1_ParamLimits

0x3027,	// (0x000271c5) popup_call_audio_second_window_t1

0x30a8,	// (0x00027246) popup_call_audio_second_window_t2_ParamLimits

0x30a8,	// (0x00027246) popup_call_audio_second_window_t2

0x30de,	// (0x0002727c) popup_call_audio_second_window_t3_ParamLimits

0x30de,	// (0x0002727c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0003325c) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0003325c) popup_call_audio_second_window_t

0x2ed7,	// (0x00027075) bg_popup_call_pane_cp04

0x3114,	// (0x000272b2) list_conf_pane

0x311c,	// (0x000272ba) popup_call_audio_conf_window_t1

0x312a,	// (0x000272c8) call_thumbnail_pane_g1

0x3132,	// (0x000272d0) bg_pinb_pane_ParamLimits

0x3132,	// (0x000272d0) bg_pinb_pane

0x3140,	// (0x000272de) find_pinb_pane

0x3132,	// (0x000272d0) listscroll_pinb_pane_ParamLimits

0x3132,	// (0x000272d0) listscroll_pinb_pane

0x314a,	// (0x000272e8) pinb_bg_pane_g1

0x314a,	// (0x000272e8) pinb_bg_pane_g2

0x314a,	// (0x000272e8) pinb_bg_pane_g3

0x314a,	// (0x000272e8) pinb_bg_pane_g4

0x314a,	// (0x000272e8) pinb_bg_pane_g5

0x314a,	// (0x000272e8) pinb_bg_pane_g6

0x314a,	// (0x000272e8) pinb_bg_pane_g7

0x314a,	// (0x000272e8) pinb_bg_pane_g8

0x314a,	// (0x000272e8) pinb_bg_pane_g9

0x314a,	// (0x000272e8) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00033263) pinb_bg_pane_g

0x2a1d,	// (0x00026bbb) grid_pinb_pane

0x2a1d,	// (0x00026bbb) list_pinb_pane

0x3154,	// (0x000272f2) scroll_pane_cp01_ParamLimits

0x3154,	// (0x000272f2) scroll_pane_cp01

0x3162,	// (0x00027300) find_pinb_pane_g1_ParamLimits

0x3162,	// (0x00027300) find_pinb_pane_g1

0x317a,	// (0x00027318) find_pinb_pane_t1

0x318c,	// (0x0002732a) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0003327d) find_pinb_pane_t

0x31a1,	// (0x0002733f) input_focus_pane_cp01_ParamLimits

0x31a1,	// (0x0002733f) input_focus_pane_cp01

0x31ad,	// (0x0002734b) cell_pinb_pane_ParamLimits

0x31ad,	// (0x0002734b) cell_pinb_pane

0x31bb,	// (0x00027359) cell_pinb_pane_g1_ParamLimits

0x31bb,	// (0x00027359) cell_pinb_pane_g1

0x31c9,	// (0x00027367) cell_pinb_pane_g2_ParamLimits

0x31c9,	// (0x00027367) cell_pinb_pane_g2

0x31c9,	// (0x00027367) cell_pinb_pane_g3_ParamLimits

0x31c9,	// (0x00027367) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00033282) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00033282) cell_pinb_pane_g

0x2ed7,	// (0x00027075) grid_highlight_pane_cp01

0x31ad,	// (0x0002734b) list_pinb_item_pane_ParamLimits

0x31ad,	// (0x0002734b) list_pinb_item_pane

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp02

0x31d7,	// (0x00027375) list_pinb_item_pane_g1_ParamLimits

0x31d7,	// (0x00027375) list_pinb_item_pane_g1

0x31c9,	// (0x00027367) list_pinb_item_pane_g2_ParamLimits

0x31c9,	// (0x00027367) list_pinb_item_pane_g2

0x31bb,	// (0x00027359) list_pinb_item_pane_g3_ParamLimits

0x31bb,	// (0x00027359) list_pinb_item_pane_g3

0x31c9,	// (0x00027367) list_pinb_item_pane_g4_ParamLimits

0x31c9,	// (0x00027367) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00033289) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00033289) list_pinb_item_pane_g

0x31e5,	// (0x00027383) list_pinb_item_pane_t1_ParamLimits

0x31e5,	// (0x00027383) list_pinb_item_pane_t1

0x1818,	// (0x000259b6) calc_display_pane

0x183d,	// (0x000259db) calc_paper_pane

0x1860,	// (0x000259fe) grid_calc_pane

0x2ed7,	// (0x00027075) bg_list_pane_cp01

0x31f9,	// (0x00027397) clock_g1

0x3201,	// (0x0002739f) clock_g2

0x0001,

0xf0f4,	// (0x00033292) clock_g

0x3209,	// (0x000273a7) clock_t1_ParamLimits

0x3209,	// (0x000273a7) clock_t1

0x321e,	// (0x000273bc) clock_t2_ParamLimits

0x321e,	// (0x000273bc) clock_t2

0x3230,	// (0x000273ce) clock_t3_ParamLimits

0x3230,	// (0x000273ce) clock_t3

0x3242,	// (0x000273e0) clock_t4_ParamLimits

0x3242,	// (0x000273e0) clock_t4

0x3254,	// (0x000273f2) clock_t5_ParamLimits

0x3254,	// (0x000273f2) clock_t5

0x3269,	// (0x00027407) clock_t6_ParamLimits

0x3269,	// (0x00027407) clock_t6

0x327b,	// (0x00027419) clock_t7_ParamLimits

0x327b,	// (0x00027419) clock_t7

0x328d,	// (0x0002742b) clock_t8_ParamLimits

0x328d,	// (0x0002742b) clock_t8

0x32a1,	// (0x0002743f) clock_t9_ParamLimits

0x32a1,	// (0x0002743f) clock_t9

0x0008,

0xf0f9,	// (0x00033297) clock_t_ParamLimits

0xf0f9,	// (0x00033297) clock_t

0x32b5,	// (0x00027453) popup_clock_analogue_window_cp02

0x32b5,	// (0x00027453) popup_clock_digital_window_cp01

0x2ed7,	// (0x00027075) listscroll_help_pane

0x2ed7,	// (0x00027075) phob_pre_status_pane

0x32bd,	// (0x0002745b) grid_qdial_pane

0x3132,	// (0x000272d0) listscroll_mce_pane

0x3132,	// (0x000272d0) bg_notes_pane

0x32c7,	// (0x00027465) list_notes_pane

0x32d5,	// (0x00027473) scroll_pane_cp06

0x32e9,	// (0x00027487) bg_calc_paper_pane

0xafca,	// (0x0002f168) list_calc_pane

0x32fd,	// (0x0002749b) bg_calc_display_pane

0x188e,	// (0x00025a2c) calc_display_pane_t1

0x18a3,	// (0x00025a41) calc_display_pane_t2

0xafe4,	// (0x0002f182) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000332aa) calc_display_pane_t

0x18b8,	// (0x00025a56) cell_calc_pane_ParamLimits

0x18b8,	// (0x00025a56) cell_calc_pane

0x3309,	// (0x000274a7) bg_calc_paper_pane_g1

0x3315,	// (0x000274b3) bg_calc_paper_pane_g2

0x3321,	// (0x000274bf) bg_calc_paper_pane_g3

0x332d,	// (0x000274cb) bg_calc_paper_pane_g4

0x3339,	// (0x000274d7) bg_calc_paper_pane_g5

0x3345,	// (0x000274e3) bg_calc_paper_pane_g6

0x3354,	// (0x000274f2) bg_calc_paper_pane_g7

0x3363,	// (0x00027501) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000332b1) bg_calc_paper_pane_g

0x3376,	// (0x00027514) calc_bg_paper_pane_g9

0x3389,	// (0x00027527) list_calc_item_pane_ParamLimits

0x3389,	// (0x00027527) list_calc_item_pane

0x33a1,	// (0x0002753f) list_calc_item_pane_g1

0xaff6,	// (0x0002f194) list_calc_item_pane_t1_ParamLimits

0xaff6,	// (0x0002f194) list_calc_item_pane_t1

0x18ed,	// (0x00025a8b) list_calc_item_pane_t2_ParamLimits

0x18ed,	// (0x00025a8b) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x000332c2) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x000332c2) list_calc_item_pane_t

0x314a,	// (0x000272e8) cell_calc_pane_g1

0x33ae,	// (0x0002754c) grid_highlight_pane_cp02

0x33d0,	// (0x0002756e) bg_calc_display_pane_g1

0x191f,	// (0x00025abd) bg_calc_display_pane_g2

0x33d9,	// (0x00027577) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x000332cc) bg_calc_display_pane_g

0x1929,	// (0x00025ac7) cell_qdial_pane_ParamLimits

0x1929,	// (0x00025ac7) cell_qdial_pane

0x33e2,	// (0x00027580) cell_qdial_pane_g1_ParamLimits

0x33e2,	// (0x00027580) cell_qdial_pane_g1

0x33f8,	// (0x00027596) cell_qdial_pane_g2_ParamLimits

0x33f8,	// (0x00027596) cell_qdial_pane_g2

0x3409,	// (0x000275a7) cell_qdial_pane_g3_ParamLimits

0x3409,	// (0x000275a7) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x000332d3) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x000332d3) cell_qdial_pane_g

0x342b,	// (0x000275c9) cell_qdial_pane_t1_ParamLimits

0x342b,	// (0x000275c9) cell_qdial_pane_t1

0x3443,	// (0x000275e1) cell_qdial_pane_t2_ParamLimits

0x3443,	// (0x000275e1) cell_qdial_pane_t2

0x3456,	// (0x000275f4) cell_qdial_pane_t3_ParamLimits

0x3456,	// (0x000275f4) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x000332dc) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x000332dc) cell_qdial_pane_t

0x2ed7,	// (0x00027075) grid_highlight_pane_cp04

0x3469,	// (0x00027607) thumbnail_qdial_pane_ParamLimits

0x3469,	// (0x00027607) thumbnail_qdial_pane

0x34c5,	// (0x00027663) list_help_pane

0x34ce,	// (0x0002766c) scroll_pane_cp02

0x34d7,	// (0x00027675) help_list_pane_t1_ParamLimits

0x34d7,	// (0x00027675) help_list_pane_t1

0xb008,	// (0x0002f1a6) bg_notes_pane_g2

0xb010,	// (0x0002f1ae) bg_notes_pane_g3

0xb018,	// (0x0002f1b6) notes_bg_pane_g1

0xb020,	// (0x0002f1be) notes_bg_pane_g4

0xb028,	// (0x0002f1c6) notes_bg_pane_g5

0xb030,	// (0x0002f1ce) notes_bg_pane_g6

0xb038,	// (0x0002f1d6) notes_bg_pane_g7

0xb040,	// (0x0002f1de) notes_bg_pane_g8

0xb048,	// (0x0002f1e6) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x000332fa) notes_bg_pane_g

0x34f5,	// (0x00027693) list_notes_text_pane_ParamLimits

0x34f5,	// (0x00027693) list_notes_text_pane

0x350a,	// (0x000276a8) list_notes_text_pane_g1

0x3513,	// (0x000276b1) list_notes_text_pane_t1

0x3532,	// (0x000276d0) listscroll_cale_week_pane

0x3567,	// (0x00027705) bg_cale_heading_pane

0x357f,	// (0x0002771d) bg_cale_pane_cp01

0x359c,	// (0x0002773a) cale_week_corner_pane

0x35bb,	// (0x00027759) cale_week_day_heading_pane

0x35d8,	// (0x00027776) cale_week_scroll_pane_g1

0x35eb,	// (0x00027789) cale_week_scroll_pane_g2

0x3603,	// (0x000277a1) cale_week_scroll_pane_g3

0x361b,	// (0x000277b9) cale_week_scroll_pane_g4

0x3633,	// (0x000277d1) cale_week_scroll_pane_g5

0x3653,	// (0x000277f1) cale_week_scroll_pane_g6

0x3673,	// (0x00027811) cale_week_scroll_pane_g7

0x3693,	// (0x00027831) cale_week_scroll_pane_g8

0x36b7,	// (0x00027855) cale_week_scroll_pane_g9

0x36cf,	// (0x0002786d) cale_week_scroll_pane_g10

0x36e7,	// (0x00027885) cale_week_scroll_pane_g11

0x36ff,	// (0x0002789d) cale_week_scroll_pane_g12

0x3717,	// (0x000278b5) cale_week_scroll_pane_g13

0x3717,	// (0x000278b5) cale_week_scroll_pane_g14

0x3717,	// (0x000278b5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00033309) cale_week_scroll_pane_g

0x3753,	// (0x000278f1) cale_week_time_pane

0x3777,	// (0x00027915) grid_cale_week_pane

0x37af,	// (0x0002794d) scroll_pane_cp08

0x37cc,	// (0x0002796a) cell_cale_week_pane_ParamLimits

0x37cc,	// (0x0002796a) cell_cale_week_pane

0x385a,	// (0x000279f8) cale_week_day_heading_pane_t1

0x3884,	// (0x00027a22) cale_week_day_heading_pane_t2

0x38b3,	// (0x00027a51) cale_week_day_heading_pane_t3

0x38e2,	// (0x00027a80) cale_week_day_heading_pane_t4

0x3911,	// (0x00027aaf) cale_week_day_heading_pane_t5

0x3948,	// (0x00027ae6) cale_week_day_heading_pane_t6

0x397f,	// (0x00027b1d) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0003332a) cale_week_day_heading_pane_t

0x39a9,	// (0x00027b47) bg_cale_side_pane

0x193d,	// (0x00025adb) cale_week_time_pane_t1

0x1957,	// (0x00025af5) cale_week_time_pane_t2

0x1971,	// (0x00025b0f) cale_week_time_pane_t3

0x198b,	// (0x00025b29) cale_week_time_pane_t4

0x19a5,	// (0x00025b43) cale_week_time_pane_t5

0x19bf,	// (0x00025b5d) cale_week_time_pane_t6

0x19d9,	// (0x00025b77) cale_week_time_pane_t7

0x19f3,	// (0x00025b91) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00033339) cale_week_time_pane_t

0x39b7,	// (0x00027b55) cell_cale_week_pane_g2

0x39d6,	// (0x00027b74) cell_cale_week_pane_g3_ParamLimits

0x39d6,	// (0x00027b74) cell_cale_week_pane_g3

0x39ee,	// (0x00027b8c) grid_highlight_pane_cp07

0x39f6,	// (0x00027b94) listscroll_gms_pane

0x3a00,	// (0x00027b9e) grid_gms_pane

0x3a09,	// (0x00027ba7) listscroll_gms_pane_g1

0x3a11,	// (0x00027baf) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0003334a) listscroll_gms_pane_g

0x3a19,	// (0x00027bb7) scroll_pane_cp010

0x3a24,	// (0x00027bc2) cell_gms_pane_ParamLimits

0x3a24,	// (0x00027bc2) cell_gms_pane

0x3a37,	// (0x00027bd5) cell_gms_pane_g1

0x3a3f,	// (0x00027bdd) cell_gms_pane_g2

0x350a,	// (0x000276a8) cell_gms_pane_g3

0x3a47,	// (0x00027be5) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0003334f) cell_gms_pane_g

0x3a50,	// (0x00027bee) grid_highlight_pane_cp09

0x67fb,	// (0x0002a999) phob_pre_status_pane_g1

0x6803,	// (0x0002a9a1) phob_pre_status_pane_g2

0x680b,	// (0x0002a9a9) phob_pre_status_pane_g3

0x6813,	// (0x0002a9b1) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x00033713) phob_pre_status_pane_g

0x6823,	// (0x0002a9c1) phob_pre_status_pane_t1

0x6831,	// (0x0002a9cf) phob_pre_status_pane_t2

0x6841,	// (0x0002a9df) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x0003371e) phob_pre_status_pane_t

0x3a60,	// (0x00027bfe) bg_list_pane_cp05

0x3a68,	// (0x00027c06) grid_vorec_pane

0x3a70,	// (0x00027c0e) vorec_t1

0x3a7e,	// (0x00027c1c) vorec_t2

0x3a8c,	// (0x00027c2a) vorec_t3

0x3a9a,	// (0x00027c38) vorec_t4

0x29df,	// (0x00026b7d) vorec_t5

0x29ed,	// (0x00026b8b) vorec_t6

0x0004,

0xf1ba,	// (0x00033358) vorec_t

0x29fb,	// (0x00026b99) wait_bar_pane_cp01

0x3ab6,	// (0x00027c54) cell_vorec_pane_ParamLimits

0x3ab6,	// (0x00027c54) cell_vorec_pane

0xb050,	// (0x0002f1ee) cell_vorec_pane_g1

0x2ed7,	// (0x00027075) grid_highlight_pane_cp05

0x3154,	// (0x000272f2) cams_zoom_pane

0x3154,	// (0x000272f2) image_vga_pane

0x31bb,	// (0x00027359) main_camera_pane_g1

0x31bb,	// (0x00027359) main_camera_pane_g2

0x31bb,	// (0x00027359) main_camera_pane_g3

0x31bb,	// (0x00027359) main_camera_pane_g4

0x31bb,	// (0x00027359) main_camera_pane_g5

0x31bb,	// (0x00027359) main_camera_pane_g6

0x31bb,	// (0x00027359) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00033363) main_camera_pane_g

0x3ac9,	// (0x00027c67) main_camera_pane_t1

0x3ac9,	// (0x00027c67) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00033374) main_camera_pane_t

0x3af1,	// (0x00027c8f) cams_zoom_pane_cp_ParamLimits

0x3af1,	// (0x00027c8f) cams_zoom_pane_cp

0x3b25,	// (0x00027cc3) image_cif_pane_ParamLimits

0x3b25,	// (0x00027cc3) image_cif_pane

0x2a1d,	// (0x00026bbb) image_subqcif_pane

0x3b37,	// (0x00027cd5) main_video_pane_g1_ParamLimits

0x3b37,	// (0x00027cd5) main_video_pane_g1

0x3b65,	// (0x00027d03) main_video_pane_g2_ParamLimits

0x3b65,	// (0x00027d03) main_video_pane_g2

0x3b9f,	// (0x00027d3d) main_video_pane_g3_ParamLimits

0x3b9f,	// (0x00027d3d) main_video_pane_g3

0x3b9f,	// (0x00027d3d) main_video_pane_g4_ParamLimits

0x3b9f,	// (0x00027d3d) main_video_pane_g4

0x3bd3,	// (0x00027d71) main_video_pane_g5_ParamLimits

0x3bd3,	// (0x00027d71) main_video_pane_g5

0x3be1,	// (0x00027d7f) main_video_pane_g6_ParamLimits

0x3be1,	// (0x00027d7f) main_video_pane_g6

0x0006,

0xf1db,	// (0x00033379) main_video_pane_g_ParamLimits

0xf1db,	// (0x00033379) main_video_pane_g

0x3c09,	// (0x00027da7) main_video_pane_t1_ParamLimits

0x3c09,	// (0x00027da7) main_video_pane_t1

0x3c4d,	// (0x00027deb) cams_zoom_pane_g1

0x3c4d,	// (0x00027deb) cams_zoom_pane_g2

0x3c4d,	// (0x00027deb) cams_zoom_pane_g3

0x3c4d,	// (0x00027deb) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00033388) cams_zoom_pane_g

0x3c6b,	// (0x00027e09) grid_cams_pane

0x3c85,	// (0x00027e23) linegrid_cams_pane

0x3c99,	// (0x00027e37) cell_cams_pane_ParamLimits

0x3c99,	// (0x00027e37) cell_cams_pane

0x3cb9,	// (0x00027e57) cams_burst_image_pane

0x3cc1,	// (0x00027e5f) cell_cams_pane_g1

0x2ed7,	// (0x00027075) grid_highlight_pane_cp03

0x314a,	// (0x000272e8) mp_bg_pane_g1

0x2a1d,	// (0x00026bbb) bg_list_pane_cp03

0x2a1d,	// (0x00026bbb) bg_mp_pane

0x2a1d,	// (0x00026bbb) grid_mp_pane

0x3c4d,	// (0x00027deb) media_player_g1

0x5240,	// (0x000293de) media_player_t1

0x5240,	// (0x000293de) media_player_t2

0x5240,	// (0x000293de) media_player_t3

0x5240,	// (0x000293de) media_player_t4

0x5240,	// (0x000293de) media_player_t5

0x5240,	// (0x000293de) media_player_t6

0x5240,	// (0x000293de) media_player_t7

0x0006,

0xf55f,	// (0x000336fd) media_player_t

0x2a1d,	// (0x00026bbb) wait_bar_pane_cp02

0xf544,	// (0x000336e2) main_usb_pane_t

0x5532,	// (0x000296d0) cell_mp_pane

0x314a,	// (0x000272e8) cell_mp_pane_g1

0x2ed7,	// (0x00027075) grid_highlight_pane_cp06

0x3cc9,	// (0x00027e67) grid_skin_colour_pane

0x3cd1,	// (0x00027e6f) list_highlight_pane_cp03

0x3cd9,	// (0x00027e77) skin_g1

0x3ce1,	// (0x00027e7f) skin_t1

0x3cf0,	// (0x00027e8e) skin_t2

0x0001,

0xf218,	// (0x000333b6) skin_t

0x3cfe,	// (0x00027e9c) cell_skin_colour_pane_ParamLimits

0x3cfe,	// (0x00027e9c) cell_skin_colour_pane

0x3d1e,	// (0x00027ebc) cell_skin_colour_pane_g1

0x3d89,	// (0x00027f27) call_video_g1_ParamLimits

0x3d89,	// (0x00027f27) call_video_g1

0x3da5,	// (0x00027f43) call_video_g2_ParamLimits

0x3da5,	// (0x00027f43) call_video_g2

0x0001,

0xf21d,	// (0x000333bb) call_video_g_ParamLimits

0xf21d,	// (0x000333bb) call_video_g

0x3df7,	// (0x00027f95) call_video_uplink_pane_cp1_ParamLimits

0x3df7,	// (0x00027f95) call_video_uplink_pane_cp1

0x3e5c,	// (0x00027ffa) call_video_uplink_pane_cp2

0x3e9e,	// (0x0002803c) video_down_crop_pane_ParamLimits

0x3e9e,	// (0x0002803c) video_down_crop_pane

0x3f95,	// (0x00028133) video_down_pane_ParamLimits

0x3f95,	// (0x00028133) video_down_pane

0x408c,	// (0x0002822a) video_down_subqcif_pane_ParamLimits

0x408c,	// (0x0002822a) video_down_subqcif_pane

0x40a4,	// (0x00028242) video_down_subqcif_pane_cp_ParamLimits

0x40a4,	// (0x00028242) video_down_subqcif_pane_cp

0x40e3,	// (0x00028281) im_reading_pane_ParamLimits

0x40e3,	// (0x00028281) im_reading_pane

0x40f5,	// (0x00028293) im_writing_pane_ParamLimits

0x40f5,	// (0x00028293) im_writing_pane

0x4113,	// (0x000282b1) im_reading_pane_t1

0x414c,	// (0x000282ea) list_im_pane

0x415d,	// (0x000282fb) scroll_pane_cp07

0x4176,	// (0x00028314) im_writing_pane_t1_ParamLimits

0x4176,	// (0x00028314) im_writing_pane_t1

0x418b,	// (0x00028329) im_writing_pane_t2_ParamLimits

0x418b,	// (0x00028329) im_writing_pane_t2

0x0001,

0xf227,	// (0x000333c5) im_writing_pane_t_ParamLimits

0xf227,	// (0x000333c5) im_writing_pane_t

0x2ed7,	// (0x00027075) input_focus_pane_cp04

0x2ed7,	// (0x00027075) input_focus_pane_cp05

0x41a8,	// (0x00028346) list_im_single_pane_ParamLimits

0x41a8,	// (0x00028346) list_im_single_pane

0x41bc,	// (0x0002835a) list_single_im_pane_t1

0x3a60,	// (0x00027bfe) blid_accuracy_pane

0x3a60,	// (0x00027bfe) blid_compass_pane

0xc02d,	// (0x000301cb) main_location_t1

0xc02d,	// (0x000301cb) main_location_t2

0xc02d,	// (0x000301cb) main_location_t3

0x0002,

0xf56e,	// (0x0003370c) main_location_t

0x2ed7,	// (0x00027075) aid_levels_location

0x314a,	// (0x000272e8) blid_accuracy_pane_g1

0x314a,	// (0x000272e8) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x00033414) blid_accuracy_pane_g

0x41f6,	// (0x00028394) wml_content_pane

0x4234,	// (0x000283d2) wml_button_pane_ParamLimits

0x4234,	// (0x000283d2) wml_button_pane

0x4248,	// (0x000283e6) wml_list_single_large_pane_ParamLimits

0x4248,	// (0x000283e6) wml_list_single_large_pane

0x425d,	// (0x000283fb) wml_list_single_medium_pane_ParamLimits

0x425d,	// (0x000283fb) wml_list_single_medium_pane

0x4273,	// (0x00028411) wml_list_single_small_pane_ParamLimits

0x4273,	// (0x00028411) wml_list_single_small_pane

0x428b,	// (0x00028429) wml_selection_box_pane_ParamLimits

0x428b,	// (0x00028429) wml_selection_box_pane

0x429e,	// (0x0002843c) wml_list_single_pane_t1

0x42ad,	// (0x0002844b) wml_list_single_medium_pane_t1

0x42bc,	// (0x0002845a) wml_list_single_large_pane_t1

0x42cb,	// (0x00028469) input_focus_pane_cp02_ParamLimits

0x42cb,	// (0x00028469) input_focus_pane_cp02

0x42de,	// (0x0002847c) wml_selection_box_pane_g1

0x42e7,	// (0x00028485) wml_selection_box_pane_t1_ParamLimits

0x42e7,	// (0x00028485) wml_selection_box_pane_t1

0x3132,	// (0x000272d0) bg_wml_button_pane_ParamLimits

0x3132,	// (0x000272d0) bg_wml_button_pane

0x42ff,	// (0x0002849d) wml_button_pane_g1

0x4307,	// (0x000284a5) wml_button_pane_t1

0x42ff,	// (0x0002849d) wml_button_bg_pane_g1

0x4317,	// (0x000284b5) wml_button_bg_pane_g2

0x431f,	// (0x000284bd) wml_button_bg_pane_g3

0x4327,	// (0x000284c5) wml_button_bg_pane_g4

0x432f,	// (0x000284cd) wml_button_bg_pane_g5

0x4337,	// (0x000284d5) wml_button_bg_pane_g6

0x433f,	// (0x000284dd) wml_button_bg_pane_g7

0x4347,	// (0x000284e5) wml_button_bg_pane_g8

0x434f,	// (0x000284ed) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x000333ca) wml_button_bg_pane_g

0x4357,	// (0x000284f5) bg_list_pane_cp02

0x435f,	// (0x000284fd) mce_header_pane_ParamLimits

0x435f,	// (0x000284fd) mce_header_pane

0x4375,	// (0x00028513) mce_icon_pane

0x4375,	// (0x00028513) mce_image_pane

0x437e,	// (0x0002851c) mce_text_pane_ParamLimits

0x437e,	// (0x0002851c) mce_text_pane

0x4391,	// (0x0002852f) scroll_pane_cp03

0x422c,	// (0x000283ca) scroll_pane_cp04

0x439b,	// (0x00028539) scroll_pane_cp05_ParamLimits

0x439b,	// (0x00028539) scroll_pane_cp05

0x43a7,	// (0x00028545) mce_header_field_pane_ParamLimits

0x43a7,	// (0x00028545) mce_header_field_pane

0x43be,	// (0x0002855c) mce_header_field_pane_2_ParamLimits

0x43be,	// (0x0002855c) mce_header_field_pane_2

0x43d4,	// (0x00028572) mce_header_field_pane_3

0x43dc,	// (0x0002857a) list_single_mce_message_pane_ParamLimits

0x43dc,	// (0x0002857a) list_single_mce_message_pane

0x43f1,	// (0x0002858f) list_single_mce_smart_pane_ParamLimits

0x43f1,	// (0x0002858f) list_single_mce_smart_pane

0x4411,	// (0x000285af) input_focus_pane_cp03

0x441a,	// (0x000285b8) list_header_data_pane

0x4422,	// (0x000285c0) mce_header_field_pane_t1

0x4432,	// (0x000285d0) list_single_mce_header_pane_ParamLimits

0x4432,	// (0x000285d0) list_single_mce_header_pane

0x4446,	// (0x000285e4) list_single_mce_header_pane_t1

0x4455,	// (0x000285f3) list_single_mce_message_pane_g1

0x445d,	// (0x000285fb) list_single_mce_message_pane_t1

0x4491,	// (0x0002862f) bg_cale_heading_pane_cp01_ParamLimits

0x4491,	// (0x0002862f) bg_cale_heading_pane_cp01

0x44cb,	// (0x00028669) bg_cale_pane_cp02_ParamLimits

0x44cb,	// (0x00028669) bg_cale_pane_cp02

0x44f8,	// (0x00028696) cale_month_corner_pane

0x4517,	// (0x000286b5) cale_month_day_heading_pane_ParamLimits

0x4517,	// (0x000286b5) cale_month_day_heading_pane

0x4569,	// (0x00028707) cale_month_pane_g1_ParamLimits

0x4569,	// (0x00028707) cale_month_pane_g1

0x4598,	// (0x00028736) cale_month_pane_g2_ParamLimits

0x4598,	// (0x00028736) cale_month_pane_g2

0x45c8,	// (0x00028766) cale_month_pane_g3_ParamLimits

0x45c8,	// (0x00028766) cale_month_pane_g3

0x4604,	// (0x000287a2) cale_month_pane_g4_ParamLimits

0x4604,	// (0x000287a2) cale_month_pane_g4

0x4640,	// (0x000287de) cale_month_pane_g5_ParamLimits

0x4640,	// (0x000287de) cale_month_pane_g5

0x4688,	// (0x00028826) cale_month_pane_g6_ParamLimits

0x4688,	// (0x00028826) cale_month_pane_g6

0x46d4,	// (0x00028872) cale_month_pane_g7_ParamLimits

0x46d4,	// (0x00028872) cale_month_pane_g7

0x4728,	// (0x000288c6) cale_month_pane_g8_ParamLimits

0x4728,	// (0x000288c6) cale_month_pane_g8

0x477c,	// (0x0002891a) cale_month_pane_g9_ParamLimits

0x477c,	// (0x0002891a) cale_month_pane_g9

0x47ce,	// (0x0002896c) cale_month_pane_g10_ParamLimits

0x47ce,	// (0x0002896c) cale_month_pane_g10

0x4820,	// (0x000289be) cale_month_pane_g11_ParamLimits

0x4820,	// (0x000289be) cale_month_pane_g11

0x4872,	// (0x00028a10) cale_month_pane_g12_ParamLimits

0x4872,	// (0x00028a10) cale_month_pane_g12

0x48c4,	// (0x00028a62) cale_month_pane_g13_ParamLimits

0x48c4,	// (0x00028a62) cale_month_pane_g13

0x000c,

0xf23f,	// (0x000333dd) cale_month_pane_g_ParamLimits

0xf23f,	// (0x000333dd) cale_month_pane_g

0x4928,	// (0x00028ac6) cale_month_week_pane

0x494c,	// (0x00028aea) grid_cale_month_pane_ParamLimits

0x494c,	// (0x00028aea) grid_cale_month_pane

0x4995,	// (0x00028b33) cale_month_day_heading_pane_t1

0x4a1b,	// (0x00028bb9) cale_month_day_heading_pane_t2

0x4a94,	// (0x00028c32) cale_month_day_heading_pane_t3

0x4b0d,	// (0x00028cab) cale_month_day_heading_pane_t4

0x4b8e,	// (0x00028d2c) cale_month_day_heading_pane_t5

0x4c17,	// (0x00028db5) cale_month_day_heading_pane_t6

0x4ca0,	// (0x00028e3e) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x000333f8) cale_month_day_heading_pane_t

0x39a9,	// (0x00027b47) bg_cale_side_pane_cp01

0x4d31,	// (0x00028ecf) cale_month_week_pane_t1

0x4d4a,	// (0x00028ee8) cale_month_week_pane_t2

0x4d63,	// (0x00028f01) cale_month_week_pane_t3

0x4d7c,	// (0x00028f1a) cale_month_week_pane_t4

0x4d95,	// (0x00028f33) cale_month_week_pane_t5

0x4dae,	// (0x00028f4c) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00033407) cale_month_week_pane_t

0x4dc7,	// (0x00028f65) cell_cale_month_pane_ParamLimits

0x4dc7,	// (0x00028f65) cell_cale_month_pane

0xb05a,	// (0x0002f1f8) cell_cale_month_pane_g1

0x1a0d,	// (0x00025bab) cell_cale_month_pane_t1_ParamLimits

0x1a0d,	// (0x00025bab) cell_cale_month_pane_t1

0x39ee,	// (0x00027b8c) grid_highlight_pane_cp08

0x314a,	// (0x000272e8) main_smil_g1

0x4ef5,	// (0x00029093) smil_status_pane

0x4efe,	// (0x0002909c) smil_text_pane

0xbf45,	// (0x000300e3) bg_popup_call3_rect_pane_g8

0xbf4d,	// (0x000300eb) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x000336a0) bg_popup_call3_rect_pane_g

0xc14a,	// (0x000302e8) smil_status_volume_pane_g1

0x4f12,	// (0x000290b0) smil_status_pane_t1

0xc17d,	// (0x0003031b) volume_smil_pane

0x4f29,	// (0x000290c7) list_smil_text_pane

0x4f33,	// (0x000290d1) scroll_pane_cp011

0x4f3e,	// (0x000290dc) smil_text_list_pane_t1_ParamLimits

0x4f3e,	// (0x000290dc) smil_text_list_pane_t1

0xb066,	// (0x0002f204) aid_volume_smil_ParamLimits

0xb066,	// (0x0002f204) aid_volume_smil

0x314a,	// (0x000272e8) smil_volume_pane_g1

0x314a,	// (0x000272e8) smil_volume_pane_g2

0x0001,

0xf276,	// (0x00033414) smil_volume_pane_g

0x3532,	// (0x000276d0) listscroll_cale_day_pane

0x4f7a,	// (0x00029118) bg_cale_pane

0x4f92,	// (0x00029130) list_cale_pane

0x4fb5,	// (0x00029153) scroll_pane_cp09

0x4fc6,	// (0x00029164) cale_bg_pane_g1

0x4fce,	// (0x0002916c) cale_bg_pane_g2

0x4fd6,	// (0x00029174) cale_bg_pane_g3

0x4fde,	// (0x0002917c) cale_bg_pane_g4

0x4fe6,	// (0x00029184) cale_bg_pane_g5

0x4fee,	// (0x0002918c) cale_bg_pane_g6

0x4ff6,	// (0x00029194) cale_bg_pane_g7

0x4ffe,	// (0x0002919c) cale_bg_pane_g8

0x5006,	// (0x000291a4) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00033419) cale_bg_pane_g

0x5016,	// (0x000291b4) list_cale_time_pane_ParamLimits

0x5016,	// (0x000291b4) list_cale_time_pane

0x502b,	// (0x000291c9) list_cale_time_pane_g1_ParamLimits

0x502b,	// (0x000291c9) list_cale_time_pane_g1

0x5037,	// (0x000291d5) list_cale_time_pane_g2_ParamLimits

0x5037,	// (0x000291d5) list_cale_time_pane_g2

0x5044,	// (0x000291e2) list_cale_time_pane_g3_ParamLimits

0x5044,	// (0x000291e2) list_cale_time_pane_g3

0x5052,	// (0x000291f0) list_cale_time_pane_g4_ParamLimits

0x5052,	// (0x000291f0) list_cale_time_pane_g4

0x5060,	// (0x000291fe) list_cale_time_pane_g5_ParamLimits

0x5060,	// (0x000291fe) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0003342c) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0003342c) list_cale_time_pane_g

0x507b,	// (0x00029219) list_cale_time_pane_t1_ParamLimits

0x507b,	// (0x00029219) list_cale_time_pane_t1

0x50a3,	// (0x00029241) list_cale_time_pane_t2_ParamLimits

0x50a3,	// (0x00029241) list_cale_time_pane_t2

0x574d,	// (0x000298eb) aid_blid_cardinal_pane

0x5797,	// (0x00029935) compass_pane_t4

0x50cb,	// (0x00029269) list_cale_time_pane_t4_ParamLimits

0x50cb,	// (0x00029269) list_cale_time_pane_t4

0x57a5,	// (0x00029943) compass_pane_t5

0x57b3,	// (0x00029951) compass_pane_t6

0x57c1,	// (0x0002995f) compass_pane_t7

0x5857,	// (0x000299f5) navi_pane_cc_t1

0x5a76,	// (0x00029c14) aid_phob_thumbnail_center_pane

0x5f57,	// (0x0002a0f5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x00033439) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x00033439) list_cale_time_pane_t

0x2b0a,	// (0x00026ca8) bg_popup_window_pane_cp02_ParamLimits

0x2b0a,	// (0x00026ca8) bg_popup_window_pane_cp02

0x50f3,	// (0x00029291) heading_pane_cp01_ParamLimits

0x50f3,	// (0x00029291) heading_pane_cp01

0x50ff,	// (0x0002929d) loc_req_pane_ParamLimits

0x50ff,	// (0x0002929d) loc_req_pane

0x510f,	// (0x000292ad) loc_type_pane_ParamLimits

0x510f,	// (0x000292ad) loc_type_pane

0x5121,	// (0x000292bf) loc_type_pane_t1_ParamLimits

0x5121,	// (0x000292bf) loc_type_pane_t1

0x5133,	// (0x000292d1) loc_type_pane_t2_ParamLimits

0x5133,	// (0x000292d1) loc_type_pane_t2

0x5145,	// (0x000292e3) loc_type_pane_t3_ParamLimits

0x5145,	// (0x000292e3) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x00033440) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x00033440) loc_type_pane_t

0x5157,	// (0x000292f5) list_loc_req_pane

0x5161,	// (0x000292ff) scroll_pane_cp012

0x516c,	// (0x0002930a) list_single_loc_request_popup_menu_pane_ParamLimits

0x516c,	// (0x0002930a) list_single_loc_request_popup_menu_pane

0x5179,	// (0x00029317) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5179,	// (0x00029317) list_single_loc_request_popup_menu_pane_g1

0x5185,	// (0x00029323) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x5185,	// (0x00029323) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x00033447) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x00033447) list_single_loc_request_popup_menu_pane_g

0x5191,	// (0x0002932f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x5191,	// (0x0002932f) list_single_loc_request_popup_menu_pane_t1

0x3132,	// (0x000272d0) bg_popup_window_pane_cp03_ParamLimits

0x3132,	// (0x000272d0) bg_popup_window_pane_cp03

0x51a7,	// (0x00029345) heading_loc_req_pane_ParamLimits

0x51a7,	// (0x00029345) heading_loc_req_pane

0x51b3,	// (0x00029351) popup_dyc_status_message_window_g1_ParamLimits

0x51b3,	// (0x00029351) popup_dyc_status_message_window_g1

0x51c7,	// (0x00029365) popup_dyc_status_message_window_t1_ParamLimits

0x51c7,	// (0x00029365) popup_dyc_status_message_window_t1

0x51dc,	// (0x0002937a) popup_dyc_status_message_window_t2_ParamLimits

0x51dc,	// (0x0002937a) popup_dyc_status_message_window_t2

0x51f1,	// (0x0002938f) popup_dyc_status_message_window_t3_ParamLimits

0x51f1,	// (0x0002938f) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0003344c) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0003344c) popup_dyc_status_message_window_t

0x2ed7,	// (0x00027075) bg_heading_pane_cp01

0x520d,	// (0x000293ab) heading_loc_req_pane_g1

0x5215,	// (0x000293b3) heading_loc_req_pane_g2

0x521d,	// (0x000293bb) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x00033453) heading_loc_req_pane_g

0x5225,	// (0x000293c3) heading_loc_req_pane_t1

0x5250,	// (0x000293ee) bg_popup_sub_pane_cp01_ParamLimits

0x5250,	// (0x000293ee) bg_popup_sub_pane_cp01

0x525e,	// (0x000293fc) popup_cale_events_window_g1_ParamLimits

0x525e,	// (0x000293fc) popup_cale_events_window_g1

0x527e,	// (0x0002941c) popup_cale_events_window_g2_ParamLimits

0x527e,	// (0x0002941c) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00033475) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00033475) popup_cale_events_window_g

0x529e,	// (0x0002943c) popup_cale_events_window_t1_ParamLimits

0x529e,	// (0x0002943c) popup_cale_events_window_t1

0x52b0,	// (0x0002944e) popup_cale_events_window_t2_ParamLimits

0x52b0,	// (0x0002944e) popup_cale_events_window_t2

0x52ee,	// (0x0002948c) popup_cale_events_window_t3_ParamLimits

0x52ee,	// (0x0002948c) popup_cale_events_window_t3

0x5328,	// (0x000294c6) popup_cale_events_window_t4_ParamLimits

0x5328,	// (0x000294c6) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0003347a) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0003347a) popup_cale_events_window_t

0x535e,	// (0x000294fc) call_type_pane

0x536e,	// (0x0002950c) popup_call_status_window_g1

0x5382,	// (0x00029520) popup_call_status_window_g2

0x5396,	// (0x00029534) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00033483) popup_call_status_window_g

0x53a5,	// (0x00029543) call_type_pane_g1

0x53ae,	// (0x0002954c) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0003348a) call_type_pane_g

0x2ed7,	// (0x00027075) bg_popup_sub_pane_cp02

0x53b7,	// (0x00029555) listscroll_popup_wml_pane

0x53bf,	// (0x0002955d) list_wml_pane

0x53c9,	// (0x00029567) scroll_pane_cp013

0x53d4,	// (0x00029572) list_single_graphic_popup_wml_pane_ParamLimits

0x53d4,	// (0x00029572) list_single_graphic_popup_wml_pane

0x314a,	// (0x000272e8) list_single_graphic_popup_wml_pane_g1

0x53e8,	// (0x00029586) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0003348f) list_single_graphic_popup_wml_pane_g

0x53f0,	// (0x0002958e) list_single_graphic_popup_wml_pane_t1

0x5406,	// (0x000295a4) aid_call_pane

0x312a,	// (0x000272c8) popup_clock_analogue_window_g1

0x312a,	// (0x000272c8) popup_clock_analogue_window_g2

0xb094,	// (0x0002f232) popup_clock_analogue_window_g3

0xb094,	// (0x0002f232) popup_clock_analogue_window_g4

0x314a,	// (0x000272e8) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00033494) popup_clock_analogue_window_g

0xb09c,	// (0x0002f23a) popup_clock_analogue_window_t1

0xb0aa,	// (0x0002f248) clock_digital_number_pane_ParamLimits

0xb0aa,	// (0x0002f248) clock_digital_number_pane

0xb0b6,	// (0x0002f254) clock_digital_number_pane_cp02_ParamLimits

0xb0b6,	// (0x0002f254) clock_digital_number_pane_cp02

0xb0c2,	// (0x0002f260) clock_digital_number_pane_cp03_ParamLimits

0xb0c2,	// (0x0002f260) clock_digital_number_pane_cp03

0xb0ce,	// (0x0002f26c) clock_digital_number_pane_cp04_ParamLimits

0xb0ce,	// (0x0002f26c) clock_digital_number_pane_cp04

0xb0de,	// (0x0002f27c) clock_digital_separator_pane_ParamLimits

0xb0de,	// (0x0002f27c) clock_digital_separator_pane

0xb0ea,	// (0x0002f288) popup_clock_digital_window_t1

0x314a,	// (0x000272e8) clock_digital_number_pane_g1

0x314a,	// (0x000272e8) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x00033414) clock_digital_number_pane_g

0x314a,	// (0x000272e8) clock_digital_separator_pane_g1

0x314a,	// (0x000272e8) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x00033414) clock_digital_separator_pane_g

0x2ed7,	// (0x00027075) bg_popup_window_pane_cp04

0x540e,	// (0x000295ac) heading_pane_cp03

0x3a60,	// (0x00027bfe) listscroll_popup_gms_pane

0x2ed7,	// (0x00027075) grid_large_graphic_popup_pane

0x5417,	// (0x000295b5) listscroll_popup_gms_pane_g1

0x5420,	// (0x000295be) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0003349f) listscroll_popup_gms_pane_g

0x5429,	// (0x000295c7) scroll_pane_cp014

0x31ad,	// (0x0002734b) cell_large_graphic_popup_pane_ParamLimits

0x31ad,	// (0x0002734b) cell_large_graphic_popup_pane

0x31bb,	// (0x00027359) cell_large_graphic_popup_pane_g1_ParamLimits

0x31bb,	// (0x00027359) cell_large_graphic_popup_pane_g1

0x5432,	// (0x000295d0) cell_large_graphic_popup_pane_g2_ParamLimits

0x5432,	// (0x000295d0) cell_large_graphic_popup_pane_g2

0x5440,	// (0x000295de) cell_large_graphic_popup_pane_g3_ParamLimits

0x5440,	// (0x000295de) cell_large_graphic_popup_pane_g3

0x544e,	// (0x000295ec) cell_large_graphic_popup_pane_g4_ParamLimits

0x544e,	// (0x000295ec) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x000334a4) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x000334a4) cell_large_graphic_popup_pane_g

0x2ed7,	// (0x00027075) grid_highlight_pane_cp010

0x314a,	// (0x000272e8) bg_popup_call_pane_g1

0x545f,	// (0x000295fd) list_single_graphic_popup_conf_pane_ParamLimits

0x545f,	// (0x000295fd) list_single_graphic_popup_conf_pane

0x5472,	// (0x00029610) list_highlight_pane_cp01

0x547b,	// (0x00029619) list_single_graphic_popup_conf_pane_g1

0x5483,	// (0x00029621) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x000334ad) list_single_graphic_popup_conf_pane_g

0x548b,	// (0x00029629) list_single_graphic_popup_conf_pane_t1

0x5499,	// (0x00029637) linegrid_cams_pane_g1

0x54a2,	// (0x00029640) linegrid_cams_pane_g2

0x350a,	// (0x000276a8) linegrid_cams_pane_g3

0x54ab,	// (0x00029649) linegrid_cams_pane_g4

0x54b4,	// (0x00029652) linegrid_cams_pane_g5

0x54bd,	// (0x0002965b) linegrid_cams_pane_g6

0x3a47,	// (0x00027be5) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x000334b2) linegrid_cams_pane_g

0x54c8,	// (0x00029666) popup_clock_analogue_window

0x54c8,	// (0x00029666) popup_clock_digital_window

0x2ed7,	// (0x00027075) popup_phob_thumbnail_window

0x314a,	// (0x000272e8) call_video_uplink_pane_g1

0x54d1,	// (0x0002966f) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x000334c1) call_video_uplink_pane_g

0x54d9,	// (0x00029677) video_uplink_pane

0x54e1,	// (0x0002967f) mce_image_pane_g1

0x54eb,	// (0x00029689) mce_image_pane_g2

0x54f5,	// (0x00029693) mce_image_pane_g3

0x54fd,	// (0x0002969b) mce_image_pane_g4

0x5505,	// (0x000296a3) mce_image_pane_g5

0x0004,

0xf328,	// (0x000334c6) mce_image_pane_g

0x550d,	// (0x000296ab) control_top_pane_stacon_cp01_ParamLimits

0x550d,	// (0x000296ab) control_top_pane_stacon_cp01

0x5521,	// (0x000296bf) uni_indicator_pane_stacon_cp01_ParamLimits

0x5521,	// (0x000296bf) uni_indicator_pane_stacon_cp01

0x5532,	// (0x000296d0) bg_popup_sub_pane_cp03

0x553c,	// (0x000296da) chi_dic_find_pane

0x5544,	// (0x000296e2) listscroll_chi_dic_pane

0x554d,	// (0x000296eb) main_pane_chidic_g1

0x5560,	// (0x000296fe) chi_dic_find_pane_t1

0x556e,	// (0x0002970c) find_chidic_pane

0x5577,	// (0x00029715) chi_dic_list_pane_ParamLimits

0x5577,	// (0x00029715) chi_dic_list_pane

0x5588,	// (0x00029726) scroll_pane_cp020

0x5590,	// (0x0002972e) find_chidic_pane_t1

0x2ed7,	// (0x00027075) input_focus_pane_cp06

0x559f,	// (0x0002973d) list_chi_dic_pane_ParamLimits

0x559f,	// (0x0002973d) list_chi_dic_pane

0x55b1,	// (0x0002974f) list_chi_dic_pane_t1_ParamLimits

0x55b1,	// (0x0002974f) list_chi_dic_pane_t1

0x2ed7,	// (0x00027075) list_highlight_pane_cp020

0x55c4,	// (0x00029762) bg_cale_heading_pane_g1

0x55cc,	// (0x0002976a) bg_cale_heading_pane_g2

0x55d4,	// (0x00029772) bg_cale_heading_pane_g3

0x55dc,	// (0x0002977a) bg_cale_heading_pane_g4

0x55e6,	// (0x00029784) bg_cale_heading_pane_g5

0x55f0,	// (0x0002978e) bg_cale_heading_pane_g6

0x55f8,	// (0x00029796) bg_cale_heading_pane_g7

0x5600,	// (0x0002979e) bg_cale_heading_pane_g8

0x560a,	// (0x000297a8) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x000334d1) bg_cale_heading_pane_g

0x55c4,	// (0x00029762) bg_cale_side_pane_g1

0x5614,	// (0x000297b2) bg_cale_side_pane_g2

0x561c,	// (0x000297ba) bg_cale_side_pane_g3

0x5624,	// (0x000297c2) bg_cale_side_pane_g4

0x562c,	// (0x000297ca) bg_cale_side_pane_g5

0x5634,	// (0x000297d2) bg_cale_side_pane_g6

0x563c,	// (0x000297da) bg_cale_side_pane_g7

0x5644,	// (0x000297e2) bg_cale_side_pane_g8

0x564c,	// (0x000297ea) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x000334e4) bg_cale_side_pane_g

0x5654,	// (0x000297f2) popup_call_status_window_ParamLimits

0x5654,	// (0x000297f2) popup_call_status_window

0x569d,	// (0x0002983b) stacon_top_pane

0x56a5,	// (0x00029843) status_pane_ParamLimits

0x56a5,	// (0x00029843) status_pane

0x56ba,	// (0x00029858) status_small_pane

0x56c2,	// (0x00029860) control_pane

0x2ed7,	// (0x00027075) stacon_bottom_pane

0x56ca,	// (0x00029868) list_single_mce_smart_pane_t1_ParamLimits

0x56ca,	// (0x00029868) list_single_mce_smart_pane_t1

0x56dd,	// (0x0002987b) list_single_mce_smart_pane_t2_ParamLimits

0x56dd,	// (0x0002987b) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x000334f7) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x000334f7) list_single_mce_smart_pane_t

0x56fc,	// (0x0002989a) compass_pane

0x5705,	// (0x000298a3) main_location2_pane_t1

0x5717,	// (0x000298b5) main_location2_pane_t2

0x5729,	// (0x000298c7) main_location2_pane_t3

0x0003,

0xf35e,	// (0x000334fc) main_location2_pane_t

0x576d,	// (0x0002990b) compass_pane_g1_ParamLimits

0x576d,	// (0x0002990b) compass_pane_g1

0x5779,	// (0x00029917) compass_pane_t1

0x5788,	// (0x00029926) compass_pane_t2

0x0005,

0xf367,	// (0x00033505) compass_pane_t

0x57cf,	// (0x0002996d) text_secondary_cp61

0x584e,	// (0x000299ec) navi_pane_cams_g5

0x58ca,	// (0x00029a68) navi_pane_im_t1

0x58d8,	// (0x00029a76) navi_pane_mp_g1_ParamLimits

0x58d8,	// (0x00029a76) navi_pane_mp_g1

0x58ec,	// (0x00029a8a) navi_pane_mp_g2_ParamLimits

0x58ec,	// (0x00029a8a) navi_pane_mp_g2

0x58f8,	// (0x00029a96) navi_pane_mp_g3_ParamLimits

0x58f8,	// (0x00029a96) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00033519) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00033519) navi_pane_mp_g

0x5904,	// (0x00029aa2) navi_pane_mp_t1

0x5912,	// (0x00029ab0) navi_pane_mp_t2

0x0002,

0xf382,	// (0x00033520) navi_pane_mp_t

0x59bf,	// (0x00029b5d) navi_pane_vt_g1

0x5904,	// (0x00029aa2) navi_pane_vt_t1

0x59c7,	// (0x00029b65) navi_slider_pane

0x3a60,	// (0x00027bfe) zooming_pane

0x59d7,	// (0x00029b75) navi_slider_pane_g1

0xb107,	// (0x0002f2a5) navi_slider_pane_g2

0x0006,

0xf389,	// (0x00033527) navi_slider_pane_g

0x59fb,	// (0x00029b99) aid_levels_zoom

0x5a03,	// (0x00029ba1) zooming_pane_g1

0x5a0b,	// (0x00029ba9) zooming_pane_g2

0x5a0b,	// (0x00029ba9) zooming_pane_g3

0x0002,

0xf398,	// (0x00033536) zooming_pane_g

0x5a13,	// (0x00029bb1) level_10_zoom

0x5a1c,	// (0x00029bba) level_11_zoom

0x5a25,	// (0x00029bc3) level_1_zoom

0x5a2e,	// (0x00029bcc) level_2_zoom

0x5a37,	// (0x00029bd5) level_3_zoom

0x5a40,	// (0x00029bde) level_4_zoom

0x5a49,	// (0x00029be7) level_5_zoom

0x5a52,	// (0x00029bf0) level_6_zoom

0x5a5b,	// (0x00029bf9) level_7_zoom

0x5a64,	// (0x00029c02) level_8_zoom

0x5a6d,	// (0x00029c0b) level_9_zoom

0x5a7e,	// (0x00029c1c) popup_phob_thumbnail_window_g1

0x5a86,	// (0x00029c24) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0003353d) popup_phob_thumbnail_window_g

0x6851,	// (0x0002a9ef) level_1_location

0x6859,	// (0x0002a9f7) level_2_location

0x6861,	// (0x0002a9ff) level_3_location

0x6869,	// (0x0002aa07) level_4_location

0x3a60,	// (0x00027bfe) level_5_location

0x5a8e,	// (0x00029c2c) mce_icon_pane_g1

0x5a98,	// (0x00029c36) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x00033542) mce_icon_pane_g

0x5aa0,	// (0x00029c3e) main_mup_pane_g1_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g1

0x5aa0,	// (0x00029c3e) main_mup_pane_g2_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g2

0x5aa0,	// (0x00029c3e) main_mup_pane_g3_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g3

0x5aa0,	// (0x00029c3e) main_mup_pane_g4_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g4

0x5aa0,	// (0x00029c3e) main_mup_pane_g5_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g5

0x5aa0,	// (0x00029c3e) main_mup_pane_g6_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g6

0x5aa0,	// (0x00029c3e) main_mup_pane_g7_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g7

0x5aa0,	// (0x00029c3e) main_mup_pane_g8_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g8

0x5aa0,	// (0x00029c3e) main_mup_pane_g9_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g9

0x5aa0,	// (0x00029c3e) main_mup_pane_g10_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g10

0x5aa0,	// (0x00029c3e) main_mup_pane_g11_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g11

0x31bb,	// (0x00027359) main_mup_pane_g12_ParamLimits

0x31bb,	// (0x00027359) main_mup_pane_g12

0x5aa0,	// (0x00029c3e) main_mup_pane_g13_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x00033547) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x00033547) main_mup_pane_g

0x5aae,	// (0x00029c4c) main_mup_pane_t1_ParamLimits

0x5aae,	// (0x00029c4c) main_mup_pane_t1

0x5aae,	// (0x00029c4c) main_mup_pane_t2_ParamLimits

0x5aae,	// (0x00029c4c) main_mup_pane_t2

0x5aae,	// (0x00029c4c) main_mup_pane_t3_ParamLimits

0x5aae,	// (0x00029c4c) main_mup_pane_t3

0x3ac9,	// (0x00027c67) main_mup_pane_t4_ParamLimits

0x3ac9,	// (0x00027c67) main_mup_pane_t4

0x3ac9,	// (0x00027c67) main_mup_pane_t5_ParamLimits

0x3ac9,	// (0x00027c67) main_mup_pane_t5

0x5ac2,	// (0x00029c60) main_mup_pane_t6_ParamLimits

0x5ac2,	// (0x00029c60) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x00033562) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x00033562) main_mup_pane_t

0x31ad,	// (0x0002734b) mup_progress_pane_ParamLimits

0x31ad,	// (0x0002734b) mup_progress_pane

0x5ad6,	// (0x00029c74) mup_visualizer_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup_visualizer_pane

0x5ad6,	// (0x00029c74) mup_volume_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup_volume_pane

0x31c9,	// (0x00027367) mup_visualizer_pane_g1_ParamLimits

0x31c9,	// (0x00027367) mup_visualizer_pane_g1

0x5ae4,	// (0x00029c82) mup_visualizer_pane_g2_ParamLimits

0x5ae4,	// (0x00029c82) mup_visualizer_pane_g2

0x31bb,	// (0x00027359) mup_visualizer_pane_g3_ParamLimits

0x31bb,	// (0x00027359) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0003356f) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0003356f) mup_visualizer_pane_g

0x3c4d,	// (0x00027deb) mup_volume_pane_g1

0x3c4d,	// (0x00027deb) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x00033576) mup_volume_pane_g

0x3c4d,	// (0x00027deb) mup_progress_pane_g1

0x3c4d,	// (0x00027deb) mup_progress_pane_g2

0x3c4d,	// (0x00027deb) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0003357b) mup_progress_pane_g

0x2ed7,	// (0x00027075) bg_popup_window_pane_cp05

0x5af2,	// (0x00029c90) heading_pane_cp02_ParamLimits

0x5af2,	// (0x00029c90) heading_pane_cp02

0x5b0c,	// (0x00029caa) list_popup_blid_pane

0x5b14,	// (0x00029cb2) list_blid_sat_info_pane_ParamLimits

0x5b14,	// (0x00029cb2) list_blid_sat_info_pane

0x5b27,	// (0x00029cc5) list_blid_sat_info_pane_g1

0x5b2f,	// (0x00029ccd) list_blid_sat_info_pane_t1

0x5c35,	// (0x00029dd3) mup_equalizer_pane_ParamLimits

0x5c35,	// (0x00029dd3) mup_equalizer_pane

0x5c4e,	// (0x00029dec) mup_equalizer_pane_cp1_ParamLimits

0x5c4e,	// (0x00029dec) mup_equalizer_pane_cp1

0x5c6b,	// (0x00029e09) mup_equalizer_pane_cp2_ParamLimits

0x5c6b,	// (0x00029e09) mup_equalizer_pane_cp2

0x5c88,	// (0x00029e26) mup_equalizer_pane_cp3_ParamLimits

0x5c88,	// (0x00029e26) mup_equalizer_pane_cp3

0x5ca9,	// (0x00029e47) mup_equalizer_pane_cp4_ParamLimits

0x5ca9,	// (0x00029e47) mup_equalizer_pane_cp4

0x5cca,	// (0x00029e68) mup_equalizer_pane_cp5

0x5cde,	// (0x00029e7c) mup_equalizer_pane_cp6

0x5cf2,	// (0x00029e90) mup_equalizer_pane_cp7

0xbfc5,	// (0x00030163) bg_popup_call_poc_act_pane_g9

0xbfcd,	// (0x0003016b) bg_popup_call_poc_act_pane_g10

0xbfd5,	// (0x00030173) bg_popup_call_poc_act_pane_g11

0x000a,

0x3132,	// (0x000272d0) mup_scale_pane

0x314a,	// (0x000272e8) mup_scale_pane_g1

0x5d06,	// (0x00029ea4) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00033597) mup_scale_pane_g

0x5d3c,	// (0x00029eda) msg_data_pane

0x5d44,	// (0x00029ee2) scroll_pane_cp017

0x5d4c,	// (0x00029eea) bg_list_pane_cp04_ParamLimits

0x5d4c,	// (0x00029eea) bg_list_pane_cp04

0x5d6c,	// (0x00029f0a) msg_data_pane_g1

0x5d74,	// (0x00029f12) msg_data_pane_g2

0x5d7e,	// (0x00029f1c) msg_data_pane_g3

0x5d86,	// (0x00029f24) msg_data_pane_g4

0x5d8e,	// (0x00029f2c) msg_data_pane_g5

0x5d96,	// (0x00029f34) msg_data_pane_g6

0x5d9e,	// (0x00029f3c) msg_data_pane_g7

0x0006,

0xf408,	// (0x000335a6) msg_data_pane_g

0x5da6,	// (0x00029f44) msg_text_pane_ParamLimits

0x5da6,	// (0x00029f44) msg_text_pane

0x5dd1,	// (0x00029f6f) qrid_highlight_pane_cp011_ParamLimits

0x5dd1,	// (0x00029f6f) qrid_highlight_pane_cp011

0x2ed7,	// (0x00027075) msg_body_pane

0x2ed7,	// (0x00027075) msg_header_pane

0x5df0,	// (0x00029f8e) input_focus_pane_cp07

0x5e13,	// (0x00029fb1) msg_header_pane_t1_ParamLimits

0x5e13,	// (0x00029fb1) msg_header_pane_t1

0x5e29,	// (0x00029fc7) msg_header_pane_t2_ParamLimits

0x5e29,	// (0x00029fc7) msg_header_pane_t2

0x0001,

0xf41c,	// (0x000335ba) msg_header_pane_t_ParamLimits

0xf41c,	// (0x000335ba) msg_header_pane_t

0x5e40,	// (0x00029fde) msg_body_pane_g1

0x5e48,	// (0x00029fe6) msg_body_pane_t1_ParamLimits

0x5e48,	// (0x00029fe6) msg_body_pane_t1

0x5e79,	// (0x0002a017) msg_body_pane_t2_ParamLimits

0x5e79,	// (0x0002a017) msg_body_pane_t2

0x5e8b,	// (0x0002a029) msg_body_pane_t3_ParamLimits

0x5e8b,	// (0x0002a029) msg_body_pane_t3

0x0002,

0xf421,	// (0x000335bf) msg_body_pane_t_ParamLimits

0xf421,	// (0x000335bf) msg_body_pane_t

0x1a55,	// (0x00025bf3) main_viewer_pane_g1_ParamLimits

0x1a55,	// (0x00025bf3) main_viewer_pane_g1

0x1a63,	// (0x00025c01) main_viewer_pane_g2_ParamLimits

0x1a63,	// (0x00025c01) main_viewer_pane_g2

0x5ebb,	// (0x0002a059) main_viewer_pane_g3_ParamLimits

0x5ebb,	// (0x0002a059) main_viewer_pane_g3

0x5eca,	// (0x0002a068) main_viewer_pane_g4_ParamLimits

0x5eca,	// (0x0002a068) main_viewer_pane_g4

0xb131,	// (0x0002f2cf) main_viewer_pane_g5_ParamLimits

0xb131,	// (0x0002f2cf) main_viewer_pane_g5

0xb131,	// (0x0002f2cf) main_viewer_pane_g7_ParamLimits

0xb131,	// (0x0002f2cf) main_viewer_pane_g7

0x5179,	// (0x00029317) main_viewer_pane_g8_ParamLimits

0x5179,	// (0x00029317) main_viewer_pane_g8

0x0007,

0xf431,	// (0x000335cf) main_viewer_pane_g_ParamLimits

0xf431,	// (0x000335cf) main_viewer_pane_g

0x5ed9,	// (0x0002a077) viewer_content_pane_ParamLimits

0x5ed9,	// (0x0002a077) viewer_content_pane

0x5f14,	// (0x0002a0b2) main_postcard_pane_g1_ParamLimits

0x5f14,	// (0x0002a0b2) main_postcard_pane_g1

0x5f2a,	// (0x0002a0c8) main_postcard_pane_g2_ParamLimits

0x5f2a,	// (0x0002a0c8) main_postcard_pane_g2

0x5f40,	// (0x0002a0de) main_postcard_pane_g3_ParamLimits

0x5f40,	// (0x0002a0de) main_postcard_pane_g3

0x0005,

0xf442,	// (0x000335e0) main_postcard_pane_g_ParamLimits

0xf442,	// (0x000335e0) main_postcard_pane_g

0x5f57,	// (0x0002a0f5) main_postcard_pane_g4

0xc15d,	// (0x000302fb) smil_status_volume_pane_g2

0x5f9a,	// (0x0002a138) postcard_pane_ParamLimits

0x5f9a,	// (0x0002a138) postcard_pane

0x5fdc,	// (0x0002a17a) postcard_pane_g1_ParamLimits

0x5fdc,	// (0x0002a17a) postcard_pane_g1

0x5fea,	// (0x0002a188) postcard_pane_g2_ParamLimits

0x5fea,	// (0x0002a188) postcard_pane_g2

0x5ff6,	// (0x0002a194) postcard_pane_g3_ParamLimits

0x5ff6,	// (0x0002a194) postcard_pane_g3

0x6002,	// (0x0002a1a0) postcard_pane_g4_ParamLimits

0x6002,	// (0x0002a1a0) postcard_pane_g4

0x6010,	// (0x0002a1ae) postcard_pane_g5_ParamLimits

0x6010,	// (0x0002a1ae) postcard_pane_g5

0x6025,	// (0x0002a1c3) postcard_pane_g6_ParamLimits

0x6025,	// (0x0002a1c3) postcard_pane_g6

0x5fdc,	// (0x0002a17a) postcard_pane_g7_ParamLimits

0x5fdc,	// (0x0002a17a) postcard_pane_g7

0x0006,

0xf44f,	// (0x000335ed) postcard_pane_g_ParamLimits

0xf44f,	// (0x000335ed) postcard_pane_g

0x6039,	// (0x0002a1d7) main_mp2_pane_g1_ParamLimits

0x6039,	// (0x0002a1d7) main_mp2_pane_g1

0x6045,	// (0x0002a1e3) main_mp2_pane_g2_ParamLimits

0x6045,	// (0x0002a1e3) main_mp2_pane_g2

0x6051,	// (0x0002a1ef) main_mp2_pane_g3_ParamLimits

0x6051,	// (0x0002a1ef) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x000335fc) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x000335fc) main_mp2_pane_g

0x605d,	// (0x0002a1fb) main_mp2_pane_t1_ParamLimits

0x605d,	// (0x0002a1fb) main_mp2_pane_t1

0x6072,	// (0x0002a210) main_mp2_pane_t2_ParamLimits

0x6072,	// (0x0002a210) main_mp2_pane_t2

0x6084,	// (0x0002a222) main_mp2_pane_t3_ParamLimits

0x6084,	// (0x0002a222) main_mp2_pane_t3

0x0002,

0xf465,	// (0x00033603) main_mp2_pane_t_ParamLimits

0xf465,	// (0x00033603) main_mp2_pane_t

0x6096,	// (0x0002a234) pec_content_pane_ParamLimits

0x6096,	// (0x0002a234) pec_content_pane

0x422c,	// (0x000283ca) scroll_pane_cp015

0x60a8,	// (0x0002a246) pec_attribute_pane_ParamLimits

0x60a8,	// (0x0002a246) pec_attribute_pane

0x60b8,	// (0x0002a256) pec_content_pane_g1_ParamLimits

0x60b8,	// (0x0002a256) pec_content_pane_g1

0x60c4,	// (0x0002a262) pec_content_pane_t1_ParamLimits

0x60c4,	// (0x0002a262) pec_content_pane_t1

0x60d6,	// (0x0002a274) pec_content_pane_t2_ParamLimits

0x60d6,	// (0x0002a274) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0003360a) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0003360a) pec_content_pane_t

0x60e8,	// (0x0002a286) list_single_graphic_pane_cp01_ParamLimits

0x60e8,	// (0x0002a286) list_single_graphic_pane_cp01

0x3132,	// (0x000272d0) bg_popup_sub_pane_cp04

0x60fd,	// (0x0002a29b) popup_mup_playback_window_g1

0x6109,	// (0x0002a2a7) popup_mup_playback_window_t1

0x611e,	// (0x0002a2bc) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0003360f) popup_mup_playback_window_t

0x6173,	// (0x0002a311) main_image_pane_g1_ParamLimits

0x6173,	// (0x0002a311) main_image_pane_g1

0x6250,	// (0x0002a3ee) scroll_pane_cp018_ParamLimits

0x6250,	// (0x0002a3ee) scroll_pane_cp018

0x6268,	// (0x0002a406) scroll_pane_cp016_ParamLimits

0x6268,	// (0x0002a406) scroll_pane_cp016

0x629c,	// (0x0002a43a) smil2_image_pane_ParamLimits

0x629c,	// (0x0002a43a) smil2_image_pane

0x62cc,	// (0x0002a46a) smil2_root_pane_ParamLimits

0x62cc,	// (0x0002a46a) smil2_root_pane

0x6304,	// (0x0002a4a2) smil2_text_pane_ParamLimits

0x6304,	// (0x0002a4a2) smil2_text_pane

0x2ed7,	// (0x00027075) bg_list_pane_cp06

0x638c,	// (0x0002a52a) grid_radio_pane

0x2ed7,	// (0x00027075) bg_popup_window_pane_cp06

0x6394,	// (0x0002a532) main_fmradio_pane_t1

0xbfdd,	// (0x0003017b) heading_pane_cp04

0x63a2,	// (0x0002a540) main_fmradio_pane_t2

0xbfe5,	// (0x00030183) popup_cale_lunar_info_window_g1

0x63b0,	// (0x0002a54e) main_fmradio_pane_t3

0xbfed,	// (0x0003018b) popup_cale_lunar_info_window_g2

0x63be,	// (0x0002a55c) main_fmradio_pane_t4

0x0001,

0x63cc,	// (0x0002a56a) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x000336ef) popup_cale_lunar_info_window_g

0xf486,	// (0x00033624) main_fmradio_pane_t

0x63da,	// (0x0002a578) wait_bar_pane_cp03

0x63e2,	// (0x0002a580) cell_fmradio_pane_ParamLimits

0x63e2,	// (0x0002a580) cell_fmradio_pane

0x5fdc,	// (0x0002a17a) cell_fmradio_pane_g1_ParamLimits

0x5fdc,	// (0x0002a17a) cell_fmradio_pane_g1

0x2ed7,	// (0x00027075) grid_highlight_pane_cp011

0x63f5,	// (0x0002a593) poc_content_pane_ParamLimits

0x63f5,	// (0x0002a593) poc_content_pane

0x6407,	// (0x0002a5a5) scroll_pane_cp019

0x640f,	// (0x0002a5ad) popup_call_poc_act_window_ParamLimits

0x640f,	// (0x0002a5ad) popup_call_poc_act_window

0x6433,	// (0x0002a5d1) popup_call_poc_inact_window_ParamLimits

0x6433,	// (0x0002a5d1) popup_call_poc_inact_window

0xf528,	// (0x000336c6) bg_popup_call_poc_act_pane_g

0xbf55,	// (0x000300f3) bg_popup_call_poc_inact_pane_g1

0xbf5d,	// (0x000300fb) bg_popup_call_poc_inact_pane_g2

0x644c,	// (0x0002a5ea) popup_call_poc_act_window_g2

0xbf65,	// (0x00030103) bg_popup_call_poc_inact_pane_g3

0xbf6d,	// (0x0003010b) bg_popup_call_poc_inact_pane_g4

0xbf75,	// (0x00030113) bg_popup_call_poc_inact_pane_g5

0x6454,	// (0x0002a5f2) popup_call_poc_act_window_t1_ParamLimits

0x6454,	// (0x0002a5f2) popup_call_poc_act_window_t1

0x647c,	// (0x0002a61a) popup_call_poc_act_window_t2_ParamLimits

0x647c,	// (0x0002a61a) popup_call_poc_act_window_t2

0x64a4,	// (0x0002a642) popup_call_poc_act_window_t3_ParamLimits

0x64a4,	// (0x0002a642) popup_call_poc_act_window_t3

0xb14f,	// (0x0002f2ed) popup_call_poc_act_window_t4_ParamLimits

0xb14f,	// (0x0002f2ed) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0003362f) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0003362f) popup_call_poc_act_window_t

0xbf7d,	// (0x0003011b) bg_popup_call_poc_inact_pane_g6

0xbf85,	// (0x00030123) bg_popup_call_poc_inact_pane_g7

0xbf8d,	// (0x0003012b) bg_popup_call_poc_inact_pane_g8

0xb161,	// (0x0002f2ff) popup_call_poc_inact_window_g2

0xbf95,	// (0x00030133) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x000336b3) bg_popup_call_poc_inact_pane_g

0xb169,	// (0x0002f307) popup_call_poc_inact_window_t1_ParamLimits

0xb169,	// (0x0002f307) popup_call_poc_inact_window_t1

0xb17e,	// (0x0002f31c) popup_call_poc_inact_window_t2_ParamLimits

0xb17e,	// (0x0002f31c) popup_call_poc_inact_window_t2

0xb193,	// (0x0002f331) popup_call_poc_inact_window_t3_ParamLimits

0xb193,	// (0x0002f331) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x00033638) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x00033638) popup_call_poc_inact_window_t

0xc0d5,	// (0x00030273) context_pane_ParamLimits

0x6a79,	// (0x0002ac17) signal_pane_ParamLimits

0x3a60,	// (0x00027bfe) main_call2_pane

0xc0ae,	// (0x0003024c) popup_phob_thumbnail2_window_ParamLimits

0xc0ae,	// (0x0003024c) popup_phob_thumbnail2_window

0xb119,	// (0x0002f2b7) aid_hotspot_pointer_arrow_pane

0xb121,	// (0x0002f2bf) aid_hotspot_pointer_hand_pane

0x681b,	// (0x0002a9b9) phob_pre_status_pane_g5

0x3154,	// (0x000272f2) cams_zoom_pane_ParamLimits

0x3154,	// (0x000272f2) image_vga_pane_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g1_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g2_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g3_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g4_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g5_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g6_ParamLimits

0x31bb,	// (0x00027359) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00033363) main_camera_pane_g_ParamLimits

0x3ac9,	// (0x00027c67) main_camera_pane_t1_ParamLimits

0x3ac9,	// (0x00027c67) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00033374) main_camera_pane_t_ParamLimits

0x3132,	// (0x000272d0) bg_popup_preview_window_pane_cp01_ParamLimits

0x3132,	// (0x000272d0) bg_popup_preview_window_pane_cp01

0xb1a8,	// (0x0002f346) popup_phob_thumbnail2_window_g1_ParamLimits

0xb1a8,	// (0x0002f346) popup_phob_thumbnail2_window_g1

0x2ed7,	// (0x00027075) call2_cli_visual_pane

0x64e7,	// (0x0002a685) popup_call2_audio_conf_window_ParamLimits

0x64e7,	// (0x0002a685) popup_call2_audio_conf_window

0x6507,	// (0x0002a6a5) popup_call2_audio_first_window_ParamLimits

0x6507,	// (0x0002a6a5) popup_call2_audio_first_window

0x659d,	// (0x0002a73b) popup_call2_audio_in_window_ParamLimits

0x659d,	// (0x0002a73b) popup_call2_audio_in_window

0x65e5,	// (0x0002a783) popup_call2_audio_out_window_ParamLimits

0x65e5,	// (0x0002a783) popup_call2_audio_out_window

0x664f,	// (0x0002a7ed) popup_call2_audio_second_window_ParamLimits

0x664f,	// (0x0002a7ed) popup_call2_audio_second_window

0x66b5,	// (0x0002a853) popup_call2_audio_wait_window_ParamLimits

0x66b5,	// (0x0002a853) popup_call2_audio_wait_window

0x2ed7,	// (0x00027075) bg_popup_call2_act_pane_cp03

0x3114,	// (0x000272b2) list_conf_pane_cp

0xb1b4,	// (0x0002f352) popup_call2_audio_conf_window_t1

0x545f,	// (0x000295fd) list_single_graphic_popup_conf2_pane_ParamLimits

0x545f,	// (0x000295fd) list_single_graphic_popup_conf2_pane

0x5472,	// (0x00029610) list_highlight_pane_cp04

0xb1c2,	// (0x0002f360) list_single_graphic_popup_conf2_pane_g1

0x5483,	// (0x00029621) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0003363f) list_single_graphic_popup_conf2_pane_g

0xb1cc,	// (0x0002f36a) list_single_graphic_popup_conf2_pane_t1

0xb1da,	// (0x0002f378) bg_popup_call2_act_pane_cp01_ParamLimits

0xb1da,	// (0x0002f378) bg_popup_call2_act_pane_cp01

0xb264,	// (0x0002f402) call_type_pane_cp05_ParamLimits

0xb264,	// (0x0002f402) call_type_pane_cp05

0xb2b8,	// (0x0002f456) popup_call2_audio_second_window_g1_ParamLimits

0xb2b8,	// (0x0002f456) popup_call2_audio_second_window_g1

0xb30c,	// (0x0002f4aa) popup_call2_audio_second_window_g2_ParamLimits

0xb30c,	// (0x0002f4aa) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x00033644) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x00033644) popup_call2_audio_second_window_g

0xb371,	// (0x0002f50f) popup_call2_audio_second_window_t1_ParamLimits

0xb371,	// (0x0002f50f) popup_call2_audio_second_window_t1

0xb42c,	// (0x0002f5ca) popup_call2_audio_second_window_t2_ParamLimits

0xb42c,	// (0x0002f5ca) popup_call2_audio_second_window_t2

0xb47f,	// (0x0002f61d) popup_call2_audio_second_window_t3_ParamLimits

0xb47f,	// (0x0002f61d) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0003364b) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0003364b) popup_call2_audio_second_window_t

0x2ed7,	// (0x00027075) bg_popup_call2_in_pane_cp02

0x2ee1,	// (0x0002707f) call_type_pane_cp04

0x66ef,	// (0x0002a88d) popup_call2_audio_wait_window_g1

0x66f7,	// (0x0002a895) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x00033654) popup_call2_audio_wait_window_g

0x2ef9,	// (0x00027097) popup_call2_audio_wait_window_t3

0xb572,	// (0x0002f710) bg_popup_call2_act_pane_ParamLimits

0xb572,	// (0x0002f710) bg_popup_call2_act_pane

0xb632,	// (0x0002f7d0) call_type_pane_cp03_ParamLimits

0xb632,	// (0x0002f7d0) call_type_pane_cp03

0xb696,	// (0x0002f834) popup_call2_audio_first_window_g1_ParamLimits

0xb696,	// (0x0002f834) popup_call2_audio_first_window_g1

0xb706,	// (0x0002f8a4) popup_call2_audio_first_window_g2_ParamLimits

0xb706,	// (0x0002f8a4) popup_call2_audio_first_window_g2

0xb76a,	// (0x0002f908) popup_call2_audio_first_window_g3_ParamLimits

0xb76a,	// (0x0002f908) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x00033659) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x00033659) popup_call2_audio_first_window_g

0xb7f2,	// (0x0002f990) popup_call2_audio_first_window_t1_ParamLimits

0xb7f2,	// (0x0002f990) popup_call2_audio_first_window_t1

0xb8f5,	// (0x0002fa93) popup_call2_audio_first_window_t4_ParamLimits

0xb8f5,	// (0x0002fa93) popup_call2_audio_first_window_t4

0xb9d8,	// (0x0002fb76) popup_call2_audio_first_window_t5_ParamLimits

0xb9d8,	// (0x0002fb76) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x00033664) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x00033664) popup_call2_audio_first_window_t

0x312a,	// (0x000272c8) bg_popup_call2_act_pane_g1

0xbff5,	// (0x00030193) popup_cale_lunar_info_window_t1

0xc003,	// (0x000301a1) popup_cale_lunar_info_window_t2

0xc011,	// (0x000301af) popup_cale_lunar_info_window_t3

0x2ed7,	// (0x00027075) bg_popup_call2_bubble_pane

0xbad9,	// (0x0002fc77) bg_popup_call2_in_pane_cp01_ParamLimits

0xbad9,	// (0x0002fc77) bg_popup_call2_in_pane_cp01

0x2b8f,	// (0x00026d2d) call_type_pane_cp02

0x66ff,	// (0x0002a89d) popup_call2_audio_out_window_g1_ParamLimits

0x66ff,	// (0x0002a89d) popup_call2_audio_out_window_g1

0xbb21,	// (0x0002fcbf) popup_call2_audio_out_window_g2_ParamLimits

0xbb21,	// (0x0002fcbf) popup_call2_audio_out_window_g2

0x672b,	// (0x0002a8c9) popup_call2_audio_out_window_g3_ParamLimits

0x672b,	// (0x0002a8c9) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0003366d) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0003366d) popup_call2_audio_out_window_g

0xbb58,	// (0x0002fcf6) popup_call2_audio_out_window_t1_ParamLimits

0xbb58,	// (0x0002fcf6) popup_call2_audio_out_window_t1

0xbbb7,	// (0x0002fd55) popup_call2_audio_out_window_t2_ParamLimits

0xbbb7,	// (0x0002fd55) popup_call2_audio_out_window_t2

0xbc0b,	// (0x0002fda9) popup_call2_audio_out_window_t3_ParamLimits

0xbc0b,	// (0x0002fda9) popup_call2_audio_out_window_t3

0xbc21,	// (0x0002fdbf) popup_call2_audio_out_window_t4_ParamLimits

0xbc21,	// (0x0002fdbf) popup_call2_audio_out_window_t4

0xbc37,	// (0x0002fdd5) popup_call2_audio_out_window_t5_ParamLimits

0xbc37,	// (0x0002fdd5) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x00033676) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x00033676) popup_call2_audio_out_window_t

0xbc9b,	// (0x0002fe39) bg_popup_call2_in_pane_ParamLimits

0xbc9b,	// (0x0002fe39) bg_popup_call2_in_pane

0xbcf7,	// (0x0002fe95) popup_call2_audio_in_window_g1_ParamLimits

0xbcf7,	// (0x0002fe95) popup_call2_audio_in_window_g1

0xbd2f,	// (0x0002fecd) popup_call2_audio_in_window_g2_ParamLimits

0xbd2f,	// (0x0002fecd) popup_call2_audio_in_window_g2

0xbd67,	// (0x0002ff05) popup_call2_audio_in_window_g3_ParamLimits

0xbd67,	// (0x0002ff05) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x00033683) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x00033683) popup_call2_audio_in_window_g

0xbdbf,	// (0x0002ff5d) popup_call2_audio_in_window_t1_ParamLimits

0xbdbf,	// (0x0002ff5d) popup_call2_audio_in_window_t1

0xbe3f,	// (0x0002ffdd) popup_call2_audio_in_window_t2_ParamLimits

0xbe3f,	// (0x0002ffdd) popup_call2_audio_in_window_t2

0xbebf,	// (0x0003005d) popup_call2_audio_in_window_t3_ParamLimits

0xbebf,	// (0x0003005d) popup_call2_audio_in_window_t3

0xbed9,	// (0x00030077) popup_call2_audio_in_window_t4_ParamLimits

0xbed9,	// (0x00030077) popup_call2_audio_in_window_t4

0xbeeb,	// (0x00030089) popup_call2_audio_in_window_t5_ParamLimits

0xbeeb,	// (0x00030089) popup_call2_audio_in_window_t5

0xbf00,	// (0x0003009e) popup_call2_audio_in_window_t6_ParamLimits

0xbf00,	// (0x0003009e) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0003368c) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0003368c) popup_call2_audio_in_window_t

0x312a,	// (0x000272c8) bg_popup_call2_in_pane_g1

0xc01f,	// (0x000301bd) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x000336f4) popup_cale_lunar_info_window_t

0x3132,	// (0x000272d0) bg_popup_call2_rect_pane_ParamLimits

0x3132,	// (0x000272d0) bg_popup_call2_rect_pane

0x2ed7,	// (0x00027075) call2_cli_visual_graphic_pane

0x2ed7,	// (0x00027075) call2_cli_visual_text_pane

0xc170,	// (0x0003030e) smil_status_volume_pane_g3

0x0002,

0x314a,	// (0x000272e8) call2_cli_visual_graphic_pane_g1

0x314a,	// (0x000272e8) call2_cli_visual_graphic_pane_g2

0x314a,	// (0x000272e8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00033699) call2_cli_visual_graphic_pane_g

0xbf15,	// (0x000300b3) bg_popup_call2_rect_pane_g1

0x34bd,	// (0x0002765b) bg_popup_call2_rect_pane_g2

0xbf1d,	// (0x000300bb) bg_popup_call2_rect_pane_g3

0xbf25,	// (0x000300c3) bg_popup_call2_rect_pane_g4

0xbf2d,	// (0x000300cb) bg_popup_call2_rect_pane_g5

0xbf35,	// (0x000300d3) bg_popup_call2_rect_pane_g6

0xbf3d,	// (0x000300db) bg_popup_call2_rect_pane_g7

0xbf45,	// (0x000300e3) bg_popup_call2_rect_pane_g8

0xbf4d,	// (0x000300eb) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x000336a0) bg_popup_call2_rect_pane_g

0xbf55,	// (0x000300f3) bg_popup_call2_bubble_pane_g1

0xbf5d,	// (0x000300fb) bg_popup_call2_bubble_pane_g2

0xbf65,	// (0x00030103) bg_popup_call2_bubble_pane_g3

0xbf6d,	// (0x0003010b) bg_popup_call2_bubble_pane_g4

0xbf75,	// (0x00030113) bg_popup_call2_bubble_pane_g5

0xbf7d,	// (0x0003011b) bg_popup_call2_bubble_pane_g6

0xbf85,	// (0x00030123) bg_popup_call2_bubble_pane_g7

0xbf8d,	// (0x0003012b) bg_popup_call2_bubble_pane_g8

0xbf95,	// (0x00030133) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x000336b3) bg_popup_call2_bubble_pane_g

0x354d,	// (0x000276eb) aid_cale_week_size_cell_pane

0x3add,	// (0x00027c7b) aid_cams_cif_uncrop_pane_ParamLimits

0x3add,	// (0x00027c7b) aid_cams_cif_uncrop_pane

0x3c57,	// (0x00027df5) aid_cams_size_cell_ParamLimits

0x3c57,	// (0x00027df5) aid_cams_size_cell

0x3c6b,	// (0x00027e09) grid_cams_pane_ParamLimits

0x3c85,	// (0x00027e23) linegrid_cams_pane_ParamLimits

0x3dbb,	// (0x00027f59) call_video_pane_t1

0x3dd9,	// (0x00027f77) call_video_pane_t2

0x0001,

0xf222,	// (0x000333c0) call_video_pane_t

0x446b,	// (0x00028609) aid_cale_month_size_cell_pane_ParamLimits

0x446b,	// (0x00028609) aid_cale_month_size_cell_pane

0xf59a,	// (0x00033738) smil_status_volume_pane_g

0xc17d,	// (0x0003031b) volume_smil_pane_ParamLimits

0xaf4d,	// (0x0002f0eb) aid_popup2_width_pane

0x3415,	// (0x000275b3) cell_qdial_pane_g4_ParamLimits

0x3415,	// (0x000275b3) cell_qdial_pane_g4

0x574d,	// (0x000298eb) aid_blid_cardinal_pane_ParamLimits

0x5759,	// (0x000298f7) aid_blid_destination_pane_ParamLimits

0x5759,	// (0x000298f7) aid_blid_destination_pane

0x3132,	// (0x000272d0) bg_popup_call_poc_act_pane_ParamLimits

0x3132,	// (0x000272d0) bg_popup_call_poc_act_pane

0x3132,	// (0x000272d0) bg_popup_call_poc_inact_pane_ParamLimits

0x3132,	// (0x000272d0) bg_popup_call_poc_inact_pane

0xbf9d,	// (0x0003013b) bg_popup_call_poc_act_pane_g1

0xbfa5,	// (0x00030143) bg_popup_call_poc_act_pane_g2

0xbfad,	// (0x0003014b) bg_popup_call_poc_act_pane_g3

0xbf6d,	// (0x0003010b) bg_popup_call_poc_act_pane_g4

0xbf75,	// (0x00030113) bg_popup_call_poc_act_pane_g5

0xbfb5,	// (0x00030153) bg_popup_call_poc_act_pane_g6

0xbf85,	// (0x00030123) bg_popup_call_poc_act_pane_g7

0xbfbd,	// (0x0003015b) bg_popup_call_poc_act_pane_g8

0x2ed7,	// (0x00027075) main_usb_pane

0xc089,	// (0x00030227) popup_cale_lunar_info_window

0x4113,	// (0x000282b1) im_reading_pane_t1_ParamLimits

0x414c,	// (0x000282ea) list_im_pane_ParamLimits

0x415d,	// (0x000282fb) scroll_pane_cp07_ParamLimits

0x2ed7,	// (0x00027075) grid_highlight_pane_cp012

0x3132,	// (0x000272d0) mup_scale_pane_ParamLimits

0x5fdc,	// (0x0002a17a) main_usb_pane_g1_ParamLimits

0x5fdc,	// (0x0002a17a) main_usb_pane_g1

0x6779,	// (0x0002a917) main_usb_pane_g2_ParamLimits

0x6779,	// (0x0002a917) main_usb_pane_g2

0x0001,

0xf53f,	// (0x000336dd) main_usb_pane_g_ParamLimits

0xf53f,	// (0x000336dd) main_usb_pane_g

0x678f,	// (0x0002a92d) main_usb_pane_t1_ParamLimits

0x678f,	// (0x0002a92d) main_usb_pane_t1

0x67a1,	// (0x0002a93f) main_usb_pane_t2_ParamLimits

0x67a1,	// (0x0002a93f) main_usb_pane_t2

0x67b3,	// (0x0002a951) main_usb_pane_t3_ParamLimits

0x67b3,	// (0x0002a951) main_usb_pane_t3

0x67c5,	// (0x0002a963) main_usb_pane_t4_ParamLimits

0x67c5,	// (0x0002a963) main_usb_pane_t4

0x67d7,	// (0x0002a975) main_usb_pane_t5_ParamLimits

0x67d7,	// (0x0002a975) main_usb_pane_t5

0x67e9,	// (0x0002a987) main_usb_pane_t6_ParamLimits

0x67e9,	// (0x0002a987) main_usb_pane_t6

0x0005,

0xf544,	// (0x000336e2) main_usb_pane_t_ParamLimits

0x56fc,	// (0x0002989a) aid_text_placing

0x5705,	// (0x000298a3) main_location2_pane_t1_ParamLimits

0x5717,	// (0x000298b5) main_location2_pane_t2_ParamLimits

0x5729,	// (0x000298c7) main_location2_pane_t3_ParamLimits

0x573b,	// (0x000298d9) main_location2_pane_t4_ParamLimits

0x573b,	// (0x000298d9) main_location2_pane_t4

0xf35e,	// (0x000334fc) main_location2_pane_t_ParamLimits

0x316e,	// (0x0002730c) find_pinb_pane_g2_ParamLimits

0x316e,	// (0x0002730c) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00033278) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00033278) find_pinb_pane_g

0x317a,	// (0x00027318) find_pinb_pane_t1_ParamLimits

0x318c,	// (0x0002732a) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0003327d) find_pinb_pane_t_ParamLimits

0x2ed7,	// (0x00027075) main_call3_pane

0x4995,	// (0x00028b33) cale_month_day_heading_pane_t1_ParamLimits

0x4a1b,	// (0x00028bb9) cale_month_day_heading_pane_t2_ParamLimits

0x4a94,	// (0x00028c32) cale_month_day_heading_pane_t3_ParamLimits

0x4b0d,	// (0x00028cab) cale_month_day_heading_pane_t4_ParamLimits

0x4b8e,	// (0x00028d2c) cale_month_day_heading_pane_t5_ParamLimits

0x4c17,	// (0x00028db5) cale_month_day_heading_pane_t6_ParamLimits

0x4ca0,	// (0x00028e3e) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x000333f8) cale_month_day_heading_pane_t_ParamLimits

0x4f20,	// (0x000290be) smil_status_volume_pane

0x5fb8,	// (0x0002a156) postcard_address_pane_ParamLimits

0x5fb8,	// (0x0002a156) postcard_address_pane

0x5fca,	// (0x0002a168) postcard_message_pane_ParamLimits

0x5fca,	// (0x0002a168) postcard_message_pane

0x6757,	// (0x0002a8f5) call2_cli_visual_pane_t1_ParamLimits

0x6757,	// (0x0002a8f5) call2_cli_visual_pane_t1

0xc1aa,	// (0x00030348) postcard_message_pane_t1_ParamLimits

0xc1aa,	// (0x00030348) postcard_message_pane_t1

0xc192,	// (0x00030330) postcard_address_pane_t1_ParamLimits

0xc192,	// (0x00030330) postcard_address_pane_t1

0x6c2b,	// (0x0002adc9) popup_call3_audio_in_window_ParamLimits

0x6c2b,	// (0x0002adc9) popup_call3_audio_in_window

0x6ab6,	// (0x0002ac54) bg_popup_call3_in_pane_ParamLimits

0x6ab6,	// (0x0002ac54) bg_popup_call3_in_pane

0x6b2c,	// (0x0002acca) popup_call3_audio_in_window_g1_ParamLimits

0x6b2c,	// (0x0002acca) popup_call3_audio_in_window_g1

0x6b4c,	// (0x0002acea) popup_call3_audio_in_window_g2_ParamLimits

0x6b4c,	// (0x0002acea) popup_call3_audio_in_window_g2

0x6b6c,	// (0x0002ad0a) popup_call3_audio_in_window_g3_ParamLimits

0x6b6c,	// (0x0002ad0a) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x0003373f) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x0003373f) popup_call3_audio_in_window_g

0x6b9d,	// (0x0002ad3b) popup_call3_audio_in_window_t1_ParamLimits

0x6b9d,	// (0x0002ad3b) popup_call3_audio_in_window_t1

0x6bdb,	// (0x0002ad79) popup_call3_audio_in_window_t2_ParamLimits

0x6bdb,	// (0x0002ad79) popup_call3_audio_in_window_t2

0x6c19,	// (0x0002adb7) popup_call3_audio_in_window_t3_ParamLimits

0x6c19,	// (0x0002adb7) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x00033748) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x00033748) popup_call3_audio_in_window_t

0x3a60,	// (0x00027bfe) bg_popup_call3_rect_pane

0xbf15,	// (0x000300b3) bg_popup_call3_rect_pane_g1

0x34bd,	// (0x0002765b) bg_popup_call3_rect_pane_g2

0xbf1d,	// (0x000300bb) bg_popup_call3_rect_pane_g3

0xbf25,	// (0x000300c3) bg_popup_call3_rect_pane_g4

0xbf2d,	// (0x000300cb) bg_popup_call3_rect_pane_g5

0xbf35,	// (0x000300d3) bg_popup_call3_rect_pane_g6

0xbf3d,	// (0x000300db) bg_popup_call3_rect_pane_g7

0x2a1d,	// (0x00026bbb) mup_visualizer_osc_pane

0x2a1d,	// (0x00026bbb) mup_visualizer_spec_pane

0x6ae6,	// (0x0002ac84) call3_video_qcif_pane_ParamLimits

0x6ae6,	// (0x0002ac84) call3_video_qcif_pane

0x6af9,	// (0x0002ac97) call3_video_qcif_uncrop_pane_ParamLimits

0x6af9,	// (0x0002ac97) call3_video_qcif_uncrop_pane

0x6b07,	// (0x0002aca5) call3_video_subqcif_pane_ParamLimits

0x6b07,	// (0x0002aca5) call3_video_subqcif_pane

0x6b1b,	// (0x0002acb9) call3_video_subqcif_uncrop_pane_ParamLimits

0x6b1b,	// (0x0002acb9) call3_video_subqcif_uncrop_pane

0x6b8c,	// (0x0002ad2a) popup_call3_audio_in_window_g4_ParamLimits

0x6b8c,	// (0x0002ad2a) popup_call3_audio_in_window_g4

0x2a1d,	// (0x00026bbb) mup_spec_half_pane

0x2a1d,	// (0x00026bbb) mup_spec_half_pane_cp

0x2a1d,	// (0x00026bbb) mup_osc_middle_pane

0x3c4d,	// (0x00027deb) mup_visualizer_osc_pane_g1

0xc123,	// (0x000302c1) mup_spec_bar_pane_ParamLimits

0xc123,	// (0x000302c1) mup_spec_bar_pane

0x3c4d,	// (0x00027deb) mup_spec_bar_pane_g1

0x3c4d,	// (0x00027deb) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x00033576) mup_spec_bar_pane_g

0x354d,	// (0x000276eb) aid_cale_week_size_cell_pane_ParamLimits

0x3567,	// (0x00027705) bg_cale_heading_pane_ParamLimits

0x357f,	// (0x0002771d) bg_cale_pane_cp01_ParamLimits

0x359c,	// (0x0002773a) cale_week_corner_pane_ParamLimits

0x35bb,	// (0x00027759) cale_week_day_heading_pane_ParamLimits

0x35d8,	// (0x00027776) cale_week_scroll_pane_g1_ParamLimits

0x35eb,	// (0x00027789) cale_week_scroll_pane_g2_ParamLimits

0x3603,	// (0x000277a1) cale_week_scroll_pane_g3_ParamLimits

0x361b,	// (0x000277b9) cale_week_scroll_pane_g4_ParamLimits

0x3633,	// (0x000277d1) cale_week_scroll_pane_g5_ParamLimits

0x3653,	// (0x000277f1) cale_week_scroll_pane_g6_ParamLimits

0x3673,	// (0x00027811) cale_week_scroll_pane_g7_ParamLimits

0x3693,	// (0x00027831) cale_week_scroll_pane_g8_ParamLimits

0x36b7,	// (0x00027855) cale_week_scroll_pane_g9_ParamLimits

0x36cf,	// (0x0002786d) cale_week_scroll_pane_g10_ParamLimits

0x36e7,	// (0x00027885) cale_week_scroll_pane_g11_ParamLimits

0x36ff,	// (0x0002789d) cale_week_scroll_pane_g12_ParamLimits

0x3717,	// (0x000278b5) cale_week_scroll_pane_g13_ParamLimits

0x3717,	// (0x000278b5) cale_week_scroll_pane_g14_ParamLimits

0x3717,	// (0x000278b5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00033309) cale_week_scroll_pane_g_ParamLimits

0x3753,	// (0x000278f1) cale_week_time_pane_ParamLimits

0x3777,	// (0x00027915) grid_cale_week_pane_ParamLimits

0x379d,	// (0x0002793b) listscroll_cale_week_pane_t1

0x37af,	// (0x0002794d) scroll_pane_cp08_ParamLimits

0x44f8,	// (0x00028696) cale_month_corner_pane_ParamLimits

0x4916,	// (0x00028ab4) cale_month_pane_t1

0x4928,	// (0x00028ac6) cale_month_week_pane_ParamLimits

0x536e,	// (0x0002950c) popup_call_status_window_g1_ParamLimits

0x5382,	// (0x00029520) popup_call_status_window_g2_ParamLimits

0x5396,	// (0x00029534) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00033483) popup_call_status_window_g_ParamLimits

0x53fe,	// (0x0002959c) aid_call2_pane

0x5df9,	// (0x00029f97) msg_header_pane_g1

0x5fb8,	// (0x0002a156) postcard_address2_pane_ParamLimits

0x5fb8,	// (0x0002a156) postcard_address2_pane

0x5fca,	// (0x0002a168) postcard_message2_pane_ParamLimits

0x5fca,	// (0x0002a168) postcard_message2_pane

0x6a87,	// (0x0002ac25) message2_row_pane_ParamLimits

0x6a87,	// (0x0002ac25) message2_row_pane

0x6aa3,	// (0x0002ac41) address2_row_pane_ParamLimits

0x6aa3,	// (0x0002ac41) address2_row_pane

0xc0f0,	// (0x0003028e) postcard_message2_row_pane_g1

0xc0f8,	// (0x00030296) postcard_message2_row_pane_t1

0xc0f0,	// (0x0003028e) address2_row_pane_g1

0xc0f8,	// (0x00030296) address2_row_pane_t1

0x3a58,	// (0x00027bf6) aid_size_cell_vorec

0x2ed7,	// (0x00027075) main_rss_pane

0xc106,	// (0x000302a4) rss_list_single_pane_ParamLimits

0xc106,	// (0x000302a4) rss_list_single_pane

0xc114,	// (0x000302b2) rss_list_single_pane_t1

0xc114,	// (0x000302b2) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x00033733) rss_list_single_pane_t

0x2ed7,	// (0x00027075) main_camera2_pane

0x2ed7,	// (0x00027075) main_video2_pane

0xc1c6,	// (0x00030364) cams_zoom_pane_cp2_ParamLimits

0xc1c6,	// (0x00030364) cams_zoom_pane_cp2

0xc1c6,	// (0x00030364) image2_vga_pane_ParamLimits

0xc1c6,	// (0x00030364) image2_vga_pane

0xc1d4,	// (0x00030372) main_camera2_pane_g1_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g1

0xc1d4,	// (0x00030372) main_camera2_pane_g2_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g2

0xc1d4,	// (0x00030372) main_camera2_pane_g3_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g3

0xc1d4,	// (0x00030372) main_camera2_pane_g4_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g4

0xc1d4,	// (0x00030372) main_camera2_pane_g5_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g5

0xc1d4,	// (0x00030372) main_camera2_pane_g6_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g6

0xc1d4,	// (0x00030372) main_camera2_pane_g7_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g7

0xc1d4,	// (0x00030372) main_camera2_pane_g8_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0003374f) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0003374f) main_camera2_pane_g

0x1d47,	// (0x00025ee5) main_camera2_pane_t1_ParamLimits

0x1d47,	// (0x00025ee5) main_camera2_pane_t1

0x1d47,	// (0x00025ee5) main_camera2_pane_t2_ParamLimits

0x1d47,	// (0x00025ee5) main_camera2_pane_t2

0x1d47,	// (0x00025ee5) main_camera2_pane_t3_ParamLimits

0x1d47,	// (0x00025ee5) main_camera2_pane_t3

0x1d47,	// (0x00025ee5) main_camera2_pane_t4_ParamLimits

0x1d47,	// (0x00025ee5) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x00033762) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x00033762) main_camera2_pane_t

0xc218,	// (0x000303b6) cams_zoom_pane_cp4_ParamLimits

0xc218,	// (0x000303b6) cams_zoom_pane_cp4

0x1d5b,	// (0x00025ef9) image2_cif_pane_ParamLimits

0x1d5b,	// (0x00025ef9) image2_cif_pane

0xafaa,	// (0x0002f148) image2_subqcif_pane_ParamLimits

0xafaa,	// (0x0002f148) image2_subqcif_pane

0x1d69,	// (0x00025f07) main_video2_pane_g1_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g1

0x1d69,	// (0x00025f07) main_video2_pane_g2_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g2

0x1d69,	// (0x00025f07) main_video2_pane_g3_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g3

0x1d69,	// (0x00025f07) main_video2_pane_g4_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g4

0x1d69,	// (0x00025f07) main_video2_pane_g5_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g5

0x1d69,	// (0x00025f07) main_video2_pane_g6_ParamLimits

0x1d69,	// (0x00025f07) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x00033771) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x00033771) main_video2_pane_g

0x1d77,	// (0x00025f15) main_video2_pane_t1_ParamLimits

0x1d77,	// (0x00025f15) main_video2_pane_t1

0x1d77,	// (0x00025f15) main_video2_pane_t2_ParamLimits

0x1d77,	// (0x00025f15) main_video2_pane_t2

0x1d77,	// (0x00025f15) main_video2_pane_t3_ParamLimits

0x1d77,	// (0x00025f15) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0003377e) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0003377e) main_video2_pane_t

0x687d,	// (0x0002aa1b) call_muted_g2

0x0001,

0xf587,	// (0x00033725) call_muted_g

0x2ed7,	// (0x00027075) main_mup2_pane

0x5aa0,	// (0x00029c3e) main_mup2_pane_g1_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g1

0x5aa0,	// (0x00029c3e) main_mup2_pane_g2_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g2

0xc310,	// (0x000304ae) main_mup_pane_g13_cp1

0xafb8,	// (0x0002f156) mup_volume_pane_cp1

0x5aa0,	// (0x00029c3e) main_mup2_pane_g4_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g4

0x5aa0,	// (0x00029c3e) main_mup2_pane_g5_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g5

0x5aa0,	// (0x00029c3e) main_mup2_pane_g6_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g6

0x5aa0,	// (0x00029c3e) main_mup2_pane_g7_ParamLimits

0x5aa0,	// (0x00029c3e) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x00033785) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x00033785) main_mup2_pane_g

0x5aae,	// (0x00029c4c) main_mup2_pane_t1_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t1

0x5aae,	// (0x00029c4c) main_mup2_pane_t2_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t2

0x5aae,	// (0x00029c4c) main_mup2_pane_t3_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t3

0x5aae,	// (0x00029c4c) main_mup2_pane_t4_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t4

0x5aae,	// (0x00029c4c) main_mup2_pane_t5_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t5

0x5aae,	// (0x00029c4c) main_mup2_pane_t6_ParamLimits

0x5aae,	// (0x00029c4c) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x00033794) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x00033794) main_mup2_pane_t

0x5ad6,	// (0x00029c74) mup2_visualizer_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup2_visualizer_pane

0x5ad6,	// (0x00029c74) mup_progress_pane_cp_ParamLimits

0x5ad6,	// (0x00029c74) mup_progress_pane_cp

0xc2f1,	// (0x0003048f) mup_volume_pane_cp_ParamLimits

0xc2f1,	// (0x0003048f) mup_volume_pane_cp

0x31bb,	// (0x00027359) mup2_visualizer_pane_g1_ParamLimits

0x31bb,	// (0x00027359) mup2_visualizer_pane_g1

0x31c9,	// (0x00027367) mup2_visualizer_pane_g2_ParamLimits

0x31c9,	// (0x00027367) mup2_visualizer_pane_g2

0x31c9,	// (0x00027367) mup2_visualizer_pane_g3_ParamLimits

0x31c9,	// (0x00027367) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00033282) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00033282) mup2_visualizer_pane_g

0x6384,	// (0x0002a522) aid_size_cell_fmradio

0x1a71,	// (0x00025c0f) aid_height_parent_landcape

0x4213,	// (0x000283b1) wml_content_pane_cp

0x421b,	// (0x000283b9) wml_tabs_pane

0x4224,	// (0x000283c2) popup_wml_miniature_window

0x422c,	// (0x000283ca) scroll_pane_cp021

0x4240,	// (0x000283de) wml_content_pane_comp8

0x2ed7,	// (0x00027075) bg_popup_sub_pane_cp05

0xc23c,	// (0x000303da) popup_wml_miniature_window_g1

0xc244,	// (0x000303e2) wml_miniature_view_pane

0x6c3f,	// (0x0002addd) aid_size_wml_view

0x6c47,	// (0x0002ade5) wml_miniature_view_pane_g1

0x6c50,	// (0x0002adee) wml_miniature_view_pane_g2

0x6c59,	// (0x0002adf7) wml_miniature_view_pane_g3

0x6c61,	// (0x0002adff) wml_miniature_view_pane_g4

0x6c69,	// (0x0002ae07) wml_miniature_view_pane_g5

0x6c71,	// (0x0002ae0f) wml_miniature_view_pane_g6

0x6c79,	// (0x0002ae17) wml_miniature_view_pane_g7

0x6c81,	// (0x0002ae1f) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x000337a1) wml_miniature_view_pane_g

0xc24c,	// (0x000303ea) background_graphic_ParamLimits

0xc24c,	// (0x000303ea) background_graphic

0xc258,	// (0x000303f6) wml_tabs_2_pane

0xc261,	// (0x000303ff) wml_tabs_3_pane_ParamLimits

0xc261,	// (0x000303ff) wml_tabs_3_pane

0xc273,	// (0x00030411) wml_tabs_4_pane_ParamLimits

0xc273,	// (0x00030411) wml_tabs_4_pane

0xc289,	// (0x00030427) wml_tabs_5_pane_ParamLimits

0xc289,	// (0x00030427) wml_tabs_5_pane

0xc2a3,	// (0x00030441) wml_tabs_pane_g2_ParamLimits

0xc2a3,	// (0x00030441) wml_tabs_pane_g2

0xc2b8,	// (0x00030456) wml_tabs_pane_g3_ParamLimits

0xc2b8,	// (0x00030456) wml_tabs_pane_g3

0xc2cd,	// (0x0003046b) wml_tabs_2_active_pane_ParamLimits

0xc2cd,	// (0x0003046b) wml_tabs_2_active_pane

0xc2cd,	// (0x0003046b) wml_tabs_2_passive_pane_ParamLimits

0xc2cd,	// (0x0003046b) wml_tabs_2_passive_pane

0x6c89,	// (0x0002ae27) wml_tabs_3_active_pane_cp_ParamLimits

0x6c89,	// (0x0002ae27) wml_tabs_3_active_pane_cp

0x6c9e,	// (0x0002ae3c) wml_tabs_3_passive_pane_ParamLimits

0x6c9e,	// (0x0002ae3c) wml_tabs_3_passive_pane

0x6cb1,	// (0x0002ae4f) wml_tabs_3_passive_pane_cp_ParamLimits

0x6cb1,	// (0x0002ae4f) wml_tabs_3_passive_pane_cp

0x6cc8,	// (0x0002ae66) tabs_4_active_pane

0x6cd0,	// (0x0002ae6e) tabs_4_passive_pane

0x6cda,	// (0x0002ae78) tabs_4_passive_pane_cp

0x6ce2,	// (0x0002ae80) tabs_4_passive_pane_cp2

0x6771,	// (0x0002a90f) aid_height_text

0x5ad6,	// (0x00029c74) mup_volume_cont_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup_volume_cont_pane

0x2a1d,	// (0x00026bbb) aid_size_cell_pinb

0x2a1d,	// (0x00026bbb) aid_size_list_pinb

0x5ad6,	// (0x00029c74) mup2_volume_cont_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup2_volume_cont_pane

0xc2db,	// (0x00030479) mup2_volume_cont_pane_g1_ParamLimits

0xc2db,	// (0x00030479) mup2_volume_cont_pane_g1

0x15c0,	// (0x0002575e) aid_size_cell_touch_ParamLimits

0x15c0,	// (0x0002575e) aid_size_cell_touch

0x17a8,	// (0x00025946) touch_pane_ParamLimits

0x17a8,	// (0x00025946) touch_pane

0xafb8,	// (0x0002f156) main_rss2_pane

0xc31a,	// (0x000304b8) listscroll_rss2_pane

0xc323,	// (0x000304c1) rss2_navigation_pane

0xc32b,	// (0x000304c9) list_rss2_pane

0x5588,	// (0x00029726) scroll_pane_cp22

0xc333,	// (0x000304d1) rss2_navigation_pane_g1

0xc33c,	// (0x000304da) rss2_navigation_pane_g2

0xc344,	// (0x000304e2) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x000337b2) rss2_navigation_pane_g

0xc34c,	// (0x000304ea) rss2_navigation_pane_t1

0x6cec,	// (0x0002ae8a) rss2_list_single_pane_ParamLimits

0x6cec,	// (0x0002ae8a) rss2_list_single_pane

0xc35a,	// (0x000304f8) rss2_list_single_pane_t2

0xc368,	// (0x00030506) rss2_list_single_pane_t3_ParamLimits

0xc368,	// (0x00030506) rss2_list_single_pane_t3

0xc385,	// (0x00030523) rss2_list_single_pane_t4

0x4f08,	// (0x000290a6) smil_status_pane_g1

0xafaa,	// (0x0002f148) main_image2_pane_ParamLimits

0xafaa,	// (0x0002f148) main_image2_pane

0xc1d4,	// (0x00030372) main_camera2_pane_g9_ParamLimits

0xc1d4,	// (0x00030372) main_camera2_pane_g9

0x1d47,	// (0x00025ee5) main_camera2_pane_t5_ParamLimits

0x1d47,	// (0x00025ee5) main_camera2_pane_t5

0xc1e2,	// (0x00030380) main_camera2_pane_t6_ParamLimits

0xc1e2,	// (0x00030380) main_camera2_pane_t6

0x6d01,	// (0x0002ae9f) main_image2_pane_g1_ParamLimits

0x6d01,	// (0x0002ae9f) main_image2_pane_g1

0x633a,	// (0x0002a4d8) smil2_video_pane_ParamLimits

0x633a,	// (0x0002a4d8) smil2_video_pane

0xaf59,	// (0x0002f0f7) aid_zoom_text_primary_cp

0xafa0,	// (0x0002f13e) popup_preview_fixed_window

0x410b,	// (0x000282a9) im_reading_pane_g1

0x1d39,	// (0x00025ed7) cams2_bc_adjust_pane_cp_ParamLimits

0x1d39,	// (0x00025ed7) cams2_bc_adjust_pane_cp

0xc20a,	// (0x000303a8) cams2_bc_adjust_pane_ParamLimits

0xc20a,	// (0x000303a8) cams2_bc_adjust_pane

0xc310,	// (0x000304ae) cams2_bc_adjust_pane_g1

0xafb8,	// (0x0002f156) cams2_slider_pane

0xc310,	// (0x000304ae) cams2_slider_pane_g1

0xc310,	// (0x000304ae) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x000337b9) cams2_slider_pane_g

0x1818,	// (0x000259b6) calc_display_pane_ParamLimits

0x183d,	// (0x000259db) calc_paper_pane_ParamLimits

0x1860,	// (0x000259fe) grid_calc_pane_ParamLimits

0xb0ea,	// (0x0002f288) popup_clock_digital_window_t1_ParamLimits

0x61c1,	// (0x0002a35f) main_image_pane_t1

0x17fa,	// (0x00025998) aid_size_cell_calc_ParamLimits

0x17fa,	// (0x00025998) aid_size_cell_calc

0x1ad5,	// (0x00025c73) popup_blid_sat_info2_window_ParamLimits

0x1ad5,	// (0x00025c73) popup_blid_sat_info2_window

0xc393,	// (0x00030531) aid_size_cell_blid

0xc39b,	// (0x00030539) bg_popup_window_pane_cp07

0xc3be,	// (0x0003055c) grid_popup_blid_pane

0xc3c8,	// (0x00030566) heading_pane_cp05_ParamLimits

0xc3c8,	// (0x00030566) heading_pane_cp05

0xc492,	// (0x00030630) cell_popup_blid_pane_ParamLimits

0xc492,	// (0x00030630) cell_popup_blid_pane

0xc4b6,	// (0x00030654) cell_popup_blid_pane_g1

0xc4be,	// (0x0003065c) cell_popup_blid_pane_t1

0x5ad6,	// (0x00029c74) mup2_indicator_pane_ParamLimits

0x5ad6,	// (0x00029c74) mup2_indicator_pane

0x2a1d,	// (0x00026bbb) mup2_visualizer_osc_pane

0xc226,	// (0x000303c4) mup2_visualizer_spec_pane_ParamLimits

0xc226,	// (0x000303c4) mup2_visualizer_spec_pane

0x2a1d,	// (0x00026bbb) mup2_spec_half_pane

0x2a1d,	// (0x00026bbb) mup2_spec_half_pane_cp

0xc4cc,	// (0x0003066a) mup2_spec_bar_pane_ParamLimits

0xc4cc,	// (0x0003066a) mup2_spec_bar_pane

0x3c4d,	// (0x00027deb) mup2_spec_bar_pane_g1

0xc4eb,	// (0x00030689) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x000337df) mup2_spec_bar_pane_g

0x2a1d,	// (0x00026bbb) mup2_osc_middle_pane

0x3c4d,	// (0x00027deb) mup2_visualizer_osc_pane_g1

0x2a8c,	// (0x00026c2a) popup_number_entry_window_t1_ParamLimits

0x2a9f,	// (0x00026c3d) popup_number_entry_window_t2_ParamLimits

0x2ab1,	// (0x00026c4f) popup_number_entry_window_t3_ParamLimits

0x2ac3,	// (0x00026c61) popup_number_entry_window_t5_ParamLimits

0x2ac3,	// (0x00026c61) popup_number_entry_window_t5

0xf085,	// (0x00033223) popup_number_entry_window_t_ParamLimits

0x2af7,	// (0x00026c95) text_title_cp2_ParamLimits

0xb129,	// (0x0002f2c7) aid_hotspot_pointer_text2_pane

0xb143,	// (0x0002f2e1) main_viewer_pane_g9_ParamLimits

0xb143,	// (0x0002f2e1) main_viewer_pane_g9

0x4916,	// (0x00028ab4) cale_month_pane_t1_ParamLimits

0x4f7a,	// (0x00029118) bg_cale_pane_ParamLimits

0x4f92,	// (0x00029130) list_cale_pane_ParamLimits

0x4fa3,	// (0x00029141) listscroll_cale_day_pane_t1

0x4fb5,	// (0x00029153) scroll_pane_cp09_ParamLimits

0x5b3d,	// (0x00029cdb) main_mup_eq_pane_t1_ParamLimits

0x5b3d,	// (0x00029cdb) main_mup_eq_pane_t1

0x5b57,	// (0x00029cf5) main_mup_eq_pane_t2_ParamLimits

0x5b57,	// (0x00029cf5) main_mup_eq_pane_t2

0x5b71,	// (0x00029d0f) main_mup_eq_pane_t3_ParamLimits

0x5b71,	// (0x00029d0f) main_mup_eq_pane_t3

0x5b8d,	// (0x00029d2b) main_mup_eq_pane_t4_ParamLimits

0x5b8d,	// (0x00029d2b) main_mup_eq_pane_t4

0x5ba9,	// (0x00029d47) main_mup_eq_pane_t5_ParamLimits

0x5ba9,	// (0x00029d47) main_mup_eq_pane_t5

0x5bc5,	// (0x00029d63) main_mup_eq_pane_t6_ParamLimits

0x5bc5,	// (0x00029d63) main_mup_eq_pane_t6

0x5bd9,	// (0x00029d77) main_mup_eq_pane_t7_ParamLimits

0x5bd9,	// (0x00029d77) main_mup_eq_pane_t7

0x5bed,	// (0x00029d8b) main_mup_eq_pane_t8_ParamLimits

0x5bed,	// (0x00029d8b) main_mup_eq_pane_t8

0x5c01,	// (0x00029d9f) main_mup_eq_pane_t9_ParamLimits

0x5c01,	// (0x00029d9f) main_mup_eq_pane_t9

0x5c1b,	// (0x00029db9) main_mup_eq_pane_t10_ParamLimits

0x5c1b,	// (0x00029db9) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00033582) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00033582) main_mup_eq_pane_t

0x5cca,	// (0x00029e68) mup_equalizer_pane_cp5_ParamLimits

0x5cde,	// (0x00029e7c) mup_equalizer_pane_cp6_ParamLimits

0x5cf2,	// (0x00029e90) mup_equalizer_pane_cp7_ParamLimits

0xafb8,	// (0x0002f156) main_gallery_pane

0xc142,	// (0x000302e0) smil2_volume_pane

0xc14a,	// (0x000302e8) smil_status_volume_pane_g1_ParamLimits

0xc15d,	// (0x000302fb) smil_status_volume_pane_g2_ParamLimits

0xc170,	// (0x0003030e) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x00033738) smil_status_volume_pane_g_ParamLimits

0xc39b,	// (0x00030539) bg_popup_window_pane_cp07_ParamLimits

0xc3a9,	// (0x00030547) blid_firmament_pane

0x3154,	// (0x000272f2) aid_size_cell_gallery_ParamLimits

0x3154,	// (0x000272f2) aid_size_cell_gallery

0x3154,	// (0x000272f2) grid_gallery_pane_ParamLimits

0x3154,	// (0x000272f2) grid_gallery_pane

0xc39b,	// (0x00030539) cell_gallery_pane_ParamLimits

0xc39b,	// (0x00030539) cell_gallery_pane

0x3154,	// (0x000272f2) bg_cell_gallery_focus_pane_ParamLimits

0x3154,	// (0x000272f2) bg_cell_gallery_focus_pane

0x31bb,	// (0x00027359) cell_gallery_pane_g1_ParamLimits

0x31bb,	// (0x00027359) cell_gallery_pane_g1

0x31bb,	// (0x00027359) cell_gallery_pane_g2_ParamLimits

0x31bb,	// (0x00027359) cell_gallery_pane_g2

0x31bb,	// (0x00027359) cell_gallery_pane_g3_ParamLimits

0x31bb,	// (0x00027359) cell_gallery_pane_g3

0x31c9,	// (0x00027367) cell_gallery_pane_g4_ParamLimits

0x31c9,	// (0x00027367) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x000337e4) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x000337e4) cell_gallery_pane_g

0xc4f5,	// (0x00030693) bg_cell_gallery_focus_pane_g1

0xc4fd,	// (0x0003069b) bg_cell_gallery_focus_pane_g2

0xc505,	// (0x000306a3) bg_cell_gallery_focus_pane_g3

0xc50d,	// (0x000306ab) bg_cell_gallery_focus_pane_g4

0xc515,	// (0x000306b3) bg_cell_gallery_focus_pane_g5

0xc51d,	// (0x000306bb) bg_cell_gallery_focus_pane_g6

0xc525,	// (0x000306c3) bg_cell_gallery_focus_pane_g7

0xc52d,	// (0x000306cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x000337ed) bg_cell_gallery_focus_pane_g

0xc535,	// (0x000306d3) aid_firma_cardinal

0xc549,	// (0x000306e7) blid_firmament_pane_t1

0xc560,	// (0x000306fe) blid_firmament_pane_t2

0xc577,	// (0x00030715) blid_firmament_pane_t3

0xc58e,	// (0x0003072c) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x000337fe) blid_firmament_pane_t

0xc5a5,	// (0x00030743) blid_sat_info_pane

0x3c4d,	// (0x00027deb) blid_sat_info_pane_g1

0x3c4d,	// (0x00027deb) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x00033576) blid_sat_info_pane_g

0xc5b5,	// (0x00030753) blid_sat_info_pane_t1

0xc5c3,	// (0x00030761) smil2_volume_content_pane

0xc5cc,	// (0x0003076a) smil2_volume_pane_g1

0x33d9,	// (0x00027577) smil2_volume_content_pane_g1

0xc5d4,	// (0x00030772) smil2_volume_content_pane_g2

0xc5dd,	// (0x0003077b) smil2_volume_content_pane_g3

0xc5e6,	// (0x00030784) smil2_volume_content_pane_g4

0xc5ef,	// (0x0003078d) smil2_volume_content_pane_g5

0xc5f8,	// (0x00030796) smil2_volume_content_pane_g6

0xc601,	// (0x0003079f) smil2_volume_content_pane_g7

0xc60a,	// (0x000307a8) smil2_volume_content_pane_g8

0xc613,	// (0x000307b1) smil2_volume_content_pane_g9

0xc61c,	// (0x000307ba) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x00033807) smil2_volume_content_pane_g

0x385a,	// (0x000279f8) cale_week_day_heading_pane_t1_ParamLimits

0x3884,	// (0x00027a22) cale_week_day_heading_pane_t2_ParamLimits

0x38b3,	// (0x00027a51) cale_week_day_heading_pane_t3_ParamLimits

0x38e2,	// (0x00027a80) cale_week_day_heading_pane_t4_ParamLimits

0x3911,	// (0x00027aaf) cale_week_day_heading_pane_t5_ParamLimits

0x3948,	// (0x00027ae6) cale_week_day_heading_pane_t6_ParamLimits

0x397f,	// (0x00027b1d) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0003332a) cale_week_day_heading_pane_t_ParamLimits

0x39a9,	// (0x00027b47) bg_cale_side_pane_ParamLimits

0x193d,	// (0x00025adb) cale_week_time_pane_t1_ParamLimits

0x1957,	// (0x00025af5) cale_week_time_pane_t2_ParamLimits

0x1971,	// (0x00025b0f) cale_week_time_pane_t3_ParamLimits

0x198b,	// (0x00025b29) cale_week_time_pane_t4_ParamLimits

0x19a5,	// (0x00025b43) cale_week_time_pane_t5_ParamLimits

0x19bf,	// (0x00025b5d) cale_week_time_pane_t6_ParamLimits

0x19d9,	// (0x00025b77) cale_week_time_pane_t7_ParamLimits

0x19f3,	// (0x00025b91) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00033339) cale_week_time_pane_t_ParamLimits

0x39b7,	// (0x00027b55) cell_cale_week_pane_g2_ParamLimits

0x39a9,	// (0x00027b47) bg_cale_side_pane_cp01_ParamLimits

0x4d31,	// (0x00028ecf) cale_month_week_pane_t1_ParamLimits

0x4d4a,	// (0x00028ee8) cale_month_week_pane_t2_ParamLimits

0x4d63,	// (0x00028f01) cale_month_week_pane_t3_ParamLimits

0x4d7c,	// (0x00028f1a) cale_month_week_pane_t4_ParamLimits

0x4d95,	// (0x00028f33) cale_month_week_pane_t5_ParamLimits

0x4dae,	// (0x00028f4c) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00033407) cale_month_week_pane_t_ParamLimits

0xb05a,	// (0x0002f1f8) cell_cale_month_pane_g1_ParamLimits

0xafb8,	// (0x0002f156) main_cale_event_viewer_pane

0x2a1d,	// (0x00026bbb) listscroll_cale_event_viewer_pane

0xc625,	// (0x000307c3) list_cale_ev_pane

0xc62d,	// (0x000307cb) scroll_pane_cp023

0xc639,	// (0x000307d7) field_cale_ev_pane_ParamLimits

0xc639,	// (0x000307d7) field_cale_ev_pane

0xc657,	// (0x000307f5) field_cale_ev_content_pane_ParamLimits

0xc657,	// (0x000307f5) field_cale_ev_content_pane

0xc663,	// (0x00030801) field_cale_ev_pane_g1_ParamLimits

0xc663,	// (0x00030801) field_cale_ev_pane_g1

0xc66f,	// (0x0003080d) field_cale_ev_pane_g2_ParamLimits

0xc66f,	// (0x0003080d) field_cale_ev_pane_g2

0xc687,	// (0x00030825) field_cale_ev_pane_g3_ParamLimits

0xc687,	// (0x00030825) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x0003381c) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x0003381c) field_cale_ev_pane_g

0xc69f,	// (0x0003083d) field_cale_ev_pane_t1_ParamLimits

0xc69f,	// (0x0003083d) field_cale_ev_pane_t1

0x34d7,	// (0x00027675) field_cale_ev_content_pane_t1_ParamLimits

0x34d7,	// (0x00027675) field_cale_ev_content_pane_t1

0x5de7,	// (0x00029f85) bg_button_pane_cp01

0x3532,	// (0x000276d0) listscroll_cale_week_pane_ParamLimits

0x3544,	// (0x000276e2) popup_toolbar_window_cp01

0x379d,	// (0x0002793b) listscroll_cale_week_pane_t1_ParamLimits

0x3532,	// (0x000276d0) listscroll_cale_day_pane_ParamLimits

0x3544,	// (0x000276e2) popup_toolbar_window_cp02

0x4fa3,	// (0x00029141) listscroll_cale_day_pane_t1_ParamLimits

0x1a8f,	// (0x00025c2d) main_cale_month_pane_ParamLimits

0xc0c0,	// (0x0003025e) popup_toolbar_window_cp03_ParamLimits

0xc0c0,	// (0x0003025e) popup_toolbar_window_cp03

0x619f,	// (0x0002a33d) main_image_pane_g2_ParamLimits

0x619f,	// (0x0002a33d) main_image_pane_g2

0x61b0,	// (0x0002a34e) main_image_pane_g3_ParamLimits

0x61b0,	// (0x0002a34e) main_image_pane_g3

0x0002,

0xf476,	// (0x00033614) main_image_pane_g_ParamLimits

0xf476,	// (0x00033614) main_image_pane_g

0x61c1,	// (0x0002a35f) main_image_pane_t1_ParamLimits

0x61d8,	// (0x0002a376) main_image_pane_t2_ParamLimits

0x61d8,	// (0x0002a376) main_image_pane_t2

0x61ea,	// (0x0002a388) main_image_pane_t3_ParamLimits

0x61ea,	// (0x0002a388) main_image_pane_t3

0x6212,	// (0x0002a3b0) main_image_pane_t4_ParamLimits

0x6212,	// (0x0002a3b0) main_image_pane_t4

0x0003,

0xf47d,	// (0x0003361b) main_image_pane_t_ParamLimits

0xf47d,	// (0x0003361b) main_image_pane_t

0x6232,	// (0x0002a3d0) popup_image_details_window_cp01

0x623c,	// (0x0002a3da) popup_toobar_trans_pane_cp01_ParamLimits

0x623c,	// (0x0002a3da) popup_toobar_trans_pane_cp01

0x1bb4,	// (0x00025d52) popup_image_details_window_ParamLimits

0x1bb4,	// (0x00025d52) popup_image_details_window

0xc093,	// (0x00030231) popup_image_focus_window

0xc1c6,	// (0x00030364) camera2_autofocus_pane_ParamLimits

0xc1c6,	// (0x00030364) camera2_autofocus_pane

0x2a1d,	// (0x00026bbb) bg_popup_sub_pane_cp06

0xc6b6,	// (0x00030854) popup_image_focus_window_g1

0xc6be,	// (0x0003085c) popup_image_focus_window_g2

0xc6c6,	// (0x00030864) popup_image_focus_window_g3

0xc6ce,	// (0x0003086c) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x00033823) popup_image_focus_window_g

0xc6d6,	// (0x00030874) popup_image_focus_window_t1

0xc6e4,	// (0x00030882) popup_image_focus_window_t2

0xc6f4,	// (0x00030892) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x0003382c) popup_image_focus_window_t

0x31bb,	// (0x00027359) camera2_autofocus_pane_g1

0x3154,	// (0x000272f2) bg_tb_trans_pane_cp01

0xc702,	// (0x000308a0) popup_image_details_window_g1

0xc715,	// (0x000308b3) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x0003383e) popup_image_details_window_g

0xc73e,	// (0x000308dc) popup_image_details_window_t1

0xc750,	// (0x000308ee) popup_image_details_window_t2

0xc769,	// (0x00030907) popup_image_details_window_t3

0xc77d,	// (0x0003091b) popup_image_details_window_t4

0xc798,	// (0x00030936) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x00033845) popup_image_details_window_t

0x32e9,	// (0x00027487) bg_calc_paper_pane_ParamLimits

0xafb8,	// (0x0002f156) grid_highlight_pane_cp013

0xafca,	// (0x0002f168) list_calc_pane_ParamLimits

0xafdc,	// (0x0002f17a) scroll_pane_cp024

0x32fd,	// (0x0002749b) bg_calc_display_pane_ParamLimits

0x188e,	// (0x00025a2c) calc_display_pane_t1_ParamLimits

0x18a3,	// (0x00025a41) calc_display_pane_t2_ParamLimits

0xafe4,	// (0x0002f182) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000332aa) calc_display_pane_t_ParamLimits

0x1907,	// (0x00025aa5) cell_calc_pane_g2

0x0001,

0xf129,	// (0x000332c7) cell_calc_pane_g

0x1910,	// (0x00025aae) cell_calc_pane_t1

0x33ae,	// (0x0002754c) grid_highlight_pane_cp02_ParamLimits

0x33c4,	// (0x00027562) toolbar_button_pane_cp01_ParamLimits

0x33c4,	// (0x00027562) toolbar_button_pane_cp01

0x627e,	// (0x0002a41c) temp_image_control_pane_ParamLimits

0x627e,	// (0x0002a41c) temp_image_control_pane

0xafaa,	// (0x0002f148) main_mp3_pane

0xc7b2,	// (0x00030950) temp_image_control_pane_g1_ParamLimits

0xc7b2,	// (0x00030950) temp_image_control_pane_g1

0xc7c0,	// (0x0003095e) temp_image_control_pane_g2_ParamLimits

0xc7c0,	// (0x0003095e) temp_image_control_pane_g2

0xc7d2,	// (0x00030970) temp_image_control_pane_g3_ParamLimits

0xc7d2,	// (0x00030970) temp_image_control_pane_g3

0x6d17,	// (0x0002aeb5) temp_image_control_pane_g4_ParamLimits

0x6d17,	// (0x0002aeb5) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x00033850) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x00033850) temp_image_control_pane_g

0xc7b2,	// (0x00030950) main_mp3_pane_g1

0x6d2a,	// (0x0002aec8) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x00033859) main_mp3_pane_g

0xc807,	// (0x000309a5) main_mp3_pane_t1

0x31c9,	// (0x00027367) main_camera_pane_g8_ParamLimits

0x31c9,	// (0x00027367) main_camera_pane_g8

0x3bfb,	// (0x00027d99) main_video_pane_g7_ParamLimits

0x3bfb,	// (0x00027d99) main_video_pane_g7

0xc1f6,	// (0x00030394) main_camera2_pane_t7_ParamLimits

0xc1f6,	// (0x00030394) main_camera2_pane_t7

0x41d3,	// (0x00028371) scroll_pane_cp025_ParamLimits

0x41d3,	// (0x00028371) scroll_pane_cp025

0x41e7,	// (0x00028385) scroll_pane_cp026_ParamLimits

0x41e7,	// (0x00028385) scroll_pane_cp026

0x41f6,	// (0x00028394) wml_content_pane_ParamLimits

0xafb8,	// (0x0002f156) main_touch_calib_pane

0x6dfe,	// (0x0002af9c) main_touch_calib_pane_g1

0x6e10,	// (0x0002afae) main_touch_calib_pane_g2

0x6e22,	// (0x0002afc0) main_touch_calib_pane_g3

0x6e34,	// (0x0002afd2) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x00033877) main_touch_calib_pane_g

0x6e46,	// (0x0002afe4) main_touch_calib_pane_t1

0x6e60,	// (0x0002affe) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x00033880) main_touch_calib_pane_t

0x5830,	// (0x000299ce) mup_progress_pane_cp02

0x5865,	// (0x00029a03) navi_pane_g1

0x5920,	// (0x00029abe) navi_pane_mp_t3

0xafaa,	// (0x0002f148) main_mp3_pane_ParamLimits

0x6a2f,	// (0x0002abcd) navi_pane_ParamLimits

0xc7b2,	// (0x00030950) main_mp3_pane_g1_ParamLimits

0x6d2a,	// (0x0002aec8) main_mp3_pane_g2_ParamLimits

0x6d38,	// (0x0002aed6) main_mp3_pane_g3_ParamLimits

0x6d38,	// (0x0002aed6) main_mp3_pane_g3

0x6d46,	// (0x0002aee4) main_mp3_pane_g4_ParamLimits

0x6d46,	// (0x0002aee4) main_mp3_pane_g4

0x31bb,	// (0x00027359) main_mp3_pane_g5_ParamLimits

0x31bb,	// (0x00027359) main_mp3_pane_g5

0xc7e2,	// (0x00030980) main_mp3_pane_g6_ParamLimits

0xc7e2,	// (0x00030980) main_mp3_pane_g6

0xc7ef,	// (0x0003098d) main_mp3_pane_g7_ParamLimits

0xc7ef,	// (0x0003098d) main_mp3_pane_g7

0xc7fb,	// (0x00030999) main_mp3_pane_g8_ParamLimits

0xc7fb,	// (0x00030999) main_mp3_pane_g8

0xf6bb,	// (0x00033859) main_mp3_pane_g_ParamLimits

0x6d52,	// (0x0002aef0) main_mp3_pane_t2

0x6d60,	// (0x0002aefe) main_mp3_pane_t3

0xc815,	// (0x000309b3) main_mp3_pane_t4

0xc823,	// (0x000309c1) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x0003386a) main_mp3_pane_t

0xc831,	// (0x000309cf) mup_progress_pane_cp01

0xaf59,	// (0x0002f0f7) aid_zoom_text_secondary2

0xc625,	// (0x000307c3) list_cale_ev2_pane

0xc62d,	// (0x000307cb) scroll_pane_cp023_ParamLimits

0x6eb6,	// (0x0002b054) field_cale_ev2_pane_ParamLimits

0x6eb6,	// (0x0002b054) field_cale_ev2_pane

0x6ed6,	// (0x0002b074) field_cale_ev2_pane_g1_ParamLimits

0x6ed6,	// (0x0002b074) field_cale_ev2_pane_g1

0x6ee2,	// (0x0002b080) field_cale_ev2_pane_g2_ParamLimits

0x6ee2,	// (0x0002b080) field_cale_ev2_pane_g2

0x6efa,	// (0x0002b098) field_cale_ev2_pane_g3_ParamLimits

0x6efa,	// (0x0002b098) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0003388b) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0003388b) field_cale_ev2_pane_g

0x6f12,	// (0x0002b0b0) field_cale_ev2_pane_t1_ParamLimits

0x6f12,	// (0x0002b0b0) field_cale_ev2_pane_t1

0x6f29,	// (0x0002b0c7) field_cale_ev2_pane_t2_ParamLimits

0x6f29,	// (0x0002b0c7) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x00033894) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x00033894) field_cale_ev2_pane_t

0x5f6e,	// (0x0002a10c) main_postcard_pane_g5_ParamLimits

0x5f6e,	// (0x0002a10c) main_postcard_pane_g5

0x5f84,	// (0x0002a122) main_postcard_pane_g6_ParamLimits

0x5f84,	// (0x0002a122) main_postcard_pane_g6

0x3154,	// (0x000272f2) camera2_autofocus_pane_cp_ParamLimits

0x3154,	// (0x000272f2) camera2_autofocus_pane_cp

0xafaa,	// (0x0002f148) main_mup3_pane

0x6f82,	// (0x0002b120) main_mup3_pane_g1_ParamLimits

0x6f82,	// (0x0002b120) main_mup3_pane_g1

0x6fa4,	// (0x0002b142) main_mup3_pane_g2_ParamLimits

0x6fa4,	// (0x0002b142) main_mup3_pane_g2

0x7022,	// (0x0002b1c0) main_mup3_pane_g3_ParamLimits

0x7022,	// (0x0002b1c0) main_mup3_pane_g3

0x7068,	// (0x0002b206) main_mup3_pane_g4_ParamLimits

0x7068,	// (0x0002b206) main_mup3_pane_g4

0x70ae,	// (0x0002b24c) main_mup3_pane_g5_ParamLimits

0x70ae,	// (0x0002b24c) main_mup3_pane_g5

0x70f4,	// (0x0002b292) main_mup3_pane_g6_ParamLimits

0x70f4,	// (0x0002b292) main_mup3_pane_g6

0x31c9,	// (0x00027367) main_mup3_pane_g7_ParamLimits

0x31c9,	// (0x00027367) main_mup3_pane_g7

0x0007,

0xf706,	// (0x000338a4) main_mup3_pane_g_ParamLimits

0xf706,	// (0x000338a4) main_mup3_pane_g

0x7172,	// (0x0002b310) main_mup3_pane_t1_ParamLimits

0x7172,	// (0x0002b310) main_mup3_pane_t1

0x71e6,	// (0x0002b384) main_mup3_pane_t2_ParamLimits

0x71e6,	// (0x0002b384) main_mup3_pane_t2

0x72ba,	// (0x0002b458) main_mup3_pane_t4_ParamLimits

0x72ba,	// (0x0002b458) main_mup3_pane_t4

0x7310,	// (0x0002b4ae) main_mup3_pane_t5_ParamLimits

0x7310,	// (0x0002b4ae) main_mup3_pane_t5

0x73cc,	// (0x0002b56a) main_mup3_pane_t6_ParamLimits

0x73cc,	// (0x0002b56a) main_mup3_pane_t6

0x0005,

0xf717,	// (0x000338b5) main_mup3_pane_t_ParamLimits

0xf717,	// (0x000338b5) main_mup3_pane_t

0x7484,	// (0x0002b622) mup3_progress_pane_ParamLimits

0x7484,	// (0x0002b622) mup3_progress_pane

0x751a,	// (0x0002b6b8) popup_mup3_control_window_ParamLimits

0x751a,	// (0x0002b6b8) popup_mup3_control_window

0xc845,	// (0x000309e3) popup_mup3_text_window

0x754c,	// (0x0002b6ea) mup3_progress_pane_t1

0x756b,	// (0x0002b709) mup3_progress_pane_t2

0xc84d,	// (0x000309eb) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x000338c2) mup3_progress_pane_t

0xc86a,	// (0x00030a08) mup_progress_pane_cp03

0x2a1d,	// (0x00026bbb) bg_tb_trans_pane_cp04

0x758a,	// (0x0002b728) mup3_volume_pane

0x7592,	// (0x0002b730) popup_mup3_control_window_g1

0x759b,	// (0x0002b739) mup3_volume_pane_g1

0x75a4,	// (0x0002b742) mup3_volume_pane_g2

0x75ad,	// (0x0002b74b) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x000338c9) mup3_volume_pane_g

0x2a1d,	// (0x00026bbb) bg_tb_trans_pane_cp03

0xc87a,	// (0x00030a18) popup_mup3_text_window_g1

0xc882,	// (0x00030a20) popup_mup3_text_window_t1

0x33a1,	// (0x0002753f) list_calc_item_pane_g1_ParamLimits

0xc307,	// (0x000304a5) mup_volume_pane_cp_g1

0x6e7a,	// (0x0002b018) main_touch_calib_pane_t3

0x6e8e,	// (0x0002b02c) main_touch_calib_pane_t4

0x6ea2,	// (0x0002b040) main_touch_calib_pane_t5

0xaf45,	// (0x0002f0e3) aid_cell_size_toolbar2

0xaf4d,	// (0x0002f0eb) aid_popup3_width_pane

0xaf59,	// (0x0002f0f7) aid_zoom_text_msg_primary

0x3aa8,	// (0x00027c46) vorec_t7

0x3309,	// (0x000274a7) bg_calc_paper_pane_g1_ParamLimits

0x3315,	// (0x000274b3) bg_calc_paper_pane_g2_ParamLimits

0x3321,	// (0x000274bf) bg_calc_paper_pane_g3_ParamLimits

0x332d,	// (0x000274cb) bg_calc_paper_pane_g4_ParamLimits

0x3339,	// (0x000274d7) bg_calc_paper_pane_g5_ParamLimits

0x3345,	// (0x000274e3) bg_calc_paper_pane_g6_ParamLimits

0x3354,	// (0x000274f2) bg_calc_paper_pane_g7_ParamLimits

0x3363,	// (0x00027501) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000332b1) bg_calc_paper_pane_g_ParamLimits

0x3376,	// (0x00027514) calc_bg_paper_pane_g9_ParamLimits

0x3154,	// (0x000272f2) image_qvga_pane_ParamLimits

0x3154,	// (0x000272f2) image_qvga_pane

0x3132,	// (0x000272d0) bg_popup_sub_pane_cp04_ParamLimits

0x60fd,	// (0x0002a29b) popup_mup_playback_window_g1_ParamLimits

0x6109,	// (0x0002a2a7) popup_mup_playback_window_t1_ParamLimits

0x611e,	// (0x0002a2bc) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0003360f) popup_mup_playback_window_t_ParamLimits

0x31c9,	// (0x00027367) main_mup2_pane_g3_ParamLimits

0x31c9,	// (0x00027367) main_mup2_pane_g3

0x3e64,	// (0x00028002) popup_toolbar_window_cp04

0xb360,	// (0x0002f4fe) popup_call2_audio_second_window_g3_ParamLimits

0xb360,	// (0x0002f4fe) popup_call2_audio_second_window_g3

0xb778,	// (0x0002f916) popup_call2_audio_first_window_g4_ParamLimits

0xb778,	// (0x0002f916) popup_call2_audio_first_window_g4

0xbd9f,	// (0x0002ff3d) popup_call2_audio_in_window_g4_ParamLimits

0xbd9f,	// (0x0002ff3d) popup_call2_audio_in_window_g4

0x6133,	// (0x0002a2d1) aid_area_sk_bg_cut_ParamLimits

0x6133,	// (0x0002a2d1) aid_area_sk_bg_cut

0x6151,	// (0x0002a2ef) aid_area_sk_bg_cut_2_ParamLimits

0x6151,	// (0x0002a2ef) aid_area_sk_bg_cut_2

0x2a1d,	// (0x00026bbb) aid_placing_details_win

0x2a1d,	// (0x00026bbb) aid_placing_details_win_2

0x31bb,	// (0x00027359) camera2_autofocus_pane_g1_ParamLimits

0x174d,	// (0x000258eb) popup_fixed_preview_cale_window_ParamLimits

0x174d,	// (0x000258eb) popup_fixed_preview_cale_window

0x59e0,	// (0x00029b7e) navi_slider_pane_g3

0x59e9,	// (0x00029b87) navi_slider_pane_g4

0x59f2,	// (0x00029b90) navi_slider_pane_g5

0x59e0,	// (0x00029b7e) navi_slider_pane_g6

0xb110,	// (0x0002f2ae) navi_slider_pane_g7

0x5d0f,	// (0x00029ead) mup_scale_pane_g3

0x5d18,	// (0x00029eb6) mup_scale_pane_g4

0x5d21,	// (0x00029ebf) mup_scale_pane_g5

0x5d2a,	// (0x00029ec8) mup_scale_pane_g6

0x5d33,	// (0x00029ed1) mup_scale_pane_g7

0xc310,	// (0x000304ae) cams2_slider_pane_g3

0xc310,	// (0x000304ae) cams2_slider_pane_g4

0xc310,	// (0x000304ae) cams2_slider_pane_g5

0xc310,	// (0x000304ae) cams2_slider_pane_g6

0xc310,	// (0x000304ae) cams2_slider_pane_g7

0x3c4d,	// (0x00027deb) camera2_autofocus_pane_cp_g1

0xc075,	// (0x00030213) bg_popup_preview_window_pane_cp02_ParamLimits

0xc075,	// (0x00030213) bg_popup_preview_window_pane_cp02

0xc890,	// (0x00030a2e) list_fp_cale_pane_ParamLimits

0xc890,	// (0x00030a2e) list_fp_cale_pane

0xc89c,	// (0x00030a3a) popup_fixed_preview_cale_window_t1_ParamLimits

0xc89c,	// (0x00030a3a) popup_fixed_preview_cale_window_t1

0x75b6,	// (0x0002b754) popup_fixed_preview_cale_window_t2_ParamLimits

0x75b6,	// (0x0002b754) popup_fixed_preview_cale_window_t2

0x75cb,	// (0x0002b769) popup_fixed_preview_cale_window_t3_ParamLimits

0x75cb,	// (0x0002b769) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x000338d0) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x000338d0) popup_fixed_preview_cale_window_t

0x75e0,	// (0x0002b77e) list_single_fp_cale_pane_ParamLimits

0x75e0,	// (0x0002b77e) list_single_fp_cale_pane

0xc8ba,	// (0x00030a58) list_single_fp_cale_pane_g1_ParamLimits

0xc8ba,	// (0x00030a58) list_single_fp_cale_pane_g1

0xc8c6,	// (0x00030a64) list_single_fp_cale_pane_g2_ParamLimits

0xc8c6,	// (0x00030a64) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x000338d7) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x000338d7) list_single_fp_cale_pane_g

0xc8df,	// (0x00030a7d) list_single_fp_cale_pane_t1_ParamLimits

0xc8df,	// (0x00030a7d) list_single_fp_cale_pane_t1

0xc8f1,	// (0x00030a8f) list_single_fp_cale_pane_t2_ParamLimits

0xc8f1,	// (0x00030a8f) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x000338de) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x000338de) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xafb8,	// (0x0002f156) main_dialer_pane

0x2a1d,	// (0x00026bbb) aid_cell_size_keypad

0x2a1d,	// (0x00026bbb) dialer_ne_pane

0x2a1d,	// (0x00026bbb) grid_dialer_command_1_pane

0x2a1d,	// (0x00026bbb) grid_dialer_command_2_pane

0x2a1d,	// (0x00026bbb) grid_dialer_keypad_pane

0x75f5,	// (0x0002b793) bg_popup_call_pane_cp06_ParamLimits

0x75f5,	// (0x0002b793) bg_popup_call_pane_cp06

0x75f5,	// (0x0002b793) dialer_ne_clear_pane_ParamLimits

0x75f5,	// (0x0002b793) dialer_ne_clear_pane

0x3c4d,	// (0x00027deb) dialer_ne_pane_g1

0x5ac2,	// (0x00029c60) dialer_ne_pane_t1_ParamLimits

0x5ac2,	// (0x00029c60) dialer_ne_pane_t1

0x7603,	// (0x0002b7a1) dialer_ne_pane_t2_ParamLimits

0x7603,	// (0x0002b7a1) dialer_ne_pane_t2

0x762b,	// (0x0002b7c9) dialer_ne_pane_t3_ParamLimits

0x762b,	// (0x0002b7c9) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x000338e3) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x000338e3) dialer_ne_pane_t

0x762b,	// (0x0002b7c9) dialer_ne_pane_t3_copy1_ParamLimits

0x762b,	// (0x0002b7c9) dialer_ne_pane_t3_copy1

0xc924,	// (0x00030ac2) cell_dialer_keypad_pane_ParamLimits

0xc924,	// (0x00030ac2) cell_dialer_keypad_pane

0x3154,	// (0x000272f2) cell_dialer_command_1_pane_ParamLimits

0x3154,	// (0x000272f2) cell_dialer_command_1_pane

0xc93b,	// (0x00030ad9) cell_dialer_command_2_pane_ParamLimits

0xc93b,	// (0x00030ad9) cell_dialer_command_2_pane

0x3154,	// (0x000272f2) bg_button_pane_cp02_ParamLimits

0x3154,	// (0x000272f2) bg_button_pane_cp02

0x31bb,	// (0x00027359) cell_dialer_keypad_pane_g1_ParamLimits

0x31bb,	// (0x00027359) cell_dialer_keypad_pane_g1

0x3154,	// (0x000272f2) bg_button_pane_cp03_ParamLimits

0x3154,	// (0x000272f2) bg_button_pane_cp03

0x31bb,	// (0x00027359) cell_dialer_command_1_pane_g1_ParamLimits

0x31bb,	// (0x00027359) cell_dialer_command_1_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp04

0x3c4d,	// (0x00027deb) cell_dialer_command_2_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp06

0x3c4d,	// (0x00027deb) dialer_ne_clear_pane_g1

0x5871,	// (0x00029a0f) navi_pane_g2

0x589f,	// (0x00029a3d) navi_pane_g3

0x0002,

0xf374,	// (0x00033512) navi_pane_g

0x592e,	// (0x00029acc) navi_pane_mv_g2

0x5955,	// (0x00029af3) navi_pane_mv_g5

0x595d,	// (0x00029afb) navi_pane_mv_t1

0x32fd,	// (0x0002749b) main_clock2_pane

0x3154,	// (0x000272f2) main_clock2_list_pane_ParamLimits

0x3154,	// (0x000272f2) main_clock2_list_pane

0x76c1,	// (0x0002b85f) main_clock2_pane_t1_ParamLimits

0x76c1,	// (0x0002b85f) main_clock2_pane_t1

0x76fc,	// (0x0002b89a) main_clock2_pane_t2_ParamLimits

0x76fc,	// (0x0002b89a) main_clock2_pane_t2

0x0004,

0xf751,	// (0x000338ef) main_clock2_pane_t_ParamLimits

0xf751,	// (0x000338ef) main_clock2_pane_t

0x779c,	// (0x0002b93a) popup_clock_analogue_window_cp03_ParamLimits

0x779c,	// (0x0002b93a) popup_clock_analogue_window_cp03

0x77c1,	// (0x0002b95f) popup_clock_digital_window_cp02_ParamLimits

0x77c1,	// (0x0002b95f) popup_clock_digital_window_cp02

0x7824,	// (0x0002b9c2) main_clock2_list_single_pane_ParamLimits

0x7824,	// (0x0002b9c2) main_clock2_list_single_pane

0x3a60,	// (0x00027bfe) list_highlight_pane_cp05

0xc982,	// (0x00030b20) main_clock2_list_single_pane_t1

0x3e64,	// (0x00028002) popup_toolbar_window_cp04_ParamLimits

0x31c9,	// (0x00027367) camera2_autofocus_pane_g2_ParamLimits

0x31c9,	// (0x00027367) camera2_autofocus_pane_g2

0x31c9,	// (0x00027367) camera2_autofocus_pane_g3_ParamLimits

0x31c9,	// (0x00027367) camera2_autofocus_pane_g3

0x31c9,	// (0x00027367) camera2_autofocus_pane_g4_ParamLimits

0x31c9,	// (0x00027367) camera2_autofocus_pane_g4

0x31c9,	// (0x00027367) camera2_autofocus_pane_g5_ParamLimits

0x31c9,	// (0x00027367) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x00033833) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x00033833) camera2_autofocus_pane_g

0x6f3e,	// (0x0002b0dc) camera2_autofocus_pane_cp_g2

0x6f46,	// (0x0002b0e4) camera2_autofocus_pane_cp_g3

0x6f4e,	// (0x0002b0ec) camera2_autofocus_pane_cp_g4

0x6f56,	// (0x0002b0f4) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x00033899) camera2_autofocus_pane_cp_g

0x2a1d,	// (0x00026bbb) popup_dialer_spcha_window

0x2a1d,	// (0x00026bbb) bg_popup_sub_pane_cp07

0x2a1d,	// (0x00026bbb) list_spcha_pane

0xc990,	// (0x00030b2e) list_single_spcha_pane_ParamLimits

0xc990,	// (0x00030b2e) list_single_spcha_pane

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp06

0x5240,	// (0x000293de) list_single_spcha_pane_t1

0xbb49,	// (0x0002fce7) popup_call2_audio_out_window_g4_ParamLimits

0xbb49,	// (0x0002fce7) popup_call2_audio_out_window_g4

0xafb8,	// (0x0002f156) main_imed2_pane

0xc09b,	// (0x00030239) popup_imed_adjust2_window

0x1bcc,	// (0x00025d6a) popup_imed_trans_window_ParamLimits

0x1bcc,	// (0x00025d6a) popup_imed_trans_window

0xc3f4,	// (0x00030592) popup_blid_sat_info2_window_t1

0xc402,	// (0x000305a0) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x000337c8) popup_blid_sat_info2_window_t

0x7836,	// (0x0002b9d4) aid_size_cell_colour_35

0x7856,	// (0x0002b9f4) aid_size_cell_colour_112

0x7876,	// (0x0002ba14) aid_size_cell_effect

0x5ad6,	// (0x00029c74) bg_tb_trans_pane_cp02

0x50f3,	// (0x00029291) heading_imed_pane

0x7896,	// (0x0002ba34) listscroll_imed_pane

0xc9a2,	// (0x00030b40) heading_imed_pane_g1

0xc9aa,	// (0x00030b48) heading_imed_pane_t1

0xc9b8,	// (0x00030b56) grid_imed_colour_35_pane_ParamLimits

0xc9b8,	// (0x00030b56) grid_imed_colour_35_pane

0x78a2,	// (0x0002ba40) grid_imed_effect_pane

0xc9cf,	// (0x00030b6d) list_imed_aspect_pane

0x78b8,	// (0x0002ba56) scroll_pane_cp027_ParamLimits

0x78b8,	// (0x0002ba56) scroll_pane_cp027

0x78c9,	// (0x0002ba67) cell_imed_effect_pane_ParamLimits

0x78c9,	// (0x0002ba67) cell_imed_effect_pane

0xc9d7,	// (0x00030b75) cell_imed_colour_pane_ParamLimits

0xc9d7,	// (0x00030b75) cell_imed_colour_pane

0xca19,	// (0x00030bb7) cell_imed_colour_pane_g1_ParamLimits

0xca19,	// (0x00030bb7) cell_imed_colour_pane_g1

0xca2a,	// (0x00030bc8) hgihlgiht_grid_pane_cp016_ParamLimits

0xca2a,	// (0x00030bc8) hgihlgiht_grid_pane_cp016

0x78f0,	// (0x0002ba8e) cell_imed_effect_pane_g1

0x78f8,	// (0x0002ba96) grid_highlight_pane_cp017

0xca3b,	// (0x00030bd9) list_imed_single_pane_ParamLimits

0xca3b,	// (0x00030bd9) list_imed_single_pane

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp07

0xca50,	// (0x00030bee) list_imed_aspect_pane_comp1_t1

0x5ad6,	// (0x00029c74) bg_tb_trans_pane_cp05

0xca72,	// (0x00030c10) popup_imed_adjust2_window_g1

0xca99,	// (0x00030c37) popup_imed_adjust2_window_t1

0xcab1,	// (0x00030c4f) slider_imed_adjust_pane

0xcac5,	// (0x00030c63) slider_imed_adjust_pane_g1

0xcad5,	// (0x00030c73) slider_imed_adjust_pane_g2

0xcae5,	// (0x00030c83) slider_imed_adjust_pane_g3

0xcaf6,	// (0x00030c94) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0003390c) slider_imed_adjust_pane_g

0x7901,	// (0x0002ba9f) aid_size_cell_clipart2

0x790d,	// (0x0002baab) grid_imed_clipart_pane

0xcb07,	// (0x00030ca5) scroll_pane_cp031

0x7917,	// (0x0002bab5) cell_imed_clipart_pane_ParamLimits

0x7917,	// (0x0002bab5) cell_imed_clipart_pane

0x7939,	// (0x0002bad7) cell_imed_clipart_pane_g1

0x2a1d,	// (0x00026bbb) grid_highlight_pane_cp014

0x769d,	// (0x0002b83b) main_clock2_pane_g1_ParamLimits

0x769d,	// (0x0002b83b) main_clock2_pane_g1

0x77e1,	// (0x0002b97f) aid_call2_pane_cp10

0x77f3,	// (0x0002b991) aid_call_pane_cp10

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g1

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g2

0x1d8b,	// (0x00025f29) popup_clock_analogue_window_cp10_g3

0x1d8b,	// (0x00025f29) popup_clock_analogue_window_cp10_g4

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x000338fa) popup_clock_analogue_window_cp10_g

0x7805,	// (0x0002b9a3) popup_clock_analogue_window_cp10_t1

0x1da1,	// (0x00025f3f) clock_digital_number_pane_cp10_ParamLimits

0x1da1,	// (0x00025f3f) clock_digital_number_pane_cp10

0x1db9,	// (0x00025f57) clock_digital_number_pane_cp11_ParamLimits

0x1db9,	// (0x00025f57) clock_digital_number_pane_cp11

0x1dd1,	// (0x00025f6f) clock_digital_number_pane_cp12_ParamLimits

0x1dd1,	// (0x00025f6f) clock_digital_number_pane_cp12

0x1deb,	// (0x00025f89) clock_digital_number_pane_cp13_ParamLimits

0x1deb,	// (0x00025f89) clock_digital_number_pane_cp13

0x1e05,	// (0x00025fa3) clock_digital_separator_pane_cp10_ParamLimits

0x1e05,	// (0x00025fa3) clock_digital_separator_pane_cp10

0x1e1f,	// (0x00025fbd) popup_clock_digital_window_cp02_t1_ParamLimits

0x1e1f,	// (0x00025fbd) popup_clock_digital_window_cp02_t1

0x312a,	// (0x000272c8) clock_digital_number_pane_cp10_g1

0x312a,	// (0x000272c8) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x00033915) clock_digital_number_pane_cp10_g

0x312a,	// (0x000272c8) clock_digital_separator_pane_cp10_g1

0x312a,	// (0x000272c8) clock_digital_separator_pane_g2_cp10

0x599f,	// (0x00029b3d) navi_pane_vded_g4

0x59a8,	// (0x00029b46) navi_pane_vded_g5

0x59b1,	// (0x00029b4f) navi_pane_vded_t1

0xafb8,	// (0x0002f156) main_vded_pane

0x7942,	// (0x0002bae0) main_vded_pane_g1

0x794c,	// (0x0002baea) main_vded_pane_g2

0x7956,	// (0x0002baf4) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0003391a) main_vded_pane_g

0x7960,	// (0x0002bafe) main_vded_pane_t1

0x796e,	// (0x0002bb0c) main_vded_pane_t2

0x0001,

0xf783,	// (0x00033921) main_vded_pane_t

0x797c,	// (0x0002bb1a) vded_slider_pane

0x7984,	// (0x0002bb22) vded_video_pane

0xcb0f,	// (0x00030cad) vded_video_pane_g1

0x798c,	// (0x0002bb2a) vded_video_pane_g2

0x3c4d,	// (0x00027deb) vded_video_pane_g3

0x0002,

0xf788,	// (0x00033926) vded_video_pane_g

0xcb19,	// (0x00030cb7) vded_slider_pane_g1

0xc307,	// (0x000304a5) vded_slider_pane_g2

0xcb22,	// (0x00030cc0) vded_slider_pane_g3

0xcb2b,	// (0x00030cc9) vded_slider_pane_g4

0xcb34,	// (0x00030cd2) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x0003392d) vded_slider_pane_g

0x7502,	// (0x0002b6a0) mup3_rocker_pane_ParamLimits

0x7502,	// (0x0002b6a0) mup3_rocker_pane

0x7995,	// (0x0002bb33) mup3_control_keys_pane_g1

0x799d,	// (0x0002bb3b) mup3_control_keys_pane_g2

0x79a5,	// (0x0002bb43) mup3_control_keys_pane_g3

0x79ad,	// (0x0002bb4b) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x00033938) mup3_control_keys_pane_g

0x1784,	// (0x00025922) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1784,	// (0x00025922) popup_toolbar2_fixed_window_cp01

0x7536,	// (0x0002b6d4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7536,	// (0x0002b6d4) popup_toolbar2_fixed_window_cp02

0xb4d2,	// (0x0002f670) popup_call2_audio_second_window_t4_ParamLimits

0xb4d2,	// (0x0002f670) popup_call2_audio_second_window_t4

0xba0e,	// (0x0002fbac) popup_call2_audio_first_window_t6_ParamLimits

0xba0e,	// (0x0002fbac) popup_call2_audio_first_window_t6

0xbc4c,	// (0x0002fdea) popup_call2_audio_out_window_t6_ParamLimits

0xbc4c,	// (0x0002fdea) popup_call2_audio_out_window_t6

0xafb8,	// (0x0002f156) main_vitu_pane

0x3154,	// (0x000272f2) aid_size_cell_itu_ParamLimits

0x3154,	// (0x000272f2) aid_size_cell_itu

0x3154,	// (0x000272f2) bg_popup_window_pane_cp08_ParamLimits

0x3154,	// (0x000272f2) bg_popup_window_pane_cp08

0x3154,	// (0x000272f2) field_vitu_entry_pane_ParamLimits

0x3154,	// (0x000272f2) field_vitu_entry_pane

0x3154,	// (0x000272f2) grid_vitu_function_pane_ParamLimits

0x3154,	// (0x000272f2) grid_vitu_function_pane

0x3154,	// (0x000272f2) grid_vitu_itu_pane_ParamLimits

0x3154,	// (0x000272f2) grid_vitu_itu_pane

0x3154,	// (0x000272f2) cell_vitu_itu_pane_ParamLimits

0x3154,	// (0x000272f2) cell_vitu_itu_pane

0x3154,	// (0x000272f2) cell_vitu_function_pane_ParamLimits

0x3154,	// (0x000272f2) cell_vitu_function_pane

0x3154,	// (0x000272f2) bg_popup_sub_pane_cp08_ParamLimits

0x3154,	// (0x000272f2) bg_popup_sub_pane_cp08

0x3ac9,	// (0x00027c67) field_vitu_entry_pane_t1_ParamLimits

0x3ac9,	// (0x00027c67) field_vitu_entry_pane_t1

0xcb3d,	// (0x00030cdb) field_vitu_entry_pane_t2_ParamLimits

0xcb3d,	// (0x00030cdb) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x00033941) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x00033941) field_vitu_entry_pane_t

0xc39b,	// (0x00030539) bg_button_pane_cp05_ParamLimits

0xc39b,	// (0x00030539) bg_button_pane_cp05

0xcb5a,	// (0x00030cf8) cell_vitu_itu_pane_g1

0x5aae,	// (0x00029c4c) cell_vitu_itu_pane_t1_ParamLimits

0x5aae,	// (0x00029c4c) cell_vitu_itu_pane_t1

0x5aae,	// (0x00029c4c) cell_vitu_itu_pane_t2_ParamLimits

0x5aae,	// (0x00029c4c) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x00033946) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x00033946) cell_vitu_itu_pane_t

0x2a1d,	// (0x00026bbb) bg_button_pane_cp07

0x3c4d,	// (0x00027deb) cell_vitu_function_pane_g1

0xafc2,	// (0x0002f160) main_calc_pane_g1

0x15e4,	// (0x00025782) aid_visual_content_pane

0xafb8,	// (0x0002f156) main_vradio_pane

0x31bb,	// (0x00027359) main_vradio_pane_g1_ParamLimits

0x31bb,	// (0x00027359) main_vradio_pane_g1

0x31c9,	// (0x00027367) main_vradio_pane_g2_ParamLimits

0x31c9,	// (0x00027367) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x0003394d) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x0003394d) main_vradio_pane_g

0x3ac9,	// (0x00027c67) main_vradio_pane_t1_ParamLimits

0x3ac9,	// (0x00027c67) main_vradio_pane_t1

0x3ac9,	// (0x00027c67) main_vradio_pane_t2_ParamLimits

0x3ac9,	// (0x00027c67) main_vradio_pane_t2

0x5ac2,	// (0x00029c60) main_vradio_pane_t3_ParamLimits

0x5ac2,	// (0x00029c60) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x00033952) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x00033952) main_vradio_pane_t

0x3154,	// (0x000272f2) vradio_rocker_control_pane_ParamLimits

0x3154,	// (0x000272f2) vradio_rocker_control_pane

0x3154,	// (0x000272f2) vradio_station_info_pane_ParamLimits

0x3154,	// (0x000272f2) vradio_station_info_pane

0x3154,	// (0x000272f2) vradio_frequency_info_pane_ParamLimits

0x3154,	// (0x000272f2) vradio_frequency_info_pane

0x3c4d,	// (0x00027deb) vradio_station_info_pane_g1

0x5aae,	// (0x00029c4c) vradio_station_info_pane_t1_ParamLimits

0x5aae,	// (0x00029c4c) vradio_station_info_pane_t1

0x5ac2,	// (0x00029c60) vradio_station_info_pane_t2_ParamLimits

0x5ac2,	// (0x00029c60) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x00033959) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x00033959) vradio_station_info_pane_t

0x2a1d,	// (0x00026bbb) vradio_tuning_pane

0x79bd,	// (0x0002bb5b) vradio_rocker_control_pane_g1

0xcb76,	// (0x00030d14) vradio_rocker_control_pane_g2

0x79c7,	// (0x0002bb65) vradio_rocker_control_pane_g3

0x79d1,	// (0x0002bb6f) vradio_rocker_control_pane_g4

0x79db,	// (0x0002bb79) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x0003395e) vradio_rocker_control_pane_g

0x3c4d,	// (0x00027deb) vradio_frequency_info_pane_g1

0x3ac9,	// (0x00027c67) vradio_frequency_info_pane_t1_ParamLimits

0x3ac9,	// (0x00027c67) vradio_frequency_info_pane_t1

0x79e5,	// (0x0002bb83) vradio_tuning_pane_g1

0x79f2,	// (0x0002bb90) vradio_tuning_pane_t1

0xaf69,	// (0x0002f107) area_side_right_pane_ParamLimits

0xaf69,	// (0x0002f107) area_side_right_pane

0xc03c,	// (0x000301da) status_small_pane_g1

0xc044,	// (0x000301e2) status_small_pane_g2

0xc04d,	// (0x000301eb) status_small_pane_g3

0xc056,	// (0x000301f4) status_small_pane_g4

0x0003,

0xf58c,	// (0x0003372a) status_small_pane_g

0xc05f,	// (0x000301fd) status_small_pane_t1

0xafb8,	// (0x0002f156) main_video3_pane

0xcb7e,	// (0x00030d1c) cams_zoom_vslider_pane

0xcb86,	// (0x00030d24) image3_wide_pane_ParamLimits

0xcb86,	// (0x00030d24) image3_wide_pane

0xcba0,	// (0x00030d3e) image3_wide_small_pane

0xcbac,	// (0x00030d4a) main_video3_pane_g1_ParamLimits

0xcbac,	// (0x00030d4a) main_video3_pane_g1

0xcbc8,	// (0x00030d66) main_video3_pane_g2_ParamLimits

0xcbc8,	// (0x00030d66) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x00033969) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x00033969) main_video3_pane_g

0xcbe4,	// (0x00030d82) main_video3_pane_t1_ParamLimits

0xcbe4,	// (0x00030d82) main_video3_pane_t1

0xcc0f,	// (0x00030dad) main_video3_pane_t2_ParamLimits

0xcc0f,	// (0x00030dad) main_video3_pane_t2

0xcc3a,	// (0x00030dd8) main_video3_pane_t3_ParamLimits

0xcc3a,	// (0x00030dd8) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x0003396e) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x0003396e) main_video3_pane_t

0xcc67,	// (0x00030e05) cams_zoom_vslider_pane_g1

0xcc70,	// (0x00030e0e) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x00033975) cams_zoom_vslider_pane_g

0xcc78,	// (0x00030e16) small_slider_vertical_pane

0x3c4d,	// (0x00027deb) small_slider_vertical_pane_g1

0x3c4d,	// (0x00027deb) small_slider_vertical_pane_g2

0xcc80,	// (0x00030e1e) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0003397a) small_slider_vertical_pane_g

0xafb8,	// (0x0002f156) main_hwr_training_pane

0xcc89,	// (0x00030e27) hwr_training_instruct_pane_ParamLimits

0xcc89,	// (0x00030e27) hwr_training_instruct_pane

0x7a01,	// (0x0002bb9f) hwr_training_navi_pane_ParamLimits

0x7a01,	// (0x0002bb9f) hwr_training_navi_pane

0x7a20,	// (0x0002bbbe) hwr_training_write_pane_ParamLimits

0x7a20,	// (0x0002bbbe) hwr_training_write_pane

0x2a1d,	// (0x00026bbb) bg_frame_shadow_pane

0xccc0,	// (0x00030e5e) hwr_training_write_pane_g1

0xccc8,	// (0x00030e66) hwr_training_write_pane_g2

0xccd0,	// (0x00030e6e) hwr_training_write_pane_g3

0xccd8,	// (0x00030e76) hwr_training_write_pane_g4

0xcce0,	// (0x00030e7e) hwr_training_write_pane_g5

0xcce8,	// (0x00030e86) hwr_training_write_pane_g6

0xccf0,	// (0x00030e8e) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x00033981) hwr_training_write_pane_g

0xccf8,	// (0x00030e96) hwr_training_navi_pane_g1_ParamLimits

0xccf8,	// (0x00030e96) hwr_training_navi_pane_g1

0xcd0a,	// (0x00030ea8) hwr_training_navi_pane_g2_ParamLimits

0xcd0a,	// (0x00030ea8) hwr_training_navi_pane_g2

0xcd1c,	// (0x00030eba) hwr_training_navi_pane_g3_ParamLimits

0xcd1c,	// (0x00030eba) hwr_training_navi_pane_g3

0xcd2c,	// (0x00030eca) hwr_training_navi_pane_g4_ParamLimits

0xcd2c,	// (0x00030eca) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x00033990) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x00033990) hwr_training_navi_pane_g

0xcd39,	// (0x00030ed7) hwr_training_navi_pane_t1

0x7a5b,	// (0x0002bbf9) list_single_hwr_training_instruct_pane_ParamLimits

0x7a5b,	// (0x0002bbf9) list_single_hwr_training_instruct_pane

0xcd47,	// (0x00030ee5) list_single_hwr_training_instruct_pane_t1

0xc4f5,	// (0x00030693) bg_frame_shadow_pane_g1

0xcd56,	// (0x00030ef4) bg_frame_shadow_pane_g2

0xcd5e,	// (0x00030efc) bg_frame_shadow_pane_g3

0xcd66,	// (0x00030f04) bg_frame_shadow_pane_g4

0xcd6e,	// (0x00030f0c) bg_frame_shadow_pane_g5

0xcd76,	// (0x00030f14) bg_frame_shadow_pane_g6

0xcd7e,	// (0x00030f1c) bg_frame_shadow_pane_g7

0x3495,	// (0x00027633) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0003399b) bg_frame_shadow_pane_g

0xafb8,	// (0x0002f156) main_video_tele_dialer_pane

0x1e4d,	// (0x00025feb) aid_size_cell_video_keypad_ParamLimits

0x1e4d,	// (0x00025feb) aid_size_cell_video_keypad

0x1e67,	// (0x00026005) grid_video_dialer_keypad_pane_ParamLimits

0x1e67,	// (0x00026005) grid_video_dialer_keypad_pane

0x1eb3,	// (0x00026051) video_down_pane_cp_ParamLimits

0x1eb3,	// (0x00026051) video_down_pane_cp

0x1ec9,	// (0x00026067) cell_video_dialer_keypad_pane_ParamLimits

0x1ec9,	// (0x00026067) cell_video_dialer_keypad_pane

0xcd86,	// (0x00030f24) bg_button_pane_cp08_ParamLimits

0xcd86,	// (0x00030f24) bg_button_pane_cp08

0x7a8c,	// (0x0002bc2a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a8c,	// (0x0002bc2a) cell_video_dialer_keypad_pane_g1

0x74ec,	// (0x0002b68a) mup3_rocker2_pane_ParamLimits

0x74ec,	// (0x0002b68a) mup3_rocker2_pane

0x3c4d,	// (0x00027deb) mup3_rocker2_pane_g1

0x1aa1,	// (0x00025c3f) main_dialer2_pane

0xafb8,	// (0x0002f156) main_mp4_pane

0xcdb0,	// (0x00030f4e) main_mp4_pane_g1_ParamLimits

0xcdb0,	// (0x00030f4e) main_mp4_pane_g1

0xcdb0,	// (0x00030f4e) main_mp4_pane_g2_ParamLimits

0xcdb0,	// (0x00030f4e) main_mp4_pane_g2

0x1eeb,	// (0x00026089) main_mp4_pane_g3_ParamLimits

0x1eeb,	// (0x00026089) main_mp4_pane_g3

0xcdbe,	// (0x00030f5c) main_mp4_pane_g4_ParamLimits

0xcdbe,	// (0x00030f5c) main_mp4_pane_g4

0xcdec,	// (0x00030f8a) main_mp4_pane_g5_ParamLimits

0xcdec,	// (0x00030f8a) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x000339bb) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x000339bb) main_mp4_pane_g

0xce60,	// (0x00030ffe) main_mp4_pane_t1_ParamLimits

0xce60,	// (0x00030ffe) main_mp4_pane_t1

0xcebc,	// (0x0003105a) main_mp4_pane_t2_ParamLimits

0xcebc,	// (0x0003105a) main_mp4_pane_t2

0xcf0e,	// (0x000310ac) main_mp4_pane_t3_ParamLimits

0xcf0e,	// (0x000310ac) main_mp4_pane_t3

0xcf34,	// (0x000310d2) main_mp4_pane_t4_ParamLimits

0xcf34,	// (0x000310d2) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x000339cc) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x000339cc) main_mp4_pane_t

0xcf78,	// (0x00031116) mp4_progress_pane_ParamLimits

0xcf78,	// (0x00031116) mp4_progress_pane

0xcfc2,	// (0x00031160) mp4_rocker_pane_ParamLimits

0xcfc2,	// (0x00031160) mp4_rocker_pane

0xcfea,	// (0x00031188) mp4_progress_pane_t1

0xd003,	// (0x000311a1) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x000339d5) mp4_progress_pane_t

0xd01c,	// (0x000311ba) mup_progress_pane_cp04

0xc310,	// (0x000304ae) mp4_rocker_pane_g1

0x1f27,	// (0x000260c5) aid_cell_size_keypad2_ParamLimits

0x1f27,	// (0x000260c5) aid_cell_size_keypad2

0x1f3d,	// (0x000260db) dialer2_ne_pane_ParamLimits

0x1f3d,	// (0x000260db) dialer2_ne_pane

0x1f57,	// (0x000260f5) grid_dialer2_keypad_pane_ParamLimits

0x1f57,	// (0x000260f5) grid_dialer2_keypad_pane

0xc39b,	// (0x00030539) bg_popup_call_pane_cp07_ParamLimits

0xc39b,	// (0x00030539) bg_popup_call_pane_cp07

0x7ac3,	// (0x0002bc61) dialer2_ne_pane_t1_ParamLimits

0x7ac3,	// (0x0002bc61) dialer2_ne_pane_t1

0x1f73,	// (0x00026111) cell_dialer2_keypad_pane_ParamLimits

0x1f73,	// (0x00026111) cell_dialer2_keypad_pane

0xd041,	// (0x000311df) bg_button_pane_pane_cp04_ParamLimits

0xd041,	// (0x000311df) bg_button_pane_pane_cp04

0x7afe,	// (0x0002bc9c) cell_dialer2_keypad_pane_g1_ParamLimits

0x7afe,	// (0x0002bc9c) cell_dialer2_keypad_pane_g1

0x3d26,	// (0x00027ec4) aid_placing_vt_set_content_ParamLimits

0x3d26,	// (0x00027ec4) aid_placing_vt_set_content

0x3d4e,	// (0x00027eec) aid_placing_vt_set_title_ParamLimits

0x3d4e,	// (0x00027eec) aid_placing_vt_set_title

0xafb8,	// (0x0002f156) main_image3_pane

0x1ff3,	// (0x00026191) area_side_right_pane_cp01_ParamLimits

0x1ff3,	// (0x00026191) area_side_right_pane_cp01

0xcdb0,	// (0x00030f4e) main_image3_pane_g1_ParamLimits

0xcdb0,	// (0x00030f4e) main_image3_pane_g1

0x200a,	// (0x000261a8) main_image3_pane_g2_ParamLimits

0x200a,	// (0x000261a8) main_image3_pane_g2

0x2032,	// (0x000261d0) main_image3_pane_g3_ParamLimits

0x2032,	// (0x000261d0) main_image3_pane_g3

0x205c,	// (0x000261fa) main_image3_pane_g4_ParamLimits

0x205c,	// (0x000261fa) main_image3_pane_g4

0x0003,

0xf846,	// (0x000339e4) main_image3_pane_g_ParamLimits

0xf846,	// (0x000339e4) main_image3_pane_g

0x2086,	// (0x00026224) main_image3_pane_t1_ParamLimits

0x2086,	// (0x00026224) main_image3_pane_t1

0x20de,	// (0x0002627c) main_image3_pane_t2_ParamLimits

0x20de,	// (0x0002627c) main_image3_pane_t2

0x2130,	// (0x000262ce) main_image3_pane_t3_ParamLimits

0x2130,	// (0x000262ce) main_image3_pane_t3

0x0003,

0xf84f,	// (0x000339ed) main_image3_pane_t_ParamLimits

0xf84f,	// (0x000339ed) main_image3_pane_t

0x3154,	// (0x000272f2) grid_sctrl_middle_pane_cp01_ParamLimits

0x3154,	// (0x000272f2) grid_sctrl_middle_pane_cp01

0x7b66,	// (0x0002bd04) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b66,	// (0x0002bd04) cell_sctrl_middle_pane_cp01

0x7b83,	// (0x0002bd21) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b83,	// (0x0002bd21) cell_sctrl_middle_pane_cp01_g1

0xafb8,	// (0x0002f156) main_call4_pane

0x21b8,	// (0x00026356) aid_size_button_call4_ParamLimits

0x21b8,	// (0x00026356) aid_size_button_call4

0x21eb,	// (0x00026389) call4_windows_pane_ParamLimits

0x21eb,	// (0x00026389) call4_windows_pane

0x220a,	// (0x000263a8) grid_call4_button_pane_ParamLimits

0x220a,	// (0x000263a8) grid_call4_button_pane

0x7ba3,	// (0x0002bd41) call4_windows_conf_pane

0x7bba,	// (0x0002bd58) popup_call4_audio_first_window_ParamLimits

0x7bba,	// (0x0002bd58) popup_call4_audio_first_window

0x7c0a,	// (0x0002bda8) popup_call4_audio_second_window_ParamLimits

0x7c0a,	// (0x0002bda8) popup_call4_audio_second_window

0x7c21,	// (0x0002bdbf) popup_call4_audio_wait_window_ParamLimits

0x7c21,	// (0x0002bdbf) popup_call4_audio_wait_window

0x2233,	// (0x000263d1) cell_call4_button_pane_ParamLimits

0x2233,	// (0x000263d1) cell_call4_button_pane

0x7c2f,	// (0x0002bdcd) bg_button_pane_cp09_ParamLimits

0x7c2f,	// (0x0002bdcd) bg_button_pane_cp09

0x2258,	// (0x000263f6) cell_call4_button_pane_g1_ParamLimits

0x2258,	// (0x000263f6) cell_call4_button_pane_g1

0x227e,	// (0x0002641c) cell_call4_button_pane_t1_ParamLimits

0x227e,	// (0x0002641c) cell_call4_button_pane_t1

0xd0b9,	// (0x00031257) popup_call4_audio_conf_window_ParamLimits

0xd0b9,	// (0x00031257) popup_call4_audio_conf_window

0x754c,	// (0x0002b6ea) mup3_progress_pane_t1_ParamLimits

0x756b,	// (0x0002b709) mup3_progress_pane_t2_ParamLimits

0xc84d,	// (0x000309eb) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x000338c2) mup3_progress_pane_t_ParamLimits

0xc86a,	// (0x00030a08) mup_progress_pane_cp03_ParamLimits

0x79b5,	// (0x0002bb53) mup3_control_keys_pane_g4_copy1

0xcfa6,	// (0x00031144) mp4_rocker2_pane_ParamLimits

0xcfa6,	// (0x00031144) mp4_rocker2_pane

0xd0cd,	// (0x0003126b) mp4_rocker2_pane_g1

0xd0d5,	// (0x00031273) mp4_rocker2_pane_g2

0xd0dd,	// (0x0003127b) mp4_rocker2_pane_g3

0xd0e5,	// (0x00031283) mp4_rocker2_pane_g4

0xd0ed,	// (0x0003128b) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x000339f6) mp4_rocker2_pane_g

0xafb8,	// (0x0002f156) main_camera4_pane

0xafb8,	// (0x0002f156) main_video4_pane

0x1e81,	// (0x0002601f) main_video_tele_dialer_pane_t1_ParamLimits

0x1e81,	// (0x0002601f) main_video_tele_dialer_pane_t1

0x1e9a,	// (0x00026038) main_video_tele_dialer_pane_t2_ParamLimits

0x1e9a,	// (0x00026038) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x000339ac) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x000339ac) main_video_tele_dialer_pane_t

0x22bc,	// (0x0002645a) cam4_autofocus_pane_ParamLimits

0x22bc,	// (0x0002645a) cam4_autofocus_pane

0x22d2,	// (0x00026470) cam4_image_uncrop_pane_ParamLimits

0x22d2,	// (0x00026470) cam4_image_uncrop_pane

0x22ec,	// (0x0002648a) cam4_indicators_pane_ParamLimits

0x22ec,	// (0x0002648a) cam4_indicators_pane

0x2317,	// (0x000264b5) main_camera4_pane_g1_ParamLimits

0x2317,	// (0x000264b5) main_camera4_pane_g1

0x2329,	// (0x000264c7) main_camera4_pane_g2_ParamLimits

0x2329,	// (0x000264c7) main_camera4_pane_g2

0x233c,	// (0x000264da) main_camera4_pane_g3_ParamLimits

0x233c,	// (0x000264da) main_camera4_pane_g3

0x234f,	// (0x000264ed) main_camera4_pane_g4_ParamLimits

0x234f,	// (0x000264ed) main_camera4_pane_g4

0x2362,	// (0x00026500) main_camera4_pane_g5_ParamLimits

0x2362,	// (0x00026500) main_camera4_pane_g5

0x0005,

0xf863,	// (0x00033a01) main_camera4_pane_g_ParamLimits

0xf863,	// (0x00033a01) main_camera4_pane_g

0x2386,	// (0x00026524) main_camera4_pane_t1_ParamLimits

0x2386,	// (0x00026524) main_camera4_pane_t1

0xd111,	// (0x000312af) bg_tb_trans_pane_cp06

0xd127,	// (0x000312c5) cam4_indicators_pane_g1

0xd138,	// (0x000312d6) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x00033a1c) cam4_indicators_pane_g

0xd156,	// (0x000312f4) cam4_indicators_pane_t1

0x23d6,	// (0x00026574) main_video4_pane_g1_ParamLimits

0x23d6,	// (0x00026574) main_video4_pane_g1

0x23e5,	// (0x00026583) main_video4_pane_g2_ParamLimits

0x23e5,	// (0x00026583) main_video4_pane_g2

0x23f4,	// (0x00026592) main_video4_pane_g3_ParamLimits

0x23f4,	// (0x00026592) main_video4_pane_g3

0x2403,	// (0x000265a1) main_video4_pane_g4_ParamLimits

0x2403,	// (0x000265a1) main_video4_pane_g4

0x0004,

0xf885,	// (0x00033a23) main_video4_pane_g_ParamLimits

0xf885,	// (0x00033a23) main_video4_pane_g

0x2421,	// (0x000265bf) vid4_indicators_pane_ParamLimits

0x2421,	// (0x000265bf) vid4_indicators_pane

0x244f,	// (0x000265ed) video4_image_uncrop_cif_pane_ParamLimits

0x244f,	// (0x000265ed) video4_image_uncrop_cif_pane

0x2469,	// (0x00026607) video4_image_uncrop_nhd_pane_ParamLimits

0x2469,	// (0x00026607) video4_image_uncrop_nhd_pane

0x22d2,	// (0x00026470) video4_image_uncrop_vga_pane_ParamLimits

0x22d2,	// (0x00026470) video4_image_uncrop_vga_pane

0xafaa,	// (0x0002f148) bg_tb_trans_pane_cp07

0xd182,	// (0x00031320) vid4_indicators_pane_g1

0xd196,	// (0x00031334) vid4_indicators_pane_g2

0xd1aa,	// (0x00031348) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x00033a2e) vid4_indicators_pane_g

0xd1d9,	// (0x00031377) vid4_indicators_pane_t1

0x7c4f,	// (0x0002bded) cam4_autofocus_pane_g1

0x7c57,	// (0x0002bdf5) cam4_autofocus_pane_g2

0x7c5f,	// (0x0002bdfd) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x00033a39) cam4_autofocus_pane_g

0x7c67,	// (0x0002be05) cam4_autofocus_pane_g3_copy1

0x7a70,	// (0x0002bc0e) video_down_pane_cp_t1

0x7a7e,	// (0x0002bc1c) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x000339b1) video_down_pane_cp_t

0xafaa,	// (0x0002f148) popup_vitu2_window_ParamLimits

0xafaa,	// (0x0002f148) popup_vitu2_window

0x247d,	// (0x0002661b) aid_size_cell2_itu2_ParamLimits

0x247d,	// (0x0002661b) aid_size_cell2_itu2

0x249d,	// (0x0002663b) aid_size_cell_itu2_ParamLimits

0x249d,	// (0x0002663b) aid_size_cell_itu2

0x24ea,	// (0x00026688) bg_popup_window_pane_cp09_ParamLimits

0x24ea,	// (0x00026688) bg_popup_window_pane_cp09

0x24f8,	// (0x00026696) field_vitu2_entry_pane_ParamLimits

0x24f8,	// (0x00026696) field_vitu2_entry_pane

0x251b,	// (0x000266b9) grid_vitu2_function_pane_ParamLimits

0x251b,	// (0x000266b9) grid_vitu2_function_pane

0x2566,	// (0x00026704) grid_vitu2_itu_pane_ParamLimits

0x2566,	// (0x00026704) grid_vitu2_itu_pane

0x25f4,	// (0x00026792) cell_vitu2_itu_pane_ParamLimits

0x25f4,	// (0x00026792) cell_vitu2_itu_pane

0x2620,	// (0x000267be) cell_vitu2_function_pane_ParamLimits

0x2620,	// (0x000267be) cell_vitu2_function_pane

0xd1f0,	// (0x0003138e) bg_popup_call_pane_cp08_ParamLimits

0xd1f0,	// (0x0003138e) bg_popup_call_pane_cp08

0xd207,	// (0x000313a5) field_vitu2_entry_pane_g1

0xd213,	// (0x000313b1) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x00033a40) field_vitu2_entry_pane_g

0x7c6f,	// (0x0002be0d) field_vitu2_entry_pane_t1_ParamLimits

0x7c6f,	// (0x0002be0d) field_vitu2_entry_pane_t1

0xd21f,	// (0x000313bd) field_vitu2_entry_pane_t2_ParamLimits

0xd21f,	// (0x000313bd) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x00033a47) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x00033a47) field_vitu2_entry_pane_t

0x265f,	// (0x000267fd) bg_button_pane_cp010_ParamLimits

0x265f,	// (0x000267fd) bg_button_pane_cp010

0x266d,	// (0x0002680b) cell_vitu2_itu_pane_g1

0x2693,	// (0x00026831) cell_vitu2_itu_pane_t1_ParamLimits

0x2693,	// (0x00026831) cell_vitu2_itu_pane_t1

0x26f1,	// (0x0002688f) cell_vitu2_itu_pane_t2_ParamLimits

0x26f1,	// (0x0002688f) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x00033a51) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x00033a51) cell_vitu2_itu_pane_t

0xafaa,	// (0x0002f148) bg_button_pane_cp011

0x27dd,	// (0x0002697b) cell_vitu2_function_pane_g1

0xafb8,	// (0x0002f156) main_myfav_hc_pane

0x2180,	// (0x0002631e) popup_image3_note_pane_ParamLimits

0x2180,	// (0x0002631e) popup_image3_note_pane

0x219c,	// (0x0002633a) popup_image3_tool_bar_pane_ParamLimits

0x219c,	// (0x0002633a) popup_image3_tool_bar_pane

0x277f,	// (0x0002691d) cell_vitu2_itu_pane_t3_ParamLimits

0x277f,	// (0x0002691d) cell_vitu2_itu_pane_t3

0x2a1d,	// (0x00026bbb) bg_popup_trans_pane

0xd244,	// (0x000313e2) grid_image3_tool_bar_pane

0xd24e,	// (0x000313ec) bg_popup_trans_pane_g1

0x431f,	// (0x000284bd) bg_popup_trans_pane_g2

0xd256,	// (0x000313f4) bg_popup_trans_pane_g3

0xd25e,	// (0x000313fc) bg_popup_trans_pane_g4

0xd266,	// (0x00031404) bg_popup_trans_pane_g5

0xd26e,	// (0x0003140c) bg_popup_trans_pane_g6

0xd276,	// (0x00031414) bg_popup_trans_pane_g7

0xd27e,	// (0x0003141c) bg_popup_trans_pane_g8

0x42ff,	// (0x0002849d) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x00033a58) bg_popup_trans_pane_g

0xd286,	// (0x00031424) cell_image3_tool_bar_pane_ParamLimits

0xd286,	// (0x00031424) cell_image3_tool_bar_pane

0x3c4d,	// (0x00027deb) cell_image3_tool_bar_pane_g1

0x2a1d,	// (0x00026bbb) bg_popup_trans_pane_cp1

0xd29a,	// (0x00031438) popup_image3_note_pane_t1

0xd2a8,	// (0x00031446) popup_image3_note_pane_t2

0xd2b6,	// (0x00031454) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x00033a6b) popup_image3_note_pane_t

0xd2c4,	// (0x00031462) popup_image3_note_pane_t3_copy1

0x7c9f,	// (0x0002be3d) bg_myfav_hc_instruction_pane_ParamLimits

0x7c9f,	// (0x0002be3d) bg_myfav_hc_instruction_pane

0x7cb3,	// (0x0002be51) cell_myfav_contact_pane_ParamLimits

0x7cb3,	// (0x0002be51) cell_myfav_contact_pane

0x7cd1,	// (0x0002be6f) cell_myfav_contact_pane_cp1_ParamLimits

0x7cd1,	// (0x0002be6f) cell_myfav_contact_pane_cp1

0x7ce9,	// (0x0002be87) cell_myfav_contact_pane_cp2_ParamLimits

0x7ce9,	// (0x0002be87) cell_myfav_contact_pane_cp2

0x7d01,	// (0x0002be9f) cell_myfav_contact_pane_cp3_ParamLimits

0x7d01,	// (0x0002be9f) cell_myfav_contact_pane_cp3

0x7d18,	// (0x0002beb6) cell_myfav_contact_pane_cp4_ParamLimits

0x7d18,	// (0x0002beb6) cell_myfav_contact_pane_cp4

0x7d30,	// (0x0002bece) cell_myfav_contact_pane_cp5_ParamLimits

0x7d30,	// (0x0002bece) cell_myfav_contact_pane_cp5

0x7d44,	// (0x0002bee2) cell_myfav_contact_pane_cp6_ParamLimits

0x7d44,	// (0x0002bee2) cell_myfav_contact_pane_cp6

0x7d5a,	// (0x0002bef8) cell_myfav_contact_pane_cp7_ParamLimits

0x7d5a,	// (0x0002bef8) cell_myfav_contact_pane_cp7

0xd2d2,	// (0x00031470) listscroll_gen_pane_cp05

0x7d74,	// (0x0002bf12) main_myfav_hc_pane_g1_ParamLimits

0x7d74,	// (0x0002bf12) main_myfav_hc_pane_g1

0x7d8e,	// (0x0002bf2c) main_myfav_hc_pane_g2_ParamLimits

0x7d8e,	// (0x0002bf2c) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x00033a72) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x00033a72) main_myfav_hc_pane_g

0x7dc0,	// (0x0002bf5e) main_myfav_hc_pane_t1_ParamLimits

0x7dc0,	// (0x0002bf5e) main_myfav_hc_pane_t1

0xd2db,	// (0x00031479) main_myfav_hc_pane_t2_ParamLimits

0xd2db,	// (0x00031479) main_myfav_hc_pane_t2

0xd2ed,	// (0x0003148b) main_myfav_hc_pane_t3_ParamLimits

0xd2ed,	// (0x0003148b) main_myfav_hc_pane_t3

0x7dd7,	// (0x0002bf75) main_myfav_hc_pane_t4_ParamLimits

0x7dd7,	// (0x0002bf75) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x00033a79) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x00033a79) main_myfav_hc_pane_t

0x3c4d,	// (0x00027deb) bg_myfav_hc_instruction_pane_g1

0xd2ff,	// (0x0003149d) cell_myfav_contact_pane_g1_ParamLimits

0xd2ff,	// (0x0003149d) cell_myfav_contact_pane_g1

0xd2ff,	// (0x0003149d) cell_myfav_contact_pane_g2_ParamLimits

0xd2ff,	// (0x0003149d) cell_myfav_contact_pane_g2

0xd30b,	// (0x000314a9) cell_myfav_contact_pane_g3_ParamLimits

0xd30b,	// (0x000314a9) cell_myfav_contact_pane_g3

0x31c9,	// (0x00027367) cell_myfav_contact_pane_g4_ParamLimits

0x31c9,	// (0x00027367) cell_myfav_contact_pane_g4

0xd318,	// (0x000314b6) cell_myfav_contact_pane_g5_ParamLimits

0xd318,	// (0x000314b6) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x00033a84) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x00033a84) cell_myfav_contact_pane_g

0x7da8,	// (0x0002bf46) main_myfav_hc_pane_g3_ParamLimits

0x7da8,	// (0x0002bf46) main_myfav_hc_pane_g3

0x16e6,	// (0x00025884) popup_adpt_find_window

0x7dff,	// (0x0002bf9d) afind_page_pane_ParamLimits

0x7dff,	// (0x0002bf9d) afind_page_pane

0x7e14,	// (0x0002bfb2) aid_size_cell_afind_ParamLimits

0x7e14,	// (0x0002bfb2) aid_size_cell_afind

0x7e32,	// (0x0002bfd0) bg_popup_sub_pane_cp09_ParamLimits

0x7e32,	// (0x0002bfd0) bg_popup_sub_pane_cp09

0x7e3f,	// (0x0002bfdd) find_pane_cp01_ParamLimits

0x7e3f,	// (0x0002bfdd) find_pane_cp01

0xd324,	// (0x000314c2) grid_afind_control_pane_ParamLimits

0xd324,	// (0x000314c2) grid_afind_control_pane

0x7e4c,	// (0x0002bfea) grid_afind_pane_ParamLimits

0x7e4c,	// (0x0002bfea) grid_afind_pane

0x7e6e,	// (0x0002c00c) cell_afind_pane_ParamLimits

0x7e6e,	// (0x0002c00c) cell_afind_pane

0x3c4d,	// (0x00027deb) afind_page_pane_g1

0x7ed5,	// (0x0002c073) afind_page_pane_g2

0x7ede,	// (0x0002c07c) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x00033a8f) afind_page_pane_g

0x7ee7,	// (0x0002c085) afind_page_pane_t1

0xd338,	// (0x000314d6) cell_afind_grid_control_pane_ParamLimits

0xd338,	// (0x000314d6) cell_afind_grid_control_pane

0xd041,	// (0x000311df) bg_button_pane_cp69_ParamLimits

0xd041,	// (0x000311df) bg_button_pane_cp69

0x7f07,	// (0x0002c0a5) cell_afind_pane_g1_ParamLimits

0x7f07,	// (0x0002c0a5) cell_afind_pane_g1

0x7f14,	// (0x0002c0b2) cell_afind_pane_t1_ParamLimits

0x7f14,	// (0x0002c0b2) cell_afind_pane_t1

0x3cb9,	// (0x00027e57) bg_button_pane_cp72

0xd347,	// (0x000314e5) cell_afind_grid_control_pane_g1

0x64cc,	// (0x0002a66a) aid_image_placing_area_ParamLimits

0x64cc,	// (0x0002a66a) aid_image_placing_area

0x31bb,	// (0x00027359) field_vitu_entry_pane_g1_ParamLimits

0x31bb,	// (0x00027359) field_vitu_entry_pane_g1

0x31bb,	// (0x00027359) field_vitu_entry_pane_g2_ParamLimits

0x31bb,	// (0x00027359) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0003339f) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0003339f) field_vitu_entry_pane_g

0xcb5a,	// (0x00030cf8) cell_vitu_itu_pane_g1_ParamLimits

0xcb3d,	// (0x00030cdb) cell_vitu_itu_pane_t3_ParamLimits

0xcb3d,	// (0x00030cdb) cell_vitu_itu_pane_t3

0xcfea,	// (0x00031188) mp4_progress_pane_t1_ParamLimits

0xd003,	// (0x000311a1) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x000339d5) mp4_progress_pane_t_ParamLimits

0xd01c,	// (0x000311ba) mup_progress_pane_cp04_ParamLimits

0x7deb,	// (0x0002bf89) main_myfav_hc_pane_t5_ParamLimits

0x7deb,	// (0x0002bf89) main_myfav_hc_pane_t5

0xaf61,	// (0x0002f0ff) aid_zoom_text_primary

0x16e6,	// (0x00025884) popup_adpt_find_window_ParamLimits

0xafaa,	// (0x0002f148) main_cam_set_pane

0x2303,	// (0x000264a1) cam4_zoom_pane_ParamLimits

0x2303,	// (0x000264a1) cam4_zoom_pane

0x7f26,	// (0x0002c0c4) main_cam_set_pane_g1_ParamLimits

0x7f26,	// (0x0002c0c4) main_cam_set_pane_g1

0x7f34,	// (0x0002c0d2) main_cam_set_pane_g2_ParamLimits

0x7f34,	// (0x0002c0d2) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x00033a96) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x00033a96) main_cam_set_pane_g

0x7f55,	// (0x0002c0f3) main_cam_set_pane_t1_ParamLimits

0x7f55,	// (0x0002c0f3) main_cam_set_pane_t1

0x7f70,	// (0x0002c10e) main_cset_listscroll_pane_ParamLimits

0x7f70,	// (0x0002c10e) main_cset_listscroll_pane

0x7f96,	// (0x0002c134) main_cset_slider_pane_ParamLimits

0x7f96,	// (0x0002c134) main_cset_slider_pane

0xd358,	// (0x000314f6) main_cset_list_pane_ParamLimits

0xd358,	// (0x000314f6) main_cset_list_pane

0xd368,	// (0x00031506) scroll_pane_cp028

0x7fbc,	// (0x0002c15a) aid_area_touch_slider

0x7fd8,	// (0x0002c176) cset_slider_pane

0x7ffb,	// (0x0002c199) main_cset_slider_pane_g1

0x8010,	// (0x0002c1ae) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x00033a9b) main_cset_slider_pane_g

0xd3a1,	// (0x0003153f) main_cset_slider_pane_t1

0x80cc,	// (0x0002c26a) main_cset_slider_pane_t2

0x80e6,	// (0x0002c284) main_cset_slider_pane_t3

0x8100,	// (0x0002c29e) main_cset_slider_pane_t4

0x811a,	// (0x0002c2b8) main_cset_slider_pane_t5

0x8134,	// (0x0002c2d2) main_cset_slider_pane_t6

0x8149,	// (0x0002c2e7) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x00033ac0) main_cset_slider_pane_t

0x824d,	// (0x0002c3eb) cset_list_set_pane_ParamLimits

0x824d,	// (0x0002c3eb) cset_list_set_pane

0xd43b,	// (0x000315d9) aid_position_infowindow_above

0xd443,	// (0x000315e1) aid_position_infowindow_below

0xd44b,	// (0x000315e9) cset_list_set_pane_g1_ParamLimits

0xd44b,	// (0x000315e9) cset_list_set_pane_g1

0xd457,	// (0x000315f5) cset_list_set_pane_g3_ParamLimits

0xd457,	// (0x000315f5) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x00033adf) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x00033adf) cset_list_set_pane_g

0xd466,	// (0x00031604) cset_list_set_pane_t1_ParamLimits

0xd466,	// (0x00031604) cset_list_set_pane_t1

0x3154,	// (0x000272f2) list_highlight_pane_cp021_ParamLimits

0x3154,	// (0x000272f2) list_highlight_pane_cp021

0x5d0f,	// (0x00029ead) cset_slider_pane_g1

0x5d21,	// (0x00029ebf) cset_slider_pane_g2

0x5d18,	// (0x00029eb6) cset_slider_pane_g3

0x0002,

0xf946,	// (0x00033ae4) cset_slider_pane_g

0xd47b,	// (0x00031619) aid_area_touch_cam4_zoom

0xd483,	// (0x00031621) cam4_zoom_cont_pane

0xd48b,	// (0x00031629) cam4_zoom_pane_g1

0xd493,	// (0x00031631) cam4_zoom_pane_g2

0x27f1,	// (0x0002698f) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x00033aeb) cam4_zoom_pane_g

0xd49b,	// (0x00031639) cam4_zoom_cont_pane_g1

0xd4a4,	// (0x00031642) cam4_zoom_cont_pane_g2

0xd4ad,	// (0x0003164b) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x00033af2) cam4_zoom_cont_pane_g

0x21d6,	// (0x00026374) call4_image_pane_ParamLimits

0x21d6,	// (0x00026374) call4_image_pane

0x7ba3,	// (0x0002bd41) call4_windows_conf_pane_ParamLimits

0x7be8,	// (0x0002bd86) popup_call4_audio_in_window_ParamLimits

0x7be8,	// (0x0002bd86) popup_call4_audio_in_window

0x2a1d,	// (0x00026bbb) bg_popup_call2_act_pane_cp02

0xd0b1,	// (0x0003124f) call4_list_conf_pane

0x3c4d,	// (0x00027deb) call4_image_pane_g1

0x3c4d,	// (0x00027deb) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x00033576) call4_image_pane_g

0xd4b6,	// (0x00031654) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4b6,	// (0x00031654) list_single_graphic_popup_conf4_pane

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp022

0xd4c9,	// (0x00031667) list_single_graphic_popup_conf4_pane_g1

0x5483,	// (0x00029621) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x00033af9) list_single_graphic_popup_conf4_pane_g

0xd4d1,	// (0x0003166f) list_single_graphic_popup_conf4_pane_t1

0x3e84,	// (0x00028022) popup_vtel_slider_window_ParamLimits

0x3e84,	// (0x00028022) popup_vtel_slider_window

0xd02f,	// (0x000311cd) dialer2_ne_pane_t2_ParamLimits

0xd02f,	// (0x000311cd) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x000339da) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x000339da) dialer2_ne_pane_t

0xc39b,	// (0x00030539) bg_popup_sub_pane_cp010_ParamLimits

0xc39b,	// (0x00030539) bg_popup_sub_pane_cp010

0x825f,	// (0x0002c3fd) popup_vtel_slider_window_g1_ParamLimits

0x825f,	// (0x0002c3fd) popup_vtel_slider_window_g1

0x8272,	// (0x0002c410) popup_vtel_slider_window_g2_ParamLimits

0x8272,	// (0x0002c410) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x00033afe) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x00033afe) popup_vtel_slider_window_g

0x82c8,	// (0x0002c466) vtel_slider_pane_ParamLimits

0x82c8,	// (0x0002c466) vtel_slider_pane

0x82ea,	// (0x0002c488) vtel_slider_pane_g1_ParamLimits

0x82ea,	// (0x0002c488) vtel_slider_pane_g1

0x82fe,	// (0x0002c49c) vtel_slider_pane_g2_ParamLimits

0x82fe,	// (0x0002c49c) vtel_slider_pane_g2

0x8316,	// (0x0002c4b4) vtel_slider_pane_g3_ParamLimits

0x8316,	// (0x0002c4b4) vtel_slider_pane_g3

0x82ea,	// (0x0002c488) vtel_slider_pane_g4_ParamLimits

0x82ea,	// (0x0002c488) vtel_slider_pane_g4

0x832c,	// (0x0002c4ca) vtel_slider_pane_g5_ParamLimits

0x832c,	// (0x0002c4ca) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x00033b07) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x00033b07) vtel_slider_pane_g

0xafaa,	// (0x0002f148) main_gallery2_pane

0x24bd,	// (0x0002665b) aid_size_row_itut2_dropdow_list_ParamLimits

0x24bd,	// (0x0002665b) aid_size_row_itut2_dropdow_list

0x2540,	// (0x000266de) grid_vitu2_function_top_pane_ParamLimits

0x2540,	// (0x000266de) grid_vitu2_function_top_pane

0x25a2,	// (0x00026740) popup_vitu2_dropdown_list_window_ParamLimits

0x25a2,	// (0x00026740) popup_vitu2_dropdown_list_window

0x25c8,	// (0x00026766) popup_vitu2_match_list_window

0x27f9,	// (0x00026997) cell_vitu2_function_top_pane_ParamLimits

0x27f9,	// (0x00026997) cell_vitu2_function_top_pane

0x2813,	// (0x000269b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2813,	// (0x000269b1) cell_vitu2_function_top_pane_cp01

0x282f,	// (0x000269cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x282f,	// (0x000269cd) cell_vitu2_function_top_wide_pane

0xafaa,	// (0x0002f148) bg_button_pane_cp012

0x284d,	// (0x000269eb) cell_vitu2_function_top_pane_g1

0xd4e7,	// (0x00031685) bg_button_pane_cp013_ParamLimits

0xd4e7,	// (0x00031685) bg_button_pane_cp013

0x8342,	// (0x0002c4e0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8342,	// (0x0002c4e0) cell_vitu2_function_top_wide_pane_g1

0xafaa,	// (0x0002f148) bg_popup_sub_pane_cp20

0x2861,	// (0x000269ff) list_vitu2_match_list_pane

0xd24e,	// (0x000313ec) bg_popup_sub_pane_cp20_g1

0xd256,	// (0x000313f4) bg_popup_sub_pane_cp20_g2

0x431f,	// (0x000284bd) bg_popup_sub_pane_cp20_g3

0xd25e,	// (0x000313fc) bg_popup_sub_pane_cp20_g4

0x42ff,	// (0x0002849d) bg_popup_sub_pane_cp20_g5

0xd503,	// (0x000316a1) bg_popup_sub_pane_cp20_g6

0xd26e,	// (0x0003140c) bg_popup_sub_pane_cp20_g7

0xd276,	// (0x00031414) bg_popup_sub_pane_cp20_g8

0xd27e,	// (0x0003141c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x00033b12) bg_popup_sub_pane_cp20_g

0xd50b,	// (0x000316a9) list_vitu2_match_list_item_pane_ParamLimits

0xd50b,	// (0x000316a9) list_vitu2_match_list_item_pane

0xd51d,	// (0x000316bb) list_vitu2_match_list_item_pane_t1

0xafb8,	// (0x0002f156) bg_popup_sub_pane_cp21

0x3a60,	// (0x00027bfe) grid_vitu2_dropdown_list_pane

0x2879,	// (0x00026a17) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2879,	// (0x00026a17) cell_vitu2_dropdown_list_char_pane

0x289a,	// (0x00026a38) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x289a,	// (0x00026a38) cell_vitu2_dropdown_list_ctrl_pane

0xd52b,	// (0x000316c9) cell_vitu2_dropdown_list_char_pane_g1

0xd534,	// (0x000316d2) cell_vitu2_dropdown_list_char_pane_g2

0xd53d,	// (0x000316db) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x00033b25) cell_vitu2_dropdown_list_char_pane_g

0x28c4,	// (0x00026a62) cell_vitu2_dropdown_list_char_pane_t1

0x835a,	// (0x0002c4f8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x835a,	// (0x0002c4f8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x836a,	// (0x0002c508) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x836a,	// (0x0002c508) cell_vitu2_dropdown_list_ctrl_pane_g2

0x837b,	// (0x0002c519) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x837b,	// (0x0002c519) cell_vitu2_dropdown_list_ctrl_pane_g3

0x28d2,	// (0x00026a70) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x28d2,	// (0x00026a70) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd111,	// (0x000312af) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd111,	// (0x000312af) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x00033b2c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x00033b2c) cell_vitu2_dropdown_list_ctrl_pane_g

0x838b,	// (0x0002c529) aid_size_cell_gallery2_ParamLimits

0x838b,	// (0x0002c529) aid_size_cell_gallery2

0x83a9,	// (0x0002c547) grid_gallery2_pane_ParamLimits

0x83a9,	// (0x0002c547) grid_gallery2_pane

0x83c3,	// (0x0002c561) scroll_pane_cp029_ParamLimits

0x83c3,	// (0x0002c561) scroll_pane_cp029

0x83d4,	// (0x0002c572) cell_gallery2_pane_ParamLimits

0x83d4,	// (0x0002c572) cell_gallery2_pane

0xd546,	// (0x000316e4) cell_gallery2_pane_g2

0x8433,	// (0x0002c5d1) cell_gallery2_pane_g3

0xd54e,	// (0x000316ec) cell_gallery2_pane_g4

0xd556,	// (0x000316f4) cell_gallery2_pane_g5

0x3a60,	// (0x00027bfe) grid_highlight_pane_cp10

0x25c8,	// (0x00026766) popup_vitu2_match_list_window_ParamLimits

0x25dd,	// (0x0002677b) popup_vitu2_query_window_ParamLimits

0x25dd,	// (0x0002677b) popup_vitu2_query_window

0xafb8,	// (0x0002f156) bg_vitu2_candi_button_pane

0xd52b,	// (0x000316c9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd534,	// (0x000316d2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd53d,	// (0x000316db) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x843b,	// (0x0002c5d9) bg_button_pane_cp015

0x844b,	// (0x0002c5e9) bg_button_pane_cp016

0x845e,	// (0x0002c5fc) bg_button_pane_cp017

0x5ad6,	// (0x00029c74) bg_popup_sub_pane_cp22

0xd55e,	// (0x000316fc) popup_vitu2_query_window_g1

0x84a1,	// (0x0002c63f) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x00033b37) popup_vitu2_query_window_g

0x84c0,	// (0x0002c65e) popup_vitu2_query_window_t1_ParamLimits

0x84c0,	// (0x0002c65e) popup_vitu2_query_window_t1

0x84f5,	// (0x0002c693) popup_vitu2_query_window_t2_ParamLimits

0x84f5,	// (0x0002c693) popup_vitu2_query_window_t2

0x8507,	// (0x0002c6a5) popup_vitu2_query_window_t3_ParamLimits

0x8507,	// (0x0002c6a5) popup_vitu2_query_window_t3

0x852f,	// (0x0002c6cd) popup_vitu2_query_window_t4_ParamLimits

0x852f,	// (0x0002c6cd) popup_vitu2_query_window_t4

0x8550,	// (0x0002c6ee) popup_vitu2_query_window_t5_ParamLimits

0x8550,	// (0x0002c6ee) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x00033b3e) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x00033b3e) popup_vitu2_query_window_t

0xd350,	// (0x000314ee) main_cset_text_pane

0x7fbc,	// (0x0002c15a) aid_area_touch_slider_ParamLimits

0x7fd8,	// (0x0002c176) cset_slider_pane_ParamLimits

0x7ffb,	// (0x0002c199) main_cset_slider_pane_g1_ParamLimits

0x8010,	// (0x0002c1ae) main_cset_slider_pane_g2_ParamLimits

0xd371,	// (0x0003150f) main_cset_slider_pane_g3_ParamLimits

0xd371,	// (0x0003150f) main_cset_slider_pane_g3

0x8025,	// (0x0002c1c3) main_cset_slider_pane_g4_ParamLimits

0x8025,	// (0x0002c1c3) main_cset_slider_pane_g4

0x8034,	// (0x0002c1d2) main_cset_slider_pane_g5_ParamLimits

0x8034,	// (0x0002c1d2) main_cset_slider_pane_g5

0x8040,	// (0x0002c1de) main_cset_slider_pane_g6_ParamLimits

0x8040,	// (0x0002c1de) main_cset_slider_pane_g6

0xf8fd,	// (0x00033a9b) main_cset_slider_pane_g_ParamLimits

0xd3a1,	// (0x0003153f) main_cset_slider_pane_t1_ParamLimits

0x80cc,	// (0x0002c26a) main_cset_slider_pane_t2_ParamLimits

0x80e6,	// (0x0002c284) main_cset_slider_pane_t3_ParamLimits

0x8100,	// (0x0002c29e) main_cset_slider_pane_t4_ParamLimits

0x811a,	// (0x0002c2b8) main_cset_slider_pane_t5_ParamLimits

0x8134,	// (0x0002c2d2) main_cset_slider_pane_t6_ParamLimits

0x8149,	// (0x0002c2e7) main_cset_slider_pane_t7_ParamLimits

0x8173,	// (0x0002c311) main_cset_slider_pane_t8_ParamLimits

0x8173,	// (0x0002c311) main_cset_slider_pane_t8

0x819b,	// (0x0002c339) main_cset_slider_pane_t9_ParamLimits

0x819b,	// (0x0002c339) main_cset_slider_pane_t9

0x81c3,	// (0x0002c361) main_cset_slider_pane_t10_ParamLimits

0x81c3,	// (0x0002c361) main_cset_slider_pane_t10

0x81eb,	// (0x0002c389) main_cset_slider_pane_t11_ParamLimits

0x81eb,	// (0x0002c389) main_cset_slider_pane_t11

0x8213,	// (0x0002c3b1) main_cset_slider_pane_t12_ParamLimits

0x8213,	// (0x0002c3b1) main_cset_slider_pane_t12

0x8230,	// (0x0002c3ce) main_cset_slider_pane_t13_ParamLimits

0x8230,	// (0x0002c3ce) main_cset_slider_pane_t13

0xf922,	// (0x00033ac0) main_cset_slider_pane_t_ParamLimits

0x2a1d,	// (0x00026bbb) bg_popup_sub_pane_cp011

0xd56a,	// (0x00031708) main_cset_text_pane_g1

0xd572,	// (0x00031710) main_cset_text_pane_t1

0xd580,	// (0x0003171e) main_cset_text_pane_t2

0xd58e,	// (0x0003172c) main_cset_text_pane_t3

0xd59c,	// (0x0003173a) main_cset_text_pane_t4

0xd5aa,	// (0x00031748) main_cset_text_pane_t5

0xd5b8,	// (0x00031756) main_cset_text_pane_t6

0xd5c6,	// (0x00031764) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x00033b4d) main_cset_text_pane_t

0xafb8,	// (0x0002f156) main_cam4_burst_pane

0xafb8,	// (0x0002f156) main_cam5_pane

0x7ef5,	// (0x0002c093) bg_button_pane_cp019

0x7efe,	// (0x0002c09c) bg_button_pane_cp020

0xd37d,	// (0x0003151b) main_cset_slider_pane_g7_ParamLimits

0xd37d,	// (0x0003151b) main_cset_slider_pane_g7

0xd389,	// (0x00031527) main_cset_slider_pane_g8_ParamLimits

0xd389,	// (0x00031527) main_cset_slider_pane_g8

0x8054,	// (0x0002c1f2) main_cset_slider_pane_g9_ParamLimits

0x8054,	// (0x0002c1f2) main_cset_slider_pane_g9

0x8060,	// (0x0002c1fe) main_cset_slider_pane_g10_ParamLimits

0x8060,	// (0x0002c1fe) main_cset_slider_pane_g10

0x806c,	// (0x0002c20a) main_cset_slider_pane_g11_ParamLimits

0x806c,	// (0x0002c20a) main_cset_slider_pane_g11

0x8078,	// (0x0002c216) main_cset_slider_pane_g12_ParamLimits

0x8078,	// (0x0002c216) main_cset_slider_pane_g12

0x8084,	// (0x0002c222) main_cset_slider_pane_g13_ParamLimits

0x8084,	// (0x0002c222) main_cset_slider_pane_g13

0x8090,	// (0x0002c22e) main_cset_slider_pane_g14_ParamLimits

0x8090,	// (0x0002c22e) main_cset_slider_pane_g14

0x809c,	// (0x0002c23a) main_cset_slider_pane_g15_ParamLimits

0x809c,	// (0x0002c23a) main_cset_slider_pane_g15

0xd3c9,	// (0x00031567) main_cset_slider_pane_t14_ParamLimits

0xd3c9,	// (0x00031567) main_cset_slider_pane_t14

0xd402,	// (0x000315a0) main_cset_slider_pane_t15_ParamLimits

0xd402,	// (0x000315a0) main_cset_slider_pane_t15

0x85c7,	// (0x0002c765) aid_cam4_burst_size_cell_ParamLimits

0x85c7,	// (0x0002c765) aid_cam4_burst_size_cell

0x85e7,	// (0x0002c785) grid_cam4_burst_pane_ParamLimits

0x85e7,	// (0x0002c785) grid_cam4_burst_pane

0x861f,	// (0x0002c7bd) linegrid_cam4_burst_pane_ParamLimits

0x861f,	// (0x0002c7bd) linegrid_cam4_burst_pane

0xd5d4,	// (0x00031772) scroll_pane_cp30_ParamLimits

0xd5d4,	// (0x00031772) scroll_pane_cp30

0x8643,	// (0x0002c7e1) cell_cam4_burst_pane_ParamLimits

0x8643,	// (0x0002c7e1) cell_cam4_burst_pane

0xd5e0,	// (0x0003177e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5e0,	// (0x0003177e) linegrid_cam4_burst_pane_g1

0x8690,	// (0x0002c82e) linegrid_cam4_burst_pane_g2_ParamLimits

0x8690,	// (0x0002c82e) linegrid_cam4_burst_pane_g2

0xd5ed,	// (0x0003178b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5ed,	// (0x0003178b) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x00033b5c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x00033b5c) linegrid_cam4_burst_pane_g

0x86a1,	// (0x0002c83f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x86a1,	// (0x0002c83f) linegrid_cam4_burst_pane_g3_copy1

0xd5fa,	// (0x00031798) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5fa,	// (0x00031798) linegrid_cam4_burst_pane_g4

0x86bb,	// (0x0002c859) linegrid_cam4_burst_pane_g5_ParamLimits

0x86bb,	// (0x0002c859) linegrid_cam4_burst_pane_g5

0x86cc,	// (0x0002c86a) linegrid_cam4_burst_pane_g6_ParamLimits

0x86cc,	// (0x0002c86a) linegrid_cam4_burst_pane_g6

0xd607,	// (0x000317a5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd607,	// (0x000317a5) linegrid_cam4_burst_pane_g7

0x86e3,	// (0x0002c881) cell_cam4_burst_pane_g1

0xd620,	// (0x000317be) main_cam5_pane_t1_ParamLimits

0xd620,	// (0x000317be) main_cam5_pane_t1

0xd632,	// (0x000317d0) main_cam5_pane_t2_ParamLimits

0xd632,	// (0x000317d0) main_cam5_pane_t2

0xd644,	// (0x000317e2) main_cam5_pane_t3_ParamLimits

0xd644,	// (0x000317e2) main_cam5_pane_t3

0xd656,	// (0x000317f4) main_cam5_pane_t4_ParamLimits

0xd656,	// (0x000317f4) main_cam5_pane_t4

0xd66e,	// (0x0003180c) main_cam5_pane_t5_ParamLimits

0xd66e,	// (0x0003180c) main_cam5_pane_t5

0xd682,	// (0x00031820) main_cam5_pane_t6_ParamLimits

0xd682,	// (0x00031820) main_cam5_pane_t6

0xd696,	// (0x00031834) main_cam5_pane_t7_ParamLimits

0xd696,	// (0x00031834) main_cam5_pane_t7

0xd6a8,	// (0x00031846) main_cam5_pane_t8_ParamLimits

0xd6a8,	// (0x00031846) main_cam5_pane_t8

0xd6c4,	// (0x00031862) main_cam5_pane_t9_ParamLimits

0xd6c4,	// (0x00031862) main_cam5_pane_t9

0xd6d6,	// (0x00031874) main_cam5_pane_t10_ParamLimits

0xd6d6,	// (0x00031874) main_cam5_pane_t10

0xd6e8,	// (0x00031886) main_cam5_pane_t11_ParamLimits

0xd6e8,	// (0x00031886) main_cam5_pane_t11

0xd6fa,	// (0x00031898) main_cam5_pane_t12_ParamLimits

0xd6fa,	// (0x00031898) main_cam5_pane_t12

0xd70f,	// (0x000318ad) main_cam5_pane_t13_ParamLimits

0xd70f,	// (0x000318ad) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x00033b68) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x00033b68) main_cam5_pane_t

0x1768,	// (0x00025906) popup_scut_keymap_window_ParamLimits

0x1768,	// (0x00025906) popup_scut_keymap_window

0x86f6,	// (0x0002c894) aid_size_cell_brow_shortcut

0x3a60,	// (0x00027bfe) bg_popup_window_pane_cp010

0x8702,	// (0x0002c8a0) grid_scut_pane

0x870e,	// (0x0002c8ac) cell_scut_pane_ParamLimits

0x870e,	// (0x0002c8ac) cell_scut_pane

0x8725,	// (0x0002c8c3) cell_scut_pane_g1

0xd72c,	// (0x000318ca) cell_scut_pane_t1

0xd73b,	// (0x000318d9) cell_scut_pane_t2

0x872e,	// (0x0002c8cc) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x00033b83) cell_scut_pane_t

0x7105,	// (0x0002b2a3) main_mup3_pane_g8_ParamLimits

0x7105,	// (0x0002b2a3) main_mup3_pane_g8

0x24d4,	// (0x00026672) area_vitu2_query_pane_ParamLimits

0x24d4,	// (0x00026672) area_vitu2_query_pane

0x8471,	// (0x0002c60f) input_focus_pane_cp08

0xd74a,	// (0x000318e8) area_vitu2_query_pane_g1

0x873c,	// (0x0002c8da) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x00033b8a) area_vitu2_query_pane_g

0x874d,	// (0x0002c8eb) area_vitu2_query_pane_t1_ParamLimits

0x874d,	// (0x0002c8eb) area_vitu2_query_pane_t1

0x8761,	// (0x0002c8ff) area_vitu2_query_pane_t2_ParamLimits

0x8761,	// (0x0002c8ff) area_vitu2_query_pane_t2

0x8775,	// (0x0002c913) area_vitu2_query_pane_t3_ParamLimits

0x8775,	// (0x0002c913) area_vitu2_query_pane_t3

0xd756,	// (0x000318f4) area_vitu2_query_pane_t4_ParamLimits

0xd756,	// (0x000318f4) area_vitu2_query_pane_t4

0xd77e,	// (0x0003191c) area_vitu2_query_pane_t5_ParamLimits

0xd77e,	// (0x0003191c) area_vitu2_query_pane_t5

0xd7a6,	// (0x00031944) area_vitu2_query_pane_t6_ParamLimits

0xd7a6,	// (0x00031944) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x00033b8f) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x00033b8f) area_vitu2_query_pane_t

0x879d,	// (0x0002c93b) bg_button_pane_cp018

0x87ab,	// (0x0002c949) bg_button_pane_cp021

0x87b7,	// (0x0002c955) bg_button_pane_cp022

0x87c6,	// (0x0002c964) input_focus_pane_cp09

0x57de,	// (0x0002997c) aid_size_touch_mv_arrow_left

0x5807,	// (0x000299a5) aid_size_touch_mv_arrow_right

0x80b4,	// (0x0002c252) main_cset_slider_pane_g16_ParamLimits

0x80b4,	// (0x0002c252) main_cset_slider_pane_g16

0x80c0,	// (0x0002c25e) main_cset_slider_pane_g17_ParamLimits

0x80c0,	// (0x0002c25e) main_cset_slider_pane_g17

0x86e3,	// (0x0002c881) cell_cam4_burst_pane_g1_ParamLimits

0x2a1d,	// (0x00026bbb) compa_mode_pane

0x8282,	// (0x0002c420) popup_vtel_slider_window_g3_ParamLimits

0x8282,	// (0x0002c420) popup_vtel_slider_window_g3

0x8299,	// (0x0002c437) popup_vtel_slider_window_g4_ParamLimits

0x8299,	// (0x0002c437) popup_vtel_slider_window_g4

0x82b0,	// (0x0002c44e) popup_vtel_slider_window_t1_ParamLimits

0x82b0,	// (0x0002c44e) popup_vtel_slider_window_t1

0xafb8,	// (0x0002f156) main_cl_pane

0xc09b,	// (0x00030239) popup_imed_adjust2_window_ParamLimits

0x5ad6,	// (0x00029c74) bg_tb_trans_pane_cp05_ParamLimits

0xca72,	// (0x00030c10) popup_imed_adjust2_window_g1_ParamLimits

0xca81,	// (0x00030c1f) popup_imed_adjust2_window_g2_ParamLimits

0xca81,	// (0x00030c1f) popup_imed_adjust2_window_g2

0xca8d,	// (0x00030c2b) popup_imed_adjust2_window_g3_ParamLimits

0xca8d,	// (0x00030c2b) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x00033905) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x00033905) popup_imed_adjust2_window_g

0xca99,	// (0x00030c37) popup_imed_adjust2_window_t1_ParamLimits

0xcab1,	// (0x00030c4f) slider_imed_adjust_pane_ParamLimits

0xcac5,	// (0x00030c63) slider_imed_adjust_pane_g1_ParamLimits

0xcad5,	// (0x00030c73) slider_imed_adjust_pane_g2_ParamLimits

0xcae5,	// (0x00030c83) slider_imed_adjust_pane_g3_ParamLimits

0xcaf6,	// (0x00030c94) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0003390c) slider_imed_adjust_pane_g_ParamLimits

0x22a4,	// (0x00026442) aid_touch_area_cam4_ParamLimits

0x22a4,	// (0x00026442) aid_touch_area_cam4

0xd0f5,	// (0x00031293) battery_pane_cp01

0x2373,	// (0x00026511) main_camera4_pane_g6_ParamLimits

0x2373,	// (0x00026511) main_camera4_pane_g6

0x239d,	// (0x0002653b) main_camera4_pane_t2_ParamLimits

0x239d,	// (0x0002653b) main_camera4_pane_t2

0x0001,

0xf870,	// (0x00033a0e) main_camera4_pane_t_ParamLimits

0xf870,	// (0x00033a0e) main_camera4_pane_t

0x23be,	// (0x0002655c) aid_touch_area_vid4_ParamLimits

0x23be,	// (0x0002655c) aid_touch_area_vid4

0x2412,	// (0x000265b0) main_video4_pane_g5_ParamLimits

0x2412,	// (0x000265b0) main_video4_pane_g5

0x2437,	// (0x000265d5) vid4_progress_pane_ParamLimits

0x2437,	// (0x000265d5) vid4_progress_pane

0xd395,	// (0x00031533) main_cset_slider_pane_g18_ParamLimits

0xd395,	// (0x00031533) main_cset_slider_pane_g18

0xd614,	// (0x000317b2) cell_cam4_burst_pane_g2_ParamLimits

0xd614,	// (0x000317b2) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x00033b63) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x00033b63) cell_cam4_burst_pane_g

0x32fd,	// (0x0002749b) bg_cl_pane_ParamLimits

0x32fd,	// (0x0002749b) bg_cl_pane

0x87d5,	// (0x0002c973) cl_header_pane_ParamLimits

0x87d5,	// (0x0002c973) cl_header_pane

0x87e9,	// (0x0002c987) cl_listscroll_pane_ParamLimits

0x87e9,	// (0x0002c987) cl_listscroll_pane

0xd7f2,	// (0x00031990) bg_cl_pane_g1

0xd7fa,	// (0x00031998) bg_cl_pane_g2

0xd802,	// (0x000319a0) bg_cl_pane_g3

0xd80a,	// (0x000319a8) bg_cl_pane_g4

0xd812,	// (0x000319b0) bg_cl_pane_g5

0xd81a,	// (0x000319b8) bg_cl_pane_g6

0xd822,	// (0x000319c0) bg_cl_pane_g7

0xd82a,	// (0x000319c8) bg_cl_pane_g8

0xd832,	// (0x000319d0) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x00033b9e) bg_cl_pane_g

0x87f9,	// (0x0002c997) aid_height_cl_leading_ParamLimits

0x87f9,	// (0x0002c997) aid_height_cl_leading

0x8805,	// (0x0002c9a3) aid_height_cl_text_ParamLimits

0x8805,	// (0x0002c9a3) aid_height_cl_text

0x3154,	// (0x000272f2) bg_cl_header_pane_ParamLimits

0x3154,	// (0x000272f2) bg_cl_header_pane

0x8824,	// (0x0002c9c2) cl_header_pane_g1_ParamLimits

0x8824,	// (0x0002c9c2) cl_header_pane_g1

0x883a,	// (0x0002c9d8) cl_header_pane_t1_ParamLimits

0x883a,	// (0x0002c9d8) cl_header_pane_t1

0xd83a,	// (0x000319d8) cl_list_pane

0xd368,	// (0x00031506) hc_scroll_pane_cp01

0x42ff,	// (0x0002849d) bg_cl_header_pane_g1

0xd24e,	// (0x000313ec) bg_cl_header_pane_g2

0x431f,	// (0x000284bd) bg_cl_header_pane_g3

0xd25e,	// (0x000313fc) bg_cl_header_pane_g4

0xd256,	// (0x000313f4) bg_cl_header_pane_g5

0xd503,	// (0x000316a1) bg_cl_header_pane_g6

0xd276,	// (0x00031414) bg_cl_header_pane_g7

0xd27e,	// (0x0003141c) bg_cl_header_pane_g8

0xd26e,	// (0x0003140c) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x00033bb1) bg_cl_header_pane_g

0x8853,	// (0x0002c9f1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8853,	// (0x0002c9f1) hc_cl_list_double_graphic_heading_pane

0x8864,	// (0x0002ca02) hc_cl_list_single_graphic_pane_ParamLimits

0x8864,	// (0x0002ca02) hc_cl_list_single_graphic_pane

0x887a,	// (0x0002ca18) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x887a,	// (0x0002ca18) hc_cl_list_single_graphic_pane_g1

0x8886,	// (0x0002ca24) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8886,	// (0x0002ca24) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x00033bc4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x00033bc4) hc_cl_list_single_graphic_pane_g

0x889a,	// (0x0002ca38) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x889a,	// (0x0002ca38) hc_cl_list_single_graphic_pane_t1

0x887a,	// (0x0002ca18) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x887a,	// (0x0002ca18) hc_cl_list_double_graphic_heading_pane_g1

0x88af,	// (0x0002ca4d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x88af,	// (0x0002ca4d) hc_cl_list_double_graphic_heading_pane_g2

0x88c3,	// (0x0002ca61) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x88c3,	// (0x0002ca61) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x00033bc9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x00033bc9) hc_cl_list_double_graphic_heading_pane_g

0x88d7,	// (0x0002ca75) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x88d7,	// (0x0002ca75) hc_cl_list_double_graphic_heading_pane_t1

0x88ec,	// (0x0002ca8a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x88ec,	// (0x0002ca8a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x00033bd0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x00033bd0) hc_cl_list_double_graphic_heading_pane_t

0xd84b,	// (0x000319e9) vid4_progress_pane_g1

0xd85b,	// (0x000319f9) vid4_progress_pane_g2

0x28ee,	// (0x00026a8c) vid4_progress_pane_g3

0xd86b,	// (0x00031a09) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x00033bd5) vid4_progress_pane_g

0x2900,	// (0x00026a9e) vid4_progress_pane_t1

0xd883,	// (0x00031a21) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x00033be0) vid4_progress_pane_t

0x2918,	// (0x00026ab6) wait_bar_pane_cp07

0xc3a9,	// (0x00030547) blid_firmament_pane_ParamLimits

0xc3ec,	// (0x0003058a) popup_blid_sat_info2_window_g1

0xc410,	// (0x000305ae) popup_blid_sat_info2_window_t3

0xc41e,	// (0x000305bc) popup_blid_sat_info2_window_t4

0xc42c,	// (0x000305ca) popup_blid_sat_info2_window_t5

0xc43a,	// (0x000305d8) popup_blid_sat_info2_window_t6

0xc44a,	// (0x000305e8) popup_blid_sat_info2_window_t7

0xc458,	// (0x000305f6) popup_blid_sat_info2_window_t8

0xc466,	// (0x00030604) popup_blid_sat_info2_window_t9

0xc474,	// (0x00030612) popup_blid_sat_info2_window_t10

0xc535,	// (0x000306d3) aid_firma_cardinal_ParamLimits

0xc549,	// (0x000306e7) blid_firmament_pane_t1_ParamLimits

0xc560,	// (0x000306fe) blid_firmament_pane_t2_ParamLimits

0xc577,	// (0x00030715) blid_firmament_pane_t3_ParamLimits

0xc58e,	// (0x0003072c) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x000337fe) blid_firmament_pane_t_ParamLimits

0xc5a5,	// (0x00030743) blid_sat_info_pane_ParamLimits

0xafaa,	// (0x0002f148) main_cam_set_pane_ParamLimits

0x7836,	// (0x0002b9d4) aid_size_cell_colour_35_ParamLimits

0x7856,	// (0x0002b9f4) aid_size_cell_colour_112_ParamLimits

0x7876,	// (0x0002ba14) aid_size_cell_effect_ParamLimits

0x5ad6,	// (0x00029c74) bg_tb_trans_pane_cp02_ParamLimits

0x50f3,	// (0x00029291) heading_imed_pane_ParamLimits

0x7896,	// (0x0002ba34) listscroll_imed_pane_ParamLimits

0xb78a,	// (0x0002f928) popup_call2_audio_first_window_g5_ParamLimits

0xb78a,	// (0x0002f928) popup_call2_audio_first_window_g5

0x1f95,	// (0x00026133) aid_size_touch_image3_arrow_left_ParamLimits

0x1f95,	// (0x00026133) aid_size_touch_image3_arrow_left

0x1fc1,	// (0x0002615f) aid_size_touch_image3_arrow_right_ParamLimits

0x1fc1,	// (0x0002615f) aid_size_touch_image3_arrow_right

0xd898,	// (0x00031a36) vid4_progress_pane_t3

0x7a3b,	// (0x0002bbd9) main_hwr_training_symbol_option_pane_ParamLimits

0x7a3b,	// (0x0002bbd9) main_hwr_training_symbol_option_pane

0xccab,	// (0x00030e49) popup_hwr_training_preview_window_ParamLimits

0xccab,	// (0x00030e49) popup_hwr_training_preview_window

0x1e40,	// (0x00025fde) hwr_training_navi_pane_g5_ParamLimits

0x1e40,	// (0x00025fde) hwr_training_navi_pane_g5

0xd23c,	// (0x000313da) popup_char_count_window

0xafaa,	// (0x0002f148) bg_popup_sub_pane_cp20_ParamLimits

0x2861,	// (0x000269ff) list_vitu2_match_list_pane_ParamLimits

0x286d,	// (0x00026a0b) vitu2_page_scroll_pane_ParamLimits

0x286d,	// (0x00026a0b) vitu2_page_scroll_pane

0xd8cf,	// (0x00031a6d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8cf,	// (0x00031a6d) list_single_hwr_training_symbol_option_pane

0xd8e2,	// (0x00031a80) list_single_hwr_training_symbol_option_pane_g1

0xd8ea,	// (0x00031a88) list_single_hwr_training_symbol_option_pane_t1

0xd8f8,	// (0x00031a96) bg_button_pane_cp023

0xd901,	// (0x00031a9f) bg_button_pane_cp024

0xd934,	// (0x00031ad2) vitu2_page_scroll_pane_g1

0xd93c,	// (0x00031ada) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x00033be7) vitu2_page_scroll_pane_g

0xd944,	// (0x00031ae2) vitu2_page_scroll_pane_t1

0xc307,	// (0x000304a5) popup_char_count_window_g1

0xd953,	// (0x00031af1) popup_char_count_window_g2

0xd95c,	// (0x00031afa) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x00033bec) popup_char_count_window_g

0xd965,	// (0x00031b03) popup_char_count_window_t1

0xafb8,	// (0x0002f156) main_vded2_pane

0xca5e,	// (0x00030bfc) aid_size_cell_imed_line

0xca68,	// (0x00030c06) grid_imed_line_width_pane

0xd1bb,	// (0x00031359) vid4_indicators_pane_g4

0xd973,	// (0x00031b11) cell_imed_line_width_pane_ParamLimits

0xd973,	// (0x00031b11) cell_imed_line_width_pane

0xd987,	// (0x00031b25) cell_imed_line_width_pane_g1

0xd990,	// (0x00031b2e) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x00033bf3) cell_imed_line_width_pane_g

0x8915,	// (0x0002cab3) main_vded2_pane_g1_ParamLimits

0x8915,	// (0x0002cab3) main_vded2_pane_g1

0x892b,	// (0x0002cac9) main_vded2_pane_g2_ParamLimits

0x892b,	// (0x0002cac9) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x00033bf8) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x00033bf8) main_vded2_pane_g

0x893d,	// (0x0002cadb) vded2_slider_pane_ParamLimits

0x893d,	// (0x0002cadb) vded2_slider_pane

0x894d,	// (0x0002caeb) aid_size_touch_vded2_end

0x8957,	// (0x0002caf5) aid_size_touch_vded2_playhead

0xd998,	// (0x00031b36) aid_size_touch_vded2_start

0xd9a0,	// (0x00031b3e) vded2_slider_bg_pane

0xd9a9,	// (0x00031b47) vded2_slider_pane_g1

0xd9b2,	// (0x00031b50) vded2_slider_pane_g2

0x8961,	// (0x0002caff) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x00033bfd) vded2_slider_pane_g

0xd9ba,	// (0x00031b58) vded2_slider_bg_pane_g1

0xd9c3,	// (0x00031b61) vded2_slider_bg_pane_g2

0xd9cc,	// (0x00031b6a) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x00033c04) vded2_slider_bg_pane_g

0x5ee7,	// (0x0002a085) aid_postcard_touch_down_pane_ParamLimits

0x5ee7,	// (0x0002a085) aid_postcard_touch_down_pane

0x5efd,	// (0x0002a09b) aid_postcard_touch_up_pane_ParamLimits

0x5efd,	// (0x0002a09b) aid_postcard_touch_up_pane

0xafb8,	// (0x0002f156) main_blid2_pane

0xc081,	// (0x0003021f) popup_blid2_search_window

0x2a1d,	// (0x00026bbb) blid2_gps_pane

0x2a1d,	// (0x00026bbb) blid2_navig_pane

0x2a1d,	// (0x00026bbb) blid2_search_pane

0x2a1d,	// (0x00026bbb) blid2_tripm_pane

0x896c,	// (0x0002cb0a) blid2_search_pane_g1_ParamLimits

0x896c,	// (0x0002cb0a) blid2_search_pane_g1

0x8986,	// (0x0002cb24) blid2_search_pane_t1_ParamLimits

0x8986,	// (0x0002cb24) blid2_search_pane_t1

0x8998,	// (0x0002cb36) aid_size_cell_blid2_gps_ParamLimits

0x8998,	// (0x0002cb36) aid_size_cell_blid2_gps

0x89b0,	// (0x0002cb4e) blid2_gps_pane_g1_ParamLimits

0x89b0,	// (0x0002cb4e) blid2_gps_pane_g1

0x89c4,	// (0x0002cb62) grid_blid2_satellite_pane_ParamLimits

0x89c4,	// (0x0002cb62) grid_blid2_satellite_pane

0x89de,	// (0x0002cb7c) blid2_navig_pane_g1_ParamLimits

0x89de,	// (0x0002cb7c) blid2_navig_pane_g1

0x89ea,	// (0x0002cb88) blid2_navig_pane_t1_ParamLimits

0x89ea,	// (0x0002cb88) blid2_navig_pane_t1

0x8a05,	// (0x0002cba3) blid2_navig_pane_t2_ParamLimits

0x8a05,	// (0x0002cba3) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x00033c0b) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x00033c0b) blid2_navig_pane_t

0x8a20,	// (0x0002cbbe) blid2_navig_ring_pane_ParamLimits

0x8a20,	// (0x0002cbbe) blid2_navig_ring_pane

0x8a39,	// (0x0002cbd7) blid2_speed_pane_ParamLimits

0x8a39,	// (0x0002cbd7) blid2_speed_pane

0x8a45,	// (0x0002cbe3) blid2_tripm_pane_g1_ParamLimits

0x8a45,	// (0x0002cbe3) blid2_tripm_pane_g1

0x8a5e,	// (0x0002cbfc) blid2_tripm_pane_g2_ParamLimits

0x8a5e,	// (0x0002cbfc) blid2_tripm_pane_g2

0x8a72,	// (0x0002cc10) blid2_tripm_pane_g3_ParamLimits

0x8a72,	// (0x0002cc10) blid2_tripm_pane_g3

0x8a86,	// (0x0002cc24) blid2_tripm_pane_g4_ParamLimits

0x8a86,	// (0x0002cc24) blid2_tripm_pane_g4

0x8a9a,	// (0x0002cc38) blid2_tripm_pane_g5_ParamLimits

0x8a9a,	// (0x0002cc38) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x00033c10) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x00033c10) blid2_tripm_pane_g

0x8ac0,	// (0x0002cc5e) blid2_tripm_pane_t1_ParamLimits

0x8ac0,	// (0x0002cc5e) blid2_tripm_pane_t1

0x8adb,	// (0x0002cc79) blid2_tripm_pane_t2_ParamLimits

0x8adb,	// (0x0002cc79) blid2_tripm_pane_t2

0x8af4,	// (0x0002cc92) blid2_tripm_pane_t3_ParamLimits

0x8af4,	// (0x0002cc92) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x00033c1d) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x00033c1d) blid2_tripm_pane_t

0x8b3b,	// (0x0002ccd9) cell_blid2_satellite_pane_ParamLimits

0x8b3b,	// (0x0002ccd9) cell_blid2_satellite_pane

0x8b59,	// (0x0002ccf7) cell_blid2_satellite_pane_g1

0xd9d5,	// (0x00031b73) cell_blid2_satellite_pane_t1

0x3c4d,	// (0x00027deb) blid2_speed_pane_g1

0xd9e3,	// (0x00031b81) blid2_speed_pane_t1

0xd9f1,	// (0x00031b8f) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x00033c26) blid2_speed_pane_t

0x3c4d,	// (0x00027deb) blid2_navig_ring_pane_g1

0x8b62,	// (0x0002cd00) blid2_navig_ring_pane_g2

0x8b6a,	// (0x0002cd08) blid2_navig_ring_pane_g3

0x8b72,	// (0x0002cd10) blid2_navig_ring_pane_g4

0x8b7a,	// (0x0002cd18) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x00033c2b) blid2_navig_ring_pane_g

0x2a1d,	// (0x00026bbb) bg_popup_window_pane_cp011

0xd9ff,	// (0x00031b9d) popup_blid2_search_window_g1

0xda07,	// (0x00031ba5) popup_blid2_search_window_t1

0xda15,	// (0x00031bb3) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x00033c36) popup_blid2_search_window_t

0x41cb,	// (0x00028369) main_browser_pane_g1

0x32fd,	// (0x0002749b) main_browser_pane_ParamLimits

0xafaa,	// (0x0002f148) bg_button_pane_cp011_ParamLimits

0x27dd,	// (0x0002697b) cell_vitu2_function_pane_g1_ParamLimits

0x5ad6,	// (0x00029c74) bg_popup_sub_pane_cp22_ParamLimits

0x8471,	// (0x0002c60f) input_focus_pane_cp08_ParamLimits

0x8488,	// (0x0002c626) popup_vitu2_query_button_pane_ParamLimits

0x8488,	// (0x0002c626) popup_vitu2_query_button_pane

0x8499,	// (0x0002c637) popup_vitu2_query_input_button_pane

0xd55e,	// (0x000316fc) popup_vitu2_query_window_g1_ParamLimits

0x84a1,	// (0x0002c63f) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x00033b37) popup_vitu2_query_window_g_ParamLimits

0x2a1d,	// (0x00026bbb) bg_button_pane_cp026

0x8b82,	// (0x0002cd20) popup_vitu2_query_input_button_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp025

0xda23,	// (0x00031bc1) popup_vitu2_query_button_pane_t1

0x6d6e,	// (0x0002af0c) main_mp3_pane_t6

0x6d7c,	// (0x0002af1a) popup_slider_window_cp01

0xd11f,	// (0x000312bd) cam4_battery_pane

0xd178,	// (0x00031316) cam4_battery_pane_cp02

0xd843,	// (0x000319e1) cam4_battery_pane_cp01

0xd843,	// (0x000319e1) cam4_battery_pane_cp03

0xc310,	// (0x000304ae) cam4_battery_pane_g1

0x3c4d,	// (0x00027deb) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x00033c3b) cam4_battery_pane_g

0xc482,	// (0x00030620) popup_blid_sat_info2_window_t11

0x57de,	// (0x0002997c) aid_size_touch_mv_arrow_left_ParamLimits

0x5807,	// (0x000299a5) aid_size_touch_mv_arrow_right_ParamLimits

0x5865,	// (0x00029a03) navi_pane_g1_ParamLimits

0x5871,	// (0x00029a0f) navi_pane_g2_ParamLimits

0x589f,	// (0x00029a3d) navi_pane_g3_ParamLimits

0xf374,	// (0x00033512) navi_pane_g_ParamLimits

0x595d,	// (0x00029afb) navi_pane_mv_t1_ParamLimits

0x78a2,	// (0x0002ba40) grid_imed_effect_pane_ParamLimits

0x3d6f,	// (0x00027f0d) aid_placing_vt_slider_lsc

0x3d7f,	// (0x00027f1d) aid_placing_vt_slider_prt

0x3154,	// (0x000272f2) bg_tb_trans_pane_cp01_ParamLimits

0xc702,	// (0x000308a0) popup_image_details_window_g1_ParamLimits

0xc715,	// (0x000308b3) popup_image_details_window_g2_ParamLimits

0xc72a,	// (0x000308c8) popup_image_details_window_g3_ParamLimits

0xc72a,	// (0x000308c8) popup_image_details_window_g3

0xf6a0,	// (0x0003383e) popup_image_details_window_g_ParamLimits

0xc73e,	// (0x000308dc) popup_image_details_window_t1_ParamLimits

0xc750,	// (0x000308ee) popup_image_details_window_t2_ParamLimits

0xc769,	// (0x00030907) popup_image_details_window_t3_ParamLimits

0xc77d,	// (0x0003091b) popup_image_details_window_t4_ParamLimits

0xc798,	// (0x00030936) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x00033845) popup_image_details_window_t_ParamLimits

0x8811,	// (0x0002c9af) cl_header_name_pane_ParamLimits

0x8811,	// (0x0002c9af) cl_header_name_pane

0x8b8a,	// (0x0002cd28) cl_header_name_pane_t1_ParamLimits

0x8b8a,	// (0x0002cd28) cl_header_name_pane_t1

0x8bab,	// (0x0002cd49) cl_header_name_pane_t2_ParamLimits

0x8bab,	// (0x0002cd49) cl_header_name_pane_t2

0x8bed,	// (0x0002cd8b) cl_header_name_pane_t3_ParamLimits

0x8bed,	// (0x0002cd8b) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x00033c40) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x00033c40) cl_header_name_pane_t

0x592e,	// (0x00029acc) navi_pane_mv_g2_ParamLimits

0xd207,	// (0x000313a5) field_vitu2_entry_pane_g1_ParamLimits

0xd213,	// (0x000313b1) field_vitu2_entry_pane_g2_ParamLimits

0x5aa0,	// (0x00029c3e) field_vitu2_entry_pane_g3_ParamLimits

0x5aa0,	// (0x00029c3e) field_vitu2_entry_pane_g3

0xf8a2,	// (0x00033a40) field_vitu2_entry_pane_g_ParamLimits

0x266d,	// (0x0002680b) cell_vitu2_itu_pane_g1_ParamLimits

0x2685,	// (0x00026823) cell_vitu2_itu_pane_g2_ParamLimits

0x2685,	// (0x00026823) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x00033a4c) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x00033a4c) cell_vitu2_itu_pane_g

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp05_ParamLimits

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp05

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp03

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp04

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp10_ParamLimits

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp10

0x87b7,	// (0x0002c955) bg_vkb2_func_pane_cp08

0x879d,	// (0x0002c93b) bg_vkb2_func_pane_cp06

0x87ab,	// (0x0002c949) bg_vkb2_func_pane_cp07

0xd90a,	// (0x00031aa8) bg_vkb2_func_pane_cp11_ParamLimits

0xd90a,	// (0x00031aa8) bg_vkb2_func_pane_cp11

0xd91f,	// (0x00031abd) bg_vkb2_func_pane_cp12_ParamLimits

0xd91f,	// (0x00031abd) bg_vkb2_func_pane_cp12

0x2a1d,	// (0x00026bbb) bg_vkb2_func_pane_cp09

0xd24e,	// (0x000313ec) bg_vkb2_func_pane_g1

0x431f,	// (0x000284bd) bg_vkb2_func_pane_g2

0xd256,	// (0x000313f4) bg_vkb2_func_pane_g3

0xd25e,	// (0x000313fc) bg_vkb2_func_pane_g4

0xd503,	// (0x000316a1) bg_vkb2_func_pane_g5

0xd276,	// (0x00031414) bg_vkb2_func_pane_g6

0xd27e,	// (0x0003141c) bg_vkb2_func_pane_g7

0xd26e,	// (0x0003140c) bg_vkb2_func_pane_g8

0x42ff,	// (0x0002849d) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x00033c47) bg_vkb2_func_pane_g

0x8aae,	// (0x0002cc4c) blid2_tripm_pane_g6_ParamLimits

0x8aae,	// (0x0002cc4c) blid2_tripm_pane_g6

0xcfe2,	// (0x00031180) mp4_progress_pane_g1

0x8b27,	// (0x0002ccc5) blid2_tripm_values_pane_ParamLimits

0x8b27,	// (0x0002ccc5) blid2_tripm_values_pane

0x8c1e,	// (0x0002cdbc) blid2_tripm_values_pane_t1

0x8c2c,	// (0x0002cdca) blid2_tripm_values_pane_t2

0x8c3a,	// (0x0002cdd8) blid2_tripm_values_pane_t3

0x8c48,	// (0x0002cde6) blid2_tripm_values_pane_t4

0x8c56,	// (0x0002cdf4) blid2_tripm_values_pane_t5

0x8c64,	// (0x0002ce02) blid2_tripm_values_pane_t6

0x8c72,	// (0x0002ce10) blid2_tripm_values_pane_t7

0x8c80,	// (0x0002ce1e) blid2_tripm_values_pane_t8

0x8c8e,	// (0x0002ce2c) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x00033c5a) blid2_tripm_values_pane_t

0x3dbb,	// (0x00027f59) call_video_pane_t1_ParamLimits

0x3dd9,	// (0x00027f77) call_video_pane_t2_ParamLimits

0xf222,	// (0x000333c0) call_video_pane_t_ParamLimits

0x5df9,	// (0x00029f97) msg_header_pane_g1_ParamLimits

0x5e07,	// (0x00029fa5) msg_header_pane_g2_ParamLimits

0x5e07,	// (0x00029fa5) msg_header_pane_g2

0x0001,

0xf417,	// (0x000335b5) msg_header_pane_g_ParamLimits

0xf417,	// (0x000335b5) msg_header_pane_g

0x32fd,	// (0x0002749b) main_clock2_pane_ParamLimits

0x7658,	// (0x0002b7f6) grid_clock2_toolbar_pane_ParamLimits

0x7658,	// (0x0002b7f6) grid_clock2_toolbar_pane

0x7658,	// (0x0002b7f6) listscroll_clock2_pane_ParamLimits

0x7658,	// (0x0002b7f6) listscroll_clock2_pane

0x773c,	// (0x0002b8da) main_clock2_pane_t3_ParamLimits

0x773c,	// (0x0002b8da) main_clock2_pane_t3

0x7760,	// (0x0002b8fe) main_clock2_pane_t4_ParamLimits

0x7760,	// (0x0002b8fe) main_clock2_pane_t4

0xda31,	// (0x00031bcf) cell_clock2_toolbar_pane

0xda39,	// (0x00031bd7) cell_clock2_toolbar_pane_cp01

0xda39,	// (0x00031bd7) cell_clock2_toolbar_pane_cp02

0xda41,	// (0x00031bdf) cell_clock2_toolbar_pane_cp03

0xda49,	// (0x00031be7) list_clock2_pane

0x5588,	// (0x00029726) scroll_pane_cp10

0xda51,	// (0x00031bef) list_single_clock2_pane_ParamLimits

0xda51,	// (0x00031bef) list_single_clock2_pane

0x3a60,	// (0x00027bfe) list_highlight_pane_cp08

0xda5e,	// (0x00031bfc) list_single_clock2_pane_t1

0xda6c,	// (0x00031c0a) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x00033c6d) list_single_clock2_pane_t

0x2a1d,	// (0x00026bbb) bg_button_pane_cp10

0xda7a,	// (0x00031c18) cell_clock2_toolbar_pane_g1

0x1a39,	// (0x00025bd7) aid_main_viewer_pane_g1_ParamLimits

0x1a39,	// (0x00025bd7) aid_main_viewer_pane_g1

0x1a47,	// (0x00025be5) aid_main_viewer_pane_g2_ParamLimits

0x1a47,	// (0x00025be5) aid_main_viewer_pane_g2

0x5e9d,	// (0x0002a03b) aid_main_viewer_pane_g3_ParamLimits

0x5e9d,	// (0x0002a03b) aid_main_viewer_pane_g3

0x5eac,	// (0x0002a04a) aid_main_viewer_pane_g4_ParamLimits

0x5eac,	// (0x0002a04a) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x000335c6) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x000335c6) aid_main_viewer_pane_g

0x1a7b,	// (0x00025c19) main_calc_pane_ParamLimits

0x1aa1,	// (0x00025c3f) main_dialer2_pane_ParamLimits

0xafb8,	// (0x0002f156) main_cam6_pane

0xafb8,	// (0x0002f156) main_vid6_pane

0x7664,	// (0x0002b802) listscroll_gen_pane_cp06_ParamLimits

0x7664,	// (0x0002b802) listscroll_gen_pane_cp06

0x7783,	// (0x0002b921) main_clock2_pane_t5_ParamLimits

0x7783,	// (0x0002b921) main_clock2_pane_t5

0x77e1,	// (0x0002b97f) aid_call2_pane_cp10_ParamLimits

0x77f3,	// (0x0002b991) aid_call_pane_cp10_ParamLimits

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1d8b,	// (0x00025f29) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1d8b,	// (0x00025f29) popup_clock_analogue_window_cp10_g4_ParamLimits

0x576d,	// (0x0002990b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x000338fa) popup_clock_analogue_window_cp10_g_ParamLimits

0x7805,	// (0x0002b9a3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7b13,	// (0x0002bcb1) cell_dialer2_keypad_pane_g2_ParamLimits

0x7b13,	// (0x0002bcb1) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x000339df) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x000339df) cell_dialer2_keypad_pane_g

0x7b2f,	// (0x0002bccd) cell_dialer2_keypad_pane_t1

0x7fae,	// (0x0002c14c) main_cset_text2_pane_ParamLimits

0x7fae,	// (0x0002c14c) main_cset_text2_pane

0xd74a,	// (0x000318e8) area_vitu2_query_pane_g1_ParamLimits

0x873c,	// (0x0002c8da) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x00033b8a) area_vitu2_query_pane_g_ParamLimits

0xd7ce,	// (0x0003196c) area_vitu2_query_pane_t7_ParamLimits

0xd7ce,	// (0x0003196c) area_vitu2_query_pane_t7

0x879d,	// (0x0002c93b) bg_button_pane_cp018_ParamLimits

0x87ab,	// (0x0002c949) bg_button_pane_cp021_ParamLimits

0x87b7,	// (0x0002c955) bg_button_pane_cp022_ParamLimits

0x87b7,	// (0x0002c955) bg_vkb2_func_pane_cp08_ParamLimits

0x879d,	// (0x0002c93b) bg_vkb2_func_pane_cp06_ParamLimits

0x87ab,	// (0x0002c949) bg_vkb2_func_pane_cp07_ParamLimits

0x87c6,	// (0x0002c964) input_focus_pane_cp09_ParamLimits

0xda82,	// (0x00031c20) cam6_autofocus_pane_ParamLimits

0xda82,	// (0x00031c20) cam6_autofocus_pane

0x292b,	// (0x00026ac9) cam6_image_uncrop_pane_ParamLimits

0x292b,	// (0x00026ac9) cam6_image_uncrop_pane

0x293a,	// (0x00026ad8) cam6_indi_pane_ParamLimits

0x293a,	// (0x00026ad8) cam6_indi_pane

0x2950,	// (0x00026aee) cam6_mode_pane_ParamLimits

0x2950,	// (0x00026aee) cam6_mode_pane

0x2962,	// (0x00026b00) cam6_timer_pane_ParamLimits

0x2962,	// (0x00026b00) cam6_timer_pane

0x296e,	// (0x00026b0c) cam6_zoom_pane_ParamLimits

0x296e,	// (0x00026b0c) cam6_zoom_pane

0x8c9c,	// (0x0002ce3a) cam6_mode_pane_g1_ParamLimits

0x8c9c,	// (0x0002ce3a) cam6_mode_pane_g1

0x8cac,	// (0x0002ce4a) cam6_mode_pane_g2_ParamLimits

0x8cac,	// (0x0002ce4a) cam6_mode_pane_g2

0x8cbc,	// (0x0002ce5a) cam6_mode_pane_g3_ParamLimits

0x8cbc,	// (0x0002ce5a) cam6_mode_pane_g3

0x8ccc,	// (0x0002ce6a) cam6_mode_pane_g4_ParamLimits

0x8ccc,	// (0x0002ce6a) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x00033c72) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x00033c72) cam6_mode_pane_g

0xda90,	// (0x00031c2e) bg_tb_trans_pane_cp08_ParamLimits

0xda90,	// (0x00031c2e) bg_tb_trans_pane_cp08

0xda9e,	// (0x00031c3c) cam6_battery_pane_ParamLimits

0xda9e,	// (0x00031c3c) cam6_battery_pane

0xdab4,	// (0x00031c52) cam6_indi_pane_g1_ParamLimits

0xdab4,	// (0x00031c52) cam6_indi_pane_g1

0xdac6,	// (0x00031c64) cam6_indi_pane_g2_ParamLimits

0xdac6,	// (0x00031c64) cam6_indi_pane_g2

0xdad8,	// (0x00031c76) cam6_indi_pane_g3_ParamLimits

0xdad8,	// (0x00031c76) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x00033c7b) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x00033c7b) cam6_indi_pane_g

0xdaea,	// (0x00031c88) cam6_indi_pane_t1_ParamLimits

0xdaea,	// (0x00031c88) cam6_indi_pane_t1

0x8cdc,	// (0x0002ce7a) cam6_autofocus_pane_g1

0x8ce4,	// (0x0002ce82) cam6_autofocus_pane_g2

0x8cec,	// (0x0002ce8a) cam6_autofocus_pane_g3

0x8cf4,	// (0x0002ce92) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x00033c82) cam6_autofocus_pane_g

0xdb10,	// (0x00031cae) cam6_timer_pane_g1

0xdb18,	// (0x00031cb6) cam6_timer_pane_t1

0xdb26,	// (0x00031cc4) cam6_zoom_cont_pane

0xdb2e,	// (0x00031ccc) cam6_zoom_pane_g1

0xdb36,	// (0x00031cd4) cam6_zoom_pane_g2

0x8cfc,	// (0x0002ce9a) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x00033c8b) cam6_zoom_pane_g

0x3c4d,	// (0x00027deb) cam6_battery_pane_g1

0x3c4d,	// (0x00027deb) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x00033576) cam6_battery_pane_g

0xdb3e,	// (0x00031cdc) cam6_zoom_cont_pane_g1

0xdb47,	// (0x00031ce5) cam6_zoom_cont_pane_g2

0xdb50,	// (0x00031cee) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x00033c92) cam6_zoom_cont_pane_g

0x8d16,	// (0x0002ceb4) cam6_mode_pane_cp_ParamLimits

0x8d16,	// (0x0002ceb4) cam6_mode_pane_cp

0x8d28,	// (0x0002cec6) cam6_zoom_pane_cp_ParamLimits

0x8d28,	// (0x0002cec6) cam6_zoom_pane_cp

0x8d34,	// (0x0002ced2) vid6_image_uncrop_cif_pane_ParamLimits

0x8d34,	// (0x0002ced2) vid6_image_uncrop_cif_pane

0x8d44,	// (0x0002cee2) vid6_image_uncrop_nhd_pane_ParamLimits

0x8d44,	// (0x0002cee2) vid6_image_uncrop_nhd_pane

0x8d53,	// (0x0002cef1) vid6_image_uncrop_vga_pane_ParamLimits

0x8d53,	// (0x0002cef1) vid6_image_uncrop_vga_pane

0x8d62,	// (0x0002cf00) vid6_image_uncrop_wvga_pane_ParamLimits

0x8d62,	// (0x0002cf00) vid6_image_uncrop_wvga_pane

0x8d71,	// (0x0002cf0f) vid6_indi_pane_ParamLimits

0x8d71,	// (0x0002cf0f) vid6_indi_pane

0xda90,	// (0x00031c2e) bg_tb_trans_pane_cp09_ParamLimits

0xda90,	// (0x00031c2e) bg_tb_trans_pane_cp09

0xdb68,	// (0x00031d06) cam6_battery_pane_cp_ParamLimits

0xdb68,	// (0x00031d06) cam6_battery_pane_cp

0xdb74,	// (0x00031d12) vid6_indi_pane_g1_ParamLimits

0xdb74,	// (0x00031d12) vid6_indi_pane_g1

0xdb86,	// (0x00031d24) vid6_indi_pane_g2_ParamLimits

0xdb86,	// (0x00031d24) vid6_indi_pane_g2

0xdb98,	// (0x00031d36) vid6_indi_pane_g3_ParamLimits

0xdb98,	// (0x00031d36) vid6_indi_pane_g3

0xdbad,	// (0x00031d4b) vid6_indi_pane_g4_ParamLimits

0xdbad,	// (0x00031d4b) vid6_indi_pane_g4

0xdbc2,	// (0x00031d60) vid6_indi_pane_g5_ParamLimits

0xdbc2,	// (0x00031d60) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x00033c99) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x00033c99) vid6_indi_pane_g

0xdbdc,	// (0x00031d7a) vid6_indi_pane_t1_ParamLimits

0xdbdc,	// (0x00031d7a) vid6_indi_pane_t1

0xdbf2,	// (0x00031d90) vid6_indi_pane_t2_ParamLimits

0xdbf2,	// (0x00031d90) vid6_indi_pane_t2

0xdc1a,	// (0x00031db8) vid6_indi_pane_t3_ParamLimits

0xdc1a,	// (0x00031db8) vid6_indi_pane_t3

0xdc42,	// (0x00031de0) vid6_indi_pane_t4_ParamLimits

0xdc42,	// (0x00031de0) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x00033ca4) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x00033ca4) vid6_indi_pane_t

0xdc66,	// (0x00031e04) wait_bar_pane_cp08

0x8d89,	// (0x0002cf27) main_cset_text2_pane_t1_ParamLimits

0x8d89,	// (0x0002cf27) main_cset_text2_pane_t1

0x8d04,	// (0x0002cea2) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d04,	// (0x0002cea2) listscroll_gen_pane_cp06_t1

0xafb8,	// (0x0002f156) main_cam6_set_pane

0xd111,	// (0x000312af) bg_tb_trans_pane_cp06_ParamLimits

0xd127,	// (0x000312c5) cam4_indicators_pane_g1_ParamLimits

0xd138,	// (0x000312d6) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x00033a1c) cam4_indicators_pane_g_ParamLimits

0xd156,	// (0x000312f4) cam4_indicators_pane_t1_ParamLimits

0xafaa,	// (0x0002f148) bg_tb_trans_pane_cp07_ParamLimits

0xd182,	// (0x00031320) vid4_indicators_pane_g1_ParamLimits

0xd196,	// (0x00031334) vid4_indicators_pane_g2_ParamLimits

0xd1aa,	// (0x00031348) vid4_indicators_pane_g3_ParamLimits

0xd1bb,	// (0x00031359) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x00033a2e) vid4_indicators_pane_g_ParamLimits

0xd1d9,	// (0x00031377) vid4_indicators_pane_t1_ParamLimits

0xd84b,	// (0x000319e9) vid4_progress_pane_g1_ParamLimits

0xd85b,	// (0x000319f9) vid4_progress_pane_g2_ParamLimits

0x28ee,	// (0x00026a8c) vid4_progress_pane_g3_ParamLimits

0xd86b,	// (0x00031a09) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x00033bd5) vid4_progress_pane_g_ParamLimits

0x2900,	// (0x00026a9e) vid4_progress_pane_t1_ParamLimits

0xd883,	// (0x00031a21) vid4_progress_pane_t2_ParamLimits

0xd898,	// (0x00031a36) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x00033be0) vid4_progress_pane_t_ParamLimits

0x2918,	// (0x00026ab6) wait_bar_pane_cp07_ParamLimits

0x8da6,	// (0x0002cf44) main_cam6_set_pane_g2_ParamLimits

0x8da6,	// (0x0002cf44) main_cam6_set_pane_g2

0x8dca,	// (0x0002cf68) main_cset6_listscroll_pane_ParamLimits

0x8dca,	// (0x0002cf68) main_cset6_listscroll_pane

0x8dea,	// (0x0002cf88) main_cset6_slider_pane_ParamLimits

0x8dea,	// (0x0002cf88) main_cset6_slider_pane

0x8e00,	// (0x0002cf9e) main_cset6_text2_pane_ParamLimits

0x8e00,	// (0x0002cf9e) main_cset6_text2_pane

0xdc75,	// (0x00031e13) main_cset6_text_pane

0xdc7d,	// (0x00031e1b) main_cset_list_pane_copy1_ParamLimits

0xdc7d,	// (0x00031e1b) main_cset_list_pane_copy1

0xdc8d,	// (0x00031e2b) scroll_pane_cp028_copy1

0x8e0e,	// (0x0002cfac) cset_list_set_pane_copy1

0x8e1f,	// (0x0002cfbd) aid_position_infowindow_above_copy1

0x8e27,	// (0x0002cfc5) aid_position_infowindow_below_copy1

0x8e2f,	// (0x0002cfcd) cset_list_set_pane_g1_copy1

0x8e37,	// (0x0002cfd5) cset_list_set_pane_g3_copy1_ParamLimits

0x8e37,	// (0x0002cfd5) cset_list_set_pane_g3_copy1

0x8e46,	// (0x0002cfe4) cset_list_set_pane_t1_copy1_ParamLimits

0x8e46,	// (0x0002cfe4) cset_list_set_pane_t1_copy1

0x3154,	// (0x000272f2) list_highlight_pane_cp021_copy1_ParamLimits

0x3154,	// (0x000272f2) list_highlight_pane_cp021_copy1

0xdc96,	// (0x00031e34) cset6_slider_pane_ParamLimits

0xdc96,	// (0x00031e34) cset6_slider_pane

0xdcc2,	// (0x00031e60) main_cset6_slider_pane_g1_ParamLimits

0xdcc2,	// (0x00031e60) main_cset6_slider_pane_g1

0x8e5b,	// (0x0002cff9) main_cset6_slider_pane_g2_ParamLimits

0x8e5b,	// (0x0002cff9) main_cset6_slider_pane_g2

0xdcea,	// (0x00031e88) main_cset6_slider_pane_g3_ParamLimits

0xdcea,	// (0x00031e88) main_cset6_slider_pane_g3

0x8e83,	// (0x0002d021) main_cset6_slider_pane_g4_ParamLimits

0x8e83,	// (0x0002d021) main_cset6_slider_pane_g4

0x8e8f,	// (0x0002d02d) main_cset6_slider_pane_g5_ParamLimits

0x8e8f,	// (0x0002d02d) main_cset6_slider_pane_g5

0xd37d,	// (0x0003151b) main_cset6_slider_pane_g7_ParamLimits

0xd37d,	// (0x0003151b) main_cset6_slider_pane_g7

0xd389,	// (0x00031527) main_cset6_slider_pane_g8_ParamLimits

0xd389,	// (0x00031527) main_cset6_slider_pane_g8

0x8054,	// (0x0002c1f2) main_cset6_slider_pane_g9_ParamLimits

0x8054,	// (0x0002c1f2) main_cset6_slider_pane_g9

0x8060,	// (0x0002c1fe) main_cset6_slider_pane_g10_ParamLimits

0x8060,	// (0x0002c1fe) main_cset6_slider_pane_g10

0x806c,	// (0x0002c20a) main_cset6_slider_pane_g11_ParamLimits

0x806c,	// (0x0002c20a) main_cset6_slider_pane_g11

0x8078,	// (0x0002c216) main_cset6_slider_pane_g12_ParamLimits

0x8078,	// (0x0002c216) main_cset6_slider_pane_g12

0x8084,	// (0x0002c222) main_cset6_slider_pane_g13_ParamLimits

0x8084,	// (0x0002c222) main_cset6_slider_pane_g13

0x8090,	// (0x0002c22e) main_cset6_slider_pane_g14_ParamLimits

0x8090,	// (0x0002c22e) main_cset6_slider_pane_g14

0x8e9b,	// (0x0002d039) main_cset6_slider_pane_g15_ParamLimits

0x8e9b,	// (0x0002d039) main_cset6_slider_pane_g15

0x80b4,	// (0x0002c252) main_cset6_slider_pane_g16_ParamLimits

0x80b4,	// (0x0002c252) main_cset6_slider_pane_g16

0x80c0,	// (0x0002c25e) main_cset6_slider_pane_g17_ParamLimits

0x80c0,	// (0x0002c25e) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x00033cad) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x00033cad) main_cset6_slider_pane_g

0xdcf6,	// (0x00031e94) main_cset6_slider_pane_t1_ParamLimits

0xdcf6,	// (0x00031e94) main_cset6_slider_pane_t1

0x8ecb,	// (0x0002d069) main_cset6_slider_pane_t2_ParamLimits

0x8ecb,	// (0x0002d069) main_cset6_slider_pane_t2

0x8ef6,	// (0x0002d094) main_cset6_slider_pane_t3_ParamLimits

0x8ef6,	// (0x0002d094) main_cset6_slider_pane_t3

0x8f21,	// (0x0002d0bf) main_cset6_slider_pane_t4_ParamLimits

0x8f21,	// (0x0002d0bf) main_cset6_slider_pane_t4

0x8f4c,	// (0x0002d0ea) main_cset6_slider_pane_t5_ParamLimits

0x8f4c,	// (0x0002d0ea) main_cset6_slider_pane_t5

0xdd37,	// (0x00031ed5) main_cset6_slider_pane_t7_ParamLimits

0xdd37,	// (0x00031ed5) main_cset6_slider_pane_t7

0x8f77,	// (0x0002d115) main_cset6_slider_pane_t8_ParamLimits

0x8f77,	// (0x0002d115) main_cset6_slider_pane_t8

0x8f9b,	// (0x0002d139) main_cset6_slider_pane_t9_ParamLimits

0x8f9b,	// (0x0002d139) main_cset6_slider_pane_t9

0x8fbf,	// (0x0002d15d) main_cset6_slider_pane_t10_ParamLimits

0x8fbf,	// (0x0002d15d) main_cset6_slider_pane_t10

0x8fe3,	// (0x0002d181) main_cset6_slider_pane_t11_ParamLimits

0x8fe3,	// (0x0002d181) main_cset6_slider_pane_t11

0xdd6d,	// (0x00031f0b) main_cset6_slider_pane_t14_ParamLimits

0xdd6d,	// (0x00031f0b) main_cset6_slider_pane_t14

0xdda6,	// (0x00031f44) main_cset6_slider_pane_t15_ParamLimits

0xdda6,	// (0x00031f44) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x00033cd2) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x00033cd2) main_cset6_slider_pane_t

0xdddf,	// (0x00031f7d) cset_slider_pane_g1_copy1

0xdde8,	// (0x00031f86) cset_slider_pane_g2_copy1

0xddf1,	// (0x00031f8f) cset_slider_pane_g3_copy1

0x2a1d,	// (0x00026bbb) bg_popup_sub_pane_cp011_copy1

0xddfa,	// (0x00031f98) main_cset_text_pane_g1_copy1

0xd572,	// (0x00031710) main_cset_text_pane_t1_copy1

0xd580,	// (0x0003171e) main_cset_text_pane_t2_copy1

0xd58e,	// (0x0003172c) main_cset_text_pane_t3_copy1

0xd59c,	// (0x0003173a) main_cset_text_pane_t4_copy1

0xd5aa,	// (0x00031748) main_cset_text_pane_t5_copy1

0xde02,	// (0x00031fa0) main_cset_text_pane_t6_copy1

0xde10,	// (0x00031fae) main_cset_text_pane_t7_copy1

0x8d89,	// (0x0002cf27) main_cset_text2_pane_t1_copy1

0xafaa,	// (0x0002f148) main_ncimui_pane

0x1cf7,	// (0x00025e95) popup_query_ncimui_window_ParamLimits

0x1cf7,	// (0x00025e95) popup_query_ncimui_window

0xc839,	// (0x000309d7) field_cale_ev2_pane_g4_ParamLimits

0xc839,	// (0x000309d7) field_cale_ev2_pane_g4

0x7a9d,	// (0x0002bc3b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7a9d,	// (0x0002bc3b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x000339b6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x000339b6) cell_video_dialer_keypad_pane_g

0x7ab5,	// (0x0002bc53) cell_video_dialer_keypad_pane_t1

0x2a1d,	// (0x00026bbb) bg_popup_window_pane_cp012

0xbfdd,	// (0x0003017b) heading_pane_cp06

0xde3c,	// (0x00031fda) ncim_query_content_pane

0x2a1d,	// (0x00026bbb) bg_popup_heading_pane_cp01

0xde44,	// (0x00031fe2) ncim_heading_pane_t1

0xde52,	// (0x00031ff0) ncim_indicator_popup_pane

0xde64,	// (0x00032002) ncim_query_button_pane

0xde78,	// (0x00032016) ncim_query_content_pane_t1

0xde8a,	// (0x00032028) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x00033d16) ncim_query_content_pane_t

0xdec4,	// (0x00032062) ncim_query_list_pane

0xded6,	// (0x00032074) ncim_query_popup_pane

0xde52,	// (0x00031ff0) ncim_indicator_popup_pane_ParamLimits

0x914d,	// (0x0002d2eb) ncim_query_content_pane_g1_ParamLimits

0x914d,	// (0x0002d2eb) ncim_query_content_pane_g1

0xde78,	// (0x00032016) ncim_query_content_pane_t1_ParamLimits

0xde8a,	// (0x00032028) ncim_query_content_pane_t2_ParamLimits

0x9159,	// (0x0002d2f7) ncim_query_content_pane_t3_ParamLimits

0x9159,	// (0x0002d2f7) ncim_query_content_pane_t3

0x9181,	// (0x0002d31f) ncim_query_content_pane_t4_ParamLimits

0x9181,	// (0x0002d31f) ncim_query_content_pane_t4

0x91a9,	// (0x0002d347) ncim_query_content_pane_t5_ParamLimits

0x91a9,	// (0x0002d347) ncim_query_content_pane_t5

0xde9c,	// (0x0003203a) ncim_query_content_pane_t6_ParamLimits

0xde9c,	// (0x0003203a) ncim_query_content_pane_t6

0xfb78,	// (0x00033d16) ncim_query_content_pane_t_ParamLimits

0xdec4,	// (0x00032062) ncim_query_list_pane_ParamLimits

0xded6,	// (0x00032074) ncim_query_popup_pane_ParamLimits

0xdeea,	// (0x00032088) wait_bar_pane_cp04

0x2a1d,	// (0x00026bbb) input_focus_pane_cp011

0xdef2,	// (0x00032090) ncim_query_popup_pane_t1

0xdf00,	// (0x0003209e) ncim_list_query_list_pane_ParamLimits

0xdf00,	// (0x0003209e) ncim_list_query_list_pane

0x2a1d,	// (0x00026bbb) bg_button_pane_cp027

0xdf0d,	// (0x000320ab) ncim_query_button_pane_g1

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp012

0xdf17,	// (0x000320b5) ncim_list_query_list_pane_g1

0xdf1f,	// (0x000320bd) ncim_list_query_list_pane_t1

0xd147,	// (0x000312e5) cam4_indicators_pane_g3_ParamLimits

0xd147,	// (0x000312e5) cam4_indicators_pane_g3

0xd1c7,	// (0x00031365) vid4_indicators_pane_g5_ParamLimits

0xd1c7,	// (0x00031365) vid4_indicators_pane_g5

0xd877,	// (0x00031a15) vid4_progress_pane_g5_ParamLimits

0xd877,	// (0x00031a15) vid4_progress_pane_g5

0x9038,	// (0x0002d1d6) main_ncimui_pane_g1

0x90a1,	// (0x0002d23f) ncimui_group_query_pane_ParamLimits

0x90a1,	// (0x0002d23f) ncimui_group_query_pane

0x90e9,	// (0x0002d287) ncimui_list_pane_ParamLimits

0x90e9,	// (0x0002d287) ncimui_list_pane

0x9110,	// (0x0002d2ae) ncimui_text_pane_ParamLimits

0x9110,	// (0x0002d2ae) ncimui_text_pane

0x91d1,	// (0x0002d36f) ncimui_text_pane_t1_ParamLimits

0x91d1,	// (0x0002d36f) ncimui_text_pane_t1

0xdf2d,	// (0x000320cb) ncimui_list_single_graphic_pane_ParamLimits

0xdf2d,	// (0x000320cb) ncimui_list_single_graphic_pane

0x91ef,	// (0x0002d38d) ncimui_query_pane_ParamLimits

0x91ef,	// (0x0002d38d) ncimui_query_pane

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp013

0xdf3d,	// (0x000320db) ncim_list_query_list_pane_t1_copy1

0xdf17,	// (0x000320b5) ncim_list_single_graphic_pane_g1

0x9202,	// (0x0002d3a0) ncim_query_button_pane_cp01

0x920e,	// (0x0002d3ac) ncim_query_entry_pane_ParamLimits

0x920e,	// (0x0002d3ac) ncim_query_entry_pane

0x9221,	// (0x0002d3bf) ncimui_query_pane_g1

0x922d,	// (0x0002d3cb) ncimui_query_pane_t1_ParamLimits

0x922d,	// (0x0002d3cb) ncimui_query_pane_t1

0x3154,	// (0x000272f2) input_focus_pane_cp012

0xdf4b,	// (0x000320e9) ncim_query_entry_pane_t1

0x32fd,	// (0x0002749b) main_im_pane_ParamLimits

0xafaa,	// (0x0002f148) main_mobtv_pane_ParamLimits

0xafaa,	// (0x0002f148) main_mobtv_pane

0x8eb3,	// (0x0002d051) main_cset6_slider_pane_g18_ParamLimits

0x8eb3,	// (0x0002d051) main_cset6_slider_pane_g18

0x8ebf,	// (0x0002d05d) main_cset6_slider_pane_g19_ParamLimits

0x8ebf,	// (0x0002d05d) main_cset6_slider_pane_g19

0x31d7,	// (0x00027375) bg_main_mobtv_pane_ParamLimits

0x31d7,	// (0x00027375) bg_main_mobtv_pane

0x9246,	// (0x0002d3e4) main_mobtv_info_pane

0x924f,	// (0x0002d3ed) main_mobtv_loading_pane_ParamLimits

0x924f,	// (0x0002d3ed) main_mobtv_loading_pane

0xdf5d,	// (0x000320fb) main_mobtv_pg_channel_list_pane

0xdf67,	// (0x00032105) main_mobtv_pg_hdr_pane

0x925c,	// (0x0002d3fa) main_mobtv_programe_curr_pane_ParamLimits

0x925c,	// (0x0002d3fa) main_mobtv_programe_curr_pane

0x9269,	// (0x0002d407) main_mobtv_programe_next_pane_ParamLimits

0x9269,	// (0x0002d407) main_mobtv_programe_next_pane

0xdf70,	// (0x0003210e) popup_mobtv_noti_window

0x3c4d,	// (0x00027deb) main_tv_pg_hdr_pane_g1

0xdf78,	// (0x00032116) main_tv_pg_hdr_pane_g2

0xdf80,	// (0x0003211e) main_tv_pg_hdr_pane_g3

0xdf88,	// (0x00032126) main_tv_pg_hdr_pane_g4

0xdf90,	// (0x0003212e) main_tv_pg_hdr_pane_g5

0xdf9a,	// (0x00032138) main_tv_pg_hdr_pane_g6

0xdfa4,	// (0x00032142) main_tv_pg_hdr_pane_g7

0xdfae,	// (0x0003214c) main_tv_pg_hdr_pane_g8

0xdfb8,	// (0x00032156) main_tv_pg_hdr_pane_g9

0xdfc2,	// (0x00032160) main_tv_pg_hdr_pane_g10

0xdfcc,	// (0x0003216a) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x00033d23) main_tv_pg_hdr_pane_g

0xdfd6,	// (0x00032174) main_tv_pg_hdr_pane_t1

0xdfe4,	// (0x00032182) main_tv_pg_hdr_pane_t2

0xdff2,	// (0x00032190) main_tv_pg_hdr_pane_t3

0xe002,	// (0x000321a0) main_tv_pg_hdr_pane_t4

0xe012,	// (0x000321b0) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x00033d3a) main_tv_pg_hdr_pane_t

0xe022,	// (0x000321c0) single_mobtv_pg_channel_pane_ParamLimits

0xe022,	// (0x000321c0) single_mobtv_pg_channel_pane

0xe034,	// (0x000321d2) single_mobtv_pg_channel_table_pane

0xe03d,	// (0x000321db) single_mobtv_pg_channel_thumb_pane

0xe046,	// (0x000321e4) single_tv_pg_channel_pane_g1

0xe04f,	// (0x000321ed) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x00033d45) single_tv_pg_channel_pane_g

0x31bb,	// (0x00027359) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x31bb,	// (0x00027359) bg_single_mobtv_pg_channel_thumb_pane

0xe058,	// (0x000321f6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe058,	// (0x000321f6) single_mobtv_pg_channel_thumb_pane_g1

0xe066,	// (0x00032204) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe066,	// (0x00032204) single_mobtv_pg_channel_thumb_pane_g2

0xe072,	// (0x00032210) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe072,	// (0x00032210) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x00033d4a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x00033d4a) single_mobtv_pg_channel_thumb_pane_g

0xe07e,	// (0x0003221c) single_mobtv_pg_channel_thumb_pane_t1

0xe08c,	// (0x0003222a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x00033d51) single_mobtv_pg_channel_thumb_pane_t

0x3c4d,	// (0x00027deb) bg_single_mobtv_pg_channel_table_pane_g1

0x3c4d,	// (0x00027deb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x00033576) bg_single_mobtv_pg_channel_table_pane_g

0xe09a,	// (0x00032238) single_mobtv_pg_channel_table_pane_t1

0xe0a8,	// (0x00032246) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x00033d56) single_mobtv_pg_channel_table_pane_t

0x927e,	// (0x0002d41c) main_mobtv_info_pane_g1_ParamLimits

0x927e,	// (0x0002d41c) main_mobtv_info_pane_g1

0x929c,	// (0x0002d43a) main_mobtv_info_pane_t1_ParamLimits

0x929c,	// (0x0002d43a) main_mobtv_info_pane_t1

0x9314,	// (0x0002d4b2) main_mobtv_info_pane_t2_ParamLimits

0x9314,	// (0x0002d4b2) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x00033d60) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x00033d60) main_mobtv_info_pane_t

0x93a3,	// (0x0002d541) wait_bar_pane_cp05

0x93b5,	// (0x0002d553) main_mobtv_loading_pane_g1_ParamLimits

0x93b5,	// (0x0002d553) main_mobtv_loading_pane_g1

0x93c8,	// (0x0002d566) main_mobtv_loading_pane_g2_ParamLimits

0x93c8,	// (0x0002d566) main_mobtv_loading_pane_g2

0x93d4,	// (0x0002d572) main_mobtv_loading_pane_g3_ParamLimits

0x93d4,	// (0x0002d572) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x00033d67) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x00033d67) main_mobtv_loading_pane_g

0xe0b6,	// (0x00032254) main_mobtv_loading_pane_t1_ParamLimits

0xe0b6,	// (0x00032254) main_mobtv_loading_pane_t1

0xe0ce,	// (0x0003226c) main_mobtv_loading_pane_t2_ParamLimits

0xe0ce,	// (0x0003226c) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x00033d6e) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x00033d6e) main_mobtv_loading_pane_t

0x93e7,	// (0x0002d585) wait_bar_pane_cp06_ParamLimits

0x93e7,	// (0x0002d585) wait_bar_pane_cp06

0xe0f2,	// (0x00032290) main_mobtv_programe_curr_pane_t1

0xe100,	// (0x0003229e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x00033d73) main_mobtv_programe_curr_pane_t

0xe10e,	// (0x000322ac) main_mobtv_programe_next_pane_t1

0xe11c,	// (0x000322ba) main_mobtv_programe_next_pane_t2

0xe12a,	// (0x000322c8) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x00033d78) main_mobtv_programe_next_pane_t

0x2a1d,	// (0x00026bbb) bg_popup_mobtv_noti_window_pane

0xe138,	// (0x000322d6) popup_mobtv_noti_window_g1

0xe140,	// (0x000322de) popup_mobtv_noti_window_t1

0xe14e,	// (0x000322ec) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x00033d7f) popup_mobtv_noti_window_t

0x3c4d,	// (0x00027deb) bg_popup_mobtv_noti_window_pane_g1

0xafb8,	// (0x0002f156) sc_clock_pane

0xafb8,	// (0x0002f156) main_fs_bigclock_pane

0x8b11,	// (0x0002ccaf) blid2_tripm_pane_t4_ParamLimits

0x8b11,	// (0x0002ccaf) blid2_tripm_pane_t4

0x93f6,	// (0x0002d594) sc_clock_pane_g1_ParamLimits

0x93f6,	// (0x0002d594) sc_clock_pane_g1

0x9408,	// (0x0002d5a6) sc_clock_pane_t1_ParamLimits

0x9408,	// (0x0002d5a6) sc_clock_pane_t1

0x942a,	// (0x0002d5c8) sc_clock_pane_t2_ParamLimits

0x942a,	// (0x0002d5c8) sc_clock_pane_t2

0x9442,	// (0x0002d5e0) sc_clock_pane_t3_ParamLimits

0x9442,	// (0x0002d5e0) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x00033d84) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x00033d84) sc_clock_pane_t

0xa126,	// (0x0002e2c4) main_fs_bigclock_indicator_pane_ParamLimits

0xa126,	// (0x0002e2c4) main_fs_bigclock_indicator_pane

0x94e8,	// (0x0002d686) main_fs_bigclock_pane_g1_ParamLimits

0x94e8,	// (0x0002d686) main_fs_bigclock_pane_g1

0xa132,	// (0x0002e2d0) main_fs_bigclock_pane_t1_ParamLimits

0xa132,	// (0x0002e2d0) main_fs_bigclock_pane_t1

0xa144,	// (0x0002e2e2) main_fs_bigclock_pane_t2_ParamLimits

0xa144,	// (0x0002e2e2) main_fs_bigclock_pane_t2

0xa158,	// (0x0002e2f6) main_fs_bigclock_pane_t3_ParamLimits

0xa158,	// (0x0002e2f6) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x00033f15) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x00033f15) main_fs_bigclock_pane_t

0xed1f,	// (0x00032ebd) main_fs_bigclock_indicator_pane_g1

0xde6c,	// (0x0003200a) ncim_query_content_pane_g2_ParamLimits

0xde6c,	// (0x0003200a) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x00033d11) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x00033d11) ncim_query_content_pane_g

0x945b,	// (0x0002d5f9) sc_clock_pane_t4_ParamLimits

0x945b,	// (0x0002d5f9) sc_clock_pane_t4

0xafaa,	// (0x0002f148) main_radioblah_pane

0xd07f,	// (0x0003121d) cell_call4_button_pane_t1_copy1_ParamLimits

0xd07f,	// (0x0003121d) cell_call4_button_pane_t1_copy1

0x9050,	// (0x0002d1ee) main_ncimui_pane_t1_ParamLimits

0x9050,	// (0x0002d1ee) main_ncimui_pane_t1

0x906a,	// (0x0002d208) main_ncimui_pane_t2_ParamLimits

0x906a,	// (0x0002d208) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x00033d0a) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x00033d0a) main_ncimui_pane_t

0xe293,	// (0x00032431) main_radioblah_anim_pane_ParamLimits

0xe293,	// (0x00032431) main_radioblah_anim_pane

0xe2a4,	// (0x00032442) main_radioblah_info_pane_ParamLimits

0xe2a4,	// (0x00032442) main_radioblah_info_pane

0xe2b8,	// (0x00032456) main_radioblah_pane_t1_ParamLimits

0xe2b8,	// (0x00032456) main_radioblah_pane_t1

0xe2d4,	// (0x00032472) main_radioblah_pane_t2_ParamLimits

0xe2d4,	// (0x00032472) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x00033da5) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x00033da5) main_radioblah_pane_t

0x9547,	// (0x0002d6e5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9547,	// (0x0002d6e5) main_radioblah_rocker_ctrl_pane

0xe31c,	// (0x000324ba) main_radioblah_info_pane_t1_ParamLimits

0xe31c,	// (0x000324ba) main_radioblah_info_pane_t1

0x959f,	// (0x0002d73d) main_radioblah_info_pane_t2_ParamLimits

0x959f,	// (0x0002d73d) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x00033dae) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x00033dae) main_radioblah_info_pane_t

0x3c4d,	// (0x00027deb) main_radioblah_rocker_ctrl_pane_g1

0x964f,	// (0x0002d7ed) main_radioblah_rocker_ctrl_pane_g2

0x9657,	// (0x0002d7f5) main_radioblah_rocker_ctrl_pane_g3

0x965f,	// (0x0002d7fd) main_radioblah_rocker_ctrl_pane_g4

0x9667,	// (0x0002d805) main_radioblah_rocker_ctrl_pane_g5

0x966f,	// (0x0002d80d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x00033db7) main_radioblah_rocker_ctrl_pane_g

0x8d89,	// (0x0002cf27) main_cset_text2_pane_t1_copy1_ParamLimits

0xd109,	// (0x000312a7) cam4_image_uncrop_qvga_pane

0xd170,	// (0x0003130e) vid4_image_uncrop_qcif_pane

0xda82,	// (0x00031c20) cam6_image_uncrop_qvga_pane_ParamLimits

0xda82,	// (0x00031c20) cam6_image_uncrop_qvga_pane

0xdb58,	// (0x00031cf6) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb58,	// (0x00031cf6) vid6_image_uncrop_qcif_pane

0x2a1d,	// (0x00026bbb) bg_popup_preview_window_pane_cp03

0xde1e,	// (0x00031fbc) list_cset_text2_pane

0xde26,	// (0x00031fc4) main_cset6_text2_pane_g1

0xde2e,	// (0x00031fcc) main_cset6_text2_pane_t1

0x9677,	// (0x0002d815) list_cset_text2_pane_t1_ParamLimits

0x9677,	// (0x0002d815) list_cset_text2_pane_t1

0xafaa,	// (0x0002f148) main_radioblah_pane_ParamLimits

0x938f,	// (0x0002d52d) main_mobtv_info_pane_t3_ParamLimits

0x938f,	// (0x0002d52d) main_mobtv_info_pane_t3

0x9535,	// (0x0002d6d3) main_radioblah_pane_g1

0x956f,	// (0x0002d70d) main_radioblah_info_pane_g1

0x95f4,	// (0x0002d792) main_radioblah_info_pane_t3_ParamLimits

0x95f4,	// (0x0002d792) main_radioblah_info_pane_t3

0x4ecf,	// (0x0002906d) highlight_cell_cale_month_pane_ParamLimits

0x4ecf,	// (0x0002906d) highlight_cell_cale_month_pane

0xafb8,	// (0x0002f156) main_phob_fisheye_pane

0xc8ae,	// (0x00030a4c) scroll_pane_cp0031_ParamLimits

0xc8ae,	// (0x00030a4c) scroll_pane_cp0031

0xdc66,	// (0x00031e04) wait_bar_pane_cp08_ParamLimits

0x8e0e,	// (0x0002cfac) cset_list_set_pane_copy1_ParamLimits

0xe356,	// (0x000324f4) highlight_cell_cale_month_pane_g1

0x9690,	// (0x0002d82e) highlight_cell_cale_month_pane_t1

0xd83a,	// (0x000319d8) list_gen_pane_cp01

0xd368,	// (0x00031506) scroll_pane_01

0x969e,	// (0x0002d83c) list_single_double_fisheye_pane

0x96a7,	// (0x0002d845) list_double_fisheye_pane_g1_ParamLimits

0x96a7,	// (0x0002d845) list_double_fisheye_pane_g1

0x96b3,	// (0x0002d851) list_double_fisheye_pane_g2_ParamLimits

0x96b3,	// (0x0002d851) list_double_fisheye_pane_g2

0x96c7,	// (0x0002d865) list_double_fisheye_pane_g3_ParamLimits

0x96c7,	// (0x0002d865) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x00033dc4) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x00033dc4) list_double_fisheye_pane_g

0x96f0,	// (0x0002d88e) list_double_fisheye_pane_t1_ParamLimits

0x96f0,	// (0x0002d88e) list_double_fisheye_pane_t1

0x970b,	// (0x0002d8a9) list_double_fisheye_pane_t2_ParamLimits

0x970b,	// (0x0002d8a9) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x00033dcf) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x00033dcf) list_double_fisheye_pane_t

0xafb8,	// (0x0002f156) main_call5_pane

0x9486,	// (0x0002d624) sc_swipe_pane_ParamLimits

0x9486,	// (0x0002d624) sc_swipe_pane

0x9740,	// (0x0002d8de) call5_image_pane_ParamLimits

0x9740,	// (0x0002d8de) call5_image_pane

0x975d,	// (0x0002d8fb) call5_swipe_1_pane_ParamLimits

0x975d,	// (0x0002d8fb) call5_swipe_1_pane

0x9770,	// (0x0002d90e) call5_swipe_2_pane_ParamLimits

0x9770,	// (0x0002d90e) call5_swipe_2_pane

0x979b,	// (0x0002d939) popup_call5_audio_first_window_ParamLimits

0x979b,	// (0x0002d939) popup_call5_audio_first_window

0x31bb,	// (0x00027359) call5_swipe_1_pane_g1_ParamLimits

0x31bb,	// (0x00027359) call5_swipe_1_pane_g1

0xe35e,	// (0x000324fc) call5_swipe_1_pane_g2_ParamLimits

0xe35e,	// (0x000324fc) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x00033dd4) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x00033dd4) call5_swipe_1_pane_g

0xe36a,	// (0x00032508) call5_swipe_1_pane_t1_ParamLimits

0xe36a,	// (0x00032508) call5_swipe_1_pane_t1

0x31bb,	// (0x00027359) call5_swipe_2_pane_g1_ParamLimits

0x31bb,	// (0x00027359) call5_swipe_2_pane_g1

0xe37f,	// (0x0003251d) call5_swipe_2_pane_g2_ParamLimits

0xe37f,	// (0x0003251d) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x00033dd9) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x00033dd9) call5_swipe_2_pane_g

0xe38b,	// (0x00032529) call5_swipe_2_pane_t1_ParamLimits

0xe38b,	// (0x00032529) call5_swipe_2_pane_t1

0xe3a0,	// (0x0003253e) sc_swipe_pane_g1_ParamLimits

0xe3a0,	// (0x0003253e) sc_swipe_pane_g1

0xe3ad,	// (0x0003254b) sc_swipe_pane_g2_ParamLimits

0xe3ad,	// (0x0003254b) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x00033dde) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x00033dde) sc_swipe_pane_g

0xe3b9,	// (0x00032557) sc_swipe_pane_t1_ParamLimits

0xe3b9,	// (0x00032557) sc_swipe_pane_t1

0xafb8,	// (0x0002f156) main_cmail_launcher_pane

0x97ac,	// (0x0002d94a) aid_size_cell_cmail_l_ParamLimits

0x97ac,	// (0x0002d94a) aid_size_cell_cmail_l

0x97ba,	// (0x0002d958) grid_cmail_l_pane_ParamLimits

0x97ba,	// (0x0002d958) grid_cmail_l_pane

0x97d4,	// (0x0002d972) cell_cmail_l_pane_ParamLimits

0x97d4,	// (0x0002d972) cell_cmail_l_pane

0xe3ce,	// (0x0003256c) cell_cmail_l_pane_g1_ParamLimits

0xe3ce,	// (0x0003256c) cell_cmail_l_pane_g1

0xe3da,	// (0x00032578) cell_cmail_l_pane_t1_ParamLimits

0xe3da,	// (0x00032578) cell_cmail_l_pane_t1

0xe3f0,	// (0x0003258e) cell_cmail_l_pane_t2_ParamLimits

0xe3f0,	// (0x0003258e) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x00033de3) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x00033de3) cell_cmail_l_pane_t

0x3154,	// (0x000272f2) grid_highlight_pane_cp018_ParamLimits

0x3154,	// (0x000272f2) grid_highlight_pane_cp018

0x164d,	// (0x000257eb) main2_pane_ParamLimits

0x164d,	// (0x000257eb) main2_pane

0x3475,	// (0x00027613) popup_sp_fs_action_menu_bg_pane_g1

0x347d,	// (0x0002761b) popup_sp_fs_action_menu_bg_pane_g2

0x3485,	// (0x00027623) popup_sp_fs_action_menu_bg_pane_g3

0x348d,	// (0x0002762b) popup_sp_fs_action_menu_bg_pane_g4

0x3495,	// (0x00027633) popup_sp_fs_action_menu_bg_pane_g5

0x349d,	// (0x0002763b) popup_sp_fs_action_menu_bg_pane_g6

0x34a5,	// (0x00027643) popup_sp_fs_action_menu_bg_pane_g7

0x34ad,	// (0x0002764b) popup_sp_fs_action_menu_bg_pane_g8

0x34b5,	// (0x00027653) popup_sp_fs_action_menu_bg_pane_g9

0x34bd,	// (0x0002765b) popup_sp_fs_action_menu_bg_pane_g10

0x34bd,	// (0x0002765b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000332e3) popup_sp_fs_action_menu_bg_pane_g

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g2

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00033391) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00033391) list_medium_line_x2_t3_g3_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t2

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g3_t

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g2_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_x2_t3_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t2

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g2_t

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g2

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g3

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x000333a4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x000333a4) list_medium_line_x2_t4_g4_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t2

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t3

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x000333ad) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x000333ad) list_medium_line_x2_t4_g4_t

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g2

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g3

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x000333a4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x000333a4) list_medium_line_x2_t2_g4_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g4_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g4_t

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g2

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00033391) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00033391) list_medium_line_x2_t2_g3_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g3_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g3_t

0x5234,	// (0x000293d2) main_sp_fs_list_pane_ParamLimits

0x5234,	// (0x000293d2) main_sp_fs_list_pane

0xb088,	// (0x0002f226) sp_fs_scroll_pane_ParamLimits

0xb088,	// (0x0002f226) sp_fs_scroll_pane

0x5240,	// (0x000293de) list_medium_line_x2_t3_t1

0x5240,	// (0x000293de) list_medium_line_x2_t3_t2

0x5240,	// (0x000293de) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0003345a) list_medium_line_x2_t3_t

0x5240,	// (0x000293de) list_medium_line_x3_t4_t1

0x5240,	// (0x000293de) list_medium_line_x3_t4_t2

0x5240,	// (0x000293de) list_medium_line_x3_t4_t3

0x5240,	// (0x000293de) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x00033461) list_medium_line_x3_t4_t

0x5240,	// (0x000293de) list_medium_line_x4_t5_t1

0x5240,	// (0x000293de) list_medium_line_x4_t5_t2

0x5240,	// (0x000293de) list_medium_line_x4_t5_t3

0x5240,	// (0x000293de) list_medium_line_x4_t5_t4

0x5240,	// (0x000293de) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0003346a) list_medium_line_x4_t5_t

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g1

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g2

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g3

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x000333a4) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x000333a4) list_medium_line_t4_g4_g

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t1

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t2

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t3

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t4_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x000333ad) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x000333ad) list_medium_line_t4_g4_t

0x5555,	// (0x000296f3) chi_dic_find_pane_g1

0x1ac1,	// (0x00025c5f) main_tport_pane

0x5240,	// (0x000293de) list_medium_line_plain_t1

0x31bb,	// (0x00027359) list_medium_line_t2_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g2_g1

0x31bb,	// (0x00027359) list_medium_line_t2_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_t2_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_t2_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_g2_t1

0x3ac9,	// (0x00027c67) list_medium_line_t2_g2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_t2_g2_t

0xd8ad,	// (0x00031a4b) aid_sp_fs_list_icon_a_sm

0xd8b5,	// (0x00031a53) aid_sp_fs_list_icon_d

0xd8bd,	// (0x00031a5b) aid_sp_fs_text_primary

0xd8c6,	// (0x00031a64) aid_sp_fs_text_secondary

0x2a1d,	// (0x00026bbb) list_medium_line

0x2a1d,	// (0x00026bbb) list_medium_line_g2

0x2a1d,	// (0x00026bbb) list_medium_line_g3

0x2a1d,	// (0x00026bbb) list_medium_line_plain

0x2a1d,	// (0x00026bbb) list_medium_line_plain_t2

0x2a1d,	// (0x00026bbb) list_medium_line_plain_t3

0x2a1d,	// (0x00026bbb) list_medium_line_right_icon

0x2a1d,	// (0x00026bbb) list_medium_line_right_iconx2

0x2a1d,	// (0x00026bbb) list_medium_line_t2

0x2a1d,	// (0x00026bbb) list_medium_line_t2_g2

0x2a1d,	// (0x00026bbb) list_medium_line_t2_g3

0x2a1d,	// (0x00026bbb) list_medium_line_t2_right_icon

0x2a1d,	// (0x00026bbb) list_medium_line_t2_right_iconx2

0x2a1d,	// (0x00026bbb) list_medium_line_t3

0x2a1d,	// (0x00026bbb) list_medium_line_t3_g2

0x2a1d,	// (0x00026bbb) list_medium_line_t3_g3

0x2a1d,	// (0x00026bbb) list_medium_line_t3_right_iconx2

0x2a1d,	// (0x00026bbb) list_medium_line_t4_g4

0x2a1d,	// (0x00026bbb) list_medium_line_x2

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t2_g2

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t2_g3

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t2_g4

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t3

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t3_g2

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t3_g3

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t3_g4

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t4_g2

0x2a1d,	// (0x00026bbb) list_medium_line_x2_t4_g4

0x2a1d,	// (0x00026bbb) list_medium_line_x3

0x2a1d,	// (0x00026bbb) list_medium_line_x3_t4

0x2a1d,	// (0x00026bbb) list_medium_line_x3_t4_g4

0x2a1d,	// (0x00026bbb) list_medium_line_x4_t4

0x2a1d,	// (0x00026bbb) list_medium_line_x4_t4_g7

0x2a1d,	// (0x00026bbb) list_medium_line_x4_t5

0x8901,	// (0x0002ca9f) list_single_fs_dyc_pane_ParamLimits

0x8901,	// (0x0002ca9f) list_single_fs_dyc_pane

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g1

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g2

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g3

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g4

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g5_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g5

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g6_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x4_t4_g7_g6

0x31c9,	// (0x00027367) list_medium_line_x4_t4_g7_g7_ParamLimits

0x31c9,	// (0x00027367) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x00033ceb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x00033ceb) list_medium_line_x4_t4_g7_g

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t1

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t2

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x4_t4_g7_t3

0x5ac2,	// (0x00029c60) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5ac2,	// (0x00029c60) list_medium_line_x4_t4_g7_t4

0x5ac2,	// (0x00029c60) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5ac2,	// (0x00029c60) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x00033cfa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x00033cfa) list_medium_line_x4_t4_g7_t

0x9007,	// (0x0002d1a5) list_single_dyc_row_pane_ParamLimits

0x9007,	// (0x0002d1a5) list_single_dyc_row_pane

0x972d,	// (0x0002d8cb) call5_gesture_pane_ParamLimits

0x972d,	// (0x0002d8cb) call5_gesture_pane

0x9783,	// (0x0002d921) call5_windows_pane_ParamLimits

0x9783,	// (0x0002d921) call5_windows_pane

0x97ee,	// (0x0002d98c) call5_swipe_1_pane_cp_ParamLimits

0x97ee,	// (0x0002d98c) call5_swipe_1_pane_cp

0x97fa,	// (0x0002d998) call5_swipe_2_pane_cp_ParamLimits

0x97fa,	// (0x0002d998) call5_swipe_2_pane_cp

0x3a60,	// (0x00027bfe) call5_image_pane_cp

0x9806,	// (0x0002d9a4) popup_call5_audio_first_window_cp_ParamLimits

0x9806,	// (0x0002d9a4) popup_call5_audio_first_window_cp

0xe3a0,	// (0x0003253e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3a0,	// (0x0003253e) call5_swipe_1_pane_g1_cp

0xe40d,	// (0x000325ab) call5_swipe_1_pane_g2_cp

0xe3b9,	// (0x00032557) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3b9,	// (0x00032557) call5_swipe_1_pane_t1_cp

0xe3a0,	// (0x0003253e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3a0,	// (0x0003253e) call5_swipe_2_pane_g1_cp

0xe415,	// (0x000325b3) call5_swipe_2_pane_g2_cp

0xe41d,	// (0x000325bb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe41d,	// (0x000325bb) call5_swipe_2_pane_t1_cp

0x3154,	// (0x000272f2) main_sp_fs_email_pane

0xe432,	// (0x000325d0) main_sp_fs_listscroll_pane_te

0xe43b,	// (0x000325d9) popup_sp_fs_action_menu_pane_ParamLimits

0xe43b,	// (0x000325d9) popup_sp_fs_action_menu_pane

0x3c4d,	// (0x00027deb) bg_sp_fs_ctrlbar_pane_g1

0xe47f,	// (0x0003261d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe488,	// (0x00032626) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe491,	// (0x0003262f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3c4d,	// (0x00027deb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x00033de8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc39b,	// (0x00030539) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc39b,	// (0x00030539) bg_sp_fs_ctrlbar_ddmenu_pane

0xe49a,	// (0x00032638) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe49a,	// (0x00032638) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4a6,	// (0x00032644) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe4a6,	// (0x00032644) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x00033df1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x00033df1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4b2,	// (0x00032650) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4b2,	// (0x00032650) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3c4d,	// (0x00027deb) list_medium_line_t2_right_icon_g1

0x5240,	// (0x000293de) list_medium_line_t2_right_icon_t1

0x5240,	// (0x000293de) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x00033df6) list_medium_line_t2_right_icon_t

0x5ad6,	// (0x00029c74) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5ad6,	// (0x00029c74) bg_sp_fs_ctrlbar_pane

0x985c,	// (0x0002d9fa) main_sp_fs_ctrlbar_button_pane_cp01

0x9866,	// (0x0002da04) main_sp_fs_ctrlbar_ddmenu_pane

0xe504,	// (0x000326a2) main_sp_fs_ctrlbar_pane_g1

0xe510,	// (0x000326ae) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x00033dfb) main_sp_fs_ctrlbar_pane_g

0x98a4,	// (0x0002da42) main_sp_fs_ctrlbar_pane_t1

0x98e3,	// (0x0002da81) main_sp_fs_ctrlbar_pane

0x9907,	// (0x0002daa5) main_sp_fs_listscroll_pane_te_cp01

0x9927,	// (0x0002dac5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9927,	// (0x0002dac5) popup_sp_fs_action_menu_pane_cp01

0x3154,	// (0x000272f2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3154,	// (0x000272f2) bg_sp_fs_highlight_list_pane_cp01

0xe537,	// (0x000326d5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe537,	// (0x000326d5) sp_fs_action_menu_list_gene_pane_g1

0xe546,	// (0x000326e4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe546,	// (0x000326e4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x00033e09) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x00033e09) sp_fs_action_menu_list_gene_pane_g

0xe553,	// (0x000326f1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe553,	// (0x000326f1) sp_fs_action_menu_list_gene_pane_t1

0xe56b,	// (0x00032709) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe56b,	// (0x00032709) sp_fs_action_menu_list_gene_pane

0xe58a,	// (0x00032728) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe58a,	// (0x00032728) popup_sp_fs_action_menu_bg_pane

0xe598,	// (0x00032736) sp_fs_action_menu_list_pane_ParamLimits

0xe598,	// (0x00032736) sp_fs_action_menu_list_pane

0xe5b8,	// (0x00032756) sp_fs_scroll_pane_cp01_ParamLimits

0xe5b8,	// (0x00032756) sp_fs_scroll_pane_cp01

0x5240,	// (0x000293de) list_medium_line_plain_t2_t1

0x5240,	// (0x000293de) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x00033df6) list_medium_line_plain_t2_t

0x5240,	// (0x000293de) list_medium_line_plain_t3_t1

0x5240,	// (0x000293de) list_medium_line_plain_t3_t2

0x5240,	// (0x000293de) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0003345a) list_medium_line_plain_t3_t

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g2_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_x2_t2_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g2_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_x2_t2_g2_t

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g2_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_x2_t4_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t2

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t3

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x000333ad) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x000333ad) list_medium_line_x2_t4_g2_t

0x3c4d,	// (0x00027deb) list_medium_line_t3_right_iconx2_g1

0x3c4d,	// (0x00027deb) list_medium_line_t3_right_iconx2_g2

0x3c4d,	// (0x00027deb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0003357b) list_medium_line_t3_right_iconx2_g

0x5240,	// (0x000293de) list_medium_line_t3_right_iconx2_t1

0x5240,	// (0x000293de) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x00033df6) list_medium_line_t3_right_iconx2_t

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g1

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g2

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g3

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x000333a4) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x000333a4) list_medium_line_x3_t4_g4_g

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t1

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t2

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t3

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x000333ad) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x000333ad) list_medium_line_x3_t4_g4_t

0x994c,	// (0x0002daea) list_single_dyc_row_text_pane_t1_ParamLimits

0x994c,	// (0x0002daea) list_single_dyc_row_text_pane_t1

0x9995,	// (0x0002db33) list_single_dyc_row_text_pane_t2_ParamLimits

0x9995,	// (0x0002db33) list_single_dyc_row_text_pane_t2

0xe5de,	// (0x0003277c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe5de,	// (0x0003277c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x00033e0e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x00033e0e) list_single_dyc_row_text_pane_t

0xe602,	// (0x000327a0) list_single_dyc_row_pane_g1_ParamLimits

0xe602,	// (0x000327a0) list_single_dyc_row_pane_g1

0xe60e,	// (0x000327ac) list_single_dyc_row_pane_g2_ParamLimits

0xe60e,	// (0x000327ac) list_single_dyc_row_pane_g2

0xe61a,	// (0x000327b8) list_single_dyc_row_pane_g3_ParamLimits

0xe61a,	// (0x000327b8) list_single_dyc_row_pane_g3

0xe626,	// (0x000327c4) list_single_dyc_row_pane_g4_ParamLimits

0xe626,	// (0x000327c4) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x00033e1b) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x00033e1b) list_single_dyc_row_pane_g

0xe632,	// (0x000327d0) list_single_dyc_row_text_pane_ParamLimits

0xe632,	// (0x000327d0) list_single_dyc_row_text_pane

0x2a1d,	// (0x00026bbb) bg_sp_fs_scroll_pane

0xe651,	// (0x000327ef) thumb_sp_fs_scroll_pane

0x31bb,	// (0x00027359) list_medium_line_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g1

0x3ac9,	// (0x00027c67) list_medium_line_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t1

0x31bb,	// (0x00027359) list_medium_line_x2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_g1

0x31bb,	// (0x00027359) list_medium_line_x2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_x2_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t1

0x31bb,	// (0x00027359) list_medium_line_x3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x3_g1

0xd111,	// (0x000312af) list_medium_line_x3_g2_ParamLimits

0xd111,	// (0x000312af) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x00033e24) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x00033e24) list_medium_line_x3_g

0xe65a,	// (0x000327f8) list_medium_line_x3_t1_ParamLimits

0xe65a,	// (0x000327f8) list_medium_line_x3_t1

0xe66e,	// (0x0003280c) thumb_sp_fs_scroll_pane_g1

0xe677,	// (0x00032815) thumb_sp_fs_scroll_pane_g2

0xe680,	// (0x0003281e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00033e29) thumb_sp_fs_scroll_pane_g

0xe66e,	// (0x0003280c) bg_sp_fs_scroll_pane_g1

0xe677,	// (0x00032815) bg_sp_fs_scroll_pane_g2

0xe680,	// (0x0003281e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00033e29) bg_sp_fs_scroll_pane_g

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g1

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g2

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g3

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x000333a4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x000333a4) list_medium_line_x2_t3_g4_g

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t1

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t2

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_x2_t3_g4_t

0x31bb,	// (0x00027359) list_medium_line_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g2_g1

0x31bb,	// (0x00027359) list_medium_line_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_g2_t1

0x31bb,	// (0x00027359) list_medium_line_t3_g2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g2_g1

0x31bb,	// (0x00027359) list_medium_line_t3_g2_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0003339f) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0003339f) list_medium_line_t3_g2_g

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t1

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t2

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_t3_g2_t

0x3c4d,	// (0x00027deb) list_medium_line_right_icon_g1

0x5240,	// (0x000293de) list_medium_line_right_icon_t1

0x31bb,	// (0x00027359) list_medium_line_t2_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g1

0x3ac9,	// (0x00027c67) list_medium_line_t2_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_t1

0x3ac9,	// (0x00027c67) list_medium_line_t2_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_t2_t

0x31bb,	// (0x00027359) list_medium_line_t3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g1

0x3ac9,	// (0x00027c67) list_medium_line_t3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_t1

0x3ac9,	// (0x00027c67) list_medium_line_t3_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_t2

0x3ac9,	// (0x00027c67) list_medium_line_t3_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_t3_t

0x31bb,	// (0x00027359) list_medium_line_g3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g3_g1

0x31bb,	// (0x00027359) list_medium_line_g3_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g3_g2

0x31bb,	// (0x00027359) list_medium_line_g3_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00033391) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00033391) list_medium_line_g3_g

0x3ac9,	// (0x00027c67) list_medium_line_g3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_g3_t1

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g1

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g2

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00033391) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00033391) list_medium_line_t2_g3_g

0x3ac9,	// (0x00027c67) list_medium_line_t2_g3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_g3_t1

0x3ac9,	// (0x00027c67) list_medium_line_t2_g3_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00033374) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00033374) list_medium_line_t2_g3_t

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g1_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g1

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g2_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g2

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g3_ParamLimits

0x31bb,	// (0x00027359) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00033391) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00033391) list_medium_line_t3_g3_g

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t1_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t1

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t2_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t2

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t3_ParamLimits

0x3ac9,	// (0x00027c67) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00033398) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00033398) list_medium_line_t3_g3_t

0x3c4d,	// (0x00027deb) list_medium_line_right_iconx2_g1

0x3c4d,	// (0x00027deb) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00033576) list_medium_line_right_iconx2_g

0x5240,	// (0x000293de) list_medium_line_right_iconx2_t1

0x3c4d,	// (0x00027deb) list_medium_line_t2_right_iconx2_g1

0x3c4d,	// (0x00027deb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00033576) list_medium_line_t2_right_iconx2_g

0x5240,	// (0x000293de) list_medium_line_t2_right_iconx2_t1

0x5240,	// (0x000293de) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x00033df6) list_medium_line_t2_right_iconx2_t

0x5240,	// (0x000293de) list_medium_line_x4_t4_t1

0x5240,	// (0x000293de) list_medium_line_x4_t4_t2

0x5240,	// (0x000293de) list_medium_line_x4_t4_t3

0x5240,	// (0x000293de) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x00033461) list_medium_line_x4_t4_t

0x9b0d,	// (0x0002dcab) tport_appsw_pane_ParamLimits

0x9b0d,	// (0x0002dcab) tport_appsw_pane

0x9b25,	// (0x0002dcc3) tport_contact_pane_ParamLimits

0x9b25,	// (0x0002dcc3) tport_contact_pane

0x9b3d,	// (0x0002dcdb) tport_listscroll_pane_ParamLimits

0x9b3d,	// (0x0002dcdb) tport_listscroll_pane

0x9b57,	// (0x0002dcf5) cell_tport_appsw_pane_ParamLimits

0x9b57,	// (0x0002dcf5) cell_tport_appsw_pane

0x5aa0,	// (0x00029c3e) tport_appsw_pane_g1_ParamLimits

0x5aa0,	// (0x00029c3e) tport_appsw_pane_g1

0xe689,	// (0x00032827) tport_contact_pane_g1

0xdef2,	// (0x00032090) tport_contact_pane_t1

0xe692,	// (0x00032830) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x00033e30) tport_contact_pane_t

0xe6a0,	// (0x0003283e) list_tport_pane

0xe6a9,	// (0x00032847) scroll_pane_cp_030

0x9b9f,	// (0x0002dd3d) cell_tport_appsw_pane_g1

0x9baf,	// (0x0002dd4d) cell_tport_appsw_pane_t1

0x9bbd,	// (0x0002dd5b) grid_highlight_pane_cp019

0x9bc5,	// (0x0002dd63) list_tport_double_graphic_pane_ParamLimits

0x9bc5,	// (0x0002dd63) list_tport_double_graphic_pane

0x3154,	// (0x000272f2) list_highlight_pane_cp023_ParamLimits

0x3154,	// (0x000272f2) list_highlight_pane_cp023

0x9bd2,	// (0x0002dd70) list_tport_double_graphic_pane_g1_ParamLimits

0x9bd2,	// (0x0002dd70) list_tport_double_graphic_pane_g1

0x9bdf,	// (0x0002dd7d) list_tport_double_graphic_pane_t1_ParamLimits

0x9bdf,	// (0x0002dd7d) list_tport_double_graphic_pane_t1

0x9bf4,	// (0x0002dd92) list_tport_double_graphic_pane_t2_ParamLimits

0x9bf4,	// (0x0002dd92) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x00033e3c) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x00033e3c) list_tport_double_graphic_pane_t

0x2a1d,	// (0x00026bbb) main_cale_note_pane

0x2645,	// (0x000267e3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2645,	// (0x000267e3) cell_vitu2_function_top_wide_pane_cp01

0x93a3,	// (0x0002d541) wait_bar_pane_cp05_ParamLimits

0x3154,	// (0x000272f2) listscroll_cmail_pane

0xe6b2,	// (0x00032850) list_cmail_pane

0x9c06,	// (0x0002dda4) list_cmail_body_pane

0x9c1b,	// (0x0002ddb9) list_single_cmail_header_caption_pane

0x9c31,	// (0x0002ddcf) list_single_cmail_header_detail_pane_ParamLimits

0x9c31,	// (0x0002ddcf) list_single_cmail_header_detail_pane

0xe6c2,	// (0x00032860) list_single_cmail_header_caption_pane_t1

0x9c5a,	// (0x0002ddf8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9c5a,	// (0x0002ddf8) list_single_cmail_header_detail_pane_g1

0xe6d9,	// (0x00032877) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6d9,	// (0x00032877) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x00033e41) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x00033e41) list_single_cmail_header_detail_pane_g

0xe6f2,	// (0x00032890) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6f2,	// (0x00032890) list_single_cmail_header_detail_pane_t1

0xe752,	// (0x000328f0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe752,	// (0x000328f0) list_single_cmail_header_editor_pane_bg

0xe04f,	// (0x000321ed) list_cmail_body_pane_g1

0xe769,	// (0x00032907) list_cmail_body_pane_t1

0xd24e,	// (0x000313ec) list_single_cmail_header_editor_pane_bg_g1

0x431f,	// (0x000284bd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd25e,	// (0x000313fc) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd256,	// (0x000313f4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd503,	// (0x000316a1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd27e,	// (0x0003141c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd26e,	// (0x0003140c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd276,	// (0x00031414) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x42ff,	// (0x0002849d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9c72,	// (0x0002de10) calenote_gesture_pane_ParamLimits

0x9c72,	// (0x0002de10) calenote_gesture_pane

0x9c92,	// (0x0002de30) calenote_window_pane_ParamLimits

0x9c92,	// (0x0002de30) calenote_window_pane

0xe777,	// (0x00032915) popup_note_window_cp01

0x9cae,	// (0x0002de4c) calenote_swipe_1_pane_ParamLimits

0x9cae,	// (0x0002de4c) calenote_swipe_1_pane

0x97fa,	// (0x0002d998) calenote_swipe_2_pane_ParamLimits

0x97fa,	// (0x0002d998) calenote_swipe_2_pane

0xe3a0,	// (0x0003253e) calenote_swipe_1_pane_g1_ParamLimits

0xe3a0,	// (0x0003253e) calenote_swipe_1_pane_g1

0xe3ad,	// (0x0003254b) calenote_swipe_1_pane_g2_ParamLimits

0xe3ad,	// (0x0003254b) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x00033dde) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x00033dde) calenote_swipe_1_pane_g

0xe789,	// (0x00032927) calenote_swipe_1_pane_t1_ParamLimits

0xe789,	// (0x00032927) calenote_swipe_1_pane_t1

0xe3a0,	// (0x0003253e) calenote_swipe_2_pane_g1_ParamLimits

0xe3a0,	// (0x0003253e) calenote_swipe_2_pane_g1

0xe7a8,	// (0x00032946) calenote_swipe_2_pane_g2_ParamLimits

0xe7a8,	// (0x00032946) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x00033e4d) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x00033e4d) calenote_swipe_2_pane_g

0xe7b4,	// (0x00032952) calenote_swipe_2_pane_t1_ParamLimits

0xe7b4,	// (0x00032952) calenote_swipe_2_pane_t1

0x2a1d,	// (0x00026bbb) main_mup_navstr_pane

0x73de,	// (0x0002b57c) main_mup3_pane_t7_ParamLimits

0x73de,	// (0x0002b57c) main_mup3_pane_t7

0xce1a,	// (0x00030fb8) main_mp4_pane_g6_ParamLimits

0xce1a,	// (0x00030fb8) main_mp4_pane_g6

0xd06d,	// (0x0003120b) main_image3_pane_t4_ParamLimits

0xd06d,	// (0x0003120b) main_image3_pane_t4

0x9cc3,	// (0x0002de61) popup_navstr_preview_pane_ParamLimits

0x9cc3,	// (0x0002de61) popup_navstr_preview_pane

0x9cd7,	// (0x0002de75) scroll_navstr_pane_ParamLimits

0x9cd7,	// (0x0002de75) scroll_navstr_pane

0x2a1d,	// (0x00026bbb) bg_popup_preview_window_pane_cp04

0xe7db,	// (0x00032979) popup_navstr_preview_pane_t1

0x9ceb,	// (0x0002de89) scroll_navstr_pane_g1_ParamLimits

0x9ceb,	// (0x0002de89) scroll_navstr_pane_g1

0x9cff,	// (0x0002de9d) scroll_navstr_pane_t1_ParamLimits

0x9cff,	// (0x0002de9d) scroll_navstr_pane_t1

0xe780,	// (0x0003291e) bg_button_pane_cp014

0xe780,	// (0x0003291e) bg_button_pane_cp030

0x96d3,	// (0x0002d871) list_double_fisheye_pane_g4_ParamLimits

0x96d3,	// (0x0002d871) list_double_fisheye_pane_g4

0x96df,	// (0x0002d87d) list_double_fisheye_pane_g5_ParamLimits

0x96df,	// (0x0002d87d) list_double_fisheye_pane_g5

0xb088,	// (0x0002f226) sp_fs_scroll_pane_cp03

0xe504,	// (0x000326a2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe510,	// (0x000326ae) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x00033dfb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x98a4,	// (0x0002da42) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6ba,	// (0x00032858) sp_fs_scroll_pane_cp02

0x3521,	// (0x000276bf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3521,	// (0x000276bf) popup_sp_fs_calendar_preview_list_single_pane

0x2a1d,	// (0x00026bbb) main_cam6_pano_pane

0xafaa,	// (0x0002f148) main_mup3_pane_ParamLimits

0x2a1d,	// (0x00026bbb) main_phacti_pane

0x9276,	// (0x0002d414) bg_button_pane_cp11

0x9290,	// (0x0002d42e) main_mobtv_info_pane_g2_ParamLimits

0x9290,	// (0x0002d42e) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x00033d5b) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x00033d5b) main_mobtv_info_pane_g

0x946d,	// (0x0002d60b) sc_clock_pane_t5_ParamLimits

0x946d,	// (0x0002d60b) sc_clock_pane_t5

0x9535,	// (0x0002d6d3) main_radioblah_pane_g1_ParamLimits

0xe2ec,	// (0x0003248a) main_radioblah_pane_t3_ParamLimits

0xe2ec,	// (0x0003248a) main_radioblah_pane_t3

0xe304,	// (0x000324a2) main_radioblah_pane_t4_ParamLimits

0xe304,	// (0x000324a2) main_radioblah_pane_t4

0x955d,	// (0x0002d6fb) main_radioblah_text_pane_ParamLimits

0x955d,	// (0x0002d6fb) main_radioblah_text_pane

0x956f,	// (0x0002d70d) main_radioblah_info_pane_g1_ParamLimits

0x9608,	// (0x0002d7a6) main_radioblah_info_pane_t4_ParamLimits

0x9608,	// (0x0002d7a6) main_radioblah_info_pane_t4

0x3154,	// (0x000272f2) main_sp_fs_calendar_pane

0x9d16,	// (0x0002deb4) main_phacti_pane_g1

0x9d1e,	// (0x0002debc) phacti_note_pane_ParamLimits

0x9d1e,	// (0x0002debc) phacti_note_pane

0xe7f2,	// (0x00032990) phacti_term_pane_ParamLimits

0xe7f2,	// (0x00032990) phacti_term_pane

0xe807,	// (0x000329a5) phacti_note_pane_t1_ParamLimits

0xe807,	// (0x000329a5) phacti_note_pane_t1

0xe81e,	// (0x000329bc) phacti_term_pane_g1

0xe826,	// (0x000329c4) phacti_term_pane_t1_ParamLimits

0xe826,	// (0x000329c4) phacti_term_pane_t1

0xe850,	// (0x000329ee) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3a3f,	// (0x00027bdd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x00033e57) popup_sp_fs_calendar_preview_list_single_pane_g

0xe858,	// (0x000329f6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe858,	// (0x000329f6) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe86e,	// (0x00032a0c) aid_popup_sp_fs_bg_corner_pane

0x3c4d,	// (0x00027deb) popup_sp_fs_calendar_preview_bg_pane_g1

0x2a1d,	// (0x00026bbb) popup_sp_fs_calendar_preview_bg_pane

0xe876,	// (0x00032a14) popup_sp_fs_calendar_preview_list_pane

0x5ad6,	// (0x00029c74) bg_main_sp_fs_cale_pane_ParamLimits

0x5ad6,	// (0x00029c74) bg_main_sp_fs_cale_pane

0xe887,	// (0x00032a25) listscroll_cale_mrui_pane_ParamLimits

0xe887,	// (0x00032a25) listscroll_cale_mrui_pane

0xe89c,	// (0x00032a3a) listscroll_sp_fs_schedule_track_pane

0xe8a5,	// (0x00032a43) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8a5,	// (0x00032a43) main_sp_fs_ctrlbar_pane_cp01

0xe8b8,	// (0x00032a56) main_sp_fs_ribbon_pane

0xe8c0,	// (0x00032a5e) popup_sp_fs_cale_preview_window

0x9d93,	// (0x0002df31) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9d93,	// (0x0002df31) list_single_sp_fs_schedule_track_pane

0x3154,	// (0x000272f2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3154,	// (0x000272f2) bg_sp_fs_highlight_list_pane_cp03

0x9da6,	// (0x0002df44) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9da6,	// (0x0002df44) list_single_sp_fs_schedule_track_pane_g1

0x9db2,	// (0x0002df50) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9db2,	// (0x0002df50) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x00033e5c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x00033e5c) list_single_sp_fs_schedule_track_pane_g

0x9dbe,	// (0x0002df5c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9dbe,	// (0x0002df5c) list_single_sp_fs_schedule_track_pane_t1

0x9dd8,	// (0x0002df76) sp_fs_schedule_track_pane_ParamLimits

0x9dd8,	// (0x0002df76) sp_fs_schedule_track_pane

0xe8d2,	// (0x00032a70) sp_fs_schedule_track_pane_g1

0xe8da,	// (0x00032a78) sp_fs_schedule_track_pane_g2

0xe8e2,	// (0x00032a80) sp_fs_schedule_track_pane_g3

0xe8ea,	// (0x00032a88) sp_fs_schedule_track_pane_g4

0xe8f2,	// (0x00032a90) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x00033e61) sp_fs_schedule_track_pane_g

0xd24e,	// (0x000313ec) bg_sp_fs_schedule_viewer_highlight_g1

0x431f,	// (0x000284bd) bg_sp_fs_schedule_viewer_highlight_g2

0xd256,	// (0x000313f4) bg_sp_fs_schedule_viewer_highlight_g3

0xd25e,	// (0x000313fc) bg_sp_fs_schedule_viewer_highlight_g4

0xd503,	// (0x000316a1) bg_sp_fs_schedule_viewer_highlight_g5

0xd26e,	// (0x0003140c) bg_sp_fs_schedule_viewer_highlight_g6

0xd276,	// (0x00031414) bg_sp_fs_schedule_viewer_highlight_g7

0xd27e,	// (0x0003141c) bg_sp_fs_schedule_viewer_highlight_g8

0x42ff,	// (0x0002849d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x00033e6c) bg_sp_fs_schedule_viewer_highlight_g

0x2a1d,	// (0x00026bbb) bg_main_sp_fs_ribbon_pane

0x9de9,	// (0x0002df87) main_sp_fs_ribbon_pane_g1

0xe8fa,	// (0x00032a98) main_sp_fs_ribbon_pane_t1

0x9df2,	// (0x0002df90) main_sp_fs_ribbon_pane_t2

0xe909,	// (0x00032aa7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x00033e7f) main_sp_fs_ribbon_pane_t

0xe918,	// (0x00032ab6) main_sp_fs_ribbon_scheduler_pane

0xe920,	// (0x00032abe) bg_main_sp_fs_ribbon_pane_g1

0xe929,	// (0x00032ac7) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x00032ad0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x00033e86) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x00032ad8) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x00032ae1) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x00032aea) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x00033e8d) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x00032af3) list_cale_mrui_pane

0x9e01,	// (0x0002df9f) sp_fs_scroll_pane_cp07_ParamLimits

0x9e01,	// (0x0002df9f) sp_fs_scroll_pane_cp07

0x9e1d,	// (0x0002dfbb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9e1d,	// (0x0002dfbb) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x00032b00) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x00032b08) list_sp_fs_schedule_track_pane

0xe972,	// (0x00032b10) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x00032b10) sp_fs_scroll_pane_cp06

0x3c4d,	// (0x00027deb) bgmain_sp_fs_calendar_pane_g1

0x9e2d,	// (0x0002dfcb) list_single_cale_mrui_pane_ParamLimits

0x9e2d,	// (0x0002dfcb) list_single_cale_mrui_pane

0xe984,	// (0x00032b22) list_single_cale_mrui_row_pane_ParamLimits

0xe984,	// (0x00032b22) list_single_cale_mrui_row_pane

0xe991,	// (0x00032b2f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe991,	// (0x00032b2f) list_single_cale_mrui_row_pane_g1

0xe9d6,	// (0x00032b74) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9d6,	// (0x00032b74) list_single_cale_mrui_row_pane_t1

0x9e4d,	// (0x0002dfeb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9e4d,	// (0x0002dfeb) list_single_cale_mrui_row_pane_t2

0xe9e8,	// (0x00032b86) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9e8,	// (0x00032b86) list_single_cale_mrui_row_pane_t3

0xea17,	// (0x00032bb5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea17,	// (0x00032bb5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x00033e9b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x00033e9b) list_single_cale_mrui_row_pane_t

0x9eb5,	// (0x0002e053) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9eb5,	// (0x0002e053) list_single_cmail_header_editor_pane_bg_cp01

0x9edb,	// (0x0002e079) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9edb,	// (0x0002e079) list_single_cmail_header_editor_pane_bg_cp02

0x9efb,	// (0x0002e099) main_radioblah_text_pane_t1_ParamLimits

0x9efb,	// (0x0002e099) main_radioblah_text_pane_t1

0xea46,	// (0x00032be4) cam6_indi_pane_cp01

0xea4e,	// (0x00032bec) cam6_mode_pane_cp01

0xea56,	// (0x00032bf4) cam6_pano_pane

0xea5f,	// (0x00032bfd) cam6_zoom_pane_cp01

0xea67,	// (0x00032c05) cam6_pano_image_pane

0xea72,	// (0x00032c10) cam6_pano_pane_g1

0xe04f,	// (0x000321ed) cam6_pano_pane_g2

0xea7b,	// (0x00032c19) cam6_pano_pane_g3

0xea84,	// (0x00032c22) cam6_pano_pane_g4

0xcb0f,	// (0x00030cad) cam6_pano_pane_g5

0xea8d,	// (0x00032c2b) cam6_pano_pane_g6

0xea97,	// (0x00032c35) cam6_pano_pane_g7

0xea9f,	// (0x00032c3d) cam6_pano_pane_g8

0xeaa8,	// (0x00032c46) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x00033ea4) cam6_pano_pane_g

0x2a1d,	// (0x00026bbb) main_browser_tag_pane

0xe7d3,	// (0x00032971) grid_navstr_albumart_pane

0xeab3,	// (0x00032c51) cell_navstr_albumart_pane_ParamLimits

0xeab3,	// (0x00032c51) cell_navstr_albumart_pane

0xead3,	// (0x00032c71) cell_navstr_albumart_pane_g1

0xbf1d,	// (0x000300bb) cell_navstr_albumart_pane_g2

0xbf2d,	// (0x000300cb) cell_navstr_albumart_pane_g3

0xbf25,	// (0x000300c3) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x00033eb7) cell_navstr_albumart_pane_g

0x9f15,	// (0x0002e0b3) bt_list_pane_ParamLimits

0x9f15,	// (0x0002e0b3) bt_list_pane

0x9f29,	// (0x0002e0c7) bt_list_pane_t1

0x9f38,	// (0x0002e0d6) bt_list_pane_t2

0x0001,

0xfd22,	// (0x00033ec0) bt_list_pane_t

0x2a1d,	// (0x00026bbb) main_cale_prevew_pane

0x9f47,	// (0x0002e0e5) popup_cale_preview_window_ParamLimits

0x9f47,	// (0x0002e0e5) popup_cale_preview_window

0x3154,	// (0x000272f2) bg_popup_preview_window_pane_cp05_ParamLimits

0x3154,	// (0x000272f2) bg_popup_preview_window_pane_cp05

0xeadb,	// (0x00032c79) list_cale_preview_pane_ParamLimits

0xeadb,	// (0x00032c79) list_cale_preview_pane

0x9f62,	// (0x0002e100) list_double_cale_preview_pane_ParamLimits

0x9f62,	// (0x0002e100) list_double_cale_preview_pane

0x9f74,	// (0x0002e112) list_single_cale_preview_pane_ParamLimits

0x9f74,	// (0x0002e112) list_single_cale_preview_pane

0x9f8a,	// (0x0002e128) list_single_cale_preview_pane_g1

0x9f92,	// (0x0002e130) list_single_cale_preview_pane_t1_ParamLimits

0x9f92,	// (0x0002e130) list_single_cale_preview_pane_t1

0x9fa7,	// (0x0002e145) list_double_cale_preview_pane_g1

0x9faf,	// (0x0002e14d) list_double_cale_preview_pane_t1_ParamLimits

0x9faf,	// (0x0002e14d) list_double_cale_preview_pane_t1

0x9fc4,	// (0x0002e162) list_double_cale_preview_pane_t2_ParamLimits

0x9fc4,	// (0x0002e162) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x00033ec5) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x00033ec5) list_double_cale_preview_pane_t

0x2a1d,	// (0x00026bbb) main_ezdial_pane

0x3154,	// (0x000272f2) main_sp_fs_email_pane_ParamLimits

0x9814,	// (0x0002d9b2) cmail_ddmenu_btn01_pane_ParamLimits

0x9814,	// (0x0002d9b2) cmail_ddmenu_btn01_pane

0x9827,	// (0x0002d9c5) cmail_ddmenu_btn02_pane_ParamLimits

0x9827,	// (0x0002d9c5) cmail_ddmenu_btn02_pane

0x984a,	// (0x0002d9e8) cmail_ddmenu_btn03_pane_ParamLimits

0x984a,	// (0x0002d9e8) cmail_ddmenu_btn03_pane

0x98e3,	// (0x0002da81) main_sp_fs_ctrlbar_pane_ParamLimits

0x9907,	// (0x0002daa5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9c06,	// (0x0002dda4) list_cmail_body_pane_ParamLimits

0xe6d0,	// (0x0003286e) bg_button_pane_cp12

0xe6e5,	// (0x00032883) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6e5,	// (0x00032883) list_single_cmail_header_detail_pane_g3

0xe72e,	// (0x000328cc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe72e,	// (0x000328cc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x00033e48) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x00033e48) list_single_cmail_header_detail_pane_t

0xe83b,	// (0x000329d9) phacti_term_pane_t2_ParamLimits

0xe83b,	// (0x000329d9) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x00033e52) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x00033e52) phacti_term_pane_t

0xeae7,	// (0x00032c85) aid_size_list_single_double

0x9fdc,	// (0x0002e17a) popup_ezdial_listscroll_window

0x9ff8,	// (0x0002e196) popup_number_entry_window_cp01

0x3a60,	// (0x00027bfe) bg_popup_call_pane_cp09

0xeaf3,	// (0x00032c91) ezdial_list_pane

0xeafb,	// (0x00032c99) scroll_pane_cp23

0x5ad6,	// (0x00029c74) bg_button_pane_cp028_ParamLimits

0x5ad6,	// (0x00029c74) bg_button_pane_cp028

0xa006,	// (0x0002e1a4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa006,	// (0x0002e1a4) cmail_ddmenu_btn01_pane_g1

0xa012,	// (0x0002e1b0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa012,	// (0x0002e1b0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x00033eca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x00033eca) cmail_ddmenu_btn01_pane_g

0xeb03,	// (0x00032ca1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb03,	// (0x00032ca1) cmail_ddmenu_btn01_pane_t1

0x5ad6,	// (0x00029c74) bg_button_pane_cp029_ParamLimits

0x5ad6,	// (0x00029c74) bg_button_pane_cp029

0xa026,	// (0x0002e1c4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa026,	// (0x0002e1c4) cmail_ddmenu_btn02_pane_g1

0xa03e,	// (0x0002e1dc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa03e,	// (0x0002e1dc) cmail_ddmenu_btn02_pane_t1

0x3154,	// (0x000272f2) bg_button_pane_cp031_ParamLimits

0x3154,	// (0x000272f2) bg_button_pane_cp031

0xa026,	// (0x0002e1c4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa026,	// (0x0002e1c4) cmail_ddmenu_btn03_pane_g1

0xa03e,	// (0x0002e1dc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa03e,	// (0x0002e1dc) cmail_ddmenu_btn03_pane_t1

0x7b2f,	// (0x0002bccd) cell_dialer2_keypad_pane_t1_ParamLimits

0x7b49,	// (0x0002bce7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7b49,	// (0x0002bce7) cell_dialer2_keypad_pane_t1_copy1

0x9099,	// (0x0002d237) ncimui_group_button_pane

0x3154,	// (0x000272f2) main_sp_fs_calendar_pane_ParamLimits

0x9c1b,	// (0x0002ddb9) list_single_cmail_header_caption_pane_ParamLimits

0xe87e,	// (0x00032a1c) aid_recal_txt_sm_pane

0x2a1d,	// (0x00026bbb) mian_recal_day_pane

0xe8c0,	// (0x00032a5e) popup_sp_fs_cale_preview_window_ParamLimits

0xeb19,	// (0x00032cb7) list_recal_day_pane

0xeb5b,	// (0x00032cf9) list_single_recal_day_pane_ParamLimits

0xeb5b,	// (0x00032cf9) list_single_recal_day_pane

0xeb6d,	// (0x00032d0b) list_single_recal_day_pane_g1_ParamLimits

0xeb6d,	// (0x00032d0b) list_single_recal_day_pane_g1

0xeb79,	// (0x00032d17) list_single_recal_day_pane_g2_ParamLimits

0xeb79,	// (0x00032d17) list_single_recal_day_pane_g2

0xeb85,	// (0x00032d23) list_single_recal_day_pane_g3_ParamLimits

0xeb85,	// (0x00032d23) list_single_recal_day_pane_g3

0xa062,	// (0x0002e200) list_single_recal_day_pane_g4_ParamLimits

0xa062,	// (0x0002e200) list_single_recal_day_pane_g4

0xeb91,	// (0x00032d2f) list_single_recal_day_pane_g5_ParamLimits

0xeb91,	// (0x00032d2f) list_single_recal_day_pane_g5

0xeb9d,	// (0x00032d3b) list_single_recal_day_pane_g6_ParamLimits

0xeb9d,	// (0x00032d3b) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x00033ed9) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x00033ed9) list_single_recal_day_pane_g

0xebb1,	// (0x00032d4f) list_single_recal_day_pane_t1

0xebc3,	// (0x00032d61) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x00033ee4) list_single_recal_day_pane_t

0xa07a,	// (0x0002e218) ncimui_query_button_pane_ParamLimits

0xa07a,	// (0x0002e218) ncimui_query_button_pane

0xa08a,	// (0x0002e228) ncimui_query_button_pane_t1_ParamLimits

0xa08a,	// (0x0002e228) ncimui_query_button_pane_t1

0xebd5,	// (0x00032d73) ncimui_query_button_pane_t2_ParamLimits

0xebd5,	// (0x00032d73) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x00033ee9) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x00033ee9) ncimui_query_button_pane_t

0xa09d,	// (0x0002e23b) query_button_pane_ParamLimits

0xa09d,	// (0x0002e23b) query_button_pane

0x2a1d,	// (0x00026bbb) bg_button_pane_cp0028

0xebe8,	// (0x00032d86) query_button_pane_t1

0x1ac1,	// (0x00025c5f) main_tport_pane_ParamLimits

0x9aca,	// (0x0002dc68) bg_popup_window_pane_cp01_ParamLimits

0x9aca,	// (0x0002dc68) bg_popup_window_pane_cp01

0x9ae5,	// (0x0002dc83) heading_pane_cp08_ParamLimits

0x9ae5,	// (0x0002dc83) heading_pane_cp08

0x9af8,	// (0x0002dc96) heading_pane_cp07_ParamLimits

0x9af8,	// (0x0002dc96) heading_pane_cp07

0x9b9f,	// (0x0002dd3d) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x00033e35) cell_tport_appsw_pane_g

0x5d64,	// (0x00029f02) input_candi_list_open_g1

0x506e,	// (0x0002920c) list_cale_time_pane_g6_ParamLimits

0x506e,	// (0x0002920c) list_cale_time_pane_g6

0x6d86,	// (0x0002af24) aid_size_touch_calib_1_ParamLimits

0x6d86,	// (0x0002af24) aid_size_touch_calib_1

0x6d98,	// (0x0002af36) aid_size_touch_calib_2_ParamLimits

0x6d98,	// (0x0002af36) aid_size_touch_calib_2

0x6db0,	// (0x0002af4e) aid_size_touch_calib_3_ParamLimits

0x6db0,	// (0x0002af4e) aid_size_touch_calib_3

0x6dce,	// (0x0002af6c) aid_size_touch_calib_4_ParamLimits

0x6dce,	// (0x0002af6c) aid_size_touch_calib_4

0x6de6,	// (0x0002af84) main_touch_calib_button_group_pane_ParamLimits

0x6de6,	// (0x0002af84) main_touch_calib_button_group_pane

0x6dfe,	// (0x0002af9c) main_touch_calib_pane_g1_ParamLimits

0x6e10,	// (0x0002afae) main_touch_calib_pane_g2_ParamLimits

0x6e22,	// (0x0002afc0) main_touch_calib_pane_g3_ParamLimits

0x6e34,	// (0x0002afd2) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x00033877) main_touch_calib_pane_g_ParamLimits

0x6e46,	// (0x0002afe4) main_touch_calib_pane_t1_ParamLimits

0x6e60,	// (0x0002affe) main_touch_calib_pane_t2_ParamLimits

0x6e7a,	// (0x0002b018) main_touch_calib_pane_t3_ParamLimits

0x6e8e,	// (0x0002b02c) main_touch_calib_pane_t4_ParamLimits

0x6ea2,	// (0x0002b040) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x00033880) main_touch_calib_pane_t_ParamLimits

0xc8d2,	// (0x00030a70) list_single_fp_cale_pane_g3_ParamLimits

0xc8d2,	// (0x00030a70) list_single_fp_cale_pane_g3

0xafaa,	// (0x0002f148) bg_button_pane_cp012_ParamLimits

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp03_ParamLimits

0x284d,	// (0x000269eb) cell_vitu2_function_top_pane_g1_ParamLimits

0xafaa,	// (0x0002f148) bg_vkb2_func_pane_cp04_ParamLimits

0x9024,	// (0x0002d1c2) main_ncimui_button_group_pane_ParamLimits

0x9024,	// (0x0002d1c2) main_ncimui_button_group_pane

0x9084,	// (0x0002d222) main_ncimui_pane_t3_ParamLimits

0x9084,	// (0x0002d222) main_ncimui_pane_t3

0xe7e9,	// (0x00032987) phacti_button_group_pane

0xeae7,	// (0x00032c85) aid_size_list_single_double_ParamLimits

0x9fdc,	// (0x0002e17a) popup_ezdial_listscroll_window_ParamLimits

0x9ff8,	// (0x0002e196) popup_number_entry_window_cp01_ParamLimits

0xa0b0,	// (0x0002e24e) phacti_button_pane_ParamLimits

0xa0b0,	// (0x0002e24e) phacti_button_pane

0x2a1d,	// (0x00026bbb) bg_button_pane_cp14

0xebf6,	// (0x00032d94) phacti_button_pane_t1

0xa0c1,	// (0x0002e25f) main_touch_calib_button_pane_ParamLimits

0xa0c1,	// (0x0002e25f) main_touch_calib_button_pane

0x32fd,	// (0x0002749b) bg_button_pane_cp18_ParamLimits

0x32fd,	// (0x0002749b) bg_button_pane_cp18

0xec04,	// (0x00032da2) main_touch_calib_button_pane_t1_ParamLimits

0xec04,	// (0x00032da2) main_touch_calib_button_pane_t1

0xec1a,	// (0x00032db8) main_touch_calib_button_pane_t2_ParamLimits

0xec1a,	// (0x00032db8) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x00033eee) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x00033eee) main_touch_calib_button_pane_t

0x2a1d,	// (0x00026bbb) cell_ncimui_button_pane

0x2a1d,	// (0x00026bbb) bg_button_pane_cp032

0xec38,	// (0x00032dd6) cell_ncimui_button_pane_t1

0xd04d,	// (0x000311eb) image3_infobar_pane_ParamLimits

0xd04d,	// (0x000311eb) image3_infobar_pane

0x9499,	// (0x0002d637) fs_bigclock_status_pane_ParamLimits

0x9499,	// (0x0002d637) fs_bigclock_status_pane

0x94a6,	// (0x0002d644) main_fs_bigclock_clock_pane_ParamLimits

0x94a6,	// (0x0002d644) main_fs_bigclock_clock_pane

0x94c4,	// (0x0002d662) main_fs_bigclock_indi_pane_ParamLimits

0x94c4,	// (0x0002d662) main_fs_bigclock_indi_pane

0x94f6,	// (0x0002d694) main_fs_bigclock_swipe_pane_ParamLimits

0x94f6,	// (0x0002d694) main_fs_bigclock_swipe_pane

0x2a1d,	// (0x00026bbb) main_fs_clock_dumped_data

0xe15c,	// (0x000322fa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe15c,	// (0x000322fa) list_single_fs_bigclock_indicator_pane_g1

0xe177,	// (0x00032315) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe177,	// (0x00032315) list_single_fs_bigclock_indicator_pane_g2

0xe191,	// (0x0003232f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe191,	// (0x0003232f) list_single_fs_bigclock_indicator_pane_g3

0xe1ab,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1ab,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x00033d8f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x00033d8f) list_single_fs_bigclock_indicator_pane_g

0xe1d6,	// (0x00032374) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1d6,	// (0x00032374) list_single_fs_bigclock_indicator_pane_t1

0xe1fe,	// (0x0003239c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1fe,	// (0x0003239c) list_single_fs_bigclock_indicator_pane_t2

0xe226,	// (0x000323c4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe226,	// (0x000323c4) list_single_fs_bigclock_indicator_pane_t3

0xe24e,	// (0x000323ec) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe24e,	// (0x000323ec) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x00033d9a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x00033d9a) list_single_fs_bigclock_indicator_pane_t

0xec46,	// (0x00032de4) image3_infobar_fav_pane_ParamLimits

0xec46,	// (0x00032de4) image3_infobar_fav_pane

0xec56,	// (0x00032df4) image3_infobar_loc_pane_ParamLimits

0xec56,	// (0x00032df4) image3_infobar_loc_pane

0xec6a,	// (0x00032e08) image3_infobar_time_pane_ParamLimits

0xec6a,	// (0x00032e08) image3_infobar_time_pane

0x3c4d,	// (0x00027deb) image3_infobar_time_pane_g1

0xec7a,	// (0x00032e18) image3_infobar_time_pane_t1

0x3c4d,	// (0x00027deb) image3_infobar_loc_pane_g1

0xec88,	// (0x00032e26) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x00033ef3) image3_infobar_loc_pane_g

0xec90,	// (0x00032e2e) image3_infobar_loc_pane_t1

0x3c4d,	// (0x00027deb) image3_infobar_fav_pane_g1

0xec9e,	// (0x00032e3c) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x00033ef8) image3_infobar_fav_pane_g

0xeca6,	// (0x00032e44) fs_bigclock_status_battery_pane

0xecaf,	// (0x00032e4d) fs_bigclock_status_signal_pane

0xecb8,	// (0x00032e56) fs_bigclock_status_title_pane

0xecc1,	// (0x00032e5f) fs_bigclock_status_signal_pane_g1

0xecca,	// (0x00032e68) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x00033efd) fs_bigclock_status_signal_pane_g

0xecd2,	// (0x00032e70) fs_bigclock_status_battery_pane_g1

0xecdb,	// (0x00032e79) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x00033f02) fs_bigclock_status_battery_pane_g

0xece3,	// (0x00032e81) fs_bigclock_status_title_pane_t1

0xa0d6,	// (0x0002e274) main_fs_bigclock_clock_pane_g1

0xa0d6,	// (0x0002e274) main_fs_bigclock_clock_pane_g2

0xa0e7,	// (0x0002e285) main_fs_bigclock_clock_pane_g3

0xa0e7,	// (0x0002e285) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x00033f07) main_fs_bigclock_clock_pane_g

0xa0fa,	// (0x0002e298) main_fs_bigclock_clock_pane_t1

0xa110,	// (0x0002e2ae) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x00033f10) main_fs_bigclock_clock_pane_t

0xecf1,	// (0x00032e8f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecf1,	// (0x00032e8f) list_single_fs_bigclock_indicator_pane

0xed02,	// (0x00032ea0) list_single_fs_bigclock_pane_ParamLimits

0xed02,	// (0x00032ea0) list_single_fs_bigclock_pane

0xed28,	// (0x00032ec6) main_fs_bigclock_indicator_pane_t1

0xed37,	// (0x00032ed5) list_single_fs_bigclock_pane_g1

0xed3f,	// (0x00032edd) list_single_fs_bigclock_pane_t1

0x3c4d,	// (0x00027deb) main_fs_bigclock_swipe_pane_g1

0xed82,	// (0x00032f20) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x00033f21) main_fs_bigclock_swipe_pane_g

0xed8a,	// (0x00032f28) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed8a,	// (0x00032f28) main_fs_bigclock_swipe_pane_t1

0x535e,	// (0x000294fc) call_type_pane_ParamLimits

0x2a1d,	// (0x00026bbb) main_btmg_pane

0xe9bd,	// (0x00032b5b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9bd,	// (0x00032b5b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x00033e94) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x00033e94) list_single_cale_mrui_row_pane_g

0xeb42,	// (0x00032ce0) list_recal_vselct_arw_lo_pane

0xeb4a,	// (0x00032ce8) list_recal_vselct_arw_up_pane

0xeb52,	// (0x00032cf0) list_recal_vselct_pane

0xa16a,	// (0x0002e308) btmg_button_pane

0xa174,	// (0x0002e312) main_btmg_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp044

0xeda7,	// (0x00032f45) btmg_button_pane_t1

0xc06d,	// (0x0003020b) aid_listscroll_gen

0x3154,	// (0x000272f2) main_cntbar_detail_pane

0xe6b2,	// (0x00032850) list_cmail_folder_pane

0xb088,	// (0x0002f226) sp_fs_scroll_pane_cp03_ParamLimits

0x9c1b,	// (0x0002ddb9) list_single_fs_dyc_pane_cp01_ParamLimits

0x9c1b,	// (0x0002ddb9) list_single_fs_dyc_pane_cp01

0xedb5,	// (0x00032f53) aid_size_cmail_indent

0xedbe,	// (0x00032f5c) list_single_dyc_row_pane_cp01

0xa1aa,	// (0x0002e348) cntbar_detail_list_pane_ParamLimits

0xa1aa,	// (0x0002e348) cntbar_detail_list_pane

0xa1f6,	// (0x0002e394) main_cntbar_detail_cont_pane_ParamLimits

0xa1f6,	// (0x0002e394) main_cntbar_detail_cont_pane

0xb088,	// (0x0002f226) scroll_pane_cp032_ParamLimits

0xb088,	// (0x0002f226) scroll_pane_cp032

0xa20a,	// (0x0002e3a8) cntbar_detail_list_event_pane_ParamLimits

0xa20a,	// (0x0002e3a8) cntbar_detail_list_event_pane

0xa1ba,	// (0x0002e358) cntbar_detail_list_shct_pane

0x4375,	// (0x00028513) aid_list_gen

0xedc7,	// (0x00032f65) aid_scroll

0xedd0,	// (0x00032f6e) aid_size_touch_scroll_bar

0x969e,	// (0x0002d83c) aid_list_double

0xedd9,	// (0x00032f77) aid_list_single

0xedd9,	// (0x00032f77) aid_list_single_lg

0xede2,	// (0x00032f80) aid_list_z_g_a_sm

0xedea,	// (0x00032f88) aid_list_z_g_d

0xedf2,	// (0x00032f90) aid_txt_z_prm

0xa21a,	// (0x0002e3b8) aid_txt_z_prm_cp01

0xa228,	// (0x0002e3c6) aid_txt_z_sec

0xa236,	// (0x0002e3d4) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa236,	// (0x0002e3d4) main_cntbar_detail_cont_pane_g1

0xa24a,	// (0x0002e3e8) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa24a,	// (0x0002e3e8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x00033f26) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x00033f26) main_cntbar_detail_cont_pane_g

0xee00,	// (0x00032f9e) main_cntbar_detail_cont_pane_t1

0xee0e,	// (0x00032fac) main_cntbar_detail_cont_pane_t2

0xee1c,	// (0x00032fba) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x00033f2b) main_cntbar_detail_cont_pane_t

0xa25a,	// (0x0002e3f8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa25a,	// (0x0002e3f8) cell_cntbar_detail_list_shct_pane

0xee2a,	// (0x00032fc8) cntbar_detail_list_shct_pane_g1

0xee33,	// (0x00032fd1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x00033f32) cntbar_detail_list_shct_pane_g

0xa26e,	// (0x0002e40c) cntbar_detail_list_event_pane_g1_ParamLimits

0xa26e,	// (0x0002e40c) cntbar_detail_list_event_pane_g1

0xa27a,	// (0x0002e418) cntbar_detail_list_event_pane_g2_ParamLimits

0xa27a,	// (0x0002e418) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x00033f37) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x00033f37) cntbar_detail_list_event_pane_g

0xa2e6,	// (0x0002e484) cntbar_detail_list_event_pane_t1_ParamLimits

0xa2e6,	// (0x0002e484) cntbar_detail_list_event_pane_t1

0xa2fb,	// (0x0002e499) cntbar_detail_list_event_pane_t2_ParamLimits

0xa2fb,	// (0x0002e499) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x00033f44) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x00033f44) cntbar_detail_list_event_pane_t

0x3c4d,	// (0x00027deb) cell_cntbar_detail_list_shct_pane_g1

0x594d,	// (0x00029aeb) navi_pane_mv_g3

0x3154,	// (0x000272f2) main_cntbar_detail_pane_ParamLimits

0x2a1d,	// (0x00026bbb) main_notif_wgt_pane

0xcda8,	// (0x00030f46) aid_tch_main_mp4_pane_g4

0xcfda,	// (0x00031178) popup_slider_window_cp02

0xeb38,	// (0x00032cd6) list_recal_day_event_pane

0xa17e,	// (0x0002e31c) cntbar_detail_btn_pane_ParamLimits

0xa17e,	// (0x0002e31c) cntbar_detail_btn_pane

0xa194,	// (0x0002e332) cntbar_detail_btn_pane_cp01_ParamLimits

0xa194,	// (0x0002e332) cntbar_detail_btn_pane_cp01

0xa1ba,	// (0x0002e358) cntbar_detail_list_shct_pane_ParamLimits

0xa1ca,	// (0x0002e368) cntbar_detail_pane_g1_ParamLimits

0xa1ca,	// (0x0002e368) cntbar_detail_pane_g1

0xa1da,	// (0x0002e378) cntbar_detail_pane_t1_ParamLimits

0xa1da,	// (0x0002e378) cntbar_detail_pane_t1

0xa286,	// (0x0002e424) cntbar_detail_list_event_pane_g3_ParamLimits

0xa286,	// (0x0002e424) cntbar_detail_list_event_pane_g3

0xa29e,	// (0x0002e43c) cntbar_detail_list_event_pane_g4_ParamLimits

0xa29e,	// (0x0002e43c) cntbar_detail_list_event_pane_g4

0xa2b6,	// (0x0002e454) cntbar_detail_list_event_pane_g5_ParamLimits

0xa2b6,	// (0x0002e454) cntbar_detail_list_event_pane_g5

0xa2ce,	// (0x0002e46c) cntbar_detail_list_event_pane_g6_ParamLimits

0xa2ce,	// (0x0002e46c) cntbar_detail_list_event_pane_g6

0xa310,	// (0x0002e4ae) cntbar_detail_list_event_pane_t3_ParamLimits

0xa310,	// (0x0002e4ae) cntbar_detail_list_event_pane_t3

0xa322,	// (0x0002e4c0) popup_notif_wgt_window_ParamLimits

0xa322,	// (0x0002e4c0) popup_notif_wgt_window

0xa33b,	// (0x0002e4d9) popup_submenu_window_cp01_ParamLimits

0xa33b,	// (0x0002e4d9) popup_submenu_window_cp01

0x3a60,	// (0x00027bfe) bg_popup_window_pane_cp10

0xee3c,	// (0x00032fda) listscroll_notif_wgt_pane

0xee4e,	// (0x00032fec) list_notif_wgt_window

0xee57,	// (0x00032ff5) scroll_pane_cp033

0xa351,	// (0x0002e4ef) list_notif_wgt_row_pane_ParamLimits

0xa351,	// (0x0002e4ef) list_notif_wgt_row_pane

0xee60,	// (0x00032ffe) aid_size_list_notif_wgt_del

0xee6d,	// (0x0003300b) list_notif_wgt_row_pane_g1

0xee79,	// (0x00033017) list_notif_wgt_row_pane_g2

0xee88,	// (0x00033026) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x00033f4b) list_notif_wgt_row_pane_g

0xee95,	// (0x00033033) list_notif_wgt_row_pane_t1

0xeeab,	// (0x00033049) list_notif_wgt_row_pane_t2

0xeebd,	// (0x0003305b) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x00033f52) list_notif_wgt_row_pane_t

0xd53d,	// (0x000316db) list_recal_day_event_pane_g1

0xeecf,	// (0x0003306d) list_recal_day_event_pane_t1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp045

0xeede,	// (0x0003307c) cntbar_detail_btn_pane_t1

0x5ad6,	// (0x00029c74) main_callh_pane_ParamLimits

0x5ad6,	// (0x00029c74) main_callh_pane

0x2a1d,	// (0x00026bbb) main_coverflow0_pane

0x2a1d,	// (0x00026bbb) main_wgtman_pane

0x950e,	// (0x0002d6ac) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x950e,	// (0x0002d6ac) main_fs_bigclock_unlock_btn_pane

0x9b97,	// (0x0002dd35) bg_button_pane_cp16

0x9ba7,	// (0x0002dd45) cell_tport_appsw_pane_g3

0xa361,	// (0x0002e4ff) cf0_flow_pane_ParamLimits

0xa361,	// (0x0002e4ff) cf0_flow_pane

0xeeec,	// (0x0003308a) listscroll_cf0_pane

0xeef7,	// (0x00033095) main_cf0_pane_g1

0xa376,	// (0x0002e514) main_cf0_pane_t1_ParamLimits

0xa376,	// (0x0002e514) main_cf0_pane_t1

0xa38d,	// (0x0002e52b) main_cf0_pane_t2_ParamLimits

0xa38d,	// (0x0002e52b) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x00033f5e) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x00033f5e) main_cf0_pane_t

0xef09,	// (0x000330a7) scroll_pane_cp11

0xa3a4,	// (0x0002e542) cf0_flow_pane_g1

0xa3ac,	// (0x0002e54a) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x00033f63) cf0_flow_pane_g

0xa3b4,	// (0x0002e552) cf0_flow_pane_t1

0x2a1d,	// (0x00026bbb) main_call6_pane

0x2a1d,	// (0x00026bbb) main_calllock_pane

0x297a,	// (0x00026b18) call6_btn_grp_pane_ParamLimits

0x297a,	// (0x00026b18) call6_btn_grp_pane

0x2994,	// (0x00026b32) call6_pane_g1_ParamLimits

0x2994,	// (0x00026b32) call6_pane_g1

0x29aa,	// (0x00026b48) popup_call6_1st_window_ParamLimits

0x29aa,	// (0x00026b48) popup_call6_1st_window

0x29bb,	// (0x00026b59) popup_call6_2nd_window_ParamLimits

0x29bb,	// (0x00026b59) popup_call6_2nd_window

0x29cc,	// (0x00026b6a) cell_call6_btn_pane_ParamLimits

0x29cc,	// (0x00026b6a) cell_call6_btn_pane

0x3a60,	// (0x00027bfe) bg_popup_call2_in_pane_cp03

0xef14,	// (0x000330b2) popup_call6_1st_window_g1

0xef1c,	// (0x000330ba) popup_call6_1st_window_g2

0xef24,	// (0x000330c2) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x00033f68) popup_call6_1st_window_g

0xef2c,	// (0x000330ca) popup_call6_1st_window_t1

0xef3b,	// (0x000330d9) popup_call6_1st_window_t2

0xef49,	// (0x000330e7) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x00033f6f) popup_call6_1st_window_t

0x3a60,	// (0x00027bfe) bg_popup_call2_in_pane_cp04

0xef57,	// (0x000330f5) popup_call6_2nd_window_g1

0xef5f,	// (0x000330fd) popup_call6_2nd_window_g2

0xef67,	// (0x00033105) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x00033f76) popup_call6_2nd_window_g

0xef6f,	// (0x0003310d) popup_call6_2nd_window_t1

0xafb8,	// (0x0002f156) bg_button_pane_cp15

0xef7e,	// (0x0003311c) cell_call6_btn_pane_g1

0xef87,	// (0x00033125) cell_call6_btn_pane_t1

0xa3c2,	// (0x0002e560) listscroll_wgtman_pane_ParamLimits

0xa3c2,	// (0x0002e560) listscroll_wgtman_pane

0xa3e3,	// (0x0002e581) wgtman_btn_pane_ParamLimits

0xa3e3,	// (0x0002e581) wgtman_btn_pane

0x5588,	// (0x00029726) aid_scroll_copy1

0xef96,	// (0x00033134) list_wgtman_pane

0xa426,	// (0x0002e5c4) wgtman_btn_pane_g1_ParamLimits

0xa426,	// (0x0002e5c4) wgtman_btn_pane_g1

0xa452,	// (0x0002e5f0) wgtman_btn_pane_t1_ParamLimits

0xa452,	// (0x0002e5f0) wgtman_btn_pane_t1

0xefa0,	// (0x0003313e) wgtman_btn_pane_t2_ParamLimits

0xefa0,	// (0x0003313e) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x00033f7d) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x00033f7d) wgtman_btn_pane_t

0xa48f,	// (0x0002e62d) listrow_wgtman_pane_ParamLimits

0xa48f,	// (0x0002e62d) listrow_wgtman_pane

0xa4a1,	// (0x0002e63f) listrow_wgtman_pane_g1

0xa4ae,	// (0x0002e64c) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x00033f82) listrow_wgtman_pane_g

0xa4cc,	// (0x0002e66a) listrow_wgtman_pane_t1

0xa4e4,	// (0x0002e682) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x00033f87) listrow_wgtman_pane_t

0xa50a,	// (0x0002e6a8) wait_bar_pane_cp09

0xefb7,	// (0x00033155) main_calllock_btn_pane

0xefc1,	// (0x0003315f) main_calllock_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp17

0xefc9,	// (0x00033167) main_calllock_btn_pane_g1

0xefd2,	// (0x00033170) main_calllock_btn_pane_t1

0x2a1d,	// (0x00026bbb) main_dialer3_pane

0x2a1d,	// (0x00026bbb) main_fmrd2_pane

0x3c4d,	// (0x00027deb) main_fs_bigclock_unlock_btn_pane_g1

0xa524,	// (0x0002e6c2) main_fs_bigclock_unlock_btn_pane_t1

0xa532,	// (0x0002e6d0) area_fmrd2_info_pane_ParamLimits

0xa532,	// (0x0002e6d0) area_fmrd2_info_pane

0xa543,	// (0x0002e6e1) area_fmrd2_visual_pane_ParamLimits

0xa543,	// (0x0002e6e1) area_fmrd2_visual_pane

0xa551,	// (0x0002e6ef) fmrd2_indi_pane_ParamLimits

0xa551,	// (0x0002e6ef) fmrd2_indi_pane

0xa55e,	// (0x0002e6fc) area_fmrd2_visual_pane_g1

0xa566,	// (0x0002e704) area_fmrd2_visual_pane_t1

0xa576,	// (0x0002e714) area_fmrd2_visual_pane_t2

0xa586,	// (0x0002e724) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x00033f91) area_fmrd2_visual_pane_t

0xa596,	// (0x0002e734) area_fmrd2_info_pane_g1

0xa59e,	// (0x0002e73c) area_fmrd2_info_pane_t1

0xa5ae,	// (0x0002e74c) area_fmrd2_info_pane_t2

0xa5be,	// (0x0002e75c) area_fmrd2_info_pane_t3

0xa5ce,	// (0x0002e76c) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x00033f98) area_fmrd2_info_pane_t

0xa5dc,	// (0x0002e77a) fmrd2_indi_pane_t1

0xa5ec,	// (0x0002e78a) fmrd2_indi_pane_t2

0xa5fc,	// (0x0002e79a) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x00033fa1) fmrd2_indi_pane_t

0xe1ba,	// (0x00032358) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1ba,	// (0x00032358) list_single_fs_bigclock_indicator_pane_g5

0xe26b,	// (0x00032409) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe26b,	// (0x00032409) list_single_fs_bigclock_indicator_pane_t5

0x9d32,	// (0x0002ded0) aid_cell_bcale_month_pane_ParamLimits

0x9d32,	// (0x0002ded0) aid_cell_bcale_month_pane

0x9d50,	// (0x0002deee) bcale_month_pane_ParamLimits

0x9d50,	// (0x0002deee) bcale_month_pane

0x9d74,	// (0x0002df12) bcale_preview_pane_ParamLimits

0x9d74,	// (0x0002df12) bcale_preview_pane

0xed3f,	// (0x00032edd) list_single_fs_bigclock_pane_t1_ParamLimits

0xed5e,	// (0x00032efc) list_single_fs_bigclock_pane_t2_ParamLimits

0xed5e,	// (0x00032efc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x00033f1c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x00033f1c) list_single_fs_bigclock_pane_t

0xa51c,	// (0x0002e6ba) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x00033f8c) main_fs_bigclock_unlock_btn_pane_g

0xa60c,	// (0x0002e7aa) aid_dia3_key_size_ParamLimits

0xa60c,	// (0x0002e7aa) aid_dia3_key_size

0xa61b,	// (0x0002e7b9) aid_dia3_listrow_size_ParamLimits

0xa61b,	// (0x0002e7b9) aid_dia3_listrow_size

0xa630,	// (0x0002e7ce) dia3_keypad_fun_pane_ParamLimits

0xa630,	// (0x0002e7ce) dia3_keypad_fun_pane

0xa64c,	// (0x0002e7ea) dia3_keypad_num_pane_ParamLimits

0xa64c,	// (0x0002e7ea) dia3_keypad_num_pane

0xa667,	// (0x0002e805) dia3_listscroll_pane_ParamLimits

0xa667,	// (0x0002e805) dia3_listscroll_pane

0xa67a,	// (0x0002e818) dia3_numentry_pane_ParamLimits

0xa67a,	// (0x0002e818) dia3_numentry_pane

0xefe1,	// (0x0003317f) dia3_list_pane

0xefec,	// (0x0003318a) scroll_pane_cp12

0x2a1d,	// (0x00026bbb) bg_dia3_numentry_pane

0xa692,	// (0x0002e830) dia3_numentry_pane_t1

0xa6a1,	// (0x0002e83f) cell_dia3_key_num_pane

0xa6a9,	// (0x0002e847) cell_dia3_key0_fun_pane_ParamLimits

0xa6a9,	// (0x0002e847) cell_dia3_key0_fun_pane

0xa6bd,	// (0x0002e85b) cell_dia3_key1_fun_pane_ParamLimits

0xa6bd,	// (0x0002e85b) cell_dia3_key1_fun_pane

0xa6d5,	// (0x0002e873) dia3_listrow_pane

0xdf0d,	// (0x000320ab) bg_dia3_numentry_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp21

0xeff7,	// (0x00033195) cell_dia3_key_num_pane_t1

0xf005,	// (0x000331a3) cell_dia3_key_num_pane_t2

0xf014,	// (0x000331b2) cell_dia3_key_num_pane_t3

0xf023,	// (0x000331c1) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x00033fa8) cell_dia3_key_num_pane_t

0x2a1d,	// (0x00026bbb) bg_button_pane_cp19

0xa6e7,	// (0x0002e885) cell_dia3_key0_fun_pane_g1

0x2a1d,	// (0x00026bbb) bg_button_pane_cp20

0xa6ef,	// (0x0002e88d) cell_dia3_key1_fun_pane_g1

0xa6f7,	// (0x0002e895) area_left_week_number_pane

0xa703,	// (0x0002e8a1) area_top_day_name_pane

0xa716,	// (0x0002e8b4) frame_month_view_pane

0xf032,	// (0x000331d0) grid_month_view_pane

0xa729,	// (0x0002e8c7) cell_top_day_name_pane_ParamLimits

0xa729,	// (0x0002e8c7) cell_top_day_name_pane

0xa756,	// (0x0002e8f4) cell_area_left_week_number_pane_ParamLimits

0xa756,	// (0x0002e8f4) cell_area_left_week_number_pane

0xa76a,	// (0x0002e908) cell_month_view_pane_ParamLimits

0xa76a,	// (0x0002e908) cell_month_view_pane

0xf040,	// (0x000331de) frm_month_g1

0xa797,	// (0x0002e935) frm_month_g2

0xa7aa,	// (0x0002e948) frm_month_g3

0xa7bd,	// (0x0002e95b) frm_month_g4

0xa7d0,	// (0x0002e96e) frm_month_g5

0xa7e3,	// (0x0002e981) frm_month_g6

0xa7f6,	// (0x0002e994) frm_month_g7

0xf04d,	// (0x000331eb) frm_month_g8

0xa809,	// (0x0002e9a7) frm_month_g9

0xa819,	// (0x0002e9b7) frm_month_g10

0xa829,	// (0x0002e9c7) frm_month_g11

0xa839,	// (0x0002e9d7) frm_month_g12

0xa84b,	// (0x0002e9e9) frm_month_g13

0xa85d,	// (0x0002e9fb) frm_month_g14

0xa871,	// (0x0002ea0f) frm_month_g15

0xa885,	// (0x0002ea23) frm_month_g16

0x000f,

0xfe13,	// (0x00033fb1) frm_month_g

0xf05a,	// (0x000331f8) cell_top_day_name_pane_t1

0xa899,	// (0x0002ea37) cell_area_left_week_number_pane_g1

0xa8a5,	// (0x0002ea43) cell_area_left_week_number_pane_t1

0x31bb,	// (0x00027359) cell_month_view_pane_g1

0xa8b8,	// (0x0002ea56) cell_month_view_pane_t1

0x2a1d,	// (0x00026bbb) main_fps_pane

0xe4cc,	// (0x0003266a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4cc,	// (0x0003266a) cmail_ddmenu_btn02_pane_cp1

0xe4e8,	// (0x00032686) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4e8,	// (0x00032686) cmail_ddmenu_btn02_pane_cp2

0xa032,	// (0x0002e1d0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa032,	// (0x0002e1d0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x00033ecf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x00033ecf) cmail_ddmenu_btn02_pane_g

0xa050,	// (0x0002e1ee) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa050,	// (0x0002e1ee) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x00033ed4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x00033ed4) cmail_ddmenu_btn02_pane_t

0xa8cb,	// (0x0002ea69) fps_text_pane_ParamLimits

0xa8cb,	// (0x0002ea69) fps_text_pane

0xa8e2,	// (0x0002ea80) main_fps_pane_g1_ParamLimits

0xa8e2,	// (0x0002ea80) main_fps_pane_g1

0xa8fc,	// (0x0002ea9a) wait_bar_pane_cp010_ParamLimits

0xa8fc,	// (0x0002ea9a) wait_bar_pane_cp010

0xa90d,	// (0x0002eaab) fps_text_pane_t1_ParamLimits

0xa90d,	// (0x0002eaab) fps_text_pane_t1

0x01ff,	// (0x0002439d) cam4_image_uncrop_pane_g1

0x0208,	// (0x000243a6) cam4_image_uncrop_pane_g2

0x7c3b,	// (0x0002bdd9) cam4_image_uncrop_pane_g3

0x7c44,	// (0x0002bde2) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x00033a13) cam4_image_uncrop_pane_g

0xa6d5,	// (0x0002e873) dia3_listrow_pane_ParamLimits

0x2a1d,	// (0x00026bbb) main_phob2_pane

0x9b68,	// (0x0002dd06) cell_tport_appsw_pane_cp02_ParamLimits

0x9b68,	// (0x0002dd06) cell_tport_appsw_pane_cp02

0x9b7c,	// (0x0002dd1a) cell_tport_appsw_pane_cp03_ParamLimits

0x9b7c,	// (0x0002dd1a) cell_tport_appsw_pane_cp03

0x2a1d,	// (0x00026bbb) phob2_contact_card_pane

0x2a1d,	// (0x00026bbb) phob2_listscroll_pane

0xf06d,	// (0x0003320b) phob2_list_pane

0xf075,	// (0x00033213) scroll_pane_cp034

0xa925,	// (0x0002eac3) phob2_cc_data_pane_ParamLimits

0xa925,	// (0x0002eac3) phob2_cc_data_pane

0xa944,	// (0x0002eae2) phob2_cc_listscroll_pane_ParamLimits

0xa944,	// (0x0002eae2) phob2_cc_listscroll_pane

0xa48f,	// (0x0002e62d) list_double_large_graphic_phob2_pane_ParamLimits

0xa48f,	// (0x0002e62d) list_double_large_graphic_phob2_pane

0xa962,	// (0x0002eb00) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa962,	// (0x0002eb00) list_double_large_graphic_phob2_pane_g1

0xa96f,	// (0x0002eb0d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa96f,	// (0x0002eb0d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x00033fd2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x00033fd2) list_double_large_graphic_phob2_pane_g

0xa995,	// (0x0002eb33) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa995,	// (0x0002eb33) list_double_large_graphic_phob2_pane_t1

0xa9aa,	// (0x0002eb48) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa9aa,	// (0x0002eb48) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x00033fdb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x00033fdb) list_double_large_graphic_phob2_pane_t

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp024

0xf07d,	// (0x0003321b) phob2_cc_button_pane

0xa9bf,	// (0x0002eb5d) phob2_cc_data_pane_g1_ParamLimits

0xa9bf,	// (0x0002eb5d) phob2_cc_data_pane_g1

0xa9d6,	// (0x0002eb74) phob2_cc_data_pane_g2_ParamLimits

0xa9d6,	// (0x0002eb74) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x00033fe0) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x00033fe0) phob2_cc_data_pane_g

0xa9e8,	// (0x0002eb86) phob2_cc_data_pane_t1_ParamLimits

0xa9e8,	// (0x0002eb86) phob2_cc_data_pane_t1

0xaa00,	// (0x0002eb9e) phob2_cc_data_pane_t2_ParamLimits

0xaa00,	// (0x0002eb9e) phob2_cc_data_pane_t2

0xaa18,	// (0x0002ebb6) phob2_cc_data_pane_t3_ParamLimits

0xaa18,	// (0x0002ebb6) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x00033fe5) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x00033fe5) phob2_cc_data_pane_t

0x0051,	// (0x000241ef) phob2_cc_list_pane_ParamLimits

0x0051,	// (0x000241ef) phob2_cc_list_pane

0xd5d4,	// (0x00031772) scroll_pane_cp035_ParamLimits

0xd5d4,	// (0x00031772) scroll_pane_cp035

0x3154,	// (0x000272f2) bg_button_pane_cp033

0x005d,	// (0x000241fb) phob2_cc_button_pane_g1

0x0069,	// (0x00024207) phob2_cc_button_pane_t1

0x007e,	// (0x0002421c) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x00033fec) phob2_cc_button_pane_t

0xaa30,	// (0x0002ebce) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa30,	// (0x0002ebce) list_double_large_graphic_phob2_cc_pane

0xaa60,	// (0x0002ebfe) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa60,	// (0x0002ebfe) list_double_large_graphic_phob2_cc_pane_g1

0xaa6c,	// (0x0002ec0a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaa6c,	// (0x0002ec0a) list_double_large_graphic_phob2_cc_pane_g2

0xaa78,	// (0x0002ec16) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaa78,	// (0x0002ec16) list_double_large_graphic_phob2_cc_pane_g3

0xaa84,	// (0x0002ec22) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaa84,	// (0x0002ec22) list_double_large_graphic_phob2_cc_pane_g4

0xaa90,	// (0x0002ec2e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaa90,	// (0x0002ec2e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x00033ff1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x00033ff1) list_double_large_graphic_phob2_cc_pane_g

0xaa9c,	// (0x0002ec3a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaa9c,	// (0x0002ec3a) list_double_large_graphic_phob2_cc_pane_t1

0xaac5,	// (0x0002ec63) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaac5,	// (0x0002ec63) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x00033ffc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x00033ffc) list_double_large_graphic_phob2_cc_pane_t

0x019f,	// (0x0002433d) list_highlight_pane_cp025_ParamLimits

0x019f,	// (0x0002433d) list_highlight_pane_cp025

0x3154,	// (0x000272f2) bg_button_pane_cp033_ParamLimits

0x005d,	// (0x000241fb) phob2_cc_button_pane_g1_ParamLimits

0x0069,	// (0x00024207) phob2_cc_button_pane_t1_ParamLimits

0x007e,	// (0x0002421c) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x00033fec) phob2_cc_button_pane_t_ParamLimits

0x2a60,	// (0x00026bfe) popup_wgtman_window

0xd368,	// (0x00031506) scroll_pane_cp038

0xa408,	// (0x0002e5a6) wgtman_btn_pane_cp_01_ParamLimits

0xa408,	// (0x0002e5a6) wgtman_btn_pane_cp_01

0x01ad,	// (0x0002434b) wgtman_content_pane

0x01b6,	// (0x00024354) wgtman_heading_pane

0x2a1d,	// (0x00026bbb) bg_heading_pane_cp02

0x01bf,	// (0x0002435d) wgtman_heading_pane_g1

0x01c7,	// (0x00024365) wgtman_heading_pane_t1

0x01d5,	// (0x00024373) scroll_pane_cp036

0x01dd,	// (0x0002437b) wgtman_list_pane

0x01e5,	// (0x00024383) wgtman_list_pane_t1_ParamLimits

0x01e5,	// (0x00024383) wgtman_list_pane_t1

0xd0fd,	// (0x0003129b) cam4_grid_pane

0x843b,	// (0x0002c5d9) bg_button_pane_cp015_ParamLimits

0x844b,	// (0x0002c5e9) bg_button_pane_cp016_ParamLimits

0x845e,	// (0x0002c5fc) bg_button_pane_cp017_ParamLimits

0x84b4,	// (0x0002c652) popup_vitu2_query_window_g3_ParamLimits

0x84b4,	// (0x0002c652) popup_vitu2_query_window_g3

0x8571,	// (0x0002c70f) popup_vitu2_query_window_t6_ParamLimits

0x8571,	// (0x0002c70f) popup_vitu2_query_window_t6

0x859c,	// (0x0002c73a) popup_vitu2_query_window_t7_ParamLimits

0x859c,	// (0x0002c73a) popup_vitu2_query_window_t7

0x01ff,	// (0x0002439d) cam4_grid_pane_g1

0x0208,	// (0x000243a6) cam4_grid_pane_g2

0x0211,	// (0x000243af) cam4_grid_pane_g3

0x021a,	// (0x000243b8) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x00034001) cam4_grid_pane_g

0x3d6f,	// (0x00027f0d) aid_placing_vt_slider_lsc_ParamLimits

0x40ca,	// (0x00028268) vidtel_button_pane_ParamLimits

0x40ca,	// (0x00028268) vidtel_button_pane

0x2a1d,	// (0x00026bbb) bg_button_pane_cp034

0x0225,	// (0x000243c3) vidtel_button_pane_g1

0x022d,	// (0x000243cb) vidtel_button_pane_t1

0xd4df,	// (0x0003167d) aid_size_vtel_slider_touch

0xd5d4,	// (0x00031772) scroll_pane_cp039

0x9202,	// (0x0002d3a0) ncim_query_button_pane_cp01_ParamLimits

0x9221,	// (0x0002d3bf) ncimui_query_pane_g1_ParamLimits

0x3154,	// (0x000272f2) input_focus_pane_cp012_ParamLimits

0xdf4b,	// (0x000320e9) ncim_query_entry_pane_t1_ParamLimits

0xd5d4,	// (0x00031772) scroll_pane_cp039_ParamLimits

0x5838,	// (0x000299d6) navi_pane_bcale_mc_g1

0x5840,	// (0x000299de) navi_pane_bcale_mc_t1

0xe51c,	// (0x000326ba) main_sp_fs_email_pane_g1

0xe528,	// (0x000326c6) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x00033e04) main_sp_fs_email_pane_g

0xe9c9,	// (0x00032b67) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9c9,	// (0x00032b67) list_single_cale_mrui_row_pane_g3

0xa070,	// (0x0002e20e) list_single_recal_day_pane_g5_event_pane

0xeba9,	// (0x00032d47) list_single_recal_day_pane_g7

0x0243,	// (0x000243e1) list_recal_day_event_pane_cp01

0x024c,	// (0x000243ea) list_recal_vselct_arw_lo_pane_cp01

0x0254,	// (0x000243f2) list_recal_vselct_arw_up_pane_cp01

0x025c,	// (0x000243fa) list_recal_vselct_pane_cp01

0xd53d,	// (0x000316db) list_recal_day_event_pane_cp01_g1

0x0266,	// (0x00024404) list_recal_day_event_pane_cp01_t1

0xebb1,	// (0x00032d4f) list_single_recal_day_pane_t1_ParamLimits

0xebc3,	// (0x00032d61) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x00033ee4) list_single_recal_day_pane_t_ParamLimits

0x3132,	// (0x000272d0) bg_notes_pane_ParamLimits

0x32c7,	// (0x00027465) list_notes_pane_ParamLimits

0x32d5,	// (0x00027473) scroll_pane_cp06_ParamLimits

0x32fd,	// (0x0002749b) main_notes_pane_ParamLimits

0x3154,	// (0x000272f2) main_welc_pane

0xab0a,	// (0x0002eca8) main_welc_body_pane_ParamLimits

0xab0a,	// (0x0002eca8) main_welc_body_pane

0xab28,	// (0x0002ecc6) main_welc_opti_pane_ParamLimits

0xab28,	// (0x0002ecc6) main_welc_opti_pane

0xab9c,	// (0x0002ed3a) main_welc_pane_t1_ParamLimits

0xab9c,	// (0x0002ed3a) main_welc_pane_t1

0xad03,	// (0x0002eea1) main_welc_body_row_pane_ParamLimits

0xad03,	// (0x0002eea1) main_welc_body_row_pane

0x31ad,	// (0x0002734b) main_welc_opti_row_pane_ParamLimits

0x31ad,	// (0x0002734b) main_welc_opti_row_pane

0x043b,	// (0x000245d9) main_welc_opti_row_pane_g1

0xad17,	// (0x0002eeb5) main_welc_opti_row_pane_t1

0x0452,	// (0x000245f0) main_welc_body_row_pane_t1

0xee46,	// (0x00032fe4) popup_notif_wgt_heading_pane

0xee60,	// (0x00032ffe) aid_size_list_notif_wgt_del_ParamLimits

0xee6d,	// (0x0003300b) list_notif_wgt_row_pane_g1_ParamLimits

0xee79,	// (0x00033017) list_notif_wgt_row_pane_g2_ParamLimits

0xee88,	// (0x00033026) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x00033f4b) list_notif_wgt_row_pane_g_ParamLimits

0xee95,	// (0x00033033) list_notif_wgt_row_pane_t1_ParamLimits

0xeeab,	// (0x00033049) list_notif_wgt_row_pane_t2_ParamLimits

0xeebd,	// (0x0003305b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x00033f52) list_notif_wgt_row_pane_t_ParamLimits

0xa4a1,	// (0x0002e63f) listrow_wgtman_pane_g1_ParamLimits

0xa4ae,	// (0x0002e64c) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x00033f82) listrow_wgtman_pane_g_ParamLimits

0xa4cc,	// (0x0002e66a) listrow_wgtman_pane_t1_ParamLimits

0xa4e4,	// (0x0002e682) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x00033f87) listrow_wgtman_pane_t_ParamLimits

0xa50a,	// (0x0002e6a8) wait_bar_pane_cp09_ParamLimits

0x2a1d,	// (0x00026bbb) bg_popup_heading_pane_cp02

0x0461,	// (0x000245ff) popup_notif_wgt_heading_pane_g1

0x0469,	// (0x00024607) popup_notif_wgt_heading_pane_t1

0x2a1d,	// (0x00026bbb) main_vids_pane

0x2a1d,	// (0x00026bbb) vids_listscroll_pane

0xad26,	// (0x0002eec4) scroll_pane_cp040

0x2a1d,	// (0x00026bbb) vids_list_pane

0xad31,	// (0x0002eecf) vids_list_double_pane_ParamLimits

0xad31,	// (0x0002eecf) vids_list_double_pane

0xad42,	// (0x0002eee0) vids_list_double_pane_g1

0xad4b,	// (0x0002eee9) vids_list_double_pane_t1

0xad5b,	// (0x0002eef9) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x00034020) vids_list_double_pane_t

0xafaa,	// (0x0002f148) main_ncimui_pane_ParamLimits

0x9038,	// (0x0002d1d6) main_ncimui_pane_g1_ParamLimits

0x9044,	// (0x0002d1e2) main_ncimui_pane_g2_ParamLimits

0x9044,	// (0x0002d1e2) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x00033d05) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x00033d05) main_ncimui_pane_g

0xab43,	// (0x0002ece1) main_welc_pane_g1_ParamLimits

0xab43,	// (0x0002ece1) main_welc_pane_g1

0xab58,	// (0x0002ecf6) main_welc_pane_g2_ParamLimits

0xab58,	// (0x0002ecf6) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0003400a) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0003400a) main_welc_pane_g

0x3132,	// (0x000272d0) listscroll_mce_pane_ParamLimits

0x59cf,	// (0x00029b6d) wait_bar_pane_cp10

0xc075,	// (0x00030213) main_cale_day_pane_ParamLimits

0xc075,	// (0x00030213) main_cale_week_pane_ParamLimits

0x3132,	// (0x000272d0) main_messa_pane_ParamLimits

0x7689,	// (0x0002b827) main_clock2_btn_pane_ParamLimits

0x7689,	// (0x0002b827) main_clock2_btn_pane

0xc94c,	// (0x00030aea) main_clock2_btn_pane_cp01_ParamLimits

0xc94c,	// (0x00030aea) main_clock2_btn_pane_cp01

0xe955,	// (0x00032af3) list_cale_mrui_pane_ParamLimits

0xef01,	// (0x0003309f) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x00033f59) main_cf0_pane_g

0xa6f7,	// (0x0002e895) area_left_week_number_pane_ParamLimits

0xa703,	// (0x0002e8a1) area_top_day_name_pane_ParamLimits

0xa716,	// (0x0002e8b4) frame_month_view_pane_ParamLimits

0xf032,	// (0x000331d0) grid_month_view_pane_ParamLimits

0xf040,	// (0x000331de) frm_month_g1_ParamLimits

0xa797,	// (0x0002e935) frm_month_g2_ParamLimits

0xa7aa,	// (0x0002e948) frm_month_g3_ParamLimits

0xa7bd,	// (0x0002e95b) frm_month_g4_ParamLimits

0xa7d0,	// (0x0002e96e) frm_month_g5_ParamLimits

0xa7e3,	// (0x0002e981) frm_month_g6_ParamLimits

0xa7f6,	// (0x0002e994) frm_month_g7_ParamLimits

0xf04d,	// (0x000331eb) frm_month_g8_ParamLimits

0xa809,	// (0x0002e9a7) frm_month_g9_ParamLimits

0xa819,	// (0x0002e9b7) frm_month_g10_ParamLimits

0xa829,	// (0x0002e9c7) frm_month_g11_ParamLimits

0xa839,	// (0x0002e9d7) frm_month_g12_ParamLimits

0xa84b,	// (0x0002e9e9) frm_month_g13_ParamLimits

0xa85d,	// (0x0002e9fb) frm_month_g14_ParamLimits

0xa871,	// (0x0002ea0f) frm_month_g15_ParamLimits

0xa885,	// (0x0002ea23) frm_month_g16_ParamLimits

0xfe13,	// (0x00033fb1) frm_month_g_ParamLimits

0xf05a,	// (0x000331f8) cell_top_day_name_pane_t1_ParamLimits

0xa899,	// (0x0002ea37) cell_area_left_week_number_pane_g1_ParamLimits

0xa8a5,	// (0x0002ea43) cell_area_left_week_number_pane_t1_ParamLimits

0x31bb,	// (0x00027359) cell_month_view_pane_g1_ParamLimits

0xa8b8,	// (0x0002ea56) cell_month_view_pane_t1_ParamLimits

0x312a,	// (0x000272c8) main_clock2_btn_pane_g1

0x04c0,	// (0x0002465e) main_clock2_btn_pane_t1

0x3154,	// (0x000272f2) listscroll_cmail_pane_ParamLimits

0xe51c,	// (0x000326ba) main_sp_fs_email_pane_g1_ParamLimits

0xe528,	// (0x000326c6) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x00033e04) main_sp_fs_email_pane_g_ParamLimits

0xeb19,	// (0x00032cb7) list_recal_day_pane_ParamLimits

0xeb2a,	// (0x00032cc8) mian_recal_day_pane_t1

0x9a0b,	// (0x0002dba9) list_single_dyc_row_text_pane_t4_ParamLimits

0x9a0b,	// (0x0002dba9) list_single_dyc_row_text_pane_t4

0x9a54,	// (0x0002dbf2) list_single_dyc_row_text_pane_t5_ParamLimits

0x9a54,	// (0x0002dbf2) list_single_dyc_row_text_pane_t5

0xe5f0,	// (0x0003278e) list_single_dyc_row_text_pane_t6_ParamLimits

0xe5f0,	// (0x0003278e) list_single_dyc_row_text_pane_t6

0x500e,	// (0x000291ac) aid_mgn_list_cale_time_pane

0xafaa,	// (0x0002f148) main_gallery2_pane_ParamLimits

0xc962,	// (0x00030b00) main_clock2_pane_cp01_t1

0xc972,	// (0x00030b10) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x000338ea) main_clock2_pane_cp01_t

0x372f,	// (0x000278cd) cale_week_scroll_pane_g16_ParamLimits

0x372f,	// (0x000278cd) cale_week_scroll_pane_g16

0x3a60,	// (0x00027bfe) vorec_slider_pane

0x022d,	// (0x000243cb) vidtel_button_pane_t1_ParamLimits

0xa0d6,	// (0x0002e274) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa0d6,	// (0x0002e274) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa0e7,	// (0x0002e285) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa0e7,	// (0x0002e285) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x00033f07) main_fs_bigclock_clock_pane_g_ParamLimits

0xa0fa,	// (0x0002e298) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa110,	// (0x0002e2ae) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x00033f10) main_fs_bigclock_clock_pane_t_ParamLimits

0x6f5e,	// (0x0002b0fc) main_mup3_lyrics_pane_ParamLimits

0x6f5e,	// (0x0002b0fc) main_mup3_lyrics_pane

0xad6b,	// (0x0002ef09) main_mup3_lyrics_pane_t1_ParamLimits

0xad6b,	// (0x0002ef09) main_mup3_lyrics_pane_t1

0xcd92,	// (0x00030f30) aid_main_mp4_pane_t1_area

0xcd9c,	// (0x00030f3a) aid_main_mp4_pane_t2_area

0xce48,	// (0x00030fe6) main_mp4_pane_g7_ParamLimits

0xce48,	// (0x00030fe6) main_mp4_pane_g7

0xce54,	// (0x00030ff2) main_mp4_pane_g8_ParamLimits

0xce54,	// (0x00030ff2) main_mp4_pane_g8

0x7b99,	// (0x0002bd37) aid_call6_pane_g1_size

0xaa4a,	// (0x0002ebe8) list_double_large_graphic_phob2_other_pane_ParamLimits

0xaa4a,	// (0x0002ebe8) list_double_large_graphic_phob2_other_pane

0x4fc6,	// (0x00029164) list_double_large_graphic_phob2_other_pane_g1

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp026

0x3154,	// (0x000272f2) main_welc_pane_ParamLimits

0x9870,	// (0x0002da0e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9870,	// (0x0002da0e) main_sp_fs_ctrlbar_pane_g3

0x988a,	// (0x0002da28) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x988a,	// (0x0002da28) main_sp_fs_ctrlbar_pane_g4

0x98be,	// (0x0002da5c) toolbar2_fixed_button_pane_cp01

0x98c9,	// (0x0002da67) toolbar2_fixed_button_pane_cp02

0x98d6,	// (0x0002da74) toolbar2_fixed_button_pane_cp03

0xaaee,	// (0x0002ec8c) list_welc_entry_pane_ParamLimits

0xaaee,	// (0x0002ec8c) list_welc_entry_pane

0xab6d,	// (0x0002ed0b) main_welc_pane_g3_ParamLimits

0xab6d,	// (0x0002ed0b) main_welc_pane_g3

0xabba,	// (0x0002ed58) main_welc_pane_t2_ParamLimits

0xabba,	// (0x0002ed58) main_welc_pane_t2

0xabd4,	// (0x0002ed72) main_welc_pane_t3_ParamLimits

0xabd4,	// (0x0002ed72) main_welc_pane_t3

0x0005,

0xfe75,	// (0x00034013) main_welc_pane_t_ParamLimits

0xfe75,	// (0x00034013) main_welc_pane_t

0xac86,	// (0x0002ee24) welc_button_pane_ParamLimits

0xac86,	// (0x0002ee24) welc_button_pane

0xacee,	// (0x0002ee8c) welc_service_logo_pane_ParamLimits

0xacee,	// (0x0002ee8c) welc_service_logo_pane

0xad87,	// (0x0002ef25) list_single_welc_entry_pane_ParamLimits

0xad87,	// (0x0002ef25) list_single_welc_entry_pane

0xad98,	// (0x0002ef36) list_single_welc_entry_pane_g1

0xada0,	// (0x0002ef3e) list_single_welc_entry_pane_t1

0xadae,	// (0x0002ef4c) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x00034025) list_single_welc_entry_pane_t

0x2a1d,	// (0x00026bbb) bg_button_pane_cp035

0x0535,	// (0x000246d3) welc_button_pane_t1

0x0543,	// (0x000246e1) welc_service_logo_pane_g1

0x054c,	// (0x000246ea) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0003402a) welc_service_logo_pane_g

0xafb8,	// (0x0002f156) main_int_radio_pane

0x33d9,	// (0x00027577) list_single_fs_dyc_pane_g1

0xa97b,	// (0x0002eb19) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa97b,	// (0x0002eb19) list_double_large_graphic_phob2_pane_g3

0xa987,	// (0x0002eb25) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa987,	// (0x0002eb25) list_double_large_graphic_phob2_pane_g4

0xadbc,	// (0x0002ef5a) main_int_radio1_pane_ParamLimits

0xadbc,	// (0x0002ef5a) main_int_radio1_pane

0x0567,	// (0x00024705) find_pane_cp02

0xadd9,	// (0x0002ef77) input_focus_pane_cp12_ParamLimits

0xadd9,	// (0x0002ef77) input_focus_pane_cp12

0xade9,	// (0x0002ef87) input_focus_pane_cp13_ParamLimits

0xade9,	// (0x0002ef87) input_focus_pane_cp13

0xadfd,	// (0x0002ef9b) input_focus_pane_cp14_ParamLimits

0xadfd,	// (0x0002ef9b) input_focus_pane_cp14

0x05ac,	// (0x0002474a) int_radio1_listscroll_pane

0xae11,	// (0x0002efaf) main_int_radio1_pane_g1_ParamLimits

0xae11,	// (0x0002efaf) main_int_radio1_pane_g1

0xae29,	// (0x0002efc7) main_int_radio1_pane_t1_ParamLimits

0xae29,	// (0x0002efc7) main_int_radio1_pane_t1

0xae44,	// (0x0002efe2) main_int_radio1_pane_t2_ParamLimits

0xae44,	// (0x0002efe2) main_int_radio1_pane_t2

0xae5f,	// (0x0002effd) main_int_radio1_pane_t3_ParamLimits

0xae5f,	// (0x0002effd) main_int_radio1_pane_t3

0xae7a,	// (0x0002f018) main_int_radio1_pane_t4_ParamLimits

0xae7a,	// (0x0002f018) main_int_radio1_pane_t4

0x0619,	// (0x000247b7) main_int_radio1_pane_t5_ParamLimits

0x0619,	// (0x000247b7) main_int_radio1_pane_t5

0xae8c,	// (0x0002f02a) main_int_radio1_pane_t6_ParamLimits

0xae8c,	// (0x0002f02a) main_int_radio1_pane_t6

0xaea1,	// (0x0002f03f) main_int_radio1_pane_t7_ParamLimits

0xaea1,	// (0x0002f03f) main_int_radio1_pane_t7

0xaeb6,	// (0x0002f054) main_int_radio1_pane_t8_ParamLimits

0xaeb6,	// (0x0002f054) main_int_radio1_pane_t8

0xaed5,	// (0x0002f073) main_int_radio1_pane_t9_ParamLimits

0xaed5,	// (0x0002f073) main_int_radio1_pane_t9

0xaee7,	// (0x0002f085) main_int_radio1_pane_t10_ParamLimits

0xaee7,	// (0x0002f085) main_int_radio1_pane_t10

0xaf0d,	// (0x0002f0ab) main_int_radio1_pane_t11_ParamLimits

0xaf0d,	// (0x0002f0ab) main_int_radio1_pane_t11

0xaf33,	// (0x0002f0d1) main_int_radio1_pane_t12_ParamLimits

0xaf33,	// (0x0002f0d1) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x0003402f) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x0003402f) main_int_radio1_pane_t

0x06ee,	// (0x0002488c) int_radio_list_pane

0xf075,	// (0x00033213) scroll_pane_cp037

0x06f6,	// (0x00024894) list_double_large_graphic_int_radio_pane_ParamLimits

0x06f6,	// (0x00024894) list_double_large_graphic_int_radio_pane

0x070e,	// (0x000248ac) list_double_large_graphic_int_radio_pane_g1

0x0717,	// (0x000248b5) list_double_large_graphic_int_radio_pane_t1

0x0725,	// (0x000248c3) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x00034048) list_double_large_graphic_int_radio_pane_t

0x2a1d,	// (0x00026bbb) list_highlight_pane_cp027

0x0283,	// (0x00024421) main_button_pane_4

0xab7d,	// (0x0002ed1b) main_welc_pane_g4_ParamLimits

0xab7d,	// (0x0002ed1b) main_welc_pane_g4

0xabec,	// (0x0002ed8a) main_welc_pane_t4_ParamLimits

0xabec,	// (0x0002ed8a) main_welc_pane_t4

0xac01,	// (0x0002ed9f) main_welc_pane_t5_ParamLimits

0xac01,	// (0x0002ed9f) main_welc_pane_t5

0xac4b,	// (0x0002ede9) main_welc_pane_t6_ParamLimits

0xac4b,	// (0x0002ede9) main_welc_pane_t6

0xac9d,	// (0x0002ee3b) welc_button_pane_2_ParamLimits

0xac9d,	// (0x0002ee3b) welc_button_pane_2

0xacb9,	// (0x0002ee57) welc_button_pane_3_ParamLimits

0xacb9,	// (0x0002ee57) welc_button_pane_3

0x0283,	// (0x00024421) welc_button_pane_4

0xacd8,	// (0x0002ee76) welc_button_pane_5_ParamLimits

0xacd8,	// (0x0002ee76) welc_button_pane_5

0x1ab5,	// (0x00025c53) main_popup_welc_pane

0x0733,	// (0x000248d1) main_welc_sk_g3

0x073d,	// (0x000248db) main_welc_sk_g4

0x0747,	// (0x000248e5) main_welc_sk_t3

0x0757,	// (0x000248f5) main_welc_sk_t4

0x0767,	// (0x00024905) popup_welc_pane_t4

0x0775,	// (0x00024913) popup_welc_pane_t5

0x0783,	// (0x00024921) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal

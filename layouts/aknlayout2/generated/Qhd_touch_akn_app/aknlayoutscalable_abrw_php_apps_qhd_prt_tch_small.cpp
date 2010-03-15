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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000540c4 };

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
0x3260,	// (0x00057324) Screen

0x326c,	// (0x00057330) application_window

0x32c8,	// (0x0005738c) area_bottom_pane_ParamLimits

0x32c8,	// (0x0005738c) area_bottom_pane

0x3321,	// (0x000573e5) area_top_pane_ParamLimits

0x3321,	// (0x000573e5) area_top_pane

0x3385,	// (0x00057449) call_video_uplink_pane_ParamLimits

0x3385,	// (0x00057449) call_video_uplink_pane

0x33c4,	// (0x00057488) main_pane_ParamLimits

0x33c4,	// (0x00057488) main_pane

0xe276,	// (0x0006233a) context_pane

0x6a7e,	// (0x0005ab42) navi_pane

0x6a9e,	// (0x0005ab62) popup_cale_events_window_ParamLimits

0x6a9e,	// (0x0005ab62) popup_cale_events_window

0xe289,	// (0x0006234d) popup_mup_playback_window

0x6ab6,	// (0x0005ab7a) signal_pane

0xc2e9,	// (0x000603ad) main_browser_pane

0xce21,	// (0x00060ee5) main_burst_pane

0x68fc,	// (0x0005a9c0) main_calc_pane

0xe25c,	// (0x00062320) main_cale_day_pane

0x3b27,	// (0x00057beb) main_cale_month_pane

0xe25c,	// (0x00062320) main_cale_week_pane

0xce21,	// (0x00060ee5) main_call_pane

0xbfc9,	// (0x0006008d) main_call_poc_pane

0xce21,	// (0x00060ee5) main_camera_pane

0xce21,	// (0x00060ee5) main_chi_dic_pane

0xcc96,	// (0x00060d5a) main_clock_pane

0xbfc9,	// (0x0006008d) main_fmradio_pane

0xce21,	// (0x00060ee5) main_graph_messa_pane

0xbfc9,	// (0x0006008d) main_help_pane

0xc2e9,	// (0x000603ad) main_im_pane

0xc224,	// (0x000602e8) main_image_pane_ParamLimits

0xc224,	// (0x000602e8) main_image_pane

0xbfc9,	// (0x0006008d) main_location2_pane

0xce21,	// (0x00060ee5) main_location_pane

0xc224,	// (0x000602e8) main_messa_pane

0xbfc9,	// (0x0006008d) main_mp2_pane

0xce21,	// (0x00060ee5) main_mp_pane

0xbfc9,	// (0x0006008d) main_msg_pane

0xbfc9,	// (0x0006008d) main_mup_eq_pane

0xbfc9,	// (0x0006008d) main_mup_pane

0xc2e9,	// (0x000603ad) main_notes_pane

0xbfc9,	// (0x0006008d) main_pec_pane

0xbfc9,	// (0x0006008d) main_phob_pane

0xbfc9,	// (0x0006008d) main_pinb_pane

0xbfc9,	// (0x0006008d) main_postcard_pane

0xbfc9,	// (0x0006008d) main_qdial_pane

0xce21,	// (0x00060ee5) main_skin_pane

0xbfc9,	// (0x0006008d) main_smil2_pane

0xce21,	// (0x00060ee5) main_smil_pane

0xce21,	// (0x00060ee5) main_video_pane

0xce21,	// (0x00060ee5) main_video_tele_pane

0xc224,	// (0x000602e8) main_viewer_pane_ParamLimits

0xc224,	// (0x000602e8) main_viewer_pane

0xce21,	// (0x00060ee5) main_vorec_pane

0x6948,	// (0x0005aa0c) popup_blid_sat_info_window_ParamLimits

0x6948,	// (0x0005aa0c) popup_blid_sat_info_window

0x6968,	// (0x0005aa2c) popup_dyc_status_message_window_ParamLimits

0x6968,	// (0x0005aa2c) popup_dyc_status_message_window

0x6978,	// (0x0005aa3c) popup_grid_large_graphic_window_ParamLimits

0x6978,	// (0x0005aa3c) popup_grid_large_graphic_window

0x6a09,	// (0x0005aacd) popup_loc_request_window_ParamLimits

0x6a09,	// (0x0005aacd) popup_loc_request_window

0x6a56,	// (0x0005ab1a) popup_wml_address_window_ParamLimits

0x6a56,	// (0x0005ab1a) popup_wml_address_window

0x67d4,	// (0x0005a898) call_muted_g1

0x6496,	// (0x0005a55a) popup_call_audio_conf_window_ParamLimits

0x6496,	// (0x0005a55a) popup_call_audio_conf_window

0x67e4,	// (0x0005a8a8) popup_call_audio_first_window_ParamLimits

0x67e4,	// (0x0005a8a8) popup_call_audio_first_window

0x6824,	// (0x0005a8e8) popup_call_audio_in_window_ParamLimits

0x6824,	// (0x0005a8e8) popup_call_audio_in_window

0x6848,	// (0x0005a90c) popup_call_audio_out_window_ParamLimits

0x6848,	// (0x0005a90c) popup_call_audio_out_window

0x686a,	// (0x0005a92e) popup_call_audio_second_window_ParamLimits

0x686a,	// (0x0005a92e) popup_call_audio_second_window

0x689a,	// (0x0005a95e) popup_call_audio_wait_window_ParamLimits

0x689a,	// (0x0005a95e) popup_call_audio_wait_window

0x68bb,	// (0x0005a97f) popup_number_entry_window_ParamLimits

0x68bb,	// (0x0005a97f) popup_number_entry_window

0x1b56,	// (0x00055c1a) bg_popup_call_pane_cp05_ParamLimits

0x1b56,	// (0x00055c1a) bg_popup_call_pane_cp05

0x1b76,	// (0x00055c3a) popup_number_entry_window_t1

0x1b89,	// (0x00055c4d) popup_number_entry_window_t2

0x1b9b,	// (0x00055c5f) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x00063197) popup_number_entry_window_t

0x1bad,	// (0x00055c71) text_title_cp2

0x1bc0,	// (0x00055c84) bg_popup_call_pane_cp_ParamLimits

0x1bc0,	// (0x00055c84) bg_popup_call_pane_cp

0x1bce,	// (0x00055c92) call_thumbnail_pane

0x1bd6,	// (0x00055c9a) popup_call_audio_in_window_g1_ParamLimits

0x1bd6,	// (0x00055c9a) popup_call_audio_in_window_g1

0x1be2,	// (0x00055ca6) popup_call_audio_in_window_g2_ParamLimits

0x1be2,	// (0x00055ca6) popup_call_audio_in_window_g2

0x1bee,	// (0x00055cb2) popup_call_audio_in_window_g3_ParamLimits

0x1bee,	// (0x00055cb2) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000631a0) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000631a0) popup_call_audio_in_window_g

0x1bfa,	// (0x00055cbe) popup_call_audio_in_window_t1_ParamLimits

0x1bfa,	// (0x00055cbe) popup_call_audio_in_window_t1

0x1c16,	// (0x00055cda) popup_call_audio_in_window_t2_ParamLimits

0x1c16,	// (0x00055cda) popup_call_audio_in_window_t2

0x1c32,	// (0x00055cf6) popup_call_audio_in_window_t3_ParamLimits

0x1c32,	// (0x00055cf6) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000631a7) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000631a7) popup_call_audio_in_window_t

0x1bc0,	// (0x00055c84) bg_popup_call_pane_cp01_ParamLimits

0x1bc0,	// (0x00055c84) bg_popup_call_pane_cp01

0x1bce,	// (0x00055c92) call_thumbnail_pane_cp02

0x1c45,	// (0x00055d09) call_type_pane_cp022

0x1c4d,	// (0x00055d11) popup_call_audio_out_window_g1_ParamLimits

0x1c4d,	// (0x00055d11) popup_call_audio_out_window_g1

0x1c5f,	// (0x00055d23) popup_call_audio_out_window_g2_ParamLimits

0x1c5f,	// (0x00055d23) popup_call_audio_out_window_g2

0x1c6b,	// (0x00055d2f) popup_call_audio_out_window_g3_ParamLimits

0x1c6b,	// (0x00055d2f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000631ae) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000631ae) popup_call_audio_out_window_g

0x1c7d,	// (0x00055d41) popup_call_audio_out_window_t1_ParamLimits

0x1c7d,	// (0x00055d41) popup_call_audio_out_window_t1

0x1c95,	// (0x00055d59) popup_call_audio_out_window_t2_ParamLimits

0x1c95,	// (0x00055d59) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000631b5) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000631b5) popup_call_audio_out_window_t

0x1caa,	// (0x00055d6e) bg_popup_call_pane_ParamLimits

0x1caa,	// (0x00055d6e) bg_popup_call_pane

0x35dd,	// (0x000576a1) call_thumbnail_pane_cp_ParamLimits

0x35dd,	// (0x000576a1) call_thumbnail_pane_cp

0x1d2e,	// (0x00055df2) call_type_pane_cp01_ParamLimits

0x1d2e,	// (0x00055df2) call_type_pane_cp01

0x1d72,	// (0x00055e36) popup_call_audio_first_window_g1_ParamLimits

0x1d72,	// (0x00055e36) popup_call_audio_first_window_g1

0x1dbe,	// (0x00055e82) popup_call_audio_first_window_g2_ParamLimits

0x1dbe,	// (0x00055e82) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000631ba) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000631ba) popup_call_audio_first_window_g

0x1e02,	// (0x00055ec6) popup_call_audio_first_window_t1_ParamLimits

0x1e02,	// (0x00055ec6) popup_call_audio_first_window_t1

0x1eae,	// (0x00055f72) popup_call_audio_first_window_t4_ParamLimits

0x1eae,	// (0x00055f72) popup_call_audio_first_window_t4

0xbf9a,	// (0x0006005e) popup_call_audio_first_window_t5_ParamLimits

0xbf9a,	// (0x0006005e) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000631bf) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000631bf) popup_call_audio_first_window_t

0xbfc9,	// (0x0006008d) bg_popup_call_pane_cp02

0xbfd3,	// (0x00060097) call_type_pane_cp023

0xbfdb,	// (0x0006009f) popup_call_audio_wait_window_g1

0xbfe3,	// (0x000600a7) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000631c6) popup_call_audio_wait_window_g

0xbfeb,	// (0x000600af) popup_call_audio_wait_window_t3

0xbff9,	// (0x000600bd) bg_popup_call_pane_cp03_ParamLimits

0xbff9,	// (0x000600bd) bg_popup_call_pane_cp03

0xc059,	// (0x0006011d) call_thumbnail_pane_cp011_ParamLimits

0xc059,	// (0x0006011d) call_thumbnail_pane_cp011

0xc065,	// (0x00060129) call_type_pane_cp034_ParamLimits

0xc065,	// (0x00060129) call_type_pane_cp034

0xc0a1,	// (0x00060165) popup_call_audio_second_window_g1_ParamLimits

0xc0a1,	// (0x00060165) popup_call_audio_second_window_g1

0xc0dd,	// (0x000601a1) popup_call_audio_second_window_g2_ParamLimits

0xc0dd,	// (0x000601a1) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000631cb) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000631cb) popup_call_audio_second_window_g

0xc119,	// (0x000601dd) popup_call_audio_second_window_t1_ParamLimits

0xc119,	// (0x000601dd) popup_call_audio_second_window_t1

0xc19a,	// (0x0006025e) popup_call_audio_second_window_t2_ParamLimits

0xc19a,	// (0x0006025e) popup_call_audio_second_window_t2

0xc1d0,	// (0x00060294) popup_call_audio_second_window_t3_ParamLimits

0xc1d0,	// (0x00060294) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000631d0) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000631d0) popup_call_audio_second_window_t

0xbfc9,	// (0x0006008d) bg_popup_call_pane_cp04

0xc206,	// (0x000602ca) list_conf_pane

0xc20e,	// (0x000602d2) popup_call_audio_conf_window_t1

0xc21c,	// (0x000602e0) call_thumbnail_pane_g1

0xc224,	// (0x000602e8) bg_pinb_pane_ParamLimits

0xc224,	// (0x000602e8) bg_pinb_pane

0xc232,	// (0x000602f6) find_pinb_pane

0xc23b,	// (0x000602ff) listscroll_pinb_pane_ParamLimits

0xc23b,	// (0x000602ff) listscroll_pinb_pane

0xc24a,	// (0x0006030e) pinb_bg_pane_g1

0x3601,	// (0x000576c5) pinb_bg_pane_g2

0x360d,	// (0x000576d1) pinb_bg_pane_g3

0x3619,	// (0x000576dd) pinb_bg_pane_g4

0x3625,	// (0x000576e9) pinb_bg_pane_g5

0x3631,	// (0x000576f5) pinb_bg_pane_g6

0x363c,	// (0x00057700) pinb_bg_pane_g7

0x3647,	// (0x0005770b) pinb_bg_pane_g8

0x3652,	// (0x00057716) pinb_bg_pane_g9

0x365c,	// (0x00057720) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000631d7) pinb_bg_pane_g

0x3679,	// (0x0005773d) grid_pinb_pane

0x3684,	// (0x00057748) list_pinb_pane

0x368f,	// (0x00057753) scroll_pane_cp01_ParamLimits

0x368f,	// (0x00057753) scroll_pane_cp01

0xc254,	// (0x00060318) find_pinb_pane_g1_ParamLimits

0xc254,	// (0x00060318) find_pinb_pane_g1

0xc26c,	// (0x00060330) find_pinb_pane_t1

0xc27e,	// (0x00060342) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000631f1) find_pinb_pane_t

0xc293,	// (0x00060357) input_focus_pane_cp01_ParamLimits

0xc293,	// (0x00060357) input_focus_pane_cp01

0x36a1,	// (0x00057765) cell_pinb_pane_ParamLimits

0x36a1,	// (0x00057765) cell_pinb_pane

0x36c9,	// (0x0005778d) cell_pinb_pane_g1_ParamLimits

0x36c9,	// (0x0005778d) cell_pinb_pane_g1

0x36de,	// (0x000577a2) cell_pinb_pane_g2_ParamLimits

0x36de,	// (0x000577a2) cell_pinb_pane_g2

0xc29f,	// (0x00060363) cell_pinb_pane_g3_ParamLimits

0xc29f,	// (0x00060363) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000631f6) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000631f6) cell_pinb_pane_g

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp01

0x36ea,	// (0x000577ae) list_pinb_item_pane_ParamLimits

0x36ea,	// (0x000577ae) list_pinb_item_pane

0xbfc9,	// (0x0006008d) list_highlight_pane_cp02

0x3710,	// (0x000577d4) list_pinb_item_pane_g1_ParamLimits

0x3710,	// (0x000577d4) list_pinb_item_pane_g1

0x371d,	// (0x000577e1) list_pinb_item_pane_g2_ParamLimits

0x371d,	// (0x000577e1) list_pinb_item_pane_g2

0x3729,	// (0x000577ed) list_pinb_item_pane_g3_ParamLimits

0x3729,	// (0x000577ed) list_pinb_item_pane_g3

0x373a,	// (0x000577fe) list_pinb_item_pane_g4_ParamLimits

0x373a,	// (0x000577fe) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000631fd) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000631fd) list_pinb_item_pane_g

0x3746,	// (0x0005780a) list_pinb_item_pane_t1_ParamLimits

0x3746,	// (0x0005780a) list_pinb_item_pane_t1

0x3777,	// (0x0005783b) calc_display_pane

0x3795,	// (0x00057859) calc_paper_pane

0x37b1,	// (0x00057875) grid_calc_pane

0xbfc9,	// (0x0006008d) bg_list_pane_cp01

0x37dd,	// (0x000578a1) clock_g1

0x37e5,	// (0x000578a9) clock_g2

0x0001,

0xf142,	// (0x00063206) clock_g

0x37ef,	// (0x000578b3) clock_t1_ParamLimits

0x37ef,	// (0x000578b3) clock_t1

0x3804,	// (0x000578c8) clock_t2_ParamLimits

0x3804,	// (0x000578c8) clock_t2

0x3816,	// (0x000578da) clock_t3_ParamLimits

0x3816,	// (0x000578da) clock_t3

0x3828,	// (0x000578ec) clock_t4_ParamLimits

0x3828,	// (0x000578ec) clock_t4

0x383a,	// (0x000578fe) clock_t5_ParamLimits

0x383a,	// (0x000578fe) clock_t5

0x384f,	// (0x00057913) clock_t6_ParamLimits

0x384f,	// (0x00057913) clock_t6

0x3861,	// (0x00057925) clock_t7_ParamLimits

0x3861,	// (0x00057925) clock_t7

0x3873,	// (0x00057937) clock_t8_ParamLimits

0x3873,	// (0x00057937) clock_t8

0x3889,	// (0x0005794d) clock_t9_ParamLimits

0x3889,	// (0x0005794d) clock_t9

0x0008,

0xf147,	// (0x0006320b) clock_t_ParamLimits

0xf147,	// (0x0006320b) clock_t

0xc2ab,	// (0x0006036f) popup_clock_analogue_window_cp02

0xc2ab,	// (0x0006036f) popup_clock_digital_window_cp01

0xc2b3,	// (0x00060377) listscroll_help_pane

0xbfc9,	// (0x0006008d) phob_pre_status_pane

0xc2bd,	// (0x00060381) grid_qdial_pane

0xc224,	// (0x000602e8) listscroll_mce_pane

0xc224,	// (0x000602e8) bg_notes_pane

0xc2c7,	// (0x0006038b) list_notes_pane

0x389f,	// (0x00057963) scroll_pane_cp06

0xc2d5,	// (0x00060399) bg_calc_paper_pane

0x38ae,	// (0x00057972) list_calc_pane

0xc2e9,	// (0x000603ad) bg_calc_display_pane

0x38c8,	// (0x0005798c) calc_display_pane_t1

0x38dd,	// (0x000579a1) calc_display_pane_t2

0x38f2,	// (0x000579b6) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0006321e) calc_display_pane_t

0x3904,	// (0x000579c8) cell_calc_pane_ParamLimits

0x3904,	// (0x000579c8) cell_calc_pane

0xc2f5,	// (0x000603b9) bg_calc_paper_pane_g1

0xc301,	// (0x000603c5) bg_calc_paper_pane_g2

0xc30d,	// (0x000603d1) bg_calc_paper_pane_g3

0xc319,	// (0x000603dd) bg_calc_paper_pane_g4

0xc325,	// (0x000603e9) bg_calc_paper_pane_g5

0x3931,	// (0x000579f5) bg_calc_paper_pane_g6

0x3942,	// (0x00057a06) bg_calc_paper_pane_g7

0x3953,	// (0x00057a17) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x00063225) bg_calc_paper_pane_g

0x3964,	// (0x00057a28) calc_bg_paper_pane_g9

0x3975,	// (0x00057a39) list_calc_item_pane_ParamLimits

0x3975,	// (0x00057a39) list_calc_item_pane

0xc331,	// (0x000603f5) list_calc_item_pane_g1

0x39a4,	// (0x00057a68) list_calc_item_pane_t1_ParamLimits

0x39a4,	// (0x00057a68) list_calc_item_pane_t1

0x39b6,	// (0x00057a7a) list_calc_item_pane_t2_ParamLimits

0x39b6,	// (0x00057a7a) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x00063236) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x00063236) list_calc_item_pane_t

0xc33e,	// (0x00060402) cell_calc_pane_g1

0xc348,	// (0x0006040c) grid_highlight_pane_cp02

0x39e6,	// (0x00057aaa) bg_calc_display_pane_g1

0x39ef,	// (0x00057ab3) bg_calc_display_pane_g2

0xe359,	// (0x0006241d) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x00063240) bg_calc_display_pane_g

0x39f9,	// (0x00057abd) cell_qdial_pane_ParamLimits

0x39f9,	// (0x00057abd) cell_qdial_pane

0x3a0d,	// (0x00057ad1) cell_qdial_pane_g1_ParamLimits

0x3a0d,	// (0x00057ad1) cell_qdial_pane_g1

0x3a1a,	// (0x00057ade) cell_qdial_pane_g2_ParamLimits

0x3a1a,	// (0x00057ade) cell_qdial_pane_g2

0xc36a,	// (0x0006042e) cell_qdial_pane_g3_ParamLimits

0xc36a,	// (0x0006042e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x00063247) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x00063247) cell_qdial_pane_g

0x3a38,	// (0x00057afc) cell_qdial_pane_t1_ParamLimits

0x3a38,	// (0x00057afc) cell_qdial_pane_t1

0x3a50,	// (0x00057b14) cell_qdial_pane_t2_ParamLimits

0x3a50,	// (0x00057b14) cell_qdial_pane_t2

0x3a63,	// (0x00057b27) cell_qdial_pane_t3_ParamLimits

0x3a63,	// (0x00057b27) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x00063250) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x00063250) cell_qdial_pane_t

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp04

0xc376,	// (0x0006043a) thumbnail_qdial_pane_ParamLimits

0xc376,	// (0x0006043a) thumbnail_qdial_pane

0xc3d2,	// (0x00060496) list_help_pane

0xc3db,	// (0x0006049f) scroll_pane_cp02

0x3a76,	// (0x00057b3a) help_list_pane_t1_ParamLimits

0x3a76,	// (0x00057b3a) help_list_pane_t1

0x3aa9,	// (0x00057b6d) bg_notes_pane_g2

0x3ab1,	// (0x00057b75) bg_notes_pane_g3

0x3ab9,	// (0x00057b7d) notes_bg_pane_g1

0x3ac1,	// (0x00057b85) notes_bg_pane_g4

0x3ac9,	// (0x00057b8d) notes_bg_pane_g5

0x3ad1,	// (0x00057b95) notes_bg_pane_g6

0x3ad9,	// (0x00057b9d) notes_bg_pane_g7

0x3ae1,	// (0x00057ba5) notes_bg_pane_g8

0x3ae9,	// (0x00057bad) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0006326e) notes_bg_pane_g

0x3af1,	// (0x00057bb5) list_notes_text_pane_ParamLimits

0x3af1,	// (0x00057bb5) list_notes_text_pane

0xc3e4,	// (0x000604a8) list_notes_text_pane_g1

0x3b19,	// (0x00057bdd) list_notes_text_pane_t1

0x3b27,	// (0x00057beb) listscroll_cale_week_pane

0x3b4c,	// (0x00057c10) bg_cale_heading_pane

0xc407,	// (0x000604cb) bg_cale_pane_cp01

0x3b6e,	// (0x00057c32) cale_week_corner_pane

0x3b88,	// (0x00057c4c) cale_week_day_heading_pane

0x3baa,	// (0x00057c6e) cale_week_scroll_pane_g1

0x3bc7,	// (0x00057c8b) cale_week_scroll_pane_g2

0x3bda,	// (0x00057c9e) cale_week_scroll_pane_g3

0x3bed,	// (0x00057cb1) cale_week_scroll_pane_g4

0x3c00,	// (0x00057cc4) cale_week_scroll_pane_g5

0x3c13,	// (0x00057cd7) cale_week_scroll_pane_g6

0x3c26,	// (0x00057cea) cale_week_scroll_pane_g7

0x3c39,	// (0x00057cfd) cale_week_scroll_pane_g8

0x3c4e,	// (0x00057d12) cale_week_scroll_pane_g9

0x3c61,	// (0x00057d25) cale_week_scroll_pane_g10

0x3c74,	// (0x00057d38) cale_week_scroll_pane_g11

0x3c87,	// (0x00057d4b) cale_week_scroll_pane_g12

0x3c9e,	// (0x00057d62) cale_week_scroll_pane_g13

0x3cb9,	// (0x00057d7d) cale_week_scroll_pane_g14

0x3cd4,	// (0x00057d98) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0006327d) cale_week_scroll_pane_g

0x3cef,	// (0x00057db3) cale_week_time_pane

0x3d04,	// (0x00057dc8) grid_cale_week_pane

0xc437,	// (0x000604fb) scroll_pane_cp08

0x3d23,	// (0x00057de7) cell_cale_week_pane_ParamLimits

0x3d23,	// (0x00057de7) cell_cale_week_pane

0x3d85,	// (0x00057e49) cale_week_day_heading_pane_t1

0x3dc0,	// (0x00057e84) cale_week_day_heading_pane_t2

0x3dfb,	// (0x00057ebf) cale_week_day_heading_pane_t3

0x3e36,	// (0x00057efa) cale_week_day_heading_pane_t4

0x3e71,	// (0x00057f35) cale_week_day_heading_pane_t5

0x3eac,	// (0x00057f70) cale_week_day_heading_pane_t6

0x3ee7,	// (0x00057fab) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0006329c) cale_week_day_heading_pane_t

0xc454,	// (0x00060518) bg_cale_side_pane

0x3f22,	// (0x00057fe6) cale_week_time_pane_t1

0x3f3c,	// (0x00058000) cale_week_time_pane_t2

0x3f56,	// (0x0005801a) cale_week_time_pane_t3

0x3f70,	// (0x00058034) cale_week_time_pane_t4

0x3f8a,	// (0x0005804e) cale_week_time_pane_t5

0x3fa4,	// (0x00058068) cale_week_time_pane_t6

0x3fc4,	// (0x00058088) cale_week_time_pane_t7

0x3fe6,	// (0x000580aa) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000632ab) cale_week_time_pane_t

0x400a,	// (0x000580ce) cell_cale_week_pane_g2

0x401d,	// (0x000580e1) cell_cale_week_pane_g3_ParamLimits

0x401d,	// (0x000580e1) cell_cale_week_pane_g3

0xc462,	// (0x00060526) grid_highlight_pane_cp07

0xc46a,	// (0x0006052e) listscroll_gms_pane

0xc474,	// (0x00060538) grid_gms_pane

0xc47d,	// (0x00060541) listscroll_gms_pane_g1

0xc485,	// (0x00060549) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000632bc) listscroll_gms_pane_g

0x4035,	// (0x000580f9) scroll_pane_cp010

0x4040,	// (0x00058104) cell_gms_pane_ParamLimits

0x4040,	// (0x00058104) cell_gms_pane

0x4053,	// (0x00058117) cell_gms_pane_g1

0xc48d,	// (0x00060551) cell_gms_pane_g2

0xc495,	// (0x00060559) cell_gms_pane_g3

0xc49e,	// (0x00060562) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000632c1) cell_gms_pane_g

0xc4a7,	// (0x0006056b) grid_highlight_pane_cp09

0x677c,	// (0x0005a840) phob_pre_status_pane_g1

0x6784,	// (0x0005a848) phob_pre_status_pane_g2

0x678c,	// (0x0005a850) phob_pre_status_pane_g3

0x6794,	// (0x0005a858) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000636b0) phob_pre_status_pane_g

0x67a4,	// (0x0005a868) phob_pre_status_pane_t1

0x67b4,	// (0x0005a878) phob_pre_status_pane_t2

0x67c4,	// (0x0005a888) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000636bb) phob_pre_status_pane_t

0xbfc9,	// (0x0006008d) bg_list_pane_cp05

0x4063,	// (0x00058127) grid_vorec_pane

0x406f,	// (0x00058133) vorec_t1

0x407d,	// (0x00058141) vorec_t2

0x408b,	// (0x0005814f) vorec_t3

0x4099,	// (0x0005815d) vorec_t4

0x40a7,	// (0x0005816b) vorec_t5

0x40b5,	// (0x00058179) vorec_t6

0x0006,

0xf206,	// (0x000632ca) vorec_t

0x40d1,	// (0x00058195) wait_bar_pane_cp01

0x40d9,	// (0x0005819d) cell_vorec_pane_ParamLimits

0x40d9,	// (0x0005819d) cell_vorec_pane

0xc4af,	// (0x00060573) cell_vorec_pane_g1

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp05

0x40fc,	// (0x000581c0) cams_zoom_pane

0x4108,	// (0x000581cc) image_vga_pane

0x4117,	// (0x000581db) main_camera_pane_g1

0x4125,	// (0x000581e9) main_camera_pane_g2

0x4131,	// (0x000581f5) main_camera_pane_g3

0x413d,	// (0x00058201) main_camera_pane_g4

0x4149,	// (0x0005820d) main_camera_pane_g5

0x4155,	// (0x00058219) main_camera_pane_g6

0x4161,	// (0x00058225) main_camera_pane_g7

0x0007,

0xf215,	// (0x000632d9) main_camera_pane_g

0x416d,	// (0x00058231) main_camera_pane_t1

0x417f,	// (0x00058243) main_camera_pane_t2

0x0001,

0xf226,	// (0x000632ea) main_camera_pane_t

0x41a0,	// (0x00058264) cams_zoom_pane_cp_ParamLimits

0x41a0,	// (0x00058264) cams_zoom_pane_cp

0x41c4,	// (0x00058288) image_cif_pane_ParamLimits

0x41c4,	// (0x00058288) image_cif_pane

0x41e2,	// (0x000582a6) image_subqcif_pane

0x41ea,	// (0x000582ae) main_video_pane_g1_ParamLimits

0x41ea,	// (0x000582ae) main_video_pane_g1

0x420a,	// (0x000582ce) main_video_pane_g2_ParamLimits

0x420a,	// (0x000582ce) main_video_pane_g2

0x423a,	// (0x000582fe) main_video_pane_g3_ParamLimits

0x423a,	// (0x000582fe) main_video_pane_g3

0x4263,	// (0x00058327) main_video_pane_g4_ParamLimits

0x4263,	// (0x00058327) main_video_pane_g4

0x428c,	// (0x00058350) main_video_pane_g5_ParamLimits

0x428c,	// (0x00058350) main_video_pane_g5

0xc4c5,	// (0x00060589) main_video_pane_g6_ParamLimits

0xc4c5,	// (0x00060589) main_video_pane_g6

0x0006,

0xf22b,	// (0x000632ef) main_video_pane_g_ParamLimits

0xf22b,	// (0x000632ef) main_video_pane_g

0x42ae,	// (0x00058372) main_video_pane_t1_ParamLimits

0x42ae,	// (0x00058372) main_video_pane_t1

0xc4df,	// (0x000605a3) cams_zoom_pane_g1

0xc4e8,	// (0x000605ac) cams_zoom_pane_g2

0xc4f1,	// (0x000605b5) cams_zoom_pane_g3

0xc4fa,	// (0x000605be) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000632fe) cams_zoom_pane_g

0x42f8,	// (0x000583bc) grid_cams_pane

0x4306,	// (0x000583ca) linegrid_cams_pane

0x4314,	// (0x000583d8) cell_cams_pane_ParamLimits

0x4314,	// (0x000583d8) cell_cams_pane

0xc503,	// (0x000605c7) cams_burst_image_pane

0xc50b,	// (0x000605cf) cell_cams_pane_g1

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp03

0xc33e,	// (0x00060402) mp_bg_pane_g1

0xbfc9,	// (0x0006008d) bg_list_pane_cp03

0xe181,	// (0x00062245) bg_mp_pane

0xe189,	// (0x0006224d) grid_mp_pane

0xe191,	// (0x00062255) media_player_g1

0xe199,	// (0x0006225d) media_player_t1

0xe1a7,	// (0x0006226b) media_player_t2

0xe1b5,	// (0x00062279) media_player_t3

0xe1c3,	// (0x00062287) media_player_t4

0xe1d1,	// (0x00062295) media_player_t5

0xe1df,	// (0x000622a3) media_player_t6

0xe1ed,	// (0x000622b1) media_player_t7

0x0006,

0xf5d6,	// (0x0006369a) media_player_t

0xe1fb,	// (0x000622bf) wait_bar_pane_cp02

0xf5bb,	// (0x0006367f) main_usb_pane_t

0x6773,	// (0x0005a837) cell_mp_pane

0xc33e,	// (0x00060402) cell_mp_pane_g1

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp06

0xc513,	// (0x000605d7) grid_skin_colour_pane

0xc51b,	// (0x000605df) list_highlight_pane_cp03

0x441e,	// (0x000584e2) skin_g1

0xc523,	// (0x000605e7) skin_t1

0xc532,	// (0x000605f6) skin_t2

0x0001,

0xf26f,	// (0x00063333) skin_t

0x4428,	// (0x000584ec) cell_skin_colour_pane_ParamLimits

0x4428,	// (0x000584ec) cell_skin_colour_pane

0xc540,	// (0x00060604) cell_skin_colour_pane_g1

0x44ac,	// (0x00058570) call_video_g1_ParamLimits

0x44ac,	// (0x00058570) call_video_g1

0x44bc,	// (0x00058580) call_video_g2_ParamLimits

0x44bc,	// (0x00058580) call_video_g2

0x0001,

0xf274,	// (0x00063338) call_video_g_ParamLimits

0xf274,	// (0x00063338) call_video_g

0x4516,	// (0x000585da) call_video_uplink_pane_cp1_ParamLimits

0x4516,	// (0x000585da) call_video_uplink_pane_cp1

0xc552,	// (0x00060616) call_video_uplink_pane_cp2

0x45e2,	// (0x000586a6) video_down_crop_pane_ParamLimits

0x45e2,	// (0x000586a6) video_down_crop_pane

0x46e0,	// (0x000587a4) video_down_pane_ParamLimits

0x46e0,	// (0x000587a4) video_down_pane

0xc55a,	// (0x0006061e) video_down_subqcif_pane_ParamLimits

0xc55a,	// (0x0006061e) video_down_subqcif_pane

0xc572,	// (0x00060636) video_down_subqcif_pane_cp_ParamLimits

0xc572,	// (0x00060636) video_down_subqcif_pane_cp

0xc598,	// (0x0006065c) im_reading_pane_ParamLimits

0xc598,	// (0x0006065c) im_reading_pane

0x4802,	// (0x000588c6) im_writing_pane_ParamLimits

0x4802,	// (0x000588c6) im_writing_pane

0x4820,	// (0x000588e4) im_reading_pane_t1

0xc5b2,	// (0x00060676) list_im_pane

0xc5c3,	// (0x00060687) scroll_pane_cp07

0x4874,	// (0x00058938) im_writing_pane_t1_ParamLimits

0x4874,	// (0x00058938) im_writing_pane_t1

0xc5dc,	// (0x000606a0) im_writing_pane_t2_ParamLimits

0xc5dc,	// (0x000606a0) im_writing_pane_t2

0x0001,

0xf27e,	// (0x00063342) im_writing_pane_t_ParamLimits

0xf27e,	// (0x00063342) im_writing_pane_t

0xbfc9,	// (0x0006008d) input_focus_pane_cp04

0xbfc9,	// (0x0006008d) input_focus_pane_cp05

0x4889,	// (0x0005894d) list_im_single_pane_ParamLimits

0x4889,	// (0x0005894d) list_im_single_pane

0x48ad,	// (0x00058971) list_single_im_pane_t1

0x6737,	// (0x0005a7fb) blid_accuracy_pane

0x673f,	// (0x0005a803) blid_compass_pane

0x6749,	// (0x0005a80d) main_location_t1

0x6757,	// (0x0005a81b) main_location_t2

0x6765,	// (0x0005a829) main_location_t3

0x0002,

0xf5e5,	// (0x000636a9) main_location_t

0xbfc9,	// (0x0006008d) aid_levels_location

0xc33e,	// (0x00060402) blid_accuracy_pane_g1

0xc33e,	// (0x00060402) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000633a4) blid_accuracy_pane_g

0xc624,	// (0x000606e8) wml_content_pane

0xc662,	// (0x00060726) wml_button_pane_ParamLimits

0xc662,	// (0x00060726) wml_button_pane

0x48bc,	// (0x00058980) wml_list_single_large_pane_ParamLimits

0x48bc,	// (0x00058980) wml_list_single_large_pane

0x48e6,	// (0x000589aa) wml_list_single_medium_pane_ParamLimits

0x48e6,	// (0x000589aa) wml_list_single_medium_pane

0x4917,	// (0x000589db) wml_list_single_small_pane_ParamLimits

0x4917,	// (0x000589db) wml_list_single_small_pane

0xc676,	// (0x0006073a) wml_selection_box_pane_ParamLimits

0xc676,	// (0x0006073a) wml_selection_box_pane

0xc689,	// (0x0006074d) wml_list_single_pane_t1

0xc698,	// (0x0006075c) wml_list_single_medium_pane_t1

0xc6a7,	// (0x0006076b) wml_list_single_large_pane_t1

0xc6b6,	// (0x0006077a) input_focus_pane_cp02_ParamLimits

0xc6b6,	// (0x0006077a) input_focus_pane_cp02

0xc6c9,	// (0x0006078d) wml_selection_box_pane_g1

0xc6d2,	// (0x00060796) wml_selection_box_pane_t1_ParamLimits

0xc6d2,	// (0x00060796) wml_selection_box_pane_t1

0xc224,	// (0x000602e8) bg_wml_button_pane_ParamLimits

0xc224,	// (0x000602e8) bg_wml_button_pane

0xc6ea,	// (0x000607ae) wml_button_pane_g1

0xc6f2,	// (0x000607b6) wml_button_pane_t1

0xc6ea,	// (0x000607ae) wml_button_bg_pane_g1

0xc702,	// (0x000607c6) wml_button_bg_pane_g2

0xc70a,	// (0x000607ce) wml_button_bg_pane_g3

0xc712,	// (0x000607d6) wml_button_bg_pane_g4

0xc71a,	// (0x000607de) wml_button_bg_pane_g5

0xc722,	// (0x000607e6) wml_button_bg_pane_g6

0xc72a,	// (0x000607ee) wml_button_bg_pane_g7

0xc732,	// (0x000607f6) wml_button_bg_pane_g8

0xc73a,	// (0x000607fe) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x00063347) wml_button_bg_pane_g

0x4951,	// (0x00058a15) bg_list_pane_cp02

0xc742,	// (0x00060806) mce_header_pane_ParamLimits

0xc742,	// (0x00060806) mce_header_pane

0xc758,	// (0x0006081c) mce_icon_pane

0xc758,	// (0x0006081c) mce_image_pane

0xc761,	// (0x00060825) mce_text_pane_ParamLimits

0xc761,	// (0x00060825) mce_text_pane

0x495b,	// (0x00058a1f) scroll_pane_cp03

0xc65a,	// (0x0006071e) scroll_pane_cp04

0xc774,	// (0x00060838) scroll_pane_cp05_ParamLimits

0xc774,	// (0x00060838) scroll_pane_cp05

0x4965,	// (0x00058a29) mce_header_field_pane_ParamLimits

0x4965,	// (0x00058a29) mce_header_field_pane

0x4985,	// (0x00058a49) mce_header_field_pane_2_ParamLimits

0x4985,	// (0x00058a49) mce_header_field_pane_2

0x499b,	// (0x00058a5f) mce_header_field_pane_3

0x49a3,	// (0x00058a67) list_single_mce_message_pane_ParamLimits

0x49a3,	// (0x00058a67) list_single_mce_message_pane

0x49ce,	// (0x00058a92) list_single_mce_smart_pane_ParamLimits

0x49ce,	// (0x00058a92) list_single_mce_smart_pane

0xc780,	// (0x00060844) input_focus_pane_cp03

0xc789,	// (0x0006084d) list_header_data_pane

0x4a04,	// (0x00058ac8) mce_header_field_pane_t1

0x4a12,	// (0x00058ad6) list_single_mce_header_pane_ParamLimits

0x4a12,	// (0x00058ad6) list_single_mce_header_pane

0xc791,	// (0x00060855) list_single_mce_header_pane_t1

0xc7a0,	// (0x00060864) list_single_mce_message_pane_g1

0xc7a8,	// (0x0006086c) list_single_mce_message_pane_t1

0x4a64,	// (0x00058b28) bg_cale_heading_pane_cp01_ParamLimits

0x4a64,	// (0x00058b28) bg_cale_heading_pane_cp01

0xc7b6,	// (0x0006087a) bg_cale_pane_cp02_ParamLimits

0xc7b6,	// (0x0006087a) bg_cale_pane_cp02

0x4aa7,	// (0x00058b6b) cale_month_corner_pane

0x4ac1,	// (0x00058b85) cale_month_day_heading_pane_ParamLimits

0x4ac1,	// (0x00058b85) cale_month_day_heading_pane

0x4b1c,	// (0x00058be0) cale_month_pane_g1_ParamLimits

0x4b1c,	// (0x00058be0) cale_month_pane_g1

0x4b54,	// (0x00058c18) cale_month_pane_g2_ParamLimits

0x4b54,	// (0x00058c18) cale_month_pane_g2

0x4b7d,	// (0x00058c41) cale_month_pane_g3_ParamLimits

0x4b7d,	// (0x00058c41) cale_month_pane_g3

0x4bc9,	// (0x00058c8d) cale_month_pane_g4_ParamLimits

0x4bc9,	// (0x00058c8d) cale_month_pane_g4

0x4c15,	// (0x00058cd9) cale_month_pane_g5_ParamLimits

0x4c15,	// (0x00058cd9) cale_month_pane_g5

0x4c61,	// (0x00058d25) cale_month_pane_g6_ParamLimits

0x4c61,	// (0x00058d25) cale_month_pane_g6

0x4cad,	// (0x00058d71) cale_month_pane_g7_ParamLimits

0x4cad,	// (0x00058d71) cale_month_pane_g7

0x4d11,	// (0x00058dd5) cale_month_pane_g8_ParamLimits

0x4d11,	// (0x00058dd5) cale_month_pane_g8

0x4d75,	// (0x00058e39) cale_month_pane_g9_ParamLimits

0x4d75,	// (0x00058e39) cale_month_pane_g9

0x4dd3,	// (0x00058e97) cale_month_pane_g10_ParamLimits

0x4dd3,	// (0x00058e97) cale_month_pane_g10

0x4e2f,	// (0x00058ef3) cale_month_pane_g11_ParamLimits

0x4e2f,	// (0x00058ef3) cale_month_pane_g11

0x4e83,	// (0x00058f47) cale_month_pane_g12_ParamLimits

0x4e83,	// (0x00058f47) cale_month_pane_g12

0x4ed9,	// (0x00058f9d) cale_month_pane_g13_ParamLimits

0x4ed9,	// (0x00058f9d) cale_month_pane_g13

0x000c,

0xf296,	// (0x0006335a) cale_month_pane_g_ParamLimits

0xf296,	// (0x0006335a) cale_month_pane_g

0x4f2f,	// (0x00058ff3) cale_month_week_pane

0x4f44,	// (0x00059008) grid_cale_month_pane_ParamLimits

0x4f44,	// (0x00059008) grid_cale_month_pane

0x4f92,	// (0x00059056) cale_month_day_heading_pane_t1

0x5018,	// (0x000590dc) cale_month_day_heading_pane_t2

0x50a9,	// (0x0005916d) cale_month_day_heading_pane_t3

0x513a,	// (0x000591fe) cale_month_day_heading_pane_t4

0x51cb,	// (0x0005928f) cale_month_day_heading_pane_t5

0x525c,	// (0x00059320) cale_month_day_heading_pane_t6

0x52ed,	// (0x000593b1) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x00063375) cale_month_day_heading_pane_t

0xc454,	// (0x00060518) bg_cale_side_pane_cp01

0x5396,	// (0x0005945a) cale_month_week_pane_t1

0x53af,	// (0x00059473) cale_month_week_pane_t2

0x53c8,	// (0x0005948c) cale_month_week_pane_t3

0x53e1,	// (0x000594a5) cale_month_week_pane_t4

0x53fa,	// (0x000594be) cale_month_week_pane_t5

0x541b,	// (0x000594df) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x00063384) cale_month_week_pane_t

0x543c,	// (0x00059500) cell_cale_month_pane_ParamLimits

0x543c,	// (0x00059500) cell_cale_month_pane

0x5588,	// (0x0005964c) cell_cale_month_pane_g1

0x5594,	// (0x00059658) cell_cale_month_pane_t1_ParamLimits

0x5594,	// (0x00059658) cell_cale_month_pane_t1

0xc462,	// (0x00060526) grid_highlight_pane_cp08

0xc33e,	// (0x00060402) main_smil_g1

0x55b4,	// (0x00059678) smil_status_pane

0xc7f5,	// (0x000608b9) smil_text_pane

0xe0a1,	// (0x00062165) bg_popup_call3_rect_pane_g8

0xe0a9,	// (0x0006216d) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0006363d) bg_popup_call3_rect_pane_g

0xe2f0,	// (0x000623b4) smil_status_volume_pane_g1

0xc7ff,	// (0x000608c3) smil_status_pane_t1

0x6b69,	// (0x0005ac2d) volume_smil_pane

0xc816,	// (0x000608da) list_smil_text_pane

0x55c7,	// (0x0005968b) scroll_pane_cp011

0x55d2,	// (0x00059696) smil_text_list_pane_t1_ParamLimits

0x55d2,	// (0x00059696) smil_text_list_pane_t1

0x564a,	// (0x0005970e) aid_volume_smil_ParamLimits

0x564a,	// (0x0005970e) aid_volume_smil

0xc33e,	// (0x00060402) smil_volume_pane_g1

0xc33e,	// (0x00060402) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000633a4) smil_volume_pane_g

0x3b27,	// (0x00057beb) listscroll_cale_day_pane

0xc820,	// (0x000608e4) bg_cale_pane

0xc838,	// (0x000608fc) list_cale_pane

0xc85b,	// (0x0006091f) scroll_pane_cp09

0xc86c,	// (0x00060930) cale_bg_pane_g1

0xc874,	// (0x00060938) cale_bg_pane_g2

0xc87c,	// (0x00060940) cale_bg_pane_g3

0xc884,	// (0x00060948) cale_bg_pane_g4

0xc88c,	// (0x00060950) cale_bg_pane_g5

0xc894,	// (0x00060958) cale_bg_pane_g6

0xc89c,	// (0x00060960) cale_bg_pane_g7

0xc8a4,	// (0x00060968) cale_bg_pane_g8

0xc8ac,	// (0x00060970) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000633a9) cale_bg_pane_g

0x566c,	// (0x00059730) list_cale_time_pane_ParamLimits

0x566c,	// (0x00059730) list_cale_time_pane

0xc8b4,	// (0x00060978) list_cale_time_pane_g1_ParamLimits

0xc8b4,	// (0x00060978) list_cale_time_pane_g1

0xc8c0,	// (0x00060984) list_cale_time_pane_g2_ParamLimits

0xc8c0,	// (0x00060984) list_cale_time_pane_g2

0x5688,	// (0x0005974c) list_cale_time_pane_g3_ParamLimits

0x5688,	// (0x0005974c) list_cale_time_pane_g3

0x5696,	// (0x0005975a) list_cale_time_pane_g4_ParamLimits

0x5696,	// (0x0005975a) list_cale_time_pane_g4

0x56a4,	// (0x00059768) list_cale_time_pane_g5_ParamLimits

0x56a4,	// (0x00059768) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000633bc) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000633bc) list_cale_time_pane_g

0xc8da,	// (0x0006099e) list_cale_time_pane_t1_ParamLimits

0xc8da,	// (0x0006099e) list_cale_time_pane_t1

0xc902,	// (0x000609c6) list_cale_time_pane_t2_ParamLimits

0xc902,	// (0x000609c6) list_cale_time_pane_t2

0x5a3a,	// (0x00059afe) aid_blid_cardinal_pane

0x5a7c,	// (0x00059b40) compass_pane_t4

0xc92a,	// (0x000609ee) list_cale_time_pane_t4_ParamLimits

0xc92a,	// (0x000609ee) list_cale_time_pane_t4

0x5a8a,	// (0x00059b4e) compass_pane_t5

0x5a9a,	// (0x00059b5e) compass_pane_t6

0x5aa8,	// (0x00059b6c) compass_pane_t7

0xcd73,	// (0x00060e37) navi_pane_cc_t1

0xcec8,	// (0x00060f8c) aid_phob_thumbnail_center_pane

0x623d,	// (0x0005a301) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000633c9) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000633c9) list_cale_time_pane_t

0x1bc0,	// (0x00055c84) bg_popup_window_pane_cp02_ParamLimits

0x1bc0,	// (0x00055c84) bg_popup_window_pane_cp02

0xc952,	// (0x00060a16) heading_pane_cp01_ParamLimits

0xc952,	// (0x00060a16) heading_pane_cp01

0xc95e,	// (0x00060a22) loc_req_pane_ParamLimits

0xc95e,	// (0x00060a22) loc_req_pane

0xc96e,	// (0x00060a32) loc_type_pane_ParamLimits

0xc96e,	// (0x00060a32) loc_type_pane

0xc980,	// (0x00060a44) loc_type_pane_t1_ParamLimits

0xc980,	// (0x00060a44) loc_type_pane_t1

0xc992,	// (0x00060a56) loc_type_pane_t2_ParamLimits

0xc992,	// (0x00060a56) loc_type_pane_t2

0xc9a4,	// (0x00060a68) loc_type_pane_t3_ParamLimits

0xc9a4,	// (0x00060a68) loc_type_pane_t3

0x0002,

0xf30c,	// (0x000633d0) loc_type_pane_t_ParamLimits

0xf30c,	// (0x000633d0) loc_type_pane_t

0xc9b6,	// (0x00060a7a) list_loc_req_pane

0xc9c0,	// (0x00060a84) scroll_pane_cp012

0x56b2,	// (0x00059776) list_single_loc_request_popup_menu_pane_ParamLimits

0x56b2,	// (0x00059776) list_single_loc_request_popup_menu_pane

0xc9cb,	// (0x00060a8f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9cb,	// (0x00060a8f) list_single_loc_request_popup_menu_pane_g1

0xc9d7,	// (0x00060a9b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9d7,	// (0x00060a9b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x000633d7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x000633d7) list_single_loc_request_popup_menu_pane_g

0xc9e3,	// (0x00060aa7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9e3,	// (0x00060aa7) list_single_loc_request_popup_menu_pane_t1

0x56c4,	// (0x00059788) bg_popup_window_pane_cp03_ParamLimits

0x56c4,	// (0x00059788) bg_popup_window_pane_cp03

0x56d2,	// (0x00059796) heading_loc_req_pane_ParamLimits

0x56d2,	// (0x00059796) heading_loc_req_pane

0x56de,	// (0x000597a2) popup_dyc_status_message_window_g1_ParamLimits

0x56de,	// (0x000597a2) popup_dyc_status_message_window_g1

0x56ea,	// (0x000597ae) popup_dyc_status_message_window_t1_ParamLimits

0x56ea,	// (0x000597ae) popup_dyc_status_message_window_t1

0x56fc,	// (0x000597c0) popup_dyc_status_message_window_t2_ParamLimits

0x56fc,	// (0x000597c0) popup_dyc_status_message_window_t2

0x570e,	// (0x000597d2) popup_dyc_status_message_window_t3_ParamLimits

0x570e,	// (0x000597d2) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x000633dc) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x000633dc) popup_dyc_status_message_window_t

0xbfc9,	// (0x0006008d) bg_heading_pane_cp01

0xc9f9,	// (0x00060abd) heading_loc_req_pane_g1

0xca01,	// (0x00060ac5) heading_loc_req_pane_g2

0xca09,	// (0x00060acd) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x000633e3) heading_loc_req_pane_g

0xca11,	// (0x00060ad5) heading_loc_req_pane_t1

0xca20,	// (0x00060ae4) bg_popup_sub_pane_cp01_ParamLimits

0xca20,	// (0x00060ae4) bg_popup_sub_pane_cp01

0xca2e,	// (0x00060af2) popup_cale_events_window_g1_ParamLimits

0xca2e,	// (0x00060af2) popup_cale_events_window_g1

0xca4e,	// (0x00060b12) popup_cale_events_window_g2_ParamLimits

0xca4e,	// (0x00060b12) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x00063417) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x00063417) popup_cale_events_window_g

0xca6e,	// (0x00060b32) popup_cale_events_window_t1_ParamLimits

0xca6e,	// (0x00060b32) popup_cale_events_window_t1

0xca80,	// (0x00060b44) popup_cale_events_window_t2_ParamLimits

0xca80,	// (0x00060b44) popup_cale_events_window_t2

0xcabe,	// (0x00060b82) popup_cale_events_window_t3_ParamLimits

0xcabe,	// (0x00060b82) popup_cale_events_window_t3

0xcaf8,	// (0x00060bbc) popup_cale_events_window_t4_ParamLimits

0xcaf8,	// (0x00060bbc) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0006341c) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0006341c) popup_cale_events_window_t

0x5807,	// (0x000598cb) call_type_pane

0xcb2e,	// (0x00060bf2) popup_call_status_window_g1

0x5813,	// (0x000598d7) popup_call_status_window_g2

0x581f,	// (0x000598e3) popup_call_status_window_g3

0x0002,

0xf361,	// (0x00063425) popup_call_status_window_g

0xcb3c,	// (0x00060c00) call_type_pane_g1

0xcb45,	// (0x00060c09) call_type_pane_g2

0x0001,

0xf368,	// (0x0006342c) call_type_pane_g

0xbfc9,	// (0x0006008d) bg_popup_sub_pane_cp02

0xcb4e,	// (0x00060c12) listscroll_popup_wml_pane

0xcb56,	// (0x00060c1a) list_wml_pane

0xcb60,	// (0x00060c24) scroll_pane_cp013

0xcb6b,	// (0x00060c2f) list_single_graphic_popup_wml_pane_ParamLimits

0xcb6b,	// (0x00060c2f) list_single_graphic_popup_wml_pane

0xc33e,	// (0x00060402) list_single_graphic_popup_wml_pane_g1

0xcb7f,	// (0x00060c43) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x00063431) list_single_graphic_popup_wml_pane_g

0xcb87,	// (0x00060c4b) list_single_graphic_popup_wml_pane_t1

0xcb9d,	// (0x00060c61) aid_call_pane

0xc21c,	// (0x000602e0) popup_clock_analogue_window_g1

0xc21c,	// (0x000602e0) popup_clock_analogue_window_g2

0x582b,	// (0x000598ef) popup_clock_analogue_window_g3

0x582b,	// (0x000598ef) popup_clock_analogue_window_g4

0xc33e,	// (0x00060402) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x00063436) popup_clock_analogue_window_g

0x5833,	// (0x000598f7) popup_clock_analogue_window_t1

0x5841,	// (0x00059905) clock_digital_number_pane_ParamLimits

0x5841,	// (0x00059905) clock_digital_number_pane

0x584d,	// (0x00059911) clock_digital_number_pane_cp02_ParamLimits

0x584d,	// (0x00059911) clock_digital_number_pane_cp02

0x5859,	// (0x0005991d) clock_digital_number_pane_cp03_ParamLimits

0x5859,	// (0x0005991d) clock_digital_number_pane_cp03

0x5865,	// (0x00059929) clock_digital_number_pane_cp04_ParamLimits

0x5865,	// (0x00059929) clock_digital_number_pane_cp04

0x5875,	// (0x00059939) clock_digital_separator_pane_ParamLimits

0x5875,	// (0x00059939) clock_digital_separator_pane

0x5881,	// (0x00059945) popup_clock_digital_window_t1

0xc33e,	// (0x00060402) clock_digital_number_pane_g1

0xc33e,	// (0x00060402) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000633a4) clock_digital_number_pane_g

0xc33e,	// (0x00060402) clock_digital_separator_pane_g1

0xc33e,	// (0x00060402) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000633a4) clock_digital_separator_pane_g

0xbfc9,	// (0x0006008d) bg_popup_window_pane_cp04

0xcba5,	// (0x00060c69) heading_pane_cp03

0xcbad,	// (0x00060c71) listscroll_popup_gms_pane

0xcbb5,	// (0x00060c79) grid_large_graphic_popup_pane

0xcbbf,	// (0x00060c83) listscroll_popup_gms_pane_g1

0xcbc7,	// (0x00060c8b) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x00063441) listscroll_popup_gms_pane_g

0xc65a,	// (0x0006071e) scroll_pane_cp014

0x589e,	// (0x00059962) cell_large_graphic_popup_pane_ParamLimits

0x589e,	// (0x00059962) cell_large_graphic_popup_pane

0x58b6,	// (0x0005997a) cell_large_graphic_popup_pane_g1_ParamLimits

0x58b6,	// (0x0005997a) cell_large_graphic_popup_pane_g1

0xcbcf,	// (0x00060c93) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbcf,	// (0x00060c93) cell_large_graphic_popup_pane_g2

0xcbdb,	// (0x00060c9f) cell_large_graphic_popup_pane_g3_ParamLimits

0xcbdb,	// (0x00060c9f) cell_large_graphic_popup_pane_g3

0xcbe8,	// (0x00060cac) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbe8,	// (0x00060cac) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x00063446) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x00063446) cell_large_graphic_popup_pane_g

0xcbf8,	// (0x00060cbc) grid_highlight_pane_cp010

0xc33e,	// (0x00060402) bg_popup_call_pane_g1

0xcc02,	// (0x00060cc6) list_single_graphic_popup_conf_pane_ParamLimits

0xcc02,	// (0x00060cc6) list_single_graphic_popup_conf_pane

0xcc15,	// (0x00060cd9) list_highlight_pane_cp01

0xcc1e,	// (0x00060ce2) list_single_graphic_popup_conf_pane_g1

0xcc26,	// (0x00060cea) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0006344f) list_single_graphic_popup_conf_pane_g

0xcc2e,	// (0x00060cf2) list_single_graphic_popup_conf_pane_t1

0xcc3c,	// (0x00060d00) linegrid_cams_pane_g1

0x58c2,	// (0x00059986) linegrid_cams_pane_g2

0xc495,	// (0x00060559) linegrid_cams_pane_g3

0xcc45,	// (0x00060d09) linegrid_cams_pane_g4

0x58cb,	// (0x0005998f) linegrid_cams_pane_g5

0x58d4,	// (0x00059998) linegrid_cams_pane_g6

0xc49e,	// (0x00060562) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x00063454) linegrid_cams_pane_g

0xcc4e,	// (0x00060d12) popup_clock_analogue_window

0xcc4e,	// (0x00060d12) popup_clock_digital_window

0xbfc9,	// (0x0006008d) popup_phob_thumbnail_window

0xc33e,	// (0x00060402) call_video_uplink_pane_g1

0xcc57,	// (0x00060d1b) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x00063463) call_video_uplink_pane_g

0xcc5f,	// (0x00060d23) video_uplink_pane

0xcc67,	// (0x00060d2b) mce_image_pane_g1

0x58dd,	// (0x000599a1) mce_image_pane_g2

0x58e7,	// (0x000599ab) mce_image_pane_g3

0x58ef,	// (0x000599b3) mce_image_pane_g4

0x58f7,	// (0x000599bb) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x00063468) mce_image_pane_g

0xcc71,	// (0x00060d35) control_top_pane_stacon_cp01_ParamLimits

0xcc71,	// (0x00060d35) control_top_pane_stacon_cp01

0xcc85,	// (0x00060d49) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc85,	// (0x00060d49) uni_indicator_pane_stacon_cp01

0xcc96,	// (0x00060d5a) bg_popup_sub_pane_cp03

0xcca0,	// (0x00060d64) chi_dic_find_pane

0x58ff,	// (0x000599c3) listscroll_chi_dic_pane

0xcca8,	// (0x00060d6c) main_pane_chidic_g1

0xccb0,	// (0x00060d74) chi_dic_find_pane_t1

0xccbe,	// (0x00060d82) find_chidic_pane

0xccc7,	// (0x00060d8b) chi_dic_list_pane_ParamLimits

0xccc7,	// (0x00060d8b) chi_dic_list_pane

0xccd8,	// (0x00060d9c) scroll_pane_cp020

0xcce0,	// (0x00060da4) find_chidic_pane_t1

0xbfc9,	// (0x0006008d) input_focus_pane_cp06

0x5913,	// (0x000599d7) list_chi_dic_pane_ParamLimits

0x5913,	// (0x000599d7) list_chi_dic_pane

0x592d,	// (0x000599f1) list_chi_dic_pane_t1_ParamLimits

0x592d,	// (0x000599f1) list_chi_dic_pane_t1

0xbfc9,	// (0x0006008d) list_highlight_pane_cp020

0xccef,	// (0x00060db3) bg_cale_heading_pane_g1

0x5940,	// (0x00059a04) bg_cale_heading_pane_g2

0x5948,	// (0x00059a0c) bg_cale_heading_pane_g3

0x5950,	// (0x00059a14) bg_cale_heading_pane_g4

0x595a,	// (0x00059a1e) bg_cale_heading_pane_g5

0x5964,	// (0x00059a28) bg_cale_heading_pane_g6

0x596c,	// (0x00059a30) bg_cale_heading_pane_g7

0x5974,	// (0x00059a38) bg_cale_heading_pane_g8

0x597e,	// (0x00059a42) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x00063473) bg_cale_heading_pane_g

0xccef,	// (0x00060db3) bg_cale_side_pane_g1

0x5988,	// (0x00059a4c) bg_cale_side_pane_g2

0x5992,	// (0x00059a56) bg_cale_side_pane_g3

0x599c,	// (0x00059a60) bg_cale_side_pane_g4

0x59a6,	// (0x00059a6a) bg_cale_side_pane_g5

0x59b0,	// (0x00059a74) bg_cale_side_pane_g6

0x59ba,	// (0x00059a7e) bg_cale_side_pane_g7

0x59c4,	// (0x00059a88) bg_cale_side_pane_g8

0x59cc,	// (0x00059a90) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x00063486) bg_cale_side_pane_g

0x59d4,	// (0x00059a98) popup_call_status_window_ParamLimits

0x59d4,	// (0x00059a98) popup_call_status_window

0xccf7,	// (0x00060dbb) stacon_top_pane

0xccff,	// (0x00060dc3) status_pane_ParamLimits

0xccff,	// (0x00060dc3) status_pane

0xcd14,	// (0x00060dd8) status_small_pane

0xcd1c,	// (0x00060de0) control_pane

0xbfc9,	// (0x0006008d) stacon_bottom_pane

0xcd24,	// (0x00060de8) list_single_mce_smart_pane_t1_ParamLimits

0xcd24,	// (0x00060de8) list_single_mce_smart_pane_t1

0xcd37,	// (0x00060dfb) list_single_mce_smart_pane_t2_ParamLimits

0xcd37,	// (0x00060dfb) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x00063499) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x00063499) list_single_mce_smart_pane_t

0x59e0,	// (0x00059aa4) compass_pane

0x59ec,	// (0x00059ab0) main_location2_pane_t1

0x5a00,	// (0x00059ac4) main_location2_pane_t2

0x5a14,	// (0x00059ad8) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0006349e) main_location2_pane_t

0xcd56,	// (0x00060e1a) compass_pane_g1_ParamLimits

0xcd56,	// (0x00060e1a) compass_pane_g1

0x5a5e,	// (0x00059b22) compass_pane_t1

0x5a6d,	// (0x00059b31) compass_pane_t2

0x0005,

0xf3e3,	// (0x000634a7) compass_pane_t

0x5ab8,	// (0x00059b7c) text_secondary_cp61

0xcd6a,	// (0x00060e2e) navi_pane_cams_g5

0xcd8d,	// (0x00060e51) navi_pane_im_t1

0xcd9b,	// (0x00060e5f) navi_pane_mp_g1_ParamLimits

0xcd9b,	// (0x00060e5f) navi_pane_mp_g1

0xcdaf,	// (0x00060e73) navi_pane_mp_g2_ParamLimits

0xcdaf,	// (0x00060e73) navi_pane_mp_g2

0xcdbb,	// (0x00060e7f) navi_pane_mp_g3_ParamLimits

0xcdbb,	// (0x00060e7f) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000634bb) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000634bb) navi_pane_mp_g

0xcdc7,	// (0x00060e8b) navi_pane_mp_t1

0xcdd5,	// (0x00060e99) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000634c2) navi_pane_mp_t

0xce11,	// (0x00060ed5) navi_pane_vt_g1

0xcdc7,	// (0x00060e8b) navi_pane_vt_t1

0xce19,	// (0x00060edd) navi_slider_pane

0xce21,	// (0x00060ee5) zooming_pane

0xce29,	// (0x00060eed) navi_slider_pane_g1

0x5beb,	// (0x00059caf) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000634c9) navi_slider_pane_g

0xce4d,	// (0x00060f11) aid_levels_zoom

0xce55,	// (0x00060f19) zooming_pane_g1

0xce5d,	// (0x00060f21) zooming_pane_g2

0xce5d,	// (0x00060f21) zooming_pane_g3

0x0002,

0xf414,	// (0x000634d8) zooming_pane_g

0xce65,	// (0x00060f29) level_10_zoom

0xce6e,	// (0x00060f32) level_11_zoom

0xce77,	// (0x00060f3b) level_1_zoom

0xce80,	// (0x00060f44) level_2_zoom

0xce89,	// (0x00060f4d) level_3_zoom

0xce92,	// (0x00060f56) level_4_zoom

0xce9b,	// (0x00060f5f) level_5_zoom

0xcea4,	// (0x00060f68) level_6_zoom

0xcead,	// (0x00060f71) level_7_zoom

0xceb6,	// (0x00060f7a) level_8_zoom

0xcebf,	// (0x00060f83) level_9_zoom

0xced0,	// (0x00060f94) popup_phob_thumbnail_window_g1

0xced8,	// (0x00060f9c) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x000634df) popup_phob_thumbnail_window_g

0xe203,	// (0x000622c7) level_1_location

0xe20b,	// (0x000622cf) level_2_location

0xe213,	// (0x000622d7) level_3_location

0xe21b,	// (0x000622df) level_4_location

0xce21,	// (0x00060ee5) level_5_location

0x5bfd,	// (0x00059cc1) mce_icon_pane_g1

0x5c05,	// (0x00059cc9) mce_icon_pane_g2

0x0001,

0xf420,	// (0x000634e4) mce_icon_pane_g

0x5c0d,	// (0x00059cd1) main_mup_pane_g1_ParamLimits

0x5c0d,	// (0x00059cd1) main_mup_pane_g1

0x5c25,	// (0x00059ce9) main_mup_pane_g2_ParamLimits

0x5c25,	// (0x00059ce9) main_mup_pane_g2

0x5c41,	// (0x00059d05) main_mup_pane_g3_ParamLimits

0x5c41,	// (0x00059d05) main_mup_pane_g3

0x5c5d,	// (0x00059d21) main_mup_pane_g4_ParamLimits

0x5c5d,	// (0x00059d21) main_mup_pane_g4

0x5c79,	// (0x00059d3d) main_mup_pane_g5_ParamLimits

0x5c79,	// (0x00059d3d) main_mup_pane_g5

0x5c9a,	// (0x00059d5e) main_mup_pane_g6_ParamLimits

0x5c9a,	// (0x00059d5e) main_mup_pane_g6

0x5cb6,	// (0x00059d7a) main_mup_pane_g7_ParamLimits

0x5cb6,	// (0x00059d7a) main_mup_pane_g7

0x5cd2,	// (0x00059d96) main_mup_pane_g8_ParamLimits

0x5cd2,	// (0x00059d96) main_mup_pane_g8

0x5cf2,	// (0x00059db6) main_mup_pane_g9_ParamLimits

0x5cf2,	// (0x00059db6) main_mup_pane_g9

0x5d11,	// (0x00059dd5) main_mup_pane_g10_ParamLimits

0x5d11,	// (0x00059dd5) main_mup_pane_g10

0x5d30,	// (0x00059df4) main_mup_pane_g11_ParamLimits

0x5d30,	// (0x00059df4) main_mup_pane_g11

0x5d48,	// (0x00059e0c) main_mup_pane_g12_ParamLimits

0x5d48,	// (0x00059e0c) main_mup_pane_g12

0x5d56,	// (0x00059e1a) main_mup_pane_g13_ParamLimits

0x5d56,	// (0x00059e1a) main_mup_pane_g13

0x000c,

0xf425,	// (0x000634e9) main_mup_pane_g_ParamLimits

0xf425,	// (0x000634e9) main_mup_pane_g

0x5d6c,	// (0x00059e30) main_mup_pane_t1_ParamLimits

0x5d6c,	// (0x00059e30) main_mup_pane_t1

0x5d89,	// (0x00059e4d) main_mup_pane_t2_ParamLimits

0x5d89,	// (0x00059e4d) main_mup_pane_t2

0x5da3,	// (0x00059e67) main_mup_pane_t3_ParamLimits

0x5da3,	// (0x00059e67) main_mup_pane_t3

0x5dbd,	// (0x00059e81) main_mup_pane_t4_ParamLimits

0x5dbd,	// (0x00059e81) main_mup_pane_t4

0x5dcf,	// (0x00059e93) main_mup_pane_t5_ParamLimits

0x5dcf,	// (0x00059e93) main_mup_pane_t5

0x5de1,	// (0x00059ea5) main_mup_pane_t6_ParamLimits

0x5de1,	// (0x00059ea5) main_mup_pane_t6

0x0005,

0xf440,	// (0x00063504) main_mup_pane_t_ParamLimits

0xf440,	// (0x00063504) main_mup_pane_t

0x5df7,	// (0x00059ebb) mup_progress_pane_ParamLimits

0x5df7,	// (0x00059ebb) mup_progress_pane

0x5e03,	// (0x00059ec7) mup_visualizer_pane_ParamLimits

0x5e03,	// (0x00059ec7) mup_visualizer_pane

0x5e3d,	// (0x00059f01) mup_volume_pane_ParamLimits

0x5e3d,	// (0x00059f01) mup_volume_pane

0xcb2e,	// (0x00060bf2) mup_visualizer_pane_g1_ParamLimits

0xcb2e,	// (0x00060bf2) mup_visualizer_pane_g1

0xcb2e,	// (0x00060bf2) mup_visualizer_pane_g2_ParamLimits

0xcb2e,	// (0x00060bf2) mup_visualizer_pane_g2

0xcd56,	// (0x00060e1a) mup_visualizer_pane_g3_ParamLimits

0xcd56,	// (0x00060e1a) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x00063511) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x00063511) mup_visualizer_pane_g

0xc33e,	// (0x00060402) mup_volume_pane_g1

0xcee8,	// (0x00060fac) mup_volume_pane_g2

0x0001,

0xf454,	// (0x00063518) mup_volume_pane_g

0xc33e,	// (0x00060402) mup_progress_pane_g1

0xcef1,	// (0x00060fb5) mup_progress_pane_g2

0xcefa,	// (0x00060fbe) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0006351d) mup_progress_pane_g

0xbfc9,	// (0x0006008d) bg_popup_window_pane_cp05

0xcf03,	// (0x00060fc7) heading_pane_cp02_ParamLimits

0xcf03,	// (0x00060fc7) heading_pane_cp02

0xcf1d,	// (0x00060fe1) list_popup_blid_pane

0xcf25,	// (0x00060fe9) list_blid_sat_info_pane_ParamLimits

0xcf25,	// (0x00060fe9) list_blid_sat_info_pane

0xcf38,	// (0x00060ffc) list_blid_sat_info_pane_g1

0xcf40,	// (0x00061004) list_blid_sat_info_pane_t1

0x5f4a,	// (0x0005a00e) mup_equalizer_pane_ParamLimits

0x5f4a,	// (0x0005a00e) mup_equalizer_pane

0x5f6b,	// (0x0005a02f) mup_equalizer_pane_cp1_ParamLimits

0x5f6b,	// (0x0005a02f) mup_equalizer_pane_cp1

0x5f8c,	// (0x0005a050) mup_equalizer_pane_cp2_ParamLimits

0x5f8c,	// (0x0005a050) mup_equalizer_pane_cp2

0x5fad,	// (0x0005a071) mup_equalizer_pane_cp3_ParamLimits

0x5fad,	// (0x0005a071) mup_equalizer_pane_cp3

0x5fce,	// (0x0005a092) mup_equalizer_pane_cp4_ParamLimits

0x5fce,	// (0x0005a092) mup_equalizer_pane_cp4

0x5fef,	// (0x0005a0b3) mup_equalizer_pane_cp5

0x6005,	// (0x0005a0c9) mup_equalizer_pane_cp6

0x601d,	// (0x0005a0e1) mup_equalizer_pane_cp7

0xe121,	// (0x000621e5) bg_popup_call_poc_act_pane_g9

0xe129,	// (0x000621ed) bg_popup_call_poc_act_pane_g10

0xe131,	// (0x000621f5) bg_popup_call_poc_act_pane_g11

0x000a,

0xc224,	// (0x000602e8) mup_scale_pane

0xc33e,	// (0x00060402) mup_scale_pane_g1

0xcf4e,	// (0x00061012) mup_scale_pane_g2

0x0006,

0xf475,	// (0x00063539) mup_scale_pane_g

0xcf72,	// (0x00061036) msg_data_pane

0xcf7a,	// (0x0006103e) scroll_pane_cp017

0x6047,	// (0x0005a10b) bg_list_pane_cp04_ParamLimits

0x6047,	// (0x0005a10b) bg_list_pane_cp04

0xcf82,	// (0x00061046) msg_data_pane_g1

0x6063,	// (0x0005a127) msg_data_pane_g2

0x606d,	// (0x0005a131) msg_data_pane_g3

0x6075,	// (0x0005a139) msg_data_pane_g4

0x607d,	// (0x0005a141) msg_data_pane_g5

0x6085,	// (0x0005a149) msg_data_pane_g6

0x608d,	// (0x0005a151) msg_data_pane_g7

0x0006,

0xf484,	// (0x00063548) msg_data_pane_g

0x6095,	// (0x0005a159) msg_text_pane_ParamLimits

0x6095,	// (0x0005a159) msg_text_pane

0x60d5,	// (0x0005a199) qrid_highlight_pane_cp011_ParamLimits

0x60d5,	// (0x0005a199) qrid_highlight_pane_cp011

0xbfc9,	// (0x0006008d) msg_body_pane

0xbfc9,	// (0x0006008d) msg_header_pane

0xcf8a,	// (0x0006104e) input_focus_pane_cp07

0x6104,	// (0x0005a1c8) msg_header_pane_t1_ParamLimits

0x6104,	// (0x0005a1c8) msg_header_pane_t1

0xdadc,	// (0x00061ba0) msg_header_pane_t2_ParamLimits

0xdadc,	// (0x00061ba0) msg_header_pane_t2

0x0001,

0xf498,	// (0x0006355c) msg_header_pane_t_ParamLimits

0xf498,	// (0x0006355c) msg_header_pane_t

0xcf9f,	// (0x00061063) msg_body_pane_g1

0x6116,	// (0x0005a1da) msg_body_pane_t1_ParamLimits

0x6116,	// (0x0005a1da) msg_body_pane_t1

0xdaee,	// (0x00061bb2) msg_body_pane_t2_ParamLimits

0xdaee,	// (0x00061bb2) msg_body_pane_t2

0xdb00,	// (0x00061bc4) msg_body_pane_t3_ParamLimits

0xdb00,	// (0x00061bc4) msg_body_pane_t3

0x0002,

0xf49d,	// (0x00063561) msg_body_pane_t_ParamLimits

0xf49d,	// (0x00063561) msg_body_pane_t

0x6199,	// (0x0005a25d) main_viewer_pane_g1_ParamLimits

0x6199,	// (0x0005a25d) main_viewer_pane_g1

0x61a5,	// (0x0005a269) main_viewer_pane_g2_ParamLimits

0x61a5,	// (0x0005a269) main_viewer_pane_g2

0x61b1,	// (0x0005a275) main_viewer_pane_g3_ParamLimits

0x61b1,	// (0x0005a275) main_viewer_pane_g3

0x61c2,	// (0x0005a286) main_viewer_pane_g4_ParamLimits

0x61c2,	// (0x0005a286) main_viewer_pane_g4

0x61d3,	// (0x0005a297) main_viewer_pane_g5_ParamLimits

0x61d3,	// (0x0005a297) main_viewer_pane_g5

0x61d3,	// (0x0005a297) main_viewer_pane_g7_ParamLimits

0x61d3,	// (0x0005a297) main_viewer_pane_g7

0xc9cb,	// (0x00060a8f) main_viewer_pane_g8_ParamLimits

0xc9cb,	// (0x00060a8f) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x00063571) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x00063571) main_viewer_pane_g

0xcfa7,	// (0x0006106b) viewer_content_pane_ParamLimits

0xcfa7,	// (0x0006106b) viewer_content_pane

0x6211,	// (0x0005a2d5) main_postcard_pane_g1_ParamLimits

0x6211,	// (0x0005a2d5) main_postcard_pane_g1

0x621f,	// (0x0005a2e3) main_postcard_pane_g2_ParamLimits

0x621f,	// (0x0005a2e3) main_postcard_pane_g2

0x622d,	// (0x0005a2f1) main_postcard_pane_g3_ParamLimits

0x622d,	// (0x0005a2f1) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x00063582) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x00063582) main_postcard_pane_g

0x623d,	// (0x0005a301) main_postcard_pane_g4

0xe303,	// (0x000623c7) smil_status_volume_pane_g2

0x6269,	// (0x0005a32d) postcard_pane_ParamLimits

0x6269,	// (0x0005a32d) postcard_pane

0xcb2e,	// (0x00060bf2) postcard_pane_g1_ParamLimits

0xcb2e,	// (0x00060bf2) postcard_pane_g1

0x629b,	// (0x0005a35f) postcard_pane_g2_ParamLimits

0x629b,	// (0x0005a35f) postcard_pane_g2

0x62a7,	// (0x0005a36b) postcard_pane_g3_ParamLimits

0x62a7,	// (0x0005a36b) postcard_pane_g3

0xcfb5,	// (0x00061079) postcard_pane_g4_ParamLimits

0xcfb5,	// (0x00061079) postcard_pane_g4

0x62b3,	// (0x0005a377) postcard_pane_g5_ParamLimits

0x62b3,	// (0x0005a377) postcard_pane_g5

0x62bf,	// (0x0005a383) postcard_pane_g6_ParamLimits

0x62bf,	// (0x0005a383) postcard_pane_g6

0xcfc3,	// (0x00061087) postcard_pane_g7_ParamLimits

0xcfc3,	// (0x00061087) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0006358f) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0006358f) postcard_pane_g

0x62cb,	// (0x0005a38f) main_mp2_pane_g1_ParamLimits

0x62cb,	// (0x0005a38f) main_mp2_pane_g1

0x62d7,	// (0x0005a39b) main_mp2_pane_g2_ParamLimits

0x62d7,	// (0x0005a39b) main_mp2_pane_g2

0x62e3,	// (0x0005a3a7) main_mp2_pane_g3_ParamLimits

0x62e3,	// (0x0005a3a7) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0006359e) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0006359e) main_mp2_pane_g

0x62ef,	// (0x0005a3b3) main_mp2_pane_t1_ParamLimits

0x62ef,	// (0x0005a3b3) main_mp2_pane_t1

0x6306,	// (0x0005a3ca) main_mp2_pane_t2_ParamLimits

0x6306,	// (0x0005a3ca) main_mp2_pane_t2

0x631a,	// (0x0005a3de) main_mp2_pane_t3_ParamLimits

0x631a,	// (0x0005a3de) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000635a5) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000635a5) main_mp2_pane_t

0xcfd1,	// (0x00061095) pec_content_pane_ParamLimits

0xcfd1,	// (0x00061095) pec_content_pane

0xc65a,	// (0x0006071e) scroll_pane_cp015

0xcfe3,	// (0x000610a7) pec_attribute_pane_ParamLimits

0xcfe3,	// (0x000610a7) pec_attribute_pane

0x632c,	// (0x0005a3f0) pec_content_pane_g1_ParamLimits

0x632c,	// (0x0005a3f0) pec_content_pane_g1

0xcff3,	// (0x000610b7) pec_content_pane_t1_ParamLimits

0xcff3,	// (0x000610b7) pec_content_pane_t1

0xd005,	// (0x000610c9) pec_content_pane_t2_ParamLimits

0xd005,	// (0x000610c9) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000635ac) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000635ac) pec_content_pane_t

0x6338,	// (0x0005a3fc) list_single_graphic_pane_cp01_ParamLimits

0x6338,	// (0x0005a3fc) list_single_graphic_pane_cp01

0xc224,	// (0x000602e8) bg_popup_sub_pane_cp04

0xd017,	// (0x000610db) popup_mup_playback_window_g1

0xd023,	// (0x000610e7) popup_mup_playback_window_t1

0xd038,	// (0x000610fc) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000635b1) popup_mup_playback_window_t

0xd06f,	// (0x00061133) main_image_pane_g1_ParamLimits

0xd06f,	// (0x00061133) main_image_pane_g1

0xd0b2,	// (0x00061176) scroll_pane_cp018_ParamLimits

0xd0b2,	// (0x00061176) scroll_pane_cp018

0xd0ca,	// (0x0006118e) scroll_pane_cp016_ParamLimits

0xd0ca,	// (0x0006118e) scroll_pane_cp016

0x63d1,	// (0x0005a495) smil2_image_pane_ParamLimits

0x63d1,	// (0x0005a495) smil2_image_pane

0x6401,	// (0x0005a4c5) smil2_root_pane_ParamLimits

0x6401,	// (0x0005a4c5) smil2_root_pane

0x642d,	// (0x0005a4f1) smil2_text_pane_ParamLimits

0x642d,	// (0x0005a4f1) smil2_text_pane

0xbfc9,	// (0x0006008d) bg_list_pane_cp06

0xd106,	// (0x000611ca) grid_radio_pane

0xbfc9,	// (0x0006008d) bg_popup_window_pane_cp06

0xd10e,	// (0x000611d2) main_fmradio_pane_t1

0xcba5,	// (0x00060c69) heading_pane_cp04

0xd11c,	// (0x000611e0) main_fmradio_pane_t2

0xe139,	// (0x000621fd) popup_cale_lunar_info_window_g1

0xd12a,	// (0x000611ee) main_fmradio_pane_t3

0xe141,	// (0x00062205) popup_cale_lunar_info_window_g2

0xd138,	// (0x000611fc) main_fmradio_pane_t4

0x0001,

0xd146,	// (0x0006120a) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0006368c) popup_cale_lunar_info_window_g

0xf502,	// (0x000635c6) main_fmradio_pane_t

0xd154,	// (0x00061218) wait_bar_pane_cp03

0xd15c,	// (0x00061220) cell_fmradio_pane_ParamLimits

0xd15c,	// (0x00061220) cell_fmradio_pane

0xcfc3,	// (0x00061087) cell_fmradio_pane_g1_ParamLimits

0xcfc3,	// (0x00061087) cell_fmradio_pane_g1

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp011

0xd16f,	// (0x00061233) poc_content_pane_ParamLimits

0xd16f,	// (0x00061233) poc_content_pane

0xd181,	// (0x00061245) scroll_pane_cp019

0x646d,	// (0x0005a531) popup_call_poc_act_window_ParamLimits

0x646d,	// (0x0005a531) popup_call_poc_act_window

0x647a,	// (0x0005a53e) popup_call_poc_inact_window_ParamLimits

0x647a,	// (0x0005a53e) popup_call_poc_inact_window

0xf59f,	// (0x00063663) bg_popup_call_poc_act_pane_g

0xe0b1,	// (0x00062175) bg_popup_call_poc_inact_pane_g1

0xe0b9,	// (0x0006217d) bg_popup_call_poc_inact_pane_g2

0xd189,	// (0x0006124d) popup_call_poc_act_window_g2

0xe0c1,	// (0x00062185) bg_popup_call_poc_inact_pane_g3

0xe0c9,	// (0x0006218d) bg_popup_call_poc_inact_pane_g4

0xe0d1,	// (0x00062195) bg_popup_call_poc_inact_pane_g5

0xd191,	// (0x00061255) popup_call_poc_act_window_t1_ParamLimits

0xd191,	// (0x00061255) popup_call_poc_act_window_t1

0xd1b9,	// (0x0006127d) popup_call_poc_act_window_t2_ParamLimits

0xd1b9,	// (0x0006127d) popup_call_poc_act_window_t2

0xd1e1,	// (0x000612a5) popup_call_poc_act_window_t3_ParamLimits

0xd1e1,	// (0x000612a5) popup_call_poc_act_window_t3

0xd209,	// (0x000612cd) popup_call_poc_act_window_t4_ParamLimits

0xd209,	// (0x000612cd) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x000635d1) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x000635d1) popup_call_poc_act_window_t

0xe0d9,	// (0x0006219d) bg_popup_call_poc_inact_pane_g6

0xe0e1,	// (0x000621a5) bg_popup_call_poc_inact_pane_g7

0xe0e9,	// (0x000621ad) bg_popup_call_poc_inact_pane_g8

0xd21b,	// (0x000612df) popup_call_poc_inact_window_g2

0xe0f1,	// (0x000621b5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x00063650) bg_popup_call_poc_inact_pane_g

0xd223,	// (0x000612e7) popup_call_poc_inact_window_t1_ParamLimits

0xd223,	// (0x000612e7) popup_call_poc_inact_window_t1

0xd238,	// (0x000612fc) popup_call_poc_inact_window_t2_ParamLimits

0xd238,	// (0x000612fc) popup_call_poc_inact_window_t2

0xd24d,	// (0x00061311) popup_call_poc_inact_window_t3_ParamLimits

0xd24d,	// (0x00061311) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x000635da) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x000635da) popup_call_poc_inact_window_t

0xe276,	// (0x0006233a) context_pane_ParamLimits

0x6ab6,	// (0x0005ab7a) signal_pane_ParamLimits

0xce21,	// (0x00060ee5) main_call2_pane

0x6a2f,	// (0x0005aaf3) popup_phob_thumbnail2_window_ParamLimits

0x6a2f,	// (0x0005aaf3) popup_phob_thumbnail2_window

0x6147,	// (0x0005a20b) aid_hotspot_pointer_arrow_pane

0x614f,	// (0x0005a213) aid_hotspot_pointer_hand_pane

0x679c,	// (0x0005a860) phob_pre_status_pane_g5

0x40fc,	// (0x000581c0) cams_zoom_pane_ParamLimits

0x4108,	// (0x000581cc) image_vga_pane_ParamLimits

0x4117,	// (0x000581db) main_camera_pane_g1_ParamLimits

0x4125,	// (0x000581e9) main_camera_pane_g2_ParamLimits

0x4131,	// (0x000581f5) main_camera_pane_g3_ParamLimits

0x413d,	// (0x00058201) main_camera_pane_g4_ParamLimits

0x4149,	// (0x0005820d) main_camera_pane_g5_ParamLimits

0x4155,	// (0x00058219) main_camera_pane_g6_ParamLimits

0x4161,	// (0x00058225) main_camera_pane_g7_ParamLimits

0xf215,	// (0x000632d9) main_camera_pane_g_ParamLimits

0x416d,	// (0x00058231) main_camera_pane_t1_ParamLimits

0x417f,	// (0x00058243) main_camera_pane_t2_ParamLimits

0xf226,	// (0x000632ea) main_camera_pane_t_ParamLimits

0xc224,	// (0x000602e8) bg_popup_preview_window_pane_cp01_ParamLimits

0xc224,	// (0x000602e8) bg_popup_preview_window_pane_cp01

0xd262,	// (0x00061326) popup_phob_thumbnail2_window_g1_ParamLimits

0xd262,	// (0x00061326) popup_phob_thumbnail2_window_g1

0xbfc9,	// (0x0006008d) call2_cli_visual_pane

0x6496,	// (0x0005a55a) popup_call2_audio_conf_window_ParamLimits

0x6496,	// (0x0005a55a) popup_call2_audio_conf_window

0x64ab,	// (0x0005a56f) popup_call2_audio_first_window_ParamLimits

0x64ab,	// (0x0005a56f) popup_call2_audio_first_window

0x6549,	// (0x0005a60d) popup_call2_audio_in_window_ParamLimits

0x6549,	// (0x0005a60d) popup_call2_audio_in_window

0x658b,	// (0x0005a64f) popup_call2_audio_out_window_ParamLimits

0x658b,	// (0x0005a64f) popup_call2_audio_out_window

0x65ed,	// (0x0005a6b1) popup_call2_audio_second_window_ParamLimits

0x65ed,	// (0x0005a6b1) popup_call2_audio_second_window

0x664b,	// (0x0005a70f) popup_call2_audio_wait_window_ParamLimits

0x664b,	// (0x0005a70f) popup_call2_audio_wait_window

0xbfc9,	// (0x0006008d) bg_popup_call2_act_pane_cp03

0xc206,	// (0x000602ca) list_conf_pane_cp

0xd26e,	// (0x00061332) popup_call2_audio_conf_window_t1

0xcc02,	// (0x00060cc6) list_single_graphic_popup_conf2_pane_ParamLimits

0xcc02,	// (0x00060cc6) list_single_graphic_popup_conf2_pane

0xcc15,	// (0x00060cd9) list_highlight_pane_cp04

0xd27c,	// (0x00061340) list_single_graphic_popup_conf2_pane_g1

0xcc26,	// (0x00060cea) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x000635e1) list_single_graphic_popup_conf2_pane_g

0xd286,	// (0x0006134a) list_single_graphic_popup_conf2_pane_t1

0xd294,	// (0x00061358) bg_popup_call2_act_pane_cp01_ParamLimits

0xd294,	// (0x00061358) bg_popup_call2_act_pane_cp01

0xd31e,	// (0x000613e2) call_type_pane_cp05_ParamLimits

0xd31e,	// (0x000613e2) call_type_pane_cp05

0xd372,	// (0x00061436) popup_call2_audio_second_window_g1_ParamLimits

0xd372,	// (0x00061436) popup_call2_audio_second_window_g1

0xd3c6,	// (0x0006148a) popup_call2_audio_second_window_g2_ParamLimits

0xd3c6,	// (0x0006148a) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x000635e6) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x000635e6) popup_call2_audio_second_window_g

0xd42b,	// (0x000614ef) popup_call2_audio_second_window_t1_ParamLimits

0xd42b,	// (0x000614ef) popup_call2_audio_second_window_t1

0xd4e6,	// (0x000615aa) popup_call2_audio_second_window_t2_ParamLimits

0xd4e6,	// (0x000615aa) popup_call2_audio_second_window_t2

0xd539,	// (0x000615fd) popup_call2_audio_second_window_t3_ParamLimits

0xd539,	// (0x000615fd) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x000635ed) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x000635ed) popup_call2_audio_second_window_t

0xbfc9,	// (0x0006008d) bg_popup_call2_in_pane_cp02

0xbfd3,	// (0x00060097) call_type_pane_cp04

0xbfdb,	// (0x0006009f) popup_call2_audio_wait_window_g1

0xbfe3,	// (0x000600a7) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000631c6) popup_call2_audio_wait_window_g

0xbfeb,	// (0x000600af) popup_call2_audio_wait_window_t3

0xd62c,	// (0x000616f0) bg_popup_call2_act_pane_ParamLimits

0xd62c,	// (0x000616f0) bg_popup_call2_act_pane

0xd6ec,	// (0x000617b0) call_type_pane_cp03_ParamLimits

0xd6ec,	// (0x000617b0) call_type_pane_cp03

0xd750,	// (0x00061814) popup_call2_audio_first_window_g1_ParamLimits

0xd750,	// (0x00061814) popup_call2_audio_first_window_g1

0xd7c0,	// (0x00061884) popup_call2_audio_first_window_g2_ParamLimits

0xd7c0,	// (0x00061884) popup_call2_audio_first_window_g2

0xcb2e,	// (0x00060bf2) popup_call2_audio_first_window_g3_ParamLimits

0xcb2e,	// (0x00060bf2) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x000635f6) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x000635f6) popup_call2_audio_first_window_g

0xd89e,	// (0x00061962) popup_call2_audio_first_window_t1_ParamLimits

0xd89e,	// (0x00061962) popup_call2_audio_first_window_t1

0xd9a1,	// (0x00061a65) popup_call2_audio_first_window_t4_ParamLimits

0xd9a1,	// (0x00061a65) popup_call2_audio_first_window_t4

0xda84,	// (0x00061b48) popup_call2_audio_first_window_t5_ParamLimits

0xda84,	// (0x00061b48) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x00063601) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x00063601) popup_call2_audio_first_window_t

0xc21c,	// (0x000602e0) bg_popup_call2_act_pane_g1

0xe149,	// (0x0006220d) popup_cale_lunar_info_window_t1

0xe157,	// (0x0006221b) popup_cale_lunar_info_window_t2

0xe165,	// (0x00062229) popup_cale_lunar_info_window_t3

0xbfc9,	// (0x0006008d) bg_popup_call2_bubble_pane

0xdbdd,	// (0x00061ca1) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbdd,	// (0x00061ca1) bg_popup_call2_in_pane_cp01

0x1c45,	// (0x00055d09) call_type_pane_cp02

0xdc25,	// (0x00061ce9) popup_call2_audio_out_window_g1_ParamLimits

0xdc25,	// (0x00061ce9) popup_call2_audio_out_window_g1

0xdc51,	// (0x00061d15) popup_call2_audio_out_window_g2_ParamLimits

0xdc51,	// (0x00061d15) popup_call2_audio_out_window_g2

0xdc79,	// (0x00061d3d) popup_call2_audio_out_window_g3_ParamLimits

0xdc79,	// (0x00061d3d) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0006360a) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0006360a) popup_call2_audio_out_window_g

0xdcb4,	// (0x00061d78) popup_call2_audio_out_window_t1_ParamLimits

0xdcb4,	// (0x00061d78) popup_call2_audio_out_window_t1

0xdd13,	// (0x00061dd7) popup_call2_audio_out_window_t2_ParamLimits

0xdd13,	// (0x00061dd7) popup_call2_audio_out_window_t2

0xdd67,	// (0x00061e2b) popup_call2_audio_out_window_t3_ParamLimits

0xdd67,	// (0x00061e2b) popup_call2_audio_out_window_t3

0xdd7d,	// (0x00061e41) popup_call2_audio_out_window_t4_ParamLimits

0xdd7d,	// (0x00061e41) popup_call2_audio_out_window_t4

0xdd93,	// (0x00061e57) popup_call2_audio_out_window_t5_ParamLimits

0xdd93,	// (0x00061e57) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x00063613) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x00063613) popup_call2_audio_out_window_t

0xddf7,	// (0x00061ebb) bg_popup_call2_in_pane_ParamLimits

0xddf7,	// (0x00061ebb) bg_popup_call2_in_pane

0xde53,	// (0x00061f17) popup_call2_audio_in_window_g1_ParamLimits

0xde53,	// (0x00061f17) popup_call2_audio_in_window_g1

0xde8b,	// (0x00061f4f) popup_call2_audio_in_window_g2_ParamLimits

0xde8b,	// (0x00061f4f) popup_call2_audio_in_window_g2

0xdec3,	// (0x00061f87) popup_call2_audio_in_window_g3_ParamLimits

0xdec3,	// (0x00061f87) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x00063620) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x00063620) popup_call2_audio_in_window_g

0xdf1b,	// (0x00061fdf) popup_call2_audio_in_window_t1_ParamLimits

0xdf1b,	// (0x00061fdf) popup_call2_audio_in_window_t1

0xdf9b,	// (0x0006205f) popup_call2_audio_in_window_t2_ParamLimits

0xdf9b,	// (0x0006205f) popup_call2_audio_in_window_t2

0xe01b,	// (0x000620df) popup_call2_audio_in_window_t3_ParamLimits

0xe01b,	// (0x000620df) popup_call2_audio_in_window_t3

0xe035,	// (0x000620f9) popup_call2_audio_in_window_t4_ParamLimits

0xe035,	// (0x000620f9) popup_call2_audio_in_window_t4

0xe047,	// (0x0006210b) popup_call2_audio_in_window_t5_ParamLimits

0xe047,	// (0x0006210b) popup_call2_audio_in_window_t5

0xe05c,	// (0x00062120) popup_call2_audio_in_window_t6_ParamLimits

0xe05c,	// (0x00062120) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x00063629) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x00063629) popup_call2_audio_in_window_t

0xc21c,	// (0x000602e0) bg_popup_call2_in_pane_g1

0xe173,	// (0x00062237) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x00063691) popup_cale_lunar_info_window_t

0xc224,	// (0x000602e8) bg_popup_call2_rect_pane_ParamLimits

0xc224,	// (0x000602e8) bg_popup_call2_rect_pane

0xbfc9,	// (0x0006008d) call2_cli_visual_graphic_pane

0xbfc9,	// (0x0006008d) call2_cli_visual_text_pane

0x6b5c,	// (0x0005ac20) smil_status_volume_pane_g3

0x0002,

0xc33e,	// (0x00060402) call2_cli_visual_graphic_pane_g1

0xc33e,	// (0x00060402) call2_cli_visual_graphic_pane_g2

0xc33e,	// (0x00060402) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x00063636) call2_cli_visual_graphic_pane_g

0xe071,	// (0x00062135) bg_popup_call2_rect_pane_g1

0xc3ca,	// (0x0006048e) bg_popup_call2_rect_pane_g2

0xe079,	// (0x0006213d) bg_popup_call2_rect_pane_g3

0xe081,	// (0x00062145) bg_popup_call2_rect_pane_g4

0xe089,	// (0x0006214d) bg_popup_call2_rect_pane_g5

0xe091,	// (0x00062155) bg_popup_call2_rect_pane_g6

0xe099,	// (0x0006215d) bg_popup_call2_rect_pane_g7

0xe0a1,	// (0x00062165) bg_popup_call2_rect_pane_g8

0xe0a9,	// (0x0006216d) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0006363d) bg_popup_call2_rect_pane_g

0xe0b1,	// (0x00062175) bg_popup_call2_bubble_pane_g1

0xe0b9,	// (0x0006217d) bg_popup_call2_bubble_pane_g2

0xe0c1,	// (0x00062185) bg_popup_call2_bubble_pane_g3

0xe0c9,	// (0x0006218d) bg_popup_call2_bubble_pane_g4

0xe0d1,	// (0x00062195) bg_popup_call2_bubble_pane_g5

0xe0d9,	// (0x0006219d) bg_popup_call2_bubble_pane_g6

0xe0e1,	// (0x000621a5) bg_popup_call2_bubble_pane_g7

0xe0e9,	// (0x000621ad) bg_popup_call2_bubble_pane_g8

0xe0f1,	// (0x000621b5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x00063650) bg_popup_call2_bubble_pane_g

0x3b37,	// (0x00057bfb) aid_cale_week_size_cell_pane

0x4191,	// (0x00058255) aid_cams_cif_uncrop_pane_ParamLimits

0x4191,	// (0x00058255) aid_cams_cif_uncrop_pane

0x42ec,	// (0x000583b0) aid_cams_size_cell_ParamLimits

0x42ec,	// (0x000583b0) aid_cams_size_cell

0x42f8,	// (0x000583bc) grid_cams_pane_ParamLimits

0x4306,	// (0x000583ca) linegrid_cams_pane_ParamLimits

0x44d4,	// (0x00058598) call_video_pane_t1

0x44f5,	// (0x000585b9) call_video_pane_t2

0x0001,

0xf279,	// (0x0006333d) call_video_pane_t

0x4a3e,	// (0x00058b02) aid_cale_month_size_cell_pane_ParamLimits

0x4a3e,	// (0x00058b02) aid_cale_month_size_cell_pane

0xf616,	// (0x000636da) smil_status_volume_pane_g

0x6b69,	// (0x0005ac2d) volume_smil_pane_ParamLimits

0x3280,	// (0x00057344) aid_popup2_width_pane

0x3a2b,	// (0x00057aef) cell_qdial_pane_g4_ParamLimits

0x3a2b,	// (0x00057aef) cell_qdial_pane_g4

0x5a3a,	// (0x00059afe) aid_blid_cardinal_pane_ParamLimits

0x5a4a,	// (0x00059b0e) aid_blid_destination_pane_ParamLimits

0x5a4a,	// (0x00059b0e) aid_blid_destination_pane

0xc224,	// (0x000602e8) bg_popup_call_poc_act_pane_ParamLimits

0xc224,	// (0x000602e8) bg_popup_call_poc_act_pane

0xc224,	// (0x000602e8) bg_popup_call_poc_inact_pane_ParamLimits

0xc224,	// (0x000602e8) bg_popup_call_poc_inact_pane

0xe0f9,	// (0x000621bd) bg_popup_call_poc_act_pane_g1

0xe101,	// (0x000621c5) bg_popup_call_poc_act_pane_g2

0xe109,	// (0x000621cd) bg_popup_call_poc_act_pane_g3

0xe0c9,	// (0x0006218d) bg_popup_call_poc_act_pane_g4

0xe0d1,	// (0x00062195) bg_popup_call_poc_act_pane_g5

0xe111,	// (0x000621d5) bg_popup_call_poc_act_pane_g6

0xe0e1,	// (0x000621a5) bg_popup_call_poc_act_pane_g7

0xe119,	// (0x000621dd) bg_popup_call_poc_act_pane_g8

0xbfc9,	// (0x0006008d) main_usb_pane

0x695e,	// (0x0005aa22) popup_cale_lunar_info_window

0x4820,	// (0x000588e4) im_reading_pane_t1_ParamLimits

0xc5b2,	// (0x00060676) list_im_pane_ParamLimits

0xc5c3,	// (0x00060687) scroll_pane_cp07_ParamLimits

0xbfc9,	// (0x0006008d) grid_highlight_pane_cp012

0xc224,	// (0x000602e8) mup_scale_pane_ParamLimits

0xcb2e,	// (0x00060bf2) main_usb_pane_g1_ParamLimits

0xcb2e,	// (0x00060bf2) main_usb_pane_g1

0x66bf,	// (0x0005a783) main_usb_pane_g2_ParamLimits

0x66bf,	// (0x0005a783) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0006367a) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0006367a) main_usb_pane_g

0x66cb,	// (0x0005a78f) main_usb_pane_t1_ParamLimits

0x66cb,	// (0x0005a78f) main_usb_pane_t1

0x66dd,	// (0x0005a7a1) main_usb_pane_t2_ParamLimits

0x66dd,	// (0x0005a7a1) main_usb_pane_t2

0x66ef,	// (0x0005a7b3) main_usb_pane_t3_ParamLimits

0x66ef,	// (0x0005a7b3) main_usb_pane_t3

0x6701,	// (0x0005a7c5) main_usb_pane_t4_ParamLimits

0x6701,	// (0x0005a7c5) main_usb_pane_t4

0x6713,	// (0x0005a7d7) main_usb_pane_t5_ParamLimits

0x6713,	// (0x0005a7d7) main_usb_pane_t5

0x6725,	// (0x0005a7e9) main_usb_pane_t6_ParamLimits

0x6725,	// (0x0005a7e9) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0006367f) main_usb_pane_t_ParamLimits

0x59e0,	// (0x00059aa4) aid_text_placing

0x59ec,	// (0x00059ab0) main_location2_pane_t1_ParamLimits

0x5a00,	// (0x00059ac4) main_location2_pane_t2_ParamLimits

0x5a14,	// (0x00059ad8) main_location2_pane_t3_ParamLimits

0x5a28,	// (0x00059aec) main_location2_pane_t4_ParamLimits

0x5a28,	// (0x00059aec) main_location2_pane_t4

0xf3da,	// (0x0006349e) main_location2_pane_t_ParamLimits

0xc260,	// (0x00060324) find_pinb_pane_g2_ParamLimits

0xc260,	// (0x00060324) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000631ec) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000631ec) find_pinb_pane_g

0xc26c,	// (0x00060330) find_pinb_pane_t1_ParamLimits

0xc27e,	// (0x00060342) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000631f1) find_pinb_pane_t_ParamLimits

0xbfc9,	// (0x0006008d) main_call3_pane

0x4f92,	// (0x00059056) cale_month_day_heading_pane_t1_ParamLimits

0x5018,	// (0x000590dc) cale_month_day_heading_pane_t2_ParamLimits

0x50a9,	// (0x0005916d) cale_month_day_heading_pane_t3_ParamLimits

0x513a,	// (0x000591fe) cale_month_day_heading_pane_t4_ParamLimits

0x51cb,	// (0x0005928f) cale_month_day_heading_pane_t5_ParamLimits

0x525c,	// (0x00059320) cale_month_day_heading_pane_t6_ParamLimits

0x52ed,	// (0x000593b1) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x00063375) cale_month_day_heading_pane_t_ParamLimits

0xc80d,	// (0x000608d1) smil_status_volume_pane

0x6283,	// (0x0005a347) postcard_address_pane_ParamLimits

0x6283,	// (0x0005a347) postcard_address_pane

0x628f,	// (0x0005a353) postcard_message_pane_ParamLimits

0x628f,	// (0x0005a353) postcard_message_pane

0x668a,	// (0x0005a74e) call2_cli_visual_pane_t1_ParamLimits

0x668a,	// (0x0005a74e) call2_cli_visual_pane_t1

0x6cc0,	// (0x0005ad84) postcard_message_pane_t1_ParamLimits

0x6cc0,	// (0x0005ad84) postcard_message_pane_t1

0x6ca9,	// (0x0005ad6d) postcard_address_pane_t1_ParamLimits

0x6ca9,	// (0x0005ad6d) postcard_address_pane_t1

0x6c9a,	// (0x0005ad5e) popup_call3_audio_in_window_ParamLimits

0x6c9a,	// (0x0005ad5e) popup_call3_audio_in_window

0x6b7e,	// (0x0005ac42) bg_popup_call3_in_pane_ParamLimits

0x6b7e,	// (0x0005ac42) bg_popup_call3_in_pane

0x6be0,	// (0x0005aca4) popup_call3_audio_in_window_g1_ParamLimits

0x6be0,	// (0x0005aca4) popup_call3_audio_in_window_g1

0x6bf8,	// (0x0005acbc) popup_call3_audio_in_window_g2_ParamLimits

0x6bf8,	// (0x0005acbc) popup_call3_audio_in_window_g2

0x6c10,	// (0x0005acd4) popup_call3_audio_in_window_g3_ParamLimits

0x6c10,	// (0x0005acd4) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x000636e1) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x000636e1) popup_call3_audio_in_window_g

0x6c38,	// (0x0005acfc) popup_call3_audio_in_window_t1_ParamLimits

0x6c38,	// (0x0005acfc) popup_call3_audio_in_window_t1

0x6c60,	// (0x0005ad24) popup_call3_audio_in_window_t2_ParamLimits

0x6c60,	// (0x0005ad24) popup_call3_audio_in_window_t2

0x6c88,	// (0x0005ad4c) popup_call3_audio_in_window_t3_ParamLimits

0x6c88,	// (0x0005ad4c) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x000636ea) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x000636ea) popup_call3_audio_in_window_t

0xce21,	// (0x00060ee5) bg_popup_call3_rect_pane

0xe071,	// (0x00062135) bg_popup_call3_rect_pane_g1

0xc3ca,	// (0x0006048e) bg_popup_call3_rect_pane_g2

0xe079,	// (0x0006213d) bg_popup_call3_rect_pane_g3

0xe081,	// (0x00062145) bg_popup_call3_rect_pane_g4

0xe089,	// (0x0006214d) bg_popup_call3_rect_pane_g5

0xe091,	// (0x00062155) bg_popup_call3_rect_pane_g6

0xe099,	// (0x0006215d) bg_popup_call3_rect_pane_g7

0x5e58,	// (0x00059f1c) mup_visualizer_osc_pane

0xcee0,	// (0x00060fa4) mup_visualizer_spec_pane

0x6b9e,	// (0x0005ac62) call3_video_qcif_pane_ParamLimits

0x6b9e,	// (0x0005ac62) call3_video_qcif_pane

0x6bb0,	// (0x0005ac74) call3_video_qcif_uncrop_pane_ParamLimits

0x6bb0,	// (0x0005ac74) call3_video_qcif_uncrop_pane

0x6bbe,	// (0x0005ac82) call3_video_subqcif_pane_ParamLimits

0x6bbe,	// (0x0005ac82) call3_video_subqcif_pane

0x6bd0,	// (0x0005ac94) call3_video_subqcif_uncrop_pane_ParamLimits

0x6bd0,	// (0x0005ac94) call3_video_subqcif_uncrop_pane

0x6c28,	// (0x0005acec) popup_call3_audio_in_window_g4_ParamLimits

0x6c28,	// (0x0005acec) popup_call3_audio_in_window_g4

0x6b4b,	// (0x0005ac0f) mup_spec_half_pane

0x6b54,	// (0x0005ac18) mup_spec_half_pane_cp

0xe2d6,	// (0x0006239a) mup_osc_middle_pane

0xe2df,	// (0x000623a3) mup_visualizer_osc_pane_g1

0x6b2c,	// (0x0005abf0) mup_spec_bar_pane_ParamLimits

0x6b2c,	// (0x0005abf0) mup_spec_bar_pane

0xe2c3,	// (0x00062387) mup_spec_bar_pane_g1

0xe2cd,	// (0x00062391) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000636d5) mup_spec_bar_pane_g

0x3b37,	// (0x00057bfb) aid_cale_week_size_cell_pane_ParamLimits

0x3b4c,	// (0x00057c10) bg_cale_heading_pane_ParamLimits

0xc407,	// (0x000604cb) bg_cale_pane_cp01_ParamLimits

0x3b6e,	// (0x00057c32) cale_week_corner_pane_ParamLimits

0x3b88,	// (0x00057c4c) cale_week_day_heading_pane_ParamLimits

0x3baa,	// (0x00057c6e) cale_week_scroll_pane_g1_ParamLimits

0x3bc7,	// (0x00057c8b) cale_week_scroll_pane_g2_ParamLimits

0x3bda,	// (0x00057c9e) cale_week_scroll_pane_g3_ParamLimits

0x3bed,	// (0x00057cb1) cale_week_scroll_pane_g4_ParamLimits

0x3c00,	// (0x00057cc4) cale_week_scroll_pane_g5_ParamLimits

0x3c13,	// (0x00057cd7) cale_week_scroll_pane_g6_ParamLimits

0x3c26,	// (0x00057cea) cale_week_scroll_pane_g7_ParamLimits

0x3c39,	// (0x00057cfd) cale_week_scroll_pane_g8_ParamLimits

0x3c4e,	// (0x00057d12) cale_week_scroll_pane_g9_ParamLimits

0x3c61,	// (0x00057d25) cale_week_scroll_pane_g10_ParamLimits

0x3c74,	// (0x00057d38) cale_week_scroll_pane_g11_ParamLimits

0x3c87,	// (0x00057d4b) cale_week_scroll_pane_g12_ParamLimits

0x3c9e,	// (0x00057d62) cale_week_scroll_pane_g13_ParamLimits

0x3cb9,	// (0x00057d7d) cale_week_scroll_pane_g14_ParamLimits

0x3cd4,	// (0x00057d98) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0006327d) cale_week_scroll_pane_g_ParamLimits

0x3cef,	// (0x00057db3) cale_week_time_pane_ParamLimits

0x3d04,	// (0x00057dc8) grid_cale_week_pane_ParamLimits

0xc425,	// (0x000604e9) listscroll_cale_week_pane_t1

0xc437,	// (0x000604fb) scroll_pane_cp08_ParamLimits

0x4aa7,	// (0x00058b6b) cale_month_corner_pane_ParamLimits

0xc7e3,	// (0x000608a7) cale_month_pane_t1

0x4f2f,	// (0x00058ff3) cale_month_week_pane_ParamLimits

0xcb2e,	// (0x00060bf2) popup_call_status_window_g1_ParamLimits

0x5813,	// (0x000598d7) popup_call_status_window_g2_ParamLimits

0x581f,	// (0x000598e3) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x00063425) popup_call_status_window_g_ParamLimits

0xcb95,	// (0x00060c59) aid_call2_pane

0x60f8,	// (0x0005a1bc) msg_header_pane_g1

0x6283,	// (0x0005a347) postcard_address2_pane_ParamLimits

0x6283,	// (0x0005a347) postcard_address2_pane

0x628f,	// (0x0005a353) postcard_message2_pane_ParamLimits

0x628f,	// (0x0005a353) postcard_message2_pane

0x6ac4,	// (0x0005ab88) message2_row_pane_ParamLimits

0x6ac4,	// (0x0005ab88) message2_row_pane

0x6adf,	// (0x0005aba3) address2_row_pane_ParamLimits

0x6adf,	// (0x0005aba3) address2_row_pane

0xe291,	// (0x00062355) postcard_message2_row_pane_g1

0xe299,	// (0x0006235d) postcard_message2_row_pane_t1

0xe291,	// (0x00062355) address2_row_pane_g1

0xe299,	// (0x0006235d) address2_row_pane_t1

0x405b,	// (0x0005811f) aid_size_cell_vorec

0xbfc9,	// (0x0006008d) main_rss_pane

0x6af2,	// (0x0005abb6) rss_list_single_pane_ParamLimits

0x6af2,	// (0x0005abb6) rss_list_single_pane

0xe2a7,	// (0x0006236b) rss_list_single_pane_t1

0xe2b5,	// (0x00062379) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x000636d0) rss_list_single_pane_t

0xbfc9,	// (0x0006008d) main_camera2_pane

0xbfc9,	// (0x0006008d) main_video2_pane

0x6d24,	// (0x0005ade8) cams_zoom_pane_cp2_ParamLimits

0x6d24,	// (0x0005ade8) cams_zoom_pane_cp2

0x6d30,	// (0x0005adf4) image2_vga_pane_ParamLimits

0x6d30,	// (0x0005adf4) image2_vga_pane

0x6d3f,	// (0x0005ae03) main_camera2_pane_g1_ParamLimits

0x6d3f,	// (0x0005ae03) main_camera2_pane_g1

0x6d4b,	// (0x0005ae0f) main_camera2_pane_g2_ParamLimits

0x6d4b,	// (0x0005ae0f) main_camera2_pane_g2

0x6d57,	// (0x0005ae1b) main_camera2_pane_g3_ParamLimits

0x6d57,	// (0x0005ae1b) main_camera2_pane_g3

0x6d63,	// (0x0005ae27) main_camera2_pane_g4_ParamLimits

0x6d63,	// (0x0005ae27) main_camera2_pane_g4

0x6d6f,	// (0x0005ae33) main_camera2_pane_g5_ParamLimits

0x6d6f,	// (0x0005ae33) main_camera2_pane_g5

0x6d7b,	// (0x0005ae3f) main_camera2_pane_g6_ParamLimits

0x6d7b,	// (0x0005ae3f) main_camera2_pane_g6

0x6d87,	// (0x0005ae4b) main_camera2_pane_g7_ParamLimits

0x6d87,	// (0x0005ae4b) main_camera2_pane_g7

0x6d93,	// (0x0005ae57) main_camera2_pane_g8_ParamLimits

0x6d93,	// (0x0005ae57) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x000636f1) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x000636f1) main_camera2_pane_g

0x6dab,	// (0x0005ae6f) main_camera2_pane_t1_ParamLimits

0x6dab,	// (0x0005ae6f) main_camera2_pane_t1

0x6dbd,	// (0x0005ae81) main_camera2_pane_t2_ParamLimits

0x6dbd,	// (0x0005ae81) main_camera2_pane_t2

0x6dcf,	// (0x0005ae93) main_camera2_pane_t3_ParamLimits

0x6dcf,	// (0x0005ae93) main_camera2_pane_t3

0x6de1,	// (0x0005aea5) main_camera2_pane_t4_ParamLimits

0x6de1,	// (0x0005aea5) main_camera2_pane_t4

0x0006,

0xf640,	// (0x00063704) main_camera2_pane_t_ParamLimits

0xf640,	// (0x00063704) main_camera2_pane_t

0x6e43,	// (0x0005af07) cams_zoom_pane_cp4_ParamLimits

0x6e43,	// (0x0005af07) cams_zoom_pane_cp4

0x6e53,	// (0x0005af17) image2_cif_pane_ParamLimits

0x6e53,	// (0x0005af17) image2_cif_pane

0x6e68,	// (0x0005af2c) image2_subqcif_pane_ParamLimits

0x6e68,	// (0x0005af2c) image2_subqcif_pane

0x6e77,	// (0x0005af3b) main_video2_pane_g1_ParamLimits

0x6e77,	// (0x0005af3b) main_video2_pane_g1

0x6e89,	// (0x0005af4d) main_video2_pane_g2_ParamLimits

0x6e89,	// (0x0005af4d) main_video2_pane_g2

0x6e99,	// (0x0005af5d) main_video2_pane_g3_ParamLimits

0x6e99,	// (0x0005af5d) main_video2_pane_g3

0x6ea9,	// (0x0005af6d) main_video2_pane_g4_ParamLimits

0x6ea9,	// (0x0005af6d) main_video2_pane_g4

0x6eb9,	// (0x0005af7d) main_video2_pane_g5_ParamLimits

0x6eb9,	// (0x0005af7d) main_video2_pane_g5

0x6ec9,	// (0x0005af8d) main_video2_pane_g6_ParamLimits

0x6ec9,	// (0x0005af8d) main_video2_pane_g6

0x0005,

0xf64f,	// (0x00063713) main_video2_pane_g_ParamLimits

0xf64f,	// (0x00063713) main_video2_pane_g

0x6edb,	// (0x0005af9f) main_video2_pane_t1_ParamLimits

0x6edb,	// (0x0005af9f) main_video2_pane_t1

0x6ef5,	// (0x0005afb9) main_video2_pane_t2_ParamLimits

0x6ef5,	// (0x0005afb9) main_video2_pane_t2

0x6f1b,	// (0x0005afdf) main_video2_pane_t3_ParamLimits

0x6f1b,	// (0x0005afdf) main_video2_pane_t3

0x0002,

0xf65c,	// (0x00063720) main_video2_pane_t_ParamLimits

0xf65c,	// (0x00063720) main_video2_pane_t

0x67dc,	// (0x0005a8a0) call_muted_g2

0x0001,

0xf5fe,	// (0x000636c2) call_muted_g

0xbfc9,	// (0x0006008d) main_mup2_pane

0xe316,	// (0x000623da) main_mup2_pane_g1_ParamLimits

0xe316,	// (0x000623da) main_mup2_pane_g1

0x6f41,	// (0x0005b005) main_mup2_pane_g2_ParamLimits

0x6f41,	// (0x0005b005) main_mup2_pane_g2

0x71c3,	// (0x0005b287) main_mup_pane_g13_cp1

0x71cb,	// (0x0005b28f) mup_volume_pane_cp1

0x6f61,	// (0x0005b025) main_mup2_pane_g4_ParamLimits

0x6f61,	// (0x0005b025) main_mup2_pane_g4

0x6f76,	// (0x0005b03a) main_mup2_pane_g5_ParamLimits

0x6f76,	// (0x0005b03a) main_mup2_pane_g5

0x6f8b,	// (0x0005b04f) main_mup2_pane_g6_ParamLimits

0x6f8b,	// (0x0005b04f) main_mup2_pane_g6

0x6fa0,	// (0x0005b064) main_mup2_pane_g7_ParamLimits

0x6fa0,	// (0x0005b064) main_mup2_pane_g7

0x0006,

0xf663,	// (0x00063727) main_mup2_pane_g_ParamLimits

0xf663,	// (0x00063727) main_mup2_pane_g

0x6fbc,	// (0x0005b080) main_mup2_pane_t1_ParamLimits

0x6fbc,	// (0x0005b080) main_mup2_pane_t1

0x6fd3,	// (0x0005b097) main_mup2_pane_t2_ParamLimits

0x6fd3,	// (0x0005b097) main_mup2_pane_t2

0x6fea,	// (0x0005b0ae) main_mup2_pane_t3_ParamLimits

0x6fea,	// (0x0005b0ae) main_mup2_pane_t3

0x7001,	// (0x0005b0c5) main_mup2_pane_t4_ParamLimits

0x7001,	// (0x0005b0c5) main_mup2_pane_t4

0x701b,	// (0x0005b0df) main_mup2_pane_t5_ParamLimits

0x701b,	// (0x0005b0df) main_mup2_pane_t5

0x7035,	// (0x0005b0f9) main_mup2_pane_t6_ParamLimits

0x7035,	// (0x0005b0f9) main_mup2_pane_t6

0x0005,

0xf672,	// (0x00063736) main_mup2_pane_t_ParamLimits

0xf672,	// (0x00063736) main_mup2_pane_t

0x706d,	// (0x0005b131) mup2_visualizer_pane_ParamLimits

0x706d,	// (0x0005b131) mup2_visualizer_pane

0x70a3,	// (0x0005b167) mup_progress_pane_cp_ParamLimits

0x70a3,	// (0x0005b167) mup_progress_pane_cp

0x71ae,	// (0x0005b272) mup_volume_pane_cp_ParamLimits

0x71ae,	// (0x0005b272) mup_volume_pane_cp

0x70ba,	// (0x0005b17e) mup2_visualizer_pane_g1_ParamLimits

0x70ba,	// (0x0005b17e) mup2_visualizer_pane_g1

0xe322,	// (0x000623e6) mup2_visualizer_pane_g2_ParamLimits

0xe322,	// (0x000623e6) mup2_visualizer_pane_g2

0x70cf,	// (0x0005b193) mup2_visualizer_pane_g3_ParamLimits

0x70cf,	// (0x0005b193) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x00063743) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x00063743) mup2_visualizer_pane_g

0xd0fe,	// (0x000611c2) aid_size_cell_fmradio

0x68f2,	// (0x0005a9b6) aid_height_parent_landcape

0xc641,	// (0x00060705) wml_content_pane_cp

0xc649,	// (0x0006070d) wml_tabs_pane

0xc652,	// (0x00060716) popup_wml_miniature_window

0xc65a,	// (0x0006071e) scroll_pane_cp021

0xc66e,	// (0x00060732) wml_content_pane_comp8

0xbfc9,	// (0x0006008d) bg_popup_sub_pane_cp05

0xe340,	// (0x00062404) popup_wml_miniature_window_g1

0xe348,	// (0x0006240c) wml_miniature_view_pane

0x70dd,	// (0x0005b1a1) aid_size_wml_view

0x70e5,	// (0x0005b1a9) wml_miniature_view_pane_g1

0x70ee,	// (0x0005b1b2) wml_miniature_view_pane_g2

0x70f7,	// (0x0005b1bb) wml_miniature_view_pane_g3

0x70ff,	// (0x0005b1c3) wml_miniature_view_pane_g4

0x7107,	// (0x0005b1cb) wml_miniature_view_pane_g5

0x710f,	// (0x0005b1d3) wml_miniature_view_pane_g6

0x7117,	// (0x0005b1db) wml_miniature_view_pane_g7

0x711f,	// (0x0005b1e3) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0006374a) wml_miniature_view_pane_g

0xe316,	// (0x000623da) background_graphic_ParamLimits

0xe316,	// (0x000623da) background_graphic

0xe350,	// (0x00062414) wml_tabs_2_pane

0xe362,	// (0x00062426) wml_tabs_3_pane_ParamLimits

0xe362,	// (0x00062426) wml_tabs_3_pane

0xe374,	// (0x00062438) wml_tabs_4_pane_ParamLimits

0xe374,	// (0x00062438) wml_tabs_4_pane

0xe38a,	// (0x0006244e) wml_tabs_5_pane_ParamLimits

0xe38a,	// (0x0006244e) wml_tabs_5_pane

0xe3a4,	// (0x00062468) wml_tabs_pane_g2_ParamLimits

0xe3a4,	// (0x00062468) wml_tabs_pane_g2

0xe3b8,	// (0x0006247c) wml_tabs_pane_g3_ParamLimits

0xe3b8,	// (0x0006247c) wml_tabs_pane_g3

0x7127,	// (0x0005b1eb) wml_tabs_2_active_pane_ParamLimits

0x7127,	// (0x0005b1eb) wml_tabs_2_active_pane

0x7137,	// (0x0005b1fb) wml_tabs_2_passive_pane_ParamLimits

0x7137,	// (0x0005b1fb) wml_tabs_2_passive_pane

0x7147,	// (0x0005b20b) wml_tabs_3_active_pane_cp_ParamLimits

0x7147,	// (0x0005b20b) wml_tabs_3_active_pane_cp

0x7158,	// (0x0005b21c) wml_tabs_3_passive_pane_ParamLimits

0x7158,	// (0x0005b21c) wml_tabs_3_passive_pane

0x7169,	// (0x0005b22d) wml_tabs_3_passive_pane_cp_ParamLimits

0x7169,	// (0x0005b22d) wml_tabs_3_passive_pane_cp

0x717a,	// (0x0005b23e) tabs_4_active_pane

0x7182,	// (0x0005b246) tabs_4_passive_pane

0x718a,	// (0x0005b24e) tabs_4_passive_pane_cp

0x7192,	// (0x0005b256) tabs_4_passive_pane_cp2

0x66b7,	// (0x0005a77b) aid_height_text

0x5e25,	// (0x00059ee9) mup_volume_cont_pane_ParamLimits

0x5e25,	// (0x00059ee9) mup_volume_cont_pane

0x3667,	// (0x0005772b) aid_size_cell_pinb

0x3671,	// (0x00057735) aid_size_list_pinb

0x708c,	// (0x0005b150) mup2_volume_cont_pane_ParamLimits

0x708c,	// (0x0005b150) mup2_volume_cont_pane

0x719a,	// (0x0005b25e) mup2_volume_cont_pane_g1_ParamLimits

0x719a,	// (0x0005b25e) mup2_volume_cont_pane_g1

0x328c,	// (0x00057350) aid_size_cell_touch_ParamLimits

0x328c,	// (0x00057350) aid_size_cell_touch

0x354d,	// (0x00057611) touch_pane_ParamLimits

0x354d,	// (0x00057611) touch_pane

0x3543,	// (0x00057607) main_rss2_pane

0xe3d5,	// (0x00062499) listscroll_rss2_pane

0xe3de,	// (0x000624a2) rss2_navigation_pane

0xe3e6,	// (0x000624aa) list_rss2_pane

0xccd8,	// (0x00060d9c) scroll_pane_cp22

0xe3ee,	// (0x000624b2) rss2_navigation_pane_g1

0xe3f7,	// (0x000624bb) rss2_navigation_pane_g2

0xe3ff,	// (0x000624c3) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0006375b) rss2_navigation_pane_g

0xe407,	// (0x000624cb) rss2_navigation_pane_t1

0x71d3,	// (0x0005b297) rss2_list_single_pane_ParamLimits

0x71d3,	// (0x0005b297) rss2_list_single_pane

0xe415,	// (0x000624d9) rss2_list_single_pane_t2

0xe423,	// (0x000624e7) rss2_list_single_pane_t3_ParamLimits

0xe423,	// (0x000624e7) rss2_list_single_pane_t3

0xe440,	// (0x00062504) rss2_list_single_pane_t4

0x55bf,	// (0x00059683) smil_status_pane_g1

0x6909,	// (0x0005a9cd) main_image2_pane_ParamLimits

0x6909,	// (0x0005a9cd) main_image2_pane

0x6d9f,	// (0x0005ae63) main_camera2_pane_g9_ParamLimits

0x6d9f,	// (0x0005ae63) main_camera2_pane_g9

0x6df3,	// (0x0005aeb7) main_camera2_pane_t5_ParamLimits

0x6df3,	// (0x0005aeb7) main_camera2_pane_t5

0x6e05,	// (0x0005aec9) main_camera2_pane_t6_ParamLimits

0x6e05,	// (0x0005aec9) main_camera2_pane_t6

0x7204,	// (0x0005b2c8) main_image2_pane_g1_ParamLimits

0x7204,	// (0x0005b2c8) main_image2_pane_g1

0x6457,	// (0x0005a51b) smil2_video_pane_ParamLimits

0x6457,	// (0x0005a51b) smil2_video_pane

0x319d,	// (0x00057261) aid_zoom_text_primary_cp

0x34de,	// (0x000575a2) popup_preview_fixed_window

0xc5aa,	// (0x0006066e) im_reading_pane_g1

0x6ce9,	// (0x0005adad) cams2_bc_adjust_pane_cp_ParamLimits

0x6ce9,	// (0x0005adad) cams2_bc_adjust_pane_cp

0x6e35,	// (0x0005aef9) cams2_bc_adjust_pane_ParamLimits

0x6e35,	// (0x0005aef9) cams2_bc_adjust_pane

0x0ac5,	// (0x00054b89) cams2_bc_adjust_pane_g1

0x7210,	// (0x0005b2d4) cams2_slider_pane

0x7219,	// (0x0005b2dd) cams2_slider_pane_g1

0x7222,	// (0x0005b2e6) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x00063762) cams2_slider_pane_g

0x3777,	// (0x0005783b) calc_display_pane_ParamLimits

0x3795,	// (0x00057859) calc_paper_pane_ParamLimits

0x37b1,	// (0x00057875) grid_calc_pane_ParamLimits

0x5881,	// (0x00059945) popup_clock_digital_window_t1_ParamLimits

0xd09b,	// (0x0006115f) main_image_pane_t1

0x375d,	// (0x00057821) aid_size_cell_calc_ParamLimits

0x375d,	// (0x00057821) aid_size_cell_calc

0x693a,	// (0x0005a9fe) popup_blid_sat_info2_window_ParamLimits

0x693a,	// (0x0005a9fe) popup_blid_sat_info2_window

0xe456,	// (0x0006251a) aid_size_cell_blid

0xe45e,	// (0x00062522) bg_popup_window_pane_cp07

0xe481,	// (0x00062545) grid_popup_blid_pane

0xe48b,	// (0x0006254f) heading_pane_cp05_ParamLimits

0xe48b,	// (0x0006254f) heading_pane_cp05

0xe555,	// (0x00062619) cell_popup_blid_pane_ParamLimits

0xe555,	// (0x00062619) cell_popup_blid_pane

0xe579,	// (0x0006263d) cell_popup_blid_pane_g1

0xe581,	// (0x00062645) cell_popup_blid_pane_t1

0x7052,	// (0x0005b116) mup2_indicator_pane_ParamLimits

0x7052,	// (0x0005b116) mup2_indicator_pane

0xce21,	// (0x00060ee5) mup2_visualizer_osc_pane

0xe32e,	// (0x000623f2) mup2_visualizer_spec_pane_ParamLimits

0xe32e,	// (0x000623f2) mup2_visualizer_spec_pane

0x723c,	// (0x0005b300) mup2_spec_half_pane

0x7245,	// (0x0005b309) mup2_spec_half_pane_cp

0x724f,	// (0x0005b313) mup2_spec_bar_pane_ParamLimits

0x724f,	// (0x0005b313) mup2_spec_bar_pane

0xe2c3,	// (0x00062387) mup2_spec_bar_pane_g1

0xe2cd,	// (0x00062391) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000636d5) mup2_spec_bar_pane_g

0x726e,	// (0x0005b332) mup2_osc_middle_pane

0xe2df,	// (0x000623a3) mup2_visualizer_osc_pane_g1

0x1b76,	// (0x00055c3a) popup_number_entry_window_t1_ParamLimits

0x1b89,	// (0x00055c4d) popup_number_entry_window_t2_ParamLimits

0x1b9b,	// (0x00055c5f) popup_number_entry_window_t3_ParamLimits

0x35a4,	// (0x00057668) popup_number_entry_window_t5_ParamLimits

0x35a4,	// (0x00057668) popup_number_entry_window_t5

0xf0d3,	// (0x00063197) popup_number_entry_window_t_ParamLimits

0x1bad,	// (0x00055c71) text_title_cp2_ParamLimits

0x6157,	// (0x0005a21b) aid_hotspot_pointer_text2_pane

0x61e5,	// (0x0005a2a9) main_viewer_pane_g9_ParamLimits

0x61e5,	// (0x0005a2a9) main_viewer_pane_g9

0xc7e3,	// (0x000608a7) cale_month_pane_t1_ParamLimits

0xc820,	// (0x000608e4) bg_cale_pane_ParamLimits

0xc838,	// (0x000608fc) list_cale_pane_ParamLimits

0xc849,	// (0x0006090d) listscroll_cale_day_pane_t1

0xc85b,	// (0x0006091f) scroll_pane_cp09_ParamLimits

0x5e60,	// (0x00059f24) main_mup_eq_pane_t1_ParamLimits

0x5e60,	// (0x00059f24) main_mup_eq_pane_t1

0x5e7a,	// (0x00059f3e) main_mup_eq_pane_t2_ParamLimits

0x5e7a,	// (0x00059f3e) main_mup_eq_pane_t2

0x5e94,	// (0x00059f58) main_mup_eq_pane_t3_ParamLimits

0x5e94,	// (0x00059f58) main_mup_eq_pane_t3

0x5eac,	// (0x00059f70) main_mup_eq_pane_t4_ParamLimits

0x5eac,	// (0x00059f70) main_mup_eq_pane_t4

0x5ec4,	// (0x00059f88) main_mup_eq_pane_t5_ParamLimits

0x5ec4,	// (0x00059f88) main_mup_eq_pane_t5

0x5edc,	// (0x00059fa0) main_mup_eq_pane_t6_ParamLimits

0x5edc,	// (0x00059fa0) main_mup_eq_pane_t6

0x5ef0,	// (0x00059fb4) main_mup_eq_pane_t7_ParamLimits

0x5ef0,	// (0x00059fb4) main_mup_eq_pane_t7

0x5f04,	// (0x00059fc8) main_mup_eq_pane_t8_ParamLimits

0x5f04,	// (0x00059fc8) main_mup_eq_pane_t8

0x5f1a,	// (0x00059fde) main_mup_eq_pane_t9_ParamLimits

0x5f1a,	// (0x00059fde) main_mup_eq_pane_t9

0x5f32,	// (0x00059ff6) main_mup_eq_pane_t10_ParamLimits

0x5f32,	// (0x00059ff6) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x00063524) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x00063524) main_mup_eq_pane_t

0x5fef,	// (0x0005a0b3) mup_equalizer_pane_cp5_ParamLimits

0x6005,	// (0x0005a0c9) mup_equalizer_pane_cp6_ParamLimits

0x601d,	// (0x0005a0e1) mup_equalizer_pane_cp7_ParamLimits

0x3543,	// (0x00057607) main_gallery_pane

0xe2e8,	// (0x000623ac) smil2_volume_pane

0xe2f0,	// (0x000623b4) smil_status_volume_pane_g1_ParamLimits

0xe303,	// (0x000623c7) smil_status_volume_pane_g2_ParamLimits

0x6b5c,	// (0x0005ac20) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x000636da) smil_status_volume_pane_g_ParamLimits

0xe45e,	// (0x00062522) bg_popup_window_pane_cp07_ParamLimits

0xe46c,	// (0x00062530) blid_firmament_pane

0x7277,	// (0x0005b33b) aid_size_cell_gallery_ParamLimits

0x7277,	// (0x0005b33b) aid_size_cell_gallery

0x7285,	// (0x0005b349) grid_gallery_pane_ParamLimits

0x7285,	// (0x0005b349) grid_gallery_pane

0x7295,	// (0x0005b359) cell_gallery_pane_ParamLimits

0x7295,	// (0x0005b359) cell_gallery_pane

0xe58f,	// (0x00062653) bg_cell_gallery_focus_pane_ParamLimits

0xe58f,	// (0x00062653) bg_cell_gallery_focus_pane

0xe5a1,	// (0x00062665) cell_gallery_pane_g1_ParamLimits

0xe5a1,	// (0x00062665) cell_gallery_pane_g1

0x72e3,	// (0x0005b3a7) cell_gallery_pane_g2_ParamLimits

0x72e3,	// (0x0005b3a7) cell_gallery_pane_g2

0x72f0,	// (0x0005b3b4) cell_gallery_pane_g3_ParamLimits

0x72f0,	// (0x0005b3b4) cell_gallery_pane_g3

0xe5ad,	// (0x00062671) cell_gallery_pane_g4_ParamLimits

0xe5ad,	// (0x00062671) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x00063788) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x00063788) cell_gallery_pane_g

0xe5b9,	// (0x0006267d) bg_cell_gallery_focus_pane_g1

0xe5c1,	// (0x00062685) bg_cell_gallery_focus_pane_g2

0xe5c9,	// (0x0006268d) bg_cell_gallery_focus_pane_g3

0xe5d1,	// (0x00062695) bg_cell_gallery_focus_pane_g4

0xe5d9,	// (0x0006269d) bg_cell_gallery_focus_pane_g5

0xe5e1,	// (0x000626a5) bg_cell_gallery_focus_pane_g6

0xe5e9,	// (0x000626ad) bg_cell_gallery_focus_pane_g7

0xe5f1,	// (0x000626b5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x00063791) bg_cell_gallery_focus_pane_g

0xe5f9,	// (0x000626bd) aid_firma_cardinal

0xe60d,	// (0x000626d1) blid_firmament_pane_t1

0xe624,	// (0x000626e8) blid_firmament_pane_t2

0xe63b,	// (0x000626ff) blid_firmament_pane_t3

0xe652,	// (0x00062716) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000637a2) blid_firmament_pane_t

0xe669,	// (0x0006272d) blid_sat_info_pane

0xe679,	// (0x0006273d) blid_sat_info_pane_g1

0xe679,	// (0x0006273d) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000637ab) blid_sat_info_pane_g

0xe683,	// (0x00062747) blid_sat_info_pane_t1

0xe691,	// (0x00062755) smil2_volume_content_pane

0xe69a,	// (0x0006275e) smil2_volume_pane_g1

0xe359,	// (0x0006241d) smil2_volume_content_pane_g1

0xe6a2,	// (0x00062766) smil2_volume_content_pane_g2

0xe6ab,	// (0x0006276f) smil2_volume_content_pane_g3

0xe6b4,	// (0x00062778) smil2_volume_content_pane_g4

0xe6bd,	// (0x00062781) smil2_volume_content_pane_g5

0xe6c6,	// (0x0006278a) smil2_volume_content_pane_g6

0xe6cf,	// (0x00062793) smil2_volume_content_pane_g7

0xe6d8,	// (0x0006279c) smil2_volume_content_pane_g8

0xe6e1,	// (0x000627a5) smil2_volume_content_pane_g9

0xe6ea,	// (0x000627ae) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000637b0) smil2_volume_content_pane_g

0x3d85,	// (0x00057e49) cale_week_day_heading_pane_t1_ParamLimits

0x3dc0,	// (0x00057e84) cale_week_day_heading_pane_t2_ParamLimits

0x3dfb,	// (0x00057ebf) cale_week_day_heading_pane_t3_ParamLimits

0x3e36,	// (0x00057efa) cale_week_day_heading_pane_t4_ParamLimits

0x3e71,	// (0x00057f35) cale_week_day_heading_pane_t5_ParamLimits

0x3eac,	// (0x00057f70) cale_week_day_heading_pane_t6_ParamLimits

0x3ee7,	// (0x00057fab) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0006329c) cale_week_day_heading_pane_t_ParamLimits

0xc454,	// (0x00060518) bg_cale_side_pane_ParamLimits

0x3f22,	// (0x00057fe6) cale_week_time_pane_t1_ParamLimits

0x3f3c,	// (0x00058000) cale_week_time_pane_t2_ParamLimits

0x3f56,	// (0x0005801a) cale_week_time_pane_t3_ParamLimits

0x3f70,	// (0x00058034) cale_week_time_pane_t4_ParamLimits

0x3f8a,	// (0x0005804e) cale_week_time_pane_t5_ParamLimits

0x3fa4,	// (0x00058068) cale_week_time_pane_t6_ParamLimits

0x3fc4,	// (0x00058088) cale_week_time_pane_t7_ParamLimits

0x3fe6,	// (0x000580aa) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000632ab) cale_week_time_pane_t_ParamLimits

0x400a,	// (0x000580ce) cell_cale_week_pane_g2_ParamLimits

0xc454,	// (0x00060518) bg_cale_side_pane_cp01_ParamLimits

0x5396,	// (0x0005945a) cale_month_week_pane_t1_ParamLimits

0x53af,	// (0x00059473) cale_month_week_pane_t2_ParamLimits

0x53c8,	// (0x0005948c) cale_month_week_pane_t3_ParamLimits

0x53e1,	// (0x000594a5) cale_month_week_pane_t4_ParamLimits

0x53fa,	// (0x000594be) cale_month_week_pane_t5_ParamLimits

0x541b,	// (0x000594df) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x00063384) cale_month_week_pane_t_ParamLimits

0x5588,	// (0x0005964c) cell_cale_month_pane_g1_ParamLimits

0x3543,	// (0x00057607) main_cale_event_viewer_pane

0x1035,	// (0x000550f9) listscroll_cale_event_viewer_pane

0xe6f3,	// (0x000627b7) list_cale_ev_pane

0xe6fb,	// (0x000627bf) scroll_pane_cp023

0xe707,	// (0x000627cb) field_cale_ev_pane_ParamLimits

0xe707,	// (0x000627cb) field_cale_ev_pane

0xe725,	// (0x000627e9) field_cale_ev_content_pane_ParamLimits

0xe725,	// (0x000627e9) field_cale_ev_content_pane

0xe731,	// (0x000627f5) field_cale_ev_pane_g1_ParamLimits

0xe731,	// (0x000627f5) field_cale_ev_pane_g1

0xe73d,	// (0x00062801) field_cale_ev_pane_g2_ParamLimits

0xe73d,	// (0x00062801) field_cale_ev_pane_g2

0xe755,	// (0x00062819) field_cale_ev_pane_g3_ParamLimits

0xe755,	// (0x00062819) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000637c5) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000637c5) field_cale_ev_pane_g

0xe76d,	// (0x00062831) field_cale_ev_pane_t1_ParamLimits

0xe76d,	// (0x00062831) field_cale_ev_pane_t1

0xe784,	// (0x00062848) field_cale_ev_content_pane_t1_ParamLimits

0xe784,	// (0x00062848) field_cale_ev_content_pane_t1

0x60ef,	// (0x0005a1b3) bg_button_pane_cp01

0x3b27,	// (0x00057beb) listscroll_cale_week_pane_ParamLimits

0xc3fe,	// (0x000604c2) popup_toolbar_window_cp01

0xc425,	// (0x000604e9) listscroll_cale_week_pane_t1_ParamLimits

0x3b27,	// (0x00057beb) listscroll_cale_day_pane_ParamLimits

0xc3fe,	// (0x000604c2) popup_toolbar_window_cp02

0xc849,	// (0x0006090d) listscroll_cale_day_pane_t1_ParamLimits

0x3b27,	// (0x00057beb) main_cale_month_pane_ParamLimits

0x6a41,	// (0x0005ab05) popup_toolbar_window_cp03_ParamLimits

0x6a41,	// (0x0005ab05) popup_toolbar_window_cp03

0x636d,	// (0x0005a431) main_image_pane_g2_ParamLimits

0x636d,	// (0x0005a431) main_image_pane_g2

0x6379,	// (0x0005a43d) main_image_pane_g3_ParamLimits

0x6379,	// (0x0005a43d) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000635b6) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000635b6) main_image_pane_g

0xd09b,	// (0x0006115f) main_image_pane_t1_ParamLimits

0x6385,	// (0x0005a449) main_image_pane_t2_ParamLimits

0x6385,	// (0x0005a449) main_image_pane_t2

0x6397,	// (0x0005a45b) main_image_pane_t3_ParamLimits

0x6397,	// (0x0005a45b) main_image_pane_t3

0x63a9,	// (0x0005a46d) main_image_pane_t4_ParamLimits

0x63a9,	// (0x0005a46d) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000635bd) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000635bd) main_image_pane_t

0x63bb,	// (0x0005a47f) popup_image_details_window_cp01

0x63c5,	// (0x0005a489) popup_toobar_trans_pane_cp01_ParamLimits

0x63c5,	// (0x0005a489) popup_toobar_trans_pane_cp01

0x6991,	// (0x0005aa55) popup_image_details_window_ParamLimits

0x6991,	// (0x0005aa55) popup_image_details_window

0x699f,	// (0x0005aa63) popup_image_focus_window

0x6cdb,	// (0x0005ad9f) camera2_autofocus_pane_ParamLimits

0x6cdb,	// (0x0005ad9f) camera2_autofocus_pane

0x1035,	// (0x000550f9) bg_popup_sub_pane_cp06

0xe7a2,	// (0x00062866) popup_image_focus_window_g1

0xe7aa,	// (0x0006286e) popup_image_focus_window_g2

0xe7b2,	// (0x00062876) popup_image_focus_window_g3

0xe7ba,	// (0x0006287e) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000637cc) popup_image_focus_window_g

0xe7c2,	// (0x00062886) popup_image_focus_window_t1

0xe7d0,	// (0x00062894) popup_image_focus_window_t2

0xe7e0,	// (0x000628a4) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x000637d5) popup_image_focus_window_t

0xe7ee,	// (0x000628b2) camera2_autofocus_pane_g1

0xdaba,	// (0x00061b7e) bg_tb_trans_pane_cp01

0xe7fc,	// (0x000628c0) popup_image_details_window_g1

0xe80f,	// (0x000628d3) popup_image_details_window_g2

0x0002,

0xf723,	// (0x000637e7) popup_image_details_window_g

0xe838,	// (0x000628fc) popup_image_details_window_t1

0xe84a,	// (0x0006290e) popup_image_details_window_t2

0xe863,	// (0x00062927) popup_image_details_window_t3

0xe877,	// (0x0006293b) popup_image_details_window_t4

0xe892,	// (0x00062956) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x000637ee) popup_image_details_window_t

0xc2d5,	// (0x00060399) bg_calc_paper_pane_ParamLimits

0x3543,	// (0x00057607) grid_highlight_pane_cp013

0x38ae,	// (0x00057972) list_calc_pane_ParamLimits

0x38c0,	// (0x00057984) scroll_pane_cp024

0xc2e9,	// (0x000603ad) bg_calc_display_pane_ParamLimits

0x38c8,	// (0x0005798c) calc_display_pane_t1_ParamLimits

0x38dd,	// (0x000579a1) calc_display_pane_t2_ParamLimits

0x38f2,	// (0x000579b6) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0006321e) calc_display_pane_t_ParamLimits

0x39ce,	// (0x00057a92) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0006323b) cell_calc_pane_g

0x39d7,	// (0x00057a9b) cell_calc_pane_t1

0xc348,	// (0x0006040c) grid_highlight_pane_cp02_ParamLimits

0xc35e,	// (0x00060422) toolbar_button_pane_cp01_ParamLimits

0xc35e,	// (0x00060422) toolbar_button_pane_cp01

0xd0e0,	// (0x000611a4) temp_image_control_pane_ParamLimits

0xd0e0,	// (0x000611a4) temp_image_control_pane

0x6909,	// (0x0005a9cd) main_mp3_pane

0xe8ac,	// (0x00062970) temp_image_control_pane_g1_ParamLimits

0xe8ac,	// (0x00062970) temp_image_control_pane_g1

0xe8ba,	// (0x0006297e) temp_image_control_pane_g2_ParamLimits

0xe8ba,	// (0x0006297e) temp_image_control_pane_g2

0xe8cc,	// (0x00062990) temp_image_control_pane_g3_ParamLimits

0xe8cc,	// (0x00062990) temp_image_control_pane_g3

0x732d,	// (0x0005b3f1) temp_image_control_pane_g4_ParamLimits

0x732d,	// (0x0005b3f1) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x000637f9) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x000637f9) temp_image_control_pane_g

0xe8ac,	// (0x00062970) main_mp3_pane_g1

0x733e,	// (0x0005b402) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x00063802) main_mp3_pane_g

0xe90f,	// (0x000629d3) main_mp3_pane_t1

0xc4b9,	// (0x0006057d) main_camera_pane_g8_ParamLimits

0xc4b9,	// (0x0006057d) main_camera_pane_g8

0x42a2,	// (0x00058366) main_video_pane_g7_ParamLimits

0x42a2,	// (0x00058366) main_video_pane_g7

0x6e23,	// (0x0005aee7) main_camera2_pane_t7_ParamLimits

0x6e23,	// (0x0005aee7) main_camera2_pane_t7

0xc601,	// (0x000606c5) scroll_pane_cp025_ParamLimits

0xc601,	// (0x000606c5) scroll_pane_cp025

0xc615,	// (0x000606d9) scroll_pane_cp026_ParamLimits

0xc615,	// (0x000606d9) scroll_pane_cp026

0xc624,	// (0x000606e8) wml_content_pane_ParamLimits

0x3543,	// (0x00057607) main_touch_calib_pane

0x73e2,	// (0x0005b4a6) main_touch_calib_pane_g1

0x73ee,	// (0x0005b4b2) main_touch_calib_pane_g2

0x73fa,	// (0x0005b4be) main_touch_calib_pane_g3

0x7406,	// (0x0005b4ca) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x00063820) main_touch_calib_pane_g

0x7412,	// (0x0005b4d6) main_touch_calib_pane_t1

0x742b,	// (0x0005b4ef) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x00063829) main_touch_calib_pane_t

0xcd62,	// (0x00060e26) mup_progress_pane_cp02

0xcd81,	// (0x00060e45) navi_pane_g1

0xcde3,	// (0x00060ea7) navi_pane_mp_t3

0x6909,	// (0x0005a9cd) main_mp3_pane_ParamLimits

0x6a7e,	// (0x0005ab42) navi_pane_ParamLimits

0xe8ac,	// (0x00062970) main_mp3_pane_g1_ParamLimits

0x733e,	// (0x0005b402) main_mp3_pane_g2_ParamLimits

0x734a,	// (0x0005b40e) main_mp3_pane_g3_ParamLimits

0x734a,	// (0x0005b40e) main_mp3_pane_g3

0x7356,	// (0x0005b41a) main_mp3_pane_g4_ParamLimits

0x7356,	// (0x0005b41a) main_mp3_pane_g4

0xe8dc,	// (0x000629a0) main_mp3_pane_g5_ParamLimits

0xe8dc,	// (0x000629a0) main_mp3_pane_g5

0xe8ea,	// (0x000629ae) main_mp3_pane_g6_ParamLimits

0xe8ea,	// (0x000629ae) main_mp3_pane_g6

0xe8f7,	// (0x000629bb) main_mp3_pane_g7_ParamLimits

0xe8f7,	// (0x000629bb) main_mp3_pane_g7

0xe903,	// (0x000629c7) main_mp3_pane_g8_ParamLimits

0xe903,	// (0x000629c7) main_mp3_pane_g8

0xf73e,	// (0x00063802) main_mp3_pane_g_ParamLimits

0x7362,	// (0x0005b426) main_mp3_pane_t2

0x7372,	// (0x0005b436) main_mp3_pane_t3

0xe91d,	// (0x000629e1) main_mp3_pane_t4

0xe92b,	// (0x000629ef) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x00063813) main_mp3_pane_t

0xe939,	// (0x000629fd) mup_progress_pane_cp01

0x319d,	// (0x00057261) aid_zoom_text_secondary2

0xe6f3,	// (0x000627b7) list_cale_ev2_pane

0xe6fb,	// (0x000627bf) scroll_pane_cp023_ParamLimits

0x7486,	// (0x0005b54a) field_cale_ev2_pane_ParamLimits

0x7486,	// (0x0005b54a) field_cale_ev2_pane

0xe941,	// (0x00062a05) field_cale_ev2_pane_g1_ParamLimits

0xe941,	// (0x00062a05) field_cale_ev2_pane_g1

0xe94d,	// (0x00062a11) field_cale_ev2_pane_g2_ParamLimits

0xe94d,	// (0x00062a11) field_cale_ev2_pane_g2

0xe965,	// (0x00062a29) field_cale_ev2_pane_g3_ParamLimits

0xe965,	// (0x00062a29) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x00063834) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x00063834) field_cale_ev2_pane_g

0x74af,	// (0x0005b573) field_cale_ev2_pane_t1_ParamLimits

0x74af,	// (0x0005b573) field_cale_ev2_pane_t1

0x74c6,	// (0x0005b58a) field_cale_ev2_pane_t2_ParamLimits

0x74c6,	// (0x0005b58a) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0006383d) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0006383d) field_cale_ev2_pane_t

0x624d,	// (0x0005a311) main_postcard_pane_g5_ParamLimits

0x624d,	// (0x0005a311) main_postcard_pane_g5

0x625b,	// (0x0005a31f) main_postcard_pane_g6_ParamLimits

0x625b,	// (0x0005a31f) main_postcard_pane_g6

0x40ec,	// (0x000581b0) camera2_autofocus_pane_cp_ParamLimits

0x40ec,	// (0x000581b0) camera2_autofocus_pane_cp

0x6909,	// (0x0005a9cd) main_mup3_pane

0x74db,	// (0x0005b59f) main_mup3_pane_g1_ParamLimits

0x74db,	// (0x0005b59f) main_mup3_pane_g1

0x74fc,	// (0x0005b5c0) main_mup3_pane_g2_ParamLimits

0x74fc,	// (0x0005b5c0) main_mup3_pane_g2

0x7574,	// (0x0005b638) main_mup3_pane_g3_ParamLimits

0x7574,	// (0x0005b638) main_mup3_pane_g3

0x75b7,	// (0x0005b67b) main_mup3_pane_g4_ParamLimits

0x75b7,	// (0x0005b67b) main_mup3_pane_g4

0x75fa,	// (0x0005b6be) main_mup3_pane_g5_ParamLimits

0x75fa,	// (0x0005b6be) main_mup3_pane_g5

0x763d,	// (0x0005b701) main_mup3_pane_g6_ParamLimits

0x763d,	// (0x0005b701) main_mup3_pane_g6

0xe9a9,	// (0x00062a6d) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x00062a6d) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0006384d) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0006384d) main_mup3_pane_g

0x76b3,	// (0x0005b777) main_mup3_pane_t1_ParamLimits

0x76b3,	// (0x0005b777) main_mup3_pane_t1

0x7722,	// (0x0005b7e6) main_mup3_pane_t2_ParamLimits

0x7722,	// (0x0005b7e6) main_mup3_pane_t2

0x77eb,	// (0x0005b8af) main_mup3_pane_t4_ParamLimits

0x77eb,	// (0x0005b8af) main_mup3_pane_t4

0x7839,	// (0x0005b8fd) main_mup3_pane_t5_ParamLimits

0x7839,	// (0x0005b8fd) main_mup3_pane_t5

0x78e9,	// (0x0005b9ad) main_mup3_pane_t6_ParamLimits

0x78e9,	// (0x0005b9ad) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0006385e) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0006385e) main_mup3_pane_t

0x7995,	// (0x0005ba59) mup3_progress_pane_ParamLimits

0x7995,	// (0x0005ba59) mup3_progress_pane

0x7a13,	// (0x0005bad7) popup_mup3_control_window_ParamLimits

0x7a13,	// (0x0005bad7) popup_mup3_control_window

0xe9b7,	// (0x00062a7b) popup_mup3_text_window

0x7a2c,	// (0x0005baf0) mup3_progress_pane_t1

0x7a4b,	// (0x0005bb0f) mup3_progress_pane_t2

0xe9bf,	// (0x00062a83) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0006386b) mup3_progress_pane_t

0xe9dc,	// (0x00062aa0) mup_progress_pane_cp03

0x1035,	// (0x000550f9) bg_tb_trans_pane_cp04

0x7a6a,	// (0x0005bb2e) mup3_volume_pane

0x7a72,	// (0x0005bb36) popup_mup3_control_window_g1

0x7a7b,	// (0x0005bb3f) mup3_volume_pane_g1

0x7a84,	// (0x0005bb48) mup3_volume_pane_g2

0x7a8d,	// (0x0005bb51) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x00063872) mup3_volume_pane_g

0x1035,	// (0x000550f9) bg_tb_trans_pane_cp03

0xe9ec,	// (0x00062ab0) popup_mup3_text_window_g1

0xe9f4,	// (0x00062ab8) popup_mup3_text_window_t1

0xc331,	// (0x000603f5) list_calc_item_pane_g1_ParamLimits

0xe3cc,	// (0x00062490) mup_volume_pane_cp_g1

0x7444,	// (0x0005b508) main_touch_calib_pane_t3

0x745a,	// (0x0005b51e) main_touch_calib_pane_t4

0x7470,	// (0x0005b534) main_touch_calib_pane_t5

0x3278,	// (0x0005733c) aid_cell_size_toolbar2

0x3280,	// (0x00057344) aid_popup3_width_pane

0x3195,	// (0x00057259) aid_zoom_text_msg_primary

0x40c3,	// (0x00058187) vorec_t7

0xc2f5,	// (0x000603b9) bg_calc_paper_pane_g1_ParamLimits

0xc301,	// (0x000603c5) bg_calc_paper_pane_g2_ParamLimits

0xc30d,	// (0x000603d1) bg_calc_paper_pane_g3_ParamLimits

0xc319,	// (0x000603dd) bg_calc_paper_pane_g4_ParamLimits

0xc325,	// (0x000603e9) bg_calc_paper_pane_g5_ParamLimits

0x3931,	// (0x000579f5) bg_calc_paper_pane_g6_ParamLimits

0x3942,	// (0x00057a06) bg_calc_paper_pane_g7_ParamLimits

0x3953,	// (0x00057a17) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x00063225) bg_calc_paper_pane_g_ParamLimits

0x3964,	// (0x00057a28) calc_bg_paper_pane_g9_ParamLimits

0x41d3,	// (0x00058297) image_qvga_pane_ParamLimits

0x41d3,	// (0x00058297) image_qvga_pane

0xc224,	// (0x000602e8) bg_popup_sub_pane_cp04_ParamLimits

0xd017,	// (0x000610db) popup_mup_playback_window_g1_ParamLimits

0xd023,	// (0x000610e7) popup_mup_playback_window_t1_ParamLimits

0xd038,	// (0x000610fc) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000635b1) popup_mup_playback_window_t_ParamLimits

0x6f52,	// (0x0005b016) main_mup2_pane_g3_ParamLimits

0x6f52,	// (0x0005b016) main_mup2_pane_g3

0x4582,	// (0x00058646) popup_toolbar_window_cp04

0xd41a,	// (0x000614de) popup_call2_audio_second_window_g3_ParamLimits

0xd41a,	// (0x000614de) popup_call2_audio_second_window_g3

0xd824,	// (0x000618e8) popup_call2_audio_first_window_g4_ParamLimits

0xd824,	// (0x000618e8) popup_call2_audio_first_window_g4

0xdefb,	// (0x00061fbf) popup_call2_audio_in_window_g4_ParamLimits

0xdefb,	// (0x00061fbf) popup_call2_audio_in_window_g4

0x6360,	// (0x0005a424) aid_area_sk_bg_cut_ParamLimits

0x6360,	// (0x0005a424) aid_area_sk_bg_cut

0xd04d,	// (0x00061111) aid_area_sk_bg_cut_2_ParamLimits

0xd04d,	// (0x00061111) aid_area_sk_bg_cut_2

0x72d3,	// (0x0005b397) aid_placing_details_win

0x72db,	// (0x0005b39f) aid_placing_details_win_2

0xe7ee,	// (0x000628b2) camera2_autofocus_pane_g1_ParamLimits

0x34cf,	// (0x00057593) popup_fixed_preview_cale_window_ParamLimits

0x34cf,	// (0x00057593) popup_fixed_preview_cale_window

0xce32,	// (0x00060ef6) navi_slider_pane_g3

0xce3b,	// (0x00060eff) navi_slider_pane_g4

0xce44,	// (0x00060f08) navi_slider_pane_g5

0xce32,	// (0x00060ef6) navi_slider_pane_g6

0x5bf4,	// (0x00059cb8) navi_slider_pane_g7

0xcf57,	// (0x0006101b) mup_scale_pane_g3

0xcf60,	// (0x00061024) mup_scale_pane_g4

0xcf69,	// (0x0006102d) mup_scale_pane_g5

0x6035,	// (0x0005a0f9) mup_scale_pane_g6

0x603e,	// (0x0005a102) mup_scale_pane_g7

0xce32,	// (0x00060ef6) cams2_slider_pane_g3

0xe44e,	// (0x00062512) cams2_slider_pane_g4

0x722b,	// (0x0005b2ef) cams2_slider_pane_g5

0xce32,	// (0x00060ef6) cams2_slider_pane_g6

0x7233,	// (0x0005b2f7) cams2_slider_pane_g7

0xe679,	// (0x0006273d) camera2_autofocus_pane_cp_g1

0xe25c,	// (0x00062320) bg_popup_preview_window_pane_cp02_ParamLimits

0xe25c,	// (0x00062320) bg_popup_preview_window_pane_cp02

0xea02,	// (0x00062ac6) list_fp_cale_pane_ParamLimits

0xea02,	// (0x00062ac6) list_fp_cale_pane

0xea0e,	// (0x00062ad2) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x00062ad2) popup_fixed_preview_cale_window_t1

0x7a96,	// (0x0005bb5a) popup_fixed_preview_cale_window_t2_ParamLimits

0x7a96,	// (0x0005bb5a) popup_fixed_preview_cale_window_t2

0x7aab,	// (0x0005bb6f) popup_fixed_preview_cale_window_t3_ParamLimits

0x7aab,	// (0x0005bb6f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x00063879) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x00063879) popup_fixed_preview_cale_window_t

0x7ac0,	// (0x0005bb84) list_single_fp_cale_pane_ParamLimits

0x7ac0,	// (0x0005bb84) list_single_fp_cale_pane

0xea2c,	// (0x00062af0) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x00062af0) list_single_fp_cale_pane_g1

0xea38,	// (0x00062afc) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x00062afc) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x00063880) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x00063880) list_single_fp_cale_pane_g

0xea51,	// (0x00062b15) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x00062b15) list_single_fp_cale_pane_t1

0xea63,	// (0x00062b27) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x00062b27) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x00063887) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x00063887) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3543,	// (0x00057607) main_dialer_pane

0x7ad3,	// (0x0005bb97) aid_cell_size_keypad

0x7add,	// (0x0005bba1) dialer_ne_pane

0x7ae7,	// (0x0005bbab) grid_dialer_command_1_pane

0x7aef,	// (0x0005bbb3) grid_dialer_command_2_pane

0x7af7,	// (0x0005bbbb) grid_dialer_keypad_pane

0x7b09,	// (0x0005bbcd) bg_popup_call_pane_cp06_ParamLimits

0x7b09,	// (0x0005bbcd) bg_popup_call_pane_cp06

0x7b15,	// (0x0005bbd9) dialer_ne_clear_pane_ParamLimits

0x7b15,	// (0x0005bbd9) dialer_ne_clear_pane

0xea96,	// (0x00062b5a) dialer_ne_pane_g1

0xea9e,	// (0x00062b62) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x00062b62) dialer_ne_pane_t1

0x7b21,	// (0x0005bbe5) dialer_ne_pane_t2_ParamLimits

0x7b21,	// (0x0005bbe5) dialer_ne_pane_t2

0x7b3e,	// (0x0005bc02) dialer_ne_pane_t3_ParamLimits

0x7b3e,	// (0x0005bc02) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0006388c) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0006388c) dialer_ne_pane_t

0x7b62,	// (0x0005bc26) dialer_ne_pane_t3_copy1_ParamLimits

0x7b62,	// (0x0005bc26) dialer_ne_pane_t3_copy1

0x7b86,	// (0x0005bc4a) cell_dialer_keypad_pane_ParamLimits

0x7b86,	// (0x0005bc4a) cell_dialer_keypad_pane

0x7b9d,	// (0x0005bc61) cell_dialer_command_1_pane_ParamLimits

0x7b9d,	// (0x0005bc61) cell_dialer_command_1_pane

0x7bb3,	// (0x0005bc77) cell_dialer_command_2_pane_ParamLimits

0x7bb3,	// (0x0005bc77) cell_dialer_command_2_pane

0xeab0,	// (0x00062b74) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x00062b74) bg_button_pane_cp02

0x7bc2,	// (0x0005bc86) cell_dialer_keypad_pane_g1_ParamLimits

0x7bc2,	// (0x0005bc86) cell_dialer_keypad_pane_g1

0xeab0,	// (0x00062b74) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x00062b74) bg_button_pane_cp03

0x7bd7,	// (0x0005bc9b) cell_dialer_command_1_pane_g1_ParamLimits

0x7bd7,	// (0x0005bc9b) cell_dialer_command_1_pane_g1

0xeabc,	// (0x00062b80) bg_button_pane_cp04

0x7beb,	// (0x0005bcaf) cell_dialer_command_2_pane_g1

0xce21,	// (0x00060ee5) bg_button_pane_cp06

0xeac4,	// (0x00062b88) dialer_ne_clear_pane_g1

0x5b2f,	// (0x00059bf3) navi_pane_g2

0x5b5d,	// (0x00059c21) navi_pane_g3

0x0002,

0xf3f0,	// (0x000634b4) navi_pane_g

0x5b88,	// (0x00059c4c) navi_pane_mv_g2

0x5baf,	// (0x00059c73) navi_pane_mv_g5

0x5bb7,	// (0x00059c7b) navi_pane_mv_t1

0xc2e9,	// (0x000603ad) main_clock2_pane

0x7c29,	// (0x0005bced) main_clock2_list_pane_ParamLimits

0x7c29,	// (0x0005bced) main_clock2_list_pane

0x7c51,	// (0x0005bd15) main_clock2_pane_t1_ParamLimits

0x7c51,	// (0x0005bd15) main_clock2_pane_t1

0x7c73,	// (0x0005bd37) main_clock2_pane_t2_ParamLimits

0x7c73,	// (0x0005bd37) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x00063893) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x00063893) main_clock2_pane_t

0x7cce,	// (0x0005bd92) popup_clock_analogue_window_cp03_ParamLimits

0x7cce,	// (0x0005bd92) popup_clock_analogue_window_cp03

0x7cec,	// (0x0005bdb0) popup_clock_digital_window_cp02_ParamLimits

0x7cec,	// (0x0005bdb0) popup_clock_digital_window_cp02

0x7d59,	// (0x0005be1d) main_clock2_list_single_pane_ParamLimits

0x7d59,	// (0x0005be1d) main_clock2_list_single_pane

0xce21,	// (0x00060ee5) list_highlight_pane_cp05

0xeae2,	// (0x00062ba6) main_clock2_list_single_pane_t1

0x4582,	// (0x00058646) popup_toolbar_window_cp04_ParamLimits

0x72fd,	// (0x0005b3c1) camera2_autofocus_pane_g2_ParamLimits

0x72fd,	// (0x0005b3c1) camera2_autofocus_pane_g2

0x7309,	// (0x0005b3cd) camera2_autofocus_pane_g3_ParamLimits

0x7309,	// (0x0005b3cd) camera2_autofocus_pane_g3

0x7315,	// (0x0005b3d9) camera2_autofocus_pane_g4_ParamLimits

0x7315,	// (0x0005b3d9) camera2_autofocus_pane_g4

0x7321,	// (0x0005b3e5) camera2_autofocus_pane_g5_ParamLimits

0x7321,	// (0x0005b3e5) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x000637dc) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x000637dc) camera2_autofocus_pane_g

0xe989,	// (0x00062a4d) camera2_autofocus_pane_cp_g2

0xe991,	// (0x00062a55) camera2_autofocus_pane_cp_g3

0xe999,	// (0x00062a5d) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x00062a65) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x00063842) camera2_autofocus_pane_cp_g

0x7b01,	// (0x0005bbc5) popup_dialer_spcha_window

0x1035,	// (0x000550f9) bg_popup_sub_pane_cp07

0xeaf0,	// (0x00062bb4) list_spcha_pane

0xeaf8,	// (0x00062bbc) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x00062bbc) list_single_spcha_pane

0x1035,	// (0x000550f9) list_highlight_pane_cp06

0xeb09,	// (0x00062bcd) list_single_spcha_pane_t1

0xdca5,	// (0x00061d69) popup_call2_audio_out_window_g4_ParamLimits

0xdca5,	// (0x00061d69) popup_call2_audio_out_window_g4

0x3543,	// (0x00057607) main_imed2_pane

0x69a7,	// (0x0005aa6b) popup_imed_adjust2_window

0x69ba,	// (0x0005aa7e) popup_imed_trans_window_ParamLimits

0x69ba,	// (0x0005aa7e) popup_imed_trans_window

0xe4b7,	// (0x0006257b) popup_blid_sat_info2_window_t1

0xe4c5,	// (0x00062589) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x00063771) popup_blid_sat_info2_window_t

0x7e03,	// (0x0005bec7) aid_size_cell_colour_35

0x7e1d,	// (0x0005bee1) aid_size_cell_colour_112

0x7e34,	// (0x0005bef8) aid_size_cell_effect

0xdaba,	// (0x00061b7e) bg_tb_trans_pane_cp02

0xdac8,	// (0x00061b8c) heading_imed_pane

0x7e4e,	// (0x0005bf12) listscroll_imed_pane

0xeb17,	// (0x00062bdb) heading_imed_pane_g1

0xeb1f,	// (0x00062be3) heading_imed_pane_t1

0xeb2d,	// (0x00062bf1) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x00062bf1) grid_imed_colour_35_pane

0x7e5a,	// (0x0005bf1e) grid_imed_effect_pane

0xeb44,	// (0x00062c08) list_imed_aspect_pane

0x7e6a,	// (0x0005bf2e) scroll_pane_cp027_ParamLimits

0x7e6a,	// (0x0005bf2e) scroll_pane_cp027

0x7e76,	// (0x0005bf3a) cell_imed_effect_pane_ParamLimits

0x7e76,	// (0x0005bf3a) cell_imed_effect_pane

0xeb4c,	// (0x00062c10) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x00062c10) cell_imed_colour_pane

0xeb8e,	// (0x00062c52) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x00062c52) cell_imed_colour_pane_g1

0xeb9f,	// (0x00062c63) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x00062c63) hgihlgiht_grid_pane_cp016

0x7e8e,	// (0x0005bf52) cell_imed_effect_pane_g1

0x7e96,	// (0x0005bf5a) grid_highlight_pane_cp017

0xebb0,	// (0x00062c74) list_imed_single_pane_ParamLimits

0xebb0,	// (0x00062c74) list_imed_single_pane

0x1035,	// (0x000550f9) list_highlight_pane_cp07

0xebc5,	// (0x00062c89) list_imed_aspect_pane_comp1_t1

0xe268,	// (0x0006232c) bg_tb_trans_pane_cp05

0xebe7,	// (0x00062cab) popup_imed_adjust2_window_g1

0xec0e,	// (0x00062cd2) popup_imed_adjust2_window_t1

0xec26,	// (0x00062cea) slider_imed_adjust_pane

0xec3a,	// (0x00062cfe) slider_imed_adjust_pane_g1

0xec4a,	// (0x00062d0e) slider_imed_adjust_pane_g2

0xec5a,	// (0x00062d1e) slider_imed_adjust_pane_g3

0xec6b,	// (0x00062d2f) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000638b0) slider_imed_adjust_pane_g

0x7e9f,	// (0x0005bf63) aid_size_cell_clipart2

0x7eab,	// (0x0005bf6f) grid_imed_clipart_pane

0xec7c,	// (0x00062d40) scroll_pane_cp031

0x7eb5,	// (0x0005bf79) cell_imed_clipart_pane_ParamLimits

0x7eb5,	// (0x0005bf79) cell_imed_clipart_pane

0x7ed7,	// (0x0005bf9b) cell_imed_clipart_pane_g1

0x1035,	// (0x000550f9) grid_highlight_pane_cp014

0x7c35,	// (0x0005bcf9) main_clock2_pane_g1_ParamLimits

0x7c35,	// (0x0005bcf9) main_clock2_pane_g1

0x7d04,	// (0x0005bdc8) aid_call2_pane_cp10

0x7d16,	// (0x0005bdda) aid_call_pane_cp10

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g1

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g2

0x7d28,	// (0x0005bdec) popup_clock_analogue_window_cp10_g3

0x7d28,	// (0x0005bdec) popup_clock_analogue_window_cp10_g4

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0006389e) popup_clock_analogue_window_cp10_g

0x7d3a,	// (0x0005bdfe) popup_clock_analogue_window_cp10_t1

0x7d6b,	// (0x0005be2f) clock_digital_number_pane_cp10_ParamLimits

0x7d6b,	// (0x0005be2f) clock_digital_number_pane_cp10

0x7d83,	// (0x0005be47) clock_digital_number_pane_cp11_ParamLimits

0x7d83,	// (0x0005be47) clock_digital_number_pane_cp11

0x7d9b,	// (0x0005be5f) clock_digital_number_pane_cp12_ParamLimits

0x7d9b,	// (0x0005be5f) clock_digital_number_pane_cp12

0x7db3,	// (0x0005be77) clock_digital_number_pane_cp13_ParamLimits

0x7db3,	// (0x0005be77) clock_digital_number_pane_cp13

0x7dcb,	// (0x0005be8f) clock_digital_separator_pane_cp10_ParamLimits

0x7dcb,	// (0x0005be8f) clock_digital_separator_pane_cp10

0x7de3,	// (0x0005bea7) popup_clock_digital_window_cp02_t1_ParamLimits

0x7de3,	// (0x0005bea7) popup_clock_digital_window_cp02_t1

0xc21c,	// (0x000602e0) clock_digital_number_pane_cp10_g1

0xc21c,	// (0x000602e0) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000638b9) clock_digital_number_pane_cp10_g

0xc21c,	// (0x000602e0) clock_digital_separator_pane_cp10_g1

0xc21c,	// (0x000602e0) clock_digital_separator_pane_g2_cp10

0xcdf1,	// (0x00060eb5) navi_pane_vded_g4

0xcdfa,	// (0x00060ebe) navi_pane_vded_g5

0xce03,	// (0x00060ec7) navi_pane_vded_t1

0x3543,	// (0x00057607) main_vded_pane

0x7ee0,	// (0x0005bfa4) main_vded_pane_g1

0x7eec,	// (0x0005bfb0) main_vded_pane_g2

0x7ef6,	// (0x0005bfba) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000638be) main_vded_pane_g

0x7f00,	// (0x0005bfc4) main_vded_pane_t1

0x7f0e,	// (0x0005bfd2) main_vded_pane_t2

0x0001,

0xf801,	// (0x000638c5) main_vded_pane_t

0x7f1c,	// (0x0005bfe0) vded_slider_pane

0x7f26,	// (0x0005bfea) vded_video_pane

0xec84,	// (0x00062d48) vded_video_pane_g1

0x7f30,	// (0x0005bff4) vded_video_pane_g2

0xe679,	// (0x0006273d) vded_video_pane_g3

0x0002,

0xf806,	// (0x000638ca) vded_video_pane_g

0xec8e,	// (0x00062d52) vded_slider_pane_g1

0xe3cc,	// (0x00062490) vded_slider_pane_g2

0xec97,	// (0x00062d5b) vded_slider_pane_g3

0xeca0,	// (0x00062d64) vded_slider_pane_g4

0xeca9,	// (0x00062d6d) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000638d1) vded_slider_pane_g

0x7a05,	// (0x0005bac9) mup3_rocker_pane_ParamLimits

0x7a05,	// (0x0005bac9) mup3_rocker_pane

0x7f39,	// (0x0005bffd) mup3_control_keys_pane_g1

0x7f41,	// (0x0005c005) mup3_control_keys_pane_g2

0x7f49,	// (0x0005c00d) mup3_control_keys_pane_g3

0x7f51,	// (0x0005c015) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000638dc) mup3_control_keys_pane_g

0x34f7,	// (0x000575bb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34f7,	// (0x000575bb) popup_toolbar2_fixed_window_cp01

0x7a1f,	// (0x0005bae3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7a1f,	// (0x0005bae3) popup_toolbar2_fixed_window_cp02

0xd58c,	// (0x00061650) popup_call2_audio_second_window_t4_ParamLimits

0xd58c,	// (0x00061650) popup_call2_audio_second_window_t4

0xdb12,	// (0x00061bd6) popup_call2_audio_first_window_t6_ParamLimits

0xdb12,	// (0x00061bd6) popup_call2_audio_first_window_t6

0xdda8,	// (0x00061e6c) popup_call2_audio_out_window_t6_ParamLimits

0xdda8,	// (0x00061e6c) popup_call2_audio_out_window_t6

0x3543,	// (0x00057607) main_vitu_pane

0x7f61,	// (0x0005c025) aid_size_cell_itu_ParamLimits

0x7f61,	// (0x0005c025) aid_size_cell_itu

0x1b48,	// (0x00055c0c) bg_popup_window_pane_cp08_ParamLimits

0x1b48,	// (0x00055c0c) bg_popup_window_pane_cp08

0x7f6f,	// (0x0005c033) field_vitu_entry_pane_ParamLimits

0x7f6f,	// (0x0005c033) field_vitu_entry_pane

0x7f7e,	// (0x0005c042) grid_vitu_function_pane_ParamLimits

0x7f7e,	// (0x0005c042) grid_vitu_function_pane

0x7f8e,	// (0x0005c052) grid_vitu_itu_pane_ParamLimits

0x7f8e,	// (0x0005c052) grid_vitu_itu_pane

0x7f9e,	// (0x0005c062) cell_vitu_itu_pane_ParamLimits

0x7f9e,	// (0x0005c062) cell_vitu_itu_pane

0x7fb3,	// (0x0005c077) cell_vitu_function_pane_ParamLimits

0x7fb3,	// (0x0005c077) cell_vitu_function_pane

0xdaba,	// (0x00061b7e) bg_popup_sub_pane_cp08_ParamLimits

0xdaba,	// (0x00061b7e) bg_popup_sub_pane_cp08

0x7fc5,	// (0x0005c089) field_vitu_entry_pane_t1_ParamLimits

0x7fc5,	// (0x0005c089) field_vitu_entry_pane_t1

0xecca,	// (0x00062d8e) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x00062d8e) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000638ea) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000638ea) field_vitu_entry_pane_t

0xece7,	// (0x00062dab) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x00062dab) bg_button_pane_cp05

0x7fe1,	// (0x0005c0a5) cell_vitu_itu_pane_g1

0x7ff9,	// (0x0005c0bd) cell_vitu_itu_pane_t1_ParamLimits

0x7ff9,	// (0x0005c0bd) cell_vitu_itu_pane_t1

0x800b,	// (0x0005c0cf) cell_vitu_itu_pane_t2_ParamLimits

0x800b,	// (0x0005c0cf) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000638ef) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000638ef) cell_vitu_itu_pane_t

0xecf5,	// (0x00062db9) bg_button_pane_cp07

0x8040,	// (0x0005c104) cell_vitu_function_pane_g1

0x37d5,	// (0x00057899) main_calc_pane_g1

0x32b4,	// (0x00057378) aid_visual_content_pane

0x3543,	// (0x00057607) main_vradio_pane

0x8049,	// (0x0005c10d) main_vradio_pane_g1_ParamLimits

0x8049,	// (0x0005c10d) main_vradio_pane_g1

0xecff,	// (0x00062dc3) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x00062dc3) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000638f6) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000638f6) main_vradio_pane_g

0x8059,	// (0x0005c11d) main_vradio_pane_t1_ParamLimits

0x8059,	// (0x0005c11d) main_vradio_pane_t1

0x806b,	// (0x0005c12f) main_vradio_pane_t2_ParamLimits

0x806b,	// (0x0005c12f) main_vradio_pane_t2

0xed0c,	// (0x00062dd0) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x00062dd0) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000638fb) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000638fb) main_vradio_pane_t

0x807d,	// (0x0005c141) vradio_rocker_control_pane_ParamLimits

0x807d,	// (0x0005c141) vradio_rocker_control_pane

0x8089,	// (0x0005c14d) vradio_station_info_pane_ParamLimits

0x8089,	// (0x0005c14d) vradio_station_info_pane

0xed20,	// (0x00062de4) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x00062de4) vradio_frequency_info_pane

0xe679,	// (0x0006273d) vradio_station_info_pane_g1

0xed2f,	// (0x00062df3) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x00062df3) vradio_station_info_pane_t1

0xed51,	// (0x00062e15) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x00062e15) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x00063902) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x00063902) vradio_station_info_pane_t

0xed63,	// (0x00062e27) vradio_tuning_pane

0xed6b,	// (0x00062e2f) vradio_rocker_control_pane_g1

0xed73,	// (0x00062e37) vradio_rocker_control_pane_g2

0xed7b,	// (0x00062e3f) vradio_rocker_control_pane_g3

0xed83,	// (0x00062e47) vradio_rocker_control_pane_g4

0xed8b,	// (0x00062e4f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x00063907) vradio_rocker_control_pane_g

0x8098,	// (0x0005c15c) vradio_frequency_info_pane_g1

0xed93,	// (0x00062e57) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x00062e57) vradio_frequency_info_pane_t1

0x80a2,	// (0x0005c166) vradio_tuning_pane_g1

0x80ab,	// (0x0005c16f) vradio_tuning_pane_t1

0x32fd,	// (0x000573c1) area_side_right_pane_ParamLimits

0x32fd,	// (0x000573c1) area_side_right_pane

0xe223,	// (0x000622e7) status_small_pane_g1

0xe22b,	// (0x000622ef) status_small_pane_g2

0xe234,	// (0x000622f8) status_small_pane_g3

0xe23d,	// (0x00062301) status_small_pane_g4

0x0003,

0xf603,	// (0x000636c7) status_small_pane_g

0xe246,	// (0x0006230a) status_small_pane_t1

0x3543,	// (0x00057607) main_video3_pane

0xeda7,	// (0x00062e6b) cams_zoom_vslider_pane

0xedaf,	// (0x00062e73) image3_wide_pane_ParamLimits

0xedaf,	// (0x00062e73) image3_wide_pane

0xedc9,	// (0x00062e8d) image3_wide_small_pane

0xedd5,	// (0x00062e99) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x00062e99) main_video3_pane_g1

0xedf1,	// (0x00062eb5) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x00062eb5) main_video3_pane_g2

0x0001,

0xf84e,	// (0x00063912) main_video3_pane_g_ParamLimits

0xf84e,	// (0x00063912) main_video3_pane_g

0xee0d,	// (0x00062ed1) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x00062ed1) main_video3_pane_t1

0xee38,	// (0x00062efc) main_video3_pane_t2_ParamLimits

0xee38,	// (0x00062efc) main_video3_pane_t2

0xee63,	// (0x00062f27) main_video3_pane_t3_ParamLimits

0xee63,	// (0x00062f27) main_video3_pane_t3

0x0002,

0xf853,	// (0x00063917) main_video3_pane_t_ParamLimits

0xf853,	// (0x00063917) main_video3_pane_t

0xee90,	// (0x00062f54) cams_zoom_vslider_pane_g1

0xee99,	// (0x00062f5d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0006391e) cams_zoom_vslider_pane_g

0xeea1,	// (0x00062f65) small_slider_vertical_pane

0xe679,	// (0x0006273d) small_slider_vertical_pane_g1

0xe679,	// (0x0006273d) small_slider_vertical_pane_g2

0xeea9,	// (0x00062f6d) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x00063923) small_slider_vertical_pane_g

0x3543,	// (0x00057607) main_hwr_training_pane

0xeeb2,	// (0x00062f76) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x00062f76) hwr_training_instruct_pane

0x80ba,	// (0x0005c17e) hwr_training_navi_pane_ParamLimits

0x80ba,	// (0x0005c17e) hwr_training_navi_pane

0x80d4,	// (0x0005c198) hwr_training_write_pane_ParamLimits

0x80d4,	// (0x0005c198) hwr_training_write_pane

0x1035,	// (0x000550f9) bg_frame_shadow_pane

0xeee9,	// (0x00062fad) hwr_training_write_pane_g1

0xeef1,	// (0x00062fb5) hwr_training_write_pane_g2

0xeef9,	// (0x00062fbd) hwr_training_write_pane_g3

0xef01,	// (0x00062fc5) hwr_training_write_pane_g4

0xef09,	// (0x00062fcd) hwr_training_write_pane_g5

0xef11,	// (0x00062fd5) hwr_training_write_pane_g6

0xef19,	// (0x00062fdd) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0006392a) hwr_training_write_pane_g

0x810c,	// (0x0005c1d0) hwr_training_navi_pane_g1_ParamLimits

0x810c,	// (0x0005c1d0) hwr_training_navi_pane_g1

0x811e,	// (0x0005c1e2) hwr_training_navi_pane_g2_ParamLimits

0x811e,	// (0x0005c1e2) hwr_training_navi_pane_g2

0x8130,	// (0x0005c1f4) hwr_training_navi_pane_g3_ParamLimits

0x8130,	// (0x0005c1f4) hwr_training_navi_pane_g3

0x8140,	// (0x0005c204) hwr_training_navi_pane_g4_ParamLimits

0x8140,	// (0x0005c204) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x00063939) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x00063939) hwr_training_navi_pane_g

0x815a,	// (0x0005c21e) hwr_training_navi_pane_t1

0x8168,	// (0x0005c22c) list_single_hwr_training_instruct_pane_ParamLimits

0x8168,	// (0x0005c22c) list_single_hwr_training_instruct_pane

0xef21,	// (0x00062fe5) list_single_hwr_training_instruct_pane_t1

0xe5b9,	// (0x0006267d) bg_frame_shadow_pane_g1

0xef30,	// (0x00062ff4) bg_frame_shadow_pane_g2

0xef38,	// (0x00062ffc) bg_frame_shadow_pane_g3

0xef40,	// (0x00063004) bg_frame_shadow_pane_g4

0xef48,	// (0x0006300c) bg_frame_shadow_pane_g5

0xef50,	// (0x00063014) bg_frame_shadow_pane_g6

0xef58,	// (0x0006301c) bg_frame_shadow_pane_g7

0xc3a2,	// (0x00060466) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x00063944) bg_frame_shadow_pane_g

0x3543,	// (0x00057607) main_video_tele_dialer_pane

0x818d,	// (0x0005c251) aid_size_cell_video_keypad_ParamLimits

0x818d,	// (0x0005c251) aid_size_cell_video_keypad

0x819d,	// (0x0005c261) grid_video_dialer_keypad_pane_ParamLimits

0x819d,	// (0x0005c261) grid_video_dialer_keypad_pane

0x81d1,	// (0x0005c295) video_down_pane_cp_ParamLimits

0x81d1,	// (0x0005c295) video_down_pane_cp

0x81fb,	// (0x0005c2bf) cell_video_dialer_keypad_pane_ParamLimits

0x81fb,	// (0x0005c2bf) cell_video_dialer_keypad_pane

0xef60,	// (0x00063024) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x00063024) bg_button_pane_cp08

0x8210,	// (0x0005c2d4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8210,	// (0x0005c2d4) cell_video_dialer_keypad_pane_g1

0x79f9,	// (0x0005babd) mup3_rocker2_pane_ParamLimits

0x79f9,	// (0x0005babd) mup3_rocker2_pane

0xe679,	// (0x0006273d) mup3_rocker2_pane_g1

0x6917,	// (0x0005a9db) main_dialer2_pane

0x3543,	// (0x00057607) main_mp4_pane

0x824f,	// (0x0005c313) main_mp4_pane_g1_ParamLimits

0x824f,	// (0x0005c313) main_mp4_pane_g1

0x825d,	// (0x0005c321) main_mp4_pane_g2_ParamLimits

0x825d,	// (0x0005c321) main_mp4_pane_g2

0x826b,	// (0x0005c32f) main_mp4_pane_g3_ParamLimits

0x826b,	// (0x0005c32f) main_mp4_pane_g3

0x82b0,	// (0x0005c374) main_mp4_pane_g4_ParamLimits

0x82b0,	// (0x0005c374) main_mp4_pane_g4

0x82d8,	// (0x0005c39c) main_mp4_pane_g5_ParamLimits

0x82d8,	// (0x0005c39c) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x00063964) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x00063964) main_mp4_pane_g

0x8328,	// (0x0005c3ec) main_mp4_pane_t1_ParamLimits

0x8328,	// (0x0005c3ec) main_mp4_pane_t1

0x8384,	// (0x0005c448) main_mp4_pane_t2_ParamLimits

0x8384,	// (0x0005c448) main_mp4_pane_t2

0xef6c,	// (0x00063030) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x00063030) main_mp4_pane_t3

0x83d6,	// (0x0005c49a) main_mp4_pane_t4_ParamLimits

0x83d6,	// (0x0005c49a) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x00063971) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x00063971) main_mp4_pane_t

0x841a,	// (0x0005c4de) mp4_progress_pane_ParamLimits

0x841a,	// (0x0005c4de) mp4_progress_pane

0x8464,	// (0x0005c528) mp4_rocker_pane_ParamLimits

0x8464,	// (0x0005c528) mp4_rocker_pane

0xef94,	// (0x00063058) mp4_progress_pane_t1

0xefad,	// (0x00063071) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0006397a) mp4_progress_pane_t

0xefc6,	// (0x0006308a) mup_progress_pane_cp04

0x0b66,	// (0x00054c2a) mp4_rocker_pane_g1

0x8484,	// (0x0005c548) aid_cell_size_keypad2_ParamLimits

0x8484,	// (0x0005c548) aid_cell_size_keypad2

0x8494,	// (0x0005c558) dialer2_ne_pane_ParamLimits

0x8494,	// (0x0005c558) dialer2_ne_pane

0x84a2,	// (0x0005c566) grid_dialer2_keypad_pane_ParamLimits

0x84a2,	// (0x0005c566) grid_dialer2_keypad_pane

0x0bc1,	// (0x00054c85) bg_popup_call_pane_cp07_ParamLimits

0x0bc1,	// (0x00054c85) bg_popup_call_pane_cp07

0x84b2,	// (0x0005c576) dialer2_ne_pane_t1_ParamLimits

0x84b2,	// (0x0005c576) dialer2_ne_pane_t1

0x84d7,	// (0x0005c59b) cell_dialer2_keypad_pane_ParamLimits

0x84d7,	// (0x0005c59b) cell_dialer2_keypad_pane

0xefe4,	// (0x000630a8) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x000630a8) bg_button_pane_pane_cp04

0x84ec,	// (0x0005c5b0) cell_dialer2_keypad_pane_g1_ParamLimits

0x84ec,	// (0x0005c5b0) cell_dialer2_keypad_pane_g1

0x4444,	// (0x00058508) aid_placing_vt_set_content_ParamLimits

0x4444,	// (0x00058508) aid_placing_vt_set_content

0x4470,	// (0x00058534) aid_placing_vt_set_title_ParamLimits

0x4470,	// (0x00058534) aid_placing_vt_set_title

0x3543,	// (0x00057607) main_image3_pane

0x8586,	// (0x0005c64a) area_side_right_pane_cp01_ParamLimits

0x8586,	// (0x0005c64a) area_side_right_pane_cp01

0x85b3,	// (0x0005c677) main_image3_pane_g1_ParamLimits

0x85b3,	// (0x0005c677) main_image3_pane_g1

0x85c1,	// (0x0005c685) main_image3_pane_g2_ParamLimits

0x85c1,	// (0x0005c685) main_image3_pane_g2

0x85da,	// (0x0005c69e) main_image3_pane_g3_ParamLimits

0x85da,	// (0x0005c69e) main_image3_pane_g3

0x85f3,	// (0x0005c6b7) main_image3_pane_g4_ParamLimits

0x85f3,	// (0x0005c6b7) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x00063989) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x00063989) main_image3_pane_g

0x860c,	// (0x0005c6d0) main_image3_pane_t1_ParamLimits

0x860c,	// (0x0005c6d0) main_image3_pane_t1

0x8631,	// (0x0005c6f5) main_image3_pane_t2_ParamLimits

0x8631,	// (0x0005c6f5) main_image3_pane_t2

0x8650,	// (0x0005c714) main_image3_pane_t3_ParamLimits

0x8650,	// (0x0005c714) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00063992) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00063992) main_image3_pane_t

0x1b48,	// (0x00055c0c) grid_sctrl_middle_pane_cp01_ParamLimits

0x1b48,	// (0x00055c0c) grid_sctrl_middle_pane_cp01

0x86b1,	// (0x0005c775) cell_sctrl_middle_pane_cp01_ParamLimits

0x86b1,	// (0x0005c775) cell_sctrl_middle_pane_cp01

0x86c2,	// (0x0005c786) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x86c2,	// (0x0005c786) cell_sctrl_middle_pane_cp01_g1

0x3543,	// (0x00057607) main_call4_pane

0x86cf,	// (0x0005c793) aid_size_button_call4_ParamLimits

0x86cf,	// (0x0005c793) aid_size_button_call4

0x86ff,	// (0x0005c7c3) call4_windows_pane_ParamLimits

0x86ff,	// (0x0005c7c3) call4_windows_pane

0x8719,	// (0x0005c7dd) grid_call4_button_pane_ParamLimits

0x8719,	// (0x0005c7dd) grid_call4_button_pane

0xeff0,	// (0x000630b4) call4_windows_conf_pane

0xf007,	// (0x000630cb) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x000630cb) popup_call4_audio_first_window

0xf053,	// (0x00063117) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x00063117) popup_call4_audio_second_window

0xf067,	// (0x0006312b) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x0006312b) popup_call4_audio_wait_window

0x873d,	// (0x0005c801) cell_call4_button_pane_ParamLimits

0x873d,	// (0x0005c801) cell_call4_button_pane

0x8762,	// (0x0005c826) bg_button_pane_cp09_ParamLimits

0x8762,	// (0x0005c826) bg_button_pane_cp09

0x876e,	// (0x0005c832) cell_call4_button_pane_g1_ParamLimits

0x876e,	// (0x0005c832) cell_call4_button_pane_g1

0x877b,	// (0x0005c83f) cell_call4_button_pane_t1_ParamLimits

0x877b,	// (0x0005c83f) cell_call4_button_pane_t1

0xf0af,	// (0x00063173) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x00063173) popup_call4_audio_conf_window

0x7a2c,	// (0x0005baf0) mup3_progress_pane_t1_ParamLimits

0x7a4b,	// (0x0005bb0f) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x00062a83) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0006386b) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x00062aa0) mup_progress_pane_cp03_ParamLimits

0x7f59,	// (0x0005c01d) mup3_control_keys_pane_g4_copy1

0x8448,	// (0x0005c50c) mp4_rocker2_pane_ParamLimits

0x8448,	// (0x0005c50c) mp4_rocker2_pane

0xf0c3,	// (0x00063187) mp4_rocker2_pane_g1

0xf0cb,	// (0x0006318f) mp4_rocker2_pane_g2

0x878d,	// (0x0005c851) mp4_rocker2_pane_g3

0x8795,	// (0x0005c859) mp4_rocker2_pane_g4

0x879d,	// (0x0005c861) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0006399b) mp4_rocker2_pane_g

0x3543,	// (0x00057607) main_camera4_pane

0x3543,	// (0x00057607) main_video4_pane

0x81ad,	// (0x0005c271) main_video_tele_dialer_pane_t1_ParamLimits

0x81ad,	// (0x0005c271) main_video_tele_dialer_pane_t1

0x81bf,	// (0x0005c283) main_video_tele_dialer_pane_t2_ParamLimits

0x81bf,	// (0x0005c283) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x00063955) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x00063955) main_video_tele_dialer_pane_t

0x87bd,	// (0x0005c881) cam4_autofocus_pane_ParamLimits

0x87bd,	// (0x0005c881) cam4_autofocus_pane

0x87d7,	// (0x0005c89b) cam4_image_uncrop_pane_ParamLimits

0x87d7,	// (0x0005c89b) cam4_image_uncrop_pane

0x87ee,	// (0x0005c8b2) cam4_indicators_pane_ParamLimits

0x87ee,	// (0x0005c8b2) cam4_indicators_pane

0x880a,	// (0x0005c8ce) main_camera4_pane_g1_ParamLimits

0x880a,	// (0x0005c8ce) main_camera4_pane_g1

0x8816,	// (0x0005c8da) main_camera4_pane_g2_ParamLimits

0x8816,	// (0x0005c8da) main_camera4_pane_g2

0x8816,	// (0x0005c8da) main_camera4_pane_g3_ParamLimits

0x8816,	// (0x0005c8da) main_camera4_pane_g3

0x8822,	// (0x0005c8e6) main_camera4_pane_g4_ParamLimits

0x8822,	// (0x0005c8e6) main_camera4_pane_g4

0x882e,	// (0x0005c8f2) main_camera4_pane_g5_ParamLimits

0x882e,	// (0x0005c8f2) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000639a6) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000639a6) main_camera4_pane_g

0x8848,	// (0x0005c90c) main_camera4_pane_t1_ParamLimits

0x8848,	// (0x0005c90c) main_camera4_pane_t1

0x8890,	// (0x0005c954) bg_tb_trans_pane_cp06

0x88a6,	// (0x0005c96a) cam4_indicators_pane_g1

0x88b7,	// (0x0005c97b) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000639c1) cam4_indicators_pane_g

0x88d5,	// (0x0005c999) cam4_indicators_pane_t1

0x88ff,	// (0x0005c9c3) main_video4_pane_g1_ParamLimits

0x88ff,	// (0x0005c9c3) main_video4_pane_g1

0x890b,	// (0x0005c9cf) main_video4_pane_g2_ParamLimits

0x890b,	// (0x0005c9cf) main_video4_pane_g2

0x8917,	// (0x0005c9db) main_video4_pane_g3_ParamLimits

0x8917,	// (0x0005c9db) main_video4_pane_g3

0x8923,	// (0x0005c9e7) main_video4_pane_g4_ParamLimits

0x8923,	// (0x0005c9e7) main_video4_pane_g4

0x0004,

0xf904,	// (0x000639c8) main_video4_pane_g_ParamLimits

0xf904,	// (0x000639c8) main_video4_pane_g

0x8943,	// (0x0005ca07) vid4_indicators_pane_ParamLimits

0x8943,	// (0x0005ca07) vid4_indicators_pane

0x8962,	// (0x0005ca26) video4_image_uncrop_cif_pane_ParamLimits

0x8962,	// (0x0005ca26) video4_image_uncrop_cif_pane

0x8971,	// (0x0005ca35) video4_image_uncrop_nhd_pane_ParamLimits

0x8971,	// (0x0005ca35) video4_image_uncrop_nhd_pane

0x87d7,	// (0x0005c89b) video4_image_uncrop_vga_pane_ParamLimits

0x87d7,	// (0x0005c89b) video4_image_uncrop_vga_pane

0x6909,	// (0x0005a9cd) bg_tb_trans_pane_cp07

0x8988,	// (0x0005ca4c) vid4_indicators_pane_g1

0x899c,	// (0x0005ca60) vid4_indicators_pane_g2

0x89b0,	// (0x0005ca74) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000639d3) vid4_indicators_pane_g

0x89df,	// (0x0005caa3) vid4_indicators_pane_t1

0x89f6,	// (0x0005caba) cam4_autofocus_pane_g1

0x89fe,	// (0x0005cac2) cam4_autofocus_pane_g2

0x8a06,	// (0x0005caca) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000639de) cam4_autofocus_pane_g

0x8a0e,	// (0x0005cad2) cam4_autofocus_pane_g3_copy1

0x81df,	// (0x0005c2a3) video_down_pane_cp_t1

0x81ed,	// (0x0005c2b1) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0006395a) video_down_pane_cp_t

0x3529,	// (0x000575ed) popup_vitu2_window_ParamLimits

0x3529,	// (0x000575ed) popup_vitu2_window

0x8a16,	// (0x0005cada) aid_size_cell2_itu2_ParamLimits

0x8a16,	// (0x0005cada) aid_size_cell2_itu2

0x8a38,	// (0x0005cafc) aid_size_cell_itu2_ParamLimits

0x8a38,	// (0x0005cafc) aid_size_cell_itu2

0x8a7c,	// (0x0005cb40) bg_popup_window_pane_cp09_ParamLimits

0x8a7c,	// (0x0005cb40) bg_popup_window_pane_cp09

0x8a8a,	// (0x0005cb4e) field_vitu2_entry_pane_ParamLimits

0x8a8a,	// (0x0005cb4e) field_vitu2_entry_pane

0x8aaa,	// (0x0005cb6e) grid_vitu2_function_pane_ParamLimits

0x8aaa,	// (0x0005cb6e) grid_vitu2_function_pane

0x8aee,	// (0x0005cbb2) grid_vitu2_itu_pane_ParamLimits

0x8aee,	// (0x0005cbb2) grid_vitu2_itu_pane

0x8b66,	// (0x0005cc2a) cell_vitu2_itu_pane_ParamLimits

0x8b66,	// (0x0005cc2a) cell_vitu2_itu_pane

0x8b7b,	// (0x0005cc3f) cell_vitu2_function_pane_ParamLimits

0x8b7b,	// (0x0005cc3f) cell_vitu2_function_pane

0x04fb,	// (0x000545bf) bg_popup_call_pane_cp08_ParamLimits

0x04fb,	// (0x000545bf) bg_popup_call_pane_cp08

0x0514,	// (0x000545d8) field_vitu2_entry_pane_g1

0x0520,	// (0x000545e4) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x000639e5) field_vitu2_entry_pane_g

0x8bba,	// (0x0005cc7e) field_vitu2_entry_pane_t1_ParamLimits

0x8bba,	// (0x0005cc7e) field_vitu2_entry_pane_t1

0x0023,	// (0x000540e7) field_vitu2_entry_pane_t2_ParamLimits

0x0023,	// (0x000540e7) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x000639ec) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x000639ec) field_vitu2_entry_pane_t

0x8bea,	// (0x0005ccae) bg_button_pane_cp010_ParamLimits

0x8bea,	// (0x0005ccae) bg_button_pane_cp010

0x8bf8,	// (0x0005ccbc) cell_vitu2_itu_pane_g1

0x8c16,	// (0x0005ccda) cell_vitu2_itu_pane_t1_ParamLimits

0x8c16,	// (0x0005ccda) cell_vitu2_itu_pane_t1

0x31a5,	// (0x00057269) cell_vitu2_itu_pane_t2_ParamLimits

0x31a5,	// (0x00057269) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x000639f6) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x000639f6) cell_vitu2_itu_pane_t

0x6909,	// (0x0005a9cd) bg_button_pane_cp011

0x8c68,	// (0x0005cd2c) cell_vitu2_function_pane_g1

0x3543,	// (0x00057607) main_myfav_hc_pane

0x8692,	// (0x0005c756) popup_image3_note_pane_ParamLimits

0x8692,	// (0x0005c756) popup_image3_note_pane

0x86a0,	// (0x0005c764) popup_image3_tool_bar_pane_ParamLimits

0x86a0,	// (0x0005c764) popup_image3_tool_bar_pane

0x3213,	// (0x000572d7) cell_vitu2_itu_pane_t3_ParamLimits

0x3213,	// (0x000572d7) cell_vitu2_itu_pane_t3

0x1035,	// (0x000550f9) bg_popup_trans_pane

0x0542,	// (0x00054606) grid_image3_tool_bar_pane

0x054c,	// (0x00054610) bg_popup_trans_pane_g1

0xc70a,	// (0x000607ce) bg_popup_trans_pane_g2

0x0554,	// (0x00054618) bg_popup_trans_pane_g3

0x055c,	// (0x00054620) bg_popup_trans_pane_g4

0x0564,	// (0x00054628) bg_popup_trans_pane_g5

0x056c,	// (0x00054630) bg_popup_trans_pane_g6

0x0574,	// (0x00054638) bg_popup_trans_pane_g7

0x057c,	// (0x00054640) bg_popup_trans_pane_g8

0xc6ea,	// (0x000607ae) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x000639fd) bg_popup_trans_pane_g

0x0584,	// (0x00054648) cell_image3_tool_bar_pane_ParamLimits

0x0584,	// (0x00054648) cell_image3_tool_bar_pane

0xe679,	// (0x0006273d) cell_image3_tool_bar_pane_g1

0x1035,	// (0x000550f9) bg_popup_trans_pane_cp1

0x0598,	// (0x0005465c) popup_image3_note_pane_t1

0x05a6,	// (0x0005466a) popup_image3_note_pane_t2

0x05b4,	// (0x00054678) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00063a10) popup_image3_note_pane_t

0x05c2,	// (0x00054686) popup_image3_note_pane_t3_copy1

0x8c7c,	// (0x0005cd40) bg_myfav_hc_instruction_pane_ParamLimits

0x8c7c,	// (0x0005cd40) bg_myfav_hc_instruction_pane

0x8c94,	// (0x0005cd58) cell_myfav_contact_pane_ParamLimits

0x8c94,	// (0x0005cd58) cell_myfav_contact_pane

0x8cae,	// (0x0005cd72) cell_myfav_contact_pane_cp1_ParamLimits

0x8cae,	// (0x0005cd72) cell_myfav_contact_pane_cp1

0x8cc6,	// (0x0005cd8a) cell_myfav_contact_pane_cp2_ParamLimits

0x8cc6,	// (0x0005cd8a) cell_myfav_contact_pane_cp2

0x8cde,	// (0x0005cda2) cell_myfav_contact_pane_cp3_ParamLimits

0x8cde,	// (0x0005cda2) cell_myfav_contact_pane_cp3

0x8cf5,	// (0x0005cdb9) cell_myfav_contact_pane_cp4_ParamLimits

0x8cf5,	// (0x0005cdb9) cell_myfav_contact_pane_cp4

0x8d0b,	// (0x0005cdcf) cell_myfav_contact_pane_cp5_ParamLimits

0x8d0b,	// (0x0005cdcf) cell_myfav_contact_pane_cp5

0x8d1f,	// (0x0005cde3) cell_myfav_contact_pane_cp6_ParamLimits

0x8d1f,	// (0x0005cde3) cell_myfav_contact_pane_cp6

0x8d33,	// (0x0005cdf7) cell_myfav_contact_pane_cp7_ParamLimits

0x8d33,	// (0x0005cdf7) cell_myfav_contact_pane_cp7

0x05d0,	// (0x00054694) listscroll_gen_pane_cp05

0x8d4b,	// (0x0005ce0f) main_myfav_hc_pane_g1_ParamLimits

0x8d4b,	// (0x0005ce0f) main_myfav_hc_pane_g1

0x8d61,	// (0x0005ce25) main_myfav_hc_pane_g2_ParamLimits

0x8d61,	// (0x0005ce25) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x00063a17) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x00063a17) main_myfav_hc_pane_g

0x8d8f,	// (0x0005ce53) main_myfav_hc_pane_t1_ParamLimits

0x8d8f,	// (0x0005ce53) main_myfav_hc_pane_t1

0x05d9,	// (0x0005469d) main_myfav_hc_pane_t2_ParamLimits

0x05d9,	// (0x0005469d) main_myfav_hc_pane_t2

0x05eb,	// (0x000546af) main_myfav_hc_pane_t3_ParamLimits

0x05eb,	// (0x000546af) main_myfav_hc_pane_t3

0x8da6,	// (0x0005ce6a) main_myfav_hc_pane_t4_ParamLimits

0x8da6,	// (0x0005ce6a) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x00063a1e) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x00063a1e) main_myfav_hc_pane_t

0xe679,	// (0x0006273d) bg_myfav_hc_instruction_pane_g1

0x05fd,	// (0x000546c1) cell_myfav_contact_pane_g1_ParamLimits

0x05fd,	// (0x000546c1) cell_myfav_contact_pane_g1

0x05fd,	// (0x000546c1) cell_myfav_contact_pane_g2_ParamLimits

0x05fd,	// (0x000546c1) cell_myfav_contact_pane_g2

0x0609,	// (0x000546cd) cell_myfav_contact_pane_g3_ParamLimits

0x0609,	// (0x000546cd) cell_myfav_contact_pane_g3

0xe9a9,	// (0x00062a6d) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x00062a6d) cell_myfav_contact_pane_g4

0x0616,	// (0x000546da) cell_myfav_contact_pane_g5_ParamLimits

0x0616,	// (0x000546da) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x00063a29) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x00063a29) cell_myfav_contact_pane_g

0x8d77,	// (0x0005ce3b) main_myfav_hc_pane_g3_ParamLimits

0x8d77,	// (0x0005ce3b) main_myfav_hc_pane_g3

0x3432,	// (0x000574f6) popup_adpt_find_window

0x8dd0,	// (0x0005ce94) afind_page_pane_ParamLimits

0x8dd0,	// (0x0005ce94) afind_page_pane

0x8ddd,	// (0x0005cea1) aid_size_cell_afind_ParamLimits

0x8ddd,	// (0x0005cea1) aid_size_cell_afind

0x8df7,	// (0x0005cebb) bg_popup_sub_pane_cp09_ParamLimits

0x8df7,	// (0x0005cebb) bg_popup_sub_pane_cp09

0x8e04,	// (0x0005cec8) find_pane_cp01_ParamLimits

0x8e04,	// (0x0005cec8) find_pane_cp01

0x0622,	// (0x000546e6) grid_afind_control_pane_ParamLimits

0x0622,	// (0x000546e6) grid_afind_control_pane

0x8e11,	// (0x0005ced5) grid_afind_pane_ParamLimits

0x8e11,	// (0x0005ced5) grid_afind_pane

0x8e2d,	// (0x0005cef1) cell_afind_pane_ParamLimits

0x8e2d,	// (0x0005cef1) cell_afind_pane

0xe679,	// (0x0006273d) afind_page_pane_g1

0x8e75,	// (0x0005cf39) afind_page_pane_g2

0x8e7e,	// (0x0005cf42) afind_page_pane_g3

0x0002,

0xf970,	// (0x00063a34) afind_page_pane_g

0x8e87,	// (0x0005cf4b) afind_page_pane_t1

0x0636,	// (0x000546fa) cell_afind_grid_control_pane_ParamLimits

0x0636,	// (0x000546fa) cell_afind_grid_control_pane

0xefe4,	// (0x000630a8) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x000630a8) bg_button_pane_cp69

0x8ea7,	// (0x0005cf6b) cell_afind_pane_g1_ParamLimits

0x8ea7,	// (0x0005cf6b) cell_afind_pane_g1

0x8eb4,	// (0x0005cf78) cell_afind_pane_t1_ParamLimits

0x8eb4,	// (0x0005cf78) cell_afind_pane_t1

0xc503,	// (0x000605c7) bg_button_pane_cp72

0x0645,	// (0x00054709) cell_afind_grid_control_pane_g1

0x6487,	// (0x0005a54b) aid_image_placing_area_ParamLimits

0x6487,	// (0x0005a54b) aid_image_placing_area

0xecb2,	// (0x00062d76) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x00062d76) field_vitu_entry_pane_g1

0xecbe,	// (0x00062d82) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x00062d82) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000638e5) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000638e5) field_vitu_entry_pane_g

0x7fe1,	// (0x0005c0a5) cell_vitu_itu_pane_g1_ParamLimits

0x8023,	// (0x0005c0e7) cell_vitu_itu_pane_t3_ParamLimits

0x8023,	// (0x0005c0e7) cell_vitu_itu_pane_t3

0xef94,	// (0x00063058) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x00063071) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0006397a) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x0006308a) mup_progress_pane_cp04_ParamLimits

0x8dba,	// (0x0005ce7e) main_myfav_hc_pane_t5_ParamLimits

0x8dba,	// (0x0005ce7e) main_myfav_hc_pane_t5

0x32c0,	// (0x00057384) aid_zoom_text_primary

0x3432,	// (0x000574f6) popup_adpt_find_window_ParamLimits

0x6909,	// (0x0005a9cd) main_cam_set_pane

0x87fc,	// (0x0005c8c0) cam4_zoom_pane_ParamLimits

0x87fc,	// (0x0005c8c0) cam4_zoom_pane

0x8ec6,	// (0x0005cf8a) main_cam_set_pane_g1_ParamLimits

0x8ec6,	// (0x0005cf8a) main_cam_set_pane_g1

0x8ed4,	// (0x0005cf98) main_cam_set_pane_g2_ParamLimits

0x8ed4,	// (0x0005cf98) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x00063a3b) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x00063a3b) main_cam_set_pane_g

0x8ee0,	// (0x0005cfa4) main_cam_set_pane_t1_ParamLimits

0x8ee0,	// (0x0005cfa4) main_cam_set_pane_t1

0x8efc,	// (0x0005cfc0) main_cset_listscroll_pane_ParamLimits

0x8efc,	// (0x0005cfc0) main_cset_listscroll_pane

0x8f27,	// (0x0005cfeb) main_cset_slider_pane_ParamLimits

0x8f27,	// (0x0005cfeb) main_cset_slider_pane

0x0656,	// (0x0005471a) main_cset_list_pane_ParamLimits

0x0656,	// (0x0005471a) main_cset_list_pane

0x0666,	// (0x0005472a) scroll_pane_cp028

0x8f46,	// (0x0005d00a) aid_area_touch_slider

0x8f62,	// (0x0005d026) cset_slider_pane

0x8f8c,	// (0x0005d050) main_cset_slider_pane_g1

0x8fa1,	// (0x0005d065) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x00063a40) main_cset_slider_pane_g

0x069f,	// (0x00054763) main_cset_slider_pane_t1

0x9063,	// (0x0005d127) main_cset_slider_pane_t2

0x907d,	// (0x0005d141) main_cset_slider_pane_t3

0x9097,	// (0x0005d15b) main_cset_slider_pane_t4

0x90b1,	// (0x0005d175) main_cset_slider_pane_t5

0x90cf,	// (0x0005d193) main_cset_slider_pane_t6

0x90e6,	// (0x0005d1aa) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x00063a65) main_cset_slider_pane_t

0x91f2,	// (0x0005d2b6) cset_list_set_pane_ParamLimits

0x91f2,	// (0x0005d2b6) cset_list_set_pane

0x9208,	// (0x0005d2cc) aid_position_infowindow_above

0x9210,	// (0x0005d2d4) aid_position_infowindow_below

0x0040,	// (0x00054104) cset_list_set_pane_g1_ParamLimits

0x0040,	// (0x00054104) cset_list_set_pane_g1

0x004c,	// (0x00054110) cset_list_set_pane_g3_ParamLimits

0x004c,	// (0x00054110) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x00063a84) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x00063a84) cset_list_set_pane_g

0x005b,	// (0x0005411f) cset_list_set_pane_t1_ParamLimits

0x005b,	// (0x0005411f) cset_list_set_pane_t1

0xdaba,	// (0x00061b7e) list_highlight_pane_cp021_ParamLimits

0xdaba,	// (0x00061b7e) list_highlight_pane_cp021

0xcf57,	// (0x0006101b) cset_slider_pane_g1

0xcf69,	// (0x0006102d) cset_slider_pane_g2

0xcf60,	// (0x00061024) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x00063a89) cset_slider_pane_g

0x9218,	// (0x0005d2dc) aid_area_touch_cam4_zoom

0x9220,	// (0x0005d2e4) cam4_zoom_cont_pane

0x9228,	// (0x0005d2ec) cam4_zoom_pane_g1

0x9230,	// (0x0005d2f4) cam4_zoom_pane_g2

0x9238,	// (0x0005d2fc) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x00063a90) cam4_zoom_pane_g

0x9240,	// (0x0005d304) cam4_zoom_cont_pane_g1

0x9249,	// (0x0005d30d) cam4_zoom_cont_pane_g2

0x9252,	// (0x0005d316) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x00063a97) cam4_zoom_cont_pane_g

0x86e9,	// (0x0005c7ad) call4_image_pane_ParamLimits

0x86e9,	// (0x0005c7ad) call4_image_pane

0xeff0,	// (0x000630b4) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x000630f5) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x000630f5) popup_call4_audio_in_window

0x1035,	// (0x000550f9) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x0006316b) call4_list_conf_pane

0xe679,	// (0x0006273d) call4_image_pane_g1

0xe679,	// (0x0006273d) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000637ab) call4_image_pane_g

0x075a,	// (0x0005481e) list_single_graphic_popup_conf4_pane_ParamLimits

0x075a,	// (0x0005481e) list_single_graphic_popup_conf4_pane

0x1035,	// (0x000550f9) list_highlight_pane_cp022

0x076d,	// (0x00054831) list_single_graphic_popup_conf4_pane_g1

0xcc26,	// (0x00060cea) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x00063a9e) list_single_graphic_popup_conf4_pane_g

0x0775,	// (0x00054839) list_single_graphic_popup_conf4_pane_t1

0x45d4,	// (0x00058698) popup_vtel_slider_window_ParamLimits

0x45d4,	// (0x00058698) popup_vtel_slider_window

0xefd2,	// (0x00063096) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x00063096) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0006397f) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0006397f) dialer2_ne_pane_t

0xdaba,	// (0x00061b7e) bg_popup_sub_pane_cp010_ParamLimits

0xdaba,	// (0x00061b7e) bg_popup_sub_pane_cp010

0x925b,	// (0x0005d31f) popup_vtel_slider_window_g1_ParamLimits

0x925b,	// (0x0005d31f) popup_vtel_slider_window_g1

0x9267,	// (0x0005d32b) popup_vtel_slider_window_g2_ParamLimits

0x9267,	// (0x0005d32b) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x00063aa3) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x00063aa3) popup_vtel_slider_window_g

0x92af,	// (0x0005d373) vtel_slider_pane_ParamLimits

0x92af,	// (0x0005d373) vtel_slider_pane

0x92be,	// (0x0005d382) vtel_slider_pane_g1_ParamLimits

0x92be,	// (0x0005d382) vtel_slider_pane_g1

0x92cb,	// (0x0005d38f) vtel_slider_pane_g2_ParamLimits

0x92cb,	// (0x0005d38f) vtel_slider_pane_g2

0x92d8,	// (0x0005d39c) vtel_slider_pane_g3_ParamLimits

0x92d8,	// (0x0005d39c) vtel_slider_pane_g3

0x92be,	// (0x0005d382) vtel_slider_pane_g4_ParamLimits

0x92be,	// (0x0005d382) vtel_slider_pane_g4

0x92e5,	// (0x0005d3a9) vtel_slider_pane_g5_ParamLimits

0x92e5,	// (0x0005d3a9) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x00063aac) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x00063aac) vtel_slider_pane_g

0x3543,	// (0x00057607) main_gallery2_pane

0x8a5e,	// (0x0005cb22) aid_size_row_itut2_dropdow_list_ParamLimits

0x8a5e,	// (0x0005cb22) aid_size_row_itut2_dropdow_list

0x8acc,	// (0x0005cb90) grid_vitu2_function_top_pane_ParamLimits

0x8acc,	// (0x0005cb90) grid_vitu2_function_top_pane

0x8b22,	// (0x0005cbe6) popup_vitu2_dropdown_list_window_ParamLimits

0x8b22,	// (0x0005cbe6) popup_vitu2_dropdown_list_window

0x8b42,	// (0x0005cc06) popup_vitu2_match_list_window

0x9300,	// (0x0005d3c4) cell_vitu2_function_top_pane_ParamLimits

0x9300,	// (0x0005d3c4) cell_vitu2_function_top_pane

0x9320,	// (0x0005d3e4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9320,	// (0x0005d3e4) cell_vitu2_function_top_pane_cp01

0x933e,	// (0x0005d402) cell_vitu2_function_top_wide_pane_ParamLimits

0x933e,	// (0x0005d402) cell_vitu2_function_top_wide_pane

0x6909,	// (0x0005a9cd) bg_button_pane_cp012

0x935c,	// (0x0005d420) cell_vitu2_function_top_pane_g1

0x936b,	// (0x0005d42f) bg_button_pane_cp013_ParamLimits

0x936b,	// (0x0005d42f) bg_button_pane_cp013

0x9387,	// (0x0005d44b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9387,	// (0x0005d44b) cell_vitu2_function_top_wide_pane_g1

0x3529,	// (0x000575ed) bg_popup_sub_pane_cp20

0x939f,	// (0x0005d463) list_vitu2_match_list_pane

0x054c,	// (0x00054610) bg_popup_sub_pane_cp20_g1

0x0554,	// (0x00054618) bg_popup_sub_pane_cp20_g2

0xc70a,	// (0x000607ce) bg_popup_sub_pane_cp20_g3

0x055c,	// (0x00054620) bg_popup_sub_pane_cp20_g4

0xc6ea,	// (0x000607ae) bg_popup_sub_pane_cp20_g5

0x078b,	// (0x0005484f) bg_popup_sub_pane_cp20_g6

0x056c,	// (0x00054630) bg_popup_sub_pane_cp20_g7

0x0574,	// (0x00054638) bg_popup_sub_pane_cp20_g8

0x057c,	// (0x00054640) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x00063ab7) bg_popup_sub_pane_cp20_g

0x93b7,	// (0x0005d47b) list_vitu2_match_list_item_pane_ParamLimits

0x93b7,	// (0x0005d47b) list_vitu2_match_list_item_pane

0x93c9,	// (0x0005d48d) list_vitu2_match_list_item_pane_t1

0x3543,	// (0x00057607) bg_popup_sub_pane_cp21

0x941e,	// (0x0005d4e2) grid_vitu2_dropdown_list_pane

0x9426,	// (0x0005d4ea) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9426,	// (0x0005d4ea) cell_vitu2_dropdown_list_char_pane

0x9447,	// (0x0005d50b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9447,	// (0x0005d50b) cell_vitu2_dropdown_list_ctrl_pane

0x07a5,	// (0x00054869) cell_vitu2_dropdown_list_char_pane_g1

0x079c,	// (0x00054860) cell_vitu2_dropdown_list_char_pane_g2

0x0793,	// (0x00054857) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00063ad4) cell_vitu2_dropdown_list_char_pane_g

0x9473,	// (0x0005d537) cell_vitu2_dropdown_list_char_pane_t1

0x9481,	// (0x0005d545) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9481,	// (0x0005d545) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9491,	// (0x0005d555) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9491,	// (0x0005d555) cell_vitu2_dropdown_list_ctrl_pane_g2

0x94a2,	// (0x0005d566) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x94a2,	// (0x0005d566) cell_vitu2_dropdown_list_ctrl_pane_g3

0x94b2,	// (0x0005d576) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x94b2,	// (0x0005d576) cell_vitu2_dropdown_list_ctrl_pane_g4

0x8890,	// (0x0005c954) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x8890,	// (0x0005c954) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x00063adb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x00063adb) cell_vitu2_dropdown_list_ctrl_pane_g

0x94ce,	// (0x0005d592) aid_size_cell_gallery2_ParamLimits

0x94ce,	// (0x0005d592) aid_size_cell_gallery2

0x94dc,	// (0x0005d5a0) grid_gallery2_pane_ParamLimits

0x94dc,	// (0x0005d5a0) grid_gallery2_pane

0x94eb,	// (0x0005d5af) scroll_pane_cp029_ParamLimits

0x94eb,	// (0x0005d5af) scroll_pane_cp029

0x94f7,	// (0x0005d5bb) cell_gallery2_pane_ParamLimits

0x94f7,	// (0x0005d5bb) cell_gallery2_pane

0x07ae,	// (0x00054872) cell_gallery2_pane_g2

0x102d,	// (0x000550f1) cell_gallery2_pane_g3

0x07b8,	// (0x0005487c) cell_gallery2_pane_g4

0x07c0,	// (0x00054884) cell_gallery2_pane_g5

0xce21,	// (0x00060ee5) grid_highlight_pane_cp10

0x8b42,	// (0x0005cc06) popup_vitu2_match_list_window_ParamLimits

0x8b56,	// (0x0005cc1a) popup_vitu2_query_window_ParamLimits

0x8b56,	// (0x0005cc1a) popup_vitu2_query_window

0x3543,	// (0x00057607) bg_vitu2_candi_button_pane

0x07a5,	// (0x00054869) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x079c,	// (0x00054860) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0793,	// (0x00054857) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9525,	// (0x0005d5e9) bg_button_pane_cp015

0x9537,	// (0x0005d5fb) bg_button_pane_cp016

0x954a,	// (0x0005d60e) bg_button_pane_cp017

0xe268,	// (0x0006232c) bg_popup_sub_pane_cp22

0x07c8,	// (0x0005488c) popup_vitu2_query_window_g1

0x958f,	// (0x0005d653) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x00063ae6) popup_vitu2_query_window_g

0x95ac,	// (0x0005d670) popup_vitu2_query_window_t1_ParamLimits

0x95ac,	// (0x0005d670) popup_vitu2_query_window_t1

0x95df,	// (0x0005d6a3) popup_vitu2_query_window_t2_ParamLimits

0x95df,	// (0x0005d6a3) popup_vitu2_query_window_t2

0x95f1,	// (0x0005d6b5) popup_vitu2_query_window_t3_ParamLimits

0x95f1,	// (0x0005d6b5) popup_vitu2_query_window_t3

0x9619,	// (0x0005d6dd) popup_vitu2_query_window_t4_ParamLimits

0x9619,	// (0x0005d6dd) popup_vitu2_query_window_t4

0x963a,	// (0x0005d6fe) popup_vitu2_query_window_t5_ParamLimits

0x963a,	// (0x0005d6fe) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x00063aed) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x00063aed) popup_vitu2_query_window_t

0x064e,	// (0x00054712) main_cset_text_pane

0x8f46,	// (0x0005d00a) aid_area_touch_slider_ParamLimits

0x8f62,	// (0x0005d026) cset_slider_pane_ParamLimits

0x8f8c,	// (0x0005d050) main_cset_slider_pane_g1_ParamLimits

0x8fa1,	// (0x0005d065) main_cset_slider_pane_g2_ParamLimits

0x066f,	// (0x00054733) main_cset_slider_pane_g3_ParamLimits

0x066f,	// (0x00054733) main_cset_slider_pane_g3

0x8fb6,	// (0x0005d07a) main_cset_slider_pane_g4_ParamLimits

0x8fb6,	// (0x0005d07a) main_cset_slider_pane_g4

0x8fc5,	// (0x0005d089) main_cset_slider_pane_g5_ParamLimits

0x8fc5,	// (0x0005d089) main_cset_slider_pane_g5

0x8fd3,	// (0x0005d097) main_cset_slider_pane_g6_ParamLimits

0x8fd3,	// (0x0005d097) main_cset_slider_pane_g6

0xf97c,	// (0x00063a40) main_cset_slider_pane_g_ParamLimits

0x069f,	// (0x00054763) main_cset_slider_pane_t1_ParamLimits

0x9063,	// (0x0005d127) main_cset_slider_pane_t2_ParamLimits

0x907d,	// (0x0005d141) main_cset_slider_pane_t3_ParamLimits

0x9097,	// (0x0005d15b) main_cset_slider_pane_t4_ParamLimits

0x90b1,	// (0x0005d175) main_cset_slider_pane_t5_ParamLimits

0x90cf,	// (0x0005d193) main_cset_slider_pane_t6_ParamLimits

0x90e6,	// (0x0005d1aa) main_cset_slider_pane_t7_ParamLimits

0x9114,	// (0x0005d1d8) main_cset_slider_pane_t8_ParamLimits

0x9114,	// (0x0005d1d8) main_cset_slider_pane_t8

0x913c,	// (0x0005d200) main_cset_slider_pane_t9_ParamLimits

0x913c,	// (0x0005d200) main_cset_slider_pane_t9

0x9164,	// (0x0005d228) main_cset_slider_pane_t10_ParamLimits

0x9164,	// (0x0005d228) main_cset_slider_pane_t10

0x918c,	// (0x0005d250) main_cset_slider_pane_t11_ParamLimits

0x918c,	// (0x0005d250) main_cset_slider_pane_t11

0x91b6,	// (0x0005d27a) main_cset_slider_pane_t12_ParamLimits

0x91b6,	// (0x0005d27a) main_cset_slider_pane_t12

0x91d3,	// (0x0005d297) main_cset_slider_pane_t13_ParamLimits

0x91d3,	// (0x0005d297) main_cset_slider_pane_t13

0xf9a1,	// (0x00063a65) main_cset_slider_pane_t_ParamLimits

0x1035,	// (0x000550f9) bg_popup_sub_pane_cp011

0x07d4,	// (0x00054898) main_cset_text_pane_g1

0x07dc,	// (0x000548a0) main_cset_text_pane_t1

0x07ea,	// (0x000548ae) main_cset_text_pane_t2

0x07f8,	// (0x000548bc) main_cset_text_pane_t3

0x0806,	// (0x000548ca) main_cset_text_pane_t4

0x0814,	// (0x000548d8) main_cset_text_pane_t5

0x0822,	// (0x000548e6) main_cset_text_pane_t6

0x0830,	// (0x000548f4) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x00063afc) main_cset_text_pane_t

0x3543,	// (0x00057607) main_cam4_burst_pane

0x3543,	// (0x00057607) main_cam5_pane

0x8e95,	// (0x0005cf59) bg_button_pane_cp019

0x8e9e,	// (0x0005cf62) bg_button_pane_cp020

0x067b,	// (0x0005473f) main_cset_slider_pane_g7_ParamLimits

0x067b,	// (0x0005473f) main_cset_slider_pane_g7

0x0687,	// (0x0005474b) main_cset_slider_pane_g8_ParamLimits

0x0687,	// (0x0005474b) main_cset_slider_pane_g8

0x8fe7,	// (0x0005d0ab) main_cset_slider_pane_g9_ParamLimits

0x8fe7,	// (0x0005d0ab) main_cset_slider_pane_g9

0x8ff3,	// (0x0005d0b7) main_cset_slider_pane_g10_ParamLimits

0x8ff3,	// (0x0005d0b7) main_cset_slider_pane_g10

0x8fff,	// (0x0005d0c3) main_cset_slider_pane_g11_ParamLimits

0x8fff,	// (0x0005d0c3) main_cset_slider_pane_g11

0x900b,	// (0x0005d0cf) main_cset_slider_pane_g12_ParamLimits

0x900b,	// (0x0005d0cf) main_cset_slider_pane_g12

0x9017,	// (0x0005d0db) main_cset_slider_pane_g13_ParamLimits

0x9017,	// (0x0005d0db) main_cset_slider_pane_g13

0x9023,	// (0x0005d0e7) main_cset_slider_pane_g14_ParamLimits

0x9023,	// (0x0005d0e7) main_cset_slider_pane_g14

0x902f,	// (0x0005d0f3) main_cset_slider_pane_g15_ParamLimits

0x902f,	// (0x0005d0f3) main_cset_slider_pane_g15

0x06cd,	// (0x00054791) main_cset_slider_pane_t14_ParamLimits

0x06cd,	// (0x00054791) main_cset_slider_pane_t14

0x0706,	// (0x000547ca) main_cset_slider_pane_t15_ParamLimits

0x0706,	// (0x000547ca) main_cset_slider_pane_t15

0x96b1,	// (0x0005d775) aid_cam4_burst_size_cell_ParamLimits

0x96b1,	// (0x0005d775) aid_cam4_burst_size_cell

0x96cd,	// (0x0005d791) grid_cam4_burst_pane_ParamLimits

0x96cd,	// (0x0005d791) grid_cam4_burst_pane

0x96fd,	// (0x0005d7c1) linegrid_cam4_burst_pane_ParamLimits

0x96fd,	// (0x0005d7c1) linegrid_cam4_burst_pane

0x971d,	// (0x0005d7e1) scroll_pane_cp30_ParamLimits

0x971d,	// (0x0005d7e1) scroll_pane_cp30

0x9729,	// (0x0005d7ed) cell_cam4_burst_pane_ParamLimits

0x9729,	// (0x0005d7ed) cell_cam4_burst_pane

0x084a,	// (0x0005490e) linegrid_cam4_burst_pane_g1_ParamLimits

0x084a,	// (0x0005490e) linegrid_cam4_burst_pane_g1

0x9765,	// (0x0005d829) linegrid_cam4_burst_pane_g2_ParamLimits

0x9765,	// (0x0005d829) linegrid_cam4_burst_pane_g2

0x0857,	// (0x0005491b) linegrid_cam4_burst_pane_g3_ParamLimits

0x0857,	// (0x0005491b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x00063b0b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x00063b0b) linegrid_cam4_burst_pane_g

0x9776,	// (0x0005d83a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9776,	// (0x0005d83a) linegrid_cam4_burst_pane_g3_copy1

0x0864,	// (0x00054928) linegrid_cam4_burst_pane_g4_ParamLimits

0x0864,	// (0x00054928) linegrid_cam4_burst_pane_g4

0x9790,	// (0x0005d854) linegrid_cam4_burst_pane_g5_ParamLimits

0x9790,	// (0x0005d854) linegrid_cam4_burst_pane_g5

0x97a1,	// (0x0005d865) linegrid_cam4_burst_pane_g6_ParamLimits

0x97a1,	// (0x0005d865) linegrid_cam4_burst_pane_g6

0x0871,	// (0x00054935) linegrid_cam4_burst_pane_g7_ParamLimits

0x0871,	// (0x00054935) linegrid_cam4_burst_pane_g7

0x97b2,	// (0x0005d876) cell_cam4_burst_pane_g1

0x088a,	// (0x0005494e) main_cam5_pane_t1_ParamLimits

0x088a,	// (0x0005494e) main_cam5_pane_t1

0x089c,	// (0x00054960) main_cam5_pane_t2_ParamLimits

0x089c,	// (0x00054960) main_cam5_pane_t2

0x08ae,	// (0x00054972) main_cam5_pane_t3_ParamLimits

0x08ae,	// (0x00054972) main_cam5_pane_t3

0x08c0,	// (0x00054984) main_cam5_pane_t4_ParamLimits

0x08c0,	// (0x00054984) main_cam5_pane_t4

0x08d8,	// (0x0005499c) main_cam5_pane_t5_ParamLimits

0x08d8,	// (0x0005499c) main_cam5_pane_t5

0x08ec,	// (0x000549b0) main_cam5_pane_t6_ParamLimits

0x08ec,	// (0x000549b0) main_cam5_pane_t6

0x0900,	// (0x000549c4) main_cam5_pane_t7_ParamLimits

0x0900,	// (0x000549c4) main_cam5_pane_t7

0x0912,	// (0x000549d6) main_cam5_pane_t8_ParamLimits

0x0912,	// (0x000549d6) main_cam5_pane_t8

0x092e,	// (0x000549f2) main_cam5_pane_t9_ParamLimits

0x092e,	// (0x000549f2) main_cam5_pane_t9

0x0940,	// (0x00054a04) main_cam5_pane_t10_ParamLimits

0x0940,	// (0x00054a04) main_cam5_pane_t10

0x0952,	// (0x00054a16) main_cam5_pane_t11_ParamLimits

0x0952,	// (0x00054a16) main_cam5_pane_t11

0x0964,	// (0x00054a28) main_cam5_pane_t12_ParamLimits

0x0964,	// (0x00054a28) main_cam5_pane_t12

0x0979,	// (0x00054a3d) main_cam5_pane_t13_ParamLimits

0x0979,	// (0x00054a3d) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x00063b17) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x00063b17) main_cam5_pane_t

0x34e8,	// (0x000575ac) popup_scut_keymap_window_ParamLimits

0x34e8,	// (0x000575ac) popup_scut_keymap_window

0x97c5,	// (0x0005d889) aid_size_cell_brow_shortcut

0xce21,	// (0x00060ee5) bg_popup_window_pane_cp010

0x97d1,	// (0x0005d895) grid_scut_pane

0x97dd,	// (0x0005d8a1) cell_scut_pane_ParamLimits

0x97dd,	// (0x0005d8a1) cell_scut_pane

0x97f4,	// (0x0005d8b8) cell_scut_pane_g1

0x0996,	// (0x00054a5a) cell_scut_pane_t1

0x09a5,	// (0x00054a69) cell_scut_pane_t2

0x97fd,	// (0x0005d8c1) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x00063b32) cell_scut_pane_t

0x764b,	// (0x0005b70f) main_mup3_pane_g8_ParamLimits

0x764b,	// (0x0005b70f) main_mup3_pane_g8

0x8a6c,	// (0x0005cb30) area_vitu2_query_pane_ParamLimits

0x8a6c,	// (0x0005cb30) area_vitu2_query_pane

0x955d,	// (0x0005d621) input_focus_pane_cp08

0x09b4,	// (0x00054a78) area_vitu2_query_pane_g1

0x980b,	// (0x0005d8cf) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x00063b39) area_vitu2_query_pane_g

0x981c,	// (0x0005d8e0) area_vitu2_query_pane_t1_ParamLimits

0x981c,	// (0x0005d8e0) area_vitu2_query_pane_t1

0x9830,	// (0x0005d8f4) area_vitu2_query_pane_t2_ParamLimits

0x9830,	// (0x0005d8f4) area_vitu2_query_pane_t2

0x9844,	// (0x0005d908) area_vitu2_query_pane_t3_ParamLimits

0x9844,	// (0x0005d908) area_vitu2_query_pane_t3

0x00cc,	// (0x00054190) area_vitu2_query_pane_t4_ParamLimits

0x00cc,	// (0x00054190) area_vitu2_query_pane_t4

0x00f4,	// (0x000541b8) area_vitu2_query_pane_t5_ParamLimits

0x00f4,	// (0x000541b8) area_vitu2_query_pane_t5

0x011c,	// (0x000541e0) area_vitu2_query_pane_t6_ParamLimits

0x011c,	// (0x000541e0) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x00063b3e) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x00063b3e) area_vitu2_query_pane_t

0x986c,	// (0x0005d930) bg_button_pane_cp018

0x987a,	// (0x0005d93e) bg_button_pane_cp021

0x9886,	// (0x0005d94a) bg_button_pane_cp022

0x9897,	// (0x0005d95b) input_focus_pane_cp09

0x5ac7,	// (0x00059b8b) aid_size_touch_mv_arrow_left

0x5af0,	// (0x00059bb4) aid_size_touch_mv_arrow_right

0x9047,	// (0x0005d10b) main_cset_slider_pane_g16_ParamLimits

0x9047,	// (0x0005d10b) main_cset_slider_pane_g16

0x9055,	// (0x0005d119) main_cset_slider_pane_g17_ParamLimits

0x9055,	// (0x0005d119) main_cset_slider_pane_g17

0x97b2,	// (0x0005d876) cell_cam4_burst_pane_g1_ParamLimits

0x1035,	// (0x000550f9) compa_mode_pane

0x9273,	// (0x0005d337) popup_vtel_slider_window_g3_ParamLimits

0x9273,	// (0x0005d337) popup_vtel_slider_window_g3

0x9287,	// (0x0005d34b) popup_vtel_slider_window_g4_ParamLimits

0x9287,	// (0x0005d34b) popup_vtel_slider_window_g4

0x929b,	// (0x0005d35f) popup_vtel_slider_window_t1_ParamLimits

0x929b,	// (0x0005d35f) popup_vtel_slider_window_t1

0x3543,	// (0x00057607) main_cl_pane

0x69a7,	// (0x0005aa6b) popup_imed_adjust2_window_ParamLimits

0xe268,	// (0x0006232c) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x00062cab) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x00062cba) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x00062cba) popup_imed_adjust2_window_g2

0xec02,	// (0x00062cc6) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x00062cc6) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000638a9) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000638a9) popup_imed_adjust2_window_g

0xec0e,	// (0x00062cd2) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x00062cea) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x00062cfe) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x00062d0e) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x00062d1e) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x00062d2f) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000638b0) slider_imed_adjust_pane_g_ParamLimits

0x87a5,	// (0x0005c869) aid_touch_area_cam4_ParamLimits

0x87a5,	// (0x0005c869) aid_touch_area_cam4

0x87b5,	// (0x0005c879) battery_pane_cp01

0x883c,	// (0x0005c900) main_camera4_pane_g6_ParamLimits

0x883c,	// (0x0005c900) main_camera4_pane_g6

0x885a,	// (0x0005c91e) main_camera4_pane_t2_ParamLimits

0x885a,	// (0x0005c91e) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000639b3) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000639b3) main_camera4_pane_t

0x88ef,	// (0x0005c9b3) aid_touch_area_vid4_ParamLimits

0x88ef,	// (0x0005c9b3) aid_touch_area_vid4

0x892f,	// (0x0005c9f3) main_video4_pane_g5_ParamLimits

0x892f,	// (0x0005c9f3) main_video4_pane_g5

0x8953,	// (0x0005ca17) vid4_progress_pane_ParamLimits

0x8953,	// (0x0005ca17) vid4_progress_pane

0x0693,	// (0x00054757) main_cset_slider_pane_g18_ParamLimits

0x0693,	// (0x00054757) main_cset_slider_pane_g18

0x087e,	// (0x00054942) cell_cam4_burst_pane_g2_ParamLimits

0x087e,	// (0x00054942) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x00063b12) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x00063b12) cell_cam4_burst_pane_g

0x98a8,	// (0x0005d96c) bg_cl_pane_ParamLimits

0x98a8,	// (0x0005d96c) bg_cl_pane

0x98b4,	// (0x0005d978) cl_header_pane_ParamLimits

0x98b4,	// (0x0005d978) cl_header_pane

0x98c0,	// (0x0005d984) cl_listscroll_pane_ParamLimits

0x98c0,	// (0x0005d984) cl_listscroll_pane

0x09c0,	// (0x00054a84) bg_cl_pane_g1

0x09c8,	// (0x00054a8c) bg_cl_pane_g2

0x09d0,	// (0x00054a94) bg_cl_pane_g3

0x09d8,	// (0x00054a9c) bg_cl_pane_g4

0x09e0,	// (0x00054aa4) bg_cl_pane_g5

0x09e8,	// (0x00054aac) bg_cl_pane_g6

0x09f0,	// (0x00054ab4) bg_cl_pane_g7

0x09f8,	// (0x00054abc) bg_cl_pane_g8

0x0a00,	// (0x00054ac4) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x00063b4d) bg_cl_pane_g

0x98cc,	// (0x0005d990) aid_height_cl_leading_ParamLimits

0x98cc,	// (0x0005d990) aid_height_cl_leading

0x98d8,	// (0x0005d99c) aid_height_cl_text_ParamLimits

0x98d8,	// (0x0005d99c) aid_height_cl_text

0x1b48,	// (0x00055c0c) bg_cl_header_pane_ParamLimits

0x1b48,	// (0x00055c0c) bg_cl_header_pane

0x98f0,	// (0x0005d9b4) cl_header_pane_g1_ParamLimits

0x98f0,	// (0x0005d9b4) cl_header_pane_g1

0x98fd,	// (0x0005d9c1) cl_header_pane_t1_ParamLimits

0x98fd,	// (0x0005d9c1) cl_header_pane_t1

0x0a08,	// (0x00054acc) cl_list_pane

0x0666,	// (0x0005472a) hc_scroll_pane_cp01

0xc6ea,	// (0x000607ae) bg_cl_header_pane_g1

0x054c,	// (0x00054610) bg_cl_header_pane_g2

0xc70a,	// (0x000607ce) bg_cl_header_pane_g3

0x055c,	// (0x00054620) bg_cl_header_pane_g4

0x0554,	// (0x00054618) bg_cl_header_pane_g5

0x078b,	// (0x0005484f) bg_cl_header_pane_g6

0x0574,	// (0x00054638) bg_cl_header_pane_g7

0x057c,	// (0x00054640) bg_cl_header_pane_g8

0x056c,	// (0x00054630) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x00063b60) bg_cl_header_pane_g

0x990f,	// (0x0005d9d3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x990f,	// (0x0005d9d3) hc_cl_list_double_graphic_heading_pane

0x9920,	// (0x0005d9e4) hc_cl_list_single_graphic_pane_ParamLimits

0x9920,	// (0x0005d9e4) hc_cl_list_single_graphic_pane

0x9939,	// (0x0005d9fd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9939,	// (0x0005d9fd) hc_cl_list_single_graphic_pane_g1

0x9945,	// (0x0005da09) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9945,	// (0x0005da09) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x00063b73) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x00063b73) hc_cl_list_single_graphic_pane_g

0x9959,	// (0x0005da1d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9959,	// (0x0005da1d) hc_cl_list_single_graphic_pane_t1

0x9939,	// (0x0005d9fd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9939,	// (0x0005d9fd) hc_cl_list_double_graphic_heading_pane_g1

0x996e,	// (0x0005da32) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x996e,	// (0x0005da32) hc_cl_list_double_graphic_heading_pane_g2

0x9982,	// (0x0005da46) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9982,	// (0x0005da46) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x00063b78) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x00063b78) hc_cl_list_double_graphic_heading_pane_g

0x9996,	// (0x0005da5a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9996,	// (0x0005da5a) hc_cl_list_double_graphic_heading_pane_t1

0x99ab,	// (0x0005da6f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x99ab,	// (0x0005da6f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x00063b7f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x00063b7f) hc_cl_list_double_graphic_heading_pane_t

0x99c8,	// (0x0005da8c) vid4_progress_pane_g1

0x99da,	// (0x0005da9e) vid4_progress_pane_g2

0xc9cb,	// (0x00060a8f) vid4_progress_pane_g3

0x99ea,	// (0x0005daae) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x00063b84) vid4_progress_pane_g

0x9a08,	// (0x0005dacc) vid4_progress_pane_t1

0x9a1d,	// (0x0005dae1) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x00063b8f) vid4_progress_pane_t

0x9a48,	// (0x0005db0c) wait_bar_pane_cp07

0xe46c,	// (0x00062530) blid_firmament_pane_ParamLimits

0xe4af,	// (0x00062573) popup_blid_sat_info2_window_g1

0xe4d3,	// (0x00062597) popup_blid_sat_info2_window_t3

0xe4e1,	// (0x000625a5) popup_blid_sat_info2_window_t4

0xe4ef,	// (0x000625b3) popup_blid_sat_info2_window_t5

0xe4fd,	// (0x000625c1) popup_blid_sat_info2_window_t6

0xe50d,	// (0x000625d1) popup_blid_sat_info2_window_t7

0xe51b,	// (0x000625df) popup_blid_sat_info2_window_t8

0xe529,	// (0x000625ed) popup_blid_sat_info2_window_t9

0xe537,	// (0x000625fb) popup_blid_sat_info2_window_t10

0xe5f9,	// (0x000626bd) aid_firma_cardinal_ParamLimits

0xe60d,	// (0x000626d1) blid_firmament_pane_t1_ParamLimits

0xe624,	// (0x000626e8) blid_firmament_pane_t2_ParamLimits

0xe63b,	// (0x000626ff) blid_firmament_pane_t3_ParamLimits

0xe652,	// (0x00062716) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000637a2) blid_firmament_pane_t_ParamLimits

0xe669,	// (0x0006272d) blid_sat_info_pane_ParamLimits

0x6909,	// (0x0005a9cd) main_cam_set_pane_ParamLimits

0x7e03,	// (0x0005bec7) aid_size_cell_colour_35_ParamLimits

0x7e1d,	// (0x0005bee1) aid_size_cell_colour_112_ParamLimits

0x7e34,	// (0x0005bef8) aid_size_cell_effect_ParamLimits

0xdaba,	// (0x00061b7e) bg_tb_trans_pane_cp02_ParamLimits

0xdac8,	// (0x00061b8c) heading_imed_pane_ParamLimits

0x7e4e,	// (0x0005bf12) listscroll_imed_pane_ParamLimits

0xd836,	// (0x000618fa) popup_call2_audio_first_window_g5_ParamLimits

0xd836,	// (0x000618fa) popup_call2_audio_first_window_g5

0x8554,	// (0x0005c618) aid_size_touch_image3_arrow_left_ParamLimits

0x8554,	// (0x0005c618) aid_size_touch_image3_arrow_left

0x856a,	// (0x0005c62e) aid_size_touch_image3_arrow_right_ParamLimits

0x856a,	// (0x0005c62e) aid_size_touch_image3_arrow_right

0x9a33,	// (0x0005daf7) vid4_progress_pane_t3

0x80ec,	// (0x0005c1b0) main_hwr_training_symbol_option_pane_ParamLimits

0x80ec,	// (0x0005c1b0) main_hwr_training_symbol_option_pane

0xeed4,	// (0x00062f98) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x00062f98) popup_hwr_training_preview_window

0x814d,	// (0x0005c211) hwr_training_navi_pane_g5_ParamLimits

0x814d,	// (0x0005c211) hwr_training_navi_pane_g5

0x053a,	// (0x000545fe) popup_char_count_window

0x3529,	// (0x000575ed) bg_popup_sub_pane_cp20_ParamLimits

0x939f,	// (0x0005d463) list_vitu2_match_list_pane_ParamLimits

0x93ab,	// (0x0005d46f) vitu2_page_scroll_pane_ParamLimits

0x93ab,	// (0x0005d46f) vitu2_page_scroll_pane

0x0a1a,	// (0x00054ade) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a1a,	// (0x00054ade) list_single_hwr_training_symbol_option_pane

0x0a2d,	// (0x00054af1) list_single_hwr_training_symbol_option_pane_g1

0x0a35,	// (0x00054af9) list_single_hwr_training_symbol_option_pane_t1

0x0a43,	// (0x00054b07) bg_button_pane_cp023

0x0a4c,	// (0x00054b10) bg_button_pane_cp024

0x9a92,	// (0x0005db56) vitu2_page_scroll_pane_g1

0x9a9a,	// (0x0005db5e) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x00063b96) vitu2_page_scroll_pane_g

0x9aa2,	// (0x0005db66) vitu2_page_scroll_pane_t1

0x0a7f,	// (0x00054b43) popup_char_count_window_g1

0x0a88,	// (0x00054b4c) popup_char_count_window_g2

0x0a91,	// (0x00054b55) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x00063b9b) popup_char_count_window_g

0x0a9a,	// (0x00054b5e) popup_char_count_window_t1

0x3543,	// (0x00057607) main_vded2_pane

0xebd3,	// (0x00062c97) aid_size_cell_imed_line

0xebdd,	// (0x00062ca1) grid_imed_line_width_pane

0x89c1,	// (0x0005ca85) vid4_indicators_pane_g4

0x0aa8,	// (0x00054b6c) cell_imed_line_width_pane_ParamLimits

0x0aa8,	// (0x00054b6c) cell_imed_line_width_pane

0x0abc,	// (0x00054b80) cell_imed_line_width_pane_g1

0x0ac5,	// (0x00054b89) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x00063ba2) cell_imed_line_width_pane_g

0x9ab1,	// (0x0005db75) main_vded2_pane_g1_ParamLimits

0x9ab1,	// (0x0005db75) main_vded2_pane_g1

0x9abe,	// (0x0005db82) main_vded2_pane_g2_ParamLimits

0x9abe,	// (0x0005db82) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x00063ba7) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x00063ba7) main_vded2_pane_g

0x9acc,	// (0x0005db90) vded2_slider_pane_ParamLimits

0x9acc,	// (0x0005db90) vded2_slider_pane

0x9ad9,	// (0x0005db9d) aid_size_touch_vded2_end

0x9ae3,	// (0x0005dba7) aid_size_touch_vded2_playhead

0x0acd,	// (0x00054b91) aid_size_touch_vded2_start

0x0ad5,	// (0x00054b99) vded2_slider_bg_pane

0x0ade,	// (0x00054ba2) vded2_slider_pane_g1

0x0ae7,	// (0x00054bab) vded2_slider_pane_g2

0x9aeb,	// (0x0005dbaf) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x00063bac) vded2_slider_pane_g

0x0aef,	// (0x00054bb3) vded2_slider_bg_pane_g1

0x0af8,	// (0x00054bbc) vded2_slider_bg_pane_g2

0x0b01,	// (0x00054bc5) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x00063bb3) vded2_slider_bg_pane_g

0x61f1,	// (0x0005a2b5) aid_postcard_touch_down_pane_ParamLimits

0x61f1,	// (0x0005a2b5) aid_postcard_touch_down_pane

0x6201,	// (0x0005a2c5) aid_postcard_touch_up_pane_ParamLimits

0x6201,	// (0x0005a2c5) aid_postcard_touch_up_pane

0x3543,	// (0x00057607) main_blid2_pane

0x6932,	// (0x0005a9f6) popup_blid2_search_window

0x1035,	// (0x000550f9) blid2_gps_pane

0x1035,	// (0x000550f9) blid2_navig_pane

0x1035,	// (0x000550f9) blid2_search_pane

0x1035,	// (0x000550f9) blid2_tripm_pane

0x9af4,	// (0x0005dbb8) blid2_search_pane_g1_ParamLimits

0x9af4,	// (0x0005dbb8) blid2_search_pane_g1

0x9b04,	// (0x0005dbc8) blid2_search_pane_t1_ParamLimits

0x9b04,	// (0x0005dbc8) blid2_search_pane_t1

0x9b16,	// (0x0005dbda) aid_size_cell_blid2_gps_ParamLimits

0x9b16,	// (0x0005dbda) aid_size_cell_blid2_gps

0x9b26,	// (0x0005dbea) blid2_gps_pane_g1_ParamLimits

0x9b26,	// (0x0005dbea) blid2_gps_pane_g1

0x9b32,	// (0x0005dbf6) grid_blid2_satellite_pane_ParamLimits

0x9b32,	// (0x0005dbf6) grid_blid2_satellite_pane

0x9b42,	// (0x0005dc06) blid2_navig_pane_g1_ParamLimits

0x9b42,	// (0x0005dc06) blid2_navig_pane_g1

0x9b4e,	// (0x0005dc12) blid2_navig_pane_t1_ParamLimits

0x9b4e,	// (0x0005dc12) blid2_navig_pane_t1

0x9b60,	// (0x0005dc24) blid2_navig_pane_t2_ParamLimits

0x9b60,	// (0x0005dc24) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x00063bba) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x00063bba) blid2_navig_pane_t

0x9b72,	// (0x0005dc36) blid2_navig_ring_pane_ParamLimits

0x9b72,	// (0x0005dc36) blid2_navig_ring_pane

0x9b82,	// (0x0005dc46) blid2_speed_pane_ParamLimits

0x9b82,	// (0x0005dc46) blid2_speed_pane

0x9b8e,	// (0x0005dc52) blid2_tripm_pane_g1_ParamLimits

0x9b8e,	// (0x0005dc52) blid2_tripm_pane_g1

0x9b9e,	// (0x0005dc62) blid2_tripm_pane_g2_ParamLimits

0x9b9e,	// (0x0005dc62) blid2_tripm_pane_g2

0x9baa,	// (0x0005dc6e) blid2_tripm_pane_g3_ParamLimits

0x9baa,	// (0x0005dc6e) blid2_tripm_pane_g3

0x9bb6,	// (0x0005dc7a) blid2_tripm_pane_g4_ParamLimits

0x9bb6,	// (0x0005dc7a) blid2_tripm_pane_g4

0x9bc2,	// (0x0005dc86) blid2_tripm_pane_g5_ParamLimits

0x9bc2,	// (0x0005dc86) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x00063bbf) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x00063bbf) blid2_tripm_pane_g

0x9bde,	// (0x0005dca2) blid2_tripm_pane_t1_ParamLimits

0x9bde,	// (0x0005dca2) blid2_tripm_pane_t1

0x9bf2,	// (0x0005dcb6) blid2_tripm_pane_t2_ParamLimits

0x9bf2,	// (0x0005dcb6) blid2_tripm_pane_t2

0x9c04,	// (0x0005dcc8) blid2_tripm_pane_t3_ParamLimits

0x9c04,	// (0x0005dcc8) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x00063bcc) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x00063bcc) blid2_tripm_pane_t

0x9c36,	// (0x0005dcfa) cell_blid2_satellite_pane_ParamLimits

0x9c36,	// (0x0005dcfa) cell_blid2_satellite_pane

0x9c50,	// (0x0005dd14) cell_blid2_satellite_pane_g1

0x0b0a,	// (0x00054bce) cell_blid2_satellite_pane_t1

0xe679,	// (0x0006273d) blid2_speed_pane_g1

0x0b18,	// (0x00054bdc) blid2_speed_pane_t1

0x0b26,	// (0x00054bea) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x00063bd5) blid2_speed_pane_t

0xe679,	// (0x0006273d) blid2_navig_ring_pane_g1

0x9c59,	// (0x0005dd1d) blid2_navig_ring_pane_g2

0x9c61,	// (0x0005dd25) blid2_navig_ring_pane_g3

0x9c69,	// (0x0005dd2d) blid2_navig_ring_pane_g4

0x9c71,	// (0x0005dd35) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x00063bda) blid2_navig_ring_pane_g

0x1035,	// (0x000550f9) bg_popup_window_pane_cp011

0x0b34,	// (0x00054bf8) popup_blid2_search_window_g1

0x0b3c,	// (0x00054c00) popup_blid2_search_window_t1

0x0b4a,	// (0x00054c0e) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x00063be5) popup_blid2_search_window_t

0xc5f9,	// (0x000606bd) main_browser_pane_g1

0xc2e9,	// (0x000603ad) main_browser_pane_ParamLimits

0x6909,	// (0x0005a9cd) bg_button_pane_cp011_ParamLimits

0x8c68,	// (0x0005cd2c) cell_vitu2_function_pane_g1_ParamLimits

0xe268,	// (0x0006232c) bg_popup_sub_pane_cp22_ParamLimits

0x955d,	// (0x0005d621) input_focus_pane_cp08_ParamLimits

0x9574,	// (0x0005d638) popup_vitu2_query_button_pane_ParamLimits

0x9574,	// (0x0005d638) popup_vitu2_query_button_pane

0x9585,	// (0x0005d649) popup_vitu2_query_input_button_pane

0x07c8,	// (0x0005488c) popup_vitu2_query_window_g1_ParamLimits

0x958f,	// (0x0005d653) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x00063ae6) popup_vitu2_query_window_g_ParamLimits

0x1035,	// (0x000550f9) bg_button_pane_cp026

0x9c79,	// (0x0005dd3d) popup_vitu2_query_input_button_pane_g1

0x1035,	// (0x000550f9) bg_button_pane_cp025

0x0b58,	// (0x00054c1c) popup_vitu2_query_button_pane_t1

0x7382,	// (0x0005b446) main_mp3_pane_t6

0x7392,	// (0x0005b456) popup_slider_window_cp01

0x889e,	// (0x0005c962) cam4_battery_pane

0x897e,	// (0x0005ca42) cam4_battery_pane_cp02

0x99c0,	// (0x0005da84) cam4_battery_pane_cp01

0x99c0,	// (0x0005da84) cam4_battery_pane_cp03

0x0b66,	// (0x00054c2a) cam4_battery_pane_g1

0xe679,	// (0x0006273d) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x00063bea) cam4_battery_pane_g

0xe545,	// (0x00062609) popup_blid_sat_info2_window_t11

0x5ac7,	// (0x00059b8b) aid_size_touch_mv_arrow_left_ParamLimits

0x5af0,	// (0x00059bb4) aid_size_touch_mv_arrow_right_ParamLimits

0xcd81,	// (0x00060e45) navi_pane_g1_ParamLimits

0x5b2f,	// (0x00059bf3) navi_pane_g2_ParamLimits

0x5b5d,	// (0x00059c21) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000634b4) navi_pane_g_ParamLimits

0x5bb7,	// (0x00059c7b) navi_pane_mv_t1_ParamLimits

0x7e5a,	// (0x0005bf1e) grid_imed_effect_pane_ParamLimits

0x4494,	// (0x00058558) aid_placing_vt_slider_lsc

0xc548,	// (0x0006060c) aid_placing_vt_slider_prt

0xdaba,	// (0x00061b7e) bg_tb_trans_pane_cp01_ParamLimits

0xe7fc,	// (0x000628c0) popup_image_details_window_g1_ParamLimits

0xe80f,	// (0x000628d3) popup_image_details_window_g2_ParamLimits

0xe824,	// (0x000628e8) popup_image_details_window_g3_ParamLimits

0xe824,	// (0x000628e8) popup_image_details_window_g3

0xf723,	// (0x000637e7) popup_image_details_window_g_ParamLimits

0xe838,	// (0x000628fc) popup_image_details_window_t1_ParamLimits

0xe84a,	// (0x0006290e) popup_image_details_window_t2_ParamLimits

0xe863,	// (0x00062927) popup_image_details_window_t3_ParamLimits

0xe877,	// (0x0006293b) popup_image_details_window_t4_ParamLimits

0xe892,	// (0x00062956) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x000637ee) popup_image_details_window_t_ParamLimits

0x98e4,	// (0x0005d9a8) cl_header_name_pane_ParamLimits

0x98e4,	// (0x0005d9a8) cl_header_name_pane

0x9c81,	// (0x0005dd45) cl_header_name_pane_t1_ParamLimits

0x9c81,	// (0x0005dd45) cl_header_name_pane_t1

0x9c98,	// (0x0005dd5c) cl_header_name_pane_t2_ParamLimits

0x9c98,	// (0x0005dd5c) cl_header_name_pane_t2

0x9cc2,	// (0x0005dd86) cl_header_name_pane_t3_ParamLimits

0x9cc2,	// (0x0005dd86) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x00063bef) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x00063bef) cl_header_name_pane_t

0x5b88,	// (0x00059c4c) navi_pane_mv_g2_ParamLimits

0x0514,	// (0x000545d8) field_vitu2_entry_pane_g1_ParamLimits

0x0520,	// (0x000545e4) field_vitu2_entry_pane_g2_ParamLimits

0x052c,	// (0x000545f0) field_vitu2_entry_pane_g3_ParamLimits

0x052c,	// (0x000545f0) field_vitu2_entry_pane_g3

0xf921,	// (0x000639e5) field_vitu2_entry_pane_g_ParamLimits

0x8bf8,	// (0x0005ccbc) cell_vitu2_itu_pane_g1_ParamLimits

0x8c08,	// (0x0005cccc) cell_vitu2_itu_pane_g2_ParamLimits

0x8c08,	// (0x0005cccc) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x000639f1) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x000639f1) cell_vitu2_itu_pane_g

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp05_ParamLimits

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp05

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp03

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp04

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp10_ParamLimits

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp10

0x9886,	// (0x0005d94a) bg_vkb2_func_pane_cp08

0x986c,	// (0x0005d930) bg_vkb2_func_pane_cp06

0x987a,	// (0x0005d93e) bg_vkb2_func_pane_cp07

0x0a55,	// (0x00054b19) bg_vkb2_func_pane_cp11_ParamLimits

0x0a55,	// (0x00054b19) bg_vkb2_func_pane_cp11

0x0a6a,	// (0x00054b2e) bg_vkb2_func_pane_cp12_ParamLimits

0x0a6a,	// (0x00054b2e) bg_vkb2_func_pane_cp12

0x1035,	// (0x000550f9) bg_vkb2_func_pane_cp09

0x054c,	// (0x00054610) bg_vkb2_func_pane_g1

0xc70a,	// (0x000607ce) bg_vkb2_func_pane_g2

0x0554,	// (0x00054618) bg_vkb2_func_pane_g3

0x055c,	// (0x00054620) bg_vkb2_func_pane_g4

0x078b,	// (0x0005484f) bg_vkb2_func_pane_g5

0x0574,	// (0x00054638) bg_vkb2_func_pane_g6

0x057c,	// (0x00054640) bg_vkb2_func_pane_g7

0x056c,	// (0x00054630) bg_vkb2_func_pane_g8

0xc6ea,	// (0x000607ae) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x00063bf6) bg_vkb2_func_pane_g

0x9bd0,	// (0x0005dc94) blid2_tripm_pane_g6_ParamLimits

0x9bd0,	// (0x0005dc94) blid2_tripm_pane_g6

0xef8c,	// (0x00063050) mp4_progress_pane_g1

0x9c2a,	// (0x0005dcee) blid2_tripm_values_pane_ParamLimits

0x9c2a,	// (0x0005dcee) blid2_tripm_values_pane

0x9ce7,	// (0x0005ddab) blid2_tripm_values_pane_t1

0x9cf5,	// (0x0005ddb9) blid2_tripm_values_pane_t2

0x9d03,	// (0x0005ddc7) blid2_tripm_values_pane_t3

0x9d11,	// (0x0005ddd5) blid2_tripm_values_pane_t4

0x9d1f,	// (0x0005dde3) blid2_tripm_values_pane_t5

0x9d2d,	// (0x0005ddf1) blid2_tripm_values_pane_t6

0x9d3b,	// (0x0005ddff) blid2_tripm_values_pane_t7

0x9d49,	// (0x0005de0d) blid2_tripm_values_pane_t8

0x9d57,	// (0x0005de1b) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x00063c09) blid2_tripm_values_pane_t

0x44d4,	// (0x00058598) call_video_pane_t1_ParamLimits

0x44f5,	// (0x000585b9) call_video_pane_t2_ParamLimits

0xf279,	// (0x0006333d) call_video_pane_t_ParamLimits

0x60f8,	// (0x0005a1bc) msg_header_pane_g1_ParamLimits

0xcf93,	// (0x00061057) msg_header_pane_g2_ParamLimits

0xcf93,	// (0x00061057) msg_header_pane_g2

0x0001,

0xf493,	// (0x00063557) msg_header_pane_g_ParamLimits

0xf493,	// (0x00063557) msg_header_pane_g

0xc2e9,	// (0x000603ad) main_clock2_pane_ParamLimits

0x7bf3,	// (0x0005bcb7) grid_clock2_toolbar_pane_ParamLimits

0x7bf3,	// (0x0005bcb7) grid_clock2_toolbar_pane

0x7bf3,	// (0x0005bcb7) listscroll_clock2_pane_ParamLimits

0x7bf3,	// (0x0005bcb7) listscroll_clock2_pane

0x7c97,	// (0x0005bd5b) main_clock2_pane_t3_ParamLimits

0x7c97,	// (0x0005bd5b) main_clock2_pane_t3

0x7ca9,	// (0x0005bd6d) main_clock2_pane_t4_ParamLimits

0x7ca9,	// (0x0005bd6d) main_clock2_pane_t4

0x0b70,	// (0x00054c34) cell_clock2_toolbar_pane

0x0b78,	// (0x00054c3c) cell_clock2_toolbar_pane_cp01

0x0b78,	// (0x00054c3c) cell_clock2_toolbar_pane_cp02

0x0b80,	// (0x00054c44) cell_clock2_toolbar_pane_cp03

0x0b88,	// (0x00054c4c) list_clock2_pane

0xccd8,	// (0x00060d9c) scroll_pane_cp10

0x0b90,	// (0x00054c54) list_single_clock2_pane_ParamLimits

0x0b90,	// (0x00054c54) list_single_clock2_pane

0xce21,	// (0x00060ee5) list_highlight_pane_cp08

0x0b9d,	// (0x00054c61) list_single_clock2_pane_t1

0x0bab,	// (0x00054c6f) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x00063c1c) list_single_clock2_pane_t

0x1035,	// (0x000550f9) bg_button_pane_cp10

0x0bb9,	// (0x00054c7d) cell_clock2_toolbar_pane_g1

0x615f,	// (0x0005a223) aid_main_viewer_pane_g1_ParamLimits

0x615f,	// (0x0005a223) aid_main_viewer_pane_g1

0x616b,	// (0x0005a22f) aid_main_viewer_pane_g2_ParamLimits

0x616b,	// (0x0005a22f) aid_main_viewer_pane_g2

0x6177,	// (0x0005a23b) aid_main_viewer_pane_g3_ParamLimits

0x6177,	// (0x0005a23b) aid_main_viewer_pane_g3

0x6188,	// (0x0005a24c) aid_main_viewer_pane_g4_ParamLimits

0x6188,	// (0x0005a24c) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x00063568) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x00063568) aid_main_viewer_pane_g

0x68fc,	// (0x0005a9c0) main_calc_pane_ParamLimits

0x6917,	// (0x0005a9db) main_dialer2_pane_ParamLimits

0x3543,	// (0x00057607) main_cam6_pane

0x3543,	// (0x00057607) main_vid6_pane

0x7bff,	// (0x0005bcc3) listscroll_gen_pane_cp06_ParamLimits

0x7bff,	// (0x0005bcc3) listscroll_gen_pane_cp06

0x7cbb,	// (0x0005bd7f) main_clock2_pane_t5_ParamLimits

0x7cbb,	// (0x0005bd7f) main_clock2_pane_t5

0x7d04,	// (0x0005bdc8) aid_call2_pane_cp10_ParamLimits

0x7d16,	// (0x0005bdda) aid_call_pane_cp10_ParamLimits

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7d28,	// (0x0005bdec) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7d28,	// (0x0005bdec) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd56,	// (0x00060e1a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0006389e) popup_clock_analogue_window_cp10_g_ParamLimits

0x7d3a,	// (0x0005bdfe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8501,	// (0x0005c5c5) cell_dialer2_keypad_pane_g2_ParamLimits

0x8501,	// (0x0005c5c5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x00063984) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x00063984) cell_dialer2_keypad_pane_g

0x851d,	// (0x0005c5e1) cell_dialer2_keypad_pane_t1

0x8f33,	// (0x0005cff7) main_cset_text2_pane_ParamLimits

0x8f33,	// (0x0005cff7) main_cset_text2_pane

0x09b4,	// (0x00054a78) area_vitu2_query_pane_g1_ParamLimits

0x980b,	// (0x0005d8cf) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x00063b39) area_vitu2_query_pane_g_ParamLimits

0x0144,	// (0x00054208) area_vitu2_query_pane_t7_ParamLimits

0x0144,	// (0x00054208) area_vitu2_query_pane_t7

0x986c,	// (0x0005d930) bg_button_pane_cp018_ParamLimits

0x987a,	// (0x0005d93e) bg_button_pane_cp021_ParamLimits

0x9886,	// (0x0005d94a) bg_button_pane_cp022_ParamLimits

0x9886,	// (0x0005d94a) bg_vkb2_func_pane_cp08_ParamLimits

0x986c,	// (0x0005d930) bg_vkb2_func_pane_cp06_ParamLimits

0x987a,	// (0x0005d93e) bg_vkb2_func_pane_cp07_ParamLimits

0x9897,	// (0x0005d95b) input_focus_pane_cp09_ParamLimits

0x9d65,	// (0x0005de29) cam6_autofocus_pane_ParamLimits

0x9d65,	// (0x0005de29) cam6_autofocus_pane

0x9d87,	// (0x0005de4b) cam6_image_uncrop_pane_ParamLimits

0x9d87,	// (0x0005de4b) cam6_image_uncrop_pane

0x9db4,	// (0x0005de78) cam6_indi_pane_ParamLimits

0x9db4,	// (0x0005de78) cam6_indi_pane

0x9dce,	// (0x0005de92) cam6_mode_pane_ParamLimits

0x9dce,	// (0x0005de92) cam6_mode_pane

0x9de2,	// (0x0005dea6) cam6_timer_pane_ParamLimits

0x9de2,	// (0x0005dea6) cam6_timer_pane

0x9dee,	// (0x0005deb2) cam6_zoom_pane_ParamLimits

0x9dee,	// (0x0005deb2) cam6_zoom_pane

0x9e06,	// (0x0005deca) cam6_mode_pane_g1_ParamLimits

0x9e06,	// (0x0005deca) cam6_mode_pane_g1

0x9e12,	// (0x0005ded6) cam6_mode_pane_g2_ParamLimits

0x9e12,	// (0x0005ded6) cam6_mode_pane_g2

0x9e1e,	// (0x0005dee2) cam6_mode_pane_g3_ParamLimits

0x9e1e,	// (0x0005dee2) cam6_mode_pane_g3

0x9e2a,	// (0x0005deee) cam6_mode_pane_g4_ParamLimits

0x9e2a,	// (0x0005deee) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00063c21) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00063c21) cam6_mode_pane_g

0x0bc1,	// (0x00054c85) bg_tb_trans_pane_cp08_ParamLimits

0x0bc1,	// (0x00054c85) bg_tb_trans_pane_cp08

0x0bcf,	// (0x00054c93) cam6_battery_pane_ParamLimits

0x0bcf,	// (0x00054c93) cam6_battery_pane

0x0be5,	// (0x00054ca9) cam6_indi_pane_g1_ParamLimits

0x0be5,	// (0x00054ca9) cam6_indi_pane_g1

0x0bf7,	// (0x00054cbb) cam6_indi_pane_g2_ParamLimits

0x0bf7,	// (0x00054cbb) cam6_indi_pane_g2

0x0c09,	// (0x00054ccd) cam6_indi_pane_g3_ParamLimits

0x0c09,	// (0x00054ccd) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x00063c2a) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x00063c2a) cam6_indi_pane_g

0x0c1b,	// (0x00054cdf) cam6_indi_pane_t1_ParamLimits

0x0c1b,	// (0x00054cdf) cam6_indi_pane_t1

0x89fe,	// (0x0005cac2) cam6_autofocus_pane_g1

0x89f6,	// (0x0005caba) cam6_autofocus_pane_g2

0x8a0e,	// (0x0005cad2) cam6_autofocus_pane_g3

0x8a06,	// (0x0005caca) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00063c31) cam6_autofocus_pane_g

0x0c41,	// (0x00054d05) cam6_timer_pane_g1

0x0c49,	// (0x00054d0d) cam6_timer_pane_t1

0x0c57,	// (0x00054d1b) cam6_zoom_cont_pane

0x0c5f,	// (0x00054d23) cam6_zoom_pane_g1

0x0c67,	// (0x00054d2b) cam6_zoom_pane_g2

0x9e36,	// (0x0005defa) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x00063c3a) cam6_zoom_pane_g

0xe679,	// (0x0006273d) cam6_battery_pane_g1

0xe679,	// (0x0006273d) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000637ab) cam6_battery_pane_g

0x0c6f,	// (0x00054d33) cam6_zoom_cont_pane_g1

0x0c78,	// (0x00054d3c) cam6_zoom_cont_pane_g2

0x0c81,	// (0x00054d45) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00063c41) cam6_zoom_cont_pane_g

0x9e53,	// (0x0005df17) cam6_mode_pane_cp_ParamLimits

0x9e53,	// (0x0005df17) cam6_mode_pane_cp

0x9e67,	// (0x0005df2b) cam6_zoom_pane_cp_ParamLimits

0x9e67,	// (0x0005df2b) cam6_zoom_pane_cp

0x9e7f,	// (0x0005df43) vid6_image_uncrop_cif_pane_ParamLimits

0x9e7f,	// (0x0005df43) vid6_image_uncrop_cif_pane

0x9eab,	// (0x0005df6f) vid6_image_uncrop_nhd_pane_ParamLimits

0x9eab,	// (0x0005df6f) vid6_image_uncrop_nhd_pane

0x9ec8,	// (0x0005df8c) vid6_image_uncrop_vga_pane_ParamLimits

0x9ec8,	// (0x0005df8c) vid6_image_uncrop_vga_pane

0x9ee7,	// (0x0005dfab) vid6_image_uncrop_wvga_pane_ParamLimits

0x9ee7,	// (0x0005dfab) vid6_image_uncrop_wvga_pane

0x9f04,	// (0x0005dfc8) vid6_indi_pane_ParamLimits

0x9f04,	// (0x0005dfc8) vid6_indi_pane

0x0bc1,	// (0x00054c85) bg_tb_trans_pane_cp09_ParamLimits

0x0bc1,	// (0x00054c85) bg_tb_trans_pane_cp09

0x0c99,	// (0x00054d5d) cam6_battery_pane_cp_ParamLimits

0x0c99,	// (0x00054d5d) cam6_battery_pane_cp

0x0ca5,	// (0x00054d69) vid6_indi_pane_g1_ParamLimits

0x0ca5,	// (0x00054d69) vid6_indi_pane_g1

0x0cb7,	// (0x00054d7b) vid6_indi_pane_g2_ParamLimits

0x0cb7,	// (0x00054d7b) vid6_indi_pane_g2

0x0cc9,	// (0x00054d8d) vid6_indi_pane_g3_ParamLimits

0x0cc9,	// (0x00054d8d) vid6_indi_pane_g3

0x0cde,	// (0x00054da2) vid6_indi_pane_g4_ParamLimits

0x0cde,	// (0x00054da2) vid6_indi_pane_g4

0x0cf3,	// (0x00054db7) vid6_indi_pane_g5_ParamLimits

0x0cf3,	// (0x00054db7) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x00063c48) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x00063c48) vid6_indi_pane_g

0x0d0d,	// (0x00054dd1) vid6_indi_pane_t1_ParamLimits

0x0d0d,	// (0x00054dd1) vid6_indi_pane_t1

0x0d23,	// (0x00054de7) vid6_indi_pane_t2_ParamLimits

0x0d23,	// (0x00054de7) vid6_indi_pane_t2

0x0d4b,	// (0x00054e0f) vid6_indi_pane_t3_ParamLimits

0x0d4b,	// (0x00054e0f) vid6_indi_pane_t3

0x0d73,	// (0x00054e37) vid6_indi_pane_t4_ParamLimits

0x0d73,	// (0x00054e37) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x00063c53) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x00063c53) vid6_indi_pane_t

0x0d97,	// (0x00054e5b) wait_bar_pane_cp08

0x9f29,	// (0x0005dfed) main_cset_text2_pane_t1_ParamLimits

0x9f29,	// (0x0005dfed) main_cset_text2_pane_t1

0x9e3e,	// (0x0005df02) listscroll_gen_pane_cp06_t1_ParamLimits

0x9e3e,	// (0x0005df02) listscroll_gen_pane_cp06_t1

0x3543,	// (0x00057607) main_cam6_set_pane

0x8890,	// (0x0005c954) bg_tb_trans_pane_cp06_ParamLimits

0x88a6,	// (0x0005c96a) cam4_indicators_pane_g1_ParamLimits

0x88b7,	// (0x0005c97b) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000639c1) cam4_indicators_pane_g_ParamLimits

0x88d5,	// (0x0005c999) cam4_indicators_pane_t1_ParamLimits

0x6909,	// (0x0005a9cd) bg_tb_trans_pane_cp07_ParamLimits

0x8988,	// (0x0005ca4c) vid4_indicators_pane_g1_ParamLimits

0x899c,	// (0x0005ca60) vid4_indicators_pane_g2_ParamLimits

0x89b0,	// (0x0005ca74) vid4_indicators_pane_g3_ParamLimits

0x89c1,	// (0x0005ca85) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000639d3) vid4_indicators_pane_g_ParamLimits

0x89df,	// (0x0005caa3) vid4_indicators_pane_t1_ParamLimits

0x99c8,	// (0x0005da8c) vid4_progress_pane_g1_ParamLimits

0x99da,	// (0x0005da9e) vid4_progress_pane_g2_ParamLimits

0xc9cb,	// (0x00060a8f) vid4_progress_pane_g3_ParamLimits

0x99ea,	// (0x0005daae) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x00063b84) vid4_progress_pane_g_ParamLimits

0x9a08,	// (0x0005dacc) vid4_progress_pane_t1_ParamLimits

0x9a1d,	// (0x0005dae1) vid4_progress_pane_t2_ParamLimits

0x9a33,	// (0x0005daf7) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x00063b8f) vid4_progress_pane_t_ParamLimits

0x9a48,	// (0x0005db0c) wait_bar_pane_cp07_ParamLimits

0x9f5c,	// (0x0005e020) main_cam6_set_pane_g2_ParamLimits

0x9f5c,	// (0x0005e020) main_cam6_set_pane_g2

0x9f68,	// (0x0005e02c) main_cset6_listscroll_pane_ParamLimits

0x9f68,	// (0x0005e02c) main_cset6_listscroll_pane

0x9f93,	// (0x0005e057) main_cset6_slider_pane_ParamLimits

0x9f93,	// (0x0005e057) main_cset6_slider_pane

0x9f9f,	// (0x0005e063) main_cset6_text2_pane_ParamLimits

0x9f9f,	// (0x0005e063) main_cset6_text2_pane

0x0da6,	// (0x00054e6a) main_cset6_text_pane

0x0dae,	// (0x00054e72) main_cset_list_pane_copy1_ParamLimits

0x0dae,	// (0x00054e72) main_cset_list_pane_copy1

0x0dbe,	// (0x00054e82) scroll_pane_cp028_copy1

0x9fb2,	// (0x0005e076) cset_list_set_pane_copy1

0x9fc5,	// (0x0005e089) aid_position_infowindow_above_copy1

0x9fcd,	// (0x0005e091) aid_position_infowindow_below_copy1

0x9fd5,	// (0x0005e099) cset_list_set_pane_g1_copy1

0x004c,	// (0x00054110) cset_list_set_pane_g3_copy1_ParamLimits

0x004c,	// (0x00054110) cset_list_set_pane_g3_copy1

0x005b,	// (0x0005411f) cset_list_set_pane_t1_copy1_ParamLimits

0x005b,	// (0x0005411f) cset_list_set_pane_t1_copy1

0xdaba,	// (0x00061b7e) list_highlight_pane_cp021_copy1_ParamLimits

0xdaba,	// (0x00061b7e) list_highlight_pane_cp021_copy1

0x0dc7,	// (0x00054e8b) cset6_slider_pane_ParamLimits

0x0dc7,	// (0x00054e8b) cset6_slider_pane

0x0df3,	// (0x00054eb7) main_cset6_slider_pane_g1_ParamLimits

0x0df3,	// (0x00054eb7) main_cset6_slider_pane_g1

0x9fdd,	// (0x0005e0a1) main_cset6_slider_pane_g2_ParamLimits

0x9fdd,	// (0x0005e0a1) main_cset6_slider_pane_g2

0x0e1b,	// (0x00054edf) main_cset6_slider_pane_g3_ParamLimits

0x0e1b,	// (0x00054edf) main_cset6_slider_pane_g3

0xa005,	// (0x0005e0c9) main_cset6_slider_pane_g4_ParamLimits

0xa005,	// (0x0005e0c9) main_cset6_slider_pane_g4

0xa011,	// (0x0005e0d5) main_cset6_slider_pane_g5_ParamLimits

0xa011,	// (0x0005e0d5) main_cset6_slider_pane_g5

0x067b,	// (0x0005473f) main_cset6_slider_pane_g7_ParamLimits

0x067b,	// (0x0005473f) main_cset6_slider_pane_g7

0x0687,	// (0x0005474b) main_cset6_slider_pane_g8_ParamLimits

0x0687,	// (0x0005474b) main_cset6_slider_pane_g8

0xa01f,	// (0x0005e0e3) main_cset6_slider_pane_g9_ParamLimits

0xa01f,	// (0x0005e0e3) main_cset6_slider_pane_g9

0xa02b,	// (0x0005e0ef) main_cset6_slider_pane_g10_ParamLimits

0xa02b,	// (0x0005e0ef) main_cset6_slider_pane_g10

0xa037,	// (0x0005e0fb) main_cset6_slider_pane_g11_ParamLimits

0xa037,	// (0x0005e0fb) main_cset6_slider_pane_g11

0xa043,	// (0x0005e107) main_cset6_slider_pane_g12_ParamLimits

0xa043,	// (0x0005e107) main_cset6_slider_pane_g12

0xa04f,	// (0x0005e113) main_cset6_slider_pane_g13_ParamLimits

0xa04f,	// (0x0005e113) main_cset6_slider_pane_g13

0xa05b,	// (0x0005e11f) main_cset6_slider_pane_g14_ParamLimits

0xa05b,	// (0x0005e11f) main_cset6_slider_pane_g14

0xa067,	// (0x0005e12b) main_cset6_slider_pane_g15_ParamLimits

0xa067,	// (0x0005e12b) main_cset6_slider_pane_g15

0xa07f,	// (0x0005e143) main_cset6_slider_pane_g16_ParamLimits

0xa07f,	// (0x0005e143) main_cset6_slider_pane_g16

0xa08d,	// (0x0005e151) main_cset6_slider_pane_g17_ParamLimits

0xa08d,	// (0x0005e151) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x00063c5c) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x00063c5c) main_cset6_slider_pane_g

0x0e27,	// (0x00054eeb) main_cset6_slider_pane_t1_ParamLimits

0x0e27,	// (0x00054eeb) main_cset6_slider_pane_t1

0xa0b3,	// (0x0005e177) main_cset6_slider_pane_t2_ParamLimits

0xa0b3,	// (0x0005e177) main_cset6_slider_pane_t2

0xa0de,	// (0x0005e1a2) main_cset6_slider_pane_t3_ParamLimits

0xa0de,	// (0x0005e1a2) main_cset6_slider_pane_t3

0xa109,	// (0x0005e1cd) main_cset6_slider_pane_t4_ParamLimits

0xa109,	// (0x0005e1cd) main_cset6_slider_pane_t4

0xa134,	// (0x0005e1f8) main_cset6_slider_pane_t5_ParamLimits

0xa134,	// (0x0005e1f8) main_cset6_slider_pane_t5

0x0e68,	// (0x00054f2c) main_cset6_slider_pane_t7_ParamLimits

0x0e68,	// (0x00054f2c) main_cset6_slider_pane_t7

0xa161,	// (0x0005e225) main_cset6_slider_pane_t8_ParamLimits

0xa161,	// (0x0005e225) main_cset6_slider_pane_t8

0xa185,	// (0x0005e249) main_cset6_slider_pane_t9_ParamLimits

0xa185,	// (0x0005e249) main_cset6_slider_pane_t9

0xa1a9,	// (0x0005e26d) main_cset6_slider_pane_t10_ParamLimits

0xa1a9,	// (0x0005e26d) main_cset6_slider_pane_t10

0xa1cd,	// (0x0005e291) main_cset6_slider_pane_t11_ParamLimits

0xa1cd,	// (0x0005e291) main_cset6_slider_pane_t11

0x0e9e,	// (0x00054f62) main_cset6_slider_pane_t14_ParamLimits

0x0e9e,	// (0x00054f62) main_cset6_slider_pane_t14

0x0ed7,	// (0x00054f9b) main_cset6_slider_pane_t15_ParamLimits

0x0ed7,	// (0x00054f9b) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x00063c81) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x00063c81) main_cset6_slider_pane_t

0x073f,	// (0x00054803) cset_slider_pane_g1_copy1

0x0748,	// (0x0005480c) cset_slider_pane_g2_copy1

0x0751,	// (0x00054815) cset_slider_pane_g3_copy1

0x1035,	// (0x000550f9) bg_popup_sub_pane_cp011_copy1

0x0f10,	// (0x00054fd4) main_cset_text_pane_g1_copy1

0x07dc,	// (0x000548a0) main_cset_text_pane_t1_copy1

0x07ea,	// (0x000548ae) main_cset_text_pane_t2_copy1

0x07f8,	// (0x000548bc) main_cset_text_pane_t3_copy1

0x0806,	// (0x000548ca) main_cset_text_pane_t4_copy1

0x0814,	// (0x000548d8) main_cset_text_pane_t5_copy1

0x0f18,	// (0x00054fdc) main_cset_text_pane_t6_copy1

0x0830,	// (0x000548f4) main_cset_text_pane_t7_copy1

0xa2c1,	// (0x0005e385) main_cset_text2_pane_t1_copy1

0x6909,	// (0x0005a9cd) main_ncimui_pane

0x6968,	// (0x0005aa2c) popup_query_ncimui_window_ParamLimits

0x6968,	// (0x0005aa2c) popup_query_ncimui_window

0xe97d,	// (0x00062a41) field_cale_ev2_pane_g4_ParamLimits

0xe97d,	// (0x00062a41) field_cale_ev2_pane_g4

0x8221,	// (0x0005c2e5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8221,	// (0x0005c2e5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0006395f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0006395f) cell_video_dialer_keypad_pane_g

0x8239,	// (0x0005c2fd) cell_video_dialer_keypad_pane_t1

0x1035,	// (0x000550f9) bg_popup_window_pane_cp012

0xcba5,	// (0x00060c69) heading_pane_cp06

0x0f44,	// (0x00055008) ncim_query_content_pane

0x1035,	// (0x000550f9) bg_popup_heading_pane_cp01

0x0f4c,	// (0x00055010) ncim_heading_pane_t1

0x0f5a,	// (0x0005501e) ncim_indicator_popup_pane

0x0f6c,	// (0x00055030) ncim_query_button_pane

0x0f80,	// (0x00055044) ncim_query_content_pane_t1

0x0f92,	// (0x00055056) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x00063cc5) ncim_query_content_pane_t

0x0fcc,	// (0x00055090) ncim_query_list_pane

0x0fde,	// (0x000550a2) ncim_query_popup_pane

0x0f5a,	// (0x0005501e) ncim_indicator_popup_pane_ParamLimits

0xa414,	// (0x0005e4d8) ncim_query_content_pane_g1_ParamLimits

0xa414,	// (0x0005e4d8) ncim_query_content_pane_g1

0x0f80,	// (0x00055044) ncim_query_content_pane_t1_ParamLimits

0x0f92,	// (0x00055056) ncim_query_content_pane_t2_ParamLimits

0xa420,	// (0x0005e4e4) ncim_query_content_pane_t3_ParamLimits

0xa420,	// (0x0005e4e4) ncim_query_content_pane_t3

0xa43d,	// (0x0005e501) ncim_query_content_pane_t4_ParamLimits

0xa43d,	// (0x0005e501) ncim_query_content_pane_t4

0xa45a,	// (0x0005e51e) ncim_query_content_pane_t5_ParamLimits

0xa45a,	// (0x0005e51e) ncim_query_content_pane_t5

0x0fa4,	// (0x00055068) ncim_query_content_pane_t6_ParamLimits

0x0fa4,	// (0x00055068) ncim_query_content_pane_t6

0xfc01,	// (0x00063cc5) ncim_query_content_pane_t_ParamLimits

0x0fcc,	// (0x00055090) ncim_query_list_pane_ParamLimits

0x0fde,	// (0x000550a2) ncim_query_popup_pane_ParamLimits

0x0ff2,	// (0x000550b6) wait_bar_pane_cp04

0x1035,	// (0x000550f9) input_focus_pane_cp011

0x0ffa,	// (0x000550be) ncim_query_popup_pane_t1

0x1008,	// (0x000550cc) ncim_list_query_list_pane_ParamLimits

0x1008,	// (0x000550cc) ncim_list_query_list_pane

0x1035,	// (0x000550f9) bg_button_pane_cp027

0x1015,	// (0x000550d9) ncim_query_button_pane_g1

0x1035,	// (0x000550f9) list_highlight_pane_cp012

0x105d,	// (0x00055121) ncim_list_query_list_pane_g1

0x1065,	// (0x00055129) ncim_list_query_list_pane_t1

0x88c6,	// (0x0005c98a) cam4_indicators_pane_g3_ParamLimits

0x88c6,	// (0x0005c98a) cam4_indicators_pane_g3

0x89cd,	// (0x0005ca91) vid4_indicators_pane_g5_ParamLimits

0x89cd,	// (0x0005ca91) vid4_indicators_pane_g5

0x99f9,	// (0x0005dabd) vid4_progress_pane_g5_ParamLimits

0x99f9,	// (0x0005dabd) vid4_progress_pane_g5

0xa300,	// (0x0005e3c4) main_ncimui_pane_g1

0xa368,	// (0x0005e42c) ncimui_group_query_pane_ParamLimits

0xa368,	// (0x0005e42c) ncimui_group_query_pane

0xa3b0,	// (0x0005e474) ncimui_list_pane_ParamLimits

0xa3b0,	// (0x0005e474) ncimui_list_pane

0xa3d7,	// (0x0005e49b) ncimui_text_pane_ParamLimits

0xa3d7,	// (0x0005e49b) ncimui_text_pane

0xa477,	// (0x0005e53b) ncimui_text_pane_t1_ParamLimits

0xa477,	// (0x0005e53b) ncimui_text_pane_t1

0x1073,	// (0x00055137) ncimui_list_single_graphic_pane_ParamLimits

0x1073,	// (0x00055137) ncimui_list_single_graphic_pane

0xa496,	// (0x0005e55a) ncimui_query_pane_ParamLimits

0xa496,	// (0x0005e55a) ncimui_query_pane

0x1035,	// (0x000550f9) list_highlight_pane_cp013

0x1083,	// (0x00055147) ncim_list_query_list_pane_t1_copy1

0x105d,	// (0x00055121) ncim_list_single_graphic_pane_g1

0x1091,	// (0x00055155) ncim_query_button_pane_cp01

0x109d,	// (0x00055161) ncim_query_entry_pane_ParamLimits

0x109d,	// (0x00055161) ncim_query_entry_pane

0x10b0,	// (0x00055174) ncimui_query_pane_g1

0x10bc,	// (0x00055180) ncimui_query_pane_t1_ParamLimits

0x10bc,	// (0x00055180) ncimui_query_pane_t1

0xdaba,	// (0x00061b7e) input_focus_pane_cp012

0x10d5,	// (0x00055199) ncim_query_entry_pane_t1

0xc2e9,	// (0x000603ad) main_im_pane_ParamLimits

0x6909,	// (0x0005a9cd) main_mobtv_pane_ParamLimits

0x6909,	// (0x0005a9cd) main_mobtv_pane

0xa09b,	// (0x0005e15f) main_cset6_slider_pane_g18_ParamLimits

0xa09b,	// (0x0005e15f) main_cset6_slider_pane_g18

0xa0a7,	// (0x0005e16b) main_cset6_slider_pane_g19_ParamLimits

0xa0a7,	// (0x0005e16b) main_cset6_slider_pane_g19

0x052c,	// (0x000545f0) bg_main_mobtv_pane_ParamLimits

0x052c,	// (0x000545f0) bg_main_mobtv_pane

0xa4a9,	// (0x0005e56d) main_mobtv_info_pane

0xa4b4,	// (0x0005e578) main_mobtv_loading_pane_ParamLimits

0xa4b4,	// (0x0005e578) main_mobtv_loading_pane

0x10e7,	// (0x000551ab) main_mobtv_pg_channel_list_pane

0x10f1,	// (0x000551b5) main_mobtv_pg_hdr_pane

0xa4c1,	// (0x0005e585) main_mobtv_programe_curr_pane_ParamLimits

0xa4c1,	// (0x0005e585) main_mobtv_programe_curr_pane

0xa4ce,	// (0x0005e592) main_mobtv_programe_next_pane_ParamLimits

0xa4ce,	// (0x0005e592) main_mobtv_programe_next_pane

0x10fa,	// (0x000551be) popup_mobtv_noti_window

0xe679,	// (0x0006273d) main_tv_pg_hdr_pane_g1

0x1102,	// (0x000551c6) main_tv_pg_hdr_pane_g2

0x110a,	// (0x000551ce) main_tv_pg_hdr_pane_g3

0x1112,	// (0x000551d6) main_tv_pg_hdr_pane_g4

0x111a,	// (0x000551de) main_tv_pg_hdr_pane_g5

0x1124,	// (0x000551e8) main_tv_pg_hdr_pane_g6

0x112e,	// (0x000551f2) main_tv_pg_hdr_pane_g7

0x1138,	// (0x000551fc) main_tv_pg_hdr_pane_g8

0x1142,	// (0x00055206) main_tv_pg_hdr_pane_g9

0x114c,	// (0x00055210) main_tv_pg_hdr_pane_g10

0x1156,	// (0x0005521a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00063cd2) main_tv_pg_hdr_pane_g

0x1160,	// (0x00055224) main_tv_pg_hdr_pane_t1

0x116e,	// (0x00055232) main_tv_pg_hdr_pane_t2

0x117c,	// (0x00055240) main_tv_pg_hdr_pane_t3

0x118c,	// (0x00055250) main_tv_pg_hdr_pane_t4

0x119c,	// (0x00055260) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x00063ce9) main_tv_pg_hdr_pane_t

0x11ac,	// (0x00055270) single_mobtv_pg_channel_pane_ParamLimits

0x11ac,	// (0x00055270) single_mobtv_pg_channel_pane

0x11be,	// (0x00055282) single_mobtv_pg_channel_table_pane

0x11c7,	// (0x0005528b) single_mobtv_pg_channel_thumb_pane

0x11d0,	// (0x00055294) single_tv_pg_channel_pane_g1

0x11d9,	// (0x0005529d) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00063cf4) single_tv_pg_channel_pane_g

0xe8dc,	// (0x000629a0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8dc,	// (0x000629a0) bg_single_mobtv_pg_channel_thumb_pane

0x11e2,	// (0x000552a6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x11e2,	// (0x000552a6) single_mobtv_pg_channel_thumb_pane_g1

0x11f0,	// (0x000552b4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x11f0,	// (0x000552b4) single_mobtv_pg_channel_thumb_pane_g2

0x11fc,	// (0x000552c0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x11fc,	// (0x000552c0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x00063cf9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x00063cf9) single_mobtv_pg_channel_thumb_pane_g

0x1208,	// (0x000552cc) single_mobtv_pg_channel_thumb_pane_t1

0x1216,	// (0x000552da) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00063d00) single_mobtv_pg_channel_thumb_pane_t

0xe679,	// (0x0006273d) bg_single_mobtv_pg_channel_table_pane_g1

0xe679,	// (0x0006273d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000637ab) bg_single_mobtv_pg_channel_table_pane_g

0x1224,	// (0x000552e8) single_mobtv_pg_channel_table_pane_t1

0x1232,	// (0x000552f6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x00063d05) single_mobtv_pg_channel_table_pane_t

0xa4e3,	// (0x0005e5a7) main_mobtv_info_pane_g1_ParamLimits

0xa4e3,	// (0x0005e5a7) main_mobtv_info_pane_g1

0xa4ff,	// (0x0005e5c3) main_mobtv_info_pane_t1_ParamLimits

0xa4ff,	// (0x0005e5c3) main_mobtv_info_pane_t1

0xa577,	// (0x0005e63b) main_mobtv_info_pane_t2_ParamLimits

0xa577,	// (0x0005e63b) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x00063d0f) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x00063d0f) main_mobtv_info_pane_t

0xa606,	// (0x0005e6ca) wait_bar_pane_cp05

0xa618,	// (0x0005e6dc) main_mobtv_loading_pane_g1_ParamLimits

0xa618,	// (0x0005e6dc) main_mobtv_loading_pane_g1

0xa626,	// (0x0005e6ea) main_mobtv_loading_pane_g2_ParamLimits

0xa626,	// (0x0005e6ea) main_mobtv_loading_pane_g2

0xa632,	// (0x0005e6f6) main_mobtv_loading_pane_g3_ParamLimits

0xa632,	// (0x0005e6f6) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x00063d16) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x00063d16) main_mobtv_loading_pane_g

0x1240,	// (0x00055304) main_mobtv_loading_pane_t1_ParamLimits

0x1240,	// (0x00055304) main_mobtv_loading_pane_t1

0x1258,	// (0x0005531c) main_mobtv_loading_pane_t2_ParamLimits

0x1258,	// (0x0005531c) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x00063d1d) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x00063d1d) main_mobtv_loading_pane_t

0xa640,	// (0x0005e704) wait_bar_pane_cp06_ParamLimits

0xa640,	// (0x0005e704) wait_bar_pane_cp06

0x127c,	// (0x00055340) main_mobtv_programe_curr_pane_t1

0x128a,	// (0x0005534e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x00063d22) main_mobtv_programe_curr_pane_t

0x1298,	// (0x0005535c) main_mobtv_programe_next_pane_t1

0x12a6,	// (0x0005536a) main_mobtv_programe_next_pane_t2

0x12b4,	// (0x00055378) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x00063d27) main_mobtv_programe_next_pane_t

0x1035,	// (0x000550f9) bg_popup_mobtv_noti_window_pane

0x12c2,	// (0x00055386) popup_mobtv_noti_window_g1

0x12ca,	// (0x0005538e) popup_mobtv_noti_window_t1

0x12d8,	// (0x0005539c) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x00063d2e) popup_mobtv_noti_window_t

0xe679,	// (0x0006273d) bg_popup_mobtv_noti_window_pane_g1

0x3543,	// (0x00057607) sc_clock_pane

0x3543,	// (0x00057607) main_fs_bigclock_pane

0x9c18,	// (0x0005dcdc) blid2_tripm_pane_t4_ParamLimits

0x9c18,	// (0x0005dcdc) blid2_tripm_pane_t4

0xa64c,	// (0x0005e710) sc_clock_pane_g1_ParamLimits

0xa64c,	// (0x0005e710) sc_clock_pane_g1

0xa65a,	// (0x0005e71e) sc_clock_pane_t1_ParamLimits

0xa65a,	// (0x0005e71e) sc_clock_pane_t1

0xa66d,	// (0x0005e731) sc_clock_pane_t2_ParamLimits

0xa66d,	// (0x0005e731) sc_clock_pane_t2

0xa67f,	// (0x0005e743) sc_clock_pane_t3_ParamLimits

0xa67f,	// (0x0005e743) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x00063d33) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x00063d33) sc_clock_pane_t

0xb56a,	// (0x0005f62e) main_fs_bigclock_indicator_pane_ParamLimits

0xb56a,	// (0x0005f62e) main_fs_bigclock_indicator_pane

0xa71a,	// (0x0005e7de) main_fs_bigclock_pane_g1_ParamLimits

0xa71a,	// (0x0005e7de) main_fs_bigclock_pane_g1

0xb576,	// (0x0005f63a) main_fs_bigclock_pane_t1_ParamLimits

0xb576,	// (0x0005f63a) main_fs_bigclock_pane_t1

0xb588,	// (0x0005f64c) main_fs_bigclock_pane_t2_ParamLimits

0xb588,	// (0x0005f64c) main_fs_bigclock_pane_t2

0xb59c,	// (0x0005f660) main_fs_bigclock_pane_t3_ParamLimits

0xb59c,	// (0x0005f660) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00063f37) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00063f37) main_fs_bigclock_pane_t

0x1ac0,	// (0x00055b84) main_fs_bigclock_indicator_pane_g1

0x0f74,	// (0x00055038) ncim_query_content_pane_g2_ParamLimits

0x0f74,	// (0x00055038) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00063cc0) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00063cc0) ncim_query_content_pane_g

0xa693,	// (0x0005e757) sc_clock_pane_t4_ParamLimits

0xa693,	// (0x0005e757) sc_clock_pane_t4

0x6909,	// (0x0005a9cd) main_radioblah_pane

0xf075,	// (0x00063139) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x00063139) cell_call4_button_pane_t1_copy1

0xa31a,	// (0x0005e3de) main_ncimui_pane_t1_ParamLimits

0xa31a,	// (0x0005e3de) main_ncimui_pane_t1

0xa334,	// (0x0005e3f8) main_ncimui_pane_t2_ParamLimits

0xa334,	// (0x0005e3f8) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x00063cb9) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x00063cb9) main_ncimui_pane_t

0x1412,	// (0x000554d6) main_radioblah_anim_pane_ParamLimits

0x1412,	// (0x000554d6) main_radioblah_anim_pane

0x1423,	// (0x000554e7) main_radioblah_info_pane_ParamLimits

0x1423,	// (0x000554e7) main_radioblah_info_pane

0x1437,	// (0x000554fb) main_radioblah_pane_t1_ParamLimits

0x1437,	// (0x000554fb) main_radioblah_pane_t1

0x1453,	// (0x00055517) main_radioblah_pane_t2_ParamLimits

0x1453,	// (0x00055517) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x00063d54) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x00063d54) main_radioblah_pane_t

0xa76c,	// (0x0005e830) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa76c,	// (0x0005e830) main_radioblah_rocker_ctrl_pane

0x149b,	// (0x0005555f) main_radioblah_info_pane_t1_ParamLimits

0x149b,	// (0x0005555f) main_radioblah_info_pane_t1

0xa7b1,	// (0x0005e875) main_radioblah_info_pane_t2_ParamLimits

0xa7b1,	// (0x0005e875) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x00063d5d) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x00063d5d) main_radioblah_info_pane_t

0xe679,	// (0x0006273d) main_radioblah_rocker_ctrl_pane_g1

0xa861,	// (0x0005e925) main_radioblah_rocker_ctrl_pane_g2

0xa869,	// (0x0005e92d) main_radioblah_rocker_ctrl_pane_g3

0xa871,	// (0x0005e935) main_radioblah_rocker_ctrl_pane_g4

0xa879,	// (0x0005e93d) main_radioblah_rocker_ctrl_pane_g5

0xa881,	// (0x0005e945) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x00063d66) main_radioblah_rocker_ctrl_pane_g

0xa2c1,	// (0x0005e385) main_cset_text2_pane_t1_copy1_ParamLimits

0x87e6,	// (0x0005c8aa) cam4_image_uncrop_qvga_pane

0x893b,	// (0x0005c9ff) vid4_image_uncrop_qcif_pane

0x9da6,	// (0x0005de6a) cam6_image_uncrop_qvga_pane_ParamLimits

0x9da6,	// (0x0005de6a) cam6_image_uncrop_qvga_pane

0x0c89,	// (0x00054d4d) vid6_image_uncrop_qcif_pane_ParamLimits

0x0c89,	// (0x00054d4d) vid6_image_uncrop_qcif_pane

0x1035,	// (0x000550f9) bg_popup_preview_window_pane_cp03

0x0f26,	// (0x00054fea) list_cset_text2_pane

0x0f2e,	// (0x00054ff2) main_cset6_text2_pane_g1

0x0f36,	// (0x00054ffa) main_cset6_text2_pane_t1

0xa889,	// (0x0005e94d) list_cset_text2_pane_t1_ParamLimits

0xa889,	// (0x0005e94d) list_cset_text2_pane_t1

0x6909,	// (0x0005a9cd) main_radioblah_pane_ParamLimits

0xa5f2,	// (0x0005e6b6) main_mobtv_info_pane_t3_ParamLimits

0xa5f2,	// (0x0005e6b6) main_mobtv_info_pane_t3

0xa75a,	// (0x0005e81e) main_radioblah_pane_g1

0xa785,	// (0x0005e849) main_radioblah_info_pane_g1

0xa806,	// (0x0005e8ca) main_radioblah_info_pane_t3_ParamLimits

0xa806,	// (0x0005e8ca) main_radioblah_info_pane_t3

0x5538,	// (0x000595fc) highlight_cell_cale_month_pane_ParamLimits

0x5538,	// (0x000595fc) highlight_cell_cale_month_pane

0x3543,	// (0x00057607) main_phob_fisheye_pane

0xea20,	// (0x00062ae4) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x00062ae4) scroll_pane_cp0031

0x0d97,	// (0x00054e5b) wait_bar_pane_cp08_ParamLimits

0x9fb2,	// (0x0005e076) cset_list_set_pane_copy1_ParamLimits

0x14d5,	// (0x00055599) highlight_cell_cale_month_pane_g1

0xa8a6,	// (0x0005e96a) highlight_cell_cale_month_pane_t1

0x0a08,	// (0x00054acc) list_gen_pane_cp01

0x0666,	// (0x0005472a) scroll_pane_01

0xa8b4,	// (0x0005e978) list_single_double_fisheye_pane

0xa8bd,	// (0x0005e981) list_double_fisheye_pane_g1_ParamLimits

0xa8bd,	// (0x0005e981) list_double_fisheye_pane_g1

0xa8c9,	// (0x0005e98d) list_double_fisheye_pane_g2_ParamLimits

0xa8c9,	// (0x0005e98d) list_double_fisheye_pane_g2

0xa8dd,	// (0x0005e9a1) list_double_fisheye_pane_g3_ParamLimits

0xa8dd,	// (0x0005e9a1) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x00063d73) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x00063d73) list_double_fisheye_pane_g

0xa906,	// (0x0005e9ca) list_double_fisheye_pane_t1_ParamLimits

0xa906,	// (0x0005e9ca) list_double_fisheye_pane_t1

0xa921,	// (0x0005e9e5) list_double_fisheye_pane_t2_ParamLimits

0xa921,	// (0x0005e9e5) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x00063d7e) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x00063d7e) list_double_fisheye_pane_t

0x3543,	// (0x00057607) main_call5_pane

0xa6b9,	// (0x0005e77d) sc_swipe_pane_ParamLimits

0xa6b9,	// (0x0005e77d) sc_swipe_pane

0xa94f,	// (0x0005ea13) call5_image_pane_ParamLimits

0xa94f,	// (0x0005ea13) call5_image_pane

0xa95f,	// (0x0005ea23) call5_swipe_1_pane_ParamLimits

0xa95f,	// (0x0005ea23) call5_swipe_1_pane

0xa96b,	// (0x0005ea2f) call5_swipe_2_pane_ParamLimits

0xa96b,	// (0x0005ea2f) call5_swipe_2_pane

0xa985,	// (0x0005ea49) popup_call5_audio_first_window_ParamLimits

0xa985,	// (0x0005ea49) popup_call5_audio_first_window

0xe8dc,	// (0x000629a0) call5_swipe_1_pane_g1_ParamLimits

0xe8dc,	// (0x000629a0) call5_swipe_1_pane_g1

0x14dd,	// (0x000555a1) call5_swipe_1_pane_g2_ParamLimits

0x14dd,	// (0x000555a1) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00063d83) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00063d83) call5_swipe_1_pane_g

0x14e9,	// (0x000555ad) call5_swipe_1_pane_t1_ParamLimits

0x14e9,	// (0x000555ad) call5_swipe_1_pane_t1

0xe8dc,	// (0x000629a0) call5_swipe_2_pane_g1_ParamLimits

0xe8dc,	// (0x000629a0) call5_swipe_2_pane_g1

0x14fe,	// (0x000555c2) call5_swipe_2_pane_g2_ParamLimits

0x14fe,	// (0x000555c2) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x00063d88) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x00063d88) call5_swipe_2_pane_g

0x150a,	// (0x000555ce) call5_swipe_2_pane_t1_ParamLimits

0x150a,	// (0x000555ce) call5_swipe_2_pane_t1

0x151f,	// (0x000555e3) sc_swipe_pane_g1_ParamLimits

0x151f,	// (0x000555e3) sc_swipe_pane_g1

0x152c,	// (0x000555f0) sc_swipe_pane_g2_ParamLimits

0x152c,	// (0x000555f0) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x00063d8d) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x00063d8d) sc_swipe_pane_g

0x1538,	// (0x000555fc) sc_swipe_pane_t1_ParamLimits

0x1538,	// (0x000555fc) sc_swipe_pane_t1

0x3543,	// (0x00057607) main_cmail_launcher_pane

0xa993,	// (0x0005ea57) aid_size_cell_cmail_l_ParamLimits

0xa993,	// (0x0005ea57) aid_size_cell_cmail_l

0xa9a3,	// (0x0005ea67) grid_cmail_l_pane_ParamLimits

0xa9a3,	// (0x0005ea67) grid_cmail_l_pane

0xa9b3,	// (0x0005ea77) cell_cmail_l_pane_ParamLimits

0xa9b3,	// (0x0005ea77) cell_cmail_l_pane

0xa9c7,	// (0x0005ea8b) cell_cmail_l_pane_g1_ParamLimits

0xa9c7,	// (0x0005ea8b) cell_cmail_l_pane_g1

0xa9d3,	// (0x0005ea97) cell_cmail_l_pane_t1_ParamLimits

0xa9d3,	// (0x0005ea97) cell_cmail_l_pane_t1

0x154d,	// (0x00055611) cell_cmail_l_pane_t2_ParamLimits

0x154d,	// (0x00055611) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x00063d92) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x00063d92) cell_cmail_l_pane_t

0xdaba,	// (0x00061b7e) grid_highlight_pane_cp018_ParamLimits

0xdaba,	// (0x00061b7e) grid_highlight_pane_cp018

0x3399,	// (0x0005745d) main2_pane_ParamLimits

0x3399,	// (0x0005745d) main2_pane

0xc382,	// (0x00060446) popup_sp_fs_action_menu_bg_pane_g1

0xc38a,	// (0x0006044e) popup_sp_fs_action_menu_bg_pane_g2

0xc392,	// (0x00060456) popup_sp_fs_action_menu_bg_pane_g3

0xc39a,	// (0x0006045e) popup_sp_fs_action_menu_bg_pane_g4

0xc3a2,	// (0x00060466) popup_sp_fs_action_menu_bg_pane_g5

0xc3aa,	// (0x0006046e) popup_sp_fs_action_menu_bg_pane_g6

0xc3b2,	// (0x00060476) popup_sp_fs_action_menu_bg_pane_g7

0xc3ba,	// (0x0006047e) popup_sp_fs_action_menu_bg_pane_g8

0xc3c2,	// (0x00060486) popup_sp_fs_action_menu_bg_pane_g9

0xc3ca,	// (0x0006048e) popup_sp_fs_action_menu_bg_pane_g10

0xc3ca,	// (0x0006048e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x00063257) popup_sp_fs_action_menu_bg_pane_g

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g3_g1

0x4333,	// (0x000583f7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_t3_g3_g2

0x433f,	// (0x00058403) list_medium_line_x2_t3_g3_g3_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x00063307) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x00063307) list_medium_line_x2_t3_g3_g

0x434b,	// (0x0005840f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x434b,	// (0x0005840f) list_medium_line_x2_t3_g3_t1

0x4360,	// (0x00058424) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4360,	// (0x00058424) list_medium_line_x2_t3_g3_t2

0x4372,	// (0x00058436) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0006330e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0006330e) list_medium_line_x2_t3_g3_t

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g2_g1

0x433f,	// (0x00058403) list_medium_line_x2_t3_g2_g2_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x00063315) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x00063315) list_medium_line_x2_t3_g2_g

0x4387,	// (0x0005844b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4387,	// (0x0005844b) list_medium_line_x2_t3_g2_t1

0x439d,	// (0x00058461) list_medium_line_x2_t3_g2_t2_ParamLimits

0x439d,	// (0x00058461) list_medium_line_x2_t3_g2_t2

0x4372,	// (0x00058436) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0006331a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0006331a) list_medium_line_x2_t3_g2_t

0x4327,	// (0x000583eb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t4_g4_g1

0x43af,	// (0x00058473) list_medium_line_x2_t4_g4_g2_ParamLimits

0x43af,	// (0x00058473) list_medium_line_x2_t4_g4_g2

0x4333,	// (0x000583f7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_t4_g4_g3

0x43bb,	// (0x0005847f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x43bb,	// (0x0005847f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x00063321) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x00063321) list_medium_line_x2_t4_g4_g

0x43c7,	// (0x0005848b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x43c7,	// (0x0005848b) list_medium_line_x2_t4_g4_t1

0x43e1,	// (0x000584a5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x43e1,	// (0x000584a5) list_medium_line_x2_t4_g4_t2

0x43f7,	// (0x000584bb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x43f7,	// (0x000584bb) list_medium_line_x2_t4_g4_t3

0x440c,	// (0x000584d0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x440c,	// (0x000584d0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0006332a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0006332a) list_medium_line_x2_t4_g4_t

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g4_g1

0x43af,	// (0x00058473) list_medium_line_x2_t2_g4_g2_ParamLimits

0x43af,	// (0x00058473) list_medium_line_x2_t2_g4_g2

0x4333,	// (0x000583f7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_t2_g4_g3

0x433f,	// (0x00058403) list_medium_line_x2_t2_g4_g4_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x00063391) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x00063391) list_medium_line_x2_t2_g4_g

0x555e,	// (0x00059622) list_medium_line_x2_t2_g4_t1_ParamLimits

0x555e,	// (0x00059622) list_medium_line_x2_t2_g4_t1

0x4372,	// (0x00058436) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0006339a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0006339a) list_medium_line_x2_t2_g4_t

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g3_g1

0x4333,	// (0x000583f7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_t2_g3_g2

0x433f,	// (0x00058403) list_medium_line_x2_t2_g3_g3_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x00063307) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x00063307) list_medium_line_x2_t2_g3_g

0x5573,	// (0x00059637) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5573,	// (0x00059637) list_medium_line_x2_t2_g3_t1

0x4372,	// (0x00058436) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0006339f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0006339f) list_medium_line_x2_t2_g3_t

0x5720,	// (0x000597e4) main_sp_fs_list_pane_ParamLimits

0x5720,	// (0x000597e4) main_sp_fs_list_pane

0x572c,	// (0x000597f0) sp_fs_scroll_pane_ParamLimits

0x572c,	// (0x000597f0) sp_fs_scroll_pane

0x5738,	// (0x000597fc) list_medium_line_x2_t3_t1

0x5748,	// (0x0005980c) list_medium_line_x2_t3_t2

0x5756,	// (0x0005981a) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x000633ea) list_medium_line_x2_t3_t

0x5764,	// (0x00059828) list_medium_line_x3_t4_t1

0x5774,	// (0x00059838) list_medium_line_x3_t4_t2

0x5782,	// (0x00059846) list_medium_line_x3_t4_t3

0x5756,	// (0x0005981a) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x000633f1) list_medium_line_x3_t4_t

0x5790,	// (0x00059854) list_medium_line_x4_t5_t1

0x57a0,	// (0x00059864) list_medium_line_x4_t5_t2

0x5782,	// (0x00059846) list_medium_line_x4_t5_t3

0x57ae,	// (0x00059872) list_medium_line_x4_t5_t4

0x5756,	// (0x0005981a) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x000633fa) list_medium_line_x4_t5_t

0x4327,	// (0x000583eb) list_medium_line_t4_g4_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_t4_g4_g1

0x43bb,	// (0x0005847f) list_medium_line_t4_g4_g2_ParamLimits

0x43bb,	// (0x0005847f) list_medium_line_t4_g4_g2

0x57bc,	// (0x00059880) list_medium_line_t4_g4_g3_ParamLimits

0x57bc,	// (0x00059880) list_medium_line_t4_g4_g3

0x433f,	// (0x00058403) list_medium_line_t4_g4_g4_ParamLimits

0x433f,	// (0x00058403) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x00063405) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x00063405) list_medium_line_t4_g4_g

0x57c8,	// (0x0005988c) list_medium_line_t4_g4_t1_ParamLimits

0x57c8,	// (0x0005988c) list_medium_line_t4_g4_t1

0x57dd,	// (0x000598a1) list_medium_line_t4_g4_t2_ParamLimits

0x57dd,	// (0x000598a1) list_medium_line_t4_g4_t2

0x57f2,	// (0x000598b6) list_medium_line_t4_g4_t3_ParamLimits

0x57f2,	// (0x000598b6) list_medium_line_t4_g4_t3

0x4372,	// (0x00058436) list_medium_line_t4_g4_t4_ParamLimits

0x4372,	// (0x00058436) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0006340e) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0006340e) list_medium_line_t4_g4_t

0x5908,	// (0x000599cc) chi_dic_find_pane_g1

0x6925,	// (0x0005a9e9) main_tport_pane

0x92f2,	// (0x0005d3b6) list_medium_line_plain_t1

0x93d7,	// (0x0005d49b) list_medium_line_t2_g2_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t2_g2_g1

0x93e3,	// (0x0005d4a7) list_medium_line_t2_g2_g2_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x00063aca) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x00063aca) list_medium_line_t2_g2_g

0x93ef,	// (0x0005d4b3) list_medium_line_t2_g2_t1_ParamLimits

0x93ef,	// (0x0005d4b3) list_medium_line_t2_g2_t1

0x9409,	// (0x0005d4cd) list_medium_line_t2_g2_t2_ParamLimits

0x9409,	// (0x0005d4cd) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00063acf) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00063acf) list_medium_line_t2_g2_t

0x01e0,	// (0x000542a4) aid_sp_fs_list_icon_a_sm

0x01e8,	// (0x000542ac) aid_sp_fs_list_icon_d

0x01f0,	// (0x000542b4) aid_sp_fs_text_primary

0x0a11,	// (0x00054ad5) aid_sp_fs_text_secondary

0x9a5a,	// (0x0005db1e) list_medium_line

0x9a5a,	// (0x0005db1e) list_medium_line_g2

0x9a5a,	// (0x0005db1e) list_medium_line_g3

0x9a5a,	// (0x0005db1e) list_medium_line_plain

0x9a5a,	// (0x0005db1e) list_medium_line_plain_t2

0x9a5a,	// (0x0005db1e) list_medium_line_plain_t3

0x9a5a,	// (0x0005db1e) list_medium_line_right_icon

0x9a5a,	// (0x0005db1e) list_medium_line_right_iconx2

0x9a5a,	// (0x0005db1e) list_medium_line_t2

0x9a5a,	// (0x0005db1e) list_medium_line_t2_g2

0x9a5a,	// (0x0005db1e) list_medium_line_t2_g3

0x9a5a,	// (0x0005db1e) list_medium_line_t2_right_icon

0x9a5a,	// (0x0005db1e) list_medium_line_t2_right_iconx2

0x9a5a,	// (0x0005db1e) list_medium_line_t3

0x9a5a,	// (0x0005db1e) list_medium_line_t3_g2

0x9a5a,	// (0x0005db1e) list_medium_line_t3_g3

0x9a5a,	// (0x0005db1e) list_medium_line_t3_right_iconx2

0x9a63,	// (0x0005db27) list_medium_line_t4_g4

0x9a6c,	// (0x0005db30) list_medium_line_x2

0x9a6c,	// (0x0005db30) list_medium_line_x2_t2_g2

0x9a6c,	// (0x0005db30) list_medium_line_x2_t2_g3

0x9a6c,	// (0x0005db30) list_medium_line_x2_t2_g4

0x9a6c,	// (0x0005db30) list_medium_line_x2_t3

0x9a6c,	// (0x0005db30) list_medium_line_x2_t3_g2

0x9a6c,	// (0x0005db30) list_medium_line_x2_t3_g3

0x9a6c,	// (0x0005db30) list_medium_line_x2_t3_g4

0x9a6c,	// (0x0005db30) list_medium_line_x2_t4_g2

0x9a6c,	// (0x0005db30) list_medium_line_x2_t4_g4

0x9a75,	// (0x0005db39) list_medium_line_x3

0x9a75,	// (0x0005db39) list_medium_line_x3_t4

0x9a75,	// (0x0005db39) list_medium_line_x3_t4_g4

0x9a63,	// (0x0005db27) list_medium_line_x4_t4

0x9a63,	// (0x0005db27) list_medium_line_x4_t4_g7

0x9a63,	// (0x0005db27) list_medium_line_x4_t5

0x9a7e,	// (0x0005db42) list_single_fs_dyc_pane_ParamLimits

0x9a7e,	// (0x0005db42) list_single_fs_dyc_pane

0x4327,	// (0x000583eb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x4_t4_g7_g1

0xa1f1,	// (0x0005e2b5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa1f1,	// (0x0005e2b5) list_medium_line_x4_t4_g7_g2

0xa1fd,	// (0x0005e2c1) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa1fd,	// (0x0005e2c1) list_medium_line_x4_t4_g7_g3

0xa20c,	// (0x0005e2d0) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa20c,	// (0x0005e2d0) list_medium_line_x4_t4_g7_g4

0xa218,	// (0x0005e2dc) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa218,	// (0x0005e2dc) list_medium_line_x4_t4_g7_g5

0xa227,	// (0x0005e2eb) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa227,	// (0x0005e2eb) list_medium_line_x4_t4_g7_g6

0xa236,	// (0x0005e2fa) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa236,	// (0x0005e2fa) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x00063c9a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x00063c9a) list_medium_line_x4_t4_g7_g

0xa242,	// (0x0005e306) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa242,	// (0x0005e306) list_medium_line_x4_t4_g7_t1

0xa257,	// (0x0005e31b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa257,	// (0x0005e31b) list_medium_line_x4_t4_g7_t2

0xa26c,	// (0x0005e330) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa26c,	// (0x0005e330) list_medium_line_x4_t4_g7_t3

0xa281,	// (0x0005e345) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa281,	// (0x0005e345) list_medium_line_x4_t4_g7_t4

0xa293,	// (0x0005e357) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa293,	// (0x0005e357) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x00063ca9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x00063ca9) list_medium_line_x4_t4_g7_t

0xa2a5,	// (0x0005e369) list_single_dyc_row_pane_ParamLimits

0xa2a5,	// (0x0005e369) list_single_dyc_row_pane

0xa943,	// (0x0005ea07) call5_gesture_pane_ParamLimits

0xa943,	// (0x0005ea07) call5_gesture_pane

0xa977,	// (0x0005ea3b) call5_windows_pane_ParamLimits

0xa977,	// (0x0005ea3b) call5_windows_pane

0xa9e9,	// (0x0005eaad) call5_swipe_1_pane_cp_ParamLimits

0xa9e9,	// (0x0005eaad) call5_swipe_1_pane_cp

0xa9f5,	// (0x0005eab9) call5_swipe_2_pane_cp_ParamLimits

0xa9f5,	// (0x0005eab9) call5_swipe_2_pane_cp

0xce21,	// (0x00060ee5) call5_image_pane_cp

0xaa01,	// (0x0005eac5) popup_call5_audio_first_window_cp_ParamLimits

0xaa01,	// (0x0005eac5) popup_call5_audio_first_window_cp

0x151f,	// (0x000555e3) call5_swipe_1_pane_g1_cp_ParamLimits

0x151f,	// (0x000555e3) call5_swipe_1_pane_g1_cp

0x155f,	// (0x00055623) call5_swipe_1_pane_g2_cp

0x1538,	// (0x000555fc) call5_swipe_1_pane_t1_cp_ParamLimits

0x1538,	// (0x000555fc) call5_swipe_1_pane_t1_cp

0x151f,	// (0x000555e3) call5_swipe_2_pane_g1_cp_ParamLimits

0x151f,	// (0x000555e3) call5_swipe_2_pane_g1_cp

0x1567,	// (0x0005562b) call5_swipe_2_pane_g2_cp

0x156f,	// (0x00055633) call5_swipe_2_pane_t1_cp_ParamLimits

0x156f,	// (0x00055633) call5_swipe_2_pane_t1_cp

0xdaba,	// (0x00061b7e) main_sp_fs_email_pane

0x1584,	// (0x00055648) main_sp_fs_listscroll_pane_te

0xaa0f,	// (0x0005ead3) popup_sp_fs_action_menu_pane_ParamLimits

0xaa0f,	// (0x0005ead3) popup_sp_fs_action_menu_pane

0xe679,	// (0x0006273d) bg_sp_fs_ctrlbar_pane_g1

0x158d,	// (0x00055651) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1596,	// (0x0005565a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x159f,	// (0x00055663) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe679,	// (0x0006273d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x00063d97) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe45e,	// (0x00062522) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe45e,	// (0x00062522) bg_sp_fs_ctrlbar_ddmenu_pane

0x15a8,	// (0x0005566c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x15a8,	// (0x0005566c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x15b4,	// (0x00055678) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x15b4,	// (0x00055678) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x00063da0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x00063da0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x15c0,	// (0x00055684) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x15c0,	// (0x00055684) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaa51,	// (0x0005eb15) list_medium_line_t2_right_icon_g1

0xaa59,	// (0x0005eb1d) list_medium_line_t2_right_icon_t1

0xaa69,	// (0x0005eb2d) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x00063da5) list_medium_line_t2_right_icon_t

0xe268,	// (0x0006232c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe268,	// (0x0006232c) bg_sp_fs_ctrlbar_pane

0xaace,	// (0x0005eb92) main_sp_fs_ctrlbar_button_pane_cp01

0xaad6,	// (0x0005eb9a) main_sp_fs_ctrlbar_ddmenu_pane

0x1612,	// (0x000556d6) main_sp_fs_ctrlbar_pane_g1

0x161e,	// (0x000556e2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x00063daa) main_sp_fs_ctrlbar_pane_g

0x162a,	// (0x000556ee) main_sp_fs_ctrlbar_pane_t1

0xaae0,	// (0x0005eba4) main_sp_fs_ctrlbar_pane

0xaaf6,	// (0x0005ebba) main_sp_fs_listscroll_pane_te_cp01

0xab07,	// (0x0005ebcb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xab07,	// (0x0005ebcb) popup_sp_fs_action_menu_pane_cp01

0xdaba,	// (0x00061b7e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdaba,	// (0x00061b7e) bg_sp_fs_highlight_list_pane_cp01

0x0207,	// (0x000542cb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0207,	// (0x000542cb) sp_fs_action_menu_list_gene_pane_g1

0x165a,	// (0x0005571e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x165a,	// (0x0005571e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x00063db4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x00063db4) sp_fs_action_menu_list_gene_pane_g

0x0216,	// (0x000542da) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0216,	// (0x000542da) sp_fs_action_menu_list_gene_pane_t1

0x022e,	// (0x000542f2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x022e,	// (0x000542f2) sp_fs_action_menu_list_gene_pane

0x1667,	// (0x0005572b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1667,	// (0x0005572b) popup_sp_fs_action_menu_bg_pane

0x024d,	// (0x00054311) sp_fs_action_menu_list_pane_ParamLimits

0x024d,	// (0x00054311) sp_fs_action_menu_list_pane

0xab31,	// (0x0005ebf5) sp_fs_scroll_pane_cp01_ParamLimits

0xab31,	// (0x0005ebf5) sp_fs_scroll_pane_cp01

0xab57,	// (0x0005ec1b) list_medium_line_plain_t2_t1

0xab67,	// (0x0005ec2b) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x00063db9) list_medium_line_plain_t2_t

0xab75,	// (0x0005ec39) list_medium_line_plain_t3_t1

0xab85,	// (0x0005ec49) list_medium_line_plain_t3_t2

0xab93,	// (0x0005ec57) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x00063dbe) list_medium_line_plain_t3_t

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t2_g2_g1

0x433f,	// (0x00058403) list_medium_line_x2_t2_g2_g2_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x00063315) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x00063315) list_medium_line_x2_t2_g2_g

0x57c8,	// (0x0005988c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x57c8,	// (0x0005988c) list_medium_line_x2_t2_g2_t1

0x4372,	// (0x00058436) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x00063dc5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x00063dc5) list_medium_line_x2_t2_g2_t

0x4327,	// (0x000583eb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t4_g2_g1

0xaba1,	// (0x0005ec65) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaba1,	// (0x0005ec65) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x00063dca) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x00063dca) list_medium_line_x2_t4_g2_g

0xabb3,	// (0x0005ec77) list_medium_line_x2_t4_g2_t1_ParamLimits

0xabb3,	// (0x0005ec77) list_medium_line_x2_t4_g2_t1

0xabcd,	// (0x0005ec91) list_medium_line_x2_t4_g2_t2_ParamLimits

0xabcd,	// (0x0005ec91) list_medium_line_x2_t4_g2_t2

0xabe2,	// (0x0005eca6) list_medium_line_x2_t4_g2_t3_ParamLimits

0xabe2,	// (0x0005eca6) list_medium_line_x2_t4_g2_t3

0x4372,	// (0x00058436) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00063dcf) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00063dcf) list_medium_line_x2_t4_g2_t

0xabf7,	// (0x0005ecbb) list_medium_line_t3_right_iconx2_g1

0xaa51,	// (0x0005eb15) list_medium_line_t3_right_iconx2_g2

0xabff,	// (0x0005ecc3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00063dd8) list_medium_line_t3_right_iconx2_g

0xac07,	// (0x0005eccb) list_medium_line_t3_right_iconx2_t1

0xac17,	// (0x0005ecdb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00063ddf) list_medium_line_t3_right_iconx2_t

0x4327,	// (0x000583eb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x3_t4_g4_g1

0x4333,	// (0x000583f7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x3_t4_g4_g2

0x43bb,	// (0x0005847f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x43bb,	// (0x0005847f) list_medium_line_x3_t4_g4_g3

0xac25,	// (0x0005ece9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xac25,	// (0x0005ece9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00063de4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00063de4) list_medium_line_x3_t4_g4_g

0xac31,	// (0x0005ecf5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xac31,	// (0x0005ecf5) list_medium_line_x3_t4_g4_t1

0xac48,	// (0x0005ed0c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xac48,	// (0x0005ed0c) list_medium_line_x3_t4_g4_t2

0x57dd,	// (0x000598a1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x57dd,	// (0x000598a1) list_medium_line_x3_t4_g4_t3

0xac5d,	// (0x0005ed21) list_medium_line_x3_t4_g4_t4_ParamLimits

0xac5d,	// (0x0005ed21) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00063ded) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00063ded) list_medium_line_x3_t4_g4_t

0xac7a,	// (0x0005ed3e) list_single_dyc_row_text_pane_t1_ParamLimits

0xac7a,	// (0x0005ed3e) list_single_dyc_row_text_pane_t1

0xacb1,	// (0x0005ed75) list_single_dyc_row_text_pane_t2_ParamLimits

0xacb1,	// (0x0005ed75) list_single_dyc_row_text_pane_t2

0x026d,	// (0x00054331) list_single_dyc_row_text_pane_t3_ParamLimits

0x026d,	// (0x00054331) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00063df6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00063df6) list_single_dyc_row_text_pane_t

0x027f,	// (0x00054343) list_single_dyc_row_pane_g1_ParamLimits

0x027f,	// (0x00054343) list_single_dyc_row_pane_g1

0x028b,	// (0x0005434f) list_single_dyc_row_pane_g2_ParamLimits

0x028b,	// (0x0005434f) list_single_dyc_row_pane_g2

0x0297,	// (0x0005435b) list_single_dyc_row_pane_g3_ParamLimits

0x0297,	// (0x0005435b) list_single_dyc_row_pane_g3

0x02a3,	// (0x00054367) list_single_dyc_row_pane_g4_ParamLimits

0x02a3,	// (0x00054367) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00063dfd) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00063dfd) list_single_dyc_row_pane_g

0x02af,	// (0x00054373) list_single_dyc_row_text_pane_ParamLimits

0x02af,	// (0x00054373) list_single_dyc_row_text_pane

0x1035,	// (0x000550f9) bg_sp_fs_scroll_pane

0x1675,	// (0x00055739) thumb_sp_fs_scroll_pane

0x93d7,	// (0x0005d49b) list_medium_line_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_g1

0xad0b,	// (0x0005edcf) list_medium_line_t1_ParamLimits

0xad0b,	// (0x0005edcf) list_medium_line_t1

0x4327,	// (0x000583eb) list_medium_line_x2_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_g1

0x4333,	// (0x000583f7) list_medium_line_x2_g2_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00063e06) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00063e06) list_medium_line_x2_g

0x02ce,	// (0x00054392) list_medium_line_x2_t1_ParamLimits

0x02ce,	// (0x00054392) list_medium_line_x2_t1

0x4327,	// (0x000583eb) list_medium_line_x3_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x3_g1

0x4333,	// (0x000583f7) list_medium_line_x3_g2_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00063e06) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00063e06) list_medium_line_x3_g

0x02ce,	// (0x00054392) list_medium_line_x3_t1_ParamLimits

0x02ce,	// (0x00054392) list_medium_line_x3_t1

0x167e,	// (0x00055742) thumb_sp_fs_scroll_pane_g1

0x1687,	// (0x0005574b) thumb_sp_fs_scroll_pane_g2

0x1690,	// (0x00055754) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00063e0b) thumb_sp_fs_scroll_pane_g

0x167e,	// (0x00055742) bg_sp_fs_scroll_pane_g1

0x1687,	// (0x0005574b) bg_sp_fs_scroll_pane_g2

0x1690,	// (0x00055754) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00063e0b) bg_sp_fs_scroll_pane_g

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4327,	// (0x000583eb) list_medium_line_x2_t3_g4_g1

0x43af,	// (0x00058473) list_medium_line_x2_t3_g4_g2_ParamLimits

0x43af,	// (0x00058473) list_medium_line_x2_t3_g4_g2

0x4333,	// (0x000583f7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4333,	// (0x000583f7) list_medium_line_x2_t3_g4_g3

0x433f,	// (0x00058403) list_medium_line_x2_t3_g4_g4_ParamLimits

0x433f,	// (0x00058403) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x00063391) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x00063391) list_medium_line_x2_t3_g4_g

0xad20,	// (0x0005ede4) list_medium_line_x2_t3_g4_t1_ParamLimits

0xad20,	// (0x0005ede4) list_medium_line_x2_t3_g4_t1

0xad36,	// (0x0005edfa) list_medium_line_x2_t3_g4_t2_ParamLimits

0xad36,	// (0x0005edfa) list_medium_line_x2_t3_g4_t2

0x4372,	// (0x00058436) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4372,	// (0x00058436) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00063e12) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00063e12) list_medium_line_x2_t3_g4_t

0x93d7,	// (0x0005d49b) list_medium_line_g2_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_g2_g1

0x93e3,	// (0x0005d4a7) list_medium_line_g2_g2_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x00063aca) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x00063aca) list_medium_line_g2_g

0xad50,	// (0x0005ee14) list_medium_line_g2_t1_ParamLimits

0xad50,	// (0x0005ee14) list_medium_line_g2_t1

0x93d7,	// (0x0005d49b) list_medium_line_t3_g2_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t3_g2_g1

0x93e3,	// (0x0005d4a7) list_medium_line_t3_g2_g2_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x00063aca) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x00063aca) list_medium_line_t3_g2_g

0xad65,	// (0x0005ee29) list_medium_line_t3_g2_t1_ParamLimits

0xad65,	// (0x0005ee29) list_medium_line_t3_g2_t1

0xad7c,	// (0x0005ee40) list_medium_line_t3_g2_t2_ParamLimits

0xad7c,	// (0x0005ee40) list_medium_line_t3_g2_t2

0xad91,	// (0x0005ee55) list_medium_line_t3_g2_t3_ParamLimits

0xad91,	// (0x0005ee55) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00063e19) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00063e19) list_medium_line_t3_g2_t

0xaa51,	// (0x0005eb15) list_medium_line_right_icon_g1

0xada6,	// (0x0005ee6a) list_medium_line_right_icon_t1

0x93d7,	// (0x0005d49b) list_medium_line_t2_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t2_g1

0xadb4,	// (0x0005ee78) list_medium_line_t2_t1_ParamLimits

0xadb4,	// (0x0005ee78) list_medium_line_t2_t1

0xadce,	// (0x0005ee92) list_medium_line_t2_t2_ParamLimits

0xadce,	// (0x0005ee92) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00063e20) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00063e20) list_medium_line_t2_t

0x93d7,	// (0x0005d49b) list_medium_line_t3_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t3_g1

0xade3,	// (0x0005eea7) list_medium_line_t3_t1_ParamLimits

0xade3,	// (0x0005eea7) list_medium_line_t3_t1

0xadfa,	// (0x0005eebe) list_medium_line_t3_t2_ParamLimits

0xadfa,	// (0x0005eebe) list_medium_line_t3_t2

0xae0f,	// (0x0005eed3) list_medium_line_t3_t3_ParamLimits

0xae0f,	// (0x0005eed3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00063e25) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00063e25) list_medium_line_t3_t

0x93d7,	// (0x0005d49b) list_medium_line_g3_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_g3_g1

0xae21,	// (0x0005eee5) list_medium_line_g3_g2_ParamLimits

0xae21,	// (0x0005eee5) list_medium_line_g3_g2

0x93e3,	// (0x0005d4a7) list_medium_line_g3_g3_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00063e2c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00063e2c) list_medium_line_g3_g

0xae2d,	// (0x0005eef1) list_medium_line_g3_t1_ParamLimits

0xae2d,	// (0x0005eef1) list_medium_line_g3_t1

0x93d7,	// (0x0005d49b) list_medium_line_t2_g3_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t2_g3_g1

0xae21,	// (0x0005eee5) list_medium_line_t2_g3_g2_ParamLimits

0xae21,	// (0x0005eee5) list_medium_line_t2_g3_g2

0x93e3,	// (0x0005d4a7) list_medium_line_t2_g3_g3_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00063e2c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00063e2c) list_medium_line_t2_g3_g

0xae42,	// (0x0005ef06) list_medium_line_t2_g3_t1_ParamLimits

0xae42,	// (0x0005ef06) list_medium_line_t2_g3_t1

0xae5c,	// (0x0005ef20) list_medium_line_t2_g3_t2_ParamLimits

0xae5c,	// (0x0005ef20) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00063e33) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00063e33) list_medium_line_t2_g3_t

0x93d7,	// (0x0005d49b) list_medium_line_t3_g3_g1_ParamLimits

0x93d7,	// (0x0005d49b) list_medium_line_t3_g3_g1

0xae21,	// (0x0005eee5) list_medium_line_t3_g3_g2_ParamLimits

0xae21,	// (0x0005eee5) list_medium_line_t3_g3_g2

0x93e3,	// (0x0005d4a7) list_medium_line_t3_g3_g3_ParamLimits

0x93e3,	// (0x0005d4a7) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00063e2c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00063e2c) list_medium_line_t3_g3_g

0xae71,	// (0x0005ef35) list_medium_line_t3_g3_t1_ParamLimits

0xae71,	// (0x0005ef35) list_medium_line_t3_g3_t1

0xae85,	// (0x0005ef49) list_medium_line_t3_g3_t2_ParamLimits

0xae85,	// (0x0005ef49) list_medium_line_t3_g3_t2

0xae97,	// (0x0005ef5b) list_medium_line_t3_g3_t3_ParamLimits

0xae97,	// (0x0005ef5b) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00063e38) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00063e38) list_medium_line_t3_g3_t

0xabf7,	// (0x0005ecbb) list_medium_line_right_iconx2_g1

0xaa51,	// (0x0005eb15) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00063e3f) list_medium_line_right_iconx2_g

0xaea9,	// (0x0005ef6d) list_medium_line_right_iconx2_t1

0xabf7,	// (0x0005ecbb) list_medium_line_t2_right_iconx2_g1

0xaa51,	// (0x0005eb15) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00063e3f) list_medium_line_t2_right_iconx2_g

0xaeb7,	// (0x0005ef7b) list_medium_line_t2_right_iconx2_t1

0xaec7,	// (0x0005ef8b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00063e44) list_medium_line_t2_right_iconx2_t

0xaed5,	// (0x0005ef99) list_medium_line_x4_t4_t1

0xaee3,	// (0x0005efa7) list_medium_line_x4_t4_t2

0xaef3,	// (0x0005efb7) list_medium_line_x4_t4_t3

0xaf03,	// (0x0005efc7) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00063e49) list_medium_line_x4_t4_t

0xaf3d,	// (0x0005f001) tport_appsw_pane_ParamLimits

0xaf3d,	// (0x0005f001) tport_appsw_pane

0xaf4b,	// (0x0005f00f) tport_contact_pane_ParamLimits

0xaf4b,	// (0x0005f00f) tport_contact_pane

0xaf5b,	// (0x0005f01f) tport_listscroll_pane_ParamLimits

0xaf5b,	// (0x0005f01f) tport_listscroll_pane

0xaf6b,	// (0x0005f02f) cell_tport_appsw_pane_ParamLimits

0xaf6b,	// (0x0005f02f) cell_tport_appsw_pane

0xe9a9,	// (0x00062a6d) tport_appsw_pane_g1_ParamLimits

0xe9a9,	// (0x00062a6d) tport_appsw_pane_g1

0x1699,	// (0x0005575d) tport_contact_pane_g1

0x0ffa,	// (0x000550be) tport_contact_pane_t1

0x16a2,	// (0x00055766) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00063e52) tport_contact_pane_t

0x16b0,	// (0x00055774) list_tport_pane

0x16b9,	// (0x0005577d) scroll_pane_cp_030

0xaf9e,	// (0x0005f062) cell_tport_appsw_pane_g1

0xafae,	// (0x0005f072) cell_tport_appsw_pane_t1

0x1035,	// (0x000550f9) grid_highlight_pane_cp019

0xafbc,	// (0x0005f080) list_tport_double_graphic_pane_ParamLimits

0xafbc,	// (0x0005f080) list_tport_double_graphic_pane

0xdaba,	// (0x00061b7e) list_highlight_pane_cp023_ParamLimits

0xdaba,	// (0x00061b7e) list_highlight_pane_cp023

0xafcd,	// (0x0005f091) list_tport_double_graphic_pane_g1_ParamLimits

0xafcd,	// (0x0005f091) list_tport_double_graphic_pane_g1

0xafda,	// (0x0005f09e) list_tport_double_graphic_pane_t1_ParamLimits

0xafda,	// (0x0005f09e) list_tport_double_graphic_pane_t1

0xafef,	// (0x0005f0b3) list_tport_double_graphic_pane_t2_ParamLimits

0xafef,	// (0x0005f0b3) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00063e5e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00063e5e) list_tport_double_graphic_pane_t

0x1035,	// (0x000550f9) main_cale_note_pane

0x8ba0,	// (0x0005cc64) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8ba0,	// (0x0005cc64) cell_vitu2_function_top_wide_pane_cp01

0xa606,	// (0x0005e6ca) wait_bar_pane_cp05_ParamLimits

0xdaba,	// (0x00061b7e) listscroll_cmail_pane

0x16c2,	// (0x00055786) list_cmail_pane

0xb001,	// (0x0005f0c5) list_cmail_body_pane

0xb021,	// (0x0005f0e5) list_single_cmail_header_caption_pane

0xb04c,	// (0x0005f110) list_single_cmail_header_detail_pane_ParamLimits

0xb04c,	// (0x0005f110) list_single_cmail_header_detail_pane

0x16d2,	// (0x00055796) list_single_cmail_header_caption_pane_t1

0xb08b,	// (0x0005f14f) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb08b,	// (0x0005f14f) list_single_cmail_header_detail_pane_g1

0x02e4,	// (0x000543a8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x02e4,	// (0x000543a8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00063e63) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00063e63) list_single_cmail_header_detail_pane_g

0xb0a1,	// (0x0005f165) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb0a1,	// (0x0005f165) list_single_cmail_header_detail_pane_t1

0xb0dd,	// (0x0005f1a1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb0dd,	// (0x0005f1a1) list_single_cmail_header_editor_pane_bg

0x11d9,	// (0x0005529d) list_cmail_body_pane_g1

0x16ed,	// (0x000557b1) list_cmail_body_pane_t1

0x054c,	// (0x00054610) list_single_cmail_header_editor_pane_bg_g1

0xc70a,	// (0x000607ce) list_single_cmail_header_editor_pane_bg_g1_copy1

0x055c,	// (0x00054620) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0554,	// (0x00054618) list_single_cmail_header_editor_pane_bg_g1_copy3

0x078b,	// (0x0005484f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x057c,	// (0x00054640) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x056c,	// (0x00054630) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0574,	// (0x00054638) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc6ea,	// (0x000607ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb0f4,	// (0x0005f1b8) calenote_gesture_pane_ParamLimits

0xb0f4,	// (0x0005f1b8) calenote_gesture_pane

0xb10e,	// (0x0005f1d2) calenote_window_pane_ParamLimits

0xb10e,	// (0x0005f1d2) calenote_window_pane

0x16fb,	// (0x000557bf) popup_note_window_cp01

0xb126,	// (0x0005f1ea) calenote_swipe_1_pane_ParamLimits

0xb126,	// (0x0005f1ea) calenote_swipe_1_pane

0xa9f5,	// (0x0005eab9) calenote_swipe_2_pane_ParamLimits

0xa9f5,	// (0x0005eab9) calenote_swipe_2_pane

0x151f,	// (0x000555e3) calenote_swipe_1_pane_g1_ParamLimits

0x151f,	// (0x000555e3) calenote_swipe_1_pane_g1

0x152c,	// (0x000555f0) calenote_swipe_1_pane_g2_ParamLimits

0x152c,	// (0x000555f0) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x00063d8d) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x00063d8d) calenote_swipe_1_pane_g

0x170d,	// (0x000557d1) calenote_swipe_1_pane_t1_ParamLimits

0x170d,	// (0x000557d1) calenote_swipe_1_pane_t1

0x151f,	// (0x000555e3) calenote_swipe_2_pane_g1_ParamLimits

0x151f,	// (0x000555e3) calenote_swipe_2_pane_g1

0x172c,	// (0x000557f0) calenote_swipe_2_pane_g2_ParamLimits

0x172c,	// (0x000557f0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00063e6f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00063e6f) calenote_swipe_2_pane_g

0x1738,	// (0x000557fc) calenote_swipe_2_pane_t1_ParamLimits

0x1738,	// (0x000557fc) calenote_swipe_2_pane_t1

0x1035,	// (0x000550f9) main_mup_navstr_pane

0x78fb,	// (0x0005b9bf) main_mup3_pane_t7_ParamLimits

0x78fb,	// (0x0005b9bf) main_mup3_pane_t7

0x8300,	// (0x0005c3c4) main_mp4_pane_g6_ParamLimits

0x8300,	// (0x0005c3c4) main_mp4_pane_g6

0x8680,	// (0x0005c744) main_image3_pane_t4_ParamLimits

0x8680,	// (0x0005c744) main_image3_pane_t4

0xb139,	// (0x0005f1fd) popup_navstr_preview_pane_ParamLimits

0xb139,	// (0x0005f1fd) popup_navstr_preview_pane

0xb145,	// (0x0005f209) scroll_navstr_pane_ParamLimits

0xb145,	// (0x0005f209) scroll_navstr_pane

0x1035,	// (0x000550f9) bg_popup_preview_window_pane_cp04

0x175f,	// (0x00055823) popup_navstr_preview_pane_t1

0xb151,	// (0x0005f215) scroll_navstr_pane_g1_ParamLimits

0xb151,	// (0x0005f215) scroll_navstr_pane_g1

0xb15e,	// (0x0005f222) scroll_navstr_pane_t1_ParamLimits

0xb15e,	// (0x0005f222) scroll_navstr_pane_t1

0x1704,	// (0x000557c8) bg_button_pane_cp014

0x1704,	// (0x000557c8) bg_button_pane_cp030

0xa8e9,	// (0x0005e9ad) list_double_fisheye_pane_g4_ParamLimits

0xa8e9,	// (0x0005e9ad) list_double_fisheye_pane_g4

0xa8f5,	// (0x0005e9b9) list_double_fisheye_pane_g5_ParamLimits

0xa8f5,	// (0x0005e9b9) list_double_fisheye_pane_g5

0x103f,	// (0x00055103) sp_fs_scroll_pane_cp03

0x1612,	// (0x000556d6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x161e,	// (0x000556e2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x00063daa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x162a,	// (0x000556ee) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x16ca,	// (0x0005578e) sp_fs_scroll_pane_cp02

0xc3ed,	// (0x000604b1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc3ed,	// (0x000604b1) popup_sp_fs_calendar_preview_list_single_pane

0x1035,	// (0x000550f9) main_cam6_pano_pane

0x6909,	// (0x0005a9cd) main_mup3_pane_ParamLimits

0x1035,	// (0x000550f9) main_phacti_pane

0xa4db,	// (0x0005e59f) bg_button_pane_cp11

0xa4f3,	// (0x0005e5b7) main_mobtv_info_pane_g2_ParamLimits

0xa4f3,	// (0x0005e5b7) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x00063d0a) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x00063d0a) main_mobtv_info_pane_g

0xa6a5,	// (0x0005e769) sc_clock_pane_t5_ParamLimits

0xa6a5,	// (0x0005e769) sc_clock_pane_t5

0xa75a,	// (0x0005e81e) main_radioblah_pane_g1_ParamLimits

0x146b,	// (0x0005552f) main_radioblah_pane_t3_ParamLimits

0x146b,	// (0x0005552f) main_radioblah_pane_t3

0x1483,	// (0x00055547) main_radioblah_pane_t4_ParamLimits

0x1483,	// (0x00055547) main_radioblah_pane_t4

0xa778,	// (0x0005e83c) main_radioblah_text_pane_ParamLimits

0xa778,	// (0x0005e83c) main_radioblah_text_pane

0xa785,	// (0x0005e849) main_radioblah_info_pane_g1_ParamLimits

0xa81a,	// (0x0005e8de) main_radioblah_info_pane_t4_ParamLimits

0xa81a,	// (0x0005e8de) main_radioblah_info_pane_t4

0xdaba,	// (0x00061b7e) main_sp_fs_calendar_pane

0xb170,	// (0x0005f234) main_phacti_pane_g1

0xb178,	// (0x0005f23c) phacti_note_pane_ParamLimits

0xb178,	// (0x0005f23c) phacti_note_pane

0x1776,	// (0x0005583a) phacti_term_pane_ParamLimits

0x1776,	// (0x0005583a) phacti_term_pane

0x178b,	// (0x0005584f) phacti_note_pane_t1_ParamLimits

0x178b,	// (0x0005584f) phacti_note_pane_t1

0x0314,	// (0x000543d8) phacti_term_pane_g1

0x031c,	// (0x000543e0) phacti_term_pane_t1_ParamLimits

0x031c,	// (0x000543e0) phacti_term_pane_t1

0x17a2,	// (0x00055866) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc50b,	// (0x000605cf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00063e79) popup_sp_fs_calendar_preview_list_single_pane_g

0x17aa,	// (0x0005586e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x17aa,	// (0x0005586e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x17bf,	// (0x00055883) aid_popup_sp_fs_bg_corner_pane

0xe679,	// (0x0006273d) popup_sp_fs_calendar_preview_bg_pane_g1

0x1035,	// (0x000550f9) popup_sp_fs_calendar_preview_bg_pane

0x17c7,	// (0x0005588b) popup_sp_fs_calendar_preview_list_pane

0xe268,	// (0x0006232c) bg_main_sp_fs_cale_pane_ParamLimits

0xe268,	// (0x0006232c) bg_main_sp_fs_cale_pane

0x034f,	// (0x00054413) listscroll_cale_mrui_pane_ParamLimits

0x034f,	// (0x00054413) listscroll_cale_mrui_pane

0x0364,	// (0x00054428) listscroll_sp_fs_schedule_track_pane

0x036d,	// (0x00054431) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x036d,	// (0x00054431) main_sp_fs_ctrlbar_pane_cp01

0x17cf,	// (0x00055893) main_sp_fs_ribbon_pane

0x0380,	// (0x00054444) popup_sp_fs_cale_preview_window

0xb1db,	// (0x0005f29f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb1db,	// (0x0005f29f) list_single_sp_fs_schedule_track_pane

0x1b48,	// (0x00055c0c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1b48,	// (0x00055c0c) bg_sp_fs_highlight_list_pane_cp03

0xb1fd,	// (0x0005f2c1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb1fd,	// (0x0005f2c1) list_single_sp_fs_schedule_track_pane_g1

0xb209,	// (0x0005f2cd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb209,	// (0x0005f2cd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00063e7e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00063e7e) list_single_sp_fs_schedule_track_pane_g

0xb215,	// (0x0005f2d9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb215,	// (0x0005f2d9) list_single_sp_fs_schedule_track_pane_t1

0xb22d,	// (0x0005f2f1) sp_fs_schedule_track_pane_ParamLimits

0xb22d,	// (0x0005f2f1) sp_fs_schedule_track_pane

0x17d7,	// (0x0005589b) sp_fs_schedule_track_pane_g1

0x17df,	// (0x000558a3) sp_fs_schedule_track_pane_g2

0x17e7,	// (0x000558ab) sp_fs_schedule_track_pane_g3

0x17ef,	// (0x000558b3) sp_fs_schedule_track_pane_g4

0x17f7,	// (0x000558bb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00063e83) sp_fs_schedule_track_pane_g

0x054c,	// (0x00054610) bg_sp_fs_schedule_viewer_highlight_g1

0xc70a,	// (0x000607ce) bg_sp_fs_schedule_viewer_highlight_g2

0x0554,	// (0x00054618) bg_sp_fs_schedule_viewer_highlight_g3

0x055c,	// (0x00054620) bg_sp_fs_schedule_viewer_highlight_g4

0x078b,	// (0x0005484f) bg_sp_fs_schedule_viewer_highlight_g5

0x056c,	// (0x00054630) bg_sp_fs_schedule_viewer_highlight_g6

0x0574,	// (0x00054638) bg_sp_fs_schedule_viewer_highlight_g7

0x057c,	// (0x00054640) bg_sp_fs_schedule_viewer_highlight_g8

0xc6ea,	// (0x000607ae) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00063e8e) bg_sp_fs_schedule_viewer_highlight_g

0x1035,	// (0x000550f9) bg_main_sp_fs_ribbon_pane

0xb23d,	// (0x0005f301) main_sp_fs_ribbon_pane_g1

0x17ff,	// (0x000558c3) main_sp_fs_ribbon_pane_t1

0xb246,	// (0x0005f30a) main_sp_fs_ribbon_pane_t2

0x180e,	// (0x000558d2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00063ea1) main_sp_fs_ribbon_pane_t

0x181d,	// (0x000558e1) main_sp_fs_ribbon_scheduler_pane

0x1825,	// (0x000558e9) bg_main_sp_fs_ribbon_pane_g1

0x182e,	// (0x000558f2) bg_main_sp_fs_ribbon_pane_g2

0x1837,	// (0x000558fb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00063ea8) bg_main_sp_fs_ribbon_pane_g

0x183f,	// (0x00055903) main_sp_fs_ribbon_scheduler_pane_g1

0x1848,	// (0x0005590c) main_sp_fs_ribbon_scheduler_pane_g2

0x1851,	// (0x00055915) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00063eaf) main_sp_fs_ribbon_scheduler_pane_g

0x185a,	// (0x0005591e) list_cale_mrui_pane

0xb255,	// (0x0005f319) sp_fs_scroll_pane_cp07_ParamLimits

0xb255,	// (0x0005f319) sp_fs_scroll_pane_cp07

0xb271,	// (0x0005f335) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb271,	// (0x0005f335) bg_sp_fs_schedule_viewer_highlight

0x1867,	// (0x0005592b) list_single_sp_fs_schedule_track_pane_cp01

0x186f,	// (0x00055933) list_sp_fs_schedule_track_pane

0x1877,	// (0x0005593b) sp_fs_scroll_pane_cp06_ParamLimits

0x1877,	// (0x0005593b) sp_fs_scroll_pane_cp06

0xe679,	// (0x0006273d) bgmain_sp_fs_calendar_pane_g1

0xb27e,	// (0x0005f342) list_single_cale_mrui_pane_ParamLimits

0xb27e,	// (0x0005f342) list_single_cale_mrui_pane

0x0392,	// (0x00054456) list_single_cale_mrui_row_pane_ParamLimits

0x0392,	// (0x00054456) list_single_cale_mrui_row_pane

0x039f,	// (0x00054463) list_single_cale_mrui_row_pane_g1_ParamLimits

0x039f,	// (0x00054463) list_single_cale_mrui_row_pane_g1

0x03d7,	// (0x0005449b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x03d7,	// (0x0005449b) list_single_cale_mrui_row_pane_t1

0xb2ac,	// (0x0005f370) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb2ac,	// (0x0005f370) list_single_cale_mrui_row_pane_t2

0x03e9,	// (0x000544ad) list_single_cale_mrui_row_pane_t3_ParamLimits

0x03e9,	// (0x000544ad) list_single_cale_mrui_row_pane_t3

0x0418,	// (0x000544dc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0418,	// (0x000544dc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00063ebd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00063ebd) list_single_cale_mrui_row_pane_t

0xb312,	// (0x0005f3d6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb312,	// (0x0005f3d6) list_single_cmail_header_editor_pane_bg_cp01

0xb332,	// (0x0005f3f6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb332,	// (0x0005f3f6) list_single_cmail_header_editor_pane_bg_cp02

0xb34e,	// (0x0005f412) main_radioblah_text_pane_t1_ParamLimits

0xb34e,	// (0x0005f412) main_radioblah_text_pane_t1

0x1896,	// (0x0005595a) cam6_indi_pane_cp01

0x189e,	// (0x00055962) cam6_mode_pane_cp01

0x18a6,	// (0x0005596a) cam6_pano_pane

0x18af,	// (0x00055973) cam6_zoom_pane_cp01

0x18b7,	// (0x0005597b) cam6_pano_image_pane

0x18c2,	// (0x00055986) cam6_pano_pane_g1

0x11d9,	// (0x0005529d) cam6_pano_pane_g2

0x18cb,	// (0x0005598f) cam6_pano_pane_g3

0x18d4,	// (0x00055998) cam6_pano_pane_g4

0xec84,	// (0x00062d48) cam6_pano_pane_g5

0x18dd,	// (0x000559a1) cam6_pano_pane_g6

0x102d,	// (0x000550f1) cam6_pano_pane_g7

0x18e7,	// (0x000559ab) cam6_pano_pane_g8

0x18f0,	// (0x000559b4) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00063ec6) cam6_pano_pane_g

0x1035,	// (0x000550f9) main_browser_tag_pane

0x1757,	// (0x0005581b) grid_navstr_albumart_pane

0x18fb,	// (0x000559bf) cell_navstr_albumart_pane_ParamLimits

0x18fb,	// (0x000559bf) cell_navstr_albumart_pane

0x191b,	// (0x000559df) cell_navstr_albumart_pane_g1

0xe079,	// (0x0006213d) cell_navstr_albumart_pane_g2

0xe089,	// (0x0006214d) cell_navstr_albumart_pane_g3

0xe081,	// (0x00062145) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00063ed9) cell_navstr_albumart_pane_g

0xb369,	// (0x0005f42d) bt_list_pane_ParamLimits

0xb369,	// (0x0005f42d) bt_list_pane

0xb389,	// (0x0005f44d) bt_list_pane_t1

0xb398,	// (0x0005f45c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00063ee2) bt_list_pane_t

0x1035,	// (0x000550f9) main_cale_prevew_pane

0xb3a7,	// (0x0005f46b) popup_cale_preview_window_ParamLimits

0xb3a7,	// (0x0005f46b) popup_cale_preview_window

0xdaba,	// (0x00061b7e) bg_popup_preview_window_pane_cp05_ParamLimits

0xdaba,	// (0x00061b7e) bg_popup_preview_window_pane_cp05

0x1923,	// (0x000559e7) list_cale_preview_pane_ParamLimits

0x1923,	// (0x000559e7) list_cale_preview_pane

0xb3c0,	// (0x0005f484) list_double_cale_preview_pane_ParamLimits

0xb3c0,	// (0x0005f484) list_double_cale_preview_pane

0xb3d2,	// (0x0005f496) list_single_cale_preview_pane_ParamLimits

0xb3d2,	// (0x0005f496) list_single_cale_preview_pane

0xb3e8,	// (0x0005f4ac) list_single_cale_preview_pane_g1

0xb3f0,	// (0x0005f4b4) list_single_cale_preview_pane_t1_ParamLimits

0xb3f0,	// (0x0005f4b4) list_single_cale_preview_pane_t1

0xb405,	// (0x0005f4c9) list_double_cale_preview_pane_g1

0xb40d,	// (0x0005f4d1) list_double_cale_preview_pane_t1_ParamLimits

0xb40d,	// (0x0005f4d1) list_double_cale_preview_pane_t1

0xb422,	// (0x0005f4e6) list_double_cale_preview_pane_t2_ParamLimits

0xb422,	// (0x0005f4e6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00063ee7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00063ee7) list_double_cale_preview_pane_t

0x1035,	// (0x000550f9) main_ezdial_pane

0xdaba,	// (0x00061b7e) main_sp_fs_email_pane_ParamLimits

0xaa77,	// (0x0005eb3b) cmail_ddmenu_btn01_pane_ParamLimits

0xaa77,	// (0x0005eb3b) cmail_ddmenu_btn01_pane

0xaa94,	// (0x0005eb58) cmail_ddmenu_btn02_pane_ParamLimits

0xaa94,	// (0x0005eb58) cmail_ddmenu_btn02_pane

0xaab2,	// (0x0005eb76) cmail_ddmenu_btn03_pane_ParamLimits

0xaab2,	// (0x0005eb76) cmail_ddmenu_btn03_pane

0xaae0,	// (0x0005eba4) main_sp_fs_ctrlbar_pane_ParamLimits

0xaaf6,	// (0x0005ebba) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb001,	// (0x0005f0c5) list_cmail_body_pane_ParamLimits

0xb082,	// (0x0005f146) bg_button_pane_cp12

0x16e0,	// (0x000557a4) list_single_cmail_header_detail_pane_g3_ParamLimits

0x16e0,	// (0x000557a4) list_single_cmail_header_detail_pane_g3

0x02f0,	// (0x000543b4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x02f0,	// (0x000543b4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00063e6a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00063e6a) list_single_cmail_header_detail_pane_t

0x0331,	// (0x000543f5) phacti_term_pane_t2_ParamLimits

0x0331,	// (0x000543f5) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00063e74) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00063e74) phacti_term_pane_t

0x192f,	// (0x000559f3) aid_size_list_single_double

0xb43a,	// (0x0005f4fe) popup_ezdial_listscroll_window

0xb45b,	// (0x0005f51f) popup_number_entry_window_cp01

0xce21,	// (0x00060ee5) bg_popup_call_pane_cp09

0x193b,	// (0x000559ff) ezdial_list_pane

0x1943,	// (0x00055a07) scroll_pane_cp23

0xe45e,	// (0x00062522) bg_button_pane_cp028_ParamLimits

0xe45e,	// (0x00062522) bg_button_pane_cp028

0xb469,	// (0x0005f52d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb469,	// (0x0005f52d) cmail_ddmenu_btn01_pane_g1

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00063eec) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00063eec) cmail_ddmenu_btn01_pane_g

0x194b,	// (0x00055a0f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x194b,	// (0x00055a0f) cmail_ddmenu_btn01_pane_t1

0xe268,	// (0x0006232c) bg_button_pane_cp029_ParamLimits

0xe268,	// (0x0006232c) bg_button_pane_cp029

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn02_pane_g1

0xb493,	// (0x0005f557) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb493,	// (0x0005f557) cmail_ddmenu_btn02_pane_t1

0x1b48,	// (0x00055c0c) bg_button_pane_cp031_ParamLimits

0x1b48,	// (0x00055c0c) bg_button_pane_cp031

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb47b,	// (0x0005f53f) cmail_ddmenu_btn03_pane_g1

0xb493,	// (0x0005f557) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb493,	// (0x0005f557) cmail_ddmenu_btn03_pane_t1

0x851d,	// (0x0005c5e1) cell_dialer2_keypad_pane_t1_ParamLimits

0x8537,	// (0x0005c5fb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8537,	// (0x0005c5fb) cell_dialer2_keypad_pane_t1_copy1

0xa360,	// (0x0005e424) ncimui_group_button_pane

0xdaba,	// (0x00061b7e) main_sp_fs_calendar_pane_ParamLimits

0xb021,	// (0x0005f0e5) list_single_cmail_header_caption_pane_ParamLimits

0x0346,	// (0x0005440a) aid_recal_txt_sm_pane

0x1035,	// (0x000550f9) mian_recal_day_pane

0x0380,	// (0x00054444) popup_sp_fs_cale_preview_window_ParamLimits

0x1960,	// (0x00055a24) list_recal_day_pane

0x0462,	// (0x00054526) list_single_recal_day_pane_ParamLimits

0x0462,	// (0x00054526) list_single_recal_day_pane

0x1987,	// (0x00055a4b) list_single_recal_day_pane_g1_ParamLimits

0x1987,	// (0x00055a4b) list_single_recal_day_pane_g1

0x0474,	// (0x00054538) list_single_recal_day_pane_g2_ParamLimits

0x0474,	// (0x00054538) list_single_recal_day_pane_g2

0x0484,	// (0x00054548) list_single_recal_day_pane_g3_ParamLimits

0x0484,	// (0x00054548) list_single_recal_day_pane_g3

0xb4b7,	// (0x0005f57b) list_single_recal_day_pane_g4_ParamLimits

0xb4b7,	// (0x0005f57b) list_single_recal_day_pane_g4

0x0490,	// (0x00054554) list_single_recal_day_pane_g5_ParamLimits

0x0490,	// (0x00054554) list_single_recal_day_pane_g5

0x04a0,	// (0x00054564) list_single_recal_day_pane_g6_ParamLimits

0x04a0,	// (0x00054564) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00063efb) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00063efb) list_single_recal_day_pane_g

0x04b4,	// (0x00054578) list_single_recal_day_pane_t1

0x04c6,	// (0x0005458a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00063f06) list_single_recal_day_pane_t

0xb4d7,	// (0x0005f59b) ncimui_query_button_pane_ParamLimits

0xb4d7,	// (0x0005f59b) ncimui_query_button_pane

0xb4e7,	// (0x0005f5ab) ncimui_query_button_pane_t1_ParamLimits

0xb4e7,	// (0x0005f5ab) ncimui_query_button_pane_t1

0x1993,	// (0x00055a57) ncimui_query_button_pane_t2_ParamLimits

0x1993,	// (0x00055a57) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00063f0b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00063f0b) ncimui_query_button_pane_t

0xb4fa,	// (0x0005f5be) query_button_pane_ParamLimits

0xb4fa,	// (0x0005f5be) query_button_pane

0x1035,	// (0x000550f9) bg_button_pane_cp0028

0x19a6,	// (0x00055a6a) query_button_pane_t1

0x6925,	// (0x0005a9e9) main_tport_pane_ParamLimits

0xaf13,	// (0x0005efd7) bg_popup_window_pane_cp01_ParamLimits

0xaf13,	// (0x0005efd7) bg_popup_window_pane_cp01

0xaf21,	// (0x0005efe5) heading_pane_cp08_ParamLimits

0xaf21,	// (0x0005efe5) heading_pane_cp08

0xaf2f,	// (0x0005eff3) heading_pane_cp07_ParamLimits

0xaf2f,	// (0x0005eff3) heading_pane_cp07

0xaf9e,	// (0x0005f062) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00063e57) cell_tport_appsw_pane_g

0xdad4,	// (0x00061b98) input_candi_list_open_g1

0xc8cd,	// (0x00060991) list_cale_time_pane_g6_ParamLimits

0xc8cd,	// (0x00060991) list_cale_time_pane_g6

0x739c,	// (0x0005b460) aid_size_touch_calib_1_ParamLimits

0x739c,	// (0x0005b460) aid_size_touch_calib_1

0x73a8,	// (0x0005b46c) aid_size_touch_calib_2_ParamLimits

0x73a8,	// (0x0005b46c) aid_size_touch_calib_2

0x73b6,	// (0x0005b47a) aid_size_touch_calib_3_ParamLimits

0x73b6,	// (0x0005b47a) aid_size_touch_calib_3

0x73c6,	// (0x0005b48a) aid_size_touch_calib_4_ParamLimits

0x73c6,	// (0x0005b48a) aid_size_touch_calib_4

0x73d4,	// (0x0005b498) main_touch_calib_button_group_pane_ParamLimits

0x73d4,	// (0x0005b498) main_touch_calib_button_group_pane

0x73e2,	// (0x0005b4a6) main_touch_calib_pane_g1_ParamLimits

0x73ee,	// (0x0005b4b2) main_touch_calib_pane_g2_ParamLimits

0x73fa,	// (0x0005b4be) main_touch_calib_pane_g3_ParamLimits

0x7406,	// (0x0005b4ca) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x00063820) main_touch_calib_pane_g_ParamLimits

0x7412,	// (0x0005b4d6) main_touch_calib_pane_t1_ParamLimits

0x742b,	// (0x0005b4ef) main_touch_calib_pane_t2_ParamLimits

0x7444,	// (0x0005b508) main_touch_calib_pane_t3_ParamLimits

0x745a,	// (0x0005b51e) main_touch_calib_pane_t4_ParamLimits

0x7470,	// (0x0005b534) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x00063829) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x00062b08) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x00062b08) list_single_fp_cale_pane_g3

0x6909,	// (0x0005a9cd) bg_button_pane_cp012_ParamLimits

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp03_ParamLimits

0x935c,	// (0x0005d420) cell_vitu2_function_top_pane_g1_ParamLimits

0x6909,	// (0x0005a9cd) bg_vkb2_func_pane_cp04_ParamLimits

0xa2e8,	// (0x0005e3ac) main_ncimui_button_group_pane_ParamLimits

0xa2e8,	// (0x0005e3ac) main_ncimui_button_group_pane

0xa34e,	// (0x0005e412) main_ncimui_pane_t3_ParamLimits

0xa34e,	// (0x0005e412) main_ncimui_pane_t3

0x176d,	// (0x00055831) phacti_button_group_pane

0x192f,	// (0x000559f3) aid_size_list_single_double_ParamLimits

0xb43a,	// (0x0005f4fe) popup_ezdial_listscroll_window_ParamLimits

0xb45b,	// (0x0005f51f) popup_number_entry_window_cp01_ParamLimits

0xb507,	// (0x0005f5cb) phacti_button_pane_ParamLimits

0xb507,	// (0x0005f5cb) phacti_button_pane

0x1035,	// (0x000550f9) bg_button_pane_cp14

0x19b4,	// (0x00055a78) phacti_button_pane_t1

0xb518,	// (0x0005f5dc) main_touch_calib_button_pane_ParamLimits

0xb518,	// (0x0005f5dc) main_touch_calib_button_pane

0xc2e9,	// (0x000603ad) bg_button_pane_cp18_ParamLimits

0xc2e9,	// (0x000603ad) bg_button_pane_cp18

0x19c2,	// (0x00055a86) main_touch_calib_button_pane_t1_ParamLimits

0x19c2,	// (0x00055a86) main_touch_calib_button_pane_t1

0x19d8,	// (0x00055a9c) main_touch_calib_button_pane_t2_ParamLimits

0x19d8,	// (0x00055a9c) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00063f10) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00063f10) main_touch_calib_button_pane_t

0x1035,	// (0x000550f9) cell_ncimui_button_pane

0x1035,	// (0x000550f9) bg_button_pane_cp032

0x19f6,	// (0x00055aba) cell_ncimui_button_pane_t1

0x8593,	// (0x0005c657) image3_infobar_pane_ParamLimits

0x8593,	// (0x0005c657) image3_infobar_pane

0xa6c7,	// (0x0005e78b) fs_bigclock_status_pane_ParamLimits

0xa6c7,	// (0x0005e78b) fs_bigclock_status_pane

0xa6d4,	// (0x0005e798) main_fs_bigclock_clock_pane_ParamLimits

0xa6d4,	// (0x0005e798) main_fs_bigclock_clock_pane

0xa6f8,	// (0x0005e7bc) main_fs_bigclock_indi_pane_ParamLimits

0xa6f8,	// (0x0005e7bc) main_fs_bigclock_indi_pane

0xa728,	// (0x0005e7ec) main_fs_bigclock_swipe_pane_ParamLimits

0xa728,	// (0x0005e7ec) main_fs_bigclock_swipe_pane

0x1035,	// (0x000550f9) main_fs_clock_dumped_data

0x12e6,	// (0x000553aa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x12e6,	// (0x000553aa) list_single_fs_bigclock_indicator_pane_g1

0x1300,	// (0x000553c4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1300,	// (0x000553c4) list_single_fs_bigclock_indicator_pane_g2

0x131a,	// (0x000553de) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x131a,	// (0x000553de) list_single_fs_bigclock_indicator_pane_g3

0x1334,	// (0x000553f8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1334,	// (0x000553f8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x00063d3e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x00063d3e) list_single_fs_bigclock_indicator_pane_g

0x135d,	// (0x00055421) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x135d,	// (0x00055421) list_single_fs_bigclock_indicator_pane_t1

0x1385,	// (0x00055449) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1385,	// (0x00055449) list_single_fs_bigclock_indicator_pane_t2

0x13ad,	// (0x00055471) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x13ad,	// (0x00055471) list_single_fs_bigclock_indicator_pane_t3

0x13d5,	// (0x00055499) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x13d5,	// (0x00055499) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x00063d49) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x00063d49) list_single_fs_bigclock_indicator_pane_t

0x1a04,	// (0x00055ac8) image3_infobar_fav_pane_ParamLimits

0x1a04,	// (0x00055ac8) image3_infobar_fav_pane

0x1a14,	// (0x00055ad8) image3_infobar_loc_pane_ParamLimits

0x1a14,	// (0x00055ad8) image3_infobar_loc_pane

0x1a28,	// (0x00055aec) image3_infobar_time_pane_ParamLimits

0x1a28,	// (0x00055aec) image3_infobar_time_pane

0xe679,	// (0x0006273d) image3_infobar_time_pane_g1

0x1a38,	// (0x00055afc) image3_infobar_time_pane_t1

0xe679,	// (0x0006273d) image3_infobar_loc_pane_g1

0x1a46,	// (0x00055b0a) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00063f15) image3_infobar_loc_pane_g

0x1a4e,	// (0x00055b12) image3_infobar_loc_pane_t1

0xe679,	// (0x0006273d) image3_infobar_fav_pane_g1

0x1a5c,	// (0x00055b20) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00063f1a) image3_infobar_fav_pane_g

0x1a64,	// (0x00055b28) fs_bigclock_status_battery_pane

0x1a6d,	// (0x00055b31) fs_bigclock_status_signal_pane

0x1a76,	// (0x00055b3a) fs_bigclock_status_title_pane

0x1a7f,	// (0x00055b43) fs_bigclock_status_signal_pane_g1

0x1a88,	// (0x00055b4c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00063f1f) fs_bigclock_status_signal_pane_g

0x1a90,	// (0x00055b54) fs_bigclock_status_battery_pane_g1

0x1a99,	// (0x00055b5d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00063f24) fs_bigclock_status_battery_pane_g

0x1aa1,	// (0x00055b65) fs_bigclock_status_title_pane_t1

0xe679,	// (0x0006273d) main_fs_bigclock_clock_pane_g1

0xb528,	// (0x0005f5ec) main_fs_bigclock_clock_pane_g2

0xb528,	// (0x0005f5ec) main_fs_bigclock_clock_pane_g3

0xb528,	// (0x0005f5ec) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00063f29) main_fs_bigclock_clock_pane_g

0xb530,	// (0x0005f5f4) main_fs_bigclock_clock_pane_t1

0xb53e,	// (0x0005f602) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00063f32) main_fs_bigclock_clock_pane_t

0x1aaf,	// (0x00055b73) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1aaf,	// (0x00055b73) list_single_fs_bigclock_indicator_pane

0xb54d,	// (0x0005f611) list_single_fs_bigclock_pane_ParamLimits

0xb54d,	// (0x0005f611) list_single_fs_bigclock_pane

0x1ac9,	// (0x00055b8d) main_fs_bigclock_indicator_pane_t1

0x1ad8,	// (0x00055b9c) list_single_fs_bigclock_pane_g1

0x1ae0,	// (0x00055ba4) list_single_fs_bigclock_pane_t1

0xe679,	// (0x0006273d) main_fs_bigclock_swipe_pane_g1

0x1b23,	// (0x00055be7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00063f43) main_fs_bigclock_swipe_pane_g

0x1b2b,	// (0x00055bef) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1b2b,	// (0x00055bef) main_fs_bigclock_swipe_pane_t1

0x5807,	// (0x000598cb) call_type_pane_ParamLimits

0x1035,	// (0x000550f9) main_btmg_pane

0x03cb,	// (0x0005448f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x03cb,	// (0x0005448f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00063eb6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00063eb6) list_single_cale_mrui_row_pane_g

0x0451,	// (0x00054515) list_recal_vselct_arw_lo_pane

0x197f,	// (0x00055a43) list_recal_vselct_arw_up_pane

0x0459,	// (0x0005451d) list_recal_vselct_pane

0xb5ae,	// (0x0005f672) btmg_button_pane

0xb5ba,	// (0x0005f67e) main_btmg_pane_g1

0x1035,	// (0x000550f9) bg_button_pane_cp044

0x1f3a,	// (0x00055ffe) btmg_button_pane_t1

0xe254,	// (0x00062318) aid_listscroll_gen

0xdaba,	// (0x00061b7e) main_cntbar_detail_pane

0x16c2,	// (0x00055786) list_cmail_folder_pane

0x103f,	// (0x00055103) sp_fs_scroll_pane_cp03_ParamLimits

0xb5c2,	// (0x0005f686) list_single_fs_dyc_pane_cp01_ParamLimits

0xb5c2,	// (0x0005f686) list_single_fs_dyc_pane_cp01

0x1f48,	// (0x0005600c) aid_size_cmail_indent

0x04d8,	// (0x0005459c) list_single_dyc_row_pane_cp01

0xb60e,	// (0x0005f6d2) cntbar_detail_list_pane_ParamLimits

0xb60e,	// (0x0005f6d2) cntbar_detail_list_pane

0xb648,	// (0x0005f70c) main_cntbar_detail_cont_pane_ParamLimits

0xb648,	// (0x0005f70c) main_cntbar_detail_cont_pane

0x572c,	// (0x000597f0) scroll_pane_cp032_ParamLimits

0x572c,	// (0x000597f0) scroll_pane_cp032

0xb654,	// (0x0005f718) cntbar_detail_list_event_pane_ParamLimits

0xb654,	// (0x0005f718) cntbar_detail_list_event_pane

0xb61a,	// (0x0005f6de) cntbar_detail_list_shct_pane

0xc758,	// (0x0006081c) aid_list_gen

0x1f51,	// (0x00056015) aid_scroll

0x1f5a,	// (0x0005601e) aid_size_touch_scroll_bar

0x9a6c,	// (0x0005db30) aid_list_double

0xb668,	// (0x0005f72c) aid_list_single

0x9a5a,	// (0x0005db1e) aid_list_single_lg

0xb671,	// (0x0005f735) aid_list_z_g_a_sm

0xb679,	// (0x0005f73d) aid_list_z_g_d

0xb681,	// (0x0005f745) aid_txt_z_prm

0xb68f,	// (0x0005f753) aid_txt_z_prm_cp01

0xb69d,	// (0x0005f761) aid_txt_z_sec

0xb6ab,	// (0x0005f76f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb6ab,	// (0x0005f76f) main_cntbar_detail_cont_pane_g1

0xb6b8,	// (0x0005f77c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb6b8,	// (0x0005f77c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00063f48) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00063f48) main_cntbar_detail_cont_pane_g

0x1f63,	// (0x00056027) main_cntbar_detail_cont_pane_t1

0x1f71,	// (0x00056035) main_cntbar_detail_cont_pane_t2

0x1f7f,	// (0x00056043) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00063f4d) main_cntbar_detail_cont_pane_t

0xb6c4,	// (0x0005f788) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb6c4,	// (0x0005f788) cell_cntbar_detail_list_shct_pane

0x1f8d,	// (0x00056051) cntbar_detail_list_shct_pane_g1

0x1f96,	// (0x0005605a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00063f54) cntbar_detail_list_shct_pane_g

0xb6d8,	// (0x0005f79c) cntbar_detail_list_event_pane_g1_ParamLimits

0xb6d8,	// (0x0005f79c) cntbar_detail_list_event_pane_g1

0xb6e4,	// (0x0005f7a8) cntbar_detail_list_event_pane_g2_ParamLimits

0xb6e4,	// (0x0005f7a8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00063f59) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00063f59) cntbar_detail_list_event_pane_g

0xb750,	// (0x0005f814) cntbar_detail_list_event_pane_t1_ParamLimits

0xb750,	// (0x0005f814) cntbar_detail_list_event_pane_t1

0xb765,	// (0x0005f829) cntbar_detail_list_event_pane_t2_ParamLimits

0xb765,	// (0x0005f829) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00063f66) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00063f66) cntbar_detail_list_event_pane_t

0xe679,	// (0x0006273d) cell_cntbar_detail_list_shct_pane_g1

0x5ba7,	// (0x00059c6b) navi_pane_mv_g3

0xdaba,	// (0x00061b7e) main_cntbar_detail_pane_ParamLimits

0x1035,	// (0x000550f9) main_notif_wgt_pane

0x8247,	// (0x0005c30b) aid_tch_main_mp4_pane_g4

0x847c,	// (0x0005c540) popup_slider_window_cp02

0x0447,	// (0x0005450b) list_recal_day_event_pane

0xb5ee,	// (0x0005f6b2) cntbar_detail_btn_pane_ParamLimits

0xb5ee,	// (0x0005f6b2) cntbar_detail_btn_pane

0xb5fe,	// (0x0005f6c2) cntbar_detail_btn_pane_cp01_ParamLimits

0xb5fe,	// (0x0005f6c2) cntbar_detail_btn_pane_cp01

0xb61a,	// (0x0005f6de) cntbar_detail_list_shct_pane_ParamLimits

0xb626,	// (0x0005f6ea) cntbar_detail_pane_g1_ParamLimits

0xb626,	// (0x0005f6ea) cntbar_detail_pane_g1

0xb632,	// (0x0005f6f6) cntbar_detail_pane_t1_ParamLimits

0xb632,	// (0x0005f6f6) cntbar_detail_pane_t1

0xb6f0,	// (0x0005f7b4) cntbar_detail_list_event_pane_g3_ParamLimits

0xb6f0,	// (0x0005f7b4) cntbar_detail_list_event_pane_g3

0xb708,	// (0x0005f7cc) cntbar_detail_list_event_pane_g4_ParamLimits

0xb708,	// (0x0005f7cc) cntbar_detail_list_event_pane_g4

0xb720,	// (0x0005f7e4) cntbar_detail_list_event_pane_g5_ParamLimits

0xb720,	// (0x0005f7e4) cntbar_detail_list_event_pane_g5

0xb738,	// (0x0005f7fc) cntbar_detail_list_event_pane_g6_ParamLimits

0xb738,	// (0x0005f7fc) cntbar_detail_list_event_pane_g6

0xb77a,	// (0x0005f83e) cntbar_detail_list_event_pane_t3_ParamLimits

0xb77a,	// (0x0005f83e) cntbar_detail_list_event_pane_t3

0xb78c,	// (0x0005f850) popup_notif_wgt_window_ParamLimits

0xb78c,	// (0x0005f850) popup_notif_wgt_window

0xb79c,	// (0x0005f860) popup_submenu_window_cp01_ParamLimits

0xb79c,	// (0x0005f860) popup_submenu_window_cp01

0xce21,	// (0x00060ee5) bg_popup_window_pane_cp10

0x1f9f,	// (0x00056063) listscroll_notif_wgt_pane

0x1fb1,	// (0x00056075) list_notif_wgt_window

0x1fba,	// (0x0005607e) scroll_pane_cp033

0xb7ae,	// (0x0005f872) list_notif_wgt_row_pane_ParamLimits

0xb7ae,	// (0x0005f872) list_notif_wgt_row_pane

0x1fc3,	// (0x00056087) aid_size_list_notif_wgt_del

0x1fd0,	// (0x00056094) list_notif_wgt_row_pane_g1

0x1fdc,	// (0x000560a0) list_notif_wgt_row_pane_g2

0x1fe8,	// (0x000560ac) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00063f6d) list_notif_wgt_row_pane_g

0x1ff5,	// (0x000560b9) list_notif_wgt_row_pane_t1

0x200a,	// (0x000560ce) list_notif_wgt_row_pane_t2

0x201c,	// (0x000560e0) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00063f74) list_notif_wgt_row_pane_t

0x0793,	// (0x00054857) list_recal_day_event_pane_g1

0x202e,	// (0x000560f2) list_recal_day_event_pane_t1

0x1035,	// (0x000550f9) bg_button_pane_cp045

0xb7bf,	// (0x0005f883) cntbar_detail_btn_pane_t1

0xe268,	// (0x0006232c) main_callh_pane_ParamLimits

0xe268,	// (0x0006232c) main_callh_pane

0x1035,	// (0x000550f9) main_coverflow0_pane

0x1035,	// (0x000550f9) main_wgtman_pane

0xa740,	// (0x0005e804) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa740,	// (0x0005e804) main_fs_bigclock_unlock_btn_pane

0xaf96,	// (0x0005f05a) bg_button_pane_cp16

0xafa6,	// (0x0005f06a) cell_tport_appsw_pane_g3

0xb7cd,	// (0x0005f891) cf0_flow_pane_ParamLimits

0xb7cd,	// (0x0005f891) cf0_flow_pane

0x203d,	// (0x00056101) listscroll_cf0_pane

0x2048,	// (0x0005610c) main_cf0_pane_g1

0xb7dc,	// (0x0005f8a0) main_cf0_pane_t1_ParamLimits

0xb7dc,	// (0x0005f8a0) main_cf0_pane_t1

0xb7f0,	// (0x0005f8b4) main_cf0_pane_t2_ParamLimits

0xb7f0,	// (0x0005f8b4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00063f80) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00063f80) main_cf0_pane_t

0x205a,	// (0x0005611e) scroll_pane_cp11

0xb804,	// (0x0005f8c8) cf0_flow_pane_g1

0xb80c,	// (0x0005f8d0) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00063f85) cf0_flow_pane_g

0xb814,	// (0x0005f8d8) cf0_flow_pane_t1

0x1035,	// (0x000550f9) main_call6_pane

0x1035,	// (0x000550f9) main_calllock_pane

0xb822,	// (0x0005f8e6) call6_btn_grp_pane_ParamLimits

0xb822,	// (0x0005f8e6) call6_btn_grp_pane

0xb831,	// (0x0005f8f5) call6_pane_g1_ParamLimits

0xb831,	// (0x0005f8f5) call6_pane_g1

0xb840,	// (0x0005f904) popup_call6_1st_window_ParamLimits

0xb840,	// (0x0005f904) popup_call6_1st_window

0xb84e,	// (0x0005f912) popup_call6_2nd_window_ParamLimits

0xb84e,	// (0x0005f912) popup_call6_2nd_window

0xb85c,	// (0x0005f920) cell_call6_btn_pane_ParamLimits

0xb85c,	// (0x0005f920) cell_call6_btn_pane

0xce21,	// (0x00060ee5) bg_popup_call2_in_pane_cp03

0x2065,	// (0x00056129) popup_call6_1st_window_g1

0x206d,	// (0x00056131) popup_call6_1st_window_g2

0x2075,	// (0x00056139) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00063f8a) popup_call6_1st_window_g

0x207d,	// (0x00056141) popup_call6_1st_window_t1

0x208c,	// (0x00056150) popup_call6_1st_window_t2

0x209c,	// (0x00056160) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00063f91) popup_call6_1st_window_t

0xce21,	// (0x00060ee5) bg_popup_call2_in_pane_cp04

0x2065,	// (0x00056129) popup_call6_2nd_window_g1

0x206d,	// (0x00056131) popup_call6_2nd_window_g2

0x2075,	// (0x00056139) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00063f8a) popup_call6_2nd_window_g

0x207d,	// (0x00056141) popup_call6_2nd_window_t1

0x1035,	// (0x000550f9) bg_button_pane_cp15

0x20ac,	// (0x00056170) cell_call6_btn_pane_g1

0x20b5,	// (0x00056179) cell_call6_btn_pane_t1

0xb86b,	// (0x0005f92f) listscroll_wgtman_pane_ParamLimits

0xb86b,	// (0x0005f92f) listscroll_wgtman_pane

0xb889,	// (0x0005f94d) wgtman_btn_pane_ParamLimits

0xb889,	// (0x0005f94d) wgtman_btn_pane

0xccd8,	// (0x00060d9c) aid_scroll_copy1

0x20c4,	// (0x00056188) list_wgtman_pane

0xb8be,	// (0x0005f982) wgtman_btn_pane_g1_ParamLimits

0xb8be,	// (0x0005f982) wgtman_btn_pane_g1

0xb8e6,	// (0x0005f9aa) wgtman_btn_pane_t1_ParamLimits

0xb8e6,	// (0x0005f9aa) wgtman_btn_pane_t1

0x20ce,	// (0x00056192) wgtman_btn_pane_t2_ParamLimits

0x20ce,	// (0x00056192) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00063f98) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00063f98) wgtman_btn_pane_t

0xb91d,	// (0x0005f9e1) listrow_wgtman_pane_ParamLimits

0xb91d,	// (0x0005f9e1) listrow_wgtman_pane

0xb935,	// (0x0005f9f9) listrow_wgtman_pane_g1

0xb942,	// (0x0005fa06) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00063f9d) listrow_wgtman_pane_g

0xb960,	// (0x0005fa24) listrow_wgtman_pane_t1

0xb978,	// (0x0005fa3c) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00063fa2) listrow_wgtman_pane_t

0xb99e,	// (0x0005fa62) wait_bar_pane_cp09

0x20e5,	// (0x000561a9) main_calllock_btn_pane

0x20ef,	// (0x000561b3) main_calllock_pane_g1

0x1035,	// (0x000550f9) bg_button_pane_cp17

0x20fb,	// (0x000561bf) main_calllock_btn_pane_g1

0x2104,	// (0x000561c8) main_calllock_btn_pane_t1

0x1035,	// (0x000550f9) main_dialer3_pane

0x1035,	// (0x000550f9) main_fmrd2_pane

0xe679,	// (0x0006273d) main_fs_bigclock_unlock_btn_pane_g1

0x211b,	// (0x000561df) main_fs_bigclock_unlock_btn_pane_t1

0xb9b0,	// (0x0005fa74) area_fmrd2_info_pane_ParamLimits

0xb9b0,	// (0x0005fa74) area_fmrd2_info_pane

0xb9be,	// (0x0005fa82) area_fmrd2_visual_pane_ParamLimits

0xb9be,	// (0x0005fa82) area_fmrd2_visual_pane

0xb9cc,	// (0x0005fa90) fmrd2_indi_pane_ParamLimits

0xb9cc,	// (0x0005fa90) fmrd2_indi_pane

0xb9d9,	// (0x0005fa9d) area_fmrd2_visual_pane_g1

0xb9e1,	// (0x0005faa5) area_fmrd2_visual_pane_t1

0xb9f1,	// (0x0005fab5) area_fmrd2_visual_pane_t2

0xba01,	// (0x0005fac5) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00063fac) area_fmrd2_visual_pane_t

0xba11,	// (0x0005fad5) area_fmrd2_info_pane_g1

0xba19,	// (0x0005fadd) area_fmrd2_info_pane_t1

0xba29,	// (0x0005faed) area_fmrd2_info_pane_t2

0xba39,	// (0x0005fafd) area_fmrd2_info_pane_t3

0xba49,	// (0x0005fb0d) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00063fb3) area_fmrd2_info_pane_t

0xba57,	// (0x0005fb1b) fmrd2_indi_pane_t1

0xba67,	// (0x0005fb2b) fmrd2_indi_pane_t2

0xba77,	// (0x0005fb3b) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00063fbc) fmrd2_indi_pane_t

0x1343,	// (0x00055407) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1343,	// (0x00055407) list_single_fs_bigclock_indicator_pane_g5

0x13ea,	// (0x000554ae) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x13ea,	// (0x000554ae) list_single_fs_bigclock_indicator_pane_t5

0xb18e,	// (0x0005f252) aid_cell_bcale_month_pane_ParamLimits

0xb18e,	// (0x0005f252) aid_cell_bcale_month_pane

0xb1ac,	// (0x0005f270) bcale_month_pane_ParamLimits

0xb1ac,	// (0x0005f270) bcale_month_pane

0xb1ca,	// (0x0005f28e) bcale_preview_pane_ParamLimits

0xb1ca,	// (0x0005f28e) bcale_preview_pane

0x1ae0,	// (0x00055ba4) list_single_fs_bigclock_pane_t1_ParamLimits

0x1aff,	// (0x00055bc3) list_single_fs_bigclock_pane_t2_ParamLimits

0x1aff,	// (0x00055bc3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00063f3e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00063f3e) list_single_fs_bigclock_pane_t

0x2113,	// (0x000561d7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00063fa7) main_fs_bigclock_unlock_btn_pane_g

0xba85,	// (0x0005fb49) aid_dia3_key_size_ParamLimits

0xba85,	// (0x0005fb49) aid_dia3_key_size

0xba91,	// (0x0005fb55) aid_dia3_listrow_size_ParamLimits

0xba91,	// (0x0005fb55) aid_dia3_listrow_size

0xbaa1,	// (0x0005fb65) dia3_keypad_fun_pane_ParamLimits

0xbaa1,	// (0x0005fb65) dia3_keypad_fun_pane

0xbab3,	// (0x0005fb77) dia3_keypad_num_pane_ParamLimits

0xbab3,	// (0x0005fb77) dia3_keypad_num_pane

0xbac5,	// (0x0005fb89) dia3_listscroll_pane_ParamLimits

0xbac5,	// (0x0005fb89) dia3_listscroll_pane

0xbad3,	// (0x0005fb97) dia3_numentry_pane_ParamLimits

0xbad3,	// (0x0005fb97) dia3_numentry_pane

0x2129,	// (0x000561ed) dia3_list_pane

0x2134,	// (0x000561f8) scroll_pane_cp12

0x1035,	// (0x000550f9) bg_dia3_numentry_pane

0xbae1,	// (0x0005fba5) dia3_numentry_pane_t1

0xbaf0,	// (0x0005fbb4) cell_dia3_key_num_pane

0xbaf8,	// (0x0005fbbc) cell_dia3_key0_fun_pane_ParamLimits

0xbaf8,	// (0x0005fbbc) cell_dia3_key0_fun_pane

0xbb05,	// (0x0005fbc9) cell_dia3_key1_fun_pane_ParamLimits

0xbb05,	// (0x0005fbc9) cell_dia3_key1_fun_pane

0xbb12,	// (0x0005fbd6) dia3_listrow_pane

0x1015,	// (0x000550d9) bg_dia3_numentry_pane_g1

0x1035,	// (0x000550f9) bg_button_pane_cp21

0x213f,	// (0x00056203) cell_dia3_key_num_pane_t1

0x214d,	// (0x00056211) cell_dia3_key_num_pane_t2

0x215c,	// (0x00056220) cell_dia3_key_num_pane_t3

0x216b,	// (0x0005622f) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00063fc3) cell_dia3_key_num_pane_t

0x1035,	// (0x000550f9) bg_button_pane_cp19

0xbb1f,	// (0x0005fbe3) cell_dia3_key0_fun_pane_g1

0x1035,	// (0x000550f9) bg_button_pane_cp20

0xbb27,	// (0x0005fbeb) cell_dia3_key1_fun_pane_g1

0xbb2f,	// (0x0005fbf3) area_left_week_number_pane

0xbb42,	// (0x0005fc06) area_top_day_name_pane

0xbb50,	// (0x0005fc14) frame_month_view_pane

0x217a,	// (0x0005623e) grid_month_view_pane

0xbb65,	// (0x0005fc29) cell_top_day_name_pane_ParamLimits

0xbb65,	// (0x0005fc29) cell_top_day_name_pane

0xbb7f,	// (0x0005fc43) cell_area_left_week_number_pane_ParamLimits

0xbb7f,	// (0x0005fc43) cell_area_left_week_number_pane

0xbba2,	// (0x0005fc66) cell_month_view_pane_ParamLimits

0xbba2,	// (0x0005fc66) cell_month_view_pane

0x2188,	// (0x0005624c) frm_month_g1

0xbbce,	// (0x0005fc92) frm_month_g2

0xbbdf,	// (0x0005fca3) frm_month_g3

0xbbf0,	// (0x0005fcb4) frm_month_g4

0xbc01,	// (0x0005fcc5) frm_month_g5

0xbc14,	// (0x0005fcd8) frm_month_g6

0xbc27,	// (0x0005fceb) frm_month_g7

0x2195,	// (0x00056259) frm_month_g8

0xbc3a,	// (0x0005fcfe) frm_month_g9

0xbc47,	// (0x0005fd0b) frm_month_g10

0xbc54,	// (0x0005fd18) frm_month_g11

0xbc61,	// (0x0005fd25) frm_month_g12

0xbc6e,	// (0x0005fd32) frm_month_g13

0xbc7b,	// (0x0005fd3f) frm_month_g14

0xbc8a,	// (0x0005fd4e) frm_month_g15

0xbc99,	// (0x0005fd5d) frm_month_g16

0x000f,

0xff08,	// (0x00063fcc) frm_month_g

0x21a2,	// (0x00056266) cell_top_day_name_pane_t1

0xbca8,	// (0x0005fd6c) cell_area_left_week_number_pane_g1

0xbcb7,	// (0x0005fd7b) cell_area_left_week_number_pane_t1

0xe8dc,	// (0x000629a0) cell_month_view_pane_g1

0xbccd,	// (0x0005fd91) cell_month_view_pane_t1

0x1035,	// (0x000550f9) main_fps_pane

0x15da,	// (0x0005569e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x15da,	// (0x0005569e) cmail_ddmenu_btn02_pane_cp1

0x15f6,	// (0x000556ba) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x15f6,	// (0x000556ba) cmail_ddmenu_btn02_pane_cp2

0xb487,	// (0x0005f54b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb487,	// (0x0005f54b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00063ef1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00063ef1) cmail_ddmenu_btn02_pane_g

0xb4a5,	// (0x0005f569) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb4a5,	// (0x0005f569) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00063ef6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00063ef6) cmail_ddmenu_btn02_pane_t

0xbce3,	// (0x0005fda7) fps_text_pane_ParamLimits

0xbce3,	// (0x0005fda7) fps_text_pane

0xbcf0,	// (0x0005fdb4) main_fps_pane_g1_ParamLimits

0xbcf0,	// (0x0005fdb4) main_fps_pane_g1

0xbcfe,	// (0x0005fdc2) wait_bar_pane_cp010_ParamLimits

0xbcfe,	// (0x0005fdc2) wait_bar_pane_cp010

0xbd0a,	// (0x0005fdce) fps_text_pane_t1_ParamLimits

0xbd0a,	// (0x0005fdce) fps_text_pane_t1

0x886c,	// (0x0005c930) cam4_image_uncrop_pane_g1

0x8875,	// (0x0005c939) cam4_image_uncrop_pane_g2

0x887e,	// (0x0005c942) cam4_image_uncrop_pane_g3

0x8887,	// (0x0005c94b) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000639b8) cam4_image_uncrop_pane_g

0xbb12,	// (0x0005fbd6) dia3_listrow_pane_ParamLimits

0x1035,	// (0x000550f9) main_phob2_pane

0xaf78,	// (0x0005f03c) cell_tport_appsw_pane_cp02_ParamLimits

0xaf78,	// (0x0005f03c) cell_tport_appsw_pane_cp02

0xaf87,	// (0x0005f04b) cell_tport_appsw_pane_cp03_ParamLimits

0xaf87,	// (0x0005f04b) cell_tport_appsw_pane_cp03

0x1035,	// (0x000550f9) phob2_contact_card_pane

0x1035,	// (0x000550f9) phob2_listscroll_pane

0x21b5,	// (0x00056279) phob2_list_pane

0x21bd,	// (0x00056281) scroll_pane_cp034

0xbd23,	// (0x0005fde7) phob2_cc_data_pane_ParamLimits

0xbd23,	// (0x0005fde7) phob2_cc_data_pane

0xbd3d,	// (0x0005fe01) phob2_cc_listscroll_pane_ParamLimits

0xbd3d,	// (0x0005fe01) phob2_cc_listscroll_pane

0xbd57,	// (0x0005fe1b) list_double_large_graphic_phob2_pane_ParamLimits

0xbd57,	// (0x0005fe1b) list_double_large_graphic_phob2_pane

0xbd75,	// (0x0005fe39) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbd75,	// (0x0005fe39) list_double_large_graphic_phob2_pane_g1

0xbd8b,	// (0x0005fe4f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbd8b,	// (0x0005fe4f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00063fed) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00063fed) list_double_large_graphic_phob2_pane_g

0xbd97,	// (0x0005fe5b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbd97,	// (0x0005fe5b) list_double_large_graphic_phob2_pane_t1

0xbdac,	// (0x0005fe70) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbdac,	// (0x0005fe70) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00063ff2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00063ff2) list_double_large_graphic_phob2_pane_t

0x1035,	// (0x000550f9) list_highlight_pane_cp024

0x21c5,	// (0x00056289) phob2_cc_button_pane

0xbdbe,	// (0x0005fe82) phob2_cc_data_pane_g1_ParamLimits

0xbdbe,	// (0x0005fe82) phob2_cc_data_pane_g1

0xbdca,	// (0x0005fe8e) phob2_cc_data_pane_g2_ParamLimits

0xbdca,	// (0x0005fe8e) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00063ff7) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00063ff7) phob2_cc_data_pane_g

0xbdd6,	// (0x0005fe9a) phob2_cc_data_pane_t1_ParamLimits

0xbdd6,	// (0x0005fe9a) phob2_cc_data_pane_t1

0xbde8,	// (0x0005feac) phob2_cc_data_pane_t2_ParamLimits

0xbde8,	// (0x0005feac) phob2_cc_data_pane_t2

0xbdfa,	// (0x0005febe) phob2_cc_data_pane_t3_ParamLimits

0xbdfa,	// (0x0005febe) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00063ffc) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00063ffc) phob2_cc_data_pane_t

0x21cd,	// (0x00056291) phob2_cc_list_pane_ParamLimits

0x21cd,	// (0x00056291) phob2_cc_list_pane

0x083e,	// (0x00054902) scroll_pane_cp035_ParamLimits

0x083e,	// (0x00054902) scroll_pane_cp035

0xdaba,	// (0x00061b7e) bg_button_pane_cp033

0x21d9,	// (0x0005629d) phob2_cc_button_pane_g1

0x21e5,	// (0x000562a9) phob2_cc_button_pane_t1

0x21fa,	// (0x000562be) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00064003) phob2_cc_button_pane_t

0xbe0c,	// (0x0005fed0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbe0c,	// (0x0005fed0) list_double_large_graphic_phob2_cc_pane

0xbe33,	// (0x0005fef7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbe33,	// (0x0005fef7) list_double_large_graphic_phob2_cc_pane_g1

0x04e1,	// (0x000545a5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x04e1,	// (0x000545a5) list_double_large_graphic_phob2_cc_pane_g2

0xbe44,	// (0x0005ff08) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbe44,	// (0x0005ff08) list_double_large_graphic_phob2_cc_pane_g3

0xbe50,	// (0x0005ff14) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbe50,	// (0x0005ff14) list_double_large_graphic_phob2_cc_pane_g4

0xbe5c,	// (0x0005ff20) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbe5c,	// (0x0005ff20) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00064008) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00064008) list_double_large_graphic_phob2_cc_pane_g

0xbe68,	// (0x0005ff2c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbe68,	// (0x0005ff2c) list_double_large_graphic_phob2_cc_pane_t1

0xbe91,	// (0x0005ff55) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbe91,	// (0x0005ff55) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00064013) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00064013) list_double_large_graphic_phob2_cc_pane_t

0x220c,	// (0x000562d0) list_highlight_pane_cp025_ParamLimits

0x220c,	// (0x000562d0) list_highlight_pane_cp025

0xdaba,	// (0x00061b7e) bg_button_pane_cp033_ParamLimits

0x21d9,	// (0x0005629d) phob2_cc_button_pane_g1_ParamLimits

0x21e5,	// (0x000562a9) phob2_cc_button_pane_t1_ParamLimits

0x21fa,	// (0x000562be) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00064003) phob2_cc_button_pane_t_ParamLimits

0x3537,	// (0x000575fb) popup_wgtman_window

0x0666,	// (0x0005472a) scroll_pane_cp038

0xb8a6,	// (0x0005f96a) wgtman_btn_pane_cp_01_ParamLimits

0xb8a6,	// (0x0005f96a) wgtman_btn_pane_cp_01

0x221a,	// (0x000562de) wgtman_content_pane

0x2223,	// (0x000562e7) wgtman_heading_pane

0x1035,	// (0x000550f9) bg_heading_pane_cp02

0x222c,	// (0x000562f0) wgtman_heading_pane_g1

0x2234,	// (0x000562f8) wgtman_heading_pane_t1

0x2242,	// (0x00056306) scroll_pane_cp036

0x224a,	// (0x0005630e) wgtman_list_pane

0x2252,	// (0x00056316) wgtman_list_pane_t1_ParamLimits

0x2252,	// (0x00056316) wgtman_list_pane_t1

0x87cb,	// (0x0005c88f) cam4_grid_pane

0x9525,	// (0x0005d5e9) bg_button_pane_cp015_ParamLimits

0x9537,	// (0x0005d5fb) bg_button_pane_cp016_ParamLimits

0x954a,	// (0x0005d60e) bg_button_pane_cp017_ParamLimits

0x95a0,	// (0x0005d664) popup_vitu2_query_window_g3_ParamLimits

0x95a0,	// (0x0005d664) popup_vitu2_query_window_g3

0x965b,	// (0x0005d71f) popup_vitu2_query_window_t6_ParamLimits

0x965b,	// (0x0005d71f) popup_vitu2_query_window_t6

0x9686,	// (0x0005d74a) popup_vitu2_query_window_t7_ParamLimits

0x9686,	// (0x0005d74a) popup_vitu2_query_window_t7

0x104b,	// (0x0005510f) cam4_grid_pane_g1

0x1054,	// (0x00055118) cam4_grid_pane_g2

0x226c,	// (0x00056330) cam4_grid_pane_g3

0x2275,	// (0x00056339) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00064018) cam4_grid_pane_g

0x4494,	// (0x00058558) aid_placing_vt_slider_lsc_ParamLimits

0x47e0,	// (0x000588a4) vidtel_button_pane_ParamLimits

0x47e0,	// (0x000588a4) vidtel_button_pane

0x2280,	// (0x00056344) bg_button_pane_cp034

0xbeba,	// (0x0005ff7e) vidtel_button_pane_g1

0x228a,	// (0x0005634e) vidtel_button_pane_t1

0x0783,	// (0x00054847) aid_size_vtel_slider_touch

0x083e,	// (0x00054902) scroll_pane_cp039

0x1091,	// (0x00055155) ncim_query_button_pane_cp01_ParamLimits

0x10b0,	// (0x00055174) ncimui_query_pane_g1_ParamLimits

0xdaba,	// (0x00061b7e) input_focus_pane_cp012_ParamLimits

0x10d5,	// (0x00055199) ncim_query_entry_pane_t1_ParamLimits

0x083e,	// (0x00054902) scroll_pane_cp039_ParamLimits

0x5b19,	// (0x00059bdd) navi_pane_bcale_mc_g1

0x5b21,	// (0x00059be5) navi_pane_bcale_mc_t1

0x163f,	// (0x00055703) main_sp_fs_email_pane_g1

0x164b,	// (0x0005570f) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x00063daf) main_sp_fs_email_pane_g

0x1889,	// (0x0005594d) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1889,	// (0x0005594d) list_single_cale_mrui_row_pane_g3

0xb4cd,	// (0x0005f591) list_single_recal_day_pane_g5_event_pane

0x04ac,	// (0x00054570) list_single_recal_day_pane_g7

0x2298,	// (0x0005635c) list_recal_day_event_pane_cp01

0x22a1,	// (0x00056365) list_recal_vselct_arw_lo_pane_cp01

0x22a9,	// (0x0005636d) list_recal_vselct_arw_up_pane_cp01

0x22b1,	// (0x00056375) list_recal_vselct_pane_cp01

0x0793,	// (0x00054857) list_recal_day_event_pane_cp01_g1

0x04ed,	// (0x000545b1) list_recal_day_event_pane_cp01_t1

0x04b4,	// (0x00054578) list_single_recal_day_pane_t1_ParamLimits

0x04c6,	// (0x0005458a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00063f06) list_single_recal_day_pane_t_ParamLimits

0xc224,	// (0x000602e8) bg_notes_pane_ParamLimits

0xc2c7,	// (0x0006038b) list_notes_pane_ParamLimits

0x389f,	// (0x00057963) scroll_pane_cp06_ParamLimits

0xc2e9,	// (0x000603ad) main_notes_pane_ParamLimits

0x1035,	// (0x000550f9) main_welc_pane

0xbec2,	// (0x0005ff86) main_welc_body_pane_ParamLimits

0xbec2,	// (0x0005ff86) main_welc_body_pane

0xbedc,	// (0x0005ffa0) main_welc_opti_pane_ParamLimits

0xbedc,	// (0x0005ffa0) main_welc_opti_pane

0xbf0f,	// (0x0005ffd3) main_welc_pane_t1_ParamLimits

0xbf0f,	// (0x0005ffd3) main_welc_pane_t1

0xbf29,	// (0x0005ffed) main_welc_body_row_pane_ParamLimits

0xbf29,	// (0x0005ffed) main_welc_body_row_pane

0x1b48,	// (0x00055c0c) main_welc_opti_row_pane_ParamLimits

0x1b48,	// (0x00055c0c) main_welc_opti_row_pane

0x22bb,	// (0x0005637f) main_welc_opti_row_pane_g1

0x22c3,	// (0x00056387) main_welc_opti_row_pane_t1

0x22d3,	// (0x00056397) main_welc_body_row_pane_t1

0x1fa9,	// (0x0005606d) popup_notif_wgt_heading_pane

0x1fc3,	// (0x00056087) aid_size_list_notif_wgt_del_ParamLimits

0x1fd0,	// (0x00056094) list_notif_wgt_row_pane_g1_ParamLimits

0x1fdc,	// (0x000560a0) list_notif_wgt_row_pane_g2_ParamLimits

0x1fe8,	// (0x000560ac) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00063f6d) list_notif_wgt_row_pane_g_ParamLimits

0x1ff5,	// (0x000560b9) list_notif_wgt_row_pane_t1_ParamLimits

0x200a,	// (0x000560ce) list_notif_wgt_row_pane_t2_ParamLimits

0x201c,	// (0x000560e0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00063f74) list_notif_wgt_row_pane_t_ParamLimits

0xb935,	// (0x0005f9f9) listrow_wgtman_pane_g1_ParamLimits

0xb942,	// (0x0005fa06) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00063f9d) listrow_wgtman_pane_g_ParamLimits

0xb960,	// (0x0005fa24) listrow_wgtman_pane_t1_ParamLimits

0xb978,	// (0x0005fa3c) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00063fa2) listrow_wgtman_pane_t_ParamLimits

0xb99e,	// (0x0005fa62) wait_bar_pane_cp09_ParamLimits

0x1035,	// (0x000550f9) bg_popup_heading_pane_cp02

0x22e2,	// (0x000563a6) popup_notif_wgt_heading_pane_g1

0x22ea,	// (0x000563ae) popup_notif_wgt_heading_pane_t1

0x1035,	// (0x000550f9) main_vids_pane

0x1035,	// (0x000550f9) vids_listscroll_pane

0xbf4e,	// (0x00060012) scroll_pane_cp040

0x1035,	// (0x000550f9) vids_list_pane

0xbf59,	// (0x0006001d) vids_list_double_pane_ParamLimits

0xbf59,	// (0x0006001d) vids_list_double_pane

0xbf73,	// (0x00060037) vids_list_double_pane_g1

0xbf7c,	// (0x00060040) vids_list_double_pane_t1

0xbf8c,	// (0x00060050) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00064026) vids_list_double_pane_t

0x6909,	// (0x0005a9cd) main_ncimui_pane_ParamLimits

0xa300,	// (0x0005e3c4) main_ncimui_pane_g1_ParamLimits

0xa30c,	// (0x0005e3d0) main_ncimui_pane_g2_ParamLimits

0xa30c,	// (0x0005e3d0) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x00063cb4) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x00063cb4) main_ncimui_pane_g

0xbef5,	// (0x0005ffb9) main_welc_pane_g1_ParamLimits

0xbef5,	// (0x0005ffb9) main_welc_pane_g1

0xbf01,	// (0x0005ffc5) main_welc_pane_g2_ParamLimits

0xbf01,	// (0x0005ffc5) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00064021) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00064021) main_welc_pane_g

0xc224,	// (0x000602e8) listscroll_mce_pane_ParamLimits

0x5be3,	// (0x00059ca7) wait_bar_pane_cp10

0xe25c,	// (0x00062320) main_cale_day_pane_ParamLimits

0xe25c,	// (0x00062320) main_cale_week_pane_ParamLimits

0xc224,	// (0x000602e8) main_messa_pane_ParamLimits

0x7c1d,	// (0x0005bce1) main_clock2_btn_pane_ParamLimits

0x7c1d,	// (0x0005bce1) main_clock2_btn_pane

0xeacc,	// (0x00062b90) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x00062b90) main_clock2_btn_pane_cp01

0x185a,	// (0x0005591e) list_cale_mrui_pane_ParamLimits

0x2052,	// (0x00056116) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00063f7b) main_cf0_pane_g

0xbb2f,	// (0x0005fbf3) area_left_week_number_pane_ParamLimits

0xbb42,	// (0x0005fc06) area_top_day_name_pane_ParamLimits

0xbb50,	// (0x0005fc14) frame_month_view_pane_ParamLimits

0x217a,	// (0x0005623e) grid_month_view_pane_ParamLimits

0x2188,	// (0x0005624c) frm_month_g1_ParamLimits

0xbbce,	// (0x0005fc92) frm_month_g2_ParamLimits

0xbbdf,	// (0x0005fca3) frm_month_g3_ParamLimits

0xbbf0,	// (0x0005fcb4) frm_month_g4_ParamLimits

0xbc01,	// (0x0005fcc5) frm_month_g5_ParamLimits

0xbc14,	// (0x0005fcd8) frm_month_g6_ParamLimits

0xbc27,	// (0x0005fceb) frm_month_g7_ParamLimits

0x2195,	// (0x00056259) frm_month_g8_ParamLimits

0xbc3a,	// (0x0005fcfe) frm_month_g9_ParamLimits

0xbc47,	// (0x0005fd0b) frm_month_g10_ParamLimits

0xbc54,	// (0x0005fd18) frm_month_g11_ParamLimits

0xbc61,	// (0x0005fd25) frm_month_g12_ParamLimits

0xbc6e,	// (0x0005fd32) frm_month_g13_ParamLimits

0xbc7b,	// (0x0005fd3f) frm_month_g14_ParamLimits

0xbc8a,	// (0x0005fd4e) frm_month_g15_ParamLimits

0xbc99,	// (0x0005fd5d) frm_month_g16_ParamLimits

0xff08,	// (0x00063fcc) frm_month_g_ParamLimits

0x21a2,	// (0x00056266) cell_top_day_name_pane_t1_ParamLimits

0xbca8,	// (0x0005fd6c) cell_area_left_week_number_pane_g1_ParamLimits

0xbcb7,	// (0x0005fd7b) cell_area_left_week_number_pane_t1_ParamLimits

0xe8dc,	// (0x000629a0) cell_month_view_pane_g1_ParamLimits

0xbccd,	// (0x0005fd91) cell_month_view_pane_t1_ParamLimits

0xc21c,	// (0x000602e0) main_clock2_btn_pane_g1

0x22f8,	// (0x000563bc) main_clock2_btn_pane_t1

0xdaba,	// (0x00061b7e) listscroll_cmail_pane_ParamLimits

0x163f,	// (0x00055703) main_sp_fs_email_pane_g1_ParamLimits

0x164b,	// (0x0005570f) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x00063daf) main_sp_fs_email_pane_g_ParamLimits

0x1960,	// (0x00055a24) list_recal_day_pane_ParamLimits

0x1971,	// (0x00055a35) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

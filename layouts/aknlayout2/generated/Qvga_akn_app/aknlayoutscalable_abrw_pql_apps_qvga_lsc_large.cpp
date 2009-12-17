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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007b0c7 };

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
0x32b0,	// (0x0007e377) Screen

0x32ba,	// (0x0007e381) application_window

0x32e9,	// (0x0007e3b0) area_bottom_pane_ParamLimits

0x32e9,	// (0x0007e3b0) area_bottom_pane

0x331c,	// (0x0007e3e3) area_top_pane_ParamLimits

0x331c,	// (0x0007e3e3) area_top_pane

0xa4f3,	// (0x000855ba) call_video_uplink_pane_ParamLimits

0xa4f3,	// (0x000855ba) call_video_uplink_pane

0x338d,	// (0x0007e454) main_pane_ParamLimits

0x338d,	// (0x0007e454) main_pane

0xc286,	// (0x0008734d) context_pane

0x5f79,	// (0x00081040) navi_pane

0x5fa2,	// (0x00081069) popup_cale_events_window_ParamLimits

0x5fa2,	// (0x00081069) popup_cale_events_window

0xc299,	// (0x00087360) popup_mup_playback_window

0x5fba,	// (0x00081081) signal_pane

0xac84,	// (0x00085d4b) main_browser_pane

0x163e,	// (0x0007c705) main_burst_pane

0xa50f,	// (0x000855d6) main_calc_pane

0x163e,	// (0x0007c705) main_cale_day_pane

0xae60,	// (0x00085f27) main_cale_month_pane

0x163e,	// (0x0007c705) main_cale_week_pane

0x163e,	// (0x0007c705) main_call_pane

0xa92e,	// (0x000859f5) main_call_poc_pane

0x163e,	// (0x0007c705) main_camera_pane

0x163e,	// (0x0007c705) main_chi_dic_pane

0x143d,	// (0x0007c504) main_clock_pane

0xa92e,	// (0x000859f5) main_fmradio_pane

0x163e,	// (0x0007c705) main_graph_messa_pane

0xa92e,	// (0x000859f5) main_help_pane

0xac84,	// (0x00085d4b) main_im_pane

0xab89,	// (0x00085c50) main_image_pane_ParamLimits

0xab89,	// (0x00085c50) main_image_pane

0xa92e,	// (0x000859f5) main_location2_pane

0x163e,	// (0x0007c705) main_location_pane

0xa92e,	// (0x000859f5) main_messa_pane

0xa92e,	// (0x000859f5) main_mp2_pane

0x163e,	// (0x0007c705) main_mp_pane

0xa92e,	// (0x000859f5) main_msg_pane

0xa92e,	// (0x000859f5) main_mup_eq_pane

0xa92e,	// (0x000859f5) main_mup_pane

0x163e,	// (0x0007c705) main_notes_pane

0xa92e,	// (0x000859f5) main_pec_pane

0xa92e,	// (0x000859f5) main_phob_pane

0xa92e,	// (0x000859f5) main_pinb_pane

0xa92e,	// (0x000859f5) main_postcard_pane

0xa92e,	// (0x000859f5) main_qdial_pane

0x163e,	// (0x0007c705) main_skin_pane

0xa92e,	// (0x000859f5) main_smil2_pane

0x163e,	// (0x0007c705) main_smil_pane

0x163e,	// (0x0007c705) main_video_pane

0x163e,	// (0x0007c705) main_video_tele_pane

0xab89,	// (0x00085c50) main_viewer_pane_ParamLimits

0xab89,	// (0x00085c50) main_viewer_pane

0x163e,	// (0x0007c705) main_vorec_pane

0x5d59,	// (0x00080e20) popup_blid_sat_info_window_ParamLimits

0x5d59,	// (0x00080e20) popup_blid_sat_info_window

0x5daf,	// (0x00080e76) popup_dyc_status_message_window_ParamLimits

0x5daf,	// (0x00080e76) popup_dyc_status_message_window

0x5dc5,	// (0x00080e8c) popup_grid_large_graphic_window_ParamLimits

0x5dc5,	// (0x00080e8c) popup_grid_large_graphic_window

0x5e5b,	// (0x00080f22) popup_loc_request_window_ParamLimits

0x5e5b,	// (0x00080f22) popup_loc_request_window

0x5f53,	// (0x0008101a) popup_wml_address_window_ParamLimits

0x5f53,	// (0x0008101a) popup_wml_address_window

0x5baf,	// (0x00080c76) call_muted_g1

0x58d4,	// (0x0008099b) popup_call_audio_conf_window_ParamLimits

0x58d4,	// (0x0008099b) popup_call_audio_conf_window

0x5bbf,	// (0x00080c86) popup_call_audio_first_window_ParamLimits

0x5bbf,	// (0x00080c86) popup_call_audio_first_window

0x5c1d,	// (0x00080ce4) popup_call_audio_in_window_ParamLimits

0x5c1d,	// (0x00080ce4) popup_call_audio_in_window

0x5c49,	// (0x00080d10) popup_call_audio_out_window_ParamLimits

0x5c49,	// (0x00080d10) popup_call_audio_out_window

0x5c77,	// (0x00080d3e) popup_call_audio_second_window_ParamLimits

0x5c77,	// (0x00080d3e) popup_call_audio_second_window

0x5cbd,	// (0x00080d84) popup_call_audio_wait_window_ParamLimits

0x5cbd,	// (0x00080d84) popup_call_audio_wait_window

0x5cf0,	// (0x00080db7) popup_number_entry_window_ParamLimits

0x5cf0,	// (0x00080db7) popup_number_entry_window

0xa51d,	// (0x000855e4) bg_popup_call_pane_cp05_ParamLimits

0xa51d,	// (0x000855e4) bg_popup_call_pane_cp05

0xa53d,	// (0x00085604) popup_number_entry_window_t1

0xa550,	// (0x00085617) popup_number_entry_window_t2

0xa562,	// (0x00085629) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0008a1f6) popup_number_entry_window_t

0xa574,	// (0x0008563b) text_title_cp2

0xa587,	// (0x0008564e) bg_popup_call_pane_cp_ParamLimits

0xa587,	// (0x0008564e) bg_popup_call_pane_cp

0xa595,	// (0x0008565c) call_thumbnail_pane

0xa59d,	// (0x00085664) popup_call_audio_in_window_g1_ParamLimits

0xa59d,	// (0x00085664) popup_call_audio_in_window_g1

0xa5a9,	// (0x00085670) popup_call_audio_in_window_g2_ParamLimits

0xa5a9,	// (0x00085670) popup_call_audio_in_window_g2

0xa5b5,	// (0x0008567c) popup_call_audio_in_window_g3_ParamLimits

0xa5b5,	// (0x0008567c) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0008a1ff) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0008a1ff) popup_call_audio_in_window_g

0xa5c1,	// (0x00085688) popup_call_audio_in_window_t1_ParamLimits

0xa5c1,	// (0x00085688) popup_call_audio_in_window_t1

0xa5dc,	// (0x000856a3) popup_call_audio_in_window_t2_ParamLimits

0xa5dc,	// (0x000856a3) popup_call_audio_in_window_t2

0xa5f7,	// (0x000856be) popup_call_audio_in_window_t3_ParamLimits

0xa5f7,	// (0x000856be) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0008a206) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0008a206) popup_call_audio_in_window_t

0xa587,	// (0x0008564e) bg_popup_call_pane_cp01_ParamLimits

0xa587,	// (0x0008564e) bg_popup_call_pane_cp01

0xa595,	// (0x0008565c) call_thumbnail_pane_cp02

0xa60a,	// (0x000856d1) call_type_pane_cp022

0xa612,	// (0x000856d9) popup_call_audio_out_window_g1_ParamLimits

0xa612,	// (0x000856d9) popup_call_audio_out_window_g1

0xa624,	// (0x000856eb) popup_call_audio_out_window_g2_ParamLimits

0xa624,	// (0x000856eb) popup_call_audio_out_window_g2

0xa630,	// (0x000856f7) popup_call_audio_out_window_g3_ParamLimits

0xa630,	// (0x000856f7) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0008a20d) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0008a20d) popup_call_audio_out_window_g

0xa642,	// (0x00085709) popup_call_audio_out_window_t1_ParamLimits

0xa642,	// (0x00085709) popup_call_audio_out_window_t1

0xa65a,	// (0x00085721) popup_call_audio_out_window_t2_ParamLimits

0xa65a,	// (0x00085721) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0008a214) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0008a214) popup_call_audio_out_window_t

0xa66f,	// (0x00085736) bg_popup_call_pane_ParamLimits

0xa66f,	// (0x00085736) bg_popup_call_pane

0x3517,	// (0x0007e5de) call_thumbnail_pane_cp_ParamLimits

0x3517,	// (0x0007e5de) call_thumbnail_pane_cp

0xa6f3,	// (0x000857ba) call_type_pane_cp01_ParamLimits

0xa6f3,	// (0x000857ba) call_type_pane_cp01

0xa737,	// (0x000857fe) popup_call_audio_first_window_g1_ParamLimits

0xa737,	// (0x000857fe) popup_call_audio_first_window_g1

0xa783,	// (0x0008584a) popup_call_audio_first_window_g2_ParamLimits

0xa783,	// (0x0008584a) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0008a219) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0008a219) popup_call_audio_first_window_g

0xa7c7,	// (0x0008588e) popup_call_audio_first_window_t1_ParamLimits

0xa7c7,	// (0x0008588e) popup_call_audio_first_window_t1

0xa873,	// (0x0008593a) popup_call_audio_first_window_t4_ParamLimits

0xa873,	// (0x0008593a) popup_call_audio_first_window_t4

0xa8ff,	// (0x000859c6) popup_call_audio_first_window_t5_ParamLimits

0xa8ff,	// (0x000859c6) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0008a21e) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0008a21e) popup_call_audio_first_window_t

0xa92e,	// (0x000859f5) bg_popup_call_pane_cp02

0xa938,	// (0x000859ff) call_type_pane_cp023

0xa940,	// (0x00085a07) popup_call_audio_wait_window_g1

0xa948,	// (0x00085a0f) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0008a225) popup_call_audio_wait_window_g

0xa950,	// (0x00085a17) popup_call_audio_wait_window_t3

0xa95e,	// (0x00085a25) bg_popup_call_pane_cp03_ParamLimits

0xa95e,	// (0x00085a25) bg_popup_call_pane_cp03

0xa9be,	// (0x00085a85) call_thumbnail_pane_cp011_ParamLimits

0xa9be,	// (0x00085a85) call_thumbnail_pane_cp011

0xa9ca,	// (0x00085a91) call_type_pane_cp034_ParamLimits

0xa9ca,	// (0x00085a91) call_type_pane_cp034

0xaa06,	// (0x00085acd) popup_call_audio_second_window_g1_ParamLimits

0xaa06,	// (0x00085acd) popup_call_audio_second_window_g1

0xaa42,	// (0x00085b09) popup_call_audio_second_window_g2_ParamLimits

0xaa42,	// (0x00085b09) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0008a22a) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0008a22a) popup_call_audio_second_window_g

0xaa7e,	// (0x00085b45) popup_call_audio_second_window_t1_ParamLimits

0xaa7e,	// (0x00085b45) popup_call_audio_second_window_t1

0xaaff,	// (0x00085bc6) popup_call_audio_second_window_t2_ParamLimits

0xaaff,	// (0x00085bc6) popup_call_audio_second_window_t2

0xab35,	// (0x00085bfc) popup_call_audio_second_window_t3_ParamLimits

0xab35,	// (0x00085bfc) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0008a22f) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0008a22f) popup_call_audio_second_window_t

0xa92e,	// (0x000859f5) bg_popup_call_pane_cp04

0xab6b,	// (0x00085c32) list_conf_pane

0xab73,	// (0x00085c3a) popup_call_audio_conf_window_t1

0xab81,	// (0x00085c48) call_thumbnail_pane_g1

0xab89,	// (0x00085c50) bg_pinb_pane_ParamLimits

0xab89,	// (0x00085c50) bg_pinb_pane

0xab97,	// (0x00085c5e) find_pinb_pane

0xaba0,	// (0x00085c67) listscroll_pinb_pane_ParamLimits

0xaba0,	// (0x00085c67) listscroll_pinb_pane

0xabaf,	// (0x00085c76) pinb_bg_pane_g1

0x353b,	// (0x0007e602) pinb_bg_pane_g2

0x3545,	// (0x0007e60c) pinb_bg_pane_g3

0x354f,	// (0x0007e616) pinb_bg_pane_g4

0x3559,	// (0x0007e620) pinb_bg_pane_g5

0x3563,	// (0x0007e62a) pinb_bg_pane_g6

0x356c,	// (0x0007e633) pinb_bg_pane_g7

0x3575,	// (0x0007e63c) pinb_bg_pane_g8

0x3580,	// (0x0007e647) pinb_bg_pane_g9

0x358a,	// (0x0007e651) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0008a236) pinb_bg_pane_g

0x35a5,	// (0x0007e66c) grid_pinb_pane

0x35ae,	// (0x0007e675) list_pinb_pane

0x35b7,	// (0x0007e67e) scroll_pane_cp01_ParamLimits

0x35b7,	// (0x0007e67e) scroll_pane_cp01

0xabb9,	// (0x00085c80) find_pinb_pane_g1_ParamLimits

0xabb9,	// (0x00085c80) find_pinb_pane_g1

0xabd1,	// (0x00085c98) find_pinb_pane_t1

0xabe3,	// (0x00085caa) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0008a250) find_pinb_pane_t

0xabf8,	// (0x00085cbf) input_focus_pane_cp01_ParamLimits

0xabf8,	// (0x00085cbf) input_focus_pane_cp01

0x35c9,	// (0x0007e690) cell_pinb_pane_ParamLimits

0x35c9,	// (0x0007e690) cell_pinb_pane

0x35e4,	// (0x0007e6ab) cell_pinb_pane_g1_ParamLimits

0x35e4,	// (0x0007e6ab) cell_pinb_pane_g1

0x35f4,	// (0x0007e6bb) cell_pinb_pane_g2_ParamLimits

0x35f4,	// (0x0007e6bb) cell_pinb_pane_g2

0xac04,	// (0x00085ccb) cell_pinb_pane_g3_ParamLimits

0xac04,	// (0x00085ccb) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0008a255) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0008a255) cell_pinb_pane_g

0xa92e,	// (0x000859f5) grid_highlight_pane_cp01

0x3600,	// (0x0007e6c7) list_pinb_item_pane_ParamLimits

0x3600,	// (0x0007e6c7) list_pinb_item_pane

0xa92e,	// (0x000859f5) list_highlight_pane_cp02

0x3612,	// (0x0007e6d9) list_pinb_item_pane_g1_ParamLimits

0x3612,	// (0x0007e6d9) list_pinb_item_pane_g1

0x361f,	// (0x0007e6e6) list_pinb_item_pane_g2_ParamLimits

0x361f,	// (0x0007e6e6) list_pinb_item_pane_g2

0x362b,	// (0x0007e6f2) list_pinb_item_pane_g3_ParamLimits

0x362b,	// (0x0007e6f2) list_pinb_item_pane_g3

0x363c,	// (0x0007e703) list_pinb_item_pane_g4_ParamLimits

0x363c,	// (0x0007e703) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0008a25c) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0008a25c) list_pinb_item_pane_g

0x3648,	// (0x0007e70f) list_pinb_item_pane_t1_ParamLimits

0x3648,	// (0x0007e70f) list_pinb_item_pane_t1

0x367d,	// (0x0007e744) calc_display_pane

0x3699,	// (0x0007e760) calc_paper_pane

0x36ba,	// (0x0007e781) grid_calc_pane

0xa92e,	// (0x000859f5) bg_list_pane_cp01

0x36d6,	// (0x0007e79d) clock_g1

0x36de,	// (0x0007e7a5) clock_g2

0x0001,

0xf19e,	// (0x0008a265) clock_g

0x36e6,	// (0x0007e7ad) clock_t1_ParamLimits

0x36e6,	// (0x0007e7ad) clock_t1

0x36fb,	// (0x0007e7c2) clock_t2_ParamLimits

0x36fb,	// (0x0007e7c2) clock_t2

0x370d,	// (0x0007e7d4) clock_t3_ParamLimits

0x370d,	// (0x0007e7d4) clock_t3

0x371f,	// (0x0007e7e6) clock_t4_ParamLimits

0x371f,	// (0x0007e7e6) clock_t4

0x3731,	// (0x0007e7f8) clock_t5_ParamLimits

0x3731,	// (0x0007e7f8) clock_t5

0x3746,	// (0x0007e80d) clock_t6_ParamLimits

0x3746,	// (0x0007e80d) clock_t6

0x3758,	// (0x0007e81f) clock_t7_ParamLimits

0x3758,	// (0x0007e81f) clock_t7

0x376a,	// (0x0007e831) clock_t8_ParamLimits

0x376a,	// (0x0007e831) clock_t8

0x377c,	// (0x0007e843) clock_t9_ParamLimits

0x377c,	// (0x0007e843) clock_t9

0x0008,

0xf1a3,	// (0x0008a26a) clock_t_ParamLimits

0xf1a3,	// (0x0008a26a) clock_t

0xac18,	// (0x00085cdf) popup_clock_analogue_window_cp02

0xac18,	// (0x00085cdf) popup_clock_digital_window_cp01

0xac20,	// (0x00085ce7) listscroll_help_pane

0xa92e,	// (0x000859f5) phob_pre_status_pane

0xac2a,	// (0x00085cf1) grid_qdial_pane

0xa92e,	// (0x000859f5) listscroll_mce_pane

0xac34,	// (0x00085cfb) bg_notes_pane

0xac3e,	// (0x00085d05) list_notes_pane

0x378e,	// (0x0007e855) scroll_pane_cp06

0xac48,	// (0x00085d0f) bg_calc_paper_pane

0xac6a,	// (0x00085d31) list_calc_pane

0xac84,	// (0x00085d4b) bg_calc_display_pane

0xac90,	// (0x00085d57) calc_display_pane_t1

0xaca5,	// (0x00085d6c) calc_display_pane_t2

0xacba,	// (0x00085d81) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0008a27d) calc_display_pane_t

0x3799,	// (0x0007e860) cell_calc_pane_ParamLimits

0x3799,	// (0x0007e860) cell_calc_pane

0xaccc,	// (0x00085d93) bg_calc_paper_pane_g1

0xacd8,	// (0x00085d9f) bg_calc_paper_pane_g2

0xace4,	// (0x00085dab) bg_calc_paper_pane_g3

0xacf0,	// (0x00085db7) bg_calc_paper_pane_g4

0xacfc,	// (0x00085dc3) bg_calc_paper_pane_g5

0x37cc,	// (0x0007e893) bg_calc_paper_pane_g6

0x37db,	// (0x0007e8a2) bg_calc_paper_pane_g7

0x37ea,	// (0x0007e8b1) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0008a284) bg_calc_paper_pane_g

0x37f9,	// (0x0007e8c0) calc_bg_paper_pane_g9

0x3808,	// (0x0007e8cf) list_calc_item_pane_ParamLimits

0x3808,	// (0x0007e8cf) list_calc_item_pane

0xad08,	// (0x00085dcf) list_calc_item_pane_g1

0xad15,	// (0x00085ddc) list_calc_item_pane_t1_ParamLimits

0xad15,	// (0x00085ddc) list_calc_item_pane_t1

0x381c,	// (0x0007e8e3) list_calc_item_pane_t2_ParamLimits

0x381c,	// (0x0007e8e3) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0008a295) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0008a295) list_calc_item_pane_t

0xad27,	// (0x00085dee) cell_calc_pane_g1

0xad31,	// (0x00085df8) grid_highlight_pane_cp02

0xad53,	// (0x00085e1a) bg_calc_display_pane_g1

0xad5c,	// (0x00085e23) bg_calc_display_pane_g2

0xad66,	// (0x00085e2d) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0008a29f) bg_calc_display_pane_g

0x384a,	// (0x0007e911) cell_qdial_pane_ParamLimits

0x384a,	// (0x0007e911) cell_qdial_pane

0x385c,	// (0x0007e923) cell_qdial_pane_g1_ParamLimits

0x385c,	// (0x0007e923) cell_qdial_pane_g1

0x3872,	// (0x0007e939) cell_qdial_pane_g2_ParamLimits

0x3872,	// (0x0007e939) cell_qdial_pane_g2

0xad6f,	// (0x00085e36) cell_qdial_pane_g3_ParamLimits

0xad6f,	// (0x00085e36) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0008a2a6) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0008a2a6) cell_qdial_pane_g

0x3899,	// (0x0007e960) cell_qdial_pane_t1_ParamLimits

0x3899,	// (0x0007e960) cell_qdial_pane_t1

0x38b1,	// (0x0007e978) cell_qdial_pane_t2_ParamLimits

0x38b1,	// (0x0007e978) cell_qdial_pane_t2

0x38c4,	// (0x0007e98b) cell_qdial_pane_t3_ParamLimits

0x38c4,	// (0x0007e98b) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0008a2af) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0008a2af) cell_qdial_pane_t

0xa92e,	// (0x000859f5) grid_highlight_pane_cp04

0xad7b,	// (0x00085e42) thumbnail_qdial_pane_ParamLimits

0xad7b,	// (0x00085e42) thumbnail_qdial_pane

0xadd7,	// (0x00085e9e) list_help_pane

0xade1,	// (0x00085ea8) scroll_pane_cp02

0x38d7,	// (0x0007e99e) help_list_pane_t1_ParamLimits

0x38d7,	// (0x0007e99e) help_list_pane_t1

0xadea,	// (0x00085eb1) bg_notes_pane_g2

0xadf2,	// (0x00085eb9) bg_notes_pane_g3

0xadfa,	// (0x00085ec1) notes_bg_pane_g1

0xae02,	// (0x00085ec9) notes_bg_pane_g4

0xae0a,	// (0x00085ed1) notes_bg_pane_g5

0xae12,	// (0x00085ed9) notes_bg_pane_g6

0xae1a,	// (0x00085ee1) notes_bg_pane_g7

0xae22,	// (0x00085ee9) notes_bg_pane_g8

0xae2a,	// (0x00085ef1) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0008a2cd) notes_bg_pane_g

0xae32,	// (0x00085ef9) list_notes_text_pane_ParamLimits

0xae32,	// (0x00085ef9) list_notes_text_pane

0xae46,	// (0x00085f0d) list_notes_text_pane_g1

0x38f3,	// (0x0007e9ba) list_notes_text_pane_t1

0xae60,	// (0x00085f27) listscroll_cale_week_pane

0x391c,	// (0x0007e9e3) bg_cale_heading_pane

0xae6f,	// (0x00085f36) bg_cale_pane_cp01

0x3930,	// (0x0007e9f7) cale_week_corner_pane

0x3946,	// (0x0007ea0d) cale_week_day_heading_pane

0x395a,	// (0x0007ea21) cale_week_scroll_pane_g1

0x396b,	// (0x0007ea32) cale_week_scroll_pane_g2

0x397c,	// (0x0007ea43) cale_week_scroll_pane_g3

0x398d,	// (0x0007ea54) cale_week_scroll_pane_g4

0x399e,	// (0x0007ea65) cale_week_scroll_pane_g5

0x39af,	// (0x0007ea76) cale_week_scroll_pane_g6

0x39c0,	// (0x0007ea87) cale_week_scroll_pane_g7

0x39d1,	// (0x0007ea98) cale_week_scroll_pane_g8

0x39e4,	// (0x0007eaab) cale_week_scroll_pane_g9

0x39f5,	// (0x0007eabc) cale_week_scroll_pane_g10

0x3a06,	// (0x0007eacd) cale_week_scroll_pane_g11

0x3a17,	// (0x0007eade) cale_week_scroll_pane_g12

0x3a28,	// (0x0007eaef) cale_week_scroll_pane_g13

0x3a39,	// (0x0007eb00) cale_week_scroll_pane_g14

0x3a4a,	// (0x0007eb11) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0008a2dc) cale_week_scroll_pane_g

0x3a5b,	// (0x0007eb22) cale_week_time_pane

0x3a6e,	// (0x0007eb35) grid_cale_week_pane

0x3a81,	// (0x0007eb48) scroll_pane_cp08

0x3a9b,	// (0x0007eb62) cell_cale_week_pane_ParamLimits

0x3a9b,	// (0x0007eb62) cell_cale_week_pane

0x3ad7,	// (0x0007eb9e) cale_week_day_heading_pane_t1

0x3b01,	// (0x0007ebc8) cale_week_day_heading_pane_t2

0x3b2b,	// (0x0007ebf2) cale_week_day_heading_pane_t3

0x3b55,	// (0x0007ec1c) cale_week_day_heading_pane_t4

0x3b7f,	// (0x0007ec46) cale_week_day_heading_pane_t5

0x3ba9,	// (0x0007ec70) cale_week_day_heading_pane_t6

0x3bd3,	// (0x0007ec9a) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0008a2fb) cale_week_day_heading_pane_t

0xae9a,	// (0x00085f61) bg_cale_side_pane

0x3bfd,	// (0x0007ecc4) cale_week_time_pane_t1

0x3c29,	// (0x0007ecf0) cale_week_time_pane_t2

0x3c55,	// (0x0007ed1c) cale_week_time_pane_t3

0x3c81,	// (0x0007ed48) cale_week_time_pane_t4

0x3cad,	// (0x0007ed74) cale_week_time_pane_t5

0x3cd9,	// (0x0007eda0) cale_week_time_pane_t6

0x3d05,	// (0x0007edcc) cale_week_time_pane_t7

0x3d31,	// (0x0007edf8) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0008a30a) cale_week_time_pane_t

0x3d5d,	// (0x0007ee24) cell_cale_week_pane_g2

0x3d76,	// (0x0007ee3d) cell_cale_week_pane_g3_ParamLimits

0x3d76,	// (0x0007ee3d) cell_cale_week_pane_g3

0xaea8,	// (0x00085f6f) grid_highlight_pane_cp07

0xaeb0,	// (0x00085f77) listscroll_gms_pane

0xaeba,	// (0x00085f81) grid_gms_pane

0xaec3,	// (0x00085f8a) listscroll_gms_pane_g1

0xaecb,	// (0x00085f92) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0008a31b) listscroll_gms_pane_g

0x3d8e,	// (0x0007ee55) scroll_pane_cp010

0x3d99,	// (0x0007ee60) cell_gms_pane_ParamLimits

0x3d99,	// (0x0007ee60) cell_gms_pane

0x3da9,	// (0x0007ee70) cell_gms_pane_g1

0xaed3,	// (0x00085f9a) cell_gms_pane_g2

0xae46,	// (0x00085f0d) cell_gms_pane_g3

0xaedb,	// (0x00085fa2) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0008a320) cell_gms_pane_g

0xaee4,	// (0x00085fab) grid_highlight_pane_cp09

0x5b5d,	// (0x00080c24) phob_pre_status_pane_g1

0x5b65,	// (0x00080c2c) phob_pre_status_pane_g2

0x5b6d,	// (0x00080c34) phob_pre_status_pane_g3

0x5b75,	// (0x00080c3c) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0008a722) phob_pre_status_pane_g

0x5b85,	// (0x00080c4c) phob_pre_status_pane_t1

0x5b93,	// (0x00080c5a) phob_pre_status_pane_t2

0x5ba1,	// (0x00080c68) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x0008a72d) phob_pre_status_pane_t

0xa92e,	// (0x000859f5) bg_list_pane_cp05

0x3db9,	// (0x0007ee80) grid_vorec_pane

0xaeec,	// (0x00085fb3) vorec_t1

0xaefa,	// (0x00085fc1) vorec_t2

0xaf08,	// (0x00085fcf) vorec_t3

0xaf16,	// (0x00085fdd) vorec_t4

0xaf24,	// (0x00085feb) vorec_t5

0xaf32,	// (0x00085ff9) vorec_t6

0x0006,

0xf262,	// (0x0008a329) vorec_t

0xaf4e,	// (0x00086015) wait_bar_pane_cp01

0x3dc1,	// (0x0007ee88) cell_vorec_pane_ParamLimits

0x3dc1,	// (0x0007ee88) cell_vorec_pane

0xaf56,	// (0x0008601d) cell_vorec_pane_g1

0xa92e,	// (0x000859f5) grid_highlight_pane_cp05

0x3de6,	// (0x0007eead) cams_zoom_pane

0x3df5,	// (0x0007eebc) image_vga_pane

0x3e0d,	// (0x0007eed4) main_camera_pane_g1

0x3e1d,	// (0x0007eee4) main_camera_pane_g2

0x3e2d,	// (0x0007eef4) main_camera_pane_g3

0x3e3d,	// (0x0007ef04) main_camera_pane_g4

0x3e4d,	// (0x0007ef14) main_camera_pane_g5

0x3e5d,	// (0x0007ef24) main_camera_pane_g6

0x3e6d,	// (0x0007ef34) main_camera_pane_g7

0x0007,

0xf271,	// (0x0008a338) main_camera_pane_g

0x3e7d,	// (0x0007ef44) main_camera_pane_t1

0x3e93,	// (0x0007ef5a) main_camera_pane_t2

0x0001,

0xf282,	// (0x0008a349) main_camera_pane_t

0x3ec5,	// (0x0007ef8c) cams_zoom_pane_cp_ParamLimits

0x3ec5,	// (0x0007ef8c) cams_zoom_pane_cp

0x3eed,	// (0x0007efb4) image_cif_pane_ParamLimits

0x3eed,	// (0x0007efb4) image_cif_pane

0x3f1e,	// (0x0007efe5) image_subqcif_pane

0x3f26,	// (0x0007efed) main_video_pane_g1_ParamLimits

0x3f26,	// (0x0007efed) main_video_pane_g1

0x3f4a,	// (0x0007f011) main_video_pane_g2_ParamLimits

0x3f4a,	// (0x0007f011) main_video_pane_g2

0x3f7e,	// (0x0007f045) main_video_pane_g3_ParamLimits

0x3f7e,	// (0x0007f045) main_video_pane_g3

0x3fac,	// (0x0007f073) main_video_pane_g4_ParamLimits

0x3fac,	// (0x0007f073) main_video_pane_g4

0x3fda,	// (0x0007f0a1) main_video_pane_g5_ParamLimits

0x3fda,	// (0x0007f0a1) main_video_pane_g5

0xaf6c,	// (0x00086033) main_video_pane_g6_ParamLimits

0xaf6c,	// (0x00086033) main_video_pane_g6

0x0006,

0xf287,	// (0x0008a34e) main_video_pane_g_ParamLimits

0xf287,	// (0x0008a34e) main_video_pane_g

0x4001,	// (0x0007f0c8) main_video_pane_t1_ParamLimits

0x4001,	// (0x0007f0c8) main_video_pane_t1

0xaf86,	// (0x0008604d) cams_zoom_pane_g1

0xaf8f,	// (0x00086056) cams_zoom_pane_g2

0xaf98,	// (0x0008605f) cams_zoom_pane_g3

0xafa1,	// (0x00086068) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0008a35d) cams_zoom_pane_g

0x405e,	// (0x0007f125) grid_cams_pane

0x4073,	// (0x0007f13a) linegrid_cams_pane

0x4084,	// (0x0007f14b) cell_cams_pane_ParamLimits

0x4084,	// (0x0007f14b) cell_cams_pane

0xafaa,	// (0x00086071) cams_burst_image_pane

0xafb2,	// (0x00086079) cell_cams_pane_g1

0xa92e,	// (0x000859f5) grid_highlight_pane_cp03

0xad27,	// (0x00085dee) mp_bg_pane_g1

0xa92e,	// (0x000859f5) bg_list_pane_cp03

0xc162,	// (0x00087229) bg_mp_pane

0xc16a,	// (0x00087231) grid_mp_pane

0xc172,	// (0x00087239) media_player_g1

0xc17a,	// (0x00087241) media_player_t1

0xc188,	// (0x0008724f) media_player_t2

0xc196,	// (0x0008725d) media_player_t3

0xc1a4,	// (0x0008726b) media_player_t4

0xc1b2,	// (0x00087279) media_player_t5

0xc1c0,	// (0x00087287) media_player_t6

0xc1ce,	// (0x00087295) media_player_t7

0x0006,

0xf645,	// (0x0008a70c) media_player_t

0xc1dc,	// (0x000872a3) wait_bar_pane_cp02

0xf62a,	// (0x0008a6f1) main_usb_pane_t

0x5b54,	// (0x00080c1b) cell_mp_pane

0xad27,	// (0x00085dee) cell_mp_pane_g1

0xa92e,	// (0x000859f5) grid_highlight_pane_cp06

0xb05a,	// (0x00086121) grid_skin_colour_pane

0xb062,	// (0x00086129) list_highlight_pane_cp03

0x40f8,	// (0x0007f1bf) skin_g1

0xb06a,	// (0x00086131) skin_t1

0xb079,	// (0x00086140) skin_t2

0x0001,

0xf2cb,	// (0x0008a392) skin_t

0x4100,	// (0x0007f1c7) cell_skin_colour_pane_ParamLimits

0x4100,	// (0x0007f1c7) cell_skin_colour_pane

0xb087,	// (0x0008614e) cell_skin_colour_pane_g1

0x4152,	// (0x0007f219) call_video_g1_ParamLimits

0x4152,	// (0x0007f219) call_video_g1

0x4168,	// (0x0007f22f) call_video_g2_ParamLimits

0x4168,	// (0x0007f22f) call_video_g2

0x0001,

0xf2d0,	// (0x0008a397) call_video_g_ParamLimits

0xf2d0,	// (0x0008a397) call_video_g

0x419e,	// (0x0007f265) call_video_uplink_pane_cp1_ParamLimits

0x419e,	// (0x0007f265) call_video_uplink_pane_cp1

0xb0a1,	// (0x00086168) call_video_uplink_pane_cp2

0x4205,	// (0x0007f2cc) video_down_crop_pane_ParamLimits

0x4205,	// (0x0007f2cc) video_down_crop_pane

0x42ad,	// (0x0007f374) video_down_pane_ParamLimits

0x42ad,	// (0x0007f374) video_down_pane

0xb0a9,	// (0x00086170) video_down_subqcif_pane_ParamLimits

0xb0a9,	// (0x00086170) video_down_subqcif_pane

0xb0c1,	// (0x00086188) video_down_subqcif_pane_cp_ParamLimits

0xb0c1,	// (0x00086188) video_down_subqcif_pane_cp

0xb0e5,	// (0x000861ac) im_reading_pane_ParamLimits

0xb0e5,	// (0x000861ac) im_reading_pane

0x433d,	// (0x0007f404) im_writing_pane_ParamLimits

0x433d,	// (0x0007f404) im_writing_pane

0x4353,	// (0x0007f41a) im_reading_pane_t1

0xb0ff,	// (0x000861c6) list_im_pane

0xb110,	// (0x000861d7) scroll_pane_cp07

0x4389,	// (0x0007f450) im_writing_pane_t1_ParamLimits

0x4389,	// (0x0007f450) im_writing_pane_t1

0xb129,	// (0x000861f0) im_writing_pane_t2_ParamLimits

0xb129,	// (0x000861f0) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0008a3a1) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0008a3a1) im_writing_pane_t

0xa92e,	// (0x000859f5) input_focus_pane_cp04

0xa92e,	// (0x000859f5) input_focus_pane_cp05

0x439e,	// (0x0007f465) list_im_single_pane_ParamLimits

0x439e,	// (0x0007f465) list_im_single_pane

0xb146,	// (0x0008620d) list_single_im_pane_t1

0x5b1a,	// (0x00080be1) blid_accuracy_pane

0x5b22,	// (0x00080be9) blid_compass_pane

0x5b2a,	// (0x00080bf1) main_location_t1

0x5b38,	// (0x00080bff) main_location_t2

0x5b46,	// (0x00080c0d) main_location_t3

0x0002,

0xf654,	// (0x0008a71b) main_location_t

0xa92e,	// (0x000859f5) aid_levels_location

0xad27,	// (0x00085dee) blid_accuracy_pane_g1

0xad27,	// (0x00085dee) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0008a403) blid_accuracy_pane_g

0xb180,	// (0x00086247) wml_content_pane

0x0e48,	// (0x0007bf0f) wml_button_pane_ParamLimits

0x0e48,	// (0x0007bf0f) wml_button_pane

0x43b4,	// (0x0007f47b) wml_list_single_large_pane_ParamLimits

0x43b4,	// (0x0007f47b) wml_list_single_large_pane

0x43c8,	// (0x0007f48f) wml_list_single_medium_pane_ParamLimits

0x43c8,	// (0x0007f48f) wml_list_single_medium_pane

0x43dd,	// (0x0007f4a4) wml_list_single_small_pane_ParamLimits

0x43dd,	// (0x0007f4a4) wml_list_single_small_pane

0x0e5c,	// (0x0007bf23) wml_selection_box_pane_ParamLimits

0x0e5c,	// (0x0007bf23) wml_selection_box_pane

0x0e6f,	// (0x0007bf36) wml_list_single_pane_t1

0x0e7e,	// (0x0007bf45) wml_list_single_medium_pane_t1

0x0e8d,	// (0x0007bf54) wml_list_single_large_pane_t1

0x0e9c,	// (0x0007bf63) input_focus_pane_cp02_ParamLimits

0x0e9c,	// (0x0007bf63) input_focus_pane_cp02

0x0eaf,	// (0x0007bf76) wml_selection_box_pane_g1

0x0eb8,	// (0x0007bf7f) wml_selection_box_pane_t1_ParamLimits

0x0eb8,	// (0x0007bf7f) wml_selection_box_pane_t1

0xab89,	// (0x00085c50) bg_wml_button_pane_ParamLimits

0xab89,	// (0x00085c50) bg_wml_button_pane

0x0ed0,	// (0x0007bf97) wml_button_pane_g1

0x0ed8,	// (0x0007bf9f) wml_button_pane_t1

0x0ed0,	// (0x0007bf97) wml_button_bg_pane_g1

0x0ee8,	// (0x0007bfaf) wml_button_bg_pane_g2

0x0ef0,	// (0x0007bfb7) wml_button_bg_pane_g3

0x0ef8,	// (0x0007bfbf) wml_button_bg_pane_g4

0x0f00,	// (0x0007bfc7) wml_button_bg_pane_g5

0x0f08,	// (0x0007bfcf) wml_button_bg_pane_g6

0x0f10,	// (0x0007bfd7) wml_button_bg_pane_g7

0x0f18,	// (0x0007bfdf) wml_button_bg_pane_g8

0x0f20,	// (0x0007bfe7) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0008a3a6) wml_button_bg_pane_g

0x43f4,	// (0x0007f4bb) bg_list_pane_cp02

0x0f28,	// (0x0007bfef) mce_header_pane_ParamLimits

0x0f28,	// (0x0007bfef) mce_header_pane

0x0f3c,	// (0x0007c003) mce_icon_pane

0x0f3c,	// (0x0007c003) mce_image_pane

0x0f45,	// (0x0007c00c) mce_text_pane_ParamLimits

0x0f45,	// (0x0007c00c) mce_text_pane

0x43fd,	// (0x0007f4c4) scroll_pane_cp03

0x43fd,	// (0x0007f4c4) scroll_pane_cp04

0x0f59,	// (0x0007c020) scroll_pane_cp05_ParamLimits

0x0f59,	// (0x0007c020) scroll_pane_cp05

0x4407,	// (0x0007f4ce) mce_header_field_pane_ParamLimits

0x4407,	// (0x0007f4ce) mce_header_field_pane

0x441e,	// (0x0007f4e5) mce_header_field_pane_2_ParamLimits

0x441e,	// (0x0007f4e5) mce_header_field_pane_2

0x4434,	// (0x0007f4fb) mce_header_field_pane_3

0x443c,	// (0x0007f503) list_single_mce_message_pane_ParamLimits

0x443c,	// (0x0007f503) list_single_mce_message_pane

0x4451,	// (0x0007f518) list_single_mce_smart_pane_ParamLimits

0x4451,	// (0x0007f518) list_single_mce_smart_pane

0x0f65,	// (0x0007c02c) input_focus_pane_cp03

0x0f6e,	// (0x0007c035) list_header_data_pane

0x4471,	// (0x0007f538) mce_header_field_pane_t1

0x447f,	// (0x0007f546) list_single_mce_header_pane_ParamLimits

0x447f,	// (0x0007f546) list_single_mce_header_pane

0x0f76,	// (0x0007c03d) list_single_mce_header_pane_t1

0x0f85,	// (0x0007c04c) list_single_mce_message_pane_g1

0x0f8e,	// (0x0007c055) list_single_mce_message_pane_t1

0x44b1,	// (0x0007f578) bg_cale_heading_pane_cp01_ParamLimits

0x44b1,	// (0x0007f578) bg_cale_heading_pane_cp01

0x0f9d,	// (0x0007c064) bg_cale_pane_cp02_ParamLimits

0x0f9d,	// (0x0007c064) bg_cale_pane_cp02

0x44d4,	// (0x0007f59b) cale_month_corner_pane

0x44ea,	// (0x0007f5b1) cale_month_day_heading_pane_ParamLimits

0x44ea,	// (0x0007f5b1) cale_month_day_heading_pane

0x451d,	// (0x0007f5e4) cale_month_pane_g1_ParamLimits

0x451d,	// (0x0007f5e4) cale_month_pane_g1

0x4539,	// (0x0007f600) cale_month_pane_g2_ParamLimits

0x4539,	// (0x0007f600) cale_month_pane_g2

0x4554,	// (0x0007f61b) cale_month_pane_g3_ParamLimits

0x4554,	// (0x0007f61b) cale_month_pane_g3

0x4580,	// (0x0007f647) cale_month_pane_g4_ParamLimits

0x4580,	// (0x0007f647) cale_month_pane_g4

0x45ac,	// (0x0007f673) cale_month_pane_g5_ParamLimits

0x45ac,	// (0x0007f673) cale_month_pane_g5

0x45d8,	// (0x0007f69f) cale_month_pane_g6_ParamLimits

0x45d8,	// (0x0007f69f) cale_month_pane_g6

0x4604,	// (0x0007f6cb) cale_month_pane_g7_ParamLimits

0x4604,	// (0x0007f6cb) cale_month_pane_g7

0x4630,	// (0x0007f6f7) cale_month_pane_g8_ParamLimits

0x4630,	// (0x0007f6f7) cale_month_pane_g8

0x466c,	// (0x0007f733) cale_month_pane_g9_ParamLimits

0x466c,	// (0x0007f733) cale_month_pane_g9

0x46a6,	// (0x0007f76d) cale_month_pane_g10_ParamLimits

0x46a6,	// (0x0007f76d) cale_month_pane_g10

0x46e0,	// (0x0007f7a7) cale_month_pane_g11_ParamLimits

0x46e0,	// (0x0007f7a7) cale_month_pane_g11

0x471a,	// (0x0007f7e1) cale_month_pane_g12_ParamLimits

0x471a,	// (0x0007f7e1) cale_month_pane_g12

0x4754,	// (0x0007f81b) cale_month_pane_g13_ParamLimits

0x4754,	// (0x0007f81b) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0008a3b9) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0008a3b9) cale_month_pane_g

0x478e,	// (0x0007f855) cale_month_week_pane

0x47a1,	// (0x0007f868) grid_cale_month_pane_ParamLimits

0x47a1,	// (0x0007f868) grid_cale_month_pane

0x47cf,	// (0x0007f896) cale_month_day_heading_pane_t1

0x482d,	// (0x0007f8f4) cale_month_day_heading_pane_t2

0x4892,	// (0x0007f959) cale_month_day_heading_pane_t3

0x48f7,	// (0x0007f9be) cale_month_day_heading_pane_t4

0x495c,	// (0x0007fa23) cale_month_day_heading_pane_t5

0x49c1,	// (0x0007fa88) cale_month_day_heading_pane_t6

0x4a26,	// (0x0007faed) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0008a3d4) cale_month_day_heading_pane_t

0xae9a,	// (0x00085f61) bg_cale_side_pane_cp01

0x4a93,	// (0x0007fb5a) cale_month_week_pane_t1

0x4aaa,	// (0x0007fb71) cale_month_week_pane_t2

0x4ac1,	// (0x0007fb88) cale_month_week_pane_t3

0x4ad8,	// (0x0007fb9f) cale_month_week_pane_t4

0x4aef,	// (0x0007fbb6) cale_month_week_pane_t5

0x4b06,	// (0x0007fbcd) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0008a3e3) cale_month_week_pane_t

0x4b1d,	// (0x0007fbe4) cell_cale_month_pane_ParamLimits

0x4b1d,	// (0x0007fbe4) cell_cale_month_pane

0xeb24,	// (0x00089beb) cell_cale_month_pane_g1

0x4bcb,	// (0x0007fc92) cell_cale_month_pane_t1_ParamLimits

0x4bcb,	// (0x0007fc92) cell_cale_month_pane_t1

0xaea8,	// (0x00085f6f) grid_highlight_pane_cp08

0xad27,	// (0x00085dee) main_smil_g1

0x4be7,	// (0x0007fcae) smil_status_pane

0x0fd2,	// (0x0007c099) smil_text_pane

0xc042,	// (0x00087109) bg_popup_call3_rect_pane_g8

0xc04a,	// (0x00087111) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0008a69c) bg_popup_call3_rect_pane_g

0xc300,	// (0x000873c7) smil_status_volume_pane_g1

0x0fdc,	// (0x0007c0a3) smil_status_pane_t1

0xec22,	// (0x00089ce9) volume_smil_pane

0x0ff3,	// (0x0007c0ba) list_smil_text_pane

0x4bf8,	// (0x0007fcbf) scroll_pane_cp011

0x4c03,	// (0x0007fcca) smil_text_list_pane_t1_ParamLimits

0x4c03,	// (0x0007fcca) smil_text_list_pane_t1

0xeb30,	// (0x00089bf7) aid_volume_smil_ParamLimits

0xeb30,	// (0x00089bf7) aid_volume_smil

0xad27,	// (0x00085dee) smil_volume_pane_g1

0xad27,	// (0x00085dee) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0008a403) smil_volume_pane_g

0xac84,	// (0x00085d4b) listscroll_cale_day_pane

0x0ffd,	// (0x0007c0c4) bg_cale_pane

0x1015,	// (0x0007c0dc) list_cale_pane

0x1026,	// (0x0007c0ed) scroll_pane_cp09

0x1037,	// (0x0007c0fe) cale_bg_pane_g1

0x103f,	// (0x0007c106) cale_bg_pane_g2

0x1047,	// (0x0007c10e) cale_bg_pane_g3

0x104f,	// (0x0007c116) cale_bg_pane_g4

0x1057,	// (0x0007c11e) cale_bg_pane_g5

0x105f,	// (0x0007c126) cale_bg_pane_g6

0x1067,	// (0x0007c12e) cale_bg_pane_g7

0x106f,	// (0x0007c136) cale_bg_pane_g8

0x1077,	// (0x0007c13e) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0008a408) cale_bg_pane_g

0x4c41,	// (0x0007fd08) list_cale_time_pane_ParamLimits

0x4c41,	// (0x0007fd08) list_cale_time_pane

0x107f,	// (0x0007c146) list_cale_time_pane_g1_ParamLimits

0x107f,	// (0x0007c146) list_cale_time_pane_g1

0x108b,	// (0x0007c152) list_cale_time_pane_g2_ParamLimits

0x108b,	// (0x0007c152) list_cale_time_pane_g2

0x4c56,	// (0x0007fd1d) list_cale_time_pane_g3_ParamLimits

0x4c56,	// (0x0007fd1d) list_cale_time_pane_g3

0x4c64,	// (0x0007fd2b) list_cale_time_pane_g4_ParamLimits

0x4c64,	// (0x0007fd2b) list_cale_time_pane_g4

0x4c72,	// (0x0007fd39) list_cale_time_pane_g5_ParamLimits

0x4c72,	// (0x0007fd39) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0008a41b) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0008a41b) list_cale_time_pane_g

0x10a5,	// (0x0007c16c) list_cale_time_pane_t1_ParamLimits

0x10a5,	// (0x0007c16c) list_cale_time_pane_t1

0x10cd,	// (0x0007c194) list_cale_time_pane_t2_ParamLimits

0x10cd,	// (0x0007c194) list_cale_time_pane_t2

0x4f76,	// (0x0008003d) aid_blid_cardinal_pane

0x4fb4,	// (0x0008007b) compass_pane_t4

0x10f5,	// (0x0007c1bc) list_cale_time_pane_t4_ParamLimits

0x10f5,	// (0x0007c1bc) list_cale_time_pane_t4

0x4fc2,	// (0x00080089) compass_pane_t5

0x4fd0,	// (0x00080097) compass_pane_t6

0x4fde,	// (0x000800a5) compass_pane_t7

0x1541,	// (0x0007c608) navi_pane_cc_t1

0x16e5,	// (0x0007c7ac) aid_phob_thumbnail_center_pane

0x55cc,	// (0x00080693) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0008a428) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0008a428) list_cale_time_pane_t

0xa587,	// (0x0008564e) bg_popup_window_pane_cp02_ParamLimits

0xa587,	// (0x0008564e) bg_popup_window_pane_cp02

0x111d,	// (0x0007c1e4) heading_pane_cp01_ParamLimits

0x111d,	// (0x0007c1e4) heading_pane_cp01

0x1129,	// (0x0007c1f0) loc_req_pane_ParamLimits

0x1129,	// (0x0007c1f0) loc_req_pane

0x1139,	// (0x0007c200) loc_type_pane_ParamLimits

0x1139,	// (0x0007c200) loc_type_pane

0x114b,	// (0x0007c212) loc_type_pane_t1_ParamLimits

0x114b,	// (0x0007c212) loc_type_pane_t1

0x115d,	// (0x0007c224) loc_type_pane_t2_ParamLimits

0x115d,	// (0x0007c224) loc_type_pane_t2

0x116f,	// (0x0007c236) loc_type_pane_t3_ParamLimits

0x116f,	// (0x0007c236) loc_type_pane_t3

0x0002,

0xf368,	// (0x0008a42f) loc_type_pane_t_ParamLimits

0xf368,	// (0x0008a42f) loc_type_pane_t

0x1181,	// (0x0007c248) list_loc_req_pane

0x118b,	// (0x0007c252) scroll_pane_cp012

0x4c7e,	// (0x0007fd45) list_single_loc_request_popup_menu_pane_ParamLimits

0x4c7e,	// (0x0007fd45) list_single_loc_request_popup_menu_pane

0x1194,	// (0x0007c25b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1194,	// (0x0007c25b) list_single_loc_request_popup_menu_pane_g1

0x11a0,	// (0x0007c267) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x11a0,	// (0x0007c267) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0008a436) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0008a436) list_single_loc_request_popup_menu_pane_g

0x11ac,	// (0x0007c273) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x11ac,	// (0x0007c273) list_single_loc_request_popup_menu_pane_t1

0xab89,	// (0x00085c50) bg_popup_window_pane_cp03_ParamLimits

0xab89,	// (0x00085c50) bg_popup_window_pane_cp03

0x1a82,	// (0x0007cb49) heading_loc_req_pane_ParamLimits

0x1a82,	// (0x0007cb49) heading_loc_req_pane

0x4c8b,	// (0x0007fd52) popup_dyc_status_message_window_g1_ParamLimits

0x4c8b,	// (0x0007fd52) popup_dyc_status_message_window_g1

0x4c9f,	// (0x0007fd66) popup_dyc_status_message_window_t1_ParamLimits

0x4c9f,	// (0x0007fd66) popup_dyc_status_message_window_t1

0x4cb4,	// (0x0007fd7b) popup_dyc_status_message_window_t2_ParamLimits

0x4cb4,	// (0x0007fd7b) popup_dyc_status_message_window_t2

0x4cc9,	// (0x0007fd90) popup_dyc_status_message_window_t3_ParamLimits

0x4cc9,	// (0x0007fd90) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0008a43b) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0008a43b) popup_dyc_status_message_window_t

0xa92e,	// (0x000859f5) bg_heading_pane_cp01

0x11c2,	// (0x0007c289) heading_loc_req_pane_g1

0x11ca,	// (0x0007c291) heading_loc_req_pane_g2

0x11d2,	// (0x0007c299) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0008a442) heading_loc_req_pane_g

0x11da,	// (0x0007c2a1) heading_loc_req_pane_t1

0x11e9,	// (0x0007c2b0) bg_popup_sub_pane_cp01_ParamLimits

0x11e9,	// (0x0007c2b0) bg_popup_sub_pane_cp01

0x11f7,	// (0x0007c2be) popup_cale_events_window_g1_ParamLimits

0x11f7,	// (0x0007c2be) popup_cale_events_window_g1

0x1217,	// (0x0007c2de) popup_cale_events_window_g2_ParamLimits

0x1217,	// (0x0007c2de) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0008a476) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0008a476) popup_cale_events_window_g

0x1237,	// (0x0007c2fe) popup_cale_events_window_t1_ParamLimits

0x1237,	// (0x0007c2fe) popup_cale_events_window_t1

0x1249,	// (0x0007c310) popup_cale_events_window_t2_ParamLimits

0x1249,	// (0x0007c310) popup_cale_events_window_t2

0x1287,	// (0x0007c34e) popup_cale_events_window_t3_ParamLimits

0x1287,	// (0x0007c34e) popup_cale_events_window_t3

0x12c1,	// (0x0007c388) popup_cale_events_window_t4_ParamLimits

0x12c1,	// (0x0007c388) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0008a47b) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0008a47b) popup_cale_events_window_t

0x4d59,	// (0x0007fe20) call_type_pane

0x4d69,	// (0x0007fe30) popup_call_status_window_g1

0x4d7d,	// (0x0007fe44) popup_call_status_window_g2

0x4d91,	// (0x0007fe58) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0008a484) popup_call_status_window_g

0x1305,	// (0x0007c3cc) call_type_pane_g1

0x130e,	// (0x0007c3d5) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0008a48b) call_type_pane_g

0xa92e,	// (0x000859f5) bg_popup_sub_pane_cp02

0x1317,	// (0x0007c3de) listscroll_popup_wml_pane

0x131f,	// (0x0007c3e6) list_wml_pane

0x1329,	// (0x0007c3f0) scroll_pane_cp013

0x4da1,	// (0x0007fe68) list_single_graphic_popup_wml_pane_ParamLimits

0x4da1,	// (0x0007fe68) list_single_graphic_popup_wml_pane

0xad27,	// (0x00085dee) list_single_graphic_popup_wml_pane_g1

0x1332,	// (0x0007c3f9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0008a490) list_single_graphic_popup_wml_pane_g

0x133a,	// (0x0007c401) list_single_graphic_popup_wml_pane_t1

0x1350,	// (0x0007c417) aid_call_pane

0xab81,	// (0x00085c48) popup_clock_analogue_window_g1

0xab81,	// (0x00085c48) popup_clock_analogue_window_g2

0xeb52,	// (0x00089c19) popup_clock_analogue_window_g3

0xeb52,	// (0x00089c19) popup_clock_analogue_window_g4

0xad27,	// (0x00085dee) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0008a495) popup_clock_analogue_window_g

0xeb5a,	// (0x00089c21) popup_clock_analogue_window_t1

0xeb68,	// (0x00089c2f) clock_digital_number_pane_ParamLimits

0xeb68,	// (0x00089c2f) clock_digital_number_pane

0xeb74,	// (0x00089c3b) clock_digital_number_pane_cp02_ParamLimits

0xeb74,	// (0x00089c3b) clock_digital_number_pane_cp02

0xeb80,	// (0x00089c47) clock_digital_number_pane_cp03_ParamLimits

0xeb80,	// (0x00089c47) clock_digital_number_pane_cp03

0xeb8c,	// (0x00089c53) clock_digital_number_pane_cp04_ParamLimits

0xeb8c,	// (0x00089c53) clock_digital_number_pane_cp04

0xeb98,	// (0x00089c5f) clock_digital_separator_pane_ParamLimits

0xeb98,	// (0x00089c5f) clock_digital_separator_pane

0xeba4,	// (0x00089c6b) popup_clock_digital_window_t1

0xad27,	// (0x00085dee) clock_digital_number_pane_g1

0xad27,	// (0x00085dee) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0008a403) clock_digital_number_pane_g

0xad27,	// (0x00085dee) clock_digital_separator_pane_g1

0xad27,	// (0x00085dee) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0008a403) clock_digital_separator_pane_g

0xa92e,	// (0x000859f5) bg_popup_window_pane_cp04

0x1358,	// (0x0007c41f) heading_pane_cp03

0x1360,	// (0x0007c427) listscroll_popup_gms_pane

0x1368,	// (0x0007c42f) grid_large_graphic_popup_pane

0x1372,	// (0x0007c439) listscroll_popup_gms_pane_g1

0x137a,	// (0x0007c441) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0008a4a0) listscroll_popup_gms_pane_g

0x0e40,	// (0x0007bf07) scroll_pane_cp014

0x4db4,	// (0x0007fe7b) cell_large_graphic_popup_pane_ParamLimits

0x4db4,	// (0x0007fe7b) cell_large_graphic_popup_pane

0x4dca,	// (0x0007fe91) cell_large_graphic_popup_pane_g1_ParamLimits

0x4dca,	// (0x0007fe91) cell_large_graphic_popup_pane_g1

0x1382,	// (0x0007c449) cell_large_graphic_popup_pane_g2_ParamLimits

0x1382,	// (0x0007c449) cell_large_graphic_popup_pane_g2

0x138e,	// (0x0007c455) cell_large_graphic_popup_pane_g3_ParamLimits

0x138e,	// (0x0007c455) cell_large_graphic_popup_pane_g3

0x139b,	// (0x0007c462) cell_large_graphic_popup_pane_g4_ParamLimits

0x139b,	// (0x0007c462) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0008a4a5) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0008a4a5) cell_large_graphic_popup_pane_g

0x13ab,	// (0x0007c472) grid_highlight_pane_cp010

0xad27,	// (0x00085dee) bg_popup_call_pane_g1

0x13b5,	// (0x0007c47c) list_single_graphic_popup_conf_pane_ParamLimits

0x13b5,	// (0x0007c47c) list_single_graphic_popup_conf_pane

0x13c8,	// (0x0007c48f) list_highlight_pane_cp01

0x13d1,	// (0x0007c498) list_single_graphic_popup_conf_pane_g1

0x13d9,	// (0x0007c4a0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0008a4ae) list_single_graphic_popup_conf_pane_g

0x13e1,	// (0x0007c4a8) list_single_graphic_popup_conf_pane_t1

0x13ef,	// (0x0007c4b6) linegrid_cams_pane_g1

0x4dd6,	// (0x0007fe9d) linegrid_cams_pane_g2

0xae46,	// (0x00085f0d) linegrid_cams_pane_g3

0x13f8,	// (0x0007c4bf) linegrid_cams_pane_g4

0x4ddf,	// (0x0007fea6) linegrid_cams_pane_g5

0x4de8,	// (0x0007feaf) linegrid_cams_pane_g6

0xaedb,	// (0x00085fa2) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0008a4b3) linegrid_cams_pane_g

0x1401,	// (0x0007c4c8) popup_clock_analogue_window

0x1401,	// (0x0007c4c8) popup_clock_digital_window

0xa92e,	// (0x000859f5) popup_phob_thumbnail_window

0xad27,	// (0x00085dee) call_video_uplink_pane_g1

0x140a,	// (0x0007c4d1) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0008a4c2) call_video_uplink_pane_g

0xaea8,	// (0x00085f6f) video_uplink_pane

0x1412,	// (0x0007c4d9) mce_image_pane_g1

0x4df1,	// (0x0007feb8) mce_image_pane_g2

0x4df9,	// (0x0007fec0) mce_image_pane_g3

0x4e01,	// (0x0007fec8) mce_image_pane_g4

0x4e09,	// (0x0007fed0) mce_image_pane_g5

0x0004,

0xf400,	// (0x0008a4c7) mce_image_pane_g

0x141c,	// (0x0007c4e3) control_top_pane_stacon_cp01_ParamLimits

0x141c,	// (0x0007c4e3) control_top_pane_stacon_cp01

0x142c,	// (0x0007c4f3) uni_indicator_pane_stacon_cp01_ParamLimits

0x142c,	// (0x0007c4f3) uni_indicator_pane_stacon_cp01

0x143d,	// (0x0007c504) bg_popup_sub_pane_cp03

0x1447,	// (0x0007c50e) chi_dic_find_pane

0x4e11,	// (0x0007fed8) listscroll_chi_dic_pane

0x144f,	// (0x0007c516) main_pane_chidic_g1

0x1457,	// (0x0007c51e) chi_dic_find_pane_t1

0x1465,	// (0x0007c52c) find_chidic_pane

0x146e,	// (0x0007c535) chi_dic_list_pane_ParamLimits

0x146e,	// (0x0007c535) chi_dic_list_pane

0x147f,	// (0x0007c546) scroll_pane_cp020

0x1487,	// (0x0007c54e) find_chidic_pane_t1

0xa92e,	// (0x000859f5) input_focus_pane_cp06

0x4e25,	// (0x0007feec) list_chi_dic_pane_ParamLimits

0x4e25,	// (0x0007feec) list_chi_dic_pane

0x4e37,	// (0x0007fefe) list_chi_dic_pane_t1_ParamLimits

0x4e37,	// (0x0007fefe) list_chi_dic_pane_t1

0xa92e,	// (0x000859f5) list_highlight_pane_cp020

0x1496,	// (0x0007c55d) bg_cale_heading_pane_g1

0x4e4a,	// (0x0007ff11) bg_cale_heading_pane_g2

0x4e52,	// (0x0007ff19) bg_cale_heading_pane_g3

0x4e5a,	// (0x0007ff21) bg_cale_heading_pane_g4

0x4e64,	// (0x0007ff2b) bg_cale_heading_pane_g5

0x4e6e,	// (0x0007ff35) bg_cale_heading_pane_g6

0x4e76,	// (0x0007ff3d) bg_cale_heading_pane_g7

0x4e7e,	// (0x0007ff45) bg_cale_heading_pane_g8

0x4e88,	// (0x0007ff4f) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0008a4d2) bg_cale_heading_pane_g

0x1496,	// (0x0007c55d) bg_cale_side_pane_g1

0x4e92,	// (0x0007ff59) bg_cale_side_pane_g2

0x4e9a,	// (0x0007ff61) bg_cale_side_pane_g3

0x4ea2,	// (0x0007ff69) bg_cale_side_pane_g4

0x4eaa,	// (0x0007ff71) bg_cale_side_pane_g5

0x4eb2,	// (0x0007ff79) bg_cale_side_pane_g6

0x4eba,	// (0x0007ff81) bg_cale_side_pane_g7

0x4ec2,	// (0x0007ff89) bg_cale_side_pane_g8

0x4eca,	// (0x0007ff91) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0008a4e5) bg_cale_side_pane_g

0x4ed2,	// (0x0007ff99) popup_call_status_window_ParamLimits

0x4ed2,	// (0x0007ff99) popup_call_status_window

0x149e,	// (0x0007c565) stacon_top_pane

0x14a6,	// (0x0007c56d) status_pane_ParamLimits

0x14a6,	// (0x0007c56d) status_pane

0x14c0,	// (0x0007c587) status_small_pane

0x14c8,	// (0x0007c58f) control_pane

0xa92e,	// (0x000859f5) stacon_bottom_pane

0x14d0,	// (0x0007c597) list_single_mce_smart_pane_t1_ParamLimits

0x14d0,	// (0x0007c597) list_single_mce_smart_pane_t1

0x14e3,	// (0x0007c5aa) list_single_mce_smart_pane_t2_ParamLimits

0x14e3,	// (0x0007c5aa) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0008a4f8) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0008a4f8) list_single_mce_smart_pane_t

0x4f19,	// (0x0007ffe0) compass_pane

0x4f22,	// (0x0007ffe9) main_location2_pane_t1

0x4f38,	// (0x0007ffff) main_location2_pane_t2

0x4f4e,	// (0x00080015) main_location2_pane_t3

0x0003,

0xf436,	// (0x0008a4fd) main_location2_pane_t

0x150b,	// (0x0007c5d2) compass_pane_g1_ParamLimits

0x150b,	// (0x0007c5d2) compass_pane_g1

0x4f96,	// (0x0008005d) compass_pane_t1

0x4fa5,	// (0x0008006c) compass_pane_t2

0x0005,

0xf43f,	// (0x0008a506) compass_pane_t

0x4fec,	// (0x000800b3) text_secondary_cp61

0x1538,	// (0x0007c5ff) navi_pane_cams_g5

0x1579,	// (0x0007c640) navi_pane_im_t1

0x1587,	// (0x0007c64e) navi_pane_mp_g1_ParamLimits

0x1587,	// (0x0007c64e) navi_pane_mp_g1

0x159b,	// (0x0007c662) navi_pane_mp_g2_ParamLimits

0x159b,	// (0x0007c662) navi_pane_mp_g2

0x15a7,	// (0x0007c66e) navi_pane_mp_g3_ParamLimits

0x15a7,	// (0x0007c66e) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0008a51a) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0008a51a) navi_pane_mp_g

0x15b3,	// (0x0007c67a) navi_pane_mp_t1

0x15c1,	// (0x0007c688) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0008a521) navi_pane_mp_t

0x162e,	// (0x0007c6f5) navi_pane_vt_g1

0x15b3,	// (0x0007c67a) navi_pane_vt_t1

0x1636,	// (0x0007c6fd) navi_slider_pane

0x163e,	// (0x0007c705) zooming_pane

0x1646,	// (0x0007c70d) navi_slider_pane_g1

0xebc1,	// (0x00089c88) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0008a528) navi_slider_pane_g

0x166a,	// (0x0007c731) aid_levels_zoom

0x1672,	// (0x0007c739) zooming_pane_g1

0x167a,	// (0x0007c741) zooming_pane_g2

0x167a,	// (0x0007c741) zooming_pane_g3

0x0002,

0xf470,	// (0x0008a537) zooming_pane_g

0x1682,	// (0x0007c749) level_10_zoom

0x168b,	// (0x0007c752) level_11_zoom

0x1694,	// (0x0007c75b) level_1_zoom

0x169d,	// (0x0007c764) level_2_zoom

0x16a6,	// (0x0007c76d) level_3_zoom

0x16af,	// (0x0007c776) level_4_zoom

0x16b8,	// (0x0007c77f) level_5_zoom

0x16c1,	// (0x0007c788) level_6_zoom

0x16ca,	// (0x0007c791) level_7_zoom

0x16d3,	// (0x0007c79a) level_8_zoom

0x16dc,	// (0x0007c7a3) level_9_zoom

0x16ed,	// (0x0007c7b4) popup_phob_thumbnail_window_g1

0x16f5,	// (0x0007c7bc) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0008a53e) popup_phob_thumbnail_window_g

0xc1e4,	// (0x000872ab) level_1_location

0xc1ec,	// (0x000872b3) level_2_location

0xc1f4,	// (0x000872bb) level_3_location

0xc1fc,	// (0x000872c3) level_4_location

0x163e,	// (0x0007c705) level_5_location

0x5077,	// (0x0008013e) mce_icon_pane_g1

0x507f,	// (0x00080146) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0008a543) mce_icon_pane_g

0x5087,	// (0x0008014e) main_mup_pane_g1_ParamLimits

0x5087,	// (0x0008014e) main_mup_pane_g1

0x509d,	// (0x00080164) main_mup_pane_g2_ParamLimits

0x509d,	// (0x00080164) main_mup_pane_g2

0x50b5,	// (0x0008017c) main_mup_pane_g3_ParamLimits

0x50b5,	// (0x0008017c) main_mup_pane_g3

0x50cd,	// (0x00080194) main_mup_pane_g4_ParamLimits

0x50cd,	// (0x00080194) main_mup_pane_g4

0x50e5,	// (0x000801ac) main_mup_pane_g5_ParamLimits

0x50e5,	// (0x000801ac) main_mup_pane_g5

0x50ff,	// (0x000801c6) main_mup_pane_g6_ParamLimits

0x50ff,	// (0x000801c6) main_mup_pane_g6

0x5117,	// (0x000801de) main_mup_pane_g7_ParamLimits

0x5117,	// (0x000801de) main_mup_pane_g7

0x512f,	// (0x000801f6) main_mup_pane_g8_ParamLimits

0x512f,	// (0x000801f6) main_mup_pane_g8

0x5147,	// (0x0008020e) main_mup_pane_g9_ParamLimits

0x5147,	// (0x0008020e) main_mup_pane_g9

0x515b,	// (0x00080222) main_mup_pane_g10_ParamLimits

0x515b,	// (0x00080222) main_mup_pane_g10

0x516f,	// (0x00080236) main_mup_pane_g11_ParamLimits

0x516f,	// (0x00080236) main_mup_pane_g11

0x5181,	// (0x00080248) main_mup_pane_g12_ParamLimits

0x5181,	// (0x00080248) main_mup_pane_g12

0x5195,	// (0x0008025c) main_mup_pane_g13_ParamLimits

0x5195,	// (0x0008025c) main_mup_pane_g13

0x000c,

0xf481,	// (0x0008a548) main_mup_pane_g_ParamLimits

0xf481,	// (0x0008a548) main_mup_pane_g

0x51a7,	// (0x0008026e) main_mup_pane_t1_ParamLimits

0x51a7,	// (0x0008026e) main_mup_pane_t1

0x51c1,	// (0x00080288) main_mup_pane_t2_ParamLimits

0x51c1,	// (0x00080288) main_mup_pane_t2

0x51d9,	// (0x000802a0) main_mup_pane_t3_ParamLimits

0x51d9,	// (0x000802a0) main_mup_pane_t3

0x51f1,	// (0x000802b8) main_mup_pane_t4_ParamLimits

0x51f1,	// (0x000802b8) main_mup_pane_t4

0x520f,	// (0x000802d6) main_mup_pane_t5_ParamLimits

0x520f,	// (0x000802d6) main_mup_pane_t5

0x5224,	// (0x000802eb) main_mup_pane_t6_ParamLimits

0x5224,	// (0x000802eb) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0008a563) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0008a563) main_mup_pane_t

0x5236,	// (0x000802fd) mup_progress_pane_ParamLimits

0x5236,	// (0x000802fd) mup_progress_pane

0x5242,	// (0x00080309) mup_visualizer_pane_ParamLimits

0x5242,	// (0x00080309) mup_visualizer_pane

0x526a,	// (0x00080331) mup_volume_pane_ParamLimits

0x526a,	// (0x00080331) mup_volume_pane

0x12f7,	// (0x0007c3be) mup_visualizer_pane_g1_ParamLimits

0x12f7,	// (0x0007c3be) mup_visualizer_pane_g1

0x12f7,	// (0x0007c3be) mup_visualizer_pane_g2_ParamLimits

0x12f7,	// (0x0007c3be) mup_visualizer_pane_g2

0x150b,	// (0x0007c5d2) mup_visualizer_pane_g3_ParamLimits

0x150b,	// (0x0007c5d2) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0008a570) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0008a570) mup_visualizer_pane_g

0xad27,	// (0x00085dee) mup_volume_pane_g1

0x1705,	// (0x0007c7cc) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0008a577) mup_volume_pane_g

0xad27,	// (0x00085dee) mup_progress_pane_g1

0x170e,	// (0x0007c7d5) mup_progress_pane_g2

0x1717,	// (0x0007c7de) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0008a57c) mup_progress_pane_g

0xa92e,	// (0x000859f5) bg_popup_window_pane_cp05

0x1720,	// (0x0007c7e7) heading_pane_cp02_ParamLimits

0x1720,	// (0x0007c7e7) heading_pane_cp02

0x173a,	// (0x0007c801) list_popup_blid_pane

0x1742,	// (0x0007c809) list_blid_sat_info_pane_ParamLimits

0x1742,	// (0x0007c809) list_blid_sat_info_pane

0x1755,	// (0x0007c81c) list_blid_sat_info_pane_g1

0x175d,	// (0x0007c824) list_blid_sat_info_pane_t1

0x535a,	// (0x00080421) mup_equalizer_pane_ParamLimits

0x535a,	// (0x00080421) mup_equalizer_pane

0x5373,	// (0x0008043a) mup_equalizer_pane_cp1_ParamLimits

0x5373,	// (0x0008043a) mup_equalizer_pane_cp1

0x538c,	// (0x00080453) mup_equalizer_pane_cp2_ParamLimits

0x538c,	// (0x00080453) mup_equalizer_pane_cp2

0x53a5,	// (0x0008046c) mup_equalizer_pane_cp3_ParamLimits

0x53a5,	// (0x0008046c) mup_equalizer_pane_cp3

0x53be,	// (0x00080485) mup_equalizer_pane_cp4_ParamLimits

0x53be,	// (0x00080485) mup_equalizer_pane_cp4

0x53d7,	// (0x0008049e) mup_equalizer_pane_cp5

0x53e9,	// (0x000804b0) mup_equalizer_pane_cp6

0x53fb,	// (0x000804c2) mup_equalizer_pane_cp7

0xc0c2,	// (0x00087189) bg_popup_call_poc_act_pane_g9

0xc0ca,	// (0x00087191) bg_popup_call_poc_act_pane_g10

0xc0d2,	// (0x00087199) bg_popup_call_poc_act_pane_g11

0x000a,

0xab89,	// (0x00085c50) mup_scale_pane

0xad27,	// (0x00085dee) mup_scale_pane_g1

0x176b,	// (0x0007c832) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0008a598) mup_scale_pane_g

0x178f,	// (0x0007c856) msg_data_pane

0x1797,	// (0x0007c85e) scroll_pane_cp017

0x5421,	// (0x000804e8) bg_list_pane_cp04_ParamLimits

0x5421,	// (0x000804e8) bg_list_pane_cp04

0x179f,	// (0x0007c866) msg_data_pane_g1

0x4df1,	// (0x0007feb8) msg_data_pane_g2

0x4df9,	// (0x0007fec0) msg_data_pane_g3

0x5439,	// (0x00080500) msg_data_pane_g4

0x4e09,	// (0x0007fed0) msg_data_pane_g5

0x5077,	// (0x0008013e) msg_data_pane_g6

0x5441,	// (0x00080508) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0008a5a7) msg_data_pane_g

0x5449,	// (0x00080510) msg_text_pane_ParamLimits

0x5449,	// (0x00080510) msg_text_pane

0x546b,	// (0x00080532) qrid_highlight_pane_cp011_ParamLimits

0x546b,	// (0x00080532) qrid_highlight_pane_cp011

0xa92e,	// (0x000859f5) msg_body_pane

0xa92e,	// (0x000859f5) msg_header_pane

0x17b0,	// (0x0007c877) input_focus_pane_cp07

0x548d,	// (0x00080554) msg_header_pane_t1_ParamLimits

0x548d,	// (0x00080554) msg_header_pane_t1

0x549f,	// (0x00080566) msg_header_pane_t2_ParamLimits

0x549f,	// (0x00080566) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0008a5bb) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0008a5bb) msg_header_pane_t

0x17c5,	// (0x0007c88c) msg_body_pane_g1

0x54b1,	// (0x00080578) msg_body_pane_t1_ParamLimits

0x54b1,	// (0x00080578) msg_body_pane_t1

0x54dc,	// (0x000805a3) msg_body_pane_t2_ParamLimits

0x54dc,	// (0x000805a3) msg_body_pane_t2

0x54ee,	// (0x000805b5) msg_body_pane_t3_ParamLimits

0x54ee,	// (0x000805b5) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0008a5c0) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0008a5c0) msg_body_pane_t

0x5536,	// (0x000805fd) main_viewer_pane_g1_ParamLimits

0x5536,	// (0x000805fd) main_viewer_pane_g1

0x5542,	// (0x00080609) main_viewer_pane_g2_ParamLimits

0x5542,	// (0x00080609) main_viewer_pane_g2

0x554e,	// (0x00080615) main_viewer_pane_g3_ParamLimits

0x554e,	// (0x00080615) main_viewer_pane_g3

0x555d,	// (0x00080624) main_viewer_pane_g4_ParamLimits

0x555d,	// (0x00080624) main_viewer_pane_g4

0xebeb,	// (0x00089cb2) main_viewer_pane_g5_ParamLimits

0xebeb,	// (0x00089cb2) main_viewer_pane_g5

0xebeb,	// (0x00089cb2) main_viewer_pane_g7_ParamLimits

0xebeb,	// (0x00089cb2) main_viewer_pane_g7

0xebfd,	// (0x00089cc4) main_viewer_pane_g8_ParamLimits

0xebfd,	// (0x00089cc4) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0008a5d0) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0008a5d0) main_viewer_pane_g

0x17cd,	// (0x0007c894) viewer_content_pane_ParamLimits

0x17cd,	// (0x0007c894) viewer_content_pane

0x5591,	// (0x00080658) main_postcard_pane_g1_ParamLimits

0x5591,	// (0x00080658) main_postcard_pane_g1

0x55a5,	// (0x0008066c) main_postcard_pane_g2_ParamLimits

0x55a5,	// (0x0008066c) main_postcard_pane_g2

0x55b9,	// (0x00080680) main_postcard_pane_g3_ParamLimits

0x55b9,	// (0x00080680) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0008a5e1) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0008a5e1) main_postcard_pane_g

0x55cc,	// (0x00080693) main_postcard_pane_g4

0xc313,	// (0x000873da) smil_status_volume_pane_g2

0x5607,	// (0x000806ce) postcard_pane_ParamLimits

0x5607,	// (0x000806ce) postcard_pane

0x17e9,	// (0x0007c8b0) postcard_pane_g1_ParamLimits

0x17e9,	// (0x0007c8b0) postcard_pane_g1

0x5647,	// (0x0008070e) postcard_pane_g2_ParamLimits

0x5647,	// (0x0008070e) postcard_pane_g2

0x5653,	// (0x0008071a) postcard_pane_g3_ParamLimits

0x5653,	// (0x0008071a) postcard_pane_g3

0x17db,	// (0x0007c8a2) postcard_pane_g4_ParamLimits

0x17db,	// (0x0007c8a2) postcard_pane_g4

0x565f,	// (0x00080726) postcard_pane_g5_ParamLimits

0x565f,	// (0x00080726) postcard_pane_g5

0x5674,	// (0x0008073b) postcard_pane_g6_ParamLimits

0x5674,	// (0x0008073b) postcard_pane_g6

0x17e9,	// (0x0007c8b0) postcard_pane_g7_ParamLimits

0x17e9,	// (0x0007c8b0) postcard_pane_g7

0x0006,

0xf527,	// (0x0008a5ee) postcard_pane_g_ParamLimits

0xf527,	// (0x0008a5ee) postcard_pane_g

0x5688,	// (0x0008074f) main_mp2_pane_g1_ParamLimits

0x5688,	// (0x0008074f) main_mp2_pane_g1

0x5694,	// (0x0008075b) main_mp2_pane_g2_ParamLimits

0x5694,	// (0x0008075b) main_mp2_pane_g2

0x56a0,	// (0x00080767) main_mp2_pane_g3_ParamLimits

0x56a0,	// (0x00080767) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0008a5fd) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0008a5fd) main_mp2_pane_g

0x56ac,	// (0x00080773) main_mp2_pane_t1_ParamLimits

0x56ac,	// (0x00080773) main_mp2_pane_t1

0x56c1,	// (0x00080788) main_mp2_pane_t2_ParamLimits

0x56c1,	// (0x00080788) main_mp2_pane_t2

0x56d3,	// (0x0008079a) main_mp2_pane_t3_ParamLimits

0x56d3,	// (0x0008079a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0008a604) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0008a604) main_mp2_pane_t

0x17f7,	// (0x0007c8be) pec_content_pane_ParamLimits

0x17f7,	// (0x0007c8be) pec_content_pane

0x0e40,	// (0x0007bf07) scroll_pane_cp015

0x1809,	// (0x0007c8d0) pec_attribute_pane_ParamLimits

0x1809,	// (0x0007c8d0) pec_attribute_pane

0x56e5,	// (0x000807ac) pec_content_pane_g1_ParamLimits

0x56e5,	// (0x000807ac) pec_content_pane_g1

0x1819,	// (0x0007c8e0) pec_content_pane_t1_ParamLimits

0x1819,	// (0x0007c8e0) pec_content_pane_t1

0x182b,	// (0x0007c8f2) pec_content_pane_t2_ParamLimits

0x182b,	// (0x0007c8f2) pec_content_pane_t2

0x0001,

0xf544,	// (0x0008a60b) pec_content_pane_t_ParamLimits

0xf544,	// (0x0008a60b) pec_content_pane_t

0x56f1,	// (0x000807b8) list_single_graphic_pane_cp01_ParamLimits

0x56f1,	// (0x000807b8) list_single_graphic_pane_cp01

0xab89,	// (0x00085c50) bg_popup_sub_pane_cp04

0x183d,	// (0x0007c904) popup_mup_playback_window_g1

0x1849,	// (0x0007c910) popup_mup_playback_window_t1

0x185e,	// (0x0007c925) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0008a610) popup_mup_playback_window_t

0x1895,	// (0x0007c95c) main_image_pane_g1_ParamLimits

0x1895,	// (0x0007c95c) main_image_pane_g1

0x18d8,	// (0x0007c99f) scroll_pane_cp018_ParamLimits

0x18d8,	// (0x0007c99f) scroll_pane_cp018

0x18f0,	// (0x0007c9b7) scroll_pane_cp016_ParamLimits

0x18f0,	// (0x0007c9b7) scroll_pane_cp016

0x57bc,	// (0x00080883) smil2_image_pane_ParamLimits

0x57bc,	// (0x00080883) smil2_image_pane

0x57e4,	// (0x000808ab) smil2_root_pane_ParamLimits

0x57e4,	// (0x000808ab) smil2_root_pane

0x581c,	// (0x000808e3) smil2_text_pane_ParamLimits

0x581c,	// (0x000808e3) smil2_text_pane

0xa92e,	// (0x000859f5) bg_list_pane_cp06

0x192c,	// (0x0007c9f3) grid_radio_pane

0xa92e,	// (0x000859f5) bg_popup_window_pane_cp06

0x1934,	// (0x0007c9fb) main_fmradio_pane_t1

0x1358,	// (0x0007c41f) heading_pane_cp04

0x1942,	// (0x0007ca09) main_fmradio_pane_t2

0xc11a,	// (0x000871e1) popup_cale_lunar_info_window_g1

0x1950,	// (0x0007ca17) main_fmradio_pane_t3

0xc122,	// (0x000871e9) popup_cale_lunar_info_window_g2

0x195e,	// (0x0007ca25) main_fmradio_pane_t4

0x0001,

0x196c,	// (0x0007ca33) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x0008a6fe) popup_cale_lunar_info_window_g

0xf55e,	// (0x0008a625) main_fmradio_pane_t

0x197a,	// (0x0007ca41) wait_bar_pane_cp03

0x0e14,	// (0x0007bedb) cell_fmradio_pane_ParamLimits

0x0e14,	// (0x0007bedb) cell_fmradio_pane

0x17e9,	// (0x0007c8b0) cell_fmradio_pane_g1_ParamLimits

0x17e9,	// (0x0007c8b0) cell_fmradio_pane_g1

0xa92e,	// (0x000859f5) grid_highlight_pane_cp011

0x1982,	// (0x0007ca49) poc_content_pane_ParamLimits

0x1982,	// (0x0007ca49) poc_content_pane

0x1995,	// (0x0007ca5c) scroll_pane_cp019

0x5888,	// (0x0008094f) popup_call_poc_act_window_ParamLimits

0x5888,	// (0x0008094f) popup_call_poc_act_window

0x58a8,	// (0x0008096f) popup_call_poc_inact_window_ParamLimits

0x58a8,	// (0x0008096f) popup_call_poc_inact_window

0xf5fb,	// (0x0008a6c2) bg_popup_call_poc_act_pane_g

0xc0da,	// (0x000871a1) bg_popup_call_poc_inact_pane_g1

0xc0e2,	// (0x000871a9) bg_popup_call_poc_inact_pane_g2

0x199d,	// (0x0007ca64) popup_call_poc_act_window_g2

0xc0ea,	// (0x000871b1) bg_popup_call_poc_inact_pane_g3

0xc06a,	// (0x00087131) bg_popup_call_poc_inact_pane_g4

0xc0f2,	// (0x000871b9) bg_popup_call_poc_inact_pane_g5

0x19a5,	// (0x0007ca6c) popup_call_poc_act_window_t1_ParamLimits

0x19a5,	// (0x0007ca6c) popup_call_poc_act_window_t1

0x19cd,	// (0x0007ca94) popup_call_poc_act_window_t2_ParamLimits

0x19cd,	// (0x0007ca94) popup_call_poc_act_window_t2

0x19f5,	// (0x0007cabc) popup_call_poc_act_window_t3_ParamLimits

0x19f5,	// (0x0007cabc) popup_call_poc_act_window_t3

0x1a1d,	// (0x0007cae4) popup_call_poc_act_window_t4_ParamLimits

0x1a1d,	// (0x0007cae4) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0008a630) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0008a630) popup_call_poc_act_window_t

0xc0fa,	// (0x000871c1) bg_popup_call_poc_inact_pane_g6

0xc102,	// (0x000871c9) bg_popup_call_poc_inact_pane_g7

0xc10a,	// (0x000871d1) bg_popup_call_poc_inact_pane_g8

0x1a2f,	// (0x0007caf6) popup_call_poc_inact_window_g2

0xc112,	// (0x000871d9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x0008a6d9) bg_popup_call_poc_inact_pane_g

0x1a37,	// (0x0007cafe) popup_call_poc_inact_window_t1_ParamLimits

0x1a37,	// (0x0007cafe) popup_call_poc_inact_window_t1

0x1a4c,	// (0x0007cb13) popup_call_poc_inact_window_t2_ParamLimits

0x1a4c,	// (0x0007cb13) popup_call_poc_inact_window_t2

0x1a61,	// (0x0007cb28) popup_call_poc_inact_window_t3_ParamLimits

0x1a61,	// (0x0007cb28) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0008a639) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0008a639) popup_call_poc_inact_window_t

0xc286,	// (0x0008734d) context_pane_ParamLimits

0x5fba,	// (0x00081081) signal_pane_ParamLimits

0x163e,	// (0x0007c705) main_call2_pane

0xc274,	// (0x0008733b) popup_phob_thumbnail2_window_ParamLimits

0xc274,	// (0x0008733b) popup_phob_thumbnail2_window

0xebd3,	// (0x00089c9a) aid_hotspot_pointer_arrow_pane

0xebdb,	// (0x00089ca2) aid_hotspot_pointer_hand_pane

0x5b7d,	// (0x00080c44) phob_pre_status_pane_g5

0x3de6,	// (0x0007eead) cams_zoom_pane_ParamLimits

0x3df5,	// (0x0007eebc) image_vga_pane_ParamLimits

0x3e0d,	// (0x0007eed4) main_camera_pane_g1_ParamLimits

0x3e1d,	// (0x0007eee4) main_camera_pane_g2_ParamLimits

0x3e2d,	// (0x0007eef4) main_camera_pane_g3_ParamLimits

0x3e3d,	// (0x0007ef04) main_camera_pane_g4_ParamLimits

0x3e4d,	// (0x0007ef14) main_camera_pane_g5_ParamLimits

0x3e5d,	// (0x0007ef24) main_camera_pane_g6_ParamLimits

0x3e6d,	// (0x0007ef34) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0008a338) main_camera_pane_g_ParamLimits

0x3e7d,	// (0x0007ef44) main_camera_pane_t1_ParamLimits

0x3e93,	// (0x0007ef5a) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0008a349) main_camera_pane_t_ParamLimits

0xab89,	// (0x00085c50) bg_popup_preview_window_pane_cp01_ParamLimits

0xab89,	// (0x00085c50) bg_popup_preview_window_pane_cp01

0x1a76,	// (0x0007cb3d) popup_phob_thumbnail2_window_g1_ParamLimits

0x1a76,	// (0x0007cb3d) popup_phob_thumbnail2_window_g1

0xa92e,	// (0x000859f5) call2_cli_visual_pane

0x58d4,	// (0x0008099b) popup_call2_audio_conf_window_ParamLimits

0x58d4,	// (0x0008099b) popup_call2_audio_conf_window

0x58f2,	// (0x000809b9) popup_call2_audio_first_window_ParamLimits

0x58f2,	// (0x000809b9) popup_call2_audio_first_window

0x5968,	// (0x00080a2f) popup_call2_audio_in_window_ParamLimits

0x5968,	// (0x00080a2f) popup_call2_audio_in_window

0x599c,	// (0x00080a63) popup_call2_audio_out_window_ParamLimits

0x599c,	// (0x00080a63) popup_call2_audio_out_window

0x59ee,	// (0x00080ab5) popup_call2_audio_second_window_ParamLimits

0x59ee,	// (0x00080ab5) popup_call2_audio_second_window

0x5a40,	// (0x00080b07) popup_call2_audio_wait_window_ParamLimits

0x5a40,	// (0x00080b07) popup_call2_audio_wait_window

0xa92e,	// (0x000859f5) bg_popup_call2_act_pane_cp03

0xab6b,	// (0x00085c32) list_conf_pane_cp

0xb269,	// (0x00086330) popup_call2_audio_conf_window_t1

0x13b5,	// (0x0007c47c) list_single_graphic_popup_conf2_pane_ParamLimits

0x13b5,	// (0x0007c47c) list_single_graphic_popup_conf2_pane

0x13c8,	// (0x0007c48f) list_highlight_pane_cp04

0xb277,	// (0x0008633e) list_single_graphic_popup_conf2_pane_g1

0x13d9,	// (0x0007c4a0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0008a640) list_single_graphic_popup_conf2_pane_g

0xb27f,	// (0x00086346) list_single_graphic_popup_conf2_pane_t1

0xb28d,	// (0x00086354) bg_popup_call2_act_pane_cp01_ParamLimits

0xb28d,	// (0x00086354) bg_popup_call2_act_pane_cp01

0xb317,	// (0x000863de) call_type_pane_cp05_ParamLimits

0xb317,	// (0x000863de) call_type_pane_cp05

0xb36b,	// (0x00086432) popup_call2_audio_second_window_g1_ParamLimits

0xb36b,	// (0x00086432) popup_call2_audio_second_window_g1

0xb3bf,	// (0x00086486) popup_call2_audio_second_window_g2_ParamLimits

0xb3bf,	// (0x00086486) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0008a645) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0008a645) popup_call2_audio_second_window_g

0xb424,	// (0x000864eb) popup_call2_audio_second_window_t1_ParamLimits

0xb424,	// (0x000864eb) popup_call2_audio_second_window_t1

0xb4df,	// (0x000865a6) popup_call2_audio_second_window_t2_ParamLimits

0xb4df,	// (0x000865a6) popup_call2_audio_second_window_t2

0xb532,	// (0x000865f9) popup_call2_audio_second_window_t3_ParamLimits

0xb532,	// (0x000865f9) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0008a64c) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0008a64c) popup_call2_audio_second_window_t

0xa92e,	// (0x000859f5) bg_popup_call2_in_pane_cp02

0xa938,	// (0x000859ff) call_type_pane_cp04

0xa940,	// (0x00085a07) popup_call2_audio_wait_window_g1

0xa948,	// (0x00085a0f) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0008a225) popup_call2_audio_wait_window_g

0xa950,	// (0x00085a17) popup_call2_audio_wait_window_t3

0xb625,	// (0x000866ec) bg_popup_call2_act_pane_ParamLimits

0xb625,	// (0x000866ec) bg_popup_call2_act_pane

0xb6e5,	// (0x000867ac) call_type_pane_cp03_ParamLimits

0xb6e5,	// (0x000867ac) call_type_pane_cp03

0xb749,	// (0x00086810) popup_call2_audio_first_window_g1_ParamLimits

0xb749,	// (0x00086810) popup_call2_audio_first_window_g1

0xb7b9,	// (0x00086880) popup_call2_audio_first_window_g2_ParamLimits

0xb7b9,	// (0x00086880) popup_call2_audio_first_window_g2

0x12f7,	// (0x0007c3be) popup_call2_audio_first_window_g3_ParamLimits

0x12f7,	// (0x0007c3be) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0008a655) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0008a655) popup_call2_audio_first_window_g

0xb897,	// (0x0008695e) popup_call2_audio_first_window_t1_ParamLimits

0xb897,	// (0x0008695e) popup_call2_audio_first_window_t1

0xb99a,	// (0x00086a61) popup_call2_audio_first_window_t4_ParamLimits

0xb99a,	// (0x00086a61) popup_call2_audio_first_window_t4

0xba7d,	// (0x00086b44) popup_call2_audio_first_window_t5_ParamLimits

0xba7d,	// (0x00086b44) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0008a660) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0008a660) popup_call2_audio_first_window_t

0xab81,	// (0x00085c48) bg_popup_call2_act_pane_g1

0xc12a,	// (0x000871f1) popup_cale_lunar_info_window_t1

0xc138,	// (0x000871ff) popup_cale_lunar_info_window_t2

0xc146,	// (0x0008720d) popup_cale_lunar_info_window_t3

0xa92e,	// (0x000859f5) bg_popup_call2_bubble_pane

0xbb7e,	// (0x00086c45) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb7e,	// (0x00086c45) bg_popup_call2_in_pane_cp01

0xa60a,	// (0x000856d1) call_type_pane_cp02

0xbbc6,	// (0x00086c8d) popup_call2_audio_out_window_g1_ParamLimits

0xbbc6,	// (0x00086c8d) popup_call2_audio_out_window_g1

0xbbf2,	// (0x00086cb9) popup_call2_audio_out_window_g2_ParamLimits

0xbbf2,	// (0x00086cb9) popup_call2_audio_out_window_g2

0xbc1a,	// (0x00086ce1) popup_call2_audio_out_window_g3_ParamLimits

0xbc1a,	// (0x00086ce1) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0008a669) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0008a669) popup_call2_audio_out_window_g

0xbc55,	// (0x00086d1c) popup_call2_audio_out_window_t1_ParamLimits

0xbc55,	// (0x00086d1c) popup_call2_audio_out_window_t1

0xbcb4,	// (0x00086d7b) popup_call2_audio_out_window_t2_ParamLimits

0xbcb4,	// (0x00086d7b) popup_call2_audio_out_window_t2

0xbd08,	// (0x00086dcf) popup_call2_audio_out_window_t3_ParamLimits

0xbd08,	// (0x00086dcf) popup_call2_audio_out_window_t3

0xbd1e,	// (0x00086de5) popup_call2_audio_out_window_t4_ParamLimits

0xbd1e,	// (0x00086de5) popup_call2_audio_out_window_t4

0xbd34,	// (0x00086dfb) popup_call2_audio_out_window_t5_ParamLimits

0xbd34,	// (0x00086dfb) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0008a672) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0008a672) popup_call2_audio_out_window_t

0xbd98,	// (0x00086e5f) bg_popup_call2_in_pane_ParamLimits

0xbd98,	// (0x00086e5f) bg_popup_call2_in_pane

0xbdf4,	// (0x00086ebb) popup_call2_audio_in_window_g1_ParamLimits

0xbdf4,	// (0x00086ebb) popup_call2_audio_in_window_g1

0xbe2c,	// (0x00086ef3) popup_call2_audio_in_window_g2_ParamLimits

0xbe2c,	// (0x00086ef3) popup_call2_audio_in_window_g2

0xbe64,	// (0x00086f2b) popup_call2_audio_in_window_g3_ParamLimits

0xbe64,	// (0x00086f2b) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0008a67f) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0008a67f) popup_call2_audio_in_window_g

0xbebc,	// (0x00086f83) popup_call2_audio_in_window_t1_ParamLimits

0xbebc,	// (0x00086f83) popup_call2_audio_in_window_t1

0xbf3c,	// (0x00087003) popup_call2_audio_in_window_t2_ParamLimits

0xbf3c,	// (0x00087003) popup_call2_audio_in_window_t2

0xbfbc,	// (0x00087083) popup_call2_audio_in_window_t3_ParamLimits

0xbfbc,	// (0x00087083) popup_call2_audio_in_window_t3

0xbfd6,	// (0x0008709d) popup_call2_audio_in_window_t4_ParamLimits

0xbfd6,	// (0x0008709d) popup_call2_audio_in_window_t4

0xbfe8,	// (0x000870af) popup_call2_audio_in_window_t5_ParamLimits

0xbfe8,	// (0x000870af) popup_call2_audio_in_window_t5

0xbffd,	// (0x000870c4) popup_call2_audio_in_window_t6_ParamLimits

0xbffd,	// (0x000870c4) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0008a688) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0008a688) popup_call2_audio_in_window_t

0xab81,	// (0x00085c48) bg_popup_call2_in_pane_g1

0xc154,	// (0x0008721b) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0008a703) popup_cale_lunar_info_window_t

0xab89,	// (0x00085c50) bg_popup_call2_rect_pane_ParamLimits

0xab89,	// (0x00085c50) bg_popup_call2_rect_pane

0xa92e,	// (0x000859f5) call2_cli_visual_graphic_pane

0xa92e,	// (0x000859f5) call2_cli_visual_text_pane

0xec15,	// (0x00089cdc) smil_status_volume_pane_g3

0x0002,

0xad27,	// (0x00085dee) call2_cli_visual_graphic_pane_g1

0xad27,	// (0x00085dee) call2_cli_visual_graphic_pane_g2

0xad27,	// (0x00085dee) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0008a695) call2_cli_visual_graphic_pane_g

0xc012,	// (0x000870d9) bg_popup_call2_rect_pane_g1

0xadcf,	// (0x00085e96) bg_popup_call2_rect_pane_g2

0xc01a,	// (0x000870e1) bg_popup_call2_rect_pane_g3

0xc022,	// (0x000870e9) bg_popup_call2_rect_pane_g4

0xc02a,	// (0x000870f1) bg_popup_call2_rect_pane_g5

0xc032,	// (0x000870f9) bg_popup_call2_rect_pane_g6

0xc03a,	// (0x00087101) bg_popup_call2_rect_pane_g7

0xc042,	// (0x00087109) bg_popup_call2_rect_pane_g8

0xc04a,	// (0x00087111) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0008a69c) bg_popup_call2_rect_pane_g

0xc052,	// (0x00087119) bg_popup_call2_bubble_pane_g1

0xc05a,	// (0x00087121) bg_popup_call2_bubble_pane_g2

0xc062,	// (0x00087129) bg_popup_call2_bubble_pane_g3

0xc06a,	// (0x00087131) bg_popup_call2_bubble_pane_g4

0xc072,	// (0x00087139) bg_popup_call2_bubble_pane_g5

0xc07a,	// (0x00087141) bg_popup_call2_bubble_pane_g6

0xc082,	// (0x00087149) bg_popup_call2_bubble_pane_g7

0xc08a,	// (0x00087151) bg_popup_call2_bubble_pane_g8

0xc092,	// (0x00087159) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0008a6af) bg_popup_call2_bubble_pane_g

0x3909,	// (0x0007e9d0) aid_cale_week_size_cell_pane

0x3ea9,	// (0x0007ef70) aid_cams_cif_uncrop_pane_ParamLimits

0x3ea9,	// (0x0007ef70) aid_cams_cif_uncrop_pane

0x404a,	// (0x0007f111) aid_cams_size_cell_ParamLimits

0x404a,	// (0x0007f111) aid_cams_size_cell

0x405e,	// (0x0007f125) grid_cams_pane_ParamLimits

0x4073,	// (0x0007f13a) linegrid_cams_pane_ParamLimits

0x417a,	// (0x0007f241) call_video_pane_t1

0x418c,	// (0x0007f253) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0008a39c) call_video_pane_t

0x4493,	// (0x0007f55a) aid_cale_month_size_cell_pane_ParamLimits

0x4493,	// (0x0007f55a) aid_cale_month_size_cell_pane

0xf685,	// (0x0008a74c) smil_status_volume_pane_g

0xec22,	// (0x00089ce9) volume_smil_pane_ParamLimits

0xa4c6,	// (0x0008558d) aid_popup2_width_pane

0x3883,	// (0x0007e94a) cell_qdial_pane_g4_ParamLimits

0x3883,	// (0x0007e94a) cell_qdial_pane_g4

0x4f76,	// (0x0008003d) aid_blid_cardinal_pane_ParamLimits

0x4f82,	// (0x00080049) aid_blid_destination_pane_ParamLimits

0x4f82,	// (0x00080049) aid_blid_destination_pane

0xab89,	// (0x00085c50) bg_popup_call_poc_act_pane_ParamLimits

0xab89,	// (0x00085c50) bg_popup_call_poc_act_pane

0xab89,	// (0x00085c50) bg_popup_call_poc_inact_pane_ParamLimits

0xab89,	// (0x00085c50) bg_popup_call_poc_inact_pane

0xc09a,	// (0x00087161) bg_popup_call_poc_act_pane_g1

0xc0a2,	// (0x00087169) bg_popup_call_poc_act_pane_g2

0xc0aa,	// (0x00087171) bg_popup_call_poc_act_pane_g3

0xc06a,	// (0x00087131) bg_popup_call_poc_act_pane_g4

0xc072,	// (0x00087139) bg_popup_call_poc_act_pane_g5

0xc0b2,	// (0x00087179) bg_popup_call_poc_act_pane_g6

0xc082,	// (0x00087149) bg_popup_call_poc_act_pane_g7

0xc0ba,	// (0x00087181) bg_popup_call_poc_act_pane_g8

0xa92e,	// (0x000859f5) main_usb_pane

0xc253,	// (0x0008731a) popup_cale_lunar_info_window

0x4353,	// (0x0007f41a) im_reading_pane_t1_ParamLimits

0xb0ff,	// (0x000861c6) list_im_pane_ParamLimits

0xb110,	// (0x000861d7) scroll_pane_cp07_ParamLimits

0xa92e,	// (0x000859f5) grid_highlight_pane_cp012

0xab89,	// (0x00085c50) mup_scale_pane_ParamLimits

0x17e9,	// (0x0007c8b0) main_usb_pane_g1_ParamLimits

0x17e9,	// (0x0007c8b0) main_usb_pane_g1

0x5a9a,	// (0x00080b61) main_usb_pane_g2_ParamLimits

0x5a9a,	// (0x00080b61) main_usb_pane_g2

0x0001,

0xf625,	// (0x0008a6ec) main_usb_pane_g_ParamLimits

0xf625,	// (0x0008a6ec) main_usb_pane_g

0x5aae,	// (0x00080b75) main_usb_pane_t1_ParamLimits

0x5aae,	// (0x00080b75) main_usb_pane_t1

0x5ac0,	// (0x00080b87) main_usb_pane_t2_ParamLimits

0x5ac0,	// (0x00080b87) main_usb_pane_t2

0x5ad2,	// (0x00080b99) main_usb_pane_t3_ParamLimits

0x5ad2,	// (0x00080b99) main_usb_pane_t3

0x5ae4,	// (0x00080bab) main_usb_pane_t4_ParamLimits

0x5ae4,	// (0x00080bab) main_usb_pane_t4

0x5af6,	// (0x00080bbd) main_usb_pane_t5_ParamLimits

0x5af6,	// (0x00080bbd) main_usb_pane_t5

0x5b08,	// (0x00080bcf) main_usb_pane_t6_ParamLimits

0x5b08,	// (0x00080bcf) main_usb_pane_t6

0x0005,

0xf62a,	// (0x0008a6f1) main_usb_pane_t_ParamLimits

0x1502,	// (0x0007c5c9) aid_text_placing

0x4f22,	// (0x0007ffe9) main_location2_pane_t1_ParamLimits

0x4f38,	// (0x0007ffff) main_location2_pane_t2_ParamLimits

0x4f4e,	// (0x00080015) main_location2_pane_t3_ParamLimits

0x4f64,	// (0x0008002b) main_location2_pane_t4_ParamLimits

0x4f64,	// (0x0008002b) main_location2_pane_t4

0xf436,	// (0x0008a4fd) main_location2_pane_t_ParamLimits

0xabc5,	// (0x00085c8c) find_pinb_pane_g2_ParamLimits

0xabc5,	// (0x00085c8c) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0008a24b) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0008a24b) find_pinb_pane_g

0xabd1,	// (0x00085c98) find_pinb_pane_t1_ParamLimits

0xabe3,	// (0x00085caa) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0008a250) find_pinb_pane_t_ParamLimits

0xa92e,	// (0x000859f5) main_call3_pane

0x47cf,	// (0x0007f896) cale_month_day_heading_pane_t1_ParamLimits

0x482d,	// (0x0007f8f4) cale_month_day_heading_pane_t2_ParamLimits

0x4892,	// (0x0007f959) cale_month_day_heading_pane_t3_ParamLimits

0x48f7,	// (0x0007f9be) cale_month_day_heading_pane_t4_ParamLimits

0x495c,	// (0x0007fa23) cale_month_day_heading_pane_t5_ParamLimits

0x49c1,	// (0x0007fa88) cale_month_day_heading_pane_t6_ParamLimits

0x4a26,	// (0x0007faed) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0008a3d4) cale_month_day_heading_pane_t_ParamLimits

0x0fea,	// (0x0007c0b1) smil_status_volume_pane

0x5623,	// (0x000806ea) postcard_address_pane_ParamLimits

0x5623,	// (0x000806ea) postcard_address_pane

0x5635,	// (0x000806fc) postcard_message_pane_ParamLimits

0x5635,	// (0x000806fc) postcard_message_pane

0x5a78,	// (0x00080b3f) call2_cli_visual_pane_t1_ParamLimits

0x5a78,	// (0x00080b3f) call2_cli_visual_pane_t1

0x61d6,	// (0x0008129d) postcard_message_pane_t1_ParamLimits

0x61d6,	// (0x0008129d) postcard_message_pane_t1

0x61bf,	// (0x00081286) postcard_address_pane_t1_ParamLimits

0x61bf,	// (0x00081286) postcard_address_pane_t1

0x61ad,	// (0x00081274) popup_call3_audio_in_window_ParamLimits

0x61ad,	// (0x00081274) popup_call3_audio_in_window

0x603c,	// (0x00081103) bg_popup_call3_in_pane_ParamLimits

0x603c,	// (0x00081103) bg_popup_call3_in_pane

0x60ae,	// (0x00081175) popup_call3_audio_in_window_g1_ParamLimits

0x60ae,	// (0x00081175) popup_call3_audio_in_window_g1

0x60ce,	// (0x00081195) popup_call3_audio_in_window_g2_ParamLimits

0x60ce,	// (0x00081195) popup_call3_audio_in_window_g2

0x60ee,	// (0x000811b5) popup_call3_audio_in_window_g3_ParamLimits

0x60ee,	// (0x000811b5) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x0008a753) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x0008a753) popup_call3_audio_in_window_g

0x611f,	// (0x000811e6) popup_call3_audio_in_window_t1_ParamLimits

0x611f,	// (0x000811e6) popup_call3_audio_in_window_t1

0x615d,	// (0x00081224) popup_call3_audio_in_window_t2_ParamLimits

0x615d,	// (0x00081224) popup_call3_audio_in_window_t2

0x619b,	// (0x00081262) popup_call3_audio_in_window_t3_ParamLimits

0x619b,	// (0x00081262) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x0008a75c) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x0008a75c) popup_call3_audio_in_window_t

0x163e,	// (0x0007c705) bg_popup_call3_rect_pane

0xc012,	// (0x000870d9) bg_popup_call3_rect_pane_g1

0xadcf,	// (0x00085e96) bg_popup_call3_rect_pane_g2

0xc01a,	// (0x000870e1) bg_popup_call3_rect_pane_g3

0xc022,	// (0x000870e9) bg_popup_call3_rect_pane_g4

0xc02a,	// (0x000870f1) bg_popup_call3_rect_pane_g5

0xc032,	// (0x000870f9) bg_popup_call3_rect_pane_g6

0xc03a,	// (0x00087101) bg_popup_call3_rect_pane_g7

0x5280,	// (0x00080347) mup_visualizer_osc_pane

0x16fd,	// (0x0007c7c4) mup_visualizer_spec_pane

0x606c,	// (0x00081133) call3_video_qcif_pane_ParamLimits

0x606c,	// (0x00081133) call3_video_qcif_pane

0x607d,	// (0x00081144) call3_video_qcif_uncrop_pane_ParamLimits

0x607d,	// (0x00081144) call3_video_qcif_uncrop_pane

0x6089,	// (0x00081150) call3_video_subqcif_pane_ParamLimits

0x6089,	// (0x00081150) call3_video_subqcif_pane

0x609d,	// (0x00081164) call3_video_subqcif_uncrop_pane_ParamLimits

0x609d,	// (0x00081164) call3_video_subqcif_uncrop_pane

0x610e,	// (0x000811d5) popup_call3_audio_in_window_g4_ParamLimits

0x610e,	// (0x000811d5) popup_call3_audio_in_window_g4

0x602b,	// (0x000810f2) mup_spec_half_pane

0x6034,	// (0x000810fb) mup_spec_half_pane_cp

0xc2e6,	// (0x000873ad) mup_osc_middle_pane

0xc2ef,	// (0x000873b6) mup_visualizer_osc_pane_g1

0x600c,	// (0x000810d3) mup_spec_bar_pane_ParamLimits

0x600c,	// (0x000810d3) mup_spec_bar_pane

0xc2d3,	// (0x0008739a) mup_spec_bar_pane_g1

0xc2dd,	// (0x000873a4) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0008a747) mup_spec_bar_pane_g

0x3909,	// (0x0007e9d0) aid_cale_week_size_cell_pane_ParamLimits

0x391c,	// (0x0007e9e3) bg_cale_heading_pane_ParamLimits

0xae6f,	// (0x00085f36) bg_cale_pane_cp01_ParamLimits

0x3930,	// (0x0007e9f7) cale_week_corner_pane_ParamLimits

0x3946,	// (0x0007ea0d) cale_week_day_heading_pane_ParamLimits

0x395a,	// (0x0007ea21) cale_week_scroll_pane_g1_ParamLimits

0x396b,	// (0x0007ea32) cale_week_scroll_pane_g2_ParamLimits

0x397c,	// (0x0007ea43) cale_week_scroll_pane_g3_ParamLimits

0x398d,	// (0x0007ea54) cale_week_scroll_pane_g4_ParamLimits

0x399e,	// (0x0007ea65) cale_week_scroll_pane_g5_ParamLimits

0x39af,	// (0x0007ea76) cale_week_scroll_pane_g6_ParamLimits

0x39c0,	// (0x0007ea87) cale_week_scroll_pane_g7_ParamLimits

0x39d1,	// (0x0007ea98) cale_week_scroll_pane_g8_ParamLimits

0x39e4,	// (0x0007eaab) cale_week_scroll_pane_g9_ParamLimits

0x39f5,	// (0x0007eabc) cale_week_scroll_pane_g10_ParamLimits

0x3a06,	// (0x0007eacd) cale_week_scroll_pane_g11_ParamLimits

0x3a17,	// (0x0007eade) cale_week_scroll_pane_g12_ParamLimits

0x3a28,	// (0x0007eaef) cale_week_scroll_pane_g13_ParamLimits

0x3a39,	// (0x0007eb00) cale_week_scroll_pane_g14_ParamLimits

0x3a4a,	// (0x0007eb11) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0008a2dc) cale_week_scroll_pane_g_ParamLimits

0x3a5b,	// (0x0007eb22) cale_week_time_pane_ParamLimits

0x3a6e,	// (0x0007eb35) grid_cale_week_pane_ParamLimits

0xae88,	// (0x00085f4f) listscroll_cale_week_pane_t1

0x3a81,	// (0x0007eb48) scroll_pane_cp08_ParamLimits

0x44d4,	// (0x0007f59b) cale_month_corner_pane_ParamLimits

0x0fc0,	// (0x0007c087) cale_month_pane_t1

0x478e,	// (0x0007f855) cale_month_week_pane_ParamLimits

0x4d69,	// (0x0007fe30) popup_call_status_window_g1_ParamLimits

0x4d7d,	// (0x0007fe44) popup_call_status_window_g2_ParamLimits

0x4d91,	// (0x0007fe58) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0008a484) popup_call_status_window_g_ParamLimits

0x1348,	// (0x0007c40f) aid_call2_pane

0x5481,	// (0x00080548) msg_header_pane_g1

0x5623,	// (0x000806ea) postcard_address2_pane_ParamLimits

0x5623,	// (0x000806ea) postcard_address2_pane

0x5635,	// (0x000806fc) postcard_message2_pane_ParamLimits

0x5635,	// (0x000806fc) postcard_message2_pane

0x5fc8,	// (0x0008108f) message2_row_pane_ParamLimits

0x5fc8,	// (0x0008108f) message2_row_pane

0x5fe2,	// (0x000810a9) address2_row_pane_ParamLimits

0x5fe2,	// (0x000810a9) address2_row_pane

0xc2a1,	// (0x00087368) postcard_message2_row_pane_g1

0xc2a9,	// (0x00087370) postcard_message2_row_pane_t1

0xc2a1,	// (0x00087368) address2_row_pane_g1

0xc2a9,	// (0x00087370) address2_row_pane_t1

0x3db1,	// (0x0007ee78) aid_size_cell_vorec

0xa92e,	// (0x000859f5) main_rss_pane

0x5ff5,	// (0x000810bc) rss_list_single_pane_ParamLimits

0x5ff5,	// (0x000810bc) rss_list_single_pane

0xc2b7,	// (0x0008737e) rss_list_single_pane_t1

0xc2c5,	// (0x0008738c) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x0008a742) rss_list_single_pane_t

0xa92e,	// (0x000859f5) main_camera2_pane

0xa92e,	// (0x000859f5) main_video2_pane

0x622f,	// (0x000812f6) cams_zoom_pane_cp2_ParamLimits

0x622f,	// (0x000812f6) cams_zoom_pane_cp2

0x6246,	// (0x0008130d) image2_vga_pane_ParamLimits

0x6246,	// (0x0008130d) image2_vga_pane

0x627c,	// (0x00081343) main_camera2_pane_g1_ParamLimits

0x627c,	// (0x00081343) main_camera2_pane_g1

0x629c,	// (0x00081363) main_camera2_pane_g2_ParamLimits

0x629c,	// (0x00081363) main_camera2_pane_g2

0x62b3,	// (0x0008137a) main_camera2_pane_g3_ParamLimits

0x62b3,	// (0x0008137a) main_camera2_pane_g3

0x62ca,	// (0x00081391) main_camera2_pane_g4_ParamLimits

0x62ca,	// (0x00081391) main_camera2_pane_g4

0x62e1,	// (0x000813a8) main_camera2_pane_g5_ParamLimits

0x62e1,	// (0x000813a8) main_camera2_pane_g5

0x62f8,	// (0x000813bf) main_camera2_pane_g6_ParamLimits

0x62f8,	// (0x000813bf) main_camera2_pane_g6

0x630f,	// (0x000813d6) main_camera2_pane_g7_ParamLimits

0x630f,	// (0x000813d6) main_camera2_pane_g7

0x6326,	// (0x000813ed) main_camera2_pane_g8_ParamLimits

0x6326,	// (0x000813ed) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x0008a763) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x0008a763) main_camera2_pane_g

0x6354,	// (0x0008141b) main_camera2_pane_t1_ParamLimits

0x6354,	// (0x0008141b) main_camera2_pane_t1

0x6383,	// (0x0008144a) main_camera2_pane_t2_ParamLimits

0x6383,	// (0x0008144a) main_camera2_pane_t2

0x63a0,	// (0x00081467) main_camera2_pane_t3_ParamLimits

0x63a0,	// (0x00081467) main_camera2_pane_t3

0x63ec,	// (0x000814b3) main_camera2_pane_t4_ParamLimits

0x63ec,	// (0x000814b3) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x0008a776) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x0008a776) main_camera2_pane_t

0x6461,	// (0x00081528) cams_zoom_pane_cp4_ParamLimits

0x6461,	// (0x00081528) cams_zoom_pane_cp4

0x6477,	// (0x0008153e) image2_cif_pane_ParamLimits

0x6477,	// (0x0008153e) image2_cif_pane

0x649a,	// (0x00081561) image2_subqcif_pane_ParamLimits

0x649a,	// (0x00081561) image2_subqcif_pane

0x64b0,	// (0x00081577) main_video2_pane_g1_ParamLimits

0x64b0,	// (0x00081577) main_video2_pane_g1

0x64ca,	// (0x00081591) main_video2_pane_g2_ParamLimits

0x64ca,	// (0x00081591) main_video2_pane_g2

0x64e0,	// (0x000815a7) main_video2_pane_g3_ParamLimits

0x64e0,	// (0x000815a7) main_video2_pane_g3

0x64f6,	// (0x000815bd) main_video2_pane_g4_ParamLimits

0x64f6,	// (0x000815bd) main_video2_pane_g4

0x650c,	// (0x000815d3) main_video2_pane_g5_ParamLimits

0x650c,	// (0x000815d3) main_video2_pane_g5

0x6522,	// (0x000815e9) main_video2_pane_g6_ParamLimits

0x6522,	// (0x000815e9) main_video2_pane_g6

0x0005,

0xf6be,	// (0x0008a785) main_video2_pane_g_ParamLimits

0xf6be,	// (0x0008a785) main_video2_pane_g

0x653c,	// (0x00081603) main_video2_pane_t1_ParamLimits

0x653c,	// (0x00081603) main_video2_pane_t1

0x6560,	// (0x00081627) main_video2_pane_t2_ParamLimits

0x6560,	// (0x00081627) main_video2_pane_t2

0x65aa,	// (0x00081671) main_video2_pane_t3_ParamLimits

0x65aa,	// (0x00081671) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0008a792) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0008a792) main_video2_pane_t

0x5bb7,	// (0x00080c7e) call_muted_g2

0x0001,

0xf66d,	// (0x0008a734) call_muted_g

0xa92e,	// (0x000859f5) main_mup2_pane

0x65ec,	// (0x000816b3) main_mup2_pane_g1_ParamLimits

0x65ec,	// (0x000816b3) main_mup2_pane_g1

0x65f8,	// (0x000816bf) main_mup2_pane_g2_ParamLimits

0x65f8,	// (0x000816bf) main_mup2_pane_g2

0xec8b,	// (0x00089d52) main_mup_pane_g13_cp1

0xec93,	// (0x00089d5a) mup_volume_pane_cp1

0x6614,	// (0x000816db) main_mup2_pane_g4_ParamLimits

0x6614,	// (0x000816db) main_mup2_pane_g4

0x6624,	// (0x000816eb) main_mup2_pane_g5_ParamLimits

0x6624,	// (0x000816eb) main_mup2_pane_g5

0x6634,	// (0x000816fb) main_mup2_pane_g6_ParamLimits

0x6634,	// (0x000816fb) main_mup2_pane_g6

0x6644,	// (0x0008170b) main_mup2_pane_g7_ParamLimits

0x6644,	// (0x0008170b) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x0008a799) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x0008a799) main_mup2_pane_g

0x665c,	// (0x00081723) main_mup2_pane_t1_ParamLimits

0x665c,	// (0x00081723) main_mup2_pane_t1

0x6672,	// (0x00081739) main_mup2_pane_t2_ParamLimits

0x6672,	// (0x00081739) main_mup2_pane_t2

0x6688,	// (0x0008174f) main_mup2_pane_t3_ParamLimits

0x6688,	// (0x0008174f) main_mup2_pane_t3

0x669e,	// (0x00081765) main_mup2_pane_t4_ParamLimits

0x669e,	// (0x00081765) main_mup2_pane_t4

0x66b6,	// (0x0008177d) main_mup2_pane_t5_ParamLimits

0x66b6,	// (0x0008177d) main_mup2_pane_t5

0x66ce,	// (0x00081795) main_mup2_pane_t6_ParamLimits

0x66ce,	// (0x00081795) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x0008a7a8) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x0008a7a8) main_mup2_pane_t

0x66fe,	// (0x000817c5) mup2_visualizer_pane_ParamLimits

0x66fe,	// (0x000817c5) mup2_visualizer_pane

0x6729,	// (0x000817f0) mup_progress_pane_cp_ParamLimits

0x6729,	// (0x000817f0) mup_progress_pane_cp

0xec76,	// (0x00089d3d) mup_volume_pane_cp_ParamLimits

0xec76,	// (0x00089d3d) mup_volume_pane_cp

0x673d,	// (0x00081804) mup2_visualizer_pane_g1_ParamLimits

0x673d,	// (0x00081804) mup2_visualizer_pane_g1

0xc326,	// (0x000873ed) mup2_visualizer_pane_g2_ParamLimits

0xc326,	// (0x000873ed) mup2_visualizer_pane_g2

0x6752,	// (0x00081819) mup2_visualizer_pane_g3_ParamLimits

0x6752,	// (0x00081819) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x0008a7b5) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x0008a7b5) mup2_visualizer_pane_g

0x1924,	// (0x0007c9eb) aid_size_cell_fmradio

0x5d13,	// (0x00080dda) aid_height_parent_landcape

0x0e27,	// (0x0007beee) wml_content_pane_cp

0x0e2f,	// (0x0007bef6) wml_tabs_pane

0x0e38,	// (0x0007beff) popup_wml_miniature_window

0x0e40,	// (0x0007bf07) scroll_pane_cp021

0x0e54,	// (0x0007bf1b) wml_content_pane_comp8

0xa92e,	// (0x000859f5) bg_popup_sub_pane_cp05

0xc344,	// (0x0008740b) popup_wml_miniature_window_g1

0xc34c,	// (0x00087413) wml_miniature_view_pane

0x675e,	// (0x00081825) aid_size_wml_view

0x6766,	// (0x0008182d) wml_miniature_view_pane_g1

0x676f,	// (0x00081836) wml_miniature_view_pane_g2

0x6778,	// (0x0008183f) wml_miniature_view_pane_g3

0x6780,	// (0x00081847) wml_miniature_view_pane_g4

0x6788,	// (0x0008184f) wml_miniature_view_pane_g5

0x6790,	// (0x00081857) wml_miniature_view_pane_g6

0x6798,	// (0x0008185f) wml_miniature_view_pane_g7

0x67a0,	// (0x00081867) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x0008a7bc) wml_miniature_view_pane_g

0xc354,	// (0x0008741b) background_graphic_ParamLimits

0xc354,	// (0x0008741b) background_graphic

0xc360,	// (0x00087427) wml_tabs_2_pane

0xc369,	// (0x00087430) wml_tabs_3_pane_ParamLimits

0xc369,	// (0x00087430) wml_tabs_3_pane

0xc37b,	// (0x00087442) wml_tabs_4_pane_ParamLimits

0xc37b,	// (0x00087442) wml_tabs_4_pane

0xc391,	// (0x00087458) wml_tabs_5_pane_ParamLimits

0xc391,	// (0x00087458) wml_tabs_5_pane

0xc3ab,	// (0x00087472) wml_tabs_pane_g2_ParamLimits

0xc3ab,	// (0x00087472) wml_tabs_pane_g2

0xc3bf,	// (0x00087486) wml_tabs_pane_g3_ParamLimits

0xc3bf,	// (0x00087486) wml_tabs_pane_g3

0x67a8,	// (0x0008186f) wml_tabs_2_active_pane_ParamLimits

0x67a8,	// (0x0008186f) wml_tabs_2_active_pane

0x67b8,	// (0x0008187f) wml_tabs_2_passive_pane_ParamLimits

0x67b8,	// (0x0008187f) wml_tabs_2_passive_pane

0x67c8,	// (0x0008188f) wml_tabs_3_active_pane_cp_ParamLimits

0x67c8,	// (0x0008188f) wml_tabs_3_active_pane_cp

0x67d9,	// (0x000818a0) wml_tabs_3_passive_pane_ParamLimits

0x67d9,	// (0x000818a0) wml_tabs_3_passive_pane

0x67ea,	// (0x000818b1) wml_tabs_3_passive_pane_cp_ParamLimits

0x67ea,	// (0x000818b1) wml_tabs_3_passive_pane_cp

0x67fb,	// (0x000818c2) tabs_4_active_pane

0x6803,	// (0x000818ca) tabs_4_passive_pane

0x680b,	// (0x000818d2) tabs_4_passive_pane_cp

0x6813,	// (0x000818da) tabs_4_passive_pane_cp2

0x5a92,	// (0x00080b59) aid_height_text

0x5256,	// (0x0008031d) mup_volume_cont_pane_ParamLimits

0x5256,	// (0x0008031d) mup_volume_cont_pane

0x3593,	// (0x0007e65a) aid_size_cell_pinb

0x359d,	// (0x0007e664) aid_size_list_pinb

0x6715,	// (0x000817dc) mup2_volume_cont_pane_ParamLimits

0x6715,	// (0x000817dc) mup2_volume_cont_pane

0xec62,	// (0x00089d29) mup2_volume_cont_pane_g1_ParamLimits

0xec62,	// (0x00089d29) mup2_volume_cont_pane_g1

0x32c4,	// (0x0007e38b) aid_size_cell_touch_ParamLimits

0x32c4,	// (0x0007e38b) aid_size_cell_touch

0x349b,	// (0x0007e562) touch_pane_ParamLimits

0x349b,	// (0x0007e562) touch_pane

0xa4b4,	// (0x0008557b) main_rss2_pane

0xc3dc,	// (0x000874a3) listscroll_rss2_pane

0xc3e5,	// (0x000874ac) rss2_navigation_pane

0xc3ed,	// (0x000874b4) list_rss2_pane

0x147f,	// (0x0007c546) scroll_pane_cp22

0xc3f5,	// (0x000874bc) rss2_navigation_pane_g1

0xc3fe,	// (0x000874c5) rss2_navigation_pane_g2

0xc406,	// (0x000874cd) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x0008a7cd) rss2_navigation_pane_g

0xc40e,	// (0x000874d5) rss2_navigation_pane_t1

0x681b,	// (0x000818e2) rss2_list_single_pane_ParamLimits

0x681b,	// (0x000818e2) rss2_list_single_pane

0xc41c,	// (0x000874e3) rss2_list_single_pane_t2

0xc42a,	// (0x000874f1) rss2_list_single_pane_t3_ParamLimits

0xc42a,	// (0x000874f1) rss2_list_single_pane_t3

0xc447,	// (0x0008750e) rss2_list_single_pane_t4

0x4bf0,	// (0x0007fcb7) smil_status_pane_g1

0xa50f,	// (0x000855d6) main_image2_pane_ParamLimits

0xa50f,	// (0x000855d6) main_image2_pane

0x633d,	// (0x00081404) main_camera2_pane_g9_ParamLimits

0x633d,	// (0x00081404) main_camera2_pane_g9

0x642f,	// (0x000814f6) main_camera2_pane_t5_ParamLimits

0x642f,	// (0x000814f6) main_camera2_pane_t5

0xec37,	// (0x00089cfe) main_camera2_pane_t6_ParamLimits

0xec37,	// (0x00089cfe) main_camera2_pane_t6

0x682f,	// (0x000818f6) main_image2_pane_g1_ParamLimits

0x682f,	// (0x000818f6) main_image2_pane_g1

0x584a,	// (0x00080911) smil2_video_pane_ParamLimits

0x584a,	// (0x00080911) smil2_video_pane

0xa4de,	// (0x000855a5) aid_zoom_text_primary_cp

0xa507,	// (0x000855ce) popup_preview_fixed_window

0xb0f7,	// (0x000861be) im_reading_pane_g1

0x6223,	// (0x000812ea) cams2_bc_adjust_pane_cp_ParamLimits

0x6223,	// (0x000812ea) cams2_bc_adjust_pane_cp

0x6455,	// (0x0008151c) cams2_bc_adjust_pane_ParamLimits

0x6455,	// (0x0008151c) cams2_bc_adjust_pane

0xc455,	// (0x0008751c) cams2_bc_adjust_pane_g1

0xec9b,	// (0x00089d62) cams2_slider_pane

0xeca4,	// (0x00089d6b) cams2_slider_pane_g1

0xecad,	// (0x00089d74) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x0008a7d4) cams2_slider_pane_g

0x367d,	// (0x0007e744) calc_display_pane_ParamLimits

0x3699,	// (0x0007e760) calc_paper_pane_ParamLimits

0x36ba,	// (0x0007e781) grid_calc_pane_ParamLimits

0xeba4,	// (0x00089c6b) popup_clock_digital_window_t1_ParamLimits

0x18c1,	// (0x0007c988) main_image_pane_t1

0x365f,	// (0x0007e726) aid_size_cell_calc_ParamLimits

0x365f,	// (0x0007e726) aid_size_cell_calc

0x5d43,	// (0x00080e0a) popup_blid_sat_info2_window_ParamLimits

0x5d43,	// (0x00080e0a) popup_blid_sat_info2_window

0xc465,	// (0x0008752c) aid_size_cell_blid

0xc46d,	// (0x00087534) bg_popup_window_pane_cp07

0xc490,	// (0x00087557) grid_popup_blid_pane

0xc498,	// (0x0008755f) heading_pane_cp05_ParamLimits

0xc498,	// (0x0008755f) heading_pane_cp05

0xc560,	// (0x00087627) cell_popup_blid_pane_ParamLimits

0xc560,	// (0x00087627) cell_popup_blid_pane

0xc580,	// (0x00087647) cell_popup_blid_pane_g1

0xc588,	// (0x0008764f) cell_popup_blid_pane_t1

0x66e8,	// (0x000817af) mup2_indicator_pane_ParamLimits

0x66e8,	// (0x000817af) mup2_indicator_pane

0x163e,	// (0x0007c705) mup2_visualizer_osc_pane

0xc332,	// (0x000873f9) mup2_visualizer_spec_pane_ParamLimits

0xc332,	// (0x000873f9) mup2_visualizer_spec_pane

0x6843,	// (0x0008190a) mup2_spec_half_pane

0x684c,	// (0x00081913) mup2_spec_half_pane_cp

0x6854,	// (0x0008191b) mup2_spec_bar_pane_ParamLimits

0x6854,	// (0x0008191b) mup2_spec_bar_pane

0xc2d3,	// (0x0008739a) mup2_spec_bar_pane_g1

0xc2dd,	// (0x000873a4) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0008a747) mup2_spec_bar_pane_g

0x6873,	// (0x0008193a) mup2_osc_middle_pane

0xc2ef,	// (0x000873b6) mup2_visualizer_osc_pane_g1

0xa53d,	// (0x00085604) popup_number_entry_window_t1_ParamLimits

0xa550,	// (0x00085617) popup_number_entry_window_t2_ParamLimits

0xa562,	// (0x00085629) popup_number_entry_window_t3_ParamLimits

0x34e3,	// (0x0007e5aa) popup_number_entry_window_t5_ParamLimits

0x34e3,	// (0x0007e5aa) popup_number_entry_window_t5

0xf12f,	// (0x0008a1f6) popup_number_entry_window_t_ParamLimits

0xa574,	// (0x0008563b) text_title_cp2_ParamLimits

0xebe3,	// (0x00089caa) aid_hotspot_pointer_text2_pane

0xec09,	// (0x00089cd0) main_viewer_pane_g9_ParamLimits

0xec09,	// (0x00089cd0) main_viewer_pane_g9

0x0fc0,	// (0x0007c087) cale_month_pane_t1_ParamLimits

0x0ffd,	// (0x0007c0c4) bg_cale_pane_ParamLimits

0x1015,	// (0x0007c0dc) list_cale_pane_ParamLimits

0xae88,	// (0x00085f4f) listscroll_cale_day_pane_t1

0x1026,	// (0x0007c0ed) scroll_pane_cp09_ParamLimits

0x5288,	// (0x0008034f) main_mup_eq_pane_t1_ParamLimits

0x5288,	// (0x0008034f) main_mup_eq_pane_t1

0x52a0,	// (0x00080367) main_mup_eq_pane_t2_ParamLimits

0x52a0,	// (0x00080367) main_mup_eq_pane_t2

0x52b6,	// (0x0008037d) main_mup_eq_pane_t3_ParamLimits

0x52b6,	// (0x0008037d) main_mup_eq_pane_t3

0x52cc,	// (0x00080393) main_mup_eq_pane_t4_ParamLimits

0x52cc,	// (0x00080393) main_mup_eq_pane_t4

0x52e2,	// (0x000803a9) main_mup_eq_pane_t5_ParamLimits

0x52e2,	// (0x000803a9) main_mup_eq_pane_t5

0x52f8,	// (0x000803bf) main_mup_eq_pane_t6_ParamLimits

0x52f8,	// (0x000803bf) main_mup_eq_pane_t6

0x530a,	// (0x000803d1) main_mup_eq_pane_t7_ParamLimits

0x530a,	// (0x000803d1) main_mup_eq_pane_t7

0x531c,	// (0x000803e3) main_mup_eq_pane_t8_ParamLimits

0x531c,	// (0x000803e3) main_mup_eq_pane_t8

0x532e,	// (0x000803f5) main_mup_eq_pane_t9_ParamLimits

0x532e,	// (0x000803f5) main_mup_eq_pane_t9

0x5344,	// (0x0008040b) main_mup_eq_pane_t10_ParamLimits

0x5344,	// (0x0008040b) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0008a583) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0008a583) main_mup_eq_pane_t

0x53d7,	// (0x0008049e) mup_equalizer_pane_cp5_ParamLimits

0x53e9,	// (0x000804b0) mup_equalizer_pane_cp6_ParamLimits

0x53fb,	// (0x000804c2) mup_equalizer_pane_cp7_ParamLimits

0xa4b4,	// (0x0008557b) main_gallery_pane

0xc2f8,	// (0x000873bf) smil2_volume_pane

0xc300,	// (0x000873c7) smil_status_volume_pane_g1_ParamLimits

0xc313,	// (0x000873da) smil_status_volume_pane_g2_ParamLimits

0xec15,	// (0x00089cdc) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x0008a74c) smil_status_volume_pane_g_ParamLimits

0xc46d,	// (0x00087534) bg_popup_window_pane_cp07_ParamLimits

0xc47b,	// (0x00087542) blid_firmament_pane

0x687c,	// (0x00081943) aid_size_cell_gallery_ParamLimits

0x687c,	// (0x00081943) aid_size_cell_gallery

0x6892,	// (0x00081959) grid_gallery_pane_ParamLimits

0x6892,	// (0x00081959) grid_gallery_pane

0x68a6,	// (0x0008196d) cell_gallery_pane_ParamLimits

0x68a6,	// (0x0008196d) cell_gallery_pane

0xc596,	// (0x0008765d) bg_cell_gallery_focus_pane_ParamLimits

0xc596,	// (0x0008765d) bg_cell_gallery_focus_pane

0xc5a8,	// (0x0008766f) cell_gallery_pane_g1_ParamLimits

0xc5a8,	// (0x0008766f) cell_gallery_pane_g1

0x68ed,	// (0x000819b4) cell_gallery_pane_g2_ParamLimits

0x68ed,	// (0x000819b4) cell_gallery_pane_g2

0x68fa,	// (0x000819c1) cell_gallery_pane_g3_ParamLimits

0x68fa,	// (0x000819c1) cell_gallery_pane_g3

0xc5b4,	// (0x0008767b) cell_gallery_pane_g4_ParamLimits

0xc5b4,	// (0x0008767b) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x0008a7fa) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x0008a7fa) cell_gallery_pane_g

0xc5c0,	// (0x00087687) bg_cell_gallery_focus_pane_g1

0xc5c8,	// (0x0008768f) bg_cell_gallery_focus_pane_g2

0xc5d0,	// (0x00087697) bg_cell_gallery_focus_pane_g3

0xc5d8,	// (0x0008769f) bg_cell_gallery_focus_pane_g4

0xc5e0,	// (0x000876a7) bg_cell_gallery_focus_pane_g5

0xc5e8,	// (0x000876af) bg_cell_gallery_focus_pane_g6

0xc5f0,	// (0x000876b7) bg_cell_gallery_focus_pane_g7

0xc5f8,	// (0x000876bf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0008a803) bg_cell_gallery_focus_pane_g

0xc600,	// (0x000876c7) aid_firma_cardinal

0xc614,	// (0x000876db) blid_firmament_pane_t1

0xc62b,	// (0x000876f2) blid_firmament_pane_t2

0xc642,	// (0x00087709) blid_firmament_pane_t3

0xc659,	// (0x00087720) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0008a814) blid_firmament_pane_t

0xc670,	// (0x00087737) blid_sat_info_pane

0xc680,	// (0x00087747) blid_sat_info_pane_g1

0xc680,	// (0x00087747) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x0008a81d) blid_sat_info_pane_g

0xc68a,	// (0x00087751) blid_sat_info_pane_t1

0xc698,	// (0x0008775f) smil2_volume_content_pane

0xc6a1,	// (0x00087768) smil2_volume_pane_g1

0xc6a9,	// (0x00087770) smil2_volume_content_pane_g1

0xc6b2,	// (0x00087779) smil2_volume_content_pane_g2

0xc6bb,	// (0x00087782) smil2_volume_content_pane_g3

0xc6c4,	// (0x0008778b) smil2_volume_content_pane_g4

0xc6cd,	// (0x00087794) smil2_volume_content_pane_g5

0xc6d6,	// (0x0008779d) smil2_volume_content_pane_g6

0xc6df,	// (0x000877a6) smil2_volume_content_pane_g7

0xc6e8,	// (0x000877af) smil2_volume_content_pane_g8

0xc6f1,	// (0x000877b8) smil2_volume_content_pane_g9

0xc6fa,	// (0x000877c1) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0008a822) smil2_volume_content_pane_g

0x3ad7,	// (0x0007eb9e) cale_week_day_heading_pane_t1_ParamLimits

0x3b01,	// (0x0007ebc8) cale_week_day_heading_pane_t2_ParamLimits

0x3b2b,	// (0x0007ebf2) cale_week_day_heading_pane_t3_ParamLimits

0x3b55,	// (0x0007ec1c) cale_week_day_heading_pane_t4_ParamLimits

0x3b7f,	// (0x0007ec46) cale_week_day_heading_pane_t5_ParamLimits

0x3ba9,	// (0x0007ec70) cale_week_day_heading_pane_t6_ParamLimits

0x3bd3,	// (0x0007ec9a) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0008a2fb) cale_week_day_heading_pane_t_ParamLimits

0xae9a,	// (0x00085f61) bg_cale_side_pane_ParamLimits

0x3bfd,	// (0x0007ecc4) cale_week_time_pane_t1_ParamLimits

0x3c29,	// (0x0007ecf0) cale_week_time_pane_t2_ParamLimits

0x3c55,	// (0x0007ed1c) cale_week_time_pane_t3_ParamLimits

0x3c81,	// (0x0007ed48) cale_week_time_pane_t4_ParamLimits

0x3cad,	// (0x0007ed74) cale_week_time_pane_t5_ParamLimits

0x3cd9,	// (0x0007eda0) cale_week_time_pane_t6_ParamLimits

0x3d05,	// (0x0007edcc) cale_week_time_pane_t7_ParamLimits

0x3d31,	// (0x0007edf8) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0008a30a) cale_week_time_pane_t_ParamLimits

0x3d5d,	// (0x0007ee24) cell_cale_week_pane_g2_ParamLimits

0xae9a,	// (0x00085f61) bg_cale_side_pane_cp01_ParamLimits

0x4a93,	// (0x0007fb5a) cale_month_week_pane_t1_ParamLimits

0x4aaa,	// (0x0007fb71) cale_month_week_pane_t2_ParamLimits

0x4ac1,	// (0x0007fb88) cale_month_week_pane_t3_ParamLimits

0x4ad8,	// (0x0007fb9f) cale_month_week_pane_t4_ParamLimits

0x4aef,	// (0x0007fbb6) cale_month_week_pane_t5_ParamLimits

0x4b06,	// (0x0007fbcd) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0008a3e3) cale_month_week_pane_t_ParamLimits

0xeb24,	// (0x00089beb) cell_cale_month_pane_g1_ParamLimits

0xa4b4,	// (0x0008557b) main_cale_event_viewer_pane

0xa4b4,	// (0x0008557b) listscroll_cale_event_viewer_pane

0xc703,	// (0x000877ca) list_cale_ev_pane

0xc70b,	// (0x000877d2) scroll_pane_cp023

0x6907,	// (0x000819ce) field_cale_ev_pane_ParamLimits

0x6907,	// (0x000819ce) field_cale_ev_pane

0xc717,	// (0x000877de) field_cale_ev_content_pane_ParamLimits

0xc717,	// (0x000877de) field_cale_ev_content_pane

0xc723,	// (0x000877ea) field_cale_ev_pane_g1_ParamLimits

0xc723,	// (0x000877ea) field_cale_ev_pane_g1

0xc72f,	// (0x000877f6) field_cale_ev_pane_g2_ParamLimits

0xc72f,	// (0x000877f6) field_cale_ev_pane_g2

0xc747,	// (0x0008780e) field_cale_ev_pane_g3_ParamLimits

0xc747,	// (0x0008780e) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x0008a837) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x0008a837) field_cale_ev_pane_g

0xc75f,	// (0x00087826) field_cale_ev_pane_t1_ParamLimits

0xc75f,	// (0x00087826) field_cale_ev_pane_t1

0x6921,	// (0x000819e8) field_cale_ev_content_pane_t1_ParamLimits

0x6921,	// (0x000819e8) field_cale_ev_content_pane_t1

0x17a7,	// (0x0007c86e) bg_button_pane_cp01

0xae60,	// (0x00085f27) listscroll_cale_week_pane_ParamLimits

0x3901,	// (0x0007e9c8) popup_toolbar_window_cp01

0xae88,	// (0x00085f4f) listscroll_cale_week_pane_t1_ParamLimits

0xac84,	// (0x00085d4b) listscroll_cale_day_pane_ParamLimits

0x3901,	// (0x0007e9c8) popup_toolbar_window_cp02

0xae88,	// (0x00085f4f) listscroll_cale_day_pane_t1_ParamLimits

0xae60,	// (0x00085f27) main_cale_month_pane_ParamLimits

0x5f3f,	// (0x00081006) popup_toolbar_window_cp03_ParamLimits

0x5f3f,	// (0x00081006) popup_toolbar_window_cp03

0x5724,	// (0x000807eb) main_image_pane_g2_ParamLimits

0x5724,	// (0x000807eb) main_image_pane_g2

0x5735,	// (0x000807fc) main_image_pane_g3_ParamLimits

0x5735,	// (0x000807fc) main_image_pane_g3

0x0002,

0xf54e,	// (0x0008a615) main_image_pane_g_ParamLimits

0xf54e,	// (0x0008a615) main_image_pane_g

0x18c1,	// (0x0007c988) main_image_pane_t1_ParamLimits

0x5746,	// (0x0008080d) main_image_pane_t2_ParamLimits

0x5746,	// (0x0008080d) main_image_pane_t2

0x5758,	// (0x0008081f) main_image_pane_t3_ParamLimits

0x5758,	// (0x0008081f) main_image_pane_t3

0x5780,	// (0x00080847) main_image_pane_t4_ParamLimits

0x5780,	// (0x00080847) main_image_pane_t4

0x0003,

0xf555,	// (0x0008a61c) main_image_pane_t_ParamLimits

0xf555,	// (0x0008a61c) main_image_pane_t

0x57a0,	// (0x00080867) popup_image_details_window_cp01

0x57a8,	// (0x0008086f) popup_toobar_trans_pane_cp01_ParamLimits

0x57a8,	// (0x0008086f) popup_toobar_trans_pane_cp01

0x5e0c,	// (0x00080ed3) popup_image_details_window_ParamLimits

0x5e0c,	// (0x00080ed3) popup_image_details_window

0xc25b,	// (0x00087322) popup_image_focus_window

0x61f1,	// (0x000812b8) camera2_autofocus_pane_ParamLimits

0x61f1,	// (0x000812b8) camera2_autofocus_pane

0xa4b4,	// (0x0008557b) bg_popup_sub_pane_cp06

0xc776,	// (0x0008783d) popup_image_focus_window_g1

0xc77e,	// (0x00087845) popup_image_focus_window_g2

0xc786,	// (0x0008784d) popup_image_focus_window_g3

0xc78e,	// (0x00087855) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x0008a83e) popup_image_focus_window_g

0xc796,	// (0x0008785d) popup_image_focus_window_t1

0xc7a4,	// (0x0008786b) popup_image_focus_window_t2

0xc7b3,	// (0x0008787a) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x0008a847) popup_image_focus_window_t

0xc7c1,	// (0x00087888) camera2_autofocus_pane_g1

0xa50f,	// (0x000855d6) bg_tb_trans_pane_cp01

0xc7cf,	// (0x00087896) popup_image_details_window_g1

0xc7e2,	// (0x000878a9) popup_image_details_window_g2

0x0002,

0xf792,	// (0x0008a859) popup_image_details_window_g

0xc80b,	// (0x000878d2) popup_image_details_window_t1

0xc81d,	// (0x000878e4) popup_image_details_window_t2

0xc836,	// (0x000878fd) popup_image_details_window_t3

0xc84a,	// (0x00087911) popup_image_details_window_t4

0xc865,	// (0x0008792c) popup_image_details_window_t5

0x0004,

0xf799,	// (0x0008a860) popup_image_details_window_t

0xac48,	// (0x00085d0f) bg_calc_paper_pane_ParamLimits

0xac60,	// (0x00085d27) grid_highlight_pane_cp013

0xac6a,	// (0x00085d31) list_calc_pane_ParamLimits

0xac7c,	// (0x00085d43) scroll_pane_cp024

0xac84,	// (0x00085d4b) bg_calc_display_pane_ParamLimits

0xac90,	// (0x00085d57) calc_display_pane_t1_ParamLimits

0xaca5,	// (0x00085d6c) calc_display_pane_t2_ParamLimits

0xacba,	// (0x00085d81) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0008a27d) calc_display_pane_t_ParamLimits

0x3832,	// (0x0007e8f9) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0008a29a) cell_calc_pane_g

0x383b,	// (0x0007e902) cell_calc_pane_t1

0xad31,	// (0x00085df8) grid_highlight_pane_cp02_ParamLimits

0xad47,	// (0x00085e0e) toolbar_button_pane_cp01_ParamLimits

0xad47,	// (0x00085e0e) toolbar_button_pane_cp01

0x1906,	// (0x0007c9cd) temp_image_control_pane_ParamLimits

0x1906,	// (0x0007c9cd) temp_image_control_pane

0xa50f,	// (0x000855d6) main_mp3_pane

0xc87f,	// (0x00087946) temp_image_control_pane_g1_ParamLimits

0xc87f,	// (0x00087946) temp_image_control_pane_g1

0xc88d,	// (0x00087954) temp_image_control_pane_g2_ParamLimits

0xc88d,	// (0x00087954) temp_image_control_pane_g2

0xc89f,	// (0x00087966) temp_image_control_pane_g3_ParamLimits

0xc89f,	// (0x00087966) temp_image_control_pane_g3

0x696e,	// (0x00081a35) temp_image_control_pane_g4_ParamLimits

0x696e,	// (0x00081a35) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x0008a86b) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x0008a86b) temp_image_control_pane_g

0xc87f,	// (0x00087946) main_mp3_pane_g1

0x697f,	// (0x00081a46) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x0008a874) main_mp3_pane_g

0xc8e2,	// (0x000879a9) main_mp3_pane_t1

0xaf60,	// (0x00086027) main_camera_pane_g8_ParamLimits

0xaf60,	// (0x00086027) main_camera_pane_g8

0x3ff2,	// (0x0007f0b9) main_video_pane_g7_ParamLimits

0x3ff2,	// (0x0007f0b9) main_video_pane_g7

0xec50,	// (0x00089d17) main_camera2_pane_t7_ParamLimits

0xec50,	// (0x00089d17) main_camera2_pane_t7

0xb15d,	// (0x00086224) scroll_pane_cp025_ParamLimits

0xb15d,	// (0x00086224) scroll_pane_cp025

0xb171,	// (0x00086238) scroll_pane_cp026_ParamLimits

0xb171,	// (0x00086238) scroll_pane_cp026

0xb180,	// (0x00086247) wml_content_pane_ParamLimits

0xa4b4,	// (0x0008557b) main_touch_calib_pane

0x6a35,	// (0x00081afc) main_touch_calib_pane_g1

0x6a41,	// (0x00081b08) main_touch_calib_pane_g2

0x6a4d,	// (0x00081b14) main_touch_calib_pane_g3

0x6a59,	// (0x00081b20) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0008a892) main_touch_calib_pane_g

0x6a65,	// (0x00081b2c) main_touch_calib_pane_t1

0x6a7d,	// (0x00081b44) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x0008a89b) main_touch_calib_pane_t

0x1530,	// (0x0007c5f7) mup_progress_pane_cp02

0x154f,	// (0x0007c616) navi_pane_g1

0x15cf,	// (0x0007c696) navi_pane_mp_t3

0xa50f,	// (0x000855d6) main_mp3_pane_ParamLimits

0x5f79,	// (0x00081040) navi_pane_ParamLimits

0xc87f,	// (0x00087946) main_mp3_pane_g1_ParamLimits

0x697f,	// (0x00081a46) main_mp3_pane_g2_ParamLimits

0x698b,	// (0x00081a52) main_mp3_pane_g3_ParamLimits

0x698b,	// (0x00081a52) main_mp3_pane_g3

0x6997,	// (0x00081a5e) main_mp3_pane_g4_ParamLimits

0x6997,	// (0x00081a5e) main_mp3_pane_g4

0xc8af,	// (0x00087976) main_mp3_pane_g5_ParamLimits

0xc8af,	// (0x00087976) main_mp3_pane_g5

0xc8bd,	// (0x00087984) main_mp3_pane_g6_ParamLimits

0xc8bd,	// (0x00087984) main_mp3_pane_g6

0xc8ca,	// (0x00087991) main_mp3_pane_g7_ParamLimits

0xc8ca,	// (0x00087991) main_mp3_pane_g7

0xc8d6,	// (0x0008799d) main_mp3_pane_g8_ParamLimits

0xc8d6,	// (0x0008799d) main_mp3_pane_g8

0xf7ad,	// (0x0008a874) main_mp3_pane_g_ParamLimits

0x69a3,	// (0x00081a6a) main_mp3_pane_t2

0x69b1,	// (0x00081a78) main_mp3_pane_t3

0xc8f0,	// (0x000879b7) main_mp3_pane_t4

0xc8fe,	// (0x000879c5) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x0008a885) main_mp3_pane_t

0xc90c,	// (0x000879d3) mup_progress_pane_cp01

0xa4de,	// (0x000855a5) aid_zoom_text_secondary2

0xc703,	// (0x000877ca) list_cale_ev2_pane

0xc70b,	// (0x000877d2) scroll_pane_cp023_ParamLimits

0x6acb,	// (0x00081b92) field_cale_ev2_pane_ParamLimits

0x6acb,	// (0x00081b92) field_cale_ev2_pane

0xc914,	// (0x000879db) field_cale_ev2_pane_g1_ParamLimits

0xc914,	// (0x000879db) field_cale_ev2_pane_g1

0xc920,	// (0x000879e7) field_cale_ev2_pane_g2_ParamLimits

0xc920,	// (0x000879e7) field_cale_ev2_pane_g2

0xc938,	// (0x000879ff) field_cale_ev2_pane_g3_ParamLimits

0xc938,	// (0x000879ff) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x0008a8a6) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x0008a8a6) field_cale_ev2_pane_g

0xc95c,	// (0x00087a23) field_cale_ev2_pane_t1_ParamLimits

0xc95c,	// (0x00087a23) field_cale_ev2_pane_t1

0xc973,	// (0x00087a3a) field_cale_ev2_pane_t2_ParamLimits

0xc973,	// (0x00087a3a) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x0008a8af) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x0008a8af) field_cale_ev2_pane_t

0x55df,	// (0x000806a6) main_postcard_pane_g5_ParamLimits

0x55df,	// (0x000806a6) main_postcard_pane_g5

0x55f3,	// (0x000806ba) main_postcard_pane_g6_ParamLimits

0x55f3,	// (0x000806ba) main_postcard_pane_g6

0x3dd4,	// (0x0007ee9b) camera2_autofocus_pane_cp_ParamLimits

0x3dd4,	// (0x0007ee9b) camera2_autofocus_pane_cp

0xa50f,	// (0x000855d6) main_mup3_pane

0x6b03,	// (0x00081bca) main_mup3_pane_g1_ParamLimits

0x6b03,	// (0x00081bca) main_mup3_pane_g1

0x6b25,	// (0x00081bec) main_mup3_pane_g2_ParamLimits

0x6b25,	// (0x00081bec) main_mup3_pane_g2

0x6b8d,	// (0x00081c54) main_mup3_pane_g3_ParamLimits

0x6b8d,	// (0x00081c54) main_mup3_pane_g3

0x6bcb,	// (0x00081c92) main_mup3_pane_g4_ParamLimits

0x6bcb,	// (0x00081c92) main_mup3_pane_g4

0x6c09,	// (0x00081cd0) main_mup3_pane_g5_ParamLimits

0x6c09,	// (0x00081cd0) main_mup3_pane_g5

0x6c47,	// (0x00081d0e) main_mup3_pane_g6_ParamLimits

0x6c47,	// (0x00081d0e) main_mup3_pane_g6

0xc988,	// (0x00087a4f) main_mup3_pane_g7_ParamLimits

0xc988,	// (0x00087a4f) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x0008a8bf) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x0008a8bf) main_mup3_pane_g

0x6cbd,	// (0x00081d84) main_mup3_pane_t1_ParamLimits

0x6cbd,	// (0x00081d84) main_mup3_pane_t1

0x6d25,	// (0x00081dec) main_mup3_pane_t2_ParamLimits

0x6d25,	// (0x00081dec) main_mup3_pane_t2

0x6ded,	// (0x00081eb4) main_mup3_pane_t4_ParamLimits

0x6ded,	// (0x00081eb4) main_mup3_pane_t4

0x6e3b,	// (0x00081f02) main_mup3_pane_t5_ParamLimits

0x6e3b,	// (0x00081f02) main_mup3_pane_t5

0x6ee9,	// (0x00081fb0) main_mup3_pane_t6_ParamLimits

0x6ee9,	// (0x00081fb0) main_mup3_pane_t6

0x0005,

0xf809,	// (0x0008a8d0) main_mup3_pane_t_ParamLimits

0xf809,	// (0x0008a8d0) main_mup3_pane_t

0x6f9d,	// (0x00082064) mup3_progress_pane_ParamLimits

0x6f9d,	// (0x00082064) mup3_progress_pane

0x6ff9,	// (0x000820c0) popup_mup3_control_window_ParamLimits

0x6ff9,	// (0x000820c0) popup_mup3_control_window

0xc996,	// (0x00087a5d) popup_mup3_text_window

0x7027,	// (0x000820ee) mup3_progress_pane_t1

0x703d,	// (0x00082104) mup3_progress_pane_t2

0xc99e,	// (0x00087a65) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x0008a8dd) mup3_progress_pane_t

0xc9b5,	// (0x00087a7c) mup_progress_pane_cp03

0xa4b4,	// (0x0008557b) bg_tb_trans_pane_cp04

0x7053,	// (0x0008211a) mup3_volume_pane

0x705b,	// (0x00082122) popup_mup3_control_window_g1

0x7064,	// (0x0008212b) mup3_volume_pane_g1

0x706d,	// (0x00082134) mup3_volume_pane_g2

0x7076,	// (0x0008213d) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x0008a8e4) mup3_volume_pane_g

0xa4b4,	// (0x0008557b) bg_tb_trans_pane_cp03

0xc9c5,	// (0x00087a8c) popup_mup3_text_window_g1

0xc9cd,	// (0x00087a94) popup_mup3_text_window_t1

0xad08,	// (0x00085dcf) list_calc_item_pane_g1_ParamLimits

0xc3d3,	// (0x0008749a) mup_volume_pane_cp_g1

0x6a95,	// (0x00081b5c) main_touch_calib_pane_t3

0x6aa7,	// (0x00081b6e) main_touch_calib_pane_t4

0x6ab9,	// (0x00081b80) main_touch_calib_pane_t5

0xa4be,	// (0x00085585) aid_cell_size_toolbar2

0xa4c6,	// (0x0008558d) aid_popup3_width_pane

0xa4ce,	// (0x00085595) aid_zoom_text_msg_primary

0xaf40,	// (0x00086007) vorec_t7

0xaccc,	// (0x00085d93) bg_calc_paper_pane_g1_ParamLimits

0xacd8,	// (0x00085d9f) bg_calc_paper_pane_g2_ParamLimits

0xace4,	// (0x00085dab) bg_calc_paper_pane_g3_ParamLimits

0xacf0,	// (0x00085db7) bg_calc_paper_pane_g4_ParamLimits

0xacfc,	// (0x00085dc3) bg_calc_paper_pane_g5_ParamLimits

0x37cc,	// (0x0007e893) bg_calc_paper_pane_g6_ParamLimits

0x37db,	// (0x0007e8a2) bg_calc_paper_pane_g7_ParamLimits

0x37ea,	// (0x0007e8b1) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0008a284) bg_calc_paper_pane_g_ParamLimits

0x37f9,	// (0x0007e8c0) calc_bg_paper_pane_g9_ParamLimits

0x3f08,	// (0x0007efcf) image_qvga_pane_ParamLimits

0x3f08,	// (0x0007efcf) image_qvga_pane

0xab89,	// (0x00085c50) bg_popup_sub_pane_cp04_ParamLimits

0x183d,	// (0x0007c904) popup_mup_playback_window_g1_ParamLimits

0x1849,	// (0x0007c910) popup_mup_playback_window_t1_ParamLimits

0x185e,	// (0x0007c925) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0008a610) popup_mup_playback_window_t_ParamLimits

0x6608,	// (0x000816cf) main_mup2_pane_g3_ParamLimits

0x6608,	// (0x000816cf) main_mup2_pane_g3

0x41d5,	// (0x0007f29c) popup_toolbar_window_cp04

0xb413,	// (0x000864da) popup_call2_audio_second_window_g3_ParamLimits

0xb413,	// (0x000864da) popup_call2_audio_second_window_g3

0xb81d,	// (0x000868e4) popup_call2_audio_first_window_g4_ParamLimits

0xb81d,	// (0x000868e4) popup_call2_audio_first_window_g4

0xbe9c,	// (0x00086f63) popup_call2_audio_in_window_g4_ParamLimits

0xbe9c,	// (0x00086f63) popup_call2_audio_in_window_g4

0x5706,	// (0x000807cd) aid_area_sk_bg_cut_ParamLimits

0x5706,	// (0x000807cd) aid_area_sk_bg_cut

0x1873,	// (0x0007c93a) aid_area_sk_bg_cut_2_ParamLimits

0x1873,	// (0x0007c93a) aid_area_sk_bg_cut_2

0x68dd,	// (0x000819a4) aid_placing_details_win

0x68e5,	// (0x000819ac) aid_placing_details_win_2

0xc7c1,	// (0x00087888) camera2_autofocus_pane_g1_ParamLimits

0x344a,	// (0x0007e511) popup_fixed_preview_cale_window_ParamLimits

0x344a,	// (0x0007e511) popup_fixed_preview_cale_window

0x164f,	// (0x0007c716) navi_slider_pane_g3

0x1658,	// (0x0007c71f) navi_slider_pane_g4

0x1661,	// (0x0007c728) navi_slider_pane_g5

0x164f,	// (0x0007c716) navi_slider_pane_g6

0xebca,	// (0x00089c91) navi_slider_pane_g7

0x1774,	// (0x0007c83b) mup_scale_pane_g3

0x177d,	// (0x0007c844) mup_scale_pane_g4

0x1786,	// (0x0007c84d) mup_scale_pane_g5

0x540f,	// (0x000804d6) mup_scale_pane_g6

0x5418,	// (0x000804df) mup_scale_pane_g7

0x164f,	// (0x0007c716) cams2_slider_pane_g3

0xc45d,	// (0x00087524) cams2_slider_pane_g4

0xecb6,	// (0x00089d7d) cams2_slider_pane_g5

0x164f,	// (0x0007c716) cams2_slider_pane_g6

0xecbe,	// (0x00089d85) cams2_slider_pane_g7

0xc680,	// (0x00087747) camera2_autofocus_pane_cp_g1

0xc9db,	// (0x00087aa2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9db,	// (0x00087aa2) bg_popup_preview_window_pane_cp02

0x707f,	// (0x00082146) list_fp_cale_pane_ParamLimits

0x707f,	// (0x00082146) list_fp_cale_pane

0xc9e7,	// (0x00087aae) popup_fixed_preview_cale_window_t1_ParamLimits

0xc9e7,	// (0x00087aae) popup_fixed_preview_cale_window_t1

0x708b,	// (0x00082152) popup_fixed_preview_cale_window_t2_ParamLimits

0x708b,	// (0x00082152) popup_fixed_preview_cale_window_t2

0x70a0,	// (0x00082167) popup_fixed_preview_cale_window_t3_ParamLimits

0x70a0,	// (0x00082167) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x0008a8eb) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x0008a8eb) popup_fixed_preview_cale_window_t

0x70b5,	// (0x0008217c) list_single_fp_cale_pane_ParamLimits

0x70b5,	// (0x0008217c) list_single_fp_cale_pane

0x70c9,	// (0x00082190) list_single_fp_cale_pane_g1_ParamLimits

0x70c9,	// (0x00082190) list_single_fp_cale_pane_g1

0xca05,	// (0x00087acc) list_single_fp_cale_pane_g2_ParamLimits

0xca05,	// (0x00087acc) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x0008a8f2) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x0008a8f2) list_single_fp_cale_pane_g

0x70d5,	// (0x0008219c) list_single_fp_cale_pane_t1_ParamLimits

0x70d5,	// (0x0008219c) list_single_fp_cale_pane_t1

0x70e7,	// (0x000821ae) list_single_fp_cale_pane_t2_ParamLimits

0x70e7,	// (0x000821ae) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x0008a8f9) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x0008a8f9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa4b4,	// (0x0008557b) main_dialer_pane

0x711a,	// (0x000821e1) aid_cell_size_keypad

0x7124,	// (0x000821eb) dialer_ne_pane

0x712c,	// (0x000821f3) grid_dialer_command_1_pane

0x7134,	// (0x000821fb) grid_dialer_command_2_pane

0x713c,	// (0x00082203) grid_dialer_keypad_pane

0x714c,	// (0x00082213) bg_popup_call_pane_cp06_ParamLimits

0x714c,	// (0x00082213) bg_popup_call_pane_cp06

0x7158,	// (0x0008221f) dialer_ne_clear_pane_ParamLimits

0x7158,	// (0x0008221f) dialer_ne_clear_pane

0xca1e,	// (0x00087ae5) dialer_ne_pane_g1

0xca26,	// (0x00087aed) dialer_ne_pane_t1_ParamLimits

0xca26,	// (0x00087aed) dialer_ne_pane_t1

0x7164,	// (0x0008222b) dialer_ne_pane_t2_ParamLimits

0x7164,	// (0x0008222b) dialer_ne_pane_t2

0x718e,	// (0x00082255) dialer_ne_pane_t3_ParamLimits

0x718e,	// (0x00082255) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x0008a8fe) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x0008a8fe) dialer_ne_pane_t

0x71be,	// (0x00082285) dialer_ne_pane_t3_copy1_ParamLimits

0x71be,	// (0x00082285) dialer_ne_pane_t3_copy1

0x71ed,	// (0x000822b4) cell_dialer_keypad_pane_ParamLimits

0x71ed,	// (0x000822b4) cell_dialer_keypad_pane

0x7202,	// (0x000822c9) cell_dialer_command_1_pane_ParamLimits

0x7202,	// (0x000822c9) cell_dialer_command_1_pane

0x7218,	// (0x000822df) cell_dialer_command_2_pane_ParamLimits

0x7218,	// (0x000822df) cell_dialer_command_2_pane

0xca38,	// (0x00087aff) bg_button_pane_cp02_ParamLimits

0xca38,	// (0x00087aff) bg_button_pane_cp02

0x7227,	// (0x000822ee) cell_dialer_keypad_pane_g1_ParamLimits

0x7227,	// (0x000822ee) cell_dialer_keypad_pane_g1

0xca38,	// (0x00087aff) bg_button_pane_cp03_ParamLimits

0xca38,	// (0x00087aff) bg_button_pane_cp03

0x723c,	// (0x00082303) cell_dialer_command_1_pane_g1_ParamLimits

0x723c,	// (0x00082303) cell_dialer_command_1_pane_g1

0xca44,	// (0x00087b0b) bg_button_pane_cp04

0x7250,	// (0x00082317) cell_dialer_command_2_pane_g1

0x163e,	// (0x0007c705) bg_button_pane_cp06

0xca4c,	// (0x00087b13) dialer_ne_clear_pane_g1

0x155b,	// (0x0007c622) navi_pane_g2

0x5014,	// (0x000800db) navi_pane_g3

0x0002,

0xf44c,	// (0x0008a513) navi_pane_g

0x15dd,	// (0x0007c6a4) navi_pane_mv_g2

0x1605,	// (0x0007c6cc) navi_pane_mv_g5

0x5039,	// (0x00080100) navi_pane_mv_t1

0xac84,	// (0x00085d4b) main_clock2_pane

0x7284,	// (0x0008234b) main_clock2_list_pane_ParamLimits

0x7284,	// (0x0008234b) main_clock2_list_pane

0x72b6,	// (0x0008237d) main_clock2_pane_t1_ParamLimits

0x72b6,	// (0x0008237d) main_clock2_pane_t1

0x72ed,	// (0x000823b4) main_clock2_pane_t2_ParamLimits

0x72ed,	// (0x000823b4) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x0008a905) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x0008a905) main_clock2_pane_t

0x736f,	// (0x00082436) popup_clock_analogue_window_cp03_ParamLimits

0x736f,	// (0x00082436) popup_clock_analogue_window_cp03

0x7392,	// (0x00082459) popup_clock_digital_window_cp02_ParamLimits

0x7392,	// (0x00082459) popup_clock_digital_window_cp02

0x7403,	// (0x000824ca) main_clock2_list_single_pane_ParamLimits

0x7403,	// (0x000824ca) main_clock2_list_single_pane

0x163e,	// (0x0007c705) list_highlight_pane_cp05

0xca54,	// (0x00087b1b) main_clock2_list_single_pane_t1

0x41d5,	// (0x0007f29c) popup_toolbar_window_cp04_ParamLimits

0x693e,	// (0x00081a05) camera2_autofocus_pane_g2_ParamLimits

0x693e,	// (0x00081a05) camera2_autofocus_pane_g2

0x694a,	// (0x00081a11) camera2_autofocus_pane_g3_ParamLimits

0x694a,	// (0x00081a11) camera2_autofocus_pane_g3

0x6956,	// (0x00081a1d) camera2_autofocus_pane_g4_ParamLimits

0x6956,	// (0x00081a1d) camera2_autofocus_pane_g4

0x6962,	// (0x00081a29) camera2_autofocus_pane_g5_ParamLimits

0x6962,	// (0x00081a29) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x0008a84e) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x0008a84e) camera2_autofocus_pane_g

0x6ae3,	// (0x00081baa) camera2_autofocus_pane_cp_g2

0x6aeb,	// (0x00081bb2) camera2_autofocus_pane_cp_g3

0x6af3,	// (0x00081bba) camera2_autofocus_pane_cp_g4

0x6afb,	// (0x00081bc2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x0008a8b4) camera2_autofocus_pane_cp_g

0x7144,	// (0x0008220b) popup_dialer_spcha_window

0xa4b4,	// (0x0008557b) bg_popup_sub_pane_cp07

0xca62,	// (0x00087b29) list_spcha_pane

0xca6a,	// (0x00087b31) list_single_spcha_pane_ParamLimits

0xca6a,	// (0x00087b31) list_single_spcha_pane

0xa4b4,	// (0x0008557b) list_highlight_pane_cp06

0xca7b,	// (0x00087b42) list_single_spcha_pane_t1

0xbc46,	// (0x00086d0d) popup_call2_audio_out_window_g4_ParamLimits

0xbc46,	// (0x00086d0d) popup_call2_audio_out_window_g4

0xa4b4,	// (0x0008557b) main_imed2_pane

0xc263,	// (0x0008732a) popup_imed_adjust2_window

0x5e22,	// (0x00080ee9) popup_imed_trans_window_ParamLimits

0x5e22,	// (0x00080ee9) popup_imed_trans_window

0xc4c4,	// (0x0008758b) popup_blid_sat_info2_window_t1

0xc4d2,	// (0x00087599) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x0008a7e3) popup_blid_sat_info2_window_t

0x74ad,	// (0x00082574) aid_size_cell_colour_35

0x74cd,	// (0x00082594) aid_size_cell_colour_112

0x74ed,	// (0x000825b4) aid_size_cell_effect

0xc23d,	// (0x00087304) bg_tb_trans_pane_cp02

0x111d,	// (0x0007c1e4) heading_imed_pane

0x750d,	// (0x000825d4) listscroll_imed_pane

0xca89,	// (0x00087b50) heading_imed_pane_g1

0xca91,	// (0x00087b58) heading_imed_pane_t1

0xca9f,	// (0x00087b66) grid_imed_colour_35_pane_ParamLimits

0xca9f,	// (0x00087b66) grid_imed_colour_35_pane

0x7519,	// (0x000825e0) grid_imed_effect_pane

0xcab2,	// (0x00087b79) list_imed_aspect_pane

0x752c,	// (0x000825f3) scroll_pane_cp027_ParamLimits

0x752c,	// (0x000825f3) scroll_pane_cp027

0x7538,	// (0x000825ff) cell_imed_effect_pane_ParamLimits

0x7538,	// (0x000825ff) cell_imed_effect_pane

0xcaba,	// (0x00087b81) cell_imed_colour_pane_ParamLimits

0xcaba,	// (0x00087b81) cell_imed_colour_pane

0xcaf4,	// (0x00087bbb) cell_imed_colour_pane_g1_ParamLimits

0xcaf4,	// (0x00087bbb) cell_imed_colour_pane_g1

0xcb05,	// (0x00087bcc) hgihlgiht_grid_pane_cp016_ParamLimits

0xcb05,	// (0x00087bcc) hgihlgiht_grid_pane_cp016

0x755d,	// (0x00082624) cell_imed_effect_pane_g1

0x7565,	// (0x0008262c) grid_highlight_pane_cp017

0xcb16,	// (0x00087bdd) list_imed_single_pane_ParamLimits

0xcb16,	// (0x00087bdd) list_imed_single_pane

0xa4b4,	// (0x0008557b) list_highlight_pane_cp07

0xcb29,	// (0x00087bf0) list_imed_aspect_pane_comp1_t1

0xc23d,	// (0x00087304) bg_tb_trans_pane_cp05

0xcb49,	// (0x00087c10) popup_imed_adjust2_window_g1

0xcb70,	// (0x00087c37) popup_imed_adjust2_window_t1

0xcb88,	// (0x00087c4f) slider_imed_adjust_pane

0xcb9c,	// (0x00087c63) slider_imed_adjust_pane_g1

0xcbac,	// (0x00087c73) slider_imed_adjust_pane_g2

0xcbbc,	// (0x00087c83) slider_imed_adjust_pane_g3

0xcbcd,	// (0x00087c94) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0008a922) slider_imed_adjust_pane_g

0x756e,	// (0x00082635) aid_size_cell_clipart2

0x757a,	// (0x00082641) grid_imed_clipart_pane

0xcbde,	// (0x00087ca5) scroll_pane_cp031

0x7584,	// (0x0008264b) cell_imed_clipart_pane_ParamLimits

0x7584,	// (0x0008264b) cell_imed_clipart_pane

0x759c,	// (0x00082663) cell_imed_clipart_pane_g1

0xa4b4,	// (0x0008557b) grid_highlight_pane_cp014

0x7297,	// (0x0008235e) main_clock2_pane_g1_ParamLimits

0x7297,	// (0x0008235e) main_clock2_pane_g1

0x73ae,	// (0x00082475) aid_call2_pane_cp10

0x73c0,	// (0x00082487) aid_call_pane_cp10

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g1

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g2

0x73d2,	// (0x00082499) popup_clock_analogue_window_cp10_g3

0x73d2,	// (0x00082499) popup_clock_analogue_window_cp10_g4

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x0008a910) popup_clock_analogue_window_cp10_g

0x73e4,	// (0x000824ab) popup_clock_analogue_window_cp10_t1

0x7415,	// (0x000824dc) clock_digital_number_pane_cp10_ParamLimits

0x7415,	// (0x000824dc) clock_digital_number_pane_cp10

0x742d,	// (0x000824f4) clock_digital_number_pane_cp11_ParamLimits

0x742d,	// (0x000824f4) clock_digital_number_pane_cp11

0x7445,	// (0x0008250c) clock_digital_number_pane_cp12_ParamLimits

0x7445,	// (0x0008250c) clock_digital_number_pane_cp12

0x745d,	// (0x00082524) clock_digital_number_pane_cp13_ParamLimits

0x745d,	// (0x00082524) clock_digital_number_pane_cp13

0x7475,	// (0x0008253c) clock_digital_separator_pane_cp10_ParamLimits

0x7475,	// (0x0008253c) clock_digital_separator_pane_cp10

0x748d,	// (0x00082554) popup_clock_digital_window_cp02_t1_ParamLimits

0x748d,	// (0x00082554) popup_clock_digital_window_cp02_t1

0xab81,	// (0x00085c48) clock_digital_number_pane_cp10_g1

0xab81,	// (0x00085c48) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x0008a92b) clock_digital_number_pane_cp10_g

0xab81,	// (0x00085c48) clock_digital_separator_pane_cp10_g1

0xab81,	// (0x00085c48) clock_digital_separator_pane_g2_cp10

0x160e,	// (0x0007c6d5) navi_pane_vded_g4

0x1617,	// (0x0007c6de) navi_pane_vded_g5

0x1620,	// (0x0007c6e7) navi_pane_vded_t1

0xa4b4,	// (0x0008557b) main_vded_pane

0x75a5,	// (0x0008266c) main_vded_pane_g1

0x75af,	// (0x00082676) main_vded_pane_g2

0x75b7,	// (0x0008267e) main_vded_pane_g3

0x0002,

0xf869,	// (0x0008a930) main_vded_pane_g

0x75bf,	// (0x00082686) main_vded_pane_t1

0x75cd,	// (0x00082694) main_vded_pane_t2

0x0001,

0xf870,	// (0x0008a937) main_vded_pane_t

0x75db,	// (0x000826a2) vded_slider_pane

0x75e3,	// (0x000826aa) vded_video_pane

0xcbe6,	// (0x00087cad) vded_video_pane_g1

0x75eb,	// (0x000826b2) vded_video_pane_g2

0xc680,	// (0x00087747) vded_video_pane_g3

0x0002,

0xf875,	// (0x0008a93c) vded_video_pane_g

0xcbf0,	// (0x00087cb7) vded_slider_pane_g1

0xc3d3,	// (0x0008749a) vded_slider_pane_g2

0xcbf9,	// (0x00087cc0) vded_slider_pane_g3

0xcc02,	// (0x00087cc9) vded_slider_pane_g4

0xcc0b,	// (0x00087cd2) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x0008a943) vded_slider_pane_g

0x6fe3,	// (0x000820aa) mup3_rocker_pane_ParamLimits

0x6fe3,	// (0x000820aa) mup3_rocker_pane

0x75f4,	// (0x000826bb) mup3_control_keys_pane_g1

0x75fc,	// (0x000826c3) mup3_control_keys_pane_g2

0x7604,	// (0x000826cb) mup3_control_keys_pane_g3

0x760c,	// (0x000826d3) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x0008a94e) mup3_control_keys_pane_g

0x347d,	// (0x0007e544) popup_toolbar2_fixed_window_cp01_ParamLimits

0x347d,	// (0x0007e544) popup_toolbar2_fixed_window_cp01

0x7011,	// (0x000820d8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7011,	// (0x000820d8) popup_toolbar2_fixed_window_cp02

0xb585,	// (0x0008664c) popup_call2_audio_second_window_t4_ParamLimits

0xb585,	// (0x0008664c) popup_call2_audio_second_window_t4

0xbab3,	// (0x00086b7a) popup_call2_audio_first_window_t6_ParamLimits

0xbab3,	// (0x00086b7a) popup_call2_audio_first_window_t6

0xbd49,	// (0x00086e10) popup_call2_audio_out_window_t6_ParamLimits

0xbd49,	// (0x00086e10) popup_call2_audio_out_window_t6

0xa4b4,	// (0x0008557b) main_vitu_pane

0x761c,	// (0x000826e3) aid_size_cell_itu_ParamLimits

0x761c,	// (0x000826e3) aid_size_cell_itu

0xa50f,	// (0x000855d6) bg_popup_window_pane_cp08_ParamLimits

0xa50f,	// (0x000855d6) bg_popup_window_pane_cp08

0x7632,	// (0x000826f9) field_vitu_entry_pane_ParamLimits

0x7632,	// (0x000826f9) field_vitu_entry_pane

0x7645,	// (0x0008270c) grid_vitu_function_pane_ParamLimits

0x7645,	// (0x0008270c) grid_vitu_function_pane

0x765a,	// (0x00082721) grid_vitu_itu_pane_ParamLimits

0x765a,	// (0x00082721) grid_vitu_itu_pane

0x7670,	// (0x00082737) cell_vitu_itu_pane_ParamLimits

0x7670,	// (0x00082737) cell_vitu_itu_pane

0x7692,	// (0x00082759) cell_vitu_function_pane_ParamLimits

0x7692,	// (0x00082759) cell_vitu_function_pane

0xa50f,	// (0x000855d6) bg_popup_sub_pane_cp08_ParamLimits

0xa50f,	// (0x000855d6) bg_popup_sub_pane_cp08

0x76ab,	// (0x00082772) field_vitu_entry_pane_t1_ParamLimits

0x76ab,	// (0x00082772) field_vitu_entry_pane_t1

0xcc2c,	// (0x00087cf3) field_vitu_entry_pane_t2_ParamLimits

0xcc2c,	// (0x00087cf3) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x0008a95c) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x0008a95c) field_vitu_entry_pane_t

0xcc49,	// (0x00087d10) bg_button_pane_cp05_ParamLimits

0xcc49,	// (0x00087d10) bg_button_pane_cp05

0x76c7,	// (0x0008278e) cell_vitu_itu_pane_g1

0x76df,	// (0x000827a6) cell_vitu_itu_pane_t1_ParamLimits

0x76df,	// (0x000827a6) cell_vitu_itu_pane_t1

0x76f1,	// (0x000827b8) cell_vitu_itu_pane_t2_ParamLimits

0x76f1,	// (0x000827b8) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x0008a961) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x0008a961) cell_vitu_itu_pane_t

0xcc57,	// (0x00087d1e) bg_button_pane_cp07

0x7726,	// (0x000827ed) cell_vitu_function_pane_g1

0xac10,	// (0x00085cd7) main_calc_pane_g1

0x32e1,	// (0x0007e3a8) aid_visual_content_pane

0xa4b4,	// (0x0008557b) main_vradio_pane

0x772f,	// (0x000827f6) main_vradio_pane_g1_ParamLimits

0x772f,	// (0x000827f6) main_vradio_pane_g1

0xcc61,	// (0x00087d28) main_vradio_pane_g2_ParamLimits

0xcc61,	// (0x00087d28) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x0008a968) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x0008a968) main_vradio_pane_g

0x7745,	// (0x0008280c) main_vradio_pane_t1_ParamLimits

0x7745,	// (0x0008280c) main_vradio_pane_t1

0x775a,	// (0x00082821) main_vradio_pane_t2_ParamLimits

0x775a,	// (0x00082821) main_vradio_pane_t2

0xcc6e,	// (0x00087d35) main_vradio_pane_t3_ParamLimits

0xcc6e,	// (0x00087d35) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x0008a96d) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x0008a96d) main_vradio_pane_t

0x776f,	// (0x00082836) vradio_rocker_control_pane_ParamLimits

0x776f,	// (0x00082836) vradio_rocker_control_pane

0x7781,	// (0x00082848) vradio_station_info_pane_ParamLimits

0x7781,	// (0x00082848) vradio_station_info_pane

0xcc80,	// (0x00087d47) vradio_frequency_info_pane_ParamLimits

0xcc80,	// (0x00087d47) vradio_frequency_info_pane

0xc680,	// (0x00087747) vradio_station_info_pane_g1

0xcc8f,	// (0x00087d56) vradio_station_info_pane_t1_ParamLimits

0xcc8f,	// (0x00087d56) vradio_station_info_pane_t1

0xccb1,	// (0x00087d78) vradio_station_info_pane_t2_ParamLimits

0xccb1,	// (0x00087d78) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x0008a974) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x0008a974) vradio_station_info_pane_t

0xccc3,	// (0x00087d8a) vradio_tuning_pane

0xcccb,	// (0x00087d92) vradio_rocker_control_pane_g1

0xccd3,	// (0x00087d9a) vradio_rocker_control_pane_g2

0xccdb,	// (0x00087da2) vradio_rocker_control_pane_g3

0xcce3,	// (0x00087daa) vradio_rocker_control_pane_g4

0xcceb,	// (0x00087db2) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x0008a979) vradio_rocker_control_pane_g

0x7791,	// (0x00082858) vradio_frequency_info_pane_g1

0xccf3,	// (0x00087dba) vradio_frequency_info_pane_t1_ParamLimits

0xccf3,	// (0x00087dba) vradio_frequency_info_pane_t1

0x779b,	// (0x00082862) vradio_tuning_pane_g1

0x77a4,	// (0x0008286b) vradio_tuning_pane_t1

0xa4e6,	// (0x000855ad) area_side_right_pane_ParamLimits

0xa4e6,	// (0x000855ad) area_side_right_pane

0xc204,	// (0x000872cb) status_small_pane_g1

0xc20c,	// (0x000872d3) status_small_pane_g2

0xc215,	// (0x000872dc) status_small_pane_g3

0xc21e,	// (0x000872e5) status_small_pane_g4

0x0003,

0xf672,	// (0x0008a739) status_small_pane_g

0xc227,	// (0x000872ee) status_small_pane_t1

0xa4b4,	// (0x0008557b) main_video3_pane

0xcd07,	// (0x00087dce) cams_zoom_vslider_pane

0xcd0f,	// (0x00087dd6) image3_wide_pane_ParamLimits

0xcd0f,	// (0x00087dd6) image3_wide_pane

0xcd29,	// (0x00087df0) image3_wide_small_pane

0xcd33,	// (0x00087dfa) main_video3_pane_g1_ParamLimits

0xcd33,	// (0x00087dfa) main_video3_pane_g1

0xcd4f,	// (0x00087e16) main_video3_pane_g2_ParamLimits

0xcd4f,	// (0x00087e16) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x0008a984) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x0008a984) main_video3_pane_g

0xcd6b,	// (0x00087e32) main_video3_pane_t1_ParamLimits

0xcd6b,	// (0x00087e32) main_video3_pane_t1

0xcd96,	// (0x00087e5d) main_video3_pane_t2_ParamLimits

0xcd96,	// (0x00087e5d) main_video3_pane_t2

0xcdc1,	// (0x00087e88) main_video3_pane_t3_ParamLimits

0xcdc1,	// (0x00087e88) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x0008a989) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x0008a989) main_video3_pane_t

0xcdec,	// (0x00087eb3) cams_zoom_vslider_pane_g1

0xcdf5,	// (0x00087ebc) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x0008a990) cams_zoom_vslider_pane_g

0xcdfd,	// (0x00087ec4) small_slider_vertical_pane

0xc680,	// (0x00087747) small_slider_vertical_pane_g1

0xc680,	// (0x00087747) small_slider_vertical_pane_g2

0xce05,	// (0x00087ecc) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x0008a995) small_slider_vertical_pane_g

0xa4b4,	// (0x0008557b) main_hwr_training_pane

0xce0e,	// (0x00087ed5) hwr_training_instruct_pane_ParamLimits

0xce0e,	// (0x00087ed5) hwr_training_instruct_pane

0x77b3,	// (0x0008287a) hwr_training_navi_pane_ParamLimits

0x77b3,	// (0x0008287a) hwr_training_navi_pane

0x77ca,	// (0x00082891) hwr_training_write_pane_ParamLimits

0x77ca,	// (0x00082891) hwr_training_write_pane

0xa4b4,	// (0x0008557b) bg_frame_shadow_pane

0xce3d,	// (0x00087f04) hwr_training_write_pane_g1

0xce45,	// (0x00087f0c) hwr_training_write_pane_g2

0xce4d,	// (0x00087f14) hwr_training_write_pane_g3

0xce55,	// (0x00087f1c) hwr_training_write_pane_g4

0xce5d,	// (0x00087f24) hwr_training_write_pane_g5

0xce65,	// (0x00087f2c) hwr_training_write_pane_g6

0xce6d,	// (0x00087f34) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x0008a99c) hwr_training_write_pane_g

0xecc7,	// (0x00089d8e) hwr_training_navi_pane_g1_ParamLimits

0xecc7,	// (0x00089d8e) hwr_training_navi_pane_g1

0xecd9,	// (0x00089da0) hwr_training_navi_pane_g2_ParamLimits

0xecd9,	// (0x00089da0) hwr_training_navi_pane_g2

0xeceb,	// (0x00089db2) hwr_training_navi_pane_g3_ParamLimits

0xeceb,	// (0x00089db2) hwr_training_navi_pane_g3

0xecfb,	// (0x00089dc2) hwr_training_navi_pane_g4_ParamLimits

0xecfb,	// (0x00089dc2) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x0008a9ab) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x0008a9ab) hwr_training_navi_pane_g

0xed08,	// (0x00089dcf) hwr_training_navi_pane_t1

0x780a,	// (0x000828d1) list_single_hwr_training_instruct_pane_ParamLimits

0x780a,	// (0x000828d1) list_single_hwr_training_instruct_pane

0xce75,	// (0x00087f3c) list_single_hwr_training_instruct_pane_t1

0xc5c0,	// (0x00087687) bg_frame_shadow_pane_g1

0xce84,	// (0x00087f4b) bg_frame_shadow_pane_g2

0xce8c,	// (0x00087f53) bg_frame_shadow_pane_g3

0xce94,	// (0x00087f5b) bg_frame_shadow_pane_g4

0xce9c,	// (0x00087f63) bg_frame_shadow_pane_g5

0xcea4,	// (0x00087f6b) bg_frame_shadow_pane_g6

0xceac,	// (0x00087f73) bg_frame_shadow_pane_g7

0xada7,	// (0x00085e6e) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x0008a9b6) bg_frame_shadow_pane_g

0xa4b4,	// (0x0008557b) main_video_tele_dialer_pane

0x7822,	// (0x000828e9) aid_size_cell_video_keypad_ParamLimits

0x7822,	// (0x000828e9) aid_size_cell_video_keypad

0x783c,	// (0x00082903) grid_video_dialer_keypad_pane_ParamLimits

0x783c,	// (0x00082903) grid_video_dialer_keypad_pane

0x787e,	// (0x00082945) video_down_pane_cp_ParamLimits

0x787e,	// (0x00082945) video_down_pane_cp

0x78ae,	// (0x00082975) cell_video_dialer_keypad_pane_ParamLimits

0x78ae,	// (0x00082975) cell_video_dialer_keypad_pane

0xceb4,	// (0x00087f7b) bg_button_pane_cp08_ParamLimits

0xceb4,	// (0x00087f7b) bg_button_pane_cp08

0x78d0,	// (0x00082997) cell_video_dialer_keypad_pane_g1_ParamLimits

0x78d0,	// (0x00082997) cell_video_dialer_keypad_pane_g1

0x6fcd,	// (0x00082094) mup3_rocker2_pane_ParamLimits

0x6fcd,	// (0x00082094) mup3_rocker2_pane

0xc680,	// (0x00087747) mup3_rocker2_pane_g1

0x5d1b,	// (0x00080de2) main_dialer2_pane

0xa4b4,	// (0x0008557b) main_mp4_pane

0xed1e,	// (0x00089de5) main_mp4_pane_g1_ParamLimits

0xed1e,	// (0x00089de5) main_mp4_pane_g1

0xed1e,	// (0x00089de5) main_mp4_pane_g2_ParamLimits

0xed1e,	// (0x00089de5) main_mp4_pane_g2

0x790b,	// (0x000829d2) main_mp4_pane_g3_ParamLimits

0x790b,	// (0x000829d2) main_mp4_pane_g3

0xed2c,	// (0x00089df3) main_mp4_pane_g4_ParamLimits

0xed2c,	// (0x00089df3) main_mp4_pane_g4

0xed5a,	// (0x00089e21) main_mp4_pane_g5_ParamLimits

0xed5a,	// (0x00089e21) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x0008a9d6) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x0008a9d6) main_mp4_pane_g

0xedb6,	// (0x00089e7d) main_mp4_pane_t1_ParamLimits

0xedb6,	// (0x00089e7d) main_mp4_pane_t1

0xee0e,	// (0x00089ed5) main_mp4_pane_t2_ParamLimits

0xee0e,	// (0x00089ed5) main_mp4_pane_t2

0xcec0,	// (0x00087f87) main_mp4_pane_t3_ParamLimits

0xcec0,	// (0x00087f87) main_mp4_pane_t3

0xee60,	// (0x00089f27) main_mp4_pane_t4_ParamLimits

0xee60,	// (0x00089f27) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x0008a9e3) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x0008a9e3) main_mp4_pane_t

0xeea0,	// (0x00089f67) mp4_progress_pane_ParamLimits

0xeea0,	// (0x00089f67) mp4_progress_pane

0xeee4,	// (0x00089fab) mp4_rocker_pane_ParamLimits

0xeee4,	// (0x00089fab) mp4_rocker_pane

0xceee,	// (0x00087fb5) mp4_progress_pane_t1

0xcf05,	// (0x00087fcc) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x0008a9ec) mp4_progress_pane_t

0xcf1c,	// (0x00087fe3) mup_progress_pane_cp04

0xcf28,	// (0x00087fef) mp4_rocker_pane_g1

0x793b,	// (0x00082a02) aid_cell_size_keypad2_ParamLimits

0x793b,	// (0x00082a02) aid_cell_size_keypad2

0x7955,	// (0x00082a1c) dialer2_ne_pane_ParamLimits

0x7955,	// (0x00082a1c) dialer2_ne_pane

0x796a,	// (0x00082a31) grid_dialer2_keypad_pane_ParamLimits

0x796a,	// (0x00082a31) grid_dialer2_keypad_pane

0xc46d,	// (0x00087534) bg_popup_call_pane_cp07_ParamLimits

0xc46d,	// (0x00087534) bg_popup_call_pane_cp07

0x7980,	// (0x00082a47) dialer2_ne_pane_t1_ParamLimits

0x7980,	// (0x00082a47) dialer2_ne_pane_t1

0x79bd,	// (0x00082a84) cell_dialer2_keypad_pane_ParamLimits

0x79bd,	// (0x00082a84) cell_dialer2_keypad_pane

0xcf44,	// (0x0008800b) bg_button_pane_pane_cp04_ParamLimits

0xcf44,	// (0x0008800b) bg_button_pane_pane_cp04

0x79df,	// (0x00082aa6) cell_dialer2_keypad_pane_g1_ParamLimits

0x79df,	// (0x00082aa6) cell_dialer2_keypad_pane_g1

0x411a,	// (0x0007f1e1) aid_placing_vt_set_content_ParamLimits

0x411a,	// (0x0007f1e1) aid_placing_vt_set_content

0x4138,	// (0x0007f1ff) aid_placing_vt_set_title_ParamLimits

0x4138,	// (0x0007f1ff) aid_placing_vt_set_title

0xa4b4,	// (0x0008557b) main_image3_pane

0x7a6e,	// (0x00082b35) area_side_right_pane_cp01_ParamLimits

0x7a6e,	// (0x00082b35) area_side_right_pane_cp01

0xed1e,	// (0x00089de5) main_image3_pane_g1_ParamLimits

0xed1e,	// (0x00089de5) main_image3_pane_g1

0x7a85,	// (0x00082b4c) main_image3_pane_g2_ParamLimits

0x7a85,	// (0x00082b4c) main_image3_pane_g2

0x7aab,	// (0x00082b72) main_image3_pane_g3_ParamLimits

0x7aab,	// (0x00082b72) main_image3_pane_g3

0x7ad1,	// (0x00082b98) main_image3_pane_g4_ParamLimits

0x7ad1,	// (0x00082b98) main_image3_pane_g4

0x0003,

0xf934,	// (0x0008a9fb) main_image3_pane_g_ParamLimits

0xf934,	// (0x0008a9fb) main_image3_pane_g

0x7af7,	// (0x00082bbe) main_image3_pane_t1_ParamLimits

0x7af7,	// (0x00082bbe) main_image3_pane_t1

0x7b4f,	// (0x00082c16) main_image3_pane_t2_ParamLimits

0x7b4f,	// (0x00082c16) main_image3_pane_t2

0x7ba1,	// (0x00082c68) main_image3_pane_t3_ParamLimits

0x7ba1,	// (0x00082c68) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0008aa04) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0008aa04) main_image3_pane_t

0xa50f,	// (0x000855d6) grid_sctrl_middle_pane_cp01_ParamLimits

0xa50f,	// (0x000855d6) grid_sctrl_middle_pane_cp01

0x7c21,	// (0x00082ce8) cell_sctrl_middle_pane_cp01_ParamLimits

0x7c21,	// (0x00082ce8) cell_sctrl_middle_pane_cp01

0x7c3e,	// (0x00082d05) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7c3e,	// (0x00082d05) cell_sctrl_middle_pane_cp01_g1

0xa4b4,	// (0x0008557b) main_call4_pane

0x7c54,	// (0x00082d1b) aid_size_button_call4_ParamLimits

0x7c54,	// (0x00082d1b) aid_size_button_call4

0x7c81,	// (0x00082d48) call4_windows_pane_ParamLimits

0x7c81,	// (0x00082d48) call4_windows_pane

0x7c97,	// (0x00082d5e) grid_call4_button_pane_ParamLimits

0x7c97,	// (0x00082d5e) grid_call4_button_pane

0xcf68,	// (0x0008802f) call4_windows_conf_pane

0x7cb6,	// (0x00082d7d) popup_call4_audio_first_window_ParamLimits

0x7cb6,	// (0x00082d7d) popup_call4_audio_first_window

0x7cd6,	// (0x00082d9d) popup_call4_audio_second_window_ParamLimits

0x7cd6,	// (0x00082d9d) popup_call4_audio_second_window

0xcf9b,	// (0x00088062) popup_call4_audio_wait_window_ParamLimits

0xcf9b,	// (0x00088062) popup_call4_audio_wait_window

0x7ce8,	// (0x00082daf) cell_call4_button_pane_ParamLimits

0x7ce8,	// (0x00082daf) cell_call4_button_pane

0x7d0d,	// (0x00082dd4) bg_button_pane_cp09_ParamLimits

0x7d0d,	// (0x00082dd4) bg_button_pane_cp09

0x7d19,	// (0x00082de0) cell_call4_button_pane_g1_ParamLimits

0x7d19,	// (0x00082de0) cell_call4_button_pane_g1

0x7d3f,	// (0x00082e06) cell_call4_button_pane_t1_ParamLimits

0x7d3f,	// (0x00082e06) cell_call4_button_pane_t1

0xcfe1,	// (0x000880a8) popup_call4_audio_conf_window_ParamLimits

0xcfe1,	// (0x000880a8) popup_call4_audio_conf_window

0x7027,	// (0x000820ee) mup3_progress_pane_t1_ParamLimits

0x703d,	// (0x00082104) mup3_progress_pane_t2_ParamLimits

0xc99e,	// (0x00087a65) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x0008a8dd) mup3_progress_pane_t_ParamLimits

0xc9b5,	// (0x00087a7c) mup_progress_pane_cp03_ParamLimits

0x7614,	// (0x000826db) mup3_control_keys_pane_g4_copy1

0xeece,	// (0x00089f95) mp4_rocker2_pane_ParamLimits

0xeece,	// (0x00089f95) mp4_rocker2_pane

0xcff5,	// (0x000880bc) mp4_rocker2_pane_g1

0xcffd,	// (0x000880c4) mp4_rocker2_pane_g2

0xef34,	// (0x00089ffb) mp4_rocker2_pane_g3

0xef3c,	// (0x0008a003) mp4_rocker2_pane_g4

0xef44,	// (0x0008a00b) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x0008aa0d) mp4_rocker2_pane_g

0xa4b4,	// (0x0008557b) main_camera4_pane

0xa4b4,	// (0x0008557b) main_video4_pane

0x7850,	// (0x00082917) main_video_tele_dialer_pane_t1_ParamLimits

0x7850,	// (0x00082917) main_video_tele_dialer_pane_t1

0x7867,	// (0x0008292e) main_video_tele_dialer_pane_t2_ParamLimits

0x7867,	// (0x0008292e) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x0008a9c7) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x0008a9c7) main_video_tele_dialer_pane_t

0x7d7b,	// (0x00082e42) cam4_autofocus_pane_ParamLimits

0x7d7b,	// (0x00082e42) cam4_autofocus_pane

0x7d8f,	// (0x00082e56) cam4_image_uncrop_pane_ParamLimits

0x7d8f,	// (0x00082e56) cam4_image_uncrop_pane

0x7da6,	// (0x00082e6d) cam4_indicators_pane_ParamLimits

0x7da6,	// (0x00082e6d) cam4_indicators_pane

0x7dca,	// (0x00082e91) main_camera4_pane_g1_ParamLimits

0x7dca,	// (0x00082e91) main_camera4_pane_g1

0x7dd6,	// (0x00082e9d) main_camera4_pane_g2_ParamLimits

0x7dd6,	// (0x00082e9d) main_camera4_pane_g2

0x7de2,	// (0x00082ea9) main_camera4_pane_g3_ParamLimits

0x7de2,	// (0x00082ea9) main_camera4_pane_g3

0x7dee,	// (0x00082eb5) main_camera4_pane_g4_ParamLimits

0x7dee,	// (0x00082eb5) main_camera4_pane_g4

0x7dfa,	// (0x00082ec1) main_camera4_pane_g5_ParamLimits

0x7dfa,	// (0x00082ec1) main_camera4_pane_g5

0x0005,

0xf951,	// (0x0008aa18) main_camera4_pane_g_ParamLimits

0xf951,	// (0x0008aa18) main_camera4_pane_g

0x7e17,	// (0x00082ede) main_camera4_pane_t1_ParamLimits

0x7e17,	// (0x00082ede) main_camera4_pane_t1

0x7e48,	// (0x00082f0f) bg_tb_trans_pane_cp06

0x7e56,	// (0x00082f1d) cam4_indicators_pane_g1

0x7e63,	// (0x00082f2a) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x0008aa2a) cam4_indicators_pane_g

0x7e7b,	// (0x00082f42) cam4_indicators_pane_t1

0x7e9f,	// (0x00082f66) main_video4_pane_g1_ParamLimits

0x7e9f,	// (0x00082f66) main_video4_pane_g1

0x7eb1,	// (0x00082f78) main_video4_pane_g2_ParamLimits

0x7eb1,	// (0x00082f78) main_video4_pane_g2

0x7eb1,	// (0x00082f78) main_video4_pane_g3_ParamLimits

0x7eb1,	// (0x00082f78) main_video4_pane_g3

0x7ec0,	// (0x00082f87) main_video4_pane_g4_ParamLimits

0x7ec0,	// (0x00082f87) main_video4_pane_g4

0x0004,

0xf96a,	// (0x0008aa31) main_video4_pane_g_ParamLimits

0xf96a,	// (0x0008aa31) main_video4_pane_g

0x7ede,	// (0x00082fa5) vid4_indicators_pane_ParamLimits

0x7ede,	// (0x00082fa5) vid4_indicators_pane

0x7f06,	// (0x00082fcd) video4_image_uncrop_cif_pane_ParamLimits

0x7f06,	// (0x00082fcd) video4_image_uncrop_cif_pane

0x7f1e,	// (0x00082fe5) video4_image_uncrop_nhd_pane_ParamLimits

0x7f1e,	// (0x00082fe5) video4_image_uncrop_nhd_pane

0x7f32,	// (0x00082ff9) video4_image_uncrop_vga_pane_ParamLimits

0x7f32,	// (0x00082ff9) video4_image_uncrop_vga_pane

0xef6c,	// (0x0008a033) bg_tb_trans_pane_cp07

0x7e56,	// (0x00082f1d) vid4_indicators_pane_g1

0x7f4a,	// (0x00083011) vid4_indicators_pane_g2

0x7f57,	// (0x0008301e) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x0008aa3c) vid4_indicators_pane_g

0x7f70,	// (0x00083037) vid4_indicators_pane_t1

0x7f82,	// (0x00083049) cam4_autofocus_pane_g1

0x7f8a,	// (0x00083051) cam4_autofocus_pane_g2

0x7f92,	// (0x00083059) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x0008aa47) cam4_autofocus_pane_g

0x7f9a,	// (0x00083061) cam4_autofocus_pane_g3_copy1

0x7892,	// (0x00082959) video_down_pane_cp_t1

0x78a0,	// (0x00082967) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x0008a9cc) video_down_pane_cp_t

0xa50f,	// (0x000855d6) popup_vitu2_window_ParamLimits

0xa50f,	// (0x000855d6) popup_vitu2_window

0x7fa2,	// (0x00083069) aid_size_cell2_itu2_ParamLimits

0x7fa2,	// (0x00083069) aid_size_cell2_itu2

0x7fc8,	// (0x0008308f) aid_size_cell_itu2_ParamLimits

0x7fc8,	// (0x0008308f) aid_size_cell_itu2

0x801a,	// (0x000830e1) bg_popup_window_pane_cp09_ParamLimits

0x801a,	// (0x000830e1) bg_popup_window_pane_cp09

0x8028,	// (0x000830ef) field_vitu2_entry_pane_ParamLimits

0x8028,	// (0x000830ef) field_vitu2_entry_pane

0x8042,	// (0x00083109) grid_vitu2_function_pane_ParamLimits

0x8042,	// (0x00083109) grid_vitu2_function_pane

0x807d,	// (0x00083144) grid_vitu2_itu_pane_ParamLimits

0x807d,	// (0x00083144) grid_vitu2_itu_pane

0x80e2,	// (0x000831a9) cell_vitu2_itu_pane_ParamLimits

0x80e2,	// (0x000831a9) cell_vitu2_itu_pane

0x8104,	// (0x000831cb) cell_vitu2_function_pane_ParamLimits

0x8104,	// (0x000831cb) cell_vitu2_function_pane

0xd005,	// (0x000880cc) bg_popup_call_pane_cp08_ParamLimits

0xd005,	// (0x000880cc) bg_popup_call_pane_cp08

0xd01e,	// (0x000880e5) field_vitu2_entry_pane_g1

0xd02a,	// (0x000880f1) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x0008aa4e) field_vitu2_entry_pane_g

0xd044,	// (0x0008810b) field_vitu2_entry_pane_t1_ParamLimits

0xd044,	// (0x0008810b) field_vitu2_entry_pane_t1

0xd05f,	// (0x00088126) field_vitu2_entry_pane_t2_ParamLimits

0xd05f,	// (0x00088126) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x0008aa55) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x0008aa55) field_vitu2_entry_pane_t

0x8143,	// (0x0008320a) bg_button_pane_cp010_ParamLimits

0x8143,	// (0x0008320a) bg_button_pane_cp010

0x8151,	// (0x00083218) cell_vitu2_itu_pane_g1

0x816f,	// (0x00083236) cell_vitu2_itu_pane_t1_ParamLimits

0x816f,	// (0x00083236) cell_vitu2_itu_pane_t1

0x31d4,	// (0x0007e29b) cell_vitu2_itu_pane_t2_ParamLimits

0x31d4,	// (0x0007e29b) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x0008aa5f) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x0008aa5f) cell_vitu2_itu_pane_t

0xef7a,	// (0x0008a041) bg_button_pane_cp011

0x81d5,	// (0x0008329c) cell_vitu2_function_pane_g1

0xa4b4,	// (0x0008557b) main_myfav_hc_pane

0x7bed,	// (0x00082cb4) popup_image3_note_pane_ParamLimits

0x7bed,	// (0x00082cb4) popup_image3_note_pane

0x7c07,	// (0x00082cce) popup_image3_tool_bar_pane_ParamLimits

0x7c07,	// (0x00082cce) popup_image3_tool_bar_pane

0x3258,	// (0x0007e31f) cell_vitu2_itu_pane_t3_ParamLimits

0x3258,	// (0x0007e31f) cell_vitu2_itu_pane_t3

0xa4b4,	// (0x0008557b) bg_popup_trans_pane

0xd084,	// (0x0008814b) grid_image3_tool_bar_pane

0xd08e,	// (0x00088155) bg_popup_trans_pane_g1

0x0ef0,	// (0x0007bfb7) bg_popup_trans_pane_g2

0xd096,	// (0x0008815d) bg_popup_trans_pane_g3

0xd09e,	// (0x00088165) bg_popup_trans_pane_g4

0xd0a6,	// (0x0008816d) bg_popup_trans_pane_g5

0xd0ae,	// (0x00088175) bg_popup_trans_pane_g6

0xd0b6,	// (0x0008817d) bg_popup_trans_pane_g7

0xd0be,	// (0x00088185) bg_popup_trans_pane_g8

0x0ed0,	// (0x0007bf97) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x0008aa66) bg_popup_trans_pane_g

0xae32,	// (0x00085ef9) cell_image3_tool_bar_pane_ParamLimits

0xae32,	// (0x00085ef9) cell_image3_tool_bar_pane

0xc680,	// (0x00087747) cell_image3_tool_bar_pane_g1

0xa4b4,	// (0x0008557b) bg_popup_trans_pane_cp1

0xd0c6,	// (0x0008818d) popup_image3_note_pane_t1

0xd0d4,	// (0x0008819b) popup_image3_note_pane_t2

0xd0e2,	// (0x000881a9) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x0008aa79) popup_image3_note_pane_t

0xd0f0,	// (0x000881b7) popup_image3_note_pane_t3_copy1

0x81e9,	// (0x000832b0) bg_myfav_hc_instruction_pane_ParamLimits

0x81e9,	// (0x000832b0) bg_myfav_hc_instruction_pane

0x81fb,	// (0x000832c2) cell_myfav_contact_pane_ParamLimits

0x81fb,	// (0x000832c2) cell_myfav_contact_pane

0x8215,	// (0x000832dc) cell_myfav_contact_pane_cp1_ParamLimits

0x8215,	// (0x000832dc) cell_myfav_contact_pane_cp1

0x822b,	// (0x000832f2) cell_myfav_contact_pane_cp2_ParamLimits

0x822b,	// (0x000832f2) cell_myfav_contact_pane_cp2

0x8241,	// (0x00083308) cell_myfav_contact_pane_cp3_ParamLimits

0x8241,	// (0x00083308) cell_myfav_contact_pane_cp3

0x8256,	// (0x0008331d) cell_myfav_contact_pane_cp4_ParamLimits

0x8256,	// (0x0008331d) cell_myfav_contact_pane_cp4

0x826a,	// (0x00083331) cell_myfav_contact_pane_cp5_ParamLimits

0x826a,	// (0x00083331) cell_myfav_contact_pane_cp5

0x827e,	// (0x00083345) cell_myfav_contact_pane_cp6_ParamLimits

0x827e,	// (0x00083345) cell_myfav_contact_pane_cp6

0x8292,	// (0x00083359) cell_myfav_contact_pane_cp7_ParamLimits

0x8292,	// (0x00083359) cell_myfav_contact_pane_cp7

0xd0fe,	// (0x000881c5) listscroll_gen_pane_cp05

0x82aa,	// (0x00083371) main_myfav_hc_pane_g1_ParamLimits

0x82aa,	// (0x00083371) main_myfav_hc_pane_g1

0x82c0,	// (0x00083387) main_myfav_hc_pane_g2_ParamLimits

0x82c0,	// (0x00083387) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x0008aa80) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x0008aa80) main_myfav_hc_pane_g

0x82ea,	// (0x000833b1) main_myfav_hc_pane_t1_ParamLimits

0x82ea,	// (0x000833b1) main_myfav_hc_pane_t1

0xd107,	// (0x000881ce) main_myfav_hc_pane_t2_ParamLimits

0xd107,	// (0x000881ce) main_myfav_hc_pane_t2

0xd119,	// (0x000881e0) main_myfav_hc_pane_t3_ParamLimits

0xd119,	// (0x000881e0) main_myfav_hc_pane_t3

0x82ff,	// (0x000833c6) main_myfav_hc_pane_t4_ParamLimits

0x82ff,	// (0x000833c6) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x0008aa87) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x0008aa87) main_myfav_hc_pane_t

0xc680,	// (0x00087747) bg_myfav_hc_instruction_pane_g1

0xd12b,	// (0x000881f2) cell_myfav_contact_pane_g1_ParamLimits

0xd12b,	// (0x000881f2) cell_myfav_contact_pane_g1

0xd12b,	// (0x000881f2) cell_myfav_contact_pane_g2_ParamLimits

0xd12b,	// (0x000881f2) cell_myfav_contact_pane_g2

0xd137,	// (0x000881fe) cell_myfav_contact_pane_g3_ParamLimits

0xd137,	// (0x000881fe) cell_myfav_contact_pane_g3

0xc988,	// (0x00087a4f) cell_myfav_contact_pane_g4_ParamLimits

0xc988,	// (0x00087a4f) cell_myfav_contact_pane_g4

0xd144,	// (0x0008820b) cell_myfav_contact_pane_g5_ParamLimits

0xd144,	// (0x0008820b) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0008aa92) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0008aa92) cell_myfav_contact_pane_g

0x82d6,	// (0x0008339d) main_myfav_hc_pane_g3_ParamLimits

0x82d6,	// (0x0008339d) main_myfav_hc_pane_g3

0x3403,	// (0x0007e4ca) popup_adpt_find_window

0x8323,	// (0x000833ea) afind_page_pane_ParamLimits

0x8323,	// (0x000833ea) afind_page_pane

0x8338,	// (0x000833ff) aid_size_cell_afind_ParamLimits

0x8338,	// (0x000833ff) aid_size_cell_afind

0x8356,	// (0x0008341d) bg_popup_sub_pane_cp09_ParamLimits

0x8356,	// (0x0008341d) bg_popup_sub_pane_cp09

0x8363,	// (0x0008342a) find_pane_cp01_ParamLimits

0x8363,	// (0x0008342a) find_pane_cp01

0xd150,	// (0x00088217) grid_afind_control_pane_ParamLimits

0xd150,	// (0x00088217) grid_afind_control_pane

0x8370,	// (0x00083437) grid_afind_pane_ParamLimits

0x8370,	// (0x00083437) grid_afind_pane

0x838e,	// (0x00083455) cell_afind_pane_ParamLimits

0x838e,	// (0x00083455) cell_afind_pane

0xc680,	// (0x00087747) afind_page_pane_g1

0x83db,	// (0x000834a2) afind_page_pane_g2

0x83e4,	// (0x000834ab) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x0008aa9d) afind_page_pane_g

0x83ed,	// (0x000834b4) afind_page_pane_t1

0xd164,	// (0x0008822b) cell_afind_grid_control_pane_ParamLimits

0xd164,	// (0x0008822b) cell_afind_grid_control_pane

0xcf44,	// (0x0008800b) bg_button_pane_cp69_ParamLimits

0xcf44,	// (0x0008800b) bg_button_pane_cp69

0x840d,	// (0x000834d4) cell_afind_pane_g1_ParamLimits

0x840d,	// (0x000834d4) cell_afind_pane_g1

0x841a,	// (0x000834e1) cell_afind_pane_t1_ParamLimits

0x841a,	// (0x000834e1) cell_afind_pane_t1

0xafaa,	// (0x00086071) bg_button_pane_cp72

0xd173,	// (0x0008823a) cell_afind_grid_control_pane_g1

0x58bd,	// (0x00080984) aid_image_placing_area_ParamLimits

0x58bd,	// (0x00080984) aid_image_placing_area

0xcc14,	// (0x00087cdb) field_vitu_entry_pane_g1_ParamLimits

0xcc14,	// (0x00087cdb) field_vitu_entry_pane_g1

0xcc20,	// (0x00087ce7) field_vitu_entry_pane_g2_ParamLimits

0xcc20,	// (0x00087ce7) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x0008a957) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x0008a957) field_vitu_entry_pane_g

0x76c7,	// (0x0008278e) cell_vitu_itu_pane_g1_ParamLimits

0x7709,	// (0x000827d0) cell_vitu_itu_pane_t3_ParamLimits

0x7709,	// (0x000827d0) cell_vitu_itu_pane_t3

0xceee,	// (0x00087fb5) mp4_progress_pane_t1_ParamLimits

0xcf05,	// (0x00087fcc) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x0008a9ec) mp4_progress_pane_t_ParamLimits

0xcf1c,	// (0x00087fe3) mup_progress_pane_cp04_ParamLimits

0x8311,	// (0x000833d8) main_myfav_hc_pane_t5_ParamLimits

0x8311,	// (0x000833d8) main_myfav_hc_pane_t5

0xa4d6,	// (0x0008559d) aid_zoom_text_primary

0x3403,	// (0x0007e4ca) popup_adpt_find_window_ParamLimits

0xa50f,	// (0x000855d6) main_cam_set_pane

0x7db8,	// (0x00082e7f) cam4_zoom_pane_ParamLimits

0x7db8,	// (0x00082e7f) cam4_zoom_pane

0x842c,	// (0x000834f3) main_cam_set_pane_g1_ParamLimits

0x842c,	// (0x000834f3) main_cam_set_pane_g1

0x843a,	// (0x00083501) main_cam_set_pane_g2_ParamLimits

0x843a,	// (0x00083501) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x0008aaa4) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x0008aaa4) main_cam_set_pane_g

0x8459,	// (0x00083520) main_cam_set_pane_t1_ParamLimits

0x8459,	// (0x00083520) main_cam_set_pane_t1

0x846b,	// (0x00083532) main_cset_listscroll_pane_ParamLimits

0x846b,	// (0x00083532) main_cset_listscroll_pane

0x8489,	// (0x00083550) main_cset_slider_pane_ParamLimits

0x8489,	// (0x00083550) main_cset_slider_pane

0xd184,	// (0x0008824b) main_cset_list_pane_ParamLimits

0xd184,	// (0x0008824b) main_cset_list_pane

0xd194,	// (0x0008825b) scroll_pane_cp028

0x84ad,	// (0x00083574) aid_area_touch_slider

0x84c9,	// (0x00083590) cset_slider_pane

0x84f3,	// (0x000835ba) main_cset_slider_pane_g1

0x8508,	// (0x000835cf) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x0008aaa9) main_cset_slider_pane_g

0xd1cd,	// (0x00088294) main_cset_slider_pane_t1

0x85c4,	// (0x0008368b) main_cset_slider_pane_t2

0x85de,	// (0x000836a5) main_cset_slider_pane_t3

0x85f8,	// (0x000836bf) main_cset_slider_pane_t4

0x8612,	// (0x000836d9) main_cset_slider_pane_t5

0x862c,	// (0x000836f3) main_cset_slider_pane_t6

0x8641,	// (0x00083708) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0008aace) main_cset_slider_pane_t

0x8745,	// (0x0008380c) cset_list_set_pane_ParamLimits

0x8745,	// (0x0008380c) cset_list_set_pane

0x8756,	// (0x0008381d) aid_position_infowindow_above

0x875e,	// (0x00083825) aid_position_infowindow_below

0x8766,	// (0x0008382d) cset_list_set_pane_g1_ParamLimits

0x8766,	// (0x0008382d) cset_list_set_pane_g1

0xd26d,	// (0x00088334) cset_list_set_pane_g3_ParamLimits

0xd26d,	// (0x00088334) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0008aaed) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0008aaed) cset_list_set_pane_g

0xd27c,	// (0x00088343) cset_list_set_pane_t1_ParamLimits

0xd27c,	// (0x00088343) cset_list_set_pane_t1

0xa50f,	// (0x000855d6) list_highlight_pane_cp021_ParamLimits

0xa50f,	// (0x000855d6) list_highlight_pane_cp021

0x1774,	// (0x0007c83b) cset_slider_pane_g1

0x1786,	// (0x0007c84d) cset_slider_pane_g2

0x177d,	// (0x0007c844) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x0008aaf2) cset_slider_pane_g

0xef88,	// (0x0008a04f) aid_area_touch_cam4_zoom

0xef90,	// (0x0008a057) cam4_zoom_cont_pane

0xef98,	// (0x0008a05f) cam4_zoom_pane_g1

0xefa0,	// (0x0008a067) cam4_zoom_pane_g2

0x8772,	// (0x00083839) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x0008aaf9) cam4_zoom_pane_g

0xefa8,	// (0x0008a06f) cam4_zoom_cont_pane_g1

0xefb1,	// (0x0008a078) cam4_zoom_cont_pane_g2

0xefba,	// (0x0008a081) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0008ab00) cam4_zoom_cont_pane_g

0x7c72,	// (0x00082d39) call4_image_pane_ParamLimits

0x7c72,	// (0x00082d39) call4_image_pane

0xcf68,	// (0x0008802f) call4_windows_conf_pane_ParamLimits

0xcf7b,	// (0x00088042) popup_call4_audio_in_window_ParamLimits

0xcf7b,	// (0x00088042) popup_call4_audio_in_window

0xa4b4,	// (0x0008557b) bg_popup_call2_act_pane_cp02

0xcfd9,	// (0x000880a0) call4_list_conf_pane

0xc680,	// (0x00087747) call4_image_pane_g1

0xc680,	// (0x00087747) call4_image_pane_g2

0x0001,

0xf756,	// (0x0008a81d) call4_image_pane_g

0xd291,	// (0x00088358) list_single_graphic_popup_conf4_pane_ParamLimits

0xd291,	// (0x00088358) list_single_graphic_popup_conf4_pane

0xa4b4,	// (0x0008557b) list_highlight_pane_cp022

0xd2a4,	// (0x0008836b) list_single_graphic_popup_conf4_pane_g1

0x13d9,	// (0x0007c4a0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0008ab07) list_single_graphic_popup_conf4_pane_g

0xd2ac,	// (0x00088373) list_single_graphic_popup_conf4_pane_t1

0x41ef,	// (0x0007f2b6) popup_vtel_slider_window_ParamLimits

0x41ef,	// (0x0007f2b6) popup_vtel_slider_window

0xcf32,	// (0x00087ff9) dialer2_ne_pane_t2_ParamLimits

0xcf32,	// (0x00087ff9) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x0008a9f1) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x0008a9f1) dialer2_ne_pane_t

0xc46d,	// (0x00087534) bg_popup_sub_pane_cp010_ParamLimits

0xc46d,	// (0x00087534) bg_popup_sub_pane_cp010

0x877a,	// (0x00083841) popup_vtel_slider_window_g1_ParamLimits

0x877a,	// (0x00083841) popup_vtel_slider_window_g1

0x878d,	// (0x00083854) popup_vtel_slider_window_g2_ParamLimits

0x878d,	// (0x00083854) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0008ab0c) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0008ab0c) popup_vtel_slider_window_g

0x87e1,	// (0x000838a8) vtel_slider_pane_ParamLimits

0x87e1,	// (0x000838a8) vtel_slider_pane

0x8803,	// (0x000838ca) vtel_slider_pane_g1_ParamLimits

0x8803,	// (0x000838ca) vtel_slider_pane_g1

0x8817,	// (0x000838de) vtel_slider_pane_g2_ParamLimits

0x8817,	// (0x000838de) vtel_slider_pane_g2

0x882f,	// (0x000838f6) vtel_slider_pane_g3_ParamLimits

0x882f,	// (0x000838f6) vtel_slider_pane_g3

0x8803,	// (0x000838ca) vtel_slider_pane_g4_ParamLimits

0x8803,	// (0x000838ca) vtel_slider_pane_g4

0x8845,	// (0x0008390c) vtel_slider_pane_g5_ParamLimits

0x8845,	// (0x0008390c) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0008ab15) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0008ab15) vtel_slider_pane_g

0xa4b4,	// (0x0008557b) main_gallery2_pane

0x7ff4,	// (0x000830bb) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ff4,	// (0x000830bb) aid_size_row_itut2_dropdow_list

0x805e,	// (0x00083125) grid_vitu2_function_top_pane_ParamLimits

0x805e,	// (0x00083125) grid_vitu2_function_top_pane

0x80a1,	// (0x00083168) popup_vitu2_dropdown_list_window_ParamLimits

0x80a1,	// (0x00083168) popup_vitu2_dropdown_list_window

0x80c0,	// (0x00083187) popup_vitu2_match_list_window

0x885b,	// (0x00083922) cell_vitu2_function_top_pane_ParamLimits

0x885b,	// (0x00083922) cell_vitu2_function_top_pane

0x887b,	// (0x00083942) cell_vitu2_function_top_pane_cp01_ParamLimits

0x887b,	// (0x00083942) cell_vitu2_function_top_pane_cp01

0x889b,	// (0x00083962) cell_vitu2_function_top_wide_pane_ParamLimits

0x889b,	// (0x00083962) cell_vitu2_function_top_wide_pane

0xef7a,	// (0x0008a041) bg_button_pane_cp012

0x88b9,	// (0x00083980) cell_vitu2_function_top_pane_g1

0xefc3,	// (0x0008a08a) bg_button_pane_cp013_ParamLimits

0xefc3,	// (0x0008a08a) bg_button_pane_cp013

0x88cd,	// (0x00083994) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x88cd,	// (0x00083994) cell_vitu2_function_top_wide_pane_g1

0xef7a,	// (0x0008a041) bg_popup_sub_pane_cp20

0x88e5,	// (0x000839ac) list_vitu2_match_list_pane

0xd08e,	// (0x00088155) bg_popup_sub_pane_cp20_g1

0xd096,	// (0x0008815d) bg_popup_sub_pane_cp20_g2

0x0ef0,	// (0x0007bfb7) bg_popup_sub_pane_cp20_g3

0xd09e,	// (0x00088165) bg_popup_sub_pane_cp20_g4

0x0ed0,	// (0x0007bf97) bg_popup_sub_pane_cp20_g5

0xd2c8,	// (0x0008838f) bg_popup_sub_pane_cp20_g6

0xd0ae,	// (0x00088175) bg_popup_sub_pane_cp20_g7

0xd0b6,	// (0x0008817d) bg_popup_sub_pane_cp20_g8

0xd0be,	// (0x00088185) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0008ab20) bg_popup_sub_pane_cp20_g

0xefdf,	// (0x0008a0a6) list_vitu2_match_list_item_pane_ParamLimits

0xefdf,	// (0x0008a0a6) list_vitu2_match_list_item_pane

0xeff1,	// (0x0008a0b8) list_vitu2_match_list_item_pane_t1

0xac60,	// (0x00085d27) bg_popup_sub_pane_cp21

0xefff,	// (0x0008a0c6) grid_vitu2_dropdown_list_pane

0x892f,	// (0x000839f6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x892f,	// (0x000839f6) cell_vitu2_dropdown_list_char_pane

0x8950,	// (0x00083a17) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8950,	// (0x00083a17) cell_vitu2_dropdown_list_ctrl_pane

0xd2d0,	// (0x00088397) cell_vitu2_dropdown_list_char_pane_g1

0xd2d9,	// (0x000883a0) cell_vitu2_dropdown_list_char_pane_g2

0xd2e2,	// (0x000883a9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x0008ab3d) cell_vitu2_dropdown_list_char_pane_g

0x897c,	// (0x00083a43) cell_vitu2_dropdown_list_char_pane_t1

0x898a,	// (0x00083a51) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x898a,	// (0x00083a51) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8997,	// (0x00083a5e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8997,	// (0x00083a5e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x89a4,	// (0x00083a6b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x89a4,	// (0x00083a6b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x89b1,	// (0x00083a78) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x89b1,	// (0x00083a78) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf007,	// (0x0008a0ce) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf007,	// (0x0008a0ce) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0008ab44) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0008ab44) cell_vitu2_dropdown_list_ctrl_pane_g

0x89cd,	// (0x00083a94) aid_size_cell_gallery2_ParamLimits

0x89cd,	// (0x00083a94) aid_size_cell_gallery2

0x89e3,	// (0x00083aaa) grid_gallery2_pane_ParamLimits

0x89e3,	// (0x00083aaa) grid_gallery2_pane

0x89f5,	// (0x00083abc) scroll_pane_cp029_ParamLimits

0x89f5,	// (0x00083abc) scroll_pane_cp029

0x8a01,	// (0x00083ac8) cell_gallery2_pane_ParamLimits

0x8a01,	// (0x00083ac8) cell_gallery2_pane

0xd2eb,	// (0x000883b2) cell_gallery2_pane_g2

0x8a33,	// (0x00083afa) cell_gallery2_pane_g3

0xd2f5,	// (0x000883bc) cell_gallery2_pane_g4

0xd2fd,	// (0x000883c4) cell_gallery2_pane_g5

0x163e,	// (0x0007c705) grid_highlight_pane_cp10

0x80c0,	// (0x00083187) popup_vitu2_match_list_window_ParamLimits

0x80d1,	// (0x00083198) popup_vitu2_query_window_ParamLimits

0x80d1,	// (0x00083198) popup_vitu2_query_window

0xac60,	// (0x00085d27) bg_vitu2_candi_button_pane

0xd2d0,	// (0x00088397) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2d9,	// (0x000883a0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2e2,	// (0x000883a9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8a3b,	// (0x00083b02) bg_button_pane_cp015

0x8a43,	// (0x00083b0a) bg_button_pane_cp016

0x8a4c,	// (0x00083b13) bg_button_pane_cp017

0xa50f,	// (0x000855d6) bg_popup_sub_pane_cp22

0xd305,	// (0x000883cc) popup_vitu2_query_window_g1

0x8a72,	// (0x00083b39) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x0008ab4f) popup_vitu2_query_window_g

0x8a7e,	// (0x00083b45) popup_vitu2_query_window_t1_ParamLimits

0x8a7e,	// (0x00083b45) popup_vitu2_query_window_t1

0x8aa6,	// (0x00083b6d) popup_vitu2_query_window_t2_ParamLimits

0x8aa6,	// (0x00083b6d) popup_vitu2_query_window_t2

0x8ab8,	// (0x00083b7f) popup_vitu2_query_window_t3_ParamLimits

0x8ab8,	// (0x00083b7f) popup_vitu2_query_window_t3

0x8ae0,	// (0x00083ba7) popup_vitu2_query_window_t4_ParamLimits

0x8ae0,	// (0x00083ba7) popup_vitu2_query_window_t4

0x8af2,	// (0x00083bb9) popup_vitu2_query_window_t5_ParamLimits

0x8af2,	// (0x00083bb9) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0008ab54) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0008ab54) popup_vitu2_query_window_t

0xd17c,	// (0x00088243) main_cset_text_pane

0x84ad,	// (0x00083574) aid_area_touch_slider_ParamLimits

0x84c9,	// (0x00083590) cset_slider_pane_ParamLimits

0x84f3,	// (0x000835ba) main_cset_slider_pane_g1_ParamLimits

0x8508,	// (0x000835cf) main_cset_slider_pane_g2_ParamLimits

0xd19d,	// (0x00088264) main_cset_slider_pane_g3_ParamLimits

0xd19d,	// (0x00088264) main_cset_slider_pane_g3

0x851d,	// (0x000835e4) main_cset_slider_pane_g4_ParamLimits

0x851d,	// (0x000835e4) main_cset_slider_pane_g4

0x852c,	// (0x000835f3) main_cset_slider_pane_g5_ParamLimits

0x852c,	// (0x000835f3) main_cset_slider_pane_g5

0x8538,	// (0x000835ff) main_cset_slider_pane_g6_ParamLimits

0x8538,	// (0x000835ff) main_cset_slider_pane_g6

0xf9e2,	// (0x0008aaa9) main_cset_slider_pane_g_ParamLimits

0xd1cd,	// (0x00088294) main_cset_slider_pane_t1_ParamLimits

0x85c4,	// (0x0008368b) main_cset_slider_pane_t2_ParamLimits

0x85de,	// (0x000836a5) main_cset_slider_pane_t3_ParamLimits

0x85f8,	// (0x000836bf) main_cset_slider_pane_t4_ParamLimits

0x8612,	// (0x000836d9) main_cset_slider_pane_t5_ParamLimits

0x862c,	// (0x000836f3) main_cset_slider_pane_t6_ParamLimits

0x8641,	// (0x00083708) main_cset_slider_pane_t7_ParamLimits

0x866b,	// (0x00083732) main_cset_slider_pane_t8_ParamLimits

0x866b,	// (0x00083732) main_cset_slider_pane_t8

0x8693,	// (0x0008375a) main_cset_slider_pane_t9_ParamLimits

0x8693,	// (0x0008375a) main_cset_slider_pane_t9

0x86bb,	// (0x00083782) main_cset_slider_pane_t10_ParamLimits

0x86bb,	// (0x00083782) main_cset_slider_pane_t10

0x86e3,	// (0x000837aa) main_cset_slider_pane_t11_ParamLimits

0x86e3,	// (0x000837aa) main_cset_slider_pane_t11

0x870b,	// (0x000837d2) main_cset_slider_pane_t12_ParamLimits

0x870b,	// (0x000837d2) main_cset_slider_pane_t12

0x8728,	// (0x000837ef) main_cset_slider_pane_t13_ParamLimits

0x8728,	// (0x000837ef) main_cset_slider_pane_t13

0xfa07,	// (0x0008aace) main_cset_slider_pane_t_ParamLimits

0xa4b4,	// (0x0008557b) bg_popup_sub_pane_cp011

0xd311,	// (0x000883d8) main_cset_text_pane_g1

0xd319,	// (0x000883e0) main_cset_text_pane_t1

0xd327,	// (0x000883ee) main_cset_text_pane_t2

0xd335,	// (0x000883fc) main_cset_text_pane_t3

0xd343,	// (0x0008840a) main_cset_text_pane_t4

0xd351,	// (0x00088418) main_cset_text_pane_t5

0xd35f,	// (0x00088426) main_cset_text_pane_t6

0xd36d,	// (0x00088434) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x0008ab5f) main_cset_text_pane_t

0xa4b4,	// (0x0008557b) main_cam4_burst_pane

0xa4b4,	// (0x0008557b) main_cam5_pane

0x83fb,	// (0x000834c2) bg_button_pane_cp019

0x8404,	// (0x000834cb) bg_button_pane_cp020

0xd1a9,	// (0x00088270) main_cset_slider_pane_g7_ParamLimits

0xd1a9,	// (0x00088270) main_cset_slider_pane_g7

0xd1b5,	// (0x0008827c) main_cset_slider_pane_g8_ParamLimits

0xd1b5,	// (0x0008827c) main_cset_slider_pane_g8

0x854c,	// (0x00083613) main_cset_slider_pane_g9_ParamLimits

0x854c,	// (0x00083613) main_cset_slider_pane_g9

0x8558,	// (0x0008361f) main_cset_slider_pane_g10_ParamLimits

0x8558,	// (0x0008361f) main_cset_slider_pane_g10

0x8564,	// (0x0008362b) main_cset_slider_pane_g11_ParamLimits

0x8564,	// (0x0008362b) main_cset_slider_pane_g11

0x8570,	// (0x00083637) main_cset_slider_pane_g12_ParamLimits

0x8570,	// (0x00083637) main_cset_slider_pane_g12

0x857c,	// (0x00083643) main_cset_slider_pane_g13_ParamLimits

0x857c,	// (0x00083643) main_cset_slider_pane_g13

0x8588,	// (0x0008364f) main_cset_slider_pane_g14_ParamLimits

0x8588,	// (0x0008364f) main_cset_slider_pane_g14

0x8594,	// (0x0008365b) main_cset_slider_pane_g15_ParamLimits

0x8594,	// (0x0008365b) main_cset_slider_pane_g15

0xd1fb,	// (0x000882c2) main_cset_slider_pane_t14_ParamLimits

0xd1fb,	// (0x000882c2) main_cset_slider_pane_t14

0xd234,	// (0x000882fb) main_cset_slider_pane_t15_ParamLimits

0xd234,	// (0x000882fb) main_cset_slider_pane_t15

0x8b04,	// (0x00083bcb) aid_cam4_burst_size_cell_ParamLimits

0x8b04,	// (0x00083bcb) aid_cam4_burst_size_cell

0x8b24,	// (0x00083beb) grid_cam4_burst_pane_ParamLimits

0x8b24,	// (0x00083beb) grid_cam4_burst_pane

0x8b4a,	// (0x00083c11) linegrid_cam4_burst_pane_ParamLimits

0x8b4a,	// (0x00083c11) linegrid_cam4_burst_pane

0x8b6c,	// (0x00083c33) scroll_pane_cp30_ParamLimits

0x8b6c,	// (0x00083c33) scroll_pane_cp30

0x8b78,	// (0x00083c3f) cell_cam4_burst_pane_ParamLimits

0x8b78,	// (0x00083c3f) cell_cam4_burst_pane

0xd37b,	// (0x00088442) linegrid_cam4_burst_pane_g1_ParamLimits

0xd37b,	// (0x00088442) linegrid_cam4_burst_pane_g1

0x8bbf,	// (0x00083c86) linegrid_cam4_burst_pane_g2_ParamLimits

0x8bbf,	// (0x00083c86) linegrid_cam4_burst_pane_g2

0xd388,	// (0x0008844f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd388,	// (0x0008844f) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x0008ab6e) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x0008ab6e) linegrid_cam4_burst_pane_g

0x8bd0,	// (0x00083c97) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8bd0,	// (0x00083c97) linegrid_cam4_burst_pane_g3_copy1

0xd395,	// (0x0008845c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd395,	// (0x0008845c) linegrid_cam4_burst_pane_g4

0x8bea,	// (0x00083cb1) linegrid_cam4_burst_pane_g5_ParamLimits

0x8bea,	// (0x00083cb1) linegrid_cam4_burst_pane_g5

0x8bfb,	// (0x00083cc2) linegrid_cam4_burst_pane_g6_ParamLimits

0x8bfb,	// (0x00083cc2) linegrid_cam4_burst_pane_g6

0xd3a2,	// (0x00088469) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3a2,	// (0x00088469) linegrid_cam4_burst_pane_g7

0x8c0c,	// (0x00083cd3) cell_cam4_burst_pane_g1

0xd3bb,	// (0x00088482) main_cam5_pane_t1_ParamLimits

0xd3bb,	// (0x00088482) main_cam5_pane_t1

0xd3cd,	// (0x00088494) main_cam5_pane_t2_ParamLimits

0xd3cd,	// (0x00088494) main_cam5_pane_t2

0xd3df,	// (0x000884a6) main_cam5_pane_t3_ParamLimits

0xd3df,	// (0x000884a6) main_cam5_pane_t3

0xd3f1,	// (0x000884b8) main_cam5_pane_t4_ParamLimits

0xd3f1,	// (0x000884b8) main_cam5_pane_t4

0xd407,	// (0x000884ce) main_cam5_pane_t5_ParamLimits

0xd407,	// (0x000884ce) main_cam5_pane_t5

0xd419,	// (0x000884e0) main_cam5_pane_t6_ParamLimits

0xd419,	// (0x000884e0) main_cam5_pane_t6

0xd42b,	// (0x000884f2) main_cam5_pane_t7_ParamLimits

0xd42b,	// (0x000884f2) main_cam5_pane_t7

0xd43d,	// (0x00088504) main_cam5_pane_t8_ParamLimits

0xd43d,	// (0x00088504) main_cam5_pane_t8

0xd459,	// (0x00088520) main_cam5_pane_t9_ParamLimits

0xd459,	// (0x00088520) main_cam5_pane_t9

0xd46b,	// (0x00088532) main_cam5_pane_t10_ParamLimits

0xd46b,	// (0x00088532) main_cam5_pane_t10

0xd47d,	// (0x00088544) main_cam5_pane_t11_ParamLimits

0xd47d,	// (0x00088544) main_cam5_pane_t11

0xd48f,	// (0x00088556) main_cam5_pane_t12_ParamLimits

0xd48f,	// (0x00088556) main_cam5_pane_t12

0xd4a4,	// (0x0008856b) main_cam5_pane_t13_ParamLimits

0xd4a4,	// (0x0008856b) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x0008ab7a) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x0008ab7a) main_cam5_pane_t

0x3461,	// (0x0007e528) popup_scut_keymap_window_ParamLimits

0x3461,	// (0x0007e528) popup_scut_keymap_window

0x8c21,	// (0x00083ce8) aid_size_cell_brow_shortcut

0x163e,	// (0x0007c705) bg_popup_window_pane_cp010

0x8c2d,	// (0x00083cf4) grid_scut_pane

0x8c37,	// (0x00083cfe) cell_scut_pane_ParamLimits

0x8c37,	// (0x00083cfe) cell_scut_pane

0x8c4c,	// (0x00083d13) cell_scut_pane_g1

0xd4c1,	// (0x00088588) cell_scut_pane_t1

0xd4d0,	// (0x00088597) cell_scut_pane_t2

0x8c55,	// (0x00083d1c) cell_scut_pane_t3

0x0002,

0xface,	// (0x0008ab95) cell_scut_pane_t

0x6c56,	// (0x00081d1d) main_mup3_pane_g8_ParamLimits

0x6c56,	// (0x00081d1d) main_mup3_pane_g8

0x8008,	// (0x000830cf) area_vitu2_query_pane_ParamLimits

0x8008,	// (0x000830cf) area_vitu2_query_pane

0x8a55,	// (0x00083b1c) input_focus_pane_cp08

0xd4df,	// (0x000885a6) area_vitu2_query_pane_g1

0x8c63,	// (0x00083d2a) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x0008ab9c) area_vitu2_query_pane_g

0x8c72,	// (0x00083d39) area_vitu2_query_pane_t1_ParamLimits

0x8c72,	// (0x00083d39) area_vitu2_query_pane_t1

0x8c84,	// (0x00083d4b) area_vitu2_query_pane_t2_ParamLimits

0x8c84,	// (0x00083d4b) area_vitu2_query_pane_t2

0x8c96,	// (0x00083d5d) area_vitu2_query_pane_t3_ParamLimits

0x8c96,	// (0x00083d5d) area_vitu2_query_pane_t3

0xd4eb,	// (0x000885b2) area_vitu2_query_pane_t4_ParamLimits

0xd4eb,	// (0x000885b2) area_vitu2_query_pane_t4

0xd513,	// (0x000885da) area_vitu2_query_pane_t5_ParamLimits

0xd513,	// (0x000885da) area_vitu2_query_pane_t5

0xd53b,	// (0x00088602) area_vitu2_query_pane_t6_ParamLimits

0xd53b,	// (0x00088602) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x0008aba1) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x0008aba1) area_vitu2_query_pane_t

0x8cbe,	// (0x00083d85) bg_button_pane_cp018

0x8ccb,	// (0x00083d92) bg_button_pane_cp021

0x8cd7,	// (0x00083d9e) bg_button_pane_cp022

0x8ce6,	// (0x00083dad) input_focus_pane_cp09

0x4ffb,	// (0x000800c2) aid_size_touch_mv_arrow_left

0x1517,	// (0x0007c5de) aid_size_touch_mv_arrow_right

0x85ac,	// (0x00083673) main_cset_slider_pane_g16_ParamLimits

0x85ac,	// (0x00083673) main_cset_slider_pane_g16

0x85b8,	// (0x0008367f) main_cset_slider_pane_g17_ParamLimits

0x85b8,	// (0x0008367f) main_cset_slider_pane_g17

0x8c0c,	// (0x00083cd3) cell_cam4_burst_pane_g1_ParamLimits

0xa4b4,	// (0x0008557b) compa_mode_pane

0x879d,	// (0x00083864) popup_vtel_slider_window_g3_ParamLimits

0x879d,	// (0x00083864) popup_vtel_slider_window_g3

0x87b4,	// (0x0008387b) popup_vtel_slider_window_g4_ParamLimits

0x87b4,	// (0x0008387b) popup_vtel_slider_window_g4

0x87cb,	// (0x00083892) popup_vtel_slider_window_t1_ParamLimits

0x87cb,	// (0x00083892) popup_vtel_slider_window_t1

0xa4b4,	// (0x0008557b) main_cl_pane

0xc263,	// (0x0008732a) popup_imed_adjust2_window_ParamLimits

0xc23d,	// (0x00087304) bg_tb_trans_pane_cp05_ParamLimits

0xcb49,	// (0x00087c10) popup_imed_adjust2_window_g1_ParamLimits

0xcb58,	// (0x00087c1f) popup_imed_adjust2_window_g2_ParamLimits

0xcb58,	// (0x00087c1f) popup_imed_adjust2_window_g2

0xcb64,	// (0x00087c2b) popup_imed_adjust2_window_g3_ParamLimits

0xcb64,	// (0x00087c2b) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x0008a91b) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x0008a91b) popup_imed_adjust2_window_g

0xcb70,	// (0x00087c37) popup_imed_adjust2_window_t1_ParamLimits

0xcb88,	// (0x00087c4f) slider_imed_adjust_pane_ParamLimits

0xcb9c,	// (0x00087c63) slider_imed_adjust_pane_g1_ParamLimits

0xcbac,	// (0x00087c73) slider_imed_adjust_pane_g2_ParamLimits

0xcbbc,	// (0x00087c83) slider_imed_adjust_pane_g3_ParamLimits

0xcbcd,	// (0x00087c94) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0008a922) slider_imed_adjust_pane_g_ParamLimits

0x7d69,	// (0x00082e30) aid_touch_area_cam4_ParamLimits

0x7d69,	// (0x00082e30) aid_touch_area_cam4

0xef4c,	// (0x0008a013) battery_pane_cp01

0x7e0b,	// (0x00082ed2) main_camera4_pane_g6_ParamLimits

0x7e0b,	// (0x00082ed2) main_camera4_pane_g6

0x7e2c,	// (0x00082ef3) main_camera4_pane_t2_ParamLimits

0x7e2c,	// (0x00082ef3) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0008aa25) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0008aa25) main_camera4_pane_t

0x7e8d,	// (0x00082f54) aid_touch_area_vid4_ParamLimits

0x7e8d,	// (0x00082f54) aid_touch_area_vid4

0x7ecf,	// (0x00082f96) main_video4_pane_g5_ParamLimits

0x7ecf,	// (0x00082f96) main_video4_pane_g5

0x7ef0,	// (0x00082fb7) vid4_progress_pane_ParamLimits

0x7ef0,	// (0x00082fb7) vid4_progress_pane

0xd1c1,	// (0x00088288) main_cset_slider_pane_g18_ParamLimits

0xd1c1,	// (0x00088288) main_cset_slider_pane_g18

0xd3af,	// (0x00088476) cell_cam4_burst_pane_g2_ParamLimits

0xd3af,	// (0x00088476) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x0008ab75) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x0008ab75) cell_cam4_burst_pane_g

0xac84,	// (0x00085d4b) bg_cl_pane_ParamLimits

0xac84,	// (0x00085d4b) bg_cl_pane

0x8cf5,	// (0x00083dbc) cl_header_pane_ParamLimits

0x8cf5,	// (0x00083dbc) cl_header_pane

0x8d09,	// (0x00083dd0) cl_listscroll_pane_ParamLimits

0x8d09,	// (0x00083dd0) cl_listscroll_pane

0xd587,	// (0x0008864e) bg_cl_pane_g1

0xd58f,	// (0x00088656) bg_cl_pane_g2

0xd597,	// (0x0008865e) bg_cl_pane_g3

0xd59f,	// (0x00088666) bg_cl_pane_g4

0xd5a7,	// (0x0008866e) bg_cl_pane_g5

0xd5af,	// (0x00088676) bg_cl_pane_g6

0xd5b7,	// (0x0008867e) bg_cl_pane_g7

0xd5bf,	// (0x00088686) bg_cl_pane_g8

0xd5c7,	// (0x0008868e) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x0008abb0) bg_cl_pane_g

0x8d19,	// (0x00083de0) aid_height_cl_leading_ParamLimits

0x8d19,	// (0x00083de0) aid_height_cl_leading

0x8d25,	// (0x00083dec) aid_height_cl_text_ParamLimits

0x8d25,	// (0x00083dec) aid_height_cl_text

0xa50f,	// (0x000855d6) bg_cl_header_pane_ParamLimits

0xa50f,	// (0x000855d6) bg_cl_header_pane

0x8d44,	// (0x00083e0b) cl_header_pane_g1_ParamLimits

0x8d44,	// (0x00083e0b) cl_header_pane_g1

0x8d5a,	// (0x00083e21) cl_header_pane_t1_ParamLimits

0x8d5a,	// (0x00083e21) cl_header_pane_t1

0xd5cf,	// (0x00088696) cl_list_pane

0xd5d8,	// (0x0008869f) hc_scroll_pane_cp01

0x0ed0,	// (0x0007bf97) bg_cl_header_pane_g1

0xd08e,	// (0x00088155) bg_cl_header_pane_g2

0x0ef0,	// (0x0007bfb7) bg_cl_header_pane_g3

0xd09e,	// (0x00088165) bg_cl_header_pane_g4

0xd096,	// (0x0008815d) bg_cl_header_pane_g5

0xd2c8,	// (0x0008838f) bg_cl_header_pane_g6

0xd0b6,	// (0x0008817d) bg_cl_header_pane_g7

0xd0be,	// (0x00088185) bg_cl_header_pane_g8

0xd0ae,	// (0x00088175) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x0008abc3) bg_cl_header_pane_g

0x8d73,	// (0x00083e3a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d73,	// (0x00083e3a) hc_cl_list_double_graphic_heading_pane

0x8d83,	// (0x00083e4a) hc_cl_list_single_graphic_pane_ParamLimits

0x8d83,	// (0x00083e4a) hc_cl_list_single_graphic_pane

0x8d96,	// (0x00083e5d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d96,	// (0x00083e5d) hc_cl_list_single_graphic_pane_g1

0x8da2,	// (0x00083e69) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8da2,	// (0x00083e69) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x0008abd6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x0008abd6) hc_cl_list_single_graphic_pane_g

0x8db6,	// (0x00083e7d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8db6,	// (0x00083e7d) hc_cl_list_single_graphic_pane_t1

0x8d96,	// (0x00083e5d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d96,	// (0x00083e5d) hc_cl_list_double_graphic_heading_pane_g1

0x8dcb,	// (0x00083e92) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8dcb,	// (0x00083e92) hc_cl_list_double_graphic_heading_pane_g2

0x8ddf,	// (0x00083ea6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ddf,	// (0x00083ea6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0008abdb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0008abdb) hc_cl_list_double_graphic_heading_pane_g

0x8df3,	// (0x00083eba) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8df3,	// (0x00083eba) hc_cl_list_double_graphic_heading_pane_t1

0x8e08,	// (0x00083ecf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8e08,	// (0x00083ecf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x0008abe2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x0008abe2) hc_cl_list_double_graphic_heading_pane_t

0xf015,	// (0x0008a0dc) vid4_progress_pane_g1

0xf024,	// (0x0008a0eb) vid4_progress_pane_g2

0xf033,	// (0x0008a0fa) vid4_progress_pane_g3

0xf042,	// (0x0008a109) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x0008abe7) vid4_progress_pane_g

0xf05a,	// (0x0008a121) vid4_progress_pane_t1

0xf070,	// (0x0008a137) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x0008abf2) vid4_progress_pane_t

0xf09a,	// (0x0008a161) wait_bar_pane_cp07

0xc47b,	// (0x00087542) blid_firmament_pane_ParamLimits

0xc4bc,	// (0x00087583) popup_blid_sat_info2_window_g1

0xc4e0,	// (0x000875a7) popup_blid_sat_info2_window_t3

0xc4ee,	// (0x000875b5) popup_blid_sat_info2_window_t4

0xc4fc,	// (0x000875c3) popup_blid_sat_info2_window_t5

0xc50a,	// (0x000875d1) popup_blid_sat_info2_window_t6

0xc51a,	// (0x000875e1) popup_blid_sat_info2_window_t7

0xc528,	// (0x000875ef) popup_blid_sat_info2_window_t8

0xc536,	// (0x000875fd) popup_blid_sat_info2_window_t9

0xc544,	// (0x0008760b) popup_blid_sat_info2_window_t10

0xc600,	// (0x000876c7) aid_firma_cardinal_ParamLimits

0xc614,	// (0x000876db) blid_firmament_pane_t1_ParamLimits

0xc62b,	// (0x000876f2) blid_firmament_pane_t2_ParamLimits

0xc642,	// (0x00087709) blid_firmament_pane_t3_ParamLimits

0xc659,	// (0x00087720) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0008a814) blid_firmament_pane_t_ParamLimits

0xc670,	// (0x00087737) blid_sat_info_pane_ParamLimits

0xa50f,	// (0x000855d6) main_cam_set_pane_ParamLimits

0x74ad,	// (0x00082574) aid_size_cell_colour_35_ParamLimits

0x74cd,	// (0x00082594) aid_size_cell_colour_112_ParamLimits

0x74ed,	// (0x000825b4) aid_size_cell_effect_ParamLimits

0xc23d,	// (0x00087304) bg_tb_trans_pane_cp02_ParamLimits

0x111d,	// (0x0007c1e4) heading_imed_pane_ParamLimits

0x750d,	// (0x000825d4) listscroll_imed_pane_ParamLimits

0xb82f,	// (0x000868f6) popup_call2_audio_first_window_g5_ParamLimits

0xb82f,	// (0x000868f6) popup_call2_audio_first_window_g5

0x7a2a,	// (0x00082af1) aid_size_touch_image3_arrow_left_ParamLimits

0x7a2a,	// (0x00082af1) aid_size_touch_image3_arrow_left

0x7a4a,	// (0x00082b11) aid_size_touch_image3_arrow_right_ParamLimits

0x7a4a,	// (0x00082b11) aid_size_touch_image3_arrow_right

0xf085,	// (0x0008a14c) vid4_progress_pane_t3

0x77e1,	// (0x000828a8) main_hwr_training_symbol_option_pane_ParamLimits

0x77e1,	// (0x000828a8) main_hwr_training_symbol_option_pane

0xce28,	// (0x00087eef) popup_hwr_training_preview_window_ParamLimits

0xce28,	// (0x00087eef) popup_hwr_training_preview_window

0x77fd,	// (0x000828c4) hwr_training_navi_pane_g5_ParamLimits

0x77fd,	// (0x000828c4) hwr_training_navi_pane_g5

0xd07c,	// (0x00088143) popup_char_count_window

0xef7a,	// (0x0008a041) bg_popup_sub_pane_cp20_ParamLimits

0x88e5,	// (0x000839ac) list_vitu2_match_list_pane_ParamLimits

0x88f4,	// (0x000839bb) vitu2_page_scroll_pane_ParamLimits

0x88f4,	// (0x000839bb) vitu2_page_scroll_pane

0xd63b,	// (0x00088702) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd63b,	// (0x00088702) list_single_hwr_training_symbol_option_pane

0xd64e,	// (0x00088715) list_single_hwr_training_symbol_option_pane_g1

0xd656,	// (0x0008871d) list_single_hwr_training_symbol_option_pane_t1

0xd664,	// (0x0008872b) bg_button_pane_cp023

0xd66d,	// (0x00088734) bg_button_pane_cp024

0x8e1d,	// (0x00083ee4) vitu2_page_scroll_pane_g1

0x8e25,	// (0x00083eec) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x0008abf9) vitu2_page_scroll_pane_g

0x8e2d,	// (0x00083ef4) vitu2_page_scroll_pane_t1

0xc3d3,	// (0x0008749a) popup_char_count_window_g1

0xd6a0,	// (0x00088767) popup_char_count_window_g2

0xd6a9,	// (0x00088770) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0008abfe) popup_char_count_window_g

0xd6b2,	// (0x00088779) popup_char_count_window_t1

0xa4b4,	// (0x0008557b) main_vded2_pane

0xcb37,	// (0x00087bfe) aid_size_cell_imed_line

0xcb41,	// (0x00087c08) grid_imed_line_width_pane

0x7f64,	// (0x0008302b) vid4_indicators_pane_g4

0xd6c0,	// (0x00088787) cell_imed_line_width_pane_ParamLimits

0xd6c0,	// (0x00088787) cell_imed_line_width_pane

0xd6d2,	// (0x00088799) cell_imed_line_width_pane_g1

0xc455,	// (0x0008751c) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0008ac05) cell_imed_line_width_pane_g

0x8e3c,	// (0x00083f03) main_vded2_pane_g1_ParamLimits

0x8e3c,	// (0x00083f03) main_vded2_pane_g1

0x8e52,	// (0x00083f19) main_vded2_pane_g2_ParamLimits

0x8e52,	// (0x00083f19) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x0008ac0a) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x0008ac0a) main_vded2_pane_g

0x8e62,	// (0x00083f29) vded2_slider_pane_ParamLimits

0x8e62,	// (0x00083f29) vded2_slider_pane

0x8e75,	// (0x00083f3c) aid_size_touch_vded2_end

0x8e7d,	// (0x00083f44) aid_size_touch_vded2_playhead

0x8e85,	// (0x00083f4c) aid_size_touch_vded2_start

0x8e8d,	// (0x00083f54) vded2_slider_bg_pane

0x8e96,	// (0x00083f5d) vded2_slider_pane_g1

0x8e9f,	// (0x00083f66) vded2_slider_pane_g2

0x8ea7,	// (0x00083f6e) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0008ac0f) vded2_slider_pane_g

0x8eb0,	// (0x00083f77) vded2_slider_bg_pane_g1

0x8eb9,	// (0x00083f80) vded2_slider_bg_pane_g2

0x8ec2,	// (0x00083f89) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0008ac16) vded2_slider_bg_pane_g

0x556c,	// (0x00080633) aid_postcard_touch_down_pane_ParamLimits

0x556c,	// (0x00080633) aid_postcard_touch_down_pane

0x557e,	// (0x00080645) aid_postcard_touch_up_pane_ParamLimits

0x557e,	// (0x00080645) aid_postcard_touch_up_pane

0xa4b4,	// (0x0008557b) main_blid2_pane

0xc24b,	// (0x00087312) popup_blid2_search_window

0xa4b4,	// (0x0008557b) blid2_gps_pane

0xa4b4,	// (0x0008557b) blid2_navig_pane

0xa4b4,	// (0x0008557b) blid2_search_pane

0xa4b4,	// (0x0008557b) blid2_tripm_pane

0x8ecb,	// (0x00083f92) blid2_search_pane_g1_ParamLimits

0x8ecb,	// (0x00083f92) blid2_search_pane_g1

0x8edf,	// (0x00083fa6) blid2_search_pane_t1_ParamLimits

0x8edf,	// (0x00083fa6) blid2_search_pane_t1

0x8ef1,	// (0x00083fb8) aid_size_cell_blid2_gps_ParamLimits

0x8ef1,	// (0x00083fb8) aid_size_cell_blid2_gps

0x8f09,	// (0x00083fd0) blid2_gps_pane_g1_ParamLimits

0x8f09,	// (0x00083fd0) blid2_gps_pane_g1

0x8f1d,	// (0x00083fe4) grid_blid2_satellite_pane_ParamLimits

0x8f1d,	// (0x00083fe4) grid_blid2_satellite_pane

0x8f31,	// (0x00083ff8) blid2_navig_pane_g1_ParamLimits

0x8f31,	// (0x00083ff8) blid2_navig_pane_g1

0x8f3d,	// (0x00084004) blid2_navig_pane_t1_ParamLimits

0x8f3d,	// (0x00084004) blid2_navig_pane_t1

0x8f56,	// (0x0008401d) blid2_navig_pane_t2_ParamLimits

0x8f56,	// (0x0008401d) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0008ac1d) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0008ac1d) blid2_navig_pane_t

0x8f6f,	// (0x00084036) blid2_navig_ring_pane_ParamLimits

0x8f6f,	// (0x00084036) blid2_navig_ring_pane

0x8f84,	// (0x0008404b) blid2_speed_pane_ParamLimits

0x8f84,	// (0x0008404b) blid2_speed_pane

0x8f90,	// (0x00084057) blid2_tripm_pane_g1_ParamLimits

0x8f90,	// (0x00084057) blid2_tripm_pane_g1

0x8fa5,	// (0x0008406c) blid2_tripm_pane_g2_ParamLimits

0x8fa5,	// (0x0008406c) blid2_tripm_pane_g2

0x8fb9,	// (0x00084080) blid2_tripm_pane_g3_ParamLimits

0x8fb9,	// (0x00084080) blid2_tripm_pane_g3

0x8fcd,	// (0x00084094) blid2_tripm_pane_g4_ParamLimits

0x8fcd,	// (0x00084094) blid2_tripm_pane_g4

0x8fe1,	// (0x000840a8) blid2_tripm_pane_g5_ParamLimits

0x8fe1,	// (0x000840a8) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0008ac22) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0008ac22) blid2_tripm_pane_g

0x9003,	// (0x000840ca) blid2_tripm_pane_t1_ParamLimits

0x9003,	// (0x000840ca) blid2_tripm_pane_t1

0x901a,	// (0x000840e1) blid2_tripm_pane_t2_ParamLimits

0x901a,	// (0x000840e1) blid2_tripm_pane_t2

0x9031,	// (0x000840f8) blid2_tripm_pane_t3_ParamLimits

0x9031,	// (0x000840f8) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0008ac2f) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0008ac2f) blid2_tripm_pane_t

0x9074,	// (0x0008413b) cell_blid2_satellite_pane_ParamLimits

0x9074,	// (0x0008413b) cell_blid2_satellite_pane

0x908c,	// (0x00084153) cell_blid2_satellite_pane_g1

0xd6db,	// (0x000887a2) cell_blid2_satellite_pane_t1

0xc680,	// (0x00087747) blid2_speed_pane_g1

0xd6e9,	// (0x000887b0) blid2_speed_pane_t1

0xd6f7,	// (0x000887be) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x0008ac38) blid2_speed_pane_t

0xc680,	// (0x00087747) blid2_navig_ring_pane_g1

0x9095,	// (0x0008415c) blid2_navig_ring_pane_g2

0x909d,	// (0x00084164) blid2_navig_ring_pane_g3

0x90a5,	// (0x0008416c) blid2_navig_ring_pane_g4

0x90ad,	// (0x00084174) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x0008ac3d) blid2_navig_ring_pane_g

0xa4b4,	// (0x0008557b) bg_popup_window_pane_cp011

0xd705,	// (0x000887cc) popup_blid2_search_window_g1

0xd70d,	// (0x000887d4) popup_blid2_search_window_t1

0xd71b,	// (0x000887e2) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x0008ac48) popup_blid2_search_window_t

0xb155,	// (0x0008621c) main_browser_pane_g1

0xac84,	// (0x00085d4b) main_browser_pane_ParamLimits

0xef7a,	// (0x0008a041) bg_button_pane_cp011_ParamLimits

0x81d5,	// (0x0008329c) cell_vitu2_function_pane_g1_ParamLimits

0xa50f,	// (0x000855d6) bg_popup_sub_pane_cp22_ParamLimits

0x8a55,	// (0x00083b1c) input_focus_pane_cp08_ParamLimits

0x8a62,	// (0x00083b29) popup_vitu2_query_button_pane_ParamLimits

0x8a62,	// (0x00083b29) popup_vitu2_query_button_pane

0x8a3b,	// (0x00083b02) popup_vitu2_query_input_button_pane

0xd305,	// (0x000883cc) popup_vitu2_query_window_g1_ParamLimits

0x8a72,	// (0x00083b39) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x0008ab4f) popup_vitu2_query_window_g_ParamLimits

0xa4b4,	// (0x0008557b) bg_button_pane_cp026

0x90b5,	// (0x0008417c) popup_vitu2_query_input_button_pane_g1

0xa4b4,	// (0x0008557b) bg_button_pane_cp025

0xd729,	// (0x000887f0) popup_vitu2_query_button_pane_t1

0x69bf,	// (0x00081a86) main_mp3_pane_t6

0x69cd,	// (0x00081a94) popup_slider_window_cp01

0xef5c,	// (0x0008a023) cam4_battery_pane

0xef5c,	// (0x0008a023) cam4_battery_pane_cp02

0xef5c,	// (0x0008a023) cam4_battery_pane_cp01

0xef5c,	// (0x0008a023) cam4_battery_pane_cp03

0xcf28,	// (0x00087fef) cam4_battery_pane_g1

0xc680,	// (0x00087747) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x0008ac4d) cam4_battery_pane_g

0xc552,	// (0x00087619) popup_blid_sat_info2_window_t11

0x4ffb,	// (0x000800c2) aid_size_touch_mv_arrow_left_ParamLimits

0x1517,	// (0x0007c5de) aid_size_touch_mv_arrow_right_ParamLimits

0x154f,	// (0x0007c616) navi_pane_g1_ParamLimits

0x155b,	// (0x0007c622) navi_pane_g2_ParamLimits

0x5014,	// (0x000800db) navi_pane_g3_ParamLimits

0xf44c,	// (0x0008a513) navi_pane_g_ParamLimits

0x5039,	// (0x00080100) navi_pane_mv_t1_ParamLimits

0x7519,	// (0x000825e0) grid_imed_effect_pane_ParamLimits

0xb08f,	// (0x00086156) aid_placing_vt_slider_lsc

0xb097,	// (0x0008615e) aid_placing_vt_slider_prt

0xa50f,	// (0x000855d6) bg_tb_trans_pane_cp01_ParamLimits

0xc7cf,	// (0x00087896) popup_image_details_window_g1_ParamLimits

0xc7e2,	// (0x000878a9) popup_image_details_window_g2_ParamLimits

0xc7f7,	// (0x000878be) popup_image_details_window_g3_ParamLimits

0xc7f7,	// (0x000878be) popup_image_details_window_g3

0xf792,	// (0x0008a859) popup_image_details_window_g_ParamLimits

0xc80b,	// (0x000878d2) popup_image_details_window_t1_ParamLimits

0xc81d,	// (0x000878e4) popup_image_details_window_t2_ParamLimits

0xc836,	// (0x000878fd) popup_image_details_window_t3_ParamLimits

0xc84a,	// (0x00087911) popup_image_details_window_t4_ParamLimits

0xc865,	// (0x0008792c) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x0008a860) popup_image_details_window_t_ParamLimits

0x8d31,	// (0x00083df8) cl_header_name_pane_ParamLimits

0x8d31,	// (0x00083df8) cl_header_name_pane

0x90bd,	// (0x00084184) cl_header_name_pane_t1_ParamLimits

0x90bd,	// (0x00084184) cl_header_name_pane_t1

0x90de,	// (0x000841a5) cl_header_name_pane_t2_ParamLimits

0x90de,	// (0x000841a5) cl_header_name_pane_t2

0x9120,	// (0x000841e7) cl_header_name_pane_t3_ParamLimits

0x9120,	// (0x000841e7) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x0008ac52) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x0008ac52) cl_header_name_pane_t

0x15dd,	// (0x0007c6a4) navi_pane_mv_g2_ParamLimits

0xd01e,	// (0x000880e5) field_vitu2_entry_pane_g1_ParamLimits

0xd02a,	// (0x000880f1) field_vitu2_entry_pane_g2_ParamLimits

0xd036,	// (0x000880fd) field_vitu2_entry_pane_g3_ParamLimits

0xd036,	// (0x000880fd) field_vitu2_entry_pane_g3

0xf987,	// (0x0008aa4e) field_vitu2_entry_pane_g_ParamLimits

0x8151,	// (0x00083218) cell_vitu2_itu_pane_g1_ParamLimits

0x8161,	// (0x00083228) cell_vitu2_itu_pane_g2_ParamLimits

0x8161,	// (0x00083228) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x0008aa5a) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x0008aa5a) cell_vitu2_itu_pane_g

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp05_ParamLimits

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp05

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp03

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp04

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp10_ParamLimits

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp10

0x8cd7,	// (0x00083d9e) bg_vkb2_func_pane_cp08

0x8cbe,	// (0x00083d85) bg_vkb2_func_pane_cp06

0x8ccb,	// (0x00083d92) bg_vkb2_func_pane_cp07

0xd676,	// (0x0008873d) bg_vkb2_func_pane_cp11_ParamLimits

0xd676,	// (0x0008873d) bg_vkb2_func_pane_cp11

0xd68b,	// (0x00088752) bg_vkb2_func_pane_cp12_ParamLimits

0xd68b,	// (0x00088752) bg_vkb2_func_pane_cp12

0xa4b4,	// (0x0008557b) bg_vkb2_func_pane_cp09

0xd08e,	// (0x00088155) bg_vkb2_func_pane_g1

0x0ef0,	// (0x0007bfb7) bg_vkb2_func_pane_g2

0xd096,	// (0x0008815d) bg_vkb2_func_pane_g3

0xd09e,	// (0x00088165) bg_vkb2_func_pane_g4

0xd2c8,	// (0x0008838f) bg_vkb2_func_pane_g5

0xd0b6,	// (0x0008817d) bg_vkb2_func_pane_g6

0xd0be,	// (0x00088185) bg_vkb2_func_pane_g7

0xd0ae,	// (0x00088175) bg_vkb2_func_pane_g8

0x0ed0,	// (0x0007bf97) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x0008ac59) bg_vkb2_func_pane_g

0x8ff3,	// (0x000840ba) blid2_tripm_pane_g6_ParamLimits

0x8ff3,	// (0x000840ba) blid2_tripm_pane_g6

0xcee6,	// (0x00087fad) mp4_progress_pane_g1

0x9062,	// (0x00084129) blid2_tripm_values_pane_ParamLimits

0x9062,	// (0x00084129) blid2_tripm_values_pane

0x9151,	// (0x00084218) blid2_tripm_values_pane_t1

0x915f,	// (0x00084226) blid2_tripm_values_pane_t2

0x916d,	// (0x00084234) blid2_tripm_values_pane_t3

0x917b,	// (0x00084242) blid2_tripm_values_pane_t4

0x9189,	// (0x00084250) blid2_tripm_values_pane_t5

0x9197,	// (0x0008425e) blid2_tripm_values_pane_t6

0x91a5,	// (0x0008426c) blid2_tripm_values_pane_t7

0x91b3,	// (0x0008427a) blid2_tripm_values_pane_t8

0x91c1,	// (0x00084288) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x0008ac6c) blid2_tripm_values_pane_t

0x417a,	// (0x0007f241) call_video_pane_t1_ParamLimits

0x418c,	// (0x0007f253) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0008a39c) call_video_pane_t_ParamLimits

0x5481,	// (0x00080548) msg_header_pane_g1_ParamLimits

0x17b9,	// (0x0007c880) msg_header_pane_g2_ParamLimits

0x17b9,	// (0x0007c880) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0008a5b6) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0008a5b6) msg_header_pane_g

0xac84,	// (0x00085d4b) main_clock2_pane_ParamLimits

0x7258,	// (0x0008231f) grid_clock2_toolbar_pane_ParamLimits

0x7258,	// (0x0008231f) grid_clock2_toolbar_pane

0x7258,	// (0x0008231f) listscroll_clock2_pane_ParamLimits

0x7258,	// (0x0008231f) listscroll_clock2_pane

0x7327,	// (0x000823ee) main_clock2_pane_t3_ParamLimits

0x7327,	// (0x000823ee) main_clock2_pane_t3

0x7340,	// (0x00082407) main_clock2_pane_t4_ParamLimits

0x7340,	// (0x00082407) main_clock2_pane_t4

0xd737,	// (0x000887fe) cell_clock2_toolbar_pane

0xd73f,	// (0x00088806) cell_clock2_toolbar_pane_cp01

0xd73f,	// (0x00088806) cell_clock2_toolbar_pane_cp02

0xd747,	// (0x0008880e) cell_clock2_toolbar_pane_cp03

0xd74f,	// (0x00088816) list_clock2_pane

0x147f,	// (0x0007c546) scroll_pane_cp10

0xd757,	// (0x0008881e) list_single_clock2_pane_ParamLimits

0xd757,	// (0x0008881e) list_single_clock2_pane

0x163e,	// (0x0007c705) list_highlight_pane_cp08

0xd764,	// (0x0008882b) list_single_clock2_pane_t1

0xd772,	// (0x00088839) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x0008ac7f) list_single_clock2_pane_t

0xa4b4,	// (0x0008557b) bg_button_pane_cp10

0xd780,	// (0x00088847) cell_clock2_toolbar_pane_g1

0x5500,	// (0x000805c7) aid_main_viewer_pane_g1_ParamLimits

0x5500,	// (0x000805c7) aid_main_viewer_pane_g1

0x550c,	// (0x000805d3) aid_main_viewer_pane_g2_ParamLimits

0x550c,	// (0x000805d3) aid_main_viewer_pane_g2

0x5518,	// (0x000805df) aid_main_viewer_pane_g3_ParamLimits

0x5518,	// (0x000805df) aid_main_viewer_pane_g3

0x5527,	// (0x000805ee) aid_main_viewer_pane_g4_ParamLimits

0x5527,	// (0x000805ee) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0008a5c7) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0008a5c7) aid_main_viewer_pane_g

0xa50f,	// (0x000855d6) main_calc_pane_ParamLimits

0x5d1b,	// (0x00080de2) main_dialer2_pane_ParamLimits

0xa4b4,	// (0x0008557b) main_cam6_pane

0xa4b4,	// (0x0008557b) main_vid6_pane

0x7264,	// (0x0008232b) listscroll_gen_pane_cp06_ParamLimits

0x7264,	// (0x0008232b) listscroll_gen_pane_cp06

0x7359,	// (0x00082420) main_clock2_pane_t5_ParamLimits

0x7359,	// (0x00082420) main_clock2_pane_t5

0x73ae,	// (0x00082475) aid_call2_pane_cp10_ParamLimits

0x73c0,	// (0x00082487) aid_call_pane_cp10_ParamLimits

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g1_ParamLimits

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x73d2,	// (0x00082499) popup_clock_analogue_window_cp10_g3_ParamLimits

0x73d2,	// (0x00082499) popup_clock_analogue_window_cp10_g4_ParamLimits

0x150b,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x0008a910) popup_clock_analogue_window_cp10_g_ParamLimits

0x73e4,	// (0x000824ab) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcf50,	// (0x00088017) cell_dialer2_keypad_pane_g2_ParamLimits

0xcf50,	// (0x00088017) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0008a9f6) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0008a9f6) cell_dialer2_keypad_pane_g

0x79f3,	// (0x00082aba) cell_dialer2_keypad_pane_t1

0x849f,	// (0x00083566) main_cset_text2_pane_ParamLimits

0x849f,	// (0x00083566) main_cset_text2_pane

0xd4df,	// (0x000885a6) area_vitu2_query_pane_g1_ParamLimits

0x8c63,	// (0x00083d2a) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x0008ab9c) area_vitu2_query_pane_g_ParamLimits

0xd563,	// (0x0008862a) area_vitu2_query_pane_t7_ParamLimits

0xd563,	// (0x0008862a) area_vitu2_query_pane_t7

0x8cbe,	// (0x00083d85) bg_button_pane_cp018_ParamLimits

0x8ccb,	// (0x00083d92) bg_button_pane_cp021_ParamLimits

0x8cd7,	// (0x00083d9e) bg_button_pane_cp022_ParamLimits

0x8cd7,	// (0x00083d9e) bg_vkb2_func_pane_cp08_ParamLimits

0x8cbe,	// (0x00083d85) bg_vkb2_func_pane_cp06_ParamLimits

0x8ccb,	// (0x00083d92) bg_vkb2_func_pane_cp07_ParamLimits

0x8ce6,	// (0x00083dad) input_focus_pane_cp09_ParamLimits

0xf0aa,	// (0x0008a171) cam6_autofocus_pane_ParamLimits

0xf0aa,	// (0x0008a171) cam6_autofocus_pane

0x91cf,	// (0x00084296) cam6_image_uncrop_pane_ParamLimits

0x91cf,	// (0x00084296) cam6_image_uncrop_pane

0x91dc,	// (0x000842a3) cam6_indi_pane_ParamLimits

0x91dc,	// (0x000842a3) cam6_indi_pane

0x91f2,	// (0x000842b9) cam6_mode_pane_ParamLimits

0x91f2,	// (0x000842b9) cam6_mode_pane

0x9204,	// (0x000842cb) cam6_timer_pane_ParamLimits

0x9204,	// (0x000842cb) cam6_timer_pane

0x9210,	// (0x000842d7) cam6_zoom_pane_ParamLimits

0x9210,	// (0x000842d7) cam6_zoom_pane

0x921c,	// (0x000842e3) cam6_mode_pane_g1_ParamLimits

0x921c,	// (0x000842e3) cam6_mode_pane_g1

0x922c,	// (0x000842f3) cam6_mode_pane_g2_ParamLimits

0x922c,	// (0x000842f3) cam6_mode_pane_g2

0x923c,	// (0x00084303) cam6_mode_pane_g3_ParamLimits

0x923c,	// (0x00084303) cam6_mode_pane_g3

0x924c,	// (0x00084313) cam6_mode_pane_g4_ParamLimits

0x924c,	// (0x00084313) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0008ac84) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0008ac84) cam6_mode_pane_g

0xd788,	// (0x0008884f) bg_tb_trans_pane_cp08_ParamLimits

0xd788,	// (0x0008884f) bg_tb_trans_pane_cp08

0xd796,	// (0x0008885d) cam6_battery_pane_ParamLimits

0xd796,	// (0x0008885d) cam6_battery_pane

0xd7ac,	// (0x00088873) cam6_indi_pane_g1_ParamLimits

0xd7ac,	// (0x00088873) cam6_indi_pane_g1

0xd7be,	// (0x00088885) cam6_indi_pane_g2_ParamLimits

0xd7be,	// (0x00088885) cam6_indi_pane_g2

0xd7d0,	// (0x00088897) cam6_indi_pane_g3_ParamLimits

0xd7d0,	// (0x00088897) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x0008ac8d) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x0008ac8d) cam6_indi_pane_g

0xd7e2,	// (0x000888a9) cam6_indi_pane_t1_ParamLimits

0xd7e2,	// (0x000888a9) cam6_indi_pane_t1

0x7f8a,	// (0x00083051) cam6_autofocus_pane_g1

0x7f82,	// (0x00083049) cam6_autofocus_pane_g2

0x7f9a,	// (0x00083061) cam6_autofocus_pane_g3

0x7f92,	// (0x00083059) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0008ac94) cam6_autofocus_pane_g

0xd808,	// (0x000888cf) cam6_timer_pane_g1

0xd810,	// (0x000888d7) cam6_timer_pane_t1

0xd81e,	// (0x000888e5) cam6_zoom_cont_pane

0xd826,	// (0x000888ed) cam6_zoom_pane_g1

0xd82e,	// (0x000888f5) cam6_zoom_pane_g2

0x925c,	// (0x00084323) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x0008ac9d) cam6_zoom_pane_g

0xc680,	// (0x00087747) cam6_battery_pane_g1

0xc680,	// (0x00087747) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x0008a81d) cam6_battery_pane_g

0xd836,	// (0x000888fd) cam6_zoom_cont_pane_g1

0xd83f,	// (0x00088906) cam6_zoom_cont_pane_g2

0xd848,	// (0x0008890f) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x0008aca4) cam6_zoom_cont_pane_g

0x9279,	// (0x00084340) cam6_mode_pane_cp_ParamLimits

0x9279,	// (0x00084340) cam6_mode_pane_cp

0x928b,	// (0x00084352) cam6_zoom_pane_cp_ParamLimits

0x928b,	// (0x00084352) cam6_zoom_pane_cp

0x9297,	// (0x0008435e) vid6_image_uncrop_cif_pane_ParamLimits

0x9297,	// (0x0008435e) vid6_image_uncrop_cif_pane

0x92a5,	// (0x0008436c) vid6_image_uncrop_nhd_pane_ParamLimits

0x92a5,	// (0x0008436c) vid6_image_uncrop_nhd_pane

0x92b2,	// (0x00084379) vid6_image_uncrop_vga_pane_ParamLimits

0x92b2,	// (0x00084379) vid6_image_uncrop_vga_pane

0x92bf,	// (0x00084386) vid6_image_uncrop_wvga_pane_ParamLimits

0x92bf,	// (0x00084386) vid6_image_uncrop_wvga_pane

0x92cc,	// (0x00084393) vid6_indi_pane_ParamLimits

0x92cc,	// (0x00084393) vid6_indi_pane

0xd788,	// (0x0008884f) bg_tb_trans_pane_cp09_ParamLimits

0xd788,	// (0x0008884f) bg_tb_trans_pane_cp09

0xd85c,	// (0x00088923) cam6_battery_pane_cp_ParamLimits

0xd85c,	// (0x00088923) cam6_battery_pane_cp

0xd868,	// (0x0008892f) vid6_indi_pane_g1_ParamLimits

0xd868,	// (0x0008892f) vid6_indi_pane_g1

0xd87a,	// (0x00088941) vid6_indi_pane_g2_ParamLimits

0xd87a,	// (0x00088941) vid6_indi_pane_g2

0xd88c,	// (0x00088953) vid6_indi_pane_g3_ParamLimits

0xd88c,	// (0x00088953) vid6_indi_pane_g3

0xd8a1,	// (0x00088968) vid6_indi_pane_g4_ParamLimits

0xd8a1,	// (0x00088968) vid6_indi_pane_g4

0xd8b6,	// (0x0008897d) vid6_indi_pane_g5_ParamLimits

0xd8b6,	// (0x0008897d) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0008acab) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0008acab) vid6_indi_pane_g

0xd8d0,	// (0x00088997) vid6_indi_pane_t1_ParamLimits

0xd8d0,	// (0x00088997) vid6_indi_pane_t1

0xd8e6,	// (0x000889ad) vid6_indi_pane_t2_ParamLimits

0xd8e6,	// (0x000889ad) vid6_indi_pane_t2

0xd90e,	// (0x000889d5) vid6_indi_pane_t3_ParamLimits

0xd90e,	// (0x000889d5) vid6_indi_pane_t3

0xd936,	// (0x000889fd) vid6_indi_pane_t4_ParamLimits

0xd936,	// (0x000889fd) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x0008acb6) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x0008acb6) vid6_indi_pane_t

0xd95a,	// (0x00088a21) wait_bar_pane_cp08

0x92e3,	// (0x000843aa) main_cset_text2_pane_t1_ParamLimits

0x92e3,	// (0x000843aa) main_cset_text2_pane_t1

0x9264,	// (0x0008432b) listscroll_gen_pane_cp06_t1_ParamLimits

0x9264,	// (0x0008432b) listscroll_gen_pane_cp06_t1

0xa4b4,	// (0x0008557b) main_cam6_set_pane

0x7e48,	// (0x00082f0f) bg_tb_trans_pane_cp06_ParamLimits

0x7e56,	// (0x00082f1d) cam4_indicators_pane_g1_ParamLimits

0x7e63,	// (0x00082f2a) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x0008aa2a) cam4_indicators_pane_g_ParamLimits

0x7e7b,	// (0x00082f42) cam4_indicators_pane_t1_ParamLimits

0xef6c,	// (0x0008a033) bg_tb_trans_pane_cp07_ParamLimits

0x7e56,	// (0x00082f1d) vid4_indicators_pane_g1_ParamLimits

0x7f4a,	// (0x00083011) vid4_indicators_pane_g2_ParamLimits

0x7f57,	// (0x0008301e) vid4_indicators_pane_g3_ParamLimits

0x7f64,	// (0x0008302b) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x0008aa3c) vid4_indicators_pane_g_ParamLimits

0x7f70,	// (0x00083037) vid4_indicators_pane_t1_ParamLimits

0xf015,	// (0x0008a0dc) vid4_progress_pane_g1_ParamLimits

0xf024,	// (0x0008a0eb) vid4_progress_pane_g2_ParamLimits

0xf033,	// (0x0008a0fa) vid4_progress_pane_g3_ParamLimits

0xf042,	// (0x0008a109) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x0008abe7) vid4_progress_pane_g_ParamLimits

0xf05a,	// (0x0008a121) vid4_progress_pane_t1_ParamLimits

0xf070,	// (0x0008a137) vid4_progress_pane_t2_ParamLimits

0xf085,	// (0x0008a14c) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x0008abf2) vid4_progress_pane_t_ParamLimits

0xf09a,	// (0x0008a161) wait_bar_pane_cp07_ParamLimits

0x92fd,	// (0x000843c4) main_cam6_set_pane_g2_ParamLimits

0x92fd,	// (0x000843c4) main_cam6_set_pane_g2

0x931f,	// (0x000843e6) main_cset6_listscroll_pane_ParamLimits

0x931f,	// (0x000843e6) main_cset6_listscroll_pane

0x9339,	// (0x00084400) main_cset6_slider_pane_ParamLimits

0x9339,	// (0x00084400) main_cset6_slider_pane

0x934f,	// (0x00084416) main_cset6_text2_pane_ParamLimits

0x934f,	// (0x00084416) main_cset6_text2_pane

0xd96a,	// (0x00088a31) main_cset6_text_pane

0xd184,	// (0x0008824b) main_cset_list_pane_copy1_ParamLimits

0xd184,	// (0x0008824b) main_cset_list_pane_copy1

0xd194,	// (0x0008825b) scroll_pane_cp028_copy1

0x935d,	// (0x00084424) cset_list_set_pane_copy1

0x936f,	// (0x00084436) aid_position_infowindow_above_copy1

0x9377,	// (0x0008443e) aid_position_infowindow_below_copy1

0x937f,	// (0x00084446) cset_list_set_pane_g1_copy1

0x9387,	// (0x0008444e) cset_list_set_pane_g3_copy1_ParamLimits

0x9387,	// (0x0008444e) cset_list_set_pane_g3_copy1

0x9396,	// (0x0008445d) cset_list_set_pane_t1_copy1_ParamLimits

0x9396,	// (0x0008445d) cset_list_set_pane_t1_copy1

0xa50f,	// (0x000855d6) list_highlight_pane_cp021_copy1_ParamLimits

0xa50f,	// (0x000855d6) list_highlight_pane_cp021_copy1

0xd972,	// (0x00088a39) cset6_slider_pane_ParamLimits

0xd972,	// (0x00088a39) cset6_slider_pane

0xd99e,	// (0x00088a65) main_cset6_slider_pane_g1_ParamLimits

0xd99e,	// (0x00088a65) main_cset6_slider_pane_g1

0x93ab,	// (0x00084472) main_cset6_slider_pane_g2_ParamLimits

0x93ab,	// (0x00084472) main_cset6_slider_pane_g2

0xd1a9,	// (0x00088270) main_cset6_slider_pane_g3_ParamLimits

0xd1a9,	// (0x00088270) main_cset6_slider_pane_g3

0x8564,	// (0x0008362b) main_cset6_slider_pane_g4_ParamLimits

0x8564,	// (0x0008362b) main_cset6_slider_pane_g4

0x85ac,	// (0x00083673) main_cset6_slider_pane_g5_ParamLimits

0x85ac,	// (0x00083673) main_cset6_slider_pane_g5

0xd1a9,	// (0x00088270) main_cset6_slider_pane_g7_ParamLimits

0xd1a9,	// (0x00088270) main_cset6_slider_pane_g7

0xd1b5,	// (0x0008827c) main_cset6_slider_pane_g8_ParamLimits

0xd1b5,	// (0x0008827c) main_cset6_slider_pane_g8

0x854c,	// (0x00083613) main_cset6_slider_pane_g9_ParamLimits

0x854c,	// (0x00083613) main_cset6_slider_pane_g9

0x8558,	// (0x0008361f) main_cset6_slider_pane_g10_ParamLimits

0x8558,	// (0x0008361f) main_cset6_slider_pane_g10

0x8564,	// (0x0008362b) main_cset6_slider_pane_g11_ParamLimits

0x8564,	// (0x0008362b) main_cset6_slider_pane_g11

0x8570,	// (0x00083637) main_cset6_slider_pane_g12_ParamLimits

0x8570,	// (0x00083637) main_cset6_slider_pane_g12

0x857c,	// (0x00083643) main_cset6_slider_pane_g13_ParamLimits

0x857c,	// (0x00083643) main_cset6_slider_pane_g13

0x8588,	// (0x0008364f) main_cset6_slider_pane_g14_ParamLimits

0x8588,	// (0x0008364f) main_cset6_slider_pane_g14

0x93d3,	// (0x0008449a) main_cset6_slider_pane_g15_ParamLimits

0x93d3,	// (0x0008449a) main_cset6_slider_pane_g15

0x85ac,	// (0x00083673) main_cset6_slider_pane_g16_ParamLimits

0x85ac,	// (0x00083673) main_cset6_slider_pane_g16

0x85b8,	// (0x0008367f) main_cset6_slider_pane_g17_ParamLimits

0x85b8,	// (0x0008367f) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0008acbf) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0008acbf) main_cset6_slider_pane_g

0xd9c6,	// (0x00088a8d) main_cset6_slider_pane_t1_ParamLimits

0xd9c6,	// (0x00088a8d) main_cset6_slider_pane_t1

0xda07,	// (0x00088ace) main_cset6_slider_pane_t2_ParamLimits

0xda07,	// (0x00088ace) main_cset6_slider_pane_t2

0xda32,	// (0x00088af9) main_cset6_slider_pane_t3_ParamLimits

0xda32,	// (0x00088af9) main_cset6_slider_pane_t3

0x93eb,	// (0x000844b2) main_cset6_slider_pane_t4_ParamLimits

0x93eb,	// (0x000844b2) main_cset6_slider_pane_t4

0x9416,	// (0x000844dd) main_cset6_slider_pane_t5_ParamLimits

0x9416,	// (0x000844dd) main_cset6_slider_pane_t5

0xda5d,	// (0x00088b24) main_cset6_slider_pane_t7_ParamLimits

0xda5d,	// (0x00088b24) main_cset6_slider_pane_t7

0x9441,	// (0x00084508) main_cset6_slider_pane_t8_ParamLimits

0x9441,	// (0x00084508) main_cset6_slider_pane_t8

0x9465,	// (0x0008452c) main_cset6_slider_pane_t9_ParamLimits

0x9465,	// (0x0008452c) main_cset6_slider_pane_t9

0x9489,	// (0x00084550) main_cset6_slider_pane_t10_ParamLimits

0x9489,	// (0x00084550) main_cset6_slider_pane_t10

0x94ad,	// (0x00084574) main_cset6_slider_pane_t11_ParamLimits

0x94ad,	// (0x00084574) main_cset6_slider_pane_t11

0xda93,	// (0x00088b5a) main_cset6_slider_pane_t14_ParamLimits

0xda93,	// (0x00088b5a) main_cset6_slider_pane_t14

0xdacc,	// (0x00088b93) main_cset6_slider_pane_t15_ParamLimits

0xdacc,	// (0x00088b93) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x0008ace4) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x0008ace4) main_cset6_slider_pane_t

0xdb05,	// (0x00088bcc) cset_slider_pane_g1_copy1

0xdb0e,	// (0x00088bd5) cset_slider_pane_g2_copy1

0xdb17,	// (0x00088bde) cset_slider_pane_g3_copy1

0xa4b4,	// (0x0008557b) bg_popup_sub_pane_cp011_copy1

0xd311,	// (0x000883d8) main_cset_text_pane_g1_copy1

0xd319,	// (0x000883e0) main_cset_text_pane_t1_copy1

0xd327,	// (0x000883ee) main_cset_text_pane_t2_copy1

0xd335,	// (0x000883fc) main_cset_text_pane_t3_copy1

0xd343,	// (0x0008840a) main_cset_text_pane_t4_copy1

0xd351,	// (0x00088418) main_cset_text_pane_t5_copy1

0xd35f,	// (0x00088426) main_cset_text_pane_t6_copy1

0xd36d,	// (0x00088434) main_cset_text_pane_t7_copy1

0x94d1,	// (0x00084598) main_cset_text2_pane_t1_copy1

0xa4b4,	// (0x0008557b) main_ncimui_pane

0x5f29,	// (0x00080ff0) popup_query_ncimui_window_ParamLimits

0x5f29,	// (0x00080ff0) popup_query_ncimui_window

0xc950,	// (0x00087a17) field_cale_ev2_pane_g4_ParamLimits

0xc950,	// (0x00087a17) field_cale_ev2_pane_g4

0x78e5,	// (0x000829ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x78e5,	// (0x000829ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x0008a9d1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x0008a9d1) cell_video_dialer_keypad_pane_g

0x78fd,	// (0x000829c4) cell_video_dialer_keypad_pane_t1

0xa4b4,	// (0x0008557b) bg_popup_window_pane_cp012

0x1358,	// (0x0007c41f) heading_pane_cp06

0xdc09,	// (0x00088cd0) ncim_query_content_pane

0xa4b4,	// (0x0008557b) bg_popup_heading_pane_cp01

0xdc11,	// (0x00088cd8) ncim_heading_pane_t1

0xdc1f,	// (0x00088ce6) ncim_indicator_popup_pane

0xdc31,	// (0x00088cf8) ncim_query_button_pane

0xdc45,	// (0x00088d0c) ncim_query_content_pane_t1

0xdc57,	// (0x00088d1e) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0008ad23) ncim_query_content_pane_t

0xdc91,	// (0x00088d58) ncim_query_list_pane

0xdca3,	// (0x00088d6a) ncim_query_popup_pane

0xdc1f,	// (0x00088ce6) ncim_indicator_popup_pane_ParamLimits

0x95b1,	// (0x00084678) ncim_query_content_pane_g1_ParamLimits

0x95b1,	// (0x00084678) ncim_query_content_pane_g1

0xdc45,	// (0x00088d0c) ncim_query_content_pane_t1_ParamLimits

0xdc57,	// (0x00088d1e) ncim_query_content_pane_t2_ParamLimits

0x95bd,	// (0x00084684) ncim_query_content_pane_t3_ParamLimits

0x95bd,	// (0x00084684) ncim_query_content_pane_t3

0x95e5,	// (0x000846ac) ncim_query_content_pane_t4_ParamLimits

0x95e5,	// (0x000846ac) ncim_query_content_pane_t4

0x960d,	// (0x000846d4) ncim_query_content_pane_t5_ParamLimits

0x960d,	// (0x000846d4) ncim_query_content_pane_t5

0xdc69,	// (0x00088d30) ncim_query_content_pane_t6_ParamLimits

0xdc69,	// (0x00088d30) ncim_query_content_pane_t6

0xfc5c,	// (0x0008ad23) ncim_query_content_pane_t_ParamLimits

0xdc91,	// (0x00088d58) ncim_query_list_pane_ParamLimits

0xdca3,	// (0x00088d6a) ncim_query_popup_pane_ParamLimits

0xdcb7,	// (0x00088d7e) wait_bar_pane_cp04

0xa4b4,	// (0x0008557b) input_focus_pane_cp011

0xdcbf,	// (0x00088d86) ncim_query_popup_pane_t1

0xdccd,	// (0x00088d94) ncim_list_query_list_pane_ParamLimits

0xdccd,	// (0x00088d94) ncim_list_query_list_pane

0xa4b4,	// (0x0008557b) bg_button_pane_cp027

0xdce0,	// (0x00088da7) ncim_query_button_pane_g1

0xa4b4,	// (0x0008557b) list_highlight_pane_cp012

0xdcea,	// (0x00088db1) ncim_list_query_list_pane_g1

0xdcf2,	// (0x00088db9) ncim_list_query_list_pane_t1

0x7e6f,	// (0x00082f36) cam4_indicators_pane_g3_ParamLimits

0x7e6f,	// (0x00082f36) cam4_indicators_pane_g3

0x7e6f,	// (0x00082f36) vid4_indicators_pane_g5_ParamLimits

0x7e6f,	// (0x00082f36) vid4_indicators_pane_g5

0xf04e,	// (0x0008a115) vid4_progress_pane_g5_ParamLimits

0xf04e,	// (0x0008a115) vid4_progress_pane_g5

0x94fb,	// (0x000845c2) main_ncimui_pane_g1

0x9541,	// (0x00084608) ncimui_group_query_pane_ParamLimits

0x9541,	// (0x00084608) ncimui_group_query_pane

0x9575,	// (0x0008463c) ncimui_list_pane_ParamLimits

0x9575,	// (0x0008463c) ncimui_list_pane

0x958d,	// (0x00084654) ncimui_text_pane_ParamLimits

0x958d,	// (0x00084654) ncimui_text_pane

0x9635,	// (0x000846fc) ncimui_text_pane_t1_ParamLimits

0x9635,	// (0x000846fc) ncimui_text_pane_t1

0xdd00,	// (0x00088dc7) ncimui_list_single_graphic_pane_ParamLimits

0xdd00,	// (0x00088dc7) ncimui_list_single_graphic_pane

0x9652,	// (0x00084719) ncimui_query_pane_ParamLimits

0x9652,	// (0x00084719) ncimui_query_pane

0xa4b4,	// (0x0008557b) list_highlight_pane_cp013

0xdd0d,	// (0x00088dd4) ncim_list_query_list_pane_t1_copy1

0xdd1b,	// (0x00088de2) ncim_list_single_graphic_pane_g1

0xdd23,	// (0x00088dea) ncim_query_button_pane_cp01

0xdd2b,	// (0x00088df2) ncim_query_entry_pane_ParamLimits

0xdd2b,	// (0x00088df2) ncim_query_entry_pane

0xdd3b,	// (0x00088e02) ncimui_query_pane_g1

0xdd43,	// (0x00088e0a) ncimui_query_pane_t1_ParamLimits

0xdd43,	// (0x00088e0a) ncimui_query_pane_t1

0xa4b4,	// (0x0008557b) input_focus_pane_cp012

0xdcbf,	// (0x00088d86) ncim_query_entry_pane_t1

0xac84,	// (0x00085d4b) main_im_pane_ParamLimits

0xa50f,	// (0x000855d6) main_mobtv_pane_ParamLimits

0xa50f,	// (0x000855d6) main_mobtv_pane

0x854c,	// (0x00083613) main_cset6_slider_pane_g18_ParamLimits

0x854c,	// (0x00083613) main_cset6_slider_pane_g18

0x857c,	// (0x00083643) main_cset6_slider_pane_g19_ParamLimits

0x857c,	// (0x00083643) main_cset6_slider_pane_g19

0xdd59,	// (0x00088e20) bg_main_mobtv_pane_ParamLimits

0xdd59,	// (0x00088e20) bg_main_mobtv_pane

0x9662,	// (0x00084729) main_mobtv_info_pane

0x966b,	// (0x00084732) main_mobtv_loading_pane_ParamLimits

0x966b,	// (0x00084732) main_mobtv_loading_pane

0xdd67,	// (0x00088e2e) main_mobtv_pg_channel_list_pane

0xdd71,	// (0x00088e38) main_mobtv_pg_hdr_pane

0x9678,	// (0x0008473f) main_mobtv_programe_curr_pane_ParamLimits

0x9678,	// (0x0008473f) main_mobtv_programe_curr_pane

0x9685,	// (0x0008474c) main_mobtv_programe_next_pane_ParamLimits

0x9685,	// (0x0008474c) main_mobtv_programe_next_pane

0xdd7a,	// (0x00088e41) popup_mobtv_noti_window

0xc680,	// (0x00087747) main_tv_pg_hdr_pane_g1

0xdd82,	// (0x00088e49) main_tv_pg_hdr_pane_g2

0xdd8a,	// (0x00088e51) main_tv_pg_hdr_pane_g3

0xdd92,	// (0x00088e59) main_tv_pg_hdr_pane_g4

0xdd9a,	// (0x00088e61) main_tv_pg_hdr_pane_g5

0xdda2,	// (0x00088e69) main_tv_pg_hdr_pane_g6

0xddaa,	// (0x00088e71) main_tv_pg_hdr_pane_g7

0xddb2,	// (0x00088e79) main_tv_pg_hdr_pane_g8

0xddba,	// (0x00088e81) main_tv_pg_hdr_pane_g9

0xddc2,	// (0x00088e89) main_tv_pg_hdr_pane_g10

0xddcc,	// (0x00088e93) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0008ad30) main_tv_pg_hdr_pane_g

0xddd6,	// (0x00088e9d) main_tv_pg_hdr_pane_t1

0xdde4,	// (0x00088eab) main_tv_pg_hdr_pane_t2

0xddf2,	// (0x00088eb9) main_tv_pg_hdr_pane_t3

0xde00,	// (0x00088ec7) main_tv_pg_hdr_pane_t4

0xde0e,	// (0x00088ed5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x0008ad47) main_tv_pg_hdr_pane_t

0xde1c,	// (0x00088ee3) single_mobtv_pg_channel_pane_ParamLimits

0xde1c,	// (0x00088ee3) single_mobtv_pg_channel_pane

0xde2e,	// (0x00088ef5) single_mobtv_pg_channel_table_pane

0xde37,	// (0x00088efe) single_mobtv_pg_channel_thumb_pane

0xde40,	// (0x00088f07) single_tv_pg_channel_pane_g1

0xde49,	// (0x00088f10) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0008ad52) single_tv_pg_channel_pane_g

0xc8af,	// (0x00087976) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc8af,	// (0x00087976) bg_single_mobtv_pg_channel_thumb_pane

0xde52,	// (0x00088f19) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde52,	// (0x00088f19) single_mobtv_pg_channel_thumb_pane_g1

0xde60,	// (0x00088f27) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde60,	// (0x00088f27) single_mobtv_pg_channel_thumb_pane_g2

0xde6c,	// (0x00088f33) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde6c,	// (0x00088f33) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x0008ad57) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x0008ad57) single_mobtv_pg_channel_thumb_pane_g

0xde78,	// (0x00088f3f) single_mobtv_pg_channel_thumb_pane_t1

0xde86,	// (0x00088f4d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x0008ad5e) single_mobtv_pg_channel_thumb_pane_t

0xc680,	// (0x00087747) bg_single_mobtv_pg_channel_table_pane_g1

0xc680,	// (0x00087747) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x0008a81d) bg_single_mobtv_pg_channel_table_pane_g

0xde94,	// (0x00088f5b) single_mobtv_pg_channel_table_pane_t1

0xdea2,	// (0x00088f69) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0008ad63) single_mobtv_pg_channel_table_pane_t

0x969a,	// (0x00084761) main_mobtv_info_pane_g1_ParamLimits

0x969a,	// (0x00084761) main_mobtv_info_pane_g1

0x96b6,	// (0x0008477d) main_mobtv_info_pane_t1_ParamLimits

0x96b6,	// (0x0008477d) main_mobtv_info_pane_t1

0x971c,	// (0x000847e3) main_mobtv_info_pane_t2_ParamLimits

0x971c,	// (0x000847e3) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x0008ad6d) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x0008ad6d) main_mobtv_info_pane_t

0x979f,	// (0x00084866) wait_bar_pane_cp05

0x97af,	// (0x00084876) main_mobtv_loading_pane_g1_ParamLimits

0x97af,	// (0x00084876) main_mobtv_loading_pane_g1

0x97c0,	// (0x00084887) main_mobtv_loading_pane_g2_ParamLimits

0x97c0,	// (0x00084887) main_mobtv_loading_pane_g2

0x97cc,	// (0x00084893) main_mobtv_loading_pane_g3_ParamLimits

0x97cc,	// (0x00084893) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0008ad74) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0008ad74) main_mobtv_loading_pane_g

0xdeb0,	// (0x00088f77) main_mobtv_loading_pane_t1_ParamLimits

0xdeb0,	// (0x00088f77) main_mobtv_loading_pane_t1

0xdec8,	// (0x00088f8f) main_mobtv_loading_pane_t2_ParamLimits

0xdec8,	// (0x00088f8f) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x0008ad7b) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x0008ad7b) main_mobtv_loading_pane_t

0x97dd,	// (0x000848a4) wait_bar_pane_cp06_ParamLimits

0x97dd,	// (0x000848a4) wait_bar_pane_cp06

0xdeec,	// (0x00088fb3) main_mobtv_programe_curr_pane_t1

0xdefa,	// (0x00088fc1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0008ad80) main_mobtv_programe_curr_pane_t

0xdf08,	// (0x00088fcf) main_mobtv_programe_next_pane_t1

0xdf16,	// (0x00088fdd) main_mobtv_programe_next_pane_t2

0xdf24,	// (0x00088feb) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x0008ad85) main_mobtv_programe_next_pane_t

0xa4b4,	// (0x0008557b) bg_popup_mobtv_noti_window_pane

0xdf32,	// (0x00088ff9) popup_mobtv_noti_window_g1

0xdf3a,	// (0x00089001) popup_mobtv_noti_window_t1

0xdf48,	// (0x0008900f) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x0008ad8c) popup_mobtv_noti_window_t

0xc680,	// (0x00087747) bg_popup_mobtv_noti_window_pane_g1

0xa4b4,	// (0x0008557b) sc_clock_pane

0xa4b4,	// (0x0008557b) main_fs_bigclock_pane

0x904c,	// (0x00084113) blid2_tripm_pane_t4_ParamLimits

0x904c,	// (0x00084113) blid2_tripm_pane_t4

0x97ec,	// (0x000848b3) sc_clock_pane_g1_ParamLimits

0x97ec,	// (0x000848b3) sc_clock_pane_g1

0x97fe,	// (0x000848c5) sc_clock_pane_t1_ParamLimits

0x97fe,	// (0x000848c5) sc_clock_pane_t1

0x9820,	// (0x000848e7) sc_clock_pane_t2_ParamLimits

0x9820,	// (0x000848e7) sc_clock_pane_t2

0x9836,	// (0x000848fd) sc_clock_pane_t3_ParamLimits

0x9836,	// (0x000848fd) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0008ad91) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0008ad91) sc_clock_pane_t

0xe51f,	// (0x000895e6) main_fs_bigclock_indicator_pane_ParamLimits

0xe51f,	// (0x000895e6) main_fs_bigclock_indicator_pane

0xc87f,	// (0x00087946) main_fs_bigclock_pane_g1_ParamLimits

0xc87f,	// (0x00087946) main_fs_bigclock_pane_g1

0xe52b,	// (0x000895f2) main_fs_bigclock_pane_t1_ParamLimits

0xe52b,	// (0x000895f2) main_fs_bigclock_pane_t1

0xe53d,	// (0x00089604) main_fs_bigclock_pane_t2_ParamLimits

0xe53d,	// (0x00089604) main_fs_bigclock_pane_t2

0xe54f,	// (0x00089616) main_fs_bigclock_pane_t3_ParamLimits

0xe54f,	// (0x00089616) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x0008af8b) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x0008af8b) main_fs_bigclock_pane_t

0x1bd9,	// (0x0007cca0) main_fs_bigclock_indicator_pane_g1

0xdc39,	// (0x00088d00) ncim_query_content_pane_g2_ParamLimits

0xdc39,	// (0x00088d00) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0008ad1e) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0008ad1e) ncim_query_content_pane_g

0x984b,	// (0x00084912) sc_clock_pane_t4_ParamLimits

0x984b,	// (0x00084912) sc_clock_pane_t4

0xa50f,	// (0x000855d6) main_radioblah_pane

0xcfa7,	// (0x0008806e) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfa7,	// (0x0008806e) cell_call4_button_pane_t1_copy1

0x9503,	// (0x000845ca) main_ncimui_pane_t1_ParamLimits

0x9503,	// (0x000845ca) main_ncimui_pane_t1

0x9515,	// (0x000845dc) main_ncimui_pane_t2_ParamLimits

0x9515,	// (0x000845dc) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0008ad17) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0008ad17) main_ncimui_pane_t

0xe072,	// (0x00089139) main_radioblah_anim_pane_ParamLimits

0xe072,	// (0x00089139) main_radioblah_anim_pane

0xe083,	// (0x0008914a) main_radioblah_info_pane_ParamLimits

0xe083,	// (0x0008914a) main_radioblah_info_pane

0xe097,	// (0x0008915e) main_radioblah_pane_t1_ParamLimits

0xe097,	// (0x0008915e) main_radioblah_pane_t1

0xe0b3,	// (0x0008917a) main_radioblah_pane_t2_ParamLimits

0xe0b3,	// (0x0008917a) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x0008adb2) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x0008adb2) main_radioblah_pane_t

0x98e2,	// (0x000849a9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x98e2,	// (0x000849a9) main_radioblah_rocker_ctrl_pane

0xe0fb,	// (0x000891c2) main_radioblah_info_pane_t1_ParamLimits

0xe0fb,	// (0x000891c2) main_radioblah_info_pane_t1

0x9936,	// (0x000849fd) main_radioblah_info_pane_t2_ParamLimits

0x9936,	// (0x000849fd) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0008adbb) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0008adbb) main_radioblah_info_pane_t

0xc680,	// (0x00087747) main_radioblah_rocker_ctrl_pane_g1

0x99e4,	// (0x00084aab) main_radioblah_rocker_ctrl_pane_g2

0x99ec,	// (0x00084ab3) main_radioblah_rocker_ctrl_pane_g3

0x99f4,	// (0x00084abb) main_radioblah_rocker_ctrl_pane_g4

0x99fc,	// (0x00084ac3) main_radioblah_rocker_ctrl_pane_g5

0x9a04,	// (0x00084acb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x0008adc4) main_radioblah_rocker_ctrl_pane_g

0x94d1,	// (0x00084598) main_cset_text2_pane_t1_copy1_ParamLimits

0xef54,	// (0x0008a01b) cam4_image_uncrop_qvga_pane

0xef64,	// (0x0008a02b) vid4_image_uncrop_qcif_pane

0xf0aa,	// (0x0008a171) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0aa,	// (0x0008a171) cam6_image_uncrop_qvga_pane

0xd850,	// (0x00088917) vid6_image_uncrop_qcif_pane_ParamLimits

0xd850,	// (0x00088917) vid6_image_uncrop_qcif_pane

0xa4b4,	// (0x0008557b) bg_popup_preview_window_pane_cp03

0xdbeb,	// (0x00088cb2) list_cset_text2_pane

0xdbf3,	// (0x00088cba) main_cset6_text2_pane_g1

0xdbfb,	// (0x00088cc2) main_cset6_text2_pane_t1

0x9a0c,	// (0x00084ad3) list_cset_text2_pane_t1_ParamLimits

0x9a0c,	// (0x00084ad3) list_cset_text2_pane_t1

0xa50f,	// (0x000855d6) main_radioblah_pane_ParamLimits

0x978d,	// (0x00084854) main_mobtv_info_pane_t3_ParamLimits

0x978d,	// (0x00084854) main_mobtv_info_pane_t3

0x98d0,	// (0x00084997) main_radioblah_pane_g1

0x990a,	// (0x000849d1) main_radioblah_info_pane_g1

0x9989,	// (0x00084a50) main_radioblah_info_pane_t3_ParamLimits

0x9989,	// (0x00084a50) main_radioblah_info_pane_t3

0x4bad,	// (0x0007fc74) highlight_cell_cale_month_pane_ParamLimits

0x4bad,	// (0x0007fc74) highlight_cell_cale_month_pane

0xa4b4,	// (0x0008557b) main_phob_fisheye_pane

0xc9f9,	// (0x00087ac0) scroll_pane_cp0031_ParamLimits

0xc9f9,	// (0x00087ac0) scroll_pane_cp0031

0xd95a,	// (0x00088a21) wait_bar_pane_cp08_ParamLimits

0x935d,	// (0x00084424) cset_list_set_pane_copy1_ParamLimits

0xe135,	// (0x000891fc) highlight_cell_cale_month_pane_g1

0x9a25,	// (0x00084aec) highlight_cell_cale_month_pane_t1

0xe13d,	// (0x00089204) list_gen_pane_cp01

0xd194,	// (0x0008825b) scroll_pane_01

0xe146,	// (0x0008920d) list_single_double_fisheye_pane

0x9a33,	// (0x00084afa) list_double_fisheye_pane_g1_ParamLimits

0x9a33,	// (0x00084afa) list_double_fisheye_pane_g1

0x9a3f,	// (0x00084b06) list_double_fisheye_pane_g2_ParamLimits

0x9a3f,	// (0x00084b06) list_double_fisheye_pane_g2

0x9a53,	// (0x00084b1a) list_double_fisheye_pane_g3_ParamLimits

0x9a53,	// (0x00084b1a) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x0008add1) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x0008add1) list_double_fisheye_pane_g

0x9a7c,	// (0x00084b43) list_double_fisheye_pane_t1_ParamLimits

0x9a7c,	// (0x00084b43) list_double_fisheye_pane_t1

0x9a97,	// (0x00084b5e) list_double_fisheye_pane_t2_ParamLimits

0x9a97,	// (0x00084b5e) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0008addc) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0008addc) list_double_fisheye_pane_t

0xa4b4,	// (0x0008557b) main_call5_pane

0x9874,	// (0x0008493b) sc_swipe_pane_ParamLimits

0x9874,	// (0x0008493b) sc_swipe_pane

0x9aca,	// (0x00084b91) call5_image_pane_ParamLimits

0x9aca,	// (0x00084b91) call5_image_pane

0x9adf,	// (0x00084ba6) call5_swipe_1_pane_ParamLimits

0x9adf,	// (0x00084ba6) call5_swipe_1_pane

0x9af0,	// (0x00084bb7) call5_swipe_2_pane_ParamLimits

0x9af0,	// (0x00084bb7) call5_swipe_2_pane

0x9b15,	// (0x00084bdc) popup_call5_audio_first_window_ParamLimits

0x9b15,	// (0x00084bdc) popup_call5_audio_first_window

0xc8af,	// (0x00087976) call5_swipe_1_pane_g1_ParamLimits

0xc8af,	// (0x00087976) call5_swipe_1_pane_g1

0xf0b6,	// (0x0008a17d) call5_swipe_1_pane_g2_ParamLimits

0xf0b6,	// (0x0008a17d) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x0008ade1) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x0008ade1) call5_swipe_1_pane_g

0xf0c2,	// (0x0008a189) call5_swipe_1_pane_t1_ParamLimits

0xf0c2,	// (0x0008a189) call5_swipe_1_pane_t1

0xc8af,	// (0x00087976) call5_swipe_2_pane_g1_ParamLimits

0xc8af,	// (0x00087976) call5_swipe_2_pane_g1

0xf0d7,	// (0x0008a19e) call5_swipe_2_pane_g2_ParamLimits

0xf0d7,	// (0x0008a19e) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x0008ade6) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x0008ade6) call5_swipe_2_pane_g

0xf0e3,	// (0x0008a1aa) call5_swipe_2_pane_t1_ParamLimits

0xf0e3,	// (0x0008a1aa) call5_swipe_2_pane_t1

0xf101,	// (0x0008a1c8) sc_swipe_pane_g1_ParamLimits

0xf101,	// (0x0008a1c8) sc_swipe_pane_g1

0xf10e,	// (0x0008a1d5) sc_swipe_pane_g2_ParamLimits

0xf10e,	// (0x0008a1d5) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0008adeb) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0008adeb) sc_swipe_pane_g

0xf11a,	// (0x0008a1e1) sc_swipe_pane_t1_ParamLimits

0xf11a,	// (0x0008a1e1) sc_swipe_pane_t1

0xa4b4,	// (0x0008557b) main_cmail_launcher_pane

0x9b24,	// (0x00084beb) aid_size_cell_cmail_l_ParamLimits

0x9b24,	// (0x00084beb) aid_size_cell_cmail_l

0x9b3d,	// (0x00084c04) grid_cmail_l_pane_ParamLimits

0x9b3d,	// (0x00084c04) grid_cmail_l_pane

0x9b52,	// (0x00084c19) cell_cmail_l_pane_ParamLimits

0x9b52,	// (0x00084c19) cell_cmail_l_pane

0x9b74,	// (0x00084c3b) cell_cmail_l_pane_g1_ParamLimits

0x9b74,	// (0x00084c3b) cell_cmail_l_pane_g1

0x9b84,	// (0x00084c4b) cell_cmail_l_pane_t1_ParamLimits

0x9b84,	// (0x00084c4b) cell_cmail_l_pane_t1

0x0009,	// (0x0007b0d0) cell_cmail_l_pane_t2_ParamLimits

0x0009,	// (0x0007b0d0) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x0008adf0) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x0008adf0) cell_cmail_l_pane_t

0xa50f,	// (0x000855d6) grid_highlight_pane_cp018_ParamLimits

0xa50f,	// (0x000855d6) grid_highlight_pane_cp018

0x3371,	// (0x0007e438) main2_pane_ParamLimits

0x3371,	// (0x0007e438) main2_pane

0xad87,	// (0x00085e4e) popup_sp_fs_action_menu_bg_pane_g1

0xad8f,	// (0x00085e56) popup_sp_fs_action_menu_bg_pane_g2

0xad97,	// (0x00085e5e) popup_sp_fs_action_menu_bg_pane_g3

0xad9f,	// (0x00085e66) popup_sp_fs_action_menu_bg_pane_g4

0xada7,	// (0x00085e6e) popup_sp_fs_action_menu_bg_pane_g5

0xadaf,	// (0x00085e76) popup_sp_fs_action_menu_bg_pane_g6

0xadb7,	// (0x00085e7e) popup_sp_fs_action_menu_bg_pane_g7

0xadbf,	// (0x00085e86) popup_sp_fs_action_menu_bg_pane_g8

0xadc7,	// (0x00085e8e) popup_sp_fs_action_menu_bg_pane_g9

0xadcf,	// (0x00085e96) popup_sp_fs_action_menu_bg_pane_g10

0xadcf,	// (0x00085e96) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0008a2b6) popup_sp_fs_action_menu_bg_pane_g

0xafba,	// (0x00086081) list_medium_line_x2_t3_g3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t3_g3_g1

0xafc6,	// (0x0008608d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_t3_g3_g2

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g3_g3_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0008a366) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0008a366) list_medium_line_x2_t3_g3_g

0xafde,	// (0x000860a5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xafde,	// (0x000860a5) list_medium_line_x2_t3_g3_t1

0x40a2,	// (0x0007f169) list_medium_line_x2_t3_g3_t2_ParamLimits

0x40a2,	// (0x0007f169) list_medium_line_x2_t3_g3_t2

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0008a36d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0008a36d) list_medium_line_x2_t3_g3_t

0xafba,	// (0x00086081) list_medium_line_x2_t3_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t3_g2_g1

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g2_g2_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0008a374) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0008a374) list_medium_line_x2_t3_g2_g

0xb008,	// (0x000860cf) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb008,	// (0x000860cf) list_medium_line_x2_t3_g2_t1

0xb01e,	// (0x000860e5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb01e,	// (0x000860e5) list_medium_line_x2_t3_g2_t2

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0008a379) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0008a379) list_medium_line_x2_t3_g2_t

0xafba,	// (0x00086081) list_medium_line_x2_t4_g4_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t4_g4_g1

0xb030,	// (0x000860f7) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_x2_t4_g4_g2

0xafc6,	// (0x0008608d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_t4_g4_g3

0xb03c,	// (0x00086103) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb03c,	// (0x00086103) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0008a380) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0008a380) list_medium_line_x2_t4_g4_g

0x40b4,	// (0x0007f17b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x40b4,	// (0x0007f17b) list_medium_line_x2_t4_g4_t1

0x40ce,	// (0x0007f195) list_medium_line_x2_t4_g4_t2_ParamLimits

0x40ce,	// (0x0007f195) list_medium_line_x2_t4_g4_t2

0x40e3,	// (0x0007f1aa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x40e3,	// (0x0007f1aa) list_medium_line_x2_t4_g4_t3

0xb048,	// (0x0008610f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb048,	// (0x0008610f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0008a389) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0008a389) list_medium_line_x2_t4_g4_t

0xafba,	// (0x00086081) list_medium_line_x2_t2_g4_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t2_g4_g1

0xb030,	// (0x000860f7) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_x2_t2_g4_g2

0xafc6,	// (0x0008608d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_t2_g4_g3

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g4_g4_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0008a3f0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0008a3f0) list_medium_line_x2_t2_g4_g

0xb19d,	// (0x00086264) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb19d,	// (0x00086264) list_medium_line_x2_t2_g4_t1

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0008a3f9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0008a3f9) list_medium_line_x2_t2_g4_t

0xafba,	// (0x00086081) list_medium_line_x2_t2_g3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t2_g3_g1

0xafc6,	// (0x0008608d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_t2_g3_g2

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g3_g3_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0008a366) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0008a366) list_medium_line_x2_t2_g3_g

0xb1b2,	// (0x00086279) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb1b2,	// (0x00086279) list_medium_line_x2_t2_g3_t1

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0008a3fe) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0008a3fe) list_medium_line_x2_t2_g3_t

0x4ce5,	// (0x0007fdac) main_sp_fs_list_pane_ParamLimits

0x4ce5,	// (0x0007fdac) main_sp_fs_list_pane

0x4cf2,	// (0x0007fdb9) sp_fs_scroll_pane_ParamLimits

0x4cf2,	// (0x0007fdb9) sp_fs_scroll_pane

0x4cff,	// (0x0007fdc6) list_medium_line_x2_t3_t1

0x4d0f,	// (0x0007fdd6) list_medium_line_x2_t3_t2

0xb1c7,	// (0x0008628e) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0008a449) list_medium_line_x2_t3_t

0x4d1d,	// (0x0007fde4) list_medium_line_x3_t4_t1

0x4d2d,	// (0x0007fdf4) list_medium_line_x3_t4_t2

0xb1d5,	// (0x0008629c) list_medium_line_x3_t4_t3

0xb1e3,	// (0x000862aa) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0008a450) list_medium_line_x3_t4_t

0x4d3b,	// (0x0007fe02) list_medium_line_x4_t5_t1

0x4d4b,	// (0x0007fe12) list_medium_line_x4_t5_t2

0xb1d5,	// (0x0008629c) list_medium_line_x4_t5_t3

0xb1f1,	// (0x000862b8) list_medium_line_x4_t5_t4

0xb1e3,	// (0x000862aa) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0008a459) list_medium_line_x4_t5_t

0xafba,	// (0x00086081) list_medium_line_t4_g4_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t4_g4_g1

0xb03c,	// (0x00086103) list_medium_line_t4_g4_g2_ParamLimits

0xb03c,	// (0x00086103) list_medium_line_t4_g4_g2

0xb1ff,	// (0x000862c6) list_medium_line_t4_g4_g3_ParamLimits

0xb1ff,	// (0x000862c6) list_medium_line_t4_g4_g3

0xafd2,	// (0x00086099) list_medium_line_t4_g4_g4_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0008a464) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0008a464) list_medium_line_t4_g4_g

0xb20b,	// (0x000862d2) list_medium_line_t4_g4_t1_ParamLimits

0xb20b,	// (0x000862d2) list_medium_line_t4_g4_t1

0xb220,	// (0x000862e7) list_medium_line_t4_g4_t2_ParamLimits

0xb220,	// (0x000862e7) list_medium_line_t4_g4_t2

0xb236,	// (0x000862fd) list_medium_line_t4_g4_t3_ParamLimits

0xb236,	// (0x000862fd) list_medium_line_t4_g4_t3

0xb24c,	// (0x00086313) list_medium_line_t4_g4_t4_ParamLimits

0xb24c,	// (0x00086313) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0008a46d) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0008a46d) list_medium_line_t4_g4_t

0x4e1a,	// (0x0007fee1) chi_dic_find_pane_g1

0x5d2f,	// (0x00080df6) main_tport_pane

0xd2ba,	// (0x00088381) list_medium_line_plain_t1

0xafba,	// (0x00086081) list_medium_line_t2_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t2_g2_g1

0xafc6,	// (0x0008608d) list_medium_line_t2_g2_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0008ab33) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0008ab33) list_medium_line_t2_g2_g

0x8903,	// (0x000839ca) list_medium_line_t2_g2_t1_ParamLimits

0x8903,	// (0x000839ca) list_medium_line_t2_g2_t1

0x891a,	// (0x000839e1) list_medium_line_t2_g2_t2_ParamLimits

0x891a,	// (0x000839e1) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x0008ab38) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x0008ab38) list_medium_line_t2_g2_t

0xd5e1,	// (0x000886a8) aid_sp_fs_list_icon_a_sm

0xd5e9,	// (0x000886b0) aid_sp_fs_list_icon_d

0xd5f1,	// (0x000886b8) aid_sp_fs_text_primary

0xd5fa,	// (0x000886c1) aid_sp_fs_text_secondary

0xd603,	// (0x000886ca) list_medium_line

0xd603,	// (0x000886ca) list_medium_line_g2

0xd603,	// (0x000886ca) list_medium_line_g3

0xd603,	// (0x000886ca) list_medium_line_plain

0xd603,	// (0x000886ca) list_medium_line_plain_t2

0xd603,	// (0x000886ca) list_medium_line_plain_t3

0xd603,	// (0x000886ca) list_medium_line_right_icon

0xd603,	// (0x000886ca) list_medium_line_right_iconx2

0xd603,	// (0x000886ca) list_medium_line_t2

0xd603,	// (0x000886ca) list_medium_line_t2_g2

0xd603,	// (0x000886ca) list_medium_line_t2_g3

0xd603,	// (0x000886ca) list_medium_line_t2_right_icon

0xd603,	// (0x000886ca) list_medium_line_t2_right_iconx2

0xd603,	// (0x000886ca) list_medium_line_t3

0xd603,	// (0x000886ca) list_medium_line_t3_g2

0xd603,	// (0x000886ca) list_medium_line_t3_g3

0xd603,	// (0x000886ca) list_medium_line_t3_right_iconx2

0xd60c,	// (0x000886d3) list_medium_line_t4_g4

0xd615,	// (0x000886dc) list_medium_line_x2

0xd615,	// (0x000886dc) list_medium_line_x2_t2_g2

0xd615,	// (0x000886dc) list_medium_line_x2_t2_g3

0xd615,	// (0x000886dc) list_medium_line_x2_t2_g4

0xd615,	// (0x000886dc) list_medium_line_x2_t3

0xd615,	// (0x000886dc) list_medium_line_x2_t3_g2

0xd615,	// (0x000886dc) list_medium_line_x2_t3_g3

0xd615,	// (0x000886dc) list_medium_line_x2_t3_g4

0xd615,	// (0x000886dc) list_medium_line_x2_t4_g2

0xd615,	// (0x000886dc) list_medium_line_x2_t4_g4

0xd61e,	// (0x000886e5) list_medium_line_x3

0xd61e,	// (0x000886e5) list_medium_line_x3_t4

0xd61e,	// (0x000886e5) list_medium_line_x3_t4_g4

0xd60c,	// (0x000886d3) list_medium_line_x4_t4

0xd60c,	// (0x000886d3) list_medium_line_x4_t4_g7

0xd60c,	// (0x000886d3) list_medium_line_x4_t5

0xd627,	// (0x000886ee) list_single_fs_dyc_pane_ParamLimits

0xd627,	// (0x000886ee) list_single_fs_dyc_pane

0xafba,	// (0x00086081) list_medium_line_x4_t4_g7_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x4_t4_g7_g1

0xdb20,	// (0x00088be7) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb20,	// (0x00088be7) list_medium_line_x4_t4_g7_g2

0xdb2c,	// (0x00088bf3) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb2c,	// (0x00088bf3) list_medium_line_x4_t4_g7_g3

0xdb3b,	// (0x00088c02) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb3b,	// (0x00088c02) list_medium_line_x4_t4_g7_g4

0xdb47,	// (0x00088c0e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb47,	// (0x00088c0e) list_medium_line_x4_t4_g7_g5

0xdb56,	// (0x00088c1d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb56,	// (0x00088c1d) list_medium_line_x4_t4_g7_g6

0xdb65,	// (0x00088c2c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb65,	// (0x00088c2c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0008acfd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0008acfd) list_medium_line_x4_t4_g7_g

0xdb71,	// (0x00088c38) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb71,	// (0x00088c38) list_medium_line_x4_t4_g7_t1

0xdb86,	// (0x00088c4d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdb86,	// (0x00088c4d) list_medium_line_x4_t4_g7_t2

0xdb9b,	// (0x00088c62) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdb9b,	// (0x00088c62) list_medium_line_x4_t4_g7_t3

0xdbb0,	// (0x00088c77) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdbb0,	// (0x00088c77) list_medium_line_x4_t4_g7_t4

0xdbc2,	// (0x00088c89) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdbc2,	// (0x00088c89) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0008ad0c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0008ad0c) list_medium_line_x4_t4_g7_t

0xdbd4,	// (0x00088c9b) list_single_dyc_row_pane_ParamLimits

0xdbd4,	// (0x00088c9b) list_single_dyc_row_pane

0x9ab9,	// (0x00084b80) call5_gesture_pane_ParamLimits

0x9ab9,	// (0x00084b80) call5_gesture_pane

0x9b01,	// (0x00084bc8) call5_windows_pane_ParamLimits

0x9b01,	// (0x00084bc8) call5_windows_pane

0x9b9a,	// (0x00084c61) call5_swipe_1_pane_cp_ParamLimits

0x9b9a,	// (0x00084c61) call5_swipe_1_pane_cp

0x9ba6,	// (0x00084c6d) call5_swipe_2_pane_cp_ParamLimits

0x9ba6,	// (0x00084c6d) call5_swipe_2_pane_cp

0x163e,	// (0x0007c705) call5_image_pane_cp

0x9bb2,	// (0x00084c79) popup_call5_audio_first_window_cp_ParamLimits

0x9bb2,	// (0x00084c79) popup_call5_audio_first_window_cp

0xf101,	// (0x0008a1c8) call5_swipe_1_pane_g1_cp_ParamLimits

0xf101,	// (0x0008a1c8) call5_swipe_1_pane_g1_cp

0x003f,	// (0x0007b106) call5_swipe_1_pane_g2_cp

0xf11a,	// (0x0008a1e1) call5_swipe_1_pane_t1_cp_ParamLimits

0xf11a,	// (0x0008a1e1) call5_swipe_1_pane_t1_cp

0xf101,	// (0x0008a1c8) call5_swipe_2_pane_g1_cp_ParamLimits

0xf101,	// (0x0008a1c8) call5_swipe_2_pane_g1_cp

0x0047,	// (0x0007b10e) call5_swipe_2_pane_g2_cp

0x004f,	// (0x0007b116) call5_swipe_2_pane_t1_cp_ParamLimits

0x004f,	// (0x0007b116) call5_swipe_2_pane_t1_cp

0xa50f,	// (0x000855d6) main_sp_fs_email_pane

0x0064,	// (0x0007b12b) main_sp_fs_listscroll_pane_te

0x9bbe,	// (0x00084c85) popup_sp_fs_action_menu_pane_ParamLimits

0x9bbe,	// (0x00084c85) popup_sp_fs_action_menu_pane

0xc680,	// (0x00087747) bg_sp_fs_ctrlbar_pane_g1

0x009d,	// (0x0007b164) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x00a6,	// (0x0007b16d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x00af,	// (0x0007b176) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc680,	// (0x00087747) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x0008adf5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc46d,	// (0x00087534) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc46d,	// (0x00087534) bg_sp_fs_ctrlbar_ddmenu_pane

0x00b8,	// (0x0007b17f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x00b8,	// (0x0007b17f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1a8e,	// (0x0007cb55) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1a8e,	// (0x0007cb55) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0008adfe) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0008adfe) main_sp_fs_ctrlbar_ddmenu_pane_g

0x00c4,	// (0x0007b18b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x00c4,	// (0x0007b18b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe14f,	// (0x00089216) list_medium_line_t2_right_icon_g1

0xe157,	// (0x0008921e) list_medium_line_t2_right_icon_t1

0x9bee,	// (0x00084cb5) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x0008ae03) list_medium_line_t2_right_icon_t

0xc23d,	// (0x00087304) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc23d,	// (0x00087304) bg_sp_fs_ctrlbar_pane

0x9c45,	// (0x00084d0c) main_sp_fs_ctrlbar_button_pane_cp01

0x9c4d,	// (0x00084d14) main_sp_fs_ctrlbar_ddmenu_pane

0x019a,	// (0x0007b261) main_sp_fs_ctrlbar_pane_g1

0x01a6,	// (0x0007b26d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x0008ae08) main_sp_fs_ctrlbar_pane_g

0x01b2,	// (0x0007b279) main_sp_fs_ctrlbar_pane_t1

0x9c57,	// (0x00084d1e) main_sp_fs_ctrlbar_pane

0x9c78,	// (0x00084d3f) main_sp_fs_listscroll_pane_te_cp01

0x9c98,	// (0x00084d5f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9c98,	// (0x00084d5f) popup_sp_fs_action_menu_pane_cp01

0xa50f,	// (0x000855d6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa50f,	// (0x000855d6) bg_sp_fs_highlight_list_pane_cp01

0x9cbd,	// (0x00084d84) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9cbd,	// (0x00084d84) sp_fs_action_menu_list_gene_pane_g1

0x0221,	// (0x0007b2e8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0221,	// (0x0007b2e8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0008ae0d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0008ae0d) sp_fs_action_menu_list_gene_pane_g

0x9ccc,	// (0x00084d93) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9ccc,	// (0x00084d93) sp_fs_action_menu_list_gene_pane_t1

0x9ce4,	// (0x00084dab) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9ce4,	// (0x00084dab) sp_fs_action_menu_list_gene_pane

0x0263,	// (0x0007b32a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0263,	// (0x0007b32a) popup_sp_fs_action_menu_bg_pane

0x9d01,	// (0x00084dc8) sp_fs_action_menu_list_pane_ParamLimits

0x9d01,	// (0x00084dc8) sp_fs_action_menu_list_pane

0x028d,	// (0x0007b354) sp_fs_scroll_pane_cp01_ParamLimits

0x028d,	// (0x0007b354) sp_fs_scroll_pane_cp01

0x9d1d,	// (0x00084de4) list_medium_line_plain_t2_t1

0x9d2d,	// (0x00084df4) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x0008ae12) list_medium_line_plain_t2_t

0x9d3b,	// (0x00084e02) list_medium_line_plain_t3_t1

0x9d4b,	// (0x00084e12) list_medium_line_plain_t3_t2

0x9d59,	// (0x00084e20) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x0008ae17) list_medium_line_plain_t3_t

0xafba,	// (0x00086081) list_medium_line_x2_t2_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t2_g2_g1

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g2_g2_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0008a374) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0008a374) list_medium_line_x2_t2_g2_g

0xb20b,	// (0x000862d2) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb20b,	// (0x000862d2) list_medium_line_x2_t2_g2_t1

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0008ae1e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0008ae1e) list_medium_line_x2_t2_g2_t

0xafba,	// (0x00086081) list_medium_line_x2_t4_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t4_g2_g1

0xe167,	// (0x0008922e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe167,	// (0x0008922e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x0008ae23) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x0008ae23) list_medium_line_x2_t4_g2_g

0x9d67,	// (0x00084e2e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d67,	// (0x00084e2e) list_medium_line_x2_t4_g2_t1

0x9d81,	// (0x00084e48) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d81,	// (0x00084e48) list_medium_line_x2_t4_g2_t2

0x9d96,	// (0x00084e5d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9d96,	// (0x00084e5d) list_medium_line_x2_t4_g2_t3

0xaff3,	// (0x000860ba) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x0008ae28) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x0008ae28) list_medium_line_x2_t4_g2_t

0xe179,	// (0x00089240) list_medium_line_t3_right_iconx2_g1

0xe14f,	// (0x00089216) list_medium_line_t3_right_iconx2_g2

0x9dab,	// (0x00084e72) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x0008ae31) list_medium_line_t3_right_iconx2_g

0x9db3,	// (0x00084e7a) list_medium_line_t3_right_iconx2_t1

0x9dc3,	// (0x00084e8a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x0008ae38) list_medium_line_t3_right_iconx2_t

0xafba,	// (0x00086081) list_medium_line_x3_t4_g4_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x3_t4_g4_g1

0xafc6,	// (0x0008608d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x3_t4_g4_g2

0xb03c,	// (0x00086103) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb03c,	// (0x00086103) list_medium_line_x3_t4_g4_g3

0xe181,	// (0x00089248) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe181,	// (0x00089248) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x0008ae3d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x0008ae3d) list_medium_line_x3_t4_g4_g

0x8903,	// (0x000839ca) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8903,	// (0x000839ca) list_medium_line_x3_t4_g4_t1

0x891a,	// (0x000839e1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x891a,	// (0x000839e1) list_medium_line_x3_t4_g4_t2

0xe18d,	// (0x00089254) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe18d,	// (0x00089254) list_medium_line_x3_t4_g4_t3

0xe1a2,	// (0x00089269) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe1a2,	// (0x00089269) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x0008ae46) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x0008ae46) list_medium_line_x3_t4_g4_t

0x9dd1,	// (0x00084e98) list_single_dyc_row_text_pane_t1_ParamLimits

0x9dd1,	// (0x00084e98) list_single_dyc_row_text_pane_t1

0x9e08,	// (0x00084ecf) list_single_dyc_row_text_pane_t2_ParamLimits

0x9e08,	// (0x00084ecf) list_single_dyc_row_text_pane_t2

0xe1bf,	// (0x00089286) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1bf,	// (0x00089286) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x0008ae4f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x0008ae4f) list_single_dyc_row_text_pane_t

0xe1d1,	// (0x00089298) list_single_dyc_row_pane_g1_ParamLimits

0xe1d1,	// (0x00089298) list_single_dyc_row_pane_g1

0xe1dd,	// (0x000892a4) list_single_dyc_row_pane_g2_ParamLimits

0xe1dd,	// (0x000892a4) list_single_dyc_row_pane_g2

0xe1e9,	// (0x000892b0) list_single_dyc_row_pane_g3_ParamLimits

0xe1e9,	// (0x000892b0) list_single_dyc_row_pane_g3

0xe1f5,	// (0x000892bc) list_single_dyc_row_pane_g4_ParamLimits

0xe1f5,	// (0x000892bc) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x0008ae56) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x0008ae56) list_single_dyc_row_pane_g

0xe201,	// (0x000892c8) list_single_dyc_row_text_pane_ParamLimits

0xe201,	// (0x000892c8) list_single_dyc_row_text_pane

0xa4b4,	// (0x0008557b) bg_sp_fs_scroll_pane

0x03de,	// (0x0007b4a5) thumb_sp_fs_scroll_pane

0xafba,	// (0x00086081) list_medium_line_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_g1

0xb20b,	// (0x000862d2) list_medium_line_t1_ParamLimits

0xb20b,	// (0x000862d2) list_medium_line_t1

0xafba,	// (0x00086081) list_medium_line_x2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_g1

0xafc6,	// (0x0008608d) list_medium_line_x2_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0008ab33) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0008ab33) list_medium_line_x2_g

0xe220,	// (0x000892e7) list_medium_line_x2_t1_ParamLimits

0xe220,	// (0x000892e7) list_medium_line_x2_t1

0xafba,	// (0x00086081) list_medium_line_x3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x3_g1

0xafc6,	// (0x0008608d) list_medium_line_x3_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0008ab33) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0008ab33) list_medium_line_x3_g

0xe220,	// (0x000892e7) list_medium_line_x3_t1_ParamLimits

0xe220,	// (0x000892e7) list_medium_line_x3_t1

0x03e7,	// (0x0007b4ae) thumb_sp_fs_scroll_pane_g1

0x03f0,	// (0x0007b4b7) thumb_sp_fs_scroll_pane_g2

0x03f9,	// (0x0007b4c0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0008ae5f) thumb_sp_fs_scroll_pane_g

0x03e7,	// (0x0007b4ae) bg_sp_fs_scroll_pane_g1

0x03f0,	// (0x0007b4b7) bg_sp_fs_scroll_pane_g2

0x03f9,	// (0x0007b4c0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0008ae5f) bg_sp_fs_scroll_pane_g

0xafba,	// (0x00086081) list_medium_line_x2_t3_g4_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_x2_t3_g4_g1

0xb030,	// (0x000860f7) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_x2_t3_g4_g2

0xafc6,	// (0x0008608d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_x2_t3_g4_g3

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g4_g4_ParamLimits

0xafd2,	// (0x00086099) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0008a3f0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0008a3f0) list_medium_line_x2_t3_g4_g

0x9e62,	// (0x00084f29) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9e62,	// (0x00084f29) list_medium_line_x2_t3_g4_t1

0x9e78,	// (0x00084f3f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9e78,	// (0x00084f3f) list_medium_line_x2_t3_g4_t2

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaff3,	// (0x000860ba) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x0008ae66) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x0008ae66) list_medium_line_x2_t3_g4_t

0xafba,	// (0x00086081) list_medium_line_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_g2_g1

0xafc6,	// (0x0008608d) list_medium_line_g2_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0008ab33) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0008ab33) list_medium_line_g2_g

0xb1b2,	// (0x00086279) list_medium_line_g2_t1_ParamLimits

0xb1b2,	// (0x00086279) list_medium_line_g2_t1

0xafba,	// (0x00086081) list_medium_line_t3_g2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t3_g2_g1

0xafc6,	// (0x0008608d) list_medium_line_t3_g2_g2_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0008ab33) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0008ab33) list_medium_line_t3_g2_g

0x9e91,	// (0x00084f58) list_medium_line_t3_g2_t1_ParamLimits

0x9e91,	// (0x00084f58) list_medium_line_t3_g2_t1

0x9ea8,	// (0x00084f6f) list_medium_line_t3_g2_t2_ParamLimits

0x9ea8,	// (0x00084f6f) list_medium_line_t3_g2_t2

0x9ebd,	// (0x00084f84) list_medium_line_t3_g2_t3_ParamLimits

0x9ebd,	// (0x00084f84) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x0008ae6d) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x0008ae6d) list_medium_line_t3_g2_t

0xe14f,	// (0x00089216) list_medium_line_right_icon_g1

0xe236,	// (0x000892fd) list_medium_line_right_icon_t1

0xafba,	// (0x00086081) list_medium_line_t2_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t2_g1

0xe244,	// (0x0008930b) list_medium_line_t2_t1_ParamLimits

0xe244,	// (0x0008930b) list_medium_line_t2_t1

0x9ed2,	// (0x00084f99) list_medium_line_t2_t2_ParamLimits

0x9ed2,	// (0x00084f99) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x0008ae74) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x0008ae74) list_medium_line_t2_t

0xafba,	// (0x00086081) list_medium_line_t3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t3_g1

0x9ee7,	// (0x00084fae) list_medium_line_t3_t1_ParamLimits

0x9ee7,	// (0x00084fae) list_medium_line_t3_t1

0x9efe,	// (0x00084fc5) list_medium_line_t3_t2_ParamLimits

0x9efe,	// (0x00084fc5) list_medium_line_t3_t2

0x9f13,	// (0x00084fda) list_medium_line_t3_t3_ParamLimits

0x9f13,	// (0x00084fda) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x0008ae79) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x0008ae79) list_medium_line_t3_t

0xafba,	// (0x00086081) list_medium_line_g3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_g3_g1

0xb030,	// (0x000860f7) list_medium_line_g3_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_g3_g2

0xafc6,	// (0x0008608d) list_medium_line_g3_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x0008ae80) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x0008ae80) list_medium_line_g3_g

0xb19d,	// (0x00086264) list_medium_line_g3_t1_ParamLimits

0xb19d,	// (0x00086264) list_medium_line_g3_t1

0xafba,	// (0x00086081) list_medium_line_t2_g3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t2_g3_g1

0xb030,	// (0x000860f7) list_medium_line_t2_g3_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_t2_g3_g2

0xafc6,	// (0x0008608d) list_medium_line_t2_g3_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x0008ae80) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x0008ae80) list_medium_line_t2_g3_g

0x9f25,	// (0x00084fec) list_medium_line_t2_g3_t1_ParamLimits

0x9f25,	// (0x00084fec) list_medium_line_t2_g3_t1

0x9f3c,	// (0x00085003) list_medium_line_t2_g3_t2_ParamLimits

0x9f3c,	// (0x00085003) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x0008ae87) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x0008ae87) list_medium_line_t2_g3_t

0xafba,	// (0x00086081) list_medium_line_t3_g3_g1_ParamLimits

0xafba,	// (0x00086081) list_medium_line_t3_g3_g1

0xb030,	// (0x000860f7) list_medium_line_t3_g3_g2_ParamLimits

0xb030,	// (0x000860f7) list_medium_line_t3_g3_g2

0xafc6,	// (0x0008608d) list_medium_line_t3_g3_g3_ParamLimits

0xafc6,	// (0x0008608d) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x0008ae80) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x0008ae80) list_medium_line_t3_g3_g

0x9f51,	// (0x00085018) list_medium_line_t3_g3_t1_ParamLimits

0x9f51,	// (0x00085018) list_medium_line_t3_g3_t1

0x9f65,	// (0x0008502c) list_medium_line_t3_g3_t2_ParamLimits

0x9f65,	// (0x0008502c) list_medium_line_t3_g3_t2

0x9f77,	// (0x0008503e) list_medium_line_t3_g3_t3_ParamLimits

0x9f77,	// (0x0008503e) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x0008ae8c) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x0008ae8c) list_medium_line_t3_g3_t

0xe179,	// (0x00089240) list_medium_line_right_iconx2_g1

0xe14f,	// (0x00089216) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0008ae93) list_medium_line_right_iconx2_g

0xe25e,	// (0x00089325) list_medium_line_right_iconx2_t1

0xe179,	// (0x00089240) list_medium_line_t2_right_iconx2_g1

0xe14f,	// (0x00089216) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0008ae93) list_medium_line_t2_right_iconx2_g

0x9f89,	// (0x00085050) list_medium_line_t2_right_iconx2_t1

0x9f99,	// (0x00085060) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x0008ae98) list_medium_line_t2_right_iconx2_t

0xd2ba,	// (0x00088381) list_medium_line_x4_t4_t1

0x9fa7,	// (0x0008506e) list_medium_line_x4_t4_t2

0x9fb7,	// (0x0008507e) list_medium_line_x4_t4_t3

0x9fc7,	// (0x0008508e) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x0008ae9d) list_medium_line_x4_t4_t

0xa012,	// (0x000850d9) tport_appsw_pane_ParamLimits

0xa012,	// (0x000850d9) tport_appsw_pane

0xa023,	// (0x000850ea) tport_contact_pane_ParamLimits

0xa023,	// (0x000850ea) tport_contact_pane

0xa038,	// (0x000850ff) tport_listscroll_pane_ParamLimits

0xa038,	// (0x000850ff) tport_listscroll_pane

0xa051,	// (0x00085118) cell_tport_appsw_pane_ParamLimits

0xa051,	// (0x00085118) cell_tport_appsw_pane

0xd036,	// (0x000880fd) tport_appsw_pane_g1_ParamLimits

0xd036,	// (0x000880fd) tport_appsw_pane_g1

0x0591,	// (0x0007b658) tport_contact_pane_g1

0x059a,	// (0x0007b661) tport_contact_pane_t1

0x05a8,	// (0x0007b66f) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x0008aea6) tport_contact_pane_t

0x05b6,	// (0x0007b67d) list_tport_pane

0xade1,	// (0x00085ea8) scroll_pane_cp_030

0x05c7,	// (0x0007b68e) cell_tport_appsw_pane_g1

0x05e0,	// (0x0007b6a7) cell_tport_appsw_pane_t1

0xa4b4,	// (0x0008557b) grid_highlight_pane_cp019

0xa067,	// (0x0008512e) list_tport_double_graphic_pane_ParamLimits

0xa067,	// (0x0008512e) list_tport_double_graphic_pane

0xa50f,	// (0x000855d6) list_highlight_pane_cp023_ParamLimits

0xa50f,	// (0x000855d6) list_highlight_pane_cp023

0xa074,	// (0x0008513b) list_tport_double_graphic_pane_g1_ParamLimits

0xa074,	// (0x0008513b) list_tport_double_graphic_pane_g1

0xa081,	// (0x00085148) list_tport_double_graphic_pane_t1_ParamLimits

0xa081,	// (0x00085148) list_tport_double_graphic_pane_t1

0xa096,	// (0x0008515d) list_tport_double_graphic_pane_t2_ParamLimits

0xa096,	// (0x0008515d) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x0008aeb2) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x0008aeb2) list_tport_double_graphic_pane_t

0xa4b4,	// (0x0008557b) main_cale_note_pane

0x8129,	// (0x000831f0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8129,	// (0x000831f0) cell_vitu2_function_top_wide_pane_cp01

0x979f,	// (0x00084866) wait_bar_pane_cp05_ParamLimits

0xa4b4,	// (0x0008557b) listscroll_cmail_pane

0x062f,	// (0x0007b6f6) list_cmail_pane

0xa0a8,	// (0x0008516f) list_cmail_body_pane

0xa0a8,	// (0x0008516f) list_single_cmail_header_caption_pane

0xa0be,	// (0x00085185) list_single_cmail_header_detail_pane_ParamLimits

0xa0be,	// (0x00085185) list_single_cmail_header_detail_pane

0x068d,	// (0x0007b754) list_single_cmail_header_caption_pane_t1

0xa0e6,	// (0x000851ad) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa0e6,	// (0x000851ad) list_single_cmail_header_detail_pane_g1

0x06b1,	// (0x0007b778) list_single_cmail_header_detail_pane_g2_ParamLimits

0x06b1,	// (0x0007b778) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x0008aeb7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x0008aeb7) list_single_cmail_header_detail_pane_g

0xe274,	// (0x0008933b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe274,	// (0x0008933b) list_single_cmail_header_detail_pane_t1

0xe2a6,	// (0x0008936d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2a6,	// (0x0008936d) list_single_cmail_header_editor_pane_bg

0x06ee,	// (0x0007b7b5) list_cmail_body_pane_g1

0x06f7,	// (0x0007b7be) list_cmail_body_pane_t1

0xd08e,	// (0x00088155) list_single_cmail_header_editor_pane_bg_g1

0x0ef0,	// (0x0007bfb7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd09e,	// (0x00088165) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd096,	// (0x0008815d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2c8,	// (0x0008838f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0be,	// (0x00088185) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0ae,	// (0x00088175) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0b6,	// (0x0008817d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ed0,	// (0x0007bf97) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa120,	// (0x000851e7) calenote_gesture_pane_ParamLimits

0xa120,	// (0x000851e7) calenote_gesture_pane

0xa13c,	// (0x00085203) calenote_window_pane_ParamLimits

0xa13c,	// (0x00085203) calenote_window_pane

0x0735,	// (0x0007b7fc) popup_note_window_cp01

0xa158,	// (0x0008521f) calenote_swipe_1_pane_ParamLimits

0xa158,	// (0x0008521f) calenote_swipe_1_pane

0x9ba6,	// (0x00084c6d) calenote_swipe_2_pane_ParamLimits

0x9ba6,	// (0x00084c6d) calenote_swipe_2_pane

0xf101,	// (0x0008a1c8) calenote_swipe_1_pane_g1_ParamLimits

0xf101,	// (0x0008a1c8) calenote_swipe_1_pane_g1

0xf10e,	// (0x0008a1d5) calenote_swipe_1_pane_g2_ParamLimits

0xf10e,	// (0x0008a1d5) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0008adeb) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0008adeb) calenote_swipe_1_pane_g

0x075a,	// (0x0007b821) calenote_swipe_1_pane_t1_ParamLimits

0x075a,	// (0x0007b821) calenote_swipe_1_pane_t1

0xf101,	// (0x0008a1c8) calenote_swipe_2_pane_g1_ParamLimits

0xf101,	// (0x0008a1c8) calenote_swipe_2_pane_g1

0x0779,	// (0x0007b840) calenote_swipe_2_pane_g2_ParamLimits

0x0779,	// (0x0007b840) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x0008aec3) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x0008aec3) calenote_swipe_2_pane_g

0x0785,	// (0x0007b84c) calenote_swipe_2_pane_t1_ParamLimits

0x0785,	// (0x0007b84c) calenote_swipe_2_pane_t1

0xa4b4,	// (0x0008557b) main_mup_navstr_pane

0x6efb,	// (0x00081fc2) main_mup3_pane_t7_ParamLimits

0x6efb,	// (0x00081fc2) main_mup3_pane_t7

0xed88,	// (0x00089e4f) main_mp4_pane_g6_ParamLimits

0xed88,	// (0x00089e4f) main_mp4_pane_g6

0xef22,	// (0x00089fe9) main_image3_pane_t4_ParamLimits

0xef22,	// (0x00089fe9) main_image3_pane_t4

0xa16d,	// (0x00085234) popup_navstr_preview_pane_ParamLimits

0xa16d,	// (0x00085234) popup_navstr_preview_pane

0xa17d,	// (0x00085244) scroll_navstr_pane_ParamLimits

0xa17d,	// (0x00085244) scroll_navstr_pane

0xa4b4,	// (0x0008557b) bg_popup_preview_window_pane_cp04

0x07c4,	// (0x0007b88b) popup_navstr_preview_pane_t1

0xa191,	// (0x00085258) scroll_navstr_pane_g1_ParamLimits

0xa191,	// (0x00085258) scroll_navstr_pane_g1

0xa1a5,	// (0x0008526c) scroll_navstr_pane_t1_ParamLimits

0xa1a5,	// (0x0008526c) scroll_navstr_pane_t1

0x0751,	// (0x0007b818) bg_button_pane_cp014

0x0751,	// (0x0007b818) bg_button_pane_cp030

0x9a5f,	// (0x00084b26) list_double_fisheye_pane_g4_ParamLimits

0x9a5f,	// (0x00084b26) list_double_fisheye_pane_g4

0x9a6b,	// (0x00084b32) list_double_fisheye_pane_g5_ParamLimits

0x9a6b,	// (0x00084b32) list_double_fisheye_pane_g5

0x063f,	// (0x0007b706) sp_fs_scroll_pane_cp03

0x019a,	// (0x0007b261) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x01a6,	// (0x0007b26d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x0008ae08) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x01b2,	// (0x0007b279) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0637,	// (0x0007b6fe) sp_fs_scroll_pane_cp02

0xae4f,	// (0x00085f16) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xae4f,	// (0x00085f16) popup_sp_fs_calendar_preview_list_single_pane

0xa4b4,	// (0x0008557b) main_cam6_pano_pane

0xa50f,	// (0x000855d6) main_mup3_pane_ParamLimits

0xa4b4,	// (0x0008557b) main_phacti_pane

0x9692,	// (0x00084759) bg_button_pane_cp11

0x96aa,	// (0x00084771) main_mobtv_info_pane_g2_ParamLimits

0x96aa,	// (0x00084771) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x0008ad68) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x0008ad68) main_mobtv_info_pane_g

0x985d,	// (0x00084924) sc_clock_pane_t5_ParamLimits

0x985d,	// (0x00084924) sc_clock_pane_t5

0x98d0,	// (0x00084997) main_radioblah_pane_g1_ParamLimits

0xe0cb,	// (0x00089192) main_radioblah_pane_t3_ParamLimits

0xe0cb,	// (0x00089192) main_radioblah_pane_t3

0xe0e3,	// (0x000891aa) main_radioblah_pane_t4_ParamLimits

0xe0e3,	// (0x000891aa) main_radioblah_pane_t4

0x98f8,	// (0x000849bf) main_radioblah_text_pane_ParamLimits

0x98f8,	// (0x000849bf) main_radioblah_text_pane

0x990a,	// (0x000849d1) main_radioblah_info_pane_g1_ParamLimits

0x999d,	// (0x00084a64) main_radioblah_info_pane_t4_ParamLimits

0x999d,	// (0x00084a64) main_radioblah_info_pane_t4

0xa50f,	// (0x000855d6) main_sp_fs_calendar_pane

0xa1bb,	// (0x00085282) main_phacti_pane_g1

0xa1c3,	// (0x0008528a) phacti_note_pane_ParamLimits

0xa1c3,	// (0x0008528a) phacti_note_pane

0x0816,	// (0x0007b8dd) phacti_term_pane_ParamLimits

0x0816,	// (0x0007b8dd) phacti_term_pane

0x082b,	// (0x0007b8f2) phacti_note_pane_t1_ParamLimits

0x082b,	// (0x0007b8f2) phacti_note_pane_t1

0xe2b8,	// (0x0008937f) phacti_term_pane_g1

0xe2c0,	// (0x00089387) phacti_term_pane_t1_ParamLimits

0xe2c0,	// (0x00089387) phacti_term_pane_t1

0x0842,	// (0x0007b909) popup_sp_fs_calendar_preview_list_single_pane_g1

0x084a,	// (0x0007b911) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x0008aecd) popup_sp_fs_calendar_preview_list_single_pane_g

0x0852,	// (0x0007b919) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0852,	// (0x0007b919) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0868,	// (0x0007b92f) aid_popup_sp_fs_bg_corner_pane

0xc680,	// (0x00087747) popup_sp_fs_calendar_preview_bg_pane_g1

0xa4b4,	// (0x0008557b) popup_sp_fs_calendar_preview_bg_pane

0x0870,	// (0x0007b937) popup_sp_fs_calendar_preview_list_pane

0xa50f,	// (0x000855d6) bg_main_sp_fs_cale_pane_ParamLimits

0xa50f,	// (0x000855d6) bg_main_sp_fs_cale_pane

0xe2ea,	// (0x000893b1) listscroll_cale_mrui_pane_ParamLimits

0xe2ea,	// (0x000893b1) listscroll_cale_mrui_pane

0xd0fe,	// (0x000881c5) listscroll_sp_fs_schedule_track_pane

0xe2fe,	// (0x000893c5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2fe,	// (0x000893c5) main_sp_fs_ctrlbar_pane_cp01

0x089f,	// (0x0007b966) main_sp_fs_ribbon_pane

0xe30f,	// (0x000893d6) popup_sp_fs_cale_preview_window

0xa212,	// (0x000852d9) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa212,	// (0x000852d9) list_single_sp_fs_schedule_track_pane

0xa50f,	// (0x000855d6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa50f,	// (0x000855d6) bg_sp_fs_highlight_list_pane_cp03

0xa225,	// (0x000852ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa225,	// (0x000852ec) list_single_sp_fs_schedule_track_pane_g1

0xa231,	// (0x000852f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa231,	// (0x000852f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x0008aed2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x0008aed2) list_single_sp_fs_schedule_track_pane_g

0xa23d,	// (0x00085304) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa23d,	// (0x00085304) list_single_sp_fs_schedule_track_pane_t1

0xa257,	// (0x0008531e) sp_fs_schedule_track_pane_ParamLimits

0xa257,	// (0x0008531e) sp_fs_schedule_track_pane

0x08fc,	// (0x0007b9c3) sp_fs_schedule_track_pane_g1

0x0904,	// (0x0007b9cb) sp_fs_schedule_track_pane_g2

0x090c,	// (0x0007b9d3) sp_fs_schedule_track_pane_g3

0x0914,	// (0x0007b9db) sp_fs_schedule_track_pane_g4

0x091c,	// (0x0007b9e3) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x0008aed7) sp_fs_schedule_track_pane_g

0xd08e,	// (0x00088155) bg_sp_fs_schedule_viewer_highlight_g1

0x0ef0,	// (0x0007bfb7) bg_sp_fs_schedule_viewer_highlight_g2

0xd096,	// (0x0008815d) bg_sp_fs_schedule_viewer_highlight_g3

0xd09e,	// (0x00088165) bg_sp_fs_schedule_viewer_highlight_g4

0xd2c8,	// (0x0008838f) bg_sp_fs_schedule_viewer_highlight_g5

0xd0ae,	// (0x00088175) bg_sp_fs_schedule_viewer_highlight_g6

0xd0b6,	// (0x0008817d) bg_sp_fs_schedule_viewer_highlight_g7

0xd0be,	// (0x00088185) bg_sp_fs_schedule_viewer_highlight_g8

0x0ed0,	// (0x0007bf97) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x0008aee2) bg_sp_fs_schedule_viewer_highlight_g

0xa4b4,	// (0x0008557b) bg_main_sp_fs_ribbon_pane

0xa268,	// (0x0008532f) main_sp_fs_ribbon_pane_g1

0x092d,	// (0x0007b9f4) main_sp_fs_ribbon_pane_t1

0xa271,	// (0x00085338) main_sp_fs_ribbon_pane_t2

0x094b,	// (0x0007ba12) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x0008aef5) main_sp_fs_ribbon_pane_t

0x095a,	// (0x0007ba21) main_sp_fs_ribbon_scheduler_pane

0x0962,	// (0x0007ba29) bg_main_sp_fs_ribbon_pane_g1

0x096b,	// (0x0007ba32) bg_main_sp_fs_ribbon_pane_g2

0x0974,	// (0x0007ba3b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x0008aefc) bg_main_sp_fs_ribbon_pane_g

0x097c,	// (0x0007ba43) main_sp_fs_ribbon_scheduler_pane_g1

0x0985,	// (0x0007ba4c) main_sp_fs_ribbon_scheduler_pane_g2

0x098e,	// (0x0007ba55) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x0008af03) main_sp_fs_ribbon_scheduler_pane_g

0xe13d,	// (0x00089204) list_cale_mrui_pane

0x0997,	// (0x0007ba5e) sp_fs_scroll_pane_cp07_ParamLimits

0x0997,	// (0x0007ba5e) sp_fs_scroll_pane_cp07

0xa280,	// (0x00085347) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa280,	// (0x00085347) bg_sp_fs_schedule_viewer_highlight

0x09b9,	// (0x0007ba80) list_single_sp_fs_schedule_track_pane_cp01

0x09c1,	// (0x0007ba88) list_sp_fs_schedule_track_pane

0x09c9,	// (0x0007ba90) sp_fs_scroll_pane_cp06_ParamLimits

0x09c9,	// (0x0007ba90) sp_fs_scroll_pane_cp06

0xc680,	// (0x00087747) bgmain_sp_fs_calendar_pane_g1

0xa290,	// (0x00085357) list_single_cale_mrui_pane_ParamLimits

0xa290,	// (0x00085357) list_single_cale_mrui_pane

0xe321,	// (0x000893e8) list_single_cale_mrui_row_pane_ParamLimits

0xe321,	// (0x000893e8) list_single_cale_mrui_row_pane

0xe32e,	// (0x000893f5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe32e,	// (0x000893f5) list_single_cale_mrui_row_pane_g1

0xe366,	// (0x0008942d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe366,	// (0x0008942d) list_single_cale_mrui_row_pane_t1

0xa2b3,	// (0x0008537a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa2b3,	// (0x0008537a) list_single_cale_mrui_row_pane_t2

0xe378,	// (0x0008943f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe378,	// (0x0008943f) list_single_cale_mrui_row_pane_t3

0xe3a7,	// (0x0008946e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3a7,	// (0x0008946e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x0008af0f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x0008af0f) list_single_cale_mrui_row_pane_t

0xa319,	// (0x000853e0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa319,	// (0x000853e0) list_single_cmail_header_editor_pane_bg_cp01

0xa33d,	// (0x00085404) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa33d,	// (0x00085404) list_single_cmail_header_editor_pane_bg_cp02

0xa35b,	// (0x00085422) main_radioblah_text_pane_t1_ParamLimits

0xa35b,	// (0x00085422) main_radioblah_text_pane_t1

0x0ac1,	// (0x0007bb88) cam6_indi_pane_cp01

0x0ac9,	// (0x0007bb90) cam6_mode_pane_cp01

0x0ad1,	// (0x0007bb98) cam6_pano_pane

0x0ada,	// (0x0007bba1) cam6_zoom_pane_cp01

0x0ae2,	// (0x0007bba9) cam6_pano_image_pane

0x0aeb,	// (0x0007bbb2) cam6_pano_pane_g1

0xde49,	// (0x00088f10) cam6_pano_pane_g2

0x0af4,	// (0x0007bbbb) cam6_pano_pane_g3

0x0afd,	// (0x0007bbc4) cam6_pano_pane_g4

0xcbe6,	// (0x00087cad) cam6_pano_pane_g5

0x0b06,	// (0x0007bbcd) cam6_pano_pane_g6

0x0b0e,	// (0x0007bbd5) cam6_pano_pane_g7

0x0b16,	// (0x0007bbdd) cam6_pano_pane_g8

0x0b1f,	// (0x0007bbe6) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x0008af18) cam6_pano_pane_g

0xa4b4,	// (0x0008557b) main_browser_tag_pane

0x07a4,	// (0x0007b86b) grid_navstr_albumart_pane

0x0b28,	// (0x0007bbef) cell_navstr_albumart_pane_ParamLimits

0x0b28,	// (0x0007bbef) cell_navstr_albumart_pane

0x179f,	// (0x0007c866) cell_navstr_albumart_pane_g1

0xc01a,	// (0x000870e1) cell_navstr_albumart_pane_g2

0xc02a,	// (0x000870f1) cell_navstr_albumart_pane_g3

0xc022,	// (0x000870e9) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x0008af2b) cell_navstr_albumart_pane_g

0xa374,	// (0x0008543b) bt_list_pane_ParamLimits

0xa374,	// (0x0008543b) bt_list_pane

0xa387,	// (0x0008544e) bt_list_pane_t1

0xa396,	// (0x0008545d) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x0008af34) bt_list_pane_t

0xa4b4,	// (0x0008557b) main_cale_prevew_pane

0xa3a5,	// (0x0008546c) popup_cale_preview_window_ParamLimits

0xa3a5,	// (0x0008546c) popup_cale_preview_window

0xa50f,	// (0x000855d6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa50f,	// (0x000855d6) bg_popup_preview_window_pane_cp05

0x0b87,	// (0x0007bc4e) list_cale_preview_pane_ParamLimits

0x0b87,	// (0x0007bc4e) list_cale_preview_pane

0xa3ba,	// (0x00085481) list_double_cale_preview_pane_ParamLimits

0xa3ba,	// (0x00085481) list_double_cale_preview_pane

0xa3cb,	// (0x00085492) list_single_cale_preview_pane_ParamLimits

0xa3cb,	// (0x00085492) list_single_cale_preview_pane

0x0bd5,	// (0x0007bc9c) list_single_cale_preview_pane_g1

0x0bdd,	// (0x0007bca4) list_single_cale_preview_pane_t1_ParamLimits

0x0bdd,	// (0x0007bca4) list_single_cale_preview_pane_t1

0xa3df,	// (0x000854a6) list_double_cale_preview_pane_g1

0xa3e7,	// (0x000854ae) list_double_cale_preview_pane_t1_ParamLimits

0xa3e7,	// (0x000854ae) list_double_cale_preview_pane_t1

0xa3fc,	// (0x000854c3) list_double_cale_preview_pane_t2_ParamLimits

0xa3fc,	// (0x000854c3) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x0008af39) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x0008af39) list_double_cale_preview_pane_t

0xa4b4,	// (0x0008557b) main_ezdial_pane

0xa50f,	// (0x000855d6) main_sp_fs_email_pane_ParamLimits

0x9bfc,	// (0x00084cc3) cmail_ddmenu_btn01_pane_ParamLimits

0x9bfc,	// (0x00084cc3) cmail_ddmenu_btn01_pane

0x9c0f,	// (0x00084cd6) cmail_ddmenu_btn02_pane_ParamLimits

0x9c0f,	// (0x00084cd6) cmail_ddmenu_btn02_pane

0x9c32,	// (0x00084cf9) cmail_ddmenu_btn03_pane_ParamLimits

0x9c32,	// (0x00084cf9) cmail_ddmenu_btn03_pane

0x9c57,	// (0x00084d1e) main_sp_fs_ctrlbar_pane_ParamLimits

0x9c78,	// (0x00084d3f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0a8,	// (0x0008516f) list_cmail_body_pane_ParamLimits

0xe26c,	// (0x00089333) bg_button_pane_cp12

0x06bd,	// (0x0007b784) list_single_cmail_header_detail_pane_g3_ParamLimits

0x06bd,	// (0x0007b784) list_single_cmail_header_detail_pane_g3

0xa0fc,	// (0x000851c3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa0fc,	// (0x000851c3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0008aebe) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0008aebe) list_single_cmail_header_detail_pane_t

0xe2d5,	// (0x0008939c) phacti_term_pane_t2_ParamLimits

0xe2d5,	// (0x0008939c) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x0008aec8) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x0008aec8) phacti_term_pane_t

0x0c0a,	// (0x0007bcd1) aid_size_list_single_double

0xa414,	// (0x000854db) popup_ezdial_listscroll_window

0xe3d6,	// (0x0008949d) popup_number_entry_window_cp01

0x163e,	// (0x0007c705) bg_popup_call_pane_cp09

0x0c3b,	// (0x0007bd02) ezdial_list_pane

0x0c43,	// (0x0007bd0a) scroll_pane_cp23

0xc23d,	// (0x00087304) bg_button_pane_cp028_ParamLimits

0xc23d,	// (0x00087304) bg_button_pane_cp028

0xe3e2,	// (0x000894a9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe3e2,	// (0x000894a9) cmail_ddmenu_btn01_pane_g1

0xe3f1,	// (0x000894b8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe3f1,	// (0x000894b8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x0008af3e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x0008af3e) cmail_ddmenu_btn01_pane_g

0x0c69,	// (0x0007bd30) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0c69,	// (0x0007bd30) cmail_ddmenu_btn01_pane_t1

0xc23d,	// (0x00087304) bg_button_pane_cp029_ParamLimits

0xc23d,	// (0x00087304) bg_button_pane_cp029

0xe401,	// (0x000894c8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe401,	// (0x000894c8) cmail_ddmenu_btn02_pane_g1

0xe41c,	// (0x000894e3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe41c,	// (0x000894e3) cmail_ddmenu_btn02_pane_t1

0xa50f,	// (0x000855d6) bg_button_pane_cp031_ParamLimits

0xa50f,	// (0x000855d6) bg_button_pane_cp031

0xe401,	// (0x000894c8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe401,	// (0x000894c8) cmail_ddmenu_btn03_pane_g1

0xe41c,	// (0x000894e3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe41c,	// (0x000894e3) cmail_ddmenu_btn03_pane_t1

0x79f3,	// (0x00082aba) cell_dialer2_keypad_pane_t1_ParamLimits

0x7a0d,	// (0x00082ad4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7a0d,	// (0x00082ad4) cell_dialer2_keypad_pane_t1_copy1

0x9539,	// (0x00084600) ncimui_group_button_pane

0xa50f,	// (0x000855d6) main_sp_fs_calendar_pane_ParamLimits

0xa0a8,	// (0x0008516f) list_single_cmail_header_caption_pane_ParamLimits

0xd5fa,	// (0x000886c1) aid_recal_txt_sm_pane

0xa4b4,	// (0x0008557b) mian_recal_day_pane

0xe30f,	// (0x000893d6) popup_sp_fs_cale_preview_window_ParamLimits

0xa4b4,	// (0x0008557b) list_recal_day_pane

0xe44c,	// (0x00089513) list_single_recal_day_pane_ParamLimits

0xe44c,	// (0x00089513) list_single_recal_day_pane

0x0cbe,	// (0x0007bd85) list_single_recal_day_pane_g1_ParamLimits

0x0cbe,	// (0x0007bd85) list_single_recal_day_pane_g1

0xe45e,	// (0x00089525) list_single_recal_day_pane_g2_ParamLimits

0xe45e,	// (0x00089525) list_single_recal_day_pane_g2

0xe46a,	// (0x00089531) list_single_recal_day_pane_g3_ParamLimits

0xe46a,	// (0x00089531) list_single_recal_day_pane_g3

0xa42a,	// (0x000854f1) list_single_recal_day_pane_g4_ParamLimits

0xa42a,	// (0x000854f1) list_single_recal_day_pane_g4

0xe476,	// (0x0008953d) list_single_recal_day_pane_g5_ParamLimits

0xe476,	// (0x0008953d) list_single_recal_day_pane_g5

0xe482,	// (0x00089549) list_single_recal_day_pane_g6_ParamLimits

0xe482,	// (0x00089549) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x0008af4d) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x0008af4d) list_single_recal_day_pane_g

0xe48e,	// (0x00089555) list_single_recal_day_pane_t1

0xe49c,	// (0x00089563) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x0008af5a) list_single_recal_day_pane_t

0xe4aa,	// (0x00089571) ncimui_query_button_pane_ParamLimits

0xe4aa,	// (0x00089571) ncimui_query_button_pane

0xe4ba,	// (0x00089581) ncimui_query_button_pane_t1_ParamLimits

0xe4ba,	// (0x00089581) ncimui_query_button_pane_t1

0x0cf9,	// (0x0007bdc0) ncimui_query_button_pane_t2_ParamLimits

0x0cf9,	// (0x0007bdc0) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x0008af5f) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x0008af5f) ncimui_query_button_pane_t

0xe4cd,	// (0x00089594) query_button_pane_ParamLimits

0xe4cd,	// (0x00089594) query_button_pane

0xa4b4,	// (0x0008557b) bg_button_pane_cp0028

0x0d19,	// (0x0007bde0) query_button_pane_t1

0x5d2f,	// (0x00080df6) main_tport_pane_ParamLimits

0x9fd7,	// (0x0008509e) bg_popup_window_pane_cp01_ParamLimits

0x9fd7,	// (0x0008509e) bg_popup_window_pane_cp01

0x9fef,	// (0x000850b6) heading_pane_cp08_ParamLimits

0x9fef,	// (0x000850b6) heading_pane_cp08

0xa001,	// (0x000850c8) heading_pane_cp07_ParamLimits

0xa001,	// (0x000850c8) heading_pane_cp07

0x05d0,	// (0x0007b697) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x0008aeab) cell_tport_appsw_pane_g

0xb261,	// (0x00086328) input_candi_list_open_g1

0x1098,	// (0x0007c15f) list_cale_time_pane_g6_ParamLimits

0x1098,	// (0x0007c15f) list_cale_time_pane_g6

0x69d5,	// (0x00081a9c) aid_size_touch_calib_1_ParamLimits

0x69d5,	// (0x00081a9c) aid_size_touch_calib_1

0x69e1,	// (0x00081aa8) aid_size_touch_calib_2_ParamLimits

0x69e1,	// (0x00081aa8) aid_size_touch_calib_2

0x69f5,	// (0x00081abc) aid_size_touch_calib_3_ParamLimits

0x69f5,	// (0x00081abc) aid_size_touch_calib_3

0x6a0d,	// (0x00081ad4) aid_size_touch_calib_4_ParamLimits

0x6a0d,	// (0x00081ad4) aid_size_touch_calib_4

0x6a1f,	// (0x00081ae6) main_touch_calib_button_group_pane_ParamLimits

0x6a1f,	// (0x00081ae6) main_touch_calib_button_group_pane

0x6a35,	// (0x00081afc) main_touch_calib_pane_g1_ParamLimits

0x6a41,	// (0x00081b08) main_touch_calib_pane_g2_ParamLimits

0x6a4d,	// (0x00081b14) main_touch_calib_pane_g3_ParamLimits

0x6a59,	// (0x00081b20) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0008a892) main_touch_calib_pane_g_ParamLimits

0x6a65,	// (0x00081b2c) main_touch_calib_pane_t1_ParamLimits

0x6a7d,	// (0x00081b44) main_touch_calib_pane_t2_ParamLimits

0x6a95,	// (0x00081b5c) main_touch_calib_pane_t3_ParamLimits

0x6aa7,	// (0x00081b6e) main_touch_calib_pane_t4_ParamLimits

0x6ab9,	// (0x00081b80) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x0008a89b) main_touch_calib_pane_t_ParamLimits

0xca11,	// (0x00087ad8) list_single_fp_cale_pane_g3_ParamLimits

0xca11,	// (0x00087ad8) list_single_fp_cale_pane_g3

0xef7a,	// (0x0008a041) bg_button_pane_cp012_ParamLimits

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp03_ParamLimits

0x88b9,	// (0x00083980) cell_vitu2_function_top_pane_g1_ParamLimits

0xef7a,	// (0x0008a041) bg_vkb2_func_pane_cp04_ParamLimits

0x94ef,	// (0x000845b6) main_ncimui_button_group_pane_ParamLimits

0x94ef,	// (0x000845b6) main_ncimui_button_group_pane

0x9527,	// (0x000845ee) main_ncimui_pane_t3_ParamLimits

0x9527,	// (0x000845ee) main_ncimui_pane_t3

0x07f9,	// (0x0007b8c0) phacti_button_group_pane

0x0c0a,	// (0x0007bcd1) aid_size_list_single_double_ParamLimits

0xa414,	// (0x000854db) popup_ezdial_listscroll_window_ParamLimits

0xe3d6,	// (0x0008949d) popup_number_entry_window_cp01_ParamLimits

0xe4df,	// (0x000895a6) phacti_button_pane_ParamLimits

0xe4df,	// (0x000895a6) phacti_button_pane

0xa4b4,	// (0x0008557b) bg_button_pane_cp14

0x0d36,	// (0x0007bdfd) phacti_button_pane_t1

0xe4ee,	// (0x000895b5) main_touch_calib_button_pane_ParamLimits

0xe4ee,	// (0x000895b5) main_touch_calib_button_pane

0xac84,	// (0x00085d4b) bg_button_pane_cp18_ParamLimits

0xac84,	// (0x00085d4b) bg_button_pane_cp18

0x0d54,	// (0x0007be1b) main_touch_calib_button_pane_t1_ParamLimits

0x0d54,	// (0x0007be1b) main_touch_calib_button_pane_t1

0x0d6a,	// (0x0007be31) main_touch_calib_button_pane_t2_ParamLimits

0x0d6a,	// (0x0007be31) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x0008af64) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x0008af64) main_touch_calib_button_pane_t

0xa4b4,	// (0x0008557b) cell_ncimui_button_pane

0xa4b4,	// (0x0008557b) bg_button_pane_cp032

0x0d88,	// (0x0007be4f) cell_ncimui_button_pane_t1

0xef02,	// (0x00089fc9) image3_infobar_pane_ParamLimits

0xef02,	// (0x00089fc9) image3_infobar_pane

0x9885,	// (0x0008494c) fs_bigclock_status_pane_ParamLimits

0x9885,	// (0x0008494c) fs_bigclock_status_pane

0x9892,	// (0x00084959) main_fs_bigclock_clock_pane_ParamLimits

0x9892,	// (0x00084959) main_fs_bigclock_clock_pane

0x98a1,	// (0x00084968) main_fs_bigclock_indi_pane_ParamLimits

0x98a1,	// (0x00084968) main_fs_bigclock_indi_pane

0x98b5,	// (0x0008497c) main_fs_bigclock_swipe_pane_ParamLimits

0x98b5,	// (0x0008497c) main_fs_bigclock_swipe_pane

0xa4b4,	// (0x0008557b) main_fs_clock_dumped_data

0xdf56,	// (0x0008901d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf56,	// (0x0008901d) list_single_fs_bigclock_indicator_pane_g1

0xdf70,	// (0x00089037) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf70,	// (0x00089037) list_single_fs_bigclock_indicator_pane_g2

0xdf8a,	// (0x00089051) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf8a,	// (0x00089051) list_single_fs_bigclock_indicator_pane_g3

0xdfa4,	// (0x0008906b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdfa4,	// (0x0008906b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x0008ad9c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x0008ad9c) list_single_fs_bigclock_indicator_pane_g

0xdfc8,	// (0x0008908f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfc8,	// (0x0008908f) list_single_fs_bigclock_indicator_pane_t1

0xdff0,	// (0x000890b7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdff0,	// (0x000890b7) list_single_fs_bigclock_indicator_pane_t2

0xe018,	// (0x000890df) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe018,	// (0x000890df) list_single_fs_bigclock_indicator_pane_t3

0xe040,	// (0x00089107) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe040,	// (0x00089107) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x0008ada7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x0008ada7) list_single_fs_bigclock_indicator_pane_t

0x1a9a,	// (0x0007cb61) image3_infobar_fav_pane_ParamLimits

0x1a9a,	// (0x0007cb61) image3_infobar_fav_pane

0x1aaa,	// (0x0007cb71) image3_infobar_loc_pane_ParamLimits

0x1aaa,	// (0x0007cb71) image3_infobar_loc_pane

0x1abe,	// (0x0007cb85) image3_infobar_time_pane_ParamLimits

0x1abe,	// (0x0007cb85) image3_infobar_time_pane

0xc680,	// (0x00087747) image3_infobar_time_pane_g1

0x1ace,	// (0x0007cb95) image3_infobar_time_pane_t1

0xc680,	// (0x00087747) image3_infobar_loc_pane_g1

0x1adc,	// (0x0007cba3) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x0008af69) image3_infobar_loc_pane_g

0x1ae4,	// (0x0007cbab) image3_infobar_loc_pane_t1

0xc680,	// (0x00087747) image3_infobar_fav_pane_g1

0x1af2,	// (0x0007cbb9) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x0008af6e) image3_infobar_fav_pane_g

0x1afa,	// (0x0007cbc1) fs_bigclock_status_battery_pane

0x1b03,	// (0x0007cbca) fs_bigclock_status_signal_pane

0x1b0c,	// (0x0007cbd3) fs_bigclock_status_title_pane

0x1b15,	// (0x0007cbdc) fs_bigclock_status_signal_pane_g1

0x1b1e,	// (0x0007cbe5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x0008af73) fs_bigclock_status_signal_pane_g

0x1b26,	// (0x0007cbed) fs_bigclock_status_battery_pane_g1

0x1b2f,	// (0x0007cbf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x0008af78) fs_bigclock_status_battery_pane_g

0x1b37,	// (0x0007cbfe) fs_bigclock_status_title_pane_t1

0xc680,	// (0x00087747) main_fs_bigclock_clock_pane_g1

0x1b45,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g2

0x1b45,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g3

0x1b45,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x0008af7d) main_fs_bigclock_clock_pane_g

0x1b4d,	// (0x0007cc14) main_fs_bigclock_clock_pane_t1

0x1b5b,	// (0x0007cc22) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x0008af86) main_fs_bigclock_clock_pane_t

0x1b6a,	// (0x0007cc31) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1b6a,	// (0x0007cc31) list_single_fs_bigclock_indicator_pane

0xe501,	// (0x000895c8) list_single_fs_bigclock_pane_ParamLimits

0xe501,	// (0x000895c8) list_single_fs_bigclock_pane

0x1be2,	// (0x0007cca9) main_fs_bigclock_indicator_pane_t1

0x1bf1,	// (0x0007ccb8) list_single_fs_bigclock_pane_g1

0x1bf9,	// (0x0007ccc0) list_single_fs_bigclock_pane_t1

0xc680,	// (0x00087747) main_fs_bigclock_swipe_pane_g1

0x1c37,	// (0x0007ccfe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x0008af97) main_fs_bigclock_swipe_pane_g

0x1c3f,	// (0x0007cd06) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1c3f,	// (0x0007cd06) main_fs_bigclock_swipe_pane_t1

0x4d59,	// (0x0007fe20) call_type_pane_ParamLimits

0xa4b4,	// (0x0008557b) main_btmg_pane

0xe35a,	// (0x00089421) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe35a,	// (0x00089421) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x0008af0a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x0008af0a) list_single_cale_mrui_row_pane_g

0x0cae,	// (0x0007bd75) list_recal_vselct_arw_lo_pane

0x0cb6,	// (0x0007bd7d) list_recal_vselct_arw_up_pane

0xe443,	// (0x0008950a) list_recal_vselct_pane

0x1c5c,	// (0x0007cd23) btmg_button_pane

0xe561,	// (0x00089628) main_btmg_pane_g1

0xa4b4,	// (0x0008557b) bg_button_pane_cp044

0x1c6c,	// (0x0007cd33) btmg_button_pane_t1

0xc235,	// (0x000872fc) aid_listscroll_gen

0xa50f,	// (0x000855d6) main_cntbar_detail_pane

0x062f,	// (0x0007b6f6) list_cmail_folder_pane

0x063f,	// (0x0007b706) sp_fs_scroll_pane_cp03_ParamLimits

0xa438,	// (0x000854ff) list_single_fs_dyc_pane_cp01_ParamLimits

0xa438,	// (0x000854ff) list_single_fs_dyc_pane_cp01

0x1c7a,	// (0x0007cd41) aid_size_cmail_indent

0xd603,	// (0x000886ca) list_single_dyc_row_pane_cp01

0xe591,	// (0x00089658) cntbar_detail_list_pane_ParamLimits

0xe591,	// (0x00089658) cntbar_detail_list_pane

0xe5d7,	// (0x0008969e) main_cntbar_detail_cont_pane_ParamLimits

0xe5d7,	// (0x0008969e) main_cntbar_detail_cont_pane

0xe5eb,	// (0x000896b2) scroll_pane_cp032_ParamLimits

0xe5eb,	// (0x000896b2) scroll_pane_cp032

0xe5f7,	// (0x000896be) cntbar_detail_list_event_pane_ParamLimits

0xe5f7,	// (0x000896be) cntbar_detail_list_event_pane

0xe5a1,	// (0x00089668) cntbar_detail_list_shct_pane

0x1cfb,	// (0x0007cdc2) aid_list_gen

0xade1,	// (0x00085ea8) aid_scroll

0xd5d8,	// (0x0008869f) aid_size_touch_scroll_bar

0xf0f8,	// (0x0008a1bf) aid_list_double

0xa44d,	// (0x00085514) aid_list_single

0xe608,	// (0x000896cf) aid_list_single_lg

0xa456,	// (0x0008551d) aid_list_z_g_a_sm

0xa45e,	// (0x00085525) aid_list_z_g_d

0xa466,	// (0x0008552d) aid_txt_z_prm

0xa474,	// (0x0008553b) aid_txt_z_prm_cp01

0xa482,	// (0x00085549) aid_txt_z_sec

0xe611,	// (0x000896d8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe611,	// (0x000896d8) main_cntbar_detail_cont_pane_g1

0xe625,	// (0x000896ec) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe625,	// (0x000896ec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x0008af9c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x0008af9c) main_cntbar_detail_cont_pane_g

0x1d26,	// (0x0007cded) main_cntbar_detail_cont_pane_t1

0x1d34,	// (0x0007cdfb) main_cntbar_detail_cont_pane_t2

0x1d42,	// (0x0007ce09) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x0008afa1) main_cntbar_detail_cont_pane_t

0xe635,	// (0x000896fc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe635,	// (0x000896fc) cell_cntbar_detail_list_shct_pane

0x1d62,	// (0x0007ce29) cntbar_detail_list_shct_pane_g1

0x1d6b,	// (0x0007ce32) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x0008afa8) cntbar_detail_list_shct_pane_g

0xe647,	// (0x0008970e) cntbar_detail_list_event_pane_g1_ParamLimits

0xe647,	// (0x0008970e) cntbar_detail_list_event_pane_g1

0xe653,	// (0x0008971a) cntbar_detail_list_event_pane_g2_ParamLimits

0xe653,	// (0x0008971a) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0008afad) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0008afad) cntbar_detail_list_event_pane_g

0xe6bf,	// (0x00089786) cntbar_detail_list_event_pane_t1_ParamLimits

0xe6bf,	// (0x00089786) cntbar_detail_list_event_pane_t1

0xe6d4,	// (0x0008979b) cntbar_detail_list_event_pane_t2_ParamLimits

0xe6d4,	// (0x0008979b) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x0008afba) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x0008afba) cntbar_detail_list_event_pane_t

0xc680,	// (0x00087747) cell_cntbar_detail_list_shct_pane_g1

0x15fd,	// (0x0007c6c4) navi_pane_mv_g3

0xa50f,	// (0x000855d6) main_cntbar_detail_pane_ParamLimits

0xa4b4,	// (0x0008557b) main_notif_wgt_pane

0xed16,	// (0x00089ddd) aid_tch_main_mp4_pane_g4

0xeefa,	// (0x00089fc1) popup_slider_window_cp02

0xe443,	// (0x0008950a) list_recal_day_event_pane

0xe569,	// (0x00089630) cntbar_detail_btn_pane_ParamLimits

0xe569,	// (0x00089630) cntbar_detail_btn_pane

0xe57c,	// (0x00089643) cntbar_detail_btn_pane_cp01_ParamLimits

0xe57c,	// (0x00089643) cntbar_detail_btn_pane_cp01

0xe5a1,	// (0x00089668) cntbar_detail_list_shct_pane_ParamLimits

0xe5b1,	// (0x00089678) cntbar_detail_pane_g1_ParamLimits

0xe5b1,	// (0x00089678) cntbar_detail_pane_g1

0xe5c1,	// (0x00089688) cntbar_detail_pane_t1_ParamLimits

0xe5c1,	// (0x00089688) cntbar_detail_pane_t1

0xe65f,	// (0x00089726) cntbar_detail_list_event_pane_g3_ParamLimits

0xe65f,	// (0x00089726) cntbar_detail_list_event_pane_g3

0xe677,	// (0x0008973e) cntbar_detail_list_event_pane_g4_ParamLimits

0xe677,	// (0x0008973e) cntbar_detail_list_event_pane_g4

0xe68f,	// (0x00089756) cntbar_detail_list_event_pane_g5_ParamLimits

0xe68f,	// (0x00089756) cntbar_detail_list_event_pane_g5

0xe6a7,	// (0x0008976e) cntbar_detail_list_event_pane_g6_ParamLimits

0xe6a7,	// (0x0008976e) cntbar_detail_list_event_pane_g6

0xe6e9,	// (0x000897b0) cntbar_detail_list_event_pane_t3_ParamLimits

0xe6e9,	// (0x000897b0) cntbar_detail_list_event_pane_t3

0xe6fb,	// (0x000897c2) popup_notif_wgt_window_ParamLimits

0xe6fb,	// (0x000897c2) popup_notif_wgt_window

0xe710,	// (0x000897d7) popup_submenu_window_cp01_ParamLimits

0xe710,	// (0x000897d7) popup_submenu_window_cp01

0x163e,	// (0x0007c705) bg_popup_window_pane_cp10

0x1e42,	// (0x0007cf09) listscroll_notif_wgt_pane

0x1e4a,	// (0x0007cf11) list_notif_wgt_window

0x1e53,	// (0x0007cf1a) scroll_pane_cp033

0x1e5c,	// (0x0007cf23) list_notif_wgt_row_pane_ParamLimits

0x1e5c,	// (0x0007cf23) list_notif_wgt_row_pane

0x1e6e,	// (0x0007cf35) aid_size_list_notif_wgt_del

0x1e77,	// (0x0007cf3e) list_notif_wgt_row_pane_g1

0x1e7f,	// (0x0007cf46) list_notif_wgt_row_pane_g2

0x1e87,	// (0x0007cf4e) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x0008afc1) list_notif_wgt_row_pane_g

0x1e90,	// (0x0007cf57) list_notif_wgt_row_pane_t1

0x1e9e,	// (0x0007cf65) list_notif_wgt_row_pane_t2

0x1eac,	// (0x0007cf73) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x0008afc8) list_notif_wgt_row_pane_t

0xd2e2,	// (0x000883a9) list_recal_day_event_pane_g1

0x1eba,	// (0x0007cf81) list_recal_day_event_pane_t1

0xa4b4,	// (0x0008557b) bg_button_pane_cp045

0xe720,	// (0x000897e7) cntbar_detail_btn_pane_t1

0xc23d,	// (0x00087304) main_callh_pane_ParamLimits

0xc23d,	// (0x00087304) main_callh_pane

0xa4b4,	// (0x0008557b) main_coverflow0_pane

0xa4b4,	// (0x0008557b) main_wgtman_pane

0x98c1,	// (0x00084988) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x98c1,	// (0x00084988) main_fs_bigclock_unlock_btn_pane

0x05bf,	// (0x0007b686) bg_button_pane_cp16

0x05d8,	// (0x0007b69f) cell_tport_appsw_pane_g3

0xe72e,	// (0x000897f5) cf0_flow_pane_ParamLimits

0xe72e,	// (0x000897f5) cf0_flow_pane

0x1ee6,	// (0x0007cfad) listscroll_cf0_pane

0x1eef,	// (0x0007cfb6) main_cf0_pane_g1

0xe743,	// (0x0008980a) main_cf0_pane_t1_ParamLimits

0xe743,	// (0x0008980a) main_cf0_pane_t1

0xe759,	// (0x00089820) main_cf0_pane_t2_ParamLimits

0xe759,	// (0x00089820) main_cf0_pane_t2

0x0001,

0xff08,	// (0x0008afcf) main_cf0_pane_t_ParamLimits

0xff08,	// (0x0008afcf) main_cf0_pane_t

0x1f1d,	// (0x0007cfe4) scroll_pane_cp11

0xe76f,	// (0x00089836) cf0_flow_pane_g1

0xe777,	// (0x0008983e) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x0008afd4) cf0_flow_pane_g

0xe77f,	// (0x00089846) cf0_flow_pane_t1

0xa4b4,	// (0x0008557b) main_call6_pane

0xa4b4,	// (0x0008557b) main_calllock_pane

0xe78d,	// (0x00089854) call6_btn_grp_pane_ParamLimits

0xe78d,	// (0x00089854) call6_btn_grp_pane

0xe7a3,	// (0x0008986a) call6_pane_g1_ParamLimits

0xe7a3,	// (0x0008986a) call6_pane_g1

0xe7b6,	// (0x0008987d) popup_call6_1st_window_ParamLimits

0xe7b6,	// (0x0008987d) popup_call6_1st_window

0xe7c5,	// (0x0008988c) popup_call6_2nd_window_ParamLimits

0xe7c5,	// (0x0008988c) popup_call6_2nd_window

0xe7d4,	// (0x0008989b) cell_call6_btn_pane_ParamLimits

0xe7d4,	// (0x0008989b) cell_call6_btn_pane

0x163e,	// (0x0007c705) bg_popup_call2_in_pane_cp03

0x1f85,	// (0x0007d04c) popup_call6_1st_window_g1

0x1f8d,	// (0x0007d054) popup_call6_1st_window_g2

0x1f95,	// (0x0007d05c) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x0008afd9) popup_call6_1st_window_g

0x1f9d,	// (0x0007d064) popup_call6_1st_window_t1

0x1fac,	// (0x0007d073) popup_call6_1st_window_t2

0x1fba,	// (0x0007d081) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x0008afe0) popup_call6_1st_window_t

0x163e,	// (0x0007c705) bg_popup_call2_in_pane_cp04

0x1f85,	// (0x0007d04c) popup_call6_2nd_window_g1

0x1f8d,	// (0x0007d054) popup_call6_2nd_window_g2

0x1f95,	// (0x0007d05c) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x0008afd9) popup_call6_2nd_window_g

0x1f9d,	// (0x0007d064) popup_call6_2nd_window_t1

0xa4b4,	// (0x0008557b) bg_button_pane_cp15

0x1fc8,	// (0x0007d08f) cell_call6_btn_pane_g1

0x1fd1,	// (0x0007d098) cell_call6_btn_pane_t1

0xe7e8,	// (0x000898af) listscroll_wgtman_pane_ParamLimits

0xe7e8,	// (0x000898af) listscroll_wgtman_pane

0xe7fe,	// (0x000898c5) wgtman_btn_pane_ParamLimits

0xe7fe,	// (0x000898c5) wgtman_btn_pane

0x147f,	// (0x0007c546) aid_scroll_copy1

0x1ff9,	// (0x0007d0c0) list_wgtman_pane

0xe815,	// (0x000898dc) wgtman_btn_pane_g1_ParamLimits

0xe815,	// (0x000898dc) wgtman_btn_pane_g1

0xe829,	// (0x000898f0) wgtman_btn_pane_t1_ParamLimits

0xe829,	// (0x000898f0) wgtman_btn_pane_t1

0x2021,	// (0x0007d0e8) wgtman_btn_pane_t2_ParamLimits

0x2021,	// (0x0007d0e8) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x0008afe7) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x0008afe7) wgtman_btn_pane_t

0xe844,	// (0x0008990b) listrow_wgtman_pane_ParamLimits

0xe844,	// (0x0008990b) listrow_wgtman_pane

0xe855,	// (0x0008991c) listrow_wgtman_pane_g1

0xe85e,	// (0x00089925) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x0008afec) listrow_wgtman_pane_g

0xa490,	// (0x00085557) listrow_wgtman_pane_t1

0xa49e,	// (0x00085565) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x0008aff1) listrow_wgtman_pane_t

0xa4ac,	// (0x00085573) wait_bar_pane_cp09

0x2055,	// (0x0007d11c) main_calllock_btn_pane

0x205d,	// (0x0007d124) main_calllock_pane_g1

0xa4b4,	// (0x0008557b) bg_button_pane_cp17

0x2066,	// (0x0007d12d) main_calllock_btn_pane_g1

0x206f,	// (0x0007d136) main_calllock_btn_pane_t1

0xa4b4,	// (0x0008557b) main_dialer3_pane

0xa4b4,	// (0x0008557b) main_fmrd2_pane

0xc680,	// (0x00087747) main_fs_bigclock_unlock_btn_pane_g1

0x2086,	// (0x0007d14d) main_fs_bigclock_unlock_btn_pane_t1

0xe866,	// (0x0008992d) area_fmrd2_info_pane_ParamLimits

0xe866,	// (0x0008992d) area_fmrd2_info_pane

0xe876,	// (0x0008993d) area_fmrd2_visual_pane_ParamLimits

0xe876,	// (0x0008993d) area_fmrd2_visual_pane

0xe884,	// (0x0008994b) fmrd2_indi_pane_ParamLimits

0xe884,	// (0x0008994b) fmrd2_indi_pane

0xe891,	// (0x00089958) area_fmrd2_visual_pane_g1

0xe899,	// (0x00089960) area_fmrd2_visual_pane_t1

0xe8a7,	// (0x0008996e) area_fmrd2_visual_pane_t2

0xe8b5,	// (0x0008997c) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x0008affb) area_fmrd2_visual_pane_t

0xe8c3,	// (0x0008998a) area_fmrd2_info_pane_g1

0xe8cb,	// (0x00089992) area_fmrd2_info_pane_t1

0xe8d9,	// (0x000899a0) area_fmrd2_info_pane_t2

0xe8e7,	// (0x000899ae) area_fmrd2_info_pane_t3

0xe8f5,	// (0x000899bc) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x0008b002) area_fmrd2_info_pane_t

0xe903,	// (0x000899ca) fmrd2_indi_pane_t1

0xe911,	// (0x000899d8) fmrd2_indi_pane_t2

0xe91f,	// (0x000899e6) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x0008b00b) fmrd2_indi_pane_t

0xdfb3,	// (0x0008907a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdfb3,	// (0x0008907a) list_single_fs_bigclock_indicator_pane_g5

0xe055,	// (0x0008911c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe055,	// (0x0008911c) list_single_fs_bigclock_indicator_pane_t5

0xa1d7,	// (0x0008529e) aid_cell_bcale_month_pane_ParamLimits

0xa1d7,	// (0x0008529e) aid_cell_bcale_month_pane

0xa1e9,	// (0x000852b0) bcale_month_pane_ParamLimits

0xa1e9,	// (0x000852b0) bcale_month_pane

0xa1fb,	// (0x000852c2) bcale_preview_pane_ParamLimits

0xa1fb,	// (0x000852c2) bcale_preview_pane

0x1bf9,	// (0x0007ccc0) list_single_fs_bigclock_pane_t1_ParamLimits

0x1c13,	// (0x0007ccda) list_single_fs_bigclock_pane_t2_ParamLimits

0x1c13,	// (0x0007ccda) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x0008af92) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x0008af92) list_single_fs_bigclock_pane_t

0x207e,	// (0x0007d145) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x0008aff6) main_fs_bigclock_unlock_btn_pane_g

0xe92d,	// (0x000899f4) aid_dia3_key_size_ParamLimits

0xe92d,	// (0x000899f4) aid_dia3_key_size

0xe93c,	// (0x00089a03) aid_dia3_listrow_size_ParamLimits

0xe93c,	// (0x00089a03) aid_dia3_listrow_size

0xe948,	// (0x00089a0f) dia3_keypad_fun_pane_ParamLimits

0xe948,	// (0x00089a0f) dia3_keypad_fun_pane

0xe95c,	// (0x00089a23) dia3_keypad_num_pane_ParamLimits

0xe95c,	// (0x00089a23) dia3_keypad_num_pane

0xe96d,	// (0x00089a34) dia3_listscroll_pane_ParamLimits

0xe96d,	// (0x00089a34) dia3_listscroll_pane

0xe97e,	// (0x00089a45) dia3_numentry_pane_ParamLimits

0xe97e,	// (0x00089a45) dia3_numentry_pane

0x21a0,	// (0x0007d267) dia3_list_pane

0x21a9,	// (0x0007d270) scroll_pane_cp12

0xa4b4,	// (0x0008557b) bg_dia3_numentry_pane

0x21b2,	// (0x0007d279) dia3_numentry_pane_t1

0xe98d,	// (0x00089a54) cell_dia3_key_num_pane

0xe995,	// (0x00089a5c) cell_dia3_key0_fun_pane_ParamLimits

0xe995,	// (0x00089a5c) cell_dia3_key0_fun_pane

0xe9a9,	// (0x00089a70) cell_dia3_key1_fun_pane_ParamLimits

0xe9a9,	// (0x00089a70) cell_dia3_key1_fun_pane

0xd5f1,	// (0x000886b8) dia3_listrow_pane

0xdce0,	// (0x00088da7) bg_dia3_numentry_pane_g1

0xa4b4,	// (0x0008557b) bg_button_pane_cp21

0x21ec,	// (0x0007d2b3) cell_dia3_key_num_pane_t1

0x21fa,	// (0x0007d2c1) cell_dia3_key_num_pane_t2

0x2209,	// (0x0007d2d0) cell_dia3_key_num_pane_t3

0x2218,	// (0x0007d2df) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x0008b012) cell_dia3_key_num_pane_t

0xa4b4,	// (0x0008557b) bg_button_pane_cp19

0x2227,	// (0x0007d2ee) cell_dia3_key0_fun_pane_g1

0xa4b4,	// (0x0008557b) bg_button_pane_cp20

0xe9c0,	// (0x00089a87) cell_dia3_key1_fun_pane_g1

0xe9c8,	// (0x00089a8f) area_left_week_number_pane

0xe9d1,	// (0x00089a98) area_top_day_name_pane

0xe9da,	// (0x00089aa1) frame_month_view_pane

0xe9e2,	// (0x00089aa9) grid_month_view_pane

0xe9ec,	// (0x00089ab3) cell_top_day_name_pane_ParamLimits

0xe9ec,	// (0x00089ab3) cell_top_day_name_pane

0xea02,	// (0x00089ac9) cell_area_left_week_number_pane_ParamLimits

0xea02,	// (0x00089ac9) cell_area_left_week_number_pane

0xea16,	// (0x00089add) cell_month_view_pane_ParamLimits

0xea16,	// (0x00089add) cell_month_view_pane

0x22a0,	// (0x0007d367) frm_month_g1

0xea31,	// (0x00089af8) frm_month_g2

0xea39,	// (0x00089b00) frm_month_g3

0xea41,	// (0x00089b08) frm_month_g4

0xea49,	// (0x00089b10) frm_month_g5

0xea51,	// (0x00089b18) frm_month_g6

0xea59,	// (0x00089b20) frm_month_g7

0x22d9,	// (0x0007d3a0) frm_month_g8

0xea61,	// (0x00089b28) frm_month_g9

0xea6a,	// (0x00089b31) frm_month_g10

0xea73,	// (0x00089b3a) frm_month_g11

0xea7c,	// (0x00089b43) frm_month_g12

0xea85,	// (0x00089b4c) frm_month_g13

0xea8e,	// (0x00089b55) frm_month_g14

0xea97,	// (0x00089b5e) frm_month_g15

0xeaa0,	// (0x00089b67) frm_month_g16

0x000f,

0xff54,	// (0x0008b01b) frm_month_g

0xeaa9,	// (0x00089b70) cell_top_day_name_pane_t1

0xeab8,	// (0x00089b7f) cell_area_left_week_number_pane_g1

0xeaa9,	// (0x00089b70) cell_area_left_week_number_pane_t1

0xc680,	// (0x00087747) cell_month_view_pane_g1

0xeac0,	// (0x00089b87) cell_month_view_pane_t1

0xa4b4,	// (0x0008557b) main_fps_pane

0x0136,	// (0x0007b1fd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0136,	// (0x0007b1fd) cmail_ddmenu_btn02_pane_cp1

0x0152,	// (0x0007b219) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0152,	// (0x0007b219) cmail_ddmenu_btn02_pane_cp2

0xe410,	// (0x000894d7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe410,	// (0x000894d7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x0008af43) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x0008af43) cmail_ddmenu_btn02_pane_g

0xe431,	// (0x000894f8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe431,	// (0x000894f8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x0008af48) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x0008af48) cmail_ddmenu_btn02_pane_t

0xeacf,	// (0x00089b96) fps_text_pane_ParamLimits

0xeacf,	// (0x00089b96) fps_text_pane

0xeae5,	// (0x00089bac) main_fps_pane_g1_ParamLimits

0xeae5,	// (0x00089bac) main_fps_pane_g1

0xeafb,	// (0x00089bc2) wait_bar_pane_cp010_ParamLimits

0xeafb,	// (0x00089bc2) wait_bar_pane_cp010

0xeb0c,	// (0x00089bd3) fps_text_pane_t1_ParamLimits

0xeb0c,	// (0x00089bd3) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large

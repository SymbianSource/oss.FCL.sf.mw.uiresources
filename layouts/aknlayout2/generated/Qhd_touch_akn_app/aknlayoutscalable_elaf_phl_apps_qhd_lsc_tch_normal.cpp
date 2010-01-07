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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000d19f };

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
0x1142,	// (0x0000e2e1) Screen

0x114e,	// (0x0000e2ed) application_window

0x118a,	// (0x0000e329) area_bottom_pane_ParamLimits

0x118a,	// (0x0000e329) area_bottom_pane

0x11c3,	// (0x0000e362) area_top_pane_ParamLimits

0x11c3,	// (0x0000e362) area_top_pane

0x9549,	// (0x000166e8) call_video_uplink_pane_ParamLimits

0x9549,	// (0x000166e8) call_video_uplink_pane

0x123d,	// (0x0000e3dc) main_pane_ParamLimits

0x123d,	// (0x0000e3dc) main_pane

0xbf81,	// (0x00019120) context_pane

0x40f7,	// (0x00011296) navi_pane

0x411f,	// (0x000112be) popup_cale_events_window_ParamLimits

0x411f,	// (0x000112be) popup_cale_events_window

0xbf94,	// (0x00019133) popup_mup_playback_window

0x4137,	// (0x000112d6) signal_pane

0x9cdc,	// (0x00016e7b) main_browser_pane

0xaa77,	// (0x00017c16) main_burst_pane

0x3e49,	// (0x00010fe8) main_calc_pane

0xaa77,	// (0x00017c16) main_cale_day_pane

0x9cdc,	// (0x00016e7b) main_cale_month_pane

0xaa77,	// (0x00017c16) main_cale_week_pane

0xaa77,	// (0x00017c16) main_call_pane

0x9988,	// (0x00016b27) main_call_poc_pane

0xaa77,	// (0x00017c16) main_camera_pane

0xaa77,	// (0x00017c16) main_chi_dic_pane

0xa8fc,	// (0x00017a9b) main_clock_pane

0x9988,	// (0x00016b27) main_fmradio_pane

0xaa77,	// (0x00017c16) main_graph_messa_pane

0x9988,	// (0x00016b27) main_help_pane

0x9cdc,	// (0x00016e7b) main_im_pane

0x9be3,	// (0x00016d82) main_image_pane_ParamLimits

0x9be3,	// (0x00016d82) main_image_pane

0x9988,	// (0x00016b27) main_location2_pane

0xaa77,	// (0x00017c16) main_location_pane

0x9988,	// (0x00016b27) main_messa_pane

0x9988,	// (0x00016b27) main_mp2_pane

0xaa77,	// (0x00017c16) main_mp_pane

0x9988,	// (0x00016b27) main_msg_pane

0x9988,	// (0x00016b27) main_mup_eq_pane

0x9988,	// (0x00016b27) main_mup_pane

0xaa77,	// (0x00017c16) main_notes_pane

0x9988,	// (0x00016b27) main_pec_pane

0x9988,	// (0x00016b27) main_phob_pane

0x9988,	// (0x00016b27) main_pinb_pane

0x9988,	// (0x00016b27) main_postcard_pane

0x9988,	// (0x00016b27) main_qdial_pane

0xaa77,	// (0x00017c16) main_skin_pane

0x9988,	// (0x00016b27) main_smil2_pane

0xaa77,	// (0x00017c16) main_smil_pane

0xaa77,	// (0x00017c16) main_video_pane

0xaa77,	// (0x00017c16) main_video_tele_pane

0x9be3,	// (0x00016d82) main_viewer_pane_ParamLimits

0x9be3,	// (0x00016d82) main_viewer_pane

0xaa77,	// (0x00017c16) main_vorec_pane

0x3e9d,	// (0x0001103c) popup_blid_sat_info_window_ParamLimits

0x3e9d,	// (0x0001103c) popup_blid_sat_info_window

0x3ef5,	// (0x00011094) popup_dyc_status_message_window_ParamLimits

0x3ef5,	// (0x00011094) popup_dyc_status_message_window

0x3f0f,	// (0x000110ae) popup_grid_large_graphic_window_ParamLimits

0x3f0f,	// (0x000110ae) popup_grid_large_graphic_window

0x3fcb,	// (0x0001116a) popup_loc_request_window_ParamLimits

0x3fcb,	// (0x0001116a) popup_loc_request_window

0x40cf,	// (0x0001126e) popup_wml_address_window_ParamLimits

0x40cf,	// (0x0001126e) popup_wml_address_window

0x3c83,	// (0x00010e22) call_muted_g1

0x3938,	// (0x00010ad7) popup_call_audio_conf_window_ParamLimits

0x3938,	// (0x00010ad7) popup_call_audio_conf_window

0x3c97,	// (0x00010e36) popup_call_audio_first_window_ParamLimits

0x3c97,	// (0x00010e36) popup_call_audio_first_window

0x3d0d,	// (0x00010eac) popup_call_audio_in_window_ParamLimits

0x3d0d,	// (0x00010eac) popup_call_audio_in_window

0x3d49,	// (0x00010ee8) popup_call_audio_out_window_ParamLimits

0x3d49,	// (0x00010ee8) popup_call_audio_out_window

0x3d83,	// (0x00010f22) popup_call_audio_second_window_ParamLimits

0x3d83,	// (0x00010f22) popup_call_audio_second_window

0x3dd9,	// (0x00010f78) popup_call_audio_wait_window_ParamLimits

0x3dd9,	// (0x00010f78) popup_call_audio_wait_window

0x3e0e,	// (0x00010fad) popup_number_entry_window_ParamLimits

0x3e0e,	// (0x00010fad) popup_number_entry_window

0x9575,	// (0x00016714) bg_popup_call_pane_cp05_ParamLimits

0x9575,	// (0x00016714) bg_popup_call_pane_cp05

0x9595,	// (0x00016734) popup_number_entry_window_t1

0x95a8,	// (0x00016747) popup_number_entry_window_t2

0x95ba,	// (0x00016759) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0001c29a) popup_number_entry_window_t

0x95cc,	// (0x0001676b) text_title_cp2

0x95df,	// (0x0001677e) bg_popup_call_pane_cp_ParamLimits

0x95df,	// (0x0001677e) bg_popup_call_pane_cp

0x95ed,	// (0x0001678c) call_thumbnail_pane

0x95f5,	// (0x00016794) popup_call_audio_in_window_g1_ParamLimits

0x95f5,	// (0x00016794) popup_call_audio_in_window_g1

0x9601,	// (0x000167a0) popup_call_audio_in_window_g2_ParamLimits

0x9601,	// (0x000167a0) popup_call_audio_in_window_g2

0x960d,	// (0x000167ac) popup_call_audio_in_window_g3_ParamLimits

0x960d,	// (0x000167ac) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0001c2a3) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0001c2a3) popup_call_audio_in_window_g

0x9619,	// (0x000167b8) popup_call_audio_in_window_t1_ParamLimits

0x9619,	// (0x000167b8) popup_call_audio_in_window_t1

0x9635,	// (0x000167d4) popup_call_audio_in_window_t2_ParamLimits

0x9635,	// (0x000167d4) popup_call_audio_in_window_t2

0x9651,	// (0x000167f0) popup_call_audio_in_window_t3_ParamLimits

0x9651,	// (0x000167f0) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0001c2aa) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0001c2aa) popup_call_audio_in_window_t

0x95df,	// (0x0001677e) bg_popup_call_pane_cp01_ParamLimits

0x95df,	// (0x0001677e) bg_popup_call_pane_cp01

0x95ed,	// (0x0001678c) call_thumbnail_pane_cp02

0x9664,	// (0x00016803) call_type_pane_cp022

0x966c,	// (0x0001680b) popup_call_audio_out_window_g1_ParamLimits

0x966c,	// (0x0001680b) popup_call_audio_out_window_g1

0x967e,	// (0x0001681d) popup_call_audio_out_window_g2_ParamLimits

0x967e,	// (0x0001681d) popup_call_audio_out_window_g2

0x968a,	// (0x00016829) popup_call_audio_out_window_g3_ParamLimits

0x968a,	// (0x00016829) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0001c2b1) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0001c2b1) popup_call_audio_out_window_g

0x969c,	// (0x0001683b) popup_call_audio_out_window_t1_ParamLimits

0x969c,	// (0x0001683b) popup_call_audio_out_window_t1

0x96b4,	// (0x00016853) popup_call_audio_out_window_t2_ParamLimits

0x96b4,	// (0x00016853) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0001c2b8) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0001c2b8) popup_call_audio_out_window_t

0x96c9,	// (0x00016868) bg_popup_call_pane_ParamLimits

0x96c9,	// (0x00016868) bg_popup_call_pane

0x13f8,	// (0x0000e597) call_thumbnail_pane_cp_ParamLimits

0x13f8,	// (0x0000e597) call_thumbnail_pane_cp

0x974d,	// (0x000168ec) call_type_pane_cp01_ParamLimits

0x974d,	// (0x000168ec) call_type_pane_cp01

0x9791,	// (0x00016930) popup_call_audio_first_window_g1_ParamLimits

0x9791,	// (0x00016930) popup_call_audio_first_window_g1

0x97dd,	// (0x0001697c) popup_call_audio_first_window_g2_ParamLimits

0x97dd,	// (0x0001697c) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0001c2bd) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0001c2bd) popup_call_audio_first_window_g

0x9821,	// (0x000169c0) popup_call_audio_first_window_t1_ParamLimits

0x9821,	// (0x000169c0) popup_call_audio_first_window_t1

0x98cd,	// (0x00016a6c) popup_call_audio_first_window_t4_ParamLimits

0x98cd,	// (0x00016a6c) popup_call_audio_first_window_t4

0x9959,	// (0x00016af8) popup_call_audio_first_window_t5_ParamLimits

0x9959,	// (0x00016af8) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0001c2c2) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0001c2c2) popup_call_audio_first_window_t

0x9988,	// (0x00016b27) bg_popup_call_pane_cp02

0x9992,	// (0x00016b31) call_type_pane_cp023

0x999a,	// (0x00016b39) popup_call_audio_wait_window_g1

0x99a2,	// (0x00016b41) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c2c9) popup_call_audio_wait_window_g

0x99aa,	// (0x00016b49) popup_call_audio_wait_window_t3

0x99b8,	// (0x00016b57) bg_popup_call_pane_cp03_ParamLimits

0x99b8,	// (0x00016b57) bg_popup_call_pane_cp03

0x9a18,	// (0x00016bb7) call_thumbnail_pane_cp011_ParamLimits

0x9a18,	// (0x00016bb7) call_thumbnail_pane_cp011

0x9a24,	// (0x00016bc3) call_type_pane_cp034_ParamLimits

0x9a24,	// (0x00016bc3) call_type_pane_cp034

0x9a60,	// (0x00016bff) popup_call_audio_second_window_g1_ParamLimits

0x9a60,	// (0x00016bff) popup_call_audio_second_window_g1

0x9a9c,	// (0x00016c3b) popup_call_audio_second_window_g2_ParamLimits

0x9a9c,	// (0x00016c3b) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0001c2ce) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0001c2ce) popup_call_audio_second_window_g

0x9ad8,	// (0x00016c77) popup_call_audio_second_window_t1_ParamLimits

0x9ad8,	// (0x00016c77) popup_call_audio_second_window_t1

0x9b59,	// (0x00016cf8) popup_call_audio_second_window_t2_ParamLimits

0x9b59,	// (0x00016cf8) popup_call_audio_second_window_t2

0x9b8f,	// (0x00016d2e) popup_call_audio_second_window_t3_ParamLimits

0x9b8f,	// (0x00016d2e) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0001c2d3) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0001c2d3) popup_call_audio_second_window_t

0x9988,	// (0x00016b27) bg_popup_call_pane_cp04

0x9bc5,	// (0x00016d64) list_conf_pane

0x9bcd,	// (0x00016d6c) popup_call_audio_conf_window_t1

0x9bdb,	// (0x00016d7a) call_thumbnail_pane_g1

0x9be3,	// (0x00016d82) bg_pinb_pane_ParamLimits

0x9be3,	// (0x00016d82) bg_pinb_pane

0x9bf1,	// (0x00016d90) find_pinb_pane

0x9bfa,	// (0x00016d99) listscroll_pinb_pane_ParamLimits

0x9bfa,	// (0x00016d99) listscroll_pinb_pane

0x9c09,	// (0x00016da8) pinb_bg_pane_g1

0x141c,	// (0x0000e5bb) pinb_bg_pane_g2

0x1428,	// (0x0000e5c7) pinb_bg_pane_g3

0x1434,	// (0x0000e5d3) pinb_bg_pane_g4

0x1440,	// (0x0000e5df) pinb_bg_pane_g5

0x144c,	// (0x0000e5eb) pinb_bg_pane_g6

0x1457,	// (0x0000e5f6) pinb_bg_pane_g7

0x1462,	// (0x0000e601) pinb_bg_pane_g8

0x146d,	// (0x0000e60c) pinb_bg_pane_g9

0x1477,	// (0x0000e616) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0001c2da) pinb_bg_pane_g

0x1494,	// (0x0000e633) grid_pinb_pane

0x149d,	// (0x0000e63c) list_pinb_pane

0x14a6,	// (0x0000e645) scroll_pane_cp01_ParamLimits

0x14a6,	// (0x0000e645) scroll_pane_cp01

0x9c13,	// (0x00016db2) find_pinb_pane_g1_ParamLimits

0x9c13,	// (0x00016db2) find_pinb_pane_g1

0x9c2b,	// (0x00016dca) find_pinb_pane_t1

0x9c3d,	// (0x00016ddc) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0001c2f4) find_pinb_pane_t

0x9c52,	// (0x00016df1) input_focus_pane_cp01_ParamLimits

0x9c52,	// (0x00016df1) input_focus_pane_cp01

0x14b8,	// (0x0000e657) cell_pinb_pane_ParamLimits

0x14b8,	// (0x0000e657) cell_pinb_pane

0x14e1,	// (0x0000e680) cell_pinb_pane_g1_ParamLimits

0x14e1,	// (0x0000e680) cell_pinb_pane_g1

0x14f1,	// (0x0000e690) cell_pinb_pane_g2_ParamLimits

0x14f1,	// (0x0000e690) cell_pinb_pane_g2

0x9c5e,	// (0x00016dfd) cell_pinb_pane_g3_ParamLimits

0x9c5e,	// (0x00016dfd) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0001c2f9) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0001c2f9) cell_pinb_pane_g

0x9988,	// (0x00016b27) grid_highlight_pane_cp01

0x14fd,	// (0x0000e69c) list_pinb_item_pane_ParamLimits

0x14fd,	// (0x0000e69c) list_pinb_item_pane

0x9988,	// (0x00016b27) list_highlight_pane_cp02

0x150f,	// (0x0000e6ae) list_pinb_item_pane_g1_ParamLimits

0x150f,	// (0x0000e6ae) list_pinb_item_pane_g1

0x9c6a,	// (0x00016e09) list_pinb_item_pane_g2_ParamLimits

0x9c6a,	// (0x00016e09) list_pinb_item_pane_g2

0x151c,	// (0x0000e6bb) list_pinb_item_pane_g3_ParamLimits

0x151c,	// (0x0000e6bb) list_pinb_item_pane_g3

0x152d,	// (0x0000e6cc) list_pinb_item_pane_g4_ParamLimits

0x152d,	// (0x0000e6cc) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0001c300) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0001c300) list_pinb_item_pane_g

0x1539,	// (0x0000e6d8) list_pinb_item_pane_t1_ParamLimits

0x1539,	// (0x0000e6d8) list_pinb_item_pane_t1

0x156e,	// (0x0000e70d) calc_display_pane

0x1594,	// (0x0000e733) calc_paper_pane

0x15b5,	// (0x0000e754) grid_calc_pane

0x9988,	// (0x00016b27) bg_list_pane_cp01

0x15dd,	// (0x0000e77c) clock_g1

0x15e5,	// (0x0000e784) clock_g2

0x0001,

0xf16a,	// (0x0001c309) clock_g

0x15ed,	// (0x0000e78c) clock_t1_ParamLimits

0x15ed,	// (0x0000e78c) clock_t1

0x1602,	// (0x0000e7a1) clock_t2_ParamLimits

0x1602,	// (0x0000e7a1) clock_t2

0x1614,	// (0x0000e7b3) clock_t3_ParamLimits

0x1614,	// (0x0000e7b3) clock_t3

0x1626,	// (0x0000e7c5) clock_t4_ParamLimits

0x1626,	// (0x0000e7c5) clock_t4

0x1638,	// (0x0000e7d7) clock_t5_ParamLimits

0x1638,	// (0x0000e7d7) clock_t5

0x164d,	// (0x0000e7ec) clock_t6_ParamLimits

0x164d,	// (0x0000e7ec) clock_t6

0x165f,	// (0x0000e7fe) clock_t7_ParamLimits

0x165f,	// (0x0000e7fe) clock_t7

0x1671,	// (0x0000e810) clock_t8_ParamLimits

0x1671,	// (0x0000e810) clock_t8

0x1685,	// (0x0000e824) clock_t9_ParamLimits

0x1685,	// (0x0000e824) clock_t9

0x0008,

0xf16f,	// (0x0001c30e) clock_t_ParamLimits

0xf16f,	// (0x0001c30e) clock_t

0x9c7e,	// (0x00016e1d) popup_clock_analogue_window_cp02

0x9c7e,	// (0x00016e1d) popup_clock_digital_window_cp01

0x9c86,	// (0x00016e25) listscroll_help_pane

0x9988,	// (0x00016b27) phob_pre_status_pane

0x9c90,	// (0x00016e2f) grid_qdial_pane

0x9988,	// (0x00016b27) listscroll_mce_pane

0x9c9a,	// (0x00016e39) bg_notes_pane

0x9ca4,	// (0x00016e43) list_notes_pane

0x1699,	// (0x0000e838) scroll_pane_cp06

0x9cae,	// (0x00016e4d) bg_calc_paper_pane

0x9cc2,	// (0x00016e61) list_calc_pane

0x9cdc,	// (0x00016e7b) bg_calc_display_pane

0x16a4,	// (0x0000e843) calc_display_pane_t1

0x16b6,	// (0x0000e855) calc_display_pane_t2

0x9ce8,	// (0x00016e87) calc_display_pane_t3

0x0002,

0xf182,	// (0x0001c321) calc_display_pane_t

0x16c8,	// (0x0000e867) cell_calc_pane_ParamLimits

0x16c8,	// (0x0000e867) cell_calc_pane

0x9cfa,	// (0x00016e99) bg_calc_paper_pane_g1

0x9d06,	// (0x00016ea5) bg_calc_paper_pane_g2

0x9d12,	// (0x00016eb1) bg_calc_paper_pane_g3

0x9d1e,	// (0x00016ebd) bg_calc_paper_pane_g4

0x9d2a,	// (0x00016ec9) bg_calc_paper_pane_g5

0x16fd,	// (0x0000e89c) bg_calc_paper_pane_g6

0x170c,	// (0x0000e8ab) bg_calc_paper_pane_g7

0x171b,	// (0x0000e8ba) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0001c328) bg_calc_paper_pane_g

0x172e,	// (0x0000e8cd) calc_bg_paper_pane_g9

0x1741,	// (0x0000e8e0) list_calc_item_pane_ParamLimits

0x1741,	// (0x0000e8e0) list_calc_item_pane

0x9d36,	// (0x00016ed5) list_calc_item_pane_g1

0x9d43,	// (0x00016ee2) list_calc_item_pane_t1_ParamLimits

0x9d43,	// (0x00016ee2) list_calc_item_pane_t1

0x1754,	// (0x0000e8f3) list_calc_item_pane_t2_ParamLimits

0x1754,	// (0x0000e8f3) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0001c339) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0001c339) list_calc_item_pane_t

0x9d55,	// (0x00016ef4) cell_calc_pane_g1

0x9d5f,	// (0x00016efe) grid_highlight_pane_cp02

0x1788,	// (0x0000e927) bg_calc_display_pane_g1

0x1791,	// (0x0000e930) bg_calc_display_pane_g2

0x179b,	// (0x0000e93a) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0001c343) bg_calc_display_pane_g

0x17a4,	// (0x0000e943) cell_qdial_pane_ParamLimits

0x17a4,	// (0x0000e943) cell_qdial_pane

0x17b8,	// (0x0000e957) cell_qdial_pane_g1_ParamLimits

0x17b8,	// (0x0000e957) cell_qdial_pane_g1

0x17ce,	// (0x0000e96d) cell_qdial_pane_g2_ParamLimits

0x17ce,	// (0x0000e96d) cell_qdial_pane_g2

0x9d81,	// (0x00016f20) cell_qdial_pane_g3_ParamLimits

0x9d81,	// (0x00016f20) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0001c34a) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0001c34a) cell_qdial_pane_g

0x17f5,	// (0x0000e994) cell_qdial_pane_t1_ParamLimits

0x17f5,	// (0x0000e994) cell_qdial_pane_t1

0x180d,	// (0x0000e9ac) cell_qdial_pane_t2_ParamLimits

0x180d,	// (0x0000e9ac) cell_qdial_pane_t2

0x1820,	// (0x0000e9bf) cell_qdial_pane_t3_ParamLimits

0x1820,	// (0x0000e9bf) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0001c353) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0001c353) cell_qdial_pane_t

0x9988,	// (0x00016b27) grid_highlight_pane_cp04

0x9d8d,	// (0x00016f2c) thumbnail_qdial_pane_ParamLimits

0x9d8d,	// (0x00016f2c) thumbnail_qdial_pane

0x9de9,	// (0x00016f88) list_help_pane

0x9df2,	// (0x00016f91) scroll_pane_cp02

0x1833,	// (0x0000e9d2) help_list_pane_t1_ParamLimits

0x1833,	// (0x0000e9d2) help_list_pane_t1

0x9dfb,	// (0x00016f9a) bg_notes_pane_g2

0x9e03,	// (0x00016fa2) bg_notes_pane_g3

0x9e0b,	// (0x00016faa) notes_bg_pane_g1

0x9e13,	// (0x00016fb2) notes_bg_pane_g4

0x9e1b,	// (0x00016fba) notes_bg_pane_g5

0x9e23,	// (0x00016fc2) notes_bg_pane_g6

0x9e2b,	// (0x00016fca) notes_bg_pane_g7

0x9e33,	// (0x00016fd2) notes_bg_pane_g8

0x9e3b,	// (0x00016fda) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0001c371) notes_bg_pane_g

0x1850,	// (0x0000e9ef) list_notes_text_pane_ParamLimits

0x1850,	// (0x0000e9ef) list_notes_text_pane

0x9e43,	// (0x00016fe2) list_notes_text_pane_g1

0x1865,	// (0x0000ea04) list_notes_text_pane_t1

0x9cdc,	// (0x00016e7b) listscroll_cale_week_pane

0x1890,	// (0x0000ea2f) bg_cale_heading_pane

0x9e5d,	// (0x00016ffc) bg_cale_pane_cp01

0x18a4,	// (0x0000ea43) cale_week_corner_pane

0x18ba,	// (0x0000ea59) cale_week_day_heading_pane

0x18ce,	// (0x0000ea6d) cale_week_scroll_pane_g1

0x18df,	// (0x0000ea7e) cale_week_scroll_pane_g2

0x18f0,	// (0x0000ea8f) cale_week_scroll_pane_g3

0x1901,	// (0x0000eaa0) cale_week_scroll_pane_g4

0x1912,	// (0x0000eab1) cale_week_scroll_pane_g5

0x1923,	// (0x0000eac2) cale_week_scroll_pane_g6

0x1934,	// (0x0000ead3) cale_week_scroll_pane_g7

0x1945,	// (0x0000eae4) cale_week_scroll_pane_g8

0x1956,	// (0x0000eaf5) cale_week_scroll_pane_g9

0x1967,	// (0x0000eb06) cale_week_scroll_pane_g10

0x1978,	// (0x0000eb17) cale_week_scroll_pane_g11

0x1989,	// (0x0000eb28) cale_week_scroll_pane_g12

0x199a,	// (0x0000eb39) cale_week_scroll_pane_g13

0x19ab,	// (0x0000eb4a) cale_week_scroll_pane_g14

0x19bc,	// (0x0000eb5b) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0001c380) cale_week_scroll_pane_g

0x19cd,	// (0x0000eb6c) cale_week_time_pane

0x19de,	// (0x0000eb7d) grid_cale_week_pane

0x19f1,	// (0x0000eb90) scroll_pane_cp08

0x1a0b,	// (0x0000ebaa) cell_cale_week_pane_ParamLimits

0x1a0b,	// (0x0000ebaa) cell_cale_week_pane

0x1a47,	// (0x0000ebe6) cale_week_day_heading_pane_t1

0x1a74,	// (0x0000ec13) cale_week_day_heading_pane_t2

0x1aa1,	// (0x0000ec40) cale_week_day_heading_pane_t3

0x1ace,	// (0x0000ec6d) cale_week_day_heading_pane_t4

0x1afb,	// (0x0000ec9a) cale_week_day_heading_pane_t5

0x1b28,	// (0x0000ecc7) cale_week_day_heading_pane_t6

0x1b55,	// (0x0000ecf4) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0001c39f) cale_week_day_heading_pane_t

0x9e88,	// (0x00017027) bg_cale_side_pane

0x1b82,	// (0x0000ed21) cale_week_time_pane_t1

0x1b9a,	// (0x0000ed39) cale_week_time_pane_t2

0x1bb2,	// (0x0000ed51) cale_week_time_pane_t3

0x1bca,	// (0x0000ed69) cale_week_time_pane_t4

0x1be2,	// (0x0000ed81) cale_week_time_pane_t5

0x1bfa,	// (0x0000ed99) cale_week_time_pane_t6

0x1c12,	// (0x0000edb1) cale_week_time_pane_t7

0x1c2a,	// (0x0000edc9) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0001c3ae) cale_week_time_pane_t

0x1c42,	// (0x0000ede1) cell_cale_week_pane_g2

0x1c5b,	// (0x0000edfa) cell_cale_week_pane_g3_ParamLimits

0x1c5b,	// (0x0000edfa) cell_cale_week_pane_g3

0x9e96,	// (0x00017035) grid_highlight_pane_cp07

0x9e9e,	// (0x0001703d) listscroll_gms_pane

0x9ea8,	// (0x00017047) grid_gms_pane

0x9eb1,	// (0x00017050) listscroll_gms_pane_g1

0x9eb9,	// (0x00017058) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0001c3bf) listscroll_gms_pane_g

0x1c73,	// (0x0000ee12) scroll_pane_cp010

0x1c7e,	// (0x0000ee1d) cell_gms_pane_ParamLimits

0x1c7e,	// (0x0000ee1d) cell_gms_pane

0x1c91,	// (0x0000ee30) cell_gms_pane_g1

0x9ec1,	// (0x00017060) cell_gms_pane_g2

0x9ec9,	// (0x00017068) cell_gms_pane_g3

0x9ed2,	// (0x00017071) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0001c3c4) cell_gms_pane_g

0x9edb,	// (0x0001707a) grid_highlight_pane_cp09

0x3c2d,	// (0x00010dcc) phob_pre_status_pane_g1

0x3c35,	// (0x00010dd4) phob_pre_status_pane_g2

0x3c3d,	// (0x00010ddc) phob_pre_status_pane_g3

0x3c45,	// (0x00010de4) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0001c7b3) phob_pre_status_pane_g

0x3c55,	// (0x00010df4) phob_pre_status_pane_t1

0x3c63,	// (0x00010e02) phob_pre_status_pane_t2

0x3c73,	// (0x00010e12) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0001c7be) phob_pre_status_pane_t

0x9988,	// (0x00016b27) bg_list_pane_cp05

0x1ca1,	// (0x0000ee40) grid_vorec_pane

0x9ee3,	// (0x00017082) vorec_t1

0x9ef1,	// (0x00017090) vorec_t2

0x9eff,	// (0x0001709e) vorec_t3

0x9f0d,	// (0x000170ac) vorec_t4

0x9f1b,	// (0x000170ba) vorec_t5

0x9f29,	// (0x000170c8) vorec_t6

0x0006,

0xf22e,	// (0x0001c3cd) vorec_t

0x9f45,	// (0x000170e4) wait_bar_pane_cp01

0x1ca9,	// (0x0000ee48) cell_vorec_pane_ParamLimits

0x1ca9,	// (0x0000ee48) cell_vorec_pane

0x9f4d,	// (0x000170ec) cell_vorec_pane_g1

0x9988,	// (0x00016b27) grid_highlight_pane_cp05

0x1cd4,	// (0x0000ee73) cams_zoom_pane

0x1ce3,	// (0x0000ee82) image_vga_pane

0x1cfd,	// (0x0000ee9c) main_camera_pane_g1

0x1d0f,	// (0x0000eeae) main_camera_pane_g2

0x1d1f,	// (0x0000eebe) main_camera_pane_g3

0x1d2f,	// (0x0000eece) main_camera_pane_g4

0x1d3f,	// (0x0000eede) main_camera_pane_g5

0x1d4f,	// (0x0000eeee) main_camera_pane_g6

0x1d61,	// (0x0000ef00) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0001c3dc) main_camera_pane_g

0x1d71,	// (0x0000ef10) main_camera_pane_t1

0x1d87,	// (0x0000ef26) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0001c3ed) main_camera_pane_t

0x1dc1,	// (0x0000ef60) cams_zoom_pane_cp_ParamLimits

0x1dc1,	// (0x0000ef60) cams_zoom_pane_cp

0x1de9,	// (0x0000ef88) image_cif_pane_ParamLimits

0x1de9,	// (0x0000ef88) image_cif_pane

0x1e24,	// (0x0000efc3) image_subqcif_pane

0x1e2c,	// (0x0000efcb) main_video_pane_g1_ParamLimits

0x1e2c,	// (0x0000efcb) main_video_pane_g1

0x1e50,	// (0x0000efef) main_video_pane_g2_ParamLimits

0x1e50,	// (0x0000efef) main_video_pane_g2

0x1e84,	// (0x0000f023) main_video_pane_g3_ParamLimits

0x1e84,	// (0x0000f023) main_video_pane_g3

0x1eb2,	// (0x0000f051) main_video_pane_g4_ParamLimits

0x1eb2,	// (0x0000f051) main_video_pane_g4

0x1ee0,	// (0x0000f07f) main_video_pane_g5_ParamLimits

0x1ee0,	// (0x0000f07f) main_video_pane_g5

0x9f63,	// (0x00017102) main_video_pane_g6_ParamLimits

0x9f63,	// (0x00017102) main_video_pane_g6

0x0006,

0xf253,	// (0x0001c3f2) main_video_pane_g_ParamLimits

0xf253,	// (0x0001c3f2) main_video_pane_g

0x1f0d,	// (0x0000f0ac) main_video_pane_t1_ParamLimits

0x1f0d,	// (0x0000f0ac) main_video_pane_t1

0x9f7d,	// (0x0001711c) cams_zoom_pane_g1

0x9f86,	// (0x00017125) cams_zoom_pane_g2

0x9f8f,	// (0x0001712e) cams_zoom_pane_g3

0x9f98,	// (0x00017137) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0001c401) cams_zoom_pane_g

0x1f6a,	// (0x0000f109) grid_cams_pane

0x1f84,	// (0x0000f123) linegrid_cams_pane

0x1f98,	// (0x0000f137) cell_cams_pane_ParamLimits

0x1f98,	// (0x0000f137) cell_cams_pane

0x9fa1,	// (0x00017140) cams_burst_image_pane

0x9fa9,	// (0x00017148) cell_cams_pane_g1

0x9988,	// (0x00016b27) grid_highlight_pane_cp03

0x9d55,	// (0x00016ef4) mp_bg_pane_g1

0x9988,	// (0x00016b27) bg_list_pane_cp03

0xbe59,	// (0x00018ff8) bg_mp_pane

0xbe61,	// (0x00019000) grid_mp_pane

0xbe69,	// (0x00019008) media_player_g1

0xbe71,	// (0x00019010) media_player_t1

0xbe7f,	// (0x0001901e) media_player_t2

0xbe8d,	// (0x0001902c) media_player_t3

0xbe9b,	// (0x0001903a) media_player_t4

0xbea9,	// (0x00019048) media_player_t5

0xbeb7,	// (0x00019056) media_player_t6

0xbec5,	// (0x00019064) media_player_t7

0x0006,

0xf5fe,	// (0x0001c79d) media_player_t

0xbed3,	// (0x00019072) wait_bar_pane_cp02

0xf5e3,	// (0x0001c782) main_usb_pane_t

0x3c24,	// (0x00010dc3) cell_mp_pane

0x9d55,	// (0x00016ef4) cell_mp_pane_g1

0x9988,	// (0x00016b27) grid_highlight_pane_cp06

0xa051,	// (0x000171f0) grid_skin_colour_pane

0xa059,	// (0x000171f8) list_highlight_pane_cp03

0x200a,	// (0x0000f1a9) skin_g1

0xa061,	// (0x00017200) skin_t1

0xa070,	// (0x0001720f) skin_t2

0x0001,

0xf297,	// (0x0001c436) skin_t

0x2012,	// (0x0000f1b1) cell_skin_colour_pane_ParamLimits

0x2012,	// (0x0000f1b1) cell_skin_colour_pane

0xa07e,	// (0x0001721d) cell_skin_colour_pane_g1

0x206e,	// (0x0000f20d) call_video_g1_ParamLimits

0x206e,	// (0x0000f20d) call_video_g1

0x208a,	// (0x0000f229) call_video_g2_ParamLimits

0x208a,	// (0x0000f229) call_video_g2

0x0001,

0xf29c,	// (0x0001c43b) call_video_g_ParamLimits

0xf29c,	// (0x0001c43b) call_video_g

0x20c0,	// (0x0000f25f) call_video_uplink_pane_cp1_ParamLimits

0x20c0,	// (0x0000f25f) call_video_uplink_pane_cp1

0xa098,	// (0x00017237) call_video_uplink_pane_cp2

0x213e,	// (0x0000f2dd) video_down_crop_pane_ParamLimits

0x213e,	// (0x0000f2dd) video_down_crop_pane

0x2212,	// (0x0000f3b1) video_down_pane_ParamLimits

0x2212,	// (0x0000f3b1) video_down_pane

0xa0a0,	// (0x0001723f) video_down_subqcif_pane_ParamLimits

0xa0a0,	// (0x0001723f) video_down_subqcif_pane

0xa0b8,	// (0x00017257) video_down_subqcif_pane_cp_ParamLimits

0xa0b8,	// (0x00017257) video_down_subqcif_pane_cp

0xa0dc,	// (0x0001727b) im_reading_pane_ParamLimits

0xa0dc,	// (0x0001727b) im_reading_pane

0x22e3,	// (0x0000f482) im_writing_pane_ParamLimits

0x22e3,	// (0x0000f482) im_writing_pane

0x22f9,	// (0x0000f498) im_reading_pane_t1

0xa0f6,	// (0x00017295) list_im_pane

0xa107,	// (0x000172a6) scroll_pane_cp07

0x2332,	// (0x0000f4d1) im_writing_pane_t1_ParamLimits

0x2332,	// (0x0000f4d1) im_writing_pane_t1

0xa120,	// (0x000172bf) im_writing_pane_t2_ParamLimits

0xa120,	// (0x000172bf) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0001c445) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0001c445) im_writing_pane_t

0x9988,	// (0x00016b27) input_focus_pane_cp04

0x9988,	// (0x00016b27) input_focus_pane_cp05

0x2347,	// (0x0000f4e6) list_im_single_pane_ParamLimits

0x2347,	// (0x0000f4e6) list_im_single_pane

0x235b,	// (0x0000f4fa) list_single_im_pane_t1

0x3be4,	// (0x00010d83) blid_accuracy_pane

0x3bec,	// (0x00010d8b) blid_compass_pane

0x3bf6,	// (0x00010d95) main_location_t1

0x3c06,	// (0x00010da5) main_location_t2

0x3c16,	// (0x00010db5) main_location_t3

0x0002,

0xf60d,	// (0x0001c7ac) main_location_t

0x9988,	// (0x00016b27) aid_levels_location

0x9d55,	// (0x00016ef4) blid_accuracy_pane_g1

0x9d55,	// (0x00016ef4) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0001c4a7) blid_accuracy_pane_g

0xa168,	// (0x00017307) wml_content_pane

0xa1a6,	// (0x00017345) wml_button_pane_ParamLimits

0xa1a6,	// (0x00017345) wml_button_pane

0x236a,	// (0x0000f509) wml_list_single_large_pane_ParamLimits

0x236a,	// (0x0000f509) wml_list_single_large_pane

0x237f,	// (0x0000f51e) wml_list_single_medium_pane_ParamLimits

0x237f,	// (0x0000f51e) wml_list_single_medium_pane

0x2395,	// (0x0000f534) wml_list_single_small_pane_ParamLimits

0x2395,	// (0x0000f534) wml_list_single_small_pane

0xa1ba,	// (0x00017359) wml_selection_box_pane_ParamLimits

0xa1ba,	// (0x00017359) wml_selection_box_pane

0xa1cd,	// (0x0001736c) wml_list_single_pane_t1

0xa1dc,	// (0x0001737b) wml_list_single_medium_pane_t1

0xa1eb,	// (0x0001738a) wml_list_single_large_pane_t1

0xa1fa,	// (0x00017399) input_focus_pane_cp02_ParamLimits

0xa1fa,	// (0x00017399) input_focus_pane_cp02

0xa20d,	// (0x000173ac) wml_selection_box_pane_g1

0xa216,	// (0x000173b5) wml_selection_box_pane_t1_ParamLimits

0xa216,	// (0x000173b5) wml_selection_box_pane_t1

0x9be3,	// (0x00016d82) bg_wml_button_pane_ParamLimits

0x9be3,	// (0x00016d82) bg_wml_button_pane

0xa22e,	// (0x000173cd) wml_button_pane_g1

0xa236,	// (0x000173d5) wml_button_pane_t1

0xa22e,	// (0x000173cd) wml_button_bg_pane_g1

0xa246,	// (0x000173e5) wml_button_bg_pane_g2

0xa24e,	// (0x000173ed) wml_button_bg_pane_g3

0xa256,	// (0x000173f5) wml_button_bg_pane_g4

0xa25e,	// (0x000173fd) wml_button_bg_pane_g5

0xa266,	// (0x00017405) wml_button_bg_pane_g6

0xa26e,	// (0x0001740d) wml_button_bg_pane_g7

0xa276,	// (0x00017415) wml_button_bg_pane_g8

0xa27e,	// (0x0001741d) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0001c44a) wml_button_bg_pane_g

0x23ad,	// (0x0000f54c) bg_list_pane_cp02

0xa286,	// (0x00017425) mce_header_pane_ParamLimits

0xa286,	// (0x00017425) mce_header_pane

0xa29c,	// (0x0001743b) mce_icon_pane

0xa29c,	// (0x0001743b) mce_image_pane

0xa2a5,	// (0x00017444) mce_text_pane_ParamLimits

0xa2a5,	// (0x00017444) mce_text_pane

0x23b5,	// (0x0000f554) scroll_pane_cp03

0xa19e,	// (0x0001733d) scroll_pane_cp04

0xa2b8,	// (0x00017457) scroll_pane_cp05_ParamLimits

0xa2b8,	// (0x00017457) scroll_pane_cp05

0x23bf,	// (0x0000f55e) mce_header_field_pane_ParamLimits

0x23bf,	// (0x0000f55e) mce_header_field_pane

0x23d6,	// (0x0000f575) mce_header_field_pane_2_ParamLimits

0x23d6,	// (0x0000f575) mce_header_field_pane_2

0x23ec,	// (0x0000f58b) mce_header_field_pane_3

0x23f4,	// (0x0000f593) list_single_mce_message_pane_ParamLimits

0x23f4,	// (0x0000f593) list_single_mce_message_pane

0x2409,	// (0x0000f5a8) list_single_mce_smart_pane_ParamLimits

0x2409,	// (0x0000f5a8) list_single_mce_smart_pane

0xa2c4,	// (0x00017463) input_focus_pane_cp03

0xa2cd,	// (0x0001746c) list_header_data_pane

0x2429,	// (0x0000f5c8) mce_header_field_pane_t1

0x2439,	// (0x0000f5d8) list_single_mce_header_pane_ParamLimits

0x2439,	// (0x0000f5d8) list_single_mce_header_pane

0xa2d5,	// (0x00017474) list_single_mce_header_pane_t1

0xa2e4,	// (0x00017483) list_single_mce_message_pane_g1

0xa2ec,	// (0x0001748b) list_single_mce_message_pane_t1

0x246b,	// (0x0000f60a) bg_cale_heading_pane_cp01_ParamLimits

0x246b,	// (0x0000f60a) bg_cale_heading_pane_cp01

0xa2fa,	// (0x00017499) bg_cale_pane_cp02_ParamLimits

0xa2fa,	// (0x00017499) bg_cale_pane_cp02

0x248e,	// (0x0000f62d) cale_month_corner_pane

0x24a4,	// (0x0000f643) cale_month_day_heading_pane_ParamLimits

0x24a4,	// (0x0000f643) cale_month_day_heading_pane

0x24cf,	// (0x0000f66e) cale_month_pane_g1_ParamLimits

0x24cf,	// (0x0000f66e) cale_month_pane_g1

0x24eb,	// (0x0000f68a) cale_month_pane_g2_ParamLimits

0x24eb,	// (0x0000f68a) cale_month_pane_g2

0x2506,	// (0x0000f6a5) cale_month_pane_g3_ParamLimits

0x2506,	// (0x0000f6a5) cale_month_pane_g3

0x2532,	// (0x0000f6d1) cale_month_pane_g4_ParamLimits

0x2532,	// (0x0000f6d1) cale_month_pane_g4

0x255e,	// (0x0000f6fd) cale_month_pane_g5_ParamLimits

0x255e,	// (0x0000f6fd) cale_month_pane_g5

0x258a,	// (0x0000f729) cale_month_pane_g6_ParamLimits

0x258a,	// (0x0000f729) cale_month_pane_g6

0x25b6,	// (0x0000f755) cale_month_pane_g7_ParamLimits

0x25b6,	// (0x0000f755) cale_month_pane_g7

0x25e2,	// (0x0000f781) cale_month_pane_g8_ParamLimits

0x25e2,	// (0x0000f781) cale_month_pane_g8

0x2616,	// (0x0000f7b5) cale_month_pane_g9_ParamLimits

0x2616,	// (0x0000f7b5) cale_month_pane_g9

0x2648,	// (0x0000f7e7) cale_month_pane_g10_ParamLimits

0x2648,	// (0x0000f7e7) cale_month_pane_g10

0x267a,	// (0x0000f819) cale_month_pane_g11_ParamLimits

0x267a,	// (0x0000f819) cale_month_pane_g11

0x26ac,	// (0x0000f84b) cale_month_pane_g12_ParamLimits

0x26ac,	// (0x0000f84b) cale_month_pane_g12

0x26de,	// (0x0000f87d) cale_month_pane_g13_ParamLimits

0x26de,	// (0x0000f87d) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0001c45d) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0001c45d) cale_month_pane_g

0x2710,	// (0x0000f8af) cale_month_week_pane

0x2723,	// (0x0000f8c2) grid_cale_month_pane_ParamLimits

0x2723,	// (0x0000f8c2) grid_cale_month_pane

0x2749,	// (0x0000f8e8) cale_month_day_heading_pane_t1

0x27a7,	// (0x0000f946) cale_month_day_heading_pane_t2

0x280c,	// (0x0000f9ab) cale_month_day_heading_pane_t3

0x2871,	// (0x0000fa10) cale_month_day_heading_pane_t4

0x28d6,	// (0x0000fa75) cale_month_day_heading_pane_t5

0x293b,	// (0x0000fada) cale_month_day_heading_pane_t6

0x29a0,	// (0x0000fb3f) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0001c478) cale_month_day_heading_pane_t

0x9e88,	// (0x00017027) bg_cale_side_pane_cp01

0x2a05,	// (0x0000fba4) cale_month_week_pane_t1

0x2a1c,	// (0x0000fbbb) cale_month_week_pane_t2

0x2a33,	// (0x0000fbd2) cale_month_week_pane_t3

0x2a4a,	// (0x0000fbe9) cale_month_week_pane_t4

0x2a61,	// (0x0000fc00) cale_month_week_pane_t5

0x2a78,	// (0x0000fc17) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0001c487) cale_month_week_pane_t

0x2a8f,	// (0x0000fc2e) cell_cale_month_pane_ParamLimits

0x2a8f,	// (0x0000fc2e) cell_cale_month_pane

0xa359,	// (0x000174f8) cell_cale_month_pane_g1

0x2b35,	// (0x0000fcd4) cell_cale_month_pane_t1_ParamLimits

0x2b35,	// (0x0000fcd4) cell_cale_month_pane_t1

0x9e96,	// (0x00017035) grid_highlight_pane_cp08

0x9d55,	// (0x00016ef4) main_smil_g1

0x2b51,	// (0x0000fcf0) smil_status_pane

0xa365,	// (0x00017504) smil_text_pane

0xbd79,	// (0x00018f18) bg_popup_call3_rect_pane_g8

0xbd81,	// (0x00018f20) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001c740) bg_popup_call3_rect_pane_g

0xbffb,	// (0x0001919a) smil_status_volume_pane_g1

0xa36f,	// (0x0001750e) smil_status_pane_t1

0xc02e,	// (0x000191cd) volume_smil_pane

0xa386,	// (0x00017525) list_smil_text_pane

0x2b64,	// (0x0000fd03) scroll_pane_cp011

0x2b6f,	// (0x0000fd0e) smil_text_list_pane_t1_ParamLimits

0x2b6f,	// (0x0000fd0e) smil_text_list_pane_t1

0xa390,	// (0x0001752f) aid_volume_smil_ParamLimits

0xa390,	// (0x0001752f) aid_volume_smil

0x9d55,	// (0x00016ef4) smil_volume_pane_g1

0x9d55,	// (0x00016ef4) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0001c4a7) smil_volume_pane_g

0x9cdc,	// (0x00016e7b) listscroll_cale_day_pane

0xa3b2,	// (0x00017551) bg_cale_pane

0xa3ca,	// (0x00017569) list_cale_pane

0xa3db,	// (0x0001757a) scroll_pane_cp09

0xa3ec,	// (0x0001758b) cale_bg_pane_g1

0xa3f4,	// (0x00017593) cale_bg_pane_g2

0xa3fc,	// (0x0001759b) cale_bg_pane_g3

0xa404,	// (0x000175a3) cale_bg_pane_g4

0xa40c,	// (0x000175ab) cale_bg_pane_g5

0xa414,	// (0x000175b3) cale_bg_pane_g6

0xa41c,	// (0x000175bb) cale_bg_pane_g7

0xa424,	// (0x000175c3) cale_bg_pane_g8

0xa42c,	// (0x000175cb) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0001c4ac) cale_bg_pane_g

0x1ca9,	// (0x0000ee48) list_cale_time_pane_ParamLimits

0x1ca9,	// (0x0000ee48) list_cale_time_pane

0xa434,	// (0x000175d3) list_cale_time_pane_g1_ParamLimits

0xa434,	// (0x000175d3) list_cale_time_pane_g1

0xa440,	// (0x000175df) list_cale_time_pane_g2_ParamLimits

0xa440,	// (0x000175df) list_cale_time_pane_g2

0x2bb5,	// (0x0000fd54) list_cale_time_pane_g3_ParamLimits

0x2bb5,	// (0x0000fd54) list_cale_time_pane_g3

0x2bc3,	// (0x0000fd62) list_cale_time_pane_g4_ParamLimits

0x2bc3,	// (0x0000fd62) list_cale_time_pane_g4

0x2bd1,	// (0x0000fd70) list_cale_time_pane_g5_ParamLimits

0x2bd1,	// (0x0000fd70) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0001c4bf) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0001c4bf) list_cale_time_pane_g

0xa45a,	// (0x000175f9) list_cale_time_pane_t1_ParamLimits

0xa45a,	// (0x000175f9) list_cale_time_pane_t1

0xa482,	// (0x00017621) list_cale_time_pane_t2_ParamLimits

0xa482,	// (0x00017621) list_cale_time_pane_t2

0x2ecd,	// (0x0001006c) aid_blid_cardinal_pane

0x2f0b,	// (0x000100aa) compass_pane_t4

0xa4aa,	// (0x00017649) list_cale_time_pane_t4_ParamLimits

0xa4aa,	// (0x00017649) list_cale_time_pane_t4

0x2f19,	// (0x000100b8) compass_pane_t5

0x2f27,	// (0x000100c6) compass_pane_t6

0x2f35,	// (0x000100d4) compass_pane_t7

0xa9c9,	// (0x00017b68) navi_pane_cc_t1

0xab30,	// (0x00017ccf) aid_phob_thumbnail_center_pane

0x35fc,	// (0x0001079b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0001c4cc) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0001c4cc) list_cale_time_pane_t

0x95df,	// (0x0001677e) bg_popup_window_pane_cp02_ParamLimits

0x95df,	// (0x0001677e) bg_popup_window_pane_cp02

0xa4d2,	// (0x00017671) heading_pane_cp01_ParamLimits

0xa4d2,	// (0x00017671) heading_pane_cp01

0xa4de,	// (0x0001767d) loc_req_pane_ParamLimits

0xa4de,	// (0x0001767d) loc_req_pane

0xa4ee,	// (0x0001768d) loc_type_pane_ParamLimits

0xa4ee,	// (0x0001768d) loc_type_pane

0xa500,	// (0x0001769f) loc_type_pane_t1_ParamLimits

0xa500,	// (0x0001769f) loc_type_pane_t1

0xa512,	// (0x000176b1) loc_type_pane_t2_ParamLimits

0xa512,	// (0x000176b1) loc_type_pane_t2

0xa524,	// (0x000176c3) loc_type_pane_t3_ParamLimits

0xa524,	// (0x000176c3) loc_type_pane_t3

0x0002,

0xf334,	// (0x0001c4d3) loc_type_pane_t_ParamLimits

0xf334,	// (0x0001c4d3) loc_type_pane_t

0xa536,	// (0x000176d5) list_loc_req_pane

0xa540,	// (0x000176df) scroll_pane_cp012

0x2bdf,	// (0x0000fd7e) list_single_loc_request_popup_menu_pane_ParamLimits

0x2bdf,	// (0x0000fd7e) list_single_loc_request_popup_menu_pane

0xa54b,	// (0x000176ea) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa54b,	// (0x000176ea) list_single_loc_request_popup_menu_pane_g1

0xa557,	// (0x000176f6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa557,	// (0x000176f6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0001c4da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0001c4da) list_single_loc_request_popup_menu_pane_g

0xa563,	// (0x00017702) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa563,	// (0x00017702) list_single_loc_request_popup_menu_pane_t1

0x9be3,	// (0x00016d82) bg_popup_window_pane_cp03_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_window_pane_cp03

0xa579,	// (0x00017718) heading_loc_req_pane_ParamLimits

0xa579,	// (0x00017718) heading_loc_req_pane

0x2bec,	// (0x0000fd8b) popup_dyc_status_message_window_g1_ParamLimits

0x2bec,	// (0x0000fd8b) popup_dyc_status_message_window_g1

0x2c00,	// (0x0000fd9f) popup_dyc_status_message_window_t1_ParamLimits

0x2c00,	// (0x0000fd9f) popup_dyc_status_message_window_t1

0x2c15,	// (0x0000fdb4) popup_dyc_status_message_window_t2_ParamLimits

0x2c15,	// (0x0000fdb4) popup_dyc_status_message_window_t2

0x2c2a,	// (0x0000fdc9) popup_dyc_status_message_window_t3_ParamLimits

0x2c2a,	// (0x0000fdc9) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0001c4df) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0001c4df) popup_dyc_status_message_window_t

0x9988,	// (0x00016b27) bg_heading_pane_cp01

0xa585,	// (0x00017724) heading_loc_req_pane_g1

0xa58d,	// (0x0001772c) heading_loc_req_pane_g2

0xa595,	// (0x00017734) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0001c4e6) heading_loc_req_pane_g

0xa59d,	// (0x0001773c) heading_loc_req_pane_t1

0xa621,	// (0x000177c0) bg_popup_sub_pane_cp01_ParamLimits

0xa621,	// (0x000177c0) bg_popup_sub_pane_cp01

0xa62f,	// (0x000177ce) popup_cale_events_window_g1_ParamLimits

0xa62f,	// (0x000177ce) popup_cale_events_window_g1

0xa64f,	// (0x000177ee) popup_cale_events_window_g2_ParamLimits

0xa64f,	// (0x000177ee) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0001c51a) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0001c51a) popup_cale_events_window_g

0xa66f,	// (0x0001780e) popup_cale_events_window_t1_ParamLimits

0xa66f,	// (0x0001780e) popup_cale_events_window_t1

0xa681,	// (0x00017820) popup_cale_events_window_t2_ParamLimits

0xa681,	// (0x00017820) popup_cale_events_window_t2

0xa6bf,	// (0x0001785e) popup_cale_events_window_t3_ParamLimits

0xa6bf,	// (0x0001785e) popup_cale_events_window_t3

0xa6f9,	// (0x00017898) popup_cale_events_window_t4_ParamLimits

0xa6f9,	// (0x00017898) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0001c51f) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0001c51f) popup_cale_events_window_t

0x2cb8,	// (0x0000fe57) call_type_pane

0x2cc8,	// (0x0000fe67) popup_call_status_window_g1

0x2cdc,	// (0x0000fe7b) popup_call_status_window_g2

0x2cf0,	// (0x0000fe8f) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0001c528) popup_call_status_window_g

0xa72f,	// (0x000178ce) call_type_pane_g1

0xa738,	// (0x000178d7) call_type_pane_g2

0x0001,

0xf390,	// (0x0001c52f) call_type_pane_g

0x9988,	// (0x00016b27) bg_popup_sub_pane_cp02

0xa741,	// (0x000178e0) listscroll_popup_wml_pane

0xa749,	// (0x000178e8) list_wml_pane

0xa753,	// (0x000178f2) scroll_pane_cp013

0xa75e,	// (0x000178fd) list_single_graphic_popup_wml_pane_ParamLimits

0xa75e,	// (0x000178fd) list_single_graphic_popup_wml_pane

0x9d55,	// (0x00016ef4) list_single_graphic_popup_wml_pane_g1

0xa772,	// (0x00017911) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0001c534) list_single_graphic_popup_wml_pane_g

0xa77a,	// (0x00017919) list_single_graphic_popup_wml_pane_t1

0xa790,	// (0x0001792f) aid_call_pane

0x9bdb,	// (0x00016d7a) popup_clock_analogue_window_g1

0x9bdb,	// (0x00016d7a) popup_clock_analogue_window_g2

0xa798,	// (0x00017937) popup_clock_analogue_window_g3

0xa798,	// (0x00017937) popup_clock_analogue_window_g4

0x9d55,	// (0x00016ef4) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0001c539) popup_clock_analogue_window_g

0xa7a0,	// (0x0001793f) popup_clock_analogue_window_t1

0xa7ae,	// (0x0001794d) clock_digital_number_pane_ParamLimits

0xa7ae,	// (0x0001794d) clock_digital_number_pane

0xa7ba,	// (0x00017959) clock_digital_number_pane_cp02_ParamLimits

0xa7ba,	// (0x00017959) clock_digital_number_pane_cp02

0xa7c6,	// (0x00017965) clock_digital_number_pane_cp03_ParamLimits

0xa7c6,	// (0x00017965) clock_digital_number_pane_cp03

0xa7d2,	// (0x00017971) clock_digital_number_pane_cp04_ParamLimits

0xa7d2,	// (0x00017971) clock_digital_number_pane_cp04

0xa7e2,	// (0x00017981) clock_digital_separator_pane_ParamLimits

0xa7e2,	// (0x00017981) clock_digital_separator_pane

0xa7ee,	// (0x0001798d) popup_clock_digital_window_t1

0x9d55,	// (0x00016ef4) clock_digital_number_pane_g1

0x9d55,	// (0x00016ef4) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0001c4a7) clock_digital_number_pane_g

0x9d55,	// (0x00016ef4) clock_digital_separator_pane_g1

0x9d55,	// (0x00016ef4) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0001c4a7) clock_digital_separator_pane_g

0x9988,	// (0x00016b27) bg_popup_window_pane_cp04

0xa80b,	// (0x000179aa) heading_pane_cp03

0xa813,	// (0x000179b2) listscroll_popup_gms_pane

0xa81b,	// (0x000179ba) grid_large_graphic_popup_pane

0xa825,	// (0x000179c4) listscroll_popup_gms_pane_g1

0xa82d,	// (0x000179cc) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0001c544) listscroll_popup_gms_pane_g

0xa19e,	// (0x0001733d) scroll_pane_cp014

0x2cff,	// (0x0000fe9e) cell_large_graphic_popup_pane_ParamLimits

0x2cff,	// (0x0000fe9e) cell_large_graphic_popup_pane

0x2d17,	// (0x0000feb6) cell_large_graphic_popup_pane_g1_ParamLimits

0x2d17,	// (0x0000feb6) cell_large_graphic_popup_pane_g1

0xa835,	// (0x000179d4) cell_large_graphic_popup_pane_g2_ParamLimits

0xa835,	// (0x000179d4) cell_large_graphic_popup_pane_g2

0xa841,	// (0x000179e0) cell_large_graphic_popup_pane_g3_ParamLimits

0xa841,	// (0x000179e0) cell_large_graphic_popup_pane_g3

0xa84e,	// (0x000179ed) cell_large_graphic_popup_pane_g4_ParamLimits

0xa84e,	// (0x000179ed) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0001c549) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0001c549) cell_large_graphic_popup_pane_g

0xa85e,	// (0x000179fd) grid_highlight_pane_cp010

0x9d55,	// (0x00016ef4) bg_popup_call_pane_g1

0xa868,	// (0x00017a07) list_single_graphic_popup_conf_pane_ParamLimits

0xa868,	// (0x00017a07) list_single_graphic_popup_conf_pane

0xa87b,	// (0x00017a1a) list_highlight_pane_cp01

0xa884,	// (0x00017a23) list_single_graphic_popup_conf_pane_g1

0xa88c,	// (0x00017a2b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0001c552) list_single_graphic_popup_conf_pane_g

0xa894,	// (0x00017a33) list_single_graphic_popup_conf_pane_t1

0xa8a2,	// (0x00017a41) linegrid_cams_pane_g1

0x2d23,	// (0x0000fec2) linegrid_cams_pane_g2

0x9ec9,	// (0x00017068) linegrid_cams_pane_g3

0xa8ab,	// (0x00017a4a) linegrid_cams_pane_g4

0x2d2c,	// (0x0000fecb) linegrid_cams_pane_g5

0x2d35,	// (0x0000fed4) linegrid_cams_pane_g6

0x9ed2,	// (0x00017071) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0001c557) linegrid_cams_pane_g

0xa8b4,	// (0x00017a53) popup_clock_analogue_window

0xa8b4,	// (0x00017a53) popup_clock_digital_window

0x9988,	// (0x00016b27) popup_phob_thumbnail_window

0x9d55,	// (0x00016ef4) call_video_uplink_pane_g1

0xa8bd,	// (0x00017a5c) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0001c566) call_video_uplink_pane_g

0xa8c5,	// (0x00017a64) video_uplink_pane

0xa8cd,	// (0x00017a6c) mce_image_pane_g1

0x2d40,	// (0x0000fedf) mce_image_pane_g2

0x2d4a,	// (0x0000fee9) mce_image_pane_g3

0x2d52,	// (0x0000fef1) mce_image_pane_g4

0x2d5a,	// (0x0000fef9) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0001c56b) mce_image_pane_g

0xa8d7,	// (0x00017a76) control_top_pane_stacon_cp01_ParamLimits

0xa8d7,	// (0x00017a76) control_top_pane_stacon_cp01

0xa8eb,	// (0x00017a8a) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8eb,	// (0x00017a8a) uni_indicator_pane_stacon_cp01

0xa8fc,	// (0x00017a9b) bg_popup_sub_pane_cp03

0x2d62,	// (0x0000ff01) chi_dic_find_pane

0x2d6a,	// (0x0000ff09) listscroll_chi_dic_pane

0x2d73,	// (0x0000ff12) main_pane_chidic_g1

0xa906,	// (0x00017aa5) chi_dic_find_pane_t1

0xa914,	// (0x00017ab3) find_chidic_pane

0xa91d,	// (0x00017abc) chi_dic_list_pane_ParamLimits

0xa91d,	// (0x00017abc) chi_dic_list_pane

0xa92e,	// (0x00017acd) scroll_pane_cp020

0xa936,	// (0x00017ad5) find_chidic_pane_t1

0x9988,	// (0x00016b27) input_focus_pane_cp06

0x2d86,	// (0x0000ff25) list_chi_dic_pane_ParamLimits

0x2d86,	// (0x0000ff25) list_chi_dic_pane

0x2d98,	// (0x0000ff37) list_chi_dic_pane_t1_ParamLimits

0x2d98,	// (0x0000ff37) list_chi_dic_pane_t1

0x9988,	// (0x00016b27) list_highlight_pane_cp020

0xa945,	// (0x00017ae4) bg_cale_heading_pane_g1

0x2dab,	// (0x0000ff4a) bg_cale_heading_pane_g2

0x2db3,	// (0x0000ff52) bg_cale_heading_pane_g3

0x2dbb,	// (0x0000ff5a) bg_cale_heading_pane_g4

0x2dc5,	// (0x0000ff64) bg_cale_heading_pane_g5

0x2dcf,	// (0x0000ff6e) bg_cale_heading_pane_g6

0x2dd7,	// (0x0000ff76) bg_cale_heading_pane_g7

0x2ddf,	// (0x0000ff7e) bg_cale_heading_pane_g8

0x2de9,	// (0x0000ff88) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0001c576) bg_cale_heading_pane_g

0xa945,	// (0x00017ae4) bg_cale_side_pane_g1

0x2df3,	// (0x0000ff92) bg_cale_side_pane_g2

0x2dfb,	// (0x0000ff9a) bg_cale_side_pane_g3

0x2e03,	// (0x0000ffa2) bg_cale_side_pane_g4

0x2e0b,	// (0x0000ffaa) bg_cale_side_pane_g5

0x2e13,	// (0x0000ffb2) bg_cale_side_pane_g6

0x2e1b,	// (0x0000ffba) bg_cale_side_pane_g7

0x2e23,	// (0x0000ffc2) bg_cale_side_pane_g8

0x2e2b,	// (0x0000ffca) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0001c589) bg_cale_side_pane_g

0x2e33,	// (0x0000ffd2) popup_call_status_window_ParamLimits

0x2e33,	// (0x0000ffd2) popup_call_status_window

0xa94d,	// (0x00017aec) stacon_top_pane

0xa955,	// (0x00017af4) status_pane_ParamLimits

0xa955,	// (0x00017af4) status_pane

0xa96a,	// (0x00017b09) status_small_pane

0xa972,	// (0x00017b11) control_pane

0x9988,	// (0x00016b27) stacon_bottom_pane

0xa97a,	// (0x00017b19) list_single_mce_smart_pane_t1_ParamLimits

0xa97a,	// (0x00017b19) list_single_mce_smart_pane_t1

0xa98d,	// (0x00017b2c) list_single_mce_smart_pane_t2_ParamLimits

0xa98d,	// (0x00017b2c) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0001c59c) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0001c59c) list_single_mce_smart_pane_t

0x2e7c,	// (0x0001001b) compass_pane

0x2e85,	// (0x00010024) main_location2_pane_t1

0x2e97,	// (0x00010036) main_location2_pane_t2

0x2ea9,	// (0x00010048) main_location2_pane_t3

0x0003,

0xf402,	// (0x0001c5a1) main_location2_pane_t

0xa9ac,	// (0x00017b4b) compass_pane_g1_ParamLimits

0xa9ac,	// (0x00017b4b) compass_pane_g1

0x2eed,	// (0x0001008c) compass_pane_t1

0x2efc,	// (0x0001009b) compass_pane_t2

0x0005,

0xf40b,	// (0x0001c5aa) compass_pane_t

0x2f43,	// (0x000100e2) text_secondary_cp61

0xa9c0,	// (0x00017b5f) navi_pane_cams_g5

0xa9e3,	// (0x00017b82) navi_pane_im_t1

0xa9f1,	// (0x00017b90) navi_pane_mp_g1_ParamLimits

0xa9f1,	// (0x00017b90) navi_pane_mp_g1

0xaa05,	// (0x00017ba4) navi_pane_mp_g2_ParamLimits

0xaa05,	// (0x00017ba4) navi_pane_mp_g2

0xaa11,	// (0x00017bb0) navi_pane_mp_g3_ParamLimits

0xaa11,	// (0x00017bb0) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0001c5be) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0001c5be) navi_pane_mp_g

0xaa1d,	// (0x00017bbc) navi_pane_mp_t1

0xaa2b,	// (0x00017bca) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0001c5c5) navi_pane_mp_t

0xaa67,	// (0x00017c06) navi_pane_vt_g1

0xaa1d,	// (0x00017bbc) navi_pane_vt_t1

0xaa6f,	// (0x00017c0e) navi_slider_pane

0xaa77,	// (0x00017c16) zooming_pane

0xaa7f,	// (0x00017c1e) navi_slider_pane_g1

0xaa88,	// (0x00017c27) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0001c5cc) navi_slider_pane_g

0xaab5,	// (0x00017c54) aid_levels_zoom

0xaabd,	// (0x00017c5c) zooming_pane_g1

0xaac5,	// (0x00017c64) zooming_pane_g2

0xaac5,	// (0x00017c64) zooming_pane_g3

0x0002,

0xf43c,	// (0x0001c5db) zooming_pane_g

0xaacd,	// (0x00017c6c) level_10_zoom

0xaad6,	// (0x00017c75) level_11_zoom

0xaadf,	// (0x00017c7e) level_1_zoom

0xaae8,	// (0x00017c87) level_2_zoom

0xaaf1,	// (0x00017c90) level_3_zoom

0xaafa,	// (0x00017c99) level_4_zoom

0xab03,	// (0x00017ca2) level_5_zoom

0xab0c,	// (0x00017cab) level_6_zoom

0xab15,	// (0x00017cb4) level_7_zoom

0xab1e,	// (0x00017cbd) level_8_zoom

0xab27,	// (0x00017cc6) level_9_zoom

0xab38,	// (0x00017cd7) popup_phob_thumbnail_window_g1

0xab40,	// (0x00017cdf) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0001c5e2) popup_phob_thumbnail_window_g

0xbedb,	// (0x0001907a) level_1_location

0xbee3,	// (0x00019082) level_2_location

0xbeeb,	// (0x0001908a) level_3_location

0xbef3,	// (0x00019092) level_4_location

0xaa77,	// (0x00017c16) level_5_location

0x3068,	// (0x00010207) mce_icon_pane_g1

0x3070,	// (0x0001020f) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0001c5e7) mce_icon_pane_g

0x3078,	// (0x00010217) main_mup_pane_g1_ParamLimits

0x3078,	// (0x00010217) main_mup_pane_g1

0x308e,	// (0x0001022d) main_mup_pane_g2_ParamLimits

0x308e,	// (0x0001022d) main_mup_pane_g2

0x30a6,	// (0x00010245) main_mup_pane_g3_ParamLimits

0x30a6,	// (0x00010245) main_mup_pane_g3

0x30be,	// (0x0001025d) main_mup_pane_g4_ParamLimits

0x30be,	// (0x0001025d) main_mup_pane_g4

0x30d6,	// (0x00010275) main_mup_pane_g5_ParamLimits

0x30d6,	// (0x00010275) main_mup_pane_g5

0x30f2,	// (0x00010291) main_mup_pane_g6_ParamLimits

0x30f2,	// (0x00010291) main_mup_pane_g6

0x310a,	// (0x000102a9) main_mup_pane_g7_ParamLimits

0x310a,	// (0x000102a9) main_mup_pane_g7

0x3122,	// (0x000102c1) main_mup_pane_g8_ParamLimits

0x3122,	// (0x000102c1) main_mup_pane_g8

0x313c,	// (0x000102db) main_mup_pane_g9_ParamLimits

0x313c,	// (0x000102db) main_mup_pane_g9

0x3156,	// (0x000102f5) main_mup_pane_g10_ParamLimits

0x3156,	// (0x000102f5) main_mup_pane_g10

0x3170,	// (0x0001030f) main_mup_pane_g11_ParamLimits

0x3170,	// (0x0001030f) main_mup_pane_g11

0x3184,	// (0x00010323) main_mup_pane_g12_ParamLimits

0x3184,	// (0x00010323) main_mup_pane_g12

0x319a,	// (0x00010339) main_mup_pane_g13_ParamLimits

0x319a,	// (0x00010339) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0001c5ec) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0001c5ec) main_mup_pane_g

0x31ae,	// (0x0001034d) main_mup_pane_t1_ParamLimits

0x31ae,	// (0x0001034d) main_mup_pane_t1

0x31c8,	// (0x00010367) main_mup_pane_t2_ParamLimits

0x31c8,	// (0x00010367) main_mup_pane_t2

0x31e0,	// (0x0001037f) main_mup_pane_t3_ParamLimits

0x31e0,	// (0x0001037f) main_mup_pane_t3

0x31f8,	// (0x00010397) main_mup_pane_t4_ParamLimits

0x31f8,	// (0x00010397) main_mup_pane_t4

0x3216,	// (0x000103b5) main_mup_pane_t5_ParamLimits

0x3216,	// (0x000103b5) main_mup_pane_t5

0x322b,	// (0x000103ca) main_mup_pane_t6_ParamLimits

0x322b,	// (0x000103ca) main_mup_pane_t6

0x0005,

0xf468,	// (0x0001c607) main_mup_pane_t_ParamLimits

0xf468,	// (0x0001c607) main_mup_pane_t

0x323d,	// (0x000103dc) mup_progress_pane_ParamLimits

0x323d,	// (0x000103dc) mup_progress_pane

0x3249,	// (0x000103e8) mup_visualizer_pane_ParamLimits

0x3249,	// (0x000103e8) mup_visualizer_pane

0x3279,	// (0x00010418) mup_volume_pane_ParamLimits

0x3279,	// (0x00010418) mup_volume_pane

0xab48,	// (0x00017ce7) mup_visualizer_pane_g1_ParamLimits

0xab48,	// (0x00017ce7) mup_visualizer_pane_g1

0xab48,	// (0x00017ce7) mup_visualizer_pane_g2_ParamLimits

0xab48,	// (0x00017ce7) mup_visualizer_pane_g2

0xa9ac,	// (0x00017b4b) mup_visualizer_pane_g3_ParamLimits

0xa9ac,	// (0x00017b4b) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0001c614) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0001c614) mup_visualizer_pane_g

0x9d55,	// (0x00016ef4) mup_volume_pane_g1

0xab5e,	// (0x00017cfd) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0001c61b) mup_volume_pane_g

0x9d55,	// (0x00016ef4) mup_progress_pane_g1

0xab67,	// (0x00017d06) mup_progress_pane_g2

0xab70,	// (0x00017d0f) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0001c620) mup_progress_pane_g

0x9988,	// (0x00016b27) bg_popup_window_pane_cp05

0xab79,	// (0x00017d18) heading_pane_cp02_ParamLimits

0xab79,	// (0x00017d18) heading_pane_cp02

0xab93,	// (0x00017d32) list_popup_blid_pane

0xab9b,	// (0x00017d3a) list_blid_sat_info_pane_ParamLimits

0xab9b,	// (0x00017d3a) list_blid_sat_info_pane

0xabae,	// (0x00017d4d) list_blid_sat_info_pane_g1

0xabb6,	// (0x00017d55) list_blid_sat_info_pane_t1

0x338f,	// (0x0001052e) mup_equalizer_pane_ParamLimits

0x338f,	// (0x0001052e) mup_equalizer_pane

0x33a8,	// (0x00010547) mup_equalizer_pane_cp1_ParamLimits

0x33a8,	// (0x00010547) mup_equalizer_pane_cp1

0x33c5,	// (0x00010564) mup_equalizer_pane_cp2_ParamLimits

0x33c5,	// (0x00010564) mup_equalizer_pane_cp2

0x33e2,	// (0x00010581) mup_equalizer_pane_cp3_ParamLimits

0x33e2,	// (0x00010581) mup_equalizer_pane_cp3

0x3403,	// (0x000105a2) mup_equalizer_pane_cp4_ParamLimits

0x3403,	// (0x000105a2) mup_equalizer_pane_cp4

0x3424,	// (0x000105c3) mup_equalizer_pane_cp5

0x3438,	// (0x000105d7) mup_equalizer_pane_cp6

0x344c,	// (0x000105eb) mup_equalizer_pane_cp7

0xbdf9,	// (0x00018f98) bg_popup_call_poc_act_pane_g9

0xbe01,	// (0x00018fa0) bg_popup_call_poc_act_pane_g10

0xbe09,	// (0x00018fa8) bg_popup_call_poc_act_pane_g11

0x000a,

0x9be3,	// (0x00016d82) mup_scale_pane

0x9d55,	// (0x00016ef4) mup_scale_pane_g1

0xabc4,	// (0x00017d63) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0001c63c) mup_scale_pane_g

0xabe8,	// (0x00017d87) msg_data_pane

0xabf0,	// (0x00017d8f) scroll_pane_cp017

0x3472,	// (0x00010611) bg_list_pane_cp04_ParamLimits

0x3472,	// (0x00010611) bg_list_pane_cp04

0xac00,	// (0x00017d9f) msg_data_pane_g1

0x348a,	// (0x00010629) msg_data_pane_g2

0x3494,	// (0x00010633) msg_data_pane_g3

0x349c,	// (0x0001063b) msg_data_pane_g4

0x34a4,	// (0x00010643) msg_data_pane_g5

0x34ac,	// (0x0001064b) msg_data_pane_g6

0x34b4,	// (0x00010653) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0001c64b) msg_data_pane_g

0x34bc,	// (0x0001065b) msg_text_pane_ParamLimits

0x34bc,	// (0x0001065b) msg_text_pane

0x34e0,	// (0x0001067f) qrid_highlight_pane_cp011_ParamLimits

0x34e0,	// (0x0001067f) qrid_highlight_pane_cp011

0x9988,	// (0x00016b27) msg_body_pane

0x9988,	// (0x00016b27) msg_header_pane

0xac11,	// (0x00017db0) input_focus_pane_cp07

0x3504,	// (0x000106a3) msg_header_pane_t1_ParamLimits

0x3504,	// (0x000106a3) msg_header_pane_t1

0xac26,	// (0x00017dc5) msg_header_pane_t2_ParamLimits

0xac26,	// (0x00017dc5) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0001c65f) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0001c65f) msg_header_pane_t

0xac38,	// (0x00017dd7) msg_body_pane_g1

0xac40,	// (0x00017ddf) msg_body_pane_t1_ParamLimits

0xac40,	// (0x00017ddf) msg_body_pane_t1

0xac71,	// (0x00017e10) msg_body_pane_t2_ParamLimits

0xac71,	// (0x00017e10) msg_body_pane_t2

0xac83,	// (0x00017e22) msg_body_pane_t3_ParamLimits

0xac83,	// (0x00017e22) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0001c664) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0001c664) msg_body_pane_t

0x3552,	// (0x000106f1) main_viewer_pane_g1_ParamLimits

0x3552,	// (0x000106f1) main_viewer_pane_g1

0x3560,	// (0x000106ff) main_viewer_pane_g2_ParamLimits

0x3560,	// (0x000106ff) main_viewer_pane_g2

0x356e,	// (0x0001070d) main_viewer_pane_g3_ParamLimits

0x356e,	// (0x0001070d) main_viewer_pane_g3

0x357d,	// (0x0001071c) main_viewer_pane_g4_ParamLimits

0x357d,	// (0x0001071c) main_viewer_pane_g4

0xacad,	// (0x00017e4c) main_viewer_pane_g5_ParamLimits

0xacad,	// (0x00017e4c) main_viewer_pane_g5

0xacad,	// (0x00017e4c) main_viewer_pane_g7_ParamLimits

0xacad,	// (0x00017e4c) main_viewer_pane_g7

0xacbf,	// (0x00017e5e) main_viewer_pane_g8_ParamLimits

0xacbf,	// (0x00017e5e) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0001c674) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0001c674) main_viewer_pane_g

0xacd7,	// (0x00017e76) viewer_content_pane_ParamLimits

0xacd7,	// (0x00017e76) viewer_content_pane

0x35b9,	// (0x00010758) main_postcard_pane_g1_ParamLimits

0x35b9,	// (0x00010758) main_postcard_pane_g1

0x35cf,	// (0x0001076e) main_postcard_pane_g2_ParamLimits

0x35cf,	// (0x0001076e) main_postcard_pane_g2

0x35e5,	// (0x00010784) main_postcard_pane_g3_ParamLimits

0x35e5,	// (0x00010784) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0001c685) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0001c685) main_postcard_pane_g

0x35fc,	// (0x0001079b) main_postcard_pane_g4

0xc00e,	// (0x000191ad) smil_status_volume_pane_g2

0x363f,	// (0x000107de) postcard_pane_ParamLimits

0x363f,	// (0x000107de) postcard_pane

0xace5,	// (0x00017e84) postcard_pane_g1_ParamLimits

0xace5,	// (0x00017e84) postcard_pane_g1

0x3681,	// (0x00010820) postcard_pane_g2_ParamLimits

0x3681,	// (0x00010820) postcard_pane_g2

0x368d,	// (0x0001082c) postcard_pane_g3_ParamLimits

0x368d,	// (0x0001082c) postcard_pane_g3

0xacf3,	// (0x00017e92) postcard_pane_g4_ParamLimits

0xacf3,	// (0x00017e92) postcard_pane_g4

0x3699,	// (0x00010838) postcard_pane_g5_ParamLimits

0x3699,	// (0x00010838) postcard_pane_g5

0x36ae,	// (0x0001084d) postcard_pane_g6_ParamLimits

0x36ae,	// (0x0001084d) postcard_pane_g6

0xace5,	// (0x00017e84) postcard_pane_g7_ParamLimits

0xace5,	// (0x00017e84) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0001c692) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0001c692) postcard_pane_g

0x36c2,	// (0x00010861) main_mp2_pane_g1_ParamLimits

0x36c2,	// (0x00010861) main_mp2_pane_g1

0x36ce,	// (0x0001086d) main_mp2_pane_g2_ParamLimits

0x36ce,	// (0x0001086d) main_mp2_pane_g2

0x36da,	// (0x00010879) main_mp2_pane_g3_ParamLimits

0x36da,	// (0x00010879) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0001c6a1) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0001c6a1) main_mp2_pane_g

0x36e6,	// (0x00010885) main_mp2_pane_t1_ParamLimits

0x36e6,	// (0x00010885) main_mp2_pane_t1

0x36fb,	// (0x0001089a) main_mp2_pane_t2_ParamLimits

0x36fb,	// (0x0001089a) main_mp2_pane_t2

0x370d,	// (0x000108ac) main_mp2_pane_t3_ParamLimits

0x370d,	// (0x000108ac) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0001c6a8) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0001c6a8) main_mp2_pane_t

0xad01,	// (0x00017ea0) pec_content_pane_ParamLimits

0xad01,	// (0x00017ea0) pec_content_pane

0xa19e,	// (0x0001733d) scroll_pane_cp015

0xad13,	// (0x00017eb2) pec_attribute_pane_ParamLimits

0xad13,	// (0x00017eb2) pec_attribute_pane

0x371f,	// (0x000108be) pec_content_pane_g1_ParamLimits

0x371f,	// (0x000108be) pec_content_pane_g1

0xad23,	// (0x00017ec2) pec_content_pane_t1_ParamLimits

0xad23,	// (0x00017ec2) pec_content_pane_t1

0xad35,	// (0x00017ed4) pec_content_pane_t2_ParamLimits

0xad35,	// (0x00017ed4) pec_content_pane_t2

0x0001,

0xf510,	// (0x0001c6af) pec_content_pane_t_ParamLimits

0xf510,	// (0x0001c6af) pec_content_pane_t

0x372b,	// (0x000108ca) list_single_graphic_pane_cp01_ParamLimits

0x372b,	// (0x000108ca) list_single_graphic_pane_cp01

0x9be3,	// (0x00016d82) bg_popup_sub_pane_cp04

0xad47,	// (0x00017ee6) popup_mup_playback_window_g1

0xad53,	// (0x00017ef2) popup_mup_playback_window_t1

0xad68,	// (0x00017f07) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0001c6b4) popup_mup_playback_window_t

0xad9f,	// (0x00017f3e) main_image_pane_g1_ParamLimits

0xad9f,	// (0x00017f3e) main_image_pane_g1

0xade2,	// (0x00017f81) scroll_pane_cp018_ParamLimits

0xade2,	// (0x00017f81) scroll_pane_cp018

0xadfa,	// (0x00017f99) scroll_pane_cp016_ParamLimits

0xadfa,	// (0x00017f99) scroll_pane_cp016

0x37f8,	// (0x00010997) smil2_image_pane_ParamLimits

0x37f8,	// (0x00010997) smil2_image_pane

0x3828,	// (0x000109c7) smil2_root_pane_ParamLimits

0x3828,	// (0x000109c7) smil2_root_pane

0x3860,	// (0x000109ff) smil2_text_pane_ParamLimits

0x3860,	// (0x000109ff) smil2_text_pane

0x9988,	// (0x00016b27) bg_list_pane_cp06

0xae36,	// (0x00017fd5) grid_radio_pane

0x9988,	// (0x00016b27) bg_popup_window_pane_cp06

0xae3e,	// (0x00017fdd) main_fmradio_pane_t1

0xa80b,	// (0x000179aa) heading_pane_cp04

0xae4c,	// (0x00017feb) main_fmradio_pane_t2

0xbe11,	// (0x00018fb0) popup_cale_lunar_info_window_g1

0xae5a,	// (0x00017ff9) main_fmradio_pane_t3

0xbe19,	// (0x00018fb8) popup_cale_lunar_info_window_g2

0xae68,	// (0x00018007) main_fmradio_pane_t4

0x0001,

0xae76,	// (0x00018015) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0001c78f) popup_cale_lunar_info_window_g

0xf52a,	// (0x0001c6c9) main_fmradio_pane_t

0xae84,	// (0x00018023) wait_bar_pane_cp03

0xae8c,	// (0x0001802b) cell_fmradio_pane_ParamLimits

0xae8c,	// (0x0001802b) cell_fmradio_pane

0xace5,	// (0x00017e84) cell_fmradio_pane_g1_ParamLimits

0xace5,	// (0x00017e84) cell_fmradio_pane_g1

0x9988,	// (0x00016b27) grid_highlight_pane_cp011

0xae9f,	// (0x0001803e) poc_content_pane_ParamLimits

0xae9f,	// (0x0001803e) poc_content_pane

0xaeb1,	// (0x00018050) scroll_pane_cp019

0x38e0,	// (0x00010a7f) popup_call_poc_act_window_ParamLimits

0x38e0,	// (0x00010a7f) popup_call_poc_act_window

0x3904,	// (0x00010aa3) popup_call_poc_inact_window_ParamLimits

0x3904,	// (0x00010aa3) popup_call_poc_inact_window

0xf5c7,	// (0x0001c766) bg_popup_call_poc_act_pane_g

0xbd89,	// (0x00018f28) bg_popup_call_poc_inact_pane_g1

0xbd91,	// (0x00018f30) bg_popup_call_poc_inact_pane_g2

0xaeb9,	// (0x00018058) popup_call_poc_act_window_g2

0xbd99,	// (0x00018f38) bg_popup_call_poc_inact_pane_g3

0xbda1,	// (0x00018f40) bg_popup_call_poc_inact_pane_g4

0xbda9,	// (0x00018f48) bg_popup_call_poc_inact_pane_g5

0xaec1,	// (0x00018060) popup_call_poc_act_window_t1_ParamLimits

0xaec1,	// (0x00018060) popup_call_poc_act_window_t1

0xaee9,	// (0x00018088) popup_call_poc_act_window_t2_ParamLimits

0xaee9,	// (0x00018088) popup_call_poc_act_window_t2

0xaf11,	// (0x000180b0) popup_call_poc_act_window_t3_ParamLimits

0xaf11,	// (0x000180b0) popup_call_poc_act_window_t3

0xaf39,	// (0x000180d8) popup_call_poc_act_window_t4_ParamLimits

0xaf39,	// (0x000180d8) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0001c6d4) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0001c6d4) popup_call_poc_act_window_t

0xbdb1,	// (0x00018f50) bg_popup_call_poc_inact_pane_g6

0xbdb9,	// (0x00018f58) bg_popup_call_poc_inact_pane_g7

0xbdc1,	// (0x00018f60) bg_popup_call_poc_inact_pane_g8

0xaf4b,	// (0x000180ea) popup_call_poc_inact_window_g2

0xbdc9,	// (0x00018f68) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0001c753) bg_popup_call_poc_inact_pane_g

0xaf53,	// (0x000180f2) popup_call_poc_inact_window_t1_ParamLimits

0xaf53,	// (0x000180f2) popup_call_poc_inact_window_t1

0xaf68,	// (0x00018107) popup_call_poc_inact_window_t2_ParamLimits

0xaf68,	// (0x00018107) popup_call_poc_inact_window_t2

0xaf7d,	// (0x0001811c) popup_call_poc_inact_window_t3_ParamLimits

0xaf7d,	// (0x0001811c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0001c6dd) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0001c6dd) popup_call_poc_inact_window_t

0xbf81,	// (0x00019120) context_pane_ParamLimits

0x4137,	// (0x000112d6) signal_pane_ParamLimits

0xaa77,	// (0x00017c16) main_call2_pane

0xbf6f,	// (0x0001910e) popup_phob_thumbnail2_window_ParamLimits

0xbf6f,	// (0x0001910e) popup_phob_thumbnail2_window

0xac95,	// (0x00017e34) aid_hotspot_pointer_arrow_pane

0xac9d,	// (0x00017e3c) aid_hotspot_pointer_hand_pane

0x3c4d,	// (0x00010dec) phob_pre_status_pane_g5

0x1cd4,	// (0x0000ee73) cams_zoom_pane_ParamLimits

0x1ce3,	// (0x0000ee82) image_vga_pane_ParamLimits

0x1cfd,	// (0x0000ee9c) main_camera_pane_g1_ParamLimits

0x1d0f,	// (0x0000eeae) main_camera_pane_g2_ParamLimits

0x1d1f,	// (0x0000eebe) main_camera_pane_g3_ParamLimits

0x1d2f,	// (0x0000eece) main_camera_pane_g4_ParamLimits

0x1d3f,	// (0x0000eede) main_camera_pane_g5_ParamLimits

0x1d4f,	// (0x0000eeee) main_camera_pane_g6_ParamLimits

0x1d61,	// (0x0000ef00) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0001c3dc) main_camera_pane_g_ParamLimits

0x1d71,	// (0x0000ef10) main_camera_pane_t1_ParamLimits

0x1d87,	// (0x0000ef26) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0001c3ed) main_camera_pane_t_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_preview_window_pane_cp01_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_preview_window_pane_cp01

0xaf92,	// (0x00018131) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf92,	// (0x00018131) popup_phob_thumbnail2_window_g1

0x9988,	// (0x00016b27) call2_cli_visual_pane

0x3938,	// (0x00010ad7) popup_call2_audio_conf_window_ParamLimits

0x3938,	// (0x00010ad7) popup_call2_audio_conf_window

0x3958,	// (0x00010af7) popup_call2_audio_first_window_ParamLimits

0x3958,	// (0x00010af7) popup_call2_audio_first_window

0x39ee,	// (0x00010b8d) popup_call2_audio_in_window_ParamLimits

0x39ee,	// (0x00010b8d) popup_call2_audio_in_window

0x3a36,	// (0x00010bd5) popup_call2_audio_out_window_ParamLimits

0x3a36,	// (0x00010bd5) popup_call2_audio_out_window

0x3aa0,	// (0x00010c3f) popup_call2_audio_second_window_ParamLimits

0x3aa0,	// (0x00010c3f) popup_call2_audio_second_window

0x3b06,	// (0x00010ca5) popup_call2_audio_wait_window_ParamLimits

0x3b06,	// (0x00010ca5) popup_call2_audio_wait_window

0x9988,	// (0x00016b27) bg_popup_call2_act_pane_cp03

0x9bc5,	// (0x00016d64) list_conf_pane_cp

0xaf9e,	// (0x0001813d) popup_call2_audio_conf_window_t1

0xa868,	// (0x00017a07) list_single_graphic_popup_conf2_pane_ParamLimits

0xa868,	// (0x00017a07) list_single_graphic_popup_conf2_pane

0xa87b,	// (0x00017a1a) list_highlight_pane_cp04

0xafac,	// (0x0001814b) list_single_graphic_popup_conf2_pane_g1

0xa88c,	// (0x00017a2b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0001c6e4) list_single_graphic_popup_conf2_pane_g

0xafb6,	// (0x00018155) list_single_graphic_popup_conf2_pane_t1

0xafc4,	// (0x00018163) bg_popup_call2_act_pane_cp01_ParamLimits

0xafc4,	// (0x00018163) bg_popup_call2_act_pane_cp01

0xb04e,	// (0x000181ed) call_type_pane_cp05_ParamLimits

0xb04e,	// (0x000181ed) call_type_pane_cp05

0xb0a2,	// (0x00018241) popup_call2_audio_second_window_g1_ParamLimits

0xb0a2,	// (0x00018241) popup_call2_audio_second_window_g1

0xb0f6,	// (0x00018295) popup_call2_audio_second_window_g2_ParamLimits

0xb0f6,	// (0x00018295) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0001c6e9) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0001c6e9) popup_call2_audio_second_window_g

0xb15b,	// (0x000182fa) popup_call2_audio_second_window_t1_ParamLimits

0xb15b,	// (0x000182fa) popup_call2_audio_second_window_t1

0xb216,	// (0x000183b5) popup_call2_audio_second_window_t2_ParamLimits

0xb216,	// (0x000183b5) popup_call2_audio_second_window_t2

0xb269,	// (0x00018408) popup_call2_audio_second_window_t3_ParamLimits

0xb269,	// (0x00018408) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0001c6f0) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0001c6f0) popup_call2_audio_second_window_t

0x9988,	// (0x00016b27) bg_popup_call2_in_pane_cp02

0x9992,	// (0x00016b31) call_type_pane_cp04

0x999a,	// (0x00016b39) popup_call2_audio_wait_window_g1

0x99a2,	// (0x00016b41) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c2c9) popup_call2_audio_wait_window_g

0x99aa,	// (0x00016b49) popup_call2_audio_wait_window_t3

0xb35c,	// (0x000184fb) bg_popup_call2_act_pane_ParamLimits

0xb35c,	// (0x000184fb) bg_popup_call2_act_pane

0xb41c,	// (0x000185bb) call_type_pane_cp03_ParamLimits

0xb41c,	// (0x000185bb) call_type_pane_cp03

0xb480,	// (0x0001861f) popup_call2_audio_first_window_g1_ParamLimits

0xb480,	// (0x0001861f) popup_call2_audio_first_window_g1

0xb4f0,	// (0x0001868f) popup_call2_audio_first_window_g2_ParamLimits

0xb4f0,	// (0x0001868f) popup_call2_audio_first_window_g2

0xab48,	// (0x00017ce7) popup_call2_audio_first_window_g3_ParamLimits

0xab48,	// (0x00017ce7) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0001c6f9) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0001c6f9) popup_call2_audio_first_window_g

0xb5ce,	// (0x0001876d) popup_call2_audio_first_window_t1_ParamLimits

0xb5ce,	// (0x0001876d) popup_call2_audio_first_window_t1

0xb6d1,	// (0x00018870) popup_call2_audio_first_window_t4_ParamLimits

0xb6d1,	// (0x00018870) popup_call2_audio_first_window_t4

0xb7b4,	// (0x00018953) popup_call2_audio_first_window_t5_ParamLimits

0xb7b4,	// (0x00018953) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0001c704) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0001c704) popup_call2_audio_first_window_t

0x9bdb,	// (0x00016d7a) bg_popup_call2_act_pane_g1

0xbe21,	// (0x00018fc0) popup_cale_lunar_info_window_t1

0xbe2f,	// (0x00018fce) popup_cale_lunar_info_window_t2

0xbe3d,	// (0x00018fdc) popup_cale_lunar_info_window_t3

0x9988,	// (0x00016b27) bg_popup_call2_bubble_pane

0xb8b5,	// (0x00018a54) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8b5,	// (0x00018a54) bg_popup_call2_in_pane_cp01

0x9664,	// (0x00016803) call_type_pane_cp02

0xb8fd,	// (0x00018a9c) popup_call2_audio_out_window_g1_ParamLimits

0xb8fd,	// (0x00018a9c) popup_call2_audio_out_window_g1

0xb929,	// (0x00018ac8) popup_call2_audio_out_window_g2_ParamLimits

0xb929,	// (0x00018ac8) popup_call2_audio_out_window_g2

0xb951,	// (0x00018af0) popup_call2_audio_out_window_g3_ParamLimits

0xb951,	// (0x00018af0) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0001c70d) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0001c70d) popup_call2_audio_out_window_g

0xb98c,	// (0x00018b2b) popup_call2_audio_out_window_t1_ParamLimits

0xb98c,	// (0x00018b2b) popup_call2_audio_out_window_t1

0xb9eb,	// (0x00018b8a) popup_call2_audio_out_window_t2_ParamLimits

0xb9eb,	// (0x00018b8a) popup_call2_audio_out_window_t2

0xba3f,	// (0x00018bde) popup_call2_audio_out_window_t3_ParamLimits

0xba3f,	// (0x00018bde) popup_call2_audio_out_window_t3

0xba55,	// (0x00018bf4) popup_call2_audio_out_window_t4_ParamLimits

0xba55,	// (0x00018bf4) popup_call2_audio_out_window_t4

0xba6b,	// (0x00018c0a) popup_call2_audio_out_window_t5_ParamLimits

0xba6b,	// (0x00018c0a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0001c716) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0001c716) popup_call2_audio_out_window_t

0xbacf,	// (0x00018c6e) bg_popup_call2_in_pane_ParamLimits

0xbacf,	// (0x00018c6e) bg_popup_call2_in_pane

0xbb2b,	// (0x00018cca) popup_call2_audio_in_window_g1_ParamLimits

0xbb2b,	// (0x00018cca) popup_call2_audio_in_window_g1

0xbb63,	// (0x00018d02) popup_call2_audio_in_window_g2_ParamLimits

0xbb63,	// (0x00018d02) popup_call2_audio_in_window_g2

0xbb9b,	// (0x00018d3a) popup_call2_audio_in_window_g3_ParamLimits

0xbb9b,	// (0x00018d3a) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0001c723) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0001c723) popup_call2_audio_in_window_g

0xbbf3,	// (0x00018d92) popup_call2_audio_in_window_t1_ParamLimits

0xbbf3,	// (0x00018d92) popup_call2_audio_in_window_t1

0xbc73,	// (0x00018e12) popup_call2_audio_in_window_t2_ParamLimits

0xbc73,	// (0x00018e12) popup_call2_audio_in_window_t2

0xbcf3,	// (0x00018e92) popup_call2_audio_in_window_t3_ParamLimits

0xbcf3,	// (0x00018e92) popup_call2_audio_in_window_t3

0xbd0d,	// (0x00018eac) popup_call2_audio_in_window_t4_ParamLimits

0xbd0d,	// (0x00018eac) popup_call2_audio_in_window_t4

0xbd1f,	// (0x00018ebe) popup_call2_audio_in_window_t5_ParamLimits

0xbd1f,	// (0x00018ebe) popup_call2_audio_in_window_t5

0xbd34,	// (0x00018ed3) popup_call2_audio_in_window_t6_ParamLimits

0xbd34,	// (0x00018ed3) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0001c72c) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0001c72c) popup_call2_audio_in_window_t

0x9bdb,	// (0x00016d7a) bg_popup_call2_in_pane_g1

0xbe4b,	// (0x00018fea) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0001c794) popup_cale_lunar_info_window_t

0x9be3,	// (0x00016d82) bg_popup_call2_rect_pane_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_call2_rect_pane

0x9988,	// (0x00016b27) call2_cli_visual_graphic_pane

0x9988,	// (0x00016b27) call2_cli_visual_text_pane

0xc021,	// (0x000191c0) smil_status_volume_pane_g3

0x0002,

0x9d55,	// (0x00016ef4) call2_cli_visual_graphic_pane_g1

0x9d55,	// (0x00016ef4) call2_cli_visual_graphic_pane_g2

0x9d55,	// (0x00016ef4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001c739) call2_cli_visual_graphic_pane_g

0xbd49,	// (0x00018ee8) bg_popup_call2_rect_pane_g1

0x9de1,	// (0x00016f80) bg_popup_call2_rect_pane_g2

0xbd51,	// (0x00018ef0) bg_popup_call2_rect_pane_g3

0xbd59,	// (0x00018ef8) bg_popup_call2_rect_pane_g4

0xbd61,	// (0x00018f00) bg_popup_call2_rect_pane_g5

0xbd69,	// (0x00018f08) bg_popup_call2_rect_pane_g6

0xbd71,	// (0x00018f10) bg_popup_call2_rect_pane_g7

0xbd79,	// (0x00018f18) bg_popup_call2_rect_pane_g8

0xbd81,	// (0x00018f20) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001c740) bg_popup_call2_rect_pane_g

0xbd89,	// (0x00018f28) bg_popup_call2_bubble_pane_g1

0xbd91,	// (0x00018f30) bg_popup_call2_bubble_pane_g2

0xbd99,	// (0x00018f38) bg_popup_call2_bubble_pane_g3

0xbda1,	// (0x00018f40) bg_popup_call2_bubble_pane_g4

0xbda9,	// (0x00018f48) bg_popup_call2_bubble_pane_g5

0xbdb1,	// (0x00018f50) bg_popup_call2_bubble_pane_g6

0xbdb9,	// (0x00018f58) bg_popup_call2_bubble_pane_g7

0xbdc1,	// (0x00018f60) bg_popup_call2_bubble_pane_g8

0xbdc9,	// (0x00018f68) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0001c753) bg_popup_call2_bubble_pane_g

0x187d,	// (0x0000ea1c) aid_cale_week_size_cell_pane

0x1d9d,	// (0x0000ef3c) aid_cams_cif_uncrop_pane_ParamLimits

0x1d9d,	// (0x0000ef3c) aid_cams_cif_uncrop_pane

0x1f56,	// (0x0000f0f5) aid_cams_size_cell_ParamLimits

0x1f56,	// (0x0000f0f5) aid_cams_size_cell

0x1f6a,	// (0x0000f109) grid_cams_pane_ParamLimits

0x1f84,	// (0x0000f123) linegrid_cams_pane_ParamLimits

0x209c,	// (0x0000f23b) call_video_pane_t1

0x20ae,	// (0x0000f24d) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0001c440) call_video_pane_t

0x244d,	// (0x0000f5ec) aid_cale_month_size_cell_pane_ParamLimits

0x244d,	// (0x0000f5ec) aid_cale_month_size_cell_pane

0xf63e,	// (0x0001c7dd) smil_status_volume_pane_g

0xc02e,	// (0x000191cd) volume_smil_pane_ParamLimits

0x9509,	// (0x000166a8) aid_popup2_width_pane

0x17df,	// (0x0000e97e) cell_qdial_pane_g4_ParamLimits

0x17df,	// (0x0000e97e) cell_qdial_pane_g4

0x2ecd,	// (0x0001006c) aid_blid_cardinal_pane_ParamLimits

0x2ed9,	// (0x00010078) aid_blid_destination_pane_ParamLimits

0x2ed9,	// (0x00010078) aid_blid_destination_pane

0x9be3,	// (0x00016d82) bg_popup_call_poc_act_pane_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_call_poc_act_pane

0x9be3,	// (0x00016d82) bg_popup_call_poc_inact_pane_ParamLimits

0x9be3,	// (0x00016d82) bg_popup_call_poc_inact_pane

0xbdd1,	// (0x00018f70) bg_popup_call_poc_act_pane_g1

0xbdd9,	// (0x00018f78) bg_popup_call_poc_act_pane_g2

0xbde1,	// (0x00018f80) bg_popup_call_poc_act_pane_g3

0xbda1,	// (0x00018f40) bg_popup_call_poc_act_pane_g4

0xbda9,	// (0x00018f48) bg_popup_call_poc_act_pane_g5

0xbde9,	// (0x00018f88) bg_popup_call_poc_act_pane_g6

0xbdb9,	// (0x00018f58) bg_popup_call_poc_act_pane_g7

0xbdf1,	// (0x00018f90) bg_popup_call_poc_act_pane_g8

0x9988,	// (0x00016b27) main_usb_pane

0xbf4a,	// (0x000190e9) popup_cale_lunar_info_window

0x22f9,	// (0x0000f498) im_reading_pane_t1_ParamLimits

0xa0f6,	// (0x00017295) list_im_pane_ParamLimits

0xa107,	// (0x000172a6) scroll_pane_cp07_ParamLimits

0x9988,	// (0x00016b27) grid_highlight_pane_cp012

0x9be3,	// (0x00016d82) mup_scale_pane_ParamLimits

0xace5,	// (0x00017e84) main_usb_pane_g1_ParamLimits

0xace5,	// (0x00017e84) main_usb_pane_g1

0x3b62,	// (0x00010d01) main_usb_pane_g2_ParamLimits

0x3b62,	// (0x00010d01) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0001c77d) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0001c77d) main_usb_pane_g

0x3b78,	// (0x00010d17) main_usb_pane_t1_ParamLimits

0x3b78,	// (0x00010d17) main_usb_pane_t1

0x3b8a,	// (0x00010d29) main_usb_pane_t2_ParamLimits

0x3b8a,	// (0x00010d29) main_usb_pane_t2

0x3b9c,	// (0x00010d3b) main_usb_pane_t3_ParamLimits

0x3b9c,	// (0x00010d3b) main_usb_pane_t3

0x3bae,	// (0x00010d4d) main_usb_pane_t4_ParamLimits

0x3bae,	// (0x00010d4d) main_usb_pane_t4

0x3bc0,	// (0x00010d5f) main_usb_pane_t5_ParamLimits

0x3bc0,	// (0x00010d5f) main_usb_pane_t5

0x3bd2,	// (0x00010d71) main_usb_pane_t6_ParamLimits

0x3bd2,	// (0x00010d71) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0001c782) main_usb_pane_t_ParamLimits

0x2e7c,	// (0x0001001b) aid_text_placing

0x2e85,	// (0x00010024) main_location2_pane_t1_ParamLimits

0x2e97,	// (0x00010036) main_location2_pane_t2_ParamLimits

0x2ea9,	// (0x00010048) main_location2_pane_t3_ParamLimits

0x2ebb,	// (0x0001005a) main_location2_pane_t4_ParamLimits

0x2ebb,	// (0x0001005a) main_location2_pane_t4

0xf402,	// (0x0001c5a1) main_location2_pane_t_ParamLimits

0x9c1f,	// (0x00016dbe) find_pinb_pane_g2_ParamLimits

0x9c1f,	// (0x00016dbe) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0001c2ef) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0001c2ef) find_pinb_pane_g

0x9c2b,	// (0x00016dca) find_pinb_pane_t1_ParamLimits

0x9c3d,	// (0x00016ddc) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0001c2f4) find_pinb_pane_t_ParamLimits

0x9988,	// (0x00016b27) main_call3_pane

0x2749,	// (0x0000f8e8) cale_month_day_heading_pane_t1_ParamLimits

0x27a7,	// (0x0000f946) cale_month_day_heading_pane_t2_ParamLimits

0x280c,	// (0x0000f9ab) cale_month_day_heading_pane_t3_ParamLimits

0x2871,	// (0x0000fa10) cale_month_day_heading_pane_t4_ParamLimits

0x28d6,	// (0x0000fa75) cale_month_day_heading_pane_t5_ParamLimits

0x293b,	// (0x0000fada) cale_month_day_heading_pane_t6_ParamLimits

0x29a0,	// (0x0000fb3f) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0001c478) cale_month_day_heading_pane_t_ParamLimits

0xa37d,	// (0x0001751c) smil_status_volume_pane

0x365d,	// (0x000107fc) postcard_address_pane_ParamLimits

0x365d,	// (0x000107fc) postcard_address_pane

0x366f,	// (0x0001080e) postcard_message_pane_ParamLimits

0x366f,	// (0x0001080e) postcard_message_pane

0x3b40,	// (0x00010cdf) call2_cli_visual_pane_t1_ParamLimits

0x3b40,	// (0x00010cdf) call2_cli_visual_pane_t1

0x4364,	// (0x00011503) postcard_message_pane_t1_ParamLimits

0x4364,	// (0x00011503) postcard_message_pane_t1

0x434d,	// (0x000114ec) postcard_address_pane_t1_ParamLimits

0x434d,	// (0x000114ec) postcard_address_pane_t1

0x4339,	// (0x000114d8) popup_call3_audio_in_window_ParamLimits

0x4339,	// (0x000114d8) popup_call3_audio_in_window

0x41c4,	// (0x00011363) bg_popup_call3_in_pane_ParamLimits

0x41c4,	// (0x00011363) bg_popup_call3_in_pane

0x423a,	// (0x000113d9) popup_call3_audio_in_window_g1_ParamLimits

0x423a,	// (0x000113d9) popup_call3_audio_in_window_g1

0x425a,	// (0x000113f9) popup_call3_audio_in_window_g2_ParamLimits

0x425a,	// (0x000113f9) popup_call3_audio_in_window_g2

0x427a,	// (0x00011419) popup_call3_audio_in_window_g3_ParamLimits

0x427a,	// (0x00011419) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0001c7e4) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0001c7e4) popup_call3_audio_in_window_g

0x42ab,	// (0x0001144a) popup_call3_audio_in_window_t1_ParamLimits

0x42ab,	// (0x0001144a) popup_call3_audio_in_window_t1

0x42e9,	// (0x00011488) popup_call3_audio_in_window_t2_ParamLimits

0x42e9,	// (0x00011488) popup_call3_audio_in_window_t2

0x4327,	// (0x000114c6) popup_call3_audio_in_window_t3_ParamLimits

0x4327,	// (0x000114c6) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0001c7ed) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0001c7ed) popup_call3_audio_in_window_t

0xaa77,	// (0x00017c16) bg_popup_call3_rect_pane

0xbd49,	// (0x00018ee8) bg_popup_call3_rect_pane_g1

0x9de1,	// (0x00016f80) bg_popup_call3_rect_pane_g2

0xbd51,	// (0x00018ef0) bg_popup_call3_rect_pane_g3

0xbd59,	// (0x00018ef8) bg_popup_call3_rect_pane_g4

0xbd61,	// (0x00018f00) bg_popup_call3_rect_pane_g5

0xbd69,	// (0x00018f08) bg_popup_call3_rect_pane_g6

0xbd71,	// (0x00018f10) bg_popup_call3_rect_pane_g7

0x328f,	// (0x0001042e) mup_visualizer_osc_pane

0xab56,	// (0x00017cf5) mup_visualizer_spec_pane

0x41f4,	// (0x00011393) call3_video_qcif_pane_ParamLimits

0x41f4,	// (0x00011393) call3_video_qcif_pane

0x4207,	// (0x000113a6) call3_video_qcif_uncrop_pane_ParamLimits

0x4207,	// (0x000113a6) call3_video_qcif_uncrop_pane

0x4215,	// (0x000113b4) call3_video_subqcif_pane_ParamLimits

0x4215,	// (0x000113b4) call3_video_subqcif_pane

0x4229,	// (0x000113c8) call3_video_subqcif_uncrop_pane_ParamLimits

0x4229,	// (0x000113c8) call3_video_subqcif_uncrop_pane

0x429a,	// (0x00011439) popup_call3_audio_in_window_g4_ParamLimits

0x429a,	// (0x00011439) popup_call3_audio_in_window_g4

0x41b3,	// (0x00011352) mup_spec_half_pane

0x41bc,	// (0x0001135b) mup_spec_half_pane_cp

0xbfe1,	// (0x00019180) mup_osc_middle_pane

0xbfea,	// (0x00019189) mup_visualizer_osc_pane_g1

0x4193,	// (0x00011332) mup_spec_bar_pane_ParamLimits

0x4193,	// (0x00011332) mup_spec_bar_pane

0xbfce,	// (0x0001916d) mup_spec_bar_pane_g1

0xbfd8,	// (0x00019177) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001c7d8) mup_spec_bar_pane_g

0x187d,	// (0x0000ea1c) aid_cale_week_size_cell_pane_ParamLimits

0x1890,	// (0x0000ea2f) bg_cale_heading_pane_ParamLimits

0x9e5d,	// (0x00016ffc) bg_cale_pane_cp01_ParamLimits

0x18a4,	// (0x0000ea43) cale_week_corner_pane_ParamLimits

0x18ba,	// (0x0000ea59) cale_week_day_heading_pane_ParamLimits

0x18ce,	// (0x0000ea6d) cale_week_scroll_pane_g1_ParamLimits

0x18df,	// (0x0000ea7e) cale_week_scroll_pane_g2_ParamLimits

0x18f0,	// (0x0000ea8f) cale_week_scroll_pane_g3_ParamLimits

0x1901,	// (0x0000eaa0) cale_week_scroll_pane_g4_ParamLimits

0x1912,	// (0x0000eab1) cale_week_scroll_pane_g5_ParamLimits

0x1923,	// (0x0000eac2) cale_week_scroll_pane_g6_ParamLimits

0x1934,	// (0x0000ead3) cale_week_scroll_pane_g7_ParamLimits

0x1945,	// (0x0000eae4) cale_week_scroll_pane_g8_ParamLimits

0x1956,	// (0x0000eaf5) cale_week_scroll_pane_g9_ParamLimits

0x1967,	// (0x0000eb06) cale_week_scroll_pane_g10_ParamLimits

0x1978,	// (0x0000eb17) cale_week_scroll_pane_g11_ParamLimits

0x1989,	// (0x0000eb28) cale_week_scroll_pane_g12_ParamLimits

0x199a,	// (0x0000eb39) cale_week_scroll_pane_g13_ParamLimits

0x19ab,	// (0x0000eb4a) cale_week_scroll_pane_g14_ParamLimits

0x19bc,	// (0x0000eb5b) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0001c380) cale_week_scroll_pane_g_ParamLimits

0x19cd,	// (0x0000eb6c) cale_week_time_pane_ParamLimits

0x19de,	// (0x0000eb7d) grid_cale_week_pane_ParamLimits

0x9e76,	// (0x00017015) listscroll_cale_week_pane_t1

0x19f1,	// (0x0000eb90) scroll_pane_cp08_ParamLimits

0x248e,	// (0x0000f62d) cale_month_corner_pane_ParamLimits

0xa31d,	// (0x000174bc) cale_month_pane_t1

0x2710,	// (0x0000f8af) cale_month_week_pane_ParamLimits

0x2cc8,	// (0x0000fe67) popup_call_status_window_g1_ParamLimits

0x2cdc,	// (0x0000fe7b) popup_call_status_window_g2_ParamLimits

0x2cf0,	// (0x0000fe8f) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0001c528) popup_call_status_window_g_ParamLimits

0xa788,	// (0x00017927) aid_call2_pane

0x34f6,	// (0x00010695) msg_header_pane_g1

0x365d,	// (0x000107fc) postcard_address2_pane_ParamLimits

0x365d,	// (0x000107fc) postcard_address2_pane

0x366f,	// (0x0001080e) postcard_message2_pane_ParamLimits

0x366f,	// (0x0001080e) postcard_message2_pane

0x4145,	// (0x000112e4) message2_row_pane_ParamLimits

0x4145,	// (0x000112e4) message2_row_pane

0x4161,	// (0x00011300) address2_row_pane_ParamLimits

0x4161,	// (0x00011300) address2_row_pane

0xbf9c,	// (0x0001913b) postcard_message2_row_pane_g1

0xbfa4,	// (0x00019143) postcard_message2_row_pane_t1

0xbf9c,	// (0x0001913b) address2_row_pane_g1

0xbfa4,	// (0x00019143) address2_row_pane_t1

0x1c99,	// (0x0000ee38) aid_size_cell_vorec

0x9988,	// (0x00016b27) main_rss_pane

0x4174,	// (0x00011313) rss_list_single_pane_ParamLimits

0x4174,	// (0x00011313) rss_list_single_pane

0xbfb2,	// (0x00019151) rss_list_single_pane_t1

0xbfc0,	// (0x0001915f) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0001c7d3) rss_list_single_pane_t

0x9988,	// (0x00016b27) main_camera2_pane

0x9988,	// (0x00016b27) main_video2_pane

0x43dd,	// (0x0001157c) cams_zoom_pane_cp2_ParamLimits

0x43dd,	// (0x0001157c) cams_zoom_pane_cp2

0x43fd,	// (0x0001159c) image2_vga_pane_ParamLimits

0x43fd,	// (0x0001159c) image2_vga_pane

0x444e,	// (0x000115ed) main_camera2_pane_g1_ParamLimits

0x444e,	// (0x000115ed) main_camera2_pane_g1

0x446e,	// (0x0001160d) main_camera2_pane_g2_ParamLimits

0x446e,	// (0x0001160d) main_camera2_pane_g2

0x448e,	// (0x0001162d) main_camera2_pane_g3_ParamLimits

0x448e,	// (0x0001162d) main_camera2_pane_g3

0x44ae,	// (0x0001164d) main_camera2_pane_g4_ParamLimits

0x44ae,	// (0x0001164d) main_camera2_pane_g4

0x44ce,	// (0x0001166d) main_camera2_pane_g5_ParamLimits

0x44ce,	// (0x0001166d) main_camera2_pane_g5

0x44ee,	// (0x0001168d) main_camera2_pane_g6_ParamLimits

0x44ee,	// (0x0001168d) main_camera2_pane_g6

0x450e,	// (0x000116ad) main_camera2_pane_g7_ParamLimits

0x450e,	// (0x000116ad) main_camera2_pane_g7

0x452e,	// (0x000116cd) main_camera2_pane_g8_ParamLimits

0x452e,	// (0x000116cd) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0001c7f4) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0001c7f4) main_camera2_pane_g

0x456e,	// (0x0001170d) main_camera2_pane_t1_ParamLimits

0x456e,	// (0x0001170d) main_camera2_pane_t1

0x45a3,	// (0x00011742) main_camera2_pane_t2_ParamLimits

0x45a3,	// (0x00011742) main_camera2_pane_t2

0x45c9,	// (0x00011768) main_camera2_pane_t3_ParamLimits

0x45c9,	// (0x00011768) main_camera2_pane_t3

0x4627,	// (0x000117c6) main_camera2_pane_t4_ParamLimits

0x4627,	// (0x000117c6) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0001c807) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0001c807) main_camera2_pane_t

0x46b9,	// (0x00011858) cams_zoom_pane_cp4_ParamLimits

0x46b9,	// (0x00011858) cams_zoom_pane_cp4

0x46cf,	// (0x0001186e) image2_cif_pane_ParamLimits

0x46cf,	// (0x0001186e) image2_cif_pane

0x46fa,	// (0x00011899) image2_subqcif_pane_ParamLimits

0x46fa,	// (0x00011899) image2_subqcif_pane

0x4714,	// (0x000118b3) main_video2_pane_g1_ParamLimits

0x4714,	// (0x000118b3) main_video2_pane_g1

0x472e,	// (0x000118cd) main_video2_pane_g2_ParamLimits

0x472e,	// (0x000118cd) main_video2_pane_g2

0x4744,	// (0x000118e3) main_video2_pane_g3_ParamLimits

0x4744,	// (0x000118e3) main_video2_pane_g3

0x475a,	// (0x000118f9) main_video2_pane_g4_ParamLimits

0x475a,	// (0x000118f9) main_video2_pane_g4

0x4770,	// (0x0001190f) main_video2_pane_g5_ParamLimits

0x4770,	// (0x0001190f) main_video2_pane_g5

0x4786,	// (0x00011925) main_video2_pane_g6_ParamLimits

0x4786,	// (0x00011925) main_video2_pane_g6

0x0005,

0xf677,	// (0x0001c816) main_video2_pane_g_ParamLimits

0xf677,	// (0x0001c816) main_video2_pane_g

0x47a0,	// (0x0001193f) main_video2_pane_t1_ParamLimits

0x47a0,	// (0x0001193f) main_video2_pane_t1

0x47c4,	// (0x00011963) main_video2_pane_t2_ParamLimits

0x47c4,	// (0x00011963) main_video2_pane_t2

0x4812,	// (0x000119b1) main_video2_pane_t3_ParamLimits

0x4812,	// (0x000119b1) main_video2_pane_t3

0x0002,

0xf684,	// (0x0001c823) main_video2_pane_t_ParamLimits

0xf684,	// (0x0001c823) main_video2_pane_t

0x3c8d,	// (0x00010e2c) call_muted_g2

0x0001,

0xf626,	// (0x0001c7c5) call_muted_g

0x9988,	// (0x00016b27) main_mup2_pane

0x4856,	// (0x000119f5) main_mup2_pane_g1_ParamLimits

0x4856,	// (0x000119f5) main_mup2_pane_g1

0x4862,	// (0x00011a01) main_mup2_pane_g2_ParamLimits

0x4862,	// (0x00011a01) main_mup2_pane_g2

0xc152,	// (0x000192f1) main_mup_pane_g13_cp1

0xc15a,	// (0x000192f9) mup_volume_pane_cp1

0x487e,	// (0x00011a1d) main_mup2_pane_g4_ParamLimits

0x487e,	// (0x00011a1d) main_mup2_pane_g4

0x4890,	// (0x00011a2f) main_mup2_pane_g5_ParamLimits

0x4890,	// (0x00011a2f) main_mup2_pane_g5

0x48a2,	// (0x00011a41) main_mup2_pane_g6_ParamLimits

0x48a2,	// (0x00011a41) main_mup2_pane_g6

0x48b4,	// (0x00011a53) main_mup2_pane_g7_ParamLimits

0x48b4,	// (0x00011a53) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0001c82a) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0001c82a) main_mup2_pane_g

0x48cc,	// (0x00011a6b) main_mup2_pane_t1_ParamLimits

0x48cc,	// (0x00011a6b) main_mup2_pane_t1

0x48e2,	// (0x00011a81) main_mup2_pane_t2_ParamLimits

0x48e2,	// (0x00011a81) main_mup2_pane_t2

0x48f8,	// (0x00011a97) main_mup2_pane_t3_ParamLimits

0x48f8,	// (0x00011a97) main_mup2_pane_t3

0x490e,	// (0x00011aad) main_mup2_pane_t4_ParamLimits

0x490e,	// (0x00011aad) main_mup2_pane_t4

0x4926,	// (0x00011ac5) main_mup2_pane_t5_ParamLimits

0x4926,	// (0x00011ac5) main_mup2_pane_t5

0x493e,	// (0x00011add) main_mup2_pane_t6_ParamLimits

0x493e,	// (0x00011add) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0001c839) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0001c839) main_mup2_pane_t

0x496e,	// (0x00011b0d) mup2_visualizer_pane_ParamLimits

0x496e,	// (0x00011b0d) mup2_visualizer_pane

0x499c,	// (0x00011b3b) mup_progress_pane_cp_ParamLimits

0x499c,	// (0x00011b3b) mup_progress_pane_cp

0xc134,	// (0x000192d3) mup_volume_pane_cp_ParamLimits

0xc134,	// (0x000192d3) mup_volume_pane_cp

0x49b0,	// (0x00011b4f) mup2_visualizer_pane_g1_ParamLimits

0x49b0,	// (0x00011b4f) mup2_visualizer_pane_g1

0xc073,	// (0x00019212) mup2_visualizer_pane_g2_ParamLimits

0xc073,	// (0x00019212) mup2_visualizer_pane_g2

0x49c7,	// (0x00011b66) mup2_visualizer_pane_g3_ParamLimits

0x49c7,	// (0x00011b66) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0001c846) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0001c846) mup2_visualizer_pane_g

0xae2e,	// (0x00017fcd) aid_size_cell_fmradio

0x3e3f,	// (0x00010fde) aid_height_parent_landcape

0xa185,	// (0x00017324) wml_content_pane_cp

0xa18d,	// (0x0001732c) wml_tabs_pane

0xa196,	// (0x00017335) popup_wml_miniature_window

0xa19e,	// (0x0001733d) scroll_pane_cp021

0xa1b2,	// (0x00017351) wml_content_pane_comp8

0x9988,	// (0x00016b27) bg_popup_sub_pane_cp05

0xc091,	// (0x00019230) popup_wml_miniature_window_g1

0xc099,	// (0x00019238) wml_miniature_view_pane

0x49d3,	// (0x00011b72) aid_size_wml_view

0x49db,	// (0x00011b7a) wml_miniature_view_pane_g1

0x49e4,	// (0x00011b83) wml_miniature_view_pane_g2

0x49ed,	// (0x00011b8c) wml_miniature_view_pane_g3

0x49f5,	// (0x00011b94) wml_miniature_view_pane_g4

0x49fd,	// (0x00011b9c) wml_miniature_view_pane_g5

0x4a05,	// (0x00011ba4) wml_miniature_view_pane_g6

0x4a0d,	// (0x00011bac) wml_miniature_view_pane_g7

0x4a15,	// (0x00011bb4) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0001c84d) wml_miniature_view_pane_g

0xc0a1,	// (0x00019240) background_graphic_ParamLimits

0xc0a1,	// (0x00019240) background_graphic

0xc0ad,	// (0x0001924c) wml_tabs_2_pane

0xc0b6,	// (0x00019255) wml_tabs_3_pane_ParamLimits

0xc0b6,	// (0x00019255) wml_tabs_3_pane

0xc0c8,	// (0x00019267) wml_tabs_4_pane_ParamLimits

0xc0c8,	// (0x00019267) wml_tabs_4_pane

0xc0de,	// (0x0001927d) wml_tabs_5_pane_ParamLimits

0xc0de,	// (0x0001927d) wml_tabs_5_pane

0xc0f8,	// (0x00019297) wml_tabs_pane_g2_ParamLimits

0xc0f8,	// (0x00019297) wml_tabs_pane_g2

0xc10c,	// (0x000192ab) wml_tabs_pane_g3_ParamLimits

0xc10c,	// (0x000192ab) wml_tabs_pane_g3

0x4a1d,	// (0x00011bbc) wml_tabs_2_active_pane_ParamLimits

0x4a1d,	// (0x00011bbc) wml_tabs_2_active_pane

0x4a31,	// (0x00011bd0) wml_tabs_2_passive_pane_ParamLimits

0x4a31,	// (0x00011bd0) wml_tabs_2_passive_pane

0x4a45,	// (0x00011be4) wml_tabs_3_active_pane_cp_ParamLimits

0x4a45,	// (0x00011be4) wml_tabs_3_active_pane_cp

0x4a5a,	// (0x00011bf9) wml_tabs_3_passive_pane_ParamLimits

0x4a5a,	// (0x00011bf9) wml_tabs_3_passive_pane

0x4a6d,	// (0x00011c0c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a6d,	// (0x00011c0c) wml_tabs_3_passive_pane_cp

0x4a84,	// (0x00011c23) tabs_4_active_pane

0x4a8c,	// (0x00011c2b) tabs_4_passive_pane

0x4a96,	// (0x00011c35) tabs_4_passive_pane_cp

0x4a9e,	// (0x00011c3d) tabs_4_passive_pane_cp2

0x3b5a,	// (0x00010cf9) aid_height_text

0x3265,	// (0x00010404) mup_volume_cont_pane_ParamLimits

0x3265,	// (0x00010404) mup_volume_cont_pane

0x1482,	// (0x0000e621) aid_size_cell_pinb

0x148c,	// (0x0000e62b) aid_size_list_pinb

0x4988,	// (0x00011b27) mup2_volume_cont_pane_ParamLimits

0x4988,	// (0x00011b27) mup2_volume_cont_pane

0xc120,	// (0x000192bf) mup2_volume_cont_pane_g1_ParamLimits

0xc120,	// (0x000192bf) mup2_volume_cont_pane_g1

0x115a,	// (0x0000e2f9) aid_size_cell_touch_ParamLimits

0x115a,	// (0x0000e2f9) aid_size_cell_touch

0x1372,	// (0x0000e511) touch_pane_ParamLimits

0x1372,	// (0x0000e511) touch_pane

0x94f7,	// (0x00016696) main_rss2_pane

0xc162,	// (0x00019301) listscroll_rss2_pane

0xc16b,	// (0x0001930a) rss2_navigation_pane

0xc173,	// (0x00019312) list_rss2_pane

0xa92e,	// (0x00017acd) scroll_pane_cp22

0xc17b,	// (0x0001931a) rss2_navigation_pane_g1

0xc184,	// (0x00019323) rss2_navigation_pane_g2

0xc18c,	// (0x0001932b) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0001c85e) rss2_navigation_pane_g

0xc194,	// (0x00019333) rss2_navigation_pane_t1

0x4aa8,	// (0x00011c47) rss2_list_single_pane_ParamLimits

0x4aa8,	// (0x00011c47) rss2_list_single_pane

0xc1a2,	// (0x00019341) rss2_list_single_pane_t2

0xc1b0,	// (0x0001934f) rss2_list_single_pane_t3_ParamLimits

0xc1b0,	// (0x0001934f) rss2_list_single_pane_t3

0xc1cd,	// (0x0001936c) rss2_list_single_pane_t4

0x2b5a,	// (0x0000fcf9) smil_status_pane_g1

0x9567,	// (0x00016706) main_image2_pane_ParamLimits

0x9567,	// (0x00016706) main_image2_pane

0x454e,	// (0x000116ed) main_camera2_pane_g9_ParamLimits

0x454e,	// (0x000116ed) main_camera2_pane_g9

0x467c,	// (0x0001181b) main_camera2_pane_t5_ParamLimits

0x467c,	// (0x0001181b) main_camera2_pane_t5

0xc043,	// (0x000191e2) main_camera2_pane_t6_ParamLimits

0xc043,	// (0x000191e2) main_camera2_pane_t6

0x4abd,	// (0x00011c5c) main_image2_pane_g1_ParamLimits

0x4abd,	// (0x00011c5c) main_image2_pane_g1

0x3896,	// (0x00010a35) smil2_video_pane_ParamLimits

0x3896,	// (0x00010a35) smil2_video_pane

0x9515,	// (0x000166b4) aid_zoom_text_primary_cp

0x955d,	// (0x000166fc) popup_preview_fixed_window

0xa0ee,	// (0x0001728d) im_reading_pane_g1

0x43c5,	// (0x00011564) cams2_bc_adjust_pane_cp_ParamLimits

0x43c5,	// (0x00011564) cams2_bc_adjust_pane_cp

0x46ab,	// (0x0001184a) cams2_bc_adjust_pane_ParamLimits

0x46ab,	// (0x0001184a) cams2_bc_adjust_pane

0xc1db,	// (0x0001937a) cams2_bc_adjust_pane_g1

0xc1e3,	// (0x00019382) cams2_slider_pane

0xc1ec,	// (0x0001938b) cams2_slider_pane_g1

0xc1f5,	// (0x00019394) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0001c865) cams2_slider_pane_g

0x156e,	// (0x0000e70d) calc_display_pane_ParamLimits

0x1594,	// (0x0000e733) calc_paper_pane_ParamLimits

0x15b5,	// (0x0000e754) grid_calc_pane_ParamLimits

0xa7ee,	// (0x0001798d) popup_clock_digital_window_t1_ParamLimits

0xadcb,	// (0x00017f6a) main_image_pane_t1

0x1550,	// (0x0000e6ef) aid_size_cell_calc_ParamLimits

0x1550,	// (0x0000e6ef) aid_size_cell_calc

0x3e85,	// (0x00011024) popup_blid_sat_info2_window_ParamLimits

0x3e85,	// (0x00011024) popup_blid_sat_info2_window

0xc217,	// (0x000193b6) aid_size_cell_blid

0xc21f,	// (0x000193be) bg_popup_window_pane_cp07

0xc242,	// (0x000193e1) grid_popup_blid_pane

0xc24c,	// (0x000193eb) heading_pane_cp05_ParamLimits

0xc24c,	// (0x000193eb) heading_pane_cp05

0xc316,	// (0x000194b5) cell_popup_blid_pane_ParamLimits

0xc316,	// (0x000194b5) cell_popup_blid_pane

0xc33a,	// (0x000194d9) cell_popup_blid_pane_g1

0xc342,	// (0x000194e1) cell_popup_blid_pane_t1

0x4958,	// (0x00011af7) mup2_indicator_pane_ParamLimits

0x4958,	// (0x00011af7) mup2_indicator_pane

0xaa77,	// (0x00017c16) mup2_visualizer_osc_pane

0xc07f,	// (0x0001921e) mup2_visualizer_spec_pane_ParamLimits

0xc07f,	// (0x0001921e) mup2_visualizer_spec_pane

0x4ad3,	// (0x00011c72) mup2_spec_half_pane

0x4adc,	// (0x00011c7b) mup2_spec_half_pane_cp

0x4ae4,	// (0x00011c83) mup2_spec_bar_pane_ParamLimits

0x4ae4,	// (0x00011c83) mup2_spec_bar_pane

0xbfce,	// (0x0001916d) mup2_spec_bar_pane_g1

0xbfd8,	// (0x00019177) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001c7d8) mup2_spec_bar_pane_g

0x4b04,	// (0x00011ca3) mup2_osc_middle_pane

0xbfea,	// (0x00019189) mup2_visualizer_osc_pane_g1

0x9595,	// (0x00016734) popup_number_entry_window_t1_ParamLimits

0x95a8,	// (0x00016747) popup_number_entry_window_t2_ParamLimits

0x95ba,	// (0x00016759) popup_number_entry_window_t3_ParamLimits

0x13c4,	// (0x0000e563) popup_number_entry_window_t5_ParamLimits

0x13c4,	// (0x0000e563) popup_number_entry_window_t5

0xf0fb,	// (0x0001c29a) popup_number_entry_window_t_ParamLimits

0x95cc,	// (0x0001676b) text_title_cp2_ParamLimits

0xaca5,	// (0x00017e44) aid_hotspot_pointer_text2_pane

0xaccb,	// (0x00017e6a) main_viewer_pane_g9_ParamLimits

0xaccb,	// (0x00017e6a) main_viewer_pane_g9

0xa31d,	// (0x000174bc) cale_month_pane_t1_ParamLimits

0xa3b2,	// (0x00017551) bg_cale_pane_ParamLimits

0xa3ca,	// (0x00017569) list_cale_pane_ParamLimits

0x9e76,	// (0x00017015) listscroll_cale_day_pane_t1

0xa3db,	// (0x0001757a) scroll_pane_cp09_ParamLimits

0x3297,	// (0x00010436) main_mup_eq_pane_t1_ParamLimits

0x3297,	// (0x00010436) main_mup_eq_pane_t1

0x32b1,	// (0x00010450) main_mup_eq_pane_t2_ParamLimits

0x32b1,	// (0x00010450) main_mup_eq_pane_t2

0x32cb,	// (0x0001046a) main_mup_eq_pane_t3_ParamLimits

0x32cb,	// (0x0001046a) main_mup_eq_pane_t3

0x32e7,	// (0x00010486) main_mup_eq_pane_t4_ParamLimits

0x32e7,	// (0x00010486) main_mup_eq_pane_t4

0x3303,	// (0x000104a2) main_mup_eq_pane_t5_ParamLimits

0x3303,	// (0x000104a2) main_mup_eq_pane_t5

0x331f,	// (0x000104be) main_mup_eq_pane_t6_ParamLimits

0x331f,	// (0x000104be) main_mup_eq_pane_t6

0x3333,	// (0x000104d2) main_mup_eq_pane_t7_ParamLimits

0x3333,	// (0x000104d2) main_mup_eq_pane_t7

0x3347,	// (0x000104e6) main_mup_eq_pane_t8_ParamLimits

0x3347,	// (0x000104e6) main_mup_eq_pane_t8

0x335b,	// (0x000104fa) main_mup_eq_pane_t9_ParamLimits

0x335b,	// (0x000104fa) main_mup_eq_pane_t9

0x3375,	// (0x00010514) main_mup_eq_pane_t10_ParamLimits

0x3375,	// (0x00010514) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0001c627) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0001c627) main_mup_eq_pane_t

0x3424,	// (0x000105c3) mup_equalizer_pane_cp5_ParamLimits

0x3438,	// (0x000105d7) mup_equalizer_pane_cp6_ParamLimits

0x344c,	// (0x000105eb) mup_equalizer_pane_cp7_ParamLimits

0x94f7,	// (0x00016696) main_gallery_pane

0xbff3,	// (0x00019192) smil2_volume_pane

0xbffb,	// (0x0001919a) smil_status_volume_pane_g1_ParamLimits

0xc00e,	// (0x000191ad) smil_status_volume_pane_g2_ParamLimits

0xc021,	// (0x000191c0) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0001c7dd) smil_status_volume_pane_g_ParamLimits

0xc21f,	// (0x000193be) bg_popup_window_pane_cp07_ParamLimits

0xc22d,	// (0x000193cc) blid_firmament_pane

0x4b0d,	// (0x00011cac) aid_size_cell_gallery_ParamLimits

0x4b0d,	// (0x00011cac) aid_size_cell_gallery

0x4b23,	// (0x00011cc2) grid_gallery_pane_ParamLimits

0x4b23,	// (0x00011cc2) grid_gallery_pane

0x4b3c,	// (0x00011cdb) cell_gallery_pane_ParamLimits

0x4b3c,	// (0x00011cdb) cell_gallery_pane

0xc350,	// (0x000194ef) bg_cell_gallery_focus_pane_ParamLimits

0xc350,	// (0x000194ef) bg_cell_gallery_focus_pane

0xc362,	// (0x00019501) cell_gallery_pane_g1_ParamLimits

0xc362,	// (0x00019501) cell_gallery_pane_g1

0x4b85,	// (0x00011d24) cell_gallery_pane_g2_ParamLimits

0x4b85,	// (0x00011d24) cell_gallery_pane_g2

0x4b92,	// (0x00011d31) cell_gallery_pane_g3_ParamLimits

0x4b92,	// (0x00011d31) cell_gallery_pane_g3

0xc36e,	// (0x0001950d) cell_gallery_pane_g4_ParamLimits

0xc36e,	// (0x0001950d) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0001c88b) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0001c88b) cell_gallery_pane_g

0xc37a,	// (0x00019519) bg_cell_gallery_focus_pane_g1

0xc382,	// (0x00019521) bg_cell_gallery_focus_pane_g2

0xc38a,	// (0x00019529) bg_cell_gallery_focus_pane_g3

0xc392,	// (0x00019531) bg_cell_gallery_focus_pane_g4

0xc39a,	// (0x00019539) bg_cell_gallery_focus_pane_g5

0xc3a2,	// (0x00019541) bg_cell_gallery_focus_pane_g6

0xc3aa,	// (0x00019549) bg_cell_gallery_focus_pane_g7

0xc3b2,	// (0x00019551) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0001c894) bg_cell_gallery_focus_pane_g

0xc3ba,	// (0x00019559) aid_firma_cardinal

0xc3ce,	// (0x0001956d) blid_firmament_pane_t1

0xc3e5,	// (0x00019584) blid_firmament_pane_t2

0xc3fc,	// (0x0001959b) blid_firmament_pane_t3

0xc413,	// (0x000195b2) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0001c8a5) blid_firmament_pane_t

0xc42a,	// (0x000195c9) blid_sat_info_pane

0xc43a,	// (0x000195d9) blid_sat_info_pane_g1

0xc43a,	// (0x000195d9) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0001c8ae) blid_sat_info_pane_g

0xc444,	// (0x000195e3) blid_sat_info_pane_t1

0xc452,	// (0x000195f1) smil2_volume_content_pane

0xc45b,	// (0x000195fa) smil2_volume_pane_g1

0xc463,	// (0x00019602) smil2_volume_content_pane_g1

0xc46c,	// (0x0001960b) smil2_volume_content_pane_g2

0xc475,	// (0x00019614) smil2_volume_content_pane_g3

0xc47e,	// (0x0001961d) smil2_volume_content_pane_g4

0xc487,	// (0x00019626) smil2_volume_content_pane_g5

0xc490,	// (0x0001962f) smil2_volume_content_pane_g6

0xc499,	// (0x00019638) smil2_volume_content_pane_g7

0xc4a2,	// (0x00019641) smil2_volume_content_pane_g8

0xc4ab,	// (0x0001964a) smil2_volume_content_pane_g9

0xc4b4,	// (0x00019653) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0001c8b3) smil2_volume_content_pane_g

0x1a47,	// (0x0000ebe6) cale_week_day_heading_pane_t1_ParamLimits

0x1a74,	// (0x0000ec13) cale_week_day_heading_pane_t2_ParamLimits

0x1aa1,	// (0x0000ec40) cale_week_day_heading_pane_t3_ParamLimits

0x1ace,	// (0x0000ec6d) cale_week_day_heading_pane_t4_ParamLimits

0x1afb,	// (0x0000ec9a) cale_week_day_heading_pane_t5_ParamLimits

0x1b28,	// (0x0000ecc7) cale_week_day_heading_pane_t6_ParamLimits

0x1b55,	// (0x0000ecf4) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0001c39f) cale_week_day_heading_pane_t_ParamLimits

0x9e88,	// (0x00017027) bg_cale_side_pane_ParamLimits

0x1b82,	// (0x0000ed21) cale_week_time_pane_t1_ParamLimits

0x1b9a,	// (0x0000ed39) cale_week_time_pane_t2_ParamLimits

0x1bb2,	// (0x0000ed51) cale_week_time_pane_t3_ParamLimits

0x1bca,	// (0x0000ed69) cale_week_time_pane_t4_ParamLimits

0x1be2,	// (0x0000ed81) cale_week_time_pane_t5_ParamLimits

0x1bfa,	// (0x0000ed99) cale_week_time_pane_t6_ParamLimits

0x1c12,	// (0x0000edb1) cale_week_time_pane_t7_ParamLimits

0x1c2a,	// (0x0000edc9) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0001c3ae) cale_week_time_pane_t_ParamLimits

0x1c42,	// (0x0000ede1) cell_cale_week_pane_g2_ParamLimits

0x9e88,	// (0x00017027) bg_cale_side_pane_cp01_ParamLimits

0x2a05,	// (0x0000fba4) cale_month_week_pane_t1_ParamLimits

0x2a1c,	// (0x0000fbbb) cale_month_week_pane_t2_ParamLimits

0x2a33,	// (0x0000fbd2) cale_month_week_pane_t3_ParamLimits

0x2a4a,	// (0x0000fbe9) cale_month_week_pane_t4_ParamLimits

0x2a61,	// (0x0000fc00) cale_month_week_pane_t5_ParamLimits

0x2a78,	// (0x0000fc17) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0001c487) cale_month_week_pane_t_ParamLimits

0xa359,	// (0x000174f8) cell_cale_month_pane_g1_ParamLimits

0x94f7,	// (0x00016696) main_cale_event_viewer_pane

0x94f7,	// (0x00016696) listscroll_cale_event_viewer_pane

0xc4bd,	// (0x0001965c) list_cale_ev_pane

0xc4c5,	// (0x00019664) scroll_pane_cp023

0xc4d1,	// (0x00019670) field_cale_ev_pane_ParamLimits

0xc4d1,	// (0x00019670) field_cale_ev_pane

0xc4ef,	// (0x0001968e) field_cale_ev_content_pane_ParamLimits

0xc4ef,	// (0x0001968e) field_cale_ev_content_pane

0xc4fb,	// (0x0001969a) field_cale_ev_pane_g1_ParamLimits

0xc4fb,	// (0x0001969a) field_cale_ev_pane_g1

0xc507,	// (0x000196a6) field_cale_ev_pane_g2_ParamLimits

0xc507,	// (0x000196a6) field_cale_ev_pane_g2

0xc51f,	// (0x000196be) field_cale_ev_pane_g3_ParamLimits

0xc51f,	// (0x000196be) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0001c8c8) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0001c8c8) field_cale_ev_pane_g

0xc537,	// (0x000196d6) field_cale_ev_pane_t1_ParamLimits

0xc537,	// (0x000196d6) field_cale_ev_pane_t1

0xc54e,	// (0x000196ed) field_cale_ev_content_pane_t1_ParamLimits

0xc54e,	// (0x000196ed) field_cale_ev_content_pane_t1

0xac08,	// (0x00017da7) bg_button_pane_cp01

0x9cdc,	// (0x00016e7b) listscroll_cale_week_pane_ParamLimits

0x1873,	// (0x0000ea12) popup_toolbar_window_cp01

0x9e76,	// (0x00017015) listscroll_cale_week_pane_t1_ParamLimits

0x9cdc,	// (0x00016e7b) listscroll_cale_day_pane_ParamLimits

0x2bab,	// (0x0000fd4a) popup_toolbar_window_cp02

0x9e76,	// (0x00017015) listscroll_cale_day_pane_t1_ParamLimits

0x9cdc,	// (0x00016e7b) main_cale_month_pane_ParamLimits

0x40b9,	// (0x00011258) popup_toolbar_window_cp03_ParamLimits

0x40b9,	// (0x00011258) popup_toolbar_window_cp03

0x375e,	// (0x000108fd) main_image_pane_g2_ParamLimits

0x375e,	// (0x000108fd) main_image_pane_g2

0x376f,	// (0x0001090e) main_image_pane_g3_ParamLimits

0x376f,	// (0x0001090e) main_image_pane_g3

0x0002,

0xf51a,	// (0x0001c6b9) main_image_pane_g_ParamLimits

0xf51a,	// (0x0001c6b9) main_image_pane_g

0xadcb,	// (0x00017f6a) main_image_pane_t1_ParamLimits

0x3780,	// (0x0001091f) main_image_pane_t2_ParamLimits

0x3780,	// (0x0001091f) main_image_pane_t2

0x3792,	// (0x00010931) main_image_pane_t3_ParamLimits

0x3792,	// (0x00010931) main_image_pane_t3

0x37ba,	// (0x00010959) main_image_pane_t4_ParamLimits

0x37ba,	// (0x00010959) main_image_pane_t4

0x0003,

0xf521,	// (0x0001c6c0) main_image_pane_t_ParamLimits

0xf521,	// (0x0001c6c0) main_image_pane_t

0x37da,	// (0x00010979) popup_image_details_window_cp01

0x37e4,	// (0x00010983) popup_toobar_trans_pane_cp01_ParamLimits

0x37e4,	// (0x00010983) popup_toobar_trans_pane_cp01

0x3f64,	// (0x00011103) popup_image_details_window_ParamLimits

0x3f64,	// (0x00011103) popup_image_details_window

0xbf54,	// (0x000190f3) popup_image_focus_window

0x437f,	// (0x0001151e) camera2_autofocus_pane_ParamLimits

0x437f,	// (0x0001151e) camera2_autofocus_pane

0x94f7,	// (0x00016696) bg_popup_sub_pane_cp06

0xc56c,	// (0x0001970b) popup_image_focus_window_g1

0xc574,	// (0x00019713) popup_image_focus_window_g2

0xc57c,	// (0x0001971b) popup_image_focus_window_g3

0xc584,	// (0x00019723) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0001c8cf) popup_image_focus_window_g

0xc58c,	// (0x0001972b) popup_image_focus_window_t1

0xc59a,	// (0x00019739) popup_image_focus_window_t2

0xc5aa,	// (0x00019749) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0001c8d8) popup_image_focus_window_t

0xc5b8,	// (0x00019757) camera2_autofocus_pane_g1

0x9567,	// (0x00016706) bg_tb_trans_pane_cp01

0xc5c6,	// (0x00019765) popup_image_details_window_g1

0xc5d9,	// (0x00019778) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0001c8ea) popup_image_details_window_g

0xc602,	// (0x000197a1) popup_image_details_window_t1

0xc614,	// (0x000197b3) popup_image_details_window_t2

0xc62d,	// (0x000197cc) popup_image_details_window_t3

0xc641,	// (0x000197e0) popup_image_details_window_t4

0xc65c,	// (0x000197fb) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0001c8f1) popup_image_details_window_t

0x9cae,	// (0x00016e4d) bg_calc_paper_pane_ParamLimits

0x94f7,	// (0x00016696) grid_highlight_pane_cp013

0x9cc2,	// (0x00016e61) list_calc_pane_ParamLimits

0x9cd4,	// (0x00016e73) scroll_pane_cp024

0x9cdc,	// (0x00016e7b) bg_calc_display_pane_ParamLimits

0x16a4,	// (0x0000e843) calc_display_pane_t1_ParamLimits

0x16b6,	// (0x0000e855) calc_display_pane_t2_ParamLimits

0x9ce8,	// (0x00016e87) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0001c321) calc_display_pane_t_ParamLimits

0x1770,	// (0x0000e90f) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0001c33e) cell_calc_pane_g

0x1779,	// (0x0000e918) cell_calc_pane_t1

0x9d5f,	// (0x00016efe) grid_highlight_pane_cp02_ParamLimits

0x9d75,	// (0x00016f14) toolbar_button_pane_cp01_ParamLimits

0x9d75,	// (0x00016f14) toolbar_button_pane_cp01

0xae10,	// (0x00017faf) temp_image_control_pane_ParamLimits

0xae10,	// (0x00017faf) temp_image_control_pane

0x9567,	// (0x00016706) main_mp3_pane

0xc676,	// (0x00019815) temp_image_control_pane_g1_ParamLimits

0xc676,	// (0x00019815) temp_image_control_pane_g1

0xc684,	// (0x00019823) temp_image_control_pane_g2_ParamLimits

0xc684,	// (0x00019823) temp_image_control_pane_g2

0xc696,	// (0x00019835) temp_image_control_pane_g3_ParamLimits

0xc696,	// (0x00019835) temp_image_control_pane_g3

0x4bcf,	// (0x00011d6e) temp_image_control_pane_g4_ParamLimits

0x4bcf,	// (0x00011d6e) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0001c8fc) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0001c8fc) temp_image_control_pane_g

0xc676,	// (0x00019815) main_mp3_pane_g1

0x4be2,	// (0x00011d81) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0001c905) main_mp3_pane_g

0xc6d9,	// (0x00019878) main_mp3_pane_t1

0x9f57,	// (0x000170f6) main_camera_pane_g8_ParamLimits

0x9f57,	// (0x000170f6) main_camera_pane_g8

0x1efc,	// (0x0000f09b) main_video_pane_g7_ParamLimits

0x1efc,	// (0x0000f09b) main_video_pane_g7

0xc061,	// (0x00019200) main_camera2_pane_t7_ParamLimits

0xc061,	// (0x00019200) main_camera2_pane_t7

0xa145,	// (0x000172e4) scroll_pane_cp025_ParamLimits

0xa145,	// (0x000172e4) scroll_pane_cp025

0xa159,	// (0x000172f8) scroll_pane_cp026_ParamLimits

0xa159,	// (0x000172f8) scroll_pane_cp026

0xa168,	// (0x00017307) wml_content_pane_ParamLimits

0x94f7,	// (0x00016696) main_touch_calib_pane

0x4cab,	// (0x00011e4a) main_touch_calib_pane_g1

0x4cb7,	// (0x00011e56) main_touch_calib_pane_g2

0x4cc3,	// (0x00011e62) main_touch_calib_pane_g3

0x4ccf,	// (0x00011e6e) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0001c923) main_touch_calib_pane_g

0x4cdb,	// (0x00011e7a) main_touch_calib_pane_t1

0x4cf5,	// (0x00011e94) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0001c92c) main_touch_calib_pane_t

0xa9b8,	// (0x00017b57) mup_progress_pane_cp02

0xa9d7,	// (0x00017b76) navi_pane_g1

0xaa39,	// (0x00017bd8) navi_pane_mp_t3

0x9567,	// (0x00016706) main_mp3_pane_ParamLimits

0x40f7,	// (0x00011296) navi_pane_ParamLimits

0xc676,	// (0x00019815) main_mp3_pane_g1_ParamLimits

0x4be2,	// (0x00011d81) main_mp3_pane_g2_ParamLimits

0x4bf0,	// (0x00011d8f) main_mp3_pane_g3_ParamLimits

0x4bf0,	// (0x00011d8f) main_mp3_pane_g3

0x4bfe,	// (0x00011d9d) main_mp3_pane_g4_ParamLimits

0x4bfe,	// (0x00011d9d) main_mp3_pane_g4

0xc6a6,	// (0x00019845) main_mp3_pane_g5_ParamLimits

0xc6a6,	// (0x00019845) main_mp3_pane_g5

0xc6b4,	// (0x00019853) main_mp3_pane_g6_ParamLimits

0xc6b4,	// (0x00019853) main_mp3_pane_g6

0xc6c1,	// (0x00019860) main_mp3_pane_g7_ParamLimits

0xc6c1,	// (0x00019860) main_mp3_pane_g7

0xc6cd,	// (0x0001986c) main_mp3_pane_g8_ParamLimits

0xc6cd,	// (0x0001986c) main_mp3_pane_g8

0xf766,	// (0x0001c905) main_mp3_pane_g_ParamLimits

0x4c0a,	// (0x00011da9) main_mp3_pane_t2

0x4c18,	// (0x00011db7) main_mp3_pane_t3

0xc6e7,	// (0x00019886) main_mp3_pane_t4

0xc6f5,	// (0x00019894) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0001c916) main_mp3_pane_t

0xc703,	// (0x000198a2) mup_progress_pane_cp01

0x9515,	// (0x000166b4) aid_zoom_text_secondary2

0xc4bd,	// (0x0001965c) list_cale_ev2_pane

0xc4c5,	// (0x00019664) scroll_pane_cp023_ParamLimits

0x4d4b,	// (0x00011eea) field_cale_ev2_pane_ParamLimits

0x4d4b,	// (0x00011eea) field_cale_ev2_pane

0x4d6b,	// (0x00011f0a) field_cale_ev2_pane_g1_ParamLimits

0x4d6b,	// (0x00011f0a) field_cale_ev2_pane_g1

0x4d77,	// (0x00011f16) field_cale_ev2_pane_g2_ParamLimits

0x4d77,	// (0x00011f16) field_cale_ev2_pane_g2

0x4d8f,	// (0x00011f2e) field_cale_ev2_pane_g3_ParamLimits

0x4d8f,	// (0x00011f2e) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0001c937) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0001c937) field_cale_ev2_pane_g

0x4da7,	// (0x00011f46) field_cale_ev2_pane_t1_ParamLimits

0x4da7,	// (0x00011f46) field_cale_ev2_pane_t1

0x4dbe,	// (0x00011f5d) field_cale_ev2_pane_t2_ParamLimits

0x4dbe,	// (0x00011f5d) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0001c940) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0001c940) field_cale_ev2_pane_t

0x3613,	// (0x000107b2) main_postcard_pane_g5_ParamLimits

0x3613,	// (0x000107b2) main_postcard_pane_g5

0x3629,	// (0x000107c8) main_postcard_pane_g6_ParamLimits

0x3629,	// (0x000107c8) main_postcard_pane_g6

0x1cbc,	// (0x0000ee5b) camera2_autofocus_pane_cp_ParamLimits

0x1cbc,	// (0x0000ee5b) camera2_autofocus_pane_cp

0x9567,	// (0x00016706) main_mup3_pane

0x4df3,	// (0x00011f92) main_mup3_pane_g1_ParamLimits

0x4df3,	// (0x00011f92) main_mup3_pane_g1

0x4e15,	// (0x00011fb4) main_mup3_pane_g2_ParamLimits

0x4e15,	// (0x00011fb4) main_mup3_pane_g2

0x4e93,	// (0x00012032) main_mup3_pane_g3_ParamLimits

0x4e93,	// (0x00012032) main_mup3_pane_g3

0x4ed5,	// (0x00012074) main_mup3_pane_g4_ParamLimits

0x4ed5,	// (0x00012074) main_mup3_pane_g4

0x4f17,	// (0x000120b6) main_mup3_pane_g5_ParamLimits

0x4f17,	// (0x000120b6) main_mup3_pane_g5

0x4f59,	// (0x000120f8) main_mup3_pane_g6_ParamLimits

0x4f59,	// (0x000120f8) main_mup3_pane_g6

0xc717,	// (0x000198b6) main_mup3_pane_g7_ParamLimits

0xc717,	// (0x000198b6) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0001c950) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0001c950) main_mup3_pane_g

0x4fd3,	// (0x00012172) main_mup3_pane_t1_ParamLimits

0x4fd3,	// (0x00012172) main_mup3_pane_t1

0x5043,	// (0x000121e2) main_mup3_pane_t2_ParamLimits

0x5043,	// (0x000121e2) main_mup3_pane_t2

0x5113,	// (0x000122b2) main_mup3_pane_t4_ParamLimits

0x5113,	// (0x000122b2) main_mup3_pane_t4

0x5169,	// (0x00012308) main_mup3_pane_t5_ParamLimits

0x5169,	// (0x00012308) main_mup3_pane_t5

0x521d,	// (0x000123bc) main_mup3_pane_t6_ParamLimits

0x521d,	// (0x000123bc) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0001c961) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0001c961) main_mup3_pane_t

0x52d1,	// (0x00012470) mup3_progress_pane_ParamLimits

0x52d1,	// (0x00012470) mup3_progress_pane

0x5353,	// (0x000124f2) popup_mup3_control_window_ParamLimits

0x5353,	// (0x000124f2) popup_mup3_control_window

0xc725,	// (0x000198c4) popup_mup3_text_window

0x5385,	// (0x00012524) mup3_progress_pane_t1

0x539c,	// (0x0001253b) mup3_progress_pane_t2

0xc72d,	// (0x000198cc) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0001c96e) mup3_progress_pane_t

0xc744,	// (0x000198e3) mup_progress_pane_cp03

0x94f7,	// (0x00016696) bg_tb_trans_pane_cp04

0x53b3,	// (0x00012552) mup3_volume_pane

0x53bb,	// (0x0001255a) popup_mup3_control_window_g1

0x53c4,	// (0x00012563) mup3_volume_pane_g1

0x53cd,	// (0x0001256c) mup3_volume_pane_g2

0x53d6,	// (0x00012575) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0001c975) mup3_volume_pane_g

0x94f7,	// (0x00016696) bg_tb_trans_pane_cp03

0xc754,	// (0x000198f3) popup_mup3_text_window_g1

0xc75c,	// (0x000198fb) popup_mup3_text_window_t1

0x9d36,	// (0x00016ed5) list_calc_item_pane_g1_ParamLimits

0xc149,	// (0x000192e8) mup_volume_pane_cp_g1

0x4d0f,	// (0x00011eae) main_touch_calib_pane_t3

0x4d23,	// (0x00011ec2) main_touch_calib_pane_t4

0x4d37,	// (0x00011ed6) main_touch_calib_pane_t5

0x9501,	// (0x000166a0) aid_cell_size_toolbar2

0x9509,	// (0x000166a8) aid_popup3_width_pane

0x9515,	// (0x000166b4) aid_zoom_text_msg_primary

0x9f37,	// (0x000170d6) vorec_t7

0x9cfa,	// (0x00016e99) bg_calc_paper_pane_g1_ParamLimits

0x9d06,	// (0x00016ea5) bg_calc_paper_pane_g2_ParamLimits

0x9d12,	// (0x00016eb1) bg_calc_paper_pane_g3_ParamLimits

0x9d1e,	// (0x00016ebd) bg_calc_paper_pane_g4_ParamLimits

0x9d2a,	// (0x00016ec9) bg_calc_paper_pane_g5_ParamLimits

0x16fd,	// (0x0000e89c) bg_calc_paper_pane_g6_ParamLimits

0x170c,	// (0x0000e8ab) bg_calc_paper_pane_g7_ParamLimits

0x171b,	// (0x0000e8ba) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0001c328) bg_calc_paper_pane_g_ParamLimits

0x172e,	// (0x0000e8cd) calc_bg_paper_pane_g9_ParamLimits

0x1e0a,	// (0x0000efa9) image_qvga_pane_ParamLimits

0x1e0a,	// (0x0000efa9) image_qvga_pane

0x9be3,	// (0x00016d82) bg_popup_sub_pane_cp04_ParamLimits

0xad47,	// (0x00017ee6) popup_mup_playback_window_g1_ParamLimits

0xad53,	// (0x00017ef2) popup_mup_playback_window_t1_ParamLimits

0xad68,	// (0x00017f07) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0001c6b4) popup_mup_playback_window_t_ParamLimits

0x4872,	// (0x00011a11) main_mup2_pane_g3_ParamLimits

0x4872,	// (0x00011a11) main_mup2_pane_g3

0x2104,	// (0x0000f2a3) popup_toolbar_window_cp04

0xb14a,	// (0x000182e9) popup_call2_audio_second_window_g3_ParamLimits

0xb14a,	// (0x000182e9) popup_call2_audio_second_window_g3

0xb554,	// (0x000186f3) popup_call2_audio_first_window_g4_ParamLimits

0xb554,	// (0x000186f3) popup_call2_audio_first_window_g4

0xbbd3,	// (0x00018d72) popup_call2_audio_in_window_g4_ParamLimits

0xbbd3,	// (0x00018d72) popup_call2_audio_in_window_g4

0x3740,	// (0x000108df) aid_area_sk_bg_cut_ParamLimits

0x3740,	// (0x000108df) aid_area_sk_bg_cut

0xad7d,	// (0x00017f1c) aid_area_sk_bg_cut_2_ParamLimits

0xad7d,	// (0x00017f1c) aid_area_sk_bg_cut_2

0x4b75,	// (0x00011d14) aid_placing_details_win

0x4b7d,	// (0x00011d1c) aid_placing_details_win_2

0xc5b8,	// (0x00019757) camera2_autofocus_pane_g1_ParamLimits

0x1311,	// (0x0000e4b0) popup_fixed_preview_cale_window_ParamLimits

0x1311,	// (0x0000e4b0) popup_fixed_preview_cale_window

0xaa91,	// (0x00017c30) navi_slider_pane_g3

0xaa9a,	// (0x00017c39) navi_slider_pane_g4

0xaaa3,	// (0x00017c42) navi_slider_pane_g5

0xaa91,	// (0x00017c30) navi_slider_pane_g6

0xaaac,	// (0x00017c4b) navi_slider_pane_g7

0xabcd,	// (0x00017d6c) mup_scale_pane_g3

0xabd6,	// (0x00017d75) mup_scale_pane_g4

0xabdf,	// (0x00017d7e) mup_scale_pane_g5

0x3460,	// (0x000105ff) mup_scale_pane_g6

0x3469,	// (0x00010608) mup_scale_pane_g7

0xaa91,	// (0x00017c30) cams2_slider_pane_g3

0xc1fe,	// (0x0001939d) cams2_slider_pane_g4

0xc206,	// (0x000193a5) cams2_slider_pane_g5

0xaa91,	// (0x00017c30) cams2_slider_pane_g6

0xc20e,	// (0x000193ad) cams2_slider_pane_g7

0xc43a,	// (0x000195d9) camera2_autofocus_pane_cp_g1

0xc76a,	// (0x00019909) bg_popup_preview_window_pane_cp02_ParamLimits

0xc76a,	// (0x00019909) bg_popup_preview_window_pane_cp02

0xc776,	// (0x00019915) list_fp_cale_pane_ParamLimits

0xc776,	// (0x00019915) list_fp_cale_pane

0xc782,	// (0x00019921) popup_fixed_preview_cale_window_t1_ParamLimits

0xc782,	// (0x00019921) popup_fixed_preview_cale_window_t1

0x53df,	// (0x0001257e) popup_fixed_preview_cale_window_t2_ParamLimits

0x53df,	// (0x0001257e) popup_fixed_preview_cale_window_t2

0x53f4,	// (0x00012593) popup_fixed_preview_cale_window_t3_ParamLimits

0x53f4,	// (0x00012593) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0001c97c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0001c97c) popup_fixed_preview_cale_window_t

0x5409,	// (0x000125a8) list_single_fp_cale_pane_ParamLimits

0x5409,	// (0x000125a8) list_single_fp_cale_pane

0xc7a0,	// (0x0001993f) list_single_fp_cale_pane_g1_ParamLimits

0xc7a0,	// (0x0001993f) list_single_fp_cale_pane_g1

0xc7ac,	// (0x0001994b) list_single_fp_cale_pane_g2_ParamLimits

0xc7ac,	// (0x0001994b) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0001c983) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0001c983) list_single_fp_cale_pane_g

0xc7c5,	// (0x00019964) list_single_fp_cale_pane_t1_ParamLimits

0xc7c5,	// (0x00019964) list_single_fp_cale_pane_t1

0xc7d7,	// (0x00019976) list_single_fp_cale_pane_t2_ParamLimits

0xc7d7,	// (0x00019976) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0001c98a) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0001c98a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94f7,	// (0x00016696) main_dialer_pane

0x541e,	// (0x000125bd) aid_cell_size_keypad

0x5428,	// (0x000125c7) dialer_ne_pane

0x5430,	// (0x000125cf) grid_dialer_command_1_pane

0x5438,	// (0x000125d7) grid_dialer_command_2_pane

0x5440,	// (0x000125df) grid_dialer_keypad_pane

0x5452,	// (0x000125f1) bg_popup_call_pane_cp06_ParamLimits

0x5452,	// (0x000125f1) bg_popup_call_pane_cp06

0x545e,	// (0x000125fd) dialer_ne_clear_pane_ParamLimits

0x545e,	// (0x000125fd) dialer_ne_clear_pane

0xc80a,	// (0x000199a9) dialer_ne_pane_g1

0xc812,	// (0x000199b1) dialer_ne_pane_t1_ParamLimits

0xc812,	// (0x000199b1) dialer_ne_pane_t1

0x546a,	// (0x00012609) dialer_ne_pane_t2_ParamLimits

0x546a,	// (0x00012609) dialer_ne_pane_t2

0x5494,	// (0x00012633) dialer_ne_pane_t3_ParamLimits

0x5494,	// (0x00012633) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0001c98f) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0001c98f) dialer_ne_pane_t

0x54c4,	// (0x00012663) dialer_ne_pane_t3_copy1_ParamLimits

0x54c4,	// (0x00012663) dialer_ne_pane_t3_copy1

0x54f3,	// (0x00012692) cell_dialer_keypad_pane_ParamLimits

0x54f3,	// (0x00012692) cell_dialer_keypad_pane

0x550a,	// (0x000126a9) cell_dialer_command_1_pane_ParamLimits

0x550a,	// (0x000126a9) cell_dialer_command_1_pane

0x5520,	// (0x000126bf) cell_dialer_command_2_pane_ParamLimits

0x5520,	// (0x000126bf) cell_dialer_command_2_pane

0xc824,	// (0x000199c3) bg_button_pane_cp02_ParamLimits

0xc824,	// (0x000199c3) bg_button_pane_cp02

0x552f,	// (0x000126ce) cell_dialer_keypad_pane_g1_ParamLimits

0x552f,	// (0x000126ce) cell_dialer_keypad_pane_g1

0xc824,	// (0x000199c3) bg_button_pane_cp03_ParamLimits

0xc824,	// (0x000199c3) bg_button_pane_cp03

0x5543,	// (0x000126e2) cell_dialer_command_1_pane_g1_ParamLimits

0x5543,	// (0x000126e2) cell_dialer_command_1_pane_g1

0xc830,	// (0x000199cf) bg_button_pane_cp04

0x5557,	// (0x000126f6) cell_dialer_command_2_pane_g1

0xaa77,	// (0x00017c16) bg_button_pane_cp06

0xc838,	// (0x000199d7) dialer_ne_clear_pane_g1

0x2fa4,	// (0x00010143) navi_pane_g2

0x2fd2,	// (0x00010171) navi_pane_g3

0x0002,

0xf418,	// (0x0001c5b7) navi_pane_g

0x2ffb,	// (0x0001019a) navi_pane_mv_g2

0x3022,	// (0x000101c1) navi_pane_mv_g5

0x302a,	// (0x000101c9) navi_pane_mv_t1

0x9cdc,	// (0x00016e7b) main_clock2_pane

0x558b,	// (0x0001272a) main_clock2_list_pane_ParamLimits

0x558b,	// (0x0001272a) main_clock2_list_pane

0x55c1,	// (0x00012760) main_clock2_pane_t1_ParamLimits

0x55c1,	// (0x00012760) main_clock2_pane_t1

0x55fd,	// (0x0001279c) main_clock2_pane_t2_ParamLimits

0x55fd,	// (0x0001279c) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0001c996) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0001c996) main_clock2_pane_t

0x5687,	// (0x00012826) popup_clock_analogue_window_cp03_ParamLimits

0x5687,	// (0x00012826) popup_clock_analogue_window_cp03

0x56ac,	// (0x0001284b) popup_clock_digital_window_cp02_ParamLimits

0x56ac,	// (0x0001284b) popup_clock_digital_window_cp02

0x571d,	// (0x000128bc) main_clock2_list_single_pane_ParamLimits

0x571d,	// (0x000128bc) main_clock2_list_single_pane

0xaa77,	// (0x00017c16) list_highlight_pane_cp05

0xc840,	// (0x000199df) main_clock2_list_single_pane_t1

0x2104,	// (0x0000f2a3) popup_toolbar_window_cp04_ParamLimits

0x4b9f,	// (0x00011d3e) camera2_autofocus_pane_g2_ParamLimits

0x4b9f,	// (0x00011d3e) camera2_autofocus_pane_g2

0x4bab,	// (0x00011d4a) camera2_autofocus_pane_g3_ParamLimits

0x4bab,	// (0x00011d4a) camera2_autofocus_pane_g3

0x4bb7,	// (0x00011d56) camera2_autofocus_pane_g4_ParamLimits

0x4bb7,	// (0x00011d56) camera2_autofocus_pane_g4

0x4bc3,	// (0x00011d62) camera2_autofocus_pane_g5_ParamLimits

0x4bc3,	// (0x00011d62) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0001c8df) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0001c8df) camera2_autofocus_pane_g

0x4dd3,	// (0x00011f72) camera2_autofocus_pane_cp_g2

0x4ddb,	// (0x00011f7a) camera2_autofocus_pane_cp_g3

0x4de3,	// (0x00011f82) camera2_autofocus_pane_cp_g4

0x4deb,	// (0x00011f8a) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0001c945) camera2_autofocus_pane_cp_g

0x544a,	// (0x000125e9) popup_dialer_spcha_window

0x94f7,	// (0x00016696) bg_popup_sub_pane_cp07

0xc84e,	// (0x000199ed) list_spcha_pane

0xc856,	// (0x000199f5) list_single_spcha_pane_ParamLimits

0xc856,	// (0x000199f5) list_single_spcha_pane

0x94f7,	// (0x00016696) list_highlight_pane_cp06

0xc867,	// (0x00019a06) list_single_spcha_pane_t1

0xb97d,	// (0x00018b1c) popup_call2_audio_out_window_g4_ParamLimits

0xb97d,	// (0x00018b1c) popup_call2_audio_out_window_g4

0x94f7,	// (0x00016696) main_imed2_pane

0xbf5c,	// (0x000190fb) popup_imed_adjust2_window

0x3f7c,	// (0x0001111b) popup_imed_trans_window_ParamLimits

0x3f7c,	// (0x0001111b) popup_imed_trans_window

0xc278,	// (0x00019417) popup_blid_sat_info2_window_t1

0xc286,	// (0x00019425) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0001c874) popup_blid_sat_info2_window_t

0x57c7,	// (0x00012966) aid_size_cell_colour_35

0x57e7,	// (0x00012986) aid_size_cell_colour_112

0x5807,	// (0x000129a6) aid_size_cell_effect

0xbf34,	// (0x000190d3) bg_tb_trans_pane_cp02

0xa4d2,	// (0x00017671) heading_imed_pane

0x5827,	// (0x000129c6) listscroll_imed_pane

0xc875,	// (0x00019a14) heading_imed_pane_g1

0xc87d,	// (0x00019a1c) heading_imed_pane_t1

0xc88b,	// (0x00019a2a) grid_imed_colour_35_pane_ParamLimits

0xc88b,	// (0x00019a2a) grid_imed_colour_35_pane

0x5833,	// (0x000129d2) grid_imed_effect_pane

0xc8a2,	// (0x00019a41) list_imed_aspect_pane

0x5849,	// (0x000129e8) scroll_pane_cp027_ParamLimits

0x5849,	// (0x000129e8) scroll_pane_cp027

0x585a,	// (0x000129f9) cell_imed_effect_pane_ParamLimits

0x585a,	// (0x000129f9) cell_imed_effect_pane

0xc8aa,	// (0x00019a49) cell_imed_colour_pane_ParamLimits

0xc8aa,	// (0x00019a49) cell_imed_colour_pane

0xc8ec,	// (0x00019a8b) cell_imed_colour_pane_g1_ParamLimits

0xc8ec,	// (0x00019a8b) cell_imed_colour_pane_g1

0xc8fd,	// (0x00019a9c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8fd,	// (0x00019a9c) hgihlgiht_grid_pane_cp016

0x5881,	// (0x00012a20) cell_imed_effect_pane_g1

0x5889,	// (0x00012a28) grid_highlight_pane_cp017

0xc91c,	// (0x00019abb) list_imed_single_pane_ParamLimits

0xc91c,	// (0x00019abb) list_imed_single_pane

0x94f7,	// (0x00016696) list_highlight_pane_cp07

0xc931,	// (0x00019ad0) list_imed_aspect_pane_comp1_t1

0xbf34,	// (0x000190d3) bg_tb_trans_pane_cp05

0xc953,	// (0x00019af2) popup_imed_adjust2_window_g1

0xc97a,	// (0x00019b19) popup_imed_adjust2_window_t1

0xc992,	// (0x00019b31) slider_imed_adjust_pane

0xc9a6,	// (0x00019b45) slider_imed_adjust_pane_g1

0xc9b6,	// (0x00019b55) slider_imed_adjust_pane_g2

0xc9c6,	// (0x00019b65) slider_imed_adjust_pane_g3

0xc9d7,	// (0x00019b76) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0001c9b3) slider_imed_adjust_pane_g

0x5892,	// (0x00012a31) aid_size_cell_clipart2

0x589e,	// (0x00012a3d) grid_imed_clipart_pane

0xc9e8,	// (0x00019b87) scroll_pane_cp031

0x58a8,	// (0x00012a47) cell_imed_clipart_pane_ParamLimits

0x58a8,	// (0x00012a47) cell_imed_clipart_pane

0x58ca,	// (0x00012a69) cell_imed_clipart_pane_g1

0x94f7,	// (0x00016696) grid_highlight_pane_cp014

0x55a0,	// (0x0001273f) main_clock2_pane_g1_ParamLimits

0x55a0,	// (0x0001273f) main_clock2_pane_g1

0x56c8,	// (0x00012867) aid_call2_pane_cp10

0x56da,	// (0x00012879) aid_call_pane_cp10

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g1

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g2

0x56ec,	// (0x0001288b) popup_clock_analogue_window_cp10_g3

0x56ec,	// (0x0001288b) popup_clock_analogue_window_cp10_g4

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0001c9a1) popup_clock_analogue_window_cp10_g

0x56fe,	// (0x0001289d) popup_clock_analogue_window_cp10_t1

0x572f,	// (0x000128ce) clock_digital_number_pane_cp10_ParamLimits

0x572f,	// (0x000128ce) clock_digital_number_pane_cp10

0x5747,	// (0x000128e6) clock_digital_number_pane_cp11_ParamLimits

0x5747,	// (0x000128e6) clock_digital_number_pane_cp11

0x575f,	// (0x000128fe) clock_digital_number_pane_cp12_ParamLimits

0x575f,	// (0x000128fe) clock_digital_number_pane_cp12

0x5777,	// (0x00012916) clock_digital_number_pane_cp13_ParamLimits

0x5777,	// (0x00012916) clock_digital_number_pane_cp13

0x578f,	// (0x0001292e) clock_digital_separator_pane_cp10_ParamLimits

0x578f,	// (0x0001292e) clock_digital_separator_pane_cp10

0x57a7,	// (0x00012946) popup_clock_digital_window_cp02_t1_ParamLimits

0x57a7,	// (0x00012946) popup_clock_digital_window_cp02_t1

0x9bdb,	// (0x00016d7a) clock_digital_number_pane_cp10_g1

0x9bdb,	// (0x00016d7a) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0001c9bc) clock_digital_number_pane_cp10_g

0x9bdb,	// (0x00016d7a) clock_digital_separator_pane_cp10_g1

0x9bdb,	// (0x00016d7a) clock_digital_separator_pane_g2_cp10

0xaa47,	// (0x00017be6) navi_pane_vded_g4

0xaa50,	// (0x00017bef) navi_pane_vded_g5

0xaa59,	// (0x00017bf8) navi_pane_vded_t1

0x94f7,	// (0x00016696) main_vded_pane

0x58d3,	// (0x00012a72) main_vded_pane_g1

0x58dd,	// (0x00012a7c) main_vded_pane_g2

0x58e7,	// (0x00012a86) main_vded_pane_g3

0x0002,

0xf822,	// (0x0001c9c1) main_vded_pane_g

0x58f1,	// (0x00012a90) main_vded_pane_t1

0x58ff,	// (0x00012a9e) main_vded_pane_t2

0x0001,

0xf829,	// (0x0001c9c8) main_vded_pane_t

0x590d,	// (0x00012aac) vded_slider_pane

0x5915,	// (0x00012ab4) vded_video_pane

0xc9f0,	// (0x00019b8f) vded_video_pane_g1

0x591d,	// (0x00012abc) vded_video_pane_g2

0xc43a,	// (0x000195d9) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0001c9cd) vded_video_pane_g

0xc9fa,	// (0x00019b99) vded_slider_pane_g1

0xc149,	// (0x000192e8) vded_slider_pane_g2

0xca03,	// (0x00019ba2) vded_slider_pane_g3

0xca0c,	// (0x00019bab) vded_slider_pane_g4

0xca15,	// (0x00019bb4) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0001c9d4) vded_slider_pane_g

0x533b,	// (0x000124da) mup3_rocker_pane_ParamLimits

0x533b,	// (0x000124da) mup3_rocker_pane

0x5926,	// (0x00012ac5) mup3_control_keys_pane_g1

0x592e,	// (0x00012acd) mup3_control_keys_pane_g2

0x5936,	// (0x00012ad5) mup3_control_keys_pane_g3

0x593e,	// (0x00012add) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0001c9df) mup3_control_keys_pane_g

0x1348,	// (0x0000e4e7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1348,	// (0x0000e4e7) popup_toolbar2_fixed_window_cp01

0x536f,	// (0x0001250e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x536f,	// (0x0001250e) popup_toolbar2_fixed_window_cp02

0xb2bc,	// (0x0001845b) popup_call2_audio_second_window_t4_ParamLimits

0xb2bc,	// (0x0001845b) popup_call2_audio_second_window_t4

0xb7ea,	// (0x00018989) popup_call2_audio_first_window_t6_ParamLimits

0xb7ea,	// (0x00018989) popup_call2_audio_first_window_t6

0xba80,	// (0x00018c1f) popup_call2_audio_out_window_t6_ParamLimits

0xba80,	// (0x00018c1f) popup_call2_audio_out_window_t6

0x94f7,	// (0x00016696) main_vitu_pane

0x594e,	// (0x00012aed) aid_size_cell_itu_ParamLimits

0x594e,	// (0x00012aed) aid_size_cell_itu

0x9567,	// (0x00016706) bg_popup_window_pane_cp08_ParamLimits

0x9567,	// (0x00016706) bg_popup_window_pane_cp08

0x5964,	// (0x00012b03) field_vitu_entry_pane_ParamLimits

0x5964,	// (0x00012b03) field_vitu_entry_pane

0x597b,	// (0x00012b1a) grid_vitu_function_pane_ParamLimits

0x597b,	// (0x00012b1a) grid_vitu_function_pane

0x5996,	// (0x00012b35) grid_vitu_itu_pane_ParamLimits

0x5996,	// (0x00012b35) grid_vitu_itu_pane

0x59b4,	// (0x00012b53) cell_vitu_itu_pane_ParamLimits

0x59b4,	// (0x00012b53) cell_vitu_itu_pane

0x59d6,	// (0x00012b75) cell_vitu_function_pane_ParamLimits

0x59d6,	// (0x00012b75) cell_vitu_function_pane

0x9567,	// (0x00016706) bg_popup_sub_pane_cp08_ParamLimits

0x9567,	// (0x00016706) bg_popup_sub_pane_cp08

0x59ef,	// (0x00012b8e) field_vitu_entry_pane_t1_ParamLimits

0x59ef,	// (0x00012b8e) field_vitu_entry_pane_t1

0xca36,	// (0x00019bd5) field_vitu_entry_pane_t2_ParamLimits

0xca36,	// (0x00019bd5) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0001c9ed) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0001c9ed) field_vitu_entry_pane_t

0xca53,	// (0x00019bf2) bg_button_pane_cp05_ParamLimits

0xca53,	// (0x00019bf2) bg_button_pane_cp05

0x5a0d,	// (0x00012bac) cell_vitu_itu_pane_g1

0x5a25,	// (0x00012bc4) cell_vitu_itu_pane_t1_ParamLimits

0x5a25,	// (0x00012bc4) cell_vitu_itu_pane_t1

0x5a37,	// (0x00012bd6) cell_vitu_itu_pane_t2_ParamLimits

0x5a37,	// (0x00012bd6) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0001c9f2) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0001c9f2) cell_vitu_itu_pane_t

0xca61,	// (0x00019c00) bg_button_pane_cp07

0x5a6c,	// (0x00012c0b) cell_vitu_function_pane_g1

0x9c76,	// (0x00016e15) main_calc_pane_g1

0x117e,	// (0x0000e31d) aid_visual_content_pane

0x94f7,	// (0x00016696) main_vradio_pane

0x5a75,	// (0x00012c14) main_vradio_pane_g1_ParamLimits

0x5a75,	// (0x00012c14) main_vradio_pane_g1

0xca6b,	// (0x00019c0a) main_vradio_pane_g2_ParamLimits

0xca6b,	// (0x00019c0a) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0001c9f9) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0001c9f9) main_vradio_pane_g

0x5a8e,	// (0x00012c2d) main_vradio_pane_t1_ParamLimits

0x5a8e,	// (0x00012c2d) main_vradio_pane_t1

0x5aa3,	// (0x00012c42) main_vradio_pane_t2_ParamLimits

0x5aa3,	// (0x00012c42) main_vradio_pane_t2

0xca78,	// (0x00019c17) main_vradio_pane_t3_ParamLimits

0xca78,	// (0x00019c17) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0001c9fe) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0001c9fe) main_vradio_pane_t

0x5ab8,	// (0x00012c57) vradio_rocker_control_pane_ParamLimits

0x5ab8,	// (0x00012c57) vradio_rocker_control_pane

0x5aca,	// (0x00012c69) vradio_station_info_pane_ParamLimits

0x5aca,	// (0x00012c69) vradio_station_info_pane

0xca8c,	// (0x00019c2b) vradio_frequency_info_pane_ParamLimits

0xca8c,	// (0x00019c2b) vradio_frequency_info_pane

0xc43a,	// (0x000195d9) vradio_station_info_pane_g1

0xca9b,	// (0x00019c3a) vradio_station_info_pane_t1_ParamLimits

0xca9b,	// (0x00019c3a) vradio_station_info_pane_t1

0xcabd,	// (0x00019c5c) vradio_station_info_pane_t2_ParamLimits

0xcabd,	// (0x00019c5c) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0001ca05) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0001ca05) vradio_station_info_pane_t

0xcacf,	// (0x00019c6e) vradio_tuning_pane

0xcad7,	// (0x00019c76) vradio_rocker_control_pane_g1

0xcadf,	// (0x00019c7e) vradio_rocker_control_pane_g2

0xcae7,	// (0x00019c86) vradio_rocker_control_pane_g3

0xcaef,	// (0x00019c8e) vradio_rocker_control_pane_g4

0xcaf7,	// (0x00019c96) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0001ca0a) vradio_rocker_control_pane_g

0x5adc,	// (0x00012c7b) vradio_frequency_info_pane_g1

0xcaff,	// (0x00019c9e) vradio_frequency_info_pane_t1_ParamLimits

0xcaff,	// (0x00019c9e) vradio_frequency_info_pane_t1

0x5ae6,	// (0x00012c85) vradio_tuning_pane_g1

0x5af1,	// (0x00012c90) vradio_tuning_pane_t1

0x9525,	// (0x000166c4) area_side_right_pane_ParamLimits

0x9525,	// (0x000166c4) area_side_right_pane

0xbefb,	// (0x0001909a) status_small_pane_g1

0xbf03,	// (0x000190a2) status_small_pane_g2

0xbf0c,	// (0x000190ab) status_small_pane_g3

0xbf15,	// (0x000190b4) status_small_pane_g4

0x0003,

0xf62b,	// (0x0001c7ca) status_small_pane_g

0xbf1e,	// (0x000190bd) status_small_pane_t1

0x94f7,	// (0x00016696) main_video3_pane

0xcb13,	// (0x00019cb2) cams_zoom_vslider_pane

0xcb1b,	// (0x00019cba) image3_wide_pane_ParamLimits

0xcb1b,	// (0x00019cba) image3_wide_pane

0xcb35,	// (0x00019cd4) image3_wide_small_pane

0xcb41,	// (0x00019ce0) main_video3_pane_g1_ParamLimits

0xcb41,	// (0x00019ce0) main_video3_pane_g1

0xcb5d,	// (0x00019cfc) main_video3_pane_g2_ParamLimits

0xcb5d,	// (0x00019cfc) main_video3_pane_g2

0x0001,

0xf876,	// (0x0001ca15) main_video3_pane_g_ParamLimits

0xf876,	// (0x0001ca15) main_video3_pane_g

0xcb79,	// (0x00019d18) main_video3_pane_t1_ParamLimits

0xcb79,	// (0x00019d18) main_video3_pane_t1

0xcba4,	// (0x00019d43) main_video3_pane_t2_ParamLimits

0xcba4,	// (0x00019d43) main_video3_pane_t2

0xcbcf,	// (0x00019d6e) main_video3_pane_t3_ParamLimits

0xcbcf,	// (0x00019d6e) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0001ca1a) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0001ca1a) main_video3_pane_t

0xcbfc,	// (0x00019d9b) cams_zoom_vslider_pane_g1

0xcc05,	// (0x00019da4) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0001ca21) cams_zoom_vslider_pane_g

0xcc0d,	// (0x00019dac) small_slider_vertical_pane

0xc43a,	// (0x000195d9) small_slider_vertical_pane_g1

0xc43a,	// (0x000195d9) small_slider_vertical_pane_g2

0xcc15,	// (0x00019db4) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0001ca26) small_slider_vertical_pane_g

0x94f7,	// (0x00016696) main_hwr_training_pane

0xcc1e,	// (0x00019dbd) hwr_training_instruct_pane_ParamLimits

0xcc1e,	// (0x00019dbd) hwr_training_instruct_pane

0x5b00,	// (0x00012c9f) hwr_training_navi_pane_ParamLimits

0x5b00,	// (0x00012c9f) hwr_training_navi_pane

0x5b1f,	// (0x00012cbe) hwr_training_write_pane_ParamLimits

0x5b1f,	// (0x00012cbe) hwr_training_write_pane

0x94f7,	// (0x00016696) bg_frame_shadow_pane

0xcc55,	// (0x00019df4) hwr_training_write_pane_g1

0xcc5d,	// (0x00019dfc) hwr_training_write_pane_g2

0xcc65,	// (0x00019e04) hwr_training_write_pane_g3

0xcc6d,	// (0x00019e0c) hwr_training_write_pane_g4

0xcc75,	// (0x00019e14) hwr_training_write_pane_g5

0xcc7d,	// (0x00019e1c) hwr_training_write_pane_g6

0xcc85,	// (0x00019e24) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0001ca2d) hwr_training_write_pane_g

0xcc8d,	// (0x00019e2c) hwr_training_navi_pane_g1_ParamLimits

0xcc8d,	// (0x00019e2c) hwr_training_navi_pane_g1

0xcc9f,	// (0x00019e3e) hwr_training_navi_pane_g2_ParamLimits

0xcc9f,	// (0x00019e3e) hwr_training_navi_pane_g2

0xccb1,	// (0x00019e50) hwr_training_navi_pane_g3_ParamLimits

0xccb1,	// (0x00019e50) hwr_training_navi_pane_g3

0xccc1,	// (0x00019e60) hwr_training_navi_pane_g4_ParamLimits

0xccc1,	// (0x00019e60) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0001ca3c) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0001ca3c) hwr_training_navi_pane_g

0xccce,	// (0x00019e6d) hwr_training_navi_pane_t1

0x5b67,	// (0x00012d06) list_single_hwr_training_instruct_pane_ParamLimits

0x5b67,	// (0x00012d06) list_single_hwr_training_instruct_pane

0xccdc,	// (0x00019e7b) list_single_hwr_training_instruct_pane_t1

0xc37a,	// (0x00019519) bg_frame_shadow_pane_g1

0xcceb,	// (0x00019e8a) bg_frame_shadow_pane_g2

0xccf3,	// (0x00019e92) bg_frame_shadow_pane_g3

0xccfb,	// (0x00019e9a) bg_frame_shadow_pane_g4

0xcd03,	// (0x00019ea2) bg_frame_shadow_pane_g5

0xcd0b,	// (0x00019eaa) bg_frame_shadow_pane_g6

0xcd13,	// (0x00019eb2) bg_frame_shadow_pane_g7

0x9db9,	// (0x00016f58) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0001ca47) bg_frame_shadow_pane_g

0x94f7,	// (0x00016696) main_video_tele_dialer_pane

0x5b7c,	// (0x00012d1b) aid_size_cell_video_keypad_ParamLimits

0x5b7c,	// (0x00012d1b) aid_size_cell_video_keypad

0x5b96,	// (0x00012d35) grid_video_dialer_keypad_pane_ParamLimits

0x5b96,	// (0x00012d35) grid_video_dialer_keypad_pane

0x5be2,	// (0x00012d81) video_down_pane_cp_ParamLimits

0x5be2,	// (0x00012d81) video_down_pane_cp

0x5c16,	// (0x00012db5) cell_video_dialer_keypad_pane_ParamLimits

0x5c16,	// (0x00012db5) cell_video_dialer_keypad_pane

0xcd1b,	// (0x00019eba) bg_button_pane_cp08_ParamLimits

0xcd1b,	// (0x00019eba) bg_button_pane_cp08

0x5c38,	// (0x00012dd7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c38,	// (0x00012dd7) cell_video_dialer_keypad_pane_g1

0x5325,	// (0x000124c4) mup3_rocker2_pane_ParamLimits

0x5325,	// (0x000124c4) mup3_rocker2_pane

0xc43a,	// (0x000195d9) mup3_rocker2_pane_g1

0x3e5d,	// (0x00010ffc) main_dialer2_pane

0x94f7,	// (0x00016696) main_mp4_pane

0xcd2f,	// (0x00019ece) main_mp4_pane_g1_ParamLimits

0xcd2f,	// (0x00019ece) main_mp4_pane_g1

0xcd2f,	// (0x00019ece) main_mp4_pane_g2_ParamLimits

0xcd2f,	// (0x00019ece) main_mp4_pane_g2

0x5c72,	// (0x00012e11) main_mp4_pane_g3_ParamLimits

0x5c72,	// (0x00012e11) main_mp4_pane_g3

0xcd3d,	// (0x00019edc) main_mp4_pane_g4_ParamLimits

0xcd3d,	// (0x00019edc) main_mp4_pane_g4

0xcd65,	// (0x00019f04) main_mp4_pane_g5_ParamLimits

0xcd65,	// (0x00019f04) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0001ca67) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0001ca67) main_mp4_pane_g

0xcdb5,	// (0x00019f54) main_mp4_pane_t1_ParamLimits

0xcdb5,	// (0x00019f54) main_mp4_pane_t1

0xce11,	// (0x00019fb0) main_mp4_pane_t2_ParamLimits

0xce11,	// (0x00019fb0) main_mp4_pane_t2

0xce63,	// (0x0001a002) main_mp4_pane_t3_ParamLimits

0xce63,	// (0x0001a002) main_mp4_pane_t3

0xce83,	// (0x0001a022) main_mp4_pane_t4_ParamLimits

0xce83,	// (0x0001a022) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0001ca74) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0001ca74) main_mp4_pane_t

0xcec7,	// (0x0001a066) mp4_progress_pane_ParamLimits

0xcec7,	// (0x0001a066) mp4_progress_pane

0xcf11,	// (0x0001a0b0) mp4_rocker_pane_ParamLimits

0xcf11,	// (0x0001a0b0) mp4_rocker_pane

0xcf39,	// (0x0001a0d8) mp4_progress_pane_t1

0xcf52,	// (0x0001a0f1) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0001ca7d) mp4_progress_pane_t

0xcf6b,	// (0x0001a10a) mup_progress_pane_cp04

0xc43a,	// (0x000195d9) mp4_rocker_pane_g1

0x5cae,	// (0x00012e4d) aid_cell_size_keypad2_ParamLimits

0x5cae,	// (0x00012e4d) aid_cell_size_keypad2

0x5cc4,	// (0x00012e63) dialer2_ne_pane_ParamLimits

0x5cc4,	// (0x00012e63) dialer2_ne_pane

0x5cde,	// (0x00012e7d) grid_dialer2_keypad_pane_ParamLimits

0x5cde,	// (0x00012e7d) grid_dialer2_keypad_pane

0xc21f,	// (0x000193be) bg_popup_call_pane_cp07_ParamLimits

0xc21f,	// (0x000193be) bg_popup_call_pane_cp07

0x5cfa,	// (0x00012e99) dialer2_ne_pane_t1_ParamLimits

0x5cfa,	// (0x00012e99) dialer2_ne_pane_t1

0x5d35,	// (0x00012ed4) cell_dialer2_keypad_pane_ParamLimits

0x5d35,	// (0x00012ed4) cell_dialer2_keypad_pane

0xcf89,	// (0x0001a128) bg_button_pane_pane_cp04_ParamLimits

0xcf89,	// (0x0001a128) bg_button_pane_pane_cp04

0x5d57,	// (0x00012ef6) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d57,	// (0x00012ef6) cell_dialer2_keypad_pane_g1

0x2032,	// (0x0000f1d1) aid_placing_vt_set_content_ParamLimits

0x2032,	// (0x0000f1d1) aid_placing_vt_set_content

0x2052,	// (0x0000f1f1) aid_placing_vt_set_title_ParamLimits

0x2052,	// (0x0000f1f1) aid_placing_vt_set_title

0x94f7,	// (0x00016696) main_image3_pane

0x5e1d,	// (0x00012fbc) area_side_right_pane_cp01_ParamLimits

0x5e1d,	// (0x00012fbc) area_side_right_pane_cp01

0xcd2f,	// (0x00019ece) main_image3_pane_g1_ParamLimits

0xcd2f,	// (0x00019ece) main_image3_pane_g1

0x5e34,	// (0x00012fd3) main_image3_pane_g2_ParamLimits

0x5e34,	// (0x00012fd3) main_image3_pane_g2

0x5e5c,	// (0x00012ffb) main_image3_pane_g3_ParamLimits

0x5e5c,	// (0x00012ffb) main_image3_pane_g3

0x5e86,	// (0x00013025) main_image3_pane_g4_ParamLimits

0x5e86,	// (0x00013025) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0001ca8c) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0001ca8c) main_image3_pane_g

0x5eb0,	// (0x0001304f) main_image3_pane_t1_ParamLimits

0x5eb0,	// (0x0001304f) main_image3_pane_t1

0x5f08,	// (0x000130a7) main_image3_pane_t2_ParamLimits

0x5f08,	// (0x000130a7) main_image3_pane_t2

0x5f5a,	// (0x000130f9) main_image3_pane_t3_ParamLimits

0x5f5a,	// (0x000130f9) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0001ca95) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0001ca95) main_image3_pane_t

0x9567,	// (0x00016706) grid_sctrl_middle_pane_cp01_ParamLimits

0x9567,	// (0x00016706) grid_sctrl_middle_pane_cp01

0x5fe2,	// (0x00013181) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fe2,	// (0x00013181) cell_sctrl_middle_pane_cp01

0x5fff,	// (0x0001319e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fff,	// (0x0001319e) cell_sctrl_middle_pane_cp01_g1

0x94f7,	// (0x00016696) main_call4_pane

0x6015,	// (0x000131b4) aid_size_button_call4_ParamLimits

0x6015,	// (0x000131b4) aid_size_button_call4

0x6046,	// (0x000131e5) call4_windows_pane_ParamLimits

0x6046,	// (0x000131e5) call4_windows_pane

0x6066,	// (0x00013205) grid_call4_button_pane_ParamLimits

0x6066,	// (0x00013205) grid_call4_button_pane

0xcfc7,	// (0x0001a166) call4_windows_conf_pane

0xcfde,	// (0x0001a17d) popup_call4_audio_first_window_ParamLimits

0xcfde,	// (0x0001a17d) popup_call4_audio_first_window

0xd02a,	// (0x0001a1c9) popup_call4_audio_second_window_ParamLimits

0xd02a,	// (0x0001a1c9) popup_call4_audio_second_window

0xd03e,	// (0x0001a1dd) popup_call4_audio_wait_window_ParamLimits

0xd03e,	// (0x0001a1dd) popup_call4_audio_wait_window

0x6093,	// (0x00013232) cell_call4_button_pane_ParamLimits

0x6093,	// (0x00013232) cell_call4_button_pane

0x60bc,	// (0x0001325b) bg_button_pane_cp09_ParamLimits

0x60bc,	// (0x0001325b) bg_button_pane_cp09

0x60c8,	// (0x00013267) cell_call4_button_pane_g1_ParamLimits

0x60c8,	// (0x00013267) cell_call4_button_pane_g1

0x60ee,	// (0x0001328d) cell_call4_button_pane_t1_ParamLimits

0x60ee,	// (0x0001328d) cell_call4_button_pane_t1

0xd086,	// (0x0001a225) popup_call4_audio_conf_window_ParamLimits

0xd086,	// (0x0001a225) popup_call4_audio_conf_window

0x5385,	// (0x00012524) mup3_progress_pane_t1_ParamLimits

0x539c,	// (0x0001253b) mup3_progress_pane_t2_ParamLimits

0xc72d,	// (0x000198cc) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0001c96e) mup3_progress_pane_t_ParamLimits

0xc744,	// (0x000198e3) mup_progress_pane_cp03_ParamLimits

0x5946,	// (0x00012ae5) mup3_control_keys_pane_g4_copy1

0xcef5,	// (0x0001a094) mp4_rocker2_pane_ParamLimits

0xcef5,	// (0x0001a094) mp4_rocker2_pane

0xd09a,	// (0x0001a239) mp4_rocker2_pane_g1

0xd0a2,	// (0x0001a241) mp4_rocker2_pane_g2

0xd0aa,	// (0x0001a249) mp4_rocker2_pane_g3

0xd0b2,	// (0x0001a251) mp4_rocker2_pane_g4

0xd0ba,	// (0x0001a259) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0001ca9e) mp4_rocker2_pane_g

0x94f7,	// (0x00016696) main_camera4_pane

0x94f7,	// (0x00016696) main_video4_pane

0x5bb0,	// (0x00012d4f) main_video_tele_dialer_pane_t1_ParamLimits

0x5bb0,	// (0x00012d4f) main_video_tele_dialer_pane_t1

0x5bc9,	// (0x00012d68) main_video_tele_dialer_pane_t2_ParamLimits

0x5bc9,	// (0x00012d68) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0001ca58) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0001ca58) main_video_tele_dialer_pane_t

0x612c,	// (0x000132cb) cam4_autofocus_pane_ParamLimits

0x612c,	// (0x000132cb) cam4_autofocus_pane

0x6142,	// (0x000132e1) cam4_image_uncrop_pane_ParamLimits

0x6142,	// (0x000132e1) cam4_image_uncrop_pane

0x615c,	// (0x000132fb) cam4_indicators_pane_ParamLimits

0x615c,	// (0x000132fb) cam4_indicators_pane

0x6187,	// (0x00013326) main_camera4_pane_g1_ParamLimits

0x6187,	// (0x00013326) main_camera4_pane_g1

0x619a,	// (0x00013339) main_camera4_pane_g2_ParamLimits

0x619a,	// (0x00013339) main_camera4_pane_g2

0x61ad,	// (0x0001334c) main_camera4_pane_g3_ParamLimits

0x61ad,	// (0x0001334c) main_camera4_pane_g3

0x61c0,	// (0x0001335f) main_camera4_pane_g4_ParamLimits

0x61c0,	// (0x0001335f) main_camera4_pane_g4

0x61d3,	// (0x00013372) main_camera4_pane_g5_ParamLimits

0x61d3,	// (0x00013372) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0001caa9) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0001caa9) main_camera4_pane_g

0x61f7,	// (0x00013396) main_camera4_pane_t1_ParamLimits

0x61f7,	// (0x00013396) main_camera4_pane_t1

0xc6a6,	// (0x00019845) bg_tb_trans_pane_cp06

0xd0da,	// (0x0001a279) cam4_indicators_pane_g1

0xd0eb,	// (0x0001a28a) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0001cac4) cam4_indicators_pane_g

0xd109,	// (0x0001a2a8) cam4_indicators_pane_t1

0x626d,	// (0x0001340c) main_video4_pane_g1_ParamLimits

0x626d,	// (0x0001340c) main_video4_pane_g1

0x6280,	// (0x0001341f) main_video4_pane_g2_ParamLimits

0x6280,	// (0x0001341f) main_video4_pane_g2

0x6294,	// (0x00013433) main_video4_pane_g3_ParamLimits

0x6294,	// (0x00013433) main_video4_pane_g3

0x62a8,	// (0x00013447) main_video4_pane_g4_ParamLimits

0x62a8,	// (0x00013447) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0001cacb) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0001cacb) main_video4_pane_g

0x62d0,	// (0x0001346f) vid4_indicators_pane_ParamLimits

0x62d0,	// (0x0001346f) vid4_indicators_pane

0x6300,	// (0x0001349f) video4_image_uncrop_cif_pane_ParamLimits

0x6300,	// (0x0001349f) video4_image_uncrop_cif_pane

0x631a,	// (0x000134b9) video4_image_uncrop_nhd_pane_ParamLimits

0x631a,	// (0x000134b9) video4_image_uncrop_nhd_pane

0x6142,	// (0x000132e1) video4_image_uncrop_vga_pane_ParamLimits

0x6142,	// (0x000132e1) video4_image_uncrop_vga_pane

0xc90e,	// (0x00019aad) bg_tb_trans_pane_cp07

0x632e,	// (0x000134cd) vid4_indicators_pane_g1

0x633b,	// (0x000134da) vid4_indicators_pane_g2

0x6348,	// (0x000134e7) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0001cad6) vid4_indicators_pane_g

0x636d,	// (0x0001350c) vid4_indicators_pane_t1

0x637f,	// (0x0001351e) cam4_autofocus_pane_g1

0x6387,	// (0x00013526) cam4_autofocus_pane_g2

0x638f,	// (0x0001352e) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0001cae1) cam4_autofocus_pane_g

0x6397,	// (0x00013536) cam4_autofocus_pane_g3_copy1

0x5bfa,	// (0x00012d99) video_down_pane_cp_t1

0x5c08,	// (0x00012da7) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0001ca5d) video_down_pane_cp_t

0x9567,	// (0x00016706) popup_vitu2_window_ParamLimits

0x9567,	// (0x00016706) popup_vitu2_window

0x639f,	// (0x0001353e) aid_size_cell2_itu2_ParamLimits

0x639f,	// (0x0001353e) aid_size_cell2_itu2

0x63c5,	// (0x00013564) aid_size_cell_itu2_ParamLimits

0x63c5,	// (0x00013564) aid_size_cell_itu2

0x6421,	// (0x000135c0) bg_popup_window_pane_cp09_ParamLimits

0x6421,	// (0x000135c0) bg_popup_window_pane_cp09

0x642f,	// (0x000135ce) field_vitu2_entry_pane_ParamLimits

0x642f,	// (0x000135ce) field_vitu2_entry_pane

0x6455,	// (0x000135f4) grid_vitu2_function_pane_ParamLimits

0x6455,	// (0x000135f4) grid_vitu2_function_pane

0x64a6,	// (0x00013645) grid_vitu2_itu_pane_ParamLimits

0x64a6,	// (0x00013645) grid_vitu2_itu_pane

0x6539,	// (0x000136d8) cell_vitu2_itu_pane_ParamLimits

0x6539,	// (0x000136d8) cell_vitu2_itu_pane

0x655d,	// (0x000136fc) cell_vitu2_function_pane_ParamLimits

0x655d,	// (0x000136fc) cell_vitu2_function_pane

0xd135,	// (0x0001a2d4) bg_popup_call_pane_cp08_ParamLimits

0xd135,	// (0x0001a2d4) bg_popup_call_pane_cp08

0xd14e,	// (0x0001a2ed) field_vitu2_entry_pane_g1

0xd15a,	// (0x0001a2f9) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0001cae8) field_vitu2_entry_pane_g

0xd174,	// (0x0001a313) field_vitu2_entry_pane_t1_ParamLimits

0xd174,	// (0x0001a313) field_vitu2_entry_pane_t1

0xd1a3,	// (0x0001a342) field_vitu2_entry_pane_t2_ParamLimits

0xd1a3,	// (0x0001a342) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0001caef) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0001caef) field_vitu2_entry_pane_t

0x659c,	// (0x0001373b) bg_button_pane_cp010_ParamLimits

0x659c,	// (0x0001373b) bg_button_pane_cp010

0x65aa,	// (0x00013749) cell_vitu2_itu_pane_g1

0x65c8,	// (0x00013767) cell_vitu2_itu_pane_t1_ParamLimits

0x65c8,	// (0x00013767) cell_vitu2_itu_pane_t1

0x662e,	// (0x000137cd) cell_vitu2_itu_pane_t2_ParamLimits

0x662e,	// (0x000137cd) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0001caf9) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0001caf9) cell_vitu2_itu_pane_t

0x9567,	// (0x00016706) bg_button_pane_cp011

0x670a,	// (0x000138a9) cell_vitu2_function_pane_g1

0x94f7,	// (0x00016696) main_myfav_hc_pane

0x5faa,	// (0x00013149) popup_image3_note_pane_ParamLimits

0x5faa,	// (0x00013149) popup_image3_note_pane

0x5fc6,	// (0x00013165) popup_image3_tool_bar_pane_ParamLimits

0x5fc6,	// (0x00013165) popup_image3_tool_bar_pane

0x66b2,	// (0x00013851) cell_vitu2_itu_pane_t3_ParamLimits

0x66b2,	// (0x00013851) cell_vitu2_itu_pane_t3

0x94f7,	// (0x00016696) bg_popup_trans_pane

0xd1c8,	// (0x0001a367) grid_image3_tool_bar_pane

0xd1d2,	// (0x0001a371) bg_popup_trans_pane_g1

0xa24e,	// (0x000173ed) bg_popup_trans_pane_g2

0xd1da,	// (0x0001a379) bg_popup_trans_pane_g3

0xd1e2,	// (0x0001a381) bg_popup_trans_pane_g4

0xd1ea,	// (0x0001a389) bg_popup_trans_pane_g5

0xd1f2,	// (0x0001a391) bg_popup_trans_pane_g6

0xd1fa,	// (0x0001a399) bg_popup_trans_pane_g7

0xd202,	// (0x0001a3a1) bg_popup_trans_pane_g8

0xa22e,	// (0x000173cd) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0001cb00) bg_popup_trans_pane_g

0xd20a,	// (0x0001a3a9) cell_image3_tool_bar_pane_ParamLimits

0xd20a,	// (0x0001a3a9) cell_image3_tool_bar_pane

0xc43a,	// (0x000195d9) cell_image3_tool_bar_pane_g1

0x94f7,	// (0x00016696) bg_popup_trans_pane_cp1

0xd21e,	// (0x0001a3bd) popup_image3_note_pane_t1

0xd22c,	// (0x0001a3cb) popup_image3_note_pane_t2

0xd23a,	// (0x0001a3d9) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0001cb13) popup_image3_note_pane_t

0xd248,	// (0x0001a3e7) popup_image3_note_pane_t3_copy1

0x671e,	// (0x000138bd) bg_myfav_hc_instruction_pane_ParamLimits

0x671e,	// (0x000138bd) bg_myfav_hc_instruction_pane

0x6732,	// (0x000138d1) cell_myfav_contact_pane_ParamLimits

0x6732,	// (0x000138d1) cell_myfav_contact_pane

0x6750,	// (0x000138ef) cell_myfav_contact_pane_cp1_ParamLimits

0x6750,	// (0x000138ef) cell_myfav_contact_pane_cp1

0x6768,	// (0x00013907) cell_myfav_contact_pane_cp2_ParamLimits

0x6768,	// (0x00013907) cell_myfav_contact_pane_cp2

0x6780,	// (0x0001391f) cell_myfav_contact_pane_cp3_ParamLimits

0x6780,	// (0x0001391f) cell_myfav_contact_pane_cp3

0x6797,	// (0x00013936) cell_myfav_contact_pane_cp4_ParamLimits

0x6797,	// (0x00013936) cell_myfav_contact_pane_cp4

0x67af,	// (0x0001394e) cell_myfav_contact_pane_cp5_ParamLimits

0x67af,	// (0x0001394e) cell_myfav_contact_pane_cp5

0x67c3,	// (0x00013962) cell_myfav_contact_pane_cp6_ParamLimits

0x67c3,	// (0x00013962) cell_myfav_contact_pane_cp6

0x67d9,	// (0x00013978) cell_myfav_contact_pane_cp7_ParamLimits

0x67d9,	// (0x00013978) cell_myfav_contact_pane_cp7

0xd256,	// (0x0001a3f5) listscroll_gen_pane_cp05

0x67f3,	// (0x00013992) main_myfav_hc_pane_g1_ParamLimits

0x67f3,	// (0x00013992) main_myfav_hc_pane_g1

0x680d,	// (0x000139ac) main_myfav_hc_pane_g2_ParamLimits

0x680d,	// (0x000139ac) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0001cb1a) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0001cb1a) main_myfav_hc_pane_g

0x683f,	// (0x000139de) main_myfav_hc_pane_t1_ParamLimits

0x683f,	// (0x000139de) main_myfav_hc_pane_t1

0xd25f,	// (0x0001a3fe) main_myfav_hc_pane_t2_ParamLimits

0xd25f,	// (0x0001a3fe) main_myfav_hc_pane_t2

0xd271,	// (0x0001a410) main_myfav_hc_pane_t3_ParamLimits

0xd271,	// (0x0001a410) main_myfav_hc_pane_t3

0x6856,	// (0x000139f5) main_myfav_hc_pane_t4_ParamLimits

0x6856,	// (0x000139f5) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0001cb21) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0001cb21) main_myfav_hc_pane_t

0xc43a,	// (0x000195d9) bg_myfav_hc_instruction_pane_g1

0xd283,	// (0x0001a422) cell_myfav_contact_pane_g1_ParamLimits

0xd283,	// (0x0001a422) cell_myfav_contact_pane_g1

0xd283,	// (0x0001a422) cell_myfav_contact_pane_g2_ParamLimits

0xd283,	// (0x0001a422) cell_myfav_contact_pane_g2

0xd28f,	// (0x0001a42e) cell_myfav_contact_pane_g3_ParamLimits

0xd28f,	// (0x0001a42e) cell_myfav_contact_pane_g3

0xc717,	// (0x000198b6) cell_myfav_contact_pane_g4_ParamLimits

0xc717,	// (0x000198b6) cell_myfav_contact_pane_g4

0xd29c,	// (0x0001a43b) cell_myfav_contact_pane_g5_ParamLimits

0xd29c,	// (0x0001a43b) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0001cb2c) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0001cb2c) cell_myfav_contact_pane_g

0x6827,	// (0x000139c6) main_myfav_hc_pane_g3_ParamLimits

0x6827,	// (0x000139c6) main_myfav_hc_pane_g3

0x12a9,	// (0x0000e448) popup_adpt_find_window

0x687e,	// (0x00013a1d) afind_page_pane_ParamLimits

0x687e,	// (0x00013a1d) afind_page_pane

0x6893,	// (0x00013a32) aid_size_cell_afind_ParamLimits

0x6893,	// (0x00013a32) aid_size_cell_afind

0x68b1,	// (0x00013a50) bg_popup_sub_pane_cp09_ParamLimits

0x68b1,	// (0x00013a50) bg_popup_sub_pane_cp09

0x68be,	// (0x00013a5d) find_pane_cp01_ParamLimits

0x68be,	// (0x00013a5d) find_pane_cp01

0xd2a8,	// (0x0001a447) grid_afind_control_pane_ParamLimits

0xd2a8,	// (0x0001a447) grid_afind_control_pane

0x68cb,	// (0x00013a6a) grid_afind_pane_ParamLimits

0x68cb,	// (0x00013a6a) grid_afind_pane

0x68ed,	// (0x00013a8c) cell_afind_pane_ParamLimits

0x68ed,	// (0x00013a8c) cell_afind_pane

0xc43a,	// (0x000195d9) afind_page_pane_g1

0x694a,	// (0x00013ae9) afind_page_pane_g2

0x6953,	// (0x00013af2) afind_page_pane_g3

0x0002,

0xf998,	// (0x0001cb37) afind_page_pane_g

0x695c,	// (0x00013afb) afind_page_pane_t1

0xd2bc,	// (0x0001a45b) cell_afind_grid_control_pane_ParamLimits

0xd2bc,	// (0x0001a45b) cell_afind_grid_control_pane

0xcf89,	// (0x0001a128) bg_button_pane_cp69_ParamLimits

0xcf89,	// (0x0001a128) bg_button_pane_cp69

0x697c,	// (0x00013b1b) cell_afind_pane_g1_ParamLimits

0x697c,	// (0x00013b1b) cell_afind_pane_g1

0x6989,	// (0x00013b28) cell_afind_pane_t1_ParamLimits

0x6989,	// (0x00013b28) cell_afind_pane_t1

0x9fa1,	// (0x00017140) bg_button_pane_cp72

0xd2cb,	// (0x0001a46a) cell_afind_grid_control_pane_g1

0x391d,	// (0x00010abc) aid_image_placing_area_ParamLimits

0x391d,	// (0x00010abc) aid_image_placing_area

0xca1e,	// (0x00019bbd) field_vitu_entry_pane_g1_ParamLimits

0xca1e,	// (0x00019bbd) field_vitu_entry_pane_g1

0xca2a,	// (0x00019bc9) field_vitu_entry_pane_g2_ParamLimits

0xca2a,	// (0x00019bc9) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0001c9e8) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0001c9e8) field_vitu_entry_pane_g

0x5a0d,	// (0x00012bac) cell_vitu_itu_pane_g1_ParamLimits

0x5a4f,	// (0x00012bee) cell_vitu_itu_pane_t3_ParamLimits

0x5a4f,	// (0x00012bee) cell_vitu_itu_pane_t3

0xcf39,	// (0x0001a0d8) mp4_progress_pane_t1_ParamLimits

0xcf52,	// (0x0001a0f1) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0001ca7d) mp4_progress_pane_t_ParamLimits

0xcf6b,	// (0x0001a10a) mup_progress_pane_cp04_ParamLimits

0x686a,	// (0x00013a09) main_myfav_hc_pane_t5_ParamLimits

0x686a,	// (0x00013a09) main_myfav_hc_pane_t5

0x951d,	// (0x000166bc) aid_zoom_text_primary

0x12a9,	// (0x0000e448) popup_adpt_find_window_ParamLimits

0x9567,	// (0x00016706) main_cam_set_pane

0x6173,	// (0x00013312) cam4_zoom_pane_ParamLimits

0x6173,	// (0x00013312) cam4_zoom_pane

0x699b,	// (0x00013b3a) main_cam_set_pane_g1_ParamLimits

0x699b,	// (0x00013b3a) main_cam_set_pane_g1

0x69a9,	// (0x00013b48) main_cam_set_pane_g2_ParamLimits

0x69a9,	// (0x00013b48) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0001cb3e) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0001cb3e) main_cam_set_pane_g

0x69ca,	// (0x00013b69) main_cam_set_pane_t1_ParamLimits

0x69ca,	// (0x00013b69) main_cam_set_pane_t1

0x69e5,	// (0x00013b84) main_cset_listscroll_pane_ParamLimits

0x69e5,	// (0x00013b84) main_cset_listscroll_pane

0x6a05,	// (0x00013ba4) main_cset_slider_pane_ParamLimits

0x6a05,	// (0x00013ba4) main_cset_slider_pane

0xd2dc,	// (0x0001a47b) main_cset_list_pane_ParamLimits

0xd2dc,	// (0x0001a47b) main_cset_list_pane

0xd2ec,	// (0x0001a48b) scroll_pane_cp028

0x6a2b,	// (0x00013bca) aid_area_touch_slider

0x6a47,	// (0x00013be6) cset_slider_pane

0x6a71,	// (0x00013c10) main_cset_slider_pane_g1

0x6a86,	// (0x00013c25) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0001cb43) main_cset_slider_pane_g

0xd325,	// (0x0001a4c4) main_cset_slider_pane_t1

0x6b42,	// (0x00013ce1) main_cset_slider_pane_t2

0x6b5c,	// (0x00013cfb) main_cset_slider_pane_t3

0x6b76,	// (0x00013d15) main_cset_slider_pane_t4

0x6b90,	// (0x00013d2f) main_cset_slider_pane_t5

0x6baa,	// (0x00013d49) main_cset_slider_pane_t6

0x6bbf,	// (0x00013d5e) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0001cb68) main_cset_slider_pane_t

0x6cc3,	// (0x00013e62) cset_list_set_pane_ParamLimits

0x6cc3,	// (0x00013e62) cset_list_set_pane

0x6cd5,	// (0x00013e74) aid_position_infowindow_above

0x6cdd,	// (0x00013e7c) aid_position_infowindow_below

0x6ce5,	// (0x00013e84) cset_list_set_pane_g1_ParamLimits

0x6ce5,	// (0x00013e84) cset_list_set_pane_g1

0xd3c5,	// (0x0001a564) cset_list_set_pane_g3_ParamLimits

0xd3c5,	// (0x0001a564) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0001cb87) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0001cb87) cset_list_set_pane_g

0xd3d4,	// (0x0001a573) cset_list_set_pane_t1_ParamLimits

0xd3d4,	// (0x0001a573) cset_list_set_pane_t1

0x9567,	// (0x00016706) list_highlight_pane_cp021_ParamLimits

0x9567,	// (0x00016706) list_highlight_pane_cp021

0xabcd,	// (0x00017d6c) cset_slider_pane_g1

0xabdf,	// (0x00017d7e) cset_slider_pane_g2

0xabd6,	// (0x00017d75) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0001cb8c) cset_slider_pane_g

0xd3e9,	// (0x0001a588) aid_area_touch_cam4_zoom

0xd3f1,	// (0x0001a590) cam4_zoom_cont_pane

0xd3f9,	// (0x0001a598) cam4_zoom_pane_g1

0xd401,	// (0x0001a5a0) cam4_zoom_pane_g2

0x6cf1,	// (0x00013e90) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0001cb93) cam4_zoom_pane_g

0xd409,	// (0x0001a5a8) cam4_zoom_cont_pane_g1

0xd412,	// (0x0001a5b1) cam4_zoom_cont_pane_g2

0xd41b,	// (0x0001a5ba) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0001cb9a) cam4_zoom_cont_pane_g

0x6033,	// (0x000131d2) call4_image_pane_ParamLimits

0x6033,	// (0x000131d2) call4_image_pane

0xcfc7,	// (0x0001a166) call4_windows_conf_pane_ParamLimits

0xd008,	// (0x0001a1a7) popup_call4_audio_in_window_ParamLimits

0xd008,	// (0x0001a1a7) popup_call4_audio_in_window

0x94f7,	// (0x00016696) bg_popup_call2_act_pane_cp02

0xd07e,	// (0x0001a21d) call4_list_conf_pane

0xc43a,	// (0x000195d9) call4_image_pane_g1

0xc43a,	// (0x000195d9) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0001c8ae) call4_image_pane_g

0xd424,	// (0x0001a5c3) list_single_graphic_popup_conf4_pane_ParamLimits

0xd424,	// (0x0001a5c3) list_single_graphic_popup_conf4_pane

0x94f7,	// (0x00016696) list_highlight_pane_cp022

0xd437,	// (0x0001a5d6) list_single_graphic_popup_conf4_pane_g1

0xa88c,	// (0x00017a2b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0001cba1) list_single_graphic_popup_conf4_pane_g

0xd43f,	// (0x0001a5de) list_single_graphic_popup_conf4_pane_t1

0x2124,	// (0x0000f2c3) popup_vtel_slider_window_ParamLimits

0x2124,	// (0x0000f2c3) popup_vtel_slider_window

0xcf77,	// (0x0001a116) dialer2_ne_pane_t2_ParamLimits

0xcf77,	// (0x0001a116) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0001ca82) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0001ca82) dialer2_ne_pane_t

0xc21f,	// (0x000193be) bg_popup_sub_pane_cp010_ParamLimits

0xc21f,	// (0x000193be) bg_popup_sub_pane_cp010

0x6cf9,	// (0x00013e98) popup_vtel_slider_window_g1_ParamLimits

0x6cf9,	// (0x00013e98) popup_vtel_slider_window_g1

0x6d0c,	// (0x00013eab) popup_vtel_slider_window_g2_ParamLimits

0x6d0c,	// (0x00013eab) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0001cba6) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0001cba6) popup_vtel_slider_window_g

0x6d62,	// (0x00013f01) vtel_slider_pane_ParamLimits

0x6d62,	// (0x00013f01) vtel_slider_pane

0x6d84,	// (0x00013f23) vtel_slider_pane_g1_ParamLimits

0x6d84,	// (0x00013f23) vtel_slider_pane_g1

0x6d98,	// (0x00013f37) vtel_slider_pane_g2_ParamLimits

0x6d98,	// (0x00013f37) vtel_slider_pane_g2

0x6db0,	// (0x00013f4f) vtel_slider_pane_g3_ParamLimits

0x6db0,	// (0x00013f4f) vtel_slider_pane_g3

0x6d84,	// (0x00013f23) vtel_slider_pane_g4_ParamLimits

0x6d84,	// (0x00013f23) vtel_slider_pane_g4

0x6dc6,	// (0x00013f65) vtel_slider_pane_g5_ParamLimits

0x6dc6,	// (0x00013f65) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0001cbaf) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0001cbaf) vtel_slider_pane_g

0x94f7,	// (0x00016696) main_gallery2_pane

0x63f1,	// (0x00013590) aid_size_row_itut2_dropdow_list_ParamLimits

0x63f1,	// (0x00013590) aid_size_row_itut2_dropdow_list

0x647d,	// (0x0001361c) grid_vitu2_function_top_pane_ParamLimits

0x647d,	// (0x0001361c) grid_vitu2_function_top_pane

0x64e2,	// (0x00013681) popup_vitu2_dropdown_list_window_ParamLimits

0x64e2,	// (0x00013681) popup_vitu2_dropdown_list_window

0x650b,	// (0x000136aa) popup_vitu2_match_list_window

0x6ddc,	// (0x00013f7b) cell_vitu2_function_top_pane_ParamLimits

0x6ddc,	// (0x00013f7b) cell_vitu2_function_top_pane

0x6dfa,	// (0x00013f99) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dfa,	// (0x00013f99) cell_vitu2_function_top_pane_cp01

0x6e18,	// (0x00013fb7) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e18,	// (0x00013fb7) cell_vitu2_function_top_wide_pane

0x9567,	// (0x00016706) bg_button_pane_cp012

0x6e36,	// (0x00013fd5) cell_vitu2_function_top_pane_g1

0xd45b,	// (0x0001a5fa) bg_button_pane_cp013_ParamLimits

0xd45b,	// (0x0001a5fa) bg_button_pane_cp013

0x6e4a,	// (0x00013fe9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e4a,	// (0x00013fe9) cell_vitu2_function_top_wide_pane_g1

0x9567,	// (0x00016706) bg_popup_sub_pane_cp20

0x6e62,	// (0x00014001) list_vitu2_match_list_pane

0xd1d2,	// (0x0001a371) bg_popup_sub_pane_cp20_g1

0xd1da,	// (0x0001a379) bg_popup_sub_pane_cp20_g2

0xa24e,	// (0x000173ed) bg_popup_sub_pane_cp20_g3

0xd1e2,	// (0x0001a381) bg_popup_sub_pane_cp20_g4

0xa22e,	// (0x000173cd) bg_popup_sub_pane_cp20_g5

0xd477,	// (0x0001a616) bg_popup_sub_pane_cp20_g6

0xd1f2,	// (0x0001a391) bg_popup_sub_pane_cp20_g7

0xd1fa,	// (0x0001a399) bg_popup_sub_pane_cp20_g8

0xd202,	// (0x0001a3a1) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0001cbba) bg_popup_sub_pane_cp20_g

0xd47f,	// (0x0001a61e) list_vitu2_match_list_item_pane_ParamLimits

0xd47f,	// (0x0001a61e) list_vitu2_match_list_item_pane

0xd491,	// (0x0001a630) list_vitu2_match_list_item_pane_t1

0x94f7,	// (0x00016696) bg_popup_sub_pane_cp21

0xa741,	// (0x000178e0) grid_vitu2_dropdown_list_pane

0x6eb1,	// (0x00014050) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6eb1,	// (0x00014050) cell_vitu2_dropdown_list_char_pane

0x6ed2,	// (0x00014071) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ed2,	// (0x00014071) cell_vitu2_dropdown_list_ctrl_pane

0xd4b7,	// (0x0001a656) cell_vitu2_dropdown_list_char_pane_g1

0xd4c0,	// (0x0001a65f) cell_vitu2_dropdown_list_char_pane_g2

0xd4c9,	// (0x0001a668) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0001cbd7) cell_vitu2_dropdown_list_char_pane_g

0x6efe,	// (0x0001409d) cell_vitu2_dropdown_list_char_pane_t1

0x6f0c,	// (0x000140ab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f0c,	// (0x000140ab) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f19,	// (0x000140b8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f19,	// (0x000140b8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f26,	// (0x000140c5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f26,	// (0x000140c5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f33,	// (0x000140d2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f33,	// (0x000140d2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc6a6,	// (0x00019845) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc6a6,	// (0x00019845) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0001cbde) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0001cbde) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f4f,	// (0x000140ee) aid_size_cell_gallery2_ParamLimits

0x6f4f,	// (0x000140ee) aid_size_cell_gallery2

0x6f65,	// (0x00014104) grid_gallery2_pane_ParamLimits

0x6f65,	// (0x00014104) grid_gallery2_pane

0x6f79,	// (0x00014118) scroll_pane_cp029_ParamLimits

0x6f79,	// (0x00014118) scroll_pane_cp029

0x6f85,	// (0x00014124) cell_gallery2_pane_ParamLimits

0x6f85,	// (0x00014124) cell_gallery2_pane

0xd4d2,	// (0x0001a671) cell_gallery2_pane_g2

0x6fbb,	// (0x0001415a) cell_gallery2_pane_g3

0xd4dc,	// (0x0001a67b) cell_gallery2_pane_g4

0xd4e4,	// (0x0001a683) cell_gallery2_pane_g5

0xaa77,	// (0x00017c16) grid_highlight_pane_cp10

0x650b,	// (0x000136aa) popup_vitu2_match_list_window_ParamLimits

0x6522,	// (0x000136c1) popup_vitu2_query_window_ParamLimits

0x6522,	// (0x000136c1) popup_vitu2_query_window

0x94f7,	// (0x00016696) bg_vitu2_candi_button_pane

0xd4b7,	// (0x0001a656) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4c0,	// (0x0001a65f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4c9,	// (0x0001a668) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6fc3,	// (0x00014162) bg_button_pane_cp015

0x6fcd,	// (0x0001416c) bg_button_pane_cp016

0x6fd7,	// (0x00014176) bg_button_pane_cp017

0x9567,	// (0x00016706) bg_popup_sub_pane_cp22

0xd4ec,	// (0x0001a68b) popup_vitu2_query_window_g1

0x6fff,	// (0x0001419e) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0001cbe9) popup_vitu2_query_window_g

0x700d,	// (0x000141ac) popup_vitu2_query_window_t1_ParamLimits

0x700d,	// (0x000141ac) popup_vitu2_query_window_t1

0x7035,	// (0x000141d4) popup_vitu2_query_window_t2_ParamLimits

0x7035,	// (0x000141d4) popup_vitu2_query_window_t2

0x7047,	// (0x000141e6) popup_vitu2_query_window_t3_ParamLimits

0x7047,	// (0x000141e6) popup_vitu2_query_window_t3

0x706f,	// (0x0001420e) popup_vitu2_query_window_t4_ParamLimits

0x706f,	// (0x0001420e) popup_vitu2_query_window_t4

0x7083,	// (0x00014222) popup_vitu2_query_window_t5_ParamLimits

0x7083,	// (0x00014222) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0001cbee) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0001cbee) popup_vitu2_query_window_t

0xd2d4,	// (0x0001a473) main_cset_text_pane

0x6a2b,	// (0x00013bca) aid_area_touch_slider_ParamLimits

0x6a47,	// (0x00013be6) cset_slider_pane_ParamLimits

0x6a71,	// (0x00013c10) main_cset_slider_pane_g1_ParamLimits

0x6a86,	// (0x00013c25) main_cset_slider_pane_g2_ParamLimits

0xd2f5,	// (0x0001a494) main_cset_slider_pane_g3_ParamLimits

0xd2f5,	// (0x0001a494) main_cset_slider_pane_g3

0x6a9b,	// (0x00013c3a) main_cset_slider_pane_g4_ParamLimits

0x6a9b,	// (0x00013c3a) main_cset_slider_pane_g4

0x6aaa,	// (0x00013c49) main_cset_slider_pane_g5_ParamLimits

0x6aaa,	// (0x00013c49) main_cset_slider_pane_g5

0x6ab6,	// (0x00013c55) main_cset_slider_pane_g6_ParamLimits

0x6ab6,	// (0x00013c55) main_cset_slider_pane_g6

0xf9a4,	// (0x0001cb43) main_cset_slider_pane_g_ParamLimits

0xd325,	// (0x0001a4c4) main_cset_slider_pane_t1_ParamLimits

0x6b42,	// (0x00013ce1) main_cset_slider_pane_t2_ParamLimits

0x6b5c,	// (0x00013cfb) main_cset_slider_pane_t3_ParamLimits

0x6b76,	// (0x00013d15) main_cset_slider_pane_t4_ParamLimits

0x6b90,	// (0x00013d2f) main_cset_slider_pane_t5_ParamLimits

0x6baa,	// (0x00013d49) main_cset_slider_pane_t6_ParamLimits

0x6bbf,	// (0x00013d5e) main_cset_slider_pane_t7_ParamLimits

0x6be9,	// (0x00013d88) main_cset_slider_pane_t8_ParamLimits

0x6be9,	// (0x00013d88) main_cset_slider_pane_t8

0x6c11,	// (0x00013db0) main_cset_slider_pane_t9_ParamLimits

0x6c11,	// (0x00013db0) main_cset_slider_pane_t9

0x6c39,	// (0x00013dd8) main_cset_slider_pane_t10_ParamLimits

0x6c39,	// (0x00013dd8) main_cset_slider_pane_t10

0x6c61,	// (0x00013e00) main_cset_slider_pane_t11_ParamLimits

0x6c61,	// (0x00013e00) main_cset_slider_pane_t11

0x6c89,	// (0x00013e28) main_cset_slider_pane_t12_ParamLimits

0x6c89,	// (0x00013e28) main_cset_slider_pane_t12

0x6ca6,	// (0x00013e45) main_cset_slider_pane_t13_ParamLimits

0x6ca6,	// (0x00013e45) main_cset_slider_pane_t13

0xf9c9,	// (0x0001cb68) main_cset_slider_pane_t_ParamLimits

0x94f7,	// (0x00016696) bg_popup_sub_pane_cp011

0xd4f8,	// (0x0001a697) main_cset_text_pane_g1

0xd500,	// (0x0001a69f) main_cset_text_pane_t1

0xd50e,	// (0x0001a6ad) main_cset_text_pane_t2

0xd51c,	// (0x0001a6bb) main_cset_text_pane_t3

0xd52a,	// (0x0001a6c9) main_cset_text_pane_t4

0xd538,	// (0x0001a6d7) main_cset_text_pane_t5

0xd546,	// (0x0001a6e5) main_cset_text_pane_t6

0xd554,	// (0x0001a6f3) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0001cbf9) main_cset_text_pane_t

0x94f7,	// (0x00016696) main_cam4_burst_pane

0x94f7,	// (0x00016696) main_cam5_pane

0x696a,	// (0x00013b09) bg_button_pane_cp019

0x6973,	// (0x00013b12) bg_button_pane_cp020

0xd301,	// (0x0001a4a0) main_cset_slider_pane_g7_ParamLimits

0xd301,	// (0x0001a4a0) main_cset_slider_pane_g7

0xd30d,	// (0x0001a4ac) main_cset_slider_pane_g8_ParamLimits

0xd30d,	// (0x0001a4ac) main_cset_slider_pane_g8

0x6aca,	// (0x00013c69) main_cset_slider_pane_g9_ParamLimits

0x6aca,	// (0x00013c69) main_cset_slider_pane_g9

0x6ad6,	// (0x00013c75) main_cset_slider_pane_g10_ParamLimits

0x6ad6,	// (0x00013c75) main_cset_slider_pane_g10

0x6ae2,	// (0x00013c81) main_cset_slider_pane_g11_ParamLimits

0x6ae2,	// (0x00013c81) main_cset_slider_pane_g11

0x6aee,	// (0x00013c8d) main_cset_slider_pane_g12_ParamLimits

0x6aee,	// (0x00013c8d) main_cset_slider_pane_g12

0x6afa,	// (0x00013c99) main_cset_slider_pane_g13_ParamLimits

0x6afa,	// (0x00013c99) main_cset_slider_pane_g13

0x6b06,	// (0x00013ca5) main_cset_slider_pane_g14_ParamLimits

0x6b06,	// (0x00013ca5) main_cset_slider_pane_g14

0x6b12,	// (0x00013cb1) main_cset_slider_pane_g15_ParamLimits

0x6b12,	// (0x00013cb1) main_cset_slider_pane_g15

0xd353,	// (0x0001a4f2) main_cset_slider_pane_t14_ParamLimits

0xd353,	// (0x0001a4f2) main_cset_slider_pane_t14

0xd38c,	// (0x0001a52b) main_cset_slider_pane_t15_ParamLimits

0xd38c,	// (0x0001a52b) main_cset_slider_pane_t15

0x7097,	// (0x00014236) aid_cam4_burst_size_cell_ParamLimits

0x7097,	// (0x00014236) aid_cam4_burst_size_cell

0x70b7,	// (0x00014256) grid_cam4_burst_pane_ParamLimits

0x70b7,	// (0x00014256) grid_cam4_burst_pane

0x70ef,	// (0x0001428e) linegrid_cam4_burst_pane_ParamLimits

0x70ef,	// (0x0001428e) linegrid_cam4_burst_pane

0x0182,	// (0x0000d321) scroll_pane_cp30_ParamLimits

0x0182,	// (0x0000d321) scroll_pane_cp30

0x7113,	// (0x000142b2) cell_cam4_burst_pane_ParamLimits

0x7113,	// (0x000142b2) cell_cam4_burst_pane

0xd562,	// (0x0001a701) linegrid_cam4_burst_pane_g1_ParamLimits

0xd562,	// (0x0001a701) linegrid_cam4_burst_pane_g1

0x7160,	// (0x000142ff) linegrid_cam4_burst_pane_g2_ParamLimits

0x7160,	// (0x000142ff) linegrid_cam4_burst_pane_g2

0xd56f,	// (0x0001a70e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd56f,	// (0x0001a70e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0001cc08) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0001cc08) linegrid_cam4_burst_pane_g

0x7171,	// (0x00014310) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7171,	// (0x00014310) linegrid_cam4_burst_pane_g3_copy1

0xd57c,	// (0x0001a71b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd57c,	// (0x0001a71b) linegrid_cam4_burst_pane_g4

0x718b,	// (0x0001432a) linegrid_cam4_burst_pane_g5_ParamLimits

0x718b,	// (0x0001432a) linegrid_cam4_burst_pane_g5

0x719c,	// (0x0001433b) linegrid_cam4_burst_pane_g6_ParamLimits

0x719c,	// (0x0001433b) linegrid_cam4_burst_pane_g6

0xd589,	// (0x0001a728) linegrid_cam4_burst_pane_g7_ParamLimits

0xd589,	// (0x0001a728) linegrid_cam4_burst_pane_g7

0x71b3,	// (0x00014352) cell_cam4_burst_pane_g1

0xd5a2,	// (0x0001a741) main_cam5_pane_t1_ParamLimits

0xd5a2,	// (0x0001a741) main_cam5_pane_t1

0xd5b4,	// (0x0001a753) main_cam5_pane_t2_ParamLimits

0xd5b4,	// (0x0001a753) main_cam5_pane_t2

0xd5c6,	// (0x0001a765) main_cam5_pane_t3_ParamLimits

0xd5c6,	// (0x0001a765) main_cam5_pane_t3

0xd5d8,	// (0x0001a777) main_cam5_pane_t4_ParamLimits

0xd5d8,	// (0x0001a777) main_cam5_pane_t4

0xd5f0,	// (0x0001a78f) main_cam5_pane_t5_ParamLimits

0xd5f0,	// (0x0001a78f) main_cam5_pane_t5

0xd604,	// (0x0001a7a3) main_cam5_pane_t6_ParamLimits

0xd604,	// (0x0001a7a3) main_cam5_pane_t6

0xd618,	// (0x0001a7b7) main_cam5_pane_t7_ParamLimits

0xd618,	// (0x0001a7b7) main_cam5_pane_t7

0xd62a,	// (0x0001a7c9) main_cam5_pane_t8_ParamLimits

0xd62a,	// (0x0001a7c9) main_cam5_pane_t8

0xd646,	// (0x0001a7e5) main_cam5_pane_t9_ParamLimits

0xd646,	// (0x0001a7e5) main_cam5_pane_t9

0xd658,	// (0x0001a7f7) main_cam5_pane_t10_ParamLimits

0xd658,	// (0x0001a7f7) main_cam5_pane_t10

0xd66a,	// (0x0001a809) main_cam5_pane_t11_ParamLimits

0xd66a,	// (0x0001a809) main_cam5_pane_t11

0xd67c,	// (0x0001a81b) main_cam5_pane_t12_ParamLimits

0xd67c,	// (0x0001a81b) main_cam5_pane_t12

0xd691,	// (0x0001a830) main_cam5_pane_t13_ParamLimits

0xd691,	// (0x0001a830) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0001cc14) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0001cc14) main_cam5_pane_t

0x132c,	// (0x0000e4cb) popup_scut_keymap_window_ParamLimits

0x132c,	// (0x0000e4cb) popup_scut_keymap_window

0x71c6,	// (0x00014365) aid_size_cell_brow_shortcut

0xaa77,	// (0x00017c16) bg_popup_window_pane_cp010

0x71d2,	// (0x00014371) grid_scut_pane

0x71de,	// (0x0001437d) cell_scut_pane_ParamLimits

0x71de,	// (0x0001437d) cell_scut_pane

0x71f5,	// (0x00014394) cell_scut_pane_g1

0xd6ae,	// (0x0001a84d) cell_scut_pane_t1

0xd6bd,	// (0x0001a85c) cell_scut_pane_t2

0x71fe,	// (0x0001439d) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0001cc2f) cell_scut_pane_t

0x4f6a,	// (0x00012109) main_mup3_pane_g8_ParamLimits

0x4f6a,	// (0x00012109) main_mup3_pane_g8

0x6409,	// (0x000135a8) area_vitu2_query_pane_ParamLimits

0x6409,	// (0x000135a8) area_vitu2_query_pane

0x6fe1,	// (0x00014180) input_focus_pane_cp08

0xd6cc,	// (0x0001a86b) area_vitu2_query_pane_g1

0x720c,	// (0x000143ab) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0001cc36) area_vitu2_query_pane_g

0x721d,	// (0x000143bc) area_vitu2_query_pane_t1_ParamLimits

0x721d,	// (0x000143bc) area_vitu2_query_pane_t1

0x7231,	// (0x000143d0) area_vitu2_query_pane_t2_ParamLimits

0x7231,	// (0x000143d0) area_vitu2_query_pane_t2

0x7245,	// (0x000143e4) area_vitu2_query_pane_t3_ParamLimits

0x7245,	// (0x000143e4) area_vitu2_query_pane_t3

0xd6d8,	// (0x0001a877) area_vitu2_query_pane_t4_ParamLimits

0xd6d8,	// (0x0001a877) area_vitu2_query_pane_t4

0xd700,	// (0x0001a89f) area_vitu2_query_pane_t5_ParamLimits

0xd700,	// (0x0001a89f) area_vitu2_query_pane_t5

0xd728,	// (0x0001a8c7) area_vitu2_query_pane_t6_ParamLimits

0xd728,	// (0x0001a8c7) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0001cc3b) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0001cc3b) area_vitu2_query_pane_t

0x726d,	// (0x0001440c) bg_button_pane_cp018

0x727b,	// (0x0001441a) bg_button_pane_cp021

0x7287,	// (0x00014426) bg_button_pane_cp022

0x7296,	// (0x00014435) input_focus_pane_cp09

0x2f52,	// (0x000100f1) aid_size_touch_mv_arrow_left

0x2f7b,	// (0x0001011a) aid_size_touch_mv_arrow_right

0x6b2a,	// (0x00013cc9) main_cset_slider_pane_g16_ParamLimits

0x6b2a,	// (0x00013cc9) main_cset_slider_pane_g16

0x6b36,	// (0x00013cd5) main_cset_slider_pane_g17_ParamLimits

0x6b36,	// (0x00013cd5) main_cset_slider_pane_g17

0x71b3,	// (0x00014352) cell_cam4_burst_pane_g1_ParamLimits

0x94f7,	// (0x00016696) compa_mode_pane

0x6d1c,	// (0x00013ebb) popup_vtel_slider_window_g3_ParamLimits

0x6d1c,	// (0x00013ebb) popup_vtel_slider_window_g3

0x6d33,	// (0x00013ed2) popup_vtel_slider_window_g4_ParamLimits

0x6d33,	// (0x00013ed2) popup_vtel_slider_window_g4

0x6d4a,	// (0x00013ee9) popup_vtel_slider_window_t1_ParamLimits

0x6d4a,	// (0x00013ee9) popup_vtel_slider_window_t1

0x94f7,	// (0x00016696) main_cl_pane

0xbf5c,	// (0x000190fb) popup_imed_adjust2_window_ParamLimits

0xbf34,	// (0x000190d3) bg_tb_trans_pane_cp05_ParamLimits

0xc953,	// (0x00019af2) popup_imed_adjust2_window_g1_ParamLimits

0xc962,	// (0x00019b01) popup_imed_adjust2_window_g2_ParamLimits

0xc962,	// (0x00019b01) popup_imed_adjust2_window_g2

0xc96e,	// (0x00019b0d) popup_imed_adjust2_window_g3_ParamLimits

0xc96e,	// (0x00019b0d) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0001c9ac) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0001c9ac) popup_imed_adjust2_window_g

0xc97a,	// (0x00019b19) popup_imed_adjust2_window_t1_ParamLimits

0xc992,	// (0x00019b31) slider_imed_adjust_pane_ParamLimits

0xc9a6,	// (0x00019b45) slider_imed_adjust_pane_g1_ParamLimits

0xc9b6,	// (0x00019b55) slider_imed_adjust_pane_g2_ParamLimits

0xc9c6,	// (0x00019b65) slider_imed_adjust_pane_g3_ParamLimits

0xc9d7,	// (0x00019b76) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0001c9b3) slider_imed_adjust_pane_g_ParamLimits

0x6114,	// (0x000132b3) aid_touch_area_cam4_ParamLimits

0x6114,	// (0x000132b3) aid_touch_area_cam4

0xd0c2,	// (0x0001a261) battery_pane_cp01

0x61e4,	// (0x00013383) main_camera4_pane_g6_ParamLimits

0x61e4,	// (0x00013383) main_camera4_pane_g6

0x620e,	// (0x000133ad) main_camera4_pane_t2_ParamLimits

0x620e,	// (0x000133ad) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0001cab6) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0001cab6) main_camera4_pane_t

0x6255,	// (0x000133f4) aid_touch_area_vid4_ParamLimits

0x6255,	// (0x000133f4) aid_touch_area_vid4

0x62bc,	// (0x0001345b) main_video4_pane_g5_ParamLimits

0x62bc,	// (0x0001345b) main_video4_pane_g5

0x62e7,	// (0x00013486) vid4_progress_pane_ParamLimits

0x62e7,	// (0x00013486) vid4_progress_pane

0xd319,	// (0x0001a4b8) main_cset_slider_pane_g18_ParamLimits

0xd319,	// (0x0001a4b8) main_cset_slider_pane_g18

0xd596,	// (0x0001a735) cell_cam4_burst_pane_g2_ParamLimits

0xd596,	// (0x0001a735) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0001cc0f) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0001cc0f) cell_cam4_burst_pane_g

0x9cdc,	// (0x00016e7b) bg_cl_pane_ParamLimits

0x9cdc,	// (0x00016e7b) bg_cl_pane

0x72a5,	// (0x00014444) cl_header_pane_ParamLimits

0x72a5,	// (0x00014444) cl_header_pane

0x72b9,	// (0x00014458) cl_listscroll_pane_ParamLimits

0x72b9,	// (0x00014458) cl_listscroll_pane

0xd774,	// (0x0001a913) bg_cl_pane_g1

0xd77c,	// (0x0001a91b) bg_cl_pane_g2

0xd784,	// (0x0001a923) bg_cl_pane_g3

0xd78c,	// (0x0001a92b) bg_cl_pane_g4

0xd794,	// (0x0001a933) bg_cl_pane_g5

0xd79c,	// (0x0001a93b) bg_cl_pane_g6

0xd7a4,	// (0x0001a943) bg_cl_pane_g7

0xd7ac,	// (0x0001a94b) bg_cl_pane_g8

0xd7b4,	// (0x0001a953) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0001cc4a) bg_cl_pane_g

0x72c9,	// (0x00014468) aid_height_cl_leading_ParamLimits

0x72c9,	// (0x00014468) aid_height_cl_leading

0x72d5,	// (0x00014474) aid_height_cl_text_ParamLimits

0x72d5,	// (0x00014474) aid_height_cl_text

0x9567,	// (0x00016706) bg_cl_header_pane_ParamLimits

0x9567,	// (0x00016706) bg_cl_header_pane

0x72f4,	// (0x00014493) cl_header_pane_g1_ParamLimits

0x72f4,	// (0x00014493) cl_header_pane_g1

0x730a,	// (0x000144a9) cl_header_pane_t1_ParamLimits

0x730a,	// (0x000144a9) cl_header_pane_t1

0xd7bc,	// (0x0001a95b) cl_list_pane

0xd2ec,	// (0x0001a48b) hc_scroll_pane_cp01

0xa22e,	// (0x000173cd) bg_cl_header_pane_g1

0xd1d2,	// (0x0001a371) bg_cl_header_pane_g2

0xa24e,	// (0x000173ed) bg_cl_header_pane_g3

0xd1e2,	// (0x0001a381) bg_cl_header_pane_g4

0xd1da,	// (0x0001a379) bg_cl_header_pane_g5

0xd477,	// (0x0001a616) bg_cl_header_pane_g6

0xd1fa,	// (0x0001a399) bg_cl_header_pane_g7

0xd202,	// (0x0001a3a1) bg_cl_header_pane_g8

0xd1f2,	// (0x0001a391) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0001cc5d) bg_cl_header_pane_g

0x7323,	// (0x000144c2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7323,	// (0x000144c2) hc_cl_list_double_graphic_heading_pane

0x7334,	// (0x000144d3) hc_cl_list_single_graphic_pane_ParamLimits

0x7334,	// (0x000144d3) hc_cl_list_single_graphic_pane

0x734a,	// (0x000144e9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x734a,	// (0x000144e9) hc_cl_list_single_graphic_pane_g1

0x7356,	// (0x000144f5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7356,	// (0x000144f5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0001cc70) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0001cc70) hc_cl_list_single_graphic_pane_g

0x736a,	// (0x00014509) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x736a,	// (0x00014509) hc_cl_list_single_graphic_pane_t1

0x734a,	// (0x000144e9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x734a,	// (0x000144e9) hc_cl_list_double_graphic_heading_pane_g1

0x737f,	// (0x0001451e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x737f,	// (0x0001451e) hc_cl_list_double_graphic_heading_pane_g2

0x7393,	// (0x00014532) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7393,	// (0x00014532) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0001cc75) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0001cc75) hc_cl_list_double_graphic_heading_pane_g

0x73a7,	// (0x00014546) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73a7,	// (0x00014546) hc_cl_list_double_graphic_heading_pane_t1

0x73bc,	// (0x0001455b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73bc,	// (0x0001455b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0001cc7c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0001cc7c) hc_cl_list_double_graphic_heading_pane_t

0xd7cd,	// (0x0001a96c) vid4_progress_pane_g1

0xd7dd,	// (0x0001a97c) vid4_progress_pane_g2

0xacbf,	// (0x00017e5e) vid4_progress_pane_g3

0xd7ed,	// (0x0001a98c) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0001cc81) vid4_progress_pane_g

0xd80b,	// (0x0001a9aa) vid4_progress_pane_t1

0xd820,	// (0x0001a9bf) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0001cc8c) vid4_progress_pane_t

0xd84b,	// (0x0001a9ea) wait_bar_pane_cp07

0xc22d,	// (0x000193cc) blid_firmament_pane_ParamLimits

0xc270,	// (0x0001940f) popup_blid_sat_info2_window_g1

0xc294,	// (0x00019433) popup_blid_sat_info2_window_t3

0xc2a2,	// (0x00019441) popup_blid_sat_info2_window_t4

0xc2b0,	// (0x0001944f) popup_blid_sat_info2_window_t5

0xc2be,	// (0x0001945d) popup_blid_sat_info2_window_t6

0xc2ce,	// (0x0001946d) popup_blid_sat_info2_window_t7

0xc2dc,	// (0x0001947b) popup_blid_sat_info2_window_t8

0xc2ea,	// (0x00019489) popup_blid_sat_info2_window_t9

0xc2f8,	// (0x00019497) popup_blid_sat_info2_window_t10

0xc3ba,	// (0x00019559) aid_firma_cardinal_ParamLimits

0xc3ce,	// (0x0001956d) blid_firmament_pane_t1_ParamLimits

0xc3e5,	// (0x00019584) blid_firmament_pane_t2_ParamLimits

0xc3fc,	// (0x0001959b) blid_firmament_pane_t3_ParamLimits

0xc413,	// (0x000195b2) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0001c8a5) blid_firmament_pane_t_ParamLimits

0xc42a,	// (0x000195c9) blid_sat_info_pane_ParamLimits

0x9567,	// (0x00016706) main_cam_set_pane_ParamLimits

0x57c7,	// (0x00012966) aid_size_cell_colour_35_ParamLimits

0x57e7,	// (0x00012986) aid_size_cell_colour_112_ParamLimits

0x5807,	// (0x000129a6) aid_size_cell_effect_ParamLimits

0xbf34,	// (0x000190d3) bg_tb_trans_pane_cp02_ParamLimits

0xa4d2,	// (0x00017671) heading_imed_pane_ParamLimits

0x5827,	// (0x000129c6) listscroll_imed_pane_ParamLimits

0xb566,	// (0x00018705) popup_call2_audio_first_window_g5_ParamLimits

0xb566,	// (0x00018705) popup_call2_audio_first_window_g5

0x5dbf,	// (0x00012f5e) aid_size_touch_image3_arrow_left_ParamLimits

0x5dbf,	// (0x00012f5e) aid_size_touch_image3_arrow_left

0x5deb,	// (0x00012f8a) aid_size_touch_image3_arrow_right_ParamLimits

0x5deb,	// (0x00012f8a) aid_size_touch_image3_arrow_right

0xd836,	// (0x0001a9d5) vid4_progress_pane_t3

0x5b3a,	// (0x00012cd9) main_hwr_training_symbol_option_pane_ParamLimits

0x5b3a,	// (0x00012cd9) main_hwr_training_symbol_option_pane

0xcc40,	// (0x00019ddf) popup_hwr_training_preview_window_ParamLimits

0xcc40,	// (0x00019ddf) popup_hwr_training_preview_window

0x5b5a,	// (0x00012cf9) hwr_training_navi_pane_g5_ParamLimits

0x5b5a,	// (0x00012cf9) hwr_training_navi_pane_g5

0xd1c0,	// (0x0001a35f) popup_char_count_window

0x9567,	// (0x00016706) bg_popup_sub_pane_cp20_ParamLimits

0x6e62,	// (0x00014001) list_vitu2_match_list_pane_ParamLimits

0x6e71,	// (0x00014010) vitu2_page_scroll_pane_ParamLimits

0x6e71,	// (0x00014010) vitu2_page_scroll_pane

0xd8b7,	// (0x0001aa56) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8b7,	// (0x0001aa56) list_single_hwr_training_symbol_option_pane

0xd8ca,	// (0x0001aa69) list_single_hwr_training_symbol_option_pane_g1

0xd8d2,	// (0x0001aa71) list_single_hwr_training_symbol_option_pane_t1

0xd8e0,	// (0x0001aa7f) bg_button_pane_cp023

0xd8e9,	// (0x0001aa88) bg_button_pane_cp024

0x73d1,	// (0x00014570) vitu2_page_scroll_pane_g1

0x73d9,	// (0x00014578) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0001cc93) vitu2_page_scroll_pane_g

0x73e1,	// (0x00014580) vitu2_page_scroll_pane_t1

0xd91c,	// (0x0001aabb) popup_char_count_window_g1

0xd925,	// (0x0001aac4) popup_char_count_window_g2

0xd92e,	// (0x0001aacd) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0001cc98) popup_char_count_window_g

0xd937,	// (0x0001aad6) popup_char_count_window_t1

0x94f7,	// (0x00016696) main_vded2_pane

0xc93f,	// (0x00019ade) aid_size_cell_imed_line

0xc949,	// (0x00019ae8) grid_imed_line_width_pane

0x6355,	// (0x000134f4) vid4_indicators_pane_g4

0xd945,	// (0x0001aae4) cell_imed_line_width_pane_ParamLimits

0xd945,	// (0x0001aae4) cell_imed_line_width_pane

0xd959,	// (0x0001aaf8) cell_imed_line_width_pane_g1

0xd962,	// (0x0001ab01) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0001cc9f) cell_imed_line_width_pane_g

0x73f0,	// (0x0001458f) main_vded2_pane_g1_ParamLimits

0x73f0,	// (0x0001458f) main_vded2_pane_g1

0x7406,	// (0x000145a5) main_vded2_pane_g2_ParamLimits

0x7406,	// (0x000145a5) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0001cca4) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0001cca4) main_vded2_pane_g

0x7418,	// (0x000145b7) vded2_slider_pane_ParamLimits

0x7418,	// (0x000145b7) vded2_slider_pane

0x7428,	// (0x000145c7) aid_size_touch_vded2_end

0x7432,	// (0x000145d1) aid_size_touch_vded2_playhead

0xd96a,	// (0x0001ab09) aid_size_touch_vded2_start

0xd972,	// (0x0001ab11) vded2_slider_bg_pane

0xd97b,	// (0x0001ab1a) vded2_slider_pane_g1

0xd984,	// (0x0001ab23) vded2_slider_pane_g2

0x743c,	// (0x000145db) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0001cca9) vded2_slider_pane_g

0xd98c,	// (0x0001ab2b) vded2_slider_bg_pane_g1

0xd995,	// (0x0001ab34) vded2_slider_bg_pane_g2

0xd99e,	// (0x0001ab3d) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0001ccb0) vded2_slider_bg_pane_g

0x358c,	// (0x0001072b) aid_postcard_touch_down_pane_ParamLimits

0x358c,	// (0x0001072b) aid_postcard_touch_down_pane

0x35a2,	// (0x00010741) aid_postcard_touch_up_pane_ParamLimits

0x35a2,	// (0x00010741) aid_postcard_touch_up_pane

0x94f7,	// (0x00016696) main_blid2_pane

0xbf42,	// (0x000190e1) popup_blid2_search_window

0x94f7,	// (0x00016696) blid2_gps_pane

0x94f7,	// (0x00016696) blid2_navig_pane

0x94f7,	// (0x00016696) blid2_search_pane

0x94f7,	// (0x00016696) blid2_tripm_pane

0x7447,	// (0x000145e6) blid2_search_pane_g1_ParamLimits

0x7447,	// (0x000145e6) blid2_search_pane_g1

0x7461,	// (0x00014600) blid2_search_pane_t1_ParamLimits

0x7461,	// (0x00014600) blid2_search_pane_t1

0x7473,	// (0x00014612) aid_size_cell_blid2_gps_ParamLimits

0x7473,	// (0x00014612) aid_size_cell_blid2_gps

0x748b,	// (0x0001462a) blid2_gps_pane_g1_ParamLimits

0x748b,	// (0x0001462a) blid2_gps_pane_g1

0x749f,	// (0x0001463e) grid_blid2_satellite_pane_ParamLimits

0x749f,	// (0x0001463e) grid_blid2_satellite_pane

0x74b9,	// (0x00014658) blid2_navig_pane_g1_ParamLimits

0x74b9,	// (0x00014658) blid2_navig_pane_g1

0x74c5,	// (0x00014664) blid2_navig_pane_t1_ParamLimits

0x74c5,	// (0x00014664) blid2_navig_pane_t1

0x74e0,	// (0x0001467f) blid2_navig_pane_t2_ParamLimits

0x74e0,	// (0x0001467f) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0001ccb7) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0001ccb7) blid2_navig_pane_t

0x74fb,	// (0x0001469a) blid2_navig_ring_pane_ParamLimits

0x74fb,	// (0x0001469a) blid2_navig_ring_pane

0x7514,	// (0x000146b3) blid2_speed_pane_ParamLimits

0x7514,	// (0x000146b3) blid2_speed_pane

0x7520,	// (0x000146bf) blid2_tripm_pane_g1_ParamLimits

0x7520,	// (0x000146bf) blid2_tripm_pane_g1

0x7539,	// (0x000146d8) blid2_tripm_pane_g2_ParamLimits

0x7539,	// (0x000146d8) blid2_tripm_pane_g2

0x754d,	// (0x000146ec) blid2_tripm_pane_g3_ParamLimits

0x754d,	// (0x000146ec) blid2_tripm_pane_g3

0x7561,	// (0x00014700) blid2_tripm_pane_g4_ParamLimits

0x7561,	// (0x00014700) blid2_tripm_pane_g4

0x7575,	// (0x00014714) blid2_tripm_pane_g5_ParamLimits

0x7575,	// (0x00014714) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0001ccbc) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0001ccbc) blid2_tripm_pane_g

0x759b,	// (0x0001473a) blid2_tripm_pane_t1_ParamLimits

0x759b,	// (0x0001473a) blid2_tripm_pane_t1

0x75b6,	// (0x00014755) blid2_tripm_pane_t2_ParamLimits

0x75b6,	// (0x00014755) blid2_tripm_pane_t2

0x75cf,	// (0x0001476e) blid2_tripm_pane_t3_ParamLimits

0x75cf,	// (0x0001476e) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0001ccc9) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0001ccc9) blid2_tripm_pane_t

0x7616,	// (0x000147b5) cell_blid2_satellite_pane_ParamLimits

0x7616,	// (0x000147b5) cell_blid2_satellite_pane

0x7634,	// (0x000147d3) cell_blid2_satellite_pane_g1

0xd9a7,	// (0x0001ab46) cell_blid2_satellite_pane_t1

0xc43a,	// (0x000195d9) blid2_speed_pane_g1

0xd9b5,	// (0x0001ab54) blid2_speed_pane_t1

0xd9c3,	// (0x0001ab62) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0001ccd2) blid2_speed_pane_t

0xc43a,	// (0x000195d9) blid2_navig_ring_pane_g1

0x763d,	// (0x000147dc) blid2_navig_ring_pane_g2

0x7645,	// (0x000147e4) blid2_navig_ring_pane_g3

0x764d,	// (0x000147ec) blid2_navig_ring_pane_g4

0x7655,	// (0x000147f4) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0001ccd7) blid2_navig_ring_pane_g

0x94f7,	// (0x00016696) bg_popup_window_pane_cp011

0xd9d1,	// (0x0001ab70) popup_blid2_search_window_g1

0xd9d9,	// (0x0001ab78) popup_blid2_search_window_t1

0xd9e7,	// (0x0001ab86) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0001cce2) popup_blid2_search_window_t

0xa13d,	// (0x000172dc) main_browser_pane_g1

0x9cdc,	// (0x00016e7b) main_browser_pane_ParamLimits

0x9567,	// (0x00016706) bg_button_pane_cp011_ParamLimits

0x670a,	// (0x000138a9) cell_vitu2_function_pane_g1_ParamLimits

0x9567,	// (0x00016706) bg_popup_sub_pane_cp22_ParamLimits

0x6fe1,	// (0x00014180) input_focus_pane_cp08_ParamLimits

0x6fee,	// (0x0001418d) popup_vitu2_query_button_pane_ParamLimits

0x6fee,	// (0x0001418d) popup_vitu2_query_button_pane

0x6fc3,	// (0x00014162) popup_vitu2_query_input_button_pane

0xd4ec,	// (0x0001a68b) popup_vitu2_query_window_g1_ParamLimits

0x6fff,	// (0x0001419e) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0001cbe9) popup_vitu2_query_window_g_ParamLimits

0x94f7,	// (0x00016696) bg_button_pane_cp026

0x765d,	// (0x000147fc) popup_vitu2_query_input_button_pane_g1

0x94f7,	// (0x00016696) bg_button_pane_cp025

0xd9f5,	// (0x0001ab94) popup_vitu2_query_button_pane_t1

0x4c26,	// (0x00011dc5) main_mp3_pane_t6

0x4c34,	// (0x00011dd3) popup_slider_window_cp01

0xd0d2,	// (0x0001a271) cam4_battery_pane

0xd12b,	// (0x0001a2ca) cam4_battery_pane_cp02

0xd7c5,	// (0x0001a964) cam4_battery_pane_cp01

0xd7c5,	// (0x0001a964) cam4_battery_pane_cp03

0xc43a,	// (0x000195d9) cam4_battery_pane_g1

0xda03,	// (0x0001aba2) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0001cce7) cam4_battery_pane_g

0xc306,	// (0x000194a5) popup_blid_sat_info2_window_t11

0x2f52,	// (0x000100f1) aid_size_touch_mv_arrow_left_ParamLimits

0x2f7b,	// (0x0001011a) aid_size_touch_mv_arrow_right_ParamLimits

0xa9d7,	// (0x00017b76) navi_pane_g1_ParamLimits

0x2fa4,	// (0x00010143) navi_pane_g2_ParamLimits

0x2fd2,	// (0x00010171) navi_pane_g3_ParamLimits

0xf418,	// (0x0001c5b7) navi_pane_g_ParamLimits

0x302a,	// (0x000101c9) navi_pane_mv_t1_ParamLimits

0x5833,	// (0x000129d2) grid_imed_effect_pane_ParamLimits

0xa086,	// (0x00017225) aid_placing_vt_slider_lsc

0xa08e,	// (0x0001722d) aid_placing_vt_slider_prt

0x9567,	// (0x00016706) bg_tb_trans_pane_cp01_ParamLimits

0xc5c6,	// (0x00019765) popup_image_details_window_g1_ParamLimits

0xc5d9,	// (0x00019778) popup_image_details_window_g2_ParamLimits

0xc5ee,	// (0x0001978d) popup_image_details_window_g3_ParamLimits

0xc5ee,	// (0x0001978d) popup_image_details_window_g3

0xf74b,	// (0x0001c8ea) popup_image_details_window_g_ParamLimits

0xc602,	// (0x000197a1) popup_image_details_window_t1_ParamLimits

0xc614,	// (0x000197b3) popup_image_details_window_t2_ParamLimits

0xc62d,	// (0x000197cc) popup_image_details_window_t3_ParamLimits

0xc641,	// (0x000197e0) popup_image_details_window_t4_ParamLimits

0xc65c,	// (0x000197fb) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0001c8f1) popup_image_details_window_t_ParamLimits

0x72e1,	// (0x00014480) cl_header_name_pane_ParamLimits

0x72e1,	// (0x00014480) cl_header_name_pane

0x7665,	// (0x00014804) cl_header_name_pane_t1_ParamLimits

0x7665,	// (0x00014804) cl_header_name_pane_t1

0x7686,	// (0x00014825) cl_header_name_pane_t2_ParamLimits

0x7686,	// (0x00014825) cl_header_name_pane_t2

0x76c8,	// (0x00014867) cl_header_name_pane_t3_ParamLimits

0x76c8,	// (0x00014867) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0001ccec) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0001ccec) cl_header_name_pane_t

0x2ffb,	// (0x0001019a) navi_pane_mv_g2_ParamLimits

0xd14e,	// (0x0001a2ed) field_vitu2_entry_pane_g1_ParamLimits

0xd15a,	// (0x0001a2f9) field_vitu2_entry_pane_g2_ParamLimits

0xd166,	// (0x0001a305) field_vitu2_entry_pane_g3_ParamLimits

0xd166,	// (0x0001a305) field_vitu2_entry_pane_g3

0xf949,	// (0x0001cae8) field_vitu2_entry_pane_g_ParamLimits

0x65aa,	// (0x00013749) cell_vitu2_itu_pane_g1_ParamLimits

0x65ba,	// (0x00013759) cell_vitu2_itu_pane_g2_ParamLimits

0x65ba,	// (0x00013759) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0001caf4) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0001caf4) cell_vitu2_itu_pane_g

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp05_ParamLimits

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp05

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp03

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp04

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp10_ParamLimits

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp10

0x7287,	// (0x00014426) bg_vkb2_func_pane_cp08

0x726d,	// (0x0001440c) bg_vkb2_func_pane_cp06

0x727b,	// (0x0001441a) bg_vkb2_func_pane_cp07

0xd8f2,	// (0x0001aa91) bg_vkb2_func_pane_cp11_ParamLimits

0xd8f2,	// (0x0001aa91) bg_vkb2_func_pane_cp11

0xd907,	// (0x0001aaa6) bg_vkb2_func_pane_cp12_ParamLimits

0xd907,	// (0x0001aaa6) bg_vkb2_func_pane_cp12

0x94f7,	// (0x00016696) bg_vkb2_func_pane_cp09

0xd1d2,	// (0x0001a371) bg_vkb2_func_pane_g1

0xa24e,	// (0x000173ed) bg_vkb2_func_pane_g2

0xd1da,	// (0x0001a379) bg_vkb2_func_pane_g3

0xd1e2,	// (0x0001a381) bg_vkb2_func_pane_g4

0xd477,	// (0x0001a616) bg_vkb2_func_pane_g5

0xd1fa,	// (0x0001a399) bg_vkb2_func_pane_g6

0xd202,	// (0x0001a3a1) bg_vkb2_func_pane_g7

0xd1f2,	// (0x0001a391) bg_vkb2_func_pane_g8

0xa22e,	// (0x000173cd) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0001ccf3) bg_vkb2_func_pane_g

0x7589,	// (0x00014728) blid2_tripm_pane_g6_ParamLimits

0x7589,	// (0x00014728) blid2_tripm_pane_g6

0xcf31,	// (0x0001a0d0) mp4_progress_pane_g1

0x7602,	// (0x000147a1) blid2_tripm_values_pane_ParamLimits

0x7602,	// (0x000147a1) blid2_tripm_values_pane

0x76f9,	// (0x00014898) blid2_tripm_values_pane_t1

0x7707,	// (0x000148a6) blid2_tripm_values_pane_t2

0x7715,	// (0x000148b4) blid2_tripm_values_pane_t3

0x7723,	// (0x000148c2) blid2_tripm_values_pane_t4

0x7731,	// (0x000148d0) blid2_tripm_values_pane_t5

0x773f,	// (0x000148de) blid2_tripm_values_pane_t6

0x774d,	// (0x000148ec) blid2_tripm_values_pane_t7

0x775b,	// (0x000148fa) blid2_tripm_values_pane_t8

0x7769,	// (0x00014908) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0001cd06) blid2_tripm_values_pane_t

0x209c,	// (0x0000f23b) call_video_pane_t1_ParamLimits

0x20ae,	// (0x0000f24d) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0001c440) call_video_pane_t_ParamLimits

0x34f6,	// (0x00010695) msg_header_pane_g1_ParamLimits

0xac1a,	// (0x00017db9) msg_header_pane_g2_ParamLimits

0xac1a,	// (0x00017db9) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0001c65a) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0001c65a) msg_header_pane_g

0x9cdc,	// (0x00016e7b) main_clock2_pane_ParamLimits

0x555f,	// (0x000126fe) grid_clock2_toolbar_pane_ParamLimits

0x555f,	// (0x000126fe) grid_clock2_toolbar_pane

0x555f,	// (0x000126fe) listscroll_clock2_pane_ParamLimits

0x555f,	// (0x000126fe) listscroll_clock2_pane

0x563b,	// (0x000127da) main_clock2_pane_t3_ParamLimits

0x563b,	// (0x000127da) main_clock2_pane_t3

0x5656,	// (0x000127f5) main_clock2_pane_t4_ParamLimits

0x5656,	// (0x000127f5) main_clock2_pane_t4

0xda0d,	// (0x0001abac) cell_clock2_toolbar_pane

0xda15,	// (0x0001abb4) cell_clock2_toolbar_pane_cp01

0xda15,	// (0x0001abb4) cell_clock2_toolbar_pane_cp02

0xda1d,	// (0x0001abbc) cell_clock2_toolbar_pane_cp03

0xda25,	// (0x0001abc4) list_clock2_pane

0xa92e,	// (0x00017acd) scroll_pane_cp10

0xda2d,	// (0x0001abcc) list_single_clock2_pane_ParamLimits

0xda2d,	// (0x0001abcc) list_single_clock2_pane

0xaa77,	// (0x00017c16) list_highlight_pane_cp08

0xda3a,	// (0x0001abd9) list_single_clock2_pane_t1

0xda48,	// (0x0001abe7) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0001cd19) list_single_clock2_pane_t

0x94f7,	// (0x00016696) bg_button_pane_cp10

0xda56,	// (0x0001abf5) cell_clock2_toolbar_pane_g1

0x3518,	// (0x000106b7) aid_main_viewer_pane_g1_ParamLimits

0x3518,	// (0x000106b7) aid_main_viewer_pane_g1

0x3526,	// (0x000106c5) aid_main_viewer_pane_g2_ParamLimits

0x3526,	// (0x000106c5) aid_main_viewer_pane_g2

0x3534,	// (0x000106d3) aid_main_viewer_pane_g3_ParamLimits

0x3534,	// (0x000106d3) aid_main_viewer_pane_g3

0x3543,	// (0x000106e2) aid_main_viewer_pane_g4_ParamLimits

0x3543,	// (0x000106e2) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0001c66b) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0001c66b) aid_main_viewer_pane_g

0x3e49,	// (0x00010fe8) main_calc_pane_ParamLimits

0x3e5d,	// (0x00010ffc) main_dialer2_pane_ParamLimits

0x94f7,	// (0x00016696) main_cam6_pane

0x94f7,	// (0x00016696) main_vid6_pane

0x556b,	// (0x0001270a) listscroll_gen_pane_cp06_ParamLimits

0x556b,	// (0x0001270a) listscroll_gen_pane_cp06

0x5671,	// (0x00012810) main_clock2_pane_t5_ParamLimits

0x5671,	// (0x00012810) main_clock2_pane_t5

0x56c8,	// (0x00012867) aid_call2_pane_cp10_ParamLimits

0x56da,	// (0x00012879) aid_call_pane_cp10_ParamLimits

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56ec,	// (0x0001288b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56ec,	// (0x0001288b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9ac,	// (0x00017b4b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0001c9a1) popup_clock_analogue_window_cp10_g_ParamLimits

0x56fe,	// (0x0001289d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d6c,	// (0x00012f0b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d6c,	// (0x00012f0b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0001ca87) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0001ca87) cell_dialer2_keypad_pane_g

0x5d88,	// (0x00012f27) cell_dialer2_keypad_pane_t1

0x6a1d,	// (0x00013bbc) main_cset_text2_pane_ParamLimits

0x6a1d,	// (0x00013bbc) main_cset_text2_pane

0xd6cc,	// (0x0001a86b) area_vitu2_query_pane_g1_ParamLimits

0x720c,	// (0x000143ab) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0001cc36) area_vitu2_query_pane_g_ParamLimits

0xd750,	// (0x0001a8ef) area_vitu2_query_pane_t7_ParamLimits

0xd750,	// (0x0001a8ef) area_vitu2_query_pane_t7

0x726d,	// (0x0001440c) bg_button_pane_cp018_ParamLimits

0x727b,	// (0x0001441a) bg_button_pane_cp021_ParamLimits

0x7287,	// (0x00014426) bg_button_pane_cp022_ParamLimits

0x7287,	// (0x00014426) bg_vkb2_func_pane_cp08_ParamLimits

0x726d,	// (0x0001440c) bg_vkb2_func_pane_cp06_ParamLimits

0x727b,	// (0x0001441a) bg_vkb2_func_pane_cp07_ParamLimits

0x7296,	// (0x00014435) input_focus_pane_cp09_ParamLimits

0xda5e,	// (0x0001abfd) cam6_autofocus_pane_ParamLimits

0xda5e,	// (0x0001abfd) cam6_autofocus_pane

0x7777,	// (0x00014916) cam6_image_uncrop_pane_ParamLimits

0x7777,	// (0x00014916) cam6_image_uncrop_pane

0x7786,	// (0x00014925) cam6_indi_pane_ParamLimits

0x7786,	// (0x00014925) cam6_indi_pane

0x779c,	// (0x0001493b) cam6_mode_pane_ParamLimits

0x779c,	// (0x0001493b) cam6_mode_pane

0x77ae,	// (0x0001494d) cam6_timer_pane_ParamLimits

0x77ae,	// (0x0001494d) cam6_timer_pane

0x77ba,	// (0x00014959) cam6_zoom_pane_ParamLimits

0x77ba,	// (0x00014959) cam6_zoom_pane

0x77c6,	// (0x00014965) cam6_mode_pane_g1_ParamLimits

0x77c6,	// (0x00014965) cam6_mode_pane_g1

0x77d6,	// (0x00014975) cam6_mode_pane_g2_ParamLimits

0x77d6,	// (0x00014975) cam6_mode_pane_g2

0x77e6,	// (0x00014985) cam6_mode_pane_g3_ParamLimits

0x77e6,	// (0x00014985) cam6_mode_pane_g3

0x77f6,	// (0x00014995) cam6_mode_pane_g4_ParamLimits

0x77f6,	// (0x00014995) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0001cd1e) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0001cd1e) cam6_mode_pane_g

0xda6c,	// (0x0001ac0b) bg_tb_trans_pane_cp08_ParamLimits

0xda6c,	// (0x0001ac0b) bg_tb_trans_pane_cp08

0xda7a,	// (0x0001ac19) cam6_battery_pane_ParamLimits

0xda7a,	// (0x0001ac19) cam6_battery_pane

0xda90,	// (0x0001ac2f) cam6_indi_pane_g1_ParamLimits

0xda90,	// (0x0001ac2f) cam6_indi_pane_g1

0xdaa2,	// (0x0001ac41) cam6_indi_pane_g2_ParamLimits

0xdaa2,	// (0x0001ac41) cam6_indi_pane_g2

0xdab4,	// (0x0001ac53) cam6_indi_pane_g3_ParamLimits

0xdab4,	// (0x0001ac53) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0001cd27) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0001cd27) cam6_indi_pane_g

0xdac6,	// (0x0001ac65) cam6_indi_pane_t1_ParamLimits

0xdac6,	// (0x0001ac65) cam6_indi_pane_t1

0x7806,	// (0x000149a5) cam6_autofocus_pane_g1

0x780e,	// (0x000149ad) cam6_autofocus_pane_g2

0x7816,	// (0x000149b5) cam6_autofocus_pane_g3

0x781e,	// (0x000149bd) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0001cd2e) cam6_autofocus_pane_g

0xdaec,	// (0x0001ac8b) cam6_timer_pane_g1

0xdaf4,	// (0x0001ac93) cam6_timer_pane_t1

0xdb02,	// (0x0001aca1) cam6_zoom_cont_pane

0xdb0a,	// (0x0001aca9) cam6_zoom_pane_g1

0xdb12,	// (0x0001acb1) cam6_zoom_pane_g2

0x7826,	// (0x000149c5) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0001cd37) cam6_zoom_pane_g

0xc43a,	// (0x000195d9) cam6_battery_pane_g1

0xc43a,	// (0x000195d9) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0001c8ae) cam6_battery_pane_g

0xdb1a,	// (0x0001acb9) cam6_zoom_cont_pane_g1

0xdb23,	// (0x0001acc2) cam6_zoom_cont_pane_g2

0xdb2c,	// (0x0001accb) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0001cd3e) cam6_zoom_cont_pane_g

0x7843,	// (0x000149e2) cam6_mode_pane_cp_ParamLimits

0x7843,	// (0x000149e2) cam6_mode_pane_cp

0x77ba,	// (0x00014959) cam6_zoom_pane_cp_ParamLimits

0x77ba,	// (0x00014959) cam6_zoom_pane_cp

0x7855,	// (0x000149f4) vid6_image_uncrop_cif_pane_ParamLimits

0x7855,	// (0x000149f4) vid6_image_uncrop_cif_pane

0x7865,	// (0x00014a04) vid6_image_uncrop_nhd_pane_ParamLimits

0x7865,	// (0x00014a04) vid6_image_uncrop_nhd_pane

0x7777,	// (0x00014916) vid6_image_uncrop_vga_pane_ParamLimits

0x7777,	// (0x00014916) vid6_image_uncrop_vga_pane

0x7874,	// (0x00014a13) vid6_image_uncrop_wvga_pane_ParamLimits

0x7874,	// (0x00014a13) vid6_image_uncrop_wvga_pane

0x7883,	// (0x00014a22) vid6_indi_pane_ParamLimits

0x7883,	// (0x00014a22) vid6_indi_pane

0xda6c,	// (0x0001ac0b) bg_tb_trans_pane_cp09_ParamLimits

0xda6c,	// (0x0001ac0b) bg_tb_trans_pane_cp09

0xdb44,	// (0x0001ace3) cam6_battery_pane_cp_ParamLimits

0xdb44,	// (0x0001ace3) cam6_battery_pane_cp

0xdb50,	// (0x0001acef) vid6_indi_pane_g1_ParamLimits

0xdb50,	// (0x0001acef) vid6_indi_pane_g1

0xdb62,	// (0x0001ad01) vid6_indi_pane_g2_ParamLimits

0xdb62,	// (0x0001ad01) vid6_indi_pane_g2

0xdb74,	// (0x0001ad13) vid6_indi_pane_g3_ParamLimits

0xdb74,	// (0x0001ad13) vid6_indi_pane_g3

0xdb89,	// (0x0001ad28) vid6_indi_pane_g4_ParamLimits

0xdb89,	// (0x0001ad28) vid6_indi_pane_g4

0xdb9e,	// (0x0001ad3d) vid6_indi_pane_g5_ParamLimits

0xdb9e,	// (0x0001ad3d) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0001cd45) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0001cd45) vid6_indi_pane_g

0xdbb8,	// (0x0001ad57) vid6_indi_pane_t1_ParamLimits

0xdbb8,	// (0x0001ad57) vid6_indi_pane_t1

0xdbce,	// (0x0001ad6d) vid6_indi_pane_t2_ParamLimits

0xdbce,	// (0x0001ad6d) vid6_indi_pane_t2

0xdbf6,	// (0x0001ad95) vid6_indi_pane_t3_ParamLimits

0xdbf6,	// (0x0001ad95) vid6_indi_pane_t3

0xdc1e,	// (0x0001adbd) vid6_indi_pane_t4_ParamLimits

0xdc1e,	// (0x0001adbd) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0001cd50) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0001cd50) vid6_indi_pane_t

0xdc42,	// (0x0001ade1) wait_bar_pane_cp08

0x789b,	// (0x00014a3a) main_cset_text2_pane_t1_ParamLimits

0x789b,	// (0x00014a3a) main_cset_text2_pane_t1

0x782e,	// (0x000149cd) listscroll_gen_pane_cp06_t1_ParamLimits

0x782e,	// (0x000149cd) listscroll_gen_pane_cp06_t1

0x94f7,	// (0x00016696) main_cam6_set_pane

0xc6a6,	// (0x00019845) bg_tb_trans_pane_cp06_ParamLimits

0xd0da,	// (0x0001a279) cam4_indicators_pane_g1_ParamLimits

0xd0eb,	// (0x0001a28a) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0001cac4) cam4_indicators_pane_g_ParamLimits

0xd109,	// (0x0001a2a8) cam4_indicators_pane_t1_ParamLimits

0xc90e,	// (0x00019aad) bg_tb_trans_pane_cp07_ParamLimits

0x632e,	// (0x000134cd) vid4_indicators_pane_g1_ParamLimits

0x633b,	// (0x000134da) vid4_indicators_pane_g2_ParamLimits

0x6348,	// (0x000134e7) vid4_indicators_pane_g3_ParamLimits

0x6355,	// (0x000134f4) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0001cad6) vid4_indicators_pane_g_ParamLimits

0x636d,	// (0x0001350c) vid4_indicators_pane_t1_ParamLimits

0xd7cd,	// (0x0001a96c) vid4_progress_pane_g1_ParamLimits

0xd7dd,	// (0x0001a97c) vid4_progress_pane_g2_ParamLimits

0xacbf,	// (0x00017e5e) vid4_progress_pane_g3_ParamLimits

0xd7ed,	// (0x0001a98c) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0001cc81) vid4_progress_pane_g_ParamLimits

0xd80b,	// (0x0001a9aa) vid4_progress_pane_t1_ParamLimits

0xd820,	// (0x0001a9bf) vid4_progress_pane_t2_ParamLimits

0xd836,	// (0x0001a9d5) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0001cc8c) vid4_progress_pane_t_ParamLimits

0xd84b,	// (0x0001a9ea) wait_bar_pane_cp07_ParamLimits

0x78b8,	// (0x00014a57) main_cam6_set_pane_g2_ParamLimits

0x78b8,	// (0x00014a57) main_cam6_set_pane_g2

0x78dc,	// (0x00014a7b) main_cset6_listscroll_pane_ParamLimits

0x78dc,	// (0x00014a7b) main_cset6_listscroll_pane

0x78fc,	// (0x00014a9b) main_cset6_slider_pane_ParamLimits

0x78fc,	// (0x00014a9b) main_cset6_slider_pane

0x7912,	// (0x00014ab1) main_cset6_text2_pane_ParamLimits

0x7912,	// (0x00014ab1) main_cset6_text2_pane

0xdc51,	// (0x0001adf0) main_cset6_text_pane

0xdc59,	// (0x0001adf8) main_cset_list_pane_copy1_ParamLimits

0xdc59,	// (0x0001adf8) main_cset_list_pane_copy1

0xdc69,	// (0x0001ae08) scroll_pane_cp028_copy1

0x7920,	// (0x00014abf) cset_list_set_pane_copy1

0x7931,	// (0x00014ad0) aid_position_infowindow_above_copy1

0x7939,	// (0x00014ad8) aid_position_infowindow_below_copy1

0x7941,	// (0x00014ae0) cset_list_set_pane_g1_copy1

0x7949,	// (0x00014ae8) cset_list_set_pane_g3_copy1_ParamLimits

0x7949,	// (0x00014ae8) cset_list_set_pane_g3_copy1

0x7958,	// (0x00014af7) cset_list_set_pane_t1_copy1_ParamLimits

0x7958,	// (0x00014af7) cset_list_set_pane_t1_copy1

0x9567,	// (0x00016706) list_highlight_pane_cp021_copy1_ParamLimits

0x9567,	// (0x00016706) list_highlight_pane_cp021_copy1

0xdc72,	// (0x0001ae11) cset6_slider_pane_ParamLimits

0xdc72,	// (0x0001ae11) cset6_slider_pane

0xdc9e,	// (0x0001ae3d) main_cset6_slider_pane_g1_ParamLimits

0xdc9e,	// (0x0001ae3d) main_cset6_slider_pane_g1

0x796d,	// (0x00014b0c) main_cset6_slider_pane_g2_ParamLimits

0x796d,	// (0x00014b0c) main_cset6_slider_pane_g2

0xdcc6,	// (0x0001ae65) main_cset6_slider_pane_g3_ParamLimits

0xdcc6,	// (0x0001ae65) main_cset6_slider_pane_g3

0x7995,	// (0x00014b34) main_cset6_slider_pane_g4_ParamLimits

0x7995,	// (0x00014b34) main_cset6_slider_pane_g4

0x79a1,	// (0x00014b40) main_cset6_slider_pane_g5_ParamLimits

0x79a1,	// (0x00014b40) main_cset6_slider_pane_g5

0xd301,	// (0x0001a4a0) main_cset6_slider_pane_g7_ParamLimits

0xd301,	// (0x0001a4a0) main_cset6_slider_pane_g7

0xd30d,	// (0x0001a4ac) main_cset6_slider_pane_g8_ParamLimits

0xd30d,	// (0x0001a4ac) main_cset6_slider_pane_g8

0x6aca,	// (0x00013c69) main_cset6_slider_pane_g9_ParamLimits

0x6aca,	// (0x00013c69) main_cset6_slider_pane_g9

0x6ad6,	// (0x00013c75) main_cset6_slider_pane_g10_ParamLimits

0x6ad6,	// (0x00013c75) main_cset6_slider_pane_g10

0x6ae2,	// (0x00013c81) main_cset6_slider_pane_g11_ParamLimits

0x6ae2,	// (0x00013c81) main_cset6_slider_pane_g11

0x6aee,	// (0x00013c8d) main_cset6_slider_pane_g12_ParamLimits

0x6aee,	// (0x00013c8d) main_cset6_slider_pane_g12

0x6afa,	// (0x00013c99) main_cset6_slider_pane_g13_ParamLimits

0x6afa,	// (0x00013c99) main_cset6_slider_pane_g13

0x6b06,	// (0x00013ca5) main_cset6_slider_pane_g14_ParamLimits

0x6b06,	// (0x00013ca5) main_cset6_slider_pane_g14

0x79ad,	// (0x00014b4c) main_cset6_slider_pane_g15_ParamLimits

0x79ad,	// (0x00014b4c) main_cset6_slider_pane_g15

0x6b2a,	// (0x00013cc9) main_cset6_slider_pane_g16_ParamLimits

0x6b2a,	// (0x00013cc9) main_cset6_slider_pane_g16

0x6b36,	// (0x00013cd5) main_cset6_slider_pane_g17_ParamLimits

0x6b36,	// (0x00013cd5) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0001cd59) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0001cd59) main_cset6_slider_pane_g

0xdcd2,	// (0x0001ae71) main_cset6_slider_pane_t1_ParamLimits

0xdcd2,	// (0x0001ae71) main_cset6_slider_pane_t1

0x79dd,	// (0x00014b7c) main_cset6_slider_pane_t2_ParamLimits

0x79dd,	// (0x00014b7c) main_cset6_slider_pane_t2

0x7a08,	// (0x00014ba7) main_cset6_slider_pane_t3_ParamLimits

0x7a08,	// (0x00014ba7) main_cset6_slider_pane_t3

0x7a33,	// (0x00014bd2) main_cset6_slider_pane_t4_ParamLimits

0x7a33,	// (0x00014bd2) main_cset6_slider_pane_t4

0x7a5e,	// (0x00014bfd) main_cset6_slider_pane_t5_ParamLimits

0x7a5e,	// (0x00014bfd) main_cset6_slider_pane_t5

0xdd13,	// (0x0001aeb2) main_cset6_slider_pane_t7_ParamLimits

0xdd13,	// (0x0001aeb2) main_cset6_slider_pane_t7

0x7a89,	// (0x00014c28) main_cset6_slider_pane_t8_ParamLimits

0x7a89,	// (0x00014c28) main_cset6_slider_pane_t8

0x7aad,	// (0x00014c4c) main_cset6_slider_pane_t9_ParamLimits

0x7aad,	// (0x00014c4c) main_cset6_slider_pane_t9

0x7ad1,	// (0x00014c70) main_cset6_slider_pane_t10_ParamLimits

0x7ad1,	// (0x00014c70) main_cset6_slider_pane_t10

0x7af5,	// (0x00014c94) main_cset6_slider_pane_t11_ParamLimits

0x7af5,	// (0x00014c94) main_cset6_slider_pane_t11

0xdd49,	// (0x0001aee8) main_cset6_slider_pane_t14_ParamLimits

0xdd49,	// (0x0001aee8) main_cset6_slider_pane_t14

0xdd82,	// (0x0001af21) main_cset6_slider_pane_t15_ParamLimits

0xdd82,	// (0x0001af21) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0001cd7e) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0001cd7e) main_cset6_slider_pane_t

0xd409,	// (0x0001a5a8) cset_slider_pane_g1_copy1

0xd412,	// (0x0001a5b1) cset_slider_pane_g2_copy1

0xd41b,	// (0x0001a5ba) cset_slider_pane_g3_copy1

0x94f7,	// (0x00016696) bg_popup_sub_pane_cp011_copy1

0xd4f8,	// (0x0001a697) main_cset_text_pane_g1_copy1

0xd500,	// (0x0001a69f) main_cset_text_pane_t1_copy1

0xd50e,	// (0x0001a6ad) main_cset_text_pane_t2_copy1

0xd51c,	// (0x0001a6bb) main_cset_text_pane_t3_copy1

0xd52a,	// (0x0001a6c9) main_cset_text_pane_t4_copy1

0xd538,	// (0x0001a6d7) main_cset_text_pane_t5_copy1

0xd546,	// (0x0001a6e5) main_cset_text_pane_t6_copy1

0xd554,	// (0x0001a6f3) main_cset_text_pane_t7_copy1

0x7b19,	// (0x00014cb8) main_cset_text2_pane_t1_copy1

0x94f7,	// (0x00016696) main_ncimui_pane

0x409f,	// (0x0001123e) popup_query_ncimui_window_ParamLimits

0x409f,	// (0x0001123e) popup_query_ncimui_window

0xc70b,	// (0x000198aa) field_cale_ev2_pane_g4_ParamLimits

0xc70b,	// (0x000198aa) field_cale_ev2_pane_g4

0x5c4c,	// (0x00012deb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c4c,	// (0x00012deb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0001ca62) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0001ca62) cell_video_dialer_keypad_pane_g

0x5c64,	// (0x00012e03) cell_video_dialer_keypad_pane_t1

0x94f7,	// (0x00016696) bg_popup_window_pane_cp012

0xa80b,	// (0x000179aa) heading_pane_cp06

0xdec0,	// (0x0001b05f) ncim_query_content_pane

0x94f7,	// (0x00016696) bg_popup_heading_pane_cp01

0xdec8,	// (0x0001b067) ncim_heading_pane_t1

0xded6,	// (0x0001b075) ncim_indicator_popup_pane

0xdee8,	// (0x0001b087) ncim_query_button_pane

0xdefc,	// (0x0001b09b) ncim_query_content_pane_t1

0xdf0e,	// (0x0001b0ad) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0001cdbd) ncim_query_content_pane_t

0xdf48,	// (0x0001b0e7) ncim_query_list_pane

0xdf5a,	// (0x0001b0f9) ncim_query_popup_pane

0xded6,	// (0x0001b075) ncim_indicator_popup_pane_ParamLimits

0x7bfb,	// (0x00014d9a) ncim_query_content_pane_g1_ParamLimits

0x7bfb,	// (0x00014d9a) ncim_query_content_pane_g1

0xdefc,	// (0x0001b09b) ncim_query_content_pane_t1_ParamLimits

0xdf0e,	// (0x0001b0ad) ncim_query_content_pane_t2_ParamLimits

0x7c07,	// (0x00014da6) ncim_query_content_pane_t3_ParamLimits

0x7c07,	// (0x00014da6) ncim_query_content_pane_t3

0x7c2f,	// (0x00014dce) ncim_query_content_pane_t4_ParamLimits

0x7c2f,	// (0x00014dce) ncim_query_content_pane_t4

0x7c57,	// (0x00014df6) ncim_query_content_pane_t5_ParamLimits

0x7c57,	// (0x00014df6) ncim_query_content_pane_t5

0xdf20,	// (0x0001b0bf) ncim_query_content_pane_t6_ParamLimits

0xdf20,	// (0x0001b0bf) ncim_query_content_pane_t6

0xfc1e,	// (0x0001cdbd) ncim_query_content_pane_t_ParamLimits

0xdf48,	// (0x0001b0e7) ncim_query_list_pane_ParamLimits

0xdf5a,	// (0x0001b0f9) ncim_query_popup_pane_ParamLimits

0xdf6e,	// (0x0001b10d) wait_bar_pane_cp04

0x94f7,	// (0x00016696) input_focus_pane_cp011

0xdf76,	// (0x0001b115) ncim_query_popup_pane_t1

0xdf84,	// (0x0001b123) ncim_list_query_list_pane_ParamLimits

0xdf84,	// (0x0001b123) ncim_list_query_list_pane

0x94f7,	// (0x00016696) bg_button_pane_cp027

0xdf91,	// (0x0001b130) ncim_query_button_pane_g1

0x94f7,	// (0x00016696) list_highlight_pane_cp012

0xdf9b,	// (0x0001b13a) ncim_list_query_list_pane_g1

0xdfa3,	// (0x0001b142) ncim_list_query_list_pane_t1

0xd0fa,	// (0x0001a299) cam4_indicators_pane_g3_ParamLimits

0xd0fa,	// (0x0001a299) cam4_indicators_pane_g3

0x6361,	// (0x00013500) vid4_indicators_pane_g5_ParamLimits

0x6361,	// (0x00013500) vid4_indicators_pane_g5

0xd7fc,	// (0x0001a99b) vid4_progress_pane_g5_ParamLimits

0xd7fc,	// (0x0001a99b) vid4_progress_pane_g5

0x7b43,	// (0x00014ce2) main_ncimui_pane_g1

0x7b89,	// (0x00014d28) ncimui_group_query_pane_ParamLimits

0x7b89,	// (0x00014d28) ncimui_group_query_pane

0x7bbd,	// (0x00014d5c) ncimui_list_pane_ParamLimits

0x7bbd,	// (0x00014d5c) ncimui_list_pane

0x7bd7,	// (0x00014d76) ncimui_text_pane_ParamLimits

0x7bd7,	// (0x00014d76) ncimui_text_pane

0x7c7f,	// (0x00014e1e) ncimui_text_pane_t1_ParamLimits

0x7c7f,	// (0x00014e1e) ncimui_text_pane_t1

0xdfb1,	// (0x0001b150) ncimui_list_single_graphic_pane_ParamLimits

0xdfb1,	// (0x0001b150) ncimui_list_single_graphic_pane

0x7ca5,	// (0x00014e44) ncimui_query_pane_ParamLimits

0x7ca5,	// (0x00014e44) ncimui_query_pane

0x94f7,	// (0x00016696) list_highlight_pane_cp013

0xdfc1,	// (0x0001b160) ncim_list_query_list_pane_t1_copy1

0xdf9b,	// (0x0001b13a) ncim_list_single_graphic_pane_g1

0xdfcf,	// (0x0001b16e) ncim_query_button_pane_cp01

0xdfd7,	// (0x0001b176) ncim_query_entry_pane_ParamLimits

0xdfd7,	// (0x0001b176) ncim_query_entry_pane

0xdfe7,	// (0x0001b186) ncimui_query_pane_g1

0xdfef,	// (0x0001b18e) ncimui_query_pane_t1_ParamLimits

0xdfef,	// (0x0001b18e) ncimui_query_pane_t1

0x94f7,	// (0x00016696) input_focus_pane_cp012

0xdf76,	// (0x0001b115) ncim_query_entry_pane_t1

0x9cdc,	// (0x00016e7b) main_im_pane_ParamLimits

0x9567,	// (0x00016706) main_mobtv_pane_ParamLimits

0x9567,	// (0x00016706) main_mobtv_pane

0x79c5,	// (0x00014b64) main_cset6_slider_pane_g18_ParamLimits

0x79c5,	// (0x00014b64) main_cset6_slider_pane_g18

0x79d1,	// (0x00014b70) main_cset6_slider_pane_g19_ParamLimits

0x79d1,	// (0x00014b70) main_cset6_slider_pane_g19

0xdeaa,	// (0x0001b049) bg_main_mobtv_pane_ParamLimits

0xdeaa,	// (0x0001b049) bg_main_mobtv_pane

0x7cb5,	// (0x00014e54) main_mobtv_info_pane

0x7cbe,	// (0x00014e5d) main_mobtv_loading_pane_ParamLimits

0x7cbe,	// (0x00014e5d) main_mobtv_loading_pane

0xe005,	// (0x0001b1a4) main_mobtv_pg_channel_list_pane

0xe00f,	// (0x0001b1ae) main_mobtv_pg_hdr_pane

0x7ccb,	// (0x00014e6a) main_mobtv_programe_curr_pane_ParamLimits

0x7ccb,	// (0x00014e6a) main_mobtv_programe_curr_pane

0x7cd8,	// (0x00014e77) main_mobtv_programe_next_pane_ParamLimits

0x7cd8,	// (0x00014e77) main_mobtv_programe_next_pane

0xe018,	// (0x0001b1b7) popup_mobtv_noti_window

0xc43a,	// (0x000195d9) main_tv_pg_hdr_pane_g1

0xe020,	// (0x0001b1bf) main_tv_pg_hdr_pane_g2

0xe028,	// (0x0001b1c7) main_tv_pg_hdr_pane_g3

0xe030,	// (0x0001b1cf) main_tv_pg_hdr_pane_g4

0xe038,	// (0x0001b1d7) main_tv_pg_hdr_pane_g5

0xe042,	// (0x0001b1e1) main_tv_pg_hdr_pane_g6

0xe04c,	// (0x0001b1eb) main_tv_pg_hdr_pane_g7

0xe056,	// (0x0001b1f5) main_tv_pg_hdr_pane_g8

0xe060,	// (0x0001b1ff) main_tv_pg_hdr_pane_g9

0xe06a,	// (0x0001b209) main_tv_pg_hdr_pane_g10

0xe074,	// (0x0001b213) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0001cdca) main_tv_pg_hdr_pane_g

0xe07e,	// (0x0001b21d) main_tv_pg_hdr_pane_t1

0xe08c,	// (0x0001b22b) main_tv_pg_hdr_pane_t2

0xe09a,	// (0x0001b239) main_tv_pg_hdr_pane_t3

0xe0aa,	// (0x0001b249) main_tv_pg_hdr_pane_t4

0xe0ba,	// (0x0001b259) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0001cde1) main_tv_pg_hdr_pane_t

0xe0ca,	// (0x0001b269) single_mobtv_pg_channel_pane_ParamLimits

0xe0ca,	// (0x0001b269) single_mobtv_pg_channel_pane

0xe0dc,	// (0x0001b27b) single_mobtv_pg_channel_table_pane

0xe0e5,	// (0x0001b284) single_mobtv_pg_channel_thumb_pane

0xe0ee,	// (0x0001b28d) single_tv_pg_channel_pane_g1

0xe0f7,	// (0x0001b296) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0001cdec) single_tv_pg_channel_pane_g

0xc6a6,	// (0x00019845) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6a6,	// (0x00019845) bg_single_mobtv_pg_channel_thumb_pane

0xe100,	// (0x0001b29f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe100,	// (0x0001b29f) single_mobtv_pg_channel_thumb_pane_g1

0xe10e,	// (0x0001b2ad) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe10e,	// (0x0001b2ad) single_mobtv_pg_channel_thumb_pane_g2

0xe11a,	// (0x0001b2b9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe11a,	// (0x0001b2b9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0001cdf1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0001cdf1) single_mobtv_pg_channel_thumb_pane_g

0xe126,	// (0x0001b2c5) single_mobtv_pg_channel_thumb_pane_t1

0xe134,	// (0x0001b2d3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0001cdf8) single_mobtv_pg_channel_thumb_pane_t

0xc43a,	// (0x000195d9) bg_single_mobtv_pg_channel_table_pane_g1

0xc43a,	// (0x000195d9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0001c8ae) bg_single_mobtv_pg_channel_table_pane_g

0xe142,	// (0x0001b2e1) single_mobtv_pg_channel_table_pane_t1

0xe150,	// (0x0001b2ef) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0001cdfd) single_mobtv_pg_channel_table_pane_t

0x7ced,	// (0x00014e8c) main_mobtv_info_pane_g1_ParamLimits

0x7ced,	// (0x00014e8c) main_mobtv_info_pane_g1

0x7d0b,	// (0x00014eaa) main_mobtv_info_pane_t1_ParamLimits

0x7d0b,	// (0x00014eaa) main_mobtv_info_pane_t1

0x7d83,	// (0x00014f22) main_mobtv_info_pane_t2_ParamLimits

0x7d83,	// (0x00014f22) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0001ce07) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0001ce07) main_mobtv_info_pane_t

0x7e12,	// (0x00014fb1) wait_bar_pane_cp05

0x7e24,	// (0x00014fc3) main_mobtv_loading_pane_g1_ParamLimits

0x7e24,	// (0x00014fc3) main_mobtv_loading_pane_g1

0x7e37,	// (0x00014fd6) main_mobtv_loading_pane_g2_ParamLimits

0x7e37,	// (0x00014fd6) main_mobtv_loading_pane_g2

0x7e43,	// (0x00014fe2) main_mobtv_loading_pane_g3_ParamLimits

0x7e43,	// (0x00014fe2) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0001ce0e) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0001ce0e) main_mobtv_loading_pane_g

0xe15e,	// (0x0001b2fd) main_mobtv_loading_pane_t1_ParamLimits

0xe15e,	// (0x0001b2fd) main_mobtv_loading_pane_t1

0xe176,	// (0x0001b315) main_mobtv_loading_pane_t2_ParamLimits

0xe176,	// (0x0001b315) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0001ce15) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0001ce15) main_mobtv_loading_pane_t

0x7e56,	// (0x00014ff5) wait_bar_pane_cp06_ParamLimits

0x7e56,	// (0x00014ff5) wait_bar_pane_cp06

0xe19a,	// (0x0001b339) main_mobtv_programe_curr_pane_t1

0xe1a8,	// (0x0001b347) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0001ce1a) main_mobtv_programe_curr_pane_t

0xe1b6,	// (0x0001b355) main_mobtv_programe_next_pane_t1

0xe1c4,	// (0x0001b363) main_mobtv_programe_next_pane_t2

0xe1d2,	// (0x0001b371) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0001ce1f) main_mobtv_programe_next_pane_t

0x94f7,	// (0x00016696) bg_popup_mobtv_noti_window_pane

0xe1e0,	// (0x0001b37f) popup_mobtv_noti_window_g1

0xe1e8,	// (0x0001b387) popup_mobtv_noti_window_t1

0xe1f6,	// (0x0001b395) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0001ce26) popup_mobtv_noti_window_t

0xc43a,	// (0x000195d9) bg_popup_mobtv_noti_window_pane_g1

0x94f7,	// (0x00016696) sc_clock_pane

0x94f7,	// (0x00016696) main_fs_bigclock_pane

0x75ec,	// (0x0001478b) blid2_tripm_pane_t4_ParamLimits

0x75ec,	// (0x0001478b) blid2_tripm_pane_t4

0x7e65,	// (0x00015004) sc_clock_pane_g1_ParamLimits

0x7e65,	// (0x00015004) sc_clock_pane_g1

0x7e77,	// (0x00015016) sc_clock_pane_t1_ParamLimits

0x7e77,	// (0x00015016) sc_clock_pane_t1

0x7e99,	// (0x00015038) sc_clock_pane_t2_ParamLimits

0x7e99,	// (0x00015038) sc_clock_pane_t2

0x7eb1,	// (0x00015050) sc_clock_pane_t3_ParamLimits

0x7eb1,	// (0x00015050) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0001ce2b) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0001ce2b) sc_clock_pane_t

0x8c6f,	// (0x00015e0e) main_fs_bigclock_indicator_pane_ParamLimits

0x8c6f,	// (0x00015e0e) main_fs_bigclock_indicator_pane

0xc676,	// (0x00019815) main_fs_bigclock_pane_g1_ParamLimits

0xc676,	// (0x00019815) main_fs_bigclock_pane_g1

0x8c7b,	// (0x00015e1a) main_fs_bigclock_pane_t1_ParamLimits

0x8c7b,	// (0x00015e1a) main_fs_bigclock_pane_t1

0x8c8d,	// (0x00015e2c) main_fs_bigclock_pane_t2_ParamLimits

0x8c8d,	// (0x00015e2c) main_fs_bigclock_pane_t2

0x8ca1,	// (0x00015e40) main_fs_bigclock_pane_t3_ParamLimits

0x8ca1,	// (0x00015e40) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0001d025) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0001d025) main_fs_bigclock_pane_t

0xedf4,	// (0x0001bf93) main_fs_bigclock_indicator_pane_g1

0xdef0,	// (0x0001b08f) ncim_query_content_pane_g2_ParamLimits

0xdef0,	// (0x0001b08f) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0001cdb8) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0001cdb8) ncim_query_content_pane_g

0x7ec8,	// (0x00015067) sc_clock_pane_t4_ParamLimits

0x7ec8,	// (0x00015067) sc_clock_pane_t4

0x9567,	// (0x00016706) main_radioblah_pane

0xd04c,	// (0x0001a1eb) cell_call4_button_pane_t1_copy1_ParamLimits

0xd04c,	// (0x0001a1eb) cell_call4_button_pane_t1_copy1

0x7b4b,	// (0x00014cea) main_ncimui_pane_t1_ParamLimits

0x7b4b,	// (0x00014cea) main_ncimui_pane_t1

0x7b5d,	// (0x00014cfc) main_ncimui_pane_t2_ParamLimits

0x7b5d,	// (0x00014cfc) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0001cdb1) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0001cdb1) main_ncimui_pane_t

0xe324,	// (0x0001b4c3) main_radioblah_anim_pane_ParamLimits

0xe324,	// (0x0001b4c3) main_radioblah_anim_pane

0xe335,	// (0x0001b4d4) main_radioblah_info_pane_ParamLimits

0xe335,	// (0x0001b4d4) main_radioblah_info_pane

0xe349,	// (0x0001b4e8) main_radioblah_pane_t1_ParamLimits

0xe349,	// (0x0001b4e8) main_radioblah_pane_t1

0xe365,	// (0x0001b504) main_radioblah_pane_t2_ParamLimits

0xe365,	// (0x0001b504) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0001ce4c) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0001ce4c) main_radioblah_pane_t

0x7f71,	// (0x00015110) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f71,	// (0x00015110) main_radioblah_rocker_ctrl_pane

0xe3ad,	// (0x0001b54c) main_radioblah_info_pane_t1_ParamLimits

0xe3ad,	// (0x0001b54c) main_radioblah_info_pane_t1

0x7fc9,	// (0x00015168) main_radioblah_info_pane_t2_ParamLimits

0x7fc9,	// (0x00015168) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0001ce55) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0001ce55) main_radioblah_info_pane_t

0xc43a,	// (0x000195d9) main_radioblah_rocker_ctrl_pane_g1

0x8079,	// (0x00015218) main_radioblah_rocker_ctrl_pane_g2

0x8081,	// (0x00015220) main_radioblah_rocker_ctrl_pane_g3

0x8089,	// (0x00015228) main_radioblah_rocker_ctrl_pane_g4

0x8091,	// (0x00015230) main_radioblah_rocker_ctrl_pane_g5

0x8099,	// (0x00015238) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0001ce5e) main_radioblah_rocker_ctrl_pane_g

0x7b19,	// (0x00014cb8) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0ca,	// (0x0001a269) cam4_image_uncrop_qvga_pane

0xd123,	// (0x0001a2c2) vid4_image_uncrop_qcif_pane

0xda5e,	// (0x0001abfd) cam6_image_uncrop_qvga_pane_ParamLimits

0xda5e,	// (0x0001abfd) cam6_image_uncrop_qvga_pane

0xdb34,	// (0x0001acd3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb34,	// (0x0001acd3) vid6_image_uncrop_qcif_pane

0x94f7,	// (0x00016696) bg_popup_preview_window_pane_cp03

0xde8c,	// (0x0001b02b) list_cset_text2_pane

0xde94,	// (0x0001b033) main_cset6_text2_pane_g1

0xde9c,	// (0x0001b03b) main_cset6_text2_pane_t1

0x80a1,	// (0x00015240) list_cset_text2_pane_t1_ParamLimits

0x80a1,	// (0x00015240) list_cset_text2_pane_t1

0x9567,	// (0x00016706) main_radioblah_pane_ParamLimits

0x7dfe,	// (0x00014f9d) main_mobtv_info_pane_t3_ParamLimits

0x7dfe,	// (0x00014f9d) main_mobtv_info_pane_t3

0x7f5f,	// (0x000150fe) main_radioblah_pane_g1

0x7f99,	// (0x00015138) main_radioblah_info_pane_g1

0x801e,	// (0x000151bd) main_radioblah_info_pane_t3_ParamLimits

0x801e,	// (0x000151bd) main_radioblah_info_pane_t3

0x2b17,	// (0x0000fcb6) highlight_cell_cale_month_pane_ParamLimits

0x2b17,	// (0x0000fcb6) highlight_cell_cale_month_pane

0x94f7,	// (0x00016696) main_phob_fisheye_pane

0xc794,	// (0x00019933) scroll_pane_cp0031_ParamLimits

0xc794,	// (0x00019933) scroll_pane_cp0031

0xdc42,	// (0x0001ade1) wait_bar_pane_cp08_ParamLimits

0x7920,	// (0x00014abf) cset_list_set_pane_copy1_ParamLimits

0xe3e7,	// (0x0001b586) highlight_cell_cale_month_pane_g1

0x80ba,	// (0x00015259) highlight_cell_cale_month_pane_t1

0xd7bc,	// (0x0001a95b) list_gen_pane_cp01

0xd2ec,	// (0x0001a48b) scroll_pane_01

0xee1e,	// (0x0001bfbd) list_single_double_fisheye_pane

0x80c8,	// (0x00015267) list_double_fisheye_pane_g1_ParamLimits

0x80c8,	// (0x00015267) list_double_fisheye_pane_g1

0x80d4,	// (0x00015273) list_double_fisheye_pane_g2_ParamLimits

0x80d4,	// (0x00015273) list_double_fisheye_pane_g2

0x80e8,	// (0x00015287) list_double_fisheye_pane_g3_ParamLimits

0x80e8,	// (0x00015287) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0001ce6b) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0001ce6b) list_double_fisheye_pane_g

0x8111,	// (0x000152b0) list_double_fisheye_pane_t1_ParamLimits

0x8111,	// (0x000152b0) list_double_fisheye_pane_t1

0x812c,	// (0x000152cb) list_double_fisheye_pane_t2_ParamLimits

0x812c,	// (0x000152cb) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0001ce76) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0001ce76) list_double_fisheye_pane_t

0x94f7,	// (0x00016696) main_call5_pane

0x7ef3,	// (0x00015092) sc_swipe_pane_ParamLimits

0x7ef3,	// (0x00015092) sc_swipe_pane

0x8161,	// (0x00015300) call5_image_pane_ParamLimits

0x8161,	// (0x00015300) call5_image_pane

0x817e,	// (0x0001531d) call5_swipe_1_pane_ParamLimits

0x817e,	// (0x0001531d) call5_swipe_1_pane

0x8191,	// (0x00015330) call5_swipe_2_pane_ParamLimits

0x8191,	// (0x00015330) call5_swipe_2_pane

0x81bc,	// (0x0001535b) popup_call5_audio_first_window_ParamLimits

0x81bc,	// (0x0001535b) popup_call5_audio_first_window

0xc6a6,	// (0x00019845) call5_swipe_1_pane_g1_ParamLimits

0xc6a6,	// (0x00019845) call5_swipe_1_pane_g1

0xe3ef,	// (0x0001b58e) call5_swipe_1_pane_g2_ParamLimits

0xe3ef,	// (0x0001b58e) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0001ce7b) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0001ce7b) call5_swipe_1_pane_g

0xe3fb,	// (0x0001b59a) call5_swipe_1_pane_t1_ParamLimits

0xe3fb,	// (0x0001b59a) call5_swipe_1_pane_t1

0xc6a6,	// (0x00019845) call5_swipe_2_pane_g1_ParamLimits

0xc6a6,	// (0x00019845) call5_swipe_2_pane_g1

0xe410,	// (0x0001b5af) call5_swipe_2_pane_g2_ParamLimits

0xe410,	// (0x0001b5af) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0001ce80) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0001ce80) call5_swipe_2_pane_g

0xe41c,	// (0x0001b5bb) call5_swipe_2_pane_t1_ParamLimits

0xe41c,	// (0x0001b5bb) call5_swipe_2_pane_t1

0xe431,	// (0x0001b5d0) sc_swipe_pane_g1_ParamLimits

0xe431,	// (0x0001b5d0) sc_swipe_pane_g1

0xe43e,	// (0x0001b5dd) sc_swipe_pane_g2_ParamLimits

0xe43e,	// (0x0001b5dd) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0001ce85) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0001ce85) sc_swipe_pane_g

0xe44a,	// (0x0001b5e9) sc_swipe_pane_t1_ParamLimits

0xe44a,	// (0x0001b5e9) sc_swipe_pane_t1

0x94f7,	// (0x00016696) main_cmail_launcher_pane

0x81cd,	// (0x0001536c) aid_size_cell_cmail_l_ParamLimits

0x81cd,	// (0x0001536c) aid_size_cell_cmail_l

0x81e7,	// (0x00015386) grid_cmail_l_pane_ParamLimits

0x81e7,	// (0x00015386) grid_cmail_l_pane

0x8202,	// (0x000153a1) cell_cmail_l_pane_ParamLimits

0x8202,	// (0x000153a1) cell_cmail_l_pane

0x8228,	// (0x000153c7) cell_cmail_l_pane_g1_ParamLimits

0x8228,	// (0x000153c7) cell_cmail_l_pane_g1

0x8234,	// (0x000153d3) cell_cmail_l_pane_t1_ParamLimits

0x8234,	// (0x000153d3) cell_cmail_l_pane_t1

0xe45f,	// (0x0001b5fe) cell_cmail_l_pane_t2_ParamLimits

0xe45f,	// (0x0001b5fe) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0001ce8a) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0001ce8a) cell_cmail_l_pane_t

0x9567,	// (0x00016706) grid_highlight_pane_cp018_ParamLimits

0x9567,	// (0x00016706) grid_highlight_pane_cp018

0x1220,	// (0x0000e3bf) main2_pane_ParamLimits

0x1220,	// (0x0000e3bf) main2_pane

0x9d99,	// (0x00016f38) popup_sp_fs_action_menu_bg_pane_g1

0x9da1,	// (0x00016f40) popup_sp_fs_action_menu_bg_pane_g2

0x9da9,	// (0x00016f48) popup_sp_fs_action_menu_bg_pane_g3

0x9db1,	// (0x00016f50) popup_sp_fs_action_menu_bg_pane_g4

0x9db9,	// (0x00016f58) popup_sp_fs_action_menu_bg_pane_g5

0x9dc1,	// (0x00016f60) popup_sp_fs_action_menu_bg_pane_g6

0x9dc9,	// (0x00016f68) popup_sp_fs_action_menu_bg_pane_g7

0x9dd1,	// (0x00016f70) popup_sp_fs_action_menu_bg_pane_g8

0x9dd9,	// (0x00016f78) popup_sp_fs_action_menu_bg_pane_g9

0x9de1,	// (0x00016f80) popup_sp_fs_action_menu_bg_pane_g10

0x9de1,	// (0x00016f80) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0001c35a) popup_sp_fs_action_menu_bg_pane_g

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g3_g1

0x9fbd,	// (0x0001715c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_t3_g3_g2

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0001c40a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0001c40a) list_medium_line_x2_t3_g3_g

0x9fd5,	// (0x00017174) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9fd5,	// (0x00017174) list_medium_line_x2_t3_g3_t1

0x1fb8,	// (0x0000f157) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fb8,	// (0x0000f157) list_medium_line_x2_t3_g3_t2

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0001c411) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0001c411) list_medium_line_x2_t3_g3_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g2_g1

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0001c418) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0001c418) list_medium_line_x2_t3_g2_g

0x9fff,	// (0x0001719e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9fff,	// (0x0001719e) list_medium_line_x2_t3_g2_t1

0xa015,	// (0x000171b4) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa015,	// (0x000171b4) list_medium_line_x2_t3_g2_t2

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0001c41d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0001c41d) list_medium_line_x2_t3_g2_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t4_g4_g1

0xa027,	// (0x000171c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa027,	// (0x000171c6) list_medium_line_x2_t4_g4_g2

0x9fbd,	// (0x0001715c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_t4_g4_g3

0xa033,	// (0x000171d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa033,	// (0x000171d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0001c424) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0001c424) list_medium_line_x2_t4_g4_g

0x1fcc,	// (0x0000f16b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fcc,	// (0x0000f16b) list_medium_line_x2_t4_g4_t1

0x1fe3,	// (0x0000f182) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fe3,	// (0x0000f182) list_medium_line_x2_t4_g4_t2

0x1ff8,	// (0x0000f197) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ff8,	// (0x0000f197) list_medium_line_x2_t4_g4_t3

0xa03f,	// (0x000171de) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa03f,	// (0x000171de) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0001c42d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0001c42d) list_medium_line_x2_t4_g4_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g4_g1

0xa027,	// (0x000171c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa027,	// (0x000171c6) list_medium_line_x2_t2_g4_g2

0x9fbd,	// (0x0001715c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_t2_g4_g3

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0001c494) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0001c494) list_medium_line_x2_t2_g4_g

0xa32f,	// (0x000174ce) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa32f,	// (0x000174ce) list_medium_line_x2_t2_g4_t1

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0001c49d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0001c49d) list_medium_line_x2_t2_g4_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g3_g1

0x9fbd,	// (0x0001715c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_t2_g3_g2

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0001c40a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0001c40a) list_medium_line_x2_t2_g3_g

0xa344,	// (0x000174e3) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa344,	// (0x000174e3) list_medium_line_x2_t2_g3_t1

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0001c4a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0001c4a2) list_medium_line_x2_t2_g3_t

0x2c46,	// (0x0000fde5) main_sp_fs_list_pane_ParamLimits

0x2c46,	// (0x0000fde5) main_sp_fs_list_pane

0x2c52,	// (0x0000fdf1) sp_fs_scroll_pane_ParamLimits

0x2c52,	// (0x0000fdf1) sp_fs_scroll_pane

0x2c5e,	// (0x0000fdfd) list_medium_line_x2_t3_t1

0x2c6e,	// (0x0000fe0d) list_medium_line_x2_t3_t2

0xa5ac,	// (0x0001774b) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0001c4ed) list_medium_line_x2_t3_t

0x2c7c,	// (0x0000fe1b) list_medium_line_x3_t4_t1

0x2c8c,	// (0x0000fe2b) list_medium_line_x3_t4_t2

0xa5ba,	// (0x00017759) list_medium_line_x3_t4_t3

0xa5ac,	// (0x0001774b) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0001c4f4) list_medium_line_x3_t4_t

0x2c9a,	// (0x0000fe39) list_medium_line_x4_t5_t1

0x2caa,	// (0x0000fe49) list_medium_line_x4_t5_t2

0xa5ba,	// (0x00017759) list_medium_line_x4_t5_t3

0xa5c8,	// (0x00017767) list_medium_line_x4_t5_t4

0xa5ac,	// (0x0001774b) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0001c4fd) list_medium_line_x4_t5_t

0x9fb1,	// (0x00017150) list_medium_line_t4_g4_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_t4_g4_g1

0xa033,	// (0x000171d2) list_medium_line_t4_g4_g2_ParamLimits

0xa033,	// (0x000171d2) list_medium_line_t4_g4_g2

0xa5d6,	// (0x00017775) list_medium_line_t4_g4_g3_ParamLimits

0xa5d6,	// (0x00017775) list_medium_line_t4_g4_g3

0x9fc9,	// (0x00017168) list_medium_line_t4_g4_g4_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0001c508) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0001c508) list_medium_line_t4_g4_g

0xa5e2,	// (0x00017781) list_medium_line_t4_g4_t1_ParamLimits

0xa5e2,	// (0x00017781) list_medium_line_t4_g4_t1

0xa5f7,	// (0x00017796) list_medium_line_t4_g4_t2_ParamLimits

0xa5f7,	// (0x00017796) list_medium_line_t4_g4_t2

0xa60c,	// (0x000177ab) list_medium_line_t4_g4_t3_ParamLimits

0xa60c,	// (0x000177ab) list_medium_line_t4_g4_t3

0x9fea,	// (0x00017189) list_medium_line_t4_g4_t4_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0001c511) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0001c511) list_medium_line_t4_g4_t

0x2d7b,	// (0x0000ff1a) chi_dic_find_pane_g1

0x3e71,	// (0x00011010) main_tport_pane

0xd44d,	// (0x0001a5ec) list_medium_line_plain_t1

0xd49f,	// (0x0001a63e) list_medium_line_t2_g2_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t2_g2_g1

0xd4ab,	// (0x0001a64a) list_medium_line_t2_g2_g2_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0001cbcd) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0001cbcd) list_medium_line_t2_g2_g

0x6e80,	// (0x0001401f) list_medium_line_t2_g2_t1_ParamLimits

0x6e80,	// (0x0001401f) list_medium_line_t2_g2_t1

0x6e9a,	// (0x00014039) list_medium_line_t2_g2_t2_ParamLimits

0x6e9a,	// (0x00014039) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0001cbd2) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0001cbd2) list_medium_line_t2_g2_t

0xd85d,	// (0x0001a9fc) aid_sp_fs_list_icon_a_sm

0xd865,	// (0x0001aa04) aid_sp_fs_list_icon_d

0xd86d,	// (0x0001aa0c) aid_sp_fs_text_primary

0xd876,	// (0x0001aa15) aid_sp_fs_text_secondary

0xd87f,	// (0x0001aa1e) list_medium_line

0xd87f,	// (0x0001aa1e) list_medium_line_g2

0xd87f,	// (0x0001aa1e) list_medium_line_g3

0xd87f,	// (0x0001aa1e) list_medium_line_plain

0xd87f,	// (0x0001aa1e) list_medium_line_plain_t2

0xd87f,	// (0x0001aa1e) list_medium_line_plain_t3

0xd87f,	// (0x0001aa1e) list_medium_line_right_icon

0xd87f,	// (0x0001aa1e) list_medium_line_right_iconx2

0xd87f,	// (0x0001aa1e) list_medium_line_t2

0xd87f,	// (0x0001aa1e) list_medium_line_t2_g2

0xd87f,	// (0x0001aa1e) list_medium_line_t2_g3

0xd87f,	// (0x0001aa1e) list_medium_line_t2_right_icon

0xd87f,	// (0x0001aa1e) list_medium_line_t2_right_iconx2

0xd87f,	// (0x0001aa1e) list_medium_line_t3

0xd87f,	// (0x0001aa1e) list_medium_line_t3_g2

0xd87f,	// (0x0001aa1e) list_medium_line_t3_g3

0xd87f,	// (0x0001aa1e) list_medium_line_t3_right_iconx2

0xd888,	// (0x0001aa27) list_medium_line_t4_g4

0xd891,	// (0x0001aa30) list_medium_line_x2

0xd891,	// (0x0001aa30) list_medium_line_x2_t2_g2

0xd891,	// (0x0001aa30) list_medium_line_x2_t2_g3

0xd891,	// (0x0001aa30) list_medium_line_x2_t2_g4

0xd891,	// (0x0001aa30) list_medium_line_x2_t3

0xd891,	// (0x0001aa30) list_medium_line_x2_t3_g2

0xd891,	// (0x0001aa30) list_medium_line_x2_t3_g3

0xd891,	// (0x0001aa30) list_medium_line_x2_t3_g4

0xd891,	// (0x0001aa30) list_medium_line_x2_t4_g2

0xd891,	// (0x0001aa30) list_medium_line_x2_t4_g4

0xd89a,	// (0x0001aa39) list_medium_line_x3

0xd89a,	// (0x0001aa39) list_medium_line_x3_t4

0xd89a,	// (0x0001aa39) list_medium_line_x3_t4_g4

0xd888,	// (0x0001aa27) list_medium_line_x4_t4

0xd888,	// (0x0001aa27) list_medium_line_x4_t4_g7

0xd888,	// (0x0001aa27) list_medium_line_x4_t5

0xd8a3,	// (0x0001aa42) list_single_fs_dyc_pane_ParamLimits

0xd8a3,	// (0x0001aa42) list_single_fs_dyc_pane

0x9fb1,	// (0x00017150) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x4_t4_g7_g1

0xddbb,	// (0x0001af5a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddbb,	// (0x0001af5a) list_medium_line_x4_t4_g7_g2

0xddc7,	// (0x0001af66) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddc7,	// (0x0001af66) list_medium_line_x4_t4_g7_g3

0xddd6,	// (0x0001af75) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddd6,	// (0x0001af75) list_medium_line_x4_t4_g7_g4

0xdde2,	// (0x0001af81) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdde2,	// (0x0001af81) list_medium_line_x4_t4_g7_g5

0xddf1,	// (0x0001af90) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddf1,	// (0x0001af90) list_medium_line_x4_t4_g7_g6

0xde00,	// (0x0001af9f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xde00,	// (0x0001af9f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0001cd97) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0001cd97) list_medium_line_x4_t4_g7_g

0xde0c,	// (0x0001afab) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde0c,	// (0x0001afab) list_medium_line_x4_t4_g7_t1

0xde21,	// (0x0001afc0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde21,	// (0x0001afc0) list_medium_line_x4_t4_g7_t2

0xde36,	// (0x0001afd5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde36,	// (0x0001afd5) list_medium_line_x4_t4_g7_t3

0xde4b,	// (0x0001afea) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde4b,	// (0x0001afea) list_medium_line_x4_t4_g7_t4

0xde5d,	// (0x0001affc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde5d,	// (0x0001affc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0001cda6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0001cda6) list_medium_line_x4_t4_g7_t

0xde6f,	// (0x0001b00e) list_single_dyc_row_pane_ParamLimits

0xde6f,	// (0x0001b00e) list_single_dyc_row_pane

0x814e,	// (0x000152ed) call5_gesture_pane_ParamLimits

0x814e,	// (0x000152ed) call5_gesture_pane

0x81a4,	// (0x00015343) call5_windows_pane_ParamLimits

0x81a4,	// (0x00015343) call5_windows_pane

0x824a,	// (0x000153e9) call5_swipe_1_pane_cp_ParamLimits

0x824a,	// (0x000153e9) call5_swipe_1_pane_cp

0x8256,	// (0x000153f5) call5_swipe_2_pane_cp_ParamLimits

0x8256,	// (0x000153f5) call5_swipe_2_pane_cp

0xaa77,	// (0x00017c16) call5_image_pane_cp

0x8262,	// (0x00015401) popup_call5_audio_first_window_cp_ParamLimits

0x8262,	// (0x00015401) popup_call5_audio_first_window_cp

0xe431,	// (0x0001b5d0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe431,	// (0x0001b5d0) call5_swipe_1_pane_g1_cp

0xe471,	// (0x0001b610) call5_swipe_1_pane_g2_cp

0xe44a,	// (0x0001b5e9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe44a,	// (0x0001b5e9) call5_swipe_1_pane_t1_cp

0xe431,	// (0x0001b5d0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe431,	// (0x0001b5d0) call5_swipe_2_pane_g1_cp

0xe479,	// (0x0001b618) call5_swipe_2_pane_g2_cp

0xe481,	// (0x0001b620) call5_swipe_2_pane_t1_cp_ParamLimits

0xe481,	// (0x0001b620) call5_swipe_2_pane_t1_cp

0x9567,	// (0x00016706) main_sp_fs_email_pane

0xe496,	// (0x0001b635) main_sp_fs_listscroll_pane_te

0xe49f,	// (0x0001b63e) popup_sp_fs_action_menu_pane_ParamLimits

0xe49f,	// (0x0001b63e) popup_sp_fs_action_menu_pane

0xc43a,	// (0x000195d9) bg_sp_fs_ctrlbar_pane_g1

0xe4e3,	// (0x0001b682) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4ec,	// (0x0001b68b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4f5,	// (0x0001b694) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc43a,	// (0x000195d9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0001ce8f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc21f,	// (0x000193be) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc21f,	// (0x000193be) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4fe,	// (0x0001b69d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4fe,	// (0x0001b69d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe50a,	// (0x0001b6a9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe50a,	// (0x0001b6a9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0001ce98) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0001ce98) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe516,	// (0x0001b6b5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe516,	// (0x0001b6b5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe530,	// (0x0001b6cf) list_medium_line_t2_right_icon_g1

0x8270,	// (0x0001540f) list_medium_line_t2_right_icon_t1

0x8280,	// (0x0001541f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0001ce9d) list_medium_line_t2_right_icon_t

0xbf34,	// (0x000190d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf34,	// (0x000190d3) bg_sp_fs_ctrlbar_pane

0x82d6,	// (0x00015475) main_sp_fs_ctrlbar_button_pane_cp01

0x82de,	// (0x0001547d) main_sp_fs_ctrlbar_ddmenu_pane

0xe570,	// (0x0001b70f) main_sp_fs_ctrlbar_pane_g1

0xe57c,	// (0x0001b71b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0001cea2) main_sp_fs_ctrlbar_pane_g

0xe588,	// (0x0001b727) main_sp_fs_ctrlbar_pane_t1

0x82e8,	// (0x00015487) main_sp_fs_ctrlbar_pane

0x830c,	// (0x000154ab) main_sp_fs_listscroll_pane_te_cp01

0x832c,	// (0x000154cb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x832c,	// (0x000154cb) popup_sp_fs_action_menu_pane_cp01

0x9567,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9567,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp01

0xe59d,	// (0x0001b73c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe59d,	// (0x0001b73c) sp_fs_action_menu_list_gene_pane_g1

0xe5ac,	// (0x0001b74b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5ac,	// (0x0001b74b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0001cea7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0001cea7) sp_fs_action_menu_list_gene_pane_g

0xe5b9,	// (0x0001b758) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5b9,	// (0x0001b758) sp_fs_action_menu_list_gene_pane_t1

0xe5d1,	// (0x0001b770) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5d1,	// (0x0001b770) sp_fs_action_menu_list_gene_pane

0xe5f2,	// (0x0001b791) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5f2,	// (0x0001b791) popup_sp_fs_action_menu_bg_pane

0xe600,	// (0x0001b79f) sp_fs_action_menu_list_pane_ParamLimits

0xe600,	// (0x0001b79f) sp_fs_action_menu_list_pane

0xe622,	// (0x0001b7c1) sp_fs_scroll_pane_cp01_ParamLimits

0xe622,	// (0x0001b7c1) sp_fs_scroll_pane_cp01

0x8346,	// (0x000154e5) list_medium_line_plain_t2_t1

0x8356,	// (0x000154f5) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0001ceac) list_medium_line_plain_t2_t

0x8366,	// (0x00015505) list_medium_line_plain_t3_t1

0x8376,	// (0x00015515) list_medium_line_plain_t3_t2

0x8384,	// (0x00015523) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0001ceb1) list_medium_line_plain_t3_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t2_g2_g1

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0001c418) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0001c418) list_medium_line_x2_t2_g2_g

0xa5e2,	// (0x00017781) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa5e2,	// (0x00017781) list_medium_line_x2_t2_g2_t1

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0001ceb8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0001ceb8) list_medium_line_x2_t2_g2_t

0x9fb1,	// (0x00017150) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t4_g2_g1

0x9fc9,	// (0x00017168) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x0001c418) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x0001c418) list_medium_line_x2_t4_g2_g

0x8392,	// (0x00015531) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8392,	// (0x00015531) list_medium_line_x2_t4_g2_t1

0x83ac,	// (0x0001554b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x83ac,	// (0x0001554b) list_medium_line_x2_t4_g2_t2

0x83c1,	// (0x00015560) list_medium_line_x2_t4_g2_t3_ParamLimits

0x83c1,	// (0x00015560) list_medium_line_x2_t4_g2_t3

0x9fea,	// (0x00017189) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x0001cebd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x0001cebd) list_medium_line_x2_t4_g2_t

0xe648,	// (0x0001b7e7) list_medium_line_t3_right_iconx2_g1

0xe530,	// (0x0001b6cf) list_medium_line_t3_right_iconx2_g2

0x83d6,	// (0x00015575) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x0001cec6) list_medium_line_t3_right_iconx2_g

0x83e0,	// (0x0001557f) list_medium_line_t3_right_iconx2_t1

0x83f0,	// (0x0001558f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x0001cecd) list_medium_line_t3_right_iconx2_t

0x9fb1,	// (0x00017150) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x3_t4_g4_g1

0x9fbd,	// (0x0001715c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x3_t4_g4_g2

0xa033,	// (0x000171d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa033,	// (0x000171d2) list_medium_line_x3_t4_g4_g3

0xe650,	// (0x0001b7ef) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe650,	// (0x0001b7ef) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x0001ced2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x0001ced2) list_medium_line_x3_t4_g4_g

0x83fe,	// (0x0001559d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x83fe,	// (0x0001559d) list_medium_line_x3_t4_g4_t1

0x8415,	// (0x000155b4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8415,	// (0x000155b4) list_medium_line_x3_t4_g4_t2

0xa5f7,	// (0x00017796) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa5f7,	// (0x00017796) list_medium_line_x3_t4_g4_t3

0xe65c,	// (0x0001b7fb) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe65c,	// (0x0001b7fb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x0001cedb) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x0001cedb) list_medium_line_x3_t4_g4_t

0x842e,	// (0x000155cd) list_single_dyc_row_text_pane_t1_ParamLimits

0x842e,	// (0x000155cd) list_single_dyc_row_text_pane_t1

0x8477,	// (0x00015616) list_single_dyc_row_text_pane_t2_ParamLimits

0x8477,	// (0x00015616) list_single_dyc_row_text_pane_t2

0xe679,	// (0x0001b818) list_single_dyc_row_text_pane_t3_ParamLimits

0xe679,	// (0x0001b818) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x0001cee4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x0001cee4) list_single_dyc_row_text_pane_t

0xe68b,	// (0x0001b82a) list_single_dyc_row_pane_g1_ParamLimits

0xe68b,	// (0x0001b82a) list_single_dyc_row_pane_g1

0xe697,	// (0x0001b836) list_single_dyc_row_pane_g2_ParamLimits

0xe697,	// (0x0001b836) list_single_dyc_row_pane_g2

0xe6a3,	// (0x0001b842) list_single_dyc_row_pane_g3_ParamLimits

0xe6a3,	// (0x0001b842) list_single_dyc_row_pane_g3

0xe6af,	// (0x0001b84e) list_single_dyc_row_pane_g4_ParamLimits

0xe6af,	// (0x0001b84e) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0001ceeb) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0001ceeb) list_single_dyc_row_pane_g

0xe6bb,	// (0x0001b85a) list_single_dyc_row_text_pane_ParamLimits

0xe6bb,	// (0x0001b85a) list_single_dyc_row_text_pane

0x94f7,	// (0x00016696) bg_sp_fs_scroll_pane

0xe6da,	// (0x0001b879) thumb_sp_fs_scroll_pane

0xd49f,	// (0x0001a63e) list_medium_line_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_g1

0xe6e3,	// (0x0001b882) list_medium_line_t1_ParamLimits

0xe6e3,	// (0x0001b882) list_medium_line_t1

0x9fb1,	// (0x00017150) list_medium_line_x2_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_g1

0x9fbd,	// (0x0001715c) list_medium_line_x2_g2_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0001cef4) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0001cef4) list_medium_line_x2_g

0xe6f8,	// (0x0001b897) list_medium_line_x2_t1_ParamLimits

0xe6f8,	// (0x0001b897) list_medium_line_x2_t1

0x9fb1,	// (0x00017150) list_medium_line_x3_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x3_g1

0x9fbd,	// (0x0001715c) list_medium_line_x3_g2_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0001cef4) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0001cef4) list_medium_line_x3_g

0xe6f8,	// (0x0001b897) list_medium_line_x3_t1_ParamLimits

0xe6f8,	// (0x0001b897) list_medium_line_x3_t1

0xe70e,	// (0x0001b8ad) thumb_sp_fs_scroll_pane_g1

0xe717,	// (0x0001b8b6) thumb_sp_fs_scroll_pane_g2

0xe720,	// (0x0001b8bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001cef9) thumb_sp_fs_scroll_pane_g

0xe70e,	// (0x0001b8ad) bg_sp_fs_scroll_pane_g1

0xe717,	// (0x0001b8b6) bg_sp_fs_scroll_pane_g2

0xe720,	// (0x0001b8bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001cef9) bg_sp_fs_scroll_pane_g

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9fb1,	// (0x00017150) list_medium_line_x2_t3_g4_g1

0xa027,	// (0x000171c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa027,	// (0x000171c6) list_medium_line_x2_t3_g4_g2

0x9fbd,	// (0x0001715c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9fbd,	// (0x0001715c) list_medium_line_x2_t3_g4_g3

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9fc9,	// (0x00017168) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0001c494) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0001c494) list_medium_line_x2_t3_g4_g

0x84d1,	// (0x00015670) list_medium_line_x2_t3_g4_t1_ParamLimits

0x84d1,	// (0x00015670) list_medium_line_x2_t3_g4_t1

0x84e7,	// (0x00015686) list_medium_line_x2_t3_g4_t2_ParamLimits

0x84e7,	// (0x00015686) list_medium_line_x2_t3_g4_t2

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9fea,	// (0x00017189) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0001cf00) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0001cf00) list_medium_line_x2_t3_g4_t

0xd49f,	// (0x0001a63e) list_medium_line_g2_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_g2_g1

0xd4ab,	// (0x0001a64a) list_medium_line_g2_g2_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0001cbcd) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0001cbcd) list_medium_line_g2_g

0xe729,	// (0x0001b8c8) list_medium_line_g2_t1_ParamLimits

0xe729,	// (0x0001b8c8) list_medium_line_g2_t1

0xd49f,	// (0x0001a63e) list_medium_line_t3_g2_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t3_g2_g1

0xd4ab,	// (0x0001a64a) list_medium_line_t3_g2_g2_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0001cbcd) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0001cbcd) list_medium_line_t3_g2_g

0x8501,	// (0x000156a0) list_medium_line_t3_g2_t1_ParamLimits

0x8501,	// (0x000156a0) list_medium_line_t3_g2_t1

0x851b,	// (0x000156ba) list_medium_line_t3_g2_t2_ParamLimits

0x851b,	// (0x000156ba) list_medium_line_t3_g2_t2

0x8530,	// (0x000156cf) list_medium_line_t3_g2_t3_ParamLimits

0x8530,	// (0x000156cf) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0001cf07) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0001cf07) list_medium_line_t3_g2_t

0xe530,	// (0x0001b6cf) list_medium_line_right_icon_g1

0xe73e,	// (0x0001b8dd) list_medium_line_right_icon_t1

0xd49f,	// (0x0001a63e) list_medium_line_t2_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t2_g1

0x854a,	// (0x000156e9) list_medium_line_t2_t1_ParamLimits

0x854a,	// (0x000156e9) list_medium_line_t2_t1

0x8564,	// (0x00015703) list_medium_line_t2_t2_ParamLimits

0x8564,	// (0x00015703) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0001cf0e) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0001cf0e) list_medium_line_t2_t

0xd49f,	// (0x0001a63e) list_medium_line_t3_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t3_g1

0x8579,	// (0x00015718) list_medium_line_t3_t1_ParamLimits

0x8579,	// (0x00015718) list_medium_line_t3_t1

0x8590,	// (0x0001572f) list_medium_line_t3_t2_ParamLimits

0x8590,	// (0x0001572f) list_medium_line_t3_t2

0x85a5,	// (0x00015744) list_medium_line_t3_t3_ParamLimits

0x85a5,	// (0x00015744) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0001cf13) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0001cf13) list_medium_line_t3_t

0xd49f,	// (0x0001a63e) list_medium_line_g3_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_g3_g1

0xe74c,	// (0x0001b8eb) list_medium_line_g3_g2_ParamLimits

0xe74c,	// (0x0001b8eb) list_medium_line_g3_g2

0xd4ab,	// (0x0001a64a) list_medium_line_g3_g3_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0001cf1a) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0001cf1a) list_medium_line_g3_g

0xe758,	// (0x0001b8f7) list_medium_line_g3_t1_ParamLimits

0xe758,	// (0x0001b8f7) list_medium_line_g3_t1

0xd49f,	// (0x0001a63e) list_medium_line_t2_g3_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t2_g3_g1

0xe74c,	// (0x0001b8eb) list_medium_line_t2_g3_g2_ParamLimits

0xe74c,	// (0x0001b8eb) list_medium_line_t2_g3_g2

0xd4ab,	// (0x0001a64a) list_medium_line_t2_g3_g3_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0001cf1a) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0001cf1a) list_medium_line_t2_g3_g

0x85b7,	// (0x00015756) list_medium_line_t2_g3_t1_ParamLimits

0x85b7,	// (0x00015756) list_medium_line_t2_g3_t1

0x85d1,	// (0x00015770) list_medium_line_t2_g3_t2_ParamLimits

0x85d1,	// (0x00015770) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0001cf21) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0001cf21) list_medium_line_t2_g3_t

0xd49f,	// (0x0001a63e) list_medium_line_t3_g3_g1_ParamLimits

0xd49f,	// (0x0001a63e) list_medium_line_t3_g3_g1

0xe74c,	// (0x0001b8eb) list_medium_line_t3_g3_g2_ParamLimits

0xe74c,	// (0x0001b8eb) list_medium_line_t3_g3_g2

0xd4ab,	// (0x0001a64a) list_medium_line_t3_g3_g3_ParamLimits

0xd4ab,	// (0x0001a64a) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0001cf1a) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0001cf1a) list_medium_line_t3_g3_g

0x85e6,	// (0x00015785) list_medium_line_t3_g3_t1_ParamLimits

0x85e6,	// (0x00015785) list_medium_line_t3_g3_t1

0x85ff,	// (0x0001579e) list_medium_line_t3_g3_t2_ParamLimits

0x85ff,	// (0x0001579e) list_medium_line_t3_g3_t2

0x8615,	// (0x000157b4) list_medium_line_t3_g3_t3_ParamLimits

0x8615,	// (0x000157b4) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0001cf26) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0001cf26) list_medium_line_t3_g3_t

0xe648,	// (0x0001b7e7) list_medium_line_right_iconx2_g1

0xe530,	// (0x0001b6cf) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001cf2d) list_medium_line_right_iconx2_g

0xe76d,	// (0x0001b90c) list_medium_line_right_iconx2_t1

0xe648,	// (0x0001b7e7) list_medium_line_t2_right_iconx2_g1

0xe530,	// (0x0001b6cf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001cf2d) list_medium_line_t2_right_iconx2_g

0x862f,	// (0x000157ce) list_medium_line_t2_right_iconx2_t1

0x863f,	// (0x000157de) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0001cf32) list_medium_line_t2_right_iconx2_t

0xe77b,	// (0x0001b91a) list_medium_line_x4_t4_t1

0x864d,	// (0x000157ec) list_medium_line_x4_t4_t2

0x865d,	// (0x000157fc) list_medium_line_x4_t4_t3

0x866d,	// (0x0001580c) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0001cf37) list_medium_line_x4_t4_t

0x86c0,	// (0x0001585f) tport_appsw_pane_ParamLimits

0x86c0,	// (0x0001585f) tport_appsw_pane

0x86d1,	// (0x00015870) tport_contact_pane_ParamLimits

0x86d1,	// (0x00015870) tport_contact_pane

0x86ea,	// (0x00015889) tport_listscroll_pane_ParamLimits

0x86ea,	// (0x00015889) tport_listscroll_pane

0x8705,	// (0x000158a4) cell_tport_appsw_pane_ParamLimits

0x8705,	// (0x000158a4) cell_tport_appsw_pane

0xd166,	// (0x0001a305) tport_appsw_pane_g1_ParamLimits

0xd166,	// (0x0001a305) tport_appsw_pane_g1

0xe789,	// (0x0001b928) tport_contact_pane_g1

0xdf76,	// (0x0001b115) tport_contact_pane_t1

0xe792,	// (0x0001b931) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0001cf40) tport_contact_pane_t

0xe7a0,	// (0x0001b93f) list_tport_pane

0xe7a9,	// (0x0001b948) scroll_pane_cp_030

0xe7ba,	// (0x0001b959) cell_tport_appsw_pane_g1

0xe7ca,	// (0x0001b969) cell_tport_appsw_pane_t1

0x94f7,	// (0x00016696) grid_highlight_pane_cp019

0x8745,	// (0x000158e4) list_tport_double_graphic_pane_ParamLimits

0x8745,	// (0x000158e4) list_tport_double_graphic_pane

0x9567,	// (0x00016706) list_highlight_pane_cp023_ParamLimits

0x9567,	// (0x00016706) list_highlight_pane_cp023

0x8752,	// (0x000158f1) list_tport_double_graphic_pane_g1_ParamLimits

0x8752,	// (0x000158f1) list_tport_double_graphic_pane_g1

0x875f,	// (0x000158fe) list_tport_double_graphic_pane_t1_ParamLimits

0x875f,	// (0x000158fe) list_tport_double_graphic_pane_t1

0x8774,	// (0x00015913) list_tport_double_graphic_pane_t2_ParamLimits

0x8774,	// (0x00015913) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0001cf4c) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0001cf4c) list_tport_double_graphic_pane_t

0x94f7,	// (0x00016696) main_cale_note_pane

0x6582,	// (0x00013721) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6582,	// (0x00013721) cell_vitu2_function_top_wide_pane_cp01

0x7e12,	// (0x00014fb1) wait_bar_pane_cp05_ParamLimits

0x94f7,	// (0x00016696) listscroll_cmail_pane

0xe7e0,	// (0x0001b97f) list_cmail_pane

0x8790,	// (0x0001592f) list_cmail_body_pane

0xe870,	// (0x0001ba0f) list_single_cmail_header_caption_pane

0x87a4,	// (0x00015943) list_single_cmail_header_detail_pane_ParamLimits

0x87a4,	// (0x00015943) list_single_cmail_header_detail_pane

0x87ce,	// (0x0001596d) list_single_cmail_header_caption_pane_t1

0x87de,	// (0x0001597d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x87de,	// (0x0001597d) list_single_cmail_header_detail_pane_g1

0xe801,	// (0x0001b9a0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe801,	// (0x0001b9a0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0001cf51) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0001cf51) list_single_cmail_header_detail_pane_g

0xe81a,	// (0x0001b9b9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe81a,	// (0x0001b9b9) list_single_cmail_header_detail_pane_t1

0xe850,	// (0x0001b9ef) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe850,	// (0x0001b9ef) list_single_cmail_header_editor_pane_bg

0xe0f7,	// (0x0001b296) list_cmail_body_pane_g1

0xe862,	// (0x0001ba01) list_cmail_body_pane_t1

0xd1d2,	// (0x0001a371) list_single_cmail_header_editor_pane_bg_g1

0xa24e,	// (0x000173ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1e2,	// (0x0001a381) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1da,	// (0x0001a379) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd477,	// (0x0001a616) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd202,	// (0x0001a3a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1f2,	// (0x0001a391) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1fa,	// (0x0001a399) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa22e,	// (0x000173cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x881c,	// (0x000159bb) calenote_gesture_pane_ParamLimits

0x881c,	// (0x000159bb) calenote_gesture_pane

0x883c,	// (0x000159db) calenote_window_pane_ParamLimits

0x883c,	// (0x000159db) calenote_window_pane

0xe889,	// (0x0001ba28) popup_note_window_cp01

0x8858,	// (0x000159f7) calenote_swipe_1_pane_ParamLimits

0x8858,	// (0x000159f7) calenote_swipe_1_pane

0x8256,	// (0x000153f5) calenote_swipe_2_pane_ParamLimits

0x8256,	// (0x000153f5) calenote_swipe_2_pane

0xe431,	// (0x0001b5d0) calenote_swipe_1_pane_g1_ParamLimits

0xe431,	// (0x0001b5d0) calenote_swipe_1_pane_g1

0xe43e,	// (0x0001b5dd) calenote_swipe_1_pane_g2_ParamLimits

0xe43e,	// (0x0001b5dd) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0001ce85) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0001ce85) calenote_swipe_1_pane_g

0xe89b,	// (0x0001ba3a) calenote_swipe_1_pane_t1_ParamLimits

0xe89b,	// (0x0001ba3a) calenote_swipe_1_pane_t1

0xe431,	// (0x0001b5d0) calenote_swipe_2_pane_g1_ParamLimits

0xe431,	// (0x0001b5d0) calenote_swipe_2_pane_g1

0xe8ba,	// (0x0001ba59) calenote_swipe_2_pane_g2_ParamLimits

0xe8ba,	// (0x0001ba59) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0001cf5d) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0001cf5d) calenote_swipe_2_pane_g

0xe8c6,	// (0x0001ba65) calenote_swipe_2_pane_t1_ParamLimits

0xe8c6,	// (0x0001ba65) calenote_swipe_2_pane_t1

0x94f7,	// (0x00016696) main_mup_navstr_pane

0x522f,	// (0x000123ce) main_mup3_pane_t7_ParamLimits

0x522f,	// (0x000123ce) main_mup3_pane_t7

0xcd8d,	// (0x00019f2c) main_mp4_pane_g6_ParamLimits

0xcd8d,	// (0x00019f2c) main_mp4_pane_g6

0xcfb5,	// (0x0001a154) main_image3_pane_t4_ParamLimits

0xcfb5,	// (0x0001a154) main_image3_pane_t4

0x886d,	// (0x00015a0c) popup_navstr_preview_pane_ParamLimits

0x886d,	// (0x00015a0c) popup_navstr_preview_pane

0x8881,	// (0x00015a20) scroll_navstr_pane_ParamLimits

0x8881,	// (0x00015a20) scroll_navstr_pane

0x94f7,	// (0x00016696) bg_popup_preview_window_pane_cp04

0xe8ed,	// (0x0001ba8c) popup_navstr_preview_pane_t1

0x8895,	// (0x00015a34) scroll_navstr_pane_g1_ParamLimits

0x8895,	// (0x00015a34) scroll_navstr_pane_g1

0x88a9,	// (0x00015a48) scroll_navstr_pane_t1_ParamLimits

0x88a9,	// (0x00015a48) scroll_navstr_pane_t1

0xe892,	// (0x0001ba31) bg_button_pane_cp014

0xe892,	// (0x0001ba31) bg_button_pane_cp030

0x80f4,	// (0x00015293) list_double_fisheye_pane_g4_ParamLimits

0x80f4,	// (0x00015293) list_double_fisheye_pane_g4

0x8100,	// (0x0001529f) list_double_fisheye_pane_g5_ParamLimits

0x8100,	// (0x0001529f) list_double_fisheye_pane_g5

0xe7e8,	// (0x0001b987) sp_fs_scroll_pane_cp03

0xe570,	// (0x0001b70f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe57c,	// (0x0001b71b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0001cea2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe588,	// (0x0001b727) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8786,	// (0x00015925) sp_fs_scroll_pane_cp02

0x9e4c,	// (0x00016feb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e4c,	// (0x00016feb) popup_sp_fs_calendar_preview_list_single_pane

0x94f7,	// (0x00016696) main_cam6_pano_pane

0x9567,	// (0x00016706) main_mup3_pane_ParamLimits

0x94f7,	// (0x00016696) main_phacti_pane

0x7ce5,	// (0x00014e84) bg_button_pane_cp11

0x7cff,	// (0x00014e9e) main_mobtv_info_pane_g2_ParamLimits

0x7cff,	// (0x00014e9e) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0001ce02) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0001ce02) main_mobtv_info_pane_g

0x7eda,	// (0x00015079) sc_clock_pane_t5_ParamLimits

0x7eda,	// (0x00015079) sc_clock_pane_t5

0x7f5f,	// (0x000150fe) main_radioblah_pane_g1_ParamLimits

0xe37d,	// (0x0001b51c) main_radioblah_pane_t3_ParamLimits

0xe37d,	// (0x0001b51c) main_radioblah_pane_t3

0xe395,	// (0x0001b534) main_radioblah_pane_t4_ParamLimits

0xe395,	// (0x0001b534) main_radioblah_pane_t4

0x7f87,	// (0x00015126) main_radioblah_text_pane_ParamLimits

0x7f87,	// (0x00015126) main_radioblah_text_pane

0x7f99,	// (0x00015138) main_radioblah_info_pane_g1_ParamLimits

0x8032,	// (0x000151d1) main_radioblah_info_pane_t4_ParamLimits

0x8032,	// (0x000151d1) main_radioblah_info_pane_t4

0x9567,	// (0x00016706) main_sp_fs_calendar_pane

0x88c0,	// (0x00015a5f) main_phacti_pane_g1

0x88c8,	// (0x00015a67) phacti_note_pane_ParamLimits

0x88c8,	// (0x00015a67) phacti_note_pane

0xe904,	// (0x0001baa3) phacti_term_pane_ParamLimits

0xe904,	// (0x0001baa3) phacti_term_pane

0xe919,	// (0x0001bab8) phacti_note_pane_t1_ParamLimits

0xe919,	// (0x0001bab8) phacti_note_pane_t1

0xe930,	// (0x0001bacf) phacti_term_pane_g1

0xe938,	// (0x0001bad7) phacti_term_pane_t1_ParamLimits

0xe938,	// (0x0001bad7) phacti_term_pane_t1

0xe962,	// (0x0001bb01) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9fa9,	// (0x00017148) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0001cf67) popup_sp_fs_calendar_preview_list_single_pane_g

0xe96a,	// (0x0001bb09) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe96a,	// (0x0001bb09) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe97f,	// (0x0001bb1e) aid_popup_sp_fs_bg_corner_pane

0xc43a,	// (0x000195d9) popup_sp_fs_calendar_preview_bg_pane_g1

0x94f7,	// (0x00016696) popup_sp_fs_calendar_preview_bg_pane

0xe987,	// (0x0001bb26) popup_sp_fs_calendar_preview_list_pane

0x9567,	// (0x00016706) bg_main_sp_fs_cale_pane_ParamLimits

0x9567,	// (0x00016706) bg_main_sp_fs_cale_pane

0xe998,	// (0x0001bb37) listscroll_cale_mrui_pane_ParamLimits

0xe998,	// (0x0001bb37) listscroll_cale_mrui_pane

0xe9ac,	// (0x0001bb4b) listscroll_sp_fs_schedule_track_pane

0xe9b5,	// (0x0001bb54) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9b5,	// (0x0001bb54) main_sp_fs_ctrlbar_pane_cp01

0xe9c6,	// (0x0001bb65) main_sp_fs_ribbon_pane

0xe9ce,	// (0x0001bb6d) popup_sp_fs_cale_preview_window

0x891f,	// (0x00015abe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x891f,	// (0x00015abe) list_single_sp_fs_schedule_track_pane

0x9567,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9567,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp03

0x8932,	// (0x00015ad1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8932,	// (0x00015ad1) list_single_sp_fs_schedule_track_pane_g1

0x893e,	// (0x00015add) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x893e,	// (0x00015add) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0001cf6c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0001cf6c) list_single_sp_fs_schedule_track_pane_g

0x894a,	// (0x00015ae9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x894a,	// (0x00015ae9) list_single_sp_fs_schedule_track_pane_t1

0x8964,	// (0x00015b03) sp_fs_schedule_track_pane_ParamLimits

0x8964,	// (0x00015b03) sp_fs_schedule_track_pane

0xe9e0,	// (0x0001bb7f) sp_fs_schedule_track_pane_g1

0xe9e8,	// (0x0001bb87) sp_fs_schedule_track_pane_g2

0xe9f0,	// (0x0001bb8f) sp_fs_schedule_track_pane_g3

0xe9f8,	// (0x0001bb97) sp_fs_schedule_track_pane_g4

0xea00,	// (0x0001bb9f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0001cf71) sp_fs_schedule_track_pane_g

0xd1d2,	// (0x0001a371) bg_sp_fs_schedule_viewer_highlight_g1

0xa24e,	// (0x000173ed) bg_sp_fs_schedule_viewer_highlight_g2

0xd1da,	// (0x0001a379) bg_sp_fs_schedule_viewer_highlight_g3

0xd1e2,	// (0x0001a381) bg_sp_fs_schedule_viewer_highlight_g4

0xd477,	// (0x0001a616) bg_sp_fs_schedule_viewer_highlight_g5

0xd1f2,	// (0x0001a391) bg_sp_fs_schedule_viewer_highlight_g6

0xd1fa,	// (0x0001a399) bg_sp_fs_schedule_viewer_highlight_g7

0xd202,	// (0x0001a3a1) bg_sp_fs_schedule_viewer_highlight_g8

0xa22e,	// (0x000173cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0001cf7c) bg_sp_fs_schedule_viewer_highlight_g

0x94f7,	// (0x00016696) bg_main_sp_fs_ribbon_pane

0x8975,	// (0x00015b14) main_sp_fs_ribbon_pane_g1

0xea08,	// (0x0001bba7) main_sp_fs_ribbon_pane_t1

0x897e,	// (0x00015b1d) main_sp_fs_ribbon_pane_t2

0xea17,	// (0x0001bbb6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0001cf8f) main_sp_fs_ribbon_pane_t

0xea26,	// (0x0001bbc5) main_sp_fs_ribbon_scheduler_pane

0xea2e,	// (0x0001bbcd) bg_main_sp_fs_ribbon_pane_g1

0xea37,	// (0x0001bbd6) bg_main_sp_fs_ribbon_pane_g2

0xea40,	// (0x0001bbdf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0001cf96) bg_main_sp_fs_ribbon_pane_g

0xea48,	// (0x0001bbe7) main_sp_fs_ribbon_scheduler_pane_g1

0xea51,	// (0x0001bbf0) main_sp_fs_ribbon_scheduler_pane_g2

0xea5a,	// (0x0001bbf9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0001cf9d) main_sp_fs_ribbon_scheduler_pane_g

0xea63,	// (0x0001bc02) list_cale_mrui_pane

0x898d,	// (0x00015b2c) sp_fs_scroll_pane_cp07_ParamLimits

0x898d,	// (0x00015b2c) sp_fs_scroll_pane_cp07

0x89a3,	// (0x00015b42) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x89a3,	// (0x00015b42) bg_sp_fs_schedule_viewer_highlight

0xea6c,	// (0x0001bc0b) list_single_sp_fs_schedule_track_pane_cp01

0xea74,	// (0x0001bc13) list_sp_fs_schedule_track_pane

0xea7c,	// (0x0001bc1b) sp_fs_scroll_pane_cp06_ParamLimits

0xea7c,	// (0x0001bc1b) sp_fs_scroll_pane_cp06

0xc43a,	// (0x000195d9) bgmain_sp_fs_calendar_pane_g1

0x89b3,	// (0x00015b52) list_single_cale_mrui_pane_ParamLimits

0x89b3,	// (0x00015b52) list_single_cale_mrui_pane

0xea8e,	// (0x0001bc2d) list_single_cale_mrui_row_pane_ParamLimits

0xea8e,	// (0x0001bc2d) list_single_cale_mrui_row_pane

0xea9b,	// (0x0001bc3a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea9b,	// (0x0001bc3a) list_single_cale_mrui_row_pane_g1

0xead3,	// (0x0001bc72) list_single_cale_mrui_row_pane_t1_ParamLimits

0xead3,	// (0x0001bc72) list_single_cale_mrui_row_pane_t1

0x89d4,	// (0x00015b73) list_single_cale_mrui_row_pane_t2_ParamLimits

0x89d4,	// (0x00015b73) list_single_cale_mrui_row_pane_t2

0xeae5,	// (0x0001bc84) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeae5,	// (0x0001bc84) list_single_cale_mrui_row_pane_t3

0xeb14,	// (0x0001bcb3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb14,	// (0x0001bcb3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x0001cfa9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x0001cfa9) list_single_cale_mrui_row_pane_t

0x8a3c,	// (0x00015bdb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8a3c,	// (0x00015bdb) list_single_cmail_header_editor_pane_bg_cp01

0x8a62,	// (0x00015c01) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8a62,	// (0x00015c01) list_single_cmail_header_editor_pane_bg_cp02

0x8a82,	// (0x00015c21) main_radioblah_text_pane_t1_ParamLimits

0x8a82,	// (0x00015c21) main_radioblah_text_pane_t1

0xeb43,	// (0x0001bce2) cam6_indi_pane_cp01

0xeb4b,	// (0x0001bcea) cam6_mode_pane_cp01

0xeb53,	// (0x0001bcf2) cam6_pano_pane

0xeb5c,	// (0x0001bcfb) cam6_zoom_pane_cp01

0xeb64,	// (0x0001bd03) cam6_pano_image_pane

0xeb6f,	// (0x0001bd0e) cam6_pano_pane_g1

0xe0f7,	// (0x0001b296) cam6_pano_pane_g2

0xeb78,	// (0x0001bd17) cam6_pano_pane_g3

0xeb81,	// (0x0001bd20) cam6_pano_pane_g4

0xc9f0,	// (0x00019b8f) cam6_pano_pane_g5

0xeb8a,	// (0x0001bd29) cam6_pano_pane_g6

0xdeb8,	// (0x0001b057) cam6_pano_pane_g7

0xeb94,	// (0x0001bd33) cam6_pano_pane_g8

0xeb9d,	// (0x0001bd3c) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x0001cfb2) cam6_pano_pane_g

0x94f7,	// (0x00016696) main_browser_tag_pane

0xe8e5,	// (0x0001ba84) grid_navstr_albumart_pane

0xeba8,	// (0x0001bd47) cell_navstr_albumart_pane_ParamLimits

0xeba8,	// (0x0001bd47) cell_navstr_albumart_pane

0xebcb,	// (0x0001bd6a) cell_navstr_albumart_pane_g1

0xbd51,	// (0x00018ef0) cell_navstr_albumart_pane_g2

0xbd61,	// (0x00018f00) cell_navstr_albumart_pane_g3

0xbd59,	// (0x00018ef8) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x0001cfc5) cell_navstr_albumart_pane_g

0x8a9c,	// (0x00015c3b) bt_list_pane_ParamLimits

0x8a9c,	// (0x00015c3b) bt_list_pane

0x8ab0,	// (0x00015c4f) bt_list_pane_t1

0x8abf,	// (0x00015c5e) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x0001cfce) bt_list_pane_t

0x94f7,	// (0x00016696) main_cale_prevew_pane

0x8ace,	// (0x00015c6d) popup_cale_preview_window_ParamLimits

0x8ace,	// (0x00015c6d) popup_cale_preview_window

0x9567,	// (0x00016706) bg_popup_preview_window_pane_cp05_ParamLimits

0x9567,	// (0x00016706) bg_popup_preview_window_pane_cp05

0xebd3,	// (0x0001bd72) list_cale_preview_pane_ParamLimits

0xebd3,	// (0x0001bd72) list_cale_preview_pane

0x8ae7,	// (0x00015c86) list_double_cale_preview_pane_ParamLimits

0x8ae7,	// (0x00015c86) list_double_cale_preview_pane

0x8af9,	// (0x00015c98) list_single_cale_preview_pane_ParamLimits

0x8af9,	// (0x00015c98) list_single_cale_preview_pane

0x8b0f,	// (0x00015cae) list_single_cale_preview_pane_g1

0x8b17,	// (0x00015cb6) list_single_cale_preview_pane_t1_ParamLimits

0x8b17,	// (0x00015cb6) list_single_cale_preview_pane_t1

0x8b2c,	// (0x00015ccb) list_double_cale_preview_pane_g1

0x8b34,	// (0x00015cd3) list_double_cale_preview_pane_t1_ParamLimits

0x8b34,	// (0x00015cd3) list_double_cale_preview_pane_t1

0x8b49,	// (0x00015ce8) list_double_cale_preview_pane_t2_ParamLimits

0x8b49,	// (0x00015ce8) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x0001cfd3) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x0001cfd3) list_double_cale_preview_pane_t

0x94f7,	// (0x00016696) main_ezdial_pane

0x9567,	// (0x00016706) main_sp_fs_email_pane_ParamLimits

0x828e,	// (0x0001542d) cmail_ddmenu_btn01_pane_ParamLimits

0x828e,	// (0x0001542d) cmail_ddmenu_btn01_pane

0x82a1,	// (0x00015440) cmail_ddmenu_btn02_pane_ParamLimits

0x82a1,	// (0x00015440) cmail_ddmenu_btn02_pane

0x82c4,	// (0x00015463) cmail_ddmenu_btn03_pane_ParamLimits

0x82c4,	// (0x00015463) cmail_ddmenu_btn03_pane

0x82e8,	// (0x00015487) main_sp_fs_ctrlbar_pane_ParamLimits

0x830c,	// (0x000154ab) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8790,	// (0x0001592f) list_cmail_body_pane_ParamLimits

0xe7f8,	// (0x0001b997) bg_button_pane_cp12

0xe80d,	// (0x0001b9ac) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe80d,	// (0x0001b9ac) list_single_cmail_header_detail_pane_g3

0x87f6,	// (0x00015995) list_single_cmail_header_detail_pane_t2_ParamLimits

0x87f6,	// (0x00015995) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0001cf58) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0001cf58) list_single_cmail_header_detail_pane_t

0xe94d,	// (0x0001baec) phacti_term_pane_t2_ParamLimits

0xe94d,	// (0x0001baec) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0001cf62) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0001cf62) phacti_term_pane_t

0xebdf,	// (0x0001bd7e) aid_size_list_single_double

0x8b61,	// (0x00015d00) popup_ezdial_listscroll_window

0x8b7d,	// (0x00015d1c) popup_number_entry_window_cp01

0xaa77,	// (0x00017c16) bg_popup_call_pane_cp09

0xebeb,	// (0x0001bd8a) ezdial_list_pane

0xebf3,	// (0x0001bd92) scroll_pane_cp23

0xbf34,	// (0x000190d3) bg_button_pane_cp028_ParamLimits

0xbf34,	// (0x000190d3) bg_button_pane_cp028

0x8b8b,	// (0x00015d2a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b8b,	// (0x00015d2a) cmail_ddmenu_btn01_pane_g1

0x8b97,	// (0x00015d36) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b97,	// (0x00015d36) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x0001cfd8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x0001cfd8) cmail_ddmenu_btn01_pane_g

0xebfb,	// (0x0001bd9a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xebfb,	// (0x0001bd9a) cmail_ddmenu_btn01_pane_t1

0xbf34,	// (0x000190d3) bg_button_pane_cp029_ParamLimits

0xbf34,	// (0x000190d3) bg_button_pane_cp029

0x8ba3,	// (0x00015d42) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ba3,	// (0x00015d42) cmail_ddmenu_btn02_pane_g1

0x8bbb,	// (0x00015d5a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8bbb,	// (0x00015d5a) cmail_ddmenu_btn02_pane_t1

0x9567,	// (0x00016706) bg_button_pane_cp031_ParamLimits

0x9567,	// (0x00016706) bg_button_pane_cp031

0x8ba3,	// (0x00015d42) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ba3,	// (0x00015d42) cmail_ddmenu_btn03_pane_g1

0x8bbb,	// (0x00015d5a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8bbb,	// (0x00015d5a) cmail_ddmenu_btn03_pane_t1

0x5d88,	// (0x00012f27) cell_dialer2_keypad_pane_t1_ParamLimits

0x5da2,	// (0x00012f41) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5da2,	// (0x00012f41) cell_dialer2_keypad_pane_t1_copy1

0x7b81,	// (0x00014d20) ncimui_group_button_pane

0x9567,	// (0x00016706) main_sp_fs_calendar_pane_ParamLimits

0xe870,	// (0x0001ba0f) list_single_cmail_header_caption_pane_ParamLimits

0xe98f,	// (0x0001bb2e) aid_recal_txt_sm_pane

0x94f7,	// (0x00016696) mian_recal_day_pane

0xe9ce,	// (0x0001bb6d) popup_sp_fs_cale_preview_window_ParamLimits

0x94f7,	// (0x00016696) list_recal_day_pane

0xec32,	// (0x0001bdd1) list_single_recal_day_pane_ParamLimits

0xec32,	// (0x0001bdd1) list_single_recal_day_pane

0xec44,	// (0x0001bde3) list_single_recal_day_pane_g1_ParamLimits

0xec44,	// (0x0001bde3) list_single_recal_day_pane_g1

0xec50,	// (0x0001bdef) list_single_recal_day_pane_g2_ParamLimits

0xec50,	// (0x0001bdef) list_single_recal_day_pane_g2

0xec5f,	// (0x0001bdfe) list_single_recal_day_pane_g3_ParamLimits

0xec5f,	// (0x0001bdfe) list_single_recal_day_pane_g3

0x8bdf,	// (0x00015d7e) list_single_recal_day_pane_g4_ParamLimits

0x8bdf,	// (0x00015d7e) list_single_recal_day_pane_g4

0xec6b,	// (0x0001be0a) list_single_recal_day_pane_g5_ParamLimits

0xec6b,	// (0x0001be0a) list_single_recal_day_pane_g5

0xec7a,	// (0x0001be19) list_single_recal_day_pane_g6_ParamLimits

0xec7a,	// (0x0001be19) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x0001cfe7) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x0001cfe7) list_single_recal_day_pane_g

0xec86,	// (0x0001be25) list_single_recal_day_pane_t1

0xec94,	// (0x0001be33) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0001cff4) list_single_recal_day_pane_t

0x8bf2,	// (0x00015d91) ncimui_query_button_pane_ParamLimits

0x8bf2,	// (0x00015d91) ncimui_query_button_pane

0x8c02,	// (0x00015da1) ncimui_query_button_pane_t1_ParamLimits

0x8c02,	// (0x00015da1) ncimui_query_button_pane_t1

0xeca2,	// (0x0001be41) ncimui_query_button_pane_t2_ParamLimits

0xeca2,	// (0x0001be41) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0001cff9) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0001cff9) ncimui_query_button_pane_t

0x8c15,	// (0x00015db4) query_button_pane_ParamLimits

0x8c15,	// (0x00015db4) query_button_pane

0x94f7,	// (0x00016696) bg_button_pane_cp0028

0xecb5,	// (0x0001be54) query_button_pane_t1

0x3e71,	// (0x00011010) main_tport_pane_ParamLimits

0x867d,	// (0x0001581c) bg_popup_window_pane_cp01_ParamLimits

0x867d,	// (0x0001581c) bg_popup_window_pane_cp01

0x8697,	// (0x00015836) heading_pane_cp08_ParamLimits

0x8697,	// (0x00015836) heading_pane_cp08

0x86ab,	// (0x0001584a) heading_pane_cp07_ParamLimits

0x86ab,	// (0x0001584a) heading_pane_cp07

0xe7ba,	// (0x0001b959) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0001cf45) cell_tport_appsw_pane_g

0xabf8,	// (0x00017d97) input_candi_list_open_g1

0xa44d,	// (0x000175ec) list_cale_time_pane_g6_ParamLimits

0xa44d,	// (0x000175ec) list_cale_time_pane_g6

0x4c3e,	// (0x00011ddd) aid_size_touch_calib_1_ParamLimits

0x4c3e,	// (0x00011ddd) aid_size_touch_calib_1

0x4c4a,	// (0x00011de9) aid_size_touch_calib_2_ParamLimits

0x4c4a,	// (0x00011de9) aid_size_touch_calib_2

0x4c60,	// (0x00011dff) aid_size_touch_calib_3_ParamLimits

0x4c60,	// (0x00011dff) aid_size_touch_calib_3

0x4c7e,	// (0x00011e1d) aid_size_touch_calib_4_ParamLimits

0x4c7e,	// (0x00011e1d) aid_size_touch_calib_4

0x4c94,	// (0x00011e33) main_touch_calib_button_group_pane_ParamLimits

0x4c94,	// (0x00011e33) main_touch_calib_button_group_pane

0x4cab,	// (0x00011e4a) main_touch_calib_pane_g1_ParamLimits

0x4cb7,	// (0x00011e56) main_touch_calib_pane_g2_ParamLimits

0x4cc3,	// (0x00011e62) main_touch_calib_pane_g3_ParamLimits

0x4ccf,	// (0x00011e6e) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0001c923) main_touch_calib_pane_g_ParamLimits

0x4cdb,	// (0x00011e7a) main_touch_calib_pane_t1_ParamLimits

0x4cf5,	// (0x00011e94) main_touch_calib_pane_t2_ParamLimits

0x4d0f,	// (0x00011eae) main_touch_calib_pane_t3_ParamLimits

0x4d23,	// (0x00011ec2) main_touch_calib_pane_t4_ParamLimits

0x4d37,	// (0x00011ed6) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0001c92c) main_touch_calib_pane_t_ParamLimits

0xc7b8,	// (0x00019957) list_single_fp_cale_pane_g3_ParamLimits

0xc7b8,	// (0x00019957) list_single_fp_cale_pane_g3

0x9567,	// (0x00016706) bg_button_pane_cp012_ParamLimits

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp03_ParamLimits

0x6e36,	// (0x00013fd5) cell_vitu2_function_top_pane_g1_ParamLimits

0x9567,	// (0x00016706) bg_vkb2_func_pane_cp04_ParamLimits

0x7b35,	// (0x00014cd4) main_ncimui_button_group_pane_ParamLimits

0x7b35,	// (0x00014cd4) main_ncimui_button_group_pane

0x7b6f,	// (0x00014d0e) main_ncimui_pane_t3_ParamLimits

0x7b6f,	// (0x00014d0e) main_ncimui_pane_t3

0xe8fb,	// (0x0001ba9a) phacti_button_group_pane

0xebdf,	// (0x0001bd7e) aid_size_list_single_double_ParamLimits

0x8b61,	// (0x00015d00) popup_ezdial_listscroll_window_ParamLimits

0x8b7d,	// (0x00015d1c) popup_number_entry_window_cp01_ParamLimits

0x8c28,	// (0x00015dc7) phacti_button_pane_ParamLimits

0x8c28,	// (0x00015dc7) phacti_button_pane

0x94f7,	// (0x00016696) bg_button_pane_cp14

0xecc3,	// (0x0001be62) phacti_button_pane_t1

0x8c39,	// (0x00015dd8) main_touch_calib_button_pane_ParamLimits

0x8c39,	// (0x00015dd8) main_touch_calib_button_pane

0x9cdc,	// (0x00016e7b) bg_button_pane_cp18_ParamLimits

0x9cdc,	// (0x00016e7b) bg_button_pane_cp18

0xecd1,	// (0x0001be70) main_touch_calib_button_pane_t1_ParamLimits

0xecd1,	// (0x0001be70) main_touch_calib_button_pane_t1

0xece7,	// (0x0001be86) main_touch_calib_button_pane_t2_ParamLimits

0xece7,	// (0x0001be86) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0001cffe) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0001cffe) main_touch_calib_button_pane_t

0x94f7,	// (0x00016696) cell_ncimui_button_pane

0x94f7,	// (0x00016696) bg_button_pane_cp032

0xed05,	// (0x0001bea4) cell_ncimui_button_pane_t1

0xcf95,	// (0x0001a134) image3_infobar_pane_ParamLimits

0xcf95,	// (0x0001a134) image3_infobar_pane

0x7f06,	// (0x000150a5) fs_bigclock_status_pane_ParamLimits

0x7f06,	// (0x000150a5) fs_bigclock_status_pane

0x7f13,	// (0x000150b2) main_fs_bigclock_clock_pane_ParamLimits

0x7f13,	// (0x000150b2) main_fs_bigclock_clock_pane

0x7f26,	// (0x000150c5) main_fs_bigclock_indi_pane_ParamLimits

0x7f26,	// (0x000150c5) main_fs_bigclock_indi_pane

0x7f3e,	// (0x000150dd) main_fs_bigclock_swipe_pane_ParamLimits

0x7f3e,	// (0x000150dd) main_fs_bigclock_swipe_pane

0x94f7,	// (0x00016696) main_fs_clock_dumped_data

0xe204,	// (0x0001b3a3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe204,	// (0x0001b3a3) list_single_fs_bigclock_indicator_pane_g1

0xe220,	// (0x0001b3bf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe220,	// (0x0001b3bf) list_single_fs_bigclock_indicator_pane_g2

0xe23a,	// (0x0001b3d9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe23a,	// (0x0001b3d9) list_single_fs_bigclock_indicator_pane_g3

0xe254,	// (0x0001b3f3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe254,	// (0x0001b3f3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0001ce36) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0001ce36) list_single_fs_bigclock_indicator_pane_g

0xe27a,	// (0x0001b419) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe27a,	// (0x0001b419) list_single_fs_bigclock_indicator_pane_t1

0xe2a2,	// (0x0001b441) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe2a2,	// (0x0001b441) list_single_fs_bigclock_indicator_pane_t2

0xe2ca,	// (0x0001b469) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2ca,	// (0x0001b469) list_single_fs_bigclock_indicator_pane_t3

0xe2f2,	// (0x0001b491) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2f2,	// (0x0001b491) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0001ce41) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0001ce41) list_single_fs_bigclock_indicator_pane_t

0xed13,	// (0x0001beb2) image3_infobar_fav_pane_ParamLimits

0xed13,	// (0x0001beb2) image3_infobar_fav_pane

0xed23,	// (0x0001bec2) image3_infobar_loc_pane_ParamLimits

0xed23,	// (0x0001bec2) image3_infobar_loc_pane

0xed37,	// (0x0001bed6) image3_infobar_time_pane_ParamLimits

0xed37,	// (0x0001bed6) image3_infobar_time_pane

0xc43a,	// (0x000195d9) image3_infobar_time_pane_g1

0xed47,	// (0x0001bee6) image3_infobar_time_pane_t1

0xc43a,	// (0x000195d9) image3_infobar_loc_pane_g1

0xed55,	// (0x0001bef4) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0001d003) image3_infobar_loc_pane_g

0xed5d,	// (0x0001befc) image3_infobar_loc_pane_t1

0xc43a,	// (0x000195d9) image3_infobar_fav_pane_g1

0xed6b,	// (0x0001bf0a) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0001d008) image3_infobar_fav_pane_g

0xed73,	// (0x0001bf12) fs_bigclock_status_battery_pane

0xed7c,	// (0x0001bf1b) fs_bigclock_status_signal_pane

0xed85,	// (0x0001bf24) fs_bigclock_status_title_pane

0xed8e,	// (0x0001bf2d) fs_bigclock_status_signal_pane_g1

0xed97,	// (0x0001bf36) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0001d00d) fs_bigclock_status_signal_pane_g

0xed9f,	// (0x0001bf3e) fs_bigclock_status_battery_pane_g1

0xeda8,	// (0x0001bf47) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0001d012) fs_bigclock_status_battery_pane_g

0xedb0,	// (0x0001bf4f) fs_bigclock_status_title_pane_t1

0xc43a,	// (0x000195d9) main_fs_bigclock_clock_pane_g1

0xedbe,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g2

0xedbe,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g3

0xedbe,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0001d017) main_fs_bigclock_clock_pane_g

0xedc6,	// (0x0001bf65) main_fs_bigclock_clock_pane_t1

0xedd4,	// (0x0001bf73) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0001d020) main_fs_bigclock_clock_pane_t

0xede3,	// (0x0001bf82) list_single_fs_bigclock_indicator_pane_ParamLimits

0xede3,	// (0x0001bf82) list_single_fs_bigclock_indicator_pane

0x8c4e,	// (0x00015ded) list_single_fs_bigclock_pane_ParamLimits

0x8c4e,	// (0x00015ded) list_single_fs_bigclock_pane

0xedfd,	// (0x0001bf9c) main_fs_bigclock_indicator_pane_t1

0xee27,	// (0x0001bfc6) list_single_fs_bigclock_pane_g1

0xee2f,	// (0x0001bfce) list_single_fs_bigclock_pane_t1

0xc43a,	// (0x000195d9) main_fs_bigclock_swipe_pane_g1

0xee6d,	// (0x0001c00c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0001d031) main_fs_bigclock_swipe_pane_g

0xee75,	// (0x0001c014) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee75,	// (0x0001c014) main_fs_bigclock_swipe_pane_t1

0x2cb8,	// (0x0000fe57) call_type_pane_ParamLimits

0x94f7,	// (0x00016696) main_btmg_pane

0xeac7,	// (0x0001bc66) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeac7,	// (0x0001bc66) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x0001cfa4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0001cfa4) list_single_cale_mrui_row_pane_g

0xec19,	// (0x0001bdb8) list_recal_vselct_arw_lo_pane

0xec21,	// (0x0001bdc0) list_recal_vselct_arw_up_pane

0xec29,	// (0x0001bdc8) list_recal_vselct_pane

0xee92,	// (0x0001c031) btmg_button_pane

0x8cb3,	// (0x00015e52) main_btmg_pane_g1

0x94f7,	// (0x00016696) bg_button_pane_cp044

0xee9c,	// (0x0001c03b) btmg_button_pane_t1

0xbf2c,	// (0x000190cb) aid_listscroll_gen

0x9567,	// (0x00016706) main_cntbar_detail_pane

0xe7d8,	// (0x0001b977) list_cmail_folder_pane

0xe7e8,	// (0x0001b987) sp_fs_scroll_pane_cp03_ParamLimits

0xe870,	// (0x0001ba0f) list_single_fs_dyc_pane_cp01_ParamLimits

0xe870,	// (0x0001ba0f) list_single_fs_dyc_pane_cp01

0xeeaa,	// (0x0001c049) aid_size_cmail_indent

0xeeb3,	// (0x0001c052) list_single_dyc_row_pane_cp01

0x8ce9,	// (0x00015e88) cntbar_detail_list_pane_ParamLimits

0x8ce9,	// (0x00015e88) cntbar_detail_list_pane

0x8d35,	// (0x00015ed4) main_cntbar_detail_cont_pane_ParamLimits

0x8d35,	// (0x00015ed4) main_cntbar_detail_cont_pane

0x2c52,	// (0x0000fdf1) scroll_pane_cp032_ParamLimits

0x2c52,	// (0x0000fdf1) scroll_pane_cp032

0x8d49,	// (0x00015ee8) cntbar_detail_list_event_pane_ParamLimits

0x8d49,	// (0x00015ee8) cntbar_detail_list_event_pane

0x8cf9,	// (0x00015e98) cntbar_detail_list_shct_pane

0xa29c,	// (0x0001743b) aid_list_gen

0xeebc,	// (0x0001c05b) aid_scroll

0xeec5,	// (0x0001c064) aid_size_touch_scroll_bar

0x8d59,	// (0x00015ef8) aid_list_double

0xeece,	// (0x0001c06d) aid_list_single

0x8d59,	// (0x00015ef8) aid_list_single_lg

0xeed7,	// (0x0001c076) aid_list_z_g_a_sm

0xeedf,	// (0x0001c07e) aid_list_z_g_d

0xeee7,	// (0x0001c086) aid_txt_z_prm

0x8d62,	// (0x00015f01) aid_txt_z_prm_cp01

0x8d70,	// (0x00015f0f) aid_txt_z_sec

0x8d7e,	// (0x00015f1d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d7e,	// (0x00015f1d) main_cntbar_detail_cont_pane_g1

0x8d92,	// (0x00015f31) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d92,	// (0x00015f31) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0001d036) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0001d036) main_cntbar_detail_cont_pane_g

0xeef5,	// (0x0001c094) main_cntbar_detail_cont_pane_t1

0xef03,	// (0x0001c0a2) main_cntbar_detail_cont_pane_t2

0xef11,	// (0x0001c0b0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0001d03b) main_cntbar_detail_cont_pane_t

0x8da2,	// (0x00015f41) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8da2,	// (0x00015f41) cell_cntbar_detail_list_shct_pane

0xef1f,	// (0x0001c0be) cntbar_detail_list_shct_pane_g1

0xef28,	// (0x0001c0c7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0001d042) cntbar_detail_list_shct_pane_g

0x8db6,	// (0x00015f55) cntbar_detail_list_event_pane_g1_ParamLimits

0x8db6,	// (0x00015f55) cntbar_detail_list_event_pane_g1

0x8dc2,	// (0x00015f61) cntbar_detail_list_event_pane_g2_ParamLimits

0x8dc2,	// (0x00015f61) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0001d047) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0001d047) cntbar_detail_list_event_pane_g

0x8e2e,	// (0x00015fcd) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e2e,	// (0x00015fcd) cntbar_detail_list_event_pane_t1

0x8e43,	// (0x00015fe2) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e43,	// (0x00015fe2) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0001d054) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0001d054) cntbar_detail_list_event_pane_t

0xc43a,	// (0x000195d9) cell_cntbar_detail_list_shct_pane_g1

0x301a,	// (0x000101b9) navi_pane_mv_g3

0x9567,	// (0x00016706) main_cntbar_detail_pane_ParamLimits

0x94f7,	// (0x00016696) main_notif_wgt_pane

0xcd27,	// (0x00019ec6) aid_tch_main_mp4_pane_g4

0xcf29,	// (0x0001a0c8) popup_slider_window_cp02

0xec10,	// (0x0001bdaf) list_recal_day_event_pane

0x8cbd,	// (0x00015e5c) cntbar_detail_btn_pane_ParamLimits

0x8cbd,	// (0x00015e5c) cntbar_detail_btn_pane

0x8cd3,	// (0x00015e72) cntbar_detail_btn_pane_cp01_ParamLimits

0x8cd3,	// (0x00015e72) cntbar_detail_btn_pane_cp01

0x8cf9,	// (0x00015e98) cntbar_detail_list_shct_pane_ParamLimits

0x8d09,	// (0x00015ea8) cntbar_detail_pane_g1_ParamLimits

0x8d09,	// (0x00015ea8) cntbar_detail_pane_g1

0x8d19,	// (0x00015eb8) cntbar_detail_pane_t1_ParamLimits

0x8d19,	// (0x00015eb8) cntbar_detail_pane_t1

0x8dce,	// (0x00015f6d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8dce,	// (0x00015f6d) cntbar_detail_list_event_pane_g3

0x8de6,	// (0x00015f85) cntbar_detail_list_event_pane_g4_ParamLimits

0x8de6,	// (0x00015f85) cntbar_detail_list_event_pane_g4

0x8dfe,	// (0x00015f9d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8dfe,	// (0x00015f9d) cntbar_detail_list_event_pane_g5

0x8e16,	// (0x00015fb5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e16,	// (0x00015fb5) cntbar_detail_list_event_pane_g6

0x8e58,	// (0x00015ff7) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e58,	// (0x00015ff7) cntbar_detail_list_event_pane_t3

0x8e6a,	// (0x00016009) popup_notif_wgt_window_ParamLimits

0x8e6a,	// (0x00016009) popup_notif_wgt_window

0x8e83,	// (0x00016022) popup_submenu_window_cp01_ParamLimits

0x8e83,	// (0x00016022) popup_submenu_window_cp01

0xaa77,	// (0x00017c16) bg_popup_window_pane_cp10

0xef31,	// (0x0001c0d0) listscroll_notif_wgt_pane

0xef3b,	// (0x0001c0da) list_notif_wgt_window

0xef44,	// (0x0001c0e3) scroll_pane_cp033

0xee0c,	// (0x0001bfab) list_notif_wgt_row_pane_ParamLimits

0xee0c,	// (0x0001bfab) list_notif_wgt_row_pane

0xef4d,	// (0x0001c0ec) aid_size_list_notif_wgt_del

0xef56,	// (0x0001c0f5) list_notif_wgt_row_pane_g1

0xef5e,	// (0x0001c0fd) list_notif_wgt_row_pane_g2

0xef66,	// (0x0001c105) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0001d05b) list_notif_wgt_row_pane_g

0xef6f,	// (0x0001c10e) list_notif_wgt_row_pane_t1

0xef7d,	// (0x0001c11c) list_notif_wgt_row_pane_t2

0xef8b,	// (0x0001c12a) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0001d062) list_notif_wgt_row_pane_t

0xd4b7,	// (0x0001a656) list_recal_day_event_pane_g1

0xef99,	// (0x0001c138) list_recal_day_event_pane_t1

0x94f7,	// (0x00016696) bg_button_pane_cp045

0xefa8,	// (0x0001c147) cntbar_detail_btn_pane_t1

0xbf34,	// (0x000190d3) main_callh_pane_ParamLimits

0xbf34,	// (0x000190d3) main_callh_pane

0x94f7,	// (0x00016696) main_coverflow0_pane

0x94f7,	// (0x00016696) main_wgtman_pane

0x7f4c,	// (0x000150eb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7f4c,	// (0x000150eb) main_fs_bigclock_unlock_btn_pane

0xe7b2,	// (0x0001b951) bg_button_pane_cp16

0xe7c2,	// (0x0001b961) cell_tport_appsw_pane_g3

0x8e95,	// (0x00016034) cf0_flow_pane_ParamLimits

0x8e95,	// (0x00016034) cf0_flow_pane

0xefb6,	// (0x0001c155) listscroll_cf0_pane

0xefbf,	// (0x0001c15e) main_cf0_pane_g1

0x8eaa,	// (0x00016049) main_cf0_pane_t1_ParamLimits

0x8eaa,	// (0x00016049) main_cf0_pane_t1

0x8ec2,	// (0x00016061) main_cf0_pane_t2_ParamLimits

0x8ec2,	// (0x00016061) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001d069) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001d069) main_cf0_pane_t

0xefc9,	// (0x0001c168) scroll_pane_cp11

0x8eda,	// (0x00016079) cf0_flow_pane_g1

0x8ee2,	// (0x00016081) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001d06e) cf0_flow_pane_g

0x8eea,	// (0x00016089) cf0_flow_pane_t1

0x94f7,	// (0x00016696) main_call6_pane

0x94f7,	// (0x00016696) main_calllock_pane

0x8ef8,	// (0x00016097) call6_btn_grp_pane_ParamLimits

0x8ef8,	// (0x00016097) call6_btn_grp_pane

0x8f12,	// (0x000160b1) call6_pane_g1_ParamLimits

0x8f12,	// (0x000160b1) call6_pane_g1

0x8f27,	// (0x000160c6) popup_call6_1st_window_ParamLimits

0x8f27,	// (0x000160c6) popup_call6_1st_window

0x8f38,	// (0x000160d7) popup_call6_2nd_window_ParamLimits

0x8f38,	// (0x000160d7) popup_call6_2nd_window

0x8f49,	// (0x000160e8) cell_call6_btn_pane_ParamLimits

0x8f49,	// (0x000160e8) cell_call6_btn_pane

0xaa77,	// (0x00017c16) bg_popup_call2_in_pane_cp03

0xefd4,	// (0x0001c173) popup_call6_1st_window_g1

0xefdc,	// (0x0001c17b) popup_call6_1st_window_g2

0xefe4,	// (0x0001c183) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001d073) popup_call6_1st_window_g

0xefec,	// (0x0001c18b) popup_call6_1st_window_t1

0xeffb,	// (0x0001c19a) popup_call6_1st_window_t2

0xf00b,	// (0x0001c1aa) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001d07a) popup_call6_1st_window_t

0xaa77,	// (0x00017c16) bg_popup_call2_in_pane_cp04

0xefd4,	// (0x0001c173) popup_call6_2nd_window_g1

0xefdc,	// (0x0001c17b) popup_call6_2nd_window_g2

0xefe4,	// (0x0001c183) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001d073) popup_call6_2nd_window_g

0xefec,	// (0x0001c18b) popup_call6_2nd_window_t1

0x94f7,	// (0x00016696) bg_button_pane_cp15

0xf01b,	// (0x0001c1ba) cell_call6_btn_pane_g1

0xf024,	// (0x0001c1c3) cell_call6_btn_pane_t1

0x8f5d,	// (0x000160fc) listscroll_wgtman_pane_ParamLimits

0x8f5d,	// (0x000160fc) listscroll_wgtman_pane

0x8f80,	// (0x0001611f) wgtman_btn_pane_ParamLimits

0x8f80,	// (0x0001611f) wgtman_btn_pane

0xa92e,	// (0x00017acd) aid_scroll_copy1

0xf033,	// (0x0001c1d2) list_wgtman_pane

0x8fc3,	// (0x00016162) wgtman_btn_pane_g1_ParamLimits

0x8fc3,	// (0x00016162) wgtman_btn_pane_g1

0x8fef,	// (0x0001618e) wgtman_btn_pane_t1_ParamLimits

0x8fef,	// (0x0001618e) wgtman_btn_pane_t1

0xf03d,	// (0x0001c1dc) wgtman_btn_pane_t2_ParamLimits

0xf03d,	// (0x0001c1dc) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001d081) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001d081) wgtman_btn_pane_t

0x902c,	// (0x000161cb) listrow_wgtman_pane_ParamLimits

0x902c,	// (0x000161cb) listrow_wgtman_pane

0x903e,	// (0x000161dd) listrow_wgtman_pane_g1

0x9047,	// (0x000161e6) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001d086) listrow_wgtman_pane_g

0x9051,	// (0x000161f0) listrow_wgtman_pane_t1

0x905f,	// (0x000161fe) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001d08b) listrow_wgtman_pane_t

0x906d,	// (0x0001620c) wait_bar_pane_cp09

0xf054,	// (0x0001c1f3) main_calllock_btn_pane

0xf05e,	// (0x0001c1fd) main_calllock_pane_g1

0x94f7,	// (0x00016696) bg_button_pane_cp17

0xf06a,	// (0x0001c209) main_calllock_btn_pane_g1

0xf073,	// (0x0001c212) main_calllock_btn_pane_t1

0x94f7,	// (0x00016696) main_dialer3_pane

0x94f7,	// (0x00016696) main_fmrd2_pane

0xc43a,	// (0x000195d9) main_fs_bigclock_unlock_btn_pane_g1

0xf08a,	// (0x0001c229) main_fs_bigclock_unlock_btn_pane_t1

0x9075,	// (0x00016214) area_fmrd2_info_pane_ParamLimits

0x9075,	// (0x00016214) area_fmrd2_info_pane

0x9086,	// (0x00016225) area_fmrd2_visual_pane_ParamLimits

0x9086,	// (0x00016225) area_fmrd2_visual_pane

0x9094,	// (0x00016233) fmrd2_indi_pane_ParamLimits

0x9094,	// (0x00016233) fmrd2_indi_pane

0x90a1,	// (0x00016240) area_fmrd2_visual_pane_g1

0x90a9,	// (0x00016248) area_fmrd2_visual_pane_t1

0x90b9,	// (0x00016258) area_fmrd2_visual_pane_t2

0x90c9,	// (0x00016268) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001d095) area_fmrd2_visual_pane_t

0x90d9,	// (0x00016278) area_fmrd2_info_pane_g1

0x90e1,	// (0x00016280) area_fmrd2_info_pane_t1

0x90f1,	// (0x00016290) area_fmrd2_info_pane_t2

0x9101,	// (0x000162a0) area_fmrd2_info_pane_t3

0x9111,	// (0x000162b0) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001d09c) area_fmrd2_info_pane_t

0x911f,	// (0x000162be) fmrd2_indi_pane_t1

0x912f,	// (0x000162ce) fmrd2_indi_pane_t2

0x913f,	// (0x000162de) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001d0a5) fmrd2_indi_pane_t

0xe263,	// (0x0001b402) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe263,	// (0x0001b402) list_single_fs_bigclock_indicator_pane_g5

0xe307,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe307,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_t5

0x88dc,	// (0x00015a7b) aid_cell_bcale_month_pane_ParamLimits

0x88dc,	// (0x00015a7b) aid_cell_bcale_month_pane

0x88ee,	// (0x00015a8d) bcale_month_pane_ParamLimits

0x88ee,	// (0x00015a8d) bcale_month_pane

0x8906,	// (0x00015aa5) bcale_preview_pane_ParamLimits

0x8906,	// (0x00015aa5) bcale_preview_pane

0xee2f,	// (0x0001bfce) list_single_fs_bigclock_pane_t1_ParamLimits

0xee49,	// (0x0001bfe8) list_single_fs_bigclock_pane_t2_ParamLimits

0xee49,	// (0x0001bfe8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0001d02c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0001d02c) list_single_fs_bigclock_pane_t

0xf082,	// (0x0001c221) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001d090) main_fs_bigclock_unlock_btn_pane_g

0x914f,	// (0x000162ee) aid_dia3_key_size_ParamLimits

0x914f,	// (0x000162ee) aid_dia3_key_size

0x915e,	// (0x000162fd) aid_dia3_listrow_size_ParamLimits

0x915e,	// (0x000162fd) aid_dia3_listrow_size

0x9173,	// (0x00016312) dia3_keypad_fun_pane_ParamLimits

0x9173,	// (0x00016312) dia3_keypad_fun_pane

0x918f,	// (0x0001632e) dia3_keypad_num_pane_ParamLimits

0x918f,	// (0x0001632e) dia3_keypad_num_pane

0x91aa,	// (0x00016349) dia3_listscroll_pane_ParamLimits

0x91aa,	// (0x00016349) dia3_listscroll_pane

0x91bd,	// (0x0001635c) dia3_numentry_pane_ParamLimits

0x91bd,	// (0x0001635c) dia3_numentry_pane

0xf098,	// (0x0001c237) dia3_list_pane

0xf0a3,	// (0x0001c242) scroll_pane_cp12

0x94f7,	// (0x00016696) bg_dia3_numentry_pane

0x91d1,	// (0x00016370) dia3_numentry_pane_t1

0x91e0,	// (0x0001637f) cell_dia3_key_num_pane

0x91e8,	// (0x00016387) cell_dia3_key0_fun_pane_ParamLimits

0x91e8,	// (0x00016387) cell_dia3_key0_fun_pane

0x91fc,	// (0x0001639b) cell_dia3_key1_fun_pane_ParamLimits

0x91fc,	// (0x0001639b) cell_dia3_key1_fun_pane

0x9214,	// (0x000163b3) dia3_listrow_pane

0xdf91,	// (0x0001b130) bg_dia3_numentry_pane_g1

0x94f7,	// (0x00016696) bg_button_pane_cp21

0xf0ae,	// (0x0001c24d) cell_dia3_key_num_pane_t1

0xf0bc,	// (0x0001c25b) cell_dia3_key_num_pane_t2

0xf0cb,	// (0x0001c26a) cell_dia3_key_num_pane_t3

0xf0da,	// (0x0001c279) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001d0ac) cell_dia3_key_num_pane_t

0x94f7,	// (0x00016696) bg_button_pane_cp19

0x9226,	// (0x000163c5) cell_dia3_key0_fun_pane_g1

0x94f7,	// (0x00016696) bg_button_pane_cp20

0x922e,	// (0x000163cd) cell_dia3_key1_fun_pane_g1

0x9236,	// (0x000163d5) area_left_week_number_pane

0x923f,	// (0x000163de) area_top_day_name_pane

0x9248,	// (0x000163e7) frame_month_view_pane

0x9254,	// (0x000163f3) grid_month_view_pane

0x925e,	// (0x000163fd) cell_top_day_name_pane_ParamLimits

0x925e,	// (0x000163fd) cell_top_day_name_pane

0xd20a,	// (0x0001a3a9) cell_area_left_week_number_pane_ParamLimits

0xd20a,	// (0x0001a3a9) cell_area_left_week_number_pane

0x9276,	// (0x00016415) cell_month_view_pane_ParamLimits

0x9276,	// (0x00016415) cell_month_view_pane

0xf0e9,	// (0x0001c288) frm_month_g1

0x9291,	// (0x00016430) frm_month_g2

0x929b,	// (0x0001643a) frm_month_g3

0x92a5,	// (0x00016444) frm_month_g4

0x92af,	// (0x0001644e) frm_month_g5

0x92b9,	// (0x00016458) frm_month_g6

0x92c3,	// (0x00016462) frm_month_g7

0xf0f2,	// (0x0001c291) frm_month_g8

0x92cf,	// (0x0001646e) frm_month_g9

0x92d8,	// (0x00016477) frm_month_g10

0x92e1,	// (0x00016480) frm_month_g11

0x92ea,	// (0x00016489) frm_month_g12

0x92f3,	// (0x00016492) frm_month_g13

0x92fc,	// (0x0001649b) frm_month_g14

0x9305,	// (0x000164a4) frm_month_g15

0x930e,	// (0x000164ad) frm_month_g16

0x000f,

0xff16,	// (0x0001d0b5) frm_month_g

0x9319,	// (0x000164b8) cell_top_day_name_pane_t1

0x9328,	// (0x000164c7) cell_area_left_week_number_pane_g1

0x9319,	// (0x000164b8) cell_area_left_week_number_pane_t1

0xc43a,	// (0x000195d9) cell_month_view_pane_g1

0x9330,	// (0x000164cf) cell_month_view_pane_t1

0x94f7,	// (0x00016696) main_fps_pane

0xe538,	// (0x0001b6d7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe538,	// (0x0001b6d7) cmail_ddmenu_btn02_pane_cp1

0xe554,	// (0x0001b6f3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe554,	// (0x0001b6f3) cmail_ddmenu_btn02_pane_cp2

0x8baf,	// (0x00015d4e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8baf,	// (0x00015d4e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x0001cfdd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x0001cfdd) cmail_ddmenu_btn02_pane_g

0x8bcd,	// (0x00015d6c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8bcd,	// (0x00015d6c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x0001cfe2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x0001cfe2) cmail_ddmenu_btn02_pane_t

0x933f,	// (0x000164de) fps_text_pane_ParamLimits

0x933f,	// (0x000164de) fps_text_pane

0x9356,	// (0x000164f5) main_fps_pane_g1_ParamLimits

0x9356,	// (0x000164f5) main_fps_pane_g1

0x9370,	// (0x0001650f) wait_bar_pane_cp010_ParamLimits

0x9370,	// (0x0001650f) wait_bar_pane_cp010

0x9381,	// (0x00016520) fps_text_pane_t1_ParamLimits

0x9381,	// (0x00016520) fps_text_pane_t1

0x622f,	// (0x000133ce) cam4_image_uncrop_pane_g1

0x6238,	// (0x000133d7) cam4_image_uncrop_pane_g2

0x6241,	// (0x000133e0) cam4_image_uncrop_pane_g3

0x624a,	// (0x000133e9) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0001cabb) cam4_image_uncrop_pane_g

0x9214,	// (0x000163b3) dia3_listrow_pane_ParamLimits

0x94f7,	// (0x00016696) main_phob2_pane

0x8716,	// (0x000158b5) cell_tport_appsw_pane_cp02_ParamLimits

0x8716,	// (0x000158b5) cell_tport_appsw_pane_cp02

0x872a,	// (0x000158c9) cell_tport_appsw_pane_cp03_ParamLimits

0x872a,	// (0x000158c9) cell_tport_appsw_pane_cp03

0x94f7,	// (0x00016696) phob2_contact_card_pane

0x94f7,	// (0x00016696) phob2_listscroll_pane

0x007e,	// (0x0000d21d) phob2_list_pane

0x0086,	// (0x0000d225) scroll_pane_cp034

0x9399,	// (0x00016538) phob2_cc_data_pane_ParamLimits

0x9399,	// (0x00016538) phob2_cc_data_pane

0x93b8,	// (0x00016557) phob2_cc_listscroll_pane_ParamLimits

0x93b8,	// (0x00016557) phob2_cc_listscroll_pane

0x93d6,	// (0x00016575) list_double_large_graphic_phob2_pane_ParamLimits

0x93d6,	// (0x00016575) list_double_large_graphic_phob2_pane

0x00e0,	// (0x0000d27f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x00e0,	// (0x0000d27f) list_double_large_graphic_phob2_pane_g1

0x00ed,	// (0x0000d28c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x00ed,	// (0x0000d28c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001d0d6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001d0d6) list_double_large_graphic_phob2_pane_g

0x00f9,	// (0x0000d298) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x00f9,	// (0x0000d298) list_double_large_graphic_phob2_pane_t1

0x010e,	// (0x0000d2ad) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x010e,	// (0x0000d2ad) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001d0db) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001d0db) list_double_large_graphic_phob2_pane_t

0x94f7,	// (0x00016696) list_highlight_pane_cp024

0x0120,	// (0x0000d2bf) phob2_cc_button_pane

0x93e8,	// (0x00016587) phob2_cc_data_pane_g1_ParamLimits

0x93e8,	// (0x00016587) phob2_cc_data_pane_g1

0x93fd,	// (0x0001659c) phob2_cc_data_pane_g2_ParamLimits

0x93fd,	// (0x0001659c) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001d0e0) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001d0e0) phob2_cc_data_pane_g

0x940f,	// (0x000165ae) phob2_cc_data_pane_t1_ParamLimits

0x940f,	// (0x000165ae) phob2_cc_data_pane_t1

0x9427,	// (0x000165c6) phob2_cc_data_pane_t2_ParamLimits

0x9427,	// (0x000165c6) phob2_cc_data_pane_t2

0x943f,	// (0x000165de) phob2_cc_data_pane_t3_ParamLimits

0x943f,	// (0x000165de) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001d0e5) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001d0e5) phob2_cc_data_pane_t

0x0176,	// (0x0000d315) phob2_cc_list_pane_ParamLimits

0x0176,	// (0x0000d315) phob2_cc_list_pane

0x0182,	// (0x0000d321) scroll_pane_cp035_ParamLimits

0x0182,	// (0x0000d321) scroll_pane_cp035

0x9567,	// (0x00016706) bg_button_pane_cp033

0x018e,	// (0x0000d32d) phob2_cc_button_pane_g1

0x019a,	// (0x0000d339) phob2_cc_button_pane_t1

0x01af,	// (0x0000d34e) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001d0ec) phob2_cc_button_pane_t

0x9457,	// (0x000165f6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9457,	// (0x000165f6) list_double_large_graphic_phob2_cc_pane

0x9469,	// (0x00016608) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9469,	// (0x00016608) list_double_large_graphic_phob2_cc_pane_g1

0x9475,	// (0x00016614) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9475,	// (0x00016614) list_double_large_graphic_phob2_cc_pane_g2

0x9481,	// (0x00016620) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9481,	// (0x00016620) list_double_large_graphic_phob2_cc_pane_g3

0x948d,	// (0x0001662c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x948d,	// (0x0001662c) list_double_large_graphic_phob2_cc_pane_g4

0x9499,	// (0x00016638) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9499,	// (0x00016638) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001d0f1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001d0f1) list_double_large_graphic_phob2_cc_pane_g

0x94a5,	// (0x00016644) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x94a5,	// (0x00016644) list_double_large_graphic_phob2_cc_pane_t1

0x94ce,	// (0x0001666d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94ce,	// (0x0001666d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001d0fc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001d0fc) list_double_large_graphic_phob2_cc_pane_t

0x027b,	// (0x0000d41a) list_highlight_pane_cp025_ParamLimits

0x027b,	// (0x0000d41a) list_highlight_pane_cp025

0x9567,	// (0x00016706) bg_button_pane_cp033_ParamLimits

0x018e,	// (0x0000d32d) phob2_cc_button_pane_g1_ParamLimits

0x019a,	// (0x0000d339) phob2_cc_button_pane_t1_ParamLimits

0x01af,	// (0x0000d34e) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001d0ec) phob2_cc_button_pane_t_ParamLimits

0x1366,	// (0x0000e505) popup_wgtman_window

0xd2ec,	// (0x0001a48b) scroll_pane_cp038

0x8fa5,	// (0x00016144) wgtman_btn_pane_cp_01_ParamLimits

0x8fa5,	// (0x00016144) wgtman_btn_pane_cp_01

0x0289,	// (0x0000d428) wgtman_content_pane

0x0292,	// (0x0000d431) wgtman_heading_pane

0x94f7,	// (0x00016696) bg_heading_pane_cp02

0x029b,	// (0x0000d43a) wgtman_heading_pane_g1

0x02a3,	// (0x0000d442) wgtman_heading_pane_t1

0x02b1,	// (0x0000d450) scroll_pane_cp036

0x02b9,	// (0x0000d458) wgtman_list_pane

0x02c1,	// (0x0000d460) wgtman_list_pane_t1_ParamLimits

0x02c1,	// (0x0000d460) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal

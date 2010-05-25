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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005495b };

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
0x3038,	// (0x00057993) Screen

0x3044,	// (0x0005799f) application_window

0x30a0,	// (0x000579fb) area_bottom_pane_ParamLimits

0x30a0,	// (0x000579fb) area_bottom_pane

0x30f9,	// (0x00057a54) area_top_pane_ParamLimits

0x30f9,	// (0x00057a54) area_top_pane

0x315d,	// (0x00057ab8) call_video_uplink_pane_ParamLimits

0x315d,	// (0x00057ab8) call_video_uplink_pane

0x319c,	// (0x00057af7) main_pane_ParamLimits

0x319c,	// (0x00057af7) main_pane

0xdf6a,	// (0x000628c5) context_pane

0x667e,	// (0x0005afd9) navi_pane

0x66a4,	// (0x0005afff) popup_cale_events_window_ParamLimits

0x66a4,	// (0x0005afff) popup_cale_events_window

0xdf7d,	// (0x000628d8) popup_mup_playback_window

0x66bc,	// (0x0005b017) signal_pane

0xbedb,	// (0x00060836) main_browser_pane

0xc0a0,	// (0x000609fb) main_burst_pane

0x64fc,	// (0x0005ae57) main_calc_pane

0xdf50,	// (0x000628ab) main_cale_day_pane

0x38ff,	// (0x0005825a) main_cale_month_pane

0xdf50,	// (0x000628ab) main_cale_week_pane

0xc0a0,	// (0x000609fb) main_call_pane

0x1f27,	// (0x00056882) main_call_poc_pane

0xc0a0,	// (0x000609fb) main_camera_pane

0xc0a0,	// (0x000609fb) main_chi_dic_pane

0xc885,	// (0x000611e0) main_clock_pane

0x1f27,	// (0x00056882) main_fmradio_pane

0xc0a0,	// (0x000609fb) main_graph_messa_pane

0x1f27,	// (0x00056882) main_help_pane

0xbedb,	// (0x00060836) main_im_pane

0xbe16,	// (0x00060771) main_image_pane_ParamLimits

0xbe16,	// (0x00060771) main_image_pane

0x1f27,	// (0x00056882) main_location2_pane

0xc0a0,	// (0x000609fb) main_location_pane

0xbe16,	// (0x00060771) main_messa_pane

0x1f27,	// (0x00056882) main_mp2_pane

0xc0a0,	// (0x000609fb) main_mp_pane

0x1f27,	// (0x00056882) main_msg_pane

0x1f27,	// (0x00056882) main_mup_eq_pane

0x1f27,	// (0x00056882) main_mup_pane

0xbedb,	// (0x00060836) main_notes_pane

0x1f27,	// (0x00056882) main_pec_pane

0x1f27,	// (0x00056882) main_phob_pane

0x1f27,	// (0x00056882) main_pinb_pane

0x1f27,	// (0x00056882) main_postcard_pane

0x1f27,	// (0x00056882) main_qdial_pane

0xc0a0,	// (0x000609fb) main_skin_pane

0x1f27,	// (0x00056882) main_smil2_pane

0xc0a0,	// (0x000609fb) main_smil_pane

0xc0a0,	// (0x000609fb) main_video_pane

0xc0a0,	// (0x000609fb) main_video_tele_pane

0xbe16,	// (0x00060771) main_viewer_pane_ParamLimits

0xbe16,	// (0x00060771) main_viewer_pane

0xc0a0,	// (0x000609fb) main_vorec_pane

0x6548,	// (0x0005aea3) popup_blid_sat_info_window_ParamLimits

0x6548,	// (0x0005aea3) popup_blid_sat_info_window

0x6568,	// (0x0005aec3) popup_dyc_status_message_window_ParamLimits

0x6568,	// (0x0005aec3) popup_dyc_status_message_window

0x6578,	// (0x0005aed3) popup_grid_large_graphic_window_ParamLimits

0x6578,	// (0x0005aed3) popup_grid_large_graphic_window

0x6609,	// (0x0005af64) popup_loc_request_window_ParamLimits

0x6609,	// (0x0005af64) popup_loc_request_window

0x6656,	// (0x0005afb1) popup_wml_address_window_ParamLimits

0x6656,	// (0x0005afb1) popup_wml_address_window

0x63d4,	// (0x0005ad2f) call_muted_g1

0x6096,	// (0x0005a9f1) popup_call_audio_conf_window_ParamLimits

0x6096,	// (0x0005a9f1) popup_call_audio_conf_window

0x63e4,	// (0x0005ad3f) popup_call_audio_first_window_ParamLimits

0x63e4,	// (0x0005ad3f) popup_call_audio_first_window

0x6424,	// (0x0005ad7f) popup_call_audio_in_window_ParamLimits

0x6424,	// (0x0005ad7f) popup_call_audio_in_window

0x6448,	// (0x0005ada3) popup_call_audio_out_window_ParamLimits

0x6448,	// (0x0005ada3) popup_call_audio_out_window

0x646a,	// (0x0005adc5) popup_call_audio_second_window_ParamLimits

0x646a,	// (0x0005adc5) popup_call_audio_second_window

0x649a,	// (0x0005adf5) popup_call_audio_wait_window_ParamLimits

0x649a,	// (0x0005adf5) popup_call_audio_wait_window

0x64bb,	// (0x0005ae16) popup_number_entry_window_ParamLimits

0x64bb,	// (0x0005ae16) popup_number_entry_window

0x1156,	// (0x00055ab1) bg_popup_call_pane_cp05_ParamLimits

0x1156,	// (0x00055ab1) bg_popup_call_pane_cp05

0x1176,	// (0x00055ad1) popup_number_entry_window_t1

0x1189,	// (0x00055ae4) popup_number_entry_window_t2

0x119b,	// (0x00055af6) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00063a25) popup_number_entry_window_t

0x11ad,	// (0x00055b08) text_title_cp2

0x11c0,	// (0x00055b1b) bg_popup_call_pane_cp_ParamLimits

0x11c0,	// (0x00055b1b) bg_popup_call_pane_cp

0x11ce,	// (0x00055b29) call_thumbnail_pane

0x11d6,	// (0x00055b31) popup_call_audio_in_window_g1_ParamLimits

0x11d6,	// (0x00055b31) popup_call_audio_in_window_g1

0x11e2,	// (0x00055b3d) popup_call_audio_in_window_g2_ParamLimits

0x11e2,	// (0x00055b3d) popup_call_audio_in_window_g2

0x11ee,	// (0x00055b49) popup_call_audio_in_window_g3_ParamLimits

0x11ee,	// (0x00055b49) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00063a2e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00063a2e) popup_call_audio_in_window_g

0x11fa,	// (0x00055b55) popup_call_audio_in_window_t1_ParamLimits

0x11fa,	// (0x00055b55) popup_call_audio_in_window_t1

0x1216,	// (0x00055b71) popup_call_audio_in_window_t2_ParamLimits

0x1216,	// (0x00055b71) popup_call_audio_in_window_t2

0x1232,	// (0x00055b8d) popup_call_audio_in_window_t3_ParamLimits

0x1232,	// (0x00055b8d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00063a35) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00063a35) popup_call_audio_in_window_t

0x11c0,	// (0x00055b1b) bg_popup_call_pane_cp01_ParamLimits

0x11c0,	// (0x00055b1b) bg_popup_call_pane_cp01

0x11ce,	// (0x00055b29) call_thumbnail_pane_cp02

0x1245,	// (0x00055ba0) call_type_pane_cp022

0x124d,	// (0x00055ba8) popup_call_audio_out_window_g1_ParamLimits

0x124d,	// (0x00055ba8) popup_call_audio_out_window_g1

0x125f,	// (0x00055bba) popup_call_audio_out_window_g2_ParamLimits

0x125f,	// (0x00055bba) popup_call_audio_out_window_g2

0x126b,	// (0x00055bc6) popup_call_audio_out_window_g3_ParamLimits

0x126b,	// (0x00055bc6) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00063a3c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00063a3c) popup_call_audio_out_window_g

0x127d,	// (0x00055bd8) popup_call_audio_out_window_t1_ParamLimits

0x127d,	// (0x00055bd8) popup_call_audio_out_window_t1

0x1295,	// (0x00055bf0) popup_call_audio_out_window_t2_ParamLimits

0x1295,	// (0x00055bf0) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00063a43) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00063a43) popup_call_audio_out_window_t

0x12aa,	// (0x00055c05) bg_popup_call_pane_ParamLimits

0x12aa,	// (0x00055c05) bg_popup_call_pane

0x33b5,	// (0x00057d10) call_thumbnail_pane_cp_ParamLimits

0x33b5,	// (0x00057d10) call_thumbnail_pane_cp

0x132e,	// (0x00055c89) call_type_pane_cp01_ParamLimits

0x132e,	// (0x00055c89) call_type_pane_cp01

0x1372,	// (0x00055ccd) popup_call_audio_first_window_g1_ParamLimits

0x1372,	// (0x00055ccd) popup_call_audio_first_window_g1

0x13be,	// (0x00055d19) popup_call_audio_first_window_g2_ParamLimits

0x13be,	// (0x00055d19) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00063a48) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00063a48) popup_call_audio_first_window_g

0x1dc0,	// (0x0005671b) popup_call_audio_first_window_t1_ParamLimits

0x1dc0,	// (0x0005671b) popup_call_audio_first_window_t1

0x1e6c,	// (0x000567c7) popup_call_audio_first_window_t4_ParamLimits

0x1e6c,	// (0x000567c7) popup_call_audio_first_window_t4

0x1ef8,	// (0x00056853) popup_call_audio_first_window_t5_ParamLimits

0x1ef8,	// (0x00056853) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00063a4d) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00063a4d) popup_call_audio_first_window_t

0x1f27,	// (0x00056882) bg_popup_call_pane_cp02

0x1f31,	// (0x0005688c) call_type_pane_cp023

0x1f39,	// (0x00056894) popup_call_audio_wait_window_g1

0x1f41,	// (0x0005689c) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00063a54) popup_call_audio_wait_window_g

0x1f49,	// (0x000568a4) popup_call_audio_wait_window_t3

0x1f57,	// (0x000568b2) bg_popup_call_pane_cp03_ParamLimits

0x1f57,	// (0x000568b2) bg_popup_call_pane_cp03

0x1fb7,	// (0x00056912) call_thumbnail_pane_cp011_ParamLimits

0x1fb7,	// (0x00056912) call_thumbnail_pane_cp011

0x1fc3,	// (0x0005691e) call_type_pane_cp034_ParamLimits

0x1fc3,	// (0x0005691e) call_type_pane_cp034

0x1fff,	// (0x0005695a) popup_call_audio_second_window_g1_ParamLimits

0x1fff,	// (0x0005695a) popup_call_audio_second_window_g1

0xbccf,	// (0x0006062a) popup_call_audio_second_window_g2_ParamLimits

0xbccf,	// (0x0006062a) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00063a59) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00063a59) popup_call_audio_second_window_g

0xbd0b,	// (0x00060666) popup_call_audio_second_window_t1_ParamLimits

0xbd0b,	// (0x00060666) popup_call_audio_second_window_t1

0xbd8c,	// (0x000606e7) popup_call_audio_second_window_t2_ParamLimits

0xbd8c,	// (0x000606e7) popup_call_audio_second_window_t2

0xbdc2,	// (0x0006071d) popup_call_audio_second_window_t3_ParamLimits

0xbdc2,	// (0x0006071d) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00063a5e) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00063a5e) popup_call_audio_second_window_t

0x1f27,	// (0x00056882) bg_popup_call_pane_cp04

0xbdf8,	// (0x00060753) list_conf_pane

0xbe00,	// (0x0006075b) popup_call_audio_conf_window_t1

0xbe0e,	// (0x00060769) call_thumbnail_pane_g1

0xbe16,	// (0x00060771) bg_pinb_pane_ParamLimits

0xbe16,	// (0x00060771) bg_pinb_pane

0xbe24,	// (0x0006077f) find_pinb_pane

0xbe2d,	// (0x00060788) listscroll_pinb_pane_ParamLimits

0xbe2d,	// (0x00060788) listscroll_pinb_pane

0xbe3c,	// (0x00060797) pinb_bg_pane_g1

0x33d9,	// (0x00057d34) pinb_bg_pane_g2

0x33e5,	// (0x00057d40) pinb_bg_pane_g3

0x33f1,	// (0x00057d4c) pinb_bg_pane_g4

0x33fd,	// (0x00057d58) pinb_bg_pane_g5

0x3409,	// (0x00057d64) pinb_bg_pane_g6

0x3414,	// (0x00057d6f) pinb_bg_pane_g7

0x341f,	// (0x00057d7a) pinb_bg_pane_g8

0x342a,	// (0x00057d85) pinb_bg_pane_g9

0x3434,	// (0x00057d8f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00063a65) pinb_bg_pane_g

0x3451,	// (0x00057dac) grid_pinb_pane

0x345c,	// (0x00057db7) list_pinb_pane

0x3467,	// (0x00057dc2) scroll_pane_cp01_ParamLimits

0x3467,	// (0x00057dc2) scroll_pane_cp01

0xbe46,	// (0x000607a1) find_pinb_pane_g1_ParamLimits

0xbe46,	// (0x000607a1) find_pinb_pane_g1

0xbe5e,	// (0x000607b9) find_pinb_pane_t1

0xbe70,	// (0x000607cb) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00063a7f) find_pinb_pane_t

0xbe85,	// (0x000607e0) input_focus_pane_cp01_ParamLimits

0xbe85,	// (0x000607e0) input_focus_pane_cp01

0x3479,	// (0x00057dd4) cell_pinb_pane_ParamLimits

0x3479,	// (0x00057dd4) cell_pinb_pane

0x34a1,	// (0x00057dfc) cell_pinb_pane_g1_ParamLimits

0x34a1,	// (0x00057dfc) cell_pinb_pane_g1

0x34b6,	// (0x00057e11) cell_pinb_pane_g2_ParamLimits

0x34b6,	// (0x00057e11) cell_pinb_pane_g2

0xbe91,	// (0x000607ec) cell_pinb_pane_g3_ParamLimits

0xbe91,	// (0x000607ec) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00063a84) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00063a84) cell_pinb_pane_g

0x1f27,	// (0x00056882) grid_highlight_pane_cp01

0x34c2,	// (0x00057e1d) list_pinb_item_pane_ParamLimits

0x34c2,	// (0x00057e1d) list_pinb_item_pane

0x1f27,	// (0x00056882) list_highlight_pane_cp02

0x34e8,	// (0x00057e43) list_pinb_item_pane_g1_ParamLimits

0x34e8,	// (0x00057e43) list_pinb_item_pane_g1

0x34f5,	// (0x00057e50) list_pinb_item_pane_g2_ParamLimits

0x34f5,	// (0x00057e50) list_pinb_item_pane_g2

0x3501,	// (0x00057e5c) list_pinb_item_pane_g3_ParamLimits

0x3501,	// (0x00057e5c) list_pinb_item_pane_g3

0x3512,	// (0x00057e6d) list_pinb_item_pane_g4_ParamLimits

0x3512,	// (0x00057e6d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00063a8b) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00063a8b) list_pinb_item_pane_g

0x351e,	// (0x00057e79) list_pinb_item_pane_t1_ParamLimits

0x351e,	// (0x00057e79) list_pinb_item_pane_t1

0x354f,	// (0x00057eaa) calc_display_pane

0x356d,	// (0x00057ec8) calc_paper_pane

0x3589,	// (0x00057ee4) grid_calc_pane

0x1f27,	// (0x00056882) bg_list_pane_cp01

0x35b5,	// (0x00057f10) clock_g1

0x35bd,	// (0x00057f18) clock_g2

0x0001,

0xf139,	// (0x00063a94) clock_g

0x35c7,	// (0x00057f22) clock_t1_ParamLimits

0x35c7,	// (0x00057f22) clock_t1

0x35dc,	// (0x00057f37) clock_t2_ParamLimits

0x35dc,	// (0x00057f37) clock_t2

0x35ee,	// (0x00057f49) clock_t3_ParamLimits

0x35ee,	// (0x00057f49) clock_t3

0x3600,	// (0x00057f5b) clock_t4_ParamLimits

0x3600,	// (0x00057f5b) clock_t4

0x3612,	// (0x00057f6d) clock_t5_ParamLimits

0x3612,	// (0x00057f6d) clock_t5

0x3627,	// (0x00057f82) clock_t6_ParamLimits

0x3627,	// (0x00057f82) clock_t6

0x3639,	// (0x00057f94) clock_t7_ParamLimits

0x3639,	// (0x00057f94) clock_t7

0x364b,	// (0x00057fa6) clock_t8_ParamLimits

0x364b,	// (0x00057fa6) clock_t8

0x3661,	// (0x00057fbc) clock_t9_ParamLimits

0x3661,	// (0x00057fbc) clock_t9

0x0008,

0xf13e,	// (0x00063a99) clock_t_ParamLimits

0xf13e,	// (0x00063a99) clock_t

0xbe9d,	// (0x000607f8) popup_clock_analogue_window_cp02

0xbe9d,	// (0x000607f8) popup_clock_digital_window_cp01

0xbea5,	// (0x00060800) listscroll_help_pane

0x1f27,	// (0x00056882) phob_pre_status_pane

0xbeaf,	// (0x0006080a) grid_qdial_pane

0xbe16,	// (0x00060771) listscroll_mce_pane

0xbe16,	// (0x00060771) bg_notes_pane

0xbeb9,	// (0x00060814) list_notes_pane

0x3677,	// (0x00057fd2) scroll_pane_cp06

0xbec7,	// (0x00060822) bg_calc_paper_pane

0x3686,	// (0x00057fe1) list_calc_pane

0xbedb,	// (0x00060836) bg_calc_display_pane

0x36a0,	// (0x00057ffb) calc_display_pane_t1

0x36b5,	// (0x00058010) calc_display_pane_t2

0x36ca,	// (0x00058025) calc_display_pane_t3

0x0002,

0xf151,	// (0x00063aac) calc_display_pane_t

0x36dc,	// (0x00058037) cell_calc_pane_ParamLimits

0x36dc,	// (0x00058037) cell_calc_pane

0xbee7,	// (0x00060842) bg_calc_paper_pane_g1

0xbef3,	// (0x0006084e) bg_calc_paper_pane_g2

0xbeff,	// (0x0006085a) bg_calc_paper_pane_g3

0xbf0b,	// (0x00060866) bg_calc_paper_pane_g4

0xbf17,	// (0x00060872) bg_calc_paper_pane_g5

0x3709,	// (0x00058064) bg_calc_paper_pane_g6

0x371a,	// (0x00058075) bg_calc_paper_pane_g7

0x372b,	// (0x00058086) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00063ab3) bg_calc_paper_pane_g

0x373c,	// (0x00058097) calc_bg_paper_pane_g9

0x374d,	// (0x000580a8) list_calc_item_pane_ParamLimits

0x374d,	// (0x000580a8) list_calc_item_pane

0xbf23,	// (0x0006087e) list_calc_item_pane_g1

0x377c,	// (0x000580d7) list_calc_item_pane_t1_ParamLimits

0x377c,	// (0x000580d7) list_calc_item_pane_t1

0x378e,	// (0x000580e9) list_calc_item_pane_t2_ParamLimits

0x378e,	// (0x000580e9) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00063ac4) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00063ac4) list_calc_item_pane_t

0xbf30,	// (0x0006088b) cell_calc_pane_g1

0xbf3a,	// (0x00060895) grid_highlight_pane_cp02

0x37be,	// (0x00058119) bg_calc_display_pane_g1

0x37c7,	// (0x00058122) bg_calc_display_pane_g2

0xe2bc,	// (0x00062c17) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00063ace) bg_calc_display_pane_g

0x37d1,	// (0x0005812c) cell_qdial_pane_ParamLimits

0x37d1,	// (0x0005812c) cell_qdial_pane

0x37e5,	// (0x00058140) cell_qdial_pane_g1_ParamLimits

0x37e5,	// (0x00058140) cell_qdial_pane_g1

0x37f2,	// (0x0005814d) cell_qdial_pane_g2_ParamLimits

0x37f2,	// (0x0005814d) cell_qdial_pane_g2

0xbf5c,	// (0x000608b7) cell_qdial_pane_g3_ParamLimits

0xbf5c,	// (0x000608b7) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00063ad5) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00063ad5) cell_qdial_pane_g

0x3810,	// (0x0005816b) cell_qdial_pane_t1_ParamLimits

0x3810,	// (0x0005816b) cell_qdial_pane_t1

0x3828,	// (0x00058183) cell_qdial_pane_t2_ParamLimits

0x3828,	// (0x00058183) cell_qdial_pane_t2

0x383b,	// (0x00058196) cell_qdial_pane_t3_ParamLimits

0x383b,	// (0x00058196) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00063ade) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00063ade) cell_qdial_pane_t

0x1f27,	// (0x00056882) grid_highlight_pane_cp04

0xbf68,	// (0x000608c3) thumbnail_qdial_pane_ParamLimits

0xbf68,	// (0x000608c3) thumbnail_qdial_pane

0xbfc4,	// (0x0006091f) list_help_pane

0xbfcd,	// (0x00060928) scroll_pane_cp02

0x384e,	// (0x000581a9) help_list_pane_t1_ParamLimits

0x384e,	// (0x000581a9) help_list_pane_t1

0x3881,	// (0x000581dc) bg_notes_pane_g2

0x3889,	// (0x000581e4) bg_notes_pane_g3

0x3891,	// (0x000581ec) notes_bg_pane_g1

0x3899,	// (0x000581f4) notes_bg_pane_g4

0x38a1,	// (0x000581fc) notes_bg_pane_g5

0x38a9,	// (0x00058204) notes_bg_pane_g6

0x38b1,	// (0x0005820c) notes_bg_pane_g7

0x38b9,	// (0x00058214) notes_bg_pane_g8

0x38c1,	// (0x0005821c) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00063afc) notes_bg_pane_g

0x38c9,	// (0x00058224) list_notes_text_pane_ParamLimits

0x38c9,	// (0x00058224) list_notes_text_pane

0xbfd6,	// (0x00060931) list_notes_text_pane_g1

0x38f1,	// (0x0005824c) list_notes_text_pane_t1

0x38ff,	// (0x0005825a) listscroll_cale_week_pane

0x3924,	// (0x0005827f) bg_cale_heading_pane

0xbff9,	// (0x00060954) bg_cale_pane_cp01

0x3944,	// (0x0005829f) cale_week_corner_pane

0x395e,	// (0x000582b9) cale_week_day_heading_pane

0x397e,	// (0x000582d9) cale_week_scroll_pane_g1

0x3999,	// (0x000582f4) cale_week_scroll_pane_g2

0x39ac,	// (0x00058307) cale_week_scroll_pane_g3

0x39bf,	// (0x0005831a) cale_week_scroll_pane_g4

0x39d2,	// (0x0005832d) cale_week_scroll_pane_g5

0x39e5,	// (0x00058340) cale_week_scroll_pane_g6

0x39f8,	// (0x00058353) cale_week_scroll_pane_g7

0x3a0d,	// (0x00058368) cale_week_scroll_pane_g8

0x3a22,	// (0x0005837d) cale_week_scroll_pane_g9

0x3a35,	// (0x00058390) cale_week_scroll_pane_g10

0x3a48,	// (0x000583a3) cale_week_scroll_pane_g11

0x3a5b,	// (0x000583b6) cale_week_scroll_pane_g12

0x3a72,	// (0x000583cd) cale_week_scroll_pane_g13

0x3a8d,	// (0x000583e8) cale_week_scroll_pane_g14

0x3aa8,	// (0x00058403) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00063b0b) cale_week_scroll_pane_g

0x3ad8,	// (0x00058433) cale_week_time_pane

0x3aed,	// (0x00058448) grid_cale_week_pane

0xc028,	// (0x00060983) scroll_pane_cp08

0x3b0c,	// (0x00058467) cell_cale_week_pane_ParamLimits

0x3b0c,	// (0x00058467) cell_cale_week_pane

0x3b6e,	// (0x000584c9) cale_week_day_heading_pane_t1

0x3b89,	// (0x000584e4) cale_week_day_heading_pane_t2

0x3ba4,	// (0x000584ff) cale_week_day_heading_pane_t3

0x3bbf,	// (0x0005851a) cale_week_day_heading_pane_t4

0x3bda,	// (0x00058535) cale_week_day_heading_pane_t5

0x3bf5,	// (0x00058550) cale_week_day_heading_pane_t6

0x3c10,	// (0x0005856b) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00063b2c) cale_week_day_heading_pane_t

0xc045,	// (0x000609a0) bg_cale_side_pane

0x3c2b,	// (0x00058586) cale_week_time_pane_t1

0x3c45,	// (0x000585a0) cale_week_time_pane_t2

0x3c5f,	// (0x000585ba) cale_week_time_pane_t3

0x3c79,	// (0x000585d4) cale_week_time_pane_t4

0x3c93,	// (0x000585ee) cale_week_time_pane_t5

0x3cad,	// (0x00058608) cale_week_time_pane_t6

0x3ccb,	// (0x00058626) cale_week_time_pane_t7

0x3ced,	// (0x00058648) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00063b3b) cale_week_time_pane_t

0x3d11,	// (0x0005866c) cell_cale_week_pane_g2

0x3d35,	// (0x00058690) cell_cale_week_pane_g3_ParamLimits

0x3d35,	// (0x00058690) cell_cale_week_pane_g3

0xc053,	// (0x000609ae) grid_highlight_pane_cp07

0xc05b,	// (0x000609b6) listscroll_gms_pane

0xc065,	// (0x000609c0) grid_gms_pane

0xc06e,	// (0x000609c9) listscroll_gms_pane_g1

0xc076,	// (0x000609d1) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00063b4c) listscroll_gms_pane_g

0x3d4d,	// (0x000586a8) scroll_pane_cp010

0x3d58,	// (0x000586b3) cell_gms_pane_ParamLimits

0x3d58,	// (0x000586b3) cell_gms_pane

0x3d6b,	// (0x000586c6) cell_gms_pane_g1

0xc07e,	// (0x000609d9) cell_gms_pane_g2

0xc086,	// (0x000609e1) cell_gms_pane_g3

0xc08f,	// (0x000609ea) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00063b51) cell_gms_pane_g

0xc098,	// (0x000609f3) grid_highlight_pane_cp09

0x637c,	// (0x0005acd7) phob_pre_status_pane_g1

0x6384,	// (0x0005acdf) phob_pre_status_pane_g2

0x638c,	// (0x0005ace7) phob_pre_status_pane_g3

0x6394,	// (0x0005acef) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00063f3c) phob_pre_status_pane_g

0x63a4,	// (0x0005acff) phob_pre_status_pane_t1

0x63b4,	// (0x0005ad0f) phob_pre_status_pane_t2

0x63c4,	// (0x0005ad1f) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00063f47) phob_pre_status_pane_t

0xc0a0,	// (0x000609fb) bg_list_pane_cp05

0x3d7b,	// (0x000586d6) grid_vorec_pane

0x3d85,	// (0x000586e0) vorec_t1

0x3d93,	// (0x000586ee) vorec_t2

0x3da1,	// (0x000586fc) vorec_t3

0x3daf,	// (0x0005870a) vorec_t4

0xbca9,	// (0x00060604) vorec_t5

0xbcb7,	// (0x00060612) vorec_t6

0x0004,

0xf1ff,	// (0x00063b5a) vorec_t

0xbcc5,	// (0x00060620) wait_bar_pane_cp01

0x3dcb,	// (0x00058726) cell_vorec_pane_ParamLimits

0x3dcb,	// (0x00058726) cell_vorec_pane

0x3dde,	// (0x00058739) cell_vorec_pane_g1

0x1f27,	// (0x00056882) grid_highlight_pane_cp05

0x3df8,	// (0x00058753) cams_zoom_pane

0x3e04,	// (0x0005875f) image_vga_pane

0x3e13,	// (0x0005876e) main_camera_pane_g1

0x3e21,	// (0x0005877c) main_camera_pane_g2

0x3e2d,	// (0x00058788) main_camera_pane_g3

0x3e39,	// (0x00058794) main_camera_pane_g4

0x3e45,	// (0x000587a0) main_camera_pane_g5

0x3e51,	// (0x000587ac) main_camera_pane_g6

0x3e5d,	// (0x000587b8) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00063b65) main_camera_pane_g

0x3e69,	// (0x000587c4) main_camera_pane_t1

0x3e7b,	// (0x000587d6) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00063b76) main_camera_pane_t

0x3e9c,	// (0x000587f7) cams_zoom_pane_cp_ParamLimits

0x3e9c,	// (0x000587f7) cams_zoom_pane_cp

0x3ec0,	// (0x0005881b) image_cif_pane_ParamLimits

0x3ec0,	// (0x0005881b) image_cif_pane

0x3ede,	// (0x00058839) image_subqcif_pane

0x3ee6,	// (0x00058841) main_video_pane_g1_ParamLimits

0x3ee6,	// (0x00058841) main_video_pane_g1

0x3f06,	// (0x00058861) main_video_pane_g2_ParamLimits

0x3f06,	// (0x00058861) main_video_pane_g2

0x3f36,	// (0x00058891) main_video_pane_g3_ParamLimits

0x3f36,	// (0x00058891) main_video_pane_g3

0x3f5f,	// (0x000588ba) main_video_pane_g4_ParamLimits

0x3f5f,	// (0x000588ba) main_video_pane_g4

0x3f88,	// (0x000588e3) main_video_pane_g5_ParamLimits

0x3f88,	// (0x000588e3) main_video_pane_g5

0xc0b4,	// (0x00060a0f) main_video_pane_g6_ParamLimits

0xc0b4,	// (0x00060a0f) main_video_pane_g6

0x0006,

0xf220,	// (0x00063b7b) main_video_pane_g_ParamLimits

0xf220,	// (0x00063b7b) main_video_pane_g

0x3faa,	// (0x00058905) main_video_pane_t1_ParamLimits

0x3faa,	// (0x00058905) main_video_pane_t1

0xc0ce,	// (0x00060a29) cams_zoom_pane_g1

0xc0d7,	// (0x00060a32) cams_zoom_pane_g2

0xc0e0,	// (0x00060a3b) cams_zoom_pane_g3

0xc0e9,	// (0x00060a44) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00063b8a) cams_zoom_pane_g

0x3ff4,	// (0x0005894f) grid_cams_pane

0x4002,	// (0x0005895d) linegrid_cams_pane

0x4010,	// (0x0005896b) cell_cams_pane_ParamLimits

0x4010,	// (0x0005896b) cell_cams_pane

0xc0f2,	// (0x00060a4d) cams_burst_image_pane

0xc0fa,	// (0x00060a55) cell_cams_pane_g1

0x1f27,	// (0x00056882) grid_highlight_pane_cp03

0xbf30,	// (0x0006088b) mp_bg_pane_g1

0x1f27,	// (0x00056882) bg_list_pane_cp03

0xde69,	// (0x000627c4) bg_mp_pane

0xde71,	// (0x000627cc) grid_mp_pane

0xde79,	// (0x000627d4) media_player_g1

0xde81,	// (0x000627dc) media_player_t1

0xde8f,	// (0x000627ea) media_player_t2

0xde9d,	// (0x000627f8) media_player_t3

0xdeab,	// (0x00062806) media_player_t4

0xdeb9,	// (0x00062814) media_player_t5

0xdec7,	// (0x00062822) media_player_t6

0xded5,	// (0x00062830) media_player_t7

0x0006,

0xf5cb,	// (0x00063f26) media_player_t

0xdeef,	// (0x0006284a) wait_bar_pane_cp02

0xf5b0,	// (0x00063f0b) main_usb_pane_t

0x6373,	// (0x0005acce) cell_mp_pane

0xbf30,	// (0x0006088b) cell_mp_pane_g1

0x1f27,	// (0x00056882) grid_highlight_pane_cp06

0xc102,	// (0x00060a5d) grid_skin_colour_pane

0xc10a,	// (0x00060a65) list_highlight_pane_cp03

0x4137,	// (0x00058a92) skin_g1

0xc112,	// (0x00060a6d) skin_t1

0xc121,	// (0x00060a7c) skin_t2

0x0001,

0xf264,	// (0x00063bbf) skin_t

0x4141,	// (0x00058a9c) cell_skin_colour_pane_ParamLimits

0x4141,	// (0x00058a9c) cell_skin_colour_pane

0xc12f,	// (0x00060a8a) cell_skin_colour_pane_g1

0x41c5,	// (0x00058b20) call_video_g1_ParamLimits

0x41c5,	// (0x00058b20) call_video_g1

0x41d5,	// (0x00058b30) call_video_g2_ParamLimits

0x41d5,	// (0x00058b30) call_video_g2

0x0001,

0xf269,	// (0x00063bc4) call_video_g_ParamLimits

0xf269,	// (0x00063bc4) call_video_g

0x422f,	// (0x00058b8a) call_video_uplink_pane_cp1_ParamLimits

0x422f,	// (0x00058b8a) call_video_uplink_pane_cp1

0xc141,	// (0x00060a9c) call_video_uplink_pane_cp2

0x42fb,	// (0x00058c56) video_down_crop_pane_ParamLimits

0x42fb,	// (0x00058c56) video_down_crop_pane

0x43f9,	// (0x00058d54) video_down_pane_ParamLimits

0x43f9,	// (0x00058d54) video_down_pane

0xc149,	// (0x00060aa4) video_down_subqcif_pane_ParamLimits

0xc149,	// (0x00060aa4) video_down_subqcif_pane

0xc161,	// (0x00060abc) video_down_subqcif_pane_cp_ParamLimits

0xc161,	// (0x00060abc) video_down_subqcif_pane_cp

0xc187,	// (0x00060ae2) im_reading_pane_ParamLimits

0xc187,	// (0x00060ae2) im_reading_pane

0x4519,	// (0x00058e74) im_writing_pane_ParamLimits

0x4519,	// (0x00058e74) im_writing_pane

0x4537,	// (0x00058e92) im_reading_pane_t1

0xc1a1,	// (0x00060afc) list_im_pane

0xc1b2,	// (0x00060b0d) scroll_pane_cp07

0x458b,	// (0x00058ee6) im_writing_pane_t1_ParamLimits

0x458b,	// (0x00058ee6) im_writing_pane_t1

0xc1cb,	// (0x00060b26) im_writing_pane_t2_ParamLimits

0xc1cb,	// (0x00060b26) im_writing_pane_t2

0x0001,

0xf273,	// (0x00063bce) im_writing_pane_t_ParamLimits

0xf273,	// (0x00063bce) im_writing_pane_t

0x1f27,	// (0x00056882) input_focus_pane_cp04

0x1f27,	// (0x00056882) input_focus_pane_cp05

0x45a0,	// (0x00058efb) list_im_single_pane_ParamLimits

0x45a0,	// (0x00058efb) list_im_single_pane

0x45c4,	// (0x00058f1f) list_single_im_pane_t1

0x6337,	// (0x0005ac92) blid_accuracy_pane

0x633f,	// (0x0005ac9a) blid_compass_pane

0x6349,	// (0x0005aca4) main_location_t1

0x6357,	// (0x0005acb2) main_location_t2

0x6365,	// (0x0005acc0) main_location_t3

0x0002,

0xf5da,	// (0x00063f35) main_location_t

0x1f27,	// (0x00056882) aid_levels_location

0xbf30,	// (0x0006088b) blid_accuracy_pane_g1

0xbf30,	// (0x0006088b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00063c30) blid_accuracy_pane_g

0xc213,	// (0x00060b6e) wml_content_pane

0xc251,	// (0x00060bac) wml_button_pane_ParamLimits

0xc251,	// (0x00060bac) wml_button_pane

0x45d3,	// (0x00058f2e) wml_list_single_large_pane_ParamLimits

0x45d3,	// (0x00058f2e) wml_list_single_large_pane

0x45fd,	// (0x00058f58) wml_list_single_medium_pane_ParamLimits

0x45fd,	// (0x00058f58) wml_list_single_medium_pane

0x462e,	// (0x00058f89) wml_list_single_small_pane_ParamLimits

0x462e,	// (0x00058f89) wml_list_single_small_pane

0xc265,	// (0x00060bc0) wml_selection_box_pane_ParamLimits

0xc265,	// (0x00060bc0) wml_selection_box_pane

0xc278,	// (0x00060bd3) wml_list_single_pane_t1

0xc287,	// (0x00060be2) wml_list_single_medium_pane_t1

0xc296,	// (0x00060bf1) wml_list_single_large_pane_t1

0xc2a5,	// (0x00060c00) input_focus_pane_cp02_ParamLimits

0xc2a5,	// (0x00060c00) input_focus_pane_cp02

0xc2b8,	// (0x00060c13) wml_selection_box_pane_g1

0xc2c1,	// (0x00060c1c) wml_selection_box_pane_t1_ParamLimits

0xc2c1,	// (0x00060c1c) wml_selection_box_pane_t1

0xbe16,	// (0x00060771) bg_wml_button_pane_ParamLimits

0xbe16,	// (0x00060771) bg_wml_button_pane

0xc2d9,	// (0x00060c34) wml_button_pane_g1

0xc2e1,	// (0x00060c3c) wml_button_pane_t1

0xc2d9,	// (0x00060c34) wml_button_bg_pane_g1

0xc2f1,	// (0x00060c4c) wml_button_bg_pane_g2

0xc2f9,	// (0x00060c54) wml_button_bg_pane_g3

0xc301,	// (0x00060c5c) wml_button_bg_pane_g4

0xc309,	// (0x00060c64) wml_button_bg_pane_g5

0xc311,	// (0x00060c6c) wml_button_bg_pane_g6

0xc319,	// (0x00060c74) wml_button_bg_pane_g7

0xc321,	// (0x00060c7c) wml_button_bg_pane_g8

0xc329,	// (0x00060c84) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00063bd3) wml_button_bg_pane_g

0x4668,	// (0x00058fc3) bg_list_pane_cp02

0xc331,	// (0x00060c8c) mce_header_pane_ParamLimits

0xc331,	// (0x00060c8c) mce_header_pane

0xc347,	// (0x00060ca2) mce_icon_pane

0xc347,	// (0x00060ca2) mce_image_pane

0xc350,	// (0x00060cab) mce_text_pane_ParamLimits

0xc350,	// (0x00060cab) mce_text_pane

0x4672,	// (0x00058fcd) scroll_pane_cp03

0xc249,	// (0x00060ba4) scroll_pane_cp04

0xc363,	// (0x00060cbe) scroll_pane_cp05_ParamLimits

0xc363,	// (0x00060cbe) scroll_pane_cp05

0x467c,	// (0x00058fd7) mce_header_field_pane_ParamLimits

0x467c,	// (0x00058fd7) mce_header_field_pane

0x469c,	// (0x00058ff7) mce_header_field_pane_2_ParamLimits

0x469c,	// (0x00058ff7) mce_header_field_pane_2

0x46b2,	// (0x0005900d) mce_header_field_pane_3

0x46ba,	// (0x00059015) list_single_mce_message_pane_ParamLimits

0x46ba,	// (0x00059015) list_single_mce_message_pane

0x46e5,	// (0x00059040) list_single_mce_smart_pane_ParamLimits

0x46e5,	// (0x00059040) list_single_mce_smart_pane

0xc36f,	// (0x00060cca) input_focus_pane_cp03

0xc378,	// (0x00060cd3) list_header_data_pane

0x471b,	// (0x00059076) mce_header_field_pane_t1

0x4729,	// (0x00059084) list_single_mce_header_pane_ParamLimits

0x4729,	// (0x00059084) list_single_mce_header_pane

0xc380,	// (0x00060cdb) list_single_mce_header_pane_t1

0xc38f,	// (0x00060cea) list_single_mce_message_pane_g1

0xc397,	// (0x00060cf2) list_single_mce_message_pane_t1

0x477b,	// (0x000590d6) bg_cale_heading_pane_cp01_ParamLimits

0x477b,	// (0x000590d6) bg_cale_heading_pane_cp01

0xc3a5,	// (0x00060d00) bg_cale_pane_cp02_ParamLimits

0xc3a5,	// (0x00060d00) bg_cale_pane_cp02

0x47c9,	// (0x00059124) cale_month_corner_pane

0x47e8,	// (0x00059143) cale_month_day_heading_pane_ParamLimits

0x47e8,	// (0x00059143) cale_month_day_heading_pane

0x484e,	// (0x000591a9) cale_month_pane_g1_ParamLimits

0x484e,	// (0x000591a9) cale_month_pane_g1

0x4891,	// (0x000591ec) cale_month_pane_g2_ParamLimits

0x4891,	// (0x000591ec) cale_month_pane_g2

0x48c9,	// (0x00059224) cale_month_pane_g3_ParamLimits

0x48c9,	// (0x00059224) cale_month_pane_g3

0x4915,	// (0x00059270) cale_month_pane_g4_ParamLimits

0x4915,	// (0x00059270) cale_month_pane_g4

0x4961,	// (0x000592bc) cale_month_pane_g5_ParamLimits

0x4961,	// (0x000592bc) cale_month_pane_g5

0x49ad,	// (0x00059308) cale_month_pane_g6_ParamLimits

0x49ad,	// (0x00059308) cale_month_pane_g6

0x49f9,	// (0x00059354) cale_month_pane_g7_ParamLimits

0x49f9,	// (0x00059354) cale_month_pane_g7

0x4a5d,	// (0x000593b8) cale_month_pane_g8_ParamLimits

0x4a5d,	// (0x000593b8) cale_month_pane_g8

0x4ac1,	// (0x0005941c) cale_month_pane_g9_ParamLimits

0x4ac1,	// (0x0005941c) cale_month_pane_g9

0x4b1f,	// (0x0005947a) cale_month_pane_g10_ParamLimits

0x4b1f,	// (0x0005947a) cale_month_pane_g10

0x4b7b,	// (0x000594d6) cale_month_pane_g11_ParamLimits

0x4b7b,	// (0x000594d6) cale_month_pane_g11

0x4bcf,	// (0x0005952a) cale_month_pane_g12_ParamLimits

0x4bcf,	// (0x0005952a) cale_month_pane_g12

0x4c25,	// (0x00059580) cale_month_pane_g13_ParamLimits

0x4c25,	// (0x00059580) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00063be6) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00063be6) cale_month_pane_g

0x4c7b,	// (0x000595d6) cale_month_week_pane

0x4c9f,	// (0x000595fa) grid_cale_month_pane_ParamLimits

0x4c9f,	// (0x000595fa) grid_cale_month_pane

0x4cf8,	// (0x00059653) cale_month_day_heading_pane_t1

0x4d7e,	// (0x000596d9) cale_month_day_heading_pane_t2

0x4df7,	// (0x00059752) cale_month_day_heading_pane_t3

0x4e70,	// (0x000597cb) cale_month_day_heading_pane_t4

0x4ee9,	// (0x00059844) cale_month_day_heading_pane_t5

0x4f62,	// (0x000598bd) cale_month_day_heading_pane_t6

0x4fdb,	// (0x00059936) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00063c01) cale_month_day_heading_pane_t

0xc045,	// (0x000609a0) bg_cale_side_pane_cp01

0x506c,	// (0x000599c7) cale_month_week_pane_t1

0x5085,	// (0x000599e0) cale_month_week_pane_t2

0x509e,	// (0x000599f9) cale_month_week_pane_t3

0x50b7,	// (0x00059a12) cale_month_week_pane_t4

0x50d0,	// (0x00059a2b) cale_month_week_pane_t5

0x50f1,	// (0x00059a4c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00063c10) cale_month_week_pane_t

0x5112,	// (0x00059a6d) cell_cale_month_pane_ParamLimits

0x5112,	// (0x00059a6d) cell_cale_month_pane

0x525e,	// (0x00059bb9) cell_cale_month_pane_g1

0x526a,	// (0x00059bc5) cell_cale_month_pane_t1_ParamLimits

0x526a,	// (0x00059bc5) cell_cale_month_pane_t1

0xc053,	// (0x000609ae) grid_highlight_pane_cp08

0xbf30,	// (0x0006088b) main_smil_g1

0x5296,	// (0x00059bf1) smil_status_pane

0xc3e4,	// (0x00060d3f) smil_text_pane

0xdd89,	// (0x000626e4) bg_popup_call3_rect_pane_g8

0xdd91,	// (0x000626ec) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00063ec9) bg_popup_call3_rect_pane_g

0xdfe4,	// (0x0006293f) smil_status_volume_pane_g1

0xc3ee,	// (0x00060d49) smil_status_pane_t1

0x676f,	// (0x0005b0ca) volume_smil_pane

0xc405,	// (0x00060d60) list_smil_text_pane

0x52a9,	// (0x00059c04) scroll_pane_cp011

0x52b4,	// (0x00059c0f) smil_text_list_pane_t1_ParamLimits

0x52b4,	// (0x00059c0f) smil_text_list_pane_t1

0x532c,	// (0x00059c87) aid_volume_smil_ParamLimits

0x532c,	// (0x00059c87) aid_volume_smil

0xbf30,	// (0x0006088b) smil_volume_pane_g1

0xbf30,	// (0x0006088b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00063c30) smil_volume_pane_g

0x38ff,	// (0x0005825a) listscroll_cale_day_pane

0xc40f,	// (0x00060d6a) bg_cale_pane

0xc427,	// (0x00060d82) list_cale_pane

0xc44a,	// (0x00060da5) scroll_pane_cp09

0xc45b,	// (0x00060db6) cale_bg_pane_g1

0xc463,	// (0x00060dbe) cale_bg_pane_g2

0xc46b,	// (0x00060dc6) cale_bg_pane_g3

0xc473,	// (0x00060dce) cale_bg_pane_g4

0xc47b,	// (0x00060dd6) cale_bg_pane_g5

0xc483,	// (0x00060dde) cale_bg_pane_g6

0xc48b,	// (0x00060de6) cale_bg_pane_g7

0xc493,	// (0x00060dee) cale_bg_pane_g8

0xc49b,	// (0x00060df6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00063c35) cale_bg_pane_g

0x5356,	// (0x00059cb1) list_cale_time_pane_ParamLimits

0x5356,	// (0x00059cb1) list_cale_time_pane

0xc4a3,	// (0x00060dfe) list_cale_time_pane_g1_ParamLimits

0xc4a3,	// (0x00060dfe) list_cale_time_pane_g1

0xc4af,	// (0x00060e0a) list_cale_time_pane_g2_ParamLimits

0xc4af,	// (0x00060e0a) list_cale_time_pane_g2

0x5378,	// (0x00059cd3) list_cale_time_pane_g3_ParamLimits

0x5378,	// (0x00059cd3) list_cale_time_pane_g3

0x5386,	// (0x00059ce1) list_cale_time_pane_g4_ParamLimits

0x5386,	// (0x00059ce1) list_cale_time_pane_g4

0x5394,	// (0x00059cef) list_cale_time_pane_g5_ParamLimits

0x5394,	// (0x00059cef) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00063c48) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00063c48) list_cale_time_pane_g

0xc4c9,	// (0x00060e24) list_cale_time_pane_t1_ParamLimits

0xc4c9,	// (0x00060e24) list_cale_time_pane_t1

0xc4f1,	// (0x00060e4c) list_cale_time_pane_t2_ParamLimits

0xc4f1,	// (0x00060e4c) list_cale_time_pane_t2

0x572a,	// (0x0005a085) aid_blid_cardinal_pane

0x576c,	// (0x0005a0c7) compass_pane_t4

0xc519,	// (0x00060e74) list_cale_time_pane_t4_ParamLimits

0xc519,	// (0x00060e74) list_cale_time_pane_t4

0x577a,	// (0x0005a0d5) compass_pane_t5

0x578a,	// (0x0005a0e5) compass_pane_t6

0x5798,	// (0x0005a0f3) compass_pane_t7

0xc9ca,	// (0x00061325) navi_pane_cc_t1

0xcba7,	// (0x00061502) aid_phob_thumbnail_center_pane

0x5e3d,	// (0x0005a798) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00063c55) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00063c55) list_cale_time_pane_t

0x11c0,	// (0x00055b1b) bg_popup_window_pane_cp02_ParamLimits

0x11c0,	// (0x00055b1b) bg_popup_window_pane_cp02

0xc541,	// (0x00060e9c) heading_pane_cp01_ParamLimits

0xc541,	// (0x00060e9c) heading_pane_cp01

0xc54d,	// (0x00060ea8) loc_req_pane_ParamLimits

0xc54d,	// (0x00060ea8) loc_req_pane

0xc55d,	// (0x00060eb8) loc_type_pane_ParamLimits

0xc55d,	// (0x00060eb8) loc_type_pane

0xc56f,	// (0x00060eca) loc_type_pane_t1_ParamLimits

0xc56f,	// (0x00060eca) loc_type_pane_t1

0xc581,	// (0x00060edc) loc_type_pane_t2_ParamLimits

0xc581,	// (0x00060edc) loc_type_pane_t2

0xc593,	// (0x00060eee) loc_type_pane_t3_ParamLimits

0xc593,	// (0x00060eee) loc_type_pane_t3

0x0002,

0xf301,	// (0x00063c5c) loc_type_pane_t_ParamLimits

0xf301,	// (0x00063c5c) loc_type_pane_t

0xc5a5,	// (0x00060f00) list_loc_req_pane

0xc5af,	// (0x00060f0a) scroll_pane_cp012

0x53a2,	// (0x00059cfd) list_single_loc_request_popup_menu_pane_ParamLimits

0x53a2,	// (0x00059cfd) list_single_loc_request_popup_menu_pane

0xc5ba,	// (0x00060f15) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc5ba,	// (0x00060f15) list_single_loc_request_popup_menu_pane_g1

0xc5c6,	// (0x00060f21) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5c6,	// (0x00060f21) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00063c63) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00063c63) list_single_loc_request_popup_menu_pane_g

0xc5d2,	// (0x00060f2d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5d2,	// (0x00060f2d) list_single_loc_request_popup_menu_pane_t1

0x53b4,	// (0x00059d0f) bg_popup_window_pane_cp03_ParamLimits

0x53b4,	// (0x00059d0f) bg_popup_window_pane_cp03

0x53c2,	// (0x00059d1d) heading_loc_req_pane_ParamLimits

0x53c2,	// (0x00059d1d) heading_loc_req_pane

0x53ce,	// (0x00059d29) popup_dyc_status_message_window_g1_ParamLimits

0x53ce,	// (0x00059d29) popup_dyc_status_message_window_g1

0x53da,	// (0x00059d35) popup_dyc_status_message_window_t1_ParamLimits

0x53da,	// (0x00059d35) popup_dyc_status_message_window_t1

0x53ec,	// (0x00059d47) popup_dyc_status_message_window_t2_ParamLimits

0x53ec,	// (0x00059d47) popup_dyc_status_message_window_t2

0x53fe,	// (0x00059d59) popup_dyc_status_message_window_t3_ParamLimits

0x53fe,	// (0x00059d59) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00063c68) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00063c68) popup_dyc_status_message_window_t

0x1f27,	// (0x00056882) bg_heading_pane_cp01

0xc5e8,	// (0x00060f43) heading_loc_req_pane_g1

0xc5f0,	// (0x00060f4b) heading_loc_req_pane_g2

0xc5f8,	// (0x00060f53) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00063c6f) heading_loc_req_pane_g

0xc600,	// (0x00060f5b) heading_loc_req_pane_t1

0xc60f,	// (0x00060f6a) bg_popup_sub_pane_cp01_ParamLimits

0xc60f,	// (0x00060f6a) bg_popup_sub_pane_cp01

0xc61d,	// (0x00060f78) popup_cale_events_window_g1_ParamLimits

0xc61d,	// (0x00060f78) popup_cale_events_window_g1

0xc63d,	// (0x00060f98) popup_cale_events_window_g2_ParamLimits

0xc63d,	// (0x00060f98) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00063ca3) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00063ca3) popup_cale_events_window_g

0xc65d,	// (0x00060fb8) popup_cale_events_window_t1_ParamLimits

0xc65d,	// (0x00060fb8) popup_cale_events_window_t1

0xc66f,	// (0x00060fca) popup_cale_events_window_t2_ParamLimits

0xc66f,	// (0x00060fca) popup_cale_events_window_t2

0xc6ad,	// (0x00061008) popup_cale_events_window_t3_ParamLimits

0xc6ad,	// (0x00061008) popup_cale_events_window_t3

0xc6e7,	// (0x00061042) popup_cale_events_window_t4_ParamLimits

0xc6e7,	// (0x00061042) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00063ca8) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00063ca8) popup_cale_events_window_t

0x54f7,	// (0x00059e52) call_type_pane

0xc71d,	// (0x00061078) popup_call_status_window_g1

0x5503,	// (0x00059e5e) popup_call_status_window_g2

0x550f,	// (0x00059e6a) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00063cb1) popup_call_status_window_g

0xc72b,	// (0x00061086) call_type_pane_g1

0xc734,	// (0x0006108f) call_type_pane_g2

0x0001,

0xf35d,	// (0x00063cb8) call_type_pane_g

0x1f27,	// (0x00056882) bg_popup_sub_pane_cp02

0xc73d,	// (0x00061098) listscroll_popup_wml_pane

0xc745,	// (0x000610a0) list_wml_pane

0xc74f,	// (0x000610aa) scroll_pane_cp013

0xc75a,	// (0x000610b5) list_single_graphic_popup_wml_pane_ParamLimits

0xc75a,	// (0x000610b5) list_single_graphic_popup_wml_pane

0xbf30,	// (0x0006088b) list_single_graphic_popup_wml_pane_g1

0xc76e,	// (0x000610c9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00063cbd) list_single_graphic_popup_wml_pane_g

0xc776,	// (0x000610d1) list_single_graphic_popup_wml_pane_t1

0xc78c,	// (0x000610e7) aid_call_pane

0xbe0e,	// (0x00060769) popup_clock_analogue_window_g1

0xbe0e,	// (0x00060769) popup_clock_analogue_window_g2

0x551b,	// (0x00059e76) popup_clock_analogue_window_g3

0x551b,	// (0x00059e76) popup_clock_analogue_window_g4

0xbf30,	// (0x0006088b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00063cc2) popup_clock_analogue_window_g

0x5523,	// (0x00059e7e) popup_clock_analogue_window_t1

0x5531,	// (0x00059e8c) clock_digital_number_pane_ParamLimits

0x5531,	// (0x00059e8c) clock_digital_number_pane

0x553d,	// (0x00059e98) clock_digital_number_pane_cp02_ParamLimits

0x553d,	// (0x00059e98) clock_digital_number_pane_cp02

0x5549,	// (0x00059ea4) clock_digital_number_pane_cp03_ParamLimits

0x5549,	// (0x00059ea4) clock_digital_number_pane_cp03

0x5555,	// (0x00059eb0) clock_digital_number_pane_cp04_ParamLimits

0x5555,	// (0x00059eb0) clock_digital_number_pane_cp04

0x5565,	// (0x00059ec0) clock_digital_separator_pane_ParamLimits

0x5565,	// (0x00059ec0) clock_digital_separator_pane

0x5571,	// (0x00059ecc) popup_clock_digital_window_t1

0xbf30,	// (0x0006088b) clock_digital_number_pane_g1

0xbf30,	// (0x0006088b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00063c30) clock_digital_number_pane_g

0xbf30,	// (0x0006088b) clock_digital_separator_pane_g1

0xbf30,	// (0x0006088b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00063c30) clock_digital_separator_pane_g

0x1f27,	// (0x00056882) bg_popup_window_pane_cp04

0xc794,	// (0x000610ef) heading_pane_cp03

0xc79c,	// (0x000610f7) listscroll_popup_gms_pane

0xc7a4,	// (0x000610ff) grid_large_graphic_popup_pane

0xc7ae,	// (0x00061109) listscroll_popup_gms_pane_g1

0xc7b6,	// (0x00061111) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00063ccd) listscroll_popup_gms_pane_g

0xc249,	// (0x00060ba4) scroll_pane_cp014

0x558e,	// (0x00059ee9) cell_large_graphic_popup_pane_ParamLimits

0x558e,	// (0x00059ee9) cell_large_graphic_popup_pane

0x55a6,	// (0x00059f01) cell_large_graphic_popup_pane_g1_ParamLimits

0x55a6,	// (0x00059f01) cell_large_graphic_popup_pane_g1

0xc7be,	// (0x00061119) cell_large_graphic_popup_pane_g2_ParamLimits

0xc7be,	// (0x00061119) cell_large_graphic_popup_pane_g2

0xc7ca,	// (0x00061125) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7ca,	// (0x00061125) cell_large_graphic_popup_pane_g3

0xc7d7,	// (0x00061132) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7d7,	// (0x00061132) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00063cd2) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00063cd2) cell_large_graphic_popup_pane_g

0xc7e7,	// (0x00061142) grid_highlight_pane_cp010

0xbf30,	// (0x0006088b) bg_popup_call_pane_g1

0xc7f1,	// (0x0006114c) list_single_graphic_popup_conf_pane_ParamLimits

0xc7f1,	// (0x0006114c) list_single_graphic_popup_conf_pane

0xc804,	// (0x0006115f) list_highlight_pane_cp01

0xc80d,	// (0x00061168) list_single_graphic_popup_conf_pane_g1

0xc815,	// (0x00061170) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00063cdb) list_single_graphic_popup_conf_pane_g

0xc81d,	// (0x00061178) list_single_graphic_popup_conf_pane_t1

0xc82b,	// (0x00061186) linegrid_cams_pane_g1

0x55b2,	// (0x00059f0d) linegrid_cams_pane_g2

0xc086,	// (0x000609e1) linegrid_cams_pane_g3

0xc834,	// (0x0006118f) linegrid_cams_pane_g4

0x55bb,	// (0x00059f16) linegrid_cams_pane_g5

0x55c4,	// (0x00059f1f) linegrid_cams_pane_g6

0xc08f,	// (0x000609ea) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00063ce0) linegrid_cams_pane_g

0xc83d,	// (0x00061198) popup_clock_analogue_window

0xc83d,	// (0x00061198) popup_clock_digital_window

0x1f27,	// (0x00056882) popup_phob_thumbnail_window

0xbf30,	// (0x0006088b) call_video_uplink_pane_g1

0xc846,	// (0x000611a1) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00063cef) call_video_uplink_pane_g

0xc84e,	// (0x000611a9) video_uplink_pane

0xc856,	// (0x000611b1) mce_image_pane_g1

0x55cd,	// (0x00059f28) mce_image_pane_g2

0x55d7,	// (0x00059f32) mce_image_pane_g3

0x55df,	// (0x00059f3a) mce_image_pane_g4

0x55e7,	// (0x00059f42) mce_image_pane_g5

0x0004,

0xf399,	// (0x00063cf4) mce_image_pane_g

0xc860,	// (0x000611bb) control_top_pane_stacon_cp01_ParamLimits

0xc860,	// (0x000611bb) control_top_pane_stacon_cp01

0xc874,	// (0x000611cf) uni_indicator_pane_stacon_cp01_ParamLimits

0xc874,	// (0x000611cf) uni_indicator_pane_stacon_cp01

0xc885,	// (0x000611e0) bg_popup_sub_pane_cp03

0xc88f,	// (0x000611ea) chi_dic_find_pane

0x55ef,	// (0x00059f4a) listscroll_chi_dic_pane

0xc897,	// (0x000611f2) main_pane_chidic_g1

0xc89f,	// (0x000611fa) chi_dic_find_pane_t1

0xc8ad,	// (0x00061208) find_chidic_pane

0xc8b6,	// (0x00061211) chi_dic_list_pane_ParamLimits

0xc8b6,	// (0x00061211) chi_dic_list_pane

0xc8c7,	// (0x00061222) scroll_pane_cp020

0xc8cf,	// (0x0006122a) find_chidic_pane_t1

0x1f27,	// (0x00056882) input_focus_pane_cp06

0x5603,	// (0x00059f5e) list_chi_dic_pane_ParamLimits

0x5603,	// (0x00059f5e) list_chi_dic_pane

0x561d,	// (0x00059f78) list_chi_dic_pane_t1_ParamLimits

0x561d,	// (0x00059f78) list_chi_dic_pane_t1

0x1f27,	// (0x00056882) list_highlight_pane_cp020

0xc8de,	// (0x00061239) bg_cale_heading_pane_g1

0x5630,	// (0x00059f8b) bg_cale_heading_pane_g2

0x5638,	// (0x00059f93) bg_cale_heading_pane_g3

0x5640,	// (0x00059f9b) bg_cale_heading_pane_g4

0x564a,	// (0x00059fa5) bg_cale_heading_pane_g5

0x5654,	// (0x00059faf) bg_cale_heading_pane_g6

0x565c,	// (0x00059fb7) bg_cale_heading_pane_g7

0x5664,	// (0x00059fbf) bg_cale_heading_pane_g8

0x566e,	// (0x00059fc9) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00063cff) bg_cale_heading_pane_g

0xc8de,	// (0x00061239) bg_cale_side_pane_g1

0x5678,	// (0x00059fd3) bg_cale_side_pane_g2

0x5682,	// (0x00059fdd) bg_cale_side_pane_g3

0x568c,	// (0x00059fe7) bg_cale_side_pane_g4

0x5696,	// (0x00059ff1) bg_cale_side_pane_g5

0x56a0,	// (0x00059ffb) bg_cale_side_pane_g6

0x56aa,	// (0x0005a005) bg_cale_side_pane_g7

0x56b4,	// (0x0005a00f) bg_cale_side_pane_g8

0x56bc,	// (0x0005a017) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00063d12) bg_cale_side_pane_g

0x56c4,	// (0x0005a01f) popup_call_status_window_ParamLimits

0x56c4,	// (0x0005a01f) popup_call_status_window

0xc8e6,	// (0x00061241) stacon_top_pane

0xc8ee,	// (0x00061249) status_pane_ParamLimits

0xc8ee,	// (0x00061249) status_pane

0xc903,	// (0x0006125e) status_small_pane

0xc90b,	// (0x00061266) control_pane

0x1f27,	// (0x00056882) stacon_bottom_pane

0xc913,	// (0x0006126e) list_single_mce_smart_pane_t1_ParamLimits

0xc913,	// (0x0006126e) list_single_mce_smart_pane_t1

0xc926,	// (0x00061281) list_single_mce_smart_pane_t2_ParamLimits

0xc926,	// (0x00061281) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00063d25) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00063d25) list_single_mce_smart_pane_t

0x56d0,	// (0x0005a02b) compass_pane

0x56dc,	// (0x0005a037) main_location2_pane_t1

0x56f0,	// (0x0005a04b) main_location2_pane_t2

0x5704,	// (0x0005a05f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00063d2a) main_location2_pane_t

0xc945,	// (0x000612a0) compass_pane_g1_ParamLimits

0xc945,	// (0x000612a0) compass_pane_g1

0x574e,	// (0x0005a0a9) compass_pane_t1

0x575d,	// (0x0005a0b8) compass_pane_t2

0x0005,

0xf3d8,	// (0x00063d33) compass_pane_t

0x57a8,	// (0x0005a103) text_secondary_cp61

0xc9c1,	// (0x0006131c) navi_pane_cams_g5

0xca3d,	// (0x00061398) navi_pane_im_t1

0xca4b,	// (0x000613a6) navi_pane_mp_g1_ParamLimits

0xca4b,	// (0x000613a6) navi_pane_mp_g1

0xca5f,	// (0x000613ba) navi_pane_mp_g2_ParamLimits

0xca5f,	// (0x000613ba) navi_pane_mp_g2

0xca6b,	// (0x000613c6) navi_pane_mp_g3_ParamLimits

0xca6b,	// (0x000613c6) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00063d47) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00063d47) navi_pane_mp_g

0xca77,	// (0x000613d2) navi_pane_mp_t1

0xca85,	// (0x000613e0) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00063d4e) navi_pane_mp_t

0xcaf0,	// (0x0006144b) navi_pane_vt_g1

0xca77,	// (0x000613d2) navi_pane_vt_t1

0xcaf8,	// (0x00061453) navi_slider_pane

0xc0a0,	// (0x000609fb) zooming_pane

0xcb08,	// (0x00061463) navi_slider_pane_g1

0x57e3,	// (0x0005a13e) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00063d55) navi_slider_pane_g

0xcb2c,	// (0x00061487) aid_levels_zoom

0xcb34,	// (0x0006148f) zooming_pane_g1

0xcb3c,	// (0x00061497) zooming_pane_g2

0xcb3c,	// (0x00061497) zooming_pane_g3

0x0002,

0xf409,	// (0x00063d64) zooming_pane_g

0xcb44,	// (0x0006149f) level_10_zoom

0xcb4d,	// (0x000614a8) level_11_zoom

0xcb56,	// (0x000614b1) level_1_zoom

0xcb5f,	// (0x000614ba) level_2_zoom

0xcb68,	// (0x000614c3) level_3_zoom

0xcb71,	// (0x000614cc) level_4_zoom

0xcb7a,	// (0x000614d5) level_5_zoom

0xcb83,	// (0x000614de) level_6_zoom

0xcb8c,	// (0x000614e7) level_7_zoom

0xcb95,	// (0x000614f0) level_8_zoom

0xcb9e,	// (0x000614f9) level_9_zoom

0xcbaf,	// (0x0006150a) popup_phob_thumbnail_window_g1

0xcbb7,	// (0x00061512) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00063d6b) popup_phob_thumbnail_window_g

0xdef7,	// (0x00062852) level_1_location

0xdeff,	// (0x0006285a) level_2_location

0xdf07,	// (0x00062862) level_3_location

0xdf0f,	// (0x0006286a) level_4_location

0xc0a0,	// (0x000609fb) level_5_location

0x57f5,	// (0x0005a150) mce_icon_pane_g1

0x57fd,	// (0x0005a158) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00063d70) mce_icon_pane_g

0x5805,	// (0x0005a160) main_mup_pane_g1_ParamLimits

0x5805,	// (0x0005a160) main_mup_pane_g1

0x581d,	// (0x0005a178) main_mup_pane_g2_ParamLimits

0x581d,	// (0x0005a178) main_mup_pane_g2

0x5839,	// (0x0005a194) main_mup_pane_g3_ParamLimits

0x5839,	// (0x0005a194) main_mup_pane_g3

0x5855,	// (0x0005a1b0) main_mup_pane_g4_ParamLimits

0x5855,	// (0x0005a1b0) main_mup_pane_g4

0x5871,	// (0x0005a1cc) main_mup_pane_g5_ParamLimits

0x5871,	// (0x0005a1cc) main_mup_pane_g5

0x5892,	// (0x0005a1ed) main_mup_pane_g6_ParamLimits

0x5892,	// (0x0005a1ed) main_mup_pane_g6

0x58ae,	// (0x0005a209) main_mup_pane_g7_ParamLimits

0x58ae,	// (0x0005a209) main_mup_pane_g7

0x58ca,	// (0x0005a225) main_mup_pane_g8_ParamLimits

0x58ca,	// (0x0005a225) main_mup_pane_g8

0x58ea,	// (0x0005a245) main_mup_pane_g9_ParamLimits

0x58ea,	// (0x0005a245) main_mup_pane_g9

0x5909,	// (0x0005a264) main_mup_pane_g10_ParamLimits

0x5909,	// (0x0005a264) main_mup_pane_g10

0x5928,	// (0x0005a283) main_mup_pane_g11_ParamLimits

0x5928,	// (0x0005a283) main_mup_pane_g11

0x5940,	// (0x0005a29b) main_mup_pane_g12_ParamLimits

0x5940,	// (0x0005a29b) main_mup_pane_g12

0x594e,	// (0x0005a2a9) main_mup_pane_g13_ParamLimits

0x594e,	// (0x0005a2a9) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00063d75) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00063d75) main_mup_pane_g

0x5964,	// (0x0005a2bf) main_mup_pane_t1_ParamLimits

0x5964,	// (0x0005a2bf) main_mup_pane_t1

0x5981,	// (0x0005a2dc) main_mup_pane_t2_ParamLimits

0x5981,	// (0x0005a2dc) main_mup_pane_t2

0x599b,	// (0x0005a2f6) main_mup_pane_t3_ParamLimits

0x599b,	// (0x0005a2f6) main_mup_pane_t3

0x59b5,	// (0x0005a310) main_mup_pane_t4_ParamLimits

0x59b5,	// (0x0005a310) main_mup_pane_t4

0x59c7,	// (0x0005a322) main_mup_pane_t5_ParamLimits

0x59c7,	// (0x0005a322) main_mup_pane_t5

0x59d9,	// (0x0005a334) main_mup_pane_t6_ParamLimits

0x59d9,	// (0x0005a334) main_mup_pane_t6

0x0005,

0xf435,	// (0x00063d90) main_mup_pane_t_ParamLimits

0xf435,	// (0x00063d90) main_mup_pane_t

0x59ef,	// (0x0005a34a) mup_progress_pane_ParamLimits

0x59ef,	// (0x0005a34a) mup_progress_pane

0x59fb,	// (0x0005a356) mup_visualizer_pane_ParamLimits

0x59fb,	// (0x0005a356) mup_visualizer_pane

0x5a35,	// (0x0005a390) mup_volume_pane_ParamLimits

0x5a35,	// (0x0005a390) mup_volume_pane

0xc71d,	// (0x00061078) mup_visualizer_pane_g1_ParamLimits

0xc71d,	// (0x00061078) mup_visualizer_pane_g1

0xc71d,	// (0x00061078) mup_visualizer_pane_g2_ParamLimits

0xc71d,	// (0x00061078) mup_visualizer_pane_g2

0xc945,	// (0x000612a0) mup_visualizer_pane_g3_ParamLimits

0xc945,	// (0x000612a0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00063d9d) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00063d9d) mup_visualizer_pane_g

0xbf30,	// (0x0006088b) mup_volume_pane_g1

0xcbc7,	// (0x00061522) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00063da4) mup_volume_pane_g

0xbf30,	// (0x0006088b) mup_progress_pane_g1

0xcbd0,	// (0x0006152b) mup_progress_pane_g2

0xcbd9,	// (0x00061534) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00063da9) mup_progress_pane_g

0x1f27,	// (0x00056882) bg_popup_window_pane_cp05

0xcbe2,	// (0x0006153d) heading_pane_cp02_ParamLimits

0xcbe2,	// (0x0006153d) heading_pane_cp02

0xcbfc,	// (0x00061557) list_popup_blid_pane

0xcc04,	// (0x0006155f) list_blid_sat_info_pane_ParamLimits

0xcc04,	// (0x0006155f) list_blid_sat_info_pane

0xcc17,	// (0x00061572) list_blid_sat_info_pane_g1

0xcc1f,	// (0x0006157a) list_blid_sat_info_pane_t1

0x5b42,	// (0x0005a49d) mup_equalizer_pane_ParamLimits

0x5b42,	// (0x0005a49d) mup_equalizer_pane

0x5b63,	// (0x0005a4be) mup_equalizer_pane_cp1_ParamLimits

0x5b63,	// (0x0005a4be) mup_equalizer_pane_cp1

0x5b84,	// (0x0005a4df) mup_equalizer_pane_cp2_ParamLimits

0x5b84,	// (0x0005a4df) mup_equalizer_pane_cp2

0x5ba5,	// (0x0005a500) mup_equalizer_pane_cp3_ParamLimits

0x5ba5,	// (0x0005a500) mup_equalizer_pane_cp3

0x5bc6,	// (0x0005a521) mup_equalizer_pane_cp4_ParamLimits

0x5bc6,	// (0x0005a521) mup_equalizer_pane_cp4

0x5be7,	// (0x0005a542) mup_equalizer_pane_cp5

0x5bfd,	// (0x0005a558) mup_equalizer_pane_cp6

0x5c15,	// (0x0005a570) mup_equalizer_pane_cp7

0xde09,	// (0x00062764) bg_popup_call_poc_act_pane_g9

0xde11,	// (0x0006276c) bg_popup_call_poc_act_pane_g10

0xde19,	// (0x00062774) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe16,	// (0x00060771) mup_scale_pane

0xbf30,	// (0x0006088b) mup_scale_pane_g1

0xcc2d,	// (0x00061588) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00063dc5) mup_scale_pane_g

0xcc51,	// (0x000615ac) msg_data_pane

0xcc59,	// (0x000615b4) scroll_pane_cp017

0x5c3f,	// (0x0005a59a) bg_list_pane_cp04_ParamLimits

0x5c3f,	// (0x0005a59a) bg_list_pane_cp04

0xcc61,	// (0x000615bc) msg_data_pane_g1

0x5c5b,	// (0x0005a5b6) msg_data_pane_g2

0x5c65,	// (0x0005a5c0) msg_data_pane_g3

0x5c6d,	// (0x0005a5c8) msg_data_pane_g4

0x5c75,	// (0x0005a5d0) msg_data_pane_g5

0x5c7d,	// (0x0005a5d8) msg_data_pane_g6

0x5c85,	// (0x0005a5e0) msg_data_pane_g7

0x0006,

0xf479,	// (0x00063dd4) msg_data_pane_g

0x5c8d,	// (0x0005a5e8) msg_text_pane_ParamLimits

0x5c8d,	// (0x0005a5e8) msg_text_pane

0x5cde,	// (0x0005a639) qrid_highlight_pane_cp011_ParamLimits

0x5cde,	// (0x0005a639) qrid_highlight_pane_cp011

0x1f27,	// (0x00056882) msg_body_pane

0x1f27,	// (0x00056882) msg_header_pane

0xcc72,	// (0x000615cd) input_focus_pane_cp07

0x5d04,	// (0x0005a65f) msg_header_pane_t1_ParamLimits

0x5d04,	// (0x0005a65f) msg_header_pane_t1

0xda19,	// (0x00062374) msg_header_pane_t2_ParamLimits

0xda19,	// (0x00062374) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00063de8) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00063de8) msg_header_pane_t

0xcc87,	// (0x000615e2) msg_body_pane_g1

0x5d16,	// (0x0005a671) msg_body_pane_t1_ParamLimits

0x5d16,	// (0x0005a671) msg_body_pane_t1

0xda2b,	// (0x00062386) msg_body_pane_t2_ParamLimits

0xda2b,	// (0x00062386) msg_body_pane_t2

0xda3d,	// (0x00062398) msg_body_pane_t3_ParamLimits

0xda3d,	// (0x00062398) msg_body_pane_t3

0x0002,

0xf492,	// (0x00063ded) msg_body_pane_t_ParamLimits

0xf492,	// (0x00063ded) msg_body_pane_t

0x5d99,	// (0x0005a6f4) main_viewer_pane_g1_ParamLimits

0x5d99,	// (0x0005a6f4) main_viewer_pane_g1

0x5da5,	// (0x0005a700) main_viewer_pane_g2_ParamLimits

0x5da5,	// (0x0005a700) main_viewer_pane_g2

0x5db1,	// (0x0005a70c) main_viewer_pane_g3_ParamLimits

0x5db1,	// (0x0005a70c) main_viewer_pane_g3

0x5dc2,	// (0x0005a71d) main_viewer_pane_g4_ParamLimits

0x5dc2,	// (0x0005a71d) main_viewer_pane_g4

0x5dd3,	// (0x0005a72e) main_viewer_pane_g5_ParamLimits

0x5dd3,	// (0x0005a72e) main_viewer_pane_g5

0x5dd3,	// (0x0005a72e) main_viewer_pane_g7_ParamLimits

0x5dd3,	// (0x0005a72e) main_viewer_pane_g7

0xc5ba,	// (0x00060f15) main_viewer_pane_g8_ParamLimits

0xc5ba,	// (0x00060f15) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00063dfd) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00063dfd) main_viewer_pane_g

0xcc8f,	// (0x000615ea) viewer_content_pane_ParamLimits

0xcc8f,	// (0x000615ea) viewer_content_pane

0x5e11,	// (0x0005a76c) main_postcard_pane_g1_ParamLimits

0x5e11,	// (0x0005a76c) main_postcard_pane_g1

0x5e1f,	// (0x0005a77a) main_postcard_pane_g2_ParamLimits

0x5e1f,	// (0x0005a77a) main_postcard_pane_g2

0x5e2d,	// (0x0005a788) main_postcard_pane_g3_ParamLimits

0x5e2d,	// (0x0005a788) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00063e0e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00063e0e) main_postcard_pane_g

0x5e3d,	// (0x0005a798) main_postcard_pane_g4

0xdff7,	// (0x00062952) smil_status_volume_pane_g2

0x5e69,	// (0x0005a7c4) postcard_pane_ParamLimits

0x5e69,	// (0x0005a7c4) postcard_pane

0xc71d,	// (0x00061078) postcard_pane_g1_ParamLimits

0xc71d,	// (0x00061078) postcard_pane_g1

0x5e9b,	// (0x0005a7f6) postcard_pane_g2_ParamLimits

0x5e9b,	// (0x0005a7f6) postcard_pane_g2

0x5ea7,	// (0x0005a802) postcard_pane_g3_ParamLimits

0x5ea7,	// (0x0005a802) postcard_pane_g3

0xcc9d,	// (0x000615f8) postcard_pane_g4_ParamLimits

0xcc9d,	// (0x000615f8) postcard_pane_g4

0x5eb3,	// (0x0005a80e) postcard_pane_g5_ParamLimits

0x5eb3,	// (0x0005a80e) postcard_pane_g5

0x5ebf,	// (0x0005a81a) postcard_pane_g6_ParamLimits

0x5ebf,	// (0x0005a81a) postcard_pane_g6

0xccab,	// (0x00061606) postcard_pane_g7_ParamLimits

0xccab,	// (0x00061606) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00063e1b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00063e1b) postcard_pane_g

0x5ecb,	// (0x0005a826) main_mp2_pane_g1_ParamLimits

0x5ecb,	// (0x0005a826) main_mp2_pane_g1

0x5ed7,	// (0x0005a832) main_mp2_pane_g2_ParamLimits

0x5ed7,	// (0x0005a832) main_mp2_pane_g2

0x5ee3,	// (0x0005a83e) main_mp2_pane_g3_ParamLimits

0x5ee3,	// (0x0005a83e) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00063e2a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00063e2a) main_mp2_pane_g

0x5eef,	// (0x0005a84a) main_mp2_pane_t1_ParamLimits

0x5eef,	// (0x0005a84a) main_mp2_pane_t1

0x5f06,	// (0x0005a861) main_mp2_pane_t2_ParamLimits

0x5f06,	// (0x0005a861) main_mp2_pane_t2

0x5f1a,	// (0x0005a875) main_mp2_pane_t3_ParamLimits

0x5f1a,	// (0x0005a875) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00063e31) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00063e31) main_mp2_pane_t

0xccb9,	// (0x00061614) pec_content_pane_ParamLimits

0xccb9,	// (0x00061614) pec_content_pane

0xc249,	// (0x00060ba4) scroll_pane_cp015

0xcccb,	// (0x00061626) pec_attribute_pane_ParamLimits

0xcccb,	// (0x00061626) pec_attribute_pane

0x5f2c,	// (0x0005a887) pec_content_pane_g1_ParamLimits

0x5f2c,	// (0x0005a887) pec_content_pane_g1

0xccdb,	// (0x00061636) pec_content_pane_t1_ParamLimits

0xccdb,	// (0x00061636) pec_content_pane_t1

0xcced,	// (0x00061648) pec_content_pane_t2_ParamLimits

0xcced,	// (0x00061648) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00063e38) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00063e38) pec_content_pane_t

0x5f38,	// (0x0005a893) list_single_graphic_pane_cp01_ParamLimits

0x5f38,	// (0x0005a893) list_single_graphic_pane_cp01

0xbe16,	// (0x00060771) bg_popup_sub_pane_cp04

0xccff,	// (0x0006165a) popup_mup_playback_window_g1

0xcd0b,	// (0x00061666) popup_mup_playback_window_t1

0xcd20,	// (0x0006167b) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00063e3d) popup_mup_playback_window_t

0xcd57,	// (0x000616b2) main_image_pane_g1_ParamLimits

0xcd57,	// (0x000616b2) main_image_pane_g1

0xcd9a,	// (0x000616f5) scroll_pane_cp018_ParamLimits

0xcd9a,	// (0x000616f5) scroll_pane_cp018

0xcdb2,	// (0x0006170d) scroll_pane_cp016_ParamLimits

0xcdb2,	// (0x0006170d) scroll_pane_cp016

0x5fd1,	// (0x0005a92c) smil2_image_pane_ParamLimits

0x5fd1,	// (0x0005a92c) smil2_image_pane

0x6001,	// (0x0005a95c) smil2_root_pane_ParamLimits

0x6001,	// (0x0005a95c) smil2_root_pane

0x602d,	// (0x0005a988) smil2_text_pane_ParamLimits

0x602d,	// (0x0005a988) smil2_text_pane

0x1f27,	// (0x00056882) bg_list_pane_cp06

0xcdee,	// (0x00061749) grid_radio_pane

0x1f27,	// (0x00056882) bg_popup_window_pane_cp06

0xcdf6,	// (0x00061751) main_fmradio_pane_t1

0xc794,	// (0x000610ef) heading_pane_cp04

0xce04,	// (0x0006175f) main_fmradio_pane_t2

0xde21,	// (0x0006277c) popup_cale_lunar_info_window_g1

0xce12,	// (0x0006176d) main_fmradio_pane_t3

0xde29,	// (0x00062784) popup_cale_lunar_info_window_g2

0xce20,	// (0x0006177b) main_fmradio_pane_t4

0x0001,

0xce2e,	// (0x00061789) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00063f18) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00063e52) main_fmradio_pane_t

0xce3c,	// (0x00061797) wait_bar_pane_cp03

0xce44,	// (0x0006179f) cell_fmradio_pane_ParamLimits

0xce44,	// (0x0006179f) cell_fmradio_pane

0xccab,	// (0x00061606) cell_fmradio_pane_g1_ParamLimits

0xccab,	// (0x00061606) cell_fmradio_pane_g1

0x1f27,	// (0x00056882) grid_highlight_pane_cp011

0xce57,	// (0x000617b2) poc_content_pane_ParamLimits

0xce57,	// (0x000617b2) poc_content_pane

0xce69,	// (0x000617c4) scroll_pane_cp019

0x606d,	// (0x0005a9c8) popup_call_poc_act_window_ParamLimits

0x606d,	// (0x0005a9c8) popup_call_poc_act_window

0x607a,	// (0x0005a9d5) popup_call_poc_inact_window_ParamLimits

0x607a,	// (0x0005a9d5) popup_call_poc_inact_window

0xf594,	// (0x00063eef) bg_popup_call_poc_act_pane_g

0xdd99,	// (0x000626f4) bg_popup_call_poc_inact_pane_g1

0xdda1,	// (0x000626fc) bg_popup_call_poc_inact_pane_g2

0xce71,	// (0x000617cc) popup_call_poc_act_window_g2

0xdda9,	// (0x00062704) bg_popup_call_poc_inact_pane_g3

0xddb1,	// (0x0006270c) bg_popup_call_poc_inact_pane_g4

0xddb9,	// (0x00062714) bg_popup_call_poc_inact_pane_g5

0xce79,	// (0x000617d4) popup_call_poc_act_window_t1_ParamLimits

0xce79,	// (0x000617d4) popup_call_poc_act_window_t1

0xcea1,	// (0x000617fc) popup_call_poc_act_window_t2_ParamLimits

0xcea1,	// (0x000617fc) popup_call_poc_act_window_t2

0xcec9,	// (0x00061824) popup_call_poc_act_window_t3_ParamLimits

0xcec9,	// (0x00061824) popup_call_poc_act_window_t3

0xcef1,	// (0x0006184c) popup_call_poc_act_window_t4_ParamLimits

0xcef1,	// (0x0006184c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00063e5d) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00063e5d) popup_call_poc_act_window_t

0xddc1,	// (0x0006271c) bg_popup_call_poc_inact_pane_g6

0xddc9,	// (0x00062724) bg_popup_call_poc_inact_pane_g7

0xddd1,	// (0x0006272c) bg_popup_call_poc_inact_pane_g8

0xcf03,	// (0x0006185e) popup_call_poc_inact_window_g2

0xddd9,	// (0x00062734) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00063edc) bg_popup_call_poc_inact_pane_g

0xcf0b,	// (0x00061866) popup_call_poc_inact_window_t1_ParamLimits

0xcf0b,	// (0x00061866) popup_call_poc_inact_window_t1

0xcf20,	// (0x0006187b) popup_call_poc_inact_window_t2_ParamLimits

0xcf20,	// (0x0006187b) popup_call_poc_inact_window_t2

0xcf35,	// (0x00061890) popup_call_poc_inact_window_t3_ParamLimits

0xcf35,	// (0x00061890) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00063e66) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00063e66) popup_call_poc_inact_window_t

0xdf6a,	// (0x000628c5) context_pane_ParamLimits

0x66bc,	// (0x0005b017) signal_pane_ParamLimits

0xc0a0,	// (0x000609fb) main_call2_pane

0x662f,	// (0x0005af8a) popup_phob_thumbnail2_window_ParamLimits

0x662f,	// (0x0005af8a) popup_phob_thumbnail2_window

0x5d47,	// (0x0005a6a2) aid_hotspot_pointer_arrow_pane

0x5d4f,	// (0x0005a6aa) aid_hotspot_pointer_hand_pane

0x639c,	// (0x0005acf7) phob_pre_status_pane_g5

0x3df8,	// (0x00058753) cams_zoom_pane_ParamLimits

0x3e04,	// (0x0005875f) image_vga_pane_ParamLimits

0x3e13,	// (0x0005876e) main_camera_pane_g1_ParamLimits

0x3e21,	// (0x0005877c) main_camera_pane_g2_ParamLimits

0x3e2d,	// (0x00058788) main_camera_pane_g3_ParamLimits

0x3e39,	// (0x00058794) main_camera_pane_g4_ParamLimits

0x3e45,	// (0x000587a0) main_camera_pane_g5_ParamLimits

0x3e51,	// (0x000587ac) main_camera_pane_g6_ParamLimits

0x3e5d,	// (0x000587b8) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00063b65) main_camera_pane_g_ParamLimits

0x3e69,	// (0x000587c4) main_camera_pane_t1_ParamLimits

0x3e7b,	// (0x000587d6) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00063b76) main_camera_pane_t_ParamLimits

0xbe16,	// (0x00060771) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe16,	// (0x00060771) bg_popup_preview_window_pane_cp01

0xcf4a,	// (0x000618a5) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf4a,	// (0x000618a5) popup_phob_thumbnail2_window_g1

0x1f27,	// (0x00056882) call2_cli_visual_pane

0x6096,	// (0x0005a9f1) popup_call2_audio_conf_window_ParamLimits

0x6096,	// (0x0005a9f1) popup_call2_audio_conf_window

0x60ab,	// (0x0005aa06) popup_call2_audio_first_window_ParamLimits

0x60ab,	// (0x0005aa06) popup_call2_audio_first_window

0x6149,	// (0x0005aaa4) popup_call2_audio_in_window_ParamLimits

0x6149,	// (0x0005aaa4) popup_call2_audio_in_window

0x618b,	// (0x0005aae6) popup_call2_audio_out_window_ParamLimits

0x618b,	// (0x0005aae6) popup_call2_audio_out_window

0x61ed,	// (0x0005ab48) popup_call2_audio_second_window_ParamLimits

0x61ed,	// (0x0005ab48) popup_call2_audio_second_window

0x624b,	// (0x0005aba6) popup_call2_audio_wait_window_ParamLimits

0x624b,	// (0x0005aba6) popup_call2_audio_wait_window

0x1f27,	// (0x00056882) bg_popup_call2_act_pane_cp03

0xbdf8,	// (0x00060753) list_conf_pane_cp

0xcf56,	// (0x000618b1) popup_call2_audio_conf_window_t1

0xc7f1,	// (0x0006114c) list_single_graphic_popup_conf2_pane_ParamLimits

0xc7f1,	// (0x0006114c) list_single_graphic_popup_conf2_pane

0xc804,	// (0x0006115f) list_highlight_pane_cp04

0xcf64,	// (0x000618bf) list_single_graphic_popup_conf2_pane_g1

0xc815,	// (0x00061170) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00063e6d) list_single_graphic_popup_conf2_pane_g

0xcf6e,	// (0x000618c9) list_single_graphic_popup_conf2_pane_t1

0xcf7c,	// (0x000618d7) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf7c,	// (0x000618d7) bg_popup_call2_act_pane_cp01

0xd006,	// (0x00061961) call_type_pane_cp05_ParamLimits

0xd006,	// (0x00061961) call_type_pane_cp05

0xd05a,	// (0x000619b5) popup_call2_audio_second_window_g1_ParamLimits

0xd05a,	// (0x000619b5) popup_call2_audio_second_window_g1

0xd0ae,	// (0x00061a09) popup_call2_audio_second_window_g2_ParamLimits

0xd0ae,	// (0x00061a09) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00063e72) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00063e72) popup_call2_audio_second_window_g

0xd113,	// (0x00061a6e) popup_call2_audio_second_window_t1_ParamLimits

0xd113,	// (0x00061a6e) popup_call2_audio_second_window_t1

0xd1ce,	// (0x00061b29) popup_call2_audio_second_window_t2_ParamLimits

0xd1ce,	// (0x00061b29) popup_call2_audio_second_window_t2

0xd221,	// (0x00061b7c) popup_call2_audio_second_window_t3_ParamLimits

0xd221,	// (0x00061b7c) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00063e79) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00063e79) popup_call2_audio_second_window_t

0x1f27,	// (0x00056882) bg_popup_call2_in_pane_cp02

0x1f31,	// (0x0005688c) call_type_pane_cp04

0x1f39,	// (0x00056894) popup_call2_audio_wait_window_g1

0x1f41,	// (0x0005689c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00063a54) popup_call2_audio_wait_window_g

0x1f49,	// (0x000568a4) popup_call2_audio_wait_window_t3

0xd314,	// (0x00061c6f) bg_popup_call2_act_pane_ParamLimits

0xd314,	// (0x00061c6f) bg_popup_call2_act_pane

0xd3d4,	// (0x00061d2f) call_type_pane_cp03_ParamLimits

0xd3d4,	// (0x00061d2f) call_type_pane_cp03

0xd438,	// (0x00061d93) popup_call2_audio_first_window_g1_ParamLimits

0xd438,	// (0x00061d93) popup_call2_audio_first_window_g1

0xd4a8,	// (0x00061e03) popup_call2_audio_first_window_g2_ParamLimits

0xd4a8,	// (0x00061e03) popup_call2_audio_first_window_g2

0xc71d,	// (0x00061078) popup_call2_audio_first_window_g3_ParamLimits

0xc71d,	// (0x00061078) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00063e82) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00063e82) popup_call2_audio_first_window_g

0xd586,	// (0x00061ee1) popup_call2_audio_first_window_t1_ParamLimits

0xd586,	// (0x00061ee1) popup_call2_audio_first_window_t1

0xd689,	// (0x00061fe4) popup_call2_audio_first_window_t4_ParamLimits

0xd689,	// (0x00061fe4) popup_call2_audio_first_window_t4

0xd76c,	// (0x000620c7) popup_call2_audio_first_window_t5_ParamLimits

0xd76c,	// (0x000620c7) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00063e8d) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00063e8d) popup_call2_audio_first_window_t

0xbe0e,	// (0x00060769) bg_popup_call2_act_pane_g1

0xde31,	// (0x0006278c) popup_cale_lunar_info_window_t1

0xde3f,	// (0x0006279a) popup_cale_lunar_info_window_t2

0xde4d,	// (0x000627a8) popup_cale_lunar_info_window_t3

0x1f27,	// (0x00056882) bg_popup_call2_bubble_pane

0xd86d,	// (0x000621c8) bg_popup_call2_in_pane_cp01_ParamLimits

0xd86d,	// (0x000621c8) bg_popup_call2_in_pane_cp01

0x1245,	// (0x00055ba0) call_type_pane_cp02

0xd8b5,	// (0x00062210) popup_call2_audio_out_window_g1_ParamLimits

0xd8b5,	// (0x00062210) popup_call2_audio_out_window_g1

0xd8e1,	// (0x0006223c) popup_call2_audio_out_window_g2_ParamLimits

0xd8e1,	// (0x0006223c) popup_call2_audio_out_window_g2

0xd909,	// (0x00062264) popup_call2_audio_out_window_g3_ParamLimits

0xd909,	// (0x00062264) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00063e96) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00063e96) popup_call2_audio_out_window_g

0xd944,	// (0x0006229f) popup_call2_audio_out_window_t1_ParamLimits

0xd944,	// (0x0006229f) popup_call2_audio_out_window_t1

0xd9a3,	// (0x000622fe) popup_call2_audio_out_window_t2_ParamLimits

0xd9a3,	// (0x000622fe) popup_call2_audio_out_window_t2

0xda4f,	// (0x000623aa) popup_call2_audio_out_window_t3_ParamLimits

0xda4f,	// (0x000623aa) popup_call2_audio_out_window_t3

0xda65,	// (0x000623c0) popup_call2_audio_out_window_t4_ParamLimits

0xda65,	// (0x000623c0) popup_call2_audio_out_window_t4

0xda7b,	// (0x000623d6) popup_call2_audio_out_window_t5_ParamLimits

0xda7b,	// (0x000623d6) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00063e9f) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00063e9f) popup_call2_audio_out_window_t

0xdadf,	// (0x0006243a) bg_popup_call2_in_pane_ParamLimits

0xdadf,	// (0x0006243a) bg_popup_call2_in_pane

0xdb3b,	// (0x00062496) popup_call2_audio_in_window_g1_ParamLimits

0xdb3b,	// (0x00062496) popup_call2_audio_in_window_g1

0xdb73,	// (0x000624ce) popup_call2_audio_in_window_g2_ParamLimits

0xdb73,	// (0x000624ce) popup_call2_audio_in_window_g2

0xdbab,	// (0x00062506) popup_call2_audio_in_window_g3_ParamLimits

0xdbab,	// (0x00062506) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00063eac) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00063eac) popup_call2_audio_in_window_g

0xdc03,	// (0x0006255e) popup_call2_audio_in_window_t1_ParamLimits

0xdc03,	// (0x0006255e) popup_call2_audio_in_window_t1

0xdc83,	// (0x000625de) popup_call2_audio_in_window_t2_ParamLimits

0xdc83,	// (0x000625de) popup_call2_audio_in_window_t2

0xdd03,	// (0x0006265e) popup_call2_audio_in_window_t3_ParamLimits

0xdd03,	// (0x0006265e) popup_call2_audio_in_window_t3

0xdd1d,	// (0x00062678) popup_call2_audio_in_window_t4_ParamLimits

0xdd1d,	// (0x00062678) popup_call2_audio_in_window_t4

0xdd2f,	// (0x0006268a) popup_call2_audio_in_window_t5_ParamLimits

0xdd2f,	// (0x0006268a) popup_call2_audio_in_window_t5

0xdd44,	// (0x0006269f) popup_call2_audio_in_window_t6_ParamLimits

0xdd44,	// (0x0006269f) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00063eb5) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00063eb5) popup_call2_audio_in_window_t

0xbe0e,	// (0x00060769) bg_popup_call2_in_pane_g1

0xde5b,	// (0x000627b6) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00063f1d) popup_cale_lunar_info_window_t

0xbe16,	// (0x00060771) bg_popup_call2_rect_pane_ParamLimits

0xbe16,	// (0x00060771) bg_popup_call2_rect_pane

0x1f27,	// (0x00056882) call2_cli_visual_graphic_pane

0x1f27,	// (0x00056882) call2_cli_visual_text_pane

0x6762,	// (0x0005b0bd) smil_status_volume_pane_g3

0x0002,

0xbf30,	// (0x0006088b) call2_cli_visual_graphic_pane_g1

0xbf30,	// (0x0006088b) call2_cli_visual_graphic_pane_g2

0xbf30,	// (0x0006088b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00063ec2) call2_cli_visual_graphic_pane_g

0xdd59,	// (0x000626b4) bg_popup_call2_rect_pane_g1

0xbfbc,	// (0x00060917) bg_popup_call2_rect_pane_g2

0xdd61,	// (0x000626bc) bg_popup_call2_rect_pane_g3

0xdd69,	// (0x000626c4) bg_popup_call2_rect_pane_g4

0xdd71,	// (0x000626cc) bg_popup_call2_rect_pane_g5

0xdd79,	// (0x000626d4) bg_popup_call2_rect_pane_g6

0xdd81,	// (0x000626dc) bg_popup_call2_rect_pane_g7

0xdd89,	// (0x000626e4) bg_popup_call2_rect_pane_g8

0xdd91,	// (0x000626ec) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00063ec9) bg_popup_call2_rect_pane_g

0xdd99,	// (0x000626f4) bg_popup_call2_bubble_pane_g1

0xdda1,	// (0x000626fc) bg_popup_call2_bubble_pane_g2

0xdda9,	// (0x00062704) bg_popup_call2_bubble_pane_g3

0xddb1,	// (0x0006270c) bg_popup_call2_bubble_pane_g4

0xddb9,	// (0x00062714) bg_popup_call2_bubble_pane_g5

0xddc1,	// (0x0006271c) bg_popup_call2_bubble_pane_g6

0xddc9,	// (0x00062724) bg_popup_call2_bubble_pane_g7

0xddd1,	// (0x0006272c) bg_popup_call2_bubble_pane_g8

0xddd9,	// (0x00062734) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00063edc) bg_popup_call2_bubble_pane_g

0x390f,	// (0x0005826a) aid_cale_week_size_cell_pane

0x3e8d,	// (0x000587e8) aid_cams_cif_uncrop_pane_ParamLimits

0x3e8d,	// (0x000587e8) aid_cams_cif_uncrop_pane

0x3fe8,	// (0x00058943) aid_cams_size_cell_ParamLimits

0x3fe8,	// (0x00058943) aid_cams_size_cell

0x3ff4,	// (0x0005894f) grid_cams_pane_ParamLimits

0x4002,	// (0x0005895d) linegrid_cams_pane_ParamLimits

0x41ed,	// (0x00058b48) call_video_pane_t1

0x420e,	// (0x00058b69) call_video_pane_t2

0x0001,

0xf26e,	// (0x00063bc9) call_video_pane_t

0x4755,	// (0x000590b0) aid_cale_month_size_cell_pane_ParamLimits

0x4755,	// (0x000590b0) aid_cale_month_size_cell_pane

0xf60b,	// (0x00063f66) smil_status_volume_pane_g

0x676f,	// (0x0005b0ca) volume_smil_pane_ParamLimits

0x3058,	// (0x000579b3) aid_popup2_width_pane

0x3803,	// (0x0005815e) cell_qdial_pane_g4_ParamLimits

0x3803,	// (0x0005815e) cell_qdial_pane_g4

0x572a,	// (0x0005a085) aid_blid_cardinal_pane_ParamLimits

0x573a,	// (0x0005a095) aid_blid_destination_pane_ParamLimits

0x573a,	// (0x0005a095) aid_blid_destination_pane

0xbe16,	// (0x00060771) bg_popup_call_poc_act_pane_ParamLimits

0xbe16,	// (0x00060771) bg_popup_call_poc_act_pane

0xbe16,	// (0x00060771) bg_popup_call_poc_inact_pane_ParamLimits

0xbe16,	// (0x00060771) bg_popup_call_poc_inact_pane

0xdde1,	// (0x0006273c) bg_popup_call_poc_act_pane_g1

0xdde9,	// (0x00062744) bg_popup_call_poc_act_pane_g2

0xddf1,	// (0x0006274c) bg_popup_call_poc_act_pane_g3

0xddb1,	// (0x0006270c) bg_popup_call_poc_act_pane_g4

0xddb9,	// (0x00062714) bg_popup_call_poc_act_pane_g5

0xddf9,	// (0x00062754) bg_popup_call_poc_act_pane_g6

0xddc9,	// (0x00062724) bg_popup_call_poc_act_pane_g7

0xde01,	// (0x0006275c) bg_popup_call_poc_act_pane_g8

0x1f27,	// (0x00056882) main_usb_pane

0x655e,	// (0x0005aeb9) popup_cale_lunar_info_window

0x4537,	// (0x00058e92) im_reading_pane_t1_ParamLimits

0xc1a1,	// (0x00060afc) list_im_pane_ParamLimits

0xc1b2,	// (0x00060b0d) scroll_pane_cp07_ParamLimits

0x1f27,	// (0x00056882) grid_highlight_pane_cp012

0xbe16,	// (0x00060771) mup_scale_pane_ParamLimits

0xc71d,	// (0x00061078) main_usb_pane_g1_ParamLimits

0xc71d,	// (0x00061078) main_usb_pane_g1

0x62bf,	// (0x0005ac1a) main_usb_pane_g2_ParamLimits

0x62bf,	// (0x0005ac1a) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00063f06) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00063f06) main_usb_pane_g

0x62cb,	// (0x0005ac26) main_usb_pane_t1_ParamLimits

0x62cb,	// (0x0005ac26) main_usb_pane_t1

0x62dd,	// (0x0005ac38) main_usb_pane_t2_ParamLimits

0x62dd,	// (0x0005ac38) main_usb_pane_t2

0x62ef,	// (0x0005ac4a) main_usb_pane_t3_ParamLimits

0x62ef,	// (0x0005ac4a) main_usb_pane_t3

0x6301,	// (0x0005ac5c) main_usb_pane_t4_ParamLimits

0x6301,	// (0x0005ac5c) main_usb_pane_t4

0x6313,	// (0x0005ac6e) main_usb_pane_t5_ParamLimits

0x6313,	// (0x0005ac6e) main_usb_pane_t5

0x6325,	// (0x0005ac80) main_usb_pane_t6_ParamLimits

0x6325,	// (0x0005ac80) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00063f0b) main_usb_pane_t_ParamLimits

0x56d0,	// (0x0005a02b) aid_text_placing

0x56dc,	// (0x0005a037) main_location2_pane_t1_ParamLimits

0x56f0,	// (0x0005a04b) main_location2_pane_t2_ParamLimits

0x5704,	// (0x0005a05f) main_location2_pane_t3_ParamLimits

0x5718,	// (0x0005a073) main_location2_pane_t4_ParamLimits

0x5718,	// (0x0005a073) main_location2_pane_t4

0xf3cf,	// (0x00063d2a) main_location2_pane_t_ParamLimits

0xbe52,	// (0x000607ad) find_pinb_pane_g2_ParamLimits

0xbe52,	// (0x000607ad) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00063a7a) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00063a7a) find_pinb_pane_g

0xbe5e,	// (0x000607b9) find_pinb_pane_t1_ParamLimits

0xbe70,	// (0x000607cb) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00063a7f) find_pinb_pane_t_ParamLimits

0x1f27,	// (0x00056882) main_call3_pane

0x4cf8,	// (0x00059653) cale_month_day_heading_pane_t1_ParamLimits

0x4d7e,	// (0x000596d9) cale_month_day_heading_pane_t2_ParamLimits

0x4df7,	// (0x00059752) cale_month_day_heading_pane_t3_ParamLimits

0x4e70,	// (0x000597cb) cale_month_day_heading_pane_t4_ParamLimits

0x4ee9,	// (0x00059844) cale_month_day_heading_pane_t5_ParamLimits

0x4f62,	// (0x000598bd) cale_month_day_heading_pane_t6_ParamLimits

0x4fdb,	// (0x00059936) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00063c01) cale_month_day_heading_pane_t_ParamLimits

0xc3fc,	// (0x00060d57) smil_status_volume_pane

0x5e83,	// (0x0005a7de) postcard_address_pane_ParamLimits

0x5e83,	// (0x0005a7de) postcard_address_pane

0x5e8f,	// (0x0005a7ea) postcard_message_pane_ParamLimits

0x5e8f,	// (0x0005a7ea) postcard_message_pane

0x628a,	// (0x0005abe5) call2_cli_visual_pane_t1_ParamLimits

0x628a,	// (0x0005abe5) call2_cli_visual_pane_t1

0x68c6,	// (0x0005b221) postcard_message_pane_t1_ParamLimits

0x68c6,	// (0x0005b221) postcard_message_pane_t1

0x68af,	// (0x0005b20a) postcard_address_pane_t1_ParamLimits

0x68af,	// (0x0005b20a) postcard_address_pane_t1

0x68a0,	// (0x0005b1fb) popup_call3_audio_in_window_ParamLimits

0x68a0,	// (0x0005b1fb) popup_call3_audio_in_window

0x6784,	// (0x0005b0df) bg_popup_call3_in_pane_ParamLimits

0x6784,	// (0x0005b0df) bg_popup_call3_in_pane

0x67e6,	// (0x0005b141) popup_call3_audio_in_window_g1_ParamLimits

0x67e6,	// (0x0005b141) popup_call3_audio_in_window_g1

0x67fe,	// (0x0005b159) popup_call3_audio_in_window_g2_ParamLimits

0x67fe,	// (0x0005b159) popup_call3_audio_in_window_g2

0x6816,	// (0x0005b171) popup_call3_audio_in_window_g3_ParamLimits

0x6816,	// (0x0005b171) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00063f6d) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00063f6d) popup_call3_audio_in_window_g

0x683e,	// (0x0005b199) popup_call3_audio_in_window_t1_ParamLimits

0x683e,	// (0x0005b199) popup_call3_audio_in_window_t1

0x6866,	// (0x0005b1c1) popup_call3_audio_in_window_t2_ParamLimits

0x6866,	// (0x0005b1c1) popup_call3_audio_in_window_t2

0x688e,	// (0x0005b1e9) popup_call3_audio_in_window_t3_ParamLimits

0x688e,	// (0x0005b1e9) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00063f76) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00063f76) popup_call3_audio_in_window_t

0xc0a0,	// (0x000609fb) bg_popup_call3_rect_pane

0xdd59,	// (0x000626b4) bg_popup_call3_rect_pane_g1

0xbfbc,	// (0x00060917) bg_popup_call3_rect_pane_g2

0xdd61,	// (0x000626bc) bg_popup_call3_rect_pane_g3

0xdd69,	// (0x000626c4) bg_popup_call3_rect_pane_g4

0xdd71,	// (0x000626cc) bg_popup_call3_rect_pane_g5

0xdd79,	// (0x000626d4) bg_popup_call3_rect_pane_g6

0xdd81,	// (0x000626dc) bg_popup_call3_rect_pane_g7

0x5a50,	// (0x0005a3ab) mup_visualizer_osc_pane

0xcbbf,	// (0x0006151a) mup_visualizer_spec_pane

0x67a4,	// (0x0005b0ff) call3_video_qcif_pane_ParamLimits

0x67a4,	// (0x0005b0ff) call3_video_qcif_pane

0x67b6,	// (0x0005b111) call3_video_qcif_uncrop_pane_ParamLimits

0x67b6,	// (0x0005b111) call3_video_qcif_uncrop_pane

0x67c4,	// (0x0005b11f) call3_video_subqcif_pane_ParamLimits

0x67c4,	// (0x0005b11f) call3_video_subqcif_pane

0x67d6,	// (0x0005b131) call3_video_subqcif_uncrop_pane_ParamLimits

0x67d6,	// (0x0005b131) call3_video_subqcif_uncrop_pane

0x682e,	// (0x0005b189) popup_call3_audio_in_window_g4_ParamLimits

0x682e,	// (0x0005b189) popup_call3_audio_in_window_g4

0x6751,	// (0x0005b0ac) mup_spec_half_pane

0x675a,	// (0x0005b0b5) mup_spec_half_pane_cp

0xdfca,	// (0x00062925) mup_osc_middle_pane

0xdfd3,	// (0x0006292e) mup_visualizer_osc_pane_g1

0x6732,	// (0x0005b08d) mup_spec_bar_pane_ParamLimits

0x6732,	// (0x0005b08d) mup_spec_bar_pane

0xdfb7,	// (0x00062912) mup_spec_bar_pane_g1

0xdfc1,	// (0x0006291c) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00063f61) mup_spec_bar_pane_g

0x390f,	// (0x0005826a) aid_cale_week_size_cell_pane_ParamLimits

0x3924,	// (0x0005827f) bg_cale_heading_pane_ParamLimits

0xbff9,	// (0x00060954) bg_cale_pane_cp01_ParamLimits

0x3944,	// (0x0005829f) cale_week_corner_pane_ParamLimits

0x395e,	// (0x000582b9) cale_week_day_heading_pane_ParamLimits

0x397e,	// (0x000582d9) cale_week_scroll_pane_g1_ParamLimits

0x3999,	// (0x000582f4) cale_week_scroll_pane_g2_ParamLimits

0x39ac,	// (0x00058307) cale_week_scroll_pane_g3_ParamLimits

0x39bf,	// (0x0005831a) cale_week_scroll_pane_g4_ParamLimits

0x39d2,	// (0x0005832d) cale_week_scroll_pane_g5_ParamLimits

0x39e5,	// (0x00058340) cale_week_scroll_pane_g6_ParamLimits

0x39f8,	// (0x00058353) cale_week_scroll_pane_g7_ParamLimits

0x3a0d,	// (0x00058368) cale_week_scroll_pane_g8_ParamLimits

0x3a22,	// (0x0005837d) cale_week_scroll_pane_g9_ParamLimits

0x3a35,	// (0x00058390) cale_week_scroll_pane_g10_ParamLimits

0x3a48,	// (0x000583a3) cale_week_scroll_pane_g11_ParamLimits

0x3a5b,	// (0x000583b6) cale_week_scroll_pane_g12_ParamLimits

0x3a72,	// (0x000583cd) cale_week_scroll_pane_g13_ParamLimits

0x3a8d,	// (0x000583e8) cale_week_scroll_pane_g14_ParamLimits

0x3aa8,	// (0x00058403) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00063b0b) cale_week_scroll_pane_g_ParamLimits

0x3ad8,	// (0x00058433) cale_week_time_pane_ParamLimits

0x3aed,	// (0x00058448) grid_cale_week_pane_ParamLimits

0xc016,	// (0x00060971) listscroll_cale_week_pane_t1

0xc028,	// (0x00060983) scroll_pane_cp08_ParamLimits

0x47c9,	// (0x00059124) cale_month_corner_pane_ParamLimits

0xc3d2,	// (0x00060d2d) cale_month_pane_t1

0x4c7b,	// (0x000595d6) cale_month_week_pane_ParamLimits

0xc71d,	// (0x00061078) popup_call_status_window_g1_ParamLimits

0x5503,	// (0x00059e5e) popup_call_status_window_g2_ParamLimits

0x550f,	// (0x00059e6a) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00063cb1) popup_call_status_window_g_ParamLimits

0xc784,	// (0x000610df) aid_call2_pane

0x5cf8,	// (0x0005a653) msg_header_pane_g1

0x5e83,	// (0x0005a7de) postcard_address2_pane_ParamLimits

0x5e83,	// (0x0005a7de) postcard_address2_pane

0x5e8f,	// (0x0005a7ea) postcard_message2_pane_ParamLimits

0x5e8f,	// (0x0005a7ea) postcard_message2_pane

0x66ca,	// (0x0005b025) message2_row_pane_ParamLimits

0x66ca,	// (0x0005b025) message2_row_pane

0x66e5,	// (0x0005b040) address2_row_pane_ParamLimits

0x66e5,	// (0x0005b040) address2_row_pane

0xdf85,	// (0x000628e0) postcard_message2_row_pane_g1

0xdf8d,	// (0x000628e8) postcard_message2_row_pane_t1

0xdf85,	// (0x000628e0) address2_row_pane_g1

0xdf8d,	// (0x000628e8) address2_row_pane_t1

0x3d73,	// (0x000586ce) aid_size_cell_vorec

0x1f27,	// (0x00056882) main_rss_pane

0x66f8,	// (0x0005b053) rss_list_single_pane_ParamLimits

0x66f8,	// (0x0005b053) rss_list_single_pane

0xdf9b,	// (0x000628f6) rss_list_single_pane_t1

0xdfa9,	// (0x00062904) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00063f5c) rss_list_single_pane_t

0x1f27,	// (0x00056882) main_camera2_pane

0x1f27,	// (0x00056882) main_video2_pane

0x692a,	// (0x0005b285) cams_zoom_pane_cp2_ParamLimits

0x692a,	// (0x0005b285) cams_zoom_pane_cp2

0x6936,	// (0x0005b291) image2_vga_pane_ParamLimits

0x6936,	// (0x0005b291) image2_vga_pane

0x6945,	// (0x0005b2a0) main_camera2_pane_g1_ParamLimits

0x6945,	// (0x0005b2a0) main_camera2_pane_g1

0x6951,	// (0x0005b2ac) main_camera2_pane_g2_ParamLimits

0x6951,	// (0x0005b2ac) main_camera2_pane_g2

0x695d,	// (0x0005b2b8) main_camera2_pane_g3_ParamLimits

0x695d,	// (0x0005b2b8) main_camera2_pane_g3

0x6969,	// (0x0005b2c4) main_camera2_pane_g4_ParamLimits

0x6969,	// (0x0005b2c4) main_camera2_pane_g4

0x6975,	// (0x0005b2d0) main_camera2_pane_g5_ParamLimits

0x6975,	// (0x0005b2d0) main_camera2_pane_g5

0x6981,	// (0x0005b2dc) main_camera2_pane_g6_ParamLimits

0x6981,	// (0x0005b2dc) main_camera2_pane_g6

0x698d,	// (0x0005b2e8) main_camera2_pane_g7_ParamLimits

0x698d,	// (0x0005b2e8) main_camera2_pane_g7

0x6999,	// (0x0005b2f4) main_camera2_pane_g8_ParamLimits

0x6999,	// (0x0005b2f4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00063f7d) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00063f7d) main_camera2_pane_g

0x69b1,	// (0x0005b30c) main_camera2_pane_t1_ParamLimits

0x69b1,	// (0x0005b30c) main_camera2_pane_t1

0x69c3,	// (0x0005b31e) main_camera2_pane_t2_ParamLimits

0x69c3,	// (0x0005b31e) main_camera2_pane_t2

0x69d5,	// (0x0005b330) main_camera2_pane_t3_ParamLimits

0x69d5,	// (0x0005b330) main_camera2_pane_t3

0x69e7,	// (0x0005b342) main_camera2_pane_t4_ParamLimits

0x69e7,	// (0x0005b342) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00063f90) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00063f90) main_camera2_pane_t

0x6a49,	// (0x0005b3a4) cams_zoom_pane_cp4_ParamLimits

0x6a49,	// (0x0005b3a4) cams_zoom_pane_cp4

0x6a59,	// (0x0005b3b4) image2_cif_pane_ParamLimits

0x6a59,	// (0x0005b3b4) image2_cif_pane

0x6a6e,	// (0x0005b3c9) image2_subqcif_pane_ParamLimits

0x6a6e,	// (0x0005b3c9) image2_subqcif_pane

0x6a7d,	// (0x0005b3d8) main_video2_pane_g1_ParamLimits

0x6a7d,	// (0x0005b3d8) main_video2_pane_g1

0x6a8f,	// (0x0005b3ea) main_video2_pane_g2_ParamLimits

0x6a8f,	// (0x0005b3ea) main_video2_pane_g2

0x6a9f,	// (0x0005b3fa) main_video2_pane_g3_ParamLimits

0x6a9f,	// (0x0005b3fa) main_video2_pane_g3

0x6aaf,	// (0x0005b40a) main_video2_pane_g4_ParamLimits

0x6aaf,	// (0x0005b40a) main_video2_pane_g4

0x6abf,	// (0x0005b41a) main_video2_pane_g5_ParamLimits

0x6abf,	// (0x0005b41a) main_video2_pane_g5

0x6acf,	// (0x0005b42a) main_video2_pane_g6_ParamLimits

0x6acf,	// (0x0005b42a) main_video2_pane_g6

0x0005,

0xf644,	// (0x00063f9f) main_video2_pane_g_ParamLimits

0xf644,	// (0x00063f9f) main_video2_pane_g

0x6ae1,	// (0x0005b43c) main_video2_pane_t1_ParamLimits

0x6ae1,	// (0x0005b43c) main_video2_pane_t1

0x6afb,	// (0x0005b456) main_video2_pane_t2_ParamLimits

0x6afb,	// (0x0005b456) main_video2_pane_t2

0x6b21,	// (0x0005b47c) main_video2_pane_t3_ParamLimits

0x6b21,	// (0x0005b47c) main_video2_pane_t3

0x0002,

0xf651,	// (0x00063fac) main_video2_pane_t_ParamLimits

0xf651,	// (0x00063fac) main_video2_pane_t

0x63dc,	// (0x0005ad37) call_muted_g2

0x0001,

0xf5f3,	// (0x00063f4e) call_muted_g

0x1f27,	// (0x00056882) main_mup2_pane

0xe00a,	// (0x00062965) main_mup2_pane_g1_ParamLimits

0xe00a,	// (0x00062965) main_mup2_pane_g1

0x6b47,	// (0x0005b4a2) main_mup2_pane_g2_ParamLimits

0x6b47,	// (0x0005b4a2) main_mup2_pane_g2

0x6dc9,	// (0x0005b724) main_mup_pane_g13_cp1

0x6dd1,	// (0x0005b72c) mup_volume_pane_cp1

0x6b67,	// (0x0005b4c2) main_mup2_pane_g4_ParamLimits

0x6b67,	// (0x0005b4c2) main_mup2_pane_g4

0x6b7c,	// (0x0005b4d7) main_mup2_pane_g5_ParamLimits

0x6b7c,	// (0x0005b4d7) main_mup2_pane_g5

0x6b91,	// (0x0005b4ec) main_mup2_pane_g6_ParamLimits

0x6b91,	// (0x0005b4ec) main_mup2_pane_g6

0x6ba6,	// (0x0005b501) main_mup2_pane_g7_ParamLimits

0x6ba6,	// (0x0005b501) main_mup2_pane_g7

0x0006,

0xf658,	// (0x00063fb3) main_mup2_pane_g_ParamLimits

0xf658,	// (0x00063fb3) main_mup2_pane_g

0x6bc2,	// (0x0005b51d) main_mup2_pane_t1_ParamLimits

0x6bc2,	// (0x0005b51d) main_mup2_pane_t1

0x6bd9,	// (0x0005b534) main_mup2_pane_t2_ParamLimits

0x6bd9,	// (0x0005b534) main_mup2_pane_t2

0x6bf0,	// (0x0005b54b) main_mup2_pane_t3_ParamLimits

0x6bf0,	// (0x0005b54b) main_mup2_pane_t3

0x6c07,	// (0x0005b562) main_mup2_pane_t4_ParamLimits

0x6c07,	// (0x0005b562) main_mup2_pane_t4

0x6c21,	// (0x0005b57c) main_mup2_pane_t5_ParamLimits

0x6c21,	// (0x0005b57c) main_mup2_pane_t5

0x6c3b,	// (0x0005b596) main_mup2_pane_t6_ParamLimits

0x6c3b,	// (0x0005b596) main_mup2_pane_t6

0x0005,

0xf667,	// (0x00063fc2) main_mup2_pane_t_ParamLimits

0xf667,	// (0x00063fc2) main_mup2_pane_t

0x6c73,	// (0x0005b5ce) mup2_visualizer_pane_ParamLimits

0x6c73,	// (0x0005b5ce) mup2_visualizer_pane

0x6ca9,	// (0x0005b604) mup_progress_pane_cp_ParamLimits

0x6ca9,	// (0x0005b604) mup_progress_pane_cp

0x6db4,	// (0x0005b70f) mup_volume_pane_cp_ParamLimits

0x6db4,	// (0x0005b70f) mup_volume_pane_cp

0x6cc0,	// (0x0005b61b) mup2_visualizer_pane_g1_ParamLimits

0x6cc0,	// (0x0005b61b) mup2_visualizer_pane_g1

0xe016,	// (0x00062971) mup2_visualizer_pane_g2_ParamLimits

0xe016,	// (0x00062971) mup2_visualizer_pane_g2

0x6cd5,	// (0x0005b630) mup2_visualizer_pane_g3_ParamLimits

0x6cd5,	// (0x0005b630) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00063fcf) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00063fcf) mup2_visualizer_pane_g

0xcde6,	// (0x00061741) aid_size_cell_fmradio

0x64f2,	// (0x0005ae4d) aid_height_parent_landcape

0xc230,	// (0x00060b8b) wml_content_pane_cp

0xc238,	// (0x00060b93) wml_tabs_pane

0xc241,	// (0x00060b9c) popup_wml_miniature_window

0xc249,	// (0x00060ba4) scroll_pane_cp021

0xc25d,	// (0x00060bb8) wml_content_pane_comp8

0x1f27,	// (0x00056882) bg_popup_sub_pane_cp05

0xe034,	// (0x0006298f) popup_wml_miniature_window_g1

0xe03c,	// (0x00062997) wml_miniature_view_pane

0x6ce3,	// (0x0005b63e) aid_size_wml_view

0x6ceb,	// (0x0005b646) wml_miniature_view_pane_g1

0x6cf4,	// (0x0005b64f) wml_miniature_view_pane_g2

0x6cfd,	// (0x0005b658) wml_miniature_view_pane_g3

0x6d05,	// (0x0005b660) wml_miniature_view_pane_g4

0x6d0d,	// (0x0005b668) wml_miniature_view_pane_g5

0x6d15,	// (0x0005b670) wml_miniature_view_pane_g6

0x6d1d,	// (0x0005b678) wml_miniature_view_pane_g7

0x6d25,	// (0x0005b680) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x00063fd6) wml_miniature_view_pane_g

0xe00a,	// (0x00062965) background_graphic_ParamLimits

0xe00a,	// (0x00062965) background_graphic

0xe044,	// (0x0006299f) wml_tabs_2_pane

0xe04d,	// (0x000629a8) wml_tabs_3_pane_ParamLimits

0xe04d,	// (0x000629a8) wml_tabs_3_pane

0xe05f,	// (0x000629ba) wml_tabs_4_pane_ParamLimits

0xe05f,	// (0x000629ba) wml_tabs_4_pane

0xe075,	// (0x000629d0) wml_tabs_5_pane_ParamLimits

0xe075,	// (0x000629d0) wml_tabs_5_pane

0xe08f,	// (0x000629ea) wml_tabs_pane_g2_ParamLimits

0xe08f,	// (0x000629ea) wml_tabs_pane_g2

0xe0a3,	// (0x000629fe) wml_tabs_pane_g3_ParamLimits

0xe0a3,	// (0x000629fe) wml_tabs_pane_g3

0x6d2d,	// (0x0005b688) wml_tabs_2_active_pane_ParamLimits

0x6d2d,	// (0x0005b688) wml_tabs_2_active_pane

0x6d3d,	// (0x0005b698) wml_tabs_2_passive_pane_ParamLimits

0x6d3d,	// (0x0005b698) wml_tabs_2_passive_pane

0x6d4d,	// (0x0005b6a8) wml_tabs_3_active_pane_cp_ParamLimits

0x6d4d,	// (0x0005b6a8) wml_tabs_3_active_pane_cp

0x6d5e,	// (0x0005b6b9) wml_tabs_3_passive_pane_ParamLimits

0x6d5e,	// (0x0005b6b9) wml_tabs_3_passive_pane

0x6d6f,	// (0x0005b6ca) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d6f,	// (0x0005b6ca) wml_tabs_3_passive_pane_cp

0x6d80,	// (0x0005b6db) tabs_4_active_pane

0x6d88,	// (0x0005b6e3) tabs_4_passive_pane

0x6d90,	// (0x0005b6eb) tabs_4_passive_pane_cp

0x6d98,	// (0x0005b6f3) tabs_4_passive_pane_cp2

0x62b7,	// (0x0005ac12) aid_height_text

0x5a1d,	// (0x0005a378) mup_volume_cont_pane_ParamLimits

0x5a1d,	// (0x0005a378) mup_volume_cont_pane

0x343f,	// (0x00057d9a) aid_size_cell_pinb

0x3449,	// (0x00057da4) aid_size_list_pinb

0x6c92,	// (0x0005b5ed) mup2_volume_cont_pane_ParamLimits

0x6c92,	// (0x0005b5ed) mup2_volume_cont_pane

0x6da0,	// (0x0005b6fb) mup2_volume_cont_pane_g1_ParamLimits

0x6da0,	// (0x0005b6fb) mup2_volume_cont_pane_g1

0x3064,	// (0x000579bf) aid_size_cell_touch_ParamLimits

0x3064,	// (0x000579bf) aid_size_cell_touch

0x3325,	// (0x00057c80) touch_pane_ParamLimits

0x3325,	// (0x00057c80) touch_pane

0x331b,	// (0x00057c76) main_rss2_pane

0xe0c0,	// (0x00062a1b) listscroll_rss2_pane

0xe0c9,	// (0x00062a24) rss2_navigation_pane

0xe0d1,	// (0x00062a2c) list_rss2_pane

0xc8c7,	// (0x00061222) scroll_pane_cp22

0xe0d9,	// (0x00062a34) rss2_navigation_pane_g1

0xe0e2,	// (0x00062a3d) rss2_navigation_pane_g2

0xe0ea,	// (0x00062a45) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00063fe7) rss2_navigation_pane_g

0xe0f2,	// (0x00062a4d) rss2_navigation_pane_t1

0x6dd9,	// (0x0005b734) rss2_list_single_pane_ParamLimits

0x6dd9,	// (0x0005b734) rss2_list_single_pane

0xe100,	// (0x00062a5b) rss2_list_single_pane_t2

0xe10e,	// (0x00062a69) rss2_list_single_pane_t3_ParamLimits

0xe10e,	// (0x00062a69) rss2_list_single_pane_t3

0xe12b,	// (0x00062a86) rss2_list_single_pane_t4

0x52a1,	// (0x00059bfc) smil_status_pane_g1

0x6509,	// (0x0005ae64) main_image2_pane_ParamLimits

0x6509,	// (0x0005ae64) main_image2_pane

0x69a5,	// (0x0005b300) main_camera2_pane_g9_ParamLimits

0x69a5,	// (0x0005b300) main_camera2_pane_g9

0x69f9,	// (0x0005b354) main_camera2_pane_t5_ParamLimits

0x69f9,	// (0x0005b354) main_camera2_pane_t5

0x6a0b,	// (0x0005b366) main_camera2_pane_t6_ParamLimits

0x6a0b,	// (0x0005b366) main_camera2_pane_t6

0x6e0a,	// (0x0005b765) main_image2_pane_g1_ParamLimits

0x6e0a,	// (0x0005b765) main_image2_pane_g1

0x6057,	// (0x0005a9b2) smil2_video_pane_ParamLimits

0x6057,	// (0x0005a9b2) smil2_video_pane

0x2f68,	// (0x000578c3) aid_zoom_text_primary_cp

0x32b6,	// (0x00057c11) popup_preview_fixed_window

0xc199,	// (0x00060af4) im_reading_pane_g1

0x68ef,	// (0x0005b24a) cams2_bc_adjust_pane_cp_ParamLimits

0x68ef,	// (0x0005b24a) cams2_bc_adjust_pane_cp

0x6a3b,	// (0x0005b396) cams2_bc_adjust_pane_ParamLimits

0x6a3b,	// (0x0005b396) cams2_bc_adjust_pane

0x07d7,	// (0x00055132) cams2_bc_adjust_pane_g1

0x6e16,	// (0x0005b771) cams2_slider_pane

0x6e1f,	// (0x0005b77a) cams2_slider_pane_g1

0x6e28,	// (0x0005b783) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00063fee) cams2_slider_pane_g

0x354f,	// (0x00057eaa) calc_display_pane_ParamLimits

0x356d,	// (0x00057ec8) calc_paper_pane_ParamLimits

0x3589,	// (0x00057ee4) grid_calc_pane_ParamLimits

0x5571,	// (0x00059ecc) popup_clock_digital_window_t1_ParamLimits

0xcd83,	// (0x000616de) main_image_pane_t1

0x3535,	// (0x00057e90) aid_size_cell_calc_ParamLimits

0x3535,	// (0x00057e90) aid_size_cell_calc

0x653a,	// (0x0005ae95) popup_blid_sat_info2_window_ParamLimits

0x653a,	// (0x0005ae95) popup_blid_sat_info2_window

0xe141,	// (0x00062a9c) aid_size_cell_blid

0xe149,	// (0x00062aa4) bg_popup_window_pane_cp07

0xe16c,	// (0x00062ac7) grid_popup_blid_pane

0xe176,	// (0x00062ad1) heading_pane_cp05_ParamLimits

0xe176,	// (0x00062ad1) heading_pane_cp05

0xe240,	// (0x00062b9b) cell_popup_blid_pane_ParamLimits

0xe240,	// (0x00062b9b) cell_popup_blid_pane

0xe264,	// (0x00062bbf) cell_popup_blid_pane_g1

0xe26c,	// (0x00062bc7) cell_popup_blid_pane_t1

0x6c58,	// (0x0005b5b3) mup2_indicator_pane_ParamLimits

0x6c58,	// (0x0005b5b3) mup2_indicator_pane

0xc0a0,	// (0x000609fb) mup2_visualizer_osc_pane

0xe022,	// (0x0006297d) mup2_visualizer_spec_pane_ParamLimits

0xe022,	// (0x0006297d) mup2_visualizer_spec_pane

0x6e42,	// (0x0005b79d) mup2_spec_half_pane

0x6e4b,	// (0x0005b7a6) mup2_spec_half_pane_cp

0x6e55,	// (0x0005b7b0) mup2_spec_bar_pane_ParamLimits

0x6e55,	// (0x0005b7b0) mup2_spec_bar_pane

0xdfb7,	// (0x00062912) mup2_spec_bar_pane_g1

0xdfc1,	// (0x0006291c) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00063f61) mup2_spec_bar_pane_g

0x6e74,	// (0x0005b7cf) mup2_osc_middle_pane

0xdfd3,	// (0x0006292e) mup2_visualizer_osc_pane_g1

0x1176,	// (0x00055ad1) popup_number_entry_window_t1_ParamLimits

0x1189,	// (0x00055ae4) popup_number_entry_window_t2_ParamLimits

0x119b,	// (0x00055af6) popup_number_entry_window_t3_ParamLimits

0x337c,	// (0x00057cd7) popup_number_entry_window_t5_ParamLimits

0x337c,	// (0x00057cd7) popup_number_entry_window_t5

0xf0ca,	// (0x00063a25) popup_number_entry_window_t_ParamLimits

0x11ad,	// (0x00055b08) text_title_cp2_ParamLimits

0x5d57,	// (0x0005a6b2) aid_hotspot_pointer_text2_pane

0x5de5,	// (0x0005a740) main_viewer_pane_g9_ParamLimits

0x5de5,	// (0x0005a740) main_viewer_pane_g9

0xc3d2,	// (0x00060d2d) cale_month_pane_t1_ParamLimits

0xc40f,	// (0x00060d6a) bg_cale_pane_ParamLimits

0xc427,	// (0x00060d82) list_cale_pane_ParamLimits

0xc438,	// (0x00060d93) listscroll_cale_day_pane_t1

0xc44a,	// (0x00060da5) scroll_pane_cp09_ParamLimits

0x5a58,	// (0x0005a3b3) main_mup_eq_pane_t1_ParamLimits

0x5a58,	// (0x0005a3b3) main_mup_eq_pane_t1

0x5a72,	// (0x0005a3cd) main_mup_eq_pane_t2_ParamLimits

0x5a72,	// (0x0005a3cd) main_mup_eq_pane_t2

0x5a8c,	// (0x0005a3e7) main_mup_eq_pane_t3_ParamLimits

0x5a8c,	// (0x0005a3e7) main_mup_eq_pane_t3

0x5aa4,	// (0x0005a3ff) main_mup_eq_pane_t4_ParamLimits

0x5aa4,	// (0x0005a3ff) main_mup_eq_pane_t4

0x5abc,	// (0x0005a417) main_mup_eq_pane_t5_ParamLimits

0x5abc,	// (0x0005a417) main_mup_eq_pane_t5

0x5ad4,	// (0x0005a42f) main_mup_eq_pane_t6_ParamLimits

0x5ad4,	// (0x0005a42f) main_mup_eq_pane_t6

0x5ae8,	// (0x0005a443) main_mup_eq_pane_t7_ParamLimits

0x5ae8,	// (0x0005a443) main_mup_eq_pane_t7

0x5afc,	// (0x0005a457) main_mup_eq_pane_t8_ParamLimits

0x5afc,	// (0x0005a457) main_mup_eq_pane_t8

0x5b12,	// (0x0005a46d) main_mup_eq_pane_t9_ParamLimits

0x5b12,	// (0x0005a46d) main_mup_eq_pane_t9

0x5b2a,	// (0x0005a485) main_mup_eq_pane_t10_ParamLimits

0x5b2a,	// (0x0005a485) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00063db0) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00063db0) main_mup_eq_pane_t

0x5be7,	// (0x0005a542) mup_equalizer_pane_cp5_ParamLimits

0x5bfd,	// (0x0005a558) mup_equalizer_pane_cp6_ParamLimits

0x5c15,	// (0x0005a570) mup_equalizer_pane_cp7_ParamLimits

0x331b,	// (0x00057c76) main_gallery_pane

0xdfdc,	// (0x00062937) smil2_volume_pane

0xdfe4,	// (0x0006293f) smil_status_volume_pane_g1_ParamLimits

0xdff7,	// (0x00062952) smil_status_volume_pane_g2_ParamLimits

0x6762,	// (0x0005b0bd) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00063f66) smil_status_volume_pane_g_ParamLimits

0xe149,	// (0x00062aa4) bg_popup_window_pane_cp07_ParamLimits

0xe157,	// (0x00062ab2) blid_firmament_pane

0x6e7d,	// (0x0005b7d8) aid_size_cell_gallery_ParamLimits

0x6e7d,	// (0x0005b7d8) aid_size_cell_gallery

0x6e8b,	// (0x0005b7e6) grid_gallery_pane_ParamLimits

0x6e8b,	// (0x0005b7e6) grid_gallery_pane

0x6e9b,	// (0x0005b7f6) cell_gallery_pane_ParamLimits

0x6e9b,	// (0x0005b7f6) cell_gallery_pane

0xe27a,	// (0x00062bd5) bg_cell_gallery_focus_pane_ParamLimits

0xe27a,	// (0x00062bd5) bg_cell_gallery_focus_pane

0xe28c,	// (0x00062be7) cell_gallery_pane_g1_ParamLimits

0xe28c,	// (0x00062be7) cell_gallery_pane_g1

0x6ee9,	// (0x0005b844) cell_gallery_pane_g2_ParamLimits

0x6ee9,	// (0x0005b844) cell_gallery_pane_g2

0x6ef6,	// (0x0005b851) cell_gallery_pane_g3_ParamLimits

0x6ef6,	// (0x0005b851) cell_gallery_pane_g3

0xe298,	// (0x00062bf3) cell_gallery_pane_g4_ParamLimits

0xe298,	// (0x00062bf3) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x00064014) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x00064014) cell_gallery_pane_g

0xe2a4,	// (0x00062bff) bg_cell_gallery_focus_pane_g1

0xe2ac,	// (0x00062c07) bg_cell_gallery_focus_pane_g2

0xe2b4,	// (0x00062c0f) bg_cell_gallery_focus_pane_g3

0xe2c5,	// (0x00062c20) bg_cell_gallery_focus_pane_g4

0xe2cd,	// (0x00062c28) bg_cell_gallery_focus_pane_g5

0xe2d5,	// (0x00062c30) bg_cell_gallery_focus_pane_g6

0xe2dd,	// (0x00062c38) bg_cell_gallery_focus_pane_g7

0xe2e5,	// (0x00062c40) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0006401d) bg_cell_gallery_focus_pane_g

0xe2ed,	// (0x00062c48) aid_firma_cardinal

0xe301,	// (0x00062c5c) blid_firmament_pane_t1

0xe318,	// (0x00062c73) blid_firmament_pane_t2

0xe32f,	// (0x00062c8a) blid_firmament_pane_t3

0xe346,	// (0x00062ca1) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0006402e) blid_firmament_pane_t

0xe35d,	// (0x00062cb8) blid_sat_info_pane

0xe36d,	// (0x00062cc8) blid_sat_info_pane_g1

0xe36d,	// (0x00062cc8) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00064037) blid_sat_info_pane_g

0xe377,	// (0x00062cd2) blid_sat_info_pane_t1

0xe385,	// (0x00062ce0) smil2_volume_content_pane

0xe38e,	// (0x00062ce9) smil2_volume_pane_g1

0xe2bc,	// (0x00062c17) smil2_volume_content_pane_g1

0xe396,	// (0x00062cf1) smil2_volume_content_pane_g2

0xe39f,	// (0x00062cfa) smil2_volume_content_pane_g3

0xe3a8,	// (0x00062d03) smil2_volume_content_pane_g4

0xe3b1,	// (0x00062d0c) smil2_volume_content_pane_g5

0xe3ba,	// (0x00062d15) smil2_volume_content_pane_g6

0xe3c3,	// (0x00062d1e) smil2_volume_content_pane_g7

0xe3cc,	// (0x00062d27) smil2_volume_content_pane_g8

0xe3d5,	// (0x00062d30) smil2_volume_content_pane_g9

0xe3de,	// (0x00062d39) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0006403c) smil2_volume_content_pane_g

0x3b6e,	// (0x000584c9) cale_week_day_heading_pane_t1_ParamLimits

0x3b89,	// (0x000584e4) cale_week_day_heading_pane_t2_ParamLimits

0x3ba4,	// (0x000584ff) cale_week_day_heading_pane_t3_ParamLimits

0x3bbf,	// (0x0005851a) cale_week_day_heading_pane_t4_ParamLimits

0x3bda,	// (0x00058535) cale_week_day_heading_pane_t5_ParamLimits

0x3bf5,	// (0x00058550) cale_week_day_heading_pane_t6_ParamLimits

0x3c10,	// (0x0005856b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00063b2c) cale_week_day_heading_pane_t_ParamLimits

0xc045,	// (0x000609a0) bg_cale_side_pane_ParamLimits

0x3c2b,	// (0x00058586) cale_week_time_pane_t1_ParamLimits

0x3c45,	// (0x000585a0) cale_week_time_pane_t2_ParamLimits

0x3c5f,	// (0x000585ba) cale_week_time_pane_t3_ParamLimits

0x3c79,	// (0x000585d4) cale_week_time_pane_t4_ParamLimits

0x3c93,	// (0x000585ee) cale_week_time_pane_t5_ParamLimits

0x3cad,	// (0x00058608) cale_week_time_pane_t6_ParamLimits

0x3ccb,	// (0x00058626) cale_week_time_pane_t7_ParamLimits

0x3ced,	// (0x00058648) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00063b3b) cale_week_time_pane_t_ParamLimits

0x3d11,	// (0x0005866c) cell_cale_week_pane_g2_ParamLimits

0xc045,	// (0x000609a0) bg_cale_side_pane_cp01_ParamLimits

0x506c,	// (0x000599c7) cale_month_week_pane_t1_ParamLimits

0x5085,	// (0x000599e0) cale_month_week_pane_t2_ParamLimits

0x509e,	// (0x000599f9) cale_month_week_pane_t3_ParamLimits

0x50b7,	// (0x00059a12) cale_month_week_pane_t4_ParamLimits

0x50d0,	// (0x00059a2b) cale_month_week_pane_t5_ParamLimits

0x50f1,	// (0x00059a4c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00063c10) cale_month_week_pane_t_ParamLimits

0x525e,	// (0x00059bb9) cell_cale_month_pane_g1_ParamLimits

0x331b,	// (0x00057c76) main_cale_event_viewer_pane

0x114c,	// (0x00055aa7) listscroll_cale_event_viewer_pane

0xe3e7,	// (0x00062d42) list_cale_ev_pane

0xe3ef,	// (0x00062d4a) scroll_pane_cp023

0xe3fb,	// (0x00062d56) field_cale_ev_pane_ParamLimits

0xe3fb,	// (0x00062d56) field_cale_ev_pane

0xe419,	// (0x00062d74) field_cale_ev_content_pane_ParamLimits

0xe419,	// (0x00062d74) field_cale_ev_content_pane

0xe425,	// (0x00062d80) field_cale_ev_pane_g1_ParamLimits

0xe425,	// (0x00062d80) field_cale_ev_pane_g1

0xe431,	// (0x00062d8c) field_cale_ev_pane_g2_ParamLimits

0xe431,	// (0x00062d8c) field_cale_ev_pane_g2

0xe449,	// (0x00062da4) field_cale_ev_pane_g3_ParamLimits

0xe449,	// (0x00062da4) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00064051) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00064051) field_cale_ev_pane_g

0xe461,	// (0x00062dbc) field_cale_ev_pane_t1_ParamLimits

0xe461,	// (0x00062dbc) field_cale_ev_pane_t1

0xe478,	// (0x00062dd3) field_cale_ev_content_pane_t1_ParamLimits

0xe478,	// (0x00062dd3) field_cale_ev_content_pane_t1

0xcc69,	// (0x000615c4) bg_button_pane_cp01

0x38ff,	// (0x0005825a) listscroll_cale_week_pane_ParamLimits

0xbff0,	// (0x0006094b) popup_toolbar_window_cp01

0xc016,	// (0x00060971) listscroll_cale_week_pane_t1_ParamLimits

0x38ff,	// (0x0005825a) listscroll_cale_day_pane_ParamLimits

0xbff0,	// (0x0006094b) popup_toolbar_window_cp02

0xc438,	// (0x00060d93) listscroll_cale_day_pane_t1_ParamLimits

0x38ff,	// (0x0005825a) main_cale_month_pane_ParamLimits

0x6641,	// (0x0005af9c) popup_toolbar_window_cp03_ParamLimits

0x6641,	// (0x0005af9c) popup_toolbar_window_cp03

0x5f6d,	// (0x0005a8c8) main_image_pane_g2_ParamLimits

0x5f6d,	// (0x0005a8c8) main_image_pane_g2

0x5f79,	// (0x0005a8d4) main_image_pane_g3_ParamLimits

0x5f79,	// (0x0005a8d4) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00063e42) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00063e42) main_image_pane_g

0xcd83,	// (0x000616de) main_image_pane_t1_ParamLimits

0x5f85,	// (0x0005a8e0) main_image_pane_t2_ParamLimits

0x5f85,	// (0x0005a8e0) main_image_pane_t2

0x5f97,	// (0x0005a8f2) main_image_pane_t3_ParamLimits

0x5f97,	// (0x0005a8f2) main_image_pane_t3

0x5fa9,	// (0x0005a904) main_image_pane_t4_ParamLimits

0x5fa9,	// (0x0005a904) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00063e49) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00063e49) main_image_pane_t

0x5fbb,	// (0x0005a916) popup_image_details_window_cp01

0x5fc5,	// (0x0005a920) popup_toobar_trans_pane_cp01_ParamLimits

0x5fc5,	// (0x0005a920) popup_toobar_trans_pane_cp01

0x6591,	// (0x0005aeec) popup_image_details_window_ParamLimits

0x6591,	// (0x0005aeec) popup_image_details_window

0x659f,	// (0x0005aefa) popup_image_focus_window

0x68e1,	// (0x0005b23c) camera2_autofocus_pane_ParamLimits

0x68e1,	// (0x0005b23c) camera2_autofocus_pane

0x114c,	// (0x00055aa7) bg_popup_sub_pane_cp06

0xe496,	// (0x00062df1) popup_image_focus_window_g1

0xe49e,	// (0x00062df9) popup_image_focus_window_g2

0xe4a6,	// (0x00062e01) popup_image_focus_window_g3

0xe4ae,	// (0x00062e09) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00064058) popup_image_focus_window_g

0xe4b6,	// (0x00062e11) popup_image_focus_window_t1

0xe4c4,	// (0x00062e1f) popup_image_focus_window_t2

0xe4d4,	// (0x00062e2f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00064061) popup_image_focus_window_t

0xe4e2,	// (0x00062e3d) camera2_autofocus_pane_g1

0xd9f7,	// (0x00062352) bg_tb_trans_pane_cp01

0xe4f0,	// (0x00062e4b) popup_image_details_window_g1

0xe503,	// (0x00062e5e) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00064073) popup_image_details_window_g

0xe52c,	// (0x00062e87) popup_image_details_window_t1

0xe53e,	// (0x00062e99) popup_image_details_window_t2

0xe557,	// (0x00062eb2) popup_image_details_window_t3

0xe56b,	// (0x00062ec6) popup_image_details_window_t4

0xe586,	// (0x00062ee1) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0006407a) popup_image_details_window_t

0xbec7,	// (0x00060822) bg_calc_paper_pane_ParamLimits

0x331b,	// (0x00057c76) grid_highlight_pane_cp013

0x3686,	// (0x00057fe1) list_calc_pane_ParamLimits

0x3698,	// (0x00057ff3) scroll_pane_cp024

0xbedb,	// (0x00060836) bg_calc_display_pane_ParamLimits

0x36a0,	// (0x00057ffb) calc_display_pane_t1_ParamLimits

0x36b5,	// (0x00058010) calc_display_pane_t2_ParamLimits

0x36ca,	// (0x00058025) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00063aac) calc_display_pane_t_ParamLimits

0x37a6,	// (0x00058101) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00063ac9) cell_calc_pane_g

0x37af,	// (0x0005810a) cell_calc_pane_t1

0xbf3a,	// (0x00060895) grid_highlight_pane_cp02_ParamLimits

0xbf50,	// (0x000608ab) toolbar_button_pane_cp01_ParamLimits

0xbf50,	// (0x000608ab) toolbar_button_pane_cp01

0xcdc8,	// (0x00061723) temp_image_control_pane_ParamLimits

0xcdc8,	// (0x00061723) temp_image_control_pane

0x6509,	// (0x0005ae64) main_mp3_pane

0xe5a0,	// (0x00062efb) temp_image_control_pane_g1_ParamLimits

0xe5a0,	// (0x00062efb) temp_image_control_pane_g1

0xe5ae,	// (0x00062f09) temp_image_control_pane_g2_ParamLimits

0xe5ae,	// (0x00062f09) temp_image_control_pane_g2

0xe5c0,	// (0x00062f1b) temp_image_control_pane_g3_ParamLimits

0xe5c0,	// (0x00062f1b) temp_image_control_pane_g3

0x6f33,	// (0x0005b88e) temp_image_control_pane_g4_ParamLimits

0x6f33,	// (0x0005b88e) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00064085) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00064085) temp_image_control_pane_g

0xe5a0,	// (0x00062efb) main_mp3_pane_g1

0x6f44,	// (0x0005b89f) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0006408e) main_mp3_pane_g

0xe603,	// (0x00062f5e) main_mp3_pane_t1

0xc0a8,	// (0x00060a03) main_camera_pane_g8_ParamLimits

0xc0a8,	// (0x00060a03) main_camera_pane_g8

0x3f9e,	// (0x000588f9) main_video_pane_g7_ParamLimits

0x3f9e,	// (0x000588f9) main_video_pane_g7

0x6a29,	// (0x0005b384) main_camera2_pane_t7_ParamLimits

0x6a29,	// (0x0005b384) main_camera2_pane_t7

0xc1f0,	// (0x00060b4b) scroll_pane_cp025_ParamLimits

0xc1f0,	// (0x00060b4b) scroll_pane_cp025

0xc204,	// (0x00060b5f) scroll_pane_cp026_ParamLimits

0xc204,	// (0x00060b5f) scroll_pane_cp026

0xc213,	// (0x00060b6e) wml_content_pane_ParamLimits

0x331b,	// (0x00057c76) main_touch_calib_pane

0x6fe8,	// (0x0005b943) main_touch_calib_pane_g1

0x6ff4,	// (0x0005b94f) main_touch_calib_pane_g2

0x7000,	// (0x0005b95b) main_touch_calib_pane_g3

0x700c,	// (0x0005b967) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000640ac) main_touch_calib_pane_g

0x7018,	// (0x0005b973) main_touch_calib_pane_t1

0x7031,	// (0x0005b98c) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000640b5) main_touch_calib_pane_t

0xc9a3,	// (0x000612fe) mup_progress_pane_cp02

0xc9d8,	// (0x00061333) navi_pane_g1

0xca93,	// (0x000613ee) navi_pane_mp_t3

0x6509,	// (0x0005ae64) main_mp3_pane_ParamLimits

0x667e,	// (0x0005afd9) navi_pane_ParamLimits

0xe5a0,	// (0x00062efb) main_mp3_pane_g1_ParamLimits

0x6f44,	// (0x0005b89f) main_mp3_pane_g2_ParamLimits

0x6f50,	// (0x0005b8ab) main_mp3_pane_g3_ParamLimits

0x6f50,	// (0x0005b8ab) main_mp3_pane_g3

0x6f5c,	// (0x0005b8b7) main_mp3_pane_g4_ParamLimits

0x6f5c,	// (0x0005b8b7) main_mp3_pane_g4

0xe5d0,	// (0x00062f2b) main_mp3_pane_g5_ParamLimits

0xe5d0,	// (0x00062f2b) main_mp3_pane_g5

0xe5de,	// (0x00062f39) main_mp3_pane_g6_ParamLimits

0xe5de,	// (0x00062f39) main_mp3_pane_g6

0xe5eb,	// (0x00062f46) main_mp3_pane_g7_ParamLimits

0xe5eb,	// (0x00062f46) main_mp3_pane_g7

0xe5f7,	// (0x00062f52) main_mp3_pane_g8_ParamLimits

0xe5f7,	// (0x00062f52) main_mp3_pane_g8

0xf733,	// (0x0006408e) main_mp3_pane_g_ParamLimits

0x6f68,	// (0x0005b8c3) main_mp3_pane_t2

0x6f78,	// (0x0005b8d3) main_mp3_pane_t3

0xe611,	// (0x00062f6c) main_mp3_pane_t4

0xe61f,	// (0x00062f7a) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0006409f) main_mp3_pane_t

0xe62d,	// (0x00062f88) mup_progress_pane_cp01

0x2f68,	// (0x000578c3) aid_zoom_text_secondary2

0xe3e7,	// (0x00062d42) list_cale_ev2_pane

0xe3ef,	// (0x00062d4a) scroll_pane_cp023_ParamLimits

0x708c,	// (0x0005b9e7) field_cale_ev2_pane_ParamLimits

0x708c,	// (0x0005b9e7) field_cale_ev2_pane

0xe635,	// (0x00062f90) field_cale_ev2_pane_g1_ParamLimits

0xe635,	// (0x00062f90) field_cale_ev2_pane_g1

0xe641,	// (0x00062f9c) field_cale_ev2_pane_g2_ParamLimits

0xe641,	// (0x00062f9c) field_cale_ev2_pane_g2

0xe659,	// (0x00062fb4) field_cale_ev2_pane_g3_ParamLimits

0xe659,	// (0x00062fb4) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000640c0) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000640c0) field_cale_ev2_pane_g

0x70b5,	// (0x0005ba10) field_cale_ev2_pane_t1_ParamLimits

0x70b5,	// (0x0005ba10) field_cale_ev2_pane_t1

0x70cc,	// (0x0005ba27) field_cale_ev2_pane_t2_ParamLimits

0x70cc,	// (0x0005ba27) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000640c9) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000640c9) field_cale_ev2_pane_t

0x5e4d,	// (0x0005a7a8) main_postcard_pane_g5_ParamLimits

0x5e4d,	// (0x0005a7a8) main_postcard_pane_g5

0x5e5b,	// (0x0005a7b6) main_postcard_pane_g6_ParamLimits

0x5e5b,	// (0x0005a7b6) main_postcard_pane_g6

0x3de8,	// (0x00058743) camera2_autofocus_pane_cp_ParamLimits

0x3de8,	// (0x00058743) camera2_autofocus_pane_cp

0x6509,	// (0x0005ae64) main_mup3_pane

0x70e1,	// (0x0005ba3c) main_mup3_pane_g1_ParamLimits

0x70e1,	// (0x0005ba3c) main_mup3_pane_g1

0x7102,	// (0x0005ba5d) main_mup3_pane_g2_ParamLimits

0x7102,	// (0x0005ba5d) main_mup3_pane_g2

0x717a,	// (0x0005bad5) main_mup3_pane_g3_ParamLimits

0x717a,	// (0x0005bad5) main_mup3_pane_g3

0x71bd,	// (0x0005bb18) main_mup3_pane_g4_ParamLimits

0x71bd,	// (0x0005bb18) main_mup3_pane_g4

0x7200,	// (0x0005bb5b) main_mup3_pane_g5_ParamLimits

0x7200,	// (0x0005bb5b) main_mup3_pane_g5

0x7243,	// (0x0005bb9e) main_mup3_pane_g6_ParamLimits

0x7243,	// (0x0005bb9e) main_mup3_pane_g6

0xe69d,	// (0x00062ff8) main_mup3_pane_g7_ParamLimits

0xe69d,	// (0x00062ff8) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000640d9) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000640d9) main_mup3_pane_g

0x72b9,	// (0x0005bc14) main_mup3_pane_t1_ParamLimits

0x72b9,	// (0x0005bc14) main_mup3_pane_t1

0x7328,	// (0x0005bc83) main_mup3_pane_t2_ParamLimits

0x7328,	// (0x0005bc83) main_mup3_pane_t2

0x73f1,	// (0x0005bd4c) main_mup3_pane_t4_ParamLimits

0x73f1,	// (0x0005bd4c) main_mup3_pane_t4

0x743f,	// (0x0005bd9a) main_mup3_pane_t5_ParamLimits

0x743f,	// (0x0005bd9a) main_mup3_pane_t5

0x74ef,	// (0x0005be4a) main_mup3_pane_t6_ParamLimits

0x74ef,	// (0x0005be4a) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000640ea) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000640ea) main_mup3_pane_t

0x759b,	// (0x0005bef6) mup3_progress_pane_ParamLimits

0x759b,	// (0x0005bef6) mup3_progress_pane

0x7619,	// (0x0005bf74) popup_mup3_control_window_ParamLimits

0x7619,	// (0x0005bf74) popup_mup3_control_window

0xe6ab,	// (0x00063006) popup_mup3_text_window

0x7632,	// (0x0005bf8d) mup3_progress_pane_t1

0x7651,	// (0x0005bfac) mup3_progress_pane_t2

0xe6b3,	// (0x0006300e) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000640f7) mup3_progress_pane_t

0xe6d0,	// (0x0006302b) mup_progress_pane_cp03

0x114c,	// (0x00055aa7) bg_tb_trans_pane_cp04

0x7670,	// (0x0005bfcb) mup3_volume_pane

0x7678,	// (0x0005bfd3) popup_mup3_control_window_g1

0x7681,	// (0x0005bfdc) mup3_volume_pane_g1

0x768a,	// (0x0005bfe5) mup3_volume_pane_g2

0x7693,	// (0x0005bfee) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000640fe) mup3_volume_pane_g

0x114c,	// (0x00055aa7) bg_tb_trans_pane_cp03

0xe6e0,	// (0x0006303b) popup_mup3_text_window_g1

0xe6e8,	// (0x00063043) popup_mup3_text_window_t1

0xbf23,	// (0x0006087e) list_calc_item_pane_g1_ParamLimits

0xe0b7,	// (0x00062a12) mup_volume_pane_cp_g1

0x704a,	// (0x0005b9a5) main_touch_calib_pane_t3

0x7060,	// (0x0005b9bb) main_touch_calib_pane_t4

0x7076,	// (0x0005b9d1) main_touch_calib_pane_t5

0x3050,	// (0x000579ab) aid_cell_size_toolbar2

0x3058,	// (0x000579b3) aid_popup3_width_pane

0x2f60,	// (0x000578bb) aid_zoom_text_msg_primary

0x3dbd,	// (0x00058718) vorec_t7

0xbee7,	// (0x00060842) bg_calc_paper_pane_g1_ParamLimits

0xbef3,	// (0x0006084e) bg_calc_paper_pane_g2_ParamLimits

0xbeff,	// (0x0006085a) bg_calc_paper_pane_g3_ParamLimits

0xbf0b,	// (0x00060866) bg_calc_paper_pane_g4_ParamLimits

0xbf17,	// (0x00060872) bg_calc_paper_pane_g5_ParamLimits

0x3709,	// (0x00058064) bg_calc_paper_pane_g6_ParamLimits

0x371a,	// (0x00058075) bg_calc_paper_pane_g7_ParamLimits

0x372b,	// (0x00058086) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00063ab3) bg_calc_paper_pane_g_ParamLimits

0x373c,	// (0x00058097) calc_bg_paper_pane_g9_ParamLimits

0x3ecf,	// (0x0005882a) image_qvga_pane_ParamLimits

0x3ecf,	// (0x0005882a) image_qvga_pane

0xbe16,	// (0x00060771) bg_popup_sub_pane_cp04_ParamLimits

0xccff,	// (0x0006165a) popup_mup_playback_window_g1_ParamLimits

0xcd0b,	// (0x00061666) popup_mup_playback_window_t1_ParamLimits

0xcd20,	// (0x0006167b) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00063e3d) popup_mup_playback_window_t_ParamLimits

0x6b58,	// (0x0005b4b3) main_mup2_pane_g3_ParamLimits

0x6b58,	// (0x0005b4b3) main_mup2_pane_g3

0x429b,	// (0x00058bf6) popup_toolbar_window_cp04

0xd102,	// (0x00061a5d) popup_call2_audio_second_window_g3_ParamLimits

0xd102,	// (0x00061a5d) popup_call2_audio_second_window_g3

0xd50c,	// (0x00061e67) popup_call2_audio_first_window_g4_ParamLimits

0xd50c,	// (0x00061e67) popup_call2_audio_first_window_g4

0xdbe3,	// (0x0006253e) popup_call2_audio_in_window_g4_ParamLimits

0xdbe3,	// (0x0006253e) popup_call2_audio_in_window_g4

0x5f60,	// (0x0005a8bb) aid_area_sk_bg_cut_ParamLimits

0x5f60,	// (0x0005a8bb) aid_area_sk_bg_cut

0xcd35,	// (0x00061690) aid_area_sk_bg_cut_2_ParamLimits

0xcd35,	// (0x00061690) aid_area_sk_bg_cut_2

0x6ed9,	// (0x0005b834) aid_placing_details_win

0x6ee1,	// (0x0005b83c) aid_placing_details_win_2

0xe4e2,	// (0x00062e3d) camera2_autofocus_pane_g1_ParamLimits

0x32a7,	// (0x00057c02) popup_fixed_preview_cale_window_ParamLimits

0x32a7,	// (0x00057c02) popup_fixed_preview_cale_window

0xcb11,	// (0x0006146c) navi_slider_pane_g3

0xcb1a,	// (0x00061475) navi_slider_pane_g4

0xcb23,	// (0x0006147e) navi_slider_pane_g5

0xcb11,	// (0x0006146c) navi_slider_pane_g6

0x57ec,	// (0x0005a147) navi_slider_pane_g7

0xcc36,	// (0x00061591) mup_scale_pane_g3

0xcc3f,	// (0x0006159a) mup_scale_pane_g4

0xcc48,	// (0x000615a3) mup_scale_pane_g5

0x5c2d,	// (0x0005a588) mup_scale_pane_g6

0x5c36,	// (0x0005a591) mup_scale_pane_g7

0xcb11,	// (0x0006146c) cams2_slider_pane_g3

0xe139,	// (0x00062a94) cams2_slider_pane_g4

0x6e31,	// (0x0005b78c) cams2_slider_pane_g5

0xcb11,	// (0x0006146c) cams2_slider_pane_g6

0x6e39,	// (0x0005b794) cams2_slider_pane_g7

0xe36d,	// (0x00062cc8) camera2_autofocus_pane_cp_g1

0xdf50,	// (0x000628ab) bg_popup_preview_window_pane_cp02_ParamLimits

0xdf50,	// (0x000628ab) bg_popup_preview_window_pane_cp02

0xe6f6,	// (0x00063051) list_fp_cale_pane_ParamLimits

0xe6f6,	// (0x00063051) list_fp_cale_pane

0xe702,	// (0x0006305d) popup_fixed_preview_cale_window_t1_ParamLimits

0xe702,	// (0x0006305d) popup_fixed_preview_cale_window_t1

0x769c,	// (0x0005bff7) popup_fixed_preview_cale_window_t2_ParamLimits

0x769c,	// (0x0005bff7) popup_fixed_preview_cale_window_t2

0x76b1,	// (0x0005c00c) popup_fixed_preview_cale_window_t3_ParamLimits

0x76b1,	// (0x0005c00c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00064105) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00064105) popup_fixed_preview_cale_window_t

0x76c6,	// (0x0005c021) list_single_fp_cale_pane_ParamLimits

0x76c6,	// (0x0005c021) list_single_fp_cale_pane

0xe720,	// (0x0006307b) list_single_fp_cale_pane_g1_ParamLimits

0xe720,	// (0x0006307b) list_single_fp_cale_pane_g1

0xe72c,	// (0x00063087) list_single_fp_cale_pane_g2_ParamLimits

0xe72c,	// (0x00063087) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0006410c) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0006410c) list_single_fp_cale_pane_g

0xe745,	// (0x000630a0) list_single_fp_cale_pane_t1_ParamLimits

0xe745,	// (0x000630a0) list_single_fp_cale_pane_t1

0xe757,	// (0x000630b2) list_single_fp_cale_pane_t2_ParamLimits

0xe757,	// (0x000630b2) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x00064113) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x00064113) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x331b,	// (0x00057c76) main_dialer_pane

0x76d9,	// (0x0005c034) aid_cell_size_keypad

0x76e3,	// (0x0005c03e) dialer_ne_pane

0x76ed,	// (0x0005c048) grid_dialer_command_1_pane

0x76f5,	// (0x0005c050) grid_dialer_command_2_pane

0x76fd,	// (0x0005c058) grid_dialer_keypad_pane

0x770f,	// (0x0005c06a) bg_popup_call_pane_cp06_ParamLimits

0x770f,	// (0x0005c06a) bg_popup_call_pane_cp06

0x771b,	// (0x0005c076) dialer_ne_clear_pane_ParamLimits

0x771b,	// (0x0005c076) dialer_ne_clear_pane

0xe78a,	// (0x000630e5) dialer_ne_pane_g1

0xe792,	// (0x000630ed) dialer_ne_pane_t1_ParamLimits

0xe792,	// (0x000630ed) dialer_ne_pane_t1

0x7727,	// (0x0005c082) dialer_ne_pane_t2_ParamLimits

0x7727,	// (0x0005c082) dialer_ne_pane_t2

0x7744,	// (0x0005c09f) dialer_ne_pane_t3_ParamLimits

0x7744,	// (0x0005c09f) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00064118) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00064118) dialer_ne_pane_t

0x7768,	// (0x0005c0c3) dialer_ne_pane_t3_copy1_ParamLimits

0x7768,	// (0x0005c0c3) dialer_ne_pane_t3_copy1

0x778c,	// (0x0005c0e7) cell_dialer_keypad_pane_ParamLimits

0x778c,	// (0x0005c0e7) cell_dialer_keypad_pane

0x77a3,	// (0x0005c0fe) cell_dialer_command_1_pane_ParamLimits

0x77a3,	// (0x0005c0fe) cell_dialer_command_1_pane

0x77b9,	// (0x0005c114) cell_dialer_command_2_pane_ParamLimits

0x77b9,	// (0x0005c114) cell_dialer_command_2_pane

0xe7a4,	// (0x000630ff) bg_button_pane_cp02_ParamLimits

0xe7a4,	// (0x000630ff) bg_button_pane_cp02

0x77c8,	// (0x0005c123) cell_dialer_keypad_pane_g1_ParamLimits

0x77c8,	// (0x0005c123) cell_dialer_keypad_pane_g1

0xe7a4,	// (0x000630ff) bg_button_pane_cp03_ParamLimits

0xe7a4,	// (0x000630ff) bg_button_pane_cp03

0x77dd,	// (0x0005c138) cell_dialer_command_1_pane_g1_ParamLimits

0x77dd,	// (0x0005c138) cell_dialer_command_1_pane_g1

0xe7b0,	// (0x0006310b) bg_button_pane_cp04

0x77f1,	// (0x0005c14c) cell_dialer_command_2_pane_g1

0xc0a0,	// (0x000609fb) bg_button_pane_cp06

0xe7b8,	// (0x00063113) dialer_ne_clear_pane_g1

0xc9e4,	// (0x0006133f) navi_pane_g2

0xca12,	// (0x0006136d) navi_pane_g3

0x0002,

0xf3e5,	// (0x00063d40) navi_pane_g

0xcaa1,	// (0x000613fc) navi_pane_mv_g2

0xcac8,	// (0x00061423) navi_pane_mv_g5

0x57b7,	// (0x0005a112) navi_pane_mv_t1

0xbedb,	// (0x00060836) main_clock2_pane

0x7831,	// (0x0005c18c) main_clock2_list_pane_ParamLimits

0x7831,	// (0x0005c18c) main_clock2_list_pane

0x7859,	// (0x0005c1b4) main_clock2_pane_t1_ParamLimits

0x7859,	// (0x0005c1b4) main_clock2_pane_t1

0x787b,	// (0x0005c1d6) main_clock2_pane_t2_ParamLimits

0x787b,	// (0x0005c1d6) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00064124) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00064124) main_clock2_pane_t

0x78d6,	// (0x0005c231) popup_clock_analogue_window_cp03_ParamLimits

0x78d6,	// (0x0005c231) popup_clock_analogue_window_cp03

0x78f4,	// (0x0005c24f) popup_clock_digital_window_cp02_ParamLimits

0x78f4,	// (0x0005c24f) popup_clock_digital_window_cp02

0x7961,	// (0x0005c2bc) main_clock2_list_single_pane_ParamLimits

0x7961,	// (0x0005c2bc) main_clock2_list_single_pane

0xc0a0,	// (0x000609fb) list_highlight_pane_cp05

0xe7f6,	// (0x00063151) main_clock2_list_single_pane_t1

0x429b,	// (0x00058bf6) popup_toolbar_window_cp04_ParamLimits

0x6f03,	// (0x0005b85e) camera2_autofocus_pane_g2_ParamLimits

0x6f03,	// (0x0005b85e) camera2_autofocus_pane_g2

0x6f0f,	// (0x0005b86a) camera2_autofocus_pane_g3_ParamLimits

0x6f0f,	// (0x0005b86a) camera2_autofocus_pane_g3

0x6f1b,	// (0x0005b876) camera2_autofocus_pane_g4_ParamLimits

0x6f1b,	// (0x0005b876) camera2_autofocus_pane_g4

0x6f27,	// (0x0005b882) camera2_autofocus_pane_g5_ParamLimits

0x6f27,	// (0x0005b882) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00064068) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00064068) camera2_autofocus_pane_g

0xe67d,	// (0x00062fd8) camera2_autofocus_pane_cp_g2

0xe685,	// (0x00062fe0) camera2_autofocus_pane_cp_g3

0xe68d,	// (0x00062fe8) camera2_autofocus_pane_cp_g4

0xe695,	// (0x00062ff0) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000640ce) camera2_autofocus_pane_cp_g

0x7707,	// (0x0005c062) popup_dialer_spcha_window

0x114c,	// (0x00055aa7) bg_popup_sub_pane_cp07

0xe804,	// (0x0006315f) list_spcha_pane

0xe80c,	// (0x00063167) list_single_spcha_pane_ParamLimits

0xe80c,	// (0x00063167) list_single_spcha_pane

0x114c,	// (0x00055aa7) list_highlight_pane_cp06

0xe81d,	// (0x00063178) list_single_spcha_pane_t1

0xd935,	// (0x00062290) popup_call2_audio_out_window_g4_ParamLimits

0xd935,	// (0x00062290) popup_call2_audio_out_window_g4

0x331b,	// (0x00057c76) main_imed2_pane

0x65a7,	// (0x0005af02) popup_imed_adjust2_window

0x65ba,	// (0x0005af15) popup_imed_trans_window_ParamLimits

0x65ba,	// (0x0005af15) popup_imed_trans_window

0xe1a2,	// (0x00062afd) popup_blid_sat_info2_window_t1

0xe1b0,	// (0x00062b0b) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00063ffd) popup_blid_sat_info2_window_t

0x7a0a,	// (0x0005c365) aid_size_cell_colour_35

0x7a24,	// (0x0005c37f) aid_size_cell_colour_112

0x7a3b,	// (0x0005c396) aid_size_cell_effect

0xd9f7,	// (0x00062352) bg_tb_trans_pane_cp02

0xda05,	// (0x00062360) heading_imed_pane

0x7a55,	// (0x0005c3b0) listscroll_imed_pane

0xe82b,	// (0x00063186) heading_imed_pane_g1

0xe833,	// (0x0006318e) heading_imed_pane_t1

0xe841,	// (0x0006319c) grid_imed_colour_35_pane_ParamLimits

0xe841,	// (0x0006319c) grid_imed_colour_35_pane

0x7a61,	// (0x0005c3bc) grid_imed_effect_pane

0xe858,	// (0x000631b3) list_imed_aspect_pane

0x7a71,	// (0x0005c3cc) scroll_pane_cp027_ParamLimits

0x7a71,	// (0x0005c3cc) scroll_pane_cp027

0x7a7d,	// (0x0005c3d8) cell_imed_effect_pane_ParamLimits

0x7a7d,	// (0x0005c3d8) cell_imed_effect_pane

0xe860,	// (0x000631bb) cell_imed_colour_pane_ParamLimits

0xe860,	// (0x000631bb) cell_imed_colour_pane

0xe8a2,	// (0x000631fd) cell_imed_colour_pane_g1_ParamLimits

0xe8a2,	// (0x000631fd) cell_imed_colour_pane_g1

0xe8b3,	// (0x0006320e) hgihlgiht_grid_pane_cp016_ParamLimits

0xe8b3,	// (0x0006320e) hgihlgiht_grid_pane_cp016

0x7a95,	// (0x0005c3f0) cell_imed_effect_pane_g1

0x7a9d,	// (0x0005c3f8) grid_highlight_pane_cp017

0xe8c4,	// (0x0006321f) list_imed_single_pane_ParamLimits

0xe8c4,	// (0x0006321f) list_imed_single_pane

0x114c,	// (0x00055aa7) list_highlight_pane_cp07

0xe8d9,	// (0x00063234) list_imed_aspect_pane_comp1_t1

0xdf5c,	// (0x000628b7) bg_tb_trans_pane_cp05

0xe8fb,	// (0x00063256) popup_imed_adjust2_window_g1

0xe922,	// (0x0006327d) popup_imed_adjust2_window_t1

0xe93a,	// (0x00063295) slider_imed_adjust_pane

0xe94e,	// (0x000632a9) slider_imed_adjust_pane_g1

0xe95e,	// (0x000632b9) slider_imed_adjust_pane_g2

0xe96e,	// (0x000632c9) slider_imed_adjust_pane_g3

0xe97f,	// (0x000632da) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00064141) slider_imed_adjust_pane_g

0x7aa6,	// (0x0005c401) aid_size_cell_clipart2

0x7ab2,	// (0x0005c40d) grid_imed_clipart_pane

0xe990,	// (0x000632eb) scroll_pane_cp031

0x7abc,	// (0x0005c417) cell_imed_clipart_pane_ParamLimits

0x7abc,	// (0x0005c417) cell_imed_clipart_pane

0x7ade,	// (0x0005c439) cell_imed_clipart_pane_g1

0x114c,	// (0x00055aa7) grid_highlight_pane_cp014

0x783d,	// (0x0005c198) main_clock2_pane_g1_ParamLimits

0x783d,	// (0x0005c198) main_clock2_pane_g1

0x790c,	// (0x0005c267) aid_call2_pane_cp10

0x791e,	// (0x0005c279) aid_call_pane_cp10

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g1

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g2

0x7930,	// (0x0005c28b) popup_clock_analogue_window_cp10_g3

0x7930,	// (0x0005c28b) popup_clock_analogue_window_cp10_g4

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0006412f) popup_clock_analogue_window_cp10_g

0x7942,	// (0x0005c29d) popup_clock_analogue_window_cp10_t1

0x7973,	// (0x0005c2ce) clock_digital_number_pane_cp10_ParamLimits

0x7973,	// (0x0005c2ce) clock_digital_number_pane_cp10

0x798b,	// (0x0005c2e6) clock_digital_number_pane_cp11_ParamLimits

0x798b,	// (0x0005c2e6) clock_digital_number_pane_cp11

0x79a3,	// (0x0005c2fe) clock_digital_number_pane_cp12_ParamLimits

0x79a3,	// (0x0005c2fe) clock_digital_number_pane_cp12

0x79bb,	// (0x0005c316) clock_digital_number_pane_cp13_ParamLimits

0x79bb,	// (0x0005c316) clock_digital_number_pane_cp13

0x79d3,	// (0x0005c32e) clock_digital_separator_pane_cp10_ParamLimits

0x79d3,	// (0x0005c32e) clock_digital_separator_pane_cp10

0x79eb,	// (0x0005c346) popup_clock_digital_window_cp02_t1_ParamLimits

0x79eb,	// (0x0005c346) popup_clock_digital_window_cp02_t1

0xbe0e,	// (0x00060769) clock_digital_number_pane_cp10_g1

0xbe0e,	// (0x00060769) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0006414a) clock_digital_number_pane_cp10_g

0xbe0e,	// (0x00060769) clock_digital_separator_pane_cp10_g1

0xbe0e,	// (0x00060769) clock_digital_separator_pane_g2_cp10

0xcad0,	// (0x0006142b) navi_pane_vded_g4

0xcad9,	// (0x00061434) navi_pane_vded_g5

0xcae2,	// (0x0006143d) navi_pane_vded_t1

0x331b,	// (0x00057c76) main_vded_pane

0x7ae7,	// (0x0005c442) main_vded_pane_g1

0x7af3,	// (0x0005c44e) main_vded_pane_g2

0x7afd,	// (0x0005c458) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0006414f) main_vded_pane_g

0x7b07,	// (0x0005c462) main_vded_pane_t1

0x7b15,	// (0x0005c470) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00064156) main_vded_pane_t

0x7b23,	// (0x0005c47e) vded_slider_pane

0x7b2d,	// (0x0005c488) vded_video_pane

0xe998,	// (0x000632f3) vded_video_pane_g1

0x7b37,	// (0x0005c492) vded_video_pane_g2

0xe36d,	// (0x00062cc8) vded_video_pane_g3

0x0002,

0xf800,	// (0x0006415b) vded_video_pane_g

0xe9a2,	// (0x000632fd) vded_slider_pane_g1

0xe0b7,	// (0x00062a12) vded_slider_pane_g2

0xe9ab,	// (0x00063306) vded_slider_pane_g3

0xe9b4,	// (0x0006330f) vded_slider_pane_g4

0xe9bd,	// (0x00063318) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00064162) vded_slider_pane_g

0x760b,	// (0x0005bf66) mup3_rocker_pane_ParamLimits

0x760b,	// (0x0005bf66) mup3_rocker_pane

0x7b40,	// (0x0005c49b) mup3_control_keys_pane_g1

0x7b48,	// (0x0005c4a3) mup3_control_keys_pane_g2

0x7b50,	// (0x0005c4ab) mup3_control_keys_pane_g3

0x7b58,	// (0x0005c4b3) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0006416d) mup3_control_keys_pane_g

0x32cf,	// (0x00057c2a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x32cf,	// (0x00057c2a) popup_toolbar2_fixed_window_cp01

0x7625,	// (0x0005bf80) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7625,	// (0x0005bf80) popup_toolbar2_fixed_window_cp02

0xd274,	// (0x00061bcf) popup_call2_audio_second_window_t4_ParamLimits

0xd274,	// (0x00061bcf) popup_call2_audio_second_window_t4

0xd7a2,	// (0x000620fd) popup_call2_audio_first_window_t6_ParamLimits

0xd7a2,	// (0x000620fd) popup_call2_audio_first_window_t6

0xda90,	// (0x000623eb) popup_call2_audio_out_window_t6_ParamLimits

0xda90,	// (0x000623eb) popup_call2_audio_out_window_t6

0x331b,	// (0x00057c76) main_vitu_pane

0x7b68,	// (0x0005c4c3) aid_size_cell_itu_ParamLimits

0x7b68,	// (0x0005c4c3) aid_size_cell_itu

0x04a2,	// (0x00054dfd) bg_popup_window_pane_cp08_ParamLimits

0x04a2,	// (0x00054dfd) bg_popup_window_pane_cp08

0x7b76,	// (0x0005c4d1) field_vitu_entry_pane_ParamLimits

0x7b76,	// (0x0005c4d1) field_vitu_entry_pane

0x7b85,	// (0x0005c4e0) grid_vitu_function_pane_ParamLimits

0x7b85,	// (0x0005c4e0) grid_vitu_function_pane

0x7b95,	// (0x0005c4f0) grid_vitu_itu_pane_ParamLimits

0x7b95,	// (0x0005c4f0) grid_vitu_itu_pane

0x7ba5,	// (0x0005c500) cell_vitu_itu_pane_ParamLimits

0x7ba5,	// (0x0005c500) cell_vitu_itu_pane

0x7bba,	// (0x0005c515) cell_vitu_function_pane_ParamLimits

0x7bba,	// (0x0005c515) cell_vitu_function_pane

0xd9f7,	// (0x00062352) bg_popup_sub_pane_cp08_ParamLimits

0xd9f7,	// (0x00062352) bg_popup_sub_pane_cp08

0x7bcc,	// (0x0005c527) field_vitu_entry_pane_t1_ParamLimits

0x7bcc,	// (0x0005c527) field_vitu_entry_pane_t1

0xe9de,	// (0x00063339) field_vitu_entry_pane_t2_ParamLimits

0xe9de,	// (0x00063339) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0006417b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0006417b) field_vitu_entry_pane_t

0xe9fb,	// (0x00063356) bg_button_pane_cp05_ParamLimits

0xe9fb,	// (0x00063356) bg_button_pane_cp05

0x7be8,	// (0x0005c543) cell_vitu_itu_pane_g1

0x7c00,	// (0x0005c55b) cell_vitu_itu_pane_t1_ParamLimits

0x7c00,	// (0x0005c55b) cell_vitu_itu_pane_t1

0x7c12,	// (0x0005c56d) cell_vitu_itu_pane_t2_ParamLimits

0x7c12,	// (0x0005c56d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00064180) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00064180) cell_vitu_itu_pane_t

0xea09,	// (0x00063364) bg_button_pane_cp07

0x7c47,	// (0x0005c5a2) cell_vitu_function_pane_g1

0x35ad,	// (0x00057f08) main_calc_pane_g1

0x308c,	// (0x000579e7) aid_visual_content_pane

0x331b,	// (0x00057c76) main_vradio_pane

0x7c50,	// (0x0005c5ab) main_vradio_pane_g1_ParamLimits

0x7c50,	// (0x0005c5ab) main_vradio_pane_g1

0xea13,	// (0x0006336e) main_vradio_pane_g2_ParamLimits

0xea13,	// (0x0006336e) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00064187) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00064187) main_vradio_pane_g

0x7c60,	// (0x0005c5bb) main_vradio_pane_t1_ParamLimits

0x7c60,	// (0x0005c5bb) main_vradio_pane_t1

0x7c72,	// (0x0005c5cd) main_vradio_pane_t2_ParamLimits

0x7c72,	// (0x0005c5cd) main_vradio_pane_t2

0xea20,	// (0x0006337b) main_vradio_pane_t3_ParamLimits

0xea20,	// (0x0006337b) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0006418c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0006418c) main_vradio_pane_t

0x7c84,	// (0x0005c5df) vradio_rocker_control_pane_ParamLimits

0x7c84,	// (0x0005c5df) vradio_rocker_control_pane

0x7c90,	// (0x0005c5eb) vradio_station_info_pane_ParamLimits

0x7c90,	// (0x0005c5eb) vradio_station_info_pane

0xea34,	// (0x0006338f) vradio_frequency_info_pane_ParamLimits

0xea34,	// (0x0006338f) vradio_frequency_info_pane

0xe36d,	// (0x00062cc8) vradio_station_info_pane_g1

0xea43,	// (0x0006339e) vradio_station_info_pane_t1_ParamLimits

0xea43,	// (0x0006339e) vradio_station_info_pane_t1

0xea65,	// (0x000633c0) vradio_station_info_pane_t2_ParamLimits

0xea65,	// (0x000633c0) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00064193) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00064193) vradio_station_info_pane_t

0xea77,	// (0x000633d2) vradio_tuning_pane

0xea7f,	// (0x000633da) vradio_rocker_control_pane_g1

0xea87,	// (0x000633e2) vradio_rocker_control_pane_g2

0xea8f,	// (0x000633ea) vradio_rocker_control_pane_g3

0xea97,	// (0x000633f2) vradio_rocker_control_pane_g4

0xea9f,	// (0x000633fa) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00064198) vradio_rocker_control_pane_g

0x7c9f,	// (0x0005c5fa) vradio_frequency_info_pane_g1

0xeaa7,	// (0x00063402) vradio_frequency_info_pane_t1_ParamLimits

0xeaa7,	// (0x00063402) vradio_frequency_info_pane_t1

0x7ca9,	// (0x0005c604) vradio_tuning_pane_g1

0x7cb2,	// (0x0005c60d) vradio_tuning_pane_t1

0x30d5,	// (0x00057a30) area_side_right_pane_ParamLimits

0x30d5,	// (0x00057a30) area_side_right_pane

0xdf17,	// (0x00062872) status_small_pane_g1

0xdf1f,	// (0x0006287a) status_small_pane_g2

0xdf28,	// (0x00062883) status_small_pane_g3

0xdf31,	// (0x0006288c) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00063f53) status_small_pane_g

0xdf3a,	// (0x00062895) status_small_pane_t1

0x331b,	// (0x00057c76) main_video3_pane

0xeabb,	// (0x00063416) cams_zoom_vslider_pane

0xeac3,	// (0x0006341e) image3_wide_pane_ParamLimits

0xeac3,	// (0x0006341e) image3_wide_pane

0xeadd,	// (0x00063438) image3_wide_small_pane

0xeae9,	// (0x00063444) main_video3_pane_g1_ParamLimits

0xeae9,	// (0x00063444) main_video3_pane_g1

0xeb05,	// (0x00063460) main_video3_pane_g2_ParamLimits

0xeb05,	// (0x00063460) main_video3_pane_g2

0x0001,

0xf848,	// (0x000641a3) main_video3_pane_g_ParamLimits

0xf848,	// (0x000641a3) main_video3_pane_g

0xeb21,	// (0x0006347c) main_video3_pane_t1_ParamLimits

0xeb21,	// (0x0006347c) main_video3_pane_t1

0xeb4c,	// (0x000634a7) main_video3_pane_t2_ParamLimits

0xeb4c,	// (0x000634a7) main_video3_pane_t2

0xeb77,	// (0x000634d2) main_video3_pane_t3_ParamLimits

0xeb77,	// (0x000634d2) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000641a8) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000641a8) main_video3_pane_t

0xeba4,	// (0x000634ff) cams_zoom_vslider_pane_g1

0xebad,	// (0x00063508) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000641af) cams_zoom_vslider_pane_g

0xebb5,	// (0x00063510) small_slider_vertical_pane

0xe36d,	// (0x00062cc8) small_slider_vertical_pane_g1

0xe36d,	// (0x00062cc8) small_slider_vertical_pane_g2

0xebbd,	// (0x00063518) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000641b4) small_slider_vertical_pane_g

0x331b,	// (0x00057c76) main_hwr_training_pane

0xebc6,	// (0x00063521) hwr_training_instruct_pane_ParamLimits

0xebc6,	// (0x00063521) hwr_training_instruct_pane

0x7cc1,	// (0x0005c61c) hwr_training_navi_pane_ParamLimits

0x7cc1,	// (0x0005c61c) hwr_training_navi_pane

0x7cdb,	// (0x0005c636) hwr_training_write_pane_ParamLimits

0x7cdb,	// (0x0005c636) hwr_training_write_pane

0x114c,	// (0x00055aa7) bg_frame_shadow_pane

0xebfd,	// (0x00063558) hwr_training_write_pane_g1

0xec05,	// (0x00063560) hwr_training_write_pane_g2

0xec0d,	// (0x00063568) hwr_training_write_pane_g3

0xec15,	// (0x00063570) hwr_training_write_pane_g4

0xec1d,	// (0x00063578) hwr_training_write_pane_g5

0xec25,	// (0x00063580) hwr_training_write_pane_g6

0xec2d,	// (0x00063588) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000641bb) hwr_training_write_pane_g

0x7d13,	// (0x0005c66e) hwr_training_navi_pane_g1_ParamLimits

0x7d13,	// (0x0005c66e) hwr_training_navi_pane_g1

0x7d25,	// (0x0005c680) hwr_training_navi_pane_g2_ParamLimits

0x7d25,	// (0x0005c680) hwr_training_navi_pane_g2

0x7d37,	// (0x0005c692) hwr_training_navi_pane_g3_ParamLimits

0x7d37,	// (0x0005c692) hwr_training_navi_pane_g3

0x7d47,	// (0x0005c6a2) hwr_training_navi_pane_g4_ParamLimits

0x7d47,	// (0x0005c6a2) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000641ca) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000641ca) hwr_training_navi_pane_g

0x7d61,	// (0x0005c6bc) hwr_training_navi_pane_t1

0x7d6f,	// (0x0005c6ca) list_single_hwr_training_instruct_pane_ParamLimits

0x7d6f,	// (0x0005c6ca) list_single_hwr_training_instruct_pane

0xec35,	// (0x00063590) list_single_hwr_training_instruct_pane_t1

0xe2a4,	// (0x00062bff) bg_frame_shadow_pane_g1

0xec44,	// (0x0006359f) bg_frame_shadow_pane_g2

0xec4c,	// (0x000635a7) bg_frame_shadow_pane_g3

0xec54,	// (0x000635af) bg_frame_shadow_pane_g4

0xec5c,	// (0x000635b7) bg_frame_shadow_pane_g5

0xec64,	// (0x000635bf) bg_frame_shadow_pane_g6

0xec6c,	// (0x000635c7) bg_frame_shadow_pane_g7

0xbf94,	// (0x000608ef) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000641d5) bg_frame_shadow_pane_g

0x331b,	// (0x00057c76) main_video_tele_dialer_pane

0x7d94,	// (0x0005c6ef) aid_size_cell_video_keypad_ParamLimits

0x7d94,	// (0x0005c6ef) aid_size_cell_video_keypad

0x7da4,	// (0x0005c6ff) grid_video_dialer_keypad_pane_ParamLimits

0x7da4,	// (0x0005c6ff) grid_video_dialer_keypad_pane

0x7dd8,	// (0x0005c733) video_down_pane_cp_ParamLimits

0x7dd8,	// (0x0005c733) video_down_pane_cp

0x7e02,	// (0x0005c75d) cell_video_dialer_keypad_pane_ParamLimits

0x7e02,	// (0x0005c75d) cell_video_dialer_keypad_pane

0xec74,	// (0x000635cf) bg_button_pane_cp08_ParamLimits

0xec74,	// (0x000635cf) bg_button_pane_cp08

0x7e17,	// (0x0005c772) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e17,	// (0x0005c772) cell_video_dialer_keypad_pane_g1

0x75ff,	// (0x0005bf5a) mup3_rocker2_pane_ParamLimits

0x75ff,	// (0x0005bf5a) mup3_rocker2_pane

0xe36d,	// (0x00062cc8) mup3_rocker2_pane_g1

0x6517,	// (0x0005ae72) main_dialer2_pane

0x331b,	// (0x00057c76) main_mp4_pane

0x7e56,	// (0x0005c7b1) main_mp4_pane_g1_ParamLimits

0x7e56,	// (0x0005c7b1) main_mp4_pane_g1

0x7e64,	// (0x0005c7bf) main_mp4_pane_g2_ParamLimits

0x7e64,	// (0x0005c7bf) main_mp4_pane_g2

0x7e72,	// (0x0005c7cd) main_mp4_pane_g3_ParamLimits

0x7e72,	// (0x0005c7cd) main_mp4_pane_g3

0x7eb7,	// (0x0005c812) main_mp4_pane_g4_ParamLimits

0x7eb7,	// (0x0005c812) main_mp4_pane_g4

0x7edf,	// (0x0005c83a) main_mp4_pane_g5_ParamLimits

0x7edf,	// (0x0005c83a) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000641f5) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000641f5) main_mp4_pane_g

0x7f2f,	// (0x0005c88a) main_mp4_pane_t1_ParamLimits

0x7f2f,	// (0x0005c88a) main_mp4_pane_t1

0x7f8b,	// (0x0005c8e6) main_mp4_pane_t2_ParamLimits

0x7f8b,	// (0x0005c8e6) main_mp4_pane_t2

0xec80,	// (0x000635db) main_mp4_pane_t3_ParamLimits

0xec80,	// (0x000635db) main_mp4_pane_t3

0x7fdd,	// (0x0005c938) main_mp4_pane_t4_ParamLimits

0x7fdd,	// (0x0005c938) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00064202) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00064202) main_mp4_pane_t

0x8021,	// (0x0005c97c) mp4_progress_pane_ParamLimits

0x8021,	// (0x0005c97c) mp4_progress_pane

0x806b,	// (0x0005c9c6) mp4_rocker_pane_ParamLimits

0x806b,	// (0x0005c9c6) mp4_rocker_pane

0xeca8,	// (0x00063603) mp4_progress_pane_t1

0xecc1,	// (0x0006361c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006420b) mp4_progress_pane_t

0xecda,	// (0x00063635) mup_progress_pane_cp04

0x0878,	// (0x000551d3) mp4_rocker_pane_g1

0x808b,	// (0x0005c9e6) aid_cell_size_keypad2_ParamLimits

0x808b,	// (0x0005c9e6) aid_cell_size_keypad2

0x809b,	// (0x0005c9f6) dialer2_ne_pane_ParamLimits

0x809b,	// (0x0005c9f6) dialer2_ne_pane

0x80a9,	// (0x0005ca04) grid_dialer2_keypad_pane_ParamLimits

0x80a9,	// (0x0005ca04) grid_dialer2_keypad_pane

0x0143,	// (0x00054a9e) bg_popup_call_pane_cp07_ParamLimits

0x0143,	// (0x00054a9e) bg_popup_call_pane_cp07

0x80b9,	// (0x0005ca14) dialer2_ne_pane_t1_ParamLimits

0x80b9,	// (0x0005ca14) dialer2_ne_pane_t1

0x80de,	// (0x0005ca39) cell_dialer2_keypad_pane_ParamLimits

0x80de,	// (0x0005ca39) cell_dialer2_keypad_pane

0xecf8,	// (0x00063653) bg_button_pane_pane_cp04_ParamLimits

0xecf8,	// (0x00063653) bg_button_pane_pane_cp04

0x80f3,	// (0x0005ca4e) cell_dialer2_keypad_pane_g1_ParamLimits

0x80f3,	// (0x0005ca4e) cell_dialer2_keypad_pane_g1

0x415d,	// (0x00058ab8) aid_placing_vt_set_content_ParamLimits

0x415d,	// (0x00058ab8) aid_placing_vt_set_content

0x4189,	// (0x00058ae4) aid_placing_vt_set_title_ParamLimits

0x4189,	// (0x00058ae4) aid_placing_vt_set_title

0x331b,	// (0x00057c76) main_image3_pane

0x818d,	// (0x0005cae8) area_side_right_pane_cp01_ParamLimits

0x818d,	// (0x0005cae8) area_side_right_pane_cp01

0x81ba,	// (0x0005cb15) main_image3_pane_g1_ParamLimits

0x81ba,	// (0x0005cb15) main_image3_pane_g1

0x81c8,	// (0x0005cb23) main_image3_pane_g2_ParamLimits

0x81c8,	// (0x0005cb23) main_image3_pane_g2

0x81e1,	// (0x0005cb3c) main_image3_pane_g3_ParamLimits

0x81e1,	// (0x0005cb3c) main_image3_pane_g3

0x81fa,	// (0x0005cb55) main_image3_pane_g4_ParamLimits

0x81fa,	// (0x0005cb55) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006421a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006421a) main_image3_pane_g

0x8213,	// (0x0005cb6e) main_image3_pane_t1_ParamLimits

0x8213,	// (0x0005cb6e) main_image3_pane_t1

0x8238,	// (0x0005cb93) main_image3_pane_t2_ParamLimits

0x8238,	// (0x0005cb93) main_image3_pane_t2

0x8257,	// (0x0005cbb2) main_image3_pane_t3_ParamLimits

0x8257,	// (0x0005cbb2) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00064223) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00064223) main_image3_pane_t

0x04a2,	// (0x00054dfd) grid_sctrl_middle_pane_cp01_ParamLimits

0x04a2,	// (0x00054dfd) grid_sctrl_middle_pane_cp01

0x82b8,	// (0x0005cc13) cell_sctrl_middle_pane_cp01_ParamLimits

0x82b8,	// (0x0005cc13) cell_sctrl_middle_pane_cp01

0x82c9,	// (0x0005cc24) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x82c9,	// (0x0005cc24) cell_sctrl_middle_pane_cp01_g1

0x331b,	// (0x00057c76) main_call4_pane

0x82d6,	// (0x0005cc31) aid_size_button_call4_ParamLimits

0x82d6,	// (0x0005cc31) aid_size_button_call4

0x8306,	// (0x0005cc61) call4_windows_pane_ParamLimits

0x8306,	// (0x0005cc61) call4_windows_pane

0x8320,	// (0x0005cc7b) grid_call4_button_pane_ParamLimits

0x8320,	// (0x0005cc7b) grid_call4_button_pane

0xed04,	// (0x0006365f) call4_windows_conf_pane

0xed1b,	// (0x00063676) popup_call4_audio_first_window_ParamLimits

0xed1b,	// (0x00063676) popup_call4_audio_first_window

0xed67,	// (0x000636c2) popup_call4_audio_second_window_ParamLimits

0xed67,	// (0x000636c2) popup_call4_audio_second_window

0xed7b,	// (0x000636d6) popup_call4_audio_wait_window_ParamLimits

0xed7b,	// (0x000636d6) popup_call4_audio_wait_window

0x8344,	// (0x0005cc9f) cell_call4_button_pane_ParamLimits

0x8344,	// (0x0005cc9f) cell_call4_button_pane

0x8369,	// (0x0005ccc4) bg_button_pane_cp09_ParamLimits

0x8369,	// (0x0005ccc4) bg_button_pane_cp09

0x8375,	// (0x0005ccd0) cell_call4_button_pane_g1_ParamLimits

0x8375,	// (0x0005ccd0) cell_call4_button_pane_g1

0x8382,	// (0x0005ccdd) cell_call4_button_pane_t1_ParamLimits

0x8382,	// (0x0005ccdd) cell_call4_button_pane_t1

0xedc3,	// (0x0006371e) popup_call4_audio_conf_window_ParamLimits

0xedc3,	// (0x0006371e) popup_call4_audio_conf_window

0x7632,	// (0x0005bf8d) mup3_progress_pane_t1_ParamLimits

0x7651,	// (0x0005bfac) mup3_progress_pane_t2_ParamLimits

0xe6b3,	// (0x0006300e) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000640f7) mup3_progress_pane_t_ParamLimits

0xe6d0,	// (0x0006302b) mup_progress_pane_cp03_ParamLimits

0x7b60,	// (0x0005c4bb) mup3_control_keys_pane_g4_copy1

0x804f,	// (0x0005c9aa) mp4_rocker2_pane_ParamLimits

0x804f,	// (0x0005c9aa) mp4_rocker2_pane

0xedd7,	// (0x00063732) mp4_rocker2_pane_g1

0xeddf,	// (0x0006373a) mp4_rocker2_pane_g2

0x8394,	// (0x0005ccef) mp4_rocker2_pane_g3

0x839c,	// (0x0005ccf7) mp4_rocker2_pane_g4

0x83a4,	// (0x0005ccff) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006422c) mp4_rocker2_pane_g

0x331b,	// (0x00057c76) main_camera4_pane

0x331b,	// (0x00057c76) main_video4_pane

0x7db4,	// (0x0005c70f) main_video_tele_dialer_pane_t1_ParamLimits

0x7db4,	// (0x0005c70f) main_video_tele_dialer_pane_t1

0x7dc6,	// (0x0005c721) main_video_tele_dialer_pane_t2_ParamLimits

0x7dc6,	// (0x0005c721) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000641e6) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000641e6) main_video_tele_dialer_pane_t

0x83c4,	// (0x0005cd1f) cam4_autofocus_pane_ParamLimits

0x83c4,	// (0x0005cd1f) cam4_autofocus_pane

0x83de,	// (0x0005cd39) cam4_image_uncrop_pane_ParamLimits

0x83de,	// (0x0005cd39) cam4_image_uncrop_pane

0x83f5,	// (0x0005cd50) cam4_indicators_pane_ParamLimits

0x83f5,	// (0x0005cd50) cam4_indicators_pane

0x8411,	// (0x0005cd6c) main_camera4_pane_g1_ParamLimits

0x8411,	// (0x0005cd6c) main_camera4_pane_g1

0x841d,	// (0x0005cd78) main_camera4_pane_g2_ParamLimits

0x841d,	// (0x0005cd78) main_camera4_pane_g2

0x841d,	// (0x0005cd78) main_camera4_pane_g3_ParamLimits

0x841d,	// (0x0005cd78) main_camera4_pane_g3

0x8429,	// (0x0005cd84) main_camera4_pane_g4_ParamLimits

0x8429,	// (0x0005cd84) main_camera4_pane_g4

0x8435,	// (0x0005cd90) main_camera4_pane_g5_ParamLimits

0x8435,	// (0x0005cd90) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00064237) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00064237) main_camera4_pane_g

0x844f,	// (0x0005cdaa) main_camera4_pane_t1_ParamLimits

0x844f,	// (0x0005cdaa) main_camera4_pane_t1

0x8497,	// (0x0005cdf2) bg_tb_trans_pane_cp06

0x84ad,	// (0x0005ce08) cam4_indicators_pane_g1

0x84be,	// (0x0005ce19) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00064252) cam4_indicators_pane_g

0x84dc,	// (0x0005ce37) cam4_indicators_pane_t1

0x8506,	// (0x0005ce61) main_video4_pane_g1_ParamLimits

0x8506,	// (0x0005ce61) main_video4_pane_g1

0x8512,	// (0x0005ce6d) main_video4_pane_g2_ParamLimits

0x8512,	// (0x0005ce6d) main_video4_pane_g2

0x851e,	// (0x0005ce79) main_video4_pane_g3_ParamLimits

0x851e,	// (0x0005ce79) main_video4_pane_g3

0x852a,	// (0x0005ce85) main_video4_pane_g4_ParamLimits

0x852a,	// (0x0005ce85) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00064259) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00064259) main_video4_pane_g

0x854a,	// (0x0005cea5) vid4_indicators_pane_ParamLimits

0x854a,	// (0x0005cea5) vid4_indicators_pane

0x8569,	// (0x0005cec4) video4_image_uncrop_cif_pane_ParamLimits

0x8569,	// (0x0005cec4) video4_image_uncrop_cif_pane

0x8578,	// (0x0005ced3) video4_image_uncrop_nhd_pane_ParamLimits

0x8578,	// (0x0005ced3) video4_image_uncrop_nhd_pane

0x83de,	// (0x0005cd39) video4_image_uncrop_vga_pane_ParamLimits

0x83de,	// (0x0005cd39) video4_image_uncrop_vga_pane

0x6509,	// (0x0005ae64) bg_tb_trans_pane_cp07

0x858f,	// (0x0005ceea) vid4_indicators_pane_g1

0x85a3,	// (0x0005cefe) vid4_indicators_pane_g2

0x85b7,	// (0x0005cf12) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00064264) vid4_indicators_pane_g

0x85e6,	// (0x0005cf41) vid4_indicators_pane_t1

0x85fd,	// (0x0005cf58) cam4_autofocus_pane_g1

0x8605,	// (0x0005cf60) cam4_autofocus_pane_g2

0x860d,	// (0x0005cf68) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006426f) cam4_autofocus_pane_g

0x8615,	// (0x0005cf70) cam4_autofocus_pane_g3_copy1

0x7de6,	// (0x0005c741) video_down_pane_cp_t1

0x7df4,	// (0x0005c74f) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000641eb) video_down_pane_cp_t

0x3301,	// (0x00057c5c) popup_vitu2_window_ParamLimits

0x3301,	// (0x00057c5c) popup_vitu2_window

0x861d,	// (0x0005cf78) aid_size_cell2_itu2_ParamLimits

0x861d,	// (0x0005cf78) aid_size_cell2_itu2

0x863f,	// (0x0005cf9a) aid_size_cell_itu2_ParamLimits

0x863f,	// (0x0005cf9a) aid_size_cell_itu2

0x8683,	// (0x0005cfde) bg_popup_window_pane_cp09_ParamLimits

0x8683,	// (0x0005cfde) bg_popup_window_pane_cp09

0x8691,	// (0x0005cfec) field_vitu2_entry_pane_ParamLimits

0x8691,	// (0x0005cfec) field_vitu2_entry_pane

0x86b1,	// (0x0005d00c) grid_vitu2_function_pane_ParamLimits

0x86b1,	// (0x0005d00c) grid_vitu2_function_pane

0x86f5,	// (0x0005d050) grid_vitu2_itu_pane_ParamLimits

0x86f5,	// (0x0005d050) grid_vitu2_itu_pane

0x8771,	// (0x0005d0cc) cell_vitu2_itu_pane_ParamLimits

0x8771,	// (0x0005d0cc) cell_vitu2_itu_pane

0x878a,	// (0x0005d0e5) cell_vitu2_function_pane_ParamLimits

0x878a,	// (0x0005d0e5) cell_vitu2_function_pane

0xede7,	// (0x00063742) bg_popup_call_pane_cp08_ParamLimits

0xede7,	// (0x00063742) bg_popup_call_pane_cp08

0xedfe,	// (0x00063759) field_vitu2_entry_pane_g1

0xee0a,	// (0x00063765) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00064276) field_vitu2_entry_pane_g

0x87cb,	// (0x0005d126) field_vitu2_entry_pane_t1_ParamLimits

0x87cb,	// (0x0005d126) field_vitu2_entry_pane_t1

0xee24,	// (0x0006377f) field_vitu2_entry_pane_t2_ParamLimits

0xee24,	// (0x0006377f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006427d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006427d) field_vitu2_entry_pane_t

0x87fd,	// (0x0005d158) bg_button_pane_cp010_ParamLimits

0x87fd,	// (0x0005d158) bg_button_pane_cp010

0x880b,	// (0x0005d166) cell_vitu2_itu_pane_g1

0x882b,	// (0x0005d186) cell_vitu2_itu_pane_t1_ParamLimits

0x882b,	// (0x0005d186) cell_vitu2_itu_pane_t1

0x2f70,	// (0x000578cb) cell_vitu2_itu_pane_t2_ParamLimits

0x2f70,	// (0x000578cb) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00064287) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00064287) cell_vitu2_itu_pane_t

0x6509,	// (0x0005ae64) bg_button_pane_cp011

0x8877,	// (0x0005d1d2) cell_vitu2_function_pane_g1

0x331b,	// (0x00057c76) main_myfav_hc_pane

0x8299,	// (0x0005cbf4) popup_image3_note_pane_ParamLimits

0x8299,	// (0x0005cbf4) popup_image3_note_pane

0x82a7,	// (0x0005cc02) popup_image3_tool_bar_pane_ParamLimits

0x82a7,	// (0x0005cc02) popup_image3_tool_bar_pane

0x2fe6,	// (0x00057941) cell_vitu2_itu_pane_t3_ParamLimits

0x2fe6,	// (0x00057941) cell_vitu2_itu_pane_t3

0x114c,	// (0x00055aa7) bg_popup_trans_pane

0xee49,	// (0x000637a4) grid_image3_tool_bar_pane

0xee53,	// (0x000637ae) bg_popup_trans_pane_g1

0xc2f9,	// (0x00060c54) bg_popup_trans_pane_g2

0xee5b,	// (0x000637b6) bg_popup_trans_pane_g3

0xee63,	// (0x000637be) bg_popup_trans_pane_g4

0xee6b,	// (0x000637c6) bg_popup_trans_pane_g5

0xee73,	// (0x000637ce) bg_popup_trans_pane_g6

0xee7b,	// (0x000637d6) bg_popup_trans_pane_g7

0xee83,	// (0x000637de) bg_popup_trans_pane_g8

0xc2d9,	// (0x00060c34) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006428e) bg_popup_trans_pane_g

0xee8b,	// (0x000637e6) cell_image3_tool_bar_pane_ParamLimits

0xee8b,	// (0x000637e6) cell_image3_tool_bar_pane

0xe36d,	// (0x00062cc8) cell_image3_tool_bar_pane_g1

0x114c,	// (0x00055aa7) bg_popup_trans_pane_cp1

0xee9f,	// (0x000637fa) popup_image3_note_pane_t1

0xeead,	// (0x00063808) popup_image3_note_pane_t2

0xeebb,	// (0x00063816) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000642a1) popup_image3_note_pane_t

0xeec9,	// (0x00063824) popup_image3_note_pane_t3_copy1

0x888b,	// (0x0005d1e6) bg_myfav_hc_instruction_pane_ParamLimits

0x888b,	// (0x0005d1e6) bg_myfav_hc_instruction_pane

0x88a3,	// (0x0005d1fe) cell_myfav_contact_pane_ParamLimits

0x88a3,	// (0x0005d1fe) cell_myfav_contact_pane

0x88bd,	// (0x0005d218) cell_myfav_contact_pane_cp1_ParamLimits

0x88bd,	// (0x0005d218) cell_myfav_contact_pane_cp1

0x88d5,	// (0x0005d230) cell_myfav_contact_pane_cp2_ParamLimits

0x88d5,	// (0x0005d230) cell_myfav_contact_pane_cp2

0x88ed,	// (0x0005d248) cell_myfav_contact_pane_cp3_ParamLimits

0x88ed,	// (0x0005d248) cell_myfav_contact_pane_cp3

0x8904,	// (0x0005d25f) cell_myfav_contact_pane_cp4_ParamLimits

0x8904,	// (0x0005d25f) cell_myfav_contact_pane_cp4

0x891a,	// (0x0005d275) cell_myfav_contact_pane_cp5_ParamLimits

0x891a,	// (0x0005d275) cell_myfav_contact_pane_cp5

0x892e,	// (0x0005d289) cell_myfav_contact_pane_cp6_ParamLimits

0x892e,	// (0x0005d289) cell_myfav_contact_pane_cp6

0x8942,	// (0x0005d29d) cell_myfav_contact_pane_cp7_ParamLimits

0x8942,	// (0x0005d29d) cell_myfav_contact_pane_cp7

0xeed7,	// (0x00063832) listscroll_gen_pane_cp05

0x895a,	// (0x0005d2b5) main_myfav_hc_pane_g1_ParamLimits

0x895a,	// (0x0005d2b5) main_myfav_hc_pane_g1

0x8970,	// (0x0005d2cb) main_myfav_hc_pane_g2_ParamLimits

0x8970,	// (0x0005d2cb) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000642a8) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000642a8) main_myfav_hc_pane_g

0x899e,	// (0x0005d2f9) main_myfav_hc_pane_t1_ParamLimits

0x899e,	// (0x0005d2f9) main_myfav_hc_pane_t1

0xeee0,	// (0x0006383b) main_myfav_hc_pane_t2_ParamLimits

0xeee0,	// (0x0006383b) main_myfav_hc_pane_t2

0xeef2,	// (0x0006384d) main_myfav_hc_pane_t3_ParamLimits

0xeef2,	// (0x0006384d) main_myfav_hc_pane_t3

0x89b5,	// (0x0005d310) main_myfav_hc_pane_t4_ParamLimits

0x89b5,	// (0x0005d310) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000642af) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000642af) main_myfav_hc_pane_t

0xe36d,	// (0x00062cc8) bg_myfav_hc_instruction_pane_g1

0xef04,	// (0x0006385f) cell_myfav_contact_pane_g1_ParamLimits

0xef04,	// (0x0006385f) cell_myfav_contact_pane_g1

0xef04,	// (0x0006385f) cell_myfav_contact_pane_g2_ParamLimits

0xef04,	// (0x0006385f) cell_myfav_contact_pane_g2

0xef10,	// (0x0006386b) cell_myfav_contact_pane_g3_ParamLimits

0xef10,	// (0x0006386b) cell_myfav_contact_pane_g3

0xe69d,	// (0x00062ff8) cell_myfav_contact_pane_g4_ParamLimits

0xe69d,	// (0x00062ff8) cell_myfav_contact_pane_g4

0xef1d,	// (0x00063878) cell_myfav_contact_pane_g5_ParamLimits

0xef1d,	// (0x00063878) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000642ba) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000642ba) cell_myfav_contact_pane_g

0x8986,	// (0x0005d2e1) main_myfav_hc_pane_g3_ParamLimits

0x8986,	// (0x0005d2e1) main_myfav_hc_pane_g3

0x320a,	// (0x00057b65) popup_adpt_find_window

0x89df,	// (0x0005d33a) afind_page_pane_ParamLimits

0x89df,	// (0x0005d33a) afind_page_pane

0x89ec,	// (0x0005d347) aid_size_cell_afind_ParamLimits

0x89ec,	// (0x0005d347) aid_size_cell_afind

0x8a06,	// (0x0005d361) bg_popup_sub_pane_cp09_ParamLimits

0x8a06,	// (0x0005d361) bg_popup_sub_pane_cp09

0x8a13,	// (0x0005d36e) find_pane_cp01_ParamLimits

0x8a13,	// (0x0005d36e) find_pane_cp01

0xef29,	// (0x00063884) grid_afind_control_pane_ParamLimits

0xef29,	// (0x00063884) grid_afind_control_pane

0x8a20,	// (0x0005d37b) grid_afind_pane_ParamLimits

0x8a20,	// (0x0005d37b) grid_afind_pane

0x8a3c,	// (0x0005d397) cell_afind_pane_ParamLimits

0x8a3c,	// (0x0005d397) cell_afind_pane

0xe36d,	// (0x00062cc8) afind_page_pane_g1

0x8a84,	// (0x0005d3df) afind_page_pane_g2

0x8a8d,	// (0x0005d3e8) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000642c5) afind_page_pane_g

0x8a96,	// (0x0005d3f1) afind_page_pane_t1

0xef3d,	// (0x00063898) cell_afind_grid_control_pane_ParamLimits

0xef3d,	// (0x00063898) cell_afind_grid_control_pane

0xecf8,	// (0x00063653) bg_button_pane_cp69_ParamLimits

0xecf8,	// (0x00063653) bg_button_pane_cp69

0x8ab6,	// (0x0005d411) cell_afind_pane_g1_ParamLimits

0x8ab6,	// (0x0005d411) cell_afind_pane_g1

0x8ac3,	// (0x0005d41e) cell_afind_pane_t1_ParamLimits

0x8ac3,	// (0x0005d41e) cell_afind_pane_t1

0xc0f2,	// (0x00060a4d) bg_button_pane_cp72

0xef4c,	// (0x000638a7) cell_afind_grid_control_pane_g1

0x6087,	// (0x0005a9e2) aid_image_placing_area_ParamLimits

0x6087,	// (0x0005a9e2) aid_image_placing_area

0xe9c6,	// (0x00063321) field_vitu_entry_pane_g1_ParamLimits

0xe9c6,	// (0x00063321) field_vitu_entry_pane_g1

0xe9d2,	// (0x0006332d) field_vitu_entry_pane_g2_ParamLimits

0xe9d2,	// (0x0006332d) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00064176) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00064176) field_vitu_entry_pane_g

0x7be8,	// (0x0005c543) cell_vitu_itu_pane_g1_ParamLimits

0x7c2a,	// (0x0005c585) cell_vitu_itu_pane_t3_ParamLimits

0x7c2a,	// (0x0005c585) cell_vitu_itu_pane_t3

0xeca8,	// (0x00063603) mp4_progress_pane_t1_ParamLimits

0xecc1,	// (0x0006361c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006420b) mp4_progress_pane_t_ParamLimits

0xecda,	// (0x00063635) mup_progress_pane_cp04_ParamLimits

0x89c9,	// (0x0005d324) main_myfav_hc_pane_t5_ParamLimits

0x89c9,	// (0x0005d324) main_myfav_hc_pane_t5

0x3098,	// (0x000579f3) aid_zoom_text_primary

0x320a,	// (0x00057b65) popup_adpt_find_window_ParamLimits

0x6509,	// (0x0005ae64) main_cam_set_pane

0x8403,	// (0x0005cd5e) cam4_zoom_pane_ParamLimits

0x8403,	// (0x0005cd5e) cam4_zoom_pane

0x8ad5,	// (0x0005d430) main_cam_set_pane_g1_ParamLimits

0x8ad5,	// (0x0005d430) main_cam_set_pane_g1

0x8ae3,	// (0x0005d43e) main_cam_set_pane_g2_ParamLimits

0x8ae3,	// (0x0005d43e) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000642cc) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000642cc) main_cam_set_pane_g

0x8aef,	// (0x0005d44a) main_cam_set_pane_t1_ParamLimits

0x8aef,	// (0x0005d44a) main_cam_set_pane_t1

0x8b0b,	// (0x0005d466) main_cset_listscroll_pane_ParamLimits

0x8b0b,	// (0x0005d466) main_cset_listscroll_pane

0x8b36,	// (0x0005d491) main_cset_slider_pane_ParamLimits

0x8b36,	// (0x0005d491) main_cset_slider_pane

0xef5d,	// (0x000638b8) main_cset_list_pane_ParamLimits

0xef5d,	// (0x000638b8) main_cset_list_pane

0xef6d,	// (0x000638c8) scroll_pane_cp028

0x8b55,	// (0x0005d4b0) aid_area_touch_slider

0x8b71,	// (0x0005d4cc) cset_slider_pane

0x8b9b,	// (0x0005d4f6) main_cset_slider_pane_g1

0x8bb0,	// (0x0005d50b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000642d1) main_cset_slider_pane_g

0xefa6,	// (0x00063901) main_cset_slider_pane_t1

0x8c72,	// (0x0005d5cd) main_cset_slider_pane_t2

0x8c8c,	// (0x0005d5e7) main_cset_slider_pane_t3

0x8ca6,	// (0x0005d601) main_cset_slider_pane_t4

0x8cc0,	// (0x0005d61b) main_cset_slider_pane_t5

0x8cde,	// (0x0005d639) main_cset_slider_pane_t6

0x8cf5,	// (0x0005d650) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000642f6) main_cset_slider_pane_t

0x8e01,	// (0x0005d75c) cset_list_set_pane_ParamLimits

0x8e01,	// (0x0005d75c) cset_list_set_pane

0x8e17,	// (0x0005d772) aid_position_infowindow_above

0x8e1f,	// (0x0005d77a) aid_position_infowindow_below

0xf046,	// (0x000639a1) cset_list_set_pane_g1_ParamLimits

0xf046,	// (0x000639a1) cset_list_set_pane_g1

0xf052,	// (0x000639ad) cset_list_set_pane_g3_ParamLimits

0xf052,	// (0x000639ad) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00064315) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00064315) cset_list_set_pane_g

0xf061,	// (0x000639bc) cset_list_set_pane_t1_ParamLimits

0xf061,	// (0x000639bc) cset_list_set_pane_t1

0xd9f7,	// (0x00062352) list_highlight_pane_cp021_ParamLimits

0xd9f7,	// (0x00062352) list_highlight_pane_cp021

0xcc36,	// (0x00061591) cset_slider_pane_g1

0xcc48,	// (0x000615a3) cset_slider_pane_g2

0xcc3f,	// (0x0006159a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006431a) cset_slider_pane_g

0x8e27,	// (0x0005d782) aid_area_touch_cam4_zoom

0x8e2f,	// (0x0005d78a) cam4_zoom_cont_pane

0x8e37,	// (0x0005d792) cam4_zoom_pane_g1

0x8e3f,	// (0x0005d79a) cam4_zoom_pane_g2

0x8e47,	// (0x0005d7a2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00064321) cam4_zoom_pane_g

0x8e4f,	// (0x0005d7aa) cam4_zoom_cont_pane_g1

0x8e58,	// (0x0005d7b3) cam4_zoom_cont_pane_g2

0x8e61,	// (0x0005d7bc) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00064328) cam4_zoom_cont_pane_g

0x82f0,	// (0x0005cc4b) call4_image_pane_ParamLimits

0x82f0,	// (0x0005cc4b) call4_image_pane

0xed04,	// (0x0006365f) call4_windows_conf_pane_ParamLimits

0xed45,	// (0x000636a0) popup_call4_audio_in_window_ParamLimits

0xed45,	// (0x000636a0) popup_call4_audio_in_window

0x114c,	// (0x00055aa7) bg_popup_call2_act_pane_cp02

0xedbb,	// (0x00063716) call4_list_conf_pane

0xe36d,	// (0x00062cc8) call4_image_pane_g1

0xe36d,	// (0x00062cc8) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00064037) call4_image_pane_g

0xf076,	// (0x000639d1) list_single_graphic_popup_conf4_pane_ParamLimits

0xf076,	// (0x000639d1) list_single_graphic_popup_conf4_pane

0x114c,	// (0x00055aa7) list_highlight_pane_cp022

0xf0a4,	// (0x000639ff) list_single_graphic_popup_conf4_pane_g1

0xc815,	// (0x00061170) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006432f) list_single_graphic_popup_conf4_pane_g

0xf0ac,	// (0x00063a07) list_single_graphic_popup_conf4_pane_t1

0x42ed,	// (0x00058c48) popup_vtel_slider_window_ParamLimits

0x42ed,	// (0x00058c48) popup_vtel_slider_window

0xece6,	// (0x00063641) dialer2_ne_pane_t2_ParamLimits

0xece6,	// (0x00063641) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00064210) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00064210) dialer2_ne_pane_t

0xd9f7,	// (0x00062352) bg_popup_sub_pane_cp010_ParamLimits

0xd9f7,	// (0x00062352) bg_popup_sub_pane_cp010

0x8e6a,	// (0x0005d7c5) popup_vtel_slider_window_g1_ParamLimits

0x8e6a,	// (0x0005d7c5) popup_vtel_slider_window_g1

0x8e76,	// (0x0005d7d1) popup_vtel_slider_window_g2_ParamLimits

0x8e76,	// (0x0005d7d1) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00064334) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00064334) popup_vtel_slider_window_g

0x8ebe,	// (0x0005d819) vtel_slider_pane_ParamLimits

0x8ebe,	// (0x0005d819) vtel_slider_pane

0x8ecd,	// (0x0005d828) vtel_slider_pane_g1_ParamLimits

0x8ecd,	// (0x0005d828) vtel_slider_pane_g1

0x8eda,	// (0x0005d835) vtel_slider_pane_g2_ParamLimits

0x8eda,	// (0x0005d835) vtel_slider_pane_g2

0x8ee7,	// (0x0005d842) vtel_slider_pane_g3_ParamLimits

0x8ee7,	// (0x0005d842) vtel_slider_pane_g3

0x8ecd,	// (0x0005d828) vtel_slider_pane_g4_ParamLimits

0x8ecd,	// (0x0005d828) vtel_slider_pane_g4

0x8ef4,	// (0x0005d84f) vtel_slider_pane_g5_ParamLimits

0x8ef4,	// (0x0005d84f) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006433d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006433d) vtel_slider_pane_g

0x6509,	// (0x0005ae64) main_gallery2_pane

0x8665,	// (0x0005cfc0) aid_size_row_itut2_dropdow_list_ParamLimits

0x8665,	// (0x0005cfc0) aid_size_row_itut2_dropdow_list

0x86d3,	// (0x0005d02e) grid_vitu2_function_top_pane_ParamLimits

0x86d3,	// (0x0005d02e) grid_vitu2_function_top_pane

0x872d,	// (0x0005d088) popup_vitu2_dropdown_list_window_ParamLimits

0x872d,	// (0x0005d088) popup_vitu2_dropdown_list_window

0x874d,	// (0x0005d0a8) popup_vitu2_match_list_window

0x8f0f,	// (0x0005d86a) cell_vitu2_function_top_pane_ParamLimits

0x8f0f,	// (0x0005d86a) cell_vitu2_function_top_pane

0x8f29,	// (0x0005d884) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f29,	// (0x0005d884) cell_vitu2_function_top_pane_cp01

0x8f45,	// (0x0005d8a0) cell_vitu2_function_top_wide_pane_ParamLimits

0x8f45,	// (0x0005d8a0) cell_vitu2_function_top_wide_pane

0x6509,	// (0x0005ae64) bg_button_pane_cp012

0x8f61,	// (0x0005d8bc) cell_vitu2_function_top_pane_g1

0x8f75,	// (0x0005d8d0) bg_button_pane_cp013_ParamLimits

0x8f75,	// (0x0005d8d0) bg_button_pane_cp013

0x8f91,	// (0x0005d8ec) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8f91,	// (0x0005d8ec) cell_vitu2_function_top_wide_pane_g1

0x3301,	// (0x00057c5c) bg_popup_sub_pane_cp20

0x8fa9,	// (0x0005d904) list_vitu2_match_list_pane

0xee53,	// (0x000637ae) bg_popup_sub_pane_cp20_g1

0xee5b,	// (0x000637b6) bg_popup_sub_pane_cp20_g2

0xc2f9,	// (0x00060c54) bg_popup_sub_pane_cp20_g3

0xee63,	// (0x000637be) bg_popup_sub_pane_cp20_g4

0xc2d9,	// (0x00060c34) bg_popup_sub_pane_cp20_g5

0xf0c2,	// (0x00063a1d) bg_popup_sub_pane_cp20_g6

0xee73,	// (0x000637ce) bg_popup_sub_pane_cp20_g7

0xee7b,	// (0x000637d6) bg_popup_sub_pane_cp20_g8

0xee83,	// (0x000637de) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00064348) bg_popup_sub_pane_cp20_g

0x8fc1,	// (0x0005d91c) list_vitu2_match_list_item_pane_ParamLimits

0x8fc1,	// (0x0005d91c) list_vitu2_match_list_item_pane

0x8fd3,	// (0x0005d92e) list_vitu2_match_list_item_pane_t1

0x331b,	// (0x00057c76) bg_popup_sub_pane_cp21

0x9029,	// (0x0005d984) grid_vitu2_dropdown_list_pane

0x9031,	// (0x0005d98c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9031,	// (0x0005d98c) cell_vitu2_dropdown_list_char_pane

0x9052,	// (0x0005d9ad) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9052,	// (0x0005d9ad) cell_vitu2_dropdown_list_ctrl_pane

0x04c2,	// (0x00054e1d) cell_vitu2_dropdown_list_char_pane_g1

0x04b9,	// (0x00054e14) cell_vitu2_dropdown_list_char_pane_g2

0x04b0,	// (0x00054e0b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00064365) cell_vitu2_dropdown_list_char_pane_g

0x907e,	// (0x0005d9d9) cell_vitu2_dropdown_list_char_pane_t1

0x908c,	// (0x0005d9e7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x908c,	// (0x0005d9e7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x909c,	// (0x0005d9f7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x909c,	// (0x0005d9f7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x90ad,	// (0x0005da08) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x90ad,	// (0x0005da08) cell_vitu2_dropdown_list_ctrl_pane_g3

0x90bd,	// (0x0005da18) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x90bd,	// (0x0005da18) cell_vitu2_dropdown_list_ctrl_pane_g4

0x8497,	// (0x0005cdf2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x8497,	// (0x0005cdf2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006436c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006436c) cell_vitu2_dropdown_list_ctrl_pane_g

0x90d9,	// (0x0005da34) aid_size_cell_gallery2_ParamLimits

0x90d9,	// (0x0005da34) aid_size_cell_gallery2

0x90f3,	// (0x0005da4e) grid_gallery2_pane_ParamLimits

0x90f3,	// (0x0005da4e) grid_gallery2_pane

0x7a71,	// (0x0005c3cc) scroll_pane_cp029_ParamLimits

0x7a71,	// (0x0005c3cc) scroll_pane_cp029

0x910a,	// (0x0005da65) cell_gallery2_pane_ParamLimits

0x910a,	// (0x0005da65) cell_gallery2_pane

0x04cb,	// (0x00054e26) cell_gallery2_pane_g2

0x1144,	// (0x00055a9f) cell_gallery2_pane_g3

0x04d3,	// (0x00054e2e) cell_gallery2_pane_g4

0x04db,	// (0x00054e36) cell_gallery2_pane_g5

0xc0a0,	// (0x000609fb) grid_highlight_pane_cp10

0x874d,	// (0x0005d0a8) popup_vitu2_match_list_window_ParamLimits

0x8761,	// (0x0005d0bc) popup_vitu2_query_window_ParamLimits

0x8761,	// (0x0005d0bc) popup_vitu2_query_window

0x331b,	// (0x00057c76) bg_vitu2_candi_button_pane

0x04c2,	// (0x00054e1d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x04b9,	// (0x00054e14) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x04b0,	// (0x00054e0b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x915c,	// (0x0005dab7) bg_button_pane_cp015

0x916e,	// (0x0005dac9) bg_button_pane_cp016

0x9181,	// (0x0005dadc) bg_button_pane_cp017

0xdf5c,	// (0x000628b7) bg_popup_sub_pane_cp22

0x04e3,	// (0x00054e3e) popup_vitu2_query_window_g1

0x91c6,	// (0x0005db21) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00064377) popup_vitu2_query_window_g

0x91e3,	// (0x0005db3e) popup_vitu2_query_window_t1_ParamLimits

0x91e3,	// (0x0005db3e) popup_vitu2_query_window_t1

0x9216,	// (0x0005db71) popup_vitu2_query_window_t2_ParamLimits

0x9216,	// (0x0005db71) popup_vitu2_query_window_t2

0x9228,	// (0x0005db83) popup_vitu2_query_window_t3_ParamLimits

0x9228,	// (0x0005db83) popup_vitu2_query_window_t3

0x9250,	// (0x0005dbab) popup_vitu2_query_window_t4_ParamLimits

0x9250,	// (0x0005dbab) popup_vitu2_query_window_t4

0x9271,	// (0x0005dbcc) popup_vitu2_query_window_t5_ParamLimits

0x9271,	// (0x0005dbcc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006437e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006437e) popup_vitu2_query_window_t

0xef55,	// (0x000638b0) main_cset_text_pane

0x8b55,	// (0x0005d4b0) aid_area_touch_slider_ParamLimits

0x8b71,	// (0x0005d4cc) cset_slider_pane_ParamLimits

0x8b9b,	// (0x0005d4f6) main_cset_slider_pane_g1_ParamLimits

0x8bb0,	// (0x0005d50b) main_cset_slider_pane_g2_ParamLimits

0xef76,	// (0x000638d1) main_cset_slider_pane_g3_ParamLimits

0xef76,	// (0x000638d1) main_cset_slider_pane_g3

0x8bc5,	// (0x0005d520) main_cset_slider_pane_g4_ParamLimits

0x8bc5,	// (0x0005d520) main_cset_slider_pane_g4

0x8bd4,	// (0x0005d52f) main_cset_slider_pane_g5_ParamLimits

0x8bd4,	// (0x0005d52f) main_cset_slider_pane_g5

0x8be2,	// (0x0005d53d) main_cset_slider_pane_g6_ParamLimits

0x8be2,	// (0x0005d53d) main_cset_slider_pane_g6

0xf976,	// (0x000642d1) main_cset_slider_pane_g_ParamLimits

0xefa6,	// (0x00063901) main_cset_slider_pane_t1_ParamLimits

0x8c72,	// (0x0005d5cd) main_cset_slider_pane_t2_ParamLimits

0x8c8c,	// (0x0005d5e7) main_cset_slider_pane_t3_ParamLimits

0x8ca6,	// (0x0005d601) main_cset_slider_pane_t4_ParamLimits

0x8cc0,	// (0x0005d61b) main_cset_slider_pane_t5_ParamLimits

0x8cde,	// (0x0005d639) main_cset_slider_pane_t6_ParamLimits

0x8cf5,	// (0x0005d650) main_cset_slider_pane_t7_ParamLimits

0x8d23,	// (0x0005d67e) main_cset_slider_pane_t8_ParamLimits

0x8d23,	// (0x0005d67e) main_cset_slider_pane_t8

0x8d4b,	// (0x0005d6a6) main_cset_slider_pane_t9_ParamLimits

0x8d4b,	// (0x0005d6a6) main_cset_slider_pane_t9

0x8d73,	// (0x0005d6ce) main_cset_slider_pane_t10_ParamLimits

0x8d73,	// (0x0005d6ce) main_cset_slider_pane_t10

0x8d9b,	// (0x0005d6f6) main_cset_slider_pane_t11_ParamLimits

0x8d9b,	// (0x0005d6f6) main_cset_slider_pane_t11

0x8dc5,	// (0x0005d720) main_cset_slider_pane_t12_ParamLimits

0x8dc5,	// (0x0005d720) main_cset_slider_pane_t12

0x8de2,	// (0x0005d73d) main_cset_slider_pane_t13_ParamLimits

0x8de2,	// (0x0005d73d) main_cset_slider_pane_t13

0xf99b,	// (0x000642f6) main_cset_slider_pane_t_ParamLimits

0x114c,	// (0x00055aa7) bg_popup_sub_pane_cp011

0x04ef,	// (0x00054e4a) main_cset_text_pane_g1

0x04f7,	// (0x00054e52) main_cset_text_pane_t1

0x0505,	// (0x00054e60) main_cset_text_pane_t2

0x0513,	// (0x00054e6e) main_cset_text_pane_t3

0x0521,	// (0x00054e7c) main_cset_text_pane_t4

0x052f,	// (0x00054e8a) main_cset_text_pane_t5

0x053d,	// (0x00054e98) main_cset_text_pane_t6

0x054b,	// (0x00054ea6) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006438d) main_cset_text_pane_t

0x331b,	// (0x00057c76) main_cam4_burst_pane

0x331b,	// (0x00057c76) main_cam5_pane

0x8aa4,	// (0x0005d3ff) bg_button_pane_cp019

0x8aad,	// (0x0005d408) bg_button_pane_cp020

0xef82,	// (0x000638dd) main_cset_slider_pane_g7_ParamLimits

0xef82,	// (0x000638dd) main_cset_slider_pane_g7

0xef8e,	// (0x000638e9) main_cset_slider_pane_g8_ParamLimits

0xef8e,	// (0x000638e9) main_cset_slider_pane_g8

0x8bf6,	// (0x0005d551) main_cset_slider_pane_g9_ParamLimits

0x8bf6,	// (0x0005d551) main_cset_slider_pane_g9

0x8c02,	// (0x0005d55d) main_cset_slider_pane_g10_ParamLimits

0x8c02,	// (0x0005d55d) main_cset_slider_pane_g10

0x8c0e,	// (0x0005d569) main_cset_slider_pane_g11_ParamLimits

0x8c0e,	// (0x0005d569) main_cset_slider_pane_g11

0x8c1a,	// (0x0005d575) main_cset_slider_pane_g12_ParamLimits

0x8c1a,	// (0x0005d575) main_cset_slider_pane_g12

0x8c26,	// (0x0005d581) main_cset_slider_pane_g13_ParamLimits

0x8c26,	// (0x0005d581) main_cset_slider_pane_g13

0x8c32,	// (0x0005d58d) main_cset_slider_pane_g14_ParamLimits

0x8c32,	// (0x0005d58d) main_cset_slider_pane_g14

0x8c3e,	// (0x0005d599) main_cset_slider_pane_g15_ParamLimits

0x8c3e,	// (0x0005d599) main_cset_slider_pane_g15

0xefd4,	// (0x0006392f) main_cset_slider_pane_t14_ParamLimits

0xefd4,	// (0x0006392f) main_cset_slider_pane_t14

0xf00d,	// (0x00063968) main_cset_slider_pane_t15_ParamLimits

0xf00d,	// (0x00063968) main_cset_slider_pane_t15

0x92e8,	// (0x0005dc43) aid_cam4_burst_size_cell_ParamLimits

0x92e8,	// (0x0005dc43) aid_cam4_burst_size_cell

0x9304,	// (0x0005dc5f) grid_cam4_burst_pane_ParamLimits

0x9304,	// (0x0005dc5f) grid_cam4_burst_pane

0x9334,	// (0x0005dc8f) linegrid_cam4_burst_pane_ParamLimits

0x9334,	// (0x0005dc8f) linegrid_cam4_burst_pane

0x9354,	// (0x0005dcaf) scroll_pane_cp30_ParamLimits

0x9354,	// (0x0005dcaf) scroll_pane_cp30

0x9360,	// (0x0005dcbb) cell_cam4_burst_pane_ParamLimits

0x9360,	// (0x0005dcbb) cell_cam4_burst_pane

0x0565,	// (0x00054ec0) linegrid_cam4_burst_pane_g1_ParamLimits

0x0565,	// (0x00054ec0) linegrid_cam4_burst_pane_g1

0x939c,	// (0x0005dcf7) linegrid_cam4_burst_pane_g2_ParamLimits

0x939c,	// (0x0005dcf7) linegrid_cam4_burst_pane_g2

0x0572,	// (0x00054ecd) linegrid_cam4_burst_pane_g3_ParamLimits

0x0572,	// (0x00054ecd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006439c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006439c) linegrid_cam4_burst_pane_g

0x93ad,	// (0x0005dd08) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x93ad,	// (0x0005dd08) linegrid_cam4_burst_pane_g3_copy1

0x057f,	// (0x00054eda) linegrid_cam4_burst_pane_g4_ParamLimits

0x057f,	// (0x00054eda) linegrid_cam4_burst_pane_g4

0x93c7,	// (0x0005dd22) linegrid_cam4_burst_pane_g5_ParamLimits

0x93c7,	// (0x0005dd22) linegrid_cam4_burst_pane_g5

0x93d8,	// (0x0005dd33) linegrid_cam4_burst_pane_g6_ParamLimits

0x93d8,	// (0x0005dd33) linegrid_cam4_burst_pane_g6

0x058c,	// (0x00054ee7) linegrid_cam4_burst_pane_g7_ParamLimits

0x058c,	// (0x00054ee7) linegrid_cam4_burst_pane_g7

0x93e9,	// (0x0005dd44) cell_cam4_burst_pane_g1

0x05a5,	// (0x00054f00) main_cam5_pane_t1_ParamLimits

0x05a5,	// (0x00054f00) main_cam5_pane_t1

0x05b7,	// (0x00054f12) main_cam5_pane_t2_ParamLimits

0x05b7,	// (0x00054f12) main_cam5_pane_t2

0x05c9,	// (0x00054f24) main_cam5_pane_t3_ParamLimits

0x05c9,	// (0x00054f24) main_cam5_pane_t3

0x05db,	// (0x00054f36) main_cam5_pane_t4_ParamLimits

0x05db,	// (0x00054f36) main_cam5_pane_t4

0x05f3,	// (0x00054f4e) main_cam5_pane_t5_ParamLimits

0x05f3,	// (0x00054f4e) main_cam5_pane_t5

0x0607,	// (0x00054f62) main_cam5_pane_t6_ParamLimits

0x0607,	// (0x00054f62) main_cam5_pane_t6

0x061b,	// (0x00054f76) main_cam5_pane_t7_ParamLimits

0x061b,	// (0x00054f76) main_cam5_pane_t7

0x062d,	// (0x00054f88) main_cam5_pane_t8_ParamLimits

0x062d,	// (0x00054f88) main_cam5_pane_t8

0x0649,	// (0x00054fa4) main_cam5_pane_t9_ParamLimits

0x0649,	// (0x00054fa4) main_cam5_pane_t9

0x065b,	// (0x00054fb6) main_cam5_pane_t10_ParamLimits

0x065b,	// (0x00054fb6) main_cam5_pane_t10

0x066d,	// (0x00054fc8) main_cam5_pane_t11_ParamLimits

0x066d,	// (0x00054fc8) main_cam5_pane_t11

0x067f,	// (0x00054fda) main_cam5_pane_t12_ParamLimits

0x067f,	// (0x00054fda) main_cam5_pane_t12

0x0694,	// (0x00054fef) main_cam5_pane_t13_ParamLimits

0x0694,	// (0x00054fef) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000643a8) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000643a8) main_cam5_pane_t

0x32c0,	// (0x00057c1b) popup_scut_keymap_window_ParamLimits

0x32c0,	// (0x00057c1b) popup_scut_keymap_window

0x93fc,	// (0x0005dd57) aid_size_cell_brow_shortcut

0xc0a0,	// (0x000609fb) bg_popup_window_pane_cp010

0x9408,	// (0x0005dd63) grid_scut_pane

0x9414,	// (0x0005dd6f) cell_scut_pane_ParamLimits

0x9414,	// (0x0005dd6f) cell_scut_pane

0x942b,	// (0x0005dd86) cell_scut_pane_g1

0x06b1,	// (0x0005500c) cell_scut_pane_t1

0x06c0,	// (0x0005501b) cell_scut_pane_t2

0x9434,	// (0x0005dd8f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000643c3) cell_scut_pane_t

0x7251,	// (0x0005bbac) main_mup3_pane_g8_ParamLimits

0x7251,	// (0x0005bbac) main_mup3_pane_g8

0x8673,	// (0x0005cfce) area_vitu2_query_pane_ParamLimits

0x8673,	// (0x0005cfce) area_vitu2_query_pane

0x9194,	// (0x0005daef) input_focus_pane_cp08

0x06cf,	// (0x0005502a) area_vitu2_query_pane_g1

0x9442,	// (0x0005dd9d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000643ca) area_vitu2_query_pane_g

0x9453,	// (0x0005ddae) area_vitu2_query_pane_t1_ParamLimits

0x9453,	// (0x0005ddae) area_vitu2_query_pane_t1

0x9467,	// (0x0005ddc2) area_vitu2_query_pane_t2_ParamLimits

0x9467,	// (0x0005ddc2) area_vitu2_query_pane_t2

0x947b,	// (0x0005ddd6) area_vitu2_query_pane_t3_ParamLimits

0x947b,	// (0x0005ddd6) area_vitu2_query_pane_t3

0x0016,	// (0x00054971) area_vitu2_query_pane_t4_ParamLimits

0x0016,	// (0x00054971) area_vitu2_query_pane_t4

0x003e,	// (0x00054999) area_vitu2_query_pane_t5_ParamLimits

0x003e,	// (0x00054999) area_vitu2_query_pane_t5

0x0066,	// (0x000549c1) area_vitu2_query_pane_t6_ParamLimits

0x0066,	// (0x000549c1) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000643cf) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000643cf) area_vitu2_query_pane_t

0x94a3,	// (0x0005ddfe) bg_button_pane_cp018

0x94b1,	// (0x0005de0c) bg_button_pane_cp021

0x94bd,	// (0x0005de18) bg_button_pane_cp022

0x94ce,	// (0x0005de29) input_focus_pane_cp09

0xc951,	// (0x000612ac) aid_size_touch_mv_arrow_left

0xc97a,	// (0x000612d5) aid_size_touch_mv_arrow_right

0x8c56,	// (0x0005d5b1) main_cset_slider_pane_g16_ParamLimits

0x8c56,	// (0x0005d5b1) main_cset_slider_pane_g16

0x8c64,	// (0x0005d5bf) main_cset_slider_pane_g17_ParamLimits

0x8c64,	// (0x0005d5bf) main_cset_slider_pane_g17

0x93e9,	// (0x0005dd44) cell_cam4_burst_pane_g1_ParamLimits

0x114c,	// (0x00055aa7) compa_mode_pane

0x8e82,	// (0x0005d7dd) popup_vtel_slider_window_g3_ParamLimits

0x8e82,	// (0x0005d7dd) popup_vtel_slider_window_g3

0x8e96,	// (0x0005d7f1) popup_vtel_slider_window_g4_ParamLimits

0x8e96,	// (0x0005d7f1) popup_vtel_slider_window_g4

0x8eaa,	// (0x0005d805) popup_vtel_slider_window_t1_ParamLimits

0x8eaa,	// (0x0005d805) popup_vtel_slider_window_t1

0x331b,	// (0x00057c76) main_cl_pane

0x65a7,	// (0x0005af02) popup_imed_adjust2_window_ParamLimits

0xdf5c,	// (0x000628b7) bg_tb_trans_pane_cp05_ParamLimits

0xe8fb,	// (0x00063256) popup_imed_adjust2_window_g1_ParamLimits

0xe90a,	// (0x00063265) popup_imed_adjust2_window_g2_ParamLimits

0xe90a,	// (0x00063265) popup_imed_adjust2_window_g2

0xe916,	// (0x00063271) popup_imed_adjust2_window_g3_ParamLimits

0xe916,	// (0x00063271) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0006413a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0006413a) popup_imed_adjust2_window_g

0xe922,	// (0x0006327d) popup_imed_adjust2_window_t1_ParamLimits

0xe93a,	// (0x00063295) slider_imed_adjust_pane_ParamLimits

0xe94e,	// (0x000632a9) slider_imed_adjust_pane_g1_ParamLimits

0xe95e,	// (0x000632b9) slider_imed_adjust_pane_g2_ParamLimits

0xe96e,	// (0x000632c9) slider_imed_adjust_pane_g3_ParamLimits

0xe97f,	// (0x000632da) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00064141) slider_imed_adjust_pane_g_ParamLimits

0x83ac,	// (0x0005cd07) aid_touch_area_cam4_ParamLimits

0x83ac,	// (0x0005cd07) aid_touch_area_cam4

0x83bc,	// (0x0005cd17) battery_pane_cp01

0x8443,	// (0x0005cd9e) main_camera4_pane_g6_ParamLimits

0x8443,	// (0x0005cd9e) main_camera4_pane_g6

0x8461,	// (0x0005cdbc) main_camera4_pane_t2_ParamLimits

0x8461,	// (0x0005cdbc) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00064244) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00064244) main_camera4_pane_t

0x84f6,	// (0x0005ce51) aid_touch_area_vid4_ParamLimits

0x84f6,	// (0x0005ce51) aid_touch_area_vid4

0x8536,	// (0x0005ce91) main_video4_pane_g5_ParamLimits

0x8536,	// (0x0005ce91) main_video4_pane_g5

0x855a,	// (0x0005ceb5) vid4_progress_pane_ParamLimits

0x855a,	// (0x0005ceb5) vid4_progress_pane

0xef9a,	// (0x000638f5) main_cset_slider_pane_g18_ParamLimits

0xef9a,	// (0x000638f5) main_cset_slider_pane_g18

0x0599,	// (0x00054ef4) cell_cam4_burst_pane_g2_ParamLimits

0x0599,	// (0x00054ef4) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000643a3) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000643a3) cell_cam4_burst_pane_g

0x94df,	// (0x0005de3a) bg_cl_pane_ParamLimits

0x94df,	// (0x0005de3a) bg_cl_pane

0x94eb,	// (0x0005de46) cl_header_pane_ParamLimits

0x94eb,	// (0x0005de46) cl_header_pane

0x94f7,	// (0x0005de52) cl_listscroll_pane_ParamLimits

0x94f7,	// (0x0005de52) cl_listscroll_pane

0x06db,	// (0x00055036) bg_cl_pane_g1

0x06e3,	// (0x0005503e) bg_cl_pane_g2

0x06eb,	// (0x00055046) bg_cl_pane_g3

0x06f3,	// (0x0005504e) bg_cl_pane_g4

0x06fb,	// (0x00055056) bg_cl_pane_g5

0x0703,	// (0x0005505e) bg_cl_pane_g6

0x070b,	// (0x00055066) bg_cl_pane_g7

0x0713,	// (0x0005506e) bg_cl_pane_g8

0x071b,	// (0x00055076) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000643de) bg_cl_pane_g

0x9503,	// (0x0005de5e) aid_height_cl_leading_ParamLimits

0x9503,	// (0x0005de5e) aid_height_cl_leading

0x950f,	// (0x0005de6a) aid_height_cl_text_ParamLimits

0x950f,	// (0x0005de6a) aid_height_cl_text

0x04a2,	// (0x00054dfd) bg_cl_header_pane_ParamLimits

0x04a2,	// (0x00054dfd) bg_cl_header_pane

0x9527,	// (0x0005de82) cl_header_pane_g1_ParamLimits

0x9527,	// (0x0005de82) cl_header_pane_g1

0x9534,	// (0x0005de8f) cl_header_pane_t1_ParamLimits

0x9534,	// (0x0005de8f) cl_header_pane_t1

0x0723,	// (0x0005507e) cl_list_pane

0xef6d,	// (0x000638c8) hc_scroll_pane_cp01

0xc2d9,	// (0x00060c34) bg_cl_header_pane_g1

0xee53,	// (0x000637ae) bg_cl_header_pane_g2

0xc2f9,	// (0x00060c54) bg_cl_header_pane_g3

0xee63,	// (0x000637be) bg_cl_header_pane_g4

0xee5b,	// (0x000637b6) bg_cl_header_pane_g5

0xf0c2,	// (0x00063a1d) bg_cl_header_pane_g6

0xee7b,	// (0x000637d6) bg_cl_header_pane_g7

0xee83,	// (0x000637de) bg_cl_header_pane_g8

0xee73,	// (0x000637ce) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000643f1) bg_cl_header_pane_g

0x9546,	// (0x0005dea1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9546,	// (0x0005dea1) hc_cl_list_double_graphic_heading_pane

0x9557,	// (0x0005deb2) hc_cl_list_single_graphic_pane_ParamLimits

0x9557,	// (0x0005deb2) hc_cl_list_single_graphic_pane

0x9570,	// (0x0005decb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9570,	// (0x0005decb) hc_cl_list_single_graphic_pane_g1

0x957c,	// (0x0005ded7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x957c,	// (0x0005ded7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00064404) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00064404) hc_cl_list_single_graphic_pane_g

0x9590,	// (0x0005deeb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9590,	// (0x0005deeb) hc_cl_list_single_graphic_pane_t1

0x9570,	// (0x0005decb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9570,	// (0x0005decb) hc_cl_list_double_graphic_heading_pane_g1

0x95a5,	// (0x0005df00) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x95a5,	// (0x0005df00) hc_cl_list_double_graphic_heading_pane_g2

0x95b9,	// (0x0005df14) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x95b9,	// (0x0005df14) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00064409) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00064409) hc_cl_list_double_graphic_heading_pane_g

0x95cd,	// (0x0005df28) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x95cd,	// (0x0005df28) hc_cl_list_double_graphic_heading_pane_t1

0x95e2,	// (0x0005df3d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x95e2,	// (0x0005df3d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00064410) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00064410) hc_cl_list_double_graphic_heading_pane_t

0x95ff,	// (0x0005df5a) vid4_progress_pane_g1

0x960f,	// (0x0005df6a) vid4_progress_pane_g2

0x961f,	// (0x0005df7a) vid4_progress_pane_g3

0x9631,	// (0x0005df8c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00064415) vid4_progress_pane_g

0x9649,	// (0x0005dfa4) vid4_progress_pane_t1

0x965f,	// (0x0005dfba) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00064420) vid4_progress_pane_t

0x9689,	// (0x0005dfe4) wait_bar_pane_cp07

0xe157,	// (0x00062ab2) blid_firmament_pane_ParamLimits

0xe19a,	// (0x00062af5) popup_blid_sat_info2_window_g1

0xe1be,	// (0x00062b19) popup_blid_sat_info2_window_t3

0xe1cc,	// (0x00062b27) popup_blid_sat_info2_window_t4

0xe1da,	// (0x00062b35) popup_blid_sat_info2_window_t5

0xe1e8,	// (0x00062b43) popup_blid_sat_info2_window_t6

0xe1f8,	// (0x00062b53) popup_blid_sat_info2_window_t7

0xe206,	// (0x00062b61) popup_blid_sat_info2_window_t8

0xe214,	// (0x00062b6f) popup_blid_sat_info2_window_t9

0xe222,	// (0x00062b7d) popup_blid_sat_info2_window_t10

0xe2ed,	// (0x00062c48) aid_firma_cardinal_ParamLimits

0xe301,	// (0x00062c5c) blid_firmament_pane_t1_ParamLimits

0xe318,	// (0x00062c73) blid_firmament_pane_t2_ParamLimits

0xe32f,	// (0x00062c8a) blid_firmament_pane_t3_ParamLimits

0xe346,	// (0x00062ca1) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0006402e) blid_firmament_pane_t_ParamLimits

0xe35d,	// (0x00062cb8) blid_sat_info_pane_ParamLimits

0x6509,	// (0x0005ae64) main_cam_set_pane_ParamLimits

0x7a0a,	// (0x0005c365) aid_size_cell_colour_35_ParamLimits

0x7a24,	// (0x0005c37f) aid_size_cell_colour_112_ParamLimits

0x7a3b,	// (0x0005c396) aid_size_cell_effect_ParamLimits

0xd9f7,	// (0x00062352) bg_tb_trans_pane_cp02_ParamLimits

0xda05,	// (0x00062360) heading_imed_pane_ParamLimits

0x7a55,	// (0x0005c3b0) listscroll_imed_pane_ParamLimits

0xd51e,	// (0x00061e79) popup_call2_audio_first_window_g5_ParamLimits

0xd51e,	// (0x00061e79) popup_call2_audio_first_window_g5

0x815b,	// (0x0005cab6) aid_size_touch_image3_arrow_left_ParamLimits

0x815b,	// (0x0005cab6) aid_size_touch_image3_arrow_left

0x8171,	// (0x0005cacc) aid_size_touch_image3_arrow_right_ParamLimits

0x8171,	// (0x0005cacc) aid_size_touch_image3_arrow_right

0x9674,	// (0x0005dfcf) vid4_progress_pane_t3

0x7cf3,	// (0x0005c64e) main_hwr_training_symbol_option_pane_ParamLimits

0x7cf3,	// (0x0005c64e) main_hwr_training_symbol_option_pane

0xebe8,	// (0x00063543) popup_hwr_training_preview_window_ParamLimits

0xebe8,	// (0x00063543) popup_hwr_training_preview_window

0x7d54,	// (0x0005c6af) hwr_training_navi_pane_g5_ParamLimits

0x7d54,	// (0x0005c6af) hwr_training_navi_pane_g5

0xee41,	// (0x0006379c) popup_char_count_window

0x3301,	// (0x00057c5c) bg_popup_sub_pane_cp20_ParamLimits

0x8fa9,	// (0x0005d904) list_vitu2_match_list_pane_ParamLimits

0x8fb5,	// (0x0005d910) vitu2_page_scroll_pane_ParamLimits

0x8fb5,	// (0x0005d910) vitu2_page_scroll_pane

0x0735,	// (0x00055090) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0735,	// (0x00055090) list_single_hwr_training_symbol_option_pane

0x0748,	// (0x000550a3) list_single_hwr_training_symbol_option_pane_g1

0x0750,	// (0x000550ab) list_single_hwr_training_symbol_option_pane_t1

0x075e,	// (0x000550b9) bg_button_pane_cp023

0x0767,	// (0x000550c2) bg_button_pane_cp024

0x96d4,	// (0x0005e02f) vitu2_page_scroll_pane_g1

0x96dc,	// (0x0005e037) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00064427) vitu2_page_scroll_pane_g

0x96e4,	// (0x0005e03f) vitu2_page_scroll_pane_t1

0xe0b7,	// (0x00062a12) popup_char_count_window_g1

0x079a,	// (0x000550f5) popup_char_count_window_g2

0x07a3,	// (0x000550fe) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006442c) popup_char_count_window_g

0x07ac,	// (0x00055107) popup_char_count_window_t1

0x331b,	// (0x00057c76) main_vded2_pane

0xe8e7,	// (0x00063242) aid_size_cell_imed_line

0xe8f1,	// (0x0006324c) grid_imed_line_width_pane

0x85c8,	// (0x0005cf23) vid4_indicators_pane_g4

0x07ba,	// (0x00055115) cell_imed_line_width_pane_ParamLimits

0x07ba,	// (0x00055115) cell_imed_line_width_pane

0x07ce,	// (0x00055129) cell_imed_line_width_pane_g1

0x07d7,	// (0x00055132) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00064433) cell_imed_line_width_pane_g

0x96f3,	// (0x0005e04e) main_vded2_pane_g1_ParamLimits

0x96f3,	// (0x0005e04e) main_vded2_pane_g1

0x9700,	// (0x0005e05b) main_vded2_pane_g2_ParamLimits

0x9700,	// (0x0005e05b) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00064438) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00064438) main_vded2_pane_g

0x970e,	// (0x0005e069) vded2_slider_pane_ParamLimits

0x970e,	// (0x0005e069) vded2_slider_pane

0x971b,	// (0x0005e076) aid_size_touch_vded2_end

0x9725,	// (0x0005e080) aid_size_touch_vded2_playhead

0x07df,	// (0x0005513a) aid_size_touch_vded2_start

0x07e7,	// (0x00055142) vded2_slider_bg_pane

0x07f0,	// (0x0005514b) vded2_slider_pane_g1

0x07f9,	// (0x00055154) vded2_slider_pane_g2

0x972d,	// (0x0005e088) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006443d) vded2_slider_pane_g

0x0801,	// (0x0005515c) vded2_slider_bg_pane_g1

0x080a,	// (0x00055165) vded2_slider_bg_pane_g2

0x0813,	// (0x0005516e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00064444) vded2_slider_bg_pane_g

0x5df1,	// (0x0005a74c) aid_postcard_touch_down_pane_ParamLimits

0x5df1,	// (0x0005a74c) aid_postcard_touch_down_pane

0x5e01,	// (0x0005a75c) aid_postcard_touch_up_pane_ParamLimits

0x5e01,	// (0x0005a75c) aid_postcard_touch_up_pane

0x331b,	// (0x00057c76) main_blid2_pane

0x6532,	// (0x0005ae8d) popup_blid2_search_window

0x114c,	// (0x00055aa7) blid2_gps_pane

0x114c,	// (0x00055aa7) blid2_navig_pane

0x114c,	// (0x00055aa7) blid2_search_pane

0x114c,	// (0x00055aa7) blid2_tripm_pane

0x9736,	// (0x0005e091) blid2_search_pane_g1_ParamLimits

0x9736,	// (0x0005e091) blid2_search_pane_g1

0x9746,	// (0x0005e0a1) blid2_search_pane_t1_ParamLimits

0x9746,	// (0x0005e0a1) blid2_search_pane_t1

0x9758,	// (0x0005e0b3) aid_size_cell_blid2_gps_ParamLimits

0x9758,	// (0x0005e0b3) aid_size_cell_blid2_gps

0x9768,	// (0x0005e0c3) blid2_gps_pane_g1_ParamLimits

0x9768,	// (0x0005e0c3) blid2_gps_pane_g1

0x9774,	// (0x0005e0cf) grid_blid2_satellite_pane_ParamLimits

0x9774,	// (0x0005e0cf) grid_blid2_satellite_pane

0x9784,	// (0x0005e0df) blid2_navig_pane_g1_ParamLimits

0x9784,	// (0x0005e0df) blid2_navig_pane_g1

0x9790,	// (0x0005e0eb) blid2_navig_pane_t1_ParamLimits

0x9790,	// (0x0005e0eb) blid2_navig_pane_t1

0x97a2,	// (0x0005e0fd) blid2_navig_pane_t2_ParamLimits

0x97a2,	// (0x0005e0fd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0006444b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0006444b) blid2_navig_pane_t

0x97b4,	// (0x0005e10f) blid2_navig_ring_pane_ParamLimits

0x97b4,	// (0x0005e10f) blid2_navig_ring_pane

0x97c4,	// (0x0005e11f) blid2_speed_pane_ParamLimits

0x97c4,	// (0x0005e11f) blid2_speed_pane

0x97d0,	// (0x0005e12b) blid2_tripm_pane_g1_ParamLimits

0x97d0,	// (0x0005e12b) blid2_tripm_pane_g1

0x97e0,	// (0x0005e13b) blid2_tripm_pane_g2_ParamLimits

0x97e0,	// (0x0005e13b) blid2_tripm_pane_g2

0x97ec,	// (0x0005e147) blid2_tripm_pane_g3_ParamLimits

0x97ec,	// (0x0005e147) blid2_tripm_pane_g3

0x97f8,	// (0x0005e153) blid2_tripm_pane_g4_ParamLimits

0x97f8,	// (0x0005e153) blid2_tripm_pane_g4

0x9804,	// (0x0005e15f) blid2_tripm_pane_g5_ParamLimits

0x9804,	// (0x0005e15f) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00064450) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00064450) blid2_tripm_pane_g

0x9820,	// (0x0005e17b) blid2_tripm_pane_t1_ParamLimits

0x9820,	// (0x0005e17b) blid2_tripm_pane_t1

0x9834,	// (0x0005e18f) blid2_tripm_pane_t2_ParamLimits

0x9834,	// (0x0005e18f) blid2_tripm_pane_t2

0x9846,	// (0x0005e1a1) blid2_tripm_pane_t3_ParamLimits

0x9846,	// (0x0005e1a1) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0006445d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0006445d) blid2_tripm_pane_t

0x9878,	// (0x0005e1d3) cell_blid2_satellite_pane_ParamLimits

0x9878,	// (0x0005e1d3) cell_blid2_satellite_pane

0x9892,	// (0x0005e1ed) cell_blid2_satellite_pane_g1

0x081c,	// (0x00055177) cell_blid2_satellite_pane_t1

0xe36d,	// (0x00062cc8) blid2_speed_pane_g1

0x082a,	// (0x00055185) blid2_speed_pane_t1

0x0838,	// (0x00055193) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00064466) blid2_speed_pane_t

0xe36d,	// (0x00062cc8) blid2_navig_ring_pane_g1

0x989b,	// (0x0005e1f6) blid2_navig_ring_pane_g2

0x98a3,	// (0x0005e1fe) blid2_navig_ring_pane_g3

0x98ab,	// (0x0005e206) blid2_navig_ring_pane_g4

0x98b3,	// (0x0005e20e) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0006446b) blid2_navig_ring_pane_g

0x114c,	// (0x00055aa7) bg_popup_window_pane_cp011

0x0846,	// (0x000551a1) popup_blid2_search_window_g1

0x084e,	// (0x000551a9) popup_blid2_search_window_t1

0x085c,	// (0x000551b7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00064476) popup_blid2_search_window_t

0xc1e8,	// (0x00060b43) main_browser_pane_g1

0xbedb,	// (0x00060836) main_browser_pane_ParamLimits

0x6509,	// (0x0005ae64) bg_button_pane_cp011_ParamLimits

0x8877,	// (0x0005d1d2) cell_vitu2_function_pane_g1_ParamLimits

0xdf5c,	// (0x000628b7) bg_popup_sub_pane_cp22_ParamLimits

0x9194,	// (0x0005daef) input_focus_pane_cp08_ParamLimits

0x91ab,	// (0x0005db06) popup_vitu2_query_button_pane_ParamLimits

0x91ab,	// (0x0005db06) popup_vitu2_query_button_pane

0x91bc,	// (0x0005db17) popup_vitu2_query_input_button_pane

0x04e3,	// (0x00054e3e) popup_vitu2_query_window_g1_ParamLimits

0x91c6,	// (0x0005db21) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00064377) popup_vitu2_query_window_g_ParamLimits

0x114c,	// (0x00055aa7) bg_button_pane_cp026

0x98bb,	// (0x0005e216) popup_vitu2_query_input_button_pane_g1

0x114c,	// (0x00055aa7) bg_button_pane_cp025

0x086a,	// (0x000551c5) popup_vitu2_query_button_pane_t1

0x6f88,	// (0x0005b8e3) main_mp3_pane_t6

0x6f98,	// (0x0005b8f3) popup_slider_window_cp01

0x84a5,	// (0x0005ce00) cam4_battery_pane

0x8585,	// (0x0005cee0) cam4_battery_pane_cp02

0x95f7,	// (0x0005df52) cam4_battery_pane_cp01

0x95f7,	// (0x0005df52) cam4_battery_pane_cp03

0x0878,	// (0x000551d3) cam4_battery_pane_g1

0xe36d,	// (0x00062cc8) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0006447b) cam4_battery_pane_g

0xe230,	// (0x00062b8b) popup_blid_sat_info2_window_t11

0xc951,	// (0x000612ac) aid_size_touch_mv_arrow_left_ParamLimits

0xc97a,	// (0x000612d5) aid_size_touch_mv_arrow_right_ParamLimits

0xc9d8,	// (0x00061333) navi_pane_g1_ParamLimits

0xc9e4,	// (0x0006133f) navi_pane_g2_ParamLimits

0xca12,	// (0x0006136d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00063d40) navi_pane_g_ParamLimits

0x57b7,	// (0x0005a112) navi_pane_mv_t1_ParamLimits

0x7a61,	// (0x0005c3bc) grid_imed_effect_pane_ParamLimits

0x41ad,	// (0x00058b08) aid_placing_vt_slider_lsc

0xc137,	// (0x00060a92) aid_placing_vt_slider_prt

0xd9f7,	// (0x00062352) bg_tb_trans_pane_cp01_ParamLimits

0xe4f0,	// (0x00062e4b) popup_image_details_window_g1_ParamLimits

0xe503,	// (0x00062e5e) popup_image_details_window_g2_ParamLimits

0xe518,	// (0x00062e73) popup_image_details_window_g3_ParamLimits

0xe518,	// (0x00062e73) popup_image_details_window_g3

0xf718,	// (0x00064073) popup_image_details_window_g_ParamLimits

0xe52c,	// (0x00062e87) popup_image_details_window_t1_ParamLimits

0xe53e,	// (0x00062e99) popup_image_details_window_t2_ParamLimits

0xe557,	// (0x00062eb2) popup_image_details_window_t3_ParamLimits

0xe56b,	// (0x00062ec6) popup_image_details_window_t4_ParamLimits

0xe586,	// (0x00062ee1) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0006407a) popup_image_details_window_t_ParamLimits

0x951b,	// (0x0005de76) cl_header_name_pane_ParamLimits

0x951b,	// (0x0005de76) cl_header_name_pane

0x98c3,	// (0x0005e21e) cl_header_name_pane_t1_ParamLimits

0x98c3,	// (0x0005e21e) cl_header_name_pane_t1

0x98da,	// (0x0005e235) cl_header_name_pane_t2_ParamLimits

0x98da,	// (0x0005e235) cl_header_name_pane_t2

0x9904,	// (0x0005e25f) cl_header_name_pane_t3_ParamLimits

0x9904,	// (0x0005e25f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00064480) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00064480) cl_header_name_pane_t

0xcaa1,	// (0x000613fc) navi_pane_mv_g2_ParamLimits

0xedfe,	// (0x00063759) field_vitu2_entry_pane_g1_ParamLimits

0xee0a,	// (0x00063765) field_vitu2_entry_pane_g2_ParamLimits

0xee16,	// (0x00063771) field_vitu2_entry_pane_g3_ParamLimits

0xee16,	// (0x00063771) field_vitu2_entry_pane_g3

0xf91b,	// (0x00064276) field_vitu2_entry_pane_g_ParamLimits

0x880b,	// (0x0005d166) cell_vitu2_itu_pane_g1_ParamLimits

0x881d,	// (0x0005d178) cell_vitu2_itu_pane_g2_ParamLimits

0x881d,	// (0x0005d178) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00064282) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00064282) cell_vitu2_itu_pane_g

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp05_ParamLimits

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp05

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp03

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp04

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp10_ParamLimits

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp10

0x94bd,	// (0x0005de18) bg_vkb2_func_pane_cp08

0x94a3,	// (0x0005ddfe) bg_vkb2_func_pane_cp06

0x94b1,	// (0x0005de0c) bg_vkb2_func_pane_cp07

0x0770,	// (0x000550cb) bg_vkb2_func_pane_cp11_ParamLimits

0x0770,	// (0x000550cb) bg_vkb2_func_pane_cp11

0x0785,	// (0x000550e0) bg_vkb2_func_pane_cp12_ParamLimits

0x0785,	// (0x000550e0) bg_vkb2_func_pane_cp12

0x114c,	// (0x00055aa7) bg_vkb2_func_pane_cp09

0xee53,	// (0x000637ae) bg_vkb2_func_pane_g1

0xc2f9,	// (0x00060c54) bg_vkb2_func_pane_g2

0xee5b,	// (0x000637b6) bg_vkb2_func_pane_g3

0xee63,	// (0x000637be) bg_vkb2_func_pane_g4

0xf0c2,	// (0x00063a1d) bg_vkb2_func_pane_g5

0xee7b,	// (0x000637d6) bg_vkb2_func_pane_g6

0xee83,	// (0x000637de) bg_vkb2_func_pane_g7

0xee73,	// (0x000637ce) bg_vkb2_func_pane_g8

0xc2d9,	// (0x00060c34) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00064487) bg_vkb2_func_pane_g

0x9812,	// (0x0005e16d) blid2_tripm_pane_g6_ParamLimits

0x9812,	// (0x0005e16d) blid2_tripm_pane_g6

0xeca0,	// (0x000635fb) mp4_progress_pane_g1

0x986c,	// (0x0005e1c7) blid2_tripm_values_pane_ParamLimits

0x986c,	// (0x0005e1c7) blid2_tripm_values_pane

0x9929,	// (0x0005e284) blid2_tripm_values_pane_t1

0x9937,	// (0x0005e292) blid2_tripm_values_pane_t2

0x9945,	// (0x0005e2a0) blid2_tripm_values_pane_t3

0x9953,	// (0x0005e2ae) blid2_tripm_values_pane_t4

0x9961,	// (0x0005e2bc) blid2_tripm_values_pane_t5

0x996f,	// (0x0005e2ca) blid2_tripm_values_pane_t6

0x997d,	// (0x0005e2d8) blid2_tripm_values_pane_t7

0x998b,	// (0x0005e2e6) blid2_tripm_values_pane_t8

0x9999,	// (0x0005e2f4) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0006449a) blid2_tripm_values_pane_t

0x41ed,	// (0x00058b48) call_video_pane_t1_ParamLimits

0x420e,	// (0x00058b69) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00063bc9) call_video_pane_t_ParamLimits

0x5cf8,	// (0x0005a653) msg_header_pane_g1_ParamLimits

0xcc7b,	// (0x000615d6) msg_header_pane_g2_ParamLimits

0xcc7b,	// (0x000615d6) msg_header_pane_g2

0x0001,

0xf488,	// (0x00063de3) msg_header_pane_g_ParamLimits

0xf488,	// (0x00063de3) msg_header_pane_g

0xbedb,	// (0x00060836) main_clock2_pane_ParamLimits

0x77f9,	// (0x0005c154) grid_clock2_toolbar_pane_ParamLimits

0x77f9,	// (0x0005c154) grid_clock2_toolbar_pane

0x77f9,	// (0x0005c154) listscroll_clock2_pane_ParamLimits

0x77f9,	// (0x0005c154) listscroll_clock2_pane

0x789f,	// (0x0005c1fa) main_clock2_pane_t3_ParamLimits

0x789f,	// (0x0005c1fa) main_clock2_pane_t3

0x78b1,	// (0x0005c20c) main_clock2_pane_t4_ParamLimits

0x78b1,	// (0x0005c20c) main_clock2_pane_t4

0x0882,	// (0x000551dd) cell_clock2_toolbar_pane

0x088a,	// (0x000551e5) cell_clock2_toolbar_pane_cp01

0x088a,	// (0x000551e5) cell_clock2_toolbar_pane_cp02

0x0892,	// (0x000551ed) cell_clock2_toolbar_pane_cp03

0x089a,	// (0x000551f5) list_clock2_pane

0xc8c7,	// (0x00061222) scroll_pane_cp10

0x08a2,	// (0x000551fd) list_single_clock2_pane_ParamLimits

0x08a2,	// (0x000551fd) list_single_clock2_pane

0xc0a0,	// (0x000609fb) list_highlight_pane_cp08

0x08af,	// (0x0005520a) list_single_clock2_pane_t1

0x08bd,	// (0x00055218) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000644ad) list_single_clock2_pane_t

0x114c,	// (0x00055aa7) bg_button_pane_cp10

0x08cb,	// (0x00055226) cell_clock2_toolbar_pane_g1

0x5d5f,	// (0x0005a6ba) aid_main_viewer_pane_g1_ParamLimits

0x5d5f,	// (0x0005a6ba) aid_main_viewer_pane_g1

0x5d6b,	// (0x0005a6c6) aid_main_viewer_pane_g2_ParamLimits

0x5d6b,	// (0x0005a6c6) aid_main_viewer_pane_g2

0x5d77,	// (0x0005a6d2) aid_main_viewer_pane_g3_ParamLimits

0x5d77,	// (0x0005a6d2) aid_main_viewer_pane_g3

0x5d88,	// (0x0005a6e3) aid_main_viewer_pane_g4_ParamLimits

0x5d88,	// (0x0005a6e3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00063df4) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00063df4) aid_main_viewer_pane_g

0x64fc,	// (0x0005ae57) main_calc_pane_ParamLimits

0x6517,	// (0x0005ae72) main_dialer2_pane_ParamLimits

0x331b,	// (0x00057c76) main_cam6_pane

0x331b,	// (0x00057c76) main_vid6_pane

0x7805,	// (0x0005c160) listscroll_gen_pane_cp06_ParamLimits

0x7805,	// (0x0005c160) listscroll_gen_pane_cp06

0x78c3,	// (0x0005c21e) main_clock2_pane_t5_ParamLimits

0x78c3,	// (0x0005c21e) main_clock2_pane_t5

0x790c,	// (0x0005c267) aid_call2_pane_cp10_ParamLimits

0x791e,	// (0x0005c279) aid_call_pane_cp10_ParamLimits

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7930,	// (0x0005c28b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7930,	// (0x0005c28b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc945,	// (0x000612a0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0006412f) popup_clock_analogue_window_cp10_g_ParamLimits

0x7942,	// (0x0005c29d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8108,	// (0x0005ca63) cell_dialer2_keypad_pane_g2_ParamLimits

0x8108,	// (0x0005ca63) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00064215) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00064215) cell_dialer2_keypad_pane_g

0x8124,	// (0x0005ca7f) cell_dialer2_keypad_pane_t1

0x8b42,	// (0x0005d49d) main_cset_text2_pane_ParamLimits

0x8b42,	// (0x0005d49d) main_cset_text2_pane

0x06cf,	// (0x0005502a) area_vitu2_query_pane_g1_ParamLimits

0x9442,	// (0x0005dd9d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000643ca) area_vitu2_query_pane_g_ParamLimits

0x008e,	// (0x000549e9) area_vitu2_query_pane_t7_ParamLimits

0x008e,	// (0x000549e9) area_vitu2_query_pane_t7

0x94a3,	// (0x0005ddfe) bg_button_pane_cp018_ParamLimits

0x94b1,	// (0x0005de0c) bg_button_pane_cp021_ParamLimits

0x94bd,	// (0x0005de18) bg_button_pane_cp022_ParamLimits

0x94bd,	// (0x0005de18) bg_vkb2_func_pane_cp08_ParamLimits

0x94a3,	// (0x0005ddfe) bg_vkb2_func_pane_cp06_ParamLimits

0x94b1,	// (0x0005de0c) bg_vkb2_func_pane_cp07_ParamLimits

0x94ce,	// (0x0005de29) input_focus_pane_cp09_ParamLimits

0x99a7,	// (0x0005e302) cam6_autofocus_pane_ParamLimits

0x99a7,	// (0x0005e302) cam6_autofocus_pane

0x99c9,	// (0x0005e324) cam6_image_uncrop_pane_ParamLimits

0x99c9,	// (0x0005e324) cam6_image_uncrop_pane

0x99f6,	// (0x0005e351) cam6_indi_pane_ParamLimits

0x99f6,	// (0x0005e351) cam6_indi_pane

0x9a10,	// (0x0005e36b) cam6_mode_pane_ParamLimits

0x9a10,	// (0x0005e36b) cam6_mode_pane

0x9a24,	// (0x0005e37f) cam6_timer_pane_ParamLimits

0x9a24,	// (0x0005e37f) cam6_timer_pane

0x9a30,	// (0x0005e38b) cam6_zoom_pane_ParamLimits

0x9a30,	// (0x0005e38b) cam6_zoom_pane

0x9a48,	// (0x0005e3a3) cam6_mode_pane_g1_ParamLimits

0x9a48,	// (0x0005e3a3) cam6_mode_pane_g1

0x9a54,	// (0x0005e3af) cam6_mode_pane_g2_ParamLimits

0x9a54,	// (0x0005e3af) cam6_mode_pane_g2

0x9a60,	// (0x0005e3bb) cam6_mode_pane_g3_ParamLimits

0x9a60,	// (0x0005e3bb) cam6_mode_pane_g3

0x9a6c,	// (0x0005e3c7) cam6_mode_pane_g4_ParamLimits

0x9a6c,	// (0x0005e3c7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000644b2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000644b2) cam6_mode_pane_g

0x0143,	// (0x00054a9e) bg_tb_trans_pane_cp08_ParamLimits

0x0143,	// (0x00054a9e) bg_tb_trans_pane_cp08

0x08d3,	// (0x0005522e) cam6_battery_pane_ParamLimits

0x08d3,	// (0x0005522e) cam6_battery_pane

0x08e9,	// (0x00055244) cam6_indi_pane_g1_ParamLimits

0x08e9,	// (0x00055244) cam6_indi_pane_g1

0x08fb,	// (0x00055256) cam6_indi_pane_g2_ParamLimits

0x08fb,	// (0x00055256) cam6_indi_pane_g2

0x090d,	// (0x00055268) cam6_indi_pane_g3_ParamLimits

0x090d,	// (0x00055268) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000644bb) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000644bb) cam6_indi_pane_g

0x091f,	// (0x0005527a) cam6_indi_pane_t1_ParamLimits

0x091f,	// (0x0005527a) cam6_indi_pane_t1

0x8605,	// (0x0005cf60) cam6_autofocus_pane_g1

0x85fd,	// (0x0005cf58) cam6_autofocus_pane_g2

0x8615,	// (0x0005cf70) cam6_autofocus_pane_g3

0x860d,	// (0x0005cf68) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000644c2) cam6_autofocus_pane_g

0x0945,	// (0x000552a0) cam6_timer_pane_g1

0x094d,	// (0x000552a8) cam6_timer_pane_t1

0x095b,	// (0x000552b6) cam6_zoom_cont_pane

0x0963,	// (0x000552be) cam6_zoom_pane_g1

0x096b,	// (0x000552c6) cam6_zoom_pane_g2

0x9a78,	// (0x0005e3d3) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000644cb) cam6_zoom_pane_g

0xe36d,	// (0x00062cc8) cam6_battery_pane_g1

0xe36d,	// (0x00062cc8) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00064037) cam6_battery_pane_g

0x0973,	// (0x000552ce) cam6_zoom_cont_pane_g1

0x097c,	// (0x000552d7) cam6_zoom_cont_pane_g2

0x0985,	// (0x000552e0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000644d2) cam6_zoom_cont_pane_g

0x9a95,	// (0x0005e3f0) cam6_mode_pane_cp_ParamLimits

0x9a95,	// (0x0005e3f0) cam6_mode_pane_cp

0x9aa9,	// (0x0005e404) cam6_zoom_pane_cp_ParamLimits

0x9aa9,	// (0x0005e404) cam6_zoom_pane_cp

0x9ac1,	// (0x0005e41c) vid6_image_uncrop_cif_pane_ParamLimits

0x9ac1,	// (0x0005e41c) vid6_image_uncrop_cif_pane

0x9aed,	// (0x0005e448) vid6_image_uncrop_nhd_pane_ParamLimits

0x9aed,	// (0x0005e448) vid6_image_uncrop_nhd_pane

0x9b0a,	// (0x0005e465) vid6_image_uncrop_vga_pane_ParamLimits

0x9b0a,	// (0x0005e465) vid6_image_uncrop_vga_pane

0x9b29,	// (0x0005e484) vid6_image_uncrop_wvga_pane_ParamLimits

0x9b29,	// (0x0005e484) vid6_image_uncrop_wvga_pane

0x9b46,	// (0x0005e4a1) vid6_indi_pane_ParamLimits

0x9b46,	// (0x0005e4a1) vid6_indi_pane

0x0143,	// (0x00054a9e) bg_tb_trans_pane_cp09_ParamLimits

0x0143,	// (0x00054a9e) bg_tb_trans_pane_cp09

0x099d,	// (0x000552f8) cam6_battery_pane_cp_ParamLimits

0x099d,	// (0x000552f8) cam6_battery_pane_cp

0x09a9,	// (0x00055304) vid6_indi_pane_g1_ParamLimits

0x09a9,	// (0x00055304) vid6_indi_pane_g1

0x09bb,	// (0x00055316) vid6_indi_pane_g2_ParamLimits

0x09bb,	// (0x00055316) vid6_indi_pane_g2

0x09cd,	// (0x00055328) vid6_indi_pane_g3_ParamLimits

0x09cd,	// (0x00055328) vid6_indi_pane_g3

0x09e2,	// (0x0005533d) vid6_indi_pane_g4_ParamLimits

0x09e2,	// (0x0005533d) vid6_indi_pane_g4

0x09f7,	// (0x00055352) vid6_indi_pane_g5_ParamLimits

0x09f7,	// (0x00055352) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000644d9) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000644d9) vid6_indi_pane_g

0x0a11,	// (0x0005536c) vid6_indi_pane_t1_ParamLimits

0x0a11,	// (0x0005536c) vid6_indi_pane_t1

0x0a27,	// (0x00055382) vid6_indi_pane_t2_ParamLimits

0x0a27,	// (0x00055382) vid6_indi_pane_t2

0x0a4f,	// (0x000553aa) vid6_indi_pane_t3_ParamLimits

0x0a4f,	// (0x000553aa) vid6_indi_pane_t3

0x0a77,	// (0x000553d2) vid6_indi_pane_t4_ParamLimits

0x0a77,	// (0x000553d2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000644e4) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000644e4) vid6_indi_pane_t

0x0a9b,	// (0x000553f6) wait_bar_pane_cp08

0x9b6b,	// (0x0005e4c6) main_cset_text2_pane_t1_ParamLimits

0x9b6b,	// (0x0005e4c6) main_cset_text2_pane_t1

0x9a80,	// (0x0005e3db) listscroll_gen_pane_cp06_t1_ParamLimits

0x9a80,	// (0x0005e3db) listscroll_gen_pane_cp06_t1

0x331b,	// (0x00057c76) main_cam6_set_pane

0x8497,	// (0x0005cdf2) bg_tb_trans_pane_cp06_ParamLimits

0x84ad,	// (0x0005ce08) cam4_indicators_pane_g1_ParamLimits

0x84be,	// (0x0005ce19) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00064252) cam4_indicators_pane_g_ParamLimits

0x84dc,	// (0x0005ce37) cam4_indicators_pane_t1_ParamLimits

0x6509,	// (0x0005ae64) bg_tb_trans_pane_cp07_ParamLimits

0x858f,	// (0x0005ceea) vid4_indicators_pane_g1_ParamLimits

0x85a3,	// (0x0005cefe) vid4_indicators_pane_g2_ParamLimits

0x85b7,	// (0x0005cf12) vid4_indicators_pane_g3_ParamLimits

0x85c8,	// (0x0005cf23) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00064264) vid4_indicators_pane_g_ParamLimits

0x85e6,	// (0x0005cf41) vid4_indicators_pane_t1_ParamLimits

0x95ff,	// (0x0005df5a) vid4_progress_pane_g1_ParamLimits

0x960f,	// (0x0005df6a) vid4_progress_pane_g2_ParamLimits

0x961f,	// (0x0005df7a) vid4_progress_pane_g3_ParamLimits

0x9631,	// (0x0005df8c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00064415) vid4_progress_pane_g_ParamLimits

0x9649,	// (0x0005dfa4) vid4_progress_pane_t1_ParamLimits

0x965f,	// (0x0005dfba) vid4_progress_pane_t2_ParamLimits

0x9674,	// (0x0005dfcf) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00064420) vid4_progress_pane_t_ParamLimits

0x9689,	// (0x0005dfe4) wait_bar_pane_cp07_ParamLimits

0x9b9e,	// (0x0005e4f9) main_cam6_set_pane_g2_ParamLimits

0x9b9e,	// (0x0005e4f9) main_cam6_set_pane_g2

0x9baa,	// (0x0005e505) main_cset6_listscroll_pane_ParamLimits

0x9baa,	// (0x0005e505) main_cset6_listscroll_pane

0x9bd5,	// (0x0005e530) main_cset6_slider_pane_ParamLimits

0x9bd5,	// (0x0005e530) main_cset6_slider_pane

0x9be1,	// (0x0005e53c) main_cset6_text2_pane_ParamLimits

0x9be1,	// (0x0005e53c) main_cset6_text2_pane

0x0aaa,	// (0x00055405) main_cset6_text_pane

0x0ab2,	// (0x0005540d) main_cset_list_pane_copy1_ParamLimits

0x0ab2,	// (0x0005540d) main_cset_list_pane_copy1

0x0ac2,	// (0x0005541d) scroll_pane_cp028_copy1

0x9bf4,	// (0x0005e54f) cset_list_set_pane_copy1

0x9c07,	// (0x0005e562) aid_position_infowindow_above_copy1

0x9c0f,	// (0x0005e56a) aid_position_infowindow_below_copy1

0x9c17,	// (0x0005e572) cset_list_set_pane_g1_copy1

0xf052,	// (0x000639ad) cset_list_set_pane_g3_copy1_ParamLimits

0xf052,	// (0x000639ad) cset_list_set_pane_g3_copy1

0xf061,	// (0x000639bc) cset_list_set_pane_t1_copy1_ParamLimits

0xf061,	// (0x000639bc) cset_list_set_pane_t1_copy1

0xd9f7,	// (0x00062352) list_highlight_pane_cp021_copy1_ParamLimits

0xd9f7,	// (0x00062352) list_highlight_pane_cp021_copy1

0x0acb,	// (0x00055426) cset6_slider_pane_ParamLimits

0x0acb,	// (0x00055426) cset6_slider_pane

0x0af7,	// (0x00055452) main_cset6_slider_pane_g1_ParamLimits

0x0af7,	// (0x00055452) main_cset6_slider_pane_g1

0x9c1f,	// (0x0005e57a) main_cset6_slider_pane_g2_ParamLimits

0x9c1f,	// (0x0005e57a) main_cset6_slider_pane_g2

0x0b1f,	// (0x0005547a) main_cset6_slider_pane_g3_ParamLimits

0x0b1f,	// (0x0005547a) main_cset6_slider_pane_g3

0x9c47,	// (0x0005e5a2) main_cset6_slider_pane_g4_ParamLimits

0x9c47,	// (0x0005e5a2) main_cset6_slider_pane_g4

0x9c53,	// (0x0005e5ae) main_cset6_slider_pane_g5_ParamLimits

0x9c53,	// (0x0005e5ae) main_cset6_slider_pane_g5

0xef82,	// (0x000638dd) main_cset6_slider_pane_g7_ParamLimits

0xef82,	// (0x000638dd) main_cset6_slider_pane_g7

0xef8e,	// (0x000638e9) main_cset6_slider_pane_g8_ParamLimits

0xef8e,	// (0x000638e9) main_cset6_slider_pane_g8

0x9c61,	// (0x0005e5bc) main_cset6_slider_pane_g9_ParamLimits

0x9c61,	// (0x0005e5bc) main_cset6_slider_pane_g9

0x9c6d,	// (0x0005e5c8) main_cset6_slider_pane_g10_ParamLimits

0x9c6d,	// (0x0005e5c8) main_cset6_slider_pane_g10

0x9c79,	// (0x0005e5d4) main_cset6_slider_pane_g11_ParamLimits

0x9c79,	// (0x0005e5d4) main_cset6_slider_pane_g11

0x9c85,	// (0x0005e5e0) main_cset6_slider_pane_g12_ParamLimits

0x9c85,	// (0x0005e5e0) main_cset6_slider_pane_g12

0x9c91,	// (0x0005e5ec) main_cset6_slider_pane_g13_ParamLimits

0x9c91,	// (0x0005e5ec) main_cset6_slider_pane_g13

0x9c9d,	// (0x0005e5f8) main_cset6_slider_pane_g14_ParamLimits

0x9c9d,	// (0x0005e5f8) main_cset6_slider_pane_g14

0x9ca9,	// (0x0005e604) main_cset6_slider_pane_g15_ParamLimits

0x9ca9,	// (0x0005e604) main_cset6_slider_pane_g15

0x9cc1,	// (0x0005e61c) main_cset6_slider_pane_g16_ParamLimits

0x9cc1,	// (0x0005e61c) main_cset6_slider_pane_g16

0x9ccf,	// (0x0005e62a) main_cset6_slider_pane_g17_ParamLimits

0x9ccf,	// (0x0005e62a) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000644ed) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000644ed) main_cset6_slider_pane_g

0x0b2b,	// (0x00055486) main_cset6_slider_pane_t1_ParamLimits

0x0b2b,	// (0x00055486) main_cset6_slider_pane_t1

0x9cf5,	// (0x0005e650) main_cset6_slider_pane_t2_ParamLimits

0x9cf5,	// (0x0005e650) main_cset6_slider_pane_t2

0x9d20,	// (0x0005e67b) main_cset6_slider_pane_t3_ParamLimits

0x9d20,	// (0x0005e67b) main_cset6_slider_pane_t3

0x9d4b,	// (0x0005e6a6) main_cset6_slider_pane_t4_ParamLimits

0x9d4b,	// (0x0005e6a6) main_cset6_slider_pane_t4

0x9d76,	// (0x0005e6d1) main_cset6_slider_pane_t5_ParamLimits

0x9d76,	// (0x0005e6d1) main_cset6_slider_pane_t5

0x0b6c,	// (0x000554c7) main_cset6_slider_pane_t7_ParamLimits

0x0b6c,	// (0x000554c7) main_cset6_slider_pane_t7

0x9da3,	// (0x0005e6fe) main_cset6_slider_pane_t8_ParamLimits

0x9da3,	// (0x0005e6fe) main_cset6_slider_pane_t8

0x9dc7,	// (0x0005e722) main_cset6_slider_pane_t9_ParamLimits

0x9dc7,	// (0x0005e722) main_cset6_slider_pane_t9

0x9deb,	// (0x0005e746) main_cset6_slider_pane_t10_ParamLimits

0x9deb,	// (0x0005e746) main_cset6_slider_pane_t10

0x9e0f,	// (0x0005e76a) main_cset6_slider_pane_t11_ParamLimits

0x9e0f,	// (0x0005e76a) main_cset6_slider_pane_t11

0x0ba2,	// (0x000554fd) main_cset6_slider_pane_t14_ParamLimits

0x0ba2,	// (0x000554fd) main_cset6_slider_pane_t14

0x0bdb,	// (0x00055536) main_cset6_slider_pane_t15_ParamLimits

0x0bdb,	// (0x00055536) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00064512) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00064512) main_cset6_slider_pane_t

0xf089,	// (0x000639e4) cset_slider_pane_g1_copy1

0xf092,	// (0x000639ed) cset_slider_pane_g2_copy1

0xf09b,	// (0x000639f6) cset_slider_pane_g3_copy1

0x114c,	// (0x00055aa7) bg_popup_sub_pane_cp011_copy1

0x0c14,	// (0x0005556f) main_cset_text_pane_g1_copy1

0x04f7,	// (0x00054e52) main_cset_text_pane_t1_copy1

0x0505,	// (0x00054e60) main_cset_text_pane_t2_copy1

0x0513,	// (0x00054e6e) main_cset_text_pane_t3_copy1

0x0521,	// (0x00054e7c) main_cset_text_pane_t4_copy1

0x052f,	// (0x00054e8a) main_cset_text_pane_t5_copy1

0x0c1c,	// (0x00055577) main_cset_text_pane_t6_copy1

0x0c2a,	// (0x00055585) main_cset_text_pane_t7_copy1

0x9f04,	// (0x0005e85f) main_cset_text2_pane_t1_copy1

0x6509,	// (0x0005ae64) main_ncimui_pane

0x6568,	// (0x0005aec3) popup_query_ncimui_window_ParamLimits

0x6568,	// (0x0005aec3) popup_query_ncimui_window

0xe671,	// (0x00062fcc) field_cale_ev2_pane_g4_ParamLimits

0xe671,	// (0x00062fcc) field_cale_ev2_pane_g4

0x7e28,	// (0x0005c783) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e28,	// (0x0005c783) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000641f0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000641f0) cell_video_dialer_keypad_pane_g

0x7e40,	// (0x0005c79b) cell_video_dialer_keypad_pane_t1

0x114c,	// (0x00055aa7) bg_popup_window_pane_cp012

0xc794,	// (0x000610ef) heading_pane_cp06

0x0c56,	// (0x000555b1) ncim_query_content_pane

0x114c,	// (0x00055aa7) bg_popup_heading_pane_cp01

0x0c5e,	// (0x000555b9) ncim_heading_pane_t1

0x0c6c,	// (0x000555c7) ncim_indicator_popup_pane

0x0c7e,	// (0x000555d9) ncim_query_button_pane

0x0c92,	// (0x000555ed) ncim_query_content_pane_t1

0x0ca4,	// (0x000555ff) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00064556) ncim_query_content_pane_t

0x0cde,	// (0x00055639) ncim_query_list_pane

0x0cf0,	// (0x0005564b) ncim_query_popup_pane

0x0c6c,	// (0x000555c7) ncim_indicator_popup_pane_ParamLimits

0xa057,	// (0x0005e9b2) ncim_query_content_pane_g1_ParamLimits

0xa057,	// (0x0005e9b2) ncim_query_content_pane_g1

0x0c92,	// (0x000555ed) ncim_query_content_pane_t1_ParamLimits

0x0ca4,	// (0x000555ff) ncim_query_content_pane_t2_ParamLimits

0xa063,	// (0x0005e9be) ncim_query_content_pane_t3_ParamLimits

0xa063,	// (0x0005e9be) ncim_query_content_pane_t3

0xa080,	// (0x0005e9db) ncim_query_content_pane_t4_ParamLimits

0xa080,	// (0x0005e9db) ncim_query_content_pane_t4

0xa09d,	// (0x0005e9f8) ncim_query_content_pane_t5_ParamLimits

0xa09d,	// (0x0005e9f8) ncim_query_content_pane_t5

0x0cb6,	// (0x00055611) ncim_query_content_pane_t6_ParamLimits

0x0cb6,	// (0x00055611) ncim_query_content_pane_t6

0xfbfb,	// (0x00064556) ncim_query_content_pane_t_ParamLimits

0x0cde,	// (0x00055639) ncim_query_list_pane_ParamLimits

0x0cf0,	// (0x0005564b) ncim_query_popup_pane_ParamLimits

0x0d04,	// (0x0005565f) wait_bar_pane_cp04

0x114c,	// (0x00055aa7) input_focus_pane_cp011

0x0d0c,	// (0x00055667) ncim_query_popup_pane_t1

0x0d1a,	// (0x00055675) ncim_list_query_list_pane_ParamLimits

0x0d1a,	// (0x00055675) ncim_list_query_list_pane

0x114c,	// (0x00055aa7) bg_button_pane_cp027

0x0d27,	// (0x00055682) ncim_query_button_pane_g1

0x114c,	// (0x00055aa7) list_highlight_pane_cp012

0x0d31,	// (0x0005568c) ncim_list_query_list_pane_g1

0x0d39,	// (0x00055694) ncim_list_query_list_pane_t1

0x84cd,	// (0x0005ce28) cam4_indicators_pane_g3_ParamLimits

0x84cd,	// (0x0005ce28) cam4_indicators_pane_g3

0x85d4,	// (0x0005cf2f) vid4_indicators_pane_g5_ParamLimits

0x85d4,	// (0x0005cf2f) vid4_indicators_pane_g5

0x963d,	// (0x0005df98) vid4_progress_pane_g5_ParamLimits

0x963d,	// (0x0005df98) vid4_progress_pane_g5

0x9f43,	// (0x0005e89e) main_ncimui_pane_g1

0x9fab,	// (0x0005e906) ncimui_group_query_pane_ParamLimits

0x9fab,	// (0x0005e906) ncimui_group_query_pane

0x9ff3,	// (0x0005e94e) ncimui_list_pane_ParamLimits

0x9ff3,	// (0x0005e94e) ncimui_list_pane

0xa01a,	// (0x0005e975) ncimui_text_pane_ParamLimits

0xa01a,	// (0x0005e975) ncimui_text_pane

0xa0ba,	// (0x0005ea15) ncimui_text_pane_t1_ParamLimits

0xa0ba,	// (0x0005ea15) ncimui_text_pane_t1

0x0d47,	// (0x000556a2) ncimui_list_single_graphic_pane_ParamLimits

0x0d47,	// (0x000556a2) ncimui_list_single_graphic_pane

0xa0d9,	// (0x0005ea34) ncimui_query_pane_ParamLimits

0xa0d9,	// (0x0005ea34) ncimui_query_pane

0x114c,	// (0x00055aa7) list_highlight_pane_cp013

0x0d57,	// (0x000556b2) ncim_list_query_list_pane_t1_copy1

0x0d31,	// (0x0005568c) ncim_list_single_graphic_pane_g1

0xa0ec,	// (0x0005ea47) ncim_query_button_pane_cp01

0xa0f8,	// (0x0005ea53) ncim_query_entry_pane_ParamLimits

0xa0f8,	// (0x0005ea53) ncim_query_entry_pane

0xa10b,	// (0x0005ea66) ncimui_query_pane_g1

0xa117,	// (0x0005ea72) ncimui_query_pane_t1_ParamLimits

0xa117,	// (0x0005ea72) ncimui_query_pane_t1

0xd9f7,	// (0x00062352) input_focus_pane_cp012

0x0d65,	// (0x000556c0) ncim_query_entry_pane_t1

0xbedb,	// (0x00060836) main_im_pane_ParamLimits

0x6509,	// (0x0005ae64) main_mobtv_pane_ParamLimits

0x6509,	// (0x0005ae64) main_mobtv_pane

0x9cdd,	// (0x0005e638) main_cset6_slider_pane_g18_ParamLimits

0x9cdd,	// (0x0005e638) main_cset6_slider_pane_g18

0x9ce9,	// (0x0005e644) main_cset6_slider_pane_g19_ParamLimits

0x9ce9,	// (0x0005e644) main_cset6_slider_pane_g19

0xee16,	// (0x00063771) bg_main_mobtv_pane_ParamLimits

0xee16,	// (0x00063771) bg_main_mobtv_pane

0xa130,	// (0x0005ea8b) main_mobtv_info_pane

0xa13b,	// (0x0005ea96) main_mobtv_loading_pane_ParamLimits

0xa13b,	// (0x0005ea96) main_mobtv_loading_pane

0x0d85,	// (0x000556e0) main_mobtv_pg_channel_list_pane

0x0d8f,	// (0x000556ea) main_mobtv_pg_hdr_pane

0xa148,	// (0x0005eaa3) main_mobtv_programe_curr_pane_ParamLimits

0xa148,	// (0x0005eaa3) main_mobtv_programe_curr_pane

0xa155,	// (0x0005eab0) main_mobtv_programe_next_pane_ParamLimits

0xa155,	// (0x0005eab0) main_mobtv_programe_next_pane

0x0d98,	// (0x000556f3) popup_mobtv_noti_window

0xe36d,	// (0x00062cc8) main_tv_pg_hdr_pane_g1

0x0da0,	// (0x000556fb) main_tv_pg_hdr_pane_g2

0x0da8,	// (0x00055703) main_tv_pg_hdr_pane_g3

0x0db0,	// (0x0005570b) main_tv_pg_hdr_pane_g4

0x0db8,	// (0x00055713) main_tv_pg_hdr_pane_g5

0x0dc2,	// (0x0005571d) main_tv_pg_hdr_pane_g6

0x0dcc,	// (0x00055727) main_tv_pg_hdr_pane_g7

0x0dd6,	// (0x00055731) main_tv_pg_hdr_pane_g8

0x0de0,	// (0x0005573b) main_tv_pg_hdr_pane_g9

0x0dea,	// (0x00055745) main_tv_pg_hdr_pane_g10

0x0df4,	// (0x0005574f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00064563) main_tv_pg_hdr_pane_g

0x0dfe,	// (0x00055759) main_tv_pg_hdr_pane_t1

0x0e0c,	// (0x00055767) main_tv_pg_hdr_pane_t2

0x0e1a,	// (0x00055775) main_tv_pg_hdr_pane_t3

0x0e2a,	// (0x00055785) main_tv_pg_hdr_pane_t4

0x0e3a,	// (0x00055795) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0006457a) main_tv_pg_hdr_pane_t

0x0e4a,	// (0x000557a5) single_mobtv_pg_channel_pane_ParamLimits

0x0e4a,	// (0x000557a5) single_mobtv_pg_channel_pane

0x0e5c,	// (0x000557b7) single_mobtv_pg_channel_table_pane

0x0e65,	// (0x000557c0) single_mobtv_pg_channel_thumb_pane

0x0e6e,	// (0x000557c9) single_tv_pg_channel_pane_g1

0x0e77,	// (0x000557d2) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00064585) single_tv_pg_channel_pane_g

0xe5d0,	// (0x00062f2b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe5d0,	// (0x00062f2b) bg_single_mobtv_pg_channel_thumb_pane

0x0e80,	// (0x000557db) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0e80,	// (0x000557db) single_mobtv_pg_channel_thumb_pane_g1

0x0e8e,	// (0x000557e9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0e8e,	// (0x000557e9) single_mobtv_pg_channel_thumb_pane_g2

0x0e9a,	// (0x000557f5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0e9a,	// (0x000557f5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0006458a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0006458a) single_mobtv_pg_channel_thumb_pane_g

0x0ea6,	// (0x00055801) single_mobtv_pg_channel_thumb_pane_t1

0x0eb4,	// (0x0005580f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00064591) single_mobtv_pg_channel_thumb_pane_t

0xe36d,	// (0x00062cc8) bg_single_mobtv_pg_channel_table_pane_g1

0xe36d,	// (0x00062cc8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00064037) bg_single_mobtv_pg_channel_table_pane_g

0x0ec2,	// (0x0005581d) single_mobtv_pg_channel_table_pane_t1

0x0ed0,	// (0x0005582b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00064596) single_mobtv_pg_channel_table_pane_t

0xa16a,	// (0x0005eac5) main_mobtv_info_pane_g1_ParamLimits

0xa16a,	// (0x0005eac5) main_mobtv_info_pane_g1

0xa186,	// (0x0005eae1) main_mobtv_info_pane_t1_ParamLimits

0xa186,	// (0x0005eae1) main_mobtv_info_pane_t1

0xa1fe,	// (0x0005eb59) main_mobtv_info_pane_t2_ParamLimits

0xa1fe,	// (0x0005eb59) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000645a0) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000645a0) main_mobtv_info_pane_t

0xa28d,	// (0x0005ebe8) wait_bar_pane_cp05

0xa29f,	// (0x0005ebfa) main_mobtv_loading_pane_g1_ParamLimits

0xa29f,	// (0x0005ebfa) main_mobtv_loading_pane_g1

0xa2ad,	// (0x0005ec08) main_mobtv_loading_pane_g2_ParamLimits

0xa2ad,	// (0x0005ec08) main_mobtv_loading_pane_g2

0xa2b9,	// (0x0005ec14) main_mobtv_loading_pane_g3_ParamLimits

0xa2b9,	// (0x0005ec14) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000645a7) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000645a7) main_mobtv_loading_pane_g

0x0ede,	// (0x00055839) main_mobtv_loading_pane_t1_ParamLimits

0x0ede,	// (0x00055839) main_mobtv_loading_pane_t1

0x0ef6,	// (0x00055851) main_mobtv_loading_pane_t2_ParamLimits

0x0ef6,	// (0x00055851) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000645ae) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000645ae) main_mobtv_loading_pane_t

0xa2c7,	// (0x0005ec22) wait_bar_pane_cp06_ParamLimits

0xa2c7,	// (0x0005ec22) wait_bar_pane_cp06

0x0f1a,	// (0x00055875) main_mobtv_programe_curr_pane_t1

0x0f28,	// (0x00055883) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000645b3) main_mobtv_programe_curr_pane_t

0x0f36,	// (0x00055891) main_mobtv_programe_next_pane_t1

0x0f44,	// (0x0005589f) main_mobtv_programe_next_pane_t2

0x0f52,	// (0x000558ad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000645b8) main_mobtv_programe_next_pane_t

0x114c,	// (0x00055aa7) bg_popup_mobtv_noti_window_pane

0x0f60,	// (0x000558bb) popup_mobtv_noti_window_g1

0x0f68,	// (0x000558c3) popup_mobtv_noti_window_t1

0x0f76,	// (0x000558d1) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000645bf) popup_mobtv_noti_window_t

0xe36d,	// (0x00062cc8) bg_popup_mobtv_noti_window_pane_g1

0x331b,	// (0x00057c76) sc_clock_pane

0x331b,	// (0x00057c76) main_fs_bigclock_pane

0x985a,	// (0x0005e1b5) blid2_tripm_pane_t4_ParamLimits

0x985a,	// (0x0005e1b5) blid2_tripm_pane_t4

0xa2d3,	// (0x0005ec2e) sc_clock_pane_g1_ParamLimits

0xa2d3,	// (0x0005ec2e) sc_clock_pane_g1

0xa2e1,	// (0x0005ec3c) sc_clock_pane_t1_ParamLimits

0xa2e1,	// (0x0005ec3c) sc_clock_pane_t1

0xa2f4,	// (0x0005ec4f) sc_clock_pane_t2_ParamLimits

0xa2f4,	// (0x0005ec4f) sc_clock_pane_t2

0xa306,	// (0x0005ec61) sc_clock_pane_t3_ParamLimits

0xa306,	// (0x0005ec61) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000645c4) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000645c4) sc_clock_pane_t

0xb268,	// (0x0005fbc3) main_fs_bigclock_indicator_pane_ParamLimits

0xb268,	// (0x0005fbc3) main_fs_bigclock_indicator_pane

0xa389,	// (0x0005ece4) main_fs_bigclock_pane_g1_ParamLimits

0xa389,	// (0x0005ece4) main_fs_bigclock_pane_g1

0xb274,	// (0x0005fbcf) main_fs_bigclock_pane_t1_ParamLimits

0xb274,	// (0x0005fbcf) main_fs_bigclock_pane_t1

0xb286,	// (0x0005fbe1) main_fs_bigclock_pane_t2_ParamLimits

0xb286,	// (0x0005fbe1) main_fs_bigclock_pane_t2

0xb29a,	// (0x0005fbf5) main_fs_bigclock_pane_t3_ParamLimits

0xb29a,	// (0x0005fbf5) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000647ce) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000647ce) main_fs_bigclock_pane_t

0x1a60,	// (0x000563bb) main_fs_bigclock_indicator_pane_g1

0x0c86,	// (0x000555e1) ncim_query_content_pane_g2_ParamLimits

0x0c86,	// (0x000555e1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00064551) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00064551) ncim_query_content_pane_g

0xa31a,	// (0x0005ec75) sc_clock_pane_t4_ParamLimits

0xa31a,	// (0x0005ec75) sc_clock_pane_t4

0x6509,	// (0x0005ae64) main_radioblah_pane

0xed89,	// (0x000636e4) cell_call4_button_pane_t1_copy1_ParamLimits

0xed89,	// (0x000636e4) cell_call4_button_pane_t1_copy1

0x9f5d,	// (0x0005e8b8) main_ncimui_pane_t1_ParamLimits

0x9f5d,	// (0x0005e8b8) main_ncimui_pane_t1

0x9f77,	// (0x0005e8d2) main_ncimui_pane_t2_ParamLimits

0x9f77,	// (0x0005e8d2) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0006454a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0006454a) main_ncimui_pane_t

0x10bb,	// (0x00055a16) main_radioblah_anim_pane_ParamLimits

0x10bb,	// (0x00055a16) main_radioblah_anim_pane

0x10cc,	// (0x00055a27) main_radioblah_info_pane_ParamLimits

0x10cc,	// (0x00055a27) main_radioblah_info_pane

0x10e0,	// (0x00055a3b) main_radioblah_pane_t1_ParamLimits

0x10e0,	// (0x00055a3b) main_radioblah_pane_t1

0x10fc,	// (0x00055a57) main_radioblah_pane_t2_ParamLimits

0x10fc,	// (0x00055a57) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000645e5) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000645e5) main_radioblah_pane_t

0xa3df,	// (0x0005ed3a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa3df,	// (0x0005ed3a) main_radioblah_rocker_ctrl_pane

0x1414,	// (0x00055d6f) main_radioblah_info_pane_t1_ParamLimits

0x1414,	// (0x00055d6f) main_radioblah_info_pane_t1

0xa424,	// (0x0005ed7f) main_radioblah_info_pane_t2_ParamLimits

0xa424,	// (0x0005ed7f) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000645ee) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000645ee) main_radioblah_info_pane_t

0xe36d,	// (0x00062cc8) main_radioblah_rocker_ctrl_pane_g1

0xa4d4,	// (0x0005ee2f) main_radioblah_rocker_ctrl_pane_g2

0xa4dc,	// (0x0005ee37) main_radioblah_rocker_ctrl_pane_g3

0xa4e4,	// (0x0005ee3f) main_radioblah_rocker_ctrl_pane_g4

0xa4ec,	// (0x0005ee47) main_radioblah_rocker_ctrl_pane_g5

0xa4f4,	// (0x0005ee4f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000645f7) main_radioblah_rocker_ctrl_pane_g

0x9f04,	// (0x0005e85f) main_cset_text2_pane_t1_copy1_ParamLimits

0x83ed,	// (0x0005cd48) cam4_image_uncrop_qvga_pane

0x8542,	// (0x0005ce9d) vid4_image_uncrop_qcif_pane

0x99e8,	// (0x0005e343) cam6_image_uncrop_qvga_pane_ParamLimits

0x99e8,	// (0x0005e343) cam6_image_uncrop_qvga_pane

0x098d,	// (0x000552e8) vid6_image_uncrop_qcif_pane_ParamLimits

0x098d,	// (0x000552e8) vid6_image_uncrop_qcif_pane

0x114c,	// (0x00055aa7) bg_popup_preview_window_pane_cp03

0x0c38,	// (0x00055593) list_cset_text2_pane

0x0c40,	// (0x0005559b) main_cset6_text2_pane_g1

0x0c48,	// (0x000555a3) main_cset6_text2_pane_t1

0xa4fc,	// (0x0005ee57) list_cset_text2_pane_t1_ParamLimits

0xa4fc,	// (0x0005ee57) list_cset_text2_pane_t1

0x6509,	// (0x0005ae64) main_radioblah_pane_ParamLimits

0xa279,	// (0x0005ebd4) main_mobtv_info_pane_t3_ParamLimits

0xa279,	// (0x0005ebd4) main_mobtv_info_pane_t3

0xa3cd,	// (0x0005ed28) main_radioblah_pane_g1

0xa3f8,	// (0x0005ed53) main_radioblah_info_pane_g1

0xa479,	// (0x0005edd4) main_radioblah_info_pane_t3_ParamLimits

0xa479,	// (0x0005edd4) main_radioblah_info_pane_t3

0x520e,	// (0x00059b69) highlight_cell_cale_month_pane_ParamLimits

0x520e,	// (0x00059b69) highlight_cell_cale_month_pane

0x331b,	// (0x00057c76) main_phob_fisheye_pane

0xe714,	// (0x0006306f) scroll_pane_cp0031_ParamLimits

0xe714,	// (0x0006306f) scroll_pane_cp0031

0x0a9b,	// (0x000553f6) wait_bar_pane_cp08_ParamLimits

0x9bf4,	// (0x0005e54f) cset_list_set_pane_copy1_ParamLimits

0x144e,	// (0x00055da9) highlight_cell_cale_month_pane_g1

0xa519,	// (0x0005ee74) highlight_cell_cale_month_pane_t1

0x0723,	// (0x0005507e) list_gen_pane_cp01

0xef6d,	// (0x000638c8) scroll_pane_01

0xa527,	// (0x0005ee82) list_single_double_fisheye_pane

0xa530,	// (0x0005ee8b) list_double_fisheye_pane_g1_ParamLimits

0xa530,	// (0x0005ee8b) list_double_fisheye_pane_g1

0xa53c,	// (0x0005ee97) list_double_fisheye_pane_g2_ParamLimits

0xa53c,	// (0x0005ee97) list_double_fisheye_pane_g2

0xa550,	// (0x0005eeab) list_double_fisheye_pane_g3_ParamLimits

0xa550,	// (0x0005eeab) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00064604) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00064604) list_double_fisheye_pane_g

0xa579,	// (0x0005eed4) list_double_fisheye_pane_t1_ParamLimits

0xa579,	// (0x0005eed4) list_double_fisheye_pane_t1

0xa594,	// (0x0005eeef) list_double_fisheye_pane_t2_ParamLimits

0xa594,	// (0x0005eeef) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0006460f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0006460f) list_double_fisheye_pane_t

0x331b,	// (0x00057c76) main_call5_pane

0xa340,	// (0x0005ec9b) sc_swipe_pane_ParamLimits

0xa340,	// (0x0005ec9b) sc_swipe_pane

0xa5c2,	// (0x0005ef1d) call5_image_pane_ParamLimits

0xa5c2,	// (0x0005ef1d) call5_image_pane

0xa5d2,	// (0x0005ef2d) call5_swipe_1_pane_ParamLimits

0xa5d2,	// (0x0005ef2d) call5_swipe_1_pane

0xa5de,	// (0x0005ef39) call5_swipe_2_pane_ParamLimits

0xa5de,	// (0x0005ef39) call5_swipe_2_pane

0xa5f8,	// (0x0005ef53) popup_call5_audio_first_window_ParamLimits

0xa5f8,	// (0x0005ef53) popup_call5_audio_first_window

0xe5d0,	// (0x00062f2b) call5_swipe_1_pane_g1_ParamLimits

0xe5d0,	// (0x00062f2b) call5_swipe_1_pane_g1

0x1456,	// (0x00055db1) call5_swipe_1_pane_g2_ParamLimits

0x1456,	// (0x00055db1) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00064614) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00064614) call5_swipe_1_pane_g

0x1462,	// (0x00055dbd) call5_swipe_1_pane_t1_ParamLimits

0x1462,	// (0x00055dbd) call5_swipe_1_pane_t1

0xe5d0,	// (0x00062f2b) call5_swipe_2_pane_g1_ParamLimits

0xe5d0,	// (0x00062f2b) call5_swipe_2_pane_g1

0x1477,	// (0x00055dd2) call5_swipe_2_pane_g2_ParamLimits

0x1477,	// (0x00055dd2) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00064619) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00064619) call5_swipe_2_pane_g

0x1483,	// (0x00055dde) call5_swipe_2_pane_t1_ParamLimits

0x1483,	// (0x00055dde) call5_swipe_2_pane_t1

0x1498,	// (0x00055df3) sc_swipe_pane_g1_ParamLimits

0x1498,	// (0x00055df3) sc_swipe_pane_g1

0x14a5,	// (0x00055e00) sc_swipe_pane_g2_ParamLimits

0x14a5,	// (0x00055e00) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0006461e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0006461e) sc_swipe_pane_g

0x14b1,	// (0x00055e0c) sc_swipe_pane_t1_ParamLimits

0x14b1,	// (0x00055e0c) sc_swipe_pane_t1

0x331b,	// (0x00057c76) main_cmail_launcher_pane

0xa606,	// (0x0005ef61) aid_size_cell_cmail_l_ParamLimits

0xa606,	// (0x0005ef61) aid_size_cell_cmail_l

0xa616,	// (0x0005ef71) grid_cmail_l_pane_ParamLimits

0xa616,	// (0x0005ef71) grid_cmail_l_pane

0xa626,	// (0x0005ef81) cell_cmail_l_pane_ParamLimits

0xa626,	// (0x0005ef81) cell_cmail_l_pane

0xa63a,	// (0x0005ef95) cell_cmail_l_pane_g1_ParamLimits

0xa63a,	// (0x0005ef95) cell_cmail_l_pane_g1

0xa646,	// (0x0005efa1) cell_cmail_l_pane_t1_ParamLimits

0xa646,	// (0x0005efa1) cell_cmail_l_pane_t1

0x14c6,	// (0x00055e21) cell_cmail_l_pane_t2_ParamLimits

0x14c6,	// (0x00055e21) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00064623) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00064623) cell_cmail_l_pane_t

0xd9f7,	// (0x00062352) grid_highlight_pane_cp018_ParamLimits

0xd9f7,	// (0x00062352) grid_highlight_pane_cp018

0x3171,	// (0x00057acc) main2_pane_ParamLimits

0x3171,	// (0x00057acc) main2_pane

0xbf74,	// (0x000608cf) popup_sp_fs_action_menu_bg_pane_g1

0xbf7c,	// (0x000608d7) popup_sp_fs_action_menu_bg_pane_g2

0xbf84,	// (0x000608df) popup_sp_fs_action_menu_bg_pane_g3

0xbf8c,	// (0x000608e7) popup_sp_fs_action_menu_bg_pane_g4

0xbf94,	// (0x000608ef) popup_sp_fs_action_menu_bg_pane_g5

0xbf9c,	// (0x000608f7) popup_sp_fs_action_menu_bg_pane_g6

0xbfa4,	// (0x000608ff) popup_sp_fs_action_menu_bg_pane_g7

0xbfac,	// (0x00060907) popup_sp_fs_action_menu_bg_pane_g8

0xbfb4,	// (0x0006090f) popup_sp_fs_action_menu_bg_pane_g9

0xbfbc,	// (0x00060917) popup_sp_fs_action_menu_bg_pane_g10

0xbfbc,	// (0x00060917) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00063ae5) popup_sp_fs_action_menu_bg_pane_g

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g3_g1

0x402f,	// (0x0005898a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_t3_g3_g2

0x403b,	// (0x00058996) list_medium_line_x2_t3_g3_g3_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00063b93) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00063b93) list_medium_line_x2_t3_g3_g

0x4047,	// (0x000589a2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4047,	// (0x000589a2) list_medium_line_x2_t3_g3_t1

0x405c,	// (0x000589b7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x405c,	// (0x000589b7) list_medium_line_x2_t3_g3_t2

0x406e,	// (0x000589c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00063b9a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00063b9a) list_medium_line_x2_t3_g3_t

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g2_g1

0x403b,	// (0x00058996) list_medium_line_x2_t3_g2_g2_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00063ba1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00063ba1) list_medium_line_x2_t3_g2_g

0x4083,	// (0x000589de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4083,	// (0x000589de) list_medium_line_x2_t3_g2_t1

0x4099,	// (0x000589f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4099,	// (0x000589f4) list_medium_line_x2_t3_g2_t2

0x40ab,	// (0x00058a06) list_medium_line_x2_t3_g2_t3_ParamLimits

0x40ab,	// (0x00058a06) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00063ba6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00063ba6) list_medium_line_x2_t3_g2_t

0x4023,	// (0x0005897e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t4_g4_g1

0x40c8,	// (0x00058a23) list_medium_line_x2_t4_g4_g2_ParamLimits

0x40c8,	// (0x00058a23) list_medium_line_x2_t4_g4_g2

0x402f,	// (0x0005898a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_t4_g4_g3

0x40d4,	// (0x00058a2f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x40d4,	// (0x00058a2f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00063bad) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00063bad) list_medium_line_x2_t4_g4_g

0x40e0,	// (0x00058a3b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x40e0,	// (0x00058a3b) list_medium_line_x2_t4_g4_t1

0x40fa,	// (0x00058a55) list_medium_line_x2_t4_g4_t2_ParamLimits

0x40fa,	// (0x00058a55) list_medium_line_x2_t4_g4_t2

0x4110,	// (0x00058a6b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4110,	// (0x00058a6b) list_medium_line_x2_t4_g4_t3

0x4125,	// (0x00058a80) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4125,	// (0x00058a80) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00063bb6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00063bb6) list_medium_line_x2_t4_g4_t

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g4_g1

0x40c8,	// (0x00058a23) list_medium_line_x2_t2_g4_g2_ParamLimits

0x40c8,	// (0x00058a23) list_medium_line_x2_t2_g4_g2

0x402f,	// (0x0005898a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_t2_g4_g3

0x403b,	// (0x00058996) list_medium_line_x2_t2_g4_g4_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00063c1d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00063c1d) list_medium_line_x2_t2_g4_g

0x5234,	// (0x00059b8f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5234,	// (0x00059b8f) list_medium_line_x2_t2_g4_t1

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00063c26) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00063c26) list_medium_line_x2_t2_g4_t

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g3_g1

0x402f,	// (0x0005898a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_t2_g3_g2

0x403b,	// (0x00058996) list_medium_line_x2_t2_g3_g3_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00063b93) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00063b93) list_medium_line_x2_t2_g3_g

0x5249,	// (0x00059ba4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5249,	// (0x00059ba4) list_medium_line_x2_t2_g3_t1

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00063c2b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00063c2b) list_medium_line_x2_t2_g3_t

0x5410,	// (0x00059d6b) main_sp_fs_list_pane_ParamLimits

0x5410,	// (0x00059d6b) main_sp_fs_list_pane

0x541c,	// (0x00059d77) sp_fs_scroll_pane_ParamLimits

0x541c,	// (0x00059d77) sp_fs_scroll_pane

0x5428,	// (0x00059d83) list_medium_line_x2_t3_t1

0x5438,	// (0x00059d93) list_medium_line_x2_t3_t2

0x5446,	// (0x00059da1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00063c76) list_medium_line_x2_t3_t

0x5454,	// (0x00059daf) list_medium_line_x3_t4_t1

0x5464,	// (0x00059dbf) list_medium_line_x3_t4_t2

0x5472,	// (0x00059dcd) list_medium_line_x3_t4_t3

0x5446,	// (0x00059da1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00063c7d) list_medium_line_x3_t4_t

0x5480,	// (0x00059ddb) list_medium_line_x4_t5_t1

0x5490,	// (0x00059deb) list_medium_line_x4_t5_t2

0x5472,	// (0x00059dcd) list_medium_line_x4_t5_t3

0x549e,	// (0x00059df9) list_medium_line_x4_t5_t4

0x5446,	// (0x00059da1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00063c86) list_medium_line_x4_t5_t

0x4023,	// (0x0005897e) list_medium_line_t4_g4_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_t4_g4_g1

0x40d4,	// (0x00058a2f) list_medium_line_t4_g4_g2_ParamLimits

0x40d4,	// (0x00058a2f) list_medium_line_t4_g4_g2

0x54ac,	// (0x00059e07) list_medium_line_t4_g4_g3_ParamLimits

0x54ac,	// (0x00059e07) list_medium_line_t4_g4_g3

0x403b,	// (0x00058996) list_medium_line_t4_g4_g4_ParamLimits

0x403b,	// (0x00058996) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00063c91) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00063c91) list_medium_line_t4_g4_g

0x54b8,	// (0x00059e13) list_medium_line_t4_g4_t1_ParamLimits

0x54b8,	// (0x00059e13) list_medium_line_t4_g4_t1

0x54cd,	// (0x00059e28) list_medium_line_t4_g4_t2_ParamLimits

0x54cd,	// (0x00059e28) list_medium_line_t4_g4_t2

0x54e2,	// (0x00059e3d) list_medium_line_t4_g4_t3_ParamLimits

0x54e2,	// (0x00059e3d) list_medium_line_t4_g4_t3

0x406e,	// (0x000589c9) list_medium_line_t4_g4_t4_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00063c9a) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00063c9a) list_medium_line_t4_g4_t

0x55f8,	// (0x00059f53) chi_dic_find_pane_g1

0x6525,	// (0x0005ae80) main_tport_pane

0x8f01,	// (0x0005d85c) list_medium_line_plain_t1

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g2_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g2_g1

0x8fed,	// (0x0005d948) list_medium_line_t2_g2_g2_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006435b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006435b) list_medium_line_t2_g2_g

0x8ff9,	// (0x0005d954) list_medium_line_t2_g2_t1_ParamLimits

0x8ff9,	// (0x0005d954) list_medium_line_t2_g2_t1

0x9013,	// (0x0005d96e) list_medium_line_t2_g2_t2_ParamLimits

0x9013,	// (0x0005d96e) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00064360) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00064360) list_medium_line_t2_g2_t

0x011c,	// (0x00054a77) aid_sp_fs_list_icon_a_sm

0x0124,	// (0x00054a7f) aid_sp_fs_list_icon_d

0x012c,	// (0x00054a87) aid_sp_fs_text_primary

0x072c,	// (0x00055087) aid_sp_fs_text_secondary

0x969c,	// (0x0005dff7) list_medium_line

0x969c,	// (0x0005dff7) list_medium_line_g2

0x969c,	// (0x0005dff7) list_medium_line_g3

0x969c,	// (0x0005dff7) list_medium_line_plain

0x969c,	// (0x0005dff7) list_medium_line_plain_t2

0x969c,	// (0x0005dff7) list_medium_line_plain_t3

0x969c,	// (0x0005dff7) list_medium_line_right_icon

0x969c,	// (0x0005dff7) list_medium_line_right_iconx2

0x969c,	// (0x0005dff7) list_medium_line_t2

0x969c,	// (0x0005dff7) list_medium_line_t2_g2

0x969c,	// (0x0005dff7) list_medium_line_t2_g3

0x969c,	// (0x0005dff7) list_medium_line_t2_right_icon

0x969c,	// (0x0005dff7) list_medium_line_t2_right_iconx2

0x969c,	// (0x0005dff7) list_medium_line_t3

0x969c,	// (0x0005dff7) list_medium_line_t3_g2

0x969c,	// (0x0005dff7) list_medium_line_t3_g3

0x969c,	// (0x0005dff7) list_medium_line_t3_right_iconx2

0x96a5,	// (0x0005e000) list_medium_line_t4_g4

0x96ae,	// (0x0005e009) list_medium_line_x2

0x96ae,	// (0x0005e009) list_medium_line_x2_t2_g2

0x96ae,	// (0x0005e009) list_medium_line_x2_t2_g3

0x96ae,	// (0x0005e009) list_medium_line_x2_t2_g4

0x96ae,	// (0x0005e009) list_medium_line_x2_t3

0x96ae,	// (0x0005e009) list_medium_line_x2_t3_g2

0x96ae,	// (0x0005e009) list_medium_line_x2_t3_g3

0x96ae,	// (0x0005e009) list_medium_line_x2_t3_g4

0x96ae,	// (0x0005e009) list_medium_line_x2_t4_g2

0x96ae,	// (0x0005e009) list_medium_line_x2_t4_g4

0x96b7,	// (0x0005e012) list_medium_line_x3

0x96b7,	// (0x0005e012) list_medium_line_x3_t4

0x96b7,	// (0x0005e012) list_medium_line_x3_t4_g4

0x96a5,	// (0x0005e000) list_medium_line_x4_t4

0x96a5,	// (0x0005e000) list_medium_line_x4_t4_g7

0x96a5,	// (0x0005e000) list_medium_line_x4_t5

0x96c0,	// (0x0005e01b) list_single_fs_dyc_pane_ParamLimits

0x96c0,	// (0x0005e01b) list_single_fs_dyc_pane

0x4023,	// (0x0005897e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x4_t4_g7_g1

0x9e33,	// (0x0005e78e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9e33,	// (0x0005e78e) list_medium_line_x4_t4_g7_g2

0x9e3f,	// (0x0005e79a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e3f,	// (0x0005e79a) list_medium_line_x4_t4_g7_g3

0x9e4e,	// (0x0005e7a9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e4e,	// (0x0005e7a9) list_medium_line_x4_t4_g7_g4

0x9e5a,	// (0x0005e7b5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9e5a,	// (0x0005e7b5) list_medium_line_x4_t4_g7_g5

0x9e69,	// (0x0005e7c4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9e69,	// (0x0005e7c4) list_medium_line_x4_t4_g7_g6

0x9e78,	// (0x0005e7d3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9e78,	// (0x0005e7d3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0006452b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0006452b) list_medium_line_x4_t4_g7_g

0x9e84,	// (0x0005e7df) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9e84,	// (0x0005e7df) list_medium_line_x4_t4_g7_t1

0x9e99,	// (0x0005e7f4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9e99,	// (0x0005e7f4) list_medium_line_x4_t4_g7_t2

0x9eae,	// (0x0005e809) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9eae,	// (0x0005e809) list_medium_line_x4_t4_g7_t3

0x9ec3,	// (0x0005e81e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9ec3,	// (0x0005e81e) list_medium_line_x4_t4_g7_t4

0x9ed5,	// (0x0005e830) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9ed5,	// (0x0005e830) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0006453a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0006453a) list_medium_line_x4_t4_g7_t

0x9ee7,	// (0x0005e842) list_single_dyc_row_pane_ParamLimits

0x9ee7,	// (0x0005e842) list_single_dyc_row_pane

0xa5b6,	// (0x0005ef11) call5_gesture_pane_ParamLimits

0xa5b6,	// (0x0005ef11) call5_gesture_pane

0xa5ea,	// (0x0005ef45) call5_windows_pane_ParamLimits

0xa5ea,	// (0x0005ef45) call5_windows_pane

0xa65c,	// (0x0005efb7) call5_swipe_1_pane_cp_ParamLimits

0xa65c,	// (0x0005efb7) call5_swipe_1_pane_cp

0xa668,	// (0x0005efc3) call5_swipe_2_pane_cp_ParamLimits

0xa668,	// (0x0005efc3) call5_swipe_2_pane_cp

0xc0a0,	// (0x000609fb) call5_image_pane_cp

0xa674,	// (0x0005efcf) popup_call5_audio_first_window_cp_ParamLimits

0xa674,	// (0x0005efcf) popup_call5_audio_first_window_cp

0x1498,	// (0x00055df3) call5_swipe_1_pane_g1_cp_ParamLimits

0x1498,	// (0x00055df3) call5_swipe_1_pane_g1_cp

0x14d8,	// (0x00055e33) call5_swipe_1_pane_g2_cp

0x14b1,	// (0x00055e0c) call5_swipe_1_pane_t1_cp_ParamLimits

0x14b1,	// (0x00055e0c) call5_swipe_1_pane_t1_cp

0x1498,	// (0x00055df3) call5_swipe_2_pane_g1_cp_ParamLimits

0x1498,	// (0x00055df3) call5_swipe_2_pane_g1_cp

0x14e0,	// (0x00055e3b) call5_swipe_2_pane_g2_cp

0x14e8,	// (0x00055e43) call5_swipe_2_pane_t1_cp_ParamLimits

0x14e8,	// (0x00055e43) call5_swipe_2_pane_t1_cp

0xd9f7,	// (0x00062352) main_sp_fs_email_pane

0x14fd,	// (0x00055e58) main_sp_fs_listscroll_pane_te

0xa682,	// (0x0005efdd) popup_sp_fs_action_menu_pane_ParamLimits

0xa682,	// (0x0005efdd) popup_sp_fs_action_menu_pane

0xe36d,	// (0x00062cc8) bg_sp_fs_ctrlbar_pane_g1

0x1506,	// (0x00055e61) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x150f,	// (0x00055e6a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1518,	// (0x00055e73) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe36d,	// (0x00062cc8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00064628) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe149,	// (0x00062aa4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe149,	// (0x00062aa4) bg_sp_fs_ctrlbar_ddmenu_pane

0x1521,	// (0x00055e7c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1521,	// (0x00055e7c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x152d,	// (0x00055e88) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x152d,	// (0x00055e88) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00064631) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00064631) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1539,	// (0x00055e94) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1539,	// (0x00055e94) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa6c4,	// (0x0005f01f) list_medium_line_t2_right_icon_g1

0xa6cc,	// (0x0005f027) list_medium_line_t2_right_icon_t1

0xa6dc,	// (0x0005f037) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00064636) list_medium_line_t2_right_icon_t

0xdf5c,	// (0x000628b7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdf5c,	// (0x000628b7) bg_sp_fs_ctrlbar_pane

0xa741,	// (0x0005f09c) main_sp_fs_ctrlbar_button_pane_cp01

0xa749,	// (0x0005f0a4) main_sp_fs_ctrlbar_ddmenu_pane

0x158b,	// (0x00055ee6) main_sp_fs_ctrlbar_pane_g1

0x1597,	// (0x00055ef2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0006463b) main_sp_fs_ctrlbar_pane_g

0x15a3,	// (0x00055efe) main_sp_fs_ctrlbar_pane_t1

0xa753,	// (0x0005f0ae) main_sp_fs_ctrlbar_pane

0xa769,	// (0x0005f0c4) main_sp_fs_listscroll_pane_te_cp01

0xa77a,	// (0x0005f0d5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa77a,	// (0x0005f0d5) popup_sp_fs_action_menu_pane_cp01

0xd9f7,	// (0x00062352) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd9f7,	// (0x00062352) bg_sp_fs_highlight_list_pane_cp01

0x0151,	// (0x00054aac) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0151,	// (0x00054aac) sp_fs_action_menu_list_gene_pane_g1

0x15d3,	// (0x00055f2e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x15d3,	// (0x00055f2e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00064645) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00064645) sp_fs_action_menu_list_gene_pane_g

0x0160,	// (0x00054abb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0160,	// (0x00054abb) sp_fs_action_menu_list_gene_pane_t1

0x0178,	// (0x00054ad3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0178,	// (0x00054ad3) sp_fs_action_menu_list_gene_pane

0x15e0,	// (0x00055f3b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x15e0,	// (0x00055f3b) popup_sp_fs_action_menu_bg_pane

0x0197,	// (0x00054af2) sp_fs_action_menu_list_pane_ParamLimits

0x0197,	// (0x00054af2) sp_fs_action_menu_list_pane

0xa7a4,	// (0x0005f0ff) sp_fs_scroll_pane_cp01_ParamLimits

0xa7a4,	// (0x0005f0ff) sp_fs_scroll_pane_cp01

0xa7ca,	// (0x0005f125) list_medium_line_plain_t2_t1

0xa7da,	// (0x0005f135) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0006464a) list_medium_line_plain_t2_t

0xa7e8,	// (0x0005f143) list_medium_line_plain_t3_t1

0xa7f8,	// (0x0005f153) list_medium_line_plain_t3_t2

0xa806,	// (0x0005f161) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0006464f) list_medium_line_plain_t3_t

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t2_g2_g1

0x403b,	// (0x00058996) list_medium_line_x2_t2_g2_g2_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00063ba1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00063ba1) list_medium_line_x2_t2_g2_g

0x54b8,	// (0x00059e13) list_medium_line_x2_t2_g2_t1_ParamLimits

0x54b8,	// (0x00059e13) list_medium_line_x2_t2_g2_t1

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00064656) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00064656) list_medium_line_x2_t2_g2_t

0x4023,	// (0x0005897e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t4_g2_g1

0xa814,	// (0x0005f16f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa814,	// (0x0005f16f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0006465b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0006465b) list_medium_line_x2_t4_g2_g

0xa826,	// (0x0005f181) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa826,	// (0x0005f181) list_medium_line_x2_t4_g2_t1

0xa840,	// (0x0005f19b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa840,	// (0x0005f19b) list_medium_line_x2_t4_g2_t2

0xa856,	// (0x0005f1b1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa856,	// (0x0005f1b1) list_medium_line_x2_t4_g2_t3

0x406e,	// (0x000589c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00064660) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00064660) list_medium_line_x2_t4_g2_t

0xa86b,	// (0x0005f1c6) list_medium_line_t3_right_iconx2_g1

0xa6c4,	// (0x0005f01f) list_medium_line_t3_right_iconx2_g2

0xa873,	// (0x0005f1ce) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00064669) list_medium_line_t3_right_iconx2_g

0xa87b,	// (0x0005f1d6) list_medium_line_t3_right_iconx2_t1

0xa88b,	// (0x0005f1e6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00064670) list_medium_line_t3_right_iconx2_t

0x4023,	// (0x0005897e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x3_t4_g4_g1

0x402f,	// (0x0005898a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x3_t4_g4_g2

0x40d4,	// (0x00058a2f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x40d4,	// (0x00058a2f) list_medium_line_x3_t4_g4_g3

0xa899,	// (0x0005f1f4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa899,	// (0x0005f1f4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00064675) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00064675) list_medium_line_x3_t4_g4_g

0xa8a5,	// (0x0005f200) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa8a5,	// (0x0005f200) list_medium_line_x3_t4_g4_t1

0xa8bc,	// (0x0005f217) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa8bc,	// (0x0005f217) list_medium_line_x3_t4_g4_t2

0x54cd,	// (0x00059e28) list_medium_line_x3_t4_g4_t3_ParamLimits

0x54cd,	// (0x00059e28) list_medium_line_x3_t4_g4_t3

0xa8d1,	// (0x0005f22c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa8d1,	// (0x0005f22c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0006467e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0006467e) list_medium_line_x3_t4_g4_t

0xa8ee,	// (0x0005f249) list_single_dyc_row_text_pane_t1_ParamLimits

0xa8ee,	// (0x0005f249) list_single_dyc_row_text_pane_t1

0xa925,	// (0x0005f280) list_single_dyc_row_text_pane_t2_ParamLimits

0xa925,	// (0x0005f280) list_single_dyc_row_text_pane_t2

0x01b7,	// (0x00054b12) list_single_dyc_row_text_pane_t3_ParamLimits

0x01b7,	// (0x00054b12) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00064687) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00064687) list_single_dyc_row_text_pane_t

0x01db,	// (0x00054b36) list_single_dyc_row_pane_g1_ParamLimits

0x01db,	// (0x00054b36) list_single_dyc_row_pane_g1

0x01e7,	// (0x00054b42) list_single_dyc_row_pane_g2_ParamLimits

0x01e7,	// (0x00054b42) list_single_dyc_row_pane_g2

0x01f3,	// (0x00054b4e) list_single_dyc_row_pane_g3_ParamLimits

0x01f3,	// (0x00054b4e) list_single_dyc_row_pane_g3

0x01ff,	// (0x00054b5a) list_single_dyc_row_pane_g4_ParamLimits

0x01ff,	// (0x00054b5a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00064694) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00064694) list_single_dyc_row_pane_g

0x020b,	// (0x00054b66) list_single_dyc_row_text_pane_ParamLimits

0x020b,	// (0x00054b66) list_single_dyc_row_text_pane

0x114c,	// (0x00055aa7) bg_sp_fs_scroll_pane

0x15ee,	// (0x00055f49) thumb_sp_fs_scroll_pane

0x8fe1,	// (0x0005d93c) list_medium_line_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_g1

0xaa48,	// (0x0005f3a3) list_medium_line_t1_ParamLimits

0xaa48,	// (0x0005f3a3) list_medium_line_t1

0x4023,	// (0x0005897e) list_medium_line_x2_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_g1

0x402f,	// (0x0005898a) list_medium_line_x2_g2_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0006469d) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0006469d) list_medium_line_x2_g

0x022a,	// (0x00054b85) list_medium_line_x2_t1_ParamLimits

0x022a,	// (0x00054b85) list_medium_line_x2_t1

0x4023,	// (0x0005897e) list_medium_line_x3_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x3_g1

0x402f,	// (0x0005898a) list_medium_line_x3_g2_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0006469d) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0006469d) list_medium_line_x3_g

0x022a,	// (0x00054b85) list_medium_line_x3_t1_ParamLimits

0x022a,	// (0x00054b85) list_medium_line_x3_t1

0x15f7,	// (0x00055f52) thumb_sp_fs_scroll_pane_g1

0x1600,	// (0x00055f5b) thumb_sp_fs_scroll_pane_g2

0x1609,	// (0x00055f64) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000646a2) thumb_sp_fs_scroll_pane_g

0x15f7,	// (0x00055f52) bg_sp_fs_scroll_pane_g1

0x1600,	// (0x00055f5b) bg_sp_fs_scroll_pane_g2

0x1609,	// (0x00055f64) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000646a2) bg_sp_fs_scroll_pane_g

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4023,	// (0x0005897e) list_medium_line_x2_t3_g4_g1

0x40c8,	// (0x00058a23) list_medium_line_x2_t3_g4_g2_ParamLimits

0x40c8,	// (0x00058a23) list_medium_line_x2_t3_g4_g2

0x402f,	// (0x0005898a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x402f,	// (0x0005898a) list_medium_line_x2_t3_g4_g3

0x403b,	// (0x00058996) list_medium_line_x2_t3_g4_g4_ParamLimits

0x403b,	// (0x00058996) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00063c1d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00063c1d) list_medium_line_x2_t3_g4_g

0xaa5d,	// (0x0005f3b8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xaa5d,	// (0x0005f3b8) list_medium_line_x2_t3_g4_t1

0xaa73,	// (0x0005f3ce) list_medium_line_x2_t3_g4_t2_ParamLimits

0xaa73,	// (0x0005f3ce) list_medium_line_x2_t3_g4_t2

0x406e,	// (0x000589c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x406e,	// (0x000589c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000646a9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000646a9) list_medium_line_x2_t3_g4_t

0x8fe1,	// (0x0005d93c) list_medium_line_g2_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_g2_g1

0x8fed,	// (0x0005d948) list_medium_line_g2_g2_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006435b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006435b) list_medium_line_g2_g

0xaa8d,	// (0x0005f3e8) list_medium_line_g2_t1_ParamLimits

0xaa8d,	// (0x0005f3e8) list_medium_line_g2_t1

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g2_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g2_g1

0x8fed,	// (0x0005d948) list_medium_line_t3_g2_g2_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006435b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006435b) list_medium_line_t3_g2_g

0xaaa2,	// (0x0005f3fd) list_medium_line_t3_g2_t1_ParamLimits

0xaaa2,	// (0x0005f3fd) list_medium_line_t3_g2_t1

0xaabc,	// (0x0005f417) list_medium_line_t3_g2_t2_ParamLimits

0xaabc,	// (0x0005f417) list_medium_line_t3_g2_t2

0xaad2,	// (0x0005f42d) list_medium_line_t3_g2_t3_ParamLimits

0xaad2,	// (0x0005f42d) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000646b0) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000646b0) list_medium_line_t3_g2_t

0xa6c4,	// (0x0005f01f) list_medium_line_right_icon_g1

0xaae8,	// (0x0005f443) list_medium_line_right_icon_t1

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g1

0xaaf6,	// (0x0005f451) list_medium_line_t2_t1_ParamLimits

0xaaf6,	// (0x0005f451) list_medium_line_t2_t1

0xab10,	// (0x0005f46b) list_medium_line_t2_t2_ParamLimits

0xab10,	// (0x0005f46b) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000646b7) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000646b7) list_medium_line_t2_t

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g1

0xab25,	// (0x0005f480) list_medium_line_t3_t1_ParamLimits

0xab25,	// (0x0005f480) list_medium_line_t3_t1

0xab3f,	// (0x0005f49a) list_medium_line_t3_t2_ParamLimits

0xab3f,	// (0x0005f49a) list_medium_line_t3_t2

0xab55,	// (0x0005f4b0) list_medium_line_t3_t3_ParamLimits

0xab55,	// (0x0005f4b0) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000646bc) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000646bc) list_medium_line_t3_t

0x8fe1,	// (0x0005d93c) list_medium_line_g3_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_g3_g1

0xab6a,	// (0x0005f4c5) list_medium_line_g3_g2_ParamLimits

0xab6a,	// (0x0005f4c5) list_medium_line_g3_g2

0x8fed,	// (0x0005d948) list_medium_line_g3_g3_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000646c3) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000646c3) list_medium_line_g3_g

0xab76,	// (0x0005f4d1) list_medium_line_g3_t1_ParamLimits

0xab76,	// (0x0005f4d1) list_medium_line_g3_t1

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g3_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t2_g3_g1

0xab6a,	// (0x0005f4c5) list_medium_line_t2_g3_g2_ParamLimits

0xab6a,	// (0x0005f4c5) list_medium_line_t2_g3_g2

0x8fed,	// (0x0005d948) list_medium_line_t2_g3_g3_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000646c3) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000646c3) list_medium_line_t2_g3_g

0xab8b,	// (0x0005f4e6) list_medium_line_t2_g3_t1_ParamLimits

0xab8b,	// (0x0005f4e6) list_medium_line_t2_g3_t1

0xaba5,	// (0x0005f500) list_medium_line_t2_g3_t2_ParamLimits

0xaba5,	// (0x0005f500) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000646ca) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000646ca) list_medium_line_t2_g3_t

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g3_g1_ParamLimits

0x8fe1,	// (0x0005d93c) list_medium_line_t3_g3_g1

0xab6a,	// (0x0005f4c5) list_medium_line_t3_g3_g2_ParamLimits

0xab6a,	// (0x0005f4c5) list_medium_line_t3_g3_g2

0x8fed,	// (0x0005d948) list_medium_line_t3_g3_g3_ParamLimits

0x8fed,	// (0x0005d948) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000646c3) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000646c3) list_medium_line_t3_g3_g

0xabbb,	// (0x0005f516) list_medium_line_t3_g3_t1_ParamLimits

0xabbb,	// (0x0005f516) list_medium_line_t3_g3_t1

0xabd4,	// (0x0005f52f) list_medium_line_t3_g3_t2_ParamLimits

0xabd4,	// (0x0005f52f) list_medium_line_t3_g3_t2

0xabea,	// (0x0005f545) list_medium_line_t3_g3_t3_ParamLimits

0xabea,	// (0x0005f545) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000646cf) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000646cf) list_medium_line_t3_g3_t

0xa86b,	// (0x0005f1c6) list_medium_line_right_iconx2_g1

0xa6c4,	// (0x0005f01f) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000646d6) list_medium_line_right_iconx2_g

0xac00,	// (0x0005f55b) list_medium_line_right_iconx2_t1

0xa86b,	// (0x0005f1c6) list_medium_line_t2_right_iconx2_g1

0xa6c4,	// (0x0005f01f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000646d6) list_medium_line_t2_right_iconx2_g

0xac0e,	// (0x0005f569) list_medium_line_t2_right_iconx2_t1

0xac1e,	// (0x0005f579) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000646db) list_medium_line_t2_right_iconx2_t

0xac2c,	// (0x0005f587) list_medium_line_x4_t4_t1

0xac3a,	// (0x0005f595) list_medium_line_x4_t4_t2

0xac4a,	// (0x0005f5a5) list_medium_line_x4_t4_t3

0xac5a,	// (0x0005f5b5) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000646e0) list_medium_line_x4_t4_t

0xac94,	// (0x0005f5ef) tport_appsw_pane_ParamLimits

0xac94,	// (0x0005f5ef) tport_appsw_pane

0xaca2,	// (0x0005f5fd) tport_contact_pane_ParamLimits

0xaca2,	// (0x0005f5fd) tport_contact_pane

0xacb2,	// (0x0005f60d) tport_listscroll_pane_ParamLimits

0xacb2,	// (0x0005f60d) tport_listscroll_pane

0xacc2,	// (0x0005f61d) cell_tport_appsw_pane_ParamLimits

0xacc2,	// (0x0005f61d) cell_tport_appsw_pane

0xe69d,	// (0x00062ff8) tport_appsw_pane_g1_ParamLimits

0xe69d,	// (0x00062ff8) tport_appsw_pane_g1

0x1612,	// (0x00055f6d) tport_contact_pane_g1

0x0d0c,	// (0x00055667) tport_contact_pane_t1

0x161b,	// (0x00055f76) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000646e9) tport_contact_pane_t

0x1629,	// (0x00055f84) list_tport_pane

0x1632,	// (0x00055f8d) scroll_pane_cp_030

0xacf5,	// (0x0005f650) cell_tport_appsw_pane_g1

0xad05,	// (0x0005f660) cell_tport_appsw_pane_t1

0xad13,	// (0x0005f66e) grid_highlight_pane_cp019

0xad1b,	// (0x0005f676) list_tport_double_graphic_pane_ParamLimits

0xad1b,	// (0x0005f676) list_tport_double_graphic_pane

0xd9f7,	// (0x00062352) list_highlight_pane_cp023_ParamLimits

0xd9f7,	// (0x00062352) list_highlight_pane_cp023

0xad2c,	// (0x0005f687) list_tport_double_graphic_pane_g1_ParamLimits

0xad2c,	// (0x0005f687) list_tport_double_graphic_pane_g1

0xad39,	// (0x0005f694) list_tport_double_graphic_pane_t1_ParamLimits

0xad39,	// (0x0005f694) list_tport_double_graphic_pane_t1

0xad4e,	// (0x0005f6a9) list_tport_double_graphic_pane_t2_ParamLimits

0xad4e,	// (0x0005f6a9) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000646f5) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000646f5) list_tport_double_graphic_pane_t

0x114c,	// (0x00055aa7) main_cale_note_pane

0x87b1,	// (0x0005d10c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x87b1,	// (0x0005d10c) cell_vitu2_function_top_wide_pane_cp01

0xa28d,	// (0x0005ebe8) wait_bar_pane_cp05_ParamLimits

0xd9f7,	// (0x00062352) listscroll_cmail_pane

0x163b,	// (0x00055f96) list_cmail_pane

0xad60,	// (0x0005f6bb) list_cmail_body_pane

0xad87,	// (0x0005f6e2) list_single_cmail_header_caption_pane

0xadb2,	// (0x0005f70d) list_single_cmail_header_detail_pane_ParamLimits

0xadb2,	// (0x0005f70d) list_single_cmail_header_detail_pane

0x164b,	// (0x00055fa6) list_single_cmail_header_caption_pane_t1

0xade8,	// (0x0005f743) list_single_cmail_header_detail_pane_g1_ParamLimits

0xade8,	// (0x0005f743) list_single_cmail_header_detail_pane_g1

0x0240,	// (0x00054b9b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0240,	// (0x00054b9b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000646fa) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000646fa) list_single_cmail_header_detail_pane_g

0x024c,	// (0x00054ba7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x024c,	// (0x00054ba7) list_single_cmail_header_detail_pane_t1

0x02ac,	// (0x00054c07) list_single_cmail_header_editor_pane_bg_ParamLimits

0x02ac,	// (0x00054c07) list_single_cmail_header_editor_pane_bg

0x0e77,	// (0x000557d2) list_cmail_body_pane_g1

0x166f,	// (0x00055fca) list_cmail_body_pane_t1

0xee53,	// (0x000637ae) list_single_cmail_header_editor_pane_bg_g1

0xc2f9,	// (0x00060c54) list_single_cmail_header_editor_pane_bg_g1_copy1

0xee63,	// (0x000637be) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee5b,	// (0x000637b6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xf0c2,	// (0x00063a1d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xee83,	// (0x000637de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xee73,	// (0x000637ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xee7b,	// (0x000637d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc2d9,	// (0x00060c34) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xadfe,	// (0x0005f759) calenote_gesture_pane_ParamLimits

0xadfe,	// (0x0005f759) calenote_gesture_pane

0xae18,	// (0x0005f773) calenote_window_pane_ParamLimits

0xae18,	// (0x0005f773) calenote_window_pane

0x167d,	// (0x00055fd8) popup_note_window_cp01

0xae30,	// (0x0005f78b) calenote_swipe_1_pane_ParamLimits

0xae30,	// (0x0005f78b) calenote_swipe_1_pane

0xa668,	// (0x0005efc3) calenote_swipe_2_pane_ParamLimits

0xa668,	// (0x0005efc3) calenote_swipe_2_pane

0x1498,	// (0x00055df3) calenote_swipe_1_pane_g1_ParamLimits

0x1498,	// (0x00055df3) calenote_swipe_1_pane_g1

0x14a5,	// (0x00055e00) calenote_swipe_1_pane_g2_ParamLimits

0x14a5,	// (0x00055e00) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0006461e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0006461e) calenote_swipe_1_pane_g

0x168f,	// (0x00055fea) calenote_swipe_1_pane_t1_ParamLimits

0x168f,	// (0x00055fea) calenote_swipe_1_pane_t1

0x1498,	// (0x00055df3) calenote_swipe_2_pane_g1_ParamLimits

0x1498,	// (0x00055df3) calenote_swipe_2_pane_g1

0x16ae,	// (0x00056009) calenote_swipe_2_pane_g2_ParamLimits

0x16ae,	// (0x00056009) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00064706) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00064706) calenote_swipe_2_pane_g

0x16ba,	// (0x00056015) calenote_swipe_2_pane_t1_ParamLimits

0x16ba,	// (0x00056015) calenote_swipe_2_pane_t1

0x114c,	// (0x00055aa7) main_mup_navstr_pane

0x7501,	// (0x0005be5c) main_mup3_pane_t7_ParamLimits

0x7501,	// (0x0005be5c) main_mup3_pane_t7

0x7f07,	// (0x0005c862) main_mp4_pane_g6_ParamLimits

0x7f07,	// (0x0005c862) main_mp4_pane_g6

0x8287,	// (0x0005cbe2) main_image3_pane_t4_ParamLimits

0x8287,	// (0x0005cbe2) main_image3_pane_t4

0xae43,	// (0x0005f79e) popup_navstr_preview_pane_ParamLimits

0xae43,	// (0x0005f79e) popup_navstr_preview_pane

0xae4f,	// (0x0005f7aa) scroll_navstr_pane_ParamLimits

0xae4f,	// (0x0005f7aa) scroll_navstr_pane

0x114c,	// (0x00055aa7) bg_popup_preview_window_pane_cp04

0x16e1,	// (0x0005603c) popup_navstr_preview_pane_t1

0xae5b,	// (0x0005f7b6) scroll_navstr_pane_g1_ParamLimits

0xae5b,	// (0x0005f7b6) scroll_navstr_pane_g1

0xae68,	// (0x0005f7c3) scroll_navstr_pane_t1_ParamLimits

0xae68,	// (0x0005f7c3) scroll_navstr_pane_t1

0x1686,	// (0x00055fe1) bg_button_pane_cp014

0x1686,	// (0x00055fe1) bg_button_pane_cp030

0xa55c,	// (0x0005eeb7) list_double_fisheye_pane_g4_ParamLimits

0xa55c,	// (0x0005eeb7) list_double_fisheye_pane_g4

0xa568,	// (0x0005eec3) list_double_fisheye_pane_g5_ParamLimits

0xa568,	// (0x0005eec3) list_double_fisheye_pane_g5

0xdee3,	// (0x0006283e) sp_fs_scroll_pane_cp03

0x158b,	// (0x00055ee6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1597,	// (0x00055ef2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0006463b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x15a3,	// (0x00055efe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1643,	// (0x00055f9e) sp_fs_scroll_pane_cp02

0xbfdf,	// (0x0006093a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbfdf,	// (0x0006093a) popup_sp_fs_calendar_preview_list_single_pane

0x114c,	// (0x00055aa7) main_cam6_pano_pane

0x6509,	// (0x0005ae64) main_mup3_pane_ParamLimits

0x114c,	// (0x00055aa7) main_phacti_pane

0xa162,	// (0x0005eabd) bg_button_pane_cp11

0xa17a,	// (0x0005ead5) main_mobtv_info_pane_g2_ParamLimits

0xa17a,	// (0x0005ead5) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0006459b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0006459b) main_mobtv_info_pane_g

0xa32c,	// (0x0005ec87) sc_clock_pane_t5_ParamLimits

0xa32c,	// (0x0005ec87) sc_clock_pane_t5

0xa3cd,	// (0x0005ed28) main_radioblah_pane_g1_ParamLimits

0x1114,	// (0x00055a6f) main_radioblah_pane_t3_ParamLimits

0x1114,	// (0x00055a6f) main_radioblah_pane_t3

0x112c,	// (0x00055a87) main_radioblah_pane_t4_ParamLimits

0x112c,	// (0x00055a87) main_radioblah_pane_t4

0xa3eb,	// (0x0005ed46) main_radioblah_text_pane_ParamLimits

0xa3eb,	// (0x0005ed46) main_radioblah_text_pane

0xa3f8,	// (0x0005ed53) main_radioblah_info_pane_g1_ParamLimits

0xa48d,	// (0x0005ede8) main_radioblah_info_pane_t4_ParamLimits

0xa48d,	// (0x0005ede8) main_radioblah_info_pane_t4

0xd9f7,	// (0x00062352) main_sp_fs_calendar_pane

0xae7a,	// (0x0005f7d5) main_phacti_pane_g1

0xae82,	// (0x0005f7dd) phacti_note_pane_ParamLimits

0xae82,	// (0x0005f7dd) phacti_note_pane

0x16f8,	// (0x00056053) phacti_term_pane_ParamLimits

0x16f8,	// (0x00056053) phacti_term_pane

0x170d,	// (0x00056068) phacti_note_pane_t1_ParamLimits

0x170d,	// (0x00056068) phacti_note_pane_t1

0x02c3,	// (0x00054c1e) phacti_term_pane_g1

0x02cb,	// (0x00054c26) phacti_term_pane_t1_ParamLimits

0x02cb,	// (0x00054c26) phacti_term_pane_t1

0x1724,	// (0x0005607f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc07e,	// (0x000609d9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00064710) popup_sp_fs_calendar_preview_list_single_pane_g

0x172c,	// (0x00056087) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x172c,	// (0x00056087) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1742,	// (0x0005609d) aid_popup_sp_fs_bg_corner_pane

0xe36d,	// (0x00062cc8) popup_sp_fs_calendar_preview_bg_pane_g1

0x114c,	// (0x00055aa7) popup_sp_fs_calendar_preview_bg_pane

0x174a,	// (0x000560a5) popup_sp_fs_calendar_preview_list_pane

0xdf5c,	// (0x000628b7) bg_main_sp_fs_cale_pane_ParamLimits

0xdf5c,	// (0x000628b7) bg_main_sp_fs_cale_pane

0x02fe,	// (0x00054c59) listscroll_cale_mrui_pane_ParamLimits

0x02fe,	// (0x00054c59) listscroll_cale_mrui_pane

0x0313,	// (0x00054c6e) listscroll_sp_fs_schedule_track_pane

0x031c,	// (0x00054c77) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x031c,	// (0x00054c77) main_sp_fs_ctrlbar_pane_cp01

0x1752,	// (0x000560ad) main_sp_fs_ribbon_pane

0x032f,	// (0x00054c8a) popup_sp_fs_cale_preview_window

0xaee5,	// (0x0005f840) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaee5,	// (0x0005f840) list_single_sp_fs_schedule_track_pane

0x04a2,	// (0x00054dfd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x04a2,	// (0x00054dfd) bg_sp_fs_highlight_list_pane_cp03

0xaf07,	// (0x0005f862) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaf07,	// (0x0005f862) list_single_sp_fs_schedule_track_pane_g1

0xaf13,	// (0x0005f86e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaf13,	// (0x0005f86e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00064715) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00064715) list_single_sp_fs_schedule_track_pane_g

0xaf1f,	// (0x0005f87a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaf1f,	// (0x0005f87a) list_single_sp_fs_schedule_track_pane_t1

0xaf37,	// (0x0005f892) sp_fs_schedule_track_pane_ParamLimits

0xaf37,	// (0x0005f892) sp_fs_schedule_track_pane

0x175a,	// (0x000560b5) sp_fs_schedule_track_pane_g1

0x1762,	// (0x000560bd) sp_fs_schedule_track_pane_g2

0x176a,	// (0x000560c5) sp_fs_schedule_track_pane_g3

0x1772,	// (0x000560cd) sp_fs_schedule_track_pane_g4

0x177a,	// (0x000560d5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0006471a) sp_fs_schedule_track_pane_g

0xee53,	// (0x000637ae) bg_sp_fs_schedule_viewer_highlight_g1

0xc2f9,	// (0x00060c54) bg_sp_fs_schedule_viewer_highlight_g2

0xee5b,	// (0x000637b6) bg_sp_fs_schedule_viewer_highlight_g3

0xee63,	// (0x000637be) bg_sp_fs_schedule_viewer_highlight_g4

0xf0c2,	// (0x00063a1d) bg_sp_fs_schedule_viewer_highlight_g5

0xee73,	// (0x000637ce) bg_sp_fs_schedule_viewer_highlight_g6

0xee7b,	// (0x000637d6) bg_sp_fs_schedule_viewer_highlight_g7

0xee83,	// (0x000637de) bg_sp_fs_schedule_viewer_highlight_g8

0xc2d9,	// (0x00060c34) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00064725) bg_sp_fs_schedule_viewer_highlight_g

0x114c,	// (0x00055aa7) bg_main_sp_fs_ribbon_pane

0xaf47,	// (0x0005f8a2) main_sp_fs_ribbon_pane_g1

0x1782,	// (0x000560dd) main_sp_fs_ribbon_pane_t1

0xaf50,	// (0x0005f8ab) main_sp_fs_ribbon_pane_t2

0x1791,	// (0x000560ec) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00064738) main_sp_fs_ribbon_pane_t

0x17a0,	// (0x000560fb) main_sp_fs_ribbon_scheduler_pane

0x17a8,	// (0x00056103) bg_main_sp_fs_ribbon_pane_g1

0x17b1,	// (0x0005610c) bg_main_sp_fs_ribbon_pane_g2

0x17ba,	// (0x00056115) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0006473f) bg_main_sp_fs_ribbon_pane_g

0x17c2,	// (0x0005611d) main_sp_fs_ribbon_scheduler_pane_g1

0x17cb,	// (0x00056126) main_sp_fs_ribbon_scheduler_pane_g2

0x17d4,	// (0x0005612f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00064746) main_sp_fs_ribbon_scheduler_pane_g

0x17dd,	// (0x00056138) list_cale_mrui_pane

0xaf5f,	// (0x0005f8ba) sp_fs_scroll_pane_cp07_ParamLimits

0xaf5f,	// (0x0005f8ba) sp_fs_scroll_pane_cp07

0xaf7b,	// (0x0005f8d6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaf7b,	// (0x0005f8d6) bg_sp_fs_schedule_viewer_highlight

0x17ea,	// (0x00056145) list_single_sp_fs_schedule_track_pane_cp01

0x17f2,	// (0x0005614d) list_sp_fs_schedule_track_pane

0x17fa,	// (0x00056155) sp_fs_scroll_pane_cp06_ParamLimits

0x17fa,	// (0x00056155) sp_fs_scroll_pane_cp06

0xe36d,	// (0x00062cc8) bgmain_sp_fs_calendar_pane_g1

0xaf88,	// (0x0005f8e3) list_single_cale_mrui_pane_ParamLimits

0xaf88,	// (0x0005f8e3) list_single_cale_mrui_pane

0x0341,	// (0x00054c9c) list_single_cale_mrui_row_pane_ParamLimits

0x0341,	// (0x00054c9c) list_single_cale_mrui_row_pane

0x034e,	// (0x00054ca9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x034e,	// (0x00054ca9) list_single_cale_mrui_row_pane_g1

0x0386,	// (0x00054ce1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0386,	// (0x00054ce1) list_single_cale_mrui_row_pane_t1

0xafb6,	// (0x0005f911) list_single_cale_mrui_row_pane_t2_ParamLimits

0xafb6,	// (0x0005f911) list_single_cale_mrui_row_pane_t2

0x0398,	// (0x00054cf3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0398,	// (0x00054cf3) list_single_cale_mrui_row_pane_t3

0x03c7,	// (0x00054d22) list_single_cale_mrui_row_pane_t4_ParamLimits

0x03c7,	// (0x00054d22) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00064754) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00064754) list_single_cale_mrui_row_pane_t

0xb01c,	// (0x0005f977) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb01c,	// (0x0005f977) list_single_cmail_header_editor_pane_bg_cp01

0xb03c,	// (0x0005f997) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb03c,	// (0x0005f997) list_single_cmail_header_editor_pane_bg_cp02

0xb058,	// (0x0005f9b3) main_radioblah_text_pane_t1_ParamLimits

0xb058,	// (0x0005f9b3) main_radioblah_text_pane_t1

0x1819,	// (0x00056174) cam6_indi_pane_cp01

0x1821,	// (0x0005617c) cam6_mode_pane_cp01

0x1829,	// (0x00056184) cam6_pano_pane

0x1832,	// (0x0005618d) cam6_zoom_pane_cp01

0x183a,	// (0x00056195) cam6_pano_image_pane

0x1845,	// (0x000561a0) cam6_pano_pane_g1

0x0e77,	// (0x000557d2) cam6_pano_pane_g2

0x184e,	// (0x000561a9) cam6_pano_pane_g3

0x1857,	// (0x000561b2) cam6_pano_pane_g4

0xe998,	// (0x000632f3) cam6_pano_pane_g5

0x1860,	// (0x000561bb) cam6_pano_pane_g6

0x1144,	// (0x00055a9f) cam6_pano_pane_g7

0x186a,	// (0x000561c5) cam6_pano_pane_g8

0x1873,	// (0x000561ce) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0006475d) cam6_pano_pane_g

0x114c,	// (0x00055aa7) main_browser_tag_pane

0x16d9,	// (0x00056034) grid_navstr_albumart_pane

0x187e,	// (0x000561d9) cell_navstr_albumart_pane_ParamLimits

0x187e,	// (0x000561d9) cell_navstr_albumart_pane

0x189e,	// (0x000561f9) cell_navstr_albumart_pane_g1

0xdd61,	// (0x000626bc) cell_navstr_albumart_pane_g2

0xdd71,	// (0x000626cc) cell_navstr_albumart_pane_g3

0xdd69,	// (0x000626c4) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00064770) cell_navstr_albumart_pane_g

0xb073,	// (0x0005f9ce) bt_list_pane_ParamLimits

0xb073,	// (0x0005f9ce) bt_list_pane

0xb093,	// (0x0005f9ee) bt_list_pane_t1

0xb0a2,	// (0x0005f9fd) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00064779) bt_list_pane_t

0x114c,	// (0x00055aa7) main_cale_prevew_pane

0xb0b1,	// (0x0005fa0c) popup_cale_preview_window_ParamLimits

0xb0b1,	// (0x0005fa0c) popup_cale_preview_window

0xd9f7,	// (0x00062352) bg_popup_preview_window_pane_cp05_ParamLimits

0xd9f7,	// (0x00062352) bg_popup_preview_window_pane_cp05

0x18a6,	// (0x00056201) list_cale_preview_pane_ParamLimits

0x18a6,	// (0x00056201) list_cale_preview_pane

0xb0ca,	// (0x0005fa25) list_double_cale_preview_pane_ParamLimits

0xb0ca,	// (0x0005fa25) list_double_cale_preview_pane

0xb0dc,	// (0x0005fa37) list_single_cale_preview_pane_ParamLimits

0xb0dc,	// (0x0005fa37) list_single_cale_preview_pane

0xb0f2,	// (0x0005fa4d) list_single_cale_preview_pane_g1

0xb0fa,	// (0x0005fa55) list_single_cale_preview_pane_t1_ParamLimits

0xb0fa,	// (0x0005fa55) list_single_cale_preview_pane_t1

0xb10f,	// (0x0005fa6a) list_double_cale_preview_pane_g1

0xb117,	// (0x0005fa72) list_double_cale_preview_pane_t1_ParamLimits

0xb117,	// (0x0005fa72) list_double_cale_preview_pane_t1

0xb12c,	// (0x0005fa87) list_double_cale_preview_pane_t2_ParamLimits

0xb12c,	// (0x0005fa87) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0006477e) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0006477e) list_double_cale_preview_pane_t

0x114c,	// (0x00055aa7) main_ezdial_pane

0xd9f7,	// (0x00062352) main_sp_fs_email_pane_ParamLimits

0xa6ea,	// (0x0005f045) cmail_ddmenu_btn01_pane_ParamLimits

0xa6ea,	// (0x0005f045) cmail_ddmenu_btn01_pane

0xa707,	// (0x0005f062) cmail_ddmenu_btn02_pane_ParamLimits

0xa707,	// (0x0005f062) cmail_ddmenu_btn02_pane

0xa725,	// (0x0005f080) cmail_ddmenu_btn03_pane_ParamLimits

0xa725,	// (0x0005f080) cmail_ddmenu_btn03_pane

0xa753,	// (0x0005f0ae) main_sp_fs_ctrlbar_pane_ParamLimits

0xa769,	// (0x0005f0c4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xad60,	// (0x0005f6bb) list_cmail_body_pane_ParamLimits

0x1659,	// (0x00055fb4) bg_button_pane_cp12

0x1662,	// (0x00055fbd) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1662,	// (0x00055fbd) list_single_cmail_header_detail_pane_g3

0x0288,	// (0x00054be3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0288,	// (0x00054be3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00064701) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00064701) list_single_cmail_header_detail_pane_t

0x02e0,	// (0x00054c3b) phacti_term_pane_t2_ParamLimits

0x02e0,	// (0x00054c3b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0006470b) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0006470b) phacti_term_pane_t

0x18b2,	// (0x0005620d) aid_size_list_single_double

0xb144,	// (0x0005fa9f) popup_ezdial_listscroll_window

0xb165,	// (0x0005fac0) popup_number_entry_window_cp01

0xc0a0,	// (0x000609fb) bg_popup_call_pane_cp09

0x18be,	// (0x00056219) ezdial_list_pane

0x18c6,	// (0x00056221) scroll_pane_cp23

0xe149,	// (0x00062aa4) bg_button_pane_cp028_ParamLimits

0xe149,	// (0x00062aa4) bg_button_pane_cp028

0xb173,	// (0x0005face) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb173,	// (0x0005face) cmail_ddmenu_btn01_pane_g1

0xb183,	// (0x0005fade) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb183,	// (0x0005fade) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00064783) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00064783) cmail_ddmenu_btn01_pane_g

0x18ce,	// (0x00056229) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x18ce,	// (0x00056229) cmail_ddmenu_btn01_pane_t1

0xdf5c,	// (0x000628b7) bg_button_pane_cp029_ParamLimits

0xdf5c,	// (0x000628b7) bg_button_pane_cp029

0xb183,	// (0x0005fade) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb183,	// (0x0005fade) cmail_ddmenu_btn02_pane_g1

0xb19c,	// (0x0005faf7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb19c,	// (0x0005faf7) cmail_ddmenu_btn02_pane_t1

0x04a2,	// (0x00054dfd) bg_button_pane_cp031_ParamLimits

0x04a2,	// (0x00054dfd) bg_button_pane_cp031

0xb183,	// (0x0005fade) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb183,	// (0x0005fade) cmail_ddmenu_btn03_pane_g1

0xb19c,	// (0x0005faf7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb19c,	// (0x0005faf7) cmail_ddmenu_btn03_pane_t1

0x8124,	// (0x0005ca7f) cell_dialer2_keypad_pane_t1_ParamLimits

0x813e,	// (0x0005ca99) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x813e,	// (0x0005ca99) cell_dialer2_keypad_pane_t1_copy1

0x9fa3,	// (0x0005e8fe) ncimui_group_button_pane

0xd9f7,	// (0x00062352) main_sp_fs_calendar_pane_ParamLimits

0xad87,	// (0x0005f6e2) list_single_cmail_header_caption_pane_ParamLimits

0x02f5,	// (0x00054c50) aid_recal_txt_sm_pane

0x114c,	// (0x00055aa7) mian_recal_day_pane

0x032f,	// (0x00054c8a) popup_sp_fs_cale_preview_window_ParamLimits

0x18e3,	// (0x0005623e) list_recal_day_pane

0x0411,	// (0x00054d6c) list_single_recal_day_pane_ParamLimits

0x0411,	// (0x00054d6c) list_single_recal_day_pane

0x190a,	// (0x00056265) list_single_recal_day_pane_g1_ParamLimits

0x190a,	// (0x00056265) list_single_recal_day_pane_g1

0x0423,	// (0x00054d7e) list_single_recal_day_pane_g2_ParamLimits

0x0423,	// (0x00054d7e) list_single_recal_day_pane_g2

0x042f,	// (0x00054d8a) list_single_recal_day_pane_g3_ParamLimits

0x042f,	// (0x00054d8a) list_single_recal_day_pane_g3

0xb1c0,	// (0x0005fb1b) list_single_recal_day_pane_g4_ParamLimits

0xb1c0,	// (0x0005fb1b) list_single_recal_day_pane_g4

0x043b,	// (0x00054d96) list_single_recal_day_pane_g5_ParamLimits

0x043b,	// (0x00054d96) list_single_recal_day_pane_g5

0x0447,	// (0x00054da2) list_single_recal_day_pane_g6_ParamLimits

0x0447,	// (0x00054da2) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00064792) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00064792) list_single_recal_day_pane_g

0x045b,	// (0x00054db6) list_single_recal_day_pane_t1

0x046d,	// (0x00054dc8) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0006479d) list_single_recal_day_pane_t

0xb1d8,	// (0x0005fb33) ncimui_query_button_pane_ParamLimits

0xb1d8,	// (0x0005fb33) ncimui_query_button_pane

0xb1e8,	// (0x0005fb43) ncimui_query_button_pane_t1_ParamLimits

0xb1e8,	// (0x0005fb43) ncimui_query_button_pane_t1

0x1916,	// (0x00056271) ncimui_query_button_pane_t2_ParamLimits

0x1916,	// (0x00056271) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000647a2) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000647a2) ncimui_query_button_pane_t

0xb1fb,	// (0x0005fb56) query_button_pane_ParamLimits

0xb1fb,	// (0x0005fb56) query_button_pane

0x114c,	// (0x00055aa7) bg_button_pane_cp0028

0x1929,	// (0x00056284) query_button_pane_t1

0x6525,	// (0x0005ae80) main_tport_pane_ParamLimits

0xac6a,	// (0x0005f5c5) bg_popup_window_pane_cp01_ParamLimits

0xac6a,	// (0x0005f5c5) bg_popup_window_pane_cp01

0xac78,	// (0x0005f5d3) heading_pane_cp08_ParamLimits

0xac78,	// (0x0005f5d3) heading_pane_cp08

0xac86,	// (0x0005f5e1) heading_pane_cp07_ParamLimits

0xac86,	// (0x0005f5e1) heading_pane_cp07

0xacf5,	// (0x0005f650) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000646ee) cell_tport_appsw_pane_g

0xda11,	// (0x0006236c) input_candi_list_open_g1

0xc4bc,	// (0x00060e17) list_cale_time_pane_g6_ParamLimits

0xc4bc,	// (0x00060e17) list_cale_time_pane_g6

0x6fa2,	// (0x0005b8fd) aid_size_touch_calib_1_ParamLimits

0x6fa2,	// (0x0005b8fd) aid_size_touch_calib_1

0x6fae,	// (0x0005b909) aid_size_touch_calib_2_ParamLimits

0x6fae,	// (0x0005b909) aid_size_touch_calib_2

0x6fbc,	// (0x0005b917) aid_size_touch_calib_3_ParamLimits

0x6fbc,	// (0x0005b917) aid_size_touch_calib_3

0x6fcc,	// (0x0005b927) aid_size_touch_calib_4_ParamLimits

0x6fcc,	// (0x0005b927) aid_size_touch_calib_4

0x6fda,	// (0x0005b935) main_touch_calib_button_group_pane_ParamLimits

0x6fda,	// (0x0005b935) main_touch_calib_button_group_pane

0x6fe8,	// (0x0005b943) main_touch_calib_pane_g1_ParamLimits

0x6ff4,	// (0x0005b94f) main_touch_calib_pane_g2_ParamLimits

0x7000,	// (0x0005b95b) main_touch_calib_pane_g3_ParamLimits

0x700c,	// (0x0005b967) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000640ac) main_touch_calib_pane_g_ParamLimits

0x7018,	// (0x0005b973) main_touch_calib_pane_t1_ParamLimits

0x7031,	// (0x0005b98c) main_touch_calib_pane_t2_ParamLimits

0x704a,	// (0x0005b9a5) main_touch_calib_pane_t3_ParamLimits

0x7060,	// (0x0005b9bb) main_touch_calib_pane_t4_ParamLimits

0x7076,	// (0x0005b9d1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000640b5) main_touch_calib_pane_t_ParamLimits

0xe738,	// (0x00063093) list_single_fp_cale_pane_g3_ParamLimits

0xe738,	// (0x00063093) list_single_fp_cale_pane_g3

0x6509,	// (0x0005ae64) bg_button_pane_cp012_ParamLimits

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp03_ParamLimits

0x8f61,	// (0x0005d8bc) cell_vitu2_function_top_pane_g1_ParamLimits

0x6509,	// (0x0005ae64) bg_vkb2_func_pane_cp04_ParamLimits

0x9f2b,	// (0x0005e886) main_ncimui_button_group_pane_ParamLimits

0x9f2b,	// (0x0005e886) main_ncimui_button_group_pane

0x9f91,	// (0x0005e8ec) main_ncimui_pane_t3_ParamLimits

0x9f91,	// (0x0005e8ec) main_ncimui_pane_t3

0x16ef,	// (0x0005604a) phacti_button_group_pane

0x18b2,	// (0x0005620d) aid_size_list_single_double_ParamLimits

0xb144,	// (0x0005fa9f) popup_ezdial_listscroll_window_ParamLimits

0xb165,	// (0x0005fac0) popup_number_entry_window_cp01_ParamLimits

0xb208,	// (0x0005fb63) phacti_button_pane_ParamLimits

0xb208,	// (0x0005fb63) phacti_button_pane

0x114c,	// (0x00055aa7) bg_button_pane_cp14

0x1937,	// (0x00056292) phacti_button_pane_t1

0xb219,	// (0x0005fb74) main_touch_calib_button_pane_ParamLimits

0xb219,	// (0x0005fb74) main_touch_calib_button_pane

0xbedb,	// (0x00060836) bg_button_pane_cp18_ParamLimits

0xbedb,	// (0x00060836) bg_button_pane_cp18

0x1945,	// (0x000562a0) main_touch_calib_button_pane_t1_ParamLimits

0x1945,	// (0x000562a0) main_touch_calib_button_pane_t1

0x195b,	// (0x000562b6) main_touch_calib_button_pane_t2_ParamLimits

0x195b,	// (0x000562b6) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000647a7) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000647a7) main_touch_calib_button_pane_t

0x114c,	// (0x00055aa7) cell_ncimui_button_pane

0x114c,	// (0x00055aa7) bg_button_pane_cp032

0x1979,	// (0x000562d4) cell_ncimui_button_pane_t1

0x819a,	// (0x0005caf5) image3_infobar_pane_ParamLimits

0x819a,	// (0x0005caf5) image3_infobar_pane

0xa34e,	// (0x0005eca9) fs_bigclock_status_pane_ParamLimits

0xa34e,	// (0x0005eca9) fs_bigclock_status_pane

0xa35b,	// (0x0005ecb6) main_fs_bigclock_clock_pane_ParamLimits

0xa35b,	// (0x0005ecb6) main_fs_bigclock_clock_pane

0xa36f,	// (0x0005ecca) main_fs_bigclock_indi_pane_ParamLimits

0xa36f,	// (0x0005ecca) main_fs_bigclock_indi_pane

0xa397,	// (0x0005ecf2) main_fs_bigclock_swipe_pane_ParamLimits

0xa397,	// (0x0005ecf2) main_fs_bigclock_swipe_pane

0x114c,	// (0x00055aa7) main_fs_clock_dumped_data

0x0f84,	// (0x000558df) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0f84,	// (0x000558df) list_single_fs_bigclock_indicator_pane_g1

0x0f9f,	// (0x000558fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0f9f,	// (0x000558fa) list_single_fs_bigclock_indicator_pane_g2

0x0fb9,	// (0x00055914) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0fb9,	// (0x00055914) list_single_fs_bigclock_indicator_pane_g3

0x0fd3,	// (0x0005592e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0fd3,	// (0x0005592e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000645cf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000645cf) list_single_fs_bigclock_indicator_pane_g

0x0ffe,	// (0x00055959) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0ffe,	// (0x00055959) list_single_fs_bigclock_indicator_pane_t1

0x1026,	// (0x00055981) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1026,	// (0x00055981) list_single_fs_bigclock_indicator_pane_t2

0x104e,	// (0x000559a9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x104e,	// (0x000559a9) list_single_fs_bigclock_indicator_pane_t3

0x1076,	// (0x000559d1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1076,	// (0x000559d1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000645da) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000645da) list_single_fs_bigclock_indicator_pane_t

0x1987,	// (0x000562e2) image3_infobar_fav_pane_ParamLimits

0x1987,	// (0x000562e2) image3_infobar_fav_pane

0x1997,	// (0x000562f2) image3_infobar_loc_pane_ParamLimits

0x1997,	// (0x000562f2) image3_infobar_loc_pane

0x19ab,	// (0x00056306) image3_infobar_time_pane_ParamLimits

0x19ab,	// (0x00056306) image3_infobar_time_pane

0xe36d,	// (0x00062cc8) image3_infobar_time_pane_g1

0x19bb,	// (0x00056316) image3_infobar_time_pane_t1

0xe36d,	// (0x00062cc8) image3_infobar_loc_pane_g1

0x19c9,	// (0x00056324) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000647ac) image3_infobar_loc_pane_g

0x19d1,	// (0x0005632c) image3_infobar_loc_pane_t1

0xe36d,	// (0x00062cc8) image3_infobar_fav_pane_g1

0x19df,	// (0x0005633a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000647b1) image3_infobar_fav_pane_g

0x19e7,	// (0x00056342) fs_bigclock_status_battery_pane

0x19f0,	// (0x0005634b) fs_bigclock_status_signal_pane

0x19f9,	// (0x00056354) fs_bigclock_status_title_pane

0x1a02,	// (0x0005635d) fs_bigclock_status_signal_pane_g1

0x1a0b,	// (0x00056366) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000647b6) fs_bigclock_status_signal_pane_g

0x1a13,	// (0x0005636e) fs_bigclock_status_battery_pane_g1

0x1a1c,	// (0x00056377) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000647bb) fs_bigclock_status_battery_pane_g

0x1a24,	// (0x0005637f) fs_bigclock_status_title_pane_t1

0xb229,	// (0x0005fb84) main_fs_bigclock_clock_pane_g1

0xb229,	// (0x0005fb84) main_fs_bigclock_clock_pane_g2

0xb236,	// (0x0005fb91) main_fs_bigclock_clock_pane_g3

0xb236,	// (0x0005fb91) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000647c0) main_fs_bigclock_clock_pane_g

0xb242,	// (0x0005fb9d) main_fs_bigclock_clock_pane_t1

0xb255,	// (0x0005fbb0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000647c9) main_fs_bigclock_clock_pane_t

0x1a32,	// (0x0005638d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1a32,	// (0x0005638d) list_single_fs_bigclock_indicator_pane

0x1a43,	// (0x0005639e) list_single_fs_bigclock_pane_ParamLimits

0x1a43,	// (0x0005639e) list_single_fs_bigclock_pane

0x1a69,	// (0x000563c4) main_fs_bigclock_indicator_pane_t1

0x1a78,	// (0x000563d3) list_single_fs_bigclock_pane_g1

0x1a80,	// (0x000563db) list_single_fs_bigclock_pane_t1

0xe36d,	// (0x00062cc8) main_fs_bigclock_swipe_pane_g1

0x1ac3,	// (0x0005641e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000647da) main_fs_bigclock_swipe_pane_g

0x1acb,	// (0x00056426) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1acb,	// (0x00056426) main_fs_bigclock_swipe_pane_t1

0x54f7,	// (0x00059e52) call_type_pane_ParamLimits

0x114c,	// (0x00055aa7) main_btmg_pane

0x037a,	// (0x00054cd5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x037a,	// (0x00054cd5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0006474d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0006474d) list_single_cale_mrui_row_pane_g

0x0400,	// (0x00054d5b) list_recal_vselct_arw_lo_pane

0x1902,	// (0x0005625d) list_recal_vselct_arw_up_pane

0x0408,	// (0x00054d63) list_recal_vselct_pane

0xb2ac,	// (0x0005fc07) btmg_button_pane

0xb2b8,	// (0x0005fc13) main_btmg_pane_g1

0x114c,	// (0x00055aa7) bg_button_pane_cp044

0x1ae8,	// (0x00056443) btmg_button_pane_t1

0xdf48,	// (0x000628a3) aid_listscroll_gen

0xd9f7,	// (0x00062352) main_cntbar_detail_pane

0x163b,	// (0x00055f96) list_cmail_folder_pane

0xdee3,	// (0x0006283e) sp_fs_scroll_pane_cp03_ParamLimits

0xb2c0,	// (0x0005fc1b) list_single_fs_dyc_pane_cp01_ParamLimits

0xb2c0,	// (0x0005fc1b) list_single_fs_dyc_pane_cp01

0x1af6,	// (0x00056451) aid_size_cmail_indent

0x047f,	// (0x00054dda) list_single_dyc_row_pane_cp01

0xb30c,	// (0x0005fc67) cntbar_detail_list_pane_ParamLimits

0xb30c,	// (0x0005fc67) cntbar_detail_list_pane

0xb346,	// (0x0005fca1) main_cntbar_detail_cont_pane_ParamLimits

0xb346,	// (0x0005fca1) main_cntbar_detail_cont_pane

0x541c,	// (0x00059d77) scroll_pane_cp032_ParamLimits

0x541c,	// (0x00059d77) scroll_pane_cp032

0xb352,	// (0x0005fcad) cntbar_detail_list_event_pane_ParamLimits

0xb352,	// (0x0005fcad) cntbar_detail_list_event_pane

0xb318,	// (0x0005fc73) cntbar_detail_list_shct_pane

0xc347,	// (0x00060ca2) aid_list_gen

0x1aff,	// (0x0005645a) aid_scroll

0x1b08,	// (0x00056463) aid_size_touch_scroll_bar

0x96ae,	// (0x0005e009) aid_list_double

0xb366,	// (0x0005fcc1) aid_list_single

0x969c,	// (0x0005dff7) aid_list_single_lg

0xb36f,	// (0x0005fcca) aid_list_z_g_a_sm

0xb377,	// (0x0005fcd2) aid_list_z_g_d

0xb37f,	// (0x0005fcda) aid_txt_z_prm

0xb38d,	// (0x0005fce8) aid_txt_z_prm_cp01

0xb39b,	// (0x0005fcf6) aid_txt_z_sec

0xb3a9,	// (0x0005fd04) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb3a9,	// (0x0005fd04) main_cntbar_detail_cont_pane_g1

0xb3b6,	// (0x0005fd11) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb3b6,	// (0x0005fd11) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000647df) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000647df) main_cntbar_detail_cont_pane_g

0x1b11,	// (0x0005646c) main_cntbar_detail_cont_pane_t1

0x1b1f,	// (0x0005647a) main_cntbar_detail_cont_pane_t2

0x1b2d,	// (0x00056488) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000647e4) main_cntbar_detail_cont_pane_t

0xb3c2,	// (0x0005fd1d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb3c2,	// (0x0005fd1d) cell_cntbar_detail_list_shct_pane

0x1b3b,	// (0x00056496) cntbar_detail_list_shct_pane_g1

0x1b44,	// (0x0005649f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000647eb) cntbar_detail_list_shct_pane_g

0xb3d6,	// (0x0005fd31) cntbar_detail_list_event_pane_g1_ParamLimits

0xb3d6,	// (0x0005fd31) cntbar_detail_list_event_pane_g1

0xb3e2,	// (0x0005fd3d) cntbar_detail_list_event_pane_g2_ParamLimits

0xb3e2,	// (0x0005fd3d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000647f0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000647f0) cntbar_detail_list_event_pane_g

0xb44e,	// (0x0005fda9) cntbar_detail_list_event_pane_t1_ParamLimits

0xb44e,	// (0x0005fda9) cntbar_detail_list_event_pane_t1

0xb463,	// (0x0005fdbe) cntbar_detail_list_event_pane_t2_ParamLimits

0xb463,	// (0x0005fdbe) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000647fd) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000647fd) cntbar_detail_list_event_pane_t

0xe36d,	// (0x00062cc8) cell_cntbar_detail_list_shct_pane_g1

0xcac0,	// (0x0006141b) navi_pane_mv_g3

0xd9f7,	// (0x00062352) main_cntbar_detail_pane_ParamLimits

0x114c,	// (0x00055aa7) main_notif_wgt_pane

0x7e4e,	// (0x0005c7a9) aid_tch_main_mp4_pane_g4

0x8083,	// (0x0005c9de) popup_slider_window_cp02

0x03f6,	// (0x00054d51) list_recal_day_event_pane

0xb2ec,	// (0x0005fc47) cntbar_detail_btn_pane_ParamLimits

0xb2ec,	// (0x0005fc47) cntbar_detail_btn_pane

0xb2fc,	// (0x0005fc57) cntbar_detail_btn_pane_cp01_ParamLimits

0xb2fc,	// (0x0005fc57) cntbar_detail_btn_pane_cp01

0xb318,	// (0x0005fc73) cntbar_detail_list_shct_pane_ParamLimits

0xb324,	// (0x0005fc7f) cntbar_detail_pane_g1_ParamLimits

0xb324,	// (0x0005fc7f) cntbar_detail_pane_g1

0xb330,	// (0x0005fc8b) cntbar_detail_pane_t1_ParamLimits

0xb330,	// (0x0005fc8b) cntbar_detail_pane_t1

0xb3ee,	// (0x0005fd49) cntbar_detail_list_event_pane_g3_ParamLimits

0xb3ee,	// (0x0005fd49) cntbar_detail_list_event_pane_g3

0xb406,	// (0x0005fd61) cntbar_detail_list_event_pane_g4_ParamLimits

0xb406,	// (0x0005fd61) cntbar_detail_list_event_pane_g4

0xb41e,	// (0x0005fd79) cntbar_detail_list_event_pane_g5_ParamLimits

0xb41e,	// (0x0005fd79) cntbar_detail_list_event_pane_g5

0xb436,	// (0x0005fd91) cntbar_detail_list_event_pane_g6_ParamLimits

0xb436,	// (0x0005fd91) cntbar_detail_list_event_pane_g6

0xb478,	// (0x0005fdd3) cntbar_detail_list_event_pane_t3_ParamLimits

0xb478,	// (0x0005fdd3) cntbar_detail_list_event_pane_t3

0xb48a,	// (0x0005fde5) popup_notif_wgt_window_ParamLimits

0xb48a,	// (0x0005fde5) popup_notif_wgt_window

0xb49a,	// (0x0005fdf5) popup_submenu_window_cp01_ParamLimits

0xb49a,	// (0x0005fdf5) popup_submenu_window_cp01

0xc0a0,	// (0x000609fb) bg_popup_window_pane_cp10

0x1b4d,	// (0x000564a8) listscroll_notif_wgt_pane

0x1b5f,	// (0x000564ba) list_notif_wgt_window

0x1b68,	// (0x000564c3) scroll_pane_cp033

0xb4ac,	// (0x0005fe07) list_notif_wgt_row_pane_ParamLimits

0xb4ac,	// (0x0005fe07) list_notif_wgt_row_pane

0x1b71,	// (0x000564cc) aid_size_list_notif_wgt_del

0x1b7e,	// (0x000564d9) list_notif_wgt_row_pane_g1

0x1b8a,	// (0x000564e5) list_notif_wgt_row_pane_g2

0x1b99,	// (0x000564f4) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00064804) list_notif_wgt_row_pane_g

0x1ba6,	// (0x00056501) list_notif_wgt_row_pane_t1

0x1bbc,	// (0x00056517) list_notif_wgt_row_pane_t2

0x1bce,	// (0x00056529) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0006480b) list_notif_wgt_row_pane_t

0x04b0,	// (0x00054e0b) list_recal_day_event_pane_g1

0x1be0,	// (0x0005653b) list_recal_day_event_pane_t1

0x114c,	// (0x00055aa7) bg_button_pane_cp045

0xb4be,	// (0x0005fe19) cntbar_detail_btn_pane_t1

0xdf5c,	// (0x000628b7) main_callh_pane_ParamLimits

0xdf5c,	// (0x000628b7) main_callh_pane

0x114c,	// (0x00055aa7) main_coverflow0_pane

0x114c,	// (0x00055aa7) main_wgtman_pane

0xa3af,	// (0x0005ed0a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa3af,	// (0x0005ed0a) main_fs_bigclock_unlock_btn_pane

0xaced,	// (0x0005f648) bg_button_pane_cp16

0xacfd,	// (0x0005f658) cell_tport_appsw_pane_g3

0xb4cc,	// (0x0005fe27) cf0_flow_pane_ParamLimits

0xb4cc,	// (0x0005fe27) cf0_flow_pane

0x1bef,	// (0x0005654a) listscroll_cf0_pane

0x1bfa,	// (0x00056555) main_cf0_pane_g1

0xb4db,	// (0x0005fe36) main_cf0_pane_t1_ParamLimits

0xb4db,	// (0x0005fe36) main_cf0_pane_t1

0xb4ef,	// (0x0005fe4a) main_cf0_pane_t2_ParamLimits

0xb4ef,	// (0x0005fe4a) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00064817) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00064817) main_cf0_pane_t

0x1c0c,	// (0x00056567) scroll_pane_cp11

0xb503,	// (0x0005fe5e) cf0_flow_pane_g1

0xb50b,	// (0x0005fe66) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0006481c) cf0_flow_pane_g

0xb513,	// (0x0005fe6e) cf0_flow_pane_t1

0x114c,	// (0x00055aa7) main_call6_pane

0x114c,	// (0x00055aa7) main_calllock_pane

0xb521,	// (0x0005fe7c) call6_btn_grp_pane_ParamLimits

0xb521,	// (0x0005fe7c) call6_btn_grp_pane

0xb530,	// (0x0005fe8b) call6_pane_g1_ParamLimits

0xb530,	// (0x0005fe8b) call6_pane_g1

0xb53f,	// (0x0005fe9a) popup_call6_1st_window_ParamLimits

0xb53f,	// (0x0005fe9a) popup_call6_1st_window

0xb54d,	// (0x0005fea8) popup_call6_2nd_window_ParamLimits

0xb54d,	// (0x0005fea8) popup_call6_2nd_window

0xb55b,	// (0x0005feb6) cell_call6_btn_pane_ParamLimits

0xb55b,	// (0x0005feb6) cell_call6_btn_pane

0xc0a0,	// (0x000609fb) bg_popup_call2_in_pane_cp03

0x1c17,	// (0x00056572) popup_call6_1st_window_g1

0x1c1f,	// (0x0005657a) popup_call6_1st_window_g2

0x1c27,	// (0x00056582) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00064821) popup_call6_1st_window_g

0x1c2f,	// (0x0005658a) popup_call6_1st_window_t1

0x1c3e,	// (0x00056599) popup_call6_1st_window_t2

0x1c4e,	// (0x000565a9) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00064828) popup_call6_1st_window_t

0xc0a0,	// (0x000609fb) bg_popup_call2_in_pane_cp04

0x1c17,	// (0x00056572) popup_call6_2nd_window_g1

0x1c1f,	// (0x0005657a) popup_call6_2nd_window_g2

0x1c27,	// (0x00056582) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00064821) popup_call6_2nd_window_g

0x1c2f,	// (0x0005658a) popup_call6_2nd_window_t1

0x114c,	// (0x00055aa7) bg_button_pane_cp15

0x1c5e,	// (0x000565b9) cell_call6_btn_pane_g1

0x1c67,	// (0x000565c2) cell_call6_btn_pane_t1

0xb56a,	// (0x0005fec5) listscroll_wgtman_pane_ParamLimits

0xb56a,	// (0x0005fec5) listscroll_wgtman_pane

0xb586,	// (0x0005fee1) wgtman_btn_pane_ParamLimits

0xb586,	// (0x0005fee1) wgtman_btn_pane

0xc8c7,	// (0x00061222) aid_scroll_copy1

0x1c76,	// (0x000565d1) list_wgtman_pane

0xb5bb,	// (0x0005ff16) wgtman_btn_pane_g1_ParamLimits

0xb5bb,	// (0x0005ff16) wgtman_btn_pane_g1

0xb5e3,	// (0x0005ff3e) wgtman_btn_pane_t1_ParamLimits

0xb5e3,	// (0x0005ff3e) wgtman_btn_pane_t1

0x1c80,	// (0x000565db) wgtman_btn_pane_t2_ParamLimits

0x1c80,	// (0x000565db) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0006482f) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0006482f) wgtman_btn_pane_t

0xb61a,	// (0x0005ff75) listrow_wgtman_pane_ParamLimits

0xb61a,	// (0x0005ff75) listrow_wgtman_pane

0xb635,	// (0x0005ff90) listrow_wgtman_pane_g1

0xb642,	// (0x0005ff9d) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00064834) listrow_wgtman_pane_g

0xb660,	// (0x0005ffbb) listrow_wgtman_pane_t1

0xb678,	// (0x0005ffd3) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00064839) listrow_wgtman_pane_t

0xb69e,	// (0x0005fff9) wait_bar_pane_cp09

0x1c97,	// (0x000565f2) main_calllock_btn_pane

0x1ca1,	// (0x000565fc) main_calllock_pane_g1

0x114c,	// (0x00055aa7) bg_button_pane_cp17

0x1cad,	// (0x00056608) main_calllock_btn_pane_g1

0x1cb6,	// (0x00056611) main_calllock_btn_pane_t1

0x114c,	// (0x00055aa7) main_dialer3_pane

0x114c,	// (0x00055aa7) main_fmrd2_pane

0xe36d,	// (0x00062cc8) main_fs_bigclock_unlock_btn_pane_g1

0xb6b8,	// (0x00060013) main_fs_bigclock_unlock_btn_pane_t1

0xb6c6,	// (0x00060021) area_fmrd2_info_pane_ParamLimits

0xb6c6,	// (0x00060021) area_fmrd2_info_pane

0xb6d4,	// (0x0006002f) area_fmrd2_visual_pane_ParamLimits

0xb6d4,	// (0x0006002f) area_fmrd2_visual_pane

0xb6e2,	// (0x0006003d) fmrd2_indi_pane_ParamLimits

0xb6e2,	// (0x0006003d) fmrd2_indi_pane

0xb6ef,	// (0x0006004a) area_fmrd2_visual_pane_g1

0xb6f7,	// (0x00060052) area_fmrd2_visual_pane_t1

0xb707,	// (0x00060062) area_fmrd2_visual_pane_t2

0xb717,	// (0x00060072) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00064843) area_fmrd2_visual_pane_t

0xb727,	// (0x00060082) area_fmrd2_info_pane_g1

0xb72f,	// (0x0006008a) area_fmrd2_info_pane_t1

0xb73f,	// (0x0006009a) area_fmrd2_info_pane_t2

0xb74f,	// (0x000600aa) area_fmrd2_info_pane_t3

0xb75f,	// (0x000600ba) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0006484a) area_fmrd2_info_pane_t

0xb76d,	// (0x000600c8) fmrd2_indi_pane_t1

0xb77d,	// (0x000600d8) fmrd2_indi_pane_t2

0xb78d,	// (0x000600e8) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00064853) fmrd2_indi_pane_t

0x0fe2,	// (0x0005593d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0fe2,	// (0x0005593d) list_single_fs_bigclock_indicator_pane_g5

0x1093,	// (0x000559ee) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1093,	// (0x000559ee) list_single_fs_bigclock_indicator_pane_t5

0xae98,	// (0x0005f7f3) aid_cell_bcale_month_pane_ParamLimits

0xae98,	// (0x0005f7f3) aid_cell_bcale_month_pane

0xaeb6,	// (0x0005f811) bcale_month_pane_ParamLimits

0xaeb6,	// (0x0005f811) bcale_month_pane

0xaed4,	// (0x0005f82f) bcale_preview_pane_ParamLimits

0xaed4,	// (0x0005f82f) bcale_preview_pane

0x1a80,	// (0x000563db) list_single_fs_bigclock_pane_t1_ParamLimits

0x1a9f,	// (0x000563fa) list_single_fs_bigclock_pane_t2_ParamLimits

0x1a9f,	// (0x000563fa) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000647d5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000647d5) list_single_fs_bigclock_pane_t

0xb6b0,	// (0x0006000b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0006483e) main_fs_bigclock_unlock_btn_pane_g

0xb79b,	// (0x000600f6) aid_dia3_key_size_ParamLimits

0xb79b,	// (0x000600f6) aid_dia3_key_size

0xb7a7,	// (0x00060102) aid_dia3_listrow_size_ParamLimits

0xb7a7,	// (0x00060102) aid_dia3_listrow_size

0xb7b7,	// (0x00060112) dia3_keypad_fun_pane_ParamLimits

0xb7b7,	// (0x00060112) dia3_keypad_fun_pane

0xb7c9,	// (0x00060124) dia3_keypad_num_pane_ParamLimits

0xb7c9,	// (0x00060124) dia3_keypad_num_pane

0xb7db,	// (0x00060136) dia3_listscroll_pane_ParamLimits

0xb7db,	// (0x00060136) dia3_listscroll_pane

0xb7e9,	// (0x00060144) dia3_numentry_pane_ParamLimits

0xb7e9,	// (0x00060144) dia3_numentry_pane

0x1cc5,	// (0x00056620) dia3_list_pane

0x1cd0,	// (0x0005662b) scroll_pane_cp12

0x114c,	// (0x00055aa7) bg_dia3_numentry_pane

0xb7f7,	// (0x00060152) dia3_numentry_pane_t1

0xb806,	// (0x00060161) cell_dia3_key_num_pane

0xb80e,	// (0x00060169) cell_dia3_key0_fun_pane_ParamLimits

0xb80e,	// (0x00060169) cell_dia3_key0_fun_pane

0xb81b,	// (0x00060176) cell_dia3_key1_fun_pane_ParamLimits

0xb81b,	// (0x00060176) cell_dia3_key1_fun_pane

0xb828,	// (0x00060183) dia3_listrow_pane

0x0d27,	// (0x00055682) bg_dia3_numentry_pane_g1

0x114c,	// (0x00055aa7) bg_button_pane_cp21

0x1cdb,	// (0x00056636) cell_dia3_key_num_pane_t1

0x1ce9,	// (0x00056644) cell_dia3_key_num_pane_t2

0x1cf8,	// (0x00056653) cell_dia3_key_num_pane_t3

0x1d07,	// (0x00056662) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0006485a) cell_dia3_key_num_pane_t

0x114c,	// (0x00055aa7) bg_button_pane_cp19

0xb835,	// (0x00060190) cell_dia3_key0_fun_pane_g1

0x114c,	// (0x00055aa7) bg_button_pane_cp20

0xb83d,	// (0x00060198) cell_dia3_key1_fun_pane_g1

0xb845,	// (0x000601a0) area_left_week_number_pane

0xb858,	// (0x000601b3) area_top_day_name_pane

0xb866,	// (0x000601c1) frame_month_view_pane

0x1d16,	// (0x00056671) grid_month_view_pane

0xb87b,	// (0x000601d6) cell_top_day_name_pane_ParamLimits

0xb87b,	// (0x000601d6) cell_top_day_name_pane

0xb895,	// (0x000601f0) cell_area_left_week_number_pane_ParamLimits

0xb895,	// (0x000601f0) cell_area_left_week_number_pane

0xb8b8,	// (0x00060213) cell_month_view_pane_ParamLimits

0xb8b8,	// (0x00060213) cell_month_view_pane

0x1d24,	// (0x0005667f) frm_month_g1

0xb8e4,	// (0x0006023f) frm_month_g2

0xb8f5,	// (0x00060250) frm_month_g3

0xb906,	// (0x00060261) frm_month_g4

0xb917,	// (0x00060272) frm_month_g5

0xb92a,	// (0x00060285) frm_month_g6

0xb93d,	// (0x00060298) frm_month_g7

0x1d31,	// (0x0005668c) frm_month_g8

0xb950,	// (0x000602ab) frm_month_g9

0xb95d,	// (0x000602b8) frm_month_g10

0xb96a,	// (0x000602c5) frm_month_g11

0xb977,	// (0x000602d2) frm_month_g12

0xb984,	// (0x000602df) frm_month_g13

0xb991,	// (0x000602ec) frm_month_g14

0xb9a0,	// (0x000602fb) frm_month_g15

0xb9af,	// (0x0006030a) frm_month_g16

0x000f,

0xff08,	// (0x00064863) frm_month_g

0x1d3e,	// (0x00056699) cell_top_day_name_pane_t1

0xb9be,	// (0x00060319) cell_area_left_week_number_pane_g1

0xb9cd,	// (0x00060328) cell_area_left_week_number_pane_t1

0xe5d0,	// (0x00062f2b) cell_month_view_pane_g1

0xb9e3,	// (0x0006033e) cell_month_view_pane_t1

0x114c,	// (0x00055aa7) main_fps_pane

0x1553,	// (0x00055eae) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1553,	// (0x00055eae) cmail_ddmenu_btn02_pane_cp1

0x156f,	// (0x00055eca) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x156f,	// (0x00055eca) cmail_ddmenu_btn02_pane_cp2

0xb18f,	// (0x0005faea) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb18f,	// (0x0005faea) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00064788) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00064788) cmail_ddmenu_btn02_pane_g

0xb1ae,	// (0x0005fb09) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb1ae,	// (0x0005fb09) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0006478d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0006478d) cmail_ddmenu_btn02_pane_t

0xb9f9,	// (0x00060354) fps_text_pane_ParamLimits

0xb9f9,	// (0x00060354) fps_text_pane

0xba06,	// (0x00060361) main_fps_pane_g1_ParamLimits

0xba06,	// (0x00060361) main_fps_pane_g1

0xba14,	// (0x0006036f) wait_bar_pane_cp010_ParamLimits

0xba14,	// (0x0006036f) wait_bar_pane_cp010

0xba20,	// (0x0006037b) fps_text_pane_t1_ParamLimits

0xba20,	// (0x0006037b) fps_text_pane_t1

0x8473,	// (0x0005cdce) cam4_image_uncrop_pane_g1

0x847c,	// (0x0005cdd7) cam4_image_uncrop_pane_g2

0x8485,	// (0x0005cde0) cam4_image_uncrop_pane_g3

0x848e,	// (0x0005cde9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00064249) cam4_image_uncrop_pane_g

0xb828,	// (0x00060183) dia3_listrow_pane_ParamLimits

0x114c,	// (0x00055aa7) main_phob2_pane

0xaccf,	// (0x0005f62a) cell_tport_appsw_pane_cp02_ParamLimits

0xaccf,	// (0x0005f62a) cell_tport_appsw_pane_cp02

0xacde,	// (0x0005f639) cell_tport_appsw_pane_cp03_ParamLimits

0xacde,	// (0x0005f639) cell_tport_appsw_pane_cp03

0x114c,	// (0x00055aa7) phob2_contact_card_pane

0x114c,	// (0x00055aa7) phob2_listscroll_pane

0x1d51,	// (0x000566ac) phob2_list_pane

0x1d59,	// (0x000566b4) scroll_pane_cp034

0xba39,	// (0x00060394) phob2_cc_data_pane_ParamLimits

0xba39,	// (0x00060394) phob2_cc_data_pane

0xba53,	// (0x000603ae) phob2_cc_listscroll_pane_ParamLimits

0xba53,	// (0x000603ae) phob2_cc_listscroll_pane

0xb61a,	// (0x0005ff75) list_double_large_graphic_phob2_pane_ParamLimits

0xb61a,	// (0x0005ff75) list_double_large_graphic_phob2_pane

0xba6d,	// (0x000603c8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xba6d,	// (0x000603c8) list_double_large_graphic_phob2_pane_g1

0xba83,	// (0x000603de) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xba83,	// (0x000603de) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00064884) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00064884) list_double_large_graphic_phob2_pane_g

0xba8f,	// (0x000603ea) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xba8f,	// (0x000603ea) list_double_large_graphic_phob2_pane_t1

0xbaa4,	// (0x000603ff) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbaa4,	// (0x000603ff) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00064889) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00064889) list_double_large_graphic_phob2_pane_t

0x114c,	// (0x00055aa7) list_highlight_pane_cp024

0xbab6,	// (0x00060411) phob2_cc_button_pane

0xbabe,	// (0x00060419) phob2_cc_data_pane_g1_ParamLimits

0xbabe,	// (0x00060419) phob2_cc_data_pane_g1

0xbaca,	// (0x00060425) phob2_cc_data_pane_g2_ParamLimits

0xbaca,	// (0x00060425) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0006488e) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0006488e) phob2_cc_data_pane_g

0xbad6,	// (0x00060431) phob2_cc_data_pane_t1_ParamLimits

0xbad6,	// (0x00060431) phob2_cc_data_pane_t1

0xbae8,	// (0x00060443) phob2_cc_data_pane_t2_ParamLimits

0xbae8,	// (0x00060443) phob2_cc_data_pane_t2

0xbafa,	// (0x00060455) phob2_cc_data_pane_t3_ParamLimits

0xbafa,	// (0x00060455) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00064893) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00064893) phob2_cc_data_pane_t

0x1d61,	// (0x000566bc) phob2_cc_list_pane_ParamLimits

0x1d61,	// (0x000566bc) phob2_cc_list_pane

0x0559,	// (0x00054eb4) scroll_pane_cp035_ParamLimits

0x0559,	// (0x00054eb4) scroll_pane_cp035

0xd9f7,	// (0x00062352) bg_button_pane_cp033

0x1d6d,	// (0x000566c8) phob2_cc_button_pane_g1

0x1d79,	// (0x000566d4) phob2_cc_button_pane_t1

0x1d8e,	// (0x000566e9) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0006489a) phob2_cc_button_pane_t

0xbb0c,	// (0x00060467) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb0c,	// (0x00060467) list_double_large_graphic_phob2_cc_pane

0xbb33,	// (0x0006048e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb33,	// (0x0006048e) list_double_large_graphic_phob2_cc_pane_g1

0x0488,	// (0x00054de3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0488,	// (0x00054de3) list_double_large_graphic_phob2_cc_pane_g2

0xbb44,	// (0x0006049f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbb44,	// (0x0006049f) list_double_large_graphic_phob2_cc_pane_g3

0xbb50,	// (0x000604ab) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbb50,	// (0x000604ab) list_double_large_graphic_phob2_cc_pane_g4

0xbb5c,	// (0x000604b7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbb5c,	// (0x000604b7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0006489f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0006489f) list_double_large_graphic_phob2_cc_pane_g

0xbb68,	// (0x000604c3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbb68,	// (0x000604c3) list_double_large_graphic_phob2_cc_pane_t1

0xbb91,	// (0x000604ec) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbb91,	// (0x000604ec) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000648aa) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000648aa) list_double_large_graphic_phob2_cc_pane_t

0x1da0,	// (0x000566fb) list_highlight_pane_cp025_ParamLimits

0x1da0,	// (0x000566fb) list_highlight_pane_cp025

0xd9f7,	// (0x00062352) bg_button_pane_cp033_ParamLimits

0x1d6d,	// (0x000566c8) phob2_cc_button_pane_g1_ParamLimits

0x1d79,	// (0x000566d4) phob2_cc_button_pane_t1_ParamLimits

0x1d8e,	// (0x000566e9) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0006489a) phob2_cc_button_pane_t_ParamLimits

0x330f,	// (0x00057c6a) popup_wgtman_window

0xef6d,	// (0x000638c8) scroll_pane_cp038

0xb5a3,	// (0x0005fefe) wgtman_btn_pane_cp_01_ParamLimits

0xb5a3,	// (0x0005fefe) wgtman_btn_pane_cp_01

0x1dae,	// (0x00056709) wgtman_content_pane

0x1db7,	// (0x00056712) wgtman_heading_pane

0x114c,	// (0x00055aa7) bg_heading_pane_cp02

0x203b,	// (0x00056996) wgtman_heading_pane_g1

0x2043,	// (0x0005699e) wgtman_heading_pane_t1

0x2051,	// (0x000569ac) scroll_pane_cp036

0x2059,	// (0x000569b4) wgtman_list_pane

0x2061,	// (0x000569bc) wgtman_list_pane_t1_ParamLimits

0x2061,	// (0x000569bc) wgtman_list_pane_t1

0x83d2,	// (0x0005cd2d) cam4_grid_pane

0x915c,	// (0x0005dab7) bg_button_pane_cp015_ParamLimits

0x916e,	// (0x0005dac9) bg_button_pane_cp016_ParamLimits

0x9181,	// (0x0005dadc) bg_button_pane_cp017_ParamLimits

0x91d7,	// (0x0005db32) popup_vitu2_query_window_g3_ParamLimits

0x91d7,	// (0x0005db32) popup_vitu2_query_window_g3

0x9292,	// (0x0005dbed) popup_vitu2_query_window_t6_ParamLimits

0x9292,	// (0x0005dbed) popup_vitu2_query_window_t6

0x92bd,	// (0x0005dc18) popup_vitu2_query_window_t7_ParamLimits

0x92bd,	// (0x0005dc18) popup_vitu2_query_window_t7

0x1402,	// (0x00055d5d) cam4_grid_pane_g1

0x140b,	// (0x00055d66) cam4_grid_pane_g2

0x207b,	// (0x000569d6) cam4_grid_pane_g3

0x2084,	// (0x000569df) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000648af) cam4_grid_pane_g

0x41ad,	// (0x00058b08) aid_placing_vt_slider_lsc_ParamLimits

0x44f9,	// (0x00058e54) vidtel_button_pane_ParamLimits

0x44f9,	// (0x00058e54) vidtel_button_pane

0x114c,	// (0x00055aa7) bg_button_pane_cp034

0xbbba,	// (0x00060515) vidtel_button_pane_g1

0x208f,	// (0x000569ea) vidtel_button_pane_t1

0xf0ba,	// (0x00063a15) aid_size_vtel_slider_touch

0x0559,	// (0x00054eb4) scroll_pane_cp039

0xa0ec,	// (0x0005ea47) ncim_query_button_pane_cp01_ParamLimits

0xa10b,	// (0x0005ea66) ncimui_query_pane_g1_ParamLimits

0xd9f7,	// (0x00062352) input_focus_pane_cp012_ParamLimits

0x0d65,	// (0x000556c0) ncim_query_entry_pane_t1_ParamLimits

0x0559,	// (0x00054eb4) scroll_pane_cp039_ParamLimits

0xc9ab,	// (0x00061306) navi_pane_bcale_mc_g1

0xc9b3,	// (0x0006130e) navi_pane_bcale_mc_t1

0x15b8,	// (0x00055f13) main_sp_fs_email_pane_g1

0x15c4,	// (0x00055f1f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00064640) main_sp_fs_email_pane_g

0x180c,	// (0x00056167) list_single_cale_mrui_row_pane_g3_ParamLimits

0x180c,	// (0x00056167) list_single_cale_mrui_row_pane_g3

0xb1ce,	// (0x0005fb29) list_single_recal_day_pane_g5_event_pane

0x0453,	// (0x00054dae) list_single_recal_day_pane_g7

0x20a5,	// (0x00056a00) list_recal_day_event_pane_cp01

0x20ae,	// (0x00056a09) list_recal_vselct_arw_lo_pane_cp01

0x20b6,	// (0x00056a11) list_recal_vselct_arw_up_pane_cp01

0x20be,	// (0x00056a19) list_recal_vselct_pane_cp01

0x04b0,	// (0x00054e0b) list_recal_day_event_pane_cp01_g1

0x0494,	// (0x00054def) list_recal_day_event_pane_cp01_t1

0x045b,	// (0x00054db6) list_single_recal_day_pane_t1_ParamLimits

0x046d,	// (0x00054dc8) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0006479d) list_single_recal_day_pane_t_ParamLimits

0xbe16,	// (0x00060771) bg_notes_pane_ParamLimits

0xbeb9,	// (0x00060814) list_notes_pane_ParamLimits

0x3677,	// (0x00057fd2) scroll_pane_cp06_ParamLimits

0xbedb,	// (0x00060836) main_notes_pane_ParamLimits

0x114c,	// (0x00055aa7) main_welc_pane

0xbbc2,	// (0x0006051d) main_welc_body_pane_ParamLimits

0xbbc2,	// (0x0006051d) main_welc_body_pane

0xbbdc,	// (0x00060537) main_welc_opti_pane_ParamLimits

0xbbdc,	// (0x00060537) main_welc_opti_pane

0xbc0f,	// (0x0006056a) main_welc_pane_t1_ParamLimits

0xbc0f,	// (0x0006056a) main_welc_pane_t1

0xbc29,	// (0x00060584) main_welc_body_row_pane_ParamLimits

0xbc29,	// (0x00060584) main_welc_body_row_pane

0x04a2,	// (0x00054dfd) main_welc_opti_row_pane_ParamLimits

0x04a2,	// (0x00054dfd) main_welc_opti_row_pane

0x20c8,	// (0x00056a23) main_welc_opti_row_pane_g1

0xbc4e,	// (0x000605a9) main_welc_opti_row_pane_t1

0x20d0,	// (0x00056a2b) main_welc_body_row_pane_t1

0x1b57,	// (0x000564b2) popup_notif_wgt_heading_pane

0x1b71,	// (0x000564cc) aid_size_list_notif_wgt_del_ParamLimits

0x1b7e,	// (0x000564d9) list_notif_wgt_row_pane_g1_ParamLimits

0x1b8a,	// (0x000564e5) list_notif_wgt_row_pane_g2_ParamLimits

0x1b99,	// (0x000564f4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00064804) list_notif_wgt_row_pane_g_ParamLimits

0x1ba6,	// (0x00056501) list_notif_wgt_row_pane_t1_ParamLimits

0x1bbc,	// (0x00056517) list_notif_wgt_row_pane_t2_ParamLimits

0x1bce,	// (0x00056529) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0006480b) list_notif_wgt_row_pane_t_ParamLimits

0xb635,	// (0x0005ff90) listrow_wgtman_pane_g1_ParamLimits

0xb642,	// (0x0005ff9d) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00064834) listrow_wgtman_pane_g_ParamLimits

0xb660,	// (0x0005ffbb) listrow_wgtman_pane_t1_ParamLimits

0xb678,	// (0x0005ffd3) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00064839) listrow_wgtman_pane_t_ParamLimits

0xb69e,	// (0x0005fff9) wait_bar_pane_cp09_ParamLimits

0x114c,	// (0x00055aa7) bg_popup_heading_pane_cp02

0x20df,	// (0x00056a3a) popup_notif_wgt_heading_pane_g1

0x20e7,	// (0x00056a42) popup_notif_wgt_heading_pane_t1

0x114c,	// (0x00055aa7) main_vids_pane

0x114c,	// (0x00055aa7) vids_listscroll_pane

0xbc5d,	// (0x000605b8) scroll_pane_cp040

0x114c,	// (0x00055aa7) vids_list_pane

0xbc68,	// (0x000605c3) vids_list_double_pane_ParamLimits

0xbc68,	// (0x000605c3) vids_list_double_pane

0xbc82,	// (0x000605dd) vids_list_double_pane_g1

0xbc8b,	// (0x000605e6) vids_list_double_pane_t1

0xbc9b,	// (0x000605f6) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000648bd) vids_list_double_pane_t

0x6509,	// (0x0005ae64) main_ncimui_pane_ParamLimits

0x9f43,	// (0x0005e89e) main_ncimui_pane_g1_ParamLimits

0x9f4f,	// (0x0005e8aa) main_ncimui_pane_g2_ParamLimits

0x9f4f,	// (0x0005e8aa) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00064545) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00064545) main_ncimui_pane_g

0xbbf5,	// (0x00060550) main_welc_pane_g1_ParamLimits

0xbbf5,	// (0x00060550) main_welc_pane_g1

0xbc01,	// (0x0006055c) main_welc_pane_g2_ParamLimits

0xbc01,	// (0x0006055c) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000648b8) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000648b8) main_welc_pane_g

0xbe16,	// (0x00060771) listscroll_mce_pane_ParamLimits

0xcb00,	// (0x0006145b) wait_bar_pane_cp10

0xdf50,	// (0x000628ab) main_cale_day_pane_ParamLimits

0xdf50,	// (0x000628ab) main_cale_week_pane_ParamLimits

0xbe16,	// (0x00060771) main_messa_pane_ParamLimits

0x7825,	// (0x0005c180) main_clock2_btn_pane_ParamLimits

0x7825,	// (0x0005c180) main_clock2_btn_pane

0xe7c0,	// (0x0006311b) main_clock2_btn_pane_cp01_ParamLimits

0xe7c0,	// (0x0006311b) main_clock2_btn_pane_cp01

0x17dd,	// (0x00056138) list_cale_mrui_pane_ParamLimits

0x1c04,	// (0x0005655f) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00064812) main_cf0_pane_g

0xb845,	// (0x000601a0) area_left_week_number_pane_ParamLimits

0xb858,	// (0x000601b3) area_top_day_name_pane_ParamLimits

0xb866,	// (0x000601c1) frame_month_view_pane_ParamLimits

0x1d16,	// (0x00056671) grid_month_view_pane_ParamLimits

0x1d24,	// (0x0005667f) frm_month_g1_ParamLimits

0xb8e4,	// (0x0006023f) frm_month_g2_ParamLimits

0xb8f5,	// (0x00060250) frm_month_g3_ParamLimits

0xb906,	// (0x00060261) frm_month_g4_ParamLimits

0xb917,	// (0x00060272) frm_month_g5_ParamLimits

0xb92a,	// (0x00060285) frm_month_g6_ParamLimits

0xb93d,	// (0x00060298) frm_month_g7_ParamLimits

0x1d31,	// (0x0005668c) frm_month_g8_ParamLimits

0xb950,	// (0x000602ab) frm_month_g9_ParamLimits

0xb95d,	// (0x000602b8) frm_month_g10_ParamLimits

0xb96a,	// (0x000602c5) frm_month_g11_ParamLimits

0xb977,	// (0x000602d2) frm_month_g12_ParamLimits

0xb984,	// (0x000602df) frm_month_g13_ParamLimits

0xb991,	// (0x000602ec) frm_month_g14_ParamLimits

0xb9a0,	// (0x000602fb) frm_month_g15_ParamLimits

0xb9af,	// (0x0006030a) frm_month_g16_ParamLimits

0xff08,	// (0x00064863) frm_month_g_ParamLimits

0x1d3e,	// (0x00056699) cell_top_day_name_pane_t1_ParamLimits

0xb9be,	// (0x00060319) cell_area_left_week_number_pane_g1_ParamLimits

0xb9cd,	// (0x00060328) cell_area_left_week_number_pane_t1_ParamLimits

0xe5d0,	// (0x00062f2b) cell_month_view_pane_g1_ParamLimits

0xb9e3,	// (0x0006033e) cell_month_view_pane_t1_ParamLimits

0xbe0e,	// (0x00060769) main_clock2_btn_pane_g1

0x20f5,	// (0x00056a50) main_clock2_btn_pane_t1

0xd9f7,	// (0x00062352) listscroll_cmail_pane_ParamLimits

0x15b8,	// (0x00055f13) main_sp_fs_email_pane_g1_ParamLimits

0x15c4,	// (0x00055f1f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00064640) main_sp_fs_email_pane_g_ParamLimits

0x18e3,	// (0x0005623e) list_recal_day_pane_ParamLimits

0x18f4,	// (0x0005624f) mian_recal_day_pane_t1

0xa99b,	// (0x0005f2f6) list_single_dyc_row_text_pane_t4_ParamLimits

0xa99b,	// (0x0005f2f6) list_single_dyc_row_text_pane_t4

0xa9d2,	// (0x0005f32d) list_single_dyc_row_text_pane_t5_ParamLimits

0xa9d2,	// (0x0005f32d) list_single_dyc_row_text_pane_t5

0x01c9,	// (0x00054b24) list_single_dyc_row_text_pane_t6_ParamLimits

0x01c9,	// (0x00054b24) list_single_dyc_row_text_pane_t6

0x534e,	// (0x00059ca9) aid_mgn_list_cale_time_pane

0x6509,	// (0x0005ae64) main_gallery2_pane_ParamLimits

0xe7d6,	// (0x00063131) main_clock2_pane_cp01_t1

0xe7e6,	// (0x00063141) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0006411f) main_clock2_pane_cp01_t

0x3ac3,	// (0x0005841e) cale_week_scroll_pane_g16_ParamLimits

0x3ac3,	// (0x0005841e) cale_week_scroll_pane_g16

0xc0a0,	// (0x000609fb) vorec_slider_pane

0x208f,	// (0x000569ea) vidtel_button_pane_t1_ParamLimits

0xb229,	// (0x0005fb84) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb229,	// (0x0005fb84) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb236,	// (0x0005fb91) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb236,	// (0x0005fb91) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000647c0) main_fs_bigclock_clock_pane_g_ParamLimits

0xb242,	// (0x0005fb9d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb255,	// (0x0005fbb0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000647c9) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

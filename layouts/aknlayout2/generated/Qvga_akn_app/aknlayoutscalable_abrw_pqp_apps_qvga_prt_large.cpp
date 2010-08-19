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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00070d8d };

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
0x61df,	// (0x00076f6c) Screen

0x61e9,	// (0x00076f76) application_window

0x623b,	// (0x00076fc8) area_bottom_pane_ParamLimits

0x623b,	// (0x00076fc8) area_bottom_pane

0x6277,	// (0x00077004) area_top_pane_ParamLimits

0x6277,	// (0x00077004) area_top_pane

0x62d3,	// (0x00077060) call_video_uplink_pane_ParamLimits

0x62d3,	// (0x00077060) call_video_uplink_pane

0x630e,	// (0x0007709b) main_pane_ParamLimits

0x630e,	// (0x0007709b) main_pane

0x24eb,	// (0x00073278) context_pane

0x8e85,	// (0x00079c12) navi_pane

0x8e9f,	// (0x00079c2c) popup_cale_events_window_ParamLimits

0x8e9f,	// (0x00079c2c) popup_cale_events_window

0x24fe,	// (0x0007328b) popup_mup_playback_window

0x8eb6,	// (0x00079c43) signal_pane

0x172d,	// (0x000724ba) main_browser_pane

0x1992,	// (0x0007271f) main_burst_pane

0x6437,	// (0x000771c4) main_calc_pane

0x24d5,	// (0x00073262) main_cale_day_pane

0x687f,	// (0x0007760c) main_cale_month_pane

0x24d5,	// (0x00073262) main_cale_week_pane

0x1992,	// (0x0007271f) main_call_pane

0x13c0,	// (0x0007214d) main_call_poc_pane

0x1992,	// (0x0007271f) main_camera_pane

0x1992,	// (0x0007271f) main_chi_dic_pane

0xde7b,	// (0x0007ec08) main_clock_pane

0x13c0,	// (0x0007214d) main_fmradio_pane

0x1992,	// (0x0007271f) main_graph_messa_pane

0x13c0,	// (0x0007214d) main_help_pane

0x172d,	// (0x000724ba) main_im_pane

0x161b,	// (0x000723a8) main_image_pane_ParamLimits

0x161b,	// (0x000723a8) main_image_pane

0x13c0,	// (0x0007214d) main_location2_pane

0x1992,	// (0x0007271f) main_location_pane

0x161b,	// (0x000723a8) main_messa_pane

0x13c0,	// (0x0007214d) main_mp2_pane

0x1992,	// (0x0007271f) main_mp_pane

0x13c0,	// (0x0007214d) main_msg_pane

0x13c0,	// (0x0007214d) main_mup_eq_pane

0x13c0,	// (0x0007214d) main_mup_pane

0x172d,	// (0x000724ba) main_notes_pane

0x13c0,	// (0x0007214d) main_pec_pane

0x13c0,	// (0x0007214d) main_phob_pane

0x13c0,	// (0x0007214d) main_pinb_pane

0x13c0,	// (0x0007214d) main_postcard_pane

0x13c0,	// (0x0007214d) main_qdial_pane

0x1992,	// (0x0007271f) main_skin_pane

0x13c0,	// (0x0007214d) main_smil2_pane

0x1992,	// (0x0007271f) main_smil_pane

0x1992,	// (0x0007271f) main_video_pane

0x1992,	// (0x0007271f) main_video_tele_pane

0x161b,	// (0x000723a8) main_viewer_pane_ParamLimits

0x161b,	// (0x000723a8) main_viewer_pane

0x1992,	// (0x0007271f) main_vorec_pane

0x8d83,	// (0x00079b10) popup_blid_sat_info_window_ParamLimits

0x8d83,	// (0x00079b10) popup_blid_sat_info_window

0x8d9f,	// (0x00079b2c) popup_dyc_status_message_window_ParamLimits

0x8d9f,	// (0x00079b2c) popup_dyc_status_message_window

0x8dab,	// (0x00079b38) popup_grid_large_graphic_window_ParamLimits

0x8dab,	// (0x00079b38) popup_grid_large_graphic_window

0x8e1c,	// (0x00079ba9) popup_loc_request_window_ParamLimits

0x8e1c,	// (0x00079ba9) popup_loc_request_window

0x8e5f,	// (0x00079bec) popup_wml_address_window_ParamLimits

0x8e5f,	// (0x00079bec) popup_wml_address_window

0x8c3f,	// (0x000799cc) call_muted_g1

0x8c4f,	// (0x000799dc) popup_call_audio_conf_window_ParamLimits

0x8c4f,	// (0x000799dc) popup_call_audio_conf_window

0x8c62,	// (0x000799ef) popup_call_audio_first_window_ParamLimits

0x8c62,	// (0x000799ef) popup_call_audio_first_window

0x8c96,	// (0x00079a23) popup_call_audio_in_window_ParamLimits

0x8c96,	// (0x00079a23) popup_call_audio_in_window

0x8cb2,	// (0x00079a3f) popup_call_audio_out_window_ParamLimits

0x8cb2,	// (0x00079a3f) popup_call_audio_out_window

0x8cce,	// (0x00079a5b) popup_call_audio_second_window_ParamLimits

0x8cce,	// (0x00079a5b) popup_call_audio_second_window

0x8cf6,	// (0x00079a83) popup_call_audio_wait_window_ParamLimits

0x8cf6,	// (0x00079a83) popup_call_audio_wait_window

0x8d15,	// (0x00079aa2) popup_number_entry_window_ParamLimits

0x8d15,	// (0x00079aa2) popup_number_entry_window

0x0faf,	// (0x00071d3c) bg_popup_call_pane_cp05_ParamLimits

0x0faf,	// (0x00071d3c) bg_popup_call_pane_cp05

0x0fcf,	// (0x00071d5c) popup_number_entry_window_t1

0x0fe2,	// (0x00071d6f) popup_number_entry_window_t2

0x0ff4,	// (0x00071d81) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0007fe12) popup_number_entry_window_t

0x1006,	// (0x00071d93) text_title_cp2

0x1019,	// (0x00071da6) bg_popup_call_pane_cp_ParamLimits

0x1019,	// (0x00071da6) bg_popup_call_pane_cp

0x1027,	// (0x00071db4) call_thumbnail_pane

0x102f,	// (0x00071dbc) popup_call_audio_in_window_g1_ParamLimits

0x102f,	// (0x00071dbc) popup_call_audio_in_window_g1

0x103b,	// (0x00071dc8) popup_call_audio_in_window_g2_ParamLimits

0x103b,	// (0x00071dc8) popup_call_audio_in_window_g2

0x1047,	// (0x00071dd4) popup_call_audio_in_window_g3_ParamLimits

0x1047,	// (0x00071dd4) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0007fe1b) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0007fe1b) popup_call_audio_in_window_g

0x1053,	// (0x00071de0) popup_call_audio_in_window_t1_ParamLimits

0x1053,	// (0x00071de0) popup_call_audio_in_window_t1

0x106e,	// (0x00071dfb) popup_call_audio_in_window_t2_ParamLimits

0x106e,	// (0x00071dfb) popup_call_audio_in_window_t2

0x1089,	// (0x00071e16) popup_call_audio_in_window_t3_ParamLimits

0x1089,	// (0x00071e16) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0007fe22) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0007fe22) popup_call_audio_in_window_t

0x1019,	// (0x00071da6) bg_popup_call_pane_cp01_ParamLimits

0x1019,	// (0x00071da6) bg_popup_call_pane_cp01

0x1027,	// (0x00071db4) call_thumbnail_pane_cp02

0x109c,	// (0x00071e29) call_type_pane_cp022

0x10a4,	// (0x00071e31) popup_call_audio_out_window_g1_ParamLimits

0x10a4,	// (0x00071e31) popup_call_audio_out_window_g1

0x10b6,	// (0x00071e43) popup_call_audio_out_window_g2_ParamLimits

0x10b6,	// (0x00071e43) popup_call_audio_out_window_g2

0x10c2,	// (0x00071e4f) popup_call_audio_out_window_g3_ParamLimits

0x10c2,	// (0x00071e4f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0007fe29) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0007fe29) popup_call_audio_out_window_g

0x10d4,	// (0x00071e61) popup_call_audio_out_window_t1_ParamLimits

0x10d4,	// (0x00071e61) popup_call_audio_out_window_t1

0x10ec,	// (0x00071e79) popup_call_audio_out_window_t2_ParamLimits

0x10ec,	// (0x00071e79) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0007fe30) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0007fe30) popup_call_audio_out_window_t

0x1101,	// (0x00071e8e) bg_popup_call_pane_ParamLimits

0x1101,	// (0x00071e8e) bg_popup_call_pane

0x64d9,	// (0x00077266) call_thumbnail_pane_cp_ParamLimits

0x64d9,	// (0x00077266) call_thumbnail_pane_cp

0x1185,	// (0x00071f12) call_type_pane_cp01_ParamLimits

0x1185,	// (0x00071f12) call_type_pane_cp01

0x11c9,	// (0x00071f56) popup_call_audio_first_window_g1_ParamLimits

0x11c9,	// (0x00071f56) popup_call_audio_first_window_g1

0x1215,	// (0x00071fa2) popup_call_audio_first_window_g2_ParamLimits

0x1215,	// (0x00071fa2) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0007fe35) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0007fe35) popup_call_audio_first_window_g

0x1259,	// (0x00071fe6) popup_call_audio_first_window_t1_ParamLimits

0x1259,	// (0x00071fe6) popup_call_audio_first_window_t1

0x1305,	// (0x00072092) popup_call_audio_first_window_t4_ParamLimits

0x1305,	// (0x00072092) popup_call_audio_first_window_t4

0x1391,	// (0x0007211e) popup_call_audio_first_window_t5_ParamLimits

0x1391,	// (0x0007211e) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0007fe3a) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0007fe3a) popup_call_audio_first_window_t

0x13c0,	// (0x0007214d) bg_popup_call_pane_cp02

0x13ca,	// (0x00072157) call_type_pane_cp023

0x13d2,	// (0x0007215f) popup_call_audio_wait_window_g1

0x13da,	// (0x00072167) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0007fe41) popup_call_audio_wait_window_g

0x13e2,	// (0x0007216f) popup_call_audio_wait_window_t3

0x13f0,	// (0x0007217d) bg_popup_call_pane_cp03_ParamLimits

0x13f0,	// (0x0007217d) bg_popup_call_pane_cp03

0x1450,	// (0x000721dd) call_thumbnail_pane_cp011_ParamLimits

0x1450,	// (0x000721dd) call_thumbnail_pane_cp011

0x145c,	// (0x000721e9) call_type_pane_cp034_ParamLimits

0x145c,	// (0x000721e9) call_type_pane_cp034

0x1498,	// (0x00072225) popup_call_audio_second_window_g1_ParamLimits

0x1498,	// (0x00072225) popup_call_audio_second_window_g1

0x14d4,	// (0x00072261) popup_call_audio_second_window_g2_ParamLimits

0x14d4,	// (0x00072261) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0007fe46) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0007fe46) popup_call_audio_second_window_g

0x1510,	// (0x0007229d) popup_call_audio_second_window_t1_ParamLimits

0x1510,	// (0x0007229d) popup_call_audio_second_window_t1

0x1591,	// (0x0007231e) popup_call_audio_second_window_t2_ParamLimits

0x1591,	// (0x0007231e) popup_call_audio_second_window_t2

0x15c7,	// (0x00072354) popup_call_audio_second_window_t3_ParamLimits

0x15c7,	// (0x00072354) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0007fe4b) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0007fe4b) popup_call_audio_second_window_t

0x13c0,	// (0x0007214d) bg_popup_call_pane_cp04

0x15fd,	// (0x0007238a) list_conf_pane

0x1605,	// (0x00072392) popup_call_audio_conf_window_t1

0x1613,	// (0x000723a0) call_thumbnail_pane_g1

0x161b,	// (0x000723a8) bg_pinb_pane_ParamLimits

0x161b,	// (0x000723a8) bg_pinb_pane

0x1629,	// (0x000723b6) find_pinb_pane

0x161b,	// (0x000723a8) listscroll_pinb_pane_ParamLimits

0x161b,	// (0x000723a8) listscroll_pinb_pane

0x1633,	// (0x000723c0) pinb_bg_pane_g1

0x1633,	// (0x000723c0) pinb_bg_pane_g2

0x1633,	// (0x000723c0) pinb_bg_pane_g3

0x1633,	// (0x000723c0) pinb_bg_pane_g4

0x1633,	// (0x000723c0) pinb_bg_pane_g5

0x1633,	// (0x000723c0) pinb_bg_pane_g6

0x1633,	// (0x000723c0) pinb_bg_pane_g7

0x1633,	// (0x000723c0) pinb_bg_pane_g8

0x1633,	// (0x000723c0) pinb_bg_pane_g9

0x1633,	// (0x000723c0) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0007fe52) pinb_bg_pane_g

0x6508,	// (0x00077295) grid_pinb_pane

0x0f54,	// (0x00071ce1) list_pinb_pane

0x163d,	// (0x000723ca) scroll_pane_cp01_ParamLimits

0x163d,	// (0x000723ca) scroll_pane_cp01

0x164a,	// (0x000723d7) find_pinb_pane_g1_ParamLimits

0x164a,	// (0x000723d7) find_pinb_pane_g1

0x1662,	// (0x000723ef) find_pinb_pane_t1

0x1674,	// (0x00072401) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0007fe6c) find_pinb_pane_t

0x1689,	// (0x00072416) input_focus_pane_cp01_ParamLimits

0x1689,	// (0x00072416) input_focus_pane_cp01

0x6512,	// (0x0007729f) cell_pinb_pane_ParamLimits

0x6512,	// (0x0007729f) cell_pinb_pane

0x1695,	// (0x00072422) cell_pinb_pane_g1_ParamLimits

0x1695,	// (0x00072422) cell_pinb_pane_g1

0x16a3,	// (0x00072430) cell_pinb_pane_g2_ParamLimits

0x16a3,	// (0x00072430) cell_pinb_pane_g2

0x16a3,	// (0x00072430) cell_pinb_pane_g3_ParamLimits

0x16a3,	// (0x00072430) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0007fe71) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0007fe71) cell_pinb_pane_g

0x13c0,	// (0x0007214d) grid_highlight_pane_cp01

0x0f54,	// (0x00071ce1) list_pinb_item_pane_ParamLimits

0x0f54,	// (0x00071ce1) list_pinb_item_pane

0x0f54,	// (0x00071ce1) list_highlight_pane_cp02

0x16b1,	// (0x0007243e) list_pinb_item_pane_g1_ParamLimits

0x16b1,	// (0x0007243e) list_pinb_item_pane_g1

0x16a3,	// (0x00072430) list_pinb_item_pane_g2_ParamLimits

0x16a3,	// (0x00072430) list_pinb_item_pane_g2

0x1695,	// (0x00072422) list_pinb_item_pane_g3_ParamLimits

0x1695,	// (0x00072422) list_pinb_item_pane_g3

0x16a3,	// (0x00072430) list_pinb_item_pane_g4_ParamLimits

0x16a3,	// (0x00072430) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0007fe78) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0007fe78) list_pinb_item_pane_g

0x16bf,	// (0x0007244c) list_pinb_item_pane_t1_ParamLimits

0x16bf,	// (0x0007244c) list_pinb_item_pane_t1

0x6536,	// (0x000772c3) calc_display_pane

0x654e,	// (0x000772db) calc_paper_pane

0x656a,	// (0x000772f7) grid_calc_pane

0x13c0,	// (0x0007214d) bg_list_pane_cp01

0x658a,	// (0x00077317) clock_g1

0x6592,	// (0x0007731f) clock_g2

0x0001,

0xf0f4,	// (0x0007fe81) clock_g

0x659a,	// (0x00077327) clock_t1_ParamLimits

0x659a,	// (0x00077327) clock_t1

0x65af,	// (0x0007733c) clock_t2_ParamLimits

0x65af,	// (0x0007733c) clock_t2

0x65c1,	// (0x0007734e) clock_t3_ParamLimits

0x65c1,	// (0x0007734e) clock_t3

0x65d3,	// (0x00077360) clock_t4_ParamLimits

0x65d3,	// (0x00077360) clock_t4

0x65e5,	// (0x00077372) clock_t5_ParamLimits

0x65e5,	// (0x00077372) clock_t5

0x65fa,	// (0x00077387) clock_t6_ParamLimits

0x65fa,	// (0x00077387) clock_t6

0x660c,	// (0x00077399) clock_t7_ParamLimits

0x660c,	// (0x00077399) clock_t7

0x661e,	// (0x000773ab) clock_t8_ParamLimits

0x661e,	// (0x000773ab) clock_t8

0x6630,	// (0x000773bd) clock_t9_ParamLimits

0x6630,	// (0x000773bd) clock_t9

0x0008,

0xf0f9,	// (0x0007fe86) clock_t_ParamLimits

0xf0f9,	// (0x0007fe86) clock_t

0x16db,	// (0x00072468) popup_clock_analogue_window_cp02

0x16db,	// (0x00072468) popup_clock_digital_window_cp01

0x13c0,	// (0x0007214d) listscroll_help_pane

0x13c0,	// (0x0007214d) phob_pre_status_pane

0x16e3,	// (0x00072470) grid_qdial_pane

0x161b,	// (0x000723a8) listscroll_mce_pane

0x161b,	// (0x000723a8) bg_notes_pane

0x16ed,	// (0x0007247a) list_notes_pane

0x6642,	// (0x000773cf) scroll_pane_cp06

0x16fb,	// (0x00072488) bg_calc_paper_pane

0x664f,	// (0x000773dc) list_calc_pane

0x172d,	// (0x000724ba) bg_calc_display_pane

0x6669,	// (0x000773f6) calc_display_pane_t1

0x667e,	// (0x0007740b) calc_display_pane_t2

0x6693,	// (0x00077420) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0007fe99) calc_display_pane_t

0x66a5,	// (0x00077432) cell_calc_pane_ParamLimits

0x66a5,	// (0x00077432) cell_calc_pane

0x1775,	// (0x00072502) bg_calc_paper_pane_g1

0x178d,	// (0x0007251a) bg_calc_paper_pane_g2

0x1781,	// (0x0007250e) bg_calc_paper_pane_g3

0x17a5,	// (0x00072532) bg_calc_paper_pane_g4

0x1799,	// (0x00072526) bg_calc_paper_pane_g5

0x66cc,	// (0x00077459) bg_calc_paper_pane_g6

0x66db,	// (0x00077468) bg_calc_paper_pane_g7

0x66ea,	// (0x00077477) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0007fea0) bg_calc_paper_pane_g

0x66f9,	// (0x00077486) calc_bg_paper_pane_g9

0x6708,	// (0x00077495) list_calc_item_pane_ParamLimits

0x6708,	// (0x00077495) list_calc_item_pane

0x17b1,	// (0x0007253e) list_calc_item_pane_g1

0x6721,	// (0x000774ae) list_calc_item_pane_t1_ParamLimits

0x6721,	// (0x000774ae) list_calc_item_pane_t1

0x6733,	// (0x000774c0) list_calc_item_pane_t2_ParamLimits

0x6733,	// (0x000774c0) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0007feb1) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0007feb1) list_calc_item_pane_t

0x1633,	// (0x000723c0) cell_calc_pane_g1

0x17d0,	// (0x0007255d) grid_highlight_pane_cp02

0x1805,	// (0x00072592) bg_calc_display_pane_g1

0x6761,	// (0x000774ee) bg_calc_display_pane_g2

0x17f2,	// (0x0007257f) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0007febb) bg_calc_display_pane_g

0x676b,	// (0x000774f8) cell_qdial_pane_ParamLimits

0x676b,	// (0x000774f8) cell_qdial_pane

0x677d,	// (0x0007750a) cell_qdial_pane_g1_ParamLimits

0x677d,	// (0x0007750a) cell_qdial_pane_g1

0x678a,	// (0x00077517) cell_qdial_pane_g2_ParamLimits

0x678a,	// (0x00077517) cell_qdial_pane_g2

0x180e,	// (0x0007259b) cell_qdial_pane_g3_ParamLimits

0x180e,	// (0x0007259b) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0007fec2) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0007fec2) cell_qdial_pane_g

0x67a8,	// (0x00077535) cell_qdial_pane_t1_ParamLimits

0x67a8,	// (0x00077535) cell_qdial_pane_t1

0x67c0,	// (0x0007754d) cell_qdial_pane_t2_ParamLimits

0x67c0,	// (0x0007754d) cell_qdial_pane_t2

0x67d3,	// (0x00077560) cell_qdial_pane_t3_ParamLimits

0x67d3,	// (0x00077560) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0007fecb) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0007fecb) cell_qdial_pane_t

0x13c0,	// (0x0007214d) grid_highlight_pane_cp04

0x181a,	// (0x000725a7) thumbnail_qdial_pane_ParamLimits

0x181a,	// (0x000725a7) thumbnail_qdial_pane

0x1876,	// (0x00072603) list_help_pane

0x1880,	// (0x0007260d) scroll_pane_cp02

0x67e6,	// (0x00077573) help_list_pane_t1_ParamLimits

0x67e6,	// (0x00077573) help_list_pane_t1

0x6805,	// (0x00077592) bg_notes_pane_g2

0x680d,	// (0x0007759a) bg_notes_pane_g3

0x6815,	// (0x000775a2) notes_bg_pane_g1

0x681d,	// (0x000775aa) notes_bg_pane_g4

0x6825,	// (0x000775b2) notes_bg_pane_g5

0x682d,	// (0x000775ba) notes_bg_pane_g6

0x6835,	// (0x000775c2) notes_bg_pane_g7

0x683d,	// (0x000775ca) notes_bg_pane_g8

0x6845,	// (0x000775d2) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0007fee9) notes_bg_pane_g

0x684d,	// (0x000775da) list_notes_text_pane_ParamLimits

0x684d,	// (0x000775da) list_notes_text_pane

0x18d1,	// (0x0007265e) list_notes_text_pane_g1

0x6871,	// (0x000775fe) list_notes_text_pane_t1

0x687f,	// (0x0007760c) listscroll_cale_week_pane

0x68a4,	// (0x00077631) bg_cale_heading_pane

0x18f4,	// (0x00072681) bg_cale_pane_cp01

0x68bc,	// (0x00077649) cale_week_corner_pane

0x68d6,	// (0x00077663) cale_week_day_heading_pane

0x68ee,	// (0x0007767b) cale_week_scroll_pane_g1

0x6901,	// (0x0007768e) cale_week_scroll_pane_g2

0x6914,	// (0x000776a1) cale_week_scroll_pane_g3

0x6927,	// (0x000776b4) cale_week_scroll_pane_g4

0x693a,	// (0x000776c7) cale_week_scroll_pane_g5

0x694d,	// (0x000776da) cale_week_scroll_pane_g6

0x6960,	// (0x000776ed) cale_week_scroll_pane_g7

0x6973,	// (0x00077700) cale_week_scroll_pane_g8

0x6986,	// (0x00077713) cale_week_scroll_pane_g9

0x6999,	// (0x00077726) cale_week_scroll_pane_g10

0x69ac,	// (0x00077739) cale_week_scroll_pane_g11

0x69bf,	// (0x0007774c) cale_week_scroll_pane_g12

0x69d2,	// (0x0007775f) cale_week_scroll_pane_g13

0x69e5,	// (0x00077772) cale_week_scroll_pane_g14

0x69f8,	// (0x00077785) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0007fef8) cale_week_scroll_pane_g

0x6a1e,	// (0x000777ab) cale_week_time_pane

0x6a31,	// (0x000777be) grid_cale_week_pane

0x1923,	// (0x000726b0) scroll_pane_cp08

0x6a46,	// (0x000777d3) cell_cale_week_pane_ParamLimits

0x6a46,	// (0x000777d3) cell_cale_week_pane

0x6a94,	// (0x00077821) cale_week_day_heading_pane_t1

0x6acf,	// (0x0007785c) cale_week_day_heading_pane_t2

0x6b0a,	// (0x00077897) cale_week_day_heading_pane_t3

0x6b45,	// (0x000778d2) cale_week_day_heading_pane_t4

0x6b80,	// (0x0007790d) cale_week_day_heading_pane_t5

0x6bbb,	// (0x00077948) cale_week_day_heading_pane_t6

0x6bf6,	// (0x00077983) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0007ff19) cale_week_day_heading_pane_t

0x1940,	// (0x000726cd) bg_cale_side_pane

0x6c31,	// (0x000779be) cale_week_time_pane_t1

0x6c6b,	// (0x000779f8) cale_week_time_pane_t2

0x6ca5,	// (0x00077a32) cale_week_time_pane_t3

0x6cdf,	// (0x00077a6c) cale_week_time_pane_t4

0x6d19,	// (0x00077aa6) cale_week_time_pane_t5

0x6d53,	// (0x00077ae0) cale_week_time_pane_t6

0x6d8d,	// (0x00077b1a) cale_week_time_pane_t7

0x6dc7,	// (0x00077b54) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0007ff28) cale_week_time_pane_t

0x6e01,	// (0x00077b8e) cell_cale_week_pane_g2

0x6e25,	// (0x00077bb2) cell_cale_week_pane_g3_ParamLimits

0x6e25,	// (0x00077bb2) cell_cale_week_pane_g3

0x194e,	// (0x000726db) grid_highlight_pane_cp07

0x1956,	// (0x000726e3) listscroll_gms_pane

0x1960,	// (0x000726ed) grid_gms_pane

0x1969,	// (0x000726f6) listscroll_gms_pane_g1

0x1971,	// (0x000726fe) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0007ff39) listscroll_gms_pane_g

0x6e3d,	// (0x00077bca) scroll_pane_cp010

0x6e46,	// (0x00077bd3) cell_gms_pane_ParamLimits

0x6e46,	// (0x00077bd3) cell_gms_pane

0x6e57,	// (0x00077be4) cell_gms_pane_g1

0x1979,	// (0x00072706) cell_gms_pane_g2

0x18d1,	// (0x0007265e) cell_gms_pane_g3

0x1981,	// (0x0007270e) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0007ff3e) cell_gms_pane_g

0x198a,	// (0x00072717) grid_highlight_pane_cp09

0x8bed,	// (0x0007997a) phob_pre_status_pane_g1

0x8bf5,	// (0x00079982) phob_pre_status_pane_g2

0x8bfd,	// (0x0007998a) phob_pre_status_pane_g3

0x8c05,	// (0x00079992) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x0008032c) phob_pre_status_pane_g

0x8c15,	// (0x000799a2) phob_pre_status_pane_t1

0x8c23,	// (0x000799b0) phob_pre_status_pane_t2

0x8c31,	// (0x000799be) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x00080337) phob_pre_status_pane_t

0x1992,	// (0x0007271f) bg_list_pane_cp05

0x6e5f,	// (0x00077bec) grid_vorec_pane

0x199a,	// (0x00072727) vorec_t1

0x19a8,	// (0x00072735) vorec_t2

0x19b6,	// (0x00072743) vorec_t3

0x6e67,	// (0x00077bf4) vorec_t4

0xdaac,	// (0x0007e839) vorec_t5

0xdaba,	// (0x0007e847) vorec_t6

0x0004,

0xf1ba,	// (0x0007ff47) vorec_t

0xdac8,	// (0x0007e855) wait_bar_pane_cp01

0xdad0,	// (0x0007e85d) cell_vorec_pane_ParamLimits

0xdad0,	// (0x0007e85d) cell_vorec_pane

0x6e75,	// (0x00077c02) cell_vorec_pane_g1

0x13c0,	// (0x0007214d) grid_highlight_pane_cp05

0x1dca,	// (0x00072b57) cams_zoom_pane

0x6e7f,	// (0x00077c0c) image_vga_pane

0x16a3,	// (0x00072430) main_camera_pane_g1

0x16a3,	// (0x00072430) main_camera_pane_g2

0x16a3,	// (0x00072430) main_camera_pane_g3

0x16a3,	// (0x00072430) main_camera_pane_g4

0x16a3,	// (0x00072430) main_camera_pane_g5

0x16a3,	// (0x00072430) main_camera_pane_g6

0x16a3,	// (0x00072430) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0007ff52) main_camera_pane_g

0x1db6,	// (0x00072b43) main_camera_pane_t1

0x1db6,	// (0x00072b43) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0007ff63) main_camera_pane_t

0x6e9e,	// (0x00077c2b) cams_zoom_pane_cp_ParamLimits

0x6e9e,	// (0x00077c2b) cams_zoom_pane_cp

0x6ec2,	// (0x00077c4f) image_cif_pane_ParamLimits

0x6ec2,	// (0x00077c4f) image_cif_pane

0x6ecf,	// (0x00077c5c) image_subqcif_pane

0x6ed7,	// (0x00077c64) main_video_pane_g1_ParamLimits

0x6ed7,	// (0x00077c64) main_video_pane_g1

0x6ef7,	// (0x00077c84) main_video_pane_g2_ParamLimits

0x6ef7,	// (0x00077c84) main_video_pane_g2

0x6f25,	// (0x00077cb2) main_video_pane_g3_ParamLimits

0x6f25,	// (0x00077cb2) main_video_pane_g3

0x6f4e,	// (0x00077cdb) main_video_pane_g4_ParamLimits

0x6f4e,	// (0x00077cdb) main_video_pane_g4

0x6f77,	// (0x00077d04) main_video_pane_g5_ParamLimits

0x6f77,	// (0x00077d04) main_video_pane_g5

0x19dc,	// (0x00072769) main_video_pane_g6_ParamLimits

0x19dc,	// (0x00072769) main_video_pane_g6

0x0006,

0xf1db,	// (0x0007ff68) main_video_pane_g_ParamLimits

0xf1db,	// (0x0007ff68) main_video_pane_g

0x6f99,	// (0x00077d26) main_video_pane_t1_ParamLimits

0x6f99,	// (0x00077d26) main_video_pane_t1

0x19f6,	// (0x00072783) cams_zoom_pane_g1

0x19f6,	// (0x00072783) cams_zoom_pane_g2

0x19f6,	// (0x00072783) cams_zoom_pane_g3

0x19f6,	// (0x00072783) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0007ff77) cams_zoom_pane_g

0x6fe3,	// (0x00077d70) grid_cams_pane

0x6fef,	// (0x00077d7c) linegrid_cams_pane

0x6ffb,	// (0x00077d88) cell_cams_pane_ParamLimits

0x6ffb,	// (0x00077d88) cell_cams_pane

0x1a00,	// (0x0007278d) cams_burst_image_pane

0x1a08,	// (0x00072795) cell_cams_pane_g1

0x13c0,	// (0x0007214d) grid_highlight_pane_cp03

0x1633,	// (0x000723c0) mp_bg_pane_g1

0x13c0,	// (0x0007214d) bg_list_pane_cp03

0x23fa,	// (0x00073187) bg_mp_pane

0x2402,	// (0x0007318f) grid_mp_pane

0x240a,	// (0x00073197) media_player_g1

0x2412,	// (0x0007319f) media_player_t1

0x2420,	// (0x000731ad) media_player_t2

0x242e,	// (0x000731bb) media_player_t3

0x243c,	// (0x000731c9) media_player_t4

0x244a,	// (0x000731d7) media_player_t5

0x2458,	// (0x000731e5) media_player_t6

0x2466,	// (0x000731f3) media_player_t7

0x0006,

0xf589,	// (0x00080316) media_player_t

0x2474,	// (0x00073201) wait_bar_pane_cp02

0xf56e,	// (0x000802fb) main_usb_pane_t

0x8be4,	// (0x00079971) cell_mp_pane

0x1633,	// (0x000723c0) cell_mp_pane_g1

0x13c0,	// (0x0007214d) grid_highlight_pane_cp06

0x1a4e,	// (0x000727db) grid_skin_colour_pane

0x1a56,	// (0x000727e3) list_highlight_pane_cp03

0x700e,	// (0x00077d9b) skin_g1

0x1a5e,	// (0x000727eb) skin_t1

0x1a6d,	// (0x000727fa) skin_t2

0x0001,

0xf218,	// (0x0007ffa5) skin_t

0x7016,	// (0x00077da3) cell_skin_colour_pane_ParamLimits

0x7016,	// (0x00077da3) cell_skin_colour_pane

0x1a7b,	// (0x00072808) cell_skin_colour_pane_g1

0x708c,	// (0x00077e19) call_video_g1_ParamLimits

0x708c,	// (0x00077e19) call_video_g1

0x7098,	// (0x00077e25) call_video_g2_ParamLimits

0x7098,	// (0x00077e25) call_video_g2

0x0001,

0xf21d,	// (0x0007ffaa) call_video_g_ParamLimits

0xf21d,	// (0x0007ffaa) call_video_g

0x70e8,	// (0x00077e75) call_video_uplink_pane_cp1_ParamLimits

0x70e8,	// (0x00077e75) call_video_uplink_pane_cp1

0x1a8d,	// (0x0007281a) call_video_uplink_pane_cp2

0x71a4,	// (0x00077f31) video_down_crop_pane_ParamLimits

0x71a4,	// (0x00077f31) video_down_crop_pane

0x726e,	// (0x00077ffb) video_down_pane_ParamLimits

0x726e,	// (0x00077ffb) video_down_pane

0x1a95,	// (0x00072822) video_down_subqcif_pane_ParamLimits

0x1a95,	// (0x00072822) video_down_subqcif_pane

0x1aad,	// (0x0007283a) video_down_subqcif_pane_cp_ParamLimits

0x1aad,	// (0x0007283a) video_down_subqcif_pane_cp

0x1ad1,	// (0x0007285e) im_reading_pane_ParamLimits

0x1ad1,	// (0x0007285e) im_reading_pane

0x733a,	// (0x000780c7) im_writing_pane_ParamLimits

0x733a,	// (0x000780c7) im_writing_pane

0x7350,	// (0x000780dd) im_reading_pane_t1

0x1aeb,	// (0x00072878) list_im_pane

0x1afc,	// (0x00072889) scroll_pane_cp07

0x7388,	// (0x00078115) im_writing_pane_t1_ParamLimits

0x7388,	// (0x00078115) im_writing_pane_t1

0x1b15,	// (0x000728a2) im_writing_pane_t2_ParamLimits

0x1b15,	// (0x000728a2) im_writing_pane_t2

0x0001,

0xf227,	// (0x0007ffb4) im_writing_pane_t_ParamLimits

0xf227,	// (0x0007ffb4) im_writing_pane_t

0x13c0,	// (0x0007214d) input_focus_pane_cp04

0x13c0,	// (0x0007214d) input_focus_pane_cp05

0x739d,	// (0x0007812a) list_im_single_pane_ParamLimits

0x739d,	// (0x0007812a) list_im_single_pane

0x1b32,	// (0x000728bf) list_single_im_pane_t1

0x8baa,	// (0x00079937) blid_accuracy_pane

0x8bb2,	// (0x0007993f) blid_compass_pane

0x8bba,	// (0x00079947) main_location_t1

0x8bc8,	// (0x00079955) main_location_t2

0x8bd6,	// (0x00079963) main_location_t3

0x0002,

0xf598,	// (0x00080325) main_location_t

0x13c0,	// (0x0007214d) aid_levels_location

0x1633,	// (0x000723c0) blid_accuracy_pane_g1

0x1633,	// (0x000723c0) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00080008) blid_accuracy_pane_g

0x1b6c,	// (0x000728f9) wml_content_pane

0x1baa,	// (0x00072937) wml_button_pane_ParamLimits

0x1baa,	// (0x00072937) wml_button_pane

0x73b5,	// (0x00078142) wml_list_single_large_pane_ParamLimits

0x73b5,	// (0x00078142) wml_list_single_large_pane

0x73cc,	// (0x00078159) wml_list_single_medium_pane_ParamLimits

0x73cc,	// (0x00078159) wml_list_single_medium_pane

0x73e4,	// (0x00078171) wml_list_single_small_pane_ParamLimits

0x73e4,	// (0x00078171) wml_list_single_small_pane

0x1bbe,	// (0x0007294b) wml_selection_box_pane_ParamLimits

0x1bbe,	// (0x0007294b) wml_selection_box_pane

0x1bd1,	// (0x0007295e) wml_list_single_pane_t1

0x1be0,	// (0x0007296d) wml_list_single_medium_pane_t1

0x1bef,	// (0x0007297c) wml_list_single_large_pane_t1

0x1bfe,	// (0x0007298b) input_focus_pane_cp02_ParamLimits

0x1bfe,	// (0x0007298b) input_focus_pane_cp02

0x1c11,	// (0x0007299e) wml_selection_box_pane_g1

0x1c1a,	// (0x000729a7) wml_selection_box_pane_t1_ParamLimits

0x1c1a,	// (0x000729a7) wml_selection_box_pane_t1

0x161b,	// (0x000723a8) bg_wml_button_pane_ParamLimits

0x161b,	// (0x000723a8) bg_wml_button_pane

0x1c32,	// (0x000729bf) wml_button_pane_g1

0x1c3a,	// (0x000729c7) wml_button_pane_t1

0x1c32,	// (0x000729bf) wml_button_bg_pane_g1

0x1c4a,	// (0x000729d7) wml_button_bg_pane_g2

0x1c52,	// (0x000729df) wml_button_bg_pane_g3

0x1c5a,	// (0x000729e7) wml_button_bg_pane_g4

0x1c62,	// (0x000729ef) wml_button_bg_pane_g5

0x1c6a,	// (0x000729f7) wml_button_bg_pane_g6

0x1c72,	// (0x000729ff) wml_button_bg_pane_g7

0x1c7a,	// (0x00072a07) wml_button_bg_pane_g8

0x1c82,	// (0x00072a0f) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0007ffb9) wml_button_bg_pane_g

0x73ff,	// (0x0007818c) bg_list_pane_cp02

0x1c8a,	// (0x00072a17) mce_header_pane_ParamLimits

0x1c8a,	// (0x00072a17) mce_header_pane

0x1c9e,	// (0x00072a2b) mce_icon_pane

0x1c9e,	// (0x00072a2b) mce_image_pane

0x1ca7,	// (0x00072a34) mce_text_pane_ParamLimits

0x1ca7,	// (0x00072a34) mce_text_pane

0x7408,	// (0x00078195) scroll_pane_cp03

0x7408,	// (0x00078195) scroll_pane_cp04

0x1cbb,	// (0x00072a48) scroll_pane_cp05_ParamLimits

0x1cbb,	// (0x00072a48) scroll_pane_cp05

0x7410,	// (0x0007819d) mce_header_field_pane_ParamLimits

0x7410,	// (0x0007819d) mce_header_field_pane

0x7430,	// (0x000781bd) mce_header_field_pane_2_ParamLimits

0x7430,	// (0x000781bd) mce_header_field_pane_2

0x7446,	// (0x000781d3) mce_header_field_pane_3

0x744e,	// (0x000781db) list_single_mce_message_pane_ParamLimits

0x744e,	// (0x000781db) list_single_mce_message_pane

0x7465,	// (0x000781f2) list_single_mce_smart_pane_ParamLimits

0x7465,	// (0x000781f2) list_single_mce_smart_pane

0x1cc7,	// (0x00072a54) input_focus_pane_cp03

0x1cd0,	// (0x00072a5d) list_header_data_pane

0x7487,	// (0x00078214) mce_header_field_pane_t1

0x7495,	// (0x00078222) list_single_mce_header_pane_ParamLimits

0x7495,	// (0x00078222) list_single_mce_header_pane

0x1cd8,	// (0x00072a65) list_single_mce_header_pane_t1

0x1ce7,	// (0x00072a74) list_single_mce_message_pane_g1

0x1cf0,	// (0x00072a7d) list_single_mce_message_pane_t1

0x74d3,	// (0x00078260) bg_cale_heading_pane_cp01_ParamLimits

0x74d3,	// (0x00078260) bg_cale_heading_pane_cp01

0x1cff,	// (0x00072a8c) bg_cale_pane_cp02_ParamLimits

0x1cff,	// (0x00072a8c) bg_cale_pane_cp02

0x7502,	// (0x0007828f) cale_month_corner_pane

0x751c,	// (0x000782a9) cale_month_day_heading_pane_ParamLimits

0x751c,	// (0x000782a9) cale_month_day_heading_pane

0x754b,	// (0x000782d8) cale_month_pane_g1_ParamLimits

0x754b,	// (0x000782d8) cale_month_pane_g1

0x756f,	// (0x000782fc) cale_month_pane_g2_ParamLimits

0x756f,	// (0x000782fc) cale_month_pane_g2

0x758e,	// (0x0007831b) cale_month_pane_g3_ParamLimits

0x758e,	// (0x0007831b) cale_month_pane_g3

0x75ca,	// (0x00078357) cale_month_pane_g4_ParamLimits

0x75ca,	// (0x00078357) cale_month_pane_g4

0x7606,	// (0x00078393) cale_month_pane_g5_ParamLimits

0x7606,	// (0x00078393) cale_month_pane_g5

0x7642,	// (0x000783cf) cale_month_pane_g6_ParamLimits

0x7642,	// (0x000783cf) cale_month_pane_g6

0x767e,	// (0x0007840b) cale_month_pane_g7_ParamLimits

0x767e,	// (0x0007840b) cale_month_pane_g7

0x76ba,	// (0x00078447) cale_month_pane_g8_ParamLimits

0x76ba,	// (0x00078447) cale_month_pane_g8

0x76f6,	// (0x00078483) cale_month_pane_g9_ParamLimits

0x76f6,	// (0x00078483) cale_month_pane_g9

0x7730,	// (0x000784bd) cale_month_pane_g10_ParamLimits

0x7730,	// (0x000784bd) cale_month_pane_g10

0x776a,	// (0x000784f7) cale_month_pane_g11_ParamLimits

0x776a,	// (0x000784f7) cale_month_pane_g11

0x77a4,	// (0x00078531) cale_month_pane_g12_ParamLimits

0x77a4,	// (0x00078531) cale_month_pane_g12

0x77de,	// (0x0007856b) cale_month_pane_g13_ParamLimits

0x77de,	// (0x0007856b) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0007ffcc) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0007ffcc) cale_month_pane_g

0x7818,	// (0x000785a5) cale_month_week_pane

0x782b,	// (0x000785b8) grid_cale_month_pane_ParamLimits

0x782b,	// (0x000785b8) grid_cale_month_pane

0x7851,	// (0x000785de) cale_month_day_heading_pane_t1

0x78d7,	// (0x00078664) cale_month_day_heading_pane_t2

0x7968,	// (0x000786f5) cale_month_day_heading_pane_t3

0x79f9,	// (0x00078786) cale_month_day_heading_pane_t4

0x7a8a,	// (0x00078817) cale_month_day_heading_pane_t5

0x7b1b,	// (0x000788a8) cale_month_day_heading_pane_t6

0x7bac,	// (0x00078939) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0007ffe7) cale_month_day_heading_pane_t

0x1940,	// (0x000726cd) bg_cale_side_pane_cp01

0x7c3d,	// (0x000789ca) cale_month_week_pane_t1

0x7c76,	// (0x00078a03) cale_month_week_pane_t2

0x7caf,	// (0x00078a3c) cale_month_week_pane_t3

0x7ce8,	// (0x00078a75) cale_month_week_pane_t4

0x7d21,	// (0x00078aae) cale_month_week_pane_t5

0x7d5a,	// (0x00078ae7) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0007fff6) cale_month_week_pane_t

0x7d93,	// (0x00078b20) cell_cale_month_pane_ParamLimits

0x7d93,	// (0x00078b20) cell_cale_month_pane

0x7e81,	// (0x00078c0e) cell_cale_month_pane_g1

0x7e8d,	// (0x00078c1a) cell_cale_month_pane_t1_ParamLimits

0x7e8d,	// (0x00078c1a) cell_cale_month_pane_t1

0x194e,	// (0x000726db) grid_highlight_pane_cp08

0x1633,	// (0x000723c0) main_smil_g1

0x7ead,	// (0x00078c3a) smil_status_pane

0x1d4a,	// (0x00072ad7) smil_text_pane

0x22c2,	// (0x0007304f) bg_popup_call3_rect_pane_g8

0x22ca,	// (0x00073057) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x000802a6) bg_popup_call3_rect_pane_g

0x255d,	// (0x000732ea) smil_status_volume_pane_g1

0x7ebe,	// (0x00078c4b) smil_status_pane_t1

0x8f18,	// (0x00079ca5) volume_smil_pane

0x1d54,	// (0x00072ae1) list_smil_text_pane

0x7ed5,	// (0x00078c62) scroll_pane_cp011

0x7ede,	// (0x00078c6b) smil_text_list_pane_t1_ParamLimits

0x7ede,	// (0x00078c6b) smil_text_list_pane_t1

0x7f1d,	// (0x00078caa) aid_volume_smil_ParamLimits

0x7f1d,	// (0x00078caa) aid_volume_smil

0x1633,	// (0x000723c0) smil_volume_pane_g1

0x1633,	// (0x000723c0) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00080008) smil_volume_pane_g

0x687f,	// (0x0007760c) listscroll_cale_day_pane

0x1d80,	// (0x00072b0d) bg_cale_pane

0x7f3f,	// (0x00078ccc) list_cale_pane

0x7f62,	// (0x00078cef) scroll_pane_cp09

0x7f73,	// (0x00078d00) cale_bg_pane_g1

0x7f7b,	// (0x00078d08) cale_bg_pane_g2

0x7f83,	// (0x00078d10) cale_bg_pane_g3

0x7f8b,	// (0x00078d18) cale_bg_pane_g4

0x7f93,	// (0x00078d20) cale_bg_pane_g5

0x7f9b,	// (0x00078d28) cale_bg_pane_g6

0x7fa3,	// (0x00078d30) cale_bg_pane_g7

0x7fab,	// (0x00078d38) cale_bg_pane_g8

0x7fb3,	// (0x00078d40) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0008000d) cale_bg_pane_g

0x7fc3,	// (0x00078d50) list_cale_time_pane_ParamLimits

0x7fc3,	// (0x00078d50) list_cale_time_pane

0x7fd7,	// (0x00078d64) list_cale_time_pane_g1_ParamLimits

0x7fd7,	// (0x00078d64) list_cale_time_pane_g1

0x7fe3,	// (0x00078d70) list_cale_time_pane_g2_ParamLimits

0x7fe3,	// (0x00078d70) list_cale_time_pane_g2

0x7ff0,	// (0x00078d7d) list_cale_time_pane_g3_ParamLimits

0x7ff0,	// (0x00078d7d) list_cale_time_pane_g3

0x7ffc,	// (0x00078d89) list_cale_time_pane_g4_ParamLimits

0x7ffc,	// (0x00078d89) list_cale_time_pane_g4

0x8008,	// (0x00078d95) list_cale_time_pane_g5_ParamLimits

0x8008,	// (0x00078d95) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00080020) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00080020) list_cale_time_pane_g

0xdae3,	// (0x0007e870) list_cale_time_pane_t1_ParamLimits

0xdae3,	// (0x0007e870) list_cale_time_pane_t1

0xdb0b,	// (0x0007e898) list_cale_time_pane_t2_ParamLimits

0xdb0b,	// (0x0007e898) list_cale_time_pane_t2

0x82d2,	// (0x0007905f) aid_blid_cardinal_pane

0x8310,	// (0x0007909d) compass_pane_t4

0xdb33,	// (0x0007e8c0) list_cale_time_pane_t4_ParamLimits

0xdb33,	// (0x0007e8c0) list_cale_time_pane_t4

0x831e,	// (0x000790ab) compass_pane_t5

0x832c,	// (0x000790b9) compass_pane_t6

0x833a,	// (0x000790c7) compass_pane_t7

0xdfa0,	// (0x0007ed2d) navi_pane_cc_t1

0xe145,	// (0x0007eed2) aid_phob_thumbnail_center_pane

0x8757,	// (0x000794e4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0008002d) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0008002d) list_cale_time_pane_t

0x1019,	// (0x00071da6) bg_popup_window_pane_cp02_ParamLimits

0x1019,	// (0x00071da6) bg_popup_window_pane_cp02

0xdb5b,	// (0x0007e8e8) heading_pane_cp01_ParamLimits

0xdb5b,	// (0x0007e8e8) heading_pane_cp01

0xdb67,	// (0x0007e8f4) loc_req_pane_ParamLimits

0xdb67,	// (0x0007e8f4) loc_req_pane

0xdb77,	// (0x0007e904) loc_type_pane_ParamLimits

0xdb77,	// (0x0007e904) loc_type_pane

0xdb89,	// (0x0007e916) loc_type_pane_t1_ParamLimits

0xdb89,	// (0x0007e916) loc_type_pane_t1

0xdb9b,	// (0x0007e928) loc_type_pane_t2_ParamLimits

0xdb9b,	// (0x0007e928) loc_type_pane_t2

0xdbad,	// (0x0007e93a) loc_type_pane_t3_ParamLimits

0xdbad,	// (0x0007e93a) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00080034) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00080034) loc_type_pane_t

0xdbbf,	// (0x0007e94c) list_loc_req_pane

0xdbc9,	// (0x0007e956) scroll_pane_cp012

0x8021,	// (0x00078dae) list_single_loc_request_popup_menu_pane_ParamLimits

0x8021,	// (0x00078dae) list_single_loc_request_popup_menu_pane

0xdbd2,	// (0x0007e95f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdbd2,	// (0x0007e95f) list_single_loc_request_popup_menu_pane_g1

0xdbde,	// (0x0007e96b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdbde,	// (0x0007e96b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0008003b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0008003b) list_single_loc_request_popup_menu_pane_g

0xdbea,	// (0x0007e977) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdbea,	// (0x0007e977) list_single_loc_request_popup_menu_pane_t1

0x8033,	// (0x00078dc0) bg_popup_window_pane_cp03_ParamLimits

0x8033,	// (0x00078dc0) bg_popup_window_pane_cp03

0x8041,	// (0x00078dce) heading_loc_req_pane_ParamLimits

0x8041,	// (0x00078dce) heading_loc_req_pane

0x804d,	// (0x00078dda) popup_dyc_status_message_window_g1_ParamLimits

0x804d,	// (0x00078dda) popup_dyc_status_message_window_g1

0x8059,	// (0x00078de6) popup_dyc_status_message_window_t1_ParamLimits

0x8059,	// (0x00078de6) popup_dyc_status_message_window_t1

0x806b,	// (0x00078df8) popup_dyc_status_message_window_t2_ParamLimits

0x806b,	// (0x00078df8) popup_dyc_status_message_window_t2

0x807d,	// (0x00078e0a) popup_dyc_status_message_window_t3_ParamLimits

0x807d,	// (0x00078e0a) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00080040) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00080040) popup_dyc_status_message_window_t

0x13c0,	// (0x0007214d) bg_heading_pane_cp01

0xdc00,	// (0x0007e98d) heading_loc_req_pane_g1

0xdc08,	// (0x0007e995) heading_loc_req_pane_g2

0xdc10,	// (0x0007e99d) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00080047) heading_loc_req_pane_g

0xdc18,	// (0x0007e9a5) heading_loc_req_pane_t1

0xdc27,	// (0x0007e9b4) bg_popup_sub_pane_cp01_ParamLimits

0xdc27,	// (0x0007e9b4) bg_popup_sub_pane_cp01

0xdc35,	// (0x0007e9c2) popup_cale_events_window_g1_ParamLimits

0xdc35,	// (0x0007e9c2) popup_cale_events_window_g1

0xdc55,	// (0x0007e9e2) popup_cale_events_window_g2_ParamLimits

0xdc55,	// (0x0007e9e2) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x0008007b) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x0008007b) popup_cale_events_window_g

0xdc75,	// (0x0007ea02) popup_cale_events_window_t1_ParamLimits

0xdc75,	// (0x0007ea02) popup_cale_events_window_t1

0xdc87,	// (0x0007ea14) popup_cale_events_window_t2_ParamLimits

0xdc87,	// (0x0007ea14) popup_cale_events_window_t2

0xdcc5,	// (0x0007ea52) popup_cale_events_window_t3_ParamLimits

0xdcc5,	// (0x0007ea52) popup_cale_events_window_t3

0xdcff,	// (0x0007ea8c) popup_cale_events_window_t4_ParamLimits

0xdcff,	// (0x0007ea8c) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00080080) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00080080) popup_cale_events_window_t

0x80a9,	// (0x00078e36) call_type_pane

0xdd35,	// (0x0007eac2) popup_call_status_window_g1

0x80b5,	// (0x00078e42) popup_call_status_window_g2

0x80c1,	// (0x00078e4e) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00080089) popup_call_status_window_g

0xdd43,	// (0x0007ead0) call_type_pane_g1

0xdd4c,	// (0x0007ead9) call_type_pane_g2

0x0001,

0xf303,	// (0x00080090) call_type_pane_g

0x13c0,	// (0x0007214d) bg_popup_sub_pane_cp02

0xdd55,	// (0x0007eae2) listscroll_popup_wml_pane

0xdd5d,	// (0x0007eaea) list_wml_pane

0xdd67,	// (0x0007eaf4) scroll_pane_cp013

0x80cd,	// (0x00078e5a) list_single_graphic_popup_wml_pane_ParamLimits

0x80cd,	// (0x00078e5a) list_single_graphic_popup_wml_pane

0x1633,	// (0x000723c0) list_single_graphic_popup_wml_pane_g1

0xdd70,	// (0x0007eafd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x00080095) list_single_graphic_popup_wml_pane_g

0xdd78,	// (0x0007eb05) list_single_graphic_popup_wml_pane_t1

0xdd8e,	// (0x0007eb1b) aid_call_pane

0x1613,	// (0x000723a0) popup_clock_analogue_window_g1

0x1613,	// (0x000723a0) popup_clock_analogue_window_g2

0x80e1,	// (0x00078e6e) popup_clock_analogue_window_g3

0x80e1,	// (0x00078e6e) popup_clock_analogue_window_g4

0x1633,	// (0x000723c0) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x0008009a) popup_clock_analogue_window_g

0x80e9,	// (0x00078e76) popup_clock_analogue_window_t1

0x80f7,	// (0x00078e84) clock_digital_number_pane_ParamLimits

0x80f7,	// (0x00078e84) clock_digital_number_pane

0x8103,	// (0x00078e90) clock_digital_number_pane_cp02_ParamLimits

0x8103,	// (0x00078e90) clock_digital_number_pane_cp02

0x810f,	// (0x00078e9c) clock_digital_number_pane_cp03_ParamLimits

0x810f,	// (0x00078e9c) clock_digital_number_pane_cp03

0x811b,	// (0x00078ea8) clock_digital_number_pane_cp04_ParamLimits

0x811b,	// (0x00078ea8) clock_digital_number_pane_cp04

0x8127,	// (0x00078eb4) clock_digital_separator_pane_ParamLimits

0x8127,	// (0x00078eb4) clock_digital_separator_pane

0x8133,	// (0x00078ec0) popup_clock_digital_window_t1

0x1633,	// (0x000723c0) clock_digital_number_pane_g1

0x1633,	// (0x000723c0) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00080008) clock_digital_number_pane_g

0x1633,	// (0x000723c0) clock_digital_separator_pane_g1

0x1633,	// (0x000723c0) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00080008) clock_digital_separator_pane_g

0x13c0,	// (0x0007214d) bg_popup_window_pane_cp04

0xdd96,	// (0x0007eb23) heading_pane_cp03

0xdd9e,	// (0x0007eb2b) listscroll_popup_gms_pane

0xdda6,	// (0x0007eb33) grid_large_graphic_popup_pane

0xddb0,	// (0x0007eb3d) listscroll_popup_gms_pane_g1

0xddb8,	// (0x0007eb45) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x000800a5) listscroll_popup_gms_pane_g

0x1ba2,	// (0x0007292f) scroll_pane_cp014

0x8150,	// (0x00078edd) cell_large_graphic_popup_pane_ParamLimits

0x8150,	// (0x00078edd) cell_large_graphic_popup_pane

0x8167,	// (0x00078ef4) cell_large_graphic_popup_pane_g1_ParamLimits

0x8167,	// (0x00078ef4) cell_large_graphic_popup_pane_g1

0xddc0,	// (0x0007eb4d) cell_large_graphic_popup_pane_g2_ParamLimits

0xddc0,	// (0x0007eb4d) cell_large_graphic_popup_pane_g2

0xddcc,	// (0x0007eb59) cell_large_graphic_popup_pane_g3_ParamLimits

0xddcc,	// (0x0007eb59) cell_large_graphic_popup_pane_g3

0xddd9,	// (0x0007eb66) cell_large_graphic_popup_pane_g4_ParamLimits

0xddd9,	// (0x0007eb66) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x000800aa) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x000800aa) cell_large_graphic_popup_pane_g

0xdde9,	// (0x0007eb76) grid_highlight_pane_cp010

0x1633,	// (0x000723c0) bg_popup_call_pane_g1

0xddf3,	// (0x0007eb80) list_single_graphic_popup_conf_pane_ParamLimits

0xddf3,	// (0x0007eb80) list_single_graphic_popup_conf_pane

0xde06,	// (0x0007eb93) list_highlight_pane_cp01

0xde0f,	// (0x0007eb9c) list_single_graphic_popup_conf_pane_g1

0xde17,	// (0x0007eba4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x000800b3) list_single_graphic_popup_conf_pane_g

0xde1f,	// (0x0007ebac) list_single_graphic_popup_conf_pane_t1

0xde2d,	// (0x0007ebba) linegrid_cams_pane_g1

0x8173,	// (0x00078f00) linegrid_cams_pane_g2

0x18d1,	// (0x0007265e) linegrid_cams_pane_g3

0xde36,	// (0x0007ebc3) linegrid_cams_pane_g4

0x817c,	// (0x00078f09) linegrid_cams_pane_g5

0x8185,	// (0x00078f12) linegrid_cams_pane_g6

0x1981,	// (0x0007270e) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x000800b8) linegrid_cams_pane_g

0xde3f,	// (0x0007ebcc) popup_clock_analogue_window

0xde3f,	// (0x0007ebcc) popup_clock_digital_window

0x13c0,	// (0x0007214d) popup_phob_thumbnail_window

0x1633,	// (0x000723c0) call_video_uplink_pane_g1

0xde48,	// (0x0007ebd5) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x000800c7) call_video_uplink_pane_g

0x194e,	// (0x000726db) video_uplink_pane

0xde50,	// (0x0007ebdd) mce_image_pane_g1

0x818e,	// (0x00078f1b) mce_image_pane_g2

0x8196,	// (0x00078f23) mce_image_pane_g3

0x819e,	// (0x00078f2b) mce_image_pane_g4

0x81a6,	// (0x00078f33) mce_image_pane_g5

0x0004,

0xf33f,	// (0x000800cc) mce_image_pane_g

0xde5a,	// (0x0007ebe7) control_top_pane_stacon_cp01_ParamLimits

0xde5a,	// (0x0007ebe7) control_top_pane_stacon_cp01

0xde6a,	// (0x0007ebf7) uni_indicator_pane_stacon_cp01_ParamLimits

0xde6a,	// (0x0007ebf7) uni_indicator_pane_stacon_cp01

0xde7b,	// (0x0007ec08) bg_popup_sub_pane_cp03

0xde85,	// (0x0007ec12) chi_dic_find_pane

0x81ae,	// (0x00078f3b) listscroll_chi_dic_pane

0xde8d,	// (0x0007ec1a) main_pane_chidic_g1

0xde95,	// (0x0007ec22) chi_dic_find_pane_t1

0xdea3,	// (0x0007ec30) find_chidic_pane

0xdeac,	// (0x0007ec39) chi_dic_list_pane_ParamLimits

0xdeac,	// (0x0007ec39) chi_dic_list_pane

0xdebd,	// (0x0007ec4a) scroll_pane_cp020

0xdec5,	// (0x0007ec52) find_chidic_pane_t1

0x13c0,	// (0x0007214d) input_focus_pane_cp06

0x81c0,	// (0x00078f4d) list_chi_dic_pane_ParamLimits

0x81c0,	// (0x00078f4d) list_chi_dic_pane

0x81d3,	// (0x00078f60) list_chi_dic_pane_t1_ParamLimits

0x81d3,	// (0x00078f60) list_chi_dic_pane_t1

0x13c0,	// (0x0007214d) list_highlight_pane_cp020

0xded4,	// (0x0007ec61) bg_cale_heading_pane_g1

0x81e6,	// (0x00078f73) bg_cale_heading_pane_g2

0x81ee,	// (0x00078f7b) bg_cale_heading_pane_g3

0x81f6,	// (0x00078f83) bg_cale_heading_pane_g4

0x81fe,	// (0x00078f8b) bg_cale_heading_pane_g5

0x8206,	// (0x00078f93) bg_cale_heading_pane_g6

0x820e,	// (0x00078f9b) bg_cale_heading_pane_g7

0x8216,	// (0x00078fa3) bg_cale_heading_pane_g8

0x821e,	// (0x00078fab) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x000800d7) bg_cale_heading_pane_g

0xded4,	// (0x0007ec61) bg_cale_side_pane_g1

0x8226,	// (0x00078fb3) bg_cale_side_pane_g2

0x822e,	// (0x00078fbb) bg_cale_side_pane_g3

0x8236,	// (0x00078fc3) bg_cale_side_pane_g4

0x823e,	// (0x00078fcb) bg_cale_side_pane_g5

0x8246,	// (0x00078fd3) bg_cale_side_pane_g6

0x824e,	// (0x00078fdb) bg_cale_side_pane_g7

0x8256,	// (0x00078fe3) bg_cale_side_pane_g8

0x825e,	// (0x00078feb) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x000800ea) bg_cale_side_pane_g

0x8266,	// (0x00078ff3) popup_call_status_window_ParamLimits

0x8266,	// (0x00078ff3) popup_call_status_window

0xdedc,	// (0x0007ec69) stacon_top_pane

0xdee4,	// (0x0007ec71) status_pane_ParamLimits

0xdee4,	// (0x0007ec71) status_pane

0xdefe,	// (0x0007ec8b) status_small_pane

0xdf06,	// (0x0007ec93) control_pane

0x13c0,	// (0x0007214d) stacon_bottom_pane

0xdf0e,	// (0x0007ec9b) list_single_mce_smart_pane_t1_ParamLimits

0xdf0e,	// (0x0007ec9b) list_single_mce_smart_pane_t1

0xdf21,	// (0x0007ecae) list_single_mce_smart_pane_t2_ParamLimits

0xdf21,	// (0x0007ecae) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x000800fd) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x000800fd) list_single_mce_smart_pane_t

0x8275,	// (0x00079002) compass_pane

0x827e,	// (0x0007900b) main_location2_pane_t1

0x8294,	// (0x00079021) main_location2_pane_t2

0x82aa,	// (0x00079037) main_location2_pane_t3

0x0003,

0xf375,	// (0x00080102) main_location2_pane_t

0xdf49,	// (0x0007ecd6) compass_pane_g1_ParamLimits

0xdf49,	// (0x0007ecd6) compass_pane_g1

0x82f2,	// (0x0007907f) compass_pane_t1

0x8301,	// (0x0007908e) compass_pane_t2

0x0005,

0xf37e,	// (0x0008010b) compass_pane_t

0x8348,	// (0x000790d5) text_secondary_cp61

0xdf97,	// (0x0007ed24) navi_pane_cams_g5

0xdfe3,	// (0x0007ed70) navi_pane_im_t1

0xdff1,	// (0x0007ed7e) navi_pane_mp_g1_ParamLimits

0xdff1,	// (0x0007ed7e) navi_pane_mp_g1

0xe005,	// (0x0007ed92) navi_pane_mp_g2_ParamLimits

0xe005,	// (0x0007ed92) navi_pane_mp_g2

0xe011,	// (0x0007ed9e) navi_pane_mp_g3_ParamLimits

0xe011,	// (0x0007ed9e) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0008011f) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0008011f) navi_pane_mp_g

0xe01d,	// (0x0007edaa) navi_pane_mp_t1

0xe02b,	// (0x0007edb8) navi_pane_mp_t2

0x0002,

0xf399,	// (0x00080126) navi_pane_mp_t

0xe096,	// (0x0007ee23) navi_pane_vt_g1

0xe01d,	// (0x0007edaa) navi_pane_vt_t1

0xe09e,	// (0x0007ee2b) navi_slider_pane

0x1992,	// (0x0007271f) zooming_pane

0xe0a6,	// (0x0007ee33) navi_slider_pane_g1

0x83ca,	// (0x00079157) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x0008012d) navi_slider_pane_g

0xe0ca,	// (0x0007ee57) aid_levels_zoom

0xe0d2,	// (0x0007ee5f) zooming_pane_g1

0xe0da,	// (0x0007ee67) zooming_pane_g2

0xe0da,	// (0x0007ee67) zooming_pane_g3

0x0002,

0xf3af,	// (0x0008013c) zooming_pane_g

0xe0e2,	// (0x0007ee6f) level_10_zoom

0xe0eb,	// (0x0007ee78) level_11_zoom

0xe0f4,	// (0x0007ee81) level_1_zoom

0xe0fd,	// (0x0007ee8a) level_2_zoom

0xe106,	// (0x0007ee93) level_3_zoom

0xe10f,	// (0x0007ee9c) level_4_zoom

0xe118,	// (0x0007eea5) level_5_zoom

0xe121,	// (0x0007eeae) level_6_zoom

0xe12a,	// (0x0007eeb7) level_7_zoom

0xe133,	// (0x0007eec0) level_8_zoom

0xe13c,	// (0x0007eec9) level_9_zoom

0xe14d,	// (0x0007eeda) popup_phob_thumbnail_window_g1

0xe155,	// (0x0007eee2) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x00080143) popup_phob_thumbnail_window_g

0x247c,	// (0x00073209) level_1_location

0x2484,	// (0x00073211) level_2_location

0x248c,	// (0x00073219) level_3_location

0x2494,	// (0x00073221) level_4_location

0x1992,	// (0x0007271f) level_5_location

0x83dc,	// (0x00079169) mce_icon_pane_g1

0x83e4,	// (0x00079171) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x00080148) mce_icon_pane_g

0x83ec,	// (0x00079179) main_mup_pane_g1_ParamLimits

0x83ec,	// (0x00079179) main_mup_pane_g1

0x16b1,	// (0x0007243e) main_mup_pane_g2_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g2

0x16b1,	// (0x0007243e) main_mup_pane_g3_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g3

0x16b1,	// (0x0007243e) main_mup_pane_g4_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g4

0x16b1,	// (0x0007243e) main_mup_pane_g5_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g5

0x16b1,	// (0x0007243e) main_mup_pane_g6_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g6

0x16b1,	// (0x0007243e) main_mup_pane_g7_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g7

0x16b1,	// (0x0007243e) main_mup_pane_g8_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g8

0x16b1,	// (0x0007243e) main_mup_pane_g9_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g9

0x16b1,	// (0x0007243e) main_mup_pane_g10_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g10

0x16b1,	// (0x0007243e) main_mup_pane_g11_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g11

0x16a3,	// (0x00072430) main_mup_pane_g12_ParamLimits

0x16a3,	// (0x00072430) main_mup_pane_g12

0x16b1,	// (0x0007243e) main_mup_pane_g13_ParamLimits

0x16b1,	// (0x0007243e) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0008014d) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0008014d) main_mup_pane_g

0x16bf,	// (0x0007244c) main_mup_pane_t1_ParamLimits

0x16bf,	// (0x0007244c) main_mup_pane_t1

0x16bf,	// (0x0007244c) main_mup_pane_t2_ParamLimits

0x16bf,	// (0x0007244c) main_mup_pane_t2

0x16bf,	// (0x0007244c) main_mup_pane_t3_ParamLimits

0x16bf,	// (0x0007244c) main_mup_pane_t3

0x1db6,	// (0x00072b43) main_mup_pane_t4_ParamLimits

0x1db6,	// (0x00072b43) main_mup_pane_t4

0x1db6,	// (0x00072b43) main_mup_pane_t5_ParamLimits

0x1db6,	// (0x00072b43) main_mup_pane_t5

0xe15d,	// (0x0007eeea) main_mup_pane_t6_ParamLimits

0xe15d,	// (0x0007eeea) main_mup_pane_t6

0x0005,

0xf3db,	// (0x00080168) main_mup_pane_t_ParamLimits

0xf3db,	// (0x00080168) main_mup_pane_t

0xe171,	// (0x0007eefe) mup_progress_pane_ParamLimits

0xe171,	// (0x0007eefe) mup_progress_pane

0x257e,	// (0x0007330b) mup_visualizer_pane_ParamLimits

0x257e,	// (0x0007330b) mup_visualizer_pane

0x257e,	// (0x0007330b) mup_volume_pane_ParamLimits

0x257e,	// (0x0007330b) mup_volume_pane

0x16a3,	// (0x00072430) mup_visualizer_pane_g1_ParamLimits

0x16a3,	// (0x00072430) mup_visualizer_pane_g1

0xe17f,	// (0x0007ef0c) mup_visualizer_pane_g2_ParamLimits

0xe17f,	// (0x0007ef0c) mup_visualizer_pane_g2

0x1695,	// (0x00072422) mup_visualizer_pane_g3_ParamLimits

0x1695,	// (0x00072422) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x00080175) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x00080175) mup_visualizer_pane_g

0x19f6,	// (0x00072783) mup_volume_pane_g1

0x19f6,	// (0x00072783) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) mup_volume_pane_g

0x19f6,	// (0x00072783) mup_progress_pane_g1

0x19f6,	// (0x00072783) mup_progress_pane_g2

0x19f6,	// (0x00072783) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x00080181) mup_progress_pane_g

0x13c0,	// (0x0007214d) bg_popup_window_pane_cp05

0xe18d,	// (0x0007ef1a) heading_pane_cp02_ParamLimits

0xe18d,	// (0x0007ef1a) heading_pane_cp02

0xe1a7,	// (0x0007ef34) list_popup_blid_pane

0xe1af,	// (0x0007ef3c) list_blid_sat_info_pane_ParamLimits

0xe1af,	// (0x0007ef3c) list_blid_sat_info_pane

0xe1c2,	// (0x0007ef4f) list_blid_sat_info_pane_g1

0xe1ca,	// (0x0007ef57) list_blid_sat_info_pane_t1

0x84cf,	// (0x0007925c) mup_equalizer_pane_ParamLimits

0x84cf,	// (0x0007925c) mup_equalizer_pane

0x84e8,	// (0x00079275) mup_equalizer_pane_cp1_ParamLimits

0x84e8,	// (0x00079275) mup_equalizer_pane_cp1

0x8501,	// (0x0007928e) mup_equalizer_pane_cp2_ParamLimits

0x8501,	// (0x0007928e) mup_equalizer_pane_cp2

0x851a,	// (0x000792a7) mup_equalizer_pane_cp3_ParamLimits

0x851a,	// (0x000792a7) mup_equalizer_pane_cp3

0x8533,	// (0x000792c0) mup_equalizer_pane_cp4_ParamLimits

0x8533,	// (0x000792c0) mup_equalizer_pane_cp4

0x854c,	// (0x000792d9) mup_equalizer_pane_cp5

0x855e,	// (0x000792eb) mup_equalizer_pane_cp6

0x8570,	// (0x000792fd) mup_equalizer_pane_cp7

0x235a,	// (0x000730e7) bg_popup_call_poc_act_pane_g9

0x2362,	// (0x000730ef) bg_popup_call_poc_act_pane_g10

0x236a,	// (0x000730f7) bg_popup_call_poc_act_pane_g11

0x000a,

0x161b,	// (0x000723a8) mup_scale_pane

0x1633,	// (0x000723c0) mup_scale_pane_g1

0xe1d8,	// (0x0007ef65) mup_scale_pane_g2

0x0006,

0xf410,	// (0x0008019d) mup_scale_pane_g

0xe1fc,	// (0x0007ef89) msg_data_pane

0xe204,	// (0x0007ef91) scroll_pane_cp017

0x8594,	// (0x00079321) bg_list_pane_cp04_ParamLimits

0x8594,	// (0x00079321) bg_list_pane_cp04

0xe20c,	// (0x0007ef99) msg_data_pane_g1

0x818e,	// (0x00078f1b) msg_data_pane_g2

0x8196,	// (0x00078f23) msg_data_pane_g3

0x85ac,	// (0x00079339) msg_data_pane_g4

0x81a6,	// (0x00078f33) msg_data_pane_g5

0x83dc,	// (0x00079169) msg_data_pane_g6

0x85b4,	// (0x00079341) msg_data_pane_g7

0x0006,

0xf41f,	// (0x000801ac) msg_data_pane_g

0x85bc,	// (0x00079349) msg_text_pane_ParamLimits

0x85bc,	// (0x00079349) msg_text_pane

0x85e5,	// (0x00079372) qrid_highlight_pane_cp011_ParamLimits

0x85e5,	// (0x00079372) qrid_highlight_pane_cp011

0x13c0,	// (0x0007214d) msg_body_pane

0x13c0,	// (0x0007214d) msg_header_pane

0xe21d,	// (0x0007efaa) input_focus_pane_cp07

0x1de0,	// (0x00072b6d) msg_header_pane_t1_ParamLimits

0x1de0,	// (0x00072b6d) msg_header_pane_t1

0x8607,	// (0x00079394) msg_header_pane_t2_ParamLimits

0x8607,	// (0x00079394) msg_header_pane_t2

0x0001,

0xf433,	// (0x000801c0) msg_header_pane_t_ParamLimits

0xf433,	// (0x000801c0) msg_header_pane_t

0xe232,	// (0x0007efbf) msg_body_pane_g1

0x861e,	// (0x000793ab) msg_body_pane_t1_ParamLimits

0x861e,	// (0x000793ab) msg_body_pane_t1

0x8649,	// (0x000793d6) msg_body_pane_t2_ParamLimits

0x8649,	// (0x000793d6) msg_body_pane_t2

0x865b,	// (0x000793e8) msg_body_pane_t3_ParamLimits

0x865b,	// (0x000793e8) msg_body_pane_t3

0x0002,

0xf438,	// (0x000801c5) msg_body_pane_t_ParamLimits

0xf438,	// (0x000801c5) msg_body_pane_t

0x86bb,	// (0x00079448) main_viewer_pane_g1_ParamLimits

0x86bb,	// (0x00079448) main_viewer_pane_g1

0x86c7,	// (0x00079454) main_viewer_pane_g2_ParamLimits

0x86c7,	// (0x00079454) main_viewer_pane_g2

0x86d3,	// (0x00079460) main_viewer_pane_g3_ParamLimits

0x86d3,	// (0x00079460) main_viewer_pane_g3

0x86e2,	// (0x0007946f) main_viewer_pane_g4_ParamLimits

0x86e2,	// (0x0007946f) main_viewer_pane_g4

0x86f1,	// (0x0007947e) main_viewer_pane_g5_ParamLimits

0x86f1,	// (0x0007947e) main_viewer_pane_g5

0x86f1,	// (0x0007947e) main_viewer_pane_g7_ParamLimits

0x86f1,	// (0x0007947e) main_viewer_pane_g7

0x8703,	// (0x00079490) main_viewer_pane_g8_ParamLimits

0x8703,	// (0x00079490) main_viewer_pane_g8

0x0007,

0xf448,	// (0x000801d5) main_viewer_pane_g_ParamLimits

0xf448,	// (0x000801d5) main_viewer_pane_g

0xe23a,	// (0x0007efc7) viewer_content_pane_ParamLimits

0xe23a,	// (0x0007efc7) viewer_content_pane

0x8733,	// (0x000794c0) main_postcard_pane_g1_ParamLimits

0x8733,	// (0x000794c0) main_postcard_pane_g1

0x873f,	// (0x000794cc) main_postcard_pane_g2_ParamLimits

0x873f,	// (0x000794cc) main_postcard_pane_g2

0x874b,	// (0x000794d8) main_postcard_pane_g3_ParamLimits

0x874b,	// (0x000794d8) main_postcard_pane_g3

0x0005,

0xf459,	// (0x000801e6) main_postcard_pane_g_ParamLimits

0xf459,	// (0x000801e6) main_postcard_pane_g

0x8757,	// (0x000794e4) main_postcard_pane_g4

0x254a,	// (0x000732d7) smil_status_volume_pane_g2

0x877b,	// (0x00079508) postcard_pane_ParamLimits

0x877b,	// (0x00079508) postcard_pane

0xdd35,	// (0x0007eac2) postcard_pane_g1_ParamLimits

0xdd35,	// (0x0007eac2) postcard_pane_g1

0x87ab,	// (0x00079538) postcard_pane_g2_ParamLimits

0x87ab,	// (0x00079538) postcard_pane_g2

0x87b7,	// (0x00079544) postcard_pane_g3_ParamLimits

0x87b7,	// (0x00079544) postcard_pane_g3

0xe248,	// (0x0007efd5) postcard_pane_g4_ParamLimits

0xe248,	// (0x0007efd5) postcard_pane_g4

0x87c3,	// (0x00079550) postcard_pane_g5_ParamLimits

0x87c3,	// (0x00079550) postcard_pane_g5

0x87cf,	// (0x0007955c) postcard_pane_g6_ParamLimits

0x87cf,	// (0x0007955c) postcard_pane_g6

0xe256,	// (0x0007efe3) postcard_pane_g7_ParamLimits

0xe256,	// (0x0007efe3) postcard_pane_g7

0x0006,

0xf466,	// (0x000801f3) postcard_pane_g_ParamLimits

0xf466,	// (0x000801f3) postcard_pane_g

0x87db,	// (0x00079568) main_mp2_pane_g1_ParamLimits

0x87db,	// (0x00079568) main_mp2_pane_g1

0x87e7,	// (0x00079574) main_mp2_pane_g2_ParamLimits

0x87e7,	// (0x00079574) main_mp2_pane_g2

0x87f3,	// (0x00079580) main_mp2_pane_g3_ParamLimits

0x87f3,	// (0x00079580) main_mp2_pane_g3

0x0002,

0xf475,	// (0x00080202) main_mp2_pane_g_ParamLimits

0xf475,	// (0x00080202) main_mp2_pane_g

0x87ff,	// (0x0007958c) main_mp2_pane_t1_ParamLimits

0x87ff,	// (0x0007958c) main_mp2_pane_t1

0x8814,	// (0x000795a1) main_mp2_pane_t2_ParamLimits

0x8814,	// (0x000795a1) main_mp2_pane_t2

0x8826,	// (0x000795b3) main_mp2_pane_t3_ParamLimits

0x8826,	// (0x000795b3) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x00080209) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x00080209) main_mp2_pane_t

0xe264,	// (0x0007eff1) pec_content_pane_ParamLimits

0xe264,	// (0x0007eff1) pec_content_pane

0x1ba2,	// (0x0007292f) scroll_pane_cp015

0xe276,	// (0x0007f003) pec_attribute_pane_ParamLimits

0xe276,	// (0x0007f003) pec_attribute_pane

0x8838,	// (0x000795c5) pec_content_pane_g1_ParamLimits

0x8838,	// (0x000795c5) pec_content_pane_g1

0xe286,	// (0x0007f013) pec_content_pane_t1_ParamLimits

0xe286,	// (0x0007f013) pec_content_pane_t1

0xe298,	// (0x0007f025) pec_content_pane_t2_ParamLimits

0xe298,	// (0x0007f025) pec_content_pane_t2

0x0001,

0xf483,	// (0x00080210) pec_content_pane_t_ParamLimits

0xf483,	// (0x00080210) pec_content_pane_t

0x8844,	// (0x000795d1) list_single_graphic_pane_cp01_ParamLimits

0x8844,	// (0x000795d1) list_single_graphic_pane_cp01

0x161b,	// (0x000723a8) bg_popup_sub_pane_cp04

0xe2aa,	// (0x0007f037) popup_mup_playback_window_g1

0xe2b6,	// (0x0007f043) popup_mup_playback_window_t1

0xe2cb,	// (0x0007f058) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x00080215) popup_mup_playback_window_t

0xe302,	// (0x0007f08f) main_image_pane_g1_ParamLimits

0xe302,	// (0x0007f08f) main_image_pane_g1

0xe345,	// (0x0007f0d2) scroll_pane_cp018_ParamLimits

0xe345,	// (0x0007f0d2) scroll_pane_cp018

0xe35d,	// (0x0007f0ea) scroll_pane_cp016_ParamLimits

0xe35d,	// (0x0007f0ea) scroll_pane_cp016

0x88c9,	// (0x00079656) smil2_image_pane_ParamLimits

0x88c9,	// (0x00079656) smil2_image_pane

0x88f1,	// (0x0007967e) smil2_root_pane_ParamLimits

0x88f1,	// (0x0007967e) smil2_root_pane

0x891d,	// (0x000796aa) smil2_text_pane_ParamLimits

0x891d,	// (0x000796aa) smil2_text_pane

0x13c0,	// (0x0007214d) bg_list_pane_cp06

0xe391,	// (0x0007f11e) grid_radio_pane

0x13c0,	// (0x0007214d) bg_popup_window_pane_cp06

0xe399,	// (0x0007f126) main_fmradio_pane_t1

0xdd96,	// (0x0007eb23) heading_pane_cp04

0xe3a7,	// (0x0007f134) main_fmradio_pane_t2

0x23b2,	// (0x0007313f) popup_cale_lunar_info_window_g1

0xe3b5,	// (0x0007f142) main_fmradio_pane_t3

0x23ba,	// (0x00073147) popup_cale_lunar_info_window_g2

0xe3c3,	// (0x0007f150) main_fmradio_pane_t4

0x0001,

0xe3d1,	// (0x0007f15e) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x00080308) popup_cale_lunar_info_window_g

0xf49d,	// (0x0008022a) main_fmradio_pane_t

0xe3df,	// (0x0007f16c) wait_bar_pane_cp03

0xdad0,	// (0x0007e85d) cell_fmradio_pane_ParamLimits

0xdad0,	// (0x0007e85d) cell_fmradio_pane

0xe256,	// (0x0007efe3) cell_fmradio_pane_g1_ParamLimits

0xe256,	// (0x0007efe3) cell_fmradio_pane_g1

0x13c0,	// (0x0007214d) grid_highlight_pane_cp011

0xe3e7,	// (0x0007f174) poc_content_pane_ParamLimits

0xe3e7,	// (0x0007f174) poc_content_pane

0xe3fa,	// (0x0007f187) scroll_pane_cp019

0x8951,	// (0x000796de) popup_call_poc_act_window_ParamLimits

0x8951,	// (0x000796de) popup_call_poc_act_window

0x895e,	// (0x000796eb) popup_call_poc_inact_window_ParamLimits

0x895e,	// (0x000796eb) popup_call_poc_inact_window

0xf53f,	// (0x000802cc) bg_popup_call_poc_act_pane_g

0x2372,	// (0x000730ff) bg_popup_call_poc_inact_pane_g1

0x237a,	// (0x00073107) bg_popup_call_poc_inact_pane_g2

0xe402,	// (0x0007f18f) popup_call_poc_act_window_g2

0x2382,	// (0x0007310f) bg_popup_call_poc_inact_pane_g3

0x2332,	// (0x000730bf) bg_popup_call_poc_inact_pane_g4

0x238a,	// (0x00073117) bg_popup_call_poc_inact_pane_g5

0xe40a,	// (0x0007f197) popup_call_poc_act_window_t1_ParamLimits

0xe40a,	// (0x0007f197) popup_call_poc_act_window_t1

0xe432,	// (0x0007f1bf) popup_call_poc_act_window_t2_ParamLimits

0xe432,	// (0x0007f1bf) popup_call_poc_act_window_t2

0xe45a,	// (0x0007f1e7) popup_call_poc_act_window_t3_ParamLimits

0xe45a,	// (0x0007f1e7) popup_call_poc_act_window_t3

0xe482,	// (0x0007f20f) popup_call_poc_act_window_t4_ParamLimits

0xe482,	// (0x0007f20f) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x00080235) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x00080235) popup_call_poc_act_window_t

0x2392,	// (0x0007311f) bg_popup_call_poc_inact_pane_g6

0x239a,	// (0x00073127) bg_popup_call_poc_inact_pane_g7

0x23a2,	// (0x0007312f) bg_popup_call_poc_inact_pane_g8

0xe494,	// (0x0007f221) popup_call_poc_inact_window_g2

0x23aa,	// (0x00073137) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000802e3) bg_popup_call_poc_inact_pane_g

0xe49c,	// (0x0007f229) popup_call_poc_inact_window_t1_ParamLimits

0xe49c,	// (0x0007f229) popup_call_poc_inact_window_t1

0xe4b1,	// (0x0007f23e) popup_call_poc_inact_window_t2_ParamLimits

0xe4b1,	// (0x0007f23e) popup_call_poc_inact_window_t2

0xe4c6,	// (0x0007f253) popup_call_poc_inact_window_t3_ParamLimits

0xe4c6,	// (0x0007f253) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x0008023e) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x0008023e) popup_call_poc_inact_window_t

0x24eb,	// (0x00073278) context_pane_ParamLimits

0x8eb6,	// (0x00079c43) signal_pane_ParamLimits

0x1992,	// (0x0007271f) main_call2_pane

0x8e38,	// (0x00079bc5) popup_phob_thumbnail2_window_ParamLimits

0x8e38,	// (0x00079bc5) popup_phob_thumbnail2_window

0x866d,	// (0x000793fa) aid_hotspot_pointer_arrow_pane

0x8675,	// (0x00079402) aid_hotspot_pointer_hand_pane

0x8c0d,	// (0x0007999a) phob_pre_status_pane_g5

0x1dca,	// (0x00072b57) cams_zoom_pane_ParamLimits

0x6e7f,	// (0x00077c0c) image_vga_pane_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g1_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g2_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g3_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g4_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g5_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g6_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0007ff52) main_camera_pane_g_ParamLimits

0x1db6,	// (0x00072b43) main_camera_pane_t1_ParamLimits

0x1db6,	// (0x00072b43) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0007ff63) main_camera_pane_t_ParamLimits

0x161b,	// (0x000723a8) bg_popup_preview_window_pane_cp01_ParamLimits

0x161b,	// (0x000723a8) bg_popup_preview_window_pane_cp01

0xe4db,	// (0x0007f268) popup_phob_thumbnail2_window_g1_ParamLimits

0xe4db,	// (0x0007f268) popup_phob_thumbnail2_window_g1

0x13c0,	// (0x0007214d) call2_cli_visual_pane

0x897a,	// (0x00079707) popup_call2_audio_conf_window_ParamLimits

0x897a,	// (0x00079707) popup_call2_audio_conf_window

0x898d,	// (0x0007971a) popup_call2_audio_first_window_ParamLimits

0x898d,	// (0x0007971a) popup_call2_audio_first_window

0x8a09,	// (0x00079796) popup_call2_audio_in_window_ParamLimits

0x8a09,	// (0x00079796) popup_call2_audio_in_window

0x8a39,	// (0x000797c6) popup_call2_audio_out_window_ParamLimits

0x8a39,	// (0x000797c6) popup_call2_audio_out_window

0x8a85,	// (0x00079812) popup_call2_audio_second_window_ParamLimits

0x8a85,	// (0x00079812) popup_call2_audio_second_window

0x8ad1,	// (0x0007985e) popup_call2_audio_wait_window_ParamLimits

0x8ad1,	// (0x0007985e) popup_call2_audio_wait_window

0x13c0,	// (0x0007214d) bg_popup_call2_act_pane_cp03

0xe4e7,	// (0x0007f274) list_conf_pane_cp

0xe4ef,	// (0x0007f27c) popup_call2_audio_conf_window_t1

0xddf3,	// (0x0007eb80) list_single_graphic_popup_conf2_pane_ParamLimits

0xddf3,	// (0x0007eb80) list_single_graphic_popup_conf2_pane

0xde06,	// (0x0007eb93) list_highlight_pane_cp04

0xe4fd,	// (0x0007f28a) list_single_graphic_popup_conf2_pane_g1

0xde17,	// (0x0007eba4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x00080245) list_single_graphic_popup_conf2_pane_g

0xe505,	// (0x0007f292) list_single_graphic_popup_conf2_pane_t1

0xe513,	// (0x0007f2a0) bg_popup_call2_act_pane_cp01_ParamLimits

0xe513,	// (0x0007f2a0) bg_popup_call2_act_pane_cp01

0xe59d,	// (0x0007f32a) call_type_pane_cp05_ParamLimits

0xe59d,	// (0x0007f32a) call_type_pane_cp05

0xe5f1,	// (0x0007f37e) popup_call2_audio_second_window_g1_ParamLimits

0xe5f1,	// (0x0007f37e) popup_call2_audio_second_window_g1

0xe645,	// (0x0007f3d2) popup_call2_audio_second_window_g2_ParamLimits

0xe645,	// (0x0007f3d2) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0008024a) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0008024a) popup_call2_audio_second_window_g

0xe6aa,	// (0x0007f437) popup_call2_audio_second_window_t1_ParamLimits

0xe6aa,	// (0x0007f437) popup_call2_audio_second_window_t1

0xe765,	// (0x0007f4f2) popup_call2_audio_second_window_t2_ParamLimits

0xe765,	// (0x0007f4f2) popup_call2_audio_second_window_t2

0xe7b8,	// (0x0007f545) popup_call2_audio_second_window_t3_ParamLimits

0xe7b8,	// (0x0007f545) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x00080251) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x00080251) popup_call2_audio_second_window_t

0x13c0,	// (0x0007214d) bg_popup_call2_in_pane_cp02

0xe8ab,	// (0x0007f638) call_type_pane_cp04

0xe8b3,	// (0x0007f640) popup_call2_audio_wait_window_g1

0xe8bb,	// (0x0007f648) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0008025a) popup_call2_audio_wait_window_g

0xe8c3,	// (0x0007f650) popup_call2_audio_wait_window_t3

0xe8d1,	// (0x0007f65e) bg_popup_call2_act_pane_ParamLimits

0xe8d1,	// (0x0007f65e) bg_popup_call2_act_pane

0xe991,	// (0x0007f71e) call_type_pane_cp03_ParamLimits

0xe991,	// (0x0007f71e) call_type_pane_cp03

0xe9f5,	// (0x0007f782) popup_call2_audio_first_window_g1_ParamLimits

0xe9f5,	// (0x0007f782) popup_call2_audio_first_window_g1

0xea65,	// (0x0007f7f2) popup_call2_audio_first_window_g2_ParamLimits

0xea65,	// (0x0007f7f2) popup_call2_audio_first_window_g2

0xdd35,	// (0x0007eac2) popup_call2_audio_first_window_g3_ParamLimits

0xdd35,	// (0x0007eac2) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x0008025f) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x0008025f) popup_call2_audio_first_window_g

0xeb43,	// (0x0007f8d0) popup_call2_audio_first_window_t1_ParamLimits

0xeb43,	// (0x0007f8d0) popup_call2_audio_first_window_t1

0xec46,	// (0x0007f9d3) popup_call2_audio_first_window_t4_ParamLimits

0xec46,	// (0x0007f9d3) popup_call2_audio_first_window_t4

0xed29,	// (0x0007fab6) popup_call2_audio_first_window_t5_ParamLimits

0xed29,	// (0x0007fab6) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0008026a) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0008026a) popup_call2_audio_first_window_t

0x1613,	// (0x000723a0) bg_popup_call2_act_pane_g1

0x23c2,	// (0x0007314f) popup_cale_lunar_info_window_t1

0x23d0,	// (0x0007315d) popup_cale_lunar_info_window_t2

0x23de,	// (0x0007316b) popup_cale_lunar_info_window_t3

0x13c0,	// (0x0007214d) bg_popup_call2_bubble_pane

0x1dfe,	// (0x00072b8b) bg_popup_call2_in_pane_cp01_ParamLimits

0x1dfe,	// (0x00072b8b) bg_popup_call2_in_pane_cp01

0xe8ab,	// (0x0007f638) call_type_pane_cp02

0x1e46,	// (0x00072bd3) popup_call2_audio_out_window_g1_ParamLimits

0x1e46,	// (0x00072bd3) popup_call2_audio_out_window_g1

0x1e72,	// (0x00072bff) popup_call2_audio_out_window_g2_ParamLimits

0x1e72,	// (0x00072bff) popup_call2_audio_out_window_g2

0x1e9a,	// (0x00072c27) popup_call2_audio_out_window_g3_ParamLimits

0x1e9a,	// (0x00072c27) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x00080273) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x00080273) popup_call2_audio_out_window_g

0x1ed5,	// (0x00072c62) popup_call2_audio_out_window_t1_ParamLimits

0x1ed5,	// (0x00072c62) popup_call2_audio_out_window_t1

0x1f34,	// (0x00072cc1) popup_call2_audio_out_window_t2_ParamLimits

0x1f34,	// (0x00072cc1) popup_call2_audio_out_window_t2

0x1f88,	// (0x00072d15) popup_call2_audio_out_window_t3_ParamLimits

0x1f88,	// (0x00072d15) popup_call2_audio_out_window_t3

0x1f9e,	// (0x00072d2b) popup_call2_audio_out_window_t4_ParamLimits

0x1f9e,	// (0x00072d2b) popup_call2_audio_out_window_t4

0x1fb4,	// (0x00072d41) popup_call2_audio_out_window_t5_ParamLimits

0x1fb4,	// (0x00072d41) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x0008027c) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x0008027c) popup_call2_audio_out_window_t

0x2018,	// (0x00072da5) bg_popup_call2_in_pane_ParamLimits

0x2018,	// (0x00072da5) bg_popup_call2_in_pane

0x2074,	// (0x00072e01) popup_call2_audio_in_window_g1_ParamLimits

0x2074,	// (0x00072e01) popup_call2_audio_in_window_g1

0x20ac,	// (0x00072e39) popup_call2_audio_in_window_g2_ParamLimits

0x20ac,	// (0x00072e39) popup_call2_audio_in_window_g2

0x20e4,	// (0x00072e71) popup_call2_audio_in_window_g3_ParamLimits

0x20e4,	// (0x00072e71) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00080289) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00080289) popup_call2_audio_in_window_g

0x213c,	// (0x00072ec9) popup_call2_audio_in_window_t1_ParamLimits

0x213c,	// (0x00072ec9) popup_call2_audio_in_window_t1

0x21bc,	// (0x00072f49) popup_call2_audio_in_window_t2_ParamLimits

0x21bc,	// (0x00072f49) popup_call2_audio_in_window_t2

0x223c,	// (0x00072fc9) popup_call2_audio_in_window_t3_ParamLimits

0x223c,	// (0x00072fc9) popup_call2_audio_in_window_t3

0x2256,	// (0x00072fe3) popup_call2_audio_in_window_t4_ParamLimits

0x2256,	// (0x00072fe3) popup_call2_audio_in_window_t4

0x2268,	// (0x00072ff5) popup_call2_audio_in_window_t5_ParamLimits

0x2268,	// (0x00072ff5) popup_call2_audio_in_window_t5

0x227d,	// (0x0007300a) popup_call2_audio_in_window_t6_ParamLimits

0x227d,	// (0x0007300a) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x00080292) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x00080292) popup_call2_audio_in_window_t

0x1613,	// (0x000723a0) bg_popup_call2_in_pane_g1

0x23ec,	// (0x00073179) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x0008030d) popup_cale_lunar_info_window_t

0x161b,	// (0x000723a8) bg_popup_call2_rect_pane_ParamLimits

0x161b,	// (0x000723a8) bg_popup_call2_rect_pane

0x13c0,	// (0x0007214d) call2_cli_visual_graphic_pane

0x13c0,	// (0x0007214d) call2_cli_visual_text_pane

0x8f0b,	// (0x00079c98) smil_status_volume_pane_g3

0x0002,

0x1633,	// (0x000723c0) call2_cli_visual_graphic_pane_g1

0x1633,	// (0x000723c0) call2_cli_visual_graphic_pane_g2

0x1633,	// (0x000723c0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0008029f) call2_cli_visual_graphic_pane_g

0x2292,	// (0x0007301f) bg_popup_call2_rect_pane_g1

0x186e,	// (0x000725fb) bg_popup_call2_rect_pane_g2

0x229a,	// (0x00073027) bg_popup_call2_rect_pane_g3

0x22a2,	// (0x0007302f) bg_popup_call2_rect_pane_g4

0x22aa,	// (0x00073037) bg_popup_call2_rect_pane_g5

0x22b2,	// (0x0007303f) bg_popup_call2_rect_pane_g6

0x22ba,	// (0x00073047) bg_popup_call2_rect_pane_g7

0x22c2,	// (0x0007304f) bg_popup_call2_rect_pane_g8

0x22ca,	// (0x00073057) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x000802a6) bg_popup_call2_rect_pane_g

0x22d2,	// (0x0007305f) bg_popup_call2_bubble_pane_g1

0x22da,	// (0x00073067) bg_popup_call2_bubble_pane_g2

0x22e2,	// (0x0007306f) bg_popup_call2_bubble_pane_g3

0x22ea,	// (0x00073077) bg_popup_call2_bubble_pane_g4

0x22f2,	// (0x0007307f) bg_popup_call2_bubble_pane_g5

0x22fa,	// (0x00073087) bg_popup_call2_bubble_pane_g6

0x2302,	// (0x0007308f) bg_popup_call2_bubble_pane_g7

0x230a,	// (0x00073097) bg_popup_call2_bubble_pane_g8

0x2312,	// (0x0007309f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x000802b9) bg_popup_call2_bubble_pane_g

0x688f,	// (0x0007761c) aid_cale_week_size_cell_pane

0x6e8c,	// (0x00077c19) aid_cams_cif_uncrop_pane_ParamLimits

0x6e8c,	// (0x00077c19) aid_cams_cif_uncrop_pane

0x6fd7,	// (0x00077d64) aid_cams_size_cell_ParamLimits

0x6fd7,	// (0x00077d64) aid_cams_size_cell

0x6fe3,	// (0x00077d70) grid_cams_pane_ParamLimits

0x6fef,	// (0x00077d7c) linegrid_cams_pane_ParamLimits

0x70ae,	// (0x00077e3b) call_video_pane_t1

0x70cb,	// (0x00077e58) call_video_pane_t2

0x0001,

0xf222,	// (0x0007ffaf) call_video_pane_t

0x74ad,	// (0x0007823a) aid_cale_month_size_cell_pane_ParamLimits

0x74ad,	// (0x0007823a) aid_cale_month_size_cell_pane

0xf5c4,	// (0x00080351) smil_status_volume_pane_g

0x8f18,	// (0x00079ca5) volume_smil_pane_ParamLimits

0x61fb,	// (0x00076f88) aid_popup2_width_pane

0x679b,	// (0x00077528) cell_qdial_pane_g4_ParamLimits

0x679b,	// (0x00077528) cell_qdial_pane_g4

0x82d2,	// (0x0007905f) aid_blid_cardinal_pane_ParamLimits

0x82de,	// (0x0007906b) aid_blid_destination_pane_ParamLimits

0x82de,	// (0x0007906b) aid_blid_destination_pane

0x161b,	// (0x000723a8) bg_popup_call_poc_act_pane_ParamLimits

0x161b,	// (0x000723a8) bg_popup_call_poc_act_pane

0x161b,	// (0x000723a8) bg_popup_call_poc_inact_pane_ParamLimits

0x161b,	// (0x000723a8) bg_popup_call_poc_inact_pane

0x231a,	// (0x000730a7) bg_popup_call_poc_act_pane_g1

0x2322,	// (0x000730af) bg_popup_call_poc_act_pane_g2

0x232a,	// (0x000730b7) bg_popup_call_poc_act_pane_g3

0x2332,	// (0x000730bf) bg_popup_call_poc_act_pane_g4

0x233a,	// (0x000730c7) bg_popup_call_poc_act_pane_g5

0x2342,	// (0x000730cf) bg_popup_call_poc_act_pane_g6

0x234a,	// (0x000730d7) bg_popup_call_poc_act_pane_g7

0x2352,	// (0x000730df) bg_popup_call_poc_act_pane_g8

0x13c0,	// (0x0007214d) main_usb_pane

0x8d97,	// (0x00079b24) popup_cale_lunar_info_window

0x7350,	// (0x000780dd) im_reading_pane_t1_ParamLimits

0x1aeb,	// (0x00072878) list_im_pane_ParamLimits

0x1afc,	// (0x00072889) scroll_pane_cp07_ParamLimits

0x13c0,	// (0x0007214d) grid_highlight_pane_cp012

0x161b,	// (0x000723a8) mup_scale_pane_ParamLimits

0xdd35,	// (0x0007eac2) main_usb_pane_g1_ParamLimits

0xdd35,	// (0x0007eac2) main_usb_pane_g1

0x8b32,	// (0x000798bf) main_usb_pane_g2_ParamLimits

0x8b32,	// (0x000798bf) main_usb_pane_g2

0x0001,

0xf569,	// (0x000802f6) main_usb_pane_g_ParamLimits

0xf569,	// (0x000802f6) main_usb_pane_g

0x8b3e,	// (0x000798cb) main_usb_pane_t1_ParamLimits

0x8b3e,	// (0x000798cb) main_usb_pane_t1

0x8b50,	// (0x000798dd) main_usb_pane_t2_ParamLimits

0x8b50,	// (0x000798dd) main_usb_pane_t2

0x8b62,	// (0x000798ef) main_usb_pane_t3_ParamLimits

0x8b62,	// (0x000798ef) main_usb_pane_t3

0x8b74,	// (0x00079901) main_usb_pane_t4_ParamLimits

0x8b74,	// (0x00079901) main_usb_pane_t4

0x8b86,	// (0x00079913) main_usb_pane_t5_ParamLimits

0x8b86,	// (0x00079913) main_usb_pane_t5

0x8b98,	// (0x00079925) main_usb_pane_t6_ParamLimits

0x8b98,	// (0x00079925) main_usb_pane_t6

0x0005,

0xf56e,	// (0x000802fb) main_usb_pane_t_ParamLimits

0xdf40,	// (0x0007eccd) aid_text_placing

0x827e,	// (0x0007900b) main_location2_pane_t1_ParamLimits

0x8294,	// (0x00079021) main_location2_pane_t2_ParamLimits

0x82aa,	// (0x00079037) main_location2_pane_t3_ParamLimits

0x82c0,	// (0x0007904d) main_location2_pane_t4_ParamLimits

0x82c0,	// (0x0007904d) main_location2_pane_t4

0xf375,	// (0x00080102) main_location2_pane_t_ParamLimits

0x1656,	// (0x000723e3) find_pinb_pane_g2_ParamLimits

0x1656,	// (0x000723e3) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0007fe67) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0007fe67) find_pinb_pane_g

0x1662,	// (0x000723ef) find_pinb_pane_t1_ParamLimits

0x1674,	// (0x00072401) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0007fe6c) find_pinb_pane_t_ParamLimits

0x13c0,	// (0x0007214d) main_call3_pane

0x7851,	// (0x000785de) cale_month_day_heading_pane_t1_ParamLimits

0x78d7,	// (0x00078664) cale_month_day_heading_pane_t2_ParamLimits

0x7968,	// (0x000786f5) cale_month_day_heading_pane_t3_ParamLimits

0x79f9,	// (0x00078786) cale_month_day_heading_pane_t4_ParamLimits

0x7a8a,	// (0x00078817) cale_month_day_heading_pane_t5_ParamLimits

0x7b1b,	// (0x000788a8) cale_month_day_heading_pane_t6_ParamLimits

0x7bac,	// (0x00078939) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0007ffe7) cale_month_day_heading_pane_t_ParamLimits

0x7ecc,	// (0x00078c59) smil_status_volume_pane

0x8793,	// (0x00079520) postcard_address_pane_ParamLimits

0x8793,	// (0x00079520) postcard_address_pane

0x879f,	// (0x0007952c) postcard_message_pane_ParamLimits

0x879f,	// (0x0007952c) postcard_message_pane

0x8b0e,	// (0x0007989b) call2_cli_visual_pane_t1_ParamLimits

0x8b0e,	// (0x0007989b) call2_cli_visual_pane_t1

0x9069,	// (0x00079df6) postcard_message_pane_t1_ParamLimits

0x9069,	// (0x00079df6) postcard_message_pane_t1

0x9052,	// (0x00079ddf) postcard_address_pane_t1_ParamLimits

0x9052,	// (0x00079ddf) postcard_address_pane_t1

0x9045,	// (0x00079dd2) popup_call3_audio_in_window_ParamLimits

0x9045,	// (0x00079dd2) popup_call3_audio_in_window

0x8f2d,	// (0x00079cba) bg_popup_call3_in_pane_ParamLimits

0x8f2d,	// (0x00079cba) bg_popup_call3_in_pane

0x8f8b,	// (0x00079d18) popup_call3_audio_in_window_g1_ParamLimits

0x8f8b,	// (0x00079d18) popup_call3_audio_in_window_g1

0x8fa3,	// (0x00079d30) popup_call3_audio_in_window_g2_ParamLimits

0x8fa3,	// (0x00079d30) popup_call3_audio_in_window_g2

0x8fbb,	// (0x00079d48) popup_call3_audio_in_window_g3_ParamLimits

0x8fbb,	// (0x00079d48) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x00080358) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x00080358) popup_call3_audio_in_window_g

0x8fe3,	// (0x00079d70) popup_call3_audio_in_window_t1_ParamLimits

0x8fe3,	// (0x00079d70) popup_call3_audio_in_window_t1

0x900b,	// (0x00079d98) popup_call3_audio_in_window_t2_ParamLimits

0x900b,	// (0x00079d98) popup_call3_audio_in_window_t2

0x9033,	// (0x00079dc0) popup_call3_audio_in_window_t3_ParamLimits

0x9033,	// (0x00079dc0) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x00080361) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x00080361) popup_call3_audio_in_window_t

0x1992,	// (0x0007271f) bg_popup_call3_rect_pane

0x2292,	// (0x0007301f) bg_popup_call3_rect_pane_g1

0x186e,	// (0x000725fb) bg_popup_call3_rect_pane_g2

0x229a,	// (0x00073027) bg_popup_call3_rect_pane_g3

0x22a2,	// (0x0007302f) bg_popup_call3_rect_pane_g4

0x22aa,	// (0x00073037) bg_popup_call3_rect_pane_g5

0x22b2,	// (0x0007303f) bg_popup_call3_rect_pane_g6

0x22ba,	// (0x00073047) bg_popup_call3_rect_pane_g7

0x0f54,	// (0x00071ce1) mup_visualizer_osc_pane

0x0f54,	// (0x00071ce1) mup_visualizer_spec_pane

0x8f4d,	// (0x00079cda) call3_video_qcif_pane_ParamLimits

0x8f4d,	// (0x00079cda) call3_video_qcif_pane

0x8f5d,	// (0x00079cea) call3_video_qcif_uncrop_pane_ParamLimits

0x8f5d,	// (0x00079cea) call3_video_qcif_uncrop_pane

0x8f69,	// (0x00079cf6) call3_video_subqcif_pane_ParamLimits

0x8f69,	// (0x00079cf6) call3_video_subqcif_pane

0x8f7b,	// (0x00079d08) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f7b,	// (0x00079d08) call3_video_subqcif_uncrop_pane

0x8fd3,	// (0x00079d60) popup_call3_audio_in_window_g4_ParamLimits

0x8fd3,	// (0x00079d60) popup_call3_audio_in_window_g4

0x0f54,	// (0x00071ce1) mup_spec_half_pane

0x0f54,	// (0x00071ce1) mup_spec_half_pane_cp

0x0f54,	// (0x00071ce1) mup_osc_middle_pane

0x19f6,	// (0x00072783) mup_visualizer_osc_pane_g1

0x2538,	// (0x000732c5) mup_spec_bar_pane_ParamLimits

0x2538,	// (0x000732c5) mup_spec_bar_pane

0x19f6,	// (0x00072783) mup_spec_bar_pane_g1

0x19f6,	// (0x00072783) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) mup_spec_bar_pane_g

0x688f,	// (0x0007761c) aid_cale_week_size_cell_pane_ParamLimits

0x68a4,	// (0x00077631) bg_cale_heading_pane_ParamLimits

0x18f4,	// (0x00072681) bg_cale_pane_cp01_ParamLimits

0x68bc,	// (0x00077649) cale_week_corner_pane_ParamLimits

0x68d6,	// (0x00077663) cale_week_day_heading_pane_ParamLimits

0x68ee,	// (0x0007767b) cale_week_scroll_pane_g1_ParamLimits

0x6901,	// (0x0007768e) cale_week_scroll_pane_g2_ParamLimits

0x6914,	// (0x000776a1) cale_week_scroll_pane_g3_ParamLimits

0x6927,	// (0x000776b4) cale_week_scroll_pane_g4_ParamLimits

0x693a,	// (0x000776c7) cale_week_scroll_pane_g5_ParamLimits

0x694d,	// (0x000776da) cale_week_scroll_pane_g6_ParamLimits

0x6960,	// (0x000776ed) cale_week_scroll_pane_g7_ParamLimits

0x6973,	// (0x00077700) cale_week_scroll_pane_g8_ParamLimits

0x6986,	// (0x00077713) cale_week_scroll_pane_g9_ParamLimits

0x6999,	// (0x00077726) cale_week_scroll_pane_g10_ParamLimits

0x69ac,	// (0x00077739) cale_week_scroll_pane_g11_ParamLimits

0x69bf,	// (0x0007774c) cale_week_scroll_pane_g12_ParamLimits

0x69d2,	// (0x0007775f) cale_week_scroll_pane_g13_ParamLimits

0x69e5,	// (0x00077772) cale_week_scroll_pane_g14_ParamLimits

0x69f8,	// (0x00077785) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0007fef8) cale_week_scroll_pane_g_ParamLimits

0x6a1e,	// (0x000777ab) cale_week_time_pane_ParamLimits

0x6a31,	// (0x000777be) grid_cale_week_pane_ParamLimits

0x1911,	// (0x0007269e) listscroll_cale_week_pane_t1

0x1923,	// (0x000726b0) scroll_pane_cp08_ParamLimits

0x7502,	// (0x0007828f) cale_month_corner_pane_ParamLimits

0x1d2c,	// (0x00072ab9) cale_month_pane_t1

0x7818,	// (0x000785a5) cale_month_week_pane_ParamLimits

0xdd35,	// (0x0007eac2) popup_call_status_window_g1_ParamLimits

0x80b5,	// (0x00078e42) popup_call_status_window_g2_ParamLimits

0x80c1,	// (0x00078e4e) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00080089) popup_call_status_window_g_ParamLimits

0xdd86,	// (0x0007eb13) aid_call2_pane

0x85fb,	// (0x00079388) msg_header_pane_g1

0x8793,	// (0x00079520) postcard_address2_pane_ParamLimits

0x8793,	// (0x00079520) postcard_address2_pane

0x879f,	// (0x0007952c) postcard_message2_pane_ParamLimits

0x879f,	// (0x0007952c) postcard_message2_pane

0x8ec2,	// (0x00079c4f) message2_row_pane_ParamLimits

0x8ec2,	// (0x00079c4f) message2_row_pane

0x8eda,	// (0x00079c67) address2_row_pane_ParamLimits

0x8eda,	// (0x00079c67) address2_row_pane

0x2506,	// (0x00073293) postcard_message2_row_pane_g1

0x250e,	// (0x0007329b) postcard_message2_row_pane_t1

0x2506,	// (0x00073293) address2_row_pane_g1

0x250e,	// (0x0007329b) address2_row_pane_t1

0x1df6,	// (0x00072b83) aid_size_cell_vorec

0x13c0,	// (0x0007214d) main_rss_pane

0x8eed,	// (0x00079c7a) rss_list_single_pane_ParamLimits

0x8eed,	// (0x00079c7a) rss_list_single_pane

0x251c,	// (0x000732a9) rss_list_single_pane_t1

0x252a,	// (0x000732b7) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x0008034c) rss_list_single_pane_t

0x13c0,	// (0x0007214d) main_camera2_pane

0x13c0,	// (0x0007214d) main_video2_pane

0x6437,	// (0x000771c4) cams_zoom_pane_cp2_ParamLimits

0x6437,	// (0x000771c4) cams_zoom_pane_cp2

0x6437,	// (0x000771c4) image2_vga_pane_ParamLimits

0x6437,	// (0x000771c4) image2_vga_pane

0x90ba,	// (0x00079e47) main_camera2_pane_g1_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g1

0x90ba,	// (0x00079e47) main_camera2_pane_g2_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g2

0x90ba,	// (0x00079e47) main_camera2_pane_g3_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g3

0x90ba,	// (0x00079e47) main_camera2_pane_g4_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g4

0x90ba,	// (0x00079e47) main_camera2_pane_g5_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g5

0x90ba,	// (0x00079e47) main_camera2_pane_g6_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g6

0x90ba,	// (0x00079e47) main_camera2_pane_g7_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g7

0x90ba,	// (0x00079e47) main_camera2_pane_g8_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x00080368) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x00080368) main_camera2_pane_g

0x90c8,	// (0x00079e55) main_camera2_pane_t1_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t1

0x90c8,	// (0x00079e55) main_camera2_pane_t2_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t2

0x90c8,	// (0x00079e55) main_camera2_pane_t3_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t3

0x90c8,	// (0x00079e55) main_camera2_pane_t4_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0008037b) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0008037b) main_camera2_pane_t

0x90f0,	// (0x00079e7d) cams_zoom_pane_cp4_ParamLimits

0x90f0,	// (0x00079e7d) cams_zoom_pane_cp4

0x8d46,	// (0x00079ad3) image2_cif_pane_ParamLimits

0x8d46,	// (0x00079ad3) image2_cif_pane

0x6437,	// (0x000771c4) image2_subqcif_pane_ParamLimits

0x6437,	// (0x000771c4) image2_subqcif_pane

0x90fe,	// (0x00079e8b) main_video2_pane_g1_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g1

0x90fe,	// (0x00079e8b) main_video2_pane_g2_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g2

0x90fe,	// (0x00079e8b) main_video2_pane_g3_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g3

0x90fe,	// (0x00079e8b) main_video2_pane_g4_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g4

0x90fe,	// (0x00079e8b) main_video2_pane_g5_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g5

0x90fe,	// (0x00079e8b) main_video2_pane_g6_ParamLimits

0x90fe,	// (0x00079e8b) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0008038a) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0008038a) main_video2_pane_g

0x910c,	// (0x00079e99) main_video2_pane_t1_ParamLimits

0x910c,	// (0x00079e99) main_video2_pane_t1

0x910c,	// (0x00079e99) main_video2_pane_t2_ParamLimits

0x910c,	// (0x00079e99) main_video2_pane_t2

0x910c,	// (0x00079e99) main_video2_pane_t3_ParamLimits

0x910c,	// (0x00079e99) main_video2_pane_t3

0x0002,

0xf60a,	// (0x00080397) main_video2_pane_t_ParamLimits

0xf60a,	// (0x00080397) main_video2_pane_t

0x8c47,	// (0x000799d4) call_muted_g2

0x0001,

0xf5b1,	// (0x0008033e) call_muted_g

0x13c0,	// (0x0007214d) main_mup2_pane

0x16b1,	// (0x0007243e) main_mup2_pane_g1_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g1

0x16b1,	// (0x0007243e) main_mup2_pane_g2_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g2

0x3807,	// (0x00074594) main_mup_pane_g13_cp1

0x644d,	// (0x000771da) mup_volume_pane_cp1

0x16b1,	// (0x0007243e) main_mup2_pane_g4_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g4

0x16b1,	// (0x0007243e) main_mup2_pane_g5_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g5

0x16b1,	// (0x0007243e) main_mup2_pane_g6_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g6

0x16b1,	// (0x0007243e) main_mup2_pane_g7_ParamLimits

0x16b1,	// (0x0007243e) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0008039e) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0008039e) main_mup2_pane_g

0x16bf,	// (0x0007244c) main_mup2_pane_t1_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t1

0x16bf,	// (0x0007244c) main_mup2_pane_t2_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t2

0x16bf,	// (0x0007244c) main_mup2_pane_t3_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t3

0x16bf,	// (0x0007244c) main_mup2_pane_t4_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t4

0x16bf,	// (0x0007244c) main_mup2_pane_t5_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t5

0x16bf,	// (0x0007244c) main_mup2_pane_t6_ParamLimits

0x16bf,	// (0x0007244c) main_mup2_pane_t6

0x0005,

0xf620,	// (0x000803ad) main_mup2_pane_t_ParamLimits

0xf620,	// (0x000803ad) main_mup2_pane_t

0x257e,	// (0x0007330b) mup2_visualizer_pane_ParamLimits

0x257e,	// (0x0007330b) mup2_visualizer_pane

0x257e,	// (0x0007330b) mup_progress_pane_cp_ParamLimits

0x257e,	// (0x0007330b) mup_progress_pane_cp

0x91f3,	// (0x00079f80) mup_volume_pane_cp_ParamLimits

0x91f3,	// (0x00079f80) mup_volume_pane_cp

0x1695,	// (0x00072422) mup2_visualizer_pane_g1_ParamLimits

0x1695,	// (0x00072422) mup2_visualizer_pane_g1

0x16a3,	// (0x00072430) mup2_visualizer_pane_g2_ParamLimits

0x16a3,	// (0x00072430) mup2_visualizer_pane_g2

0x16a3,	// (0x00072430) mup2_visualizer_pane_g3_ParamLimits

0x16a3,	// (0x00072430) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0007fe71) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0007fe71) mup2_visualizer_pane_g

0x1df6,	// (0x00072b83) aid_size_cell_fmradio

0x8d3c,	// (0x00079ac9) aid_height_parent_landcape

0x1b89,	// (0x00072916) wml_content_pane_cp

0x1b91,	// (0x0007291e) wml_tabs_pane

0x1b9a,	// (0x00072927) popup_wml_miniature_window

0x1ba2,	// (0x0007292f) scroll_pane_cp021

0x1bb6,	// (0x00072943) wml_content_pane_comp8

0x13c0,	// (0x0007214d) bg_popup_sub_pane_cp05

0x25a2,	// (0x0007332f) popup_wml_miniature_window_g1

0x25aa,	// (0x00073337) wml_miniature_view_pane

0x9120,	// (0x00079ead) aid_size_wml_view

0x9128,	// (0x00079eb5) wml_miniature_view_pane_g1

0x9131,	// (0x00079ebe) wml_miniature_view_pane_g2

0x913a,	// (0x00079ec7) wml_miniature_view_pane_g3

0x9142,	// (0x00079ecf) wml_miniature_view_pane_g4

0x914a,	// (0x00079ed7) wml_miniature_view_pane_g5

0x9152,	// (0x00079edf) wml_miniature_view_pane_g6

0x915a,	// (0x00079ee7) wml_miniature_view_pane_g7

0x9162,	// (0x00079eef) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x000803ba) wml_miniature_view_pane_g

0x25b2,	// (0x0007333f) background_graphic_ParamLimits

0x25b2,	// (0x0007333f) background_graphic

0x25be,	// (0x0007334b) wml_tabs_2_pane

0x25c7,	// (0x00073354) wml_tabs_3_pane_ParamLimits

0x25c7,	// (0x00073354) wml_tabs_3_pane

0x25d9,	// (0x00073366) wml_tabs_4_pane_ParamLimits

0x25d9,	// (0x00073366) wml_tabs_4_pane

0x25ef,	// (0x0007337c) wml_tabs_5_pane_ParamLimits

0x25ef,	// (0x0007337c) wml_tabs_5_pane

0x2609,	// (0x00073396) wml_tabs_pane_g2_ParamLimits

0x2609,	// (0x00073396) wml_tabs_pane_g2

0x261d,	// (0x000733aa) wml_tabs_pane_g3_ParamLimits

0x261d,	// (0x000733aa) wml_tabs_pane_g3

0x916a,	// (0x00079ef7) wml_tabs_2_active_pane_ParamLimits

0x916a,	// (0x00079ef7) wml_tabs_2_active_pane

0x917a,	// (0x00079f07) wml_tabs_2_passive_pane_ParamLimits

0x917a,	// (0x00079f07) wml_tabs_2_passive_pane

0x918a,	// (0x00079f17) wml_tabs_3_active_pane_cp_ParamLimits

0x918a,	// (0x00079f17) wml_tabs_3_active_pane_cp

0x919b,	// (0x00079f28) wml_tabs_3_passive_pane_ParamLimits

0x919b,	// (0x00079f28) wml_tabs_3_passive_pane

0x91ac,	// (0x00079f39) wml_tabs_3_passive_pane_cp_ParamLimits

0x91ac,	// (0x00079f39) wml_tabs_3_passive_pane_cp

0x91bd,	// (0x00079f4a) tabs_4_active_pane

0x91c5,	// (0x00079f52) tabs_4_passive_pane

0x91cd,	// (0x00079f5a) tabs_4_passive_pane_cp

0x91d5,	// (0x00079f62) tabs_4_passive_pane_cp2

0x8b2a,	// (0x000798b7) aid_height_text

0x257e,	// (0x0007330b) mup_volume_cont_pane_ParamLimits

0x257e,	// (0x0007330b) mup_volume_cont_pane

0x64fd,	// (0x0007728a) aid_size_cell_pinb

0x0f54,	// (0x00071ce1) aid_size_list_pinb

0x257e,	// (0x0007330b) mup2_volume_cont_pane_ParamLimits

0x257e,	// (0x0007330b) mup2_volume_cont_pane

0x91dd,	// (0x00079f6a) mup2_volume_cont_pane_g1_ParamLimits

0x91dd,	// (0x00079f6a) mup2_volume_cont_pane_g1

0x6203,	// (0x00076f90) aid_size_cell_touch_ParamLimits

0x6203,	// (0x00076f90) aid_size_cell_touch

0x6457,	// (0x000771e4) touch_pane_ParamLimits

0x6457,	// (0x000771e4) touch_pane

0x644d,	// (0x000771da) main_rss2_pane

0x263a,	// (0x000733c7) listscroll_rss2_pane

0x2643,	// (0x000733d0) rss2_navigation_pane

0x264b,	// (0x000733d8) list_rss2_pane

0xdebd,	// (0x0007ec4a) scroll_pane_cp22

0x2653,	// (0x000733e0) rss2_navigation_pane_g1

0x265c,	// (0x000733e9) rss2_navigation_pane_g2

0x2664,	// (0x000733f1) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x000803cb) rss2_navigation_pane_g

0x266c,	// (0x000733f9) rss2_navigation_pane_t1

0x9209,	// (0x00079f96) rss2_list_single_pane_ParamLimits

0x9209,	// (0x00079f96) rss2_list_single_pane

0x267a,	// (0x00073407) rss2_list_single_pane_t2

0x2688,	// (0x00073415) rss2_list_single_pane_t3_ParamLimits

0x2688,	// (0x00073415) rss2_list_single_pane_t3

0x26a5,	// (0x00073432) rss2_list_single_pane_t4

0x7eb6,	// (0x00078c43) smil_status_pane_g1

0x8d46,	// (0x00079ad3) main_image2_pane_ParamLimits

0x8d46,	// (0x00079ad3) main_image2_pane

0x90ba,	// (0x00079e47) main_camera2_pane_g9_ParamLimits

0x90ba,	// (0x00079e47) main_camera2_pane_g9

0x90c8,	// (0x00079e55) main_camera2_pane_t5_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t5

0x90dc,	// (0x00079e69) main_camera2_pane_t6_ParamLimits

0x90dc,	// (0x00079e69) main_camera2_pane_t6

0x9220,	// (0x00079fad) main_image2_pane_g1_ParamLimits

0x9220,	// (0x00079fad) main_image2_pane_g1

0x893f,	// (0x000796cc) smil2_video_pane_ParamLimits

0x893f,	// (0x000796cc) smil2_video_pane

0x6233,	// (0x00076fc0) aid_zoom_text_primary_cp

0x63ee,	// (0x0007717b) popup_preview_fixed_window

0x1ae3,	// (0x00072870) im_reading_pane_g1

0x9084,	// (0x00079e11) cams2_bc_adjust_pane_cp_ParamLimits

0x9084,	// (0x00079e11) cams2_bc_adjust_pane_cp

0x6437,	// (0x000771c4) cams2_bc_adjust_pane_ParamLimits

0x6437,	// (0x000771c4) cams2_bc_adjust_pane

0x3807,	// (0x00074594) cams2_bc_adjust_pane_g1

0x644d,	// (0x000771da) cams2_slider_pane

0x3807,	// (0x00074594) cams2_slider_pane_g1

0x3807,	// (0x00074594) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x000803d2) cams2_slider_pane_g

0x6536,	// (0x000772c3) calc_display_pane_ParamLimits

0x654e,	// (0x000772db) calc_paper_pane_ParamLimits

0x656a,	// (0x000772f7) grid_calc_pane_ParamLimits

0x8133,	// (0x00078ec0) popup_clock_digital_window_t1_ParamLimits

0xe32e,	// (0x0007f0bb) main_image_pane_t1

0x651c,	// (0x000772a9) aid_size_cell_calc_ParamLimits

0x651c,	// (0x000772a9) aid_size_cell_calc

0x8d77,	// (0x00079b04) popup_blid_sat_info2_window_ParamLimits

0x8d77,	// (0x00079b04) popup_blid_sat_info2_window

0x26b3,	// (0x00073440) aid_size_cell_blid

0x257e,	// (0x0007330b) bg_popup_window_pane_cp07

0x26d0,	// (0x0007345d) grid_popup_blid_pane

0x26d8,	// (0x00073465) heading_pane_cp05_ParamLimits

0x26d8,	// (0x00073465) heading_pane_cp05

0x27a0,	// (0x0007352d) cell_popup_blid_pane_ParamLimits

0x27a0,	// (0x0007352d) cell_popup_blid_pane

0x27c0,	// (0x0007354d) cell_popup_blid_pane_g1

0x27c8,	// (0x00073555) cell_popup_blid_pane_t1

0x257e,	// (0x0007330b) mup2_indicator_pane_ParamLimits

0x257e,	// (0x0007330b) mup2_indicator_pane

0x0f54,	// (0x00071ce1) mup2_visualizer_osc_pane

0x258c,	// (0x00073319) mup2_visualizer_spec_pane_ParamLimits

0x258c,	// (0x00073319) mup2_visualizer_spec_pane

0x0f54,	// (0x00071ce1) mup2_spec_half_pane

0x0f54,	// (0x00071ce1) mup2_spec_half_pane_cp

0x0f54,	// (0x00071ce1) mup2_spec_bar_pane_ParamLimits

0x0f54,	// (0x00071ce1) mup2_spec_bar_pane

0x19f6,	// (0x00072783) mup2_spec_bar_pane_g1

0x27d6,	// (0x00073563) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x000803f8) mup2_spec_bar_pane_g

0x0f54,	// (0x00071ce1) mup2_osc_middle_pane

0x19f6,	// (0x00072783) mup2_visualizer_osc_pane_g1

0x0fcf,	// (0x00071d5c) popup_number_entry_window_t1_ParamLimits

0x0fe2,	// (0x00071d6f) popup_number_entry_window_t2_ParamLimits

0x0ff4,	// (0x00071d81) popup_number_entry_window_t3_ParamLimits

0x64a4,	// (0x00077231) popup_number_entry_window_t5_ParamLimits

0x64a4,	// (0x00077231) popup_number_entry_window_t5

0xf085,	// (0x0007fe12) popup_number_entry_window_t_ParamLimits

0x1006,	// (0x00071d93) text_title_cp2_ParamLimits

0x867d,	// (0x0007940a) aid_hotspot_pointer_text2_pane

0x870f,	// (0x0007949c) main_viewer_pane_g9_ParamLimits

0x870f,	// (0x0007949c) main_viewer_pane_g9

0x1d2c,	// (0x00072ab9) cale_month_pane_t1_ParamLimits

0x1d80,	// (0x00072b0d) bg_cale_pane_ParamLimits

0x7f3f,	// (0x00078ccc) list_cale_pane_ParamLimits

0x7f50,	// (0x00078cdd) listscroll_cale_day_pane_t1

0x7f62,	// (0x00078cef) scroll_pane_cp09_ParamLimits

0x83ff,	// (0x0007918c) main_mup_eq_pane_t1_ParamLimits

0x83ff,	// (0x0007918c) main_mup_eq_pane_t1

0x8415,	// (0x000791a2) main_mup_eq_pane_t2_ParamLimits

0x8415,	// (0x000791a2) main_mup_eq_pane_t2

0x842b,	// (0x000791b8) main_mup_eq_pane_t3_ParamLimits

0x842b,	// (0x000791b8) main_mup_eq_pane_t3

0x8441,	// (0x000791ce) main_mup_eq_pane_t4_ParamLimits

0x8441,	// (0x000791ce) main_mup_eq_pane_t4

0x8457,	// (0x000791e4) main_mup_eq_pane_t5_ParamLimits

0x8457,	// (0x000791e4) main_mup_eq_pane_t5

0x846d,	// (0x000791fa) main_mup_eq_pane_t6_ParamLimits

0x846d,	// (0x000791fa) main_mup_eq_pane_t6

0x847f,	// (0x0007920c) main_mup_eq_pane_t7_ParamLimits

0x847f,	// (0x0007920c) main_mup_eq_pane_t7

0x8491,	// (0x0007921e) main_mup_eq_pane_t8_ParamLimits

0x8491,	// (0x0007921e) main_mup_eq_pane_t8

0x84a3,	// (0x00079230) main_mup_eq_pane_t9_ParamLimits

0x84a3,	// (0x00079230) main_mup_eq_pane_t9

0x84b9,	// (0x00079246) main_mup_eq_pane_t10_ParamLimits

0x84b9,	// (0x00079246) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x00080188) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x00080188) main_mup_eq_pane_t

0x854c,	// (0x000792d9) mup_equalizer_pane_cp5_ParamLimits

0x855e,	// (0x000792eb) mup_equalizer_pane_cp6_ParamLimits

0x8570,	// (0x000792fd) mup_equalizer_pane_cp7_ParamLimits

0x644d,	// (0x000771da) main_gallery_pane

0x2542,	// (0x000732cf) smil2_volume_pane

0x255d,	// (0x000732ea) smil_status_volume_pane_g1_ParamLimits

0x254a,	// (0x000732d7) smil_status_volume_pane_g2_ParamLimits

0x8f0b,	// (0x00079c98) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x00080351) smil_status_volume_pane_g_ParamLimits

0x257e,	// (0x0007330b) bg_popup_window_pane_cp07_ParamLimits

0x26bb,	// (0x00073448) blid_firmament_pane

0x1dca,	// (0x00072b57) aid_size_cell_gallery_ParamLimits

0x1dca,	// (0x00072b57) aid_size_cell_gallery

0x922c,	// (0x00079fb9) grid_gallery_pane_ParamLimits

0x922c,	// (0x00079fb9) grid_gallery_pane

0x923b,	// (0x00079fc8) cell_gallery_pane_ParamLimits

0x923b,	// (0x00079fc8) cell_gallery_pane

0xe171,	// (0x0007eefe) bg_cell_gallery_focus_pane_ParamLimits

0xe171,	// (0x0007eefe) bg_cell_gallery_focus_pane

0x1695,	// (0x00072422) cell_gallery_pane_g1_ParamLimits

0x1695,	// (0x00072422) cell_gallery_pane_g1

0x1695,	// (0x00072422) cell_gallery_pane_g2_ParamLimits

0x1695,	// (0x00072422) cell_gallery_pane_g2

0x1695,	// (0x00072422) cell_gallery_pane_g3_ParamLimits

0x1695,	// (0x00072422) cell_gallery_pane_g3

0x16a3,	// (0x00072430) cell_gallery_pane_g4_ParamLimits

0x16a3,	// (0x00072430) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x000803fd) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x000803fd) cell_gallery_pane_g

0x27e0,	// (0x0007356d) bg_cell_gallery_focus_pane_g1

0x27e8,	// (0x00073575) bg_cell_gallery_focus_pane_g2

0x27f0,	// (0x0007357d) bg_cell_gallery_focus_pane_g3

0x27f8,	// (0x00073585) bg_cell_gallery_focus_pane_g4

0x2800,	// (0x0007358d) bg_cell_gallery_focus_pane_g5

0x2808,	// (0x00073595) bg_cell_gallery_focus_pane_g6

0x2810,	// (0x0007359d) bg_cell_gallery_focus_pane_g7

0x2818,	// (0x000735a5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x00080406) bg_cell_gallery_focus_pane_g

0x2820,	// (0x000735ad) aid_firma_cardinal

0x2834,	// (0x000735c1) blid_firmament_pane_t1

0x284b,	// (0x000735d8) blid_firmament_pane_t2

0x2862,	// (0x000735ef) blid_firmament_pane_t3

0x2879,	// (0x00073606) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x00080417) blid_firmament_pane_t

0x2890,	// (0x0007361d) blid_sat_info_pane

0x19f6,	// (0x00072783) blid_sat_info_pane_g1

0x19f6,	// (0x00072783) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) blid_sat_info_pane_g

0x28a0,	// (0x0007362d) blid_sat_info_pane_t1

0x28ae,	// (0x0007363b) smil2_volume_content_pane

0x28b7,	// (0x00073644) smil2_volume_pane_g1

0x28bf,	// (0x0007364c) smil2_volume_content_pane_g1

0x28c8,	// (0x00073655) smil2_volume_content_pane_g2

0x28d1,	// (0x0007365e) smil2_volume_content_pane_g3

0x28da,	// (0x00073667) smil2_volume_content_pane_g4

0x28e3,	// (0x00073670) smil2_volume_content_pane_g5

0x28ec,	// (0x00073679) smil2_volume_content_pane_g6

0x28f5,	// (0x00073682) smil2_volume_content_pane_g7

0x28fe,	// (0x0007368b) smil2_volume_content_pane_g8

0x2907,	// (0x00073694) smil2_volume_content_pane_g9

0x2910,	// (0x0007369d) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x00080420) smil2_volume_content_pane_g

0x6a94,	// (0x00077821) cale_week_day_heading_pane_t1_ParamLimits

0x6acf,	// (0x0007785c) cale_week_day_heading_pane_t2_ParamLimits

0x6b0a,	// (0x00077897) cale_week_day_heading_pane_t3_ParamLimits

0x6b45,	// (0x000778d2) cale_week_day_heading_pane_t4_ParamLimits

0x6b80,	// (0x0007790d) cale_week_day_heading_pane_t5_ParamLimits

0x6bbb,	// (0x00077948) cale_week_day_heading_pane_t6_ParamLimits

0x6bf6,	// (0x00077983) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0007ff19) cale_week_day_heading_pane_t_ParamLimits

0x1940,	// (0x000726cd) bg_cale_side_pane_ParamLimits

0x6c31,	// (0x000779be) cale_week_time_pane_t1_ParamLimits

0x6c6b,	// (0x000779f8) cale_week_time_pane_t2_ParamLimits

0x6ca5,	// (0x00077a32) cale_week_time_pane_t3_ParamLimits

0x6cdf,	// (0x00077a6c) cale_week_time_pane_t4_ParamLimits

0x6d19,	// (0x00077aa6) cale_week_time_pane_t5_ParamLimits

0x6d53,	// (0x00077ae0) cale_week_time_pane_t6_ParamLimits

0x6d8d,	// (0x00077b1a) cale_week_time_pane_t7_ParamLimits

0x6dc7,	// (0x00077b54) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0007ff28) cale_week_time_pane_t_ParamLimits

0x6e01,	// (0x00077b8e) cell_cale_week_pane_g2_ParamLimits

0x1940,	// (0x000726cd) bg_cale_side_pane_cp01_ParamLimits

0x7c3d,	// (0x000789ca) cale_month_week_pane_t1_ParamLimits

0x7c76,	// (0x00078a03) cale_month_week_pane_t2_ParamLimits

0x7caf,	// (0x00078a3c) cale_month_week_pane_t3_ParamLimits

0x7ce8,	// (0x00078a75) cale_month_week_pane_t4_ParamLimits

0x7d21,	// (0x00078aae) cale_month_week_pane_t5_ParamLimits

0x7d5a,	// (0x00078ae7) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0007fff6) cale_month_week_pane_t_ParamLimits

0x7e81,	// (0x00078c0e) cell_cale_month_pane_g1_ParamLimits

0x644d,	// (0x000771da) main_cale_event_viewer_pane

0x0f54,	// (0x00071ce1) listscroll_cale_event_viewer_pane

0x2919,	// (0x000736a6) list_cale_ev_pane

0x2921,	// (0x000736ae) scroll_pane_cp023

0x9257,	// (0x00079fe4) field_cale_ev_pane_ParamLimits

0x9257,	// (0x00079fe4) field_cale_ev_pane

0x292d,	// (0x000736ba) field_cale_ev_content_pane_ParamLimits

0x292d,	// (0x000736ba) field_cale_ev_content_pane

0x2939,	// (0x000736c6) field_cale_ev_pane_g1_ParamLimits

0x2939,	// (0x000736c6) field_cale_ev_pane_g1

0x2945,	// (0x000736d2) field_cale_ev_pane_g2_ParamLimits

0x2945,	// (0x000736d2) field_cale_ev_pane_g2

0x295d,	// (0x000736ea) field_cale_ev_pane_g3_ParamLimits

0x295d,	// (0x000736ea) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x00080435) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x00080435) field_cale_ev_pane_g

0x2975,	// (0x00073702) field_cale_ev_pane_t1_ParamLimits

0x2975,	// (0x00073702) field_cale_ev_pane_t1

0x9271,	// (0x00079ffe) field_cale_ev_content_pane_t1_ParamLimits

0x9271,	// (0x00079ffe) field_cale_ev_content_pane_t1

0xe214,	// (0x0007efa1) bg_button_pane_cp01

0x687f,	// (0x0007760c) listscroll_cale_week_pane_ParamLimits

0x18eb,	// (0x00072678) popup_toolbar_window_cp01

0x1911,	// (0x0007269e) listscroll_cale_week_pane_t1_ParamLimits

0x687f,	// (0x0007760c) listscroll_cale_day_pane_ParamLimits

0x18eb,	// (0x00072678) popup_toolbar_window_cp02

0x7f50,	// (0x00078cdd) listscroll_cale_day_pane_t1_ParamLimits

0x687f,	// (0x0007760c) main_cale_month_pane_ParamLimits

0x8e4a,	// (0x00079bd7) popup_toolbar_window_cp03_ParamLimits

0x8e4a,	// (0x00079bd7) popup_toolbar_window_cp03

0x8867,	// (0x000795f4) main_image_pane_g2_ParamLimits

0x8867,	// (0x000795f4) main_image_pane_g2

0x8873,	// (0x00079600) main_image_pane_g3_ParamLimits

0x8873,	// (0x00079600) main_image_pane_g3

0x0002,

0xf48d,	// (0x0008021a) main_image_pane_g_ParamLimits

0xf48d,	// (0x0008021a) main_image_pane_g

0xe32e,	// (0x0007f0bb) main_image_pane_t1_ParamLimits

0x887f,	// (0x0007960c) main_image_pane_t2_ParamLimits

0x887f,	// (0x0007960c) main_image_pane_t2

0x8891,	// (0x0007961e) main_image_pane_t3_ParamLimits

0x8891,	// (0x0007961e) main_image_pane_t3

0x88a3,	// (0x00079630) main_image_pane_t4_ParamLimits

0x88a3,	// (0x00079630) main_image_pane_t4

0x0003,

0xf494,	// (0x00080221) main_image_pane_t_ParamLimits

0xf494,	// (0x00080221) main_image_pane_t

0x88b5,	// (0x00079642) popup_image_details_window_cp01

0x88bd,	// (0x0007964a) popup_toobar_trans_pane_cp01_ParamLimits

0x88bd,	// (0x0007964a) popup_toobar_trans_pane_cp01

0x8dbe,	// (0x00079b4b) popup_image_details_window_ParamLimits

0x8dbe,	// (0x00079b4b) popup_image_details_window

0x8dca,	// (0x00079b57) popup_image_focus_window

0x6437,	// (0x000771c4) camera2_autofocus_pane_ParamLimits

0x6437,	// (0x000771c4) camera2_autofocus_pane

0x0f54,	// (0x00071ce1) bg_popup_sub_pane_cp06

0x298c,	// (0x00073719) popup_image_focus_window_g1

0x2994,	// (0x00073721) popup_image_focus_window_g2

0x299c,	// (0x00073729) popup_image_focus_window_g3

0x29a4,	// (0x00073731) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x0008043c) popup_image_focus_window_g

0x29ac,	// (0x00073739) popup_image_focus_window_t1

0x29ba,	// (0x00073747) popup_image_focus_window_t2

0x29c9,	// (0x00073756) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x00080445) popup_image_focus_window_t

0x1695,	// (0x00072422) camera2_autofocus_pane_g1

0xe171,	// (0x0007eefe) bg_tb_trans_pane_cp01

0x29d7,	// (0x00073764) popup_image_details_window_g1

0x29ea,	// (0x00073777) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x00080457) popup_image_details_window_g

0x2a13,	// (0x000737a0) popup_image_details_window_t1

0x2a25,	// (0x000737b2) popup_image_details_window_t2

0x2a3e,	// (0x000737cb) popup_image_details_window_t3

0x2a52,	// (0x000737df) popup_image_details_window_t4

0x2a6d,	// (0x000737fa) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0008045e) popup_image_details_window_t

0x16fb,	// (0x00072488) bg_calc_paper_pane_ParamLimits

0x644d,	// (0x000771da) grid_highlight_pane_cp013

0x664f,	// (0x000773dc) list_calc_pane_ParamLimits

0x6661,	// (0x000773ee) scroll_pane_cp024

0x172d,	// (0x000724ba) bg_calc_display_pane_ParamLimits

0x6669,	// (0x000773f6) calc_display_pane_t1_ParamLimits

0x667e,	// (0x0007740b) calc_display_pane_t2_ParamLimits

0x6693,	// (0x00077420) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0007fe99) calc_display_pane_t_ParamLimits

0x6749,	// (0x000774d6) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0007feb6) cell_calc_pane_g

0x6752,	// (0x000774df) cell_calc_pane_t1

0x17d0,	// (0x0007255d) grid_highlight_pane_cp02_ParamLimits

0x17e6,	// (0x00072573) toolbar_button_pane_cp01_ParamLimits

0x17e6,	// (0x00072573) toolbar_button_pane_cp01

0xe373,	// (0x0007f100) temp_image_control_pane_ParamLimits

0xe373,	// (0x0007f100) temp_image_control_pane

0x8d46,	// (0x00079ad3) main_mp3_pane

0x2a87,	// (0x00073814) temp_image_control_pane_g1_ParamLimits

0x2a87,	// (0x00073814) temp_image_control_pane_g1

0x2a95,	// (0x00073822) temp_image_control_pane_g2_ParamLimits

0x2a95,	// (0x00073822) temp_image_control_pane_g2

0x2aa7,	// (0x00073834) temp_image_control_pane_g3_ParamLimits

0x2aa7,	// (0x00073834) temp_image_control_pane_g3

0x928b,	// (0x0007a018) temp_image_control_pane_g4_ParamLimits

0x928b,	// (0x0007a018) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x00080469) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x00080469) temp_image_control_pane_g

0x2a87,	// (0x00073814) main_mp3_pane_g1

0x929c,	// (0x0007a029) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x00080472) main_mp3_pane_g

0x2adc,	// (0x00073869) main_mp3_pane_t1

0x16a3,	// (0x00072430) main_camera_pane_g8_ParamLimits

0x16a3,	// (0x00072430) main_camera_pane_g8

0x6f8d,	// (0x00077d1a) main_video_pane_g7_ParamLimits

0x6f8d,	// (0x00077d1a) main_video_pane_g7

0x90c8,	// (0x00079e55) main_camera2_pane_t7_ParamLimits

0x90c8,	// (0x00079e55) main_camera2_pane_t7

0x1b49,	// (0x000728d6) scroll_pane_cp025_ParamLimits

0x1b49,	// (0x000728d6) scroll_pane_cp025

0x1b5d,	// (0x000728ea) scroll_pane_cp026_ParamLimits

0x1b5d,	// (0x000728ea) scroll_pane_cp026

0x1b6c,	// (0x000728f9) wml_content_pane_ParamLimits

0x644d,	// (0x000771da) main_touch_calib_pane

0x9334,	// (0x0007a0c1) main_touch_calib_pane_g1

0x9340,	// (0x0007a0cd) main_touch_calib_pane_g2

0x934c,	// (0x0007a0d9) main_touch_calib_pane_g3

0x9358,	// (0x0007a0e5) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x00080490) main_touch_calib_pane_g

0x9364,	// (0x0007a0f1) main_touch_calib_pane_t1

0x9379,	// (0x0007a106) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x00080499) main_touch_calib_pane_t

0xdf79,	// (0x0007ed06) mup_progress_pane_cp02

0xdfae,	// (0x0007ed3b) navi_pane_g1

0xe039,	// (0x0007edc6) navi_pane_mp_t3

0x8d46,	// (0x00079ad3) main_mp3_pane_ParamLimits

0x8e85,	// (0x00079c12) navi_pane_ParamLimits

0x2a87,	// (0x00073814) main_mp3_pane_g1_ParamLimits

0x929c,	// (0x0007a029) main_mp3_pane_g2_ParamLimits

0x92a8,	// (0x0007a035) main_mp3_pane_g3_ParamLimits

0x92a8,	// (0x0007a035) main_mp3_pane_g3

0x92b4,	// (0x0007a041) main_mp3_pane_g4_ParamLimits

0x92b4,	// (0x0007a041) main_mp3_pane_g4

0x1695,	// (0x00072422) main_mp3_pane_g5_ParamLimits

0x1695,	// (0x00072422) main_mp3_pane_g5

0x2ab7,	// (0x00073844) main_mp3_pane_g6_ParamLimits

0x2ab7,	// (0x00073844) main_mp3_pane_g6

0x2ac4,	// (0x00073851) main_mp3_pane_g7_ParamLimits

0x2ac4,	// (0x00073851) main_mp3_pane_g7

0x2ad0,	// (0x0007385d) main_mp3_pane_g8_ParamLimits

0x2ad0,	// (0x0007385d) main_mp3_pane_g8

0xf6e5,	// (0x00080472) main_mp3_pane_g_ParamLimits

0x92c0,	// (0x0007a04d) main_mp3_pane_t2

0x92ce,	// (0x0007a05b) main_mp3_pane_t3

0x2aea,	// (0x00073877) main_mp3_pane_t4

0x2af8,	// (0x00073885) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x00080483) main_mp3_pane_t

0x2b06,	// (0x00073893) mup_progress_pane_cp01

0x6233,	// (0x00076fc0) aid_zoom_text_secondary2

0x2919,	// (0x000736a6) list_cale_ev2_pane

0x2921,	// (0x000736ae) scroll_pane_cp023_ParamLimits

0x93c4,	// (0x0007a151) field_cale_ev2_pane_ParamLimits

0x93c4,	// (0x0007a151) field_cale_ev2_pane

0x4d29,	// (0x00075ab6) field_cale_ev2_pane_g1_ParamLimits

0x4d29,	// (0x00075ab6) field_cale_ev2_pane_g1

0x4d35,	// (0x00075ac2) field_cale_ev2_pane_g2_ParamLimits

0x4d35,	// (0x00075ac2) field_cale_ev2_pane_g2

0x4d4d,	// (0x00075ada) field_cale_ev2_pane_g3_ParamLimits

0x4d4d,	// (0x00075ada) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x000804a4) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x000804a4) field_cale_ev2_pane_g

0x2b0e,	// (0x0007389b) field_cale_ev2_pane_t1_ParamLimits

0x2b0e,	// (0x0007389b) field_cale_ev2_pane_t1

0x2b25,	// (0x000738b2) field_cale_ev2_pane_t2_ParamLimits

0x2b25,	// (0x000738b2) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x000804ad) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x000804ad) field_cale_ev2_pane_t

0x8763,	// (0x000794f0) main_postcard_pane_g5_ParamLimits

0x8763,	// (0x000794f0) main_postcard_pane_g5

0x876f,	// (0x000794fc) main_postcard_pane_g6_ParamLimits

0x876f,	// (0x000794fc) main_postcard_pane_g6

0x1dca,	// (0x00072b57) camera2_autofocus_pane_cp_ParamLimits

0x1dca,	// (0x00072b57) camera2_autofocus_pane_cp

0x8d46,	// (0x00079ad3) main_mup3_pane

0x9413,	// (0x0007a1a0) main_mup3_pane_g1_ParamLimits

0x9413,	// (0x0007a1a0) main_mup3_pane_g1

0x9434,	// (0x0007a1c1) main_mup3_pane_g2_ParamLimits

0x9434,	// (0x0007a1c1) main_mup3_pane_g2

0x94a1,	// (0x0007a22e) main_mup3_pane_g3_ParamLimits

0x94a1,	// (0x0007a22e) main_mup3_pane_g3

0x94dc,	// (0x0007a269) main_mup3_pane_g4_ParamLimits

0x94dc,	// (0x0007a269) main_mup3_pane_g4

0x9517,	// (0x0007a2a4) main_mup3_pane_g5_ParamLimits

0x9517,	// (0x0007a2a4) main_mup3_pane_g5

0x9552,	// (0x0007a2df) main_mup3_pane_g6_ParamLimits

0x9552,	// (0x0007a2df) main_mup3_pane_g6

0x16a3,	// (0x00072430) main_mup3_pane_g7_ParamLimits

0x16a3,	// (0x00072430) main_mup3_pane_g7

0x0007,

0xf730,	// (0x000804bd) main_mup3_pane_g_ParamLimits

0xf730,	// (0x000804bd) main_mup3_pane_g

0x95c0,	// (0x0007a34d) main_mup3_pane_t1_ParamLimits

0x95c0,	// (0x0007a34d) main_mup3_pane_t1

0x9621,	// (0x0007a3ae) main_mup3_pane_t2_ParamLimits

0x9621,	// (0x0007a3ae) main_mup3_pane_t2

0x96dc,	// (0x0007a469) main_mup3_pane_t4_ParamLimits

0x96dc,	// (0x0007a469) main_mup3_pane_t4

0x9722,	// (0x0007a4af) main_mup3_pane_t5_ParamLimits

0x9722,	// (0x0007a4af) main_mup3_pane_t5

0x97c6,	// (0x0007a553) main_mup3_pane_t6_ParamLimits

0x97c6,	// (0x0007a553) main_mup3_pane_t6

0x0005,

0xf741,	// (0x000804ce) main_mup3_pane_t_ParamLimits

0xf741,	// (0x000804ce) main_mup3_pane_t

0x986e,	// (0x0007a5fb) mup3_progress_pane_ParamLimits

0x986e,	// (0x0007a5fb) mup3_progress_pane

0x98d2,	// (0x0007a65f) popup_mup3_control_window_ParamLimits

0x98d2,	// (0x0007a65f) popup_mup3_control_window

0x2b3a,	// (0x000738c7) popup_mup3_text_window

0x98eb,	// (0x0007a678) mup3_progress_pane_t1

0x9909,	// (0x0007a696) mup3_progress_pane_t2

0x2b42,	// (0x000738cf) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x000804db) mup3_progress_pane_t

0x2b5f,	// (0x000738ec) mup_progress_pane_cp03

0x0f54,	// (0x00071ce1) bg_tb_trans_pane_cp04

0x9927,	// (0x0007a6b4) mup3_volume_pane

0x992f,	// (0x0007a6bc) popup_mup3_control_window_g1

0x9938,	// (0x0007a6c5) mup3_volume_pane_g1

0x9941,	// (0x0007a6ce) mup3_volume_pane_g2

0x994a,	// (0x0007a6d7) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000804e2) mup3_volume_pane_g

0x0f54,	// (0x00071ce1) bg_tb_trans_pane_cp03

0x2b6f,	// (0x000738fc) popup_mup3_text_window_g1

0x2b77,	// (0x00073904) popup_mup3_text_window_t1

0x17b1,	// (0x0007253e) list_calc_item_pane_g1_ParamLimits

0x2631,	// (0x000733be) mup_volume_pane_cp_g1

0x938e,	// (0x0007a11b) main_touch_calib_pane_t3

0x93a0,	// (0x0007a12d) main_touch_calib_pane_t4

0x93b2,	// (0x0007a13f) main_touch_calib_pane_t5

0x61f3,	// (0x00076f80) aid_cell_size_toolbar2

0x61fb,	// (0x00076f88) aid_popup3_width_pane

0x6107,	// (0x00076e94) aid_zoom_text_msg_primary

0x19c4,	// (0x00072751) vorec_t7

0x1775,	// (0x00072502) bg_calc_paper_pane_g1_ParamLimits

0x178d,	// (0x0007251a) bg_calc_paper_pane_g2_ParamLimits

0x1781,	// (0x0007250e) bg_calc_paper_pane_g3_ParamLimits

0x17a5,	// (0x00072532) bg_calc_paper_pane_g4_ParamLimits

0x1799,	// (0x00072526) bg_calc_paper_pane_g5_ParamLimits

0x66cc,	// (0x00077459) bg_calc_paper_pane_g6_ParamLimits

0x66db,	// (0x00077468) bg_calc_paper_pane_g7_ParamLimits

0x66ea,	// (0x00077477) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0007fea0) bg_calc_paper_pane_g_ParamLimits

0x66f9,	// (0x00077486) calc_bg_paper_pane_g9_ParamLimits

0x6e7f,	// (0x00077c0c) image_qvga_pane_ParamLimits

0x6e7f,	// (0x00077c0c) image_qvga_pane

0x161b,	// (0x000723a8) bg_popup_sub_pane_cp04_ParamLimits

0xe2aa,	// (0x0007f037) popup_mup_playback_window_g1_ParamLimits

0xe2b6,	// (0x0007f043) popup_mup_playback_window_t1_ParamLimits

0xe2cb,	// (0x0007f058) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x00080215) popup_mup_playback_window_t_ParamLimits

0x1695,	// (0x00072422) main_mup2_pane_g3_ParamLimits

0x1695,	// (0x00072422) main_mup2_pane_g3

0x7152,	// (0x00077edf) popup_toolbar_window_cp04

0xe699,	// (0x0007f426) popup_call2_audio_second_window_g3_ParamLimits

0xe699,	// (0x0007f426) popup_call2_audio_second_window_g3

0xeac9,	// (0x0007f856) popup_call2_audio_first_window_g4_ParamLimits

0xeac9,	// (0x0007f856) popup_call2_audio_first_window_g4

0x211c,	// (0x00072ea9) popup_call2_audio_in_window_g4_ParamLimits

0x211c,	// (0x00072ea9) popup_call2_audio_in_window_g4

0x885a,	// (0x000795e7) aid_area_sk_bg_cut_ParamLimits

0x885a,	// (0x000795e7) aid_area_sk_bg_cut

0xe2e0,	// (0x0007f06d) aid_area_sk_bg_cut_2_ParamLimits

0xe2e0,	// (0x0007f06d) aid_area_sk_bg_cut_2

0x0f54,	// (0x00071ce1) aid_placing_details_win

0x0f54,	// (0x00071ce1) aid_placing_details_win_2

0x1695,	// (0x00072422) camera2_autofocus_pane_g1_ParamLimits

0x63e1,	// (0x0007716e) popup_fixed_preview_cale_window_ParamLimits

0x63e1,	// (0x0007716e) popup_fixed_preview_cale_window

0xe0af,	// (0x0007ee3c) navi_slider_pane_g3

0xe0b8,	// (0x0007ee45) navi_slider_pane_g4

0xe0c1,	// (0x0007ee4e) navi_slider_pane_g5

0xe0af,	// (0x0007ee3c) navi_slider_pane_g6

0x83d3,	// (0x00079160) navi_slider_pane_g7

0xe1e1,	// (0x0007ef6e) mup_scale_pane_g3

0xe1ea,	// (0x0007ef77) mup_scale_pane_g4

0xe1f3,	// (0x0007ef80) mup_scale_pane_g5

0x8582,	// (0x0007930f) mup_scale_pane_g6

0x858b,	// (0x00079318) mup_scale_pane_g7

0x3807,	// (0x00074594) cams2_slider_pane_g3

0x3807,	// (0x00074594) cams2_slider_pane_g4

0x3807,	// (0x00074594) cams2_slider_pane_g5

0x3807,	// (0x00074594) cams2_slider_pane_g6

0x3807,	// (0x00074594) cams2_slider_pane_g7

0x19f6,	// (0x00072783) camera2_autofocus_pane_cp_g1

0x24d5,	// (0x00073262) bg_popup_preview_window_pane_cp02_ParamLimits

0x24d5,	// (0x00073262) bg_popup_preview_window_pane_cp02

0x2b85,	// (0x00073912) list_fp_cale_pane_ParamLimits

0x2b85,	// (0x00073912) list_fp_cale_pane

0x2b91,	// (0x0007391e) popup_fixed_preview_cale_window_t1_ParamLimits

0x2b91,	// (0x0007391e) popup_fixed_preview_cale_window_t1

0x9953,	// (0x0007a6e0) popup_fixed_preview_cale_window_t2_ParamLimits

0x9953,	// (0x0007a6e0) popup_fixed_preview_cale_window_t2

0x9968,	// (0x0007a6f5) popup_fixed_preview_cale_window_t3_ParamLimits

0x9968,	// (0x0007a6f5) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000804e9) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000804e9) popup_fixed_preview_cale_window_t

0x997d,	// (0x0007a70a) list_single_fp_cale_pane_ParamLimits

0x997d,	// (0x0007a70a) list_single_fp_cale_pane

0x2baf,	// (0x0007393c) list_single_fp_cale_pane_g1_ParamLimits

0x2baf,	// (0x0007393c) list_single_fp_cale_pane_g1

0x2bbb,	// (0x00073948) list_single_fp_cale_pane_g2_ParamLimits

0x2bbb,	// (0x00073948) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000804f0) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000804f0) list_single_fp_cale_pane_g

0x2bd4,	// (0x00073961) list_single_fp_cale_pane_t1_ParamLimits

0x2bd4,	// (0x00073961) list_single_fp_cale_pane_t1

0x2be6,	// (0x00073973) list_single_fp_cale_pane_t2_ParamLimits

0x2be6,	// (0x00073973) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000804f7) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000804f7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x644d,	// (0x000771da) main_dialer_pane

0x998d,	// (0x0007a71a) aid_cell_size_keypad

0x0f54,	// (0x00071ce1) dialer_ne_pane

0x0f54,	// (0x00071ce1) grid_dialer_command_1_pane

0x0f54,	// (0x00071ce1) grid_dialer_command_2_pane

0x0f54,	// (0x00071ce1) grid_dialer_keypad_pane

0x257e,	// (0x0007330b) bg_popup_call_pane_cp06_ParamLimits

0x257e,	// (0x0007330b) bg_popup_call_pane_cp06

0x257e,	// (0x0007330b) dialer_ne_clear_pane_ParamLimits

0x257e,	// (0x0007330b) dialer_ne_clear_pane

0x19f6,	// (0x00072783) dialer_ne_pane_g1

0x1db6,	// (0x00072b43) dialer_ne_pane_t1_ParamLimits

0x1db6,	// (0x00072b43) dialer_ne_pane_t1

0x2df2,	// (0x00073b7f) dialer_ne_pane_t2_ParamLimits

0x2df2,	// (0x00073b7f) dialer_ne_pane_t2

0x9997,	// (0x0007a724) dialer_ne_pane_t3_ParamLimits

0x9997,	// (0x0007a724) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x000804fc) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x000804fc) dialer_ne_pane_t

0x9997,	// (0x0007a724) dialer_ne_pane_t3_copy1_ParamLimits

0x9997,	// (0x0007a724) dialer_ne_pane_t3_copy1

0x99b9,	// (0x0007a746) cell_dialer_keypad_pane_ParamLimits

0x99b9,	// (0x0007a746) cell_dialer_keypad_pane

0x99c1,	// (0x0007a74e) cell_dialer_command_1_pane_ParamLimits

0x99c1,	// (0x0007a74e) cell_dialer_command_1_pane

0x99b9,	// (0x0007a746) cell_dialer_command_2_pane_ParamLimits

0x99b9,	// (0x0007a746) cell_dialer_command_2_pane

0xe171,	// (0x0007eefe) bg_button_pane_cp02_ParamLimits

0xe171,	// (0x0007eefe) bg_button_pane_cp02

0x1695,	// (0x00072422) cell_dialer_keypad_pane_g1_ParamLimits

0x1695,	// (0x00072422) cell_dialer_keypad_pane_g1

0xe171,	// (0x0007eefe) bg_button_pane_cp03_ParamLimits

0xe171,	// (0x0007eefe) bg_button_pane_cp03

0x1695,	// (0x00072422) cell_dialer_command_1_pane_g1_ParamLimits

0x1695,	// (0x00072422) cell_dialer_command_1_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp04

0x19f6,	// (0x00072783) cell_dialer_command_2_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp06

0x19f6,	// (0x00072783) dialer_ne_clear_pane_g1

0xdfba,	// (0x0007ed47) navi_pane_g2

0x837b,	// (0x00079108) navi_pane_g3

0x0002,

0xf38b,	// (0x00080118) navi_pane_g

0xe047,	// (0x0007edd4) navi_pane_mv_g2

0xe06e,	// (0x0007edfb) navi_pane_mv_g5

0x8398,	// (0x00079125) navi_pane_mv_t1

0x172d,	// (0x000724ba) main_clock2_pane

0x9a06,	// (0x0007a793) main_clock2_list_pane_ParamLimits

0x9a06,	// (0x0007a793) main_clock2_list_pane

0x9a2c,	// (0x0007a7b9) main_clock2_pane_t1_ParamLimits

0x9a2c,	// (0x0007a7b9) main_clock2_pane_t1

0x9a4c,	// (0x0007a7d9) main_clock2_pane_t2_ParamLimits

0x9a4c,	// (0x0007a7d9) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x00080508) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x00080508) main_clock2_pane_t

0x9aa5,	// (0x0007a832) popup_clock_analogue_window_cp03_ParamLimits

0x9aa5,	// (0x0007a832) popup_clock_analogue_window_cp03

0x9ac3,	// (0x0007a850) popup_clock_digital_window_cp02_ParamLimits

0x9ac3,	// (0x0007a850) popup_clock_digital_window_cp02

0x9b30,	// (0x0007a8bd) main_clock2_list_single_pane_ParamLimits

0x9b30,	// (0x0007a8bd) main_clock2_list_single_pane

0x1992,	// (0x0007271f) list_highlight_pane_cp05

0x2c49,	// (0x000739d6) main_clock2_list_single_pane_t1

0x7152,	// (0x00077edf) popup_toolbar_window_cp04_ParamLimits

0x16a3,	// (0x00072430) camera2_autofocus_pane_g2_ParamLimits

0x16a3,	// (0x00072430) camera2_autofocus_pane_g2

0x16a3,	// (0x00072430) camera2_autofocus_pane_g3_ParamLimits

0x16a3,	// (0x00072430) camera2_autofocus_pane_g3

0x16a3,	// (0x00072430) camera2_autofocus_pane_g4_ParamLimits

0x16a3,	// (0x00072430) camera2_autofocus_pane_g4

0x16a3,	// (0x00072430) camera2_autofocus_pane_g5_ParamLimits

0x16a3,	// (0x00072430) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x0008044c) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x0008044c) camera2_autofocus_pane_g

0x93da,	// (0x0007a167) camera2_autofocus_pane_cp_g2

0x93e2,	// (0x0007a16f) camera2_autofocus_pane_cp_g3

0x93ea,	// (0x0007a177) camera2_autofocus_pane_cp_g4

0x93f2,	// (0x0007a17f) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x000804b2) camera2_autofocus_pane_cp_g

0x0f54,	// (0x00071ce1) popup_dialer_spcha_window

0x0f54,	// (0x00071ce1) bg_popup_sub_pane_cp07

0x0f54,	// (0x00071ce1) list_spcha_pane

0x0f54,	// (0x00071ce1) list_single_spcha_pane_ParamLimits

0x0f54,	// (0x00071ce1) list_single_spcha_pane

0x0f54,	// (0x00071ce1) list_highlight_pane_cp06

0x2c57,	// (0x000739e4) list_single_spcha_pane_t1

0x1ec6,	// (0x00072c53) popup_call2_audio_out_window_g4_ParamLimits

0x1ec6,	// (0x00072c53) popup_call2_audio_out_window_g4

0x644d,	// (0x000771da) main_imed2_pane

0x8dd2,	// (0x00079b5f) popup_imed_adjust2_window

0x8de3,	// (0x00079b70) popup_imed_trans_window_ParamLimits

0x8de3,	// (0x00079b70) popup_imed_trans_window

0x2704,	// (0x00073491) popup_blid_sat_info2_window_t1

0x2712,	// (0x0007349f) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x000803e1) popup_blid_sat_info2_window_t

0x9bda,	// (0x0007a967) aid_size_cell_colour_35

0x9bf1,	// (0x0007a97e) aid_size_cell_colour_112

0x9c08,	// (0x0007a995) aid_size_cell_effect

0xe171,	// (0x0007eefe) bg_tb_trans_pane_cp02

0xee38,	// (0x0007fbc5) heading_imed_pane

0x9c22,	// (0x0007a9af) listscroll_imed_pane

0x2c67,	// (0x000739f4) heading_imed_pane_g1

0x2c6f,	// (0x000739fc) heading_imed_pane_t1

0x2c7d,	// (0x00073a0a) grid_imed_colour_35_pane_ParamLimits

0x2c7d,	// (0x00073a0a) grid_imed_colour_35_pane

0x9c2e,	// (0x0007a9bb) grid_imed_effect_pane

0x2c90,	// (0x00073a1d) list_imed_aspect_pane

0x9c3a,	// (0x0007a9c7) scroll_pane_cp027_ParamLimits

0x9c3a,	// (0x0007a9c7) scroll_pane_cp027

0x9c46,	// (0x0007a9d3) cell_imed_effect_pane_ParamLimits

0x9c46,	// (0x0007a9d3) cell_imed_effect_pane

0x2c98,	// (0x00073a25) cell_imed_colour_pane_ParamLimits

0x2c98,	// (0x00073a25) cell_imed_colour_pane

0x2cd2,	// (0x00073a5f) cell_imed_colour_pane_g1_ParamLimits

0x2cd2,	// (0x00073a5f) cell_imed_colour_pane_g1

0x2ce3,	// (0x00073a70) hgihlgiht_grid_pane_cp016_ParamLimits

0x2ce3,	// (0x00073a70) hgihlgiht_grid_pane_cp016

0x9c5c,	// (0x0007a9e9) cell_imed_effect_pane_g1

0x9c64,	// (0x0007a9f1) grid_highlight_pane_cp017

0x2cf4,	// (0x00073a81) list_imed_single_pane_ParamLimits

0x2cf4,	// (0x00073a81) list_imed_single_pane

0x0f54,	// (0x00071ce1) list_highlight_pane_cp07

0x2d07,	// (0x00073a94) list_imed_aspect_pane_comp1_t1

0xee2a,	// (0x0007fbb7) bg_tb_trans_pane_cp05

0x2d27,	// (0x00073ab4) popup_imed_adjust2_window_g1

0x2d4e,	// (0x00073adb) popup_imed_adjust2_window_t1

0x2d66,	// (0x00073af3) slider_imed_adjust_pane

0x2d7a,	// (0x00073b07) slider_imed_adjust_pane_g1

0x2d8a,	// (0x00073b17) slider_imed_adjust_pane_g2

0x2d9a,	// (0x00073b27) slider_imed_adjust_pane_g3

0x2dab,	// (0x00073b38) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x00080525) slider_imed_adjust_pane_g

0x9c6d,	// (0x0007a9fa) aid_size_cell_clipart2

0x9c79,	// (0x0007aa06) grid_imed_clipart_pane

0x2dbc,	// (0x00073b49) scroll_pane_cp031

0x9c83,	// (0x0007aa10) cell_imed_clipart_pane_ParamLimits

0x9c83,	// (0x0007aa10) cell_imed_clipart_pane

0x9c9a,	// (0x0007aa27) cell_imed_clipart_pane_g1

0x0f54,	// (0x00071ce1) grid_highlight_pane_cp014

0x9a12,	// (0x0007a79f) main_clock2_pane_g1_ParamLimits

0x9a12,	// (0x0007a79f) main_clock2_pane_g1

0x9adb,	// (0x0007a868) aid_call2_pane_cp10

0x9aed,	// (0x0007a87a) aid_call_pane_cp10

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g1

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g2

0x9aff,	// (0x0007a88c) popup_clock_analogue_window_cp10_g3

0x9aff,	// (0x0007a88c) popup_clock_analogue_window_cp10_g4

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x00080513) popup_clock_analogue_window_cp10_g

0x9b11,	// (0x0007a89e) popup_clock_analogue_window_cp10_t1

0x9b42,	// (0x0007a8cf) clock_digital_number_pane_cp10_ParamLimits

0x9b42,	// (0x0007a8cf) clock_digital_number_pane_cp10

0x9b5a,	// (0x0007a8e7) clock_digital_number_pane_cp11_ParamLimits

0x9b5a,	// (0x0007a8e7) clock_digital_number_pane_cp11

0x9b72,	// (0x0007a8ff) clock_digital_number_pane_cp12_ParamLimits

0x9b72,	// (0x0007a8ff) clock_digital_number_pane_cp12

0x9b8a,	// (0x0007a917) clock_digital_number_pane_cp13_ParamLimits

0x9b8a,	// (0x0007a917) clock_digital_number_pane_cp13

0x9ba2,	// (0x0007a92f) clock_digital_separator_pane_cp10_ParamLimits

0x9ba2,	// (0x0007a92f) clock_digital_separator_pane_cp10

0x9bba,	// (0x0007a947) popup_clock_digital_window_cp02_t1_ParamLimits

0x9bba,	// (0x0007a947) popup_clock_digital_window_cp02_t1

0x1613,	// (0x000723a0) clock_digital_number_pane_cp10_g1

0x1613,	// (0x000723a0) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0008052e) clock_digital_number_pane_cp10_g

0x1613,	// (0x000723a0) clock_digital_separator_pane_cp10_g1

0x1613,	// (0x000723a0) clock_digital_separator_pane_g2_cp10

0xe076,	// (0x0007ee03) navi_pane_vded_g4

0xe07f,	// (0x0007ee0c) navi_pane_vded_g5

0xe088,	// (0x0007ee15) navi_pane_vded_t1

0x644d,	// (0x000771da) main_vded_pane

0x9ca3,	// (0x0007aa30) main_vded_pane_g1

0x9cab,	// (0x0007aa38) main_vded_pane_g2

0x9cb3,	// (0x0007aa40) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x00080533) main_vded_pane_g

0x9cbb,	// (0x0007aa48) main_vded_pane_t1

0x9cc9,	// (0x0007aa56) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x0008053a) main_vded_pane_t

0x9cd7,	// (0x0007aa64) vded_slider_pane

0x9cdf,	// (0x0007aa6c) vded_video_pane

0x2dc4,	// (0x00073b51) vded_video_pane_g1

0x9ce7,	// (0x0007aa74) vded_video_pane_g2

0x19f6,	// (0x00072783) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0008053f) vded_video_pane_g

0x2dce,	// (0x00073b5b) vded_slider_pane_g1

0x2631,	// (0x000733be) vded_slider_pane_g2

0x2dd7,	// (0x00073b64) vded_slider_pane_g3

0x2de0,	// (0x00073b6d) vded_slider_pane_g4

0x2de9,	// (0x00073b76) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x00080546) vded_slider_pane_g

0x98c6,	// (0x0007a653) mup3_rocker_pane_ParamLimits

0x98c6,	// (0x0007a653) mup3_rocker_pane

0x9cf0,	// (0x0007aa7d) mup3_control_keys_pane_g1

0x9cf8,	// (0x0007aa85) mup3_control_keys_pane_g2

0x9d00,	// (0x0007aa8d) mup3_control_keys_pane_g3

0x9d08,	// (0x0007aa95) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x00080551) mup3_control_keys_pane_g

0x6405,	// (0x00077192) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6405,	// (0x00077192) popup_toolbar2_fixed_window_cp01

0x98de,	// (0x0007a66b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x98de,	// (0x0007a66b) popup_toolbar2_fixed_window_cp02

0xe80b,	// (0x0007f598) popup_call2_audio_second_window_t4_ParamLimits

0xe80b,	// (0x0007f598) popup_call2_audio_second_window_t4

0xed5f,	// (0x0007faec) popup_call2_audio_first_window_t6_ParamLimits

0xed5f,	// (0x0007faec) popup_call2_audio_first_window_t6

0x1fc9,	// (0x00072d56) popup_call2_audio_out_window_t6_ParamLimits

0x1fc9,	// (0x00072d56) popup_call2_audio_out_window_t6

0x644d,	// (0x000771da) main_vitu_pane

0x1dca,	// (0x00072b57) aid_size_cell_itu_ParamLimits

0x1dca,	// (0x00072b57) aid_size_cell_itu

0x1dca,	// (0x00072b57) bg_popup_window_pane_cp08_ParamLimits

0x1dca,	// (0x00072b57) bg_popup_window_pane_cp08

0x1dca,	// (0x00072b57) field_vitu_entry_pane_ParamLimits

0x1dca,	// (0x00072b57) field_vitu_entry_pane

0x1dca,	// (0x00072b57) grid_vitu_function_pane_ParamLimits

0x1dca,	// (0x00072b57) grid_vitu_function_pane

0x1dca,	// (0x00072b57) grid_vitu_itu_pane_ParamLimits

0x1dca,	// (0x00072b57) grid_vitu_itu_pane

0x9d18,	// (0x0007aaa5) cell_vitu_itu_pane_ParamLimits

0x9d18,	// (0x0007aaa5) cell_vitu_itu_pane

0x1dca,	// (0x00072b57) cell_vitu_function_pane_ParamLimits

0x1dca,	// (0x00072b57) cell_vitu_function_pane

0xe171,	// (0x0007eefe) bg_popup_sub_pane_cp08_ParamLimits

0xe171,	// (0x0007eefe) bg_popup_sub_pane_cp08

0xe15d,	// (0x0007eeea) field_vitu_entry_pane_t1_ParamLimits

0xe15d,	// (0x0007eeea) field_vitu_entry_pane_t1

0x2df2,	// (0x00073b7f) field_vitu_entry_pane_t2_ParamLimits

0x2df2,	// (0x00073b7f) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0008055f) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0008055f) field_vitu_entry_pane_t

0x257e,	// (0x0007330b) bg_button_pane_cp05_ParamLimits

0x257e,	// (0x0007330b) bg_button_pane_cp05

0x2e0f,	// (0x00073b9c) cell_vitu_itu_pane_g1

0xee44,	// (0x0007fbd1) cell_vitu_itu_pane_t1_ParamLimits

0xee44,	// (0x0007fbd1) cell_vitu_itu_pane_t1

0xee44,	// (0x0007fbd1) cell_vitu_itu_pane_t2_ParamLimits

0xee44,	// (0x0007fbd1) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x00080564) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x00080564) cell_vitu_itu_pane_t

0x0f54,	// (0x00071ce1) bg_button_pane_cp07

0x19f6,	// (0x00072783) cell_vitu_function_pane_g1

0x6582,	// (0x0007730f) main_calc_pane_g1

0x622b,	// (0x00076fb8) aid_visual_content_pane

0x644d,	// (0x000771da) main_vradio_pane

0x16a3,	// (0x00072430) main_vradio_pane_g1_ParamLimits

0x16a3,	// (0x00072430) main_vradio_pane_g1

0x16a3,	// (0x00072430) main_vradio_pane_g2_ParamLimits

0x16a3,	// (0x00072430) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0008056b) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0008056b) main_vradio_pane_g

0x1db6,	// (0x00072b43) main_vradio_pane_t1_ParamLimits

0x1db6,	// (0x00072b43) main_vradio_pane_t1

0x1db6,	// (0x00072b43) main_vradio_pane_t2_ParamLimits

0x1db6,	// (0x00072b43) main_vradio_pane_t2

0x1db6,	// (0x00072b43) main_vradio_pane_t3_ParamLimits

0x1db6,	// (0x00072b43) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x00080570) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x00080570) main_vradio_pane_t

0x1dca,	// (0x00072b57) vradio_rocker_control_pane_ParamLimits

0x1dca,	// (0x00072b57) vradio_rocker_control_pane

0x1dca,	// (0x00072b57) vradio_station_info_pane_ParamLimits

0x1dca,	// (0x00072b57) vradio_station_info_pane

0xe171,	// (0x0007eefe) vradio_frequency_info_pane_ParamLimits

0xe171,	// (0x0007eefe) vradio_frequency_info_pane

0x19f6,	// (0x00072783) vradio_station_info_pane_g1

0xee44,	// (0x0007fbd1) vradio_station_info_pane_t1_ParamLimits

0xee44,	// (0x0007fbd1) vradio_station_info_pane_t1

0x1db6,	// (0x00072b43) vradio_station_info_pane_t2_ParamLimits

0x1db6,	// (0x00072b43) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x00080577) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x00080577) vradio_station_info_pane_t

0x0f54,	// (0x00071ce1) vradio_tuning_pane

0x9d26,	// (0x0007aab3) vradio_rocker_control_pane_g1

0x2e2b,	// (0x00073bb8) vradio_rocker_control_pane_g2

0x9d2e,	// (0x0007aabb) vradio_rocker_control_pane_g3

0x9d36,	// (0x0007aac3) vradio_rocker_control_pane_g4

0x9d3e,	// (0x0007aacb) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x0008057c) vradio_rocker_control_pane_g

0x19f6,	// (0x00072783) vradio_frequency_info_pane_g1

0xe15d,	// (0x0007eeea) vradio_frequency_info_pane_t1_ParamLimits

0xe15d,	// (0x0007eeea) vradio_frequency_info_pane_t1

0x9d46,	// (0x0007aad3) vradio_tuning_pane_g1

0x9d4f,	// (0x0007aadc) vradio_tuning_pane_t1

0x626a,	// (0x00076ff7) area_side_right_pane_ParamLimits

0x626a,	// (0x00076ff7) area_side_right_pane

0x249c,	// (0x00073229) status_small_pane_g1

0x24a4,	// (0x00073231) status_small_pane_g2

0x24ad,	// (0x0007323a) status_small_pane_g3

0x24b6,	// (0x00073243) status_small_pane_g4

0x0003,

0xf5b6,	// (0x00080343) status_small_pane_g

0x24bf,	// (0x0007324c) status_small_pane_t1

0x644d,	// (0x000771da) main_video3_pane

0x2e33,	// (0x00073bc0) cams_zoom_vslider_pane

0x2e3b,	// (0x00073bc8) image3_wide_pane_ParamLimits

0x2e3b,	// (0x00073bc8) image3_wide_pane

0x2e55,	// (0x00073be2) image3_wide_small_pane

0x2e5f,	// (0x00073bec) main_video3_pane_g1_ParamLimits

0x2e5f,	// (0x00073bec) main_video3_pane_g1

0x2e7b,	// (0x00073c08) main_video3_pane_g2_ParamLimits

0x2e7b,	// (0x00073c08) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x00080587) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x00080587) main_video3_pane_g

0x2e97,	// (0x00073c24) main_video3_pane_t1_ParamLimits

0x2e97,	// (0x00073c24) main_video3_pane_t1

0x2ec2,	// (0x00073c4f) main_video3_pane_t2_ParamLimits

0x2ec2,	// (0x00073c4f) main_video3_pane_t2

0x2eed,	// (0x00073c7a) main_video3_pane_t3_ParamLimits

0x2eed,	// (0x00073c7a) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x0008058c) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x0008058c) main_video3_pane_t

0x2f18,	// (0x00073ca5) cams_zoom_vslider_pane_g1

0x2f21,	// (0x00073cae) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x00080593) cams_zoom_vslider_pane_g

0x2f29,	// (0x00073cb6) small_slider_vertical_pane

0x19f6,	// (0x00072783) small_slider_vertical_pane_g1

0x19f6,	// (0x00072783) small_slider_vertical_pane_g2

0x2f31,	// (0x00073cbe) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x00080598) small_slider_vertical_pane_g

0x644d,	// (0x000771da) main_hwr_training_pane

0x2f3a,	// (0x00073cc7) hwr_training_instruct_pane_ParamLimits

0x2f3a,	// (0x00073cc7) hwr_training_instruct_pane

0x9d5e,	// (0x0007aaeb) hwr_training_navi_pane_ParamLimits

0x9d5e,	// (0x0007aaeb) hwr_training_navi_pane

0x9d72,	// (0x0007aaff) hwr_training_write_pane_ParamLimits

0x9d72,	// (0x0007aaff) hwr_training_write_pane

0x0f54,	// (0x00071ce1) bg_frame_shadow_pane

0x2f69,	// (0x00073cf6) hwr_training_write_pane_g1

0x2f71,	// (0x00073cfe) hwr_training_write_pane_g2

0x2f79,	// (0x00073d06) hwr_training_write_pane_g3

0x2f81,	// (0x00073d0e) hwr_training_write_pane_g4

0x2f89,	// (0x00073d16) hwr_training_write_pane_g5

0x2f91,	// (0x00073d1e) hwr_training_write_pane_g6

0x2f99,	// (0x00073d26) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0008059f) hwr_training_write_pane_g

0x9da0,	// (0x0007ab2d) hwr_training_navi_pane_g1_ParamLimits

0x9da0,	// (0x0007ab2d) hwr_training_navi_pane_g1

0x9db2,	// (0x0007ab3f) hwr_training_navi_pane_g2_ParamLimits

0x9db2,	// (0x0007ab3f) hwr_training_navi_pane_g2

0x9dc4,	// (0x0007ab51) hwr_training_navi_pane_g3_ParamLimits

0x9dc4,	// (0x0007ab51) hwr_training_navi_pane_g3

0x9dd4,	// (0x0007ab61) hwr_training_navi_pane_g4_ParamLimits

0x9dd4,	// (0x0007ab61) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x000805ae) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x000805ae) hwr_training_navi_pane_g

0x9dee,	// (0x0007ab7b) hwr_training_navi_pane_t1

0x9dfc,	// (0x0007ab89) list_single_hwr_training_instruct_pane_ParamLimits

0x9dfc,	// (0x0007ab89) list_single_hwr_training_instruct_pane

0x2fa1,	// (0x00073d2e) list_single_hwr_training_instruct_pane_t1

0x27e0,	// (0x0007356d) bg_frame_shadow_pane_g1

0x2fb0,	// (0x00073d3d) bg_frame_shadow_pane_g2

0x2fb8,	// (0x00073d45) bg_frame_shadow_pane_g3

0x2fc0,	// (0x00073d4d) bg_frame_shadow_pane_g4

0x2fc8,	// (0x00073d55) bg_frame_shadow_pane_g5

0x2fd0,	// (0x00073d5d) bg_frame_shadow_pane_g6

0x2fd8,	// (0x00073d65) bg_frame_shadow_pane_g7

0x1846,	// (0x000725d3) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x000805b9) bg_frame_shadow_pane_g

0x644d,	// (0x000771da) main_video_tele_dialer_pane

0x9e14,	// (0x0007aba1) aid_size_cell_video_keypad_ParamLimits

0x9e14,	// (0x0007aba1) aid_size_cell_video_keypad

0x9e24,	// (0x0007abb1) grid_video_dialer_keypad_pane_ParamLimits

0x9e24,	// (0x0007abb1) grid_video_dialer_keypad_pane

0x9e54,	// (0x0007abe1) video_down_pane_cp_ParamLimits

0x9e54,	// (0x0007abe1) video_down_pane_cp

0x9e7c,	// (0x0007ac09) cell_video_dialer_keypad_pane_ParamLimits

0x9e7c,	// (0x0007ac09) cell_video_dialer_keypad_pane

0x2fe0,	// (0x00073d6d) bg_button_pane_cp08_ParamLimits

0x2fe0,	// (0x00073d6d) bg_button_pane_cp08

0x9e91,	// (0x0007ac1e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9e91,	// (0x0007ac1e) cell_video_dialer_keypad_pane_g1

0x98ba,	// (0x0007a647) mup3_rocker2_pane_ParamLimits

0x98ba,	// (0x0007a647) mup3_rocker2_pane

0x19f6,	// (0x00072783) mup3_rocker2_pane_g1

0x8d54,	// (0x00079ae1) main_dialer2_pane

0x644d,	// (0x000771da) main_mp4_pane

0x9ee6,	// (0x0007ac73) main_mp4_pane_g1_ParamLimits

0x9ee6,	// (0x0007ac73) main_mp4_pane_g1

0x9ef4,	// (0x0007ac81) main_mp4_pane_g2_ParamLimits

0x9ef4,	// (0x0007ac81) main_mp4_pane_g2

0x9f02,	// (0x0007ac8f) main_mp4_pane_g3_ParamLimits

0x9f02,	// (0x0007ac8f) main_mp4_pane_g3

0x9f37,	// (0x0007acc4) main_mp4_pane_g4_ParamLimits

0x9f37,	// (0x0007acc4) main_mp4_pane_g4

0x9f65,	// (0x0007acf2) main_mp4_pane_g5_ParamLimits

0x9f65,	// (0x0007acf2) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x000805d9) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x000805d9) main_mp4_pane_g

0x9fd9,	// (0x0007ad66) main_mp4_pane_t1_ParamLimits

0x9fd9,	// (0x0007ad66) main_mp4_pane_t1

0xa031,	// (0x0007adbe) main_mp4_pane_t2_ParamLimits

0xa031,	// (0x0007adbe) main_mp4_pane_t2

0x2fec,	// (0x00073d79) main_mp4_pane_t3_ParamLimits

0x2fec,	// (0x00073d79) main_mp4_pane_t3

0xa083,	// (0x0007ae10) main_mp4_pane_t4_ParamLimits

0xa083,	// (0x0007ae10) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000805ea) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000805ea) main_mp4_pane_t

0xa0c3,	// (0x0007ae50) mp4_progress_pane_ParamLimits

0xa0c3,	// (0x0007ae50) mp4_progress_pane

0xa107,	// (0x0007ae94) mp4_rocker_pane_ParamLimits

0xa107,	// (0x0007ae94) mp4_rocker_pane

0x301a,	// (0x00073da7) mp4_progress_pane_t1

0x3031,	// (0x00073dbe) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000805f3) mp4_progress_pane_t

0x3048,	// (0x00073dd5) mup_progress_pane_cp04

0x3807,	// (0x00074594) mp4_rocker_pane_g1

0x6437,	// (0x000771c4) aid_cell_size_keypad2_ParamLimits

0x6437,	// (0x000771c4) aid_cell_size_keypad2

0xa125,	// (0x0007aeb2) dialer2_ne_pane_ParamLimits

0xa125,	// (0x0007aeb2) dialer2_ne_pane

0x6437,	// (0x000771c4) grid_dialer2_keypad_pane_ParamLimits

0x6437,	// (0x000771c4) grid_dialer2_keypad_pane

0x2570,	// (0x000732fd) bg_popup_call_pane_cp07_ParamLimits

0x2570,	// (0x000732fd) bg_popup_call_pane_cp07

0xe15d,	// (0x0007eeea) dialer2_ne_pane_t1_ParamLimits

0xe15d,	// (0x0007eeea) dialer2_ne_pane_t1

0xa134,	// (0x0007aec1) cell_dialer2_keypad_pane_ParamLimits

0xa134,	// (0x0007aec1) cell_dialer2_keypad_pane

0x3054,	// (0x00073de1) bg_button_pane_pane_cp04_ParamLimits

0x3054,	// (0x00073de1) bg_button_pane_pane_cp04

0x1695,	// (0x00072422) cell_dialer2_keypad_pane_g1_ParamLimits

0x1695,	// (0x00072422) cell_dialer2_keypad_pane_g1

0x702e,	// (0x00077dbb) aid_placing_vt_set_content_ParamLimits

0x702e,	// (0x00077dbb) aid_placing_vt_set_content

0x7054,	// (0x00077de1) aid_placing_vt_set_title_ParamLimits

0x7054,	// (0x00077de1) aid_placing_vt_set_title

0x644d,	// (0x000771da) main_image3_pane

0xa168,	// (0x0007aef5) area_side_right_pane_cp01_ParamLimits

0xa168,	// (0x0007aef5) area_side_right_pane_cp01

0xa195,	// (0x0007af22) main_image3_pane_g1_ParamLimits

0xa195,	// (0x0007af22) main_image3_pane_g1

0xa1a3,	// (0x0007af30) main_image3_pane_g2_ParamLimits

0xa1a3,	// (0x0007af30) main_image3_pane_g2

0xa1ba,	// (0x0007af47) main_image3_pane_g3_ParamLimits

0xa1ba,	// (0x0007af47) main_image3_pane_g3

0xa1d1,	// (0x0007af5e) main_image3_pane_g4_ParamLimits

0xa1d1,	// (0x0007af5e) main_image3_pane_g4

0x0003,

0xf875,	// (0x00080602) main_image3_pane_g_ParamLimits

0xf875,	// (0x00080602) main_image3_pane_g

0xa1e8,	// (0x0007af75) main_image3_pane_t1_ParamLimits

0xa1e8,	// (0x0007af75) main_image3_pane_t1

0xa20d,	// (0x0007af9a) main_image3_pane_t2_ParamLimits

0xa20d,	// (0x0007af9a) main_image3_pane_t2

0xa22c,	// (0x0007afb9) main_image3_pane_t3_ParamLimits

0xa22c,	// (0x0007afb9) main_image3_pane_t3

0x0003,

0xf87e,	// (0x0008060b) main_image3_pane_t_ParamLimits

0xf87e,	// (0x0008060b) main_image3_pane_t

0x1dca,	// (0x00072b57) grid_sctrl_middle_pane_cp01_ParamLimits

0x1dca,	// (0x00072b57) grid_sctrl_middle_pane_cp01

0xa287,	// (0x0007b014) cell_sctrl_middle_pane_cp01_ParamLimits

0xa287,	// (0x0007b014) cell_sctrl_middle_pane_cp01

0xa298,	// (0x0007b025) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa298,	// (0x0007b025) cell_sctrl_middle_pane_cp01_g1

0x644d,	// (0x000771da) main_call4_pane

0xa2a5,	// (0x0007b032) aid_size_button_call4_ParamLimits

0xa2a5,	// (0x0007b032) aid_size_button_call4

0xa2cf,	// (0x0007b05c) call4_windows_pane_ParamLimits

0xa2cf,	// (0x0007b05c) call4_windows_pane

0xa2e3,	// (0x0007b070) grid_call4_button_pane_ParamLimits

0xa2e3,	// (0x0007b070) grid_call4_button_pane

0x3088,	// (0x00073e15) call4_windows_conf_pane

0x309b,	// (0x00073e28) popup_call4_audio_first_window_ParamLimits

0x309b,	// (0x00073e28) popup_call4_audio_first_window

0x30db,	// (0x00073e68) popup_call4_audio_second_window_ParamLimits

0x30db,	// (0x00073e68) popup_call4_audio_second_window

0x30ed,	// (0x00073e7a) popup_call4_audio_wait_window_ParamLimits

0x30ed,	// (0x00073e7a) popup_call4_audio_wait_window

0xa305,	// (0x0007b092) cell_call4_button_pane_ParamLimits

0xa305,	// (0x0007b092) cell_call4_button_pane

0x17e6,	// (0x00072573) bg_button_pane_cp09_ParamLimits

0x17e6,	// (0x00072573) bg_button_pane_cp09

0xa328,	// (0x0007b0b5) cell_call4_button_pane_g1_ParamLimits

0xa328,	// (0x0007b0b5) cell_call4_button_pane_g1

0xa335,	// (0x0007b0c2) cell_call4_button_pane_t1_ParamLimits

0xa335,	// (0x0007b0c2) cell_call4_button_pane_t1

0x3101,	// (0x00073e8e) popup_call4_audio_conf_window_ParamLimits

0x3101,	// (0x00073e8e) popup_call4_audio_conf_window

0x98eb,	// (0x0007a678) mup3_progress_pane_t1_ParamLimits

0x9909,	// (0x0007a696) mup3_progress_pane_t2_ParamLimits

0x2b42,	// (0x000738cf) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x000804db) mup3_progress_pane_t_ParamLimits

0x2b5f,	// (0x000738ec) mup_progress_pane_cp03_ParamLimits

0x9d10,	// (0x0007aa9d) mup3_control_keys_pane_g4_copy1

0xa0f1,	// (0x0007ae7e) mp4_rocker2_pane_ParamLimits

0xa0f1,	// (0x0007ae7e) mp4_rocker2_pane

0x311d,	// (0x00073eaa) mp4_rocker2_pane_g1

0x3115,	// (0x00073ea2) mp4_rocker2_pane_g2

0xa379,	// (0x0007b106) mp4_rocker2_pane_g3

0xa381,	// (0x0007b10e) mp4_rocker2_pane_g4

0xa389,	// (0x0007b116) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x00080614) mp4_rocker2_pane_g

0x644d,	// (0x000771da) main_camera4_pane

0x644d,	// (0x000771da) main_video4_pane

0x9e30,	// (0x0007abbd) main_video_tele_dialer_pane_t1_ParamLimits

0x9e30,	// (0x0007abbd) main_video_tele_dialer_pane_t1

0x9e42,	// (0x0007abcf) main_video_tele_dialer_pane_t2_ParamLimits

0x9e42,	// (0x0007abcf) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x000805ca) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x000805ca) main_video_tele_dialer_pane_t

0xa3a7,	// (0x0007b134) cam4_autofocus_pane_ParamLimits

0xa3a7,	// (0x0007b134) cam4_autofocus_pane

0xa3bd,	// (0x0007b14a) cam4_image_uncrop_pane_ParamLimits

0xa3bd,	// (0x0007b14a) cam4_image_uncrop_pane

0xa3d2,	// (0x0007b15f) cam4_indicators_pane_ParamLimits

0xa3d2,	// (0x0007b15f) cam4_indicators_pane

0xa3ec,	// (0x0007b179) main_camera4_pane_g1_ParamLimits

0xa3ec,	// (0x0007b179) main_camera4_pane_g1

0xa3f8,	// (0x0007b185) main_camera4_pane_g2_ParamLimits

0xa3f8,	// (0x0007b185) main_camera4_pane_g2

0xa3f8,	// (0x0007b185) main_camera4_pane_g3_ParamLimits

0xa3f8,	// (0x0007b185) main_camera4_pane_g3

0xa404,	// (0x0007b191) main_camera4_pane_g4_ParamLimits

0xa404,	// (0x0007b191) main_camera4_pane_g4

0xa410,	// (0x0007b19d) main_camera4_pane_g5_ParamLimits

0xa410,	// (0x0007b19d) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0008061f) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0008061f) main_camera4_pane_g

0xa42a,	// (0x0007b1b7) main_camera4_pane_t1_ParamLimits

0xa42a,	// (0x0007b1b7) main_camera4_pane_t1

0xa472,	// (0x0007b1ff) bg_tb_trans_pane_cp06

0xa488,	// (0x0007b215) cam4_indicators_pane_g1

0xa498,	// (0x0007b225) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x0008063a) cam4_indicators_pane_g

0xa4b8,	// (0x0007b245) cam4_indicators_pane_t1

0xa4e0,	// (0x0007b26d) main_video4_pane_g1_ParamLimits

0xa4e0,	// (0x0007b26d) main_video4_pane_g1

0xa3f8,	// (0x0007b185) main_video4_pane_g2_ParamLimits

0xa3f8,	// (0x0007b185) main_video4_pane_g2

0xa3f8,	// (0x0007b185) main_video4_pane_g3_ParamLimits

0xa3f8,	// (0x0007b185) main_video4_pane_g3

0xa404,	// (0x0007b191) main_video4_pane_g4_ParamLimits

0xa404,	// (0x0007b191) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x00080641) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x00080641) main_video4_pane_g

0xa4f4,	// (0x0007b281) vid4_indicators_pane_ParamLimits

0xa4f4,	// (0x0007b281) vid4_indicators_pane

0xa512,	// (0x0007b29f) video4_image_uncrop_cif_pane_ParamLimits

0xa512,	// (0x0007b29f) video4_image_uncrop_cif_pane

0xa51f,	// (0x0007b2ac) video4_image_uncrop_nhd_pane_ParamLimits

0xa51f,	// (0x0007b2ac) video4_image_uncrop_nhd_pane

0xa3bd,	// (0x0007b14a) video4_image_uncrop_vga_pane_ParamLimits

0xa3bd,	// (0x0007b14a) video4_image_uncrop_vga_pane

0x8d46,	// (0x00079ad3) bg_tb_trans_pane_cp07

0xa488,	// (0x0007b215) vid4_indicators_pane_g1

0xa52c,	// (0x0007b2b9) vid4_indicators_pane_g2

0xa53c,	// (0x0007b2c9) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x0008064c) vid4_indicators_pane_g

0xa569,	// (0x0007b2f6) vid4_indicators_pane_t1

0xa583,	// (0x0007b310) cam4_autofocus_pane_g1

0xa58b,	// (0x0007b318) cam4_autofocus_pane_g2

0xa593,	// (0x0007b320) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x00080657) cam4_autofocus_pane_g

0xa59b,	// (0x0007b328) cam4_autofocus_pane_g3_copy1

0x9e60,	// (0x0007abed) video_down_pane_cp_t1

0x9e6e,	// (0x0007abfb) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x000805cf) video_down_pane_cp_t

0x6437,	// (0x000771c4) popup_vitu2_window_ParamLimits

0x6437,	// (0x000771c4) popup_vitu2_window

0xa5a3,	// (0x0007b330) aid_size_cell2_itu2_ParamLimits

0xa5a3,	// (0x0007b330) aid_size_cell2_itu2

0xa5c5,	// (0x0007b352) aid_size_cell_itu2_ParamLimits

0xa5c5,	// (0x0007b352) aid_size_cell_itu2

0xa603,	// (0x0007b390) bg_popup_window_pane_cp09_ParamLimits

0xa603,	// (0x0007b390) bg_popup_window_pane_cp09

0xa611,	// (0x0007b39e) field_vitu2_entry_pane_ParamLimits

0xa611,	// (0x0007b39e) field_vitu2_entry_pane

0xa627,	// (0x0007b3b4) grid_vitu2_function_pane_ParamLimits

0xa627,	// (0x0007b3b4) grid_vitu2_function_pane

0xa659,	// (0x0007b3e6) grid_vitu2_itu_pane_ParamLimits

0xa659,	// (0x0007b3e6) grid_vitu2_itu_pane

0xa6b3,	// (0x0007b440) cell_vitu2_itu_pane_ParamLimits

0xa6b3,	// (0x0007b440) cell_vitu2_itu_pane

0xa6cb,	// (0x0007b458) cell_vitu2_function_pane_ParamLimits

0xa6cb,	// (0x0007b458) cell_vitu2_function_pane

0x3125,	// (0x00073eb2) bg_popup_call_pane_cp08_ParamLimits

0x3125,	// (0x00073eb2) bg_popup_call_pane_cp08

0x313c,	// (0x00073ec9) field_vitu2_entry_pane_g1

0x3148,	// (0x00073ed5) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0008065e) field_vitu2_entry_pane_g

0xa70a,	// (0x0007b497) field_vitu2_entry_pane_t1_ParamLimits

0xa70a,	// (0x0007b497) field_vitu2_entry_pane_t1

0x3154,	// (0x00073ee1) field_vitu2_entry_pane_t2_ParamLimits

0x3154,	// (0x00073ee1) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x00080665) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x00080665) field_vitu2_entry_pane_t

0xa738,	// (0x0007b4c5) bg_button_pane_cp010_ParamLimits

0xa738,	// (0x0007b4c5) bg_button_pane_cp010

0xa746,	// (0x0007b4d3) cell_vitu2_itu_pane_g1

0xa766,	// (0x0007b4f3) cell_vitu2_itu_pane_t1_ParamLimits

0xa766,	// (0x0007b4f3) cell_vitu2_itu_pane_t1

0x6117,	// (0x00076ea4) cell_vitu2_itu_pane_t2_ParamLimits

0x6117,	// (0x00076ea4) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0008066f) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0008066f) cell_vitu2_itu_pane_t

0x8d46,	// (0x00079ad3) bg_button_pane_cp011

0xa7b2,	// (0x0007b53f) cell_vitu2_function_pane_g1

0x644d,	// (0x000771da) main_myfav_hc_pane

0xa26c,	// (0x0007aff9) popup_image3_note_pane_ParamLimits

0xa26c,	// (0x0007aff9) popup_image3_note_pane

0xa278,	// (0x0007b005) popup_image3_tool_bar_pane_ParamLimits

0xa278,	// (0x0007b005) popup_image3_tool_bar_pane

0x618d,	// (0x00076f1a) cell_vitu2_itu_pane_t3_ParamLimits

0x618d,	// (0x00076f1a) cell_vitu2_itu_pane_t3

0x0f54,	// (0x00071ce1) bg_popup_trans_pane

0x3179,	// (0x00073f06) grid_image3_tool_bar_pane

0x3183,	// (0x00073f10) bg_popup_trans_pane_g1

0x1c52,	// (0x000729df) bg_popup_trans_pane_g2

0x318b,	// (0x00073f18) bg_popup_trans_pane_g3

0x3193,	// (0x00073f20) bg_popup_trans_pane_g4

0x319b,	// (0x00073f28) bg_popup_trans_pane_g5

0x31a3,	// (0x00073f30) bg_popup_trans_pane_g6

0x31ab,	// (0x00073f38) bg_popup_trans_pane_g7

0x31b3,	// (0x00073f40) bg_popup_trans_pane_g8

0x1c32,	// (0x000729bf) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x00080676) bg_popup_trans_pane_g

0x31bb,	// (0x00073f48) cell_image3_tool_bar_pane_ParamLimits

0x31bb,	// (0x00073f48) cell_image3_tool_bar_pane

0x19f6,	// (0x00072783) cell_image3_tool_bar_pane_g1

0x0f54,	// (0x00071ce1) bg_popup_trans_pane_cp1

0x31cf,	// (0x00073f5c) popup_image3_note_pane_t1

0x31dd,	// (0x00073f6a) popup_image3_note_pane_t2

0x31eb,	// (0x00073f78) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00080689) popup_image3_note_pane_t

0x31f9,	// (0x00073f86) popup_image3_note_pane_t3_copy1

0xa7c6,	// (0x0007b553) bg_myfav_hc_instruction_pane_ParamLimits

0xa7c6,	// (0x0007b553) bg_myfav_hc_instruction_pane

0xa7d8,	// (0x0007b565) cell_myfav_contact_pane_ParamLimits

0xa7d8,	// (0x0007b565) cell_myfav_contact_pane

0xa7f2,	// (0x0007b57f) cell_myfav_contact_pane_cp1_ParamLimits

0xa7f2,	// (0x0007b57f) cell_myfav_contact_pane_cp1

0xa808,	// (0x0007b595) cell_myfav_contact_pane_cp2_ParamLimits

0xa808,	// (0x0007b595) cell_myfav_contact_pane_cp2

0xa81e,	// (0x0007b5ab) cell_myfav_contact_pane_cp3_ParamLimits

0xa81e,	// (0x0007b5ab) cell_myfav_contact_pane_cp3

0xa833,	// (0x0007b5c0) cell_myfav_contact_pane_cp4_ParamLimits

0xa833,	// (0x0007b5c0) cell_myfav_contact_pane_cp4

0xa847,	// (0x0007b5d4) cell_myfav_contact_pane_cp5_ParamLimits

0xa847,	// (0x0007b5d4) cell_myfav_contact_pane_cp5

0xa85b,	// (0x0007b5e8) cell_myfav_contact_pane_cp6_ParamLimits

0xa85b,	// (0x0007b5e8) cell_myfav_contact_pane_cp6

0xa86f,	// (0x0007b5fc) cell_myfav_contact_pane_cp7_ParamLimits

0xa86f,	// (0x0007b5fc) cell_myfav_contact_pane_cp7

0x3207,	// (0x00073f94) listscroll_gen_pane_cp05

0xa887,	// (0x0007b614) main_myfav_hc_pane_g1_ParamLimits

0xa887,	// (0x0007b614) main_myfav_hc_pane_g1

0xa89d,	// (0x0007b62a) main_myfav_hc_pane_g2_ParamLimits

0xa89d,	// (0x0007b62a) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00080690) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00080690) main_myfav_hc_pane_g

0xa8c7,	// (0x0007b654) main_myfav_hc_pane_t1_ParamLimits

0xa8c7,	// (0x0007b654) main_myfav_hc_pane_t1

0x3210,	// (0x00073f9d) main_myfav_hc_pane_t2_ParamLimits

0x3210,	// (0x00073f9d) main_myfav_hc_pane_t2

0x3222,	// (0x00073faf) main_myfav_hc_pane_t3_ParamLimits

0x3222,	// (0x00073faf) main_myfav_hc_pane_t3

0xa8dc,	// (0x0007b669) main_myfav_hc_pane_t4_ParamLimits

0xa8dc,	// (0x0007b669) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x00080697) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x00080697) main_myfav_hc_pane_t

0x19f6,	// (0x00072783) bg_myfav_hc_instruction_pane_g1

0x3234,	// (0x00073fc1) cell_myfav_contact_pane_g1_ParamLimits

0x3234,	// (0x00073fc1) cell_myfav_contact_pane_g1

0x3234,	// (0x00073fc1) cell_myfav_contact_pane_g2_ParamLimits

0x3234,	// (0x00073fc1) cell_myfav_contact_pane_g2

0x3240,	// (0x00073fcd) cell_myfav_contact_pane_g3_ParamLimits

0x3240,	// (0x00073fcd) cell_myfav_contact_pane_g3

0x16a3,	// (0x00072430) cell_myfav_contact_pane_g4_ParamLimits

0x16a3,	// (0x00072430) cell_myfav_contact_pane_g4

0x324d,	// (0x00073fda) cell_myfav_contact_pane_g5_ParamLimits

0x324d,	// (0x00073fda) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x000806a2) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x000806a2) cell_myfav_contact_pane_g

0xa8b3,	// (0x0007b640) main_myfav_hc_pane_g3_ParamLimits

0xa8b3,	// (0x0007b640) main_myfav_hc_pane_g3

0x637b,	// (0x00077108) popup_adpt_find_window

0xa900,	// (0x0007b68d) afind_page_pane_ParamLimits

0xa900,	// (0x0007b68d) afind_page_pane

0xa90d,	// (0x0007b69a) aid_size_cell_afind_ParamLimits

0xa90d,	// (0x0007b69a) aid_size_cell_afind

0xa927,	// (0x0007b6b4) bg_popup_sub_pane_cp09_ParamLimits

0xa927,	// (0x0007b6b4) bg_popup_sub_pane_cp09

0xa934,	// (0x0007b6c1) find_pane_cp01_ParamLimits

0xa934,	// (0x0007b6c1) find_pane_cp01

0x3259,	// (0x00073fe6) grid_afind_control_pane_ParamLimits

0x3259,	// (0x00073fe6) grid_afind_control_pane

0xa941,	// (0x0007b6ce) grid_afind_pane_ParamLimits

0xa941,	// (0x0007b6ce) grid_afind_pane

0xa957,	// (0x0007b6e4) cell_afind_pane_ParamLimits

0xa957,	// (0x0007b6e4) cell_afind_pane

0x19f6,	// (0x00072783) afind_page_pane_g1

0xa98d,	// (0x0007b71a) afind_page_pane_g2

0xa996,	// (0x0007b723) afind_page_pane_g3

0x0002,

0xf920,	// (0x000806ad) afind_page_pane_g

0xa99f,	// (0x0007b72c) afind_page_pane_t1

0x326d,	// (0x00073ffa) cell_afind_grid_control_pane_ParamLimits

0x326d,	// (0x00073ffa) cell_afind_grid_control_pane

0x327c,	// (0x00074009) bg_button_pane_cp69_ParamLimits

0x327c,	// (0x00074009) bg_button_pane_cp69

0xa9bf,	// (0x0007b74c) cell_afind_pane_g1_ParamLimits

0xa9bf,	// (0x0007b74c) cell_afind_pane_g1

0xa9cc,	// (0x0007b759) cell_afind_pane_t1_ParamLimits

0xa9cc,	// (0x0007b759) cell_afind_pane_t1

0x1a00,	// (0x0007278d) bg_button_pane_cp72

0x3288,	// (0x00074015) cell_afind_grid_control_pane_g1

0x896b,	// (0x000796f8) aid_image_placing_area_ParamLimits

0x896b,	// (0x000796f8) aid_image_placing_area

0x1695,	// (0x00072422) field_vitu_entry_pane_g1_ParamLimits

0x1695,	// (0x00072422) field_vitu_entry_pane_g1

0x1695,	// (0x00072422) field_vitu_entry_pane_g2_ParamLimits

0x1695,	// (0x00072422) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0008055a) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0008055a) field_vitu_entry_pane_g

0x2e0f,	// (0x00073b9c) cell_vitu_itu_pane_g1_ParamLimits

0x2df2,	// (0x00073b7f) cell_vitu_itu_pane_t3_ParamLimits

0x2df2,	// (0x00073b7f) cell_vitu_itu_pane_t3

0x301a,	// (0x00073da7) mp4_progress_pane_t1_ParamLimits

0x3031,	// (0x00073dbe) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000805f3) mp4_progress_pane_t_ParamLimits

0x3048,	// (0x00073dd5) mup_progress_pane_cp04_ParamLimits

0xa8ee,	// (0x0007b67b) main_myfav_hc_pane_t5_ParamLimits

0xa8ee,	// (0x0007b67b) main_myfav_hc_pane_t5

0x610f,	// (0x00076e9c) aid_zoom_text_primary

0x637b,	// (0x00077108) popup_adpt_find_window_ParamLimits

0x8d46,	// (0x00079ad3) main_cam_set_pane

0xa3e0,	// (0x0007b16d) cam4_zoom_pane_ParamLimits

0xa3e0,	// (0x0007b16d) cam4_zoom_pane

0xa9de,	// (0x0007b76b) main_cam_set_pane_g1_ParamLimits

0xa9de,	// (0x0007b76b) main_cam_set_pane_g1

0xa9ec,	// (0x0007b779) main_cam_set_pane_g2_ParamLimits

0xa9ec,	// (0x0007b779) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x000806b4) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x000806b4) main_cam_set_pane_g

0xa9f8,	// (0x0007b785) main_cam_set_pane_t1_ParamLimits

0xa9f8,	// (0x0007b785) main_cam_set_pane_t1

0xaa0a,	// (0x0007b797) main_cset_listscroll_pane_ParamLimits

0xaa0a,	// (0x0007b797) main_cset_listscroll_pane

0xaa38,	// (0x0007b7c5) main_cset_slider_pane_ParamLimits

0xaa38,	// (0x0007b7c5) main_cset_slider_pane

0x3299,	// (0x00074026) main_cset_list_pane_ParamLimits

0x3299,	// (0x00074026) main_cset_list_pane

0x32a9,	// (0x00074036) scroll_pane_cp028

0xaa57,	// (0x0007b7e4) aid_area_touch_slider

0xaa73,	// (0x0007b800) cset_slider_pane

0xaa96,	// (0x0007b823) main_cset_slider_pane_g1

0xaaab,	// (0x0007b838) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x000806b9) main_cset_slider_pane_g

0x32e2,	// (0x0007406f) main_cset_slider_pane_t1

0xab67,	// (0x0007b8f4) main_cset_slider_pane_t2

0xab81,	// (0x0007b90e) main_cset_slider_pane_t3

0xab9b,	// (0x0007b928) main_cset_slider_pane_t4

0xabb5,	// (0x0007b942) main_cset_slider_pane_t5

0xabcf,	// (0x0007b95c) main_cset_slider_pane_t6

0xabe4,	// (0x0007b971) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000806de) main_cset_slider_pane_t

0xace8,	// (0x0007ba75) cset_list_set_pane_ParamLimits

0xace8,	// (0x0007ba75) cset_list_set_pane

0x337c,	// (0x00074109) aid_position_infowindow_above

0x3384,	// (0x00074111) aid_position_infowindow_below

0xacf8,	// (0x0007ba85) cset_list_set_pane_g1_ParamLimits

0xacf8,	// (0x0007ba85) cset_list_set_pane_g1

0xad04,	// (0x0007ba91) cset_list_set_pane_g3_ParamLimits

0xad04,	// (0x0007ba91) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x000806fd) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x000806fd) cset_list_set_pane_g

0xad13,	// (0x0007baa0) cset_list_set_pane_t1_ParamLimits

0xad13,	// (0x0007baa0) cset_list_set_pane_t1

0xe171,	// (0x0007eefe) list_highlight_pane_cp021_ParamLimits

0xe171,	// (0x0007eefe) list_highlight_pane_cp021

0xe1e1,	// (0x0007ef6e) cset_slider_pane_g1

0xe1f3,	// (0x0007ef80) cset_slider_pane_g2

0xe1ea,	// (0x0007ef77) cset_slider_pane_g3

0x0002,

0xf975,	// (0x00080702) cset_slider_pane_g

0xad28,	// (0x0007bab5) aid_area_touch_cam4_zoom

0xad30,	// (0x0007babd) cam4_zoom_cont_pane

0xad38,	// (0x0007bac5) cam4_zoom_pane_g1

0xad40,	// (0x0007bacd) cam4_zoom_pane_g2

0xad48,	// (0x0007bad5) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x00080709) cam4_zoom_pane_g

0xad50,	// (0x0007badd) cam4_zoom_cont_pane_g1

0xad59,	// (0x0007bae6) cam4_zoom_cont_pane_g2

0xad62,	// (0x0007baef) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x00080710) cam4_zoom_cont_pane_g

0xa2bf,	// (0x0007b04c) call4_image_pane_ParamLimits

0xa2bf,	// (0x0007b04c) call4_image_pane

0x3088,	// (0x00073e15) call4_windows_conf_pane_ParamLimits

0x30bb,	// (0x00073e48) popup_call4_audio_in_window_ParamLimits

0x30bb,	// (0x00073e48) popup_call4_audio_in_window

0x0f54,	// (0x00071ce1) bg_popup_call2_act_pane_cp02

0x30f9,	// (0x00073e86) call4_list_conf_pane

0x19f6,	// (0x00072783) call4_image_pane_g1

0x19f6,	// (0x00072783) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) call4_image_pane_g

0x33a7,	// (0x00074134) list_single_graphic_popup_conf4_pane_ParamLimits

0x33a7,	// (0x00074134) list_single_graphic_popup_conf4_pane

0x0f54,	// (0x00071ce1) list_highlight_pane_cp022

0x33b4,	// (0x00074141) list_single_graphic_popup_conf4_pane_g1

0xde17,	// (0x0007eba4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x00080717) list_single_graphic_popup_conf4_pane_g

0x33bc,	// (0x00074149) list_single_graphic_popup_conf4_pane_t1

0x7198,	// (0x00077f25) popup_vtel_slider_window_ParamLimits

0x7198,	// (0x00077f25) popup_vtel_slider_window

0x1db6,	// (0x00072b43) dialer2_ne_pane_t2_ParamLimits

0x1db6,	// (0x00072b43) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x000805f8) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x000805f8) dialer2_ne_pane_t

0xe171,	// (0x0007eefe) bg_popup_sub_pane_cp010_ParamLimits

0xe171,	// (0x0007eefe) bg_popup_sub_pane_cp010

0xad6b,	// (0x0007baf8) popup_vtel_slider_window_g1_ParamLimits

0xad6b,	// (0x0007baf8) popup_vtel_slider_window_g1

0xad77,	// (0x0007bb04) popup_vtel_slider_window_g2_ParamLimits

0xad77,	// (0x0007bb04) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x0008071c) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x0008071c) popup_vtel_slider_window_g

0xadbd,	// (0x0007bb4a) vtel_slider_pane_ParamLimits

0xadbd,	// (0x0007bb4a) vtel_slider_pane

0xadcc,	// (0x0007bb59) vtel_slider_pane_g1_ParamLimits

0xadcc,	// (0x0007bb59) vtel_slider_pane_g1

0xadd9,	// (0x0007bb66) vtel_slider_pane_g2_ParamLimits

0xadd9,	// (0x0007bb66) vtel_slider_pane_g2

0xade6,	// (0x0007bb73) vtel_slider_pane_g3_ParamLimits

0xade6,	// (0x0007bb73) vtel_slider_pane_g3

0xadcc,	// (0x0007bb59) vtel_slider_pane_g4_ParamLimits

0xadcc,	// (0x0007bb59) vtel_slider_pane_g4

0xadf3,	// (0x0007bb80) vtel_slider_pane_g5_ParamLimits

0xadf3,	// (0x0007bb80) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x00080725) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x00080725) vtel_slider_pane_g

0x8d46,	// (0x00079ad3) main_gallery2_pane

0xa5eb,	// (0x0007b378) aid_size_row_itut2_dropdow_list_ParamLimits

0xa5eb,	// (0x0007b378) aid_size_row_itut2_dropdow_list

0xa63f,	// (0x0007b3cc) grid_vitu2_function_top_pane_ParamLimits

0xa63f,	// (0x0007b3cc) grid_vitu2_function_top_pane

0xa67d,	// (0x0007b40a) popup_vitu2_dropdown_list_window_ParamLimits

0xa67d,	// (0x0007b40a) popup_vitu2_dropdown_list_window

0xa697,	// (0x0007b424) popup_vitu2_match_list_window

0xae00,	// (0x0007bb8d) cell_vitu2_function_top_pane_ParamLimits

0xae00,	// (0x0007bb8d) cell_vitu2_function_top_pane

0xae18,	// (0x0007bba5) cell_vitu2_function_top_pane_cp01_ParamLimits

0xae18,	// (0x0007bba5) cell_vitu2_function_top_pane_cp01

0xae34,	// (0x0007bbc1) cell_vitu2_function_top_wide_pane_ParamLimits

0xae34,	// (0x0007bbc1) cell_vitu2_function_top_wide_pane

0x8d46,	// (0x00079ad3) bg_button_pane_cp012

0xae51,	// (0x0007bbde) cell_vitu2_function_top_pane_g1

0xae65,	// (0x0007bbf2) bg_button_pane_cp013_ParamLimits

0xae65,	// (0x0007bbf2) bg_button_pane_cp013

0xae81,	// (0x0007bc0e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xae81,	// (0x0007bc0e) cell_vitu2_function_top_wide_pane_g1

0x6437,	// (0x000771c4) bg_popup_sub_pane_cp20

0xae99,	// (0x0007bc26) list_vitu2_match_list_pane

0x3183,	// (0x00073f10) bg_popup_sub_pane_cp20_g1

0x318b,	// (0x00073f18) bg_popup_sub_pane_cp20_g2

0x1c52,	// (0x000729df) bg_popup_sub_pane_cp20_g3

0x3193,	// (0x00073f20) bg_popup_sub_pane_cp20_g4

0x1c32,	// (0x000729bf) bg_popup_sub_pane_cp20_g5

0x33d2,	// (0x0007415f) bg_popup_sub_pane_cp20_g6

0x31a3,	// (0x00073f30) bg_popup_sub_pane_cp20_g7

0x31ab,	// (0x00073f38) bg_popup_sub_pane_cp20_g8

0x31b3,	// (0x00073f40) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x00080730) bg_popup_sub_pane_cp20_g

0xaeb1,	// (0x0007bc3e) list_vitu2_match_list_item_pane_ParamLimits

0xaeb1,	// (0x0007bc3e) list_vitu2_match_list_item_pane

0xaec3,	// (0x0007bc50) list_vitu2_match_list_item_pane_t1

0x644d,	// (0x000771da) bg_popup_sub_pane_cp21

0xaed1,	// (0x0007bc5e) grid_vitu2_dropdown_list_pane

0xaed9,	// (0x0007bc66) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaed9,	// (0x0007bc66) cell_vitu2_dropdown_list_char_pane

0xaefa,	// (0x0007bc87) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xaefa,	// (0x0007bc87) cell_vitu2_dropdown_list_ctrl_pane

0x33ec,	// (0x00074179) cell_vitu2_dropdown_list_char_pane_g1

0x33e3,	// (0x00074170) cell_vitu2_dropdown_list_char_pane_g2

0x33da,	// (0x00074167) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0008074d) cell_vitu2_dropdown_list_char_pane_g

0xaf24,	// (0x0007bcb1) cell_vitu2_dropdown_list_char_pane_t1

0xaf32,	// (0x0007bcbf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xaf32,	// (0x0007bcbf) cell_vitu2_dropdown_list_ctrl_pane_g1

0xaf42,	// (0x0007bccf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xaf42,	// (0x0007bccf) cell_vitu2_dropdown_list_ctrl_pane_g2

0xaf53,	// (0x0007bce0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xaf53,	// (0x0007bce0) cell_vitu2_dropdown_list_ctrl_pane_g3

0xaf63,	// (0x0007bcf0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xaf63,	// (0x0007bcf0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa472,	// (0x0007b1ff) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa472,	// (0x0007b1ff) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x00080754) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x00080754) cell_vitu2_dropdown_list_ctrl_pane_g

0xaf7c,	// (0x0007bd09) aid_size_cell_gallery2_ParamLimits

0xaf7c,	// (0x0007bd09) aid_size_cell_gallery2

0xaf96,	// (0x0007bd23) grid_gallery2_pane_ParamLimits

0xaf96,	// (0x0007bd23) grid_gallery2_pane

0x9c3a,	// (0x0007a9c7) scroll_pane_cp029_ParamLimits

0x9c3a,	// (0x0007a9c7) scroll_pane_cp029

0xafa7,	// (0x0007bd34) cell_gallery2_pane_ParamLimits

0xafa7,	// (0x0007bd34) cell_gallery2_pane

0x33f5,	// (0x00074182) cell_gallery2_pane_g2

0xaff4,	// (0x0007bd81) cell_gallery2_pane_g3

0x33fd,	// (0x0007418a) cell_gallery2_pane_g4

0x3405,	// (0x00074192) cell_gallery2_pane_g5

0x1992,	// (0x0007271f) grid_highlight_pane_cp10

0xa697,	// (0x0007b424) popup_vitu2_match_list_window_ParamLimits

0xa6a7,	// (0x0007b434) popup_vitu2_query_window_ParamLimits

0xa6a7,	// (0x0007b434) popup_vitu2_query_window

0x644d,	// (0x000771da) bg_vitu2_candi_button_pane

0x33ec,	// (0x00074179) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x33e3,	// (0x00074170) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x33da,	// (0x00074167) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xaffc,	// (0x0007bd89) bg_button_pane_cp015

0xb00c,	// (0x0007bd99) bg_button_pane_cp016

0xb01f,	// (0x0007bdac) bg_button_pane_cp017

0xee2a,	// (0x0007fbb7) bg_popup_sub_pane_cp22

0x340d,	// (0x0007419a) popup_vitu2_query_window_g1

0xb062,	// (0x0007bdef) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0008075f) popup_vitu2_query_window_g

0xb07d,	// (0x0007be0a) popup_vitu2_query_window_t1_ParamLimits

0xb07d,	// (0x0007be0a) popup_vitu2_query_window_t1

0xb0b0,	// (0x0007be3d) popup_vitu2_query_window_t2_ParamLimits

0xb0b0,	// (0x0007be3d) popup_vitu2_query_window_t2

0xb0c2,	// (0x0007be4f) popup_vitu2_query_window_t3_ParamLimits

0xb0c2,	// (0x0007be4f) popup_vitu2_query_window_t3

0xb0ea,	// (0x0007be77) popup_vitu2_query_window_t4_ParamLimits

0xb0ea,	// (0x0007be77) popup_vitu2_query_window_t4

0xb107,	// (0x0007be94) popup_vitu2_query_window_t5_ParamLimits

0xb107,	// (0x0007be94) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x00080766) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x00080766) popup_vitu2_query_window_t

0x3291,	// (0x0007401e) main_cset_text_pane

0xaa57,	// (0x0007b7e4) aid_area_touch_slider_ParamLimits

0xaa73,	// (0x0007b800) cset_slider_pane_ParamLimits

0xaa96,	// (0x0007b823) main_cset_slider_pane_g1_ParamLimits

0xaaab,	// (0x0007b838) main_cset_slider_pane_g2_ParamLimits

0x32b2,	// (0x0007403f) main_cset_slider_pane_g3_ParamLimits

0x32b2,	// (0x0007403f) main_cset_slider_pane_g3

0xaac0,	// (0x0007b84d) main_cset_slider_pane_g4_ParamLimits

0xaac0,	// (0x0007b84d) main_cset_slider_pane_g4

0xaacf,	// (0x0007b85c) main_cset_slider_pane_g5_ParamLimits

0xaacf,	// (0x0007b85c) main_cset_slider_pane_g5

0xaadb,	// (0x0007b868) main_cset_slider_pane_g6_ParamLimits

0xaadb,	// (0x0007b868) main_cset_slider_pane_g6

0xf92c,	// (0x000806b9) main_cset_slider_pane_g_ParamLimits

0x32e2,	// (0x0007406f) main_cset_slider_pane_t1_ParamLimits

0xab67,	// (0x0007b8f4) main_cset_slider_pane_t2_ParamLimits

0xab81,	// (0x0007b90e) main_cset_slider_pane_t3_ParamLimits

0xab9b,	// (0x0007b928) main_cset_slider_pane_t4_ParamLimits

0xabb5,	// (0x0007b942) main_cset_slider_pane_t5_ParamLimits

0xabcf,	// (0x0007b95c) main_cset_slider_pane_t6_ParamLimits

0xabe4,	// (0x0007b971) main_cset_slider_pane_t7_ParamLimits

0xac0e,	// (0x0007b99b) main_cset_slider_pane_t8_ParamLimits

0xac0e,	// (0x0007b99b) main_cset_slider_pane_t8

0xac36,	// (0x0007b9c3) main_cset_slider_pane_t9_ParamLimits

0xac36,	// (0x0007b9c3) main_cset_slider_pane_t9

0xac5e,	// (0x0007b9eb) main_cset_slider_pane_t10_ParamLimits

0xac5e,	// (0x0007b9eb) main_cset_slider_pane_t10

0xac86,	// (0x0007ba13) main_cset_slider_pane_t11_ParamLimits

0xac86,	// (0x0007ba13) main_cset_slider_pane_t11

0xacae,	// (0x0007ba3b) main_cset_slider_pane_t12_ParamLimits

0xacae,	// (0x0007ba3b) main_cset_slider_pane_t12

0xaccb,	// (0x0007ba58) main_cset_slider_pane_t13_ParamLimits

0xaccb,	// (0x0007ba58) main_cset_slider_pane_t13

0xf951,	// (0x000806de) main_cset_slider_pane_t_ParamLimits

0x0f54,	// (0x00071ce1) bg_popup_sub_pane_cp011

0x3419,	// (0x000741a6) main_cset_text_pane_g1

0x3421,	// (0x000741ae) main_cset_text_pane_t1

0x342f,	// (0x000741bc) main_cset_text_pane_t2

0x343d,	// (0x000741ca) main_cset_text_pane_t3

0x344b,	// (0x000741d8) main_cset_text_pane_t4

0x3459,	// (0x000741e6) main_cset_text_pane_t5

0x3467,	// (0x000741f4) main_cset_text_pane_t6

0x3475,	// (0x00074202) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x00080775) main_cset_text_pane_t

0x644d,	// (0x000771da) main_cam4_burst_pane

0x644d,	// (0x000771da) main_cam5_pane

0xa9ad,	// (0x0007b73a) bg_button_pane_cp019

0xa9b6,	// (0x0007b743) bg_button_pane_cp020

0x32be,	// (0x0007404b) main_cset_slider_pane_g7_ParamLimits

0x32be,	// (0x0007404b) main_cset_slider_pane_g7

0x32ca,	// (0x00074057) main_cset_slider_pane_g8_ParamLimits

0x32ca,	// (0x00074057) main_cset_slider_pane_g8

0xaaef,	// (0x0007b87c) main_cset_slider_pane_g9_ParamLimits

0xaaef,	// (0x0007b87c) main_cset_slider_pane_g9

0xaafb,	// (0x0007b888) main_cset_slider_pane_g10_ParamLimits

0xaafb,	// (0x0007b888) main_cset_slider_pane_g10

0xab07,	// (0x0007b894) main_cset_slider_pane_g11_ParamLimits

0xab07,	// (0x0007b894) main_cset_slider_pane_g11

0xab13,	// (0x0007b8a0) main_cset_slider_pane_g12_ParamLimits

0xab13,	// (0x0007b8a0) main_cset_slider_pane_g12

0xab1f,	// (0x0007b8ac) main_cset_slider_pane_g13_ParamLimits

0xab1f,	// (0x0007b8ac) main_cset_slider_pane_g13

0xab2b,	// (0x0007b8b8) main_cset_slider_pane_g14_ParamLimits

0xab2b,	// (0x0007b8b8) main_cset_slider_pane_g14

0xab37,	// (0x0007b8c4) main_cset_slider_pane_g15_ParamLimits

0xab37,	// (0x0007b8c4) main_cset_slider_pane_g15

0x330a,	// (0x00074097) main_cset_slider_pane_t14_ParamLimits

0x330a,	// (0x00074097) main_cset_slider_pane_t14

0x3343,	// (0x000740d0) main_cset_slider_pane_t15_ParamLimits

0x3343,	// (0x000740d0) main_cset_slider_pane_t15

0xb17a,	// (0x0007bf07) aid_cam4_burst_size_cell_ParamLimits

0xb17a,	// (0x0007bf07) aid_cam4_burst_size_cell

0xb196,	// (0x0007bf23) grid_cam4_burst_pane_ParamLimits

0xb196,	// (0x0007bf23) grid_cam4_burst_pane

0xb1b8,	// (0x0007bf45) linegrid_cam4_burst_pane_ParamLimits

0xb1b8,	// (0x0007bf45) linegrid_cam4_burst_pane

0xb1d6,	// (0x0007bf63) scroll_pane_cp30_ParamLimits

0xb1d6,	// (0x0007bf63) scroll_pane_cp30

0xb1e2,	// (0x0007bf6f) cell_cam4_burst_pane_ParamLimits

0xb1e2,	// (0x0007bf6f) cell_cam4_burst_pane

0x3483,	// (0x00074210) linegrid_cam4_burst_pane_g1_ParamLimits

0x3483,	// (0x00074210) linegrid_cam4_burst_pane_g1

0xb21a,	// (0x0007bfa7) linegrid_cam4_burst_pane_g2_ParamLimits

0xb21a,	// (0x0007bfa7) linegrid_cam4_burst_pane_g2

0x3490,	// (0x0007421d) linegrid_cam4_burst_pane_g3_ParamLimits

0x3490,	// (0x0007421d) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x00080784) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x00080784) linegrid_cam4_burst_pane_g

0xb22b,	// (0x0007bfb8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb22b,	// (0x0007bfb8) linegrid_cam4_burst_pane_g3_copy1

0x349d,	// (0x0007422a) linegrid_cam4_burst_pane_g4_ParamLimits

0x349d,	// (0x0007422a) linegrid_cam4_burst_pane_g4

0xb245,	// (0x0007bfd2) linegrid_cam4_burst_pane_g5_ParamLimits

0xb245,	// (0x0007bfd2) linegrid_cam4_burst_pane_g5

0xb256,	// (0x0007bfe3) linegrid_cam4_burst_pane_g6_ParamLimits

0xb256,	// (0x0007bfe3) linegrid_cam4_burst_pane_g6

0x34aa,	// (0x00074237) linegrid_cam4_burst_pane_g7_ParamLimits

0x34aa,	// (0x00074237) linegrid_cam4_burst_pane_g7

0xb267,	// (0x0007bff4) cell_cam4_burst_pane_g1

0x34c3,	// (0x00074250) main_cam5_pane_t1_ParamLimits

0x34c3,	// (0x00074250) main_cam5_pane_t1

0x34d5,	// (0x00074262) main_cam5_pane_t2_ParamLimits

0x34d5,	// (0x00074262) main_cam5_pane_t2

0x34e7,	// (0x00074274) main_cam5_pane_t3_ParamLimits

0x34e7,	// (0x00074274) main_cam5_pane_t3

0x34f9,	// (0x00074286) main_cam5_pane_t4_ParamLimits

0x34f9,	// (0x00074286) main_cam5_pane_t4

0x350f,	// (0x0007429c) main_cam5_pane_t5_ParamLimits

0x350f,	// (0x0007429c) main_cam5_pane_t5

0x3521,	// (0x000742ae) main_cam5_pane_t6_ParamLimits

0x3521,	// (0x000742ae) main_cam5_pane_t6

0x3533,	// (0x000742c0) main_cam5_pane_t7_ParamLimits

0x3533,	// (0x000742c0) main_cam5_pane_t7

0x3545,	// (0x000742d2) main_cam5_pane_t8_ParamLimits

0x3545,	// (0x000742d2) main_cam5_pane_t8

0x3561,	// (0x000742ee) main_cam5_pane_t9_ParamLimits

0x3561,	// (0x000742ee) main_cam5_pane_t9

0x3573,	// (0x00074300) main_cam5_pane_t10_ParamLimits

0x3573,	// (0x00074300) main_cam5_pane_t10

0x3585,	// (0x00074312) main_cam5_pane_t11_ParamLimits

0x3585,	// (0x00074312) main_cam5_pane_t11

0x3597,	// (0x00074324) main_cam5_pane_t12_ParamLimits

0x3597,	// (0x00074324) main_cam5_pane_t12

0x35ac,	// (0x00074339) main_cam5_pane_t13_ParamLimits

0x35ac,	// (0x00074339) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00080790) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00080790) main_cam5_pane_t

0x63f6,	// (0x00077183) popup_scut_keymap_window_ParamLimits

0x63f6,	// (0x00077183) popup_scut_keymap_window

0xb27a,	// (0x0007c007) aid_size_cell_brow_shortcut

0x1992,	// (0x0007271f) bg_popup_window_pane_cp010

0xb286,	// (0x0007c013) grid_scut_pane

0xb290,	// (0x0007c01d) cell_scut_pane_ParamLimits

0xb290,	// (0x0007c01d) cell_scut_pane

0xb2a5,	// (0x0007c032) cell_scut_pane_g1

0x35c9,	// (0x00074356) cell_scut_pane_t1

0x35d8,	// (0x00074365) cell_scut_pane_t2

0xb2ae,	// (0x0007c03b) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x000807ab) cell_scut_pane_t

0x955e,	// (0x0007a2eb) main_mup3_pane_g8_ParamLimits

0x955e,	// (0x0007a2eb) main_mup3_pane_g8

0xa5f7,	// (0x0007b384) area_vitu2_query_pane_ParamLimits

0xa5f7,	// (0x0007b384) area_vitu2_query_pane

0xb032,	// (0x0007bdbf) input_focus_pane_cp08

0x35e7,	// (0x00074374) area_vitu2_query_pane_g1

0xb2bc,	// (0x0007c049) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x000807b2) area_vitu2_query_pane_g

0xb2cb,	// (0x0007c058) area_vitu2_query_pane_t1_ParamLimits

0xb2cb,	// (0x0007c058) area_vitu2_query_pane_t1

0xb2dd,	// (0x0007c06a) area_vitu2_query_pane_t2_ParamLimits

0xb2dd,	// (0x0007c06a) area_vitu2_query_pane_t2

0xb2ef,	// (0x0007c07c) area_vitu2_query_pane_t3_ParamLimits

0xb2ef,	// (0x0007c07c) area_vitu2_query_pane_t3

0x35f3,	// (0x00074380) area_vitu2_query_pane_t4_ParamLimits

0x35f3,	// (0x00074380) area_vitu2_query_pane_t4

0x361b,	// (0x000743a8) area_vitu2_query_pane_t5_ParamLimits

0x361b,	// (0x000743a8) area_vitu2_query_pane_t5

0x3643,	// (0x000743d0) area_vitu2_query_pane_t6_ParamLimits

0x3643,	// (0x000743d0) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x000807b7) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x000807b7) area_vitu2_query_pane_t

0xb317,	// (0x0007c0a4) bg_button_pane_cp018

0xb324,	// (0x0007c0b1) bg_button_pane_cp021

0xb330,	// (0x0007c0bd) bg_button_pane_cp022

0xb33f,	// (0x0007c0cc) input_focus_pane_cp09

0x8357,	// (0x000790e4) aid_size_touch_mv_arrow_left

0xdf55,	// (0x0007ece2) aid_size_touch_mv_arrow_right

0xab4f,	// (0x0007b8dc) main_cset_slider_pane_g16_ParamLimits

0xab4f,	// (0x0007b8dc) main_cset_slider_pane_g16

0xab5b,	// (0x0007b8e8) main_cset_slider_pane_g17_ParamLimits

0xab5b,	// (0x0007b8e8) main_cset_slider_pane_g17

0xb267,	// (0x0007bff4) cell_cam4_burst_pane_g1_ParamLimits

0x0f54,	// (0x00071ce1) compa_mode_pane

0xad83,	// (0x0007bb10) popup_vtel_slider_window_g3_ParamLimits

0xad83,	// (0x0007bb10) popup_vtel_slider_window_g3

0xad97,	// (0x0007bb24) popup_vtel_slider_window_g4_ParamLimits

0xad97,	// (0x0007bb24) popup_vtel_slider_window_g4

0xadab,	// (0x0007bb38) popup_vtel_slider_window_t1_ParamLimits

0xadab,	// (0x0007bb38) popup_vtel_slider_window_t1

0x644d,	// (0x000771da) main_cl_pane

0x8dd2,	// (0x00079b5f) popup_imed_adjust2_window_ParamLimits

0xee2a,	// (0x0007fbb7) bg_tb_trans_pane_cp05_ParamLimits

0x2d27,	// (0x00073ab4) popup_imed_adjust2_window_g1_ParamLimits

0x2d36,	// (0x00073ac3) popup_imed_adjust2_window_g2_ParamLimits

0x2d36,	// (0x00073ac3) popup_imed_adjust2_window_g2

0x2d42,	// (0x00073acf) popup_imed_adjust2_window_g3_ParamLimits

0x2d42,	// (0x00073acf) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0008051e) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0008051e) popup_imed_adjust2_window_g

0x2d4e,	// (0x00073adb) popup_imed_adjust2_window_t1_ParamLimits

0x2d66,	// (0x00073af3) slider_imed_adjust_pane_ParamLimits

0x2d7a,	// (0x00073b07) slider_imed_adjust_pane_g1_ParamLimits

0x2d8a,	// (0x00073b17) slider_imed_adjust_pane_g2_ParamLimits

0x2d9a,	// (0x00073b27) slider_imed_adjust_pane_g3_ParamLimits

0x2dab,	// (0x00073b38) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x00080525) slider_imed_adjust_pane_g_ParamLimits

0xa391,	// (0x0007b11e) aid_touch_area_cam4_ParamLimits

0xa391,	// (0x0007b11e) aid_touch_area_cam4

0xa39f,	// (0x0007b12c) battery_pane_cp01

0xa41e,	// (0x0007b1ab) main_camera4_pane_g6_ParamLimits

0xa41e,	// (0x0007b1ab) main_camera4_pane_g6

0xa43c,	// (0x0007b1c9) main_camera4_pane_t2_ParamLimits

0xa43c,	// (0x0007b1c9) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x0008062c) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x0008062c) main_camera4_pane_t

0xa4d2,	// (0x0007b25f) aid_touch_area_vid4_ParamLimits

0xa4d2,	// (0x0007b25f) aid_touch_area_vid4

0xa41e,	// (0x0007b1ab) main_video4_pane_g5_ParamLimits

0xa41e,	// (0x0007b1ab) main_video4_pane_g5

0xa502,	// (0x0007b28f) vid4_progress_pane_ParamLimits

0xa502,	// (0x0007b28f) vid4_progress_pane

0x32d6,	// (0x00074063) main_cset_slider_pane_g18_ParamLimits

0x32d6,	// (0x00074063) main_cset_slider_pane_g18

0x34b7,	// (0x00074244) cell_cam4_burst_pane_g2_ParamLimits

0x34b7,	// (0x00074244) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0008078b) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0008078b) cell_cam4_burst_pane_g

0xb34e,	// (0x0007c0db) bg_cl_pane_ParamLimits

0xb34e,	// (0x0007c0db) bg_cl_pane

0xb35a,	// (0x0007c0e7) cl_header_pane_ParamLimits

0xb35a,	// (0x0007c0e7) cl_header_pane

0xb366,	// (0x0007c0f3) cl_listscroll_pane_ParamLimits

0xb366,	// (0x0007c0f3) cl_listscroll_pane

0x368f,	// (0x0007441c) bg_cl_pane_g1

0x3697,	// (0x00074424) bg_cl_pane_g2

0x369f,	// (0x0007442c) bg_cl_pane_g3

0x36a7,	// (0x00074434) bg_cl_pane_g4

0x36af,	// (0x0007443c) bg_cl_pane_g5

0x36b7,	// (0x00074444) bg_cl_pane_g6

0x36bf,	// (0x0007444c) bg_cl_pane_g7

0x36c7,	// (0x00074454) bg_cl_pane_g8

0x36cf,	// (0x0007445c) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x000807c6) bg_cl_pane_g

0xb372,	// (0x0007c0ff) aid_height_cl_leading_ParamLimits

0xb372,	// (0x0007c0ff) aid_height_cl_leading

0xb37e,	// (0x0007c10b) aid_height_cl_text_ParamLimits

0xb37e,	// (0x0007c10b) aid_height_cl_text

0x1dca,	// (0x00072b57) bg_cl_header_pane_ParamLimits

0x1dca,	// (0x00072b57) bg_cl_header_pane

0xb396,	// (0x0007c123) cl_header_pane_g1_ParamLimits

0xb396,	// (0x0007c123) cl_header_pane_g1

0xb3a3,	// (0x0007c130) cl_header_pane_t1_ParamLimits

0xb3a3,	// (0x0007c130) cl_header_pane_t1

0x36d7,	// (0x00074464) cl_list_pane

0x36e0,	// (0x0007446d) hc_scroll_pane_cp01

0x1c32,	// (0x000729bf) bg_cl_header_pane_g1

0x3183,	// (0x00073f10) bg_cl_header_pane_g2

0x1c52,	// (0x000729df) bg_cl_header_pane_g3

0x3193,	// (0x00073f20) bg_cl_header_pane_g4

0x318b,	// (0x00073f18) bg_cl_header_pane_g5

0x33d2,	// (0x0007415f) bg_cl_header_pane_g6

0x31ab,	// (0x00073f38) bg_cl_header_pane_g7

0x31b3,	// (0x00073f40) bg_cl_header_pane_g8

0x31a3,	// (0x00073f30) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x000807d9) bg_cl_header_pane_g

0xb3b5,	// (0x0007c142) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb3b5,	// (0x0007c142) hc_cl_list_double_graphic_heading_pane

0xb3c5,	// (0x0007c152) hc_cl_list_single_graphic_pane_ParamLimits

0xb3c5,	// (0x0007c152) hc_cl_list_single_graphic_pane

0xb3d7,	// (0x0007c164) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb3d7,	// (0x0007c164) hc_cl_list_single_graphic_pane_g1

0xb3e3,	// (0x0007c170) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb3e3,	// (0x0007c170) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x000807ec) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x000807ec) hc_cl_list_single_graphic_pane_g

0xb3f7,	// (0x0007c184) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb3f7,	// (0x0007c184) hc_cl_list_single_graphic_pane_t1

0xb3d7,	// (0x0007c164) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb3d7,	// (0x0007c164) hc_cl_list_double_graphic_heading_pane_g1

0xb40c,	// (0x0007c199) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb40c,	// (0x0007c199) hc_cl_list_double_graphic_heading_pane_g2

0xb420,	// (0x0007c1ad) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb420,	// (0x0007c1ad) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x000807f1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x000807f1) hc_cl_list_double_graphic_heading_pane_g

0xb434,	// (0x0007c1c1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb434,	// (0x0007c1c1) hc_cl_list_double_graphic_heading_pane_t1

0xb449,	// (0x0007c1d6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb449,	// (0x0007c1d6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x000807f8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x000807f8) hc_cl_list_double_graphic_heading_pane_t

0xb45e,	// (0x0007c1eb) vid4_progress_pane_g1

0xb46d,	// (0x0007c1fa) vid4_progress_pane_g2

0xb47c,	// (0x0007c209) vid4_progress_pane_g3

0xb48b,	// (0x0007c218) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x000807fd) vid4_progress_pane_g

0xb4a3,	// (0x0007c230) vid4_progress_pane_t1

0xb4b9,	// (0x0007c246) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x00080808) vid4_progress_pane_t

0xb4e3,	// (0x0007c270) wait_bar_pane_cp07

0x26bb,	// (0x00073448) blid_firmament_pane_ParamLimits

0x26fc,	// (0x00073489) popup_blid_sat_info2_window_g1

0x2720,	// (0x000734ad) popup_blid_sat_info2_window_t3

0x272e,	// (0x000734bb) popup_blid_sat_info2_window_t4

0x273c,	// (0x000734c9) popup_blid_sat_info2_window_t5

0x274a,	// (0x000734d7) popup_blid_sat_info2_window_t6

0x275a,	// (0x000734e7) popup_blid_sat_info2_window_t7

0x2768,	// (0x000734f5) popup_blid_sat_info2_window_t8

0x2776,	// (0x00073503) popup_blid_sat_info2_window_t9

0x2784,	// (0x00073511) popup_blid_sat_info2_window_t10

0x2820,	// (0x000735ad) aid_firma_cardinal_ParamLimits

0x2834,	// (0x000735c1) blid_firmament_pane_t1_ParamLimits

0x284b,	// (0x000735d8) blid_firmament_pane_t2_ParamLimits

0x2862,	// (0x000735ef) blid_firmament_pane_t3_ParamLimits

0x2879,	// (0x00073606) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x00080417) blid_firmament_pane_t_ParamLimits

0x2890,	// (0x0007361d) blid_sat_info_pane_ParamLimits

0x8d46,	// (0x00079ad3) main_cam_set_pane_ParamLimits

0x9bda,	// (0x0007a967) aid_size_cell_colour_35_ParamLimits

0x9bf1,	// (0x0007a97e) aid_size_cell_colour_112_ParamLimits

0x9c08,	// (0x0007a995) aid_size_cell_effect_ParamLimits

0xe171,	// (0x0007eefe) bg_tb_trans_pane_cp02_ParamLimits

0xee38,	// (0x0007fbc5) heading_imed_pane_ParamLimits

0x9c22,	// (0x0007a9af) listscroll_imed_pane_ParamLimits

0xeadb,	// (0x0007f868) popup_call2_audio_first_window_g5_ParamLimits

0xeadb,	// (0x0007f868) popup_call2_audio_first_window_g5

0xa140,	// (0x0007aecd) aid_size_touch_image3_arrow_left_ParamLimits

0xa140,	// (0x0007aecd) aid_size_touch_image3_arrow_left

0xa154,	// (0x0007aee1) aid_size_touch_image3_arrow_right_ParamLimits

0xa154,	// (0x0007aee1) aid_size_touch_image3_arrow_right

0xb4ce,	// (0x0007c25b) vid4_progress_pane_t3

0x9d86,	// (0x0007ab13) main_hwr_training_symbol_option_pane_ParamLimits

0x9d86,	// (0x0007ab13) main_hwr_training_symbol_option_pane

0x2f54,	// (0x00073ce1) popup_hwr_training_preview_window_ParamLimits

0x2f54,	// (0x00073ce1) popup_hwr_training_preview_window

0x9de1,	// (0x0007ab6e) hwr_training_navi_pane_g5_ParamLimits

0x9de1,	// (0x0007ab6e) hwr_training_navi_pane_g5

0x3171,	// (0x00073efe) popup_char_count_window

0x6437,	// (0x000771c4) bg_popup_sub_pane_cp20_ParamLimits

0xae99,	// (0x0007bc26) list_vitu2_match_list_pane_ParamLimits

0xaea5,	// (0x0007bc32) vitu2_page_scroll_pane_ParamLimits

0xaea5,	// (0x0007bc32) vitu2_page_scroll_pane

0x3703,	// (0x00074490) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3703,	// (0x00074490) list_single_hwr_training_symbol_option_pane

0x3716,	// (0x000744a3) list_single_hwr_training_symbol_option_pane_g1

0x371e,	// (0x000744ab) list_single_hwr_training_symbol_option_pane_t1

0x372c,	// (0x000744b9) bg_button_pane_cp023

0x3735,	// (0x000744c2) bg_button_pane_cp024

0xb522,	// (0x0007c2af) vitu2_page_scroll_pane_g1

0xb52a,	// (0x0007c2b7) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x0008080f) vitu2_page_scroll_pane_g

0xb532,	// (0x0007c2bf) vitu2_page_scroll_pane_t1

0x28bf,	// (0x0007364c) popup_char_count_window_g1

0x3768,	// (0x000744f5) popup_char_count_window_g2

0x3771,	// (0x000744fe) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x00080814) popup_char_count_window_g

0x377a,	// (0x00074507) popup_char_count_window_t1

0x644d,	// (0x000771da) main_vded2_pane

0x2d15,	// (0x00073aa2) aid_size_cell_imed_line

0x2d1f,	// (0x00073aac) grid_imed_line_width_pane

0xa54d,	// (0x0007b2da) vid4_indicators_pane_g4

0x3788,	// (0x00074515) cell_imed_line_width_pane_ParamLimits

0x3788,	// (0x00074515) cell_imed_line_width_pane

0x379a,	// (0x00074527) cell_imed_line_width_pane_g1

0x37a3,	// (0x00074530) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x0008081b) cell_imed_line_width_pane_g

0xb541,	// (0x0007c2ce) main_vded2_pane_g1_ParamLimits

0xb541,	// (0x0007c2ce) main_vded2_pane_g1

0xb54e,	// (0x0007c2db) main_vded2_pane_g2_ParamLimits

0xb54e,	// (0x0007c2db) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x00080820) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x00080820) main_vded2_pane_g

0xb55a,	// (0x0007c2e7) vded2_slider_pane_ParamLimits

0xb55a,	// (0x0007c2e7) vded2_slider_pane

0xb567,	// (0x0007c2f4) aid_size_touch_vded2_end

0xb56f,	// (0x0007c2fc) aid_size_touch_vded2_playhead

0xb577,	// (0x0007c304) aid_size_touch_vded2_start

0xb57f,	// (0x0007c30c) vded2_slider_bg_pane

0xb588,	// (0x0007c315) vded2_slider_pane_g1

0xb591,	// (0x0007c31e) vded2_slider_pane_g2

0xb599,	// (0x0007c326) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x00080825) vded2_slider_pane_g

0xb5a2,	// (0x0007c32f) vded2_slider_bg_pane_g1

0xb5ab,	// (0x0007c338) vded2_slider_bg_pane_g2

0xb5b4,	// (0x0007c341) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x0008082c) vded2_slider_bg_pane_g

0x871b,	// (0x000794a8) aid_postcard_touch_down_pane_ParamLimits

0x871b,	// (0x000794a8) aid_postcard_touch_down_pane

0x8727,	// (0x000794b4) aid_postcard_touch_up_pane_ParamLimits

0x8727,	// (0x000794b4) aid_postcard_touch_up_pane

0x644d,	// (0x000771da) main_blid2_pane

0x8d6f,	// (0x00079afc) popup_blid2_search_window

0x0f54,	// (0x00071ce1) blid2_gps_pane

0x0f54,	// (0x00071ce1) blid2_navig_pane

0x0f54,	// (0x00071ce1) blid2_search_pane

0x0f54,	// (0x00071ce1) blid2_tripm_pane

0xb5bd,	// (0x0007c34a) blid2_search_pane_g1_ParamLimits

0xb5bd,	// (0x0007c34a) blid2_search_pane_g1

0xb5c9,	// (0x0007c356) blid2_search_pane_t1_ParamLimits

0xb5c9,	// (0x0007c356) blid2_search_pane_t1

0xb5db,	// (0x0007c368) aid_size_cell_blid2_gps_ParamLimits

0xb5db,	// (0x0007c368) aid_size_cell_blid2_gps

0xb5eb,	// (0x0007c378) blid2_gps_pane_g1_ParamLimits

0xb5eb,	// (0x0007c378) blid2_gps_pane_g1

0xb5f7,	// (0x0007c384) grid_blid2_satellite_pane_ParamLimits

0xb5f7,	// (0x0007c384) grid_blid2_satellite_pane

0xb603,	// (0x0007c390) blid2_navig_pane_g1_ParamLimits

0xb603,	// (0x0007c390) blid2_navig_pane_g1

0xb60f,	// (0x0007c39c) blid2_navig_pane_t1_ParamLimits

0xb60f,	// (0x0007c39c) blid2_navig_pane_t1

0xb621,	// (0x0007c3ae) blid2_navig_pane_t2_ParamLimits

0xb621,	// (0x0007c3ae) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x00080833) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x00080833) blid2_navig_pane_t

0xb633,	// (0x0007c3c0) blid2_navig_ring_pane_ParamLimits

0xb633,	// (0x0007c3c0) blid2_navig_ring_pane

0xb63f,	// (0x0007c3cc) blid2_speed_pane_ParamLimits

0xb63f,	// (0x0007c3cc) blid2_speed_pane

0xb64b,	// (0x0007c3d8) blid2_tripm_pane_g1_ParamLimits

0xb64b,	// (0x0007c3d8) blid2_tripm_pane_g1

0xb657,	// (0x0007c3e4) blid2_tripm_pane_g2_ParamLimits

0xb657,	// (0x0007c3e4) blid2_tripm_pane_g2

0xb663,	// (0x0007c3f0) blid2_tripm_pane_g3_ParamLimits

0xb663,	// (0x0007c3f0) blid2_tripm_pane_g3

0xb66f,	// (0x0007c3fc) blid2_tripm_pane_g4_ParamLimits

0xb66f,	// (0x0007c3fc) blid2_tripm_pane_g4

0xb67b,	// (0x0007c408) blid2_tripm_pane_g5_ParamLimits

0xb67b,	// (0x0007c408) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00080838) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00080838) blid2_tripm_pane_g

0xb693,	// (0x0007c420) blid2_tripm_pane_t1_ParamLimits

0xb693,	// (0x0007c420) blid2_tripm_pane_t1

0xb6a5,	// (0x0007c432) blid2_tripm_pane_t2_ParamLimits

0xb6a5,	// (0x0007c432) blid2_tripm_pane_t2

0xb6b7,	// (0x0007c444) blid2_tripm_pane_t3_ParamLimits

0xb6b7,	// (0x0007c444) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00080845) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00080845) blid2_tripm_pane_t

0xb6e7,	// (0x0007c474) cell_blid2_satellite_pane_ParamLimits

0xb6e7,	// (0x0007c474) cell_blid2_satellite_pane

0xb6ff,	// (0x0007c48c) cell_blid2_satellite_pane_g1

0x37ab,	// (0x00074538) cell_blid2_satellite_pane_t1

0x19f6,	// (0x00072783) blid2_speed_pane_g1

0x37b9,	// (0x00074546) blid2_speed_pane_t1

0x37c7,	// (0x00074554) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0008084e) blid2_speed_pane_t

0x19f6,	// (0x00072783) blid2_navig_ring_pane_g1

0xb708,	// (0x0007c495) blid2_navig_ring_pane_g2

0xb710,	// (0x0007c49d) blid2_navig_ring_pane_g3

0xb718,	// (0x0007c4a5) blid2_navig_ring_pane_g4

0xb720,	// (0x0007c4ad) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00080853) blid2_navig_ring_pane_g

0x0f54,	// (0x00071ce1) bg_popup_window_pane_cp011

0x37d5,	// (0x00074562) popup_blid2_search_window_g1

0x37dd,	// (0x0007456a) popup_blid2_search_window_t1

0x37eb,	// (0x00074578) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0008085e) popup_blid2_search_window_t

0x1b41,	// (0x000728ce) main_browser_pane_g1

0x172d,	// (0x000724ba) main_browser_pane_ParamLimits

0x8d46,	// (0x00079ad3) bg_button_pane_cp011_ParamLimits

0xa7b2,	// (0x0007b53f) cell_vitu2_function_pane_g1_ParamLimits

0xee2a,	// (0x0007fbb7) bg_popup_sub_pane_cp22_ParamLimits

0xb032,	// (0x0007bdbf) input_focus_pane_cp08_ParamLimits

0xb049,	// (0x0007bdd6) popup_vitu2_query_button_pane_ParamLimits

0xb049,	// (0x0007bdd6) popup_vitu2_query_button_pane

0xb05a,	// (0x0007bde7) popup_vitu2_query_input_button_pane

0x340d,	// (0x0007419a) popup_vitu2_query_window_g1_ParamLimits

0xb062,	// (0x0007bdef) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0008075f) popup_vitu2_query_window_g_ParamLimits

0x0f54,	// (0x00071ce1) bg_button_pane_cp026

0xb728,	// (0x0007c4b5) popup_vitu2_query_input_button_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp025

0x37f9,	// (0x00074586) popup_vitu2_query_button_pane_t1

0x92dc,	// (0x0007a069) main_mp3_pane_t6

0x92ea,	// (0x0007a077) popup_slider_window_cp01

0xa480,	// (0x0007b20d) cam4_battery_pane

0xa480,	// (0x0007b20d) cam4_battery_pane_cp02

0xa480,	// (0x0007b20d) cam4_battery_pane_cp01

0xa480,	// (0x0007b20d) cam4_battery_pane_cp03

0x3807,	// (0x00074594) cam4_battery_pane_g1

0x19f6,	// (0x00072783) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00080863) cam4_battery_pane_g

0x2792,	// (0x0007351f) popup_blid_sat_info2_window_t11

0x8357,	// (0x000790e4) aid_size_touch_mv_arrow_left_ParamLimits

0xdf55,	// (0x0007ece2) aid_size_touch_mv_arrow_right_ParamLimits

0xdfae,	// (0x0007ed3b) navi_pane_g1_ParamLimits

0xdfba,	// (0x0007ed47) navi_pane_g2_ParamLimits

0x837b,	// (0x00079108) navi_pane_g3_ParamLimits

0xf38b,	// (0x00080118) navi_pane_g_ParamLimits

0x8398,	// (0x00079125) navi_pane_mv_t1_ParamLimits

0x9c2e,	// (0x0007a9bb) grid_imed_effect_pane_ParamLimits

0x7074,	// (0x00077e01) aid_placing_vt_slider_lsc

0x1a83,	// (0x00072810) aid_placing_vt_slider_prt

0xe171,	// (0x0007eefe) bg_tb_trans_pane_cp01_ParamLimits

0x29d7,	// (0x00073764) popup_image_details_window_g1_ParamLimits

0x29ea,	// (0x00073777) popup_image_details_window_g2_ParamLimits

0x29ff,	// (0x0007378c) popup_image_details_window_g3_ParamLimits

0x29ff,	// (0x0007378c) popup_image_details_window_g3

0xf6ca,	// (0x00080457) popup_image_details_window_g_ParamLimits

0x2a13,	// (0x000737a0) popup_image_details_window_t1_ParamLimits

0x2a25,	// (0x000737b2) popup_image_details_window_t2_ParamLimits

0x2a3e,	// (0x000737cb) popup_image_details_window_t3_ParamLimits

0x2a52,	// (0x000737df) popup_image_details_window_t4_ParamLimits

0x2a6d,	// (0x000737fa) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0008045e) popup_image_details_window_t_ParamLimits

0xb38a,	// (0x0007c117) cl_header_name_pane_ParamLimits

0xb38a,	// (0x0007c117) cl_header_name_pane

0xb730,	// (0x0007c4bd) cl_header_name_pane_t1_ParamLimits

0xb730,	// (0x0007c4bd) cl_header_name_pane_t1

0xb747,	// (0x0007c4d4) cl_header_name_pane_t2_ParamLimits

0xb747,	// (0x0007c4d4) cl_header_name_pane_t2

0xb771,	// (0x0007c4fe) cl_header_name_pane_t3_ParamLimits

0xb771,	// (0x0007c4fe) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00080868) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00080868) cl_header_name_pane_t

0xe047,	// (0x0007edd4) navi_pane_mv_g2_ParamLimits

0x313c,	// (0x00073ec9) field_vitu2_entry_pane_g1_ParamLimits

0x3148,	// (0x00073ed5) field_vitu2_entry_pane_g2_ParamLimits

0xee58,	// (0x0007fbe5) field_vitu2_entry_pane_g3_ParamLimits

0xee58,	// (0x0007fbe5) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0008065e) field_vitu2_entry_pane_g_ParamLimits

0xa746,	// (0x0007b4d3) cell_vitu2_itu_pane_g1_ParamLimits

0xa758,	// (0x0007b4e5) cell_vitu2_itu_pane_g2_ParamLimits

0xa758,	// (0x0007b4e5) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0008066a) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0008066a) cell_vitu2_itu_pane_g

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp05_ParamLimits

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp05

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp03

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp04

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp10_ParamLimits

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp10

0xb330,	// (0x0007c0bd) bg_vkb2_func_pane_cp08

0xb317,	// (0x0007c0a4) bg_vkb2_func_pane_cp06

0xb324,	// (0x0007c0b1) bg_vkb2_func_pane_cp07

0x373e,	// (0x000744cb) bg_vkb2_func_pane_cp11_ParamLimits

0x373e,	// (0x000744cb) bg_vkb2_func_pane_cp11

0x3753,	// (0x000744e0) bg_vkb2_func_pane_cp12_ParamLimits

0x3753,	// (0x000744e0) bg_vkb2_func_pane_cp12

0x0f54,	// (0x00071ce1) bg_vkb2_func_pane_cp09

0x3183,	// (0x00073f10) bg_vkb2_func_pane_g1

0x1c52,	// (0x000729df) bg_vkb2_func_pane_g2

0x318b,	// (0x00073f18) bg_vkb2_func_pane_g3

0x3193,	// (0x00073f20) bg_vkb2_func_pane_g4

0x33d2,	// (0x0007415f) bg_vkb2_func_pane_g5

0x31ab,	// (0x00073f38) bg_vkb2_func_pane_g6

0x31b3,	// (0x00073f40) bg_vkb2_func_pane_g7

0x31a3,	// (0x00073f30) bg_vkb2_func_pane_g8

0x1c32,	// (0x000729bf) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0008086f) bg_vkb2_func_pane_g

0xb687,	// (0x0007c414) blid2_tripm_pane_g6_ParamLimits

0xb687,	// (0x0007c414) blid2_tripm_pane_g6

0x3012,	// (0x00073d9f) mp4_progress_pane_g1

0xb6db,	// (0x0007c468) blid2_tripm_values_pane_ParamLimits

0xb6db,	// (0x0007c468) blid2_tripm_values_pane

0xb796,	// (0x0007c523) blid2_tripm_values_pane_t1

0xb7a4,	// (0x0007c531) blid2_tripm_values_pane_t2

0xb7b2,	// (0x0007c53f) blid2_tripm_values_pane_t3

0xb7c0,	// (0x0007c54d) blid2_tripm_values_pane_t4

0xb7ce,	// (0x0007c55b) blid2_tripm_values_pane_t5

0xb7dc,	// (0x0007c569) blid2_tripm_values_pane_t6

0xb7ea,	// (0x0007c577) blid2_tripm_values_pane_t7

0xb7f8,	// (0x0007c585) blid2_tripm_values_pane_t8

0xb806,	// (0x0007c593) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x00080882) blid2_tripm_values_pane_t

0x70ae,	// (0x00077e3b) call_video_pane_t1_ParamLimits

0x70cb,	// (0x00077e58) call_video_pane_t2_ParamLimits

0xf222,	// (0x0007ffaf) call_video_pane_t_ParamLimits

0x85fb,	// (0x00079388) msg_header_pane_g1_ParamLimits

0xe226,	// (0x0007efb3) msg_header_pane_g2_ParamLimits

0xe226,	// (0x0007efb3) msg_header_pane_g2

0x0001,

0xf42e,	// (0x000801bb) msg_header_pane_g_ParamLimits

0xf42e,	// (0x000801bb) msg_header_pane_g

0x172d,	// (0x000724ba) main_clock2_pane_ParamLimits

0x99d2,	// (0x0007a75f) grid_clock2_toolbar_pane_ParamLimits

0x99d2,	// (0x0007a75f) grid_clock2_toolbar_pane

0x99d2,	// (0x0007a75f) listscroll_clock2_pane_ParamLimits

0x99d2,	// (0x0007a75f) listscroll_clock2_pane

0x9a6e,	// (0x0007a7fb) main_clock2_pane_t3_ParamLimits

0x9a6e,	// (0x0007a7fb) main_clock2_pane_t3

0x9a80,	// (0x0007a80d) main_clock2_pane_t4_ParamLimits

0x9a80,	// (0x0007a80d) main_clock2_pane_t4

0x3811,	// (0x0007459e) cell_clock2_toolbar_pane

0x3819,	// (0x000745a6) cell_clock2_toolbar_pane_cp01

0x3819,	// (0x000745a6) cell_clock2_toolbar_pane_cp02

0x3821,	// (0x000745ae) cell_clock2_toolbar_pane_cp03

0x3829,	// (0x000745b6) list_clock2_pane

0x3831,	// (0x000745be) scroll_pane_cp10

0x3839,	// (0x000745c6) list_single_clock2_pane_ParamLimits

0x3839,	// (0x000745c6) list_single_clock2_pane

0x1992,	// (0x0007271f) list_highlight_pane_cp08

0x3846,	// (0x000745d3) list_single_clock2_pane_t1

0x3854,	// (0x000745e1) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00080895) list_single_clock2_pane_t

0x0f54,	// (0x00071ce1) bg_button_pane_cp10

0x3862,	// (0x000745ef) cell_clock2_toolbar_pane_g1

0x8685,	// (0x00079412) aid_main_viewer_pane_g1_ParamLimits

0x8685,	// (0x00079412) aid_main_viewer_pane_g1

0x8691,	// (0x0007941e) aid_main_viewer_pane_g2_ParamLimits

0x8691,	// (0x0007941e) aid_main_viewer_pane_g2

0x869d,	// (0x0007942a) aid_main_viewer_pane_g3_ParamLimits

0x869d,	// (0x0007942a) aid_main_viewer_pane_g3

0x86ac,	// (0x00079439) aid_main_viewer_pane_g4_ParamLimits

0x86ac,	// (0x00079439) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x000801cc) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x000801cc) aid_main_viewer_pane_g

0x6437,	// (0x000771c4) main_calc_pane_ParamLimits

0x8d54,	// (0x00079ae1) main_dialer2_pane_ParamLimits

0x644d,	// (0x000771da) main_cam6_pane

0x644d,	// (0x000771da) main_vid6_pane

0x99de,	// (0x0007a76b) listscroll_gen_pane_cp06_ParamLimits

0x99de,	// (0x0007a76b) listscroll_gen_pane_cp06

0x9a92,	// (0x0007a81f) main_clock2_pane_t5_ParamLimits

0x9a92,	// (0x0007a81f) main_clock2_pane_t5

0x9adb,	// (0x0007a868) aid_call2_pane_cp10_ParamLimits

0x9aed,	// (0x0007a87a) aid_call_pane_cp10_ParamLimits

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9aff,	// (0x0007a88c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9aff,	// (0x0007a88c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdf49,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x00080513) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b11,	// (0x0007a89e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x306a,	// (0x00073df7) cell_dialer2_keypad_pane_g2_ParamLimits

0x306a,	// (0x00073df7) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x000805fd) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x000805fd) cell_dialer2_keypad_pane_g

0xe15d,	// (0x0007eeea) cell_dialer2_keypad_pane_t1

0xaa44,	// (0x0007b7d1) main_cset_text2_pane_ParamLimits

0xaa44,	// (0x0007b7d1) main_cset_text2_pane

0x35e7,	// (0x00074374) area_vitu2_query_pane_g1_ParamLimits

0xb2bc,	// (0x0007c049) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x000807b2) area_vitu2_query_pane_g_ParamLimits

0x366b,	// (0x000743f8) area_vitu2_query_pane_t7_ParamLimits

0x366b,	// (0x000743f8) area_vitu2_query_pane_t7

0xb317,	// (0x0007c0a4) bg_button_pane_cp018_ParamLimits

0xb324,	// (0x0007c0b1) bg_button_pane_cp021_ParamLimits

0xb330,	// (0x0007c0bd) bg_button_pane_cp022_ParamLimits

0xb330,	// (0x0007c0bd) bg_vkb2_func_pane_cp08_ParamLimits

0xb317,	// (0x0007c0a4) bg_vkb2_func_pane_cp06_ParamLimits

0xb324,	// (0x0007c0b1) bg_vkb2_func_pane_cp07_ParamLimits

0xb33f,	// (0x0007c0cc) input_focus_pane_cp09_ParamLimits

0xb814,	// (0x0007c5a1) cam6_autofocus_pane_ParamLimits

0xb814,	// (0x0007c5a1) cam6_autofocus_pane

0xb830,	// (0x0007c5bd) cam6_image_uncrop_pane_ParamLimits

0xb830,	// (0x0007c5bd) cam6_image_uncrop_pane

0xb853,	// (0x0007c5e0) cam6_indi_pane_ParamLimits

0xb853,	// (0x0007c5e0) cam6_indi_pane

0xb86d,	// (0x0007c5fa) cam6_mode_pane_ParamLimits

0xb86d,	// (0x0007c5fa) cam6_mode_pane

0xb881,	// (0x0007c60e) cam6_timer_pane_ParamLimits

0xb881,	// (0x0007c60e) cam6_timer_pane

0xb88d,	// (0x0007c61a) cam6_zoom_pane_ParamLimits

0xb88d,	// (0x0007c61a) cam6_zoom_pane

0xb8a3,	// (0x0007c630) cam6_mode_pane_g1_ParamLimits

0xb8a3,	// (0x0007c630) cam6_mode_pane_g1

0xb8af,	// (0x0007c63c) cam6_mode_pane_g2_ParamLimits

0xb8af,	// (0x0007c63c) cam6_mode_pane_g2

0xb8bb,	// (0x0007c648) cam6_mode_pane_g3_ParamLimits

0xb8bb,	// (0x0007c648) cam6_mode_pane_g3

0xb8c7,	// (0x0007c654) cam6_mode_pane_g4_ParamLimits

0xb8c7,	// (0x0007c654) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0008089a) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0008089a) cam6_mode_pane_g

0x2570,	// (0x000732fd) bg_tb_trans_pane_cp08_ParamLimits

0x2570,	// (0x000732fd) bg_tb_trans_pane_cp08

0x386a,	// (0x000745f7) cam6_battery_pane_ParamLimits

0x386a,	// (0x000745f7) cam6_battery_pane

0x3880,	// (0x0007460d) cam6_indi_pane_g1_ParamLimits

0x3880,	// (0x0007460d) cam6_indi_pane_g1

0x3892,	// (0x0007461f) cam6_indi_pane_g2_ParamLimits

0x3892,	// (0x0007461f) cam6_indi_pane_g2

0x38a4,	// (0x00074631) cam6_indi_pane_g3_ParamLimits

0x38a4,	// (0x00074631) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x000808a3) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x000808a3) cam6_indi_pane_g

0x38b6,	// (0x00074643) cam6_indi_pane_t1_ParamLimits

0x38b6,	// (0x00074643) cam6_indi_pane_t1

0xa58b,	// (0x0007b318) cam6_autofocus_pane_g1

0xa583,	// (0x0007b310) cam6_autofocus_pane_g2

0xa59b,	// (0x0007b328) cam6_autofocus_pane_g3

0xa593,	// (0x0007b320) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x000808aa) cam6_autofocus_pane_g

0x38dc,	// (0x00074669) cam6_timer_pane_g1

0x38e4,	// (0x00074671) cam6_timer_pane_t1

0x38f2,	// (0x0007467f) cam6_zoom_cont_pane

0x38fa,	// (0x00074687) cam6_zoom_pane_g1

0x3902,	// (0x0007468f) cam6_zoom_pane_g2

0xb8d3,	// (0x0007c660) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x000808b3) cam6_zoom_pane_g

0x19f6,	// (0x00072783) cam6_battery_pane_g1

0x19f6,	// (0x00072783) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) cam6_battery_pane_g

0x390a,	// (0x00074697) cam6_zoom_cont_pane_g1

0x3913,	// (0x000746a0) cam6_zoom_cont_pane_g2

0x391c,	// (0x000746a9) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x000808ba) cam6_zoom_cont_pane_g

0xb8f0,	// (0x0007c67d) cam6_mode_pane_cp_ParamLimits

0xb8f0,	// (0x0007c67d) cam6_mode_pane_cp

0xb904,	// (0x0007c691) cam6_zoom_pane_cp_ParamLimits

0xb904,	// (0x0007c691) cam6_zoom_pane_cp

0xb91a,	// (0x0007c6a7) vid6_image_uncrop_cif_pane_ParamLimits

0xb91a,	// (0x0007c6a7) vid6_image_uncrop_cif_pane

0xb93c,	// (0x0007c6c9) vid6_image_uncrop_nhd_pane_ParamLimits

0xb93c,	// (0x0007c6c9) vid6_image_uncrop_nhd_pane

0xb953,	// (0x0007c6e0) vid6_image_uncrop_vga_pane_ParamLimits

0xb953,	// (0x0007c6e0) vid6_image_uncrop_vga_pane

0xb96a,	// (0x0007c6f7) vid6_image_uncrop_wvga_pane_ParamLimits

0xb96a,	// (0x0007c6f7) vid6_image_uncrop_wvga_pane

0xb981,	// (0x0007c70e) vid6_indi_pane_ParamLimits

0xb981,	// (0x0007c70e) vid6_indi_pane

0x2570,	// (0x000732fd) bg_tb_trans_pane_cp09_ParamLimits

0x2570,	// (0x000732fd) bg_tb_trans_pane_cp09

0x3930,	// (0x000746bd) cam6_battery_pane_cp_ParamLimits

0x3930,	// (0x000746bd) cam6_battery_pane_cp

0x393c,	// (0x000746c9) vid6_indi_pane_g1_ParamLimits

0x393c,	// (0x000746c9) vid6_indi_pane_g1

0x394e,	// (0x000746db) vid6_indi_pane_g2_ParamLimits

0x394e,	// (0x000746db) vid6_indi_pane_g2

0x3960,	// (0x000746ed) vid6_indi_pane_g3_ParamLimits

0x3960,	// (0x000746ed) vid6_indi_pane_g3

0x3975,	// (0x00074702) vid6_indi_pane_g4_ParamLimits

0x3975,	// (0x00074702) vid6_indi_pane_g4

0x398a,	// (0x00074717) vid6_indi_pane_g5_ParamLimits

0x398a,	// (0x00074717) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x000808c1) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x000808c1) vid6_indi_pane_g

0x39a4,	// (0x00074731) vid6_indi_pane_t1_ParamLimits

0x39a4,	// (0x00074731) vid6_indi_pane_t1

0x39ba,	// (0x00074747) vid6_indi_pane_t2_ParamLimits

0x39ba,	// (0x00074747) vid6_indi_pane_t2

0x39e2,	// (0x0007476f) vid6_indi_pane_t3_ParamLimits

0x39e2,	// (0x0007476f) vid6_indi_pane_t3

0x3a0a,	// (0x00074797) vid6_indi_pane_t4_ParamLimits

0x3a0a,	// (0x00074797) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x000808cc) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x000808cc) vid6_indi_pane_t

0x3a2e,	// (0x000747bb) wait_bar_pane_cp08

0xb9a1,	// (0x0007c72e) main_cset_text2_pane_t1_ParamLimits

0xb9a1,	// (0x0007c72e) main_cset_text2_pane_t1

0xb8db,	// (0x0007c668) listscroll_gen_pane_cp06_t1_ParamLimits

0xb8db,	// (0x0007c668) listscroll_gen_pane_cp06_t1

0x644d,	// (0x000771da) main_cam6_set_pane

0xa472,	// (0x0007b1ff) bg_tb_trans_pane_cp06_ParamLimits

0xa488,	// (0x0007b215) cam4_indicators_pane_g1_ParamLimits

0xa498,	// (0x0007b225) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x0008063a) cam4_indicators_pane_g_ParamLimits

0xa4b8,	// (0x0007b245) cam4_indicators_pane_t1_ParamLimits

0x8d46,	// (0x00079ad3) bg_tb_trans_pane_cp07_ParamLimits

0xa488,	// (0x0007b215) vid4_indicators_pane_g1_ParamLimits

0xa52c,	// (0x0007b2b9) vid4_indicators_pane_g2_ParamLimits

0xa53c,	// (0x0007b2c9) vid4_indicators_pane_g3_ParamLimits

0xa54d,	// (0x0007b2da) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x0008064c) vid4_indicators_pane_g_ParamLimits

0xa569,	// (0x0007b2f6) vid4_indicators_pane_t1_ParamLimits

0xb45e,	// (0x0007c1eb) vid4_progress_pane_g1_ParamLimits

0xb46d,	// (0x0007c1fa) vid4_progress_pane_g2_ParamLimits

0xb47c,	// (0x0007c209) vid4_progress_pane_g3_ParamLimits

0xb48b,	// (0x0007c218) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x000807fd) vid4_progress_pane_g_ParamLimits

0xb4a3,	// (0x0007c230) vid4_progress_pane_t1_ParamLimits

0xb4b9,	// (0x0007c246) vid4_progress_pane_t2_ParamLimits

0xb4ce,	// (0x0007c25b) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x00080808) vid4_progress_pane_t_ParamLimits

0xb4e3,	// (0x0007c270) wait_bar_pane_cp07_ParamLimits

0xb9bd,	// (0x0007c74a) main_cam6_set_pane_g2_ParamLimits

0xb9bd,	// (0x0007c74a) main_cam6_set_pane_g2

0xb9c9,	// (0x0007c756) main_cset6_listscroll_pane_ParamLimits

0xb9c9,	// (0x0007c756) main_cset6_listscroll_pane

0xb9f2,	// (0x0007c77f) main_cset6_slider_pane_ParamLimits

0xb9f2,	// (0x0007c77f) main_cset6_slider_pane

0xb9fe,	// (0x0007c78b) main_cset6_text2_pane_ParamLimits

0xb9fe,	// (0x0007c78b) main_cset6_text2_pane

0x3a3e,	// (0x000747cb) main_cset6_text_pane

0x3299,	// (0x00074026) main_cset_list_pane_copy1_ParamLimits

0x3299,	// (0x00074026) main_cset_list_pane_copy1

0x32a9,	// (0x00074036) scroll_pane_cp028_copy1

0xba11,	// (0x0007c79e) cset_list_set_pane_copy1

0x337c,	// (0x00074109) aid_position_infowindow_above_copy1

0x3384,	// (0x00074111) aid_position_infowindow_below_copy1

0xba20,	// (0x0007c7ad) cset_list_set_pane_g1_copy1

0xba28,	// (0x0007c7b5) cset_list_set_pane_g3_copy1_ParamLimits

0xba28,	// (0x0007c7b5) cset_list_set_pane_g3_copy1

0xba37,	// (0x0007c7c4) cset_list_set_pane_t1_copy1_ParamLimits

0xba37,	// (0x0007c7c4) cset_list_set_pane_t1_copy1

0xe171,	// (0x0007eefe) list_highlight_pane_cp021_copy1_ParamLimits

0xe171,	// (0x0007eefe) list_highlight_pane_cp021_copy1

0x3a46,	// (0x000747d3) cset6_slider_pane_ParamLimits

0x3a46,	// (0x000747d3) cset6_slider_pane

0x3a72,	// (0x000747ff) main_cset6_slider_pane_g1_ParamLimits

0x3a72,	// (0x000747ff) main_cset6_slider_pane_g1

0xba4c,	// (0x0007c7d9) main_cset6_slider_pane_g2_ParamLimits

0xba4c,	// (0x0007c7d9) main_cset6_slider_pane_g2

0x32be,	// (0x0007404b) main_cset6_slider_pane_g3_ParamLimits

0x32be,	// (0x0007404b) main_cset6_slider_pane_g3

0xba74,	// (0x0007c801) main_cset6_slider_pane_g4_ParamLimits

0xba74,	// (0x0007c801) main_cset6_slider_pane_g4

0xba80,	// (0x0007c80d) main_cset6_slider_pane_g5_ParamLimits

0xba80,	// (0x0007c80d) main_cset6_slider_pane_g5

0x32be,	// (0x0007404b) main_cset6_slider_pane_g7_ParamLimits

0x32be,	// (0x0007404b) main_cset6_slider_pane_g7

0x32ca,	// (0x00074057) main_cset6_slider_pane_g8_ParamLimits

0x32ca,	// (0x00074057) main_cset6_slider_pane_g8

0xba8c,	// (0x0007c819) main_cset6_slider_pane_g9_ParamLimits

0xba8c,	// (0x0007c819) main_cset6_slider_pane_g9

0xba98,	// (0x0007c825) main_cset6_slider_pane_g10_ParamLimits

0xba98,	// (0x0007c825) main_cset6_slider_pane_g10

0xba74,	// (0x0007c801) main_cset6_slider_pane_g11_ParamLimits

0xba74,	// (0x0007c801) main_cset6_slider_pane_g11

0xbaa4,	// (0x0007c831) main_cset6_slider_pane_g12_ParamLimits

0xbaa4,	// (0x0007c831) main_cset6_slider_pane_g12

0xbab0,	// (0x0007c83d) main_cset6_slider_pane_g13_ParamLimits

0xbab0,	// (0x0007c83d) main_cset6_slider_pane_g13

0xbabc,	// (0x0007c849) main_cset6_slider_pane_g14_ParamLimits

0xbabc,	// (0x0007c849) main_cset6_slider_pane_g14

0xbac8,	// (0x0007c855) main_cset6_slider_pane_g15_ParamLimits

0xbac8,	// (0x0007c855) main_cset6_slider_pane_g15

0xba80,	// (0x0007c80d) main_cset6_slider_pane_g16_ParamLimits

0xba80,	// (0x0007c80d) main_cset6_slider_pane_g16

0xbae0,	// (0x0007c86d) main_cset6_slider_pane_g17_ParamLimits

0xbae0,	// (0x0007c86d) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x000808d5) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x000808d5) main_cset6_slider_pane_g

0x3a9a,	// (0x00074827) main_cset6_slider_pane_t1_ParamLimits

0x3a9a,	// (0x00074827) main_cset6_slider_pane_t1

0xbaec,	// (0x0007c879) main_cset6_slider_pane_t2_ParamLimits

0xbaec,	// (0x0007c879) main_cset6_slider_pane_t2

0x3adb,	// (0x00074868) main_cset6_slider_pane_t3_ParamLimits

0x3adb,	// (0x00074868) main_cset6_slider_pane_t3

0xbb17,	// (0x0007c8a4) main_cset6_slider_pane_t4_ParamLimits

0xbb17,	// (0x0007c8a4) main_cset6_slider_pane_t4

0x3b06,	// (0x00074893) main_cset6_slider_pane_t5_ParamLimits

0x3b06,	// (0x00074893) main_cset6_slider_pane_t5

0x3b31,	// (0x000748be) main_cset6_slider_pane_t7_ParamLimits

0x3b31,	// (0x000748be) main_cset6_slider_pane_t7

0xbb42,	// (0x0007c8cf) main_cset6_slider_pane_t8_ParamLimits

0xbb42,	// (0x0007c8cf) main_cset6_slider_pane_t8

0xbb66,	// (0x0007c8f3) main_cset6_slider_pane_t9_ParamLimits

0xbb66,	// (0x0007c8f3) main_cset6_slider_pane_t9

0xbb8a,	// (0x0007c917) main_cset6_slider_pane_t10_ParamLimits

0xbb8a,	// (0x0007c917) main_cset6_slider_pane_t10

0xbbae,	// (0x0007c93b) main_cset6_slider_pane_t11_ParamLimits

0xbbae,	// (0x0007c93b) main_cset6_slider_pane_t11

0x3b67,	// (0x000748f4) main_cset6_slider_pane_t14_ParamLimits

0x3b67,	// (0x000748f4) main_cset6_slider_pane_t14

0x3ba0,	// (0x0007492d) main_cset6_slider_pane_t15_ParamLimits

0x3ba0,	// (0x0007492d) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x000808fa) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x000808fa) main_cset6_slider_pane_t

0x338c,	// (0x00074119) cset_slider_pane_g1_copy1

0x3395,	// (0x00074122) cset_slider_pane_g2_copy1

0x339e,	// (0x0007412b) cset_slider_pane_g3_copy1

0x0f54,	// (0x00071ce1) bg_popup_sub_pane_cp011_copy1

0x3419,	// (0x000741a6) main_cset_text_pane_g1_copy1

0x3421,	// (0x000741ae) main_cset_text_pane_t1_copy1

0x342f,	// (0x000741bc) main_cset_text_pane_t2_copy1

0x343d,	// (0x000741ca) main_cset_text_pane_t3_copy1

0x344b,	// (0x000741d8) main_cset_text_pane_t4_copy1

0x3459,	// (0x000741e6) main_cset_text_pane_t5_copy1

0x3467,	// (0x000741f4) main_cset_text_pane_t6_copy1

0x3475,	// (0x00074202) main_cset_text_pane_t7_copy1

0xbbef,	// (0x0007c97c) main_cset_text2_pane_t1_copy1

0x8d46,	// (0x00079ad3) main_ncimui_pane

0x8d9f,	// (0x00079b2c) popup_query_ncimui_window_ParamLimits

0x8d9f,	// (0x00079b2c) popup_query_ncimui_window

0x4d65,	// (0x00075af2) field_cale_ev2_pane_g4_ParamLimits

0x4d65,	// (0x00075af2) field_cale_ev2_pane_g4

0x9ea2,	// (0x0007ac2f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9ea2,	// (0x0007ac2f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x000805d4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x000805d4) cell_video_dialer_keypad_pane_g

0x9eba,	// (0x0007ac47) cell_video_dialer_keypad_pane_t1

0x0f54,	// (0x00071ce1) bg_popup_window_pane_cp012

0xdd96,	// (0x0007eb23) heading_pane_cp06

0x3c29,	// (0x000749b6) ncim_query_content_pane

0x0f54,	// (0x00071ce1) bg_popup_heading_pane_cp01

0x3c31,	// (0x000749be) ncim_heading_pane_t1

0x3c3f,	// (0x000749cc) ncim_indicator_popup_pane

0x3c51,	// (0x000749de) ncim_query_button_pane

0x3c65,	// (0x000749f2) ncim_query_content_pane_t1

0x3c77,	// (0x00074a04) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0008093e) ncim_query_content_pane_t

0x3cb1,	// (0x00074a3e) ncim_query_list_pane

0x3cc3,	// (0x00074a50) ncim_query_popup_pane

0x3c3f,	// (0x000749cc) ncim_indicator_popup_pane_ParamLimits

0xbd30,	// (0x0007cabd) ncim_query_content_pane_g1_ParamLimits

0xbd30,	// (0x0007cabd) ncim_query_content_pane_g1

0x3c65,	// (0x000749f2) ncim_query_content_pane_t1_ParamLimits

0x3c77,	// (0x00074a04) ncim_query_content_pane_t2_ParamLimits

0xbd3c,	// (0x0007cac9) ncim_query_content_pane_t3_ParamLimits

0xbd3c,	// (0x0007cac9) ncim_query_content_pane_t3

0xbd59,	// (0x0007cae6) ncim_query_content_pane_t4_ParamLimits

0xbd59,	// (0x0007cae6) ncim_query_content_pane_t4

0xbd76,	// (0x0007cb03) ncim_query_content_pane_t5_ParamLimits

0xbd76,	// (0x0007cb03) ncim_query_content_pane_t5

0x3c89,	// (0x00074a16) ncim_query_content_pane_t6_ParamLimits

0x3c89,	// (0x00074a16) ncim_query_content_pane_t6

0xfbb1,	// (0x0008093e) ncim_query_content_pane_t_ParamLimits

0x3cb1,	// (0x00074a3e) ncim_query_list_pane_ParamLimits

0x3cc3,	// (0x00074a50) ncim_query_popup_pane_ParamLimits

0x3cd7,	// (0x00074a64) wait_bar_pane_cp04

0x0f54,	// (0x00071ce1) input_focus_pane_cp011

0x3cdf,	// (0x00074a6c) ncim_query_popup_pane_t1

0x3ced,	// (0x00074a7a) ncim_list_query_list_pane_ParamLimits

0x3ced,	// (0x00074a7a) ncim_list_query_list_pane

0x0f54,	// (0x00071ce1) bg_button_pane_cp027

0x3d00,	// (0x00074a8d) ncim_query_button_pane_g1

0x0f54,	// (0x00071ce1) list_highlight_pane_cp012

0x3d0a,	// (0x00074a97) ncim_list_query_list_pane_g1

0x3d12,	// (0x00074a9f) ncim_list_query_list_pane_t1

0xa4a8,	// (0x0007b235) cam4_indicators_pane_g3_ParamLimits

0xa4a8,	// (0x0007b235) cam4_indicators_pane_g3

0xa559,	// (0x0007b2e6) vid4_indicators_pane_g5_ParamLimits

0xa559,	// (0x0007b2e6) vid4_indicators_pane_g5

0xb497,	// (0x0007c224) vid4_progress_pane_g5_ParamLimits

0xb497,	// (0x0007c224) vid4_progress_pane_g5

0xbc20,	// (0x0007c9ad) main_ncimui_pane_g1

0xbc86,	// (0x0007ca13) ncimui_group_query_pane_ParamLimits

0xbc86,	// (0x0007ca13) ncimui_group_query_pane

0xbcce,	// (0x0007ca5b) ncimui_list_pane_ParamLimits

0xbcce,	// (0x0007ca5b) ncimui_list_pane

0xbcf3,	// (0x0007ca80) ncimui_text_pane_ParamLimits

0xbcf3,	// (0x0007ca80) ncimui_text_pane

0xbd93,	// (0x0007cb20) ncimui_text_pane_t1_ParamLimits

0xbd93,	// (0x0007cb20) ncimui_text_pane_t1

0x3d29,	// (0x00074ab6) ncimui_list_single_graphic_pane_ParamLimits

0x3d29,	// (0x00074ab6) ncimui_list_single_graphic_pane

0xbdb1,	// (0x0007cb3e) ncimui_query_pane_ParamLimits

0xbdb1,	// (0x0007cb3e) ncimui_query_pane

0x0f54,	// (0x00071ce1) list_highlight_pane_cp013

0x3d39,	// (0x00074ac6) ncim_list_query_list_pane_t1_copy1

0x3d47,	// (0x00074ad4) ncim_list_single_graphic_pane_g1

0x3d4f,	// (0x00074adc) ncim_query_button_pane_cp01

0x3d5b,	// (0x00074ae8) ncim_query_entry_pane_ParamLimits

0x3d5b,	// (0x00074ae8) ncim_query_entry_pane

0x3d6e,	// (0x00074afb) ncimui_query_pane_g1

0x3d7a,	// (0x00074b07) ncimui_query_pane_t1_ParamLimits

0x3d7a,	// (0x00074b07) ncimui_query_pane_t1

0xe171,	// (0x0007eefe) input_focus_pane_cp012

0x3d93,	// (0x00074b20) ncim_query_entry_pane_t1

0x172d,	// (0x000724ba) main_im_pane_ParamLimits

0x8d46,	// (0x00079ad3) main_mobtv_pane_ParamLimits

0x8d46,	// (0x00079ad3) main_mobtv_pane

0xba8c,	// (0x0007c819) main_cset6_slider_pane_g18_ParamLimits

0xba8c,	// (0x0007c819) main_cset6_slider_pane_g18

0xbab0,	// (0x0007c83d) main_cset6_slider_pane_g19_ParamLimits

0xbab0,	// (0x0007c83d) main_cset6_slider_pane_g19

0xee58,	// (0x0007fbe5) bg_main_mobtv_pane_ParamLimits

0xee58,	// (0x0007fbe5) bg_main_mobtv_pane

0xbdc1,	// (0x0007cb4e) main_mobtv_info_pane

0xbdca,	// (0x0007cb57) main_mobtv_loading_pane_ParamLimits

0xbdca,	// (0x0007cb57) main_mobtv_loading_pane

0x3da5,	// (0x00074b32) main_mobtv_pg_channel_list_pane

0x3daf,	// (0x00074b3c) main_mobtv_pg_hdr_pane

0xbdd7,	// (0x0007cb64) main_mobtv_programe_curr_pane_ParamLimits

0xbdd7,	// (0x0007cb64) main_mobtv_programe_curr_pane

0xbde4,	// (0x0007cb71) main_mobtv_programe_next_pane_ParamLimits

0xbde4,	// (0x0007cb71) main_mobtv_programe_next_pane

0x3db8,	// (0x00074b45) popup_mobtv_noti_window

0x19f6,	// (0x00072783) main_tv_pg_hdr_pane_g1

0x3dc0,	// (0x00074b4d) main_tv_pg_hdr_pane_g2

0x3dc8,	// (0x00074b55) main_tv_pg_hdr_pane_g3

0x3dd0,	// (0x00074b5d) main_tv_pg_hdr_pane_g4

0x3dd8,	// (0x00074b65) main_tv_pg_hdr_pane_g5

0x3de0,	// (0x00074b6d) main_tv_pg_hdr_pane_g6

0x3de8,	// (0x00074b75) main_tv_pg_hdr_pane_g7

0x3df0,	// (0x00074b7d) main_tv_pg_hdr_pane_g8

0x3df8,	// (0x00074b85) main_tv_pg_hdr_pane_g9

0x3e00,	// (0x00074b8d) main_tv_pg_hdr_pane_g10

0x3e0a,	// (0x00074b97) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0008094b) main_tv_pg_hdr_pane_g

0x3e14,	// (0x00074ba1) main_tv_pg_hdr_pane_t1

0x3e22,	// (0x00074baf) main_tv_pg_hdr_pane_t2

0x3e30,	// (0x00074bbd) main_tv_pg_hdr_pane_t3

0x3e3e,	// (0x00074bcb) main_tv_pg_hdr_pane_t4

0x3e4c,	// (0x00074bd9) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x00080962) main_tv_pg_hdr_pane_t

0x3e5a,	// (0x00074be7) single_mobtv_pg_channel_pane_ParamLimits

0x3e5a,	// (0x00074be7) single_mobtv_pg_channel_pane

0x3e6c,	// (0x00074bf9) single_mobtv_pg_channel_table_pane

0x3e75,	// (0x00074c02) single_mobtv_pg_channel_thumb_pane

0x3e7e,	// (0x00074c0b) single_tv_pg_channel_pane_g1

0x3e87,	// (0x00074c14) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0008096d) single_tv_pg_channel_pane_g

0x1695,	// (0x00072422) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1695,	// (0x00072422) bg_single_mobtv_pg_channel_thumb_pane

0x3e90,	// (0x00074c1d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3e90,	// (0x00074c1d) single_mobtv_pg_channel_thumb_pane_g1

0x3e9e,	// (0x00074c2b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3e9e,	// (0x00074c2b) single_mobtv_pg_channel_thumb_pane_g2

0x3eaa,	// (0x00074c37) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3eaa,	// (0x00074c37) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x00080972) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x00080972) single_mobtv_pg_channel_thumb_pane_g

0x3eb6,	// (0x00074c43) single_mobtv_pg_channel_thumb_pane_t1

0x3ec4,	// (0x00074c51) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00080979) single_mobtv_pg_channel_thumb_pane_t

0x19f6,	// (0x00072783) bg_single_mobtv_pg_channel_table_pane_g1

0x19f6,	// (0x00072783) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x0008017c) bg_single_mobtv_pg_channel_table_pane_g

0x3ed2,	// (0x00074c5f) single_mobtv_pg_channel_table_pane_t1

0x3ee0,	// (0x00074c6d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0008097e) single_mobtv_pg_channel_table_pane_t

0xbdf9,	// (0x0007cb86) main_mobtv_info_pane_g1_ParamLimits

0xbdf9,	// (0x0007cb86) main_mobtv_info_pane_g1

0xbe15,	// (0x0007cba2) main_mobtv_info_pane_t1_ParamLimits

0xbe15,	// (0x0007cba2) main_mobtv_info_pane_t1

0xbe7b,	// (0x0007cc08) main_mobtv_info_pane_t2_ParamLimits

0xbe7b,	// (0x0007cc08) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00080988) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00080988) main_mobtv_info_pane_t

0xbefe,	// (0x0007cc8b) wait_bar_pane_cp05

0xbf0e,	// (0x0007cc9b) main_mobtv_loading_pane_g1_ParamLimits

0xbf0e,	// (0x0007cc9b) main_mobtv_loading_pane_g1

0xbf1a,	// (0x0007cca7) main_mobtv_loading_pane_g2_ParamLimits

0xbf1a,	// (0x0007cca7) main_mobtv_loading_pane_g2

0xbf26,	// (0x0007ccb3) main_mobtv_loading_pane_g3_ParamLimits

0xbf26,	// (0x0007ccb3) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0008098f) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0008098f) main_mobtv_loading_pane_g

0x3eee,	// (0x00074c7b) main_mobtv_loading_pane_t1_ParamLimits

0x3eee,	// (0x00074c7b) main_mobtv_loading_pane_t1

0x3f06,	// (0x00074c93) main_mobtv_loading_pane_t2_ParamLimits

0x3f06,	// (0x00074c93) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x00080996) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x00080996) main_mobtv_loading_pane_t

0xbf32,	// (0x0007ccbf) wait_bar_pane_cp06_ParamLimits

0xbf32,	// (0x0007ccbf) wait_bar_pane_cp06

0x3f2a,	// (0x00074cb7) main_mobtv_programe_curr_pane_t1

0x3f38,	// (0x00074cc5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0008099b) main_mobtv_programe_curr_pane_t

0x3f46,	// (0x00074cd3) main_mobtv_programe_next_pane_t1

0x3f54,	// (0x00074ce1) main_mobtv_programe_next_pane_t2

0x3f62,	// (0x00074cef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x000809a0) main_mobtv_programe_next_pane_t

0x0f54,	// (0x00071ce1) bg_popup_mobtv_noti_window_pane

0x3f70,	// (0x00074cfd) popup_mobtv_noti_window_g1

0x3f78,	// (0x00074d05) popup_mobtv_noti_window_t1

0x3f86,	// (0x00074d13) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x000809a7) popup_mobtv_noti_window_t

0x19f6,	// (0x00072783) bg_popup_mobtv_noti_window_pane_g1

0x644d,	// (0x000771da) sc_clock_pane

0x644d,	// (0x000771da) main_fs_bigclock_pane

0xb6c9,	// (0x0007c456) blid2_tripm_pane_t4_ParamLimits

0xb6c9,	// (0x0007c456) blid2_tripm_pane_t4

0xbf3e,	// (0x0007cccb) sc_clock_pane_g1_ParamLimits

0xbf3e,	// (0x0007cccb) sc_clock_pane_g1

0xbf4c,	// (0x0007ccd9) sc_clock_pane_t1_ParamLimits

0xbf4c,	// (0x0007ccd9) sc_clock_pane_t1

0xbf5f,	// (0x0007ccec) sc_clock_pane_t2_ParamLimits

0xbf5f,	// (0x0007ccec) sc_clock_pane_t2

0xbf71,	// (0x0007ccfe) sc_clock_pane_t3_ParamLimits

0xbf71,	// (0x0007ccfe) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x000809ac) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x000809ac) sc_clock_pane_t

0xcc1c,	// (0x0007d9a9) main_fs_bigclock_indicator_pane_ParamLimits

0xcc1c,	// (0x0007d9a9) main_fs_bigclock_indicator_pane

0xbfec,	// (0x0007cd79) main_fs_bigclock_pane_g1_ParamLimits

0xbfec,	// (0x0007cd79) main_fs_bigclock_pane_g1

0xcc28,	// (0x0007d9b5) main_fs_bigclock_pane_t1_ParamLimits

0xcc28,	// (0x0007d9b5) main_fs_bigclock_pane_t1

0xcc3a,	// (0x0007d9c7) main_fs_bigclock_pane_t2_ParamLimits

0xcc3a,	// (0x0007d9c7) main_fs_bigclock_pane_t2

0xcc4c,	// (0x0007d9d9) main_fs_bigclock_pane_t3_ParamLimits

0xcc4c,	// (0x0007d9d9) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x00080b75) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x00080b75) main_fs_bigclock_pane_t

0x49a2,	// (0x0007572f) main_fs_bigclock_indicator_pane_g1

0x3c59,	// (0x000749e6) ncim_query_content_pane_g2_ParamLimits

0x3c59,	// (0x000749e6) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00080939) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00080939) ncim_query_content_pane_g

0xbf83,	// (0x0007cd10) sc_clock_pane_t4_ParamLimits

0xbf83,	// (0x0007cd10) sc_clock_pane_t4

0x8d46,	// (0x00079ad3) main_radioblah_pane

0xa347,	// (0x0007b0d4) cell_call4_button_pane_t1_copy1_ParamLimits

0xa347,	// (0x0007b0d4) cell_call4_button_pane_t1_copy1

0xbc38,	// (0x0007c9c5) main_ncimui_pane_t1_ParamLimits

0xbc38,	// (0x0007c9c5) main_ncimui_pane_t1

0xbc52,	// (0x0007c9df) main_ncimui_pane_t2_ParamLimits

0xbc52,	// (0x0007c9df) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x00080932) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x00080932) main_ncimui_pane_t

0x40c7,	// (0x00074e54) main_radioblah_anim_pane_ParamLimits

0x40c7,	// (0x00074e54) main_radioblah_anim_pane

0x40d8,	// (0x00074e65) main_radioblah_info_pane_ParamLimits

0x40d8,	// (0x00074e65) main_radioblah_info_pane

0x40ec,	// (0x00074e79) main_radioblah_pane_t1_ParamLimits

0x40ec,	// (0x00074e79) main_radioblah_pane_t1

0x4108,	// (0x00074e95) main_radioblah_pane_t2_ParamLimits

0x4108,	// (0x00074e95) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x000809cd) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x000809cd) main_radioblah_pane_t

0xc034,	// (0x0007cdc1) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc034,	// (0x0007cdc1) main_radioblah_rocker_ctrl_pane

0x4150,	// (0x00074edd) main_radioblah_info_pane_t1_ParamLimits

0x4150,	// (0x00074edd) main_radioblah_info_pane_t1

0xc079,	// (0x0007ce06) main_radioblah_info_pane_t2_ParamLimits

0xc079,	// (0x0007ce06) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x000809d6) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x000809d6) main_radioblah_info_pane_t

0x19f6,	// (0x00072783) main_radioblah_rocker_ctrl_pane_g1

0xc121,	// (0x0007ceae) main_radioblah_rocker_ctrl_pane_g2

0xc129,	// (0x0007ceb6) main_radioblah_rocker_ctrl_pane_g3

0xc131,	// (0x0007cebe) main_radioblah_rocker_ctrl_pane_g4

0xc139,	// (0x0007cec6) main_radioblah_rocker_ctrl_pane_g5

0xc141,	// (0x0007cece) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x000809df) main_radioblah_rocker_ctrl_pane_g

0xbbef,	// (0x0007c97c) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3ca,	// (0x0007b157) cam4_image_uncrop_qvga_pane

0xa4ec,	// (0x0007b279) vid4_image_uncrop_qcif_pane

0xb847,	// (0x0007c5d4) cam6_image_uncrop_qvga_pane_ParamLimits

0xb847,	// (0x0007c5d4) cam6_image_uncrop_qvga_pane

0x3924,	// (0x000746b1) vid6_image_uncrop_qcif_pane_ParamLimits

0x3924,	// (0x000746b1) vid6_image_uncrop_qcif_pane

0x0f54,	// (0x00071ce1) bg_popup_preview_window_pane_cp03

0x3bff,	// (0x0007498c) list_cset_text2_pane

0x3c07,	// (0x00074994) main_cset6_text2_pane_g1

0x3c0f,	// (0x0007499c) main_cset6_text2_pane_t1

0x4a4f,	// (0x000757dc) list_cset_text2_pane_t1_ParamLimits

0x4a4f,	// (0x000757dc) list_cset_text2_pane_t1

0x8d46,	// (0x00079ad3) main_radioblah_pane_ParamLimits

0xbeec,	// (0x0007cc79) main_mobtv_info_pane_t3_ParamLimits

0xbeec,	// (0x0007cc79) main_mobtv_info_pane_t3

0xc022,	// (0x0007cdaf) main_radioblah_pane_g1

0xc04d,	// (0x0007cdda) main_radioblah_info_pane_g1

0xc0c8,	// (0x0007ce55) main_radioblah_info_pane_t3_ParamLimits

0xc0c8,	// (0x0007ce55) main_radioblah_info_pane_t3

0x7e5b,	// (0x00078be8) highlight_cell_cale_month_pane_ParamLimits

0x7e5b,	// (0x00078be8) highlight_cell_cale_month_pane

0x644d,	// (0x000771da) main_phob_fisheye_pane

0x2ba3,	// (0x00073930) scroll_pane_cp0031_ParamLimits

0x2ba3,	// (0x00073930) scroll_pane_cp0031

0x3a2e,	// (0x000747bb) wait_bar_pane_cp08_ParamLimits

0xba11,	// (0x0007c79e) cset_list_set_pane_copy1_ParamLimits

0x418a,	// (0x00074f17) highlight_cell_cale_month_pane_g1

0xc149,	// (0x0007ced6) highlight_cell_cale_month_pane_t1

0x4192,	// (0x00074f1f) list_gen_pane_cp01

0x32a9,	// (0x00074036) scroll_pane_01

0xc157,	// (0x0007cee4) list_single_double_fisheye_pane

0xc160,	// (0x0007ceed) list_double_fisheye_pane_g1_ParamLimits

0xc160,	// (0x0007ceed) list_double_fisheye_pane_g1

0xc16c,	// (0x0007cef9) list_double_fisheye_pane_g2_ParamLimits

0xc16c,	// (0x0007cef9) list_double_fisheye_pane_g2

0xc180,	// (0x0007cf0d) list_double_fisheye_pane_g3_ParamLimits

0xc180,	// (0x0007cf0d) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x000809ec) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x000809ec) list_double_fisheye_pane_g

0xc1a9,	// (0x0007cf36) list_double_fisheye_pane_t1_ParamLimits

0xc1a9,	// (0x0007cf36) list_double_fisheye_pane_t1

0xc1c4,	// (0x0007cf51) list_double_fisheye_pane_t2_ParamLimits

0xc1c4,	// (0x0007cf51) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x000809f7) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x000809f7) list_double_fisheye_pane_t

0x644d,	// (0x000771da) main_call5_pane

0xbfa9,	// (0x0007cd36) sc_swipe_pane_ParamLimits

0xbfa9,	// (0x0007cd36) sc_swipe_pane

0xc1f2,	// (0x0007cf7f) call5_image_pane_ParamLimits

0xc1f2,	// (0x0007cf7f) call5_image_pane

0xc1fe,	// (0x0007cf8b) call5_swipe_1_pane_ParamLimits

0xc1fe,	// (0x0007cf8b) call5_swipe_1_pane

0xc20a,	// (0x0007cf97) call5_swipe_2_pane_ParamLimits

0xc20a,	// (0x0007cf97) call5_swipe_2_pane

0xc222,	// (0x0007cfaf) popup_call5_audio_first_window_ParamLimits

0xc222,	// (0x0007cfaf) popup_call5_audio_first_window

0x1695,	// (0x00072422) call5_swipe_1_pane_g1_ParamLimits

0x1695,	// (0x00072422) call5_swipe_1_pane_g1

0x419b,	// (0x00074f28) call5_swipe_1_pane_g2_ParamLimits

0x419b,	// (0x00074f28) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x000809fc) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x000809fc) call5_swipe_1_pane_g

0x41a7,	// (0x00074f34) call5_swipe_1_pane_t1_ParamLimits

0x41a7,	// (0x00074f34) call5_swipe_1_pane_t1

0x1695,	// (0x00072422) call5_swipe_2_pane_g1_ParamLimits

0x1695,	// (0x00072422) call5_swipe_2_pane_g1

0x41bc,	// (0x00074f49) call5_swipe_2_pane_g2_ParamLimits

0x41bc,	// (0x00074f49) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x00080a01) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x00080a01) call5_swipe_2_pane_g

0x41c8,	// (0x00074f55) call5_swipe_2_pane_t1_ParamLimits

0x41c8,	// (0x00074f55) call5_swipe_2_pane_t1

0x41dd,	// (0x00074f6a) sc_swipe_pane_g1_ParamLimits

0x41dd,	// (0x00074f6a) sc_swipe_pane_g1

0x41ea,	// (0x00074f77) sc_swipe_pane_g2_ParamLimits

0x41ea,	// (0x00074f77) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x00080a06) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x00080a06) sc_swipe_pane_g

0x41f6,	// (0x00074f83) sc_swipe_pane_t1_ParamLimits

0x41f6,	// (0x00074f83) sc_swipe_pane_t1

0x644d,	// (0x000771da) main_cmail_launcher_pane

0xc22e,	// (0x0007cfbb) aid_size_cell_cmail_l_ParamLimits

0xc22e,	// (0x0007cfbb) aid_size_cell_cmail_l

0xc23e,	// (0x0007cfcb) grid_cmail_l_pane_ParamLimits

0xc23e,	// (0x0007cfcb) grid_cmail_l_pane

0xc24a,	// (0x0007cfd7) cell_cmail_l_pane_ParamLimits

0xc24a,	// (0x0007cfd7) cell_cmail_l_pane

0xc25c,	// (0x0007cfe9) cell_cmail_l_pane_g1_ParamLimits

0xc25c,	// (0x0007cfe9) cell_cmail_l_pane_g1

0xc26c,	// (0x0007cff9) cell_cmail_l_pane_t1_ParamLimits

0xc26c,	// (0x0007cff9) cell_cmail_l_pane_t1

0xc282,	// (0x0007d00f) cell_cmail_l_pane_t2_ParamLimits

0xc282,	// (0x0007d00f) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x00080a0b) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x00080a0b) cell_cmail_l_pane_t

0xe171,	// (0x0007eefe) grid_highlight_pane_cp018_ParamLimits

0xe171,	// (0x0007eefe) grid_highlight_pane_cp018

0x62e7,	// (0x00077074) main2_pane_ParamLimits

0x62e7,	// (0x00077074) main2_pane

0x1826,	// (0x000725b3) popup_sp_fs_action_menu_bg_pane_g1

0x182e,	// (0x000725bb) popup_sp_fs_action_menu_bg_pane_g2

0x1836,	// (0x000725c3) popup_sp_fs_action_menu_bg_pane_g3

0x183e,	// (0x000725cb) popup_sp_fs_action_menu_bg_pane_g4

0x1846,	// (0x000725d3) popup_sp_fs_action_menu_bg_pane_g5

0x184e,	// (0x000725db) popup_sp_fs_action_menu_bg_pane_g6

0x1856,	// (0x000725e3) popup_sp_fs_action_menu_bg_pane_g7

0x185e,	// (0x000725eb) popup_sp_fs_action_menu_bg_pane_g8

0x1866,	// (0x000725f3) popup_sp_fs_action_menu_bg_pane_g9

0x186e,	// (0x000725fb) popup_sp_fs_action_menu_bg_pane_g10

0x186e,	// (0x000725fb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0007fed2) popup_sp_fs_action_menu_bg_pane_g

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g3_g1

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g3_g2

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0007ff80) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0007ff80) list_medium_line_x2_t3_g3_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g3_t1

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g3_t2

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g3_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g2_g1

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0007ff8e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0007ff8e) list_medium_line_x2_t3_g2_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g2_t1

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g2_t2

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g2_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g4_g1

0x1a1c,	// (0x000727a9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t4_g4_g2

0x1a1c,	// (0x000727a9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t4_g4_g3

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0007ff93) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0007ff93) list_medium_line_x2_t4_g4_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t1

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t2

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g4_t3

0x1a3b,	// (0x000727c8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0007ff9c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0007ff9c) list_medium_line_x2_t4_g4_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g4_g1

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g4_g2

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g4_g3

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0007ff93) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0007ff93) list_medium_line_x2_t2_g4_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g4_t1

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00080003) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00080003) list_medium_line_x2_t2_g4_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g3_g1

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t2_g3_g2

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0007ff80) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0007ff80) list_medium_line_x2_t2_g3_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g3_t1

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00080003) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00080003) list_medium_line_x2_t2_g3_t

0x808f,	// (0x00078e1c) main_sp_fs_list_pane_ParamLimits

0x808f,	// (0x00078e1c) main_sp_fs_list_pane

0x809c,	// (0x00078e29) sp_fs_scroll_pane_ParamLimits

0x809c,	// (0x00078e29) sp_fs_scroll_pane

0x1d98,	// (0x00072b25) list_medium_line_x2_t3_t1

0x1d98,	// (0x00072b25) list_medium_line_x2_t3_t2

0x1da7,	// (0x00072b34) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0008004e) list_medium_line_x2_t3_t

0x1d98,	// (0x00072b25) list_medium_line_x3_t4_t1

0x1d98,	// (0x00072b25) list_medium_line_x3_t4_t2

0x1d98,	// (0x00072b25) list_medium_line_x3_t4_t3

0x1d98,	// (0x00072b25) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00080055) list_medium_line_x3_t4_t

0x1d98,	// (0x00072b25) list_medium_line_x4_t5_t1

0x1d98,	// (0x00072b25) list_medium_line_x4_t5_t2

0x1d98,	// (0x00072b25) list_medium_line_x4_t5_t3

0x1d98,	// (0x00072b25) list_medium_line_x4_t5_t4

0x1d98,	// (0x00072b25) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0008005e) list_medium_line_x4_t5_t

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g1

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g2_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g2

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g3_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g3

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g4_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00080069) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00080069) list_medium_line_t4_g4_g

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t1

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t2

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t3

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t4_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x00080072) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x00080072) list_medium_line_t4_g4_t

0x81b7,	// (0x00078f44) chi_dic_find_pane_g1

0x8d62,	// (0x00079aef) main_tport_pane

0x1d98,	// (0x00072b25) list_medium_line_plain_t1

0x1a10,	// (0x0007279d) list_medium_line_t2_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t2_g2_g1

0x518f,	// (0x00075f1c) list_medium_line_t2_g2_g2_ParamLimits

0x518f,	// (0x00075f1c) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x00080743) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x00080743) list_medium_line_t2_g2_g

0x1a28,	// (0x000727b5) list_medium_line_t2_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_g2_t1

0x1a28,	// (0x000727b5) list_medium_line_t2_g2_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x00080748) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x00080748) list_medium_line_t2_g2_t

0x36e9,	// (0x00074476) aid_sp_fs_list_icon_a_sm

0x5225,	// (0x00075fb2) aid_sp_fs_list_icon_d

0x36f1,	// (0x0007447e) aid_sp_fs_text_primary

0x522d,	// (0x00075fba) aid_sp_fs_text_secondary

0x36fa,	// (0x00074487) list_medium_line

0x36fa,	// (0x00074487) list_medium_line_g2

0x36fa,	// (0x00074487) list_medium_line_g3

0x36fa,	// (0x00074487) list_medium_line_plain

0x36fa,	// (0x00074487) list_medium_line_plain_t2

0x36fa,	// (0x00074487) list_medium_line_plain_t3

0x36fa,	// (0x00074487) list_medium_line_right_icon

0x36fa,	// (0x00074487) list_medium_line_right_iconx2

0x36fa,	// (0x00074487) list_medium_line_t2

0x36fa,	// (0x00074487) list_medium_line_t2_g2

0x36fa,	// (0x00074487) list_medium_line_t2_g3

0x36fa,	// (0x00074487) list_medium_line_t2_right_icon

0x36fa,	// (0x00074487) list_medium_line_t2_right_iconx2

0x36fa,	// (0x00074487) list_medium_line_t3

0x36fa,	// (0x00074487) list_medium_line_t3_g2

0x36fa,	// (0x00074487) list_medium_line_t3_g3

0x36fa,	// (0x00074487) list_medium_line_t3_right_iconx2

0xb4f3,	// (0x0007c280) list_medium_line_t4_g4

0xb4fc,	// (0x0007c289) list_medium_line_x2

0xb4fc,	// (0x0007c289) list_medium_line_x2_t2_g2

0xb4fc,	// (0x0007c289) list_medium_line_x2_t2_g3

0xb4fc,	// (0x0007c289) list_medium_line_x2_t2_g4

0xb4fc,	// (0x0007c289) list_medium_line_x2_t3

0xb4fc,	// (0x0007c289) list_medium_line_x2_t3_g2

0xb4fc,	// (0x0007c289) list_medium_line_x2_t3_g3

0xb4fc,	// (0x0007c289) list_medium_line_x2_t3_g4

0xb4fc,	// (0x0007c289) list_medium_line_x2_t4_g2

0xb4fc,	// (0x0007c289) list_medium_line_x2_t4_g4

0xb505,	// (0x0007c292) list_medium_line_x3

0xb505,	// (0x0007c292) list_medium_line_x3_t4

0xb505,	// (0x0007c292) list_medium_line_x3_t4_g4

0xb4f3,	// (0x0007c280) list_medium_line_x4_t4

0xb4f3,	// (0x0007c280) list_medium_line_x4_t4_g7

0xb4f3,	// (0x0007c280) list_medium_line_x4_t5

0xb50e,	// (0x0007c29b) list_single_fs_dyc_pane_ParamLimits

0xb50e,	// (0x0007c29b) list_single_fs_dyc_pane

0x1a10,	// (0x0007279d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x4_t4_g7_g1

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g2

0x1a1c,	// (0x000727a9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x4_t4_g7_g3

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g4

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g5

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1695,	// (0x00072422) list_medium_line_x4_t4_g7_g6

0x16a3,	// (0x00072430) list_medium_line_x4_t4_g7_g7_ParamLimits

0x16a3,	// (0x00072430) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x00080913) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x00080913) list_medium_line_x4_t4_g7_g

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t1

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t2

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x4_t4_g7_t3

0x3bd9,	// (0x00074966) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3bd9,	// (0x00074966) list_medium_line_x4_t4_g7_t4

0x3bec,	// (0x00074979) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3bec,	// (0x00074979) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x00080922) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x00080922) list_medium_line_x4_t4_g7_t

0xbbd2,	// (0x0007c95f) list_single_dyc_row_pane_ParamLimits

0xbbd2,	// (0x0007c95f) list_single_dyc_row_pane

0xc1e6,	// (0x0007cf73) call5_gesture_pane_ParamLimits

0xc1e6,	// (0x0007cf73) call5_gesture_pane

0xc216,	// (0x0007cfa3) call5_windows_pane_ParamLimits

0xc216,	// (0x0007cfa3) call5_windows_pane

0xc29a,	// (0x0007d027) call5_swipe_1_pane_cp_ParamLimits

0xc29a,	// (0x0007d027) call5_swipe_1_pane_cp

0xc2a6,	// (0x0007d033) call5_swipe_2_pane_cp_ParamLimits

0xc2a6,	// (0x0007d033) call5_swipe_2_pane_cp

0x1992,	// (0x0007271f) call5_image_pane_cp

0xc2b2,	// (0x0007d03f) popup_call5_audio_first_window_cp_ParamLimits

0xc2b2,	// (0x0007d03f) popup_call5_audio_first_window_cp

0x41dd,	// (0x00074f6a) call5_swipe_1_pane_g1_cp_ParamLimits

0x41dd,	// (0x00074f6a) call5_swipe_1_pane_g1_cp

0x420b,	// (0x00074f98) call5_swipe_1_pane_g2_cp

0x41f6,	// (0x00074f83) call5_swipe_1_pane_t1_cp_ParamLimits

0x41f6,	// (0x00074f83) call5_swipe_1_pane_t1_cp

0x41dd,	// (0x00074f6a) call5_swipe_2_pane_g1_cp_ParamLimits

0x41dd,	// (0x00074f6a) call5_swipe_2_pane_g1_cp

0x4213,	// (0x00074fa0) call5_swipe_2_pane_g2_cp

0x421b,	// (0x00074fa8) call5_swipe_2_pane_t1_cp_ParamLimits

0x421b,	// (0x00074fa8) call5_swipe_2_pane_t1_cp

0xe171,	// (0x0007eefe) main_sp_fs_email_pane

0x4230,	// (0x00074fbd) main_sp_fs_listscroll_pane_te

0xc2be,	// (0x0007d04b) popup_sp_fs_action_menu_pane_ParamLimits

0xc2be,	// (0x0007d04b) popup_sp_fs_action_menu_pane

0x19f6,	// (0x00072783) bg_sp_fs_ctrlbar_pane_g1

0x2dd7,	// (0x00073b64) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2de9,	// (0x00073b76) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2de0,	// (0x00073b6d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x19f6,	// (0x00072783) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x00080a10) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x257e,	// (0x0007330b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x257e,	// (0x0007330b) bg_sp_fs_ctrlbar_ddmenu_pane

0x4239,	// (0x00074fc6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4239,	// (0x00074fc6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4245,	// (0x00074fd2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4245,	// (0x00074fd2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x00080a19) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x00080a19) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4251,	// (0x00074fde) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4251,	// (0x00074fde) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5242,	// (0x00075fcf) list_medium_line_t2_right_icon_g1

0x1d98,	// (0x00072b25) list_medium_line_t2_right_icon_t1

0x1d98,	// (0x00072b25) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x00080a1e) list_medium_line_t2_right_icon_t

0xee2a,	// (0x0007fbb7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xee2a,	// (0x0007fbb7) bg_sp_fs_ctrlbar_pane

0xc345,	// (0x0007d0d2) main_sp_fs_ctrlbar_button_pane_cp01

0xc34d,	// (0x0007d0da) main_sp_fs_ctrlbar_ddmenu_pane

0x42a3,	// (0x00075030) main_sp_fs_ctrlbar_pane_g1

0x42af,	// (0x0007503c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x00080a23) main_sp_fs_ctrlbar_pane_g

0xc387,	// (0x0007d114) main_sp_fs_ctrlbar_pane_t1

0xc3cf,	// (0x0007d15c) main_sp_fs_ctrlbar_pane

0xc3e3,	// (0x0007d170) main_sp_fs_listscroll_pane_te_cp01

0xc3f4,	// (0x0007d181) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc3f4,	// (0x0007d181) popup_sp_fs_action_menu_pane_cp01

0xe171,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe171,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp01

0xc41e,	// (0x0007d1ab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc41e,	// (0x0007d1ab) sp_fs_action_menu_list_gene_pane_g1

0x42d6,	// (0x00075063) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x42d6,	// (0x00075063) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x00080a31) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x00080a31) sp_fs_action_menu_list_gene_pane_g

0xc42d,	// (0x0007d1ba) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc42d,	// (0x0007d1ba) sp_fs_action_menu_list_gene_pane_t1

0xc445,	// (0x0007d1d2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc445,	// (0x0007d1d2) sp_fs_action_menu_list_gene_pane

0x42e3,	// (0x00075070) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x42e3,	// (0x00075070) popup_sp_fs_action_menu_bg_pane

0xc462,	// (0x0007d1ef) sp_fs_action_menu_list_pane_ParamLimits

0xc462,	// (0x0007d1ef) sp_fs_action_menu_list_pane

0x42f1,	// (0x0007507e) sp_fs_scroll_pane_cp01_ParamLimits

0x42f1,	// (0x0007507e) sp_fs_scroll_pane_cp01

0x1d98,	// (0x00072b25) list_medium_line_plain_t2_t1

0x1d98,	// (0x00072b25) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x00080a1e) list_medium_line_plain_t2_t

0x1d98,	// (0x00072b25) list_medium_line_plain_t3_t1

0x1d98,	// (0x00072b25) list_medium_line_plain_t3_t2

0x1d98,	// (0x00072b25) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x00080a36) list_medium_line_plain_t3_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g2_g1

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0007ff8e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0007ff8e) list_medium_line_x2_t2_g2_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t2_g2_t1

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00080003) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00080003) list_medium_line_x2_t2_g2_t

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t4_g2_g1

0x4317,	// (0x000750a4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4317,	// (0x000750a4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x00080a3d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x00080a3d) list_medium_line_x2_t4_g2_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t1

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t2

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t4_g2_t3

0x1a3b,	// (0x000727c8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0007ff9c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0007ff9c) list_medium_line_x2_t4_g2_t

0x5242,	// (0x00075fcf) list_medium_line_t3_right_iconx2_g1

0x19f6,	// (0x00072783) list_medium_line_t3_right_iconx2_g2

0x4328,	// (0x000750b5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x00080a42) list_medium_line_t3_right_iconx2_g

0x1d98,	// (0x00072b25) list_medium_line_t3_right_iconx2_t1

0x1d98,	// (0x00072b25) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x00080a1e) list_medium_line_t3_right_iconx2_t

0x1a10,	// (0x0007279d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x3_t4_g4_g1

0x1a1c,	// (0x000727a9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x3_t4_g4_g2

0x1a10,	// (0x0007279d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x3_t4_g4_g3

0x1a1c,	// (0x000727a9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x00080a49) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x00080a49) list_medium_line_x3_t4_g4_g

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t1

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t2

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x3_t4_g4_t3

0x4331,	// (0x000750be) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4331,	// (0x000750be) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x00080a52) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x00080a52) list_medium_line_x3_t4_g4_t

0xc480,	// (0x0007d20d) list_single_dyc_row_text_pane_t1_ParamLimits

0xc480,	// (0x0007d20d) list_single_dyc_row_text_pane_t1

0xc4b7,	// (0x0007d244) list_single_dyc_row_text_pane_t2_ParamLimits

0xc4b7,	// (0x0007d244) list_single_dyc_row_text_pane_t2

0x434e,	// (0x000750db) list_single_dyc_row_text_pane_t3_ParamLimits

0x434e,	// (0x000750db) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x00080a5b) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x00080a5b) list_single_dyc_row_text_pane_t

0x4372,	// (0x000750ff) list_single_dyc_row_pane_g1_ParamLimits

0x4372,	// (0x000750ff) list_single_dyc_row_pane_g1

0x437e,	// (0x0007510b) list_single_dyc_row_pane_g2_ParamLimits

0x437e,	// (0x0007510b) list_single_dyc_row_pane_g2

0x438a,	// (0x00075117) list_single_dyc_row_pane_g3_ParamLimits

0x438a,	// (0x00075117) list_single_dyc_row_pane_g3

0x4396,	// (0x00075123) list_single_dyc_row_pane_g4_ParamLimits

0x4396,	// (0x00075123) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x00080a68) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x00080a68) list_single_dyc_row_pane_g

0x43a2,	// (0x0007512f) list_single_dyc_row_text_pane_ParamLimits

0x43a2,	// (0x0007512f) list_single_dyc_row_text_pane

0x0f54,	// (0x00071ce1) bg_sp_fs_scroll_pane

0x43c1,	// (0x0007514e) thumb_sp_fs_scroll_pane

0x1a10,	// (0x0007279d) list_medium_line_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_g1

0x1a28,	// (0x000727b5) list_medium_line_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t1

0x1a10,	// (0x0007279d) list_medium_line_x2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_g1

0x518f,	// (0x00075f1c) list_medium_line_x2_g2_ParamLimits

0x518f,	// (0x00075f1c) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x00080743) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x00080743) list_medium_line_x2_g

0xe15d,	// (0x0007eeea) list_medium_line_x2_t1_ParamLimits

0xe15d,	// (0x0007eeea) list_medium_line_x2_t1

0x1a10,	// (0x0007279d) list_medium_line_x3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x3_g1

0x524a,	// (0x00075fd7) list_medium_line_x3_g2_ParamLimits

0x524a,	// (0x00075fd7) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x00080a71) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x00080a71) list_medium_line_x3_g

0x43ca,	// (0x00075157) list_medium_line_x3_t1_ParamLimits

0x43ca,	// (0x00075157) list_medium_line_x3_t1

0x43de,	// (0x0007516b) thumb_sp_fs_scroll_pane_g1

0x43e7,	// (0x00075174) thumb_sp_fs_scroll_pane_g2

0x43f0,	// (0x0007517d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00080a76) thumb_sp_fs_scroll_pane_g

0x43de,	// (0x0007516b) bg_sp_fs_scroll_pane_g1

0x43e7,	// (0x00075174) bg_sp_fs_scroll_pane_g2

0x43f0,	// (0x0007517d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00080a76) bg_sp_fs_scroll_pane_g

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g4_g1

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g4_g2

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_x2_t3_g4_g3

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0007ff93) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0007ff93) list_medium_line_x2_t3_g4_g

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g4_t1

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_x2_t3_g4_t2

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a3b,	// (0x000727c8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0007ff87) list_medium_line_x2_t3_g4_t

0x1a10,	// (0x0007279d) list_medium_line_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_g2_g1

0x518f,	// (0x00075f1c) list_medium_line_g2_g2_ParamLimits

0x518f,	// (0x00075f1c) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x00080743) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x00080743) list_medium_line_g2_g

0x1a28,	// (0x000727b5) list_medium_line_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_g2_t1

0x1a10,	// (0x0007279d) list_medium_line_t3_g2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t3_g2_g1

0x518f,	// (0x00075f1c) list_medium_line_t3_g2_g2_ParamLimits

0x518f,	// (0x00075f1c) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x00080743) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x00080743) list_medium_line_t3_g2_g

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t1

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t2

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x00080a7d) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x00080a7d) list_medium_line_t3_g2_t

0x43f9,	// (0x00075186) list_medium_line_right_icon_g1

0x1d98,	// (0x00072b25) list_medium_line_right_icon_t1

0x1a10,	// (0x0007279d) list_medium_line_t2_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t2_g1

0x1a28,	// (0x000727b5) list_medium_line_t2_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_t1

0x1a28,	// (0x000727b5) list_medium_line_t2_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x00080748) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x00080748) list_medium_line_t2_t

0x1a10,	// (0x0007279d) list_medium_line_t3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t3_g1

0x1a28,	// (0x000727b5) list_medium_line_t3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_t1

0x1a28,	// (0x000727b5) list_medium_line_t3_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_t2

0x1a28,	// (0x000727b5) list_medium_line_t3_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x00080a7d) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x00080a7d) list_medium_line_t3_t

0x1a10,	// (0x0007279d) list_medium_line_g3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_g3_g1

0x1a1c,	// (0x000727a9) list_medium_line_g3_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_g3_g2

0x1a1c,	// (0x000727a9) list_medium_line_g3_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x00080a84) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x00080a84) list_medium_line_g3_g

0x1a28,	// (0x000727b5) list_medium_line_g3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_g3_t1

0x1a10,	// (0x0007279d) list_medium_line_t2_g3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t2_g3_g1

0x1a1c,	// (0x000727a9) list_medium_line_t2_g3_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_t2_g3_g2

0x1a1c,	// (0x000727a9) list_medium_line_t2_g3_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x00080a84) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x00080a84) list_medium_line_t2_g3_g

0x1a28,	// (0x000727b5) list_medium_line_t2_g3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_g3_t1

0x1a28,	// (0x000727b5) list_medium_line_t2_g3_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x00080748) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x00080748) list_medium_line_t2_g3_t

0x1a10,	// (0x0007279d) list_medium_line_t3_g3_g1_ParamLimits

0x1a10,	// (0x0007279d) list_medium_line_t3_g3_g1

0x1a1c,	// (0x000727a9) list_medium_line_t3_g3_g2_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_t3_g3_g2

0x1a1c,	// (0x000727a9) list_medium_line_t3_g3_g3_ParamLimits

0x1a1c,	// (0x000727a9) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x00080a84) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x00080a84) list_medium_line_t3_g3_g

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t1_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t1

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t2_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t2

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t3_ParamLimits

0x1a28,	// (0x000727b5) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x00080a7d) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x00080a7d) list_medium_line_t3_g3_t

0x5242,	// (0x00075fcf) list_medium_line_right_iconx2_g1

0x5242,	// (0x00075fcf) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00080a8b) list_medium_line_right_iconx2_g

0x1da7,	// (0x00072b34) list_medium_line_right_iconx2_t1

0x5242,	// (0x00075fcf) list_medium_line_t2_right_iconx2_g1

0x5242,	// (0x00075fcf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00080a8b) list_medium_line_t2_right_iconx2_g

0x1d98,	// (0x00072b25) list_medium_line_t2_right_iconx2_t1

0x1d98,	// (0x00072b25) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x00080a1e) list_medium_line_t2_right_iconx2_t

0x1d98,	// (0x00072b25) list_medium_line_x4_t4_t1

0x1d98,	// (0x00072b25) list_medium_line_x4_t4_t2

0x1d98,	// (0x00072b25) list_medium_line_x4_t4_t3

0x1d98,	// (0x00072b25) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00080055) list_medium_line_x4_t4_t

0xc5fb,	// (0x0007d388) tport_appsw_pane_ParamLimits

0xc5fb,	// (0x0007d388) tport_appsw_pane

0xc607,	// (0x0007d394) tport_contact_pane_ParamLimits

0xc607,	// (0x0007d394) tport_contact_pane

0xc615,	// (0x0007d3a2) tport_listscroll_pane_ParamLimits

0xc615,	// (0x0007d3a2) tport_listscroll_pane

0xc623,	// (0x0007d3b0) cell_tport_appsw_pane_ParamLimits

0xc623,	// (0x0007d3b0) cell_tport_appsw_pane

0x16a3,	// (0x00072430) tport_appsw_pane_g1_ParamLimits

0x16a3,	// (0x00072430) tport_appsw_pane_g1

0x4402,	// (0x0007518f) tport_contact_pane_g1

0x440b,	// (0x00075198) tport_contact_pane_t1

0x4419,	// (0x000751a6) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x00080a90) tport_contact_pane_t

0x4427,	// (0x000751b4) list_tport_pane

0x1880,	// (0x0007260d) scroll_pane_cp_030

0x4438,	// (0x000751c5) cell_tport_appsw_pane_g1

0x4448,	// (0x000751d5) cell_tport_appsw_pane_t1

0x4456,	// (0x000751e3) grid_highlight_pane_cp019

0xc64a,	// (0x0007d3d7) list_tport_double_graphic_pane_ParamLimits

0xc64a,	// (0x0007d3d7) list_tport_double_graphic_pane

0xe171,	// (0x0007eefe) list_highlight_pane_cp023_ParamLimits

0xe171,	// (0x0007eefe) list_highlight_pane_cp023

0xc657,	// (0x0007d3e4) list_tport_double_graphic_pane_g1_ParamLimits

0xc657,	// (0x0007d3e4) list_tport_double_graphic_pane_g1

0xc664,	// (0x0007d3f1) list_tport_double_graphic_pane_t1_ParamLimits

0xc664,	// (0x0007d3f1) list_tport_double_graphic_pane_t1

0xc679,	// (0x0007d406) list_tport_double_graphic_pane_t2_ParamLimits

0xc679,	// (0x0007d406) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x00080a9c) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x00080a9c) list_tport_double_graphic_pane_t

0x0f54,	// (0x00071ce1) main_cale_note_pane

0xa6f0,	// (0x0007b47d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa6f0,	// (0x0007b47d) cell_vitu2_function_top_wide_pane_cp01

0xbefe,	// (0x0007cc8b) wait_bar_pane_cp05_ParamLimits

0xe171,	// (0x0007eefe) listscroll_cmail_pane

0x445e,	// (0x000751eb) list_cmail_pane

0xc68b,	// (0x0007d418) list_cmail_body_pane

0xc68b,	// (0x0007d418) list_single_cmail_header_caption_pane

0xc6a4,	// (0x0007d431) list_single_cmail_header_detail_pane_ParamLimits

0xc6a4,	// (0x0007d431) list_single_cmail_header_detail_pane

0x447a,	// (0x00075207) list_single_cmail_header_caption_pane_t1

0xc6cf,	// (0x0007d45c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc6cf,	// (0x0007d45c) list_single_cmail_header_detail_pane_g1

0x5257,	// (0x00075fe4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5257,	// (0x00075fe4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x00080aa1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x00080aa1) list_single_cmail_header_detail_pane_g

0xc6e5,	// (0x0007d472) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc6e5,	// (0x0007d472) list_single_cmail_header_detail_pane_t1

0x44b9,	// (0x00075246) list_single_cmail_header_editor_pane_bg_ParamLimits

0x44b9,	// (0x00075246) list_single_cmail_header_editor_pane_bg

0x44d0,	// (0x0007525d) list_cmail_body_pane_g1

0x44d9,	// (0x00075266) list_cmail_body_pane_t1

0x3183,	// (0x00073f10) list_single_cmail_header_editor_pane_bg_g1

0x1c52,	// (0x000729df) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3193,	// (0x00073f20) list_single_cmail_header_editor_pane_bg_g1_copy2

0x318b,	// (0x00073f18) list_single_cmail_header_editor_pane_bg_g1_copy3

0x33d2,	// (0x0007415f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x31b3,	// (0x00073f40) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x31a3,	// (0x00073f30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x31ab,	// (0x00073f38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1c32,	// (0x000729bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc721,	// (0x0007d4ae) calenote_gesture_pane_ParamLimits

0xc721,	// (0x0007d4ae) calenote_gesture_pane

0xc739,	// (0x0007d4c6) calenote_window_pane_ParamLimits

0xc739,	// (0x0007d4c6) calenote_window_pane

0x44e7,	// (0x00075274) popup_note_window_cp01

0xc751,	// (0x0007d4de) calenote_swipe_1_pane_ParamLimits

0xc751,	// (0x0007d4de) calenote_swipe_1_pane

0xc2a6,	// (0x0007d033) calenote_swipe_2_pane_ParamLimits

0xc2a6,	// (0x0007d033) calenote_swipe_2_pane

0x41dd,	// (0x00074f6a) calenote_swipe_1_pane_g1_ParamLimits

0x41dd,	// (0x00074f6a) calenote_swipe_1_pane_g1

0x41ea,	// (0x00074f77) calenote_swipe_1_pane_g2_ParamLimits

0x41ea,	// (0x00074f77) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x00080a06) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x00080a06) calenote_swipe_1_pane_g

0x44f9,	// (0x00075286) calenote_swipe_1_pane_t1_ParamLimits

0x44f9,	// (0x00075286) calenote_swipe_1_pane_t1

0x41dd,	// (0x00074f6a) calenote_swipe_2_pane_g1_ParamLimits

0x41dd,	// (0x00074f6a) calenote_swipe_2_pane_g1

0x4518,	// (0x000752a5) calenote_swipe_2_pane_g2_ParamLimits

0x4518,	// (0x000752a5) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x00080aad) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x00080aad) calenote_swipe_2_pane_g

0x4524,	// (0x000752b1) calenote_swipe_2_pane_t1_ParamLimits

0x4524,	// (0x000752b1) calenote_swipe_2_pane_t1

0x0f54,	// (0x00071ce1) main_mup_navstr_pane

0x97d8,	// (0x0007a565) main_mup3_pane_t7_ParamLimits

0x97d8,	// (0x0007a565) main_mup3_pane_t7

0x9f93,	// (0x0007ad20) main_mp4_pane_g6_ParamLimits

0x9f93,	// (0x0007ad20) main_mp4_pane_g6

0xa25a,	// (0x0007afe7) main_image3_pane_t4_ParamLimits

0xa25a,	// (0x0007afe7) main_image3_pane_t4

0xc764,	// (0x0007d4f1) popup_navstr_preview_pane_ParamLimits

0xc764,	// (0x0007d4f1) popup_navstr_preview_pane

0xc770,	// (0x0007d4fd) scroll_navstr_pane_ParamLimits

0xc770,	// (0x0007d4fd) scroll_navstr_pane

0x0f54,	// (0x00071ce1) bg_popup_preview_window_pane_cp04

0x454b,	// (0x000752d8) popup_navstr_preview_pane_t1

0xc77c,	// (0x0007d509) scroll_navstr_pane_g1_ParamLimits

0xc77c,	// (0x0007d509) scroll_navstr_pane_g1

0xc789,	// (0x0007d516) scroll_navstr_pane_t1_ParamLimits

0xc789,	// (0x0007d516) scroll_navstr_pane_t1

0x44f0,	// (0x0007527d) bg_button_pane_cp014

0x44f0,	// (0x0007527d) bg_button_pane_cp030

0xc18c,	// (0x0007cf19) list_double_fisheye_pane_g4_ParamLimits

0xc18c,	// (0x0007cf19) list_double_fisheye_pane_g4

0xc198,	// (0x0007cf25) list_double_fisheye_pane_g5_ParamLimits

0xc198,	// (0x0007cf25) list_double_fisheye_pane_g5

0x446e,	// (0x000751fb) sp_fs_scroll_pane_cp03

0x42a3,	// (0x00075030) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x42af,	// (0x0007503c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x00080a23) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc387,	// (0x0007d114) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4466,	// (0x000751f3) sp_fs_scroll_pane_cp02

0x18da,	// (0x00072667) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x18da,	// (0x00072667) popup_sp_fs_calendar_preview_list_single_pane

0x0f54,	// (0x00071ce1) main_cam6_pano_pane

0x8d46,	// (0x00079ad3) main_mup3_pane_ParamLimits

0x0f54,	// (0x00071ce1) main_phacti_pane

0xbdf1,	// (0x0007cb7e) bg_button_pane_cp11

0xbe09,	// (0x0007cb96) main_mobtv_info_pane_g2_ParamLimits

0xbe09,	// (0x0007cb96) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00080983) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00080983) main_mobtv_info_pane_g

0xbf95,	// (0x0007cd22) sc_clock_pane_t5_ParamLimits

0xbf95,	// (0x0007cd22) sc_clock_pane_t5

0xc022,	// (0x0007cdaf) main_radioblah_pane_g1_ParamLimits

0x4120,	// (0x00074ead) main_radioblah_pane_t3_ParamLimits

0x4120,	// (0x00074ead) main_radioblah_pane_t3

0x4138,	// (0x00074ec5) main_radioblah_pane_t4_ParamLimits

0x4138,	// (0x00074ec5) main_radioblah_pane_t4

0xc040,	// (0x0007cdcd) main_radioblah_text_pane_ParamLimits

0xc040,	// (0x0007cdcd) main_radioblah_text_pane

0xc04d,	// (0x0007cdda) main_radioblah_info_pane_g1_ParamLimits

0xc0da,	// (0x0007ce67) main_radioblah_info_pane_t4_ParamLimits

0xc0da,	// (0x0007ce67) main_radioblah_info_pane_t4

0xe171,	// (0x0007eefe) main_sp_fs_calendar_pane

0xc79b,	// (0x0007d528) main_phacti_pane_g1

0xc7a3,	// (0x0007d530) phacti_note_pane_ParamLimits

0xc7a3,	// (0x0007d530) phacti_note_pane

0x4562,	// (0x000752ef) phacti_term_pane_ParamLimits

0x4562,	// (0x000752ef) phacti_term_pane

0x4577,	// (0x00075304) phacti_note_pane_t1_ParamLimits

0x4577,	// (0x00075304) phacti_note_pane_t1

0x458e,	// (0x0007531b) phacti_term_pane_g1

0x4596,	// (0x00075323) phacti_term_pane_t1_ParamLimits

0x4596,	// (0x00075323) phacti_term_pane_t1

0x45c0,	// (0x0007534d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x45c8,	// (0x00075355) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x00080ab7) popup_sp_fs_calendar_preview_list_single_pane_g

0x45d0,	// (0x0007535d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x45d0,	// (0x0007535d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x45e6,	// (0x00075373) aid_popup_sp_fs_bg_corner_pane

0x19f6,	// (0x00072783) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f54,	// (0x00071ce1) popup_sp_fs_calendar_preview_bg_pane

0x45ee,	// (0x0007537b) popup_sp_fs_calendar_preview_list_pane

0xee2a,	// (0x0007fbb7) bg_main_sp_fs_cale_pane_ParamLimits

0xee2a,	// (0x0007fbb7) bg_main_sp_fs_cale_pane

0x45f6,	// (0x00075383) listscroll_cale_mrui_pane_ParamLimits

0x45f6,	// (0x00075383) listscroll_cale_mrui_pane

0x460b,	// (0x00075398) listscroll_sp_fs_schedule_track_pane

0x4614,	// (0x000753a1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4614,	// (0x000753a1) main_sp_fs_ctrlbar_pane_cp01

0x4627,	// (0x000753b4) main_sp_fs_ribbon_pane

0x462f,	// (0x000753bc) popup_sp_fs_cale_preview_window

0xc7fa,	// (0x0007d587) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc7fa,	// (0x0007d587) list_single_sp_fs_schedule_track_pane

0x1dca,	// (0x00072b57) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1dca,	// (0x00072b57) bg_sp_fs_highlight_list_pane_cp03

0xc810,	// (0x0007d59d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc810,	// (0x0007d59d) list_single_sp_fs_schedule_track_pane_g1

0xc81c,	// (0x0007d5a9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc81c,	// (0x0007d5a9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x00080abc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x00080abc) list_single_sp_fs_schedule_track_pane_g

0xc828,	// (0x0007d5b5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc828,	// (0x0007d5b5) list_single_sp_fs_schedule_track_pane_t1

0xc840,	// (0x0007d5cd) sp_fs_schedule_track_pane_ParamLimits

0xc840,	// (0x0007d5cd) sp_fs_schedule_track_pane

0x4641,	// (0x000753ce) sp_fs_schedule_track_pane_g1

0x4649,	// (0x000753d6) sp_fs_schedule_track_pane_g2

0x4651,	// (0x000753de) sp_fs_schedule_track_pane_g3

0x4659,	// (0x000753e6) sp_fs_schedule_track_pane_g4

0x4661,	// (0x000753ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x00080ac1) sp_fs_schedule_track_pane_g

0x3183,	// (0x00073f10) bg_sp_fs_schedule_viewer_highlight_g1

0x1c52,	// (0x000729df) bg_sp_fs_schedule_viewer_highlight_g2

0x318b,	// (0x00073f18) bg_sp_fs_schedule_viewer_highlight_g3

0x3193,	// (0x00073f20) bg_sp_fs_schedule_viewer_highlight_g4

0x33d2,	// (0x0007415f) bg_sp_fs_schedule_viewer_highlight_g5

0x31a3,	// (0x00073f30) bg_sp_fs_schedule_viewer_highlight_g6

0x31ab,	// (0x00073f38) bg_sp_fs_schedule_viewer_highlight_g7

0x31b3,	// (0x00073f40) bg_sp_fs_schedule_viewer_highlight_g8

0x1c32,	// (0x000729bf) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x00080acc) bg_sp_fs_schedule_viewer_highlight_g

0x0f54,	// (0x00071ce1) bg_main_sp_fs_ribbon_pane

0xa457,	// (0x0007b1e4) main_sp_fs_ribbon_pane_g1

0x4669,	// (0x000753f6) main_sp_fs_ribbon_pane_t1

0xc850,	// (0x0007d5dd) main_sp_fs_ribbon_pane_t2

0x4678,	// (0x00075405) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x00080adf) main_sp_fs_ribbon_pane_t

0x4687,	// (0x00075414) main_sp_fs_ribbon_scheduler_pane

0x468f,	// (0x0007541c) bg_main_sp_fs_ribbon_pane_g1

0x4698,	// (0x00075425) bg_main_sp_fs_ribbon_pane_g2

0x46a1,	// (0x0007542e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x00080ae6) bg_main_sp_fs_ribbon_pane_g

0x46a9,	// (0x00075436) main_sp_fs_ribbon_scheduler_pane_g1

0x46b2,	// (0x0007543f) main_sp_fs_ribbon_scheduler_pane_g2

0x46bb,	// (0x00075448) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x00080aed) main_sp_fs_ribbon_scheduler_pane_g

0x46c4,	// (0x00075451) list_cale_mrui_pane

0xc85f,	// (0x0007d5ec) sp_fs_scroll_pane_cp07_ParamLimits

0xc85f,	// (0x0007d5ec) sp_fs_scroll_pane_cp07

0xc877,	// (0x0007d604) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc877,	// (0x0007d604) bg_sp_fs_schedule_viewer_highlight

0x46d1,	// (0x0007545e) list_single_sp_fs_schedule_track_pane_cp01

0x46d9,	// (0x00075466) list_sp_fs_schedule_track_pane

0x46e1,	// (0x0007546e) sp_fs_scroll_pane_cp06_ParamLimits

0x46e1,	// (0x0007546e) sp_fs_scroll_pane_cp06

0x19f6,	// (0x00072783) bgmain_sp_fs_calendar_pane_g1

0xc884,	// (0x0007d611) list_single_cale_mrui_pane_ParamLimits

0xc884,	// (0x0007d611) list_single_cale_mrui_pane

0x46f3,	// (0x00075480) list_single_cale_mrui_row_pane_ParamLimits

0x46f3,	// (0x00075480) list_single_cale_mrui_row_pane

0xc8a6,	// (0x0007d633) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc8a6,	// (0x0007d633) list_single_cale_mrui_row_pane_g1

0xc8de,	// (0x0007d66b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc8de,	// (0x0007d66b) list_single_cale_mrui_row_pane_t1

0xc8f0,	// (0x0007d67d) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc8f0,	// (0x0007d67d) list_single_cale_mrui_row_pane_t2

0xc956,	// (0x0007d6e3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc956,	// (0x0007d6e3) list_single_cale_mrui_row_pane_t3

0xc985,	// (0x0007d712) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc985,	// (0x0007d712) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x00080afb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x00080afb) list_single_cale_mrui_row_pane_t

0xc9b4,	// (0x0007d741) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc9b4,	// (0x0007d741) list_single_cmail_header_editor_pane_bg_cp01

0xc9d8,	// (0x0007d765) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc9d8,	// (0x0007d765) list_single_cmail_header_editor_pane_bg_cp02

0xc9f6,	// (0x0007d783) main_radioblah_text_pane_t1_ParamLimits

0xc9f6,	// (0x0007d783) main_radioblah_text_pane_t1

0x4716,	// (0x000754a3) cam6_indi_pane_cp01

0x471e,	// (0x000754ab) cam6_mode_pane_cp01

0x4726,	// (0x000754b3) cam6_pano_pane

0x472f,	// (0x000754bc) cam6_zoom_pane_cp01

0x4737,	// (0x000754c4) cam6_pano_image_pane

0x4740,	// (0x000754cd) cam6_pano_pane_g1

0x3e87,	// (0x00074c14) cam6_pano_pane_g2

0x4749,	// (0x000754d6) cam6_pano_pane_g3

0x4752,	// (0x000754df) cam6_pano_pane_g4

0x2dc4,	// (0x00073b51) cam6_pano_pane_g5

0x475b,	// (0x000754e8) cam6_pano_pane_g6

0x4763,	// (0x000754f0) cam6_pano_pane_g7

0x476b,	// (0x000754f8) cam6_pano_pane_g8

0x4774,	// (0x00075501) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x00080b04) cam6_pano_pane_g

0x0f54,	// (0x00071ce1) main_browser_tag_pane

0x4543,	// (0x000752d0) grid_navstr_albumart_pane

0x477d,	// (0x0007550a) cell_navstr_albumart_pane_ParamLimits

0x477d,	// (0x0007550a) cell_navstr_albumart_pane

0xe20c,	// (0x0007ef99) cell_navstr_albumart_pane_g1

0x229a,	// (0x00073027) cell_navstr_albumart_pane_g2

0x22aa,	// (0x00073037) cell_navstr_albumart_pane_g3

0x22a2,	// (0x0007302f) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x00080b17) cell_navstr_albumart_pane_g

0xca0f,	// (0x0007d79c) bt_list_pane_ParamLimits

0xca0f,	// (0x0007d79c) bt_list_pane

0xca24,	// (0x0007d7b1) bt_list_pane_t1

0xca33,	// (0x0007d7c0) bt_list_pane_t2

0x0001,

0xfd93,	// (0x00080b20) bt_list_pane_t

0x0f54,	// (0x00071ce1) main_cale_prevew_pane

0xca42,	// (0x0007d7cf) popup_cale_preview_window_ParamLimits

0xca42,	// (0x0007d7cf) popup_cale_preview_window

0xe171,	// (0x0007eefe) bg_popup_preview_window_pane_cp05_ParamLimits

0xe171,	// (0x0007eefe) bg_popup_preview_window_pane_cp05

0x4794,	// (0x00075521) list_cale_preview_pane_ParamLimits

0x4794,	// (0x00075521) list_cale_preview_pane

0xca57,	// (0x0007d7e4) list_double_cale_preview_pane_ParamLimits

0xca57,	// (0x0007d7e4) list_double_cale_preview_pane

0xca68,	// (0x0007d7f5) list_single_cale_preview_pane_ParamLimits

0xca68,	// (0x0007d7f5) list_single_cale_preview_pane

0xca7c,	// (0x0007d809) list_single_cale_preview_pane_g1

0xca84,	// (0x0007d811) list_single_cale_preview_pane_t1_ParamLimits

0xca84,	// (0x0007d811) list_single_cale_preview_pane_t1

0x47a0,	// (0x0007552d) list_double_cale_preview_pane_g1

0x47a8,	// (0x00075535) list_double_cale_preview_pane_t1_ParamLimits

0x47a8,	// (0x00075535) list_double_cale_preview_pane_t1

0xca99,	// (0x0007d826) list_double_cale_preview_pane_t2_ParamLimits

0xca99,	// (0x0007d826) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x00080b25) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x00080b25) list_double_cale_preview_pane_t

0x0f54,	// (0x00071ce1) main_ezdial_pane

0xe171,	// (0x0007eefe) main_sp_fs_email_pane_ParamLimits

0xc2f0,	// (0x0007d07d) cmail_ddmenu_btn01_pane_ParamLimits

0xc2f0,	// (0x0007d07d) cmail_ddmenu_btn01_pane

0xc30d,	// (0x0007d09a) cmail_ddmenu_btn02_pane_ParamLimits

0xc30d,	// (0x0007d09a) cmail_ddmenu_btn02_pane

0xc32b,	// (0x0007d0b8) cmail_ddmenu_btn03_pane_ParamLimits

0xc32b,	// (0x0007d0b8) cmail_ddmenu_btn03_pane

0xc3cf,	// (0x0007d15c) main_sp_fs_ctrlbar_pane_ParamLimits

0xc3e3,	// (0x0007d170) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc68b,	// (0x0007d418) list_cmail_body_pane_ParamLimits

0xe214,	// (0x0007efa1) bg_button_pane_cp12

0x4488,	// (0x00075215) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4488,	// (0x00075215) list_single_cmail_header_detail_pane_g3

0x4495,	// (0x00075222) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4495,	// (0x00075222) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x00080aa8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x00080aa8) list_single_cmail_header_detail_pane_t

0x45ab,	// (0x00075338) phacti_term_pane_t2_ParamLimits

0x45ab,	// (0x00075338) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x00080ab2) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x00080ab2) phacti_term_pane_t

0x47bd,	// (0x0007554a) aid_size_list_single_double

0xcab1,	// (0x0007d83e) popup_ezdial_listscroll_window

0xcaca,	// (0x0007d857) popup_number_entry_window_cp01

0x1992,	// (0x0007271f) bg_popup_call_pane_cp09

0x47c9,	// (0x00075556) ezdial_list_pane

0x47d1,	// (0x0007555e) scroll_pane_cp23

0x257e,	// (0x0007330b) bg_button_pane_cp028_ParamLimits

0x257e,	// (0x0007330b) bg_button_pane_cp028

0xcad6,	// (0x0007d863) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcad6,	// (0x0007d863) cmail_ddmenu_btn01_pane_g1

0xcae6,	// (0x0007d873) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcae6,	// (0x0007d873) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x00080b2a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x00080b2a) cmail_ddmenu_btn01_pane_g

0x47d9,	// (0x00075566) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x47d9,	// (0x00075566) cmail_ddmenu_btn01_pane_t1

0xee2a,	// (0x0007fbb7) bg_button_pane_cp029_ParamLimits

0xee2a,	// (0x0007fbb7) bg_button_pane_cp029

0xcae6,	// (0x0007d873) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcae6,	// (0x0007d873) cmail_ddmenu_btn02_pane_g1

0xcafe,	// (0x0007d88b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcafe,	// (0x0007d88b) cmail_ddmenu_btn02_pane_t1

0x1dca,	// (0x00072b57) bg_button_pane_cp031_ParamLimits

0x1dca,	// (0x00072b57) bg_button_pane_cp031

0xcae6,	// (0x0007d873) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcae6,	// (0x0007d873) cmail_ddmenu_btn03_pane_g1

0xcafe,	// (0x0007d88b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcafe,	// (0x0007d88b) cmail_ddmenu_btn03_pane_t1

0xe15d,	// (0x0007eeea) cell_dialer2_keypad_pane_t1_ParamLimits

0x2df2,	// (0x00073b7f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x2df2,	// (0x00073b7f) cell_dialer2_keypad_pane_t1_copy1

0xbc7e,	// (0x0007ca0b) ncimui_group_button_pane

0xe171,	// (0x0007eefe) main_sp_fs_calendar_pane_ParamLimits

0xc68b,	// (0x0007d418) list_single_cmail_header_caption_pane_ParamLimits

0x5263,	// (0x00075ff0) aid_recal_txt_sm_pane

0x0f54,	// (0x00071ce1) mian_recal_day_pane

0x462f,	// (0x000753bc) popup_sp_fs_cale_preview_window_ParamLimits

0x47ee,	// (0x0007557b) list_recal_day_pane

0x4830,	// (0x000755bd) list_single_recal_day_pane_ParamLimits

0x4830,	// (0x000755bd) list_single_recal_day_pane

0x4842,	// (0x000755cf) list_single_recal_day_pane_g1_ParamLimits

0x4842,	// (0x000755cf) list_single_recal_day_pane_g1

0x484e,	// (0x000755db) list_single_recal_day_pane_g2_ParamLimits

0x484e,	// (0x000755db) list_single_recal_day_pane_g2

0x485a,	// (0x000755e7) list_single_recal_day_pane_g3_ParamLimits

0x485a,	// (0x000755e7) list_single_recal_day_pane_g3

0xcb22,	// (0x0007d8af) list_single_recal_day_pane_g4_ParamLimits

0xcb22,	// (0x0007d8af) list_single_recal_day_pane_g4

0x4866,	// (0x000755f3) list_single_recal_day_pane_g5_ParamLimits

0x4866,	// (0x000755f3) list_single_recal_day_pane_g5

0xcb36,	// (0x0007d8c3) list_single_recal_day_pane_g6_ParamLimits

0xcb36,	// (0x0007d8c3) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x00080b39) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x00080b39) list_single_recal_day_pane_g

0x487a,	// (0x00075607) list_single_recal_day_pane_t1

0xcb45,	// (0x0007d8d2) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x00080b44) list_single_recal_day_pane_t

0xcb5a,	// (0x0007d8e7) ncimui_query_button_pane_ParamLimits

0xcb5a,	// (0x0007d8e7) ncimui_query_button_pane

0xcb6a,	// (0x0007d8f7) ncimui_query_button_pane_t1_ParamLimits

0xcb6a,	// (0x0007d8f7) ncimui_query_button_pane_t1

0x488c,	// (0x00075619) ncimui_query_button_pane_t2_ParamLimits

0x488c,	// (0x00075619) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x00080b49) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x00080b49) ncimui_query_button_pane_t

0xcb7d,	// (0x0007d90a) query_button_pane_ParamLimits

0xcb7d,	// (0x0007d90a) query_button_pane

0x0f54,	// (0x00071ce1) bg_button_pane_cp0028

0x489f,	// (0x0007562c) query_button_pane_t1

0x8d62,	// (0x00079aef) main_tport_pane_ParamLimits

0xc5d7,	// (0x0007d364) bg_popup_window_pane_cp01_ParamLimits

0xc5d7,	// (0x0007d364) bg_popup_window_pane_cp01

0xc5e3,	// (0x0007d370) heading_pane_cp08_ParamLimits

0xc5e3,	// (0x0007d370) heading_pane_cp08

0xc5ef,	// (0x0007d37c) heading_pane_cp07_ParamLimits

0xc5ef,	// (0x0007d37c) heading_pane_cp07

0x4438,	// (0x000751c5) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x00080a95) cell_tport_appsw_pane_g

0x1dd8,	// (0x00072b65) input_candi_list_open_g1

0x8014,	// (0x00078da1) list_cale_time_pane_g6_ParamLimits

0x8014,	// (0x00078da1) list_cale_time_pane_g6

0x92f2,	// (0x0007a07f) aid_size_touch_calib_1_ParamLimits

0x92f2,	// (0x0007a07f) aid_size_touch_calib_1

0x92fe,	// (0x0007a08b) aid_size_touch_calib_2_ParamLimits

0x92fe,	// (0x0007a08b) aid_size_touch_calib_2

0x930a,	// (0x0007a097) aid_size_touch_calib_3_ParamLimits

0x930a,	// (0x0007a097) aid_size_touch_calib_3

0x9318,	// (0x0007a0a5) aid_size_touch_calib_4_ParamLimits

0x9318,	// (0x0007a0a5) aid_size_touch_calib_4

0x9326,	// (0x0007a0b3) main_touch_calib_button_group_pane_ParamLimits

0x9326,	// (0x0007a0b3) main_touch_calib_button_group_pane

0x9334,	// (0x0007a0c1) main_touch_calib_pane_g1_ParamLimits

0x9340,	// (0x0007a0cd) main_touch_calib_pane_g2_ParamLimits

0x934c,	// (0x0007a0d9) main_touch_calib_pane_g3_ParamLimits

0x9358,	// (0x0007a0e5) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x00080490) main_touch_calib_pane_g_ParamLimits

0x9364,	// (0x0007a0f1) main_touch_calib_pane_t1_ParamLimits

0x9379,	// (0x0007a106) main_touch_calib_pane_t2_ParamLimits

0x938e,	// (0x0007a11b) main_touch_calib_pane_t3_ParamLimits

0x93a0,	// (0x0007a12d) main_touch_calib_pane_t4_ParamLimits

0x93b2,	// (0x0007a13f) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x00080499) main_touch_calib_pane_t_ParamLimits

0x2bc7,	// (0x00073954) list_single_fp_cale_pane_g3_ParamLimits

0x2bc7,	// (0x00073954) list_single_fp_cale_pane_g3

0x8d46,	// (0x00079ad3) bg_button_pane_cp012_ParamLimits

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp03_ParamLimits

0xae51,	// (0x0007bbde) cell_vitu2_function_top_pane_g1_ParamLimits

0x8d46,	// (0x00079ad3) bg_vkb2_func_pane_cp04_ParamLimits

0xbc0a,	// (0x0007c997) main_ncimui_button_group_pane_ParamLimits

0xbc0a,	// (0x0007c997) main_ncimui_button_group_pane

0xbc6c,	// (0x0007c9f9) main_ncimui_pane_t3_ParamLimits

0xbc6c,	// (0x0007c9f9) main_ncimui_pane_t3

0x4559,	// (0x000752e6) phacti_button_group_pane

0x47bd,	// (0x0007554a) aid_size_list_single_double_ParamLimits

0xcab1,	// (0x0007d83e) popup_ezdial_listscroll_window_ParamLimits

0xcaca,	// (0x0007d857) popup_number_entry_window_cp01_ParamLimits

0xcb8a,	// (0x0007d917) phacti_button_pane_ParamLimits

0xcb8a,	// (0x0007d917) phacti_button_pane

0x0f54,	// (0x00071ce1) bg_button_pane_cp14

0x48ad,	// (0x0007563a) phacti_button_pane_t1

0xcb99,	// (0x0007d926) main_touch_calib_button_pane_ParamLimits

0xcb99,	// (0x0007d926) main_touch_calib_button_pane

0x172d,	// (0x000724ba) bg_button_pane_cp18_ParamLimits

0x172d,	// (0x000724ba) bg_button_pane_cp18

0xcbaa,	// (0x0007d937) main_touch_calib_button_pane_t1_ParamLimits

0xcbaa,	// (0x0007d937) main_touch_calib_button_pane_t1

0xcbc0,	// (0x0007d94d) main_touch_calib_button_pane_t2_ParamLimits

0xcbc0,	// (0x0007d94d) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x00080b4e) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x00080b4e) main_touch_calib_button_pane_t

0x0f54,	// (0x00071ce1) cell_ncimui_button_pane

0x0f54,	// (0x00071ce1) bg_button_pane_cp032

0x48bb,	// (0x00075648) cell_ncimui_button_pane_t1

0xa175,	// (0x0007af02) image3_infobar_pane_ParamLimits

0xa175,	// (0x0007af02) image3_infobar_pane

0xbfb5,	// (0x0007cd42) fs_bigclock_status_pane_ParamLimits

0xbfb5,	// (0x0007cd42) fs_bigclock_status_pane

0xbfc2,	// (0x0007cd4f) main_fs_bigclock_clock_pane_ParamLimits

0xbfc2,	// (0x0007cd4f) main_fs_bigclock_clock_pane

0xbfda,	// (0x0007cd67) main_fs_bigclock_indi_pane_ParamLimits

0xbfda,	// (0x0007cd67) main_fs_bigclock_indi_pane

0xbffa,	// (0x0007cd87) main_fs_bigclock_swipe_pane_ParamLimits

0xbffa,	// (0x0007cd87) main_fs_bigclock_swipe_pane

0x0f54,	// (0x00071ce1) main_fs_clock_dumped_data

0x3f94,	// (0x00074d21) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3f94,	// (0x00074d21) list_single_fs_bigclock_indicator_pane_g1

0x3fae,	// (0x00074d3b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3fae,	// (0x00074d3b) list_single_fs_bigclock_indicator_pane_g2

0x3fc8,	// (0x00074d55) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3fc8,	// (0x00074d55) list_single_fs_bigclock_indicator_pane_g3

0x3fe2,	// (0x00074d6f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3fe2,	// (0x00074d6f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x000809b7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x000809b7) list_single_fs_bigclock_indicator_pane_g

0x400b,	// (0x00074d98) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x400b,	// (0x00074d98) list_single_fs_bigclock_indicator_pane_t1

0x4033,	// (0x00074dc0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4033,	// (0x00074dc0) list_single_fs_bigclock_indicator_pane_t2

0x405b,	// (0x00074de8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x405b,	// (0x00074de8) list_single_fs_bigclock_indicator_pane_t3

0x4083,	// (0x00074e10) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4083,	// (0x00074e10) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x000809c2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x000809c2) list_single_fs_bigclock_indicator_pane_t

0x48c9,	// (0x00075656) image3_infobar_fav_pane_ParamLimits

0x48c9,	// (0x00075656) image3_infobar_fav_pane

0x48d9,	// (0x00075666) image3_infobar_loc_pane_ParamLimits

0x48d9,	// (0x00075666) image3_infobar_loc_pane

0x48ed,	// (0x0007567a) image3_infobar_time_pane_ParamLimits

0x48ed,	// (0x0007567a) image3_infobar_time_pane

0x19f6,	// (0x00072783) image3_infobar_time_pane_g1

0x48fd,	// (0x0007568a) image3_infobar_time_pane_t1

0x19f6,	// (0x00072783) image3_infobar_loc_pane_g1

0x490b,	// (0x00075698) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x00080b53) image3_infobar_loc_pane_g

0x4913,	// (0x000756a0) image3_infobar_loc_pane_t1

0x19f6,	// (0x00072783) image3_infobar_fav_pane_g1

0x4921,	// (0x000756ae) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x00080b58) image3_infobar_fav_pane_g

0x4929,	// (0x000756b6) fs_bigclock_status_battery_pane

0x4932,	// (0x000756bf) fs_bigclock_status_signal_pane

0x493b,	// (0x000756c8) fs_bigclock_status_title_pane

0x4944,	// (0x000756d1) fs_bigclock_status_signal_pane_g1

0x494d,	// (0x000756da) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x00080b5d) fs_bigclock_status_signal_pane_g

0x4955,	// (0x000756e2) fs_bigclock_status_battery_pane_g1

0x495e,	// (0x000756eb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x00080b62) fs_bigclock_status_battery_pane_g

0x4966,	// (0x000756f3) fs_bigclock_status_title_pane_t1

0x16a3,	// (0x00072430) main_fs_bigclock_clock_pane_g1

0xcbde,	// (0x0007d96b) main_fs_bigclock_clock_pane_g2

0xcbeb,	// (0x0007d978) main_fs_bigclock_clock_pane_g3

0xcbeb,	// (0x0007d978) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x00080b67) main_fs_bigclock_clock_pane_g

0xcbf7,	// (0x0007d984) main_fs_bigclock_clock_pane_t1

0xcc09,	// (0x0007d996) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x00080b70) main_fs_bigclock_clock_pane_t

0x4974,	// (0x00075701) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4974,	// (0x00075701) list_single_fs_bigclock_indicator_pane

0x4985,	// (0x00075712) list_single_fs_bigclock_pane_ParamLimits

0x4985,	// (0x00075712) list_single_fs_bigclock_pane

0x49ab,	// (0x00075738) main_fs_bigclock_indicator_pane_t1

0x49ba,	// (0x00075747) list_single_fs_bigclock_pane_g1

0x49c2,	// (0x0007574f) list_single_fs_bigclock_pane_t1

0x19f6,	// (0x00072783) main_fs_bigclock_swipe_pane_g1

0x4a02,	// (0x0007578f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x00080b81) main_fs_bigclock_swipe_pane_g

0x4a0a,	// (0x00075797) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4a0a,	// (0x00075797) main_fs_bigclock_swipe_pane_t1

0x80a9,	// (0x00078e36) call_type_pane_ParamLimits

0x0f54,	// (0x00071ce1) main_btmg_pane

0xc8d2,	// (0x0007d65f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc8d2,	// (0x0007d65f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x00080af4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x00080af4) list_single_cale_mrui_row_pane_g

0x4817,	// (0x000755a4) list_recal_vselct_arw_lo_pane

0x481f,	// (0x000755ac) list_recal_vselct_arw_up_pane

0x4827,	// (0x000755b4) list_recal_vselct_pane

0x4a27,	// (0x000757b4) btmg_button_pane

0xcc5e,	// (0x0007d9eb) main_btmg_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp044

0x4a2f,	// (0x000757bc) btmg_button_pane_t1

0x24cd,	// (0x0007325a) aid_listscroll_gen

0xe171,	// (0x0007eefe) main_cntbar_detail_pane

0x445e,	// (0x000751eb) list_cmail_folder_pane

0x446e,	// (0x000751fb) sp_fs_scroll_pane_cp03_ParamLimits

0xcc66,	// (0x0007d9f3) list_single_fs_dyc_pane_cp01_ParamLimits

0xcc66,	// (0x0007d9f3) list_single_fs_dyc_pane_cp01

0x4a3d,	// (0x000757ca) aid_size_cmail_indent

0x4a46,	// (0x000757d3) list_single_dyc_row_pane_cp01

0xcc98,	// (0x0007da25) cntbar_detail_list_pane_ParamLimits

0xcc98,	// (0x0007da25) cntbar_detail_list_pane

0xccce,	// (0x0007da5b) main_cntbar_detail_cont_pane_ParamLimits

0xccce,	// (0x0007da5b) main_cntbar_detail_cont_pane

0xccda,	// (0x0007da67) scroll_pane_cp032_ParamLimits

0xccda,	// (0x0007da67) scroll_pane_cp032

0xcce6,	// (0x0007da73) cntbar_detail_list_event_pane_ParamLimits

0xcce6,	// (0x0007da73) cntbar_detail_list_event_pane

0xcca4,	// (0x0007da31) cntbar_detail_list_shct_pane

0xccf6,	// (0x0007da83) aid_list_gen

0x1880,	// (0x0007260d) aid_scroll

0x36e0,	// (0x0007446d) aid_size_touch_scroll_bar

0xb4fc,	// (0x0007c289) aid_list_double

0xccff,	// (0x0007da8c) aid_list_single

0x36fa,	// (0x00074487) aid_list_single_lg

0xcd08,	// (0x0007da95) aid_list_z_g_a_sm

0xcd10,	// (0x0007da9d) aid_list_z_g_d

0xcd18,	// (0x0007daa5) aid_txt_z_prm

0xcd26,	// (0x0007dab3) aid_txt_z_prm_cp01

0xcd34,	// (0x0007dac1) aid_txt_z_sec

0xcd42,	// (0x0007dacf) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcd42,	// (0x0007dacf) main_cntbar_detail_cont_pane_g1

0xcd4f,	// (0x0007dadc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcd4f,	// (0x0007dadc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x00080b86) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x00080b86) main_cntbar_detail_cont_pane_g

0xcd5b,	// (0x0007dae8) main_cntbar_detail_cont_pane_t1

0xcd69,	// (0x0007daf6) main_cntbar_detail_cont_pane_t2

0xcd77,	// (0x0007db04) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x00080b8b) main_cntbar_detail_cont_pane_t

0xcd85,	// (0x0007db12) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcd85,	// (0x0007db12) cell_cntbar_detail_list_shct_pane

0xcd97,	// (0x0007db24) cntbar_detail_list_shct_pane_g1

0xcda0,	// (0x0007db2d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x00080b92) cntbar_detail_list_shct_pane_g

0xcda9,	// (0x0007db36) cntbar_detail_list_event_pane_g1_ParamLimits

0xcda9,	// (0x0007db36) cntbar_detail_list_event_pane_g1

0xcdb5,	// (0x0007db42) cntbar_detail_list_event_pane_g2_ParamLimits

0xcdb5,	// (0x0007db42) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x00080b97) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x00080b97) cntbar_detail_list_event_pane_g

0xce21,	// (0x0007dbae) cntbar_detail_list_event_pane_t1_ParamLimits

0xce21,	// (0x0007dbae) cntbar_detail_list_event_pane_t1

0xce36,	// (0x0007dbc3) cntbar_detail_list_event_pane_t2_ParamLimits

0xce36,	// (0x0007dbc3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x00080ba4) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x00080ba4) cntbar_detail_list_event_pane_t

0x19f6,	// (0x00072783) cell_cntbar_detail_list_shct_pane_g1

0xe066,	// (0x0007edf3) navi_pane_mv_g3

0xe171,	// (0x0007eefe) main_cntbar_detail_pane_ParamLimits

0x0f54,	// (0x00071ce1) main_notif_wgt_pane

0x9ede,	// (0x0007ac6b) aid_tch_main_mp4_pane_g4

0xa11d,	// (0x0007aeaa) popup_slider_window_cp02

0x480d,	// (0x0007559a) list_recal_day_event_pane

0xcc7e,	// (0x0007da0b) cntbar_detail_btn_pane_ParamLimits

0xcc7e,	// (0x0007da0b) cntbar_detail_btn_pane

0xcc8a,	// (0x0007da17) cntbar_detail_btn_pane_cp01_ParamLimits

0xcc8a,	// (0x0007da17) cntbar_detail_btn_pane_cp01

0xcca4,	// (0x0007da31) cntbar_detail_list_shct_pane_ParamLimits

0xccb0,	// (0x0007da3d) cntbar_detail_pane_g1_ParamLimits

0xccb0,	// (0x0007da3d) cntbar_detail_pane_g1

0xccbc,	// (0x0007da49) cntbar_detail_pane_t1_ParamLimits

0xccbc,	// (0x0007da49) cntbar_detail_pane_t1

0xcdc1,	// (0x0007db4e) cntbar_detail_list_event_pane_g3_ParamLimits

0xcdc1,	// (0x0007db4e) cntbar_detail_list_event_pane_g3

0xcdd9,	// (0x0007db66) cntbar_detail_list_event_pane_g4_ParamLimits

0xcdd9,	// (0x0007db66) cntbar_detail_list_event_pane_g4

0xcdf1,	// (0x0007db7e) cntbar_detail_list_event_pane_g5_ParamLimits

0xcdf1,	// (0x0007db7e) cntbar_detail_list_event_pane_g5

0xce09,	// (0x0007db96) cntbar_detail_list_event_pane_g6_ParamLimits

0xce09,	// (0x0007db96) cntbar_detail_list_event_pane_g6

0xce4b,	// (0x0007dbd8) cntbar_detail_list_event_pane_t3_ParamLimits

0xce4b,	// (0x0007dbd8) cntbar_detail_list_event_pane_t3

0xce5d,	// (0x0007dbea) popup_notif_wgt_window_ParamLimits

0xce5d,	// (0x0007dbea) popup_notif_wgt_window

0xce6b,	// (0x0007dbf8) popup_submenu_window_cp01_ParamLimits

0xce6b,	// (0x0007dbf8) popup_submenu_window_cp01

0x1992,	// (0x0007271f) bg_popup_window_pane_cp10

0xce77,	// (0x0007dc04) listscroll_notif_wgt_pane

0xce88,	// (0x0007dc15) list_notif_wgt_window

0xce91,	// (0x0007dc1e) scroll_pane_cp033

0xce9a,	// (0x0007dc27) list_notif_wgt_row_pane_ParamLimits

0xce9a,	// (0x0007dc27) list_notif_wgt_row_pane

0xceac,	// (0x0007dc39) aid_size_list_notif_wgt_del

0xceb9,	// (0x0007dc46) list_notif_wgt_row_pane_g1

0xcec5,	// (0x0007dc52) list_notif_wgt_row_pane_g2

0xced9,	// (0x0007dc66) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x00080bab) list_notif_wgt_row_pane_g

0xcee6,	// (0x0007dc73) list_notif_wgt_row_pane_t1

0xcefc,	// (0x0007dc89) list_notif_wgt_row_pane_t2

0xcf0e,	// (0x0007dc9b) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x00080bb2) list_notif_wgt_row_pane_t

0x33da,	// (0x00074167) list_recal_day_event_pane_g1

0xcf20,	// (0x0007dcad) list_recal_day_event_pane_t1

0x0f54,	// (0x00071ce1) bg_button_pane_cp045

0xcf2f,	// (0x0007dcbc) cntbar_detail_btn_pane_t1

0xee2a,	// (0x0007fbb7) main_callh_pane_ParamLimits

0xee2a,	// (0x0007fbb7) main_callh_pane

0x0f54,	// (0x00071ce1) main_coverflow0_pane

0x0f54,	// (0x00071ce1) main_wgtman_pane

0xc00c,	// (0x0007cd99) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc00c,	// (0x0007cd99) main_fs_bigclock_unlock_btn_pane

0x4430,	// (0x000751bd) bg_button_pane_cp16

0x4440,	// (0x000751cd) cell_tport_appsw_pane_g3

0xcf3d,	// (0x0007dcca) cf0_flow_pane_ParamLimits

0xcf3d,	// (0x0007dcca) cf0_flow_pane

0xcf4c,	// (0x0007dcd9) listscroll_cf0_pane

0xcf55,	// (0x0007dce2) main_cf0_pane_g1

0xcf67,	// (0x0007dcf4) main_cf0_pane_t1_ParamLimits

0xcf67,	// (0x0007dcf4) main_cf0_pane_t1

0xcf79,	// (0x0007dd06) main_cf0_pane_t2_ParamLimits

0xcf79,	// (0x0007dd06) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x00080bbe) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x00080bbe) main_cf0_pane_t

0xcf8b,	// (0x0007dd18) scroll_pane_cp11

0xcf94,	// (0x0007dd21) cf0_flow_pane_g1

0xcf9c,	// (0x0007dd29) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x00080bc3) cf0_flow_pane_g

0xcfa4,	// (0x0007dd31) cf0_flow_pane_t1

0x0f54,	// (0x00071ce1) main_call6_pane

0x0f54,	// (0x00071ce1) main_calllock_pane

0xcfb2,	// (0x0007dd3f) call6_btn_grp_pane_ParamLimits

0xcfb2,	// (0x0007dd3f) call6_btn_grp_pane

0xcfbf,	// (0x0007dd4c) call6_pane_g1_ParamLimits

0xcfbf,	// (0x0007dd4c) call6_pane_g1

0xcfcc,	// (0x0007dd59) popup_call6_1st_window_ParamLimits

0xcfcc,	// (0x0007dd59) popup_call6_1st_window

0xcfd8,	// (0x0007dd65) popup_call6_2nd_window_ParamLimits

0xcfd8,	// (0x0007dd65) popup_call6_2nd_window

0xcfe4,	// (0x0007dd71) cell_call6_btn_pane_ParamLimits

0xcfe4,	// (0x0007dd71) cell_call6_btn_pane

0x1992,	// (0x0007271f) bg_popup_call2_in_pane_cp03

0xcff3,	// (0x0007dd80) popup_call6_1st_window_g1

0xcffb,	// (0x0007dd88) popup_call6_1st_window_g2

0xd003,	// (0x0007dd90) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x00080bc8) popup_call6_1st_window_g

0xd00b,	// (0x0007dd98) popup_call6_1st_window_t1

0xd01a,	// (0x0007dda7) popup_call6_1st_window_t2

0xd028,	// (0x0007ddb5) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x00080bcf) popup_call6_1st_window_t

0x1992,	// (0x0007271f) bg_popup_call2_in_pane_cp04

0xd036,	// (0x0007ddc3) popup_call6_2nd_window_g1

0xd03e,	// (0x0007ddcb) popup_call6_2nd_window_g2

0xd046,	// (0x0007ddd3) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x00080bd6) popup_call6_2nd_window_g

0xd04e,	// (0x0007dddb) popup_call6_2nd_window_t1

0x644d,	// (0x000771da) bg_button_pane_cp15

0xd05d,	// (0x0007ddea) cell_call6_btn_pane_g1

0xd066,	// (0x0007ddf3) cell_call6_btn_pane_t1

0xd075,	// (0x0007de02) listscroll_wgtman_pane_ParamLimits

0xd075,	// (0x0007de02) listscroll_wgtman_pane

0xd091,	// (0x0007de1e) wgtman_btn_pane_ParamLimits

0xd091,	// (0x0007de1e) wgtman_btn_pane

0xdebd,	// (0x0007ec4a) aid_scroll_copy1

0xd0c4,	// (0x0007de51) list_wgtman_pane

0xd0ce,	// (0x0007de5b) wgtman_btn_pane_g1_ParamLimits

0xd0ce,	// (0x0007de5b) wgtman_btn_pane_g1

0xd0f6,	// (0x0007de83) wgtman_btn_pane_t1_ParamLimits

0xd0f6,	// (0x0007de83) wgtman_btn_pane_t1

0xd12d,	// (0x0007deba) wgtman_btn_pane_t2_ParamLimits

0xd12d,	// (0x0007deba) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x00080bdd) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x00080bdd) wgtman_btn_pane_t

0xd144,	// (0x0007ded1) listrow_wgtman_pane_ParamLimits

0xd144,	// (0x0007ded1) listrow_wgtman_pane

0xd155,	// (0x0007dee2) listrow_wgtman_pane_g1

0xd162,	// (0x0007deef) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x00080be2) listrow_wgtman_pane_g

0xd17a,	// (0x0007df07) listrow_wgtman_pane_t1

0xd192,	// (0x0007df1f) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x00080be7) listrow_wgtman_pane_t

0xd1b8,	// (0x0007df45) wait_bar_pane_cp09

0xd1ca,	// (0x0007df57) main_calllock_btn_pane

0xd1d2,	// (0x0007df5f) main_calllock_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp17

0xd1db,	// (0x0007df68) main_calllock_btn_pane_g1

0xd1e4,	// (0x0007df71) main_calllock_btn_pane_t1

0x0f54,	// (0x00071ce1) main_dialer3_pane

0x0f54,	// (0x00071ce1) main_fmrd2_pane

0x19f6,	// (0x00072783) main_fs_bigclock_unlock_btn_pane_g1

0xd1fb,	// (0x0007df88) main_fs_bigclock_unlock_btn_pane_t1

0xd209,	// (0x0007df96) area_fmrd2_info_pane_ParamLimits

0xd209,	// (0x0007df96) area_fmrd2_info_pane

0xd215,	// (0x0007dfa2) area_fmrd2_visual_pane_ParamLimits

0xd215,	// (0x0007dfa2) area_fmrd2_visual_pane

0xd223,	// (0x0007dfb0) fmrd2_indi_pane_ParamLimits

0xd223,	// (0x0007dfb0) fmrd2_indi_pane

0xd230,	// (0x0007dfbd) area_fmrd2_visual_pane_g1

0xd238,	// (0x0007dfc5) area_fmrd2_visual_pane_t1

0xd246,	// (0x0007dfd3) area_fmrd2_visual_pane_t2

0xd254,	// (0x0007dfe1) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x00080bf1) area_fmrd2_visual_pane_t

0xd262,	// (0x0007dfef) area_fmrd2_info_pane_g1

0xd26a,	// (0x0007dff7) area_fmrd2_info_pane_t1

0xd278,	// (0x0007e005) area_fmrd2_info_pane_t2

0xd286,	// (0x0007e013) area_fmrd2_info_pane_t3

0xd294,	// (0x0007e021) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x00080bf8) area_fmrd2_info_pane_t

0xd2a2,	// (0x0007e02f) fmrd2_indi_pane_t1

0xd2b0,	// (0x0007e03d) fmrd2_indi_pane_t2

0xd2be,	// (0x0007e04b) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x00080c01) fmrd2_indi_pane_t

0x3ff1,	// (0x00074d7e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3ff1,	// (0x00074d7e) list_single_fs_bigclock_indicator_pane_g5

0x409f,	// (0x00074e2c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x409f,	// (0x00074e2c) list_single_fs_bigclock_indicator_pane_t5

0xc7b7,	// (0x0007d544) aid_cell_bcale_month_pane_ParamLimits

0xc7b7,	// (0x0007d544) aid_cell_bcale_month_pane

0xc7d5,	// (0x0007d562) bcale_month_pane_ParamLimits

0xc7d5,	// (0x0007d562) bcale_month_pane

0xc7eb,	// (0x0007d578) bcale_preview_pane_ParamLimits

0xc7eb,	// (0x0007d578) bcale_preview_pane

0x49c2,	// (0x0007574f) list_single_fs_bigclock_pane_t1_ParamLimits

0x49de,	// (0x0007576b) list_single_fs_bigclock_pane_t2_ParamLimits

0x49de,	// (0x0007576b) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x00080b7c) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x00080b7c) list_single_fs_bigclock_pane_t

0xd1f3,	// (0x0007df80) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x00080bec) main_fs_bigclock_unlock_btn_pane_g

0xd2cc,	// (0x0007e059) aid_dia3_key_size_ParamLimits

0xd2cc,	// (0x0007e059) aid_dia3_key_size

0xd2d8,	// (0x0007e065) aid_dia3_listrow_size_ParamLimits

0xd2d8,	// (0x0007e065) aid_dia3_listrow_size

0xd2e6,	// (0x0007e073) dia3_keypad_fun_pane_ParamLimits

0xd2e6,	// (0x0007e073) dia3_keypad_fun_pane

0xd2f2,	// (0x0007e07f) dia3_keypad_num_pane_ParamLimits

0xd2f2,	// (0x0007e07f) dia3_keypad_num_pane

0xd2fe,	// (0x0007e08b) dia3_listscroll_pane_ParamLimits

0xd2fe,	// (0x0007e08b) dia3_listscroll_pane

0xd30a,	// (0x0007e097) dia3_numentry_pane_ParamLimits

0xd30a,	// (0x0007e097) dia3_numentry_pane

0xd316,	// (0x0007e0a3) dia3_list_pane

0xd31f,	// (0x0007e0ac) scroll_pane_cp12

0x0f54,	// (0x00071ce1) bg_dia3_numentry_pane

0xd328,	// (0x0007e0b5) dia3_numentry_pane_t1

0xd337,	// (0x0007e0c4) cell_dia3_key_num_pane

0xd33f,	// (0x0007e0cc) cell_dia3_key0_fun_pane_ParamLimits

0xd33f,	// (0x0007e0cc) cell_dia3_key0_fun_pane

0xd34c,	// (0x0007e0d9) cell_dia3_key1_fun_pane_ParamLimits

0xd34c,	// (0x0007e0d9) cell_dia3_key1_fun_pane

0xd359,	// (0x0007e0e6) dia3_listrow_pane

0x3d00,	// (0x00074a8d) bg_dia3_numentry_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp21

0xd366,	// (0x0007e0f3) cell_dia3_key_num_pane_t1

0xd374,	// (0x0007e101) cell_dia3_key_num_pane_t2

0xd383,	// (0x0007e110) cell_dia3_key_num_pane_t3

0xd392,	// (0x0007e11f) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x00080c08) cell_dia3_key_num_pane_t

0x0f54,	// (0x00071ce1) bg_button_pane_cp19

0xd3a1,	// (0x0007e12e) cell_dia3_key0_fun_pane_g1

0x0f54,	// (0x00071ce1) bg_button_pane_cp20

0xd3a9,	// (0x0007e136) cell_dia3_key1_fun_pane_g1

0xd3b1,	// (0x0007e13e) area_left_week_number_pane

0xd3c2,	// (0x0007e14f) area_top_day_name_pane

0xd3ce,	// (0x0007e15b) frame_month_view_pane

0xd3df,	// (0x0007e16c) grid_month_view_pane

0xd3ed,	// (0x0007e17a) cell_top_day_name_pane_ParamLimits

0xd3ed,	// (0x0007e17a) cell_top_day_name_pane

0xd403,	// (0x0007e190) cell_area_left_week_number_pane_ParamLimits

0xd403,	// (0x0007e190) cell_area_left_week_number_pane

0xd422,	// (0x0007e1af) cell_month_view_pane_ParamLimits

0xd422,	// (0x0007e1af) cell_month_view_pane

0xd448,	// (0x0007e1d5) frm_month_g1

0xd455,	// (0x0007e1e2) frm_month_g2

0xd464,	// (0x0007e1f1) frm_month_g3

0xd473,	// (0x0007e200) frm_month_g4

0xd482,	// (0x0007e20f) frm_month_g5

0xd491,	// (0x0007e21e) frm_month_g6

0xd4a0,	// (0x0007e22d) frm_month_g7

0xd4af,	// (0x0007e23c) frm_month_g8

0xd4bc,	// (0x0007e249) frm_month_g9

0xd4c9,	// (0x0007e256) frm_month_g10

0xd4d6,	// (0x0007e263) frm_month_g11

0xd4e3,	// (0x0007e270) frm_month_g12

0xd4f0,	// (0x0007e27d) frm_month_g13

0xd4fd,	// (0x0007e28a) frm_month_g14

0xd50a,	// (0x0007e297) frm_month_g15

0xd517,	// (0x0007e2a4) frm_month_g16

0x000f,

0xfe84,	// (0x00080c11) frm_month_g

0xd524,	// (0x0007e2b1) cell_top_day_name_pane_t1

0xd537,	// (0x0007e2c4) cell_area_left_week_number_pane_g1

0xd546,	// (0x0007e2d3) cell_area_left_week_number_pane_t1

0x1695,	// (0x00072422) cell_month_view_pane_g1

0xd55c,	// (0x0007e2e9) cell_month_view_pane_t1

0x0f54,	// (0x00071ce1) main_fps_pane

0x426b,	// (0x00074ff8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x426b,	// (0x00074ff8) cmail_ddmenu_btn02_pane_cp1

0x4287,	// (0x00075014) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4287,	// (0x00075014) cmail_ddmenu_btn02_pane_cp2

0xcaf2,	// (0x0007d87f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcaf2,	// (0x0007d87f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x00080b2f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x00080b2f) cmail_ddmenu_btn02_pane_g

0xcb10,	// (0x0007d89d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcb10,	// (0x0007d89d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x00080b34) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x00080b34) cmail_ddmenu_btn02_pane_t

0xd572,	// (0x0007e2ff) fps_text_pane_ParamLimits

0xd572,	// (0x0007e2ff) fps_text_pane

0xd57f,	// (0x0007e30c) main_fps_pane_g1_ParamLimits

0xd57f,	// (0x0007e30c) main_fps_pane_g1

0xd58b,	// (0x0007e318) wait_bar_pane_cp010_ParamLimits

0xd58b,	// (0x0007e318) wait_bar_pane_cp010

0xd597,	// (0x0007e324) fps_text_pane_t1_ParamLimits

0xd597,	// (0x0007e324) fps_text_pane_t1

0xa44e,	// (0x0007b1db) cam4_image_uncrop_pane_g1

0xa457,	// (0x0007b1e4) cam4_image_uncrop_pane_g2

0xa460,	// (0x0007b1ed) cam4_image_uncrop_pane_g3

0xa469,	// (0x0007b1f6) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x00080631) cam4_image_uncrop_pane_g

0xd359,	// (0x0007e0e6) dia3_listrow_pane_ParamLimits

0x0f54,	// (0x00071ce1) main_phob2_pane

0xc630,	// (0x0007d3bd) cell_tport_appsw_pane_cp02_ParamLimits

0xc630,	// (0x0007d3bd) cell_tport_appsw_pane_cp02

0xc63d,	// (0x0007d3ca) cell_tport_appsw_pane_cp03_ParamLimits

0xc63d,	// (0x0007d3ca) cell_tport_appsw_pane_cp03

0x0f54,	// (0x00071ce1) phob2_contact_card_pane

0x0f54,	// (0x00071ce1) phob2_listscroll_pane

0xd5b0,	// (0x0007e33d) phob2_list_pane

0xd5b8,	// (0x0007e345) scroll_pane_cp034

0xd5c0,	// (0x0007e34d) phob2_cc_data_pane_ParamLimits

0xd5c0,	// (0x0007e34d) phob2_cc_data_pane

0xd5d8,	// (0x0007e365) phob2_cc_listscroll_pane_ParamLimits

0xd5d8,	// (0x0007e365) phob2_cc_listscroll_pane

0xd5f0,	// (0x0007e37d) list_double_large_graphic_phob2_pane_ParamLimits

0xd5f0,	// (0x0007e37d) list_double_large_graphic_phob2_pane

0xd602,	// (0x0007e38f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd602,	// (0x0007e38f) list_double_large_graphic_phob2_pane_g1

0xd60f,	// (0x0007e39c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd60f,	// (0x0007e39c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x00080c32) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x00080c32) list_double_large_graphic_phob2_pane_g

0xd633,	// (0x0007e3c0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd633,	// (0x0007e3c0) list_double_large_graphic_phob2_pane_t1

0xd648,	// (0x0007e3d5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd648,	// (0x0007e3d5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x00080c3b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x00080c3b) list_double_large_graphic_phob2_pane_t

0x0f54,	// (0x00071ce1) list_highlight_pane_cp024

0xd65d,	// (0x0007e3ea) phob2_cc_button_pane

0xd665,	// (0x0007e3f2) phob2_cc_data_pane_g1_ParamLimits

0xd665,	// (0x0007e3f2) phob2_cc_data_pane_g1

0xd674,	// (0x0007e401) phob2_cc_data_pane_g2_ParamLimits

0xd674,	// (0x0007e401) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x00080c40) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x00080c40) phob2_cc_data_pane_g

0xd683,	// (0x0007e410) phob2_cc_data_pane_t1_ParamLimits

0xd683,	// (0x0007e410) phob2_cc_data_pane_t1

0xd698,	// (0x0007e425) phob2_cc_data_pane_t2_ParamLimits

0xd698,	// (0x0007e425) phob2_cc_data_pane_t2

0xd6ad,	// (0x0007e43a) phob2_cc_data_pane_t3_ParamLimits

0xd6ad,	// (0x0007e43a) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x00080c45) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x00080c45) phob2_cc_data_pane_t

0xd6c2,	// (0x0007e44f) phob2_cc_list_pane_ParamLimits

0xd6c2,	// (0x0007e44f) phob2_cc_list_pane

0x3c1d,	// (0x000749aa) scroll_pane_cp035_ParamLimits

0x3c1d,	// (0x000749aa) scroll_pane_cp035

0xe171,	// (0x0007eefe) bg_button_pane_cp033

0xd6ce,	// (0x0007e45b) phob2_cc_button_pane_g1

0xd6da,	// (0x0007e467) phob2_cc_button_pane_t1

0xd6ef,	// (0x0007e47c) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x00080c4c) phob2_cc_button_pane_t

0xd701,	// (0x0007e48e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd701,	// (0x0007e48e) list_double_large_graphic_phob2_cc_pane

0xd747,	// (0x0007e4d4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd747,	// (0x0007e4d4) list_double_large_graphic_phob2_cc_pane_g1

0xd758,	// (0x0007e4e5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd758,	// (0x0007e4e5) list_double_large_graphic_phob2_cc_pane_g2

0xd767,	// (0x0007e4f4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd767,	// (0x0007e4f4) list_double_large_graphic_phob2_cc_pane_g3

0xd776,	// (0x0007e503) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd776,	// (0x0007e503) list_double_large_graphic_phob2_cc_pane_g4

0xd787,	// (0x0007e514) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd787,	// (0x0007e514) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x00080c51) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x00080c51) list_double_large_graphic_phob2_cc_pane_g

0xd796,	// (0x0007e523) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd796,	// (0x0007e523) list_double_large_graphic_phob2_cc_pane_t1

0xd7bf,	// (0x0007e54c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd7bf,	// (0x0007e54c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x00080c5c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x00080c5c) list_double_large_graphic_phob2_cc_pane_t

0xd7e8,	// (0x0007e575) list_highlight_pane_cp025_ParamLimits

0xd7e8,	// (0x0007e575) list_highlight_pane_cp025

0xe171,	// (0x0007eefe) bg_button_pane_cp033_ParamLimits

0xd6ce,	// (0x0007e45b) phob2_cc_button_pane_g1_ParamLimits

0xd6da,	// (0x0007e467) phob2_cc_button_pane_t1_ParamLimits

0xd6ef,	// (0x0007e47c) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x00080c4c) phob2_cc_button_pane_t_ParamLimits

0x6445,	// (0x000771d2) popup_wgtman_window

0x3d20,	// (0x00074aad) scroll_pane_cp038

0xd0ac,	// (0x0007de39) wgtman_btn_pane_cp_01_ParamLimits

0xd0ac,	// (0x0007de39) wgtman_btn_pane_cp_01

0xd7f6,	// (0x0007e583) wgtman_content_pane

0xd7ff,	// (0x0007e58c) wgtman_heading_pane

0x0f54,	// (0x00071ce1) bg_heading_pane_cp02

0xd808,	// (0x0007e595) wgtman_heading_pane_g1

0xd810,	// (0x0007e59d) wgtman_heading_pane_t1

0xd81e,	// (0x0007e5ab) scroll_pane_cp036

0xd826,	// (0x0007e5b3) wgtman_list_pane

0x4a4f,	// (0x000757dc) wgtman_list_pane_t1_ParamLimits

0x4a4f,	// (0x000757dc) wgtman_list_pane_t1

0xa3b3,	// (0x0007b140) cam4_grid_pane

0xaffc,	// (0x0007bd89) bg_button_pane_cp015_ParamLimits

0xb00c,	// (0x0007bd99) bg_button_pane_cp016_ParamLimits

0xb01f,	// (0x0007bdac) bg_button_pane_cp017_ParamLimits

0xb071,	// (0x0007bdfe) popup_vitu2_query_window_g3_ParamLimits

0xb071,	// (0x0007bdfe) popup_vitu2_query_window_g3

0xb124,	// (0x0007beb1) popup_vitu2_query_window_t6_ParamLimits

0xb124,	// (0x0007beb1) popup_vitu2_query_window_t6

0xb14f,	// (0x0007bedc) popup_vitu2_query_window_t7_ParamLimits

0xb14f,	// (0x0007bedc) popup_vitu2_query_window_t7

0xd82e,	// (0x0007e5bb) cam4_grid_pane_g1

0xd837,	// (0x0007e5c4) cam4_grid_pane_g2

0xd840,	// (0x0007e5cd) cam4_grid_pane_g3

0xd849,	// (0x0007e5d6) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x00080c61) cam4_grid_pane_g

0x7074,	// (0x00077e01) aid_placing_vt_slider_lsc_ParamLimits

0x731e,	// (0x000780ab) vidtel_button_pane_ParamLimits

0x731e,	// (0x000780ab) vidtel_button_pane

0x0f54,	// (0x00071ce1) bg_button_pane_cp034

0xd852,	// (0x0007e5df) vidtel_button_pane_g1

0xd85a,	// (0x0007e5e7) vidtel_button_pane_t1

0x33ca,	// (0x00074157) aid_size_vtel_slider_touch

0x3c1d,	// (0x000749aa) scroll_pane_cp039

0x3d4f,	// (0x00074adc) ncim_query_button_pane_cp01_ParamLimits

0x3d6e,	// (0x00074afb) ncimui_query_pane_g1_ParamLimits

0xe171,	// (0x0007eefe) input_focus_pane_cp012_ParamLimits

0x3d93,	// (0x00074b20) ncim_query_entry_pane_t1_ParamLimits

0x3c1d,	// (0x000749aa) scroll_pane_cp039_ParamLimits

0xdf81,	// (0x0007ed0e) navi_pane_bcale_mc_g1

0xdf89,	// (0x0007ed16) navi_pane_bcale_mc_t1

0x42bb,	// (0x00075048) main_sp_fs_email_pane_g1

0x42c7,	// (0x00075054) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00080a2c) main_sp_fs_email_pane_g

0x4709,	// (0x00075496) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4709,	// (0x00075496) list_single_cale_mrui_row_pane_g3

0xcb2e,	// (0x0007d8bb) list_single_recal_day_pane_g5_event_pane

0x4872,	// (0x000755ff) list_single_recal_day_pane_g7

0xd870,	// (0x0007e5fd) list_recal_day_event_pane_cp01

0xd879,	// (0x0007e606) list_recal_vselct_arw_lo_pane_cp01

0xd881,	// (0x0007e60e) list_recal_vselct_arw_up_pane_cp01

0xd889,	// (0x0007e616) list_recal_vselct_pane_cp01

0x33da,	// (0x00074167) list_recal_day_event_pane_cp01_g1

0x4a66,	// (0x000757f3) list_recal_day_event_pane_cp01_t1

0x487a,	// (0x00075607) list_single_recal_day_pane_t1_ParamLimits

0xcb45,	// (0x0007d8d2) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x00080b44) list_single_recal_day_pane_t_ParamLimits

0x161b,	// (0x000723a8) bg_notes_pane_ParamLimits

0x16ed,	// (0x0007247a) list_notes_pane_ParamLimits

0x6642,	// (0x000773cf) scroll_pane_cp06_ParamLimits

0x172d,	// (0x000724ba) main_notes_pane_ParamLimits

0xe171,	// (0x0007eefe) main_welc_pane

0xd8a8,	// (0x0007e635) main_welc_body_pane_ParamLimits

0xd8a8,	// (0x0007e635) main_welc_body_pane

0xd8c1,	// (0x0007e64e) main_welc_opti_pane_ParamLimits

0xd8c1,	// (0x0007e64e) main_welc_opti_pane

0xd916,	// (0x0007e6a3) main_welc_pane_t1_ParamLimits

0xd916,	// (0x0007e6a3) main_welc_pane_t1

0xda1a,	// (0x0007e7a7) main_welc_body_row_pane_ParamLimits

0xda1a,	// (0x0007e7a7) main_welc_body_row_pane

0x1dca,	// (0x00072b57) main_welc_opti_row_pane_ParamLimits

0x1dca,	// (0x00072b57) main_welc_opti_row_pane

0xda2f,	// (0x0007e7bc) main_welc_opti_row_pane_g1

0xda37,	// (0x0007e7c4) main_welc_opti_row_pane_t1

0xda46,	// (0x0007e7d3) main_welc_body_row_pane_t1

0xce80,	// (0x0007dc0d) popup_notif_wgt_heading_pane

0xceac,	// (0x0007dc39) aid_size_list_notif_wgt_del_ParamLimits

0xceb9,	// (0x0007dc46) list_notif_wgt_row_pane_g1_ParamLimits

0xcec5,	// (0x0007dc52) list_notif_wgt_row_pane_g2_ParamLimits

0xced9,	// (0x0007dc66) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x00080bab) list_notif_wgt_row_pane_g_ParamLimits

0xcee6,	// (0x0007dc73) list_notif_wgt_row_pane_t1_ParamLimits

0xcefc,	// (0x0007dc89) list_notif_wgt_row_pane_t2_ParamLimits

0xcf0e,	// (0x0007dc9b) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x00080bb2) list_notif_wgt_row_pane_t_ParamLimits

0xd155,	// (0x0007dee2) listrow_wgtman_pane_g1_ParamLimits

0xd162,	// (0x0007deef) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x00080be2) listrow_wgtman_pane_g_ParamLimits

0xd17a,	// (0x0007df07) listrow_wgtman_pane_t1_ParamLimits

0xd192,	// (0x0007df1f) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x00080be7) listrow_wgtman_pane_t_ParamLimits

0xd1b8,	// (0x0007df45) wait_bar_pane_cp09_ParamLimits

0x0f54,	// (0x00071ce1) bg_popup_heading_pane_cp02

0xda55,	// (0x0007e7e2) popup_notif_wgt_heading_pane_g1

0xda5d,	// (0x0007e7ea) popup_notif_wgt_heading_pane_t1

0x24e1,	// (0x0007326e) main_vids_pane

0x0f54,	// (0x00071ce1) vids_listscroll_pane

0xda6b,	// (0x0007e7f8) scroll_pane_cp040

0x0f54,	// (0x00071ce1) vids_list_pane

0xda74,	// (0x0007e801) vids_list_double_pane_ParamLimits

0xda74,	// (0x0007e801) vids_list_double_pane

0xda85,	// (0x0007e812) vids_list_double_pane_g1

0xda8e,	// (0x0007e81b) vids_list_double_pane_t1

0xda9e,	// (0x0007e82b) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x00080c80) vids_list_double_pane_t

0x8d46,	// (0x00079ad3) main_ncimui_pane_ParamLimits

0xbc20,	// (0x0007c9ad) main_ncimui_pane_g1_ParamLimits

0xbc2c,	// (0x0007c9b9) main_ncimui_pane_g2_ParamLimits

0xbc2c,	// (0x0007c9b9) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0008092d) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0008092d) main_ncimui_pane_g

0xd8d6,	// (0x0007e663) main_welc_pane_g1_ParamLimits

0xd8d6,	// (0x0007e663) main_welc_pane_g1

0xd8e2,	// (0x0007e66f) main_welc_pane_g2_ParamLimits

0xd8e2,	// (0x0007e66f) main_welc_pane_g2

0x0003,

0xfedd,	// (0x00080c6a) main_welc_pane_g_ParamLimits

0xfedd,	// (0x00080c6a) main_welc_pane_g

0x161b,	// (0x000723a8) listscroll_mce_pane_ParamLimits

0x83c2,	// (0x0007914f) wait_bar_pane_cp10

0x24d5,	// (0x00073262) main_cale_day_pane_ParamLimits

0x24d5,	// (0x00073262) main_cale_week_pane_ParamLimits

0x161b,	// (0x000723a8) main_messa_pane_ParamLimits

0x99fa,	// (0x0007a787) main_clock2_btn_pane_ParamLimits

0x99fa,	// (0x0007a787) main_clock2_btn_pane

0x2c19,	// (0x000739a6) main_clock2_btn_pane_cp01_ParamLimits

0x2c19,	// (0x000739a6) main_clock2_btn_pane_cp01

0x46c4,	// (0x00075451) list_cale_mrui_pane_ParamLimits

0xcf5f,	// (0x0007dcec) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x00080bb9) main_cf0_pane_g

0xd3b1,	// (0x0007e13e) area_left_week_number_pane_ParamLimits

0xd3c2,	// (0x0007e14f) area_top_day_name_pane_ParamLimits

0xd3ce,	// (0x0007e15b) frame_month_view_pane_ParamLimits

0xd3df,	// (0x0007e16c) grid_month_view_pane_ParamLimits

0xd448,	// (0x0007e1d5) frm_month_g1_ParamLimits

0xd455,	// (0x0007e1e2) frm_month_g2_ParamLimits

0xd464,	// (0x0007e1f1) frm_month_g3_ParamLimits

0xd473,	// (0x0007e200) frm_month_g4_ParamLimits

0xd482,	// (0x0007e20f) frm_month_g5_ParamLimits

0xd491,	// (0x0007e21e) frm_month_g6_ParamLimits

0xd4a0,	// (0x0007e22d) frm_month_g7_ParamLimits

0xd4af,	// (0x0007e23c) frm_month_g8_ParamLimits

0xd4bc,	// (0x0007e249) frm_month_g9_ParamLimits

0xd4c9,	// (0x0007e256) frm_month_g10_ParamLimits

0xd4d6,	// (0x0007e263) frm_month_g11_ParamLimits

0xd4e3,	// (0x0007e270) frm_month_g12_ParamLimits

0xd4f0,	// (0x0007e27d) frm_month_g13_ParamLimits

0xd4fd,	// (0x0007e28a) frm_month_g14_ParamLimits

0xd50a,	// (0x0007e297) frm_month_g15_ParamLimits

0xd517,	// (0x0007e2a4) frm_month_g16_ParamLimits

0xfe84,	// (0x00080c11) frm_month_g_ParamLimits

0xd524,	// (0x0007e2b1) cell_top_day_name_pane_t1_ParamLimits

0xd537,	// (0x0007e2c4) cell_area_left_week_number_pane_g1_ParamLimits

0xd546,	// (0x0007e2d3) cell_area_left_week_number_pane_t1_ParamLimits

0x1695,	// (0x00072422) cell_month_view_pane_g1_ParamLimits

0xd55c,	// (0x0007e2e9) cell_month_view_pane_t1_ParamLimits

0x1613,	// (0x000723a0) main_clock2_btn_pane_g1

0xee66,	// (0x0007fbf3) main_clock2_btn_pane_t1

0xe171,	// (0x0007eefe) listscroll_cmail_pane_ParamLimits

0x42bb,	// (0x00075048) main_sp_fs_email_pane_g1_ParamLimits

0x42c7,	// (0x00075054) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00080a2c) main_sp_fs_email_pane_g_ParamLimits

0x47ee,	// (0x0007557b) list_recal_day_pane_ParamLimits

0x47ff,	// (0x0007558c) mian_recal_day_pane_t1

0xc52b,	// (0x0007d2b8) list_single_dyc_row_text_pane_t4_ParamLimits

0xc52b,	// (0x0007d2b8) list_single_dyc_row_text_pane_t4

0xc562,	// (0x0007d2ef) list_single_dyc_row_text_pane_t5_ParamLimits

0xc562,	// (0x0007d2ef) list_single_dyc_row_text_pane_t5

0x4360,	// (0x000750ed) list_single_dyc_row_text_pane_t6_ParamLimits

0x4360,	// (0x000750ed) list_single_dyc_row_text_pane_t6

0x7fbb,	// (0x00078d48) aid_mgn_list_cale_time_pane

0x8d46,	// (0x00079ad3) main_gallery2_pane_ParamLimits

0x2c2d,	// (0x000739ba) main_clock2_pane_cp01_t1

0x2c3b,	// (0x000739c8) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x00080503) main_clock2_pane_cp01_t

0x6a0b,	// (0x00077798) cale_week_scroll_pane_g16_ParamLimits

0x6a0b,	// (0x00077798) cale_week_scroll_pane_g16

0x1992,	// (0x0007271f) vorec_slider_pane

0xd85a,	// (0x0007e5e7) vidtel_button_pane_t1_ParamLimits

0x16a3,	// (0x00072430) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcbde,	// (0x0007d96b) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcbeb,	// (0x0007d978) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcbeb,	// (0x0007d978) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x00080b67) main_fs_bigclock_clock_pane_g_ParamLimits

0xcbf7,	// (0x0007d984) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcc09,	// (0x0007d996) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x00080b70) main_fs_bigclock_clock_pane_t_ParamLimits

0x93fa,	// (0x0007a187) main_mup3_lyrics_pane_ParamLimits

0x93fa,	// (0x0007a187) main_mup3_lyrics_pane

0xee74,	// (0x0007fc01) main_mup3_lyrics_pane_t1_ParamLimits

0xee74,	// (0x0007fc01) main_mup3_lyrics_pane_t1

0x9ec8,	// (0x0007ac55) aid_main_mp4_pane_t1_area

0x9ed2,	// (0x0007ac5f) aid_main_mp4_pane_t2_area

0x9fc1,	// (0x0007ad4e) main_mp4_pane_g7_ParamLimits

0x9fc1,	// (0x0007ad4e) main_mp4_pane_g7

0x9fcd,	// (0x0007ad5a) main_mp4_pane_g8_ParamLimits

0x9fcd,	// (0x0007ad5a) main_mp4_pane_g8

0xa2fd,	// (0x0007b08a) aid_call6_pane_g1_size

0xd72b,	// (0x0007e4b8) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd72b,	// (0x0007e4b8) list_double_large_graphic_phob2_other_pane

0xded4,	// (0x0007ec61) list_double_large_graphic_phob2_other_pane_g1

0x0f54,	// (0x00071ce1) list_highlight_pane_cp026

0xe171,	// (0x0007eefe) main_welc_pane_ParamLimits

0xc357,	// (0x0007d0e4) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc357,	// (0x0007d0e4) main_sp_fs_ctrlbar_pane_g3

0xc36f,	// (0x0007d0fc) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc36f,	// (0x0007d0fc) main_sp_fs_ctrlbar_pane_g4

0xc3af,	// (0x0007d13c) toolbar2_fixed_button_pane_cp01

0xc3b9,	// (0x0007d146) toolbar2_fixed_button_pane_cp02

0xc3c4,	// (0x0007d151) toolbar2_fixed_button_pane_cp03

0xd893,	// (0x0007e620) list_welc_entry_pane_ParamLimits

0xd893,	// (0x0007e620) list_welc_entry_pane

0xd8ee,	// (0x0007e67b) main_welc_pane_g3_ParamLimits

0xd8ee,	// (0x0007e67b) main_welc_pane_g3

0xd92e,	// (0x0007e6bb) main_welc_pane_t2_ParamLimits

0xd92e,	// (0x0007e6bb) main_welc_pane_t2

0xd940,	// (0x0007e6cd) main_welc_pane_t3_ParamLimits

0xd940,	// (0x0007e6cd) main_welc_pane_t3

0x0005,

0xfee6,	// (0x00080c73) main_welc_pane_t_ParamLimits

0xfee6,	// (0x00080c73) main_welc_pane_t

0xd9c8,	// (0x0007e755) welc_button_pane_ParamLimits

0xd9c8,	// (0x0007e755) welc_button_pane

0xda0e,	// (0x0007e79b) welc_service_logo_pane_ParamLimits

0xda0e,	// (0x0007e79b) welc_service_logo_pane

0xee92,	// (0x0007fc1f) list_single_welc_entry_pane_ParamLimits

0xee92,	// (0x0007fc1f) list_single_welc_entry_pane

0xeea3,	// (0x0007fc30) list_single_welc_entry_pane_g1

0xeeab,	// (0x0007fc38) list_single_welc_entry_pane_t1

0xeeb9,	// (0x0007fc46) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x00080c85) list_single_welc_entry_pane_t

0x0f54,	// (0x00071ce1) bg_button_pane_cp035

0xeec7,	// (0x0007fc54) welc_button_pane_t1

0xeed5,	// (0x0007fc62) welc_service_logo_pane_g1

0xeede,	// (0x0007fc6b) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x00080c8a) welc_service_logo_pane_g

0x644d,	// (0x000771da) main_int_radio_pane

0x17f2,	// (0x0007257f) list_single_fs_dyc_pane_g1

0xd61b,	// (0x0007e3a8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd61b,	// (0x0007e3a8) list_double_large_graphic_phob2_pane_g3

0xd627,	// (0x0007e3b4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd627,	// (0x0007e3b4) list_double_large_graphic_phob2_pane_g4

0xeee7,	// (0x0007fc74) main_int_radio1_pane_ParamLimits

0xeee7,	// (0x0007fc74) main_int_radio1_pane

0xeefd,	// (0x0007fc8a) find_pane_cp02

0xef06,	// (0x0007fc93) input_focus_pane_cp12_ParamLimits

0xef06,	// (0x0007fc93) input_focus_pane_cp12

0xef12,	// (0x0007fc9f) input_focus_pane_cp13_ParamLimits

0xef12,	// (0x0007fc9f) input_focus_pane_cp13

0xef2a,	// (0x0007fcb7) input_focus_pane_cp14_ParamLimits

0xef2a,	// (0x0007fcb7) input_focus_pane_cp14

0xef42,	// (0x0007fccf) int_radio1_listscroll_pane

0xef4c,	// (0x0007fcd9) main_int_radio1_pane_g1_ParamLimits

0xef4c,	// (0x0007fcd9) main_int_radio1_pane_g1

0xef58,	// (0x0007fce5) main_int_radio1_pane_t1_ParamLimits

0xef58,	// (0x0007fce5) main_int_radio1_pane_t1

0xef6a,	// (0x0007fcf7) main_int_radio1_pane_t2_ParamLimits

0xef6a,	// (0x0007fcf7) main_int_radio1_pane_t2

0xef7c,	// (0x0007fd09) main_int_radio1_pane_t3_ParamLimits

0xef7c,	// (0x0007fd09) main_int_radio1_pane_t3

0xef8e,	// (0x0007fd1b) main_int_radio1_pane_t4_ParamLimits

0xef8e,	// (0x0007fd1b) main_int_radio1_pane_t4

0xefa5,	// (0x0007fd32) main_int_radio1_pane_t5_ParamLimits

0xefa5,	// (0x0007fd32) main_int_radio1_pane_t5

0xefb7,	// (0x0007fd44) main_int_radio1_pane_t6_ParamLimits

0xefb7,	// (0x0007fd44) main_int_radio1_pane_t6

0xefc9,	// (0x0007fd56) main_int_radio1_pane_t7_ParamLimits

0xefc9,	// (0x0007fd56) main_int_radio1_pane_t7

0xefdb,	// (0x0007fd68) main_int_radio1_pane_t8_ParamLimits

0xefdb,	// (0x0007fd68) main_int_radio1_pane_t8

0xefed,	// (0x0007fd7a) main_int_radio1_pane_t9_ParamLimits

0xefed,	// (0x0007fd7a) main_int_radio1_pane_t9

0xefff,	// (0x0007fd8c) main_int_radio1_pane_t10_ParamLimits

0xefff,	// (0x0007fd8c) main_int_radio1_pane_t10

0xf02e,	// (0x0007fdbb) main_int_radio1_pane_t11_ParamLimits

0xf02e,	// (0x0007fdbb) main_int_radio1_pane_t11

0xf05d,	// (0x0007fdea) main_int_radio1_pane_t12_ParamLimits

0xf05d,	// (0x0007fdea) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x00080c8f) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x00080c8f) main_int_radio1_pane_t

0xf074,	// (0x0007fe01) int_radio_list_pane

0xd5b8,	// (0x0007e345) scroll_pane_cp037

0xd144,	// (0x0007ded1) list_double_large_graphic_int_radio_pane_ParamLimits

0xd144,	// (0x0007ded1) list_double_large_graphic_int_radio_pane

0xf07c,	// (0x0007fe09) list_double_large_graphic_int_radio_pane_g1

0x4b92,	// (0x0007591f) list_double_large_graphic_int_radio_pane_t1

0x4ba0,	// (0x0007592d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x00080ca8) list_double_large_graphic_int_radio_pane_t

0x0f54,	// (0x00071ce1) list_highlight_pane_cp027

0xd8a0,	// (0x0007e62d) main_button_pane_4

0xd8fa,	// (0x0007e687) main_welc_pane_g4_ParamLimits

0xd8fa,	// (0x0007e687) main_welc_pane_g4

0xd952,	// (0x0007e6df) main_welc_pane_t4_ParamLimits

0xd952,	// (0x0007e6df) main_welc_pane_t4

0xd964,	// (0x0007e6f1) main_welc_pane_t5_ParamLimits

0xd964,	// (0x0007e6f1) main_welc_pane_t5

0xd996,	// (0x0007e723) main_welc_pane_t6_ParamLimits

0xd996,	// (0x0007e723) main_welc_pane_t6

0xd9d4,	// (0x0007e761) welc_button_pane_2_ParamLimits

0xd9d4,	// (0x0007e761) welc_button_pane_2

0xd9e8,	// (0x0007e775) welc_button_pane_3_ParamLimits

0xd9e8,	// (0x0007e775) welc_button_pane_3

0xd8a0,	// (0x0007e62d) welc_button_pane_4

0xda00,	// (0x0007e78d) welc_button_pane_5_ParamLimits

0xda00,	// (0x0007e78d) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large

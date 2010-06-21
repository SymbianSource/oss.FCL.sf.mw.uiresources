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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002efde };

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
0x14c3,	// (0x000304a1) Screen

0x14cf,	// (0x000304ad) application_window

0x14ff,	// (0x000304dd) area_bottom_pane_ParamLimits

0x14ff,	// (0x000304dd) area_bottom_pane

0xfbde,	// (0x0002ebbc) area_top_pane_ParamLimits

0xfbde,	// (0x0002ebbc) area_top_pane

0x1561,	// (0x0003053f) call_video_uplink_pane_ParamLimits

0x1561,	// (0x0003053f) call_video_uplink_pane

0xfc6c,	// (0x0002ec4a) main_pane_ParamLimits

0xfc6c,	// (0x0002ec4a) main_pane

0xc611,	// (0x0003b5ef) context_pane

0x48d8,	// (0x000338b6) navi_pane

0x490c,	// (0x000338ea) popup_cale_events_window_ParamLimits

0x490c,	// (0x000338ea) popup_cale_events_window

0xc624,	// (0x0003b602) popup_mup_playback_window

0x4924,	// (0x00033902) signal_pane

0xa587,	// (0x00039565) main_browser_pane

0xa738,	// (0x00039716) main_burst_pane

0x008a,	// (0x0002f068) main_calc_pane

0xc5f7,	// (0x0003b5d5) main_cale_day_pane

0x009e,	// (0x0002f07c) main_cale_month_pane

0xc5f7,	// (0x0003b5d5) main_cale_week_pane

0xa738,	// (0x00039716) main_call_pane

0xa267,	// (0x00039245) main_call_poc_pane

0xa738,	// (0x00039716) main_camera_pane

0xa738,	// (0x00039716) main_chi_dic_pane

0xaf28,	// (0x00039f06) main_clock_pane

0xa267,	// (0x00039245) main_fmradio_pane

0xa738,	// (0x00039716) main_graph_messa_pane

0xa267,	// (0x00039245) main_help_pane

0xa587,	// (0x00039565) main_im_pane

0xa4c2,	// (0x000394a0) main_image_pane_ParamLimits

0xa4c2,	// (0x000394a0) main_image_pane

0xa267,	// (0x00039245) main_location2_pane

0xa738,	// (0x00039716) main_location_pane

0xa4c2,	// (0x000394a0) main_messa_pane

0xa267,	// (0x00039245) main_mp2_pane

0xa738,	// (0x00039716) main_mp_pane

0xa267,	// (0x00039245) main_msg_pane

0xa267,	// (0x00039245) main_mup_eq_pane

0xa267,	// (0x00039245) main_mup_pane

0xa587,	// (0x00039565) main_notes_pane

0xa267,	// (0x00039245) main_pec_pane

0xa267,	// (0x00039245) main_phob_pane

0xa267,	// (0x00039245) main_pinb_pane

0xa267,	// (0x00039245) main_postcard_pane

0xa267,	// (0x00039245) main_qdial_pane

0xa738,	// (0x00039716) main_skin_pane

0xa267,	// (0x00039245) main_smil2_pane

0xa738,	// (0x00039716) main_smil_pane

0xa738,	// (0x00039716) main_video_pane

0xa738,	// (0x00039716) main_video_tele_pane

0xa4c2,	// (0x000394a0) main_viewer_pane_ParamLimits

0xa4c2,	// (0x000394a0) main_viewer_pane

0xa738,	// (0x00039716) main_vorec_pane

0x00f0,	// (0x0002f0ce) popup_blid_sat_info_window_ParamLimits

0x00f0,	// (0x0002f0ce) popup_blid_sat_info_window

0x0154,	// (0x0002f132) popup_dyc_status_message_window_ParamLimits

0x0154,	// (0x0002f132) popup_dyc_status_message_window

0x016e,	// (0x0002f14c) popup_grid_large_graphic_window_ParamLimits

0x016e,	// (0x0002f14c) popup_grid_large_graphic_window

0x0230,	// (0x0002f20e) popup_loc_request_window_ParamLimits

0x0230,	// (0x0002f20e) popup_loc_request_window

0x0356,	// (0x0002f334) popup_wml_address_window_ParamLimits

0x0356,	// (0x0002f334) popup_wml_address_window

0x46c8,	// (0x000336a6) call_muted_g1

0x4359,	// (0x00033337) popup_call_audio_conf_window_ParamLimits

0x4359,	// (0x00033337) popup_call_audio_conf_window

0x46d8,	// (0x000336b6) popup_call_audio_first_window_ParamLimits

0x46d8,	// (0x000336b6) popup_call_audio_first_window

0x474e,	// (0x0003372c) popup_call_audio_in_window_ParamLimits

0x474e,	// (0x0003372c) popup_call_audio_in_window

0x478a,	// (0x00033768) popup_call_audio_out_window_ParamLimits

0x478a,	// (0x00033768) popup_call_audio_out_window

0x47c4,	// (0x000337a2) popup_call_audio_second_window_ParamLimits

0x47c4,	// (0x000337a2) popup_call_audio_second_window

0x481a,	// (0x000337f8) popup_call_audio_wait_window_ParamLimits

0x481a,	// (0x000337f8) popup_call_audio_wait_window

0x484f,	// (0x0003382d) popup_number_entry_window_ParamLimits

0x484f,	// (0x0003382d) popup_number_entry_window

0x9e1f,	// (0x00038dfd) bg_popup_call_pane_cp05_ParamLimits

0x9e1f,	// (0x00038dfd) bg_popup_call_pane_cp05

0x9e3f,	// (0x00038e1d) popup_number_entry_window_t1

0x9e52,	// (0x00038e30) popup_number_entry_window_t2

0x9e64,	// (0x00038e42) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0003e0a4) popup_number_entry_window_t

0x9eab,	// (0x00038e89) text_title_cp2

0x9ebe,	// (0x00038e9c) bg_popup_call_pane_cp_ParamLimits

0x9ebe,	// (0x00038e9c) bg_popup_call_pane_cp

0x9ecc,	// (0x00038eaa) call_thumbnail_pane

0x9ed4,	// (0x00038eb2) popup_call_audio_in_window_g1_ParamLimits

0x9ed4,	// (0x00038eb2) popup_call_audio_in_window_g1

0x9ee0,	// (0x00038ebe) popup_call_audio_in_window_g2_ParamLimits

0x9ee0,	// (0x00038ebe) popup_call_audio_in_window_g2

0x9eec,	// (0x00038eca) popup_call_audio_in_window_g3_ParamLimits

0x9eec,	// (0x00038eca) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0003e0ad) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0003e0ad) popup_call_audio_in_window_g

0x9ef8,	// (0x00038ed6) popup_call_audio_in_window_t1_ParamLimits

0x9ef8,	// (0x00038ed6) popup_call_audio_in_window_t1

0x9f14,	// (0x00038ef2) popup_call_audio_in_window_t2_ParamLimits

0x9f14,	// (0x00038ef2) popup_call_audio_in_window_t2

0x9f30,	// (0x00038f0e) popup_call_audio_in_window_t3_ParamLimits

0x9f30,	// (0x00038f0e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0003e0b4) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0003e0b4) popup_call_audio_in_window_t

0x9ebe,	// (0x00038e9c) bg_popup_call_pane_cp01_ParamLimits

0x9ebe,	// (0x00038e9c) bg_popup_call_pane_cp01

0x9ecc,	// (0x00038eaa) call_thumbnail_pane_cp02

0x9f43,	// (0x00038f21) call_type_pane_cp022

0x9f4b,	// (0x00038f29) popup_call_audio_out_window_g1_ParamLimits

0x9f4b,	// (0x00038f29) popup_call_audio_out_window_g1

0x9f5d,	// (0x00038f3b) popup_call_audio_out_window_g2_ParamLimits

0x9f5d,	// (0x00038f3b) popup_call_audio_out_window_g2

0x9f69,	// (0x00038f47) popup_call_audio_out_window_g3_ParamLimits

0x9f69,	// (0x00038f47) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0003e0bb) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0003e0bb) popup_call_audio_out_window_g

0x9f7b,	// (0x00038f59) popup_call_audio_out_window_t1_ParamLimits

0x9f7b,	// (0x00038f59) popup_call_audio_out_window_t1

0x9f93,	// (0x00038f71) popup_call_audio_out_window_t2_ParamLimits

0x9f93,	// (0x00038f71) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0003e0c2) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0003e0c2) popup_call_audio_out_window_t

0x9fa8,	// (0x00038f86) bg_popup_call_pane_ParamLimits

0x9fa8,	// (0x00038f86) bg_popup_call_pane

0x15a3,	// (0x00030581) call_thumbnail_pane_cp_ParamLimits

0x15a3,	// (0x00030581) call_thumbnail_pane_cp

0xa02c,	// (0x0003900a) call_type_pane_cp01_ParamLimits

0xa02c,	// (0x0003900a) call_type_pane_cp01

0xa070,	// (0x0003904e) popup_call_audio_first_window_g1_ParamLimits

0xa070,	// (0x0003904e) popup_call_audio_first_window_g1

0xa0bc,	// (0x0003909a) popup_call_audio_first_window_g2_ParamLimits

0xa0bc,	// (0x0003909a) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0003e0c7) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0003e0c7) popup_call_audio_first_window_g

0xa100,	// (0x000390de) popup_call_audio_first_window_t1_ParamLimits

0xa100,	// (0x000390de) popup_call_audio_first_window_t1

0xa1ac,	// (0x0003918a) popup_call_audio_first_window_t4_ParamLimits

0xa1ac,	// (0x0003918a) popup_call_audio_first_window_t4

0xa238,	// (0x00039216) popup_call_audio_first_window_t5_ParamLimits

0xa238,	// (0x00039216) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0003e0cc) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0003e0cc) popup_call_audio_first_window_t

0xa267,	// (0x00039245) bg_popup_call_pane_cp02

0xa271,	// (0x0003924f) call_type_pane_cp023

0xa279,	// (0x00039257) popup_call_audio_wait_window_g1

0xa281,	// (0x0003925f) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003e0d3) popup_call_audio_wait_window_g

0xa289,	// (0x00039267) popup_call_audio_wait_window_t3

0xa297,	// (0x00039275) bg_popup_call_pane_cp03_ParamLimits

0xa297,	// (0x00039275) bg_popup_call_pane_cp03

0xa2f7,	// (0x000392d5) call_thumbnail_pane_cp011_ParamLimits

0xa2f7,	// (0x000392d5) call_thumbnail_pane_cp011

0xa303,	// (0x000392e1) call_type_pane_cp034_ParamLimits

0xa303,	// (0x000392e1) call_type_pane_cp034

0xa33f,	// (0x0003931d) popup_call_audio_second_window_g1_ParamLimits

0xa33f,	// (0x0003931d) popup_call_audio_second_window_g1

0xa37b,	// (0x00039359) popup_call_audio_second_window_g2_ParamLimits

0xa37b,	// (0x00039359) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0003e0d8) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0003e0d8) popup_call_audio_second_window_g

0xa3b7,	// (0x00039395) popup_call_audio_second_window_t1_ParamLimits

0xa3b7,	// (0x00039395) popup_call_audio_second_window_t1

0xa438,	// (0x00039416) popup_call_audio_second_window_t2_ParamLimits

0xa438,	// (0x00039416) popup_call_audio_second_window_t2

0xa46e,	// (0x0003944c) popup_call_audio_second_window_t3_ParamLimits

0xa46e,	// (0x0003944c) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0003e0dd) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0003e0dd) popup_call_audio_second_window_t

0xa267,	// (0x00039245) bg_popup_call_pane_cp04

0xa4a4,	// (0x00039482) list_conf_pane

0xa4ac,	// (0x0003948a) popup_call_audio_conf_window_t1

0xa4ba,	// (0x00039498) call_thumbnail_pane_g1

0xa4c2,	// (0x000394a0) bg_pinb_pane_ParamLimits

0xa4c2,	// (0x000394a0) bg_pinb_pane

0xa4d0,	// (0x000394ae) find_pinb_pane

0xa4d9,	// (0x000394b7) listscroll_pinb_pane_ParamLimits

0xa4d9,	// (0x000394b7) listscroll_pinb_pane

0xa4e8,	// (0x000394c6) pinb_bg_pane_g1

0x15c7,	// (0x000305a5) pinb_bg_pane_g2

0x15d3,	// (0x000305b1) pinb_bg_pane_g3

0x15df,	// (0x000305bd) pinb_bg_pane_g4

0x15eb,	// (0x000305c9) pinb_bg_pane_g5

0x15f7,	// (0x000305d5) pinb_bg_pane_g6

0x1602,	// (0x000305e0) pinb_bg_pane_g7

0x160d,	// (0x000305eb) pinb_bg_pane_g8

0x1618,	// (0x000305f6) pinb_bg_pane_g9

0x1622,	// (0x00030600) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0003e0e4) pinb_bg_pane_g

0x163f,	// (0x0003061d) grid_pinb_pane

0x164a,	// (0x00030628) list_pinb_pane

0x1655,	// (0x00030633) scroll_pane_cp01_ParamLimits

0x1655,	// (0x00030633) scroll_pane_cp01

0xa4f2,	// (0x000394d0) find_pinb_pane_g1_ParamLimits

0xa4f2,	// (0x000394d0) find_pinb_pane_g1

0xa50a,	// (0x000394e8) find_pinb_pane_t1

0xa51c,	// (0x000394fa) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0003e0fe) find_pinb_pane_t

0xa531,	// (0x0003950f) input_focus_pane_cp01_ParamLimits

0xa531,	// (0x0003950f) input_focus_pane_cp01

0x1667,	// (0x00030645) cell_pinb_pane_ParamLimits

0x1667,	// (0x00030645) cell_pinb_pane

0x1689,	// (0x00030667) cell_pinb_pane_g1_ParamLimits

0x1689,	// (0x00030667) cell_pinb_pane_g1

0x169d,	// (0x0003067b) cell_pinb_pane_g2_ParamLimits

0x169d,	// (0x0003067b) cell_pinb_pane_g2

0xa53d,	// (0x0003951b) cell_pinb_pane_g3_ParamLimits

0xa53d,	// (0x0003951b) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0003e103) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0003e103) cell_pinb_pane_g

0xa267,	// (0x00039245) grid_highlight_pane_cp01

0x16a9,	// (0x00030687) list_pinb_item_pane_ParamLimits

0x16a9,	// (0x00030687) list_pinb_item_pane

0xa267,	// (0x00039245) list_highlight_pane_cp02

0x16bc,	// (0x0003069a) list_pinb_item_pane_g1_ParamLimits

0x16bc,	// (0x0003069a) list_pinb_item_pane_g1

0x16c9,	// (0x000306a7) list_pinb_item_pane_g2_ParamLimits

0x16c9,	// (0x000306a7) list_pinb_item_pane_g2

0x16d5,	// (0x000306b3) list_pinb_item_pane_g3_ParamLimits

0x16d5,	// (0x000306b3) list_pinb_item_pane_g3

0x16e6,	// (0x000306c4) list_pinb_item_pane_g4_ParamLimits

0x16e6,	// (0x000306c4) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0003e10a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0003e10a) list_pinb_item_pane_g

0x16f2,	// (0x000306d0) list_pinb_item_pane_t1_ParamLimits

0x16f2,	// (0x000306d0) list_pinb_item_pane_t1

0xfe09,	// (0x0002ede7) calc_display_pane

0xfe2e,	// (0x0002ee0c) calc_paper_pane

0xfe51,	// (0x0002ee2f) grid_calc_pane

0xa267,	// (0x00039245) bg_list_pane_cp01

0x1711,	// (0x000306ef) clock_g1

0x1719,	// (0x000306f7) clock_g2

0x0001,

0xf135,	// (0x0003e113) clock_g

0x1721,	// (0x000306ff) clock_t1_ParamLimits

0x1721,	// (0x000306ff) clock_t1

0x1736,	// (0x00030714) clock_t2_ParamLimits

0x1736,	// (0x00030714) clock_t2

0x1748,	// (0x00030726) clock_t3_ParamLimits

0x1748,	// (0x00030726) clock_t3

0x175a,	// (0x00030738) clock_t4_ParamLimits

0x175a,	// (0x00030738) clock_t4

0x176c,	// (0x0003074a) clock_t5_ParamLimits

0x176c,	// (0x0003074a) clock_t5

0x1781,	// (0x0003075f) clock_t6_ParamLimits

0x1781,	// (0x0003075f) clock_t6

0x1793,	// (0x00030771) clock_t7_ParamLimits

0x1793,	// (0x00030771) clock_t7

0x17a5,	// (0x00030783) clock_t8_ParamLimits

0x17a5,	// (0x00030783) clock_t8

0x17b9,	// (0x00030797) clock_t9_ParamLimits

0x17b9,	// (0x00030797) clock_t9

0x0008,

0xf13a,	// (0x0003e118) clock_t_ParamLimits

0xf13a,	// (0x0003e118) clock_t

0xa549,	// (0x00039527) popup_clock_analogue_window_cp02

0xa549,	// (0x00039527) popup_clock_digital_window_cp01

0xa551,	// (0x0003952f) listscroll_help_pane

0xa267,	// (0x00039245) phob_pre_status_pane

0xa55b,	// (0x00039539) grid_qdial_pane

0xa4c2,	// (0x000394a0) listscroll_mce_pane

0xa4c2,	// (0x000394a0) bg_notes_pane

0xa565,	// (0x00039543) list_notes_pane

0x17cf,	// (0x000307ad) scroll_pane_cp06

0xa573,	// (0x00039551) bg_calc_paper_pane

0x17e3,	// (0x000307c1) list_calc_pane

0xa587,	// (0x00039565) bg_calc_display_pane

0xfe7f,	// (0x0002ee5d) calc_display_pane_t1

0xfe91,	// (0x0002ee6f) calc_display_pane_t2

0x17fd,	// (0x000307db) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0003e12b) calc_display_pane_t

0xfea3,	// (0x0002ee81) cell_calc_pane_ParamLimits

0xfea3,	// (0x0002ee81) cell_calc_pane

0xa593,	// (0x00039571) bg_calc_paper_pane_g1

0xa59f,	// (0x0003957d) bg_calc_paper_pane_g2

0xa5ab,	// (0x00039589) bg_calc_paper_pane_g3

0xa5b7,	// (0x00039595) bg_calc_paper_pane_g4

0xa5c3,	// (0x000395a1) bg_calc_paper_pane_g5

0x180f,	// (0x000307ed) bg_calc_paper_pane_g6

0x181d,	// (0x000307fb) bg_calc_paper_pane_g7

0x182b,	// (0x00030809) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0003e132) bg_calc_paper_pane_g

0x183e,	// (0x0003081c) calc_bg_paper_pane_g9

0x1851,	// (0x0003082f) list_calc_item_pane_ParamLimits

0x1851,	// (0x0003082f) list_calc_item_pane

0xa5cf,	// (0x000395ad) list_calc_item_pane_g1

0x1869,	// (0x00030847) list_calc_item_pane_t1_ParamLimits

0x1869,	// (0x00030847) list_calc_item_pane_t1

0xfede,	// (0x0002eebc) list_calc_item_pane_t2_ParamLimits

0xfede,	// (0x0002eebc) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0003e143) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0003e143) list_calc_item_pane_t

0xa5dc,	// (0x000395ba) cell_calc_pane_g1

0xa5e6,	// (0x000395c4) grid_highlight_pane_cp02

0x187b,	// (0x00030859) bg_calc_display_pane_g1

0xff10,	// (0x0002eeee) bg_calc_display_pane_g2

0xa608,	// (0x000395e6) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0003e14d) bg_calc_display_pane_g

0xff1a,	// (0x0002eef8) cell_qdial_pane_ParamLimits

0xff1a,	// (0x0002eef8) cell_qdial_pane

0x1884,	// (0x00030862) cell_qdial_pane_g1_ParamLimits

0x1884,	// (0x00030862) cell_qdial_pane_g1

0x189a,	// (0x00030878) cell_qdial_pane_g2_ParamLimits

0x189a,	// (0x00030878) cell_qdial_pane_g2

0xa611,	// (0x000395ef) cell_qdial_pane_g3_ParamLimits

0xa611,	// (0x000395ef) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0003e154) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0003e154) cell_qdial_pane_g

0x18c1,	// (0x0003089f) cell_qdial_pane_t1_ParamLimits

0x18c1,	// (0x0003089f) cell_qdial_pane_t1

0x18d9,	// (0x000308b7) cell_qdial_pane_t2_ParamLimits

0x18d9,	// (0x000308b7) cell_qdial_pane_t2

0x18ec,	// (0x000308ca) cell_qdial_pane_t3_ParamLimits

0x18ec,	// (0x000308ca) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0003e15d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0003e15d) cell_qdial_pane_t

0xa267,	// (0x00039245) grid_highlight_pane_cp04

0xa61d,	// (0x000395fb) thumbnail_qdial_pane_ParamLimits

0xa61d,	// (0x000395fb) thumbnail_qdial_pane

0xa679,	// (0x00039657) list_help_pane

0xa682,	// (0x00039660) scroll_pane_cp02

0x18ff,	// (0x000308dd) help_list_pane_t1_ParamLimits

0x18ff,	// (0x000308dd) help_list_pane_t1

0x1923,	// (0x00030901) bg_notes_pane_g2

0x192b,	// (0x00030909) bg_notes_pane_g3

0x1933,	// (0x00030911) notes_bg_pane_g1

0x193b,	// (0x00030919) notes_bg_pane_g4

0x1943,	// (0x00030921) notes_bg_pane_g5

0x194b,	// (0x00030929) notes_bg_pane_g6

0x1953,	// (0x00030931) notes_bg_pane_g7

0x195b,	// (0x00030939) notes_bg_pane_g8

0x1963,	// (0x00030941) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0003e17b) notes_bg_pane_g

0x196b,	// (0x00030949) list_notes_text_pane_ParamLimits

0x196b,	// (0x00030949) list_notes_text_pane

0xa68b,	// (0x00039669) list_notes_text_pane_g1

0x1982,	// (0x00030960) list_notes_text_pane_t1

0x1990,	// (0x0003096e) listscroll_cale_week_pane

0x19ba,	// (0x00030998) bg_cale_heading_pane

0x19de,	// (0x000309bc) bg_cale_pane_cp01

0x19fb,	// (0x000309d9) cale_week_corner_pane

0x1a1a,	// (0x000309f8) cale_week_day_heading_pane

0x1a43,	// (0x00030a21) cale_week_scroll_pane_g1

0x1a62,	// (0x00030a40) cale_week_scroll_pane_g2

0x1a7a,	// (0x00030a58) cale_week_scroll_pane_g3

0x1a92,	// (0x00030a70) cale_week_scroll_pane_g4

0x1aaa,	// (0x00030a88) cale_week_scroll_pane_g5

0x1aca,	// (0x00030aa8) cale_week_scroll_pane_g6

0x1aea,	// (0x00030ac8) cale_week_scroll_pane_g7

0x1b0e,	// (0x00030aec) cale_week_scroll_pane_g8

0x1b32,	// (0x00030b10) cale_week_scroll_pane_g9

0x1b4a,	// (0x00030b28) cale_week_scroll_pane_g10

0x1b62,	// (0x00030b40) cale_week_scroll_pane_g11

0x1b7a,	// (0x00030b58) cale_week_scroll_pane_g12

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g13

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g14

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0003e18a) cale_week_scroll_pane_g

0x1be6,	// (0x00030bc4) cale_week_time_pane

0x1c0a,	// (0x00030be8) grid_cale_week_pane

0xa6c0,	// (0x0003969e) scroll_pane_cp08

0x1c3c,	// (0x00030c1a) cell_cale_week_pane_ParamLimits

0x1c3c,	// (0x00030c1a) cell_cale_week_pane

0x1cd8,	// (0x00030cb6) cale_week_day_heading_pane_t1

0x1d02,	// (0x00030ce0) cale_week_day_heading_pane_t2

0x1d31,	// (0x00030d0f) cale_week_day_heading_pane_t3

0x1d60,	// (0x00030d3e) cale_week_day_heading_pane_t4

0x1d8f,	// (0x00030d6d) cale_week_day_heading_pane_t5

0x1dc2,	// (0x00030da0) cale_week_day_heading_pane_t6

0x1df9,	// (0x00030dd7) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003e1ab) cale_week_day_heading_pane_t

0xa6dd,	// (0x000396bb) bg_cale_side_pane

0xff2e,	// (0x0002ef0c) cale_week_time_pane_t1

0xff48,	// (0x0002ef26) cale_week_time_pane_t2

0xff62,	// (0x0002ef40) cale_week_time_pane_t3

0xff7c,	// (0x0002ef5a) cale_week_time_pane_t4

0xff96,	// (0x0002ef74) cale_week_time_pane_t5

0xffb0,	// (0x0002ef8e) cale_week_time_pane_t6

0xffd0,	// (0x0002efae) cale_week_time_pane_t7

0xfff6,	// (0x0002efd4) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003e1ba) cale_week_time_pane_t

0x1e23,	// (0x00030e01) cell_cale_week_pane_g2

0x1e47,	// (0x00030e25) cell_cale_week_pane_g3_ParamLimits

0x1e47,	// (0x00030e25) cell_cale_week_pane_g3

0xa6eb,	// (0x000396c9) grid_highlight_pane_cp07

0xa6f3,	// (0x000396d1) listscroll_gms_pane

0xa6fd,	// (0x000396db) grid_gms_pane

0xa706,	// (0x000396e4) listscroll_gms_pane_g1

0xa70e,	// (0x000396ec) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003e1cb) listscroll_gms_pane_g

0x1e5f,	// (0x00030e3d) scroll_pane_cp010

0x1e6a,	// (0x00030e48) cell_gms_pane_ParamLimits

0x1e6a,	// (0x00030e48) cell_gms_pane

0x1e81,	// (0x00030e5f) cell_gms_pane_g1

0xa716,	// (0x000396f4) cell_gms_pane_g2

0xa71e,	// (0x000396fc) cell_gms_pane_g3

0xa727,	// (0x00039705) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0003e1d0) cell_gms_pane_g

0xa730,	// (0x0003970e) grid_highlight_pane_cp09

0x4670,	// (0x0003364e) phob_pre_status_pane_g1

0x4678,	// (0x00033656) phob_pre_status_pane_g2

0x4680,	// (0x0003365e) phob_pre_status_pane_g3

0x4688,	// (0x00033666) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0003e5bb) phob_pre_status_pane_g

0x4698,	// (0x00033676) phob_pre_status_pane_t1

0x46a8,	// (0x00033686) phob_pre_status_pane_t2

0x46b8,	// (0x00033696) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0003e5c6) phob_pre_status_pane_t

0xa738,	// (0x00039716) bg_list_pane_cp05

0x1e91,	// (0x00030e6f) grid_vorec_pane

0x1e9b,	// (0x00030e79) vorec_t1

0x1ea9,	// (0x00030e87) vorec_t2

0x1eb7,	// (0x00030e95) vorec_t3

0x1ec5,	// (0x00030ea3) vorec_t4

0x149d,	// (0x0003047b) vorec_t5

0x14ab,	// (0x00030489) vorec_t6

0x0004,

0xf1fb,	// (0x0003e1d9) vorec_t

0x14b9,	// (0x00030497) wait_bar_pane_cp01

0xa740,	// (0x0003971e) cell_vorec_pane_ParamLimits

0xa740,	// (0x0003971e) cell_vorec_pane

0x1ee1,	// (0x00030ebf) cell_vorec_pane_g1

0xa267,	// (0x00039245) grid_highlight_pane_cp05

0x1f01,	// (0x00030edf) cams_zoom_pane

0x1f10,	// (0x00030eee) image_vga_pane

0x1f2a,	// (0x00030f08) main_camera_pane_g1

0x1f3c,	// (0x00030f1a) main_camera_pane_g2

0x1f4c,	// (0x00030f2a) main_camera_pane_g3

0x1f60,	// (0x00030f3e) main_camera_pane_g4

0x1f74,	// (0x00030f52) main_camera_pane_g5

0x1f88,	// (0x00030f66) main_camera_pane_g6

0x1f9c,	// (0x00030f7a) main_camera_pane_g7

0x0007,

0xf206,	// (0x0003e1e4) main_camera_pane_g

0x1fb0,	// (0x00030f8e) main_camera_pane_t1

0x1fc6,	// (0x00030fa4) main_camera_pane_t2

0x0001,

0xf217,	// (0x0003e1f5) main_camera_pane_t

0x2004,	// (0x00030fe2) cams_zoom_pane_cp_ParamLimits

0x2004,	// (0x00030fe2) cams_zoom_pane_cp

0x202c,	// (0x0003100a) image_cif_pane_ParamLimits

0x202c,	// (0x0003100a) image_cif_pane

0x2067,	// (0x00031045) image_subqcif_pane

0x2071,	// (0x0003104f) main_video_pane_g1_ParamLimits

0x2071,	// (0x0003104f) main_video_pane_g1

0x2095,	// (0x00031073) main_video_pane_g2_ParamLimits

0x2095,	// (0x00031073) main_video_pane_g2

0x20cb,	// (0x000310a9) main_video_pane_g3_ParamLimits

0x20cb,	// (0x000310a9) main_video_pane_g3

0x20f9,	// (0x000310d7) main_video_pane_g4_ParamLimits

0x20f9,	// (0x000310d7) main_video_pane_g4

0x2127,	// (0x00031105) main_video_pane_g5_ParamLimits

0x2127,	// (0x00031105) main_video_pane_g5

0xa761,	// (0x0003973f) main_video_pane_g6_ParamLimits

0xa761,	// (0x0003973f) main_video_pane_g6

0x0006,

0xf21c,	// (0x0003e1fa) main_video_pane_g_ParamLimits

0xf21c,	// (0x0003e1fa) main_video_pane_g

0x2150,	// (0x0003112e) main_video_pane_t1_ParamLimits

0x2150,	// (0x0003112e) main_video_pane_t1

0xa77b,	// (0x00039759) cams_zoom_pane_g1

0xa784,	// (0x00039762) cams_zoom_pane_g2

0xa78d,	// (0x0003976b) cams_zoom_pane_g3

0xa796,	// (0x00039774) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0003e209) cams_zoom_pane_g

0x21ad,	// (0x0003118b) grid_cams_pane

0x21c7,	// (0x000311a5) linegrid_cams_pane

0x21d9,	// (0x000311b7) cell_cams_pane_ParamLimits

0x21d9,	// (0x000311b7) cell_cams_pane

0xa79f,	// (0x0003977d) cams_burst_image_pane

0xa7a7,	// (0x00039785) cell_cams_pane_g1

0xa267,	// (0x00039245) grid_highlight_pane_cp03

0xa5dc,	// (0x000395ba) mp_bg_pane_g1

0xa267,	// (0x00039245) bg_list_pane_cp03

0xc51a,	// (0x0003b4f8) bg_mp_pane

0xc522,	// (0x0003b500) grid_mp_pane

0xc52a,	// (0x0003b508) media_player_g1

0xc534,	// (0x0003b512) media_player_t1

0xc542,	// (0x0003b520) media_player_t2

0xc550,	// (0x0003b52e) media_player_t3

0xc55e,	// (0x0003b53c) media_player_t4

0xc56c,	// (0x0003b54a) media_player_t5

0xc57a,	// (0x0003b558) media_player_t6

0xc588,	// (0x0003b566) media_player_t7

0x0006,

0xf5c7,	// (0x0003e5a5) media_player_t

0xc596,	// (0x0003b574) wait_bar_pane_cp02

0xf5ac,	// (0x0003e58a) main_usb_pane_t

0x4667,	// (0x00033645) cell_mp_pane

0xa5dc,	// (0x000395ba) cell_mp_pane_g1

0xa267,	// (0x00039245) grid_highlight_pane_cp06

0xa7af,	// (0x0003978d) grid_skin_colour_pane

0xa7b7,	// (0x00039795) list_highlight_pane_cp03

0x2312,	// (0x000312f0) skin_g1

0xa7bf,	// (0x0003979d) skin_t1

0xa7ce,	// (0x000397ac) skin_t2

0x0001,

0xf260,	// (0x0003e23e) skin_t

0x231c,	// (0x000312fa) cell_skin_colour_pane_ParamLimits

0x231c,	// (0x000312fa) cell_skin_colour_pane

0xa7dc,	// (0x000397ba) cell_skin_colour_pane_g1

0x238f,	// (0x0003136d) call_video_g1_ParamLimits

0x238f,	// (0x0003136d) call_video_g1

0x23ab,	// (0x00031389) call_video_g2_ParamLimits

0x23ab,	// (0x00031389) call_video_g2

0x0001,

0xf265,	// (0x0003e243) call_video_g_ParamLimits

0xf265,	// (0x0003e243) call_video_g

0x23f0,	// (0x000313ce) call_video_uplink_pane_cp1_ParamLimits

0x23f0,	// (0x000313ce) call_video_uplink_pane_cp1

0xa7ee,	// (0x000397cc) call_video_uplink_pane_cp2

0x2491,	// (0x0003146f) video_down_crop_pane_ParamLimits

0x2491,	// (0x0003146f) video_down_crop_pane

0x257a,	// (0x00031558) video_down_pane_ParamLimits

0x257a,	// (0x00031558) video_down_pane

0xa7f6,	// (0x000397d4) video_down_subqcif_pane_ParamLimits

0xa7f6,	// (0x000397d4) video_down_subqcif_pane

0xa810,	// (0x000397ee) video_down_subqcif_pane_cp_ParamLimits

0xa810,	// (0x000397ee) video_down_subqcif_pane_cp

0xa838,	// (0x00039816) im_reading_pane_ParamLimits

0xa838,	// (0x00039816) im_reading_pane

0x2685,	// (0x00031663) im_writing_pane_ParamLimits

0x2685,	// (0x00031663) im_writing_pane

0x26a3,	// (0x00031681) im_reading_pane_t1

0xa852,	// (0x00039830) list_im_pane

0xa863,	// (0x00039841) scroll_pane_cp07

0x26e2,	// (0x000316c0) im_writing_pane_t1_ParamLimits

0x26e2,	// (0x000316c0) im_writing_pane_t1

0xa87c,	// (0x0003985a) im_writing_pane_t2_ParamLimits

0xa87c,	// (0x0003985a) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0003e24d) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0003e24d) im_writing_pane_t

0xa267,	// (0x00039245) input_focus_pane_cp04

0xa267,	// (0x00039245) input_focus_pane_cp05

0x26f7,	// (0x000316d5) list_im_single_pane_ParamLimits

0x26f7,	// (0x000316d5) list_im_single_pane

0x2710,	// (0x000316ee) list_single_im_pane_t1

0x4627,	// (0x00033605) blid_accuracy_pane

0x462f,	// (0x0003360d) blid_compass_pane

0x4639,	// (0x00033617) main_location_t1

0x4649,	// (0x00033627) main_location_t2

0x4659,	// (0x00033637) main_location_t3

0x0002,

0xf5d6,	// (0x0003e5b4) main_location_t

0xa267,	// (0x00039245) aid_levels_location

0xa5dc,	// (0x000395ba) blid_accuracy_pane_g1

0xa5dc,	// (0x000395ba) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0003e2af) blid_accuracy_pane_g

0xa8c4,	// (0x000398a2) wml_content_pane

0xa902,	// (0x000398e0) wml_button_pane_ParamLimits

0xa902,	// (0x000398e0) wml_button_pane

0x271f,	// (0x000316fd) wml_list_single_large_pane_ParamLimits

0x271f,	// (0x000316fd) wml_list_single_large_pane

0x2738,	// (0x00031716) wml_list_single_medium_pane_ParamLimits

0x2738,	// (0x00031716) wml_list_single_medium_pane

0x2752,	// (0x00031730) wml_list_single_small_pane_ParamLimits

0x2752,	// (0x00031730) wml_list_single_small_pane

0xa916,	// (0x000398f4) wml_selection_box_pane_ParamLimits

0xa916,	// (0x000398f4) wml_selection_box_pane

0xa929,	// (0x00039907) wml_list_single_pane_t1

0xa938,	// (0x00039916) wml_list_single_medium_pane_t1

0xa947,	// (0x00039925) wml_list_single_large_pane_t1

0xa956,	// (0x00039934) input_focus_pane_cp02_ParamLimits

0xa956,	// (0x00039934) input_focus_pane_cp02

0xa969,	// (0x00039947) wml_selection_box_pane_g1

0xa972,	// (0x00039950) wml_selection_box_pane_t1_ParamLimits

0xa972,	// (0x00039950) wml_selection_box_pane_t1

0xa4c2,	// (0x000394a0) bg_wml_button_pane_ParamLimits

0xa4c2,	// (0x000394a0) bg_wml_button_pane

0xa98a,	// (0x00039968) wml_button_pane_g1

0xa992,	// (0x00039970) wml_button_pane_t1

0xa98a,	// (0x00039968) wml_button_bg_pane_g1

0xa9a2,	// (0x00039980) wml_button_bg_pane_g2

0xa9aa,	// (0x00039988) wml_button_bg_pane_g3

0xa9b2,	// (0x00039990) wml_button_bg_pane_g4

0xa9ba,	// (0x00039998) wml_button_bg_pane_g5

0xa9c2,	// (0x000399a0) wml_button_bg_pane_g6

0xa9ca,	// (0x000399a8) wml_button_bg_pane_g7

0xa9d2,	// (0x000399b0) wml_button_bg_pane_g8

0xa9da,	// (0x000399b8) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0003e252) wml_button_bg_pane_g

0x2771,	// (0x0003174f) bg_list_pane_cp02

0xa9e2,	// (0x000399c0) mce_header_pane_ParamLimits

0xa9e2,	// (0x000399c0) mce_header_pane

0xa9f8,	// (0x000399d6) mce_icon_pane

0xa9f8,	// (0x000399d6) mce_image_pane

0xaa01,	// (0x000399df) mce_text_pane_ParamLimits

0xaa01,	// (0x000399df) mce_text_pane

0x277b,	// (0x00031759) scroll_pane_cp03

0xa8fa,	// (0x000398d8) scroll_pane_cp04

0xaa14,	// (0x000399f2) scroll_pane_cp05_ParamLimits

0xaa14,	// (0x000399f2) scroll_pane_cp05

0x2785,	// (0x00031763) mce_header_field_pane_ParamLimits

0x2785,	// (0x00031763) mce_header_field_pane

0x279e,	// (0x0003177c) mce_header_field_pane_2_ParamLimits

0x279e,	// (0x0003177c) mce_header_field_pane_2

0x27b4,	// (0x00031792) mce_header_field_pane_3

0x27bc,	// (0x0003179a) list_single_mce_message_pane_ParamLimits

0x27bc,	// (0x0003179a) list_single_mce_message_pane

0x27d8,	// (0x000317b6) list_single_mce_smart_pane_ParamLimits

0x27d8,	// (0x000317b6) list_single_mce_smart_pane

0xaa20,	// (0x000399fe) input_focus_pane_cp03

0xaa29,	// (0x00039a07) list_header_data_pane

0x27ff,	// (0x000317dd) mce_header_field_pane_t1

0x280f,	// (0x000317ed) list_single_mce_header_pane_ParamLimits

0x280f,	// (0x000317ed) list_single_mce_header_pane

0xaa31,	// (0x00039a0f) list_single_mce_header_pane_t1

0xaa40,	// (0x00039a1e) list_single_mce_message_pane_g1

0xaa48,	// (0x00039a26) list_single_mce_message_pane_t1

0x2849,	// (0x00031827) bg_cale_heading_pane_cp01_ParamLimits

0x2849,	// (0x00031827) bg_cale_heading_pane_cp01

0xaa56,	// (0x00039a34) bg_cale_pane_cp02_ParamLimits

0xaa56,	// (0x00039a34) bg_cale_pane_cp02

0x289b,	// (0x00031879) cale_month_corner_pane

0x28ba,	// (0x00031898) cale_month_day_heading_pane_ParamLimits

0x28ba,	// (0x00031898) cale_month_day_heading_pane

0x2924,	// (0x00031902) cale_month_pane_g1_ParamLimits

0x2924,	// (0x00031902) cale_month_pane_g1

0x296b,	// (0x00031949) cale_month_pane_g2_ParamLimits

0x296b,	// (0x00031949) cale_month_pane_g2

0x29a7,	// (0x00031985) cale_month_pane_g3_ParamLimits

0x29a7,	// (0x00031985) cale_month_pane_g3

0x29fb,	// (0x000319d9) cale_month_pane_g4_ParamLimits

0x29fb,	// (0x000319d9) cale_month_pane_g4

0x2a4f,	// (0x00031a2d) cale_month_pane_g5_ParamLimits

0x2a4f,	// (0x00031a2d) cale_month_pane_g5

0x2aab,	// (0x00031a89) cale_month_pane_g6_ParamLimits

0x2aab,	// (0x00031a89) cale_month_pane_g6

0x2b13,	// (0x00031af1) cale_month_pane_g7_ParamLimits

0x2b13,	// (0x00031af1) cale_month_pane_g7

0x2b7f,	// (0x00031b5d) cale_month_pane_g8_ParamLimits

0x2b7f,	// (0x00031b5d) cale_month_pane_g8

0x2beb,	// (0x00031bc9) cale_month_pane_g9_ParamLimits

0x2beb,	// (0x00031bc9) cale_month_pane_g9

0x2c4f,	// (0x00031c2d) cale_month_pane_g10_ParamLimits

0x2c4f,	// (0x00031c2d) cale_month_pane_g10

0x2ca1,	// (0x00031c7f) cale_month_pane_g11_ParamLimits

0x2ca1,	// (0x00031c7f) cale_month_pane_g11

0x2cf3,	// (0x00031cd1) cale_month_pane_g12_ParamLimits

0x2cf3,	// (0x00031cd1) cale_month_pane_g12

0x2d4b,	// (0x00031d29) cale_month_pane_g13_ParamLimits

0x2d4b,	// (0x00031d29) cale_month_pane_g13

0x000c,

0xf287,	// (0x0003e265) cale_month_pane_g_ParamLimits

0xf287,	// (0x0003e265) cale_month_pane_g

0x2da3,	// (0x00031d81) cale_month_week_pane

0x2dc7,	// (0x00031da5) grid_cale_month_pane_ParamLimits

0x2dc7,	// (0x00031da5) grid_cale_month_pane

0x2e28,	// (0x00031e06) cale_month_day_heading_pane_t1

0x2eae,	// (0x00031e8c) cale_month_day_heading_pane_t2

0x2f27,	// (0x00031f05) cale_month_day_heading_pane_t3

0x2fa0,	// (0x00031f7e) cale_month_day_heading_pane_t4

0x3021,	// (0x00031fff) cale_month_day_heading_pane_t5

0x30aa,	// (0x00032088) cale_month_day_heading_pane_t6

0x313b,	// (0x00032119) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0003e280) cale_month_day_heading_pane_t

0xa6dd,	// (0x000396bb) bg_cale_side_pane_cp01

0x31cc,	// (0x000321aa) cale_month_week_pane_t1

0x31e5,	// (0x000321c3) cale_month_week_pane_t2

0x31fe,	// (0x000321dc) cale_month_week_pane_t3

0x3217,	// (0x000321f5) cale_month_week_pane_t4

0x3230,	// (0x0003220e) cale_month_week_pane_t5

0x3249,	// (0x00032227) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0003e28f) cale_month_week_pane_t

0x326e,	// (0x0003224c) cell_cale_month_pane_ParamLimits

0x326e,	// (0x0003224c) cell_cale_month_pane

0x33e2,	// (0x000323c0) cell_cale_month_pane_g1

0x001c,	// (0x0002effa) cell_cale_month_pane_t1_ParamLimits

0x001c,	// (0x0002effa) cell_cale_month_pane_t1

0xa6eb,	// (0x000396c9) grid_highlight_pane_cp08

0xa5dc,	// (0x000395ba) main_smil_g1

0x33ee,	// (0x000323cc) smil_status_pane

0xaa95,	// (0x00039a73) smil_text_pane

0xc438,	// (0x0003b416) bg_popup_call3_rect_pane_g8

0xc440,	// (0x0003b41e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0003e548) bg_popup_call3_rect_pane_g

0xc69e,	// (0x0003b67c) smil_status_volume_pane_g1

0xaa9f,	// (0x00039a7d) smil_status_pane_t1

0x49b3,	// (0x00033991) volume_smil_pane

0xaab6,	// (0x00039a94) list_smil_text_pane

0x3403,	// (0x000323e1) scroll_pane_cp011

0x340e,	// (0x000323ec) smil_text_list_pane_t1_ParamLimits

0x340e,	// (0x000323ec) smil_text_list_pane_t1

0x3459,	// (0x00032437) aid_volume_smil_ParamLimits

0x3459,	// (0x00032437) aid_volume_smil

0xa5dc,	// (0x000395ba) smil_volume_pane_g1

0xa5dc,	// (0x000395ba) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0003e2af) smil_volume_pane_g

0x1990,	// (0x0003096e) listscroll_cale_day_pane

0xaac0,	// (0x00039a9e) bg_cale_pane

0xaad8,	// (0x00039ab6) list_cale_pane

0xaafb,	// (0x00039ad9) scroll_pane_cp09

0xab0c,	// (0x00039aea) cale_bg_pane_g1

0xab14,	// (0x00039af2) cale_bg_pane_g2

0xab1c,	// (0x00039afa) cale_bg_pane_g3

0xab24,	// (0x00039b02) cale_bg_pane_g4

0xab2c,	// (0x00039b0a) cale_bg_pane_g5

0xab34,	// (0x00039b12) cale_bg_pane_g6

0xab3c,	// (0x00039b1a) cale_bg_pane_g7

0xab44,	// (0x00039b22) cale_bg_pane_g8

0xab4c,	// (0x00039b2a) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0003e2b4) cale_bg_pane_g

0x3483,	// (0x00032461) list_cale_time_pane_ParamLimits

0x3483,	// (0x00032461) list_cale_time_pane

0xab54,	// (0x00039b32) list_cale_time_pane_g1_ParamLimits

0xab54,	// (0x00039b32) list_cale_time_pane_g1

0xab60,	// (0x00039b3e) list_cale_time_pane_g2_ParamLimits

0xab60,	// (0x00039b3e) list_cale_time_pane_g2

0x349d,	// (0x0003247b) list_cale_time_pane_g3_ParamLimits

0x349d,	// (0x0003247b) list_cale_time_pane_g3

0x34ab,	// (0x00032489) list_cale_time_pane_g4_ParamLimits

0x34ab,	// (0x00032489) list_cale_time_pane_g4

0x34b9,	// (0x00032497) list_cale_time_pane_g5_ParamLimits

0x34b9,	// (0x00032497) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0003e2c7) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0003e2c7) list_cale_time_pane_g

0xab7a,	// (0x00039b58) list_cale_time_pane_t1_ParamLimits

0xab7a,	// (0x00039b58) list_cale_time_pane_t1

0xaba2,	// (0x00039b80) list_cale_time_pane_t2_ParamLimits

0xaba2,	// (0x00039b80) list_cale_time_pane_t2

0x38cf,	// (0x000328ad) aid_blid_cardinal_pane

0x3911,	// (0x000328ef) compass_pane_t4

0xabca,	// (0x00039ba8) list_cale_time_pane_t4_ParamLimits

0xabca,	// (0x00039ba8) list_cale_time_pane_t4

0x391f,	// (0x000328fd) compass_pane_t5

0x392f,	// (0x0003290d) compass_pane_t6

0x393d,	// (0x0003291b) compass_pane_t7

0xb042,	// (0x0003a020) navi_pane_cc_t1

0xb249,	// (0x0003a227) aid_phob_thumbnail_center_pane

0x3fea,	// (0x00032fc8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0003e2d4) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0003e2d4) list_cale_time_pane_t

0x9ebe,	// (0x00038e9c) bg_popup_window_pane_cp02_ParamLimits

0x9ebe,	// (0x00038e9c) bg_popup_window_pane_cp02

0xabf2,	// (0x00039bd0) heading_pane_cp01_ParamLimits

0xabf2,	// (0x00039bd0) heading_pane_cp01

0xabfe,	// (0x00039bdc) loc_req_pane_ParamLimits

0xabfe,	// (0x00039bdc) loc_req_pane

0xac0e,	// (0x00039bec) loc_type_pane_ParamLimits

0xac0e,	// (0x00039bec) loc_type_pane

0xac20,	// (0x00039bfe) loc_type_pane_t1_ParamLimits

0xac20,	// (0x00039bfe) loc_type_pane_t1

0xac32,	// (0x00039c10) loc_type_pane_t2_ParamLimits

0xac32,	// (0x00039c10) loc_type_pane_t2

0xac44,	// (0x00039c22) loc_type_pane_t3_ParamLimits

0xac44,	// (0x00039c22) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0003e2db) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0003e2db) loc_type_pane_t

0xac56,	// (0x00039c34) list_loc_req_pane

0xac60,	// (0x00039c3e) scroll_pane_cp012

0x34c7,	// (0x000324a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x34c7,	// (0x000324a5) list_single_loc_request_popup_menu_pane

0xac6b,	// (0x00039c49) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac6b,	// (0x00039c49) list_single_loc_request_popup_menu_pane_g1

0xac77,	// (0x00039c55) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac77,	// (0x00039c55) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0003e2e2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0003e2e2) list_single_loc_request_popup_menu_pane_g

0xac83,	// (0x00039c61) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac83,	// (0x00039c61) list_single_loc_request_popup_menu_pane_t1

0xa4c2,	// (0x000394a0) bg_popup_window_pane_cp03_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_window_pane_cp03

0xb0ff,	// (0x0003a0dd) heading_loc_req_pane_ParamLimits

0xb0ff,	// (0x0003a0dd) heading_loc_req_pane

0x34d4,	// (0x000324b2) popup_dyc_status_message_window_g1_ParamLimits

0x34d4,	// (0x000324b2) popup_dyc_status_message_window_g1

0x34e8,	// (0x000324c6) popup_dyc_status_message_window_t1_ParamLimits

0x34e8,	// (0x000324c6) popup_dyc_status_message_window_t1

0x34fd,	// (0x000324db) popup_dyc_status_message_window_t2_ParamLimits

0x34fd,	// (0x000324db) popup_dyc_status_message_window_t2

0x3512,	// (0x000324f0) popup_dyc_status_message_window_t3_ParamLimits

0x3512,	// (0x000324f0) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0003e2e7) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0003e2e7) popup_dyc_status_message_window_t

0xa267,	// (0x00039245) bg_heading_pane_cp01

0xac99,	// (0x00039c77) heading_loc_req_pane_g1

0xaca1,	// (0x00039c7f) heading_loc_req_pane_g2

0xaca9,	// (0x00039c87) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0003e2ee) heading_loc_req_pane_g

0xacb1,	// (0x00039c8f) heading_loc_req_pane_t1

0xacc1,	// (0x00039c9f) bg_popup_sub_pane_cp01_ParamLimits

0xacc1,	// (0x00039c9f) bg_popup_sub_pane_cp01

0xaccf,	// (0x00039cad) popup_cale_events_window_g1_ParamLimits

0xaccf,	// (0x00039cad) popup_cale_events_window_g1

0xacef,	// (0x00039ccd) popup_cale_events_window_g2_ParamLimits

0xacef,	// (0x00039ccd) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0003e322) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0003e322) popup_cale_events_window_g

0xad0f,	// (0x00039ced) popup_cale_events_window_t1_ParamLimits

0xad0f,	// (0x00039ced) popup_cale_events_window_t1

0xad21,	// (0x00039cff) popup_cale_events_window_t2_ParamLimits

0xad21,	// (0x00039cff) popup_cale_events_window_t2

0xad5f,	// (0x00039d3d) popup_cale_events_window_t3_ParamLimits

0xad5f,	// (0x00039d3d) popup_cale_events_window_t3

0xad99,	// (0x00039d77) popup_cale_events_window_t4_ParamLimits

0xad99,	// (0x00039d77) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0003e327) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0003e327) popup_cale_events_window_t

0x360b,	// (0x000325e9) call_type_pane

0x361b,	// (0x000325f9) popup_call_status_window_g1

0x362f,	// (0x0003260d) popup_call_status_window_g2

0x3643,	// (0x00032621) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0003e330) popup_call_status_window_g

0xadcf,	// (0x00039dad) call_type_pane_g1

0xadd8,	// (0x00039db6) call_type_pane_g2

0x0001,

0xf359,	// (0x0003e337) call_type_pane_g

0xa267,	// (0x00039245) bg_popup_sub_pane_cp02

0xade1,	// (0x00039dbf) listscroll_popup_wml_pane

0xade9,	// (0x00039dc7) list_wml_pane

0xadf3,	// (0x00039dd1) scroll_pane_cp013

0xadfe,	// (0x00039ddc) list_single_graphic_popup_wml_pane_ParamLimits

0xadfe,	// (0x00039ddc) list_single_graphic_popup_wml_pane

0xa5dc,	// (0x000395ba) list_single_graphic_popup_wml_pane_g1

0xae12,	// (0x00039df0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0003e33c) list_single_graphic_popup_wml_pane_g

0xae1a,	// (0x00039df8) list_single_graphic_popup_wml_pane_t1

0xae30,	// (0x00039e0e) aid_call_pane

0xa4ba,	// (0x00039498) popup_clock_analogue_window_g1

0xa4ba,	// (0x00039498) popup_clock_analogue_window_g2

0x3653,	// (0x00032631) popup_clock_analogue_window_g3

0x3653,	// (0x00032631) popup_clock_analogue_window_g4

0xa5dc,	// (0x000395ba) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0003e341) popup_clock_analogue_window_g

0x365b,	// (0x00032639) popup_clock_analogue_window_t1

0x3669,	// (0x00032647) clock_digital_number_pane_ParamLimits

0x3669,	// (0x00032647) clock_digital_number_pane

0x3675,	// (0x00032653) clock_digital_number_pane_cp02_ParamLimits

0x3675,	// (0x00032653) clock_digital_number_pane_cp02

0x3681,	// (0x0003265f) clock_digital_number_pane_cp03_ParamLimits

0x3681,	// (0x0003265f) clock_digital_number_pane_cp03

0x368d,	// (0x0003266b) clock_digital_number_pane_cp04_ParamLimits

0x368d,	// (0x0003266b) clock_digital_number_pane_cp04

0x3699,	// (0x00032677) clock_digital_separator_pane_ParamLimits

0x3699,	// (0x00032677) clock_digital_separator_pane

0x36a5,	// (0x00032683) popup_clock_digital_window_t1

0xa5dc,	// (0x000395ba) clock_digital_number_pane_g1

0xa5dc,	// (0x000395ba) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0003e2af) clock_digital_number_pane_g

0xa5dc,	// (0x000395ba) clock_digital_separator_pane_g1

0xa5dc,	// (0x000395ba) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0003e2af) clock_digital_separator_pane_g

0xa267,	// (0x00039245) bg_popup_window_pane_cp04

0xae38,	// (0x00039e16) heading_pane_cp03

0xae40,	// (0x00039e1e) listscroll_popup_gms_pane

0xae48,	// (0x00039e26) grid_large_graphic_popup_pane

0xae52,	// (0x00039e30) listscroll_popup_gms_pane_g1

0xae5a,	// (0x00039e38) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0003e34c) listscroll_popup_gms_pane_g

0xa8fa,	// (0x000398d8) scroll_pane_cp014

0x36c2,	// (0x000326a0) cell_large_graphic_popup_pane_ParamLimits

0x36c2,	// (0x000326a0) cell_large_graphic_popup_pane

0x36da,	// (0x000326b8) cell_large_graphic_popup_pane_g1_ParamLimits

0x36da,	// (0x000326b8) cell_large_graphic_popup_pane_g1

0xae62,	// (0x00039e40) cell_large_graphic_popup_pane_g2_ParamLimits

0xae62,	// (0x00039e40) cell_large_graphic_popup_pane_g2

0xae6e,	// (0x00039e4c) cell_large_graphic_popup_pane_g3_ParamLimits

0xae6e,	// (0x00039e4c) cell_large_graphic_popup_pane_g3

0xae7b,	// (0x00039e59) cell_large_graphic_popup_pane_g4_ParamLimits

0xae7b,	// (0x00039e59) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0003e351) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0003e351) cell_large_graphic_popup_pane_g

0xae8b,	// (0x00039e69) grid_highlight_pane_cp010

0xa5dc,	// (0x000395ba) bg_popup_call_pane_g1

0xae95,	// (0x00039e73) list_single_graphic_popup_conf_pane_ParamLimits

0xae95,	// (0x00039e73) list_single_graphic_popup_conf_pane

0xaea7,	// (0x00039e85) list_highlight_pane_cp01

0xaeb0,	// (0x00039e8e) list_single_graphic_popup_conf_pane_g1

0xaeb8,	// (0x00039e96) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0003e35a) list_single_graphic_popup_conf_pane_g

0xaec0,	// (0x00039e9e) list_single_graphic_popup_conf_pane_t1

0xaece,	// (0x00039eac) linegrid_cams_pane_g1

0x36e6,	// (0x000326c4) linegrid_cams_pane_g2

0xa71e,	// (0x000396fc) linegrid_cams_pane_g3

0xaed7,	// (0x00039eb5) linegrid_cams_pane_g4

0x36ef,	// (0x000326cd) linegrid_cams_pane_g5

0x36f8,	// (0x000326d6) linegrid_cams_pane_g6

0xa727,	// (0x00039705) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0003e35f) linegrid_cams_pane_g

0xaee0,	// (0x00039ebe) popup_clock_analogue_window

0xaee0,	// (0x00039ebe) popup_clock_digital_window

0xa267,	// (0x00039245) popup_phob_thumbnail_window

0xa5dc,	// (0x000395ba) call_video_uplink_pane_g1

0xaee9,	// (0x00039ec7) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0003e36e) call_video_uplink_pane_g

0xaef1,	// (0x00039ecf) video_uplink_pane

0xaef9,	// (0x00039ed7) mce_image_pane_g1

0x3703,	// (0x000326e1) mce_image_pane_g2

0x370d,	// (0x000326eb) mce_image_pane_g3

0x3717,	// (0x000326f5) mce_image_pane_g4

0x371f,	// (0x000326fd) mce_image_pane_g5

0x0004,

0xf395,	// (0x0003e373) mce_image_pane_g

0xaf03,	// (0x00039ee1) control_top_pane_stacon_cp01_ParamLimits

0xaf03,	// (0x00039ee1) control_top_pane_stacon_cp01

0xaf17,	// (0x00039ef5) uni_indicator_pane_stacon_cp01_ParamLimits

0xaf17,	// (0x00039ef5) uni_indicator_pane_stacon_cp01

0xaf28,	// (0x00039f06) bg_popup_sub_pane_cp03

0x3727,	// (0x00032705) chi_dic_find_pane

0x372f,	// (0x0003270d) listscroll_chi_dic_pane

0x3738,	// (0x00032716) main_pane_chidic_g1

0x374b,	// (0x00032729) chi_dic_find_pane_t1

0xaf32,	// (0x00039f10) find_chidic_pane

0xaf3b,	// (0x00039f19) chi_dic_list_pane_ParamLimits

0xaf3b,	// (0x00039f19) chi_dic_list_pane

0xaf4c,	// (0x00039f2a) scroll_pane_cp020

0x3759,	// (0x00032737) find_chidic_pane_t1

0xa267,	// (0x00039245) input_focus_pane_cp06

0x3768,	// (0x00032746) list_chi_dic_pane_ParamLimits

0x3768,	// (0x00032746) list_chi_dic_pane

0x377a,	// (0x00032758) list_chi_dic_pane_t1_ParamLimits

0x377a,	// (0x00032758) list_chi_dic_pane_t1

0xa267,	// (0x00039245) list_highlight_pane_cp020

0xaf54,	// (0x00039f32) bg_cale_heading_pane_g1

0x378d,	// (0x0003276b) bg_cale_heading_pane_g2

0x3795,	// (0x00032773) bg_cale_heading_pane_g3

0x379d,	// (0x0003277b) bg_cale_heading_pane_g4

0x37a7,	// (0x00032785) bg_cale_heading_pane_g5

0x37b1,	// (0x0003278f) bg_cale_heading_pane_g6

0x37b9,	// (0x00032797) bg_cale_heading_pane_g7

0x37c1,	// (0x0003279f) bg_cale_heading_pane_g8

0x37cb,	// (0x000327a9) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0003e37e) bg_cale_heading_pane_g

0xaf54,	// (0x00039f32) bg_cale_side_pane_g1

0x37d5,	// (0x000327b3) bg_cale_side_pane_g2

0x37df,	// (0x000327bd) bg_cale_side_pane_g3

0x37e9,	// (0x000327c7) bg_cale_side_pane_g4

0x37f3,	// (0x000327d1) bg_cale_side_pane_g5

0x37fd,	// (0x000327db) bg_cale_side_pane_g6

0x3807,	// (0x000327e5) bg_cale_side_pane_g7

0x3811,	// (0x000327ef) bg_cale_side_pane_g8

0x3819,	// (0x000327f7) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0003e391) bg_cale_side_pane_g

0x3821,	// (0x000327ff) popup_call_status_window_ParamLimits

0x3821,	// (0x000327ff) popup_call_status_window

0xaf5c,	// (0x00039f3a) stacon_top_pane

0xaf64,	// (0x00039f42) status_pane_ParamLimits

0xaf64,	// (0x00039f42) status_pane

0xaf79,	// (0x00039f57) status_small_pane

0xaf81,	// (0x00039f5f) control_pane

0xa267,	// (0x00039245) stacon_bottom_pane

0xaf89,	// (0x00039f67) list_single_mce_smart_pane_t1_ParamLimits

0xaf89,	// (0x00039f67) list_single_mce_smart_pane_t1

0xaf9c,	// (0x00039f7a) list_single_mce_smart_pane_t2_ParamLimits

0xaf9c,	// (0x00039f7a) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0003e3a4) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0003e3a4) list_single_mce_smart_pane_t

0x386e,	// (0x0003284c) compass_pane

0x3879,	// (0x00032857) main_location2_pane_t1

0x388f,	// (0x0003286d) main_location2_pane_t2

0x38a5,	// (0x00032883) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0003e3a9) main_location2_pane_t

0xafbb,	// (0x00039f99) compass_pane_g1_ParamLimits

0xafbb,	// (0x00039f99) compass_pane_g1

0x38f3,	// (0x000328d1) compass_pane_t1

0x3902,	// (0x000328e0) compass_pane_t2

0x0005,

0xf3d4,	// (0x0003e3b2) compass_pane_t

0x394d,	// (0x0003292b) text_secondary_cp61

0xb039,	// (0x0003a017) navi_pane_cams_g5

0xb0b5,	// (0x0003a093) navi_pane_im_t1

0xb0c3,	// (0x0003a0a1) navi_pane_mp_g1_ParamLimits

0xb0c3,	// (0x0003a0a1) navi_pane_mp_g1

0xb0d7,	// (0x0003a0b5) navi_pane_mp_g2_ParamLimits

0xb0d7,	// (0x0003a0b5) navi_pane_mp_g2

0xb10b,	// (0x0003a0e9) navi_pane_mp_g3_ParamLimits

0xb10b,	// (0x0003a0e9) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0003e3c6) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0003e3c6) navi_pane_mp_g

0xb117,	// (0x0003a0f5) navi_pane_mp_t1

0xb125,	// (0x0003a103) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0003e3cd) navi_pane_mp_t

0xb192,	// (0x0003a170) navi_pane_vt_g1

0xb117,	// (0x0003a0f5) navi_pane_vt_t1

0xb19a,	// (0x0003a178) navi_slider_pane

0xa738,	// (0x00039716) zooming_pane

0xb1aa,	// (0x0003a188) navi_slider_pane_g1

0x399e,	// (0x0003297c) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0003e3d4) navi_slider_pane_g

0xb1ce,	// (0x0003a1ac) aid_levels_zoom

0xb1d6,	// (0x0003a1b4) zooming_pane_g1

0xb1de,	// (0x0003a1bc) zooming_pane_g2

0xb1de,	// (0x0003a1bc) zooming_pane_g3

0x0002,

0xf405,	// (0x0003e3e3) zooming_pane_g

0xb1e6,	// (0x0003a1c4) level_10_zoom

0xb1ef,	// (0x0003a1cd) level_11_zoom

0xb1f8,	// (0x0003a1d6) level_1_zoom

0xb201,	// (0x0003a1df) level_2_zoom

0xb20a,	// (0x0003a1e8) level_3_zoom

0xb213,	// (0x0003a1f1) level_4_zoom

0xb21c,	// (0x0003a1fa) level_5_zoom

0xb225,	// (0x0003a203) level_6_zoom

0xb22e,	// (0x0003a20c) level_7_zoom

0xb237,	// (0x0003a215) level_8_zoom

0xb240,	// (0x0003a21e) level_9_zoom

0xb251,	// (0x0003a22f) popup_phob_thumbnail_window_g1

0xb259,	// (0x0003a237) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0003e3ea) popup_phob_thumbnail_window_g

0xc59e,	// (0x0003b57c) level_1_location

0xc5a6,	// (0x0003b584) level_2_location

0xc5ae,	// (0x0003b58c) level_3_location

0xc5b6,	// (0x0003b594) level_4_location

0xa738,	// (0x00039716) level_5_location

0x39b0,	// (0x0003298e) mce_icon_pane_g1

0x39ba,	// (0x00032998) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0003e3ef) mce_icon_pane_g

0x39c2,	// (0x000329a0) main_mup_pane_g1_ParamLimits

0x39c2,	// (0x000329a0) main_mup_pane_g1

0x39d8,	// (0x000329b6) main_mup_pane_g2_ParamLimits

0x39d8,	// (0x000329b6) main_mup_pane_g2

0x39f0,	// (0x000329ce) main_mup_pane_g3_ParamLimits

0x39f0,	// (0x000329ce) main_mup_pane_g3

0x3a08,	// (0x000329e6) main_mup_pane_g4_ParamLimits

0x3a08,	// (0x000329e6) main_mup_pane_g4

0x3a1a,	// (0x000329f8) main_mup_pane_g5_ParamLimits

0x3a1a,	// (0x000329f8) main_mup_pane_g5

0x3a36,	// (0x00032a14) main_mup_pane_g6_ParamLimits

0x3a36,	// (0x00032a14) main_mup_pane_g6

0x3a50,	// (0x00032a2e) main_mup_pane_g7_ParamLimits

0x3a50,	// (0x00032a2e) main_mup_pane_g7

0x3a6e,	// (0x00032a4c) main_mup_pane_g8_ParamLimits

0x3a6e,	// (0x00032a4c) main_mup_pane_g8

0x3a8c,	// (0x00032a6a) main_mup_pane_g9_ParamLimits

0x3a8c,	// (0x00032a6a) main_mup_pane_g9

0x3aa8,	// (0x00032a86) main_mup_pane_g10_ParamLimits

0x3aa8,	// (0x00032a86) main_mup_pane_g10

0x3ac6,	// (0x00032aa4) main_mup_pane_g11_ParamLimits

0x3ac6,	// (0x00032aa4) main_mup_pane_g11

0x3ae0,	// (0x00032abe) main_mup_pane_g12_ParamLimits

0x3ae0,	// (0x00032abe) main_mup_pane_g12

0x3af6,	// (0x00032ad4) main_mup_pane_g13_ParamLimits

0x3af6,	// (0x00032ad4) main_mup_pane_g13

0x000c,

0xf416,	// (0x0003e3f4) main_mup_pane_g_ParamLimits

0xf416,	// (0x0003e3f4) main_mup_pane_g

0x3b0a,	// (0x00032ae8) main_mup_pane_t1_ParamLimits

0x3b0a,	// (0x00032ae8) main_mup_pane_t1

0x3b26,	// (0x00032b04) main_mup_pane_t2_ParamLimits

0x3b26,	// (0x00032b04) main_mup_pane_t2

0x3b3e,	// (0x00032b1c) main_mup_pane_t3_ParamLimits

0x3b3e,	// (0x00032b1c) main_mup_pane_t3

0x3b56,	// (0x00032b34) main_mup_pane_t4_ParamLimits

0x3b56,	// (0x00032b34) main_mup_pane_t4

0x3b74,	// (0x00032b52) main_mup_pane_t5_ParamLimits

0x3b74,	// (0x00032b52) main_mup_pane_t5

0x3b89,	// (0x00032b67) main_mup_pane_t6_ParamLimits

0x3b89,	// (0x00032b67) main_mup_pane_t6

0x0005,

0xf431,	// (0x0003e40f) main_mup_pane_t_ParamLimits

0xf431,	// (0x0003e40f) main_mup_pane_t

0x3b9b,	// (0x00032b79) mup_progress_pane_ParamLimits

0x3b9b,	// (0x00032b79) mup_progress_pane

0x3ba7,	// (0x00032b85) mup_visualizer_pane_ParamLimits

0x3ba7,	// (0x00032b85) mup_visualizer_pane

0x3bdb,	// (0x00032bb9) mup_volume_pane_ParamLimits

0x3bdb,	// (0x00032bb9) mup_volume_pane

0xb0e3,	// (0x0003a0c1) mup_visualizer_pane_g1_ParamLimits

0xb0e3,	// (0x0003a0c1) mup_visualizer_pane_g1

0xb0e3,	// (0x0003a0c1) mup_visualizer_pane_g2_ParamLimits

0xb0e3,	// (0x0003a0c1) mup_visualizer_pane_g2

0xafbb,	// (0x00039f99) mup_visualizer_pane_g3_ParamLimits

0xafbb,	// (0x00039f99) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0003e41c) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0003e41c) mup_visualizer_pane_g

0xa5dc,	// (0x000395ba) mup_volume_pane_g1

0xb269,	// (0x0003a247) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0003e423) mup_volume_pane_g

0xa5dc,	// (0x000395ba) mup_progress_pane_g1

0xb272,	// (0x0003a250) mup_progress_pane_g2

0xb27b,	// (0x0003a259) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0003e428) mup_progress_pane_g

0xa267,	// (0x00039245) bg_popup_window_pane_cp05

0xb284,	// (0x0003a262) heading_pane_cp02_ParamLimits

0xb284,	// (0x0003a262) heading_pane_cp02

0xb2a0,	// (0x0003a27e) list_popup_blid_pane

0xb2a8,	// (0x0003a286) list_blid_sat_info_pane_ParamLimits

0xb2a8,	// (0x0003a286) list_blid_sat_info_pane

0xb2bb,	// (0x0003a299) list_blid_sat_info_pane_g1

0xb2c3,	// (0x0003a2a1) list_blid_sat_info_pane_t1

0x3d05,	// (0x00032ce3) mup_equalizer_pane_ParamLimits

0x3d05,	// (0x00032ce3) mup_equalizer_pane

0x3d26,	// (0x00032d04) mup_equalizer_pane_cp1_ParamLimits

0x3d26,	// (0x00032d04) mup_equalizer_pane_cp1

0x3d47,	// (0x00032d25) mup_equalizer_pane_cp2_ParamLimits

0x3d47,	// (0x00032d25) mup_equalizer_pane_cp2

0x3d6c,	// (0x00032d4a) mup_equalizer_pane_cp3_ParamLimits

0x3d6c,	// (0x00032d4a) mup_equalizer_pane_cp3

0x3d95,	// (0x00032d73) mup_equalizer_pane_cp4_ParamLimits

0x3d95,	// (0x00032d73) mup_equalizer_pane_cp4

0x3dbe,	// (0x00032d9c) mup_equalizer_pane_cp5

0x3dd6,	// (0x00032db4) mup_equalizer_pane_cp6

0x3dee,	// (0x00032dcc) mup_equalizer_pane_cp7

0xc4b8,	// (0x0003b496) bg_popup_call_poc_act_pane_g9

0xc4c0,	// (0x0003b49e) bg_popup_call_poc_act_pane_g10

0xc4c8,	// (0x0003b4a6) bg_popup_call_poc_act_pane_g11

0x000a,

0xa4c2,	// (0x000394a0) mup_scale_pane

0xa5dc,	// (0x000395ba) mup_scale_pane_g1

0xb2d1,	// (0x0003a2af) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0003e444) mup_scale_pane_g

0xb2f5,	// (0x0003a2d3) msg_data_pane

0xb2fd,	// (0x0003a2db) scroll_pane_cp017

0x3e18,	// (0x00032df6) bg_list_pane_cp04_ParamLimits

0x3e18,	// (0x00032df6) bg_list_pane_cp04

0xb30d,	// (0x0003a2eb) msg_data_pane_g1

0x3e38,	// (0x00032e16) msg_data_pane_g2

0x3e42,	// (0x00032e20) msg_data_pane_g3

0x3e4c,	// (0x00032e2a) msg_data_pane_g4

0x3e54,	// (0x00032e32) msg_data_pane_g5

0x3e5c,	// (0x00032e3a) msg_data_pane_g6

0x3e64,	// (0x00032e42) msg_data_pane_g7

0x0006,

0xf475,	// (0x0003e453) msg_data_pane_g

0x3e6c,	// (0x00032e4a) msg_text_pane_ParamLimits

0x3e6c,	// (0x00032e4a) msg_text_pane

0x3ea5,	// (0x00032e83) qrid_highlight_pane_cp011_ParamLimits

0x3ea5,	// (0x00032e83) qrid_highlight_pane_cp011

0xa267,	// (0x00039245) msg_body_pane

0xa267,	// (0x00039245) msg_header_pane

0xb31e,	// (0x0003a2fc) input_focus_pane_cp07

0xb333,	// (0x0003a311) msg_header_pane_t1_ParamLimits

0xb333,	// (0x0003a311) msg_header_pane_t1

0xb345,	// (0x0003a323) msg_header_pane_t2_ParamLimits

0xb345,	// (0x0003a323) msg_header_pane_t2

0x0001,

0xf489,	// (0x0003e467) msg_header_pane_t_ParamLimits

0xf489,	// (0x0003e467) msg_header_pane_t

0xb357,	// (0x0003a335) msg_body_pane_g1

0x3ec9,	// (0x00032ea7) msg_body_pane_t1_ParamLimits

0x3ec9,	// (0x00032ea7) msg_body_pane_t1

0xb35f,	// (0x0003a33d) msg_body_pane_t2_ParamLimits

0xb35f,	// (0x0003a33d) msg_body_pane_t2

0xb371,	// (0x0003a34f) msg_body_pane_t3_ParamLimits

0xb371,	// (0x0003a34f) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0003e46c) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0003e46c) msg_body_pane_t

0x0064,	// (0x0002f042) main_viewer_pane_g1_ParamLimits

0x0064,	// (0x0002f042) main_viewer_pane_g1

0x0072,	// (0x0002f050) main_viewer_pane_g2_ParamLimits

0x0072,	// (0x0002f050) main_viewer_pane_g2

0x3f30,	// (0x00032f0e) main_viewer_pane_g3_ParamLimits

0x3f30,	// (0x00032f0e) main_viewer_pane_g3

0x3f3f,	// (0x00032f1d) main_viewer_pane_g4_ParamLimits

0x3f3f,	// (0x00032f1d) main_viewer_pane_g4

0x3f4e,	// (0x00032f2c) main_viewer_pane_g5_ParamLimits

0x3f4e,	// (0x00032f2c) main_viewer_pane_g5

0x3f4e,	// (0x00032f2c) main_viewer_pane_g7_ParamLimits

0x3f4e,	// (0x00032f2c) main_viewer_pane_g7

0x3f60,	// (0x00032f3e) main_viewer_pane_g8_ParamLimits

0x3f60,	// (0x00032f3e) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0003e47c) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003e47c) main_viewer_pane_g

0xb383,	// (0x0003a361) viewer_content_pane_ParamLimits

0xb383,	// (0x0003a361) viewer_content_pane

0x3fa7,	// (0x00032f85) main_postcard_pane_g1_ParamLimits

0x3fa7,	// (0x00032f85) main_postcard_pane_g1

0x3fbd,	// (0x00032f9b) main_postcard_pane_g2_ParamLimits

0x3fbd,	// (0x00032f9b) main_postcard_pane_g2

0x3fd3,	// (0x00032fb1) main_postcard_pane_g3_ParamLimits

0x3fd3,	// (0x00032fb1) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0003e48d) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0003e48d) main_postcard_pane_g

0x3fea,	// (0x00032fc8) main_postcard_pane_g4

0xc6b1,	// (0x0003b68f) smil_status_volume_pane_g2

0x402d,	// (0x0003300b) postcard_pane_ParamLimits

0x402d,	// (0x0003300b) postcard_pane

0xb391,	// (0x0003a36f) postcard_pane_g1_ParamLimits

0xb391,	// (0x0003a36f) postcard_pane_g1

0x407d,	// (0x0003305b) postcard_pane_g2_ParamLimits

0x407d,	// (0x0003305b) postcard_pane_g2

0x4089,	// (0x00033067) postcard_pane_g3_ParamLimits

0x4089,	// (0x00033067) postcard_pane_g3

0xb39f,	// (0x0003a37d) postcard_pane_g4_ParamLimits

0xb39f,	// (0x0003a37d) postcard_pane_g4

0x4095,	// (0x00033073) postcard_pane_g5_ParamLimits

0x4095,	// (0x00033073) postcard_pane_g5

0x40aa,	// (0x00033088) postcard_pane_g6_ParamLimits

0x40aa,	// (0x00033088) postcard_pane_g6

0xb391,	// (0x0003a36f) postcard_pane_g7_ParamLimits

0xb391,	// (0x0003a36f) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0003e49a) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0003e49a) postcard_pane_g

0x40c2,	// (0x000330a0) main_mp2_pane_g1_ParamLimits

0x40c2,	// (0x000330a0) main_mp2_pane_g1

0x40d0,	// (0x000330ae) main_mp2_pane_g2_ParamLimits

0x40d0,	// (0x000330ae) main_mp2_pane_g2

0x40dc,	// (0x000330ba) main_mp2_pane_g3_ParamLimits

0x40dc,	// (0x000330ba) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0003e4a9) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0003e4a9) main_mp2_pane_g

0x40e8,	// (0x000330c6) main_mp2_pane_t1_ParamLimits

0x40e8,	// (0x000330c6) main_mp2_pane_t1

0x40ff,	// (0x000330dd) main_mp2_pane_t2_ParamLimits

0x40ff,	// (0x000330dd) main_mp2_pane_t2

0x4113,	// (0x000330f1) main_mp2_pane_t3_ParamLimits

0x4113,	// (0x000330f1) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0003e4b0) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0003e4b0) main_mp2_pane_t

0xb3ad,	// (0x0003a38b) pec_content_pane_ParamLimits

0xb3ad,	// (0x0003a38b) pec_content_pane

0xa8fa,	// (0x000398d8) scroll_pane_cp015

0xb3bf,	// (0x0003a39d) pec_attribute_pane_ParamLimits

0xb3bf,	// (0x0003a39d) pec_attribute_pane

0x4125,	// (0x00033103) pec_content_pane_g1_ParamLimits

0x4125,	// (0x00033103) pec_content_pane_g1

0xb3cf,	// (0x0003a3ad) pec_content_pane_t1_ParamLimits

0xb3cf,	// (0x0003a3ad) pec_content_pane_t1

0xb3e1,	// (0x0003a3bf) pec_content_pane_t2_ParamLimits

0xb3e1,	// (0x0003a3bf) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0003e4b7) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0003e4b7) pec_content_pane_t

0x4131,	// (0x0003310f) list_single_graphic_pane_cp01_ParamLimits

0x4131,	// (0x0003310f) list_single_graphic_pane_cp01

0xa4c2,	// (0x000394a0) bg_popup_sub_pane_cp04

0xb3f3,	// (0x0003a3d1) popup_mup_playback_window_g1

0xb3ff,	// (0x0003a3dd) popup_mup_playback_window_t1

0xb414,	// (0x0003a3f2) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0003e4bc) popup_mup_playback_window_t

0xb44b,	// (0x0003a429) main_image_pane_g1_ParamLimits

0xb44b,	// (0x0003a429) main_image_pane_g1

0xb48e,	// (0x0003a46c) scroll_pane_cp018_ParamLimits

0xb48e,	// (0x0003a46c) scroll_pane_cp018

0xb4a6,	// (0x0003a484) scroll_pane_cp016_ParamLimits

0xb4a6,	// (0x0003a484) scroll_pane_cp016

0x4203,	// (0x000331e1) smil2_image_pane_ParamLimits

0x4203,	// (0x000331e1) smil2_image_pane

0x4239,	// (0x00033217) smil2_root_pane_ParamLimits

0x4239,	// (0x00033217) smil2_root_pane

0x4271,	// (0x0003324f) smil2_text_pane_ParamLimits

0x4271,	// (0x0003324f) smil2_text_pane

0xa267,	// (0x00039245) bg_list_pane_cp06

0xb4e2,	// (0x0003a4c0) grid_radio_pane

0xa267,	// (0x00039245) bg_popup_window_pane_cp06

0xb4ec,	// (0x0003a4ca) main_fmradio_pane_t1

0xae38,	// (0x00039e16) heading_pane_cp04

0xb4fa,	// (0x0003a4d8) main_fmradio_pane_t2

0xc4d0,	// (0x0003b4ae) popup_cale_lunar_info_window_g1

0xb508,	// (0x0003a4e6) main_fmradio_pane_t3

0xc4d8,	// (0x0003b4b6) popup_cale_lunar_info_window_g2

0xb518,	// (0x0003a4f6) main_fmradio_pane_t4

0x0001,

0xb526,	// (0x0003a504) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0003e597) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0003e4d1) main_fmradio_pane_t

0xb534,	// (0x0003a512) wait_bar_pane_cp03

0xb53c,	// (0x0003a51a) cell_fmradio_pane_ParamLimits

0xb53c,	// (0x0003a51a) cell_fmradio_pane

0xb391,	// (0x0003a36f) cell_fmradio_pane_g1_ParamLimits

0xb391,	// (0x0003a36f) cell_fmradio_pane_g1

0xa267,	// (0x00039245) grid_highlight_pane_cp011

0xb551,	// (0x0003a52f) poc_content_pane_ParamLimits

0xb551,	// (0x0003a52f) poc_content_pane

0xb563,	// (0x0003a541) scroll_pane_cp019

0x4301,	// (0x000332df) popup_call_poc_act_window_ParamLimits

0x4301,	// (0x000332df) popup_call_poc_act_window

0x4325,	// (0x00033303) popup_call_poc_inact_window_ParamLimits

0x4325,	// (0x00033303) popup_call_poc_inact_window

0xf590,	// (0x0003e56e) bg_popup_call_poc_act_pane_g

0xc448,	// (0x0003b426) bg_popup_call_poc_inact_pane_g1

0xc450,	// (0x0003b42e) bg_popup_call_poc_inact_pane_g2

0xb56b,	// (0x0003a549) popup_call_poc_act_window_g2

0xc458,	// (0x0003b436) bg_popup_call_poc_inact_pane_g3

0xc460,	// (0x0003b43e) bg_popup_call_poc_inact_pane_g4

0xc468,	// (0x0003b446) bg_popup_call_poc_inact_pane_g5

0xb573,	// (0x0003a551) popup_call_poc_act_window_t1_ParamLimits

0xb573,	// (0x0003a551) popup_call_poc_act_window_t1

0xb59b,	// (0x0003a579) popup_call_poc_act_window_t2_ParamLimits

0xb59b,	// (0x0003a579) popup_call_poc_act_window_t2

0xb5c3,	// (0x0003a5a1) popup_call_poc_act_window_t3_ParamLimits

0xb5c3,	// (0x0003a5a1) popup_call_poc_act_window_t3

0xb5eb,	// (0x0003a5c9) popup_call_poc_act_window_t4_ParamLimits

0xb5eb,	// (0x0003a5c9) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0003e4dc) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0003e4dc) popup_call_poc_act_window_t

0xc470,	// (0x0003b44e) bg_popup_call_poc_inact_pane_g6

0xc478,	// (0x0003b456) bg_popup_call_poc_inact_pane_g7

0xc480,	// (0x0003b45e) bg_popup_call_poc_inact_pane_g8

0xb5fd,	// (0x0003a5db) popup_call_poc_inact_window_g2

0xc488,	// (0x0003b466) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0003e55b) bg_popup_call_poc_inact_pane_g

0xb605,	// (0x0003a5e3) popup_call_poc_inact_window_t1_ParamLimits

0xb605,	// (0x0003a5e3) popup_call_poc_inact_window_t1

0xb61a,	// (0x0003a5f8) popup_call_poc_inact_window_t2_ParamLimits

0xb61a,	// (0x0003a5f8) popup_call_poc_inact_window_t2

0xb62f,	// (0x0003a60d) popup_call_poc_inact_window_t3_ParamLimits

0xb62f,	// (0x0003a60d) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0003e4e5) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0003e4e5) popup_call_poc_inact_window_t

0xc611,	// (0x0003b5ef) context_pane_ParamLimits

0x4924,	// (0x00033902) signal_pane_ParamLimits

0xa738,	// (0x00039716) main_call2_pane

0x48b1,	// (0x0003388f) popup_phob_thumbnail2_window_ParamLimits

0x48b1,	// (0x0003388f) popup_phob_thumbnail2_window

0x3efa,	// (0x00032ed8) aid_hotspot_pointer_arrow_pane

0x3f02,	// (0x00032ee0) aid_hotspot_pointer_hand_pane

0x4690,	// (0x0003366e) phob_pre_status_pane_g5

0x1f01,	// (0x00030edf) cams_zoom_pane_ParamLimits

0x1f10,	// (0x00030eee) image_vga_pane_ParamLimits

0x1f2a,	// (0x00030f08) main_camera_pane_g1_ParamLimits

0x1f3c,	// (0x00030f1a) main_camera_pane_g2_ParamLimits

0x1f4c,	// (0x00030f2a) main_camera_pane_g3_ParamLimits

0x1f60,	// (0x00030f3e) main_camera_pane_g4_ParamLimits

0x1f74,	// (0x00030f52) main_camera_pane_g5_ParamLimits

0x1f88,	// (0x00030f66) main_camera_pane_g6_ParamLimits

0x1f9c,	// (0x00030f7a) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0003e1e4) main_camera_pane_g_ParamLimits

0x1fb0,	// (0x00030f8e) main_camera_pane_t1_ParamLimits

0x1fc6,	// (0x00030fa4) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0003e1f5) main_camera_pane_t_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_preview_window_pane_cp01_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_preview_window_pane_cp01

0xb644,	// (0x0003a622) popup_phob_thumbnail2_window_g1_ParamLimits

0xb644,	// (0x0003a622) popup_phob_thumbnail2_window_g1

0xa267,	// (0x00039245) call2_cli_visual_pane

0x4359,	// (0x00033337) popup_call2_audio_conf_window_ParamLimits

0x4359,	// (0x00033337) popup_call2_audio_conf_window

0x4381,	// (0x0003335f) popup_call2_audio_first_window_ParamLimits

0x4381,	// (0x0003335f) popup_call2_audio_first_window

0x4417,	// (0x000333f5) popup_call2_audio_in_window_ParamLimits

0x4417,	// (0x000333f5) popup_call2_audio_in_window

0x4463,	// (0x00033441) popup_call2_audio_out_window_ParamLimits

0x4463,	// (0x00033441) popup_call2_audio_out_window

0x44d5,	// (0x000334b3) popup_call2_audio_second_window_ParamLimits

0x44d5,	// (0x000334b3) popup_call2_audio_second_window

0x453b,	// (0x00033519) popup_call2_audio_wait_window_ParamLimits

0x453b,	// (0x00033519) popup_call2_audio_wait_window

0xa267,	// (0x00039245) bg_popup_call2_act_pane_cp03

0xa4a4,	// (0x00039482) list_conf_pane_cp

0xb650,	// (0x0003a62e) popup_call2_audio_conf_window_t1

0xb65e,	// (0x0003a63c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb65e,	// (0x0003a63c) list_single_graphic_popup_conf2_pane

0xaea7,	// (0x00039e85) list_highlight_pane_cp04

0xb671,	// (0x0003a64f) list_single_graphic_popup_conf2_pane_g1

0xaeb8,	// (0x00039e96) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0003e4ec) list_single_graphic_popup_conf2_pane_g

0xb67b,	// (0x0003a659) list_single_graphic_popup_conf2_pane_t1

0xb689,	// (0x0003a667) bg_popup_call2_act_pane_cp01_ParamLimits

0xb689,	// (0x0003a667) bg_popup_call2_act_pane_cp01

0xb713,	// (0x0003a6f1) call_type_pane_cp05_ParamLimits

0xb713,	// (0x0003a6f1) call_type_pane_cp05

0xb767,	// (0x0003a745) popup_call2_audio_second_window_g1_ParamLimits

0xb767,	// (0x0003a745) popup_call2_audio_second_window_g1

0xb7bb,	// (0x0003a799) popup_call2_audio_second_window_g2_ParamLimits

0xb7bb,	// (0x0003a799) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0003e4f1) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0003e4f1) popup_call2_audio_second_window_g

0xb820,	// (0x0003a7fe) popup_call2_audio_second_window_t1_ParamLimits

0xb820,	// (0x0003a7fe) popup_call2_audio_second_window_t1

0xb8db,	// (0x0003a8b9) popup_call2_audio_second_window_t2_ParamLimits

0xb8db,	// (0x0003a8b9) popup_call2_audio_second_window_t2

0xb92e,	// (0x0003a90c) popup_call2_audio_second_window_t3_ParamLimits

0xb92e,	// (0x0003a90c) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0003e4f8) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0003e4f8) popup_call2_audio_second_window_t

0xa267,	// (0x00039245) bg_popup_call2_in_pane_cp02

0xa271,	// (0x0003924f) call_type_pane_cp04

0xa279,	// (0x00039257) popup_call2_audio_wait_window_g1

0xa281,	// (0x0003925f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003e0d3) popup_call2_audio_wait_window_g

0xa289,	// (0x00039267) popup_call2_audio_wait_window_t3

0xba21,	// (0x0003a9ff) bg_popup_call2_act_pane_ParamLimits

0xba21,	// (0x0003a9ff) bg_popup_call2_act_pane

0xbae1,	// (0x0003aabf) call_type_pane_cp03_ParamLimits

0xbae1,	// (0x0003aabf) call_type_pane_cp03

0xbb45,	// (0x0003ab23) popup_call2_audio_first_window_g1_ParamLimits

0xbb45,	// (0x0003ab23) popup_call2_audio_first_window_g1

0xbbb5,	// (0x0003ab93) popup_call2_audio_first_window_g2_ParamLimits

0xbbb5,	// (0x0003ab93) popup_call2_audio_first_window_g2

0xb0e3,	// (0x0003a0c1) popup_call2_audio_first_window_g3_ParamLimits

0xb0e3,	// (0x0003a0c1) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0003e501) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0003e501) popup_call2_audio_first_window_g

0xbc93,	// (0x0003ac71) popup_call2_audio_first_window_t1_ParamLimits

0xbc93,	// (0x0003ac71) popup_call2_audio_first_window_t1

0xbd96,	// (0x0003ad74) popup_call2_audio_first_window_t4_ParamLimits

0xbd96,	// (0x0003ad74) popup_call2_audio_first_window_t4

0xbe79,	// (0x0003ae57) popup_call2_audio_first_window_t5_ParamLimits

0xbe79,	// (0x0003ae57) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0003e50c) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0003e50c) popup_call2_audio_first_window_t

0xa4ba,	// (0x00039498) bg_popup_call2_act_pane_g1

0xc4e2,	// (0x0003b4c0) popup_cale_lunar_info_window_t1

0xc4f0,	// (0x0003b4ce) popup_cale_lunar_info_window_t2

0xc4fe,	// (0x0003b4dc) popup_cale_lunar_info_window_t3

0xa267,	// (0x00039245) bg_popup_call2_bubble_pane

0xbf7a,	// (0x0003af58) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf7a,	// (0x0003af58) bg_popup_call2_in_pane_cp01

0x9f43,	// (0x00038f21) call_type_pane_cp02

0xbfc2,	// (0x0003afa0) popup_call2_audio_out_window_g1_ParamLimits

0xbfc2,	// (0x0003afa0) popup_call2_audio_out_window_g1

0xbfee,	// (0x0003afcc) popup_call2_audio_out_window_g2_ParamLimits

0xbfee,	// (0x0003afcc) popup_call2_audio_out_window_g2

0xc016,	// (0x0003aff4) popup_call2_audio_out_window_g3_ParamLimits

0xc016,	// (0x0003aff4) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0003e515) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0003e515) popup_call2_audio_out_window_g

0xc051,	// (0x0003b02f) popup_call2_audio_out_window_t1_ParamLimits

0xc051,	// (0x0003b02f) popup_call2_audio_out_window_t1

0xc0b0,	// (0x0003b08e) popup_call2_audio_out_window_t2_ParamLimits

0xc0b0,	// (0x0003b08e) popup_call2_audio_out_window_t2

0xc104,	// (0x0003b0e2) popup_call2_audio_out_window_t3_ParamLimits

0xc104,	// (0x0003b0e2) popup_call2_audio_out_window_t3

0xc11a,	// (0x0003b0f8) popup_call2_audio_out_window_t4_ParamLimits

0xc11a,	// (0x0003b0f8) popup_call2_audio_out_window_t4

0xc130,	// (0x0003b10e) popup_call2_audio_out_window_t5_ParamLimits

0xc130,	// (0x0003b10e) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0003e51e) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0003e51e) popup_call2_audio_out_window_t

0xc194,	// (0x0003b172) bg_popup_call2_in_pane_ParamLimits

0xc194,	// (0x0003b172) bg_popup_call2_in_pane

0xc1f0,	// (0x0003b1ce) popup_call2_audio_in_window_g1_ParamLimits

0xc1f0,	// (0x0003b1ce) popup_call2_audio_in_window_g1

0xc228,	// (0x0003b206) popup_call2_audio_in_window_g2_ParamLimits

0xc228,	// (0x0003b206) popup_call2_audio_in_window_g2

0xc260,	// (0x0003b23e) popup_call2_audio_in_window_g3_ParamLimits

0xc260,	// (0x0003b23e) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0003e52b) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0003e52b) popup_call2_audio_in_window_g

0xc2b8,	// (0x0003b296) popup_call2_audio_in_window_t1_ParamLimits

0xc2b8,	// (0x0003b296) popup_call2_audio_in_window_t1

0xc338,	// (0x0003b316) popup_call2_audio_in_window_t2_ParamLimits

0xc338,	// (0x0003b316) popup_call2_audio_in_window_t2

0xc3b8,	// (0x0003b396) popup_call2_audio_in_window_t3_ParamLimits

0xc3b8,	// (0x0003b396) popup_call2_audio_in_window_t3

0xc3d2,	// (0x0003b3b0) popup_call2_audio_in_window_t4_ParamLimits

0xc3d2,	// (0x0003b3b0) popup_call2_audio_in_window_t4

0xc3e4,	// (0x0003b3c2) popup_call2_audio_in_window_t5_ParamLimits

0xc3e4,	// (0x0003b3c2) popup_call2_audio_in_window_t5

0xc3f6,	// (0x0003b3d4) popup_call2_audio_in_window_t6_ParamLimits

0xc3f6,	// (0x0003b3d4) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0003e534) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0003e534) popup_call2_audio_in_window_t

0xa4ba,	// (0x00039498) bg_popup_call2_in_pane_g1

0xc50c,	// (0x0003b4ea) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0003e59c) popup_cale_lunar_info_window_t

0xa4c2,	// (0x000394a0) bg_popup_call2_rect_pane_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_call2_rect_pane

0xa267,	// (0x00039245) call2_cli_visual_graphic_pane

0xa267,	// (0x00039245) call2_cli_visual_text_pane

0x49a6,	// (0x00033984) smil_status_volume_pane_g3

0x0002,

0xa5dc,	// (0x000395ba) call2_cli_visual_graphic_pane_g1

0xa5dc,	// (0x000395ba) call2_cli_visual_graphic_pane_g2

0xa5dc,	// (0x000395ba) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0003e541) call2_cli_visual_graphic_pane_g

0xc408,	// (0x0003b3e6) bg_popup_call2_rect_pane_g1

0xa671,	// (0x0003964f) bg_popup_call2_rect_pane_g2

0xc410,	// (0x0003b3ee) bg_popup_call2_rect_pane_g3

0xc418,	// (0x0003b3f6) bg_popup_call2_rect_pane_g4

0xc420,	// (0x0003b3fe) bg_popup_call2_rect_pane_g5

0xc428,	// (0x0003b406) bg_popup_call2_rect_pane_g6

0xc430,	// (0x0003b40e) bg_popup_call2_rect_pane_g7

0xc438,	// (0x0003b416) bg_popup_call2_rect_pane_g8

0xc440,	// (0x0003b41e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0003e548) bg_popup_call2_rect_pane_g

0xc448,	// (0x0003b426) bg_popup_call2_bubble_pane_g1

0xc450,	// (0x0003b42e) bg_popup_call2_bubble_pane_g2

0xc458,	// (0x0003b436) bg_popup_call2_bubble_pane_g3

0xc460,	// (0x0003b43e) bg_popup_call2_bubble_pane_g4

0xc468,	// (0x0003b446) bg_popup_call2_bubble_pane_g5

0xc470,	// (0x0003b44e) bg_popup_call2_bubble_pane_g6

0xc478,	// (0x0003b456) bg_popup_call2_bubble_pane_g7

0xc480,	// (0x0003b45e) bg_popup_call2_bubble_pane_g8

0xc488,	// (0x0003b466) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0003e55b) bg_popup_call2_bubble_pane_g

0x19a0,	// (0x0003097e) aid_cale_week_size_cell_pane

0x1fe0,	// (0x00030fbe) aid_cams_cif_uncrop_pane_ParamLimits

0x1fe0,	// (0x00030fbe) aid_cams_cif_uncrop_pane

0x2199,	// (0x00031177) aid_cams_size_cell_ParamLimits

0x2199,	// (0x00031177) aid_cams_size_cell

0x21ad,	// (0x0003118b) grid_cams_pane_ParamLimits

0x21c7,	// (0x000311a5) linegrid_cams_pane_ParamLimits

0x23bc,	// (0x0003139a) call_video_pane_t1

0x23d6,	// (0x000313b4) call_video_pane_t2

0x0001,

0xf26a,	// (0x0003e248) call_video_pane_t

0x2823,	// (0x00031801) aid_cale_month_size_cell_pane_ParamLimits

0x2823,	// (0x00031801) aid_cale_month_size_cell_pane

0xf607,	// (0x0003e5e5) smil_status_volume_pane_g

0x49b3,	// (0x00033991) volume_smil_pane_ParamLimits

0x14e3,	// (0x000304c1) aid_popup2_width_pane

0x18ab,	// (0x00030889) cell_qdial_pane_g4_ParamLimits

0x18ab,	// (0x00030889) cell_qdial_pane_g4

0x38cf,	// (0x000328ad) aid_blid_cardinal_pane_ParamLimits

0x38df,	// (0x000328bd) aid_blid_destination_pane_ParamLimits

0x38df,	// (0x000328bd) aid_blid_destination_pane

0xa4c2,	// (0x000394a0) bg_popup_call_poc_act_pane_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_call_poc_act_pane

0xa4c2,	// (0x000394a0) bg_popup_call_poc_inact_pane_ParamLimits

0xa4c2,	// (0x000394a0) bg_popup_call_poc_inact_pane

0xc490,	// (0x0003b46e) bg_popup_call_poc_act_pane_g1

0xc498,	// (0x0003b476) bg_popup_call_poc_act_pane_g2

0xc4a0,	// (0x0003b47e) bg_popup_call_poc_act_pane_g3

0xc460,	// (0x0003b43e) bg_popup_call_poc_act_pane_g4

0xc468,	// (0x0003b446) bg_popup_call_poc_act_pane_g5

0xc4a8,	// (0x0003b486) bg_popup_call_poc_act_pane_g6

0xc478,	// (0x0003b456) bg_popup_call_poc_act_pane_g7

0xc4b0,	// (0x0003b48e) bg_popup_call_poc_act_pane_g8

0xa267,	// (0x00039245) main_usb_pane

0x4888,	// (0x00033866) popup_cale_lunar_info_window

0x26a3,	// (0x00031681) im_reading_pane_t1_ParamLimits

0xa852,	// (0x00039830) list_im_pane_ParamLimits

0xa863,	// (0x00039841) scroll_pane_cp07_ParamLimits

0xa267,	// (0x00039245) grid_highlight_pane_cp012

0xa4c2,	// (0x000394a0) mup_scale_pane_ParamLimits

0xb391,	// (0x0003a36f) main_usb_pane_g1_ParamLimits

0xb391,	// (0x0003a36f) main_usb_pane_g1

0x459c,	// (0x0003357a) main_usb_pane_g2_ParamLimits

0x459c,	// (0x0003357a) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0003e585) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0003e585) main_usb_pane_g

0x45b2,	// (0x00033590) main_usb_pane_t1_ParamLimits

0x45b2,	// (0x00033590) main_usb_pane_t1

0x45c4,	// (0x000335a2) main_usb_pane_t2_ParamLimits

0x45c4,	// (0x000335a2) main_usb_pane_t2

0x45d6,	// (0x000335b4) main_usb_pane_t3_ParamLimits

0x45d6,	// (0x000335b4) main_usb_pane_t3

0x45e8,	// (0x000335c6) main_usb_pane_t4_ParamLimits

0x45e8,	// (0x000335c6) main_usb_pane_t4

0x45fd,	// (0x000335db) main_usb_pane_t5_ParamLimits

0x45fd,	// (0x000335db) main_usb_pane_t5

0x4612,	// (0x000335f0) main_usb_pane_t6_ParamLimits

0x4612,	// (0x000335f0) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0003e58a) main_usb_pane_t_ParamLimits

0x386e,	// (0x0003284c) aid_text_placing

0x3879,	// (0x00032857) main_location2_pane_t1_ParamLimits

0x388f,	// (0x0003286d) main_location2_pane_t2_ParamLimits

0x38a5,	// (0x00032883) main_location2_pane_t3_ParamLimits

0x38bb,	// (0x00032899) main_location2_pane_t4_ParamLimits

0x38bb,	// (0x00032899) main_location2_pane_t4

0xf3cb,	// (0x0003e3a9) main_location2_pane_t_ParamLimits

0xa4fe,	// (0x000394dc) find_pinb_pane_g2_ParamLimits

0xa4fe,	// (0x000394dc) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0003e0f9) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0003e0f9) find_pinb_pane_g

0xa50a,	// (0x000394e8) find_pinb_pane_t1_ParamLimits

0xa51c,	// (0x000394fa) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0003e0fe) find_pinb_pane_t_ParamLimits

0xa267,	// (0x00039245) main_call3_pane

0x2e28,	// (0x00031e06) cale_month_day_heading_pane_t1_ParamLimits

0x2eae,	// (0x00031e8c) cale_month_day_heading_pane_t2_ParamLimits

0x2f27,	// (0x00031f05) cale_month_day_heading_pane_t3_ParamLimits

0x2fa0,	// (0x00031f7e) cale_month_day_heading_pane_t4_ParamLimits

0x3021,	// (0x00031fff) cale_month_day_heading_pane_t5_ParamLimits

0x30aa,	// (0x00032088) cale_month_day_heading_pane_t6_ParamLimits

0x313b,	// (0x00032119) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0003e280) cale_month_day_heading_pane_t_ParamLimits

0xaaad,	// (0x00039a8b) smil_status_volume_pane

0x4051,	// (0x0003302f) postcard_address_pane_ParamLimits

0x4051,	// (0x0003302f) postcard_address_pane

0x4067,	// (0x00033045) postcard_message_pane_ParamLimits

0x4067,	// (0x00033045) postcard_message_pane

0x4575,	// (0x00033553) call2_cli_visual_pane_t1_ParamLimits

0x4575,	// (0x00033553) call2_cli_visual_pane_t1

0x4b57,	// (0x00033b35) postcard_message_pane_t1_ParamLimits

0x4b57,	// (0x00033b35) postcard_message_pane_t1

0xc6c4,	// (0x0003b6a2) postcard_address_pane_t1_ParamLimits

0xc6c4,	// (0x0003b6a2) postcard_address_pane_t1

0x4b43,	// (0x00033b21) popup_call3_audio_in_window_ParamLimits

0x4b43,	// (0x00033b21) popup_call3_audio_in_window

0x49c8,	// (0x000339a6) bg_popup_call3_in_pane_ParamLimits

0x49c8,	// (0x000339a6) bg_popup_call3_in_pane

0x4a44,	// (0x00033a22) popup_call3_audio_in_window_g1_ParamLimits

0x4a44,	// (0x00033a22) popup_call3_audio_in_window_g1

0x4a64,	// (0x00033a42) popup_call3_audio_in_window_g2_ParamLimits

0x4a64,	// (0x00033a42) popup_call3_audio_in_window_g2

0x4a84,	// (0x00033a62) popup_call3_audio_in_window_g3_ParamLimits

0x4a84,	// (0x00033a62) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0003e5ec) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0003e5ec) popup_call3_audio_in_window_g

0x4ab5,	// (0x00033a93) popup_call3_audio_in_window_t1_ParamLimits

0x4ab5,	// (0x00033a93) popup_call3_audio_in_window_t1

0x4af3,	// (0x00033ad1) popup_call3_audio_in_window_t2_ParamLimits

0x4af3,	// (0x00033ad1) popup_call3_audio_in_window_t2

0x4b31,	// (0x00033b0f) popup_call3_audio_in_window_t3_ParamLimits

0x4b31,	// (0x00033b0f) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0003e5f5) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0003e5f5) popup_call3_audio_in_window_t

0xa738,	// (0x00039716) bg_popup_call3_rect_pane

0xc408,	// (0x0003b3e6) bg_popup_call3_rect_pane_g1

0xa671,	// (0x0003964f) bg_popup_call3_rect_pane_g2

0xc410,	// (0x0003b3ee) bg_popup_call3_rect_pane_g3

0xc418,	// (0x0003b3f6) bg_popup_call3_rect_pane_g4

0xc420,	// (0x0003b3fe) bg_popup_call3_rect_pane_g5

0xc428,	// (0x0003b406) bg_popup_call3_rect_pane_g6

0xc430,	// (0x0003b40e) bg_popup_call3_rect_pane_g7

0x3bf1,	// (0x00032bcf) mup_visualizer_osc_pane

0xb261,	// (0x0003a23f) mup_visualizer_spec_pane

0x49f8,	// (0x000339d6) call3_video_qcif_pane_ParamLimits

0x49f8,	// (0x000339d6) call3_video_qcif_pane

0x4a0b,	// (0x000339e9) call3_video_qcif_uncrop_pane_ParamLimits

0x4a0b,	// (0x000339e9) call3_video_qcif_uncrop_pane

0x4a1b,	// (0x000339f9) call3_video_subqcif_pane_ParamLimits

0x4a1b,	// (0x000339f9) call3_video_subqcif_pane

0x4a31,	// (0x00033a0f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4a31,	// (0x00033a0f) call3_video_subqcif_uncrop_pane

0x4aa4,	// (0x00033a82) popup_call3_audio_in_window_g4_ParamLimits

0x4aa4,	// (0x00033a82) popup_call3_audio_in_window_g4

0x4995,	// (0x00033973) mup_spec_half_pane

0x499e,	// (0x0003397c) mup_spec_half_pane_cp

0xc684,	// (0x0003b662) mup_osc_middle_pane

0xc68d,	// (0x0003b66b) mup_visualizer_osc_pane_g1

0x4975,	// (0x00033953) mup_spec_bar_pane_ParamLimits

0x4975,	// (0x00033953) mup_spec_bar_pane

0xc671,	// (0x0003b64f) mup_spec_bar_pane_g1

0xc67b,	// (0x0003b659) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0003e5e0) mup_spec_bar_pane_g

0x19a0,	// (0x0003097e) aid_cale_week_size_cell_pane_ParamLimits

0x19ba,	// (0x00030998) bg_cale_heading_pane_ParamLimits

0x19de,	// (0x000309bc) bg_cale_pane_cp01_ParamLimits

0x19fb,	// (0x000309d9) cale_week_corner_pane_ParamLimits

0x1a1a,	// (0x000309f8) cale_week_day_heading_pane_ParamLimits

0x1a43,	// (0x00030a21) cale_week_scroll_pane_g1_ParamLimits

0x1a62,	// (0x00030a40) cale_week_scroll_pane_g2_ParamLimits

0x1a7a,	// (0x00030a58) cale_week_scroll_pane_g3_ParamLimits

0x1a92,	// (0x00030a70) cale_week_scroll_pane_g4_ParamLimits

0x1aaa,	// (0x00030a88) cale_week_scroll_pane_g5_ParamLimits

0x1aca,	// (0x00030aa8) cale_week_scroll_pane_g6_ParamLimits

0x1aea,	// (0x00030ac8) cale_week_scroll_pane_g7_ParamLimits

0x1b0e,	// (0x00030aec) cale_week_scroll_pane_g8_ParamLimits

0x1b32,	// (0x00030b10) cale_week_scroll_pane_g9_ParamLimits

0x1b4a,	// (0x00030b28) cale_week_scroll_pane_g10_ParamLimits

0x1b62,	// (0x00030b40) cale_week_scroll_pane_g11_ParamLimits

0x1b7a,	// (0x00030b58) cale_week_scroll_pane_g12_ParamLimits

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g13_ParamLimits

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g14_ParamLimits

0x1b9e,	// (0x00030b7c) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0003e18a) cale_week_scroll_pane_g_ParamLimits

0x1be6,	// (0x00030bc4) cale_week_time_pane_ParamLimits

0x1c0a,	// (0x00030be8) grid_cale_week_pane_ParamLimits

0xa6ae,	// (0x0003968c) listscroll_cale_week_pane_t1

0xa6c0,	// (0x0003969e) scroll_pane_cp08_ParamLimits

0x289b,	// (0x00031879) cale_month_corner_pane_ParamLimits

0xaa83,	// (0x00039a61) cale_month_pane_t1

0x2da3,	// (0x00031d81) cale_month_week_pane_ParamLimits

0x361b,	// (0x000325f9) popup_call_status_window_g1_ParamLimits

0x362f,	// (0x0003260d) popup_call_status_window_g2_ParamLimits

0x3643,	// (0x00032621) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0003e330) popup_call_status_window_g_ParamLimits

0xae28,	// (0x00039e06) aid_call2_pane

0x3ebb,	// (0x00032e99) msg_header_pane_g1

0x4051,	// (0x0003302f) postcard_address2_pane_ParamLimits

0x4051,	// (0x0003302f) postcard_address2_pane

0x4067,	// (0x00033045) postcard_message2_pane_ParamLimits

0x4067,	// (0x00033045) postcard_message2_pane

0x4932,	// (0x00033910) message2_row_pane_ParamLimits

0x4932,	// (0x00033910) message2_row_pane

0xc62c,	// (0x0003b60a) address2_row_pane_ParamLimits

0xc62c,	// (0x0003b60a) address2_row_pane

0xc63f,	// (0x0003b61d) postcard_message2_row_pane_g1

0xc647,	// (0x0003b625) postcard_message2_row_pane_t1

0xc63f,	// (0x0003b61d) address2_row_pane_g1

0xc647,	// (0x0003b625) address2_row_pane_t1

0x1e89,	// (0x00030e67) aid_size_cell_vorec

0xa267,	// (0x00039245) main_rss_pane

0x4955,	// (0x00033933) rss_list_single_pane_ParamLimits

0x4955,	// (0x00033933) rss_list_single_pane

0xc655,	// (0x0003b633) rss_list_single_pane_t1

0xc663,	// (0x0003b641) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0003e5db) rss_list_single_pane_t

0xa267,	// (0x00039245) main_camera2_pane

0xa267,	// (0x00039245) main_video2_pane

0x03d6,	// (0x0002f3b4) cams_zoom_pane_cp2_ParamLimits

0x03d6,	// (0x0002f3b4) cams_zoom_pane_cp2

0x03ed,	// (0x0002f3cb) image2_vga_pane_ParamLimits

0x03ed,	// (0x0002f3cb) image2_vga_pane

0x0435,	// (0x0002f413) main_camera2_pane_g1_ParamLimits

0x0435,	// (0x0002f413) main_camera2_pane_g1

0x0455,	// (0x0002f433) main_camera2_pane_g2_ParamLimits

0x0455,	// (0x0002f433) main_camera2_pane_g2

0x046c,	// (0x0002f44a) main_camera2_pane_g3_ParamLimits

0x046c,	// (0x0002f44a) main_camera2_pane_g3

0x0483,	// (0x0002f461) main_camera2_pane_g4_ParamLimits

0x0483,	// (0x0002f461) main_camera2_pane_g4

0x049a,	// (0x0002f478) main_camera2_pane_g5_ParamLimits

0x049a,	// (0x0002f478) main_camera2_pane_g5

0x04b1,	// (0x0002f48f) main_camera2_pane_g6_ParamLimits

0x04b1,	// (0x0002f48f) main_camera2_pane_g6

0x04c8,	// (0x0002f4a6) main_camera2_pane_g7_ParamLimits

0x04c8,	// (0x0002f4a6) main_camera2_pane_g7

0x04df,	// (0x0002f4bd) main_camera2_pane_g8_ParamLimits

0x04df,	// (0x0002f4bd) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0003e5fc) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0003e5fc) main_camera2_pane_g

0x050d,	// (0x0002f4eb) main_camera2_pane_t1_ParamLimits

0x050d,	// (0x0002f4eb) main_camera2_pane_t1

0x0542,	// (0x0002f520) main_camera2_pane_t2_ParamLimits

0x0542,	// (0x0002f520) main_camera2_pane_t2

0x055f,	// (0x0002f53d) main_camera2_pane_t3_ParamLimits

0x055f,	// (0x0002f53d) main_camera2_pane_t3

0x05bd,	// (0x0002f59b) main_camera2_pane_t4_ParamLimits

0x05bd,	// (0x0002f59b) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0003e60f) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0003e60f) main_camera2_pane_t

0x0646,	// (0x0002f624) cams_zoom_pane_cp4_ParamLimits

0x0646,	// (0x0002f624) cams_zoom_pane_cp4

0x065c,	// (0x0002f63a) image2_cif_pane_ParamLimits

0x065c,	// (0x0002f63a) image2_cif_pane

0x0687,	// (0x0002f665) image2_subqcif_pane_ParamLimits

0x0687,	// (0x0002f665) image2_subqcif_pane

0x06a2,	// (0x0002f680) main_video2_pane_g1_ParamLimits

0x06a2,	// (0x0002f680) main_video2_pane_g1

0x06bc,	// (0x0002f69a) main_video2_pane_g2_ParamLimits

0x06bc,	// (0x0002f69a) main_video2_pane_g2

0x06d2,	// (0x0002f6b0) main_video2_pane_g3_ParamLimits

0x06d2,	// (0x0002f6b0) main_video2_pane_g3

0x06e8,	// (0x0002f6c6) main_video2_pane_g4_ParamLimits

0x06e8,	// (0x0002f6c6) main_video2_pane_g4

0x06fe,	// (0x0002f6dc) main_video2_pane_g5_ParamLimits

0x06fe,	// (0x0002f6dc) main_video2_pane_g5

0x0714,	// (0x0002f6f2) main_video2_pane_g6_ParamLimits

0x0714,	// (0x0002f6f2) main_video2_pane_g6

0x0005,

0xf640,	// (0x0003e61e) main_video2_pane_g_ParamLimits

0xf640,	// (0x0003e61e) main_video2_pane_g

0x072e,	// (0x0002f70c) main_video2_pane_t1_ParamLimits

0x072e,	// (0x0002f70c) main_video2_pane_t1

0x0752,	// (0x0002f730) main_video2_pane_t2_ParamLimits

0x0752,	// (0x0002f730) main_video2_pane_t2

0x07a2,	// (0x0002f780) main_video2_pane_t3_ParamLimits

0x07a2,	// (0x0002f780) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0003e62b) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0003e62b) main_video2_pane_t

0x46d0,	// (0x000336ae) call_muted_g2

0x0001,

0xf5ef,	// (0x0003e5cd) call_muted_g

0xa267,	// (0x00039245) main_mup2_pane

0x4b9d,	// (0x00033b7b) main_mup2_pane_g1_ParamLimits

0x4b9d,	// (0x00033b7b) main_mup2_pane_g1

0x4ba9,	// (0x00033b87) main_mup2_pane_g2_ParamLimits

0x4ba9,	// (0x00033b87) main_mup2_pane_g2

0x4e1a,	// (0x00033df8) main_mup_pane_g13_cp1

0x4e22,	// (0x00033e00) mup_volume_pane_cp1

0x4bc7,	// (0x00033ba5) main_mup2_pane_g4_ParamLimits

0x4bc7,	// (0x00033ba5) main_mup2_pane_g4

0x4bd9,	// (0x00033bb7) main_mup2_pane_g5_ParamLimits

0x4bd9,	// (0x00033bb7) main_mup2_pane_g5

0x4beb,	// (0x00033bc9) main_mup2_pane_g6_ParamLimits

0x4beb,	// (0x00033bc9) main_mup2_pane_g6

0x4bfd,	// (0x00033bdb) main_mup2_pane_g7_ParamLimits

0x4bfd,	// (0x00033bdb) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0003e632) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0003e632) main_mup2_pane_g

0x4c15,	// (0x00033bf3) main_mup2_pane_t1_ParamLimits

0x4c15,	// (0x00033bf3) main_mup2_pane_t1

0x4c2b,	// (0x00033c09) main_mup2_pane_t2_ParamLimits

0x4c2b,	// (0x00033c09) main_mup2_pane_t2

0x4c41,	// (0x00033c1f) main_mup2_pane_t3_ParamLimits

0x4c41,	// (0x00033c1f) main_mup2_pane_t3

0x4c57,	// (0x00033c35) main_mup2_pane_t4_ParamLimits

0x4c57,	// (0x00033c35) main_mup2_pane_t4

0x4c6f,	// (0x00033c4d) main_mup2_pane_t5_ParamLimits

0x4c6f,	// (0x00033c4d) main_mup2_pane_t5

0x4c87,	// (0x00033c65) main_mup2_pane_t6_ParamLimits

0x4c87,	// (0x00033c65) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0003e641) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0003e641) main_mup2_pane_t

0x4cb7,	// (0x00033c95) mup2_visualizer_pane_ParamLimits

0x4cb7,	// (0x00033c95) mup2_visualizer_pane

0x4ce5,	// (0x00033cc3) mup_progress_pane_cp_ParamLimits

0x4ce5,	// (0x00033cc3) mup_progress_pane_cp

0x4e05,	// (0x00033de3) mup_volume_pane_cp_ParamLimits

0x4e05,	// (0x00033de3) mup_volume_pane_cp

0x4cfb,	// (0x00033cd9) mup2_visualizer_pane_g1_ParamLimits

0x4cfb,	// (0x00033cd9) mup2_visualizer_pane_g1

0xc6db,	// (0x0003b6b9) mup2_visualizer_pane_g2_ParamLimits

0xc6db,	// (0x0003b6b9) mup2_visualizer_pane_g2

0x4d10,	// (0x00033cee) mup2_visualizer_pane_g3_ParamLimits

0x4d10,	// (0x00033cee) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0003e64e) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0003e64e) mup2_visualizer_pane_g

0xb4da,	// (0x0003a4b8) aid_size_cell_fmradio

0x0080,	// (0x0002f05e) aid_height_parent_landcape

0xa8e1,	// (0x000398bf) wml_content_pane_cp

0xa8e9,	// (0x000398c7) wml_tabs_pane

0xa8f2,	// (0x000398d0) popup_wml_miniature_window

0xa8fa,	// (0x000398d8) scroll_pane_cp021

0xa90e,	// (0x000398ec) wml_content_pane_comp8

0xa267,	// (0x00039245) bg_popup_sub_pane_cp05

0xc6f9,	// (0x0003b6d7) popup_wml_miniature_window_g1

0xc701,	// (0x0003b6df) wml_miniature_view_pane

0x4d1c,	// (0x00033cfa) aid_size_wml_view

0x4d24,	// (0x00033d02) wml_miniature_view_pane_g1

0x4d2d,	// (0x00033d0b) wml_miniature_view_pane_g2

0x4d36,	// (0x00033d14) wml_miniature_view_pane_g3

0x4d3e,	// (0x00033d1c) wml_miniature_view_pane_g4

0x4d46,	// (0x00033d24) wml_miniature_view_pane_g5

0x4d4e,	// (0x00033d2c) wml_miniature_view_pane_g6

0x4d56,	// (0x00033d34) wml_miniature_view_pane_g7

0x4d5e,	// (0x00033d3c) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0003e655) wml_miniature_view_pane_g

0xc709,	// (0x0003b6e7) background_graphic_ParamLimits

0xc709,	// (0x0003b6e7) background_graphic

0xc715,	// (0x0003b6f3) wml_tabs_2_pane

0xc71e,	// (0x0003b6fc) wml_tabs_3_pane_ParamLimits

0xc71e,	// (0x0003b6fc) wml_tabs_3_pane

0xc730,	// (0x0003b70e) wml_tabs_4_pane_ParamLimits

0xc730,	// (0x0003b70e) wml_tabs_4_pane

0xc746,	// (0x0003b724) wml_tabs_5_pane_ParamLimits

0xc746,	// (0x0003b724) wml_tabs_5_pane

0xc760,	// (0x0003b73e) wml_tabs_pane_g2_ParamLimits

0xc760,	// (0x0003b73e) wml_tabs_pane_g2

0xc774,	// (0x0003b752) wml_tabs_pane_g3_ParamLimits

0xc774,	// (0x0003b752) wml_tabs_pane_g3

0x4d66,	// (0x00033d44) wml_tabs_2_active_pane_ParamLimits

0x4d66,	// (0x00033d44) wml_tabs_2_active_pane

0x4d7a,	// (0x00033d58) wml_tabs_2_passive_pane_ParamLimits

0x4d7a,	// (0x00033d58) wml_tabs_2_passive_pane

0x4d8e,	// (0x00033d6c) wml_tabs_3_active_pane_cp_ParamLimits

0x4d8e,	// (0x00033d6c) wml_tabs_3_active_pane_cp

0x4da3,	// (0x00033d81) wml_tabs_3_passive_pane_ParamLimits

0x4da3,	// (0x00033d81) wml_tabs_3_passive_pane

0x4db6,	// (0x00033d94) wml_tabs_3_passive_pane_cp_ParamLimits

0x4db6,	// (0x00033d94) wml_tabs_3_passive_pane_cp

0x4dcd,	// (0x00033dab) tabs_4_active_pane

0x4dd5,	// (0x00033db3) tabs_4_passive_pane

0x4ddf,	// (0x00033dbd) tabs_4_passive_pane_cp

0x4de7,	// (0x00033dc5) tabs_4_passive_pane_cp2

0x4594,	// (0x00033572) aid_height_text

0x3bc3,	// (0x00032ba1) mup_volume_cont_pane_ParamLimits

0x3bc3,	// (0x00032ba1) mup_volume_cont_pane

0x162d,	// (0x0003060b) aid_size_cell_pinb

0x1637,	// (0x00030615) aid_size_list_pinb

0x4cd1,	// (0x00033caf) mup2_volume_cont_pane_ParamLimits

0x4cd1,	// (0x00033caf) mup2_volume_cont_pane

0x4df1,	// (0x00033dcf) mup2_volume_cont_pane_g1_ParamLimits

0x4df1,	// (0x00033dcf) mup2_volume_cont_pane_g1

0xfbae,	// (0x0002eb8c) aid_size_cell_touch_ParamLimits

0xfbae,	// (0x0002eb8c) aid_size_cell_touch

0xfd97,	// (0x0002ed75) touch_pane_ParamLimits

0xfd97,	// (0x0002ed75) touch_pane

0x1599,	// (0x00030577) main_rss2_pane

0xc791,	// (0x0003b76f) listscroll_rss2_pane

0xc79a,	// (0x0003b778) rss2_navigation_pane

0xc7a2,	// (0x0003b780) list_rss2_pane

0xaf4c,	// (0x00039f2a) scroll_pane_cp22

0xc7aa,	// (0x0003b788) rss2_navigation_pane_g1

0xc7b3,	// (0x0003b791) rss2_navigation_pane_g2

0xc7bb,	// (0x0003b799) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0003e666) rss2_navigation_pane_g

0xc7c3,	// (0x0003b7a1) rss2_navigation_pane_t1

0x4e2a,	// (0x00033e08) rss2_list_single_pane_ParamLimits

0x4e2a,	// (0x00033e08) rss2_list_single_pane

0xc7d1,	// (0x0003b7af) rss2_list_single_pane_t2

0xc7df,	// (0x0003b7bd) rss2_list_single_pane_t3_ParamLimits

0xc7df,	// (0x0003b7bd) rss2_list_single_pane_t3

0xc7fc,	// (0x0003b7da) rss2_list_single_pane_t4

0x33f9,	// (0x000323d7) smil_status_pane_g1

0x157f,	// (0x0003055d) main_image2_pane_ParamLimits

0x157f,	// (0x0003055d) main_image2_pane

0x04f6,	// (0x0002f4d4) main_camera2_pane_g9_ParamLimits

0x04f6,	// (0x0002f4d4) main_camera2_pane_g9

0x0612,	// (0x0002f5f0) main_camera2_pane_t5_ParamLimits

0x0612,	// (0x0002f5f0) main_camera2_pane_t5

0x4b72,	// (0x00033b50) main_camera2_pane_t6_ParamLimits

0x4b72,	// (0x00033b50) main_camera2_pane_t6

0x4e44,	// (0x00033e22) main_image2_pane_g1_ParamLimits

0x4e44,	// (0x00033e22) main_image2_pane_g1

0x42ab,	// (0x00033289) smil2_video_pane_ParamLimits

0x42ab,	// (0x00033289) smil2_video_pane

0x14ef,	// (0x000304cd) aid_zoom_text_primary_cp

0x1575,	// (0x00030553) popup_preview_fixed_window

0xa84a,	// (0x00039828) im_reading_pane_g1

0x03c8,	// (0x0002f3a6) cams2_bc_adjust_pane_cp_ParamLimits

0x03c8,	// (0x0002f3a6) cams2_bc_adjust_pane_cp

0x0638,	// (0x0002f616) cams2_bc_adjust_pane_ParamLimits

0x0638,	// (0x0002f616) cams2_bc_adjust_pane

0xd6ef,	// (0x0003c6cd) cams2_bc_adjust_pane_g1

0x4e5a,	// (0x00033e38) cams2_slider_pane

0x4e63,	// (0x00033e41) cams2_slider_pane_g1

0x4e6c,	// (0x00033e4a) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0003e66d) cams2_slider_pane_g

0xfe09,	// (0x0002ede7) calc_display_pane_ParamLimits

0xfe2e,	// (0x0002ee0c) calc_paper_pane_ParamLimits

0xfe51,	// (0x0002ee2f) grid_calc_pane_ParamLimits

0x36a5,	// (0x00032683) popup_clock_digital_window_t1_ParamLimits

0xb477,	// (0x0003a455) main_image_pane_t1

0xfde9,	// (0x0002edc7) aid_size_cell_calc_ParamLimits

0xfde9,	// (0x0002edc7) aid_size_cell_calc

0x00d6,	// (0x0002f0b4) popup_blid_sat_info2_window_ParamLimits

0x00d6,	// (0x0002f0b4) popup_blid_sat_info2_window

0xc812,	// (0x0003b7f0) aid_size_cell_blid

0xc81a,	// (0x0003b7f8) bg_popup_window_pane_cp07

0xc83d,	// (0x0003b81b) grid_popup_blid_pane

0xc847,	// (0x0003b825) heading_pane_cp05_ParamLimits

0xc847,	// (0x0003b825) heading_pane_cp05

0xc911,	// (0x0003b8ef) cell_popup_blid_pane_ParamLimits

0xc911,	// (0x0003b8ef) cell_popup_blid_pane

0xc93b,	// (0x0003b919) cell_popup_blid_pane_g1

0xc943,	// (0x0003b921) cell_popup_blid_pane_t1

0x4ca1,	// (0x00033c7f) mup2_indicator_pane_ParamLimits

0x4ca1,	// (0x00033c7f) mup2_indicator_pane

0xa738,	// (0x00039716) mup2_visualizer_osc_pane

0xc6e7,	// (0x0003b6c5) mup2_visualizer_spec_pane_ParamLimits

0xc6e7,	// (0x0003b6c5) mup2_visualizer_spec_pane

0x4e86,	// (0x00033e64) mup2_spec_half_pane

0x4e8f,	// (0x00033e6d) mup2_spec_half_pane_cp

0x4e97,	// (0x00033e75) mup2_spec_bar_pane_ParamLimits

0x4e97,	// (0x00033e75) mup2_spec_bar_pane

0xc671,	// (0x0003b64f) mup2_spec_bar_pane_g1

0xc67b,	// (0x0003b659) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0003e5e0) mup2_spec_bar_pane_g

0x4eb7,	// (0x00033e95) mup2_osc_middle_pane

0xc68d,	// (0x0003b66b) mup2_visualizer_osc_pane_g1

0x9e3f,	// (0x00038e1d) popup_number_entry_window_t1_ParamLimits

0x9e52,	// (0x00038e30) popup_number_entry_window_t2_ParamLimits

0x9e64,	// (0x00038e42) popup_number_entry_window_t3_ParamLimits

0x9e76,	// (0x00038e54) popup_number_entry_window_t5_ParamLimits

0x9e76,	// (0x00038e54) popup_number_entry_window_t5

0xf0c6,	// (0x0003e0a4) popup_number_entry_window_t_ParamLimits

0x9eab,	// (0x00038e89) text_title_cp2_ParamLimits

0x3f0a,	// (0x00032ee8) aid_hotspot_pointer_text2_pane

0x3f6c,	// (0x00032f4a) main_viewer_pane_g9_ParamLimits

0x3f6c,	// (0x00032f4a) main_viewer_pane_g9

0xaa83,	// (0x00039a61) cale_month_pane_t1_ParamLimits

0xaac0,	// (0x00039a9e) bg_cale_pane_ParamLimits

0xaad8,	// (0x00039ab6) list_cale_pane_ParamLimits

0xaae9,	// (0x00039ac7) listscroll_cale_day_pane_t1

0xaafb,	// (0x00039ad9) scroll_pane_cp09_ParamLimits

0x3bf9,	// (0x00032bd7) main_mup_eq_pane_t1_ParamLimits

0x3bf9,	// (0x00032bd7) main_mup_eq_pane_t1

0x3c15,	// (0x00032bf3) main_mup_eq_pane_t2_ParamLimits

0x3c15,	// (0x00032bf3) main_mup_eq_pane_t2

0x3c31,	// (0x00032c0f) main_mup_eq_pane_t3_ParamLimits

0x3c31,	// (0x00032c0f) main_mup_eq_pane_t3

0x3c4f,	// (0x00032c2d) main_mup_eq_pane_t4_ParamLimits

0x3c4f,	// (0x00032c2d) main_mup_eq_pane_t4

0x3c6d,	// (0x00032c4b) main_mup_eq_pane_t5_ParamLimits

0x3c6d,	// (0x00032c4b) main_mup_eq_pane_t5

0x3c8b,	// (0x00032c69) main_mup_eq_pane_t6_ParamLimits

0x3c8b,	// (0x00032c69) main_mup_eq_pane_t6

0x3ca1,	// (0x00032c7f) main_mup_eq_pane_t7_ParamLimits

0x3ca1,	// (0x00032c7f) main_mup_eq_pane_t7

0x3cb7,	// (0x00032c95) main_mup_eq_pane_t8_ParamLimits

0x3cb7,	// (0x00032c95) main_mup_eq_pane_t8

0x3ccd,	// (0x00032cab) main_mup_eq_pane_t9_ParamLimits

0x3ccd,	// (0x00032cab) main_mup_eq_pane_t9

0x3ce9,	// (0x00032cc7) main_mup_eq_pane_t10_ParamLimits

0x3ce9,	// (0x00032cc7) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0003e42f) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0003e42f) main_mup_eq_pane_t

0x3dbe,	// (0x00032d9c) mup_equalizer_pane_cp5_ParamLimits

0x3dd6,	// (0x00032db4) mup_equalizer_pane_cp6_ParamLimits

0x3dee,	// (0x00032dcc) mup_equalizer_pane_cp7_ParamLimits

0x1599,	// (0x00030577) main_gallery_pane

0xc696,	// (0x0003b674) smil2_volume_pane

0xc69e,	// (0x0003b67c) smil_status_volume_pane_g1_ParamLimits

0xc6b1,	// (0x0003b68f) smil_status_volume_pane_g2_ParamLimits

0x49a6,	// (0x00033984) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0003e5e5) smil_status_volume_pane_g_ParamLimits

0xc81a,	// (0x0003b7f8) bg_popup_window_pane_cp07_ParamLimits

0xc828,	// (0x0003b806) blid_firmament_pane

0x4ec0,	// (0x00033e9e) aid_size_cell_gallery_ParamLimits

0x4ec0,	// (0x00033e9e) aid_size_cell_gallery

0x4ed6,	// (0x00033eb4) grid_gallery_pane_ParamLimits

0x4ed6,	// (0x00033eb4) grid_gallery_pane

0x4ef1,	// (0x00033ecf) cell_gallery_pane_ParamLimits

0x4ef1,	// (0x00033ecf) cell_gallery_pane

0xc951,	// (0x0003b92f) bg_cell_gallery_focus_pane_ParamLimits

0xc951,	// (0x0003b92f) bg_cell_gallery_focus_pane

0xc963,	// (0x0003b941) cell_gallery_pane_g1_ParamLimits

0xc963,	// (0x0003b941) cell_gallery_pane_g1

0x4f42,	// (0x00033f20) cell_gallery_pane_g2_ParamLimits

0x4f42,	// (0x00033f20) cell_gallery_pane_g2

0x4f4f,	// (0x00033f2d) cell_gallery_pane_g3_ParamLimits

0x4f4f,	// (0x00033f2d) cell_gallery_pane_g3

0xc96f,	// (0x0003b94d) cell_gallery_pane_g4_ParamLimits

0xc96f,	// (0x0003b94d) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0003e693) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0003e693) cell_gallery_pane_g

0xc97b,	// (0x0003b959) bg_cell_gallery_focus_pane_g1

0xc983,	// (0x0003b961) bg_cell_gallery_focus_pane_g2

0xc98b,	// (0x0003b969) bg_cell_gallery_focus_pane_g3

0xc993,	// (0x0003b971) bg_cell_gallery_focus_pane_g4

0xc99b,	// (0x0003b979) bg_cell_gallery_focus_pane_g5

0xc9a3,	// (0x0003b981) bg_cell_gallery_focus_pane_g6

0xc9ab,	// (0x0003b989) bg_cell_gallery_focus_pane_g7

0xc9b3,	// (0x0003b991) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0003e69c) bg_cell_gallery_focus_pane_g

0xc9bb,	// (0x0003b999) aid_firma_cardinal

0xc9cf,	// (0x0003b9ad) blid_firmament_pane_t1

0xc9e6,	// (0x0003b9c4) blid_firmament_pane_t2

0xc9fd,	// (0x0003b9db) blid_firmament_pane_t3

0xca14,	// (0x0003b9f2) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0003e6ad) blid_firmament_pane_t

0xca2b,	// (0x0003ba09) blid_sat_info_pane

0xca3b,	// (0x0003ba19) blid_sat_info_pane_g1

0xca3b,	// (0x0003ba19) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0003e6b6) blid_sat_info_pane_g

0xca45,	// (0x0003ba23) blid_sat_info_pane_t1

0xca53,	// (0x0003ba31) smil2_volume_content_pane

0xca5c,	// (0x0003ba3a) smil2_volume_pane_g1

0xa608,	// (0x000395e6) smil2_volume_content_pane_g1

0xca64,	// (0x0003ba42) smil2_volume_content_pane_g2

0xca6d,	// (0x0003ba4b) smil2_volume_content_pane_g3

0xca76,	// (0x0003ba54) smil2_volume_content_pane_g4

0xca7f,	// (0x0003ba5d) smil2_volume_content_pane_g5

0xca88,	// (0x0003ba66) smil2_volume_content_pane_g6

0xca91,	// (0x0003ba6f) smil2_volume_content_pane_g7

0xca9a,	// (0x0003ba78) smil2_volume_content_pane_g8

0xcaa3,	// (0x0003ba81) smil2_volume_content_pane_g9

0xcaac,	// (0x0003ba8a) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0003e6bb) smil2_volume_content_pane_g

0x1cd8,	// (0x00030cb6) cale_week_day_heading_pane_t1_ParamLimits

0x1d02,	// (0x00030ce0) cale_week_day_heading_pane_t2_ParamLimits

0x1d31,	// (0x00030d0f) cale_week_day_heading_pane_t3_ParamLimits

0x1d60,	// (0x00030d3e) cale_week_day_heading_pane_t4_ParamLimits

0x1d8f,	// (0x00030d6d) cale_week_day_heading_pane_t5_ParamLimits

0x1dc2,	// (0x00030da0) cale_week_day_heading_pane_t6_ParamLimits

0x1df9,	// (0x00030dd7) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003e1ab) cale_week_day_heading_pane_t_ParamLimits

0xa6dd,	// (0x000396bb) bg_cale_side_pane_ParamLimits

0xff2e,	// (0x0002ef0c) cale_week_time_pane_t1_ParamLimits

0xff48,	// (0x0002ef26) cale_week_time_pane_t2_ParamLimits

0xff62,	// (0x0002ef40) cale_week_time_pane_t3_ParamLimits

0xff7c,	// (0x0002ef5a) cale_week_time_pane_t4_ParamLimits

0xff96,	// (0x0002ef74) cale_week_time_pane_t5_ParamLimits

0xffb0,	// (0x0002ef8e) cale_week_time_pane_t6_ParamLimits

0xffd0,	// (0x0002efae) cale_week_time_pane_t7_ParamLimits

0xfff6,	// (0x0002efd4) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003e1ba) cale_week_time_pane_t_ParamLimits

0x1e23,	// (0x00030e01) cell_cale_week_pane_g2_ParamLimits

0xa6dd,	// (0x000396bb) bg_cale_side_pane_cp01_ParamLimits

0x31cc,	// (0x000321aa) cale_month_week_pane_t1_ParamLimits

0x31e5,	// (0x000321c3) cale_month_week_pane_t2_ParamLimits

0x31fe,	// (0x000321dc) cale_month_week_pane_t3_ParamLimits

0x3217,	// (0x000321f5) cale_month_week_pane_t4_ParamLimits

0x3230,	// (0x0003220e) cale_month_week_pane_t5_ParamLimits

0x3249,	// (0x00032227) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0003e28f) cale_month_week_pane_t_ParamLimits

0x33e2,	// (0x000323c0) cell_cale_month_pane_g1_ParamLimits

0x1599,	// (0x00030577) main_cale_event_viewer_pane

0x9e15,	// (0x00038df3) listscroll_cale_event_viewer_pane

0xcab5,	// (0x0003ba93) list_cale_ev_pane

0xcabd,	// (0x0003ba9b) scroll_pane_cp023

0x4f5c,	// (0x00033f3a) field_cale_ev_pane_ParamLimits

0x4f5c,	// (0x00033f3a) field_cale_ev_pane

0xcac9,	// (0x0003baa7) field_cale_ev_content_pane_ParamLimits

0xcac9,	// (0x0003baa7) field_cale_ev_content_pane

0xcad5,	// (0x0003bab3) field_cale_ev_pane_g1_ParamLimits

0xcad5,	// (0x0003bab3) field_cale_ev_pane_g1

0xcae1,	// (0x0003babf) field_cale_ev_pane_g2_ParamLimits

0xcae1,	// (0x0003babf) field_cale_ev_pane_g2

0xcaf9,	// (0x0003bad7) field_cale_ev_pane_g3_ParamLimits

0xcaf9,	// (0x0003bad7) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0003e6d0) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0003e6d0) field_cale_ev_pane_g

0xcb11,	// (0x0003baef) field_cale_ev_pane_t1_ParamLimits

0xcb11,	// (0x0003baef) field_cale_ev_pane_t1

0x4f80,	// (0x00033f5e) field_cale_ev_content_pane_t1_ParamLimits

0x4f80,	// (0x00033f5e) field_cale_ev_content_pane_t1

0xb315,	// (0x0003a2f3) bg_button_pane_cp01

0x1990,	// (0x0003096e) listscroll_cale_week_pane_ParamLimits

0xa6a5,	// (0x00039683) popup_toolbar_window_cp01

0xa6ae,	// (0x0003968c) listscroll_cale_week_pane_t1_ParamLimits

0x1990,	// (0x0003096e) listscroll_cale_day_pane_ParamLimits

0xa6a5,	// (0x00039683) popup_toolbar_window_cp02

0xaae9,	// (0x00039ac7) listscroll_cale_day_pane_t1_ParamLimits

0x009e,	// (0x0002f07c) main_cale_month_pane_ParamLimits

0x48c3,	// (0x000338a1) popup_toolbar_window_cp03_ParamLimits

0x48c3,	// (0x000338a1) popup_toolbar_window_cp03

0x4169,	// (0x00033147) main_image_pane_g2_ParamLimits

0x4169,	// (0x00033147) main_image_pane_g2

0x417a,	// (0x00033158) main_image_pane_g3_ParamLimits

0x417a,	// (0x00033158) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0003e4c1) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0003e4c1) main_image_pane_g

0xb477,	// (0x0003a455) main_image_pane_t1_ParamLimits

0x418b,	// (0x00033169) main_image_pane_t2_ParamLimits

0x418b,	// (0x00033169) main_image_pane_t2

0x419d,	// (0x0003317b) main_image_pane_t3_ParamLimits

0x419d,	// (0x0003317b) main_image_pane_t3

0x41c5,	// (0x000331a3) main_image_pane_t4_ParamLimits

0x41c5,	// (0x000331a3) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0003e4c8) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0003e4c8) main_image_pane_t

0x41e5,	// (0x000331c3) popup_image_details_window_cp01

0x41ef,	// (0x000331cd) popup_toobar_trans_pane_cp01_ParamLimits

0x41ef,	// (0x000331cd) popup_toobar_trans_pane_cp01

0x01c9,	// (0x0002f1a7) popup_image_details_window_ParamLimits

0x01c9,	// (0x0002f1a7) popup_image_details_window

0x4894,	// (0x00033872) popup_image_focus_window

0x0382,	// (0x0002f360) camera2_autofocus_pane_ParamLimits

0x0382,	// (0x0002f360) camera2_autofocus_pane

0x9e15,	// (0x00038df3) bg_popup_sub_pane_cp06

0xcb28,	// (0x0003bb06) popup_image_focus_window_g1

0xcb30,	// (0x0003bb0e) popup_image_focus_window_g2

0xcb38,	// (0x0003bb16) popup_image_focus_window_g3

0xcb40,	// (0x0003bb1e) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0003e6d7) popup_image_focus_window_g

0xcb48,	// (0x0003bb26) popup_image_focus_window_t1

0xcb56,	// (0x0003bb34) popup_image_focus_window_t2

0xcb66,	// (0x0003bb44) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0003e6e0) popup_image_focus_window_t

0xcb74,	// (0x0003bb52) camera2_autofocus_pane_g1

0xb0f1,	// (0x0003a0cf) bg_tb_trans_pane_cp01

0xcb82,	// (0x0003bb60) popup_image_details_window_g1

0xcb95,	// (0x0003bb73) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0003e6f2) popup_image_details_window_g

0xcbbe,	// (0x0003bb9c) popup_image_details_window_t1

0xcbd0,	// (0x0003bbae) popup_image_details_window_t2

0xcbe9,	// (0x0003bbc7) popup_image_details_window_t3

0xcbfd,	// (0x0003bbdb) popup_image_details_window_t4

0xcc18,	// (0x0003bbf6) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0003e6f9) popup_image_details_window_t

0xa573,	// (0x00039551) bg_calc_paper_pane_ParamLimits

0x1599,	// (0x00030577) grid_highlight_pane_cp013

0x17e3,	// (0x000307c1) list_calc_pane_ParamLimits

0x17f5,	// (0x000307d3) scroll_pane_cp024

0xa587,	// (0x00039565) bg_calc_display_pane_ParamLimits

0xfe7f,	// (0x0002ee5d) calc_display_pane_t1_ParamLimits

0xfe91,	// (0x0002ee6f) calc_display_pane_t2_ParamLimits

0x17fd,	// (0x000307db) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0003e12b) calc_display_pane_t_ParamLimits

0xfef8,	// (0x0002eed6) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0003e148) cell_calc_pane_g

0xff01,	// (0x0002eedf) cell_calc_pane_t1

0xa5e6,	// (0x000395c4) grid_highlight_pane_cp02_ParamLimits

0xa5fc,	// (0x000395da) toolbar_button_pane_cp01_ParamLimits

0xa5fc,	// (0x000395da) toolbar_button_pane_cp01

0xb4bc,	// (0x0003a49a) temp_image_control_pane_ParamLimits

0xb4bc,	// (0x0003a49a) temp_image_control_pane

0x157f,	// (0x0003055d) main_mp3_pane

0xcc32,	// (0x0003bc10) temp_image_control_pane_g1_ParamLimits

0xcc32,	// (0x0003bc10) temp_image_control_pane_g1

0xcc40,	// (0x0003bc1e) temp_image_control_pane_g2_ParamLimits

0xcc40,	// (0x0003bc1e) temp_image_control_pane_g2

0xcc52,	// (0x0003bc30) temp_image_control_pane_g3_ParamLimits

0xcc52,	// (0x0003bc30) temp_image_control_pane_g3

0x4fd1,	// (0x00033faf) temp_image_control_pane_g4_ParamLimits

0x4fd1,	// (0x00033faf) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0003e704) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0003e704) temp_image_control_pane_g

0xcc32,	// (0x0003bc10) main_mp3_pane_g1

0x4fe4,	// (0x00033fc2) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0003e70d) main_mp3_pane_g

0xcc95,	// (0x0003bc73) main_mp3_pane_t1

0xa755,	// (0x00039733) main_camera_pane_g8_ParamLimits

0xa755,	// (0x00039733) main_camera_pane_g8

0x213f,	// (0x0003111d) main_video_pane_g7_ParamLimits

0x213f,	// (0x0003111d) main_video_pane_g7

0x4b8b,	// (0x00033b69) main_camera2_pane_t7_ParamLimits

0x4b8b,	// (0x00033b69) main_camera2_pane_t7

0xa8a1,	// (0x0003987f) scroll_pane_cp025_ParamLimits

0xa8a1,	// (0x0003987f) scroll_pane_cp025

0xa8b5,	// (0x00039893) scroll_pane_cp026_ParamLimits

0xa8b5,	// (0x00039893) scroll_pane_cp026

0xa8c4,	// (0x000398a2) wml_content_pane_ParamLimits

0x1599,	// (0x00030577) main_touch_calib_pane

0x50b6,	// (0x00034094) main_touch_calib_pane_g1

0x50c8,	// (0x000340a6) main_touch_calib_pane_g2

0x50da,	// (0x000340b8) main_touch_calib_pane_g3

0x50ec,	// (0x000340ca) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0003e72b) main_touch_calib_pane_g

0x50fe,	// (0x000340dc) main_touch_calib_pane_t1

0x5118,	// (0x000340f6) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0003e734) main_touch_calib_pane_t

0xb01b,	// (0x00039ff9) mup_progress_pane_cp02

0xb050,	// (0x0003a02e) navi_pane_g1

0xb133,	// (0x0003a111) navi_pane_mp_t3

0x157f,	// (0x0003055d) main_mp3_pane_ParamLimits

0x48d8,	// (0x000338b6) navi_pane_ParamLimits

0xcc32,	// (0x0003bc10) main_mp3_pane_g1_ParamLimits

0x4fe4,	// (0x00033fc2) main_mp3_pane_g2_ParamLimits

0x4ff0,	// (0x00033fce) main_mp3_pane_g3_ParamLimits

0x4ff0,	// (0x00033fce) main_mp3_pane_g3

0x4ffe,	// (0x00033fdc) main_mp3_pane_g4_ParamLimits

0x4ffe,	// (0x00033fdc) main_mp3_pane_g4

0xcc62,	// (0x0003bc40) main_mp3_pane_g5_ParamLimits

0xcc62,	// (0x0003bc40) main_mp3_pane_g5

0xcc70,	// (0x0003bc4e) main_mp3_pane_g6_ParamLimits

0xcc70,	// (0x0003bc4e) main_mp3_pane_g6

0xcc7d,	// (0x0003bc5b) main_mp3_pane_g7_ParamLimits

0xcc7d,	// (0x0003bc5b) main_mp3_pane_g7

0xcc89,	// (0x0003bc67) main_mp3_pane_g8_ParamLimits

0xcc89,	// (0x0003bc67) main_mp3_pane_g8

0xf72f,	// (0x0003e70d) main_mp3_pane_g_ParamLimits

0x500a,	// (0x00033fe8) main_mp3_pane_t2

0x5018,	// (0x00033ff6) main_mp3_pane_t3

0xcca3,	// (0x0003bc81) main_mp3_pane_t4

0xccb1,	// (0x0003bc8f) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0003e71e) main_mp3_pane_t

0xccbf,	// (0x0003bc9d) mup_progress_pane_cp01

0x14ef,	// (0x000304cd) aid_zoom_text_secondary2

0xcab5,	// (0x0003ba93) list_cale_ev2_pane

0xcabd,	// (0x0003ba9b) scroll_pane_cp023_ParamLimits

0x5172,	// (0x00034150) field_cale_ev2_pane_ParamLimits

0x5172,	// (0x00034150) field_cale_ev2_pane

0x5196,	// (0x00034174) field_cale_ev2_pane_g1_ParamLimits

0x5196,	// (0x00034174) field_cale_ev2_pane_g1

0x51a2,	// (0x00034180) field_cale_ev2_pane_g2_ParamLimits

0x51a2,	// (0x00034180) field_cale_ev2_pane_g2

0x51ba,	// (0x00034198) field_cale_ev2_pane_g3_ParamLimits

0x51ba,	// (0x00034198) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0003e73f) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0003e73f) field_cale_ev2_pane_g

0x51d2,	// (0x000341b0) field_cale_ev2_pane_t1_ParamLimits

0x51d2,	// (0x000341b0) field_cale_ev2_pane_t1

0x51e9,	// (0x000341c7) field_cale_ev2_pane_t2_ParamLimits

0x51e9,	// (0x000341c7) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0003e748) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0003e748) field_cale_ev2_pane_t

0x4001,	// (0x00032fdf) main_postcard_pane_g5_ParamLimits

0x4001,	// (0x00032fdf) main_postcard_pane_g5

0x4017,	// (0x00032ff5) main_postcard_pane_g6_ParamLimits

0x4017,	// (0x00032ff5) main_postcard_pane_g6

0x1eeb,	// (0x00030ec9) camera2_autofocus_pane_cp_ParamLimits

0x1eeb,	// (0x00030ec9) camera2_autofocus_pane_cp

0x157f,	// (0x0003055d) main_mup3_pane

0x5248,	// (0x00034226) main_mup3_pane_g1_ParamLimits

0x5248,	// (0x00034226) main_mup3_pane_g1

0x526a,	// (0x00034248) main_mup3_pane_g2_ParamLimits

0x526a,	// (0x00034248) main_mup3_pane_g2

0x52e5,	// (0x000342c3) main_mup3_pane_g3_ParamLimits

0x52e5,	// (0x000342c3) main_mup3_pane_g3

0x534f,	// (0x0003432d) main_mup3_pane_g4_ParamLimits

0x534f,	// (0x0003432d) main_mup3_pane_g4

0x53b9,	// (0x00034397) main_mup3_pane_g5_ParamLimits

0x53b9,	// (0x00034397) main_mup3_pane_g5

0x5423,	// (0x00034401) main_mup3_pane_g6_ParamLimits

0x5423,	// (0x00034401) main_mup3_pane_g6

0xccd3,	// (0x0003bcb1) main_mup3_pane_g7_ParamLimits

0xccd3,	// (0x0003bcb1) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0003e758) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0003e758) main_mup3_pane_g

0x54a3,	// (0x00034481) main_mup3_pane_t1_ParamLimits

0x54a3,	// (0x00034481) main_mup3_pane_t1

0x5515,	// (0x000344f3) main_mup3_pane_t2_ParamLimits

0x5515,	// (0x000344f3) main_mup3_pane_t2

0x55e7,	// (0x000345c5) main_mup3_pane_t4_ParamLimits

0x55e7,	// (0x000345c5) main_mup3_pane_t4

0x5645,	// (0x00034623) main_mup3_pane_t5_ParamLimits

0x5645,	// (0x00034623) main_mup3_pane_t5

0x5701,	// (0x000346df) main_mup3_pane_t6_ParamLimits

0x5701,	// (0x000346df) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0003e769) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0003e769) main_mup3_pane_t

0x57b9,	// (0x00034797) mup3_progress_pane_ParamLimits

0x57b9,	// (0x00034797) mup3_progress_pane

0x5851,	// (0x0003482f) popup_mup3_control_window_ParamLimits

0x5851,	// (0x0003482f) popup_mup3_control_window

0xcce1,	// (0x0003bcbf) popup_mup3_text_window

0x5887,	// (0x00034865) mup3_progress_pane_t1

0x58a6,	// (0x00034884) mup3_progress_pane_t2

0xcce9,	// (0x0003bcc7) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0003e776) mup3_progress_pane_t

0xcd06,	// (0x0003bce4) mup_progress_pane_cp03

0x9e15,	// (0x00038df3) bg_tb_trans_pane_cp04

0x58c5,	// (0x000348a3) mup3_volume_pane

0x58cd,	// (0x000348ab) popup_mup3_control_window_g1

0x58d6,	// (0x000348b4) mup3_volume_pane_g1

0x58df,	// (0x000348bd) mup3_volume_pane_g2

0x58e8,	// (0x000348c6) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0003e77d) mup3_volume_pane_g

0x9e15,	// (0x00038df3) bg_tb_trans_pane_cp03

0xcd16,	// (0x0003bcf4) popup_mup3_text_window_g1

0xcd1e,	// (0x0003bcfc) popup_mup3_text_window_t1

0xa5cf,	// (0x000395ad) list_calc_item_pane_g1_ParamLimits

0xc788,	// (0x0003b766) mup_volume_pane_cp_g1

0x5132,	// (0x00034110) main_touch_calib_pane_t3

0x5146,	// (0x00034124) main_touch_calib_pane_t4

0x515c,	// (0x0003413a) main_touch_calib_pane_t5

0x14db,	// (0x000304b9) aid_cell_size_toolbar2

0x14e3,	// (0x000304c1) aid_popup3_width_pane

0x14ef,	// (0x000304cd) aid_zoom_text_msg_primary

0x1ed3,	// (0x00030eb1) vorec_t7

0xa593,	// (0x00039571) bg_calc_paper_pane_g1_ParamLimits

0xa59f,	// (0x0003957d) bg_calc_paper_pane_g2_ParamLimits

0xa5ab,	// (0x00039589) bg_calc_paper_pane_g3_ParamLimits

0xa5b7,	// (0x00039595) bg_calc_paper_pane_g4_ParamLimits

0xa5c3,	// (0x000395a1) bg_calc_paper_pane_g5_ParamLimits

0x180f,	// (0x000307ed) bg_calc_paper_pane_g6_ParamLimits

0x181d,	// (0x000307fb) bg_calc_paper_pane_g7_ParamLimits

0x182b,	// (0x00030809) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0003e132) bg_calc_paper_pane_g_ParamLimits

0x183e,	// (0x0003081c) calc_bg_paper_pane_g9_ParamLimits

0x204d,	// (0x0003102b) image_qvga_pane_ParamLimits

0x204d,	// (0x0003102b) image_qvga_pane

0xa4c2,	// (0x000394a0) bg_popup_sub_pane_cp04_ParamLimits

0xb3f3,	// (0x0003a3d1) popup_mup_playback_window_g1_ParamLimits

0xb3ff,	// (0x0003a3dd) popup_mup_playback_window_t1_ParamLimits

0xb414,	// (0x0003a3f2) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0003e4bc) popup_mup_playback_window_t_ParamLimits

0x4bb9,	// (0x00033b97) main_mup2_pane_g3_ParamLimits

0x4bb9,	// (0x00033b97) main_mup2_pane_g3

0x2455,	// (0x00031433) popup_toolbar_window_cp04

0xb80f,	// (0x0003a7ed) popup_call2_audio_second_window_g3_ParamLimits

0xb80f,	// (0x0003a7ed) popup_call2_audio_second_window_g3

0xbc19,	// (0x0003abf7) popup_call2_audio_first_window_g4_ParamLimits

0xbc19,	// (0x0003abf7) popup_call2_audio_first_window_g4

0xc298,	// (0x0003b276) popup_call2_audio_in_window_g4_ParamLimits

0xc298,	// (0x0003b276) popup_call2_audio_in_window_g4

0x414b,	// (0x00033129) aid_area_sk_bg_cut_ParamLimits

0x414b,	// (0x00033129) aid_area_sk_bg_cut

0xb429,	// (0x0003a407) aid_area_sk_bg_cut_2_ParamLimits

0xb429,	// (0x0003a407) aid_area_sk_bg_cut_2

0x4f32,	// (0x00033f10) aid_placing_details_win

0x4f3a,	// (0x00033f18) aid_placing_details_win_2

0xcb74,	// (0x0003bb52) camera2_autofocus_pane_g1_ParamLimits

0xfd3e,	// (0x0002ed1c) popup_fixed_preview_cale_window_ParamLimits

0xfd3e,	// (0x0002ed1c) popup_fixed_preview_cale_window

0xb1b3,	// (0x0003a191) navi_slider_pane_g3

0xb1bc,	// (0x0003a19a) navi_slider_pane_g4

0xb1c5,	// (0x0003a1a3) navi_slider_pane_g5

0xb1b3,	// (0x0003a191) navi_slider_pane_g6

0x39a7,	// (0x00032985) navi_slider_pane_g7

0xb2da,	// (0x0003a2b8) mup_scale_pane_g3

0xb2e3,	// (0x0003a2c1) mup_scale_pane_g4

0xb2ec,	// (0x0003a2ca) mup_scale_pane_g5

0x3e06,	// (0x00032de4) mup_scale_pane_g6

0x3e0f,	// (0x00032ded) mup_scale_pane_g7

0xb1b3,	// (0x0003a191) cams2_slider_pane_g3

0xc80a,	// (0x0003b7e8) cams2_slider_pane_g4

0x4e75,	// (0x00033e53) cams2_slider_pane_g5

0xb1b3,	// (0x0003a191) cams2_slider_pane_g6

0x4e7d,	// (0x00033e5b) cams2_slider_pane_g7

0xca3b,	// (0x0003ba19) camera2_autofocus_pane_cp_g1

0xc5f7,	// (0x0003b5d5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5f7,	// (0x0003b5d5) bg_popup_preview_window_pane_cp02

0xcd2c,	// (0x0003bd0a) list_fp_cale_pane_ParamLimits

0xcd2c,	// (0x0003bd0a) list_fp_cale_pane

0xcd38,	// (0x0003bd16) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd38,	// (0x0003bd16) popup_fixed_preview_cale_window_t1

0x58f1,	// (0x000348cf) popup_fixed_preview_cale_window_t2_ParamLimits

0x58f1,	// (0x000348cf) popup_fixed_preview_cale_window_t2

0x5906,	// (0x000348e4) popup_fixed_preview_cale_window_t3_ParamLimits

0x5906,	// (0x000348e4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0003e784) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0003e784) popup_fixed_preview_cale_window_t

0x591d,	// (0x000348fb) list_single_fp_cale_pane_ParamLimits

0x591d,	// (0x000348fb) list_single_fp_cale_pane

0xcd56,	// (0x0003bd34) list_single_fp_cale_pane_g1_ParamLimits

0xcd56,	// (0x0003bd34) list_single_fp_cale_pane_g1

0xcd62,	// (0x0003bd40) list_single_fp_cale_pane_g2_ParamLimits

0xcd62,	// (0x0003bd40) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0003e78b) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0003e78b) list_single_fp_cale_pane_g

0xcd7b,	// (0x0003bd59) list_single_fp_cale_pane_t1_ParamLimits

0xcd7b,	// (0x0003bd59) list_single_fp_cale_pane_t1

0xcd8d,	// (0x0003bd6b) list_single_fp_cale_pane_t2_ParamLimits

0xcd8d,	// (0x0003bd6b) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0003e792) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0003e792) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1599,	// (0x00030577) main_dialer_pane

0x5935,	// (0x00034913) aid_cell_size_keypad

0x593f,	// (0x0003491d) dialer_ne_pane

0x5949,	// (0x00034927) grid_dialer_command_1_pane

0x5951,	// (0x0003492f) grid_dialer_command_2_pane

0x5959,	// (0x00034937) grid_dialer_keypad_pane

0x596d,	// (0x0003494b) bg_popup_call_pane_cp06_ParamLimits

0x596d,	// (0x0003494b) bg_popup_call_pane_cp06

0x5979,	// (0x00034957) dialer_ne_clear_pane_ParamLimits

0x5979,	// (0x00034957) dialer_ne_clear_pane

0xcdc0,	// (0x0003bd9e) dialer_ne_pane_g1

0xcdc8,	// (0x0003bda6) dialer_ne_pane_t1_ParamLimits

0xcdc8,	// (0x0003bda6) dialer_ne_pane_t1

0x5985,	// (0x00034963) dialer_ne_pane_t2_ParamLimits

0x5985,	// (0x00034963) dialer_ne_pane_t2

0x59af,	// (0x0003498d) dialer_ne_pane_t3_ParamLimits

0x59af,	// (0x0003498d) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0003e797) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0003e797) dialer_ne_pane_t

0x59df,	// (0x000349bd) dialer_ne_pane_t3_copy1_ParamLimits

0x59df,	// (0x000349bd) dialer_ne_pane_t3_copy1

0x5a0e,	// (0x000349ec) cell_dialer_keypad_pane_ParamLimits

0x5a0e,	// (0x000349ec) cell_dialer_keypad_pane

0x5a25,	// (0x00034a03) cell_dialer_command_1_pane_ParamLimits

0x5a25,	// (0x00034a03) cell_dialer_command_1_pane

0x5a3b,	// (0x00034a19) cell_dialer_command_2_pane_ParamLimits

0x5a3b,	// (0x00034a19) cell_dialer_command_2_pane

0xcdda,	// (0x0003bdb8) bg_button_pane_cp02_ParamLimits

0xcdda,	// (0x0003bdb8) bg_button_pane_cp02

0x5a4a,	// (0x00034a28) cell_dialer_keypad_pane_g1_ParamLimits

0x5a4a,	// (0x00034a28) cell_dialer_keypad_pane_g1

0xcdda,	// (0x0003bdb8) bg_button_pane_cp03_ParamLimits

0xcdda,	// (0x0003bdb8) bg_button_pane_cp03

0x5a5b,	// (0x00034a39) cell_dialer_command_1_pane_g1_ParamLimits

0x5a5b,	// (0x00034a39) cell_dialer_command_1_pane_g1

0xcde6,	// (0x0003bdc4) bg_button_pane_cp04

0x5a6f,	// (0x00034a4d) cell_dialer_command_2_pane_g1

0xa738,	// (0x00039716) bg_button_pane_cp06

0xcdee,	// (0x0003bdcc) dialer_ne_clear_pane_g1

0xb05c,	// (0x0003a03a) navi_pane_g2

0xb08a,	// (0x0003a068) navi_pane_g3

0x0002,

0xf3e1,	// (0x0003e3bf) navi_pane_g

0xb141,	// (0x0003a11f) navi_pane_mv_g2

0xb16a,	// (0x0003a148) navi_pane_mv_g5

0x395c,	// (0x0003293a) navi_pane_mv_t1

0xa587,	// (0x00039565) main_clock2_pane

0xb0f1,	// (0x0003a0cf) main_clock2_list_pane_ParamLimits

0xb0f1,	// (0x0003a0cf) main_clock2_list_pane

0x5adb,	// (0x00034ab9) main_clock2_pane_t1_ParamLimits

0x5adb,	// (0x00034ab9) main_clock2_pane_t1

0x5b16,	// (0x00034af4) main_clock2_pane_t2_ParamLimits

0x5b16,	// (0x00034af4) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0003e7a3) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0003e7a3) main_clock2_pane_t

0x5bb5,	// (0x00034b93) popup_clock_analogue_window_cp03_ParamLimits

0x5bb5,	// (0x00034b93) popup_clock_analogue_window_cp03

0x5bda,	// (0x00034bb8) popup_clock_digital_window_cp02_ParamLimits

0x5bda,	// (0x00034bb8) popup_clock_digital_window_cp02

0x5c53,	// (0x00034c31) main_clock2_list_single_pane_ParamLimits

0x5c53,	// (0x00034c31) main_clock2_list_single_pane

0xa738,	// (0x00039716) list_highlight_pane_cp05

0xce26,	// (0x0003be04) main_clock2_list_single_pane_t1

0x2455,	// (0x00031433) popup_toolbar_window_cp04_ParamLimits

0x4fa1,	// (0x00033f7f) camera2_autofocus_pane_g2_ParamLimits

0x4fa1,	// (0x00033f7f) camera2_autofocus_pane_g2

0x4fad,	// (0x00033f8b) camera2_autofocus_pane_g3_ParamLimits

0x4fad,	// (0x00033f8b) camera2_autofocus_pane_g3

0x4fb9,	// (0x00033f97) camera2_autofocus_pane_g4_ParamLimits

0x4fb9,	// (0x00033f97) camera2_autofocus_pane_g4

0x4fc5,	// (0x00033fa3) camera2_autofocus_pane_g5_ParamLimits

0x4fc5,	// (0x00033fa3) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0003e6e7) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0003e6e7) camera2_autofocus_pane_g

0x51fe,	// (0x000341dc) camera2_autofocus_pane_cp_g2

0x5206,	// (0x000341e4) camera2_autofocus_pane_cp_g3

0x520e,	// (0x000341ec) camera2_autofocus_pane_cp_g4

0x5216,	// (0x000341f4) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0003e74d) camera2_autofocus_pane_cp_g

0x5965,	// (0x00034943) popup_dialer_spcha_window

0x9e15,	// (0x00038df3) bg_popup_sub_pane_cp07

0xce34,	// (0x0003be12) list_spcha_pane

0xce3c,	// (0x0003be1a) list_single_spcha_pane_ParamLimits

0xce3c,	// (0x0003be1a) list_single_spcha_pane

0x9e15,	// (0x00038df3) list_highlight_pane_cp06

0xce4d,	// (0x0003be2b) list_single_spcha_pane_t1

0xc042,	// (0x0003b020) popup_call2_audio_out_window_g4_ParamLimits

0xc042,	// (0x0003b020) popup_call2_audio_out_window_g4

0x1599,	// (0x00030577) main_imed2_pane

0x489e,	// (0x0003387c) popup_imed_adjust2_window

0x01e1,	// (0x0002f1bf) popup_imed_trans_window_ParamLimits

0x01e1,	// (0x0002f1bf) popup_imed_trans_window

0xc873,	// (0x0003b851) popup_blid_sat_info2_window_t1

0xc881,	// (0x0003b85f) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0003e67c) popup_blid_sat_info2_window_t

0x5c65,	// (0x00034c43) aid_size_cell_colour_35

0x5c85,	// (0x00034c63) aid_size_cell_colour_112

0x5ca5,	// (0x00034c83) aid_size_cell_effect

0xc603,	// (0x0003b5e1) bg_tb_trans_pane_cp02

0xabf2,	// (0x00039bd0) heading_imed_pane

0x5cc5,	// (0x00034ca3) listscroll_imed_pane

0xce5b,	// (0x0003be39) heading_imed_pane_g1

0xce63,	// (0x0003be41) heading_imed_pane_t1

0xce71,	// (0x0003be4f) grid_imed_colour_35_pane_ParamLimits

0xce71,	// (0x0003be4f) grid_imed_colour_35_pane

0x5cd1,	// (0x00034caf) grid_imed_effect_pane

0xce8d,	// (0x0003be6b) list_imed_aspect_pane

0x5ce8,	// (0x00034cc6) scroll_pane_cp027_ParamLimits

0x5ce8,	// (0x00034cc6) scroll_pane_cp027

0x5cf9,	// (0x00034cd7) cell_imed_effect_pane_ParamLimits

0x5cf9,	// (0x00034cd7) cell_imed_effect_pane

0xce95,	// (0x0003be73) cell_imed_colour_pane_ParamLimits

0xce95,	// (0x0003be73) cell_imed_colour_pane

0xcedf,	// (0x0003bebd) cell_imed_colour_pane_g1_ParamLimits

0xcedf,	// (0x0003bebd) cell_imed_colour_pane_g1

0xcef0,	// (0x0003bece) hgihlgiht_grid_pane_cp016_ParamLimits

0xcef0,	// (0x0003bece) hgihlgiht_grid_pane_cp016

0x5d24,	// (0x00034d02) cell_imed_effect_pane_g1

0x5d2c,	// (0x00034d0a) grid_highlight_pane_cp017

0xcf01,	// (0x0003bedf) list_imed_single_pane_ParamLimits

0xcf01,	// (0x0003bedf) list_imed_single_pane

0x9e15,	// (0x00038df3) list_highlight_pane_cp07

0xcf15,	// (0x0003bef3) list_imed_aspect_pane_comp1_t1

0xc603,	// (0x0003b5e1) bg_tb_trans_pane_cp05

0xcf37,	// (0x0003bf15) popup_imed_adjust2_window_g1

0xcf5e,	// (0x0003bf3c) popup_imed_adjust2_window_t1

0xcf76,	// (0x0003bf54) slider_imed_adjust_pane

0xcf8a,	// (0x0003bf68) slider_imed_adjust_pane_g1

0xcf9a,	// (0x0003bf78) slider_imed_adjust_pane_g2

0xcfaa,	// (0x0003bf88) slider_imed_adjust_pane_g3

0xcfbb,	// (0x0003bf99) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0003e7c0) slider_imed_adjust_pane_g

0x5d35,	// (0x00034d13) aid_size_cell_clipart2

0xcfcc,	// (0x0003bfaa) grid_imed_clipart_pane

0xcfd6,	// (0x0003bfb4) scroll_pane_cp031

0x5d41,	// (0x00034d1f) cell_imed_clipart_pane_ParamLimits

0x5d41,	// (0x00034d1f) cell_imed_clipart_pane

0x5d5e,	// (0x00034d3c) cell_imed_clipart_pane_g1

0x9e15,	// (0x00038df3) grid_highlight_pane_cp014

0x5ab9,	// (0x00034a97) main_clock2_pane_g1_ParamLimits

0x5ab9,	// (0x00034a97) main_clock2_pane_g1

0x5bfa,	// (0x00034bd8) aid_call2_pane_cp10

0x5c0c,	// (0x00034bea) aid_call_pane_cp10

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g1

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g2

0x5c1e,	// (0x00034bfc) popup_clock_analogue_window_cp10_g3

0x5c1e,	// (0x00034bfc) popup_clock_analogue_window_cp10_g4

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0003e7ae) popup_clock_analogue_window_cp10_g

0x5c34,	// (0x00034c12) popup_clock_analogue_window_cp10_t1

0x07ea,	// (0x0002f7c8) clock_digital_number_pane_cp10_ParamLimits

0x07ea,	// (0x0002f7c8) clock_digital_number_pane_cp10

0x0804,	// (0x0002f7e2) clock_digital_number_pane_cp11_ParamLimits

0x0804,	// (0x0002f7e2) clock_digital_number_pane_cp11

0x081e,	// (0x0002f7fc) clock_digital_number_pane_cp12_ParamLimits

0x081e,	// (0x0002f7fc) clock_digital_number_pane_cp12

0x083a,	// (0x0002f818) clock_digital_number_pane_cp13_ParamLimits

0x083a,	// (0x0002f818) clock_digital_number_pane_cp13

0x0856,	// (0x0002f834) clock_digital_separator_pane_cp10_ParamLimits

0x0856,	// (0x0002f834) clock_digital_separator_pane_cp10

0x0872,	// (0x0002f850) popup_clock_digital_window_cp02_t1_ParamLimits

0x0872,	// (0x0002f850) popup_clock_digital_window_cp02_t1

0xa4ba,	// (0x00039498) clock_digital_number_pane_cp10_g1

0xa4ba,	// (0x00039498) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0003e7c9) clock_digital_number_pane_cp10_g

0xa4ba,	// (0x00039498) clock_digital_separator_pane_cp10_g1

0xa4ba,	// (0x00039498) clock_digital_separator_pane_g2_cp10

0xb172,	// (0x0003a150) navi_pane_vded_g4

0xb17b,	// (0x0003a159) navi_pane_vded_g5

0xb184,	// (0x0003a162) navi_pane_vded_t1

0x1599,	// (0x00030577) main_vded_pane

0x5d67,	// (0x00034d45) main_vded_pane_g1

0x5d73,	// (0x00034d51) main_vded_pane_g2

0x5d7f,	// (0x00034d5d) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0003e7ce) main_vded_pane_g

0x5d8b,	// (0x00034d69) main_vded_pane_t1

0x5d99,	// (0x00034d77) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0003e7d5) main_vded_pane_t

0x5da7,	// (0x00034d85) vded_slider_pane

0x5db1,	// (0x00034d8f) vded_video_pane

0xcfde,	// (0x0003bfbc) vded_video_pane_g1

0x5dbd,	// (0x00034d9b) vded_video_pane_g2

0xca3b,	// (0x0003ba19) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0003e7da) vded_video_pane_g

0xcfe8,	// (0x0003bfc6) vded_slider_pane_g1

0xc788,	// (0x0003b766) vded_slider_pane_g2

0xcff1,	// (0x0003bfcf) vded_slider_pane_g3

0xcffa,	// (0x0003bfd8) vded_slider_pane_g4

0xd003,	// (0x0003bfe1) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0003e7e1) vded_slider_pane_g

0x583b,	// (0x00034819) mup3_rocker_pane_ParamLimits

0x583b,	// (0x00034819) mup3_rocker_pane

0x5dc6,	// (0x00034da4) mup3_control_keys_pane_g1

0x5dce,	// (0x00034dac) mup3_control_keys_pane_g2

0x5dd6,	// (0x00034db4) mup3_control_keys_pane_g3

0x5dde,	// (0x00034dbc) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0003e7ec) mup3_control_keys_pane_g

0xfd73,	// (0x0002ed51) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfd73,	// (0x0002ed51) popup_toolbar2_fixed_window_cp01

0x5871,	// (0x0003484f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5871,	// (0x0003484f) popup_toolbar2_fixed_window_cp02

0xb981,	// (0x0003a95f) popup_call2_audio_second_window_t4_ParamLimits

0xb981,	// (0x0003a95f) popup_call2_audio_second_window_t4

0xbeaf,	// (0x0003ae8d) popup_call2_audio_first_window_t6_ParamLimits

0xbeaf,	// (0x0003ae8d) popup_call2_audio_first_window_t6

0xc145,	// (0x0003b123) popup_call2_audio_out_window_t6_ParamLimits

0xc145,	// (0x0003b123) popup_call2_audio_out_window_t6

0x1599,	// (0x00030577) main_vitu_pane

0x5dee,	// (0x00034dcc) aid_size_cell_itu_ParamLimits

0x5dee,	// (0x00034dcc) aid_size_cell_itu

0xb0f1,	// (0x0003a0cf) bg_popup_window_pane_cp08_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_popup_window_pane_cp08

0x5e04,	// (0x00034de2) field_vitu_entry_pane_ParamLimits

0x5e04,	// (0x00034de2) field_vitu_entry_pane

0x5e1b,	// (0x00034df9) grid_vitu_function_pane_ParamLimits

0x5e1b,	// (0x00034df9) grid_vitu_function_pane

0x5e36,	// (0x00034e14) grid_vitu_itu_pane_ParamLimits

0x5e36,	// (0x00034e14) grid_vitu_itu_pane

0x5e54,	// (0x00034e32) cell_vitu_itu_pane_ParamLimits

0x5e54,	// (0x00034e32) cell_vitu_itu_pane

0x5e7a,	// (0x00034e58) cell_vitu_function_pane_ParamLimits

0x5e7a,	// (0x00034e58) cell_vitu_function_pane

0xb0f1,	// (0x0003a0cf) bg_popup_sub_pane_cp08_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_popup_sub_pane_cp08

0x5e95,	// (0x00034e73) field_vitu_entry_pane_t1_ParamLimits

0x5e95,	// (0x00034e73) field_vitu_entry_pane_t1

0xd024,	// (0x0003c002) field_vitu_entry_pane_t2_ParamLimits

0xd024,	// (0x0003c002) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0003e7fa) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0003e7fa) field_vitu_entry_pane_t

0xd041,	// (0x0003c01f) bg_button_pane_cp05_ParamLimits

0xd041,	// (0x0003c01f) bg_button_pane_cp05

0x5eb5,	// (0x00034e93) cell_vitu_itu_pane_g1

0x5ecd,	// (0x00034eab) cell_vitu_itu_pane_t1_ParamLimits

0x5ecd,	// (0x00034eab) cell_vitu_itu_pane_t1

0x5edf,	// (0x00034ebd) cell_vitu_itu_pane_t2_ParamLimits

0x5edf,	// (0x00034ebd) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0003e7ff) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0003e7ff) cell_vitu_itu_pane_t

0xd04f,	// (0x0003c02d) bg_button_pane_cp07

0x5f14,	// (0x00034ef2) cell_vitu_function_pane_g1

0x1709,	// (0x000306e7) main_calc_pane_g1

0xfbd2,	// (0x0002ebb0) aid_visual_content_pane

0x1599,	// (0x00030577) main_vradio_pane

0x5f1d,	// (0x00034efb) main_vradio_pane_g1_ParamLimits

0x5f1d,	// (0x00034efb) main_vradio_pane_g1

0xd059,	// (0x0003c037) main_vradio_pane_g2_ParamLimits

0xd059,	// (0x0003c037) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0003e806) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0003e806) main_vradio_pane_g

0x5f34,	// (0x00034f12) main_vradio_pane_t1_ParamLimits

0x5f34,	// (0x00034f12) main_vradio_pane_t1

0x5f49,	// (0x00034f27) main_vradio_pane_t2_ParamLimits

0x5f49,	// (0x00034f27) main_vradio_pane_t2

0xd066,	// (0x0003c044) main_vradio_pane_t3_ParamLimits

0xd066,	// (0x0003c044) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0003e80b) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0003e80b) main_vradio_pane_t

0x5f5e,	// (0x00034f3c) vradio_rocker_control_pane_ParamLimits

0x5f5e,	// (0x00034f3c) vradio_rocker_control_pane

0x5f70,	// (0x00034f4e) vradio_station_info_pane_ParamLimits

0x5f70,	// (0x00034f4e) vradio_station_info_pane

0xd07a,	// (0x0003c058) vradio_frequency_info_pane_ParamLimits

0xd07a,	// (0x0003c058) vradio_frequency_info_pane

0xca3b,	// (0x0003ba19) vradio_station_info_pane_g1

0xd089,	// (0x0003c067) vradio_station_info_pane_t1_ParamLimits

0xd089,	// (0x0003c067) vradio_station_info_pane_t1

0xd0ab,	// (0x0003c089) vradio_station_info_pane_t2_ParamLimits

0xd0ab,	// (0x0003c089) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0003e812) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0003e812) vradio_station_info_pane_t

0xd0bd,	// (0x0003c09b) vradio_tuning_pane

0xd0c5,	// (0x0003c0a3) vradio_rocker_control_pane_g1

0xd0cd,	// (0x0003c0ab) vradio_rocker_control_pane_g2

0xd0d5,	// (0x0003c0b3) vradio_rocker_control_pane_g3

0xd0dd,	// (0x0003c0bb) vradio_rocker_control_pane_g4

0xd0e5,	// (0x0003c0c3) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0003e817) vradio_rocker_control_pane_g

0x5f80,	// (0x00034f5e) vradio_frequency_info_pane_g1

0xd0ed,	// (0x0003c0cb) vradio_frequency_info_pane_t1_ParamLimits

0xd0ed,	// (0x0003c0cb) vradio_frequency_info_pane_t1

0x5f8a,	// (0x00034f68) vradio_tuning_pane_g1

0x5f95,	// (0x00034f73) vradio_tuning_pane_t1

0x1538,	// (0x00030516) area_side_right_pane_ParamLimits

0x1538,	// (0x00030516) area_side_right_pane

0xc5be,	// (0x0003b59c) status_small_pane_g1

0xc5c6,	// (0x0003b5a4) status_small_pane_g2

0xc5cf,	// (0x0003b5ad) status_small_pane_g3

0xc5d8,	// (0x0003b5b6) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0003e5d2) status_small_pane_g

0xc5e1,	// (0x0003b5bf) status_small_pane_t1

0x1599,	// (0x00030577) main_video3_pane

0xd101,	// (0x0003c0df) cams_zoom_vslider_pane

0xd109,	// (0x0003c0e7) image3_wide_pane_ParamLimits

0xd109,	// (0x0003c0e7) image3_wide_pane

0xd123,	// (0x0003c101) image3_wide_small_pane

0xd12f,	// (0x0003c10d) main_video3_pane_g1_ParamLimits

0xd12f,	// (0x0003c10d) main_video3_pane_g1

0xd14b,	// (0x0003c129) main_video3_pane_g2_ParamLimits

0xd14b,	// (0x0003c129) main_video3_pane_g2

0x0001,

0xf844,	// (0x0003e822) main_video3_pane_g_ParamLimits

0xf844,	// (0x0003e822) main_video3_pane_g

0xd167,	// (0x0003c145) main_video3_pane_t1_ParamLimits

0xd167,	// (0x0003c145) main_video3_pane_t1

0xd192,	// (0x0003c170) main_video3_pane_t2_ParamLimits

0xd192,	// (0x0003c170) main_video3_pane_t2

0xd1bf,	// (0x0003c19d) main_video3_pane_t3_ParamLimits

0xd1bf,	// (0x0003c19d) main_video3_pane_t3

0x0002,

0xf849,	// (0x0003e827) main_video3_pane_t_ParamLimits

0xf849,	// (0x0003e827) main_video3_pane_t

0xd1ec,	// (0x0003c1ca) cams_zoom_vslider_pane_g1

0xd1f5,	// (0x0003c1d3) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0003e82e) cams_zoom_vslider_pane_g

0xd1fd,	// (0x0003c1db) small_slider_vertical_pane

0xca3b,	// (0x0003ba19) small_slider_vertical_pane_g1

0xca3b,	// (0x0003ba19) small_slider_vertical_pane_g2

0xd205,	// (0x0003c1e3) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0003e833) small_slider_vertical_pane_g

0x1599,	// (0x00030577) main_hwr_training_pane

0xd20e,	// (0x0003c1ec) hwr_training_instruct_pane_ParamLimits

0xd20e,	// (0x0003c1ec) hwr_training_instruct_pane

0x5fa4,	// (0x00034f82) hwr_training_navi_pane_ParamLimits

0x5fa4,	// (0x00034f82) hwr_training_navi_pane

0x5fc3,	// (0x00034fa1) hwr_training_write_pane_ParamLimits

0x5fc3,	// (0x00034fa1) hwr_training_write_pane

0x9e15,	// (0x00038df3) bg_frame_shadow_pane

0xd245,	// (0x0003c223) hwr_training_write_pane_g1

0xd24d,	// (0x0003c22b) hwr_training_write_pane_g2

0xd255,	// (0x0003c233) hwr_training_write_pane_g3

0xd25d,	// (0x0003c23b) hwr_training_write_pane_g4

0xd265,	// (0x0003c243) hwr_training_write_pane_g5

0xd26d,	// (0x0003c24b) hwr_training_write_pane_g6

0xd275,	// (0x0003c253) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0003e83a) hwr_training_write_pane_g

0x5ffe,	// (0x00034fdc) hwr_training_navi_pane_g1_ParamLimits

0x5ffe,	// (0x00034fdc) hwr_training_navi_pane_g1

0x6010,	// (0x00034fee) hwr_training_navi_pane_g2_ParamLimits

0x6010,	// (0x00034fee) hwr_training_navi_pane_g2

0x6022,	// (0x00035000) hwr_training_navi_pane_g3_ParamLimits

0x6022,	// (0x00035000) hwr_training_navi_pane_g3

0x6032,	// (0x00035010) hwr_training_navi_pane_g4_ParamLimits

0x6032,	// (0x00035010) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0003e849) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0003e849) hwr_training_navi_pane_g

0x603f,	// (0x0003501d) hwr_training_navi_pane_t1

0x604d,	// (0x0003502b) list_single_hwr_training_instruct_pane_ParamLimits

0x604d,	// (0x0003502b) list_single_hwr_training_instruct_pane

0xd27d,	// (0x0003c25b) list_single_hwr_training_instruct_pane_t1

0xc97b,	// (0x0003b959) bg_frame_shadow_pane_g1

0xd28c,	// (0x0003c26a) bg_frame_shadow_pane_g2

0xd294,	// (0x0003c272) bg_frame_shadow_pane_g3

0xd29c,	// (0x0003c27a) bg_frame_shadow_pane_g4

0xd2a4,	// (0x0003c282) bg_frame_shadow_pane_g5

0xd2ac,	// (0x0003c28a) bg_frame_shadow_pane_g6

0xd2b4,	// (0x0003c292) bg_frame_shadow_pane_g7

0xa649,	// (0x00039627) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0003e854) bg_frame_shadow_pane_g

0x1599,	// (0x00030577) main_video_tele_dialer_pane

0x08a0,	// (0x0002f87e) aid_size_cell_video_keypad_ParamLimits

0x08a0,	// (0x0002f87e) aid_size_cell_video_keypad

0x08ba,	// (0x0002f898) grid_video_dialer_keypad_pane_ParamLimits

0x08ba,	// (0x0002f898) grid_video_dialer_keypad_pane

0x0906,	// (0x0002f8e4) video_down_pane_cp_ParamLimits

0x0906,	// (0x0002f8e4) video_down_pane_cp

0x091c,	// (0x0002f8fa) cell_video_dialer_keypad_pane_ParamLimits

0x091c,	// (0x0002f8fa) cell_video_dialer_keypad_pane

0xd2bc,	// (0x0003c29a) bg_button_pane_cp08_ParamLimits

0xd2bc,	// (0x0003c29a) bg_button_pane_cp08

0x6085,	// (0x00035063) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6085,	// (0x00035063) cell_video_dialer_keypad_pane_g1

0x5825,	// (0x00034803) mup3_rocker2_pane_ParamLimits

0x5825,	// (0x00034803) mup3_rocker2_pane

0xca3b,	// (0x0003ba19) mup3_rocker2_pane_g1

0x00ae,	// (0x0002f08c) main_dialer2_pane

0x1599,	// (0x00030577) main_mp4_pane

0x60de,	// (0x000350bc) main_mp4_pane_g1_ParamLimits

0x60de,	// (0x000350bc) main_mp4_pane_g1

0x60de,	// (0x000350bc) main_mp4_pane_g2_ParamLimits

0x60de,	// (0x000350bc) main_mp4_pane_g2

0x0942,	// (0x0002f920) main_mp4_pane_g3_ParamLimits

0x0942,	// (0x0002f920) main_mp4_pane_g3

0x60ec,	// (0x000350ca) main_mp4_pane_g4_ParamLimits

0x60ec,	// (0x000350ca) main_mp4_pane_g4

0x611a,	// (0x000350f8) main_mp4_pane_g5_ParamLimits

0x611a,	// (0x000350f8) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0003e874) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0003e874) main_mp4_pane_g

0x618e,	// (0x0003516c) main_mp4_pane_t1_ParamLimits

0x618e,	// (0x0003516c) main_mp4_pane_t1

0x61ea,	// (0x000351c8) main_mp4_pane_t2_ParamLimits

0x61ea,	// (0x000351c8) main_mp4_pane_t2

0xd2c8,	// (0x0003c2a6) main_mp4_pane_t3_ParamLimits

0xd2c8,	// (0x0003c2a6) main_mp4_pane_t3

0x623c,	// (0x0003521a) main_mp4_pane_t4_ParamLimits

0x623c,	// (0x0003521a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003e885) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003e885) main_mp4_pane_t

0x627c,	// (0x0003525a) mp4_progress_pane_ParamLimits

0x627c,	// (0x0003525a) mp4_progress_pane

0x62c6,	// (0x000352a4) mp4_rocker_pane_ParamLimits

0x62c6,	// (0x000352a4) mp4_rocker_pane

0xd2f6,	// (0x0003c2d4) mp4_progress_pane_t1

0xd30f,	// (0x0003c2ed) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003e88e) mp4_progress_pane_t

0xd328,	// (0x0003c306) mup_progress_pane_cp04

0xd6f7,	// (0x0003c6d5) mp4_rocker_pane_g1

0x098c,	// (0x0002f96a) aid_cell_size_keypad2_ParamLimits

0x098c,	// (0x0002f96a) aid_cell_size_keypad2

0x09a2,	// (0x0002f980) dialer2_ne_pane_ParamLimits

0x09a2,	// (0x0002f980) dialer2_ne_pane

0x09ba,	// (0x0002f998) grid_dialer2_keypad_pane_ParamLimits

0x09ba,	// (0x0002f998) grid_dialer2_keypad_pane

0xc81a,	// (0x0003b7f8) bg_popup_call_pane_cp07_ParamLimits

0xc81a,	// (0x0003b7f8) bg_popup_call_pane_cp07

0x62e6,	// (0x000352c4) dialer2_ne_pane_t1_ParamLimits

0x62e6,	// (0x000352c4) dialer2_ne_pane_t1

0x09d6,	// (0x0002f9b4) cell_dialer2_keypad_pane_ParamLimits

0x09d6,	// (0x0002f9b4) cell_dialer2_keypad_pane

0xd34d,	// (0x0003c32b) bg_button_pane_pane_cp04_ParamLimits

0xd34d,	// (0x0003c32b) bg_button_pane_pane_cp04

0x6326,	// (0x00035304) cell_dialer2_keypad_pane_g1_ParamLimits

0x6326,	// (0x00035304) cell_dialer2_keypad_pane_g1

0x233c,	// (0x0003131a) aid_placing_vt_set_content_ParamLimits

0x233c,	// (0x0003131a) aid_placing_vt_set_content

0x2360,	// (0x0003133e) aid_placing_vt_set_title_ParamLimits

0x2360,	// (0x0003133e) aid_placing_vt_set_title

0x1599,	// (0x00030577) main_image3_pane

0x0a5a,	// (0x0002fa38) area_side_right_pane_cp01_ParamLimits

0x0a5a,	// (0x0002fa38) area_side_right_pane_cp01

0x60de,	// (0x000350bc) main_image3_pane_g1_ParamLimits

0x60de,	// (0x000350bc) main_image3_pane_g1

0x0a73,	// (0x0002fa51) main_image3_pane_g2_ParamLimits

0x0a73,	// (0x0002fa51) main_image3_pane_g2

0x0a9b,	// (0x0002fa79) main_image3_pane_g3_ParamLimits

0x0a9b,	// (0x0002fa79) main_image3_pane_g3

0x0ac5,	// (0x0002faa3) main_image3_pane_g4_ParamLimits

0x0ac5,	// (0x0002faa3) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003e89d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003e89d) main_image3_pane_g

0x0aef,	// (0x0002facd) main_image3_pane_t1_ParamLimits

0x0aef,	// (0x0002facd) main_image3_pane_t1

0x0b47,	// (0x0002fb25) main_image3_pane_t2_ParamLimits

0x0b47,	// (0x0002fb25) main_image3_pane_t2

0x0b99,	// (0x0002fb77) main_image3_pane_t3_ParamLimits

0x0b99,	// (0x0002fb77) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003e8a6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003e8a6) main_image3_pane_t

0xb0f1,	// (0x0003a0cf) grid_sctrl_middle_pane_cp01_ParamLimits

0xb0f1,	// (0x0003a0cf) grid_sctrl_middle_pane_cp01

0x63c2,	// (0x000353a0) cell_sctrl_middle_pane_cp01_ParamLimits

0x63c2,	// (0x000353a0) cell_sctrl_middle_pane_cp01

0x63df,	// (0x000353bd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63df,	// (0x000353bd) cell_sctrl_middle_pane_cp01_g1

0x1599,	// (0x00030577) main_call4_pane

0x0c21,	// (0x0002fbff) aid_size_button_call4_ParamLimits

0x0c21,	// (0x0002fbff) aid_size_button_call4

0x0c54,	// (0x0002fc32) call4_windows_pane_ParamLimits

0x0c54,	// (0x0002fc32) call4_windows_pane

0x0c73,	// (0x0002fc51) grid_call4_button_pane_ParamLimits

0x0c73,	// (0x0002fc51) grid_call4_button_pane

0x6400,	// (0x000353de) call4_windows_conf_pane

0x641b,	// (0x000353f9) popup_call4_audio_first_window_ParamLimits

0x641b,	// (0x000353f9) popup_call4_audio_first_window

0x646d,	// (0x0003544b) popup_call4_audio_second_window_ParamLimits

0x646d,	// (0x0003544b) popup_call4_audio_second_window

0x6486,	// (0x00035464) popup_call4_audio_wait_window_ParamLimits

0x6486,	// (0x00035464) popup_call4_audio_wait_window

0x0c9e,	// (0x0002fc7c) cell_call4_button_pane_ParamLimits

0x0c9e,	// (0x0002fc7c) cell_call4_button_pane

0x6494,	// (0x00035472) bg_button_pane_cp09_ParamLimits

0x6494,	// (0x00035472) bg_button_pane_cp09

0x0cc5,	// (0x0002fca3) cell_call4_button_pane_g1_ParamLimits

0x0cc5,	// (0x0002fca3) cell_call4_button_pane_g1

0x0ceb,	// (0x0002fcc9) cell_call4_button_pane_t1_ParamLimits

0x0ceb,	// (0x0002fcc9) cell_call4_button_pane_t1

0xd361,	// (0x0003c33f) popup_call4_audio_conf_window_ParamLimits

0xd361,	// (0x0003c33f) popup_call4_audio_conf_window

0x5887,	// (0x00034865) mup3_progress_pane_t1_ParamLimits

0x58a6,	// (0x00034884) mup3_progress_pane_t2_ParamLimits

0xcce9,	// (0x0003bcc7) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0003e776) mup3_progress_pane_t_ParamLimits

0xcd06,	// (0x0003bce4) mup_progress_pane_cp03_ParamLimits

0x5de6,	// (0x00034dc4) mup3_control_keys_pane_g4_copy1

0x62aa,	// (0x00035288) mp4_rocker2_pane_ParamLimits

0x62aa,	// (0x00035288) mp4_rocker2_pane

0xd37b,	// (0x0003c359) mp4_rocker2_pane_g1

0xd383,	// (0x0003c361) mp4_rocker2_pane_g2

0x64d2,	// (0x000354b0) mp4_rocker2_pane_g3

0x64da,	// (0x000354b8) mp4_rocker2_pane_g4

0x64e2,	// (0x000354c0) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003e8af) mp4_rocker2_pane_g

0x1599,	// (0x00030577) main_camera4_pane

0x1599,	// (0x00030577) main_video4_pane

0x08d4,	// (0x0002f8b2) main_video_tele_dialer_pane_t1_ParamLimits

0x08d4,	// (0x0002f8b2) main_video_tele_dialer_pane_t1

0x08ed,	// (0x0002f8cb) main_video_tele_dialer_pane_t2_ParamLimits

0x08ed,	// (0x0002f8cb) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0003e865) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0003e865) main_video_tele_dialer_pane_t

0x0d29,	// (0x0002fd07) cam4_autofocus_pane_ParamLimits

0x0d29,	// (0x0002fd07) cam4_autofocus_pane

0x0d3f,	// (0x0002fd1d) cam4_image_uncrop_pane_ParamLimits

0x0d3f,	// (0x0002fd1d) cam4_image_uncrop_pane

0x0d58,	// (0x0002fd36) cam4_indicators_pane_ParamLimits

0x0d58,	// (0x0002fd36) cam4_indicators_pane

0x0d88,	// (0x0002fd66) main_camera4_pane_g1_ParamLimits

0x0d88,	// (0x0002fd66) main_camera4_pane_g1

0x0d9a,	// (0x0002fd78) main_camera4_pane_g2_ParamLimits

0x0d9a,	// (0x0002fd78) main_camera4_pane_g2

0x0dad,	// (0x0002fd8b) main_camera4_pane_g3_ParamLimits

0x0dad,	// (0x0002fd8b) main_camera4_pane_g3

0x0dc0,	// (0x0002fd9e) main_camera4_pane_g4_ParamLimits

0x0dc0,	// (0x0002fd9e) main_camera4_pane_g4

0x0dd3,	// (0x0002fdb1) main_camera4_pane_g5_ParamLimits

0x0dd3,	// (0x0002fdb1) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003e8ba) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003e8ba) main_camera4_pane_g

0x0df7,	// (0x0002fdd5) main_camera4_pane_t1_ParamLimits

0x0df7,	// (0x0002fdd5) main_camera4_pane_t1

0x651c,	// (0x000354fa) bg_tb_trans_pane_cp06

0x6532,	// (0x00035510) cam4_indicators_pane_g1

0x6543,	// (0x00035521) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003e8d5) cam4_indicators_pane_g

0x655b,	// (0x00035539) cam4_indicators_pane_t1

0x0e47,	// (0x0002fe25) main_video4_pane_g1_ParamLimits

0x0e47,	// (0x0002fe25) main_video4_pane_g1

0x0e56,	// (0x0002fe34) main_video4_pane_g2_ParamLimits

0x0e56,	// (0x0002fe34) main_video4_pane_g2

0x0e65,	// (0x0002fe43) main_video4_pane_g3_ParamLimits

0x0e65,	// (0x0002fe43) main_video4_pane_g3

0x0e74,	// (0x0002fe52) main_video4_pane_g4_ParamLimits

0x0e74,	// (0x0002fe52) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003e8dc) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003e8dc) main_video4_pane_g

0x0e92,	// (0x0002fe70) vid4_indicators_pane_ParamLimits

0x0e92,	// (0x0002fe70) vid4_indicators_pane

0x0ec0,	// (0x0002fe9e) video4_image_uncrop_cif_pane_ParamLimits

0x0ec0,	// (0x0002fe9e) video4_image_uncrop_cif_pane

0x0eda,	// (0x0002feb8) video4_image_uncrop_nhd_pane_ParamLimits

0x0eda,	// (0x0002feb8) video4_image_uncrop_nhd_pane

0x0d3f,	// (0x0002fd1d) video4_image_uncrop_vga_pane_ParamLimits

0x0d3f,	// (0x0002fd1d) video4_image_uncrop_vga_pane

0x157f,	// (0x0003055d) bg_tb_trans_pane_cp07

0x6589,	// (0x00035567) vid4_indicators_pane_g1

0x659f,	// (0x0003557d) vid4_indicators_pane_g2

0x65b3,	// (0x00035591) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003e8e7) vid4_indicators_pane_g

0x65e4,	// (0x000355c2) vid4_indicators_pane_t1

0x65fb,	// (0x000355d9) cam4_autofocus_pane_g1

0x6603,	// (0x000355e1) cam4_autofocus_pane_g2

0x660b,	// (0x000355e9) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003e8f2) cam4_autofocus_pane_g

0x6613,	// (0x000355f1) cam4_autofocus_pane_g3_copy1

0x6069,	// (0x00035047) video_down_pane_cp_t1

0x6077,	// (0x00035055) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0003e86a) video_down_pane_cp_t

0x157f,	// (0x0003055d) popup_vitu2_window_ParamLimits

0x157f,	// (0x0003055d) popup_vitu2_window

0x0ef0,	// (0x0002fece) aid_size_cell2_itu2_ParamLimits

0x0ef0,	// (0x0002fece) aid_size_cell2_itu2

0x0f16,	// (0x0002fef4) aid_size_cell_itu2_ParamLimits

0x0f16,	// (0x0002fef4) aid_size_cell_itu2

0x0f76,	// (0x0002ff54) bg_popup_window_pane_cp09_ParamLimits

0x0f76,	// (0x0002ff54) bg_popup_window_pane_cp09

0x0f84,	// (0x0002ff62) field_vitu2_entry_pane_ParamLimits

0x0f84,	// (0x0002ff62) field_vitu2_entry_pane

0x0fac,	// (0x0002ff8a) grid_vitu2_function_pane_ParamLimits

0x0fac,	// (0x0002ff8a) grid_vitu2_function_pane

0x0ffd,	// (0x0002ffdb) grid_vitu2_itu_pane_ParamLimits

0x0ffd,	// (0x0002ffdb) grid_vitu2_itu_pane

0x108d,	// (0x0003006b) cell_vitu2_itu_pane_ParamLimits

0x108d,	// (0x0003006b) cell_vitu2_itu_pane

0x10ba,	// (0x00030098) cell_vitu2_function_pane_ParamLimits

0x10ba,	// (0x00030098) cell_vitu2_function_pane

0xd38b,	// (0x0003c369) bg_popup_call_pane_cp08_ParamLimits

0xd38b,	// (0x0003c369) bg_popup_call_pane_cp08

0xd3a2,	// (0x0003c380) field_vitu2_entry_pane_g1

0xd3ae,	// (0x0003c38c) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003e8f9) field_vitu2_entry_pane_g

0x661b,	// (0x000355f9) field_vitu2_entry_pane_t1_ParamLimits

0x661b,	// (0x000355f9) field_vitu2_entry_pane_t1

0xd3c8,	// (0x0003c3a6) field_vitu2_entry_pane_t2_ParamLimits

0xd3c8,	// (0x0003c3a6) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003e900) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003e900) field_vitu2_entry_pane_t

0x10fe,	// (0x000300dc) bg_button_pane_cp010_ParamLimits

0x10fe,	// (0x000300dc) bg_button_pane_cp010

0x6649,	// (0x00035627) cell_vitu2_itu_pane_g1

0x111a,	// (0x000300f8) cell_vitu2_itu_pane_t1_ParamLimits

0x111a,	// (0x000300f8) cell_vitu2_itu_pane_t1

0x1178,	// (0x00030156) cell_vitu2_itu_pane_t2_ParamLimits

0x1178,	// (0x00030156) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003e90a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003e90a) cell_vitu2_itu_pane_t

0x157f,	// (0x0003055d) bg_button_pane_cp011

0x1264,	// (0x00030242) cell_vitu2_function_pane_g1

0x1599,	// (0x00030577) main_myfav_hc_pane

0x0be9,	// (0x0002fbc7) popup_image3_note_pane_ParamLimits

0x0be9,	// (0x0002fbc7) popup_image3_note_pane

0x0c05,	// (0x0002fbe3) popup_image3_tool_bar_pane_ParamLimits

0x0c05,	// (0x0002fbe3) popup_image3_tool_bar_pane

0x1206,	// (0x000301e4) cell_vitu2_itu_pane_t3_ParamLimits

0x1206,	// (0x000301e4) cell_vitu2_itu_pane_t3

0x9e15,	// (0x00038df3) bg_popup_trans_pane

0xd3ed,	// (0x0003c3cb) grid_image3_tool_bar_pane

0xd3f7,	// (0x0003c3d5) bg_popup_trans_pane_g1

0xa9aa,	// (0x00039988) bg_popup_trans_pane_g2

0xd3ff,	// (0x0003c3dd) bg_popup_trans_pane_g3

0xd407,	// (0x0003c3e5) bg_popup_trans_pane_g4

0xd40f,	// (0x0003c3ed) bg_popup_trans_pane_g5

0xd417,	// (0x0003c3f5) bg_popup_trans_pane_g6

0xd41f,	// (0x0003c3fd) bg_popup_trans_pane_g7

0xd427,	// (0x0003c405) bg_popup_trans_pane_g8

0xa98a,	// (0x00039968) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003e911) bg_popup_trans_pane_g

0xd42f,	// (0x0003c40d) cell_image3_tool_bar_pane_ParamLimits

0xd42f,	// (0x0003c40d) cell_image3_tool_bar_pane

0xca3b,	// (0x0003ba19) cell_image3_tool_bar_pane_g1

0x9e15,	// (0x00038df3) bg_popup_trans_pane_cp1

0xd445,	// (0x0003c423) popup_image3_note_pane_t1

0xd453,	// (0x0003c431) popup_image3_note_pane_t2

0xd461,	// (0x0003c43f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003e924) popup_image3_note_pane_t

0xd471,	// (0x0003c44f) popup_image3_note_pane_t3_copy1

0x665b,	// (0x00035639) bg_myfav_hc_instruction_pane_ParamLimits

0x665b,	// (0x00035639) bg_myfav_hc_instruction_pane

0x6673,	// (0x00035651) cell_myfav_contact_pane_ParamLimits

0x6673,	// (0x00035651) cell_myfav_contact_pane

0x668f,	// (0x0003566d) cell_myfav_contact_pane_cp1_ParamLimits

0x668f,	// (0x0003566d) cell_myfav_contact_pane_cp1

0x66a7,	// (0x00035685) cell_myfav_contact_pane_cp2_ParamLimits

0x66a7,	// (0x00035685) cell_myfav_contact_pane_cp2

0x66bf,	// (0x0003569d) cell_myfav_contact_pane_cp3_ParamLimits

0x66bf,	// (0x0003569d) cell_myfav_contact_pane_cp3

0x66d6,	// (0x000356b4) cell_myfav_contact_pane_cp4_ParamLimits

0x66d6,	// (0x000356b4) cell_myfav_contact_pane_cp4

0x66ee,	// (0x000356cc) cell_myfav_contact_pane_cp5_ParamLimits

0x66ee,	// (0x000356cc) cell_myfav_contact_pane_cp5

0x6702,	// (0x000356e0) cell_myfav_contact_pane_cp6_ParamLimits

0x6702,	// (0x000356e0) cell_myfav_contact_pane_cp6

0x6718,	// (0x000356f6) cell_myfav_contact_pane_cp7_ParamLimits

0x6718,	// (0x000356f6) cell_myfav_contact_pane_cp7

0xd47f,	// (0x0003c45d) listscroll_gen_pane_cp05

0x6730,	// (0x0003570e) main_myfav_hc_pane_g1_ParamLimits

0x6730,	// (0x0003570e) main_myfav_hc_pane_g1

0x674a,	// (0x00035728) main_myfav_hc_pane_g2_ParamLimits

0x674a,	// (0x00035728) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003e92b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003e92b) main_myfav_hc_pane_g

0x677e,	// (0x0003575c) main_myfav_hc_pane_t1_ParamLimits

0x677e,	// (0x0003575c) main_myfav_hc_pane_t1

0xd488,	// (0x0003c466) main_myfav_hc_pane_t2_ParamLimits

0xd488,	// (0x0003c466) main_myfav_hc_pane_t2

0xd49a,	// (0x0003c478) main_myfav_hc_pane_t3_ParamLimits

0xd49a,	// (0x0003c478) main_myfav_hc_pane_t3

0x6795,	// (0x00035773) main_myfav_hc_pane_t4_ParamLimits

0x6795,	// (0x00035773) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003e932) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003e932) main_myfav_hc_pane_t

0xca3b,	// (0x0003ba19) bg_myfav_hc_instruction_pane_g1

0xd4ac,	// (0x0003c48a) cell_myfav_contact_pane_g1_ParamLimits

0xd4ac,	// (0x0003c48a) cell_myfav_contact_pane_g1

0xd4ac,	// (0x0003c48a) cell_myfav_contact_pane_g2_ParamLimits

0xd4ac,	// (0x0003c48a) cell_myfav_contact_pane_g2

0xd4b8,	// (0x0003c496) cell_myfav_contact_pane_g3_ParamLimits

0xd4b8,	// (0x0003c496) cell_myfav_contact_pane_g3

0xccd3,	// (0x0003bcb1) cell_myfav_contact_pane_g4_ParamLimits

0xccd3,	// (0x0003bcb1) cell_myfav_contact_pane_g4

0xd4c5,	// (0x0003c4a3) cell_myfav_contact_pane_g5_ParamLimits

0xd4c5,	// (0x0003c4a3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003e93d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003e93d) cell_myfav_contact_pane_g

0x6764,	// (0x00035742) main_myfav_hc_pane_g3_ParamLimits

0x6764,	// (0x00035742) main_myfav_hc_pane_g3

0xfcd6,	// (0x0002ecb4) popup_adpt_find_window

0x67bf,	// (0x0003579d) afind_page_pane_ParamLimits

0x67bf,	// (0x0003579d) afind_page_pane

0x67d4,	// (0x000357b2) aid_size_cell_afind_ParamLimits

0x67d4,	// (0x000357b2) aid_size_cell_afind

0x67f2,	// (0x000357d0) bg_popup_sub_pane_cp09_ParamLimits

0x67f2,	// (0x000357d0) bg_popup_sub_pane_cp09

0x67ff,	// (0x000357dd) find_pane_cp01_ParamLimits

0x67ff,	// (0x000357dd) find_pane_cp01

0xd4d1,	// (0x0003c4af) grid_afind_control_pane_ParamLimits

0xd4d1,	// (0x0003c4af) grid_afind_control_pane

0x680c,	// (0x000357ea) grid_afind_pane_ParamLimits

0x680c,	// (0x000357ea) grid_afind_pane

0x682e,	// (0x0003580c) cell_afind_pane_ParamLimits

0x682e,	// (0x0003580c) cell_afind_pane

0xca3b,	// (0x0003ba19) afind_page_pane_g1

0x689b,	// (0x00035879) afind_page_pane_g2

0x68a4,	// (0x00035882) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003e948) afind_page_pane_g

0x68ad,	// (0x0003588b) afind_page_pane_t1

0xd4e5,	// (0x0003c4c3) cell_afind_grid_control_pane_ParamLimits

0xd4e5,	// (0x0003c4c3) cell_afind_grid_control_pane

0xd34d,	// (0x0003c32b) bg_button_pane_cp69_ParamLimits

0xd34d,	// (0x0003c32b) bg_button_pane_cp69

0x68cd,	// (0x000358ab) cell_afind_pane_g1_ParamLimits

0x68cd,	// (0x000358ab) cell_afind_pane_g1

0x68da,	// (0x000358b8) cell_afind_pane_t1_ParamLimits

0x68da,	// (0x000358b8) cell_afind_pane_t1

0xa79f,	// (0x0003977d) bg_button_pane_cp72

0xd4f4,	// (0x0003c4d2) cell_afind_grid_control_pane_g1

0x433e,	// (0x0003331c) aid_image_placing_area_ParamLimits

0x433e,	// (0x0003331c) aid_image_placing_area

0xd00c,	// (0x0003bfea) field_vitu_entry_pane_g1_ParamLimits

0xd00c,	// (0x0003bfea) field_vitu_entry_pane_g1

0xd018,	// (0x0003bff6) field_vitu_entry_pane_g2_ParamLimits

0xd018,	// (0x0003bff6) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0003e7f5) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0003e7f5) field_vitu_entry_pane_g

0x5eb5,	// (0x00034e93) cell_vitu_itu_pane_g1_ParamLimits

0x5ef7,	// (0x00034ed5) cell_vitu_itu_pane_t3_ParamLimits

0x5ef7,	// (0x00034ed5) cell_vitu_itu_pane_t3

0xd2f6,	// (0x0003c2d4) mp4_progress_pane_t1_ParamLimits

0xd30f,	// (0x0003c2ed) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003e88e) mp4_progress_pane_t_ParamLimits

0xd328,	// (0x0003c306) mup_progress_pane_cp04_ParamLimits

0x67a9,	// (0x00035787) main_myfav_hc_pane_t5_ParamLimits

0x67a9,	// (0x00035787) main_myfav_hc_pane_t5

0x14f7,	// (0x000304d5) aid_zoom_text_primary

0xfcd6,	// (0x0002ecb4) popup_adpt_find_window_ParamLimits

0x157f,	// (0x0003055d) main_cam_set_pane

0x0d71,	// (0x0002fd4f) cam4_zoom_pane_ParamLimits

0x0d71,	// (0x0002fd4f) cam4_zoom_pane

0x68ec,	// (0x000358ca) main_cam_set_pane_g1_ParamLimits

0x68ec,	// (0x000358ca) main_cam_set_pane_g1

0x68fa,	// (0x000358d8) main_cam_set_pane_g2_ParamLimits

0x68fa,	// (0x000358d8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003e94f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003e94f) main_cam_set_pane_g

0x691b,	// (0x000358f9) main_cam_set_pane_t1_ParamLimits

0x691b,	// (0x000358f9) main_cam_set_pane_t1

0x6936,	// (0x00035914) main_cset_listscroll_pane_ParamLimits

0x6936,	// (0x00035914) main_cset_listscroll_pane

0x695a,	// (0x00035938) main_cset_slider_pane_ParamLimits

0x695a,	// (0x00035938) main_cset_slider_pane

0xd505,	// (0x0003c4e3) main_cset_list_pane_ParamLimits

0xd505,	// (0x0003c4e3) main_cset_list_pane

0xd515,	// (0x0003c4f3) scroll_pane_cp028

0x6984,	// (0x00035962) aid_area_touch_slider

0x69a0,	// (0x0003597e) cset_slider_pane

0x69ca,	// (0x000359a8) main_cset_slider_pane_g1

0x69df,	// (0x000359bd) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003e954) main_cset_slider_pane_g

0xd54e,	// (0x0003c52c) main_cset_slider_pane_t1

0x6aa1,	// (0x00035a7f) main_cset_slider_pane_t2

0x6abb,	// (0x00035a99) main_cset_slider_pane_t3

0x6ad5,	// (0x00035ab3) main_cset_slider_pane_t4

0x6aef,	// (0x00035acd) main_cset_slider_pane_t5

0x6b0d,	// (0x00035aeb) main_cset_slider_pane_t6

0x6b24,	// (0x00035b02) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003e979) main_cset_slider_pane_t

0x6c30,	// (0x00035c0e) cset_list_set_pane_ParamLimits

0x6c30,	// (0x00035c0e) cset_list_set_pane

0x6c44,	// (0x00035c22) aid_position_infowindow_above

0x6c4c,	// (0x00035c2a) aid_position_infowindow_below

0x6c54,	// (0x00035c32) cset_list_set_pane_g1_ParamLimits

0x6c54,	// (0x00035c32) cset_list_set_pane_g1

0x6c60,	// (0x00035c3e) cset_list_set_pane_g3_ParamLimits

0x6c60,	// (0x00035c3e) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003e998) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003e998) cset_list_set_pane_g

0x6c6f,	// (0x00035c4d) cset_list_set_pane_t1_ParamLimits

0x6c6f,	// (0x00035c4d) cset_list_set_pane_t1

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp021_ParamLimits

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp021

0xb2da,	// (0x0003a2b8) cset_slider_pane_g1

0xb2ec,	// (0x0003a2ca) cset_slider_pane_g2

0xb2e3,	// (0x0003a2c1) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003e99d) cset_slider_pane_g

0x6c84,	// (0x00035c62) aid_area_touch_cam4_zoom

0x1278,	// (0x00030256) cam4_zoom_cont_pane

0x1280,	// (0x0003025e) cam4_zoom_pane_g1

0x1288,	// (0x00030266) cam4_zoom_pane_g2

0x1290,	// (0x0003026e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003e9a4) cam4_zoom_pane_g

0x6c8d,	// (0x00035c6b) cam4_zoom_cont_pane_g1

0x6c96,	// (0x00035c74) cam4_zoom_cont_pane_g2

0x6c9f,	// (0x00035c7d) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003e9ab) cam4_zoom_cont_pane_g

0x0c3f,	// (0x0002fc1d) call4_image_pane_ParamLimits

0x0c3f,	// (0x0002fc1d) call4_image_pane

0x6400,	// (0x000353de) call4_windows_conf_pane_ParamLimits

0x644b,	// (0x00035429) popup_call4_audio_in_window_ParamLimits

0x644b,	// (0x00035429) popup_call4_audio_in_window

0x9e15,	// (0x00038df3) bg_popup_call2_act_pane_cp02

0xd359,	// (0x0003c337) call4_list_conf_pane

0xca3b,	// (0x0003ba19) call4_image_pane_g1

0xca3b,	// (0x0003ba19) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0003e6b6) call4_image_pane_g

0xd5ee,	// (0x0003c5cc) list_single_graphic_popup_conf4_pane_ParamLimits

0xd5ee,	// (0x0003c5cc) list_single_graphic_popup_conf4_pane

0x9e15,	// (0x00038df3) list_highlight_pane_cp022

0xd603,	// (0x0003c5e1) list_single_graphic_popup_conf4_pane_g1

0xaeb8,	// (0x00039e96) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003e9b2) list_single_graphic_popup_conf4_pane_g

0xd60b,	// (0x0003c5e9) list_single_graphic_popup_conf4_pane_t1

0x2477,	// (0x00031455) popup_vtel_slider_window_ParamLimits

0x2477,	// (0x00031455) popup_vtel_slider_window

0xd33b,	// (0x0003c319) dialer2_ne_pane_t2_ParamLimits

0xd33b,	// (0x0003c319) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003e893) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003e893) dialer2_ne_pane_t

0xc81a,	// (0x0003b7f8) bg_popup_sub_pane_cp010_ParamLimits

0xc81a,	// (0x0003b7f8) bg_popup_sub_pane_cp010

0x6ca8,	// (0x00035c86) popup_vtel_slider_window_g1_ParamLimits

0x6ca8,	// (0x00035c86) popup_vtel_slider_window_g1

0x6cbb,	// (0x00035c99) popup_vtel_slider_window_g2_ParamLimits

0x6cbb,	// (0x00035c99) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003e9b7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003e9b7) popup_vtel_slider_window_g

0x6d11,	// (0x00035cef) vtel_slider_pane_ParamLimits

0x6d11,	// (0x00035cef) vtel_slider_pane

0x6d33,	// (0x00035d11) vtel_slider_pane_g1_ParamLimits

0x6d33,	// (0x00035d11) vtel_slider_pane_g1

0x6d47,	// (0x00035d25) vtel_slider_pane_g2_ParamLimits

0x6d47,	// (0x00035d25) vtel_slider_pane_g2

0x6d5f,	// (0x00035d3d) vtel_slider_pane_g3_ParamLimits

0x6d5f,	// (0x00035d3d) vtel_slider_pane_g3

0x6d33,	// (0x00035d11) vtel_slider_pane_g4_ParamLimits

0x6d33,	// (0x00035d11) vtel_slider_pane_g4

0x6d75,	// (0x00035d53) vtel_slider_pane_g5_ParamLimits

0x6d75,	// (0x00035d53) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003e9c0) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003e9c0) vtel_slider_pane_g

0x157f,	// (0x0003055d) main_gallery2_pane

0x0f42,	// (0x0002ff20) aid_size_row_itut2_dropdow_list_ParamLimits

0x0f42,	// (0x0002ff20) aid_size_row_itut2_dropdow_list

0x0fd4,	// (0x0002ffb2) grid_vitu2_function_top_pane_ParamLimits

0x0fd4,	// (0x0002ffb2) grid_vitu2_function_top_pane

0x1038,	// (0x00030016) popup_vitu2_dropdown_list_window_ParamLimits

0x1038,	// (0x00030016) popup_vitu2_dropdown_list_window

0x1061,	// (0x0003003f) popup_vitu2_match_list_window

0x1299,	// (0x00030277) cell_vitu2_function_top_pane_ParamLimits

0x1299,	// (0x00030277) cell_vitu2_function_top_pane

0x12bb,	// (0x00030299) cell_vitu2_function_top_pane_cp01_ParamLimits

0x12bb,	// (0x00030299) cell_vitu2_function_top_pane_cp01

0x12d7,	// (0x000302b5) cell_vitu2_function_top_wide_pane_ParamLimits

0x12d7,	// (0x000302b5) cell_vitu2_function_top_wide_pane

0x157f,	// (0x0003055d) bg_button_pane_cp012

0x12f3,	// (0x000302d1) cell_vitu2_function_top_pane_g1

0x6d99,	// (0x00035d77) bg_button_pane_cp013_ParamLimits

0x6d99,	// (0x00035d77) bg_button_pane_cp013

0x6db5,	// (0x00035d93) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6db5,	// (0x00035d93) cell_vitu2_function_top_wide_pane_g1

0x157f,	// (0x0003055d) bg_popup_sub_pane_cp20

0x1307,	// (0x000302e5) list_vitu2_match_list_pane

0xd3f7,	// (0x0003c3d5) bg_popup_sub_pane_cp20_g1

0xd3ff,	// (0x0003c3dd) bg_popup_sub_pane_cp20_g2

0xa9aa,	// (0x00039988) bg_popup_sub_pane_cp20_g3

0xd407,	// (0x0003c3e5) bg_popup_sub_pane_cp20_g4

0xa98a,	// (0x00039968) bg_popup_sub_pane_cp20_g5

0xd621,	// (0x0003c5ff) bg_popup_sub_pane_cp20_g6

0xd417,	// (0x0003c3f5) bg_popup_sub_pane_cp20_g7

0xd41f,	// (0x0003c3fd) bg_popup_sub_pane_cp20_g8

0xd427,	// (0x0003c405) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003e9cb) bg_popup_sub_pane_cp20_g

0x6dcd,	// (0x00035dab) list_vitu2_match_list_item_pane_ParamLimits

0x6dcd,	// (0x00035dab) list_vitu2_match_list_item_pane

0x6ddf,	// (0x00035dbd) list_vitu2_match_list_item_pane_t1

0x1599,	// (0x00030577) bg_popup_sub_pane_cp21

0x6e39,	// (0x00035e17) grid_vitu2_dropdown_list_pane

0x1325,	// (0x00030303) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1325,	// (0x00030303) cell_vitu2_dropdown_list_char_pane

0x1348,	// (0x00030326) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1348,	// (0x00030326) cell_vitu2_dropdown_list_ctrl_pane

0xd629,	// (0x0003c607) cell_vitu2_dropdown_list_char_pane_g1

0xd632,	// (0x0003c610) cell_vitu2_dropdown_list_char_pane_g2

0xd63b,	// (0x0003c619) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003e9e8) cell_vitu2_dropdown_list_char_pane_g

0x1376,	// (0x00030354) cell_vitu2_dropdown_list_char_pane_t1

0x6e41,	// (0x00035e1f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e41,	// (0x00035e1f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e51,	// (0x00035e2f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e51,	// (0x00035e2f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e62,	// (0x00035e40) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e62,	// (0x00035e40) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1384,	// (0x00030362) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1384,	// (0x00030362) cell_vitu2_dropdown_list_ctrl_pane_g4

0x651c,	// (0x000354fa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x651c,	// (0x000354fa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003e9ef) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003e9ef) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e72,	// (0x00035e50) aid_size_cell_gallery2_ParamLimits

0x6e72,	// (0x00035e50) aid_size_cell_gallery2

0x6e90,	// (0x00035e6e) grid_gallery2_pane_ParamLimits

0x6e90,	// (0x00035e6e) grid_gallery2_pane

0x6eaa,	// (0x00035e88) scroll_pane_cp029_ParamLimits

0x6eaa,	// (0x00035e88) scroll_pane_cp029

0x6ebb,	// (0x00035e99) cell_gallery2_pane_ParamLimits

0x6ebb,	// (0x00035e99) cell_gallery2_pane

0xd644,	// (0x0003c622) cell_gallery2_pane_g2

0x6f1f,	// (0x00035efd) cell_gallery2_pane_g3

0xd64c,	// (0x0003c62a) cell_gallery2_pane_g4

0xd654,	// (0x0003c632) cell_gallery2_pane_g5

0xa738,	// (0x00039716) grid_highlight_pane_cp10

0x1061,	// (0x0003003f) popup_vitu2_match_list_window_ParamLimits

0x1078,	// (0x00030056) popup_vitu2_query_window_ParamLimits

0x1078,	// (0x00030056) popup_vitu2_query_window

0x1599,	// (0x00030577) bg_vitu2_candi_button_pane

0xd629,	// (0x0003c607) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd632,	// (0x0003c610) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd63b,	// (0x0003c619) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f27,	// (0x00035f05) bg_button_pane_cp015

0x6f3b,	// (0x00035f19) bg_button_pane_cp016

0x6f4e,	// (0x00035f2c) bg_button_pane_cp017

0xc603,	// (0x0003b5e1) bg_popup_sub_pane_cp22

0xd65c,	// (0x0003c63a) popup_vitu2_query_window_g1

0x6f93,	// (0x00035f71) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003e9fa) popup_vitu2_query_window_g

0x6fb2,	// (0x00035f90) popup_vitu2_query_window_t1_ParamLimits

0x6fb2,	// (0x00035f90) popup_vitu2_query_window_t1

0x6fe7,	// (0x00035fc5) popup_vitu2_query_window_t2_ParamLimits

0x6fe7,	// (0x00035fc5) popup_vitu2_query_window_t2

0x6ff9,	// (0x00035fd7) popup_vitu2_query_window_t3_ParamLimits

0x6ff9,	// (0x00035fd7) popup_vitu2_query_window_t3

0x7021,	// (0x00035fff) popup_vitu2_query_window_t4_ParamLimits

0x7021,	// (0x00035fff) popup_vitu2_query_window_t4

0x7042,	// (0x00036020) popup_vitu2_query_window_t5_ParamLimits

0x7042,	// (0x00036020) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003ea01) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003ea01) popup_vitu2_query_window_t

0xd4fd,	// (0x0003c4db) main_cset_text_pane

0x6984,	// (0x00035962) aid_area_touch_slider_ParamLimits

0x69a0,	// (0x0003597e) cset_slider_pane_ParamLimits

0x69ca,	// (0x000359a8) main_cset_slider_pane_g1_ParamLimits

0x69df,	// (0x000359bd) main_cset_slider_pane_g2_ParamLimits

0xd51e,	// (0x0003c4fc) main_cset_slider_pane_g3_ParamLimits

0xd51e,	// (0x0003c4fc) main_cset_slider_pane_g3

0x69f4,	// (0x000359d2) main_cset_slider_pane_g4_ParamLimits

0x69f4,	// (0x000359d2) main_cset_slider_pane_g4

0x6a03,	// (0x000359e1) main_cset_slider_pane_g5_ParamLimits

0x6a03,	// (0x000359e1) main_cset_slider_pane_g5

0x6a11,	// (0x000359ef) main_cset_slider_pane_g6_ParamLimits

0x6a11,	// (0x000359ef) main_cset_slider_pane_g6

0xf976,	// (0x0003e954) main_cset_slider_pane_g_ParamLimits

0xd54e,	// (0x0003c52c) main_cset_slider_pane_t1_ParamLimits

0x6aa1,	// (0x00035a7f) main_cset_slider_pane_t2_ParamLimits

0x6abb,	// (0x00035a99) main_cset_slider_pane_t3_ParamLimits

0x6ad5,	// (0x00035ab3) main_cset_slider_pane_t4_ParamLimits

0x6aef,	// (0x00035acd) main_cset_slider_pane_t5_ParamLimits

0x6b0d,	// (0x00035aeb) main_cset_slider_pane_t6_ParamLimits

0x6b24,	// (0x00035b02) main_cset_slider_pane_t7_ParamLimits

0x6b52,	// (0x00035b30) main_cset_slider_pane_t8_ParamLimits

0x6b52,	// (0x00035b30) main_cset_slider_pane_t8

0x6b7a,	// (0x00035b58) main_cset_slider_pane_t9_ParamLimits

0x6b7a,	// (0x00035b58) main_cset_slider_pane_t9

0x6ba2,	// (0x00035b80) main_cset_slider_pane_t10_ParamLimits

0x6ba2,	// (0x00035b80) main_cset_slider_pane_t10

0x6bca,	// (0x00035ba8) main_cset_slider_pane_t11_ParamLimits

0x6bca,	// (0x00035ba8) main_cset_slider_pane_t11

0x6bf4,	// (0x00035bd2) main_cset_slider_pane_t12_ParamLimits

0x6bf4,	// (0x00035bd2) main_cset_slider_pane_t12

0x6c11,	// (0x00035bef) main_cset_slider_pane_t13_ParamLimits

0x6c11,	// (0x00035bef) main_cset_slider_pane_t13

0xf99b,	// (0x0003e979) main_cset_slider_pane_t_ParamLimits

0x9e15,	// (0x00038df3) bg_popup_sub_pane_cp011

0xd668,	// (0x0003c646) main_cset_text_pane_g1

0xd670,	// (0x0003c64e) main_cset_text_pane_t1

0xd67e,	// (0x0003c65c) main_cset_text_pane_t2

0xd68c,	// (0x0003c66a) main_cset_text_pane_t3

0xd701,	// (0x0003c6df) main_cset_text_pane_t4

0xd70f,	// (0x0003c6ed) main_cset_text_pane_t5

0xd71d,	// (0x0003c6fb) main_cset_text_pane_t6

0xd72b,	// (0x0003c709) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003ea10) main_cset_text_pane_t

0x1599,	// (0x00030577) main_cam4_burst_pane

0x1599,	// (0x00030577) main_cam5_pane

0x68bb,	// (0x00035899) bg_button_pane_cp019

0x68c4,	// (0x000358a2) bg_button_pane_cp020

0xd52a,	// (0x0003c508) main_cset_slider_pane_g7_ParamLimits

0xd52a,	// (0x0003c508) main_cset_slider_pane_g7

0xd536,	// (0x0003c514) main_cset_slider_pane_g8_ParamLimits

0xd536,	// (0x0003c514) main_cset_slider_pane_g8

0x6a25,	// (0x00035a03) main_cset_slider_pane_g9_ParamLimits

0x6a25,	// (0x00035a03) main_cset_slider_pane_g9

0x6a31,	// (0x00035a0f) main_cset_slider_pane_g10_ParamLimits

0x6a31,	// (0x00035a0f) main_cset_slider_pane_g10

0x6a3d,	// (0x00035a1b) main_cset_slider_pane_g11_ParamLimits

0x6a3d,	// (0x00035a1b) main_cset_slider_pane_g11

0x6a49,	// (0x00035a27) main_cset_slider_pane_g12_ParamLimits

0x6a49,	// (0x00035a27) main_cset_slider_pane_g12

0x6a55,	// (0x00035a33) main_cset_slider_pane_g13_ParamLimits

0x6a55,	// (0x00035a33) main_cset_slider_pane_g13

0x6a61,	// (0x00035a3f) main_cset_slider_pane_g14_ParamLimits

0x6a61,	// (0x00035a3f) main_cset_slider_pane_g14

0x6a6d,	// (0x00035a4b) main_cset_slider_pane_g15_ParamLimits

0x6a6d,	// (0x00035a4b) main_cset_slider_pane_g15

0xd57c,	// (0x0003c55a) main_cset_slider_pane_t14_ParamLimits

0xd57c,	// (0x0003c55a) main_cset_slider_pane_t14

0xd5b5,	// (0x0003c593) main_cset_slider_pane_t15_ParamLimits

0xd5b5,	// (0x0003c593) main_cset_slider_pane_t15

0x70b9,	// (0x00036097) aid_cam4_burst_size_cell_ParamLimits

0x70b9,	// (0x00036097) aid_cam4_burst_size_cell

0x70d9,	// (0x000360b7) grid_cam4_burst_pane_ParamLimits

0x70d9,	// (0x000360b7) grid_cam4_burst_pane

0x7113,	// (0x000360f1) linegrid_cam4_burst_pane_ParamLimits

0x7113,	// (0x000360f1) linegrid_cam4_burst_pane

0xd739,	// (0x0003c717) scroll_pane_cp30_ParamLimits

0xd739,	// (0x0003c717) scroll_pane_cp30

0x7135,	// (0x00036113) cell_cam4_burst_pane_ParamLimits

0x7135,	// (0x00036113) cell_cam4_burst_pane

0xd745,	// (0x0003c723) linegrid_cam4_burst_pane_g1_ParamLimits

0xd745,	// (0x0003c723) linegrid_cam4_burst_pane_g1

0x718a,	// (0x00036168) linegrid_cam4_burst_pane_g2_ParamLimits

0x718a,	// (0x00036168) linegrid_cam4_burst_pane_g2

0xd752,	// (0x0003c730) linegrid_cam4_burst_pane_g3_ParamLimits

0xd752,	// (0x0003c730) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003ea1f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003ea1f) linegrid_cam4_burst_pane_g

0x719b,	// (0x00036179) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x719b,	// (0x00036179) linegrid_cam4_burst_pane_g3_copy1

0xd75f,	// (0x0003c73d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd75f,	// (0x0003c73d) linegrid_cam4_burst_pane_g4

0x71b9,	// (0x00036197) linegrid_cam4_burst_pane_g5_ParamLimits

0x71b9,	// (0x00036197) linegrid_cam4_burst_pane_g5

0x71ca,	// (0x000361a8) linegrid_cam4_burst_pane_g6_ParamLimits

0x71ca,	// (0x000361a8) linegrid_cam4_burst_pane_g6

0xd76c,	// (0x0003c74a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd76c,	// (0x0003c74a) linegrid_cam4_burst_pane_g7

0x71e1,	// (0x000361bf) cell_cam4_burst_pane_g1

0xd785,	// (0x0003c763) main_cam5_pane_t1_ParamLimits

0xd785,	// (0x0003c763) main_cam5_pane_t1

0xd797,	// (0x0003c775) main_cam5_pane_t2_ParamLimits

0xd797,	// (0x0003c775) main_cam5_pane_t2

0xd7a9,	// (0x0003c787) main_cam5_pane_t3_ParamLimits

0xd7a9,	// (0x0003c787) main_cam5_pane_t3

0xd7bb,	// (0x0003c799) main_cam5_pane_t4_ParamLimits

0xd7bb,	// (0x0003c799) main_cam5_pane_t4

0xd7d3,	// (0x0003c7b1) main_cam5_pane_t5_ParamLimits

0xd7d3,	// (0x0003c7b1) main_cam5_pane_t5

0xd7e7,	// (0x0003c7c5) main_cam5_pane_t6_ParamLimits

0xd7e7,	// (0x0003c7c5) main_cam5_pane_t6

0xd7fb,	// (0x0003c7d9) main_cam5_pane_t7_ParamLimits

0xd7fb,	// (0x0003c7d9) main_cam5_pane_t7

0xd80d,	// (0x0003c7eb) main_cam5_pane_t8_ParamLimits

0xd80d,	// (0x0003c7eb) main_cam5_pane_t8

0xd82b,	// (0x0003c809) main_cam5_pane_t9_ParamLimits

0xd82b,	// (0x0003c809) main_cam5_pane_t9

0xd83d,	// (0x0003c81b) main_cam5_pane_t10_ParamLimits

0xd83d,	// (0x0003c81b) main_cam5_pane_t10

0xd84f,	// (0x0003c82d) main_cam5_pane_t11_ParamLimits

0xd84f,	// (0x0003c82d) main_cam5_pane_t11

0xd863,	// (0x0003c841) main_cam5_pane_t12_ParamLimits

0xd863,	// (0x0003c841) main_cam5_pane_t12

0xd87a,	// (0x0003c858) main_cam5_pane_t13_ParamLimits

0xd87a,	// (0x0003c858) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003ea2b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003ea2b) main_cam5_pane_t

0xfd57,	// (0x0002ed35) popup_scut_keymap_window_ParamLimits

0xfd57,	// (0x0002ed35) popup_scut_keymap_window

0x71f4,	// (0x000361d2) aid_size_cell_brow_shortcut

0xa738,	// (0x00039716) bg_popup_window_pane_cp010

0x7200,	// (0x000361de) grid_scut_pane

0x720c,	// (0x000361ea) cell_scut_pane_ParamLimits

0x720c,	// (0x000361ea) cell_scut_pane

0x7225,	// (0x00036203) cell_scut_pane_g1

0xd89d,	// (0x0003c87b) cell_scut_pane_t1

0xd8ac,	// (0x0003c88a) cell_scut_pane_t2

0x722e,	// (0x0003620c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003ea46) cell_scut_pane_t

0x5436,	// (0x00034414) main_mup3_pane_g8_ParamLimits

0x5436,	// (0x00034414) main_mup3_pane_g8

0x0f5e,	// (0x0002ff3c) area_vitu2_query_pane_ParamLimits

0x0f5e,	// (0x0002ff3c) area_vitu2_query_pane

0x6f61,	// (0x00035f3f) input_focus_pane_cp08

0xd8bb,	// (0x0003c899) area_vitu2_query_pane_g1

0x723c,	// (0x0003621a) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003ea4d) area_vitu2_query_pane_g

0x724d,	// (0x0003622b) area_vitu2_query_pane_t1_ParamLimits

0x724d,	// (0x0003622b) area_vitu2_query_pane_t1

0x7261,	// (0x0003623f) area_vitu2_query_pane_t2_ParamLimits

0x7261,	// (0x0003623f) area_vitu2_query_pane_t2

0x7275,	// (0x00036253) area_vitu2_query_pane_t3_ParamLimits

0x7275,	// (0x00036253) area_vitu2_query_pane_t3

0xd8c7,	// (0x0003c8a5) area_vitu2_query_pane_t4_ParamLimits

0xd8c7,	// (0x0003c8a5) area_vitu2_query_pane_t4

0xd8ef,	// (0x0003c8cd) area_vitu2_query_pane_t5_ParamLimits

0xd8ef,	// (0x0003c8cd) area_vitu2_query_pane_t5

0xd917,	// (0x0003c8f5) area_vitu2_query_pane_t6_ParamLimits

0xd917,	// (0x0003c8f5) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003ea52) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003ea52) area_vitu2_query_pane_t

0x729d,	// (0x0003627b) bg_button_pane_cp018

0x72ab,	// (0x00036289) bg_button_pane_cp021

0x72b7,	// (0x00036295) bg_button_pane_cp022

0x72c8,	// (0x000362a6) input_focus_pane_cp09

0xafc7,	// (0x00039fa5) aid_size_touch_mv_arrow_left

0xaff2,	// (0x00039fd0) aid_size_touch_mv_arrow_right

0x6a85,	// (0x00035a63) main_cset_slider_pane_g16_ParamLimits

0x6a85,	// (0x00035a63) main_cset_slider_pane_g16

0x6a93,	// (0x00035a71) main_cset_slider_pane_g17_ParamLimits

0x6a93,	// (0x00035a71) main_cset_slider_pane_g17

0x71e1,	// (0x000361bf) cell_cam4_burst_pane_g1_ParamLimits

0x9e15,	// (0x00038df3) compa_mode_pane

0x6ccb,	// (0x00035ca9) popup_vtel_slider_window_g3_ParamLimits

0x6ccb,	// (0x00035ca9) popup_vtel_slider_window_g3

0x6ce2,	// (0x00035cc0) popup_vtel_slider_window_g4_ParamLimits

0x6ce2,	// (0x00035cc0) popup_vtel_slider_window_g4

0x6cf9,	// (0x00035cd7) popup_vtel_slider_window_t1_ParamLimits

0x6cf9,	// (0x00035cd7) popup_vtel_slider_window_t1

0x1599,	// (0x00030577) main_cl_pane

0x489e,	// (0x0003387c) popup_imed_adjust2_window_ParamLimits

0xc603,	// (0x0003b5e1) bg_tb_trans_pane_cp05_ParamLimits

0xcf37,	// (0x0003bf15) popup_imed_adjust2_window_g1_ParamLimits

0xcf46,	// (0x0003bf24) popup_imed_adjust2_window_g2_ParamLimits

0xcf46,	// (0x0003bf24) popup_imed_adjust2_window_g2

0xcf52,	// (0x0003bf30) popup_imed_adjust2_window_g3_ParamLimits

0xcf52,	// (0x0003bf30) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0003e7b9) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0003e7b9) popup_imed_adjust2_window_g

0xcf5e,	// (0x0003bf3c) popup_imed_adjust2_window_t1_ParamLimits

0xcf76,	// (0x0003bf54) slider_imed_adjust_pane_ParamLimits

0xcf8a,	// (0x0003bf68) slider_imed_adjust_pane_g1_ParamLimits

0xcf9a,	// (0x0003bf78) slider_imed_adjust_pane_g2_ParamLimits

0xcfaa,	// (0x0003bf88) slider_imed_adjust_pane_g3_ParamLimits

0xcfbb,	// (0x0003bf99) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0003e7c0) slider_imed_adjust_pane_g_ParamLimits

0x0d11,	// (0x0002fcef) aid_touch_area_cam4_ParamLimits

0x0d11,	// (0x0002fcef) aid_touch_area_cam4

0x64ea,	// (0x000354c8) battery_pane_cp01

0x0de4,	// (0x0002fdc2) main_camera4_pane_g6_ParamLimits

0x0de4,	// (0x0002fdc2) main_camera4_pane_g6

0x0e0e,	// (0x0002fdec) main_camera4_pane_t2_ParamLimits

0x0e0e,	// (0x0002fdec) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003e8c7) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003e8c7) main_camera4_pane_t

0x0e2f,	// (0x0002fe0d) aid_touch_area_vid4_ParamLimits

0x0e2f,	// (0x0002fe0d) aid_touch_area_vid4

0x0e83,	// (0x0002fe61) main_video4_pane_g5_ParamLimits

0x0e83,	// (0x0002fe61) main_video4_pane_g5

0x0ea8,	// (0x0002fe86) vid4_progress_pane_ParamLimits

0x0ea8,	// (0x0002fe86) vid4_progress_pane

0xd542,	// (0x0003c520) main_cset_slider_pane_g18_ParamLimits

0xd542,	// (0x0003c520) main_cset_slider_pane_g18

0xd779,	// (0x0003c757) cell_cam4_burst_pane_g2_ParamLimits

0xd779,	// (0x0003c757) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003ea26) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003ea26) cell_cam4_burst_pane_g

0xa587,	// (0x00039565) bg_cl_pane_ParamLimits

0xa587,	// (0x00039565) bg_cl_pane

0x72d9,	// (0x000362b7) cl_header_pane_ParamLimits

0x72d9,	// (0x000362b7) cl_header_pane

0x72ed,	// (0x000362cb) cl_listscroll_pane_ParamLimits

0x72ed,	// (0x000362cb) cl_listscroll_pane

0xd963,	// (0x0003c941) bg_cl_pane_g1

0xd96b,	// (0x0003c949) bg_cl_pane_g2

0xd973,	// (0x0003c951) bg_cl_pane_g3

0xd97b,	// (0x0003c959) bg_cl_pane_g4

0xd983,	// (0x0003c961) bg_cl_pane_g5

0xd98b,	// (0x0003c969) bg_cl_pane_g6

0xd993,	// (0x0003c971) bg_cl_pane_g7

0xd99b,	// (0x0003c979) bg_cl_pane_g8

0xd9a3,	// (0x0003c981) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003ea61) bg_cl_pane_g

0x72fd,	// (0x000362db) aid_height_cl_leading_ParamLimits

0x72fd,	// (0x000362db) aid_height_cl_leading

0x7309,	// (0x000362e7) aid_height_cl_text_ParamLimits

0x7309,	// (0x000362e7) aid_height_cl_text

0xb0f1,	// (0x0003a0cf) bg_cl_header_pane_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_cl_header_pane

0x7328,	// (0x00036306) cl_header_pane_g1_ParamLimits

0x7328,	// (0x00036306) cl_header_pane_g1

0x733e,	// (0x0003631c) cl_header_pane_t1_ParamLimits

0x733e,	// (0x0003631c) cl_header_pane_t1

0xd9ab,	// (0x0003c989) cl_list_pane

0xd515,	// (0x0003c4f3) hc_scroll_pane_cp01

0xa98a,	// (0x00039968) bg_cl_header_pane_g1

0xd3f7,	// (0x0003c3d5) bg_cl_header_pane_g2

0xa9aa,	// (0x00039988) bg_cl_header_pane_g3

0xd407,	// (0x0003c3e5) bg_cl_header_pane_g4

0xd3ff,	// (0x0003c3dd) bg_cl_header_pane_g5

0xd621,	// (0x0003c5ff) bg_cl_header_pane_g6

0xd41f,	// (0x0003c3fd) bg_cl_header_pane_g7

0xd427,	// (0x0003c405) bg_cl_header_pane_g8

0xd417,	// (0x0003c3f5) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003ea74) bg_cl_header_pane_g

0x7357,	// (0x00036335) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7357,	// (0x00036335) hc_cl_list_double_graphic_heading_pane

0x736a,	// (0x00036348) hc_cl_list_single_graphic_pane_ParamLimits

0x736a,	// (0x00036348) hc_cl_list_single_graphic_pane

0x7382,	// (0x00036360) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7382,	// (0x00036360) hc_cl_list_single_graphic_pane_g1

0x738e,	// (0x0003636c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x738e,	// (0x0003636c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003ea87) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003ea87) hc_cl_list_single_graphic_pane_g

0x73a2,	// (0x00036380) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73a2,	// (0x00036380) hc_cl_list_single_graphic_pane_t1

0x7382,	// (0x00036360) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7382,	// (0x00036360) hc_cl_list_double_graphic_heading_pane_g1

0x73b7,	// (0x00036395) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73b7,	// (0x00036395) hc_cl_list_double_graphic_heading_pane_g2

0x73cb,	// (0x000363a9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73cb,	// (0x000363a9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003ea8c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003ea8c) hc_cl_list_double_graphic_heading_pane_g

0x73df,	// (0x000363bd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73df,	// (0x000363bd) hc_cl_list_double_graphic_heading_pane_t1

0x73f4,	// (0x000363d2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73f4,	// (0x000363d2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003ea93) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003ea93) hc_cl_list_double_graphic_heading_pane_t

0x7411,	// (0x000363ef) vid4_progress_pane_g1

0x7421,	// (0x000363ff) vid4_progress_pane_g2

0x13a0,	// (0x0003037e) vid4_progress_pane_g3

0x6543,	// (0x00035521) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003ea98) vid4_progress_pane_g

0x13b2,	// (0x00030390) vid4_progress_pane_t1

0x7431,	// (0x0003640f) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003eaa3) vid4_progress_pane_t

0x13ca,	// (0x000303a8) wait_bar_pane_cp07

0xc828,	// (0x0003b806) blid_firmament_pane_ParamLimits

0xc86b,	// (0x0003b849) popup_blid_sat_info2_window_g1

0xc88f,	// (0x0003b86d) popup_blid_sat_info2_window_t3

0xc89d,	// (0x0003b87b) popup_blid_sat_info2_window_t4

0xc8ab,	// (0x0003b889) popup_blid_sat_info2_window_t5

0xc8b9,	// (0x0003b897) popup_blid_sat_info2_window_t6

0xc8c9,	// (0x0003b8a7) popup_blid_sat_info2_window_t7

0xc8d7,	// (0x0003b8b5) popup_blid_sat_info2_window_t8

0xc8e5,	// (0x0003b8c3) popup_blid_sat_info2_window_t9

0xc8f3,	// (0x0003b8d1) popup_blid_sat_info2_window_t10

0xc9bb,	// (0x0003b999) aid_firma_cardinal_ParamLimits

0xc9cf,	// (0x0003b9ad) blid_firmament_pane_t1_ParamLimits

0xc9e6,	// (0x0003b9c4) blid_firmament_pane_t2_ParamLimits

0xc9fd,	// (0x0003b9db) blid_firmament_pane_t3_ParamLimits

0xca14,	// (0x0003b9f2) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0003e6ad) blid_firmament_pane_t_ParamLimits

0xca2b,	// (0x0003ba09) blid_sat_info_pane_ParamLimits

0x157f,	// (0x0003055d) main_cam_set_pane_ParamLimits

0x5c65,	// (0x00034c43) aid_size_cell_colour_35_ParamLimits

0x5c85,	// (0x00034c63) aid_size_cell_colour_112_ParamLimits

0x5ca5,	// (0x00034c83) aid_size_cell_effect_ParamLimits

0xc603,	// (0x0003b5e1) bg_tb_trans_pane_cp02_ParamLimits

0xabf2,	// (0x00039bd0) heading_imed_pane_ParamLimits

0x5cc5,	// (0x00034ca3) listscroll_imed_pane_ParamLimits

0xbc2b,	// (0x0003ac09) popup_call2_audio_first_window_g5_ParamLimits

0xbc2b,	// (0x0003ac09) popup_call2_audio_first_window_g5

0x09fc,	// (0x0002f9da) aid_size_touch_image3_arrow_left_ParamLimits

0x09fc,	// (0x0002f9da) aid_size_touch_image3_arrow_left

0x0a28,	// (0x0002fa06) aid_size_touch_image3_arrow_right_ParamLimits

0x0a28,	// (0x0002fa06) aid_size_touch_image3_arrow_right

0x7446,	// (0x00036424) vid4_progress_pane_t3

0x5fde,	// (0x00034fbc) main_hwr_training_symbol_option_pane_ParamLimits

0x5fde,	// (0x00034fbc) main_hwr_training_symbol_option_pane

0xd230,	// (0x0003c20e) popup_hwr_training_preview_window_ParamLimits

0xd230,	// (0x0003c20e) popup_hwr_training_preview_window

0x0893,	// (0x0002f871) hwr_training_navi_pane_g5_ParamLimits

0x0893,	// (0x0002f871) hwr_training_navi_pane_g5

0xd3e5,	// (0x0003c3c3) popup_char_count_window

0x157f,	// (0x0003055d) bg_popup_sub_pane_cp20_ParamLimits

0x1307,	// (0x000302e5) list_vitu2_match_list_pane_ParamLimits

0x1316,	// (0x000302f4) vitu2_page_scroll_pane_ParamLimits

0x1316,	// (0x000302f4) vitu2_page_scroll_pane

0xd9d6,	// (0x0003c9b4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9d6,	// (0x0003c9b4) list_single_hwr_training_symbol_option_pane

0xd9e9,	// (0x0003c9c7) list_single_hwr_training_symbol_option_pane_g1

0xd9f1,	// (0x0003c9cf) list_single_hwr_training_symbol_option_pane_t1

0xd9ff,	// (0x0003c9dd) bg_button_pane_cp023

0xda08,	// (0x0003c9e6) bg_button_pane_cp024

0x7493,	// (0x00036471) vitu2_page_scroll_pane_g1

0x749b,	// (0x00036479) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003eaaa) vitu2_page_scroll_pane_g

0x74a5,	// (0x00036483) vitu2_page_scroll_pane_t1

0xd69a,	// (0x0003c678) popup_char_count_window_g1

0xda3b,	// (0x0003ca19) popup_char_count_window_g2

0xd6a3,	// (0x0003c681) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003eaaf) popup_char_count_window_g

0xda44,	// (0x0003ca22) popup_char_count_window_t1

0x1599,	// (0x00030577) main_vded2_pane

0xcf23,	// (0x0003bf01) aid_size_cell_imed_line

0xcf2d,	// (0x0003bf0b) grid_imed_line_width_pane

0x65c6,	// (0x000355a4) vid4_indicators_pane_g4

0xda52,	// (0x0003ca30) cell_imed_line_width_pane_ParamLimits

0xda52,	// (0x0003ca30) cell_imed_line_width_pane

0xda68,	// (0x0003ca46) cell_imed_line_width_pane_g1

0xd6ef,	// (0x0003c6cd) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003eab6) cell_imed_line_width_pane_g

0x74b4,	// (0x00036492) main_vded2_pane_g1_ParamLimits

0x74b4,	// (0x00036492) main_vded2_pane_g1

0x74cf,	// (0x000364ad) main_vded2_pane_g2_ParamLimits

0x74cf,	// (0x000364ad) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003eabb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003eabb) main_vded2_pane_g

0x74e1,	// (0x000364bf) vded2_slider_pane_ParamLimits

0x74e1,	// (0x000364bf) vded2_slider_pane

0x74f1,	// (0x000364cf) aid_size_touch_vded2_end

0x74fb,	// (0x000364d9) aid_size_touch_vded2_playhead

0xda71,	// (0x0003ca4f) aid_size_touch_vded2_start

0xda79,	// (0x0003ca57) vded2_slider_bg_pane

0xda82,	// (0x0003ca60) vded2_slider_pane_g1

0xda8b,	// (0x0003ca69) vded2_slider_pane_g2

0x7505,	// (0x000364e3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003eac0) vded2_slider_pane_g

0xd6ac,	// (0x0003c68a) vded2_slider_bg_pane_g1

0xd6b5,	// (0x0003c693) vded2_slider_bg_pane_g2

0xd6be,	// (0x0003c69c) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003eac7) vded2_slider_bg_pane_g

0x3f78,	// (0x00032f56) aid_postcard_touch_down_pane_ParamLimits

0x3f78,	// (0x00032f56) aid_postcard_touch_down_pane

0x3f90,	// (0x00032f6e) aid_postcard_touch_up_pane_ParamLimits

0x3f90,	// (0x00032f6e) aid_postcard_touch_up_pane

0x1599,	// (0x00030577) main_blid2_pane

0x4880,	// (0x0003385e) popup_blid2_search_window

0x9e15,	// (0x00038df3) blid2_gps_pane

0x9e15,	// (0x00038df3) blid2_navig_pane

0x9e15,	// (0x00038df3) blid2_search_pane

0x9e15,	// (0x00038df3) blid2_tripm_pane

0x7510,	// (0x000364ee) blid2_search_pane_g1_ParamLimits

0x7510,	// (0x000364ee) blid2_search_pane_g1

0x7523,	// (0x00036501) blid2_search_pane_t1_ParamLimits

0x7523,	// (0x00036501) blid2_search_pane_t1

0x7535,	// (0x00036513) aid_size_cell_blid2_gps_ParamLimits

0x7535,	// (0x00036513) aid_size_cell_blid2_gps

0x754d,	// (0x0003652b) blid2_gps_pane_g1_ParamLimits

0x754d,	// (0x0003652b) blid2_gps_pane_g1

0x7561,	// (0x0003653f) grid_blid2_satellite_pane_ParamLimits

0x7561,	// (0x0003653f) grid_blid2_satellite_pane

0x7579,	// (0x00036557) blid2_navig_pane_g1_ParamLimits

0x7579,	// (0x00036557) blid2_navig_pane_g1

0x7585,	// (0x00036563) blid2_navig_pane_t1_ParamLimits

0x7585,	// (0x00036563) blid2_navig_pane_t1

0x75a0,	// (0x0003657e) blid2_navig_pane_t2_ParamLimits

0x75a0,	// (0x0003657e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003eace) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003eace) blid2_navig_pane_t

0x75bb,	// (0x00036599) blid2_navig_ring_pane_ParamLimits

0x75bb,	// (0x00036599) blid2_navig_ring_pane

0x75d6,	// (0x000365b4) blid2_speed_pane_ParamLimits

0x75d6,	// (0x000365b4) blid2_speed_pane

0x75e2,	// (0x000365c0) blid2_tripm_pane_g1_ParamLimits

0x75e2,	// (0x000365c0) blid2_tripm_pane_g1

0x75fd,	// (0x000365db) blid2_tripm_pane_g2_ParamLimits

0x75fd,	// (0x000365db) blid2_tripm_pane_g2

0x7611,	// (0x000365ef) blid2_tripm_pane_g3_ParamLimits

0x7611,	// (0x000365ef) blid2_tripm_pane_g3

0x7625,	// (0x00036603) blid2_tripm_pane_g4_ParamLimits

0x7625,	// (0x00036603) blid2_tripm_pane_g4

0x7639,	// (0x00036617) blid2_tripm_pane_g5_ParamLimits

0x7639,	// (0x00036617) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003ead3) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003ead3) blid2_tripm_pane_g

0x765f,	// (0x0003663d) blid2_tripm_pane_t1_ParamLimits

0x765f,	// (0x0003663d) blid2_tripm_pane_t1

0x7678,	// (0x00036656) blid2_tripm_pane_t2_ParamLimits

0x7678,	// (0x00036656) blid2_tripm_pane_t2

0x7691,	// (0x0003666f) blid2_tripm_pane_t3_ParamLimits

0x7691,	// (0x0003666f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003eae0) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003eae0) blid2_tripm_pane_t

0x76d8,	// (0x000366b6) cell_blid2_satellite_pane_ParamLimits

0x76d8,	// (0x000366b6) cell_blid2_satellite_pane

0x76f4,	// (0x000366d2) cell_blid2_satellite_pane_g1

0xda93,	// (0x0003ca71) cell_blid2_satellite_pane_t1

0xca3b,	// (0x0003ba19) blid2_speed_pane_g1

0xdaa1,	// (0x0003ca7f) blid2_speed_pane_t1

0xdaaf,	// (0x0003ca8d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003eae9) blid2_speed_pane_t

0xca3b,	// (0x0003ba19) blid2_navig_ring_pane_g1

0x76fd,	// (0x000366db) blid2_navig_ring_pane_g2

0x7705,	// (0x000366e3) blid2_navig_ring_pane_g3

0x770d,	// (0x000366eb) blid2_navig_ring_pane_g4

0x7715,	// (0x000366f3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003eaee) blid2_navig_ring_pane_g

0x9e15,	// (0x00038df3) bg_popup_window_pane_cp011

0xdabd,	// (0x0003ca9b) popup_blid2_search_window_g1

0xdac5,	// (0x0003caa3) popup_blid2_search_window_t1

0xdad3,	// (0x0003cab1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003eaf9) popup_blid2_search_window_t

0xa899,	// (0x00039877) main_browser_pane_g1

0xa587,	// (0x00039565) main_browser_pane_ParamLimits

0x157f,	// (0x0003055d) bg_button_pane_cp011_ParamLimits

0x1264,	// (0x00030242) cell_vitu2_function_pane_g1_ParamLimits

0xc603,	// (0x0003b5e1) bg_popup_sub_pane_cp22_ParamLimits

0x6f61,	// (0x00035f3f) input_focus_pane_cp08_ParamLimits

0x6f78,	// (0x00035f56) popup_vitu2_query_button_pane_ParamLimits

0x6f78,	// (0x00035f56) popup_vitu2_query_button_pane

0x6f89,	// (0x00035f67) popup_vitu2_query_input_button_pane

0xd65c,	// (0x0003c63a) popup_vitu2_query_window_g1_ParamLimits

0x6f93,	// (0x00035f71) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003e9fa) popup_vitu2_query_window_g_ParamLimits

0x9e15,	// (0x00038df3) bg_button_pane_cp026

0x771d,	// (0x000366fb) popup_vitu2_query_input_button_pane_g1

0x9e15,	// (0x00038df3) bg_button_pane_cp025

0xdae1,	// (0x0003cabf) popup_vitu2_query_button_pane_t1

0x5026,	// (0x00034004) main_mp3_pane_t6

0x5034,	// (0x00034012) popup_slider_window_cp01

0x652a,	// (0x00035508) cam4_battery_pane

0x657f,	// (0x0003555d) cam4_battery_pane_cp02

0x7409,	// (0x000363e7) cam4_battery_pane_cp01

0x7409,	// (0x000363e7) cam4_battery_pane_cp03

0xd6f7,	// (0x0003c6d5) cam4_battery_pane_g1

0xca3b,	// (0x0003ba19) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003eafe) cam4_battery_pane_g

0xc901,	// (0x0003b8df) popup_blid_sat_info2_window_t11

0xafc7,	// (0x00039fa5) aid_size_touch_mv_arrow_left_ParamLimits

0xaff2,	// (0x00039fd0) aid_size_touch_mv_arrow_right_ParamLimits

0xb050,	// (0x0003a02e) navi_pane_g1_ParamLimits

0xb05c,	// (0x0003a03a) navi_pane_g2_ParamLimits

0xb08a,	// (0x0003a068) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0003e3bf) navi_pane_g_ParamLimits

0x395c,	// (0x0003293a) navi_pane_mv_t1_ParamLimits

0x5cd1,	// (0x00034caf) grid_imed_effect_pane_ParamLimits

0x237f,	// (0x0003135d) aid_placing_vt_slider_lsc

0xa7e4,	// (0x000397c2) aid_placing_vt_slider_prt

0xb0f1,	// (0x0003a0cf) bg_tb_trans_pane_cp01_ParamLimits

0xcb82,	// (0x0003bb60) popup_image_details_window_g1_ParamLimits

0xcb95,	// (0x0003bb73) popup_image_details_window_g2_ParamLimits

0xcbaa,	// (0x0003bb88) popup_image_details_window_g3_ParamLimits

0xcbaa,	// (0x0003bb88) popup_image_details_window_g3

0xf714,	// (0x0003e6f2) popup_image_details_window_g_ParamLimits

0xcbbe,	// (0x0003bb9c) popup_image_details_window_t1_ParamLimits

0xcbd0,	// (0x0003bbae) popup_image_details_window_t2_ParamLimits

0xcbe9,	// (0x0003bbc7) popup_image_details_window_t3_ParamLimits

0xcbfd,	// (0x0003bbdb) popup_image_details_window_t4_ParamLimits

0xcc18,	// (0x0003bbf6) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0003e6f9) popup_image_details_window_t_ParamLimits

0x7315,	// (0x000362f3) cl_header_name_pane_ParamLimits

0x7315,	// (0x000362f3) cl_header_name_pane

0x7725,	// (0x00036703) cl_header_name_pane_t1_ParamLimits

0x7725,	// (0x00036703) cl_header_name_pane_t1

0x7746,	// (0x00036724) cl_header_name_pane_t2_ParamLimits

0x7746,	// (0x00036724) cl_header_name_pane_t2

0x7788,	// (0x00036766) cl_header_name_pane_t3_ParamLimits

0x7788,	// (0x00036766) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003eb03) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003eb03) cl_header_name_pane_t

0xb141,	// (0x0003a11f) navi_pane_mv_g2_ParamLimits

0xd3a2,	// (0x0003c380) field_vitu2_entry_pane_g1_ParamLimits

0xd3ae,	// (0x0003c38c) field_vitu2_entry_pane_g2_ParamLimits

0xd3ba,	// (0x0003c398) field_vitu2_entry_pane_g3_ParamLimits

0xd3ba,	// (0x0003c398) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003e8f9) field_vitu2_entry_pane_g_ParamLimits

0x6649,	// (0x00035627) cell_vitu2_itu_pane_g1_ParamLimits

0x110c,	// (0x000300ea) cell_vitu2_itu_pane_g2_ParamLimits

0x110c,	// (0x000300ea) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003e905) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003e905) cell_vitu2_itu_pane_g

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp05_ParamLimits

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp05

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp03

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp04

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp10_ParamLimits

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp10

0x72b7,	// (0x00036295) bg_vkb2_func_pane_cp08

0x729d,	// (0x0003627b) bg_vkb2_func_pane_cp06

0x72ab,	// (0x00036289) bg_vkb2_func_pane_cp07

0xda11,	// (0x0003c9ef) bg_vkb2_func_pane_cp11_ParamLimits

0xda11,	// (0x0003c9ef) bg_vkb2_func_pane_cp11

0xda26,	// (0x0003ca04) bg_vkb2_func_pane_cp12_ParamLimits

0xda26,	// (0x0003ca04) bg_vkb2_func_pane_cp12

0x9e15,	// (0x00038df3) bg_vkb2_func_pane_cp09

0xd3f7,	// (0x0003c3d5) bg_vkb2_func_pane_g1

0xa9aa,	// (0x00039988) bg_vkb2_func_pane_g2

0xd3ff,	// (0x0003c3dd) bg_vkb2_func_pane_g3

0xd407,	// (0x0003c3e5) bg_vkb2_func_pane_g4

0xd621,	// (0x0003c5ff) bg_vkb2_func_pane_g5

0xd41f,	// (0x0003c3fd) bg_vkb2_func_pane_g6

0xd427,	// (0x0003c405) bg_vkb2_func_pane_g7

0xd417,	// (0x0003c3f5) bg_vkb2_func_pane_g8

0xa98a,	// (0x00039968) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003eb0a) bg_vkb2_func_pane_g

0x764d,	// (0x0003662b) blid2_tripm_pane_g6_ParamLimits

0x764d,	// (0x0003662b) blid2_tripm_pane_g6

0xd2ee,	// (0x0003c2cc) mp4_progress_pane_g1

0x76c4,	// (0x000366a2) blid2_tripm_values_pane_ParamLimits

0x76c4,	// (0x000366a2) blid2_tripm_values_pane

0x77b9,	// (0x00036797) blid2_tripm_values_pane_t1

0x77c7,	// (0x000367a5) blid2_tripm_values_pane_t2

0x77d5,	// (0x000367b3) blid2_tripm_values_pane_t3

0x77e3,	// (0x000367c1) blid2_tripm_values_pane_t4

0x77f1,	// (0x000367cf) blid2_tripm_values_pane_t5

0x77ff,	// (0x000367dd) blid2_tripm_values_pane_t6

0x780d,	// (0x000367eb) blid2_tripm_values_pane_t7

0x781b,	// (0x000367f9) blid2_tripm_values_pane_t8

0x7829,	// (0x00036807) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003eb1d) blid2_tripm_values_pane_t

0x23bc,	// (0x0003139a) call_video_pane_t1_ParamLimits

0x23d6,	// (0x000313b4) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0003e248) call_video_pane_t_ParamLimits

0x3ebb,	// (0x00032e99) msg_header_pane_g1_ParamLimits

0xb327,	// (0x0003a305) msg_header_pane_g2_ParamLimits

0xb327,	// (0x0003a305) msg_header_pane_g2

0x0001,

0xf484,	// (0x0003e462) msg_header_pane_g_ParamLimits

0xf484,	// (0x0003e462) msg_header_pane_g

0xa587,	// (0x00039565) main_clock2_pane_ParamLimits

0x5a77,	// (0x00034a55) grid_clock2_toolbar_pane_ParamLimits

0x5a77,	// (0x00034a55) grid_clock2_toolbar_pane

0x5a77,	// (0x00034a55) listscroll_clock2_pane_ParamLimits

0x5a77,	// (0x00034a55) listscroll_clock2_pane

0x5b56,	// (0x00034b34) main_clock2_pane_t3_ParamLimits

0x5b56,	// (0x00034b34) main_clock2_pane_t3

0x5b79,	// (0x00034b57) main_clock2_pane_t4_ParamLimits

0x5b79,	// (0x00034b57) main_clock2_pane_t4

0xdaef,	// (0x0003cacd) cell_clock2_toolbar_pane

0xdaf7,	// (0x0003cad5) cell_clock2_toolbar_pane_cp01

0xdaf7,	// (0x0003cad5) cell_clock2_toolbar_pane_cp02

0xdaff,	// (0x0003cadd) cell_clock2_toolbar_pane_cp03

0xdb07,	// (0x0003cae5) list_clock2_pane

0xaf4c,	// (0x00039f2a) scroll_pane_cp10

0xdb0f,	// (0x0003caed) list_single_clock2_pane_ParamLimits

0xdb0f,	// (0x0003caed) list_single_clock2_pane

0xa738,	// (0x00039716) list_highlight_pane_cp08

0xdb1c,	// (0x0003cafa) list_single_clock2_pane_t1

0xdb2a,	// (0x0003cb08) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003eb30) list_single_clock2_pane_t

0x9e15,	// (0x00038df3) bg_button_pane_cp10

0xdb38,	// (0x0003cb16) cell_clock2_toolbar_pane_g1

0x0048,	// (0x0002f026) aid_main_viewer_pane_g1_ParamLimits

0x0048,	// (0x0002f026) aid_main_viewer_pane_g1

0x0056,	// (0x0002f034) aid_main_viewer_pane_g2_ParamLimits

0x0056,	// (0x0002f034) aid_main_viewer_pane_g2

0x3f12,	// (0x00032ef0) aid_main_viewer_pane_g3_ParamLimits

0x3f12,	// (0x00032ef0) aid_main_viewer_pane_g3

0x3f21,	// (0x00032eff) aid_main_viewer_pane_g4_ParamLimits

0x3f21,	// (0x00032eff) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0003e473) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0003e473) aid_main_viewer_pane_g

0x008a,	// (0x0002f068) main_calc_pane_ParamLimits

0x00ae,	// (0x0002f08c) main_dialer2_pane_ParamLimits

0x1599,	// (0x00030577) main_cam6_pane

0x1599,	// (0x00030577) main_vid6_pane

0x5a83,	// (0x00034a61) listscroll_gen_pane_cp06_ParamLimits

0x5a83,	// (0x00034a61) listscroll_gen_pane_cp06

0x5b9c,	// (0x00034b7a) main_clock2_pane_t5_ParamLimits

0x5b9c,	// (0x00034b7a) main_clock2_pane_t5

0x5bfa,	// (0x00034bd8) aid_call2_pane_cp10_ParamLimits

0x5c0c,	// (0x00034bea) aid_call_pane_cp10_ParamLimits

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g1_ParamLimits

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c1e,	// (0x00034bfc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c1e,	// (0x00034bfc) popup_clock_analogue_window_cp10_g4_ParamLimits

0xafbb,	// (0x00039f99) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0003e7ae) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c34,	// (0x00034c12) popup_clock_analogue_window_cp10_t1_ParamLimits

0x633b,	// (0x00035319) cell_dialer2_keypad_pane_g2_ParamLimits

0x633b,	// (0x00035319) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003e898) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003e898) cell_dialer2_keypad_pane_g

0x6357,	// (0x00035335) cell_dialer2_keypad_pane_t1

0x6976,	// (0x00035954) main_cset_text2_pane_ParamLimits

0x6976,	// (0x00035954) main_cset_text2_pane

0xd8bb,	// (0x0003c899) area_vitu2_query_pane_g1_ParamLimits

0x723c,	// (0x0003621a) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003ea4d) area_vitu2_query_pane_g_ParamLimits

0xd93f,	// (0x0003c91d) area_vitu2_query_pane_t7_ParamLimits

0xd93f,	// (0x0003c91d) area_vitu2_query_pane_t7

0x729d,	// (0x0003627b) bg_button_pane_cp018_ParamLimits

0x72ab,	// (0x00036289) bg_button_pane_cp021_ParamLimits

0x72b7,	// (0x00036295) bg_button_pane_cp022_ParamLimits

0x72b7,	// (0x00036295) bg_vkb2_func_pane_cp08_ParamLimits

0x729d,	// (0x0003627b) bg_vkb2_func_pane_cp06_ParamLimits

0x72ab,	// (0x00036289) bg_vkb2_func_pane_cp07_ParamLimits

0x72c8,	// (0x000362a6) input_focus_pane_cp09_ParamLimits

0x7837,	// (0x00036815) cam6_autofocus_pane_ParamLimits

0x7837,	// (0x00036815) cam6_autofocus_pane

0x13dd,	// (0x000303bb) cam6_image_uncrop_pane_ParamLimits

0x13dd,	// (0x000303bb) cam6_image_uncrop_pane

0x13ec,	// (0x000303ca) cam6_indi_pane_ParamLimits

0x13ec,	// (0x000303ca) cam6_indi_pane

0x1402,	// (0x000303e0) cam6_mode_pane_ParamLimits

0x1402,	// (0x000303e0) cam6_mode_pane

0x1414,	// (0x000303f2) cam6_timer_pane_ParamLimits

0x1414,	// (0x000303f2) cam6_timer_pane

0x1420,	// (0x000303fe) cam6_zoom_pane_ParamLimits

0x1420,	// (0x000303fe) cam6_zoom_pane

0x7845,	// (0x00036823) cam6_mode_pane_g1_ParamLimits

0x7845,	// (0x00036823) cam6_mode_pane_g1

0x7855,	// (0x00036833) cam6_mode_pane_g2_ParamLimits

0x7855,	// (0x00036833) cam6_mode_pane_g2

0x7865,	// (0x00036843) cam6_mode_pane_g3_ParamLimits

0x7865,	// (0x00036843) cam6_mode_pane_g3

0x7875,	// (0x00036853) cam6_mode_pane_g4_ParamLimits

0x7875,	// (0x00036853) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003eb35) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003eb35) cam6_mode_pane_g

0xd6c7,	// (0x0003c6a5) bg_tb_trans_pane_cp08_ParamLimits

0xd6c7,	// (0x0003c6a5) bg_tb_trans_pane_cp08

0xdb40,	// (0x0003cb1e) cam6_battery_pane_ParamLimits

0xdb40,	// (0x0003cb1e) cam6_battery_pane

0xdb56,	// (0x0003cb34) cam6_indi_pane_g1_ParamLimits

0xdb56,	// (0x0003cb34) cam6_indi_pane_g1

0xdb68,	// (0x0003cb46) cam6_indi_pane_g2_ParamLimits

0xdb68,	// (0x0003cb46) cam6_indi_pane_g2

0xdb7a,	// (0x0003cb58) cam6_indi_pane_g3_ParamLimits

0xdb7a,	// (0x0003cb58) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003eb3e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003eb3e) cam6_indi_pane_g

0xdb8c,	// (0x0003cb6a) cam6_indi_pane_t1_ParamLimits

0xdb8c,	// (0x0003cb6a) cam6_indi_pane_t1

0x6603,	// (0x000355e1) cam6_autofocus_pane_g1

0x65fb,	// (0x000355d9) cam6_autofocus_pane_g2

0x6613,	// (0x000355f1) cam6_autofocus_pane_g3

0x660b,	// (0x000355e9) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003eb45) cam6_autofocus_pane_g

0xdbb2,	// (0x0003cb90) cam6_timer_pane_g1

0xdbba,	// (0x0003cb98) cam6_timer_pane_t1

0xdbc8,	// (0x0003cba6) cam6_zoom_cont_pane

0xdbd0,	// (0x0003cbae) cam6_zoom_pane_g1

0xdbd8,	// (0x0003cbb6) cam6_zoom_pane_g2

0x7885,	// (0x00036863) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003eb4e) cam6_zoom_pane_g

0xca3b,	// (0x0003ba19) cam6_battery_pane_g1

0xca3b,	// (0x0003ba19) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0003e6b6) cam6_battery_pane_g

0xdbe0,	// (0x0003cbbe) cam6_zoom_cont_pane_g1

0xdbe9,	// (0x0003cbc7) cam6_zoom_cont_pane_g2

0xdbf2,	// (0x0003cbd0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003eb55) cam6_zoom_cont_pane_g

0x78a2,	// (0x00036880) cam6_mode_pane_cp_ParamLimits

0x78a2,	// (0x00036880) cam6_mode_pane_cp

0x78b4,	// (0x00036892) cam6_zoom_pane_cp_ParamLimits

0x78b4,	// (0x00036892) cam6_zoom_pane_cp

0x78c2,	// (0x000368a0) vid6_image_uncrop_cif_pane_ParamLimits

0x78c2,	// (0x000368a0) vid6_image_uncrop_cif_pane

0x78d2,	// (0x000368b0) vid6_image_uncrop_nhd_pane_ParamLimits

0x78d2,	// (0x000368b0) vid6_image_uncrop_nhd_pane

0x78e1,	// (0x000368bf) vid6_image_uncrop_vga_pane_ParamLimits

0x78e1,	// (0x000368bf) vid6_image_uncrop_vga_pane

0x78f0,	// (0x000368ce) vid6_image_uncrop_wvga_pane_ParamLimits

0x78f0,	// (0x000368ce) vid6_image_uncrop_wvga_pane

0x78ff,	// (0x000368dd) vid6_indi_pane_ParamLimits

0x78ff,	// (0x000368dd) vid6_indi_pane

0xd6c7,	// (0x0003c6a5) bg_tb_trans_pane_cp09_ParamLimits

0xd6c7,	// (0x0003c6a5) bg_tb_trans_pane_cp09

0xdc0a,	// (0x0003cbe8) cam6_battery_pane_cp_ParamLimits

0xdc0a,	// (0x0003cbe8) cam6_battery_pane_cp

0xdc16,	// (0x0003cbf4) vid6_indi_pane_g1_ParamLimits

0xdc16,	// (0x0003cbf4) vid6_indi_pane_g1

0xdc28,	// (0x0003cc06) vid6_indi_pane_g2_ParamLimits

0xdc28,	// (0x0003cc06) vid6_indi_pane_g2

0xdc3a,	// (0x0003cc18) vid6_indi_pane_g3_ParamLimits

0xdc3a,	// (0x0003cc18) vid6_indi_pane_g3

0xdc51,	// (0x0003cc2f) vid6_indi_pane_g4_ParamLimits

0xdc51,	// (0x0003cc2f) vid6_indi_pane_g4

0xdc68,	// (0x0003cc46) vid6_indi_pane_g5_ParamLimits

0xdc68,	// (0x0003cc46) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003eb5c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003eb5c) vid6_indi_pane_g

0xdc82,	// (0x0003cc60) vid6_indi_pane_t1_ParamLimits

0xdc82,	// (0x0003cc60) vid6_indi_pane_t1

0xdc98,	// (0x0003cc76) vid6_indi_pane_t2_ParamLimits

0xdc98,	// (0x0003cc76) vid6_indi_pane_t2

0xdcc0,	// (0x0003cc9e) vid6_indi_pane_t3_ParamLimits

0xdcc0,	// (0x0003cc9e) vid6_indi_pane_t3

0xdce8,	// (0x0003ccc6) vid6_indi_pane_t4_ParamLimits

0xdce8,	// (0x0003ccc6) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003eb67) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003eb67) vid6_indi_pane_t

0xdd0c,	// (0x0003ccea) wait_bar_pane_cp08

0x7917,	// (0x000368f5) main_cset_text2_pane_t1_ParamLimits

0x7917,	// (0x000368f5) main_cset_text2_pane_t1

0x788d,	// (0x0003686b) listscroll_gen_pane_cp06_t1_ParamLimits

0x788d,	// (0x0003686b) listscroll_gen_pane_cp06_t1

0x1599,	// (0x00030577) main_cam6_set_pane

0x651c,	// (0x000354fa) bg_tb_trans_pane_cp06_ParamLimits

0x6532,	// (0x00035510) cam4_indicators_pane_g1_ParamLimits

0x6543,	// (0x00035521) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003e8d5) cam4_indicators_pane_g_ParamLimits

0x655b,	// (0x00035539) cam4_indicators_pane_t1_ParamLimits

0x157f,	// (0x0003055d) bg_tb_trans_pane_cp07_ParamLimits

0x6589,	// (0x00035567) vid4_indicators_pane_g1_ParamLimits

0x659f,	// (0x0003557d) vid4_indicators_pane_g2_ParamLimits

0x65b3,	// (0x00035591) vid4_indicators_pane_g3_ParamLimits

0x65c6,	// (0x000355a4) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003e8e7) vid4_indicators_pane_g_ParamLimits

0x65e4,	// (0x000355c2) vid4_indicators_pane_t1_ParamLimits

0x7411,	// (0x000363ef) vid4_progress_pane_g1_ParamLimits

0x7421,	// (0x000363ff) vid4_progress_pane_g2_ParamLimits

0x13a0,	// (0x0003037e) vid4_progress_pane_g3_ParamLimits

0x6543,	// (0x00035521) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003ea98) vid4_progress_pane_g_ParamLimits

0x13b2,	// (0x00030390) vid4_progress_pane_t1_ParamLimits

0x7431,	// (0x0003640f) vid4_progress_pane_t2_ParamLimits

0x7446,	// (0x00036424) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003eaa3) vid4_progress_pane_t_ParamLimits

0x13ca,	// (0x000303a8) wait_bar_pane_cp07_ParamLimits

0x7938,	// (0x00036916) main_cam6_set_pane_g2_ParamLimits

0x7938,	// (0x00036916) main_cam6_set_pane_g2

0x795e,	// (0x0003693c) main_cset6_listscroll_pane_ParamLimits

0x795e,	// (0x0003693c) main_cset6_listscroll_pane

0x797c,	// (0x0003695a) main_cset6_slider_pane_ParamLimits

0x797c,	// (0x0003695a) main_cset6_slider_pane

0x7992,	// (0x00036970) main_cset6_text2_pane_ParamLimits

0x7992,	// (0x00036970) main_cset6_text2_pane

0xdd1b,	// (0x0003ccf9) main_cset6_text_pane

0xdd23,	// (0x0003cd01) main_cset_list_pane_copy1_ParamLimits

0xdd23,	// (0x0003cd01) main_cset_list_pane_copy1

0xdd33,	// (0x0003cd11) scroll_pane_cp028_copy1

0x79a0,	// (0x0003697e) cset_list_set_pane_copy1

0x79b4,	// (0x00036992) aid_position_infowindow_above_copy1

0x79bc,	// (0x0003699a) aid_position_infowindow_below_copy1

0x79c4,	// (0x000369a2) cset_list_set_pane_g1_copy1

0x79cc,	// (0x000369aa) cset_list_set_pane_g3_copy1_ParamLimits

0x79cc,	// (0x000369aa) cset_list_set_pane_g3_copy1

0x79db,	// (0x000369b9) cset_list_set_pane_t1_copy1_ParamLimits

0x79db,	// (0x000369b9) cset_list_set_pane_t1_copy1

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp021_copy1_ParamLimits

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp021_copy1

0xdd3c,	// (0x0003cd1a) cset6_slider_pane_ParamLimits

0xdd3c,	// (0x0003cd1a) cset6_slider_pane

0xdd68,	// (0x0003cd46) main_cset6_slider_pane_g1_ParamLimits

0xdd68,	// (0x0003cd46) main_cset6_slider_pane_g1

0x79f0,	// (0x000369ce) main_cset6_slider_pane_g2_ParamLimits

0x79f0,	// (0x000369ce) main_cset6_slider_pane_g2

0xdd90,	// (0x0003cd6e) main_cset6_slider_pane_g3_ParamLimits

0xdd90,	// (0x0003cd6e) main_cset6_slider_pane_g3

0x7a18,	// (0x000369f6) main_cset6_slider_pane_g4_ParamLimits

0x7a18,	// (0x000369f6) main_cset6_slider_pane_g4

0x7a24,	// (0x00036a02) main_cset6_slider_pane_g5_ParamLimits

0x7a24,	// (0x00036a02) main_cset6_slider_pane_g5

0xd52a,	// (0x0003c508) main_cset6_slider_pane_g7_ParamLimits

0xd52a,	// (0x0003c508) main_cset6_slider_pane_g7

0xd536,	// (0x0003c514) main_cset6_slider_pane_g8_ParamLimits

0xd536,	// (0x0003c514) main_cset6_slider_pane_g8

0x6a25,	// (0x00035a03) main_cset6_slider_pane_g9_ParamLimits

0x6a25,	// (0x00035a03) main_cset6_slider_pane_g9

0x6a31,	// (0x00035a0f) main_cset6_slider_pane_g10_ParamLimits

0x6a31,	// (0x00035a0f) main_cset6_slider_pane_g10

0x6a3d,	// (0x00035a1b) main_cset6_slider_pane_g11_ParamLimits

0x6a3d,	// (0x00035a1b) main_cset6_slider_pane_g11

0x6a49,	// (0x00035a27) main_cset6_slider_pane_g12_ParamLimits

0x6a49,	// (0x00035a27) main_cset6_slider_pane_g12

0x6a55,	// (0x00035a33) main_cset6_slider_pane_g13_ParamLimits

0x6a55,	// (0x00035a33) main_cset6_slider_pane_g13

0x6a61,	// (0x00035a3f) main_cset6_slider_pane_g14_ParamLimits

0x6a61,	// (0x00035a3f) main_cset6_slider_pane_g14

0x7a32,	// (0x00036a10) main_cset6_slider_pane_g15_ParamLimits

0x7a32,	// (0x00036a10) main_cset6_slider_pane_g15

0x6a85,	// (0x00035a63) main_cset6_slider_pane_g16_ParamLimits

0x6a85,	// (0x00035a63) main_cset6_slider_pane_g16

0x6a93,	// (0x00035a71) main_cset6_slider_pane_g17_ParamLimits

0x6a93,	// (0x00035a71) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003eb70) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003eb70) main_cset6_slider_pane_g

0xdd9c,	// (0x0003cd7a) main_cset6_slider_pane_t1_ParamLimits

0xdd9c,	// (0x0003cd7a) main_cset6_slider_pane_t1

0x7a62,	// (0x00036a40) main_cset6_slider_pane_t2_ParamLimits

0x7a62,	// (0x00036a40) main_cset6_slider_pane_t2

0x7a8d,	// (0x00036a6b) main_cset6_slider_pane_t3_ParamLimits

0x7a8d,	// (0x00036a6b) main_cset6_slider_pane_t3

0x7ab8,	// (0x00036a96) main_cset6_slider_pane_t4_ParamLimits

0x7ab8,	// (0x00036a96) main_cset6_slider_pane_t4

0x7ae5,	// (0x00036ac3) main_cset6_slider_pane_t5_ParamLimits

0x7ae5,	// (0x00036ac3) main_cset6_slider_pane_t5

0xdddd,	// (0x0003cdbb) main_cset6_slider_pane_t7_ParamLimits

0xdddd,	// (0x0003cdbb) main_cset6_slider_pane_t7

0x7b12,	// (0x00036af0) main_cset6_slider_pane_t8_ParamLimits

0x7b12,	// (0x00036af0) main_cset6_slider_pane_t8

0x7b36,	// (0x00036b14) main_cset6_slider_pane_t9_ParamLimits

0x7b36,	// (0x00036b14) main_cset6_slider_pane_t9

0x7b5a,	// (0x00036b38) main_cset6_slider_pane_t10_ParamLimits

0x7b5a,	// (0x00036b38) main_cset6_slider_pane_t10

0x7b7e,	// (0x00036b5c) main_cset6_slider_pane_t11_ParamLimits

0x7b7e,	// (0x00036b5c) main_cset6_slider_pane_t11

0xde13,	// (0x0003cdf1) main_cset6_slider_pane_t14_ParamLimits

0xde13,	// (0x0003cdf1) main_cset6_slider_pane_t14

0xde4c,	// (0x0003ce2a) main_cset6_slider_pane_t15_ParamLimits

0xde4c,	// (0x0003ce2a) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003eb95) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003eb95) main_cset6_slider_pane_t

0xde85,	// (0x0003ce63) cset_slider_pane_g1_copy1

0xde8e,	// (0x0003ce6c) cset_slider_pane_g2_copy1

0xde97,	// (0x0003ce75) cset_slider_pane_g3_copy1

0x9e15,	// (0x00038df3) bg_popup_sub_pane_cp011_copy1

0xdea0,	// (0x0003ce7e) main_cset_text_pane_g1_copy1

0xd670,	// (0x0003c64e) main_cset_text_pane_t1_copy1

0xd67e,	// (0x0003c65c) main_cset_text_pane_t2_copy1

0xd68c,	// (0x0003c66a) main_cset_text_pane_t3_copy1

0xd701,	// (0x0003c6df) main_cset_text_pane_t4_copy1

0xd70f,	// (0x0003c6ed) main_cset_text_pane_t5_copy1

0xdea8,	// (0x0003ce86) main_cset_text_pane_t6_copy1

0xdeb6,	// (0x0003ce94) main_cset_text_pane_t7_copy1

0x7917,	// (0x000368f5) main_cset_text2_pane_t1_copy1

0x157f,	// (0x0003055d) main_ncimui_pane

0x033c,	// (0x0002f31a) popup_query_ncimui_window_ParamLimits

0x033c,	// (0x0002f31a) popup_query_ncimui_window

0xccc7,	// (0x0003bca5) field_cale_ev2_pane_g4_ParamLimits

0xccc7,	// (0x0003bca5) field_cale_ev2_pane_g4

0x609a,	// (0x00035078) cell_video_dialer_keypad_pane_g2_ParamLimits

0x609a,	// (0x00035078) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0003e86f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0003e86f) cell_video_dialer_keypad_pane_g

0x60b2,	// (0x00035090) cell_video_dialer_keypad_pane_t1

0x9e15,	// (0x00038df3) bg_popup_window_pane_cp012

0xae38,	// (0x00039e16) heading_pane_cp06

0xdee2,	// (0x0003cec0) ncim_query_content_pane

0x9e15,	// (0x00038df3) bg_popup_heading_pane_cp01

0xdeea,	// (0x0003cec8) ncim_heading_pane_t1

0xdef8,	// (0x0003ced6) ncim_indicator_popup_pane

0xdf0a,	// (0x0003cee8) ncim_query_button_pane

0xdf20,	// (0x0003cefe) ncim_query_content_pane_t1

0xdf32,	// (0x0003cf10) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003ebd9) ncim_query_content_pane_t

0xdf6c,	// (0x0003cf4a) ncim_query_list_pane

0xdf7e,	// (0x0003cf5c) ncim_query_popup_pane

0xdef8,	// (0x0003ced6) ncim_indicator_popup_pane_ParamLimits

0x7da3,	// (0x00036d81) ncim_query_content_pane_g1_ParamLimits

0x7da3,	// (0x00036d81) ncim_query_content_pane_g1

0xdf20,	// (0x0003cefe) ncim_query_content_pane_t1_ParamLimits

0xdf32,	// (0x0003cf10) ncim_query_content_pane_t2_ParamLimits

0x7daf,	// (0x00036d8d) ncim_query_content_pane_t3_ParamLimits

0x7daf,	// (0x00036d8d) ncim_query_content_pane_t3

0x7dd7,	// (0x00036db5) ncim_query_content_pane_t4_ParamLimits

0x7dd7,	// (0x00036db5) ncim_query_content_pane_t4

0x7dff,	// (0x00036ddd) ncim_query_content_pane_t5_ParamLimits

0x7dff,	// (0x00036ddd) ncim_query_content_pane_t5

0xdf44,	// (0x0003cf22) ncim_query_content_pane_t6_ParamLimits

0xdf44,	// (0x0003cf22) ncim_query_content_pane_t6

0xfbfb,	// (0x0003ebd9) ncim_query_content_pane_t_ParamLimits

0xdf6c,	// (0x0003cf4a) ncim_query_list_pane_ParamLimits

0xdf7e,	// (0x0003cf5c) ncim_query_popup_pane_ParamLimits

0xdf92,	// (0x0003cf70) wait_bar_pane_cp04

0x9e15,	// (0x00038df3) input_focus_pane_cp011

0xdf9a,	// (0x0003cf78) ncim_query_popup_pane_t1

0xdfa8,	// (0x0003cf86) ncim_list_query_list_pane_ParamLimits

0xdfa8,	// (0x0003cf86) ncim_list_query_list_pane

0x9e15,	// (0x00038df3) bg_button_pane_cp027

0xdfbb,	// (0x0003cf99) ncim_query_button_pane_g1

0x9e15,	// (0x00038df3) list_highlight_pane_cp012

0xdfc5,	// (0x0003cfa3) ncim_list_query_list_pane_g1

0xdfcd,	// (0x0003cfab) ncim_list_query_list_pane_t1

0x654f,	// (0x0003552d) cam4_indicators_pane_g3_ParamLimits

0x654f,	// (0x0003552d) cam4_indicators_pane_g3

0x65d2,	// (0x000355b0) vid4_indicators_pane_g5_ParamLimits

0x65d2,	// (0x000355b0) vid4_indicators_pane_g5

0x654f,	// (0x0003552d) vid4_progress_pane_g5_ParamLimits

0x654f,	// (0x0003552d) vid4_progress_pane_g5

0x7c8e,	// (0x00036c6c) main_ncimui_pane_g1

0x7cf7,	// (0x00036cd5) ncimui_group_query_pane_ParamLimits

0x7cf7,	// (0x00036cd5) ncimui_group_query_pane

0x7d3f,	// (0x00036d1d) ncimui_list_pane_ParamLimits

0x7d3f,	// (0x00036d1d) ncimui_list_pane

0x7d66,	// (0x00036d44) ncimui_text_pane_ParamLimits

0x7d66,	// (0x00036d44) ncimui_text_pane

0x7e27,	// (0x00036e05) ncimui_text_pane_t1_ParamLimits

0x7e27,	// (0x00036e05) ncimui_text_pane_t1

0xdfdb,	// (0x0003cfb9) ncimui_list_single_graphic_pane_ParamLimits

0xdfdb,	// (0x0003cfb9) ncimui_list_single_graphic_pane

0x7e45,	// (0x00036e23) ncimui_query_pane_ParamLimits

0x7e45,	// (0x00036e23) ncimui_query_pane

0x9e15,	// (0x00038df3) list_highlight_pane_cp013

0xdfeb,	// (0x0003cfc9) ncim_list_query_list_pane_t1_copy1

0xdfc5,	// (0x0003cfa3) ncim_list_single_graphic_pane_g1

0x7e58,	// (0x00036e36) ncim_query_button_pane_cp01

0x7e64,	// (0x00036e42) ncim_query_entry_pane_ParamLimits

0x7e64,	// (0x00036e42) ncim_query_entry_pane

0x7e77,	// (0x00036e55) ncimui_query_pane_g1

0x7e83,	// (0x00036e61) ncimui_query_pane_t1_ParamLimits

0x7e83,	// (0x00036e61) ncimui_query_pane_t1

0xb0f1,	// (0x0003a0cf) input_focus_pane_cp012

0xdff9,	// (0x0003cfd7) ncim_query_entry_pane_t1

0xa587,	// (0x00039565) main_im_pane_ParamLimits

0x157f,	// (0x0003055d) main_mobtv_pane_ParamLimits

0x157f,	// (0x0003055d) main_mobtv_pane

0x7a4a,	// (0x00036a28) main_cset6_slider_pane_g18_ParamLimits

0x7a4a,	// (0x00036a28) main_cset6_slider_pane_g18

0x7a56,	// (0x00036a34) main_cset6_slider_pane_g19_ParamLimits

0x7a56,	// (0x00036a34) main_cset6_slider_pane_g19

0x7e9c,	// (0x00036e7a) bg_main_mobtv_pane_ParamLimits

0x7e9c,	// (0x00036e7a) bg_main_mobtv_pane

0x7eaa,	// (0x00036e88) main_mobtv_info_pane

0x7eb5,	// (0x00036e93) main_mobtv_loading_pane_ParamLimits

0x7eb5,	// (0x00036e93) main_mobtv_loading_pane

0xe00b,	// (0x0003cfe9) main_mobtv_pg_channel_list_pane

0xe015,	// (0x0003cff3) main_mobtv_pg_hdr_pane

0x7ec2,	// (0x00036ea0) main_mobtv_programe_curr_pane_ParamLimits

0x7ec2,	// (0x00036ea0) main_mobtv_programe_curr_pane

0x7ecf,	// (0x00036ead) main_mobtv_programe_next_pane_ParamLimits

0x7ecf,	// (0x00036ead) main_mobtv_programe_next_pane

0xe01e,	// (0x0003cffc) popup_mobtv_noti_window

0xca3b,	// (0x0003ba19) main_tv_pg_hdr_pane_g1

0xe028,	// (0x0003d006) main_tv_pg_hdr_pane_g2

0xe030,	// (0x0003d00e) main_tv_pg_hdr_pane_g3

0xe038,	// (0x0003d016) main_tv_pg_hdr_pane_g4

0xe040,	// (0x0003d01e) main_tv_pg_hdr_pane_g5

0xe04a,	// (0x0003d028) main_tv_pg_hdr_pane_g6

0xe054,	// (0x0003d032) main_tv_pg_hdr_pane_g7

0xe05e,	// (0x0003d03c) main_tv_pg_hdr_pane_g8

0xe068,	// (0x0003d046) main_tv_pg_hdr_pane_g9

0xe072,	// (0x0003d050) main_tv_pg_hdr_pane_g10

0xe07c,	// (0x0003d05a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003ebe6) main_tv_pg_hdr_pane_g

0xe086,	// (0x0003d064) main_tv_pg_hdr_pane_t1

0xe094,	// (0x0003d072) main_tv_pg_hdr_pane_t2

0xe0a2,	// (0x0003d080) main_tv_pg_hdr_pane_t3

0xe0b2,	// (0x0003d090) main_tv_pg_hdr_pane_t4

0xe0c2,	// (0x0003d0a0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003ebfd) main_tv_pg_hdr_pane_t

0xe0d2,	// (0x0003d0b0) single_mobtv_pg_channel_pane_ParamLimits

0xe0d2,	// (0x0003d0b0) single_mobtv_pg_channel_pane

0xe0e4,	// (0x0003d0c2) single_mobtv_pg_channel_table_pane

0xe0ed,	// (0x0003d0cb) single_mobtv_pg_channel_thumb_pane

0xe0f6,	// (0x0003d0d4) single_tv_pg_channel_pane_g1

0xe0ff,	// (0x0003d0dd) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003ec08) single_tv_pg_channel_pane_g

0xcc62,	// (0x0003bc40) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcc62,	// (0x0003bc40) bg_single_mobtv_pg_channel_thumb_pane

0xe108,	// (0x0003d0e6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe108,	// (0x0003d0e6) single_mobtv_pg_channel_thumb_pane_g1

0xe116,	// (0x0003d0f4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe116,	// (0x0003d0f4) single_mobtv_pg_channel_thumb_pane_g2

0xe122,	// (0x0003d100) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe122,	// (0x0003d100) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003ec0d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003ec0d) single_mobtv_pg_channel_thumb_pane_g

0xe12e,	// (0x0003d10c) single_mobtv_pg_channel_thumb_pane_t1

0xe13c,	// (0x0003d11a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003ec14) single_mobtv_pg_channel_thumb_pane_t

0xca3b,	// (0x0003ba19) bg_single_mobtv_pg_channel_table_pane_g1

0xca3b,	// (0x0003ba19) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0003e6b6) bg_single_mobtv_pg_channel_table_pane_g

0xe14a,	// (0x0003d128) single_mobtv_pg_channel_table_pane_t1

0xe158,	// (0x0003d136) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003ec19) single_mobtv_pg_channel_table_pane_t

0x7ee4,	// (0x00036ec2) main_mobtv_info_pane_g1_ParamLimits

0x7ee4,	// (0x00036ec2) main_mobtv_info_pane_g1

0x7f02,	// (0x00036ee0) main_mobtv_info_pane_t1_ParamLimits

0x7f02,	// (0x00036ee0) main_mobtv_info_pane_t1

0x7f7a,	// (0x00036f58) main_mobtv_info_pane_t2_ParamLimits

0x7f7a,	// (0x00036f58) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003ec23) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003ec23) main_mobtv_info_pane_t

0x800b,	// (0x00036fe9) wait_bar_pane_cp05

0x801d,	// (0x00036ffb) main_mobtv_loading_pane_g1_ParamLimits

0x801d,	// (0x00036ffb) main_mobtv_loading_pane_g1

0x802e,	// (0x0003700c) main_mobtv_loading_pane_g2_ParamLimits

0x802e,	// (0x0003700c) main_mobtv_loading_pane_g2

0x803a,	// (0x00037018) main_mobtv_loading_pane_g3_ParamLimits

0x803a,	// (0x00037018) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003ec2a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003ec2a) main_mobtv_loading_pane_g

0xe166,	// (0x0003d144) main_mobtv_loading_pane_t1_ParamLimits

0xe166,	// (0x0003d144) main_mobtv_loading_pane_t1

0xe17e,	// (0x0003d15c) main_mobtv_loading_pane_t2_ParamLimits

0xe17e,	// (0x0003d15c) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003ec31) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003ec31) main_mobtv_loading_pane_t

0x804d,	// (0x0003702b) wait_bar_pane_cp06_ParamLimits

0x804d,	// (0x0003702b) wait_bar_pane_cp06

0xe1a2,	// (0x0003d180) main_mobtv_programe_curr_pane_t1

0xe1b0,	// (0x0003d18e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003ec36) main_mobtv_programe_curr_pane_t

0xe1be,	// (0x0003d19c) main_mobtv_programe_next_pane_t1

0xe1cc,	// (0x0003d1aa) main_mobtv_programe_next_pane_t2

0xe1da,	// (0x0003d1b8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003ec3b) main_mobtv_programe_next_pane_t

0x9e15,	// (0x00038df3) bg_popup_mobtv_noti_window_pane

0xe1e8,	// (0x0003d1c6) popup_mobtv_noti_window_g1

0xe1f0,	// (0x0003d1ce) popup_mobtv_noti_window_t1

0xe1fe,	// (0x0003d1dc) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003ec42) popup_mobtv_noti_window_t

0xca3b,	// (0x0003ba19) bg_popup_mobtv_noti_window_pane_g1

0x1599,	// (0x00030577) sc_clock_pane

0x1599,	// (0x00030577) main_fs_bigclock_pane

0x76ae,	// (0x0003668c) blid2_tripm_pane_t4_ParamLimits

0x76ae,	// (0x0003668c) blid2_tripm_pane_t4

0x805c,	// (0x0003703a) sc_clock_pane_g1_ParamLimits

0x805c,	// (0x0003703a) sc_clock_pane_g1

0x806e,	// (0x0003704c) sc_clock_pane_t1_ParamLimits

0x806e,	// (0x0003704c) sc_clock_pane_t1

0x8092,	// (0x00037070) sc_clock_pane_t2_ParamLimits

0x8092,	// (0x00037070) sc_clock_pane_t2

0x80aa,	// (0x00037088) sc_clock_pane_t3_ParamLimits

0x80aa,	// (0x00037088) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003ec47) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003ec47) sc_clock_pane_t

0x926f,	// (0x0003824d) main_fs_bigclock_indicator_pane_ParamLimits

0x926f,	// (0x0003824d) main_fs_bigclock_indicator_pane

0x8170,	// (0x0003714e) main_fs_bigclock_pane_g1_ParamLimits

0x8170,	// (0x0003714e) main_fs_bigclock_pane_g1

0x927b,	// (0x00038259) main_fs_bigclock_pane_t1_ParamLimits

0x927b,	// (0x00038259) main_fs_bigclock_pane_t1

0x928d,	// (0x0003826b) main_fs_bigclock_pane_t2_ParamLimits

0x928d,	// (0x0003826b) main_fs_bigclock_pane_t2

0x92a1,	// (0x0003827f) main_fs_bigclock_pane_t3_ParamLimits

0x92a1,	// (0x0003827f) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003ee4c) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003ee4c) main_fs_bigclock_pane_t

0xecc3,	// (0x0003dca1) main_fs_bigclock_indicator_pane_g1

0xdf12,	// (0x0003cef0) ncim_query_content_pane_g2_ParamLimits

0xdf12,	// (0x0003cef0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003ebd4) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003ebd4) ncim_query_content_pane_g

0x80c1,	// (0x0003709f) sc_clock_pane_t4_ParamLimits

0x80c1,	// (0x0003709f) sc_clock_pane_t4

0x157f,	// (0x0003055d) main_radioblah_pane

0x64a0,	// (0x0003547e) cell_call4_button_pane_t1_copy1_ParamLimits

0x64a0,	// (0x0003547e) cell_call4_button_pane_t1_copy1

0x7ca6,	// (0x00036c84) main_ncimui_pane_t1_ParamLimits

0x7ca6,	// (0x00036c84) main_ncimui_pane_t1

0x7cc0,	// (0x00036c9e) main_ncimui_pane_t2_ParamLimits

0x7cc0,	// (0x00036c9e) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003ebcd) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003ebcd) main_ncimui_pane_t

0xe20c,	// (0x0003d1ea) main_radioblah_anim_pane_ParamLimits

0xe20c,	// (0x0003d1ea) main_radioblah_anim_pane

0xe21d,	// (0x0003d1fb) main_radioblah_info_pane_ParamLimits

0xe21d,	// (0x0003d1fb) main_radioblah_info_pane

0xe231,	// (0x0003d20f) main_radioblah_pane_t1_ParamLimits

0xe231,	// (0x0003d20f) main_radioblah_pane_t1

0xe24d,	// (0x0003d22b) main_radioblah_pane_t2_ParamLimits

0xe24d,	// (0x0003d22b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003ec68) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003ec68) main_radioblah_pane_t

0x8319,	// (0x000372f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8319,	// (0x000372f7) main_radioblah_rocker_ctrl_pane

0xe295,	// (0x0003d273) main_radioblah_info_pane_t1_ParamLimits

0xe295,	// (0x0003d273) main_radioblah_info_pane_t1

0x8371,	// (0x0003734f) main_radioblah_info_pane_t2_ParamLimits

0x8371,	// (0x0003734f) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003ec71) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003ec71) main_radioblah_info_pane_t

0xca3b,	// (0x0003ba19) main_radioblah_rocker_ctrl_pane_g1

0x8421,	// (0x000373ff) main_radioblah_rocker_ctrl_pane_g2

0x8429,	// (0x00037407) main_radioblah_rocker_ctrl_pane_g3

0x8431,	// (0x0003740f) main_radioblah_rocker_ctrl_pane_g4

0x8439,	// (0x00037417) main_radioblah_rocker_ctrl_pane_g5

0x8441,	// (0x0003741f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003ec7a) main_radioblah_rocker_ctrl_pane_g

0x7917,	// (0x000368f5) main_cset_text2_pane_t1_copy1_ParamLimits

0x64fe,	// (0x000354dc) cam4_image_uncrop_qvga_pane

0x6575,	// (0x00035553) vid4_image_uncrop_qcif_pane

0x7837,	// (0x00036815) cam6_image_uncrop_qvga_pane_ParamLimits

0x7837,	// (0x00036815) cam6_image_uncrop_qvga_pane

0xdbfa,	// (0x0003cbd8) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbfa,	// (0x0003cbd8) vid6_image_uncrop_qcif_pane

0x9e15,	// (0x00038df3) bg_popup_preview_window_pane_cp03

0xdec4,	// (0x0003cea2) list_cset_text2_pane

0xdecc,	// (0x0003ceaa) main_cset6_text2_pane_g1

0xded4,	// (0x0003ceb2) main_cset6_text2_pane_t1

0xe9e4,	// (0x0003d9c2) list_cset_text2_pane_t1_ParamLimits

0xe9e4,	// (0x0003d9c2) list_cset_text2_pane_t1

0x157f,	// (0x0003055d) main_radioblah_pane_ParamLimits

0x7ff7,	// (0x00036fd5) main_mobtv_info_pane_t3_ParamLimits

0x7ff7,	// (0x00036fd5) main_mobtv_info_pane_t3

0x8307,	// (0x000372e5) main_radioblah_pane_g1

0x8341,	// (0x0003731f) main_radioblah_info_pane_g1

0x83c6,	// (0x000373a4) main_radioblah_info_pane_t3_ParamLimits

0x83c6,	// (0x000373a4) main_radioblah_info_pane_t3

0x3392,	// (0x00032370) highlight_cell_cale_month_pane_ParamLimits

0x3392,	// (0x00032370) highlight_cell_cale_month_pane

0x1599,	// (0x00030577) main_phob_fisheye_pane

0xcd4a,	// (0x0003bd28) scroll_pane_cp0031_ParamLimits

0xcd4a,	// (0x0003bd28) scroll_pane_cp0031

0xdd0c,	// (0x0003ccea) wait_bar_pane_cp08_ParamLimits

0x79a0,	// (0x0003697e) cset_list_set_pane_copy1_ParamLimits

0xe2cf,	// (0x0003d2ad) highlight_cell_cale_month_pane_g1

0x8449,	// (0x00037427) highlight_cell_cale_month_pane_t1

0xd9ab,	// (0x0003c989) list_gen_pane_cp01

0xd515,	// (0x0003c4f3) scroll_pane_01

0x8457,	// (0x00037435) list_single_double_fisheye_pane

0x8460,	// (0x0003743e) list_double_fisheye_pane_g1_ParamLimits

0x8460,	// (0x0003743e) list_double_fisheye_pane_g1

0x846c,	// (0x0003744a) list_double_fisheye_pane_g2_ParamLimits

0x846c,	// (0x0003744a) list_double_fisheye_pane_g2

0x8480,	// (0x0003745e) list_double_fisheye_pane_g3_ParamLimits

0x8480,	// (0x0003745e) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003ec87) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003ec87) list_double_fisheye_pane_g

0x84a9,	// (0x00037487) list_double_fisheye_pane_t1_ParamLimits

0x84a9,	// (0x00037487) list_double_fisheye_pane_t1

0x84c4,	// (0x000374a2) list_double_fisheye_pane_t2_ParamLimits

0x84c4,	// (0x000374a2) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003ec92) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003ec92) list_double_fisheye_pane_t

0x1599,	// (0x00030577) main_call5_pane

0x80ec,	// (0x000370ca) sc_swipe_pane_ParamLimits

0x80ec,	// (0x000370ca) sc_swipe_pane

0x84f9,	// (0x000374d7) call5_image_pane_ParamLimits

0x84f9,	// (0x000374d7) call5_image_pane

0x8516,	// (0x000374f4) call5_swipe_1_pane_ParamLimits

0x8516,	// (0x000374f4) call5_swipe_1_pane

0x8529,	// (0x00037507) call5_swipe_2_pane_ParamLimits

0x8529,	// (0x00037507) call5_swipe_2_pane

0x8554,	// (0x00037532) popup_call5_audio_first_window_ParamLimits

0x8554,	// (0x00037532) popup_call5_audio_first_window

0xcc62,	// (0x0003bc40) call5_swipe_1_pane_g1_ParamLimits

0xcc62,	// (0x0003bc40) call5_swipe_1_pane_g1

0xe2d7,	// (0x0003d2b5) call5_swipe_1_pane_g2_ParamLimits

0xe2d7,	// (0x0003d2b5) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003ec97) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003ec97) call5_swipe_1_pane_g

0xe2e3,	// (0x0003d2c1) call5_swipe_1_pane_t1_ParamLimits

0xe2e3,	// (0x0003d2c1) call5_swipe_1_pane_t1

0xcc62,	// (0x0003bc40) call5_swipe_2_pane_g1_ParamLimits

0xcc62,	// (0x0003bc40) call5_swipe_2_pane_g1

0xe2f8,	// (0x0003d2d6) call5_swipe_2_pane_g2_ParamLimits

0xe2f8,	// (0x0003d2d6) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003ec9c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003ec9c) call5_swipe_2_pane_g

0xe304,	// (0x0003d2e2) call5_swipe_2_pane_t1_ParamLimits

0xe304,	// (0x0003d2e2) call5_swipe_2_pane_t1

0xe319,	// (0x0003d2f7) sc_swipe_pane_g1_ParamLimits

0xe319,	// (0x0003d2f7) sc_swipe_pane_g1

0xe326,	// (0x0003d304) sc_swipe_pane_g2_ParamLimits

0xe326,	// (0x0003d304) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003eca1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003eca1) sc_swipe_pane_g

0xe332,	// (0x0003d310) sc_swipe_pane_t1_ParamLimits

0xe332,	// (0x0003d310) sc_swipe_pane_t1

0x1599,	// (0x00030577) main_cmail_launcher_pane

0x8569,	// (0x00037547) aid_size_cell_cmail_l_ParamLimits

0x8569,	// (0x00037547) aid_size_cell_cmail_l

0x8577,	// (0x00037555) grid_cmail_l_pane_ParamLimits

0x8577,	// (0x00037555) grid_cmail_l_pane

0x8590,	// (0x0003756e) cell_cmail_l_pane_ParamLimits

0x8590,	// (0x0003756e) cell_cmail_l_pane

0xe347,	// (0x0003d325) cell_cmail_l_pane_g1_ParamLimits

0xe347,	// (0x0003d325) cell_cmail_l_pane_g1

0xe353,	// (0x0003d331) cell_cmail_l_pane_t1_ParamLimits

0xe353,	// (0x0003d331) cell_cmail_l_pane_t1

0xe369,	// (0x0003d347) cell_cmail_l_pane_t2_ParamLimits

0xe369,	// (0x0003d347) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003eca6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003eca6) cell_cmail_l_pane_t

0xb0f1,	// (0x0003a0cf) grid_highlight_pane_cp018_ParamLimits

0xb0f1,	// (0x0003a0cf) grid_highlight_pane_cp018

0xfc3b,	// (0x0002ec19) main2_pane_ParamLimits

0xfc3b,	// (0x0002ec19) main2_pane

0xa629,	// (0x00039607) popup_sp_fs_action_menu_bg_pane_g1

0xa631,	// (0x0003960f) popup_sp_fs_action_menu_bg_pane_g2

0xa639,	// (0x00039617) popup_sp_fs_action_menu_bg_pane_g3

0xa641,	// (0x0003961f) popup_sp_fs_action_menu_bg_pane_g4

0xa649,	// (0x00039627) popup_sp_fs_action_menu_bg_pane_g5

0xa651,	// (0x0003962f) popup_sp_fs_action_menu_bg_pane_g6

0xa659,	// (0x00039637) popup_sp_fs_action_menu_bg_pane_g7

0xa661,	// (0x0003963f) popup_sp_fs_action_menu_bg_pane_g8

0xa669,	// (0x00039647) popup_sp_fs_action_menu_bg_pane_g9

0xa671,	// (0x0003964f) popup_sp_fs_action_menu_bg_pane_g10

0xa671,	// (0x0003964f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0003e164) popup_sp_fs_action_menu_bg_pane_g

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g3_g1

0x2207,	// (0x000311e5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_t3_g3_g2

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0003e212) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0003e212) list_medium_line_x2_t3_g3_g

0x221f,	// (0x000311fd) list_medium_line_x2_t3_g3_t1_ParamLimits

0x221f,	// (0x000311fd) list_medium_line_x2_t3_g3_t1

0x2234,	// (0x00031212) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2234,	// (0x00031212) list_medium_line_x2_t3_g3_t2

0x2248,	// (0x00031226) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0003e219) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0003e219) list_medium_line_x2_t3_g3_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g2_g1

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0003e220) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0003e220) list_medium_line_x2_t3_g2_g

0x225d,	// (0x0003123b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x225d,	// (0x0003123b) list_medium_line_x2_t3_g2_t1

0x2273,	// (0x00031251) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2273,	// (0x00031251) list_medium_line_x2_t3_g2_t2

0x2285,	// (0x00031263) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2285,	// (0x00031263) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0003e225) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0003e225) list_medium_line_x2_t3_g2_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t4_g4_g1

0x22a3,	// (0x00031281) list_medium_line_x2_t4_g4_g2_ParamLimits

0x22a3,	// (0x00031281) list_medium_line_x2_t4_g4_g2

0x2207,	// (0x000311e5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_t4_g4_g3

0x22af,	// (0x0003128d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x22af,	// (0x0003128d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0003e22c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0003e22c) list_medium_line_x2_t4_g4_g

0x22bb,	// (0x00031299) list_medium_line_x2_t4_g4_t1_ParamLimits

0x22bb,	// (0x00031299) list_medium_line_x2_t4_g4_t1

0x22d5,	// (0x000312b3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x22d5,	// (0x000312b3) list_medium_line_x2_t4_g4_t2

0x22eb,	// (0x000312c9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x22eb,	// (0x000312c9) list_medium_line_x2_t4_g4_t3

0x2300,	// (0x000312de) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2300,	// (0x000312de) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0003e235) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0003e235) list_medium_line_x2_t4_g4_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g4_g1

0x22a3,	// (0x00031281) list_medium_line_x2_t2_g4_g2_ParamLimits

0x22a3,	// (0x00031281) list_medium_line_x2_t2_g4_g2

0x2207,	// (0x000311e5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_t2_g4_g3

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0003e29c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0003e29c) list_medium_line_x2_t2_g4_g

0x33b8,	// (0x00032396) list_medium_line_x2_t2_g4_t1_ParamLimits

0x33b8,	// (0x00032396) list_medium_line_x2_t2_g4_t1

0x2248,	// (0x00031226) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0003e2a5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0003e2a5) list_medium_line_x2_t2_g4_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g3_g1

0x2207,	// (0x000311e5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_t2_g3_g2

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0003e212) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0003e212) list_medium_line_x2_t2_g3_g

0x33cd,	// (0x000323ab) list_medium_line_x2_t2_g3_t1_ParamLimits

0x33cd,	// (0x000323ab) list_medium_line_x2_t2_g3_t1

0x2248,	// (0x00031226) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0003e2aa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0003e2aa) list_medium_line_x2_t2_g3_t

0x352e,	// (0x0003250c) main_sp_fs_list_pane_ParamLimits

0x352e,	// (0x0003250c) main_sp_fs_list_pane

0xd6e3,	// (0x0003c6c1) sp_fs_scroll_pane_ParamLimits

0xd6e3,	// (0x0003c6c1) sp_fs_scroll_pane

0x353a,	// (0x00032518) list_medium_line_x2_t3_t1

0x354a,	// (0x00032528) list_medium_line_x2_t3_t2

0x3558,	// (0x00032536) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0003e2f5) list_medium_line_x2_t3_t

0x3566,	// (0x00032544) list_medium_line_x3_t4_t1

0x3576,	// (0x00032554) list_medium_line_x3_t4_t2

0x3584,	// (0x00032562) list_medium_line_x3_t4_t3

0x3558,	// (0x00032536) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0003e2fc) list_medium_line_x3_t4_t

0x3592,	// (0x00032570) list_medium_line_x4_t5_t1

0x35a2,	// (0x00032580) list_medium_line_x4_t5_t2

0x3584,	// (0x00032562) list_medium_line_x4_t5_t3

0x35b0,	// (0x0003258e) list_medium_line_x4_t5_t4

0x3558,	// (0x00032536) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0003e305) list_medium_line_x4_t5_t

0x21fb,	// (0x000311d9) list_medium_line_t4_g4_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_t4_g4_g1

0x22af,	// (0x0003128d) list_medium_line_t4_g4_g2_ParamLimits

0x22af,	// (0x0003128d) list_medium_line_t4_g4_g2

0x35be,	// (0x0003259c) list_medium_line_t4_g4_g3_ParamLimits

0x35be,	// (0x0003259c) list_medium_line_t4_g4_g3

0x2213,	// (0x000311f1) list_medium_line_t4_g4_g4_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0003e310) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0003e310) list_medium_line_t4_g4_g

0x35ca,	// (0x000325a8) list_medium_line_t4_g4_t1_ParamLimits

0x35ca,	// (0x000325a8) list_medium_line_t4_g4_t1

0x35df,	// (0x000325bd) list_medium_line_t4_g4_t2_ParamLimits

0x35df,	// (0x000325bd) list_medium_line_t4_g4_t2

0x35f5,	// (0x000325d3) list_medium_line_t4_g4_t3_ParamLimits

0x35f5,	// (0x000325d3) list_medium_line_t4_g4_t3

0x2248,	// (0x00031226) list_medium_line_t4_g4_t4_ParamLimits

0x2248,	// (0x00031226) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0003e319) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0003e319) list_medium_line_t4_g4_t

0x3740,	// (0x0003271e) chi_dic_find_pane_g1

0x00c2,	// (0x0002f0a0) main_tport_pane

0x6d8b,	// (0x00035d69) list_medium_line_plain_t1

0x6ded,	// (0x00035dcb) list_medium_line_t2_g2_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t2_g2_g1

0x6df9,	// (0x00035dd7) list_medium_line_t2_g2_g2_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003e9de) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003e9de) list_medium_line_t2_g2_g

0x6e05,	// (0x00035de3) list_medium_line_t2_g2_t1_ParamLimits

0x6e05,	// (0x00035de3) list_medium_line_t2_g2_t1

0x6e1f,	// (0x00035dfd) list_medium_line_t2_g2_t2_ParamLimits

0x6e1f,	// (0x00035dfd) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003e9e3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003e9e3) list_medium_line_t2_g2_t

0xd9b4,	// (0x0003c992) aid_sp_fs_list_icon_a_sm

0xd9bc,	// (0x0003c99a) aid_sp_fs_list_icon_d

0xd9c4,	// (0x0003c9a2) aid_sp_fs_text_primary

0xd9cd,	// (0x0003c9ab) aid_sp_fs_text_secondary

0x745b,	// (0x00036439) list_medium_line

0x745b,	// (0x00036439) list_medium_line_g2

0x745b,	// (0x00036439) list_medium_line_g3

0x745b,	// (0x00036439) list_medium_line_plain

0x745b,	// (0x00036439) list_medium_line_plain_t2

0x745b,	// (0x00036439) list_medium_line_plain_t3

0x745b,	// (0x00036439) list_medium_line_right_icon

0x745b,	// (0x00036439) list_medium_line_right_iconx2

0x745b,	// (0x00036439) list_medium_line_t2

0x745b,	// (0x00036439) list_medium_line_t2_g2

0x745b,	// (0x00036439) list_medium_line_t2_g3

0x745b,	// (0x00036439) list_medium_line_t2_right_icon

0x745b,	// (0x00036439) list_medium_line_t2_right_iconx2

0x745b,	// (0x00036439) list_medium_line_t3

0x745b,	// (0x00036439) list_medium_line_t3_g2

0x745b,	// (0x00036439) list_medium_line_t3_g3

0x745b,	// (0x00036439) list_medium_line_t3_right_iconx2

0x7464,	// (0x00036442) list_medium_line_t4_g4

0x746d,	// (0x0003644b) list_medium_line_x2

0x746d,	// (0x0003644b) list_medium_line_x2_t2_g2

0x746d,	// (0x0003644b) list_medium_line_x2_t2_g3

0x746d,	// (0x0003644b) list_medium_line_x2_t2_g4

0x746d,	// (0x0003644b) list_medium_line_x2_t3

0x746d,	// (0x0003644b) list_medium_line_x2_t3_g2

0x746d,	// (0x0003644b) list_medium_line_x2_t3_g3

0x746d,	// (0x0003644b) list_medium_line_x2_t3_g4

0x746d,	// (0x0003644b) list_medium_line_x2_t4_g2

0x746d,	// (0x0003644b) list_medium_line_x2_t4_g4

0x7476,	// (0x00036454) list_medium_line_x3

0x7476,	// (0x00036454) list_medium_line_x3_t4

0x7476,	// (0x00036454) list_medium_line_x3_t4_g4

0x7464,	// (0x00036442) list_medium_line_x4_t4

0x7464,	// (0x00036442) list_medium_line_x4_t4_g7

0x7464,	// (0x00036442) list_medium_line_x4_t5

0x747f,	// (0x0003645d) list_single_fs_dyc_pane_ParamLimits

0x747f,	// (0x0003645d) list_single_fs_dyc_pane

0x21fb,	// (0x000311d9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x4_t4_g7_g1

0x7ba4,	// (0x00036b82) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ba4,	// (0x00036b82) list_medium_line_x4_t4_g7_g2

0x7bb0,	// (0x00036b8e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bb0,	// (0x00036b8e) list_medium_line_x4_t4_g7_g3

0x7bbf,	// (0x00036b9d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bbf,	// (0x00036b9d) list_medium_line_x4_t4_g7_g4

0x7bcb,	// (0x00036ba9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bcb,	// (0x00036ba9) list_medium_line_x4_t4_g7_g5

0x7bda,	// (0x00036bb8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bda,	// (0x00036bb8) list_medium_line_x4_t4_g7_g6

0x7be9,	// (0x00036bc7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7be9,	// (0x00036bc7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003ebae) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003ebae) list_medium_line_x4_t4_g7_g

0x7bf5,	// (0x00036bd3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bf5,	// (0x00036bd3) list_medium_line_x4_t4_g7_t1

0x7c0a,	// (0x00036be8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c0a,	// (0x00036be8) list_medium_line_x4_t4_g7_t2

0x7c1f,	// (0x00036bfd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c1f,	// (0x00036bfd) list_medium_line_x4_t4_g7_t3

0x7c34,	// (0x00036c12) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c34,	// (0x00036c12) list_medium_line_x4_t4_g7_t4

0x7c46,	// (0x00036c24) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c46,	// (0x00036c24) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003ebbd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003ebbd) list_medium_line_x4_t4_g7_t

0x7c58,	// (0x00036c36) list_single_dyc_row_pane_ParamLimits

0x7c58,	// (0x00036c36) list_single_dyc_row_pane

0x84e6,	// (0x000374c4) call5_gesture_pane_ParamLimits

0x84e6,	// (0x000374c4) call5_gesture_pane

0x853c,	// (0x0003751a) call5_windows_pane_ParamLimits

0x853c,	// (0x0003751a) call5_windows_pane

0x85a2,	// (0x00037580) call5_swipe_1_pane_cp_ParamLimits

0x85a2,	// (0x00037580) call5_swipe_1_pane_cp

0x85ae,	// (0x0003758c) call5_swipe_2_pane_cp_ParamLimits

0x85ae,	// (0x0003758c) call5_swipe_2_pane_cp

0xa738,	// (0x00039716) call5_image_pane_cp

0x85ba,	// (0x00037598) popup_call5_audio_first_window_cp_ParamLimits

0x85ba,	// (0x00037598) popup_call5_audio_first_window_cp

0xe319,	// (0x0003d2f7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe319,	// (0x0003d2f7) call5_swipe_1_pane_g1_cp

0xe386,	// (0x0003d364) call5_swipe_1_pane_g2_cp

0xe332,	// (0x0003d310) call5_swipe_1_pane_t1_cp_ParamLimits

0xe332,	// (0x0003d310) call5_swipe_1_pane_t1_cp

0xe319,	// (0x0003d2f7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe319,	// (0x0003d2f7) call5_swipe_2_pane_g1_cp

0xe38e,	// (0x0003d36c) call5_swipe_2_pane_g2_cp

0xe396,	// (0x0003d374) call5_swipe_2_pane_t1_cp_ParamLimits

0xe396,	// (0x0003d374) call5_swipe_2_pane_t1_cp

0xb0f1,	// (0x0003a0cf) main_sp_fs_email_pane

0xe3ab,	// (0x0003d389) main_sp_fs_listscroll_pane_te

0x85c8,	// (0x000375a6) popup_sp_fs_action_menu_pane_ParamLimits

0x85c8,	// (0x000375a6) popup_sp_fs_action_menu_pane

0xca3b,	// (0x0003ba19) bg_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0003d392) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bd,	// (0x0003d39b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3c6,	// (0x0003d3a4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xca3b,	// (0x0003ba19) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003ecab) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc81a,	// (0x0003b7f8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc81a,	// (0x0003b7f8) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3cf,	// (0x0003d3ad) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3cf,	// (0x0003d3ad) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3db,	// (0x0003d3b9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3db,	// (0x0003d3b9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003ecb4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003ecb4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3e7,	// (0x0003d3c5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3e7,	// (0x0003d3c5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x860e,	// (0x000375ec) list_medium_line_t2_right_icon_g1

0x8616,	// (0x000375f4) list_medium_line_t2_right_icon_t1

0x8626,	// (0x00037604) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003ecb9) list_medium_line_t2_right_icon_t

0xc603,	// (0x0003b5e1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc603,	// (0x0003b5e1) bg_sp_fs_ctrlbar_pane

0x8682,	// (0x00037660) main_sp_fs_ctrlbar_button_pane_cp01

0x868c,	// (0x0003766a) main_sp_fs_ctrlbar_ddmenu_pane

0xe43b,	// (0x0003d419) main_sp_fs_ctrlbar_pane_g1

0xe447,	// (0x0003d425) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003ecbe) main_sp_fs_ctrlbar_pane_g

0xe453,	// (0x0003d431) main_sp_fs_ctrlbar_pane_t1

0x8696,	// (0x00037674) main_sp_fs_ctrlbar_pane

0x86ba,	// (0x00037698) main_sp_fs_listscroll_pane_te_cp01

0x86da,	// (0x000376b8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86da,	// (0x000376b8) popup_sp_fs_action_menu_pane_cp01

0xb0f1,	// (0x0003a0cf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_sp_fs_highlight_list_pane_cp01

0xe483,	// (0x0003d461) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe483,	// (0x0003d461) sp_fs_action_menu_list_gene_pane_g1

0xe492,	// (0x0003d470) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe492,	// (0x0003d470) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003ecc8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003ecc8) sp_fs_action_menu_list_gene_pane_g

0xe49f,	// (0x0003d47d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe49f,	// (0x0003d47d) sp_fs_action_menu_list_gene_pane_t1

0xe4b7,	// (0x0003d495) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b7,	// (0x0003d495) sp_fs_action_menu_list_gene_pane

0xe4da,	// (0x0003d4b8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4da,	// (0x0003d4b8) popup_sp_fs_action_menu_bg_pane

0xe4e8,	// (0x0003d4c6) sp_fs_action_menu_list_pane_ParamLimits

0xe4e8,	// (0x0003d4c6) sp_fs_action_menu_list_pane

0x8710,	// (0x000376ee) sp_fs_scroll_pane_cp01_ParamLimits

0x8710,	// (0x000376ee) sp_fs_scroll_pane_cp01

0x8736,	// (0x00037714) list_medium_line_plain_t2_t1

0x8746,	// (0x00037724) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003eccd) list_medium_line_plain_t2_t

0x8756,	// (0x00037734) list_medium_line_plain_t3_t1

0x8766,	// (0x00037744) list_medium_line_plain_t3_t2

0x8774,	// (0x00037752) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003ecd2) list_medium_line_plain_t3_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t2_g2_g1

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0003e220) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0003e220) list_medium_line_x2_t2_g2_g

0x35ca,	// (0x000325a8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x35ca,	// (0x000325a8) list_medium_line_x2_t2_g2_t1

0x2248,	// (0x00031226) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003ecd9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003ecd9) list_medium_line_x2_t2_g2_t

0x21fb,	// (0x000311d9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t4_g2_g1

0x2213,	// (0x000311f1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0003e220) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0003e220) list_medium_line_x2_t4_g2_g

0x8782,	// (0x00037760) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8782,	// (0x00037760) list_medium_line_x2_t4_g2_t1

0x879c,	// (0x0003777a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x879c,	// (0x0003777a) list_medium_line_x2_t4_g2_t2

0x87b2,	// (0x00037790) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87b2,	// (0x00037790) list_medium_line_x2_t4_g2_t3

0x2248,	// (0x00031226) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003ecde) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003ecde) list_medium_line_x2_t4_g2_t

0x87c7,	// (0x000377a5) list_medium_line_t3_right_iconx2_g1

0x860e,	// (0x000375ec) list_medium_line_t3_right_iconx2_g2

0x87cf,	// (0x000377ad) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003ece7) list_medium_line_t3_right_iconx2_g

0x87d9,	// (0x000377b7) list_medium_line_t3_right_iconx2_t1

0x87e9,	// (0x000377c7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003ecee) list_medium_line_t3_right_iconx2_t

0x21fb,	// (0x000311d9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x3_t4_g4_g1

0x2207,	// (0x000311e5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x3_t4_g4_g2

0x22af,	// (0x0003128d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x22af,	// (0x0003128d) list_medium_line_x3_t4_g4_g3

0x87f7,	// (0x000377d5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x87f7,	// (0x000377d5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003ecf3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003ecf3) list_medium_line_x3_t4_g4_g

0x8803,	// (0x000377e1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8803,	// (0x000377e1) list_medium_line_x3_t4_g4_t1

0x881a,	// (0x000377f8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x881a,	// (0x000377f8) list_medium_line_x3_t4_g4_t2

0x8833,	// (0x00037811) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8833,	// (0x00037811) list_medium_line_x3_t4_g4_t3

0x8848,	// (0x00037826) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8848,	// (0x00037826) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003ecfc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003ecfc) list_medium_line_x3_t4_g4_t

0x8865,	// (0x00037843) list_single_dyc_row_text_pane_t1_ParamLimits

0x8865,	// (0x00037843) list_single_dyc_row_text_pane_t1

0x88ae,	// (0x0003788c) list_single_dyc_row_text_pane_t2_ParamLimits

0x88ae,	// (0x0003788c) list_single_dyc_row_text_pane_t2

0xe50c,	// (0x0003d4ea) list_single_dyc_row_text_pane_t3_ParamLimits

0xe50c,	// (0x0003d4ea) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003ed05) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003ed05) list_single_dyc_row_text_pane_t

0xe530,	// (0x0003d50e) list_single_dyc_row_pane_g1_ParamLimits

0xe530,	// (0x0003d50e) list_single_dyc_row_pane_g1

0xe53c,	// (0x0003d51a) list_single_dyc_row_pane_g2_ParamLimits

0xe53c,	// (0x0003d51a) list_single_dyc_row_pane_g2

0xe548,	// (0x0003d526) list_single_dyc_row_pane_g3_ParamLimits

0xe548,	// (0x0003d526) list_single_dyc_row_pane_g3

0xe554,	// (0x0003d532) list_single_dyc_row_pane_g4_ParamLimits

0xe554,	// (0x0003d532) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003ed12) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003ed12) list_single_dyc_row_pane_g

0xe560,	// (0x0003d53e) list_single_dyc_row_text_pane_ParamLimits

0xe560,	// (0x0003d53e) list_single_dyc_row_text_pane

0x9e15,	// (0x00038df3) bg_sp_fs_scroll_pane

0xe57f,	// (0x0003d55d) thumb_sp_fs_scroll_pane

0x6ded,	// (0x00035dcb) list_medium_line_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_g1

0x89e3,	// (0x000379c1) list_medium_line_t1_ParamLimits

0x89e3,	// (0x000379c1) list_medium_line_t1

0x21fb,	// (0x000311d9) list_medium_line_x2_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_g1

0x2207,	// (0x000311e5) list_medium_line_x2_g2_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003ed1b) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003ed1b) list_medium_line_x2_g

0xe588,	// (0x0003d566) list_medium_line_x2_t1_ParamLimits

0xe588,	// (0x0003d566) list_medium_line_x2_t1

0x21fb,	// (0x000311d9) list_medium_line_x3_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x3_g1

0x2207,	// (0x000311e5) list_medium_line_x3_g2_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003ed1b) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003ed1b) list_medium_line_x3_g

0xe588,	// (0x0003d566) list_medium_line_x3_t1_ParamLimits

0xe588,	// (0x0003d566) list_medium_line_x3_t1

0xe59e,	// (0x0003d57c) thumb_sp_fs_scroll_pane_g1

0xe5a7,	// (0x0003d585) thumb_sp_fs_scroll_pane_g2

0xe5b0,	// (0x0003d58e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ed20) thumb_sp_fs_scroll_pane_g

0xe59e,	// (0x0003d57c) bg_sp_fs_scroll_pane_g1

0xe5a7,	// (0x0003d585) bg_sp_fs_scroll_pane_g2

0xe5b0,	// (0x0003d58e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ed20) bg_sp_fs_scroll_pane_g

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x21fb,	// (0x000311d9) list_medium_line_x2_t3_g4_g1

0x22a3,	// (0x00031281) list_medium_line_x2_t3_g4_g2_ParamLimits

0x22a3,	// (0x00031281) list_medium_line_x2_t3_g4_g2

0x2207,	// (0x000311e5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2207,	// (0x000311e5) list_medium_line_x2_t3_g4_g3

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2213,	// (0x000311f1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0003e29c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0003e29c) list_medium_line_x2_t3_g4_g

0x89f8,	// (0x000379d6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89f8,	// (0x000379d6) list_medium_line_x2_t3_g4_t1

0x8a0e,	// (0x000379ec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a0e,	// (0x000379ec) list_medium_line_x2_t3_g4_t2

0x2248,	// (0x00031226) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2248,	// (0x00031226) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003ed27) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003ed27) list_medium_line_x2_t3_g4_t

0x6ded,	// (0x00035dcb) list_medium_line_g2_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_g2_g1

0x6df9,	// (0x00035dd7) list_medium_line_g2_g2_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003e9de) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003e9de) list_medium_line_g2_g

0x8a28,	// (0x00037a06) list_medium_line_g2_t1_ParamLimits

0x8a28,	// (0x00037a06) list_medium_line_g2_t1

0x6ded,	// (0x00035dcb) list_medium_line_t3_g2_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t3_g2_g1

0x6df9,	// (0x00035dd7) list_medium_line_t3_g2_g2_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003e9de) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003e9de) list_medium_line_t3_g2_g

0x8a3d,	// (0x00037a1b) list_medium_line_t3_g2_t1_ParamLimits

0x8a3d,	// (0x00037a1b) list_medium_line_t3_g2_t1

0x8a57,	// (0x00037a35) list_medium_line_t3_g2_t2_ParamLimits

0x8a57,	// (0x00037a35) list_medium_line_t3_g2_t2

0x8a6d,	// (0x00037a4b) list_medium_line_t3_g2_t3_ParamLimits

0x8a6d,	// (0x00037a4b) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003ed2e) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003ed2e) list_medium_line_t3_g2_t

0x860e,	// (0x000375ec) list_medium_line_right_icon_g1

0x8a87,	// (0x00037a65) list_medium_line_right_icon_t1

0x6ded,	// (0x00035dcb) list_medium_line_t2_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t2_g1

0x8a95,	// (0x00037a73) list_medium_line_t2_t1_ParamLimits

0x8a95,	// (0x00037a73) list_medium_line_t2_t1

0x8aaf,	// (0x00037a8d) list_medium_line_t2_t2_ParamLimits

0x8aaf,	// (0x00037a8d) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003ed35) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003ed35) list_medium_line_t2_t

0x6ded,	// (0x00035dcb) list_medium_line_t3_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t3_g1

0x8ac8,	// (0x00037aa6) list_medium_line_t3_t1_ParamLimits

0x8ac8,	// (0x00037aa6) list_medium_line_t3_t1

0x8ae2,	// (0x00037ac0) list_medium_line_t3_t2_ParamLimits

0x8ae2,	// (0x00037ac0) list_medium_line_t3_t2

0x8af8,	// (0x00037ad6) list_medium_line_t3_t3_ParamLimits

0x8af8,	// (0x00037ad6) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003ed3a) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003ed3a) list_medium_line_t3_t

0x6ded,	// (0x00035dcb) list_medium_line_g3_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_g3_g1

0x8b0d,	// (0x00037aeb) list_medium_line_g3_g2_ParamLimits

0x8b0d,	// (0x00037aeb) list_medium_line_g3_g2

0x6df9,	// (0x00035dd7) list_medium_line_g3_g3_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003ed41) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003ed41) list_medium_line_g3_g

0x8b19,	// (0x00037af7) list_medium_line_g3_t1_ParamLimits

0x8b19,	// (0x00037af7) list_medium_line_g3_t1

0x6ded,	// (0x00035dcb) list_medium_line_t2_g3_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t2_g3_g1

0x8b0d,	// (0x00037aeb) list_medium_line_t2_g3_g2_ParamLimits

0x8b0d,	// (0x00037aeb) list_medium_line_t2_g3_g2

0x6df9,	// (0x00035dd7) list_medium_line_t2_g3_g3_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003ed41) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003ed41) list_medium_line_t2_g3_g

0x8b2e,	// (0x00037b0c) list_medium_line_t2_g3_t1_ParamLimits

0x8b2e,	// (0x00037b0c) list_medium_line_t2_g3_t1

0x8b48,	// (0x00037b26) list_medium_line_t2_g3_t2_ParamLimits

0x8b48,	// (0x00037b26) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003ed48) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003ed48) list_medium_line_t2_g3_t

0x6ded,	// (0x00035dcb) list_medium_line_t3_g3_g1_ParamLimits

0x6ded,	// (0x00035dcb) list_medium_line_t3_g3_g1

0x8b0d,	// (0x00037aeb) list_medium_line_t3_g3_g2_ParamLimits

0x8b0d,	// (0x00037aeb) list_medium_line_t3_g3_g2

0x6df9,	// (0x00035dd7) list_medium_line_t3_g3_g3_ParamLimits

0x6df9,	// (0x00035dd7) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003ed41) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003ed41) list_medium_line_t3_g3_g

0x8b62,	// (0x00037b40) list_medium_line_t3_g3_t1_ParamLimits

0x8b62,	// (0x00037b40) list_medium_line_t3_g3_t1

0x8b7b,	// (0x00037b59) list_medium_line_t3_g3_t2_ParamLimits

0x8b7b,	// (0x00037b59) list_medium_line_t3_g3_t2

0x8b91,	// (0x00037b6f) list_medium_line_t3_g3_t3_ParamLimits

0x8b91,	// (0x00037b6f) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003ed4d) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003ed4d) list_medium_line_t3_g3_t

0x87c7,	// (0x000377a5) list_medium_line_right_iconx2_g1

0x860e,	// (0x000375ec) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ed54) list_medium_line_right_iconx2_g

0x8bab,	// (0x00037b89) list_medium_line_right_iconx2_t1

0x87c7,	// (0x000377a5) list_medium_line_t2_right_iconx2_g1

0x860e,	// (0x000375ec) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ed54) list_medium_line_t2_right_iconx2_g

0x8bb9,	// (0x00037b97) list_medium_line_t2_right_iconx2_t1

0x8bc9,	// (0x00037ba7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003ed59) list_medium_line_t2_right_iconx2_t

0x8bd9,	// (0x00037bb7) list_medium_line_x4_t4_t1

0x8be7,	// (0x00037bc5) list_medium_line_x4_t4_t2

0x8bf7,	// (0x00037bd5) list_medium_line_x4_t4_t3

0x8c07,	// (0x00037be5) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003ed5e) list_medium_line_x4_t4_t

0x8c58,	// (0x00037c36) tport_appsw_pane_ParamLimits

0x8c58,	// (0x00037c36) tport_appsw_pane

0x8c6f,	// (0x00037c4d) tport_contact_pane_ParamLimits

0x8c6f,	// (0x00037c4d) tport_contact_pane

0x8c87,	// (0x00037c65) tport_listscroll_pane_ParamLimits

0x8c87,	// (0x00037c65) tport_listscroll_pane

0x8c9b,	// (0x00037c79) cell_tport_appsw_pane_ParamLimits

0x8c9b,	// (0x00037c79) cell_tport_appsw_pane

0xd3ba,	// (0x0003c398) tport_appsw_pane_g1_ParamLimits

0xd3ba,	// (0x0003c398) tport_appsw_pane_g1

0xe5b9,	// (0x0003d597) tport_contact_pane_g1

0xe5c2,	// (0x0003d5a0) tport_contact_pane_t1

0xe5d0,	// (0x0003d5ae) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003ed67) tport_contact_pane_t

0xe5de,	// (0x0003d5bc) list_tport_pane

0xe5e7,	// (0x0003d5c5) scroll_pane_cp_030

0x8ce5,	// (0x00037cc3) cell_tport_appsw_pane_g1

0x8cf5,	// (0x00037cd3) cell_tport_appsw_pane_t1

0x8d03,	// (0x00037ce1) grid_highlight_pane_cp019

0x8d0b,	// (0x00037ce9) list_tport_double_graphic_pane_ParamLimits

0x8d0b,	// (0x00037ce9) list_tport_double_graphic_pane

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp023_ParamLimits

0xb0f1,	// (0x0003a0cf) list_highlight_pane_cp023

0x8d22,	// (0x00037d00) list_tport_double_graphic_pane_g1_ParamLimits

0x8d22,	// (0x00037d00) list_tport_double_graphic_pane_g1

0x8d2f,	// (0x00037d0d) list_tport_double_graphic_pane_t1_ParamLimits

0x8d2f,	// (0x00037d0d) list_tport_double_graphic_pane_t1

0x8d44,	// (0x00037d22) list_tport_double_graphic_pane_t2_ParamLimits

0x8d44,	// (0x00037d22) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003ed73) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003ed73) list_tport_double_graphic_pane_t

0x9e15,	// (0x00038df3) main_cale_note_pane

0x10e3,	// (0x000300c1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x10e3,	// (0x000300c1) cell_vitu2_function_top_wide_pane_cp01

0x800b,	// (0x00036fe9) wait_bar_pane_cp05_ParamLimits

0xb0f1,	// (0x0003a0cf) listscroll_cmail_pane

0xe5f0,	// (0x0003d5ce) list_cmail_pane

0x8d56,	// (0x00037d34) list_cmail_body_pane

0x8d6d,	// (0x00037d4b) list_single_cmail_header_caption_pane

0xe600,	// (0x0003d5de) list_single_cmail_header_detail_pane_ParamLimits

0xe600,	// (0x0003d5de) list_single_cmail_header_detail_pane

0xe632,	// (0x0003d610) list_single_cmail_header_caption_pane_t1

0x8d8a,	// (0x00037d68) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d8a,	// (0x00037d68) list_single_cmail_header_detail_pane_g1

0xe649,	// (0x0003d627) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe649,	// (0x0003d627) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003ed78) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003ed78) list_single_cmail_header_detail_pane_g

0xe662,	// (0x0003d640) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe662,	// (0x0003d640) list_single_cmail_header_detail_pane_t1

0xe6c2,	// (0x0003d6a0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6c2,	// (0x0003d6a0) list_single_cmail_header_editor_pane_bg

0xe0ff,	// (0x0003d0dd) list_cmail_body_pane_g1

0xe6d9,	// (0x0003d6b7) list_cmail_body_pane_t1

0xd3f7,	// (0x0003c3d5) list_single_cmail_header_editor_pane_bg_g1

0xa9aa,	// (0x00039988) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd407,	// (0x0003c3e5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd3ff,	// (0x0003c3dd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd621,	// (0x0003c5ff) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd427,	// (0x0003c405) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd417,	// (0x0003c3f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd41f,	// (0x0003c3fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa98a,	// (0x00039968) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8da2,	// (0x00037d80) calenote_gesture_pane_ParamLimits

0x8da2,	// (0x00037d80) calenote_gesture_pane

0x8dc2,	// (0x00037da0) calenote_window_pane_ParamLimits

0x8dc2,	// (0x00037da0) calenote_window_pane

0xe6e7,	// (0x0003d6c5) popup_note_window_cp01

0x8dde,	// (0x00037dbc) calenote_swipe_1_pane_ParamLimits

0x8dde,	// (0x00037dbc) calenote_swipe_1_pane

0x85ae,	// (0x0003758c) calenote_swipe_2_pane_ParamLimits

0x85ae,	// (0x0003758c) calenote_swipe_2_pane

0xe319,	// (0x0003d2f7) calenote_swipe_1_pane_g1_ParamLimits

0xe319,	// (0x0003d2f7) calenote_swipe_1_pane_g1

0xe326,	// (0x0003d304) calenote_swipe_1_pane_g2_ParamLimits

0xe326,	// (0x0003d304) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003eca1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003eca1) calenote_swipe_1_pane_g

0xe6f9,	// (0x0003d6d7) calenote_swipe_1_pane_t1_ParamLimits

0xe6f9,	// (0x0003d6d7) calenote_swipe_1_pane_t1

0xe319,	// (0x0003d2f7) calenote_swipe_2_pane_g1_ParamLimits

0xe319,	// (0x0003d2f7) calenote_swipe_2_pane_g1

0xe718,	// (0x0003d6f6) calenote_swipe_2_pane_g2_ParamLimits

0xe718,	// (0x0003d6f6) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003ed84) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003ed84) calenote_swipe_2_pane_g

0xe724,	// (0x0003d702) calenote_swipe_2_pane_t1_ParamLimits

0xe724,	// (0x0003d702) calenote_swipe_2_pane_t1

0x9e15,	// (0x00038df3) main_mup_navstr_pane

0x5713,	// (0x000346f1) main_mup3_pane_t7_ParamLimits

0x5713,	// (0x000346f1) main_mup3_pane_t7

0x6148,	// (0x00035126) main_mp4_pane_g6_ParamLimits

0x6148,	// (0x00035126) main_mp4_pane_g6

0x63b0,	// (0x0003538e) main_image3_pane_t4_ParamLimits

0x63b0,	// (0x0003538e) main_image3_pane_t4

0x8df3,	// (0x00037dd1) popup_navstr_preview_pane_ParamLimits

0x8df3,	// (0x00037dd1) popup_navstr_preview_pane

0x8e03,	// (0x00037de1) scroll_navstr_pane_ParamLimits

0x8e03,	// (0x00037de1) scroll_navstr_pane

0x9e15,	// (0x00038df3) bg_popup_preview_window_pane_cp04

0xe74b,	// (0x0003d729) popup_navstr_preview_pane_t1

0x8e17,	// (0x00037df5) scroll_navstr_pane_g1_ParamLimits

0x8e17,	// (0x00037df5) scroll_navstr_pane_g1

0x8e2b,	// (0x00037e09) scroll_navstr_pane_t1_ParamLimits

0x8e2b,	// (0x00037e09) scroll_navstr_pane_t1

0xe6f0,	// (0x0003d6ce) bg_button_pane_cp014

0xe6f0,	// (0x0003d6ce) bg_button_pane_cp030

0x848c,	// (0x0003746a) list_double_fisheye_pane_g4_ParamLimits

0x848c,	// (0x0003746a) list_double_fisheye_pane_g4

0x8498,	// (0x00037476) list_double_fisheye_pane_g5_ParamLimits

0x8498,	// (0x00037476) list_double_fisheye_pane_g5

0xd6e3,	// (0x0003c6c1) sp_fs_scroll_pane_cp03

0xe43b,	// (0x0003d419) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe447,	// (0x0003d425) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003ecbe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe453,	// (0x0003d431) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5f8,	// (0x0003d5d6) sp_fs_scroll_pane_cp02

0xa694,	// (0x00039672) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa694,	// (0x00039672) popup_sp_fs_calendar_preview_list_single_pane

0x9e15,	// (0x00038df3) main_cam6_pano_pane

0x157f,	// (0x0003055d) main_mup3_pane_ParamLimits

0x9e15,	// (0x00038df3) main_phacti_pane

0x7edc,	// (0x00036eba) bg_button_pane_cp11

0x7ef6,	// (0x00036ed4) main_mobtv_info_pane_g2_ParamLimits

0x7ef6,	// (0x00036ed4) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003ec1e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003ec1e) main_mobtv_info_pane_g

0x80d3,	// (0x000370b1) sc_clock_pane_t5_ParamLimits

0x80d3,	// (0x000370b1) sc_clock_pane_t5

0x8307,	// (0x000372e5) main_radioblah_pane_g1_ParamLimits

0xe265,	// (0x0003d243) main_radioblah_pane_t3_ParamLimits

0xe265,	// (0x0003d243) main_radioblah_pane_t3

0xe27d,	// (0x0003d25b) main_radioblah_pane_t4_ParamLimits

0xe27d,	// (0x0003d25b) main_radioblah_pane_t4

0x832f,	// (0x0003730d) main_radioblah_text_pane_ParamLimits

0x832f,	// (0x0003730d) main_radioblah_text_pane

0x8341,	// (0x0003731f) main_radioblah_info_pane_g1_ParamLimits

0x83da,	// (0x000373b8) main_radioblah_info_pane_t4_ParamLimits

0x83da,	// (0x000373b8) main_radioblah_info_pane_t4

0xb0f1,	// (0x0003a0cf) main_sp_fs_calendar_pane

0x8e42,	// (0x00037e20) main_phacti_pane_g1

0x8e4a,	// (0x00037e28) phacti_note_pane_ParamLimits

0x8e4a,	// (0x00037e28) phacti_note_pane

0xe762,	// (0x0003d740) phacti_term_pane_ParamLimits

0xe762,	// (0x0003d740) phacti_term_pane

0xe777,	// (0x0003d755) phacti_note_pane_t1_ParamLimits

0xe777,	// (0x0003d755) phacti_note_pane_t1

0xe78e,	// (0x0003d76c) phacti_term_pane_g1

0xe796,	// (0x0003d774) phacti_term_pane_t1_ParamLimits

0xe796,	// (0x0003d774) phacti_term_pane_t1

0xe7c0,	// (0x0003d79e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7c8,	// (0x0003d7a6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003ed8e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7d0,	// (0x0003d7ae) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7d0,	// (0x0003d7ae) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7e6,	// (0x0003d7c4) aid_popup_sp_fs_bg_corner_pane

0xca3b,	// (0x0003ba19) popup_sp_fs_calendar_preview_bg_pane_g1

0x9e15,	// (0x00038df3) popup_sp_fs_calendar_preview_bg_pane

0xe7ee,	// (0x0003d7cc) popup_sp_fs_calendar_preview_list_pane

0xc603,	// (0x0003b5e1) bg_main_sp_fs_cale_pane_ParamLimits

0xc603,	// (0x0003b5e1) bg_main_sp_fs_cale_pane

0xe7ff,	// (0x0003d7dd) listscroll_cale_mrui_pane_ParamLimits

0xe7ff,	// (0x0003d7dd) listscroll_cale_mrui_pane

0xe814,	// (0x0003d7f2) listscroll_sp_fs_schedule_track_pane

0xe81d,	// (0x0003d7fb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe81d,	// (0x0003d7fb) main_sp_fs_ctrlbar_pane_cp01

0xe830,	// (0x0003d80e) main_sp_fs_ribbon_pane

0xe838,	// (0x0003d816) popup_sp_fs_cale_preview_window

0x8ebf,	// (0x00037e9d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ebf,	// (0x00037e9d) list_single_sp_fs_schedule_track_pane

0xb0f1,	// (0x0003a0cf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_sp_fs_highlight_list_pane_cp03

0x8ed3,	// (0x00037eb1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ed3,	// (0x00037eb1) list_single_sp_fs_schedule_track_pane_g1

0x8edf,	// (0x00037ebd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8edf,	// (0x00037ebd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003ed93) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003ed93) list_single_sp_fs_schedule_track_pane_g

0x8eeb,	// (0x00037ec9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8eeb,	// (0x00037ec9) list_single_sp_fs_schedule_track_pane_t1

0x8f0d,	// (0x00037eeb) sp_fs_schedule_track_pane_ParamLimits

0x8f0d,	// (0x00037eeb) sp_fs_schedule_track_pane

0xe84a,	// (0x0003d828) sp_fs_schedule_track_pane_g1

0xe852,	// (0x0003d830) sp_fs_schedule_track_pane_g2

0xe85a,	// (0x0003d838) sp_fs_schedule_track_pane_g3

0xe862,	// (0x0003d840) sp_fs_schedule_track_pane_g4

0xe86a,	// (0x0003d848) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003ed98) sp_fs_schedule_track_pane_g

0xd3f7,	// (0x0003c3d5) bg_sp_fs_schedule_viewer_highlight_g1

0xa9aa,	// (0x00039988) bg_sp_fs_schedule_viewer_highlight_g2

0xd3ff,	// (0x0003c3dd) bg_sp_fs_schedule_viewer_highlight_g3

0xd407,	// (0x0003c3e5) bg_sp_fs_schedule_viewer_highlight_g4

0xd621,	// (0x0003c5ff) bg_sp_fs_schedule_viewer_highlight_g5

0xd417,	// (0x0003c3f5) bg_sp_fs_schedule_viewer_highlight_g6

0xd41f,	// (0x0003c3fd) bg_sp_fs_schedule_viewer_highlight_g7

0xd427,	// (0x0003c405) bg_sp_fs_schedule_viewer_highlight_g8

0xa98a,	// (0x00039968) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003eda3) bg_sp_fs_schedule_viewer_highlight_g

0x9e15,	// (0x00038df3) bg_main_sp_fs_ribbon_pane

0x8f22,	// (0x00037f00) main_sp_fs_ribbon_pane_g1

0xe872,	// (0x0003d850) main_sp_fs_ribbon_pane_t1

0x8f2b,	// (0x00037f09) main_sp_fs_ribbon_pane_t2

0xe881,	// (0x0003d85f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003edb6) main_sp_fs_ribbon_pane_t

0xe890,	// (0x0003d86e) main_sp_fs_ribbon_scheduler_pane

0xe898,	// (0x0003d876) bg_main_sp_fs_ribbon_pane_g1

0xe8a1,	// (0x0003d87f) bg_main_sp_fs_ribbon_pane_g2

0xe8aa,	// (0x0003d888) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003edbd) bg_main_sp_fs_ribbon_pane_g

0xe8b2,	// (0x0003d890) main_sp_fs_ribbon_scheduler_pane_g1

0xe8bb,	// (0x0003d899) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c4,	// (0x0003d8a2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003edc4) main_sp_fs_ribbon_scheduler_pane_g

0xe8cd,	// (0x0003d8ab) list_cale_mrui_pane

0x8f3a,	// (0x00037f18) sp_fs_scroll_pane_cp07_ParamLimits

0x8f3a,	// (0x00037f18) sp_fs_scroll_pane_cp07

0x8f56,	// (0x00037f34) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f56,	// (0x00037f34) bg_sp_fs_schedule_viewer_highlight

0xe8da,	// (0x0003d8b8) list_single_sp_fs_schedule_track_pane_cp01

0xe8e2,	// (0x0003d8c0) list_sp_fs_schedule_track_pane

0xe8ea,	// (0x0003d8c8) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ea,	// (0x0003d8c8) sp_fs_scroll_pane_cp06

0xca3b,	// (0x0003ba19) bgmain_sp_fs_calendar_pane_g1

0x8f68,	// (0x00037f46) list_single_cale_mrui_pane_ParamLimits

0x8f68,	// (0x00037f46) list_single_cale_mrui_pane

0xe8fc,	// (0x0003d8da) list_single_cale_mrui_row_pane_ParamLimits

0xe8fc,	// (0x0003d8da) list_single_cale_mrui_row_pane

0xe909,	// (0x0003d8e7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe909,	// (0x0003d8e7) list_single_cale_mrui_row_pane_g1

0xe94e,	// (0x0003d92c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe94e,	// (0x0003d92c) list_single_cale_mrui_row_pane_t1

0x8f8b,	// (0x00037f69) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f8b,	// (0x00037f69) list_single_cale_mrui_row_pane_t2

0xe960,	// (0x0003d93e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe960,	// (0x0003d93e) list_single_cale_mrui_row_pane_t3

0xe98f,	// (0x0003d96d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe98f,	// (0x0003d96d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003edd2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003edd2) list_single_cale_mrui_row_pane_t

0x8ff1,	// (0x00037fcf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ff1,	// (0x00037fcf) list_single_cmail_header_editor_pane_bg_cp01

0x9015,	// (0x00037ff3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9015,	// (0x00037ff3) list_single_cmail_header_editor_pane_bg_cp02

0x9035,	// (0x00038013) main_radioblah_text_pane_t1_ParamLimits

0x9035,	// (0x00038013) main_radioblah_text_pane_t1

0xe9c0,	// (0x0003d99e) cam6_indi_pane_cp01

0xe9c8,	// (0x0003d9a6) cam6_mode_pane_cp01

0xe9fe,	// (0x0003d9dc) cam6_pano_pane

0xea07,	// (0x0003d9e5) cam6_zoom_pane_cp01

0xea11,	// (0x0003d9ef) cam6_pano_image_pane

0xea1a,	// (0x0003d9f8) cam6_pano_pane_g1

0xe0ff,	// (0x0003d0dd) cam6_pano_pane_g2

0xea23,	// (0x0003da01) cam6_pano_pane_g3

0xea2c,	// (0x0003da0a) cam6_pano_pane_g4

0xcfde,	// (0x0003bfbc) cam6_pano_pane_g5

0xea35,	// (0x0003da13) cam6_pano_pane_g6

0xea3d,	// (0x0003da1b) cam6_pano_pane_g7

0xea45,	// (0x0003da23) cam6_pano_pane_g8

0xea4e,	// (0x0003da2c) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003eddb) cam6_pano_pane_g

0x9e15,	// (0x00038df3) main_browser_tag_pane

0xe743,	// (0x0003d721) grid_navstr_albumart_pane

0xea59,	// (0x0003da37) cell_navstr_albumart_pane_ParamLimits

0xea59,	// (0x0003da37) cell_navstr_albumart_pane

0xea75,	// (0x0003da53) cell_navstr_albumart_pane_g1

0xc410,	// (0x0003b3ee) cell_navstr_albumart_pane_g2

0xc420,	// (0x0003b3fe) cell_navstr_albumart_pane_g3

0xc418,	// (0x0003b3f6) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003edee) cell_navstr_albumart_pane_g

0x9050,	// (0x0003802e) bt_list_pane_ParamLimits

0x9050,	// (0x0003802e) bt_list_pane

0x9066,	// (0x00038044) bt_list_pane_t1

0x9075,	// (0x00038053) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003edf7) bt_list_pane_t

0x9e15,	// (0x00038df3) main_cale_prevew_pane

0x9084,	// (0x00038062) popup_cale_preview_window_ParamLimits

0x9084,	// (0x00038062) popup_cale_preview_window

0xb0f1,	// (0x0003a0cf) bg_popup_preview_window_pane_cp05_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_popup_preview_window_pane_cp05

0xea7d,	// (0x0003da5b) list_cale_preview_pane_ParamLimits

0xea7d,	// (0x0003da5b) list_cale_preview_pane

0x90a1,	// (0x0003807f) list_double_cale_preview_pane_ParamLimits

0x90a1,	// (0x0003807f) list_double_cale_preview_pane

0x90b5,	// (0x00038093) list_single_cale_preview_pane_ParamLimits

0x90b5,	// (0x00038093) list_single_cale_preview_pane

0x90cd,	// (0x000380ab) list_single_cale_preview_pane_g1

0x90d5,	// (0x000380b3) list_single_cale_preview_pane_t1_ParamLimits

0x90d5,	// (0x000380b3) list_single_cale_preview_pane_t1

0x90ea,	// (0x000380c8) list_double_cale_preview_pane_g1

0x90f2,	// (0x000380d0) list_double_cale_preview_pane_t1_ParamLimits

0x90f2,	// (0x000380d0) list_double_cale_preview_pane_t1

0x9107,	// (0x000380e5) list_double_cale_preview_pane_t2_ParamLimits

0x9107,	// (0x000380e5) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003edfc) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003edfc) list_double_cale_preview_pane_t

0x9e15,	// (0x00038df3) main_ezdial_pane

0xb0f1,	// (0x0003a0cf) main_sp_fs_email_pane_ParamLimits

0x8638,	// (0x00037616) cmail_ddmenu_btn01_pane_ParamLimits

0x8638,	// (0x00037616) cmail_ddmenu_btn01_pane

0x864b,	// (0x00037629) cmail_ddmenu_btn02_pane_ParamLimits

0x864b,	// (0x00037629) cmail_ddmenu_btn02_pane

0x866e,	// (0x0003764c) cmail_ddmenu_btn03_pane_ParamLimits

0x866e,	// (0x0003764c) cmail_ddmenu_btn03_pane

0x8696,	// (0x00037674) main_sp_fs_ctrlbar_pane_ParamLimits

0x86ba,	// (0x00037698) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d56,	// (0x00037d34) list_cmail_body_pane_ParamLimits

0xe640,	// (0x0003d61e) bg_button_pane_cp12

0xe655,	// (0x0003d633) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe655,	// (0x0003d633) list_single_cmail_header_detail_pane_g3

0xe69e,	// (0x0003d67c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe69e,	// (0x0003d67c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003ed7f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003ed7f) list_single_cmail_header_detail_pane_t

0xe7ab,	// (0x0003d789) phacti_term_pane_t2_ParamLimits

0xe7ab,	// (0x0003d789) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003ed89) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003ed89) phacti_term_pane_t

0xea89,	// (0x0003da67) aid_size_list_single_double

0x911f,	// (0x000380fd) popup_ezdial_listscroll_window

0x913b,	// (0x00038119) popup_number_entry_window_cp01

0xa738,	// (0x00039716) bg_popup_call_pane_cp09

0xea95,	// (0x0003da73) ezdial_list_pane

0xea9d,	// (0x0003da7b) scroll_pane_cp23

0xc603,	// (0x0003b5e1) bg_button_pane_cp028_ParamLimits

0xc603,	// (0x0003b5e1) bg_button_pane_cp028

0x9149,	// (0x00038127) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9149,	// (0x00038127) cmail_ddmenu_btn01_pane_g1

0x9155,	// (0x00038133) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9155,	// (0x00038133) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003ee01) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003ee01) cmail_ddmenu_btn01_pane_g

0xeaa5,	// (0x0003da83) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa5,	// (0x0003da83) cmail_ddmenu_btn01_pane_t1

0xc603,	// (0x0003b5e1) bg_button_pane_cp029_ParamLimits

0xc603,	// (0x0003b5e1) bg_button_pane_cp029

0x9161,	// (0x0003813f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9161,	// (0x0003813f) cmail_ddmenu_btn02_pane_g1

0x9179,	// (0x00038157) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9179,	// (0x00038157) cmail_ddmenu_btn02_pane_t1

0xb0f1,	// (0x0003a0cf) bg_button_pane_cp031_ParamLimits

0xb0f1,	// (0x0003a0cf) bg_button_pane_cp031

0x9161,	// (0x0003813f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9161,	// (0x0003813f) cmail_ddmenu_btn03_pane_g1

0x9179,	// (0x00038157) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9179,	// (0x00038157) cmail_ddmenu_btn03_pane_t1

0x6357,	// (0x00035335) cell_dialer2_keypad_pane_t1_ParamLimits

0x6371,	// (0x0003534f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6371,	// (0x0003534f) cell_dialer2_keypad_pane_t1_copy1

0x7cef,	// (0x00036ccd) ncimui_group_button_pane

0xb0f1,	// (0x0003a0cf) main_sp_fs_calendar_pane_ParamLimits

0x8d6d,	// (0x00037d4b) list_single_cmail_header_caption_pane_ParamLimits

0xe7f6,	// (0x0003d7d4) aid_recal_txt_sm_pane

0x9e15,	// (0x00038df3) mian_recal_day_pane

0xe838,	// (0x0003d816) popup_sp_fs_cale_preview_window_ParamLimits

0xeaba,	// (0x0003da98) list_recal_day_pane

0xeafd,	// (0x0003dadb) list_single_recal_day_pane_ParamLimits

0xeafd,	// (0x0003dadb) list_single_recal_day_pane

0xeb0f,	// (0x0003daed) list_single_recal_day_pane_g1_ParamLimits

0xeb0f,	// (0x0003daed) list_single_recal_day_pane_g1

0xeb1b,	// (0x0003daf9) list_single_recal_day_pane_g2_ParamLimits

0xeb1b,	// (0x0003daf9) list_single_recal_day_pane_g2

0xeb27,	// (0x0003db05) list_single_recal_day_pane_g3_ParamLimits

0xeb27,	// (0x0003db05) list_single_recal_day_pane_g3

0x919d,	// (0x0003817b) list_single_recal_day_pane_g4_ParamLimits

0x919d,	// (0x0003817b) list_single_recal_day_pane_g4

0xeb33,	// (0x0003db11) list_single_recal_day_pane_g5_ParamLimits

0xeb33,	// (0x0003db11) list_single_recal_day_pane_g5

0xeb3f,	// (0x0003db1d) list_single_recal_day_pane_g6_ParamLimits

0xeb3f,	// (0x0003db1d) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003ee10) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003ee10) list_single_recal_day_pane_g

0xeb53,	// (0x0003db31) list_single_recal_day_pane_t1

0xeb65,	// (0x0003db43) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003ee1b) list_single_recal_day_pane_t

0x91b5,	// (0x00038193) ncimui_query_button_pane_ParamLimits

0x91b5,	// (0x00038193) ncimui_query_button_pane

0x91c5,	// (0x000381a3) ncimui_query_button_pane_t1_ParamLimits

0x91c5,	// (0x000381a3) ncimui_query_button_pane_t1

0xeb77,	// (0x0003db55) ncimui_query_button_pane_t2_ParamLimits

0xeb77,	// (0x0003db55) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003ee20) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003ee20) ncimui_query_button_pane_t

0x91d8,	// (0x000381b6) query_button_pane_ParamLimits

0x91d8,	// (0x000381b6) query_button_pane

0x9e15,	// (0x00038df3) bg_button_pane_cp0028

0xeb8a,	// (0x0003db68) query_button_pane_t1

0x00c2,	// (0x0002f0a0) main_tport_pane_ParamLimits

0x8c17,	// (0x00037bf5) bg_popup_window_pane_cp01_ParamLimits

0x8c17,	// (0x00037bf5) bg_popup_window_pane_cp01

0x8c30,	// (0x00037c0e) heading_pane_cp08_ParamLimits

0x8c30,	// (0x00037c0e) heading_pane_cp08

0x8c43,	// (0x00037c21) heading_pane_cp07_ParamLimits

0x8c43,	// (0x00037c21) heading_pane_cp07

0x8ce5,	// (0x00037cc3) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003ed6c) cell_tport_appsw_pane_g

0xb305,	// (0x0003a2e3) input_candi_list_open_g1

0xab6d,	// (0x00039b4b) list_cale_time_pane_g6_ParamLimits

0xab6d,	// (0x00039b4b) list_cale_time_pane_g6

0x503e,	// (0x0003401c) aid_size_touch_calib_1_ParamLimits

0x503e,	// (0x0003401c) aid_size_touch_calib_1

0x5050,	// (0x0003402e) aid_size_touch_calib_2_ParamLimits

0x5050,	// (0x0003402e) aid_size_touch_calib_2

0x5068,	// (0x00034046) aid_size_touch_calib_3_ParamLimits

0x5068,	// (0x00034046) aid_size_touch_calib_3

0x5086,	// (0x00034064) aid_size_touch_calib_4_ParamLimits

0x5086,	// (0x00034064) aid_size_touch_calib_4

0x509e,	// (0x0003407c) main_touch_calib_button_group_pane_ParamLimits

0x509e,	// (0x0003407c) main_touch_calib_button_group_pane

0x50b6,	// (0x00034094) main_touch_calib_pane_g1_ParamLimits

0x50c8,	// (0x000340a6) main_touch_calib_pane_g2_ParamLimits

0x50da,	// (0x000340b8) main_touch_calib_pane_g3_ParamLimits

0x50ec,	// (0x000340ca) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0003e72b) main_touch_calib_pane_g_ParamLimits

0x50fe,	// (0x000340dc) main_touch_calib_pane_t1_ParamLimits

0x5118,	// (0x000340f6) main_touch_calib_pane_t2_ParamLimits

0x5132,	// (0x00034110) main_touch_calib_pane_t3_ParamLimits

0x5146,	// (0x00034124) main_touch_calib_pane_t4_ParamLimits

0x515c,	// (0x0003413a) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0003e734) main_touch_calib_pane_t_ParamLimits

0xcd6e,	// (0x0003bd4c) list_single_fp_cale_pane_g3_ParamLimits

0xcd6e,	// (0x0003bd4c) list_single_fp_cale_pane_g3

0x157f,	// (0x0003055d) bg_button_pane_cp012_ParamLimits

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp03_ParamLimits

0x12f3,	// (0x000302d1) cell_vitu2_function_top_pane_g1_ParamLimits

0x157f,	// (0x0003055d) bg_vkb2_func_pane_cp04_ParamLimits

0x7c7a,	// (0x00036c58) main_ncimui_button_group_pane_ParamLimits

0x7c7a,	// (0x00036c58) main_ncimui_button_group_pane

0x7cda,	// (0x00036cb8) main_ncimui_pane_t3_ParamLimits

0x7cda,	// (0x00036cb8) main_ncimui_pane_t3

0xe759,	// (0x0003d737) phacti_button_group_pane

0xea89,	// (0x0003da67) aid_size_list_single_double_ParamLimits

0x911f,	// (0x000380fd) popup_ezdial_listscroll_window_ParamLimits

0x913b,	// (0x00038119) popup_number_entry_window_cp01_ParamLimits

0x91eb,	// (0x000381c9) phacti_button_pane_ParamLimits

0x91eb,	// (0x000381c9) phacti_button_pane

0x9e15,	// (0x00038df3) bg_button_pane_cp14

0xeb98,	// (0x0003db76) phacti_button_pane_t1

0x91fc,	// (0x000381da) main_touch_calib_button_pane_ParamLimits

0x91fc,	// (0x000381da) main_touch_calib_button_pane

0xa587,	// (0x00039565) bg_button_pane_cp18_ParamLimits

0xa587,	// (0x00039565) bg_button_pane_cp18

0xeba6,	// (0x0003db84) main_touch_calib_button_pane_t1_ParamLimits

0xeba6,	// (0x0003db84) main_touch_calib_button_pane_t1

0xebbc,	// (0x0003db9a) main_touch_calib_button_pane_t2_ParamLimits

0xebbc,	// (0x0003db9a) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003ee25) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003ee25) main_touch_calib_button_pane_t

0x9e15,	// (0x00038df3) cell_ncimui_button_pane

0x9e15,	// (0x00038df3) bg_button_pane_cp032

0xebda,	// (0x0003dbb8) cell_ncimui_button_pane_t1

0x638e,	// (0x0003536c) image3_infobar_pane_ParamLimits

0x638e,	// (0x0003536c) image3_infobar_pane

0x80ff,	// (0x000370dd) fs_bigclock_status_pane_ParamLimits

0x80ff,	// (0x000370dd) fs_bigclock_status_pane

0x810c,	// (0x000370ea) main_fs_bigclock_clock_pane_ParamLimits

0x810c,	// (0x000370ea) main_fs_bigclock_clock_pane

0x813e,	// (0x0003711c) main_fs_bigclock_indi_pane_ParamLimits

0x813e,	// (0x0003711c) main_fs_bigclock_indi_pane

0x817e,	// (0x0003715c) main_fs_bigclock_swipe_pane_ParamLimits

0x817e,	// (0x0003715c) main_fs_bigclock_swipe_pane

0x9e15,	// (0x00038df3) main_fs_clock_dumped_data

0x81ca,	// (0x000371a8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x81ca,	// (0x000371a8) list_single_fs_bigclock_indicator_pane_g1

0x81e3,	// (0x000371c1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x81e3,	// (0x000371c1) list_single_fs_bigclock_indicator_pane_g2

0x81fd,	// (0x000371db) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x81fd,	// (0x000371db) list_single_fs_bigclock_indicator_pane_g3

0x8217,	// (0x000371f5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8217,	// (0x000371f5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003ec52) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003ec52) list_single_fs_bigclock_indicator_pane_g

0x8246,	// (0x00037224) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8246,	// (0x00037224) list_single_fs_bigclock_indicator_pane_t1

0x826e,	// (0x0003724c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x826e,	// (0x0003724c) list_single_fs_bigclock_indicator_pane_t2

0x8296,	// (0x00037274) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8296,	// (0x00037274) list_single_fs_bigclock_indicator_pane_t3

0x82be,	// (0x0003729c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x82be,	// (0x0003729c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003ec5d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003ec5d) list_single_fs_bigclock_indicator_pane_t

0xebe8,	// (0x0003dbc6) image3_infobar_fav_pane_ParamLimits

0xebe8,	// (0x0003dbc6) image3_infobar_fav_pane

0xebf8,	// (0x0003dbd6) image3_infobar_loc_pane_ParamLimits

0xebf8,	// (0x0003dbd6) image3_infobar_loc_pane

0xec0e,	// (0x0003dbec) image3_infobar_time_pane_ParamLimits

0xec0e,	// (0x0003dbec) image3_infobar_time_pane

0xca3b,	// (0x0003ba19) image3_infobar_time_pane_g1

0xec1e,	// (0x0003dbfc) image3_infobar_time_pane_t1

0xca3b,	// (0x0003ba19) image3_infobar_loc_pane_g1

0xec2c,	// (0x0003dc0a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003ee2a) image3_infobar_loc_pane_g

0xec34,	// (0x0003dc12) image3_infobar_loc_pane_t1

0xca3b,	// (0x0003ba19) image3_infobar_fav_pane_g1

0xec42,	// (0x0003dc20) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003ee2f) image3_infobar_fav_pane_g

0xec4a,	// (0x0003dc28) fs_bigclock_status_battery_pane

0xec53,	// (0x0003dc31) fs_bigclock_status_signal_pane

0xec5c,	// (0x0003dc3a) fs_bigclock_status_title_pane

0xec65,	// (0x0003dc43) fs_bigclock_status_signal_pane_g1

0xec6e,	// (0x0003dc4c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003ee34) fs_bigclock_status_signal_pane_g

0xec76,	// (0x0003dc54) fs_bigclock_status_battery_pane_g1

0xec7f,	// (0x0003dc5d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003ee39) fs_bigclock_status_battery_pane_g

0xec87,	// (0x0003dc65) fs_bigclock_status_title_pane_t1

0x9211,	// (0x000381ef) main_fs_bigclock_clock_pane_g1

0x9211,	// (0x000381ef) main_fs_bigclock_clock_pane_g2

0x9224,	// (0x00038202) main_fs_bigclock_clock_pane_g3

0x9224,	// (0x00038202) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003ee3e) main_fs_bigclock_clock_pane_g

0x923b,	// (0x00038219) main_fs_bigclock_clock_pane_t1

0x9251,	// (0x0003822f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003ee47) main_fs_bigclock_clock_pane_t

0xec95,	// (0x0003dc73) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec95,	// (0x0003dc73) list_single_fs_bigclock_indicator_pane

0xeca6,	// (0x0003dc84) list_single_fs_bigclock_pane_ParamLimits

0xeca6,	// (0x0003dc84) list_single_fs_bigclock_pane

0xeccc,	// (0x0003dcaa) main_fs_bigclock_indicator_pane_t1

0xecdb,	// (0x0003dcb9) list_single_fs_bigclock_pane_g1

0xece3,	// (0x0003dcc1) list_single_fs_bigclock_pane_t1

0xca3b,	// (0x0003ba19) main_fs_bigclock_swipe_pane_g1

0xed26,	// (0x0003dd04) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003ee58) main_fs_bigclock_swipe_pane_g

0xed2e,	// (0x0003dd0c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed2e,	// (0x0003dd0c) main_fs_bigclock_swipe_pane_t1

0x360b,	// (0x000325e9) call_type_pane_ParamLimits

0x9e15,	// (0x00038df3) main_btmg_pane

0xe935,	// (0x0003d913) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe935,	// (0x0003d913) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003edcb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003edcb) list_single_cale_mrui_row_pane_g

0xeae3,	// (0x0003dac1) list_recal_vselct_arw_lo_pane

0xeaeb,	// (0x0003dac9) list_recal_vselct_arw_up_pane

0xeaf3,	// (0x0003dad1) list_recal_vselct_pane

0x92b3,	// (0x00038291) btmg_button_pane

0x92bd,	// (0x0003829b) main_btmg_pane_g1

0x9e15,	// (0x00038df3) bg_button_pane_cp044

0xed4b,	// (0x0003dd29) btmg_button_pane_t1

0xc5ef,	// (0x0003b5cd) aid_listscroll_gen

0xb0f1,	// (0x0003a0cf) main_cntbar_detail_pane

0xe5f0,	// (0x0003d5ce) list_cmail_folder_pane

0xd6e3,	// (0x0003c6c1) sp_fs_scroll_pane_cp03_ParamLimits

0xed59,	// (0x0003dd37) list_single_fs_dyc_pane_cp01_ParamLimits

0xed59,	// (0x0003dd37) list_single_fs_dyc_pane_cp01

0xed76,	// (0x0003dd54) aid_size_cmail_indent

0xed7f,	// (0x0003dd5d) list_single_dyc_row_pane_cp01

0x92fb,	// (0x000382d9) cntbar_detail_list_pane_ParamLimits

0x92fb,	// (0x000382d9) cntbar_detail_list_pane

0x934d,	// (0x0003832b) main_cntbar_detail_cont_pane_ParamLimits

0x934d,	// (0x0003832b) main_cntbar_detail_cont_pane

0xd6e3,	// (0x0003c6c1) scroll_pane_cp032_ParamLimits

0xd6e3,	// (0x0003c6c1) scroll_pane_cp032

0x9361,	// (0x0003833f) cntbar_detail_list_event_pane_ParamLimits

0x9361,	// (0x0003833f) cntbar_detail_list_event_pane

0x930d,	// (0x000382eb) cntbar_detail_list_shct_pane

0xa9f8,	// (0x000399d6) aid_list_gen

0xed88,	// (0x0003dd66) aid_scroll

0xed91,	// (0x0003dd6f) aid_size_touch_scroll_bar

0x746d,	// (0x0003644b) aid_list_double

0x745b,	// (0x00036439) aid_list_single

0x745b,	// (0x00036439) aid_list_single_lg

0x9371,	// (0x0003834f) aid_list_z_g_a_sm

0x9379,	// (0x00038357) aid_list_z_g_d

0x9381,	// (0x0003835f) aid_txt_z_prm

0x938f,	// (0x0003836d) aid_txt_z_prm_cp01

0x939d,	// (0x0003837b) aid_txt_z_sec

0x93ab,	// (0x00038389) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93ab,	// (0x00038389) main_cntbar_detail_cont_pane_g1

0x93bf,	// (0x0003839d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93bf,	// (0x0003839d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003ee5d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003ee5d) main_cntbar_detail_cont_pane_g

0xed9a,	// (0x0003dd78) main_cntbar_detail_cont_pane_t1

0xeda8,	// (0x0003dd86) main_cntbar_detail_cont_pane_t2

0xedb6,	// (0x0003dd94) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003ee62) main_cntbar_detail_cont_pane_t

0x93cf,	// (0x000383ad) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93cf,	// (0x000383ad) cell_cntbar_detail_list_shct_pane

0xedc4,	// (0x0003dda2) cntbar_detail_list_shct_pane_g1

0xedcd,	// (0x0003ddab) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003ee69) cntbar_detail_list_shct_pane_g

0x93e1,	// (0x000383bf) cntbar_detail_list_event_pane_g1_ParamLimits

0x93e1,	// (0x000383bf) cntbar_detail_list_event_pane_g1

0x93ed,	// (0x000383cb) cntbar_detail_list_event_pane_g2_ParamLimits

0x93ed,	// (0x000383cb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003ee6e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003ee6e) cntbar_detail_list_event_pane_g

0x945b,	// (0x00038439) cntbar_detail_list_event_pane_t1_ParamLimits

0x945b,	// (0x00038439) cntbar_detail_list_event_pane_t1

0x9470,	// (0x0003844e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9470,	// (0x0003844e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003ee7b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003ee7b) cntbar_detail_list_event_pane_t

0xca3b,	// (0x0003ba19) cell_cntbar_detail_list_shct_pane_g1

0xb162,	// (0x0003a140) navi_pane_mv_g3

0xb0f1,	// (0x0003a0cf) main_cntbar_detail_pane_ParamLimits

0x9e15,	// (0x00038df3) main_notif_wgt_pane

0x60d6,	// (0x000350b4) aid_tch_main_mp4_pane_g4

0x62de,	// (0x000352bc) popup_slider_window_cp02

0xead9,	// (0x0003dab7) list_recal_day_event_pane

0x92c7,	// (0x000382a5) cntbar_detail_btn_pane_ParamLimits

0x92c7,	// (0x000382a5) cntbar_detail_btn_pane

0x92e0,	// (0x000382be) cntbar_detail_btn_pane_cp01_ParamLimits

0x92e0,	// (0x000382be) cntbar_detail_btn_pane_cp01

0x930d,	// (0x000382eb) cntbar_detail_list_shct_pane_ParamLimits

0x931d,	// (0x000382fb) cntbar_detail_pane_g1_ParamLimits

0x931d,	// (0x000382fb) cntbar_detail_pane_g1

0x9331,	// (0x0003830f) cntbar_detail_pane_t1_ParamLimits

0x9331,	// (0x0003830f) cntbar_detail_pane_t1

0x93f9,	// (0x000383d7) cntbar_detail_list_event_pane_g3_ParamLimits

0x93f9,	// (0x000383d7) cntbar_detail_list_event_pane_g3

0x9411,	// (0x000383ef) cntbar_detail_list_event_pane_g4_ParamLimits

0x9411,	// (0x000383ef) cntbar_detail_list_event_pane_g4

0x9429,	// (0x00038407) cntbar_detail_list_event_pane_g5_ParamLimits

0x9429,	// (0x00038407) cntbar_detail_list_event_pane_g5

0x9441,	// (0x0003841f) cntbar_detail_list_event_pane_g6_ParamLimits

0x9441,	// (0x0003841f) cntbar_detail_list_event_pane_g6

0x9485,	// (0x00038463) cntbar_detail_list_event_pane_t3_ParamLimits

0x9485,	// (0x00038463) cntbar_detail_list_event_pane_t3

0x9497,	// (0x00038475) popup_notif_wgt_window_ParamLimits

0x9497,	// (0x00038475) popup_notif_wgt_window

0x94b0,	// (0x0003848e) popup_submenu_window_cp01_ParamLimits

0x94b0,	// (0x0003848e) popup_submenu_window_cp01

0xa738,	// (0x00039716) bg_popup_window_pane_cp10

0xedd6,	// (0x0003ddb4) listscroll_notif_wgt_pane

0xede8,	// (0x0003ddc6) list_notif_wgt_window

0xedf1,	// (0x0003ddcf) scroll_pane_cp033

0x94c4,	// (0x000384a2) list_notif_wgt_row_pane_ParamLimits

0x94c4,	// (0x000384a2) list_notif_wgt_row_pane

0xedfa,	// (0x0003ddd8) aid_size_list_notif_wgt_del

0xee07,	// (0x0003dde5) list_notif_wgt_row_pane_g1

0xee13,	// (0x0003ddf1) list_notif_wgt_row_pane_g2

0xee22,	// (0x0003de00) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003ee82) list_notif_wgt_row_pane_g

0xee2f,	// (0x0003de0d) list_notif_wgt_row_pane_t1

0xee45,	// (0x0003de23) list_notif_wgt_row_pane_t2

0xee57,	// (0x0003de35) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003ee89) list_notif_wgt_row_pane_t

0xd63b,	// (0x0003c619) list_recal_day_event_pane_g1

0xee69,	// (0x0003de47) list_recal_day_event_pane_t1

0x9e15,	// (0x00038df3) bg_button_pane_cp045

0x94d4,	// (0x000384b2) cntbar_detail_btn_pane_t1

0xc603,	// (0x0003b5e1) main_callh_pane_ParamLimits

0xc603,	// (0x0003b5e1) main_callh_pane

0x9e15,	// (0x00038df3) main_coverflow0_pane

0x9e15,	// (0x00038df3) main_wgtman_pane

0x819f,	// (0x0003717d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x819f,	// (0x0003717d) main_fs_bigclock_unlock_btn_pane

0x8cdd,	// (0x00037cbb) bg_button_pane_cp16

0x8ced,	// (0x00037ccb) cell_tport_appsw_pane_g3

0x94e2,	// (0x000384c0) cf0_flow_pane_ParamLimits

0x94e2,	// (0x000384c0) cf0_flow_pane

0xee78,	// (0x0003de56) listscroll_cf0_pane

0xee83,	// (0x0003de61) main_cf0_pane_g1

0x94f7,	// (0x000384d5) main_cf0_pane_t1_ParamLimits

0x94f7,	// (0x000384d5) main_cf0_pane_t1

0x950e,	// (0x000384ec) main_cf0_pane_t2_ParamLimits

0x950e,	// (0x000384ec) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003ee95) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003ee95) main_cf0_pane_t

0xee95,	// (0x0003de73) scroll_pane_cp11

0x9525,	// (0x00038503) cf0_flow_pane_g1

0x9531,	// (0x0003850f) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003ee9a) cf0_flow_pane_g

0x953d,	// (0x0003851b) cf0_flow_pane_t1

0x9e15,	// (0x00038df3) main_call6_pane

0x9e15,	// (0x00038df3) main_calllock_pane

0x142e,	// (0x0003040c) call6_btn_grp_pane_ParamLimits

0x142e,	// (0x0003040c) call6_btn_grp_pane

0x1448,	// (0x00030426) call6_pane_g1_ParamLimits

0x1448,	// (0x00030426) call6_pane_g1

0x1461,	// (0x0003043f) popup_call6_1st_window_ParamLimits

0x1461,	// (0x0003043f) popup_call6_1st_window

0x1475,	// (0x00030453) popup_call6_2nd_window_ParamLimits

0x1475,	// (0x00030453) popup_call6_2nd_window

0x1489,	// (0x00030467) cell_call6_btn_pane_ParamLimits

0x1489,	// (0x00030467) cell_call6_btn_pane

0xa738,	// (0x00039716) bg_popup_call2_in_pane_cp03

0xeea0,	// (0x0003de7e) popup_call6_1st_window_g1

0xeea8,	// (0x0003de86) popup_call6_1st_window_g2

0xeeb0,	// (0x0003de8e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003ee9f) popup_call6_1st_window_g

0xeeb8,	// (0x0003de96) popup_call6_1st_window_t1

0xeec7,	// (0x0003dea5) popup_call6_1st_window_t2

0xeed7,	// (0x0003deb5) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003eea6) popup_call6_1st_window_t

0xa738,	// (0x00039716) bg_popup_call2_in_pane_cp04

0xeea0,	// (0x0003de7e) popup_call6_2nd_window_g1

0xeea8,	// (0x0003de86) popup_call6_2nd_window_g2

0xeeb0,	// (0x0003de8e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003ee9f) popup_call6_2nd_window_g

0xeeb8,	// (0x0003de96) popup_call6_2nd_window_t1

0x1599,	// (0x00030577) bg_button_pane_cp15

0x954f,	// (0x0003852d) cell_call6_btn_pane_g1

0x9558,	// (0x00038536) cell_call6_btn_pane_t1

0x9567,	// (0x00038545) listscroll_wgtman_pane_ParamLimits

0x9567,	// (0x00038545) listscroll_wgtman_pane

0x9588,	// (0x00038566) wgtman_btn_pane_ParamLimits

0x9588,	// (0x00038566) wgtman_btn_pane

0xaf4c,	// (0x00039f2a) aid_scroll_copy1

0xeee7,	// (0x0003dec5) list_wgtman_pane

0x95cb,	// (0x000385a9) wgtman_btn_pane_g1_ParamLimits

0x95cb,	// (0x000385a9) wgtman_btn_pane_g1

0x95f7,	// (0x000385d5) wgtman_btn_pane_t1_ParamLimits

0x95f7,	// (0x000385d5) wgtman_btn_pane_t1

0xeef1,	// (0x0003decf) wgtman_btn_pane_t2_ParamLimits

0xeef1,	// (0x0003decf) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003eead) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003eead) wgtman_btn_pane_t

0x9634,	// (0x00038612) listrow_wgtman_pane_ParamLimits

0x9634,	// (0x00038612) listrow_wgtman_pane

0x9648,	// (0x00038626) listrow_wgtman_pane_g1

0x9655,	// (0x00038633) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003eeb2) listrow_wgtman_pane_g

0x9673,	// (0x00038651) listrow_wgtman_pane_t1

0x968b,	// (0x00038669) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003eeb7) listrow_wgtman_pane_t

0x96b1,	// (0x0003868f) wait_bar_pane_cp09

0xef08,	// (0x0003dee6) main_calllock_btn_pane

0xef12,	// (0x0003def0) main_calllock_pane_g1

0x9e15,	// (0x00038df3) bg_button_pane_cp17

0xef1e,	// (0x0003defc) main_calllock_btn_pane_g1

0xef27,	// (0x0003df05) main_calllock_btn_pane_t1

0x9e15,	// (0x00038df3) main_dialer3_pane

0x9e15,	// (0x00038df3) main_fmrd2_pane

0xca3b,	// (0x0003ba19) main_fs_bigclock_unlock_btn_pane_g1

0x96cb,	// (0x000386a9) main_fs_bigclock_unlock_btn_pane_t1

0x96d9,	// (0x000386b7) area_fmrd2_info_pane_ParamLimits

0x96d9,	// (0x000386b7) area_fmrd2_info_pane

0x96ea,	// (0x000386c8) area_fmrd2_visual_pane_ParamLimits

0x96ea,	// (0x000386c8) area_fmrd2_visual_pane

0x96f8,	// (0x000386d6) fmrd2_indi_pane_ParamLimits

0x96f8,	// (0x000386d6) fmrd2_indi_pane

0x9705,	// (0x000386e3) area_fmrd2_visual_pane_g1

0x970d,	// (0x000386eb) area_fmrd2_visual_pane_t1

0x971d,	// (0x000386fb) area_fmrd2_visual_pane_t2

0x972d,	// (0x0003870b) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003eec1) area_fmrd2_visual_pane_t

0x973d,	// (0x0003871b) area_fmrd2_info_pane_g1

0x9745,	// (0x00038723) area_fmrd2_info_pane_t1

0x9755,	// (0x00038733) area_fmrd2_info_pane_t2

0x9765,	// (0x00038743) area_fmrd2_info_pane_t3

0x9775,	// (0x00038753) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003eec8) area_fmrd2_info_pane_t

0x9785,	// (0x00038763) fmrd2_indi_pane_t1

0x9795,	// (0x00038773) fmrd2_indi_pane_t2

0x97a5,	// (0x00038783) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003eed1) fmrd2_indi_pane_t

0x8228,	// (0x00037206) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8228,	// (0x00037206) list_single_fs_bigclock_indicator_pane_g5

0x82dd,	// (0x000372bb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x82dd,	// (0x000372bb) list_single_fs_bigclock_indicator_pane_t5

0x8e5e,	// (0x00037e3c) aid_cell_bcale_month_pane_ParamLimits

0x8e5e,	// (0x00037e3c) aid_cell_bcale_month_pane

0x8e7c,	// (0x00037e5a) bcale_month_pane_ParamLimits

0x8e7c,	// (0x00037e5a) bcale_month_pane

0x8ea0,	// (0x00037e7e) bcale_preview_pane_ParamLimits

0x8ea0,	// (0x00037e7e) bcale_preview_pane

0xece3,	// (0x0003dcc1) list_single_fs_bigclock_pane_t1_ParamLimits

0xed02,	// (0x0003dce0) list_single_fs_bigclock_pane_t2_ParamLimits

0xed02,	// (0x0003dce0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003ee53) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003ee53) list_single_fs_bigclock_pane_t

0x96c3,	// (0x000386a1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003eebc) main_fs_bigclock_unlock_btn_pane_g

0x97b5,	// (0x00038793) aid_dia3_key_size_ParamLimits

0x97b5,	// (0x00038793) aid_dia3_key_size

0x97c9,	// (0x000387a7) aid_dia3_listrow_size_ParamLimits

0x97c9,	// (0x000387a7) aid_dia3_listrow_size

0x97e3,	// (0x000387c1) dia3_keypad_fun_pane_ParamLimits

0x97e3,	// (0x000387c1) dia3_keypad_fun_pane

0x97ff,	// (0x000387dd) dia3_keypad_num_pane_ParamLimits

0x97ff,	// (0x000387dd) dia3_keypad_num_pane

0x981b,	// (0x000387f9) dia3_listscroll_pane_ParamLimits

0x981b,	// (0x000387f9) dia3_listscroll_pane

0x9831,	// (0x0003880f) dia3_numentry_pane_ParamLimits

0x9831,	// (0x0003880f) dia3_numentry_pane

0xef36,	// (0x0003df14) dia3_list_pane

0x984a,	// (0x00038828) scroll_pane_cp12

0x9e15,	// (0x00038df3) bg_dia3_numentry_pane

0x9855,	// (0x00038833) dia3_numentry_pane_t1

0x9864,	// (0x00038842) cell_dia3_key_num_pane

0x986c,	// (0x0003884a) cell_dia3_key0_fun_pane_ParamLimits

0x986c,	// (0x0003884a) cell_dia3_key0_fun_pane

0x9880,	// (0x0003885e) cell_dia3_key1_fun_pane_ParamLimits

0x9880,	// (0x0003885e) cell_dia3_key1_fun_pane

0x9897,	// (0x00038875) dia3_listrow_pane

0xdfbb,	// (0x0003cf99) bg_dia3_numentry_pane_g1

0x9e15,	// (0x00038df3) bg_button_pane_cp21

0x98a9,	// (0x00038887) cell_dia3_key_num_pane_t1

0x98b7,	// (0x00038895) cell_dia3_key_num_pane_t2

0x98c6,	// (0x000388a4) cell_dia3_key_num_pane_t3

0x98d5,	// (0x000388b3) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003eed8) cell_dia3_key_num_pane_t

0x9e15,	// (0x00038df3) bg_button_pane_cp19

0x98e4,	// (0x000388c2) cell_dia3_key0_fun_pane_g1

0x9e15,	// (0x00038df3) bg_button_pane_cp20

0x98e4,	// (0x000388c2) cell_dia3_key1_fun_pane_g1

0x98ec,	// (0x000388ca) area_left_week_number_pane

0x98fa,	// (0x000388d8) area_top_day_name_pane

0x990d,	// (0x000388eb) frame_month_view_pane

0xef41,	// (0x0003df1f) grid_month_view_pane

0x9922,	// (0x00038900) cell_top_day_name_pane_ParamLimits

0x9922,	// (0x00038900) cell_top_day_name_pane

0x9951,	// (0x0003892f) cell_area_left_week_number_pane_ParamLimits

0x9951,	// (0x0003892f) cell_area_left_week_number_pane

0x9967,	// (0x00038945) cell_month_view_pane_ParamLimits

0x9967,	// (0x00038945) cell_month_view_pane

0xef4f,	// (0x0003df2d) frm_month_g1

0x9998,	// (0x00038976) frm_month_g2

0x99ab,	// (0x00038989) frm_month_g3

0x99be,	// (0x0003899c) frm_month_g4

0x99d1,	// (0x000389af) frm_month_g5

0x99e4,	// (0x000389c2) frm_month_g6

0x99f9,	// (0x000389d7) frm_month_g7

0xef5c,	// (0x0003df3a) frm_month_g8

0x9a0e,	// (0x000389ec) frm_month_g9

0x9a1e,	// (0x000389fc) frm_month_g10

0x9a2e,	// (0x00038a0c) frm_month_g11

0x9a3e,	// (0x00038a1c) frm_month_g12

0x9a50,	// (0x00038a2e) frm_month_g13

0x9a64,	// (0x00038a42) frm_month_g14

0x9a78,	// (0x00038a56) frm_month_g15

0x9a8c,	// (0x00038a6a) frm_month_g16

0x000f,

0xff03,	// (0x0003eee1) frm_month_g

0xef69,	// (0x0003df47) cell_top_day_name_pane_t1

0x9aa0,	// (0x00038a7e) cell_area_left_week_number_pane_g1

0x9aac,	// (0x00038a8a) cell_area_left_week_number_pane_t1

0xcc62,	// (0x0003bc40) cell_month_view_pane_g1

0x9abf,	// (0x00038a9d) cell_month_view_pane_t1

0x9e15,	// (0x00038df3) main_fps_pane

0xe401,	// (0x0003d3df) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe401,	// (0x0003d3df) cmail_ddmenu_btn02_pane_cp1

0xe41d,	// (0x0003d3fb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe41d,	// (0x0003d3fb) cmail_ddmenu_btn02_pane_cp2

0x916d,	// (0x0003814b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x916d,	// (0x0003814b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003ee06) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003ee06) cmail_ddmenu_btn02_pane_g

0x918b,	// (0x00038169) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x918b,	// (0x00038169) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003ee0b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003ee0b) cmail_ddmenu_btn02_pane_t

0x9ad2,	// (0x00038ab0) fps_text_pane_ParamLimits

0x9ad2,	// (0x00038ab0) fps_text_pane

0x9ae9,	// (0x00038ac7) main_fps_pane_g1_ParamLimits

0x9ae9,	// (0x00038ac7) main_fps_pane_g1

0x9b01,	// (0x00038adf) wait_bar_pane_cp010_ParamLimits

0x9b01,	// (0x00038adf) wait_bar_pane_cp010

0x9b14,	// (0x00038af2) fps_text_pane_t1_ParamLimits

0x9b14,	// (0x00038af2) fps_text_pane_t1

0xe9d0,	// (0x0003d9ae) cam4_image_uncrop_pane_g1

0xe9d9,	// (0x0003d9b7) cam4_image_uncrop_pane_g2

0x6508,	// (0x000354e6) cam4_image_uncrop_pane_g3

0x6511,	// (0x000354ef) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003e8cc) cam4_image_uncrop_pane_g

0x9897,	// (0x00038875) dia3_listrow_pane_ParamLimits

0x9e15,	// (0x00038df3) main_phob2_pane

0x8cb0,	// (0x00037c8e) cell_tport_appsw_pane_cp02_ParamLimits

0x8cb0,	// (0x00037c8e) cell_tport_appsw_pane_cp02

0x8cc4,	// (0x00037ca2) cell_tport_appsw_pane_cp03_ParamLimits

0x8cc4,	// (0x00037ca2) cell_tport_appsw_pane_cp03

0x9e15,	// (0x00038df3) phob2_contact_card_pane

0x9e15,	// (0x00038df3) phob2_listscroll_pane

0xef7c,	// (0x0003df5a) phob2_list_pane

0xef84,	// (0x0003df62) scroll_pane_cp034

0x9b2c,	// (0x00038b0a) phob2_cc_data_pane_ParamLimits

0x9b2c,	// (0x00038b0a) phob2_cc_data_pane

0x9b45,	// (0x00038b23) phob2_cc_listscroll_pane_ParamLimits

0x9b45,	// (0x00038b23) phob2_cc_listscroll_pane

0x9634,	// (0x00038612) list_double_large_graphic_phob2_pane_ParamLimits

0x9634,	// (0x00038612) list_double_large_graphic_phob2_pane

0x9b67,	// (0x00038b45) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b67,	// (0x00038b45) list_double_large_graphic_phob2_pane_g1

0x9b7d,	// (0x00038b5b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b7d,	// (0x00038b5b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003ef02) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003ef02) list_double_large_graphic_phob2_pane_g

0x9b89,	// (0x00038b67) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b89,	// (0x00038b67) list_double_large_graphic_phob2_pane_t1

0x9b9e,	// (0x00038b7c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b9e,	// (0x00038b7c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003ef07) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003ef07) list_double_large_graphic_phob2_pane_t

0x9e15,	// (0x00038df3) list_highlight_pane_cp024

0x9bb0,	// (0x00038b8e) phob2_cc_button_pane

0x9bba,	// (0x00038b98) phob2_cc_data_pane_g1_ParamLimits

0x9bba,	// (0x00038b98) phob2_cc_data_pane_g1

0x9bd2,	// (0x00038bb0) phob2_cc_data_pane_g2_ParamLimits

0x9bd2,	// (0x00038bb0) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003ef0c) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003ef0c) phob2_cc_data_pane_g

0x9be2,	// (0x00038bc0) phob2_cc_data_pane_t1_ParamLimits

0x9be2,	// (0x00038bc0) phob2_cc_data_pane_t1

0x9c04,	// (0x00038be2) phob2_cc_data_pane_t2_ParamLimits

0x9c04,	// (0x00038be2) phob2_cc_data_pane_t2

0x9c26,	// (0x00038c04) phob2_cc_data_pane_t3_ParamLimits

0x9c26,	// (0x00038c04) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003ef11) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003ef11) phob2_cc_data_pane_t

0xef8c,	// (0x0003df6a) phob2_cc_list_pane_ParamLimits

0xef8c,	// (0x0003df6a) phob2_cc_list_pane

0xd739,	// (0x0003c717) scroll_pane_cp035_ParamLimits

0xd739,	// (0x0003c717) scroll_pane_cp035

0xb0f1,	// (0x0003a0cf) bg_button_pane_cp033

0xef98,	// (0x0003df76) phob2_cc_button_pane_g1

0xefa4,	// (0x0003df82) phob2_cc_button_pane_t1

0xefb9,	// (0x0003df97) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003ef18) phob2_cc_button_pane_t

0x9c48,	// (0x00038c26) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c48,	// (0x00038c26) list_double_large_graphic_phob2_cc_pane

0x9c86,	// (0x00038c64) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c86,	// (0x00038c64) list_double_large_graphic_phob2_cc_pane_g1

0x9c92,	// (0x00038c70) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c92,	// (0x00038c70) list_double_large_graphic_phob2_cc_pane_g2

0x9c9e,	// (0x00038c7c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c9e,	// (0x00038c7c) list_double_large_graphic_phob2_cc_pane_g3

0x9caa,	// (0x00038c88) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9caa,	// (0x00038c88) list_double_large_graphic_phob2_cc_pane_g4

0x9cb6,	// (0x00038c94) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9cb6,	// (0x00038c94) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003ef1d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003ef1d) list_double_large_graphic_phob2_cc_pane_g

0x9cc2,	// (0x00038ca0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9cc2,	// (0x00038ca0) list_double_large_graphic_phob2_cc_pane_t1

0x9ceb,	// (0x00038cc9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ceb,	// (0x00038cc9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003ef28) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003ef28) list_double_large_graphic_phob2_cc_pane_t

0xefcb,	// (0x0003dfa9) list_highlight_pane_cp025_ParamLimits

0xefcb,	// (0x0003dfa9) list_highlight_pane_cp025

0xb0f1,	// (0x0003a0cf) bg_button_pane_cp033_ParamLimits

0xef98,	// (0x0003df76) phob2_cc_button_pane_g1_ParamLimits

0xefa4,	// (0x0003df82) phob2_cc_button_pane_t1_ParamLimits

0xefb9,	// (0x0003df97) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003ef18) phob2_cc_button_pane_t_ParamLimits

0x158d,	// (0x0003056b) popup_wgtman_window

0xd515,	// (0x0003c4f3) scroll_pane_cp038

0x95ad,	// (0x0003858b) wgtman_btn_pane_cp_01_ParamLimits

0x95ad,	// (0x0003858b) wgtman_btn_pane_cp_01

0xefd9,	// (0x0003dfb7) wgtman_content_pane

0xefe2,	// (0x0003dfc0) wgtman_heading_pane

0x9e15,	// (0x00038df3) bg_heading_pane_cp02

0xefeb,	// (0x0003dfc9) wgtman_heading_pane_g1

0xeff3,	// (0x0003dfd1) wgtman_heading_pane_t1

0xf001,	// (0x0003dfdf) scroll_pane_cp036

0xf009,	// (0x0003dfe7) wgtman_list_pane

0xe9e4,	// (0x0003d9c2) wgtman_list_pane_t1_ParamLimits

0xe9e4,	// (0x0003d9c2) wgtman_list_pane_t1

0x64f2,	// (0x000354d0) cam4_grid_pane

0x6f27,	// (0x00035f05) bg_button_pane_cp015_ParamLimits

0x6f3b,	// (0x00035f19) bg_button_pane_cp016_ParamLimits

0x6f4e,	// (0x00035f2c) bg_button_pane_cp017_ParamLimits

0x6fa6,	// (0x00035f84) popup_vitu2_query_window_g3_ParamLimits

0x6fa6,	// (0x00035f84) popup_vitu2_query_window_g3

0x7063,	// (0x00036041) popup_vitu2_query_window_t6_ParamLimits

0x7063,	// (0x00036041) popup_vitu2_query_window_t6

0x708e,	// (0x0003606c) popup_vitu2_query_window_t7_ParamLimits

0x708e,	// (0x0003606c) popup_vitu2_query_window_t7

0xe9d0,	// (0x0003d9ae) cam4_grid_pane_g1

0xe9d9,	// (0x0003d9b7) cam4_grid_pane_g2

0xf011,	// (0x0003dfef) cam4_grid_pane_g3

0xf01a,	// (0x0003dff8) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003ef2d) cam4_grid_pane_g

0x237f,	// (0x0003135d) aid_placing_vt_slider_lsc_ParamLimits

0x266c,	// (0x0003164a) vidtel_button_pane_ParamLimits

0x266c,	// (0x0003164a) vidtel_button_pane

0x9e15,	// (0x00038df3) bg_button_pane_cp034

0xf025,	// (0x0003e003) vidtel_button_pane_g1

0xf02d,	// (0x0003e00b) vidtel_button_pane_t1

0xd619,	// (0x0003c5f7) aid_size_vtel_slider_touch

0xd739,	// (0x0003c717) scroll_pane_cp039

0x7e58,	// (0x00036e36) ncim_query_button_pane_cp01_ParamLimits

0x7e77,	// (0x00036e55) ncimui_query_pane_g1_ParamLimits

0xb0f1,	// (0x0003a0cf) input_focus_pane_cp012_ParamLimits

0xdff9,	// (0x0003cfd7) ncim_query_entry_pane_t1_ParamLimits

0xd739,	// (0x0003c717) scroll_pane_cp039_ParamLimits

0xb023,	// (0x0003a001) navi_pane_bcale_mc_g1

0xb02b,	// (0x0003a009) navi_pane_bcale_mc_t1

0xe468,	// (0x0003d446) main_sp_fs_email_pane_g1

0xe474,	// (0x0003d452) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003ecc3) main_sp_fs_email_pane_g

0xe941,	// (0x0003d91f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe941,	// (0x0003d91f) list_single_cale_mrui_row_pane_g3

0x91ab,	// (0x00038189) list_single_recal_day_pane_g5_event_pane

0xeb4b,	// (0x0003db29) list_single_recal_day_pane_g7

0xf043,	// (0x0003e021) list_recal_day_event_pane_cp01

0xf04c,	// (0x0003e02a) list_recal_vselct_arw_lo_pane_cp01

0xf054,	// (0x0003e032) list_recal_vselct_arw_up_pane_cp01

0xf05c,	// (0x0003e03a) list_recal_vselct_pane_cp01

0xd63b,	// (0x0003c619) list_recal_day_event_pane_cp01_g1

0xf066,	// (0x0003e044) list_recal_day_event_pane_cp01_t1

0xeb53,	// (0x0003db31) list_single_recal_day_pane_t1_ParamLimits

0xeb65,	// (0x0003db43) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003ee1b) list_single_recal_day_pane_t_ParamLimits

0xa4c2,	// (0x000394a0) bg_notes_pane_ParamLimits

0xa565,	// (0x00039543) list_notes_pane_ParamLimits

0x17cf,	// (0x000307ad) scroll_pane_cp06_ParamLimits

0xa587,	// (0x00039565) main_notes_pane_ParamLimits

0x9e15,	// (0x00038df3) main_welc_pane

0x9d14,	// (0x00038cf2) main_welc_body_pane_ParamLimits

0x9d14,	// (0x00038cf2) main_welc_body_pane

0x9d33,	// (0x00038d11) main_welc_opti_pane_ParamLimits

0x9d33,	// (0x00038d11) main_welc_opti_pane

0x9d7c,	// (0x00038d5a) main_welc_pane_t1_ParamLimits

0x9d7c,	// (0x00038d5a) main_welc_pane_t1

0xf074,	// (0x0003e052) main_welc_body_row_pane_ParamLimits

0xf074,	// (0x0003e052) main_welc_body_row_pane

0xd6d5,	// (0x0003c6b3) main_welc_opti_row_pane_ParamLimits

0xd6d5,	// (0x0003c6b3) main_welc_opti_row_pane

0xf08b,	// (0x0003e069) main_welc_opti_row_pane_g1

0x9d9e,	// (0x00038d7c) main_welc_opti_row_pane_t1

0xf093,	// (0x0003e071) main_welc_body_row_pane_t1

0xede0,	// (0x0003ddbe) popup_notif_wgt_heading_pane

0xedfa,	// (0x0003ddd8) aid_size_list_notif_wgt_del_ParamLimits

0xee07,	// (0x0003dde5) list_notif_wgt_row_pane_g1_ParamLimits

0xee13,	// (0x0003ddf1) list_notif_wgt_row_pane_g2_ParamLimits

0xee22,	// (0x0003de00) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003ee82) list_notif_wgt_row_pane_g_ParamLimits

0xee2f,	// (0x0003de0d) list_notif_wgt_row_pane_t1_ParamLimits

0xee45,	// (0x0003de23) list_notif_wgt_row_pane_t2_ParamLimits

0xee57,	// (0x0003de35) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003ee89) list_notif_wgt_row_pane_t_ParamLimits

0x9648,	// (0x00038626) listrow_wgtman_pane_g1_ParamLimits

0x9655,	// (0x00038633) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003eeb2) listrow_wgtman_pane_g_ParamLimits

0x9673,	// (0x00038651) listrow_wgtman_pane_t1_ParamLimits

0x968b,	// (0x00038669) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003eeb7) listrow_wgtman_pane_t_ParamLimits

0x96b1,	// (0x0003868f) wait_bar_pane_cp09_ParamLimits

0x9e15,	// (0x00038df3) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0003e080) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0003e088) popup_notif_wgt_heading_pane_t1

0x9e15,	// (0x00038df3) main_vids_pane

0x9e15,	// (0x00038df3) vids_listscroll_pane

0x9dad,	// (0x00038d8b) scroll_pane_cp040

0x9e15,	// (0x00038df3) vids_list_pane

0x9db8,	// (0x00038d96) vids_list_double_pane_ParamLimits

0x9db8,	// (0x00038d96) vids_list_double_pane

0x9dc9,	// (0x00038da7) vids_list_double_pane_g1

0x9dd2,	// (0x00038db0) vids_list_double_pane_t1

0x9de2,	// (0x00038dc0) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003ef3b) vids_list_double_pane_t

0x157f,	// (0x0003055d) main_ncimui_pane_ParamLimits

0x7c8e,	// (0x00036c6c) main_ncimui_pane_g1_ParamLimits

0x7c9a,	// (0x00036c78) main_ncimui_pane_g2_ParamLimits

0x7c9a,	// (0x00036c78) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003ebc8) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003ebc8) main_ncimui_pane_g

0x9d52,	// (0x00038d30) main_welc_pane_g1_ParamLimits

0x9d52,	// (0x00038d30) main_welc_pane_g1

0x9d67,	// (0x00038d45) main_welc_pane_g2_ParamLimits

0x9d67,	// (0x00038d45) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003ef36) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003ef36) main_welc_pane_g

0xa4c2,	// (0x000394a0) listscroll_mce_pane_ParamLimits

0xb1a2,	// (0x0003a180) wait_bar_pane_cp10

0xc5f7,	// (0x0003b5d5) main_cale_day_pane_ParamLimits

0xc5f7,	// (0x0003b5d5) main_cale_week_pane_ParamLimits

0xa4c2,	// (0x000394a0) main_messa_pane_ParamLimits

0x5aa7,	// (0x00034a85) main_clock2_btn_pane_ParamLimits

0x5aa7,	// (0x00034a85) main_clock2_btn_pane

0xcdf6,	// (0x0003bdd4) main_clock2_btn_pane_cp01_ParamLimits

0xcdf6,	// (0x0003bdd4) main_clock2_btn_pane_cp01

0xe8cd,	// (0x0003d8ab) list_cale_mrui_pane_ParamLimits

0xee8d,	// (0x0003de6b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003ee90) main_cf0_pane_g

0x98ec,	// (0x000388ca) area_left_week_number_pane_ParamLimits

0x98fa,	// (0x000388d8) area_top_day_name_pane_ParamLimits

0x990d,	// (0x000388eb) frame_month_view_pane_ParamLimits

0xef41,	// (0x0003df1f) grid_month_view_pane_ParamLimits

0xef4f,	// (0x0003df2d) frm_month_g1_ParamLimits

0x9998,	// (0x00038976) frm_month_g2_ParamLimits

0x99ab,	// (0x00038989) frm_month_g3_ParamLimits

0x99be,	// (0x0003899c) frm_month_g4_ParamLimits

0x99d1,	// (0x000389af) frm_month_g5_ParamLimits

0x99e4,	// (0x000389c2) frm_month_g6_ParamLimits

0x99f9,	// (0x000389d7) frm_month_g7_ParamLimits

0xef5c,	// (0x0003df3a) frm_month_g8_ParamLimits

0x9a0e,	// (0x000389ec) frm_month_g9_ParamLimits

0x9a1e,	// (0x000389fc) frm_month_g10_ParamLimits

0x9a2e,	// (0x00038a0c) frm_month_g11_ParamLimits

0x9a3e,	// (0x00038a1c) frm_month_g12_ParamLimits

0x9a50,	// (0x00038a2e) frm_month_g13_ParamLimits

0x9a64,	// (0x00038a42) frm_month_g14_ParamLimits

0x9a78,	// (0x00038a56) frm_month_g15_ParamLimits

0x9a8c,	// (0x00038a6a) frm_month_g16_ParamLimits

0xff03,	// (0x0003eee1) frm_month_g_ParamLimits

0xef69,	// (0x0003df47) cell_top_day_name_pane_t1_ParamLimits

0x9aa0,	// (0x00038a7e) cell_area_left_week_number_pane_g1_ParamLimits

0x9aac,	// (0x00038a8a) cell_area_left_week_number_pane_t1_ParamLimits

0xcc62,	// (0x0003bc40) cell_month_view_pane_g1_ParamLimits

0x9abf,	// (0x00038a9d) cell_month_view_pane_t1_ParamLimits

0xa4ba,	// (0x00039498) main_clock2_btn_pane_g1

0xf0b8,	// (0x0003e096) main_clock2_btn_pane_t1

0xb0f1,	// (0x0003a0cf) listscroll_cmail_pane_ParamLimits

0xe468,	// (0x0003d446) main_sp_fs_email_pane_g1_ParamLimits

0xe474,	// (0x0003d452) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003ecc3) main_sp_fs_email_pane_g_ParamLimits

0xeaba,	// (0x0003da98) list_recal_day_pane_ParamLimits

0xeacb,	// (0x0003daa9) mian_recal_day_pane_t1

0x8924,	// (0x00037902) list_single_dyc_row_text_pane_t4_ParamLimits

0x8924,	// (0x00037902) list_single_dyc_row_text_pane_t4

0x896d,	// (0x0003794b) list_single_dyc_row_text_pane_t5_ParamLimits

0x896d,	// (0x0003794b) list_single_dyc_row_text_pane_t5

0xe51e,	// (0x0003d4fc) list_single_dyc_row_text_pane_t6_ParamLimits

0xe51e,	// (0x0003d4fc) list_single_dyc_row_text_pane_t6

0x347b,	// (0x00032459) aid_mgn_list_cale_time_pane

0x157f,	// (0x0003055d) main_gallery2_pane_ParamLimits

0xce0a,	// (0x0003bde8) main_clock2_pane_cp01_t1

0xce18,	// (0x0003bdf6) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0003e79e) main_clock2_pane_cp01_t

0x1bc2,	// (0x00030ba0) cale_week_scroll_pane_g16_ParamLimits

0x1bc2,	// (0x00030ba0) cale_week_scroll_pane_g16

0xa738,	// (0x00039716) vorec_slider_pane

0xf02d,	// (0x0003e00b) vidtel_button_pane_t1_ParamLimits

0x9211,	// (0x000381ef) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9211,	// (0x000381ef) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9224,	// (0x00038202) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9224,	// (0x00038202) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0003ee3e) main_fs_bigclock_clock_pane_g_ParamLimits

0x923b,	// (0x00038219) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9251,	// (0x0003822f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0003ee47) main_fs_bigclock_clock_pane_t_ParamLimits

0x521e,	// (0x000341fc) main_mup3_lyrics_pane_ParamLimits

0x521e,	// (0x000341fc) main_mup3_lyrics_pane

0x9df2,	// (0x00038dd0) main_mup3_lyrics_pane_t1_ParamLimits

0x9df2,	// (0x00038dd0) main_mup3_lyrics_pane_t1

0x60c0,	// (0x0003509e) aid_main_mp4_pane_t1_area

0x60ca,	// (0x000350a8) aid_main_mp4_pane_t2_area

0x6176,	// (0x00035154) main_mp4_pane_g7_ParamLimits

0x6176,	// (0x00035154) main_mp4_pane_g7

0x6182,	// (0x00035160) main_mp4_pane_g8_ParamLimits

0x6182,	// (0x00035160) main_mp4_pane_g8

0x63f4,	// (0x000353d2) aid_call6_pane_g1_size

0x9c76,	// (0x00038c54) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9c76,	// (0x00038c54) list_double_large_graphic_phob2_other_pane

0x9e0d,	// (0x00038deb) list_double_large_graphic_phob2_other_pane_g1

0x9e15,	// (0x00038df3) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal

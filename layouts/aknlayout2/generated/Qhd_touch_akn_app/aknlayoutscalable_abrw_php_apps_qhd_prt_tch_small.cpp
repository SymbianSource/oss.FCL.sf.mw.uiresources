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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00053bab };

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
0x42c3,	// (0x00057e6e) Screen

0x42cf,	// (0x00057e7a) application_window

0x432b,	// (0x00057ed6) area_bottom_pane_ParamLimits

0x432b,	// (0x00057ed6) area_bottom_pane

0x4383,	// (0x00057f2e) area_top_pane_ParamLimits

0x4383,	// (0x00057f2e) area_top_pane

0x43e7,	// (0x00057f92) call_video_uplink_pane_ParamLimits

0x43e7,	// (0x00057f92) call_video_uplink_pane

0x4426,	// (0x00057fd1) main_pane_ParamLimits

0x4426,	// (0x00057fd1) main_pane

0xdd55,	// (0x00061900) context_pane

0x721a,	// (0x0005adc5) navi_pane

0x7240,	// (0x0005adeb) popup_cale_events_window_ParamLimits

0x7240,	// (0x0005adeb) popup_cale_events_window

0xdd68,	// (0x00061913) popup_mup_playback_window

0x7258,	// (0x0005ae03) signal_pane

0x2505,	// (0x000560b0) main_browser_pane

0x26de,	// (0x00056289) main_burst_pane

0x7098,	// (0x0005ac43) main_calc_pane

0xdd49,	// (0x000618f4) main_cale_day_pane

0x4999,	// (0x00058544) main_cale_month_pane

0xdd49,	// (0x000618f4) main_cale_week_pane

0x26de,	// (0x00056289) main_call_pane

0x1c0b,	// (0x000557b6) main_call_poc_pane

0x26de,	// (0x00056289) main_camera_pane

0x26de,	// (0x00056289) main_chi_dic_pane

0x2ebb,	// (0x00056a66) main_clock_pane

0x1c0b,	// (0x000557b6) main_fmradio_pane

0x26de,	// (0x00056289) main_graph_messa_pane

0x1c0b,	// (0x000557b6) main_help_pane

0x2505,	// (0x000560b0) main_im_pane

0x2418,	// (0x00055fc3) main_image_pane_ParamLimits

0x2418,	// (0x00055fc3) main_image_pane

0x1c0b,	// (0x000557b6) main_location2_pane

0x26de,	// (0x00056289) main_location_pane

0x2418,	// (0x00055fc3) main_messa_pane

0x1c0b,	// (0x000557b6) main_mp2_pane

0x26de,	// (0x00056289) main_mp_pane

0x1c0b,	// (0x000557b6) main_msg_pane

0x1c0b,	// (0x000557b6) main_mup_eq_pane

0x1c0b,	// (0x000557b6) main_mup_pane

0x2505,	// (0x000560b0) main_notes_pane

0x1c0b,	// (0x000557b6) main_pec_pane

0x1c0b,	// (0x000557b6) main_phob_pane

0x1c0b,	// (0x000557b6) main_pinb_pane

0x1c0b,	// (0x000557b6) main_postcard_pane

0x1c0b,	// (0x000557b6) main_qdial_pane

0x26de,	// (0x00056289) main_skin_pane

0x1c0b,	// (0x000557b6) main_smil2_pane

0x26de,	// (0x00056289) main_smil_pane

0x26de,	// (0x00056289) main_video_pane

0x26de,	// (0x00056289) main_video_tele_pane

0x2418,	// (0x00055fc3) main_viewer_pane_ParamLimits

0x2418,	// (0x00055fc3) main_viewer_pane

0x26de,	// (0x00056289) main_vorec_pane

0x70e4,	// (0x0005ac8f) popup_blid_sat_info_window_ParamLimits

0x70e4,	// (0x0005ac8f) popup_blid_sat_info_window

0x7104,	// (0x0005acaf) popup_dyc_status_message_window_ParamLimits

0x7104,	// (0x0005acaf) popup_dyc_status_message_window

0x7114,	// (0x0005acbf) popup_grid_large_graphic_window_ParamLimits

0x7114,	// (0x0005acbf) popup_grid_large_graphic_window

0x71a5,	// (0x0005ad50) popup_loc_request_window_ParamLimits

0x71a5,	// (0x0005ad50) popup_loc_request_window

0x71f2,	// (0x0005ad9d) popup_wml_address_window_ParamLimits

0x71f2,	// (0x0005ad9d) popup_wml_address_window

0x6f70,	// (0x0005ab1b) call_muted_g1

0x6beb,	// (0x0005a796) popup_call_audio_conf_window_ParamLimits

0x6beb,	// (0x0005a796) popup_call_audio_conf_window

0x6f80,	// (0x0005ab2b) popup_call_audio_first_window_ParamLimits

0x6f80,	// (0x0005ab2b) popup_call_audio_first_window

0x6fc0,	// (0x0005ab6b) popup_call_audio_in_window_ParamLimits

0x6fc0,	// (0x0005ab6b) popup_call_audio_in_window

0x6fe4,	// (0x0005ab8f) popup_call_audio_out_window_ParamLimits

0x6fe4,	// (0x0005ab8f) popup_call_audio_out_window

0x7006,	// (0x0005abb1) popup_call_audio_second_window_ParamLimits

0x7006,	// (0x0005abb1) popup_call_audio_second_window

0x7036,	// (0x0005abe1) popup_call_audio_wait_window_ParamLimits

0x7036,	// (0x0005abe1) popup_call_audio_wait_window

0x7057,	// (0x0005ac02) popup_number_entry_window_ParamLimits

0x7057,	// (0x0005ac02) popup_number_entry_window

0x17f8,	// (0x000553a3) bg_popup_call_pane_cp05_ParamLimits

0x17f8,	// (0x000553a3) bg_popup_call_pane_cp05

0x1818,	// (0x000553c3) popup_number_entry_window_t1

0x182b,	// (0x000553d6) popup_number_entry_window_t2

0x183d,	// (0x000553e8) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00062bf0) popup_number_entry_window_t

0x184f,	// (0x000553fa) text_title_cp2

0x1862,	// (0x0005540d) bg_popup_call_pane_cp_ParamLimits

0x1862,	// (0x0005540d) bg_popup_call_pane_cp

0x1870,	// (0x0005541b) call_thumbnail_pane

0x1878,	// (0x00055423) popup_call_audio_in_window_g1_ParamLimits

0x1878,	// (0x00055423) popup_call_audio_in_window_g1

0x1884,	// (0x0005542f) popup_call_audio_in_window_g2_ParamLimits

0x1884,	// (0x0005542f) popup_call_audio_in_window_g2

0x1890,	// (0x0005543b) popup_call_audio_in_window_g3_ParamLimits

0x1890,	// (0x0005543b) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00062bf9) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00062bf9) popup_call_audio_in_window_g

0x189c,	// (0x00055447) popup_call_audio_in_window_t1_ParamLimits

0x189c,	// (0x00055447) popup_call_audio_in_window_t1

0x18b8,	// (0x00055463) popup_call_audio_in_window_t2_ParamLimits

0x18b8,	// (0x00055463) popup_call_audio_in_window_t2

0x18d4,	// (0x0005547f) popup_call_audio_in_window_t3_ParamLimits

0x18d4,	// (0x0005547f) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00062c00) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00062c00) popup_call_audio_in_window_t

0x1862,	// (0x0005540d) bg_popup_call_pane_cp01_ParamLimits

0x1862,	// (0x0005540d) bg_popup_call_pane_cp01

0x1870,	// (0x0005541b) call_thumbnail_pane_cp02

0x18e7,	// (0x00055492) call_type_pane_cp022

0x18ef,	// (0x0005549a) popup_call_audio_out_window_g1_ParamLimits

0x18ef,	// (0x0005549a) popup_call_audio_out_window_g1

0x1901,	// (0x000554ac) popup_call_audio_out_window_g2_ParamLimits

0x1901,	// (0x000554ac) popup_call_audio_out_window_g2

0x190d,	// (0x000554b8) popup_call_audio_out_window_g3_ParamLimits

0x190d,	// (0x000554b8) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00062c07) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00062c07) popup_call_audio_out_window_g

0x191f,	// (0x000554ca) popup_call_audio_out_window_t1_ParamLimits

0x191f,	// (0x000554ca) popup_call_audio_out_window_t1

0x1937,	// (0x000554e2) popup_call_audio_out_window_t2_ParamLimits

0x1937,	// (0x000554e2) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00062c0e) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00062c0e) popup_call_audio_out_window_t

0x194c,	// (0x000554f7) bg_popup_call_pane_ParamLimits

0x194c,	// (0x000554f7) bg_popup_call_pane

0x45a2,	// (0x0005814d) call_thumbnail_pane_cp_ParamLimits

0x45a2,	// (0x0005814d) call_thumbnail_pane_cp

0x19d0,	// (0x0005557b) call_type_pane_cp01_ParamLimits

0x19d0,	// (0x0005557b) call_type_pane_cp01

0x1a14,	// (0x000555bf) popup_call_audio_first_window_g1_ParamLimits

0x1a14,	// (0x000555bf) popup_call_audio_first_window_g1

0x1a60,	// (0x0005560b) popup_call_audio_first_window_g2_ParamLimits

0x1a60,	// (0x0005560b) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00062c13) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00062c13) popup_call_audio_first_window_g

0x1aa4,	// (0x0005564f) popup_call_audio_first_window_t1_ParamLimits

0x1aa4,	// (0x0005564f) popup_call_audio_first_window_t1

0x1b50,	// (0x000556fb) popup_call_audio_first_window_t4_ParamLimits

0x1b50,	// (0x000556fb) popup_call_audio_first_window_t4

0x1bdc,	// (0x00055787) popup_call_audio_first_window_t5_ParamLimits

0x1bdc,	// (0x00055787) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00062c18) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00062c18) popup_call_audio_first_window_t

0x1c0b,	// (0x000557b6) bg_popup_call_pane_cp02

0x1c15,	// (0x000557c0) call_type_pane_cp023

0x1c1d,	// (0x000557c8) popup_call_audio_wait_window_g1

0x1c25,	// (0x000557d0) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00062c1f) popup_call_audio_wait_window_g

0x1c2d,	// (0x000557d8) popup_call_audio_wait_window_t3

0x1c3b,	// (0x000557e6) bg_popup_call_pane_cp03_ParamLimits

0x1c3b,	// (0x000557e6) bg_popup_call_pane_cp03

0x224d,	// (0x00055df8) call_thumbnail_pane_cp011_ParamLimits

0x224d,	// (0x00055df8) call_thumbnail_pane_cp011

0x2259,	// (0x00055e04) call_type_pane_cp034_ParamLimits

0x2259,	// (0x00055e04) call_type_pane_cp034

0x2295,	// (0x00055e40) popup_call_audio_second_window_g1_ParamLimits

0x2295,	// (0x00055e40) popup_call_audio_second_window_g1

0x22d1,	// (0x00055e7c) popup_call_audio_second_window_g2_ParamLimits

0x22d1,	// (0x00055e7c) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x00062c24) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x00062c24) popup_call_audio_second_window_g

0x230d,	// (0x00055eb8) popup_call_audio_second_window_t1_ParamLimits

0x230d,	// (0x00055eb8) popup_call_audio_second_window_t1

0x238e,	// (0x00055f39) popup_call_audio_second_window_t2_ParamLimits

0x238e,	// (0x00055f39) popup_call_audio_second_window_t2

0x23c4,	// (0x00055f6f) popup_call_audio_second_window_t3_ParamLimits

0x23c4,	// (0x00055f6f) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x00062c29) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x00062c29) popup_call_audio_second_window_t

0x1c0b,	// (0x000557b6) bg_popup_call_pane_cp04

0x23fa,	// (0x00055fa5) list_conf_pane

0x2402,	// (0x00055fad) popup_call_audio_conf_window_t1

0x2410,	// (0x00055fbb) call_thumbnail_pane_g1

0x2418,	// (0x00055fc3) bg_pinb_pane_ParamLimits

0x2418,	// (0x00055fc3) bg_pinb_pane

0x2426,	// (0x00055fd1) find_pinb_pane

0x2418,	// (0x00055fc3) listscroll_pinb_pane_ParamLimits

0x2418,	// (0x00055fc3) listscroll_pinb_pane

0x2430,	// (0x00055fdb) pinb_bg_pane_g1

0x2430,	// (0x00055fdb) pinb_bg_pane_g2

0x2430,	// (0x00055fdb) pinb_bg_pane_g3

0x2430,	// (0x00055fdb) pinb_bg_pane_g4

0x2430,	// (0x00055fdb) pinb_bg_pane_g5

0x2430,	// (0x00055fdb) pinb_bg_pane_g6

0x2430,	// (0x00055fdb) pinb_bg_pane_g7

0x2430,	// (0x00055fdb) pinb_bg_pane_g8

0x2430,	// (0x00055fdb) pinb_bg_pane_g9

0x2430,	// (0x00055fdb) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00062c30) pinb_bg_pane_g

0x17ee,	// (0x00055399) grid_pinb_pane

0x17ee,	// (0x00055399) list_pinb_pane

0x223f,	// (0x00055dea) scroll_pane_cp01_ParamLimits

0x223f,	// (0x00055dea) scroll_pane_cp01

0x243a,	// (0x00055fe5) find_pinb_pane_g1_ParamLimits

0x243a,	// (0x00055fe5) find_pinb_pane_g1

0x2452,	// (0x00055ffd) find_pinb_pane_t1

0x2464,	// (0x0005600f) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00062c4a) find_pinb_pane_t

0x2479,	// (0x00056024) input_focus_pane_cp01_ParamLimits

0x2479,	// (0x00056024) input_focus_pane_cp01

0x2485,	// (0x00056030) cell_pinb_pane_ParamLimits

0x2485,	// (0x00056030) cell_pinb_pane

0x2493,	// (0x0005603e) cell_pinb_pane_g1_ParamLimits

0x2493,	// (0x0005603e) cell_pinb_pane_g1

0x24a1,	// (0x0005604c) cell_pinb_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) cell_pinb_pane_g2

0x24a1,	// (0x0005604c) cell_pinb_pane_g3_ParamLimits

0x24a1,	// (0x0005604c) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00062c4f) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00062c4f) cell_pinb_pane_g

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp01

0x2485,	// (0x00056030) list_pinb_item_pane_ParamLimits

0x2485,	// (0x00056030) list_pinb_item_pane

0x17ee,	// (0x00055399) list_highlight_pane_cp02

0x24af,	// (0x0005605a) list_pinb_item_pane_g1_ParamLimits

0x24af,	// (0x0005605a) list_pinb_item_pane_g1

0x24a1,	// (0x0005604c) list_pinb_item_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) list_pinb_item_pane_g2

0x2493,	// (0x0005603e) list_pinb_item_pane_g3_ParamLimits

0x2493,	// (0x0005603e) list_pinb_item_pane_g3

0x24a1,	// (0x0005604c) list_pinb_item_pane_g4_ParamLimits

0x24a1,	// (0x0005604c) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x00062c56) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x00062c56) list_pinb_item_pane_g

0x24bd,	// (0x00056068) list_pinb_item_pane_t1_ParamLimits

0x24bd,	// (0x00056068) list_pinb_item_pane_t1

0x45e0,	// (0x0005818b) calc_display_pane

0x45fe,	// (0x000581a9) calc_paper_pane

0x461a,	// (0x000581c5) grid_calc_pane

0x1c0b,	// (0x000557b6) bg_list_pane_cp01

0x4646,	// (0x000581f1) clock_g1

0x464e,	// (0x000581f9) clock_g2

0x0001,

0xf0b4,	// (0x00062c5f) clock_g

0x4658,	// (0x00058203) clock_t1_ParamLimits

0x4658,	// (0x00058203) clock_t1

0x466d,	// (0x00058218) clock_t2_ParamLimits

0x466d,	// (0x00058218) clock_t2

0x467f,	// (0x0005822a) clock_t3_ParamLimits

0x467f,	// (0x0005822a) clock_t3

0x4691,	// (0x0005823c) clock_t4_ParamLimits

0x4691,	// (0x0005823c) clock_t4

0x46a3,	// (0x0005824e) clock_t5_ParamLimits

0x46a3,	// (0x0005824e) clock_t5

0x46b8,	// (0x00058263) clock_t6_ParamLimits

0x46b8,	// (0x00058263) clock_t6

0x46ca,	// (0x00058275) clock_t7_ParamLimits

0x46ca,	// (0x00058275) clock_t7

0x46dc,	// (0x00058287) clock_t8_ParamLimits

0x46dc,	// (0x00058287) clock_t8

0x46f2,	// (0x0005829d) clock_t9_ParamLimits

0x46f2,	// (0x0005829d) clock_t9

0x0008,

0xf0b9,	// (0x00062c64) clock_t_ParamLimits

0xf0b9,	// (0x00062c64) clock_t

0x24d1,	// (0x0005607c) popup_clock_analogue_window_cp02

0x24d1,	// (0x0005607c) popup_clock_digital_window_cp01

0x1c0b,	// (0x000557b6) listscroll_help_pane

0x1c0b,	// (0x000557b6) phob_pre_status_pane

0x24d9,	// (0x00056084) grid_qdial_pane

0x2418,	// (0x00055fc3) listscroll_mce_pane

0x2418,	// (0x00055fc3) bg_notes_pane

0x24e3,	// (0x0005608e) list_notes_pane

0x4708,	// (0x000582b3) scroll_pane_cp06

0x24f1,	// (0x0005609c) bg_calc_paper_pane

0x4717,	// (0x000582c2) list_calc_pane

0x2505,	// (0x000560b0) bg_calc_display_pane

0x4731,	// (0x000582dc) calc_display_pane_t1

0x4746,	// (0x000582f1) calc_display_pane_t2

0x475b,	// (0x00058306) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x00062c77) calc_display_pane_t

0x476d,	// (0x00058318) cell_calc_pane_ParamLimits

0x476d,	// (0x00058318) cell_calc_pane

0x2511,	// (0x000560bc) bg_calc_paper_pane_g1

0x2529,	// (0x000560d4) bg_calc_paper_pane_g2

0x251d,	// (0x000560c8) bg_calc_paper_pane_g3

0x2541,	// (0x000560ec) bg_calc_paper_pane_g4

0x2535,	// (0x000560e0) bg_calc_paper_pane_g5

0x479a,	// (0x00058345) bg_calc_paper_pane_g6

0x47ab,	// (0x00058356) bg_calc_paper_pane_g7

0x47bc,	// (0x00058367) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x00062c7e) bg_calc_paper_pane_g

0x47cd,	// (0x00058378) calc_bg_paper_pane_g9

0x47de,	// (0x00058389) list_calc_item_pane_ParamLimits

0x47de,	// (0x00058389) list_calc_item_pane

0x254d,	// (0x000560f8) list_calc_item_pane_g1

0x480a,	// (0x000583b5) list_calc_item_pane_t1_ParamLimits

0x480a,	// (0x000583b5) list_calc_item_pane_t1

0x481c,	// (0x000583c7) list_calc_item_pane_t2_ParamLimits

0x481c,	// (0x000583c7) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x00062c8f) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x00062c8f) list_calc_item_pane_t

0x2430,	// (0x00055fdb) cell_calc_pane_g1

0x255a,	// (0x00056105) grid_highlight_pane_cp02

0x484c,	// (0x000583f7) bg_calc_display_pane_g1

0x4855,	// (0x00058400) bg_calc_display_pane_g2

0x485f,	// (0x0005840a) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00062c99) bg_calc_display_pane_g

0x4868,	// (0x00058413) cell_qdial_pane_ParamLimits

0x4868,	// (0x00058413) cell_qdial_pane

0x487c,	// (0x00058427) cell_qdial_pane_g1_ParamLimits

0x487c,	// (0x00058427) cell_qdial_pane_g1

0x4889,	// (0x00058434) cell_qdial_pane_g2_ParamLimits

0x4889,	// (0x00058434) cell_qdial_pane_g2

0x2585,	// (0x00056130) cell_qdial_pane_g3_ParamLimits

0x2585,	// (0x00056130) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00062ca0) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00062ca0) cell_qdial_pane_g

0x48a7,	// (0x00058452) cell_qdial_pane_t1_ParamLimits

0x48a7,	// (0x00058452) cell_qdial_pane_t1

0x48bf,	// (0x0005846a) cell_qdial_pane_t2_ParamLimits

0x48bf,	// (0x0005846a) cell_qdial_pane_t2

0x48d2,	// (0x0005847d) cell_qdial_pane_t3_ParamLimits

0x48d2,	// (0x0005847d) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00062ca9) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00062ca9) cell_qdial_pane_t

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp04

0x2591,	// (0x0005613c) thumbnail_qdial_pane_ParamLimits

0x2591,	// (0x0005613c) thumbnail_qdial_pane

0x25ed,	// (0x00056198) list_help_pane

0x25f6,	// (0x000561a1) scroll_pane_cp02

0x48e5,	// (0x00058490) help_list_pane_t1_ParamLimits

0x48e5,	// (0x00058490) help_list_pane_t1

0x491b,	// (0x000584c6) bg_notes_pane_g2

0x4923,	// (0x000584ce) bg_notes_pane_g3

0x492b,	// (0x000584d6) notes_bg_pane_g1

0x4933,	// (0x000584de) notes_bg_pane_g4

0x493b,	// (0x000584e6) notes_bg_pane_g5

0x4943,	// (0x000584ee) notes_bg_pane_g6

0x494b,	// (0x000584f6) notes_bg_pane_g7

0x4953,	// (0x000584fe) notes_bg_pane_g8

0x495b,	// (0x00058506) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00062cc7) notes_bg_pane_g

0x4963,	// (0x0005850e) list_notes_text_pane_ParamLimits

0x4963,	// (0x0005850e) list_notes_text_pane

0x261d,	// (0x000561c8) list_notes_text_pane_g1

0x498b,	// (0x00058536) list_notes_text_pane_t1

0x4999,	// (0x00058544) listscroll_cale_week_pane

0x49be,	// (0x00058569) bg_cale_heading_pane

0x2640,	// (0x000561eb) bg_cale_pane_cp01

0x49de,	// (0x00058589) cale_week_corner_pane

0x49f8,	// (0x000585a3) cale_week_day_heading_pane

0x4a18,	// (0x000585c3) cale_week_scroll_pane_g1

0x4a33,	// (0x000585de) cale_week_scroll_pane_g2

0x4a46,	// (0x000585f1) cale_week_scroll_pane_g3

0x4a59,	// (0x00058604) cale_week_scroll_pane_g4

0x4a6c,	// (0x00058617) cale_week_scroll_pane_g5

0x4a7f,	// (0x0005862a) cale_week_scroll_pane_g6

0x4a92,	// (0x0005863d) cale_week_scroll_pane_g7

0x4aa7,	// (0x00058652) cale_week_scroll_pane_g8

0x4abc,	// (0x00058667) cale_week_scroll_pane_g9

0x4acf,	// (0x0005867a) cale_week_scroll_pane_g10

0x4ae2,	// (0x0005868d) cale_week_scroll_pane_g11

0x4af5,	// (0x000586a0) cale_week_scroll_pane_g12

0x4b0c,	// (0x000586b7) cale_week_scroll_pane_g13

0x4b27,	// (0x000586d2) cale_week_scroll_pane_g14

0x4b42,	// (0x000586ed) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00062cd6) cale_week_scroll_pane_g

0x4b72,	// (0x0005871d) cale_week_time_pane

0x4b87,	// (0x00058732) grid_cale_week_pane

0x266f,	// (0x0005621a) scroll_pane_cp08

0x4ba6,	// (0x00058751) cell_cale_week_pane_ParamLimits

0x4ba6,	// (0x00058751) cell_cale_week_pane

0x4c08,	// (0x000587b3) cale_week_day_heading_pane_t1

0x4c23,	// (0x000587ce) cale_week_day_heading_pane_t2

0x4c3e,	// (0x000587e9) cale_week_day_heading_pane_t3

0x4c59,	// (0x00058804) cale_week_day_heading_pane_t4

0x4c74,	// (0x0005881f) cale_week_day_heading_pane_t5

0x4c8f,	// (0x0005883a) cale_week_day_heading_pane_t6

0x4caa,	// (0x00058855) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00062cf7) cale_week_day_heading_pane_t

0x268c,	// (0x00056237) bg_cale_side_pane

0x4cc5,	// (0x00058870) cale_week_time_pane_t1

0x4cdf,	// (0x0005888a) cale_week_time_pane_t2

0x4cf9,	// (0x000588a4) cale_week_time_pane_t3

0x4d13,	// (0x000588be) cale_week_time_pane_t4

0x4d2d,	// (0x000588d8) cale_week_time_pane_t5

0x4d47,	// (0x000588f2) cale_week_time_pane_t6

0x4d65,	// (0x00058910) cale_week_time_pane_t7

0x4d87,	// (0x00058932) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00062d06) cale_week_time_pane_t

0x4dab,	// (0x00058956) cell_cale_week_pane_g2

0x4dcf,	// (0x0005897a) cell_cale_week_pane_g3_ParamLimits

0x4dcf,	// (0x0005897a) cell_cale_week_pane_g3

0x269a,	// (0x00056245) grid_highlight_pane_cp07

0x26a2,	// (0x0005624d) listscroll_gms_pane

0x26ac,	// (0x00056257) grid_gms_pane

0x26b5,	// (0x00056260) listscroll_gms_pane_g1

0x26bd,	// (0x00056268) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00062d17) listscroll_gms_pane_g

0x4de7,	// (0x00058992) scroll_pane_cp010

0x4df2,	// (0x0005899d) cell_gms_pane_ParamLimits

0x4df2,	// (0x0005899d) cell_gms_pane

0x4e05,	// (0x000589b0) cell_gms_pane_g1

0x26c5,	// (0x00056270) cell_gms_pane_g2

0x261d,	// (0x000561c8) cell_gms_pane_g3

0x26cd,	// (0x00056278) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00062d1c) cell_gms_pane_g

0x26d6,	// (0x00056281) grid_highlight_pane_cp09

0x6ef4,	// (0x0005aa9f) phob_pre_status_pane_g1

0x6efc,	// (0x0005aaa7) phob_pre_status_pane_g2

0x6f04,	// (0x0005aaaf) phob_pre_status_pane_g3

0x6f0c,	// (0x0005aab7) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x000630e5) phob_pre_status_pane_g

0x6f1c,	// (0x0005aac7) phob_pre_status_pane_t1

0x6f2c,	// (0x0005aad7) phob_pre_status_pane_t2

0x6f3c,	// (0x0005aae7) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x000630f0) phob_pre_status_pane_t

0x26de,	// (0x00056289) bg_list_pane_cp05

0x4e15,	// (0x000589c0) grid_vorec_pane

0x4e1f,	// (0x000589ca) vorec_t1

0x4e2d,	// (0x000589d8) vorec_t2

0x4e3b,	// (0x000589e6) vorec_t3

0x4e49,	// (0x000589f4) vorec_t4

0xbff3,	// (0x0005fb9e) vorec_t5

0xc001,	// (0x0005fbac) vorec_t6

0x0004,

0xf17a,	// (0x00062d25) vorec_t

0xc00f,	// (0x0005fbba) wait_bar_pane_cp01

0x4e65,	// (0x00058a10) cell_vorec_pane_ParamLimits

0x4e65,	// (0x00058a10) cell_vorec_pane

0x4e78,	// (0x00058a23) cell_vorec_pane_g1

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp05

0x2485,	// (0x00056030) cams_zoom_pane

0x2485,	// (0x00056030) image_vga_pane

0x24a1,	// (0x0005604c) main_camera_pane_g1

0x24a1,	// (0x0005604c) main_camera_pane_g2

0x24a1,	// (0x0005604c) main_camera_pane_g3

0x24a1,	// (0x0005604c) main_camera_pane_g4

0x24a1,	// (0x0005604c) main_camera_pane_g5

0x24a1,	// (0x0005604c) main_camera_pane_g6

0x24a1,	// (0x0005604c) main_camera_pane_g7

0x0007,

0xf185,	// (0x00062d30) main_camera_pane_g

0x3217,	// (0x00056dc2) main_camera_pane_t1

0x3217,	// (0x00056dc2) main_camera_pane_t2

0x0001,

0xf196,	// (0x00062d41) main_camera_pane_t

0x4e82,	// (0x00058a2d) cams_zoom_pane_cp_ParamLimits

0x4e82,	// (0x00058a2d) cams_zoom_pane_cp

0x4eb0,	// (0x00058a5b) image_cif_pane_ParamLimits

0x4eb0,	// (0x00058a5b) image_cif_pane

0x17ee,	// (0x00055399) image_subqcif_pane

0x4ebe,	// (0x00058a69) main_video_pane_g1_ParamLimits

0x4ebe,	// (0x00058a69) main_video_pane_g1

0x4ee6,	// (0x00058a91) main_video_pane_g2_ParamLimits

0x4ee6,	// (0x00058a91) main_video_pane_g2

0x4f19,	// (0x00058ac4) main_video_pane_g3_ParamLimits

0x4f19,	// (0x00058ac4) main_video_pane_g3

0x4f19,	// (0x00058ac4) main_video_pane_g4_ParamLimits

0x4f19,	// (0x00058ac4) main_video_pane_g4

0x4f47,	// (0x00058af2) main_video_pane_g5_ParamLimits

0x4f47,	// (0x00058af2) main_video_pane_g5

0x26fa,	// (0x000562a5) main_video_pane_g6_ParamLimits

0x26fa,	// (0x000562a5) main_video_pane_g6

0x0006,

0xf19b,	// (0x00062d46) main_video_pane_g_ParamLimits

0xf19b,	// (0x00062d46) main_video_pane_g

0x4f63,	// (0x00058b0e) main_video_pane_t1_ParamLimits

0x4f63,	// (0x00058b0e) main_video_pane_t1

0x2714,	// (0x000562bf) cams_zoom_pane_g1

0x2714,	// (0x000562bf) cams_zoom_pane_g2

0x2714,	// (0x000562bf) cams_zoom_pane_g3

0x2714,	// (0x000562bf) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00062d55) cams_zoom_pane_g

0x4fa9,	// (0x00058b54) grid_cams_pane

0x4fb7,	// (0x00058b62) linegrid_cams_pane

0x4fc5,	// (0x00058b70) cell_cams_pane_ParamLimits

0x4fc5,	// (0x00058b70) cell_cams_pane

0x271e,	// (0x000562c9) cams_burst_image_pane

0x2726,	// (0x000562d1) cell_cams_pane_g1

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp03

0x2430,	// (0x00055fdb) mp_bg_pane_g1

0x17ee,	// (0x00055399) bg_list_pane_cp03

0x17ee,	// (0x00055399) bg_mp_pane

0x17ee,	// (0x00055399) grid_mp_pane

0x2714,	// (0x000562bf) media_player_g1

0x2c4f,	// (0x000567fa) media_player_t1

0x2c4f,	// (0x000567fa) media_player_t2

0x2c4f,	// (0x000567fa) media_player_t3

0x2c4f,	// (0x000567fa) media_player_t4

0x2c4f,	// (0x000567fa) media_player_t5

0x2c4f,	// (0x000567fa) media_player_t6

0x2c4f,	// (0x000567fa) media_player_t7

0x0006,

0xf524,	// (0x000630cf) media_player_t

0x17ee,	// (0x00055399) wait_bar_pane_cp02

0xf509,	// (0x000630b4) main_usb_pane_t

0x2ebb,	// (0x00056a66) cell_mp_pane

0x2430,	// (0x00055fdb) cell_mp_pane_g1

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp06

0x272e,	// (0x000562d9) grid_skin_colour_pane

0x2736,	// (0x000562e1) list_highlight_pane_cp03

0x4fd8,	// (0x00058b83) skin_g1

0x273e,	// (0x000562e9) skin_t1

0x274d,	// (0x000562f8) skin_t2

0x0001,

0xf1d8,	// (0x00062d83) skin_t

0x4fe2,	// (0x00058b8d) cell_skin_colour_pane_ParamLimits

0x4fe2,	// (0x00058b8d) cell_skin_colour_pane

0x275b,	// (0x00056306) cell_skin_colour_pane_g1

0x5066,	// (0x00058c11) call_video_g1_ParamLimits

0x5066,	// (0x00058c11) call_video_g1

0x5076,	// (0x00058c21) call_video_g2_ParamLimits

0x5076,	// (0x00058c21) call_video_g2

0x0001,

0xf1dd,	// (0x00062d88) call_video_g_ParamLimits

0xf1dd,	// (0x00062d88) call_video_g

0x50d0,	// (0x00058c7b) call_video_uplink_pane_cp1_ParamLimits

0x50d0,	// (0x00058c7b) call_video_uplink_pane_cp1

0x276d,	// (0x00056318) call_video_uplink_pane_cp2

0x519c,	// (0x00058d47) video_down_crop_pane_ParamLimits

0x519c,	// (0x00058d47) video_down_crop_pane

0x529a,	// (0x00058e45) video_down_pane_ParamLimits

0x529a,	// (0x00058e45) video_down_pane

0x2775,	// (0x00056320) video_down_subqcif_pane_ParamLimits

0x2775,	// (0x00056320) video_down_subqcif_pane

0x278d,	// (0x00056338) video_down_subqcif_pane_cp_ParamLimits

0x278d,	// (0x00056338) video_down_subqcif_pane_cp

0x27b3,	// (0x0005635e) im_reading_pane_ParamLimits

0x27b3,	// (0x0005635e) im_reading_pane

0x53ba,	// (0x00058f65) im_writing_pane_ParamLimits

0x53ba,	// (0x00058f65) im_writing_pane

0x53d8,	// (0x00058f83) im_reading_pane_t1

0x27cd,	// (0x00056378) list_im_pane

0x27de,	// (0x00056389) scroll_pane_cp07

0x542c,	// (0x00058fd7) im_writing_pane_t1_ParamLimits

0x542c,	// (0x00058fd7) im_writing_pane_t1

0x27f7,	// (0x000563a2) im_writing_pane_t2_ParamLimits

0x27f7,	// (0x000563a2) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00062d92) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00062d92) im_writing_pane_t

0x1c0b,	// (0x000557b6) input_focus_pane_cp04

0x1c0b,	// (0x000557b6) input_focus_pane_cp05

0x5441,	// (0x00058fec) list_im_single_pane_ParamLimits

0x5441,	// (0x00058fec) list_im_single_pane

0x5465,	// (0x00059010) list_single_im_pane_t1

0x26de,	// (0x00056289) blid_accuracy_pane

0x26de,	// (0x00056289) blid_compass_pane

0xdd01,	// (0x000618ac) main_location_t1

0xdd01,	// (0x000618ac) main_location_t2

0xdd01,	// (0x000618ac) main_location_t3

0x0002,

0xf533,	// (0x000630de) main_location_t

0x1c0b,	// (0x000557b6) aid_levels_location

0x2430,	// (0x00055fdb) blid_accuracy_pane_g1

0x2430,	// (0x00055fdb) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x00062de6) blid_accuracy_pane_g

0x283f,	// (0x000563ea) wml_content_pane

0x287d,	// (0x00056428) wml_button_pane_ParamLimits

0x287d,	// (0x00056428) wml_button_pane

0x5474,	// (0x0005901f) wml_list_single_large_pane_ParamLimits

0x5474,	// (0x0005901f) wml_list_single_large_pane

0x549e,	// (0x00059049) wml_list_single_medium_pane_ParamLimits

0x549e,	// (0x00059049) wml_list_single_medium_pane

0x54cf,	// (0x0005907a) wml_list_single_small_pane_ParamLimits

0x54cf,	// (0x0005907a) wml_list_single_small_pane

0x2891,	// (0x0005643c) wml_selection_box_pane_ParamLimits

0x2891,	// (0x0005643c) wml_selection_box_pane

0x28a4,	// (0x0005644f) wml_list_single_pane_t1

0x28b3,	// (0x0005645e) wml_list_single_medium_pane_t1

0x28c2,	// (0x0005646d) wml_list_single_large_pane_t1

0x28d1,	// (0x0005647c) input_focus_pane_cp02_ParamLimits

0x28d1,	// (0x0005647c) input_focus_pane_cp02

0x28e4,	// (0x0005648f) wml_selection_box_pane_g1

0x28ed,	// (0x00056498) wml_selection_box_pane_t1_ParamLimits

0x28ed,	// (0x00056498) wml_selection_box_pane_t1

0x2418,	// (0x00055fc3) bg_wml_button_pane_ParamLimits

0x2418,	// (0x00055fc3) bg_wml_button_pane

0x2905,	// (0x000564b0) wml_button_pane_g1

0x290d,	// (0x000564b8) wml_button_pane_t1

0x2905,	// (0x000564b0) wml_button_bg_pane_g1

0x291d,	// (0x000564c8) wml_button_bg_pane_g2

0x2925,	// (0x000564d0) wml_button_bg_pane_g3

0x292d,	// (0x000564d8) wml_button_bg_pane_g4

0x2935,	// (0x000564e0) wml_button_bg_pane_g5

0x293d,	// (0x000564e8) wml_button_bg_pane_g6

0x2945,	// (0x000564f0) wml_button_bg_pane_g7

0x294d,	// (0x000564f8) wml_button_bg_pane_g8

0x2955,	// (0x00056500) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00062d97) wml_button_bg_pane_g

0x5509,	// (0x000590b4) bg_list_pane_cp02

0x295d,	// (0x00056508) mce_header_pane_ParamLimits

0x295d,	// (0x00056508) mce_header_pane

0x2973,	// (0x0005651e) mce_icon_pane

0x2973,	// (0x0005651e) mce_image_pane

0x297c,	// (0x00056527) mce_text_pane_ParamLimits

0x297c,	// (0x00056527) mce_text_pane

0x5513,	// (0x000590be) scroll_pane_cp03

0x2875,	// (0x00056420) scroll_pane_cp04

0x298f,	// (0x0005653a) scroll_pane_cp05_ParamLimits

0x298f,	// (0x0005653a) scroll_pane_cp05

0x551d,	// (0x000590c8) mce_header_field_pane_ParamLimits

0x551d,	// (0x000590c8) mce_header_field_pane

0x553d,	// (0x000590e8) mce_header_field_pane_2_ParamLimits

0x553d,	// (0x000590e8) mce_header_field_pane_2

0x5553,	// (0x000590fe) mce_header_field_pane_3

0x555b,	// (0x00059106) list_single_mce_message_pane_ParamLimits

0x555b,	// (0x00059106) list_single_mce_message_pane

0x5586,	// (0x00059131) list_single_mce_smart_pane_ParamLimits

0x5586,	// (0x00059131) list_single_mce_smart_pane

0x299b,	// (0x00056546) input_focus_pane_cp03

0x29a4,	// (0x0005654f) list_header_data_pane

0x55bc,	// (0x00059167) mce_header_field_pane_t1

0x55ca,	// (0x00059175) list_single_mce_header_pane_ParamLimits

0x55ca,	// (0x00059175) list_single_mce_header_pane

0x29ac,	// (0x00056557) list_single_mce_header_pane_t1

0x29bb,	// (0x00056566) list_single_mce_message_pane_g1

0x29c3,	// (0x0005656e) list_single_mce_message_pane_t1

0x561c,	// (0x000591c7) bg_cale_heading_pane_cp01_ParamLimits

0x561c,	// (0x000591c7) bg_cale_heading_pane_cp01

0x29d1,	// (0x0005657c) bg_cale_pane_cp02_ParamLimits

0x29d1,	// (0x0005657c) bg_cale_pane_cp02

0x566a,	// (0x00059215) cale_month_corner_pane

0x5689,	// (0x00059234) cale_month_day_heading_pane_ParamLimits

0x5689,	// (0x00059234) cale_month_day_heading_pane

0x56ef,	// (0x0005929a) cale_month_pane_g1_ParamLimits

0x56ef,	// (0x0005929a) cale_month_pane_g1

0x5732,	// (0x000592dd) cale_month_pane_g2_ParamLimits

0x5732,	// (0x000592dd) cale_month_pane_g2

0x576a,	// (0x00059315) cale_month_pane_g3_ParamLimits

0x576a,	// (0x00059315) cale_month_pane_g3

0x57b6,	// (0x00059361) cale_month_pane_g4_ParamLimits

0x57b6,	// (0x00059361) cale_month_pane_g4

0x5802,	// (0x000593ad) cale_month_pane_g5_ParamLimits

0x5802,	// (0x000593ad) cale_month_pane_g5

0x584e,	// (0x000593f9) cale_month_pane_g6_ParamLimits

0x584e,	// (0x000593f9) cale_month_pane_g6

0x589a,	// (0x00059445) cale_month_pane_g7_ParamLimits

0x589a,	// (0x00059445) cale_month_pane_g7

0x58fe,	// (0x000594a9) cale_month_pane_g8_ParamLimits

0x58fe,	// (0x000594a9) cale_month_pane_g8

0x5962,	// (0x0005950d) cale_month_pane_g9_ParamLimits

0x5962,	// (0x0005950d) cale_month_pane_g9

0x59c0,	// (0x0005956b) cale_month_pane_g10_ParamLimits

0x59c0,	// (0x0005956b) cale_month_pane_g10

0x5a1c,	// (0x000595c7) cale_month_pane_g11_ParamLimits

0x5a1c,	// (0x000595c7) cale_month_pane_g11

0x5a70,	// (0x0005961b) cale_month_pane_g12_ParamLimits

0x5a70,	// (0x0005961b) cale_month_pane_g12

0x5ac6,	// (0x00059671) cale_month_pane_g13_ParamLimits

0x5ac6,	// (0x00059671) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00062daa) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00062daa) cale_month_pane_g

0x5b1c,	// (0x000596c7) cale_month_week_pane

0x5b40,	// (0x000596eb) grid_cale_month_pane_ParamLimits

0x5b40,	// (0x000596eb) grid_cale_month_pane

0x5b99,	// (0x00059744) cale_month_day_heading_pane_t1

0x5c1f,	// (0x000597ca) cale_month_day_heading_pane_t2

0x5c98,	// (0x00059843) cale_month_day_heading_pane_t3

0x5d11,	// (0x000598bc) cale_month_day_heading_pane_t4

0x5d8a,	// (0x00059935) cale_month_day_heading_pane_t5

0x5e03,	// (0x000599ae) cale_month_day_heading_pane_t6

0x5e7c,	// (0x00059a27) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00062dc5) cale_month_day_heading_pane_t

0x268c,	// (0x00056237) bg_cale_side_pane_cp01

0x5f0d,	// (0x00059ab8) cale_month_week_pane_t1

0x5f26,	// (0x00059ad1) cale_month_week_pane_t2

0x5f3f,	// (0x00059aea) cale_month_week_pane_t3

0x5f58,	// (0x00059b03) cale_month_week_pane_t4

0x5f71,	// (0x00059b1c) cale_month_week_pane_t5

0x5f92,	// (0x00059b3d) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00062dd4) cale_month_week_pane_t

0x5fb3,	// (0x00059b5e) cell_cale_month_pane_ParamLimits

0x5fb3,	// (0x00059b5e) cell_cale_month_pane

0x60d5,	// (0x00059c80) cell_cale_month_pane_g1

0x60e1,	// (0x00059c8c) cell_cale_month_pane_t1_ParamLimits

0x60e1,	// (0x00059c8c) cell_cale_month_pane_t1

0x269a,	// (0x00056245) grid_highlight_pane_cp08

0x2430,	// (0x00055fdb) main_smil_g1

0x610d,	// (0x00059cb8) smil_status_pane

0x2a10,	// (0x000565bb) smil_text_pane

0xdc19,	// (0x000617c4) bg_popup_call3_rect_pane_g8

0xdc21,	// (0x000617cc) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x00063072) bg_popup_call3_rect_pane_g

0xddca,	// (0x00061975) smil_status_volume_pane_g1

0x2a1a,	// (0x000565c5) smil_status_pane_t1

0x72a1,	// (0x0005ae4c) volume_smil_pane

0x2a31,	// (0x000565dc) list_smil_text_pane

0x6120,	// (0x00059ccb) scroll_pane_cp011

0x612b,	// (0x00059cd6) smil_text_list_pane_t1_ParamLimits

0x612b,	// (0x00059cd6) smil_text_list_pane_t1

0x61a3,	// (0x00059d4e) aid_volume_smil_ParamLimits

0x61a3,	// (0x00059d4e) aid_volume_smil

0x2430,	// (0x00055fdb) smil_volume_pane_g1

0x2430,	// (0x00055fdb) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x00062de6) smil_volume_pane_g

0x4999,	// (0x00058544) listscroll_cale_day_pane

0x2a3b,	// (0x000565e6) bg_cale_pane

0x2a53,	// (0x000565fe) list_cale_pane

0x2a76,	// (0x00056621) scroll_pane_cp09

0x2a87,	// (0x00056632) cale_bg_pane_g1

0x2a8f,	// (0x0005663a) cale_bg_pane_g2

0x2a97,	// (0x00056642) cale_bg_pane_g3

0x2a9f,	// (0x0005664a) cale_bg_pane_g4

0x2aa7,	// (0x00056652) cale_bg_pane_g5

0x2aaf,	// (0x0005665a) cale_bg_pane_g6

0x2ab7,	// (0x00056662) cale_bg_pane_g7

0x2abf,	// (0x0005666a) cale_bg_pane_g8

0x2ac7,	// (0x00056672) cale_bg_pane_g9

0x0008,

0xf240,	// (0x00062deb) cale_bg_pane_g

0x61c5,	// (0x00059d70) list_cale_time_pane_ParamLimits

0x61c5,	// (0x00059d70) list_cale_time_pane

0x2ad7,	// (0x00056682) list_cale_time_pane_g1_ParamLimits

0x2ad7,	// (0x00056682) list_cale_time_pane_g1

0x2ae3,	// (0x0005668e) list_cale_time_pane_g2_ParamLimits

0x2ae3,	// (0x0005668e) list_cale_time_pane_g2

0x61e7,	// (0x00059d92) list_cale_time_pane_g3_ParamLimits

0x61e7,	// (0x00059d92) list_cale_time_pane_g3

0x61f5,	// (0x00059da0) list_cale_time_pane_g4_ParamLimits

0x61f5,	// (0x00059da0) list_cale_time_pane_g4

0x6203,	// (0x00059dae) list_cale_time_pane_g5_ParamLimits

0x6203,	// (0x00059dae) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x00062dfe) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x00062dfe) list_cale_time_pane_g

0x2afd,	// (0x000566a8) list_cale_time_pane_t1_ParamLimits

0x2afd,	// (0x000566a8) list_cale_time_pane_t1

0x2b25,	// (0x000566d0) list_cale_time_pane_t2_ParamLimits

0x2b25,	// (0x000566d0) list_cale_time_pane_t2

0x64a6,	// (0x0005a051) aid_blid_cardinal_pane

0x64e8,	// (0x0005a093) compass_pane_t4

0x2b4d,	// (0x000566f8) list_cale_time_pane_t4_ParamLimits

0x2b4d,	// (0x000566f8) list_cale_time_pane_t4

0x64f6,	// (0x0005a0a1) compass_pane_t5

0x6506,	// (0x0005a0b1) compass_pane_t6

0x6514,	// (0x0005a0bf) compass_pane_t7

0x3000,	// (0x00056bab) navi_pane_cc_t1

0x31dd,	// (0x00056d88) aid_phob_thumbnail_center_pane

0x6992,	// (0x0005a53d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x00062e0b) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x00062e0b) list_cale_time_pane_t

0x1862,	// (0x0005540d) bg_popup_window_pane_cp02_ParamLimits

0x1862,	// (0x0005540d) bg_popup_window_pane_cp02

0x2b75,	// (0x00056720) heading_pane_cp01_ParamLimits

0x2b75,	// (0x00056720) heading_pane_cp01

0x2b81,	// (0x0005672c) loc_req_pane_ParamLimits

0x2b81,	// (0x0005672c) loc_req_pane

0x2b91,	// (0x0005673c) loc_type_pane_ParamLimits

0x2b91,	// (0x0005673c) loc_type_pane

0x2ba3,	// (0x0005674e) loc_type_pane_t1_ParamLimits

0x2ba3,	// (0x0005674e) loc_type_pane_t1

0x2bb5,	// (0x00056760) loc_type_pane_t2_ParamLimits

0x2bb5,	// (0x00056760) loc_type_pane_t2

0x2bc7,	// (0x00056772) loc_type_pane_t3_ParamLimits

0x2bc7,	// (0x00056772) loc_type_pane_t3

0x0002,

0xf267,	// (0x00062e12) loc_type_pane_t_ParamLimits

0xf267,	// (0x00062e12) loc_type_pane_t

0x2bd9,	// (0x00056784) list_loc_req_pane

0x2be3,	// (0x0005678e) scroll_pane_cp012

0x6211,	// (0x00059dbc) list_single_loc_request_popup_menu_pane_ParamLimits

0x6211,	// (0x00059dbc) list_single_loc_request_popup_menu_pane

0x2bee,	// (0x00056799) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2bee,	// (0x00056799) list_single_loc_request_popup_menu_pane_g1

0x2bfa,	// (0x000567a5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2bfa,	// (0x000567a5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x00062e19) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x00062e19) list_single_loc_request_popup_menu_pane_g

0x2c06,	// (0x000567b1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2c06,	// (0x000567b1) list_single_loc_request_popup_menu_pane_t1

0x6223,	// (0x00059dce) bg_popup_window_pane_cp03_ParamLimits

0x6223,	// (0x00059dce) bg_popup_window_pane_cp03

0x6231,	// (0x00059ddc) heading_loc_req_pane_ParamLimits

0x6231,	// (0x00059ddc) heading_loc_req_pane

0x623d,	// (0x00059de8) popup_dyc_status_message_window_g1_ParamLimits

0x623d,	// (0x00059de8) popup_dyc_status_message_window_g1

0x6249,	// (0x00059df4) popup_dyc_status_message_window_t1_ParamLimits

0x6249,	// (0x00059df4) popup_dyc_status_message_window_t1

0x625b,	// (0x00059e06) popup_dyc_status_message_window_t2_ParamLimits

0x625b,	// (0x00059e06) popup_dyc_status_message_window_t2

0x626d,	// (0x00059e18) popup_dyc_status_message_window_t3_ParamLimits

0x626d,	// (0x00059e18) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x00062e1e) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x00062e1e) popup_dyc_status_message_window_t

0x1c0b,	// (0x000557b6) bg_heading_pane_cp01

0x2c28,	// (0x000567d3) heading_loc_req_pane_g1

0x2c30,	// (0x000567db) heading_loc_req_pane_g2

0x2c38,	// (0x000567e3) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x00062e25) heading_loc_req_pane_g

0x2c40,	// (0x000567eb) heading_loc_req_pane_t1

0x2c5f,	// (0x0005680a) bg_popup_sub_pane_cp01_ParamLimits

0x2c5f,	// (0x0005680a) bg_popup_sub_pane_cp01

0x2c6d,	// (0x00056818) popup_cale_events_window_g1_ParamLimits

0x2c6d,	// (0x00056818) popup_cale_events_window_g1

0x2c8d,	// (0x00056838) popup_cale_events_window_g2_ParamLimits

0x2c8d,	// (0x00056838) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x00062e47) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x00062e47) popup_cale_events_window_g

0x2cad,	// (0x00056858) popup_cale_events_window_t1_ParamLimits

0x2cad,	// (0x00056858) popup_cale_events_window_t1

0x2cbf,	// (0x0005686a) popup_cale_events_window_t2_ParamLimits

0x2cbf,	// (0x0005686a) popup_cale_events_window_t2

0x2cfd,	// (0x000568a8) popup_cale_events_window_t3_ParamLimits

0x2cfd,	// (0x000568a8) popup_cale_events_window_t3

0x2d37,	// (0x000568e2) popup_cale_events_window_t4_ParamLimits

0x2d37,	// (0x000568e2) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x00062e4c) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x00062e4c) popup_cale_events_window_t

0x6297,	// (0x00059e42) call_type_pane

0xcbb3,	// (0x0006075e) popup_call_status_window_g1

0x62a3,	// (0x00059e4e) popup_call_status_window_g2

0x62af,	// (0x00059e5a) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x00062e55) popup_call_status_window_g

0x2d6d,	// (0x00056918) call_type_pane_g1

0x2d76,	// (0x00056921) call_type_pane_g2

0x0001,

0xf2b1,	// (0x00062e5c) call_type_pane_g

0x1c0b,	// (0x000557b6) bg_popup_sub_pane_cp02

0x2d7f,	// (0x0005692a) listscroll_popup_wml_pane

0x2d87,	// (0x00056932) list_wml_pane

0x2d91,	// (0x0005693c) scroll_pane_cp013

0x2d9c,	// (0x00056947) list_single_graphic_popup_wml_pane_ParamLimits

0x2d9c,	// (0x00056947) list_single_graphic_popup_wml_pane

0x2430,	// (0x00055fdb) list_single_graphic_popup_wml_pane_g1

0x2db0,	// (0x0005695b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x00062e61) list_single_graphic_popup_wml_pane_g

0x2db8,	// (0x00056963) list_single_graphic_popup_wml_pane_t1

0x2dc6,	// (0x00056971) aid_call_pane

0x2410,	// (0x00055fbb) popup_clock_analogue_window_g1

0x2410,	// (0x00055fbb) popup_clock_analogue_window_g2

0x62bb,	// (0x00059e66) popup_clock_analogue_window_g3

0x62bb,	// (0x00059e66) popup_clock_analogue_window_g4

0x2430,	// (0x00055fdb) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x00062e66) popup_clock_analogue_window_g

0x62c3,	// (0x00059e6e) popup_clock_analogue_window_t1

0x62d1,	// (0x00059e7c) clock_digital_number_pane_ParamLimits

0x62d1,	// (0x00059e7c) clock_digital_number_pane

0x62dd,	// (0x00059e88) clock_digital_number_pane_cp02_ParamLimits

0x62dd,	// (0x00059e88) clock_digital_number_pane_cp02

0x62e9,	// (0x00059e94) clock_digital_number_pane_cp03_ParamLimits

0x62e9,	// (0x00059e94) clock_digital_number_pane_cp03

0x62f5,	// (0x00059ea0) clock_digital_number_pane_cp04_ParamLimits

0x62f5,	// (0x00059ea0) clock_digital_number_pane_cp04

0x6305,	// (0x00059eb0) clock_digital_separator_pane_ParamLimits

0x6305,	// (0x00059eb0) clock_digital_separator_pane

0x6311,	// (0x00059ebc) popup_clock_digital_window_t1

0x2430,	// (0x00055fdb) clock_digital_number_pane_g1

0x2430,	// (0x00055fdb) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x00062de6) clock_digital_number_pane_g

0x2430,	// (0x00055fdb) clock_digital_separator_pane_g1

0x2430,	// (0x00055fdb) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x00062de6) clock_digital_separator_pane_g

0x1c0b,	// (0x000557b6) bg_popup_window_pane_cp04

0x2dd6,	// (0x00056981) heading_pane_cp03

0x26de,	// (0x00056289) listscroll_popup_gms_pane

0x1c0b,	// (0x000557b6) grid_large_graphic_popup_pane

0x2ddf,	// (0x0005698a) listscroll_popup_gms_pane_g1

0x2de8,	// (0x00056993) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x00062e71) listscroll_popup_gms_pane_g

0x2df1,	// (0x0005699c) scroll_pane_cp014

0x2485,	// (0x00056030) cell_large_graphic_popup_pane_ParamLimits

0x2485,	// (0x00056030) cell_large_graphic_popup_pane

0x2493,	// (0x0005603e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2493,	// (0x0005603e) cell_large_graphic_popup_pane_g1

0x2dfa,	// (0x000569a5) cell_large_graphic_popup_pane_g2_ParamLimits

0x2dfa,	// (0x000569a5) cell_large_graphic_popup_pane_g2

0x2e08,	// (0x000569b3) cell_large_graphic_popup_pane_g3_ParamLimits

0x2e08,	// (0x000569b3) cell_large_graphic_popup_pane_g3

0x2e16,	// (0x000569c1) cell_large_graphic_popup_pane_g4_ParamLimits

0x2e16,	// (0x000569c1) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x00062e76) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x00062e76) cell_large_graphic_popup_pane_g

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp010

0x2430,	// (0x00055fdb) bg_popup_call_pane_g1

0x2e27,	// (0x000569d2) list_single_graphic_popup_conf_pane_ParamLimits

0x2e27,	// (0x000569d2) list_single_graphic_popup_conf_pane

0x2e3a,	// (0x000569e5) list_highlight_pane_cp01

0x2e43,	// (0x000569ee) list_single_graphic_popup_conf_pane_g1

0x2e4b,	// (0x000569f6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x00062e7f) list_single_graphic_popup_conf_pane_g

0x2e53,	// (0x000569fe) list_single_graphic_popup_conf_pane_t1

0x2e61,	// (0x00056a0c) linegrid_cams_pane_g1

0x632e,	// (0x00059ed9) linegrid_cams_pane_g2

0x261d,	// (0x000561c8) linegrid_cams_pane_g3

0x2e6a,	// (0x00056a15) linegrid_cams_pane_g4

0x6337,	// (0x00059ee2) linegrid_cams_pane_g5

0x6340,	// (0x00059eeb) linegrid_cams_pane_g6

0x26cd,	// (0x00056278) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x00062e84) linegrid_cams_pane_g

0x2e73,	// (0x00056a1e) popup_clock_analogue_window

0x2e73,	// (0x00056a1e) popup_clock_digital_window

0x1c0b,	// (0x000557b6) popup_phob_thumbnail_window

0x2430,	// (0x00055fdb) call_video_uplink_pane_g1

0x2e7c,	// (0x00056a27) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x00062e93) call_video_uplink_pane_g

0x2e84,	// (0x00056a2f) video_uplink_pane

0x2e8c,	// (0x00056a37) mce_image_pane_g1

0x6349,	// (0x00059ef4) mce_image_pane_g2

0x6353,	// (0x00059efe) mce_image_pane_g3

0x635b,	// (0x00059f06) mce_image_pane_g4

0x6363,	// (0x00059f0e) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x00062e98) mce_image_pane_g

0x2e96,	// (0x00056a41) control_top_pane_stacon_cp01_ParamLimits

0x2e96,	// (0x00056a41) control_top_pane_stacon_cp01

0x2eaa,	// (0x00056a55) uni_indicator_pane_stacon_cp01_ParamLimits

0x2eaa,	// (0x00056a55) uni_indicator_pane_stacon_cp01

0x2ebb,	// (0x00056a66) bg_popup_sub_pane_cp03

0x2ec5,	// (0x00056a70) chi_dic_find_pane

0x636b,	// (0x00059f16) listscroll_chi_dic_pane

0x2ecd,	// (0x00056a78) main_pane_chidic_g1

0x2ed5,	// (0x00056a80) chi_dic_find_pane_t1

0x2ee3,	// (0x00056a8e) find_chidic_pane

0x2eec,	// (0x00056a97) chi_dic_list_pane_ParamLimits

0x2eec,	// (0x00056a97) chi_dic_list_pane

0x2efd,	// (0x00056aa8) scroll_pane_cp020

0x2f05,	// (0x00056ab0) find_chidic_pane_t1

0x1c0b,	// (0x000557b6) input_focus_pane_cp06

0x637f,	// (0x00059f2a) list_chi_dic_pane_ParamLimits

0x637f,	// (0x00059f2a) list_chi_dic_pane

0x6399,	// (0x00059f44) list_chi_dic_pane_t1_ParamLimits

0x6399,	// (0x00059f44) list_chi_dic_pane_t1

0x1c0b,	// (0x000557b6) list_highlight_pane_cp020

0x2f14,	// (0x00056abf) bg_cale_heading_pane_g1

0x63ac,	// (0x00059f57) bg_cale_heading_pane_g2

0x63b4,	// (0x00059f5f) bg_cale_heading_pane_g3

0x63bc,	// (0x00059f67) bg_cale_heading_pane_g4

0x63c6,	// (0x00059f71) bg_cale_heading_pane_g5

0x63d0,	// (0x00059f7b) bg_cale_heading_pane_g6

0x63d8,	// (0x00059f83) bg_cale_heading_pane_g7

0x63e0,	// (0x00059f8b) bg_cale_heading_pane_g8

0x63ea,	// (0x00059f95) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x00062ea3) bg_cale_heading_pane_g

0x2f14,	// (0x00056abf) bg_cale_side_pane_g1

0x63f4,	// (0x00059f9f) bg_cale_side_pane_g2

0x63fe,	// (0x00059fa9) bg_cale_side_pane_g3

0x6408,	// (0x00059fb3) bg_cale_side_pane_g4

0x6412,	// (0x00059fbd) bg_cale_side_pane_g5

0x641c,	// (0x00059fc7) bg_cale_side_pane_g6

0x6426,	// (0x00059fd1) bg_cale_side_pane_g7

0x6430,	// (0x00059fdb) bg_cale_side_pane_g8

0x6438,	// (0x00059fe3) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x00062eb6) bg_cale_side_pane_g

0x6440,	// (0x00059feb) popup_call_status_window_ParamLimits

0x6440,	// (0x00059feb) popup_call_status_window

0x2f1c,	// (0x00056ac7) stacon_top_pane

0x2f24,	// (0x00056acf) status_pane_ParamLimits

0x2f24,	// (0x00056acf) status_pane

0x2f39,	// (0x00056ae4) status_small_pane

0x2f41,	// (0x00056aec) control_pane

0x1c0b,	// (0x000557b6) stacon_bottom_pane

0x2f49,	// (0x00056af4) list_single_mce_smart_pane_t1_ParamLimits

0x2f49,	// (0x00056af4) list_single_mce_smart_pane_t1

0x2f5c,	// (0x00056b07) list_single_mce_smart_pane_t2_ParamLimits

0x2f5c,	// (0x00056b07) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x00062ec9) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x00062ec9) list_single_mce_smart_pane_t

0x644c,	// (0x00059ff7) compass_pane

0x6458,	// (0x0005a003) main_location2_pane_t1

0x646c,	// (0x0005a017) main_location2_pane_t2

0x6480,	// (0x0005a02b) main_location2_pane_t3

0x0003,

0xf323,	// (0x00062ece) main_location2_pane_t

0x2f7b,	// (0x00056b26) compass_pane_g1_ParamLimits

0x2f7b,	// (0x00056b26) compass_pane_g1

0x64ca,	// (0x0005a075) compass_pane_t1

0x64d9,	// (0x0005a084) compass_pane_t2

0x0005,

0xf32c,	// (0x00062ed7) compass_pane_t

0x6524,	// (0x0005a0cf) text_secondary_cp61

0x2ff7,	// (0x00056ba2) navi_pane_cams_g5

0x3073,	// (0x00056c1e) navi_pane_im_t1

0x3081,	// (0x00056c2c) navi_pane_mp_g1_ParamLimits

0x3081,	// (0x00056c2c) navi_pane_mp_g1

0x3095,	// (0x00056c40) navi_pane_mp_g2_ParamLimits

0x3095,	// (0x00056c40) navi_pane_mp_g2

0x30a1,	// (0x00056c4c) navi_pane_mp_g3_ParamLimits

0x30a1,	// (0x00056c4c) navi_pane_mp_g3

0x0002,

0xf340,	// (0x00062eeb) navi_pane_mp_g_ParamLimits

0xf340,	// (0x00062eeb) navi_pane_mp_g

0x30ad,	// (0x00056c58) navi_pane_mp_t1

0x30bb,	// (0x00056c66) navi_pane_mp_t2

0x0002,

0xf347,	// (0x00062ef2) navi_pane_mp_t

0x3126,	// (0x00056cd1) navi_pane_vt_g1

0x30ad,	// (0x00056c58) navi_pane_vt_t1

0x312e,	// (0x00056cd9) navi_slider_pane

0x26de,	// (0x00056289) zooming_pane

0x313e,	// (0x00056ce9) navi_slider_pane_g1

0x655f,	// (0x0005a10a) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x00062ef9) navi_slider_pane_g

0x3162,	// (0x00056d0d) aid_levels_zoom

0x316a,	// (0x00056d15) zooming_pane_g1

0x3172,	// (0x00056d1d) zooming_pane_g2

0x3172,	// (0x00056d1d) zooming_pane_g3

0x0002,

0xf35d,	// (0x00062f08) zooming_pane_g

0x317a,	// (0x00056d25) level_10_zoom

0x3183,	// (0x00056d2e) level_11_zoom

0x318c,	// (0x00056d37) level_1_zoom

0x3195,	// (0x00056d40) level_2_zoom

0x319e,	// (0x00056d49) level_3_zoom

0x31a7,	// (0x00056d52) level_4_zoom

0x31b0,	// (0x00056d5b) level_5_zoom

0x31b9,	// (0x00056d64) level_6_zoom

0x31c2,	// (0x00056d6d) level_7_zoom

0x31cb,	// (0x00056d76) level_8_zoom

0x31d4,	// (0x00056d7f) level_9_zoom

0x31e5,	// (0x00056d90) popup_phob_thumbnail_window_g1

0x31ed,	// (0x00056d98) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x00062f0f) popup_phob_thumbnail_window_g

0x6f4c,	// (0x0005aaf7) level_1_location

0x6f54,	// (0x0005aaff) level_2_location

0x6f5c,	// (0x0005ab07) level_3_location

0x6f66,	// (0x0005ab11) level_4_location

0x26de,	// (0x00056289) level_5_location

0x6571,	// (0x0005a11c) mce_icon_pane_g1

0x6579,	// (0x0005a124) mce_icon_pane_g2

0x0001,

0xf369,	// (0x00062f14) mce_icon_pane_g

0x6581,	// (0x0005a12c) main_mup_pane_g1_ParamLimits

0x6581,	// (0x0005a12c) main_mup_pane_g1

0x24af,	// (0x0005605a) main_mup_pane_g2_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g2

0x24af,	// (0x0005605a) main_mup_pane_g3_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g3

0x24af,	// (0x0005605a) main_mup_pane_g4_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g4

0x24af,	// (0x0005605a) main_mup_pane_g5_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g5

0x24af,	// (0x0005605a) main_mup_pane_g6_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g6

0x24af,	// (0x0005605a) main_mup_pane_g7_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g7

0x24af,	// (0x0005605a) main_mup_pane_g8_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g8

0x24af,	// (0x0005605a) main_mup_pane_g9_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g9

0x24af,	// (0x0005605a) main_mup_pane_g10_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g10

0x24af,	// (0x0005605a) main_mup_pane_g11_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g11

0x24a1,	// (0x0005604c) main_mup_pane_g12_ParamLimits

0x24a1,	// (0x0005604c) main_mup_pane_g12

0x24af,	// (0x0005605a) main_mup_pane_g13_ParamLimits

0x24af,	// (0x0005605a) main_mup_pane_g13

0x000c,

0xf36e,	// (0x00062f19) main_mup_pane_g_ParamLimits

0xf36e,	// (0x00062f19) main_mup_pane_g

0x24bd,	// (0x00056068) main_mup_pane_t1_ParamLimits

0x24bd,	// (0x00056068) main_mup_pane_t1

0x24bd,	// (0x00056068) main_mup_pane_t2_ParamLimits

0x24bd,	// (0x00056068) main_mup_pane_t2

0x24bd,	// (0x00056068) main_mup_pane_t3_ParamLimits

0x24bd,	// (0x00056068) main_mup_pane_t3

0x3217,	// (0x00056dc2) main_mup_pane_t4_ParamLimits

0x3217,	// (0x00056dc2) main_mup_pane_t4

0x3217,	// (0x00056dc2) main_mup_pane_t5_ParamLimits

0x3217,	// (0x00056dc2) main_mup_pane_t5

0x26e6,	// (0x00056291) main_mup_pane_t6_ParamLimits

0x26e6,	// (0x00056291) main_mup_pane_t6

0x0005,

0xf389,	// (0x00062f34) main_mup_pane_t_ParamLimits

0xf389,	// (0x00062f34) main_mup_pane_t

0x223f,	// (0x00055dea) mup_progress_pane_ParamLimits

0x223f,	// (0x00055dea) mup_progress_pane

0xcbc1,	// (0x0006076c) mup_visualizer_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup_visualizer_pane

0xcbc1,	// (0x0006076c) mup_volume_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup_volume_pane

0x24a1,	// (0x0005604c) mup_visualizer_pane_g1_ParamLimits

0x24a1,	// (0x0005604c) mup_visualizer_pane_g1

0x3239,	// (0x00056de4) mup_visualizer_pane_g2_ParamLimits

0x3239,	// (0x00056de4) mup_visualizer_pane_g2

0x2493,	// (0x0005603e) mup_visualizer_pane_g3_ParamLimits

0x2493,	// (0x0005603e) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x00062f41) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x00062f41) mup_visualizer_pane_g

0x2714,	// (0x000562bf) mup_volume_pane_g1

0x2714,	// (0x000562bf) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x00062f48) mup_volume_pane_g

0x2714,	// (0x000562bf) mup_progress_pane_g1

0x2714,	// (0x000562bf) mup_progress_pane_g2

0x2714,	// (0x000562bf) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x00062f4d) mup_progress_pane_g

0x1c0b,	// (0x000557b6) bg_popup_window_pane_cp05

0x3247,	// (0x00056df2) heading_pane_cp02_ParamLimits

0x3247,	// (0x00056df2) heading_pane_cp02

0x3261,	// (0x00056e0c) list_popup_blid_pane

0x3269,	// (0x00056e14) list_blid_sat_info_pane_ParamLimits

0x3269,	// (0x00056e14) list_blid_sat_info_pane

0x327c,	// (0x00056e27) list_blid_sat_info_pane_g1

0x3284,	// (0x00056e2f) list_blid_sat_info_pane_t1

0x667e,	// (0x0005a229) mup_equalizer_pane_ParamLimits

0x667e,	// (0x0005a229) mup_equalizer_pane

0x669f,	// (0x0005a24a) mup_equalizer_pane_cp1_ParamLimits

0x669f,	// (0x0005a24a) mup_equalizer_pane_cp1

0x66c0,	// (0x0005a26b) mup_equalizer_pane_cp2_ParamLimits

0x66c0,	// (0x0005a26b) mup_equalizer_pane_cp2

0x66e1,	// (0x0005a28c) mup_equalizer_pane_cp3_ParamLimits

0x66e1,	// (0x0005a28c) mup_equalizer_pane_cp3

0x6702,	// (0x0005a2ad) mup_equalizer_pane_cp4_ParamLimits

0x6702,	// (0x0005a2ad) mup_equalizer_pane_cp4

0x6723,	// (0x0005a2ce) mup_equalizer_pane_cp5

0x6739,	// (0x0005a2e4) mup_equalizer_pane_cp6

0x6751,	// (0x0005a2fc) mup_equalizer_pane_cp7

0xdc99,	// (0x00061844) bg_popup_call_poc_act_pane_g9

0xdca1,	// (0x0006184c) bg_popup_call_poc_act_pane_g10

0xdca9,	// (0x00061854) bg_popup_call_poc_act_pane_g11

0x000a,

0x2418,	// (0x00055fc3) mup_scale_pane

0x2430,	// (0x00055fdb) mup_scale_pane_g1

0x3292,	// (0x00056e3d) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x00062f69) mup_scale_pane_g

0x32b6,	// (0x00056e61) msg_data_pane

0x32be,	// (0x00056e69) scroll_pane_cp017

0x677b,	// (0x0005a326) bg_list_pane_cp04_ParamLimits

0x677b,	// (0x0005a326) bg_list_pane_cp04

0x32c6,	// (0x00056e71) msg_data_pane_g1

0x6797,	// (0x0005a342) msg_data_pane_g2

0x67a1,	// (0x0005a34c) msg_data_pane_g3

0x67a9,	// (0x0005a354) msg_data_pane_g4

0x67b1,	// (0x0005a35c) msg_data_pane_g5

0x67b9,	// (0x0005a364) msg_data_pane_g6

0x67c1,	// (0x0005a36c) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x00062f78) msg_data_pane_g

0x67c9,	// (0x0005a374) msg_text_pane_ParamLimits

0x67c9,	// (0x0005a374) msg_text_pane

0x6818,	// (0x0005a3c3) qrid_highlight_pane_cp011_ParamLimits

0x6818,	// (0x0005a3c3) qrid_highlight_pane_cp011

0x1c0b,	// (0x000557b6) msg_body_pane

0x1c0b,	// (0x000557b6) msg_header_pane

0x32d7,	// (0x00056e82) input_focus_pane_cp07

0x683e,	// (0x0005a3e9) msg_header_pane_t1_ParamLimits

0x683e,	// (0x0005a3e9) msg_header_pane_t1

0x6854,	// (0x0005a3ff) msg_header_pane_t2_ParamLimits

0x6854,	// (0x0005a3ff) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x00062f8c) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x00062f8c) msg_header_pane_t

0x32ec,	// (0x00056e97) msg_body_pane_g1

0x686b,	// (0x0005a416) msg_body_pane_t1_ParamLimits

0x686b,	// (0x0005a416) msg_body_pane_t1

0xe3a4,	// (0x00061f4f) msg_body_pane_t2_ParamLimits

0xe3a4,	// (0x00061f4f) msg_body_pane_t2

0xe3b6,	// (0x00061f61) msg_body_pane_t3_ParamLimits

0xe3b6,	// (0x00061f61) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x00062f91) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x00062f91) msg_body_pane_t

0x68ee,	// (0x0005a499) main_viewer_pane_g1_ParamLimits

0x68ee,	// (0x0005a499) main_viewer_pane_g1

0x68fa,	// (0x0005a4a5) main_viewer_pane_g2_ParamLimits

0x68fa,	// (0x0005a4a5) main_viewer_pane_g2

0x6906,	// (0x0005a4b1) main_viewer_pane_g3_ParamLimits

0x6906,	// (0x0005a4b1) main_viewer_pane_g3

0x6917,	// (0x0005a4c2) main_viewer_pane_g4_ParamLimits

0x6917,	// (0x0005a4c2) main_viewer_pane_g4

0x6928,	// (0x0005a4d3) main_viewer_pane_g5_ParamLimits

0x6928,	// (0x0005a4d3) main_viewer_pane_g5

0x6928,	// (0x0005a4d3) main_viewer_pane_g7_ParamLimits

0x6928,	// (0x0005a4d3) main_viewer_pane_g7

0x2bee,	// (0x00056799) main_viewer_pane_g8_ParamLimits

0x2bee,	// (0x00056799) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x00062fa1) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x00062fa1) main_viewer_pane_g

0xcbcf,	// (0x0006077a) viewer_content_pane_ParamLimits

0xcbcf,	// (0x0006077a) viewer_content_pane

0x6966,	// (0x0005a511) main_postcard_pane_g1_ParamLimits

0x6966,	// (0x0005a511) main_postcard_pane_g1

0x6974,	// (0x0005a51f) main_postcard_pane_g2_ParamLimits

0x6974,	// (0x0005a51f) main_postcard_pane_g2

0x6982,	// (0x0005a52d) main_postcard_pane_g3_ParamLimits

0x6982,	// (0x0005a52d) main_postcard_pane_g3

0x0005,

0xf407,	// (0x00062fb2) main_postcard_pane_g_ParamLimits

0xf407,	// (0x00062fb2) main_postcard_pane_g

0x6992,	// (0x0005a53d) main_postcard_pane_g4

0xdddd,	// (0x00061988) smil_status_volume_pane_g2

0x69be,	// (0x0005a569) postcard_pane_ParamLimits

0x69be,	// (0x0005a569) postcard_pane

0xcbb3,	// (0x0006075e) postcard_pane_g1_ParamLimits

0xcbb3,	// (0x0006075e) postcard_pane_g1

0x69f0,	// (0x0005a59b) postcard_pane_g2_ParamLimits

0x69f0,	// (0x0005a59b) postcard_pane_g2

0x69fc,	// (0x0005a5a7) postcard_pane_g3_ParamLimits

0x69fc,	// (0x0005a5a7) postcard_pane_g3

0xcbdd,	// (0x00060788) postcard_pane_g4_ParamLimits

0xcbdd,	// (0x00060788) postcard_pane_g4

0x6a08,	// (0x0005a5b3) postcard_pane_g5_ParamLimits

0x6a08,	// (0x0005a5b3) postcard_pane_g5

0x6a14,	// (0x0005a5bf) postcard_pane_g6_ParamLimits

0x6a14,	// (0x0005a5bf) postcard_pane_g6

0xcbeb,	// (0x00060796) postcard_pane_g7_ParamLimits

0xcbeb,	// (0x00060796) postcard_pane_g7

0x0006,

0xf414,	// (0x00062fbf) postcard_pane_g_ParamLimits

0xf414,	// (0x00062fbf) postcard_pane_g

0x6a20,	// (0x0005a5cb) main_mp2_pane_g1_ParamLimits

0x6a20,	// (0x0005a5cb) main_mp2_pane_g1

0x6a2c,	// (0x0005a5d7) main_mp2_pane_g2_ParamLimits

0x6a2c,	// (0x0005a5d7) main_mp2_pane_g2

0x6a38,	// (0x0005a5e3) main_mp2_pane_g3_ParamLimits

0x6a38,	// (0x0005a5e3) main_mp2_pane_g3

0x0002,

0xf423,	// (0x00062fce) main_mp2_pane_g_ParamLimits

0xf423,	// (0x00062fce) main_mp2_pane_g

0x6a44,	// (0x0005a5ef) main_mp2_pane_t1_ParamLimits

0x6a44,	// (0x0005a5ef) main_mp2_pane_t1

0x6a5b,	// (0x0005a606) main_mp2_pane_t2_ParamLimits

0x6a5b,	// (0x0005a606) main_mp2_pane_t2

0x6a6f,	// (0x0005a61a) main_mp2_pane_t3_ParamLimits

0x6a6f,	// (0x0005a61a) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x00062fd5) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x00062fd5) main_mp2_pane_t

0xcbf9,	// (0x000607a4) pec_content_pane_ParamLimits

0xcbf9,	// (0x000607a4) pec_content_pane

0x2875,	// (0x00056420) scroll_pane_cp015

0xcc0b,	// (0x000607b6) pec_attribute_pane_ParamLimits

0xcc0b,	// (0x000607b6) pec_attribute_pane

0x6a81,	// (0x0005a62c) pec_content_pane_g1_ParamLimits

0x6a81,	// (0x0005a62c) pec_content_pane_g1

0xcc1b,	// (0x000607c6) pec_content_pane_t1_ParamLimits

0xcc1b,	// (0x000607c6) pec_content_pane_t1

0xcc2d,	// (0x000607d8) pec_content_pane_t2_ParamLimits

0xcc2d,	// (0x000607d8) pec_content_pane_t2

0x0001,

0xf431,	// (0x00062fdc) pec_content_pane_t_ParamLimits

0xf431,	// (0x00062fdc) pec_content_pane_t

0x6a8d,	// (0x0005a638) list_single_graphic_pane_cp01_ParamLimits

0x6a8d,	// (0x0005a638) list_single_graphic_pane_cp01

0x2418,	// (0x00055fc3) bg_popup_sub_pane_cp04

0xcc3f,	// (0x000607ea) popup_mup_playback_window_g1

0xcc4b,	// (0x000607f6) popup_mup_playback_window_t1

0xcc60,	// (0x0006080b) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x00062fe1) popup_mup_playback_window_t

0xcc97,	// (0x00060842) main_image_pane_g1_ParamLimits

0xcc97,	// (0x00060842) main_image_pane_g1

0xccda,	// (0x00060885) scroll_pane_cp018_ParamLimits

0xccda,	// (0x00060885) scroll_pane_cp018

0xccf2,	// (0x0006089d) scroll_pane_cp016_ParamLimits

0xccf2,	// (0x0006089d) scroll_pane_cp016

0x6b26,	// (0x0005a6d1) smil2_image_pane_ParamLimits

0x6b26,	// (0x0005a6d1) smil2_image_pane

0x6b56,	// (0x0005a701) smil2_root_pane_ParamLimits

0x6b56,	// (0x0005a701) smil2_root_pane

0x6b82,	// (0x0005a72d) smil2_text_pane_ParamLimits

0x6b82,	// (0x0005a72d) smil2_text_pane

0x1c0b,	// (0x000557b6) bg_list_pane_cp06

0xcd2e,	// (0x000608d9) grid_radio_pane

0x1c0b,	// (0x000557b6) bg_popup_window_pane_cp06

0xcd36,	// (0x000608e1) main_fmradio_pane_t1

0xdcb1,	// (0x0006185c) heading_pane_cp04

0xcd44,	// (0x000608ef) main_fmradio_pane_t2

0xdcb9,	// (0x00061864) popup_cale_lunar_info_window_g1

0xcd52,	// (0x000608fd) main_fmradio_pane_t3

0xdcc1,	// (0x0006186c) popup_cale_lunar_info_window_g2

0xcd60,	// (0x0006090b) main_fmradio_pane_t4

0x0001,

0xcd6e,	// (0x00060919) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x000630c1) popup_cale_lunar_info_window_g

0xf44b,	// (0x00062ff6) main_fmradio_pane_t

0xcd7c,	// (0x00060927) wait_bar_pane_cp03

0xcd84,	// (0x0006092f) cell_fmradio_pane_ParamLimits

0xcd84,	// (0x0006092f) cell_fmradio_pane

0xcbeb,	// (0x00060796) cell_fmradio_pane_g1_ParamLimits

0xcbeb,	// (0x00060796) cell_fmradio_pane_g1

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp011

0xcd97,	// (0x00060942) poc_content_pane_ParamLimits

0xcd97,	// (0x00060942) poc_content_pane

0xcda9,	// (0x00060954) scroll_pane_cp019

0x6bc2,	// (0x0005a76d) popup_call_poc_act_window_ParamLimits

0x6bc2,	// (0x0005a76d) popup_call_poc_act_window

0x6bcf,	// (0x0005a77a) popup_call_poc_inact_window_ParamLimits

0x6bcf,	// (0x0005a77a) popup_call_poc_inact_window

0xf4ed,	// (0x00063098) bg_popup_call_poc_act_pane_g

0xdc29,	// (0x000617d4) bg_popup_call_poc_inact_pane_g1

0xdc31,	// (0x000617dc) bg_popup_call_poc_inact_pane_g2

0xcdb1,	// (0x0006095c) popup_call_poc_act_window_g2

0xdc39,	// (0x000617e4) bg_popup_call_poc_inact_pane_g3

0xdc41,	// (0x000617ec) bg_popup_call_poc_inact_pane_g4

0xdc49,	// (0x000617f4) bg_popup_call_poc_inact_pane_g5

0xcdb9,	// (0x00060964) popup_call_poc_act_window_t1_ParamLimits

0xcdb9,	// (0x00060964) popup_call_poc_act_window_t1

0xcde1,	// (0x0006098c) popup_call_poc_act_window_t2_ParamLimits

0xcde1,	// (0x0006098c) popup_call_poc_act_window_t2

0xce09,	// (0x000609b4) popup_call_poc_act_window_t3_ParamLimits

0xce09,	// (0x000609b4) popup_call_poc_act_window_t3

0xce31,	// (0x000609dc) popup_call_poc_act_window_t4_ParamLimits

0xce31,	// (0x000609dc) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x00063001) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x00063001) popup_call_poc_act_window_t

0xdc51,	// (0x000617fc) bg_popup_call_poc_inact_pane_g6

0xdc59,	// (0x00061804) bg_popup_call_poc_inact_pane_g7

0xdc61,	// (0x0006180c) bg_popup_call_poc_inact_pane_g8

0xce43,	// (0x000609ee) popup_call_poc_inact_window_g2

0xdc69,	// (0x00061814) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x00063085) bg_popup_call_poc_inact_pane_g

0xce4b,	// (0x000609f6) popup_call_poc_inact_window_t1_ParamLimits

0xce4b,	// (0x000609f6) popup_call_poc_inact_window_t1

0xce60,	// (0x00060a0b) popup_call_poc_inact_window_t2_ParamLimits

0xce60,	// (0x00060a0b) popup_call_poc_inact_window_t2

0xce75,	// (0x00060a20) popup_call_poc_inact_window_t3_ParamLimits

0xce75,	// (0x00060a20) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0006300a) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0006300a) popup_call_poc_inact_window_t

0xdd55,	// (0x00061900) context_pane_ParamLimits

0x7258,	// (0x0005ae03) signal_pane_ParamLimits

0x26de,	// (0x00056289) main_call2_pane

0x71cb,	// (0x0005ad76) popup_phob_thumbnail2_window_ParamLimits

0x71cb,	// (0x0005ad76) popup_phob_thumbnail2_window

0x689c,	// (0x0005a447) aid_hotspot_pointer_arrow_pane

0x68a4,	// (0x0005a44f) aid_hotspot_pointer_hand_pane

0x6f14,	// (0x0005aabf) phob_pre_status_pane_g5

0x2485,	// (0x00056030) cams_zoom_pane_ParamLimits

0x2485,	// (0x00056030) image_vga_pane_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g1_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g3_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g4_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g5_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g6_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00062d30) main_camera_pane_g_ParamLimits

0x3217,	// (0x00056dc2) main_camera_pane_t1_ParamLimits

0x3217,	// (0x00056dc2) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00062d41) main_camera_pane_t_ParamLimits

0x2418,	// (0x00055fc3) bg_popup_preview_window_pane_cp01_ParamLimits

0x2418,	// (0x00055fc3) bg_popup_preview_window_pane_cp01

0xce8a,	// (0x00060a35) popup_phob_thumbnail2_window_g1_ParamLimits

0xce8a,	// (0x00060a35) popup_phob_thumbnail2_window_g1

0x1c0b,	// (0x000557b6) call2_cli_visual_pane

0x6beb,	// (0x0005a796) popup_call2_audio_conf_window_ParamLimits

0x6beb,	// (0x0005a796) popup_call2_audio_conf_window

0x6c00,	// (0x0005a7ab) popup_call2_audio_first_window_ParamLimits

0x6c00,	// (0x0005a7ab) popup_call2_audio_first_window

0x6c9e,	// (0x0005a849) popup_call2_audio_in_window_ParamLimits

0x6c9e,	// (0x0005a849) popup_call2_audio_in_window

0x6ce0,	// (0x0005a88b) popup_call2_audio_out_window_ParamLimits

0x6ce0,	// (0x0005a88b) popup_call2_audio_out_window

0x6d42,	// (0x0005a8ed) popup_call2_audio_second_window_ParamLimits

0x6d42,	// (0x0005a8ed) popup_call2_audio_second_window

0x6da0,	// (0x0005a94b) popup_call2_audio_wait_window_ParamLimits

0x6da0,	// (0x0005a94b) popup_call2_audio_wait_window

0x1c0b,	// (0x000557b6) bg_popup_call2_act_pane_cp03

0x23fa,	// (0x00055fa5) list_conf_pane_cp

0xce96,	// (0x00060a41) popup_call2_audio_conf_window_t1

0x2e27,	// (0x000569d2) list_single_graphic_popup_conf2_pane_ParamLimits

0x2e27,	// (0x000569d2) list_single_graphic_popup_conf2_pane

0x2e3a,	// (0x000569e5) list_highlight_pane_cp04

0xcea4,	// (0x00060a4f) list_single_graphic_popup_conf2_pane_g1

0x2e4b,	// (0x000569f6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x00063011) list_single_graphic_popup_conf2_pane_g

0xceae,	// (0x00060a59) list_single_graphic_popup_conf2_pane_t1

0xcebc,	// (0x00060a67) bg_popup_call2_act_pane_cp01_ParamLimits

0xcebc,	// (0x00060a67) bg_popup_call2_act_pane_cp01

0xcf46,	// (0x00060af1) call_type_pane_cp05_ParamLimits

0xcf46,	// (0x00060af1) call_type_pane_cp05

0xcf9a,	// (0x00060b45) popup_call2_audio_second_window_g1_ParamLimits

0xcf9a,	// (0x00060b45) popup_call2_audio_second_window_g1

0xcfee,	// (0x00060b99) popup_call2_audio_second_window_g2_ParamLimits

0xcfee,	// (0x00060b99) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x00063016) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x00063016) popup_call2_audio_second_window_g

0xd053,	// (0x00060bfe) popup_call2_audio_second_window_t1_ParamLimits

0xd053,	// (0x00060bfe) popup_call2_audio_second_window_t1

0xd10e,	// (0x00060cb9) popup_call2_audio_second_window_t2_ParamLimits

0xd10e,	// (0x00060cb9) popup_call2_audio_second_window_t2

0xd161,	// (0x00060d0c) popup_call2_audio_second_window_t3_ParamLimits

0xd161,	// (0x00060d0c) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0006301d) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0006301d) popup_call2_audio_second_window_t

0x1c0b,	// (0x000557b6) bg_popup_call2_in_pane_cp02

0x1c15,	// (0x000557c0) call_type_pane_cp04

0x6ddf,	// (0x0005a98a) popup_call2_audio_wait_window_g1

0x6de7,	// (0x0005a992) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x00063026) popup_call2_audio_wait_window_g

0x1c2d,	// (0x000557d8) popup_call2_audio_wait_window_t3

0xd254,	// (0x00060dff) bg_popup_call2_act_pane_ParamLimits

0xd254,	// (0x00060dff) bg_popup_call2_act_pane

0xd314,	// (0x00060ebf) call_type_pane_cp03_ParamLimits

0xd314,	// (0x00060ebf) call_type_pane_cp03

0xd378,	// (0x00060f23) popup_call2_audio_first_window_g1_ParamLimits

0xd378,	// (0x00060f23) popup_call2_audio_first_window_g1

0xd3e8,	// (0x00060f93) popup_call2_audio_first_window_g2_ParamLimits

0xd3e8,	// (0x00060f93) popup_call2_audio_first_window_g2

0xcbb3,	// (0x0006075e) popup_call2_audio_first_window_g3_ParamLimits

0xcbb3,	// (0x0006075e) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0006302b) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0006302b) popup_call2_audio_first_window_g

0xd4c6,	// (0x00061071) popup_call2_audio_first_window_t1_ParamLimits

0xd4c6,	// (0x00061071) popup_call2_audio_first_window_t1

0xd5c9,	// (0x00061174) popup_call2_audio_first_window_t4_ParamLimits

0xd5c9,	// (0x00061174) popup_call2_audio_first_window_t4

0xd6ac,	// (0x00061257) popup_call2_audio_first_window_t5_ParamLimits

0xd6ac,	// (0x00061257) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x00063036) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x00063036) popup_call2_audio_first_window_t

0x2410,	// (0x00055fbb) bg_popup_call2_act_pane_g1

0xdcc9,	// (0x00061874) popup_cale_lunar_info_window_t1

0xdcd7,	// (0x00061882) popup_cale_lunar_info_window_t2

0xdce5,	// (0x00061890) popup_cale_lunar_info_window_t3

0x1c0b,	// (0x000557b6) bg_popup_call2_bubble_pane

0xd7ad,	// (0x00061358) bg_popup_call2_in_pane_cp01_ParamLimits

0xd7ad,	// (0x00061358) bg_popup_call2_in_pane_cp01

0x18e7,	// (0x00055492) call_type_pane_cp02

0x6def,	// (0x0005a99a) popup_call2_audio_out_window_g1_ParamLimits

0x6def,	// (0x0005a99a) popup_call2_audio_out_window_g1

0xd7f5,	// (0x000613a0) popup_call2_audio_out_window_g2_ParamLimits

0xd7f5,	// (0x000613a0) popup_call2_audio_out_window_g2

0x6e1b,	// (0x0005a9c6) popup_call2_audio_out_window_g3_ParamLimits

0x6e1b,	// (0x0005a9c6) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0006303f) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0006303f) popup_call2_audio_out_window_g

0xd82c,	// (0x000613d7) popup_call2_audio_out_window_t1_ParamLimits

0xd82c,	// (0x000613d7) popup_call2_audio_out_window_t1

0xd88b,	// (0x00061436) popup_call2_audio_out_window_t2_ParamLimits

0xd88b,	// (0x00061436) popup_call2_audio_out_window_t2

0xd8df,	// (0x0006148a) popup_call2_audio_out_window_t3_ParamLimits

0xd8df,	// (0x0006148a) popup_call2_audio_out_window_t3

0xd8f5,	// (0x000614a0) popup_call2_audio_out_window_t4_ParamLimits

0xd8f5,	// (0x000614a0) popup_call2_audio_out_window_t4

0xd90b,	// (0x000614b6) popup_call2_audio_out_window_t5_ParamLimits

0xd90b,	// (0x000614b6) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x00063048) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x00063048) popup_call2_audio_out_window_t

0xd96f,	// (0x0006151a) bg_popup_call2_in_pane_ParamLimits

0xd96f,	// (0x0006151a) bg_popup_call2_in_pane

0xd9cb,	// (0x00061576) popup_call2_audio_in_window_g1_ParamLimits

0xd9cb,	// (0x00061576) popup_call2_audio_in_window_g1

0xda03,	// (0x000615ae) popup_call2_audio_in_window_g2_ParamLimits

0xda03,	// (0x000615ae) popup_call2_audio_in_window_g2

0xda3b,	// (0x000615e6) popup_call2_audio_in_window_g3_ParamLimits

0xda3b,	// (0x000615e6) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x00063055) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x00063055) popup_call2_audio_in_window_g

0xda93,	// (0x0006163e) popup_call2_audio_in_window_t1_ParamLimits

0xda93,	// (0x0006163e) popup_call2_audio_in_window_t1

0xdb13,	// (0x000616be) popup_call2_audio_in_window_t2_ParamLimits

0xdb13,	// (0x000616be) popup_call2_audio_in_window_t2

0xdb93,	// (0x0006173e) popup_call2_audio_in_window_t3_ParamLimits

0xdb93,	// (0x0006173e) popup_call2_audio_in_window_t3

0xdbad,	// (0x00061758) popup_call2_audio_in_window_t4_ParamLimits

0xdbad,	// (0x00061758) popup_call2_audio_in_window_t4

0xdbbf,	// (0x0006176a) popup_call2_audio_in_window_t5_ParamLimits

0xdbbf,	// (0x0006176a) popup_call2_audio_in_window_t5

0xdbd4,	// (0x0006177f) popup_call2_audio_in_window_t6_ParamLimits

0xdbd4,	// (0x0006177f) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0006305e) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0006305e) popup_call2_audio_in_window_t

0x2410,	// (0x00055fbb) bg_popup_call2_in_pane_g1

0xdcf3,	// (0x0006189e) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x000630c6) popup_cale_lunar_info_window_t

0x2418,	// (0x00055fc3) bg_popup_call2_rect_pane_ParamLimits

0x2418,	// (0x00055fc3) bg_popup_call2_rect_pane

0x1c0b,	// (0x000557b6) call2_cli_visual_graphic_pane

0x1c0b,	// (0x000557b6) call2_cli_visual_text_pane

0x7294,	// (0x0005ae3f) smil_status_volume_pane_g3

0x0002,

0x2430,	// (0x00055fdb) call2_cli_visual_graphic_pane_g1

0x2430,	// (0x00055fdb) call2_cli_visual_graphic_pane_g2

0x2430,	// (0x00055fdb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0006306b) call2_cli_visual_graphic_pane_g

0xdbe9,	// (0x00061794) bg_popup_call2_rect_pane_g1

0x25e5,	// (0x00056190) bg_popup_call2_rect_pane_g2

0xdbf1,	// (0x0006179c) bg_popup_call2_rect_pane_g3

0xdbf9,	// (0x000617a4) bg_popup_call2_rect_pane_g4

0xdc01,	// (0x000617ac) bg_popup_call2_rect_pane_g5

0xdc09,	// (0x000617b4) bg_popup_call2_rect_pane_g6

0xdc11,	// (0x000617bc) bg_popup_call2_rect_pane_g7

0xdc19,	// (0x000617c4) bg_popup_call2_rect_pane_g8

0xdc21,	// (0x000617cc) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x00063072) bg_popup_call2_rect_pane_g

0xdc29,	// (0x000617d4) bg_popup_call2_bubble_pane_g1

0xdc31,	// (0x000617dc) bg_popup_call2_bubble_pane_g2

0xdc39,	// (0x000617e4) bg_popup_call2_bubble_pane_g3

0xdc41,	// (0x000617ec) bg_popup_call2_bubble_pane_g4

0xdc49,	// (0x000617f4) bg_popup_call2_bubble_pane_g5

0xdc51,	// (0x000617fc) bg_popup_call2_bubble_pane_g6

0xdc59,	// (0x00061804) bg_popup_call2_bubble_pane_g7

0xdc61,	// (0x0006180c) bg_popup_call2_bubble_pane_g8

0xdc69,	// (0x00061814) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x00063085) bg_popup_call2_bubble_pane_g

0x49a9,	// (0x00058554) aid_cale_week_size_cell_pane

0x2418,	// (0x00055fc3) aid_cams_cif_uncrop_pane_ParamLimits

0x2418,	// (0x00055fc3) aid_cams_cif_uncrop_pane

0x4f9d,	// (0x00058b48) aid_cams_size_cell_ParamLimits

0x4f9d,	// (0x00058b48) aid_cams_size_cell

0x4fa9,	// (0x00058b54) grid_cams_pane_ParamLimits

0x4fb7,	// (0x00058b62) linegrid_cams_pane_ParamLimits

0x508e,	// (0x00058c39) call_video_pane_t1

0x50af,	// (0x00058c5a) call_video_pane_t2

0x0001,

0xf1e2,	// (0x00062d8d) call_video_pane_t

0x55f6,	// (0x000591a1) aid_cale_month_size_cell_pane_ParamLimits

0x55f6,	// (0x000591a1) aid_cale_month_size_cell_pane

0xf55f,	// (0x0006310a) smil_status_volume_pane_g

0x72a1,	// (0x0005ae4c) volume_smil_pane_ParamLimits

0x42e3,	// (0x00057e8e) aid_popup2_width_pane

0x489a,	// (0x00058445) cell_qdial_pane_g4_ParamLimits

0x489a,	// (0x00058445) cell_qdial_pane_g4

0x64a6,	// (0x0005a051) aid_blid_cardinal_pane_ParamLimits

0x64b6,	// (0x0005a061) aid_blid_destination_pane_ParamLimits

0x64b6,	// (0x0005a061) aid_blid_destination_pane

0x2418,	// (0x00055fc3) bg_popup_call_poc_act_pane_ParamLimits

0x2418,	// (0x00055fc3) bg_popup_call_poc_act_pane

0x2418,	// (0x00055fc3) bg_popup_call_poc_inact_pane_ParamLimits

0x2418,	// (0x00055fc3) bg_popup_call_poc_inact_pane

0xdc71,	// (0x0006181c) bg_popup_call_poc_act_pane_g1

0xdc79,	// (0x00061824) bg_popup_call_poc_act_pane_g2

0xdc81,	// (0x0006182c) bg_popup_call_poc_act_pane_g3

0xdc41,	// (0x000617ec) bg_popup_call_poc_act_pane_g4

0xdc49,	// (0x000617f4) bg_popup_call_poc_act_pane_g5

0xdc89,	// (0x00061834) bg_popup_call_poc_act_pane_g6

0xdc59,	// (0x00061804) bg_popup_call_poc_act_pane_g7

0xdc91,	// (0x0006183c) bg_popup_call_poc_act_pane_g8

0x1c0b,	// (0x000557b6) main_usb_pane

0x70fa,	// (0x0005aca5) popup_cale_lunar_info_window

0x53d8,	// (0x00058f83) im_reading_pane_t1_ParamLimits

0x27cd,	// (0x00056378) list_im_pane_ParamLimits

0x27de,	// (0x00056389) scroll_pane_cp07_ParamLimits

0x1c0b,	// (0x000557b6) grid_highlight_pane_cp012

0x2418,	// (0x00055fc3) mup_scale_pane_ParamLimits

0xcbb3,	// (0x0006075e) main_usb_pane_g1_ParamLimits

0xcbb3,	// (0x0006075e) main_usb_pane_g1

0x6e7c,	// (0x0005aa27) main_usb_pane_g2_ParamLimits

0x6e7c,	// (0x0005aa27) main_usb_pane_g2

0x0001,

0xf504,	// (0x000630af) main_usb_pane_g_ParamLimits

0xf504,	// (0x000630af) main_usb_pane_g

0x6e88,	// (0x0005aa33) main_usb_pane_t1_ParamLimits

0x6e88,	// (0x0005aa33) main_usb_pane_t1

0x6e9a,	// (0x0005aa45) main_usb_pane_t2_ParamLimits

0x6e9a,	// (0x0005aa45) main_usb_pane_t2

0x6eac,	// (0x0005aa57) main_usb_pane_t3_ParamLimits

0x6eac,	// (0x0005aa57) main_usb_pane_t3

0x6ebe,	// (0x0005aa69) main_usb_pane_t4_ParamLimits

0x6ebe,	// (0x0005aa69) main_usb_pane_t4

0x6ed0,	// (0x0005aa7b) main_usb_pane_t5_ParamLimits

0x6ed0,	// (0x0005aa7b) main_usb_pane_t5

0x6ee2,	// (0x0005aa8d) main_usb_pane_t6_ParamLimits

0x6ee2,	// (0x0005aa8d) main_usb_pane_t6

0x0005,

0xf509,	// (0x000630b4) main_usb_pane_t_ParamLimits

0x644c,	// (0x00059ff7) aid_text_placing

0x6458,	// (0x0005a003) main_location2_pane_t1_ParamLimits

0x646c,	// (0x0005a017) main_location2_pane_t2_ParamLimits

0x6480,	// (0x0005a02b) main_location2_pane_t3_ParamLimits

0x6494,	// (0x0005a03f) main_location2_pane_t4_ParamLimits

0x6494,	// (0x0005a03f) main_location2_pane_t4

0xf323,	// (0x00062ece) main_location2_pane_t_ParamLimits

0x2446,	// (0x00055ff1) find_pinb_pane_g2_ParamLimits

0x2446,	// (0x00055ff1) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x00062c45) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x00062c45) find_pinb_pane_g

0x2452,	// (0x00055ffd) find_pinb_pane_t1_ParamLimits

0x2464,	// (0x0005600f) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00062c4a) find_pinb_pane_t_ParamLimits

0x1c0b,	// (0x000557b6) main_call3_pane

0x5b99,	// (0x00059744) cale_month_day_heading_pane_t1_ParamLimits

0x5c1f,	// (0x000597ca) cale_month_day_heading_pane_t2_ParamLimits

0x5c98,	// (0x00059843) cale_month_day_heading_pane_t3_ParamLimits

0x5d11,	// (0x000598bc) cale_month_day_heading_pane_t4_ParamLimits

0x5d8a,	// (0x00059935) cale_month_day_heading_pane_t5_ParamLimits

0x5e03,	// (0x000599ae) cale_month_day_heading_pane_t6_ParamLimits

0x5e7c,	// (0x00059a27) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00062dc5) cale_month_day_heading_pane_t_ParamLimits

0x2a28,	// (0x000565d3) smil_status_volume_pane

0x69d8,	// (0x0005a583) postcard_address_pane_ParamLimits

0x69d8,	// (0x0005a583) postcard_address_pane

0x69e4,	// (0x0005a58f) postcard_message_pane_ParamLimits

0x69e4,	// (0x0005a58f) postcard_message_pane

0x6e47,	// (0x0005a9f2) call2_cli_visual_pane_t1_ParamLimits

0x6e47,	// (0x0005a9f2) call2_cli_visual_pane_t1

0xde08,	// (0x000619b3) postcard_message_pane_t1_ParamLimits

0xde08,	// (0x000619b3) postcard_message_pane_t1

0xddf0,	// (0x0006199b) postcard_address_pane_t1_ParamLimits

0xddf0,	// (0x0006199b) postcard_address_pane_t1

0x73d2,	// (0x0005af7d) popup_call3_audio_in_window_ParamLimits

0x73d2,	// (0x0005af7d) popup_call3_audio_in_window

0x72b6,	// (0x0005ae61) bg_popup_call3_in_pane_ParamLimits

0x72b6,	// (0x0005ae61) bg_popup_call3_in_pane

0x7318,	// (0x0005aec3) popup_call3_audio_in_window_g1_ParamLimits

0x7318,	// (0x0005aec3) popup_call3_audio_in_window_g1

0x7330,	// (0x0005aedb) popup_call3_audio_in_window_g2_ParamLimits

0x7330,	// (0x0005aedb) popup_call3_audio_in_window_g2

0x7348,	// (0x0005aef3) popup_call3_audio_in_window_g3_ParamLimits

0x7348,	// (0x0005aef3) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x00063111) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x00063111) popup_call3_audio_in_window_g

0x7370,	// (0x0005af1b) popup_call3_audio_in_window_t1_ParamLimits

0x7370,	// (0x0005af1b) popup_call3_audio_in_window_t1

0x7398,	// (0x0005af43) popup_call3_audio_in_window_t2_ParamLimits

0x7398,	// (0x0005af43) popup_call3_audio_in_window_t2

0x73c0,	// (0x0005af6b) popup_call3_audio_in_window_t3_ParamLimits

0x73c0,	// (0x0005af6b) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0006311a) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0006311a) popup_call3_audio_in_window_t

0x26de,	// (0x00056289) bg_popup_call3_rect_pane

0xdbe9,	// (0x00061794) bg_popup_call3_rect_pane_g1

0x25e5,	// (0x00056190) bg_popup_call3_rect_pane_g2

0xdbf1,	// (0x0006179c) bg_popup_call3_rect_pane_g3

0xdbf9,	// (0x000617a4) bg_popup_call3_rect_pane_g4

0xdc01,	// (0x000617ac) bg_popup_call3_rect_pane_g5

0xdc09,	// (0x000617b4) bg_popup_call3_rect_pane_g6

0xdc11,	// (0x000617bc) bg_popup_call3_rect_pane_g7

0x17ee,	// (0x00055399) mup_visualizer_osc_pane

0x17ee,	// (0x00055399) mup_visualizer_spec_pane

0x72d6,	// (0x0005ae81) call3_video_qcif_pane_ParamLimits

0x72d6,	// (0x0005ae81) call3_video_qcif_pane

0x72e8,	// (0x0005ae93) call3_video_qcif_uncrop_pane_ParamLimits

0x72e8,	// (0x0005ae93) call3_video_qcif_uncrop_pane

0x72f6,	// (0x0005aea1) call3_video_subqcif_pane_ParamLimits

0x72f6,	// (0x0005aea1) call3_video_subqcif_pane

0x7308,	// (0x0005aeb3) call3_video_subqcif_uncrop_pane_ParamLimits

0x7308,	// (0x0005aeb3) call3_video_subqcif_uncrop_pane

0x7360,	// (0x0005af0b) popup_call3_audio_in_window_g4_ParamLimits

0x7360,	// (0x0005af0b) popup_call3_audio_in_window_g4

0x17ee,	// (0x00055399) mup_spec_half_pane

0x17ee,	// (0x00055399) mup_spec_half_pane_cp

0x17ee,	// (0x00055399) mup_osc_middle_pane

0x2714,	// (0x000562bf) mup_visualizer_osc_pane_g1

0xdda3,	// (0x0006194e) mup_spec_bar_pane_ParamLimits

0xdda3,	// (0x0006194e) mup_spec_bar_pane

0x2714,	// (0x000562bf) mup_spec_bar_pane_g1

0x2714,	// (0x000562bf) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x00062f48) mup_spec_bar_pane_g

0x49a9,	// (0x00058554) aid_cale_week_size_cell_pane_ParamLimits

0x49be,	// (0x00058569) bg_cale_heading_pane_ParamLimits

0x2640,	// (0x000561eb) bg_cale_pane_cp01_ParamLimits

0x49de,	// (0x00058589) cale_week_corner_pane_ParamLimits

0x49f8,	// (0x000585a3) cale_week_day_heading_pane_ParamLimits

0x4a18,	// (0x000585c3) cale_week_scroll_pane_g1_ParamLimits

0x4a33,	// (0x000585de) cale_week_scroll_pane_g2_ParamLimits

0x4a46,	// (0x000585f1) cale_week_scroll_pane_g3_ParamLimits

0x4a59,	// (0x00058604) cale_week_scroll_pane_g4_ParamLimits

0x4a6c,	// (0x00058617) cale_week_scroll_pane_g5_ParamLimits

0x4a7f,	// (0x0005862a) cale_week_scroll_pane_g6_ParamLimits

0x4a92,	// (0x0005863d) cale_week_scroll_pane_g7_ParamLimits

0x4aa7,	// (0x00058652) cale_week_scroll_pane_g8_ParamLimits

0x4abc,	// (0x00058667) cale_week_scroll_pane_g9_ParamLimits

0x4acf,	// (0x0005867a) cale_week_scroll_pane_g10_ParamLimits

0x4ae2,	// (0x0005868d) cale_week_scroll_pane_g11_ParamLimits

0x4af5,	// (0x000586a0) cale_week_scroll_pane_g12_ParamLimits

0x4b0c,	// (0x000586b7) cale_week_scroll_pane_g13_ParamLimits

0x4b27,	// (0x000586d2) cale_week_scroll_pane_g14_ParamLimits

0x4b42,	// (0x000586ed) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00062cd6) cale_week_scroll_pane_g_ParamLimits

0x4b72,	// (0x0005871d) cale_week_time_pane_ParamLimits

0x4b87,	// (0x00058732) grid_cale_week_pane_ParamLimits

0x265d,	// (0x00056208) listscroll_cale_week_pane_t1

0x266f,	// (0x0005621a) scroll_pane_cp08_ParamLimits

0x566a,	// (0x00059215) cale_month_corner_pane_ParamLimits

0x29fe,	// (0x000565a9) cale_month_pane_t1

0x5b1c,	// (0x000596c7) cale_month_week_pane_ParamLimits

0xcbb3,	// (0x0006075e) popup_call_status_window_g1_ParamLimits

0x62a3,	// (0x00059e4e) popup_call_status_window_g2_ParamLimits

0x62af,	// (0x00059e5a) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x00062e55) popup_call_status_window_g_ParamLimits

0x2dce,	// (0x00056979) aid_call2_pane

0x6832,	// (0x0005a3dd) msg_header_pane_g1

0x69d8,	// (0x0005a583) postcard_address2_pane_ParamLimits

0x69d8,	// (0x0005a583) postcard_address2_pane

0x69e4,	// (0x0005a58f) postcard_message2_pane_ParamLimits

0x69e4,	// (0x0005a58f) postcard_message2_pane

0x7266,	// (0x0005ae11) message2_row_pane_ParamLimits

0x7266,	// (0x0005ae11) message2_row_pane

0x7281,	// (0x0005ae2c) address2_row_pane_ParamLimits

0x7281,	// (0x0005ae2c) address2_row_pane

0xdd70,	// (0x0006191b) postcard_message2_row_pane_g1

0xdd78,	// (0x00061923) postcard_message2_row_pane_t1

0xdd70,	// (0x0006191b) address2_row_pane_g1

0xdd78,	// (0x00061923) address2_row_pane_t1

0x4e0d,	// (0x000589b8) aid_size_cell_vorec

0x1c0b,	// (0x000557b6) main_rss_pane

0xdd86,	// (0x00061931) rss_list_single_pane_ParamLimits

0xdd86,	// (0x00061931) rss_list_single_pane

0xdd94,	// (0x0006193f) rss_list_single_pane_t1

0xdd94,	// (0x0006193f) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x00063105) rss_list_single_pane_t

0x1c0b,	// (0x000557b6) main_camera2_pane

0x1c0b,	// (0x000557b6) main_video2_pane

0x44ee,	// (0x00058099) cams_zoom_pane_cp2_ParamLimits

0x44ee,	// (0x00058099) cams_zoom_pane_cp2

0x44ee,	// (0x00058099) image2_vga_pane_ParamLimits

0x44ee,	// (0x00058099) image2_vga_pane

0x2dfa,	// (0x000569a5) main_camera2_pane_g1_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g1

0x2dfa,	// (0x000569a5) main_camera2_pane_g2_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g2

0x2dfa,	// (0x000569a5) main_camera2_pane_g3_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g3

0x2dfa,	// (0x000569a5) main_camera2_pane_g4_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g4

0x2dfa,	// (0x000569a5) main_camera2_pane_g5_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g5

0x2dfa,	// (0x000569a5) main_camera2_pane_g6_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g6

0x2dfa,	// (0x000569a5) main_camera2_pane_g7_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g7

0x2dfa,	// (0x000569a5) main_camera2_pane_g8_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g8

0x0008,

0xf576,	// (0x00063121) main_camera2_pane_g_ParamLimits

0xf576,	// (0x00063121) main_camera2_pane_g

0x73ef,	// (0x0005af9a) main_camera2_pane_t1_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t1

0x73ef,	// (0x0005af9a) main_camera2_pane_t2_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t2

0x73ef,	// (0x0005af9a) main_camera2_pane_t3_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t3

0x73ef,	// (0x0005af9a) main_camera2_pane_t4_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t4

0x0006,

0xf589,	// (0x00063134) main_camera2_pane_t_ParamLimits

0xf589,	// (0x00063134) main_camera2_pane_t

0x7417,	// (0x0005afc2) cams_zoom_pane_cp4_ParamLimits

0x7417,	// (0x0005afc2) cams_zoom_pane_cp4

0x70a5,	// (0x0005ac50) image2_cif_pane_ParamLimits

0x70a5,	// (0x0005ac50) image2_cif_pane

0x44ee,	// (0x00058099) image2_subqcif_pane_ParamLimits

0x44ee,	// (0x00058099) image2_subqcif_pane

0x7425,	// (0x0005afd0) main_video2_pane_g1_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g1

0x7425,	// (0x0005afd0) main_video2_pane_g2_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g2

0x7425,	// (0x0005afd0) main_video2_pane_g3_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g3

0x7425,	// (0x0005afd0) main_video2_pane_g4_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g4

0x7425,	// (0x0005afd0) main_video2_pane_g5_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g5

0x7425,	// (0x0005afd0) main_video2_pane_g6_ParamLimits

0x7425,	// (0x0005afd0) main_video2_pane_g6

0x0005,

0xf598,	// (0x00063143) main_video2_pane_g_ParamLimits

0xf598,	// (0x00063143) main_video2_pane_g

0x7433,	// (0x0005afde) main_video2_pane_t1_ParamLimits

0x7433,	// (0x0005afde) main_video2_pane_t1

0x7433,	// (0x0005afde) main_video2_pane_t2_ParamLimits

0x7433,	// (0x0005afde) main_video2_pane_t2

0x7433,	// (0x0005afde) main_video2_pane_t3_ParamLimits

0x7433,	// (0x0005afde) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x00063150) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x00063150) main_video2_pane_t

0x6f78,	// (0x0005ab23) call_muted_g2

0x0001,

0xf54c,	// (0x000630f7) call_muted_g

0x1c0b,	// (0x000557b6) main_mup2_pane

0x24af,	// (0x0005605a) main_mup2_pane_g1_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g1

0x24af,	// (0x0005605a) main_mup2_pane_g2_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g2

0x04b0,	// (0x0005405b) main_mup_pane_g13_cp1

0x4508,	// (0x000580b3) mup_volume_pane_cp1

0x24af,	// (0x0005605a) main_mup2_pane_g4_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g4

0x24af,	// (0x0005605a) main_mup2_pane_g5_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g5

0x24af,	// (0x0005605a) main_mup2_pane_g6_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g6

0x24af,	// (0x0005605a) main_mup2_pane_g7_ParamLimits

0x24af,	// (0x0005605a) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x00063157) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x00063157) main_mup2_pane_g

0x24bd,	// (0x00056068) main_mup2_pane_t1_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t1

0x24bd,	// (0x00056068) main_mup2_pane_t2_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t2

0x24bd,	// (0x00056068) main_mup2_pane_t3_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t3

0x24bd,	// (0x00056068) main_mup2_pane_t4_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t4

0x24bd,	// (0x00056068) main_mup2_pane_t5_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t5

0x24bd,	// (0x00056068) main_mup2_pane_t6_ParamLimits

0x24bd,	// (0x00056068) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x00063166) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x00063166) main_mup2_pane_t

0xcbc1,	// (0x0006076c) mup2_visualizer_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup2_visualizer_pane

0xcbc1,	// (0x0006076c) mup_progress_pane_cp_ParamLimits

0xcbc1,	// (0x0006076c) mup_progress_pane_cp

0x74fa,	// (0x0005b0a5) mup_volume_pane_cp_ParamLimits

0x74fa,	// (0x0005b0a5) mup_volume_pane_cp

0x2493,	// (0x0005603e) mup2_visualizer_pane_g1_ParamLimits

0x2493,	// (0x0005603e) mup2_visualizer_pane_g1

0x24a1,	// (0x0005604c) mup2_visualizer_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) mup2_visualizer_pane_g2

0x24a1,	// (0x0005604c) mup2_visualizer_pane_g3_ParamLimits

0x24a1,	// (0x0005604c) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00062c4f) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00062c4f) mup2_visualizer_pane_g

0xcd26,	// (0x000608d1) aid_size_cell_fmradio

0x708e,	// (0x0005ac39) aid_height_parent_landcape

0x285c,	// (0x00056407) wml_content_pane_cp

0x2864,	// (0x0005640f) wml_tabs_pane

0x286d,	// (0x00056418) popup_wml_miniature_window

0x2875,	// (0x00056420) scroll_pane_cp021

0x2889,	// (0x00056434) wml_content_pane_comp8

0x1c0b,	// (0x000557b6) bg_popup_sub_pane_cp05

0xde3a,	// (0x000619e5) popup_wml_miniature_window_g1

0xde42,	// (0x000619ed) wml_miniature_view_pane

0x7447,	// (0x0005aff2) aid_size_wml_view

0x744f,	// (0x0005affa) wml_miniature_view_pane_g1

0x7458,	// (0x0005b003) wml_miniature_view_pane_g2

0x7461,	// (0x0005b00c) wml_miniature_view_pane_g3

0x7469,	// (0x0005b014) wml_miniature_view_pane_g4

0x7471,	// (0x0005b01c) wml_miniature_view_pane_g5

0x7479,	// (0x0005b024) wml_miniature_view_pane_g6

0x7481,	// (0x0005b02c) wml_miniature_view_pane_g7

0x7489,	// (0x0005b034) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x00063173) wml_miniature_view_pane_g

0xde4a,	// (0x000619f5) background_graphic_ParamLimits

0xde4a,	// (0x000619f5) background_graphic

0xde56,	// (0x00061a01) wml_tabs_2_pane

0xde5f,	// (0x00061a0a) wml_tabs_3_pane_ParamLimits

0xde5f,	// (0x00061a0a) wml_tabs_3_pane

0xde71,	// (0x00061a1c) wml_tabs_4_pane_ParamLimits

0xde71,	// (0x00061a1c) wml_tabs_4_pane

0xde87,	// (0x00061a32) wml_tabs_5_pane_ParamLimits

0xde87,	// (0x00061a32) wml_tabs_5_pane

0xdea1,	// (0x00061a4c) wml_tabs_pane_g2_ParamLimits

0xdea1,	// (0x00061a4c) wml_tabs_pane_g2

0xdeb6,	// (0x00061a61) wml_tabs_pane_g3_ParamLimits

0xdeb6,	// (0x00061a61) wml_tabs_pane_g3

0xdecb,	// (0x00061a76) wml_tabs_2_active_pane_ParamLimits

0xdecb,	// (0x00061a76) wml_tabs_2_active_pane

0xdecb,	// (0x00061a76) wml_tabs_2_passive_pane_ParamLimits

0xdecb,	// (0x00061a76) wml_tabs_2_passive_pane

0x7491,	// (0x0005b03c) wml_tabs_3_active_pane_cp_ParamLimits

0x7491,	// (0x0005b03c) wml_tabs_3_active_pane_cp

0x74a2,	// (0x0005b04d) wml_tabs_3_passive_pane_ParamLimits

0x74a2,	// (0x0005b04d) wml_tabs_3_passive_pane

0x74b3,	// (0x0005b05e) wml_tabs_3_passive_pane_cp_ParamLimits

0x74b3,	// (0x0005b05e) wml_tabs_3_passive_pane_cp

0x74c4,	// (0x0005b06f) tabs_4_active_pane

0x74cc,	// (0x0005b077) tabs_4_passive_pane

0x74d4,	// (0x0005b07f) tabs_4_passive_pane_cp

0x74dc,	// (0x0005b087) tabs_4_passive_pane_cp2

0x6e74,	// (0x0005aa1f) aid_height_text

0xcbc1,	// (0x0006076c) mup_volume_cont_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup_volume_cont_pane

0x17ee,	// (0x00055399) aid_size_cell_pinb

0x17ee,	// (0x00055399) aid_size_list_pinb

0xcbc1,	// (0x0006076c) mup2_volume_cont_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup2_volume_cont_pane

0x74e4,	// (0x0005b08f) mup2_volume_cont_pane_g1_ParamLimits

0x74e4,	// (0x0005b08f) mup2_volume_cont_pane_g1

0x42ef,	// (0x00057e9a) aid_size_cell_touch_ParamLimits

0x42ef,	// (0x00057e9a) aid_size_cell_touch

0x4512,	// (0x000580bd) touch_pane_ParamLimits

0x4512,	// (0x000580bd) touch_pane

0x4508,	// (0x000580b3) main_rss2_pane

0xdee2,	// (0x00061a8d) listscroll_rss2_pane

0xdeeb,	// (0x00061a96) rss2_navigation_pane

0xdef3,	// (0x00061a9e) list_rss2_pane

0x2efd,	// (0x00056aa8) scroll_pane_cp22

0xdefb,	// (0x00061aa6) rss2_navigation_pane_g1

0xdf04,	// (0x00061aaf) rss2_navigation_pane_g2

0xdf0c,	// (0x00061ab7) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x00063184) rss2_navigation_pane_g

0xdf14,	// (0x00061abf) rss2_navigation_pane_t1

0x7510,	// (0x0005b0bb) rss2_list_single_pane_ParamLimits

0x7510,	// (0x0005b0bb) rss2_list_single_pane

0xdf22,	// (0x00061acd) rss2_list_single_pane_t2

0xdf30,	// (0x00061adb) rss2_list_single_pane_t3_ParamLimits

0xdf30,	// (0x00061adb) rss2_list_single_pane_t3

0xdf4d,	// (0x00061af8) rss2_list_single_pane_t4

0x6118,	// (0x00059cc3) smil_status_pane_g1

0x70a5,	// (0x0005ac50) main_image2_pane_ParamLimits

0x70a5,	// (0x0005ac50) main_image2_pane

0x2dfa,	// (0x000569a5) main_camera2_pane_g9_ParamLimits

0x2dfa,	// (0x000569a5) main_camera2_pane_g9

0x73ef,	// (0x0005af9a) main_camera2_pane_t5_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t5

0x7403,	// (0x0005afae) main_camera2_pane_t6_ParamLimits

0x7403,	// (0x0005afae) main_camera2_pane_t6

0x7541,	// (0x0005b0ec) main_image2_pane_g1_ParamLimits

0x7541,	// (0x0005b0ec) main_image2_pane_g1

0x6bac,	// (0x0005a757) smil2_video_pane_ParamLimits

0x6bac,	// (0x0005a757) smil2_video_pane

0x4157,	// (0x00057d02) aid_zoom_text_primary_cp

0x44a3,	// (0x0005804e) popup_preview_fixed_window

0x27c5,	// (0x00056370) im_reading_pane_g1

0x73e1,	// (0x0005af8c) cams2_bc_adjust_pane_cp_ParamLimits

0x73e1,	// (0x0005af8c) cams2_bc_adjust_pane_cp

0x44ee,	// (0x00058099) cams2_bc_adjust_pane_ParamLimits

0x44ee,	// (0x00058099) cams2_bc_adjust_pane

0x04b0,	// (0x0005405b) cams2_bc_adjust_pane_g1

0x4508,	// (0x000580b3) cams2_slider_pane

0x04b0,	// (0x0005405b) cams2_slider_pane_g1

0x04b0,	// (0x0005405b) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0006318b) cams2_slider_pane_g

0x45e0,	// (0x0005818b) calc_display_pane_ParamLimits

0x45fe,	// (0x000581a9) calc_paper_pane_ParamLimits

0x461a,	// (0x000581c5) grid_calc_pane_ParamLimits

0x6311,	// (0x00059ebc) popup_clock_digital_window_t1_ParamLimits

0xccc3,	// (0x0006086e) main_image_pane_t1

0x45c6,	// (0x00058171) aid_size_cell_calc_ParamLimits

0x45c6,	// (0x00058171) aid_size_cell_calc

0x70d6,	// (0x0005ac81) popup_blid_sat_info2_window_ParamLimits

0x70d6,	// (0x0005ac81) popup_blid_sat_info2_window

0xdf5b,	// (0x00061b06) aid_size_cell_blid

0xcbc1,	// (0x0006076c) bg_popup_window_pane_cp07

0xdf78,	// (0x00061b23) grid_popup_blid_pane

0xdf82,	// (0x00061b2d) heading_pane_cp05_ParamLimits

0xdf82,	// (0x00061b2d) heading_pane_cp05

0xe04c,	// (0x00061bf7) cell_popup_blid_pane_ParamLimits

0xe04c,	// (0x00061bf7) cell_popup_blid_pane

0xe070,	// (0x00061c1b) cell_popup_blid_pane_g1

0xe078,	// (0x00061c23) cell_popup_blid_pane_t1

0xcbc1,	// (0x0006076c) mup2_indicator_pane_ParamLimits

0xcbc1,	// (0x0006076c) mup2_indicator_pane

0x17ee,	// (0x00055399) mup2_visualizer_osc_pane

0xde24,	// (0x000619cf) mup2_visualizer_spec_pane_ParamLimits

0xde24,	// (0x000619cf) mup2_visualizer_spec_pane

0x17ee,	// (0x00055399) mup2_spec_half_pane

0x17ee,	// (0x00055399) mup2_spec_half_pane_cp

0xe086,	// (0x00061c31) mup2_spec_bar_pane_ParamLimits

0xe086,	// (0x00061c31) mup2_spec_bar_pane

0x2714,	// (0x000562bf) mup2_spec_bar_pane_g1

0xe0a5,	// (0x00061c50) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000631b1) mup2_spec_bar_pane_g

0x17ee,	// (0x00055399) mup2_osc_middle_pane

0x2714,	// (0x000562bf) mup2_visualizer_osc_pane_g1

0x1818,	// (0x000553c3) popup_number_entry_window_t1_ParamLimits

0x182b,	// (0x000553d6) popup_number_entry_window_t2_ParamLimits

0x183d,	// (0x000553e8) popup_number_entry_window_t3_ParamLimits

0x4569,	// (0x00058114) popup_number_entry_window_t5_ParamLimits

0x4569,	// (0x00058114) popup_number_entry_window_t5

0xf045,	// (0x00062bf0) popup_number_entry_window_t_ParamLimits

0x184f,	// (0x000553fa) text_title_cp2_ParamLimits

0x68ac,	// (0x0005a457) aid_hotspot_pointer_text2_pane

0x693a,	// (0x0005a4e5) main_viewer_pane_g9_ParamLimits

0x693a,	// (0x0005a4e5) main_viewer_pane_g9

0x29fe,	// (0x000565a9) cale_month_pane_t1_ParamLimits

0x2a3b,	// (0x000565e6) bg_cale_pane_ParamLimits

0x2a53,	// (0x000565fe) list_cale_pane_ParamLimits

0x2a64,	// (0x0005660f) listscroll_cale_day_pane_t1

0x2a76,	// (0x00056621) scroll_pane_cp09_ParamLimits

0x6594,	// (0x0005a13f) main_mup_eq_pane_t1_ParamLimits

0x6594,	// (0x0005a13f) main_mup_eq_pane_t1

0x65ae,	// (0x0005a159) main_mup_eq_pane_t2_ParamLimits

0x65ae,	// (0x0005a159) main_mup_eq_pane_t2

0x65c8,	// (0x0005a173) main_mup_eq_pane_t3_ParamLimits

0x65c8,	// (0x0005a173) main_mup_eq_pane_t3

0x65e0,	// (0x0005a18b) main_mup_eq_pane_t4_ParamLimits

0x65e0,	// (0x0005a18b) main_mup_eq_pane_t4

0x65f8,	// (0x0005a1a3) main_mup_eq_pane_t5_ParamLimits

0x65f8,	// (0x0005a1a3) main_mup_eq_pane_t5

0x6610,	// (0x0005a1bb) main_mup_eq_pane_t6_ParamLimits

0x6610,	// (0x0005a1bb) main_mup_eq_pane_t6

0x6624,	// (0x0005a1cf) main_mup_eq_pane_t7_ParamLimits

0x6624,	// (0x0005a1cf) main_mup_eq_pane_t7

0x6638,	// (0x0005a1e3) main_mup_eq_pane_t8_ParamLimits

0x6638,	// (0x0005a1e3) main_mup_eq_pane_t8

0x664e,	// (0x0005a1f9) main_mup_eq_pane_t9_ParamLimits

0x664e,	// (0x0005a1f9) main_mup_eq_pane_t9

0x6666,	// (0x0005a211) main_mup_eq_pane_t10_ParamLimits

0x6666,	// (0x0005a211) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x00062f54) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x00062f54) main_mup_eq_pane_t

0x6723,	// (0x0005a2ce) mup_equalizer_pane_cp5_ParamLimits

0x6739,	// (0x0005a2e4) mup_equalizer_pane_cp6_ParamLimits

0x6751,	// (0x0005a2fc) mup_equalizer_pane_cp7_ParamLimits

0x4508,	// (0x000580b3) main_gallery_pane

0xddc2,	// (0x0006196d) smil2_volume_pane

0xddca,	// (0x00061975) smil_status_volume_pane_g1_ParamLimits

0xdddd,	// (0x00061988) smil_status_volume_pane_g2_ParamLimits

0x7294,	// (0x0005ae3f) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0006310a) smil_status_volume_pane_g_ParamLimits

0xcbc1,	// (0x0006076c) bg_popup_window_pane_cp07_ParamLimits

0xdf63,	// (0x00061b0e) blid_firmament_pane

0x2485,	// (0x00056030) aid_size_cell_gallery_ParamLimits

0x2485,	// (0x00056030) aid_size_cell_gallery

0x2485,	// (0x00056030) grid_gallery_pane_ParamLimits

0x2485,	// (0x00056030) grid_gallery_pane

0x322b,	// (0x00056dd6) cell_gallery_pane_ParamLimits

0x322b,	// (0x00056dd6) cell_gallery_pane

0x223f,	// (0x00055dea) bg_cell_gallery_focus_pane_ParamLimits

0x223f,	// (0x00055dea) bg_cell_gallery_focus_pane

0x2493,	// (0x0005603e) cell_gallery_pane_g1_ParamLimits

0x2493,	// (0x0005603e) cell_gallery_pane_g1

0x2493,	// (0x0005603e) cell_gallery_pane_g2_ParamLimits

0x2493,	// (0x0005603e) cell_gallery_pane_g2

0x2493,	// (0x0005603e) cell_gallery_pane_g3_ParamLimits

0x2493,	// (0x0005603e) cell_gallery_pane_g3

0x24a1,	// (0x0005604c) cell_gallery_pane_g4_ParamLimits

0x24a1,	// (0x0005604c) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x000631b6) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x000631b6) cell_gallery_pane_g

0xe0af,	// (0x00061c5a) bg_cell_gallery_focus_pane_g1

0xe0b7,	// (0x00061c62) bg_cell_gallery_focus_pane_g2

0xe0bf,	// (0x00061c6a) bg_cell_gallery_focus_pane_g3

0xe0c7,	// (0x00061c72) bg_cell_gallery_focus_pane_g4

0xe0cf,	// (0x00061c7a) bg_cell_gallery_focus_pane_g5

0xe0d7,	// (0x00061c82) bg_cell_gallery_focus_pane_g6

0xe0df,	// (0x00061c8a) bg_cell_gallery_focus_pane_g7

0xe0e7,	// (0x00061c92) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x000631bf) bg_cell_gallery_focus_pane_g

0xe0ef,	// (0x00061c9a) aid_firma_cardinal

0xe103,	// (0x00061cae) blid_firmament_pane_t1

0xe11a,	// (0x00061cc5) blid_firmament_pane_t2

0xe131,	// (0x00061cdc) blid_firmament_pane_t3

0xe148,	// (0x00061cf3) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x000631d0) blid_firmament_pane_t

0xe15f,	// (0x00061d0a) blid_sat_info_pane

0x2714,	// (0x000562bf) blid_sat_info_pane_g1

0x2714,	// (0x000562bf) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x00062f48) blid_sat_info_pane_g

0xe16f,	// (0x00061d1a) blid_sat_info_pane_t1

0xe17d,	// (0x00061d28) smil2_volume_content_pane

0xe186,	// (0x00061d31) smil2_volume_pane_g1

0x257c,	// (0x00056127) smil2_volume_content_pane_g1

0xe18e,	// (0x00061d39) smil2_volume_content_pane_g2

0xe197,	// (0x00061d42) smil2_volume_content_pane_g3

0xe1a0,	// (0x00061d4b) smil2_volume_content_pane_g4

0xe1a9,	// (0x00061d54) smil2_volume_content_pane_g5

0xe1b2,	// (0x00061d5d) smil2_volume_content_pane_g6

0xe1bb,	// (0x00061d66) smil2_volume_content_pane_g7

0xe1c4,	// (0x00061d6f) smil2_volume_content_pane_g8

0xe1cd,	// (0x00061d78) smil2_volume_content_pane_g9

0xe1d6,	// (0x00061d81) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x000631d9) smil2_volume_content_pane_g

0x4c08,	// (0x000587b3) cale_week_day_heading_pane_t1_ParamLimits

0x4c23,	// (0x000587ce) cale_week_day_heading_pane_t2_ParamLimits

0x4c3e,	// (0x000587e9) cale_week_day_heading_pane_t3_ParamLimits

0x4c59,	// (0x00058804) cale_week_day_heading_pane_t4_ParamLimits

0x4c74,	// (0x0005881f) cale_week_day_heading_pane_t5_ParamLimits

0x4c8f,	// (0x0005883a) cale_week_day_heading_pane_t6_ParamLimits

0x4caa,	// (0x00058855) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00062cf7) cale_week_day_heading_pane_t_ParamLimits

0x268c,	// (0x00056237) bg_cale_side_pane_ParamLimits

0x4cc5,	// (0x00058870) cale_week_time_pane_t1_ParamLimits

0x4cdf,	// (0x0005888a) cale_week_time_pane_t2_ParamLimits

0x4cf9,	// (0x000588a4) cale_week_time_pane_t3_ParamLimits

0x4d13,	// (0x000588be) cale_week_time_pane_t4_ParamLimits

0x4d2d,	// (0x000588d8) cale_week_time_pane_t5_ParamLimits

0x4d47,	// (0x000588f2) cale_week_time_pane_t6_ParamLimits

0x4d65,	// (0x00058910) cale_week_time_pane_t7_ParamLimits

0x4d87,	// (0x00058932) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00062d06) cale_week_time_pane_t_ParamLimits

0x4dab,	// (0x00058956) cell_cale_week_pane_g2_ParamLimits

0x268c,	// (0x00056237) bg_cale_side_pane_cp01_ParamLimits

0x5f0d,	// (0x00059ab8) cale_month_week_pane_t1_ParamLimits

0x5f26,	// (0x00059ad1) cale_month_week_pane_t2_ParamLimits

0x5f3f,	// (0x00059aea) cale_month_week_pane_t3_ParamLimits

0x5f58,	// (0x00059b03) cale_month_week_pane_t4_ParamLimits

0x5f71,	// (0x00059b1c) cale_month_week_pane_t5_ParamLimits

0x5f92,	// (0x00059b3d) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00062dd4) cale_month_week_pane_t_ParamLimits

0x60d5,	// (0x00059c80) cell_cale_month_pane_g1_ParamLimits

0x4508,	// (0x000580b3) main_cale_event_viewer_pane

0x17ee,	// (0x00055399) listscroll_cale_event_viewer_pane

0xe1df,	// (0x00061d8a) list_cale_ev_pane

0xe1e7,	// (0x00061d92) scroll_pane_cp023

0xe1f3,	// (0x00061d9e) field_cale_ev_pane_ParamLimits

0xe1f3,	// (0x00061d9e) field_cale_ev_pane

0xe211,	// (0x00061dbc) field_cale_ev_content_pane_ParamLimits

0xe211,	// (0x00061dbc) field_cale_ev_content_pane

0xe21d,	// (0x00061dc8) field_cale_ev_pane_g1_ParamLimits

0xe21d,	// (0x00061dc8) field_cale_ev_pane_g1

0xe229,	// (0x00061dd4) field_cale_ev_pane_g2_ParamLimits

0xe229,	// (0x00061dd4) field_cale_ev_pane_g2

0xe241,	// (0x00061dec) field_cale_ev_pane_g3_ParamLimits

0xe241,	// (0x00061dec) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x000631ee) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x000631ee) field_cale_ev_pane_g

0xe259,	// (0x00061e04) field_cale_ev_pane_t1_ParamLimits

0xe259,	// (0x00061e04) field_cale_ev_pane_t1

0x25ff,	// (0x000561aa) field_cale_ev_content_pane_t1_ParamLimits

0x25ff,	// (0x000561aa) field_cale_ev_content_pane_t1

0x32ce,	// (0x00056e79) bg_button_pane_cp01

0x4999,	// (0x00058544) listscroll_cale_week_pane_ParamLimits

0x2637,	// (0x000561e2) popup_toolbar_window_cp01

0x265d,	// (0x00056208) listscroll_cale_week_pane_t1_ParamLimits

0x4999,	// (0x00058544) listscroll_cale_day_pane_ParamLimits

0x2637,	// (0x000561e2) popup_toolbar_window_cp02

0x2a64,	// (0x0005660f) listscroll_cale_day_pane_t1_ParamLimits

0x4999,	// (0x00058544) main_cale_month_pane_ParamLimits

0x71dd,	// (0x0005ad88) popup_toolbar_window_cp03_ParamLimits

0x71dd,	// (0x0005ad88) popup_toolbar_window_cp03

0x6ac2,	// (0x0005a66d) main_image_pane_g2_ParamLimits

0x6ac2,	// (0x0005a66d) main_image_pane_g2

0x6ace,	// (0x0005a679) main_image_pane_g3_ParamLimits

0x6ace,	// (0x0005a679) main_image_pane_g3

0x0002,

0xf43b,	// (0x00062fe6) main_image_pane_g_ParamLimits

0xf43b,	// (0x00062fe6) main_image_pane_g

0xccc3,	// (0x0006086e) main_image_pane_t1_ParamLimits

0x6ada,	// (0x0005a685) main_image_pane_t2_ParamLimits

0x6ada,	// (0x0005a685) main_image_pane_t2

0x6aec,	// (0x0005a697) main_image_pane_t3_ParamLimits

0x6aec,	// (0x0005a697) main_image_pane_t3

0x6afe,	// (0x0005a6a9) main_image_pane_t4_ParamLimits

0x6afe,	// (0x0005a6a9) main_image_pane_t4

0x0003,

0xf442,	// (0x00062fed) main_image_pane_t_ParamLimits

0xf442,	// (0x00062fed) main_image_pane_t

0x6b10,	// (0x0005a6bb) popup_image_details_window_cp01

0x6b1a,	// (0x0005a6c5) popup_toobar_trans_pane_cp01_ParamLimits

0x6b1a,	// (0x0005a6c5) popup_toobar_trans_pane_cp01

0x712d,	// (0x0005acd8) popup_image_details_window_ParamLimits

0x712d,	// (0x0005acd8) popup_image_details_window

0x713b,	// (0x0005ace6) popup_image_focus_window

0x44ee,	// (0x00058099) camera2_autofocus_pane_ParamLimits

0x44ee,	// (0x00058099) camera2_autofocus_pane

0x17ee,	// (0x00055399) bg_popup_sub_pane_cp06

0xe270,	// (0x00061e1b) popup_image_focus_window_g1

0xe278,	// (0x00061e23) popup_image_focus_window_g2

0xe280,	// (0x00061e2b) popup_image_focus_window_g3

0xe288,	// (0x00061e33) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x000631f5) popup_image_focus_window_g

0xe290,	// (0x00061e3b) popup_image_focus_window_t1

0xe29e,	// (0x00061e49) popup_image_focus_window_t2

0xe2ae,	// (0x00061e59) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x000631fe) popup_image_focus_window_t

0x2493,	// (0x0005603e) camera2_autofocus_pane_g1

0x223f,	// (0x00055dea) bg_tb_trans_pane_cp01

0xe2bc,	// (0x00061e67) popup_image_details_window_g1

0xe2cf,	// (0x00061e7a) popup_image_details_window_g2

0x0002,

0xf665,	// (0x00063210) popup_image_details_window_g

0xe2f8,	// (0x00061ea3) popup_image_details_window_t1

0xe30a,	// (0x00061eb5) popup_image_details_window_t2

0xe323,	// (0x00061ece) popup_image_details_window_t3

0xe337,	// (0x00061ee2) popup_image_details_window_t4

0xe352,	// (0x00061efd) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x00063217) popup_image_details_window_t

0x24f1,	// (0x0005609c) bg_calc_paper_pane_ParamLimits

0x4508,	// (0x000580b3) grid_highlight_pane_cp013

0x4717,	// (0x000582c2) list_calc_pane_ParamLimits

0x4729,	// (0x000582d4) scroll_pane_cp024

0x2505,	// (0x000560b0) bg_calc_display_pane_ParamLimits

0x4731,	// (0x000582dc) calc_display_pane_t1_ParamLimits

0x4746,	// (0x000582f1) calc_display_pane_t2_ParamLimits

0x475b,	// (0x00058306) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x00062c77) calc_display_pane_t_ParamLimits

0x4834,	// (0x000583df) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00062c94) cell_calc_pane_g

0x483d,	// (0x000583e8) cell_calc_pane_t1

0x255a,	// (0x00056105) grid_highlight_pane_cp02_ParamLimits

0x2570,	// (0x0005611b) toolbar_button_pane_cp01_ParamLimits

0x2570,	// (0x0005611b) toolbar_button_pane_cp01

0xcd08,	// (0x000608b3) temp_image_control_pane_ParamLimits

0xcd08,	// (0x000608b3) temp_image_control_pane

0x70a5,	// (0x0005ac50) main_mp3_pane

0xe36c,	// (0x00061f17) temp_image_control_pane_g1_ParamLimits

0xe36c,	// (0x00061f17) temp_image_control_pane_g1

0xe37a,	// (0x00061f25) temp_image_control_pane_g2_ParamLimits

0xe37a,	// (0x00061f25) temp_image_control_pane_g2

0xe38c,	// (0x00061f37) temp_image_control_pane_g3_ParamLimits

0xe38c,	// (0x00061f37) temp_image_control_pane_g3

0x754d,	// (0x0005b0f8) temp_image_control_pane_g4_ParamLimits

0x754d,	// (0x0005b0f8) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x00063222) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x00063222) temp_image_control_pane_g

0xe36c,	// (0x00061f17) main_mp3_pane_g1

0x755e,	// (0x0005b109) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0006322b) main_mp3_pane_g

0xe3ed,	// (0x00061f98) main_mp3_pane_t1

0x24a1,	// (0x0005604c) main_camera_pane_g8_ParamLimits

0x24a1,	// (0x0005604c) main_camera_pane_g8

0x4f55,	// (0x00058b00) main_video_pane_g7_ParamLimits

0x4f55,	// (0x00058b00) main_video_pane_g7

0x73ef,	// (0x0005af9a) main_camera2_pane_t7_ParamLimits

0x73ef,	// (0x0005af9a) main_camera2_pane_t7

0x281c,	// (0x000563c7) scroll_pane_cp025_ParamLimits

0x281c,	// (0x000563c7) scroll_pane_cp025

0x2830,	// (0x000563db) scroll_pane_cp026_ParamLimits

0x2830,	// (0x000563db) scroll_pane_cp026

0x283f,	// (0x000563ea) wml_content_pane_ParamLimits

0x4508,	// (0x000580b3) main_touch_calib_pane

0x7602,	// (0x0005b1ad) main_touch_calib_pane_g1

0x760e,	// (0x0005b1b9) main_touch_calib_pane_g2

0x761a,	// (0x0005b1c5) main_touch_calib_pane_g3

0x7626,	// (0x0005b1d1) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x00063249) main_touch_calib_pane_g

0x7632,	// (0x0005b1dd) main_touch_calib_pane_t1

0x764b,	// (0x0005b1f6) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x00063252) main_touch_calib_pane_t

0x2fd9,	// (0x00056b84) mup_progress_pane_cp02

0x300e,	// (0x00056bb9) navi_pane_g1

0x30c9,	// (0x00056c74) navi_pane_mp_t3

0x70a5,	// (0x0005ac50) main_mp3_pane_ParamLimits

0x721a,	// (0x0005adc5) navi_pane_ParamLimits

0xe36c,	// (0x00061f17) main_mp3_pane_g1_ParamLimits

0x755e,	// (0x0005b109) main_mp3_pane_g2_ParamLimits

0x756a,	// (0x0005b115) main_mp3_pane_g3_ParamLimits

0x756a,	// (0x0005b115) main_mp3_pane_g3

0x7576,	// (0x0005b121) main_mp3_pane_g4_ParamLimits

0x7576,	// (0x0005b121) main_mp3_pane_g4

0x2493,	// (0x0005603e) main_mp3_pane_g5_ParamLimits

0x2493,	// (0x0005603e) main_mp3_pane_g5

0xe3c8,	// (0x00061f73) main_mp3_pane_g6_ParamLimits

0xe3c8,	// (0x00061f73) main_mp3_pane_g6

0xe3d5,	// (0x00061f80) main_mp3_pane_g7_ParamLimits

0xe3d5,	// (0x00061f80) main_mp3_pane_g7

0xe3e1,	// (0x00061f8c) main_mp3_pane_g8_ParamLimits

0xe3e1,	// (0x00061f8c) main_mp3_pane_g8

0xf680,	// (0x0006322b) main_mp3_pane_g_ParamLimits

0x7582,	// (0x0005b12d) main_mp3_pane_t2

0x7592,	// (0x0005b13d) main_mp3_pane_t3

0xe3fb,	// (0x00061fa6) main_mp3_pane_t4

0xe409,	// (0x00061fb4) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0006323c) main_mp3_pane_t

0xe417,	// (0x00061fc2) mup_progress_pane_cp01

0x4157,	// (0x00057d02) aid_zoom_text_secondary2

0xe1df,	// (0x00061d8a) list_cale_ev2_pane

0xe1e7,	// (0x00061d92) scroll_pane_cp023_ParamLimits

0x76a6,	// (0x0005b251) field_cale_ev2_pane_ParamLimits

0x76a6,	// (0x0005b251) field_cale_ev2_pane

0xe41f,	// (0x00061fca) field_cale_ev2_pane_g1_ParamLimits

0xe41f,	// (0x00061fca) field_cale_ev2_pane_g1

0xe42b,	// (0x00061fd6) field_cale_ev2_pane_g2_ParamLimits

0xe42b,	// (0x00061fd6) field_cale_ev2_pane_g2

0xe443,	// (0x00061fee) field_cale_ev2_pane_g3_ParamLimits

0xe443,	// (0x00061fee) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0006325d) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0006325d) field_cale_ev2_pane_g

0x76cf,	// (0x0005b27a) field_cale_ev2_pane_t1_ParamLimits

0x76cf,	// (0x0005b27a) field_cale_ev2_pane_t1

0x76e6,	// (0x0005b291) field_cale_ev2_pane_t2_ParamLimits

0x76e6,	// (0x0005b291) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x00063266) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x00063266) field_cale_ev2_pane_t

0x69a2,	// (0x0005a54d) main_postcard_pane_g5_ParamLimits

0x69a2,	// (0x0005a54d) main_postcard_pane_g5

0x69b0,	// (0x0005a55b) main_postcard_pane_g6_ParamLimits

0x69b0,	// (0x0005a55b) main_postcard_pane_g6

0x2485,	// (0x00056030) camera2_autofocus_pane_cp_ParamLimits

0x2485,	// (0x00056030) camera2_autofocus_pane_cp

0x70a5,	// (0x0005ac50) main_mup3_pane

0x773a,	// (0x0005b2e5) main_mup3_pane_g1_ParamLimits

0x773a,	// (0x0005b2e5) main_mup3_pane_g1

0x775b,	// (0x0005b306) main_mup3_pane_g2_ParamLimits

0x775b,	// (0x0005b306) main_mup3_pane_g2

0x77d3,	// (0x0005b37e) main_mup3_pane_g3_ParamLimits

0x77d3,	// (0x0005b37e) main_mup3_pane_g3

0x7816,	// (0x0005b3c1) main_mup3_pane_g4_ParamLimits

0x7816,	// (0x0005b3c1) main_mup3_pane_g4

0x7859,	// (0x0005b404) main_mup3_pane_g5_ParamLimits

0x7859,	// (0x0005b404) main_mup3_pane_g5

0x789c,	// (0x0005b447) main_mup3_pane_g6_ParamLimits

0x789c,	// (0x0005b447) main_mup3_pane_g6

0x24a1,	// (0x0005604c) main_mup3_pane_g7_ParamLimits

0x24a1,	// (0x0005604c) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x00063276) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x00063276) main_mup3_pane_g

0x7912,	// (0x0005b4bd) main_mup3_pane_t1_ParamLimits

0x7912,	// (0x0005b4bd) main_mup3_pane_t1

0x7981,	// (0x0005b52c) main_mup3_pane_t2_ParamLimits

0x7981,	// (0x0005b52c) main_mup3_pane_t2

0x7a4a,	// (0x0005b5f5) main_mup3_pane_t4_ParamLimits

0x7a4a,	// (0x0005b5f5) main_mup3_pane_t4

0x7a98,	// (0x0005b643) main_mup3_pane_t5_ParamLimits

0x7a98,	// (0x0005b643) main_mup3_pane_t5

0x7b48,	// (0x0005b6f3) main_mup3_pane_t6_ParamLimits

0x7b48,	// (0x0005b6f3) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x00063287) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x00063287) main_mup3_pane_t

0x7bf4,	// (0x0005b79f) mup3_progress_pane_ParamLimits

0x7bf4,	// (0x0005b79f) mup3_progress_pane

0x7c72,	// (0x0005b81d) popup_mup3_control_window_ParamLimits

0x7c72,	// (0x0005b81d) popup_mup3_control_window

0xe467,	// (0x00062012) popup_mup3_text_window

0x7c8b,	// (0x0005b836) mup3_progress_pane_t1

0x7caa,	// (0x0005b855) mup3_progress_pane_t2

0xe46f,	// (0x0006201a) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x00063294) mup3_progress_pane_t

0xe48c,	// (0x00062037) mup_progress_pane_cp03

0x17ee,	// (0x00055399) bg_tb_trans_pane_cp04

0x7cc9,	// (0x0005b874) mup3_volume_pane

0x7cd1,	// (0x0005b87c) popup_mup3_control_window_g1

0x7cda,	// (0x0005b885) mup3_volume_pane_g1

0x7ce3,	// (0x0005b88e) mup3_volume_pane_g2

0x7cec,	// (0x0005b897) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0006329b) mup3_volume_pane_g

0x17ee,	// (0x00055399) bg_tb_trans_pane_cp03

0xe49c,	// (0x00062047) popup_mup3_text_window_g1

0xe4a4,	// (0x0006204f) popup_mup3_text_window_t1

0x254d,	// (0x000560f8) list_calc_item_pane_g1_ParamLimits

0xded9,	// (0x00061a84) mup_volume_pane_cp_g1

0x7664,	// (0x0005b20f) main_touch_calib_pane_t3

0x767a,	// (0x0005b225) main_touch_calib_pane_t4

0x7690,	// (0x0005b23b) main_touch_calib_pane_t5

0x42db,	// (0x00057e86) aid_cell_size_toolbar2

0x42e3,	// (0x00057e8e) aid_popup3_width_pane

0x414f,	// (0x00057cfa) aid_zoom_text_msg_primary

0x4e57,	// (0x00058a02) vorec_t7

0x2511,	// (0x000560bc) bg_calc_paper_pane_g1_ParamLimits

0x2529,	// (0x000560d4) bg_calc_paper_pane_g2_ParamLimits

0x251d,	// (0x000560c8) bg_calc_paper_pane_g3_ParamLimits

0x2541,	// (0x000560ec) bg_calc_paper_pane_g4_ParamLimits

0x2535,	// (0x000560e0) bg_calc_paper_pane_g5_ParamLimits

0x479a,	// (0x00058345) bg_calc_paper_pane_g6_ParamLimits

0x47ab,	// (0x00058356) bg_calc_paper_pane_g7_ParamLimits

0x47bc,	// (0x00058367) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x00062c7e) bg_calc_paper_pane_g_ParamLimits

0x47cd,	// (0x00058378) calc_bg_paper_pane_g9_ParamLimits

0x2485,	// (0x00056030) image_qvga_pane_ParamLimits

0x2485,	// (0x00056030) image_qvga_pane

0x2418,	// (0x00055fc3) bg_popup_sub_pane_cp04_ParamLimits

0xcc3f,	// (0x000607ea) popup_mup_playback_window_g1_ParamLimits

0xcc4b,	// (0x000607f6) popup_mup_playback_window_t1_ParamLimits

0xcc60,	// (0x0006080b) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x00062fe1) popup_mup_playback_window_t_ParamLimits

0x2493,	// (0x0005603e) main_mup2_pane_g3_ParamLimits

0x2493,	// (0x0005603e) main_mup2_pane_g3

0x513c,	// (0x00058ce7) popup_toolbar_window_cp04

0xd042,	// (0x00060bed) popup_call2_audio_second_window_g3_ParamLimits

0xd042,	// (0x00060bed) popup_call2_audio_second_window_g3

0xd44c,	// (0x00060ff7) popup_call2_audio_first_window_g4_ParamLimits

0xd44c,	// (0x00060ff7) popup_call2_audio_first_window_g4

0xda73,	// (0x0006161e) popup_call2_audio_in_window_g4_ParamLimits

0xda73,	// (0x0006161e) popup_call2_audio_in_window_g4

0x6ab5,	// (0x0005a660) aid_area_sk_bg_cut_ParamLimits

0x6ab5,	// (0x0005a660) aid_area_sk_bg_cut

0xcc75,	// (0x00060820) aid_area_sk_bg_cut_2_ParamLimits

0xcc75,	// (0x00060820) aid_area_sk_bg_cut_2

0x17ee,	// (0x00055399) aid_placing_details_win

0x17ee,	// (0x00055399) aid_placing_details_win_2

0x2493,	// (0x0005603e) camera2_autofocus_pane_g1_ParamLimits

0x4494,	// (0x0005803f) popup_fixed_preview_cale_window_ParamLimits

0x4494,	// (0x0005803f) popup_fixed_preview_cale_window

0x3159,	// (0x00056d04) navi_slider_pane_g3

0x3150,	// (0x00056cfb) navi_slider_pane_g4

0x3147,	// (0x00056cf2) navi_slider_pane_g5

0x3159,	// (0x00056d04) navi_slider_pane_g6

0x6568,	// (0x0005a113) navi_slider_pane_g7

0x329b,	// (0x00056e46) mup_scale_pane_g3

0x32a4,	// (0x00056e4f) mup_scale_pane_g4

0x32ad,	// (0x00056e58) mup_scale_pane_g5

0x6769,	// (0x0005a314) mup_scale_pane_g6

0x6772,	// (0x0005a31d) mup_scale_pane_g7

0x04b0,	// (0x0005405b) cams2_slider_pane_g3

0x04b0,	// (0x0005405b) cams2_slider_pane_g4

0x04b0,	// (0x0005405b) cams2_slider_pane_g5

0x04b0,	// (0x0005405b) cams2_slider_pane_g6

0x04b0,	// (0x0005405b) cams2_slider_pane_g7

0x2714,	// (0x000562bf) camera2_autofocus_pane_cp_g1

0xdd49,	// (0x000618f4) bg_popup_preview_window_pane_cp02_ParamLimits

0xdd49,	// (0x000618f4) bg_popup_preview_window_pane_cp02

0xe4b2,	// (0x0006205d) list_fp_cale_pane_ParamLimits

0xe4b2,	// (0x0006205d) list_fp_cale_pane

0xe4be,	// (0x00062069) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4be,	// (0x00062069) popup_fixed_preview_cale_window_t1

0x7cf5,	// (0x0005b8a0) popup_fixed_preview_cale_window_t2_ParamLimits

0x7cf5,	// (0x0005b8a0) popup_fixed_preview_cale_window_t2

0x7d0a,	// (0x0005b8b5) popup_fixed_preview_cale_window_t3_ParamLimits

0x7d0a,	// (0x0005b8b5) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x000632a2) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x000632a2) popup_fixed_preview_cale_window_t

0x7d1f,	// (0x0005b8ca) list_single_fp_cale_pane_ParamLimits

0x7d1f,	// (0x0005b8ca) list_single_fp_cale_pane

0xe4dc,	// (0x00062087) list_single_fp_cale_pane_g1_ParamLimits

0xe4dc,	// (0x00062087) list_single_fp_cale_pane_g1

0xe4e8,	// (0x00062093) list_single_fp_cale_pane_g2_ParamLimits

0xe4e8,	// (0x00062093) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x000632a9) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x000632a9) list_single_fp_cale_pane_g

0xe501,	// (0x000620ac) list_single_fp_cale_pane_t1_ParamLimits

0xe501,	// (0x000620ac) list_single_fp_cale_pane_t1

0xe513,	// (0x000620be) list_single_fp_cale_pane_t2_ParamLimits

0xe513,	// (0x000620be) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x000632b0) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x000632b0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4508,	// (0x000580b3) main_dialer_pane

0x17ee,	// (0x00055399) aid_cell_size_keypad

0x17ee,	// (0x00055399) dialer_ne_pane

0x17ee,	// (0x00055399) grid_dialer_command_1_pane

0x17ee,	// (0x00055399) grid_dialer_command_2_pane

0x17ee,	// (0x00055399) grid_dialer_keypad_pane

0xcbc1,	// (0x0006076c) bg_popup_call_pane_cp06_ParamLimits

0xcbc1,	// (0x0006076c) bg_popup_call_pane_cp06

0xcbc1,	// (0x0006076c) dialer_ne_clear_pane_ParamLimits

0xcbc1,	// (0x0006076c) dialer_ne_clear_pane

0x2714,	// (0x000562bf) dialer_ne_pane_g1

0x3217,	// (0x00056dc2) dialer_ne_pane_t1_ParamLimits

0x3217,	// (0x00056dc2) dialer_ne_pane_t1

0xe546,	// (0x000620f1) dialer_ne_pane_t2_ParamLimits

0xe546,	// (0x000620f1) dialer_ne_pane_t2

0x7d32,	// (0x0005b8dd) dialer_ne_pane_t3_ParamLimits

0x7d32,	// (0x0005b8dd) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x000632b5) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x000632b5) dialer_ne_pane_t

0x7d32,	// (0x0005b8dd) dialer_ne_pane_t3_copy1_ParamLimits

0x7d32,	// (0x0005b8dd) dialer_ne_pane_t3_copy1

0xe563,	// (0x0006210e) cell_dialer_keypad_pane_ParamLimits

0xe563,	// (0x0006210e) cell_dialer_keypad_pane

0x223f,	// (0x00055dea) cell_dialer_command_1_pane_ParamLimits

0x223f,	// (0x00055dea) cell_dialer_command_1_pane

0xe57a,	// (0x00062125) cell_dialer_command_2_pane_ParamLimits

0xe57a,	// (0x00062125) cell_dialer_command_2_pane

0x223f,	// (0x00055dea) bg_button_pane_cp02_ParamLimits

0x223f,	// (0x00055dea) bg_button_pane_cp02

0x2493,	// (0x0005603e) cell_dialer_keypad_pane_g1_ParamLimits

0x2493,	// (0x0005603e) cell_dialer_keypad_pane_g1

0x223f,	// (0x00055dea) bg_button_pane_cp03_ParamLimits

0x223f,	// (0x00055dea) bg_button_pane_cp03

0x2493,	// (0x0005603e) cell_dialer_command_1_pane_g1_ParamLimits

0x2493,	// (0x0005603e) cell_dialer_command_1_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp04

0x2714,	// (0x000562bf) cell_dialer_command_2_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp06

0x2714,	// (0x000562bf) dialer_ne_clear_pane_g1

0x301a,	// (0x00056bc5) navi_pane_g2

0x3048,	// (0x00056bf3) navi_pane_g3

0x0002,

0xf339,	// (0x00062ee4) navi_pane_g

0x30d7,	// (0x00056c82) navi_pane_mv_g2

0x30fe,	// (0x00056ca9) navi_pane_mv_g5

0x6533,	// (0x0005a0de) navi_pane_mv_t1

0x2505,	// (0x000560b0) main_clock2_pane

0x2485,	// (0x00056030) main_clock2_list_pane_ParamLimits

0x2485,	// (0x00056030) main_clock2_list_pane

0x7da8,	// (0x0005b953) main_clock2_pane_t1_ParamLimits

0x7da8,	// (0x0005b953) main_clock2_pane_t1

0x7dd6,	// (0x0005b981) main_clock2_pane_t2_ParamLimits

0x7dd6,	// (0x0005b981) main_clock2_pane_t2

0x0004,

0xf716,	// (0x000632c1) main_clock2_pane_t_ParamLimits

0xf716,	// (0x000632c1) main_clock2_pane_t

0x7e3b,	// (0x0005b9e6) popup_clock_analogue_window_cp03_ParamLimits

0x7e3b,	// (0x0005b9e6) popup_clock_analogue_window_cp03

0x7e59,	// (0x0005ba04) popup_clock_digital_window_cp02_ParamLimits

0x7e59,	// (0x0005ba04) popup_clock_digital_window_cp02

0x7ece,	// (0x0005ba79) main_clock2_list_single_pane_ParamLimits

0x7ece,	// (0x0005ba79) main_clock2_list_single_pane

0x26de,	// (0x00056289) list_highlight_pane_cp05

0xe5c1,	// (0x0006216c) main_clock2_list_single_pane_t1

0x513c,	// (0x00058ce7) popup_toolbar_window_cp04_ParamLimits

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g2

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g3_ParamLimits

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g3

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g4_ParamLimits

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g4

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g5_ParamLimits

0x24a1,	// (0x0005604c) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x00063205) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x00063205) camera2_autofocus_pane_g

0x76fb,	// (0x0005b2a6) camera2_autofocus_pane_cp_g2

0x7703,	// (0x0005b2ae) camera2_autofocus_pane_cp_g3

0x770b,	// (0x0005b2b6) camera2_autofocus_pane_cp_g4

0x7713,	// (0x0005b2be) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0006326b) camera2_autofocus_pane_cp_g

0x17ee,	// (0x00055399) popup_dialer_spcha_window

0x17ee,	// (0x00055399) bg_popup_sub_pane_cp07

0x17ee,	// (0x00055399) list_spcha_pane

0xe5cf,	// (0x0006217a) list_single_spcha_pane_ParamLimits

0xe5cf,	// (0x0006217a) list_single_spcha_pane

0x17ee,	// (0x00055399) list_highlight_pane_cp06

0x2c4f,	// (0x000567fa) list_single_spcha_pane_t1

0xd81d,	// (0x000613c8) popup_call2_audio_out_window_g4_ParamLimits

0xd81d,	// (0x000613c8) popup_call2_audio_out_window_g4

0x4508,	// (0x000580b3) main_imed2_pane

0x7143,	// (0x0005acee) popup_imed_adjust2_window

0x7156,	// (0x0005ad01) popup_imed_trans_window_ParamLimits

0x7156,	// (0x0005ad01) popup_imed_trans_window

0xdfae,	// (0x00061b59) popup_blid_sat_info2_window_t1

0xdfbc,	// (0x00061b67) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0006319a) popup_blid_sat_info2_window_t

0x7f83,	// (0x0005bb2e) aid_size_cell_colour_35

0x7f9d,	// (0x0005bb48) aid_size_cell_colour_112

0x7fb4,	// (0x0005bb5f) aid_size_cell_effect

0x223f,	// (0x00055dea) bg_tb_trans_pane_cp02

0x2c1c,	// (0x000567c7) heading_imed_pane

0x7fce,	// (0x0005bb79) listscroll_imed_pane

0xe5e1,	// (0x0006218c) heading_imed_pane_g1

0xe5e9,	// (0x00062194) heading_imed_pane_t1

0xe5f7,	// (0x000621a2) grid_imed_colour_35_pane_ParamLimits

0xe5f7,	// (0x000621a2) grid_imed_colour_35_pane

0x7fda,	// (0x0005bb85) grid_imed_effect_pane

0xe60e,	// (0x000621b9) list_imed_aspect_pane

0x7fea,	// (0x0005bb95) scroll_pane_cp027_ParamLimits

0x7fea,	// (0x0005bb95) scroll_pane_cp027

0x7ff6,	// (0x0005bba1) cell_imed_effect_pane_ParamLimits

0x7ff6,	// (0x0005bba1) cell_imed_effect_pane

0xe616,	// (0x000621c1) cell_imed_colour_pane_ParamLimits

0xe616,	// (0x000621c1) cell_imed_colour_pane

0xe658,	// (0x00062203) cell_imed_colour_pane_g1_ParamLimits

0xe658,	// (0x00062203) cell_imed_colour_pane_g1

0xe669,	// (0x00062214) hgihlgiht_grid_pane_cp016_ParamLimits

0xe669,	// (0x00062214) hgihlgiht_grid_pane_cp016

0x800e,	// (0x0005bbb9) cell_imed_effect_pane_g1

0x8016,	// (0x0005bbc1) grid_highlight_pane_cp017

0xe67a,	// (0x00062225) list_imed_single_pane_ParamLimits

0xe67a,	// (0x00062225) list_imed_single_pane

0x17ee,	// (0x00055399) list_highlight_pane_cp07

0xe68f,	// (0x0006223a) list_imed_aspect_pane_comp1_t1

0x322b,	// (0x00056dd6) bg_tb_trans_pane_cp05

0xe6b1,	// (0x0006225c) popup_imed_adjust2_window_g1

0xe6d8,	// (0x00062283) popup_imed_adjust2_window_t1

0xe6f0,	// (0x0006229b) slider_imed_adjust_pane

0xe704,	// (0x000622af) slider_imed_adjust_pane_g1

0xe714,	// (0x000622bf) slider_imed_adjust_pane_g2

0xe724,	// (0x000622cf) slider_imed_adjust_pane_g3

0xe735,	// (0x000622e0) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x000632de) slider_imed_adjust_pane_g

0x801f,	// (0x0005bbca) aid_size_cell_clipart2

0x802b,	// (0x0005bbd6) grid_imed_clipart_pane

0xe746,	// (0x000622f1) scroll_pane_cp031

0x8035,	// (0x0005bbe0) cell_imed_clipart_pane_ParamLimits

0x8035,	// (0x0005bbe0) cell_imed_clipart_pane

0x8057,	// (0x0005bc02) cell_imed_clipart_pane_g1

0x17ee,	// (0x00055399) grid_highlight_pane_cp014

0x7d8a,	// (0x0005b935) main_clock2_pane_g1_ParamLimits

0x7d8a,	// (0x0005b935) main_clock2_pane_g1

0x7e75,	// (0x0005ba20) aid_call2_pane_cp10

0x7e87,	// (0x0005ba32) aid_call_pane_cp10

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g1

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g2

0x7e99,	// (0x0005ba44) popup_clock_analogue_window_cp10_g3

0x7e99,	// (0x0005ba44) popup_clock_analogue_window_cp10_g4

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x000632cc) popup_clock_analogue_window_cp10_g

0x7eaf,	// (0x0005ba5a) popup_clock_analogue_window_cp10_t1

0x7ee0,	// (0x0005ba8b) clock_digital_number_pane_cp10_ParamLimits

0x7ee0,	// (0x0005ba8b) clock_digital_number_pane_cp10

0x7efa,	// (0x0005baa5) clock_digital_number_pane_cp11_ParamLimits

0x7efa,	// (0x0005baa5) clock_digital_number_pane_cp11

0x7f14,	// (0x0005babf) clock_digital_number_pane_cp12_ParamLimits

0x7f14,	// (0x0005babf) clock_digital_number_pane_cp12

0x7f2e,	// (0x0005bad9) clock_digital_number_pane_cp13_ParamLimits

0x7f2e,	// (0x0005bad9) clock_digital_number_pane_cp13

0x7f48,	// (0x0005baf3) clock_digital_separator_pane_cp10_ParamLimits

0x7f48,	// (0x0005baf3) clock_digital_separator_pane_cp10

0x7f62,	// (0x0005bb0d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7f62,	// (0x0005bb0d) popup_clock_digital_window_cp02_t1

0x2410,	// (0x00055fbb) clock_digital_number_pane_cp10_g1

0x2410,	// (0x00055fbb) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x000632e7) clock_digital_number_pane_cp10_g

0x2410,	// (0x00055fbb) clock_digital_separator_pane_cp10_g1

0x2410,	// (0x00055fbb) clock_digital_separator_pane_g2_cp10

0x3106,	// (0x00056cb1) navi_pane_vded_g4

0x310f,	// (0x00056cba) navi_pane_vded_g5

0x3118,	// (0x00056cc3) navi_pane_vded_t1

0x4508,	// (0x000580b3) main_vded_pane

0x8060,	// (0x0005bc0b) main_vded_pane_g1

0x806c,	// (0x0005bc17) main_vded_pane_g2

0x8076,	// (0x0005bc21) main_vded_pane_g3

0x0002,

0xf741,	// (0x000632ec) main_vded_pane_g

0x8080,	// (0x0005bc2b) main_vded_pane_t1

0x808e,	// (0x0005bc39) main_vded_pane_t2

0x0001,

0xf748,	// (0x000632f3) main_vded_pane_t

0x809c,	// (0x0005bc47) vded_slider_pane

0x80a6,	// (0x0005bc51) vded_video_pane

0xe74e,	// (0x000622f9) vded_video_pane_g1

0x80b0,	// (0x0005bc5b) vded_video_pane_g2

0x2714,	// (0x000562bf) vded_video_pane_g3

0x0002,

0xf74d,	// (0x000632f8) vded_video_pane_g

0xe758,	// (0x00062303) vded_slider_pane_g1

0xded9,	// (0x00061a84) vded_slider_pane_g2

0xe761,	// (0x0006230c) vded_slider_pane_g3

0xe76a,	// (0x00062315) vded_slider_pane_g4

0xe773,	// (0x0006231e) vded_slider_pane_g5

0x0004,

0xf754,	// (0x000632ff) vded_slider_pane_g

0x7c64,	// (0x0005b80f) mup3_rocker_pane_ParamLimits

0x7c64,	// (0x0005b80f) mup3_rocker_pane

0x80b9,	// (0x0005bc64) mup3_control_keys_pane_g1

0x80c1,	// (0x0005bc6c) mup3_control_keys_pane_g2

0x80c9,	// (0x0005bc74) mup3_control_keys_pane_g3

0x80d1,	// (0x0005bc7c) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0006330a) mup3_control_keys_pane_g

0x44bc,	// (0x00058067) popup_toolbar2_fixed_window_cp01_ParamLimits

0x44bc,	// (0x00058067) popup_toolbar2_fixed_window_cp01

0x7c7e,	// (0x0005b829) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7c7e,	// (0x0005b829) popup_toolbar2_fixed_window_cp02

0xd1b4,	// (0x00060d5f) popup_call2_audio_second_window_t4_ParamLimits

0xd1b4,	// (0x00060d5f) popup_call2_audio_second_window_t4

0xd6e2,	// (0x0006128d) popup_call2_audio_first_window_t6_ParamLimits

0xd6e2,	// (0x0006128d) popup_call2_audio_first_window_t6

0xd920,	// (0x000614cb) popup_call2_audio_out_window_t6_ParamLimits

0xd920,	// (0x000614cb) popup_call2_audio_out_window_t6

0x4508,	// (0x000580b3) main_vitu_pane

0x2485,	// (0x00056030) aid_size_cell_itu_ParamLimits

0x2485,	// (0x00056030) aid_size_cell_itu

0x2485,	// (0x00056030) bg_popup_window_pane_cp08_ParamLimits

0x2485,	// (0x00056030) bg_popup_window_pane_cp08

0x2485,	// (0x00056030) field_vitu_entry_pane_ParamLimits

0x2485,	// (0x00056030) field_vitu_entry_pane

0x2485,	// (0x00056030) grid_vitu_function_pane_ParamLimits

0x2485,	// (0x00056030) grid_vitu_function_pane

0x2485,	// (0x00056030) grid_vitu_itu_pane_ParamLimits

0x2485,	// (0x00056030) grid_vitu_itu_pane

0x2485,	// (0x00056030) cell_vitu_itu_pane_ParamLimits

0x2485,	// (0x00056030) cell_vitu_itu_pane

0x2485,	// (0x00056030) cell_vitu_function_pane_ParamLimits

0x2485,	// (0x00056030) cell_vitu_function_pane

0x223f,	// (0x00055dea) bg_popup_sub_pane_cp08_ParamLimits

0x223f,	// (0x00055dea) bg_popup_sub_pane_cp08

0x26e6,	// (0x00056291) field_vitu_entry_pane_t1_ParamLimits

0x26e6,	// (0x00056291) field_vitu_entry_pane_t1

0xe546,	// (0x000620f1) field_vitu_entry_pane_t2_ParamLimits

0xe546,	// (0x000620f1) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x00063313) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x00063313) field_vitu_entry_pane_t

0xcbc1,	// (0x0006076c) bg_button_pane_cp05_ParamLimits

0xcbc1,	// (0x0006076c) bg_button_pane_cp05

0xe77c,	// (0x00062327) cell_vitu_itu_pane_g1

0x3203,	// (0x00056dae) cell_vitu_itu_pane_t1_ParamLimits

0x3203,	// (0x00056dae) cell_vitu_itu_pane_t1

0x3203,	// (0x00056dae) cell_vitu_itu_pane_t2_ParamLimits

0x3203,	// (0x00056dae) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x00063318) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x00063318) cell_vitu_itu_pane_t

0x17ee,	// (0x00055399) bg_button_pane_cp07

0x2714,	// (0x000562bf) cell_vitu_function_pane_g1

0x463e,	// (0x000581e9) main_calc_pane_g1

0x4317,	// (0x00057ec2) aid_visual_content_pane

0x4508,	// (0x000580b3) main_vradio_pane

0x24a1,	// (0x0005604c) main_vradio_pane_g1_ParamLimits

0x24a1,	// (0x0005604c) main_vradio_pane_g1

0x24a1,	// (0x0005604c) main_vradio_pane_g2_ParamLimits

0x24a1,	// (0x0005604c) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0006331f) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0006331f) main_vradio_pane_g

0x3217,	// (0x00056dc2) main_vradio_pane_t1_ParamLimits

0x3217,	// (0x00056dc2) main_vradio_pane_t1

0x3217,	// (0x00056dc2) main_vradio_pane_t2_ParamLimits

0x3217,	// (0x00056dc2) main_vradio_pane_t2

0x3217,	// (0x00056dc2) main_vradio_pane_t3_ParamLimits

0x3217,	// (0x00056dc2) main_vradio_pane_t3

0x0002,

0xf779,	// (0x00063324) main_vradio_pane_t_ParamLimits

0xf779,	// (0x00063324) main_vradio_pane_t

0x2485,	// (0x00056030) vradio_rocker_control_pane_ParamLimits

0x2485,	// (0x00056030) vradio_rocker_control_pane

0x2485,	// (0x00056030) vradio_station_info_pane_ParamLimits

0x2485,	// (0x00056030) vradio_station_info_pane

0x223f,	// (0x00055dea) vradio_frequency_info_pane_ParamLimits

0x223f,	// (0x00055dea) vradio_frequency_info_pane

0x2714,	// (0x000562bf) vradio_station_info_pane_g1

0x3203,	// (0x00056dae) vradio_station_info_pane_t1_ParamLimits

0x3203,	// (0x00056dae) vradio_station_info_pane_t1

0x3217,	// (0x00056dc2) vradio_station_info_pane_t2_ParamLimits

0x3217,	// (0x00056dc2) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0006332b) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0006332b) vradio_station_info_pane_t

0x17ee,	// (0x00055399) vradio_tuning_pane

0x80e1,	// (0x0005bc8c) vradio_rocker_control_pane_g1

0xe798,	// (0x00062343) vradio_rocker_control_pane_g2

0x80e9,	// (0x0005bc94) vradio_rocker_control_pane_g3

0x80f1,	// (0x0005bc9c) vradio_rocker_control_pane_g4

0x80f9,	// (0x0005bca4) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x00063330) vradio_rocker_control_pane_g

0x2714,	// (0x000562bf) vradio_frequency_info_pane_g1

0x26e6,	// (0x00056291) vradio_frequency_info_pane_t1_ParamLimits

0x26e6,	// (0x00056291) vradio_frequency_info_pane_t1

0x8101,	// (0x0005bcac) vradio_tuning_pane_g1

0x810e,	// (0x0005bcb9) vradio_tuning_pane_t1

0x4360,	// (0x00057f0b) area_side_right_pane_ParamLimits

0x4360,	// (0x00057f0b) area_side_right_pane

0xdd10,	// (0x000618bb) status_small_pane_g1

0xdd18,	// (0x000618c3) status_small_pane_g2

0xdd21,	// (0x000618cc) status_small_pane_g3

0xdd2a,	// (0x000618d5) status_small_pane_g4

0x0003,

0xf551,	// (0x000630fc) status_small_pane_g

0xdd33,	// (0x000618de) status_small_pane_t1

0x4508,	// (0x000580b3) main_video3_pane

0xe7a0,	// (0x0006234b) cams_zoom_vslider_pane

0xe7a8,	// (0x00062353) image3_wide_pane_ParamLimits

0xe7a8,	// (0x00062353) image3_wide_pane

0xe7c2,	// (0x0006236d) image3_wide_small_pane

0xe7ce,	// (0x00062379) main_video3_pane_g1_ParamLimits

0xe7ce,	// (0x00062379) main_video3_pane_g1

0xe7ea,	// (0x00062395) main_video3_pane_g2_ParamLimits

0xe7ea,	// (0x00062395) main_video3_pane_g2

0x0001,

0xf790,	// (0x0006333b) main_video3_pane_g_ParamLimits

0xf790,	// (0x0006333b) main_video3_pane_g

0xe806,	// (0x000623b1) main_video3_pane_t1_ParamLimits

0xe806,	// (0x000623b1) main_video3_pane_t1

0xe84b,	// (0x000623f6) main_video3_pane_t2_ParamLimits

0xe84b,	// (0x000623f6) main_video3_pane_t2

0xe876,	// (0x00062421) main_video3_pane_t3_ParamLimits

0xe876,	// (0x00062421) main_video3_pane_t3

0x0002,

0xf795,	// (0x00063340) main_video3_pane_t_ParamLimits

0xf795,	// (0x00063340) main_video3_pane_t

0xe8a3,	// (0x0006244e) cams_zoom_vslider_pane_g1

0xe8ac,	// (0x00062457) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x00063347) cams_zoom_vslider_pane_g

0xe8b4,	// (0x0006245f) small_slider_vertical_pane

0x2714,	// (0x000562bf) small_slider_vertical_pane_g1

0x2714,	// (0x000562bf) small_slider_vertical_pane_g2

0xe8bc,	// (0x00062467) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0006334c) small_slider_vertical_pane_g

0x4508,	// (0x000580b3) main_hwr_training_pane

0xe8c5,	// (0x00062470) hwr_training_instruct_pane_ParamLimits

0xe8c5,	// (0x00062470) hwr_training_instruct_pane

0x811d,	// (0x0005bcc8) hwr_training_navi_pane_ParamLimits

0x811d,	// (0x0005bcc8) hwr_training_navi_pane

0x8137,	// (0x0005bce2) hwr_training_write_pane_ParamLimits

0x8137,	// (0x0005bce2) hwr_training_write_pane

0x17ee,	// (0x00055399) bg_frame_shadow_pane

0xe8fc,	// (0x000624a7) hwr_training_write_pane_g1

0xe904,	// (0x000624af) hwr_training_write_pane_g2

0xe90c,	// (0x000624b7) hwr_training_write_pane_g3

0xe914,	// (0x000624bf) hwr_training_write_pane_g4

0xe91c,	// (0x000624c7) hwr_training_write_pane_g5

0xe924,	// (0x000624cf) hwr_training_write_pane_g6

0xe92c,	// (0x000624d7) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x00063353) hwr_training_write_pane_g

0x816f,	// (0x0005bd1a) hwr_training_navi_pane_g1_ParamLimits

0x816f,	// (0x0005bd1a) hwr_training_navi_pane_g1

0x8181,	// (0x0005bd2c) hwr_training_navi_pane_g2_ParamLimits

0x8181,	// (0x0005bd2c) hwr_training_navi_pane_g2

0x8193,	// (0x0005bd3e) hwr_training_navi_pane_g3_ParamLimits

0x8193,	// (0x0005bd3e) hwr_training_navi_pane_g3

0x81a3,	// (0x0005bd4e) hwr_training_navi_pane_g4_ParamLimits

0x81a3,	// (0x0005bd4e) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x00063362) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x00063362) hwr_training_navi_pane_g

0x81bd,	// (0x0005bd68) hwr_training_navi_pane_t1

0x81cb,	// (0x0005bd76) list_single_hwr_training_instruct_pane_ParamLimits

0x81cb,	// (0x0005bd76) list_single_hwr_training_instruct_pane

0xe934,	// (0x000624df) list_single_hwr_training_instruct_pane_t1

0xe0af,	// (0x00061c5a) bg_frame_shadow_pane_g1

0xe943,	// (0x000624ee) bg_frame_shadow_pane_g2

0xe94b,	// (0x000624f6) bg_frame_shadow_pane_g3

0xe953,	// (0x000624fe) bg_frame_shadow_pane_g4

0xe95b,	// (0x00062506) bg_frame_shadow_pane_g5

0xe963,	// (0x0006250e) bg_frame_shadow_pane_g6

0xe96b,	// (0x00062516) bg_frame_shadow_pane_g7

0x25bd,	// (0x00056168) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0006336d) bg_frame_shadow_pane_g

0x4508,	// (0x000580b3) main_video_tele_dialer_pane

0x81f0,	// (0x0005bd9b) aid_size_cell_video_keypad_ParamLimits

0x81f0,	// (0x0005bd9b) aid_size_cell_video_keypad

0x8200,	// (0x0005bdab) grid_video_dialer_keypad_pane_ParamLimits

0x8200,	// (0x0005bdab) grid_video_dialer_keypad_pane

0x8234,	// (0x0005bddf) video_down_pane_cp_ParamLimits

0x8234,	// (0x0005bddf) video_down_pane_cp

0x825e,	// (0x0005be09) cell_video_dialer_keypad_pane_ParamLimits

0x825e,	// (0x0005be09) cell_video_dialer_keypad_pane

0xe973,	// (0x0006251e) bg_button_pane_cp08_ParamLimits

0xe973,	// (0x0006251e) bg_button_pane_cp08

0x8273,	// (0x0005be1e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8273,	// (0x0005be1e) cell_video_dialer_keypad_pane_g1

0x7c58,	// (0x0005b803) mup3_rocker2_pane_ParamLimits

0x7c58,	// (0x0005b803) mup3_rocker2_pane

0x2714,	// (0x000562bf) mup3_rocker2_pane_g1

0x70b3,	// (0x0005ac5e) main_dialer2_pane

0x4508,	// (0x000580b3) main_mp4_pane

0x82c8,	// (0x0005be73) main_mp4_pane_g1_ParamLimits

0x82c8,	// (0x0005be73) main_mp4_pane_g1

0x82d6,	// (0x0005be81) main_mp4_pane_g2_ParamLimits

0x82d6,	// (0x0005be81) main_mp4_pane_g2

0x82e4,	// (0x0005be8f) main_mp4_pane_g3_ParamLimits

0x82e4,	// (0x0005be8f) main_mp4_pane_g3

0x8329,	// (0x0005bed4) main_mp4_pane_g4_ParamLimits

0x8329,	// (0x0005bed4) main_mp4_pane_g4

0x8357,	// (0x0005bf02) main_mp4_pane_g5_ParamLimits

0x8357,	// (0x0005bf02) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0006338d) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0006338d) main_mp4_pane_g

0x83cb,	// (0x0005bf76) main_mp4_pane_t1_ParamLimits

0x83cb,	// (0x0005bf76) main_mp4_pane_t1

0x8427,	// (0x0005bfd2) main_mp4_pane_t2_ParamLimits

0x8427,	// (0x0005bfd2) main_mp4_pane_t2

0xe97f,	// (0x0006252a) main_mp4_pane_t3_ParamLimits

0xe97f,	// (0x0006252a) main_mp4_pane_t3

0x8479,	// (0x0005c024) main_mp4_pane_t4_ParamLimits

0x8479,	// (0x0005c024) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0006339e) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0006339e) main_mp4_pane_t

0x84bd,	// (0x0005c068) mp4_progress_pane_ParamLimits

0x84bd,	// (0x0005c068) mp4_progress_pane

0x8507,	// (0x0005c0b2) mp4_rocker_pane_ParamLimits

0x8507,	// (0x0005c0b2) mp4_rocker_pane

0xe9ad,	// (0x00062558) mp4_progress_pane_t1

0xe9c6,	// (0x00062571) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x000633a7) mp4_progress_pane_t

0xe9df,	// (0x0006258a) mup_progress_pane_cp04

0x04b0,	// (0x0005405b) mp4_rocker_pane_g1

0x8527,	// (0x0005c0d2) aid_cell_size_keypad2_ParamLimits

0x8527,	// (0x0005c0d2) aid_cell_size_keypad2

0x8537,	// (0x0005c0e2) dialer2_ne_pane_ParamLimits

0x8537,	// (0x0005c0e2) dialer2_ne_pane

0x8545,	// (0x0005c0f0) grid_dialer2_keypad_pane_ParamLimits

0x8545,	// (0x0005c0f0) grid_dialer2_keypad_pane

0xe831,	// (0x000623dc) bg_popup_call_pane_cp07_ParamLimits

0xe831,	// (0x000623dc) bg_popup_call_pane_cp07

0x8555,	// (0x0005c100) dialer2_ne_pane_t1_ParamLimits

0x8555,	// (0x0005c100) dialer2_ne_pane_t1

0x857a,	// (0x0005c125) cell_dialer2_keypad_pane_ParamLimits

0x857a,	// (0x0005c125) cell_dialer2_keypad_pane

0xea04,	// (0x000625af) bg_button_pane_pane_cp04_ParamLimits

0xea04,	// (0x000625af) bg_button_pane_pane_cp04

0x858f,	// (0x0005c13a) cell_dialer2_keypad_pane_g1_ParamLimits

0x858f,	// (0x0005c13a) cell_dialer2_keypad_pane_g1

0x4ffe,	// (0x00058ba9) aid_placing_vt_set_content_ParamLimits

0x4ffe,	// (0x00058ba9) aid_placing_vt_set_content

0x502a,	// (0x00058bd5) aid_placing_vt_set_title_ParamLimits

0x502a,	// (0x00058bd5) aid_placing_vt_set_title

0x4508,	// (0x000580b3) main_image3_pane

0x8629,	// (0x0005c1d4) area_side_right_pane_cp01_ParamLimits

0x8629,	// (0x0005c1d4) area_side_right_pane_cp01

0x8656,	// (0x0005c201) main_image3_pane_g1_ParamLimits

0x8656,	// (0x0005c201) main_image3_pane_g1

0x8664,	// (0x0005c20f) main_image3_pane_g2_ParamLimits

0x8664,	// (0x0005c20f) main_image3_pane_g2

0x867d,	// (0x0005c228) main_image3_pane_g3_ParamLimits

0x867d,	// (0x0005c228) main_image3_pane_g3

0x8696,	// (0x0005c241) main_image3_pane_g4_ParamLimits

0x8696,	// (0x0005c241) main_image3_pane_g4

0x0003,

0xf80b,	// (0x000633b6) main_image3_pane_g_ParamLimits

0xf80b,	// (0x000633b6) main_image3_pane_g

0x86af,	// (0x0005c25a) main_image3_pane_t1_ParamLimits

0x86af,	// (0x0005c25a) main_image3_pane_t1

0x86d4,	// (0x0005c27f) main_image3_pane_t2_ParamLimits

0x86d4,	// (0x0005c27f) main_image3_pane_t2

0x86f3,	// (0x0005c29e) main_image3_pane_t3_ParamLimits

0x86f3,	// (0x0005c29e) main_image3_pane_t3

0x0003,

0xf814,	// (0x000633bf) main_image3_pane_t_ParamLimits

0xf814,	// (0x000633bf) main_image3_pane_t

0x2485,	// (0x00056030) grid_sctrl_middle_pane_cp01_ParamLimits

0x2485,	// (0x00056030) grid_sctrl_middle_pane_cp01

0x8754,	// (0x0005c2ff) cell_sctrl_middle_pane_cp01_ParamLimits

0x8754,	// (0x0005c2ff) cell_sctrl_middle_pane_cp01

0x8765,	// (0x0005c310) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8765,	// (0x0005c310) cell_sctrl_middle_pane_cp01_g1

0x4508,	// (0x000580b3) main_call4_pane

0x8772,	// (0x0005c31d) aid_size_button_call4_ParamLimits

0x8772,	// (0x0005c31d) aid_size_button_call4

0x87a8,	// (0x0005c353) call4_windows_pane_ParamLimits

0x87a8,	// (0x0005c353) call4_windows_pane

0x87bd,	// (0x0005c368) grid_call4_button_pane_ParamLimits

0x87bd,	// (0x0005c368) grid_call4_button_pane

0x87eb,	// (0x0005c396) call4_windows_conf_pane

0x8802,	// (0x0005c3ad) popup_call4_audio_first_window_ParamLimits

0x8802,	// (0x0005c3ad) popup_call4_audio_first_window

0x8852,	// (0x0005c3fd) popup_call4_audio_second_window_ParamLimits

0x8852,	// (0x0005c3fd) popup_call4_audio_second_window

0x886b,	// (0x0005c416) popup_call4_audio_wait_window_ParamLimits

0x886b,	// (0x0005c416) popup_call4_audio_wait_window

0x8879,	// (0x0005c424) cell_call4_button_pane_ParamLimits

0x8879,	// (0x0005c424) cell_call4_button_pane

0x889c,	// (0x0005c447) bg_button_pane_cp09_ParamLimits

0x889c,	// (0x0005c447) bg_button_pane_cp09

0x88a8,	// (0x0005c453) cell_call4_button_pane_g1_ParamLimits

0x88a8,	// (0x0005c453) cell_call4_button_pane_g1

0x88b5,	// (0x0005c460) cell_call4_button_pane_t1_ParamLimits

0x88b5,	// (0x0005c460) cell_call4_button_pane_t1

0xea18,	// (0x000625c3) popup_call4_audio_conf_window_ParamLimits

0xea18,	// (0x000625c3) popup_call4_audio_conf_window

0x7c8b,	// (0x0005b836) mup3_progress_pane_t1_ParamLimits

0x7caa,	// (0x0005b855) mup3_progress_pane_t2_ParamLimits

0xe46f,	// (0x0006201a) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x00063294) mup3_progress_pane_t_ParamLimits

0xe48c,	// (0x00062037) mup_progress_pane_cp03_ParamLimits

0x80d9,	// (0x0005bc84) mup3_control_keys_pane_g4_copy1

0x84eb,	// (0x0005c096) mp4_rocker2_pane_ParamLimits

0x84eb,	// (0x0005c096) mp4_rocker2_pane

0xea2c,	// (0x000625d7) mp4_rocker2_pane_g1

0xea34,	// (0x000625df) mp4_rocker2_pane_g2

0x88f9,	// (0x0005c4a4) mp4_rocker2_pane_g3

0x8901,	// (0x0005c4ac) mp4_rocker2_pane_g4

0x8909,	// (0x0005c4b4) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x000633c8) mp4_rocker2_pane_g

0x4508,	// (0x000580b3) main_camera4_pane

0x4508,	// (0x000580b3) main_video4_pane

0x8210,	// (0x0005bdbb) main_video_tele_dialer_pane_t1_ParamLimits

0x8210,	// (0x0005bdbb) main_video_tele_dialer_pane_t1

0x8222,	// (0x0005bdcd) main_video_tele_dialer_pane_t2_ParamLimits

0x8222,	// (0x0005bdcd) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0006337e) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0006337e) main_video_tele_dialer_pane_t

0x8929,	// (0x0005c4d4) cam4_autofocus_pane_ParamLimits

0x8929,	// (0x0005c4d4) cam4_autofocus_pane

0x8943,	// (0x0005c4ee) cam4_image_uncrop_pane_ParamLimits

0x8943,	// (0x0005c4ee) cam4_image_uncrop_pane

0x895a,	// (0x0005c505) cam4_indicators_pane_ParamLimits

0x895a,	// (0x0005c505) cam4_indicators_pane

0x8976,	// (0x0005c521) main_camera4_pane_g1_ParamLimits

0x8976,	// (0x0005c521) main_camera4_pane_g1

0x8982,	// (0x0005c52d) main_camera4_pane_g2_ParamLimits

0x8982,	// (0x0005c52d) main_camera4_pane_g2

0x8982,	// (0x0005c52d) main_camera4_pane_g3_ParamLimits

0x8982,	// (0x0005c52d) main_camera4_pane_g3

0x898e,	// (0x0005c539) main_camera4_pane_g4_ParamLimits

0x898e,	// (0x0005c539) main_camera4_pane_g4

0x899a,	// (0x0005c545) main_camera4_pane_g5_ParamLimits

0x899a,	// (0x0005c545) main_camera4_pane_g5

0x0005,

0xf828,	// (0x000633d3) main_camera4_pane_g_ParamLimits

0xf828,	// (0x000633d3) main_camera4_pane_g

0x89b4,	// (0x0005c55f) main_camera4_pane_t1_ParamLimits

0x89b4,	// (0x0005c55f) main_camera4_pane_t1

0x0f79,	// (0x00054b24) bg_tb_trans_pane_cp06

0x8a04,	// (0x0005c5af) cam4_indicators_pane_g1

0x8a15,	// (0x0005c5c0) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x000633ee) cam4_indicators_pane_g

0x8a33,	// (0x0005c5de) cam4_indicators_pane_t1

0x8a5d,	// (0x0005c608) main_video4_pane_g1_ParamLimits

0x8a5d,	// (0x0005c608) main_video4_pane_g1

0x8a69,	// (0x0005c614) main_video4_pane_g2_ParamLimits

0x8a69,	// (0x0005c614) main_video4_pane_g2

0x8a75,	// (0x0005c620) main_video4_pane_g3_ParamLimits

0x8a75,	// (0x0005c620) main_video4_pane_g3

0x8a81,	// (0x0005c62c) main_video4_pane_g4_ParamLimits

0x8a81,	// (0x0005c62c) main_video4_pane_g4

0x0004,

0xf84a,	// (0x000633f5) main_video4_pane_g_ParamLimits

0xf84a,	// (0x000633f5) main_video4_pane_g

0x8aa1,	// (0x0005c64c) vid4_indicators_pane_ParamLimits

0x8aa1,	// (0x0005c64c) vid4_indicators_pane

0x8ac0,	// (0x0005c66b) video4_image_uncrop_cif_pane_ParamLimits

0x8ac0,	// (0x0005c66b) video4_image_uncrop_cif_pane

0x8acf,	// (0x0005c67a) video4_image_uncrop_nhd_pane_ParamLimits

0x8acf,	// (0x0005c67a) video4_image_uncrop_nhd_pane

0x8943,	// (0x0005c4ee) video4_image_uncrop_vga_pane_ParamLimits

0x8943,	// (0x0005c4ee) video4_image_uncrop_vga_pane

0x70a5,	// (0x0005ac50) bg_tb_trans_pane_cp07

0x8ae6,	// (0x0005c691) vid4_indicators_pane_g1

0x8afa,	// (0x0005c6a5) vid4_indicators_pane_g2

0x8b0e,	// (0x0005c6b9) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x00063400) vid4_indicators_pane_g

0x8b3d,	// (0x0005c6e8) vid4_indicators_pane_t1

0x8b54,	// (0x0005c6ff) cam4_autofocus_pane_g1

0x8b5c,	// (0x0005c707) cam4_autofocus_pane_g2

0x8b64,	// (0x0005c70f) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0006340b) cam4_autofocus_pane_g

0x8b6c,	// (0x0005c717) cam4_autofocus_pane_g3_copy1

0x8242,	// (0x0005bded) video_down_pane_cp_t1

0x8250,	// (0x0005bdfb) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x00063383) video_down_pane_cp_t

0x44ee,	// (0x00058099) popup_vitu2_window_ParamLimits

0x44ee,	// (0x00058099) popup_vitu2_window

0x8b74,	// (0x0005c71f) aid_size_cell2_itu2_ParamLimits

0x8b74,	// (0x0005c71f) aid_size_cell2_itu2

0x8b96,	// (0x0005c741) aid_size_cell_itu2_ParamLimits

0x8b96,	// (0x0005c741) aid_size_cell_itu2

0x8bda,	// (0x0005c785) bg_popup_window_pane_cp09_ParamLimits

0x8bda,	// (0x0005c785) bg_popup_window_pane_cp09

0x8be8,	// (0x0005c793) field_vitu2_entry_pane_ParamLimits

0x8be8,	// (0x0005c793) field_vitu2_entry_pane

0x8c08,	// (0x0005c7b3) grid_vitu2_function_pane_ParamLimits

0x8c08,	// (0x0005c7b3) grid_vitu2_function_pane

0x8c4c,	// (0x0005c7f7) grid_vitu2_itu_pane_ParamLimits

0x8c4c,	// (0x0005c7f7) grid_vitu2_itu_pane

0x8cc4,	// (0x0005c86f) cell_vitu2_itu_pane_ParamLimits

0x8cc4,	// (0x0005c86f) cell_vitu2_itu_pane

0x8cdd,	// (0x0005c888) cell_vitu2_function_pane_ParamLimits

0x8cdd,	// (0x0005c888) cell_vitu2_function_pane

0xea3c,	// (0x000625e7) bg_popup_call_pane_cp08_ParamLimits

0xea3c,	// (0x000625e7) bg_popup_call_pane_cp08

0xea53,	// (0x000625fe) field_vitu2_entry_pane_g1

0xea5f,	// (0x0006260a) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x00063412) field_vitu2_entry_pane_g

0x8d1e,	// (0x0005c8c9) field_vitu2_entry_pane_t1_ParamLimits

0x8d1e,	// (0x0005c8c9) field_vitu2_entry_pane_t1

0xea6b,	// (0x00062616) field_vitu2_entry_pane_t2_ParamLimits

0xea6b,	// (0x00062616) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x00063419) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x00063419) field_vitu2_entry_pane_t

0x73e1,	// (0x0005af8c) bg_button_pane_cp010_ParamLimits

0x73e1,	// (0x0005af8c) bg_button_pane_cp010

0x8d52,	// (0x0005c8fd) cell_vitu2_itu_pane_g1

0x8d78,	// (0x0005c923) cell_vitu2_itu_pane_t1_ParamLimits

0x8d78,	// (0x0005c923) cell_vitu2_itu_pane_t1

0x41fb,	// (0x00057da6) cell_vitu2_itu_pane_t2_ParamLimits

0x41fb,	// (0x00057da6) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x00063423) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x00063423) cell_vitu2_itu_pane_t

0x70a5,	// (0x0005ac50) bg_button_pane_cp011

0x8dc4,	// (0x0005c96f) cell_vitu2_function_pane_g1

0x4508,	// (0x000580b3) main_myfav_hc_pane

0x8735,	// (0x0005c2e0) popup_image3_note_pane_ParamLimits

0x8735,	// (0x0005c2e0) popup_image3_note_pane

0x8743,	// (0x0005c2ee) popup_image3_tool_bar_pane_ParamLimits

0x8743,	// (0x0005c2ee) popup_image3_tool_bar_pane

0x4271,	// (0x00057e1c) cell_vitu2_itu_pane_t3_ParamLimits

0x4271,	// (0x00057e1c) cell_vitu2_itu_pane_t3

0x17ee,	// (0x00055399) bg_popup_trans_pane

0xea90,	// (0x0006263b) grid_image3_tool_bar_pane

0xea9a,	// (0x00062645) bg_popup_trans_pane_g1

0x2925,	// (0x000564d0) bg_popup_trans_pane_g2

0xeaa2,	// (0x0006264d) bg_popup_trans_pane_g3

0xeaaa,	// (0x00062655) bg_popup_trans_pane_g4

0xeab2,	// (0x0006265d) bg_popup_trans_pane_g5

0xeaba,	// (0x00062665) bg_popup_trans_pane_g6

0xeac2,	// (0x0006266d) bg_popup_trans_pane_g7

0xeaca,	// (0x00062675) bg_popup_trans_pane_g8

0x2905,	// (0x000564b0) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0006342a) bg_popup_trans_pane_g

0xead2,	// (0x0006267d) cell_image3_tool_bar_pane_ParamLimits

0xead2,	// (0x0006267d) cell_image3_tool_bar_pane

0x2714,	// (0x000562bf) cell_image3_tool_bar_pane_g1

0x17ee,	// (0x00055399) bg_popup_trans_pane_cp1

0xeae6,	// (0x00062691) popup_image3_note_pane_t1

0xeaf4,	// (0x0006269f) popup_image3_note_pane_t2

0xeb02,	// (0x000626ad) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0006343d) popup_image3_note_pane_t

0xeb10,	// (0x000626bb) popup_image3_note_pane_t3_copy1

0x8dd8,	// (0x0005c983) bg_myfav_hc_instruction_pane_ParamLimits

0x8dd8,	// (0x0005c983) bg_myfav_hc_instruction_pane

0x8df0,	// (0x0005c99b) cell_myfav_contact_pane_ParamLimits

0x8df0,	// (0x0005c99b) cell_myfav_contact_pane

0x8e0a,	// (0x0005c9b5) cell_myfav_contact_pane_cp1_ParamLimits

0x8e0a,	// (0x0005c9b5) cell_myfav_contact_pane_cp1

0x8e22,	// (0x0005c9cd) cell_myfav_contact_pane_cp2_ParamLimits

0x8e22,	// (0x0005c9cd) cell_myfav_contact_pane_cp2

0x8e3a,	// (0x0005c9e5) cell_myfav_contact_pane_cp3_ParamLimits

0x8e3a,	// (0x0005c9e5) cell_myfav_contact_pane_cp3

0x8e51,	// (0x0005c9fc) cell_myfav_contact_pane_cp4_ParamLimits

0x8e51,	// (0x0005c9fc) cell_myfav_contact_pane_cp4

0x8e67,	// (0x0005ca12) cell_myfav_contact_pane_cp5_ParamLimits

0x8e67,	// (0x0005ca12) cell_myfav_contact_pane_cp5

0x8e7b,	// (0x0005ca26) cell_myfav_contact_pane_cp6_ParamLimits

0x8e7b,	// (0x0005ca26) cell_myfav_contact_pane_cp6

0x8e8f,	// (0x0005ca3a) cell_myfav_contact_pane_cp7_ParamLimits

0x8e8f,	// (0x0005ca3a) cell_myfav_contact_pane_cp7

0xeb1e,	// (0x000626c9) listscroll_gen_pane_cp05

0x8ea7,	// (0x0005ca52) main_myfav_hc_pane_g1_ParamLimits

0x8ea7,	// (0x0005ca52) main_myfav_hc_pane_g1

0x8ebd,	// (0x0005ca68) main_myfav_hc_pane_g2_ParamLimits

0x8ebd,	// (0x0005ca68) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x00063444) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x00063444) main_myfav_hc_pane_g

0x8eeb,	// (0x0005ca96) main_myfav_hc_pane_t1_ParamLimits

0x8eeb,	// (0x0005ca96) main_myfav_hc_pane_t1

0xeb27,	// (0x000626d2) main_myfav_hc_pane_t2_ParamLimits

0xeb27,	// (0x000626d2) main_myfav_hc_pane_t2

0xeb39,	// (0x000626e4) main_myfav_hc_pane_t3_ParamLimits

0xeb39,	// (0x000626e4) main_myfav_hc_pane_t3

0x8f02,	// (0x0005caad) main_myfav_hc_pane_t4_ParamLimits

0x8f02,	// (0x0005caad) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0006344b) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0006344b) main_myfav_hc_pane_t

0x2714,	// (0x000562bf) bg_myfav_hc_instruction_pane_g1

0xeb4b,	// (0x000626f6) cell_myfav_contact_pane_g1_ParamLimits

0xeb4b,	// (0x000626f6) cell_myfav_contact_pane_g1

0xeb4b,	// (0x000626f6) cell_myfav_contact_pane_g2_ParamLimits

0xeb4b,	// (0x000626f6) cell_myfav_contact_pane_g2

0xeb57,	// (0x00062702) cell_myfav_contact_pane_g3_ParamLimits

0xeb57,	// (0x00062702) cell_myfav_contact_pane_g3

0x24a1,	// (0x0005604c) cell_myfav_contact_pane_g4_ParamLimits

0x24a1,	// (0x0005604c) cell_myfav_contact_pane_g4

0xeb64,	// (0x0006270f) cell_myfav_contact_pane_g5_ParamLimits

0xeb64,	// (0x0006270f) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x00063456) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x00063456) cell_myfav_contact_pane_g

0x8ed3,	// (0x0005ca7e) main_myfav_hc_pane_g3_ParamLimits

0x8ed3,	// (0x0005ca7e) main_myfav_hc_pane_g3

0x415f,	// (0x00057d0a) popup_adpt_find_window

0x8f2c,	// (0x0005cad7) afind_page_pane_ParamLimits

0x8f2c,	// (0x0005cad7) afind_page_pane

0x8f39,	// (0x0005cae4) aid_size_cell_afind_ParamLimits

0x8f39,	// (0x0005cae4) aid_size_cell_afind

0x8f53,	// (0x0005cafe) bg_popup_sub_pane_cp09_ParamLimits

0x8f53,	// (0x0005cafe) bg_popup_sub_pane_cp09

0x8f60,	// (0x0005cb0b) find_pane_cp01_ParamLimits

0x8f60,	// (0x0005cb0b) find_pane_cp01

0xeb70,	// (0x0006271b) grid_afind_control_pane_ParamLimits

0xeb70,	// (0x0006271b) grid_afind_control_pane

0x8f6d,	// (0x0005cb18) grid_afind_pane_ParamLimits

0x8f6d,	// (0x0005cb18) grid_afind_pane

0x8f89,	// (0x0005cb34) cell_afind_pane_ParamLimits

0x8f89,	// (0x0005cb34) cell_afind_pane

0x2714,	// (0x000562bf) afind_page_pane_g1

0x8fd1,	// (0x0005cb7c) afind_page_pane_g2

0x8fd9,	// (0x0005cb84) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x00063461) afind_page_pane_g

0x8fe1,	// (0x0005cb8c) afind_page_pane_t1

0xeb96,	// (0x00062741) cell_afind_grid_control_pane_ParamLimits

0xeb96,	// (0x00062741) cell_afind_grid_control_pane

0xea04,	// (0x000625af) bg_button_pane_cp69_ParamLimits

0xea04,	// (0x000625af) bg_button_pane_cp69

0x8fef,	// (0x0005cb9a) cell_afind_pane_g1_ParamLimits

0x8fef,	// (0x0005cb9a) cell_afind_pane_g1

0x8ffc,	// (0x0005cba7) cell_afind_pane_t1_ParamLimits

0x8ffc,	// (0x0005cba7) cell_afind_pane_t1

0x271e,	// (0x000562c9) bg_button_pane_cp72

0xeba5,	// (0x00062750) cell_afind_grid_control_pane_g1

0x6bdc,	// (0x0005a787) aid_image_placing_area_ParamLimits

0x6bdc,	// (0x0005a787) aid_image_placing_area

0x2493,	// (0x0005603e) field_vitu_entry_pane_g1_ParamLimits

0x2493,	// (0x0005603e) field_vitu_entry_pane_g1

0x2493,	// (0x0005603e) field_vitu_entry_pane_g2_ParamLimits

0x2493,	// (0x0005603e) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x00062d6c) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x00062d6c) field_vitu_entry_pane_g

0xe77c,	// (0x00062327) cell_vitu_itu_pane_g1_ParamLimits

0xe546,	// (0x000620f1) cell_vitu_itu_pane_t3_ParamLimits

0xe546,	// (0x000620f1) cell_vitu_itu_pane_t3

0xe9ad,	// (0x00062558) mp4_progress_pane_t1_ParamLimits

0xe9c6,	// (0x00062571) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x000633a7) mp4_progress_pane_t_ParamLimits

0xe9df,	// (0x0006258a) mup_progress_pane_cp04_ParamLimits

0x8f16,	// (0x0005cac1) main_myfav_hc_pane_t5_ParamLimits

0x8f16,	// (0x0005cac1) main_myfav_hc_pane_t5

0x4323,	// (0x00057ece) aid_zoom_text_primary

0x415f,	// (0x00057d0a) popup_adpt_find_window_ParamLimits

0x70a5,	// (0x0005ac50) main_cam_set_pane

0x8968,	// (0x0005c513) cam4_zoom_pane_ParamLimits

0x8968,	// (0x0005c513) cam4_zoom_pane

0x900e,	// (0x0005cbb9) main_cam_set_pane_g1_ParamLimits

0x900e,	// (0x0005cbb9) main_cam_set_pane_g1

0x901c,	// (0x0005cbc7) main_cam_set_pane_g2_ParamLimits

0x901c,	// (0x0005cbc7) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x00063468) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x00063468) main_cam_set_pane_g

0x9028,	// (0x0005cbd3) main_cam_set_pane_t1_ParamLimits

0x9028,	// (0x0005cbd3) main_cam_set_pane_t1

0x9044,	// (0x0005cbef) main_cset_listscroll_pane_ParamLimits

0x9044,	// (0x0005cbef) main_cset_listscroll_pane

0x9076,	// (0x0005cc21) main_cset_slider_pane_ParamLimits

0x9076,	// (0x0005cc21) main_cset_slider_pane

0xebb6,	// (0x00062761) main_cset_list_pane_ParamLimits

0xebb6,	// (0x00062761) main_cset_list_pane

0xebc6,	// (0x00062771) scroll_pane_cp028

0x9095,	// (0x0005cc40) aid_area_touch_slider

0x90b1,	// (0x0005cc5c) cset_slider_pane

0x90d4,	// (0x0005cc7f) main_cset_slider_pane_g1

0x90e9,	// (0x0005cc94) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0006346d) main_cset_slider_pane_g

0xebff,	// (0x000627aa) main_cset_slider_pane_t1

0x91ab,	// (0x0005cd56) main_cset_slider_pane_t2

0x91c5,	// (0x0005cd70) main_cset_slider_pane_t3

0x91df,	// (0x0005cd8a) main_cset_slider_pane_t4

0x91f9,	// (0x0005cda4) main_cset_slider_pane_t5

0x9217,	// (0x0005cdc2) main_cset_slider_pane_t6

0x922e,	// (0x0005cdd9) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x00063492) main_cset_slider_pane_t

0x933a,	// (0x0005cee5) cset_list_set_pane_ParamLimits

0x933a,	// (0x0005cee5) cset_list_set_pane

0xec99,	// (0x00062844) aid_position_infowindow_above

0xeca1,	// (0x0006284c) aid_position_infowindow_below

0xeca9,	// (0x00062854) cset_list_set_pane_g1_ParamLimits

0xeca9,	// (0x00062854) cset_list_set_pane_g1

0xecb5,	// (0x00062860) cset_list_set_pane_g3_ParamLimits

0xecb5,	// (0x00062860) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x000634b1) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x000634b1) cset_list_set_pane_g

0xecc4,	// (0x0006286f) cset_list_set_pane_t1_ParamLimits

0xecc4,	// (0x0006286f) cset_list_set_pane_t1

0x223f,	// (0x00055dea) list_highlight_pane_cp021_ParamLimits

0x223f,	// (0x00055dea) list_highlight_pane_cp021

0x329b,	// (0x00056e46) cset_slider_pane_g1

0x32ad,	// (0x00056e58) cset_slider_pane_g2

0x32a4,	// (0x00056e4f) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x000634b6) cset_slider_pane_g

0x9350,	// (0x0005cefb) aid_area_touch_cam4_zoom

0x9358,	// (0x0005cf03) cam4_zoom_cont_pane

0x9360,	// (0x0005cf0b) cam4_zoom_pane_g1

0x9368,	// (0x0005cf13) cam4_zoom_pane_g2

0x9370,	// (0x0005cf1b) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x000634bd) cam4_zoom_pane_g

0x9378,	// (0x0005cf23) cam4_zoom_cont_pane_g1

0x9381,	// (0x0005cf2c) cam4_zoom_cont_pane_g2

0x938a,	// (0x0005cf35) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x000634c4) cam4_zoom_cont_pane_g

0x878c,	// (0x0005c337) call4_image_pane_ParamLimits

0x878c,	// (0x0005c337) call4_image_pane

0x87eb,	// (0x0005c396) call4_windows_conf_pane_ParamLimits

0x8830,	// (0x0005c3db) popup_call4_audio_in_window_ParamLimits

0x8830,	// (0x0005c3db) popup_call4_audio_in_window

0x17ee,	// (0x00055399) bg_popup_call2_act_pane_cp02

0xea10,	// (0x000625bb) call4_list_conf_pane

0x2714,	// (0x000562bf) call4_image_pane_g1

0x2714,	// (0x000562bf) call4_image_pane_g2

0x0001,

0xf39d,	// (0x00062f48) call4_image_pane_g

0xecf4,	// (0x0006289f) list_single_graphic_popup_conf4_pane_ParamLimits

0xecf4,	// (0x0006289f) list_single_graphic_popup_conf4_pane

0x17ee,	// (0x00055399) list_highlight_pane_cp022

0xed07,	// (0x000628b2) list_single_graphic_popup_conf4_pane_g1

0x2e4b,	// (0x000569f6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x000634cb) list_single_graphic_popup_conf4_pane_g

0xed0f,	// (0x000628ba) list_single_graphic_popup_conf4_pane_t1

0x518e,	// (0x00058d39) popup_vtel_slider_window_ParamLimits

0x518e,	// (0x00058d39) popup_vtel_slider_window

0xe9f2,	// (0x0006259d) dialer2_ne_pane_t2_ParamLimits

0xe9f2,	// (0x0006259d) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x000633ac) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x000633ac) dialer2_ne_pane_t

0x223f,	// (0x00055dea) bg_popup_sub_pane_cp010_ParamLimits

0x223f,	// (0x00055dea) bg_popup_sub_pane_cp010

0x9393,	// (0x0005cf3e) popup_vtel_slider_window_g1_ParamLimits

0x9393,	// (0x0005cf3e) popup_vtel_slider_window_g1

0x939f,	// (0x0005cf4a) popup_vtel_slider_window_g2_ParamLimits

0x939f,	// (0x0005cf4a) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x000634d0) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x000634d0) popup_vtel_slider_window_g

0x93e7,	// (0x0005cf92) vtel_slider_pane_ParamLimits

0x93e7,	// (0x0005cf92) vtel_slider_pane

0x93f6,	// (0x0005cfa1) vtel_slider_pane_g1_ParamLimits

0x93f6,	// (0x0005cfa1) vtel_slider_pane_g1

0x9403,	// (0x0005cfae) vtel_slider_pane_g2_ParamLimits

0x9403,	// (0x0005cfae) vtel_slider_pane_g2

0x9410,	// (0x0005cfbb) vtel_slider_pane_g3_ParamLimits

0x9410,	// (0x0005cfbb) vtel_slider_pane_g3

0x93f6,	// (0x0005cfa1) vtel_slider_pane_g4_ParamLimits

0x93f6,	// (0x0005cfa1) vtel_slider_pane_g4

0x941d,	// (0x0005cfc8) vtel_slider_pane_g5_ParamLimits

0x941d,	// (0x0005cfc8) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x000634d9) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x000634d9) vtel_slider_pane_g

0x70a5,	// (0x0005ac50) main_gallery2_pane

0x8bbc,	// (0x0005c767) aid_size_row_itut2_dropdow_list_ParamLimits

0x8bbc,	// (0x0005c767) aid_size_row_itut2_dropdow_list

0x8c2a,	// (0x0005c7d5) grid_vitu2_function_top_pane_ParamLimits

0x8c2a,	// (0x0005c7d5) grid_vitu2_function_top_pane

0x8c84,	// (0x0005c82f) popup_vitu2_dropdown_list_window_ParamLimits

0x8c84,	// (0x0005c82f) popup_vitu2_dropdown_list_window

0x8ca2,	// (0x0005c84d) popup_vitu2_match_list_window

0x942a,	// (0x0005cfd5) cell_vitu2_function_top_pane_ParamLimits

0x942a,	// (0x0005cfd5) cell_vitu2_function_top_pane

0x9444,	// (0x0005cfef) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9444,	// (0x0005cfef) cell_vitu2_function_top_pane_cp01

0x9460,	// (0x0005d00b) cell_vitu2_function_top_wide_pane_ParamLimits

0x9460,	// (0x0005d00b) cell_vitu2_function_top_wide_pane

0x70a5,	// (0x0005ac50) bg_button_pane_cp012

0x947e,	// (0x0005d029) cell_vitu2_function_top_pane_g1

0x9492,	// (0x0005d03d) bg_button_pane_cp013_ParamLimits

0x9492,	// (0x0005d03d) bg_button_pane_cp013

0x94ae,	// (0x0005d059) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x94ae,	// (0x0005d059) cell_vitu2_function_top_wide_pane_g1

0x44ee,	// (0x00058099) bg_popup_sub_pane_cp20

0x94c6,	// (0x0005d071) list_vitu2_match_list_pane

0xea9a,	// (0x00062645) bg_popup_sub_pane_cp20_g1

0xeaa2,	// (0x0006264d) bg_popup_sub_pane_cp20_g2

0x2925,	// (0x000564d0) bg_popup_sub_pane_cp20_g3

0xeaaa,	// (0x00062655) bg_popup_sub_pane_cp20_g4

0x2905,	// (0x000564b0) bg_popup_sub_pane_cp20_g5

0xed25,	// (0x000628d0) bg_popup_sub_pane_cp20_g6

0xeaba,	// (0x00062665) bg_popup_sub_pane_cp20_g7

0xeac2,	// (0x0006266d) bg_popup_sub_pane_cp20_g8

0xeaca,	// (0x00062675) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x000634e4) bg_popup_sub_pane_cp20_g

0x94de,	// (0x0005d089) list_vitu2_match_list_item_pane_ParamLimits

0x94de,	// (0x0005d089) list_vitu2_match_list_item_pane

0x94f0,	// (0x0005d09b) list_vitu2_match_list_item_pane_t1

0x4508,	// (0x000580b3) bg_popup_sub_pane_cp21

0x26de,	// (0x00056289) grid_vitu2_dropdown_list_pane

0x94fe,	// (0x0005d0a9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x94fe,	// (0x0005d0a9) cell_vitu2_dropdown_list_char_pane

0x9520,	// (0x0005d0cb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9520,	// (0x0005d0cb) cell_vitu2_dropdown_list_ctrl_pane

0xed2d,	// (0x000628d8) cell_vitu2_dropdown_list_char_pane_g1

0xed36,	// (0x000628e1) cell_vitu2_dropdown_list_char_pane_g2

0xed3f,	// (0x000628ea) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x000634f7) cell_vitu2_dropdown_list_char_pane_g

0x9548,	// (0x0005d0f3) cell_vitu2_dropdown_list_char_pane_t1

0x9556,	// (0x0005d101) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9556,	// (0x0005d101) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9563,	// (0x0005d10e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9563,	// (0x0005d10e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9570,	// (0x0005d11b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9570,	// (0x0005d11b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x957d,	// (0x0005d128) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x957d,	// (0x0005d128) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0f79,	// (0x00054b24) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0f79,	// (0x00054b24) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x000634fe) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x000634fe) cell_vitu2_dropdown_list_ctrl_pane_g

0x9599,	// (0x0005d144) aid_size_cell_gallery2_ParamLimits

0x9599,	// (0x0005d144) aid_size_cell_gallery2

0x95b3,	// (0x0005d15e) grid_gallery2_pane_ParamLimits

0x95b3,	// (0x0005d15e) grid_gallery2_pane

0x95ca,	// (0x0005d175) scroll_pane_cp029_ParamLimits

0x95ca,	// (0x0005d175) scroll_pane_cp029

0x95da,	// (0x0005d185) cell_gallery2_pane_ParamLimits

0x95da,	// (0x0005d185) cell_gallery2_pane

0xed48,	// (0x000628f3) cell_gallery2_pane_g2

0x0275,	// (0x00053e20) cell_gallery2_pane_g3

0xed50,	// (0x000628fb) cell_gallery2_pane_g4

0xed58,	// (0x00062903) cell_gallery2_pane_g5

0x26de,	// (0x00056289) grid_highlight_pane_cp10

0x8ca2,	// (0x0005c84d) popup_vitu2_match_list_window_ParamLimits

0x8cb4,	// (0x0005c85f) popup_vitu2_query_window_ParamLimits

0x8cb4,	// (0x0005c85f) popup_vitu2_query_window

0x4508,	// (0x000580b3) bg_vitu2_candi_button_pane

0xed2d,	// (0x000628d8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed36,	// (0x000628e1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed3f,	// (0x000628ea) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x962f,	// (0x0005d1da) bg_button_pane_cp015

0x9644,	// (0x0005d1ef) bg_button_pane_cp016

0x9650,	// (0x0005d1fb) bg_button_pane_cp017

0x322b,	// (0x00056dd6) bg_popup_sub_pane_cp22

0xed60,	// (0x0006290b) popup_vitu2_query_window_g1

0x9690,	// (0x0005d23b) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x00063509) popup_vitu2_query_window_g

0x96b4,	// (0x0005d25f) popup_vitu2_query_window_t1_ParamLimits

0x96b4,	// (0x0005d25f) popup_vitu2_query_window_t1

0x96e7,	// (0x0005d292) popup_vitu2_query_window_t2_ParamLimits

0x96e7,	// (0x0005d292) popup_vitu2_query_window_t2

0x96f9,	// (0x0005d2a4) popup_vitu2_query_window_t3_ParamLimits

0x96f9,	// (0x0005d2a4) popup_vitu2_query_window_t3

0x9721,	// (0x0005d2cc) popup_vitu2_query_window_t4_ParamLimits

0x9721,	// (0x0005d2cc) popup_vitu2_query_window_t4

0x9735,	// (0x0005d2e0) popup_vitu2_query_window_t5_ParamLimits

0x9735,	// (0x0005d2e0) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x00063510) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x00063510) popup_vitu2_query_window_t

0xebae,	// (0x00062759) main_cset_text_pane

0x9095,	// (0x0005cc40) aid_area_touch_slider_ParamLimits

0x90b1,	// (0x0005cc5c) cset_slider_pane_ParamLimits

0x90d4,	// (0x0005cc7f) main_cset_slider_pane_g1_ParamLimits

0x90e9,	// (0x0005cc94) main_cset_slider_pane_g2_ParamLimits

0xebcf,	// (0x0006277a) main_cset_slider_pane_g3_ParamLimits

0xebcf,	// (0x0006277a) main_cset_slider_pane_g3

0x90fe,	// (0x0005cca9) main_cset_slider_pane_g4_ParamLimits

0x90fe,	// (0x0005cca9) main_cset_slider_pane_g4

0x910d,	// (0x0005ccb8) main_cset_slider_pane_g5_ParamLimits

0x910d,	// (0x0005ccb8) main_cset_slider_pane_g5

0x911b,	// (0x0005ccc6) main_cset_slider_pane_g6_ParamLimits

0x911b,	// (0x0005ccc6) main_cset_slider_pane_g6

0xf8c2,	// (0x0006346d) main_cset_slider_pane_g_ParamLimits

0xebff,	// (0x000627aa) main_cset_slider_pane_t1_ParamLimits

0x91ab,	// (0x0005cd56) main_cset_slider_pane_t2_ParamLimits

0x91c5,	// (0x0005cd70) main_cset_slider_pane_t3_ParamLimits

0x91df,	// (0x0005cd8a) main_cset_slider_pane_t4_ParamLimits

0x91f9,	// (0x0005cda4) main_cset_slider_pane_t5_ParamLimits

0x9217,	// (0x0005cdc2) main_cset_slider_pane_t6_ParamLimits

0x922e,	// (0x0005cdd9) main_cset_slider_pane_t7_ParamLimits

0x925c,	// (0x0005ce07) main_cset_slider_pane_t8_ParamLimits

0x925c,	// (0x0005ce07) main_cset_slider_pane_t8

0x9284,	// (0x0005ce2f) main_cset_slider_pane_t9_ParamLimits

0x9284,	// (0x0005ce2f) main_cset_slider_pane_t9

0x92ac,	// (0x0005ce57) main_cset_slider_pane_t10_ParamLimits

0x92ac,	// (0x0005ce57) main_cset_slider_pane_t10

0x92d4,	// (0x0005ce7f) main_cset_slider_pane_t11_ParamLimits

0x92d4,	// (0x0005ce7f) main_cset_slider_pane_t11

0x92fe,	// (0x0005cea9) main_cset_slider_pane_t12_ParamLimits

0x92fe,	// (0x0005cea9) main_cset_slider_pane_t12

0x931b,	// (0x0005cec6) main_cset_slider_pane_t13_ParamLimits

0x931b,	// (0x0005cec6) main_cset_slider_pane_t13

0xf8e7,	// (0x00063492) main_cset_slider_pane_t_ParamLimits

0x17ee,	// (0x00055399) bg_popup_sub_pane_cp011

0xed6c,	// (0x00062917) main_cset_text_pane_g1

0xed74,	// (0x0006291f) main_cset_text_pane_t1

0xed82,	// (0x0006292d) main_cset_text_pane_t2

0xed90,	// (0x0006293b) main_cset_text_pane_t3

0xed9e,	// (0x00062949) main_cset_text_pane_t4

0xedac,	// (0x00062957) main_cset_text_pane_t5

0xedba,	// (0x00062965) main_cset_text_pane_t6

0xedc8,	// (0x00062973) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0006351f) main_cset_text_pane_t

0x4508,	// (0x000580b3) main_cam4_burst_pane

0x4508,	// (0x000580b3) main_cam5_pane

0xeb84,	// (0x0006272f) bg_button_pane_cp019

0xeb8d,	// (0x00062738) bg_button_pane_cp020

0xebdb,	// (0x00062786) main_cset_slider_pane_g7_ParamLimits

0xebdb,	// (0x00062786) main_cset_slider_pane_g7

0xebe7,	// (0x00062792) main_cset_slider_pane_g8_ParamLimits

0xebe7,	// (0x00062792) main_cset_slider_pane_g8

0x912f,	// (0x0005ccda) main_cset_slider_pane_g9_ParamLimits

0x912f,	// (0x0005ccda) main_cset_slider_pane_g9

0x913b,	// (0x0005cce6) main_cset_slider_pane_g10_ParamLimits

0x913b,	// (0x0005cce6) main_cset_slider_pane_g10

0x9147,	// (0x0005ccf2) main_cset_slider_pane_g11_ParamLimits

0x9147,	// (0x0005ccf2) main_cset_slider_pane_g11

0x9153,	// (0x0005ccfe) main_cset_slider_pane_g12_ParamLimits

0x9153,	// (0x0005ccfe) main_cset_slider_pane_g12

0x915f,	// (0x0005cd0a) main_cset_slider_pane_g13_ParamLimits

0x915f,	// (0x0005cd0a) main_cset_slider_pane_g13

0x916b,	// (0x0005cd16) main_cset_slider_pane_g14_ParamLimits

0x916b,	// (0x0005cd16) main_cset_slider_pane_g14

0x9177,	// (0x0005cd22) main_cset_slider_pane_g15_ParamLimits

0x9177,	// (0x0005cd22) main_cset_slider_pane_g15

0xec27,	// (0x000627d2) main_cset_slider_pane_t14_ParamLimits

0xec27,	// (0x000627d2) main_cset_slider_pane_t14

0xec60,	// (0x0006280b) main_cset_slider_pane_t15_ParamLimits

0xec60,	// (0x0006280b) main_cset_slider_pane_t15

0x979f,	// (0x0005d34a) aid_cam4_burst_size_cell_ParamLimits

0x979f,	// (0x0005d34a) aid_cam4_burst_size_cell

0x97bb,	// (0x0005d366) grid_cam4_burst_pane_ParamLimits

0x97bb,	// (0x0005d366) grid_cam4_burst_pane

0x97eb,	// (0x0005d396) linegrid_cam4_burst_pane_ParamLimits

0x97eb,	// (0x0005d396) linegrid_cam4_burst_pane

0x980b,	// (0x0005d3b6) scroll_pane_cp30_ParamLimits

0x980b,	// (0x0005d3b6) scroll_pane_cp30

0x9817,	// (0x0005d3c2) cell_cam4_burst_pane_ParamLimits

0x9817,	// (0x0005d3c2) cell_cam4_burst_pane

0xedd6,	// (0x00062981) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd6,	// (0x00062981) linegrid_cam4_burst_pane_g1

0x9853,	// (0x0005d3fe) linegrid_cam4_burst_pane_g2_ParamLimits

0x9853,	// (0x0005d3fe) linegrid_cam4_burst_pane_g2

0xede3,	// (0x0006298e) linegrid_cam4_burst_pane_g3_ParamLimits

0xede3,	// (0x0006298e) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0006352e) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0006352e) linegrid_cam4_burst_pane_g

0x9864,	// (0x0005d40f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9864,	// (0x0005d40f) linegrid_cam4_burst_pane_g3_copy1

0xedf0,	// (0x0006299b) linegrid_cam4_burst_pane_g4_ParamLimits

0xedf0,	// (0x0006299b) linegrid_cam4_burst_pane_g4

0x987e,	// (0x0005d429) linegrid_cam4_burst_pane_g5_ParamLimits

0x987e,	// (0x0005d429) linegrid_cam4_burst_pane_g5

0x988f,	// (0x0005d43a) linegrid_cam4_burst_pane_g6_ParamLimits

0x988f,	// (0x0005d43a) linegrid_cam4_burst_pane_g6

0xee09,	// (0x000629b4) linegrid_cam4_burst_pane_g7_ParamLimits

0xee09,	// (0x000629b4) linegrid_cam4_burst_pane_g7

0x98a0,	// (0x0005d44b) cell_cam4_burst_pane_g1

0xee22,	// (0x000629cd) main_cam5_pane_t1_ParamLimits

0xee22,	// (0x000629cd) main_cam5_pane_t1

0xee34,	// (0x000629df) main_cam5_pane_t2_ParamLimits

0xee34,	// (0x000629df) main_cam5_pane_t2

0xee46,	// (0x000629f1) main_cam5_pane_t3_ParamLimits

0xee46,	// (0x000629f1) main_cam5_pane_t3

0xee58,	// (0x00062a03) main_cam5_pane_t4_ParamLimits

0xee58,	// (0x00062a03) main_cam5_pane_t4

0xee70,	// (0x00062a1b) main_cam5_pane_t5_ParamLimits

0xee70,	// (0x00062a1b) main_cam5_pane_t5

0xee84,	// (0x00062a2f) main_cam5_pane_t6_ParamLimits

0xee84,	// (0x00062a2f) main_cam5_pane_t6

0xee98,	// (0x00062a43) main_cam5_pane_t7_ParamLimits

0xee98,	// (0x00062a43) main_cam5_pane_t7

0xeeaa,	// (0x00062a55) main_cam5_pane_t8_ParamLimits

0xeeaa,	// (0x00062a55) main_cam5_pane_t8

0xeec6,	// (0x00062a71) main_cam5_pane_t9_ParamLimits

0xeec6,	// (0x00062a71) main_cam5_pane_t9

0xeed8,	// (0x00062a83) main_cam5_pane_t10_ParamLimits

0xeed8,	// (0x00062a83) main_cam5_pane_t10

0xeeea,	// (0x00062a95) main_cam5_pane_t11_ParamLimits

0xeeea,	// (0x00062a95) main_cam5_pane_t11

0xeefc,	// (0x00062aa7) main_cam5_pane_t12_ParamLimits

0xeefc,	// (0x00062aa7) main_cam5_pane_t12

0xef11,	// (0x00062abc) main_cam5_pane_t13_ParamLimits

0xef11,	// (0x00062abc) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0006353a) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0006353a) main_cam5_pane_t

0x44ad,	// (0x00058058) popup_scut_keymap_window_ParamLimits

0x44ad,	// (0x00058058) popup_scut_keymap_window

0x98b3,	// (0x0005d45e) aid_size_cell_brow_shortcut

0x26de,	// (0x00056289) bg_popup_window_pane_cp010

0x98bf,	// (0x0005d46a) grid_scut_pane

0x98cb,	// (0x0005d476) cell_scut_pane_ParamLimits

0x98cb,	// (0x0005d476) cell_scut_pane

0x98e2,	// (0x0005d48d) cell_scut_pane_g1

0xef2e,	// (0x00062ad9) cell_scut_pane_t1

0xef3d,	// (0x00062ae8) cell_scut_pane_t2

0x98eb,	// (0x0005d496) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x00063555) cell_scut_pane_t

0x78aa,	// (0x0005b455) main_mup3_pane_g8_ParamLimits

0x78aa,	// (0x0005b455) main_mup3_pane_g8

0x8bca,	// (0x0005c775) area_vitu2_query_pane_ParamLimits

0x8bca,	// (0x0005c775) area_vitu2_query_pane

0x965c,	// (0x0005d207) input_focus_pane_cp08

0xef4c,	// (0x00062af7) area_vitu2_query_pane_g1

0x98f9,	// (0x0005d4a4) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0006355c) area_vitu2_query_pane_g

0x990a,	// (0x0005d4b5) area_vitu2_query_pane_t1_ParamLimits

0x990a,	// (0x0005d4b5) area_vitu2_query_pane_t1

0x991e,	// (0x0005d4c9) area_vitu2_query_pane_t2_ParamLimits

0x991e,	// (0x0005d4c9) area_vitu2_query_pane_t2

0x9932,	// (0x0005d4dd) area_vitu2_query_pane_t3_ParamLimits

0x9932,	// (0x0005d4dd) area_vitu2_query_pane_t3

0xef58,	// (0x00062b03) area_vitu2_query_pane_t4_ParamLimits

0xef58,	// (0x00062b03) area_vitu2_query_pane_t4

0xef80,	// (0x00062b2b) area_vitu2_query_pane_t5_ParamLimits

0xef80,	// (0x00062b2b) area_vitu2_query_pane_t5

0xefa8,	// (0x00062b53) area_vitu2_query_pane_t6_ParamLimits

0xefa8,	// (0x00062b53) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x00063561) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x00063561) area_vitu2_query_pane_t

0x9644,	// (0x0005d1ef) bg_button_pane_cp018

0x995a,	// (0x0005d505) bg_button_pane_cp021

0x9966,	// (0x0005d511) bg_button_pane_cp022

0x9989,	// (0x0005d534) input_focus_pane_cp09

0x2f87,	// (0x00056b32) aid_size_touch_mv_arrow_left

0x2fb0,	// (0x00056b5b) aid_size_touch_mv_arrow_right

0x918f,	// (0x0005cd3a) main_cset_slider_pane_g16_ParamLimits

0x918f,	// (0x0005cd3a) main_cset_slider_pane_g16

0x919d,	// (0x0005cd48) main_cset_slider_pane_g17_ParamLimits

0x919d,	// (0x0005cd48) main_cset_slider_pane_g17

0x98a0,	// (0x0005d44b) cell_cam4_burst_pane_g1_ParamLimits

0x17ee,	// (0x00055399) compa_mode_pane

0x93ab,	// (0x0005cf56) popup_vtel_slider_window_g3_ParamLimits

0x93ab,	// (0x0005cf56) popup_vtel_slider_window_g3

0x93bf,	// (0x0005cf6a) popup_vtel_slider_window_g4_ParamLimits

0x93bf,	// (0x0005cf6a) popup_vtel_slider_window_g4

0x93d3,	// (0x0005cf7e) popup_vtel_slider_window_t1_ParamLimits

0x93d3,	// (0x0005cf7e) popup_vtel_slider_window_t1

0x4508,	// (0x000580b3) main_cl_pane

0x7143,	// (0x0005acee) popup_imed_adjust2_window_ParamLimits

0x322b,	// (0x00056dd6) bg_tb_trans_pane_cp05_ParamLimits

0xe6b1,	// (0x0006225c) popup_imed_adjust2_window_g1_ParamLimits

0xe6c0,	// (0x0006226b) popup_imed_adjust2_window_g2_ParamLimits

0xe6c0,	// (0x0006226b) popup_imed_adjust2_window_g2

0xe6cc,	// (0x00062277) popup_imed_adjust2_window_g3_ParamLimits

0xe6cc,	// (0x00062277) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x000632d7) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x000632d7) popup_imed_adjust2_window_g

0xe6d8,	// (0x00062283) popup_imed_adjust2_window_t1_ParamLimits

0xe6f0,	// (0x0006229b) slider_imed_adjust_pane_ParamLimits

0xe704,	// (0x000622af) slider_imed_adjust_pane_g1_ParamLimits

0xe714,	// (0x000622bf) slider_imed_adjust_pane_g2_ParamLimits

0xe724,	// (0x000622cf) slider_imed_adjust_pane_g3_ParamLimits

0xe735,	// (0x000622e0) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x000632de) slider_imed_adjust_pane_g_ParamLimits

0x8911,	// (0x0005c4bc) aid_touch_area_cam4_ParamLimits

0x8911,	// (0x0005c4bc) aid_touch_area_cam4

0x8921,	// (0x0005c4cc) battery_pane_cp01

0x89a8,	// (0x0005c553) main_camera4_pane_g6_ParamLimits

0x89a8,	// (0x0005c553) main_camera4_pane_g6

0x89c6,	// (0x0005c571) main_camera4_pane_t2_ParamLimits

0x89c6,	// (0x0005c571) main_camera4_pane_t2

0x0001,

0xf835,	// (0x000633e0) main_camera4_pane_t_ParamLimits

0xf835,	// (0x000633e0) main_camera4_pane_t

0x8a4d,	// (0x0005c5f8) aid_touch_area_vid4_ParamLimits

0x8a4d,	// (0x0005c5f8) aid_touch_area_vid4

0x8a8d,	// (0x0005c638) main_video4_pane_g5_ParamLimits

0x8a8d,	// (0x0005c638) main_video4_pane_g5

0x8ab1,	// (0x0005c65c) vid4_progress_pane_ParamLimits

0x8ab1,	// (0x0005c65c) vid4_progress_pane

0xebf3,	// (0x0006279e) main_cset_slider_pane_g18_ParamLimits

0xebf3,	// (0x0006279e) main_cset_slider_pane_g18

0xee16,	// (0x000629c1) cell_cam4_burst_pane_g2_ParamLimits

0xee16,	// (0x000629c1) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x00063535) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x00063535) cell_cam4_burst_pane_g

0x9999,	// (0x0005d544) bg_cl_pane_ParamLimits

0x9999,	// (0x0005d544) bg_cl_pane

0x99a5,	// (0x0005d550) cl_header_pane_ParamLimits

0x99a5,	// (0x0005d550) cl_header_pane

0x99b1,	// (0x0005d55c) cl_listscroll_pane_ParamLimits

0x99b1,	// (0x0005d55c) cl_listscroll_pane

0xeff4,	// (0x00062b9f) bg_cl_pane_g1

0xeffc,	// (0x00062ba7) bg_cl_pane_g2

0xf004,	// (0x00062baf) bg_cl_pane_g3

0xf00c,	// (0x00062bb7) bg_cl_pane_g4

0xf014,	// (0x00062bbf) bg_cl_pane_g5

0xf01c,	// (0x00062bc7) bg_cl_pane_g6

0xf024,	// (0x00062bcf) bg_cl_pane_g7

0xf02c,	// (0x00062bd7) bg_cl_pane_g8

0xf034,	// (0x00062bdf) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x00063570) bg_cl_pane_g

0x99bd,	// (0x0005d568) aid_height_cl_leading_ParamLimits

0x99bd,	// (0x0005d568) aid_height_cl_leading

0x99c9,	// (0x0005d574) aid_height_cl_text_ParamLimits

0x99c9,	// (0x0005d574) aid_height_cl_text

0x2485,	// (0x00056030) bg_cl_header_pane_ParamLimits

0x2485,	// (0x00056030) bg_cl_header_pane

0x99e1,	// (0x0005d58c) cl_header_pane_g1_ParamLimits

0x99e1,	// (0x0005d58c) cl_header_pane_g1

0x99ee,	// (0x0005d599) cl_header_pane_t1_ParamLimits

0x99ee,	// (0x0005d599) cl_header_pane_t1

0xf03c,	// (0x00062be7) cl_list_pane

0xebc6,	// (0x00062771) hc_scroll_pane_cp01

0x2905,	// (0x000564b0) bg_cl_header_pane_g1

0xea9a,	// (0x00062645) bg_cl_header_pane_g2

0x2925,	// (0x000564d0) bg_cl_header_pane_g3

0xeaaa,	// (0x00062655) bg_cl_header_pane_g4

0xeaa2,	// (0x0006264d) bg_cl_header_pane_g5

0xed25,	// (0x000628d0) bg_cl_header_pane_g6

0xeac2,	// (0x0006266d) bg_cl_header_pane_g7

0xeaca,	// (0x00062675) bg_cl_header_pane_g8

0xeaba,	// (0x00062665) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x00063583) bg_cl_header_pane_g

0x9a00,	// (0x0005d5ab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9a00,	// (0x0005d5ab) hc_cl_list_double_graphic_heading_pane

0x9a11,	// (0x0005d5bc) hc_cl_list_single_graphic_pane_ParamLimits

0x9a11,	// (0x0005d5bc) hc_cl_list_single_graphic_pane

0x9a2a,	// (0x0005d5d5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9a2a,	// (0x0005d5d5) hc_cl_list_single_graphic_pane_g1

0x9a36,	// (0x0005d5e1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9a36,	// (0x0005d5e1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x00063596) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x00063596) hc_cl_list_single_graphic_pane_g

0x9a4a,	// (0x0005d5f5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9a4a,	// (0x0005d5f5) hc_cl_list_single_graphic_pane_t1

0x9a2a,	// (0x0005d5d5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9a2a,	// (0x0005d5d5) hc_cl_list_double_graphic_heading_pane_g1

0x9a5f,	// (0x0005d60a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9a5f,	// (0x0005d60a) hc_cl_list_double_graphic_heading_pane_g2

0x9a73,	// (0x0005d61e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9a73,	// (0x0005d61e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0006359b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0006359b) hc_cl_list_double_graphic_heading_pane_g

0x9a87,	// (0x0005d632) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9a87,	// (0x0005d632) hc_cl_list_double_graphic_heading_pane_t1

0x9a9c,	// (0x0005d647) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9a9c,	// (0x0005d647) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x000635a2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x000635a2) hc_cl_list_double_graphic_heading_pane_t

0x9ab9,	// (0x0005d664) vid4_progress_pane_g1

0x9ac9,	// (0x0005d674) vid4_progress_pane_g2

0x9ad9,	// (0x0005d684) vid4_progress_pane_g3

0x9aeb,	// (0x0005d696) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x000635a7) vid4_progress_pane_g

0x9b03,	// (0x0005d6ae) vid4_progress_pane_t1

0x9b19,	// (0x0005d6c4) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x000635b2) vid4_progress_pane_t

0x9b43,	// (0x0005d6ee) wait_bar_pane_cp07

0xdf63,	// (0x00061b0e) blid_firmament_pane_ParamLimits

0xdfa6,	// (0x00061b51) popup_blid_sat_info2_window_g1

0xdfca,	// (0x00061b75) popup_blid_sat_info2_window_t3

0xdfd8,	// (0x00061b83) popup_blid_sat_info2_window_t4

0xdfe6,	// (0x00061b91) popup_blid_sat_info2_window_t5

0xdff4,	// (0x00061b9f) popup_blid_sat_info2_window_t6

0xe004,	// (0x00061baf) popup_blid_sat_info2_window_t7

0xe012,	// (0x00061bbd) popup_blid_sat_info2_window_t8

0xe020,	// (0x00061bcb) popup_blid_sat_info2_window_t9

0xe02e,	// (0x00061bd9) popup_blid_sat_info2_window_t10

0xe0ef,	// (0x00061c9a) aid_firma_cardinal_ParamLimits

0xe103,	// (0x00061cae) blid_firmament_pane_t1_ParamLimits

0xe11a,	// (0x00061cc5) blid_firmament_pane_t2_ParamLimits

0xe131,	// (0x00061cdc) blid_firmament_pane_t3_ParamLimits

0xe148,	// (0x00061cf3) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x000631d0) blid_firmament_pane_t_ParamLimits

0xe15f,	// (0x00061d0a) blid_sat_info_pane_ParamLimits

0x70a5,	// (0x0005ac50) main_cam_set_pane_ParamLimits

0x7f83,	// (0x0005bb2e) aid_size_cell_colour_35_ParamLimits

0x7f9d,	// (0x0005bb48) aid_size_cell_colour_112_ParamLimits

0x7fb4,	// (0x0005bb5f) aid_size_cell_effect_ParamLimits

0x223f,	// (0x00055dea) bg_tb_trans_pane_cp02_ParamLimits

0x2c1c,	// (0x000567c7) heading_imed_pane_ParamLimits

0x7fce,	// (0x0005bb79) listscroll_imed_pane_ParamLimits

0xd45e,	// (0x00061009) popup_call2_audio_first_window_g5_ParamLimits

0xd45e,	// (0x00061009) popup_call2_audio_first_window_g5

0x85f7,	// (0x0005c1a2) aid_size_touch_image3_arrow_left_ParamLimits

0x85f7,	// (0x0005c1a2) aid_size_touch_image3_arrow_left

0x860d,	// (0x0005c1b8) aid_size_touch_image3_arrow_right_ParamLimits

0x860d,	// (0x0005c1b8) aid_size_touch_image3_arrow_right

0x9b2e,	// (0x0005d6d9) vid4_progress_pane_t3

0x814f,	// (0x0005bcfa) main_hwr_training_symbol_option_pane_ParamLimits

0x814f,	// (0x0005bcfa) main_hwr_training_symbol_option_pane

0xe8e7,	// (0x00062492) popup_hwr_training_preview_window_ParamLimits

0xe8e7,	// (0x00062492) popup_hwr_training_preview_window

0x81b0,	// (0x0005bd5b) hwr_training_navi_pane_g5_ParamLimits

0x81b0,	// (0x0005bd5b) hwr_training_navi_pane_g5

0xea88,	// (0x00062633) popup_char_count_window

0x44ee,	// (0x00058099) bg_popup_sub_pane_cp20_ParamLimits

0x94c6,	// (0x0005d071) list_vitu2_match_list_pane_ParamLimits

0x94d2,	// (0x0005d07d) vitu2_page_scroll_pane_ParamLimits

0x94d2,	// (0x0005d07d) vitu2_page_scroll_pane

0x034e,	// (0x00053ef9) list_single_hwr_training_symbol_option_pane_ParamLimits

0x034e,	// (0x00053ef9) list_single_hwr_training_symbol_option_pane

0x0361,	// (0x00053f0c) list_single_hwr_training_symbol_option_pane_g1

0x0369,	// (0x00053f14) list_single_hwr_training_symbol_option_pane_t1

0x0377,	// (0x00053f22) bg_button_pane_cp023

0x0380,	// (0x00053f2b) bg_button_pane_cp024

0x03b3,	// (0x00053f5e) vitu2_page_scroll_pane_g1

0x03bb,	// (0x00053f66) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x000635b9) vitu2_page_scroll_pane_g

0x03c3,	// (0x00053f6e) vitu2_page_scroll_pane_t1

0xded9,	// (0x00061a84) popup_char_count_window_g1

0x03d2,	// (0x00053f7d) popup_char_count_window_g2

0x03db,	// (0x00053f86) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x000635be) popup_char_count_window_g

0x03e4,	// (0x00053f8f) popup_char_count_window_t1

0x4508,	// (0x000580b3) main_vded2_pane

0xe69d,	// (0x00062248) aid_size_cell_imed_line

0xe6a7,	// (0x00062252) grid_imed_line_width_pane

0x8b1f,	// (0x0005c6ca) vid4_indicators_pane_g4

0x03f2,	// (0x00053f9d) cell_imed_line_width_pane_ParamLimits

0x03f2,	// (0x00053f9d) cell_imed_line_width_pane

0x0406,	// (0x00053fb1) cell_imed_line_width_pane_g1

0x040f,	// (0x00053fba) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x000635c5) cell_imed_line_width_pane_g

0x9b6a,	// (0x0005d715) main_vded2_pane_g1_ParamLimits

0x9b6a,	// (0x0005d715) main_vded2_pane_g1

0x9b77,	// (0x0005d722) main_vded2_pane_g2_ParamLimits

0x9b77,	// (0x0005d722) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x000635ca) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x000635ca) main_vded2_pane_g

0x9b85,	// (0x0005d730) vded2_slider_pane_ParamLimits

0x9b85,	// (0x0005d730) vded2_slider_pane

0x9b92,	// (0x0005d73d) aid_size_touch_vded2_end

0x9b9c,	// (0x0005d747) aid_size_touch_vded2_playhead

0x0417,	// (0x00053fc2) aid_size_touch_vded2_start

0x041f,	// (0x00053fca) vded2_slider_bg_pane

0x0428,	// (0x00053fd3) vded2_slider_pane_g1

0x0431,	// (0x00053fdc) vded2_slider_pane_g2

0x9ba4,	// (0x0005d74f) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x000635cf) vded2_slider_pane_g

0x0439,	// (0x00053fe4) vded2_slider_bg_pane_g1

0x0442,	// (0x00053fed) vded2_slider_bg_pane_g2

0x044b,	// (0x00053ff6) vded2_slider_bg_pane_g3

0x0002,

0xfa2b,	// (0x000635d6) vded2_slider_bg_pane_g

0x6946,	// (0x0005a4f1) aid_postcard_touch_down_pane_ParamLimits

0x6946,	// (0x0005a4f1) aid_postcard_touch_down_pane

0x6956,	// (0x0005a501) aid_postcard_touch_up_pane_ParamLimits

0x6956,	// (0x0005a501) aid_postcard_touch_up_pane

0x4508,	// (0x000580b3) main_blid2_pane

0x70ce,	// (0x0005ac79) popup_blid2_search_window

0x17ee,	// (0x00055399) blid2_gps_pane

0x17ee,	// (0x00055399) blid2_navig_pane

0x17ee,	// (0x00055399) blid2_search_pane

0x17ee,	// (0x00055399) blid2_tripm_pane

0x9bad,	// (0x0005d758) blid2_search_pane_g1_ParamLimits

0x9bad,	// (0x0005d758) blid2_search_pane_g1

0x9bbd,	// (0x0005d768) blid2_search_pane_t1_ParamLimits

0x9bbd,	// (0x0005d768) blid2_search_pane_t1

0x9bcf,	// (0x0005d77a) aid_size_cell_blid2_gps_ParamLimits

0x9bcf,	// (0x0005d77a) aid_size_cell_blid2_gps

0x9bdf,	// (0x0005d78a) blid2_gps_pane_g1_ParamLimits

0x9bdf,	// (0x0005d78a) blid2_gps_pane_g1

0x9beb,	// (0x0005d796) grid_blid2_satellite_pane_ParamLimits

0x9beb,	// (0x0005d796) grid_blid2_satellite_pane

0x9bfb,	// (0x0005d7a6) blid2_navig_pane_g1_ParamLimits

0x9bfb,	// (0x0005d7a6) blid2_navig_pane_g1

0x9c07,	// (0x0005d7b2) blid2_navig_pane_t1_ParamLimits

0x9c07,	// (0x0005d7b2) blid2_navig_pane_t1

0x9c19,	// (0x0005d7c4) blid2_navig_pane_t2_ParamLimits

0x9c19,	// (0x0005d7c4) blid2_navig_pane_t2

0x0001,

0xfa32,	// (0x000635dd) blid2_navig_pane_t_ParamLimits

0xfa32,	// (0x000635dd) blid2_navig_pane_t

0x9c2b,	// (0x0005d7d6) blid2_navig_ring_pane_ParamLimits

0x9c2b,	// (0x0005d7d6) blid2_navig_ring_pane

0x9c3b,	// (0x0005d7e6) blid2_speed_pane_ParamLimits

0x9c3b,	// (0x0005d7e6) blid2_speed_pane

0x9c47,	// (0x0005d7f2) blid2_tripm_pane_g1_ParamLimits

0x9c47,	// (0x0005d7f2) blid2_tripm_pane_g1

0x9c57,	// (0x0005d802) blid2_tripm_pane_g2_ParamLimits

0x9c57,	// (0x0005d802) blid2_tripm_pane_g2

0x9c63,	// (0x0005d80e) blid2_tripm_pane_g3_ParamLimits

0x9c63,	// (0x0005d80e) blid2_tripm_pane_g3

0x9c6f,	// (0x0005d81a) blid2_tripm_pane_g4_ParamLimits

0x9c6f,	// (0x0005d81a) blid2_tripm_pane_g4

0x9c7b,	// (0x0005d826) blid2_tripm_pane_g5_ParamLimits

0x9c7b,	// (0x0005d826) blid2_tripm_pane_g5

0x0005,

0xfa37,	// (0x000635e2) blid2_tripm_pane_g_ParamLimits

0xfa37,	// (0x000635e2) blid2_tripm_pane_g

0x9c97,	// (0x0005d842) blid2_tripm_pane_t1_ParamLimits

0x9c97,	// (0x0005d842) blid2_tripm_pane_t1

0x9cab,	// (0x0005d856) blid2_tripm_pane_t2_ParamLimits

0x9cab,	// (0x0005d856) blid2_tripm_pane_t2

0x9cbd,	// (0x0005d868) blid2_tripm_pane_t3_ParamLimits

0x9cbd,	// (0x0005d868) blid2_tripm_pane_t3

0x0003,

0xfa44,	// (0x000635ef) blid2_tripm_pane_t_ParamLimits

0xfa44,	// (0x000635ef) blid2_tripm_pane_t

0x9cef,	// (0x0005d89a) cell_blid2_satellite_pane_ParamLimits

0x9cef,	// (0x0005d89a) cell_blid2_satellite_pane

0x9d09,	// (0x0005d8b4) cell_blid2_satellite_pane_g1

0x0454,	// (0x00053fff) cell_blid2_satellite_pane_t1

0x2714,	// (0x000562bf) blid2_speed_pane_g1

0x0462,	// (0x0005400d) blid2_speed_pane_t1

0x0470,	// (0x0005401b) blid2_speed_pane_t2

0x0001,

0xfa4d,	// (0x000635f8) blid2_speed_pane_t

0x2714,	// (0x000562bf) blid2_navig_ring_pane_g1

0x9d12,	// (0x0005d8bd) blid2_navig_ring_pane_g2

0x9d1a,	// (0x0005d8c5) blid2_navig_ring_pane_g3

0x9d22,	// (0x0005d8cd) blid2_navig_ring_pane_g4

0x9d2a,	// (0x0005d8d5) blid2_navig_ring_pane_g5

0x0004,

0xfa52,	// (0x000635fd) blid2_navig_ring_pane_g

0x17ee,	// (0x00055399) bg_popup_window_pane_cp011

0x047e,	// (0x00054029) popup_blid2_search_window_g1

0x0486,	// (0x00054031) popup_blid2_search_window_t1

0x0494,	// (0x0005403f) popup_blid2_search_window_t2

0x0001,

0xfa5d,	// (0x00063608) popup_blid2_search_window_t

0x2814,	// (0x000563bf) main_browser_pane_g1

0x2505,	// (0x000560b0) main_browser_pane_ParamLimits

0x70a5,	// (0x0005ac50) bg_button_pane_cp011_ParamLimits

0x8dc4,	// (0x0005c96f) cell_vitu2_function_pane_g1_ParamLimits

0x322b,	// (0x00056dd6) bg_popup_sub_pane_cp22_ParamLimits

0x965c,	// (0x0005d207) input_focus_pane_cp08_ParamLimits

0x9677,	// (0x0005d222) popup_vitu2_query_button_pane_ParamLimits

0x9677,	// (0x0005d222) popup_vitu2_query_button_pane

0x9686,	// (0x0005d231) popup_vitu2_query_input_button_pane

0xed60,	// (0x0006290b) popup_vitu2_query_window_g1_ParamLimits

0x9690,	// (0x0005d23b) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x00063509) popup_vitu2_query_window_g_ParamLimits

0x17ee,	// (0x00055399) bg_button_pane_cp026

0x9d32,	// (0x0005d8dd) popup_vitu2_query_input_button_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp025

0x04a2,	// (0x0005404d) popup_vitu2_query_button_pane_t1

0x75a2,	// (0x0005b14d) main_mp3_pane_t6

0x75b2,	// (0x0005b15d) popup_slider_window_cp01

0x89fc,	// (0x0005c5a7) cam4_battery_pane

0x8adc,	// (0x0005c687) cam4_battery_pane_cp02

0x9ab1,	// (0x0005d65c) cam4_battery_pane_cp01

0x9ab1,	// (0x0005d65c) cam4_battery_pane_cp03

0x04b0,	// (0x0005405b) cam4_battery_pane_g1

0x2714,	// (0x000562bf) cam4_battery_pane_g2

0x0001,

0xfa62,	// (0x0006360d) cam4_battery_pane_g

0xe03c,	// (0x00061be7) popup_blid_sat_info2_window_t11

0x2f87,	// (0x00056b32) aid_size_touch_mv_arrow_left_ParamLimits

0x2fb0,	// (0x00056b5b) aid_size_touch_mv_arrow_right_ParamLimits

0x300e,	// (0x00056bb9) navi_pane_g1_ParamLimits

0x301a,	// (0x00056bc5) navi_pane_g2_ParamLimits

0x3048,	// (0x00056bf3) navi_pane_g3_ParamLimits

0xf339,	// (0x00062ee4) navi_pane_g_ParamLimits

0x6533,	// (0x0005a0de) navi_pane_mv_t1_ParamLimits

0x7fda,	// (0x0005bb85) grid_imed_effect_pane_ParamLimits

0x504e,	// (0x00058bf9) aid_placing_vt_slider_lsc

0x2763,	// (0x0005630e) aid_placing_vt_slider_prt

0x223f,	// (0x00055dea) bg_tb_trans_pane_cp01_ParamLimits

0xe2bc,	// (0x00061e67) popup_image_details_window_g1_ParamLimits

0xe2cf,	// (0x00061e7a) popup_image_details_window_g2_ParamLimits

0xe2e4,	// (0x00061e8f) popup_image_details_window_g3_ParamLimits

0xe2e4,	// (0x00061e8f) popup_image_details_window_g3

0xf665,	// (0x00063210) popup_image_details_window_g_ParamLimits

0xe2f8,	// (0x00061ea3) popup_image_details_window_t1_ParamLimits

0xe30a,	// (0x00061eb5) popup_image_details_window_t2_ParamLimits

0xe323,	// (0x00061ece) popup_image_details_window_t3_ParamLimits

0xe337,	// (0x00061ee2) popup_image_details_window_t4_ParamLimits

0xe352,	// (0x00061efd) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x00063217) popup_image_details_window_t_ParamLimits

0x99d5,	// (0x0005d580) cl_header_name_pane_ParamLimits

0x99d5,	// (0x0005d580) cl_header_name_pane

0x9d3a,	// (0x0005d8e5) cl_header_name_pane_t1_ParamLimits

0x9d3a,	// (0x0005d8e5) cl_header_name_pane_t1

0x9d51,	// (0x0005d8fc) cl_header_name_pane_t2_ParamLimits

0x9d51,	// (0x0005d8fc) cl_header_name_pane_t2

0x9d7b,	// (0x0005d926) cl_header_name_pane_t3_ParamLimits

0x9d7b,	// (0x0005d926) cl_header_name_pane_t3

0x0002,

0xfa67,	// (0x00063612) cl_header_name_pane_t_ParamLimits

0xfa67,	// (0x00063612) cl_header_name_pane_t

0x30d7,	// (0x00056c82) navi_pane_mv_g2_ParamLimits

0xea53,	// (0x000625fe) field_vitu2_entry_pane_g1_ParamLimits

0xea5f,	// (0x0006260a) field_vitu2_entry_pane_g2_ParamLimits

0x31f5,	// (0x00056da0) field_vitu2_entry_pane_g3_ParamLimits

0x31f5,	// (0x00056da0) field_vitu2_entry_pane_g3

0xf867,	// (0x00063412) field_vitu2_entry_pane_g_ParamLimits

0x8d52,	// (0x0005c8fd) cell_vitu2_itu_pane_g1_ParamLimits

0x8d6a,	// (0x0005c915) cell_vitu2_itu_pane_g2_ParamLimits

0x8d6a,	// (0x0005c915) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0006341e) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0006341e) cell_vitu2_itu_pane_g

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp05_ParamLimits

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp05

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp03

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp04

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp10_ParamLimits

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp10

0x9977,	// (0x0005d522) bg_vkb2_func_pane_cp08

0x9644,	// (0x0005d1ef) bg_vkb2_func_pane_cp06

0x995a,	// (0x0005d505) bg_vkb2_func_pane_cp07

0x0389,	// (0x00053f34) bg_vkb2_func_pane_cp11_ParamLimits

0x0389,	// (0x00053f34) bg_vkb2_func_pane_cp11

0x039e,	// (0x00053f49) bg_vkb2_func_pane_cp12_ParamLimits

0x039e,	// (0x00053f49) bg_vkb2_func_pane_cp12

0x17ee,	// (0x00055399) bg_vkb2_func_pane_cp09

0xea9a,	// (0x00062645) bg_vkb2_func_pane_g1

0x2925,	// (0x000564d0) bg_vkb2_func_pane_g2

0xeaa2,	// (0x0006264d) bg_vkb2_func_pane_g3

0xeaaa,	// (0x00062655) bg_vkb2_func_pane_g4

0xed25,	// (0x000628d0) bg_vkb2_func_pane_g5

0xeac2,	// (0x0006266d) bg_vkb2_func_pane_g6

0xeaca,	// (0x00062675) bg_vkb2_func_pane_g7

0xeaba,	// (0x00062665) bg_vkb2_func_pane_g8

0x2905,	// (0x000564b0) bg_vkb2_func_pane_g9

0x0008,

0xfa6e,	// (0x00063619) bg_vkb2_func_pane_g

0x9c89,	// (0x0005d834) blid2_tripm_pane_g6_ParamLimits

0x9c89,	// (0x0005d834) blid2_tripm_pane_g6

0xe9a5,	// (0x00062550) mp4_progress_pane_g1

0x9ce3,	// (0x0005d88e) blid2_tripm_values_pane_ParamLimits

0x9ce3,	// (0x0005d88e) blid2_tripm_values_pane

0x9da0,	// (0x0005d94b) blid2_tripm_values_pane_t1

0x9dae,	// (0x0005d959) blid2_tripm_values_pane_t2

0x9dbc,	// (0x0005d967) blid2_tripm_values_pane_t3

0x9dca,	// (0x0005d975) blid2_tripm_values_pane_t4

0x9dd8,	// (0x0005d983) blid2_tripm_values_pane_t5

0x9de6,	// (0x0005d991) blid2_tripm_values_pane_t6

0x9df4,	// (0x0005d99f) blid2_tripm_values_pane_t7

0x9e02,	// (0x0005d9ad) blid2_tripm_values_pane_t8

0x9e10,	// (0x0005d9bb) blid2_tripm_values_pane_t9

0x0008,

0xfa81,	// (0x0006362c) blid2_tripm_values_pane_t

0x508e,	// (0x00058c39) call_video_pane_t1_ParamLimits

0x50af,	// (0x00058c5a) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x00062d8d) call_video_pane_t_ParamLimits

0x6832,	// (0x0005a3dd) msg_header_pane_g1_ParamLimits

0x32e0,	// (0x00056e8b) msg_header_pane_g2_ParamLimits

0x32e0,	// (0x00056e8b) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x00062f87) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x00062f87) msg_header_pane_g

0x2505,	// (0x000560b0) main_clock2_pane_ParamLimits

0x7d54,	// (0x0005b8ff) grid_clock2_toolbar_pane_ParamLimits

0x7d54,	// (0x0005b8ff) grid_clock2_toolbar_pane

0x7d54,	// (0x0005b8ff) listscroll_clock2_pane_ParamLimits

0x7d54,	// (0x0005b8ff) listscroll_clock2_pane

0x7e04,	// (0x0005b9af) main_clock2_pane_t3_ParamLimits

0x7e04,	// (0x0005b9af) main_clock2_pane_t3

0x7e16,	// (0x0005b9c1) main_clock2_pane_t4_ParamLimits

0x7e16,	// (0x0005b9c1) main_clock2_pane_t4

0x04ba,	// (0x00054065) cell_clock2_toolbar_pane

0x04c2,	// (0x0005406d) cell_clock2_toolbar_pane_cp01

0x04c2,	// (0x0005406d) cell_clock2_toolbar_pane_cp02

0x04ca,	// (0x00054075) cell_clock2_toolbar_pane_cp03

0x04d2,	// (0x0005407d) list_clock2_pane

0x2efd,	// (0x00056aa8) scroll_pane_cp10

0x04da,	// (0x00054085) list_single_clock2_pane_ParamLimits

0x04da,	// (0x00054085) list_single_clock2_pane

0x26de,	// (0x00056289) list_highlight_pane_cp08

0x04e7,	// (0x00054092) list_single_clock2_pane_t1

0x04f5,	// (0x000540a0) list_single_clock2_pane_t2

0x0001,

0xfa94,	// (0x0006363f) list_single_clock2_pane_t

0x17ee,	// (0x00055399) bg_button_pane_cp10

0x0503,	// (0x000540ae) cell_clock2_toolbar_pane_g1

0x68b4,	// (0x0005a45f) aid_main_viewer_pane_g1_ParamLimits

0x68b4,	// (0x0005a45f) aid_main_viewer_pane_g1

0x68c0,	// (0x0005a46b) aid_main_viewer_pane_g2_ParamLimits

0x68c0,	// (0x0005a46b) aid_main_viewer_pane_g2

0x68cc,	// (0x0005a477) aid_main_viewer_pane_g3_ParamLimits

0x68cc,	// (0x0005a477) aid_main_viewer_pane_g3

0x68dd,	// (0x0005a488) aid_main_viewer_pane_g4_ParamLimits

0x68dd,	// (0x0005a488) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x00062f98) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x00062f98) aid_main_viewer_pane_g

0x7098,	// (0x0005ac43) main_calc_pane_ParamLimits

0x70b3,	// (0x0005ac5e) main_dialer2_pane_ParamLimits

0x4508,	// (0x000580b3) main_cam6_pane

0x4508,	// (0x000580b3) main_vid6_pane

0x7d60,	// (0x0005b90b) listscroll_gen_pane_cp06_ParamLimits

0x7d60,	// (0x0005b90b) listscroll_gen_pane_cp06

0x7e28,	// (0x0005b9d3) main_clock2_pane_t5_ParamLimits

0x7e28,	// (0x0005b9d3) main_clock2_pane_t5

0x7e75,	// (0x0005ba20) aid_call2_pane_cp10_ParamLimits

0x7e87,	// (0x0005ba32) aid_call_pane_cp10_ParamLimits

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7e99,	// (0x0005ba44) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7e99,	// (0x0005ba44) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2f7b,	// (0x00056b26) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x000632cc) popup_clock_analogue_window_cp10_g_ParamLimits

0x7eaf,	// (0x0005ba5a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x85a4,	// (0x0005c14f) cell_dialer2_keypad_pane_g2_ParamLimits

0x85a4,	// (0x0005c14f) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x000633b1) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x000633b1) cell_dialer2_keypad_pane_g

0x85c0,	// (0x0005c16b) cell_dialer2_keypad_pane_t1

0x9082,	// (0x0005cc2d) main_cset_text2_pane_ParamLimits

0x9082,	// (0x0005cc2d) main_cset_text2_pane

0xef4c,	// (0x00062af7) area_vitu2_query_pane_g1_ParamLimits

0x98f9,	// (0x0005d4a4) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0006355c) area_vitu2_query_pane_g_ParamLimits

0xefd0,	// (0x00062b7b) area_vitu2_query_pane_t7_ParamLimits

0xefd0,	// (0x00062b7b) area_vitu2_query_pane_t7

0x9644,	// (0x0005d1ef) bg_button_pane_cp018_ParamLimits

0x995a,	// (0x0005d505) bg_button_pane_cp021_ParamLimits

0x9966,	// (0x0005d511) bg_button_pane_cp022_ParamLimits

0x9977,	// (0x0005d522) bg_vkb2_func_pane_cp08_ParamLimits

0x9644,	// (0x0005d1ef) bg_vkb2_func_pane_cp06_ParamLimits

0x995a,	// (0x0005d505) bg_vkb2_func_pane_cp07_ParamLimits

0x9989,	// (0x0005d534) input_focus_pane_cp09_ParamLimits

0x9e1e,	// (0x0005d9c9) cam6_autofocus_pane_ParamLimits

0x9e1e,	// (0x0005d9c9) cam6_autofocus_pane

0x9e3a,	// (0x0005d9e5) cam6_image_uncrop_pane_ParamLimits

0x9e3a,	// (0x0005d9e5) cam6_image_uncrop_pane

0x9e73,	// (0x0005da1e) cam6_indi_pane_ParamLimits

0x9e73,	// (0x0005da1e) cam6_indi_pane

0x9e8d,	// (0x0005da38) cam6_mode_pane_ParamLimits

0x9e8d,	// (0x0005da38) cam6_mode_pane

0x9ea1,	// (0x0005da4c) cam6_timer_pane_ParamLimits

0x9ea1,	// (0x0005da4c) cam6_timer_pane

0x9eb5,	// (0x0005da60) cam6_zoom_pane_ParamLimits

0x9eb5,	// (0x0005da60) cam6_zoom_pane

0x9ed0,	// (0x0005da7b) cam6_mode_pane_g1_ParamLimits

0x9ed0,	// (0x0005da7b) cam6_mode_pane_g1

0x9edc,	// (0x0005da87) cam6_mode_pane_g2_ParamLimits

0x9edc,	// (0x0005da87) cam6_mode_pane_g2

0x9ee8,	// (0x0005da93) cam6_mode_pane_g3_ParamLimits

0x9ee8,	// (0x0005da93) cam6_mode_pane_g3

0x9ef4,	// (0x0005da9f) cam6_mode_pane_g4_ParamLimits

0x9ef4,	// (0x0005da9f) cam6_mode_pane_g4

0x0003,

0xfa99,	// (0x00063644) cam6_mode_pane_g_ParamLimits

0xfa99,	// (0x00063644) cam6_mode_pane_g

0xe831,	// (0x000623dc) bg_tb_trans_pane_cp08_ParamLimits

0xe831,	// (0x000623dc) bg_tb_trans_pane_cp08

0x050b,	// (0x000540b6) cam6_battery_pane_ParamLimits

0x050b,	// (0x000540b6) cam6_battery_pane

0x0521,	// (0x000540cc) cam6_indi_pane_g1_ParamLimits

0x0521,	// (0x000540cc) cam6_indi_pane_g1

0x0533,	// (0x000540de) cam6_indi_pane_g2_ParamLimits

0x0533,	// (0x000540de) cam6_indi_pane_g2

0x0545,	// (0x000540f0) cam6_indi_pane_g3_ParamLimits

0x0545,	// (0x000540f0) cam6_indi_pane_g3

0x0002,

0xfaa2,	// (0x0006364d) cam6_indi_pane_g_ParamLimits

0xfaa2,	// (0x0006364d) cam6_indi_pane_g

0x0557,	// (0x00054102) cam6_indi_pane_t1_ParamLimits

0x0557,	// (0x00054102) cam6_indi_pane_t1

0x8b5c,	// (0x0005c707) cam6_autofocus_pane_g1

0x8b54,	// (0x0005c6ff) cam6_autofocus_pane_g2

0x8b6c,	// (0x0005c717) cam6_autofocus_pane_g3

0x8b64,	// (0x0005c70f) cam6_autofocus_pane_g4

0x0003,

0xfaa9,	// (0x00063654) cam6_autofocus_pane_g

0x057d,	// (0x00054128) cam6_timer_pane_g1

0x0585,	// (0x00054130) cam6_timer_pane_t1

0x0593,	// (0x0005413e) cam6_zoom_cont_pane

0x059b,	// (0x00054146) cam6_zoom_pane_g1

0x05a4,	// (0x0005414f) cam6_zoom_pane_g2

0x9f00,	// (0x0005daab) cam6_zoom_pane_g3

0x0002,

0xfab2,	// (0x0006365d) cam6_zoom_pane_g

0x2714,	// (0x000562bf) cam6_battery_pane_g1

0x2714,	// (0x000562bf) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x00062f48) cam6_battery_pane_g

0x059b,	// (0x00054146) cam6_zoom_cont_pane_g1

0x05a4,	// (0x0005414f) cam6_zoom_cont_pane_g2

0x05ad,	// (0x00054158) cam6_zoom_cont_pane_g3

0x0002,

0xfab9,	// (0x00063664) cam6_zoom_cont_pane_g

0x9f1e,	// (0x0005dac9) cam6_mode_pane_cp_ParamLimits

0x9f1e,	// (0x0005dac9) cam6_mode_pane_cp

0x9f32,	// (0x0005dadd) cam6_zoom_pane_cp_ParamLimits

0x9f32,	// (0x0005dadd) cam6_zoom_pane_cp

0x9f4a,	// (0x0005daf5) vid6_image_uncrop_cif_pane_ParamLimits

0x9f4a,	// (0x0005daf5) vid6_image_uncrop_cif_pane

0x9f76,	// (0x0005db21) vid6_image_uncrop_nhd_pane_ParamLimits

0x9f76,	// (0x0005db21) vid6_image_uncrop_nhd_pane

0x9f93,	// (0x0005db3e) vid6_image_uncrop_vga_pane_ParamLimits

0x9f93,	// (0x0005db3e) vid6_image_uncrop_vga_pane

0x9fb2,	// (0x0005db5d) vid6_image_uncrop_wvga_pane_ParamLimits

0x9fb2,	// (0x0005db5d) vid6_image_uncrop_wvga_pane

0x9fcf,	// (0x0005db7a) vid6_indi_pane_ParamLimits

0x9fcf,	// (0x0005db7a) vid6_indi_pane

0xe831,	// (0x000623dc) bg_tb_trans_pane_cp09_ParamLimits

0xe831,	// (0x000623dc) bg_tb_trans_pane_cp09

0x05c5,	// (0x00054170) cam6_battery_pane_cp_ParamLimits

0x05c5,	// (0x00054170) cam6_battery_pane_cp

0x05d1,	// (0x0005417c) vid6_indi_pane_g1_ParamLimits

0x05d1,	// (0x0005417c) vid6_indi_pane_g1

0x05e3,	// (0x0005418e) vid6_indi_pane_g2_ParamLimits

0x05e3,	// (0x0005418e) vid6_indi_pane_g2

0x05f5,	// (0x000541a0) vid6_indi_pane_g3_ParamLimits

0x05f5,	// (0x000541a0) vid6_indi_pane_g3

0x060a,	// (0x000541b5) vid6_indi_pane_g4_ParamLimits

0x060a,	// (0x000541b5) vid6_indi_pane_g4

0x061f,	// (0x000541ca) vid6_indi_pane_g5_ParamLimits

0x061f,	// (0x000541ca) vid6_indi_pane_g5

0x0004,

0xfac0,	// (0x0006366b) vid6_indi_pane_g_ParamLimits

0xfac0,	// (0x0006366b) vid6_indi_pane_g

0x0639,	// (0x000541e4) vid6_indi_pane_t1_ParamLimits

0x0639,	// (0x000541e4) vid6_indi_pane_t1

0x064f,	// (0x000541fa) vid6_indi_pane_t2_ParamLimits

0x064f,	// (0x000541fa) vid6_indi_pane_t2

0x0677,	// (0x00054222) vid6_indi_pane_t3_ParamLimits

0x0677,	// (0x00054222) vid6_indi_pane_t3

0x069f,	// (0x0005424a) vid6_indi_pane_t4_ParamLimits

0x069f,	// (0x0005424a) vid6_indi_pane_t4

0x0003,

0xfacb,	// (0x00063676) vid6_indi_pane_t_ParamLimits

0xfacb,	// (0x00063676) vid6_indi_pane_t

0x06c3,	// (0x0005426e) wait_bar_pane_cp08

0x9ff4,	// (0x0005db9f) main_cset_text2_pane_t1_ParamLimits

0x9ff4,	// (0x0005db9f) main_cset_text2_pane_t1

0x9f09,	// (0x0005dab4) listscroll_gen_pane_cp06_t1_ParamLimits

0x9f09,	// (0x0005dab4) listscroll_gen_pane_cp06_t1

0x4508,	// (0x000580b3) main_cam6_set_pane

0x0f79,	// (0x00054b24) bg_tb_trans_pane_cp06_ParamLimits

0x8a04,	// (0x0005c5af) cam4_indicators_pane_g1_ParamLimits

0x8a15,	// (0x0005c5c0) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x000633ee) cam4_indicators_pane_g_ParamLimits

0x8a33,	// (0x0005c5de) cam4_indicators_pane_t1_ParamLimits

0x70a5,	// (0x0005ac50) bg_tb_trans_pane_cp07_ParamLimits

0x8ae6,	// (0x0005c691) vid4_indicators_pane_g1_ParamLimits

0x8afa,	// (0x0005c6a5) vid4_indicators_pane_g2_ParamLimits

0x8b0e,	// (0x0005c6b9) vid4_indicators_pane_g3_ParamLimits

0x8b1f,	// (0x0005c6ca) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x00063400) vid4_indicators_pane_g_ParamLimits

0x8b3d,	// (0x0005c6e8) vid4_indicators_pane_t1_ParamLimits

0x9ab9,	// (0x0005d664) vid4_progress_pane_g1_ParamLimits

0x9ac9,	// (0x0005d674) vid4_progress_pane_g2_ParamLimits

0x9ad9,	// (0x0005d684) vid4_progress_pane_g3_ParamLimits

0x9aeb,	// (0x0005d696) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x000635a7) vid4_progress_pane_g_ParamLimits

0x9b03,	// (0x0005d6ae) vid4_progress_pane_t1_ParamLimits

0x9b19,	// (0x0005d6c4) vid4_progress_pane_t2_ParamLimits

0x9b2e,	// (0x0005d6d9) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x000635b2) vid4_progress_pane_t_ParamLimits

0x9b43,	// (0x0005d6ee) wait_bar_pane_cp07_ParamLimits

0xa027,	// (0x0005dbd2) main_cam6_set_pane_g2_ParamLimits

0xa027,	// (0x0005dbd2) main_cam6_set_pane_g2

0xa033,	// (0x0005dbde) main_cset6_listscroll_pane_ParamLimits

0xa033,	// (0x0005dbde) main_cset6_listscroll_pane

0xa05e,	// (0x0005dc09) main_cset6_slider_pane_ParamLimits

0xa05e,	// (0x0005dc09) main_cset6_slider_pane

0xa06a,	// (0x0005dc15) main_cset6_text2_pane_ParamLimits

0xa06a,	// (0x0005dc15) main_cset6_text2_pane

0x06d2,	// (0x0005427d) main_cset6_text_pane

0x06da,	// (0x00054285) main_cset_list_pane_copy1_ParamLimits

0x06da,	// (0x00054285) main_cset_list_pane_copy1

0x06ea,	// (0x00054295) scroll_pane_cp028_copy1

0xa07d,	// (0x0005dc28) cset_list_set_pane_copy1

0xa090,	// (0x0005dc3b) aid_position_infowindow_above_copy1

0xa098,	// (0x0005dc43) aid_position_infowindow_below_copy1

0xa0a0,	// (0x0005dc4b) cset_list_set_pane_g1_copy1

0xecb5,	// (0x00062860) cset_list_set_pane_g3_copy1_ParamLimits

0xecb5,	// (0x00062860) cset_list_set_pane_g3_copy1

0xecc4,	// (0x0006286f) cset_list_set_pane_t1_copy1_ParamLimits

0xecc4,	// (0x0006286f) cset_list_set_pane_t1_copy1

0x223f,	// (0x00055dea) list_highlight_pane_cp021_copy1_ParamLimits

0x223f,	// (0x00055dea) list_highlight_pane_cp021_copy1

0x06f3,	// (0x0005429e) cset6_slider_pane_ParamLimits

0x06f3,	// (0x0005429e) cset6_slider_pane

0x071f,	// (0x000542ca) main_cset6_slider_pane_g1_ParamLimits

0x071f,	// (0x000542ca) main_cset6_slider_pane_g1

0xa0a8,	// (0x0005dc53) main_cset6_slider_pane_g2_ParamLimits

0xa0a8,	// (0x0005dc53) main_cset6_slider_pane_g2

0x0747,	// (0x000542f2) main_cset6_slider_pane_g3_ParamLimits

0x0747,	// (0x000542f2) main_cset6_slider_pane_g3

0xa0d0,	// (0x0005dc7b) main_cset6_slider_pane_g4_ParamLimits

0xa0d0,	// (0x0005dc7b) main_cset6_slider_pane_g4

0xa0dc,	// (0x0005dc87) main_cset6_slider_pane_g5_ParamLimits

0xa0dc,	// (0x0005dc87) main_cset6_slider_pane_g5

0xebdb,	// (0x00062786) main_cset6_slider_pane_g7_ParamLimits

0xebdb,	// (0x00062786) main_cset6_slider_pane_g7

0xebe7,	// (0x00062792) main_cset6_slider_pane_g8_ParamLimits

0xebe7,	// (0x00062792) main_cset6_slider_pane_g8

0xa0ea,	// (0x0005dc95) main_cset6_slider_pane_g9_ParamLimits

0xa0ea,	// (0x0005dc95) main_cset6_slider_pane_g9

0xa0f6,	// (0x0005dca1) main_cset6_slider_pane_g10_ParamLimits

0xa0f6,	// (0x0005dca1) main_cset6_slider_pane_g10

0xa102,	// (0x0005dcad) main_cset6_slider_pane_g11_ParamLimits

0xa102,	// (0x0005dcad) main_cset6_slider_pane_g11

0xa10e,	// (0x0005dcb9) main_cset6_slider_pane_g12_ParamLimits

0xa10e,	// (0x0005dcb9) main_cset6_slider_pane_g12

0xa11a,	// (0x0005dcc5) main_cset6_slider_pane_g13_ParamLimits

0xa11a,	// (0x0005dcc5) main_cset6_slider_pane_g13

0xa126,	// (0x0005dcd1) main_cset6_slider_pane_g14_ParamLimits

0xa126,	// (0x0005dcd1) main_cset6_slider_pane_g14

0xa132,	// (0x0005dcdd) main_cset6_slider_pane_g15_ParamLimits

0xa132,	// (0x0005dcdd) main_cset6_slider_pane_g15

0xa14a,	// (0x0005dcf5) main_cset6_slider_pane_g16_ParamLimits

0xa14a,	// (0x0005dcf5) main_cset6_slider_pane_g16

0xa158,	// (0x0005dd03) main_cset6_slider_pane_g17_ParamLimits

0xa158,	// (0x0005dd03) main_cset6_slider_pane_g17

0x0011,

0xfad4,	// (0x0006367f) main_cset6_slider_pane_g_ParamLimits

0xfad4,	// (0x0006367f) main_cset6_slider_pane_g

0x0753,	// (0x000542fe) main_cset6_slider_pane_t1_ParamLimits

0x0753,	// (0x000542fe) main_cset6_slider_pane_t1

0xa17e,	// (0x0005dd29) main_cset6_slider_pane_t2_ParamLimits

0xa17e,	// (0x0005dd29) main_cset6_slider_pane_t2

0xa1a9,	// (0x0005dd54) main_cset6_slider_pane_t3_ParamLimits

0xa1a9,	// (0x0005dd54) main_cset6_slider_pane_t3

0xa1d4,	// (0x0005dd7f) main_cset6_slider_pane_t4_ParamLimits

0xa1d4,	// (0x0005dd7f) main_cset6_slider_pane_t4

0xa1ff,	// (0x0005ddaa) main_cset6_slider_pane_t5_ParamLimits

0xa1ff,	// (0x0005ddaa) main_cset6_slider_pane_t5

0x0794,	// (0x0005433f) main_cset6_slider_pane_t7_ParamLimits

0x0794,	// (0x0005433f) main_cset6_slider_pane_t7

0xa22c,	// (0x0005ddd7) main_cset6_slider_pane_t8_ParamLimits

0xa22c,	// (0x0005ddd7) main_cset6_slider_pane_t8

0xa250,	// (0x0005ddfb) main_cset6_slider_pane_t9_ParamLimits

0xa250,	// (0x0005ddfb) main_cset6_slider_pane_t9

0xa274,	// (0x0005de1f) main_cset6_slider_pane_t10_ParamLimits

0xa274,	// (0x0005de1f) main_cset6_slider_pane_t10

0xa298,	// (0x0005de43) main_cset6_slider_pane_t11_ParamLimits

0xa298,	// (0x0005de43) main_cset6_slider_pane_t11

0x07ca,	// (0x00054375) main_cset6_slider_pane_t14_ParamLimits

0x07ca,	// (0x00054375) main_cset6_slider_pane_t14

0x0803,	// (0x000543ae) main_cset6_slider_pane_t15_ParamLimits

0x0803,	// (0x000543ae) main_cset6_slider_pane_t15

0x000b,

0xfaf9,	// (0x000636a4) main_cset6_slider_pane_t_ParamLimits

0xfaf9,	// (0x000636a4) main_cset6_slider_pane_t

0xecd9,	// (0x00062884) cset_slider_pane_g1_copy1

0xece2,	// (0x0006288d) cset_slider_pane_g2_copy1

0xeceb,	// (0x00062896) cset_slider_pane_g3_copy1

0x17ee,	// (0x00055399) bg_popup_sub_pane_cp011_copy1

0x083c,	// (0x000543e7) main_cset_text_pane_g1_copy1

0xed74,	// (0x0006291f) main_cset_text_pane_t1_copy1

0xed82,	// (0x0006292d) main_cset_text_pane_t2_copy1

0xed90,	// (0x0006293b) main_cset_text_pane_t3_copy1

0xed9e,	// (0x00062949) main_cset_text_pane_t4_copy1

0xedac,	// (0x00062957) main_cset_text_pane_t5_copy1

0x0844,	// (0x000543ef) main_cset_text_pane_t6_copy1

0x0852,	// (0x000543fd) main_cset_text_pane_t7_copy1

0xa2d9,	// (0x0005de84) main_cset_text2_pane_t1_copy1

0x70a5,	// (0x0005ac50) main_ncimui_pane

0x7104,	// (0x0005acaf) popup_query_ncimui_window_ParamLimits

0x7104,	// (0x0005acaf) popup_query_ncimui_window

0xe45b,	// (0x00062006) field_cale_ev2_pane_g4_ParamLimits

0xe45b,	// (0x00062006) field_cale_ev2_pane_g4

0x8284,	// (0x0005be2f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8284,	// (0x0005be2f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x00063388) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x00063388) cell_video_dialer_keypad_pane_g

0x829c,	// (0x0005be47) cell_video_dialer_keypad_pane_t1

0x17ee,	// (0x00055399) bg_popup_window_pane_cp012

0xdcb1,	// (0x0006185c) heading_pane_cp06

0x087e,	// (0x00054429) ncim_query_content_pane

0x17ee,	// (0x00055399) bg_popup_heading_pane_cp01

0x0886,	// (0x00054431) ncim_heading_pane_t1

0x0894,	// (0x0005443f) ncim_indicator_popup_pane

0x08a6,	// (0x00054451) ncim_query_button_pane

0x08ba,	// (0x00054465) ncim_query_content_pane_t1

0x08cc,	// (0x00054477) ncim_query_content_pane_t2

0x0005,

0xfb3d,	// (0x000636e8) ncim_query_content_pane_t

0x0906,	// (0x000544b1) ncim_query_list_pane

0x0918,	// (0x000544c3) ncim_query_popup_pane

0x0894,	// (0x0005443f) ncim_indicator_popup_pane_ParamLimits

0xa42c,	// (0x0005dfd7) ncim_query_content_pane_g1_ParamLimits

0xa42c,	// (0x0005dfd7) ncim_query_content_pane_g1

0x08ba,	// (0x00054465) ncim_query_content_pane_t1_ParamLimits

0x08cc,	// (0x00054477) ncim_query_content_pane_t2_ParamLimits

0xa438,	// (0x0005dfe3) ncim_query_content_pane_t3_ParamLimits

0xa438,	// (0x0005dfe3) ncim_query_content_pane_t3

0xa455,	// (0x0005e000) ncim_query_content_pane_t4_ParamLimits

0xa455,	// (0x0005e000) ncim_query_content_pane_t4

0xa472,	// (0x0005e01d) ncim_query_content_pane_t5_ParamLimits

0xa472,	// (0x0005e01d) ncim_query_content_pane_t5

0x08de,	// (0x00054489) ncim_query_content_pane_t6_ParamLimits

0x08de,	// (0x00054489) ncim_query_content_pane_t6

0xfb3d,	// (0x000636e8) ncim_query_content_pane_t_ParamLimits

0x0906,	// (0x000544b1) ncim_query_list_pane_ParamLimits

0x0918,	// (0x000544c3) ncim_query_popup_pane_ParamLimits

0x092c,	// (0x000544d7) wait_bar_pane_cp04

0x17ee,	// (0x00055399) input_focus_pane_cp011

0x0934,	// (0x000544df) ncim_query_popup_pane_t1

0x0942,	// (0x000544ed) ncim_list_query_list_pane_ParamLimits

0x0942,	// (0x000544ed) ncim_list_query_list_pane

0x17ee,	// (0x00055399) bg_button_pane_cp027

0x094f,	// (0x000544fa) ncim_query_button_pane_g1

0x17ee,	// (0x00055399) list_highlight_pane_cp012

0x0959,	// (0x00054504) ncim_list_query_list_pane_g1

0x0961,	// (0x0005450c) ncim_list_query_list_pane_t1

0x8a24,	// (0x0005c5cf) cam4_indicators_pane_g3_ParamLimits

0x8a24,	// (0x0005c5cf) cam4_indicators_pane_g3

0x8b2b,	// (0x0005c6d6) vid4_indicators_pane_g5_ParamLimits

0x8b2b,	// (0x0005c6d6) vid4_indicators_pane_g5

0x9af7,	// (0x0005d6a2) vid4_progress_pane_g5_ParamLimits

0x9af7,	// (0x0005d6a2) vid4_progress_pane_g5

0xa318,	// (0x0005dec3) main_ncimui_pane_g1

0xa380,	// (0x0005df2b) ncimui_group_query_pane_ParamLimits

0xa380,	// (0x0005df2b) ncimui_group_query_pane

0xa3c8,	// (0x0005df73) ncimui_list_pane_ParamLimits

0xa3c8,	// (0x0005df73) ncimui_list_pane

0xa3ef,	// (0x0005df9a) ncimui_text_pane_ParamLimits

0xa3ef,	// (0x0005df9a) ncimui_text_pane

0xa48f,	// (0x0005e03a) ncimui_text_pane_t1_ParamLimits

0xa48f,	// (0x0005e03a) ncimui_text_pane_t1

0x096f,	// (0x0005451a) ncimui_list_single_graphic_pane_ParamLimits

0x096f,	// (0x0005451a) ncimui_list_single_graphic_pane

0xa4ae,	// (0x0005e059) ncimui_query_pane_ParamLimits

0xa4ae,	// (0x0005e059) ncimui_query_pane

0x17ee,	// (0x00055399) list_highlight_pane_cp013

0x097f,	// (0x0005452a) ncim_list_query_list_pane_t1_copy1

0x0959,	// (0x00054504) ncim_list_single_graphic_pane_g1

0xa4c1,	// (0x0005e06c) ncim_query_button_pane_cp01

0xa4cd,	// (0x0005e078) ncim_query_entry_pane_ParamLimits

0xa4cd,	// (0x0005e078) ncim_query_entry_pane

0xa4e0,	// (0x0005e08b) ncimui_query_pane_g1

0xa4ec,	// (0x0005e097) ncimui_query_pane_t1_ParamLimits

0xa4ec,	// (0x0005e097) ncimui_query_pane_t1

0x223f,	// (0x00055dea) input_focus_pane_cp012

0x098d,	// (0x00054538) ncim_query_entry_pane_t1

0x2505,	// (0x000560b0) main_im_pane_ParamLimits

0x70a5,	// (0x0005ac50) main_mobtv_pane_ParamLimits

0x70a5,	// (0x0005ac50) main_mobtv_pane

0xa166,	// (0x0005dd11) main_cset6_slider_pane_g18_ParamLimits

0xa166,	// (0x0005dd11) main_cset6_slider_pane_g18

0xa172,	// (0x0005dd1d) main_cset6_slider_pane_g19_ParamLimits

0xa172,	// (0x0005dd1d) main_cset6_slider_pane_g19

0x31f5,	// (0x00056da0) bg_main_mobtv_pane_ParamLimits

0x31f5,	// (0x00056da0) bg_main_mobtv_pane

0xa505,	// (0x0005e0b0) main_mobtv_info_pane

0xa510,	// (0x0005e0bb) main_mobtv_loading_pane_ParamLimits

0xa510,	// (0x0005e0bb) main_mobtv_loading_pane

0x099f,	// (0x0005454a) main_mobtv_pg_channel_list_pane

0x09a9,	// (0x00054554) main_mobtv_pg_hdr_pane

0xa51d,	// (0x0005e0c8) main_mobtv_programe_curr_pane_ParamLimits

0xa51d,	// (0x0005e0c8) main_mobtv_programe_curr_pane

0xa52a,	// (0x0005e0d5) main_mobtv_programe_next_pane_ParamLimits

0xa52a,	// (0x0005e0d5) main_mobtv_programe_next_pane

0x09b2,	// (0x0005455d) popup_mobtv_noti_window

0x2714,	// (0x000562bf) main_tv_pg_hdr_pane_g1

0x09ba,	// (0x00054565) main_tv_pg_hdr_pane_g2

0x09c2,	// (0x0005456d) main_tv_pg_hdr_pane_g3

0x09ca,	// (0x00054575) main_tv_pg_hdr_pane_g4

0x09d2,	// (0x0005457d) main_tv_pg_hdr_pane_g5

0x09dc,	// (0x00054587) main_tv_pg_hdr_pane_g6

0x09e6,	// (0x00054591) main_tv_pg_hdr_pane_g7

0x09f0,	// (0x0005459b) main_tv_pg_hdr_pane_g8

0x09fa,	// (0x000545a5) main_tv_pg_hdr_pane_g9

0x0a04,	// (0x000545af) main_tv_pg_hdr_pane_g10

0x0a0e,	// (0x000545b9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4a,	// (0x000636f5) main_tv_pg_hdr_pane_g

0x0a18,	// (0x000545c3) main_tv_pg_hdr_pane_t1

0x0a26,	// (0x000545d1) main_tv_pg_hdr_pane_t2

0x0a34,	// (0x000545df) main_tv_pg_hdr_pane_t3

0x0a44,	// (0x000545ef) main_tv_pg_hdr_pane_t4

0x0a54,	// (0x000545ff) main_tv_pg_hdr_pane_t5

0x0004,

0xfb61,	// (0x0006370c) main_tv_pg_hdr_pane_t

0x0a64,	// (0x0005460f) single_mobtv_pg_channel_pane_ParamLimits

0x0a64,	// (0x0005460f) single_mobtv_pg_channel_pane

0x0a76,	// (0x00054621) single_mobtv_pg_channel_table_pane

0x0a7f,	// (0x0005462a) single_mobtv_pg_channel_thumb_pane

0x0a88,	// (0x00054633) single_tv_pg_channel_pane_g1

0x0a91,	// (0x0005463c) single_tv_pg_channel_pane_g2

0x0001,

0xfb6c,	// (0x00063717) single_tv_pg_channel_pane_g

0x2493,	// (0x0005603e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2493,	// (0x0005603e) bg_single_mobtv_pg_channel_thumb_pane

0x0a9a,	// (0x00054645) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0a9a,	// (0x00054645) single_mobtv_pg_channel_thumb_pane_g1

0x0aa8,	// (0x00054653) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0aa8,	// (0x00054653) single_mobtv_pg_channel_thumb_pane_g2

0x0ab4,	// (0x0005465f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0ab4,	// (0x0005465f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb71,	// (0x0006371c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb71,	// (0x0006371c) single_mobtv_pg_channel_thumb_pane_g

0x0ac0,	// (0x0005466b) single_mobtv_pg_channel_thumb_pane_t1

0x0ace,	// (0x00054679) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb78,	// (0x00063723) single_mobtv_pg_channel_thumb_pane_t

0x2714,	// (0x000562bf) bg_single_mobtv_pg_channel_table_pane_g1

0x2714,	// (0x000562bf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x00062f48) bg_single_mobtv_pg_channel_table_pane_g

0x0adc,	// (0x00054687) single_mobtv_pg_channel_table_pane_t1

0x0aea,	// (0x00054695) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb7d,	// (0x00063728) single_mobtv_pg_channel_table_pane_t

0xa53f,	// (0x0005e0ea) main_mobtv_info_pane_g1_ParamLimits

0xa53f,	// (0x0005e0ea) main_mobtv_info_pane_g1

0xa55b,	// (0x0005e106) main_mobtv_info_pane_t1_ParamLimits

0xa55b,	// (0x0005e106) main_mobtv_info_pane_t1

0xa5d3,	// (0x0005e17e) main_mobtv_info_pane_t2_ParamLimits

0xa5d3,	// (0x0005e17e) main_mobtv_info_pane_t2

0x0002,

0xfb87,	// (0x00063732) main_mobtv_info_pane_t_ParamLimits

0xfb87,	// (0x00063732) main_mobtv_info_pane_t

0xa662,	// (0x0005e20d) wait_bar_pane_cp05

0xa674,	// (0x0005e21f) main_mobtv_loading_pane_g1_ParamLimits

0xa674,	// (0x0005e21f) main_mobtv_loading_pane_g1

0xa682,	// (0x0005e22d) main_mobtv_loading_pane_g2_ParamLimits

0xa682,	// (0x0005e22d) main_mobtv_loading_pane_g2

0xa68e,	// (0x0005e239) main_mobtv_loading_pane_g3_ParamLimits

0xa68e,	// (0x0005e239) main_mobtv_loading_pane_g3

0x0002,

0xfb8e,	// (0x00063739) main_mobtv_loading_pane_g_ParamLimits

0xfb8e,	// (0x00063739) main_mobtv_loading_pane_g

0x0af8,	// (0x000546a3) main_mobtv_loading_pane_t1_ParamLimits

0x0af8,	// (0x000546a3) main_mobtv_loading_pane_t1

0x0b10,	// (0x000546bb) main_mobtv_loading_pane_t2_ParamLimits

0x0b10,	// (0x000546bb) main_mobtv_loading_pane_t2

0x0001,

0xfb95,	// (0x00063740) main_mobtv_loading_pane_t_ParamLimits

0xfb95,	// (0x00063740) main_mobtv_loading_pane_t

0xa69c,	// (0x0005e247) wait_bar_pane_cp06_ParamLimits

0xa69c,	// (0x0005e247) wait_bar_pane_cp06

0x0b34,	// (0x000546df) main_mobtv_programe_curr_pane_t1

0x0b42,	// (0x000546ed) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9a,	// (0x00063745) main_mobtv_programe_curr_pane_t

0x0b50,	// (0x000546fb) main_mobtv_programe_next_pane_t1

0x0b5e,	// (0x00054709) main_mobtv_programe_next_pane_t2

0x0b6c,	// (0x00054717) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9f,	// (0x0006374a) main_mobtv_programe_next_pane_t

0x17ee,	// (0x00055399) bg_popup_mobtv_noti_window_pane

0x0b7a,	// (0x00054725) popup_mobtv_noti_window_g1

0x0b82,	// (0x0005472d) popup_mobtv_noti_window_t1

0x0b90,	// (0x0005473b) popup_mobtv_noti_window_t2

0x0001,

0xfba6,	// (0x00063751) popup_mobtv_noti_window_t

0x2714,	// (0x000562bf) bg_popup_mobtv_noti_window_pane_g1

0x4508,	// (0x000580b3) sc_clock_pane

0x4508,	// (0x000580b3) main_fs_bigclock_pane

0x9cd1,	// (0x0005d87c) blid2_tripm_pane_t4_ParamLimits

0x9cd1,	// (0x0005d87c) blid2_tripm_pane_t4

0xa6a8,	// (0x0005e253) sc_clock_pane_g1_ParamLimits

0xa6a8,	// (0x0005e253) sc_clock_pane_g1

0xa6b6,	// (0x0005e261) sc_clock_pane_t1_ParamLimits

0xa6b6,	// (0x0005e261) sc_clock_pane_t1

0xa6c9,	// (0x0005e274) sc_clock_pane_t2_ParamLimits

0xa6c9,	// (0x0005e274) sc_clock_pane_t2

0xa6db,	// (0x0005e286) sc_clock_pane_t3_ParamLimits

0xa6db,	// (0x0005e286) sc_clock_pane_t3

0x0004,

0xfbab,	// (0x00063756) sc_clock_pane_t_ParamLimits

0xfbab,	// (0x00063756) sc_clock_pane_t

0xb37d,	// (0x0005ef28) main_fs_bigclock_indicator_pane_ParamLimits

0xb37d,	// (0x0005ef28) main_fs_bigclock_indicator_pane

0xa75e,	// (0x0005e309) main_fs_bigclock_pane_g1_ParamLimits

0xa75e,	// (0x0005e309) main_fs_bigclock_pane_g1

0xb389,	// (0x0005ef34) main_fs_bigclock_pane_t1_ParamLimits

0xb389,	// (0x0005ef34) main_fs_bigclock_pane_t1

0xb39b,	// (0x0005ef46) main_fs_bigclock_pane_t2_ParamLimits

0xb39b,	// (0x0005ef46) main_fs_bigclock_pane_t2

0xb3af,	// (0x0005ef5a) main_fs_bigclock_pane_t3_ParamLimits

0xb3af,	// (0x0005ef5a) main_fs_bigclock_pane_t3

0x0002,

0xfd3c,	// (0x000638e7) main_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x000638e7) main_fs_bigclock_pane_t

0x1414,	// (0x00054fbf) main_fs_bigclock_indicator_pane_g1

0x08ae,	// (0x00054459) ncim_query_content_pane_g2_ParamLimits

0x08ae,	// (0x00054459) ncim_query_content_pane_g2

0x0001,

0xfb38,	// (0x000636e3) ncim_query_content_pane_g_ParamLimits

0xfb38,	// (0x000636e3) ncim_query_content_pane_g

0xa6ef,	// (0x0005e29a) sc_clock_pane_t4_ParamLimits

0xa6ef,	// (0x0005e29a) sc_clock_pane_t4

0x70a5,	// (0x0005ac50) main_radioblah_pane

0x88c7,	// (0x0005c472) cell_call4_button_pane_t1_copy1_ParamLimits

0x88c7,	// (0x0005c472) cell_call4_button_pane_t1_copy1

0xa332,	// (0x0005dedd) main_ncimui_pane_t1_ParamLimits

0xa332,	// (0x0005dedd) main_ncimui_pane_t1

0xa34c,	// (0x0005def7) main_ncimui_pane_t2_ParamLimits

0xa34c,	// (0x0005def7) main_ncimui_pane_t2

0x0002,

0xfb31,	// (0x000636dc) main_ncimui_pane_t_ParamLimits

0xfb31,	// (0x000636dc) main_ncimui_pane_t

0x0cd5,	// (0x00054880) main_radioblah_anim_pane_ParamLimits

0x0cd5,	// (0x00054880) main_radioblah_anim_pane

0x0ce6,	// (0x00054891) main_radioblah_info_pane_ParamLimits

0x0ce6,	// (0x00054891) main_radioblah_info_pane

0x0cfa,	// (0x000548a5) main_radioblah_pane_t1_ParamLimits

0x0cfa,	// (0x000548a5) main_radioblah_pane_t1

0x0d16,	// (0x000548c1) main_radioblah_pane_t2_ParamLimits

0x0d16,	// (0x000548c1) main_radioblah_pane_t2

0x0003,

0xfbcc,	// (0x00063777) main_radioblah_pane_t_ParamLimits

0xfbcc,	// (0x00063777) main_radioblah_pane_t

0xa7b4,	// (0x0005e35f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa7b4,	// (0x0005e35f) main_radioblah_rocker_ctrl_pane

0x0d5e,	// (0x00054909) main_radioblah_info_pane_t1_ParamLimits

0x0d5e,	// (0x00054909) main_radioblah_info_pane_t1

0xa7f9,	// (0x0005e3a4) main_radioblah_info_pane_t2_ParamLimits

0xa7f9,	// (0x0005e3a4) main_radioblah_info_pane_t2

0x0003,

0xfbd5,	// (0x00063780) main_radioblah_info_pane_t_ParamLimits

0xfbd5,	// (0x00063780) main_radioblah_info_pane_t

0x2714,	// (0x000562bf) main_radioblah_rocker_ctrl_pane_g1

0xa8a9,	// (0x0005e454) main_radioblah_rocker_ctrl_pane_g2

0xa8b1,	// (0x0005e45c) main_radioblah_rocker_ctrl_pane_g3

0xa8b9,	// (0x0005e464) main_radioblah_rocker_ctrl_pane_g4

0xa8c1,	// (0x0005e46c) main_radioblah_rocker_ctrl_pane_g5

0xa8c9,	// (0x0005e474) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbde,	// (0x00063789) main_radioblah_rocker_ctrl_pane_g

0xa2d9,	// (0x0005de84) main_cset_text2_pane_t1_copy1_ParamLimits

0x8952,	// (0x0005c4fd) cam4_image_uncrop_qvga_pane

0x8a99,	// (0x0005c644) vid4_image_uncrop_qcif_pane

0x9e65,	// (0x0005da10) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e65,	// (0x0005da10) cam6_image_uncrop_qvga_pane

0x05b5,	// (0x00054160) vid6_image_uncrop_qcif_pane_ParamLimits

0x05b5,	// (0x00054160) vid6_image_uncrop_qcif_pane

0x17ee,	// (0x00055399) bg_popup_preview_window_pane_cp03

0x0860,	// (0x0005440b) list_cset_text2_pane

0x0868,	// (0x00054413) main_cset6_text2_pane_g1

0x0870,	// (0x0005441b) main_cset6_text2_pane_t1

0xa8d1,	// (0x0005e47c) list_cset_text2_pane_t1_ParamLimits

0xa8d1,	// (0x0005e47c) list_cset_text2_pane_t1

0x70a5,	// (0x0005ac50) main_radioblah_pane_ParamLimits

0xa64e,	// (0x0005e1f9) main_mobtv_info_pane_t3_ParamLimits

0xa64e,	// (0x0005e1f9) main_mobtv_info_pane_t3

0xa7a2,	// (0x0005e34d) main_radioblah_pane_g1

0xa7cd,	// (0x0005e378) main_radioblah_info_pane_g1

0xa84e,	// (0x0005e3f9) main_radioblah_info_pane_t3_ParamLimits

0xa84e,	// (0x0005e3f9) main_radioblah_info_pane_t3

0x60af,	// (0x00059c5a) highlight_cell_cale_month_pane_ParamLimits

0x60af,	// (0x00059c5a) highlight_cell_cale_month_pane

0x4508,	// (0x000580b3) main_phob_fisheye_pane

0xe4d0,	// (0x0006207b) scroll_pane_cp0031_ParamLimits

0xe4d0,	// (0x0006207b) scroll_pane_cp0031

0x06c3,	// (0x0005426e) wait_bar_pane_cp08_ParamLimits

0xa07d,	// (0x0005dc28) cset_list_set_pane_copy1_ParamLimits

0x0db8,	// (0x00054963) highlight_cell_cale_month_pane_g1

0xa8ee,	// (0x0005e499) highlight_cell_cale_month_pane_t1

0xf03c,	// (0x00062be7) list_gen_pane_cp01

0xebc6,	// (0x00062771) scroll_pane_01

0xa8fc,	// (0x0005e4a7) list_single_double_fisheye_pane

0xa905,	// (0x0005e4b0) list_double_fisheye_pane_g1_ParamLimits

0xa905,	// (0x0005e4b0) list_double_fisheye_pane_g1

0xa911,	// (0x0005e4bc) list_double_fisheye_pane_g2_ParamLimits

0xa911,	// (0x0005e4bc) list_double_fisheye_pane_g2

0xa925,	// (0x0005e4d0) list_double_fisheye_pane_g3_ParamLimits

0xa925,	// (0x0005e4d0) list_double_fisheye_pane_g3

0x0004,

0xfbeb,	// (0x00063796) list_double_fisheye_pane_g_ParamLimits

0xfbeb,	// (0x00063796) list_double_fisheye_pane_g

0xa94e,	// (0x0005e4f9) list_double_fisheye_pane_t1_ParamLimits

0xa94e,	// (0x0005e4f9) list_double_fisheye_pane_t1

0xa969,	// (0x0005e514) list_double_fisheye_pane_t2_ParamLimits

0xa969,	// (0x0005e514) list_double_fisheye_pane_t2

0x0001,

0xfbf6,	// (0x000637a1) list_double_fisheye_pane_t_ParamLimits

0xfbf6,	// (0x000637a1) list_double_fisheye_pane_t

0x4508,	// (0x000580b3) main_call5_pane

0xa715,	// (0x0005e2c0) sc_swipe_pane_ParamLimits

0xa715,	// (0x0005e2c0) sc_swipe_pane

0xa997,	// (0x0005e542) call5_image_pane_ParamLimits

0xa997,	// (0x0005e542) call5_image_pane

0xa9a7,	// (0x0005e552) call5_swipe_1_pane_ParamLimits

0xa9a7,	// (0x0005e552) call5_swipe_1_pane

0xa9b3,	// (0x0005e55e) call5_swipe_2_pane_ParamLimits

0xa9b3,	// (0x0005e55e) call5_swipe_2_pane

0xa9cd,	// (0x0005e578) popup_call5_audio_first_window_ParamLimits

0xa9cd,	// (0x0005e578) popup_call5_audio_first_window

0x2493,	// (0x0005603e) call5_swipe_1_pane_g1_ParamLimits

0x2493,	// (0x0005603e) call5_swipe_1_pane_g1

0x0dc0,	// (0x0005496b) call5_swipe_1_pane_g2_ParamLimits

0x0dc0,	// (0x0005496b) call5_swipe_1_pane_g2

0x0001,

0xfbfb,	// (0x000637a6) call5_swipe_1_pane_g_ParamLimits

0xfbfb,	// (0x000637a6) call5_swipe_1_pane_g

0x0dcc,	// (0x00054977) call5_swipe_1_pane_t1_ParamLimits

0x0dcc,	// (0x00054977) call5_swipe_1_pane_t1

0x2493,	// (0x0005603e) call5_swipe_2_pane_g1_ParamLimits

0x2493,	// (0x0005603e) call5_swipe_2_pane_g1

0x0de1,	// (0x0005498c) call5_swipe_2_pane_g2_ParamLimits

0x0de1,	// (0x0005498c) call5_swipe_2_pane_g2

0x0001,

0xfc00,	// (0x000637ab) call5_swipe_2_pane_g_ParamLimits

0xfc00,	// (0x000637ab) call5_swipe_2_pane_g

0x0ded,	// (0x00054998) call5_swipe_2_pane_t1_ParamLimits

0x0ded,	// (0x00054998) call5_swipe_2_pane_t1

0x0e02,	// (0x000549ad) sc_swipe_pane_g1_ParamLimits

0x0e02,	// (0x000549ad) sc_swipe_pane_g1

0x0e0f,	// (0x000549ba) sc_swipe_pane_g2_ParamLimits

0x0e0f,	// (0x000549ba) sc_swipe_pane_g2

0x0001,

0xfc05,	// (0x000637b0) sc_swipe_pane_g_ParamLimits

0xfc05,	// (0x000637b0) sc_swipe_pane_g

0x0e1b,	// (0x000549c6) sc_swipe_pane_t1_ParamLimits

0x0e1b,	// (0x000549c6) sc_swipe_pane_t1

0x4508,	// (0x000580b3) main_cmail_launcher_pane

0xa9db,	// (0x0005e586) aid_size_cell_cmail_l_ParamLimits

0xa9db,	// (0x0005e586) aid_size_cell_cmail_l

0xa9e9,	// (0x0005e594) grid_cmail_l_pane_ParamLimits

0xa9e9,	// (0x0005e594) grid_cmail_l_pane

0xa9f9,	// (0x0005e5a4) cell_cmail_l_pane_ParamLimits

0xa9f9,	// (0x0005e5a4) cell_cmail_l_pane

0x0e30,	// (0x000549db) cell_cmail_l_pane_g1_ParamLimits

0x0e30,	// (0x000549db) cell_cmail_l_pane_g1

0x0e3c,	// (0x000549e7) cell_cmail_l_pane_t1_ParamLimits

0x0e3c,	// (0x000549e7) cell_cmail_l_pane_t1

0x0e52,	// (0x000549fd) cell_cmail_l_pane_t2_ParamLimits

0x0e52,	// (0x000549fd) cell_cmail_l_pane_t2

0x0001,

0xfc0a,	// (0x000637b5) cell_cmail_l_pane_t_ParamLimits

0xfc0a,	// (0x000637b5) cell_cmail_l_pane_t

0x223f,	// (0x00055dea) grid_highlight_pane_cp018_ParamLimits

0x223f,	// (0x00055dea) grid_highlight_pane_cp018

0x43fb,	// (0x00057fa6) main2_pane_ParamLimits

0x43fb,	// (0x00057fa6) main2_pane

0x259d,	// (0x00056148) popup_sp_fs_action_menu_bg_pane_g1

0x25a5,	// (0x00056150) popup_sp_fs_action_menu_bg_pane_g2

0x25ad,	// (0x00056158) popup_sp_fs_action_menu_bg_pane_g3

0x25b5,	// (0x00056160) popup_sp_fs_action_menu_bg_pane_g4

0x25bd,	// (0x00056168) popup_sp_fs_action_menu_bg_pane_g5

0x25c5,	// (0x00056170) popup_sp_fs_action_menu_bg_pane_g6

0x25cd,	// (0x00056178) popup_sp_fs_action_menu_bg_pane_g7

0x25d5,	// (0x00056180) popup_sp_fs_action_menu_bg_pane_g8

0x25dd,	// (0x00056188) popup_sp_fs_action_menu_bg_pane_g9

0x25e5,	// (0x00056190) popup_sp_fs_action_menu_bg_pane_g10

0x25e5,	// (0x00056190) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00062cb0) popup_sp_fs_action_menu_bg_pane_g

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g2

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00062d5e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00062d5e) list_medium_line_x2_t3_g3_g

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t2

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g3_t

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g2_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t3_g2_g

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t2

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g2_t

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g2

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g3

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00062d71) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00062d71) list_medium_line_x2_t4_g4_g

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t2

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t3

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t4_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x00062d7a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x00062d7a) list_medium_line_x2_t4_g4_t

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g2

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g3

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00062d71) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00062d71) list_medium_line_x2_t2_g4_g

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g4_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g4_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g4_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g4_t

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g2

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00062d5e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00062d5e) list_medium_line_x2_t2_g3_g

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g3_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g3_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g3_t

0x627f,	// (0x00059e2a) main_sp_fs_list_pane_ParamLimits

0x627f,	// (0x00059e2a) main_sp_fs_list_pane

0x628b,	// (0x00059e36) sp_fs_scroll_pane_ParamLimits

0x628b,	// (0x00059e36) sp_fs_scroll_pane

0x2c4f,	// (0x000567fa) list_medium_line_x2_t3_t1

0x2c4f,	// (0x000567fa) list_medium_line_x2_t3_t2

0x2c4f,	// (0x000567fa) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x00062e2c) list_medium_line_x2_t3_t

0x2c4f,	// (0x000567fa) list_medium_line_x3_t4_t1

0x2c4f,	// (0x000567fa) list_medium_line_x3_t4_t2

0x2c4f,	// (0x000567fa) list_medium_line_x3_t4_t3

0x2c4f,	// (0x000567fa) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x00062e33) list_medium_line_x3_t4_t

0x2c4f,	// (0x000567fa) list_medium_line_x4_t5_t1

0x2c4f,	// (0x000567fa) list_medium_line_x4_t5_t2

0x2c4f,	// (0x000567fa) list_medium_line_x4_t5_t3

0x2c4f,	// (0x000567fa) list_medium_line_x4_t5_t4

0x2c4f,	// (0x000567fa) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x00062e3c) list_medium_line_x4_t5_t

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g1

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g2

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g3

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00062d71) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00062d71) list_medium_line_t4_g4_g

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t1

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t2

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t3

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t4_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x00062d7a) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x00062d7a) list_medium_line_t4_g4_t

0x6374,	// (0x00059f1f) chi_dic_find_pane_g1

0x70c1,	// (0x0005ac6c) main_tport_pane

0x2c4f,	// (0x000567fa) list_medium_line_plain_t1

0x2493,	// (0x0005603e) list_medium_line_t2_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g2_g1

0x2493,	// (0x0005603e) list_medium_line_t2_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_t2_g2_g

0x26e6,	// (0x00056291) list_medium_line_t2_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_g2_t1

0x26e6,	// (0x00056291) list_medium_line_t2_g2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_t2_g2_t

0x0012,	// (0x00053bbd) aid_sp_fs_list_icon_a_sm

0x001a,	// (0x00053bc5) aid_sp_fs_list_icon_d

0x0345,	// (0x00053ef0) aid_sp_fs_text_primary

0x0022,	// (0x00053bcd) aid_sp_fs_text_secondary

0x17ee,	// (0x00055399) list_medium_line

0x17ee,	// (0x00055399) list_medium_line_g2

0x17ee,	// (0x00055399) list_medium_line_g3

0x17ee,	// (0x00055399) list_medium_line_plain

0x17ee,	// (0x00055399) list_medium_line_plain_t2

0x17ee,	// (0x00055399) list_medium_line_plain_t3

0x17ee,	// (0x00055399) list_medium_line_right_icon

0x17ee,	// (0x00055399) list_medium_line_right_iconx2

0x17ee,	// (0x00055399) list_medium_line_t2

0x17ee,	// (0x00055399) list_medium_line_t2_g2

0x17ee,	// (0x00055399) list_medium_line_t2_g3

0x17ee,	// (0x00055399) list_medium_line_t2_right_icon

0x17ee,	// (0x00055399) list_medium_line_t2_right_iconx2

0x17ee,	// (0x00055399) list_medium_line_t3

0x17ee,	// (0x00055399) list_medium_line_t3_g2

0x17ee,	// (0x00055399) list_medium_line_t3_g3

0x17ee,	// (0x00055399) list_medium_line_t3_right_iconx2

0x17ee,	// (0x00055399) list_medium_line_t4_g4

0x17ee,	// (0x00055399) list_medium_line_x2

0x17ee,	// (0x00055399) list_medium_line_x2_t2_g2

0x17ee,	// (0x00055399) list_medium_line_x2_t2_g3

0x17ee,	// (0x00055399) list_medium_line_x2_t2_g4

0x17ee,	// (0x00055399) list_medium_line_x2_t3

0x17ee,	// (0x00055399) list_medium_line_x2_t3_g2

0x17ee,	// (0x00055399) list_medium_line_x2_t3_g3

0x17ee,	// (0x00055399) list_medium_line_x2_t3_g4

0x17ee,	// (0x00055399) list_medium_line_x2_t4_g2

0x17ee,	// (0x00055399) list_medium_line_x2_t4_g4

0x17ee,	// (0x00055399) list_medium_line_x3

0x17ee,	// (0x00055399) list_medium_line_x3_t4

0x17ee,	// (0x00055399) list_medium_line_x3_t4_g4

0x17ee,	// (0x00055399) list_medium_line_x4_t4

0x17ee,	// (0x00055399) list_medium_line_x4_t4_g7

0x17ee,	// (0x00055399) list_medium_line_x4_t5

0x9b56,	// (0x0005d701) list_single_fs_dyc_pane_ParamLimits

0x9b56,	// (0x0005d701) list_single_fs_dyc_pane

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g1

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g2

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g3

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g4

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g5

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x4_t4_g7_g6

0x24a1,	// (0x0005604c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x24a1,	// (0x0005604c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb12,	// (0x000636bd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb12,	// (0x000636bd) list_medium_line_x4_t4_g7_g

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t1

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t2

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x4_t4_g7_t3

0x3217,	// (0x00056dc2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3217,	// (0x00056dc2) list_medium_line_x4_t4_g7_t4

0x3217,	// (0x00056dc2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3217,	// (0x00056dc2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb21,	// (0x000636cc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb21,	// (0x000636cc) list_medium_line_x4_t4_g7_t

0xa2bc,	// (0x0005de67) list_single_dyc_row_pane_ParamLimits

0xa2bc,	// (0x0005de67) list_single_dyc_row_pane

0xa98b,	// (0x0005e536) call5_gesture_pane_ParamLimits

0xa98b,	// (0x0005e536) call5_gesture_pane

0xa9bf,	// (0x0005e56a) call5_windows_pane_ParamLimits

0xa9bf,	// (0x0005e56a) call5_windows_pane

0xaa12,	// (0x0005e5bd) call5_swipe_1_pane_cp_ParamLimits

0xaa12,	// (0x0005e5bd) call5_swipe_1_pane_cp

0xaa1e,	// (0x0005e5c9) call5_swipe_2_pane_cp_ParamLimits

0xaa1e,	// (0x0005e5c9) call5_swipe_2_pane_cp

0x26de,	// (0x00056289) call5_image_pane_cp

0xaa2a,	// (0x0005e5d5) popup_call5_audio_first_window_cp_ParamLimits

0xaa2a,	// (0x0005e5d5) popup_call5_audio_first_window_cp

0x0e02,	// (0x000549ad) call5_swipe_1_pane_g1_cp_ParamLimits

0x0e02,	// (0x000549ad) call5_swipe_1_pane_g1_cp

0x0e6f,	// (0x00054a1a) call5_swipe_1_pane_g2_cp

0x0e1b,	// (0x000549c6) call5_swipe_1_pane_t1_cp_ParamLimits

0x0e1b,	// (0x000549c6) call5_swipe_1_pane_t1_cp

0x0e02,	// (0x000549ad) call5_swipe_2_pane_g1_cp_ParamLimits

0x0e02,	// (0x000549ad) call5_swipe_2_pane_g1_cp

0x0e77,	// (0x00054a22) call5_swipe_2_pane_g2_cp

0x0e7f,	// (0x00054a2a) call5_swipe_2_pane_t1_cp_ParamLimits

0x0e7f,	// (0x00054a2a) call5_swipe_2_pane_t1_cp

0x223f,	// (0x00055dea) main_sp_fs_email_pane

0x0e94,	// (0x00054a3f) main_sp_fs_listscroll_pane_te

0xaa38,	// (0x0005e5e3) popup_sp_fs_action_menu_pane_ParamLimits

0xaa38,	// (0x0005e5e3) popup_sp_fs_action_menu_pane

0x2714,	// (0x000562bf) bg_sp_fs_ctrlbar_pane_g1

0x0e9d,	// (0x00054a48) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0ea6,	// (0x00054a51) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0eaf,	// (0x00054a5a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2714,	// (0x000562bf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0f,	// (0x000637ba) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcbc1,	// (0x0006076c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcbc1,	// (0x0006076c) bg_sp_fs_ctrlbar_ddmenu_pane

0x0eb8,	// (0x00054a63) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0eb8,	// (0x00054a63) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0ec4,	// (0x00054a6f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0ec4,	// (0x00054a6f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc18,	// (0x000637c3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc18,	// (0x000637c3) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0ed0,	// (0x00054a7b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0ed0,	// (0x00054a7b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2714,	// (0x000562bf) list_medium_line_t2_right_icon_g1

0x2c4f,	// (0x000567fa) list_medium_line_t2_right_icon_t1

0x2c4f,	// (0x000567fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfc1d,	// (0x000637c8) list_medium_line_t2_right_icon_t

0x322b,	// (0x00056dd6) bg_sp_fs_ctrlbar_pane_ParamLimits

0x322b,	// (0x00056dd6) bg_sp_fs_ctrlbar_pane

0xaad3,	// (0x0005e67e) main_sp_fs_ctrlbar_button_pane_cp01

0xaadb,	// (0x0005e686) main_sp_fs_ctrlbar_ddmenu_pane

0x0f22,	// (0x00054acd) main_sp_fs_ctrlbar_pane_g1

0x0f2e,	// (0x00054ad9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc22,	// (0x000637cd) main_sp_fs_ctrlbar_pane_g

0xab17,	// (0x0005e6c2) main_sp_fs_ctrlbar_pane_t1

0xab52,	// (0x0005e6fd) main_sp_fs_ctrlbar_pane

0xab68,	// (0x0005e713) main_sp_fs_listscroll_pane_te_cp01

0xab79,	// (0x0005e724) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xab79,	// (0x0005e724) popup_sp_fs_action_menu_pane_cp01

0x223f,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x223f,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp01

0x0039,	// (0x00053be4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0039,	// (0x00053be4) sp_fs_action_menu_list_gene_pane_g1

0x0f55,	// (0x00054b00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0f55,	// (0x00054b00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x000637db) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x000637db) sp_fs_action_menu_list_gene_pane_g

0x0048,	// (0x00053bf3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0048,	// (0x00053bf3) sp_fs_action_menu_list_gene_pane_t1

0x0060,	// (0x00053c0b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0060,	// (0x00053c0b) sp_fs_action_menu_list_gene_pane

0x0f62,	// (0x00054b0d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0f62,	// (0x00054b0d) popup_sp_fs_action_menu_bg_pane

0x007f,	// (0x00053c2a) sp_fs_action_menu_list_pane_ParamLimits

0x007f,	// (0x00053c2a) sp_fs_action_menu_list_pane

0xab99,	// (0x0005e744) sp_fs_scroll_pane_cp01_ParamLimits

0xab99,	// (0x0005e744) sp_fs_scroll_pane_cp01

0x2c4f,	// (0x000567fa) list_medium_line_plain_t2_t1

0x2c4f,	// (0x000567fa) list_medium_line_plain_t2_t2

0x0001,

0xfc1d,	// (0x000637c8) list_medium_line_plain_t2_t

0x2c4f,	// (0x000567fa) list_medium_line_plain_t3_t1

0x2c4f,	// (0x000567fa) list_medium_line_plain_t3_t2

0x2c4f,	// (0x000567fa) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x00062e2c) list_medium_line_plain_t3_t

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g2_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t2_g2_g

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g2_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_x2_t2_g2_t

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g2_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_x2_t4_g2_g

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t2

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t3

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t4_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x00062d7a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x00062d7a) list_medium_line_x2_t4_g2_t

0x2714,	// (0x000562bf) list_medium_line_t3_right_iconx2_g1

0x2714,	// (0x000562bf) list_medium_line_t3_right_iconx2_g2

0x2714,	// (0x000562bf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x00062f4d) list_medium_line_t3_right_iconx2_g

0x2c4f,	// (0x000567fa) list_medium_line_t3_right_iconx2_t1

0x2c4f,	// (0x000567fa) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x000637c8) list_medium_line_t3_right_iconx2_t

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g1

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g2

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g3

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00062d71) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00062d71) list_medium_line_x3_t4_g4_g

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t1

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t2

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t3

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t4_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x00062d7a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x00062d7a) list_medium_line_x3_t4_g4_t

0xabbf,	// (0x0005e76a) list_single_dyc_row_text_pane_t1_ParamLimits

0xabbf,	// (0x0005e76a) list_single_dyc_row_text_pane_t1

0xabf6,	// (0x0005e7a1) list_single_dyc_row_text_pane_t2_ParamLimits

0xabf6,	// (0x0005e7a1) list_single_dyc_row_text_pane_t2

0x009f,	// (0x00053c4a) list_single_dyc_row_text_pane_t3_ParamLimits

0x009f,	// (0x00053c4a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc35,	// (0x000637e0) list_single_dyc_row_text_pane_t_ParamLimits

0xfc35,	// (0x000637e0) list_single_dyc_row_text_pane_t

0x00c3,	// (0x00053c6e) list_single_dyc_row_pane_g1_ParamLimits

0x00c3,	// (0x00053c6e) list_single_dyc_row_pane_g1

0x00cf,	// (0x00053c7a) list_single_dyc_row_pane_g2_ParamLimits

0x00cf,	// (0x00053c7a) list_single_dyc_row_pane_g2

0x00db,	// (0x00053c86) list_single_dyc_row_pane_g3_ParamLimits

0x00db,	// (0x00053c86) list_single_dyc_row_pane_g3

0x00e7,	// (0x00053c92) list_single_dyc_row_pane_g4_ParamLimits

0x00e7,	// (0x00053c92) list_single_dyc_row_pane_g4

0x0003,

0xfc42,	// (0x000637ed) list_single_dyc_row_pane_g_ParamLimits

0xfc42,	// (0x000637ed) list_single_dyc_row_pane_g

0x00f3,	// (0x00053c9e) list_single_dyc_row_text_pane_ParamLimits

0x00f3,	// (0x00053c9e) list_single_dyc_row_text_pane

0x17ee,	// (0x00055399) bg_sp_fs_scroll_pane

0x0f70,	// (0x00054b1b) thumb_sp_fs_scroll_pane

0x2493,	// (0x0005603e) list_medium_line_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g1

0x26e6,	// (0x00056291) list_medium_line_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t1

0x2493,	// (0x0005603e) list_medium_line_x2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_g1

0x2493,	// (0x0005603e) list_medium_line_x2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_x2_g

0x26e6,	// (0x00056291) list_medium_line_x2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t1

0x2493,	// (0x0005603e) list_medium_line_x3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x3_g1

0x0f79,	// (0x00054b24) list_medium_line_x3_g2_ParamLimits

0x0f79,	// (0x00054b24) list_medium_line_x3_g2

0x0001,

0xfc4b,	// (0x000637f6) list_medium_line_x3_g_ParamLimits

0xfc4b,	// (0x000637f6) list_medium_line_x3_g

0x0f87,	// (0x00054b32) list_medium_line_x3_t1_ParamLimits

0x0f87,	// (0x00054b32) list_medium_line_x3_t1

0x0f9b,	// (0x00054b46) thumb_sp_fs_scroll_pane_g1

0x0fa4,	// (0x00054b4f) thumb_sp_fs_scroll_pane_g2

0x0fad,	// (0x00054b58) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x000637fb) thumb_sp_fs_scroll_pane_g

0x0f9b,	// (0x00054b46) bg_sp_fs_scroll_pane_g1

0x0fa4,	// (0x00054b4f) bg_sp_fs_scroll_pane_g2

0x0fad,	// (0x00054b58) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x000637fb) bg_sp_fs_scroll_pane_g

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g1

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g2

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g3

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00062d71) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00062d71) list_medium_line_x2_t3_g4_g

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t1

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t2

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_x2_t3_g4_t

0x2493,	// (0x0005603e) list_medium_line_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g2_g1

0x2493,	// (0x0005603e) list_medium_line_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_g2_g

0x26e6,	// (0x00056291) list_medium_line_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_g2_t1

0x2493,	// (0x0005603e) list_medium_line_t3_g2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g2_g1

0x2493,	// (0x0005603e) list_medium_line_t3_g2_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x00062d6c) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x00062d6c) list_medium_line_t3_g2_g

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t1

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t2

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_t3_g2_t

0x2714,	// (0x000562bf) list_medium_line_right_icon_g1

0x2c4f,	// (0x000567fa) list_medium_line_right_icon_t1

0x2493,	// (0x0005603e) list_medium_line_t2_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g1

0x26e6,	// (0x00056291) list_medium_line_t2_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_t1

0x26e6,	// (0x00056291) list_medium_line_t2_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_t2_t

0x2493,	// (0x0005603e) list_medium_line_t3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g1

0x26e6,	// (0x00056291) list_medium_line_t3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_t1

0x26e6,	// (0x00056291) list_medium_line_t3_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_t2

0x26e6,	// (0x00056291) list_medium_line_t3_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_t3_t

0x2493,	// (0x0005603e) list_medium_line_g3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g3_g1

0x2493,	// (0x0005603e) list_medium_line_g3_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g3_g2

0x2493,	// (0x0005603e) list_medium_line_g3_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00062d5e) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00062d5e) list_medium_line_g3_g

0x26e6,	// (0x00056291) list_medium_line_g3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_g3_t1

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g1

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g2

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00062d5e) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00062d5e) list_medium_line_t2_g3_g

0x26e6,	// (0x00056291) list_medium_line_t2_g3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_g3_t1

0x26e6,	// (0x00056291) list_medium_line_t2_g3_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x00062de1) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x00062de1) list_medium_line_t2_g3_t

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g1_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g1

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g2_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g2

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g3_ParamLimits

0x2493,	// (0x0005603e) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00062d5e) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00062d5e) list_medium_line_t3_g3_g

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t1_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t1

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t2_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t2

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t3_ParamLimits

0x26e6,	// (0x00056291) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00062d65) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00062d65) list_medium_line_t3_g3_t

0x2714,	// (0x000562bf) list_medium_line_right_iconx2_g1

0x2714,	// (0x000562bf) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x00062f48) list_medium_line_right_iconx2_g

0x2c4f,	// (0x000567fa) list_medium_line_right_iconx2_t1

0x2714,	// (0x000562bf) list_medium_line_t2_right_iconx2_g1

0x2714,	// (0x000562bf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x00062f48) list_medium_line_t2_right_iconx2_g

0x2c4f,	// (0x000567fa) list_medium_line_t2_right_iconx2_t1

0x2c4f,	// (0x000567fa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc1d,	// (0x000637c8) list_medium_line_t2_right_iconx2_t

0x2c4f,	// (0x000567fa) list_medium_line_x4_t4_t1

0x2c4f,	// (0x000567fa) list_medium_line_x4_t4_t2

0x2c4f,	// (0x000567fa) list_medium_line_x4_t4_t3

0x2c4f,	// (0x000567fa) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x00062e33) list_medium_line_x4_t4_t

0xad43,	// (0x0005e8ee) tport_appsw_pane_ParamLimits

0xad43,	// (0x0005e8ee) tport_appsw_pane

0xad51,	// (0x0005e8fc) tport_contact_pane_ParamLimits

0xad51,	// (0x0005e8fc) tport_contact_pane

0xad61,	// (0x0005e90c) tport_listscroll_pane_ParamLimits

0xad61,	// (0x0005e90c) tport_listscroll_pane

0xad71,	// (0x0005e91c) cell_tport_appsw_pane_ParamLimits

0xad71,	// (0x0005e91c) cell_tport_appsw_pane

0x24a1,	// (0x0005604c) tport_appsw_pane_g1_ParamLimits

0x24a1,	// (0x0005604c) tport_appsw_pane_g1

0x0fb6,	// (0x00054b61) tport_contact_pane_g1

0x0934,	// (0x000544df) tport_contact_pane_t1

0x0fbf,	// (0x00054b6a) tport_contact_pane_t2

0x0001,

0xfc57,	// (0x00063802) tport_contact_pane_t

0x0fcd,	// (0x00054b78) list_tport_pane

0x0fd6,	// (0x00054b81) scroll_pane_cp_030

0xada4,	// (0x0005e94f) cell_tport_appsw_pane_g1

0xadb4,	// (0x0005e95f) cell_tport_appsw_pane_t1

0xadc2,	// (0x0005e96d) grid_highlight_pane_cp019

0xadca,	// (0x0005e975) list_tport_double_graphic_pane_ParamLimits

0xadca,	// (0x0005e975) list_tport_double_graphic_pane

0x223f,	// (0x00055dea) list_highlight_pane_cp023_ParamLimits

0x223f,	// (0x00055dea) list_highlight_pane_cp023

0xaddb,	// (0x0005e986) list_tport_double_graphic_pane_g1_ParamLimits

0xaddb,	// (0x0005e986) list_tport_double_graphic_pane_g1

0xade8,	// (0x0005e993) list_tport_double_graphic_pane_t1_ParamLimits

0xade8,	// (0x0005e993) list_tport_double_graphic_pane_t1

0xadfd,	// (0x0005e9a8) list_tport_double_graphic_pane_t2_ParamLimits

0xadfd,	// (0x0005e9a8) list_tport_double_graphic_pane_t2

0x0001,

0xfc63,	// (0x0006380e) list_tport_double_graphic_pane_t_ParamLimits

0xfc63,	// (0x0006380e) list_tport_double_graphic_pane_t

0x17ee,	// (0x00055399) main_cale_note_pane

0x8d04,	// (0x0005c8af) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8d04,	// (0x0005c8af) cell_vitu2_function_top_wide_pane_cp01

0xa662,	// (0x0005e20d) wait_bar_pane_cp05_ParamLimits

0x223f,	// (0x00055dea) listscroll_cmail_pane

0x0fe7,	// (0x00054b92) list_cmail_pane

0xae0f,	// (0x0005e9ba) list_cmail_body_pane

0xae36,	// (0x0005e9e1) list_single_cmail_header_caption_pane

0xae5f,	// (0x0005ea0a) list_single_cmail_header_detail_pane_ParamLimits

0xae5f,	// (0x0005ea0a) list_single_cmail_header_detail_pane

0x0ffe,	// (0x00054ba9) list_single_cmail_header_caption_pane_t1

0xae99,	// (0x0005ea44) list_single_cmail_header_detail_pane_g1_ParamLimits

0xae99,	// (0x0005ea44) list_single_cmail_header_detail_pane_g1

0x0112,	// (0x00053cbd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0112,	// (0x00053cbd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc68,	// (0x00063813) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc68,	// (0x00063813) list_single_cmail_header_detail_pane_g

0xaeaf,	// (0x0005ea5a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaeaf,	// (0x0005ea5a) list_single_cmail_header_detail_pane_t1

0xaeeb,	// (0x0005ea96) list_single_cmail_header_editor_pane_bg_ParamLimits

0xaeeb,	// (0x0005ea96) list_single_cmail_header_editor_pane_bg

0x0a91,	// (0x0005463c) list_cmail_body_pane_g1

0x1022,	// (0x00054bcd) list_cmail_body_pane_t1

0xea9a,	// (0x00062645) list_single_cmail_header_editor_pane_bg_g1

0x2925,	// (0x000564d0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeaaa,	// (0x00062655) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeaa2,	// (0x0006264d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed25,	// (0x000628d0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaca,	// (0x00062675) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeaba,	// (0x00062665) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeac2,	// (0x0006266d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2905,	// (0x000564b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xaf02,	// (0x0005eaad) calenote_gesture_pane_ParamLimits

0xaf02,	// (0x0005eaad) calenote_gesture_pane

0xaf1c,	// (0x0005eac7) calenote_window_pane_ParamLimits

0xaf1c,	// (0x0005eac7) calenote_window_pane

0x1030,	// (0x00054bdb) popup_note_window_cp01

0xaf34,	// (0x0005eadf) calenote_swipe_1_pane_ParamLimits

0xaf34,	// (0x0005eadf) calenote_swipe_1_pane

0xaa1e,	// (0x0005e5c9) calenote_swipe_2_pane_ParamLimits

0xaa1e,	// (0x0005e5c9) calenote_swipe_2_pane

0x0e02,	// (0x000549ad) calenote_swipe_1_pane_g1_ParamLimits

0x0e02,	// (0x000549ad) calenote_swipe_1_pane_g1

0x0e0f,	// (0x000549ba) calenote_swipe_1_pane_g2_ParamLimits

0x0e0f,	// (0x000549ba) calenote_swipe_1_pane_g2

0x0001,

0xfc05,	// (0x000637b0) calenote_swipe_1_pane_g_ParamLimits

0xfc05,	// (0x000637b0) calenote_swipe_1_pane_g

0x1042,	// (0x00054bed) calenote_swipe_1_pane_t1_ParamLimits

0x1042,	// (0x00054bed) calenote_swipe_1_pane_t1

0x0e02,	// (0x000549ad) calenote_swipe_2_pane_g1_ParamLimits

0x0e02,	// (0x000549ad) calenote_swipe_2_pane_g1

0x1061,	// (0x00054c0c) calenote_swipe_2_pane_g2_ParamLimits

0x1061,	// (0x00054c0c) calenote_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0006381f) calenote_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0006381f) calenote_swipe_2_pane_g

0x106d,	// (0x00054c18) calenote_swipe_2_pane_t1_ParamLimits

0x106d,	// (0x00054c18) calenote_swipe_2_pane_t1

0x17ee,	// (0x00055399) main_mup_navstr_pane

0x7b5a,	// (0x0005b705) main_mup3_pane_t7_ParamLimits

0x7b5a,	// (0x0005b705) main_mup3_pane_t7

0x8385,	// (0x0005bf30) main_mp4_pane_g6_ParamLimits

0x8385,	// (0x0005bf30) main_mp4_pane_g6

0x8723,	// (0x0005c2ce) main_image3_pane_t4_ParamLimits

0x8723,	// (0x0005c2ce) main_image3_pane_t4

0xaf47,	// (0x0005eaf2) popup_navstr_preview_pane_ParamLimits

0xaf47,	// (0x0005eaf2) popup_navstr_preview_pane

0xaf53,	// (0x0005eafe) scroll_navstr_pane_ParamLimits

0xaf53,	// (0x0005eafe) scroll_navstr_pane

0x17ee,	// (0x00055399) bg_popup_preview_window_pane_cp04

0x1094,	// (0x00054c3f) popup_navstr_preview_pane_t1

0xaf5f,	// (0x0005eb0a) scroll_navstr_pane_g1_ParamLimits

0xaf5f,	// (0x0005eb0a) scroll_navstr_pane_g1

0xaf6c,	// (0x0005eb17) scroll_navstr_pane_t1_ParamLimits

0xaf6c,	// (0x0005eb17) scroll_navstr_pane_t1

0x1039,	// (0x00054be4) bg_button_pane_cp014

0x1039,	// (0x00054be4) bg_button_pane_cp030

0xa931,	// (0x0005e4dc) list_double_fisheye_pane_g4_ParamLimits

0xa931,	// (0x0005e4dc) list_double_fisheye_pane_g4

0xa93d,	// (0x0005e4e8) list_double_fisheye_pane_g5_ParamLimits

0xa93d,	// (0x0005e4e8) list_double_fisheye_pane_g5

0xe83f,	// (0x000623ea) sp_fs_scroll_pane_cp03

0x0f22,	// (0x00054acd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0f2e,	// (0x00054ad9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc22,	// (0x000637cd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xab17,	// (0x0005e6c2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0ff6,	// (0x00054ba1) sp_fs_scroll_pane_cp02

0x2626,	// (0x000561d1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2626,	// (0x000561d1) popup_sp_fs_calendar_preview_list_single_pane

0x17ee,	// (0x00055399) main_cam6_pano_pane

0x70a5,	// (0x0005ac50) main_mup3_pane_ParamLimits

0x17ee,	// (0x00055399) main_phacti_pane

0xa537,	// (0x0005e0e2) bg_button_pane_cp11

0xa54f,	// (0x0005e0fa) main_mobtv_info_pane_g2_ParamLimits

0xa54f,	// (0x0005e0fa) main_mobtv_info_pane_g2

0x0001,

0xfb82,	// (0x0006372d) main_mobtv_info_pane_g_ParamLimits

0xfb82,	// (0x0006372d) main_mobtv_info_pane_g

0xa701,	// (0x0005e2ac) sc_clock_pane_t5_ParamLimits

0xa701,	// (0x0005e2ac) sc_clock_pane_t5

0xa7a2,	// (0x0005e34d) main_radioblah_pane_g1_ParamLimits

0x0d2e,	// (0x000548d9) main_radioblah_pane_t3_ParamLimits

0x0d2e,	// (0x000548d9) main_radioblah_pane_t3

0x0d46,	// (0x000548f1) main_radioblah_pane_t4_ParamLimits

0x0d46,	// (0x000548f1) main_radioblah_pane_t4

0xa7c0,	// (0x0005e36b) main_radioblah_text_pane_ParamLimits

0xa7c0,	// (0x0005e36b) main_radioblah_text_pane

0xa7cd,	// (0x0005e378) main_radioblah_info_pane_g1_ParamLimits

0xa862,	// (0x0005e40d) main_radioblah_info_pane_t4_ParamLimits

0xa862,	// (0x0005e40d) main_radioblah_info_pane_t4

0x223f,	// (0x00055dea) main_sp_fs_calendar_pane

0xaf7e,	// (0x0005eb29) main_phacti_pane_g1

0xaf86,	// (0x0005eb31) phacti_note_pane_ParamLimits

0xaf86,	// (0x0005eb31) phacti_note_pane

0x10ab,	// (0x00054c56) phacti_term_pane_ParamLimits

0x10ab,	// (0x00054c56) phacti_term_pane

0x10c0,	// (0x00054c6b) phacti_note_pane_t1_ParamLimits

0x10c0,	// (0x00054c6b) phacti_note_pane_t1

0x0142,	// (0x00053ced) phacti_term_pane_g1

0x014a,	// (0x00053cf5) phacti_term_pane_t1_ParamLimits

0x014a,	// (0x00053cf5) phacti_term_pane_t1

0x10d7,	// (0x00054c82) popup_sp_fs_calendar_preview_list_single_pane_g1

0x26c5,	// (0x00056270) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc7e,	// (0x00063829) popup_sp_fs_calendar_preview_list_single_pane_g

0x10df,	// (0x00054c8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x10df,	// (0x00054c8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x10f5,	// (0x00054ca0) aid_popup_sp_fs_bg_corner_pane

0x2714,	// (0x000562bf) popup_sp_fs_calendar_preview_bg_pane_g1

0x17ee,	// (0x00055399) popup_sp_fs_calendar_preview_bg_pane

0x10fd,	// (0x00054ca8) popup_sp_fs_calendar_preview_list_pane

0x322b,	// (0x00056dd6) bg_main_sp_fs_cale_pane_ParamLimits

0x322b,	// (0x00056dd6) bg_main_sp_fs_cale_pane

0x017d,	// (0x00053d28) listscroll_cale_mrui_pane_ParamLimits

0x017d,	// (0x00053d28) listscroll_cale_mrui_pane

0x0192,	// (0x00053d3d) listscroll_sp_fs_schedule_track_pane

0x019b,	// (0x00053d46) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x019b,	// (0x00053d46) main_sp_fs_ctrlbar_pane_cp01

0x1105,	// (0x00054cb0) main_sp_fs_ribbon_pane

0x01ae,	// (0x00053d59) popup_sp_fs_cale_preview_window

0xafe9,	// (0x0005eb94) list_single_sp_fs_schedule_track_pane_ParamLimits

0xafe9,	// (0x0005eb94) list_single_sp_fs_schedule_track_pane

0x2485,	// (0x00056030) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2485,	// (0x00056030) bg_sp_fs_highlight_list_pane_cp03

0xb009,	// (0x0005ebb4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb009,	// (0x0005ebb4) list_single_sp_fs_schedule_track_pane_g1

0xb015,	// (0x0005ebc0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb015,	// (0x0005ebc0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc83,	// (0x0006382e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc83,	// (0x0006382e) list_single_sp_fs_schedule_track_pane_g

0xb021,	// (0x0005ebcc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb021,	// (0x0005ebcc) list_single_sp_fs_schedule_track_pane_t1

0xb039,	// (0x0005ebe4) sp_fs_schedule_track_pane_ParamLimits

0xb039,	// (0x0005ebe4) sp_fs_schedule_track_pane

0x110d,	// (0x00054cb8) sp_fs_schedule_track_pane_g1

0x1115,	// (0x00054cc0) sp_fs_schedule_track_pane_g2

0x111d,	// (0x00054cc8) sp_fs_schedule_track_pane_g3

0x1125,	// (0x00054cd0) sp_fs_schedule_track_pane_g4

0x112d,	// (0x00054cd8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc88,	// (0x00063833) sp_fs_schedule_track_pane_g

0xea9a,	// (0x00062645) bg_sp_fs_schedule_viewer_highlight_g1

0x2925,	// (0x000564d0) bg_sp_fs_schedule_viewer_highlight_g2

0xeaa2,	// (0x0006264d) bg_sp_fs_schedule_viewer_highlight_g3

0xeaaa,	// (0x00062655) bg_sp_fs_schedule_viewer_highlight_g4

0xed25,	// (0x000628d0) bg_sp_fs_schedule_viewer_highlight_g5

0xeaba,	// (0x00062665) bg_sp_fs_schedule_viewer_highlight_g6

0xeac2,	// (0x0006266d) bg_sp_fs_schedule_viewer_highlight_g7

0xeaca,	// (0x00062675) bg_sp_fs_schedule_viewer_highlight_g8

0x2905,	// (0x000564b0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc93,	// (0x0006383e) bg_sp_fs_schedule_viewer_highlight_g

0x17ee,	// (0x00055399) bg_main_sp_fs_ribbon_pane

0xb049,	// (0x0005ebf4) main_sp_fs_ribbon_pane_g1

0x1135,	// (0x00054ce0) main_sp_fs_ribbon_pane_t1

0xb052,	// (0x0005ebfd) main_sp_fs_ribbon_pane_t2

0x1144,	// (0x00054cef) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca6,	// (0x00063851) main_sp_fs_ribbon_pane_t

0x1153,	// (0x00054cfe) main_sp_fs_ribbon_scheduler_pane

0x115b,	// (0x00054d06) bg_main_sp_fs_ribbon_pane_g1

0x1164,	// (0x00054d0f) bg_main_sp_fs_ribbon_pane_g2

0x116d,	// (0x00054d18) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcad,	// (0x00063858) bg_main_sp_fs_ribbon_pane_g

0x1175,	// (0x00054d20) main_sp_fs_ribbon_scheduler_pane_g1

0x117e,	// (0x00054d29) main_sp_fs_ribbon_scheduler_pane_g2

0x1187,	// (0x00054d32) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb4,	// (0x0006385f) main_sp_fs_ribbon_scheduler_pane_g

0x1190,	// (0x00054d3b) list_cale_mrui_pane

0xb061,	// (0x0005ec0c) sp_fs_scroll_pane_cp07_ParamLimits

0xb061,	// (0x0005ec0c) sp_fs_scroll_pane_cp07

0xb07d,	// (0x0005ec28) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb07d,	// (0x0005ec28) bg_sp_fs_schedule_viewer_highlight

0x119d,	// (0x00054d48) list_single_sp_fs_schedule_track_pane_cp01

0x11a5,	// (0x00054d50) list_sp_fs_schedule_track_pane

0x11ad,	// (0x00054d58) sp_fs_scroll_pane_cp06_ParamLimits

0x11ad,	// (0x00054d58) sp_fs_scroll_pane_cp06

0x2714,	// (0x000562bf) bgmain_sp_fs_calendar_pane_g1

0xb08a,	// (0x0005ec35) list_single_cale_mrui_pane_ParamLimits

0xb08a,	// (0x0005ec35) list_single_cale_mrui_pane

0x01c0,	// (0x00053d6b) list_single_cale_mrui_row_pane_ParamLimits

0x01c0,	// (0x00053d6b) list_single_cale_mrui_row_pane

0x01cd,	// (0x00053d78) list_single_cale_mrui_row_pane_g1_ParamLimits

0x01cd,	// (0x00053d78) list_single_cale_mrui_row_pane_g1

0x0205,	// (0x00053db0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0205,	// (0x00053db0) list_single_cale_mrui_row_pane_t1

0xb0b8,	// (0x0005ec63) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb0b8,	// (0x0005ec63) list_single_cale_mrui_row_pane_t2

0x0217,	// (0x00053dc2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0217,	// (0x00053dc2) list_single_cale_mrui_row_pane_t3

0x0246,	// (0x00053df1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0246,	// (0x00053df1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc2,	// (0x0006386d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc2,	// (0x0006386d) list_single_cale_mrui_row_pane_t

0xb11e,	// (0x0005ecc9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb11e,	// (0x0005ecc9) list_single_cmail_header_editor_pane_bg_cp01

0xb146,	// (0x0005ecf1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb146,	// (0x0005ecf1) list_single_cmail_header_editor_pane_bg_cp02

0xb162,	// (0x0005ed0d) main_radioblah_text_pane_t1_ParamLimits

0xb162,	// (0x0005ed0d) main_radioblah_text_pane_t1

0x11cc,	// (0x00054d77) cam6_indi_pane_cp01

0x11d4,	// (0x00054d7f) cam6_mode_pane_cp01

0x11dc,	// (0x00054d87) cam6_pano_pane

0x11e5,	// (0x00054d90) cam6_zoom_pane_cp01

0x11ed,	// (0x00054d98) cam6_pano_image_pane

0x11f8,	// (0x00054da3) cam6_pano_pane_g1

0x0a91,	// (0x0005463c) cam6_pano_pane_g2

0x1201,	// (0x00054dac) cam6_pano_pane_g3

0x120a,	// (0x00054db5) cam6_pano_pane_g4

0xe74e,	// (0x000622f9) cam6_pano_pane_g5

0x1213,	// (0x00054dbe) cam6_pano_pane_g6

0x0275,	// (0x00053e20) cam6_pano_pane_g7

0x121d,	// (0x00054dc8) cam6_pano_pane_g8

0x1226,	// (0x00054dd1) cam6_pano_pane_g9

0x0008,

0xfccb,	// (0x00063876) cam6_pano_pane_g

0x17ee,	// (0x00055399) main_browser_tag_pane

0x108c,	// (0x00054c37) grid_navstr_albumart_pane

0x1231,	// (0x00054ddc) cell_navstr_albumart_pane_ParamLimits

0x1231,	// (0x00054ddc) cell_navstr_albumart_pane

0x1251,	// (0x00054dfc) cell_navstr_albumart_pane_g1

0xdbf1,	// (0x0006179c) cell_navstr_albumart_pane_g2

0xdc01,	// (0x000617ac) cell_navstr_albumart_pane_g3

0xdbf9,	// (0x000617a4) cell_navstr_albumart_pane_g4

0x0003,

0xfcde,	// (0x00063889) cell_navstr_albumart_pane_g

0xb17d,	// (0x0005ed28) bt_list_pane_ParamLimits

0xb17d,	// (0x0005ed28) bt_list_pane

0xb19d,	// (0x0005ed48) bt_list_pane_t1

0xb1ac,	// (0x0005ed57) bt_list_pane_t2

0x0001,

0xfce7,	// (0x00063892) bt_list_pane_t

0x17ee,	// (0x00055399) main_cale_prevew_pane

0xb1bb,	// (0x0005ed66) popup_cale_preview_window_ParamLimits

0xb1bb,	// (0x0005ed66) popup_cale_preview_window

0x223f,	// (0x00055dea) bg_popup_preview_window_pane_cp05_ParamLimits

0x223f,	// (0x00055dea) bg_popup_preview_window_pane_cp05

0x1259,	// (0x00054e04) list_cale_preview_pane_ParamLimits

0x1259,	// (0x00054e04) list_cale_preview_pane

0xb1d4,	// (0x0005ed7f) list_double_cale_preview_pane_ParamLimits

0xb1d4,	// (0x0005ed7f) list_double_cale_preview_pane

0xb1e6,	// (0x0005ed91) list_single_cale_preview_pane_ParamLimits

0xb1e6,	// (0x0005ed91) list_single_cale_preview_pane

0xb1fc,	// (0x0005eda7) list_single_cale_preview_pane_g1

0xb204,	// (0x0005edaf) list_single_cale_preview_pane_t1_ParamLimits

0xb204,	// (0x0005edaf) list_single_cale_preview_pane_t1

0xb219,	// (0x0005edc4) list_double_cale_preview_pane_g1

0xb221,	// (0x0005edcc) list_double_cale_preview_pane_t1_ParamLimits

0xb221,	// (0x0005edcc) list_double_cale_preview_pane_t1

0xb236,	// (0x0005ede1) list_double_cale_preview_pane_t2_ParamLimits

0xb236,	// (0x0005ede1) list_double_cale_preview_pane_t2

0x0001,

0xfcec,	// (0x00063897) list_double_cale_preview_pane_t_ParamLimits

0xfcec,	// (0x00063897) list_double_cale_preview_pane_t

0x17ee,	// (0x00055399) main_ezdial_pane

0x223f,	// (0x00055dea) main_sp_fs_email_pane_ParamLimits

0xaa7c,	// (0x0005e627) cmail_ddmenu_btn01_pane_ParamLimits

0xaa7c,	// (0x0005e627) cmail_ddmenu_btn01_pane

0xaa99,	// (0x0005e644) cmail_ddmenu_btn02_pane_ParamLimits

0xaa99,	// (0x0005e644) cmail_ddmenu_btn02_pane

0xaab7,	// (0x0005e662) cmail_ddmenu_btn03_pane_ParamLimits

0xaab7,	// (0x0005e662) cmail_ddmenu_btn03_pane

0xab52,	// (0x0005e6fd) main_sp_fs_ctrlbar_pane_ParamLimits

0xab68,	// (0x0005e713) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xae0f,	// (0x0005e9ba) list_cmail_body_pane_ParamLimits

0x100c,	// (0x00054bb7) bg_button_pane_cp12

0x1015,	// (0x00054bc0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1015,	// (0x00054bc0) list_single_cmail_header_detail_pane_g3

0x011e,	// (0x00053cc9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x011e,	// (0x00053cc9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6f,	// (0x0006381a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6f,	// (0x0006381a) list_single_cmail_header_detail_pane_t

0x015f,	// (0x00053d0a) phacti_term_pane_t2_ParamLimits

0x015f,	// (0x00053d0a) phacti_term_pane_t2

0x0001,

0xfc79,	// (0x00063824) phacti_term_pane_t_ParamLimits

0xfc79,	// (0x00063824) phacti_term_pane_t

0x1265,	// (0x00054e10) aid_size_list_single_double

0xb24e,	// (0x0005edf9) popup_ezdial_listscroll_window

0xb26f,	// (0x0005ee1a) popup_number_entry_window_cp01

0x26de,	// (0x00056289) bg_popup_call_pane_cp09

0x1271,	// (0x00054e1c) ezdial_list_pane

0x1279,	// (0x00054e24) scroll_pane_cp23

0xcbc1,	// (0x0006076c) bg_button_pane_cp028_ParamLimits

0xcbc1,	// (0x0006076c) bg_button_pane_cp028

0xb27d,	// (0x0005ee28) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb27d,	// (0x0005ee28) cmail_ddmenu_btn01_pane_g1

0xb28d,	// (0x0005ee38) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb28d,	// (0x0005ee38) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf1,	// (0x0006389c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf1,	// (0x0006389c) cmail_ddmenu_btn01_pane_g

0x1281,	// (0x00054e2c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1281,	// (0x00054e2c) cmail_ddmenu_btn01_pane_t1

0x322b,	// (0x00056dd6) bg_button_pane_cp029_ParamLimits

0x322b,	// (0x00056dd6) bg_button_pane_cp029

0xb299,	// (0x0005ee44) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb299,	// (0x0005ee44) cmail_ddmenu_btn02_pane_g1

0xb2b1,	// (0x0005ee5c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb2b1,	// (0x0005ee5c) cmail_ddmenu_btn02_pane_t1

0x2485,	// (0x00056030) bg_button_pane_cp031_ParamLimits

0x2485,	// (0x00056030) bg_button_pane_cp031

0xb299,	// (0x0005ee44) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb299,	// (0x0005ee44) cmail_ddmenu_btn03_pane_g1

0xb2b1,	// (0x0005ee5c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb2b1,	// (0x0005ee5c) cmail_ddmenu_btn03_pane_t1

0x85c0,	// (0x0005c16b) cell_dialer2_keypad_pane_t1_ParamLimits

0x85da,	// (0x0005c185) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x85da,	// (0x0005c185) cell_dialer2_keypad_pane_t1_copy1

0xa378,	// (0x0005df23) ncimui_group_button_pane

0x223f,	// (0x00055dea) main_sp_fs_calendar_pane_ParamLimits

0xae36,	// (0x0005e9e1) list_single_cmail_header_caption_pane_ParamLimits

0x0174,	// (0x00053d1f) aid_recal_txt_sm_pane

0x17ee,	// (0x00055399) mian_recal_day_pane

0x01ae,	// (0x00053d59) popup_sp_fs_cale_preview_window_ParamLimits

0x1297,	// (0x00054e42) list_recal_day_pane

0x0298,	// (0x00053e43) list_single_recal_day_pane_ParamLimits

0x0298,	// (0x00053e43) list_single_recal_day_pane

0x12be,	// (0x00054e69) list_single_recal_day_pane_g1_ParamLimits

0x12be,	// (0x00054e69) list_single_recal_day_pane_g1

0x02aa,	// (0x00053e55) list_single_recal_day_pane_g2_ParamLimits

0x02aa,	// (0x00053e55) list_single_recal_day_pane_g2

0x02b6,	// (0x00053e61) list_single_recal_day_pane_g3_ParamLimits

0x02b6,	// (0x00053e61) list_single_recal_day_pane_g3

0xb2d5,	// (0x0005ee80) list_single_recal_day_pane_g4_ParamLimits

0xb2d5,	// (0x0005ee80) list_single_recal_day_pane_g4

0x02c2,	// (0x00053e6d) list_single_recal_day_pane_g5_ParamLimits

0x02c2,	// (0x00053e6d) list_single_recal_day_pane_g5

0x02ce,	// (0x00053e79) list_single_recal_day_pane_g6_ParamLimits

0x02ce,	// (0x00053e79) list_single_recal_day_pane_g6

0x0004,

0xfd00,	// (0x000638ab) list_single_recal_day_pane_g_ParamLimits

0xfd00,	// (0x000638ab) list_single_recal_day_pane_g

0x02e2,	// (0x00053e8d) list_single_recal_day_pane_t1

0x02f4,	// (0x00053e9f) list_single_recal_day_pane_t2

0x0001,

0xfd0b,	// (0x000638b6) list_single_recal_day_pane_t

0xb2ed,	// (0x0005ee98) ncimui_query_button_pane_ParamLimits

0xb2ed,	// (0x0005ee98) ncimui_query_button_pane

0xb2fd,	// (0x0005eea8) ncimui_query_button_pane_t1_ParamLimits

0xb2fd,	// (0x0005eea8) ncimui_query_button_pane_t1

0x12ca,	// (0x00054e75) ncimui_query_button_pane_t2_ParamLimits

0x12ca,	// (0x00054e75) ncimui_query_button_pane_t2

0x0001,

0xfd10,	// (0x000638bb) ncimui_query_button_pane_t_ParamLimits

0xfd10,	// (0x000638bb) ncimui_query_button_pane_t

0xb310,	// (0x0005eebb) query_button_pane_ParamLimits

0xb310,	// (0x0005eebb) query_button_pane

0x17ee,	// (0x00055399) bg_button_pane_cp0028

0x12dd,	// (0x00054e88) query_button_pane_t1

0x70c1,	// (0x0005ac6c) main_tport_pane_ParamLimits

0xad19,	// (0x0005e8c4) bg_popup_window_pane_cp01_ParamLimits

0xad19,	// (0x0005e8c4) bg_popup_window_pane_cp01

0xad27,	// (0x0005e8d2) heading_pane_cp08_ParamLimits

0xad27,	// (0x0005e8d2) heading_pane_cp08

0xad35,	// (0x0005e8e0) heading_pane_cp07_ParamLimits

0xad35,	// (0x0005e8e0) heading_pane_cp07

0xada4,	// (0x0005e94f) cell_tport_appsw_pane_g2

0x0002,

0xfc5c,	// (0x00063807) cell_tport_appsw_pane_g

0xe39c,	// (0x00061f47) input_candi_list_open_g1

0x2af0,	// (0x0005669b) list_cale_time_pane_g6_ParamLimits

0x2af0,	// (0x0005669b) list_cale_time_pane_g6

0x75bc,	// (0x0005b167) aid_size_touch_calib_1_ParamLimits

0x75bc,	// (0x0005b167) aid_size_touch_calib_1

0x75c8,	// (0x0005b173) aid_size_touch_calib_2_ParamLimits

0x75c8,	// (0x0005b173) aid_size_touch_calib_2

0x75d6,	// (0x0005b181) aid_size_touch_calib_3_ParamLimits

0x75d6,	// (0x0005b181) aid_size_touch_calib_3

0x75e6,	// (0x0005b191) aid_size_touch_calib_4_ParamLimits

0x75e6,	// (0x0005b191) aid_size_touch_calib_4

0x75f4,	// (0x0005b19f) main_touch_calib_button_group_pane_ParamLimits

0x75f4,	// (0x0005b19f) main_touch_calib_button_group_pane

0x7602,	// (0x0005b1ad) main_touch_calib_pane_g1_ParamLimits

0x760e,	// (0x0005b1b9) main_touch_calib_pane_g2_ParamLimits

0x761a,	// (0x0005b1c5) main_touch_calib_pane_g3_ParamLimits

0x7626,	// (0x0005b1d1) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x00063249) main_touch_calib_pane_g_ParamLimits

0x7632,	// (0x0005b1dd) main_touch_calib_pane_t1_ParamLimits

0x764b,	// (0x0005b1f6) main_touch_calib_pane_t2_ParamLimits

0x7664,	// (0x0005b20f) main_touch_calib_pane_t3_ParamLimits

0x767a,	// (0x0005b225) main_touch_calib_pane_t4_ParamLimits

0x7690,	// (0x0005b23b) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x00063252) main_touch_calib_pane_t_ParamLimits

0xe4f4,	// (0x0006209f) list_single_fp_cale_pane_g3_ParamLimits

0xe4f4,	// (0x0006209f) list_single_fp_cale_pane_g3

0x70a5,	// (0x0005ac50) bg_button_pane_cp012_ParamLimits

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp03_ParamLimits

0x947e,	// (0x0005d029) cell_vitu2_function_top_pane_g1_ParamLimits

0x70a5,	// (0x0005ac50) bg_vkb2_func_pane_cp04_ParamLimits

0xa300,	// (0x0005deab) main_ncimui_button_group_pane_ParamLimits

0xa300,	// (0x0005deab) main_ncimui_button_group_pane

0xa366,	// (0x0005df11) main_ncimui_pane_t3_ParamLimits

0xa366,	// (0x0005df11) main_ncimui_pane_t3

0x10a2,	// (0x00054c4d) phacti_button_group_pane

0x1265,	// (0x00054e10) aid_size_list_single_double_ParamLimits

0xb24e,	// (0x0005edf9) popup_ezdial_listscroll_window_ParamLimits

0xb26f,	// (0x0005ee1a) popup_number_entry_window_cp01_ParamLimits

0xb31d,	// (0x0005eec8) phacti_button_pane_ParamLimits

0xb31d,	// (0x0005eec8) phacti_button_pane

0x17ee,	// (0x00055399) bg_button_pane_cp14

0x12eb,	// (0x00054e96) phacti_button_pane_t1

0xb32e,	// (0x0005eed9) main_touch_calib_button_pane_ParamLimits

0xb32e,	// (0x0005eed9) main_touch_calib_button_pane

0x2505,	// (0x000560b0) bg_button_pane_cp18_ParamLimits

0x2505,	// (0x000560b0) bg_button_pane_cp18

0x12f9,	// (0x00054ea4) main_touch_calib_button_pane_t1_ParamLimits

0x12f9,	// (0x00054ea4) main_touch_calib_button_pane_t1

0x130f,	// (0x00054eba) main_touch_calib_button_pane_t2_ParamLimits

0x130f,	// (0x00054eba) main_touch_calib_button_pane_t2

0x0001,

0xfd15,	// (0x000638c0) main_touch_calib_button_pane_t_ParamLimits

0xfd15,	// (0x000638c0) main_touch_calib_button_pane_t

0x17ee,	// (0x00055399) cell_ncimui_button_pane

0x17ee,	// (0x00055399) bg_button_pane_cp032

0x132d,	// (0x00054ed8) cell_ncimui_button_pane_t1

0x8636,	// (0x0005c1e1) image3_infobar_pane_ParamLimits

0x8636,	// (0x0005c1e1) image3_infobar_pane

0xa723,	// (0x0005e2ce) fs_bigclock_status_pane_ParamLimits

0xa723,	// (0x0005e2ce) fs_bigclock_status_pane

0xa730,	// (0x0005e2db) main_fs_bigclock_clock_pane_ParamLimits

0xa730,	// (0x0005e2db) main_fs_bigclock_clock_pane

0xa744,	// (0x0005e2ef) main_fs_bigclock_indi_pane_ParamLimits

0xa744,	// (0x0005e2ef) main_fs_bigclock_indi_pane

0xa76c,	// (0x0005e317) main_fs_bigclock_swipe_pane_ParamLimits

0xa76c,	// (0x0005e317) main_fs_bigclock_swipe_pane

0x17ee,	// (0x00055399) main_fs_clock_dumped_data

0x0b9e,	// (0x00054749) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0b9e,	// (0x00054749) list_single_fs_bigclock_indicator_pane_g1

0x0bb9,	// (0x00054764) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0bb9,	// (0x00054764) list_single_fs_bigclock_indicator_pane_g2

0x0bd3,	// (0x0005477e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0bd3,	// (0x0005477e) list_single_fs_bigclock_indicator_pane_g3

0x0bed,	// (0x00054798) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0bed,	// (0x00054798) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb6,	// (0x00063761) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb6,	// (0x00063761) list_single_fs_bigclock_indicator_pane_g

0x0c18,	// (0x000547c3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0c18,	// (0x000547c3) list_single_fs_bigclock_indicator_pane_t1

0x0c40,	// (0x000547eb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0c40,	// (0x000547eb) list_single_fs_bigclock_indicator_pane_t2

0x0c68,	// (0x00054813) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0c68,	// (0x00054813) list_single_fs_bigclock_indicator_pane_t3

0x0c90,	// (0x0005483b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0c90,	// (0x0005483b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc1,	// (0x0006376c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc1,	// (0x0006376c) list_single_fs_bigclock_indicator_pane_t

0x133b,	// (0x00054ee6) image3_infobar_fav_pane_ParamLimits

0x133b,	// (0x00054ee6) image3_infobar_fav_pane

0x134b,	// (0x00054ef6) image3_infobar_loc_pane_ParamLimits

0x134b,	// (0x00054ef6) image3_infobar_loc_pane

0x135f,	// (0x00054f0a) image3_infobar_time_pane_ParamLimits

0x135f,	// (0x00054f0a) image3_infobar_time_pane

0x2714,	// (0x000562bf) image3_infobar_time_pane_g1

0x136f,	// (0x00054f1a) image3_infobar_time_pane_t1

0x2714,	// (0x000562bf) image3_infobar_loc_pane_g1

0x137d,	// (0x00054f28) image3_infobar_loc_pane_g2

0x0001,

0xfd1a,	// (0x000638c5) image3_infobar_loc_pane_g

0x1385,	// (0x00054f30) image3_infobar_loc_pane_t1

0x2714,	// (0x000562bf) image3_infobar_fav_pane_g1

0x1393,	// (0x00054f3e) image3_infobar_fav_pane_g2

0x0001,

0xfd1f,	// (0x000638ca) image3_infobar_fav_pane_g

0x139b,	// (0x00054f46) fs_bigclock_status_battery_pane

0x13a4,	// (0x00054f4f) fs_bigclock_status_signal_pane

0x13ad,	// (0x00054f58) fs_bigclock_status_title_pane

0x13b6,	// (0x00054f61) fs_bigclock_status_signal_pane_g1

0x13bf,	// (0x00054f6a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd24,	// (0x000638cf) fs_bigclock_status_signal_pane_g

0x13c7,	// (0x00054f72) fs_bigclock_status_battery_pane_g1

0x13d0,	// (0x00054f7b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd29,	// (0x000638d4) fs_bigclock_status_battery_pane_g

0x13d8,	// (0x00054f83) fs_bigclock_status_title_pane_t1

0xb33e,	// (0x0005eee9) main_fs_bigclock_clock_pane_g1

0xb33e,	// (0x0005eee9) main_fs_bigclock_clock_pane_g2

0xb34b,	// (0x0005eef6) main_fs_bigclock_clock_pane_g3

0xb34b,	// (0x0005eef6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd2e,	// (0x000638d9) main_fs_bigclock_clock_pane_g

0xb357,	// (0x0005ef02) main_fs_bigclock_clock_pane_t1

0xb36a,	// (0x0005ef15) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd37,	// (0x000638e2) main_fs_bigclock_clock_pane_t

0x13e6,	// (0x00054f91) list_single_fs_bigclock_indicator_pane_ParamLimits

0x13e6,	// (0x00054f91) list_single_fs_bigclock_indicator_pane

0x13f7,	// (0x00054fa2) list_single_fs_bigclock_pane_ParamLimits

0x13f7,	// (0x00054fa2) list_single_fs_bigclock_pane

0x141d,	// (0x00054fc8) main_fs_bigclock_indicator_pane_t1

0x142c,	// (0x00054fd7) list_single_fs_bigclock_pane_g1

0x1434,	// (0x00054fdf) list_single_fs_bigclock_pane_t1

0x2714,	// (0x000562bf) main_fs_bigclock_swipe_pane_g1

0x1477,	// (0x00055022) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd48,	// (0x000638f3) main_fs_bigclock_swipe_pane_g

0x147f,	// (0x0005502a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x147f,	// (0x0005502a) main_fs_bigclock_swipe_pane_t1

0x6297,	// (0x00059e42) call_type_pane_ParamLimits

0x17ee,	// (0x00055399) main_btmg_pane

0x01f9,	// (0x00053da4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x01f9,	// (0x00053da4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbb,	// (0x00063866) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbb,	// (0x00063866) list_single_cale_mrui_row_pane_g

0x0287,	// (0x00053e32) list_recal_vselct_arw_lo_pane

0x12b6,	// (0x00054e61) list_recal_vselct_arw_up_pane

0x028f,	// (0x00053e3a) list_recal_vselct_pane

0xb3c1,	// (0x0005ef6c) btmg_button_pane

0xb3cd,	// (0x0005ef78) main_btmg_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp044

0x149c,	// (0x00055047) btmg_button_pane_t1

0xdd41,	// (0x000618ec) aid_listscroll_gen

0x223f,	// (0x00055dea) main_cntbar_detail_pane

0x0fdf,	// (0x00054b8a) list_cmail_folder_pane

0xe83f,	// (0x000623ea) sp_fs_scroll_pane_cp03_ParamLimits

0xb3d5,	// (0x0005ef80) list_single_fs_dyc_pane_cp01_ParamLimits

0xb3d5,	// (0x0005ef80) list_single_fs_dyc_pane_cp01

0x14aa,	// (0x00055055) aid_size_cmail_indent

0x0306,	// (0x00053eb1) list_single_dyc_row_pane_cp01

0xb421,	// (0x0005efcc) cntbar_detail_list_pane_ParamLimits

0xb421,	// (0x0005efcc) cntbar_detail_list_pane

0xb45b,	// (0x0005f006) main_cntbar_detail_cont_pane_ParamLimits

0xb45b,	// (0x0005f006) main_cntbar_detail_cont_pane

0x628b,	// (0x00059e36) scroll_pane_cp032_ParamLimits

0x628b,	// (0x00059e36) scroll_pane_cp032

0xb467,	// (0x0005f012) cntbar_detail_list_event_pane_ParamLimits

0xb467,	// (0x0005f012) cntbar_detail_list_event_pane

0xb42d,	// (0x0005efd8) cntbar_detail_list_shct_pane

0x2973,	// (0x0005651e) aid_list_gen

0x14b3,	// (0x0005505e) aid_scroll

0x14bc,	// (0x00055067) aid_size_touch_scroll_bar

0xb47b,	// (0x0005f026) aid_list_double

0xb484,	// (0x0005f02f) aid_list_single

0x14c5,	// (0x00055070) aid_list_single_lg

0xb48d,	// (0x0005f038) aid_list_z_g_a_sm

0xb495,	// (0x0005f040) aid_list_z_g_d

0xb49d,	// (0x0005f048) aid_txt_z_prm

0xb4ab,	// (0x0005f056) aid_txt_z_prm_cp01

0xb4b9,	// (0x0005f064) aid_txt_z_sec

0xb4c7,	// (0x0005f072) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb4c7,	// (0x0005f072) main_cntbar_detail_cont_pane_g1

0xb4d4,	// (0x0005f07f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb4d4,	// (0x0005f07f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd4d,	// (0x000638f8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd4d,	// (0x000638f8) main_cntbar_detail_cont_pane_g

0x14ce,	// (0x00055079) main_cntbar_detail_cont_pane_t1

0x14dc,	// (0x00055087) main_cntbar_detail_cont_pane_t2

0x14ea,	// (0x00055095) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd52,	// (0x000638fd) main_cntbar_detail_cont_pane_t

0xb4e0,	// (0x0005f08b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb4e0,	// (0x0005f08b) cell_cntbar_detail_list_shct_pane

0x14f8,	// (0x000550a3) cntbar_detail_list_shct_pane_g1

0x1501,	// (0x000550ac) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd59,	// (0x00063904) cntbar_detail_list_shct_pane_g

0xb4f4,	// (0x0005f09f) cntbar_detail_list_event_pane_g1_ParamLimits

0xb4f4,	// (0x0005f09f) cntbar_detail_list_event_pane_g1

0xb500,	// (0x0005f0ab) cntbar_detail_list_event_pane_g2_ParamLimits

0xb500,	// (0x0005f0ab) cntbar_detail_list_event_pane_g2

0x0005,

0xfd5e,	// (0x00063909) cntbar_detail_list_event_pane_g_ParamLimits

0xfd5e,	// (0x00063909) cntbar_detail_list_event_pane_g

0xb56c,	// (0x0005f117) cntbar_detail_list_event_pane_t1_ParamLimits

0xb56c,	// (0x0005f117) cntbar_detail_list_event_pane_t1

0xb581,	// (0x0005f12c) cntbar_detail_list_event_pane_t2_ParamLimits

0xb581,	// (0x0005f12c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6b,	// (0x00063916) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6b,	// (0x00063916) cntbar_detail_list_event_pane_t

0x2714,	// (0x000562bf) cell_cntbar_detail_list_shct_pane_g1

0x30f6,	// (0x00056ca1) navi_pane_mv_g3

0x223f,	// (0x00055dea) main_cntbar_detail_pane_ParamLimits

0x17ee,	// (0x00055399) main_notif_wgt_pane

0x82c0,	// (0x0005be6b) aid_tch_main_mp4_pane_g4

0x851f,	// (0x0005c0ca) popup_slider_window_cp02

0x027d,	// (0x00053e28) list_recal_day_event_pane

0xb401,	// (0x0005efac) cntbar_detail_btn_pane_ParamLimits

0xb401,	// (0x0005efac) cntbar_detail_btn_pane

0xb411,	// (0x0005efbc) cntbar_detail_btn_pane_cp01_ParamLimits

0xb411,	// (0x0005efbc) cntbar_detail_btn_pane_cp01

0xb42d,	// (0x0005efd8) cntbar_detail_list_shct_pane_ParamLimits

0xb439,	// (0x0005efe4) cntbar_detail_pane_g1_ParamLimits

0xb439,	// (0x0005efe4) cntbar_detail_pane_g1

0xb445,	// (0x0005eff0) cntbar_detail_pane_t1_ParamLimits

0xb445,	// (0x0005eff0) cntbar_detail_pane_t1

0xb50c,	// (0x0005f0b7) cntbar_detail_list_event_pane_g3_ParamLimits

0xb50c,	// (0x0005f0b7) cntbar_detail_list_event_pane_g3

0xb524,	// (0x0005f0cf) cntbar_detail_list_event_pane_g4_ParamLimits

0xb524,	// (0x0005f0cf) cntbar_detail_list_event_pane_g4

0xb53c,	// (0x0005f0e7) cntbar_detail_list_event_pane_g5_ParamLimits

0xb53c,	// (0x0005f0e7) cntbar_detail_list_event_pane_g5

0xb554,	// (0x0005f0ff) cntbar_detail_list_event_pane_g6_ParamLimits

0xb554,	// (0x0005f0ff) cntbar_detail_list_event_pane_g6

0xb596,	// (0x0005f141) cntbar_detail_list_event_pane_t3_ParamLimits

0xb596,	// (0x0005f141) cntbar_detail_list_event_pane_t3

0xb5a8,	// (0x0005f153) popup_notif_wgt_window_ParamLimits

0xb5a8,	// (0x0005f153) popup_notif_wgt_window

0xb5b8,	// (0x0005f163) popup_submenu_window_cp01_ParamLimits

0xb5b8,	// (0x0005f163) popup_submenu_window_cp01

0x26de,	// (0x00056289) bg_popup_window_pane_cp10

0x150a,	// (0x000550b5) listscroll_notif_wgt_pane

0x151c,	// (0x000550c7) list_notif_wgt_window

0x1525,	// (0x000550d0) scroll_pane_cp033

0xb5ca,	// (0x0005f175) list_notif_wgt_row_pane_ParamLimits

0xb5ca,	// (0x0005f175) list_notif_wgt_row_pane

0x152e,	// (0x000550d9) aid_size_list_notif_wgt_del

0x153b,	// (0x000550e6) list_notif_wgt_row_pane_g1

0x1547,	// (0x000550f2) list_notif_wgt_row_pane_g2

0x1556,	// (0x00055101) list_notif_wgt_row_pane_g3

0x0002,

0xfd72,	// (0x0006391d) list_notif_wgt_row_pane_g

0x1563,	// (0x0005510e) list_notif_wgt_row_pane_t1

0x1579,	// (0x00055124) list_notif_wgt_row_pane_t2

0x158b,	// (0x00055136) list_notif_wgt_row_pane_t3

0x0002,

0xfd79,	// (0x00063924) list_notif_wgt_row_pane_t

0xed3f,	// (0x000628ea) list_recal_day_event_pane_g1

0x159d,	// (0x00055148) list_recal_day_event_pane_t1

0x17ee,	// (0x00055399) bg_button_pane_cp045

0x15ac,	// (0x00055157) cntbar_detail_btn_pane_t1

0x322b,	// (0x00056dd6) main_callh_pane_ParamLimits

0x322b,	// (0x00056dd6) main_callh_pane

0x17ee,	// (0x00055399) main_coverflow0_pane

0x17ee,	// (0x00055399) main_wgtman_pane

0xa784,	// (0x0005e32f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa784,	// (0x0005e32f) main_fs_bigclock_unlock_btn_pane

0xad9c,	// (0x0005e947) bg_button_pane_cp16

0xadac,	// (0x0005e957) cell_tport_appsw_pane_g3

0xb5dc,	// (0x0005f187) cf0_flow_pane_ParamLimits

0xb5dc,	// (0x0005f187) cf0_flow_pane

0x15ba,	// (0x00055165) listscroll_cf0_pane

0x15c5,	// (0x00055170) main_cf0_pane_g1

0xb5eb,	// (0x0005f196) main_cf0_pane_t1_ParamLimits

0xb5eb,	// (0x0005f196) main_cf0_pane_t1

0xb5ff,	// (0x0005f1aa) main_cf0_pane_t2_ParamLimits

0xb5ff,	// (0x0005f1aa) main_cf0_pane_t2

0x0001,

0xfd85,	// (0x00063930) main_cf0_pane_t_ParamLimits

0xfd85,	// (0x00063930) main_cf0_pane_t

0x15d7,	// (0x00055182) scroll_pane_cp11

0xb613,	// (0x0005f1be) cf0_flow_pane_g1

0xb61b,	// (0x0005f1c6) cf0_flow_pane_g2

0x0001,

0xfd8a,	// (0x00063935) cf0_flow_pane_g

0xb623,	// (0x0005f1ce) cf0_flow_pane_t1

0x17ee,	// (0x00055399) main_call6_pane

0x17ee,	// (0x00055399) main_calllock_pane

0xb631,	// (0x0005f1dc) call6_btn_grp_pane_ParamLimits

0xb631,	// (0x0005f1dc) call6_btn_grp_pane

0xb640,	// (0x0005f1eb) call6_pane_g1_ParamLimits

0xb640,	// (0x0005f1eb) call6_pane_g1

0xb650,	// (0x0005f1fb) popup_call6_1st_window_ParamLimits

0xb650,	// (0x0005f1fb) popup_call6_1st_window

0xb65e,	// (0x0005f209) popup_call6_2nd_window_ParamLimits

0xb65e,	// (0x0005f209) popup_call6_2nd_window

0xb66c,	// (0x0005f217) cell_call6_btn_pane_ParamLimits

0xb66c,	// (0x0005f217) cell_call6_btn_pane

0x26de,	// (0x00056289) bg_popup_call2_in_pane_cp03

0x15e2,	// (0x0005518d) popup_call6_1st_window_g1

0x15ea,	// (0x00055195) popup_call6_1st_window_g2

0x15f2,	// (0x0005519d) popup_call6_1st_window_g3

0x0002,

0xfd8f,	// (0x0006393a) popup_call6_1st_window_g

0x15fa,	// (0x000551a5) popup_call6_1st_window_t1

0x1609,	// (0x000551b4) popup_call6_1st_window_t2

0x1617,	// (0x000551c2) popup_call6_1st_window_t3

0x0002,

0xfd96,	// (0x00063941) popup_call6_1st_window_t

0x26de,	// (0x00056289) bg_popup_call2_in_pane_cp04

0x1625,	// (0x000551d0) popup_call6_2nd_window_g1

0x162d,	// (0x000551d8) popup_call6_2nd_window_g2

0x1635,	// (0x000551e0) popup_call6_2nd_window_g3

0x0002,

0xfd9d,	// (0x00063948) popup_call6_2nd_window_g

0x163d,	// (0x000551e8) popup_call6_2nd_window_t1

0x4508,	// (0x000580b3) bg_button_pane_cp15

0xb67b,	// (0x0005f226) cell_call6_btn_pane_g1

0xb684,	// (0x0005f22f) cell_call6_btn_pane_t1

0xb693,	// (0x0005f23e) listscroll_wgtman_pane_ParamLimits

0xb693,	// (0x0005f23e) listscroll_wgtman_pane

0xb6af,	// (0x0005f25a) wgtman_btn_pane_ParamLimits

0xb6af,	// (0x0005f25a) wgtman_btn_pane

0x2efd,	// (0x00056aa8) aid_scroll_copy1

0x1655,	// (0x00055200) list_wgtman_pane

0xb6e4,	// (0x0005f28f) wgtman_btn_pane_g1_ParamLimits

0xb6e4,	// (0x0005f28f) wgtman_btn_pane_g1

0xb70c,	// (0x0005f2b7) wgtman_btn_pane_t1_ParamLimits

0xb70c,	// (0x0005f2b7) wgtman_btn_pane_t1

0x165f,	// (0x0005520a) wgtman_btn_pane_t2_ParamLimits

0x165f,	// (0x0005520a) wgtman_btn_pane_t2

0x0001,

0xfda4,	// (0x0006394f) wgtman_btn_pane_t_ParamLimits

0xfda4,	// (0x0006394f) wgtman_btn_pane_t

0xb743,	// (0x0005f2ee) listrow_wgtman_pane_ParamLimits

0xb743,	// (0x0005f2ee) listrow_wgtman_pane

0xb75e,	// (0x0005f309) listrow_wgtman_pane_g1

0xb76b,	// (0x0005f316) listrow_wgtman_pane_g2

0x0001,

0xfda9,	// (0x00063954) listrow_wgtman_pane_g

0xb789,	// (0x0005f334) listrow_wgtman_pane_t1

0xb7a1,	// (0x0005f34c) listrow_wgtman_pane_t2

0x0001,

0xfdae,	// (0x00063959) listrow_wgtman_pane_t

0xb7c7,	// (0x0005f372) wait_bar_pane_cp09

0x1676,	// (0x00055221) main_calllock_btn_pane

0x1680,	// (0x0005522b) main_calllock_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp17

0x164c,	// (0x000551f7) main_calllock_btn_pane_g1

0x1688,	// (0x00055233) main_calllock_btn_pane_t1

0x17ee,	// (0x00055399) main_dialer3_pane

0x17ee,	// (0x00055399) main_fmrd2_pane

0x2714,	// (0x000562bf) main_fs_bigclock_unlock_btn_pane_g1

0xb7e1,	// (0x0005f38c) main_fs_bigclock_unlock_btn_pane_t1

0xb7ef,	// (0x0005f39a) area_fmrd2_info_pane_ParamLimits

0xb7ef,	// (0x0005f39a) area_fmrd2_info_pane

0xb7fd,	// (0x0005f3a8) area_fmrd2_visual_pane_ParamLimits

0xb7fd,	// (0x0005f3a8) area_fmrd2_visual_pane

0xb80b,	// (0x0005f3b6) fmrd2_indi_pane_ParamLimits

0xb80b,	// (0x0005f3b6) fmrd2_indi_pane

0xb818,	// (0x0005f3c3) area_fmrd2_visual_pane_g1

0xb820,	// (0x0005f3cb) area_fmrd2_visual_pane_t1

0xb830,	// (0x0005f3db) area_fmrd2_visual_pane_t2

0xb840,	// (0x0005f3eb) area_fmrd2_visual_pane_t3

0x0002,

0xfdb8,	// (0x00063963) area_fmrd2_visual_pane_t

0xb850,	// (0x0005f3fb) area_fmrd2_info_pane_g1

0xb858,	// (0x0005f403) area_fmrd2_info_pane_t1

0xb868,	// (0x0005f413) area_fmrd2_info_pane_t2

0xb878,	// (0x0005f423) area_fmrd2_info_pane_t3

0xb888,	// (0x0005f433) area_fmrd2_info_pane_t4

0x0003,

0xfdbf,	// (0x0006396a) area_fmrd2_info_pane_t

0xb896,	// (0x0005f441) fmrd2_indi_pane_t1

0xb8a6,	// (0x0005f451) fmrd2_indi_pane_t2

0xb8b6,	// (0x0005f461) fmrd2_indi_pane_t3

0x0002,

0xfdc8,	// (0x00063973) fmrd2_indi_pane_t

0x0bfc,	// (0x000547a7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0bfc,	// (0x000547a7) list_single_fs_bigclock_indicator_pane_g5

0x0cad,	// (0x00054858) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0cad,	// (0x00054858) list_single_fs_bigclock_indicator_pane_t5

0xaf9c,	// (0x0005eb47) aid_cell_bcale_month_pane_ParamLimits

0xaf9c,	// (0x0005eb47) aid_cell_bcale_month_pane

0xafba,	// (0x0005eb65) bcale_month_pane_ParamLimits

0xafba,	// (0x0005eb65) bcale_month_pane

0xafd8,	// (0x0005eb83) bcale_preview_pane_ParamLimits

0xafd8,	// (0x0005eb83) bcale_preview_pane

0x1434,	// (0x00054fdf) list_single_fs_bigclock_pane_t1_ParamLimits

0x1453,	// (0x00054ffe) list_single_fs_bigclock_pane_t2_ParamLimits

0x1453,	// (0x00054ffe) list_single_fs_bigclock_pane_t2

0x0001,

0xfd43,	// (0x000638ee) list_single_fs_bigclock_pane_t_ParamLimits

0xfd43,	// (0x000638ee) list_single_fs_bigclock_pane_t

0xb7d9,	// (0x0005f384) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb3,	// (0x0006395e) main_fs_bigclock_unlock_btn_pane_g

0xb8c4,	// (0x0005f46f) aid_dia3_key_size_ParamLimits

0xb8c4,	// (0x0005f46f) aid_dia3_key_size

0xb8d0,	// (0x0005f47b) aid_dia3_listrow_size_ParamLimits

0xb8d0,	// (0x0005f47b) aid_dia3_listrow_size

0xb8e0,	// (0x0005f48b) dia3_keypad_fun_pane_ParamLimits

0xb8e0,	// (0x0005f48b) dia3_keypad_fun_pane

0xb8f2,	// (0x0005f49d) dia3_keypad_num_pane_ParamLimits

0xb8f2,	// (0x0005f49d) dia3_keypad_num_pane

0xb904,	// (0x0005f4af) dia3_listscroll_pane_ParamLimits

0xb904,	// (0x0005f4af) dia3_listscroll_pane

0xb912,	// (0x0005f4bd) dia3_numentry_pane_ParamLimits

0xb912,	// (0x0005f4bd) dia3_numentry_pane

0x1697,	// (0x00055242) dia3_list_pane

0x16a2,	// (0x0005524d) scroll_pane_cp12

0x17ee,	// (0x00055399) bg_dia3_numentry_pane

0xb920,	// (0x0005f4cb) dia3_numentry_pane_t1

0xb92f,	// (0x0005f4da) cell_dia3_key_num_pane

0xb937,	// (0x0005f4e2) cell_dia3_key0_fun_pane_ParamLimits

0xb937,	// (0x0005f4e2) cell_dia3_key0_fun_pane

0xb944,	// (0x0005f4ef) cell_dia3_key1_fun_pane_ParamLimits

0xb944,	// (0x0005f4ef) cell_dia3_key1_fun_pane

0xb951,	// (0x0005f4fc) dia3_listrow_pane

0x094f,	// (0x000544fa) bg_dia3_numentry_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp21

0x16ad,	// (0x00055258) cell_dia3_key_num_pane_t1

0x16bb,	// (0x00055266) cell_dia3_key_num_pane_t2

0x16ca,	// (0x00055275) cell_dia3_key_num_pane_t3

0x16d9,	// (0x00055284) cell_dia3_key_num_pane_t4

0x0003,

0xfdcf,	// (0x0006397a) cell_dia3_key_num_pane_t

0x17ee,	// (0x00055399) bg_button_pane_cp19

0xb95e,	// (0x0005f509) cell_dia3_key0_fun_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp20

0xb966,	// (0x0005f511) cell_dia3_key1_fun_pane_g1

0xb96e,	// (0x0005f519) area_left_week_number_pane

0xb981,	// (0x0005f52c) area_top_day_name_pane

0xb98f,	// (0x0005f53a) frame_month_view_pane

0x16e8,	// (0x00055293) grid_month_view_pane

0xb9a4,	// (0x0005f54f) cell_top_day_name_pane_ParamLimits

0xb9a4,	// (0x0005f54f) cell_top_day_name_pane

0xb9be,	// (0x0005f569) cell_area_left_week_number_pane_ParamLimits

0xb9be,	// (0x0005f569) cell_area_left_week_number_pane

0xb9e1,	// (0x0005f58c) cell_month_view_pane_ParamLimits

0xb9e1,	// (0x0005f58c) cell_month_view_pane

0x16f6,	// (0x000552a1) frm_month_g1

0xba0d,	// (0x0005f5b8) frm_month_g2

0xba1e,	// (0x0005f5c9) frm_month_g3

0xba2f,	// (0x0005f5da) frm_month_g4

0xba40,	// (0x0005f5eb) frm_month_g5

0xba53,	// (0x0005f5fe) frm_month_g6

0xba66,	// (0x0005f611) frm_month_g7

0x1703,	// (0x000552ae) frm_month_g8

0xba79,	// (0x0005f624) frm_month_g9

0xba86,	// (0x0005f631) frm_month_g10

0xba93,	// (0x0005f63e) frm_month_g11

0xbaa0,	// (0x0005f64b) frm_month_g12

0xbaad,	// (0x0005f658) frm_month_g13

0xbaba,	// (0x0005f665) frm_month_g14

0xbac9,	// (0x0005f674) frm_month_g15

0xbad8,	// (0x0005f683) frm_month_g16

0x000f,

0xfdd8,	// (0x00063983) frm_month_g

0x1710,	// (0x000552bb) cell_top_day_name_pane_t1

0xbae7,	// (0x0005f692) cell_area_left_week_number_pane_g1

0xbaf6,	// (0x0005f6a1) cell_area_left_week_number_pane_t1

0x2493,	// (0x0005603e) cell_month_view_pane_g1

0xbb0c,	// (0x0005f6b7) cell_month_view_pane_t1

0x17ee,	// (0x00055399) main_fps_pane

0x0eea,	// (0x00054a95) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0eea,	// (0x00054a95) cmail_ddmenu_btn02_pane_cp1

0x0f06,	// (0x00054ab1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0f06,	// (0x00054ab1) cmail_ddmenu_btn02_pane_cp2

0xb2a5,	// (0x0005ee50) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb2a5,	// (0x0005ee50) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf6,	// (0x000638a1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf6,	// (0x000638a1) cmail_ddmenu_btn02_pane_g

0xb2c3,	// (0x0005ee6e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb2c3,	// (0x0005ee6e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcfb,	// (0x000638a6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcfb,	// (0x000638a6) cmail_ddmenu_btn02_pane_t

0xbb22,	// (0x0005f6cd) fps_text_pane_ParamLimits

0xbb22,	// (0x0005f6cd) fps_text_pane

0xbb2f,	// (0x0005f6da) main_fps_pane_g1_ParamLimits

0xbb2f,	// (0x0005f6da) main_fps_pane_g1

0xbb3d,	// (0x0005f6e8) wait_bar_pane_cp010_ParamLimits

0xbb3d,	// (0x0005f6e8) wait_bar_pane_cp010

0xbb49,	// (0x0005f6f4) fps_text_pane_t1_ParamLimits

0xbb49,	// (0x0005f6f4) fps_text_pane_t1

0x89d8,	// (0x0005c583) cam4_image_uncrop_pane_g1

0x89e1,	// (0x0005c58c) cam4_image_uncrop_pane_g2

0x89ea,	// (0x0005c595) cam4_image_uncrop_pane_g3

0x89f3,	// (0x0005c59e) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x000633e5) cam4_image_uncrop_pane_g

0xb951,	// (0x0005f4fc) dia3_listrow_pane_ParamLimits

0x17ee,	// (0x00055399) main_phob2_pane

0xad7e,	// (0x0005e929) cell_tport_appsw_pane_cp02_ParamLimits

0xad7e,	// (0x0005e929) cell_tport_appsw_pane_cp02

0xad8d,	// (0x0005e938) cell_tport_appsw_pane_cp03_ParamLimits

0xad8d,	// (0x0005e938) cell_tport_appsw_pane_cp03

0x17ee,	// (0x00055399) phob2_contact_card_pane

0x17ee,	// (0x00055399) phob2_listscroll_pane

0x1723,	// (0x000552ce) phob2_list_pane

0x172b,	// (0x000552d6) scroll_pane_cp034

0xbb62,	// (0x0005f70d) phob2_cc_data_pane_ParamLimits

0xbb62,	// (0x0005f70d) phob2_cc_data_pane

0xbb7c,	// (0x0005f727) phob2_cc_listscroll_pane_ParamLimits

0xbb7c,	// (0x0005f727) phob2_cc_listscroll_pane

0xb743,	// (0x0005f2ee) list_double_large_graphic_phob2_pane_ParamLimits

0xb743,	// (0x0005f2ee) list_double_large_graphic_phob2_pane

0xbb96,	// (0x0005f741) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbb96,	// (0x0005f741) list_double_large_graphic_phob2_pane_g1

0xbba3,	// (0x0005f74e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbba3,	// (0x0005f74e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf9,	// (0x000639a4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf9,	// (0x000639a4) list_double_large_graphic_phob2_pane_g

0xbbc9,	// (0x0005f774) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbbc9,	// (0x0005f774) list_double_large_graphic_phob2_pane_t1

0xbbde,	// (0x0005f789) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbbde,	// (0x0005f789) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe02,	// (0x000639ad) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe02,	// (0x000639ad) list_double_large_graphic_phob2_pane_t

0x17ee,	// (0x00055399) list_highlight_pane_cp024

0x1733,	// (0x000552de) phob2_cc_button_pane

0xbbf3,	// (0x0005f79e) phob2_cc_data_pane_g1_ParamLimits

0xbbf3,	// (0x0005f79e) phob2_cc_data_pane_g1

0xbc02,	// (0x0005f7ad) phob2_cc_data_pane_g2_ParamLimits

0xbc02,	// (0x0005f7ad) phob2_cc_data_pane_g2

0x0001,

0xfe07,	// (0x000639b2) phob2_cc_data_pane_g_ParamLimits

0xfe07,	// (0x000639b2) phob2_cc_data_pane_g

0xbc11,	// (0x0005f7bc) phob2_cc_data_pane_t1_ParamLimits

0xbc11,	// (0x0005f7bc) phob2_cc_data_pane_t1

0xbc26,	// (0x0005f7d1) phob2_cc_data_pane_t2_ParamLimits

0xbc26,	// (0x0005f7d1) phob2_cc_data_pane_t2

0xbc3b,	// (0x0005f7e6) phob2_cc_data_pane_t3_ParamLimits

0xbc3b,	// (0x0005f7e6) phob2_cc_data_pane_t3

0x0002,

0xfe0c,	// (0x000639b7) phob2_cc_data_pane_t_ParamLimits

0xfe0c,	// (0x000639b7) phob2_cc_data_pane_t

0x173b,	// (0x000552e6) phob2_cc_list_pane_ParamLimits

0x173b,	// (0x000552e6) phob2_cc_list_pane

0xedfd,	// (0x000629a8) scroll_pane_cp035_ParamLimits

0xedfd,	// (0x000629a8) scroll_pane_cp035

0x223f,	// (0x00055dea) bg_button_pane_cp033

0x1747,	// (0x000552f2) phob2_cc_button_pane_g1

0x1753,	// (0x000552fe) phob2_cc_button_pane_t1

0x1768,	// (0x00055313) phob2_cc_button_pane_t2

0x0001,

0xfe13,	// (0x000639be) phob2_cc_button_pane_t

0xbc50,	// (0x0005f7fb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbc50,	// (0x0005f7fb) list_double_large_graphic_phob2_cc_pane

0xbcbe,	// (0x0005f869) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbcbe,	// (0x0005f869) list_double_large_graphic_phob2_cc_pane_g1

0x030f,	// (0x00053eba) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x030f,	// (0x00053eba) list_double_large_graphic_phob2_cc_pane_g2

0xbccf,	// (0x0005f87a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbccf,	// (0x0005f87a) list_double_large_graphic_phob2_cc_pane_g3

0xbcdb,	// (0x0005f886) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbcdb,	// (0x0005f886) list_double_large_graphic_phob2_cc_pane_g4

0xbce7,	// (0x0005f892) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbce7,	// (0x0005f892) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe18,	// (0x000639c3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe18,	// (0x000639c3) list_double_large_graphic_phob2_cc_pane_g

0xbcf3,	// (0x0005f89e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbcf3,	// (0x0005f89e) list_double_large_graphic_phob2_cc_pane_t1

0xbd1c,	// (0x0005f8c7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbd1c,	// (0x0005f8c7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe23,	// (0x000639ce) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe23,	// (0x000639ce) list_double_large_graphic_phob2_cc_pane_t

0x177a,	// (0x00055325) list_highlight_pane_cp025_ParamLimits

0x177a,	// (0x00055325) list_highlight_pane_cp025

0x223f,	// (0x00055dea) bg_button_pane_cp033_ParamLimits

0x1747,	// (0x000552f2) phob2_cc_button_pane_g1_ParamLimits

0x1753,	// (0x000552fe) phob2_cc_button_pane_t1_ParamLimits

0x1768,	// (0x00055313) phob2_cc_button_pane_t2_ParamLimits

0xfe13,	// (0x000639be) phob2_cc_button_pane_t_ParamLimits

0x44fc,	// (0x000580a7) popup_wgtman_window

0xebc6,	// (0x00062771) scroll_pane_cp038

0xb6cc,	// (0x0005f277) wgtman_btn_pane_cp_01_ParamLimits

0xb6cc,	// (0x0005f277) wgtman_btn_pane_cp_01

0x1788,	// (0x00055333) wgtman_content_pane

0x1791,	// (0x0005533c) wgtman_heading_pane

0x17ee,	// (0x00055399) bg_heading_pane_cp02

0x179a,	// (0x00055345) wgtman_heading_pane_g1

0x17a2,	// (0x0005534d) wgtman_heading_pane_t1

0x17b0,	// (0x0005535b) scroll_pane_cp036

0x17b8,	// (0x00055363) wgtman_list_pane

0x17c0,	// (0x0005536b) wgtman_list_pane_t1_ParamLimits

0x17c0,	// (0x0005536b) wgtman_list_pane_t1

0x8937,	// (0x0005c4e2) cam4_grid_pane

0x962f,	// (0x0005d1da) bg_button_pane_cp015_ParamLimits

0x9644,	// (0x0005d1ef) bg_button_pane_cp016_ParamLimits

0x9650,	// (0x0005d1fb) bg_button_pane_cp017_ParamLimits

0x96a8,	// (0x0005d253) popup_vitu2_query_window_g3_ParamLimits

0x96a8,	// (0x0005d253) popup_vitu2_query_window_g3

0x9749,	// (0x0005d2f4) popup_vitu2_query_window_t6_ParamLimits

0x9749,	// (0x0005d2f4) popup_vitu2_query_window_t6

0x9774,	// (0x0005d31f) popup_vitu2_query_window_t7_ParamLimits

0x9774,	// (0x0005d31f) popup_vitu2_query_window_t7

0x0da6,	// (0x00054951) cam4_grid_pane_g1

0x0daf,	// (0x0005495a) cam4_grid_pane_g2

0x17da,	// (0x00055385) cam4_grid_pane_g3

0x17e3,	// (0x0005538e) cam4_grid_pane_g4

0x0003,

0xfe28,	// (0x000639d3) cam4_grid_pane_g

0x504e,	// (0x00058bf9) aid_placing_vt_slider_lsc_ParamLimits

0x539a,	// (0x00058f45) vidtel_button_pane_ParamLimits

0x539a,	// (0x00058f45) vidtel_button_pane

0x17ee,	// (0x00055399) bg_button_pane_cp034

0x1caa,	// (0x00055855) vidtel_button_pane_g1

0x1cb2,	// (0x0005585d) vidtel_button_pane_t1

0xed1d,	// (0x000628c8) aid_size_vtel_slider_touch

0xedfd,	// (0x000629a8) scroll_pane_cp039

0xa4c1,	// (0x0005e06c) ncim_query_button_pane_cp01_ParamLimits

0xa4e0,	// (0x0005e08b) ncimui_query_pane_g1_ParamLimits

0x223f,	// (0x00055dea) input_focus_pane_cp012_ParamLimits

0x098d,	// (0x00054538) ncim_query_entry_pane_t1_ParamLimits

0xedfd,	// (0x000629a8) scroll_pane_cp039_ParamLimits

0x2fe1,	// (0x00056b8c) navi_pane_bcale_mc_g1

0x2fe9,	// (0x00056b94) navi_pane_bcale_mc_t1

0x0f3a,	// (0x00054ae5) main_sp_fs_email_pane_g1

0x0f46,	// (0x00054af1) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x000637d6) main_sp_fs_email_pane_g

0x11bf,	// (0x00054d6a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x11bf,	// (0x00054d6a) list_single_cale_mrui_row_pane_g3

0xb2e3,	// (0x0005ee8e) list_single_recal_day_pane_g5_event_pane

0x02da,	// (0x00053e85) list_single_recal_day_pane_g7

0x1cc8,	// (0x00055873) list_recal_day_event_pane_cp01

0x1cd1,	// (0x0005587c) list_recal_vselct_arw_lo_pane_cp01

0x1cd9,	// (0x00055884) list_recal_vselct_arw_up_pane_cp01

0x1ce1,	// (0x0005588c) list_recal_vselct_pane_cp01

0xed3f,	// (0x000628ea) list_recal_day_event_pane_cp01_g1

0x031b,	// (0x00053ec6) list_recal_day_event_pane_cp01_t1

0x02e2,	// (0x00053e8d) list_single_recal_day_pane_t1_ParamLimits

0x02f4,	// (0x00053e9f) list_single_recal_day_pane_t2_ParamLimits

0xfd0b,	// (0x000638b6) list_single_recal_day_pane_t_ParamLimits

0x2418,	// (0x00055fc3) bg_notes_pane_ParamLimits

0x24e3,	// (0x0005608e) list_notes_pane_ParamLimits

0x4708,	// (0x000582b3) scroll_pane_cp06_ParamLimits

0x2505,	// (0x000560b0) main_notes_pane_ParamLimits

0x223f,	// (0x00055dea) main_welc_pane

0xbd67,	// (0x0005f912) main_welc_body_pane_ParamLimits

0xbd67,	// (0x0005f912) main_welc_body_pane

0xbd81,	// (0x0005f92c) main_welc_opti_pane_ParamLimits

0xbd81,	// (0x0005f92c) main_welc_opti_pane

0xbde0,	// (0x0005f98b) main_welc_pane_t1_ParamLimits

0xbde0,	// (0x0005f98b) main_welc_pane_t1

0xbf76,	// (0x0005fb21) main_welc_body_row_pane_ParamLimits

0xbf76,	// (0x0005fb21) main_welc_body_row_pane

0x2485,	// (0x00056030) main_welc_opti_row_pane_ParamLimits

0x2485,	// (0x00056030) main_welc_opti_row_pane

0x1cfb,	// (0x000558a6) main_welc_opti_row_pane_g1

0xbf9b,	// (0x0005fb46) main_welc_opti_row_pane_t1

0x1d03,	// (0x000558ae) main_welc_body_row_pane_t1

0x1514,	// (0x000550bf) popup_notif_wgt_heading_pane

0x152e,	// (0x000550d9) aid_size_list_notif_wgt_del_ParamLimits

0x153b,	// (0x000550e6) list_notif_wgt_row_pane_g1_ParamLimits

0x1547,	// (0x000550f2) list_notif_wgt_row_pane_g2_ParamLimits

0x1556,	// (0x00055101) list_notif_wgt_row_pane_g3_ParamLimits

0xfd72,	// (0x0006391d) list_notif_wgt_row_pane_g_ParamLimits

0x1563,	// (0x0005510e) list_notif_wgt_row_pane_t1_ParamLimits

0x1579,	// (0x00055124) list_notif_wgt_row_pane_t2_ParamLimits

0x158b,	// (0x00055136) list_notif_wgt_row_pane_t3_ParamLimits

0xfd79,	// (0x00063924) list_notif_wgt_row_pane_t_ParamLimits

0xb75e,	// (0x0005f309) listrow_wgtman_pane_g1_ParamLimits

0xb76b,	// (0x0005f316) listrow_wgtman_pane_g2_ParamLimits

0xfda9,	// (0x00063954) listrow_wgtman_pane_g_ParamLimits

0xb789,	// (0x0005f334) listrow_wgtman_pane_t1_ParamLimits

0xb7a1,	// (0x0005f34c) listrow_wgtman_pane_t2_ParamLimits

0xfdae,	// (0x00063959) listrow_wgtman_pane_t_ParamLimits

0xb7c7,	// (0x0005f372) wait_bar_pane_cp09_ParamLimits

0x17ee,	// (0x00055399) bg_popup_heading_pane_cp02

0x1d12,	// (0x000558bd) popup_notif_wgt_heading_pane_g1

0x1d1a,	// (0x000558c5) popup_notif_wgt_heading_pane_t1

0x17ee,	// (0x00055399) main_vids_pane

0x17ee,	// (0x00055399) vids_listscroll_pane

0xbfaa,	// (0x0005fb55) scroll_pane_cp040

0x17ee,	// (0x00055399) vids_list_pane

0xbfb5,	// (0x0005fb60) vids_list_double_pane_ParamLimits

0xbfb5,	// (0x0005fb60) vids_list_double_pane

0xbfcc,	// (0x0005fb77) vids_list_double_pane_g1

0xbfd5,	// (0x0005fb80) vids_list_double_pane_t1

0xbfe5,	// (0x0005fb90) vids_list_double_pane_t2

0x0001,

0xfe47,	// (0x000639f2) vids_list_double_pane_t

0x70a5,	// (0x0005ac50) main_ncimui_pane_ParamLimits

0xa318,	// (0x0005dec3) main_ncimui_pane_g1_ParamLimits

0xa324,	// (0x0005decf) main_ncimui_pane_g2_ParamLimits

0xa324,	// (0x0005decf) main_ncimui_pane_g2

0x0001,

0xfb2c,	// (0x000636d7) main_ncimui_pane_g_ParamLimits

0xfb2c,	// (0x000636d7) main_ncimui_pane_g

0xbd9a,	// (0x0005f945) main_welc_pane_g1_ParamLimits

0xbd9a,	// (0x0005f945) main_welc_pane_g1

0xbda6,	// (0x0005f951) main_welc_pane_g2_ParamLimits

0xbda6,	// (0x0005f951) main_welc_pane_g2

0x0003,

0xfe31,	// (0x000639dc) main_welc_pane_g_ParamLimits

0xfe31,	// (0x000639dc) main_welc_pane_g

0x2418,	// (0x00055fc3) listscroll_mce_pane_ParamLimits

0x3136,	// (0x00056ce1) wait_bar_pane_cp10

0xdd49,	// (0x000618f4) main_cale_day_pane_ParamLimits

0xdd49,	// (0x000618f4) main_cale_week_pane_ParamLimits

0x2418,	// (0x00055fc3) main_messa_pane_ParamLimits

0x7d7e,	// (0x0005b929) main_clock2_btn_pane_ParamLimits

0x7d7e,	// (0x0005b929) main_clock2_btn_pane

0xe58b,	// (0x00062136) main_clock2_btn_pane_cp01_ParamLimits

0xe58b,	// (0x00062136) main_clock2_btn_pane_cp01

0x1190,	// (0x00054d3b) list_cale_mrui_pane_ParamLimits

0x15cf,	// (0x0005517a) main_cf0_pane_g2

0x0001,

0xfd80,	// (0x0006392b) main_cf0_pane_g

0xb96e,	// (0x0005f519) area_left_week_number_pane_ParamLimits

0xb981,	// (0x0005f52c) area_top_day_name_pane_ParamLimits

0xb98f,	// (0x0005f53a) frame_month_view_pane_ParamLimits

0x16e8,	// (0x00055293) grid_month_view_pane_ParamLimits

0x16f6,	// (0x000552a1) frm_month_g1_ParamLimits

0xba0d,	// (0x0005f5b8) frm_month_g2_ParamLimits

0xba1e,	// (0x0005f5c9) frm_month_g3_ParamLimits

0xba2f,	// (0x0005f5da) frm_month_g4_ParamLimits

0xba40,	// (0x0005f5eb) frm_month_g5_ParamLimits

0xba53,	// (0x0005f5fe) frm_month_g6_ParamLimits

0xba66,	// (0x0005f611) frm_month_g7_ParamLimits

0x1703,	// (0x000552ae) frm_month_g8_ParamLimits

0xba79,	// (0x0005f624) frm_month_g9_ParamLimits

0xba86,	// (0x0005f631) frm_month_g10_ParamLimits

0xba93,	// (0x0005f63e) frm_month_g11_ParamLimits

0xbaa0,	// (0x0005f64b) frm_month_g12_ParamLimits

0xbaad,	// (0x0005f658) frm_month_g13_ParamLimits

0xbaba,	// (0x0005f665) frm_month_g14_ParamLimits

0xbac9,	// (0x0005f674) frm_month_g15_ParamLimits

0xbad8,	// (0x0005f683) frm_month_g16_ParamLimits

0xfdd8,	// (0x00063983) frm_month_g_ParamLimits

0x1710,	// (0x000552bb) cell_top_day_name_pane_t1_ParamLimits

0xbae7,	// (0x0005f692) cell_area_left_week_number_pane_g1_ParamLimits

0xbaf6,	// (0x0005f6a1) cell_area_left_week_number_pane_t1_ParamLimits

0x2493,	// (0x0005603e) cell_month_view_pane_g1_ParamLimits

0xbb0c,	// (0x0005f6b7) cell_month_view_pane_t1_ParamLimits

0x2410,	// (0x00055fbb) main_clock2_btn_pane_g1

0x1d28,	// (0x000558d3) main_clock2_btn_pane_t1

0x223f,	// (0x00055dea) listscroll_cmail_pane_ParamLimits

0x0f3a,	// (0x00054ae5) main_sp_fs_email_pane_g1_ParamLimits

0x0f46,	// (0x00054af1) main_sp_fs_email_pane_g2_ParamLimits

0xfc2b,	// (0x000637d6) main_sp_fs_email_pane_g_ParamLimits

0x1297,	// (0x00054e42) list_recal_day_pane_ParamLimits

0x12a8,	// (0x00054e53) mian_recal_day_pane_t1

0xac6c,	// (0x0005e817) list_single_dyc_row_text_pane_t4_ParamLimits

0xac6c,	// (0x0005e817) list_single_dyc_row_text_pane_t4

0xaca3,	// (0x0005e84e) list_single_dyc_row_text_pane_t5_ParamLimits

0xaca3,	// (0x0005e84e) list_single_dyc_row_text_pane_t5

0x00b1,	// (0x00053c5c) list_single_dyc_row_text_pane_t6_ParamLimits

0x00b1,	// (0x00053c5c) list_single_dyc_row_text_pane_t6

0x2acf,	// (0x0005667a) aid_mgn_list_cale_time_pane

0x70a5,	// (0x0005ac50) main_gallery2_pane_ParamLimits

0xe5a1,	// (0x0006214c) main_clock2_pane_cp01_t1

0xe5b1,	// (0x0006215c) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x000632bc) main_clock2_pane_cp01_t

0x4b5d,	// (0x00058708) cale_week_scroll_pane_g16_ParamLimits

0x4b5d,	// (0x00058708) cale_week_scroll_pane_g16

0x26de,	// (0x00056289) vorec_slider_pane

0x1cb2,	// (0x0005585d) vidtel_button_pane_t1_ParamLimits

0xb33e,	// (0x0005eee9) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb33e,	// (0x0005eee9) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb34b,	// (0x0005eef6) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb34b,	// (0x0005eef6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd2e,	// (0x000638d9) main_fs_bigclock_clock_pane_g_ParamLimits

0xb357,	// (0x0005ef02) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb36a,	// (0x0005ef15) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd37,	// (0x000638e2) main_fs_bigclock_clock_pane_t_ParamLimits

0x771b,	// (0x0005b2c6) main_mup3_lyrics_pane_ParamLimits

0x771b,	// (0x0005b2c6) main_mup3_lyrics_pane

0xc018,	// (0x0005fbc3) main_mup3_lyrics_pane_t1_ParamLimits

0xc018,	// (0x0005fbc3) main_mup3_lyrics_pane_t1

0x82aa,	// (0x0005be55) aid_main_mp4_pane_t1_area

0x82b4,	// (0x0005be5f) aid_main_mp4_pane_t2_area

0x83b3,	// (0x0005bf5e) main_mp4_pane_g7_ParamLimits

0x83b3,	// (0x0005bf5e) main_mp4_pane_g7

0x83bf,	// (0x0005bf6a) main_mp4_pane_g8_ParamLimits

0x83bf,	// (0x0005bf6a) main_mp4_pane_g8

0x87df,	// (0x0005c38a) aid_call6_pane_g1_size

0xbc92,	// (0x0005f83d) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbc92,	// (0x0005f83d) list_double_large_graphic_phob2_other_pane

0x2a87,	// (0x00056632) list_double_large_graphic_phob2_other_pane_g1

0x17ee,	// (0x00055399) list_highlight_pane_cp026

0x223f,	// (0x00055dea) main_welc_pane_ParamLimits

0xaae5,	// (0x0005e690) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xaae5,	// (0x0005e690) main_sp_fs_ctrlbar_pane_g3

0xaafd,	// (0x0005e6a8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xaafd,	// (0x0005e6a8) main_sp_fs_ctrlbar_pane_g4

0xab2f,	// (0x0005e6da) toolbar2_fixed_button_pane_cp01

0xab3a,	// (0x0005e6e5) toolbar2_fixed_button_pane_cp02

0xab45,	// (0x0005e6f0) toolbar2_fixed_button_pane_cp03

0xbd57,	// (0x0005f902) list_welc_entry_pane_ParamLimits

0xbd57,	// (0x0005f902) list_welc_entry_pane

0xbdb4,	// (0x0005f95f) main_welc_pane_g3_ParamLimits

0xbdb4,	// (0x0005f95f) main_welc_pane_g3

0xbdfa,	// (0x0005f9a5) main_welc_pane_t2_ParamLimits

0xbdfa,	// (0x0005f9a5) main_welc_pane_t2

0xbe0e,	// (0x0005f9b9) main_welc_pane_t3_ParamLimits

0xbe0e,	// (0x0005f9b9) main_welc_pane_t3

0x0005,

0xfe3a,	// (0x000639e5) main_welc_pane_t_ParamLimits

0xfe3a,	// (0x000639e5) main_welc_pane_t

0xbf0a,	// (0x0005fab5) welc_button_pane_ParamLimits

0xbf0a,	// (0x0005fab5) welc_button_pane

0xbf68,	// (0x0005fb13) welc_service_logo_pane_ParamLimits

0xbf68,	// (0x0005fb13) welc_service_logo_pane

0xc04a,	// (0x0005fbf5) list_single_welc_entry_pane_ParamLimits

0xc04a,	// (0x0005fbf5) list_single_welc_entry_pane

0xc05b,	// (0x0005fc06) list_single_welc_entry_pane_g1

0xc063,	// (0x0005fc0e) list_single_welc_entry_pane_t1

0xc071,	// (0x0005fc1c) list_single_welc_entry_pane_t2

0x0001,

0xfe4c,	// (0x000639f7) list_single_welc_entry_pane_t

0x17ee,	// (0x00055399) bg_button_pane_cp035

0xc07f,	// (0x0005fc2a) welc_button_pane_t1

0x1d36,	// (0x000558e1) welc_service_logo_pane_g1

0x1d3f,	// (0x000558ea) welc_service_logo_pane_g2

0x0001,

0xfe51,	// (0x000639fc) welc_service_logo_pane_g

0x4508,	// (0x000580b3) main_int_radio_pane

0x257c,	// (0x00056127) list_single_fs_dyc_pane_g1

0xbbaf,	// (0x0005f75a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xbbaf,	// (0x0005f75a) list_double_large_graphic_phob2_pane_g3

0xbbbb,	// (0x0005f766) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xbbbb,	// (0x0005f766) list_double_large_graphic_phob2_pane_g4

0xc08d,	// (0x0005fc38) main_int_radio1_pane_ParamLimits

0xc08d,	// (0x0005fc38) main_int_radio1_pane

0x1d48,	// (0x000558f3) find_pane_cp02

0xc09f,	// (0x0005fc4a) input_focus_pane_cp12_ParamLimits

0xc09f,	// (0x0005fc4a) input_focus_pane_cp12

0xc0ab,	// (0x0005fc56) input_focus_pane_cp13_ParamLimits

0xc0ab,	// (0x0005fc56) input_focus_pane_cp13

0xc0c3,	// (0x0005fc6e) input_focus_pane_cp14_ParamLimits

0xc0c3,	// (0x0005fc6e) input_focus_pane_cp14

0x1d51,	// (0x000558fc) int_radio1_listscroll_pane

0xc0db,	// (0x0005fc86) main_int_radio1_pane_g1_ParamLimits

0xc0db,	// (0x0005fc86) main_int_radio1_pane_g1

0xc0eb,	// (0x0005fc96) main_int_radio1_pane_t1_ParamLimits

0xc0eb,	// (0x0005fc96) main_int_radio1_pane_t1

0xc0ff,	// (0x0005fcaa) main_int_radio1_pane_t2_ParamLimits

0xc0ff,	// (0x0005fcaa) main_int_radio1_pane_t2

0xc113,	// (0x0005fcbe) main_int_radio1_pane_t3_ParamLimits

0xc113,	// (0x0005fcbe) main_int_radio1_pane_t3

0xc127,	// (0x0005fcd2) main_int_radio1_pane_t4_ParamLimits

0xc127,	// (0x0005fcd2) main_int_radio1_pane_t4

0x1d5b,	// (0x00055906) main_int_radio1_pane_t5_ParamLimits

0x1d5b,	// (0x00055906) main_int_radio1_pane_t5

0xc13e,	// (0x0005fce9) main_int_radio1_pane_t6_ParamLimits

0xc13e,	// (0x0005fce9) main_int_radio1_pane_t6

0xc150,	// (0x0005fcfb) main_int_radio1_pane_t7_ParamLimits

0xc150,	// (0x0005fcfb) main_int_radio1_pane_t7

0xc162,	// (0x0005fd0d) main_int_radio1_pane_t8_ParamLimits

0xc162,	// (0x0005fd0d) main_int_radio1_pane_t8

0xc176,	// (0x0005fd21) main_int_radio1_pane_t9_ParamLimits

0xc176,	// (0x0005fd21) main_int_radio1_pane_t9

0xc188,	// (0x0005fd33) main_int_radio1_pane_t10_ParamLimits

0xc188,	// (0x0005fd33) main_int_radio1_pane_t10

0xc1b9,	// (0x0005fd64) main_int_radio1_pane_t11_ParamLimits

0xc1b9,	// (0x0005fd64) main_int_radio1_pane_t11

0xc1ea,	// (0x0005fd95) main_int_radio1_pane_t12_ParamLimits

0xc1ea,	// (0x0005fd95) main_int_radio1_pane_t12

0x000b,

0xfe56,	// (0x00063a01) main_int_radio1_pane_t_ParamLimits

0xfe56,	// (0x00063a01) main_int_radio1_pane_t

0x1d6d,	// (0x00055918) int_radio_list_pane

0x172b,	// (0x000552d6) scroll_pane_cp037

0x1d75,	// (0x00055920) list_double_large_graphic_int_radio_pane_ParamLimits

0x1d75,	// (0x00055920) list_double_large_graphic_int_radio_pane

0x1d8d,	// (0x00055938) list_double_large_graphic_int_radio_pane_g1

0x0329,	// (0x00053ed4) list_double_large_graphic_int_radio_pane_t1

0x0337,	// (0x00053ee2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6f,	// (0x00063a1a) list_double_large_graphic_int_radio_pane_t

0x17ee,	// (0x00055399) list_highlight_pane_cp027

0x1ceb,	// (0x00055896) main_button_pane_4

0xbdc0,	// (0x0005f96b) main_welc_pane_g4_ParamLimits

0xbdc0,	// (0x0005f96b) main_welc_pane_g4

0xbe20,	// (0x0005f9cb) main_welc_pane_t4_ParamLimits

0xbe20,	// (0x0005f9cb) main_welc_pane_t4

0xbe32,	// (0x0005f9dd) main_welc_pane_t5_ParamLimits

0xbe32,	// (0x0005f9dd) main_welc_pane_t5

0xbe62,	// (0x0005fa0d) main_welc_pane_t6_ParamLimits

0xbe62,	// (0x0005fa0d) main_welc_pane_t6

0xbf18,	// (0x0005fac3) welc_button_pane_2_ParamLimits

0xbf18,	// (0x0005fac3) welc_button_pane_2

0xbf30,	// (0x0005fadb) welc_button_pane_3_ParamLimits

0xbf30,	// (0x0005fadb) welc_button_pane_3

0x1cf3,	// (0x0005589e) welc_button_pane_4

0xbf4a,	// (0x0005faf5) welc_button_pane_5_ParamLimits

0xbf4a,	// (0x0005faf5) welc_button_pane_5

0x4317,	// (0x00057ec2) main_popup_welc_pane

0x1da5,	// (0x00055950) main_welc_sk_g3

0x1daf,	// (0x0005595a) main_welc_sk_g4

0x1db9,	// (0x00055964) main_welc_sk_t3

0x1dc9,	// (0x00055974) main_welc_sk_t4

0x1dd9,	// (0x00055984) popup_welc_pane_t4

0x1de7,	// (0x00055992) popup_welc_pane_t5

0x1df5,	// (0x000559a0) popup_welc_pane_t6

0x4508,	// (0x000580b3) main_acti_pane

0x17ee,	// (0x00055399) main_sso_pane

0xc201,	// (0x0005fdac) sso_body_pane_ParamLimits

0xc201,	// (0x0005fdac) sso_body_pane

0xc20f,	// (0x0005fdba) sso_logo_pane_ParamLimits

0xc20f,	// (0x0005fdba) sso_logo_pane

0xc238,	// (0x0005fde3) sso_sk_pane_ParamLimits

0xc238,	// (0x0005fde3) sso_sk_pane

0x2714,	// (0x000562bf) main_sso_logo_pane_g1

0xc245,	// (0x0005fdf0) sso_sk_pane_t1_ParamLimits

0xc245,	// (0x0005fdf0) sso_sk_pane_t1

0xc259,	// (0x0005fe04) sso_sk_pane_t2_ParamLimits

0xc259,	// (0x0005fe04) sso_sk_pane_t2

0x0001,

0xfe74,	// (0x00063a1f) sso_sk_pane_t_ParamLimits

0xfe74,	// (0x00063a1f) sso_sk_pane_t

0x1e33,	// (0x000559de) aid_sso_gap

0x1e3c,	// (0x000559e7) aid_sso_txt1

0x1e46,	// (0x000559f1) aid_sso_txt2

0x1e50,	// (0x000559fb) aid_sso_txt3

0x0002,

0xfe79,	// (0x00063a24) aid_sso_txt

0x1e5a,	// (0x00055a05) aid_sso_widget

0xc2b8,	// (0x0005fe63) sso_btn_pane_ParamLimits

0xc2b8,	// (0x0005fe63) sso_btn_pane

0xc331,	// (0x0005fedc) sso_option_pane_ParamLimits

0xc331,	// (0x0005fedc) sso_option_pane

0xc3ab,	// (0x0005ff56) sso_query_pane_ParamLimits

0xc3ab,	// (0x0005ff56) sso_query_pane

0xc3fb,	// (0x0005ffa6) sso_query_pane_cp01_ParamLimits

0xc3fb,	// (0x0005ffa6) sso_query_pane_cp01

0xc44d,	// (0x0005fff8) sso_t_hdr_pane_ParamLimits

0xc44d,	// (0x0005fff8) sso_t_hdr_pane

0xc471,	// (0x0006001c) sso_t_nml_pane_ParamLimits

0xc471,	// (0x0006001c) sso_t_nml_pane

0x1e64,	// (0x00055a0f) sso_t_sub_pane

0xc21c,	// (0x0005fdc7) sso_popup_window_ParamLimits

0xc21c,	// (0x0005fdc7) sso_popup_window

0xc26b,	// (0x0005fe16) sso_apps_pane_ParamLimits

0xc26b,	// (0x0005fe16) sso_apps_pane

0xc28e,	// (0x0005fe39) sso_body_pane_g1

0xc298,	// (0x0005fe43) sso_body_pane_t1

0xc2a8,	// (0x0005fe53) sso_body_pane_t2

0x0001,

0xfe80,	// (0x00063a2b) sso_body_pane_t

0xc303,	// (0x0005feae) sso_btn_pane_cp01_ParamLimits

0xc303,	// (0x0005feae) sso_btn_pane_cp01

0xc37d,	// (0x0005ff28) sso_prog_pane_ParamLimits

0xc37d,	// (0x0005ff28) sso_prog_pane

0x203e,	// (0x00055be9) sso_t_hdr_pane_t1_ParamLimits

0x203e,	// (0x00055be9) sso_t_hdr_pane_t1

0x1e79,	// (0x00055a24) input_focus_pane_cp10_ParamLimits

0x1e79,	// (0x00055a24) input_focus_pane_cp10

0x1e93,	// (0x00055a3e) sso_query_pane_t1_ParamLimits

0x1e93,	// (0x00055a3e) sso_query_pane_t1

0x1ea6,	// (0x00055a51) sso_query_pane_t2_ParamLimits

0x1ea6,	// (0x00055a51) sso_query_pane_t2

0x1ec1,	// (0x00055a6c) sso_query_pane_t3_ParamLimits

0x1ec1,	// (0x00055a6c) sso_query_pane_t3

0x1eeb,	// (0x00055a96) sso_query_pane_t4_ParamLimits

0x1eeb,	// (0x00055a96) sso_query_pane_t4

0x0003,

0xfe85,	// (0x00063a30) sso_query_pane_t_ParamLimits

0xfe85,	// (0x00063a30) sso_query_pane_t

0x17ee,	// (0x00055399) bg_button_pane_cp22

0x1d96,	// (0x00055941) sso_btn_pane_t1

0xc4c1,	// (0x0006006c) sso_t_nml_pane_t1_ParamLimits

0xc4c1,	// (0x0006006c) sso_t_nml_pane_t1

0x1f0f,	// (0x00055aba) sso_option_row_pane_ParamLimits

0x1f0f,	// (0x00055aba) sso_option_row_pane

0x1f22,	// (0x00055acd) sso_t_sub_pane_t1_ParamLimits

0x1f22,	// (0x00055acd) sso_t_sub_pane_t1

0x223f,	// (0x00055dea) bg_popup_window_pane_cp11_ParamLimits

0x223f,	// (0x00055dea) bg_popup_window_pane_cp11

0x1f3f,	// (0x00055aea) popup_sk_window_cp01_ParamLimits

0x1f3f,	// (0x00055aea) popup_sk_window_cp01

0x1f4c,	// (0x00055af7) sso_popup_body_pane_ParamLimits

0x1f4c,	// (0x00055af7) sso_popup_body_pane

0x1f59,	// (0x00055b04) scroll_pane_cp21_ParamLimits

0x1f59,	// (0x00055b04) scroll_pane_cp21

0x1f66,	// (0x00055b11) sso_popup_body_t_pane_ParamLimits

0x1f66,	// (0x00055b11) sso_popup_body_t_pane

0x1f73,	// (0x00055b1e) sso_popup_body_t_hdr_pane_ParamLimits

0x1f73,	// (0x00055b1e) sso_popup_body_t_hdr_pane

0x1f86,	// (0x00055b31) sso_popup_body_t_nml_pane_ParamLimits

0x1f86,	// (0x00055b31) sso_popup_body_t_nml_pane

0x1fa4,	// (0x00055b4f) sso_popup_body_t_sub_pane_ParamLimits

0x1fa4,	// (0x00055b4f) sso_popup_body_t_sub_pane

0x1fc7,	// (0x00055b72) sso_popup_body_t_hdr_pane_t1

0xc4de,	// (0x00060089) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc4de,	// (0x00060089) sso_popup_body_t_nml_pane_t1

0x1fd7,	// (0x00055b82) sso_popup_body_t_sub_pane_t1_ParamLimits

0x1fd7,	// (0x00055b82) sso_popup_body_t_sub_pane_t1

0x2714,	// (0x000562bf) sso_prog_pane_g1

0xc51f,	// (0x000600ca) sso_apps_pane_comp1_ParamLimits

0xc51f,	// (0x000600ca) sso_apps_pane_comp1

0x1ffc,	// (0x00055ba7) sso_apps_pane_comp1_g1

0x2004,	// (0x00055baf) sso_apps_pane_comp1_t1

0x2020,	// (0x00055bcb) sso_option_row_pane_g1

0x2028,	// (0x00055bd3) sso_option_row_pane_t1

0xbd45,	// (0x0005f8f0) bg_welc_area_ParamLimits

0xbd45,	// (0x0005f8f0) bg_welc_area

0xbe98,	// (0x0005fa43) sso_t_hdr_pane_a_t1_ParamLimits

0xbe98,	// (0x0005fa43) sso_t_hdr_pane_a_t1

0xbeac,	// (0x0005fa57) sso_t_nml_pane_a_t1_ParamLimits

0xbeac,	// (0x0005fa57) sso_t_nml_pane_a_t1

0xbed6,	// (0x0005fa81) sso_t_sub_pane_a_t1_ParamLimits

0xbed6,	// (0x0005fa81) sso_t_sub_pane_a_t1

0x1d96,	// (0x00055941) sso_btn_pane_t1_copy1

0x17ee,	// (0x00055399) welc_button_pane_2_comp1

0x1e03,	// (0x000559ae) sso_t_hdr_pane_p_t1

0x1e13,	// (0x000559be) sso_t_nml_pane_p_t1

0x1e23,	// (0x000559ce) sso_t_sub_pane_p_t1

0x0fe7,	// (0x00054b92) list_cmail_pane_ParamLimits

0xbf5a,	// (0x0005fb05) welc_button_pane_cp01_ParamLimits

0xbf5a,	// (0x0005fb05) welc_button_pane_cp01

0x17ee,	// (0x00055399) main_att_pane

0x2012,	// (0x00055bbd) input_focus_pane_cp10_t1

0x2028,	// (0x00055bd3) sso_option_row_pane_t1_ParamLimits

0xc539,	// (0x000600e4) main_att_body_pane_ParamLimits

0xc539,	// (0x000600e4) main_att_body_pane

0xc565,	// (0x00060110) att_btn_pane_ParamLimits

0xc565,	// (0x00060110) att_btn_pane

0xc587,	// (0x00060132) att_btn_pane_cp01_ParamLimits

0xc587,	// (0x00060132) att_btn_pane_cp01

0xc5a1,	// (0x0006014c) att_li_srv_pane_ParamLimits

0xc5a1,	// (0x0006014c) att_li_srv_pane

0xc5b3,	// (0x0006015e) att_opt_pane_ParamLimits

0xc5b3,	// (0x0006015e) att_opt_pane

0xc5f7,	// (0x000601a2) att_query_pane_ParamLimits

0xc5f7,	// (0x000601a2) att_query_pane

0xc63b,	// (0x000601e6) att_query_pane_cp01_ParamLimits

0xc63b,	// (0x000601e6) att_query_pane_cp01

0xc67f,	// (0x0006022a) att_t_hdr_pane_ParamLimits

0xc67f,	// (0x0006022a) att_t_hdr_pane

0xc6d1,	// (0x0006027c) att_t_nml_pane_ParamLimits

0xc6d1,	// (0x0006027c) att_t_nml_pane

0xc705,	// (0x000602b0) att_t_nml_pane_cp01_ParamLimits

0xc705,	// (0x000602b0) att_t_nml_pane_cp01

0xc729,	// (0x000602d4) att_t_nmlb_pane_ParamLimits

0xc729,	// (0x000602d4) att_t_nmlb_pane

0xc743,	// (0x000602ee) att_term_pane_ParamLimits

0xc743,	// (0x000602ee) att_term_pane

0xc787,	// (0x00060332) main_att_body_pane_g1_ParamLimits

0xc787,	// (0x00060332) main_att_body_pane_g1

0x203e,	// (0x00055be9) att_t_hdr_pane_t1_ParamLimits

0x203e,	// (0x00055be9) att_t_hdr_pane_t1

0x2057,	// (0x00055c02) att_t_nml_pane_t1_ParamLimits

0x2057,	// (0x00055c02) att_t_nml_pane_t1

0x207c,	// (0x00055c27) att_btn_pane_t1

0x17ee,	// (0x00055399) bg_button_pane_cp23

0xc7bb,	// (0x00060366) att_li_srv_row_pane_ParamLimits

0xc7bb,	// (0x00060366) att_li_srv_row_pane

0x208c,	// (0x00055c37) att_t_nmlb_pane_t1_ParamLimits

0x208c,	// (0x00055c37) att_t_nmlb_pane_t1

0x20a5,	// (0x00055c50) att_query_pane_t1

0x20b4,	// (0x00055c5f) att_query_pane_t2

0x20c3,	// (0x00055c6e) att_query_pane_t3

0x0002,

0xfe8e,	// (0x00063a39) att_query_pane_t

0x20d2,	// (0x00055c7d) input_focus_pane_cp11

0x20db,	// (0x00055c86) att_term_pane_t1_ParamLimits

0x20db,	// (0x00055c86) att_term_pane_t1

0x17ee,	// (0x00055399) att_opt_row_pane

0x20f8,	// (0x00055ca3) att_opt_row_pane_g1

0x2100,	// (0x00055cab) att_opt_row_pane_t1_ParamLimits

0x2100,	// (0x00055cab) att_opt_row_pane_t1

0xc7cb,	// (0x00060376) att_li_srv_row_pane_g1

0xc7d3,	// (0x0006037e) att_li_srv_row_pane_t1

0xc7e8,	// (0x00060393) att_li_srv_row_pane_t2

0x0001,

0xfe95,	// (0x00063a40) att_li_srv_row_pane_t

0x17ee,	// (0x00055399) main_call7_pane

0x17ee,	// (0x00055399) main_vod_pane

0x1e64,	// (0x00055a0f) sso_t_sub_pane_ParamLimits

0xc54d,	// (0x000600f8) att_btn_emg_pane_ParamLimits

0xc54d,	// (0x000600f8) att_btn_emg_pane

0xc7d3,	// (0x0006037e) att_li_srv_row_pane_t1_ParamLimits

0xc7e8,	// (0x00060393) att_li_srv_row_pane_t2_ParamLimits

0xfe95,	// (0x00063a40) att_li_srv_row_pane_t_ParamLimits

0x2119,	// (0x00055cc4) att_btn_close_pane_g1

0x17ee,	// (0x00055399) bg_button_pane_cp24

0xc7fd,	// (0x000603a8) main_vod_body_pane_ParamLimits

0xc7fd,	// (0x000603a8) main_vod_body_pane

0xc80b,	// (0x000603b6) main_vod_body_pane_g1_ParamLimits

0xc80b,	// (0x000603b6) main_vod_body_pane_g1

0xc83b,	// (0x000603e6) scroll_pane_cp24_ParamLimits

0xc83b,	// (0x000603e6) scroll_pane_cp24

0xc883,	// (0x0006042e) vod_btn_pane_ParamLimits

0xc883,	// (0x0006042e) vod_btn_pane

0xc8c3,	// (0x0006046e) vod_det_pane_ParamLimits

0xc8c3,	// (0x0006046e) vod_det_pane

0xc8ef,	// (0x0006049a) vod_logo_g1_ParamLimits

0xc8ef,	// (0x0006049a) vod_logo_g1

0xc929,	// (0x000604d4) vod_opt_pane_ParamLimits

0xc929,	// (0x000604d4) vod_opt_pane

0xc959,	// (0x00060504) vod_opt_pane_cp01_ParamLimits

0xc959,	// (0x00060504) vod_opt_pane_cp01

0xc981,	// (0x0006052c) vod_query_pane_ParamLimits

0xc981,	// (0x0006052c) vod_query_pane

0xc9ab,	// (0x00060556) vod_query_pane_cp01_ParamLimits

0xc9ab,	// (0x00060556) vod_query_pane_cp01

0xc9b7,	// (0x00060562) vod_t_nml_pane_ParamLimits

0xc9b7,	// (0x00060562) vod_t_nml_pane

0xca5d,	// (0x00060608) vod_t_nml_pane_cp01_ParamLimits

0xca5d,	// (0x00060608) vod_t_nml_pane_cp01

0xca95,	// (0x00060640) vod_t_sub_pane_ParamLimits

0xca95,	// (0x00060640) vod_t_sub_pane

0xcac3,	// (0x0006066e) vod_t_sub_pane_cp01_ParamLimits

0xcac3,	// (0x0006066e) vod_t_sub_pane_cp01

0x20d2,	// (0x00055c7d) vod_query_field_pane

0x20a5,	// (0x00055c50) vod_query_pane_t1

0x17ee,	// (0x00055399) bg_button_pane_cp25

0x207c,	// (0x00055c27) sso_btn_pane_t1_copy2

0xcaeb,	// (0x00060696) vod_t_nml_pane_t1_ParamLimits

0xcaeb,	// (0x00060696) vod_t_nml_pane_t1

0x2121,	// (0x00055ccc) vod_opt_row_pane_ParamLimits

0x2121,	// (0x00055ccc) vod_opt_row_pane

0x2133,	// (0x00055cde) vod_t_sub_pane_t1_ParamLimits

0x2133,	// (0x00055cde) vod_t_sub_pane_t1

0xcb22,	// (0x000606cd) vod_det_cell_pane_ParamLimits

0xcb22,	// (0x000606cd) vod_det_cell_pane

0x17ee,	// (0x00055399) input_focus_pane_cp15

0x214c,	// (0x00055cf7) vod_query_field_pane_t1

0x215a,	// (0x00055d05) vod_opt_row_pane_g1_ParamLimits

0x215a,	// (0x00055d05) vod_opt_row_pane_g1

0x2166,	// (0x00055d11) vod_opt_row_pane_t1_ParamLimits

0x2166,	// (0x00055d11) vod_opt_row_pane_t1

0x218b,	// (0x00055d36) vod_det_cell_field_pane

0x2194,	// (0x00055d3f) vod_det_cell_pane_g1

0x20a5,	// (0x00055c50) vod_det_cell_pane_t1

0x17ee,	// (0x00055399) input_focus_pane_cp16

0x214c,	// (0x00055cf7) vod_det_cell_field_pane_t1

0xcb34,	// (0x000606df) call7_btn_grp_pane_ParamLimits

0xcb34,	// (0x000606df) call7_btn_grp_pane

0xcb43,	// (0x000606ee) call7_bubble_pane_ParamLimits

0xcb43,	// (0x000606ee) call7_bubble_pane

0xcb51,	// (0x000606fc) cell_call7_btn_pane_ParamLimits

0xcb51,	// (0x000606fc) cell_call7_btn_pane

0xcb60,	// (0x0006070b) call7_pane_g1_ParamLimits

0xcb60,	// (0x0006070b) call7_pane_g1

0xcb6f,	// (0x0006071a) call7_windows_conf_pane_ParamLimits

0xcb6f,	// (0x0006071a) call7_windows_conf_pane

0xcb89,	// (0x00060734) popup_call7_1st_window_ParamLimits

0xcb89,	// (0x00060734) popup_call7_1st_window

0xcb97,	// (0x00060742) popup_call7_2nd_window_ParamLimits

0xcb97,	// (0x00060742) popup_call7_2nd_window

0xcba5,	// (0x00060750) popup_call7_3rd_window_ParamLimits

0xcba5,	// (0x00060750) popup_call7_3rd_window

0x17ee,	// (0x00055399) bg_button_pane_cp26

0x164c,	// (0x000551f7) cell_call7_btn_pane_g1

0x1c9b,	// (0x00055846) cell_call7_btn_pane_t1

0x17ee,	// (0x00055399) bg_popup_window_pane_cp12

0x219c,	// (0x00055d47) popup_call7_1st_window_g1

0x21a4,	// (0x00055d4f) popup_call7_1st_window_g2

0x21ac,	// (0x00055d57) popup_call7_1st_window_g3

0x0002,

0xfe9a,	// (0x00063a45) popup_call7_1st_window_g

0x21b4,	// (0x00055d5f) popup_call7_1st_window_t1

0x21c3,	// (0x00055d6e) popup_call7_1st_window_t2

0x21d1,	// (0x00055d7c) popup_call7_1st_window_t3

0x0002,

0xfea1,	// (0x00063a4c) popup_call7_1st_window_t

0x17ee,	// (0x00055399) bg_popup_window_pane_cp13

0x21df,	// (0x00055d8a) popup_call7_2nd_window_g1

0x21e7,	// (0x00055d92) popup_call7_2nd_window_g2

0x21ef,	// (0x00055d9a) popup_call7_2nd_window_g3

0x0002,

0xfea8,	// (0x00063a53) popup_call7_2nd_window_g

0x21f7,	// (0x00055da2) popup_call7_2nd_window_t1

0x17ee,	// (0x00055399) bg_popup_window_pane_cp14

0x2206,	// (0x00055db1) call7_list_conf_pane

0x220e,	// (0x00055db9) call7_list_conf_row_pane_ParamLimits

0x220e,	// (0x00055db9) call7_list_conf_row_pane

0x2221,	// (0x00055dcc) call7_list_conf_row_pane_g1

0x2229,	// (0x00055dd4) call7_list_conf_row_pane_g2

0x0001,

0xfeaf,	// (0x00063a5a) call7_list_conf_row_pane_g

0x2231,	// (0x00055ddc) call7_list_conf_row_pane_t1

0x17ee,	// (0x00055399) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

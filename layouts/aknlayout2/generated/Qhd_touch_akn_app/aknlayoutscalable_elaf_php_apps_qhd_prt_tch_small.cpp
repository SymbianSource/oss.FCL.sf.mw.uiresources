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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000334f2 };

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
0x4353,	// (0x00037845) Screen

0x435f,	// (0x00037851) application_window

0x43bb,	// (0x000378ad) area_bottom_pane_ParamLimits

0x43bb,	// (0x000378ad) area_bottom_pane

0x4414,	// (0x00037906) area_top_pane_ParamLimits

0x4414,	// (0x00037906) area_top_pane

0x4478,	// (0x0003796a) call_video_uplink_pane_ParamLimits

0x4478,	// (0x0003796a) call_video_uplink_pane

0x44b5,	// (0x000379a7) main_pane_ParamLimits

0x44b5,	// (0x000379a7) main_pane

0xe2ad,	// (0x0004179f) context_pane

0x746c,	// (0x0003a95e) navi_pane

0x748c,	// (0x0003a97e) popup_cale_events_window_ParamLimits

0x748c,	// (0x0003a97e) popup_cale_events_window

0xe2c0,	// (0x000417b2) popup_mup_playback_window

0x74a4,	// (0x0003a996) signal_pane

0xc3b8,	// (0x0003f8aa) main_browser_pane

0xce99,	// (0x0004038b) main_burst_pane

0x72f7,	// (0x0003a7e9) main_calc_pane

0xce99,	// (0x0004038b) main_cale_day_pane

0xc3b8,	// (0x0003f8aa) main_cale_month_pane

0xce99,	// (0x0004038b) main_cale_week_pane

0xce99,	// (0x0004038b) main_call_pane

0xc08a,	// (0x0003f57c) main_call_poc_pane

0xce99,	// (0x0004038b) main_camera_pane

0xce99,	// (0x0004038b) main_chi_dic_pane

0xcd1e,	// (0x00040210) main_clock_pane

0xc08a,	// (0x0003f57c) main_fmradio_pane

0xce99,	// (0x0004038b) main_graph_messa_pane

0xc08a,	// (0x0003f57c) main_help_pane

0xc3b8,	// (0x0003f8aa) main_im_pane

0xc2e5,	// (0x0003f7d7) main_image_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) main_image_pane

0xc08a,	// (0x0003f57c) main_location2_pane

0xce99,	// (0x0004038b) main_location_pane

0xc08a,	// (0x0003f57c) main_messa_pane

0xc08a,	// (0x0003f57c) main_mp2_pane

0xce99,	// (0x0004038b) main_mp_pane

0xc08a,	// (0x0003f57c) main_msg_pane

0xc08a,	// (0x0003f57c) main_mup_eq_pane

0xc08a,	// (0x0003f57c) main_mup_pane

0xc3b8,	// (0x0003f8aa) main_notes_pane

0xc08a,	// (0x0003f57c) main_pec_pane

0xc08a,	// (0x0003f57c) main_phob_pane

0xc08a,	// (0x0003f57c) main_pinb_pane

0xc08a,	// (0x0003f57c) main_postcard_pane

0xc08a,	// (0x0003f57c) main_qdial_pane

0xce99,	// (0x0004038b) main_skin_pane

0xc08a,	// (0x0003f57c) main_smil2_pane

0xce99,	// (0x0004038b) main_smil_pane

0xce99,	// (0x0004038b) main_video_pane

0xce99,	// (0x0004038b) main_video_tele_pane

0xc2e5,	// (0x0003f7d7) main_viewer_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) main_viewer_pane

0xce99,	// (0x0004038b) main_vorec_pane

0x7335,	// (0x0003a827) popup_blid_sat_info_window_ParamLimits

0x7335,	// (0x0003a827) popup_blid_sat_info_window

0x7355,	// (0x0003a847) popup_dyc_status_message_window_ParamLimits

0x7355,	// (0x0003a847) popup_dyc_status_message_window

0x7365,	// (0x0003a857) popup_grid_large_graphic_window_ParamLimits

0x7365,	// (0x0003a857) popup_grid_large_graphic_window

0x73f6,	// (0x0003a8e8) popup_loc_request_window_ParamLimits

0x73f6,	// (0x0003a8e8) popup_loc_request_window

0x7444,	// (0x0003a936) popup_wml_address_window_ParamLimits

0x7444,	// (0x0003a936) popup_wml_address_window

0x71cf,	// (0x0003a6c1) call_muted_g1

0x6e91,	// (0x0003a383) popup_call_audio_conf_window_ParamLimits

0x6e91,	// (0x0003a383) popup_call_audio_conf_window

0x71df,	// (0x0003a6d1) popup_call_audio_first_window_ParamLimits

0x71df,	// (0x0003a6d1) popup_call_audio_first_window

0x721f,	// (0x0003a711) popup_call_audio_in_window_ParamLimits

0x721f,	// (0x0003a711) popup_call_audio_in_window

0x7243,	// (0x0003a735) popup_call_audio_out_window_ParamLimits

0x7243,	// (0x0003a735) popup_call_audio_out_window

0x7265,	// (0x0003a757) popup_call_audio_second_window_ParamLimits

0x7265,	// (0x0003a757) popup_call_audio_second_window

0x7295,	// (0x0003a787) popup_call_audio_wait_window_ParamLimits

0x7295,	// (0x0003a787) popup_call_audio_wait_window

0x72b6,	// (0x0003a7a8) popup_number_entry_window_ParamLimits

0x72b6,	// (0x0003a7a8) popup_number_entry_window

0xbc77,	// (0x0003f169) bg_popup_call_pane_cp05_ParamLimits

0xbc77,	// (0x0003f169) bg_popup_call_pane_cp05

0xbc97,	// (0x0003f189) popup_number_entry_window_t1

0xbcaa,	// (0x0003f19c) popup_number_entry_window_t2

0xbcbc,	// (0x0003f1ae) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000425ca) popup_number_entry_window_t

0xbcce,	// (0x0003f1c0) text_title_cp2

0xbce1,	// (0x0003f1d3) bg_popup_call_pane_cp_ParamLimits

0xbce1,	// (0x0003f1d3) bg_popup_call_pane_cp

0xbcef,	// (0x0003f1e1) call_thumbnail_pane

0xbcf7,	// (0x0003f1e9) popup_call_audio_in_window_g1_ParamLimits

0xbcf7,	// (0x0003f1e9) popup_call_audio_in_window_g1

0xbd03,	// (0x0003f1f5) popup_call_audio_in_window_g2_ParamLimits

0xbd03,	// (0x0003f1f5) popup_call_audio_in_window_g2

0xbd0f,	// (0x0003f201) popup_call_audio_in_window_g3_ParamLimits

0xbd0f,	// (0x0003f201) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000425d3) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000425d3) popup_call_audio_in_window_g

0xbd1b,	// (0x0003f20d) popup_call_audio_in_window_t1_ParamLimits

0xbd1b,	// (0x0003f20d) popup_call_audio_in_window_t1

0xbd37,	// (0x0003f229) popup_call_audio_in_window_t2_ParamLimits

0xbd37,	// (0x0003f229) popup_call_audio_in_window_t2

0xbd53,	// (0x0003f245) popup_call_audio_in_window_t3_ParamLimits

0xbd53,	// (0x0003f245) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000425da) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000425da) popup_call_audio_in_window_t

0xbce1,	// (0x0003f1d3) bg_popup_call_pane_cp01_ParamLimits

0xbce1,	// (0x0003f1d3) bg_popup_call_pane_cp01

0xbcef,	// (0x0003f1e1) call_thumbnail_pane_cp02

0xbd66,	// (0x0003f258) call_type_pane_cp022

0xbd6e,	// (0x0003f260) popup_call_audio_out_window_g1_ParamLimits

0xbd6e,	// (0x0003f260) popup_call_audio_out_window_g1

0xbd80,	// (0x0003f272) popup_call_audio_out_window_g2_ParamLimits

0xbd80,	// (0x0003f272) popup_call_audio_out_window_g2

0xbd8c,	// (0x0003f27e) popup_call_audio_out_window_g3_ParamLimits

0xbd8c,	// (0x0003f27e) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000425e1) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000425e1) popup_call_audio_out_window_g

0xbd9e,	// (0x0003f290) popup_call_audio_out_window_t1_ParamLimits

0xbd9e,	// (0x0003f290) popup_call_audio_out_window_t1

0xbdb6,	// (0x0003f2a8) popup_call_audio_out_window_t2_ParamLimits

0xbdb6,	// (0x0003f2a8) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000425e8) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000425e8) popup_call_audio_out_window_t

0xbdcb,	// (0x0003f2bd) bg_popup_call_pane_ParamLimits

0xbdcb,	// (0x0003f2bd) bg_popup_call_pane

0x46ba,	// (0x00037bac) call_thumbnail_pane_cp_ParamLimits

0x46ba,	// (0x00037bac) call_thumbnail_pane_cp

0xbe4f,	// (0x0003f341) call_type_pane_cp01_ParamLimits

0xbe4f,	// (0x0003f341) call_type_pane_cp01

0xbe93,	// (0x0003f385) popup_call_audio_first_window_g1_ParamLimits

0xbe93,	// (0x0003f385) popup_call_audio_first_window_g1

0xbedf,	// (0x0003f3d1) popup_call_audio_first_window_g2_ParamLimits

0xbedf,	// (0x0003f3d1) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000425ed) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000425ed) popup_call_audio_first_window_g

0xbf23,	// (0x0003f415) popup_call_audio_first_window_t1_ParamLimits

0xbf23,	// (0x0003f415) popup_call_audio_first_window_t1

0xbfcf,	// (0x0003f4c1) popup_call_audio_first_window_t4_ParamLimits

0xbfcf,	// (0x0003f4c1) popup_call_audio_first_window_t4

0xc05b,	// (0x0003f54d) popup_call_audio_first_window_t5_ParamLimits

0xc05b,	// (0x0003f54d) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x000425f2) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x000425f2) popup_call_audio_first_window_t

0xc08a,	// (0x0003f57c) bg_popup_call_pane_cp02

0xc094,	// (0x0003f586) call_type_pane_cp023

0xc09c,	// (0x0003f58e) popup_call_audio_wait_window_g1

0xc0a4,	// (0x0003f596) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x000425f9) popup_call_audio_wait_window_g

0xc0ac,	// (0x0003f59e) popup_call_audio_wait_window_t3

0xc0ba,	// (0x0003f5ac) bg_popup_call_pane_cp03_ParamLimits

0xc0ba,	// (0x0003f5ac) bg_popup_call_pane_cp03

0xc11a,	// (0x0003f60c) call_thumbnail_pane_cp011_ParamLimits

0xc11a,	// (0x0003f60c) call_thumbnail_pane_cp011

0xc126,	// (0x0003f618) call_type_pane_cp034_ParamLimits

0xc126,	// (0x0003f618) call_type_pane_cp034

0xc162,	// (0x0003f654) popup_call_audio_second_window_g1_ParamLimits

0xc162,	// (0x0003f654) popup_call_audio_second_window_g1

0xc19e,	// (0x0003f690) popup_call_audio_second_window_g2_ParamLimits

0xc19e,	// (0x0003f690) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000425fe) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000425fe) popup_call_audio_second_window_g

0xc1da,	// (0x0003f6cc) popup_call_audio_second_window_t1_ParamLimits

0xc1da,	// (0x0003f6cc) popup_call_audio_second_window_t1

0xc25b,	// (0x0003f74d) popup_call_audio_second_window_t2_ParamLimits

0xc25b,	// (0x0003f74d) popup_call_audio_second_window_t2

0xc291,	// (0x0003f783) popup_call_audio_second_window_t3_ParamLimits

0xc291,	// (0x0003f783) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00042603) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00042603) popup_call_audio_second_window_t

0xc08a,	// (0x0003f57c) bg_popup_call_pane_cp04

0xc2c7,	// (0x0003f7b9) list_conf_pane

0xc2cf,	// (0x0003f7c1) popup_call_audio_conf_window_t1

0xc2dd,	// (0x0003f7cf) call_thumbnail_pane_g1

0xc2e5,	// (0x0003f7d7) bg_pinb_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_pinb_pane

0xc2f3,	// (0x0003f7e5) find_pinb_pane

0xc2fc,	// (0x0003f7ee) listscroll_pinb_pane_ParamLimits

0xc2fc,	// (0x0003f7ee) listscroll_pinb_pane

0xc30b,	// (0x0003f7fd) pinb_bg_pane_g1

0x46de,	// (0x00037bd0) pinb_bg_pane_g2

0x46ea,	// (0x00037bdc) pinb_bg_pane_g3

0x46f6,	// (0x00037be8) pinb_bg_pane_g4

0x4702,	// (0x00037bf4) pinb_bg_pane_g5

0x470e,	// (0x00037c00) pinb_bg_pane_g6

0x4719,	// (0x00037c0b) pinb_bg_pane_g7

0x4724,	// (0x00037c16) pinb_bg_pane_g8

0x472f,	// (0x00037c21) pinb_bg_pane_g9

0x4739,	// (0x00037c2b) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0004260a) pinb_bg_pane_g

0x4756,	// (0x00037c48) grid_pinb_pane

0x4761,	// (0x00037c53) list_pinb_pane

0x476c,	// (0x00037c5e) scroll_pane_cp01_ParamLimits

0x476c,	// (0x00037c5e) scroll_pane_cp01

0xc315,	// (0x0003f807) find_pinb_pane_g1_ParamLimits

0xc315,	// (0x0003f807) find_pinb_pane_g1

0xc32d,	// (0x0003f81f) find_pinb_pane_t1

0xc33f,	// (0x0003f831) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00042624) find_pinb_pane_t

0xc354,	// (0x0003f846) input_focus_pane_cp01_ParamLimits

0xc354,	// (0x0003f846) input_focus_pane_cp01

0x477e,	// (0x00037c70) cell_pinb_pane_ParamLimits

0x477e,	// (0x00037c70) cell_pinb_pane

0x47a6,	// (0x00037c98) cell_pinb_pane_g1_ParamLimits

0x47a6,	// (0x00037c98) cell_pinb_pane_g1

0x47bb,	// (0x00037cad) cell_pinb_pane_g2_ParamLimits

0x47bb,	// (0x00037cad) cell_pinb_pane_g2

0xc360,	// (0x0003f852) cell_pinb_pane_g3_ParamLimits

0xc360,	// (0x0003f852) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00042629) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00042629) cell_pinb_pane_g

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp01

0x47c7,	// (0x00037cb9) list_pinb_item_pane_ParamLimits

0x47c7,	// (0x00037cb9) list_pinb_item_pane

0xc08a,	// (0x0003f57c) list_highlight_pane_cp02

0x47ed,	// (0x00037cdf) list_pinb_item_pane_g1_ParamLimits

0x47ed,	// (0x00037cdf) list_pinb_item_pane_g1

0x47fa,	// (0x00037cec) list_pinb_item_pane_g2_ParamLimits

0x47fa,	// (0x00037cec) list_pinb_item_pane_g2

0x4806,	// (0x00037cf8) list_pinb_item_pane_g3_ParamLimits

0x4806,	// (0x00037cf8) list_pinb_item_pane_g3

0x4817,	// (0x00037d09) list_pinb_item_pane_g4_ParamLimits

0x4817,	// (0x00037d09) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00042630) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00042630) list_pinb_item_pane_g

0x4823,	// (0x00037d15) list_pinb_item_pane_t1_ParamLimits

0x4823,	// (0x00037d15) list_pinb_item_pane_t1

0x4854,	// (0x00037d46) calc_display_pane

0x4872,	// (0x00037d64) calc_paper_pane

0x488e,	// (0x00037d80) grid_calc_pane

0xc08a,	// (0x0003f57c) bg_list_pane_cp01

0x48ba,	// (0x00037dac) clock_g1

0x48c2,	// (0x00037db4) clock_g2

0x0001,

0xf147,	// (0x00042639) clock_g

0x48cc,	// (0x00037dbe) clock_t1_ParamLimits

0x48cc,	// (0x00037dbe) clock_t1

0x48e1,	// (0x00037dd3) clock_t2_ParamLimits

0x48e1,	// (0x00037dd3) clock_t2

0x48f3,	// (0x00037de5) clock_t3_ParamLimits

0x48f3,	// (0x00037de5) clock_t3

0x4905,	// (0x00037df7) clock_t4_ParamLimits

0x4905,	// (0x00037df7) clock_t4

0x4917,	// (0x00037e09) clock_t5_ParamLimits

0x4917,	// (0x00037e09) clock_t5

0x492c,	// (0x00037e1e) clock_t6_ParamLimits

0x492c,	// (0x00037e1e) clock_t6

0x493e,	// (0x00037e30) clock_t7_ParamLimits

0x493e,	// (0x00037e30) clock_t7

0x4950,	// (0x00037e42) clock_t8_ParamLimits

0x4950,	// (0x00037e42) clock_t8

0x4966,	// (0x00037e58) clock_t9_ParamLimits

0x4966,	// (0x00037e58) clock_t9

0x0008,

0xf14c,	// (0x0004263e) clock_t_ParamLimits

0xf14c,	// (0x0004263e) clock_t

0xc36c,	// (0x0003f85e) popup_clock_analogue_window_cp02

0xc36c,	// (0x0003f85e) popup_clock_digital_window_cp01

0xc374,	// (0x0003f866) listscroll_help_pane

0xc08a,	// (0x0003f57c) phob_pre_status_pane

0xc37e,	// (0x0003f870) grid_qdial_pane

0xc08a,	// (0x0003f57c) listscroll_mce_pane

0xc388,	// (0x0003f87a) bg_notes_pane

0xc396,	// (0x0003f888) list_notes_pane

0x497c,	// (0x00037e6e) scroll_pane_cp06

0xc3a4,	// (0x0003f896) bg_calc_paper_pane

0x498b,	// (0x00037e7d) list_calc_pane

0xc3b8,	// (0x0003f8aa) bg_calc_display_pane

0x49a5,	// (0x00037e97) calc_display_pane_t1

0x49ba,	// (0x00037eac) calc_display_pane_t2

0x49cf,	// (0x00037ec1) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00042651) calc_display_pane_t

0x49e1,	// (0x00037ed3) cell_calc_pane_ParamLimits

0x49e1,	// (0x00037ed3) cell_calc_pane

0xc3c4,	// (0x0003f8b6) bg_calc_paper_pane_g1

0xc3d0,	// (0x0003f8c2) bg_calc_paper_pane_g2

0xc3dc,	// (0x0003f8ce) bg_calc_paper_pane_g3

0xc3e8,	// (0x0003f8da) bg_calc_paper_pane_g4

0xc3f4,	// (0x0003f8e6) bg_calc_paper_pane_g5

0x4a0e,	// (0x00037f00) bg_calc_paper_pane_g6

0x4a1f,	// (0x00037f11) bg_calc_paper_pane_g7

0x4a30,	// (0x00037f22) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00042658) bg_calc_paper_pane_g

0x4a41,	// (0x00037f33) calc_bg_paper_pane_g9

0x4a52,	// (0x00037f44) list_calc_item_pane_ParamLimits

0x4a52,	// (0x00037f44) list_calc_item_pane

0xc400,	// (0x0003f8f2) list_calc_item_pane_g1

0x4a81,	// (0x00037f73) list_calc_item_pane_t1_ParamLimits

0x4a81,	// (0x00037f73) list_calc_item_pane_t1

0x4a93,	// (0x00037f85) list_calc_item_pane_t2_ParamLimits

0x4a93,	// (0x00037f85) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00042669) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00042669) list_calc_item_pane_t

0xc40d,	// (0x0003f8ff) cell_calc_pane_g1

0xc417,	// (0x0003f909) grid_highlight_pane_cp02

0xe525,	// (0x00041a17) bg_calc_display_pane_g1

0x4ac3,	// (0x00037fb5) bg_calc_display_pane_g2

0x4acd,	// (0x00037fbf) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00042673) bg_calc_display_pane_g

0x4ad6,	// (0x00037fc8) cell_qdial_pane_ParamLimits

0x4ad6,	// (0x00037fc8) cell_qdial_pane

0x4aea,	// (0x00037fdc) cell_qdial_pane_g1_ParamLimits

0x4aea,	// (0x00037fdc) cell_qdial_pane_g1

0x4af7,	// (0x00037fe9) cell_qdial_pane_g2_ParamLimits

0x4af7,	// (0x00037fe9) cell_qdial_pane_g2

0xc439,	// (0x0003f92b) cell_qdial_pane_g3_ParamLimits

0xc439,	// (0x0003f92b) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0004267a) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0004267a) cell_qdial_pane_g

0x4b15,	// (0x00038007) cell_qdial_pane_t1_ParamLimits

0x4b15,	// (0x00038007) cell_qdial_pane_t1

0x4b2d,	// (0x0003801f) cell_qdial_pane_t2_ParamLimits

0x4b2d,	// (0x0003801f) cell_qdial_pane_t2

0x4b40,	// (0x00038032) cell_qdial_pane_t3_ParamLimits

0x4b40,	// (0x00038032) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00042683) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00042683) cell_qdial_pane_t

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp04

0xc445,	// (0x0003f937) thumbnail_qdial_pane_ParamLimits

0xc445,	// (0x0003f937) thumbnail_qdial_pane

0xc4a1,	// (0x0003f993) list_help_pane

0xc4aa,	// (0x0003f99c) scroll_pane_cp02

0x4b53,	// (0x00038045) help_list_pane_t1_ParamLimits

0x4b53,	// (0x00038045) help_list_pane_t1

0x4b86,	// (0x00038078) bg_notes_pane_g2

0x4b8e,	// (0x00038080) bg_notes_pane_g3

0x4b96,	// (0x00038088) notes_bg_pane_g1

0x4b9e,	// (0x00038090) notes_bg_pane_g4

0x4ba6,	// (0x00038098) notes_bg_pane_g5

0x4bae,	// (0x000380a0) notes_bg_pane_g6

0x4bb6,	// (0x000380a8) notes_bg_pane_g7

0x4bbe,	// (0x000380b0) notes_bg_pane_g8

0x4bc6,	// (0x000380b8) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000426a1) notes_bg_pane_g

0x4bce,	// (0x000380c0) list_notes_text_pane_ParamLimits

0x4bce,	// (0x000380c0) list_notes_text_pane

0xc4b3,	// (0x0003f9a5) list_notes_text_pane_g1

0x3182,	// (0x00036674) list_notes_text_pane_t1

0xc3b8,	// (0x0003f8aa) listscroll_cale_week_pane

0x4c13,	// (0x00038105) bg_cale_heading_pane

0xc4cd,	// (0x0003f9bf) bg_cale_pane_cp01

0x4c2f,	// (0x00038121) cale_week_corner_pane

0x4c45,	// (0x00038137) cale_week_day_heading_pane

0x4c61,	// (0x00038153) cale_week_scroll_pane_g1

0x4c7a,	// (0x0003816c) cale_week_scroll_pane_g2

0x4c8b,	// (0x0003817d) cale_week_scroll_pane_g3

0x4c9c,	// (0x0003818e) cale_week_scroll_pane_g4

0x4cad,	// (0x0003819f) cale_week_scroll_pane_g5

0x4cbe,	// (0x000381b0) cale_week_scroll_pane_g6

0x4ccf,	// (0x000381c1) cale_week_scroll_pane_g7

0x4ce2,	// (0x000381d4) cale_week_scroll_pane_g8

0x4cf5,	// (0x000381e7) cale_week_scroll_pane_g9

0x4d06,	// (0x000381f8) cale_week_scroll_pane_g10

0x4d17,	// (0x00038209) cale_week_scroll_pane_g11

0x4d28,	// (0x0003821a) cale_week_scroll_pane_g12

0x4d39,	// (0x0003822b) cale_week_scroll_pane_g13

0x4d52,	// (0x00038244) cale_week_scroll_pane_g14

0x4d6b,	// (0x0003825d) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000426b0) cale_week_scroll_pane_g

0x4d84,	// (0x00038276) cale_week_time_pane

0x4d97,	// (0x00038289) grid_cale_week_pane

0x4db4,	// (0x000382a6) scroll_pane_cp08

0x4dce,	// (0x000382c0) cell_cale_week_pane_ParamLimits

0x4dce,	// (0x000382c0) cell_cale_week_pane

0x4e1a,	// (0x0003830c) cale_week_day_heading_pane_t1

0x4e33,	// (0x00038325) cale_week_day_heading_pane_t2

0x4e4c,	// (0x0003833e) cale_week_day_heading_pane_t3

0x4e65,	// (0x00038357) cale_week_day_heading_pane_t4

0x4e7e,	// (0x00038370) cale_week_day_heading_pane_t5

0x4e97,	// (0x00038389) cale_week_day_heading_pane_t6

0x4eb0,	// (0x000383a2) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000426cf) cale_week_day_heading_pane_t

0xc4f8,	// (0x0003f9ea) bg_cale_side_pane

0x4ec9,	// (0x000383bb) cale_week_time_pane_t1

0x4ee1,	// (0x000383d3) cale_week_time_pane_t2

0x4ef9,	// (0x000383eb) cale_week_time_pane_t3

0x4f11,	// (0x00038403) cale_week_time_pane_t4

0x4f29,	// (0x0003841b) cale_week_time_pane_t5

0x4f41,	// (0x00038433) cale_week_time_pane_t6

0x4f59,	// (0x0003844b) cale_week_time_pane_t7

0x4f79,	// (0x0003846b) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000426de) cale_week_time_pane_t

0x4f99,	// (0x0003848b) cell_cale_week_pane_g2

0x4faa,	// (0x0003849c) cell_cale_week_pane_g3_ParamLimits

0x4faa,	// (0x0003849c) cell_cale_week_pane_g3

0xc506,	// (0x0003f9f8) grid_highlight_pane_cp07

0xc50e,	// (0x0003fa00) listscroll_gms_pane

0xc518,	// (0x0003fa0a) grid_gms_pane

0xc521,	// (0x0003fa13) listscroll_gms_pane_g1

0xc529,	// (0x0003fa1b) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000426ef) listscroll_gms_pane_g

0x4fc2,	// (0x000384b4) scroll_pane_cp010

0x4fcd,	// (0x000384bf) cell_gms_pane_ParamLimits

0x4fcd,	// (0x000384bf) cell_gms_pane

0x4fe0,	// (0x000384d2) cell_gms_pane_g1

0xc531,	// (0x0003fa23) cell_gms_pane_g2

0xc539,	// (0x0003fa2b) cell_gms_pane_g3

0xc542,	// (0x0003fa34) cell_gms_pane_g4

0x0003,

0xf202,	// (0x000426f4) cell_gms_pane_g

0xc54b,	// (0x0003fa3d) grid_highlight_pane_cp09

0x7177,	// (0x0003a669) phob_pre_status_pane_g1

0x717f,	// (0x0003a671) phob_pre_status_pane_g2

0x7187,	// (0x0003a679) phob_pre_status_pane_g3

0x718f,	// (0x0003a681) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00042ae3) phob_pre_status_pane_g

0x719f,	// (0x0003a691) phob_pre_status_pane_t1

0x71af,	// (0x0003a6a1) phob_pre_status_pane_t2

0x71bf,	// (0x0003a6b1) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00042aee) phob_pre_status_pane_t

0xc08a,	// (0x0003f57c) bg_list_pane_cp05

0x4ff0,	// (0x000384e2) grid_vorec_pane

0x4ffc,	// (0x000384ee) vorec_t1

0x500a,	// (0x000384fc) vorec_t2

0x5018,	// (0x0003850a) vorec_t3

0x5026,	// (0x00038518) vorec_t4

0x5034,	// (0x00038526) vorec_t5

0x5042,	// (0x00038534) vorec_t6

0x0006,

0xf20b,	// (0x000426fd) vorec_t

0x505e,	// (0x00038550) wait_bar_pane_cp01

0x5066,	// (0x00038558) cell_vorec_pane_ParamLimits

0x5066,	// (0x00038558) cell_vorec_pane

0xc553,	// (0x0003fa45) cell_vorec_pane_g1

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp05

0x5089,	// (0x0003857b) cams_zoom_pane

0x5095,	// (0x00038587) image_vga_pane

0x50a4,	// (0x00038596) main_camera_pane_g1

0x50b2,	// (0x000385a4) main_camera_pane_g2

0x50be,	// (0x000385b0) main_camera_pane_g3

0x50ca,	// (0x000385bc) main_camera_pane_g4

0x50d6,	// (0x000385c8) main_camera_pane_g5

0x50e2,	// (0x000385d4) main_camera_pane_g6

0x50ee,	// (0x000385e0) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0004270c) main_camera_pane_g

0x50fa,	// (0x000385ec) main_camera_pane_t1

0x510c,	// (0x000385fe) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0004271d) main_camera_pane_t

0x512d,	// (0x0003861f) cams_zoom_pane_cp_ParamLimits

0x512d,	// (0x0003861f) cams_zoom_pane_cp

0x5151,	// (0x00038643) image_cif_pane_ParamLimits

0x5151,	// (0x00038643) image_cif_pane

0x516f,	// (0x00038661) image_subqcif_pane

0x5177,	// (0x00038669) main_video_pane_g1_ParamLimits

0x5177,	// (0x00038669) main_video_pane_g1

0x5197,	// (0x00038689) main_video_pane_g2_ParamLimits

0x5197,	// (0x00038689) main_video_pane_g2

0x51c7,	// (0x000386b9) main_video_pane_g3_ParamLimits

0x51c7,	// (0x000386b9) main_video_pane_g3

0x51f0,	// (0x000386e2) main_video_pane_g4_ParamLimits

0x51f0,	// (0x000386e2) main_video_pane_g4

0x5219,	// (0x0003870b) main_video_pane_g5_ParamLimits

0x5219,	// (0x0003870b) main_video_pane_g5

0xc569,	// (0x0003fa5b) main_video_pane_g6_ParamLimits

0xc569,	// (0x0003fa5b) main_video_pane_g6

0x0006,

0xf230,	// (0x00042722) main_video_pane_g_ParamLimits

0xf230,	// (0x00042722) main_video_pane_g

0x523b,	// (0x0003872d) main_video_pane_t1_ParamLimits

0x523b,	// (0x0003872d) main_video_pane_t1

0xc583,	// (0x0003fa75) cams_zoom_pane_g1

0xc58c,	// (0x0003fa7e) cams_zoom_pane_g2

0xc595,	// (0x0003fa87) cams_zoom_pane_g3

0xc59e,	// (0x0003fa90) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00042731) cams_zoom_pane_g

0x5285,	// (0x00038777) grid_cams_pane

0x5293,	// (0x00038785) linegrid_cams_pane

0x52a1,	// (0x00038793) cell_cams_pane_ParamLimits

0x52a1,	// (0x00038793) cell_cams_pane

0xc5a7,	// (0x0003fa99) cams_burst_image_pane

0xc5af,	// (0x0003faa1) cell_cams_pane_g1

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp03

0xc40d,	// (0x0003f8ff) mp_bg_pane_g1

0xc08a,	// (0x0003f57c) bg_list_pane_cp03

0xe1c4,	// (0x000416b6) bg_mp_pane

0xe1cc,	// (0x000416be) grid_mp_pane

0xe1d4,	// (0x000416c6) media_player_g1

0xe1dc,	// (0x000416ce) media_player_t1

0xe1ea,	// (0x000416dc) media_player_t2

0xe1f8,	// (0x000416ea) media_player_t3

0xe206,	// (0x000416f8) media_player_t4

0xe214,	// (0x00041706) media_player_t5

0xe222,	// (0x00041714) media_player_t6

0xe230,	// (0x00041722) media_player_t7

0x0006,

0xf5db,	// (0x00042acd) media_player_t

0xe23e,	// (0x00041730) wait_bar_pane_cp02

0xf5c0,	// (0x00042ab2) main_usb_pane_t

0x716e,	// (0x0003a660) cell_mp_pane

0xc40d,	// (0x0003f8ff) cell_mp_pane_g1

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp06

0xc5b7,	// (0x0003faa9) grid_skin_colour_pane

0xc5bf,	// (0x0003fab1) list_highlight_pane_cp03

0x52b4,	// (0x000387a6) skin_g1

0xc5c7,	// (0x0003fab9) skin_t1

0xc5d6,	// (0x0003fac8) skin_t2

0x0001,

0xf274,	// (0x00042766) skin_t

0x52be,	// (0x000387b0) cell_skin_colour_pane_ParamLimits

0x52be,	// (0x000387b0) cell_skin_colour_pane

0xc5e4,	// (0x0003fad6) cell_skin_colour_pane_g1

0x5342,	// (0x00038834) call_video_g1_ParamLimits

0x5342,	// (0x00038834) call_video_g1

0x5352,	// (0x00038844) call_video_g2_ParamLimits

0x5352,	// (0x00038844) call_video_g2

0x0001,

0xf279,	// (0x0004276b) call_video_g_ParamLimits

0xf279,	// (0x0004276b) call_video_g

0x53ac,	// (0x0003889e) call_video_uplink_pane_cp1_ParamLimits

0x53ac,	// (0x0003889e) call_video_uplink_pane_cp1

0xc5f6,	// (0x0003fae8) call_video_uplink_pane_cp2

0x5478,	// (0x0003896a) video_down_crop_pane_ParamLimits

0x5478,	// (0x0003896a) video_down_crop_pane

0x5576,	// (0x00038a68) video_down_pane_ParamLimits

0x5576,	// (0x00038a68) video_down_pane

0xc5fe,	// (0x0003faf0) video_down_subqcif_pane_ParamLimits

0xc5fe,	// (0x0003faf0) video_down_subqcif_pane

0xc616,	// (0x0003fb08) video_down_subqcif_pane_cp_ParamLimits

0xc616,	// (0x0003fb08) video_down_subqcif_pane_cp

0xc63c,	// (0x0003fb2e) im_reading_pane_ParamLimits

0xc63c,	// (0x0003fb2e) im_reading_pane

0x5698,	// (0x00038b8a) im_writing_pane_ParamLimits

0x5698,	// (0x00038b8a) im_writing_pane

0x56b6,	// (0x00038ba8) im_reading_pane_t1

0xc656,	// (0x0003fb48) list_im_pane

0xc667,	// (0x0003fb59) scroll_pane_cp07

0x570a,	// (0x00038bfc) im_writing_pane_t1_ParamLimits

0x570a,	// (0x00038bfc) im_writing_pane_t1

0xc680,	// (0x0003fb72) im_writing_pane_t2_ParamLimits

0xc680,	// (0x0003fb72) im_writing_pane_t2

0x0001,

0xf283,	// (0x00042775) im_writing_pane_t_ParamLimits

0xf283,	// (0x00042775) im_writing_pane_t

0xc08a,	// (0x0003f57c) input_focus_pane_cp04

0xc08a,	// (0x0003f57c) input_focus_pane_cp05

0x571f,	// (0x00038c11) list_im_single_pane_ParamLimits

0x571f,	// (0x00038c11) list_im_single_pane

0x5743,	// (0x00038c35) list_single_im_pane_t1

0x7132,	// (0x0003a624) blid_accuracy_pane

0x713a,	// (0x0003a62c) blid_compass_pane

0x7144,	// (0x0003a636) main_location_t1

0x7152,	// (0x0003a644) main_location_t2

0x7160,	// (0x0003a652) main_location_t3

0x0002,

0xf5ea,	// (0x00042adc) main_location_t

0xc08a,	// (0x0003f57c) aid_levels_location

0xc40d,	// (0x0003f8ff) blid_accuracy_pane_g1

0xc40d,	// (0x0003f8ff) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000427d7) blid_accuracy_pane_g

0xc6c8,	// (0x0003fbba) wml_content_pane

0xc706,	// (0x0003fbf8) wml_button_pane_ParamLimits

0xc706,	// (0x0003fbf8) wml_button_pane

0x5752,	// (0x00038c44) wml_list_single_large_pane_ParamLimits

0x5752,	// (0x00038c44) wml_list_single_large_pane

0x577c,	// (0x00038c6e) wml_list_single_medium_pane_ParamLimits

0x577c,	// (0x00038c6e) wml_list_single_medium_pane

0x57ad,	// (0x00038c9f) wml_list_single_small_pane_ParamLimits

0x57ad,	// (0x00038c9f) wml_list_single_small_pane

0xc71a,	// (0x0003fc0c) wml_selection_box_pane_ParamLimits

0xc71a,	// (0x0003fc0c) wml_selection_box_pane

0xc72d,	// (0x0003fc1f) wml_list_single_pane_t1

0xc73c,	// (0x0003fc2e) wml_list_single_medium_pane_t1

0xc74b,	// (0x0003fc3d) wml_list_single_large_pane_t1

0xc75a,	// (0x0003fc4c) input_focus_pane_cp02_ParamLimits

0xc75a,	// (0x0003fc4c) input_focus_pane_cp02

0xc76d,	// (0x0003fc5f) wml_selection_box_pane_g1

0xc776,	// (0x0003fc68) wml_selection_box_pane_t1_ParamLimits

0xc776,	// (0x0003fc68) wml_selection_box_pane_t1

0xc2e5,	// (0x0003f7d7) bg_wml_button_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_wml_button_pane

0xc78e,	// (0x0003fc80) wml_button_pane_g1

0xc796,	// (0x0003fc88) wml_button_pane_t1

0xc78e,	// (0x0003fc80) wml_button_bg_pane_g1

0xc7a6,	// (0x0003fc98) wml_button_bg_pane_g2

0xc7ae,	// (0x0003fca0) wml_button_bg_pane_g3

0xc7b6,	// (0x0003fca8) wml_button_bg_pane_g4

0xc7be,	// (0x0003fcb0) wml_button_bg_pane_g5

0xc7c6,	// (0x0003fcb8) wml_button_bg_pane_g6

0xc7ce,	// (0x0003fcc0) wml_button_bg_pane_g7

0xc7d6,	// (0x0003fcc8) wml_button_bg_pane_g8

0xc7de,	// (0x0003fcd0) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0004277a) wml_button_bg_pane_g

0x57e7,	// (0x00038cd9) bg_list_pane_cp02

0xc7e6,	// (0x0003fcd8) mce_header_pane_ParamLimits

0xc7e6,	// (0x0003fcd8) mce_header_pane

0xc7fc,	// (0x0003fcee) mce_icon_pane

0xc7fc,	// (0x0003fcee) mce_image_pane

0xc805,	// (0x0003fcf7) mce_text_pane_ParamLimits

0xc805,	// (0x0003fcf7) mce_text_pane

0x57f1,	// (0x00038ce3) scroll_pane_cp03

0xc6fe,	// (0x0003fbf0) scroll_pane_cp04

0xc818,	// (0x0003fd0a) scroll_pane_cp05_ParamLimits

0xc818,	// (0x0003fd0a) scroll_pane_cp05

0x57fb,	// (0x00038ced) mce_header_field_pane_ParamLimits

0x57fb,	// (0x00038ced) mce_header_field_pane

0x581b,	// (0x00038d0d) mce_header_field_pane_2_ParamLimits

0x581b,	// (0x00038d0d) mce_header_field_pane_2

0x5831,	// (0x00038d23) mce_header_field_pane_3

0x5839,	// (0x00038d2b) list_single_mce_message_pane_ParamLimits

0x5839,	// (0x00038d2b) list_single_mce_message_pane

0x585e,	// (0x00038d50) list_single_mce_smart_pane_ParamLimits

0x585e,	// (0x00038d50) list_single_mce_smart_pane

0xc824,	// (0x0003fd16) input_focus_pane_cp03

0xc82d,	// (0x0003fd1f) list_header_data_pane

0x588e,	// (0x00038d80) mce_header_field_pane_t1

0x589c,	// (0x00038d8e) list_single_mce_header_pane_ParamLimits

0x589c,	// (0x00038d8e) list_single_mce_header_pane

0xc835,	// (0x0003fd27) list_single_mce_header_pane_t1

0xc844,	// (0x0003fd36) list_single_mce_message_pane_g1

0xc84c,	// (0x0003fd3e) list_single_mce_message_pane_t1

0x58e0,	// (0x00038dd2) bg_cale_heading_pane_cp01_ParamLimits

0x58e0,	// (0x00038dd2) bg_cale_heading_pane_cp01

0xc85a,	// (0x0003fd4c) bg_cale_pane_cp02_ParamLimits

0xc85a,	// (0x0003fd4c) bg_cale_pane_cp02

0x5913,	// (0x00038e05) cale_month_corner_pane

0x5929,	// (0x00038e1b) cale_month_day_heading_pane_ParamLimits

0x5929,	// (0x00038e1b) cale_month_day_heading_pane

0x596c,	// (0x00038e5e) cale_month_pane_g1_ParamLimits

0x596c,	// (0x00038e5e) cale_month_pane_g1

0x5998,	// (0x00038e8a) cale_month_pane_g2_ParamLimits

0x5998,	// (0x00038e8a) cale_month_pane_g2

0x59bb,	// (0x00038ead) cale_month_pane_g3_ParamLimits

0x59bb,	// (0x00038ead) cale_month_pane_g3

0x59f7,	// (0x00038ee9) cale_month_pane_g4_ParamLimits

0x59f7,	// (0x00038ee9) cale_month_pane_g4

0x5a33,	// (0x00038f25) cale_month_pane_g5_ParamLimits

0x5a33,	// (0x00038f25) cale_month_pane_g5

0x5a6f,	// (0x00038f61) cale_month_pane_g6_ParamLimits

0x5a6f,	// (0x00038f61) cale_month_pane_g6

0x5aab,	// (0x00038f9d) cale_month_pane_g7_ParamLimits

0x5aab,	// (0x00038f9d) cale_month_pane_g7

0x5af7,	// (0x00038fe9) cale_month_pane_g8_ParamLimits

0x5af7,	// (0x00038fe9) cale_month_pane_g8

0x5b43,	// (0x00039035) cale_month_pane_g9_ParamLimits

0x5b43,	// (0x00039035) cale_month_pane_g9

0x5b89,	// (0x0003907b) cale_month_pane_g10_ParamLimits

0x5b89,	// (0x0003907b) cale_month_pane_g10

0x5bc3,	// (0x000390b5) cale_month_pane_g11_ParamLimits

0x5bc3,	// (0x000390b5) cale_month_pane_g11

0x5c01,	// (0x000390f3) cale_month_pane_g12_ParamLimits

0x5c01,	// (0x000390f3) cale_month_pane_g12

0x5c3f,	// (0x00039131) cale_month_pane_g13_ParamLimits

0x5c3f,	// (0x00039131) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0004278d) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0004278d) cale_month_pane_g

0x5c7d,	// (0x0003916f) cale_month_week_pane

0x5c90,	// (0x00039182) grid_cale_month_pane_ParamLimits

0x5c90,	// (0x00039182) grid_cale_month_pane

0x5cce,	// (0x000391c0) cale_month_day_heading_pane_t1

0x5d2c,	// (0x0003921e) cale_month_day_heading_pane_t2

0x5d91,	// (0x00039283) cale_month_day_heading_pane_t3

0x5df6,	// (0x000392e8) cale_month_day_heading_pane_t4

0x5e5b,	// (0x0003934d) cale_month_day_heading_pane_t5

0x5ec0,	// (0x000393b2) cale_month_day_heading_pane_t6

0x5f25,	// (0x00039417) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000427a8) cale_month_day_heading_pane_t

0xc4f8,	// (0x0003f9ea) bg_cale_side_pane_cp01

0x5f9a,	// (0x0003948c) cale_month_week_pane_t1

0x5fb1,	// (0x000394a3) cale_month_week_pane_t2

0x5fc8,	// (0x000394ba) cale_month_week_pane_t3

0x5fdf,	// (0x000394d1) cale_month_week_pane_t4

0x5ff6,	// (0x000394e8) cale_month_week_pane_t5

0x6011,	// (0x00039503) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000427b7) cale_month_week_pane_t

0x6030,	// (0x00039522) cell_cale_month_pane_ParamLimits

0x6030,	// (0x00039522) cell_cale_month_pane

0x60f6,	// (0x000395e8) cell_cale_month_pane_g1

0x6102,	// (0x000395f4) cell_cale_month_pane_t1_ParamLimits

0x6102,	// (0x000395f4) cell_cale_month_pane_t1

0xc506,	// (0x0003f9f8) grid_highlight_pane_cp08

0xc40d,	// (0x0003f8ff) main_smil_g1

0x611e,	// (0x00039610) smil_status_pane

0xc88f,	// (0x0003fd81) smil_text_pane

0xe0e4,	// (0x000415d6) bg_popup_call3_rect_pane_g8

0xe0ec,	// (0x000415de) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00042a70) bg_popup_call3_rect_pane_g

0xe327,	// (0x00041819) smil_status_volume_pane_g1

0xc899,	// (0x0003fd8b) smil_status_pane_t1

0x7557,	// (0x0003aa49) volume_smil_pane

0xc8b0,	// (0x0003fda2) list_smil_text_pane

0x6131,	// (0x00039623) scroll_pane_cp011

0x613c,	// (0x0003962e) smil_text_list_pane_t1_ParamLimits

0x613c,	// (0x0003962e) smil_text_list_pane_t1

0x61b4,	// (0x000396a6) aid_volume_smil_ParamLimits

0x61b4,	// (0x000396a6) aid_volume_smil

0xc40d,	// (0x0003f8ff) smil_volume_pane_g1

0xc40d,	// (0x0003f8ff) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000427d7) smil_volume_pane_g

0xc3b8,	// (0x0003f8aa) listscroll_cale_day_pane

0xc8ba,	// (0x0003fdac) bg_cale_pane

0xc8d2,	// (0x0003fdc4) list_cale_pane

0xc8e3,	// (0x0003fdd5) scroll_pane_cp09

0xc8f4,	// (0x0003fde6) cale_bg_pane_g1

0xc8fc,	// (0x0003fdee) cale_bg_pane_g2

0xc904,	// (0x0003fdf6) cale_bg_pane_g3

0xc90c,	// (0x0003fdfe) cale_bg_pane_g4

0xc914,	// (0x0003fe06) cale_bg_pane_g5

0xc91c,	// (0x0003fe0e) cale_bg_pane_g6

0xc924,	// (0x0003fe16) cale_bg_pane_g7

0xc92c,	// (0x0003fe1e) cale_bg_pane_g8

0xc934,	// (0x0003fe26) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000427dc) cale_bg_pane_g

0x61d6,	// (0x000396c8) list_cale_time_pane_ParamLimits

0x61d6,	// (0x000396c8) list_cale_time_pane

0xc93c,	// (0x0003fe2e) list_cale_time_pane_g1_ParamLimits

0xc93c,	// (0x0003fe2e) list_cale_time_pane_g1

0xc948,	// (0x0003fe3a) list_cale_time_pane_g2_ParamLimits

0xc948,	// (0x0003fe3a) list_cale_time_pane_g2

0x61f2,	// (0x000396e4) list_cale_time_pane_g3_ParamLimits

0x61f2,	// (0x000396e4) list_cale_time_pane_g3

0x6200,	// (0x000396f2) list_cale_time_pane_g4_ParamLimits

0x6200,	// (0x000396f2) list_cale_time_pane_g4

0x620e,	// (0x00039700) list_cale_time_pane_g5_ParamLimits

0x620e,	// (0x00039700) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000427ef) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000427ef) list_cale_time_pane_g

0xc962,	// (0x0003fe54) list_cale_time_pane_t1_ParamLimits

0xc962,	// (0x0003fe54) list_cale_time_pane_t1

0xc98a,	// (0x0003fe7c) list_cale_time_pane_t2_ParamLimits

0xc98a,	// (0x0003fe7c) list_cale_time_pane_t2

0x64e5,	// (0x000399d7) aid_blid_cardinal_pane

0x6527,	// (0x00039a19) compass_pane_t4

0xc9b2,	// (0x0003fea4) list_cale_time_pane_t4_ParamLimits

0xc9b2,	// (0x0003fea4) list_cale_time_pane_t4

0x6535,	// (0x00039a27) compass_pane_t5

0x6545,	// (0x00039a37) compass_pane_t6

0x6553,	// (0x00039a45) compass_pane_t7

0xcdeb,	// (0x000402dd) navi_pane_cc_t1

0xcf40,	// (0x00040432) aid_phob_thumbnail_center_pane

0x6c38,	// (0x0003a12a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x000427fc) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x000427fc) list_cale_time_pane_t

0xbce1,	// (0x0003f1d3) bg_popup_window_pane_cp02_ParamLimits

0xbce1,	// (0x0003f1d3) bg_popup_window_pane_cp02

0xc9da,	// (0x0003fecc) heading_pane_cp01_ParamLimits

0xc9da,	// (0x0003fecc) heading_pane_cp01

0xc9e6,	// (0x0003fed8) loc_req_pane_ParamLimits

0xc9e6,	// (0x0003fed8) loc_req_pane

0xc9f6,	// (0x0003fee8) loc_type_pane_ParamLimits

0xc9f6,	// (0x0003fee8) loc_type_pane

0xca08,	// (0x0003fefa) loc_type_pane_t1_ParamLimits

0xca08,	// (0x0003fefa) loc_type_pane_t1

0xca1a,	// (0x0003ff0c) loc_type_pane_t2_ParamLimits

0xca1a,	// (0x0003ff0c) loc_type_pane_t2

0xca2c,	// (0x0003ff1e) loc_type_pane_t3_ParamLimits

0xca2c,	// (0x0003ff1e) loc_type_pane_t3

0x0002,

0xf311,	// (0x00042803) loc_type_pane_t_ParamLimits

0xf311,	// (0x00042803) loc_type_pane_t

0xca3e,	// (0x0003ff30) list_loc_req_pane

0xca48,	// (0x0003ff3a) scroll_pane_cp012

0x621c,	// (0x0003970e) list_single_loc_request_popup_menu_pane_ParamLimits

0x621c,	// (0x0003970e) list_single_loc_request_popup_menu_pane

0xca53,	// (0x0003ff45) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xca53,	// (0x0003ff45) list_single_loc_request_popup_menu_pane_g1

0xca5f,	// (0x0003ff51) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xca5f,	// (0x0003ff51) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0004280a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0004280a) list_single_loc_request_popup_menu_pane_g

0xca6b,	// (0x0003ff5d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xca6b,	// (0x0003ff5d) list_single_loc_request_popup_menu_pane_t1

0x622e,	// (0x00039720) bg_popup_window_pane_cp03_ParamLimits

0x622e,	// (0x00039720) bg_popup_window_pane_cp03

0x623c,	// (0x0003972e) heading_loc_req_pane_ParamLimits

0x623c,	// (0x0003972e) heading_loc_req_pane

0x6248,	// (0x0003973a) popup_dyc_status_message_window_g1_ParamLimits

0x6248,	// (0x0003973a) popup_dyc_status_message_window_g1

0x6254,	// (0x00039746) popup_dyc_status_message_window_t1_ParamLimits

0x6254,	// (0x00039746) popup_dyc_status_message_window_t1

0x6266,	// (0x00039758) popup_dyc_status_message_window_t2_ParamLimits

0x6266,	// (0x00039758) popup_dyc_status_message_window_t2

0x6278,	// (0x0003976a) popup_dyc_status_message_window_t3_ParamLimits

0x6278,	// (0x0003976a) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0004280f) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0004280f) popup_dyc_status_message_window_t

0xc08a,	// (0x0003f57c) bg_heading_pane_cp01

0xca81,	// (0x0003ff73) heading_loc_req_pane_g1

0xca89,	// (0x0003ff7b) heading_loc_req_pane_g2

0xca91,	// (0x0003ff83) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00042816) heading_loc_req_pane_g

0xca99,	// (0x0003ff8b) heading_loc_req_pane_t1

0xcaa8,	// (0x0003ff9a) bg_popup_sub_pane_cp01_ParamLimits

0xcaa8,	// (0x0003ff9a) bg_popup_sub_pane_cp01

0xcab6,	// (0x0003ffa8) popup_cale_events_window_g1_ParamLimits

0xcab6,	// (0x0003ffa8) popup_cale_events_window_g1

0xcad6,	// (0x0003ffc8) popup_cale_events_window_g2_ParamLimits

0xcad6,	// (0x0003ffc8) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0004284a) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0004284a) popup_cale_events_window_g

0xcaf6,	// (0x0003ffe8) popup_cale_events_window_t1_ParamLimits

0xcaf6,	// (0x0003ffe8) popup_cale_events_window_t1

0xcb08,	// (0x0003fffa) popup_cale_events_window_t2_ParamLimits

0xcb08,	// (0x0003fffa) popup_cale_events_window_t2

0xcb46,	// (0x00040038) popup_cale_events_window_t3_ParamLimits

0xcb46,	// (0x00040038) popup_cale_events_window_t3

0xcb80,	// (0x00040072) popup_cale_events_window_t4_ParamLimits

0xcb80,	// (0x00040072) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0004284f) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0004284f) popup_cale_events_window_t

0x62a2,	// (0x00039794) call_type_pane

0xcbb6,	// (0x000400a8) popup_call_status_window_g1

0x62ae,	// (0x000397a0) popup_call_status_window_g2

0x62ba,	// (0x000397ac) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00042858) popup_call_status_window_g

0xcbc4,	// (0x000400b6) call_type_pane_g1

0xcbcd,	// (0x000400bf) call_type_pane_g2

0x0001,

0xf36d,	// (0x0004285f) call_type_pane_g

0xc08a,	// (0x0003f57c) bg_popup_sub_pane_cp02

0xcbd6,	// (0x000400c8) listscroll_popup_wml_pane

0xcbde,	// (0x000400d0) list_wml_pane

0xcbe8,	// (0x000400da) scroll_pane_cp013

0xcbf3,	// (0x000400e5) list_single_graphic_popup_wml_pane_ParamLimits

0xcbf3,	// (0x000400e5) list_single_graphic_popup_wml_pane

0xc40d,	// (0x0003f8ff) list_single_graphic_popup_wml_pane_g1

0xcc07,	// (0x000400f9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00042864) list_single_graphic_popup_wml_pane_g

0xcc0f,	// (0x00040101) list_single_graphic_popup_wml_pane_t1

0xcc25,	// (0x00040117) aid_call_pane

0xc2dd,	// (0x0003f7cf) popup_clock_analogue_window_g1

0xc2dd,	// (0x0003f7cf) popup_clock_analogue_window_g2

0x62c6,	// (0x000397b8) popup_clock_analogue_window_g3

0x62c6,	// (0x000397b8) popup_clock_analogue_window_g4

0xc40d,	// (0x0003f8ff) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00042869) popup_clock_analogue_window_g

0x62ce,	// (0x000397c0) popup_clock_analogue_window_t1

0x62dc,	// (0x000397ce) clock_digital_number_pane_ParamLimits

0x62dc,	// (0x000397ce) clock_digital_number_pane

0x62e8,	// (0x000397da) clock_digital_number_pane_cp02_ParamLimits

0x62e8,	// (0x000397da) clock_digital_number_pane_cp02

0x62f4,	// (0x000397e6) clock_digital_number_pane_cp03_ParamLimits

0x62f4,	// (0x000397e6) clock_digital_number_pane_cp03

0x6300,	// (0x000397f2) clock_digital_number_pane_cp04_ParamLimits

0x6300,	// (0x000397f2) clock_digital_number_pane_cp04

0x6310,	// (0x00039802) clock_digital_separator_pane_ParamLimits

0x6310,	// (0x00039802) clock_digital_separator_pane

0x631c,	// (0x0003980e) popup_clock_digital_window_t1

0xc40d,	// (0x0003f8ff) clock_digital_number_pane_g1

0xc40d,	// (0x0003f8ff) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000427d7) clock_digital_number_pane_g

0xc40d,	// (0x0003f8ff) clock_digital_separator_pane_g1

0xc40d,	// (0x0003f8ff) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000427d7) clock_digital_separator_pane_g

0xc08a,	// (0x0003f57c) bg_popup_window_pane_cp04

0xcc2d,	// (0x0004011f) heading_pane_cp03

0xcc35,	// (0x00040127) listscroll_popup_gms_pane

0xcc3d,	// (0x0004012f) grid_large_graphic_popup_pane

0xcc47,	// (0x00040139) listscroll_popup_gms_pane_g1

0xcc4f,	// (0x00040141) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00042874) listscroll_popup_gms_pane_g

0xc6fe,	// (0x0003fbf0) scroll_pane_cp014

0x6339,	// (0x0003982b) cell_large_graphic_popup_pane_ParamLimits

0x6339,	// (0x0003982b) cell_large_graphic_popup_pane

0x6351,	// (0x00039843) cell_large_graphic_popup_pane_g1_ParamLimits

0x6351,	// (0x00039843) cell_large_graphic_popup_pane_g1

0xcc57,	// (0x00040149) cell_large_graphic_popup_pane_g2_ParamLimits

0xcc57,	// (0x00040149) cell_large_graphic_popup_pane_g2

0xcc63,	// (0x00040155) cell_large_graphic_popup_pane_g3_ParamLimits

0xcc63,	// (0x00040155) cell_large_graphic_popup_pane_g3

0xcc70,	// (0x00040162) cell_large_graphic_popup_pane_g4_ParamLimits

0xcc70,	// (0x00040162) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00042879) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00042879) cell_large_graphic_popup_pane_g

0xcc80,	// (0x00040172) grid_highlight_pane_cp010

0xc40d,	// (0x0003f8ff) bg_popup_call_pane_g1

0xcc8a,	// (0x0004017c) list_single_graphic_popup_conf_pane_ParamLimits

0xcc8a,	// (0x0004017c) list_single_graphic_popup_conf_pane

0xcc9d,	// (0x0004018f) list_highlight_pane_cp01

0xcca6,	// (0x00040198) list_single_graphic_popup_conf_pane_g1

0xccae,	// (0x000401a0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00042882) list_single_graphic_popup_conf_pane_g

0xccb6,	// (0x000401a8) list_single_graphic_popup_conf_pane_t1

0xccc4,	// (0x000401b6) linegrid_cams_pane_g1

0x635d,	// (0x0003984f) linegrid_cams_pane_g2

0xc539,	// (0x0003fa2b) linegrid_cams_pane_g3

0xcccd,	// (0x000401bf) linegrid_cams_pane_g4

0x6366,	// (0x00039858) linegrid_cams_pane_g5

0x636f,	// (0x00039861) linegrid_cams_pane_g6

0xc542,	// (0x0003fa34) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00042887) linegrid_cams_pane_g

0xccd6,	// (0x000401c8) popup_clock_analogue_window

0xccd6,	// (0x000401c8) popup_clock_digital_window

0xc08a,	// (0x0003f57c) popup_phob_thumbnail_window

0xc40d,	// (0x0003f8ff) call_video_uplink_pane_g1

0xccdf,	// (0x000401d1) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00042896) call_video_uplink_pane_g

0xcce7,	// (0x000401d9) video_uplink_pane

0xccef,	// (0x000401e1) mce_image_pane_g1

0x6378,	// (0x0003986a) mce_image_pane_g2

0x6382,	// (0x00039874) mce_image_pane_g3

0x638a,	// (0x0003987c) mce_image_pane_g4

0x6392,	// (0x00039884) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0004289b) mce_image_pane_g

0xccf9,	// (0x000401eb) control_top_pane_stacon_cp01_ParamLimits

0xccf9,	// (0x000401eb) control_top_pane_stacon_cp01

0xcd0d,	// (0x000401ff) uni_indicator_pane_stacon_cp01_ParamLimits

0xcd0d,	// (0x000401ff) uni_indicator_pane_stacon_cp01

0xcd1e,	// (0x00040210) bg_popup_sub_pane_cp03

0x639a,	// (0x0003988c) chi_dic_find_pane

0x63a2,	// (0x00039894) listscroll_chi_dic_pane

0x63ab,	// (0x0003989d) main_pane_chidic_g1

0xcd28,	// (0x0004021a) chi_dic_find_pane_t1

0xcd36,	// (0x00040228) find_chidic_pane

0xcd3f,	// (0x00040231) chi_dic_list_pane_ParamLimits

0xcd3f,	// (0x00040231) chi_dic_list_pane

0xcd50,	// (0x00040242) scroll_pane_cp020

0xcd58,	// (0x0004024a) find_chidic_pane_t1

0xc08a,	// (0x0003f57c) input_focus_pane_cp06

0x63be,	// (0x000398b0) list_chi_dic_pane_ParamLimits

0x63be,	// (0x000398b0) list_chi_dic_pane

0x63d8,	// (0x000398ca) list_chi_dic_pane_t1_ParamLimits

0x63d8,	// (0x000398ca) list_chi_dic_pane_t1

0xc08a,	// (0x0003f57c) list_highlight_pane_cp020

0xcd67,	// (0x00040259) bg_cale_heading_pane_g1

0x63eb,	// (0x000398dd) bg_cale_heading_pane_g2

0x63f3,	// (0x000398e5) bg_cale_heading_pane_g3

0x63fb,	// (0x000398ed) bg_cale_heading_pane_g4

0x6405,	// (0x000398f7) bg_cale_heading_pane_g5

0x640f,	// (0x00039901) bg_cale_heading_pane_g6

0x6417,	// (0x00039909) bg_cale_heading_pane_g7

0x641f,	// (0x00039911) bg_cale_heading_pane_g8

0x6429,	// (0x0003991b) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000428a6) bg_cale_heading_pane_g

0xcd67,	// (0x00040259) bg_cale_side_pane_g1

0x6433,	// (0x00039925) bg_cale_side_pane_g2

0x643d,	// (0x0003992f) bg_cale_side_pane_g3

0x6447,	// (0x00039939) bg_cale_side_pane_g4

0x6451,	// (0x00039943) bg_cale_side_pane_g5

0x645b,	// (0x0003994d) bg_cale_side_pane_g6

0x6465,	// (0x00039957) bg_cale_side_pane_g7

0x646f,	// (0x00039961) bg_cale_side_pane_g8

0x6477,	// (0x00039969) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000428b9) bg_cale_side_pane_g

0x647f,	// (0x00039971) popup_call_status_window_ParamLimits

0x647f,	// (0x00039971) popup_call_status_window

0xcd6f,	// (0x00040261) stacon_top_pane

0xcd77,	// (0x00040269) status_pane_ParamLimits

0xcd77,	// (0x00040269) status_pane

0xcd8c,	// (0x0004027e) status_small_pane

0xcd94,	// (0x00040286) control_pane

0xc08a,	// (0x0003f57c) stacon_bottom_pane

0xcd9c,	// (0x0004028e) list_single_mce_smart_pane_t1_ParamLimits

0xcd9c,	// (0x0004028e) list_single_mce_smart_pane_t1

0xcdaf,	// (0x000402a1) list_single_mce_smart_pane_t2_ParamLimits

0xcdaf,	// (0x000402a1) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000428cc) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000428cc) list_single_mce_smart_pane_t

0x648b,	// (0x0003997d) compass_pane

0x6497,	// (0x00039989) main_location2_pane_t1

0x64ab,	// (0x0003999d) main_location2_pane_t2

0x64bf,	// (0x000399b1) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000428d1) main_location2_pane_t

0xcdce,	// (0x000402c0) compass_pane_g1_ParamLimits

0xcdce,	// (0x000402c0) compass_pane_g1

0x6509,	// (0x000399fb) compass_pane_t1

0x6518,	// (0x00039a0a) compass_pane_t2

0x0005,

0xf3e8,	// (0x000428da) compass_pane_t

0x6563,	// (0x00039a55) text_secondary_cp61

0xcde2,	// (0x000402d4) navi_pane_cams_g5

0xce05,	// (0x000402f7) navi_pane_im_t1

0xce13,	// (0x00040305) navi_pane_mp_g1_ParamLimits

0xce13,	// (0x00040305) navi_pane_mp_g1

0xce27,	// (0x00040319) navi_pane_mp_g2_ParamLimits

0xce27,	// (0x00040319) navi_pane_mp_g2

0xce33,	// (0x00040325) navi_pane_mp_g3_ParamLimits

0xce33,	// (0x00040325) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000428ee) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000428ee) navi_pane_mp_g

0xce3f,	// (0x00040331) navi_pane_mp_t1

0xce4d,	// (0x0004033f) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000428f5) navi_pane_mp_t

0xce89,	// (0x0004037b) navi_pane_vt_g1

0xce3f,	// (0x00040331) navi_pane_vt_t1

0xce91,	// (0x00040383) navi_slider_pane

0xce99,	// (0x0004038b) zooming_pane

0xcea1,	// (0x00040393) navi_slider_pane_g1

0x668e,	// (0x00039b80) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000428fc) navi_slider_pane_g

0xcec5,	// (0x000403b7) aid_levels_zoom

0xcecd,	// (0x000403bf) zooming_pane_g1

0xced5,	// (0x000403c7) zooming_pane_g2

0xced5,	// (0x000403c7) zooming_pane_g3

0x0002,

0xf419,	// (0x0004290b) zooming_pane_g

0xcedd,	// (0x000403cf) level_10_zoom

0xcee6,	// (0x000403d8) level_11_zoom

0xceef,	// (0x000403e1) level_1_zoom

0xcef8,	// (0x000403ea) level_2_zoom

0xcf01,	// (0x000403f3) level_3_zoom

0xcf0a,	// (0x000403fc) level_4_zoom

0xcf13,	// (0x00040405) level_5_zoom

0xcf1c,	// (0x0004040e) level_6_zoom

0xcf25,	// (0x00040417) level_7_zoom

0xcf2e,	// (0x00040420) level_8_zoom

0xcf37,	// (0x00040429) level_9_zoom

0xcf48,	// (0x0004043a) popup_phob_thumbnail_window_g1

0xcf50,	// (0x00040442) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00042912) popup_phob_thumbnail_window_g

0xe246,	// (0x00041738) level_1_location

0xe24e,	// (0x00041740) level_2_location

0xe256,	// (0x00041748) level_3_location

0xe25e,	// (0x00041750) level_4_location

0xce99,	// (0x0004038b) level_5_location

0x66a0,	// (0x00039b92) mce_icon_pane_g1

0x66a8,	// (0x00039b9a) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00042917) mce_icon_pane_g

0x66b0,	// (0x00039ba2) main_mup_pane_g1_ParamLimits

0x66b0,	// (0x00039ba2) main_mup_pane_g1

0x66c8,	// (0x00039bba) main_mup_pane_g2_ParamLimits

0x66c8,	// (0x00039bba) main_mup_pane_g2

0x66e4,	// (0x00039bd6) main_mup_pane_g3_ParamLimits

0x66e4,	// (0x00039bd6) main_mup_pane_g3

0x6700,	// (0x00039bf2) main_mup_pane_g4_ParamLimits

0x6700,	// (0x00039bf2) main_mup_pane_g4

0x671c,	// (0x00039c0e) main_mup_pane_g5_ParamLimits

0x671c,	// (0x00039c0e) main_mup_pane_g5

0x673d,	// (0x00039c2f) main_mup_pane_g6_ParamLimits

0x673d,	// (0x00039c2f) main_mup_pane_g6

0x6759,	// (0x00039c4b) main_mup_pane_g7_ParamLimits

0x6759,	// (0x00039c4b) main_mup_pane_g7

0x6775,	// (0x00039c67) main_mup_pane_g8_ParamLimits

0x6775,	// (0x00039c67) main_mup_pane_g8

0x6795,	// (0x00039c87) main_mup_pane_g9_ParamLimits

0x6795,	// (0x00039c87) main_mup_pane_g9

0x67b4,	// (0x00039ca6) main_mup_pane_g10_ParamLimits

0x67b4,	// (0x00039ca6) main_mup_pane_g10

0x67d3,	// (0x00039cc5) main_mup_pane_g11_ParamLimits

0x67d3,	// (0x00039cc5) main_mup_pane_g11

0x67eb,	// (0x00039cdd) main_mup_pane_g12_ParamLimits

0x67eb,	// (0x00039cdd) main_mup_pane_g12

0x67f9,	// (0x00039ceb) main_mup_pane_g13_ParamLimits

0x67f9,	// (0x00039ceb) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0004291c) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0004291c) main_mup_pane_g

0x680f,	// (0x00039d01) main_mup_pane_t1_ParamLimits

0x680f,	// (0x00039d01) main_mup_pane_t1

0x682c,	// (0x00039d1e) main_mup_pane_t2_ParamLimits

0x682c,	// (0x00039d1e) main_mup_pane_t2

0x6846,	// (0x00039d38) main_mup_pane_t3_ParamLimits

0x6846,	// (0x00039d38) main_mup_pane_t3

0x6860,	// (0x00039d52) main_mup_pane_t4_ParamLimits

0x6860,	// (0x00039d52) main_mup_pane_t4

0x6872,	// (0x00039d64) main_mup_pane_t5_ParamLimits

0x6872,	// (0x00039d64) main_mup_pane_t5

0x6884,	// (0x00039d76) main_mup_pane_t6_ParamLimits

0x6884,	// (0x00039d76) main_mup_pane_t6

0x0005,

0xf445,	// (0x00042937) main_mup_pane_t_ParamLimits

0xf445,	// (0x00042937) main_mup_pane_t

0x689a,	// (0x00039d8c) mup_progress_pane_ParamLimits

0x689a,	// (0x00039d8c) mup_progress_pane

0x68a6,	// (0x00039d98) mup_visualizer_pane_ParamLimits

0x68a6,	// (0x00039d98) mup_visualizer_pane

0x68e0,	// (0x00039dd2) mup_volume_pane_ParamLimits

0x68e0,	// (0x00039dd2) mup_volume_pane

0xcbb6,	// (0x000400a8) mup_visualizer_pane_g1_ParamLimits

0xcbb6,	// (0x000400a8) mup_visualizer_pane_g1

0xcbb6,	// (0x000400a8) mup_visualizer_pane_g2_ParamLimits

0xcbb6,	// (0x000400a8) mup_visualizer_pane_g2

0xcdce,	// (0x000402c0) mup_visualizer_pane_g3_ParamLimits

0xcdce,	// (0x000402c0) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00042944) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00042944) mup_visualizer_pane_g

0xc40d,	// (0x0003f8ff) mup_volume_pane_g1

0xcf60,	// (0x00040452) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0004294b) mup_volume_pane_g

0xc40d,	// (0x0003f8ff) mup_progress_pane_g1

0xcf69,	// (0x0004045b) mup_progress_pane_g2

0xcf72,	// (0x00040464) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00042950) mup_progress_pane_g

0xc08a,	// (0x0003f57c) bg_popup_window_pane_cp05

0xcf7b,	// (0x0004046d) heading_pane_cp02_ParamLimits

0xcf7b,	// (0x0004046d) heading_pane_cp02

0xcf95,	// (0x00040487) list_popup_blid_pane

0xcf9d,	// (0x0004048f) list_blid_sat_info_pane_ParamLimits

0xcf9d,	// (0x0004048f) list_blid_sat_info_pane

0xcfb0,	// (0x000404a2) list_blid_sat_info_pane_g1

0xcfb8,	// (0x000404aa) list_blid_sat_info_pane_t1

0x69ed,	// (0x00039edf) mup_equalizer_pane_ParamLimits

0x69ed,	// (0x00039edf) mup_equalizer_pane

0x6a0e,	// (0x00039f00) mup_equalizer_pane_cp1_ParamLimits

0x6a0e,	// (0x00039f00) mup_equalizer_pane_cp1

0x6a2f,	// (0x00039f21) mup_equalizer_pane_cp2_ParamLimits

0x6a2f,	// (0x00039f21) mup_equalizer_pane_cp2

0x6a50,	// (0x00039f42) mup_equalizer_pane_cp3_ParamLimits

0x6a50,	// (0x00039f42) mup_equalizer_pane_cp3

0x6a71,	// (0x00039f63) mup_equalizer_pane_cp4_ParamLimits

0x6a71,	// (0x00039f63) mup_equalizer_pane_cp4

0x6a92,	// (0x00039f84) mup_equalizer_pane_cp5

0x6aa8,	// (0x00039f9a) mup_equalizer_pane_cp6

0x6ac0,	// (0x00039fb2) mup_equalizer_pane_cp7

0xe164,	// (0x00041656) bg_popup_call_poc_act_pane_g9

0xe16c,	// (0x0004165e) bg_popup_call_poc_act_pane_g10

0xe174,	// (0x00041666) bg_popup_call_poc_act_pane_g11

0x000a,

0xc2e5,	// (0x0003f7d7) mup_scale_pane

0xc40d,	// (0x0003f8ff) mup_scale_pane_g1

0xcfc6,	// (0x000404b8) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0004296c) mup_scale_pane_g

0xcfea,	// (0x000404dc) msg_data_pane

0xcff2,	// (0x000404e4) scroll_pane_cp017

0x3380,	// (0x00036872) bg_list_pane_cp04_ParamLimits

0x3380,	// (0x00036872) bg_list_pane_cp04

0xcffa,	// (0x000404ec) msg_data_pane_g1

0x6aea,	// (0x00039fdc) msg_data_pane_g2

0x6af4,	// (0x00039fe6) msg_data_pane_g3

0x6afc,	// (0x00039fee) msg_data_pane_g4

0x6b04,	// (0x00039ff6) msg_data_pane_g5

0x6b0c,	// (0x00039ffe) msg_data_pane_g6

0x6b14,	// (0x0003a006) msg_data_pane_g7

0x0006,

0xf489,	// (0x0004297b) msg_data_pane_g

0x33a4,	// (0x00036896) msg_text_pane_ParamLimits

0x33a4,	// (0x00036896) msg_text_pane

0x6b1c,	// (0x0003a00e) qrid_highlight_pane_cp011_ParamLimits

0x6b1c,	// (0x0003a00e) qrid_highlight_pane_cp011

0xc08a,	// (0x0003f57c) msg_body_pane

0xc08a,	// (0x0003f57c) msg_header_pane

0xd00b,	// (0x000404fd) input_focus_pane_cp07

0x33f0,	// (0x000368e2) msg_header_pane_t1_ParamLimits

0x33f0,	// (0x000368e2) msg_header_pane_t1

0x3402,	// (0x000368f4) msg_header_pane_t2_ParamLimits

0x3402,	// (0x000368f4) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0004298f) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0004298f) msg_header_pane_t

0xd020,	// (0x00040512) msg_body_pane_g1

0x3414,	// (0x00036906) msg_body_pane_t1_ParamLimits

0x3414,	// (0x00036906) msg_body_pane_t1

0x3445,	// (0x00036937) msg_body_pane_t2_ParamLimits

0x3445,	// (0x00036937) msg_body_pane_t2

0x3457,	// (0x00036949) msg_body_pane_t3_ParamLimits

0x3457,	// (0x00036949) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00042994) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00042994) msg_body_pane_t

0x6b88,	// (0x0003a07a) main_viewer_pane_g1_ParamLimits

0x6b88,	// (0x0003a07a) main_viewer_pane_g1

0x6b94,	// (0x0003a086) main_viewer_pane_g2_ParamLimits

0x6b94,	// (0x0003a086) main_viewer_pane_g2

0x6ba0,	// (0x0003a092) main_viewer_pane_g3_ParamLimits

0x6ba0,	// (0x0003a092) main_viewer_pane_g3

0x6bb1,	// (0x0003a0a3) main_viewer_pane_g4_ParamLimits

0x6bb1,	// (0x0003a0a3) main_viewer_pane_g4

0x6bc2,	// (0x0003a0b4) main_viewer_pane_g5_ParamLimits

0x6bc2,	// (0x0003a0b4) main_viewer_pane_g5

0x6bc2,	// (0x0003a0b4) main_viewer_pane_g7_ParamLimits

0x6bc2,	// (0x0003a0b4) main_viewer_pane_g7

0x6bd4,	// (0x0003a0c6) main_viewer_pane_g8_ParamLimits

0x6bd4,	// (0x0003a0c6) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000429a4) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000429a4) main_viewer_pane_g

0xd028,	// (0x0004051a) viewer_content_pane_ParamLimits

0xd028,	// (0x0004051a) viewer_content_pane

0x6c0c,	// (0x0003a0fe) main_postcard_pane_g1_ParamLimits

0x6c0c,	// (0x0003a0fe) main_postcard_pane_g1

0x6c1a,	// (0x0003a10c) main_postcard_pane_g2_ParamLimits

0x6c1a,	// (0x0003a10c) main_postcard_pane_g2

0x6c28,	// (0x0003a11a) main_postcard_pane_g3_ParamLimits

0x6c28,	// (0x0003a11a) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000429b5) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000429b5) main_postcard_pane_g

0x6c38,	// (0x0003a12a) main_postcard_pane_g4

0xe33a,	// (0x0004182c) smil_status_volume_pane_g2

0x6c64,	// (0x0003a156) postcard_pane_ParamLimits

0x6c64,	// (0x0003a156) postcard_pane

0xcbb6,	// (0x000400a8) postcard_pane_g1_ParamLimits

0xcbb6,	// (0x000400a8) postcard_pane_g1

0x6c96,	// (0x0003a188) postcard_pane_g2_ParamLimits

0x6c96,	// (0x0003a188) postcard_pane_g2

0x6ca2,	// (0x0003a194) postcard_pane_g3_ParamLimits

0x6ca2,	// (0x0003a194) postcard_pane_g3

0xd036,	// (0x00040528) postcard_pane_g4_ParamLimits

0xd036,	// (0x00040528) postcard_pane_g4

0x6cae,	// (0x0003a1a0) postcard_pane_g5_ParamLimits

0x6cae,	// (0x0003a1a0) postcard_pane_g5

0x6cba,	// (0x0003a1ac) postcard_pane_g6_ParamLimits

0x6cba,	// (0x0003a1ac) postcard_pane_g6

0xd044,	// (0x00040536) postcard_pane_g7_ParamLimits

0xd044,	// (0x00040536) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000429c2) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000429c2) postcard_pane_g

0x6cc6,	// (0x0003a1b8) main_mp2_pane_g1_ParamLimits

0x6cc6,	// (0x0003a1b8) main_mp2_pane_g1

0x6cd2,	// (0x0003a1c4) main_mp2_pane_g2_ParamLimits

0x6cd2,	// (0x0003a1c4) main_mp2_pane_g2

0x6cde,	// (0x0003a1d0) main_mp2_pane_g3_ParamLimits

0x6cde,	// (0x0003a1d0) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000429d1) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000429d1) main_mp2_pane_g

0x6cea,	// (0x0003a1dc) main_mp2_pane_t1_ParamLimits

0x6cea,	// (0x0003a1dc) main_mp2_pane_t1

0x6d01,	// (0x0003a1f3) main_mp2_pane_t2_ParamLimits

0x6d01,	// (0x0003a1f3) main_mp2_pane_t2

0x6d15,	// (0x0003a207) main_mp2_pane_t3_ParamLimits

0x6d15,	// (0x0003a207) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000429d8) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000429d8) main_mp2_pane_t

0xd052,	// (0x00040544) pec_content_pane_ParamLimits

0xd052,	// (0x00040544) pec_content_pane

0xc6fe,	// (0x0003fbf0) scroll_pane_cp015

0xd064,	// (0x00040556) pec_attribute_pane_ParamLimits

0xd064,	// (0x00040556) pec_attribute_pane

0x6d27,	// (0x0003a219) pec_content_pane_g1_ParamLimits

0x6d27,	// (0x0003a219) pec_content_pane_g1

0xd074,	// (0x00040566) pec_content_pane_t1_ParamLimits

0xd074,	// (0x00040566) pec_content_pane_t1

0xd086,	// (0x00040578) pec_content_pane_t2_ParamLimits

0xd086,	// (0x00040578) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000429df) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000429df) pec_content_pane_t

0x6d33,	// (0x0003a225) list_single_graphic_pane_cp01_ParamLimits

0x6d33,	// (0x0003a225) list_single_graphic_pane_cp01

0xc2e5,	// (0x0003f7d7) bg_popup_sub_pane_cp04

0xd098,	// (0x0004058a) popup_mup_playback_window_g1

0xd0a4,	// (0x00040596) popup_mup_playback_window_t1

0xd0b9,	// (0x000405ab) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000429e4) popup_mup_playback_window_t

0xd0f0,	// (0x000405e2) main_image_pane_g1_ParamLimits

0xd0f0,	// (0x000405e2) main_image_pane_g1

0xd133,	// (0x00040625) scroll_pane_cp018_ParamLimits

0xd133,	// (0x00040625) scroll_pane_cp018

0xd14b,	// (0x0004063d) scroll_pane_cp016_ParamLimits

0xd14b,	// (0x0004063d) scroll_pane_cp016

0x6dcc,	// (0x0003a2be) smil2_image_pane_ParamLimits

0x6dcc,	// (0x0003a2be) smil2_image_pane

0x6dfc,	// (0x0003a2ee) smil2_root_pane_ParamLimits

0x6dfc,	// (0x0003a2ee) smil2_root_pane

0x6e28,	// (0x0003a31a) smil2_text_pane_ParamLimits

0x6e28,	// (0x0003a31a) smil2_text_pane

0xc08a,	// (0x0003f57c) bg_list_pane_cp06

0xd187,	// (0x00040679) grid_radio_pane

0xc08a,	// (0x0003f57c) bg_popup_window_pane_cp06

0xd18f,	// (0x00040681) main_fmradio_pane_t1

0xcc2d,	// (0x0004011f) heading_pane_cp04

0xd19d,	// (0x0004068f) main_fmradio_pane_t2

0xe17c,	// (0x0004166e) popup_cale_lunar_info_window_g1

0xd1ab,	// (0x0004069d) main_fmradio_pane_t3

0xe184,	// (0x00041676) popup_cale_lunar_info_window_g2

0xd1b9,	// (0x000406ab) main_fmradio_pane_t4

0x0001,

0xd1c7,	// (0x000406b9) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00042abf) popup_cale_lunar_info_window_g

0xf507,	// (0x000429f9) main_fmradio_pane_t

0xd1d5,	// (0x000406c7) wait_bar_pane_cp03

0xd1dd,	// (0x000406cf) cell_fmradio_pane_ParamLimits

0xd1dd,	// (0x000406cf) cell_fmradio_pane

0xd044,	// (0x00040536) cell_fmradio_pane_g1_ParamLimits

0xd044,	// (0x00040536) cell_fmradio_pane_g1

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp011

0xd1f0,	// (0x000406e2) poc_content_pane_ParamLimits

0xd1f0,	// (0x000406e2) poc_content_pane

0xd202,	// (0x000406f4) scroll_pane_cp019

0x6e68,	// (0x0003a35a) popup_call_poc_act_window_ParamLimits

0x6e68,	// (0x0003a35a) popup_call_poc_act_window

0x6e75,	// (0x0003a367) popup_call_poc_inact_window_ParamLimits

0x6e75,	// (0x0003a367) popup_call_poc_inact_window

0xf5a4,	// (0x00042a96) bg_popup_call_poc_act_pane_g

0xe0f4,	// (0x000415e6) bg_popup_call_poc_inact_pane_g1

0xe0fc,	// (0x000415ee) bg_popup_call_poc_inact_pane_g2

0xd20a,	// (0x000406fc) popup_call_poc_act_window_g2

0xe104,	// (0x000415f6) bg_popup_call_poc_inact_pane_g3

0xe10c,	// (0x000415fe) bg_popup_call_poc_inact_pane_g4

0xe114,	// (0x00041606) bg_popup_call_poc_inact_pane_g5

0xd212,	// (0x00040704) popup_call_poc_act_window_t1_ParamLimits

0xd212,	// (0x00040704) popup_call_poc_act_window_t1

0xd23a,	// (0x0004072c) popup_call_poc_act_window_t2_ParamLimits

0xd23a,	// (0x0004072c) popup_call_poc_act_window_t2

0xd262,	// (0x00040754) popup_call_poc_act_window_t3_ParamLimits

0xd262,	// (0x00040754) popup_call_poc_act_window_t3

0xd28a,	// (0x0004077c) popup_call_poc_act_window_t4_ParamLimits

0xd28a,	// (0x0004077c) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00042a04) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00042a04) popup_call_poc_act_window_t

0xe11c,	// (0x0004160e) bg_popup_call_poc_inact_pane_g6

0xe124,	// (0x00041616) bg_popup_call_poc_inact_pane_g7

0xe12c,	// (0x0004161e) bg_popup_call_poc_inact_pane_g8

0xd29c,	// (0x0004078e) popup_call_poc_inact_window_g2

0xe134,	// (0x00041626) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00042a83) bg_popup_call_poc_inact_pane_g

0xd2a4,	// (0x00040796) popup_call_poc_inact_window_t1_ParamLimits

0xd2a4,	// (0x00040796) popup_call_poc_inact_window_t1

0xd2b9,	// (0x000407ab) popup_call_poc_inact_window_t2_ParamLimits

0xd2b9,	// (0x000407ab) popup_call_poc_inact_window_t2

0xd2ce,	// (0x000407c0) popup_call_poc_inact_window_t3_ParamLimits

0xd2ce,	// (0x000407c0) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00042a0d) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00042a0d) popup_call_poc_inact_window_t

0xe2ad,	// (0x0004179f) context_pane_ParamLimits

0x74a4,	// (0x0003a996) signal_pane_ParamLimits

0xce99,	// (0x0004038b) main_call2_pane

0x741c,	// (0x0003a90e) popup_phob_thumbnail2_window_ParamLimits

0x741c,	// (0x0003a90e) popup_phob_thumbnail2_window

0x6b36,	// (0x0003a028) aid_hotspot_pointer_arrow_pane

0x6b3e,	// (0x0003a030) aid_hotspot_pointer_hand_pane

0x7197,	// (0x0003a689) phob_pre_status_pane_g5

0x5089,	// (0x0003857b) cams_zoom_pane_ParamLimits

0x5095,	// (0x00038587) image_vga_pane_ParamLimits

0x50a4,	// (0x00038596) main_camera_pane_g1_ParamLimits

0x50b2,	// (0x000385a4) main_camera_pane_g2_ParamLimits

0x50be,	// (0x000385b0) main_camera_pane_g3_ParamLimits

0x50ca,	// (0x000385bc) main_camera_pane_g4_ParamLimits

0x50d6,	// (0x000385c8) main_camera_pane_g5_ParamLimits

0x50e2,	// (0x000385d4) main_camera_pane_g6_ParamLimits

0x50ee,	// (0x000385e0) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0004270c) main_camera_pane_g_ParamLimits

0x50fa,	// (0x000385ec) main_camera_pane_t1_ParamLimits

0x510c,	// (0x000385fe) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0004271d) main_camera_pane_t_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_popup_preview_window_pane_cp01_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_popup_preview_window_pane_cp01

0xd2e3,	// (0x000407d5) popup_phob_thumbnail2_window_g1_ParamLimits

0xd2e3,	// (0x000407d5) popup_phob_thumbnail2_window_g1

0xc08a,	// (0x0003f57c) call2_cli_visual_pane

0x6e91,	// (0x0003a383) popup_call2_audio_conf_window_ParamLimits

0x6e91,	// (0x0003a383) popup_call2_audio_conf_window

0x6ea6,	// (0x0003a398) popup_call2_audio_first_window_ParamLimits

0x6ea6,	// (0x0003a398) popup_call2_audio_first_window

0x6f44,	// (0x0003a436) popup_call2_audio_in_window_ParamLimits

0x6f44,	// (0x0003a436) popup_call2_audio_in_window

0x6f86,	// (0x0003a478) popup_call2_audio_out_window_ParamLimits

0x6f86,	// (0x0003a478) popup_call2_audio_out_window

0x6fe8,	// (0x0003a4da) popup_call2_audio_second_window_ParamLimits

0x6fe8,	// (0x0003a4da) popup_call2_audio_second_window

0x7046,	// (0x0003a538) popup_call2_audio_wait_window_ParamLimits

0x7046,	// (0x0003a538) popup_call2_audio_wait_window

0xc08a,	// (0x0003f57c) bg_popup_call2_act_pane_cp03

0xc2c7,	// (0x0003f7b9) list_conf_pane_cp

0xd2ef,	// (0x000407e1) popup_call2_audio_conf_window_t1

0xcc8a,	// (0x0004017c) list_single_graphic_popup_conf2_pane_ParamLimits

0xcc8a,	// (0x0004017c) list_single_graphic_popup_conf2_pane

0xcc9d,	// (0x0004018f) list_highlight_pane_cp04

0xd2fd,	// (0x000407ef) list_single_graphic_popup_conf2_pane_g1

0xccae,	// (0x000401a0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00042a14) list_single_graphic_popup_conf2_pane_g

0xd307,	// (0x000407f9) list_single_graphic_popup_conf2_pane_t1

0xd315,	// (0x00040807) bg_popup_call2_act_pane_cp01_ParamLimits

0xd315,	// (0x00040807) bg_popup_call2_act_pane_cp01

0xd39f,	// (0x00040891) call_type_pane_cp05_ParamLimits

0xd39f,	// (0x00040891) call_type_pane_cp05

0xd3f3,	// (0x000408e5) popup_call2_audio_second_window_g1_ParamLimits

0xd3f3,	// (0x000408e5) popup_call2_audio_second_window_g1

0xd447,	// (0x00040939) popup_call2_audio_second_window_g2_ParamLimits

0xd447,	// (0x00040939) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00042a19) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00042a19) popup_call2_audio_second_window_g

0xd4ac,	// (0x0004099e) popup_call2_audio_second_window_t1_ParamLimits

0xd4ac,	// (0x0004099e) popup_call2_audio_second_window_t1

0xd567,	// (0x00040a59) popup_call2_audio_second_window_t2_ParamLimits

0xd567,	// (0x00040a59) popup_call2_audio_second_window_t2

0xd5ba,	// (0x00040aac) popup_call2_audio_second_window_t3_ParamLimits

0xd5ba,	// (0x00040aac) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00042a20) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00042a20) popup_call2_audio_second_window_t

0xc08a,	// (0x0003f57c) bg_popup_call2_in_pane_cp02

0xc094,	// (0x0003f586) call_type_pane_cp04

0xc09c,	// (0x0003f58e) popup_call2_audio_wait_window_g1

0xc0a4,	// (0x0003f596) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x000425f9) popup_call2_audio_wait_window_g

0xc0ac,	// (0x0003f59e) popup_call2_audio_wait_window_t3

0xd6ad,	// (0x00040b9f) bg_popup_call2_act_pane_ParamLimits

0xd6ad,	// (0x00040b9f) bg_popup_call2_act_pane

0xd76d,	// (0x00040c5f) call_type_pane_cp03_ParamLimits

0xd76d,	// (0x00040c5f) call_type_pane_cp03

0xd7d1,	// (0x00040cc3) popup_call2_audio_first_window_g1_ParamLimits

0xd7d1,	// (0x00040cc3) popup_call2_audio_first_window_g1

0xd841,	// (0x00040d33) popup_call2_audio_first_window_g2_ParamLimits

0xd841,	// (0x00040d33) popup_call2_audio_first_window_g2

0xcbb6,	// (0x000400a8) popup_call2_audio_first_window_g3_ParamLimits

0xcbb6,	// (0x000400a8) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00042a29) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00042a29) popup_call2_audio_first_window_g

0xd91f,	// (0x00040e11) popup_call2_audio_first_window_t1_ParamLimits

0xd91f,	// (0x00040e11) popup_call2_audio_first_window_t1

0xda22,	// (0x00040f14) popup_call2_audio_first_window_t4_ParamLimits

0xda22,	// (0x00040f14) popup_call2_audio_first_window_t4

0xdb05,	// (0x00040ff7) popup_call2_audio_first_window_t5_ParamLimits

0xdb05,	// (0x00040ff7) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00042a34) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00042a34) popup_call2_audio_first_window_t

0xc2dd,	// (0x0003f7cf) bg_popup_call2_act_pane_g1

0xe18c,	// (0x0004167e) popup_cale_lunar_info_window_t1

0xe19a,	// (0x0004168c) popup_cale_lunar_info_window_t2

0xe1a8,	// (0x0004169a) popup_cale_lunar_info_window_t3

0xc08a,	// (0x0003f57c) bg_popup_call2_bubble_pane

0xdc06,	// (0x000410f8) bg_popup_call2_in_pane_cp01_ParamLimits

0xdc06,	// (0x000410f8) bg_popup_call2_in_pane_cp01

0xbd66,	// (0x0003f258) call_type_pane_cp02

0xdc4e,	// (0x00041140) popup_call2_audio_out_window_g1_ParamLimits

0xdc4e,	// (0x00041140) popup_call2_audio_out_window_g1

0xdc7a,	// (0x0004116c) popup_call2_audio_out_window_g2_ParamLimits

0xdc7a,	// (0x0004116c) popup_call2_audio_out_window_g2

0xdca2,	// (0x00041194) popup_call2_audio_out_window_g3_ParamLimits

0xdca2,	// (0x00041194) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00042a3d) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00042a3d) popup_call2_audio_out_window_g

0xdcdd,	// (0x000411cf) popup_call2_audio_out_window_t1_ParamLimits

0xdcdd,	// (0x000411cf) popup_call2_audio_out_window_t1

0xdd3c,	// (0x0004122e) popup_call2_audio_out_window_t2_ParamLimits

0xdd3c,	// (0x0004122e) popup_call2_audio_out_window_t2

0xdd90,	// (0x00041282) popup_call2_audio_out_window_t3_ParamLimits

0xdd90,	// (0x00041282) popup_call2_audio_out_window_t3

0xdda6,	// (0x00041298) popup_call2_audio_out_window_t4_ParamLimits

0xdda6,	// (0x00041298) popup_call2_audio_out_window_t4

0xddbc,	// (0x000412ae) popup_call2_audio_out_window_t5_ParamLimits

0xddbc,	// (0x000412ae) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00042a46) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00042a46) popup_call2_audio_out_window_t

0xde20,	// (0x00041312) bg_popup_call2_in_pane_ParamLimits

0xde20,	// (0x00041312) bg_popup_call2_in_pane

0xde96,	// (0x00041388) popup_call2_audio_in_window_g1_ParamLimits

0xde96,	// (0x00041388) popup_call2_audio_in_window_g1

0xdece,	// (0x000413c0) popup_call2_audio_in_window_g2_ParamLimits

0xdece,	// (0x000413c0) popup_call2_audio_in_window_g2

0xdf06,	// (0x000413f8) popup_call2_audio_in_window_g3_ParamLimits

0xdf06,	// (0x000413f8) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00042a53) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00042a53) popup_call2_audio_in_window_g

0xdf5e,	// (0x00041450) popup_call2_audio_in_window_t1_ParamLimits

0xdf5e,	// (0x00041450) popup_call2_audio_in_window_t1

0xdfde,	// (0x000414d0) popup_call2_audio_in_window_t2_ParamLimits

0xdfde,	// (0x000414d0) popup_call2_audio_in_window_t2

0xe05e,	// (0x00041550) popup_call2_audio_in_window_t3_ParamLimits

0xe05e,	// (0x00041550) popup_call2_audio_in_window_t3

0xe078,	// (0x0004156a) popup_call2_audio_in_window_t4_ParamLimits

0xe078,	// (0x0004156a) popup_call2_audio_in_window_t4

0xe08a,	// (0x0004157c) popup_call2_audio_in_window_t5_ParamLimits

0xe08a,	// (0x0004157c) popup_call2_audio_in_window_t5

0xe09f,	// (0x00041591) popup_call2_audio_in_window_t6_ParamLimits

0xe09f,	// (0x00041591) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00042a5c) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00042a5c) popup_call2_audio_in_window_t

0xc2dd,	// (0x0003f7cf) bg_popup_call2_in_pane_g1

0xe1b6,	// (0x000416a8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00042ac4) popup_cale_lunar_info_window_t

0xc2e5,	// (0x0003f7d7) bg_popup_call2_rect_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_popup_call2_rect_pane

0xc08a,	// (0x0003f57c) call2_cli_visual_graphic_pane

0xc08a,	// (0x0003f57c) call2_cli_visual_text_pane

0x754a,	// (0x0003aa3c) smil_status_volume_pane_g3

0x0002,

0xc40d,	// (0x0003f8ff) call2_cli_visual_graphic_pane_g1

0xc40d,	// (0x0003f8ff) call2_cli_visual_graphic_pane_g2

0xc40d,	// (0x0003f8ff) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00042a69) call2_cli_visual_graphic_pane_g

0xe0b4,	// (0x000415a6) bg_popup_call2_rect_pane_g1

0xc499,	// (0x0003f98b) bg_popup_call2_rect_pane_g2

0xe0bc,	// (0x000415ae) bg_popup_call2_rect_pane_g3

0xe0c4,	// (0x000415b6) bg_popup_call2_rect_pane_g4

0xe0cc,	// (0x000415be) bg_popup_call2_rect_pane_g5

0xe0d4,	// (0x000415c6) bg_popup_call2_rect_pane_g6

0xe0dc,	// (0x000415ce) bg_popup_call2_rect_pane_g7

0xe0e4,	// (0x000415d6) bg_popup_call2_rect_pane_g8

0xe0ec,	// (0x000415de) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00042a70) bg_popup_call2_rect_pane_g

0xe0f4,	// (0x000415e6) bg_popup_call2_bubble_pane_g1

0xe0fc,	// (0x000415ee) bg_popup_call2_bubble_pane_g2

0xe104,	// (0x000415f6) bg_popup_call2_bubble_pane_g3

0xe10c,	// (0x000415fe) bg_popup_call2_bubble_pane_g4

0xe114,	// (0x00041606) bg_popup_call2_bubble_pane_g5

0xe11c,	// (0x0004160e) bg_popup_call2_bubble_pane_g6

0xe124,	// (0x00041616) bg_popup_call2_bubble_pane_g7

0xe12c,	// (0x0004161e) bg_popup_call2_bubble_pane_g8

0xe134,	// (0x00041626) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00042a83) bg_popup_call2_bubble_pane_g

0x4c00,	// (0x000380f2) aid_cale_week_size_cell_pane

0x511e,	// (0x00038610) aid_cams_cif_uncrop_pane_ParamLimits

0x511e,	// (0x00038610) aid_cams_cif_uncrop_pane

0x5279,	// (0x0003876b) aid_cams_size_cell_ParamLimits

0x5279,	// (0x0003876b) aid_cams_size_cell

0x5285,	// (0x00038777) grid_cams_pane_ParamLimits

0x5293,	// (0x00038785) linegrid_cams_pane_ParamLimits

0x536a,	// (0x0003885c) call_video_pane_t1

0x538b,	// (0x0003887d) call_video_pane_t2

0x0001,

0xf27e,	// (0x00042770) call_video_pane_t

0x58c2,	// (0x00038db4) aid_cale_month_size_cell_pane_ParamLimits

0x58c2,	// (0x00038db4) aid_cale_month_size_cell_pane

0xf61b,	// (0x00042b0d) smil_status_volume_pane_g

0x7557,	// (0x0003aa49) volume_smil_pane_ParamLimits

0x4373,	// (0x00037865) aid_popup2_width_pane

0x4b08,	// (0x00037ffa) cell_qdial_pane_g4_ParamLimits

0x4b08,	// (0x00037ffa) cell_qdial_pane_g4

0x64e5,	// (0x000399d7) aid_blid_cardinal_pane_ParamLimits

0x64f5,	// (0x000399e7) aid_blid_destination_pane_ParamLimits

0x64f5,	// (0x000399e7) aid_blid_destination_pane

0xc2e5,	// (0x0003f7d7) bg_popup_call_poc_act_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_popup_call_poc_act_pane

0xc2e5,	// (0x0003f7d7) bg_popup_call_poc_inact_pane_ParamLimits

0xc2e5,	// (0x0003f7d7) bg_popup_call_poc_inact_pane

0xe13c,	// (0x0004162e) bg_popup_call_poc_act_pane_g1

0xe144,	// (0x00041636) bg_popup_call_poc_act_pane_g2

0xe14c,	// (0x0004163e) bg_popup_call_poc_act_pane_g3

0xe10c,	// (0x000415fe) bg_popup_call_poc_act_pane_g4

0xe114,	// (0x00041606) bg_popup_call_poc_act_pane_g5

0xe154,	// (0x00041646) bg_popup_call_poc_act_pane_g6

0xe124,	// (0x00041616) bg_popup_call_poc_act_pane_g7

0xe15c,	// (0x0004164e) bg_popup_call_poc_act_pane_g8

0xc08a,	// (0x0003f57c) main_usb_pane

0x734b,	// (0x0003a83d) popup_cale_lunar_info_window

0x56b6,	// (0x00038ba8) im_reading_pane_t1_ParamLimits

0xc656,	// (0x0003fb48) list_im_pane_ParamLimits

0xc667,	// (0x0003fb59) scroll_pane_cp07_ParamLimits

0xc08a,	// (0x0003f57c) grid_highlight_pane_cp012

0xc2e5,	// (0x0003f7d7) mup_scale_pane_ParamLimits

0xcbb6,	// (0x000400a8) main_usb_pane_g1_ParamLimits

0xcbb6,	// (0x000400a8) main_usb_pane_g1

0x70ba,	// (0x0003a5ac) main_usb_pane_g2_ParamLimits

0x70ba,	// (0x0003a5ac) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00042aad) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00042aad) main_usb_pane_g

0x70c6,	// (0x0003a5b8) main_usb_pane_t1_ParamLimits

0x70c6,	// (0x0003a5b8) main_usb_pane_t1

0x70d8,	// (0x0003a5ca) main_usb_pane_t2_ParamLimits

0x70d8,	// (0x0003a5ca) main_usb_pane_t2

0x70ea,	// (0x0003a5dc) main_usb_pane_t3_ParamLimits

0x70ea,	// (0x0003a5dc) main_usb_pane_t3

0x70fc,	// (0x0003a5ee) main_usb_pane_t4_ParamLimits

0x70fc,	// (0x0003a5ee) main_usb_pane_t4

0x710e,	// (0x0003a600) main_usb_pane_t5_ParamLimits

0x710e,	// (0x0003a600) main_usb_pane_t5

0x7120,	// (0x0003a612) main_usb_pane_t6_ParamLimits

0x7120,	// (0x0003a612) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00042ab2) main_usb_pane_t_ParamLimits

0x648b,	// (0x0003997d) aid_text_placing

0x6497,	// (0x00039989) main_location2_pane_t1_ParamLimits

0x64ab,	// (0x0003999d) main_location2_pane_t2_ParamLimits

0x64bf,	// (0x000399b1) main_location2_pane_t3_ParamLimits

0x64d3,	// (0x000399c5) main_location2_pane_t4_ParamLimits

0x64d3,	// (0x000399c5) main_location2_pane_t4

0xf3df,	// (0x000428d1) main_location2_pane_t_ParamLimits

0xc321,	// (0x0003f813) find_pinb_pane_g2_ParamLimits

0xc321,	// (0x0003f813) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0004261f) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0004261f) find_pinb_pane_g

0xc32d,	// (0x0003f81f) find_pinb_pane_t1_ParamLimits

0xc33f,	// (0x0003f831) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00042624) find_pinb_pane_t_ParamLimits

0xc08a,	// (0x0003f57c) main_call3_pane

0x5cce,	// (0x000391c0) cale_month_day_heading_pane_t1_ParamLimits

0x5d2c,	// (0x0003921e) cale_month_day_heading_pane_t2_ParamLimits

0x5d91,	// (0x00039283) cale_month_day_heading_pane_t3_ParamLimits

0x5df6,	// (0x000392e8) cale_month_day_heading_pane_t4_ParamLimits

0x5e5b,	// (0x0003934d) cale_month_day_heading_pane_t5_ParamLimits

0x5ec0,	// (0x000393b2) cale_month_day_heading_pane_t6_ParamLimits

0x5f25,	// (0x00039417) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000427a8) cale_month_day_heading_pane_t_ParamLimits

0xc8a7,	// (0x0003fd99) smil_status_volume_pane

0x6c7e,	// (0x0003a170) postcard_address_pane_ParamLimits

0x6c7e,	// (0x0003a170) postcard_address_pane

0x6c8a,	// (0x0003a17c) postcard_message_pane_ParamLimits

0x6c8a,	// (0x0003a17c) postcard_message_pane

0x7085,	// (0x0003a577) call2_cli_visual_pane_t1_ParamLimits

0x7085,	// (0x0003a577) call2_cli_visual_pane_t1

0x76ae,	// (0x0003aba0) postcard_message_pane_t1_ParamLimits

0x76ae,	// (0x0003aba0) postcard_message_pane_t1

0x7697,	// (0x0003ab89) postcard_address_pane_t1_ParamLimits

0x7697,	// (0x0003ab89) postcard_address_pane_t1

0x7688,	// (0x0003ab7a) popup_call3_audio_in_window_ParamLimits

0x7688,	// (0x0003ab7a) popup_call3_audio_in_window

0x756c,	// (0x0003aa5e) bg_popup_call3_in_pane_ParamLimits

0x756c,	// (0x0003aa5e) bg_popup_call3_in_pane

0x75ce,	// (0x0003aac0) popup_call3_audio_in_window_g1_ParamLimits

0x75ce,	// (0x0003aac0) popup_call3_audio_in_window_g1

0x75e6,	// (0x0003aad8) popup_call3_audio_in_window_g2_ParamLimits

0x75e6,	// (0x0003aad8) popup_call3_audio_in_window_g2

0x75fe,	// (0x0003aaf0) popup_call3_audio_in_window_g3_ParamLimits

0x75fe,	// (0x0003aaf0) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00042b14) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00042b14) popup_call3_audio_in_window_g

0x7626,	// (0x0003ab18) popup_call3_audio_in_window_t1_ParamLimits

0x7626,	// (0x0003ab18) popup_call3_audio_in_window_t1

0x764e,	// (0x0003ab40) popup_call3_audio_in_window_t2_ParamLimits

0x764e,	// (0x0003ab40) popup_call3_audio_in_window_t2

0x7676,	// (0x0003ab68) popup_call3_audio_in_window_t3_ParamLimits

0x7676,	// (0x0003ab68) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00042b1d) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00042b1d) popup_call3_audio_in_window_t

0xce99,	// (0x0004038b) bg_popup_call3_rect_pane

0xe0b4,	// (0x000415a6) bg_popup_call3_rect_pane_g1

0xc499,	// (0x0003f98b) bg_popup_call3_rect_pane_g2

0xe0bc,	// (0x000415ae) bg_popup_call3_rect_pane_g3

0xe0c4,	// (0x000415b6) bg_popup_call3_rect_pane_g4

0xe0cc,	// (0x000415be) bg_popup_call3_rect_pane_g5

0xe0d4,	// (0x000415c6) bg_popup_call3_rect_pane_g6

0xe0dc,	// (0x000415ce) bg_popup_call3_rect_pane_g7

0x68fb,	// (0x00039ded) mup_visualizer_osc_pane

0xcf58,	// (0x0004044a) mup_visualizer_spec_pane

0x758c,	// (0x0003aa7e) call3_video_qcif_pane_ParamLimits

0x758c,	// (0x0003aa7e) call3_video_qcif_pane

0x759e,	// (0x0003aa90) call3_video_qcif_uncrop_pane_ParamLimits

0x759e,	// (0x0003aa90) call3_video_qcif_uncrop_pane

0x75ac,	// (0x0003aa9e) call3_video_subqcif_pane_ParamLimits

0x75ac,	// (0x0003aa9e) call3_video_subqcif_pane

0x75be,	// (0x0003aab0) call3_video_subqcif_uncrop_pane_ParamLimits

0x75be,	// (0x0003aab0) call3_video_subqcif_uncrop_pane

0x7616,	// (0x0003ab08) popup_call3_audio_in_window_g4_ParamLimits

0x7616,	// (0x0003ab08) popup_call3_audio_in_window_g4

0x7539,	// (0x0003aa2b) mup_spec_half_pane

0x7542,	// (0x0003aa34) mup_spec_half_pane_cp

0xe30d,	// (0x000417ff) mup_osc_middle_pane

0xe316,	// (0x00041808) mup_visualizer_osc_pane_g1

0x751a,	// (0x0003aa0c) mup_spec_bar_pane_ParamLimits

0x751a,	// (0x0003aa0c) mup_spec_bar_pane

0xe2fa,	// (0x000417ec) mup_spec_bar_pane_g1

0xe304,	// (0x000417f6) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00042b08) mup_spec_bar_pane_g

0x4c00,	// (0x000380f2) aid_cale_week_size_cell_pane_ParamLimits

0x4c13,	// (0x00038105) bg_cale_heading_pane_ParamLimits

0xc4cd,	// (0x0003f9bf) bg_cale_pane_cp01_ParamLimits

0x4c2f,	// (0x00038121) cale_week_corner_pane_ParamLimits

0x4c45,	// (0x00038137) cale_week_day_heading_pane_ParamLimits

0x4c61,	// (0x00038153) cale_week_scroll_pane_g1_ParamLimits

0x4c7a,	// (0x0003816c) cale_week_scroll_pane_g2_ParamLimits

0x4c8b,	// (0x0003817d) cale_week_scroll_pane_g3_ParamLimits

0x4c9c,	// (0x0003818e) cale_week_scroll_pane_g4_ParamLimits

0x4cad,	// (0x0003819f) cale_week_scroll_pane_g5_ParamLimits

0x4cbe,	// (0x000381b0) cale_week_scroll_pane_g6_ParamLimits

0x4ccf,	// (0x000381c1) cale_week_scroll_pane_g7_ParamLimits

0x4ce2,	// (0x000381d4) cale_week_scroll_pane_g8_ParamLimits

0x4cf5,	// (0x000381e7) cale_week_scroll_pane_g9_ParamLimits

0x4d06,	// (0x000381f8) cale_week_scroll_pane_g10_ParamLimits

0x4d17,	// (0x00038209) cale_week_scroll_pane_g11_ParamLimits

0x4d28,	// (0x0003821a) cale_week_scroll_pane_g12_ParamLimits

0x4d39,	// (0x0003822b) cale_week_scroll_pane_g13_ParamLimits

0x4d52,	// (0x00038244) cale_week_scroll_pane_g14_ParamLimits

0x4d6b,	// (0x0003825d) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000426b0) cale_week_scroll_pane_g_ParamLimits

0x4d84,	// (0x00038276) cale_week_time_pane_ParamLimits

0x4d97,	// (0x00038289) grid_cale_week_pane_ParamLimits

0xc4e6,	// (0x0003f9d8) listscroll_cale_week_pane_t1

0x4db4,	// (0x000382a6) scroll_pane_cp08_ParamLimits

0x5913,	// (0x00038e05) cale_month_corner_pane_ParamLimits

0xc87d,	// (0x0003fd6f) cale_month_pane_t1

0x5c7d,	// (0x0003916f) cale_month_week_pane_ParamLimits

0xcbb6,	// (0x000400a8) popup_call_status_window_g1_ParamLimits

0x62ae,	// (0x000397a0) popup_call_status_window_g2_ParamLimits

0x62ba,	// (0x000397ac) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00042858) popup_call_status_window_g_ParamLimits

0xcc1d,	// (0x0004010f) aid_call2_pane

0x33e4,	// (0x000368d6) msg_header_pane_g1

0x6c7e,	// (0x0003a170) postcard_address2_pane_ParamLimits

0x6c7e,	// (0x0003a170) postcard_address2_pane

0x6c8a,	// (0x0003a17c) postcard_message2_pane_ParamLimits

0x6c8a,	// (0x0003a17c) postcard_message2_pane

0x74b2,	// (0x0003a9a4) message2_row_pane_ParamLimits

0x74b2,	// (0x0003a9a4) message2_row_pane

0x74cd,	// (0x0003a9bf) address2_row_pane_ParamLimits

0x74cd,	// (0x0003a9bf) address2_row_pane

0xe2c8,	// (0x000417ba) postcard_message2_row_pane_g1

0xe2d0,	// (0x000417c2) postcard_message2_row_pane_t1

0xe2c8,	// (0x000417ba) address2_row_pane_g1

0xe2d0,	// (0x000417c2) address2_row_pane_t1

0x4fe8,	// (0x000384da) aid_size_cell_vorec

0xc08a,	// (0x0003f57c) main_rss_pane

0x74e0,	// (0x0003a9d2) rss_list_single_pane_ParamLimits

0x74e0,	// (0x0003a9d2) rss_list_single_pane

0xe2de,	// (0x000417d0) rss_list_single_pane_t1

0xe2ec,	// (0x000417de) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00042b03) rss_list_single_pane_t

0xc08a,	// (0x0003f57c) main_camera2_pane

0xc08a,	// (0x0003f57c) main_video2_pane

0x7712,	// (0x0003ac04) cams_zoom_pane_cp2_ParamLimits

0x7712,	// (0x0003ac04) cams_zoom_pane_cp2

0x771e,	// (0x0003ac10) image2_vga_pane_ParamLimits

0x771e,	// (0x0003ac10) image2_vga_pane

0x772d,	// (0x0003ac1f) main_camera2_pane_g1_ParamLimits

0x772d,	// (0x0003ac1f) main_camera2_pane_g1

0x7739,	// (0x0003ac2b) main_camera2_pane_g2_ParamLimits

0x7739,	// (0x0003ac2b) main_camera2_pane_g2

0x7745,	// (0x0003ac37) main_camera2_pane_g3_ParamLimits

0x7745,	// (0x0003ac37) main_camera2_pane_g3

0x7751,	// (0x0003ac43) main_camera2_pane_g4_ParamLimits

0x7751,	// (0x0003ac43) main_camera2_pane_g4

0x775d,	// (0x0003ac4f) main_camera2_pane_g5_ParamLimits

0x775d,	// (0x0003ac4f) main_camera2_pane_g5

0x7769,	// (0x0003ac5b) main_camera2_pane_g6_ParamLimits

0x7769,	// (0x0003ac5b) main_camera2_pane_g6

0x7775,	// (0x0003ac67) main_camera2_pane_g7_ParamLimits

0x7775,	// (0x0003ac67) main_camera2_pane_g7

0x7781,	// (0x0003ac73) main_camera2_pane_g8_ParamLimits

0x7781,	// (0x0003ac73) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00042b24) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00042b24) main_camera2_pane_g

0x7799,	// (0x0003ac8b) main_camera2_pane_t1_ParamLimits

0x7799,	// (0x0003ac8b) main_camera2_pane_t1

0x77ab,	// (0x0003ac9d) main_camera2_pane_t2_ParamLimits

0x77ab,	// (0x0003ac9d) main_camera2_pane_t2

0x77bd,	// (0x0003acaf) main_camera2_pane_t3_ParamLimits

0x77bd,	// (0x0003acaf) main_camera2_pane_t3

0x77cf,	// (0x0003acc1) main_camera2_pane_t4_ParamLimits

0x77cf,	// (0x0003acc1) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00042b37) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00042b37) main_camera2_pane_t

0x7831,	// (0x0003ad23) cams_zoom_pane_cp4_ParamLimits

0x7831,	// (0x0003ad23) cams_zoom_pane_cp4

0x7841,	// (0x0003ad33) image2_cif_pane_ParamLimits

0x7841,	// (0x0003ad33) image2_cif_pane

0x7856,	// (0x0003ad48) image2_subqcif_pane_ParamLimits

0x7856,	// (0x0003ad48) image2_subqcif_pane

0x7865,	// (0x0003ad57) main_video2_pane_g1_ParamLimits

0x7865,	// (0x0003ad57) main_video2_pane_g1

0x7877,	// (0x0003ad69) main_video2_pane_g2_ParamLimits

0x7877,	// (0x0003ad69) main_video2_pane_g2

0x7887,	// (0x0003ad79) main_video2_pane_g3_ParamLimits

0x7887,	// (0x0003ad79) main_video2_pane_g3

0x7897,	// (0x0003ad89) main_video2_pane_g4_ParamLimits

0x7897,	// (0x0003ad89) main_video2_pane_g4

0x78a7,	// (0x0003ad99) main_video2_pane_g5_ParamLimits

0x78a7,	// (0x0003ad99) main_video2_pane_g5

0x78b7,	// (0x0003ada9) main_video2_pane_g6_ParamLimits

0x78b7,	// (0x0003ada9) main_video2_pane_g6

0x0005,

0xf654,	// (0x00042b46) main_video2_pane_g_ParamLimits

0xf654,	// (0x00042b46) main_video2_pane_g

0x78c9,	// (0x0003adbb) main_video2_pane_t1_ParamLimits

0x78c9,	// (0x0003adbb) main_video2_pane_t1

0x78e3,	// (0x0003add5) main_video2_pane_t2_ParamLimits

0x78e3,	// (0x0003add5) main_video2_pane_t2

0x7909,	// (0x0003adfb) main_video2_pane_t3_ParamLimits

0x7909,	// (0x0003adfb) main_video2_pane_t3

0x0002,

0xf661,	// (0x00042b53) main_video2_pane_t_ParamLimits

0xf661,	// (0x00042b53) main_video2_pane_t

0x71d7,	// (0x0003a6c9) call_muted_g2

0x0001,

0xf603,	// (0x00042af5) call_muted_g

0xc08a,	// (0x0003f57c) main_mup2_pane

0xe34d,	// (0x0004183f) main_mup2_pane_g1_ParamLimits

0xe34d,	// (0x0004183f) main_mup2_pane_g1

0x792f,	// (0x0003ae21) main_mup2_pane_g2_ParamLimits

0x792f,	// (0x0003ae21) main_mup2_pane_g2

0x7bb1,	// (0x0003b0a3) main_mup_pane_g13_cp1

0x7bb9,	// (0x0003b0ab) mup_volume_pane_cp1

0x794f,	// (0x0003ae41) main_mup2_pane_g4_ParamLimits

0x794f,	// (0x0003ae41) main_mup2_pane_g4

0x7964,	// (0x0003ae56) main_mup2_pane_g5_ParamLimits

0x7964,	// (0x0003ae56) main_mup2_pane_g5

0x7979,	// (0x0003ae6b) main_mup2_pane_g6_ParamLimits

0x7979,	// (0x0003ae6b) main_mup2_pane_g6

0x798e,	// (0x0003ae80) main_mup2_pane_g7_ParamLimits

0x798e,	// (0x0003ae80) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00042b5a) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00042b5a) main_mup2_pane_g

0x79aa,	// (0x0003ae9c) main_mup2_pane_t1_ParamLimits

0x79aa,	// (0x0003ae9c) main_mup2_pane_t1

0x79c1,	// (0x0003aeb3) main_mup2_pane_t2_ParamLimits

0x79c1,	// (0x0003aeb3) main_mup2_pane_t2

0x79d8,	// (0x0003aeca) main_mup2_pane_t3_ParamLimits

0x79d8,	// (0x0003aeca) main_mup2_pane_t3

0x79ef,	// (0x0003aee1) main_mup2_pane_t4_ParamLimits

0x79ef,	// (0x0003aee1) main_mup2_pane_t4

0x7a09,	// (0x0003aefb) main_mup2_pane_t5_ParamLimits

0x7a09,	// (0x0003aefb) main_mup2_pane_t5

0x7a23,	// (0x0003af15) main_mup2_pane_t6_ParamLimits

0x7a23,	// (0x0003af15) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00042b69) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00042b69) main_mup2_pane_t

0x7a5b,	// (0x0003af4d) mup2_visualizer_pane_ParamLimits

0x7a5b,	// (0x0003af4d) mup2_visualizer_pane

0x7a91,	// (0x0003af83) mup_progress_pane_cp_ParamLimits

0x7a91,	// (0x0003af83) mup_progress_pane_cp

0x7b9c,	// (0x0003b08e) mup_volume_pane_cp_ParamLimits

0x7b9c,	// (0x0003b08e) mup_volume_pane_cp

0x7aa8,	// (0x0003af9a) mup2_visualizer_pane_g1_ParamLimits

0x7aa8,	// (0x0003af9a) mup2_visualizer_pane_g1

0xe359,	// (0x0004184b) mup2_visualizer_pane_g2_ParamLimits

0xe359,	// (0x0004184b) mup2_visualizer_pane_g2

0x7abd,	// (0x0003afaf) mup2_visualizer_pane_g3_ParamLimits

0x7abd,	// (0x0003afaf) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00042b76) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00042b76) mup2_visualizer_pane_g

0xd17f,	// (0x00040671) aid_size_cell_fmradio

0x72ed,	// (0x0003a7df) aid_height_parent_landcape

0xc6e5,	// (0x0003fbd7) wml_content_pane_cp

0xc6ed,	// (0x0003fbdf) wml_tabs_pane

0xc6f6,	// (0x0003fbe8) popup_wml_miniature_window

0xc6fe,	// (0x0003fbf0) scroll_pane_cp021

0xc712,	// (0x0003fc04) wml_content_pane_comp8

0xc08a,	// (0x0003f57c) bg_popup_sub_pane_cp05

0xe377,	// (0x00041869) popup_wml_miniature_window_g1

0xe37f,	// (0x00041871) wml_miniature_view_pane

0x7acb,	// (0x0003afbd) aid_size_wml_view

0x7ad3,	// (0x0003afc5) wml_miniature_view_pane_g1

0x7adc,	// (0x0003afce) wml_miniature_view_pane_g2

0x7ae5,	// (0x0003afd7) wml_miniature_view_pane_g3

0x7aed,	// (0x0003afdf) wml_miniature_view_pane_g4

0x7af5,	// (0x0003afe7) wml_miniature_view_pane_g5

0x7afd,	// (0x0003afef) wml_miniature_view_pane_g6

0x7b05,	// (0x0003aff7) wml_miniature_view_pane_g7

0x7b0d,	// (0x0003afff) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00042b7d) wml_miniature_view_pane_g

0xe34d,	// (0x0004183f) background_graphic_ParamLimits

0xe34d,	// (0x0004183f) background_graphic

0xe387,	// (0x00041879) wml_tabs_2_pane

0xe390,	// (0x00041882) wml_tabs_3_pane_ParamLimits

0xe390,	// (0x00041882) wml_tabs_3_pane

0xe3a2,	// (0x00041894) wml_tabs_4_pane_ParamLimits

0xe3a2,	// (0x00041894) wml_tabs_4_pane

0xe3b8,	// (0x000418aa) wml_tabs_5_pane_ParamLimits

0xe3b8,	// (0x000418aa) wml_tabs_5_pane

0xe3d2,	// (0x000418c4) wml_tabs_pane_g2_ParamLimits

0xe3d2,	// (0x000418c4) wml_tabs_pane_g2

0xe3e6,	// (0x000418d8) wml_tabs_pane_g3_ParamLimits

0xe3e6,	// (0x000418d8) wml_tabs_pane_g3

0x7b15,	// (0x0003b007) wml_tabs_2_active_pane_ParamLimits

0x7b15,	// (0x0003b007) wml_tabs_2_active_pane

0x7b25,	// (0x0003b017) wml_tabs_2_passive_pane_ParamLimits

0x7b25,	// (0x0003b017) wml_tabs_2_passive_pane

0x7b35,	// (0x0003b027) wml_tabs_3_active_pane_cp_ParamLimits

0x7b35,	// (0x0003b027) wml_tabs_3_active_pane_cp

0x7b46,	// (0x0003b038) wml_tabs_3_passive_pane_ParamLimits

0x7b46,	// (0x0003b038) wml_tabs_3_passive_pane

0x7b57,	// (0x0003b049) wml_tabs_3_passive_pane_cp_ParamLimits

0x7b57,	// (0x0003b049) wml_tabs_3_passive_pane_cp

0x7b68,	// (0x0003b05a) tabs_4_active_pane

0x7b70,	// (0x0003b062) tabs_4_passive_pane

0x7b78,	// (0x0003b06a) tabs_4_passive_pane_cp

0x7b80,	// (0x0003b072) tabs_4_passive_pane_cp2

0x70b2,	// (0x0003a5a4) aid_height_text

0x68c8,	// (0x00039dba) mup_volume_cont_pane_ParamLimits

0x68c8,	// (0x00039dba) mup_volume_cont_pane

0x4744,	// (0x00037c36) aid_size_cell_pinb

0x474e,	// (0x00037c40) aid_size_list_pinb

0x7a7a,	// (0x0003af6c) mup2_volume_cont_pane_ParamLimits

0x7a7a,	// (0x0003af6c) mup2_volume_cont_pane

0x7b88,	// (0x0003b07a) mup2_volume_cont_pane_g1_ParamLimits

0x7b88,	// (0x0003b07a) mup2_volume_cont_pane_g1

0x437f,	// (0x00037871) aid_size_cell_touch_ParamLimits

0x437f,	// (0x00037871) aid_size_cell_touch

0x462a,	// (0x00037b1c) touch_pane_ParamLimits

0x462a,	// (0x00037b1c) touch_pane

0x22de,	// (0x000357d0) main_rss2_pane

0xe403,	// (0x000418f5) listscroll_rss2_pane

0xe40c,	// (0x000418fe) rss2_navigation_pane

0xe414,	// (0x00041906) list_rss2_pane

0xcd50,	// (0x00040242) scroll_pane_cp22

0xe41c,	// (0x0004190e) rss2_navigation_pane_g1

0xe425,	// (0x00041917) rss2_navigation_pane_g2

0xe42d,	// (0x0004191f) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00042b8e) rss2_navigation_pane_g

0xe435,	// (0x00041927) rss2_navigation_pane_t1

0x7bc1,	// (0x0003b0b3) rss2_list_single_pane_ParamLimits

0x7bc1,	// (0x0003b0b3) rss2_list_single_pane

0xe443,	// (0x00041935) rss2_list_single_pane_t2

0xe451,	// (0x00041943) rss2_list_single_pane_t3_ParamLimits

0xe451,	// (0x00041943) rss2_list_single_pane_t3

0xe46e,	// (0x00041960) rss2_list_single_pane_t4

0x6129,	// (0x0003961b) smil_status_pane_g1

0xde7c,	// (0x0004136e) main_image2_pane_ParamLimits

0xde7c,	// (0x0004136e) main_image2_pane

0x778d,	// (0x0003ac7f) main_camera2_pane_g9_ParamLimits

0x778d,	// (0x0003ac7f) main_camera2_pane_g9

0x77e1,	// (0x0003acd3) main_camera2_pane_t5_ParamLimits

0x77e1,	// (0x0003acd3) main_camera2_pane_t5

0x77f3,	// (0x0003ace5) main_camera2_pane_t6_ParamLimits

0x77f3,	// (0x0003ace5) main_camera2_pane_t6

0x7bf2,	// (0x0003b0e4) main_image2_pane_g1_ParamLimits

0x7bf2,	// (0x0003b0e4) main_image2_pane_g1

0x6e52,	// (0x0003a344) smil2_video_pane_ParamLimits

0x6e52,	// (0x0003a344) smil2_video_pane

0x317a,	// (0x0003666c) aid_zoom_text_primary_cp

0x45cf,	// (0x00037ac1) popup_preview_fixed_window

0xc64e,	// (0x0003fb40) im_reading_pane_g1

0x76d7,	// (0x0003abc9) cams2_bc_adjust_pane_cp_ParamLimits

0x76d7,	// (0x0003abc9) cams2_bc_adjust_pane_cp

0x7823,	// (0x0003ad15) cams2_bc_adjust_pane_ParamLimits

0x7823,	// (0x0003ad15) cams2_bc_adjust_pane

0x7bfe,	// (0x0003b0f0) cams2_bc_adjust_pane_g1

0x7c06,	// (0x0003b0f8) cams2_slider_pane

0x7c0f,	// (0x0003b101) cams2_slider_pane_g1

0x7c18,	// (0x0003b10a) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00042b95) cams2_slider_pane_g

0x4854,	// (0x00037d46) calc_display_pane_ParamLimits

0x4872,	// (0x00037d64) calc_paper_pane_ParamLimits

0x488e,	// (0x00037d80) grid_calc_pane_ParamLimits

0x631c,	// (0x0003980e) popup_clock_digital_window_t1_ParamLimits

0xd11c,	// (0x0004060e) main_image_pane_t1

0x483a,	// (0x00037d2c) aid_size_cell_calc_ParamLimits

0x483a,	// (0x00037d2c) aid_size_cell_calc

0x7327,	// (0x0003a819) popup_blid_sat_info2_window_ParamLimits

0x7327,	// (0x0003a819) popup_blid_sat_info2_window

0xe484,	// (0x00041976) aid_size_cell_blid

0xe48c,	// (0x0004197e) bg_popup_window_pane_cp07

0xe4af,	// (0x000419a1) grid_popup_blid_pane

0xe4b9,	// (0x000419ab) heading_pane_cp05_ParamLimits

0xe4b9,	// (0x000419ab) heading_pane_cp05

0xe594,	// (0x00041a86) cell_popup_blid_pane_ParamLimits

0xe594,	// (0x00041a86) cell_popup_blid_pane

0xe5b8,	// (0x00041aaa) cell_popup_blid_pane_g1

0xe5c0,	// (0x00041ab2) cell_popup_blid_pane_t1

0x7a40,	// (0x0003af32) mup2_indicator_pane_ParamLimits

0x7a40,	// (0x0003af32) mup2_indicator_pane

0xce99,	// (0x0004038b) mup2_visualizer_osc_pane

0xe365,	// (0x00041857) mup2_visualizer_spec_pane_ParamLimits

0xe365,	// (0x00041857) mup2_visualizer_spec_pane

0x7c32,	// (0x0003b124) mup2_spec_half_pane

0x7c3b,	// (0x0003b12d) mup2_spec_half_pane_cp

0x7c45,	// (0x0003b137) mup2_spec_bar_pane_ParamLimits

0x7c45,	// (0x0003b137) mup2_spec_bar_pane

0xe2fa,	// (0x000417ec) mup2_spec_bar_pane_g1

0xe304,	// (0x000417f6) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00042b08) mup2_spec_bar_pane_g

0x7c64,	// (0x0003b156) mup2_osc_middle_pane

0xe316,	// (0x00041808) mup2_visualizer_osc_pane_g1

0xbc97,	// (0x0003f189) popup_number_entry_window_t1_ParamLimits

0xbcaa,	// (0x0003f19c) popup_number_entry_window_t2_ParamLimits

0xbcbc,	// (0x0003f1ae) popup_number_entry_window_t3_ParamLimits

0x4681,	// (0x00037b73) popup_number_entry_window_t5_ParamLimits

0x4681,	// (0x00037b73) popup_number_entry_window_t5

0xf0d8,	// (0x000425ca) popup_number_entry_window_t_ParamLimits

0xbcce,	// (0x0003f1c0) text_title_cp2_ParamLimits

0x6b46,	// (0x0003a038) aid_hotspot_pointer_text2_pane

0x6be0,	// (0x0003a0d2) main_viewer_pane_g9_ParamLimits

0x6be0,	// (0x0003a0d2) main_viewer_pane_g9

0xc87d,	// (0x0003fd6f) cale_month_pane_t1_ParamLimits

0xc8ba,	// (0x0003fdac) bg_cale_pane_ParamLimits

0xc8d2,	// (0x0003fdc4) list_cale_pane_ParamLimits

0xc4e6,	// (0x0003f9d8) listscroll_cale_day_pane_t1

0xc8e3,	// (0x0003fdd5) scroll_pane_cp09_ParamLimits

0x6903,	// (0x00039df5) main_mup_eq_pane_t1_ParamLimits

0x6903,	// (0x00039df5) main_mup_eq_pane_t1

0x691d,	// (0x00039e0f) main_mup_eq_pane_t2_ParamLimits

0x691d,	// (0x00039e0f) main_mup_eq_pane_t2

0x6937,	// (0x00039e29) main_mup_eq_pane_t3_ParamLimits

0x6937,	// (0x00039e29) main_mup_eq_pane_t3

0x694f,	// (0x00039e41) main_mup_eq_pane_t4_ParamLimits

0x694f,	// (0x00039e41) main_mup_eq_pane_t4

0x6967,	// (0x00039e59) main_mup_eq_pane_t5_ParamLimits

0x6967,	// (0x00039e59) main_mup_eq_pane_t5

0x697f,	// (0x00039e71) main_mup_eq_pane_t6_ParamLimits

0x697f,	// (0x00039e71) main_mup_eq_pane_t6

0x6993,	// (0x00039e85) main_mup_eq_pane_t7_ParamLimits

0x6993,	// (0x00039e85) main_mup_eq_pane_t7

0x69a7,	// (0x00039e99) main_mup_eq_pane_t8_ParamLimits

0x69a7,	// (0x00039e99) main_mup_eq_pane_t8

0x69bd,	// (0x00039eaf) main_mup_eq_pane_t9_ParamLimits

0x69bd,	// (0x00039eaf) main_mup_eq_pane_t9

0x69d5,	// (0x00039ec7) main_mup_eq_pane_t10_ParamLimits

0x69d5,	// (0x00039ec7) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00042957) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00042957) main_mup_eq_pane_t

0x6a92,	// (0x00039f84) mup_equalizer_pane_cp5_ParamLimits

0x6aa8,	// (0x00039f9a) mup_equalizer_pane_cp6_ParamLimits

0x6ac0,	// (0x00039fb2) mup_equalizer_pane_cp7_ParamLimits

0x22de,	// (0x000357d0) main_gallery_pane

0xe31f,	// (0x00041811) smil2_volume_pane

0xe327,	// (0x00041819) smil_status_volume_pane_g1_ParamLimits

0xe33a,	// (0x0004182c) smil_status_volume_pane_g2_ParamLimits

0x754a,	// (0x0003aa3c) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00042b0d) smil_status_volume_pane_g_ParamLimits

0xe48c,	// (0x0004197e) bg_popup_window_pane_cp07_ParamLimits

0xe49a,	// (0x0004198c) blid_firmament_pane

0x7c6d,	// (0x0003b15f) aid_size_cell_gallery_ParamLimits

0x7c6d,	// (0x0003b15f) aid_size_cell_gallery

0x7c7b,	// (0x0003b16d) grid_gallery_pane_ParamLimits

0x7c7b,	// (0x0003b16d) grid_gallery_pane

0x7c8b,	// (0x0003b17d) cell_gallery_pane_ParamLimits

0x7c8b,	// (0x0003b17d) cell_gallery_pane

0xe5ce,	// (0x00041ac0) bg_cell_gallery_focus_pane_ParamLimits

0xe5ce,	// (0x00041ac0) bg_cell_gallery_focus_pane

0xe5e0,	// (0x00041ad2) cell_gallery_pane_g1_ParamLimits

0xe5e0,	// (0x00041ad2) cell_gallery_pane_g1

0x7cd9,	// (0x0003b1cb) cell_gallery_pane_g2_ParamLimits

0x7cd9,	// (0x0003b1cb) cell_gallery_pane_g2

0x7ce6,	// (0x0003b1d8) cell_gallery_pane_g3_ParamLimits

0x7ce6,	// (0x0003b1d8) cell_gallery_pane_g3

0xe5ec,	// (0x00041ade) cell_gallery_pane_g4_ParamLimits

0xe5ec,	// (0x00041ade) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00042bbb) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00042bbb) cell_gallery_pane_g

0xe5f8,	// (0x00041aea) bg_cell_gallery_focus_pane_g1

0xe600,	// (0x00041af2) bg_cell_gallery_focus_pane_g2

0xe608,	// (0x00041afa) bg_cell_gallery_focus_pane_g3

0xe610,	// (0x00041b02) bg_cell_gallery_focus_pane_g4

0xe618,	// (0x00041b0a) bg_cell_gallery_focus_pane_g5

0xe620,	// (0x00041b12) bg_cell_gallery_focus_pane_g6

0xe628,	// (0x00041b1a) bg_cell_gallery_focus_pane_g7

0xe630,	// (0x00041b22) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00042bc4) bg_cell_gallery_focus_pane_g

0xe638,	// (0x00041b2a) aid_firma_cardinal

0xe64c,	// (0x00041b3e) blid_firmament_pane_t1

0xe663,	// (0x00041b55) blid_firmament_pane_t2

0xe67a,	// (0x00041b6c) blid_firmament_pane_t3

0xe691,	// (0x00041b83) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00042bd5) blid_firmament_pane_t

0xe6a8,	// (0x00041b9a) blid_sat_info_pane

0xe6b8,	// (0x00041baa) blid_sat_info_pane_g1

0xe6b8,	// (0x00041baa) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00042bde) blid_sat_info_pane_g

0xe6c2,	// (0x00041bb4) blid_sat_info_pane_t1

0xe6d0,	// (0x00041bc2) smil2_volume_content_pane

0xe6d9,	// (0x00041bcb) smil2_volume_pane_g1

0xe525,	// (0x00041a17) smil2_volume_content_pane_g1

0xe6e1,	// (0x00041bd3) smil2_volume_content_pane_g2

0xe6ea,	// (0x00041bdc) smil2_volume_content_pane_g3

0xe6f3,	// (0x00041be5) smil2_volume_content_pane_g4

0xe6fc,	// (0x00041bee) smil2_volume_content_pane_g5

0xe705,	// (0x00041bf7) smil2_volume_content_pane_g6

0xe70e,	// (0x00041c00) smil2_volume_content_pane_g7

0xe717,	// (0x00041c09) smil2_volume_content_pane_g8

0xe720,	// (0x00041c12) smil2_volume_content_pane_g9

0xe729,	// (0x00041c1b) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00042be3) smil2_volume_content_pane_g

0x4e1a,	// (0x0003830c) cale_week_day_heading_pane_t1_ParamLimits

0x4e33,	// (0x00038325) cale_week_day_heading_pane_t2_ParamLimits

0x4e4c,	// (0x0003833e) cale_week_day_heading_pane_t3_ParamLimits

0x4e65,	// (0x00038357) cale_week_day_heading_pane_t4_ParamLimits

0x4e7e,	// (0x00038370) cale_week_day_heading_pane_t5_ParamLimits

0x4e97,	// (0x00038389) cale_week_day_heading_pane_t6_ParamLimits

0x4eb0,	// (0x000383a2) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000426cf) cale_week_day_heading_pane_t_ParamLimits

0xc4f8,	// (0x0003f9ea) bg_cale_side_pane_ParamLimits

0x4ec9,	// (0x000383bb) cale_week_time_pane_t1_ParamLimits

0x4ee1,	// (0x000383d3) cale_week_time_pane_t2_ParamLimits

0x4ef9,	// (0x000383eb) cale_week_time_pane_t3_ParamLimits

0x4f11,	// (0x00038403) cale_week_time_pane_t4_ParamLimits

0x4f29,	// (0x0003841b) cale_week_time_pane_t5_ParamLimits

0x4f41,	// (0x00038433) cale_week_time_pane_t6_ParamLimits

0x4f59,	// (0x0003844b) cale_week_time_pane_t7_ParamLimits

0x4f79,	// (0x0003846b) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000426de) cale_week_time_pane_t_ParamLimits

0x4f99,	// (0x0003848b) cell_cale_week_pane_g2_ParamLimits

0xc4f8,	// (0x0003f9ea) bg_cale_side_pane_cp01_ParamLimits

0x5f9a,	// (0x0003948c) cale_month_week_pane_t1_ParamLimits

0x5fb1,	// (0x000394a3) cale_month_week_pane_t2_ParamLimits

0x5fc8,	// (0x000394ba) cale_month_week_pane_t3_ParamLimits

0x5fdf,	// (0x000394d1) cale_month_week_pane_t4_ParamLimits

0x5ff6,	// (0x000394e8) cale_month_week_pane_t5_ParamLimits

0x6011,	// (0x00039503) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000427b7) cale_month_week_pane_t_ParamLimits

0x60f6,	// (0x000395e8) cell_cale_month_pane_g1_ParamLimits

0x22de,	// (0x000357d0) main_cale_event_viewer_pane

0x22de,	// (0x000357d0) listscroll_cale_event_viewer_pane

0xe732,	// (0x00041c24) list_cale_ev_pane

0xe73a,	// (0x00041c2c) scroll_pane_cp023

0xe746,	// (0x00041c38) field_cale_ev_pane_ParamLimits

0xe746,	// (0x00041c38) field_cale_ev_pane

0xe764,	// (0x00041c56) field_cale_ev_content_pane_ParamLimits

0xe764,	// (0x00041c56) field_cale_ev_content_pane

0xe770,	// (0x00041c62) field_cale_ev_pane_g1_ParamLimits

0xe770,	// (0x00041c62) field_cale_ev_pane_g1

0xe77c,	// (0x00041c6e) field_cale_ev_pane_g2_ParamLimits

0xe77c,	// (0x00041c6e) field_cale_ev_pane_g2

0xe794,	// (0x00041c86) field_cale_ev_pane_g3_ParamLimits

0xe794,	// (0x00041c86) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00042bf8) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00042bf8) field_cale_ev_pane_g

0xe7ac,	// (0x00041c9e) field_cale_ev_pane_t1_ParamLimits

0xe7ac,	// (0x00041c9e) field_cale_ev_pane_t1

0xe7c3,	// (0x00041cb5) field_cale_ev_content_pane_t1_ParamLimits

0xe7c3,	// (0x00041cb5) field_cale_ev_content_pane_t1

0xd002,	// (0x000404f4) bg_button_pane_cp01

0xc3b8,	// (0x0003f8aa) listscroll_cale_week_pane_ParamLimits

0x4bf6,	// (0x000380e8) popup_toolbar_window_cp01

0xc4e6,	// (0x0003f9d8) listscroll_cale_week_pane_t1_ParamLimits

0xc3b8,	// (0x0003f8aa) listscroll_cale_day_pane_ParamLimits

0x4bf6,	// (0x000380e8) popup_toolbar_window_cp02

0xc4e6,	// (0x0003f9d8) listscroll_cale_day_pane_t1_ParamLimits

0xc3b8,	// (0x0003f8aa) main_cale_month_pane_ParamLimits

0x742e,	// (0x0003a920) popup_toolbar_window_cp03_ParamLimits

0x742e,	// (0x0003a920) popup_toolbar_window_cp03

0x6d68,	// (0x0003a25a) main_image_pane_g2_ParamLimits

0x6d68,	// (0x0003a25a) main_image_pane_g2

0x6d74,	// (0x0003a266) main_image_pane_g3_ParamLimits

0x6d74,	// (0x0003a266) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000429e9) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000429e9) main_image_pane_g

0xd11c,	// (0x0004060e) main_image_pane_t1_ParamLimits

0x6d80,	// (0x0003a272) main_image_pane_t2_ParamLimits

0x6d80,	// (0x0003a272) main_image_pane_t2

0x6d92,	// (0x0003a284) main_image_pane_t3_ParamLimits

0x6d92,	// (0x0003a284) main_image_pane_t3

0x6da4,	// (0x0003a296) main_image_pane_t4_ParamLimits

0x6da4,	// (0x0003a296) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000429f0) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000429f0) main_image_pane_t

0x6db6,	// (0x0003a2a8) popup_image_details_window_cp01

0x6dc0,	// (0x0003a2b2) popup_toobar_trans_pane_cp01_ParamLimits

0x6dc0,	// (0x0003a2b2) popup_toobar_trans_pane_cp01

0x737e,	// (0x0003a870) popup_image_details_window_ParamLimits

0x737e,	// (0x0003a870) popup_image_details_window

0x738c,	// (0x0003a87e) popup_image_focus_window

0x76c9,	// (0x0003abbb) camera2_autofocus_pane_ParamLimits

0x76c9,	// (0x0003abbb) camera2_autofocus_pane

0x22de,	// (0x000357d0) bg_popup_sub_pane_cp06

0xe7e1,	// (0x00041cd3) popup_image_focus_window_g1

0xe7e9,	// (0x00041cdb) popup_image_focus_window_g2

0xe7f1,	// (0x00041ce3) popup_image_focus_window_g3

0xe7f9,	// (0x00041ceb) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00042bff) popup_image_focus_window_g

0xe801,	// (0x00041cf3) popup_image_focus_window_t1

0xe80f,	// (0x00041d01) popup_image_focus_window_t2

0xe81f,	// (0x00041d11) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00042c08) popup_image_focus_window_t

0xe82d,	// (0x00041d1f) camera2_autofocus_pane_g1

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp01

0xe83b,	// (0x00041d2d) popup_image_details_window_g1

0xe84e,	// (0x00041d40) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00042c1a) popup_image_details_window_g

0xe877,	// (0x00041d69) popup_image_details_window_t1

0xe889,	// (0x00041d7b) popup_image_details_window_t2

0xe8a2,	// (0x00041d94) popup_image_details_window_t3

0xe8b6,	// (0x00041da8) popup_image_details_window_t4

0xe8d1,	// (0x00041dc3) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00042c21) popup_image_details_window_t

0xc3a4,	// (0x0003f896) bg_calc_paper_pane_ParamLimits

0x22de,	// (0x000357d0) grid_highlight_pane_cp013

0x498b,	// (0x00037e7d) list_calc_pane_ParamLimits

0x499d,	// (0x00037e8f) scroll_pane_cp024

0xc3b8,	// (0x0003f8aa) bg_calc_display_pane_ParamLimits

0x49a5,	// (0x00037e97) calc_display_pane_t1_ParamLimits

0x49ba,	// (0x00037eac) calc_display_pane_t2_ParamLimits

0x49cf,	// (0x00037ec1) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00042651) calc_display_pane_t_ParamLimits

0x4aab,	// (0x00037f9d) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0004266e) cell_calc_pane_g

0x4ab4,	// (0x00037fa6) cell_calc_pane_t1

0xc417,	// (0x0003f909) grid_highlight_pane_cp02_ParamLimits

0xc42d,	// (0x0003f91f) toolbar_button_pane_cp01_ParamLimits

0xc42d,	// (0x0003f91f) toolbar_button_pane_cp01

0xd161,	// (0x00040653) temp_image_control_pane_ParamLimits

0xd161,	// (0x00040653) temp_image_control_pane

0xde7c,	// (0x0004136e) main_mp3_pane

0xe8eb,	// (0x00041ddd) temp_image_control_pane_g1_ParamLimits

0xe8eb,	// (0x00041ddd) temp_image_control_pane_g1

0xe8f9,	// (0x00041deb) temp_image_control_pane_g2_ParamLimits

0xe8f9,	// (0x00041deb) temp_image_control_pane_g2

0xe90b,	// (0x00041dfd) temp_image_control_pane_g3_ParamLimits

0xe90b,	// (0x00041dfd) temp_image_control_pane_g3

0x7d23,	// (0x0003b215) temp_image_control_pane_g4_ParamLimits

0x7d23,	// (0x0003b215) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00042c2c) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00042c2c) temp_image_control_pane_g

0xe8eb,	// (0x00041ddd) main_mp3_pane_g1

0x7d34,	// (0x0003b226) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00042c35) main_mp3_pane_g

0xe94e,	// (0x00041e40) main_mp3_pane_t1

0xc55d,	// (0x0003fa4f) main_camera_pane_g8_ParamLimits

0xc55d,	// (0x0003fa4f) main_camera_pane_g8

0x522f,	// (0x00038721) main_video_pane_g7_ParamLimits

0x522f,	// (0x00038721) main_video_pane_g7

0x7811,	// (0x0003ad03) main_camera2_pane_t7_ParamLimits

0x7811,	// (0x0003ad03) main_camera2_pane_t7

0xc6a5,	// (0x0003fb97) scroll_pane_cp025_ParamLimits

0xc6a5,	// (0x0003fb97) scroll_pane_cp025

0xc6b9,	// (0x0003fbab) scroll_pane_cp026_ParamLimits

0xc6b9,	// (0x0003fbab) scroll_pane_cp026

0xc6c8,	// (0x0003fbba) wml_content_pane_ParamLimits

0x22de,	// (0x000357d0) main_touch_calib_pane

0x7dd8,	// (0x0003b2ca) main_touch_calib_pane_g1

0x7de4,	// (0x0003b2d6) main_touch_calib_pane_g2

0x7df0,	// (0x0003b2e2) main_touch_calib_pane_g3

0x7dfc,	// (0x0003b2ee) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00042c53) main_touch_calib_pane_g

0x7e08,	// (0x0003b2fa) main_touch_calib_pane_t1

0x7e1f,	// (0x0003b311) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00042c5c) main_touch_calib_pane_t

0xcdda,	// (0x000402cc) mup_progress_pane_cp02

0xcdf9,	// (0x000402eb) navi_pane_g1

0xce5b,	// (0x0004034d) navi_pane_mp_t3

0xde7c,	// (0x0004136e) main_mp3_pane_ParamLimits

0x746c,	// (0x0003a95e) navi_pane_ParamLimits

0xe8eb,	// (0x00041ddd) main_mp3_pane_g1_ParamLimits

0x7d34,	// (0x0003b226) main_mp3_pane_g2_ParamLimits

0x7d40,	// (0x0003b232) main_mp3_pane_g3_ParamLimits

0x7d40,	// (0x0003b232) main_mp3_pane_g3

0x7d4c,	// (0x0003b23e) main_mp3_pane_g4_ParamLimits

0x7d4c,	// (0x0003b23e) main_mp3_pane_g4

0xe91b,	// (0x00041e0d) main_mp3_pane_g5_ParamLimits

0xe91b,	// (0x00041e0d) main_mp3_pane_g5

0xe929,	// (0x00041e1b) main_mp3_pane_g6_ParamLimits

0xe929,	// (0x00041e1b) main_mp3_pane_g6

0xe936,	// (0x00041e28) main_mp3_pane_g7_ParamLimits

0xe936,	// (0x00041e28) main_mp3_pane_g7

0xe942,	// (0x00041e34) main_mp3_pane_g8_ParamLimits

0xe942,	// (0x00041e34) main_mp3_pane_g8

0xf743,	// (0x00042c35) main_mp3_pane_g_ParamLimits

0x7d58,	// (0x0003b24a) main_mp3_pane_t2

0x7d68,	// (0x0003b25a) main_mp3_pane_t3

0xe95c,	// (0x00041e4e) main_mp3_pane_t4

0xe96a,	// (0x00041e5c) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00042c46) main_mp3_pane_t

0xe978,	// (0x00041e6a) mup_progress_pane_cp01

0x317a,	// (0x0003666c) aid_zoom_text_secondary2

0xe732,	// (0x00041c24) list_cale_ev2_pane

0xe73a,	// (0x00041c2c) scroll_pane_cp023_ParamLimits

0x7e74,	// (0x0003b366) field_cale_ev2_pane_ParamLimits

0x7e74,	// (0x0003b366) field_cale_ev2_pane

0x3469,	// (0x0003695b) field_cale_ev2_pane_g1_ParamLimits

0x3469,	// (0x0003695b) field_cale_ev2_pane_g1

0x3475,	// (0x00036967) field_cale_ev2_pane_g2_ParamLimits

0x3475,	// (0x00036967) field_cale_ev2_pane_g2

0x348d,	// (0x0003697f) field_cale_ev2_pane_g3_ParamLimits

0x348d,	// (0x0003697f) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00042c67) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00042c67) field_cale_ev2_pane_g

0x34b1,	// (0x000369a3) field_cale_ev2_pane_t1_ParamLimits

0x34b1,	// (0x000369a3) field_cale_ev2_pane_t1

0x34c8,	// (0x000369ba) field_cale_ev2_pane_t2_ParamLimits

0x34c8,	// (0x000369ba) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00042c70) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00042c70) field_cale_ev2_pane_t

0x6c48,	// (0x0003a13a) main_postcard_pane_g5_ParamLimits

0x6c48,	// (0x0003a13a) main_postcard_pane_g5

0x6c56,	// (0x0003a148) main_postcard_pane_g6_ParamLimits

0x6c56,	// (0x0003a148) main_postcard_pane_g6

0x5079,	// (0x0003856b) camera2_autofocus_pane_cp_ParamLimits

0x5079,	// (0x0003856b) camera2_autofocus_pane_cp

0xde7c,	// (0x0004136e) main_mup3_pane

0x7ebd,	// (0x0003b3af) main_mup3_pane_g1_ParamLimits

0x7ebd,	// (0x0003b3af) main_mup3_pane_g1

0x7ede,	// (0x0003b3d0) main_mup3_pane_g2_ParamLimits

0x7ede,	// (0x0003b3d0) main_mup3_pane_g2

0x7f56,	// (0x0003b448) main_mup3_pane_g3_ParamLimits

0x7f56,	// (0x0003b448) main_mup3_pane_g3

0x7f99,	// (0x0003b48b) main_mup3_pane_g4_ParamLimits

0x7f99,	// (0x0003b48b) main_mup3_pane_g4

0x7fdc,	// (0x0003b4ce) main_mup3_pane_g5_ParamLimits

0x7fdc,	// (0x0003b4ce) main_mup3_pane_g5

0x801f,	// (0x0003b511) main_mup3_pane_g6_ParamLimits

0x801f,	// (0x0003b511) main_mup3_pane_g6

0xe980,	// (0x00041e72) main_mup3_pane_g7_ParamLimits

0xe980,	// (0x00041e72) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00042c80) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00042c80) main_mup3_pane_g

0x8095,	// (0x0003b587) main_mup3_pane_t1_ParamLimits

0x8095,	// (0x0003b587) main_mup3_pane_t1

0x8104,	// (0x0003b5f6) main_mup3_pane_t2_ParamLimits

0x8104,	// (0x0003b5f6) main_mup3_pane_t2

0x81cd,	// (0x0003b6bf) main_mup3_pane_t4_ParamLimits

0x81cd,	// (0x0003b6bf) main_mup3_pane_t4

0x821b,	// (0x0003b70d) main_mup3_pane_t5_ParamLimits

0x821b,	// (0x0003b70d) main_mup3_pane_t5

0x82cb,	// (0x0003b7bd) main_mup3_pane_t6_ParamLimits

0x82cb,	// (0x0003b7bd) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00042c91) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00042c91) main_mup3_pane_t

0x8377,	// (0x0003b869) mup3_progress_pane_ParamLimits

0x8377,	// (0x0003b869) mup3_progress_pane

0x83f5,	// (0x0003b8e7) popup_mup3_control_window_ParamLimits

0x83f5,	// (0x0003b8e7) popup_mup3_control_window

0xe98e,	// (0x00041e80) popup_mup3_text_window

0x840e,	// (0x0003b900) mup3_progress_pane_t1

0x842d,	// (0x0003b91f) mup3_progress_pane_t2

0xe996,	// (0x00041e88) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00042c9e) mup3_progress_pane_t

0xe9b3,	// (0x00041ea5) mup_progress_pane_cp03

0x22de,	// (0x000357d0) bg_tb_trans_pane_cp04

0x844c,	// (0x0003b93e) mup3_volume_pane

0x8454,	// (0x0003b946) popup_mup3_control_window_g1

0x845d,	// (0x0003b94f) mup3_volume_pane_g1

0x8466,	// (0x0003b958) mup3_volume_pane_g2

0x846f,	// (0x0003b961) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00042ca5) mup3_volume_pane_g

0x22de,	// (0x000357d0) bg_tb_trans_pane_cp03

0xe9c3,	// (0x00041eb5) popup_mup3_text_window_g1

0xe9cb,	// (0x00041ebd) popup_mup3_text_window_t1

0xc400,	// (0x0003f8f2) list_calc_item_pane_g1_ParamLimits

0xe3fa,	// (0x000418ec) mup_volume_pane_cp_g1

0x7e36,	// (0x0003b328) main_touch_calib_pane_t3

0x7e4a,	// (0x0003b33c) main_touch_calib_pane_t4

0x7e5e,	// (0x0003b350) main_touch_calib_pane_t5

0x436b,	// (0x0003785d) aid_cell_size_toolbar2

0x4373,	// (0x00037865) aid_popup3_width_pane

0x3172,	// (0x00036664) aid_zoom_text_msg_primary

0x5050,	// (0x00038542) vorec_t7

0xc3c4,	// (0x0003f8b6) bg_calc_paper_pane_g1_ParamLimits

0xc3d0,	// (0x0003f8c2) bg_calc_paper_pane_g2_ParamLimits

0xc3dc,	// (0x0003f8ce) bg_calc_paper_pane_g3_ParamLimits

0xc3e8,	// (0x0003f8da) bg_calc_paper_pane_g4_ParamLimits

0xc3f4,	// (0x0003f8e6) bg_calc_paper_pane_g5_ParamLimits

0x4a0e,	// (0x00037f00) bg_calc_paper_pane_g6_ParamLimits

0x4a1f,	// (0x00037f11) bg_calc_paper_pane_g7_ParamLimits

0x4a30,	// (0x00037f22) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00042658) bg_calc_paper_pane_g_ParamLimits

0x4a41,	// (0x00037f33) calc_bg_paper_pane_g9_ParamLimits

0x5160,	// (0x00038652) image_qvga_pane_ParamLimits

0x5160,	// (0x00038652) image_qvga_pane

0xc2e5,	// (0x0003f7d7) bg_popup_sub_pane_cp04_ParamLimits

0xd098,	// (0x0004058a) popup_mup_playback_window_g1_ParamLimits

0xd0a4,	// (0x00040596) popup_mup_playback_window_t1_ParamLimits

0xd0b9,	// (0x000405ab) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000429e4) popup_mup_playback_window_t_ParamLimits

0x7940,	// (0x0003ae32) main_mup2_pane_g3_ParamLimits

0x7940,	// (0x0003ae32) main_mup2_pane_g3

0x5418,	// (0x0003890a) popup_toolbar_window_cp04

0xd49b,	// (0x0004098d) popup_call2_audio_second_window_g3_ParamLimits

0xd49b,	// (0x0004098d) popup_call2_audio_second_window_g3

0xd8a5,	// (0x00040d97) popup_call2_audio_first_window_g4_ParamLimits

0xd8a5,	// (0x00040d97) popup_call2_audio_first_window_g4

0xdf3e,	// (0x00041430) popup_call2_audio_in_window_g4_ParamLimits

0xdf3e,	// (0x00041430) popup_call2_audio_in_window_g4

0x6d5b,	// (0x0003a24d) aid_area_sk_bg_cut_ParamLimits

0x6d5b,	// (0x0003a24d) aid_area_sk_bg_cut

0xd0ce,	// (0x000405c0) aid_area_sk_bg_cut_2_ParamLimits

0xd0ce,	// (0x000405c0) aid_area_sk_bg_cut_2

0x7cc9,	// (0x0003b1bb) aid_placing_details_win

0x7cd1,	// (0x0003b1c3) aid_placing_details_win_2

0xe82d,	// (0x00041d1f) camera2_autofocus_pane_g1_ParamLimits

0x45c0,	// (0x00037ab2) popup_fixed_preview_cale_window_ParamLimits

0x45c0,	// (0x00037ab2) popup_fixed_preview_cale_window

0xceaa,	// (0x0004039c) navi_slider_pane_g3

0xceb3,	// (0x000403a5) navi_slider_pane_g4

0xcebc,	// (0x000403ae) navi_slider_pane_g5

0xceaa,	// (0x0004039c) navi_slider_pane_g6

0x6697,	// (0x00039b89) navi_slider_pane_g7

0xcfcf,	// (0x000404c1) mup_scale_pane_g3

0xcfd8,	// (0x000404ca) mup_scale_pane_g4

0xcfe1,	// (0x000404d3) mup_scale_pane_g5

0x6ad8,	// (0x00039fca) mup_scale_pane_g6

0x6ae1,	// (0x00039fd3) mup_scale_pane_g7

0xceaa,	// (0x0004039c) cams2_slider_pane_g3

0xe47c,	// (0x0004196e) cams2_slider_pane_g4

0x7c21,	// (0x0003b113) cams2_slider_pane_g5

0xceaa,	// (0x0004039c) cams2_slider_pane_g6

0x7c29,	// (0x0003b11b) cams2_slider_pane_g7

0xe6b8,	// (0x00041baa) camera2_autofocus_pane_cp_g1

0xe9d9,	// (0x00041ecb) bg_popup_preview_window_pane_cp02_ParamLimits

0xe9d9,	// (0x00041ecb) bg_popup_preview_window_pane_cp02

0xe9e5,	// (0x00041ed7) list_fp_cale_pane_ParamLimits

0xe9e5,	// (0x00041ed7) list_fp_cale_pane

0xe9f1,	// (0x00041ee3) popup_fixed_preview_cale_window_t1_ParamLimits

0xe9f1,	// (0x00041ee3) popup_fixed_preview_cale_window_t1

0x8478,	// (0x0003b96a) popup_fixed_preview_cale_window_t2_ParamLimits

0x8478,	// (0x0003b96a) popup_fixed_preview_cale_window_t2

0x848d,	// (0x0003b97f) popup_fixed_preview_cale_window_t3_ParamLimits

0x848d,	// (0x0003b97f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00042cac) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00042cac) popup_fixed_preview_cale_window_t

0x84a2,	// (0x0003b994) list_single_fp_cale_pane_ParamLimits

0x84a2,	// (0x0003b994) list_single_fp_cale_pane

0xea0f,	// (0x00041f01) list_single_fp_cale_pane_g1_ParamLimits

0xea0f,	// (0x00041f01) list_single_fp_cale_pane_g1

0xea1b,	// (0x00041f0d) list_single_fp_cale_pane_g2_ParamLimits

0xea1b,	// (0x00041f0d) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00042cb3) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00042cb3) list_single_fp_cale_pane_g

0xea34,	// (0x00041f26) list_single_fp_cale_pane_t1_ParamLimits

0xea34,	// (0x00041f26) list_single_fp_cale_pane_t1

0xea46,	// (0x00041f38) list_single_fp_cale_pane_t2_ParamLimits

0xea46,	// (0x00041f38) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00042cba) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00042cba) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x22de,	// (0x000357d0) main_dialer_pane

0x84b4,	// (0x0003b9a6) aid_cell_size_keypad

0x84be,	// (0x0003b9b0) dialer_ne_pane

0x84c8,	// (0x0003b9ba) grid_dialer_command_1_pane

0x84d0,	// (0x0003b9c2) grid_dialer_command_2_pane

0x84d8,	// (0x0003b9ca) grid_dialer_keypad_pane

0x84ea,	// (0x0003b9dc) bg_popup_call_pane_cp06_ParamLimits

0x84ea,	// (0x0003b9dc) bg_popup_call_pane_cp06

0x84f6,	// (0x0003b9e8) dialer_ne_clear_pane_ParamLimits

0x84f6,	// (0x0003b9e8) dialer_ne_clear_pane

0xea79,	// (0x00041f6b) dialer_ne_pane_g1

0xea81,	// (0x00041f73) dialer_ne_pane_t1_ParamLimits

0xea81,	// (0x00041f73) dialer_ne_pane_t1

0x8502,	// (0x0003b9f4) dialer_ne_pane_t2_ParamLimits

0x8502,	// (0x0003b9f4) dialer_ne_pane_t2

0x851f,	// (0x0003ba11) dialer_ne_pane_t3_ParamLimits

0x851f,	// (0x0003ba11) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00042cbf) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00042cbf) dialer_ne_pane_t

0x8543,	// (0x0003ba35) dialer_ne_pane_t3_copy1_ParamLimits

0x8543,	// (0x0003ba35) dialer_ne_pane_t3_copy1

0x8567,	// (0x0003ba59) cell_dialer_keypad_pane_ParamLimits

0x8567,	// (0x0003ba59) cell_dialer_keypad_pane

0x857e,	// (0x0003ba70) cell_dialer_command_1_pane_ParamLimits

0x857e,	// (0x0003ba70) cell_dialer_command_1_pane

0x8594,	// (0x0003ba86) cell_dialer_command_2_pane_ParamLimits

0x8594,	// (0x0003ba86) cell_dialer_command_2_pane

0xea93,	// (0x00041f85) bg_button_pane_cp02_ParamLimits

0xea93,	// (0x00041f85) bg_button_pane_cp02

0x85a3,	// (0x0003ba95) cell_dialer_keypad_pane_g1_ParamLimits

0x85a3,	// (0x0003ba95) cell_dialer_keypad_pane_g1

0xea93,	// (0x00041f85) bg_button_pane_cp03_ParamLimits

0xea93,	// (0x00041f85) bg_button_pane_cp03

0x85b8,	// (0x0003baaa) cell_dialer_command_1_pane_g1_ParamLimits

0x85b8,	// (0x0003baaa) cell_dialer_command_1_pane_g1

0xea9f,	// (0x00041f91) bg_button_pane_cp04

0x85cc,	// (0x0003babe) cell_dialer_command_2_pane_g1

0xce99,	// (0x0004038b) bg_button_pane_cp06

0xeaa7,	// (0x00041f99) dialer_ne_clear_pane_g1

0x65da,	// (0x00039acc) navi_pane_g2

0x6608,	// (0x00039afa) navi_pane_g3

0x0002,

0xf3f5,	// (0x000428e7) navi_pane_g

0x6633,	// (0x00039b25) navi_pane_mv_g2

0x665a,	// (0x00039b4c) navi_pane_mv_g5

0x6662,	// (0x00039b54) navi_pane_mv_t1

0xc3b8,	// (0x0003f8aa) main_clock2_pane

0x85fd,	// (0x0003baef) main_clock2_list_pane_ParamLimits

0x85fd,	// (0x0003baef) main_clock2_list_pane

0x8625,	// (0x0003bb17) main_clock2_pane_t1_ParamLimits

0x8625,	// (0x0003bb17) main_clock2_pane_t1

0x8647,	// (0x0003bb39) main_clock2_pane_t2_ParamLimits

0x8647,	// (0x0003bb39) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00042cc6) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00042cc6) main_clock2_pane_t

0x86a2,	// (0x0003bb94) popup_clock_analogue_window_cp03_ParamLimits

0x86a2,	// (0x0003bb94) popup_clock_analogue_window_cp03

0x86c0,	// (0x0003bbb2) popup_clock_digital_window_cp02_ParamLimits

0x86c0,	// (0x0003bbb2) popup_clock_digital_window_cp02

0x872d,	// (0x0003bc1f) main_clock2_list_single_pane_ParamLimits

0x872d,	// (0x0003bc1f) main_clock2_list_single_pane

0xce99,	// (0x0004038b) list_highlight_pane_cp05

0xeaaf,	// (0x00041fa1) main_clock2_list_single_pane_t1

0x5418,	// (0x0003890a) popup_toolbar_window_cp04_ParamLimits

0x7cf3,	// (0x0003b1e5) camera2_autofocus_pane_g2_ParamLimits

0x7cf3,	// (0x0003b1e5) camera2_autofocus_pane_g2

0x7cff,	// (0x0003b1f1) camera2_autofocus_pane_g3_ParamLimits

0x7cff,	// (0x0003b1f1) camera2_autofocus_pane_g3

0x7d0b,	// (0x0003b1fd) camera2_autofocus_pane_g4_ParamLimits

0x7d0b,	// (0x0003b1fd) camera2_autofocus_pane_g4

0x7d17,	// (0x0003b209) camera2_autofocus_pane_g5_ParamLimits

0x7d17,	// (0x0003b209) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00042c0f) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00042c0f) camera2_autofocus_pane_g

0x7e9d,	// (0x0003b38f) camera2_autofocus_pane_cp_g2

0x7ea5,	// (0x0003b397) camera2_autofocus_pane_cp_g3

0x7ead,	// (0x0003b39f) camera2_autofocus_pane_cp_g4

0x7eb5,	// (0x0003b3a7) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00042c75) camera2_autofocus_pane_cp_g

0x84e2,	// (0x0003b9d4) popup_dialer_spcha_window

0x22de,	// (0x000357d0) bg_popup_sub_pane_cp07

0xeabd,	// (0x00041faf) list_spcha_pane

0xeac5,	// (0x00041fb7) list_single_spcha_pane_ParamLimits

0xeac5,	// (0x00041fb7) list_single_spcha_pane

0x22de,	// (0x000357d0) list_highlight_pane_cp06

0xead6,	// (0x00041fc8) list_single_spcha_pane_t1

0xdcce,	// (0x000411c0) popup_call2_audio_out_window_g4_ParamLimits

0xdcce,	// (0x000411c0) popup_call2_audio_out_window_g4

0x22de,	// (0x000357d0) main_imed2_pane

0x7394,	// (0x0003a886) popup_imed_adjust2_window

0x73a7,	// (0x0003a899) popup_imed_trans_window_ParamLimits

0x73a7,	// (0x0003a899) popup_imed_trans_window

0xe4e5,	// (0x000419d7) popup_blid_sat_info2_window_t1

0xe4f3,	// (0x000419e5) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00042ba4) popup_blid_sat_info2_window_t

0x87d7,	// (0x0003bcc9) aid_size_cell_colour_35

0x87f1,	// (0x0003bce3) aid_size_cell_colour_112

0x8808,	// (0x0003bcfa) aid_size_cell_effect

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp02

0xde8a,	// (0x0004137c) heading_imed_pane

0x8822,	// (0x0003bd14) listscroll_imed_pane

0xeae4,	// (0x00041fd6) heading_imed_pane_g1

0xeaec,	// (0x00041fde) heading_imed_pane_t1

0xeafa,	// (0x00041fec) grid_imed_colour_35_pane_ParamLimits

0xeafa,	// (0x00041fec) grid_imed_colour_35_pane

0x882e,	// (0x0003bd20) grid_imed_effect_pane

0xeb11,	// (0x00042003) list_imed_aspect_pane

0x883e,	// (0x0003bd30) scroll_pane_cp027_ParamLimits

0x883e,	// (0x0003bd30) scroll_pane_cp027

0x884a,	// (0x0003bd3c) cell_imed_effect_pane_ParamLimits

0x884a,	// (0x0003bd3c) cell_imed_effect_pane

0xeb19,	// (0x0004200b) cell_imed_colour_pane_ParamLimits

0xeb19,	// (0x0004200b) cell_imed_colour_pane

0xeb5b,	// (0x0004204d) cell_imed_colour_pane_g1_ParamLimits

0xeb5b,	// (0x0004204d) cell_imed_colour_pane_g1

0xeb6c,	// (0x0004205e) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb6c,	// (0x0004205e) hgihlgiht_grid_pane_cp016

0x8862,	// (0x0003bd54) cell_imed_effect_pane_g1

0x886a,	// (0x0003bd5c) grid_highlight_pane_cp017

0xeb7d,	// (0x0004206f) list_imed_single_pane_ParamLimits

0xeb7d,	// (0x0004206f) list_imed_single_pane

0x22de,	// (0x000357d0) list_highlight_pane_cp07

0xeb92,	// (0x00042084) list_imed_aspect_pane_comp1_t1

0xe29f,	// (0x00041791) bg_tb_trans_pane_cp05

0xebb4,	// (0x000420a6) popup_imed_adjust2_window_g1

0xebdb,	// (0x000420cd) popup_imed_adjust2_window_t1

0xebf3,	// (0x000420e5) slider_imed_adjust_pane

0xec07,	// (0x000420f9) slider_imed_adjust_pane_g1

0xec17,	// (0x00042109) slider_imed_adjust_pane_g2

0xec27,	// (0x00042119) slider_imed_adjust_pane_g3

0xec38,	// (0x0004212a) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00042ce3) slider_imed_adjust_pane_g

0x8873,	// (0x0003bd65) aid_size_cell_clipart2

0x887f,	// (0x0003bd71) grid_imed_clipart_pane

0xec49,	// (0x0004213b) scroll_pane_cp031

0x8889,	// (0x0003bd7b) cell_imed_clipart_pane_ParamLimits

0x8889,	// (0x0003bd7b) cell_imed_clipart_pane

0x88ab,	// (0x0003bd9d) cell_imed_clipart_pane_g1

0x22de,	// (0x000357d0) grid_highlight_pane_cp014

0x8609,	// (0x0003bafb) main_clock2_pane_g1_ParamLimits

0x8609,	// (0x0003bafb) main_clock2_pane_g1

0x86d8,	// (0x0003bbca) aid_call2_pane_cp10

0x86ea,	// (0x0003bbdc) aid_call_pane_cp10

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g1

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g2

0x86fc,	// (0x0003bbee) popup_clock_analogue_window_cp10_g3

0x86fc,	// (0x0003bbee) popup_clock_analogue_window_cp10_g4

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00042cd1) popup_clock_analogue_window_cp10_g

0x870e,	// (0x0003bc00) popup_clock_analogue_window_cp10_t1

0x873f,	// (0x0003bc31) clock_digital_number_pane_cp10_ParamLimits

0x873f,	// (0x0003bc31) clock_digital_number_pane_cp10

0x8757,	// (0x0003bc49) clock_digital_number_pane_cp11_ParamLimits

0x8757,	// (0x0003bc49) clock_digital_number_pane_cp11

0x876f,	// (0x0003bc61) clock_digital_number_pane_cp12_ParamLimits

0x876f,	// (0x0003bc61) clock_digital_number_pane_cp12

0x8787,	// (0x0003bc79) clock_digital_number_pane_cp13_ParamLimits

0x8787,	// (0x0003bc79) clock_digital_number_pane_cp13

0x879f,	// (0x0003bc91) clock_digital_separator_pane_cp10_ParamLimits

0x879f,	// (0x0003bc91) clock_digital_separator_pane_cp10

0x87b7,	// (0x0003bca9) popup_clock_digital_window_cp02_t1_ParamLimits

0x87b7,	// (0x0003bca9) popup_clock_digital_window_cp02_t1

0xc2dd,	// (0x0003f7cf) clock_digital_number_pane_cp10_g1

0xc2dd,	// (0x0003f7cf) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00042cec) clock_digital_number_pane_cp10_g

0xc2dd,	// (0x0003f7cf) clock_digital_separator_pane_cp10_g1

0xc2dd,	// (0x0003f7cf) clock_digital_separator_pane_g2_cp10

0xce69,	// (0x0004035b) navi_pane_vded_g4

0xce72,	// (0x00040364) navi_pane_vded_g5

0xce7b,	// (0x0004036d) navi_pane_vded_t1

0x22de,	// (0x000357d0) main_vded_pane

0x88b4,	// (0x0003bda6) main_vded_pane_g1

0x88c0,	// (0x0003bdb2) main_vded_pane_g2

0x88ca,	// (0x0003bdbc) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00042cf1) main_vded_pane_g

0x88d4,	// (0x0003bdc6) main_vded_pane_t1

0x88e2,	// (0x0003bdd4) main_vded_pane_t2

0x0001,

0xf806,	// (0x00042cf8) main_vded_pane_t

0x88f0,	// (0x0003bde2) vded_slider_pane

0x88fa,	// (0x0003bdec) vded_video_pane

0xec51,	// (0x00042143) vded_video_pane_g1

0x8904,	// (0x0003bdf6) vded_video_pane_g2

0xe6b8,	// (0x00041baa) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00042cfd) vded_video_pane_g

0xec5b,	// (0x0004214d) vded_slider_pane_g1

0xe3fa,	// (0x000418ec) vded_slider_pane_g2

0xec64,	// (0x00042156) vded_slider_pane_g3

0xec6d,	// (0x0004215f) vded_slider_pane_g4

0xec76,	// (0x00042168) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00042d04) vded_slider_pane_g

0x83e7,	// (0x0003b8d9) mup3_rocker_pane_ParamLimits

0x83e7,	// (0x0003b8d9) mup3_rocker_pane

0x890d,	// (0x0003bdff) mup3_control_keys_pane_g1

0x8915,	// (0x0003be07) mup3_control_keys_pane_g2

0x891d,	// (0x0003be0f) mup3_control_keys_pane_g3

0x8925,	// (0x0003be17) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00042d0f) mup3_control_keys_pane_g

0x45e8,	// (0x00037ada) popup_toolbar2_fixed_window_cp01_ParamLimits

0x45e8,	// (0x00037ada) popup_toolbar2_fixed_window_cp01

0x8401,	// (0x0003b8f3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8401,	// (0x0003b8f3) popup_toolbar2_fixed_window_cp02

0xd60d,	// (0x00040aff) popup_call2_audio_second_window_t4_ParamLimits

0xd60d,	// (0x00040aff) popup_call2_audio_second_window_t4

0xdb3b,	// (0x0004102d) popup_call2_audio_first_window_t6_ParamLimits

0xdb3b,	// (0x0004102d) popup_call2_audio_first_window_t6

0xddd1,	// (0x000412c3) popup_call2_audio_out_window_t6_ParamLimits

0xddd1,	// (0x000412c3) popup_call2_audio_out_window_t6

0x22de,	// (0x000357d0) main_vitu_pane

0x8935,	// (0x0003be27) aid_size_cell_itu_ParamLimits

0x8935,	// (0x0003be27) aid_size_cell_itu

0x4610,	// (0x00037b02) bg_popup_window_pane_cp08_ParamLimits

0x4610,	// (0x00037b02) bg_popup_window_pane_cp08

0x8943,	// (0x0003be35) field_vitu_entry_pane_ParamLimits

0x8943,	// (0x0003be35) field_vitu_entry_pane

0x8952,	// (0x0003be44) grid_vitu_function_pane_ParamLimits

0x8952,	// (0x0003be44) grid_vitu_function_pane

0x8962,	// (0x0003be54) grid_vitu_itu_pane_ParamLimits

0x8962,	// (0x0003be54) grid_vitu_itu_pane

0x8972,	// (0x0003be64) cell_vitu_itu_pane_ParamLimits

0x8972,	// (0x0003be64) cell_vitu_itu_pane

0x8987,	// (0x0003be79) cell_vitu_function_pane_ParamLimits

0x8987,	// (0x0003be79) cell_vitu_function_pane

0xde7c,	// (0x0004136e) bg_popup_sub_pane_cp08_ParamLimits

0xde7c,	// (0x0004136e) bg_popup_sub_pane_cp08

0x8999,	// (0x0003be8b) field_vitu_entry_pane_t1_ParamLimits

0x8999,	// (0x0003be8b) field_vitu_entry_pane_t1

0xec97,	// (0x00042189) field_vitu_entry_pane_t2_ParamLimits

0xec97,	// (0x00042189) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00042d1d) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00042d1d) field_vitu_entry_pane_t

0xecb4,	// (0x000421a6) bg_button_pane_cp05_ParamLimits

0xecb4,	// (0x000421a6) bg_button_pane_cp05

0x89b5,	// (0x0003bea7) cell_vitu_itu_pane_g1

0x89cd,	// (0x0003bebf) cell_vitu_itu_pane_t1_ParamLimits

0x89cd,	// (0x0003bebf) cell_vitu_itu_pane_t1

0x89df,	// (0x0003bed1) cell_vitu_itu_pane_t2_ParamLimits

0x89df,	// (0x0003bed1) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00042d22) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00042d22) cell_vitu_itu_pane_t

0xecc2,	// (0x000421b4) bg_button_pane_cp07

0x8a14,	// (0x0003bf06) cell_vitu_function_pane_g1

0x48b2,	// (0x00037da4) main_calc_pane_g1

0x43a7,	// (0x00037899) aid_visual_content_pane

0x22de,	// (0x000357d0) main_vradio_pane

0x8a1d,	// (0x0003bf0f) main_vradio_pane_g1_ParamLimits

0x8a1d,	// (0x0003bf0f) main_vradio_pane_g1

0xeccc,	// (0x000421be) main_vradio_pane_g2_ParamLimits

0xeccc,	// (0x000421be) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00042d29) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00042d29) main_vradio_pane_g

0x8a2d,	// (0x0003bf1f) main_vradio_pane_t1_ParamLimits

0x8a2d,	// (0x0003bf1f) main_vradio_pane_t1

0x8a3f,	// (0x0003bf31) main_vradio_pane_t2_ParamLimits

0x8a3f,	// (0x0003bf31) main_vradio_pane_t2

0xecd9,	// (0x000421cb) main_vradio_pane_t3_ParamLimits

0xecd9,	// (0x000421cb) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00042d2e) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00042d2e) main_vradio_pane_t

0x8a51,	// (0x0003bf43) vradio_rocker_control_pane_ParamLimits

0x8a51,	// (0x0003bf43) vradio_rocker_control_pane

0x8a5d,	// (0x0003bf4f) vradio_station_info_pane_ParamLimits

0x8a5d,	// (0x0003bf4f) vradio_station_info_pane

0xeced,	// (0x000421df) vradio_frequency_info_pane_ParamLimits

0xeced,	// (0x000421df) vradio_frequency_info_pane

0xe6b8,	// (0x00041baa) vradio_station_info_pane_g1

0xecfc,	// (0x000421ee) vradio_station_info_pane_t1_ParamLimits

0xecfc,	// (0x000421ee) vradio_station_info_pane_t1

0xed1e,	// (0x00042210) vradio_station_info_pane_t2_ParamLimits

0xed1e,	// (0x00042210) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00042d35) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00042d35) vradio_station_info_pane_t

0xed30,	// (0x00042222) vradio_tuning_pane

0xed38,	// (0x0004222a) vradio_rocker_control_pane_g1

0xed40,	// (0x00042232) vradio_rocker_control_pane_g2

0xed48,	// (0x0004223a) vradio_rocker_control_pane_g3

0xed50,	// (0x00042242) vradio_rocker_control_pane_g4

0xed58,	// (0x0004224a) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00042d3a) vradio_rocker_control_pane_g

0x8a6c,	// (0x0003bf5e) vradio_frequency_info_pane_g1

0xed60,	// (0x00042252) vradio_frequency_info_pane_t1_ParamLimits

0xed60,	// (0x00042252) vradio_frequency_info_pane_t1

0x8a76,	// (0x0003bf68) vradio_tuning_pane_g1

0x8a7f,	// (0x0003bf71) vradio_tuning_pane_t1

0x43f0,	// (0x000378e2) area_side_right_pane_ParamLimits

0x43f0,	// (0x000378e2) area_side_right_pane

0xe266,	// (0x00041758) status_small_pane_g1

0xe26e,	// (0x00041760) status_small_pane_g2

0xe277,	// (0x00041769) status_small_pane_g3

0xe280,	// (0x00041772) status_small_pane_g4

0x0003,

0xf608,	// (0x00042afa) status_small_pane_g

0xe289,	// (0x0004177b) status_small_pane_t1

0x22de,	// (0x000357d0) main_video3_pane

0xed74,	// (0x00042266) cams_zoom_vslider_pane

0xed7c,	// (0x0004226e) image3_wide_pane_ParamLimits

0xed7c,	// (0x0004226e) image3_wide_pane

0xed96,	// (0x00042288) image3_wide_small_pane

0xeda2,	// (0x00042294) main_video3_pane_g1_ParamLimits

0xeda2,	// (0x00042294) main_video3_pane_g1

0xedbe,	// (0x000422b0) main_video3_pane_g2_ParamLimits

0xedbe,	// (0x000422b0) main_video3_pane_g2

0x0001,

0xf853,	// (0x00042d45) main_video3_pane_g_ParamLimits

0xf853,	// (0x00042d45) main_video3_pane_g

0xedda,	// (0x000422cc) main_video3_pane_t1_ParamLimits

0xedda,	// (0x000422cc) main_video3_pane_t1

0xee05,	// (0x000422f7) main_video3_pane_t2_ParamLimits

0xee05,	// (0x000422f7) main_video3_pane_t2

0xee30,	// (0x00042322) main_video3_pane_t3_ParamLimits

0xee30,	// (0x00042322) main_video3_pane_t3

0x0002,

0xf858,	// (0x00042d4a) main_video3_pane_t_ParamLimits

0xf858,	// (0x00042d4a) main_video3_pane_t

0xee5d,	// (0x0004234f) cams_zoom_vslider_pane_g1

0xee66,	// (0x00042358) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00042d51) cams_zoom_vslider_pane_g

0xee6e,	// (0x00042360) small_slider_vertical_pane

0xe6b8,	// (0x00041baa) small_slider_vertical_pane_g1

0xe6b8,	// (0x00041baa) small_slider_vertical_pane_g2

0xee76,	// (0x00042368) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00042d56) small_slider_vertical_pane_g

0x22de,	// (0x000357d0) main_hwr_training_pane

0xee7f,	// (0x00042371) hwr_training_instruct_pane_ParamLimits

0xee7f,	// (0x00042371) hwr_training_instruct_pane

0x8a8e,	// (0x0003bf80) hwr_training_navi_pane_ParamLimits

0x8a8e,	// (0x0003bf80) hwr_training_navi_pane

0x8aa8,	// (0x0003bf9a) hwr_training_write_pane_ParamLimits

0x8aa8,	// (0x0003bf9a) hwr_training_write_pane

0x22de,	// (0x000357d0) bg_frame_shadow_pane

0xeeb6,	// (0x000423a8) hwr_training_write_pane_g1

0xeebe,	// (0x000423b0) hwr_training_write_pane_g2

0xeec6,	// (0x000423b8) hwr_training_write_pane_g3

0xeece,	// (0x000423c0) hwr_training_write_pane_g4

0xeed6,	// (0x000423c8) hwr_training_write_pane_g5

0xeede,	// (0x000423d0) hwr_training_write_pane_g6

0xeee6,	// (0x000423d8) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00042d5d) hwr_training_write_pane_g

0x8ae0,	// (0x0003bfd2) hwr_training_navi_pane_g1_ParamLimits

0x8ae0,	// (0x0003bfd2) hwr_training_navi_pane_g1

0x8af2,	// (0x0003bfe4) hwr_training_navi_pane_g2_ParamLimits

0x8af2,	// (0x0003bfe4) hwr_training_navi_pane_g2

0x8b04,	// (0x0003bff6) hwr_training_navi_pane_g3_ParamLimits

0x8b04,	// (0x0003bff6) hwr_training_navi_pane_g3

0x8b14,	// (0x0003c006) hwr_training_navi_pane_g4_ParamLimits

0x8b14,	// (0x0003c006) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00042d6c) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00042d6c) hwr_training_navi_pane_g

0x8b2e,	// (0x0003c020) hwr_training_navi_pane_t1

0x8b3c,	// (0x0003c02e) list_single_hwr_training_instruct_pane_ParamLimits

0x8b3c,	// (0x0003c02e) list_single_hwr_training_instruct_pane

0xeeee,	// (0x000423e0) list_single_hwr_training_instruct_pane_t1

0xe5f8,	// (0x00041aea) bg_frame_shadow_pane_g1

0xeefd,	// (0x000423ef) bg_frame_shadow_pane_g2

0xef05,	// (0x000423f7) bg_frame_shadow_pane_g3

0xef0d,	// (0x000423ff) bg_frame_shadow_pane_g4

0xef15,	// (0x00042407) bg_frame_shadow_pane_g5

0xef1d,	// (0x0004240f) bg_frame_shadow_pane_g6

0xef25,	// (0x00042417) bg_frame_shadow_pane_g7

0xc471,	// (0x0003f963) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00042d77) bg_frame_shadow_pane_g

0x22de,	// (0x000357d0) main_video_tele_dialer_pane

0x8b61,	// (0x0003c053) aid_size_cell_video_keypad_ParamLimits

0x8b61,	// (0x0003c053) aid_size_cell_video_keypad

0x8b71,	// (0x0003c063) grid_video_dialer_keypad_pane_ParamLimits

0x8b71,	// (0x0003c063) grid_video_dialer_keypad_pane

0x8ba3,	// (0x0003c095) video_down_pane_cp_ParamLimits

0x8ba3,	// (0x0003c095) video_down_pane_cp

0x8baf,	// (0x0003c0a1) cell_video_dialer_keypad_pane_ParamLimits

0x8baf,	// (0x0003c0a1) cell_video_dialer_keypad_pane

0xef49,	// (0x0004243b) bg_button_pane_cp08_ParamLimits

0xef49,	// (0x0004243b) bg_button_pane_cp08

0x8bc4,	// (0x0003c0b6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8bc4,	// (0x0003c0b6) cell_video_dialer_keypad_pane_g1

0x83db,	// (0x0003b8cd) mup3_rocker2_pane_ParamLimits

0x83db,	// (0x0003b8cd) mup3_rocker2_pane

0xe6b8,	// (0x00041baa) mup3_rocker2_pane_g1

0x7304,	// (0x0003a7f6) main_dialer2_pane

0x22de,	// (0x000357d0) main_mp4_pane

0x8c06,	// (0x0003c0f8) main_mp4_pane_g1_ParamLimits

0x8c06,	// (0x0003c0f8) main_mp4_pane_g1

0x8c14,	// (0x0003c106) main_mp4_pane_g2_ParamLimits

0x8c14,	// (0x0003c106) main_mp4_pane_g2

0x8c22,	// (0x0003c114) main_mp4_pane_g3_ParamLimits

0x8c22,	// (0x0003c114) main_mp4_pane_g3

0x8c67,	// (0x0003c159) main_mp4_pane_g4_ParamLimits

0x8c67,	// (0x0003c159) main_mp4_pane_g4

0x8c8f,	// (0x0003c181) main_mp4_pane_g5_ParamLimits

0x8c8f,	// (0x0003c181) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00042d97) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00042d97) main_mp4_pane_g

0x8cdf,	// (0x0003c1d1) main_mp4_pane_t1_ParamLimits

0x8cdf,	// (0x0003c1d1) main_mp4_pane_t1

0x8d3b,	// (0x0003c22d) main_mp4_pane_t2_ParamLimits

0x8d3b,	// (0x0003c22d) main_mp4_pane_t2

0xef55,	// (0x00042447) main_mp4_pane_t3_ParamLimits

0xef55,	// (0x00042447) main_mp4_pane_t3

0x8d8d,	// (0x0003c27f) main_mp4_pane_t4_ParamLimits

0x8d8d,	// (0x0003c27f) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00042da4) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00042da4) main_mp4_pane_t

0x8dd1,	// (0x0003c2c3) mp4_progress_pane_ParamLimits

0x8dd1,	// (0x0003c2c3) mp4_progress_pane

0x8e1b,	// (0x0003c30d) mp4_rocker_pane_ParamLimits

0x8e1b,	// (0x0003c30d) mp4_rocker_pane

0xef7d,	// (0x0004246f) mp4_progress_pane_t1

0xef96,	// (0x00042488) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00042dad) mp4_progress_pane_t

0xefaf,	// (0x000424a1) mup_progress_pane_cp04

0xe6b8,	// (0x00041baa) mp4_rocker_pane_g1

0x8e3b,	// (0x0003c32d) aid_cell_size_keypad2_ParamLimits

0x8e3b,	// (0x0003c32d) aid_cell_size_keypad2

0x8e4b,	// (0x0003c33d) dialer2_ne_pane_ParamLimits

0x8e4b,	// (0x0003c33d) dialer2_ne_pane

0x8e59,	// (0x0003c34b) grid_dialer2_keypad_pane_ParamLimits

0x8e59,	// (0x0003c34b) grid_dialer2_keypad_pane

0x09ef,	// (0x00033ee1) bg_popup_call_pane_cp07_ParamLimits

0x09ef,	// (0x00033ee1) bg_popup_call_pane_cp07

0x8e69,	// (0x0003c35b) dialer2_ne_pane_t1_ParamLimits

0x8e69,	// (0x0003c35b) dialer2_ne_pane_t1

0x8e8e,	// (0x0003c380) cell_dialer2_keypad_pane_ParamLimits

0x8e8e,	// (0x0003c380) cell_dialer2_keypad_pane

0xefcd,	// (0x000424bf) bg_button_pane_pane_cp04_ParamLimits

0xefcd,	// (0x000424bf) bg_button_pane_pane_cp04

0x8ea3,	// (0x0003c395) cell_dialer2_keypad_pane_g1_ParamLimits

0x8ea3,	// (0x0003c395) cell_dialer2_keypad_pane_g1

0x52da,	// (0x000387cc) aid_placing_vt_set_content_ParamLimits

0x52da,	// (0x000387cc) aid_placing_vt_set_content

0x5306,	// (0x000387f8) aid_placing_vt_set_title_ParamLimits

0x5306,	// (0x000387f8) aid_placing_vt_set_title

0x22de,	// (0x000357d0) main_image3_pane

0x8f3d,	// (0x0003c42f) area_side_right_pane_cp01_ParamLimits

0x8f3d,	// (0x0003c42f) area_side_right_pane_cp01

0x0fd1,	// (0x000344c3) main_image3_pane_g1_ParamLimits

0x0fd1,	// (0x000344c3) main_image3_pane_g1

0x8f6a,	// (0x0003c45c) main_image3_pane_g2_ParamLimits

0x8f6a,	// (0x0003c45c) main_image3_pane_g2

0x8f83,	// (0x0003c475) main_image3_pane_g3_ParamLimits

0x8f83,	// (0x0003c475) main_image3_pane_g3

0x8f9c,	// (0x0003c48e) main_image3_pane_g4_ParamLimits

0x8f9c,	// (0x0003c48e) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00042dbc) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00042dbc) main_image3_pane_g

0x8fb5,	// (0x0003c4a7) main_image3_pane_t1_ParamLimits

0x8fb5,	// (0x0003c4a7) main_image3_pane_t1

0x8fda,	// (0x0003c4cc) main_image3_pane_t2_ParamLimits

0x8fda,	// (0x0003c4cc) main_image3_pane_t2

0x8ff9,	// (0x0003c4eb) main_image3_pane_t3_ParamLimits

0x8ff9,	// (0x0003c4eb) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00042dc5) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00042dc5) main_image3_pane_t

0x4610,	// (0x00037b02) grid_sctrl_middle_pane_cp01_ParamLimits

0x4610,	// (0x00037b02) grid_sctrl_middle_pane_cp01

0x905a,	// (0x0003c54c) cell_sctrl_middle_pane_cp01_ParamLimits

0x905a,	// (0x0003c54c) cell_sctrl_middle_pane_cp01

0x906b,	// (0x0003c55d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x906b,	// (0x0003c55d) cell_sctrl_middle_pane_cp01_g1

0x22de,	// (0x000357d0) main_call4_pane

0x9078,	// (0x0003c56a) aid_size_button_call4_ParamLimits

0x9078,	// (0x0003c56a) aid_size_button_call4

0x90a8,	// (0x0003c59a) call4_windows_pane_ParamLimits

0x90a8,	// (0x0003c59a) call4_windows_pane

0x90c2,	// (0x0003c5b4) grid_call4_button_pane_ParamLimits

0x90c2,	// (0x0003c5b4) grid_call4_button_pane

0xefe3,	// (0x000424d5) call4_windows_conf_pane

0xeffa,	// (0x000424ec) popup_call4_audio_first_window_ParamLimits

0xeffa,	// (0x000424ec) popup_call4_audio_first_window

0xf046,	// (0x00042538) popup_call4_audio_second_window_ParamLimits

0xf046,	// (0x00042538) popup_call4_audio_second_window

0xf05a,	// (0x0004254c) popup_call4_audio_wait_window_ParamLimits

0xf05a,	// (0x0004254c) popup_call4_audio_wait_window

0x90e6,	// (0x0003c5d8) cell_call4_button_pane_ParamLimits

0x90e6,	// (0x0003c5d8) cell_call4_button_pane

0x910b,	// (0x0003c5fd) bg_button_pane_cp09_ParamLimits

0x910b,	// (0x0003c5fd) bg_button_pane_cp09

0x9117,	// (0x0003c609) cell_call4_button_pane_g1_ParamLimits

0x9117,	// (0x0003c609) cell_call4_button_pane_g1

0x9124,	// (0x0003c616) cell_call4_button_pane_t1_ParamLimits

0x9124,	// (0x0003c616) cell_call4_button_pane_t1

0xf0a2,	// (0x00042594) popup_call4_audio_conf_window_ParamLimits

0xf0a2,	// (0x00042594) popup_call4_audio_conf_window

0x840e,	// (0x0003b900) mup3_progress_pane_t1_ParamLimits

0x842d,	// (0x0003b91f) mup3_progress_pane_t2_ParamLimits

0xe996,	// (0x00041e88) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00042c9e) mup3_progress_pane_t_ParamLimits

0xe9b3,	// (0x00041ea5) mup_progress_pane_cp03_ParamLimits

0x892d,	// (0x0003be1f) mup3_control_keys_pane_g4_copy1

0x8dff,	// (0x0003c2f1) mp4_rocker2_pane_ParamLimits

0x8dff,	// (0x0003c2f1) mp4_rocker2_pane

0xf0b6,	// (0x000425a8) mp4_rocker2_pane_g1

0xf0be,	// (0x000425b0) mp4_rocker2_pane_g2

0x9136,	// (0x0003c628) mp4_rocker2_pane_g3

0x913e,	// (0x0003c630) mp4_rocker2_pane_g4

0x9146,	// (0x0003c638) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00042dce) mp4_rocker2_pane_g

0x22de,	// (0x000357d0) main_camera4_pane

0x22de,	// (0x000357d0) main_video4_pane

0x8b7f,	// (0x0003c071) main_video_tele_dialer_pane_t1_ParamLimits

0x8b7f,	// (0x0003c071) main_video_tele_dialer_pane_t1

0x8b91,	// (0x0003c083) main_video_tele_dialer_pane_t2_ParamLimits

0x8b91,	// (0x0003c083) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00042d88) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00042d88) main_video_tele_dialer_pane_t

0x9166,	// (0x0003c658) cam4_autofocus_pane_ParamLimits

0x9166,	// (0x0003c658) cam4_autofocus_pane

0x9180,	// (0x0003c672) cam4_image_uncrop_pane_ParamLimits

0x9180,	// (0x0003c672) cam4_image_uncrop_pane

0x9197,	// (0x0003c689) cam4_indicators_pane_ParamLimits

0x9197,	// (0x0003c689) cam4_indicators_pane

0x91b3,	// (0x0003c6a5) main_camera4_pane_g1_ParamLimits

0x91b3,	// (0x0003c6a5) main_camera4_pane_g1

0x91bf,	// (0x0003c6b1) main_camera4_pane_g2_ParamLimits

0x91bf,	// (0x0003c6b1) main_camera4_pane_g2

0x91bf,	// (0x0003c6b1) main_camera4_pane_g3_ParamLimits

0x91bf,	// (0x0003c6b1) main_camera4_pane_g3

0x91cb,	// (0x0003c6bd) main_camera4_pane_g4_ParamLimits

0x91cb,	// (0x0003c6bd) main_camera4_pane_g4

0x91d7,	// (0x0003c6c9) main_camera4_pane_g5_ParamLimits

0x91d7,	// (0x0003c6c9) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00042dd9) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00042dd9) main_camera4_pane_g

0x91f1,	// (0x0003c6e3) main_camera4_pane_t1_ParamLimits

0x91f1,	// (0x0003c6e3) main_camera4_pane_t1

0xe91b,	// (0x00041e0d) bg_tb_trans_pane_cp06

0x9241,	// (0x0003c733) cam4_indicators_pane_g1

0x9252,	// (0x0003c744) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00042df4) cam4_indicators_pane_g

0x9270,	// (0x0003c762) cam4_indicators_pane_t1

0x929a,	// (0x0003c78c) main_video4_pane_g1_ParamLimits

0x929a,	// (0x0003c78c) main_video4_pane_g1

0x92a6,	// (0x0003c798) main_video4_pane_g2_ParamLimits

0x92a6,	// (0x0003c798) main_video4_pane_g2

0x92b2,	// (0x0003c7a4) main_video4_pane_g3_ParamLimits

0x92b2,	// (0x0003c7a4) main_video4_pane_g3

0x92be,	// (0x0003c7b0) main_video4_pane_g4_ParamLimits

0x92be,	// (0x0003c7b0) main_video4_pane_g4

0x0004,

0xf909,	// (0x00042dfb) main_video4_pane_g_ParamLimits

0xf909,	// (0x00042dfb) main_video4_pane_g

0x92de,	// (0x0003c7d0) vid4_indicators_pane_ParamLimits

0x92de,	// (0x0003c7d0) vid4_indicators_pane

0x92fd,	// (0x0003c7ef) video4_image_uncrop_cif_pane_ParamLimits

0x92fd,	// (0x0003c7ef) video4_image_uncrop_cif_pane

0x930c,	// (0x0003c7fe) video4_image_uncrop_nhd_pane_ParamLimits

0x930c,	// (0x0003c7fe) video4_image_uncrop_nhd_pane

0x9180,	// (0x0003c672) video4_image_uncrop_vga_pane_ParamLimits

0x9180,	// (0x0003c672) video4_image_uncrop_vga_pane

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp07

0x9323,	// (0x0003c815) vid4_indicators_pane_g1

0x9337,	// (0x0003c829) vid4_indicators_pane_g2

0x934b,	// (0x0003c83d) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00042e06) vid4_indicators_pane_g

0x937a,	// (0x0003c86c) vid4_indicators_pane_t1

0x9391,	// (0x0003c883) cam4_autofocus_pane_g1

0x9399,	// (0x0003c88b) cam4_autofocus_pane_g2

0x93a1,	// (0x0003c893) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00042e11) cam4_autofocus_pane_g

0x93a9,	// (0x0003c89b) cam4_autofocus_pane_g3_copy1

0xef2d,	// (0x0004241f) video_down_pane_cp_t1

0xef3b,	// (0x0004242d) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00042d8d) video_down_pane_cp_t

0x4610,	// (0x00037b02) popup_vitu2_window_ParamLimits

0x4610,	// (0x00037b02) popup_vitu2_window

0x93b1,	// (0x0003c8a3) aid_size_cell2_itu2_ParamLimits

0x93b1,	// (0x0003c8a3) aid_size_cell2_itu2

0x93d3,	// (0x0003c8c5) aid_size_cell_itu2_ParamLimits

0x93d3,	// (0x0003c8c5) aid_size_cell_itu2

0x09ef,	// (0x00033ee1) bg_popup_window_pane_cp09_ParamLimits

0x09ef,	// (0x00033ee1) bg_popup_window_pane_cp09

0x9417,	// (0x0003c909) field_vitu2_entry_pane_ParamLimits

0x9417,	// (0x0003c909) field_vitu2_entry_pane

0x9437,	// (0x0003c929) grid_vitu2_function_pane_ParamLimits

0x9437,	// (0x0003c929) grid_vitu2_function_pane

0x947b,	// (0x0003c96d) grid_vitu2_itu_pane_ParamLimits

0x947b,	// (0x0003c96d) grid_vitu2_itu_pane

0x94f3,	// (0x0003c9e5) cell_vitu2_itu_pane_ParamLimits

0x94f3,	// (0x0003c9e5) cell_vitu2_itu_pane

0x9508,	// (0x0003c9fa) cell_vitu2_function_pane_ParamLimits

0x9508,	// (0x0003c9fa) cell_vitu2_function_pane

0x00c2,	// (0x000335b4) bg_popup_call_pane_cp08_ParamLimits

0x00c2,	// (0x000335b4) bg_popup_call_pane_cp08

0x00db,	// (0x000335cd) field_vitu2_entry_pane_g1

0x00e7,	// (0x000335d9) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00042e18) field_vitu2_entry_pane_g

0x34dd,	// (0x000369cf) field_vitu2_entry_pane_t1_ParamLimits

0x34dd,	// (0x000369cf) field_vitu2_entry_pane_t1

0x350d,	// (0x000369ff) field_vitu2_entry_pane_t2_ParamLimits

0x350d,	// (0x000369ff) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00042e1f) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00042e1f) field_vitu2_entry_pane_t

0x9547,	// (0x0003ca39) bg_button_pane_cp010_ParamLimits

0x9547,	// (0x0003ca39) bg_button_pane_cp010

0x9555,	// (0x0003ca47) cell_vitu2_itu_pane_g1

0x9573,	// (0x0003ca65) cell_vitu2_itu_pane_t1_ParamLimits

0x9573,	// (0x0003ca65) cell_vitu2_itu_pane_t1

0x352a,	// (0x00036a1c) cell_vitu2_itu_pane_t2_ParamLimits

0x352a,	// (0x00036a1c) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00042e29) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00042e29) cell_vitu2_itu_pane_t

0xde7c,	// (0x0004136e) bg_button_pane_cp011

0x95c5,	// (0x0003cab7) cell_vitu2_function_pane_g1

0x22de,	// (0x000357d0) main_myfav_hc_pane

0x903b,	// (0x0003c52d) popup_image3_note_pane_ParamLimits

0x903b,	// (0x0003c52d) popup_image3_note_pane

0x9049,	// (0x0003c53b) popup_image3_tool_bar_pane_ParamLimits

0x9049,	// (0x0003c53b) popup_image3_tool_bar_pane

0x3598,	// (0x00036a8a) cell_vitu2_itu_pane_t3_ParamLimits

0x3598,	// (0x00036a8a) cell_vitu2_itu_pane_t3

0x22de,	// (0x000357d0) bg_popup_trans_pane

0x0155,	// (0x00033647) grid_image3_tool_bar_pane

0x015f,	// (0x00033651) bg_popup_trans_pane_g1

0xc7ae,	// (0x0003fca0) bg_popup_trans_pane_g2

0x0167,	// (0x00033659) bg_popup_trans_pane_g3

0x016f,	// (0x00033661) bg_popup_trans_pane_g4

0x0177,	// (0x00033669) bg_popup_trans_pane_g5

0x017f,	// (0x00033671) bg_popup_trans_pane_g6

0x0187,	// (0x00033679) bg_popup_trans_pane_g7

0x018f,	// (0x00033681) bg_popup_trans_pane_g8

0xc78e,	// (0x0003fc80) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00042e30) bg_popup_trans_pane_g

0x0197,	// (0x00033689) cell_image3_tool_bar_pane_ParamLimits

0x0197,	// (0x00033689) cell_image3_tool_bar_pane

0xe6b8,	// (0x00041baa) cell_image3_tool_bar_pane_g1

0x22de,	// (0x000357d0) bg_popup_trans_pane_cp1

0x01ab,	// (0x0003369d) popup_image3_note_pane_t1

0x01b9,	// (0x000336ab) popup_image3_note_pane_t2

0x01c7,	// (0x000336b9) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00042e43) popup_image3_note_pane_t

0x01d5,	// (0x000336c7) popup_image3_note_pane_t3_copy1

0x95d9,	// (0x0003cacb) bg_myfav_hc_instruction_pane_ParamLimits

0x95d9,	// (0x0003cacb) bg_myfav_hc_instruction_pane

0x95f1,	// (0x0003cae3) cell_myfav_contact_pane_ParamLimits

0x95f1,	// (0x0003cae3) cell_myfav_contact_pane

0x960b,	// (0x0003cafd) cell_myfav_contact_pane_cp1_ParamLimits

0x960b,	// (0x0003cafd) cell_myfav_contact_pane_cp1

0x9623,	// (0x0003cb15) cell_myfav_contact_pane_cp2_ParamLimits

0x9623,	// (0x0003cb15) cell_myfav_contact_pane_cp2

0x963b,	// (0x0003cb2d) cell_myfav_contact_pane_cp3_ParamLimits

0x963b,	// (0x0003cb2d) cell_myfav_contact_pane_cp3

0x9652,	// (0x0003cb44) cell_myfav_contact_pane_cp4_ParamLimits

0x9652,	// (0x0003cb44) cell_myfav_contact_pane_cp4

0x9668,	// (0x0003cb5a) cell_myfav_contact_pane_cp5_ParamLimits

0x9668,	// (0x0003cb5a) cell_myfav_contact_pane_cp5

0x967c,	// (0x0003cb6e) cell_myfav_contact_pane_cp6_ParamLimits

0x967c,	// (0x0003cb6e) cell_myfav_contact_pane_cp6

0x9690,	// (0x0003cb82) cell_myfav_contact_pane_cp7_ParamLimits

0x9690,	// (0x0003cb82) cell_myfav_contact_pane_cp7

0x01e3,	// (0x000336d5) listscroll_gen_pane_cp05

0x96a8,	// (0x0003cb9a) main_myfav_hc_pane_g1_ParamLimits

0x96a8,	// (0x0003cb9a) main_myfav_hc_pane_g1

0x96be,	// (0x0003cbb0) main_myfav_hc_pane_g2_ParamLimits

0x96be,	// (0x0003cbb0) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00042e4a) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00042e4a) main_myfav_hc_pane_g

0x96ec,	// (0x0003cbde) main_myfav_hc_pane_t1_ParamLimits

0x96ec,	// (0x0003cbde) main_myfav_hc_pane_t1

0x01ec,	// (0x000336de) main_myfav_hc_pane_t2_ParamLimits

0x01ec,	// (0x000336de) main_myfav_hc_pane_t2

0x01fe,	// (0x000336f0) main_myfav_hc_pane_t3_ParamLimits

0x01fe,	// (0x000336f0) main_myfav_hc_pane_t3

0x9703,	// (0x0003cbf5) main_myfav_hc_pane_t4_ParamLimits

0x9703,	// (0x0003cbf5) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00042e51) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00042e51) main_myfav_hc_pane_t

0xe6b8,	// (0x00041baa) bg_myfav_hc_instruction_pane_g1

0x0210,	// (0x00033702) cell_myfav_contact_pane_g1_ParamLimits

0x0210,	// (0x00033702) cell_myfav_contact_pane_g1

0x0210,	// (0x00033702) cell_myfav_contact_pane_g2_ParamLimits

0x0210,	// (0x00033702) cell_myfav_contact_pane_g2

0x021c,	// (0x0003370e) cell_myfav_contact_pane_g3_ParamLimits

0x021c,	// (0x0003370e) cell_myfav_contact_pane_g3

0xe980,	// (0x00041e72) cell_myfav_contact_pane_g4_ParamLimits

0xe980,	// (0x00041e72) cell_myfav_contact_pane_g4

0x0229,	// (0x0003371b) cell_myfav_contact_pane_g5_ParamLimits

0x0229,	// (0x0003371b) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00042e5c) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00042e5c) cell_myfav_contact_pane_g

0x96d4,	// (0x0003cbc6) main_myfav_hc_pane_g3_ParamLimits

0x96d4,	// (0x0003cbc6) main_myfav_hc_pane_g3

0x4523,	// (0x00037a15) popup_adpt_find_window

0x972d,	// (0x0003cc1f) afind_page_pane_ParamLimits

0x972d,	// (0x0003cc1f) afind_page_pane

0x973a,	// (0x0003cc2c) aid_size_cell_afind_ParamLimits

0x973a,	// (0x0003cc2c) aid_size_cell_afind

0x9754,	// (0x0003cc46) bg_popup_sub_pane_cp09_ParamLimits

0x9754,	// (0x0003cc46) bg_popup_sub_pane_cp09

0x9761,	// (0x0003cc53) find_pane_cp01_ParamLimits

0x9761,	// (0x0003cc53) find_pane_cp01

0x0235,	// (0x00033727) grid_afind_control_pane_ParamLimits

0x0235,	// (0x00033727) grid_afind_control_pane

0x976e,	// (0x0003cc60) grid_afind_pane_ParamLimits

0x976e,	// (0x0003cc60) grid_afind_pane

0x978a,	// (0x0003cc7c) cell_afind_pane_ParamLimits

0x978a,	// (0x0003cc7c) cell_afind_pane

0xe6b8,	// (0x00041baa) afind_page_pane_g1

0x97d2,	// (0x0003ccc4) afind_page_pane_g2

0x97db,	// (0x0003cccd) afind_page_pane_g3

0x0002,

0xf975,	// (0x00042e67) afind_page_pane_g

0x97e4,	// (0x0003ccd6) afind_page_pane_t1

0x0249,	// (0x0003373b) cell_afind_grid_control_pane_ParamLimits

0x0249,	// (0x0003373b) cell_afind_grid_control_pane

0xefcd,	// (0x000424bf) bg_button_pane_cp69_ParamLimits

0xefcd,	// (0x000424bf) bg_button_pane_cp69

0x9804,	// (0x0003ccf6) cell_afind_pane_g1_ParamLimits

0x9804,	// (0x0003ccf6) cell_afind_pane_g1

0x9811,	// (0x0003cd03) cell_afind_pane_t1_ParamLimits

0x9811,	// (0x0003cd03) cell_afind_pane_t1

0xc5a7,	// (0x0003fa99) bg_button_pane_cp72

0x0258,	// (0x0003374a) cell_afind_grid_control_pane_g1

0x6e82,	// (0x0003a374) aid_image_placing_area_ParamLimits

0x6e82,	// (0x0003a374) aid_image_placing_area

0xec7f,	// (0x00042171) field_vitu_entry_pane_g1_ParamLimits

0xec7f,	// (0x00042171) field_vitu_entry_pane_g1

0xec8b,	// (0x0004217d) field_vitu_entry_pane_g2_ParamLimits

0xec8b,	// (0x0004217d) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00042d18) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00042d18) field_vitu_entry_pane_g

0x89b5,	// (0x0003bea7) cell_vitu_itu_pane_g1_ParamLimits

0x89f7,	// (0x0003bee9) cell_vitu_itu_pane_t3_ParamLimits

0x89f7,	// (0x0003bee9) cell_vitu_itu_pane_t3

0xef7d,	// (0x0004246f) mp4_progress_pane_t1_ParamLimits

0xef96,	// (0x00042488) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00042dad) mp4_progress_pane_t_ParamLimits

0xefaf,	// (0x000424a1) mup_progress_pane_cp04_ParamLimits

0x9717,	// (0x0003cc09) main_myfav_hc_pane_t5_ParamLimits

0x9717,	// (0x0003cc09) main_myfav_hc_pane_t5

0x43b3,	// (0x000378a5) aid_zoom_text_primary

0x4523,	// (0x00037a15) popup_adpt_find_window_ParamLimits

0xde7c,	// (0x0004136e) main_cam_set_pane

0x91a5,	// (0x0003c697) cam4_zoom_pane_ParamLimits

0x91a5,	// (0x0003c697) cam4_zoom_pane

0x9823,	// (0x0003cd15) main_cam_set_pane_g1_ParamLimits

0x9823,	// (0x0003cd15) main_cam_set_pane_g1

0x9831,	// (0x0003cd23) main_cam_set_pane_g2_ParamLimits

0x9831,	// (0x0003cd23) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00042e6e) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00042e6e) main_cam_set_pane_g

0x983d,	// (0x0003cd2f) main_cam_set_pane_t1_ParamLimits

0x983d,	// (0x0003cd2f) main_cam_set_pane_t1

0x9859,	// (0x0003cd4b) main_cset_listscroll_pane_ParamLimits

0x9859,	// (0x0003cd4b) main_cset_listscroll_pane

0x9884,	// (0x0003cd76) main_cset_slider_pane_ParamLimits

0x9884,	// (0x0003cd76) main_cset_slider_pane

0x0269,	// (0x0003375b) main_cset_list_pane_ParamLimits

0x0269,	// (0x0003375b) main_cset_list_pane

0x0279,	// (0x0003376b) scroll_pane_cp028

0x98a3,	// (0x0003cd95) aid_area_touch_slider

0x98bf,	// (0x0003cdb1) cset_slider_pane

0x98e9,	// (0x0003cddb) main_cset_slider_pane_g1

0x98fe,	// (0x0003cdf0) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00042e73) main_cset_slider_pane_g

0x02b2,	// (0x000337a4) main_cset_slider_pane_t1

0x99c0,	// (0x0003ceb2) main_cset_slider_pane_t2

0x99da,	// (0x0003cecc) main_cset_slider_pane_t3

0x99f4,	// (0x0003cee6) main_cset_slider_pane_t4

0x9a0e,	// (0x0003cf00) main_cset_slider_pane_t5

0x9a2c,	// (0x0003cf1e) main_cset_slider_pane_t6

0x9a43,	// (0x0003cf35) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00042e98) main_cset_slider_pane_t

0x9b4f,	// (0x0003d041) cset_list_set_pane_ParamLimits

0x9b4f,	// (0x0003d041) cset_list_set_pane

0x9b65,	// (0x0003d057) aid_position_infowindow_above

0x9b6d,	// (0x0003d05f) aid_position_infowindow_below

0x35e5,	// (0x00036ad7) cset_list_set_pane_g1_ParamLimits

0x35e5,	// (0x00036ad7) cset_list_set_pane_g1

0x35f1,	// (0x00036ae3) cset_list_set_pane_g3_ParamLimits

0x35f1,	// (0x00036ae3) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00042eb7) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00042eb7) cset_list_set_pane_g

0x3600,	// (0x00036af2) cset_list_set_pane_t1_ParamLimits

0x3600,	// (0x00036af2) cset_list_set_pane_t1

0xde7c,	// (0x0004136e) list_highlight_pane_cp021_ParamLimits

0xde7c,	// (0x0004136e) list_highlight_pane_cp021

0xcfcf,	// (0x000404c1) cset_slider_pane_g1

0xcfe1,	// (0x000404d3) cset_slider_pane_g2

0xcfd8,	// (0x000404ca) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00042ebc) cset_slider_pane_g

0x9b75,	// (0x0003d067) aid_area_touch_cam4_zoom

0x9b7d,	// (0x0003d06f) cam4_zoom_cont_pane

0x9b85,	// (0x0003d077) cam4_zoom_pane_g1

0x9b8d,	// (0x0003d07f) cam4_zoom_pane_g2

0x9b95,	// (0x0003d087) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00042ec3) cam4_zoom_pane_g

0x0d3e,	// (0x00034230) cam4_zoom_cont_pane_g1

0x0d47,	// (0x00034239) cam4_zoom_cont_pane_g2

0x0d50,	// (0x00034242) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00042eca) cam4_zoom_cont_pane_g

0x9092,	// (0x0003c584) call4_image_pane_ParamLimits

0x9092,	// (0x0003c584) call4_image_pane

0xefe3,	// (0x000424d5) call4_windows_conf_pane_ParamLimits

0xf024,	// (0x00042516) popup_call4_audio_in_window_ParamLimits

0xf024,	// (0x00042516) popup_call4_audio_in_window

0x22de,	// (0x000357d0) bg_popup_call2_act_pane_cp02

0xf09a,	// (0x0004258c) call4_list_conf_pane

0xe6b8,	// (0x00041baa) call4_image_pane_g1

0xe6b8,	// (0x00041baa) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00042bde) call4_image_pane_g

0x03bd,	// (0x000338af) list_single_graphic_popup_conf4_pane_ParamLimits

0x03bd,	// (0x000338af) list_single_graphic_popup_conf4_pane

0x22de,	// (0x000357d0) list_highlight_pane_cp022

0x03d0,	// (0x000338c2) list_single_graphic_popup_conf4_pane_g1

0xccae,	// (0x000401a0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00042ed1) list_single_graphic_popup_conf4_pane_g

0x03d8,	// (0x000338ca) list_single_graphic_popup_conf4_pane_t1

0x546a,	// (0x0003895c) popup_vtel_slider_window_ParamLimits

0x546a,	// (0x0003895c) popup_vtel_slider_window

0xefbb,	// (0x000424ad) dialer2_ne_pane_t2_ParamLimits

0xefbb,	// (0x000424ad) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00042db2) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00042db2) dialer2_ne_pane_t

0xde7c,	// (0x0004136e) bg_popup_sub_pane_cp010_ParamLimits

0xde7c,	// (0x0004136e) bg_popup_sub_pane_cp010

0x9b9d,	// (0x0003d08f) popup_vtel_slider_window_g1_ParamLimits

0x9b9d,	// (0x0003d08f) popup_vtel_slider_window_g1

0x9ba9,	// (0x0003d09b) popup_vtel_slider_window_g2_ParamLimits

0x9ba9,	// (0x0003d09b) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00042ed6) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00042ed6) popup_vtel_slider_window_g

0x9bf1,	// (0x0003d0e3) vtel_slider_pane_ParamLimits

0x9bf1,	// (0x0003d0e3) vtel_slider_pane

0x9c00,	// (0x0003d0f2) vtel_slider_pane_g1_ParamLimits

0x9c00,	// (0x0003d0f2) vtel_slider_pane_g1

0x9c0d,	// (0x0003d0ff) vtel_slider_pane_g2_ParamLimits

0x9c0d,	// (0x0003d0ff) vtel_slider_pane_g2

0x9c1a,	// (0x0003d10c) vtel_slider_pane_g3_ParamLimits

0x9c1a,	// (0x0003d10c) vtel_slider_pane_g3

0x9c00,	// (0x0003d0f2) vtel_slider_pane_g4_ParamLimits

0x9c00,	// (0x0003d0f2) vtel_slider_pane_g4

0x9c27,	// (0x0003d119) vtel_slider_pane_g5_ParamLimits

0x9c27,	// (0x0003d119) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00042edf) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00042edf) vtel_slider_pane_g

0x22de,	// (0x000357d0) main_gallery2_pane

0x93f9,	// (0x0003c8eb) aid_size_row_itut2_dropdow_list_ParamLimits

0x93f9,	// (0x0003c8eb) aid_size_row_itut2_dropdow_list

0x9459,	// (0x0003c94b) grid_vitu2_function_top_pane_ParamLimits

0x9459,	// (0x0003c94b) grid_vitu2_function_top_pane

0x94af,	// (0x0003c9a1) popup_vitu2_dropdown_list_window_ParamLimits

0x94af,	// (0x0003c9a1) popup_vitu2_dropdown_list_window

0x94cf,	// (0x0003c9c1) popup_vitu2_match_list_window

0x9c34,	// (0x0003d126) cell_vitu2_function_top_pane_ParamLimits

0x9c34,	// (0x0003d126) cell_vitu2_function_top_pane

0x9c54,	// (0x0003d146) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9c54,	// (0x0003d146) cell_vitu2_function_top_pane_cp01

0x9c72,	// (0x0003d164) cell_vitu2_function_top_wide_pane_ParamLimits

0x9c72,	// (0x0003d164) cell_vitu2_function_top_wide_pane

0xde7c,	// (0x0004136e) bg_button_pane_cp012

0x9c90,	// (0x0003d182) cell_vitu2_function_top_pane_g1

0x9c9f,	// (0x0003d191) bg_button_pane_cp013_ParamLimits

0x9c9f,	// (0x0003d191) bg_button_pane_cp013

0x9cbb,	// (0x0003d1ad) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9cbb,	// (0x0003d1ad) cell_vitu2_function_top_wide_pane_g1

0x4610,	// (0x00037b02) bg_popup_sub_pane_cp20

0x9cd3,	// (0x0003d1c5) list_vitu2_match_list_pane

0x015f,	// (0x00033651) bg_popup_sub_pane_cp20_g1

0x0167,	// (0x00033659) bg_popup_sub_pane_cp20_g2

0xc7ae,	// (0x0003fca0) bg_popup_sub_pane_cp20_g3

0x016f,	// (0x00033661) bg_popup_sub_pane_cp20_g4

0xc78e,	// (0x0003fc80) bg_popup_sub_pane_cp20_g5

0x0418,	// (0x0003390a) bg_popup_sub_pane_cp20_g6

0x017f,	// (0x00033671) bg_popup_sub_pane_cp20_g7

0x0187,	// (0x00033679) bg_popup_sub_pane_cp20_g8

0x018f,	// (0x00033681) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00042eea) bg_popup_sub_pane_cp20_g

0x9ceb,	// (0x0003d1dd) list_vitu2_match_list_item_pane_ParamLimits

0x9ceb,	// (0x0003d1dd) list_vitu2_match_list_item_pane

0x9cfd,	// (0x0003d1ef) list_vitu2_match_list_item_pane_t1

0x22de,	// (0x000357d0) bg_popup_sub_pane_cp21

0xcbd6,	// (0x000400c8) grid_vitu2_dropdown_list_pane

0x9d0b,	// (0x0003d1fd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9d0b,	// (0x0003d1fd) cell_vitu2_dropdown_list_char_pane

0x9d2c,	// (0x0003d21e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9d2c,	// (0x0003d21e) cell_vitu2_dropdown_list_ctrl_pane

0x0472,	// (0x00033964) cell_vitu2_dropdown_list_char_pane_g1

0x0469,	// (0x0003395b) cell_vitu2_dropdown_list_char_pane_g2

0x0460,	// (0x00033952) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00042f07) cell_vitu2_dropdown_list_char_pane_g

0x9d58,	// (0x0003d24a) cell_vitu2_dropdown_list_char_pane_t1

0x9d66,	// (0x0003d258) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9d66,	// (0x0003d258) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9d76,	// (0x0003d268) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9d76,	// (0x0003d268) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9d87,	// (0x0003d279) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9d87,	// (0x0003d279) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9d97,	// (0x0003d289) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9d97,	// (0x0003d289) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe91b,	// (0x00041e0d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe91b,	// (0x00041e0d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00042f0e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00042f0e) cell_vitu2_dropdown_list_ctrl_pane_g

0x9db3,	// (0x0003d2a5) aid_size_cell_gallery2_ParamLimits

0x9db3,	// (0x0003d2a5) aid_size_cell_gallery2

0x9dc1,	// (0x0003d2b3) grid_gallery2_pane_ParamLimits

0x9dc1,	// (0x0003d2b3) grid_gallery2_pane

0x9dd0,	// (0x0003d2c2) scroll_pane_cp029_ParamLimits

0x9dd0,	// (0x0003d2c2) scroll_pane_cp029

0x9ddc,	// (0x0003d2ce) cell_gallery2_pane_ParamLimits

0x9ddc,	// (0x0003d2ce) cell_gallery2_pane

0x047b,	// (0x0003396d) cell_gallery2_pane_g2

0x1b8a,	// (0x0003507c) cell_gallery2_pane_g3

0x0485,	// (0x00033977) cell_gallery2_pane_g4

0x048d,	// (0x0003397f) cell_gallery2_pane_g5

0xce99,	// (0x0004038b) grid_highlight_pane_cp10

0x94cf,	// (0x0003c9c1) popup_vitu2_match_list_window_ParamLimits

0x94e3,	// (0x0003c9d5) popup_vitu2_query_window_ParamLimits

0x94e3,	// (0x0003c9d5) popup_vitu2_query_window

0x22de,	// (0x000357d0) bg_vitu2_candi_button_pane

0x0472,	// (0x00033964) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0469,	// (0x0003395b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0460,	// (0x00033952) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x366a,	// (0x00036b5c) bg_button_pane_cp015

0x9e0a,	// (0x0003d2fc) bg_button_pane_cp016

0x9e1d,	// (0x0003d30f) bg_button_pane_cp017

0xe29f,	// (0x00041791) bg_popup_sub_pane_cp22

0x0495,	// (0x00033987) popup_vitu2_query_window_g1

0x369d,	// (0x00036b8f) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00042f19) popup_vitu2_query_window_g

0x36ba,	// (0x00036bac) popup_vitu2_query_window_t1_ParamLimits

0x36ba,	// (0x00036bac) popup_vitu2_query_window_t1

0x36ed,	// (0x00036bdf) popup_vitu2_query_window_t2_ParamLimits

0x36ed,	// (0x00036bdf) popup_vitu2_query_window_t2

0x36ff,	// (0x00036bf1) popup_vitu2_query_window_t3_ParamLimits

0x36ff,	// (0x00036bf1) popup_vitu2_query_window_t3

0x9e41,	// (0x0003d333) popup_vitu2_query_window_t4_ParamLimits

0x9e41,	// (0x0003d333) popup_vitu2_query_window_t4

0x9e62,	// (0x0003d354) popup_vitu2_query_window_t5_ParamLimits

0x9e62,	// (0x0003d354) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00042f20) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00042f20) popup_vitu2_query_window_t

0x0261,	// (0x00033753) main_cset_text_pane

0x98a3,	// (0x0003cd95) aid_area_touch_slider_ParamLimits

0x98bf,	// (0x0003cdb1) cset_slider_pane_ParamLimits

0x98e9,	// (0x0003cddb) main_cset_slider_pane_g1_ParamLimits

0x98fe,	// (0x0003cdf0) main_cset_slider_pane_g2_ParamLimits

0x0282,	// (0x00033774) main_cset_slider_pane_g3_ParamLimits

0x0282,	// (0x00033774) main_cset_slider_pane_g3

0x9913,	// (0x0003ce05) main_cset_slider_pane_g4_ParamLimits

0x9913,	// (0x0003ce05) main_cset_slider_pane_g4

0x9922,	// (0x0003ce14) main_cset_slider_pane_g5_ParamLimits

0x9922,	// (0x0003ce14) main_cset_slider_pane_g5

0x9930,	// (0x0003ce22) main_cset_slider_pane_g6_ParamLimits

0x9930,	// (0x0003ce22) main_cset_slider_pane_g6

0xf981,	// (0x00042e73) main_cset_slider_pane_g_ParamLimits

0x02b2,	// (0x000337a4) main_cset_slider_pane_t1_ParamLimits

0x99c0,	// (0x0003ceb2) main_cset_slider_pane_t2_ParamLimits

0x99da,	// (0x0003cecc) main_cset_slider_pane_t3_ParamLimits

0x99f4,	// (0x0003cee6) main_cset_slider_pane_t4_ParamLimits

0x9a0e,	// (0x0003cf00) main_cset_slider_pane_t5_ParamLimits

0x9a2c,	// (0x0003cf1e) main_cset_slider_pane_t6_ParamLimits

0x9a43,	// (0x0003cf35) main_cset_slider_pane_t7_ParamLimits

0x9a71,	// (0x0003cf63) main_cset_slider_pane_t8_ParamLimits

0x9a71,	// (0x0003cf63) main_cset_slider_pane_t8

0x9a99,	// (0x0003cf8b) main_cset_slider_pane_t9_ParamLimits

0x9a99,	// (0x0003cf8b) main_cset_slider_pane_t9

0x9ac1,	// (0x0003cfb3) main_cset_slider_pane_t10_ParamLimits

0x9ac1,	// (0x0003cfb3) main_cset_slider_pane_t10

0x9ae9,	// (0x0003cfdb) main_cset_slider_pane_t11_ParamLimits

0x9ae9,	// (0x0003cfdb) main_cset_slider_pane_t11

0x9b13,	// (0x0003d005) main_cset_slider_pane_t12_ParamLimits

0x9b13,	// (0x0003d005) main_cset_slider_pane_t12

0x9b30,	// (0x0003d022) main_cset_slider_pane_t13_ParamLimits

0x9b30,	// (0x0003d022) main_cset_slider_pane_t13

0xf9a6,	// (0x00042e98) main_cset_slider_pane_t_ParamLimits

0x22de,	// (0x000357d0) bg_popup_sub_pane_cp011

0x04a1,	// (0x00033993) main_cset_text_pane_g1

0x04a9,	// (0x0003399b) main_cset_text_pane_t1

0x04b7,	// (0x000339a9) main_cset_text_pane_t2

0x04c5,	// (0x000339b7) main_cset_text_pane_t3

0x04d3,	// (0x000339c5) main_cset_text_pane_t4

0x04e1,	// (0x000339d3) main_cset_text_pane_t5

0x04ef,	// (0x000339e1) main_cset_text_pane_t6

0x04fd,	// (0x000339ef) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00042f2f) main_cset_text_pane_t

0x22de,	// (0x000357d0) main_cam4_burst_pane

0x22de,	// (0x000357d0) main_cam5_pane

0x97f2,	// (0x0003cce4) bg_button_pane_cp019

0x97fb,	// (0x0003cced) bg_button_pane_cp020

0x028e,	// (0x00033780) main_cset_slider_pane_g7_ParamLimits

0x028e,	// (0x00033780) main_cset_slider_pane_g7

0x029a,	// (0x0003378c) main_cset_slider_pane_g8_ParamLimits

0x029a,	// (0x0003378c) main_cset_slider_pane_g8

0x9944,	// (0x0003ce36) main_cset_slider_pane_g9_ParamLimits

0x9944,	// (0x0003ce36) main_cset_slider_pane_g9

0x9950,	// (0x0003ce42) main_cset_slider_pane_g10_ParamLimits

0x9950,	// (0x0003ce42) main_cset_slider_pane_g10

0x995c,	// (0x0003ce4e) main_cset_slider_pane_g11_ParamLimits

0x995c,	// (0x0003ce4e) main_cset_slider_pane_g11

0x9968,	// (0x0003ce5a) main_cset_slider_pane_g12_ParamLimits

0x9968,	// (0x0003ce5a) main_cset_slider_pane_g12

0x9974,	// (0x0003ce66) main_cset_slider_pane_g13_ParamLimits

0x9974,	// (0x0003ce66) main_cset_slider_pane_g13

0x9980,	// (0x0003ce72) main_cset_slider_pane_g14_ParamLimits

0x9980,	// (0x0003ce72) main_cset_slider_pane_g14

0x998c,	// (0x0003ce7e) main_cset_slider_pane_g15_ParamLimits

0x998c,	// (0x0003ce7e) main_cset_slider_pane_g15

0x02e0,	// (0x000337d2) main_cset_slider_pane_t14_ParamLimits

0x02e0,	// (0x000337d2) main_cset_slider_pane_t14

0x0319,	// (0x0003380b) main_cset_slider_pane_t15_ParamLimits

0x0319,	// (0x0003380b) main_cset_slider_pane_t15

0x9e83,	// (0x0003d375) aid_cam4_burst_size_cell_ParamLimits

0x9e83,	// (0x0003d375) aid_cam4_burst_size_cell

0x9e9f,	// (0x0003d391) grid_cam4_burst_pane_ParamLimits

0x9e9f,	// (0x0003d391) grid_cam4_burst_pane

0x9ecf,	// (0x0003d3c1) linegrid_cam4_burst_pane_ParamLimits

0x9ecf,	// (0x0003d3c1) linegrid_cam4_burst_pane

0x9eef,	// (0x0003d3e1) scroll_pane_cp30_ParamLimits

0x9eef,	// (0x0003d3e1) scroll_pane_cp30

0x9efb,	// (0x0003d3ed) cell_cam4_burst_pane_ParamLimits

0x9efb,	// (0x0003d3ed) cell_cam4_burst_pane

0x0517,	// (0x00033a09) linegrid_cam4_burst_pane_g1_ParamLimits

0x0517,	// (0x00033a09) linegrid_cam4_burst_pane_g1

0x9f37,	// (0x0003d429) linegrid_cam4_burst_pane_g2_ParamLimits

0x9f37,	// (0x0003d429) linegrid_cam4_burst_pane_g2

0x0524,	// (0x00033a16) linegrid_cam4_burst_pane_g3_ParamLimits

0x0524,	// (0x00033a16) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00042f3e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00042f3e) linegrid_cam4_burst_pane_g

0x9f48,	// (0x0003d43a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9f48,	// (0x0003d43a) linegrid_cam4_burst_pane_g3_copy1

0x0531,	// (0x00033a23) linegrid_cam4_burst_pane_g4_ParamLimits

0x0531,	// (0x00033a23) linegrid_cam4_burst_pane_g4

0x9f62,	// (0x0003d454) linegrid_cam4_burst_pane_g5_ParamLimits

0x9f62,	// (0x0003d454) linegrid_cam4_burst_pane_g5

0x9f73,	// (0x0003d465) linegrid_cam4_burst_pane_g6_ParamLimits

0x9f73,	// (0x0003d465) linegrid_cam4_burst_pane_g6

0x053e,	// (0x00033a30) linegrid_cam4_burst_pane_g7_ParamLimits

0x053e,	// (0x00033a30) linegrid_cam4_burst_pane_g7

0x9f84,	// (0x0003d476) cell_cam4_burst_pane_g1

0x0557,	// (0x00033a49) main_cam5_pane_t1_ParamLimits

0x0557,	// (0x00033a49) main_cam5_pane_t1

0x0569,	// (0x00033a5b) main_cam5_pane_t2_ParamLimits

0x0569,	// (0x00033a5b) main_cam5_pane_t2

0x057b,	// (0x00033a6d) main_cam5_pane_t3_ParamLimits

0x057b,	// (0x00033a6d) main_cam5_pane_t3

0x058d,	// (0x00033a7f) main_cam5_pane_t4_ParamLimits

0x058d,	// (0x00033a7f) main_cam5_pane_t4

0x05a5,	// (0x00033a97) main_cam5_pane_t5_ParamLimits

0x05a5,	// (0x00033a97) main_cam5_pane_t5

0x05b9,	// (0x00033aab) main_cam5_pane_t6_ParamLimits

0x05b9,	// (0x00033aab) main_cam5_pane_t6

0x05cd,	// (0x00033abf) main_cam5_pane_t7_ParamLimits

0x05cd,	// (0x00033abf) main_cam5_pane_t7

0x05df,	// (0x00033ad1) main_cam5_pane_t8_ParamLimits

0x05df,	// (0x00033ad1) main_cam5_pane_t8

0x05fb,	// (0x00033aed) main_cam5_pane_t9_ParamLimits

0x05fb,	// (0x00033aed) main_cam5_pane_t9

0x060d,	// (0x00033aff) main_cam5_pane_t10_ParamLimits

0x060d,	// (0x00033aff) main_cam5_pane_t10

0x061f,	// (0x00033b11) main_cam5_pane_t11_ParamLimits

0x061f,	// (0x00033b11) main_cam5_pane_t11

0x0631,	// (0x00033b23) main_cam5_pane_t12_ParamLimits

0x0631,	// (0x00033b23) main_cam5_pane_t12

0x0646,	// (0x00033b38) main_cam5_pane_t13_ParamLimits

0x0646,	// (0x00033b38) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00042f4a) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00042f4a) main_cam5_pane_t

0x45d9,	// (0x00037acb) popup_scut_keymap_window_ParamLimits

0x45d9,	// (0x00037acb) popup_scut_keymap_window

0x9f97,	// (0x0003d489) aid_size_cell_brow_shortcut

0xce99,	// (0x0004038b) bg_popup_window_pane_cp010

0x9fa3,	// (0x0003d495) grid_scut_pane

0x9faf,	// (0x0003d4a1) cell_scut_pane_ParamLimits

0x9faf,	// (0x0003d4a1) cell_scut_pane

0x9fc6,	// (0x0003d4b8) cell_scut_pane_g1

0x0663,	// (0x00033b55) cell_scut_pane_t1

0x0672,	// (0x00033b64) cell_scut_pane_t2

0x9fcf,	// (0x0003d4c1) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00042f65) cell_scut_pane_t

0x802d,	// (0x0003b51f) main_mup3_pane_g8_ParamLimits

0x802d,	// (0x0003b51f) main_mup3_pane_g8

0x9407,	// (0x0003c8f9) area_vitu2_query_pane_ParamLimits

0x9407,	// (0x0003c8f9) area_vitu2_query_pane

0x367c,	// (0x00036b6e) input_focus_pane_cp08

0x0681,	// (0x00033b73) area_vitu2_query_pane_g1

0x377d,	// (0x00036c6f) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00042f6c) area_vitu2_query_pane_g

0x9fdd,	// (0x0003d4cf) area_vitu2_query_pane_t1_ParamLimits

0x9fdd,	// (0x0003d4cf) area_vitu2_query_pane_t1

0x9ff1,	// (0x0003d4e3) area_vitu2_query_pane_t2_ParamLimits

0x9ff1,	// (0x0003d4e3) area_vitu2_query_pane_t2

0x378e,	// (0x00036c80) area_vitu2_query_pane_t3_ParamLimits

0x378e,	// (0x00036c80) area_vitu2_query_pane_t3

0x37b6,	// (0x00036ca8) area_vitu2_query_pane_t4_ParamLimits

0x37b6,	// (0x00036ca8) area_vitu2_query_pane_t4

0x37de,	// (0x00036cd0) area_vitu2_query_pane_t5_ParamLimits

0x37de,	// (0x00036cd0) area_vitu2_query_pane_t5

0x3806,	// (0x00036cf8) area_vitu2_query_pane_t6_ParamLimits

0x3806,	// (0x00036cf8) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00042f71) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00042f71) area_vitu2_query_pane_t

0xa005,	// (0x0003d4f7) bg_button_pane_cp018

0xa013,	// (0x0003d505) bg_button_pane_cp021

0x3852,	// (0x00036d44) bg_button_pane_cp022

0x3863,	// (0x00036d55) input_focus_pane_cp09

0x6572,	// (0x00039a64) aid_size_touch_mv_arrow_left

0x659b,	// (0x00039a8d) aid_size_touch_mv_arrow_right

0x99a4,	// (0x0003ce96) main_cset_slider_pane_g16_ParamLimits

0x99a4,	// (0x0003ce96) main_cset_slider_pane_g16

0x99b2,	// (0x0003cea4) main_cset_slider_pane_g17_ParamLimits

0x99b2,	// (0x0003cea4) main_cset_slider_pane_g17

0x9f84,	// (0x0003d476) cell_cam4_burst_pane_g1_ParamLimits

0x22de,	// (0x000357d0) compa_mode_pane

0x9bb5,	// (0x0003d0a7) popup_vtel_slider_window_g3_ParamLimits

0x9bb5,	// (0x0003d0a7) popup_vtel_slider_window_g3

0x9bc9,	// (0x0003d0bb) popup_vtel_slider_window_g4_ParamLimits

0x9bc9,	// (0x0003d0bb) popup_vtel_slider_window_g4

0x9bdd,	// (0x0003d0cf) popup_vtel_slider_window_t1_ParamLimits

0x9bdd,	// (0x0003d0cf) popup_vtel_slider_window_t1

0x22de,	// (0x000357d0) main_cl_pane

0x7394,	// (0x0003a886) popup_imed_adjust2_window_ParamLimits

0xe29f,	// (0x00041791) bg_tb_trans_pane_cp05_ParamLimits

0xebb4,	// (0x000420a6) popup_imed_adjust2_window_g1_ParamLimits

0xebc3,	// (0x000420b5) popup_imed_adjust2_window_g2_ParamLimits

0xebc3,	// (0x000420b5) popup_imed_adjust2_window_g2

0xebcf,	// (0x000420c1) popup_imed_adjust2_window_g3_ParamLimits

0xebcf,	// (0x000420c1) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00042cdc) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00042cdc) popup_imed_adjust2_window_g

0xebdb,	// (0x000420cd) popup_imed_adjust2_window_t1_ParamLimits

0xebf3,	// (0x000420e5) slider_imed_adjust_pane_ParamLimits

0xec07,	// (0x000420f9) slider_imed_adjust_pane_g1_ParamLimits

0xec17,	// (0x00042109) slider_imed_adjust_pane_g2_ParamLimits

0xec27,	// (0x00042119) slider_imed_adjust_pane_g3_ParamLimits

0xec38,	// (0x0004212a) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00042ce3) slider_imed_adjust_pane_g_ParamLimits

0x914e,	// (0x0003c640) aid_touch_area_cam4_ParamLimits

0x914e,	// (0x0003c640) aid_touch_area_cam4

0x915e,	// (0x0003c650) battery_pane_cp01

0x91e5,	// (0x0003c6d7) main_camera4_pane_g6_ParamLimits

0x91e5,	// (0x0003c6d7) main_camera4_pane_g6

0x9203,	// (0x0003c6f5) main_camera4_pane_t2_ParamLimits

0x9203,	// (0x0003c6f5) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00042de6) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00042de6) main_camera4_pane_t

0x928a,	// (0x0003c77c) aid_touch_area_vid4_ParamLimits

0x928a,	// (0x0003c77c) aid_touch_area_vid4

0x92ca,	// (0x0003c7bc) main_video4_pane_g5_ParamLimits

0x92ca,	// (0x0003c7bc) main_video4_pane_g5

0x92ee,	// (0x0003c7e0) vid4_progress_pane_ParamLimits

0x92ee,	// (0x0003c7e0) vid4_progress_pane

0x02a6,	// (0x00033798) main_cset_slider_pane_g18_ParamLimits

0x02a6,	// (0x00033798) main_cset_slider_pane_g18

0x054b,	// (0x00033a3d) cell_cam4_burst_pane_g2_ParamLimits

0x054b,	// (0x00033a3d) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00042f45) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00042f45) cell_cam4_burst_pane_g

0xa01f,	// (0x0003d511) bg_cl_pane_ParamLimits

0xa01f,	// (0x0003d511) bg_cl_pane

0xa02b,	// (0x0003d51d) cl_header_pane_ParamLimits

0xa02b,	// (0x0003d51d) cl_header_pane

0xa037,	// (0x0003d529) cl_listscroll_pane_ParamLimits

0xa037,	// (0x0003d529) cl_listscroll_pane

0x0729,	// (0x00033c1b) bg_cl_pane_g1

0x0731,	// (0x00033c23) bg_cl_pane_g2

0x0739,	// (0x00033c2b) bg_cl_pane_g3

0x0741,	// (0x00033c33) bg_cl_pane_g4

0x0749,	// (0x00033c3b) bg_cl_pane_g5

0x0751,	// (0x00033c43) bg_cl_pane_g6

0x0759,	// (0x00033c4b) bg_cl_pane_g7

0x0761,	// (0x00033c53) bg_cl_pane_g8

0x0769,	// (0x00033c5b) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00042f80) bg_cl_pane_g

0xa043,	// (0x0003d535) aid_height_cl_leading_ParamLimits

0xa043,	// (0x0003d535) aid_height_cl_leading

0xa04f,	// (0x0003d541) aid_height_cl_text_ParamLimits

0xa04f,	// (0x0003d541) aid_height_cl_text

0x4610,	// (0x00037b02) bg_cl_header_pane_ParamLimits

0x4610,	// (0x00037b02) bg_cl_header_pane

0xa067,	// (0x0003d559) cl_header_pane_g1_ParamLimits

0xa067,	// (0x0003d559) cl_header_pane_g1

0xa074,	// (0x0003d566) cl_header_pane_t1_ParamLimits

0xa074,	// (0x0003d566) cl_header_pane_t1

0x0771,	// (0x00033c63) cl_list_pane

0x0279,	// (0x0003376b) hc_scroll_pane_cp01

0xc78e,	// (0x0003fc80) bg_cl_header_pane_g1

0x015f,	// (0x00033651) bg_cl_header_pane_g2

0xc7ae,	// (0x0003fca0) bg_cl_header_pane_g3

0x016f,	// (0x00033661) bg_cl_header_pane_g4

0x0167,	// (0x00033659) bg_cl_header_pane_g5

0x0418,	// (0x0003390a) bg_cl_header_pane_g6

0x0187,	// (0x00033679) bg_cl_header_pane_g7

0x018f,	// (0x00033681) bg_cl_header_pane_g8

0x017f,	// (0x00033671) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00042f93) bg_cl_header_pane_g

0xa086,	// (0x0003d578) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa086,	// (0x0003d578) hc_cl_list_double_graphic_heading_pane

0xa097,	// (0x0003d589) hc_cl_list_single_graphic_pane_ParamLimits

0xa097,	// (0x0003d589) hc_cl_list_single_graphic_pane

0xa0b0,	// (0x0003d5a2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa0b0,	// (0x0003d5a2) hc_cl_list_single_graphic_pane_g1

0xa0bc,	// (0x0003d5ae) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa0bc,	// (0x0003d5ae) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00042fa6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00042fa6) hc_cl_list_single_graphic_pane_g

0xa0d0,	// (0x0003d5c2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa0d0,	// (0x0003d5c2) hc_cl_list_single_graphic_pane_t1

0xa0b0,	// (0x0003d5a2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa0b0,	// (0x0003d5a2) hc_cl_list_double_graphic_heading_pane_g1

0xa0e5,	// (0x0003d5d7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa0e5,	// (0x0003d5d7) hc_cl_list_double_graphic_heading_pane_g2

0xa0f9,	// (0x0003d5eb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa0f9,	// (0x0003d5eb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00042fab) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00042fab) hc_cl_list_double_graphic_heading_pane_g

0xa10d,	// (0x0003d5ff) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa10d,	// (0x0003d5ff) hc_cl_list_double_graphic_heading_pane_t1

0xa122,	// (0x0003d614) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa122,	// (0x0003d614) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00042fb2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00042fb2) hc_cl_list_double_graphic_heading_pane_t

0xa13f,	// (0x0003d631) vid4_progress_pane_g1

0xa151,	// (0x0003d643) vid4_progress_pane_g2

0x6bd4,	// (0x0003a0c6) vid4_progress_pane_g3

0xa161,	// (0x0003d653) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00042fb7) vid4_progress_pane_g

0xa17f,	// (0x0003d671) vid4_progress_pane_t1

0xa194,	// (0x0003d686) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00042fc2) vid4_progress_pane_t

0xa1bf,	// (0x0003d6b1) wait_bar_pane_cp07

0xe49a,	// (0x0004198c) blid_firmament_pane_ParamLimits

0xe4dd,	// (0x000419cf) popup_blid_sat_info2_window_g1

0xe501,	// (0x000419f3) popup_blid_sat_info2_window_t3

0xe50f,	// (0x00041a01) popup_blid_sat_info2_window_t4

0xe52e,	// (0x00041a20) popup_blid_sat_info2_window_t5

0xe53c,	// (0x00041a2e) popup_blid_sat_info2_window_t6

0xe54c,	// (0x00041a3e) popup_blid_sat_info2_window_t7

0xe55a,	// (0x00041a4c) popup_blid_sat_info2_window_t8

0xe568,	// (0x00041a5a) popup_blid_sat_info2_window_t9

0xe576,	// (0x00041a68) popup_blid_sat_info2_window_t10

0xe638,	// (0x00041b2a) aid_firma_cardinal_ParamLimits

0xe64c,	// (0x00041b3e) blid_firmament_pane_t1_ParamLimits

0xe663,	// (0x00041b55) blid_firmament_pane_t2_ParamLimits

0xe67a,	// (0x00041b6c) blid_firmament_pane_t3_ParamLimits

0xe691,	// (0x00041b83) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00042bd5) blid_firmament_pane_t_ParamLimits

0xe6a8,	// (0x00041b9a) blid_sat_info_pane_ParamLimits

0xde7c,	// (0x0004136e) main_cam_set_pane_ParamLimits

0x87d7,	// (0x0003bcc9) aid_size_cell_colour_35_ParamLimits

0x87f1,	// (0x0003bce3) aid_size_cell_colour_112_ParamLimits

0x8808,	// (0x0003bcfa) aid_size_cell_effect_ParamLimits

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp02_ParamLimits

0xde8a,	// (0x0004137c) heading_imed_pane_ParamLimits

0x8822,	// (0x0003bd14) listscroll_imed_pane_ParamLimits

0xd8b7,	// (0x00040da9) popup_call2_audio_first_window_g5_ParamLimits

0xd8b7,	// (0x00040da9) popup_call2_audio_first_window_g5

0x8f0b,	// (0x0003c3fd) aid_size_touch_image3_arrow_left_ParamLimits

0x8f0b,	// (0x0003c3fd) aid_size_touch_image3_arrow_left

0x8f21,	// (0x0003c413) aid_size_touch_image3_arrow_right_ParamLimits

0x8f21,	// (0x0003c413) aid_size_touch_image3_arrow_right

0xa1aa,	// (0x0003d69c) vid4_progress_pane_t3

0x8ac0,	// (0x0003bfb2) main_hwr_training_symbol_option_pane_ParamLimits

0x8ac0,	// (0x0003bfb2) main_hwr_training_symbol_option_pane

0xeea1,	// (0x00042393) popup_hwr_training_preview_window_ParamLimits

0xeea1,	// (0x00042393) popup_hwr_training_preview_window

0x8b21,	// (0x0003c013) hwr_training_navi_pane_g5_ParamLimits

0x8b21,	// (0x0003c013) hwr_training_navi_pane_g5

0x014d,	// (0x0003363f) popup_char_count_window

0x4610,	// (0x00037b02) bg_popup_sub_pane_cp20_ParamLimits

0x9cd3,	// (0x0003d1c5) list_vitu2_match_list_pane_ParamLimits

0x9cdf,	// (0x0003d1d1) vitu2_page_scroll_pane_ParamLimits

0x9cdf,	// (0x0003d1d1) vitu2_page_scroll_pane

0x084c,	// (0x00033d3e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x084c,	// (0x00033d3e) list_single_hwr_training_symbol_option_pane

0x085f,	// (0x00033d51) list_single_hwr_training_symbol_option_pane_g1

0x0867,	// (0x00033d59) list_single_hwr_training_symbol_option_pane_t1

0x0875,	// (0x00033d67) bg_button_pane_cp023

0x087e,	// (0x00033d70) bg_button_pane_cp024

0xa1d1,	// (0x0003d6c3) vitu2_page_scroll_pane_g1

0xa1d9,	// (0x0003d6cb) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00042fc9) vitu2_page_scroll_pane_g

0xa1e1,	// (0x0003d6d3) vitu2_page_scroll_pane_t1

0x08b1,	// (0x00033da3) popup_char_count_window_g1

0x08ba,	// (0x00033dac) popup_char_count_window_g2

0x08c3,	// (0x00033db5) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00042fce) popup_char_count_window_g

0x08cc,	// (0x00033dbe) popup_char_count_window_t1

0x22de,	// (0x000357d0) main_vded2_pane

0xeba0,	// (0x00042092) aid_size_cell_imed_line

0xebaa,	// (0x0004209c) grid_imed_line_width_pane

0x935c,	// (0x0003c84e) vid4_indicators_pane_g4

0x08da,	// (0x00033dcc) cell_imed_line_width_pane_ParamLimits

0x08da,	// (0x00033dcc) cell_imed_line_width_pane

0x08ee,	// (0x00033de0) cell_imed_line_width_pane_g1

0xe51d,	// (0x00041a0f) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00042fd5) cell_imed_line_width_pane_g

0xa1f0,	// (0x0003d6e2) main_vded2_pane_g1_ParamLimits

0xa1f0,	// (0x0003d6e2) main_vded2_pane_g1

0xa1fd,	// (0x0003d6ef) main_vded2_pane_g2_ParamLimits

0xa1fd,	// (0x0003d6ef) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00042fda) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00042fda) main_vded2_pane_g

0xa20b,	// (0x0003d6fd) vded2_slider_pane_ParamLimits

0xa20b,	// (0x0003d6fd) vded2_slider_pane

0xa218,	// (0x0003d70a) aid_size_touch_vded2_end

0xa222,	// (0x0003d714) aid_size_touch_vded2_playhead

0x08f7,	// (0x00033de9) aid_size_touch_vded2_start

0x08ff,	// (0x00033df1) vded2_slider_bg_pane

0x0908,	// (0x00033dfa) vded2_slider_pane_g1

0x0911,	// (0x00033e03) vded2_slider_pane_g2

0xa22a,	// (0x0003d71c) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00042fdf) vded2_slider_pane_g

0x0919,	// (0x00033e0b) vded2_slider_bg_pane_g1

0x0922,	// (0x00033e14) vded2_slider_bg_pane_g2

0x092b,	// (0x00033e1d) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00042fe6) vded2_slider_bg_pane_g

0x6bec,	// (0x0003a0de) aid_postcard_touch_down_pane_ParamLimits

0x6bec,	// (0x0003a0de) aid_postcard_touch_down_pane

0x6bfc,	// (0x0003a0ee) aid_postcard_touch_up_pane_ParamLimits

0x6bfc,	// (0x0003a0ee) aid_postcard_touch_up_pane

0x22de,	// (0x000357d0) main_blid2_pane

0x731f,	// (0x0003a811) popup_blid2_search_window

0x22de,	// (0x000357d0) blid2_gps_pane

0x22de,	// (0x000357d0) blid2_navig_pane

0x22de,	// (0x000357d0) blid2_search_pane

0x22de,	// (0x000357d0) blid2_tripm_pane

0xa233,	// (0x0003d725) blid2_search_pane_g1_ParamLimits

0xa233,	// (0x0003d725) blid2_search_pane_g1

0xa243,	// (0x0003d735) blid2_search_pane_t1_ParamLimits

0xa243,	// (0x0003d735) blid2_search_pane_t1

0xa255,	// (0x0003d747) aid_size_cell_blid2_gps_ParamLimits

0xa255,	// (0x0003d747) aid_size_cell_blid2_gps

0xa265,	// (0x0003d757) blid2_gps_pane_g1_ParamLimits

0xa265,	// (0x0003d757) blid2_gps_pane_g1

0xa271,	// (0x0003d763) grid_blid2_satellite_pane_ParamLimits

0xa271,	// (0x0003d763) grid_blid2_satellite_pane

0xa281,	// (0x0003d773) blid2_navig_pane_g1_ParamLimits

0xa281,	// (0x0003d773) blid2_navig_pane_g1

0xa28d,	// (0x0003d77f) blid2_navig_pane_t1_ParamLimits

0xa28d,	// (0x0003d77f) blid2_navig_pane_t1

0xa29f,	// (0x0003d791) blid2_navig_pane_t2_ParamLimits

0xa29f,	// (0x0003d791) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00042fed) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00042fed) blid2_navig_pane_t

0xa2b1,	// (0x0003d7a3) blid2_navig_ring_pane_ParamLimits

0xa2b1,	// (0x0003d7a3) blid2_navig_ring_pane

0xa2c1,	// (0x0003d7b3) blid2_speed_pane_ParamLimits

0xa2c1,	// (0x0003d7b3) blid2_speed_pane

0xa2cd,	// (0x0003d7bf) blid2_tripm_pane_g1_ParamLimits

0xa2cd,	// (0x0003d7bf) blid2_tripm_pane_g1

0xa2dd,	// (0x0003d7cf) blid2_tripm_pane_g2_ParamLimits

0xa2dd,	// (0x0003d7cf) blid2_tripm_pane_g2

0xa2e9,	// (0x0003d7db) blid2_tripm_pane_g3_ParamLimits

0xa2e9,	// (0x0003d7db) blid2_tripm_pane_g3

0xa2f5,	// (0x0003d7e7) blid2_tripm_pane_g4_ParamLimits

0xa2f5,	// (0x0003d7e7) blid2_tripm_pane_g4

0xa301,	// (0x0003d7f3) blid2_tripm_pane_g5_ParamLimits

0xa301,	// (0x0003d7f3) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00042ff2) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00042ff2) blid2_tripm_pane_g

0xa31d,	// (0x0003d80f) blid2_tripm_pane_t1_ParamLimits

0xa31d,	// (0x0003d80f) blid2_tripm_pane_t1

0xa331,	// (0x0003d823) blid2_tripm_pane_t2_ParamLimits

0xa331,	// (0x0003d823) blid2_tripm_pane_t2

0xa343,	// (0x0003d835) blid2_tripm_pane_t3_ParamLimits

0xa343,	// (0x0003d835) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00042fff) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00042fff) blid2_tripm_pane_t

0xa375,	// (0x0003d867) cell_blid2_satellite_pane_ParamLimits

0xa375,	// (0x0003d867) cell_blid2_satellite_pane

0xa38f,	// (0x0003d881) cell_blid2_satellite_pane_g1

0x0934,	// (0x00033e26) cell_blid2_satellite_pane_t1

0xe6b8,	// (0x00041baa) blid2_speed_pane_g1

0x0942,	// (0x00033e34) blid2_speed_pane_t1

0x0950,	// (0x00033e42) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00043008) blid2_speed_pane_t

0xe6b8,	// (0x00041baa) blid2_navig_ring_pane_g1

0xa398,	// (0x0003d88a) blid2_navig_ring_pane_g2

0xa3a0,	// (0x0003d892) blid2_navig_ring_pane_g3

0xa3a8,	// (0x0003d89a) blid2_navig_ring_pane_g4

0xa3b0,	// (0x0003d8a2) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0004300d) blid2_navig_ring_pane_g

0x22de,	// (0x000357d0) bg_popup_window_pane_cp011

0x095e,	// (0x00033e50) popup_blid2_search_window_g1

0x0966,	// (0x00033e58) popup_blid2_search_window_t1

0x0974,	// (0x00033e66) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00043018) popup_blid2_search_window_t

0xc69d,	// (0x0003fb8f) main_browser_pane_g1

0xc3b8,	// (0x0003f8aa) main_browser_pane_ParamLimits

0xde7c,	// (0x0004136e) bg_button_pane_cp011_ParamLimits

0x95c5,	// (0x0003cab7) cell_vitu2_function_pane_g1_ParamLimits

0xe29f,	// (0x00041791) bg_popup_sub_pane_cp22_ParamLimits

0x367c,	// (0x00036b6e) input_focus_pane_cp08_ParamLimits

0x9e30,	// (0x0003d322) popup_vitu2_query_button_pane_ParamLimits

0x9e30,	// (0x0003d322) popup_vitu2_query_button_pane

0x3693,	// (0x00036b85) popup_vitu2_query_input_button_pane

0x0495,	// (0x00033987) popup_vitu2_query_window_g1_ParamLimits

0x369d,	// (0x00036b8f) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00042f19) popup_vitu2_query_window_g_ParamLimits

0x22de,	// (0x000357d0) bg_button_pane_cp026

0xa3b8,	// (0x0003d8aa) popup_vitu2_query_input_button_pane_g1

0x22de,	// (0x000357d0) bg_button_pane_cp025

0x0982,	// (0x00033e74) popup_vitu2_query_button_pane_t1

0x7d78,	// (0x0003b26a) main_mp3_pane_t6

0x7d88,	// (0x0003b27a) popup_slider_window_cp01

0x9239,	// (0x0003c72b) cam4_battery_pane

0x9319,	// (0x0003c80b) cam4_battery_pane_cp02

0xa137,	// (0x0003d629) cam4_battery_pane_cp01

0xa137,	// (0x0003d629) cam4_battery_pane_cp03

0xe6b8,	// (0x00041baa) cam4_battery_pane_g1

0xefd9,	// (0x000424cb) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0004301d) cam4_battery_pane_g

0xe584,	// (0x00041a76) popup_blid_sat_info2_window_t11

0x6572,	// (0x00039a64) aid_size_touch_mv_arrow_left_ParamLimits

0x659b,	// (0x00039a8d) aid_size_touch_mv_arrow_right_ParamLimits

0xcdf9,	// (0x000402eb) navi_pane_g1_ParamLimits

0x65da,	// (0x00039acc) navi_pane_g2_ParamLimits

0x6608,	// (0x00039afa) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000428e7) navi_pane_g_ParamLimits

0x6662,	// (0x00039b54) navi_pane_mv_t1_ParamLimits

0x882e,	// (0x0003bd20) grid_imed_effect_pane_ParamLimits

0x532a,	// (0x0003881c) aid_placing_vt_slider_lsc

0xc5ec,	// (0x0003fade) aid_placing_vt_slider_prt

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp01_ParamLimits

0xe83b,	// (0x00041d2d) popup_image_details_window_g1_ParamLimits

0xe84e,	// (0x00041d40) popup_image_details_window_g2_ParamLimits

0xe863,	// (0x00041d55) popup_image_details_window_g3_ParamLimits

0xe863,	// (0x00041d55) popup_image_details_window_g3

0xf728,	// (0x00042c1a) popup_image_details_window_g_ParamLimits

0xe877,	// (0x00041d69) popup_image_details_window_t1_ParamLimits

0xe889,	// (0x00041d7b) popup_image_details_window_t2_ParamLimits

0xe8a2,	// (0x00041d94) popup_image_details_window_t3_ParamLimits

0xe8b6,	// (0x00041da8) popup_image_details_window_t4_ParamLimits

0xe8d1,	// (0x00041dc3) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00042c21) popup_image_details_window_t_ParamLimits

0xa05b,	// (0x0003d54d) cl_header_name_pane_ParamLimits

0xa05b,	// (0x0003d54d) cl_header_name_pane

0xa3c0,	// (0x0003d8b2) cl_header_name_pane_t1_ParamLimits

0xa3c0,	// (0x0003d8b2) cl_header_name_pane_t1

0xa3d7,	// (0x0003d8c9) cl_header_name_pane_t2_ParamLimits

0xa3d7,	// (0x0003d8c9) cl_header_name_pane_t2

0xa401,	// (0x0003d8f3) cl_header_name_pane_t3_ParamLimits

0xa401,	// (0x0003d8f3) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00043022) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00043022) cl_header_name_pane_t

0x6633,	// (0x00039b25) navi_pane_mv_g2_ParamLimits

0x00db,	// (0x000335cd) field_vitu2_entry_pane_g1_ParamLimits

0x00e7,	// (0x000335d9) field_vitu2_entry_pane_g2_ParamLimits

0x00f3,	// (0x000335e5) field_vitu2_entry_pane_g3_ParamLimits

0x00f3,	// (0x000335e5) field_vitu2_entry_pane_g3

0xf926,	// (0x00042e18) field_vitu2_entry_pane_g_ParamLimits

0x9555,	// (0x0003ca47) cell_vitu2_itu_pane_g1_ParamLimits

0x9565,	// (0x0003ca57) cell_vitu2_itu_pane_g2_ParamLimits

0x9565,	// (0x0003ca57) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00042e24) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00042e24) cell_vitu2_itu_pane_g

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp05_ParamLimits

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp05

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp03

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp04

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp10_ParamLimits

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp10

0x3852,	// (0x00036d44) bg_vkb2_func_pane_cp08

0xa005,	// (0x0003d4f7) bg_vkb2_func_pane_cp06

0xa013,	// (0x0003d505) bg_vkb2_func_pane_cp07

0x0887,	// (0x00033d79) bg_vkb2_func_pane_cp11_ParamLimits

0x0887,	// (0x00033d79) bg_vkb2_func_pane_cp11

0x089c,	// (0x00033d8e) bg_vkb2_func_pane_cp12_ParamLimits

0x089c,	// (0x00033d8e) bg_vkb2_func_pane_cp12

0x22de,	// (0x000357d0) bg_vkb2_func_pane_cp09

0x015f,	// (0x00033651) bg_vkb2_func_pane_g1

0xc7ae,	// (0x0003fca0) bg_vkb2_func_pane_g2

0x0167,	// (0x00033659) bg_vkb2_func_pane_g3

0x016f,	// (0x00033661) bg_vkb2_func_pane_g4

0x0418,	// (0x0003390a) bg_vkb2_func_pane_g5

0x0187,	// (0x00033679) bg_vkb2_func_pane_g6

0x018f,	// (0x00033681) bg_vkb2_func_pane_g7

0x017f,	// (0x00033671) bg_vkb2_func_pane_g8

0xc78e,	// (0x0003fc80) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00043029) bg_vkb2_func_pane_g

0xa30f,	// (0x0003d801) blid2_tripm_pane_g6_ParamLimits

0xa30f,	// (0x0003d801) blid2_tripm_pane_g6

0xef75,	// (0x00042467) mp4_progress_pane_g1

0xa369,	// (0x0003d85b) blid2_tripm_values_pane_ParamLimits

0xa369,	// (0x0003d85b) blid2_tripm_values_pane

0xa426,	// (0x0003d918) blid2_tripm_values_pane_t1

0xa434,	// (0x0003d926) blid2_tripm_values_pane_t2

0xa442,	// (0x0003d934) blid2_tripm_values_pane_t3

0xa450,	// (0x0003d942) blid2_tripm_values_pane_t4

0xa45e,	// (0x0003d950) blid2_tripm_values_pane_t5

0xa46c,	// (0x0003d95e) blid2_tripm_values_pane_t6

0xa47a,	// (0x0003d96c) blid2_tripm_values_pane_t7

0xa488,	// (0x0003d97a) blid2_tripm_values_pane_t8

0xa496,	// (0x0003d988) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0004303c) blid2_tripm_values_pane_t

0x536a,	// (0x0003885c) call_video_pane_t1_ParamLimits

0x538b,	// (0x0003887d) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00042770) call_video_pane_t_ParamLimits

0x33e4,	// (0x000368d6) msg_header_pane_g1_ParamLimits

0xd014,	// (0x00040506) msg_header_pane_g2_ParamLimits

0xd014,	// (0x00040506) msg_header_pane_g2

0x0001,

0xf498,	// (0x0004298a) msg_header_pane_g_ParamLimits

0xf498,	// (0x0004298a) msg_header_pane_g

0xc3b8,	// (0x0003f8aa) main_clock2_pane_ParamLimits

0x85d4,	// (0x0003bac6) grid_clock2_toolbar_pane_ParamLimits

0x85d4,	// (0x0003bac6) grid_clock2_toolbar_pane

0x85d4,	// (0x0003bac6) listscroll_clock2_pane_ParamLimits

0x85d4,	// (0x0003bac6) listscroll_clock2_pane

0x866b,	// (0x0003bb5d) main_clock2_pane_t3_ParamLimits

0x866b,	// (0x0003bb5d) main_clock2_pane_t3

0x867d,	// (0x0003bb6f) main_clock2_pane_t4_ParamLimits

0x867d,	// (0x0003bb6f) main_clock2_pane_t4

0x0990,	// (0x00033e82) cell_clock2_toolbar_pane

0x0998,	// (0x00033e8a) cell_clock2_toolbar_pane_cp01

0x0998,	// (0x00033e8a) cell_clock2_toolbar_pane_cp02

0x09a0,	// (0x00033e92) cell_clock2_toolbar_pane_cp03

0x09a8,	// (0x00033e9a) list_clock2_pane

0xcd50,	// (0x00040242) scroll_pane_cp10

0x09b0,	// (0x00033ea2) list_single_clock2_pane_ParamLimits

0x09b0,	// (0x00033ea2) list_single_clock2_pane

0xce99,	// (0x0004038b) list_highlight_pane_cp08

0x09bd,	// (0x00033eaf) list_single_clock2_pane_t1

0x09cb,	// (0x00033ebd) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0004304f) list_single_clock2_pane_t

0x22de,	// (0x000357d0) bg_button_pane_cp10

0x09d9,	// (0x00033ecb) cell_clock2_toolbar_pane_g1

0x6b4e,	// (0x0003a040) aid_main_viewer_pane_g1_ParamLimits

0x6b4e,	// (0x0003a040) aid_main_viewer_pane_g1

0x6b5a,	// (0x0003a04c) aid_main_viewer_pane_g2_ParamLimits

0x6b5a,	// (0x0003a04c) aid_main_viewer_pane_g2

0x6b66,	// (0x0003a058) aid_main_viewer_pane_g3_ParamLimits

0x6b66,	// (0x0003a058) aid_main_viewer_pane_g3

0x6b77,	// (0x0003a069) aid_main_viewer_pane_g4_ParamLimits

0x6b77,	// (0x0003a069) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0004299b) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0004299b) aid_main_viewer_pane_g

0x72f7,	// (0x0003a7e9) main_calc_pane_ParamLimits

0x7304,	// (0x0003a7f6) main_dialer2_pane_ParamLimits

0x22de,	// (0x000357d0) main_cam6_pane

0x22de,	// (0x000357d0) main_vid6_pane

0x85e0,	// (0x0003bad2) listscroll_gen_pane_cp06_ParamLimits

0x85e0,	// (0x0003bad2) listscroll_gen_pane_cp06

0x868f,	// (0x0003bb81) main_clock2_pane_t5_ParamLimits

0x868f,	// (0x0003bb81) main_clock2_pane_t5

0x86d8,	// (0x0003bbca) aid_call2_pane_cp10_ParamLimits

0x86ea,	// (0x0003bbdc) aid_call_pane_cp10_ParamLimits

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x86fc,	// (0x0003bbee) popup_clock_analogue_window_cp10_g3_ParamLimits

0x86fc,	// (0x0003bbee) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcdce,	// (0x000402c0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00042cd1) popup_clock_analogue_window_cp10_g_ParamLimits

0x870e,	// (0x0003bc00) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8eb8,	// (0x0003c3aa) cell_dialer2_keypad_pane_g2_ParamLimits

0x8eb8,	// (0x0003c3aa) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00042db7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00042db7) cell_dialer2_keypad_pane_g

0x8ed4,	// (0x0003c3c6) cell_dialer2_keypad_pane_t1

0x9890,	// (0x0003cd82) main_cset_text2_pane_ParamLimits

0x9890,	// (0x0003cd82) main_cset_text2_pane

0x0681,	// (0x00033b73) area_vitu2_query_pane_g1_ParamLimits

0x377d,	// (0x00036c6f) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00042f6c) area_vitu2_query_pane_g_ParamLimits

0x382e,	// (0x00036d20) area_vitu2_query_pane_t7_ParamLimits

0x382e,	// (0x00036d20) area_vitu2_query_pane_t7

0xa005,	// (0x0003d4f7) bg_button_pane_cp018_ParamLimits

0xa013,	// (0x0003d505) bg_button_pane_cp021_ParamLimits

0x3852,	// (0x00036d44) bg_button_pane_cp022_ParamLimits

0x3852,	// (0x00036d44) bg_vkb2_func_pane_cp08_ParamLimits

0xa005,	// (0x0003d4f7) bg_vkb2_func_pane_cp06_ParamLimits

0xa013,	// (0x0003d505) bg_vkb2_func_pane_cp07_ParamLimits

0x3863,	// (0x00036d55) input_focus_pane_cp09_ParamLimits

0xa4a4,	// (0x0003d996) cam6_autofocus_pane_ParamLimits

0xa4a4,	// (0x0003d996) cam6_autofocus_pane

0xa4c6,	// (0x0003d9b8) cam6_image_uncrop_pane_ParamLimits

0xa4c6,	// (0x0003d9b8) cam6_image_uncrop_pane

0xa4f3,	// (0x0003d9e5) cam6_indi_pane_ParamLimits

0xa4f3,	// (0x0003d9e5) cam6_indi_pane

0xa50d,	// (0x0003d9ff) cam6_mode_pane_ParamLimits

0xa50d,	// (0x0003d9ff) cam6_mode_pane

0xa521,	// (0x0003da13) cam6_timer_pane_ParamLimits

0xa521,	// (0x0003da13) cam6_timer_pane

0xa52d,	// (0x0003da1f) cam6_zoom_pane_ParamLimits

0xa52d,	// (0x0003da1f) cam6_zoom_pane

0xa545,	// (0x0003da37) cam6_mode_pane_g1_ParamLimits

0xa545,	// (0x0003da37) cam6_mode_pane_g1

0xa551,	// (0x0003da43) cam6_mode_pane_g2_ParamLimits

0xa551,	// (0x0003da43) cam6_mode_pane_g2

0xa55d,	// (0x0003da4f) cam6_mode_pane_g3_ParamLimits

0xa55d,	// (0x0003da4f) cam6_mode_pane_g3

0xa569,	// (0x0003da5b) cam6_mode_pane_g4_ParamLimits

0xa569,	// (0x0003da5b) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00043054) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00043054) cam6_mode_pane_g

0x09ef,	// (0x00033ee1) bg_tb_trans_pane_cp08_ParamLimits

0x09ef,	// (0x00033ee1) bg_tb_trans_pane_cp08

0x09fd,	// (0x00033eef) cam6_battery_pane_ParamLimits

0x09fd,	// (0x00033eef) cam6_battery_pane

0x0a13,	// (0x00033f05) cam6_indi_pane_g1_ParamLimits

0x0a13,	// (0x00033f05) cam6_indi_pane_g1

0x0a25,	// (0x00033f17) cam6_indi_pane_g2_ParamLimits

0x0a25,	// (0x00033f17) cam6_indi_pane_g2

0x0a37,	// (0x00033f29) cam6_indi_pane_g3_ParamLimits

0x0a37,	// (0x00033f29) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0004305d) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0004305d) cam6_indi_pane_g

0x0a49,	// (0x00033f3b) cam6_indi_pane_t1_ParamLimits

0x0a49,	// (0x00033f3b) cam6_indi_pane_t1

0x9391,	// (0x0003c883) cam6_autofocus_pane_g1

0x9399,	// (0x0003c88b) cam6_autofocus_pane_g2

0x93a1,	// (0x0003c893) cam6_autofocus_pane_g3

0x93a9,	// (0x0003c89b) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00043064) cam6_autofocus_pane_g

0x0a6f,	// (0x00033f61) cam6_timer_pane_g1

0x0a77,	// (0x00033f69) cam6_timer_pane_t1

0x0a85,	// (0x00033f77) cam6_zoom_cont_pane

0x0a8d,	// (0x00033f7f) cam6_zoom_pane_g1

0x0a95,	// (0x00033f87) cam6_zoom_pane_g2

0xa575,	// (0x0003da67) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0004306d) cam6_zoom_pane_g

0xe6b8,	// (0x00041baa) cam6_battery_pane_g1

0xe6b8,	// (0x00041baa) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00042bde) cam6_battery_pane_g

0x0a9d,	// (0x00033f8f) cam6_zoom_cont_pane_g1

0x0aa6,	// (0x00033f98) cam6_zoom_cont_pane_g2

0x0aaf,	// (0x00033fa1) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00043074) cam6_zoom_cont_pane_g

0xa592,	// (0x0003da84) cam6_mode_pane_cp_ParamLimits

0xa592,	// (0x0003da84) cam6_mode_pane_cp

0xa52d,	// (0x0003da1f) cam6_zoom_pane_cp_ParamLimits

0xa52d,	// (0x0003da1f) cam6_zoom_pane_cp

0xa5a6,	// (0x0003da98) vid6_image_uncrop_cif_pane_ParamLimits

0xa5a6,	// (0x0003da98) vid6_image_uncrop_cif_pane

0xa5d2,	// (0x0003dac4) vid6_image_uncrop_nhd_pane_ParamLimits

0xa5d2,	// (0x0003dac4) vid6_image_uncrop_nhd_pane

0xa4c6,	// (0x0003d9b8) vid6_image_uncrop_vga_pane_ParamLimits

0xa4c6,	// (0x0003d9b8) vid6_image_uncrop_vga_pane

0xa5ef,	// (0x0003dae1) vid6_image_uncrop_wvga_pane_ParamLimits

0xa5ef,	// (0x0003dae1) vid6_image_uncrop_wvga_pane

0xa60c,	// (0x0003dafe) vid6_indi_pane_ParamLimits

0xa60c,	// (0x0003dafe) vid6_indi_pane

0x09ef,	// (0x00033ee1) bg_tb_trans_pane_cp09_ParamLimits

0x09ef,	// (0x00033ee1) bg_tb_trans_pane_cp09

0x0ac7,	// (0x00033fb9) cam6_battery_pane_cp_ParamLimits

0x0ac7,	// (0x00033fb9) cam6_battery_pane_cp

0x0ad3,	// (0x00033fc5) vid6_indi_pane_g1_ParamLimits

0x0ad3,	// (0x00033fc5) vid6_indi_pane_g1

0x0ae5,	// (0x00033fd7) vid6_indi_pane_g2_ParamLimits

0x0ae5,	// (0x00033fd7) vid6_indi_pane_g2

0x0af7,	// (0x00033fe9) vid6_indi_pane_g3_ParamLimits

0x0af7,	// (0x00033fe9) vid6_indi_pane_g3

0x0b0c,	// (0x00033ffe) vid6_indi_pane_g4_ParamLimits

0x0b0c,	// (0x00033ffe) vid6_indi_pane_g4

0x0b21,	// (0x00034013) vid6_indi_pane_g5_ParamLimits

0x0b21,	// (0x00034013) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0004307b) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0004307b) vid6_indi_pane_g

0x0b3b,	// (0x0003402d) vid6_indi_pane_t1_ParamLimits

0x0b3b,	// (0x0003402d) vid6_indi_pane_t1

0x0b51,	// (0x00034043) vid6_indi_pane_t2_ParamLimits

0x0b51,	// (0x00034043) vid6_indi_pane_t2

0x0b79,	// (0x0003406b) vid6_indi_pane_t3_ParamLimits

0x0b79,	// (0x0003406b) vid6_indi_pane_t3

0x0ba1,	// (0x00034093) vid6_indi_pane_t4_ParamLimits

0x0ba1,	// (0x00034093) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00043086) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00043086) vid6_indi_pane_t

0x0bc5,	// (0x000340b7) wait_bar_pane_cp08

0xa631,	// (0x0003db23) main_cset_text2_pane_t1_ParamLimits

0xa631,	// (0x0003db23) main_cset_text2_pane_t1

0xa57d,	// (0x0003da6f) listscroll_gen_pane_cp06_t1_ParamLimits

0xa57d,	// (0x0003da6f) listscroll_gen_pane_cp06_t1

0x22de,	// (0x000357d0) main_cam6_set_pane

0xe91b,	// (0x00041e0d) bg_tb_trans_pane_cp06_ParamLimits

0x9241,	// (0x0003c733) cam4_indicators_pane_g1_ParamLimits

0x9252,	// (0x0003c744) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00042df4) cam4_indicators_pane_g_ParamLimits

0x9270,	// (0x0003c762) cam4_indicators_pane_t1_ParamLimits

0xde7c,	// (0x0004136e) bg_tb_trans_pane_cp07_ParamLimits

0x9323,	// (0x0003c815) vid4_indicators_pane_g1_ParamLimits

0x9337,	// (0x0003c829) vid4_indicators_pane_g2_ParamLimits

0x934b,	// (0x0003c83d) vid4_indicators_pane_g3_ParamLimits

0x935c,	// (0x0003c84e) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00042e06) vid4_indicators_pane_g_ParamLimits

0x937a,	// (0x0003c86c) vid4_indicators_pane_t1_ParamLimits

0xa13f,	// (0x0003d631) vid4_progress_pane_g1_ParamLimits

0xa151,	// (0x0003d643) vid4_progress_pane_g2_ParamLimits

0x6bd4,	// (0x0003a0c6) vid4_progress_pane_g3_ParamLimits

0xa161,	// (0x0003d653) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00042fb7) vid4_progress_pane_g_ParamLimits

0xa17f,	// (0x0003d671) vid4_progress_pane_t1_ParamLimits

0xa194,	// (0x0003d686) vid4_progress_pane_t2_ParamLimits

0xa1aa,	// (0x0003d69c) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00042fc2) vid4_progress_pane_t_ParamLimits

0xa1bf,	// (0x0003d6b1) wait_bar_pane_cp07_ParamLimits

0xa664,	// (0x0003db56) main_cam6_set_pane_g2_ParamLimits

0xa664,	// (0x0003db56) main_cam6_set_pane_g2

0xa670,	// (0x0003db62) main_cset6_listscroll_pane_ParamLimits

0xa670,	// (0x0003db62) main_cset6_listscroll_pane

0xa69b,	// (0x0003db8d) main_cset6_slider_pane_ParamLimits

0xa69b,	// (0x0003db8d) main_cset6_slider_pane

0xa6a7,	// (0x0003db99) main_cset6_text2_pane_ParamLimits

0xa6a7,	// (0x0003db99) main_cset6_text2_pane

0x0bd4,	// (0x000340c6) main_cset6_text_pane

0x0bdc,	// (0x000340ce) main_cset_list_pane_copy1_ParamLimits

0x0bdc,	// (0x000340ce) main_cset_list_pane_copy1

0x0bec,	// (0x000340de) scroll_pane_cp028_copy1

0xa6ba,	// (0x0003dbac) cset_list_set_pane_copy1

0xa6cd,	// (0x0003dbbf) aid_position_infowindow_above_copy1

0xa6d5,	// (0x0003dbc7) aid_position_infowindow_below_copy1

0x38bc,	// (0x00036dae) cset_list_set_pane_g1_copy1

0x35f1,	// (0x00036ae3) cset_list_set_pane_g3_copy1_ParamLimits

0x35f1,	// (0x00036ae3) cset_list_set_pane_g3_copy1

0x3600,	// (0x00036af2) cset_list_set_pane_t1_copy1_ParamLimits

0x3600,	// (0x00036af2) cset_list_set_pane_t1_copy1

0xde7c,	// (0x0004136e) list_highlight_pane_cp021_copy1_ParamLimits

0xde7c,	// (0x0004136e) list_highlight_pane_cp021_copy1

0x0bf5,	// (0x000340e7) cset6_slider_pane_ParamLimits

0x0bf5,	// (0x000340e7) cset6_slider_pane

0x0c21,	// (0x00034113) main_cset6_slider_pane_g1_ParamLimits

0x0c21,	// (0x00034113) main_cset6_slider_pane_g1

0xa6dd,	// (0x0003dbcf) main_cset6_slider_pane_g2_ParamLimits

0xa6dd,	// (0x0003dbcf) main_cset6_slider_pane_g2

0x0c49,	// (0x0003413b) main_cset6_slider_pane_g3_ParamLimits

0x0c49,	// (0x0003413b) main_cset6_slider_pane_g3

0xa705,	// (0x0003dbf7) main_cset6_slider_pane_g4_ParamLimits

0xa705,	// (0x0003dbf7) main_cset6_slider_pane_g4

0xa711,	// (0x0003dc03) main_cset6_slider_pane_g5_ParamLimits

0xa711,	// (0x0003dc03) main_cset6_slider_pane_g5

0x028e,	// (0x00033780) main_cset6_slider_pane_g7_ParamLimits

0x028e,	// (0x00033780) main_cset6_slider_pane_g7

0x029a,	// (0x0003378c) main_cset6_slider_pane_g8_ParamLimits

0x029a,	// (0x0003378c) main_cset6_slider_pane_g8

0xa71f,	// (0x0003dc11) main_cset6_slider_pane_g9_ParamLimits

0xa71f,	// (0x0003dc11) main_cset6_slider_pane_g9

0xa72b,	// (0x0003dc1d) main_cset6_slider_pane_g10_ParamLimits

0xa72b,	// (0x0003dc1d) main_cset6_slider_pane_g10

0xa737,	// (0x0003dc29) main_cset6_slider_pane_g11_ParamLimits

0xa737,	// (0x0003dc29) main_cset6_slider_pane_g11

0xa743,	// (0x0003dc35) main_cset6_slider_pane_g12_ParamLimits

0xa743,	// (0x0003dc35) main_cset6_slider_pane_g12

0xa74f,	// (0x0003dc41) main_cset6_slider_pane_g13_ParamLimits

0xa74f,	// (0x0003dc41) main_cset6_slider_pane_g13

0xa75b,	// (0x0003dc4d) main_cset6_slider_pane_g14_ParamLimits

0xa75b,	// (0x0003dc4d) main_cset6_slider_pane_g14

0xa767,	// (0x0003dc59) main_cset6_slider_pane_g15_ParamLimits

0xa767,	// (0x0003dc59) main_cset6_slider_pane_g15

0xa77f,	// (0x0003dc71) main_cset6_slider_pane_g16_ParamLimits

0xa77f,	// (0x0003dc71) main_cset6_slider_pane_g16

0xa78d,	// (0x0003dc7f) main_cset6_slider_pane_g17_ParamLimits

0xa78d,	// (0x0003dc7f) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0004308f) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0004308f) main_cset6_slider_pane_g

0x0c55,	// (0x00034147) main_cset6_slider_pane_t1_ParamLimits

0x0c55,	// (0x00034147) main_cset6_slider_pane_t1

0xa7b3,	// (0x0003dca5) main_cset6_slider_pane_t2_ParamLimits

0xa7b3,	// (0x0003dca5) main_cset6_slider_pane_t2

0xa7de,	// (0x0003dcd0) main_cset6_slider_pane_t3_ParamLimits

0xa7de,	// (0x0003dcd0) main_cset6_slider_pane_t3

0xa809,	// (0x0003dcfb) main_cset6_slider_pane_t4_ParamLimits

0xa809,	// (0x0003dcfb) main_cset6_slider_pane_t4

0xa834,	// (0x0003dd26) main_cset6_slider_pane_t5_ParamLimits

0xa834,	// (0x0003dd26) main_cset6_slider_pane_t5

0x0c96,	// (0x00034188) main_cset6_slider_pane_t7_ParamLimits

0x0c96,	// (0x00034188) main_cset6_slider_pane_t7

0xa861,	// (0x0003dd53) main_cset6_slider_pane_t8_ParamLimits

0xa861,	// (0x0003dd53) main_cset6_slider_pane_t8

0xa885,	// (0x0003dd77) main_cset6_slider_pane_t9_ParamLimits

0xa885,	// (0x0003dd77) main_cset6_slider_pane_t9

0xa8a9,	// (0x0003dd9b) main_cset6_slider_pane_t10_ParamLimits

0xa8a9,	// (0x0003dd9b) main_cset6_slider_pane_t10

0xa8cd,	// (0x0003ddbf) main_cset6_slider_pane_t11_ParamLimits

0xa8cd,	// (0x0003ddbf) main_cset6_slider_pane_t11

0x0ccc,	// (0x000341be) main_cset6_slider_pane_t14_ParamLimits

0x0ccc,	// (0x000341be) main_cset6_slider_pane_t14

0x0d05,	// (0x000341f7) main_cset6_slider_pane_t15_ParamLimits

0x0d05,	// (0x000341f7) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x000430b4) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x000430b4) main_cset6_slider_pane_t

0x0d3e,	// (0x00034230) cset_slider_pane_g1_copy1

0x0d47,	// (0x00034239) cset_slider_pane_g2_copy1

0x0d50,	// (0x00034242) cset_slider_pane_g3_copy1

0x22de,	// (0x000357d0) bg_popup_sub_pane_cp011_copy1

0x0e2a,	// (0x0003431c) main_cset_text_pane_g1_copy1

0x04a9,	// (0x0003399b) main_cset_text_pane_t1_copy1

0x04b7,	// (0x000339a9) main_cset_text_pane_t2_copy1

0x04c5,	// (0x000339b7) main_cset_text_pane_t3_copy1

0x04d3,	// (0x000339c5) main_cset_text_pane_t4_copy1

0x04e1,	// (0x000339d3) main_cset_text_pane_t5_copy1

0x0e32,	// (0x00034324) main_cset_text_pane_t6_copy1

0x0e40,	// (0x00034332) main_cset_text_pane_t7_copy1

0xa8f1,	// (0x0003dde3) main_cset_text2_pane_t1_copy1

0xde7c,	// (0x0004136e) main_ncimui_pane

0x7355,	// (0x0003a847) popup_query_ncimui_window_ParamLimits

0x7355,	// (0x0003a847) popup_query_ncimui_window

0x34a5,	// (0x00036997) field_cale_ev2_pane_g4_ParamLimits

0x34a5,	// (0x00036997) field_cale_ev2_pane_g4

0x8bd8,	// (0x0003c0ca) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8bd8,	// (0x0003c0ca) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00042d92) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00042d92) cell_video_dialer_keypad_pane_g

0x8bf0,	// (0x0003c0e2) cell_video_dialer_keypad_pane_t1

0x22de,	// (0x000357d0) bg_popup_window_pane_cp012

0xcc2d,	// (0x0004011f) heading_pane_cp06

0x0e6c,	// (0x0003435e) ncim_query_content_pane

0x22de,	// (0x000357d0) bg_popup_heading_pane_cp01

0x0e74,	// (0x00034366) ncim_heading_pane_t1

0x0e82,	// (0x00034374) ncim_indicator_popup_pane

0x0e94,	// (0x00034386) ncim_query_button_pane

0x0ea8,	// (0x0003439a) ncim_query_content_pane_t1

0x0eba,	// (0x000343ac) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x000430f8) ncim_query_content_pane_t

0x0ef4,	// (0x000343e6) ncim_query_list_pane

0x0f06,	// (0x000343f8) ncim_query_popup_pane

0x0e82,	// (0x00034374) ncim_indicator_popup_pane_ParamLimits

0xaa44,	// (0x0003df36) ncim_query_content_pane_g1_ParamLimits

0xaa44,	// (0x0003df36) ncim_query_content_pane_g1

0x0ea8,	// (0x0003439a) ncim_query_content_pane_t1_ParamLimits

0x0eba,	// (0x000343ac) ncim_query_content_pane_t2_ParamLimits

0xaa50,	// (0x0003df42) ncim_query_content_pane_t3_ParamLimits

0xaa50,	// (0x0003df42) ncim_query_content_pane_t3

0xaa6d,	// (0x0003df5f) ncim_query_content_pane_t4_ParamLimits

0xaa6d,	// (0x0003df5f) ncim_query_content_pane_t4

0xaa8a,	// (0x0003df7c) ncim_query_content_pane_t5_ParamLimits

0xaa8a,	// (0x0003df7c) ncim_query_content_pane_t5

0x0ecc,	// (0x000343be) ncim_query_content_pane_t6_ParamLimits

0x0ecc,	// (0x000343be) ncim_query_content_pane_t6

0xfc06,	// (0x000430f8) ncim_query_content_pane_t_ParamLimits

0x0ef4,	// (0x000343e6) ncim_query_list_pane_ParamLimits

0x0f06,	// (0x000343f8) ncim_query_popup_pane_ParamLimits

0x0f1a,	// (0x0003440c) wait_bar_pane_cp04

0x22de,	// (0x000357d0) input_focus_pane_cp011

0x0f22,	// (0x00034414) ncim_query_popup_pane_t1

0x0f30,	// (0x00034422) ncim_list_query_list_pane_ParamLimits

0x0f30,	// (0x00034422) ncim_list_query_list_pane

0x22de,	// (0x000357d0) bg_button_pane_cp027

0x0f3d,	// (0x0003442f) ncim_query_button_pane_g1

0x22de,	// (0x000357d0) list_highlight_pane_cp012

0x0f47,	// (0x00034439) ncim_list_query_list_pane_g1

0x0f4f,	// (0x00034441) ncim_list_query_list_pane_t1

0x9261,	// (0x0003c753) cam4_indicators_pane_g3_ParamLimits

0x9261,	// (0x0003c753) cam4_indicators_pane_g3

0x9368,	// (0x0003c85a) vid4_indicators_pane_g5_ParamLimits

0x9368,	// (0x0003c85a) vid4_indicators_pane_g5

0xa170,	// (0x0003d662) vid4_progress_pane_g5_ParamLimits

0xa170,	// (0x0003d662) vid4_progress_pane_g5

0xa930,	// (0x0003de22) main_ncimui_pane_g1

0xa998,	// (0x0003de8a) ncimui_group_query_pane_ParamLimits

0xa998,	// (0x0003de8a) ncimui_group_query_pane

0xa9e0,	// (0x0003ded2) ncimui_list_pane_ParamLimits

0xa9e0,	// (0x0003ded2) ncimui_list_pane

0xaa07,	// (0x0003def9) ncimui_text_pane_ParamLimits

0xaa07,	// (0x0003def9) ncimui_text_pane

0xaaa7,	// (0x0003df99) ncimui_text_pane_t1_ParamLimits

0xaaa7,	// (0x0003df99) ncimui_text_pane_t1

0x0f5d,	// (0x0003444f) ncimui_list_single_graphic_pane_ParamLimits

0x0f5d,	// (0x0003444f) ncimui_list_single_graphic_pane

0xaac6,	// (0x0003dfb8) ncimui_query_pane_ParamLimits

0xaac6,	// (0x0003dfb8) ncimui_query_pane

0x22de,	// (0x000357d0) list_highlight_pane_cp013

0x0f6d,	// (0x0003445f) ncim_list_query_list_pane_t1_copy1

0x0f47,	// (0x00034439) ncim_list_single_graphic_pane_g1

0x0f7b,	// (0x0003446d) ncim_query_button_pane_cp01

0x0f87,	// (0x00034479) ncim_query_entry_pane_ParamLimits

0x0f87,	// (0x00034479) ncim_query_entry_pane

0x0f9a,	// (0x0003448c) ncimui_query_pane_g1

0x0fa6,	// (0x00034498) ncimui_query_pane_t1_ParamLimits

0x0fa6,	// (0x00034498) ncimui_query_pane_t1

0xde7c,	// (0x0004136e) input_focus_pane_cp012

0x0fbf,	// (0x000344b1) ncim_query_entry_pane_t1

0xc3b8,	// (0x0003f8aa) main_im_pane_ParamLimits

0xde7c,	// (0x0004136e) main_mobtv_pane_ParamLimits

0xde7c,	// (0x0004136e) main_mobtv_pane

0xa79b,	// (0x0003dc8d) main_cset6_slider_pane_g18_ParamLimits

0xa79b,	// (0x0003dc8d) main_cset6_slider_pane_g18

0xa7a7,	// (0x0003dc99) main_cset6_slider_pane_g19_ParamLimits

0xa7a7,	// (0x0003dc99) main_cset6_slider_pane_g19

0x00f3,	// (0x000335e5) bg_main_mobtv_pane_ParamLimits

0x00f3,	// (0x000335e5) bg_main_mobtv_pane

0xaad9,	// (0x0003dfcb) main_mobtv_info_pane

0xaae4,	// (0x0003dfd6) main_mobtv_loading_pane_ParamLimits

0xaae4,	// (0x0003dfd6) main_mobtv_loading_pane

0x0fdf,	// (0x000344d1) main_mobtv_pg_channel_list_pane

0x0fe9,	// (0x000344db) main_mobtv_pg_hdr_pane

0xaaf1,	// (0x0003dfe3) main_mobtv_programe_curr_pane_ParamLimits

0xaaf1,	// (0x0003dfe3) main_mobtv_programe_curr_pane

0xaafe,	// (0x0003dff0) main_mobtv_programe_next_pane_ParamLimits

0xaafe,	// (0x0003dff0) main_mobtv_programe_next_pane

0x0ff2,	// (0x000344e4) popup_mobtv_noti_window

0xe6b8,	// (0x00041baa) main_tv_pg_hdr_pane_g1

0x0ffa,	// (0x000344ec) main_tv_pg_hdr_pane_g2

0x1002,	// (0x000344f4) main_tv_pg_hdr_pane_g3

0x100a,	// (0x000344fc) main_tv_pg_hdr_pane_g4

0x1012,	// (0x00034504) main_tv_pg_hdr_pane_g5

0x101c,	// (0x0003450e) main_tv_pg_hdr_pane_g6

0x1026,	// (0x00034518) main_tv_pg_hdr_pane_g7

0x1030,	// (0x00034522) main_tv_pg_hdr_pane_g8

0x103a,	// (0x0003452c) main_tv_pg_hdr_pane_g9

0x1044,	// (0x00034536) main_tv_pg_hdr_pane_g10

0x104e,	// (0x00034540) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00043105) main_tv_pg_hdr_pane_g

0x1058,	// (0x0003454a) main_tv_pg_hdr_pane_t1

0x1066,	// (0x00034558) main_tv_pg_hdr_pane_t2

0x1074,	// (0x00034566) main_tv_pg_hdr_pane_t3

0x1084,	// (0x00034576) main_tv_pg_hdr_pane_t4

0x1094,	// (0x00034586) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0004311c) main_tv_pg_hdr_pane_t

0x10a4,	// (0x00034596) single_mobtv_pg_channel_pane_ParamLimits

0x10a4,	// (0x00034596) single_mobtv_pg_channel_pane

0x10b6,	// (0x000345a8) single_mobtv_pg_channel_table_pane

0x10bf,	// (0x000345b1) single_mobtv_pg_channel_thumb_pane

0x10c8,	// (0x000345ba) single_tv_pg_channel_pane_g1

0x10d1,	// (0x000345c3) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00043127) single_tv_pg_channel_pane_g

0xe91b,	// (0x00041e0d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe91b,	// (0x00041e0d) bg_single_mobtv_pg_channel_thumb_pane

0x10da,	// (0x000345cc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x10da,	// (0x000345cc) single_mobtv_pg_channel_thumb_pane_g1

0x10e8,	// (0x000345da) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x10e8,	// (0x000345da) single_mobtv_pg_channel_thumb_pane_g2

0x10f4,	// (0x000345e6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x10f4,	// (0x000345e6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0004312c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0004312c) single_mobtv_pg_channel_thumb_pane_g

0x1100,	// (0x000345f2) single_mobtv_pg_channel_thumb_pane_t1

0x110e,	// (0x00034600) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00043133) single_mobtv_pg_channel_thumb_pane_t

0xe6b8,	// (0x00041baa) bg_single_mobtv_pg_channel_table_pane_g1

0xe6b8,	// (0x00041baa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00042bde) bg_single_mobtv_pg_channel_table_pane_g

0x111c,	// (0x0003460e) single_mobtv_pg_channel_table_pane_t1

0x112a,	// (0x0003461c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00043138) single_mobtv_pg_channel_table_pane_t

0xab13,	// (0x0003e005) main_mobtv_info_pane_g1_ParamLimits

0xab13,	// (0x0003e005) main_mobtv_info_pane_g1

0xab2f,	// (0x0003e021) main_mobtv_info_pane_t1_ParamLimits

0xab2f,	// (0x0003e021) main_mobtv_info_pane_t1

0xaba7,	// (0x0003e099) main_mobtv_info_pane_t2_ParamLimits

0xaba7,	// (0x0003e099) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00043142) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00043142) main_mobtv_info_pane_t

0xac36,	// (0x0003e128) wait_bar_pane_cp05

0xac48,	// (0x0003e13a) main_mobtv_loading_pane_g1_ParamLimits

0xac48,	// (0x0003e13a) main_mobtv_loading_pane_g1

0xac56,	// (0x0003e148) main_mobtv_loading_pane_g2_ParamLimits

0xac56,	// (0x0003e148) main_mobtv_loading_pane_g2

0xac62,	// (0x0003e154) main_mobtv_loading_pane_g3_ParamLimits

0xac62,	// (0x0003e154) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00043149) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00043149) main_mobtv_loading_pane_g

0x1138,	// (0x0003462a) main_mobtv_loading_pane_t1_ParamLimits

0x1138,	// (0x0003462a) main_mobtv_loading_pane_t1

0x1150,	// (0x00034642) main_mobtv_loading_pane_t2_ParamLimits

0x1150,	// (0x00034642) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00043150) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00043150) main_mobtv_loading_pane_t

0xac70,	// (0x0003e162) wait_bar_pane_cp06_ParamLimits

0xac70,	// (0x0003e162) wait_bar_pane_cp06

0x1174,	// (0x00034666) main_mobtv_programe_curr_pane_t1

0x1182,	// (0x00034674) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00043155) main_mobtv_programe_curr_pane_t

0x1190,	// (0x00034682) main_mobtv_programe_next_pane_t1

0x119e,	// (0x00034690) main_mobtv_programe_next_pane_t2

0x11ac,	// (0x0003469e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0004315a) main_mobtv_programe_next_pane_t

0x22de,	// (0x000357d0) bg_popup_mobtv_noti_window_pane

0x11ba,	// (0x000346ac) popup_mobtv_noti_window_g1

0x11c2,	// (0x000346b4) popup_mobtv_noti_window_t1

0x11d0,	// (0x000346c2) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00043161) popup_mobtv_noti_window_t

0xe6b8,	// (0x00041baa) bg_popup_mobtv_noti_window_pane_g1

0x22de,	// (0x000357d0) sc_clock_pane

0x22de,	// (0x000357d0) main_fs_bigclock_pane

0xa357,	// (0x0003d849) blid2_tripm_pane_t4_ParamLimits

0xa357,	// (0x0003d849) blid2_tripm_pane_t4

0xac7c,	// (0x0003e16e) sc_clock_pane_g1_ParamLimits

0xac7c,	// (0x0003e16e) sc_clock_pane_g1

0xac8a,	// (0x0003e17c) sc_clock_pane_t1_ParamLimits

0xac8a,	// (0x0003e17c) sc_clock_pane_t1

0xac9d,	// (0x0003e18f) sc_clock_pane_t2_ParamLimits

0xac9d,	// (0x0003e18f) sc_clock_pane_t2

0xacaf,	// (0x0003e1a1) sc_clock_pane_t3_ParamLimits

0xacaf,	// (0x0003e1a1) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00043166) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00043166) sc_clock_pane_t

0xb4cb,	// (0x0003e9bd) main_fs_bigclock_indicator_pane_ParamLimits

0xb4cb,	// (0x0003e9bd) main_fs_bigclock_indicator_pane

0xad3c,	// (0x0003e22e) main_fs_bigclock_pane_g1_ParamLimits

0xad3c,	// (0x0003e22e) main_fs_bigclock_pane_g1

0xb4d7,	// (0x0003e9c9) main_fs_bigclock_pane_t1_ParamLimits

0xb4d7,	// (0x0003e9c9) main_fs_bigclock_pane_t1

0xb4e9,	// (0x0003e9db) main_fs_bigclock_pane_t2_ParamLimits

0xb4e9,	// (0x0003e9db) main_fs_bigclock_pane_t2

0xb4fd,	// (0x0003e9ef) main_fs_bigclock_pane_t3_ParamLimits

0xb4fd,	// (0x0003e9ef) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x0004336a) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0004336a) main_fs_bigclock_pane_t

0x1e0b,	// (0x000352fd) main_fs_bigclock_indicator_pane_g1

0x0e9c,	// (0x0003438e) ncim_query_content_pane_g2_ParamLimits

0x0e9c,	// (0x0003438e) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x000430f3) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x000430f3) ncim_query_content_pane_g

0xacc3,	// (0x0003e1b5) sc_clock_pane_t4_ParamLimits

0xacc3,	// (0x0003e1b5) sc_clock_pane_t4

0xde7c,	// (0x0004136e) main_radioblah_pane

0xf068,	// (0x0004255a) cell_call4_button_pane_t1_copy1_ParamLimits

0xf068,	// (0x0004255a) cell_call4_button_pane_t1_copy1

0xa94a,	// (0x0003de3c) main_ncimui_pane_t1_ParamLimits

0xa94a,	// (0x0003de3c) main_ncimui_pane_t1

0xa964,	// (0x0003de56) main_ncimui_pane_t2_ParamLimits

0xa964,	// (0x0003de56) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x000430ec) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x000430ec) main_ncimui_pane_t

0x1316,	// (0x00034808) main_radioblah_anim_pane_ParamLimits

0x1316,	// (0x00034808) main_radioblah_anim_pane

0x1327,	// (0x00034819) main_radioblah_info_pane_ParamLimits

0x1327,	// (0x00034819) main_radioblah_info_pane

0x133b,	// (0x0003482d) main_radioblah_pane_t1_ParamLimits

0x133b,	// (0x0003482d) main_radioblah_pane_t1

0x1357,	// (0x00034849) main_radioblah_pane_t2_ParamLimits

0x1357,	// (0x00034849) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00043187) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00043187) main_radioblah_pane_t

0xad8e,	// (0x0003e280) main_radioblah_rocker_ctrl_pane_ParamLimits

0xad8e,	// (0x0003e280) main_radioblah_rocker_ctrl_pane

0x139f,	// (0x00034891) main_radioblah_info_pane_t1_ParamLimits

0x139f,	// (0x00034891) main_radioblah_info_pane_t1

0xadd3,	// (0x0003e2c5) main_radioblah_info_pane_t2_ParamLimits

0xadd3,	// (0x0003e2c5) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00043190) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00043190) main_radioblah_info_pane_t

0xe6b8,	// (0x00041baa) main_radioblah_rocker_ctrl_pane_g1

0xae83,	// (0x0003e375) main_radioblah_rocker_ctrl_pane_g2

0xae8b,	// (0x0003e37d) main_radioblah_rocker_ctrl_pane_g3

0xae93,	// (0x0003e385) main_radioblah_rocker_ctrl_pane_g4

0xae9b,	// (0x0003e38d) main_radioblah_rocker_ctrl_pane_g5

0xaea3,	// (0x0003e395) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00043199) main_radioblah_rocker_ctrl_pane_g

0xa8f1,	// (0x0003dde3) main_cset_text2_pane_t1_copy1_ParamLimits

0x918f,	// (0x0003c681) cam4_image_uncrop_qvga_pane

0x92d6,	// (0x0003c7c8) vid4_image_uncrop_qcif_pane

0xa4e5,	// (0x0003d9d7) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4e5,	// (0x0003d9d7) cam6_image_uncrop_qvga_pane

0x0ab7,	// (0x00033fa9) vid6_image_uncrop_qcif_pane_ParamLimits

0x0ab7,	// (0x00033fa9) vid6_image_uncrop_qcif_pane

0x22de,	// (0x000357d0) bg_popup_preview_window_pane_cp03

0x0e4e,	// (0x00034340) list_cset_text2_pane

0x0e56,	// (0x00034348) main_cset6_text2_pane_g1

0x0e5e,	// (0x00034350) main_cset6_text2_pane_t1

0xaeab,	// (0x0003e39d) list_cset_text2_pane_t1_ParamLimits

0xaeab,	// (0x0003e39d) list_cset_text2_pane_t1

0xde7c,	// (0x0004136e) main_radioblah_pane_ParamLimits

0xac22,	// (0x0003e114) main_mobtv_info_pane_t3_ParamLimits

0xac22,	// (0x0003e114) main_mobtv_info_pane_t3

0xad7c,	// (0x0003e26e) main_radioblah_pane_g1

0xada7,	// (0x0003e299) main_radioblah_info_pane_g1

0xae28,	// (0x0003e31a) main_radioblah_info_pane_t3_ParamLimits

0xae28,	// (0x0003e31a) main_radioblah_info_pane_t3

0x60d8,	// (0x000395ca) highlight_cell_cale_month_pane_ParamLimits

0x60d8,	// (0x000395ca) highlight_cell_cale_month_pane

0x22de,	// (0x000357d0) main_phob_fisheye_pane

0xea03,	// (0x00041ef5) scroll_pane_cp0031_ParamLimits

0xea03,	// (0x00041ef5) scroll_pane_cp0031

0x0bc5,	// (0x000340b7) wait_bar_pane_cp08_ParamLimits

0xa6ba,	// (0x0003dbac) cset_list_set_pane_copy1_ParamLimits

0x13d9,	// (0x000348cb) highlight_cell_cale_month_pane_g1

0xaec8,	// (0x0003e3ba) highlight_cell_cale_month_pane_t1

0x0771,	// (0x00033c63) list_gen_pane_cp01

0x0279,	// (0x0003376b) scroll_pane_01

0xaed6,	// (0x0003e3c8) list_single_double_fisheye_pane

0x3995,	// (0x00036e87) list_double_fisheye_pane_g1_ParamLimits

0x3995,	// (0x00036e87) list_double_fisheye_pane_g1

0x39a1,	// (0x00036e93) list_double_fisheye_pane_g2_ParamLimits

0x39a1,	// (0x00036e93) list_double_fisheye_pane_g2

0xaedf,	// (0x0003e3d1) list_double_fisheye_pane_g3_ParamLimits

0xaedf,	// (0x0003e3d1) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x000431a6) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x000431a6) list_double_fisheye_pane_g

0x39d2,	// (0x00036ec4) list_double_fisheye_pane_t1_ParamLimits

0x39d2,	// (0x00036ec4) list_double_fisheye_pane_t1

0x39ed,	// (0x00036edf) list_double_fisheye_pane_t2_ParamLimits

0x39ed,	// (0x00036edf) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x000431b1) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x000431b1) list_double_fisheye_pane_t

0x22de,	// (0x000357d0) main_call5_pane

0xace9,	// (0x0003e1db) sc_swipe_pane_ParamLimits

0xace9,	// (0x0003e1db) sc_swipe_pane

0xaef7,	// (0x0003e3e9) call5_image_pane_ParamLimits

0xaef7,	// (0x0003e3e9) call5_image_pane

0xaf07,	// (0x0003e3f9) call5_swipe_1_pane_ParamLimits

0xaf07,	// (0x0003e3f9) call5_swipe_1_pane

0xaf13,	// (0x0003e405) call5_swipe_2_pane_ParamLimits

0xaf13,	// (0x0003e405) call5_swipe_2_pane

0xaf2d,	// (0x0003e41f) popup_call5_audio_first_window_ParamLimits

0xaf2d,	// (0x0003e41f) popup_call5_audio_first_window

0xe91b,	// (0x00041e0d) call5_swipe_1_pane_g1_ParamLimits

0xe91b,	// (0x00041e0d) call5_swipe_1_pane_g1

0x13e1,	// (0x000348d3) call5_swipe_1_pane_g2_ParamLimits

0x13e1,	// (0x000348d3) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x000431b6) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x000431b6) call5_swipe_1_pane_g

0x13ed,	// (0x000348df) call5_swipe_1_pane_t1_ParamLimits

0x13ed,	// (0x000348df) call5_swipe_1_pane_t1

0xe91b,	// (0x00041e0d) call5_swipe_2_pane_g1_ParamLimits

0xe91b,	// (0x00041e0d) call5_swipe_2_pane_g1

0x1402,	// (0x000348f4) call5_swipe_2_pane_g2_ParamLimits

0x1402,	// (0x000348f4) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000431bb) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000431bb) call5_swipe_2_pane_g

0x140e,	// (0x00034900) call5_swipe_2_pane_t1_ParamLimits

0x140e,	// (0x00034900) call5_swipe_2_pane_t1

0x1423,	// (0x00034915) sc_swipe_pane_g1_ParamLimits

0x1423,	// (0x00034915) sc_swipe_pane_g1

0x1430,	// (0x00034922) sc_swipe_pane_g2_ParamLimits

0x1430,	// (0x00034922) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000431c0) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000431c0) sc_swipe_pane_g

0x143c,	// (0x0003492e) sc_swipe_pane_t1_ParamLimits

0x143c,	// (0x0003492e) sc_swipe_pane_t1

0x22de,	// (0x000357d0) main_cmail_launcher_pane

0xaf3b,	// (0x0003e42d) aid_size_cell_cmail_l_ParamLimits

0xaf3b,	// (0x0003e42d) aid_size_cell_cmail_l

0xaf4b,	// (0x0003e43d) grid_cmail_l_pane_ParamLimits

0xaf4b,	// (0x0003e43d) grid_cmail_l_pane

0xaf5b,	// (0x0003e44d) cell_cmail_l_pane_ParamLimits

0xaf5b,	// (0x0003e44d) cell_cmail_l_pane

0xaf6f,	// (0x0003e461) cell_cmail_l_pane_g1_ParamLimits

0xaf6f,	// (0x0003e461) cell_cmail_l_pane_g1

0xaf7b,	// (0x0003e46d) cell_cmail_l_pane_t1_ParamLimits

0xaf7b,	// (0x0003e46d) cell_cmail_l_pane_t1

0x1451,	// (0x00034943) cell_cmail_l_pane_t2_ParamLimits

0x1451,	// (0x00034943) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000431c5) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000431c5) cell_cmail_l_pane_t

0xde7c,	// (0x0004136e) grid_highlight_pane_cp018_ParamLimits

0xde7c,	// (0x0004136e) grid_highlight_pane_cp018

0x448c,	// (0x0003797e) main2_pane_ParamLimits

0x448c,	// (0x0003797e) main2_pane

0xc451,	// (0x0003f943) popup_sp_fs_action_menu_bg_pane_g1

0xc459,	// (0x0003f94b) popup_sp_fs_action_menu_bg_pane_g2

0xc461,	// (0x0003f953) popup_sp_fs_action_menu_bg_pane_g3

0xc469,	// (0x0003f95b) popup_sp_fs_action_menu_bg_pane_g4

0xc471,	// (0x0003f963) popup_sp_fs_action_menu_bg_pane_g5

0xc479,	// (0x0003f96b) popup_sp_fs_action_menu_bg_pane_g6

0xc481,	// (0x0003f973) popup_sp_fs_action_menu_bg_pane_g7

0xc489,	// (0x0003f97b) popup_sp_fs_action_menu_bg_pane_g8

0xc491,	// (0x0003f983) popup_sp_fs_action_menu_bg_pane_g9

0xc499,	// (0x0003f98b) popup_sp_fs_action_menu_bg_pane_g10

0xc499,	// (0x0003f98b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0004268a) popup_sp_fs_action_menu_bg_pane_g

0x3190,	// (0x00036682) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t3_g3_g1

0x319c,	// (0x0003668e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_t3_g3_g2

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0004273a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0004273a) list_medium_line_x2_t3_g3_g

0x31b4,	// (0x000366a6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31b4,	// (0x000366a6) list_medium_line_x2_t3_g3_t1

0x31c9,	// (0x000366bb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31c9,	// (0x000366bb) list_medium_line_x2_t3_g3_t2

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00042741) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00042741) list_medium_line_x2_t3_g3_t

0x3190,	// (0x00036682) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t3_g2_g1

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00042748) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00042748) list_medium_line_x2_t3_g2_g

0x31f0,	// (0x000366e2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31f0,	// (0x000366e2) list_medium_line_x2_t3_g2_t1

0x3206,	// (0x000366f8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3206,	// (0x000366f8) list_medium_line_x2_t3_g2_t2

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0004274d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0004274d) list_medium_line_x2_t3_g2_t

0x3190,	// (0x00036682) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t4_g4_g1

0x3218,	// (0x0003670a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3218,	// (0x0003670a) list_medium_line_x2_t4_g4_g2

0x319c,	// (0x0003668e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_t4_g4_g3

0x3224,	// (0x00036716) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3224,	// (0x00036716) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00042754) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00042754) list_medium_line_x2_t4_g4_g

0x3230,	// (0x00036722) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3230,	// (0x00036722) list_medium_line_x2_t4_g4_t1

0x324a,	// (0x0003673c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x324a,	// (0x0003673c) list_medium_line_x2_t4_g4_t2

0x3260,	// (0x00036752) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3260,	// (0x00036752) list_medium_line_x2_t4_g4_t3

0x3275,	// (0x00036767) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3275,	// (0x00036767) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0004275d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0004275d) list_medium_line_x2_t4_g4_t

0x3190,	// (0x00036682) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t2_g4_g1

0x3218,	// (0x0003670a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3218,	// (0x0003670a) list_medium_line_x2_t2_g4_g2

0x319c,	// (0x0003668e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_t2_g4_g3

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000427c4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000427c4) list_medium_line_x2_t2_g4_g

0x3287,	// (0x00036779) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3287,	// (0x00036779) list_medium_line_x2_t2_g4_t1

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000427cd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000427cd) list_medium_line_x2_t2_g4_t

0x3190,	// (0x00036682) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t2_g3_g1

0x319c,	// (0x0003668e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_t2_g3_g2

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0004273a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0004273a) list_medium_line_x2_t2_g3_g

0x329c,	// (0x0003678e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x329c,	// (0x0003678e) list_medium_line_x2_t2_g3_t1

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000427d2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000427d2) list_medium_line_x2_t2_g3_t

0x628a,	// (0x0003977c) main_sp_fs_list_pane_ParamLimits

0x628a,	// (0x0003977c) main_sp_fs_list_pane

0x6296,	// (0x00039788) sp_fs_scroll_pane_ParamLimits

0x6296,	// (0x00039788) sp_fs_scroll_pane

0x32b1,	// (0x000367a3) list_medium_line_x2_t3_t1

0x32c1,	// (0x000367b3) list_medium_line_x2_t3_t2

0x32cf,	// (0x000367c1) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0004281d) list_medium_line_x2_t3_t

0x32dd,	// (0x000367cf) list_medium_line_x3_t4_t1

0x32ed,	// (0x000367df) list_medium_line_x3_t4_t2

0x32fb,	// (0x000367ed) list_medium_line_x3_t4_t3

0x32cf,	// (0x000367c1) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00042824) list_medium_line_x3_t4_t

0x3309,	// (0x000367fb) list_medium_line_x4_t5_t1

0x3319,	// (0x0003680b) list_medium_line_x4_t5_t2

0x32fb,	// (0x000367ed) list_medium_line_x4_t5_t3

0x3327,	// (0x00036819) list_medium_line_x4_t5_t4

0x32cf,	// (0x000367c1) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0004282d) list_medium_line_x4_t5_t

0x3190,	// (0x00036682) list_medium_line_t4_g4_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_t4_g4_g1

0x3224,	// (0x00036716) list_medium_line_t4_g4_g2_ParamLimits

0x3224,	// (0x00036716) list_medium_line_t4_g4_g2

0x3335,	// (0x00036827) list_medium_line_t4_g4_g3_ParamLimits

0x3335,	// (0x00036827) list_medium_line_t4_g4_g3

0x31a8,	// (0x0003669a) list_medium_line_t4_g4_g4_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00042838) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00042838) list_medium_line_t4_g4_g

0x3341,	// (0x00036833) list_medium_line_t4_g4_t1_ParamLimits

0x3341,	// (0x00036833) list_medium_line_t4_g4_t1

0x3356,	// (0x00036848) list_medium_line_t4_g4_t2_ParamLimits

0x3356,	// (0x00036848) list_medium_line_t4_g4_t2

0x336b,	// (0x0003685d) list_medium_line_t4_g4_t3_ParamLimits

0x336b,	// (0x0003685d) list_medium_line_t4_g4_t3

0x31db,	// (0x000366cd) list_medium_line_t4_g4_t4_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00042841) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00042841) list_medium_line_t4_g4_t

0x63b3,	// (0x000398a5) chi_dic_find_pane_g1

0x7312,	// (0x0003a804) main_tport_pane

0x3615,	// (0x00036b07) list_medium_line_plain_t1

0x3623,	// (0x00036b15) list_medium_line_t2_g2_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t2_g2_g1

0x362f,	// (0x00036b21) list_medium_line_t2_g2_g2_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00042efd) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00042efd) list_medium_line_t2_g2_g

0x363b,	// (0x00036b2d) list_medium_line_t2_g2_t1_ParamLimits

0x363b,	// (0x00036b2d) list_medium_line_t2_g2_t1

0x3655,	// (0x00036b47) list_medium_line_t2_g2_t2_ParamLimits

0x3655,	// (0x00036b47) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00042f02) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00042f02) list_medium_line_t2_g2_t

0x3874,	// (0x00036d66) aid_sp_fs_list_icon_a_sm

0x387c,	// (0x00036d6e) aid_sp_fs_list_icon_d

0x1c28,	// (0x0003511a) aid_sp_fs_text_primary

0x1978,	// (0x00034e6a) aid_sp_fs_text_secondary

0x3884,	// (0x00036d76) list_medium_line

0x3884,	// (0x00036d76) list_medium_line_g2

0x3884,	// (0x00036d76) list_medium_line_g3

0x3884,	// (0x00036d76) list_medium_line_plain

0x3884,	// (0x00036d76) list_medium_line_plain_t2

0x3884,	// (0x00036d76) list_medium_line_plain_t3

0x3884,	// (0x00036d76) list_medium_line_right_icon

0x3884,	// (0x00036d76) list_medium_line_right_iconx2

0x3884,	// (0x00036d76) list_medium_line_t2

0x3884,	// (0x00036d76) list_medium_line_t2_g2

0x3884,	// (0x00036d76) list_medium_line_t2_g3

0x3884,	// (0x00036d76) list_medium_line_t2_right_icon

0x3884,	// (0x00036d76) list_medium_line_t2_right_iconx2

0x3884,	// (0x00036d76) list_medium_line_t3

0x3884,	// (0x00036d76) list_medium_line_t3_g2

0x3884,	// (0x00036d76) list_medium_line_t3_g3

0x3884,	// (0x00036d76) list_medium_line_t3_right_iconx2

0x388d,	// (0x00036d7f) list_medium_line_t4_g4

0x3896,	// (0x00036d88) list_medium_line_x2

0x3896,	// (0x00036d88) list_medium_line_x2_t2_g2

0x3896,	// (0x00036d88) list_medium_line_x2_t2_g3

0x3896,	// (0x00036d88) list_medium_line_x2_t2_g4

0x3896,	// (0x00036d88) list_medium_line_x2_t3

0x3896,	// (0x00036d88) list_medium_line_x2_t3_g2

0x3896,	// (0x00036d88) list_medium_line_x2_t3_g3

0x3896,	// (0x00036d88) list_medium_line_x2_t3_g4

0x3896,	// (0x00036d88) list_medium_line_x2_t4_g2

0x3896,	// (0x00036d88) list_medium_line_x2_t4_g4

0x389f,	// (0x00036d91) list_medium_line_x3

0x389f,	// (0x00036d91) list_medium_line_x3_t4

0x389f,	// (0x00036d91) list_medium_line_x3_t4_g4

0x388d,	// (0x00036d7f) list_medium_line_x4_t4

0x388d,	// (0x00036d7f) list_medium_line_x4_t4_g7

0x388d,	// (0x00036d7f) list_medium_line_x4_t5

0x38a8,	// (0x00036d9a) list_single_fs_dyc_pane_ParamLimits

0x38a8,	// (0x00036d9a) list_single_fs_dyc_pane

0x3190,	// (0x00036682) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x4_t4_g7_g1

0x38c4,	// (0x00036db6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x38c4,	// (0x00036db6) list_medium_line_x4_t4_g7_g2

0x38d0,	// (0x00036dc2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x38d0,	// (0x00036dc2) list_medium_line_x4_t4_g7_g3

0x38df,	// (0x00036dd1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x38df,	// (0x00036dd1) list_medium_line_x4_t4_g7_g4

0x38eb,	// (0x00036ddd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x38eb,	// (0x00036ddd) list_medium_line_x4_t4_g7_g5

0x38fa,	// (0x00036dec) list_medium_line_x4_t4_g7_g6_ParamLimits

0x38fa,	// (0x00036dec) list_medium_line_x4_t4_g7_g6

0x3909,	// (0x00036dfb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3909,	// (0x00036dfb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000430cd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000430cd) list_medium_line_x4_t4_g7_g

0x3915,	// (0x00036e07) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3915,	// (0x00036e07) list_medium_line_x4_t4_g7_t1

0x392a,	// (0x00036e1c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x392a,	// (0x00036e1c) list_medium_line_x4_t4_g7_t2

0x393f,	// (0x00036e31) list_medium_line_x4_t4_g7_t3_ParamLimits

0x393f,	// (0x00036e31) list_medium_line_x4_t4_g7_t3

0x3954,	// (0x00036e46) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3954,	// (0x00036e46) list_medium_line_x4_t4_g7_t4

0x3966,	// (0x00036e58) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3966,	// (0x00036e58) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x000430dc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x000430dc) list_medium_line_x4_t4_g7_t

0x3978,	// (0x00036e6a) list_single_dyc_row_pane_ParamLimits

0x3978,	// (0x00036e6a) list_single_dyc_row_pane

0xaeeb,	// (0x0003e3dd) call5_gesture_pane_ParamLimits

0xaeeb,	// (0x0003e3dd) call5_gesture_pane

0xaf1f,	// (0x0003e411) call5_windows_pane_ParamLimits

0xaf1f,	// (0x0003e411) call5_windows_pane

0xaf91,	// (0x0003e483) call5_swipe_1_pane_cp_ParamLimits

0xaf91,	// (0x0003e483) call5_swipe_1_pane_cp

0xaf9d,	// (0x0003e48f) call5_swipe_2_pane_cp_ParamLimits

0xaf9d,	// (0x0003e48f) call5_swipe_2_pane_cp

0xce99,	// (0x0004038b) call5_image_pane_cp

0xafa9,	// (0x0003e49b) popup_call5_audio_first_window_cp_ParamLimits

0xafa9,	// (0x0003e49b) popup_call5_audio_first_window_cp

0x1423,	// (0x00034915) call5_swipe_1_pane_g1_cp_ParamLimits

0x1423,	// (0x00034915) call5_swipe_1_pane_g1_cp

0x1463,	// (0x00034955) call5_swipe_1_pane_g2_cp

0x143c,	// (0x0003492e) call5_swipe_1_pane_t1_cp_ParamLimits

0x143c,	// (0x0003492e) call5_swipe_1_pane_t1_cp

0x1423,	// (0x00034915) call5_swipe_2_pane_g1_cp_ParamLimits

0x1423,	// (0x00034915) call5_swipe_2_pane_g1_cp

0x146b,	// (0x0003495d) call5_swipe_2_pane_g2_cp

0x1473,	// (0x00034965) call5_swipe_2_pane_t1_cp_ParamLimits

0x1473,	// (0x00034965) call5_swipe_2_pane_t1_cp

0xde7c,	// (0x0004136e) main_sp_fs_email_pane

0x1488,	// (0x0003497a) main_sp_fs_listscroll_pane_te

0x3a0f,	// (0x00036f01) popup_sp_fs_action_menu_pane_ParamLimits

0x3a0f,	// (0x00036f01) popup_sp_fs_action_menu_pane

0xe6b8,	// (0x00041baa) bg_sp_fs_ctrlbar_pane_g1

0x14d5,	// (0x000349c7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x14de,	// (0x000349d0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x14e7,	// (0x000349d9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe6b8,	// (0x00041baa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000431ca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe48c,	// (0x0004197e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe48c,	// (0x0004197e) bg_sp_fs_ctrlbar_ddmenu_pane

0x14f0,	// (0x000349e2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x14f0,	// (0x000349e2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x14fc,	// (0x000349ee) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x14fc,	// (0x000349ee) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000431d3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000431d3) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1508,	// (0x000349fa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1508,	// (0x000349fa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3a53,	// (0x00036f45) list_medium_line_t2_right_icon_g1

0x3a5b,	// (0x00036f4d) list_medium_line_t2_right_icon_t1

0x3a6b,	// (0x00036f5d) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000431d8) list_medium_line_t2_right_icon_t

0xe29f,	// (0x00041791) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe29f,	// (0x00041791) bg_sp_fs_ctrlbar_pane

0xb00e,	// (0x0003e500) main_sp_fs_ctrlbar_button_pane_cp01

0xb016,	// (0x0003e508) main_sp_fs_ctrlbar_ddmenu_pane

0x1562,	// (0x00034a54) main_sp_fs_ctrlbar_pane_g1

0x156e,	// (0x00034a60) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000431dd) main_sp_fs_ctrlbar_pane_g

0x157a,	// (0x00034a6c) main_sp_fs_ctrlbar_pane_t1

0x3a79,	// (0x00036f6b) main_sp_fs_ctrlbar_pane

0x3a93,	// (0x00036f85) main_sp_fs_listscroll_pane_te_cp01

0x3aa4,	// (0x00036f96) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3aa4,	// (0x00036f96) popup_sp_fs_action_menu_pane_cp01

0xde7c,	// (0x0004136e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xde7c,	// (0x0004136e) bg_sp_fs_highlight_list_pane_cp01

0x3ace,	// (0x00036fc0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3ace,	// (0x00036fc0) sp_fs_action_menu_list_gene_pane_g1

0x15ae,	// (0x00034aa0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x15ae,	// (0x00034aa0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x000431e7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x000431e7) sp_fs_action_menu_list_gene_pane_g

0x3add,	// (0x00036fcf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3add,	// (0x00036fcf) sp_fs_action_menu_list_gene_pane_t1

0x3af5,	// (0x00036fe7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3af5,	// (0x00036fe7) sp_fs_action_menu_list_gene_pane

0x15f4,	// (0x00034ae6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x15f4,	// (0x00034ae6) popup_sp_fs_action_menu_bg_pane

0x3b14,	// (0x00037006) sp_fs_action_menu_list_pane_ParamLimits

0x3b14,	// (0x00037006) sp_fs_action_menu_list_pane

0x1624,	// (0x00034b16) sp_fs_scroll_pane_cp01_ParamLimits

0x1624,	// (0x00034b16) sp_fs_scroll_pane_cp01

0x3b34,	// (0x00037026) list_medium_line_plain_t2_t1

0x3b44,	// (0x00037036) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x000431ec) list_medium_line_plain_t2_t

0x3b52,	// (0x00037044) list_medium_line_plain_t3_t1

0x3b62,	// (0x00037054) list_medium_line_plain_t3_t2

0x3b70,	// (0x00037062) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x000431f1) list_medium_line_plain_t3_t

0x3190,	// (0x00036682) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t2_g2_g1

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00042748) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00042748) list_medium_line_x2_t2_g2_g

0x3341,	// (0x00036833) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3341,	// (0x00036833) list_medium_line_x2_t2_g2_t1

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x000431f8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x000431f8) list_medium_line_x2_t2_g2_t

0x3190,	// (0x00036682) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t4_g2_g1

0x3b7e,	// (0x00037070) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3b7e,	// (0x00037070) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x000431fd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x000431fd) list_medium_line_x2_t4_g2_g

0x3b90,	// (0x00037082) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3b90,	// (0x00037082) list_medium_line_x2_t4_g2_t1

0x3baa,	// (0x0003709c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3baa,	// (0x0003709c) list_medium_line_x2_t4_g2_t2

0x3bbf,	// (0x000370b1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3bbf,	// (0x000370b1) list_medium_line_x2_t4_g2_t3

0x31db,	// (0x000366cd) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x00043202) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x00043202) list_medium_line_x2_t4_g2_t

0x3bd4,	// (0x000370c6) list_medium_line_t3_right_iconx2_g1

0x3a53,	// (0x00036f45) list_medium_line_t3_right_iconx2_g2

0x3bdc,	// (0x000370ce) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x0004320b) list_medium_line_t3_right_iconx2_g

0x3be4,	// (0x000370d6) list_medium_line_t3_right_iconx2_t1

0x3bf4,	// (0x000370e6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x00043212) list_medium_line_t3_right_iconx2_t

0x3190,	// (0x00036682) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x3_t4_g4_g1

0x319c,	// (0x0003668e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x3_t4_g4_g2

0x3224,	// (0x00036716) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3224,	// (0x00036716) list_medium_line_x3_t4_g4_g3

0x3c02,	// (0x000370f4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3c02,	// (0x000370f4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x00043217) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x00043217) list_medium_line_x3_t4_g4_g

0x3c0e,	// (0x00037100) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3c0e,	// (0x00037100) list_medium_line_x3_t4_g4_t1

0x3c25,	// (0x00037117) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3c25,	// (0x00037117) list_medium_line_x3_t4_g4_t2

0x3356,	// (0x00036848) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3356,	// (0x00036848) list_medium_line_x3_t4_g4_t3

0x3c3a,	// (0x0003712c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3c3a,	// (0x0003712c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00043220) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00043220) list_medium_line_x3_t4_g4_t

0x3c57,	// (0x00037149) list_single_dyc_row_text_pane_t1_ParamLimits

0x3c57,	// (0x00037149) list_single_dyc_row_text_pane_t1

0x3c8e,	// (0x00037180) list_single_dyc_row_text_pane_t2_ParamLimits

0x3c8e,	// (0x00037180) list_single_dyc_row_text_pane_t2

0x3ce8,	// (0x000371da) list_single_dyc_row_text_pane_t3_ParamLimits

0x3ce8,	// (0x000371da) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00043229) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00043229) list_single_dyc_row_text_pane_t

0x3cfa,	// (0x000371ec) list_single_dyc_row_pane_g1_ParamLimits

0x3cfa,	// (0x000371ec) list_single_dyc_row_pane_g1

0x3d06,	// (0x000371f8) list_single_dyc_row_pane_g2_ParamLimits

0x3d06,	// (0x000371f8) list_single_dyc_row_pane_g2

0x3d12,	// (0x00037204) list_single_dyc_row_pane_g3_ParamLimits

0x3d12,	// (0x00037204) list_single_dyc_row_pane_g3

0x3d1e,	// (0x00037210) list_single_dyc_row_pane_g4_ParamLimits

0x3d1e,	// (0x00037210) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x00043230) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x00043230) list_single_dyc_row_pane_g

0x3d2a,	// (0x0003721c) list_single_dyc_row_text_pane_ParamLimits

0x3d2a,	// (0x0003721c) list_single_dyc_row_text_pane

0x22de,	// (0x000357d0) bg_sp_fs_scroll_pane

0x16dc,	// (0x00034bce) thumb_sp_fs_scroll_pane

0x3623,	// (0x00036b15) list_medium_line_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_g1

0x3d49,	// (0x0003723b) list_medium_line_t1_ParamLimits

0x3d49,	// (0x0003723b) list_medium_line_t1

0x3190,	// (0x00036682) list_medium_line_x2_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_g1

0x319c,	// (0x0003668e) list_medium_line_x2_g2_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00043239) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00043239) list_medium_line_x2_g

0x3d5e,	// (0x00037250) list_medium_line_x2_t1_ParamLimits

0x3d5e,	// (0x00037250) list_medium_line_x2_t1

0x3190,	// (0x00036682) list_medium_line_x3_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x3_g1

0x319c,	// (0x0003668e) list_medium_line_x3_g2_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00043239) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00043239) list_medium_line_x3_g

0x3d5e,	// (0x00037250) list_medium_line_x3_t1_ParamLimits

0x3d5e,	// (0x00037250) list_medium_line_x3_t1

0x1710,	// (0x00034c02) thumb_sp_fs_scroll_pane_g1

0x1719,	// (0x00034c0b) thumb_sp_fs_scroll_pane_g2

0x1722,	// (0x00034c14) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0004323e) thumb_sp_fs_scroll_pane_g

0x1710,	// (0x00034c02) bg_sp_fs_scroll_pane_g1

0x1719,	// (0x00034c0b) bg_sp_fs_scroll_pane_g2

0x1722,	// (0x00034c14) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0004323e) bg_sp_fs_scroll_pane_g

0x3190,	// (0x00036682) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3190,	// (0x00036682) list_medium_line_x2_t3_g4_g1

0x3218,	// (0x0003670a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3218,	// (0x0003670a) list_medium_line_x2_t3_g4_g2

0x319c,	// (0x0003668e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x319c,	// (0x0003668e) list_medium_line_x2_t3_g4_g3

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31a8,	// (0x0003669a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000427c4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000427c4) list_medium_line_x2_t3_g4_g

0x3d74,	// (0x00037266) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3d74,	// (0x00037266) list_medium_line_x2_t3_g4_t1

0x3d8a,	// (0x0003727c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3d8a,	// (0x0003727c) list_medium_line_x2_t3_g4_t2

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31db,	// (0x000366cd) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00043245) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00043245) list_medium_line_x2_t3_g4_t

0x3623,	// (0x00036b15) list_medium_line_g2_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_g2_g1

0x362f,	// (0x00036b21) list_medium_line_g2_g2_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00042efd) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00042efd) list_medium_line_g2_g

0x3da4,	// (0x00037296) list_medium_line_g2_t1_ParamLimits

0x3da4,	// (0x00037296) list_medium_line_g2_t1

0x3623,	// (0x00036b15) list_medium_line_t3_g2_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t3_g2_g1

0x362f,	// (0x00036b21) list_medium_line_t3_g2_g2_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00042efd) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00042efd) list_medium_line_t3_g2_g

0x3db9,	// (0x000372ab) list_medium_line_t3_g2_t1_ParamLimits

0x3db9,	// (0x000372ab) list_medium_line_t3_g2_t1

0x3dd0,	// (0x000372c2) list_medium_line_t3_g2_t2_ParamLimits

0x3dd0,	// (0x000372c2) list_medium_line_t3_g2_t2

0x3de5,	// (0x000372d7) list_medium_line_t3_g2_t3_ParamLimits

0x3de5,	// (0x000372d7) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x0004324c) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x0004324c) list_medium_line_t3_g2_t

0x3a53,	// (0x00036f45) list_medium_line_right_icon_g1

0x3dfa,	// (0x000372ec) list_medium_line_right_icon_t1

0x3623,	// (0x00036b15) list_medium_line_t2_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t2_g1

0x3e08,	// (0x000372fa) list_medium_line_t2_t1_ParamLimits

0x3e08,	// (0x000372fa) list_medium_line_t2_t1

0x3e22,	// (0x00037314) list_medium_line_t2_t2_ParamLimits

0x3e22,	// (0x00037314) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x00043253) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x00043253) list_medium_line_t2_t

0x3623,	// (0x00036b15) list_medium_line_t3_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t3_g1

0x3e37,	// (0x00037329) list_medium_line_t3_t1_ParamLimits

0x3e37,	// (0x00037329) list_medium_line_t3_t1

0x3e4e,	// (0x00037340) list_medium_line_t3_t2_ParamLimits

0x3e4e,	// (0x00037340) list_medium_line_t3_t2

0x3e63,	// (0x00037355) list_medium_line_t3_t3_ParamLimits

0x3e63,	// (0x00037355) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00043258) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00043258) list_medium_line_t3_t

0x3623,	// (0x00036b15) list_medium_line_g3_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_g3_g1

0x3e75,	// (0x00037367) list_medium_line_g3_g2_ParamLimits

0x3e75,	// (0x00037367) list_medium_line_g3_g2

0x362f,	// (0x00036b21) list_medium_line_g3_g3_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0004325f) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0004325f) list_medium_line_g3_g

0x3e81,	// (0x00037373) list_medium_line_g3_t1_ParamLimits

0x3e81,	// (0x00037373) list_medium_line_g3_t1

0x3623,	// (0x00036b15) list_medium_line_t2_g3_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t2_g3_g1

0x3e75,	// (0x00037367) list_medium_line_t2_g3_g2_ParamLimits

0x3e75,	// (0x00037367) list_medium_line_t2_g3_g2

0x362f,	// (0x00036b21) list_medium_line_t2_g3_g3_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0004325f) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0004325f) list_medium_line_t2_g3_g

0x3e96,	// (0x00037388) list_medium_line_t2_g3_t1_ParamLimits

0x3e96,	// (0x00037388) list_medium_line_t2_g3_t1

0x3eb0,	// (0x000373a2) list_medium_line_t2_g3_t2_ParamLimits

0x3eb0,	// (0x000373a2) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00043266) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00043266) list_medium_line_t2_g3_t

0x3623,	// (0x00036b15) list_medium_line_t3_g3_g1_ParamLimits

0x3623,	// (0x00036b15) list_medium_line_t3_g3_g1

0x3e75,	// (0x00037367) list_medium_line_t3_g3_g2_ParamLimits

0x3e75,	// (0x00037367) list_medium_line_t3_g3_g2

0x362f,	// (0x00036b21) list_medium_line_t3_g3_g3_ParamLimits

0x362f,	// (0x00036b21) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0004325f) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0004325f) list_medium_line_t3_g3_g

0x3ec5,	// (0x000373b7) list_medium_line_t3_g3_t1_ParamLimits

0x3ec5,	// (0x000373b7) list_medium_line_t3_g3_t1

0x3ed9,	// (0x000373cb) list_medium_line_t3_g3_t2_ParamLimits

0x3ed9,	// (0x000373cb) list_medium_line_t3_g3_t2

0x3eeb,	// (0x000373dd) list_medium_line_t3_g3_t3_ParamLimits

0x3eeb,	// (0x000373dd) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x0004326b) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x0004326b) list_medium_line_t3_g3_t

0x3bd4,	// (0x000370c6) list_medium_line_right_iconx2_g1

0x3a53,	// (0x00036f45) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x00043272) list_medium_line_right_iconx2_g

0x3efd,	// (0x000373ef) list_medium_line_right_iconx2_t1

0x3bd4,	// (0x000370c6) list_medium_line_t2_right_iconx2_g1

0x3a53,	// (0x00036f45) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x00043272) list_medium_line_t2_right_iconx2_g

0x3f0b,	// (0x000373fd) list_medium_line_t2_right_iconx2_t1

0x3f1b,	// (0x0003740d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00043277) list_medium_line_t2_right_iconx2_t

0x3f29,	// (0x0003741b) list_medium_line_x4_t4_t1

0x3f37,	// (0x00037429) list_medium_line_x4_t4_t2

0x3f47,	// (0x00037439) list_medium_line_x4_t4_t3

0x3f57,	// (0x00037449) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x0004327c) list_medium_line_x4_t4_t

0xb049,	// (0x0003e53b) tport_appsw_pane_ParamLimits

0xb049,	// (0x0003e53b) tport_appsw_pane

0xb055,	// (0x0003e547) tport_contact_pane_ParamLimits

0xb055,	// (0x0003e547) tport_contact_pane

0xb065,	// (0x0003e557) tport_listscroll_pane_ParamLimits

0xb065,	// (0x0003e557) tport_listscroll_pane

0xb075,	// (0x0003e567) cell_tport_appsw_pane_ParamLimits

0xb075,	// (0x0003e567) cell_tport_appsw_pane

0xe980,	// (0x00041e72) tport_appsw_pane_g1_ParamLimits

0xe980,	// (0x00041e72) tport_appsw_pane_g1

0x178b,	// (0x00034c7d) tport_contact_pane_g1

0x0f22,	// (0x00034414) tport_contact_pane_t1

0x1794,	// (0x00034c86) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x00043285) tport_contact_pane_t

0x17a2,	// (0x00034c94) list_tport_pane

0x17ab,	// (0x00034c9d) scroll_pane_cp_030

0x17bc,	// (0x00034cae) cell_tport_appsw_pane_g1

0x17cc,	// (0x00034cbe) cell_tport_appsw_pane_t1

0x22de,	// (0x000357d0) grid_highlight_pane_cp019

0xb0a0,	// (0x0003e592) list_tport_double_graphic_pane_ParamLimits

0xb0a0,	// (0x0003e592) list_tport_double_graphic_pane

0xde7c,	// (0x0004136e) list_highlight_pane_cp023_ParamLimits

0xde7c,	// (0x0004136e) list_highlight_pane_cp023

0xb0b2,	// (0x0003e5a4) list_tport_double_graphic_pane_g1_ParamLimits

0xb0b2,	// (0x0003e5a4) list_tport_double_graphic_pane_g1

0xb0bf,	// (0x0003e5b1) list_tport_double_graphic_pane_t1_ParamLimits

0xb0bf,	// (0x0003e5b1) list_tport_double_graphic_pane_t1

0xb0d4,	// (0x0003e5c6) list_tport_double_graphic_pane_t2_ParamLimits

0xb0d4,	// (0x0003e5c6) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x00043291) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x00043291) list_tport_double_graphic_pane_t

0x22de,	// (0x000357d0) main_cale_note_pane

0x952d,	// (0x0003ca1f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x952d,	// (0x0003ca1f) cell_vitu2_function_top_wide_pane_cp01

0xac36,	// (0x0003e128) wait_bar_pane_cp05_ParamLimits

0x22de,	// (0x000357d0) listscroll_cmail_pane

0x17e2,	// (0x00034cd4) list_cmail_pane

0xb0f0,	// (0x0003e5e2) list_cmail_body_pane

0xb10a,	// (0x0003e5fc) list_single_cmail_header_caption_pane

0xb12f,	// (0x0003e621) list_single_cmail_header_detail_pane_ParamLimits

0xb12f,	// (0x0003e621) list_single_cmail_header_detail_pane

0xb15f,	// (0x0003e651) list_single_cmail_header_caption_pane_t1

0x3f67,	// (0x00037459) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3f67,	// (0x00037459) list_single_cmail_header_detail_pane_g1

0x3f7d,	// (0x0003746f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3f7d,	// (0x0003746f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00043296) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00043296) list_single_cmail_header_detail_pane_g

0x3f89,	// (0x0003747b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3f89,	// (0x0003747b) list_single_cmail_header_detail_pane_t1

0x3fe3,	// (0x000374d5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3fe3,	// (0x000374d5) list_single_cmail_header_editor_pane_bg

0x10d1,	// (0x000345c3) list_cmail_body_pane_g1

0x1864,	// (0x00034d56) list_cmail_body_pane_t1

0x015f,	// (0x00033651) list_single_cmail_header_editor_pane_bg_g1

0xc7ae,	// (0x0003fca0) list_single_cmail_header_editor_pane_bg_g1_copy1

0x016f,	// (0x00033661) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0167,	// (0x00033659) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0418,	// (0x0003390a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x018f,	// (0x00033681) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x017f,	// (0x00033671) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0187,	// (0x00033679) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc78e,	// (0x0003fc80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb16d,	// (0x0003e65f) calenote_gesture_pane_ParamLimits

0xb16d,	// (0x0003e65f) calenote_gesture_pane

0xb187,	// (0x0003e679) calenote_window_pane_ParamLimits

0xb187,	// (0x0003e679) calenote_window_pane

0x1872,	// (0x00034d64) popup_note_window_cp01

0xb19f,	// (0x0003e691) calenote_swipe_1_pane_ParamLimits

0xb19f,	// (0x0003e691) calenote_swipe_1_pane

0xaf9d,	// (0x0003e48f) calenote_swipe_2_pane_ParamLimits

0xaf9d,	// (0x0003e48f) calenote_swipe_2_pane

0x1423,	// (0x00034915) calenote_swipe_1_pane_g1_ParamLimits

0x1423,	// (0x00034915) calenote_swipe_1_pane_g1

0x1430,	// (0x00034922) calenote_swipe_1_pane_g2_ParamLimits

0x1430,	// (0x00034922) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000431c0) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000431c0) calenote_swipe_1_pane_g

0x1884,	// (0x00034d76) calenote_swipe_1_pane_t1_ParamLimits

0x1884,	// (0x00034d76) calenote_swipe_1_pane_t1

0x1423,	// (0x00034915) calenote_swipe_2_pane_g1_ParamLimits

0x1423,	// (0x00034915) calenote_swipe_2_pane_g1

0x18a3,	// (0x00034d95) calenote_swipe_2_pane_g2_ParamLimits

0x18a3,	// (0x00034d95) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x000432a2) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x000432a2) calenote_swipe_2_pane_g

0x18af,	// (0x00034da1) calenote_swipe_2_pane_t1_ParamLimits

0x18af,	// (0x00034da1) calenote_swipe_2_pane_t1

0x22de,	// (0x000357d0) main_mup_navstr_pane

0x82dd,	// (0x0003b7cf) main_mup3_pane_t7_ParamLimits

0x82dd,	// (0x0003b7cf) main_mup3_pane_t7

0x8cb7,	// (0x0003c1a9) main_mp4_pane_g6_ParamLimits

0x8cb7,	// (0x0003c1a9) main_mp4_pane_g6

0x9029,	// (0x0003c51b) main_image3_pane_t4_ParamLimits

0x9029,	// (0x0003c51b) main_image3_pane_t4

0xb1b2,	// (0x0003e6a4) popup_navstr_preview_pane_ParamLimits

0xb1b2,	// (0x0003e6a4) popup_navstr_preview_pane

0xb1be,	// (0x0003e6b0) scroll_navstr_pane_ParamLimits

0xb1be,	// (0x0003e6b0) scroll_navstr_pane

0x22de,	// (0x000357d0) bg_popup_preview_window_pane_cp04

0x18d6,	// (0x00034dc8) popup_navstr_preview_pane_t1

0xb1ca,	// (0x0003e6bc) scroll_navstr_pane_g1_ParamLimits

0xb1ca,	// (0x0003e6bc) scroll_navstr_pane_g1

0xb1d7,	// (0x0003e6c9) scroll_navstr_pane_t1_ParamLimits

0xb1d7,	// (0x0003e6c9) scroll_navstr_pane_t1

0x187b,	// (0x00034d6d) bg_button_pane_cp014

0x187b,	// (0x00034d6d) bg_button_pane_cp030

0x39b5,	// (0x00036ea7) list_double_fisheye_pane_g4_ParamLimits

0x39b5,	// (0x00036ea7) list_double_fisheye_pane_g4

0x39c1,	// (0x00036eb3) list_double_fisheye_pane_g5_ParamLimits

0x39c1,	// (0x00036eb3) list_double_fisheye_pane_g5

0x17ea,	// (0x00034cdc) sp_fs_scroll_pane_cp03

0x1562,	// (0x00034a54) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x156e,	// (0x00034a60) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000431dd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x157a,	// (0x00034a6c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb0e6,	// (0x0003e5d8) sp_fs_scroll_pane_cp02

0xc4bc,	// (0x0003f9ae) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc4bc,	// (0x0003f9ae) popup_sp_fs_calendar_preview_list_single_pane

0x22de,	// (0x000357d0) main_cam6_pano_pane

0xde7c,	// (0x0004136e) main_mup3_pane_ParamLimits

0x22de,	// (0x000357d0) main_phacti_pane

0xab0b,	// (0x0003dffd) bg_button_pane_cp11

0xab23,	// (0x0003e015) main_mobtv_info_pane_g2_ParamLimits

0xab23,	// (0x0003e015) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0004313d) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0004313d) main_mobtv_info_pane_g

0xacd5,	// (0x0003e1c7) sc_clock_pane_t5_ParamLimits

0xacd5,	// (0x0003e1c7) sc_clock_pane_t5

0xad7c,	// (0x0003e26e) main_radioblah_pane_g1_ParamLimits

0x136f,	// (0x00034861) main_radioblah_pane_t3_ParamLimits

0x136f,	// (0x00034861) main_radioblah_pane_t3

0x1387,	// (0x00034879) main_radioblah_pane_t4_ParamLimits

0x1387,	// (0x00034879) main_radioblah_pane_t4

0xad9a,	// (0x0003e28c) main_radioblah_text_pane_ParamLimits

0xad9a,	// (0x0003e28c) main_radioblah_text_pane

0xada7,	// (0x0003e299) main_radioblah_info_pane_g1_ParamLimits

0xae3c,	// (0x0003e32e) main_radioblah_info_pane_t4_ParamLimits

0xae3c,	// (0x0003e32e) main_radioblah_info_pane_t4

0xde7c,	// (0x0004136e) main_sp_fs_calendar_pane

0xb1e9,	// (0x0003e6db) main_phacti_pane_g1

0xb1f1,	// (0x0003e6e3) phacti_note_pane_ParamLimits

0xb1f1,	// (0x0003e6e3) phacti_note_pane

0x18ed,	// (0x00034ddf) phacti_term_pane_ParamLimits

0x18ed,	// (0x00034ddf) phacti_term_pane

0x1902,	// (0x00034df4) phacti_note_pane_t1_ParamLimits

0x1902,	// (0x00034df4) phacti_note_pane_t1

0x3ff5,	// (0x000374e7) phacti_term_pane_g1

0x3ffd,	// (0x000374ef) phacti_term_pane_t1_ParamLimits

0x3ffd,	// (0x000374ef) phacti_term_pane_t1

0x194b,	// (0x00034e3d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc5af,	// (0x0003faa1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x000432ac) popup_sp_fs_calendar_preview_list_single_pane_g

0x1953,	// (0x00034e45) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1953,	// (0x00034e45) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1968,	// (0x00034e5a) aid_popup_sp_fs_bg_corner_pane

0xe6b8,	// (0x00041baa) popup_sp_fs_calendar_preview_bg_pane_g1

0x22de,	// (0x000357d0) popup_sp_fs_calendar_preview_bg_pane

0x1970,	// (0x00034e62) popup_sp_fs_calendar_preview_list_pane

0xde7c,	// (0x0004136e) bg_main_sp_fs_cale_pane_ParamLimits

0xde7c,	// (0x0004136e) bg_main_sp_fs_cale_pane

0x4027,	// (0x00037519) listscroll_cale_mrui_pane_ParamLimits

0x4027,	// (0x00037519) listscroll_cale_mrui_pane

0x403b,	// (0x0003752d) listscroll_sp_fs_schedule_track_pane

0x4044,	// (0x00037536) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4044,	// (0x00037536) main_sp_fs_ctrlbar_pane_cp01

0x19af,	// (0x00034ea1) main_sp_fs_ribbon_pane

0x19b7,	// (0x00034ea9) popup_sp_fs_cale_preview_window

0xb238,	// (0x0003e72a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb238,	// (0x0003e72a) list_single_sp_fs_schedule_track_pane

0x4610,	// (0x00037b02) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4610,	// (0x00037b02) bg_sp_fs_highlight_list_pane_cp03

0xb257,	// (0x0003e749) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb257,	// (0x0003e749) list_single_sp_fs_schedule_track_pane_g1

0xb263,	// (0x0003e755) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb263,	// (0x0003e755) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x000432b1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x000432b1) list_single_sp_fs_schedule_track_pane_g

0xb26f,	// (0x0003e761) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb26f,	// (0x0003e761) list_single_sp_fs_schedule_track_pane_t1

0xb287,	// (0x0003e779) sp_fs_schedule_track_pane_ParamLimits

0xb287,	// (0x0003e779) sp_fs_schedule_track_pane

0x19c9,	// (0x00034ebb) sp_fs_schedule_track_pane_g1

0x19d1,	// (0x00034ec3) sp_fs_schedule_track_pane_g2

0x19d9,	// (0x00034ecb) sp_fs_schedule_track_pane_g3

0x19e1,	// (0x00034ed3) sp_fs_schedule_track_pane_g4

0x19e9,	// (0x00034edb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x000432b6) sp_fs_schedule_track_pane_g

0x015f,	// (0x00033651) bg_sp_fs_schedule_viewer_highlight_g1

0xc7ae,	// (0x0003fca0) bg_sp_fs_schedule_viewer_highlight_g2

0x0167,	// (0x00033659) bg_sp_fs_schedule_viewer_highlight_g3

0x016f,	// (0x00033661) bg_sp_fs_schedule_viewer_highlight_g4

0x0418,	// (0x0003390a) bg_sp_fs_schedule_viewer_highlight_g5

0x017f,	// (0x00033671) bg_sp_fs_schedule_viewer_highlight_g6

0x0187,	// (0x00033679) bg_sp_fs_schedule_viewer_highlight_g7

0x018f,	// (0x00033681) bg_sp_fs_schedule_viewer_highlight_g8

0xc78e,	// (0x0003fc80) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x000432c1) bg_sp_fs_schedule_viewer_highlight_g

0x22de,	// (0x000357d0) bg_main_sp_fs_ribbon_pane

0xb297,	// (0x0003e789) main_sp_fs_ribbon_pane_g1

0x19f1,	// (0x00034ee3) main_sp_fs_ribbon_pane_t1

0xb2a0,	// (0x0003e792) main_sp_fs_ribbon_pane_t2

0x1a00,	// (0x00034ef2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x000432d4) main_sp_fs_ribbon_pane_t

0x1a0f,	// (0x00034f01) main_sp_fs_ribbon_scheduler_pane

0x1a17,	// (0x00034f09) bg_main_sp_fs_ribbon_pane_g1

0x1a20,	// (0x00034f12) bg_main_sp_fs_ribbon_pane_g2

0x1a29,	// (0x00034f1b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x000432db) bg_main_sp_fs_ribbon_pane_g

0x1a31,	// (0x00034f23) main_sp_fs_ribbon_scheduler_pane_g1

0x1a3a,	// (0x00034f2c) main_sp_fs_ribbon_scheduler_pane_g2

0x1a43,	// (0x00034f35) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x000432e2) main_sp_fs_ribbon_scheduler_pane_g

0x1a4c,	// (0x00034f3e) list_cale_mrui_pane

0xb2af,	// (0x0003e7a1) sp_fs_scroll_pane_cp07_ParamLimits

0xb2af,	// (0x0003e7a1) sp_fs_scroll_pane_cp07

0xb2c5,	// (0x0003e7b7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb2c5,	// (0x0003e7b7) bg_sp_fs_schedule_viewer_highlight

0x1a55,	// (0x00034f47) list_single_sp_fs_schedule_track_pane_cp01

0x1a5d,	// (0x00034f4f) list_sp_fs_schedule_track_pane

0x1a65,	// (0x00034f57) sp_fs_scroll_pane_cp06_ParamLimits

0x1a65,	// (0x00034f57) sp_fs_scroll_pane_cp06

0xe6b8,	// (0x00041baa) bgmain_sp_fs_calendar_pane_g1

0x4055,	// (0x00037547) list_single_cale_mrui_pane_ParamLimits

0x4055,	// (0x00037547) list_single_cale_mrui_pane

0x4080,	// (0x00037572) list_single_cale_mrui_row_pane_ParamLimits

0x4080,	// (0x00037572) list_single_cale_mrui_row_pane

0x408d,	// (0x0003757f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x408d,	// (0x0003757f) list_single_cale_mrui_row_pane_g1

0x40c5,	// (0x000375b7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x40c5,	// (0x000375b7) list_single_cale_mrui_row_pane_t1

0x40d7,	// (0x000375c9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x40d7,	// (0x000375c9) list_single_cale_mrui_row_pane_t2

0x413d,	// (0x0003762f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x413d,	// (0x0003762f) list_single_cale_mrui_row_pane_t3

0x416c,	// (0x0003765e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x416c,	// (0x0003765e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x000432f0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x000432f0) list_single_cale_mrui_row_pane_t

0x419b,	// (0x0003768d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x419b,	// (0x0003768d) list_single_cmail_header_editor_pane_bg_cp01

0x41bb,	// (0x000376ad) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x41bb,	// (0x000376ad) list_single_cmail_header_editor_pane_bg_cp02

0xb2d2,	// (0x0003e7c4) main_radioblah_text_pane_t1_ParamLimits

0xb2d2,	// (0x0003e7c4) main_radioblah_text_pane_t1

0x1b39,	// (0x0003502b) cam6_indi_pane_cp01

0x1b41,	// (0x00035033) cam6_mode_pane_cp01

0x1b49,	// (0x0003503b) cam6_pano_pane

0x1b52,	// (0x00035044) cam6_zoom_pane_cp01

0x1b5a,	// (0x0003504c) cam6_pano_image_pane

0x1b65,	// (0x00035057) cam6_pano_pane_g1

0x10d1,	// (0x000345c3) cam6_pano_pane_g2

0x1b6e,	// (0x00035060) cam6_pano_pane_g3

0x1b77,	// (0x00035069) cam6_pano_pane_g4

0xec51,	// (0x00042143) cam6_pano_pane_g5

0x1b80,	// (0x00035072) cam6_pano_pane_g6

0x1b8a,	// (0x0003507c) cam6_pano_pane_g7

0x1b92,	// (0x00035084) cam6_pano_pane_g8

0x1b9b,	// (0x0003508d) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x000432f9) cam6_pano_pane_g

0x22de,	// (0x000357d0) main_browser_tag_pane

0x18ce,	// (0x00034dc0) grid_navstr_albumart_pane

0x1ba6,	// (0x00035098) cell_navstr_albumart_pane_ParamLimits

0x1ba6,	// (0x00035098) cell_navstr_albumart_pane

0x1bc9,	// (0x000350bb) cell_navstr_albumart_pane_g1

0xe0bc,	// (0x000415ae) cell_navstr_albumart_pane_g2

0xe0cc,	// (0x000415be) cell_navstr_albumart_pane_g3

0xe0c4,	// (0x000415b6) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x0004330c) cell_navstr_albumart_pane_g

0xb2ed,	// (0x0003e7df) bt_list_pane_ParamLimits

0xb2ed,	// (0x0003e7df) bt_list_pane

0xb30d,	// (0x0003e7ff) bt_list_pane_t1

0xb31c,	// (0x0003e80e) bt_list_pane_t2

0x0001,

0xfe23,	// (0x00043315) bt_list_pane_t

0x22de,	// (0x000357d0) main_cale_prevew_pane

0xb32b,	// (0x0003e81d) popup_cale_preview_window_ParamLimits

0xb32b,	// (0x0003e81d) popup_cale_preview_window

0xde7c,	// (0x0004136e) bg_popup_preview_window_pane_cp05_ParamLimits

0xde7c,	// (0x0004136e) bg_popup_preview_window_pane_cp05

0x1bd1,	// (0x000350c3) list_cale_preview_pane_ParamLimits

0x1bd1,	// (0x000350c3) list_cale_preview_pane

0xb344,	// (0x0003e836) list_double_cale_preview_pane_ParamLimits

0xb344,	// (0x0003e836) list_double_cale_preview_pane

0xb356,	// (0x0003e848) list_single_cale_preview_pane_ParamLimits

0xb356,	// (0x0003e848) list_single_cale_preview_pane

0xb36c,	// (0x0003e85e) list_single_cale_preview_pane_g1

0xb374,	// (0x0003e866) list_single_cale_preview_pane_t1_ParamLimits

0xb374,	// (0x0003e866) list_single_cale_preview_pane_t1

0xb389,	// (0x0003e87b) list_double_cale_preview_pane_g1

0xb391,	// (0x0003e883) list_double_cale_preview_pane_t1_ParamLimits

0xb391,	// (0x0003e883) list_double_cale_preview_pane_t1

0xb3a6,	// (0x0003e898) list_double_cale_preview_pane_t2_ParamLimits

0xb3a6,	// (0x0003e898) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x0004331a) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x0004331a) list_double_cale_preview_pane_t

0x22de,	// (0x000357d0) main_ezdial_pane

0xde7c,	// (0x0004136e) main_sp_fs_email_pane_ParamLimits

0xafb7,	// (0x0003e4a9) cmail_ddmenu_btn01_pane_ParamLimits

0xafb7,	// (0x0003e4a9) cmail_ddmenu_btn01_pane

0xafd4,	// (0x0003e4c6) cmail_ddmenu_btn02_pane_ParamLimits

0xafd4,	// (0x0003e4c6) cmail_ddmenu_btn02_pane

0xaff2,	// (0x0003e4e4) cmail_ddmenu_btn03_pane_ParamLimits

0xaff2,	// (0x0003e4e4) cmail_ddmenu_btn03_pane

0x3a79,	// (0x00036f6b) main_sp_fs_ctrlbar_pane_ParamLimits

0x3a93,	// (0x00036f85) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb0f0,	// (0x0003e5e2) list_cmail_body_pane_ParamLimits

0x17fa,	// (0x00034cec) bg_button_pane_cp12

0x180f,	// (0x00034d01) list_single_cmail_header_detail_pane_g3_ParamLimits

0x180f,	// (0x00034d01) list_single_cmail_header_detail_pane_g3

0x3fbf,	// (0x000374b1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3fbf,	// (0x000374b1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x0004329d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x0004329d) list_single_cmail_header_detail_pane_t

0x4012,	// (0x00037504) phacti_term_pane_t2_ParamLimits

0x4012,	// (0x00037504) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x000432a7) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x000432a7) phacti_term_pane_t

0x1bdd,	// (0x000350cf) aid_size_list_single_double

0xb3be,	// (0x0003e8b0) popup_ezdial_listscroll_window

0xb3df,	// (0x0003e8d1) popup_number_entry_window_cp01

0xce99,	// (0x0004038b) bg_popup_call_pane_cp09

0x1be9,	// (0x000350db) ezdial_list_pane

0x1bf1,	// (0x000350e3) scroll_pane_cp23

0xe48c,	// (0x0004197e) bg_button_pane_cp028_ParamLimits

0xe48c,	// (0x0004197e) bg_button_pane_cp028

0xb3ed,	// (0x0003e8df) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb3ed,	// (0x0003e8df) cmail_ddmenu_btn01_pane_g1

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x0004331f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x0004331f) cmail_ddmenu_btn01_pane_g

0x1bf9,	// (0x000350eb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1bf9,	// (0x000350eb) cmail_ddmenu_btn01_pane_t1

0xe29f,	// (0x00041791) bg_button_pane_cp029_ParamLimits

0xe29f,	// (0x00041791) bg_button_pane_cp029

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn02_pane_g1

0xb417,	// (0x0003e909) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb417,	// (0x0003e909) cmail_ddmenu_btn02_pane_t1

0x4610,	// (0x00037b02) bg_button_pane_cp031_ParamLimits

0x4610,	// (0x00037b02) bg_button_pane_cp031

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb3ff,	// (0x0003e8f1) cmail_ddmenu_btn03_pane_g1

0xb417,	// (0x0003e909) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb417,	// (0x0003e909) cmail_ddmenu_btn03_pane_t1

0x8ed4,	// (0x0003c3c6) cell_dialer2_keypad_pane_t1_ParamLimits

0x8eee,	// (0x0003c3e0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8eee,	// (0x0003c3e0) cell_dialer2_keypad_pane_t1_copy1

0xa990,	// (0x0003de82) ncimui_group_button_pane

0xde7c,	// (0x0004136e) main_sp_fs_calendar_pane_ParamLimits

0xb10a,	// (0x0003e5fc) list_single_cmail_header_caption_pane_ParamLimits

0x1978,	// (0x00034e6a) aid_recal_txt_sm_pane

0x22de,	// (0x000357d0) mian_recal_day_pane

0x19b7,	// (0x00034ea9) popup_sp_fs_cale_preview_window_ParamLimits

0x22de,	// (0x000357d0) list_recal_day_pane

0x1c31,	// (0x00035123) list_single_recal_day_pane_ParamLimits

0x1c31,	// (0x00035123) list_single_recal_day_pane

0x1c43,	// (0x00035135) list_single_recal_day_pane_g1_ParamLimits

0x1c43,	// (0x00035135) list_single_recal_day_pane_g1

0x1c4f,	// (0x00035141) list_single_recal_day_pane_g2_ParamLimits

0x1c4f,	// (0x00035141) list_single_recal_day_pane_g2

0x1c5f,	// (0x00035151) list_single_recal_day_pane_g3_ParamLimits

0x1c5f,	// (0x00035151) list_single_recal_day_pane_g3

0xb43b,	// (0x0003e92d) list_single_recal_day_pane_g4_ParamLimits

0xb43b,	// (0x0003e92d) list_single_recal_day_pane_g4

0x1c6b,	// (0x0003515d) list_single_recal_day_pane_g5_ParamLimits

0x1c6b,	// (0x0003515d) list_single_recal_day_pane_g5

0x1c7b,	// (0x0003516d) list_single_recal_day_pane_g6_ParamLimits

0x1c7b,	// (0x0003516d) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x0004332e) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x0004332e) list_single_recal_day_pane_g

0x1c92,	// (0x00035184) list_single_recal_day_pane_t1

0x1ca4,	// (0x00035196) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x00043339) list_single_recal_day_pane_t

0xb45b,	// (0x0003e94d) ncimui_query_button_pane_ParamLimits

0xb45b,	// (0x0003e94d) ncimui_query_button_pane

0xb46b,	// (0x0003e95d) ncimui_query_button_pane_t1_ParamLimits

0xb46b,	// (0x0003e95d) ncimui_query_button_pane_t1

0x1cb9,	// (0x000351ab) ncimui_query_button_pane_t2_ParamLimits

0x1cb9,	// (0x000351ab) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x0004333e) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x0004333e) ncimui_query_button_pane_t

0xb47e,	// (0x0003e970) query_button_pane_ParamLimits

0xb47e,	// (0x0003e970) query_button_pane

0x22de,	// (0x000357d0) bg_button_pane_cp0028

0x1ccc,	// (0x000351be) query_button_pane_t1

0x7312,	// (0x0003a804) main_tport_pane_ParamLimits

0xb020,	// (0x0003e512) bg_popup_window_pane_cp01_ParamLimits

0xb020,	// (0x0003e512) bg_popup_window_pane_cp01

0xb02d,	// (0x0003e51f) heading_pane_cp08_ParamLimits

0xb02d,	// (0x0003e51f) heading_pane_cp08

0xb03b,	// (0x0003e52d) heading_pane_cp07_ParamLimits

0xb03b,	// (0x0003e52d) heading_pane_cp07

0x17bc,	// (0x00034cae) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x0004328a) cell_tport_appsw_pane_g

0x339c,	// (0x0003688e) input_candi_list_open_g1

0xc955,	// (0x0003fe47) list_cale_time_pane_g6_ParamLimits

0xc955,	// (0x0003fe47) list_cale_time_pane_g6

0x7d92,	// (0x0003b284) aid_size_touch_calib_1_ParamLimits

0x7d92,	// (0x0003b284) aid_size_touch_calib_1

0x7d9e,	// (0x0003b290) aid_size_touch_calib_2_ParamLimits

0x7d9e,	// (0x0003b290) aid_size_touch_calib_2

0x7dac,	// (0x0003b29e) aid_size_touch_calib_3_ParamLimits

0x7dac,	// (0x0003b29e) aid_size_touch_calib_3

0x7dbc,	// (0x0003b2ae) aid_size_touch_calib_4_ParamLimits

0x7dbc,	// (0x0003b2ae) aid_size_touch_calib_4

0x7dca,	// (0x0003b2bc) main_touch_calib_button_group_pane_ParamLimits

0x7dca,	// (0x0003b2bc) main_touch_calib_button_group_pane

0x7dd8,	// (0x0003b2ca) main_touch_calib_pane_g1_ParamLimits

0x7de4,	// (0x0003b2d6) main_touch_calib_pane_g2_ParamLimits

0x7df0,	// (0x0003b2e2) main_touch_calib_pane_g3_ParamLimits

0x7dfc,	// (0x0003b2ee) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00042c53) main_touch_calib_pane_g_ParamLimits

0x7e08,	// (0x0003b2fa) main_touch_calib_pane_t1_ParamLimits

0x7e1f,	// (0x0003b311) main_touch_calib_pane_t2_ParamLimits

0x7e36,	// (0x0003b328) main_touch_calib_pane_t3_ParamLimits

0x7e4a,	// (0x0003b33c) main_touch_calib_pane_t4_ParamLimits

0x7e5e,	// (0x0003b350) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00042c5c) main_touch_calib_pane_t_ParamLimits

0xea27,	// (0x00041f19) list_single_fp_cale_pane_g3_ParamLimits

0xea27,	// (0x00041f19) list_single_fp_cale_pane_g3

0xde7c,	// (0x0004136e) bg_button_pane_cp012_ParamLimits

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp03_ParamLimits

0x9c90,	// (0x0003d182) cell_vitu2_function_top_pane_g1_ParamLimits

0xde7c,	// (0x0004136e) bg_vkb2_func_pane_cp04_ParamLimits

0xa918,	// (0x0003de0a) main_ncimui_button_group_pane_ParamLimits

0xa918,	// (0x0003de0a) main_ncimui_button_group_pane

0xa97e,	// (0x0003de70) main_ncimui_pane_t3_ParamLimits

0xa97e,	// (0x0003de70) main_ncimui_pane_t3

0x18e4,	// (0x00034dd6) phacti_button_group_pane

0x1bdd,	// (0x000350cf) aid_size_list_single_double_ParamLimits

0xb3be,	// (0x0003e8b0) popup_ezdial_listscroll_window_ParamLimits

0xb3df,	// (0x0003e8d1) popup_number_entry_window_cp01_ParamLimits

0xb48b,	// (0x0003e97d) phacti_button_pane_ParamLimits

0xb48b,	// (0x0003e97d) phacti_button_pane

0x22de,	// (0x000357d0) bg_button_pane_cp14

0x1cda,	// (0x000351cc) phacti_button_pane_t1

0xb49c,	// (0x0003e98e) main_touch_calib_button_pane_ParamLimits

0xb49c,	// (0x0003e98e) main_touch_calib_button_pane

0xc3b8,	// (0x0003f8aa) bg_button_pane_cp18_ParamLimits

0xc3b8,	// (0x0003f8aa) bg_button_pane_cp18

0x1ce8,	// (0x000351da) main_touch_calib_button_pane_t1_ParamLimits

0x1ce8,	// (0x000351da) main_touch_calib_button_pane_t1

0x1cfe,	// (0x000351f0) main_touch_calib_button_pane_t2_ParamLimits

0x1cfe,	// (0x000351f0) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x00043343) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x00043343) main_touch_calib_button_pane_t

0x22de,	// (0x000357d0) cell_ncimui_button_pane

0x22de,	// (0x000357d0) bg_button_pane_cp032

0x1d1c,	// (0x0003520e) cell_ncimui_button_pane_t1

0x8f4a,	// (0x0003c43c) image3_infobar_pane_ParamLimits

0x8f4a,	// (0x0003c43c) image3_infobar_pane

0xacf7,	// (0x0003e1e9) fs_bigclock_status_pane_ParamLimits

0xacf7,	// (0x0003e1e9) fs_bigclock_status_pane

0xad04,	// (0x0003e1f6) main_fs_bigclock_clock_pane_ParamLimits

0xad04,	// (0x0003e1f6) main_fs_bigclock_clock_pane

0xad1a,	// (0x0003e20c) main_fs_bigclock_indi_pane_ParamLimits

0xad1a,	// (0x0003e20c) main_fs_bigclock_indi_pane

0xad4a,	// (0x0003e23c) main_fs_bigclock_swipe_pane_ParamLimits

0xad4a,	// (0x0003e23c) main_fs_bigclock_swipe_pane

0x22de,	// (0x000357d0) main_fs_clock_dumped_data

0x11de,	// (0x000346d0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x11de,	// (0x000346d0) list_single_fs_bigclock_indicator_pane_g1

0x1204,	// (0x000346f6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1204,	// (0x000346f6) list_single_fs_bigclock_indicator_pane_g2

0x121e,	// (0x00034710) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x121e,	// (0x00034710) list_single_fs_bigclock_indicator_pane_g3

0x1238,	// (0x0003472a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1238,	// (0x0003472a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00043171) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00043171) list_single_fs_bigclock_indicator_pane_g

0x1261,	// (0x00034753) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1261,	// (0x00034753) list_single_fs_bigclock_indicator_pane_t1

0x1289,	// (0x0003477b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1289,	// (0x0003477b) list_single_fs_bigclock_indicator_pane_t2

0x12b1,	// (0x000347a3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x12b1,	// (0x000347a3) list_single_fs_bigclock_indicator_pane_t3

0x12d9,	// (0x000347cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x12d9,	// (0x000347cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0004317c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0004317c) list_single_fs_bigclock_indicator_pane_t

0x1d2a,	// (0x0003521c) image3_infobar_fav_pane_ParamLimits

0x1d2a,	// (0x0003521c) image3_infobar_fav_pane

0x1d3a,	// (0x0003522c) image3_infobar_loc_pane_ParamLimits

0x1d3a,	// (0x0003522c) image3_infobar_loc_pane

0x1d4e,	// (0x00035240) image3_infobar_time_pane_ParamLimits

0x1d4e,	// (0x00035240) image3_infobar_time_pane

0xe6b8,	// (0x00041baa) image3_infobar_time_pane_g1

0x1d5e,	// (0x00035250) image3_infobar_time_pane_t1

0xe6b8,	// (0x00041baa) image3_infobar_loc_pane_g1

0x1d6c,	// (0x0003525e) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x00043348) image3_infobar_loc_pane_g

0x1d74,	// (0x00035266) image3_infobar_loc_pane_t1

0xe6b8,	// (0x00041baa) image3_infobar_fav_pane_g1

0x1d82,	// (0x00035274) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x0004334d) image3_infobar_fav_pane_g

0x1d8a,	// (0x0003527c) fs_bigclock_status_battery_pane

0x1d93,	// (0x00035285) fs_bigclock_status_signal_pane

0x1d9c,	// (0x0003528e) fs_bigclock_status_title_pane

0x1da5,	// (0x00035297) fs_bigclock_status_signal_pane_g1

0x1dae,	// (0x000352a0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x00043352) fs_bigclock_status_signal_pane_g

0x1db6,	// (0x000352a8) fs_bigclock_status_battery_pane_g1

0x1dbf,	// (0x000352b1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x00043357) fs_bigclock_status_battery_pane_g

0x1dc7,	// (0x000352b9) fs_bigclock_status_title_pane_t1

0xe6b8,	// (0x00041baa) main_fs_bigclock_clock_pane_g1

0x1dd5,	// (0x000352c7) main_fs_bigclock_clock_pane_g2

0x1dd5,	// (0x000352c7) main_fs_bigclock_clock_pane_g3

0x1dd5,	// (0x000352c7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x0004335c) main_fs_bigclock_clock_pane_g

0x1ddd,	// (0x000352cf) main_fs_bigclock_clock_pane_t1

0x1deb,	// (0x000352dd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x00043365) main_fs_bigclock_clock_pane_t

0x1dfa,	// (0x000352ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1dfa,	// (0x000352ec) list_single_fs_bigclock_indicator_pane

0xb4ae,	// (0x0003e9a0) list_single_fs_bigclock_pane_ParamLimits

0xb4ae,	// (0x0003e9a0) list_single_fs_bigclock_pane

0x1e14,	// (0x00035306) main_fs_bigclock_indicator_pane_t1

0x1e23,	// (0x00035315) list_single_fs_bigclock_pane_g1

0x1e2b,	// (0x0003531d) list_single_fs_bigclock_pane_t1

0xe6b8,	// (0x00041baa) main_fs_bigclock_swipe_pane_g1

0x1e6e,	// (0x00035360) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00043376) main_fs_bigclock_swipe_pane_g

0x1e76,	// (0x00035368) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1e76,	// (0x00035368) main_fs_bigclock_swipe_pane_t1

0x62a2,	// (0x00039794) call_type_pane_ParamLimits

0x22de,	// (0x000357d0) main_btmg_pane

0x40b9,	// (0x000375ab) list_single_cale_mrui_row_pane_g2_ParamLimits

0x40b9,	// (0x000375ab) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x000432e9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x000432e9) list_single_cale_mrui_row_pane_g

0x1c18,	// (0x0003510a) list_recal_vselct_arw_lo_pane

0x1c20,	// (0x00035112) list_recal_vselct_arw_up_pane

0x1c28,	// (0x0003511a) list_recal_vselct_pane

0xb50f,	// (0x0003ea01) btmg_button_pane

0xb51b,	// (0x0003ea0d) main_btmg_pane_g1

0x22de,	// (0x000357d0) bg_button_pane_cp044

0x1e93,	// (0x00035385) btmg_button_pane_t1

0xe297,	// (0x00041789) aid_listscroll_gen

0xde7c,	// (0x0004136e) main_cntbar_detail_pane

0x17da,	// (0x00034ccc) list_cmail_folder_pane

0x17ea,	// (0x00034cdc) sp_fs_scroll_pane_cp03_ParamLimits

0x41d7,	// (0x000376c9) list_single_fs_dyc_pane_cp01_ParamLimits

0x41d7,	// (0x000376c9) list_single_fs_dyc_pane_cp01

0x1ea1,	// (0x00035393) aid_size_cmail_indent

0x41fd,	// (0x000376ef) list_single_dyc_row_pane_cp01

0xb543,	// (0x0003ea35) cntbar_detail_list_pane_ParamLimits

0xb543,	// (0x0003ea35) cntbar_detail_list_pane

0xb57d,	// (0x0003ea6f) main_cntbar_detail_cont_pane_ParamLimits

0xb57d,	// (0x0003ea6f) main_cntbar_detail_cont_pane

0x6296,	// (0x00039788) scroll_pane_cp032_ParamLimits

0x6296,	// (0x00039788) scroll_pane_cp032

0xb589,	// (0x0003ea7b) cntbar_detail_list_event_pane_ParamLimits

0xb589,	// (0x0003ea7b) cntbar_detail_list_event_pane

0xb54f,	// (0x0003ea41) cntbar_detail_list_shct_pane

0xc7fc,	// (0x0003fcee) aid_list_gen

0x1eb3,	// (0x000353a5) aid_scroll

0x1ebc,	// (0x000353ae) aid_size_touch_scroll_bar

0xb59d,	// (0x0003ea8f) aid_list_double

0x1ec5,	// (0x000353b7) aid_list_single

0x0814,	// (0x00033d06) aid_list_single_lg

0x4206,	// (0x000376f8) aid_list_z_g_a_sm

0x420e,	// (0x00037700) aid_list_z_g_d

0x4216,	// (0x00037708) aid_txt_z_prm

0x4224,	// (0x00037716) aid_txt_z_prm_cp01

0x4232,	// (0x00037724) aid_txt_z_sec

0xb5a6,	// (0x0003ea98) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb5a6,	// (0x0003ea98) main_cntbar_detail_cont_pane_g1

0xb5b3,	// (0x0003eaa5) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb5b3,	// (0x0003eaa5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x0004337b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x0004337b) main_cntbar_detail_cont_pane_g

0x1eec,	// (0x000353de) main_cntbar_detail_cont_pane_t1

0x1efa,	// (0x000353ec) main_cntbar_detail_cont_pane_t2

0x1f08,	// (0x000353fa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x00043380) main_cntbar_detail_cont_pane_t

0xb5bf,	// (0x0003eab1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb5bf,	// (0x0003eab1) cell_cntbar_detail_list_shct_pane

0x1f16,	// (0x00035408) cntbar_detail_list_shct_pane_g1

0x1f1f,	// (0x00035411) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00043387) cntbar_detail_list_shct_pane_g

0xb5d3,	// (0x0003eac5) cntbar_detail_list_event_pane_g1_ParamLimits

0xb5d3,	// (0x0003eac5) cntbar_detail_list_event_pane_g1

0xb5df,	// (0x0003ead1) cntbar_detail_list_event_pane_g2_ParamLimits

0xb5df,	// (0x0003ead1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x0004338c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x0004338c) cntbar_detail_list_event_pane_g

0xb64b,	// (0x0003eb3d) cntbar_detail_list_event_pane_t1_ParamLimits

0xb64b,	// (0x0003eb3d) cntbar_detail_list_event_pane_t1

0xb660,	// (0x0003eb52) cntbar_detail_list_event_pane_t2_ParamLimits

0xb660,	// (0x0003eb52) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00043399) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00043399) cntbar_detail_list_event_pane_t

0xe6b8,	// (0x00041baa) cell_cntbar_detail_list_shct_pane_g1

0x6652,	// (0x00039b44) navi_pane_mv_g3

0xde7c,	// (0x0004136e) main_cntbar_detail_pane_ParamLimits

0x22de,	// (0x000357d0) main_notif_wgt_pane

0x8bfe,	// (0x0003c0f0) aid_tch_main_mp4_pane_g4

0x8e33,	// (0x0003c325) popup_slider_window_cp02

0x1c0e,	// (0x00035100) list_recal_day_event_pane

0xb523,	// (0x0003ea15) cntbar_detail_btn_pane_ParamLimits

0xb523,	// (0x0003ea15) cntbar_detail_btn_pane

0xb533,	// (0x0003ea25) cntbar_detail_btn_pane_cp01_ParamLimits

0xb533,	// (0x0003ea25) cntbar_detail_btn_pane_cp01

0xb54f,	// (0x0003ea41) cntbar_detail_list_shct_pane_ParamLimits

0xb55b,	// (0x0003ea4d) cntbar_detail_pane_g1_ParamLimits

0xb55b,	// (0x0003ea4d) cntbar_detail_pane_g1

0xb567,	// (0x0003ea59) cntbar_detail_pane_t1_ParamLimits

0xb567,	// (0x0003ea59) cntbar_detail_pane_t1

0xb5eb,	// (0x0003eadd) cntbar_detail_list_event_pane_g3_ParamLimits

0xb5eb,	// (0x0003eadd) cntbar_detail_list_event_pane_g3

0xb603,	// (0x0003eaf5) cntbar_detail_list_event_pane_g4_ParamLimits

0xb603,	// (0x0003eaf5) cntbar_detail_list_event_pane_g4

0xb61b,	// (0x0003eb0d) cntbar_detail_list_event_pane_g5_ParamLimits

0xb61b,	// (0x0003eb0d) cntbar_detail_list_event_pane_g5

0xb633,	// (0x0003eb25) cntbar_detail_list_event_pane_g6_ParamLimits

0xb633,	// (0x0003eb25) cntbar_detail_list_event_pane_g6

0xb675,	// (0x0003eb67) cntbar_detail_list_event_pane_t3_ParamLimits

0xb675,	// (0x0003eb67) cntbar_detail_list_event_pane_t3

0xb687,	// (0x0003eb79) popup_notif_wgt_window_ParamLimits

0xb687,	// (0x0003eb79) popup_notif_wgt_window

0xb697,	// (0x0003eb89) popup_submenu_window_cp01_ParamLimits

0xb697,	// (0x0003eb89) popup_submenu_window_cp01

0xce99,	// (0x0004038b) bg_popup_window_pane_cp10

0x1f28,	// (0x0003541a) listscroll_notif_wgt_pane

0x1f39,	// (0x0003542b) list_notif_wgt_window

0x1f42,	// (0x00035434) scroll_pane_cp033

0xb344,	// (0x0003e836) list_notif_wgt_row_pane_ParamLimits

0xb344,	// (0x0003e836) list_notif_wgt_row_pane

0x1f4b,	// (0x0003543d) aid_size_list_notif_wgt_del

0x1f58,	// (0x0003544a) list_notif_wgt_row_pane_g1

0x1f64,	// (0x00035456) list_notif_wgt_row_pane_g2

0x1f70,	// (0x00035462) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x000433a0) list_notif_wgt_row_pane_g

0x1f7d,	// (0x0003546f) list_notif_wgt_row_pane_t1

0x1f92,	// (0x00035484) list_notif_wgt_row_pane_t2

0x1fa4,	// (0x00035496) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x000433a7) list_notif_wgt_row_pane_t

0x0472,	// (0x00033964) list_recal_day_event_pane_g1

0x1fb6,	// (0x000354a8) list_recal_day_event_pane_t1

0x22de,	// (0x000357d0) bg_button_pane_cp045

0x1fc5,	// (0x000354b7) cntbar_detail_btn_pane_t1

0xe29f,	// (0x00041791) main_callh_pane_ParamLimits

0xe29f,	// (0x00041791) main_callh_pane

0x22de,	// (0x000357d0) main_coverflow0_pane

0x22de,	// (0x000357d0) main_wgtman_pane

0xad62,	// (0x0003e254) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xad62,	// (0x0003e254) main_fs_bigclock_unlock_btn_pane

0x17b4,	// (0x00034ca6) bg_button_pane_cp16

0x17c4,	// (0x00034cb6) cell_tport_appsw_pane_g3

0xb6a5,	// (0x0003eb97) cf0_flow_pane_ParamLimits

0xb6a5,	// (0x0003eb97) cf0_flow_pane

0x1fd3,	// (0x000354c5) listscroll_cf0_pane

0x1fde,	// (0x000354d0) main_cf0_pane_g1

0xb6b4,	// (0x0003eba6) main_cf0_pane_t1_ParamLimits

0xb6b4,	// (0x0003eba6) main_cf0_pane_t1

0xb6c8,	// (0x0003ebba) main_cf0_pane_t2_ParamLimits

0xb6c8,	// (0x0003ebba) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000433ae) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000433ae) main_cf0_pane_t

0x1fe8,	// (0x000354da) scroll_pane_cp11

0xb6dc,	// (0x0003ebce) cf0_flow_pane_g1

0xb6e4,	// (0x0003ebd6) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000433b3) cf0_flow_pane_g

0xb6ec,	// (0x0003ebde) cf0_flow_pane_t1

0x22de,	// (0x000357d0) main_call6_pane

0x22de,	// (0x000357d0) main_calllock_pane

0xb6fa,	// (0x0003ebec) call6_btn_grp_pane_ParamLimits

0xb6fa,	// (0x0003ebec) call6_btn_grp_pane

0xb709,	// (0x0003ebfb) call6_pane_g1_ParamLimits

0xb709,	// (0x0003ebfb) call6_pane_g1

0xb718,	// (0x0003ec0a) popup_call6_1st_window_ParamLimits

0xb718,	// (0x0003ec0a) popup_call6_1st_window

0xb726,	// (0x0003ec18) popup_call6_2nd_window_ParamLimits

0xb726,	// (0x0003ec18) popup_call6_2nd_window

0xb734,	// (0x0003ec26) cell_call6_btn_pane_ParamLimits

0xb734,	// (0x0003ec26) cell_call6_btn_pane

0xce99,	// (0x0004038b) bg_popup_call2_in_pane_cp03

0x1ff3,	// (0x000354e5) popup_call6_1st_window_g1

0x1ffb,	// (0x000354ed) popup_call6_1st_window_g2

0x2003,	// (0x000354f5) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000433b8) popup_call6_1st_window_g

0x200b,	// (0x000354fd) popup_call6_1st_window_t1

0x201a,	// (0x0003550c) popup_call6_1st_window_t2

0x202a,	// (0x0003551c) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000433bf) popup_call6_1st_window_t

0xce99,	// (0x0004038b) bg_popup_call2_in_pane_cp04

0x1ff3,	// (0x000354e5) popup_call6_2nd_window_g1

0x1ffb,	// (0x000354ed) popup_call6_2nd_window_g2

0x2003,	// (0x000354f5) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000433b8) popup_call6_2nd_window_g

0x200b,	// (0x000354fd) popup_call6_2nd_window_t1

0x22de,	// (0x000357d0) bg_button_pane_cp15

0x203a,	// (0x0003552c) cell_call6_btn_pane_g1

0x2043,	// (0x00035535) cell_call6_btn_pane_t1

0xb743,	// (0x0003ec35) listscroll_wgtman_pane_ParamLimits

0xb743,	// (0x0003ec35) listscroll_wgtman_pane

0xb761,	// (0x0003ec53) wgtman_btn_pane_ParamLimits

0xb761,	// (0x0003ec53) wgtman_btn_pane

0xcd50,	// (0x00040242) aid_scroll_copy1

0x2052,	// (0x00035544) list_wgtman_pane

0xb796,	// (0x0003ec88) wgtman_btn_pane_g1_ParamLimits

0xb796,	// (0x0003ec88) wgtman_btn_pane_g1

0xb7be,	// (0x0003ecb0) wgtman_btn_pane_t1_ParamLimits

0xb7be,	// (0x0003ecb0) wgtman_btn_pane_t1

0x205c,	// (0x0003554e) wgtman_btn_pane_t2_ParamLimits

0x205c,	// (0x0003554e) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000433c6) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000433c6) wgtman_btn_pane_t

0xb7f5,	// (0x0003ece7) listrow_wgtman_pane_ParamLimits

0xb7f5,	// (0x0003ece7) listrow_wgtman_pane

0xb810,	// (0x0003ed02) listrow_wgtman_pane_g1

0xb81d,	// (0x0003ed0f) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000433cb) listrow_wgtman_pane_g

0x4240,	// (0x00037732) listrow_wgtman_pane_t1

0x4258,	// (0x0003774a) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000433d0) listrow_wgtman_pane_t

0x427e,	// (0x00037770) wait_bar_pane_cp09

0x2073,	// (0x00035565) main_calllock_btn_pane

0x207d,	// (0x0003556f) main_calllock_pane_g1

0x22de,	// (0x000357d0) bg_button_pane_cp17

0x2089,	// (0x0003557b) main_calllock_btn_pane_g1

0x2092,	// (0x00035584) main_calllock_btn_pane_t1

0x22de,	// (0x000357d0) main_dialer3_pane

0x22de,	// (0x000357d0) main_fmrd2_pane

0xe6b8,	// (0x00041baa) main_fs_bigclock_unlock_btn_pane_g1

0x20a9,	// (0x0003559b) main_fs_bigclock_unlock_btn_pane_t1

0xb83b,	// (0x0003ed2d) area_fmrd2_info_pane_ParamLimits

0xb83b,	// (0x0003ed2d) area_fmrd2_info_pane

0xb849,	// (0x0003ed3b) area_fmrd2_visual_pane_ParamLimits

0xb849,	// (0x0003ed3b) area_fmrd2_visual_pane

0xb857,	// (0x0003ed49) fmrd2_indi_pane_ParamLimits

0xb857,	// (0x0003ed49) fmrd2_indi_pane

0xb864,	// (0x0003ed56) area_fmrd2_visual_pane_g1

0xb86c,	// (0x0003ed5e) area_fmrd2_visual_pane_t1

0xb87c,	// (0x0003ed6e) area_fmrd2_visual_pane_t2

0xb88c,	// (0x0003ed7e) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000433da) area_fmrd2_visual_pane_t

0xb89c,	// (0x0003ed8e) area_fmrd2_info_pane_g1

0xb8a4,	// (0x0003ed96) area_fmrd2_info_pane_t1

0xb8b4,	// (0x0003eda6) area_fmrd2_info_pane_t2

0xb8c4,	// (0x0003edb6) area_fmrd2_info_pane_t3

0xb8d4,	// (0x0003edc6) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000433e1) area_fmrd2_info_pane_t

0xb8e2,	// (0x0003edd4) fmrd2_indi_pane_t1

0xb8f2,	// (0x0003ede4) fmrd2_indi_pane_t2

0xb902,	// (0x0003edf4) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000433ea) fmrd2_indi_pane_t

0x1247,	// (0x00034739) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1247,	// (0x00034739) list_single_fs_bigclock_indicator_pane_g5

0x12ee,	// (0x000347e0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x12ee,	// (0x000347e0) list_single_fs_bigclock_indicator_pane_t5

0xb207,	// (0x0003e6f9) aid_cell_bcale_month_pane_ParamLimits

0xb207,	// (0x0003e6f9) aid_cell_bcale_month_pane

0xb217,	// (0x0003e709) bcale_month_pane_ParamLimits

0xb217,	// (0x0003e709) bcale_month_pane

0xb227,	// (0x0003e719) bcale_preview_pane_ParamLimits

0xb227,	// (0x0003e719) bcale_preview_pane

0x1e2b,	// (0x0003531d) list_single_fs_bigclock_pane_t1_ParamLimits

0x1e4a,	// (0x0003533c) list_single_fs_bigclock_pane_t2_ParamLimits

0x1e4a,	// (0x0003533c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x00043371) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x00043371) list_single_fs_bigclock_pane_t

0x20a1,	// (0x00035593) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000433d5) main_fs_bigclock_unlock_btn_pane_g

0xb910,	// (0x0003ee02) aid_dia3_key_size_ParamLimits

0xb910,	// (0x0003ee02) aid_dia3_key_size

0xb91c,	// (0x0003ee0e) aid_dia3_listrow_size_ParamLimits

0xb91c,	// (0x0003ee0e) aid_dia3_listrow_size

0xb92c,	// (0x0003ee1e) dia3_keypad_fun_pane_ParamLimits

0xb92c,	// (0x0003ee1e) dia3_keypad_fun_pane

0xb93e,	// (0x0003ee30) dia3_keypad_num_pane_ParamLimits

0xb93e,	// (0x0003ee30) dia3_keypad_num_pane

0xb950,	// (0x0003ee42) dia3_listscroll_pane_ParamLimits

0xb950,	// (0x0003ee42) dia3_listscroll_pane

0xb95e,	// (0x0003ee50) dia3_numentry_pane_ParamLimits

0xb95e,	// (0x0003ee50) dia3_numentry_pane

0x20b7,	// (0x000355a9) dia3_list_pane

0x20c2,	// (0x000355b4) scroll_pane_cp12

0x22de,	// (0x000357d0) bg_dia3_numentry_pane

0xb96c,	// (0x0003ee5e) dia3_numentry_pane_t1

0xb97b,	// (0x0003ee6d) cell_dia3_key_num_pane

0xb983,	// (0x0003ee75) cell_dia3_key0_fun_pane_ParamLimits

0xb983,	// (0x0003ee75) cell_dia3_key0_fun_pane

0xb990,	// (0x0003ee82) cell_dia3_key1_fun_pane_ParamLimits

0xb990,	// (0x0003ee82) cell_dia3_key1_fun_pane

0xb99d,	// (0x0003ee8f) dia3_listrow_pane

0x0f3d,	// (0x0003442f) bg_dia3_numentry_pane_g1

0x22de,	// (0x000357d0) bg_button_pane_cp21

0x20cd,	// (0x000355bf) cell_dia3_key_num_pane_t1

0x20db,	// (0x000355cd) cell_dia3_key_num_pane_t2

0x20ea,	// (0x000355dc) cell_dia3_key_num_pane_t3

0x20f9,	// (0x000355eb) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000433f1) cell_dia3_key_num_pane_t

0x22de,	// (0x000357d0) bg_button_pane_cp19

0xb9aa,	// (0x0003ee9c) cell_dia3_key0_fun_pane_g1

0x22de,	// (0x000357d0) bg_button_pane_cp20

0xb9b2,	// (0x0003eea4) cell_dia3_key1_fun_pane_g1

0xb9ba,	// (0x0003eeac) area_left_week_number_pane

0xb9c4,	// (0x0003eeb6) area_top_day_name_pane

0xb9d0,	// (0x0003eec2) frame_month_view_pane

0xb9da,	// (0x0003eecc) grid_month_view_pane

0x2108,	// (0x000355fa) cell_top_day_name_pane_ParamLimits

0x2108,	// (0x000355fa) cell_top_day_name_pane

0xb9e4,	// (0x0003eed6) cell_area_left_week_number_pane_ParamLimits

0xb9e4,	// (0x0003eed6) cell_area_left_week_number_pane

0xb9f8,	// (0x0003eeea) cell_month_view_pane_ParamLimits

0xb9f8,	// (0x0003eeea) cell_month_view_pane

0x2122,	// (0x00035614) frm_month_g1

0xba15,	// (0x0003ef07) frm_month_g2

0xba1f,	// (0x0003ef11) frm_month_g3

0xba29,	// (0x0003ef1b) frm_month_g4

0xba33,	// (0x0003ef25) frm_month_g5

0xba3d,	// (0x0003ef2f) frm_month_g6

0xba47,	// (0x0003ef39) frm_month_g7

0x212b,	// (0x0003561d) frm_month_g8

0x2134,	// (0x00035626) frm_month_g9

0x213d,	// (0x0003562f) frm_month_g10

0x2146,	// (0x00035638) frm_month_g11

0x214f,	// (0x00035641) frm_month_g12

0x2158,	// (0x0003564a) frm_month_g13

0x2161,	// (0x00035653) frm_month_g14

0x216c,	// (0x0003565e) frm_month_g15

0x2177,	// (0x00035669) frm_month_g16

0x000f,

0xff08,	// (0x000433fa) frm_month_g

0xba51,	// (0x0003ef43) cell_top_day_name_pane_t1

0xba60,	// (0x0003ef52) cell_area_left_week_number_pane_g1

0xba68,	// (0x0003ef5a) cell_area_left_week_number_pane_t1

0xe6b8,	// (0x00041baa) cell_month_view_pane_g1

0xba77,	// (0x0003ef69) cell_month_view_pane_t1

0x22de,	// (0x000357d0) main_fps_pane

0x152a,	// (0x00034a1c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x152a,	// (0x00034a1c) cmail_ddmenu_btn02_pane_cp1

0x1546,	// (0x00034a38) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1546,	// (0x00034a38) cmail_ddmenu_btn02_pane_cp2

0xb40b,	// (0x0003e8fd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb40b,	// (0x0003e8fd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x00043324) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x00043324) cmail_ddmenu_btn02_pane_g

0xb429,	// (0x0003e91b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb429,	// (0x0003e91b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x00043329) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x00043329) cmail_ddmenu_btn02_pane_t

0xba86,	// (0x0003ef78) fps_text_pane_ParamLimits

0xba86,	// (0x0003ef78) fps_text_pane

0xba93,	// (0x0003ef85) main_fps_pane_g1_ParamLimits

0xba93,	// (0x0003ef85) main_fps_pane_g1

0xbaa1,	// (0x0003ef93) wait_bar_pane_cp010_ParamLimits

0xbaa1,	// (0x0003ef93) wait_bar_pane_cp010

0xbaad,	// (0x0003ef9f) fps_text_pane_t1_ParamLimits

0xbaad,	// (0x0003ef9f) fps_text_pane_t1

0x9215,	// (0x0003c707) cam4_image_uncrop_pane_g1

0x921e,	// (0x0003c710) cam4_image_uncrop_pane_g2

0x9227,	// (0x0003c719) cam4_image_uncrop_pane_g3

0x9230,	// (0x0003c722) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00042deb) cam4_image_uncrop_pane_g

0xb99d,	// (0x0003ee8f) dia3_listrow_pane_ParamLimits

0x22de,	// (0x000357d0) main_phob2_pane

0xb082,	// (0x0003e574) cell_tport_appsw_pane_cp02_ParamLimits

0xb082,	// (0x0003e574) cell_tport_appsw_pane_cp02

0xb091,	// (0x0003e583) cell_tport_appsw_pane_cp03_ParamLimits

0xb091,	// (0x0003e583) cell_tport_appsw_pane_cp03

0x22de,	// (0x000357d0) phob2_contact_card_pane

0x22de,	// (0x000357d0) phob2_listscroll_pane

0x2182,	// (0x00035674) phob2_list_pane

0x218a,	// (0x0003567c) scroll_pane_cp034

0xbac6,	// (0x0003efb8) phob2_cc_data_pane_ParamLimits

0xbac6,	// (0x0003efb8) phob2_cc_data_pane

0xbae0,	// (0x0003efd2) phob2_cc_listscroll_pane_ParamLimits

0xbae0,	// (0x0003efd2) phob2_cc_listscroll_pane

0xbafa,	// (0x0003efec) list_double_large_graphic_phob2_pane_ParamLimits

0xbafa,	// (0x0003efec) list_double_large_graphic_phob2_pane

0xbb18,	// (0x0003f00a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbb18,	// (0x0003f00a) list_double_large_graphic_phob2_pane_g1

0x4290,	// (0x00037782) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4290,	// (0x00037782) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004341b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004341b) list_double_large_graphic_phob2_pane_g

0x429c,	// (0x0003778e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x429c,	// (0x0003778e) list_double_large_graphic_phob2_pane_t1

0x42b1,	// (0x000377a3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x42b1,	// (0x000377a3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00043420) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00043420) list_double_large_graphic_phob2_pane_t

0x22de,	// (0x000357d0) list_highlight_pane_cp024

0x219e,	// (0x00035690) phob2_cc_button_pane

0xbb25,	// (0x0003f017) phob2_cc_data_pane_g1_ParamLimits

0xbb25,	// (0x0003f017) phob2_cc_data_pane_g1

0xbb31,	// (0x0003f023) phob2_cc_data_pane_g2_ParamLimits

0xbb31,	// (0x0003f023) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00043425) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00043425) phob2_cc_data_pane_g

0xbb3d,	// (0x0003f02f) phob2_cc_data_pane_t1_ParamLimits

0xbb3d,	// (0x0003f02f) phob2_cc_data_pane_t1

0xbb4f,	// (0x0003f041) phob2_cc_data_pane_t2_ParamLimits

0xbb4f,	// (0x0003f041) phob2_cc_data_pane_t2

0xbb61,	// (0x0003f053) phob2_cc_data_pane_t3_ParamLimits

0xbb61,	// (0x0003f053) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004342a) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004342a) phob2_cc_data_pane_t

0x21a6,	// (0x00035698) phob2_cc_list_pane_ParamLimits

0x21a6,	// (0x00035698) phob2_cc_list_pane

0x050b,	// (0x000339fd) scroll_pane_cp035_ParamLimits

0x050b,	// (0x000339fd) scroll_pane_cp035

0xde7c,	// (0x0004136e) bg_button_pane_cp033

0x21b2,	// (0x000356a4) phob2_cc_button_pane_g1

0x21be,	// (0x000356b0) phob2_cc_button_pane_t1

0x21d3,	// (0x000356c5) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00043431) phob2_cc_button_pane_t

0xbb73,	// (0x0003f065) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb73,	// (0x0003f065) list_double_large_graphic_phob2_cc_pane

0xbb9a,	// (0x0003f08c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb9a,	// (0x0003f08c) list_double_large_graphic_phob2_cc_pane_g1

0x42c3,	// (0x000377b5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x42c3,	// (0x000377b5) list_double_large_graphic_phob2_cc_pane_g2

0x42d2,	// (0x000377c4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x42d2,	// (0x000377c4) list_double_large_graphic_phob2_cc_pane_g3

0x42e1,	// (0x000377d3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x42e1,	// (0x000377d3) list_double_large_graphic_phob2_cc_pane_g4

0x42f2,	// (0x000377e4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x42f2,	// (0x000377e4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00043436) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00043436) list_double_large_graphic_phob2_cc_pane_g

0x4301,	// (0x000377f3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4301,	// (0x000377f3) list_double_large_graphic_phob2_cc_pane_t1

0x432a,	// (0x0003781c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x432a,	// (0x0003781c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00043441) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00043441) list_double_large_graphic_phob2_cc_pane_t

0x21e5,	// (0x000356d7) list_highlight_pane_cp025_ParamLimits

0x21e5,	// (0x000356d7) list_highlight_pane_cp025

0xde7c,	// (0x0004136e) bg_button_pane_cp033_ParamLimits

0x21b2,	// (0x000356a4) phob2_cc_button_pane_g1_ParamLimits

0x21be,	// (0x000356b0) phob2_cc_button_pane_t1_ParamLimits

0x21d3,	// (0x000356c5) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00043431) phob2_cc_button_pane_t_ParamLimits

0x461e,	// (0x00037b10) popup_wgtman_window

0x0279,	// (0x0003376b) scroll_pane_cp038

0xb77e,	// (0x0003ec70) wgtman_btn_pane_cp_01_ParamLimits

0xb77e,	// (0x0003ec70) wgtman_btn_pane_cp_01

0x21f3,	// (0x000356e5) wgtman_content_pane

0x21fc,	// (0x000356ee) wgtman_heading_pane

0x22de,	// (0x000357d0) bg_heading_pane_cp02

0x2205,	// (0x000356f7) wgtman_heading_pane_g1

0x220d,	// (0x000356ff) wgtman_heading_pane_t1

0x221b,	// (0x0003570d) scroll_pane_cp036

0x2223,	// (0x00035715) wgtman_list_pane

0x222b,	// (0x0003571d) wgtman_list_pane_t1_ParamLimits

0x222b,	// (0x0003571d) wgtman_list_pane_t1

0x9174,	// (0x0003c666) cam4_grid_pane

0x366a,	// (0x00036b5c) bg_button_pane_cp015_ParamLimits

0x9e0a,	// (0x0003d2fc) bg_button_pane_cp016_ParamLimits

0x9e1d,	// (0x0003d30f) bg_button_pane_cp017_ParamLimits

0x36ae,	// (0x00036ba0) popup_vitu2_query_window_g3_ParamLimits

0x36ae,	// (0x00036ba0) popup_vitu2_query_window_g3

0x3727,	// (0x00036c19) popup_vitu2_query_window_t6_ParamLimits

0x3727,	// (0x00036c19) popup_vitu2_query_window_t6

0x3752,	// (0x00036c44) popup_vitu2_query_window_t7_ParamLimits

0x3752,	// (0x00036c44) popup_vitu2_query_window_t7

0xf0c6,	// (0x000425b8) cam4_grid_pane_g1

0xf0cf,	// (0x000425c1) cam4_grid_pane_g2

0x2245,	// (0x00035737) cam4_grid_pane_g3

0x224e,	// (0x00035740) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00043446) cam4_grid_pane_g

0x532a,	// (0x0003881c) aid_placing_vt_slider_lsc_ParamLimits

0x5676,	// (0x00038b68) vidtel_button_pane_ParamLimits

0x5676,	// (0x00038b68) vidtel_button_pane

0x2259,	// (0x0003574b) bg_button_pane_cp034

0xbbab,	// (0x0003f09d) vidtel_button_pane_g1

0x2263,	// (0x00035755) vidtel_button_pane_t1

0x03e6,	// (0x000338d8) aid_size_vtel_slider_touch

0x050b,	// (0x000339fd) scroll_pane_cp039

0x0f7b,	// (0x0003446d) ncim_query_button_pane_cp01_ParamLimits

0x0f9a,	// (0x0003448c) ncimui_query_pane_g1_ParamLimits

0xde7c,	// (0x0004136e) input_focus_pane_cp012_ParamLimits

0x0fbf,	// (0x000344b1) ncim_query_entry_pane_t1_ParamLimits

0x050b,	// (0x000339fd) scroll_pane_cp039_ParamLimits

0x65c4,	// (0x00039ab6) navi_pane_bcale_mc_g1

0x65cc,	// (0x00039abe) navi_pane_bcale_mc_t1

0x158f,	// (0x00034a81) main_sp_fs_email_pane_g1

0x1597,	// (0x00034a89) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000431e2) main_sp_fs_email_pane_g

0x1abc,	// (0x00034fae) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1abc,	// (0x00034fae) list_single_cale_mrui_row_pane_g3

0xb451,	// (0x0003e943) list_single_recal_day_pane_g5_event_pane

0x1c8a,	// (0x0003517c) list_single_recal_day_pane_g7

0x2271,	// (0x00035763) list_recal_day_event_pane_cp01

0x227a,	// (0x0003576c) list_recal_vselct_arw_lo_pane_cp01

0x2282,	// (0x00035774) list_recal_vselct_arw_up_pane_cp01

0x228a,	// (0x0003577c) list_recal_vselct_pane_cp01

0x0472,	// (0x00033964) list_recal_day_event_pane_cp01_g1

0x2294,	// (0x00035786) list_recal_day_event_pane_cp01_t1

0x1c92,	// (0x00035184) list_single_recal_day_pane_t1_ParamLimits

0x1ca4,	// (0x00035196) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x00043339) list_single_recal_day_pane_t_ParamLimits

0xc388,	// (0x0003f87a) bg_notes_pane_ParamLimits

0xc396,	// (0x0003f888) list_notes_pane_ParamLimits

0x497c,	// (0x00037e6e) scroll_pane_cp06_ParamLimits

0xc3b8,	// (0x0003f8aa) main_notes_pane_ParamLimits

0x22de,	// (0x000357d0) main_welc_pane

0xbbb3,	// (0x0003f0a5) main_welc_body_pane_ParamLimits

0xbbb3,	// (0x0003f0a5) main_welc_body_pane

0xbbcd,	// (0x0003f0bf) main_welc_opti_pane_ParamLimits

0xbbcd,	// (0x0003f0bf) main_welc_opti_pane

0xbc00,	// (0x0003f0f2) main_welc_pane_t1_ParamLimits

0xbc00,	// (0x0003f0f2) main_welc_pane_t1

0xb10a,	// (0x0003e5fc) main_welc_body_row_pane_ParamLimits

0xb10a,	// (0x0003e5fc) main_welc_body_row_pane

0xbc1a,	// (0x0003f10c) main_welc_opti_row_pane_ParamLimits

0xbc1a,	// (0x0003f10c) main_welc_opti_row_pane

0x22a2,	// (0x00035794) main_welc_opti_row_pane_g1

0x22aa,	// (0x0003579c) main_welc_opti_row_pane_t1

0x22b9,	// (0x000357ab) main_welc_body_row_pane_t1

0x1f31,	// (0x00035423) popup_notif_wgt_heading_pane

0x1f4b,	// (0x0003543d) aid_size_list_notif_wgt_del_ParamLimits

0x1f58,	// (0x0003544a) list_notif_wgt_row_pane_g1_ParamLimits

0x1f64,	// (0x00035456) list_notif_wgt_row_pane_g2_ParamLimits

0x1f70,	// (0x00035462) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x000433a0) list_notif_wgt_row_pane_g_ParamLimits

0x1f7d,	// (0x0003546f) list_notif_wgt_row_pane_t1_ParamLimits

0x1f92,	// (0x00035484) list_notif_wgt_row_pane_t2_ParamLimits

0x1fa4,	// (0x00035496) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x000433a7) list_notif_wgt_row_pane_t_ParamLimits

0xb810,	// (0x0003ed02) listrow_wgtman_pane_g1_ParamLimits

0xb81d,	// (0x0003ed0f) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000433cb) listrow_wgtman_pane_g_ParamLimits

0x4240,	// (0x00037732) listrow_wgtman_pane_t1_ParamLimits

0x4258,	// (0x0003774a) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000433d0) listrow_wgtman_pane_t_ParamLimits

0x427e,	// (0x00037770) wait_bar_pane_cp09_ParamLimits

0x22de,	// (0x000357d0) bg_popup_heading_pane_cp02

0x22c8,	// (0x000357ba) popup_notif_wgt_heading_pane_g1

0x22d0,	// (0x000357c2) popup_notif_wgt_heading_pane_t1

0x22de,	// (0x000357d0) main_vids_pane

0x22de,	// (0x000357d0) vids_listscroll_pane

0xbc2b,	// (0x0003f11d) scroll_pane_cp040

0x22de,	// (0x000357d0) vids_list_pane

0xbc36,	// (0x0003f128) vids_list_double_pane_ParamLimits

0xbc36,	// (0x0003f128) vids_list_double_pane

0xbc50,	// (0x0003f142) vids_list_double_pane_g1

0xbc59,	// (0x0003f14b) vids_list_double_pane_t1

0xbc69,	// (0x0003f15b) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00043454) vids_list_double_pane_t

0xde7c,	// (0x0004136e) main_ncimui_pane_ParamLimits

0xa930,	// (0x0003de22) main_ncimui_pane_g1_ParamLimits

0xa93c,	// (0x0003de2e) main_ncimui_pane_g2_ParamLimits

0xa93c,	// (0x0003de2e) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x000430e7) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x000430e7) main_ncimui_pane_g

0xbbe6,	// (0x0003f0d8) main_welc_pane_g1_ParamLimits

0xbbe6,	// (0x0003f0d8) main_welc_pane_g1

0xbbf2,	// (0x0003f0e4) main_welc_pane_g2_ParamLimits

0xbbf2,	// (0x0003f0e4) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004344f) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004344f) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small

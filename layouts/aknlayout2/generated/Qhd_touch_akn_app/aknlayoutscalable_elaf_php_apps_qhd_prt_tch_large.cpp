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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00069a51 };

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
0x5314,	// (0x0006ed65) Screen

0x5320,	// (0x0006ed71) application_window

0x537c,	// (0x0006edcd) area_bottom_pane_ParamLimits

0x537c,	// (0x0006edcd) area_bottom_pane

0x53d4,	// (0x0006ee25) area_top_pane_ParamLimits

0x53d4,	// (0x0006ee25) area_top_pane

0x5438,	// (0x0006ee89) call_video_uplink_pane_ParamLimits

0x5438,	// (0x0006ee89) call_video_uplink_pane

0x5477,	// (0x0006eec8) main_pane_ParamLimits

0x5477,	// (0x0006eec8) main_pane

0xe4ec,	// (0x00077f3d) context_pane

0x803b,	// (0x00071a8c) navi_pane

0x8061,	// (0x00071ab2) popup_cale_events_window_ParamLimits

0x8061,	// (0x00071ab2) popup_cale_events_window

0xe4ff,	// (0x00077f50) popup_mup_playback_window

0x8079,	// (0x00071aca) signal_pane

0x2f75,	// (0x0006c9c6) main_browser_pane

0x318d,	// (0x0006cbde) main_burst_pane

0x7ec7,	// (0x00071918) main_calc_pane

0xe4e0,	// (0x00077f31) main_cale_day_pane

0x5959,	// (0x0006f3aa) main_cale_month_pane

0xe4e0,	// (0x00077f31) main_cale_week_pane

0x318d,	// (0x0006cbde) main_call_pane

0x2c03,	// (0x0006c654) main_call_poc_pane

0x318d,	// (0x0006cbde) main_camera_pane

0x318d,	// (0x0006cbde) main_chi_dic_pane

0x38fe,	// (0x0006d34f) main_clock_pane

0x2c03,	// (0x0006c654) main_fmradio_pane

0x318d,	// (0x0006cbde) main_graph_messa_pane

0x2c03,	// (0x0006c654) main_help_pane

0x2f75,	// (0x0006c9c6) main_im_pane

0x2e5e,	// (0x0006c8af) main_image_pane_ParamLimits

0x2e5e,	// (0x0006c8af) main_image_pane

0x2c03,	// (0x0006c654) main_location2_pane

0x318d,	// (0x0006cbde) main_location_pane

0x2e5e,	// (0x0006c8af) main_messa_pane

0x2c03,	// (0x0006c654) main_mp2_pane

0x318d,	// (0x0006cbde) main_mp_pane

0x2c03,	// (0x0006c654) main_msg_pane

0x2c03,	// (0x0006c654) main_mup_eq_pane

0x2c03,	// (0x0006c654) main_mup_pane

0x2f75,	// (0x0006c9c6) main_notes_pane

0x2c03,	// (0x0006c654) main_pec_pane

0x2c03,	// (0x0006c654) main_phob_pane

0x2c03,	// (0x0006c654) main_pinb_pane

0x2c03,	// (0x0006c654) main_postcard_pane

0x2c03,	// (0x0006c654) main_qdial_pane

0x318d,	// (0x0006cbde) main_skin_pane

0x2c03,	// (0x0006c654) main_smil2_pane

0x318d,	// (0x0006cbde) main_smil_pane

0x318d,	// (0x0006cbde) main_video_pane

0x318d,	// (0x0006cbde) main_video_tele_pane

0x2e5e,	// (0x0006c8af) main_viewer_pane_ParamLimits

0x2e5e,	// (0x0006c8af) main_viewer_pane

0x318d,	// (0x0006cbde) main_vorec_pane

0x7f05,	// (0x00071956) popup_blid_sat_info_window_ParamLimits

0x7f05,	// (0x00071956) popup_blid_sat_info_window

0x7f25,	// (0x00071976) popup_dyc_status_message_window_ParamLimits

0x7f25,	// (0x00071976) popup_dyc_status_message_window

0x7f35,	// (0x00071986) popup_grid_large_graphic_window_ParamLimits

0x7f35,	// (0x00071986) popup_grid_large_graphic_window

0x7fc6,	// (0x00071a17) popup_loc_request_window_ParamLimits

0x7fc6,	// (0x00071a17) popup_loc_request_window

0x8013,	// (0x00071a64) popup_wml_address_window_ParamLimits

0x8013,	// (0x00071a64) popup_wml_address_window

0x7d97,	// (0x000717e8) call_muted_g1

0x7a8a,	// (0x000714db) popup_call_audio_conf_window_ParamLimits

0x7a8a,	// (0x000714db) popup_call_audio_conf_window

0x7da7,	// (0x000717f8) popup_call_audio_first_window_ParamLimits

0x7da7,	// (0x000717f8) popup_call_audio_first_window

0x7de7,	// (0x00071838) popup_call_audio_in_window_ParamLimits

0x7de7,	// (0x00071838) popup_call_audio_in_window

0x7e0b,	// (0x0007185c) popup_call_audio_out_window_ParamLimits

0x7e0b,	// (0x0007185c) popup_call_audio_out_window

0x7e2d,	// (0x0007187e) popup_call_audio_second_window_ParamLimits

0x7e2d,	// (0x0007187e) popup_call_audio_second_window

0x7e5d,	// (0x000718ae) popup_call_audio_wait_window_ParamLimits

0x7e5d,	// (0x000718ae) popup_call_audio_wait_window

0x7e7e,	// (0x000718cf) popup_number_entry_window_ParamLimits

0x7e7e,	// (0x000718cf) popup_number_entry_window

0x24b5,	// (0x0006bf06) bg_popup_call_pane_cp05_ParamLimits

0x24b5,	// (0x0006bf06) bg_popup_call_pane_cp05

0x24d5,	// (0x0006bf26) popup_number_entry_window_t1

0x24e8,	// (0x0006bf39) popup_number_entry_window_t2

0x24fa,	// (0x0006bf4b) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00078a6e) popup_number_entry_window_t

0x250c,	// (0x0006bf5d) text_title_cp2

0x251f,	// (0x0006bf70) bg_popup_call_pane_cp_ParamLimits

0x251f,	// (0x0006bf70) bg_popup_call_pane_cp

0x252d,	// (0x0006bf7e) call_thumbnail_pane

0x2535,	// (0x0006bf86) popup_call_audio_in_window_g1_ParamLimits

0x2535,	// (0x0006bf86) popup_call_audio_in_window_g1

0x2541,	// (0x0006bf92) popup_call_audio_in_window_g2_ParamLimits

0x2541,	// (0x0006bf92) popup_call_audio_in_window_g2

0x254d,	// (0x0006bf9e) popup_call_audio_in_window_g3_ParamLimits

0x254d,	// (0x0006bf9e) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00078a77) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00078a77) popup_call_audio_in_window_g

0x2559,	// (0x0006bfaa) popup_call_audio_in_window_t1_ParamLimits

0x2559,	// (0x0006bfaa) popup_call_audio_in_window_t1

0x2575,	// (0x0006bfc6) popup_call_audio_in_window_t2_ParamLimits

0x2575,	// (0x0006bfc6) popup_call_audio_in_window_t2

0x2591,	// (0x0006bfe2) popup_call_audio_in_window_t3_ParamLimits

0x2591,	// (0x0006bfe2) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00078a7e) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00078a7e) popup_call_audio_in_window_t

0x251f,	// (0x0006bf70) bg_popup_call_pane_cp01_ParamLimits

0x251f,	// (0x0006bf70) bg_popup_call_pane_cp01

0x252d,	// (0x0006bf7e) call_thumbnail_pane_cp02

0x25a4,	// (0x0006bff5) call_type_pane_cp022

0x25ac,	// (0x0006bffd) popup_call_audio_out_window_g1_ParamLimits

0x25ac,	// (0x0006bffd) popup_call_audio_out_window_g1

0x25be,	// (0x0006c00f) popup_call_audio_out_window_g2_ParamLimits

0x25be,	// (0x0006c00f) popup_call_audio_out_window_g2

0x25ca,	// (0x0006c01b) popup_call_audio_out_window_g3_ParamLimits

0x25ca,	// (0x0006c01b) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00078a85) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00078a85) popup_call_audio_out_window_g

0x25dc,	// (0x0006c02d) popup_call_audio_out_window_t1_ParamLimits

0x25dc,	// (0x0006c02d) popup_call_audio_out_window_t1

0x25f4,	// (0x0006c045) popup_call_audio_out_window_t2_ParamLimits

0x25f4,	// (0x0006c045) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00078a8c) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00078a8c) popup_call_audio_out_window_t

0x2609,	// (0x0006c05a) bg_popup_call_pane_ParamLimits

0x2609,	// (0x0006c05a) bg_popup_call_pane

0x5677,	// (0x0006f0c8) call_thumbnail_pane_cp_ParamLimits

0x5677,	// (0x0006f0c8) call_thumbnail_pane_cp

0x268d,	// (0x0006c0de) call_type_pane_cp01_ParamLimits

0x268d,	// (0x0006c0de) call_type_pane_cp01

0x26d1,	// (0x0006c122) popup_call_audio_first_window_g1_ParamLimits

0x26d1,	// (0x0006c122) popup_call_audio_first_window_g1

0x271d,	// (0x0006c16e) popup_call_audio_first_window_g2_ParamLimits

0x271d,	// (0x0006c16e) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00078a91) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00078a91) popup_call_audio_first_window_g

0x2a9c,	// (0x0006c4ed) popup_call_audio_first_window_t1_ParamLimits

0x2a9c,	// (0x0006c4ed) popup_call_audio_first_window_t1

0x2b48,	// (0x0006c599) popup_call_audio_first_window_t4_ParamLimits

0x2b48,	// (0x0006c599) popup_call_audio_first_window_t4

0x2bd4,	// (0x0006c625) popup_call_audio_first_window_t5_ParamLimits

0x2bd4,	// (0x0006c625) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00078a96) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00078a96) popup_call_audio_first_window_t

0x2c03,	// (0x0006c654) bg_popup_call_pane_cp02

0x2c0d,	// (0x0006c65e) call_type_pane_cp023

0x2c15,	// (0x0006c666) popup_call_audio_wait_window_g1

0x2c1d,	// (0x0006c66e) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00078a9d) popup_call_audio_wait_window_g

0x2c25,	// (0x0006c676) popup_call_audio_wait_window_t3

0x2c33,	// (0x0006c684) bg_popup_call_pane_cp03_ParamLimits

0x2c33,	// (0x0006c684) bg_popup_call_pane_cp03

0x2c93,	// (0x0006c6e4) call_thumbnail_pane_cp011_ParamLimits

0x2c93,	// (0x0006c6e4) call_thumbnail_pane_cp011

0x2c9f,	// (0x0006c6f0) call_type_pane_cp034_ParamLimits

0x2c9f,	// (0x0006c6f0) call_type_pane_cp034

0x2cdb,	// (0x0006c72c) popup_call_audio_second_window_g1_ParamLimits

0x2cdb,	// (0x0006c72c) popup_call_audio_second_window_g1

0x2d17,	// (0x0006c768) popup_call_audio_second_window_g2_ParamLimits

0x2d17,	// (0x0006c768) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00078aa2) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00078aa2) popup_call_audio_second_window_g

0x2d53,	// (0x0006c7a4) popup_call_audio_second_window_t1_ParamLimits

0x2d53,	// (0x0006c7a4) popup_call_audio_second_window_t1

0x2dd4,	// (0x0006c825) popup_call_audio_second_window_t2_ParamLimits

0x2dd4,	// (0x0006c825) popup_call_audio_second_window_t2

0x2e0a,	// (0x0006c85b) popup_call_audio_second_window_t3_ParamLimits

0x2e0a,	// (0x0006c85b) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00078aa7) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00078aa7) popup_call_audio_second_window_t

0x2c03,	// (0x0006c654) bg_popup_call_pane_cp04

0x2e40,	// (0x0006c891) list_conf_pane

0x2e48,	// (0x0006c899) popup_call_audio_conf_window_t1

0x2e56,	// (0x0006c8a7) call_thumbnail_pane_g1

0x2e5e,	// (0x0006c8af) bg_pinb_pane_ParamLimits

0x2e5e,	// (0x0006c8af) bg_pinb_pane

0x2e6c,	// (0x0006c8bd) find_pinb_pane

0x2e5e,	// (0x0006c8af) listscroll_pinb_pane_ParamLimits

0x2e5e,	// (0x0006c8af) listscroll_pinb_pane

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g1

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g2

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g3

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g4

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g5

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g6

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g7

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g8

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g9

0x2e76,	// (0x0006c8c7) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00078aae) pinb_bg_pane_g

0x24ab,	// (0x0006befc) grid_pinb_pane

0x24ab,	// (0x0006befc) list_pinb_pane

0x2761,	// (0x0006c1b2) scroll_pane_cp01_ParamLimits

0x2761,	// (0x0006c1b2) scroll_pane_cp01

0x2e80,	// (0x0006c8d1) find_pinb_pane_g1_ParamLimits

0x2e80,	// (0x0006c8d1) find_pinb_pane_g1

0x2e98,	// (0x0006c8e9) find_pinb_pane_t1

0x2eaa,	// (0x0006c8fb) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00078ac8) find_pinb_pane_t

0x2ebf,	// (0x0006c910) input_focus_pane_cp01_ParamLimits

0x2ebf,	// (0x0006c910) input_focus_pane_cp01

0x2ecb,	// (0x0006c91c) cell_pinb_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cell_pinb_pane

0x2ed9,	// (0x0006c92a) cell_pinb_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_pinb_pane_g1

0x2ee7,	// (0x0006c938) cell_pinb_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) cell_pinb_pane_g2

0x2ee7,	// (0x0006c938) cell_pinb_pane_g3_ParamLimits

0x2ee7,	// (0x0006c938) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00078acd) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00078acd) cell_pinb_pane_g

0x2c03,	// (0x0006c654) grid_highlight_pane_cp01

0x2ecb,	// (0x0006c91c) list_pinb_item_pane_ParamLimits

0x2ecb,	// (0x0006c91c) list_pinb_item_pane

0x24ab,	// (0x0006befc) list_highlight_pane_cp02

0x2ef5,	// (0x0006c946) list_pinb_item_pane_g1_ParamLimits

0x2ef5,	// (0x0006c946) list_pinb_item_pane_g1

0x2ee7,	// (0x0006c938) list_pinb_item_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) list_pinb_item_pane_g2

0x2ed9,	// (0x0006c92a) list_pinb_item_pane_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_pinb_item_pane_g3

0x2ee7,	// (0x0006c938) list_pinb_item_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00078ad4) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00078ad4) list_pinb_item_pane_g

0x2f03,	// (0x0006c954) list_pinb_item_pane_t1_ParamLimits

0x2f03,	// (0x0006c954) list_pinb_item_pane_t1

0x56b5,	// (0x0006f106) calc_display_pane

0x56d3,	// (0x0006f124) calc_paper_pane

0x56ef,	// (0x0006f140) grid_calc_pane

0x24ab,	// (0x0006befc) bg_list_pane_cp01

0x2f17,	// (0x0006c968) clock_g1

0x2f17,	// (0x0006c968) clock_g2

0x0001,

0xf08c,	// (0x00078add) clock_g

0x2f21,	// (0x0006c972) clock_t1_ParamLimits

0x2f21,	// (0x0006c972) clock_t1

0x2f35,	// (0x0006c986) clock_t2_ParamLimits

0x2f35,	// (0x0006c986) clock_t2

0x2f35,	// (0x0006c986) clock_t3_ParamLimits

0x2f35,	// (0x0006c986) clock_t3

0x2f35,	// (0x0006c986) clock_t4_ParamLimits

0x2f35,	// (0x0006c986) clock_t4

0x2f21,	// (0x0006c972) clock_t5_ParamLimits

0x2f21,	// (0x0006c972) clock_t5

0x2f35,	// (0x0006c986) clock_t6_ParamLimits

0x2f35,	// (0x0006c986) clock_t6

0x2f35,	// (0x0006c986) clock_t7_ParamLimits

0x2f35,	// (0x0006c986) clock_t7

0x2f35,	// (0x0006c986) clock_t8_ParamLimits

0x2f35,	// (0x0006c986) clock_t8

0x2f35,	// (0x0006c986) clock_t9_ParamLimits

0x2f35,	// (0x0006c986) clock_t9

0x0008,

0xf091,	// (0x00078ae2) clock_t_ParamLimits

0xf091,	// (0x00078ae2) clock_t

0x24ab,	// (0x0006befc) popup_clock_analogue_window_cp02

0x24ab,	// (0x0006befc) popup_clock_digital_window_cp01

0x2c03,	// (0x0006c654) listscroll_help_pane

0x2c03,	// (0x0006c654) phob_pre_status_pane

0x2f49,	// (0x0006c99a) grid_qdial_pane

0x2e5e,	// (0x0006c8af) listscroll_mce_pane

0x2e5e,	// (0x0006c8af) bg_notes_pane

0x2f53,	// (0x0006c9a4) list_notes_pane

0x571b,	// (0x0006f16c) scroll_pane_cp06

0x2f61,	// (0x0006c9b2) bg_calc_paper_pane

0x572a,	// (0x0006f17b) list_calc_pane

0x2f75,	// (0x0006c9c6) bg_calc_display_pane

0x5744,	// (0x0006f195) calc_display_pane_t1

0x5759,	// (0x0006f1aa) calc_display_pane_t2

0x576e,	// (0x0006f1bf) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00078af5) calc_display_pane_t

0x5780,	// (0x0006f1d1) cell_calc_pane_ParamLimits

0x5780,	// (0x0006f1d1) cell_calc_pane

0x2f81,	// (0x0006c9d2) bg_calc_paper_pane_g1

0x2f99,	// (0x0006c9ea) bg_calc_paper_pane_g2

0x2f8d,	// (0x0006c9de) bg_calc_paper_pane_g3

0x2fb1,	// (0x0006ca02) bg_calc_paper_pane_g4

0x2fa5,	// (0x0006c9f6) bg_calc_paper_pane_g5

0x57ad,	// (0x0006f1fe) bg_calc_paper_pane_g6

0x57be,	// (0x0006f20f) bg_calc_paper_pane_g7

0x57cf,	// (0x0006f220) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00078afc) bg_calc_paper_pane_g

0x57e0,	// (0x0006f231) calc_bg_paper_pane_g9

0x57f1,	// (0x0006f242) list_calc_item_pane_ParamLimits

0x57f1,	// (0x0006f242) list_calc_item_pane

0x2fbd,	// (0x0006ca0e) list_calc_item_pane_g1

0x581d,	// (0x0006f26e) list_calc_item_pane_t1_ParamLimits

0x581d,	// (0x0006f26e) list_calc_item_pane_t1

0x582f,	// (0x0006f280) list_calc_item_pane_t2_ParamLimits

0x582f,	// (0x0006f280) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00078b0d) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00078b0d) list_calc_item_pane_t

0x2e76,	// (0x0006c8c7) cell_calc_pane_g1

0x2fca,	// (0x0006ca1b) grid_highlight_pane_cp02

0x585f,	// (0x0006f2b0) bg_calc_display_pane_g1

0x5868,	// (0x0006f2b9) bg_calc_display_pane_g2

0x5872,	// (0x0006f2c3) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00078b17) bg_calc_display_pane_g

0x587b,	// (0x0006f2cc) cell_qdial_pane_ParamLimits

0x587b,	// (0x0006f2cc) cell_qdial_pane

0x588f,	// (0x0006f2e0) cell_qdial_pane_g1_ParamLimits

0x588f,	// (0x0006f2e0) cell_qdial_pane_g1

0x589c,	// (0x0006f2ed) cell_qdial_pane_g2_ParamLimits

0x589c,	// (0x0006f2ed) cell_qdial_pane_g2

0x2ff5,	// (0x0006ca46) cell_qdial_pane_g3_ParamLimits

0x2ff5,	// (0x0006ca46) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00078b1e) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00078b1e) cell_qdial_pane_g

0x58ba,	// (0x0006f30b) cell_qdial_pane_t1_ParamLimits

0x58ba,	// (0x0006f30b) cell_qdial_pane_t1

0x58d2,	// (0x0006f323) cell_qdial_pane_t2_ParamLimits

0x58d2,	// (0x0006f323) cell_qdial_pane_t2

0x58e5,	// (0x0006f336) cell_qdial_pane_t3_ParamLimits

0x58e5,	// (0x0006f336) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00078b27) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00078b27) cell_qdial_pane_t

0x2c03,	// (0x0006c654) grid_highlight_pane_cp04

0x3001,	// (0x0006ca52) thumbnail_qdial_pane_ParamLimits

0x3001,	// (0x0006ca52) thumbnail_qdial_pane

0x305d,	// (0x0006caae) list_help_pane

0x3066,	// (0x0006cab7) scroll_pane_cp02

0x58f8,	// (0x0006f349) help_list_pane_t1_ParamLimits

0x58f8,	// (0x0006f349) help_list_pane_t1

0x3077,	// (0x0006cac8) bg_notes_pane_g2

0x306f,	// (0x0006cac0) bg_notes_pane_g3

0x309d,	// (0x0006caee) notes_bg_pane_g1

0x30ad,	// (0x0006cafe) notes_bg_pane_g4

0x30a5,	// (0x0006caf6) notes_bg_pane_g5

0x30b5,	// (0x0006cb06) notes_bg_pane_g6

0x30bd,	// (0x0006cb0e) notes_bg_pane_g7

0x30cd,	// (0x0006cb1e) notes_bg_pane_g8

0x30c5,	// (0x0006cb16) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00078b45) notes_bg_pane_g

0x592e,	// (0x0006f37f) list_notes_text_pane_ParamLimits

0x592e,	// (0x0006f37f) list_notes_text_pane

0x30d5,	// (0x0006cb26) list_notes_text_pane_g1

0x49bf,	// (0x0006e410) list_notes_text_pane_t1

0x5959,	// (0x0006f3aa) listscroll_cale_week_pane

0x597e,	// (0x0006f3cf) bg_cale_heading_pane

0x30ef,	// (0x0006cb40) bg_cale_pane_cp01

0x599e,	// (0x0006f3ef) cale_week_corner_pane

0x59b8,	// (0x0006f409) cale_week_day_heading_pane

0x59d8,	// (0x0006f429) cale_week_scroll_pane_g1

0x59f3,	// (0x0006f444) cale_week_scroll_pane_g2

0x5a06,	// (0x0006f457) cale_week_scroll_pane_g3

0x5a19,	// (0x0006f46a) cale_week_scroll_pane_g4

0x5a2c,	// (0x0006f47d) cale_week_scroll_pane_g5

0x5a3f,	// (0x0006f490) cale_week_scroll_pane_g6

0x5a52,	// (0x0006f4a3) cale_week_scroll_pane_g7

0x5a67,	// (0x0006f4b8) cale_week_scroll_pane_g8

0x5a7c,	// (0x0006f4cd) cale_week_scroll_pane_g9

0x5a8f,	// (0x0006f4e0) cale_week_scroll_pane_g10

0x5aa2,	// (0x0006f4f3) cale_week_scroll_pane_g11

0x5ab5,	// (0x0006f506) cale_week_scroll_pane_g12

0x5acc,	// (0x0006f51d) cale_week_scroll_pane_g13

0x5ae7,	// (0x0006f538) cale_week_scroll_pane_g14

0x5b02,	// (0x0006f553) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00078b54) cale_week_scroll_pane_g

0x5b32,	// (0x0006f583) cale_week_time_pane

0x5b47,	// (0x0006f598) grid_cale_week_pane

0x311e,	// (0x0006cb6f) scroll_pane_cp08

0x5b66,	// (0x0006f5b7) cell_cale_week_pane_ParamLimits

0x5b66,	// (0x0006f5b7) cell_cale_week_pane

0x5bc8,	// (0x0006f619) cale_week_day_heading_pane_t1

0x5be3,	// (0x0006f634) cale_week_day_heading_pane_t2

0x5bfe,	// (0x0006f64f) cale_week_day_heading_pane_t3

0x5c19,	// (0x0006f66a) cale_week_day_heading_pane_t4

0x5c34,	// (0x0006f685) cale_week_day_heading_pane_t5

0x5c4f,	// (0x0006f6a0) cale_week_day_heading_pane_t6

0x5c6a,	// (0x0006f6bb) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00078b75) cale_week_day_heading_pane_t

0x313b,	// (0x0006cb8c) bg_cale_side_pane

0x5c85,	// (0x0006f6d6) cale_week_time_pane_t1

0x5c9f,	// (0x0006f6f0) cale_week_time_pane_t2

0x5cb9,	// (0x0006f70a) cale_week_time_pane_t3

0x5cd3,	// (0x0006f724) cale_week_time_pane_t4

0x5ced,	// (0x0006f73e) cale_week_time_pane_t5

0x5d07,	// (0x0006f758) cale_week_time_pane_t6

0x5d25,	// (0x0006f776) cale_week_time_pane_t7

0x5d47,	// (0x0006f798) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00078b84) cale_week_time_pane_t

0x5d6b,	// (0x0006f7bc) cell_cale_week_pane_g2

0x5d8f,	// (0x0006f7e0) cell_cale_week_pane_g3_ParamLimits

0x5d8f,	// (0x0006f7e0) cell_cale_week_pane_g3

0x3149,	// (0x0006cb9a) grid_highlight_pane_cp07

0x3151,	// (0x0006cba2) listscroll_gms_pane

0x315b,	// (0x0006cbac) grid_gms_pane

0x3164,	// (0x0006cbb5) listscroll_gms_pane_g1

0x316c,	// (0x0006cbbd) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00078b95) listscroll_gms_pane_g

0x5da7,	// (0x0006f7f8) scroll_pane_cp010

0x5db2,	// (0x0006f803) cell_gms_pane_ParamLimits

0x5db2,	// (0x0006f803) cell_gms_pane

0x5dc5,	// (0x0006f816) cell_gms_pane_g1

0x3174,	// (0x0006cbc5) cell_gms_pane_g2

0x30d5,	// (0x0006cb26) cell_gms_pane_g3

0x317c,	// (0x0006cbcd) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00078b9a) cell_gms_pane_g

0x3185,	// (0x0006cbd6) grid_highlight_pane_cp09

0x7d1b,	// (0x0007176c) phob_pre_status_pane_g1

0x7d23,	// (0x00071774) phob_pre_status_pane_g2

0x7d2b,	// (0x0007177c) phob_pre_status_pane_g3

0x7d33,	// (0x00071784) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00078f40) phob_pre_status_pane_g

0x7d43,	// (0x00071794) phob_pre_status_pane_t1

0x7d53,	// (0x000717a4) phob_pre_status_pane_t2

0x7d63,	// (0x000717b4) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x00078f4b) phob_pre_status_pane_t

0x318d,	// (0x0006cbde) bg_list_pane_cp05

0x5dd5,	// (0x0006f826) grid_vorec_pane

0x5ddf,	// (0x0006f830) vorec_t1

0x5ded,	// (0x0006f83e) vorec_t2

0x5dfb,	// (0x0006f84c) vorec_t3

0x5e09,	// (0x0006f85a) vorec_t4

0xc563,	// (0x00075fb4) vorec_t5

0xc571,	// (0x00075fc2) vorec_t6

0x0004,

0xf152,	// (0x00078ba3) vorec_t

0xc57f,	// (0x00075fd0) wait_bar_pane_cp01

0x5e25,	// (0x0006f876) cell_vorec_pane_ParamLimits

0x5e25,	// (0x0006f876) cell_vorec_pane

0x5e38,	// (0x0006f889) cell_vorec_pane_g1

0x2c03,	// (0x0006c654) grid_highlight_pane_cp05

0x2ecb,	// (0x0006c91c) cams_zoom_pane

0x2ecb,	// (0x0006c91c) image_vga_pane

0x2ee7,	// (0x0006c938) main_camera_pane_g1

0x2ee7,	// (0x0006c938) main_camera_pane_g2

0x2ee7,	// (0x0006c938) main_camera_pane_g3

0x2ee7,	// (0x0006c938) main_camera_pane_g4

0x2ee7,	// (0x0006c938) main_camera_pane_g5

0x2ee7,	// (0x0006c938) main_camera_pane_g6

0x2ee7,	// (0x0006c938) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00078bae) main_camera_pane_g

0x2f35,	// (0x0006c986) main_camera_pane_t1

0x2f35,	// (0x0006c986) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00078bbf) main_camera_pane_t

0x5e42,	// (0x0006f893) cams_zoom_pane_cp_ParamLimits

0x5e42,	// (0x0006f893) cams_zoom_pane_cp

0x5e70,	// (0x0006f8c1) image_cif_pane_ParamLimits

0x5e70,	// (0x0006f8c1) image_cif_pane

0x24ab,	// (0x0006befc) image_subqcif_pane

0x5e7e,	// (0x0006f8cf) main_video_pane_g1_ParamLimits

0x5e7e,	// (0x0006f8cf) main_video_pane_g1

0x5ea6,	// (0x0006f8f7) main_video_pane_g2_ParamLimits

0x5ea6,	// (0x0006f8f7) main_video_pane_g2

0x5ed9,	// (0x0006f92a) main_video_pane_g3_ParamLimits

0x5ed9,	// (0x0006f92a) main_video_pane_g3

0x5ed9,	// (0x0006f92a) main_video_pane_g4_ParamLimits

0x5ed9,	// (0x0006f92a) main_video_pane_g4

0x5f07,	// (0x0006f958) main_video_pane_g5_ParamLimits

0x5f07,	// (0x0006f958) main_video_pane_g5

0x3195,	// (0x0006cbe6) main_video_pane_g6_ParamLimits

0x3195,	// (0x0006cbe6) main_video_pane_g6

0x0006,

0xf173,	// (0x00078bc4) main_video_pane_g_ParamLimits

0xf173,	// (0x00078bc4) main_video_pane_g

0x5f23,	// (0x0006f974) main_video_pane_t1_ParamLimits

0x5f23,	// (0x0006f974) main_video_pane_t1

0x2f17,	// (0x0006c968) cams_zoom_pane_g1

0x2f17,	// (0x0006c968) cams_zoom_pane_g2

0x2f17,	// (0x0006c968) cams_zoom_pane_g3

0x2f17,	// (0x0006c968) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00078bd3) cams_zoom_pane_g

0x2ecb,	// (0x0006c91c) grid_cams_pane

0x2ecb,	// (0x0006c91c) linegrid_cams_pane

0x5f5d,	// (0x0006f9ae) cell_cams_pane_ParamLimits

0x5f5d,	// (0x0006f9ae) cell_cams_pane

0x24ab,	// (0x0006befc) cams_burst_image_pane

0x2f17,	// (0x0006c968) cell_cams_pane_g1

0x24ab,	// (0x0006befc) grid_highlight_pane_cp03

0x2e76,	// (0x0006c8c7) mp_bg_pane_g1

0x24ab,	// (0x0006befc) bg_list_pane_cp03

0x24ab,	// (0x0006befc) bg_mp_pane

0x24ab,	// (0x0006befc) grid_mp_pane

0x2f17,	// (0x0006c968) media_player_g1

0x3693,	// (0x0006d0e4) media_player_t1

0x3693,	// (0x0006d0e4) media_player_t2

0x3693,	// (0x0006d0e4) media_player_t3

0x3693,	// (0x0006d0e4) media_player_t4

0x3693,	// (0x0006d0e4) media_player_t5

0x3693,	// (0x0006d0e4) media_player_t6

0x3693,	// (0x0006d0e4) media_player_t7

0x0006,

0xf4d9,	// (0x00078f2a) media_player_t

0x24ab,	// (0x0006befc) wait_bar_pane_cp02

0xf4be,	// (0x00078f0f) main_usb_pane_t

0x38fe,	// (0x0006d34f) cell_mp_pane

0x2e76,	// (0x0006c8c7) cell_mp_pane_g1

0x2c03,	// (0x0006c654) grid_highlight_pane_cp06

0x31af,	// (0x0006cc00) grid_skin_colour_pane

0x31b7,	// (0x0006cc08) list_highlight_pane_cp03

0x5f72,	// (0x0006f9c3) skin_g1

0x31bf,	// (0x0006cc10) skin_t1

0x31ce,	// (0x0006cc1f) skin_t2

0x0001,

0xf1b0,	// (0x00078c01) skin_t

0x5f7c,	// (0x0006f9cd) cell_skin_colour_pane_ParamLimits

0x5f7c,	// (0x0006f9cd) cell_skin_colour_pane

0x31dc,	// (0x0006cc2d) cell_skin_colour_pane_g1

0x6000,	// (0x0006fa51) call_video_g1_ParamLimits

0x6000,	// (0x0006fa51) call_video_g1

0x6010,	// (0x0006fa61) call_video_g2_ParamLimits

0x6010,	// (0x0006fa61) call_video_g2

0x0001,

0xf1b5,	// (0x00078c06) call_video_g_ParamLimits

0xf1b5,	// (0x00078c06) call_video_g

0x606a,	// (0x0006fabb) call_video_uplink_pane_cp1_ParamLimits

0x606a,	// (0x0006fabb) call_video_uplink_pane_cp1

0x31ee,	// (0x0006cc3f) call_video_uplink_pane_cp2

0x6136,	// (0x0006fb87) video_down_crop_pane_ParamLimits

0x6136,	// (0x0006fb87) video_down_crop_pane

0x6234,	// (0x0006fc85) video_down_pane_ParamLimits

0x6234,	// (0x0006fc85) video_down_pane

0x31f6,	// (0x0006cc47) video_down_subqcif_pane_ParamLimits

0x31f6,	// (0x0006cc47) video_down_subqcif_pane

0x320e,	// (0x0006cc5f) video_down_subqcif_pane_cp_ParamLimits

0x320e,	// (0x0006cc5f) video_down_subqcif_pane_cp

0x3234,	// (0x0006cc85) im_reading_pane_ParamLimits

0x3234,	// (0x0006cc85) im_reading_pane

0x6354,	// (0x0006fda5) im_writing_pane_ParamLimits

0x6354,	// (0x0006fda5) im_writing_pane

0x6372,	// (0x0006fdc3) im_reading_pane_t1

0x324e,	// (0x0006cc9f) list_im_pane

0x325f,	// (0x0006ccb0) scroll_pane_cp07

0x63c6,	// (0x0006fe17) im_writing_pane_t1_ParamLimits

0x63c6,	// (0x0006fe17) im_writing_pane_t1

0x3278,	// (0x0006ccc9) im_writing_pane_t2_ParamLimits

0x3278,	// (0x0006ccc9) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00078c10) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00078c10) im_writing_pane_t

0x2c03,	// (0x0006c654) input_focus_pane_cp04

0x2c03,	// (0x0006c654) input_focus_pane_cp05

0x63db,	// (0x0006fe2c) list_im_single_pane_ParamLimits

0x63db,	// (0x0006fe2c) list_im_single_pane

0x63ff,	// (0x0006fe50) list_single_im_pane_t1

0x318d,	// (0x0006cbde) blid_accuracy_pane

0x318d,	// (0x0006cbde) blid_compass_pane

0xe498,	// (0x00077ee9) main_location_t1

0xe498,	// (0x00077ee9) main_location_t2

0xe498,	// (0x00077ee9) main_location_t3

0x0002,

0xf4e8,	// (0x00078f39) main_location_t

0x2c03,	// (0x0006c654) aid_levels_location

0x2e76,	// (0x0006c8c7) blid_accuracy_pane_g1

0x2e76,	// (0x0006c8c7) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00078c64) blid_accuracy_pane_g

0x32c0,	// (0x0006cd11) wml_content_pane

0x32fe,	// (0x0006cd4f) wml_button_pane_ParamLimits

0x32fe,	// (0x0006cd4f) wml_button_pane

0x640e,	// (0x0006fe5f) wml_list_single_large_pane_ParamLimits

0x640e,	// (0x0006fe5f) wml_list_single_large_pane

0x6438,	// (0x0006fe89) wml_list_single_medium_pane_ParamLimits

0x6438,	// (0x0006fe89) wml_list_single_medium_pane

0x6469,	// (0x0006feba) wml_list_single_small_pane_ParamLimits

0x6469,	// (0x0006feba) wml_list_single_small_pane

0x3312,	// (0x0006cd63) wml_selection_box_pane_ParamLimits

0x3312,	// (0x0006cd63) wml_selection_box_pane

0x3325,	// (0x0006cd76) wml_list_single_pane_t1

0x3334,	// (0x0006cd85) wml_list_single_medium_pane_t1

0x3343,	// (0x0006cd94) wml_list_single_large_pane_t1

0x3352,	// (0x0006cda3) input_focus_pane_cp02_ParamLimits

0x3352,	// (0x0006cda3) input_focus_pane_cp02

0x3365,	// (0x0006cdb6) wml_selection_box_pane_g1

0x336e,	// (0x0006cdbf) wml_selection_box_pane_t1_ParamLimits

0x336e,	// (0x0006cdbf) wml_selection_box_pane_t1

0x2e5e,	// (0x0006c8af) bg_wml_button_pane_ParamLimits

0x2e5e,	// (0x0006c8af) bg_wml_button_pane

0x3386,	// (0x0006cdd7) wml_button_pane_g1

0x338e,	// (0x0006cddf) wml_button_pane_t1

0x3386,	// (0x0006cdd7) wml_button_bg_pane_g1

0x339e,	// (0x0006cdef) wml_button_bg_pane_g2

0x33a6,	// (0x0006cdf7) wml_button_bg_pane_g3

0x33ae,	// (0x0006cdff) wml_button_bg_pane_g4

0x33b6,	// (0x0006ce07) wml_button_bg_pane_g5

0x33be,	// (0x0006ce0f) wml_button_bg_pane_g6

0x33c6,	// (0x0006ce17) wml_button_bg_pane_g7

0x33ce,	// (0x0006ce1f) wml_button_bg_pane_g8

0x33d6,	// (0x0006ce27) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00078c15) wml_button_bg_pane_g

0x64a3,	// (0x0006fef4) bg_list_pane_cp02

0x33de,	// (0x0006ce2f) mce_header_pane_ParamLimits

0x33de,	// (0x0006ce2f) mce_header_pane

0x33f4,	// (0x0006ce45) mce_icon_pane

0x33f4,	// (0x0006ce45) mce_image_pane

0x33fd,	// (0x0006ce4e) mce_text_pane_ParamLimits

0x33fd,	// (0x0006ce4e) mce_text_pane

0x64ad,	// (0x0006fefe) scroll_pane_cp03

0x32f6,	// (0x0006cd47) scroll_pane_cp04

0x3410,	// (0x0006ce61) scroll_pane_cp05_ParamLimits

0x3410,	// (0x0006ce61) scroll_pane_cp05

0x64b7,	// (0x0006ff08) mce_header_field_pane_ParamLimits

0x64b7,	// (0x0006ff08) mce_header_field_pane

0x64d7,	// (0x0006ff28) mce_header_field_pane_2_ParamLimits

0x64d7,	// (0x0006ff28) mce_header_field_pane_2

0x64ed,	// (0x0006ff3e) mce_header_field_pane_3

0x64f5,	// (0x0006ff46) list_single_mce_message_pane_ParamLimits

0x64f5,	// (0x0006ff46) list_single_mce_message_pane

0x6520,	// (0x0006ff71) list_single_mce_smart_pane_ParamLimits

0x6520,	// (0x0006ff71) list_single_mce_smart_pane

0x341c,	// (0x0006ce6d) input_focus_pane_cp03

0x3425,	// (0x0006ce76) list_header_data_pane

0x6556,	// (0x0006ffa7) mce_header_field_pane_t1

0x6564,	// (0x0006ffb5) list_single_mce_header_pane_ParamLimits

0x6564,	// (0x0006ffb5) list_single_mce_header_pane

0x342d,	// (0x0006ce7e) list_single_mce_header_pane_t1

0x343c,	// (0x0006ce8d) list_single_mce_message_pane_g1

0x3444,	// (0x0006ce95) list_single_mce_message_pane_t1

0x65b6,	// (0x00070007) bg_cale_heading_pane_cp01_ParamLimits

0x65b6,	// (0x00070007) bg_cale_heading_pane_cp01

0x3452,	// (0x0006cea3) bg_cale_pane_cp02_ParamLimits

0x3452,	// (0x0006cea3) bg_cale_pane_cp02

0x6604,	// (0x00070055) cale_month_corner_pane

0x6623,	// (0x00070074) cale_month_day_heading_pane_ParamLimits

0x6623,	// (0x00070074) cale_month_day_heading_pane

0x6689,	// (0x000700da) cale_month_pane_g1_ParamLimits

0x6689,	// (0x000700da) cale_month_pane_g1

0x66cc,	// (0x0007011d) cale_month_pane_g2_ParamLimits

0x66cc,	// (0x0007011d) cale_month_pane_g2

0x6704,	// (0x00070155) cale_month_pane_g3_ParamLimits

0x6704,	// (0x00070155) cale_month_pane_g3

0x6750,	// (0x000701a1) cale_month_pane_g4_ParamLimits

0x6750,	// (0x000701a1) cale_month_pane_g4

0x679c,	// (0x000701ed) cale_month_pane_g5_ParamLimits

0x679c,	// (0x000701ed) cale_month_pane_g5

0x67e8,	// (0x00070239) cale_month_pane_g6_ParamLimits

0x67e8,	// (0x00070239) cale_month_pane_g6

0x6834,	// (0x00070285) cale_month_pane_g7_ParamLimits

0x6834,	// (0x00070285) cale_month_pane_g7

0x6898,	// (0x000702e9) cale_month_pane_g8_ParamLimits

0x6898,	// (0x000702e9) cale_month_pane_g8

0x68fc,	// (0x0007034d) cale_month_pane_g9_ParamLimits

0x68fc,	// (0x0007034d) cale_month_pane_g9

0x695a,	// (0x000703ab) cale_month_pane_g10_ParamLimits

0x695a,	// (0x000703ab) cale_month_pane_g10

0x69b6,	// (0x00070407) cale_month_pane_g11_ParamLimits

0x69b6,	// (0x00070407) cale_month_pane_g11

0x6a0a,	// (0x0007045b) cale_month_pane_g12_ParamLimits

0x6a0a,	// (0x0007045b) cale_month_pane_g12

0x6a60,	// (0x000704b1) cale_month_pane_g13_ParamLimits

0x6a60,	// (0x000704b1) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00078c28) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00078c28) cale_month_pane_g

0x6ab6,	// (0x00070507) cale_month_week_pane

0x6ada,	// (0x0007052b) grid_cale_month_pane_ParamLimits

0x6ada,	// (0x0007052b) grid_cale_month_pane

0x6b33,	// (0x00070584) cale_month_day_heading_pane_t1

0x6bb9,	// (0x0007060a) cale_month_day_heading_pane_t2

0x6c32,	// (0x00070683) cale_month_day_heading_pane_t3

0x6cab,	// (0x000706fc) cale_month_day_heading_pane_t4

0x6d24,	// (0x00070775) cale_month_day_heading_pane_t5

0x6d9d,	// (0x000707ee) cale_month_day_heading_pane_t6

0x6e16,	// (0x00070867) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00078c43) cale_month_day_heading_pane_t

0x313b,	// (0x0006cb8c) bg_cale_side_pane_cp01

0x6ea7,	// (0x000708f8) cale_month_week_pane_t1

0x6ec0,	// (0x00070911) cale_month_week_pane_t2

0x6ed9,	// (0x0007092a) cale_month_week_pane_t3

0x6ef2,	// (0x00070943) cale_month_week_pane_t4

0x6f0b,	// (0x0007095c) cale_month_week_pane_t5

0x6f2c,	// (0x0007097d) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00078c52) cale_month_week_pane_t

0x6f4d,	// (0x0007099e) cell_cale_month_pane_ParamLimits

0x6f4d,	// (0x0007099e) cell_cale_month_pane

0x706f,	// (0x00070ac0) cell_cale_month_pane_g1

0x707b,	// (0x00070acc) cell_cale_month_pane_t1_ParamLimits

0x707b,	// (0x00070acc) cell_cale_month_pane_t1

0x3149,	// (0x0006cb9a) grid_highlight_pane_cp08

0x2e76,	// (0x0006c8c7) main_smil_g1

0x70a7,	// (0x00070af8) smil_status_pane

0x3491,	// (0x0006cee2) smil_text_pane

0x30cd,	// (0x0006cb1e) bg_popup_call3_rect_pane_g8

0x30c5,	// (0x0006cb16) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00078c69) bg_popup_call3_rect_pane_g

0xe561,	// (0x00077fb2) smil_status_volume_pane_g1

0x349b,	// (0x0006ceec) smil_status_pane_t1

0x80c2,	// (0x00071b13) volume_smil_pane

0x34b2,	// (0x0006cf03) list_smil_text_pane

0x70ba,	// (0x00070b0b) scroll_pane_cp011

0x70c5,	// (0x00070b16) smil_text_list_pane_t1_ParamLimits

0x70c5,	// (0x00070b16) smil_text_list_pane_t1

0x713d,	// (0x00070b8e) aid_volume_smil_ParamLimits

0x713d,	// (0x00070b8e) aid_volume_smil

0x2e76,	// (0x0006c8c7) smil_volume_pane_g1

0x2e76,	// (0x0006c8c7) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00078c64) smil_volume_pane_g

0x5959,	// (0x0006f3aa) listscroll_cale_day_pane

0x34c5,	// (0x0006cf16) bg_cale_pane

0x34dd,	// (0x0006cf2e) list_cale_pane

0x3500,	// (0x0006cf51) scroll_pane_cp09

0x309d,	// (0x0006caee) cale_bg_pane_g1

0x3077,	// (0x0006cac8) cale_bg_pane_g2

0x306f,	// (0x0006cac0) cale_bg_pane_g3

0x30ad,	// (0x0006cafe) cale_bg_pane_g4

0x30a5,	// (0x0006caf6) cale_bg_pane_g5

0x30b5,	// (0x0006cb06) cale_bg_pane_g6

0x30bd,	// (0x0006cb0e) cale_bg_pane_g7

0x30cd,	// (0x0006cb1e) cale_bg_pane_g8

0x30c5,	// (0x0006cb16) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00078c69) cale_bg_pane_g

0x715f,	// (0x00070bb0) list_cale_time_pane_ParamLimits

0x715f,	// (0x00070bb0) list_cale_time_pane

0x3519,	// (0x0006cf6a) list_cale_time_pane_g1_ParamLimits

0x3519,	// (0x0006cf6a) list_cale_time_pane_g1

0x3525,	// (0x0006cf76) list_cale_time_pane_g2_ParamLimits

0x3525,	// (0x0006cf76) list_cale_time_pane_g2

0x7181,	// (0x00070bd2) list_cale_time_pane_g3_ParamLimits

0x7181,	// (0x00070bd2) list_cale_time_pane_g3

0x718f,	// (0x00070be0) list_cale_time_pane_g4_ParamLimits

0x718f,	// (0x00070be0) list_cale_time_pane_g4

0x719d,	// (0x00070bee) list_cale_time_pane_g5_ParamLimits

0x719d,	// (0x00070bee) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00078c7c) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00078c7c) list_cale_time_pane_g

0x353f,	// (0x0006cf90) list_cale_time_pane_t1_ParamLimits

0x353f,	// (0x0006cf90) list_cale_time_pane_t1

0x3567,	// (0x0006cfb8) list_cale_time_pane_t2_ParamLimits

0x3567,	// (0x0006cfb8) list_cale_time_pane_t2

0x7440,	// (0x00070e91) aid_blid_cardinal_pane

0x7482,	// (0x00070ed3) compass_pane_t4

0x358f,	// (0x0006cfe0) list_cale_time_pane_t4_ParamLimits

0x358f,	// (0x0006cfe0) list_cale_time_pane_t4

0x7490,	// (0x00070ee1) compass_pane_t5

0x74a0,	// (0x00070ef1) compass_pane_t6

0x74ae,	// (0x00070eff) compass_pane_t7

0x3a43,	// (0x0006d494) navi_pane_cc_t1

0xd31e,	// (0x00076d6f) aid_phob_thumbnail_center_pane

0x7865,	// (0x000712b6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00078c89) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00078c89) list_cale_time_pane_t

0x251f,	// (0x0006bf70) bg_popup_window_pane_cp02_ParamLimits

0x251f,	// (0x0006bf70) bg_popup_window_pane_cp02

0x35b7,	// (0x0006d008) heading_pane_cp01_ParamLimits

0x35b7,	// (0x0006d008) heading_pane_cp01

0x35c3,	// (0x0006d014) loc_req_pane_ParamLimits

0x35c3,	// (0x0006d014) loc_req_pane

0x35d5,	// (0x0006d026) loc_type_pane_ParamLimits

0x35d5,	// (0x0006d026) loc_type_pane

0x35e7,	// (0x0006d038) loc_type_pane_t1_ParamLimits

0x35e7,	// (0x0006d038) loc_type_pane_t1

0x35f9,	// (0x0006d04a) loc_type_pane_t2_ParamLimits

0x35f9,	// (0x0006d04a) loc_type_pane_t2

0x360b,	// (0x0006d05c) loc_type_pane_t3_ParamLimits

0x360b,	// (0x0006d05c) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00078c90) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00078c90) loc_type_pane_t

0x361d,	// (0x0006d06e) list_loc_req_pane

0x3627,	// (0x0006d078) scroll_pane_cp012

0x71ab,	// (0x00070bfc) list_single_loc_request_popup_menu_pane_ParamLimits

0x71ab,	// (0x00070bfc) list_single_loc_request_popup_menu_pane

0x3632,	// (0x0006d083) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3632,	// (0x0006d083) list_single_loc_request_popup_menu_pane_g1

0x363e,	// (0x0006d08f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x363e,	// (0x0006d08f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00078c97) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00078c97) list_single_loc_request_popup_menu_pane_g

0x364a,	// (0x0006d09b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x364a,	// (0x0006d09b) list_single_loc_request_popup_menu_pane_t1

0x71bd,	// (0x00070c0e) bg_popup_window_pane_cp03_ParamLimits

0x71bd,	// (0x00070c0e) bg_popup_window_pane_cp03

0x71cb,	// (0x00070c1c) heading_loc_req_pane_ParamLimits

0x71cb,	// (0x00070c1c) heading_loc_req_pane

0x71d7,	// (0x00070c28) popup_dyc_status_message_window_g1_ParamLimits

0x71d7,	// (0x00070c28) popup_dyc_status_message_window_g1

0x71e3,	// (0x00070c34) popup_dyc_status_message_window_t1_ParamLimits

0x71e3,	// (0x00070c34) popup_dyc_status_message_window_t1

0x71f5,	// (0x00070c46) popup_dyc_status_message_window_t2_ParamLimits

0x71f5,	// (0x00070c46) popup_dyc_status_message_window_t2

0x7207,	// (0x00070c58) popup_dyc_status_message_window_t3_ParamLimits

0x7207,	// (0x00070c58) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00078c9c) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00078c9c) popup_dyc_status_message_window_t

0x2c03,	// (0x0006c654) bg_heading_pane_cp01

0x366c,	// (0x0006d0bd) heading_loc_req_pane_g1

0x3674,	// (0x0006d0c5) heading_loc_req_pane_g2

0x367c,	// (0x0006d0cd) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00078ca3) heading_loc_req_pane_g

0x3684,	// (0x0006d0d5) heading_loc_req_pane_t1

0x36a3,	// (0x0006d0f4) bg_popup_sub_pane_cp01_ParamLimits

0x36a3,	// (0x0006d0f4) bg_popup_sub_pane_cp01

0x36b1,	// (0x0006d102) popup_cale_events_window_g1_ParamLimits

0x36b1,	// (0x0006d102) popup_cale_events_window_g1

0x36d1,	// (0x0006d122) popup_cale_events_window_g2_ParamLimits

0x36d1,	// (0x0006d122) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00078cc5) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00078cc5) popup_cale_events_window_g

0x36f1,	// (0x0006d142) popup_cale_events_window_t1_ParamLimits

0x36f1,	// (0x0006d142) popup_cale_events_window_t1

0x3703,	// (0x0006d154) popup_cale_events_window_t2_ParamLimits

0x3703,	// (0x0006d154) popup_cale_events_window_t2

0x3741,	// (0x0006d192) popup_cale_events_window_t3_ParamLimits

0x3741,	// (0x0006d192) popup_cale_events_window_t3

0x377b,	// (0x0006d1cc) popup_cale_events_window_t4_ParamLimits

0x377b,	// (0x0006d1cc) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x00078cca) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x00078cca) popup_cale_events_window_t

0x7231,	// (0x00070c82) call_type_pane

0xd295,	// (0x00076ce6) popup_call_status_window_g1

0x723d,	// (0x00070c8e) popup_call_status_window_g2

0x7249,	// (0x00070c9a) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00078cd3) popup_call_status_window_g

0x37b1,	// (0x0006d202) call_type_pane_g1

0x37ba,	// (0x0006d20b) call_type_pane_g2

0x0001,

0xf289,	// (0x00078cda) call_type_pane_g

0x2c03,	// (0x0006c654) bg_popup_sub_pane_cp02

0x37c3,	// (0x0006d214) listscroll_popup_wml_pane

0x37cb,	// (0x0006d21c) list_wml_pane

0x37d5,	// (0x0006d226) scroll_pane_cp013

0x37e0,	// (0x0006d231) list_single_graphic_popup_wml_pane_ParamLimits

0x37e0,	// (0x0006d231) list_single_graphic_popup_wml_pane

0x2e76,	// (0x0006c8c7) list_single_graphic_popup_wml_pane_g1

0x37f4,	// (0x0006d245) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00078cdf) list_single_graphic_popup_wml_pane_g

0x37fc,	// (0x0006d24d) list_single_graphic_popup_wml_pane_t1

0x380a,	// (0x0006d25b) aid_call_pane

0x2e56,	// (0x0006c8a7) popup_clock_analogue_window_g1

0x2e56,	// (0x0006c8a7) popup_clock_analogue_window_g2

0x7255,	// (0x00070ca6) popup_clock_analogue_window_g3

0x7255,	// (0x00070ca6) popup_clock_analogue_window_g4

0x2e76,	// (0x0006c8c7) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00078ce4) popup_clock_analogue_window_g

0x725d,	// (0x00070cae) popup_clock_analogue_window_t1

0x726b,	// (0x00070cbc) clock_digital_number_pane_ParamLimits

0x726b,	// (0x00070cbc) clock_digital_number_pane

0x7277,	// (0x00070cc8) clock_digital_number_pane_cp02_ParamLimits

0x7277,	// (0x00070cc8) clock_digital_number_pane_cp02

0x7283,	// (0x00070cd4) clock_digital_number_pane_cp03_ParamLimits

0x7283,	// (0x00070cd4) clock_digital_number_pane_cp03

0x728f,	// (0x00070ce0) clock_digital_number_pane_cp04_ParamLimits

0x728f,	// (0x00070ce0) clock_digital_number_pane_cp04

0x729f,	// (0x00070cf0) clock_digital_separator_pane_ParamLimits

0x729f,	// (0x00070cf0) clock_digital_separator_pane

0x72ab,	// (0x00070cfc) popup_clock_digital_window_t1

0x2e76,	// (0x0006c8c7) clock_digital_number_pane_g1

0x2e76,	// (0x0006c8c7) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00078c64) clock_digital_number_pane_g

0x2e76,	// (0x0006c8c7) clock_digital_separator_pane_g1

0x2e76,	// (0x0006c8c7) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00078c64) clock_digital_separator_pane_g

0x2c03,	// (0x0006c654) bg_popup_window_pane_cp04

0x381a,	// (0x0006d26b) heading_pane_cp03

0x318d,	// (0x0006cbde) listscroll_popup_gms_pane

0x2c03,	// (0x0006c654) grid_large_graphic_popup_pane

0x3822,	// (0x0006d273) listscroll_popup_gms_pane_g1

0x382b,	// (0x0006d27c) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00078cef) listscroll_popup_gms_pane_g

0x3834,	// (0x0006d285) scroll_pane_cp014

0x2ecb,	// (0x0006c91c) cell_large_graphic_popup_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cell_large_graphic_popup_pane

0x2ed9,	// (0x0006c92a) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_large_graphic_popup_pane_g1

0x383d,	// (0x0006d28e) cell_large_graphic_popup_pane_g2_ParamLimits

0x383d,	// (0x0006d28e) cell_large_graphic_popup_pane_g2

0x384b,	// (0x0006d29c) cell_large_graphic_popup_pane_g3_ParamLimits

0x384b,	// (0x0006d29c) cell_large_graphic_popup_pane_g3

0x3859,	// (0x0006d2aa) cell_large_graphic_popup_pane_g4_ParamLimits

0x3859,	// (0x0006d2aa) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00078cf4) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00078cf4) cell_large_graphic_popup_pane_g

0x2c03,	// (0x0006c654) grid_highlight_pane_cp010

0x2e76,	// (0x0006c8c7) bg_popup_call_pane_g1

0x386a,	// (0x0006d2bb) list_single_graphic_popup_conf_pane_ParamLimits

0x386a,	// (0x0006d2bb) list_single_graphic_popup_conf_pane

0x387d,	// (0x0006d2ce) list_highlight_pane_cp01

0x3886,	// (0x0006d2d7) list_single_graphic_popup_conf_pane_g1

0x388e,	// (0x0006d2df) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00078cfd) list_single_graphic_popup_conf_pane_g

0x3896,	// (0x0006d2e7) list_single_graphic_popup_conf_pane_t1

0x38a4,	// (0x0006d2f5) linegrid_cams_pane_g1

0x72c8,	// (0x00070d19) linegrid_cams_pane_g2

0x30d5,	// (0x0006cb26) linegrid_cams_pane_g3

0x38ad,	// (0x0006d2fe) linegrid_cams_pane_g4

0x72d1,	// (0x00070d22) linegrid_cams_pane_g5

0x72da,	// (0x00070d2b) linegrid_cams_pane_g6

0x317c,	// (0x0006cbcd) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00078d02) linegrid_cams_pane_g

0x38b6,	// (0x0006d307) popup_clock_analogue_window

0x38b6,	// (0x0006d307) popup_clock_digital_window

0x2c03,	// (0x0006c654) popup_phob_thumbnail_window

0x2e76,	// (0x0006c8c7) call_video_uplink_pane_g1

0x38bf,	// (0x0006d310) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00078d11) call_video_uplink_pane_g

0x38c7,	// (0x0006d318) video_uplink_pane

0x38cf,	// (0x0006d320) mce_image_pane_g1

0x72e3,	// (0x00070d34) mce_image_pane_g2

0x72ed,	// (0x00070d3e) mce_image_pane_g3

0x72f5,	// (0x00070d46) mce_image_pane_g4

0x72fd,	// (0x00070d4e) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00078d16) mce_image_pane_g

0x38d9,	// (0x0006d32a) control_top_pane_stacon_cp01_ParamLimits

0x38d9,	// (0x0006d32a) control_top_pane_stacon_cp01

0x38ed,	// (0x0006d33e) uni_indicator_pane_stacon_cp01_ParamLimits

0x38ed,	// (0x0006d33e) uni_indicator_pane_stacon_cp01

0x38fe,	// (0x0006d34f) bg_popup_sub_pane_cp03

0x3908,	// (0x0006d359) chi_dic_find_pane

0x7305,	// (0x00070d56) listscroll_chi_dic_pane

0x3910,	// (0x0006d361) main_pane_chidic_g1

0x3918,	// (0x0006d369) chi_dic_find_pane_t1

0x3926,	// (0x0006d377) find_chidic_pane

0x392f,	// (0x0006d380) chi_dic_list_pane_ParamLimits

0x392f,	// (0x0006d380) chi_dic_list_pane

0x3940,	// (0x0006d391) scroll_pane_cp020

0x3948,	// (0x0006d399) find_chidic_pane_t1

0x2c03,	// (0x0006c654) input_focus_pane_cp06

0x7319,	// (0x00070d6a) list_chi_dic_pane_ParamLimits

0x7319,	// (0x00070d6a) list_chi_dic_pane

0x7333,	// (0x00070d84) list_chi_dic_pane_t1_ParamLimits

0x7333,	// (0x00070d84) list_chi_dic_pane_t1

0x2c03,	// (0x0006c654) list_highlight_pane_cp020

0x3957,	// (0x0006d3a8) bg_cale_heading_pane_g1

0x7346,	// (0x00070d97) bg_cale_heading_pane_g2

0x734e,	// (0x00070d9f) bg_cale_heading_pane_g3

0x7356,	// (0x00070da7) bg_cale_heading_pane_g4

0x7360,	// (0x00070db1) bg_cale_heading_pane_g5

0x736a,	// (0x00070dbb) bg_cale_heading_pane_g6

0x7372,	// (0x00070dc3) bg_cale_heading_pane_g7

0x737a,	// (0x00070dcb) bg_cale_heading_pane_g8

0x7384,	// (0x00070dd5) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00078d21) bg_cale_heading_pane_g

0x3957,	// (0x0006d3a8) bg_cale_side_pane_g1

0x738e,	// (0x00070ddf) bg_cale_side_pane_g2

0x7398,	// (0x00070de9) bg_cale_side_pane_g3

0x73a2,	// (0x00070df3) bg_cale_side_pane_g4

0x73ac,	// (0x00070dfd) bg_cale_side_pane_g5

0x73b6,	// (0x00070e07) bg_cale_side_pane_g6

0x73c0,	// (0x00070e11) bg_cale_side_pane_g7

0x73ca,	// (0x00070e1b) bg_cale_side_pane_g8

0x73d2,	// (0x00070e23) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00078d34) bg_cale_side_pane_g

0x73da,	// (0x00070e2b) popup_call_status_window_ParamLimits

0x73da,	// (0x00070e2b) popup_call_status_window

0x395f,	// (0x0006d3b0) stacon_top_pane

0x3967,	// (0x0006d3b8) status_pane_ParamLimits

0x3967,	// (0x0006d3b8) status_pane

0x397c,	// (0x0006d3cd) status_small_pane

0x3984,	// (0x0006d3d5) control_pane

0x2c03,	// (0x0006c654) stacon_bottom_pane

0x398c,	// (0x0006d3dd) list_single_mce_smart_pane_t1_ParamLimits

0x398c,	// (0x0006d3dd) list_single_mce_smart_pane_t1

0x399f,	// (0x0006d3f0) list_single_mce_smart_pane_t2_ParamLimits

0x399f,	// (0x0006d3f0) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00078d47) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00078d47) list_single_mce_smart_pane_t

0x73e6,	// (0x00070e37) compass_pane

0x73f2,	// (0x00070e43) main_location2_pane_t1

0x7406,	// (0x00070e57) main_location2_pane_t2

0x741a,	// (0x00070e6b) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00078d4c) main_location2_pane_t

0x39be,	// (0x0006d40f) compass_pane_g1_ParamLimits

0x39be,	// (0x0006d40f) compass_pane_g1

0x7464,	// (0x00070eb5) compass_pane_t1

0x7473,	// (0x00070ec4) compass_pane_t2

0x0005,

0xf304,	// (0x00078d55) compass_pane_t

0x74be,	// (0x00070f0f) text_secondary_cp61

0x3a3a,	// (0x0006d48b) navi_pane_cams_g5

0x3ab6,	// (0x0006d507) navi_pane_im_t1

0x3ac4,	// (0x0006d515) navi_pane_mp_g1_ParamLimits

0x3ac4,	// (0x0006d515) navi_pane_mp_g1

0x3ad8,	// (0x0006d529) navi_pane_mp_g2_ParamLimits

0x3ad8,	// (0x0006d529) navi_pane_mp_g2

0x3ae4,	// (0x0006d535) navi_pane_mp_g3_ParamLimits

0x3ae4,	// (0x0006d535) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00078d69) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00078d69) navi_pane_mp_g

0x3af0,	// (0x0006d541) navi_pane_mp_t1

0x3afe,	// (0x0006d54f) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00078d70) navi_pane_mp_t

0x3b69,	// (0x0006d5ba) navi_pane_vt_g1

0x3af0,	// (0x0006d541) navi_pane_vt_t1

0x3b71,	// (0x0006d5c2) navi_slider_pane

0x318d,	// (0x0006cbde) zooming_pane

0x3b81,	// (0x0006d5d2) navi_slider_pane_g1

0x74f9,	// (0x00070f4a) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00078d77) navi_slider_pane_g

0xd2a3,	// (0x00076cf4) aid_levels_zoom

0xd2ab,	// (0x00076cfc) zooming_pane_g1

0xd2b3,	// (0x00076d04) zooming_pane_g2

0xd2b3,	// (0x00076d04) zooming_pane_g3

0x0002,

0xf335,	// (0x00078d86) zooming_pane_g

0xd2bb,	// (0x00076d0c) level_10_zoom

0xd2c4,	// (0x00076d15) level_11_zoom

0xd2cd,	// (0x00076d1e) level_1_zoom

0xd2d6,	// (0x00076d27) level_2_zoom

0xd2df,	// (0x00076d30) level_3_zoom

0xd2e8,	// (0x00076d39) level_4_zoom

0xd2f1,	// (0x00076d42) level_5_zoom

0xd2fa,	// (0x00076d4b) level_6_zoom

0xd303,	// (0x00076d54) level_7_zoom

0xd30c,	// (0x00076d5d) level_8_zoom

0xd315,	// (0x00076d66) level_9_zoom

0xd326,	// (0x00076d77) popup_phob_thumbnail_window_g1

0xd32e,	// (0x00076d7f) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00078d8d) popup_phob_thumbnail_window_g

0x7d73,	// (0x000717c4) level_1_location

0x7d7b,	// (0x000717cc) level_2_location

0x7d83,	// (0x000717d4) level_3_location

0x7d8d,	// (0x000717de) level_4_location

0x318d,	// (0x0006cbde) level_5_location

0x750b,	// (0x00070f5c) mce_icon_pane_g1

0x7513,	// (0x00070f64) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00078d92) mce_icon_pane_g

0x751b,	// (0x00070f6c) main_mup_pane_g1_ParamLimits

0x751b,	// (0x00070f6c) main_mup_pane_g1

0x2ef5,	// (0x0006c946) main_mup_pane_g2_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g2

0x2ef5,	// (0x0006c946) main_mup_pane_g3_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g3

0x2ef5,	// (0x0006c946) main_mup_pane_g4_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g4

0x2ef5,	// (0x0006c946) main_mup_pane_g5_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g5

0x2ef5,	// (0x0006c946) main_mup_pane_g6_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g6

0x2ef5,	// (0x0006c946) main_mup_pane_g7_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g7

0x2ef5,	// (0x0006c946) main_mup_pane_g8_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g8

0x2ef5,	// (0x0006c946) main_mup_pane_g9_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g9

0x2ef5,	// (0x0006c946) main_mup_pane_g10_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g10

0x2ef5,	// (0x0006c946) main_mup_pane_g11_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g11

0x2ee7,	// (0x0006c938) main_mup_pane_g12_ParamLimits

0x2ee7,	// (0x0006c938) main_mup_pane_g12

0x2ef5,	// (0x0006c946) main_mup_pane_g13_ParamLimits

0x2ef5,	// (0x0006c946) main_mup_pane_g13

0x000c,

0xf346,	// (0x00078d97) main_mup_pane_g_ParamLimits

0xf346,	// (0x00078d97) main_mup_pane_g

0x2f03,	// (0x0006c954) main_mup_pane_t1_ParamLimits

0x2f03,	// (0x0006c954) main_mup_pane_t1

0x2f03,	// (0x0006c954) main_mup_pane_t2_ParamLimits

0x2f03,	// (0x0006c954) main_mup_pane_t2

0x2f03,	// (0x0006c954) main_mup_pane_t3_ParamLimits

0x2f03,	// (0x0006c954) main_mup_pane_t3

0x2f35,	// (0x0006c986) main_mup_pane_t4_ParamLimits

0x2f35,	// (0x0006c986) main_mup_pane_t4

0x2f35,	// (0x0006c986) main_mup_pane_t5_ParamLimits

0x2f35,	// (0x0006c986) main_mup_pane_t5

0x2f21,	// (0x0006c972) main_mup_pane_t6_ParamLimits

0x2f21,	// (0x0006c972) main_mup_pane_t6

0x0005,

0xf361,	// (0x00078db2) main_mup_pane_t_ParamLimits

0xf361,	// (0x00078db2) main_mup_pane_t

0x2761,	// (0x0006c1b2) mup_progress_pane_ParamLimits

0x2761,	// (0x0006c1b2) mup_progress_pane

0xe47c,	// (0x00077ecd) mup_visualizer_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup_visualizer_pane

0xe47c,	// (0x00077ecd) mup_volume_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup_volume_pane

0x2ee7,	// (0x0006c938) mup_visualizer_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) mup_visualizer_pane_g1

0xd336,	// (0x00076d87) mup_visualizer_pane_g2_ParamLimits

0xd336,	// (0x00076d87) mup_visualizer_pane_g2

0x2ed9,	// (0x0006c92a) mup_visualizer_pane_g3_ParamLimits

0x2ed9,	// (0x0006c92a) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00078dbf) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00078dbf) mup_visualizer_pane_g

0x2f17,	// (0x0006c968) mup_volume_pane_g1

0x2f17,	// (0x0006c968) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00078add) mup_volume_pane_g

0x2f17,	// (0x0006c968) mup_progress_pane_g1

0x2f17,	// (0x0006c968) mup_progress_pane_g2

0x2f17,	// (0x0006c968) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00078dc6) mup_progress_pane_g

0x2c03,	// (0x0006c654) bg_popup_window_pane_cp05

0xd344,	// (0x00076d95) heading_pane_cp02_ParamLimits

0xd344,	// (0x00076d95) heading_pane_cp02

0xd35e,	// (0x00076daf) list_popup_blid_pane

0xd366,	// (0x00076db7) list_blid_sat_info_pane_ParamLimits

0xd366,	// (0x00076db7) list_blid_sat_info_pane

0xd379,	// (0x00076dca) list_blid_sat_info_pane_g1

0xd381,	// (0x00076dd2) list_blid_sat_info_pane_t1

0x7618,	// (0x00071069) mup_equalizer_pane_ParamLimits

0x7618,	// (0x00071069) mup_equalizer_pane

0x7639,	// (0x0007108a) mup_equalizer_pane_cp1_ParamLimits

0x7639,	// (0x0007108a) mup_equalizer_pane_cp1

0x765a,	// (0x000710ab) mup_equalizer_pane_cp2_ParamLimits

0x765a,	// (0x000710ab) mup_equalizer_pane_cp2

0x767b,	// (0x000710cc) mup_equalizer_pane_cp3_ParamLimits

0x767b,	// (0x000710cc) mup_equalizer_pane_cp3

0x769c,	// (0x000710ed) mup_equalizer_pane_cp4_ParamLimits

0x769c,	// (0x000710ed) mup_equalizer_pane_cp4

0x76bd,	// (0x0007110e) mup_equalizer_pane_cp5

0x76d3,	// (0x00071124) mup_equalizer_pane_cp6

0x76eb,	// (0x0007113c) mup_equalizer_pane_cp7

0xe41e,	// (0x00077e6f) bg_popup_call_poc_act_pane_g9

0xe426,	// (0x00077e77) bg_popup_call_poc_act_pane_g10

0xe42e,	// (0x00077e7f) bg_popup_call_poc_act_pane_g11

0x000a,

0x2e5e,	// (0x0006c8af) mup_scale_pane

0x2e76,	// (0x0006c8c7) mup_scale_pane_g1

0xd38f,	// (0x00076de0) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00078de2) mup_scale_pane_g

0xd3b3,	// (0x00076e04) msg_data_pane

0xd3bb,	// (0x00076e0c) scroll_pane_cp017

0x49cd,	// (0x0006e41e) bg_list_pane_cp04_ParamLimits

0x49cd,	// (0x0006e41e) bg_list_pane_cp04

0xd3c3,	// (0x00076e14) msg_data_pane_g1

0x7715,	// (0x00071166) msg_data_pane_g2

0x771f,	// (0x00071170) msg_data_pane_g3

0x7727,	// (0x00071178) msg_data_pane_g4

0x772f,	// (0x00071180) msg_data_pane_g5

0x7737,	// (0x00071188) msg_data_pane_g6

0x773f,	// (0x00071190) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00078df1) msg_data_pane_g

0x49f3,	// (0x0006e444) msg_text_pane_ParamLimits

0x49f3,	// (0x0006e444) msg_text_pane

0x7747,	// (0x00071198) qrid_highlight_pane_cp011_ParamLimits

0x7747,	// (0x00071198) qrid_highlight_pane_cp011

0x2c03,	// (0x0006c654) msg_body_pane

0x2e5e,	// (0x0006c8af) msg_header_pane

0x4a48,	// (0x0006e499) input_focus_pane_cp07

0x4a69,	// (0x0006e4ba) msg_header_pane_t1_ParamLimits

0x4a69,	// (0x0006e4ba) msg_header_pane_t1

0x4a85,	// (0x0006e4d6) msg_header_pane_t2_ParamLimits

0x4a85,	// (0x0006e4d6) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00078e05) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00078e05) msg_header_pane_t

0xd3eb,	// (0x00076e3c) msg_body_pane_g1

0x4aa5,	// (0x0006e4f6) msg_body_pane_t1_ParamLimits

0x4aa5,	// (0x0006e4f6) msg_body_pane_t1

0x4ad6,	// (0x0006e527) msg_body_pane_t2_ParamLimits

0x4ad6,	// (0x0006e527) msg_body_pane_t2

0x4ae8,	// (0x0006e539) msg_body_pane_t3_ParamLimits

0x4ae8,	// (0x0006e539) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00078e0a) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00078e0a) msg_body_pane_t

0x77b5,	// (0x00071206) main_viewer_pane_g1_ParamLimits

0x77b5,	// (0x00071206) main_viewer_pane_g1

0x77c1,	// (0x00071212) main_viewer_pane_g2_ParamLimits

0x77c1,	// (0x00071212) main_viewer_pane_g2

0x77cd,	// (0x0007121e) main_viewer_pane_g3_ParamLimits

0x77cd,	// (0x0007121e) main_viewer_pane_g3

0x77de,	// (0x0007122f) main_viewer_pane_g4_ParamLimits

0x77de,	// (0x0007122f) main_viewer_pane_g4

0x77ef,	// (0x00071240) main_viewer_pane_g5_ParamLimits

0x77ef,	// (0x00071240) main_viewer_pane_g5

0x77ef,	// (0x00071240) main_viewer_pane_g7_ParamLimits

0x77ef,	// (0x00071240) main_viewer_pane_g7

0x7801,	// (0x00071252) main_viewer_pane_g8_ParamLimits

0x7801,	// (0x00071252) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00078e1a) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00078e1a) main_viewer_pane_g

0xd3f3,	// (0x00076e44) viewer_content_pane_ParamLimits

0xd3f3,	// (0x00076e44) viewer_content_pane

0x7839,	// (0x0007128a) main_postcard_pane_g1_ParamLimits

0x7839,	// (0x0007128a) main_postcard_pane_g1

0x7847,	// (0x00071298) main_postcard_pane_g2_ParamLimits

0x7847,	// (0x00071298) main_postcard_pane_g2

0x7855,	// (0x000712a6) main_postcard_pane_g3_ParamLimits

0x7855,	// (0x000712a6) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00078e2b) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00078e2b) main_postcard_pane_g

0x7865,	// (0x000712b6) main_postcard_pane_g4

0xe574,	// (0x00077fc5) smil_status_volume_pane_g2

0x7891,	// (0x000712e2) postcard_pane_ParamLimits

0x7891,	// (0x000712e2) postcard_pane

0xd295,	// (0x00076ce6) postcard_pane_g1_ParamLimits

0xd295,	// (0x00076ce6) postcard_pane_g1

0x78c3,	// (0x00071314) postcard_pane_g2_ParamLimits

0x78c3,	// (0x00071314) postcard_pane_g2

0x78cf,	// (0x00071320) postcard_pane_g3_ParamLimits

0x78cf,	// (0x00071320) postcard_pane_g3

0xd401,	// (0x00076e52) postcard_pane_g4_ParamLimits

0xd401,	// (0x00076e52) postcard_pane_g4

0x78db,	// (0x0007132c) postcard_pane_g5_ParamLimits

0x78db,	// (0x0007132c) postcard_pane_g5

0x78e7,	// (0x00071338) postcard_pane_g6_ParamLimits

0x78e7,	// (0x00071338) postcard_pane_g6

0xd40f,	// (0x00076e60) postcard_pane_g7_ParamLimits

0xd40f,	// (0x00076e60) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00078e38) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00078e38) postcard_pane_g

0x78f3,	// (0x00071344) main_mp2_pane_g1_ParamLimits

0x78f3,	// (0x00071344) main_mp2_pane_g1

0x78ff,	// (0x00071350) main_mp2_pane_g2_ParamLimits

0x78ff,	// (0x00071350) main_mp2_pane_g2

0x790b,	// (0x0007135c) main_mp2_pane_g3_ParamLimits

0x790b,	// (0x0007135c) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00078e47) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00078e47) main_mp2_pane_g

0x7917,	// (0x00071368) main_mp2_pane_t1_ParamLimits

0x7917,	// (0x00071368) main_mp2_pane_t1

0x792e,	// (0x0007137f) main_mp2_pane_t2_ParamLimits

0x792e,	// (0x0007137f) main_mp2_pane_t2

0x7942,	// (0x00071393) main_mp2_pane_t3_ParamLimits

0x7942,	// (0x00071393) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00078e4e) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00078e4e) main_mp2_pane_t

0x2761,	// (0x0006c1b2) pec_content_pane_ParamLimits

0x2761,	// (0x0006c1b2) pec_content_pane

0x24ab,	// (0x0006befc) scroll_pane_cp015

0xd41d,	// (0x00076e6e) pec_attribute_pane_ParamLimits

0xd41d,	// (0x00076e6e) pec_attribute_pane

0x2ed9,	// (0x0006c92a) pec_content_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) pec_content_pane_g1

0xd42b,	// (0x00076e7c) pec_content_pane_t1_ParamLimits

0xd42b,	// (0x00076e7c) pec_content_pane_t1

0xd43f,	// (0x00076e90) pec_content_pane_t2_ParamLimits

0xd43f,	// (0x00076e90) pec_content_pane_t2

0x0001,

0xf404,	// (0x00078e55) pec_content_pane_t_ParamLimits

0xf404,	// (0x00078e55) pec_content_pane_t

0x2ecb,	// (0x0006c91c) list_single_graphic_pane_cp01_ParamLimits

0x2ecb,	// (0x0006c91c) list_single_graphic_pane_cp01

0x2e5e,	// (0x0006c8af) bg_popup_sub_pane_cp04

0xd453,	// (0x00076ea4) popup_mup_playback_window_g1

0xd45f,	// (0x00076eb0) popup_mup_playback_window_t1

0xd474,	// (0x00076ec5) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00078e5a) popup_mup_playback_window_t

0xd4ab,	// (0x00076efc) main_image_pane_g1_ParamLimits

0xd4ab,	// (0x00076efc) main_image_pane_g1

0xd4ee,	// (0x00076f3f) scroll_pane_cp018_ParamLimits

0xd4ee,	// (0x00076f3f) scroll_pane_cp018

0xd506,	// (0x00076f57) scroll_pane_cp016_ParamLimits

0xd506,	// (0x00076f57) scroll_pane_cp016

0x79c5,	// (0x00071416) smil2_image_pane_ParamLimits

0x79c5,	// (0x00071416) smil2_image_pane

0x79f5,	// (0x00071446) smil2_root_pane_ParamLimits

0x79f5,	// (0x00071446) smil2_root_pane

0x7a21,	// (0x00071472) smil2_text_pane_ParamLimits

0x7a21,	// (0x00071472) smil2_text_pane

0x24ab,	// (0x0006befc) bg_list_pane_cp06

0x24ab,	// (0x0006befc) grid_radio_pane

0x2c03,	// (0x0006c654) bg_popup_window_pane_cp06

0x3693,	// (0x0006d0e4) main_fmradio_pane_t1

0x381a,	// (0x0006d26b) heading_pane_cp04

0x3693,	// (0x0006d0e4) main_fmradio_pane_t2

0xe436,	// (0x00077e87) popup_cale_lunar_info_window_g1

0x3693,	// (0x0006d0e4) main_fmradio_pane_t3

0xe43e,	// (0x00077e8f) popup_cale_lunar_info_window_g2

0x3693,	// (0x0006d0e4) main_fmradio_pane_t4

0x0001,

0x3693,	// (0x0006d0e4) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00078f1c) popup_cale_lunar_info_window_g

0xf269,	// (0x00078cba) main_fmradio_pane_t

0x24ab,	// (0x0006befc) wait_bar_pane_cp03

0x2ecb,	// (0x0006c91c) cell_fmradio_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cell_fmradio_pane

0x2ed9,	// (0x0006c92a) cell_fmradio_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_fmradio_pane_g1

0x24ab,	// (0x0006befc) grid_highlight_pane_cp011

0xd53a,	// (0x00076f8b) poc_content_pane_ParamLimits

0xd53a,	// (0x00076f8b) poc_content_pane

0xd54c,	// (0x00076f9d) scroll_pane_cp019

0x7a61,	// (0x000714b2) popup_call_poc_act_window_ParamLimits

0x7a61,	// (0x000714b2) popup_call_poc_act_window

0x7a6e,	// (0x000714bf) popup_call_poc_inact_window_ParamLimits

0x7a6e,	// (0x000714bf) popup_call_poc_inact_window

0xf4a2,	// (0x00078ef3) bg_popup_call_poc_act_pane_g

0xe3ae,	// (0x00077dff) bg_popup_call_poc_inact_pane_g1

0xe3b6,	// (0x00077e07) bg_popup_call_poc_inact_pane_g2

0xd554,	// (0x00076fa5) popup_call_poc_act_window_g2

0xe3be,	// (0x00077e0f) bg_popup_call_poc_inact_pane_g3

0xe3c6,	// (0x00077e17) bg_popup_call_poc_inact_pane_g4

0xe3ce,	// (0x00077e1f) bg_popup_call_poc_inact_pane_g5

0xd55c,	// (0x00076fad) popup_call_poc_act_window_t1_ParamLimits

0xd55c,	// (0x00076fad) popup_call_poc_act_window_t1

0xd584,	// (0x00076fd5) popup_call_poc_act_window_t2_ParamLimits

0xd584,	// (0x00076fd5) popup_call_poc_act_window_t2

0xd5ac,	// (0x00076ffd) popup_call_poc_act_window_t3_ParamLimits

0xd5ac,	// (0x00076ffd) popup_call_poc_act_window_t3

0xd5d4,	// (0x00077025) popup_call_poc_act_window_t4_ParamLimits

0xd5d4,	// (0x00077025) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00078e6f) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00078e6f) popup_call_poc_act_window_t

0xe3d6,	// (0x00077e27) bg_popup_call_poc_inact_pane_g6

0xe3de,	// (0x00077e2f) bg_popup_call_poc_inact_pane_g7

0xe3e6,	// (0x00077e37) bg_popup_call_poc_inact_pane_g8

0xd5e6,	// (0x00077037) popup_call_poc_inact_window_g2

0xe3ee,	// (0x00077e3f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00078ee0) bg_popup_call_poc_inact_pane_g

0xd5ee,	// (0x0007703f) popup_call_poc_inact_window_t1_ParamLimits

0xd5ee,	// (0x0007703f) popup_call_poc_inact_window_t1

0xd603,	// (0x00077054) popup_call_poc_inact_window_t2_ParamLimits

0xd603,	// (0x00077054) popup_call_poc_inact_window_t2

0xd618,	// (0x00077069) popup_call_poc_inact_window_t3_ParamLimits

0xd618,	// (0x00077069) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00078e78) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00078e78) popup_call_poc_inact_window_t

0xe4ec,	// (0x00077f3d) context_pane_ParamLimits

0x8079,	// (0x00071aca) signal_pane_ParamLimits

0x318d,	// (0x0006cbde) main_call2_pane

0x7fec,	// (0x00071a3d) popup_phob_thumbnail2_window_ParamLimits

0x7fec,	// (0x00071a3d) popup_phob_thumbnail2_window

0x7763,	// (0x000711b4) aid_hotspot_pointer_arrow_pane

0x776b,	// (0x000711bc) aid_hotspot_pointer_hand_pane

0x7d3b,	// (0x0007178c) phob_pre_status_pane_g5

0x2ecb,	// (0x0006c91c) cams_zoom_pane_ParamLimits

0x2ecb,	// (0x0006c91c) image_vga_pane_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g3_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g5_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g6_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00078bae) main_camera_pane_g_ParamLimits

0x2f35,	// (0x0006c986) main_camera_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00078bbf) main_camera_pane_t_ParamLimits

0x2e5e,	// (0x0006c8af) bg_popup_preview_window_pane_cp01_ParamLimits

0x2e5e,	// (0x0006c8af) bg_popup_preview_window_pane_cp01

0xd62d,	// (0x0007707e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd62d,	// (0x0007707e) popup_phob_thumbnail2_window_g1

0x2c03,	// (0x0006c654) call2_cli_visual_pane

0x7a8a,	// (0x000714db) popup_call2_audio_conf_window_ParamLimits

0x7a8a,	// (0x000714db) popup_call2_audio_conf_window

0x7a9f,	// (0x000714f0) popup_call2_audio_first_window_ParamLimits

0x7a9f,	// (0x000714f0) popup_call2_audio_first_window

0x7b3d,	// (0x0007158e) popup_call2_audio_in_window_ParamLimits

0x7b3d,	// (0x0007158e) popup_call2_audio_in_window

0x7b7f,	// (0x000715d0) popup_call2_audio_out_window_ParamLimits

0x7b7f,	// (0x000715d0) popup_call2_audio_out_window

0x7be1,	// (0x00071632) popup_call2_audio_second_window_ParamLimits

0x7be1,	// (0x00071632) popup_call2_audio_second_window

0x7c3f,	// (0x00071690) popup_call2_audio_wait_window_ParamLimits

0x7c3f,	// (0x00071690) popup_call2_audio_wait_window

0x2c03,	// (0x0006c654) bg_popup_call2_act_pane_cp03

0x2e40,	// (0x0006c891) list_conf_pane_cp

0xd639,	// (0x0007708a) popup_call2_audio_conf_window_t1

0x386a,	// (0x0006d2bb) list_single_graphic_popup_conf2_pane_ParamLimits

0x386a,	// (0x0006d2bb) list_single_graphic_popup_conf2_pane

0x387d,	// (0x0006d2ce) list_highlight_pane_cp04

0xd647,	// (0x00077098) list_single_graphic_popup_conf2_pane_g1

0x388e,	// (0x0006d2df) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00078e7f) list_single_graphic_popup_conf2_pane_g

0xd651,	// (0x000770a2) list_single_graphic_popup_conf2_pane_t1

0xd65f,	// (0x000770b0) bg_popup_call2_act_pane_cp01_ParamLimits

0xd65f,	// (0x000770b0) bg_popup_call2_act_pane_cp01

0xd6e9,	// (0x0007713a) call_type_pane_cp05_ParamLimits

0xd6e9,	// (0x0007713a) call_type_pane_cp05

0xd73d,	// (0x0007718e) popup_call2_audio_second_window_g1_ParamLimits

0xd73d,	// (0x0007718e) popup_call2_audio_second_window_g1

0xd791,	// (0x000771e2) popup_call2_audio_second_window_g2_ParamLimits

0xd791,	// (0x000771e2) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00078e84) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00078e84) popup_call2_audio_second_window_g

0xd7f6,	// (0x00077247) popup_call2_audio_second_window_t1_ParamLimits

0xd7f6,	// (0x00077247) popup_call2_audio_second_window_t1

0xd8b1,	// (0x00077302) popup_call2_audio_second_window_t2_ParamLimits

0xd8b1,	// (0x00077302) popup_call2_audio_second_window_t2

0xd904,	// (0x00077355) popup_call2_audio_second_window_t3_ParamLimits

0xd904,	// (0x00077355) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00078e8b) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00078e8b) popup_call2_audio_second_window_t

0x2c03,	// (0x0006c654) bg_popup_call2_in_pane_cp02

0x2c0d,	// (0x0006c65e) call_type_pane_cp04

0x7c7e,	// (0x000716cf) popup_call2_audio_wait_window_g1

0x7c86,	// (0x000716d7) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00078e94) popup_call2_audio_wait_window_g

0x2c25,	// (0x0006c676) popup_call2_audio_wait_window_t3

0xd9f7,	// (0x00077448) bg_popup_call2_act_pane_ParamLimits

0xd9f7,	// (0x00077448) bg_popup_call2_act_pane

0xdab7,	// (0x00077508) call_type_pane_cp03_ParamLimits

0xdab7,	// (0x00077508) call_type_pane_cp03

0xdb1b,	// (0x0007756c) popup_call2_audio_first_window_g1_ParamLimits

0xdb1b,	// (0x0007756c) popup_call2_audio_first_window_g1

0xdb8b,	// (0x000775dc) popup_call2_audio_first_window_g2_ParamLimits

0xdb8b,	// (0x000775dc) popup_call2_audio_first_window_g2

0xd295,	// (0x00076ce6) popup_call2_audio_first_window_g3_ParamLimits

0xd295,	// (0x00076ce6) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00078e99) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00078e99) popup_call2_audio_first_window_g

0xdc69,	// (0x000776ba) popup_call2_audio_first_window_t1_ParamLimits

0xdc69,	// (0x000776ba) popup_call2_audio_first_window_t1

0xdd6c,	// (0x000777bd) popup_call2_audio_first_window_t4_ParamLimits

0xdd6c,	// (0x000777bd) popup_call2_audio_first_window_t4

0xde4f,	// (0x000778a0) popup_call2_audio_first_window_t5_ParamLimits

0xde4f,	// (0x000778a0) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00078ea4) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00078ea4) popup_call2_audio_first_window_t

0x2e56,	// (0x0006c8a7) bg_popup_call2_act_pane_g1

0xe446,	// (0x00077e97) popup_cale_lunar_info_window_t1

0xe454,	// (0x00077ea5) popup_cale_lunar_info_window_t2

0xe462,	// (0x00077eb3) popup_cale_lunar_info_window_t3

0x2c03,	// (0x0006c654) bg_popup_call2_bubble_pane

0xdf50,	// (0x000779a1) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf50,	// (0x000779a1) bg_popup_call2_in_pane_cp01

0x25a4,	// (0x0006bff5) call_type_pane_cp02

0x7c8e,	// (0x000716df) popup_call2_audio_out_window_g1_ParamLimits

0x7c8e,	// (0x000716df) popup_call2_audio_out_window_g1

0xdf98,	// (0x000779e9) popup_call2_audio_out_window_g2_ParamLimits

0xdf98,	// (0x000779e9) popup_call2_audio_out_window_g2

0x7cba,	// (0x0007170b) popup_call2_audio_out_window_g3_ParamLimits

0x7cba,	// (0x0007170b) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00078ead) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00078ead) popup_call2_audio_out_window_g

0xdfcf,	// (0x00077a20) popup_call2_audio_out_window_t1_ParamLimits

0xdfcf,	// (0x00077a20) popup_call2_audio_out_window_t1

0xe02e,	// (0x00077a7f) popup_call2_audio_out_window_t2_ParamLimits

0xe02e,	// (0x00077a7f) popup_call2_audio_out_window_t2

0xe082,	// (0x00077ad3) popup_call2_audio_out_window_t3_ParamLimits

0xe082,	// (0x00077ad3) popup_call2_audio_out_window_t3

0xe098,	// (0x00077ae9) popup_call2_audio_out_window_t4_ParamLimits

0xe098,	// (0x00077ae9) popup_call2_audio_out_window_t4

0xe0ae,	// (0x00077aff) popup_call2_audio_out_window_t5_ParamLimits

0xe0ae,	// (0x00077aff) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00078eb6) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00078eb6) popup_call2_audio_out_window_t

0xe134,	// (0x00077b85) bg_popup_call2_in_pane_ParamLimits

0xe134,	// (0x00077b85) bg_popup_call2_in_pane

0xe190,	// (0x00077be1) popup_call2_audio_in_window_g1_ParamLimits

0xe190,	// (0x00077be1) popup_call2_audio_in_window_g1

0xe1c8,	// (0x00077c19) popup_call2_audio_in_window_g2_ParamLimits

0xe1c8,	// (0x00077c19) popup_call2_audio_in_window_g2

0xe200,	// (0x00077c51) popup_call2_audio_in_window_g3_ParamLimits

0xe200,	// (0x00077c51) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00078ec3) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00078ec3) popup_call2_audio_in_window_g

0xe258,	// (0x00077ca9) popup_call2_audio_in_window_t1_ParamLimits

0xe258,	// (0x00077ca9) popup_call2_audio_in_window_t1

0xe2d8,	// (0x00077d29) popup_call2_audio_in_window_t2_ParamLimits

0xe2d8,	// (0x00077d29) popup_call2_audio_in_window_t2

0xe358,	// (0x00077da9) popup_call2_audio_in_window_t3_ParamLimits

0xe358,	// (0x00077da9) popup_call2_audio_in_window_t3

0xe372,	// (0x00077dc3) popup_call2_audio_in_window_t4_ParamLimits

0xe372,	// (0x00077dc3) popup_call2_audio_in_window_t4

0xe384,	// (0x00077dd5) popup_call2_audio_in_window_t5_ParamLimits

0xe384,	// (0x00077dd5) popup_call2_audio_in_window_t5

0xe399,	// (0x00077dea) popup_call2_audio_in_window_t6_ParamLimits

0xe399,	// (0x00077dea) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00078ecc) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00078ecc) popup_call2_audio_in_window_t

0x2e56,	// (0x0006c8a7) bg_popup_call2_in_pane_g1

0xe48a,	// (0x00077edb) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00078f21) popup_cale_lunar_info_window_t

0x2e5e,	// (0x0006c8af) bg_popup_call2_rect_pane_ParamLimits

0x2e5e,	// (0x0006c8af) bg_popup_call2_rect_pane

0x2c03,	// (0x0006c654) call2_cli_visual_graphic_pane

0x2c03,	// (0x0006c654) call2_cli_visual_text_pane

0x80b5,	// (0x00071b06) smil_status_volume_pane_g3

0x0002,

0x2e76,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g1

0x2e76,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g2

0x2e76,	// (0x0006c8c7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00078ed9) call2_cli_visual_graphic_pane_g

0x309d,	// (0x0006caee) bg_popup_call2_rect_pane_g1

0x3077,	// (0x0006cac8) bg_popup_call2_rect_pane_g2

0x306f,	// (0x0006cac0) bg_popup_call2_rect_pane_g3

0x30ad,	// (0x0006cafe) bg_popup_call2_rect_pane_g4

0x30a5,	// (0x0006caf6) bg_popup_call2_rect_pane_g5

0x30b5,	// (0x0006cb06) bg_popup_call2_rect_pane_g6

0x30bd,	// (0x0006cb0e) bg_popup_call2_rect_pane_g7

0x30cd,	// (0x0006cb1e) bg_popup_call2_rect_pane_g8

0x30c5,	// (0x0006cb16) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00078c69) bg_popup_call2_rect_pane_g

0xe3ae,	// (0x00077dff) bg_popup_call2_bubble_pane_g1

0xe3b6,	// (0x00077e07) bg_popup_call2_bubble_pane_g2

0xe3be,	// (0x00077e0f) bg_popup_call2_bubble_pane_g3

0xe3c6,	// (0x00077e17) bg_popup_call2_bubble_pane_g4

0xe3ce,	// (0x00077e1f) bg_popup_call2_bubble_pane_g5

0xe3d6,	// (0x00077e27) bg_popup_call2_bubble_pane_g6

0xe3de,	// (0x00077e2f) bg_popup_call2_bubble_pane_g7

0xe3e6,	// (0x00077e37) bg_popup_call2_bubble_pane_g8

0xe3ee,	// (0x00077e3f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00078ee0) bg_popup_call2_bubble_pane_g

0x5969,	// (0x0006f3ba) aid_cale_week_size_cell_pane

0x2e5e,	// (0x0006c8af) aid_cams_cif_uncrop_pane_ParamLimits

0x2e5e,	// (0x0006c8af) aid_cams_cif_uncrop_pane

0x2ecb,	// (0x0006c91c) aid_cams_size_cell_ParamLimits

0x2ecb,	// (0x0006c91c) aid_cams_size_cell

0x2ecb,	// (0x0006c91c) grid_cams_pane_ParamLimits

0x2ecb,	// (0x0006c91c) linegrid_cams_pane_ParamLimits

0x6028,	// (0x0006fa79) call_video_pane_t1

0x6049,	// (0x0006fa9a) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00078c0b) call_video_pane_t

0x6590,	// (0x0006ffe1) aid_cale_month_size_cell_pane_ParamLimits

0x6590,	// (0x0006ffe1) aid_cale_month_size_cell_pane

0xf514,	// (0x00078f65) smil_status_volume_pane_g

0x80c2,	// (0x00071b13) volume_smil_pane_ParamLimits

0x5334,	// (0x0006ed85) aid_popup2_width_pane

0x58ad,	// (0x0006f2fe) cell_qdial_pane_g4_ParamLimits

0x58ad,	// (0x0006f2fe) cell_qdial_pane_g4

0x7440,	// (0x00070e91) aid_blid_cardinal_pane_ParamLimits

0x7450,	// (0x00070ea1) aid_blid_destination_pane_ParamLimits

0x7450,	// (0x00070ea1) aid_blid_destination_pane

0x2e5e,	// (0x0006c8af) bg_popup_call_poc_act_pane_ParamLimits

0x2e5e,	// (0x0006c8af) bg_popup_call_poc_act_pane

0x2e5e,	// (0x0006c8af) bg_popup_call_poc_inact_pane_ParamLimits

0x2e5e,	// (0x0006c8af) bg_popup_call_poc_inact_pane

0xe3f6,	// (0x00077e47) bg_popup_call_poc_act_pane_g1

0xe3fe,	// (0x00077e4f) bg_popup_call_poc_act_pane_g2

0xe406,	// (0x00077e57) bg_popup_call_poc_act_pane_g3

0xe3c6,	// (0x00077e17) bg_popup_call_poc_act_pane_g4

0xe3ce,	// (0x00077e1f) bg_popup_call_poc_act_pane_g5

0xe40e,	// (0x00077e5f) bg_popup_call_poc_act_pane_g6

0xe3de,	// (0x00077e2f) bg_popup_call_poc_act_pane_g7

0xe416,	// (0x00077e67) bg_popup_call_poc_act_pane_g8

0x2c03,	// (0x0006c654) main_usb_pane

0x7f1b,	// (0x0007196c) popup_cale_lunar_info_window

0x6372,	// (0x0006fdc3) im_reading_pane_t1_ParamLimits

0x324e,	// (0x0006cc9f) list_im_pane_ParamLimits

0x325f,	// (0x0006ccb0) scroll_pane_cp07_ParamLimits

0x2c03,	// (0x0006c654) grid_highlight_pane_cp012

0x2e5e,	// (0x0006c8af) mup_scale_pane_ParamLimits

0x2ee7,	// (0x0006c938) main_usb_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) main_usb_pane_g1

0x2ee7,	// (0x0006c938) main_usb_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x00078f0a) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x00078f0a) main_usb_pane_g

0x2f35,	// (0x0006c986) main_usb_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t1

0x2f35,	// (0x0006c986) main_usb_pane_t2_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t2

0x2f35,	// (0x0006c986) main_usb_pane_t3_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t3

0x2f35,	// (0x0006c986) main_usb_pane_t4_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t4

0x2f35,	// (0x0006c986) main_usb_pane_t5_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t5

0x2f35,	// (0x0006c986) main_usb_pane_t6_ParamLimits

0x2f35,	// (0x0006c986) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00078f0f) main_usb_pane_t_ParamLimits

0x73e6,	// (0x00070e37) aid_text_placing

0x73f2,	// (0x00070e43) main_location2_pane_t1_ParamLimits

0x7406,	// (0x00070e57) main_location2_pane_t2_ParamLimits

0x741a,	// (0x00070e6b) main_location2_pane_t3_ParamLimits

0x742e,	// (0x00070e7f) main_location2_pane_t4_ParamLimits

0x742e,	// (0x00070e7f) main_location2_pane_t4

0xf2fb,	// (0x00078d4c) main_location2_pane_t_ParamLimits

0x2e8c,	// (0x0006c8dd) find_pinb_pane_g2_ParamLimits

0x2e8c,	// (0x0006c8dd) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00078ac3) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00078ac3) find_pinb_pane_g

0x2e98,	// (0x0006c8e9) find_pinb_pane_t1_ParamLimits

0x2eaa,	// (0x0006c8fb) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00078ac8) find_pinb_pane_t_ParamLimits

0x2c03,	// (0x0006c654) main_call3_pane

0x6b33,	// (0x00070584) cale_month_day_heading_pane_t1_ParamLimits

0x6bb9,	// (0x0007060a) cale_month_day_heading_pane_t2_ParamLimits

0x6c32,	// (0x00070683) cale_month_day_heading_pane_t3_ParamLimits

0x6cab,	// (0x000706fc) cale_month_day_heading_pane_t4_ParamLimits

0x6d24,	// (0x00070775) cale_month_day_heading_pane_t5_ParamLimits

0x6d9d,	// (0x000707ee) cale_month_day_heading_pane_t6_ParamLimits

0x6e16,	// (0x00070867) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00078c43) cale_month_day_heading_pane_t_ParamLimits

0x34a9,	// (0x0006cefa) smil_status_volume_pane

0x78ab,	// (0x000712fc) postcard_address_pane_ParamLimits

0x78ab,	// (0x000712fc) postcard_address_pane

0x78b7,	// (0x00071308) postcard_message_pane_ParamLimits

0x78b7,	// (0x00071308) postcard_message_pane

0x7ce6,	// (0x00071737) call2_cli_visual_pane_t1_ParamLimits

0x7ce6,	// (0x00071737) call2_cli_visual_pane_t1

0xe59f,	// (0x00077ff0) postcard_message_pane_t1_ParamLimits

0xe59f,	// (0x00077ff0) postcard_message_pane_t1

0xe587,	// (0x00077fd8) postcard_address_pane_t1_ParamLimits

0xe587,	// (0x00077fd8) postcard_address_pane_t1

0x81f3,	// (0x00071c44) popup_call3_audio_in_window_ParamLimits

0x81f3,	// (0x00071c44) popup_call3_audio_in_window

0x80d7,	// (0x00071b28) bg_popup_call3_in_pane_ParamLimits

0x80d7,	// (0x00071b28) bg_popup_call3_in_pane

0x8139,	// (0x00071b8a) popup_call3_audio_in_window_g1_ParamLimits

0x8139,	// (0x00071b8a) popup_call3_audio_in_window_g1

0x8151,	// (0x00071ba2) popup_call3_audio_in_window_g2_ParamLimits

0x8151,	// (0x00071ba2) popup_call3_audio_in_window_g2

0x8169,	// (0x00071bba) popup_call3_audio_in_window_g3_ParamLimits

0x8169,	// (0x00071bba) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x00078f6c) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x00078f6c) popup_call3_audio_in_window_g

0x8191,	// (0x00071be2) popup_call3_audio_in_window_t1_ParamLimits

0x8191,	// (0x00071be2) popup_call3_audio_in_window_t1

0x81b9,	// (0x00071c0a) popup_call3_audio_in_window_t2_ParamLimits

0x81b9,	// (0x00071c0a) popup_call3_audio_in_window_t2

0x81e1,	// (0x00071c32) popup_call3_audio_in_window_t3_ParamLimits

0x81e1,	// (0x00071c32) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00078f75) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00078f75) popup_call3_audio_in_window_t

0x318d,	// (0x0006cbde) bg_popup_call3_rect_pane

0x309d,	// (0x0006caee) bg_popup_call3_rect_pane_g1

0x3077,	// (0x0006cac8) bg_popup_call3_rect_pane_g2

0x306f,	// (0x0006cac0) bg_popup_call3_rect_pane_g3

0x30ad,	// (0x0006cafe) bg_popup_call3_rect_pane_g4

0x30a5,	// (0x0006caf6) bg_popup_call3_rect_pane_g5

0x30b5,	// (0x0006cb06) bg_popup_call3_rect_pane_g6

0x30bd,	// (0x0006cb0e) bg_popup_call3_rect_pane_g7

0x24ab,	// (0x0006befc) mup_visualizer_osc_pane

0x24ab,	// (0x0006befc) mup_visualizer_spec_pane

0x80f7,	// (0x00071b48) call3_video_qcif_pane_ParamLimits

0x80f7,	// (0x00071b48) call3_video_qcif_pane

0x8109,	// (0x00071b5a) call3_video_qcif_uncrop_pane_ParamLimits

0x8109,	// (0x00071b5a) call3_video_qcif_uncrop_pane

0x8117,	// (0x00071b68) call3_video_subqcif_pane_ParamLimits

0x8117,	// (0x00071b68) call3_video_subqcif_pane

0x8129,	// (0x00071b7a) call3_video_subqcif_uncrop_pane_ParamLimits

0x8129,	// (0x00071b7a) call3_video_subqcif_uncrop_pane

0x8181,	// (0x00071bd2) popup_call3_audio_in_window_g4_ParamLimits

0x8181,	// (0x00071bd2) popup_call3_audio_in_window_g4

0x24ab,	// (0x0006befc) mup_spec_half_pane

0x24ab,	// (0x0006befc) mup_spec_half_pane_cp

0x24ab,	// (0x0006befc) mup_osc_middle_pane

0x2f17,	// (0x0006c968) mup_visualizer_osc_pane_g1

0xe53a,	// (0x00077f8b) mup_spec_bar_pane_ParamLimits

0xe53a,	// (0x00077f8b) mup_spec_bar_pane

0x2f17,	// (0x0006c968) mup_spec_bar_pane_g1

0x2f17,	// (0x0006c968) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00078add) mup_spec_bar_pane_g

0x5969,	// (0x0006f3ba) aid_cale_week_size_cell_pane_ParamLimits

0x597e,	// (0x0006f3cf) bg_cale_heading_pane_ParamLimits

0x30ef,	// (0x0006cb40) bg_cale_pane_cp01_ParamLimits

0x599e,	// (0x0006f3ef) cale_week_corner_pane_ParamLimits

0x59b8,	// (0x0006f409) cale_week_day_heading_pane_ParamLimits

0x59d8,	// (0x0006f429) cale_week_scroll_pane_g1_ParamLimits

0x59f3,	// (0x0006f444) cale_week_scroll_pane_g2_ParamLimits

0x5a06,	// (0x0006f457) cale_week_scroll_pane_g3_ParamLimits

0x5a19,	// (0x0006f46a) cale_week_scroll_pane_g4_ParamLimits

0x5a2c,	// (0x0006f47d) cale_week_scroll_pane_g5_ParamLimits

0x5a3f,	// (0x0006f490) cale_week_scroll_pane_g6_ParamLimits

0x5a52,	// (0x0006f4a3) cale_week_scroll_pane_g7_ParamLimits

0x5a67,	// (0x0006f4b8) cale_week_scroll_pane_g8_ParamLimits

0x5a7c,	// (0x0006f4cd) cale_week_scroll_pane_g9_ParamLimits

0x5a8f,	// (0x0006f4e0) cale_week_scroll_pane_g10_ParamLimits

0x5aa2,	// (0x0006f4f3) cale_week_scroll_pane_g11_ParamLimits

0x5ab5,	// (0x0006f506) cale_week_scroll_pane_g12_ParamLimits

0x5acc,	// (0x0006f51d) cale_week_scroll_pane_g13_ParamLimits

0x5ae7,	// (0x0006f538) cale_week_scroll_pane_g14_ParamLimits

0x5b02,	// (0x0006f553) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00078b54) cale_week_scroll_pane_g_ParamLimits

0x5b32,	// (0x0006f583) cale_week_time_pane_ParamLimits

0x5b47,	// (0x0006f598) grid_cale_week_pane_ParamLimits

0x310c,	// (0x0006cb5d) listscroll_cale_week_pane_t1

0x311e,	// (0x0006cb6f) scroll_pane_cp08_ParamLimits

0x6604,	// (0x00070055) cale_month_corner_pane_ParamLimits

0x347f,	// (0x0006ced0) cale_month_pane_t1

0x6ab6,	// (0x00070507) cale_month_week_pane_ParamLimits

0xd295,	// (0x00076ce6) popup_call_status_window_g1_ParamLimits

0x723d,	// (0x00070c8e) popup_call_status_window_g2_ParamLimits

0x7249,	// (0x00070c9a) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00078cd3) popup_call_status_window_g_ParamLimits

0x3812,	// (0x0006d263) aid_call2_pane

0x4a5d,	// (0x0006e4ae) msg_header_pane_g1

0x78ab,	// (0x000712fc) postcard_address2_pane_ParamLimits

0x78ab,	// (0x000712fc) postcard_address2_pane

0x78b7,	// (0x00071308) postcard_message2_pane_ParamLimits

0x78b7,	// (0x00071308) postcard_message2_pane

0x8087,	// (0x00071ad8) message2_row_pane_ParamLimits

0x8087,	// (0x00071ad8) message2_row_pane

0x80a2,	// (0x00071af3) address2_row_pane_ParamLimits

0x80a2,	// (0x00071af3) address2_row_pane

0xe507,	// (0x00077f58) postcard_message2_row_pane_g1

0xe50f,	// (0x00077f60) postcard_message2_row_pane_t1

0xe507,	// (0x00077f58) address2_row_pane_g1

0xe50f,	// (0x00077f60) address2_row_pane_t1

0x5dcd,	// (0x0006f81e) aid_size_cell_vorec

0x2c03,	// (0x0006c654) main_rss_pane

0xe51d,	// (0x00077f6e) rss_list_single_pane_ParamLimits

0xe51d,	// (0x00077f6e) rss_list_single_pane

0xe52b,	// (0x00077f7c) rss_list_single_pane_t1

0xe52b,	// (0x00077f7c) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00078f60) rss_list_single_pane_t

0x2c03,	// (0x0006c654) main_camera2_pane

0x2c03,	// (0x0006c654) main_video2_pane

0x2ecb,	// (0x0006c91c) cams_zoom_pane_cp2_ParamLimits

0x2ecb,	// (0x0006c91c) cams_zoom_pane_cp2

0x2ecb,	// (0x0006c91c) image2_vga_pane_ParamLimits

0x2ecb,	// (0x0006c91c) image2_vga_pane

0x2ee7,	// (0x0006c938) main_camera2_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g1

0x2ee7,	// (0x0006c938) main_camera2_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g2

0x2ee7,	// (0x0006c938) main_camera2_pane_g3_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g3

0x2ee7,	// (0x0006c938) main_camera2_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g4

0x2ee7,	// (0x0006c938) main_camera2_pane_g5_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g5

0x2ee7,	// (0x0006c938) main_camera2_pane_g6_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g6

0x2ee7,	// (0x0006c938) main_camera2_pane_g7_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g7

0x2ee7,	// (0x0006c938) main_camera2_pane_g8_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x00078f7c) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x00078f7c) main_camera2_pane_g

0x2f35,	// (0x0006c986) main_camera2_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t1

0x2f35,	// (0x0006c986) main_camera2_pane_t2_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t2

0x2f35,	// (0x0006c986) main_camera2_pane_t3_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t3

0x2f35,	// (0x0006c986) main_camera2_pane_t4_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00078f8f) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00078f8f) main_camera2_pane_t

0xd41d,	// (0x00076e6e) cams_zoom_pane_cp4_ParamLimits

0xd41d,	// (0x00076e6e) cams_zoom_pane_cp4

0x2761,	// (0x0006c1b2) image2_cif_pane_ParamLimits

0x2761,	// (0x0006c1b2) image2_cif_pane

0x2ecb,	// (0x0006c91c) image2_subqcif_pane_ParamLimits

0x2ecb,	// (0x0006c91c) image2_subqcif_pane

0xe0c3,	// (0x00077b14) main_video2_pane_g1_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g1

0xe0c3,	// (0x00077b14) main_video2_pane_g2_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g2

0xe0c3,	// (0x00077b14) main_video2_pane_g3_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g3

0xe0c3,	// (0x00077b14) main_video2_pane_g4_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g4

0xe0c3,	// (0x00077b14) main_video2_pane_g5_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g5

0xe0c3,	// (0x00077b14) main_video2_pane_g6_ParamLimits

0xe0c3,	// (0x00077b14) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00078f9e) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00078f9e) main_video2_pane_g

0xe0d1,	// (0x00077b22) main_video2_pane_t1_ParamLimits

0xe0d1,	// (0x00077b22) main_video2_pane_t1

0xe0d1,	// (0x00077b22) main_video2_pane_t2_ParamLimits

0xe0d1,	// (0x00077b22) main_video2_pane_t2

0xe0d1,	// (0x00077b22) main_video2_pane_t3_ParamLimits

0xe0d1,	// (0x00077b22) main_video2_pane_t3

0x0002,

0xf55a,	// (0x00078fab) main_video2_pane_t_ParamLimits

0xf55a,	// (0x00078fab) main_video2_pane_t

0x7d9f,	// (0x000717f0) call_muted_g2

0x0001,

0xf501,	// (0x00078f52) call_muted_g

0x2c03,	// (0x0006c654) main_mup2_pane

0x2ef5,	// (0x0006c946) main_mup2_pane_g1_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g1

0x2ef5,	// (0x0006c946) main_mup2_pane_g2_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g2

0x2f17,	// (0x0006c968) main_mup_pane_g13_cp1

0x24ab,	// (0x0006befc) mup_volume_pane_cp1

0x2ef5,	// (0x0006c946) main_mup2_pane_g4_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g4

0x2ef5,	// (0x0006c946) main_mup2_pane_g5_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g5

0x2ef5,	// (0x0006c946) main_mup2_pane_g6_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g6

0x2ef5,	// (0x0006c946) main_mup2_pane_g7_ParamLimits

0x2ef5,	// (0x0006c946) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00078fb2) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00078fb2) main_mup2_pane_g

0x2f03,	// (0x0006c954) main_mup2_pane_t1_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t1

0x2f03,	// (0x0006c954) main_mup2_pane_t2_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t2

0x2f03,	// (0x0006c954) main_mup2_pane_t3_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t3

0x2f03,	// (0x0006c954) main_mup2_pane_t4_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t4

0x2f03,	// (0x0006c954) main_mup2_pane_t5_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t5

0x2f03,	// (0x0006c954) main_mup2_pane_t6_ParamLimits

0x2f03,	// (0x0006c954) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00078fc1) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00078fc1) main_mup2_pane_t

0xe47c,	// (0x00077ecd) mup2_visualizer_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup2_visualizer_pane

0xe47c,	// (0x00077ecd) mup_progress_pane_cp_ParamLimits

0xe47c,	// (0x00077ecd) mup_progress_pane_cp

0xe5bb,	// (0x0007800c) mup_volume_pane_cp_ParamLimits

0xe5bb,	// (0x0007800c) mup_volume_pane_cp

0x2ed9,	// (0x0006c92a) mup2_visualizer_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) mup2_visualizer_pane_g1

0x2ee7,	// (0x0006c938) mup2_visualizer_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) mup2_visualizer_pane_g2

0x2ee7,	// (0x0006c938) mup2_visualizer_pane_g3_ParamLimits

0x2ee7,	// (0x0006c938) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00078acd) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00078acd) mup2_visualizer_pane_g

0x24ab,	// (0x0006befc) aid_size_cell_fmradio

0x7eb5,	// (0x00071906) aid_height_parent_landcape

0x32dd,	// (0x0006cd2e) wml_content_pane_cp

0x32e5,	// (0x0006cd36) wml_tabs_pane

0x32ee,	// (0x0006cd3f) popup_wml_miniature_window

0x32f6,	// (0x0006cd47) scroll_pane_cp021

0x330a,	// (0x0006cd5b) wml_content_pane_comp8

0x2c03,	// (0x0006c654) bg_popup_sub_pane_cp05

0xe5d1,	// (0x00078022) popup_wml_miniature_window_g1

0xe5d9,	// (0x0007802a) wml_miniature_view_pane

0x8210,	// (0x00071c61) aid_size_wml_view

0x8218,	// (0x00071c69) wml_miniature_view_pane_g1

0x8221,	// (0x00071c72) wml_miniature_view_pane_g2

0x822a,	// (0x00071c7b) wml_miniature_view_pane_g3

0x8232,	// (0x00071c83) wml_miniature_view_pane_g4

0x823a,	// (0x00071c8b) wml_miniature_view_pane_g5

0x8242,	// (0x00071c93) wml_miniature_view_pane_g6

0x824a,	// (0x00071c9b) wml_miniature_view_pane_g7

0x8252,	// (0x00071ca3) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00078fce) wml_miniature_view_pane_g

0xe5e1,	// (0x00078032) background_graphic_ParamLimits

0xe5e1,	// (0x00078032) background_graphic

0xe5ed,	// (0x0007803e) wml_tabs_2_pane

0xe5f6,	// (0x00078047) wml_tabs_3_pane_ParamLimits

0xe5f6,	// (0x00078047) wml_tabs_3_pane

0xe608,	// (0x00078059) wml_tabs_4_pane_ParamLimits

0xe608,	// (0x00078059) wml_tabs_4_pane

0xe61e,	// (0x0007806f) wml_tabs_5_pane_ParamLimits

0xe61e,	// (0x0007806f) wml_tabs_5_pane

0xe638,	// (0x00078089) wml_tabs_pane_g2_ParamLimits

0xe638,	// (0x00078089) wml_tabs_pane_g2

0xe64d,	// (0x0007809e) wml_tabs_pane_g3_ParamLimits

0xe64d,	// (0x0007809e) wml_tabs_pane_g3

0xe662,	// (0x000780b3) wml_tabs_2_active_pane_ParamLimits

0xe662,	// (0x000780b3) wml_tabs_2_active_pane

0xe662,	// (0x000780b3) wml_tabs_2_passive_pane_ParamLimits

0xe662,	// (0x000780b3) wml_tabs_2_passive_pane

0x825a,	// (0x00071cab) wml_tabs_3_active_pane_cp_ParamLimits

0x825a,	// (0x00071cab) wml_tabs_3_active_pane_cp

0x826b,	// (0x00071cbc) wml_tabs_3_passive_pane_ParamLimits

0x826b,	// (0x00071cbc) wml_tabs_3_passive_pane

0x827c,	// (0x00071ccd) wml_tabs_3_passive_pane_cp_ParamLimits

0x827c,	// (0x00071ccd) wml_tabs_3_passive_pane_cp

0x828d,	// (0x00071cde) tabs_4_active_pane

0x8295,	// (0x00071ce6) tabs_4_passive_pane

0x829d,	// (0x00071cee) tabs_4_passive_pane_cp

0x82a5,	// (0x00071cf6) tabs_4_passive_pane_cp2

0x7d13,	// (0x00071764) aid_height_text

0xe47c,	// (0x00077ecd) mup_volume_cont_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup_volume_cont_pane

0x24ab,	// (0x0006befc) aid_size_cell_pinb

0x24ab,	// (0x0006befc) aid_size_list_pinb

0xe47c,	// (0x00077ecd) mup2_volume_cont_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup2_volume_cont_pane

0x82ad,	// (0x00071cfe) mup2_volume_cont_pane_g1_ParamLimits

0x82ad,	// (0x00071cfe) mup2_volume_cont_pane_g1

0x5340,	// (0x0006ed91) aid_size_cell_touch_ParamLimits

0x5340,	// (0x0006ed91) aid_size_cell_touch

0x55e7,	// (0x0006f038) touch_pane_ParamLimits

0x55e7,	// (0x0006f038) touch_pane

0x24ab,	// (0x0006befc) main_rss2_pane

0xe679,	// (0x000780ca) listscroll_rss2_pane

0xe682,	// (0x000780d3) rss2_navigation_pane

0xe68a,	// (0x000780db) list_rss2_pane

0x3940,	// (0x0006d391) scroll_pane_cp22

0xe692,	// (0x000780e3) rss2_navigation_pane_g1

0xe69b,	// (0x000780ec) rss2_navigation_pane_g2

0xe6a3,	// (0x000780f4) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00078fdf) rss2_navigation_pane_g

0xe6ab,	// (0x000780fc) rss2_navigation_pane_t1

0x82c3,	// (0x00071d14) rss2_list_single_pane_ParamLimits

0x82c3,	// (0x00071d14) rss2_list_single_pane

0xe6b9,	// (0x0007810a) rss2_list_single_pane_t2

0xe6c7,	// (0x00078118) rss2_list_single_pane_t3_ParamLimits

0xe6c7,	// (0x00078118) rss2_list_single_pane_t3

0xe6e4,	// (0x00078135) rss2_list_single_pane_t4

0x70b2,	// (0x00070b03) smil_status_pane_g1

0x2761,	// (0x0006c1b2) main_image2_pane_ParamLimits

0x2761,	// (0x0006c1b2) main_image2_pane

0x2ee7,	// (0x0006c938) main_camera2_pane_g9_ParamLimits

0x2ee7,	// (0x0006c938) main_camera2_pane_g9

0x2f35,	// (0x0006c986) main_camera2_pane_t5_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t5

0x1377,	// (0x0006adc8) main_camera2_pane_t6_ParamLimits

0x1377,	// (0x0006adc8) main_camera2_pane_t6

0x82f4,	// (0x00071d45) main_image2_pane_g1_ParamLimits

0x82f4,	// (0x00071d45) main_image2_pane_g1

0x7a4b,	// (0x0007149c) smil2_video_pane_ParamLimits

0x7a4b,	// (0x0007149c) smil2_video_pane

0x5374,	// (0x0006edc5) aid_zoom_text_primary_cp

0x5590,	// (0x0006efe1) popup_preview_fixed_window

0x3246,	// (0x0006cc97) im_reading_pane_g1

0x8202,	// (0x00071c53) cams2_bc_adjust_pane_cp_ParamLimits

0x8202,	// (0x00071c53) cams2_bc_adjust_pane_cp

0x2ecb,	// (0x0006c91c) cams2_bc_adjust_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cams2_bc_adjust_pane

0x2f17,	// (0x0006c968) cams2_bc_adjust_pane_g1

0x24ab,	// (0x0006befc) cams2_slider_pane

0x2f17,	// (0x0006c968) cams2_slider_pane_g1

0x2f17,	// (0x0006c968) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00078fe6) cams2_slider_pane_g

0x56b5,	// (0x0006f106) calc_display_pane_ParamLimits

0x56d3,	// (0x0006f124) calc_paper_pane_ParamLimits

0x56ef,	// (0x0006f140) grid_calc_pane_ParamLimits

0x72ab,	// (0x00070cfc) popup_clock_digital_window_t1_ParamLimits

0xd4d7,	// (0x00076f28) main_image_pane_t1

0x569b,	// (0x0006f0ec) aid_size_cell_calc_ParamLimits

0x569b,	// (0x0006f0ec) aid_size_cell_calc

0x7ef7,	// (0x00071948) popup_blid_sat_info2_window_ParamLimits

0x7ef7,	// (0x00071948) popup_blid_sat_info2_window

0xe6f2,	// (0x00078143) aid_size_cell_blid

0xe47c,	// (0x00077ecd) bg_popup_window_pane_cp07

0xe719,	// (0x0007816a) grid_popup_blid_pane

0xe723,	// (0x00078174) heading_pane_cp05_ParamLimits

0xe723,	// (0x00078174) heading_pane_cp05

0xe7ed,	// (0x0007823e) cell_popup_blid_pane_ParamLimits

0xe7ed,	// (0x0007823e) cell_popup_blid_pane

0xe811,	// (0x00078262) cell_popup_blid_pane_g1

0xe819,	// (0x0007826a) cell_popup_blid_pane_t1

0xe47c,	// (0x00077ecd) mup2_indicator_pane_ParamLimits

0xe47c,	// (0x00077ecd) mup2_indicator_pane

0x24ab,	// (0x0006befc) mup2_visualizer_osc_pane

0xe5bb,	// (0x0007800c) mup2_visualizer_spec_pane_ParamLimits

0xe5bb,	// (0x0007800c) mup2_visualizer_spec_pane

0x24ab,	// (0x0006befc) mup2_spec_half_pane

0x24ab,	// (0x0006befc) mup2_spec_half_pane_cp

0xe827,	// (0x00078278) mup2_spec_bar_pane_ParamLimits

0xe827,	// (0x00078278) mup2_spec_bar_pane

0x2f17,	// (0x0006c968) mup2_spec_bar_pane_g1

0xe846,	// (0x00078297) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0007900c) mup2_spec_bar_pane_g

0x24ab,	// (0x0006befc) mup2_osc_middle_pane

0x2f17,	// (0x0006c968) mup2_visualizer_osc_pane_g1

0x24d5,	// (0x0006bf26) popup_number_entry_window_t1_ParamLimits

0x24e8,	// (0x0006bf39) popup_number_entry_window_t2_ParamLimits

0x24fa,	// (0x0006bf4b) popup_number_entry_window_t3_ParamLimits

0x563e,	// (0x0006f08f) popup_number_entry_window_t5_ParamLimits

0x563e,	// (0x0006f08f) popup_number_entry_window_t5

0xf01d,	// (0x00078a6e) popup_number_entry_window_t_ParamLimits

0x250c,	// (0x0006bf5d) text_title_cp2_ParamLimits

0x7773,	// (0x000711c4) aid_hotspot_pointer_text2_pane

0x780d,	// (0x0007125e) main_viewer_pane_g9_ParamLimits

0x780d,	// (0x0007125e) main_viewer_pane_g9

0x347f,	// (0x0006ced0) cale_month_pane_t1_ParamLimits

0x34c5,	// (0x0006cf16) bg_cale_pane_ParamLimits

0x34dd,	// (0x0006cf2e) list_cale_pane_ParamLimits

0x34ee,	// (0x0006cf3f) listscroll_cale_day_pane_t1

0x3500,	// (0x0006cf51) scroll_pane_cp09_ParamLimits

0x752e,	// (0x00070f7f) main_mup_eq_pane_t1_ParamLimits

0x752e,	// (0x00070f7f) main_mup_eq_pane_t1

0x7548,	// (0x00070f99) main_mup_eq_pane_t2_ParamLimits

0x7548,	// (0x00070f99) main_mup_eq_pane_t2

0x7562,	// (0x00070fb3) main_mup_eq_pane_t3_ParamLimits

0x7562,	// (0x00070fb3) main_mup_eq_pane_t3

0x757a,	// (0x00070fcb) main_mup_eq_pane_t4_ParamLimits

0x757a,	// (0x00070fcb) main_mup_eq_pane_t4

0x7592,	// (0x00070fe3) main_mup_eq_pane_t5_ParamLimits

0x7592,	// (0x00070fe3) main_mup_eq_pane_t5

0x75aa,	// (0x00070ffb) main_mup_eq_pane_t6_ParamLimits

0x75aa,	// (0x00070ffb) main_mup_eq_pane_t6

0x75be,	// (0x0007100f) main_mup_eq_pane_t7_ParamLimits

0x75be,	// (0x0007100f) main_mup_eq_pane_t7

0x75d2,	// (0x00071023) main_mup_eq_pane_t8_ParamLimits

0x75d2,	// (0x00071023) main_mup_eq_pane_t8

0x75e8,	// (0x00071039) main_mup_eq_pane_t9_ParamLimits

0x75e8,	// (0x00071039) main_mup_eq_pane_t9

0x7600,	// (0x00071051) main_mup_eq_pane_t10_ParamLimits

0x7600,	// (0x00071051) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00078dcd) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00078dcd) main_mup_eq_pane_t

0x76bd,	// (0x0007110e) mup_equalizer_pane_cp5_ParamLimits

0x76d3,	// (0x00071124) mup_equalizer_pane_cp6_ParamLimits

0x76eb,	// (0x0007113c) mup_equalizer_pane_cp7_ParamLimits

0x24ab,	// (0x0006befc) main_gallery_pane

0xe559,	// (0x00077faa) smil2_volume_pane

0xe561,	// (0x00077fb2) smil_status_volume_pane_g1_ParamLimits

0xe574,	// (0x00077fc5) smil_status_volume_pane_g2_ParamLimits

0x80b5,	// (0x00071b06) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00078f65) smil_status_volume_pane_g_ParamLimits

0xe47c,	// (0x00077ecd) bg_popup_window_pane_cp07_ParamLimits

0xe6fa,	// (0x0007814b) blid_firmament_pane

0x2ecb,	// (0x0006c91c) aid_size_cell_gallery_ParamLimits

0x2ecb,	// (0x0006c91c) aid_size_cell_gallery

0x2ecb,	// (0x0006c91c) grid_gallery_pane_ParamLimits

0x2ecb,	// (0x0006c91c) grid_gallery_pane

0xd41d,	// (0x00076e6e) cell_gallery_pane_ParamLimits

0xd41d,	// (0x00076e6e) cell_gallery_pane

0x2761,	// (0x0006c1b2) bg_cell_gallery_focus_pane_ParamLimits

0x2761,	// (0x0006c1b2) bg_cell_gallery_focus_pane

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g1

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g2_ParamLimits

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g2

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g3_ParamLimits

0x2ed9,	// (0x0006c92a) cell_gallery_pane_g3

0x2ee7,	// (0x0006c938) cell_gallery_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00079011) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00079011) cell_gallery_pane_g

0xe850,	// (0x000782a1) bg_cell_gallery_focus_pane_g1

0xe858,	// (0x000782a9) bg_cell_gallery_focus_pane_g2

0xe860,	// (0x000782b1) bg_cell_gallery_focus_pane_g3

0xe868,	// (0x000782b9) bg_cell_gallery_focus_pane_g4

0xe870,	// (0x000782c1) bg_cell_gallery_focus_pane_g5

0xe878,	// (0x000782c9) bg_cell_gallery_focus_pane_g6

0xe880,	// (0x000782d1) bg_cell_gallery_focus_pane_g7

0xe888,	// (0x000782d9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0007901a) bg_cell_gallery_focus_pane_g

0xe890,	// (0x000782e1) aid_firma_cardinal

0xe8a4,	// (0x000782f5) blid_firmament_pane_t1

0xe8bb,	// (0x0007830c) blid_firmament_pane_t2

0xe8d2,	// (0x00078323) blid_firmament_pane_t3

0xe8e9,	// (0x0007833a) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x0007902b) blid_firmament_pane_t

0xe900,	// (0x00078351) blid_sat_info_pane

0x2f17,	// (0x0006c968) blid_sat_info_pane_g1

0x2f17,	// (0x0006c968) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00078add) blid_sat_info_pane_g

0xe910,	// (0x00078361) blid_sat_info_pane_t1

0xe91e,	// (0x0007836f) smil2_volume_content_pane

0xe927,	// (0x00078378) smil2_volume_pane_g1

0x2fec,	// (0x0006ca3d) smil2_volume_content_pane_g1

0xe92f,	// (0x00078380) smil2_volume_content_pane_g2

0xe938,	// (0x00078389) smil2_volume_content_pane_g3

0xe941,	// (0x00078392) smil2_volume_content_pane_g4

0xe94a,	// (0x0007839b) smil2_volume_content_pane_g5

0xe953,	// (0x000783a4) smil2_volume_content_pane_g6

0xe95c,	// (0x000783ad) smil2_volume_content_pane_g7

0xe965,	// (0x000783b6) smil2_volume_content_pane_g8

0xe96e,	// (0x000783bf) smil2_volume_content_pane_g9

0xe977,	// (0x000783c8) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00079034) smil2_volume_content_pane_g

0x5bc8,	// (0x0006f619) cale_week_day_heading_pane_t1_ParamLimits

0x5be3,	// (0x0006f634) cale_week_day_heading_pane_t2_ParamLimits

0x5bfe,	// (0x0006f64f) cale_week_day_heading_pane_t3_ParamLimits

0x5c19,	// (0x0006f66a) cale_week_day_heading_pane_t4_ParamLimits

0x5c34,	// (0x0006f685) cale_week_day_heading_pane_t5_ParamLimits

0x5c4f,	// (0x0006f6a0) cale_week_day_heading_pane_t6_ParamLimits

0x5c6a,	// (0x0006f6bb) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00078b75) cale_week_day_heading_pane_t_ParamLimits

0x313b,	// (0x0006cb8c) bg_cale_side_pane_ParamLimits

0x5c85,	// (0x0006f6d6) cale_week_time_pane_t1_ParamLimits

0x5c9f,	// (0x0006f6f0) cale_week_time_pane_t2_ParamLimits

0x5cb9,	// (0x0006f70a) cale_week_time_pane_t3_ParamLimits

0x5cd3,	// (0x0006f724) cale_week_time_pane_t4_ParamLimits

0x5ced,	// (0x0006f73e) cale_week_time_pane_t5_ParamLimits

0x5d07,	// (0x0006f758) cale_week_time_pane_t6_ParamLimits

0x5d25,	// (0x0006f776) cale_week_time_pane_t7_ParamLimits

0x5d47,	// (0x0006f798) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00078b84) cale_week_time_pane_t_ParamLimits

0x5d6b,	// (0x0006f7bc) cell_cale_week_pane_g2_ParamLimits

0x313b,	// (0x0006cb8c) bg_cale_side_pane_cp01_ParamLimits

0x6ea7,	// (0x000708f8) cale_month_week_pane_t1_ParamLimits

0x6ec0,	// (0x00070911) cale_month_week_pane_t2_ParamLimits

0x6ed9,	// (0x0007092a) cale_month_week_pane_t3_ParamLimits

0x6ef2,	// (0x00070943) cale_month_week_pane_t4_ParamLimits

0x6f0b,	// (0x0007095c) cale_month_week_pane_t5_ParamLimits

0x6f2c,	// (0x0007097d) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00078c52) cale_month_week_pane_t_ParamLimits

0x706f,	// (0x00070ac0) cell_cale_month_pane_g1_ParamLimits

0x24ab,	// (0x0006befc) main_cale_event_viewer_pane

0x24ab,	// (0x0006befc) listscroll_cale_event_viewer_pane

0xe980,	// (0x000783d1) list_cale_ev_pane

0xe988,	// (0x000783d9) scroll_pane_cp023

0xe994,	// (0x000783e5) field_cale_ev_pane_ParamLimits

0xe994,	// (0x000783e5) field_cale_ev_pane

0xe9b2,	// (0x00078403) field_cale_ev_content_pane_ParamLimits

0xe9b2,	// (0x00078403) field_cale_ev_content_pane

0xe9be,	// (0x0007840f) field_cale_ev_pane_g1_ParamLimits

0xe9be,	// (0x0007840f) field_cale_ev_pane_g1

0xe9ca,	// (0x0007841b) field_cale_ev_pane_g2_ParamLimits

0xe9ca,	// (0x0007841b) field_cale_ev_pane_g2

0xe9e2,	// (0x00078433) field_cale_ev_pane_g3_ParamLimits

0xe9e2,	// (0x00078433) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x00079049) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x00079049) field_cale_ev_pane_g

0xe9fa,	// (0x0007844b) field_cale_ev_pane_t1_ParamLimits

0xe9fa,	// (0x0007844b) field_cale_ev_pane_t1

0x307f,	// (0x0006cad0) field_cale_ev_content_pane_t1_ParamLimits

0x307f,	// (0x0006cad0) field_cale_ev_content_pane_t1

0xd3cb,	// (0x00076e1c) bg_button_pane_cp01

0x5959,	// (0x0006f3aa) listscroll_cale_week_pane_ParamLimits

0x34bc,	// (0x0006cf0d) popup_toolbar_window_cp01

0x310c,	// (0x0006cb5d) listscroll_cale_week_pane_t1_ParamLimits

0x5959,	// (0x0006f3aa) listscroll_cale_day_pane_ParamLimits

0x34bc,	// (0x0006cf0d) popup_toolbar_window_cp02

0x34ee,	// (0x0006cf3f) listscroll_cale_day_pane_t1_ParamLimits

0x5959,	// (0x0006f3aa) main_cale_month_pane_ParamLimits

0x7ffe,	// (0x00071a4f) popup_toolbar_window_cp03_ParamLimits

0x7ffe,	// (0x00071a4f) popup_toolbar_window_cp03

0x7961,	// (0x000713b2) main_image_pane_g2_ParamLimits

0x7961,	// (0x000713b2) main_image_pane_g2

0x796d,	// (0x000713be) main_image_pane_g3_ParamLimits

0x796d,	// (0x000713be) main_image_pane_g3

0x0002,

0xf40e,	// (0x00078e5f) main_image_pane_g_ParamLimits

0xf40e,	// (0x00078e5f) main_image_pane_g

0xd4d7,	// (0x00076f28) main_image_pane_t1_ParamLimits

0x7979,	// (0x000713ca) main_image_pane_t2_ParamLimits

0x7979,	// (0x000713ca) main_image_pane_t2

0x798b,	// (0x000713dc) main_image_pane_t3_ParamLimits

0x798b,	// (0x000713dc) main_image_pane_t3

0x799d,	// (0x000713ee) main_image_pane_t4_ParamLimits

0x799d,	// (0x000713ee) main_image_pane_t4

0x0003,

0xf415,	// (0x00078e66) main_image_pane_t_ParamLimits

0xf415,	// (0x00078e66) main_image_pane_t

0x79af,	// (0x00071400) popup_image_details_window_cp01

0x79b9,	// (0x0007140a) popup_toobar_trans_pane_cp01_ParamLimits

0x79b9,	// (0x0007140a) popup_toobar_trans_pane_cp01

0x7f4e,	// (0x0007199f) popup_image_details_window_ParamLimits

0x7f4e,	// (0x0007199f) popup_image_details_window

0x7f5c,	// (0x000719ad) popup_image_focus_window

0x2ecb,	// (0x0006c91c) camera2_autofocus_pane_ParamLimits

0x2ecb,	// (0x0006c91c) camera2_autofocus_pane

0x24ab,	// (0x0006befc) bg_popup_sub_pane_cp06

0xea11,	// (0x00078462) popup_image_focus_window_g1

0xea19,	// (0x0007846a) popup_image_focus_window_g2

0xea21,	// (0x00078472) popup_image_focus_window_g3

0xea29,	// (0x0007847a) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00079050) popup_image_focus_window_g

0xea31,	// (0x00078482) popup_image_focus_window_t1

0xea3f,	// (0x00078490) popup_image_focus_window_t2

0xea4f,	// (0x000784a0) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x00079059) popup_image_focus_window_t

0x2ed9,	// (0x0006c92a) camera2_autofocus_pane_g1

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp01

0xea5d,	// (0x000784ae) popup_image_details_window_g1

0xea70,	// (0x000784c1) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x0007906b) popup_image_details_window_g

0xea99,	// (0x000784ea) popup_image_details_window_t1

0xeaab,	// (0x000784fc) popup_image_details_window_t2

0xeac4,	// (0x00078515) popup_image_details_window_t3

0xead8,	// (0x00078529) popup_image_details_window_t4

0xeaf3,	// (0x00078544) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00079072) popup_image_details_window_t

0x2f61,	// (0x0006c9b2) bg_calc_paper_pane_ParamLimits

0x24ab,	// (0x0006befc) grid_highlight_pane_cp013

0x572a,	// (0x0006f17b) list_calc_pane_ParamLimits

0x573c,	// (0x0006f18d) scroll_pane_cp024

0x2f75,	// (0x0006c9c6) bg_calc_display_pane_ParamLimits

0x5744,	// (0x0006f195) calc_display_pane_t1_ParamLimits

0x5759,	// (0x0006f1aa) calc_display_pane_t2_ParamLimits

0x576e,	// (0x0006f1bf) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00078af5) calc_display_pane_t_ParamLimits

0x5847,	// (0x0006f298) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00078b12) cell_calc_pane_g

0x5850,	// (0x0006f2a1) cell_calc_pane_t1

0x2fca,	// (0x0006ca1b) grid_highlight_pane_cp02_ParamLimits

0x2fe0,	// (0x0006ca31) toolbar_button_pane_cp01_ParamLimits

0x2fe0,	// (0x0006ca31) toolbar_button_pane_cp01

0xd51c,	// (0x00076f6d) temp_image_control_pane_ParamLimits

0xd51c,	// (0x00076f6d) temp_image_control_pane

0x2761,	// (0x0006c1b2) main_mp3_pane

0xeb0d,	// (0x0007855e) temp_image_control_pane_g1_ParamLimits

0xeb0d,	// (0x0007855e) temp_image_control_pane_g1

0xeb1b,	// (0x0007856c) temp_image_control_pane_g2_ParamLimits

0xeb1b,	// (0x0007856c) temp_image_control_pane_g2

0xeb2d,	// (0x0007857e) temp_image_control_pane_g3_ParamLimits

0xeb2d,	// (0x0007857e) temp_image_control_pane_g3

0x8300,	// (0x00071d51) temp_image_control_pane_g4_ParamLimits

0x8300,	// (0x00071d51) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x0007907d) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x0007907d) temp_image_control_pane_g

0xeb0d,	// (0x0007855e) main_mp3_pane_g1

0x8311,	// (0x00071d62) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00079086) main_mp3_pane_g

0xeb62,	// (0x000785b3) main_mp3_pane_t1

0x2ee7,	// (0x0006c938) main_camera_pane_g8_ParamLimits

0x2ee7,	// (0x0006c938) main_camera_pane_g8

0x5f15,	// (0x0006f966) main_video_pane_g7_ParamLimits

0x5f15,	// (0x0006f966) main_video_pane_g7

0x2f35,	// (0x0006c986) main_camera2_pane_t7_ParamLimits

0x2f35,	// (0x0006c986) main_camera2_pane_t7

0x329d,	// (0x0006ccee) scroll_pane_cp025_ParamLimits

0x329d,	// (0x0006ccee) scroll_pane_cp025

0x32b1,	// (0x0006cd02) scroll_pane_cp026_ParamLimits

0x32b1,	// (0x0006cd02) scroll_pane_cp026

0x32c0,	// (0x0006cd11) wml_content_pane_ParamLimits

0x24ab,	// (0x0006befc) main_touch_calib_pane

0x83b5,	// (0x00071e06) main_touch_calib_pane_g1

0x83c1,	// (0x00071e12) main_touch_calib_pane_g2

0x83cd,	// (0x00071e1e) main_touch_calib_pane_g3

0x83d9,	// (0x00071e2a) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x000790a4) main_touch_calib_pane_g

0x83e5,	// (0x00071e36) main_touch_calib_pane_t1

0x83fe,	// (0x00071e4f) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x000790ad) main_touch_calib_pane_t

0x3a1c,	// (0x0006d46d) mup_progress_pane_cp02

0x3a51,	// (0x0006d4a2) navi_pane_g1

0x3b0c,	// (0x0006d55d) navi_pane_mp_t3

0x2761,	// (0x0006c1b2) main_mp3_pane_ParamLimits

0x803b,	// (0x00071a8c) navi_pane_ParamLimits

0xeb0d,	// (0x0007855e) main_mp3_pane_g1_ParamLimits

0x8311,	// (0x00071d62) main_mp3_pane_g2_ParamLimits

0x831d,	// (0x00071d6e) main_mp3_pane_g3_ParamLimits

0x831d,	// (0x00071d6e) main_mp3_pane_g3

0x8329,	// (0x00071d7a) main_mp3_pane_g4_ParamLimits

0x8329,	// (0x00071d7a) main_mp3_pane_g4

0x2ed9,	// (0x0006c92a) main_mp3_pane_g5_ParamLimits

0x2ed9,	// (0x0006c92a) main_mp3_pane_g5

0xeb3d,	// (0x0007858e) main_mp3_pane_g6_ParamLimits

0xeb3d,	// (0x0007858e) main_mp3_pane_g6

0xeb4a,	// (0x0007859b) main_mp3_pane_g7_ParamLimits

0xeb4a,	// (0x0007859b) main_mp3_pane_g7

0xeb56,	// (0x000785a7) main_mp3_pane_g8_ParamLimits

0xeb56,	// (0x000785a7) main_mp3_pane_g8

0xf635,	// (0x00079086) main_mp3_pane_g_ParamLimits

0x8335,	// (0x00071d86) main_mp3_pane_t2

0x8345,	// (0x00071d96) main_mp3_pane_t3

0xeb70,	// (0x000785c1) main_mp3_pane_t4

0xeb7e,	// (0x000785cf) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00079097) main_mp3_pane_t

0xeb8c,	// (0x000785dd) mup_progress_pane_cp01

0x7ebf,	// (0x00071910) aid_zoom_text_secondary2

0xe980,	// (0x000783d1) list_cale_ev2_pane

0xe988,	// (0x000783d9) scroll_pane_cp023_ParamLimits

0x8459,	// (0x00071eaa) field_cale_ev2_pane_ParamLimits

0x8459,	// (0x00071eaa) field_cale_ev2_pane

0x8482,	// (0x00071ed3) field_cale_ev2_pane_g1_ParamLimits

0x8482,	// (0x00071ed3) field_cale_ev2_pane_g1

0x848e,	// (0x00071edf) field_cale_ev2_pane_g2_ParamLimits

0x848e,	// (0x00071edf) field_cale_ev2_pane_g2

0x84a6,	// (0x00071ef7) field_cale_ev2_pane_g3_ParamLimits

0x84a6,	// (0x00071ef7) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x000790b8) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x000790b8) field_cale_ev2_pane_g

0x4afa,	// (0x0006e54b) field_cale_ev2_pane_t1_ParamLimits

0x4afa,	// (0x0006e54b) field_cale_ev2_pane_t1

0x4b11,	// (0x0006e562) field_cale_ev2_pane_t2_ParamLimits

0x4b11,	// (0x0006e562) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x000790c1) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x000790c1) field_cale_ev2_pane_t

0x7875,	// (0x000712c6) main_postcard_pane_g5_ParamLimits

0x7875,	// (0x000712c6) main_postcard_pane_g5

0x7883,	// (0x000712d4) main_postcard_pane_g6_ParamLimits

0x7883,	// (0x000712d4) main_postcard_pane_g6

0x2ecb,	// (0x0006c91c) camera2_autofocus_pane_cp_ParamLimits

0x2ecb,	// (0x0006c91c) camera2_autofocus_pane_cp

0x2761,	// (0x0006c1b2) main_mup3_pane

0x8509,	// (0x00071f5a) main_mup3_pane_g1_ParamLimits

0x8509,	// (0x00071f5a) main_mup3_pane_g1

0x8558,	// (0x00071fa9) main_mup3_pane_g2_ParamLimits

0x8558,	// (0x00071fa9) main_mup3_pane_g2

0x85bb,	// (0x0007200c) main_mup3_pane_g3_ParamLimits

0x85bb,	// (0x0007200c) main_mup3_pane_g3

0x861a,	// (0x0007206b) main_mup3_pane_g4_ParamLimits

0x861a,	// (0x0007206b) main_mup3_pane_g4

0x8679,	// (0x000720ca) main_mup3_pane_g5_ParamLimits

0x8679,	// (0x000720ca) main_mup3_pane_g5

0x86d8,	// (0x00072129) main_mup3_pane_g6_ParamLimits

0x86d8,	// (0x00072129) main_mup3_pane_g6

0x2ee7,	// (0x0006c938) main_mup3_pane_g7_ParamLimits

0x2ee7,	// (0x0006c938) main_mup3_pane_g7

0x0007,

0xf680,	// (0x000790d1) main_mup3_pane_g_ParamLimits

0xf680,	// (0x000790d1) main_mup3_pane_g

0x8748,	// (0x00072199) main_mup3_pane_t1_ParamLimits

0x8748,	// (0x00072199) main_mup3_pane_t1

0x8829,	// (0x0007227a) main_mup3_pane_t2_ParamLimits

0x8829,	// (0x0007227a) main_mup3_pane_t2

0x890a,	// (0x0007235b) main_mup3_pane_t4_ParamLimits

0x890a,	// (0x0007235b) main_mup3_pane_t4

0x891c,	// (0x0007236d) main_mup3_pane_t5_ParamLimits

0x891c,	// (0x0007236d) main_mup3_pane_t5

0x89e2,	// (0x00072433) main_mup3_pane_t6_ParamLimits

0x89e2,	// (0x00072433) main_mup3_pane_t6

0x0005,

0xf691,	// (0x000790e2) main_mup3_pane_t_ParamLimits

0xf691,	// (0x000790e2) main_mup3_pane_t

0x8a7f,	// (0x000724d0) mup3_progress_pane_ParamLimits

0x8a7f,	// (0x000724d0) mup3_progress_pane

0x1743,	// (0x0006b194) popup_mup3_control_window_ParamLimits

0x1743,	// (0x0006b194) popup_mup3_control_window

0xeb94,	// (0x000785e5) popup_mup3_text_window

0x8ae2,	// (0x00072533) mup3_progress_pane_t1

0x8b01,	// (0x00072552) mup3_progress_pane_t2

0xeb9c,	// (0x000785ed) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x000790ef) mup3_progress_pane_t

0xebb9,	// (0x0007860a) mup_progress_pane_cp03

0xebc9,	// (0x0007861a) bg_tb_trans_pane_cp04

0xebc9,	// (0x0007861a) mup3_volume_pane

0xebd1,	// (0x00078622) popup_mup3_control_window_g1

0xebd1,	// (0x00078622) mup3_volume_pane_g1

0xebd1,	// (0x00078622) mup3_volume_pane_g2

0xebd1,	// (0x00078622) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x000790f6) mup3_volume_pane_g

0x24ab,	// (0x0006befc) bg_tb_trans_pane_cp03

0xebd9,	// (0x0007862a) popup_mup3_text_window_g1

0xebe1,	// (0x00078632) popup_mup3_text_window_t1

0x2fbd,	// (0x0006ca0e) list_calc_item_pane_g1_ParamLimits

0xe670,	// (0x000780c1) mup_volume_pane_cp_g1

0x8417,	// (0x00071e68) main_touch_calib_pane_t3

0x842d,	// (0x00071e7e) main_touch_calib_pane_t4

0x8443,	// (0x00071e94) main_touch_calib_pane_t5

0x532c,	// (0x0006ed7d) aid_cell_size_toolbar2

0x5334,	// (0x0006ed85) aid_popup3_width_pane

0x49af,	// (0x0006e400) aid_zoom_text_msg_primary

0x5e17,	// (0x0006f868) vorec_t7

0x2f81,	// (0x0006c9d2) bg_calc_paper_pane_g1_ParamLimits

0x2f99,	// (0x0006c9ea) bg_calc_paper_pane_g2_ParamLimits

0x2f8d,	// (0x0006c9de) bg_calc_paper_pane_g3_ParamLimits

0x2fb1,	// (0x0006ca02) bg_calc_paper_pane_g4_ParamLimits

0x2fa5,	// (0x0006c9f6) bg_calc_paper_pane_g5_ParamLimits

0x57ad,	// (0x0006f1fe) bg_calc_paper_pane_g6_ParamLimits

0x57be,	// (0x0006f20f) bg_calc_paper_pane_g7_ParamLimits

0x57cf,	// (0x0006f220) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00078afc) bg_calc_paper_pane_g_ParamLimits

0x57e0,	// (0x0006f231) calc_bg_paper_pane_g9_ParamLimits

0x2ecb,	// (0x0006c91c) image_qvga_pane_ParamLimits

0x2ecb,	// (0x0006c91c) image_qvga_pane

0x2e5e,	// (0x0006c8af) bg_popup_sub_pane_cp04_ParamLimits

0xd453,	// (0x00076ea4) popup_mup_playback_window_g1_ParamLimits

0xd45f,	// (0x00076eb0) popup_mup_playback_window_t1_ParamLimits

0xd474,	// (0x00076ec5) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00078e5a) popup_mup_playback_window_t_ParamLimits

0x2ed9,	// (0x0006c92a) main_mup2_pane_g3_ParamLimits

0x2ed9,	// (0x0006c92a) main_mup2_pane_g3

0x60d6,	// (0x0006fb27) popup_toolbar_window_cp04

0xd7e5,	// (0x00077236) popup_call2_audio_second_window_g3_ParamLimits

0xd7e5,	// (0x00077236) popup_call2_audio_second_window_g3

0xdbef,	// (0x00077640) popup_call2_audio_first_window_g4_ParamLimits

0xdbef,	// (0x00077640) popup_call2_audio_first_window_g4

0xe238,	// (0x00077c89) popup_call2_audio_in_window_g4_ParamLimits

0xe238,	// (0x00077c89) popup_call2_audio_in_window_g4

0x7954,	// (0x000713a5) aid_area_sk_bg_cut_ParamLimits

0x7954,	// (0x000713a5) aid_area_sk_bg_cut

0xd489,	// (0x00076eda) aid_area_sk_bg_cut_2_ParamLimits

0xd489,	// (0x00076eda) aid_area_sk_bg_cut_2

0x24ab,	// (0x0006befc) aid_placing_details_win

0x24ab,	// (0x0006befc) aid_placing_details_win_2

0x2ed9,	// (0x0006c92a) camera2_autofocus_pane_g1_ParamLimits

0x5581,	// (0x0006efd2) popup_fixed_preview_cale_window_ParamLimits

0x5581,	// (0x0006efd2) popup_fixed_preview_cale_window

0x3b9c,	// (0x0006d5ed) navi_slider_pane_g3

0x3b93,	// (0x0006d5e4) navi_slider_pane_g4

0x3b8a,	// (0x0006d5db) navi_slider_pane_g5

0x3b9c,	// (0x0006d5ed) navi_slider_pane_g6

0x7502,	// (0x00070f53) navi_slider_pane_g7

0xd398,	// (0x00076de9) mup_scale_pane_g3

0xd3a1,	// (0x00076df2) mup_scale_pane_g4

0xd3aa,	// (0x00076dfb) mup_scale_pane_g5

0x7703,	// (0x00071154) mup_scale_pane_g6

0x770c,	// (0x0007115d) mup_scale_pane_g7

0x2f17,	// (0x0006c968) cams2_slider_pane_g3

0x2f17,	// (0x0006c968) cams2_slider_pane_g4

0x2f17,	// (0x0006c968) cams2_slider_pane_g5

0x2f17,	// (0x0006c968) cams2_slider_pane_g6

0x2f17,	// (0x0006c968) cams2_slider_pane_g7

0x2f17,	// (0x0006c968) camera2_autofocus_pane_cp_g1

0xe4e0,	// (0x00077f31) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4e0,	// (0x00077f31) bg_popup_preview_window_pane_cp02

0xec07,	// (0x00078658) list_fp_cale_pane_ParamLimits

0xec07,	// (0x00078658) list_fp_cale_pane

0xec13,	// (0x00078664) popup_fixed_preview_cale_window_t1_ParamLimits

0xec13,	// (0x00078664) popup_fixed_preview_cale_window_t1

0x8b20,	// (0x00072571) popup_fixed_preview_cale_window_t2_ParamLimits

0x8b20,	// (0x00072571) popup_fixed_preview_cale_window_t2

0x8b35,	// (0x00072586) popup_fixed_preview_cale_window_t3_ParamLimits

0x8b35,	// (0x00072586) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x000790fd) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x000790fd) popup_fixed_preview_cale_window_t

0x8b4a,	// (0x0007259b) list_single_fp_cale_pane_ParamLimits

0x8b4a,	// (0x0007259b) list_single_fp_cale_pane

0xec31,	// (0x00078682) list_single_fp_cale_pane_g1_ParamLimits

0xec31,	// (0x00078682) list_single_fp_cale_pane_g1

0xec3d,	// (0x0007868e) list_single_fp_cale_pane_g2_ParamLimits

0xec3d,	// (0x0007868e) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00079104) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00079104) list_single_fp_cale_pane_g

0xec56,	// (0x000786a7) list_single_fp_cale_pane_t1_ParamLimits

0xec56,	// (0x000786a7) list_single_fp_cale_pane_t1

0xec68,	// (0x000786b9) list_single_fp_cale_pane_t2_ParamLimits

0xec68,	// (0x000786b9) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0007910b) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0007910b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x24ab,	// (0x0006befc) main_dialer_pane

0x24ab,	// (0x0006befc) aid_cell_size_keypad

0x24ab,	// (0x0006befc) dialer_ne_pane

0x24ab,	// (0x0006befc) grid_dialer_command_1_pane

0x24ab,	// (0x0006befc) grid_dialer_command_2_pane

0x24ab,	// (0x0006befc) grid_dialer_keypad_pane

0xe47c,	// (0x00077ecd) bg_popup_call_pane_cp06_ParamLimits

0xe47c,	// (0x00077ecd) bg_popup_call_pane_cp06

0xe47c,	// (0x00077ecd) dialer_ne_clear_pane_ParamLimits

0xe47c,	// (0x00077ecd) dialer_ne_clear_pane

0x2f17,	// (0x0006c968) dialer_ne_pane_g1

0x2f35,	// (0x0006c986) dialer_ne_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) dialer_ne_pane_t1

0xee5a,	// (0x000788ab) dialer_ne_pane_t2_ParamLimits

0xee5a,	// (0x000788ab) dialer_ne_pane_t2

0x8b5d,	// (0x000725ae) dialer_ne_pane_t3_ParamLimits

0x8b5d,	// (0x000725ae) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00079110) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00079110) dialer_ne_pane_t

0x8b5d,	// (0x000725ae) dialer_ne_pane_t3_copy1_ParamLimits

0x8b5d,	// (0x000725ae) dialer_ne_pane_t3_copy1

0xec9b,	// (0x000786ec) cell_dialer_keypad_pane_ParamLimits

0xec9b,	// (0x000786ec) cell_dialer_keypad_pane

0x2761,	// (0x0006c1b2) cell_dialer_command_1_pane_ParamLimits

0x2761,	// (0x0006c1b2) cell_dialer_command_1_pane

0xecb2,	// (0x00078703) cell_dialer_command_2_pane_ParamLimits

0xecb2,	// (0x00078703) cell_dialer_command_2_pane

0x2761,	// (0x0006c1b2) bg_button_pane_cp02_ParamLimits

0x2761,	// (0x0006c1b2) bg_button_pane_cp02

0x2ed9,	// (0x0006c92a) cell_dialer_keypad_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_dialer_keypad_pane_g1

0x2761,	// (0x0006c1b2) bg_button_pane_cp03_ParamLimits

0x2761,	// (0x0006c1b2) bg_button_pane_cp03

0x2ed9,	// (0x0006c92a) cell_dialer_command_1_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_dialer_command_1_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp04

0x2f17,	// (0x0006c968) cell_dialer_command_2_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp06

0x2f17,	// (0x0006c968) dialer_ne_clear_pane_g1

0x3a5d,	// (0x0006d4ae) navi_pane_g2

0x3a8b,	// (0x0006d4dc) navi_pane_g3

0x0002,

0xf311,	// (0x00078d62) navi_pane_g

0x3b1a,	// (0x0006d56b) navi_pane_mv_g2

0x3b41,	// (0x0006d592) navi_pane_mv_g5

0x74cd,	// (0x00070f1e) navi_pane_mv_t1

0x2f75,	// (0x0006c9c6) main_clock2_pane

0x2ecb,	// (0x0006c91c) main_clock2_list_pane_ParamLimits

0x2ecb,	// (0x0006c91c) main_clock2_list_pane

0x8bd3,	// (0x00072624) main_clock2_pane_t1_ParamLimits

0x8bd3,	// (0x00072624) main_clock2_pane_t1

0x8c01,	// (0x00072652) main_clock2_pane_t2_ParamLimits

0x8c01,	// (0x00072652) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0007911c) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0007911c) main_clock2_pane_t

0x8c66,	// (0x000726b7) popup_clock_analogue_window_cp03_ParamLimits

0x8c66,	// (0x000726b7) popup_clock_analogue_window_cp03

0x8c84,	// (0x000726d5) popup_clock_digital_window_cp02_ParamLimits

0x8c84,	// (0x000726d5) popup_clock_digital_window_cp02

0x8cf9,	// (0x0007274a) main_clock2_list_single_pane_ParamLimits

0x8cf9,	// (0x0007274a) main_clock2_list_single_pane

0x318d,	// (0x0006cbde) list_highlight_pane_cp05

0xecf7,	// (0x00078748) main_clock2_list_single_pane_t1

0x60d6,	// (0x0006fb27) popup_toolbar_window_cp04_ParamLimits

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g2

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g3_ParamLimits

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g3

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g4

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g5_ParamLimits

0x2ee7,	// (0x0006c938) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00079060) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00079060) camera2_autofocus_pane_g

0x84ca,	// (0x00071f1b) camera2_autofocus_pane_cp_g2

0x84d2,	// (0x00071f23) camera2_autofocus_pane_cp_g3

0x84da,	// (0x00071f2b) camera2_autofocus_pane_cp_g4

0x84e2,	// (0x00071f33) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x000790c6) camera2_autofocus_pane_cp_g

0x24ab,	// (0x0006befc) popup_dialer_spcha_window

0x24ab,	// (0x0006befc) bg_popup_sub_pane_cp07

0x24ab,	// (0x0006befc) list_spcha_pane

0xed05,	// (0x00078756) list_single_spcha_pane_ParamLimits

0xed05,	// (0x00078756) list_single_spcha_pane

0x24ab,	// (0x0006befc) list_highlight_pane_cp06

0x3693,	// (0x0006d0e4) list_single_spcha_pane_t1

0xdfc0,	// (0x00077a11) popup_call2_audio_out_window_g4_ParamLimits

0xdfc0,	// (0x00077a11) popup_call2_audio_out_window_g4

0x24ab,	// (0x0006befc) main_imed2_pane

0x7f64,	// (0x000719b5) popup_imed_adjust2_window

0x7f77,	// (0x000719c8) popup_imed_trans_window_ParamLimits

0x7f77,	// (0x000719c8) popup_imed_trans_window

0xe74f,	// (0x000781a0) popup_blid_sat_info2_window_t1

0xe75d,	// (0x000781ae) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00078ff5) popup_blid_sat_info2_window_t

0x8dae,	// (0x000727ff) aid_size_cell_colour_35

0x8dc8,	// (0x00072819) aid_size_cell_colour_112

0x8ddf,	// (0x00072830) aid_size_cell_effect

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp02

0x3660,	// (0x0006d0b1) heading_imed_pane

0x8df9,	// (0x0007284a) listscroll_imed_pane

0xed17,	// (0x00078768) heading_imed_pane_g1

0xed1f,	// (0x00078770) heading_imed_pane_t1

0xed2d,	// (0x0007877e) grid_imed_colour_35_pane_ParamLimits

0xed2d,	// (0x0007877e) grid_imed_colour_35_pane

0x8e05,	// (0x00072856) grid_imed_effect_pane

0xed44,	// (0x00078795) list_imed_aspect_pane

0x8e15,	// (0x00072866) scroll_pane_cp027_ParamLimits

0x8e15,	// (0x00072866) scroll_pane_cp027

0x8e21,	// (0x00072872) cell_imed_effect_pane_ParamLimits

0x8e21,	// (0x00072872) cell_imed_effect_pane

0xed4c,	// (0x0007879d) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x0007879d) cell_imed_colour_pane

0xed8e,	// (0x000787df) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x000787df) cell_imed_colour_pane_g1

0xed9f,	// (0x000787f0) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x000787f0) hgihlgiht_grid_pane_cp016

0x8e39,	// (0x0007288a) cell_imed_effect_pane_g1

0x8e41,	// (0x00072892) grid_highlight_pane_cp017

0xedb0,	// (0x00078801) list_imed_single_pane_ParamLimits

0xedb0,	// (0x00078801) list_imed_single_pane

0x24ab,	// (0x0006befc) list_highlight_pane_cp07

0xedc5,	// (0x00078816) list_imed_aspect_pane_comp1_t1

0xd41d,	// (0x00076e6e) bg_tb_trans_pane_cp05

0xede7,	// (0x00078838) popup_imed_adjust2_window_g1

0xee0e,	// (0x0007885f) popup_imed_adjust2_window_t1

0xee26,	// (0x00078877) slider_imed_adjust_pane

0xee3a,	// (0x0007888b) slider_imed_adjust_pane_g1

0xee4a,	// (0x0007889b) slider_imed_adjust_pane_g2

0xee77,	// (0x000788c8) slider_imed_adjust_pane_g3

0xee88,	// (0x000788d9) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x00079139) slider_imed_adjust_pane_g

0x8e4a,	// (0x0007289b) aid_size_cell_clipart2

0x8e56,	// (0x000728a7) grid_imed_clipart_pane

0xd3bb,	// (0x00076e0c) scroll_pane_cp031

0x8e60,	// (0x000728b1) cell_imed_clipart_pane_ParamLimits

0x8e60,	// (0x000728b1) cell_imed_clipart_pane

0x8e82,	// (0x000728d3) cell_imed_clipart_pane_g1

0x24ab,	// (0x0006befc) grid_highlight_pane_cp014

0x8bb5,	// (0x00072606) main_clock2_pane_g1_ParamLimits

0x8bb5,	// (0x00072606) main_clock2_pane_g1

0x8ca0,	// (0x000726f1) aid_call2_pane_cp10

0x8cb2,	// (0x00072703) aid_call_pane_cp10

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g1

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g2

0x8cc4,	// (0x00072715) popup_clock_analogue_window_cp10_g3

0x8cc4,	// (0x00072715) popup_clock_analogue_window_cp10_g4

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x00079127) popup_clock_analogue_window_cp10_g

0x8cda,	// (0x0007272b) popup_clock_analogue_window_cp10_t1

0x8d0b,	// (0x0007275c) clock_digital_number_pane_cp10_ParamLimits

0x8d0b,	// (0x0007275c) clock_digital_number_pane_cp10

0x8d25,	// (0x00072776) clock_digital_number_pane_cp11_ParamLimits

0x8d25,	// (0x00072776) clock_digital_number_pane_cp11

0x8d3f,	// (0x00072790) clock_digital_number_pane_cp12_ParamLimits

0x8d3f,	// (0x00072790) clock_digital_number_pane_cp12

0x8d59,	// (0x000727aa) clock_digital_number_pane_cp13_ParamLimits

0x8d59,	// (0x000727aa) clock_digital_number_pane_cp13

0x8d73,	// (0x000727c4) clock_digital_separator_pane_cp10_ParamLimits

0x8d73,	// (0x000727c4) clock_digital_separator_pane_cp10

0x8d8d,	// (0x000727de) popup_clock_digital_window_cp02_t1_ParamLimits

0x8d8d,	// (0x000727de) popup_clock_digital_window_cp02_t1

0x2e56,	// (0x0006c8a7) clock_digital_number_pane_cp10_g1

0x2e56,	// (0x0006c8a7) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x00079142) clock_digital_number_pane_cp10_g

0x2e56,	// (0x0006c8a7) clock_digital_separator_pane_cp10_g1

0x2e56,	// (0x0006c8a7) clock_digital_separator_pane_g2_cp10

0x3b49,	// (0x0006d59a) navi_pane_vded_g4

0x3b52,	// (0x0006d5a3) navi_pane_vded_g5

0x3b5b,	// (0x0006d5ac) navi_pane_vded_t1

0x24ab,	// (0x0006befc) main_vded_pane

0x8e8b,	// (0x000728dc) main_vded_pane_g1

0x8e97,	// (0x000728e8) main_vded_pane_g2

0x8ea1,	// (0x000728f2) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x00079147) main_vded_pane_g

0x8eab,	// (0x000728fc) main_vded_pane_t1

0x8eb9,	// (0x0007290a) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x0007914e) main_vded_pane_t

0x8ec7,	// (0x00072918) vded_slider_pane

0x8ed1,	// (0x00072922) vded_video_pane

0xee99,	// (0x000788ea) vded_video_pane_g1

0x8edb,	// (0x0007292c) vded_video_pane_g2

0x2f17,	// (0x0006c968) vded_video_pane_g3

0x0002,

0xf702,	// (0x00079153) vded_video_pane_g

0xeea3,	// (0x000788f4) vded_slider_pane_g1

0xe670,	// (0x000780c1) vded_slider_pane_g2

0xeeac,	// (0x000788fd) vded_slider_pane_g3

0xeeb5,	// (0x00078906) vded_slider_pane_g4

0xeebe,	// (0x0007890f) vded_slider_pane_g5

0x0004,

0xf709,	// (0x0007915a) vded_slider_pane_g

0x1743,	// (0x0006b194) mup3_rocker_pane_ParamLimits

0x1743,	// (0x0006b194) mup3_rocker_pane

0xebd1,	// (0x00078622) mup3_control_keys_pane_g1

0xeec7,	// (0x00078918) mup3_control_keys_pane_g2

0xebd1,	// (0x00078622) mup3_control_keys_pane_g3

0xeecf,	// (0x00078920) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x00079165) mup3_control_keys_pane_g

0x55a9,	// (0x0006effa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x55a9,	// (0x0006effa) popup_toolbar2_fixed_window_cp01

0x1743,	// (0x0006b194) popup_toolbar2_fixed_window_cp02_ParamLimits

0x1743,	// (0x0006b194) popup_toolbar2_fixed_window_cp02

0xd957,	// (0x000773a8) popup_call2_audio_second_window_t4_ParamLimits

0xd957,	// (0x000773a8) popup_call2_audio_second_window_t4

0xde85,	// (0x000778d6) popup_call2_audio_first_window_t6_ParamLimits

0xde85,	// (0x000778d6) popup_call2_audio_first_window_t6

0xe0e5,	// (0x00077b36) popup_call2_audio_out_window_t6_ParamLimits

0xe0e5,	// (0x00077b36) popup_call2_audio_out_window_t6

0x24ab,	// (0x0006befc) main_vitu_pane

0x2ecb,	// (0x0006c91c) aid_size_cell_itu_ParamLimits

0x2ecb,	// (0x0006c91c) aid_size_cell_itu

0x2ecb,	// (0x0006c91c) bg_popup_window_pane_cp08_ParamLimits

0x2ecb,	// (0x0006c91c) bg_popup_window_pane_cp08

0x2ecb,	// (0x0006c91c) field_vitu_entry_pane_ParamLimits

0x2ecb,	// (0x0006c91c) field_vitu_entry_pane

0x2ecb,	// (0x0006c91c) grid_vitu_function_pane_ParamLimits

0x2ecb,	// (0x0006c91c) grid_vitu_function_pane

0x2ecb,	// (0x0006c91c) grid_vitu_itu_pane_ParamLimits

0x2ecb,	// (0x0006c91c) grid_vitu_itu_pane

0x2ecb,	// (0x0006c91c) cell_vitu_itu_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cell_vitu_itu_pane

0x2ecb,	// (0x0006c91c) cell_vitu_function_pane_ParamLimits

0x2ecb,	// (0x0006c91c) cell_vitu_function_pane

0x2761,	// (0x0006c1b2) bg_popup_sub_pane_cp08_ParamLimits

0x2761,	// (0x0006c1b2) bg_popup_sub_pane_cp08

0x2f21,	// (0x0006c972) field_vitu_entry_pane_t1_ParamLimits

0x2f21,	// (0x0006c972) field_vitu_entry_pane_t1

0xee5a,	// (0x000788ab) field_vitu_entry_pane_t2_ParamLimits

0xee5a,	// (0x000788ab) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x0007916e) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x0007916e) field_vitu_entry_pane_t

0xe47c,	// (0x00077ecd) bg_button_pane_cp05_ParamLimits

0xe47c,	// (0x00077ecd) bg_button_pane_cp05

0xeed7,	// (0x00078928) cell_vitu_itu_pane_g1

0xe0d1,	// (0x00077b22) cell_vitu_itu_pane_t1_ParamLimits

0xe0d1,	// (0x00077b22) cell_vitu_itu_pane_t1

0xe0d1,	// (0x00077b22) cell_vitu_itu_pane_t2_ParamLimits

0xe0d1,	// (0x00077b22) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x00079173) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x00079173) cell_vitu_itu_pane_t

0x24ab,	// (0x0006befc) bg_button_pane_cp07

0x2f17,	// (0x0006c968) cell_vitu_function_pane_g1

0x5713,	// (0x0006f164) main_calc_pane_g1

0x5368,	// (0x0006edb9) aid_visual_content_pane

0x24ab,	// (0x0006befc) main_vradio_pane

0x2ee7,	// (0x0006c938) main_vradio_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) main_vradio_pane_g1

0x2ee7,	// (0x0006c938) main_vradio_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x00078f0a) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x00078f0a) main_vradio_pane_g

0x2f35,	// (0x0006c986) main_vradio_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) main_vradio_pane_t1

0x2f35,	// (0x0006c986) main_vradio_pane_t2_ParamLimits

0x2f35,	// (0x0006c986) main_vradio_pane_t2

0x2f35,	// (0x0006c986) main_vradio_pane_t3_ParamLimits

0x2f35,	// (0x0006c986) main_vradio_pane_t3

0x0002,

0xf729,	// (0x0007917a) main_vradio_pane_t_ParamLimits

0xf729,	// (0x0007917a) main_vradio_pane_t

0x2ecb,	// (0x0006c91c) vradio_rocker_control_pane_ParamLimits

0x2ecb,	// (0x0006c91c) vradio_rocker_control_pane

0x2ecb,	// (0x0006c91c) vradio_station_info_pane_ParamLimits

0x2ecb,	// (0x0006c91c) vradio_station_info_pane

0x2761,	// (0x0006c1b2) vradio_frequency_info_pane_ParamLimits

0x2761,	// (0x0006c1b2) vradio_frequency_info_pane

0x2f17,	// (0x0006c968) vradio_station_info_pane_g1

0xe0d1,	// (0x00077b22) vradio_station_info_pane_t1_ParamLimits

0xe0d1,	// (0x00077b22) vradio_station_info_pane_t1

0x2f35,	// (0x0006c986) vradio_station_info_pane_t2_ParamLimits

0x2f35,	// (0x0006c986) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00079181) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00079181) vradio_station_info_pane_t

0x24ab,	// (0x0006befc) vradio_tuning_pane

0x8ee4,	// (0x00072935) vradio_rocker_control_pane_g1

0xeef3,	// (0x00078944) vradio_rocker_control_pane_g2

0x8eec,	// (0x0007293d) vradio_rocker_control_pane_g3

0x8ef4,	// (0x00072945) vradio_rocker_control_pane_g4

0x8efc,	// (0x0007294d) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00079186) vradio_rocker_control_pane_g

0x2f17,	// (0x0006c968) vradio_frequency_info_pane_g1

0x2f21,	// (0x0006c972) vradio_frequency_info_pane_t1_ParamLimits

0x2f21,	// (0x0006c972) vradio_frequency_info_pane_t1

0x8f04,	// (0x00072955) vradio_tuning_pane_g1

0x8f11,	// (0x00072962) vradio_tuning_pane_t1

0x53b1,	// (0x0006ee02) area_side_right_pane_ParamLimits

0x53b1,	// (0x0006ee02) area_side_right_pane

0xe4a7,	// (0x00077ef8) status_small_pane_g1

0xe4af,	// (0x00077f00) status_small_pane_g2

0xe4b8,	// (0x00077f09) status_small_pane_g3

0xe4c1,	// (0x00077f12) status_small_pane_g4

0x0003,

0xf506,	// (0x00078f57) status_small_pane_g

0xe4ca,	// (0x00077f1b) status_small_pane_t1

0x24ab,	// (0x0006befc) main_video3_pane

0x24ab,	// (0x0006befc) cams_zoom_vslider_pane

0xeefb,	// (0x0007894c) image3_wide_pane_ParamLimits

0xeefb,	// (0x0007894c) image3_wide_pane

0x24ab,	// (0x0006befc) image3_wide_small_pane

0xef15,	// (0x00078966) main_video3_pane_g1_ParamLimits

0xef15,	// (0x00078966) main_video3_pane_g1

0xef15,	// (0x00078966) main_video3_pane_g2_ParamLimits

0xef15,	// (0x00078966) main_video3_pane_g2

0x0001,

0xf740,	// (0x00079191) main_video3_pane_g_ParamLimits

0xf740,	// (0x00079191) main_video3_pane_g

0xef33,	// (0x00078984) main_video3_pane_t1_ParamLimits

0xef33,	// (0x00078984) main_video3_pane_t1

0xef33,	// (0x00078984) main_video3_pane_t2_ParamLimits

0xef33,	// (0x00078984) main_video3_pane_t2

0xef33,	// (0x00078984) main_video3_pane_t3_ParamLimits

0xef33,	// (0x00078984) main_video3_pane_t3

0x0002,

0xf745,	// (0x00079196) main_video3_pane_t_ParamLimits

0xf745,	// (0x00079196) main_video3_pane_t

0x2f17,	// (0x0006c968) cams_zoom_vslider_pane_g1

0x2f17,	// (0x0006c968) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00078add) cams_zoom_vslider_pane_g

0x24ab,	// (0x0006befc) small_slider_vertical_pane

0x2f17,	// (0x0006c968) small_slider_vertical_pane_g1

0x2f17,	// (0x0006c968) small_slider_vertical_pane_g2

0xef5a,	// (0x000789ab) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0007919d) small_slider_vertical_pane_g

0x24ab,	// (0x0006befc) main_hwr_training_pane

0xef63,	// (0x000789b4) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x000789b4) hwr_training_instruct_pane

0x8f20,	// (0x00072971) hwr_training_navi_pane_ParamLimits

0x8f20,	// (0x00072971) hwr_training_navi_pane

0x8f3a,	// (0x0007298b) hwr_training_write_pane_ParamLimits

0x8f3a,	// (0x0007298b) hwr_training_write_pane

0x24ab,	// (0x0006befc) bg_frame_shadow_pane

0xef9a,	// (0x000789eb) hwr_training_write_pane_g1

0xefa2,	// (0x000789f3) hwr_training_write_pane_g2

0xefaa,	// (0x000789fb) hwr_training_write_pane_g3

0xefb2,	// (0x00078a03) hwr_training_write_pane_g4

0xefba,	// (0x00078a0b) hwr_training_write_pane_g5

0xefc2,	// (0x00078a13) hwr_training_write_pane_g6

0xefca,	// (0x00078a1b) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x000791a4) hwr_training_write_pane_g

0x8f72,	// (0x000729c3) hwr_training_navi_pane_g1_ParamLimits

0x8f72,	// (0x000729c3) hwr_training_navi_pane_g1

0x8f84,	// (0x000729d5) hwr_training_navi_pane_g2_ParamLimits

0x8f84,	// (0x000729d5) hwr_training_navi_pane_g2

0x8f96,	// (0x000729e7) hwr_training_navi_pane_g3_ParamLimits

0x8f96,	// (0x000729e7) hwr_training_navi_pane_g3

0x8fa6,	// (0x000729f7) hwr_training_navi_pane_g4_ParamLimits

0x8fa6,	// (0x000729f7) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x000791b3) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x000791b3) hwr_training_navi_pane_g

0x8fc0,	// (0x00072a11) hwr_training_navi_pane_t1

0x8fce,	// (0x00072a1f) list_single_hwr_training_instruct_pane_ParamLimits

0x8fce,	// (0x00072a1f) list_single_hwr_training_instruct_pane

0xefd2,	// (0x00078a23) list_single_hwr_training_instruct_pane_t1

0xe850,	// (0x000782a1) bg_frame_shadow_pane_g1

0xefe1,	// (0x00078a32) bg_frame_shadow_pane_g2

0xefe9,	// (0x00078a3a) bg_frame_shadow_pane_g3

0xeff1,	// (0x00078a42) bg_frame_shadow_pane_g4

0xeff9,	// (0x00078a4a) bg_frame_shadow_pane_g5

0xf001,	// (0x00078a52) bg_frame_shadow_pane_g6

0xf009,	// (0x00078a5a) bg_frame_shadow_pane_g7

0x302d,	// (0x0006ca7e) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x000791be) bg_frame_shadow_pane_g

0x24ab,	// (0x0006befc) main_video_tele_dialer_pane

0x8ff3,	// (0x00072a44) aid_size_cell_video_keypad_ParamLimits

0x8ff3,	// (0x00072a44) aid_size_cell_video_keypad

0x9003,	// (0x00072a54) grid_video_dialer_keypad_pane_ParamLimits

0x9003,	// (0x00072a54) grid_video_dialer_keypad_pane

0x9037,	// (0x00072a88) video_down_pane_cp_ParamLimits

0x9037,	// (0x00072a88) video_down_pane_cp

0x9061,	// (0x00072ab2) cell_video_dialer_keypad_pane_ParamLimits

0x9061,	// (0x00072ab2) cell_video_dialer_keypad_pane

0xf011,	// (0x00078a62) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00078a62) bg_button_pane_cp08

0x9076,	// (0x00072ac7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9076,	// (0x00072ac7) cell_video_dialer_keypad_pane_g1

0x1743,	// (0x0006b194) mup3_rocker2_pane_ParamLimits

0x1743,	// (0x0006b194) mup3_rocker2_pane

0x2f17,	// (0x0006c968) mup3_rocker2_pane_g1

0x7ed4,	// (0x00071925) main_dialer2_pane

0x24ab,	// (0x0006befc) main_mp4_pane

0x90cb,	// (0x00072b1c) main_mp4_pane_g1_ParamLimits

0x90cb,	// (0x00072b1c) main_mp4_pane_g1

0x90ed,	// (0x00072b3e) main_mp4_pane_g2_ParamLimits

0x90ed,	// (0x00072b3e) main_mp4_pane_g2

0x910b,	// (0x00072b5c) main_mp4_pane_g3_ParamLimits

0x910b,	// (0x00072b5c) main_mp4_pane_g3

0x9144,	// (0x00072b95) main_mp4_pane_g4_ParamLimits

0x9144,	// (0x00072b95) main_mp4_pane_g4

0x916c,	// (0x00072bbd) main_mp4_pane_g5_ParamLimits

0x916c,	// (0x00072bbd) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x000791de) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x000791de) main_mp4_pane_g

0x91d4,	// (0x00072c25) main_mp4_pane_t1_ParamLimits

0x91d4,	// (0x00072c25) main_mp4_pane_t1

0x9236,	// (0x00072c87) main_mp4_pane_t2_ParamLimits

0x9236,	// (0x00072c87) main_mp4_pane_t2

0x929a,	// (0x00072ceb) main_mp4_pane_t3_ParamLimits

0x929a,	// (0x00072ceb) main_mp4_pane_t3

0x92f8,	// (0x00072d49) main_mp4_pane_t4_ParamLimits

0x92f8,	// (0x00072d49) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x000791ef) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x000791ef) main_mp4_pane_t

0x9356,	// (0x00072da7) mp4_progress_pane_ParamLimits

0x9356,	// (0x00072da7) mp4_progress_pane

0x1706,	// (0x0006b157) mp4_rocker_pane_ParamLimits

0x1706,	// (0x0006b157) mp4_rocker_pane

0x00a2,	// (0x00069af3) mp4_progress_pane_t1

0x00c1,	// (0x00069b12) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x000791f8) mp4_progress_pane_t

0x00e0,	// (0x00069b31) mup_progress_pane_cp04

0x2f17,	// (0x0006c968) mp4_rocker_pane_g1

0x2ecb,	// (0x0006c91c) aid_cell_size_keypad2_ParamLimits

0x2ecb,	// (0x0006c91c) aid_cell_size_keypad2

0x2ecb,	// (0x0006c91c) dialer2_ne_pane_ParamLimits

0x2ecb,	// (0x0006c91c) dialer2_ne_pane

0x2ecb,	// (0x0006c91c) grid_dialer2_keypad_pane_ParamLimits

0x2ecb,	// (0x0006c91c) grid_dialer2_keypad_pane

0x0b54,	// (0x0006a5a5) bg_popup_call_pane_cp07_ParamLimits

0x0b54,	// (0x0006a5a5) bg_popup_call_pane_cp07

0x9392,	// (0x00072de3) dialer2_ne_pane_t1_ParamLimits

0x9392,	// (0x00072de3) dialer2_ne_pane_t1

0xec9b,	// (0x000786ec) cell_dialer2_keypad_pane_ParamLimits

0xec9b,	// (0x000786ec) cell_dialer2_keypad_pane

0xe47c,	// (0x00077ecd) bg_button_pane_pane_cp04_ParamLimits

0xe47c,	// (0x00077ecd) bg_button_pane_pane_cp04

0x2ed9,	// (0x0006c92a) cell_dialer2_keypad_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) cell_dialer2_keypad_pane_g1

0x5f98,	// (0x0006f9e9) aid_placing_vt_set_content_ParamLimits

0x5f98,	// (0x0006f9e9) aid_placing_vt_set_content

0x5fc4,	// (0x0006fa15) aid_placing_vt_set_title_ParamLimits

0x5fc4,	// (0x0006fa15) aid_placing_vt_set_title

0x24ab,	// (0x0006befc) main_image3_pane

0x93eb,	// (0x00072e3c) area_side_right_pane_cp01_ParamLimits

0x93eb,	// (0x00072e3c) area_side_right_pane_cp01

0x2ef5,	// (0x0006c946) main_image3_pane_g1_ParamLimits

0x2ef5,	// (0x0006c946) main_image3_pane_g1

0x9418,	// (0x00072e69) main_image3_pane_g2_ParamLimits

0x9418,	// (0x00072e69) main_image3_pane_g2

0x9431,	// (0x00072e82) main_image3_pane_g3_ParamLimits

0x9431,	// (0x00072e82) main_image3_pane_g3

0x944a,	// (0x00072e9b) main_image3_pane_g4_ParamLimits

0x944a,	// (0x00072e9b) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00079207) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00079207) main_image3_pane_g

0x9463,	// (0x00072eb4) main_image3_pane_t1_ParamLimits

0x9463,	// (0x00072eb4) main_image3_pane_t1

0x9488,	// (0x00072ed9) main_image3_pane_t2_ParamLimits

0x9488,	// (0x00072ed9) main_image3_pane_t2

0x94a7,	// (0x00072ef8) main_image3_pane_t3_ParamLimits

0x94a7,	// (0x00072ef8) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00079210) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00079210) main_image3_pane_t

0x2ecb,	// (0x0006c91c) grid_sctrl_middle_pane_cp01_ParamLimits

0x2ecb,	// (0x0006c91c) grid_sctrl_middle_pane_cp01

0x9508,	// (0x00072f59) cell_sctrl_middle_pane_cp01_ParamLimits

0x9508,	// (0x00072f59) cell_sctrl_middle_pane_cp01

0x9519,	// (0x00072f6a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9519,	// (0x00072f6a) cell_sctrl_middle_pane_cp01_g1

0x24ab,	// (0x0006befc) main_call4_pane

0x9526,	// (0x00072f77) aid_size_button_call4_ParamLimits

0x9526,	// (0x00072f77) aid_size_button_call4

0x955c,	// (0x00072fad) call4_windows_pane_ParamLimits

0x955c,	// (0x00072fad) call4_windows_pane

0x9571,	// (0x00072fc2) grid_call4_button_pane_ParamLimits

0x9571,	// (0x00072fc2) grid_call4_button_pane

0x959f,	// (0x00072ff0) call4_windows_conf_pane

0x95b6,	// (0x00073007) popup_call4_audio_first_window_ParamLimits

0x95b6,	// (0x00073007) popup_call4_audio_first_window

0x9606,	// (0x00073057) popup_call4_audio_second_window_ParamLimits

0x9606,	// (0x00073057) popup_call4_audio_second_window

0x961f,	// (0x00073070) popup_call4_audio_wait_window_ParamLimits

0x961f,	// (0x00073070) popup_call4_audio_wait_window

0x962d,	// (0x0007307e) cell_call4_button_pane_ParamLimits

0x962d,	// (0x0007307e) cell_call4_button_pane

0x9650,	// (0x000730a1) bg_button_pane_cp09_ParamLimits

0x9650,	// (0x000730a1) bg_button_pane_cp09

0x965c,	// (0x000730ad) cell_call4_button_pane_g1_ParamLimits

0x965c,	// (0x000730ad) cell_call4_button_pane_g1

0x9669,	// (0x000730ba) cell_call4_button_pane_t1_ParamLimits

0x9669,	// (0x000730ba) cell_call4_button_pane_t1

0x018d,	// (0x00069bde) popup_call4_audio_conf_window_ParamLimits

0x018d,	// (0x00069bde) popup_call4_audio_conf_window

0x8ae2,	// (0x00072533) mup3_progress_pane_t1_ParamLimits

0x8b01,	// (0x00072552) mup3_progress_pane_t2_ParamLimits

0xeb9c,	// (0x000785ed) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x000790ef) mup3_progress_pane_t_ParamLimits

0xebb9,	// (0x0007860a) mup_progress_pane_cp03_ParamLimits

0xebd1,	// (0x00078622) mup3_control_keys_pane_g4_copy1

0x1706,	// (0x0006b157) mp4_rocker2_pane_ParamLimits

0x1706,	// (0x0006b157) mp4_rocker2_pane

0xebd1,	// (0x00078622) mp4_rocker2_pane_g1

0xebd1,	// (0x00078622) mp4_rocker2_pane_g2

0xebd1,	// (0x00078622) mp4_rocker2_pane_g3

0xebd1,	// (0x00078622) mp4_rocker2_pane_g4

0xebd1,	// (0x00078622) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x00079219) mp4_rocker2_pane_g

0x24ab,	// (0x0006befc) main_camera4_pane

0x24ab,	// (0x0006befc) main_video4_pane

0x9013,	// (0x00072a64) main_video_tele_dialer_pane_t1_ParamLimits

0x9013,	// (0x00072a64) main_video_tele_dialer_pane_t1

0x9025,	// (0x00072a76) main_video_tele_dialer_pane_t2_ParamLimits

0x9025,	// (0x00072a76) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x000791cf) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x000791cf) main_video_tele_dialer_pane_t

0x96c5,	// (0x00073116) cam4_autofocus_pane_ParamLimits

0x96c5,	// (0x00073116) cam4_autofocus_pane

0x96df,	// (0x00073130) cam4_image_uncrop_pane_ParamLimits

0x96df,	// (0x00073130) cam4_image_uncrop_pane

0x96f6,	// (0x00073147) cam4_indicators_pane_ParamLimits

0x96f6,	// (0x00073147) cam4_indicators_pane

0x9712,	// (0x00073163) main_camera4_pane_g1_ParamLimits

0x9712,	// (0x00073163) main_camera4_pane_g1

0x971e,	// (0x0007316f) main_camera4_pane_g2_ParamLimits

0x971e,	// (0x0007316f) main_camera4_pane_g2

0x971e,	// (0x0007316f) main_camera4_pane_g3_ParamLimits

0x971e,	// (0x0007316f) main_camera4_pane_g3

0x972a,	// (0x0007317b) main_camera4_pane_g4_ParamLimits

0x972a,	// (0x0007317b) main_camera4_pane_g4

0x9736,	// (0x00073187) main_camera4_pane_g5_ParamLimits

0x9736,	// (0x00073187) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x00079224) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x00079224) main_camera4_pane_g

0x9750,	// (0x000731a1) main_camera4_pane_t1_ParamLimits

0x9750,	// (0x000731a1) main_camera4_pane_t1

0x2ed9,	// (0x0006c92a) bg_tb_trans_pane_cp06

0x97a0,	// (0x000731f1) cam4_indicators_pane_g1

0x97b1,	// (0x00073202) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x0007923f) cam4_indicators_pane_g

0x97cf,	// (0x00073220) cam4_indicators_pane_t1

0x97f9,	// (0x0007324a) main_video4_pane_g1_ParamLimits

0x97f9,	// (0x0007324a) main_video4_pane_g1

0x9805,	// (0x00073256) main_video4_pane_g2_ParamLimits

0x9805,	// (0x00073256) main_video4_pane_g2

0x9811,	// (0x00073262) main_video4_pane_g3_ParamLimits

0x9811,	// (0x00073262) main_video4_pane_g3

0x981d,	// (0x0007326e) main_video4_pane_g4_ParamLimits

0x981d,	// (0x0007326e) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x00079246) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x00079246) main_video4_pane_g

0x983d,	// (0x0007328e) vid4_indicators_pane_ParamLimits

0x983d,	// (0x0007328e) vid4_indicators_pane

0x985c,	// (0x000732ad) video4_image_uncrop_cif_pane_ParamLimits

0x985c,	// (0x000732ad) video4_image_uncrop_cif_pane

0x986b,	// (0x000732bc) video4_image_uncrop_nhd_pane_ParamLimits

0x986b,	// (0x000732bc) video4_image_uncrop_nhd_pane

0x96df,	// (0x00073130) video4_image_uncrop_vga_pane_ParamLimits

0x96df,	// (0x00073130) video4_image_uncrop_vga_pane

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp07

0x9882,	// (0x000732d3) vid4_indicators_pane_g1

0x9896,	// (0x000732e7) vid4_indicators_pane_g2

0x98aa,	// (0x000732fb) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x00079251) vid4_indicators_pane_g

0x98d9,	// (0x0007332a) vid4_indicators_pane_t1

0x98f0,	// (0x00073341) cam4_autofocus_pane_g1

0x98f8,	// (0x00073349) cam4_autofocus_pane_g2

0x9900,	// (0x00073351) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x0007925c) cam4_autofocus_pane_g

0x9908,	// (0x00073359) cam4_autofocus_pane_g3_copy1

0x9045,	// (0x00072a96) video_down_pane_cp_t1

0x9053,	// (0x00072aa4) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x000791d4) video_down_pane_cp_t

0x2ecb,	// (0x0006c91c) popup_vitu2_window_ParamLimits

0x2ecb,	// (0x0006c91c) popup_vitu2_window

0x9910,	// (0x00073361) aid_size_cell2_itu2_ParamLimits

0x9910,	// (0x00073361) aid_size_cell2_itu2

0x9932,	// (0x00073383) aid_size_cell_itu2_ParamLimits

0x9932,	// (0x00073383) aid_size_cell_itu2

0x0b54,	// (0x0006a5a5) bg_popup_window_pane_cp09_ParamLimits

0x0b54,	// (0x0006a5a5) bg_popup_window_pane_cp09

0x9976,	// (0x000733c7) field_vitu2_entry_pane_ParamLimits

0x9976,	// (0x000733c7) field_vitu2_entry_pane

0x9996,	// (0x000733e7) grid_vitu2_function_pane_ParamLimits

0x9996,	// (0x000733e7) grid_vitu2_function_pane

0x99da,	// (0x0007342b) grid_vitu2_itu_pane_ParamLimits

0x99da,	// (0x0007342b) grid_vitu2_itu_pane

0x9a52,	// (0x000734a3) cell_vitu2_itu_pane_ParamLimits

0x9a52,	// (0x000734a3) cell_vitu2_itu_pane

0x9a6b,	// (0x000734bc) cell_vitu2_function_pane_ParamLimits

0x9a6b,	// (0x000734bc) cell_vitu2_function_pane

0x028e,	// (0x00069cdf) bg_popup_call_pane_cp08_ParamLimits

0x028e,	// (0x00069cdf) bg_popup_call_pane_cp08

0x02a5,	// (0x00069cf6) field_vitu2_entry_pane_g1

0x02b1,	// (0x00069d02) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x00079263) field_vitu2_entry_pane_g

0x9aac,	// (0x000734fd) field_vitu2_entry_pane_t1_ParamLimits

0x9aac,	// (0x000734fd) field_vitu2_entry_pane_t1

0x02bd,	// (0x00069d0e) field_vitu2_entry_pane_t2_ParamLimits

0x02bd,	// (0x00069d0e) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x0007926a) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x0007926a) field_vitu2_entry_pane_t

0x8202,	// (0x00071c53) bg_button_pane_cp010_ParamLimits

0x8202,	// (0x00071c53) bg_button_pane_cp010

0x9adf,	// (0x00073530) cell_vitu2_itu_pane_g1

0x9b05,	// (0x00073556) cell_vitu2_itu_pane_t1_ParamLimits

0x9b05,	// (0x00073556) cell_vitu2_itu_pane_t1

0x9b51,	// (0x000735a2) cell_vitu2_itu_pane_t2_ParamLimits

0x9b51,	// (0x000735a2) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x00079274) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x00079274) cell_vitu2_itu_pane_t

0x2761,	// (0x0006c1b2) bg_button_pane_cp011

0x9c19,	// (0x0007366a) cell_vitu2_function_pane_g1

0x24ab,	// (0x0006befc) main_myfav_hc_pane

0x94e9,	// (0x00072f3a) popup_image3_note_pane_ParamLimits

0x94e9,	// (0x00072f3a) popup_image3_note_pane

0x94f7,	// (0x00072f48) popup_image3_tool_bar_pane_ParamLimits

0x94f7,	// (0x00072f48) popup_image3_tool_bar_pane

0x9bc7,	// (0x00073618) cell_vitu2_itu_pane_t3_ParamLimits

0x9bc7,	// (0x00073618) cell_vitu2_itu_pane_t3

0x24ab,	// (0x0006befc) bg_popup_trans_pane

0x02e2,	// (0x00069d33) grid_image3_tool_bar_pane

0x02ec,	// (0x00069d3d) bg_popup_trans_pane_g1

0x33a6,	// (0x0006cdf7) bg_popup_trans_pane_g2

0x02f4,	// (0x00069d45) bg_popup_trans_pane_g3

0x02fc,	// (0x00069d4d) bg_popup_trans_pane_g4

0x0304,	// (0x00069d55) bg_popup_trans_pane_g5

0x030c,	// (0x00069d5d) bg_popup_trans_pane_g6

0x0314,	// (0x00069d65) bg_popup_trans_pane_g7

0x031c,	// (0x00069d6d) bg_popup_trans_pane_g8

0x3386,	// (0x0006cdd7) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x0007927b) bg_popup_trans_pane_g

0x0324,	// (0x00069d75) cell_image3_tool_bar_pane_ParamLimits

0x0324,	// (0x00069d75) cell_image3_tool_bar_pane

0x2f17,	// (0x0006c968) cell_image3_tool_bar_pane_g1

0x24ab,	// (0x0006befc) bg_popup_trans_pane_cp1

0x0338,	// (0x00069d89) popup_image3_note_pane_t1

0x0346,	// (0x00069d97) popup_image3_note_pane_t2

0x0354,	// (0x00069da5) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x0007928e) popup_image3_note_pane_t

0x0362,	// (0x00069db3) popup_image3_note_pane_t3_copy1

0x9c2d,	// (0x0007367e) bg_myfav_hc_instruction_pane_ParamLimits

0x9c2d,	// (0x0007367e) bg_myfav_hc_instruction_pane

0x9c45,	// (0x00073696) cell_myfav_contact_pane_ParamLimits

0x9c45,	// (0x00073696) cell_myfav_contact_pane

0x9c5f,	// (0x000736b0) cell_myfav_contact_pane_cp1_ParamLimits

0x9c5f,	// (0x000736b0) cell_myfav_contact_pane_cp1

0x9c77,	// (0x000736c8) cell_myfav_contact_pane_cp2_ParamLimits

0x9c77,	// (0x000736c8) cell_myfav_contact_pane_cp2

0x9c8f,	// (0x000736e0) cell_myfav_contact_pane_cp3_ParamLimits

0x9c8f,	// (0x000736e0) cell_myfav_contact_pane_cp3

0x9ca6,	// (0x000736f7) cell_myfav_contact_pane_cp4_ParamLimits

0x9ca6,	// (0x000736f7) cell_myfav_contact_pane_cp4

0x9cbc,	// (0x0007370d) cell_myfav_contact_pane_cp5_ParamLimits

0x9cbc,	// (0x0007370d) cell_myfav_contact_pane_cp5

0x9cd0,	// (0x00073721) cell_myfav_contact_pane_cp6_ParamLimits

0x9cd0,	// (0x00073721) cell_myfav_contact_pane_cp6

0x9ce4,	// (0x00073735) cell_myfav_contact_pane_cp7_ParamLimits

0x9ce4,	// (0x00073735) cell_myfav_contact_pane_cp7

0x0370,	// (0x00069dc1) listscroll_gen_pane_cp05

0x9cfc,	// (0x0007374d) main_myfav_hc_pane_g1_ParamLimits

0x9cfc,	// (0x0007374d) main_myfav_hc_pane_g1

0x9d12,	// (0x00073763) main_myfav_hc_pane_g2_ParamLimits

0x9d12,	// (0x00073763) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00079295) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00079295) main_myfav_hc_pane_g

0x9d40,	// (0x00073791) main_myfav_hc_pane_t1_ParamLimits

0x9d40,	// (0x00073791) main_myfav_hc_pane_t1

0x0379,	// (0x00069dca) main_myfav_hc_pane_t2_ParamLimits

0x0379,	// (0x00069dca) main_myfav_hc_pane_t2

0x038b,	// (0x00069ddc) main_myfav_hc_pane_t3_ParamLimits

0x038b,	// (0x00069ddc) main_myfav_hc_pane_t3

0x9d57,	// (0x000737a8) main_myfav_hc_pane_t4_ParamLimits

0x9d57,	// (0x000737a8) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0007929c) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0007929c) main_myfav_hc_pane_t

0x2f17,	// (0x0006c968) bg_myfav_hc_instruction_pane_g1

0x039d,	// (0x00069dee) cell_myfav_contact_pane_g1_ParamLimits

0x039d,	// (0x00069dee) cell_myfav_contact_pane_g1

0x039d,	// (0x00069dee) cell_myfav_contact_pane_g2_ParamLimits

0x039d,	// (0x00069dee) cell_myfav_contact_pane_g2

0x03a9,	// (0x00069dfa) cell_myfav_contact_pane_g3_ParamLimits

0x03a9,	// (0x00069dfa) cell_myfav_contact_pane_g3

0x2ee7,	// (0x0006c938) cell_myfav_contact_pane_g4_ParamLimits

0x2ee7,	// (0x0006c938) cell_myfav_contact_pane_g4

0x03b6,	// (0x00069e07) cell_myfav_contact_pane_g5_ParamLimits

0x03b6,	// (0x00069e07) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x000792a7) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x000792a7) cell_myfav_contact_pane_g

0x9d28,	// (0x00073779) main_myfav_hc_pane_g3_ParamLimits

0x9d28,	// (0x00073779) main_myfav_hc_pane_g3

0x54e5,	// (0x0006ef36) popup_adpt_find_window

0x9d81,	// (0x000737d2) afind_page_pane_ParamLimits

0x9d81,	// (0x000737d2) afind_page_pane

0x9d8e,	// (0x000737df) aid_size_cell_afind_ParamLimits

0x9d8e,	// (0x000737df) aid_size_cell_afind

0x9da8,	// (0x000737f9) bg_popup_sub_pane_cp09_ParamLimits

0x9da8,	// (0x000737f9) bg_popup_sub_pane_cp09

0x9db5,	// (0x00073806) find_pane_cp01_ParamLimits

0x9db5,	// (0x00073806) find_pane_cp01

0x03c2,	// (0x00069e13) grid_afind_control_pane_ParamLimits

0x03c2,	// (0x00069e13) grid_afind_control_pane

0x9dc2,	// (0x00073813) grid_afind_pane_ParamLimits

0x9dc2,	// (0x00073813) grid_afind_pane

0x9dde,	// (0x0007382f) cell_afind_pane_ParamLimits

0x9dde,	// (0x0007382f) cell_afind_pane

0x2f17,	// (0x0006c968) afind_page_pane_g1

0x9e26,	// (0x00073877) afind_page_pane_g2

0x9e2e,	// (0x0007387f) afind_page_pane_g3

0x0002,

0xf861,	// (0x000792b2) afind_page_pane_g

0x9e36,	// (0x00073887) afind_page_pane_t1

0x03e8,	// (0x00069e39) cell_afind_grid_control_pane_ParamLimits

0x03e8,	// (0x00069e39) cell_afind_grid_control_pane

0x03f7,	// (0x00069e48) bg_button_pane_cp69_ParamLimits

0x03f7,	// (0x00069e48) bg_button_pane_cp69

0x9e44,	// (0x00073895) cell_afind_pane_g1_ParamLimits

0x9e44,	// (0x00073895) cell_afind_pane_g1

0x9e51,	// (0x000738a2) cell_afind_pane_t1_ParamLimits

0x9e51,	// (0x000738a2) cell_afind_pane_t1

0x0403,	// (0x00069e54) bg_button_pane_cp72

0x040b,	// (0x00069e5c) cell_afind_grid_control_pane_g1

0x7a7b,	// (0x000714cc) aid_image_placing_area_ParamLimits

0x7a7b,	// (0x000714cc) aid_image_placing_area

0x2ed9,	// (0x0006c92a) field_vitu_entry_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) field_vitu_entry_pane_g1

0x2ed9,	// (0x0006c92a) field_vitu_entry_pane_g2_ParamLimits

0x2ed9,	// (0x0006c92a) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00078bea) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00078bea) field_vitu_entry_pane_g

0xeed7,	// (0x00078928) cell_vitu_itu_pane_g1_ParamLimits

0xee5a,	// (0x000788ab) cell_vitu_itu_pane_t3_ParamLimits

0xee5a,	// (0x000788ab) cell_vitu_itu_pane_t3

0x00a2,	// (0x00069af3) mp4_progress_pane_t1_ParamLimits

0x00c1,	// (0x00069b12) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x000791f8) mp4_progress_pane_t_ParamLimits

0x00e0,	// (0x00069b31) mup_progress_pane_cp04_ParamLimits

0x9d6b,	// (0x000737bc) main_myfav_hc_pane_t5_ParamLimits

0x9d6b,	// (0x000737bc) main_myfav_hc_pane_t5

0x49b7,	// (0x0006e408) aid_zoom_text_primary

0x54e5,	// (0x0006ef36) popup_adpt_find_window_ParamLimits

0x2761,	// (0x0006c1b2) main_cam_set_pane

0x9704,	// (0x00073155) cam4_zoom_pane_ParamLimits

0x9704,	// (0x00073155) cam4_zoom_pane

0x9e63,	// (0x000738b4) main_cam_set_pane_g1_ParamLimits

0x9e63,	// (0x000738b4) main_cam_set_pane_g1

0x9e71,	// (0x000738c2) main_cam_set_pane_g2_ParamLimits

0x9e71,	// (0x000738c2) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x000792b9) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x000792b9) main_cam_set_pane_g

0x9e7d,	// (0x000738ce) main_cam_set_pane_t1_ParamLimits

0x9e7d,	// (0x000738ce) main_cam_set_pane_t1

0x9e99,	// (0x000738ea) main_cset_listscroll_pane_ParamLimits

0x9e99,	// (0x000738ea) main_cset_listscroll_pane

0x9ecb,	// (0x0007391c) main_cset_slider_pane_ParamLimits

0x9ecb,	// (0x0007391c) main_cset_slider_pane

0x041c,	// (0x00069e6d) main_cset_list_pane_ParamLimits

0x041c,	// (0x00069e6d) main_cset_list_pane

0x042c,	// (0x00069e7d) scroll_pane_cp028

0x9eea,	// (0x0007393b) aid_area_touch_slider

0x9f06,	// (0x00073957) cset_slider_pane

0x9f29,	// (0x0007397a) main_cset_slider_pane_g1

0x9f3e,	// (0x0007398f) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x000792be) main_cset_slider_pane_g

0x0465,	// (0x00069eb6) main_cset_slider_pane_t1

0xa000,	// (0x00073a51) main_cset_slider_pane_t2

0xa01a,	// (0x00073a6b) main_cset_slider_pane_t3

0xa034,	// (0x00073a85) main_cset_slider_pane_t4

0xa04e,	// (0x00073a9f) main_cset_slider_pane_t5

0xa06c,	// (0x00073abd) main_cset_slider_pane_t6

0xa083,	// (0x00073ad4) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x000792e3) main_cset_slider_pane_t

0xa18f,	// (0x00073be0) cset_list_set_pane_ParamLimits

0xa18f,	// (0x00073be0) cset_list_set_pane

0x04ff,	// (0x00069f50) aid_position_infowindow_above

0x0507,	// (0x00069f58) aid_position_infowindow_below

0xa1a5,	// (0x00073bf6) cset_list_set_pane_g1_ParamLimits

0xa1a5,	// (0x00073bf6) cset_list_set_pane_g1

0x4b26,	// (0x0006e577) cset_list_set_pane_g3_ParamLimits

0x4b26,	// (0x0006e577) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00079302) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00079302) cset_list_set_pane_g

0x4b35,	// (0x0006e586) cset_list_set_pane_t1_ParamLimits

0x4b35,	// (0x0006e586) cset_list_set_pane_t1

0x2761,	// (0x0006c1b2) list_highlight_pane_cp021_ParamLimits

0x2761,	// (0x0006c1b2) list_highlight_pane_cp021

0xd398,	// (0x00076de9) cset_slider_pane_g1

0xd3aa,	// (0x00076dfb) cset_slider_pane_g2

0xd3a1,	// (0x00076df2) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00079307) cset_slider_pane_g

0xa1b1,	// (0x00073c02) aid_area_touch_cam4_zoom

0xa1b9,	// (0x00073c0a) cam4_zoom_cont_pane

0xa1c1,	// (0x00073c12) cam4_zoom_pane_g1

0xa1c9,	// (0x00073c1a) cam4_zoom_pane_g2

0xa1d1,	// (0x00073c22) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x0007930e) cam4_zoom_pane_g

0x0e93,	// (0x0006a8e4) cam4_zoom_cont_pane_g1

0x0e9c,	// (0x0006a8ed) cam4_zoom_cont_pane_g2

0x0ea5,	// (0x0006a8f6) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00079315) cam4_zoom_cont_pane_g

0x9540,	// (0x00072f91) call4_image_pane_ParamLimits

0x9540,	// (0x00072f91) call4_image_pane

0x959f,	// (0x00072ff0) call4_windows_conf_pane_ParamLimits

0x95e4,	// (0x00073035) popup_call4_audio_in_window_ParamLimits

0x95e4,	// (0x00073035) popup_call4_audio_in_window

0x24ab,	// (0x0006befc) bg_popup_call2_act_pane_cp02

0x0185,	// (0x00069bd6) call4_list_conf_pane

0x2f17,	// (0x0006c968) call4_image_pane_g1

0x2f17,	// (0x0006c968) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00078add) call4_image_pane_g

0x057a,	// (0x00069fcb) list_single_graphic_popup_conf4_pane_ParamLimits

0x057a,	// (0x00069fcb) list_single_graphic_popup_conf4_pane

0x24ab,	// (0x0006befc) list_highlight_pane_cp022

0x058d,	// (0x00069fde) list_single_graphic_popup_conf4_pane_g1

0x388e,	// (0x0006d2df) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0007931c) list_single_graphic_popup_conf4_pane_g

0x0595,	// (0x00069fe6) list_single_graphic_popup_conf4_pane_t1

0x6128,	// (0x0006fb79) popup_vtel_slider_window_ParamLimits

0x6128,	// (0x0006fb79) popup_vtel_slider_window

0x00f3,	// (0x00069b44) dialer2_ne_pane_t2_ParamLimits

0x00f3,	// (0x00069b44) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x000791fd) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x000791fd) dialer2_ne_pane_t

0x2761,	// (0x0006c1b2) bg_popup_sub_pane_cp010_ParamLimits

0x2761,	// (0x0006c1b2) bg_popup_sub_pane_cp010

0xa1d9,	// (0x00073c2a) popup_vtel_slider_window_g1_ParamLimits

0xa1d9,	// (0x00073c2a) popup_vtel_slider_window_g1

0xa1e5,	// (0x00073c36) popup_vtel_slider_window_g2_ParamLimits

0xa1e5,	// (0x00073c36) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x00079321) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x00079321) popup_vtel_slider_window_g

0xa22d,	// (0x00073c7e) vtel_slider_pane_ParamLimits

0xa22d,	// (0x00073c7e) vtel_slider_pane

0xa23c,	// (0x00073c8d) vtel_slider_pane_g1_ParamLimits

0xa23c,	// (0x00073c8d) vtel_slider_pane_g1

0xa249,	// (0x00073c9a) vtel_slider_pane_g2_ParamLimits

0xa249,	// (0x00073c9a) vtel_slider_pane_g2

0xa256,	// (0x00073ca7) vtel_slider_pane_g3_ParamLimits

0xa256,	// (0x00073ca7) vtel_slider_pane_g3

0xa23c,	// (0x00073c8d) vtel_slider_pane_g4_ParamLimits

0xa23c,	// (0x00073c8d) vtel_slider_pane_g4

0xa263,	// (0x00073cb4) vtel_slider_pane_g5_ParamLimits

0xa263,	// (0x00073cb4) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x0007932a) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x0007932a) vtel_slider_pane_g

0x2761,	// (0x0006c1b2) main_gallery2_pane

0x9958,	// (0x000733a9) aid_size_row_itut2_dropdow_list_ParamLimits

0x9958,	// (0x000733a9) aid_size_row_itut2_dropdow_list

0x99b8,	// (0x00073409) grid_vitu2_function_top_pane_ParamLimits

0x99b8,	// (0x00073409) grid_vitu2_function_top_pane

0x9a12,	// (0x00073463) popup_vitu2_dropdown_list_window_ParamLimits

0x9a12,	// (0x00073463) popup_vitu2_dropdown_list_window

0x9a30,	// (0x00073481) popup_vitu2_match_list_window

0xa270,	// (0x00073cc1) cell_vitu2_function_top_pane_ParamLimits

0xa270,	// (0x00073cc1) cell_vitu2_function_top_pane

0xa28a,	// (0x00073cdb) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa28a,	// (0x00073cdb) cell_vitu2_function_top_pane_cp01

0xa2a6,	// (0x00073cf7) cell_vitu2_function_top_wide_pane_ParamLimits

0xa2a6,	// (0x00073cf7) cell_vitu2_function_top_wide_pane

0x2761,	// (0x0006c1b2) bg_button_pane_cp012

0xa2c4,	// (0x00073d15) cell_vitu2_function_top_pane_g1

0xa2d8,	// (0x00073d29) bg_button_pane_cp013_ParamLimits

0xa2d8,	// (0x00073d29) bg_button_pane_cp013

0xa2f4,	// (0x00073d45) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa2f4,	// (0x00073d45) cell_vitu2_function_top_wide_pane_g1

0x2ecb,	// (0x0006c91c) bg_popup_sub_pane_cp20

0xa30c,	// (0x00073d5d) list_vitu2_match_list_pane

0x02ec,	// (0x00069d3d) bg_popup_sub_pane_cp20_g1

0x02f4,	// (0x00069d45) bg_popup_sub_pane_cp20_g2

0x33a6,	// (0x0006cdf7) bg_popup_sub_pane_cp20_g3

0x02fc,	// (0x00069d4d) bg_popup_sub_pane_cp20_g4

0x3386,	// (0x0006cdd7) bg_popup_sub_pane_cp20_g5

0x05c7,	// (0x0006a018) bg_popup_sub_pane_cp20_g6

0x030c,	// (0x00069d5d) bg_popup_sub_pane_cp20_g7

0x0314,	// (0x00069d65) bg_popup_sub_pane_cp20_g8

0x031c,	// (0x00069d6d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x00079335) bg_popup_sub_pane_cp20_g

0xa324,	// (0x00073d75) list_vitu2_match_list_item_pane_ParamLimits

0xa324,	// (0x00073d75) list_vitu2_match_list_item_pane

0xa336,	// (0x00073d87) list_vitu2_match_list_item_pane_t1

0x24ab,	// (0x0006befc) bg_popup_sub_pane_cp21

0x318d,	// (0x0006cbde) grid_vitu2_dropdown_list_pane

0xa344,	// (0x00073d95) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa344,	// (0x00073d95) cell_vitu2_dropdown_list_char_pane

0xa366,	// (0x00073db7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa366,	// (0x00073db7) cell_vitu2_dropdown_list_ctrl_pane

0x0601,	// (0x0006a052) cell_vitu2_dropdown_list_char_pane_g1

0x05f8,	// (0x0006a049) cell_vitu2_dropdown_list_char_pane_g2

0x05ef,	// (0x0006a040) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x00079348) cell_vitu2_dropdown_list_char_pane_g

0xa38e,	// (0x00073ddf) cell_vitu2_dropdown_list_char_pane_t1

0xa39c,	// (0x00073ded) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa39c,	// (0x00073ded) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa3a9,	// (0x00073dfa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa3a9,	// (0x00073dfa) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa3b6,	// (0x00073e07) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa3b6,	// (0x00073e07) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa3c3,	// (0x00073e14) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa3c3,	// (0x00073e14) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2ed9,	// (0x0006c92a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2ed9,	// (0x0006c92a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x0007934f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x0007934f) cell_vitu2_dropdown_list_ctrl_pane_g

0xa3df,	// (0x00073e30) aid_size_cell_gallery2_ParamLimits

0xa3df,	// (0x00073e30) aid_size_cell_gallery2

0xa3f9,	// (0x00073e4a) grid_gallery2_pane_ParamLimits

0xa3f9,	// (0x00073e4a) grid_gallery2_pane

0xa410,	// (0x00073e61) scroll_pane_cp029_ParamLimits

0xa410,	// (0x00073e61) scroll_pane_cp029

0xa420,	// (0x00073e71) cell_gallery2_pane_ParamLimits

0xa420,	// (0x00073e71) cell_gallery2_pane

0x060a,	// (0x0006a05b) cell_gallery2_pane_g2

0x1b64,	// (0x0006b5b5) cell_gallery2_pane_g3

0x0612,	// (0x0006a063) cell_gallery2_pane_g4

0x061a,	// (0x0006a06b) cell_gallery2_pane_g5

0x318d,	// (0x0006cbde) grid_highlight_pane_cp10

0x9a30,	// (0x00073481) popup_vitu2_match_list_window_ParamLimits

0x9a42,	// (0x00073493) popup_vitu2_query_window_ParamLimits

0x9a42,	// (0x00073493) popup_vitu2_query_window

0x24ab,	// (0x0006befc) bg_vitu2_candi_button_pane

0x0601,	// (0x0006a052) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x05f8,	// (0x0006a049) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x05ef,	// (0x0006a040) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa475,	// (0x00073ec6) bg_button_pane_cp015

0xa48a,	// (0x00073edb) bg_button_pane_cp016

0xa496,	// (0x00073ee7) bg_button_pane_cp017

0xd41d,	// (0x00076e6e) bg_popup_sub_pane_cp22

0x0622,	// (0x0006a073) popup_vitu2_query_window_g1

0xa4d6,	// (0x00073f27) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0007935a) popup_vitu2_query_window_g

0xa4fa,	// (0x00073f4b) popup_vitu2_query_window_t1_ParamLimits

0xa4fa,	// (0x00073f4b) popup_vitu2_query_window_t1

0xa52d,	// (0x00073f7e) popup_vitu2_query_window_t2_ParamLimits

0xa52d,	// (0x00073f7e) popup_vitu2_query_window_t2

0xa53f,	// (0x00073f90) popup_vitu2_query_window_t3_ParamLimits

0xa53f,	// (0x00073f90) popup_vitu2_query_window_t3

0xa567,	// (0x00073fb8) popup_vitu2_query_window_t4_ParamLimits

0xa567,	// (0x00073fb8) popup_vitu2_query_window_t4

0xa57b,	// (0x00073fcc) popup_vitu2_query_window_t5_ParamLimits

0xa57b,	// (0x00073fcc) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x00079361) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x00079361) popup_vitu2_query_window_t

0x0414,	// (0x00069e65) main_cset_text_pane

0x9eea,	// (0x0007393b) aid_area_touch_slider_ParamLimits

0x9f06,	// (0x00073957) cset_slider_pane_ParamLimits

0x9f29,	// (0x0007397a) main_cset_slider_pane_g1_ParamLimits

0x9f3e,	// (0x0007398f) main_cset_slider_pane_g2_ParamLimits

0x0435,	// (0x00069e86) main_cset_slider_pane_g3_ParamLimits

0x0435,	// (0x00069e86) main_cset_slider_pane_g3

0x9f53,	// (0x000739a4) main_cset_slider_pane_g4_ParamLimits

0x9f53,	// (0x000739a4) main_cset_slider_pane_g4

0x9f62,	// (0x000739b3) main_cset_slider_pane_g5_ParamLimits

0x9f62,	// (0x000739b3) main_cset_slider_pane_g5

0x9f70,	// (0x000739c1) main_cset_slider_pane_g6_ParamLimits

0x9f70,	// (0x000739c1) main_cset_slider_pane_g6

0xf86d,	// (0x000792be) main_cset_slider_pane_g_ParamLimits

0x0465,	// (0x00069eb6) main_cset_slider_pane_t1_ParamLimits

0xa000,	// (0x00073a51) main_cset_slider_pane_t2_ParamLimits

0xa01a,	// (0x00073a6b) main_cset_slider_pane_t3_ParamLimits

0xa034,	// (0x00073a85) main_cset_slider_pane_t4_ParamLimits

0xa04e,	// (0x00073a9f) main_cset_slider_pane_t5_ParamLimits

0xa06c,	// (0x00073abd) main_cset_slider_pane_t6_ParamLimits

0xa083,	// (0x00073ad4) main_cset_slider_pane_t7_ParamLimits

0xa0b1,	// (0x00073b02) main_cset_slider_pane_t8_ParamLimits

0xa0b1,	// (0x00073b02) main_cset_slider_pane_t8

0xa0d9,	// (0x00073b2a) main_cset_slider_pane_t9_ParamLimits

0xa0d9,	// (0x00073b2a) main_cset_slider_pane_t9

0xa101,	// (0x00073b52) main_cset_slider_pane_t10_ParamLimits

0xa101,	// (0x00073b52) main_cset_slider_pane_t10

0xa129,	// (0x00073b7a) main_cset_slider_pane_t11_ParamLimits

0xa129,	// (0x00073b7a) main_cset_slider_pane_t11

0xa153,	// (0x00073ba4) main_cset_slider_pane_t12_ParamLimits

0xa153,	// (0x00073ba4) main_cset_slider_pane_t12

0xa170,	// (0x00073bc1) main_cset_slider_pane_t13_ParamLimits

0xa170,	// (0x00073bc1) main_cset_slider_pane_t13

0xf892,	// (0x000792e3) main_cset_slider_pane_t_ParamLimits

0x24ab,	// (0x0006befc) bg_popup_sub_pane_cp011

0x062e,	// (0x0006a07f) main_cset_text_pane_g1

0x0636,	// (0x0006a087) main_cset_text_pane_t1

0x0644,	// (0x0006a095) main_cset_text_pane_t2

0x0652,	// (0x0006a0a3) main_cset_text_pane_t3

0x0660,	// (0x0006a0b1) main_cset_text_pane_t4

0x066e,	// (0x0006a0bf) main_cset_text_pane_t5

0x067c,	// (0x0006a0cd) main_cset_text_pane_t6

0x068a,	// (0x0006a0db) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x00079370) main_cset_text_pane_t

0x24ab,	// (0x0006befc) main_cam4_burst_pane

0x24ab,	// (0x0006befc) main_cam5_pane

0x03d6,	// (0x00069e27) bg_button_pane_cp019

0x03df,	// (0x00069e30) bg_button_pane_cp020

0x0441,	// (0x00069e92) main_cset_slider_pane_g7_ParamLimits

0x0441,	// (0x00069e92) main_cset_slider_pane_g7

0x044d,	// (0x00069e9e) main_cset_slider_pane_g8_ParamLimits

0x044d,	// (0x00069e9e) main_cset_slider_pane_g8

0x9f84,	// (0x000739d5) main_cset_slider_pane_g9_ParamLimits

0x9f84,	// (0x000739d5) main_cset_slider_pane_g9

0x9f90,	// (0x000739e1) main_cset_slider_pane_g10_ParamLimits

0x9f90,	// (0x000739e1) main_cset_slider_pane_g10

0x9f9c,	// (0x000739ed) main_cset_slider_pane_g11_ParamLimits

0x9f9c,	// (0x000739ed) main_cset_slider_pane_g11

0x9fa8,	// (0x000739f9) main_cset_slider_pane_g12_ParamLimits

0x9fa8,	// (0x000739f9) main_cset_slider_pane_g12

0x9fb4,	// (0x00073a05) main_cset_slider_pane_g13_ParamLimits

0x9fb4,	// (0x00073a05) main_cset_slider_pane_g13

0x9fc0,	// (0x00073a11) main_cset_slider_pane_g14_ParamLimits

0x9fc0,	// (0x00073a11) main_cset_slider_pane_g14

0x9fcc,	// (0x00073a1d) main_cset_slider_pane_g15_ParamLimits

0x9fcc,	// (0x00073a1d) main_cset_slider_pane_g15

0x048d,	// (0x00069ede) main_cset_slider_pane_t14_ParamLimits

0x048d,	// (0x00069ede) main_cset_slider_pane_t14

0x04c6,	// (0x00069f17) main_cset_slider_pane_t15_ParamLimits

0x04c6,	// (0x00069f17) main_cset_slider_pane_t15

0xa5e5,	// (0x00074036) aid_cam4_burst_size_cell_ParamLimits

0xa5e5,	// (0x00074036) aid_cam4_burst_size_cell

0xa601,	// (0x00074052) grid_cam4_burst_pane_ParamLimits

0xa601,	// (0x00074052) grid_cam4_burst_pane

0xa631,	// (0x00074082) linegrid_cam4_burst_pane_ParamLimits

0xa631,	// (0x00074082) linegrid_cam4_burst_pane

0xa651,	// (0x000740a2) scroll_pane_cp30_ParamLimits

0xa651,	// (0x000740a2) scroll_pane_cp30

0xa65d,	// (0x000740ae) cell_cam4_burst_pane_ParamLimits

0xa65d,	// (0x000740ae) cell_cam4_burst_pane

0x06a4,	// (0x0006a0f5) linegrid_cam4_burst_pane_g1_ParamLimits

0x06a4,	// (0x0006a0f5) linegrid_cam4_burst_pane_g1

0xa699,	// (0x000740ea) linegrid_cam4_burst_pane_g2_ParamLimits

0xa699,	// (0x000740ea) linegrid_cam4_burst_pane_g2

0x06b1,	// (0x0006a102) linegrid_cam4_burst_pane_g3_ParamLimits

0x06b1,	// (0x0006a102) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0007937f) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0007937f) linegrid_cam4_burst_pane_g

0xa6aa,	// (0x000740fb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa6aa,	// (0x000740fb) linegrid_cam4_burst_pane_g3_copy1

0x06be,	// (0x0006a10f) linegrid_cam4_burst_pane_g4_ParamLimits

0x06be,	// (0x0006a10f) linegrid_cam4_burst_pane_g4

0xa6c4,	// (0x00074115) linegrid_cam4_burst_pane_g5_ParamLimits

0xa6c4,	// (0x00074115) linegrid_cam4_burst_pane_g5

0xa6d5,	// (0x00074126) linegrid_cam4_burst_pane_g6_ParamLimits

0xa6d5,	// (0x00074126) linegrid_cam4_burst_pane_g6

0x06cb,	// (0x0006a11c) linegrid_cam4_burst_pane_g7_ParamLimits

0x06cb,	// (0x0006a11c) linegrid_cam4_burst_pane_g7

0xa6e6,	// (0x00074137) cell_cam4_burst_pane_g1

0x06e4,	// (0x0006a135) main_cam5_pane_t1_ParamLimits

0x06e4,	// (0x0006a135) main_cam5_pane_t1

0x06f6,	// (0x0006a147) main_cam5_pane_t2_ParamLimits

0x06f6,	// (0x0006a147) main_cam5_pane_t2

0x0708,	// (0x0006a159) main_cam5_pane_t3_ParamLimits

0x0708,	// (0x0006a159) main_cam5_pane_t3

0x071a,	// (0x0006a16b) main_cam5_pane_t4_ParamLimits

0x071a,	// (0x0006a16b) main_cam5_pane_t4

0x0732,	// (0x0006a183) main_cam5_pane_t5_ParamLimits

0x0732,	// (0x0006a183) main_cam5_pane_t5

0x0746,	// (0x0006a197) main_cam5_pane_t6_ParamLimits

0x0746,	// (0x0006a197) main_cam5_pane_t6

0x075a,	// (0x0006a1ab) main_cam5_pane_t7_ParamLimits

0x075a,	// (0x0006a1ab) main_cam5_pane_t7

0x076c,	// (0x0006a1bd) main_cam5_pane_t8_ParamLimits

0x076c,	// (0x0006a1bd) main_cam5_pane_t8

0x0788,	// (0x0006a1d9) main_cam5_pane_t9_ParamLimits

0x0788,	// (0x0006a1d9) main_cam5_pane_t9

0x079a,	// (0x0006a1eb) main_cam5_pane_t10_ParamLimits

0x079a,	// (0x0006a1eb) main_cam5_pane_t10

0x07ac,	// (0x0006a1fd) main_cam5_pane_t11_ParamLimits

0x07ac,	// (0x0006a1fd) main_cam5_pane_t11

0x07be,	// (0x0006a20f) main_cam5_pane_t12_ParamLimits

0x07be,	// (0x0006a20f) main_cam5_pane_t12

0x07d3,	// (0x0006a224) main_cam5_pane_t13_ParamLimits

0x07d3,	// (0x0006a224) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0007938b) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0007938b) main_cam5_pane_t

0x559a,	// (0x0006efeb) popup_scut_keymap_window_ParamLimits

0x559a,	// (0x0006efeb) popup_scut_keymap_window

0xa6f9,	// (0x0007414a) aid_size_cell_brow_shortcut

0x318d,	// (0x0006cbde) bg_popup_window_pane_cp010

0xa705,	// (0x00074156) grid_scut_pane

0xa711,	// (0x00074162) cell_scut_pane_ParamLimits

0xa711,	// (0x00074162) cell_scut_pane

0xa728,	// (0x00074179) cell_scut_pane_g1

0x07f0,	// (0x0006a241) cell_scut_pane_t1

0x07ff,	// (0x0006a250) cell_scut_pane_t2

0xa731,	// (0x00074182) cell_scut_pane_t3

0x0002,

0xf955,	// (0x000793a6) cell_scut_pane_t

0x86e4,	// (0x00072135) main_mup3_pane_g8_ParamLimits

0x86e4,	// (0x00072135) main_mup3_pane_g8

0x9966,	// (0x000733b7) area_vitu2_query_pane_ParamLimits

0x9966,	// (0x000733b7) area_vitu2_query_pane

0xa4a2,	// (0x00073ef3) input_focus_pane_cp08

0x080e,	// (0x0006a25f) area_vitu2_query_pane_g1

0xa73f,	// (0x00074190) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x000793ad) area_vitu2_query_pane_g

0xa750,	// (0x000741a1) area_vitu2_query_pane_t1_ParamLimits

0xa750,	// (0x000741a1) area_vitu2_query_pane_t1

0xa764,	// (0x000741b5) area_vitu2_query_pane_t2_ParamLimits

0xa764,	// (0x000741b5) area_vitu2_query_pane_t2

0xa778,	// (0x000741c9) area_vitu2_query_pane_t3_ParamLimits

0xa778,	// (0x000741c9) area_vitu2_query_pane_t3

0x081a,	// (0x0006a26b) area_vitu2_query_pane_t4_ParamLimits

0x081a,	// (0x0006a26b) area_vitu2_query_pane_t4

0x0842,	// (0x0006a293) area_vitu2_query_pane_t5_ParamLimits

0x0842,	// (0x0006a293) area_vitu2_query_pane_t5

0x086a,	// (0x0006a2bb) area_vitu2_query_pane_t6_ParamLimits

0x086a,	// (0x0006a2bb) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x000793b2) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x000793b2) area_vitu2_query_pane_t

0xa48a,	// (0x00073edb) bg_button_pane_cp018

0xa7a0,	// (0x000741f1) bg_button_pane_cp021

0xa7ac,	// (0x000741fd) bg_button_pane_cp022

0xa7cf,	// (0x00074220) input_focus_pane_cp09

0x39ca,	// (0x0006d41b) aid_size_touch_mv_arrow_left

0x39f3,	// (0x0006d444) aid_size_touch_mv_arrow_right

0x9fe4,	// (0x00073a35) main_cset_slider_pane_g16_ParamLimits

0x9fe4,	// (0x00073a35) main_cset_slider_pane_g16

0x9ff2,	// (0x00073a43) main_cset_slider_pane_g17_ParamLimits

0x9ff2,	// (0x00073a43) main_cset_slider_pane_g17

0xa6e6,	// (0x00074137) cell_cam4_burst_pane_g1_ParamLimits

0x24ab,	// (0x0006befc) compa_mode_pane

0xa1f1,	// (0x00073c42) popup_vtel_slider_window_g3_ParamLimits

0xa1f1,	// (0x00073c42) popup_vtel_slider_window_g3

0xa205,	// (0x00073c56) popup_vtel_slider_window_g4_ParamLimits

0xa205,	// (0x00073c56) popup_vtel_slider_window_g4

0xa219,	// (0x00073c6a) popup_vtel_slider_window_t1_ParamLimits

0xa219,	// (0x00073c6a) popup_vtel_slider_window_t1

0x24ab,	// (0x0006befc) main_cl_pane

0x7f64,	// (0x000719b5) popup_imed_adjust2_window_ParamLimits

0xd41d,	// (0x00076e6e) bg_tb_trans_pane_cp05_ParamLimits

0xede7,	// (0x00078838) popup_imed_adjust2_window_g1_ParamLimits

0xedf6,	// (0x00078847) popup_imed_adjust2_window_g2_ParamLimits

0xedf6,	// (0x00078847) popup_imed_adjust2_window_g2

0xee02,	// (0x00078853) popup_imed_adjust2_window_g3_ParamLimits

0xee02,	// (0x00078853) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x00079132) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x00079132) popup_imed_adjust2_window_g

0xee0e,	// (0x0007885f) popup_imed_adjust2_window_t1_ParamLimits

0xee26,	// (0x00078877) slider_imed_adjust_pane_ParamLimits

0xee3a,	// (0x0007888b) slider_imed_adjust_pane_g1_ParamLimits

0xee4a,	// (0x0007889b) slider_imed_adjust_pane_g2_ParamLimits

0xee77,	// (0x000788c8) slider_imed_adjust_pane_g3_ParamLimits

0xee88,	// (0x000788d9) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x00079139) slider_imed_adjust_pane_g_ParamLimits

0x96ad,	// (0x000730fe) aid_touch_area_cam4_ParamLimits

0x96ad,	// (0x000730fe) aid_touch_area_cam4

0x96bd,	// (0x0007310e) battery_pane_cp01

0x9744,	// (0x00073195) main_camera4_pane_g6_ParamLimits

0x9744,	// (0x00073195) main_camera4_pane_g6

0x9762,	// (0x000731b3) main_camera4_pane_t2_ParamLimits

0x9762,	// (0x000731b3) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x00079231) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x00079231) main_camera4_pane_t

0x97e9,	// (0x0007323a) aid_touch_area_vid4_ParamLimits

0x97e9,	// (0x0007323a) aid_touch_area_vid4

0x9829,	// (0x0007327a) main_video4_pane_g5_ParamLimits

0x9829,	// (0x0007327a) main_video4_pane_g5

0x984d,	// (0x0007329e) vid4_progress_pane_ParamLimits

0x984d,	// (0x0007329e) vid4_progress_pane

0x0459,	// (0x00069eaa) main_cset_slider_pane_g18_ParamLimits

0x0459,	// (0x00069eaa) main_cset_slider_pane_g18

0x06d8,	// (0x0006a129) cell_cam4_burst_pane_g2_ParamLimits

0x06d8,	// (0x0006a129) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00079386) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00079386) cell_cam4_burst_pane_g

0xa7df,	// (0x00074230) bg_cl_pane_ParamLimits

0xa7df,	// (0x00074230) bg_cl_pane

0xa7eb,	// (0x0007423c) cl_header_pane_ParamLimits

0xa7eb,	// (0x0007423c) cl_header_pane

0xa7f7,	// (0x00074248) cl_listscroll_pane_ParamLimits

0xa7f7,	// (0x00074248) cl_listscroll_pane

0x08b6,	// (0x0006a307) bg_cl_pane_g1

0x08be,	// (0x0006a30f) bg_cl_pane_g2

0x08c6,	// (0x0006a317) bg_cl_pane_g3

0x08ce,	// (0x0006a31f) bg_cl_pane_g4

0x08d6,	// (0x0006a327) bg_cl_pane_g5

0x08de,	// (0x0006a32f) bg_cl_pane_g6

0x08e6,	// (0x0006a337) bg_cl_pane_g7

0x08ee,	// (0x0006a33f) bg_cl_pane_g8

0x08f6,	// (0x0006a347) bg_cl_pane_g9

0x0008,

0xf970,	// (0x000793c1) bg_cl_pane_g

0xa803,	// (0x00074254) aid_height_cl_leading_ParamLimits

0xa803,	// (0x00074254) aid_height_cl_leading

0xa80f,	// (0x00074260) aid_height_cl_text_ParamLimits

0xa80f,	// (0x00074260) aid_height_cl_text

0x2ecb,	// (0x0006c91c) bg_cl_header_pane_ParamLimits

0x2ecb,	// (0x0006c91c) bg_cl_header_pane

0xa827,	// (0x00074278) cl_header_pane_g1_ParamLimits

0xa827,	// (0x00074278) cl_header_pane_g1

0xa834,	// (0x00074285) cl_header_pane_t1_ParamLimits

0xa834,	// (0x00074285) cl_header_pane_t1

0x08fe,	// (0x0006a34f) cl_list_pane

0x042c,	// (0x00069e7d) hc_scroll_pane_cp01

0x3386,	// (0x0006cdd7) bg_cl_header_pane_g1

0x02ec,	// (0x00069d3d) bg_cl_header_pane_g2

0x33a6,	// (0x0006cdf7) bg_cl_header_pane_g3

0x02fc,	// (0x00069d4d) bg_cl_header_pane_g4

0x02f4,	// (0x00069d45) bg_cl_header_pane_g5

0x05c7,	// (0x0006a018) bg_cl_header_pane_g6

0x0314,	// (0x00069d65) bg_cl_header_pane_g7

0x031c,	// (0x00069d6d) bg_cl_header_pane_g8

0x030c,	// (0x00069d5d) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x000793d4) bg_cl_header_pane_g

0xa846,	// (0x00074297) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa846,	// (0x00074297) hc_cl_list_double_graphic_heading_pane

0xa857,	// (0x000742a8) hc_cl_list_single_graphic_pane_ParamLimits

0xa857,	// (0x000742a8) hc_cl_list_single_graphic_pane

0xa870,	// (0x000742c1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa870,	// (0x000742c1) hc_cl_list_single_graphic_pane_g1

0xa87c,	// (0x000742cd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa87c,	// (0x000742cd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x000793e7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x000793e7) hc_cl_list_single_graphic_pane_g

0xa890,	// (0x000742e1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa890,	// (0x000742e1) hc_cl_list_single_graphic_pane_t1

0xa870,	// (0x000742c1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa870,	// (0x000742c1) hc_cl_list_double_graphic_heading_pane_g1

0xa8a5,	// (0x000742f6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa8a5,	// (0x000742f6) hc_cl_list_double_graphic_heading_pane_g2

0xa8b9,	// (0x0007430a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa8b9,	// (0x0007430a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x000793ec) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x000793ec) hc_cl_list_double_graphic_heading_pane_g

0xa8cd,	// (0x0007431e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa8cd,	// (0x0007431e) hc_cl_list_double_graphic_heading_pane_t1

0xa8e2,	// (0x00074333) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa8e2,	// (0x00074333) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x000793f3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x000793f3) hc_cl_list_double_graphic_heading_pane_t

0xa8ff,	// (0x00074350) vid4_progress_pane_g1

0xa90f,	// (0x00074360) vid4_progress_pane_g2

0xa91f,	// (0x00074370) vid4_progress_pane_g3

0xa931,	// (0x00074382) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x000793f8) vid4_progress_pane_g

0xa949,	// (0x0007439a) vid4_progress_pane_t1

0xa95f,	// (0x000743b0) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x00079403) vid4_progress_pane_t

0xa989,	// (0x000743da) wait_bar_pane_cp07

0xe6fa,	// (0x0007814b) blid_firmament_pane_ParamLimits

0xe747,	// (0x00078198) popup_blid_sat_info2_window_g1

0xe76b,	// (0x000781bc) popup_blid_sat_info2_window_t3

0xe779,	// (0x000781ca) popup_blid_sat_info2_window_t4

0xe787,	// (0x000781d8) popup_blid_sat_info2_window_t5

0xe795,	// (0x000781e6) popup_blid_sat_info2_window_t6

0xe7a5,	// (0x000781f6) popup_blid_sat_info2_window_t7

0xe7b3,	// (0x00078204) popup_blid_sat_info2_window_t8

0xe7c1,	// (0x00078212) popup_blid_sat_info2_window_t9

0xe7cf,	// (0x00078220) popup_blid_sat_info2_window_t10

0xe890,	// (0x000782e1) aid_firma_cardinal_ParamLimits

0xe8a4,	// (0x000782f5) blid_firmament_pane_t1_ParamLimits

0xe8bb,	// (0x0007830c) blid_firmament_pane_t2_ParamLimits

0xe8d2,	// (0x00078323) blid_firmament_pane_t3_ParamLimits

0xe8e9,	// (0x0007833a) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x0007902b) blid_firmament_pane_t_ParamLimits

0xe900,	// (0x00078351) blid_sat_info_pane_ParamLimits

0x2761,	// (0x0006c1b2) main_cam_set_pane_ParamLimits

0x8dae,	// (0x000727ff) aid_size_cell_colour_35_ParamLimits

0x8dc8,	// (0x00072819) aid_size_cell_colour_112_ParamLimits

0x8ddf,	// (0x00072830) aid_size_cell_effect_ParamLimits

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp02_ParamLimits

0x3660,	// (0x0006d0b1) heading_imed_pane_ParamLimits

0x8df9,	// (0x0007284a) listscroll_imed_pane_ParamLimits

0xdc01,	// (0x00077652) popup_call2_audio_first_window_g5_ParamLimits

0xdc01,	// (0x00077652) popup_call2_audio_first_window_g5

0x93b9,	// (0x00072e0a) aid_size_touch_image3_arrow_left_ParamLimits

0x93b9,	// (0x00072e0a) aid_size_touch_image3_arrow_left

0x93cf,	// (0x00072e20) aid_size_touch_image3_arrow_right_ParamLimits

0x93cf,	// (0x00072e20) aid_size_touch_image3_arrow_right

0xa974,	// (0x000743c5) vid4_progress_pane_t3

0x8f52,	// (0x000729a3) main_hwr_training_symbol_option_pane_ParamLimits

0x8f52,	// (0x000729a3) main_hwr_training_symbol_option_pane

0xef85,	// (0x000789d6) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x000789d6) popup_hwr_training_preview_window

0x8fb3,	// (0x00072a04) hwr_training_navi_pane_g5_ParamLimits

0x8fb3,	// (0x00072a04) hwr_training_navi_pane_g5

0x02da,	// (0x00069d2b) popup_char_count_window

0x2ecb,	// (0x0006c91c) bg_popup_sub_pane_cp20_ParamLimits

0xa30c,	// (0x00073d5d) list_vitu2_match_list_pane_ParamLimits

0xa318,	// (0x00073d69) vitu2_page_scroll_pane_ParamLimits

0xa318,	// (0x00073d69) vitu2_page_scroll_pane

0x0993,	// (0x0006a3e4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0993,	// (0x0006a3e4) list_single_hwr_training_symbol_option_pane

0x09a6,	// (0x0006a3f7) list_single_hwr_training_symbol_option_pane_g1

0x09ae,	// (0x0006a3ff) list_single_hwr_training_symbol_option_pane_t1

0x09bc,	// (0x0006a40d) bg_button_pane_cp023

0x09c5,	// (0x0006a416) bg_button_pane_cp024

0x09f8,	// (0x0006a449) vitu2_page_scroll_pane_g1

0x0a00,	// (0x0006a451) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0007940a) vitu2_page_scroll_pane_g

0x0a08,	// (0x0006a459) vitu2_page_scroll_pane_t1

0xe670,	// (0x000780c1) popup_char_count_window_g1

0x0a17,	// (0x0006a468) popup_char_count_window_g2

0x0a20,	// (0x0006a471) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0007940f) popup_char_count_window_g

0x0a29,	// (0x0006a47a) popup_char_count_window_t1

0x24ab,	// (0x0006befc) main_vded2_pane

0xedd3,	// (0x00078824) aid_size_cell_imed_line

0xeddd,	// (0x0007882e) grid_imed_line_width_pane

0x98bb,	// (0x0007330c) vid4_indicators_pane_g4

0x0a37,	// (0x0006a488) cell_imed_line_width_pane_ParamLimits

0x0a37,	// (0x0006a488) cell_imed_line_width_pane

0x0a4b,	// (0x0006a49c) cell_imed_line_width_pane_g1

0x0a54,	// (0x0006a4a5) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x00079416) cell_imed_line_width_pane_g

0xa9a4,	// (0x000743f5) main_vded2_pane_g1_ParamLimits

0xa9a4,	// (0x000743f5) main_vded2_pane_g1

0xa9b1,	// (0x00074402) main_vded2_pane_g2_ParamLimits

0xa9b1,	// (0x00074402) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0007941b) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0007941b) main_vded2_pane_g

0xa9bf,	// (0x00074410) vded2_slider_pane_ParamLimits

0xa9bf,	// (0x00074410) vded2_slider_pane

0xa9cc,	// (0x0007441d) aid_size_touch_vded2_end

0xa9d6,	// (0x00074427) aid_size_touch_vded2_playhead

0x0a5c,	// (0x0006a4ad) aid_size_touch_vded2_start

0x0a64,	// (0x0006a4b5) vded2_slider_bg_pane

0x0a6d,	// (0x0006a4be) vded2_slider_pane_g1

0x0a76,	// (0x0006a4c7) vded2_slider_pane_g2

0xa9de,	// (0x0007442f) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x00079420) vded2_slider_pane_g

0x0a7e,	// (0x0006a4cf) vded2_slider_bg_pane_g1

0x0a87,	// (0x0006a4d8) vded2_slider_bg_pane_g2

0x0a90,	// (0x0006a4e1) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x00079427) vded2_slider_bg_pane_g

0x7819,	// (0x0007126a) aid_postcard_touch_down_pane_ParamLimits

0x7819,	// (0x0007126a) aid_postcard_touch_down_pane

0x7829,	// (0x0007127a) aid_postcard_touch_up_pane_ParamLimits

0x7829,	// (0x0007127a) aid_postcard_touch_up_pane

0x24ab,	// (0x0006befc) main_blid2_pane

0x7eef,	// (0x00071940) popup_blid2_search_window

0x24ab,	// (0x0006befc) blid2_gps_pane

0x24ab,	// (0x0006befc) blid2_navig_pane

0x24ab,	// (0x0006befc) blid2_search_pane

0x24ab,	// (0x0006befc) blid2_tripm_pane

0xa9e7,	// (0x00074438) blid2_search_pane_g1_ParamLimits

0xa9e7,	// (0x00074438) blid2_search_pane_g1

0xa9f7,	// (0x00074448) blid2_search_pane_t1_ParamLimits

0xa9f7,	// (0x00074448) blid2_search_pane_t1

0xaa09,	// (0x0007445a) aid_size_cell_blid2_gps_ParamLimits

0xaa09,	// (0x0007445a) aid_size_cell_blid2_gps

0xaa19,	// (0x0007446a) blid2_gps_pane_g1_ParamLimits

0xaa19,	// (0x0007446a) blid2_gps_pane_g1

0xaa25,	// (0x00074476) grid_blid2_satellite_pane_ParamLimits

0xaa25,	// (0x00074476) grid_blid2_satellite_pane

0xaa35,	// (0x00074486) blid2_navig_pane_g1_ParamLimits

0xaa35,	// (0x00074486) blid2_navig_pane_g1

0xaa41,	// (0x00074492) blid2_navig_pane_t1_ParamLimits

0xaa41,	// (0x00074492) blid2_navig_pane_t1

0xaa53,	// (0x000744a4) blid2_navig_pane_t2_ParamLimits

0xaa53,	// (0x000744a4) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x0007942e) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x0007942e) blid2_navig_pane_t

0xaa65,	// (0x000744b6) blid2_navig_ring_pane_ParamLimits

0xaa65,	// (0x000744b6) blid2_navig_ring_pane

0xaa75,	// (0x000744c6) blid2_speed_pane_ParamLimits

0xaa75,	// (0x000744c6) blid2_speed_pane

0xaa81,	// (0x000744d2) blid2_tripm_pane_g1_ParamLimits

0xaa81,	// (0x000744d2) blid2_tripm_pane_g1

0xaa91,	// (0x000744e2) blid2_tripm_pane_g2_ParamLimits

0xaa91,	// (0x000744e2) blid2_tripm_pane_g2

0xaa9d,	// (0x000744ee) blid2_tripm_pane_g3_ParamLimits

0xaa9d,	// (0x000744ee) blid2_tripm_pane_g3

0xaaa9,	// (0x000744fa) blid2_tripm_pane_g4_ParamLimits

0xaaa9,	// (0x000744fa) blid2_tripm_pane_g4

0xaab5,	// (0x00074506) blid2_tripm_pane_g5_ParamLimits

0xaab5,	// (0x00074506) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x00079433) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x00079433) blid2_tripm_pane_g

0xaad1,	// (0x00074522) blid2_tripm_pane_t1_ParamLimits

0xaad1,	// (0x00074522) blid2_tripm_pane_t1

0xaae5,	// (0x00074536) blid2_tripm_pane_t2_ParamLimits

0xaae5,	// (0x00074536) blid2_tripm_pane_t2

0xaaf7,	// (0x00074548) blid2_tripm_pane_t3_ParamLimits

0xaaf7,	// (0x00074548) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x00079440) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x00079440) blid2_tripm_pane_t

0xab29,	// (0x0007457a) cell_blid2_satellite_pane_ParamLimits

0xab29,	// (0x0007457a) cell_blid2_satellite_pane

0xab43,	// (0x00074594) cell_blid2_satellite_pane_g1

0x0a99,	// (0x0006a4ea) cell_blid2_satellite_pane_t1

0x2f17,	// (0x0006c968) blid2_speed_pane_g1

0x0aa7,	// (0x0006a4f8) blid2_speed_pane_t1

0x0ab5,	// (0x0006a506) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x00079449) blid2_speed_pane_t

0x2f17,	// (0x0006c968) blid2_navig_ring_pane_g1

0xab4c,	// (0x0007459d) blid2_navig_ring_pane_g2

0xab54,	// (0x000745a5) blid2_navig_ring_pane_g3

0xab5c,	// (0x000745ad) blid2_navig_ring_pane_g4

0xab64,	// (0x000745b5) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x0007944e) blid2_navig_ring_pane_g

0x24ab,	// (0x0006befc) bg_popup_window_pane_cp011

0x0ac3,	// (0x0006a514) popup_blid2_search_window_g1

0x0acb,	// (0x0006a51c) popup_blid2_search_window_t1

0x0ad9,	// (0x0006a52a) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x00079459) popup_blid2_search_window_t

0x3295,	// (0x0006cce6) main_browser_pane_g1

0x2f75,	// (0x0006c9c6) main_browser_pane_ParamLimits

0x2761,	// (0x0006c1b2) bg_button_pane_cp011_ParamLimits

0x9c19,	// (0x0007366a) cell_vitu2_function_pane_g1_ParamLimits

0xd41d,	// (0x00076e6e) bg_popup_sub_pane_cp22_ParamLimits

0xa4a2,	// (0x00073ef3) input_focus_pane_cp08_ParamLimits

0xa4bd,	// (0x00073f0e) popup_vitu2_query_button_pane_ParamLimits

0xa4bd,	// (0x00073f0e) popup_vitu2_query_button_pane

0xa4cc,	// (0x00073f1d) popup_vitu2_query_input_button_pane

0x0622,	// (0x0006a073) popup_vitu2_query_window_g1_ParamLimits

0xa4d6,	// (0x00073f27) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0007935a) popup_vitu2_query_window_g_ParamLimits

0x24ab,	// (0x0006befc) bg_button_pane_cp026

0xab6c,	// (0x000745bd) popup_vitu2_query_input_button_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp025

0x0ae7,	// (0x0006a538) popup_vitu2_query_button_pane_t1

0x8355,	// (0x00071da6) main_mp3_pane_t6

0x8365,	// (0x00071db6) popup_slider_window_cp01

0x9798,	// (0x000731e9) cam4_battery_pane

0x9878,	// (0x000732c9) cam4_battery_pane_cp02

0xa8f7,	// (0x00074348) cam4_battery_pane_cp01

0xa8f7,	// (0x00074348) cam4_battery_pane_cp03

0x2f17,	// (0x0006c968) cam4_battery_pane_g1

0xe70f,	// (0x00078160) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x0007945e) cam4_battery_pane_g

0xe7dd,	// (0x0007822e) popup_blid_sat_info2_window_t11

0x39ca,	// (0x0006d41b) aid_size_touch_mv_arrow_left_ParamLimits

0x39f3,	// (0x0006d444) aid_size_touch_mv_arrow_right_ParamLimits

0x3a51,	// (0x0006d4a2) navi_pane_g1_ParamLimits

0x3a5d,	// (0x0006d4ae) navi_pane_g2_ParamLimits

0x3a8b,	// (0x0006d4dc) navi_pane_g3_ParamLimits

0xf311,	// (0x00078d62) navi_pane_g_ParamLimits

0x74cd,	// (0x00070f1e) navi_pane_mv_t1_ParamLimits

0x8e05,	// (0x00072856) grid_imed_effect_pane_ParamLimits

0x5fe8,	// (0x0006fa39) aid_placing_vt_slider_lsc

0x31e4,	// (0x0006cc35) aid_placing_vt_slider_prt

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp01_ParamLimits

0xea5d,	// (0x000784ae) popup_image_details_window_g1_ParamLimits

0xea70,	// (0x000784c1) popup_image_details_window_g2_ParamLimits

0xea85,	// (0x000784d6) popup_image_details_window_g3_ParamLimits

0xea85,	// (0x000784d6) popup_image_details_window_g3

0xf61a,	// (0x0007906b) popup_image_details_window_g_ParamLimits

0xea99,	// (0x000784ea) popup_image_details_window_t1_ParamLimits

0xeaab,	// (0x000784fc) popup_image_details_window_t2_ParamLimits

0xeac4,	// (0x00078515) popup_image_details_window_t3_ParamLimits

0xead8,	// (0x00078529) popup_image_details_window_t4_ParamLimits

0xeaf3,	// (0x00078544) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00079072) popup_image_details_window_t_ParamLimits

0xa81b,	// (0x0007426c) cl_header_name_pane_ParamLimits

0xa81b,	// (0x0007426c) cl_header_name_pane

0xab74,	// (0x000745c5) cl_header_name_pane_t1_ParamLimits

0xab74,	// (0x000745c5) cl_header_name_pane_t1

0xab8b,	// (0x000745dc) cl_header_name_pane_t2_ParamLimits

0xab8b,	// (0x000745dc) cl_header_name_pane_t2

0xabb5,	// (0x00074606) cl_header_name_pane_t3_ParamLimits

0xabb5,	// (0x00074606) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x00079463) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x00079463) cl_header_name_pane_t

0x3b1a,	// (0x0006d56b) navi_pane_mv_g2_ParamLimits

0x02a5,	// (0x00069cf6) field_vitu2_entry_pane_g1_ParamLimits

0x02b1,	// (0x00069d02) field_vitu2_entry_pane_g2_ParamLimits

0xe0c3,	// (0x00077b14) field_vitu2_entry_pane_g3_ParamLimits

0xe0c3,	// (0x00077b14) field_vitu2_entry_pane_g3

0xf812,	// (0x00079263) field_vitu2_entry_pane_g_ParamLimits

0x9adf,	// (0x00073530) cell_vitu2_itu_pane_g1_ParamLimits

0x9af7,	// (0x00073548) cell_vitu2_itu_pane_g2_ParamLimits

0x9af7,	// (0x00073548) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x0007926f) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x0007926f) cell_vitu2_itu_pane_g

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp05_ParamLimits

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp05

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp03

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp04

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp10_ParamLimits

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp10

0xa7bd,	// (0x0007420e) bg_vkb2_func_pane_cp08

0xa48a,	// (0x00073edb) bg_vkb2_func_pane_cp06

0xa7a0,	// (0x000741f1) bg_vkb2_func_pane_cp07

0x09ce,	// (0x0006a41f) bg_vkb2_func_pane_cp11_ParamLimits

0x09ce,	// (0x0006a41f) bg_vkb2_func_pane_cp11

0x09e3,	// (0x0006a434) bg_vkb2_func_pane_cp12_ParamLimits

0x09e3,	// (0x0006a434) bg_vkb2_func_pane_cp12

0x24ab,	// (0x0006befc) bg_vkb2_func_pane_cp09

0x02ec,	// (0x00069d3d) bg_vkb2_func_pane_g1

0x33a6,	// (0x0006cdf7) bg_vkb2_func_pane_g2

0x02f4,	// (0x00069d45) bg_vkb2_func_pane_g3

0x02fc,	// (0x00069d4d) bg_vkb2_func_pane_g4

0x05c7,	// (0x0006a018) bg_vkb2_func_pane_g5

0x0314,	// (0x00069d65) bg_vkb2_func_pane_g6

0x031c,	// (0x00069d6d) bg_vkb2_func_pane_g7

0x030c,	// (0x00069d5d) bg_vkb2_func_pane_g8

0x3386,	// (0x0006cdd7) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0007946a) bg_vkb2_func_pane_g

0xaac3,	// (0x00074514) blid2_tripm_pane_g6_ParamLimits

0xaac3,	// (0x00074514) blid2_tripm_pane_g6

0x009a,	// (0x00069aeb) mp4_progress_pane_g1

0xab1d,	// (0x0007456e) blid2_tripm_values_pane_ParamLimits

0xab1d,	// (0x0007456e) blid2_tripm_values_pane

0xabda,	// (0x0007462b) blid2_tripm_values_pane_t1

0xabe8,	// (0x00074639) blid2_tripm_values_pane_t2

0xabf6,	// (0x00074647) blid2_tripm_values_pane_t3

0xac04,	// (0x00074655) blid2_tripm_values_pane_t4

0xac12,	// (0x00074663) blid2_tripm_values_pane_t5

0xac20,	// (0x00074671) blid2_tripm_values_pane_t6

0xac2e,	// (0x0007467f) blid2_tripm_values_pane_t7

0xac3c,	// (0x0007468d) blid2_tripm_values_pane_t8

0xac4a,	// (0x0007469b) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0007947d) blid2_tripm_values_pane_t

0x6028,	// (0x0006fa79) call_video_pane_t1_ParamLimits

0x6049,	// (0x0006fa9a) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00078c0b) call_video_pane_t_ParamLimits

0x4a5d,	// (0x0006e4ae) msg_header_pane_g1_ParamLimits

0xd3df,	// (0x00076e30) msg_header_pane_g2_ParamLimits

0xd3df,	// (0x00076e30) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00078e00) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00078e00) msg_header_pane_g

0x2f75,	// (0x0006c9c6) main_clock2_pane_ParamLimits

0x8b7f,	// (0x000725d0) grid_clock2_toolbar_pane_ParamLimits

0x8b7f,	// (0x000725d0) grid_clock2_toolbar_pane

0x8b7f,	// (0x000725d0) listscroll_clock2_pane_ParamLimits

0x8b7f,	// (0x000725d0) listscroll_clock2_pane

0x8c2f,	// (0x00072680) main_clock2_pane_t3_ParamLimits

0x8c2f,	// (0x00072680) main_clock2_pane_t3

0x8c41,	// (0x00072692) main_clock2_pane_t4_ParamLimits

0x8c41,	// (0x00072692) main_clock2_pane_t4

0x0af5,	// (0x0006a546) cell_clock2_toolbar_pane

0x0afd,	// (0x0006a54e) cell_clock2_toolbar_pane_cp01

0x0afd,	// (0x0006a54e) cell_clock2_toolbar_pane_cp02

0x0b05,	// (0x0006a556) cell_clock2_toolbar_pane_cp03

0x0b0d,	// (0x0006a55e) list_clock2_pane

0x3940,	// (0x0006d391) scroll_pane_cp10

0x0b15,	// (0x0006a566) list_single_clock2_pane_ParamLimits

0x0b15,	// (0x0006a566) list_single_clock2_pane

0x318d,	// (0x0006cbde) list_highlight_pane_cp08

0x0b22,	// (0x0006a573) list_single_clock2_pane_t1

0x0b30,	// (0x0006a581) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x00079490) list_single_clock2_pane_t

0x24ab,	// (0x0006befc) bg_button_pane_cp10

0x0b3e,	// (0x0006a58f) cell_clock2_toolbar_pane_g1

0x777b,	// (0x000711cc) aid_main_viewer_pane_g1_ParamLimits

0x777b,	// (0x000711cc) aid_main_viewer_pane_g1

0x7787,	// (0x000711d8) aid_main_viewer_pane_g2_ParamLimits

0x7787,	// (0x000711d8) aid_main_viewer_pane_g2

0x7793,	// (0x000711e4) aid_main_viewer_pane_g3_ParamLimits

0x7793,	// (0x000711e4) aid_main_viewer_pane_g3

0x77a4,	// (0x000711f5) aid_main_viewer_pane_g4_ParamLimits

0x77a4,	// (0x000711f5) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00078e11) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00078e11) aid_main_viewer_pane_g

0x7ec7,	// (0x00071918) main_calc_pane_ParamLimits

0x7ed4,	// (0x00071925) main_dialer2_pane_ParamLimits

0x24ab,	// (0x0006befc) main_cam6_pane

0x24ab,	// (0x0006befc) main_vid6_pane

0x8b8b,	// (0x000725dc) listscroll_gen_pane_cp06_ParamLimits

0x8b8b,	// (0x000725dc) listscroll_gen_pane_cp06

0x8c53,	// (0x000726a4) main_clock2_pane_t5_ParamLimits

0x8c53,	// (0x000726a4) main_clock2_pane_t5

0x8ca0,	// (0x000726f1) aid_call2_pane_cp10_ParamLimits

0x8cb2,	// (0x00072703) aid_call_pane_cp10_ParamLimits

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g1_ParamLimits

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8cc4,	// (0x00072715) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8cc4,	// (0x00072715) popup_clock_analogue_window_cp10_g4_ParamLimits

0x39be,	// (0x0006d40f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x00079127) popup_clock_analogue_window_cp10_g_ParamLimits

0x8cda,	// (0x0007272b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0105,	// (0x00069b56) cell_dialer2_keypad_pane_g2_ParamLimits

0x0105,	// (0x00069b56) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00079202) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00079202) cell_dialer2_keypad_pane_g

0x2f21,	// (0x0006c972) cell_dialer2_keypad_pane_t1

0x9ed7,	// (0x00073928) main_cset_text2_pane_ParamLimits

0x9ed7,	// (0x00073928) main_cset_text2_pane

0x080e,	// (0x0006a25f) area_vitu2_query_pane_g1_ParamLimits

0xa73f,	// (0x00074190) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x000793ad) area_vitu2_query_pane_g_ParamLimits

0x0892,	// (0x0006a2e3) area_vitu2_query_pane_t7_ParamLimits

0x0892,	// (0x0006a2e3) area_vitu2_query_pane_t7

0xa48a,	// (0x00073edb) bg_button_pane_cp018_ParamLimits

0xa7a0,	// (0x000741f1) bg_button_pane_cp021_ParamLimits

0xa7ac,	// (0x000741fd) bg_button_pane_cp022_ParamLimits

0xa7bd,	// (0x0007420e) bg_vkb2_func_pane_cp08_ParamLimits

0xa48a,	// (0x00073edb) bg_vkb2_func_pane_cp06_ParamLimits

0xa7a0,	// (0x000741f1) bg_vkb2_func_pane_cp07_ParamLimits

0xa7cf,	// (0x00074220) input_focus_pane_cp09_ParamLimits

0xac58,	// (0x000746a9) cam6_autofocus_pane_ParamLimits

0xac58,	// (0x000746a9) cam6_autofocus_pane

0xac74,	// (0x000746c5) cam6_image_uncrop_pane_ParamLimits

0xac74,	// (0x000746c5) cam6_image_uncrop_pane

0xacad,	// (0x000746fe) cam6_indi_pane_ParamLimits

0xacad,	// (0x000746fe) cam6_indi_pane

0xacc7,	// (0x00074718) cam6_mode_pane_ParamLimits

0xacc7,	// (0x00074718) cam6_mode_pane

0xacdb,	// (0x0007472c) cam6_timer_pane_ParamLimits

0xacdb,	// (0x0007472c) cam6_timer_pane

0xacef,	// (0x00074740) cam6_zoom_pane_ParamLimits

0xacef,	// (0x00074740) cam6_zoom_pane

0xad0a,	// (0x0007475b) cam6_mode_pane_g1_ParamLimits

0xad0a,	// (0x0007475b) cam6_mode_pane_g1

0xad16,	// (0x00074767) cam6_mode_pane_g2_ParamLimits

0xad16,	// (0x00074767) cam6_mode_pane_g2

0xad22,	// (0x00074773) cam6_mode_pane_g3_ParamLimits

0xad22,	// (0x00074773) cam6_mode_pane_g3

0xad2e,	// (0x0007477f) cam6_mode_pane_g4_ParamLimits

0xad2e,	// (0x0007477f) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x00079495) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x00079495) cam6_mode_pane_g

0x0b54,	// (0x0006a5a5) bg_tb_trans_pane_cp08_ParamLimits

0x0b54,	// (0x0006a5a5) bg_tb_trans_pane_cp08

0x0b62,	// (0x0006a5b3) cam6_battery_pane_ParamLimits

0x0b62,	// (0x0006a5b3) cam6_battery_pane

0x0b78,	// (0x0006a5c9) cam6_indi_pane_g1_ParamLimits

0x0b78,	// (0x0006a5c9) cam6_indi_pane_g1

0x0b8a,	// (0x0006a5db) cam6_indi_pane_g2_ParamLimits

0x0b8a,	// (0x0006a5db) cam6_indi_pane_g2

0x0b9c,	// (0x0006a5ed) cam6_indi_pane_g3_ParamLimits

0x0b9c,	// (0x0006a5ed) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0007949e) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0007949e) cam6_indi_pane_g

0x0bae,	// (0x0006a5ff) cam6_indi_pane_t1_ParamLimits

0x0bae,	// (0x0006a5ff) cam6_indi_pane_t1

0x98f0,	// (0x00073341) cam6_autofocus_pane_g1

0x98f8,	// (0x00073349) cam6_autofocus_pane_g2

0x9900,	// (0x00073351) cam6_autofocus_pane_g3

0x9908,	// (0x00073359) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x000794a5) cam6_autofocus_pane_g

0x0bd4,	// (0x0006a625) cam6_timer_pane_g1

0x0bdc,	// (0x0006a62d) cam6_timer_pane_t1

0x0bea,	// (0x0006a63b) cam6_zoom_cont_pane

0x0bf2,	// (0x0006a643) cam6_zoom_pane_g1

0x0bfb,	// (0x0006a64c) cam6_zoom_pane_g2

0xad3a,	// (0x0007478b) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x000794ae) cam6_zoom_pane_g

0x2f17,	// (0x0006c968) cam6_battery_pane_g1

0x2f17,	// (0x0006c968) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00078add) cam6_battery_pane_g

0x0bf2,	// (0x0006a643) cam6_zoom_cont_pane_g1

0x0bfb,	// (0x0006a64c) cam6_zoom_cont_pane_g2

0x0c04,	// (0x0006a655) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x000794b5) cam6_zoom_cont_pane_g

0xad58,	// (0x000747a9) cam6_mode_pane_cp_ParamLimits

0xad58,	// (0x000747a9) cam6_mode_pane_cp

0xad6c,	// (0x000747bd) cam6_zoom_pane_cp_ParamLimits

0xad6c,	// (0x000747bd) cam6_zoom_pane_cp

0xad84,	// (0x000747d5) vid6_image_uncrop_cif_pane_ParamLimits

0xad84,	// (0x000747d5) vid6_image_uncrop_cif_pane

0xadb0,	// (0x00074801) vid6_image_uncrop_nhd_pane_ParamLimits

0xadb0,	// (0x00074801) vid6_image_uncrop_nhd_pane

0xadcd,	// (0x0007481e) vid6_image_uncrop_vga_pane_ParamLimits

0xadcd,	// (0x0007481e) vid6_image_uncrop_vga_pane

0xadec,	// (0x0007483d) vid6_image_uncrop_wvga_pane_ParamLimits

0xadec,	// (0x0007483d) vid6_image_uncrop_wvga_pane

0xae09,	// (0x0007485a) vid6_indi_pane_ParamLimits

0xae09,	// (0x0007485a) vid6_indi_pane

0x0b54,	// (0x0006a5a5) bg_tb_trans_pane_cp09_ParamLimits

0x0b54,	// (0x0006a5a5) bg_tb_trans_pane_cp09

0x0c1c,	// (0x0006a66d) cam6_battery_pane_cp_ParamLimits

0x0c1c,	// (0x0006a66d) cam6_battery_pane_cp

0x0c28,	// (0x0006a679) vid6_indi_pane_g1_ParamLimits

0x0c28,	// (0x0006a679) vid6_indi_pane_g1

0x0c3a,	// (0x0006a68b) vid6_indi_pane_g2_ParamLimits

0x0c3a,	// (0x0006a68b) vid6_indi_pane_g2

0x0c4c,	// (0x0006a69d) vid6_indi_pane_g3_ParamLimits

0x0c4c,	// (0x0006a69d) vid6_indi_pane_g3

0x0c61,	// (0x0006a6b2) vid6_indi_pane_g4_ParamLimits

0x0c61,	// (0x0006a6b2) vid6_indi_pane_g4

0x0c76,	// (0x0006a6c7) vid6_indi_pane_g5_ParamLimits

0x0c76,	// (0x0006a6c7) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x000794bc) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x000794bc) vid6_indi_pane_g

0x0c90,	// (0x0006a6e1) vid6_indi_pane_t1_ParamLimits

0x0c90,	// (0x0006a6e1) vid6_indi_pane_t1

0x0ca6,	// (0x0006a6f7) vid6_indi_pane_t2_ParamLimits

0x0ca6,	// (0x0006a6f7) vid6_indi_pane_t2

0x0cce,	// (0x0006a71f) vid6_indi_pane_t3_ParamLimits

0x0cce,	// (0x0006a71f) vid6_indi_pane_t3

0x0cf6,	// (0x0006a747) vid6_indi_pane_t4_ParamLimits

0x0cf6,	// (0x0006a747) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x000794c7) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x000794c7) vid6_indi_pane_t

0x0d1a,	// (0x0006a76b) wait_bar_pane_cp08

0xae2e,	// (0x0007487f) main_cset_text2_pane_t1_ParamLimits

0xae2e,	// (0x0007487f) main_cset_text2_pane_t1

0xad43,	// (0x00074794) listscroll_gen_pane_cp06_t1_ParamLimits

0xad43,	// (0x00074794) listscroll_gen_pane_cp06_t1

0x24ab,	// (0x0006befc) main_cam6_set_pane

0x2ed9,	// (0x0006c92a) bg_tb_trans_pane_cp06_ParamLimits

0x97a0,	// (0x000731f1) cam4_indicators_pane_g1_ParamLimits

0x97b1,	// (0x00073202) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x0007923f) cam4_indicators_pane_g_ParamLimits

0x97cf,	// (0x00073220) cam4_indicators_pane_t1_ParamLimits

0x2761,	// (0x0006c1b2) bg_tb_trans_pane_cp07_ParamLimits

0x9882,	// (0x000732d3) vid4_indicators_pane_g1_ParamLimits

0x9896,	// (0x000732e7) vid4_indicators_pane_g2_ParamLimits

0x98aa,	// (0x000732fb) vid4_indicators_pane_g3_ParamLimits

0x98bb,	// (0x0007330c) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x00079251) vid4_indicators_pane_g_ParamLimits

0x98d9,	// (0x0007332a) vid4_indicators_pane_t1_ParamLimits

0xa8ff,	// (0x00074350) vid4_progress_pane_g1_ParamLimits

0xa90f,	// (0x00074360) vid4_progress_pane_g2_ParamLimits

0xa91f,	// (0x00074370) vid4_progress_pane_g3_ParamLimits

0xa931,	// (0x00074382) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x000793f8) vid4_progress_pane_g_ParamLimits

0xa949,	// (0x0007439a) vid4_progress_pane_t1_ParamLimits

0xa95f,	// (0x000743b0) vid4_progress_pane_t2_ParamLimits

0xa974,	// (0x000743c5) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x00079403) vid4_progress_pane_t_ParamLimits

0xa989,	// (0x000743da) wait_bar_pane_cp07_ParamLimits

0xae61,	// (0x000748b2) main_cam6_set_pane_g2_ParamLimits

0xae61,	// (0x000748b2) main_cam6_set_pane_g2

0xae6d,	// (0x000748be) main_cset6_listscroll_pane_ParamLimits

0xae6d,	// (0x000748be) main_cset6_listscroll_pane

0xae98,	// (0x000748e9) main_cset6_slider_pane_ParamLimits

0xae98,	// (0x000748e9) main_cset6_slider_pane

0xaea4,	// (0x000748f5) main_cset6_text2_pane_ParamLimits

0xaea4,	// (0x000748f5) main_cset6_text2_pane

0x0d29,	// (0x0006a77a) main_cset6_text_pane

0x0d31,	// (0x0006a782) main_cset_list_pane_copy1_ParamLimits

0x0d31,	// (0x0006a782) main_cset_list_pane_copy1

0x0d41,	// (0x0006a792) scroll_pane_cp028_copy1

0xaeb7,	// (0x00074908) cset_list_set_pane_copy1

0xaeca,	// (0x0007491b) aid_position_infowindow_above_copy1

0xaed2,	// (0x00074923) aid_position_infowindow_below_copy1

0xaeda,	// (0x0007492b) cset_list_set_pane_g1_copy1

0x4b26,	// (0x0006e577) cset_list_set_pane_g3_copy1_ParamLimits

0x4b26,	// (0x0006e577) cset_list_set_pane_g3_copy1

0x4b35,	// (0x0006e586) cset_list_set_pane_t1_copy1_ParamLimits

0x4b35,	// (0x0006e586) cset_list_set_pane_t1_copy1

0x2761,	// (0x0006c1b2) list_highlight_pane_cp021_copy1_ParamLimits

0x2761,	// (0x0006c1b2) list_highlight_pane_cp021_copy1

0x0d4a,	// (0x0006a79b) cset6_slider_pane_ParamLimits

0x0d4a,	// (0x0006a79b) cset6_slider_pane

0x0d76,	// (0x0006a7c7) main_cset6_slider_pane_g1_ParamLimits

0x0d76,	// (0x0006a7c7) main_cset6_slider_pane_g1

0xaee2,	// (0x00074933) main_cset6_slider_pane_g2_ParamLimits

0xaee2,	// (0x00074933) main_cset6_slider_pane_g2

0x0d9e,	// (0x0006a7ef) main_cset6_slider_pane_g3_ParamLimits

0x0d9e,	// (0x0006a7ef) main_cset6_slider_pane_g3

0xaf0a,	// (0x0007495b) main_cset6_slider_pane_g4_ParamLimits

0xaf0a,	// (0x0007495b) main_cset6_slider_pane_g4

0xaf16,	// (0x00074967) main_cset6_slider_pane_g5_ParamLimits

0xaf16,	// (0x00074967) main_cset6_slider_pane_g5

0x0441,	// (0x00069e92) main_cset6_slider_pane_g7_ParamLimits

0x0441,	// (0x00069e92) main_cset6_slider_pane_g7

0x044d,	// (0x00069e9e) main_cset6_slider_pane_g8_ParamLimits

0x044d,	// (0x00069e9e) main_cset6_slider_pane_g8

0xaf24,	// (0x00074975) main_cset6_slider_pane_g9_ParamLimits

0xaf24,	// (0x00074975) main_cset6_slider_pane_g9

0xaf30,	// (0x00074981) main_cset6_slider_pane_g10_ParamLimits

0xaf30,	// (0x00074981) main_cset6_slider_pane_g10

0xaf3c,	// (0x0007498d) main_cset6_slider_pane_g11_ParamLimits

0xaf3c,	// (0x0007498d) main_cset6_slider_pane_g11

0xaf48,	// (0x00074999) main_cset6_slider_pane_g12_ParamLimits

0xaf48,	// (0x00074999) main_cset6_slider_pane_g12

0xaf54,	// (0x000749a5) main_cset6_slider_pane_g13_ParamLimits

0xaf54,	// (0x000749a5) main_cset6_slider_pane_g13

0xaf60,	// (0x000749b1) main_cset6_slider_pane_g14_ParamLimits

0xaf60,	// (0x000749b1) main_cset6_slider_pane_g14

0xaf6c,	// (0x000749bd) main_cset6_slider_pane_g15_ParamLimits

0xaf6c,	// (0x000749bd) main_cset6_slider_pane_g15

0xaf84,	// (0x000749d5) main_cset6_slider_pane_g16_ParamLimits

0xaf84,	// (0x000749d5) main_cset6_slider_pane_g16

0xaf92,	// (0x000749e3) main_cset6_slider_pane_g17_ParamLimits

0xaf92,	// (0x000749e3) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x000794d0) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x000794d0) main_cset6_slider_pane_g

0x0daa,	// (0x0006a7fb) main_cset6_slider_pane_t1_ParamLimits

0x0daa,	// (0x0006a7fb) main_cset6_slider_pane_t1

0xafb8,	// (0x00074a09) main_cset6_slider_pane_t2_ParamLimits

0xafb8,	// (0x00074a09) main_cset6_slider_pane_t2

0xafe3,	// (0x00074a34) main_cset6_slider_pane_t3_ParamLimits

0xafe3,	// (0x00074a34) main_cset6_slider_pane_t3

0xb00e,	// (0x00074a5f) main_cset6_slider_pane_t4_ParamLimits

0xb00e,	// (0x00074a5f) main_cset6_slider_pane_t4

0xb039,	// (0x00074a8a) main_cset6_slider_pane_t5_ParamLimits

0xb039,	// (0x00074a8a) main_cset6_slider_pane_t5

0x0deb,	// (0x0006a83c) main_cset6_slider_pane_t7_ParamLimits

0x0deb,	// (0x0006a83c) main_cset6_slider_pane_t7

0xb066,	// (0x00074ab7) main_cset6_slider_pane_t8_ParamLimits

0xb066,	// (0x00074ab7) main_cset6_slider_pane_t8

0xb08a,	// (0x00074adb) main_cset6_slider_pane_t9_ParamLimits

0xb08a,	// (0x00074adb) main_cset6_slider_pane_t9

0xb0ae,	// (0x00074aff) main_cset6_slider_pane_t10_ParamLimits

0xb0ae,	// (0x00074aff) main_cset6_slider_pane_t10

0xb0d2,	// (0x00074b23) main_cset6_slider_pane_t11_ParamLimits

0xb0d2,	// (0x00074b23) main_cset6_slider_pane_t11

0x0e21,	// (0x0006a872) main_cset6_slider_pane_t14_ParamLimits

0x0e21,	// (0x0006a872) main_cset6_slider_pane_t14

0x0e5a,	// (0x0006a8ab) main_cset6_slider_pane_t15_ParamLimits

0x0e5a,	// (0x0006a8ab) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x000794f5) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x000794f5) main_cset6_slider_pane_t

0x0e93,	// (0x0006a8e4) cset_slider_pane_g1_copy1

0x0e9c,	// (0x0006a8ed) cset_slider_pane_g2_copy1

0x0ea5,	// (0x0006a8f6) cset_slider_pane_g3_copy1

0x24ab,	// (0x0006befc) bg_popup_sub_pane_cp011_copy1

0x0eae,	// (0x0006a8ff) main_cset_text_pane_g1_copy1

0x0636,	// (0x0006a087) main_cset_text_pane_t1_copy1

0x0644,	// (0x0006a095) main_cset_text_pane_t2_copy1

0x0652,	// (0x0006a0a3) main_cset_text_pane_t3_copy1

0x0660,	// (0x0006a0b1) main_cset_text_pane_t4_copy1

0x066e,	// (0x0006a0bf) main_cset_text_pane_t5_copy1

0x0eb6,	// (0x0006a907) main_cset_text_pane_t6_copy1

0x0ec4,	// (0x0006a915) main_cset_text_pane_t7_copy1

0xb0f6,	// (0x00074b47) main_cset_text2_pane_t1_copy1

0x2761,	// (0x0006c1b2) main_ncimui_pane

0x7f25,	// (0x00071976) popup_query_ncimui_window_ParamLimits

0x7f25,	// (0x00071976) popup_query_ncimui_window

0x84be,	// (0x00071f0f) field_cale_ev2_pane_g4_ParamLimits

0x84be,	// (0x00071f0f) field_cale_ev2_pane_g4

0x9087,	// (0x00072ad8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9087,	// (0x00072ad8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x000791d9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x000791d9) cell_video_dialer_keypad_pane_g

0x909f,	// (0x00072af0) cell_video_dialer_keypad_pane_t1

0x24ab,	// (0x0006befc) bg_popup_window_pane_cp012

0x381a,	// (0x0006d26b) heading_pane_cp06

0x0ef0,	// (0x0006a941) ncim_query_content_pane

0x24ab,	// (0x0006befc) bg_popup_heading_pane_cp01

0x0ef8,	// (0x0006a949) ncim_heading_pane_t1

0x0f06,	// (0x0006a957) ncim_indicator_popup_pane

0x0f18,	// (0x0006a969) ncim_query_button_pane

0x0f2c,	// (0x0006a97d) ncim_query_content_pane_t1

0x0f3e,	// (0x0006a98f) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x00079539) ncim_query_content_pane_t

0x0f78,	// (0x0006a9c9) ncim_query_list_pane

0x0f8a,	// (0x0006a9db) ncim_query_popup_pane

0x0f06,	// (0x0006a957) ncim_indicator_popup_pane_ParamLimits

0xb249,	// (0x00074c9a) ncim_query_content_pane_g1_ParamLimits

0xb249,	// (0x00074c9a) ncim_query_content_pane_g1

0x0f2c,	// (0x0006a97d) ncim_query_content_pane_t1_ParamLimits

0x0f3e,	// (0x0006a98f) ncim_query_content_pane_t2_ParamLimits

0xb255,	// (0x00074ca6) ncim_query_content_pane_t3_ParamLimits

0xb255,	// (0x00074ca6) ncim_query_content_pane_t3

0xb272,	// (0x00074cc3) ncim_query_content_pane_t4_ParamLimits

0xb272,	// (0x00074cc3) ncim_query_content_pane_t4

0xb28f,	// (0x00074ce0) ncim_query_content_pane_t5_ParamLimits

0xb28f,	// (0x00074ce0) ncim_query_content_pane_t5

0x0f50,	// (0x0006a9a1) ncim_query_content_pane_t6_ParamLimits

0x0f50,	// (0x0006a9a1) ncim_query_content_pane_t6

0xfae8,	// (0x00079539) ncim_query_content_pane_t_ParamLimits

0x0f78,	// (0x0006a9c9) ncim_query_list_pane_ParamLimits

0x0f8a,	// (0x0006a9db) ncim_query_popup_pane_ParamLimits

0x0f9e,	// (0x0006a9ef) wait_bar_pane_cp04

0x24ab,	// (0x0006befc) input_focus_pane_cp011

0x0fa6,	// (0x0006a9f7) ncim_query_popup_pane_t1

0x0fb4,	// (0x0006aa05) ncim_list_query_list_pane_ParamLimits

0x0fb4,	// (0x0006aa05) ncim_list_query_list_pane

0x24ab,	// (0x0006befc) bg_button_pane_cp027

0x0fc1,	// (0x0006aa12) ncim_query_button_pane_g1

0x24ab,	// (0x0006befc) list_highlight_pane_cp012

0x0fcb,	// (0x0006aa1c) ncim_list_query_list_pane_g1

0x0fd3,	// (0x0006aa24) ncim_list_query_list_pane_t1

0x97c0,	// (0x00073211) cam4_indicators_pane_g3_ParamLimits

0x97c0,	// (0x00073211) cam4_indicators_pane_g3

0x98c7,	// (0x00073318) vid4_indicators_pane_g5_ParamLimits

0x98c7,	// (0x00073318) vid4_indicators_pane_g5

0xa93d,	// (0x0007438e) vid4_progress_pane_g5_ParamLimits

0xa93d,	// (0x0007438e) vid4_progress_pane_g5

0xb135,	// (0x00074b86) main_ncimui_pane_g1

0xb19d,	// (0x00074bee) ncimui_group_query_pane_ParamLimits

0xb19d,	// (0x00074bee) ncimui_group_query_pane

0xb1e5,	// (0x00074c36) ncimui_list_pane_ParamLimits

0xb1e5,	// (0x00074c36) ncimui_list_pane

0xb20c,	// (0x00074c5d) ncimui_text_pane_ParamLimits

0xb20c,	// (0x00074c5d) ncimui_text_pane

0xb2ac,	// (0x00074cfd) ncimui_text_pane_t1_ParamLimits

0xb2ac,	// (0x00074cfd) ncimui_text_pane_t1

0x0fe1,	// (0x0006aa32) ncimui_list_single_graphic_pane_ParamLimits

0x0fe1,	// (0x0006aa32) ncimui_list_single_graphic_pane

0xb2cb,	// (0x00074d1c) ncimui_query_pane_ParamLimits

0xb2cb,	// (0x00074d1c) ncimui_query_pane

0x24ab,	// (0x0006befc) list_highlight_pane_cp013

0x0ff1,	// (0x0006aa42) ncim_list_query_list_pane_t1_copy1

0x0fcb,	// (0x0006aa1c) ncim_list_single_graphic_pane_g1

0xb2de,	// (0x00074d2f) ncim_query_button_pane_cp01

0xb2ea,	// (0x00074d3b) ncim_query_entry_pane_ParamLimits

0xb2ea,	// (0x00074d3b) ncim_query_entry_pane

0xb2fd,	// (0x00074d4e) ncimui_query_pane_g1

0xb309,	// (0x00074d5a) ncimui_query_pane_t1_ParamLimits

0xb309,	// (0x00074d5a) ncimui_query_pane_t1

0x2761,	// (0x0006c1b2) input_focus_pane_cp012

0x0fff,	// (0x0006aa50) ncim_query_entry_pane_t1

0x2f75,	// (0x0006c9c6) main_im_pane_ParamLimits

0x2761,	// (0x0006c1b2) main_mobtv_pane_ParamLimits

0x2761,	// (0x0006c1b2) main_mobtv_pane

0xafa0,	// (0x000749f1) main_cset6_slider_pane_g18_ParamLimits

0xafa0,	// (0x000749f1) main_cset6_slider_pane_g18

0xafac,	// (0x000749fd) main_cset6_slider_pane_g19_ParamLimits

0xafac,	// (0x000749fd) main_cset6_slider_pane_g19

0xe0c3,	// (0x00077b14) bg_main_mobtv_pane_ParamLimits

0xe0c3,	// (0x00077b14) bg_main_mobtv_pane

0xb322,	// (0x00074d73) main_mobtv_info_pane

0xb32d,	// (0x00074d7e) main_mobtv_loading_pane_ParamLimits

0xb32d,	// (0x00074d7e) main_mobtv_loading_pane

0x1011,	// (0x0006aa62) main_mobtv_pg_channel_list_pane

0x101b,	// (0x0006aa6c) main_mobtv_pg_hdr_pane

0xb33a,	// (0x00074d8b) main_mobtv_programe_curr_pane_ParamLimits

0xb33a,	// (0x00074d8b) main_mobtv_programe_curr_pane

0xb347,	// (0x00074d98) main_mobtv_programe_next_pane_ParamLimits

0xb347,	// (0x00074d98) main_mobtv_programe_next_pane

0x1024,	// (0x0006aa75) popup_mobtv_noti_window

0x2f17,	// (0x0006c968) main_tv_pg_hdr_pane_g1

0x102c,	// (0x0006aa7d) main_tv_pg_hdr_pane_g2

0x1034,	// (0x0006aa85) main_tv_pg_hdr_pane_g3

0x103c,	// (0x0006aa8d) main_tv_pg_hdr_pane_g4

0x1044,	// (0x0006aa95) main_tv_pg_hdr_pane_g5

0x104e,	// (0x0006aa9f) main_tv_pg_hdr_pane_g6

0x1058,	// (0x0006aaa9) main_tv_pg_hdr_pane_g7

0x1062,	// (0x0006aab3) main_tv_pg_hdr_pane_g8

0x106c,	// (0x0006aabd) main_tv_pg_hdr_pane_g9

0x1076,	// (0x0006aac7) main_tv_pg_hdr_pane_g10

0x1080,	// (0x0006aad1) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x00079546) main_tv_pg_hdr_pane_g

0x108a,	// (0x0006aadb) main_tv_pg_hdr_pane_t1

0x1098,	// (0x0006aae9) main_tv_pg_hdr_pane_t2

0x10a6,	// (0x0006aaf7) main_tv_pg_hdr_pane_t3

0x10b6,	// (0x0006ab07) main_tv_pg_hdr_pane_t4

0x10c6,	// (0x0006ab17) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x0007955d) main_tv_pg_hdr_pane_t

0x10d6,	// (0x0006ab27) single_mobtv_pg_channel_pane_ParamLimits

0x10d6,	// (0x0006ab27) single_mobtv_pg_channel_pane

0x10e8,	// (0x0006ab39) single_mobtv_pg_channel_table_pane

0x10f1,	// (0x0006ab42) single_mobtv_pg_channel_thumb_pane

0x10fa,	// (0x0006ab4b) single_tv_pg_channel_pane_g1

0x1103,	// (0x0006ab54) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x00079568) single_tv_pg_channel_pane_g

0x2ed9,	// (0x0006c92a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2ed9,	// (0x0006c92a) bg_single_mobtv_pg_channel_thumb_pane

0x110c,	// (0x0006ab5d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x110c,	// (0x0006ab5d) single_mobtv_pg_channel_thumb_pane_g1

0x111a,	// (0x0006ab6b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x111a,	// (0x0006ab6b) single_mobtv_pg_channel_thumb_pane_g2

0x1126,	// (0x0006ab77) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1126,	// (0x0006ab77) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x0007956d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x0007956d) single_mobtv_pg_channel_thumb_pane_g

0x1132,	// (0x0006ab83) single_mobtv_pg_channel_thumb_pane_t1

0x1140,	// (0x0006ab91) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x00079574) single_mobtv_pg_channel_thumb_pane_t

0x2f17,	// (0x0006c968) bg_single_mobtv_pg_channel_table_pane_g1

0x2f17,	// (0x0006c968) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00078add) bg_single_mobtv_pg_channel_table_pane_g

0x114e,	// (0x0006ab9f) single_mobtv_pg_channel_table_pane_t1

0x115c,	// (0x0006abad) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x00079579) single_mobtv_pg_channel_table_pane_t

0xb35c,	// (0x00074dad) main_mobtv_info_pane_g1_ParamLimits

0xb35c,	// (0x00074dad) main_mobtv_info_pane_g1

0xb378,	// (0x00074dc9) main_mobtv_info_pane_t1_ParamLimits

0xb378,	// (0x00074dc9) main_mobtv_info_pane_t1

0xb3f0,	// (0x00074e41) main_mobtv_info_pane_t2_ParamLimits

0xb3f0,	// (0x00074e41) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x00079583) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x00079583) main_mobtv_info_pane_t

0xb47f,	// (0x00074ed0) wait_bar_pane_cp05

0xb491,	// (0x00074ee2) main_mobtv_loading_pane_g1_ParamLimits

0xb491,	// (0x00074ee2) main_mobtv_loading_pane_g1

0xb49f,	// (0x00074ef0) main_mobtv_loading_pane_g2_ParamLimits

0xb49f,	// (0x00074ef0) main_mobtv_loading_pane_g2

0xb4ab,	// (0x00074efc) main_mobtv_loading_pane_g3_ParamLimits

0xb4ab,	// (0x00074efc) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0007958a) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0007958a) main_mobtv_loading_pane_g

0x116a,	// (0x0006abbb) main_mobtv_loading_pane_t1_ParamLimits

0x116a,	// (0x0006abbb) main_mobtv_loading_pane_t1

0x1182,	// (0x0006abd3) main_mobtv_loading_pane_t2_ParamLimits

0x1182,	// (0x0006abd3) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x00079591) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x00079591) main_mobtv_loading_pane_t

0xb4b9,	// (0x00074f0a) wait_bar_pane_cp06_ParamLimits

0xb4b9,	// (0x00074f0a) wait_bar_pane_cp06

0x11a6,	// (0x0006abf7) main_mobtv_programe_curr_pane_t1

0x11b4,	// (0x0006ac05) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x00079596) main_mobtv_programe_curr_pane_t

0x11c2,	// (0x0006ac13) main_mobtv_programe_next_pane_t1

0x11d0,	// (0x0006ac21) main_mobtv_programe_next_pane_t2

0x11de,	// (0x0006ac2f) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0007959b) main_mobtv_programe_next_pane_t

0x24ab,	// (0x0006befc) bg_popup_mobtv_noti_window_pane

0x11ec,	// (0x0006ac3d) popup_mobtv_noti_window_g1

0x11f4,	// (0x0006ac45) popup_mobtv_noti_window_t1

0x1202,	// (0x0006ac53) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x000795a2) popup_mobtv_noti_window_t

0x2f17,	// (0x0006c968) bg_popup_mobtv_noti_window_pane_g1

0x24ab,	// (0x0006befc) sc_clock_pane

0x24ab,	// (0x0006befc) main_fs_bigclock_pane

0xab0b,	// (0x0007455c) blid2_tripm_pane_t4_ParamLimits

0xab0b,	// (0x0007455c) blid2_tripm_pane_t4

0x2ee7,	// (0x0006c938) sc_clock_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) sc_clock_pane_g1

0x2f35,	// (0x0006c986) sc_clock_pane_t1_ParamLimits

0x2f35,	// (0x0006c986) sc_clock_pane_t1

0x2f35,	// (0x0006c986) sc_clock_pane_t2_ParamLimits

0x2f35,	// (0x0006c986) sc_clock_pane_t2

0x2f35,	// (0x0006c986) sc_clock_pane_t3_ParamLimits

0x2f35,	// (0x0006c986) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x000795a7) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x000795a7) sc_clock_pane_t

0xbc07,	// (0x00075658) main_fs_bigclock_indicator_pane_ParamLimits

0xbc07,	// (0x00075658) main_fs_bigclock_indicator_pane

0xb500,	// (0x00074f51) main_fs_bigclock_pane_g1_ParamLimits

0xb500,	// (0x00074f51) main_fs_bigclock_pane_g1

0xbc13,	// (0x00075664) main_fs_bigclock_pane_t1_ParamLimits

0xbc13,	// (0x00075664) main_fs_bigclock_pane_t1

0xbc25,	// (0x00075676) main_fs_bigclock_pane_t2_ParamLimits

0xbc25,	// (0x00075676) main_fs_bigclock_pane_t2

0xbc39,	// (0x0007568a) main_fs_bigclock_pane_t3_ParamLimits

0xbc39,	// (0x0007568a) main_fs_bigclock_pane_t3

0x0002,

0xfcd9,	// (0x0007972a) main_fs_bigclock_pane_t_ParamLimits

0xfcd9,	// (0x0007972a) main_fs_bigclock_pane_t

0x1d88,	// (0x0006b7d9) main_fs_bigclock_indicator_pane_g1

0x0f20,	// (0x0006a971) ncim_query_content_pane_g2_ParamLimits

0x0f20,	// (0x0006a971) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x00079534) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x00079534) ncim_query_content_pane_g

0x2f35,	// (0x0006c986) sc_clock_pane_t4_ParamLimits

0x2f35,	// (0x0006c986) sc_clock_pane_t4

0x2761,	// (0x0006c1b2) main_radioblah_pane

0x967b,	// (0x000730cc) cell_call4_button_pane_t1_copy1_ParamLimits

0x967b,	// (0x000730cc) cell_call4_button_pane_t1_copy1

0xb14f,	// (0x00074ba0) main_ncimui_pane_t1_ParamLimits

0xb14f,	// (0x00074ba0) main_ncimui_pane_t1

0xb169,	// (0x00074bba) main_ncimui_pane_t2_ParamLimits

0xb169,	// (0x00074bba) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x0007952d) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x0007952d) main_ncimui_pane_t

0xd41d,	// (0x00076e6e) main_radioblah_anim_pane_ParamLimits

0xd41d,	// (0x00076e6e) main_radioblah_anim_pane

0xd41d,	// (0x00076e6e) main_radioblah_info_pane_ParamLimits

0xd41d,	// (0x00076e6e) main_radioblah_info_pane

0xe0d1,	// (0x00077b22) main_radioblah_pane_t1_ParamLimits

0xe0d1,	// (0x00077b22) main_radioblah_pane_t1

0xe0d1,	// (0x00077b22) main_radioblah_pane_t2_ParamLimits

0xe0d1,	// (0x00077b22) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x000795c8) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x000795c8) main_radioblah_pane_t

0x2ecb,	// (0x0006c91c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x2ecb,	// (0x0006c91c) main_radioblah_rocker_ctrl_pane

0x1377,	// (0x0006adc8) main_radioblah_info_pane_t1_ParamLimits

0x1377,	// (0x0006adc8) main_radioblah_info_pane_t1

0x138b,	// (0x0006addc) main_radioblah_info_pane_t2_ParamLimits

0x138b,	// (0x0006addc) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x000795d1) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x000795d1) main_radioblah_info_pane_t

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g1

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g2

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g3

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g4

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g5

0x2f17,	// (0x0006c968) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x000795da) main_radioblah_rocker_ctrl_pane_g

0xb0f6,	// (0x00074b47) main_cset_text2_pane_t1_copy1_ParamLimits

0x96ee,	// (0x0007313f) cam4_image_uncrop_qvga_pane

0x9835,	// (0x00073286) vid4_image_uncrop_qcif_pane

0xac9f,	// (0x000746f0) cam6_image_uncrop_qvga_pane_ParamLimits

0xac9f,	// (0x000746f0) cam6_image_uncrop_qvga_pane

0x0c0c,	// (0x0006a65d) vid6_image_uncrop_qcif_pane_ParamLimits

0x0c0c,	// (0x0006a65d) vid6_image_uncrop_qcif_pane

0x24ab,	// (0x0006befc) bg_popup_preview_window_pane_cp03

0x0ed2,	// (0x0006a923) list_cset_text2_pane

0x0eda,	// (0x0006a92b) main_cset6_text2_pane_g1

0x0ee2,	// (0x0006a933) main_cset6_text2_pane_t1

0xb544,	// (0x00074f95) list_cset_text2_pane_t1_ParamLimits

0xb544,	// (0x00074f95) list_cset_text2_pane_t1

0x2761,	// (0x0006c1b2) main_radioblah_pane_ParamLimits

0xb46b,	// (0x00074ebc) main_mobtv_info_pane_t3_ParamLimits

0xb46b,	// (0x00074ebc) main_mobtv_info_pane_t3

0xe0c3,	// (0x00077b14) main_radioblah_pane_g1

0x1347,	// (0x0006ad98) main_radioblah_info_pane_g1

0x2f35,	// (0x0006c986) main_radioblah_info_pane_t3_ParamLimits

0x2f35,	// (0x0006c986) main_radioblah_info_pane_t3

0x7049,	// (0x00070a9a) highlight_cell_cale_month_pane_ParamLimits

0x7049,	// (0x00070a9a) highlight_cell_cale_month_pane

0x24ab,	// (0x0006befc) main_phob_fisheye_pane

0xec25,	// (0x00078676) scroll_pane_cp0031_ParamLimits

0xec25,	// (0x00078676) scroll_pane_cp0031

0x0d1a,	// (0x0006a76b) wait_bar_pane_cp08_ParamLimits

0xaeb7,	// (0x00074908) cset_list_set_pane_copy1_ParamLimits

0x13da,	// (0x0006ae2b) highlight_cell_cale_month_pane_g1

0xb561,	// (0x00074fb2) highlight_cell_cale_month_pane_t1

0x08fe,	// (0x0006a34f) list_gen_pane_cp01

0x042c,	// (0x00069e7d) scroll_pane_01

0x4b8c,	// (0x0006e5dd) list_single_double_fisheye_pane

0xb56f,	// (0x00074fc0) list_double_fisheye_pane_g1_ParamLimits

0xb56f,	// (0x00074fc0) list_double_fisheye_pane_g1

0xb57b,	// (0x00074fcc) list_double_fisheye_pane_g2_ParamLimits

0xb57b,	// (0x00074fcc) list_double_fisheye_pane_g2

0xb58f,	// (0x00074fe0) list_double_fisheye_pane_g3_ParamLimits

0xb58f,	// (0x00074fe0) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x000795e7) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x000795e7) list_double_fisheye_pane_g

0xb5b8,	// (0x00075009) list_double_fisheye_pane_t1_ParamLimits

0xb5b8,	// (0x00075009) list_double_fisheye_pane_t1

0xb5d3,	// (0x00075024) list_double_fisheye_pane_t2_ParamLimits

0xb5d3,	// (0x00075024) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x000795f2) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x000795f2) list_double_fisheye_pane_t

0x24ab,	// (0x0006befc) main_call5_pane

0x2ecb,	// (0x0006c91c) sc_swipe_pane_ParamLimits

0x2ecb,	// (0x0006c91c) sc_swipe_pane

0xb601,	// (0x00075052) call5_image_pane_ParamLimits

0xb601,	// (0x00075052) call5_image_pane

0xb611,	// (0x00075062) call5_swipe_1_pane_ParamLimits

0xb611,	// (0x00075062) call5_swipe_1_pane

0xb61d,	// (0x0007506e) call5_swipe_2_pane_ParamLimits

0xb61d,	// (0x0007506e) call5_swipe_2_pane

0xb637,	// (0x00075088) popup_call5_audio_first_window_ParamLimits

0xb637,	// (0x00075088) popup_call5_audio_first_window

0x2ed9,	// (0x0006c92a) call5_swipe_1_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) call5_swipe_1_pane_g1

0x13e2,	// (0x0006ae33) call5_swipe_1_pane_g2_ParamLimits

0x13e2,	// (0x0006ae33) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x000795f7) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x000795f7) call5_swipe_1_pane_g

0x13ee,	// (0x0006ae3f) call5_swipe_1_pane_t1_ParamLimits

0x13ee,	// (0x0006ae3f) call5_swipe_1_pane_t1

0x2ed9,	// (0x0006c92a) call5_swipe_2_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) call5_swipe_2_pane_g1

0x1403,	// (0x0006ae54) call5_swipe_2_pane_g2_ParamLimits

0x1403,	// (0x0006ae54) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x000795fc) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x000795fc) call5_swipe_2_pane_g

0x140f,	// (0x0006ae60) call5_swipe_2_pane_t1_ParamLimits

0x140f,	// (0x0006ae60) call5_swipe_2_pane_t1

0x2ed9,	// (0x0006c92a) sc_swipe_pane_g1_ParamLimits

0x2ed9,	// (0x0006c92a) sc_swipe_pane_g1

0x2ee7,	// (0x0006c938) sc_swipe_pane_g2_ParamLimits

0x2ee7,	// (0x0006c938) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x00079601) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x00079601) sc_swipe_pane_g

0x2f21,	// (0x0006c972) sc_swipe_pane_t1_ParamLimits

0x2f21,	// (0x0006c972) sc_swipe_pane_t1

0x24ab,	// (0x0006befc) main_cmail_launcher_pane

0xb645,	// (0x00075096) aid_size_cell_cmail_l_ParamLimits

0xb645,	// (0x00075096) aid_size_cell_cmail_l

0xb653,	// (0x000750a4) grid_cmail_l_pane_ParamLimits

0xb653,	// (0x000750a4) grid_cmail_l_pane

0xb663,	// (0x000750b4) cell_cmail_l_pane_ParamLimits

0xb663,	// (0x000750b4) cell_cmail_l_pane

0x1424,	// (0x0006ae75) cell_cmail_l_pane_g1_ParamLimits

0x1424,	// (0x0006ae75) cell_cmail_l_pane_g1

0x1430,	// (0x0006ae81) cell_cmail_l_pane_t1_ParamLimits

0x1430,	// (0x0006ae81) cell_cmail_l_pane_t1

0x1446,	// (0x0006ae97) cell_cmail_l_pane_t2_ParamLimits

0x1446,	// (0x0006ae97) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x00079606) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x00079606) cell_cmail_l_pane_t

0x2761,	// (0x0006c1b2) grid_highlight_pane_cp018_ParamLimits

0x2761,	// (0x0006c1b2) grid_highlight_pane_cp018

0x544c,	// (0x0006ee9d) main2_pane_ParamLimits

0x544c,	// (0x0006ee9d) main2_pane

0x300d,	// (0x0006ca5e) popup_sp_fs_action_menu_bg_pane_g1

0x3015,	// (0x0006ca66) popup_sp_fs_action_menu_bg_pane_g2

0x301d,	// (0x0006ca6e) popup_sp_fs_action_menu_bg_pane_g3

0x3025,	// (0x0006ca76) popup_sp_fs_action_menu_bg_pane_g4

0x302d,	// (0x0006ca7e) popup_sp_fs_action_menu_bg_pane_g5

0x3035,	// (0x0006ca86) popup_sp_fs_action_menu_bg_pane_g6

0x303d,	// (0x0006ca8e) popup_sp_fs_action_menu_bg_pane_g7

0x3045,	// (0x0006ca96) popup_sp_fs_action_menu_bg_pane_g8

0x304d,	// (0x0006ca9e) popup_sp_fs_action_menu_bg_pane_g9

0x3055,	// (0x0006caa6) popup_sp_fs_action_menu_bg_pane_g10

0x3055,	// (0x0006caa6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00078b2e) popup_sp_fs_action_menu_bg_pane_g

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00078bdc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00078bdc) list_medium_line_x2_t3_g3_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t2

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g3_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_x2_t3_g2_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t2

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g2_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g3

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00078bef) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00078bef) list_medium_line_x2_t4_g4_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t2

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t3

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00078bf8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00078bf8) list_medium_line_x2_t4_g4_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g3

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00078bef) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00078bef) list_medium_line_x2_t2_g4_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g4_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g4_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00078bdc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00078bdc) list_medium_line_x2_t2_g3_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g3_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g3_t

0x7219,	// (0x00070c6a) main_sp_fs_list_pane_ParamLimits

0x7219,	// (0x00070c6a) main_sp_fs_list_pane

0x7225,	// (0x00070c76) sp_fs_scroll_pane_ParamLimits

0x7225,	// (0x00070c76) sp_fs_scroll_pane

0x3693,	// (0x0006d0e4) list_medium_line_x2_t3_t1

0x3693,	// (0x0006d0e4) list_medium_line_x2_t3_t2

0x3693,	// (0x0006d0e4) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x00078caa) list_medium_line_x2_t3_t

0x3693,	// (0x0006d0e4) list_medium_line_x3_t4_t1

0x3693,	// (0x0006d0e4) list_medium_line_x3_t4_t2

0x3693,	// (0x0006d0e4) list_medium_line_x3_t4_t3

0x3693,	// (0x0006d0e4) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00078cb1) list_medium_line_x3_t4_t

0x3693,	// (0x0006d0e4) list_medium_line_x4_t5_t1

0x3693,	// (0x0006d0e4) list_medium_line_x4_t5_t2

0x3693,	// (0x0006d0e4) list_medium_line_x4_t5_t3

0x3693,	// (0x0006d0e4) list_medium_line_x4_t5_t4

0x3693,	// (0x0006d0e4) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x00078cba) list_medium_line_x4_t5_t

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g1

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g2

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g3

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00078bef) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00078bef) list_medium_line_t4_g4_g

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t1

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t2

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t3

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t4_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00078bf8) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00078bf8) list_medium_line_t4_g4_t

0x730e,	// (0x00070d5f) chi_dic_find_pane_g1

0x7ee2,	// (0x00071933) main_tport_pane

0x3693,	// (0x0006d0e4) list_medium_line_plain_t1

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_t2_g2_g

0x2f21,	// (0x0006c972) list_medium_line_t2_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_g2_t1

0x2f21,	// (0x0006c972) list_medium_line_t2_g2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_t2_g2_t

0x4b4a,	// (0x0006e59b) aid_sp_fs_list_icon_a_sm

0xa99c,	// (0x000743ed) aid_sp_fs_list_icon_d

0x188d,	// (0x0006b2de) aid_sp_fs_text_primary

0x4b52,	// (0x0006e5a3) aid_sp_fs_text_secondary

0x24ab,	// (0x0006befc) list_medium_line

0x24ab,	// (0x0006befc) list_medium_line_g2

0x24ab,	// (0x0006befc) list_medium_line_g3

0x24ab,	// (0x0006befc) list_medium_line_plain

0x24ab,	// (0x0006befc) list_medium_line_plain_t2

0x24ab,	// (0x0006befc) list_medium_line_plain_t3

0x24ab,	// (0x0006befc) list_medium_line_right_icon

0x24ab,	// (0x0006befc) list_medium_line_right_iconx2

0x24ab,	// (0x0006befc) list_medium_line_t2

0x24ab,	// (0x0006befc) list_medium_line_t2_g2

0x24ab,	// (0x0006befc) list_medium_line_t2_g3

0x24ab,	// (0x0006befc) list_medium_line_t2_right_icon

0x24ab,	// (0x0006befc) list_medium_line_t2_right_iconx2

0x24ab,	// (0x0006befc) list_medium_line_t3

0x24ab,	// (0x0006befc) list_medium_line_t3_g2

0x24ab,	// (0x0006befc) list_medium_line_t3_g3

0x24ab,	// (0x0006befc) list_medium_line_t3_right_iconx2

0x24ab,	// (0x0006befc) list_medium_line_t4_g4

0x24ab,	// (0x0006befc) list_medium_line_x2

0x24ab,	// (0x0006befc) list_medium_line_x2_t2_g2

0x24ab,	// (0x0006befc) list_medium_line_x2_t2_g3

0x24ab,	// (0x0006befc) list_medium_line_x2_t2_g4

0x24ab,	// (0x0006befc) list_medium_line_x2_t3

0x24ab,	// (0x0006befc) list_medium_line_x2_t3_g2

0x24ab,	// (0x0006befc) list_medium_line_x2_t3_g3

0x24ab,	// (0x0006befc) list_medium_line_x2_t3_g4

0x24ab,	// (0x0006befc) list_medium_line_x2_t4_g2

0x24ab,	// (0x0006befc) list_medium_line_x2_t4_g4

0x24ab,	// (0x0006befc) list_medium_line_x3

0x24ab,	// (0x0006befc) list_medium_line_x3_t4

0x24ab,	// (0x0006befc) list_medium_line_x3_t4_g4

0x24ab,	// (0x0006befc) list_medium_line_x4_t4

0x24ab,	// (0x0006befc) list_medium_line_x4_t4_g7

0x24ab,	// (0x0006befc) list_medium_line_x4_t5

0x4b5b,	// (0x0006e5ac) list_single_fs_dyc_pane_ParamLimits

0x4b5b,	// (0x0006e5ac) list_single_fs_dyc_pane

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g3

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g4

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g5

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x4_t4_g7_g6

0x2ee7,	// (0x0006c938) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2ee7,	// (0x0006c938) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0007950e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0007950e) list_medium_line_x4_t4_g7_g

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t1

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t2

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x4_t4_g7_t3

0x2f35,	// (0x0006c986) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2f35,	// (0x0006c986) list_medium_line_x4_t4_g7_t4

0x2f35,	// (0x0006c986) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2f35,	// (0x0006c986) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0007951d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0007951d) list_medium_line_x4_t4_g7_t

0x4b6f,	// (0x0006e5c0) list_single_dyc_row_pane_ParamLimits

0x4b6f,	// (0x0006e5c0) list_single_dyc_row_pane

0xb5f5,	// (0x00075046) call5_gesture_pane_ParamLimits

0xb5f5,	// (0x00075046) call5_gesture_pane

0xb629,	// (0x0007507a) call5_windows_pane_ParamLimits

0xb629,	// (0x0007507a) call5_windows_pane

0xb67c,	// (0x000750cd) call5_swipe_1_pane_cp_ParamLimits

0xb67c,	// (0x000750cd) call5_swipe_1_pane_cp

0xb688,	// (0x000750d9) call5_swipe_2_pane_cp_ParamLimits

0xb688,	// (0x000750d9) call5_swipe_2_pane_cp

0x318d,	// (0x0006cbde) call5_image_pane_cp

0xb694,	// (0x000750e5) popup_call5_audio_first_window_cp_ParamLimits

0xb694,	// (0x000750e5) popup_call5_audio_first_window_cp

0x1463,	// (0x0006aeb4) call5_swipe_1_pane_g1_cp_ParamLimits

0x1463,	// (0x0006aeb4) call5_swipe_1_pane_g1_cp

0x1470,	// (0x0006aec1) call5_swipe_1_pane_g2_cp

0x1478,	// (0x0006aec9) call5_swipe_1_pane_t1_cp_ParamLimits

0x1478,	// (0x0006aec9) call5_swipe_1_pane_t1_cp

0x1463,	// (0x0006aeb4) call5_swipe_2_pane_g1_cp_ParamLimits

0x1463,	// (0x0006aeb4) call5_swipe_2_pane_g1_cp

0x148d,	// (0x0006aede) call5_swipe_2_pane_g2_cp

0x1495,	// (0x0006aee6) call5_swipe_2_pane_t1_cp_ParamLimits

0x1495,	// (0x0006aee6) call5_swipe_2_pane_t1_cp

0x2761,	// (0x0006c1b2) main_sp_fs_email_pane

0x14aa,	// (0x0006aefb) main_sp_fs_listscroll_pane_te

0xb6a2,	// (0x000750f3) popup_sp_fs_action_menu_pane_ParamLimits

0xb6a2,	// (0x000750f3) popup_sp_fs_action_menu_pane

0x2f17,	// (0x0006c968) bg_sp_fs_ctrlbar_pane_g1

0x14b3,	// (0x0006af04) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x14bc,	// (0x0006af0d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x14c5,	// (0x0006af16) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2f17,	// (0x0006c968) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0007960b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe47c,	// (0x00077ecd) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe47c,	// (0x00077ecd) bg_sp_fs_ctrlbar_ddmenu_pane

0x14ce,	// (0x0006af1f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x14ce,	// (0x0006af1f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x14da,	// (0x0006af2b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x14da,	// (0x0006af2b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x00079614) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x00079614) main_sp_fs_ctrlbar_ddmenu_pane_g

0x14e6,	// (0x0006af37) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x14e6,	// (0x0006af37) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2f17,	// (0x0006c968) list_medium_line_t2_right_icon_g1

0x3693,	// (0x0006d0e4) list_medium_line_t2_right_icon_t1

0x3693,	// (0x0006d0e4) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x00079619) list_medium_line_t2_right_icon_t

0xd41d,	// (0x00076e6e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd41d,	// (0x00076e6e) bg_sp_fs_ctrlbar_pane

0xb73d,	// (0x0007518e) main_sp_fs_ctrlbar_button_pane_cp01

0xb745,	// (0x00075196) main_sp_fs_ctrlbar_ddmenu_pane

0x1538,	// (0x0006af89) main_sp_fs_ctrlbar_pane_g1

0x1544,	// (0x0006af95) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0007961e) main_sp_fs_ctrlbar_pane_g

0xb781,	// (0x000751d2) main_sp_fs_ctrlbar_pane_t1

0xb7bc,	// (0x0007520d) main_sp_fs_ctrlbar_pane

0xb7d2,	// (0x00075223) main_sp_fs_listscroll_pane_te_cp01

0x4b95,	// (0x0006e5e6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4b95,	// (0x0006e5e6) popup_sp_fs_action_menu_pane_cp01

0x2761,	// (0x0006c1b2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2761,	// (0x0006c1b2) bg_sp_fs_highlight_list_pane_cp01

0x4bb5,	// (0x0006e606) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4bb5,	// (0x0006e606) sp_fs_action_menu_list_gene_pane_g1

0x157a,	// (0x0006afcb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x157a,	// (0x0006afcb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x0007962c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x0007962c) sp_fs_action_menu_list_gene_pane_g

0x4bc4,	// (0x0006e615) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4bc4,	// (0x0006e615) sp_fs_action_menu_list_gene_pane_t1

0x4bdc,	// (0x0006e62d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4bdc,	// (0x0006e62d) sp_fs_action_menu_list_gene_pane

0x18ec,	// (0x0006b33d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x18ec,	// (0x0006b33d) popup_sp_fs_action_menu_bg_pane

0x4bfd,	// (0x0006e64e) sp_fs_action_menu_list_pane_ParamLimits

0x4bfd,	// (0x0006e64e) sp_fs_action_menu_list_pane

0x4c1f,	// (0x0006e670) sp_fs_scroll_pane_cp01_ParamLimits

0x4c1f,	// (0x0006e670) sp_fs_scroll_pane_cp01

0x3693,	// (0x0006d0e4) list_medium_line_plain_t2_t1

0x3693,	// (0x0006d0e4) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x00079619) list_medium_line_plain_t2_t

0x3693,	// (0x0006d0e4) list_medium_line_plain_t3_t1

0x3693,	// (0x0006d0e4) list_medium_line_plain_t3_t2

0x3693,	// (0x0006d0e4) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x00078caa) list_medium_line_plain_t3_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_x2_t2_g2_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g2_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_x2_t2_g2_t

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_x2_t4_g2_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t2

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t3

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00078bf8) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00078bf8) list_medium_line_x2_t4_g2_t

0x2f17,	// (0x0006c968) list_medium_line_t3_right_iconx2_g1

0x2f17,	// (0x0006c968) list_medium_line_t3_right_iconx2_g2

0x2f17,	// (0x0006c968) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00078dc6) list_medium_line_t3_right_iconx2_g

0x3693,	// (0x0006d0e4) list_medium_line_t3_right_iconx2_t1

0x3693,	// (0x0006d0e4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00079619) list_medium_line_t3_right_iconx2_t

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g3

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00078bef) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00078bef) list_medium_line_x3_t4_g4_g

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t1

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t2

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t3

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00078bf8) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00078bf8) list_medium_line_x3_t4_g4_t

0x4c45,	// (0x0006e696) list_single_dyc_row_text_pane_t1_ParamLimits

0x4c45,	// (0x0006e696) list_single_dyc_row_text_pane_t1

0x4c7c,	// (0x0006e6cd) list_single_dyc_row_text_pane_t2_ParamLimits

0x4c7c,	// (0x0006e6cd) list_single_dyc_row_text_pane_t2

0x4cf2,	// (0x0006e743) list_single_dyc_row_text_pane_t3_ParamLimits

0x4cf2,	// (0x0006e743) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x00079631) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x00079631) list_single_dyc_row_text_pane_t

0x4dc3,	// (0x0006e814) list_single_dyc_row_pane_g1_ParamLimits

0x4dc3,	// (0x0006e814) list_single_dyc_row_pane_g1

0x4dcf,	// (0x0006e820) list_single_dyc_row_pane_g2_ParamLimits

0x4dcf,	// (0x0006e820) list_single_dyc_row_pane_g2

0x4ddb,	// (0x0006e82c) list_single_dyc_row_pane_g3_ParamLimits

0x4ddb,	// (0x0006e82c) list_single_dyc_row_pane_g3

0x4dee,	// (0x0006e83f) list_single_dyc_row_pane_g4_ParamLimits

0x4dee,	// (0x0006e83f) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x0007963e) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x0007963e) list_single_dyc_row_pane_g

0x4e40,	// (0x0006e891) list_single_dyc_row_text_pane_ParamLimits

0x4e40,	// (0x0006e891) list_single_dyc_row_text_pane

0x24ab,	// (0x0006befc) bg_sp_fs_scroll_pane

0x18fa,	// (0x0006b34b) thumb_sp_fs_scroll_pane

0x2ed9,	// (0x0006c92a) list_medium_line_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g1

0x2f21,	// (0x0006c972) list_medium_line_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_x2_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t1

0x2ed9,	// (0x0006c92a) list_medium_line_x3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x3_g1

0x18de,	// (0x0006b32f) list_medium_line_x3_g2_ParamLimits

0x18de,	// (0x0006b32f) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x0007964d) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x0007964d) list_medium_line_x3_g

0x1903,	// (0x0006b354) list_medium_line_x3_t1_ParamLimits

0x1903,	// (0x0006b354) list_medium_line_x3_t1

0x1917,	// (0x0006b368) thumb_sp_fs_scroll_pane_g1

0x1920,	// (0x0006b371) thumb_sp_fs_scroll_pane_g2

0x1929,	// (0x0006b37a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x00079652) thumb_sp_fs_scroll_pane_g

0x1917,	// (0x0006b368) bg_sp_fs_scroll_pane_g1

0x1920,	// (0x0006b371) bg_sp_fs_scroll_pane_g2

0x1929,	// (0x0006b37a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x00079652) bg_sp_fs_scroll_pane_g

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g1

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g2

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g3

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00078bef) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00078bef) list_medium_line_x2_t3_g4_g

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t1

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t2

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_x2_t3_g4_t

0x2ed9,	// (0x0006c92a) list_medium_line_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_g2_g

0x2f21,	// (0x0006c972) list_medium_line_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_g2_t1

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g2_g1

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g2_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00078bea) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00078bea) list_medium_line_t3_g2_g

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t1

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t2

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_t3_g2_t

0x2f17,	// (0x0006c968) list_medium_line_right_icon_g1

0x3693,	// (0x0006d0e4) list_medium_line_right_icon_t1

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g1

0x2f21,	// (0x0006c972) list_medium_line_t2_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_t1

0x2f21,	// (0x0006c972) list_medium_line_t2_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_t2_t

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g1

0x2f21,	// (0x0006c972) list_medium_line_t3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_t1

0x2f21,	// (0x0006c972) list_medium_line_t3_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_t2

0x2f21,	// (0x0006c972) list_medium_line_t3_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_t3_t

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g1

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g2

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00078bdc) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00078bdc) list_medium_line_g3_g

0x2f21,	// (0x0006c972) list_medium_line_g3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_g3_t1

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g1

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g2

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00078bdc) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00078bdc) list_medium_line_t2_g3_g

0x2f21,	// (0x0006c972) list_medium_line_t2_g3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_g3_t1

0x2f21,	// (0x0006c972) list_medium_line_t2_g3_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00078c5f) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00078c5f) list_medium_line_t2_g3_t

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g1_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g1

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g2_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g2

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g3_ParamLimits

0x2ed9,	// (0x0006c92a) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00078bdc) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00078bdc) list_medium_line_t3_g3_g

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t1_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t1

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t2_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t2

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t3_ParamLimits

0x2f21,	// (0x0006c972) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00078be3) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00078be3) list_medium_line_t3_g3_t

0x2f17,	// (0x0006c968) list_medium_line_right_iconx2_g1

0x2f17,	// (0x0006c968) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00078add) list_medium_line_right_iconx2_g

0x3693,	// (0x0006d0e4) list_medium_line_right_iconx2_t1

0x2f17,	// (0x0006c968) list_medium_line_t2_right_iconx2_g1

0x2f17,	// (0x0006c968) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00078add) list_medium_line_t2_right_iconx2_g

0x3693,	// (0x0006d0e4) list_medium_line_t2_right_iconx2_t1

0x3693,	// (0x0006d0e4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00079619) list_medium_line_t2_right_iconx2_t

0x3693,	// (0x0006d0e4) list_medium_line_x4_t4_t1

0x3693,	// (0x0006d0e4) list_medium_line_x4_t4_t2

0x3693,	// (0x0006d0e4) list_medium_line_x4_t4_t3

0x3693,	// (0x0006d0e4) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00078cb1) list_medium_line_x4_t4_t

0xb817,	// (0x00075268) tport_appsw_pane_ParamLimits

0xb817,	// (0x00075268) tport_appsw_pane

0xb825,	// (0x00075276) tport_contact_pane_ParamLimits

0xb825,	// (0x00075276) tport_contact_pane

0xb835,	// (0x00075286) tport_listscroll_pane_ParamLimits

0xb835,	// (0x00075286) tport_listscroll_pane

0xb845,	// (0x00075296) cell_tport_appsw_pane_ParamLimits

0xb845,	// (0x00075296) cell_tport_appsw_pane

0x2ee7,	// (0x0006c938) tport_appsw_pane_g1_ParamLimits

0x2ee7,	// (0x0006c938) tport_appsw_pane_g1

0x1932,	// (0x0006b383) tport_contact_pane_g1

0x0fa6,	// (0x0006a9f7) tport_contact_pane_t1

0x193b,	// (0x0006b38c) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x00079659) tport_contact_pane_t

0x1949,	// (0x0006b39a) list_tport_pane

0x1952,	// (0x0006b3a3) scroll_pane_cp_030

0xb878,	// (0x000752c9) cell_tport_appsw_pane_g1

0xb888,	// (0x000752d9) cell_tport_appsw_pane_t1

0xb896,	// (0x000752e7) grid_highlight_pane_cp019

0xb89e,	// (0x000752ef) list_tport_double_graphic_pane_ParamLimits

0xb89e,	// (0x000752ef) list_tport_double_graphic_pane

0x2761,	// (0x0006c1b2) list_highlight_pane_cp023_ParamLimits

0x2761,	// (0x0006c1b2) list_highlight_pane_cp023

0xb8af,	// (0x00075300) list_tport_double_graphic_pane_g1_ParamLimits

0xb8af,	// (0x00075300) list_tport_double_graphic_pane_g1

0xb8bc,	// (0x0007530d) list_tport_double_graphic_pane_t1_ParamLimits

0xb8bc,	// (0x0007530d) list_tport_double_graphic_pane_t1

0xb8d1,	// (0x00075322) list_tport_double_graphic_pane_t2_ParamLimits

0xb8d1,	// (0x00075322) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x00079665) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x00079665) list_tport_double_graphic_pane_t

0x24ab,	// (0x0006befc) main_cale_note_pane

0x9a92,	// (0x000734e3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9a92,	// (0x000734e3) cell_vitu2_function_top_wide_pane_cp01

0xb47f,	// (0x00074ed0) wait_bar_pane_cp05_ParamLimits

0x2761,	// (0x0006c1b2) listscroll_cmail_pane

0x1963,	// (0x0006b3b4) list_cmail_pane

0xb8e3,	// (0x00075334) list_cmail_body_pane

0xb90a,	// (0x0007535b) list_single_cmail_header_caption_pane

0xb933,	// (0x00075384) list_single_cmail_header_detail_pane_ParamLimits

0xb933,	// (0x00075384) list_single_cmail_header_detail_pane

0x197a,	// (0x0006b3cb) list_single_cmail_header_caption_pane_t1

0x4e65,	// (0x0006e8b6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4e65,	// (0x0006e8b6) list_single_cmail_header_detail_pane_g1

0xb96d,	// (0x000753be) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb96d,	// (0x000753be) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x0007966a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x0007966a) list_single_cmail_header_detail_pane_g

0x4e7b,	// (0x0006e8cc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4e7b,	// (0x0006e8cc) list_single_cmail_header_detail_pane_t1

0x4edb,	// (0x0006e92c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4edb,	// (0x0006e92c) list_single_cmail_header_editor_pane_bg

0x1103,	// (0x0006ab54) list_cmail_body_pane_g1

0x199e,	// (0x0006b3ef) list_cmail_body_pane_t1

0x02ec,	// (0x00069d3d) list_single_cmail_header_editor_pane_bg_g1

0x33a6,	// (0x0006cdf7) list_single_cmail_header_editor_pane_bg_g1_copy1

0x02fc,	// (0x00069d4d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x02f4,	// (0x00069d45) list_single_cmail_header_editor_pane_bg_g1_copy3

0x05c7,	// (0x0006a018) list_single_cmail_header_editor_pane_bg_g1_copy4

0x031c,	// (0x00069d6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x030c,	// (0x00069d5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0314,	// (0x00069d65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3386,	// (0x0006cdd7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb979,	// (0x000753ca) calenote_gesture_pane_ParamLimits

0xb979,	// (0x000753ca) calenote_gesture_pane

0xb993,	// (0x000753e4) calenote_window_pane_ParamLimits

0xb993,	// (0x000753e4) calenote_window_pane

0x19ac,	// (0x0006b3fd) popup_note_window_cp01

0xb9ab,	// (0x000753fc) calenote_swipe_1_pane_ParamLimits

0xb9ab,	// (0x000753fc) calenote_swipe_1_pane

0xb688,	// (0x000750d9) calenote_swipe_2_pane_ParamLimits

0xb688,	// (0x000750d9) calenote_swipe_2_pane

0x1463,	// (0x0006aeb4) calenote_swipe_1_pane_g1_ParamLimits

0x1463,	// (0x0006aeb4) calenote_swipe_1_pane_g1

0x19be,	// (0x0006b40f) calenote_swipe_1_pane_g2_ParamLimits

0x19be,	// (0x0006b40f) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x00079676) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x00079676) calenote_swipe_1_pane_g

0x19ca,	// (0x0006b41b) calenote_swipe_1_pane_t1_ParamLimits

0x19ca,	// (0x0006b41b) calenote_swipe_1_pane_t1

0x1463,	// (0x0006aeb4) calenote_swipe_2_pane_g1_ParamLimits

0x1463,	// (0x0006aeb4) calenote_swipe_2_pane_g1

0x19e9,	// (0x0006b43a) calenote_swipe_2_pane_g2_ParamLimits

0x19e9,	// (0x0006b43a) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x0007967b) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x0007967b) calenote_swipe_2_pane_g

0x19f5,	// (0x0006b446) calenote_swipe_2_pane_t1_ParamLimits

0x19f5,	// (0x0006b446) calenote_swipe_2_pane_t1

0x24ab,	// (0x0006befc) main_mup_navstr_pane

0x89f4,	// (0x00072445) main_mup3_pane_t7_ParamLimits

0x89f4,	// (0x00072445) main_mup3_pane_t7

0x9194,	// (0x00072be5) main_mp4_pane_g6_ParamLimits

0x9194,	// (0x00072be5) main_mp4_pane_g6

0x94d7,	// (0x00072f28) main_image3_pane_t4_ParamLimits

0x94d7,	// (0x00072f28) main_image3_pane_t4

0xb9be,	// (0x0007540f) popup_navstr_preview_pane_ParamLimits

0xb9be,	// (0x0007540f) popup_navstr_preview_pane

0xb9ca,	// (0x0007541b) scroll_navstr_pane_ParamLimits

0xb9ca,	// (0x0007541b) scroll_navstr_pane

0x24ab,	// (0x0006befc) bg_popup_preview_window_pane_cp04

0x1a1c,	// (0x0006b46d) popup_navstr_preview_pane_t1

0xb9d6,	// (0x00075427) scroll_navstr_pane_g1_ParamLimits

0xb9d6,	// (0x00075427) scroll_navstr_pane_g1

0xb9e3,	// (0x00075434) scroll_navstr_pane_t1_ParamLimits

0xb9e3,	// (0x00075434) scroll_navstr_pane_t1

0x19b5,	// (0x0006b406) bg_button_pane_cp014

0x19b5,	// (0x0006b406) bg_button_pane_cp030

0xb59b,	// (0x00074fec) list_double_fisheye_pane_g4_ParamLimits

0xb59b,	// (0x00074fec) list_double_fisheye_pane_g4

0xb5a7,	// (0x00074ff8) list_double_fisheye_pane_g5_ParamLimits

0xb5a7,	// (0x00074ff8) list_double_fisheye_pane_g5

0xe470,	// (0x00077ec1) sp_fs_scroll_pane_cp03

0x1538,	// (0x0006af89) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1544,	// (0x0006af95) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0007961e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb781,	// (0x000751d2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1972,	// (0x0006b3c3) sp_fs_scroll_pane_cp02

0x30de,	// (0x0006cb2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x30de,	// (0x0006cb2f) popup_sp_fs_calendar_preview_list_single_pane

0x24ab,	// (0x0006befc) main_cam6_pano_pane

0x2761,	// (0x0006c1b2) main_mup3_pane_ParamLimits

0x24ab,	// (0x0006befc) main_phacti_pane

0xb354,	// (0x00074da5) bg_button_pane_cp11

0xb36c,	// (0x00074dbd) main_mobtv_info_pane_g2_ParamLimits

0xb36c,	// (0x00074dbd) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x0007957e) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x0007957e) main_mobtv_info_pane_g

0x2f35,	// (0x0006c986) sc_clock_pane_t5_ParamLimits

0x2f35,	// (0x0006c986) sc_clock_pane_t5

0xe0c3,	// (0x00077b14) main_radioblah_pane_g1_ParamLimits

0xe0d1,	// (0x00077b22) main_radioblah_pane_t3_ParamLimits

0xe0d1,	// (0x00077b22) main_radioblah_pane_t3

0xe0d1,	// (0x00077b22) main_radioblah_pane_t4_ParamLimits

0xe0d1,	// (0x00077b22) main_radioblah_pane_t4

0x2ecb,	// (0x0006c91c) main_radioblah_text_pane_ParamLimits

0x2ecb,	// (0x0006c91c) main_radioblah_text_pane

0x1347,	// (0x0006ad98) main_radioblah_info_pane_g1_ParamLimits

0x139f,	// (0x0006adf0) main_radioblah_info_pane_t4_ParamLimits

0x139f,	// (0x0006adf0) main_radioblah_info_pane_t4

0x2761,	// (0x0006c1b2) main_sp_fs_calendar_pane

0xb9f5,	// (0x00075446) main_phacti_pane_g1

0xb9fd,	// (0x0007544e) phacti_note_pane_ParamLimits

0xb9fd,	// (0x0007544e) phacti_note_pane

0x1a33,	// (0x0006b484) phacti_term_pane_ParamLimits

0x1a33,	// (0x0006b484) phacti_term_pane

0x1a48,	// (0x0006b499) phacti_note_pane_t1_ParamLimits

0x1a48,	// (0x0006b499) phacti_note_pane_t1

0x4ef2,	// (0x0006e943) phacti_term_pane_g1

0x4efa,	// (0x0006e94b) phacti_term_pane_t1_ParamLimits

0x4efa,	// (0x0006e94b) phacti_term_pane_t1

0x1a5f,	// (0x0006b4b0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3174,	// (0x0006cbc5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x00079685) popup_sp_fs_calendar_preview_list_single_pane_g

0x1a67,	// (0x0006b4b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1a67,	// (0x0006b4b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1a7d,	// (0x0006b4ce) aid_popup_sp_fs_bg_corner_pane

0x2f17,	// (0x0006c968) popup_sp_fs_calendar_preview_bg_pane_g1

0x24ab,	// (0x0006befc) popup_sp_fs_calendar_preview_bg_pane

0x1a85,	// (0x0006b4d6) popup_sp_fs_calendar_preview_list_pane

0x1a8d,	// (0x0006b4de) bg_main_sp_fs_cale_pane_ParamLimits

0x1a8d,	// (0x0006b4de) bg_main_sp_fs_cale_pane

0x1aa5,	// (0x0006b4f6) listscroll_cale_mrui_pane_ParamLimits

0x1aa5,	// (0x0006b4f6) listscroll_cale_mrui_pane

0xebc9,	// (0x0007861a) listscroll_sp_fs_schedule_track_pane

0x4f2d,	// (0x0006e97e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4f2d,	// (0x0006e97e) main_sp_fs_ctrlbar_pane_cp01

0xebc9,	// (0x0007861a) main_sp_fs_ribbon_pane

0x4f43,	// (0x0006e994) popup_sp_fs_cale_preview_window

0x1743,	// (0x0006b194) list_single_sp_fs_schedule_track_pane_ParamLimits

0x1743,	// (0x0006b194) list_single_sp_fs_schedule_track_pane

0x1743,	// (0x0006b194) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1743,	// (0x0006b194) bg_sp_fs_highlight_list_pane_cp03

0x86d8,	// (0x00072129) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86d8,	// (0x00072129) list_single_sp_fs_schedule_track_pane_g1

0x86d8,	// (0x00072129) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x86d8,	// (0x00072129) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0007968a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0007968a) list_single_sp_fs_schedule_track_pane_g

0xba13,	// (0x00075464) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xba13,	// (0x00075464) list_single_sp_fs_schedule_track_pane_t1

0x1706,	// (0x0006b157) sp_fs_schedule_track_pane_ParamLimits

0x1706,	// (0x0006b157) sp_fs_schedule_track_pane

0xebd1,	// (0x00078622) sp_fs_schedule_track_pane_g1

0xebd1,	// (0x00078622) sp_fs_schedule_track_pane_g2

0xebd1,	// (0x00078622) sp_fs_schedule_track_pane_g3

0xebd1,	// (0x00078622) sp_fs_schedule_track_pane_g4

0xebd1,	// (0x00078622) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c8,	// (0x00079219) sp_fs_schedule_track_pane_g

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g1

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g2

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g3

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g4

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g5

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g6

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g7

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g8

0xebd1,	// (0x00078622) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3e,	// (0x0007968f) bg_sp_fs_schedule_viewer_highlight_g

0xebc9,	// (0x0007861a) bg_main_sp_fs_ribbon_pane

0xebd1,	// (0x00078622) main_sp_fs_ribbon_pane_g1

0x1abd,	// (0x0006b50e) main_sp_fs_ribbon_pane_t1

0x1abd,	// (0x0006b50e) main_sp_fs_ribbon_pane_t2

0x1abd,	// (0x0006b50e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc51,	// (0x000796a2) main_sp_fs_ribbon_pane_t

0xebc9,	// (0x0007861a) main_sp_fs_ribbon_scheduler_pane

0xebd1,	// (0x00078622) bg_main_sp_fs_ribbon_pane_g1

0xebd1,	// (0x00078622) bg_main_sp_fs_ribbon_pane_g2

0xebd1,	// (0x00078622) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x000790f6) bg_main_sp_fs_ribbon_pane_g

0xebd1,	// (0x00078622) main_sp_fs_ribbon_scheduler_pane_g1

0xebd1,	// (0x00078622) main_sp_fs_ribbon_scheduler_pane_g2

0xebd1,	// (0x00078622) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x000790f6) main_sp_fs_ribbon_scheduler_pane_g

0x1acb,	// (0x0006b51c) list_cale_mrui_pane

0xba25,	// (0x00075476) sp_fs_scroll_pane_cp07_ParamLimits

0xba25,	// (0x00075476) sp_fs_scroll_pane_cp07

0x1743,	// (0x0006b194) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x1743,	// (0x0006b194) bg_sp_fs_schedule_viewer_highlight

0xebc9,	// (0x0007861a) list_single_sp_fs_schedule_track_pane_cp01

0xebc9,	// (0x0007861a) list_sp_fs_schedule_track_pane

0x1ad8,	// (0x0006b529) sp_fs_scroll_pane_cp06_ParamLimits

0x1ad8,	// (0x0006b529) sp_fs_scroll_pane_cp06

0x2f17,	// (0x0006c968) bgmain_sp_fs_calendar_pane_g1

0x4f55,	// (0x0006e9a6) list_single_cale_mrui_pane_ParamLimits

0x4f55,	// (0x0006e9a6) list_single_cale_mrui_pane

0x4f7f,	// (0x0006e9d0) list_single_cale_mrui_row_pane_ParamLimits

0x4f7f,	// (0x0006e9d0) list_single_cale_mrui_row_pane

0x4f8c,	// (0x0006e9dd) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4f8c,	// (0x0006e9dd) list_single_cale_mrui_row_pane_g1

0x4fc4,	// (0x0006ea15) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4fc4,	// (0x0006ea15) list_single_cale_mrui_row_pane_t1

0x4fd6,	// (0x0006ea27) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4fd6,	// (0x0006ea27) list_single_cale_mrui_row_pane_t2

0x503c,	// (0x0006ea8d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x503c,	// (0x0006ea8d) list_single_cale_mrui_row_pane_t3

0x506b,	// (0x0006eabc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x506b,	// (0x0006eabc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc5f,	// (0x000796b0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc5f,	// (0x000796b0) list_single_cale_mrui_row_pane_t

0x509a,	// (0x0006eaeb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x509a,	// (0x0006eaeb) list_single_cmail_header_editor_pane_bg_cp01

0x50c2,	// (0x0006eb13) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x50c2,	// (0x0006eb13) list_single_cmail_header_editor_pane_bg_cp02

0x1af9,	// (0x0006b54a) main_radioblah_text_pane_t1_ParamLimits

0x1af9,	// (0x0006b54a) main_radioblah_text_pane_t1

0x1b13,	// (0x0006b564) cam6_indi_pane_cp01

0x1b1b,	// (0x0006b56c) cam6_mode_pane_cp01

0x1b23,	// (0x0006b574) cam6_pano_pane

0x1b2c,	// (0x0006b57d) cam6_zoom_pane_cp01

0x1b34,	// (0x0006b585) cam6_pano_image_pane

0x1b3f,	// (0x0006b590) cam6_pano_pane_g1

0x1103,	// (0x0006ab54) cam6_pano_pane_g2

0x1b48,	// (0x0006b599) cam6_pano_pane_g3

0x1b51,	// (0x0006b5a2) cam6_pano_pane_g4

0xee99,	// (0x000788ea) cam6_pano_pane_g5

0x1b5a,	// (0x0006b5ab) cam6_pano_pane_g6

0x1b64,	// (0x0006b5b5) cam6_pano_pane_g7

0x1b6c,	// (0x0006b5bd) cam6_pano_pane_g8

0x1b75,	// (0x0006b5c6) cam6_pano_pane_g9

0x0008,

0xfc68,	// (0x000796b9) cam6_pano_pane_g

0x24ab,	// (0x0006befc) main_browser_tag_pane

0x1a14,	// (0x0006b465) grid_navstr_albumart_pane

0x1b80,	// (0x0006b5d1) cell_navstr_albumart_pane_ParamLimits

0x1b80,	// (0x0006b5d1) cell_navstr_albumart_pane

0x1ba0,	// (0x0006b5f1) cell_navstr_albumart_pane_g1

0x1ba8,	// (0x0006b5f9) cell_navstr_albumart_pane_g2

0x1bb0,	// (0x0006b601) cell_navstr_albumart_pane_g3

0x1bb8,	// (0x0006b609) cell_navstr_albumart_pane_g4

0x0003,

0xfc7b,	// (0x000796cc) cell_navstr_albumart_pane_g

0xba41,	// (0x00075492) bt_list_pane_ParamLimits

0xba41,	// (0x00075492) bt_list_pane

0xba61,	// (0x000754b2) bt_list_pane_t1

0xba70,	// (0x000754c1) bt_list_pane_t2

0x0001,

0xfc84,	// (0x000796d5) bt_list_pane_t

0x24ab,	// (0x0006befc) main_cale_prevew_pane

0xba7f,	// (0x000754d0) popup_cale_preview_window_ParamLimits

0xba7f,	// (0x000754d0) popup_cale_preview_window

0x2761,	// (0x0006c1b2) bg_popup_preview_window_pane_cp05_ParamLimits

0x2761,	// (0x0006c1b2) bg_popup_preview_window_pane_cp05

0x1bc0,	// (0x0006b611) list_cale_preview_pane_ParamLimits

0x1bc0,	// (0x0006b611) list_cale_preview_pane

0xba98,	// (0x000754e9) list_double_cale_preview_pane_ParamLimits

0xba98,	// (0x000754e9) list_double_cale_preview_pane

0xbaaa,	// (0x000754fb) list_single_cale_preview_pane_ParamLimits

0xbaaa,	// (0x000754fb) list_single_cale_preview_pane

0xbac0,	// (0x00075511) list_single_cale_preview_pane_g1

0xbac8,	// (0x00075519) list_single_cale_preview_pane_t1_ParamLimits

0xbac8,	// (0x00075519) list_single_cale_preview_pane_t1

0xbadd,	// (0x0007552e) list_double_cale_preview_pane_g1

0xbae5,	// (0x00075536) list_double_cale_preview_pane_t1_ParamLimits

0xbae5,	// (0x00075536) list_double_cale_preview_pane_t1

0xbafa,	// (0x0007554b) list_double_cale_preview_pane_t2_ParamLimits

0xbafa,	// (0x0007554b) list_double_cale_preview_pane_t2

0x0001,

0xfc89,	// (0x000796da) list_double_cale_preview_pane_t_ParamLimits

0xfc89,	// (0x000796da) list_double_cale_preview_pane_t

0x24ab,	// (0x0006befc) main_ezdial_pane

0x2761,	// (0x0006c1b2) main_sp_fs_email_pane_ParamLimits

0xb6e6,	// (0x00075137) cmail_ddmenu_btn01_pane_ParamLimits

0xb6e6,	// (0x00075137) cmail_ddmenu_btn01_pane

0xb703,	// (0x00075154) cmail_ddmenu_btn02_pane_ParamLimits

0xb703,	// (0x00075154) cmail_ddmenu_btn02_pane

0xb721,	// (0x00075172) cmail_ddmenu_btn03_pane_ParamLimits

0xb721,	// (0x00075172) cmail_ddmenu_btn03_pane

0xb7bc,	// (0x0007520d) main_sp_fs_ctrlbar_pane_ParamLimits

0xb7d2,	// (0x00075223) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb8e3,	// (0x00075334) list_cmail_body_pane_ParamLimits

0x1988,	// (0x0006b3d9) bg_button_pane_cp12

0x1991,	// (0x0006b3e2) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1991,	// (0x0006b3e2) list_single_cmail_header_detail_pane_g3

0x4eb7,	// (0x0006e908) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4eb7,	// (0x0006e908) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x00079671) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x00079671) list_single_cmail_header_detail_pane_t

0x4f0f,	// (0x0006e960) phacti_term_pane_t2_ParamLimits

0x4f0f,	// (0x0006e960) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x00079680) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x00079680) phacti_term_pane_t

0x1bcc,	// (0x0006b61d) aid_size_list_single_double

0xbb12,	// (0x00075563) popup_ezdial_listscroll_window

0x1bd8,	// (0x0006b629) popup_number_entry_window_cp01

0x318d,	// (0x0006cbde) bg_popup_call_pane_cp09

0x1be5,	// (0x0006b636) ezdial_list_pane

0x1bed,	// (0x0006b63e) scroll_pane_cp23

0xe47c,	// (0x00077ecd) bg_button_pane_cp028_ParamLimits

0xe47c,	// (0x00077ecd) bg_button_pane_cp028

0xbb2b,	// (0x0007557c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbb2b,	// (0x0007557c) cmail_ddmenu_btn01_pane_g1

0xbb3b,	// (0x0007558c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbb3b,	// (0x0007558c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc8e,	// (0x000796df) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc8e,	// (0x000796df) cmail_ddmenu_btn01_pane_g

0x1bf5,	// (0x0006b646) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1bf5,	// (0x0006b646) cmail_ddmenu_btn01_pane_t1

0xd41d,	// (0x00076e6e) bg_button_pane_cp029_ParamLimits

0xd41d,	// (0x00076e6e) bg_button_pane_cp029

0xbb47,	// (0x00075598) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbb47,	// (0x00075598) cmail_ddmenu_btn02_pane_g1

0xbb5f,	// (0x000755b0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbb5f,	// (0x000755b0) cmail_ddmenu_btn02_pane_t1

0x2ecb,	// (0x0006c91c) bg_button_pane_cp031_ParamLimits

0x2ecb,	// (0x0006c91c) bg_button_pane_cp031

0xbb47,	// (0x00075598) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbb47,	// (0x00075598) cmail_ddmenu_btn03_pane_g1

0xbb5f,	// (0x000755b0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbb5f,	// (0x000755b0) cmail_ddmenu_btn03_pane_t1

0x2f21,	// (0x0006c972) cell_dialer2_keypad_pane_t1_ParamLimits

0xee5a,	// (0x000788ab) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee5a,	// (0x000788ab) cell_dialer2_keypad_pane_t1_copy1

0xb195,	// (0x00074be6) ncimui_group_button_pane

0x2761,	// (0x0006c1b2) main_sp_fs_calendar_pane_ParamLimits

0xb90a,	// (0x0007535b) list_single_cmail_header_caption_pane_ParamLimits

0x4f24,	// (0x0006e975) aid_recal_txt_sm_pane

0x24ab,	// (0x0006befc) mian_recal_day_pane

0x4f43,	// (0x0006e994) popup_sp_fs_cale_preview_window_ParamLimits

0x1c0b,	// (0x0006b65c) list_recal_day_pane

0x50f9,	// (0x0006eb4a) list_single_recal_day_pane_ParamLimits

0x50f9,	// (0x0006eb4a) list_single_recal_day_pane

0x1c32,	// (0x0006b683) list_single_recal_day_pane_g1_ParamLimits

0x1c32,	// (0x0006b683) list_single_recal_day_pane_g1

0x510b,	// (0x0006eb5c) list_single_recal_day_pane_g2_ParamLimits

0x510b,	// (0x0006eb5c) list_single_recal_day_pane_g2

0x5117,	// (0x0006eb68) list_single_recal_day_pane_g3_ParamLimits

0x5117,	// (0x0006eb68) list_single_recal_day_pane_g3

0x5123,	// (0x0006eb74) list_single_recal_day_pane_g4_ParamLimits

0x5123,	// (0x0006eb74) list_single_recal_day_pane_g4

0x5131,	// (0x0006eb82) list_single_recal_day_pane_g5_ParamLimits

0x5131,	// (0x0006eb82) list_single_recal_day_pane_g5

0x5147,	// (0x0006eb98) list_single_recal_day_pane_g6_ParamLimits

0x5147,	// (0x0006eb98) list_single_recal_day_pane_g6

0x0004,

0xfc9d,	// (0x000796ee) list_single_recal_day_pane_g_ParamLimits

0xfc9d,	// (0x000796ee) list_single_recal_day_pane_g

0x515b,	// (0x0006ebac) list_single_recal_day_pane_t1

0x516d,	// (0x0006ebbe) list_single_recal_day_pane_t2

0x0001,

0xfca8,	// (0x000796f9) list_single_recal_day_pane_t

0xbb83,	// (0x000755d4) ncimui_query_button_pane_ParamLimits

0xbb83,	// (0x000755d4) ncimui_query_button_pane

0xbb93,	// (0x000755e4) ncimui_query_button_pane_t1_ParamLimits

0xbb93,	// (0x000755e4) ncimui_query_button_pane_t1

0x1c3e,	// (0x0006b68f) ncimui_query_button_pane_t2_ParamLimits

0x1c3e,	// (0x0006b68f) ncimui_query_button_pane_t2

0x0001,

0xfcad,	// (0x000796fe) ncimui_query_button_pane_t_ParamLimits

0xfcad,	// (0x000796fe) ncimui_query_button_pane_t

0xbba6,	// (0x000755f7) query_button_pane_ParamLimits

0xbba6,	// (0x000755f7) query_button_pane

0x24ab,	// (0x0006befc) bg_button_pane_cp0028

0x1c51,	// (0x0006b6a2) query_button_pane_t1

0x7ee2,	// (0x00071933) main_tport_pane_ParamLimits

0xb7ed,	// (0x0007523e) bg_popup_window_pane_cp01_ParamLimits

0xb7ed,	// (0x0007523e) bg_popup_window_pane_cp01

0xb7fb,	// (0x0007524c) heading_pane_cp08_ParamLimits

0xb7fb,	// (0x0007524c) heading_pane_cp08

0xb809,	// (0x0007525a) heading_pane_cp07_ParamLimits

0xb809,	// (0x0007525a) heading_pane_cp07

0xb878,	// (0x000752c9) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x0007965e) cell_tport_appsw_pane_g

0x49eb,	// (0x0006e43c) input_candi_list_open_g1

0x3532,	// (0x0006cf83) list_cale_time_pane_g6_ParamLimits

0x3532,	// (0x0006cf83) list_cale_time_pane_g6

0x836f,	// (0x00071dc0) aid_size_touch_calib_1_ParamLimits

0x836f,	// (0x00071dc0) aid_size_touch_calib_1

0x837b,	// (0x00071dcc) aid_size_touch_calib_2_ParamLimits

0x837b,	// (0x00071dcc) aid_size_touch_calib_2

0x8389,	// (0x00071dda) aid_size_touch_calib_3_ParamLimits

0x8389,	// (0x00071dda) aid_size_touch_calib_3

0x8399,	// (0x00071dea) aid_size_touch_calib_4_ParamLimits

0x8399,	// (0x00071dea) aid_size_touch_calib_4

0x83a7,	// (0x00071df8) main_touch_calib_button_group_pane_ParamLimits

0x83a7,	// (0x00071df8) main_touch_calib_button_group_pane

0x83b5,	// (0x00071e06) main_touch_calib_pane_g1_ParamLimits

0x83c1,	// (0x00071e12) main_touch_calib_pane_g2_ParamLimits

0x83cd,	// (0x00071e1e) main_touch_calib_pane_g3_ParamLimits

0x83d9,	// (0x00071e2a) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x000790a4) main_touch_calib_pane_g_ParamLimits

0x83e5,	// (0x00071e36) main_touch_calib_pane_t1_ParamLimits

0x83fe,	// (0x00071e4f) main_touch_calib_pane_t2_ParamLimits

0x8417,	// (0x00071e68) main_touch_calib_pane_t3_ParamLimits

0x842d,	// (0x00071e7e) main_touch_calib_pane_t4_ParamLimits

0x8443,	// (0x00071e94) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x000790ad) main_touch_calib_pane_t_ParamLimits

0xec49,	// (0x0007869a) list_single_fp_cale_pane_g3_ParamLimits

0xec49,	// (0x0007869a) list_single_fp_cale_pane_g3

0x2761,	// (0x0006c1b2) bg_button_pane_cp012_ParamLimits

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp03_ParamLimits

0xa2c4,	// (0x00073d15) cell_vitu2_function_top_pane_g1_ParamLimits

0x2761,	// (0x0006c1b2) bg_vkb2_func_pane_cp04_ParamLimits

0xb11d,	// (0x00074b6e) main_ncimui_button_group_pane_ParamLimits

0xb11d,	// (0x00074b6e) main_ncimui_button_group_pane

0xb183,	// (0x00074bd4) main_ncimui_pane_t3_ParamLimits

0xb183,	// (0x00074bd4) main_ncimui_pane_t3

0x1a2a,	// (0x0006b47b) phacti_button_group_pane

0x1bcc,	// (0x0006b61d) aid_size_list_single_double_ParamLimits

0xbb12,	// (0x00075563) popup_ezdial_listscroll_window_ParamLimits

0x1bd8,	// (0x0006b629) popup_number_entry_window_cp01_ParamLimits

0xbbb3,	// (0x00075604) phacti_button_pane_ParamLimits

0xbbb3,	// (0x00075604) phacti_button_pane

0x24ab,	// (0x0006befc) bg_button_pane_cp14

0x1c5f,	// (0x0006b6b0) phacti_button_pane_t1

0xbbc4,	// (0x00075615) main_touch_calib_button_pane_ParamLimits

0xbbc4,	// (0x00075615) main_touch_calib_button_pane

0x2f75,	// (0x0006c9c6) bg_button_pane_cp18_ParamLimits

0x2f75,	// (0x0006c9c6) bg_button_pane_cp18

0x1c6d,	// (0x0006b6be) main_touch_calib_button_pane_t1_ParamLimits

0x1c6d,	// (0x0006b6be) main_touch_calib_button_pane_t1

0x1c83,	// (0x0006b6d4) main_touch_calib_button_pane_t2_ParamLimits

0x1c83,	// (0x0006b6d4) main_touch_calib_button_pane_t2

0x0001,

0xfcb2,	// (0x00079703) main_touch_calib_button_pane_t_ParamLimits

0xfcb2,	// (0x00079703) main_touch_calib_button_pane_t

0x24ab,	// (0x0006befc) cell_ncimui_button_pane

0x24ab,	// (0x0006befc) bg_button_pane_cp032

0x1ca1,	// (0x0006b6f2) cell_ncimui_button_pane_t1

0x93f8,	// (0x00072e49) image3_infobar_pane_ParamLimits

0x93f8,	// (0x00072e49) image3_infobar_pane

0xb4c5,	// (0x00074f16) fs_bigclock_status_pane_ParamLimits

0xb4c5,	// (0x00074f16) fs_bigclock_status_pane

0xb4d2,	// (0x00074f23) main_fs_bigclock_clock_pane_ParamLimits

0xb4d2,	// (0x00074f23) main_fs_bigclock_clock_pane

0xb4e6,	// (0x00074f37) main_fs_bigclock_indi_pane_ParamLimits

0xb4e6,	// (0x00074f37) main_fs_bigclock_indi_pane

0xb50e,	// (0x00074f5f) main_fs_bigclock_swipe_pane_ParamLimits

0xb50e,	// (0x00074f5f) main_fs_bigclock_swipe_pane

0x24ab,	// (0x0006befc) main_fs_clock_dumped_data

0x1210,	// (0x0006ac61) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1210,	// (0x0006ac61) list_single_fs_bigclock_indicator_pane_g1

0x122b,	// (0x0006ac7c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x122b,	// (0x0006ac7c) list_single_fs_bigclock_indicator_pane_g2

0x1245,	// (0x0006ac96) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1245,	// (0x0006ac96) list_single_fs_bigclock_indicator_pane_g3

0x125f,	// (0x0006acb0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x125f,	// (0x0006acb0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x000795b2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x000795b2) list_single_fs_bigclock_indicator_pane_g

0x128a,	// (0x0006acdb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x128a,	// (0x0006acdb) list_single_fs_bigclock_indicator_pane_t1

0x12b2,	// (0x0006ad03) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x12b2,	// (0x0006ad03) list_single_fs_bigclock_indicator_pane_t2

0x12da,	// (0x0006ad2b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x12da,	// (0x0006ad2b) list_single_fs_bigclock_indicator_pane_t3

0x1302,	// (0x0006ad53) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1302,	// (0x0006ad53) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x000795bd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x000795bd) list_single_fs_bigclock_indicator_pane_t

0x1caf,	// (0x0006b700) image3_infobar_fav_pane_ParamLimits

0x1caf,	// (0x0006b700) image3_infobar_fav_pane

0x1cbf,	// (0x0006b710) image3_infobar_loc_pane_ParamLimits

0x1cbf,	// (0x0006b710) image3_infobar_loc_pane

0x1cd3,	// (0x0006b724) image3_infobar_time_pane_ParamLimits

0x1cd3,	// (0x0006b724) image3_infobar_time_pane

0x2f17,	// (0x0006c968) image3_infobar_time_pane_g1

0x1ce3,	// (0x0006b734) image3_infobar_time_pane_t1

0x2f17,	// (0x0006c968) image3_infobar_loc_pane_g1

0x1cf1,	// (0x0006b742) image3_infobar_loc_pane_g2

0x0001,

0xfcb7,	// (0x00079708) image3_infobar_loc_pane_g

0x1cf9,	// (0x0006b74a) image3_infobar_loc_pane_t1

0x2f17,	// (0x0006c968) image3_infobar_fav_pane_g1

0x1d07,	// (0x0006b758) image3_infobar_fav_pane_g2

0x0001,

0xfcbc,	// (0x0007970d) image3_infobar_fav_pane_g

0x1d0f,	// (0x0006b760) fs_bigclock_status_battery_pane

0x1d18,	// (0x0006b769) fs_bigclock_status_signal_pane

0x1d21,	// (0x0006b772) fs_bigclock_status_title_pane

0x1d2a,	// (0x0006b77b) fs_bigclock_status_signal_pane_g1

0x1d33,	// (0x0006b784) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc1,	// (0x00079712) fs_bigclock_status_signal_pane_g

0x1d3b,	// (0x0006b78c) fs_bigclock_status_battery_pane_g1

0x1d44,	// (0x0006b795) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc6,	// (0x00079717) fs_bigclock_status_battery_pane_g

0x1d4c,	// (0x0006b79d) fs_bigclock_status_title_pane_t1

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g1

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g2

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g3

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g4

0x0003,

0xfccb,	// (0x0007971c) main_fs_bigclock_clock_pane_g

0xbbe0,	// (0x00075631) main_fs_bigclock_clock_pane_t1

0xbbf4,	// (0x00075645) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd4,	// (0x00079725) main_fs_bigclock_clock_pane_t

0x1d5a,	// (0x0006b7ab) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1d5a,	// (0x0006b7ab) list_single_fs_bigclock_indicator_pane

0x1d6b,	// (0x0006b7bc) list_single_fs_bigclock_pane_ParamLimits

0x1d6b,	// (0x0006b7bc) list_single_fs_bigclock_pane

0x1d91,	// (0x0006b7e2) main_fs_bigclock_indicator_pane_t1

0x1da0,	// (0x0006b7f1) list_single_fs_bigclock_pane_g1

0x1da8,	// (0x0006b7f9) list_single_fs_bigclock_pane_t1

0x2f17,	// (0x0006c968) main_fs_bigclock_swipe_pane_g1

0x1deb,	// (0x0006b83c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce5,	// (0x00079736) main_fs_bigclock_swipe_pane_g

0x1df3,	// (0x0006b844) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1df3,	// (0x0006b844) main_fs_bigclock_swipe_pane_t1

0x7231,	// (0x00070c82) call_type_pane_ParamLimits

0x24ab,	// (0x0006befc) main_btmg_pane

0x4fb8,	// (0x0006ea09) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4fb8,	// (0x0006ea09) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc58,	// (0x000796a9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc58,	// (0x000796a9) list_single_cale_mrui_row_pane_g

0x50e8,	// (0x0006eb39) list_recal_vselct_arw_lo_pane

0x1c2a,	// (0x0006b67b) list_recal_vselct_arw_up_pane

0x50f0,	// (0x0006eb41) list_recal_vselct_pane

0xbc4b,	// (0x0007569c) btmg_button_pane

0xbc57,	// (0x000756a8) main_btmg_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp044

0x1e10,	// (0x0006b861) btmg_button_pane_t1

0xe4d8,	// (0x00077f29) aid_listscroll_gen

0x2761,	// (0x0006c1b2) main_cntbar_detail_pane

0x195b,	// (0x0006b3ac) list_cmail_folder_pane

0xe470,	// (0x00077ec1) sp_fs_scroll_pane_cp03_ParamLimits

0x517f,	// (0x0006ebd0) list_single_fs_dyc_pane_cp01_ParamLimits

0x517f,	// (0x0006ebd0) list_single_fs_dyc_pane_cp01

0x1e1e,	// (0x0006b86f) aid_size_cmail_indent

0x51a7,	// (0x0006ebf8) list_single_dyc_row_pane_cp01

0xbc7f,	// (0x000756d0) cntbar_detail_list_pane_ParamLimits

0xbc7f,	// (0x000756d0) cntbar_detail_list_pane

0xbcb9,	// (0x0007570a) main_cntbar_detail_cont_pane_ParamLimits

0xbcb9,	// (0x0007570a) main_cntbar_detail_cont_pane

0x7225,	// (0x00070c76) scroll_pane_cp032_ParamLimits

0x7225,	// (0x00070c76) scroll_pane_cp032

0xbcc5,	// (0x00075716) cntbar_detail_list_event_pane_ParamLimits

0xbcc5,	// (0x00075716) cntbar_detail_list_event_pane

0xbc8b,	// (0x000756dc) cntbar_detail_list_shct_pane

0x33f4,	// (0x0006ce45) aid_list_gen

0x1e27,	// (0x0006b878) aid_scroll

0x1e30,	// (0x0006b881) aid_size_touch_scroll_bar

0xbcd9,	// (0x0007572a) aid_list_double

0x1e39,	// (0x0006b88a) aid_list_single

0xbce2,	// (0x00075733) aid_list_single_lg

0x51b0,	// (0x0006ec01) aid_list_z_g_a_sm

0xbceb,	// (0x0007573c) aid_list_z_g_d

0x51b8,	// (0x0006ec09) aid_txt_z_prm

0x51c6,	// (0x0006ec17) aid_txt_z_prm_cp01

0x51d4,	// (0x0006ec25) aid_txt_z_sec

0xbcf3,	// (0x00075744) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbcf3,	// (0x00075744) main_cntbar_detail_cont_pane_g1

0xbd00,	// (0x00075751) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbd00,	// (0x00075751) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcea,	// (0x0007973b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcea,	// (0x0007973b) main_cntbar_detail_cont_pane_g

0x1e42,	// (0x0006b893) main_cntbar_detail_cont_pane_t1

0x1e50,	// (0x0006b8a1) main_cntbar_detail_cont_pane_t2

0x1e5e,	// (0x0006b8af) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcef,	// (0x00079740) main_cntbar_detail_cont_pane_t

0xbd0c,	// (0x0007575d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbd0c,	// (0x0007575d) cell_cntbar_detail_list_shct_pane

0x1e6c,	// (0x0006b8bd) cntbar_detail_list_shct_pane_g1

0x1e75,	// (0x0006b8c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf6,	// (0x00079747) cntbar_detail_list_shct_pane_g

0xbd20,	// (0x00075771) cntbar_detail_list_event_pane_g1_ParamLimits

0xbd20,	// (0x00075771) cntbar_detail_list_event_pane_g1

0xbd2c,	// (0x0007577d) cntbar_detail_list_event_pane_g2_ParamLimits

0xbd2c,	// (0x0007577d) cntbar_detail_list_event_pane_g2

0x0005,

0xfcfb,	// (0x0007974c) cntbar_detail_list_event_pane_g_ParamLimits

0xfcfb,	// (0x0007974c) cntbar_detail_list_event_pane_g

0xbd98,	// (0x000757e9) cntbar_detail_list_event_pane_t1_ParamLimits

0xbd98,	// (0x000757e9) cntbar_detail_list_event_pane_t1

0xbdad,	// (0x000757fe) cntbar_detail_list_event_pane_t2_ParamLimits

0xbdad,	// (0x000757fe) cntbar_detail_list_event_pane_t2

0x0002,

0xfd08,	// (0x00079759) cntbar_detail_list_event_pane_t_ParamLimits

0xfd08,	// (0x00079759) cntbar_detail_list_event_pane_t

0x2f17,	// (0x0006c968) cell_cntbar_detail_list_shct_pane_g1

0x3b39,	// (0x0006d58a) navi_pane_mv_g3

0x2761,	// (0x0006c1b2) main_cntbar_detail_pane_ParamLimits

0x24ab,	// (0x0006befc) main_notif_wgt_pane

0x90c3,	// (0x00072b14) aid_tch_main_mp4_pane_g4

0x938a,	// (0x00072ddb) popup_slider_window_cp02

0x50de,	// (0x0006eb2f) list_recal_day_event_pane

0xbc5f,	// (0x000756b0) cntbar_detail_btn_pane_ParamLimits

0xbc5f,	// (0x000756b0) cntbar_detail_btn_pane

0xbc6f,	// (0x000756c0) cntbar_detail_btn_pane_cp01_ParamLimits

0xbc6f,	// (0x000756c0) cntbar_detail_btn_pane_cp01

0xbc8b,	// (0x000756dc) cntbar_detail_list_shct_pane_ParamLimits

0xbc97,	// (0x000756e8) cntbar_detail_pane_g1_ParamLimits

0xbc97,	// (0x000756e8) cntbar_detail_pane_g1

0xbca3,	// (0x000756f4) cntbar_detail_pane_t1_ParamLimits

0xbca3,	// (0x000756f4) cntbar_detail_pane_t1

0xbd38,	// (0x00075789) cntbar_detail_list_event_pane_g3_ParamLimits

0xbd38,	// (0x00075789) cntbar_detail_list_event_pane_g3

0xbd50,	// (0x000757a1) cntbar_detail_list_event_pane_g4_ParamLimits

0xbd50,	// (0x000757a1) cntbar_detail_list_event_pane_g4

0xbd68,	// (0x000757b9) cntbar_detail_list_event_pane_g5_ParamLimits

0xbd68,	// (0x000757b9) cntbar_detail_list_event_pane_g5

0xbd80,	// (0x000757d1) cntbar_detail_list_event_pane_g6_ParamLimits

0xbd80,	// (0x000757d1) cntbar_detail_list_event_pane_g6

0xbdc2,	// (0x00075813) cntbar_detail_list_event_pane_t3_ParamLimits

0xbdc2,	// (0x00075813) cntbar_detail_list_event_pane_t3

0xbdd4,	// (0x00075825) popup_notif_wgt_window_ParamLimits

0xbdd4,	// (0x00075825) popup_notif_wgt_window

0xbde4,	// (0x00075835) popup_submenu_window_cp01_ParamLimits

0xbde4,	// (0x00075835) popup_submenu_window_cp01

0x318d,	// (0x0006cbde) bg_popup_window_pane_cp10

0x1e7e,	// (0x0006b8cf) listscroll_notif_wgt_pane

0x1e90,	// (0x0006b8e1) list_notif_wgt_window

0x1ed1,	// (0x0006b922) scroll_pane_cp033

0xbdf6,	// (0x00075847) list_notif_wgt_row_pane_ParamLimits

0xbdf6,	// (0x00075847) list_notif_wgt_row_pane

0x1eda,	// (0x0006b92b) aid_size_list_notif_wgt_del

0x1ee7,	// (0x0006b938) list_notif_wgt_row_pane_g1

0x1ef3,	// (0x0006b944) list_notif_wgt_row_pane_g2

0x1f02,	// (0x0006b953) list_notif_wgt_row_pane_g3

0x0002,

0xfd0f,	// (0x00079760) list_notif_wgt_row_pane_g

0x1f0f,	// (0x0006b960) list_notif_wgt_row_pane_t1

0x1f25,	// (0x0006b976) list_notif_wgt_row_pane_t2

0x1f37,	// (0x0006b988) list_notif_wgt_row_pane_t3

0x0002,

0xfd16,	// (0x00079767) list_notif_wgt_row_pane_t

0x0601,	// (0x0006a052) list_recal_day_event_pane_g1

0x1f49,	// (0x0006b99a) list_recal_day_event_pane_t1

0x24ab,	// (0x0006befc) bg_button_pane_cp045

0x1f58,	// (0x0006b9a9) cntbar_detail_btn_pane_t1

0xd41d,	// (0x00076e6e) main_callh_pane_ParamLimits

0xd41d,	// (0x00076e6e) main_callh_pane

0x24ab,	// (0x0006befc) main_coverflow0_pane

0x24ab,	// (0x0006befc) main_wgtman_pane

0xb526,	// (0x00074f77) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb526,	// (0x00074f77) main_fs_bigclock_unlock_btn_pane

0xb870,	// (0x000752c1) bg_button_pane_cp16

0xb880,	// (0x000752d1) cell_tport_appsw_pane_g3

0xbe08,	// (0x00075859) cf0_flow_pane_ParamLimits

0xbe08,	// (0x00075859) cf0_flow_pane

0x1f66,	// (0x0006b9b7) listscroll_cf0_pane

0x1f71,	// (0x0006b9c2) main_cf0_pane_g1

0xbe17,	// (0x00075868) main_cf0_pane_t1_ParamLimits

0xbe17,	// (0x00075868) main_cf0_pane_t1

0xbe2b,	// (0x0007587c) main_cf0_pane_t2_ParamLimits

0xbe2b,	// (0x0007587c) main_cf0_pane_t2

0x0001,

0xfd22,	// (0x00079773) main_cf0_pane_t_ParamLimits

0xfd22,	// (0x00079773) main_cf0_pane_t

0x1f83,	// (0x0006b9d4) scroll_pane_cp11

0xbe3f,	// (0x00075890) cf0_flow_pane_g1

0xbe47,	// (0x00075898) cf0_flow_pane_g2

0x0001,

0xfd27,	// (0x00079778) cf0_flow_pane_g

0xbe4f,	// (0x000758a0) cf0_flow_pane_t1

0x24ab,	// (0x0006befc) main_call6_pane

0x24ab,	// (0x0006befc) main_calllock_pane

0xbe5d,	// (0x000758ae) call6_btn_grp_pane_ParamLimits

0xbe5d,	// (0x000758ae) call6_btn_grp_pane

0xbe6c,	// (0x000758bd) call6_pane_g1_ParamLimits

0xbe6c,	// (0x000758bd) call6_pane_g1

0xbe7c,	// (0x000758cd) popup_call6_1st_window_ParamLimits

0xbe7c,	// (0x000758cd) popup_call6_1st_window

0xbe8a,	// (0x000758db) popup_call6_2nd_window_ParamLimits

0xbe8a,	// (0x000758db) popup_call6_2nd_window

0xbe98,	// (0x000758e9) cell_call6_btn_pane_ParamLimits

0xbe98,	// (0x000758e9) cell_call6_btn_pane

0x318d,	// (0x0006cbde) bg_popup_call2_in_pane_cp03

0x1f8e,	// (0x0006b9df) popup_call6_1st_window_g1

0x1f96,	// (0x0006b9e7) popup_call6_1st_window_g2

0x1f9e,	// (0x0006b9ef) popup_call6_1st_window_g3

0x0002,

0xfd2c,	// (0x0007977d) popup_call6_1st_window_g

0x1fa6,	// (0x0006b9f7) popup_call6_1st_window_t1

0x1fb5,	// (0x0006ba06) popup_call6_1st_window_t2

0x1fc3,	// (0x0006ba14) popup_call6_1st_window_t3

0x0002,

0xfd33,	// (0x00079784) popup_call6_1st_window_t

0x318d,	// (0x0006cbde) bg_popup_call2_in_pane_cp04

0x1fd1,	// (0x0006ba22) popup_call6_2nd_window_g1

0x1fd9,	// (0x0006ba2a) popup_call6_2nd_window_g2

0x1fe1,	// (0x0006ba32) popup_call6_2nd_window_g3

0x0002,

0xfd3a,	// (0x0007978b) popup_call6_2nd_window_g

0x1fe9,	// (0x0006ba3a) popup_call6_2nd_window_t1

0x24ab,	// (0x0006befc) bg_button_pane_cp15

0x202b,	// (0x0006ba7c) cell_call6_btn_pane_g1

0x249c,	// (0x0006beed) cell_call6_btn_pane_t1

0xbea7,	// (0x000758f8) listscroll_wgtman_pane_ParamLimits

0xbea7,	// (0x000758f8) listscroll_wgtman_pane

0xbec3,	// (0x00075914) wgtman_btn_pane_ParamLimits

0xbec3,	// (0x00075914) wgtman_btn_pane

0x3940,	// (0x0006d391) aid_scroll_copy1

0x1ff8,	// (0x0006ba49) list_wgtman_pane

0xbef8,	// (0x00075949) wgtman_btn_pane_g1_ParamLimits

0xbef8,	// (0x00075949) wgtman_btn_pane_g1

0xbf20,	// (0x00075971) wgtman_btn_pane_t1_ParamLimits

0xbf20,	// (0x00075971) wgtman_btn_pane_t1

0x2002,	// (0x0006ba53) wgtman_btn_pane_t2_ParamLimits

0x2002,	// (0x0006ba53) wgtman_btn_pane_t2

0x0001,

0xfd41,	// (0x00079792) wgtman_btn_pane_t_ParamLimits

0xfd41,	// (0x00079792) wgtman_btn_pane_t

0xbf57,	// (0x000759a8) listrow_wgtman_pane_ParamLimits

0xbf57,	// (0x000759a8) listrow_wgtman_pane

0xbf72,	// (0x000759c3) listrow_wgtman_pane_g1

0xbf7f,	// (0x000759d0) listrow_wgtman_pane_g2

0x0001,

0xfd46,	// (0x00079797) listrow_wgtman_pane_g

0x51e2,	// (0x0006ec33) listrow_wgtman_pane_t1

0x51fa,	// (0x0006ec4b) listrow_wgtman_pane_t2

0x0001,

0xfd4b,	// (0x0007979c) listrow_wgtman_pane_t

0x5220,	// (0x0006ec71) wait_bar_pane_cp09

0x2019,	// (0x0006ba6a) main_calllock_btn_pane

0x2023,	// (0x0006ba74) main_calllock_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp17

0x202b,	// (0x0006ba7c) main_calllock_btn_pane_g1

0x2034,	// (0x0006ba85) main_calllock_btn_pane_t1

0x24ab,	// (0x0006befc) main_dialer3_pane

0x24ab,	// (0x0006befc) main_fmrd2_pane

0x2f17,	// (0x0006c968) main_fs_bigclock_unlock_btn_pane_g1

0xbfa5,	// (0x000759f6) main_fs_bigclock_unlock_btn_pane_t1

0xbfb3,	// (0x00075a04) area_fmrd2_info_pane_ParamLimits

0xbfb3,	// (0x00075a04) area_fmrd2_info_pane

0xbfc1,	// (0x00075a12) area_fmrd2_visual_pane_ParamLimits

0xbfc1,	// (0x00075a12) area_fmrd2_visual_pane

0xbfcf,	// (0x00075a20) fmrd2_indi_pane_ParamLimits

0xbfcf,	// (0x00075a20) fmrd2_indi_pane

0xbfdc,	// (0x00075a2d) area_fmrd2_visual_pane_g1

0xbfe4,	// (0x00075a35) area_fmrd2_visual_pane_t1

0xbff4,	// (0x00075a45) area_fmrd2_visual_pane_t2

0xc004,	// (0x00075a55) area_fmrd2_visual_pane_t3

0x0002,

0xfd55,	// (0x000797a6) area_fmrd2_visual_pane_t

0xc014,	// (0x00075a65) area_fmrd2_info_pane_g1

0xc01c,	// (0x00075a6d) area_fmrd2_info_pane_t1

0xc02c,	// (0x00075a7d) area_fmrd2_info_pane_t2

0xc03c,	// (0x00075a8d) area_fmrd2_info_pane_t3

0xc04c,	// (0x00075a9d) area_fmrd2_info_pane_t4

0x0003,

0xfd5c,	// (0x000797ad) area_fmrd2_info_pane_t

0xc05a,	// (0x00075aab) fmrd2_indi_pane_t1

0xc06a,	// (0x00075abb) fmrd2_indi_pane_t2

0xc07a,	// (0x00075acb) fmrd2_indi_pane_t3

0x0002,

0xfd65,	// (0x000797b6) fmrd2_indi_pane_t

0x126e,	// (0x0006acbf) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x126e,	// (0x0006acbf) list_single_fs_bigclock_indicator_pane_g5

0x131f,	// (0x0006ad70) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x131f,	// (0x0006ad70) list_single_fs_bigclock_indicator_pane_t5

0x1706,	// (0x0006b157) aid_cell_bcale_month_pane_ParamLimits

0x1706,	// (0x0006b157) aid_cell_bcale_month_pane

0x1706,	// (0x0006b157) bcale_month_pane_ParamLimits

0x1706,	// (0x0006b157) bcale_month_pane

0x1743,	// (0x0006b194) bcale_preview_pane_ParamLimits

0x1743,	// (0x0006b194) bcale_preview_pane

0x1da8,	// (0x0006b7f9) list_single_fs_bigclock_pane_t1_ParamLimits

0x1dc7,	// (0x0006b818) list_single_fs_bigclock_pane_t2_ParamLimits

0x1dc7,	// (0x0006b818) list_single_fs_bigclock_pane_t2

0x0001,

0xfce0,	// (0x00079731) list_single_fs_bigclock_pane_t_ParamLimits

0xfce0,	// (0x00079731) list_single_fs_bigclock_pane_t

0xbf9d,	// (0x000759ee) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd50,	// (0x000797a1) main_fs_bigclock_unlock_btn_pane_g

0xc088,	// (0x00075ad9) aid_dia3_key_size_ParamLimits

0xc088,	// (0x00075ad9) aid_dia3_key_size

0xc094,	// (0x00075ae5) aid_dia3_listrow_size_ParamLimits

0xc094,	// (0x00075ae5) aid_dia3_listrow_size

0xc0a4,	// (0x00075af5) dia3_keypad_fun_pane_ParamLimits

0xc0a4,	// (0x00075af5) dia3_keypad_fun_pane

0xc0b6,	// (0x00075b07) dia3_keypad_num_pane_ParamLimits

0xc0b6,	// (0x00075b07) dia3_keypad_num_pane

0xc0c8,	// (0x00075b19) dia3_listscroll_pane_ParamLimits

0xc0c8,	// (0x00075b19) dia3_listscroll_pane

0xc0d6,	// (0x00075b27) dia3_numentry_pane_ParamLimits

0xc0d6,	// (0x00075b27) dia3_numentry_pane

0x2043,	// (0x0006ba94) dia3_list_pane

0x204e,	// (0x0006ba9f) scroll_pane_cp12

0x24ab,	// (0x0006befc) bg_dia3_numentry_pane

0xc0e4,	// (0x00075b35) dia3_numentry_pane_t1

0xc0f3,	// (0x00075b44) cell_dia3_key_num_pane

0xc0fb,	// (0x00075b4c) cell_dia3_key0_fun_pane_ParamLimits

0xc0fb,	// (0x00075b4c) cell_dia3_key0_fun_pane

0xc108,	// (0x00075b59) cell_dia3_key1_fun_pane_ParamLimits

0xc108,	// (0x00075b59) cell_dia3_key1_fun_pane

0xc115,	// (0x00075b66) dia3_listrow_pane

0x0fc1,	// (0x0006aa12) bg_dia3_numentry_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp21

0x2059,	// (0x0006baaa) cell_dia3_key_num_pane_t1

0x2067,	// (0x0006bab8) cell_dia3_key_num_pane_t2

0x2076,	// (0x0006bac7) cell_dia3_key_num_pane_t3

0x2085,	// (0x0006bad6) cell_dia3_key_num_pane_t4

0x0003,

0xfd6c,	// (0x000797bd) cell_dia3_key_num_pane_t

0x24ab,	// (0x0006befc) bg_button_pane_cp19

0xc122,	// (0x00075b73) cell_dia3_key0_fun_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp20

0xc12a,	// (0x00075b7b) cell_dia3_key1_fun_pane_g1

0xebef,	// (0x00078640) area_left_week_number_pane

0xebef,	// (0x00078640) area_top_day_name_pane

0xebef,	// (0x00078640) frame_month_view_pane

0xebef,	// (0x00078640) grid_month_view_pane

0xebef,	// (0x00078640) cell_top_day_name_pane_ParamLimits

0xebef,	// (0x00078640) cell_top_day_name_pane

0xebef,	// (0x00078640) cell_area_left_week_number_pane_ParamLimits

0xebef,	// (0x00078640) cell_area_left_week_number_pane

0xebef,	// (0x00078640) cell_month_view_pane_ParamLimits

0xebef,	// (0x00078640) cell_month_view_pane

0xebfb,	// (0x0007864c) frm_month_g1

0xebfb,	// (0x0007864c) frm_month_g2

0xebfb,	// (0x0007864c) frm_month_g3

0xebfb,	// (0x0007864c) frm_month_g4

0xebfb,	// (0x0007864c) frm_month_g5

0xebfb,	// (0x0007864c) frm_month_g6

0xebfb,	// (0x0007864c) frm_month_g7

0xebfb,	// (0x0007864c) frm_month_g8

0xebfb,	// (0x0007864c) frm_month_g9

0xebfb,	// (0x0007864c) frm_month_g10

0xebfb,	// (0x0007864c) frm_month_g11

0xebfb,	// (0x0007864c) frm_month_g12

0xebfb,	// (0x0007864c) frm_month_g13

0xebfb,	// (0x0007864c) frm_month_g14

0xebfb,	// (0x0007864c) frm_month_g15

0xebfb,	// (0x0007864c) frm_month_g16

0x000f,

0xfd75,	// (0x000797c6) frm_month_g

0x2094,	// (0x0006bae5) cell_top_day_name_pane_t1

0xebfb,	// (0x0007864c) cell_area_left_week_number_pane_g1

0x2094,	// (0x0006bae5) cell_area_left_week_number_pane_t1

0xebfb,	// (0x0007864c) cell_month_view_pane_g1

0x2094,	// (0x0006bae5) cell_month_view_pane_t1

0x24ab,	// (0x0006befc) main_fps_pane

0x1500,	// (0x0006af51) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1500,	// (0x0006af51) cmail_ddmenu_btn02_pane_cp1

0x151c,	// (0x0006af6d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x151c,	// (0x0006af6d) cmail_ddmenu_btn02_pane_cp2

0xbb53,	// (0x000755a4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbb53,	// (0x000755a4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc93,	// (0x000796e4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc93,	// (0x000796e4) cmail_ddmenu_btn02_pane_g

0xbb71,	// (0x000755c2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbb71,	// (0x000755c2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc98,	// (0x000796e9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc98,	// (0x000796e9) cmail_ddmenu_btn02_pane_t

0xc132,	// (0x00075b83) fps_text_pane_ParamLimits

0xc132,	// (0x00075b83) fps_text_pane

0xc13f,	// (0x00075b90) main_fps_pane_g1_ParamLimits

0xc13f,	// (0x00075b90) main_fps_pane_g1

0xc14d,	// (0x00075b9e) wait_bar_pane_cp010_ParamLimits

0xc14d,	// (0x00075b9e) wait_bar_pane_cp010

0xc159,	// (0x00075baa) fps_text_pane_t1_ParamLimits

0xc159,	// (0x00075baa) fps_text_pane_t1

0x9774,	// (0x000731c5) cam4_image_uncrop_pane_g1

0x977d,	// (0x000731ce) cam4_image_uncrop_pane_g2

0x9786,	// (0x000731d7) cam4_image_uncrop_pane_g3

0x978f,	// (0x000731e0) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x00079236) cam4_image_uncrop_pane_g

0xc115,	// (0x00075b66) dia3_listrow_pane_ParamLimits

0x24ab,	// (0x0006befc) main_phob2_pane

0xb852,	// (0x000752a3) cell_tport_appsw_pane_cp02_ParamLimits

0xb852,	// (0x000752a3) cell_tport_appsw_pane_cp02

0xb861,	// (0x000752b2) cell_tport_appsw_pane_cp03_ParamLimits

0xb861,	// (0x000752b2) cell_tport_appsw_pane_cp03

0x24ab,	// (0x0006befc) phob2_contact_card_pane

0x24ab,	// (0x0006befc) phob2_listscroll_pane

0x20a6,	// (0x0006baf7) phob2_list_pane

0x1bed,	// (0x0006b63e) scroll_pane_cp034

0xc172,	// (0x00075bc3) phob2_cc_data_pane_ParamLimits

0xc172,	// (0x00075bc3) phob2_cc_data_pane

0xc18c,	// (0x00075bdd) phob2_cc_listscroll_pane_ParamLimits

0xc18c,	// (0x00075bdd) phob2_cc_listscroll_pane

0xbf57,	// (0x000759a8) list_double_large_graphic_phob2_pane_ParamLimits

0xbf57,	// (0x000759a8) list_double_large_graphic_phob2_pane

0xc1a6,	// (0x00075bf7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc1a6,	// (0x00075bf7) list_double_large_graphic_phob2_pane_g1

0x5232,	// (0x0006ec83) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5232,	// (0x0006ec83) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd96,	// (0x000797e7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd96,	// (0x000797e7) list_double_large_graphic_phob2_pane_g

0x524a,	// (0x0006ec9b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x524a,	// (0x0006ec9b) list_double_large_graphic_phob2_pane_t1

0x525f,	// (0x0006ecb0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x525f,	// (0x0006ecb0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9f,	// (0x000797f0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9f,	// (0x000797f0) list_double_large_graphic_phob2_pane_t

0x2ecb,	// (0x0006c91c) list_highlight_pane_cp024

0x20ae,	// (0x0006baff) phob2_cc_button_pane

0xc1c1,	// (0x00075c12) phob2_cc_data_pane_g1_ParamLimits

0xc1c1,	// (0x00075c12) phob2_cc_data_pane_g1

0xc1d0,	// (0x00075c21) phob2_cc_data_pane_g2_ParamLimits

0xc1d0,	// (0x00075c21) phob2_cc_data_pane_g2

0x0001,

0xfda4,	// (0x000797f5) phob2_cc_data_pane_g_ParamLimits

0xfda4,	// (0x000797f5) phob2_cc_data_pane_g

0xc1df,	// (0x00075c30) phob2_cc_data_pane_t1_ParamLimits

0xc1df,	// (0x00075c30) phob2_cc_data_pane_t1

0xc1f4,	// (0x00075c45) phob2_cc_data_pane_t2_ParamLimits

0xc1f4,	// (0x00075c45) phob2_cc_data_pane_t2

0xc209,	// (0x00075c5a) phob2_cc_data_pane_t3_ParamLimits

0xc209,	// (0x00075c5a) phob2_cc_data_pane_t3

0x0002,

0xfda9,	// (0x000797fa) phob2_cc_data_pane_t_ParamLimits

0xfda9,	// (0x000797fa) phob2_cc_data_pane_t

0x20b6,	// (0x0006bb07) phob2_cc_list_pane_ParamLimits

0x20b6,	// (0x0006bb07) phob2_cc_list_pane

0x0698,	// (0x0006a0e9) scroll_pane_cp035_ParamLimits

0x0698,	// (0x0006a0e9) scroll_pane_cp035

0x2761,	// (0x0006c1b2) bg_button_pane_cp033

0x20c2,	// (0x0006bb13) phob2_cc_button_pane_g1

0x20ce,	// (0x0006bb1f) phob2_cc_button_pane_t1

0x20e3,	// (0x0006bb34) phob2_cc_button_pane_t2

0x0001,

0xfdb0,	// (0x00079801) phob2_cc_button_pane_t

0xc21e,	// (0x00075c6f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc21e,	// (0x00075c6f) list_double_large_graphic_phob2_cc_pane

0xc28c,	// (0x00075cdd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc28c,	// (0x00075cdd) list_double_large_graphic_phob2_cc_pane_g1

0xc29d,	// (0x00075cee) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc29d,	// (0x00075cee) list_double_large_graphic_phob2_cc_pane_g2

0x5274,	// (0x0006ecc5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5274,	// (0x0006ecc5) list_double_large_graphic_phob2_cc_pane_g3

0x5280,	// (0x0006ecd1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5280,	// (0x0006ecd1) list_double_large_graphic_phob2_cc_pane_g4

0x528c,	// (0x0006ecdd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x528c,	// (0x0006ecdd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb5,	// (0x00079806) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb5,	// (0x00079806) list_double_large_graphic_phob2_cc_pane_g

0x5298,	// (0x0006ece9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5298,	// (0x0006ece9) list_double_large_graphic_phob2_cc_pane_t1

0x52c1,	// (0x0006ed12) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x52c1,	// (0x0006ed12) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc0,	// (0x00079811) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc0,	// (0x00079811) list_double_large_graphic_phob2_cc_pane_t

0x20f5,	// (0x0006bb46) list_highlight_pane_cp025_ParamLimits

0x20f5,	// (0x0006bb46) list_highlight_pane_cp025

0x2761,	// (0x0006c1b2) bg_button_pane_cp033_ParamLimits

0x20c2,	// (0x0006bb13) phob2_cc_button_pane_g1_ParamLimits

0x20ce,	// (0x0006bb1f) phob2_cc_button_pane_t1_ParamLimits

0x20e3,	// (0x0006bb34) phob2_cc_button_pane_t2_ParamLimits

0xfdb0,	// (0x00079801) phob2_cc_button_pane_t_ParamLimits

0x55db,	// (0x0006f02c) popup_wgtman_window

0x042c,	// (0x00069e7d) scroll_pane_cp038

0xbee0,	// (0x00075931) wgtman_btn_pane_cp_01_ParamLimits

0xbee0,	// (0x00075931) wgtman_btn_pane_cp_01

0x2103,	// (0x0006bb54) wgtman_content_pane

0x210c,	// (0x0006bb5d) wgtman_heading_pane

0x24ab,	// (0x0006befc) bg_heading_pane_cp02

0x2115,	// (0x0006bb66) wgtman_heading_pane_g1

0x211d,	// (0x0006bb6e) wgtman_heading_pane_t1

0x212b,	// (0x0006bb7c) scroll_pane_cp036

0x2133,	// (0x0006bb84) wgtman_list_pane

0x213b,	// (0x0006bb8c) wgtman_list_pane_t1_ParamLimits

0x213b,	// (0x0006bb8c) wgtman_list_pane_t1

0x96d3,	// (0x00073124) cam4_grid_pane

0xa475,	// (0x00073ec6) bg_button_pane_cp015_ParamLimits

0xa48a,	// (0x00073edb) bg_button_pane_cp016_ParamLimits

0xa496,	// (0x00073ee7) bg_button_pane_cp017_ParamLimits

0xa4ee,	// (0x00073f3f) popup_vitu2_query_window_g3_ParamLimits

0xa4ee,	// (0x00073f3f) popup_vitu2_query_window_g3

0xa58f,	// (0x00073fe0) popup_vitu2_query_window_t6_ParamLimits

0xa58f,	// (0x00073fe0) popup_vitu2_query_window_t6

0xa5ba,	// (0x0007400b) popup_vitu2_query_window_t7_ParamLimits

0xa5ba,	// (0x0007400b) popup_vitu2_query_window_t7

0x1ebf,	// (0x0006b910) cam4_grid_pane_g1

0x1ec8,	// (0x0006b919) cam4_grid_pane_g2

0x2155,	// (0x0006bba6) cam4_grid_pane_g3

0x215e,	// (0x0006bbaf) cam4_grid_pane_g4

0x0003,

0xfdc5,	// (0x00079816) cam4_grid_pane_g

0x5fe8,	// (0x0006fa39) aid_placing_vt_slider_lsc_ParamLimits

0x6334,	// (0x0006fd85) vidtel_button_pane_ParamLimits

0x6334,	// (0x0006fd85) vidtel_button_pane

0x24ab,	// (0x0006befc) bg_button_pane_cp034

0x2169,	// (0x0006bbba) vidtel_button_pane_g1

0x2171,	// (0x0006bbc2) vidtel_button_pane_t1

0x05a3,	// (0x00069ff4) aid_size_vtel_slider_touch

0x0698,	// (0x0006a0e9) scroll_pane_cp039

0xb2de,	// (0x00074d2f) ncim_query_button_pane_cp01_ParamLimits

0xb2fd,	// (0x00074d4e) ncimui_query_pane_g1_ParamLimits

0x2761,	// (0x0006c1b2) input_focus_pane_cp012_ParamLimits

0x0fff,	// (0x0006aa50) ncim_query_entry_pane_t1_ParamLimits

0x0698,	// (0x0006a0e9) scroll_pane_cp039_ParamLimits

0x3a24,	// (0x0006d475) navi_pane_bcale_mc_g1

0x3a2c,	// (0x0006d47d) navi_pane_bcale_mc_t1

0x1550,	// (0x0006afa1) main_sp_fs_email_pane_g1

0x155c,	// (0x0006afad) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x00079627) main_sp_fs_email_pane_g

0x1aec,	// (0x0006b53d) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1aec,	// (0x0006b53d) list_single_cale_mrui_row_pane_g3

0x513d,	// (0x0006eb8e) list_single_recal_day_pane_g5_event_pane

0x5153,	// (0x0006eba4) list_single_recal_day_pane_g7

0x2187,	// (0x0006bbd8) list_recal_day_event_pane_cp01

0x2190,	// (0x0006bbe1) list_recal_vselct_arw_lo_pane_cp01

0x2198,	// (0x0006bbe9) list_recal_vselct_arw_up_pane_cp01

0x21a0,	// (0x0006bbf1) list_recal_vselct_pane_cp01

0x0601,	// (0x0006a052) list_recal_day_event_pane_cp01_g1

0x52ea,	// (0x0006ed3b) list_recal_day_event_pane_cp01_t1

0x515b,	// (0x0006ebac) list_single_recal_day_pane_t1_ParamLimits

0x516d,	// (0x0006ebbe) list_single_recal_day_pane_t2_ParamLimits

0xfca8,	// (0x000796f9) list_single_recal_day_pane_t_ParamLimits

0x2e5e,	// (0x0006c8af) bg_notes_pane_ParamLimits

0x2f53,	// (0x0006c9a4) list_notes_pane_ParamLimits

0x571b,	// (0x0006f16c) scroll_pane_cp06_ParamLimits

0x2f75,	// (0x0006c9c6) main_notes_pane_ParamLimits

0x2761,	// (0x0006c1b2) main_welc_pane

0xc2d7,	// (0x00075d28) main_welc_body_pane_ParamLimits

0xc2d7,	// (0x00075d28) main_welc_body_pane

0xc2f1,	// (0x00075d42) main_welc_opti_pane_ParamLimits

0xc2f1,	// (0x00075d42) main_welc_opti_pane

0xc346,	// (0x00075d97) main_welc_pane_t1_ParamLimits

0xc346,	// (0x00075d97) main_welc_pane_t1

0xc4e6,	// (0x00075f37) main_welc_body_row_pane_ParamLimits

0xc4e6,	// (0x00075f37) main_welc_body_row_pane

0x2ecb,	// (0x0006c91c) main_welc_opti_row_pane_ParamLimits

0x2ecb,	// (0x0006c91c) main_welc_opti_row_pane

0x21b2,	// (0x0006bc03) main_welc_opti_row_pane_g1

0xc50b,	// (0x00075f5c) main_welc_opti_row_pane_t1

0x21ba,	// (0x0006bc0b) main_welc_body_row_pane_t1

0x1e88,	// (0x0006b8d9) popup_notif_wgt_heading_pane

0x1eda,	// (0x0006b92b) aid_size_list_notif_wgt_del_ParamLimits

0x1ee7,	// (0x0006b938) list_notif_wgt_row_pane_g1_ParamLimits

0x1ef3,	// (0x0006b944) list_notif_wgt_row_pane_g2_ParamLimits

0x1f02,	// (0x0006b953) list_notif_wgt_row_pane_g3_ParamLimits

0xfd0f,	// (0x00079760) list_notif_wgt_row_pane_g_ParamLimits

0x1f0f,	// (0x0006b960) list_notif_wgt_row_pane_t1_ParamLimits

0x1f25,	// (0x0006b976) list_notif_wgt_row_pane_t2_ParamLimits

0x1f37,	// (0x0006b988) list_notif_wgt_row_pane_t3_ParamLimits

0xfd16,	// (0x00079767) list_notif_wgt_row_pane_t_ParamLimits

0xbf72,	// (0x000759c3) listrow_wgtman_pane_g1_ParamLimits

0xbf7f,	// (0x000759d0) listrow_wgtman_pane_g2_ParamLimits

0xfd46,	// (0x00079797) listrow_wgtman_pane_g_ParamLimits

0x51e2,	// (0x0006ec33) listrow_wgtman_pane_t1_ParamLimits

0x51fa,	// (0x0006ec4b) listrow_wgtman_pane_t2_ParamLimits

0xfd4b,	// (0x0007979c) listrow_wgtman_pane_t_ParamLimits

0x5220,	// (0x0006ec71) wait_bar_pane_cp09_ParamLimits

0x24ab,	// (0x0006befc) bg_popup_heading_pane_cp02

0x21c9,	// (0x0006bc1a) popup_notif_wgt_heading_pane_g1

0x21d1,	// (0x0006bc22) popup_notif_wgt_heading_pane_t1

0x24ab,	// (0x0006befc) main_vids_pane

0x24ab,	// (0x0006befc) vids_listscroll_pane

0xc51a,	// (0x00075f6b) scroll_pane_cp040

0x24ab,	// (0x0006befc) vids_list_pane

0xc525,	// (0x00075f76) vids_list_double_pane_ParamLimits

0xc525,	// (0x00075f76) vids_list_double_pane

0xc53c,	// (0x00075f8d) vids_list_double_pane_g1

0xc545,	// (0x00075f96) vids_list_double_pane_t1

0xc555,	// (0x00075fa6) vids_list_double_pane_t2

0x0001,

0xfde4,	// (0x00079835) vids_list_double_pane_t

0x2761,	// (0x0006c1b2) main_ncimui_pane_ParamLimits

0xb135,	// (0x00074b86) main_ncimui_pane_g1_ParamLimits

0xb141,	// (0x00074b92) main_ncimui_pane_g2_ParamLimits

0xb141,	// (0x00074b92) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x00079528) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x00079528) main_ncimui_pane_g

0xc30a,	// (0x00075d5b) main_welc_pane_g1_ParamLimits

0xc30a,	// (0x00075d5b) main_welc_pane_g1

0xc316,	// (0x00075d67) main_welc_pane_g2_ParamLimits

0xc316,	// (0x00075d67) main_welc_pane_g2

0x0003,

0xfdce,	// (0x0007981f) main_welc_pane_g_ParamLimits

0xfdce,	// (0x0007981f) main_welc_pane_g

0x2e5e,	// (0x0006c8af) listscroll_mce_pane_ParamLimits

0x3b79,	// (0x0006d5ca) wait_bar_pane_cp10

0xe4e0,	// (0x00077f31) main_cale_day_pane_ParamLimits

0xe4e0,	// (0x00077f31) main_cale_week_pane_ParamLimits

0x2e5e,	// (0x0006c8af) main_messa_pane_ParamLimits

0x8ba9,	// (0x000725fa) main_clock2_btn_pane_ParamLimits

0x8ba9,	// (0x000725fa) main_clock2_btn_pane

0xecc3,	// (0x00078714) main_clock2_btn_pane_cp01_ParamLimits

0xecc3,	// (0x00078714) main_clock2_btn_pane_cp01

0x1acb,	// (0x0006b51c) list_cale_mrui_pane_ParamLimits

0x1f7b,	// (0x0006b9cc) main_cf0_pane_g2

0x0001,

0xfd1d,	// (0x0007976e) main_cf0_pane_g

0xebef,	// (0x00078640) area_left_week_number_pane_ParamLimits

0xebef,	// (0x00078640) area_top_day_name_pane_ParamLimits

0xebef,	// (0x00078640) frame_month_view_pane_ParamLimits

0xebef,	// (0x00078640) grid_month_view_pane_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g1_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g2_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g3_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g4_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g5_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g6_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g7_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g8_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g9_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g10_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g11_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g12_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g13_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g14_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g15_ParamLimits

0xebfb,	// (0x0007864c) frm_month_g16_ParamLimits

0xfd75,	// (0x000797c6) frm_month_g_ParamLimits

0x2094,	// (0x0006bae5) cell_top_day_name_pane_t1_ParamLimits

0xebfb,	// (0x0007864c) cell_area_left_week_number_pane_g1_ParamLimits

0x2094,	// (0x0006bae5) cell_area_left_week_number_pane_t1_ParamLimits

0xebfb,	// (0x0007864c) cell_month_view_pane_g1_ParamLimits

0x2094,	// (0x0006bae5) cell_month_view_pane_t1_ParamLimits

0x2e56,	// (0x0006c8a7) main_clock2_btn_pane_g1

0x21df,	// (0x0006bc30) main_clock2_btn_pane_t1

0x2761,	// (0x0006c1b2) listscroll_cmail_pane_ParamLimits

0x1550,	// (0x0006afa1) main_sp_fs_email_pane_g1_ParamLimits

0x155c,	// (0x0006afad) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x00079627) main_sp_fs_email_pane_g_ParamLimits

0x1c0b,	// (0x0006b65c) list_recal_day_pane_ParamLimits

0x1c1c,	// (0x0006b66d) mian_recal_day_pane_t1

0x4d04,	// (0x0006e755) list_single_dyc_row_text_pane_t4_ParamLimits

0x4d04,	// (0x0006e755) list_single_dyc_row_text_pane_t4

0x4d3b,	// (0x0006e78c) list_single_dyc_row_text_pane_t5_ParamLimits

0x4d3b,	// (0x0006e78c) list_single_dyc_row_text_pane_t5

0x4db1,	// (0x0006e802) list_single_dyc_row_text_pane_t6_ParamLimits

0x4db1,	// (0x0006e802) list_single_dyc_row_text_pane_t6

0x3511,	// (0x0006cf62) aid_mgn_list_cale_time_pane

0x2761,	// (0x0006c1b2) main_gallery2_pane_ParamLimits

0xecd9,	// (0x0007872a) main_clock2_pane_cp01_t1

0xece9,	// (0x0007873a) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00079117) main_clock2_pane_cp01_t

0x5b1d,	// (0x0006f56e) cale_week_scroll_pane_g16_ParamLimits

0x5b1d,	// (0x0006f56e) cale_week_scroll_pane_g16

0x318d,	// (0x0006cbde) vorec_slider_pane

0x2171,	// (0x0006bbc2) vidtel_button_pane_t1_ParamLimits

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbbd4,	// (0x00075625) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfccb,	// (0x0007971c) main_fs_bigclock_clock_pane_g_ParamLimits

0xbbe0,	// (0x00075631) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbbf4,	// (0x00075645) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd4,	// (0x00079725) main_fs_bigclock_clock_pane_t_ParamLimits

0x84ea,	// (0x00071f3b) main_mup3_lyrics_pane_ParamLimits

0x84ea,	// (0x00071f3b) main_mup3_lyrics_pane

0xc588,	// (0x00075fd9) main_mup3_lyrics_pane_t1_ParamLimits

0xc588,	// (0x00075fd9) main_mup3_lyrics_pane_t1

0x90ad,	// (0x00072afe) aid_main_mp4_pane_t1_area

0x90b7,	// (0x00072b08) aid_main_mp4_pane_t2_area

0x91bc,	// (0x00072c0d) main_mp4_pane_g7_ParamLimits

0x91bc,	// (0x00072c0d) main_mp4_pane_g7

0x91c8,	// (0x00072c19) main_mp4_pane_g8_ParamLimits

0x91c8,	// (0x00072c19) main_mp4_pane_g8

0x9593,	// (0x00072fe4) aid_call6_pane_g1_size

0xc260,	// (0x00075cb1) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc260,	// (0x00075cb1) list_double_large_graphic_phob2_other_pane

0x309d,	// (0x0006caee) list_double_large_graphic_phob2_other_pane_g1

0x24ab,	// (0x0006befc) list_highlight_pane_cp026

0x2761,	// (0x0006c1b2) main_welc_pane_ParamLimits

0xb74f,	// (0x000751a0) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb74f,	// (0x000751a0) main_sp_fs_ctrlbar_pane_g3

0xb767,	// (0x000751b8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb767,	// (0x000751b8) main_sp_fs_ctrlbar_pane_g4

0xb799,	// (0x000751ea) toolbar2_fixed_button_pane_cp01

0xb7a4,	// (0x000751f5) toolbar2_fixed_button_pane_cp02

0xb7af,	// (0x00075200) toolbar2_fixed_button_pane_cp03

0xc2bb,	// (0x00075d0c) list_welc_entry_pane_ParamLimits

0xc2bb,	// (0x00075d0c) list_welc_entry_pane

0xc324,	// (0x00075d75) main_welc_pane_g3_ParamLimits

0xc324,	// (0x00075d75) main_welc_pane_g3

0xc360,	// (0x00075db1) main_welc_pane_t2_ParamLimits

0xc360,	// (0x00075db1) main_welc_pane_t2

0xc374,	// (0x00075dc5) main_welc_pane_t3_ParamLimits

0xc374,	// (0x00075dc5) main_welc_pane_t3

0x0005,

0xfdd7,	// (0x00079828) main_welc_pane_t_ParamLimits

0xfdd7,	// (0x00079828) main_welc_pane_t

0xc47a,	// (0x00075ecb) welc_button_pane_ParamLimits

0xc47a,	// (0x00075ecb) welc_button_pane

0xc4d8,	// (0x00075f29) welc_service_logo_pane_ParamLimits

0xc4d8,	// (0x00075f29) welc_service_logo_pane

0xc5ba,	// (0x0007600b) list_single_welc_entry_pane_ParamLimits

0xc5ba,	// (0x0007600b) list_single_welc_entry_pane

0xc5cb,	// (0x0007601c) list_single_welc_entry_pane_g1

0xc5d3,	// (0x00076024) list_single_welc_entry_pane_t1

0xc5e1,	// (0x00076032) list_single_welc_entry_pane_t2

0x0001,

0xfde9,	// (0x0007983a) list_single_welc_entry_pane_t

0x24ab,	// (0x0006befc) bg_button_pane_cp035

0xc5ef,	// (0x00076040) welc_button_pane_t1

0x21ed,	// (0x0006bc3e) welc_service_logo_pane_g1

0x21f6,	// (0x0006bc47) welc_service_logo_pane_g2

0x0001,

0xfdee,	// (0x0007983f) welc_service_logo_pane_g

0x24ab,	// (0x0006befc) main_int_radio_pane

0x2fec,	// (0x0006ca3d) list_single_fs_dyc_pane_g1

0x523e,	// (0x0006ec8f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x523e,	// (0x0006ec8f) list_double_large_graphic_phob2_pane_g3

0xc1b3,	// (0x00075c04) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc1b3,	// (0x00075c04) list_double_large_graphic_phob2_pane_g4

0xc5fd,	// (0x0007604e) main_int_radio1_pane_ParamLimits

0xc5fd,	// (0x0007604e) main_int_radio1_pane

0x21ff,	// (0x0006bc50) find_pane_cp02

0xc60f,	// (0x00076060) input_focus_pane_cp12_ParamLimits

0xc60f,	// (0x00076060) input_focus_pane_cp12

0xc61b,	// (0x0007606c) input_focus_pane_cp13_ParamLimits

0xc61b,	// (0x0007606c) input_focus_pane_cp13

0xc633,	// (0x00076084) input_focus_pane_cp14_ParamLimits

0xc633,	// (0x00076084) input_focus_pane_cp14

0x2208,	// (0x0006bc59) int_radio1_listscroll_pane

0xc64b,	// (0x0007609c) main_int_radio1_pane_g1_ParamLimits

0xc64b,	// (0x0007609c) main_int_radio1_pane_g1

0xc65b,	// (0x000760ac) main_int_radio1_pane_t1_ParamLimits

0xc65b,	// (0x000760ac) main_int_radio1_pane_t1

0xc66f,	// (0x000760c0) main_int_radio1_pane_t2_ParamLimits

0xc66f,	// (0x000760c0) main_int_radio1_pane_t2

0xc683,	// (0x000760d4) main_int_radio1_pane_t3_ParamLimits

0xc683,	// (0x000760d4) main_int_radio1_pane_t3

0xc697,	// (0x000760e8) main_int_radio1_pane_t4_ParamLimits

0xc697,	// (0x000760e8) main_int_radio1_pane_t4

0x2212,	// (0x0006bc63) main_int_radio1_pane_t5_ParamLimits

0x2212,	// (0x0006bc63) main_int_radio1_pane_t5

0xc6ae,	// (0x000760ff) main_int_radio1_pane_t6_ParamLimits

0xc6ae,	// (0x000760ff) main_int_radio1_pane_t6

0xc6c0,	// (0x00076111) main_int_radio1_pane_t7_ParamLimits

0xc6c0,	// (0x00076111) main_int_radio1_pane_t7

0xc6d2,	// (0x00076123) main_int_radio1_pane_t8_ParamLimits

0xc6d2,	// (0x00076123) main_int_radio1_pane_t8

0xc6e6,	// (0x00076137) main_int_radio1_pane_t9_ParamLimits

0xc6e6,	// (0x00076137) main_int_radio1_pane_t9

0xc6f8,	// (0x00076149) main_int_radio1_pane_t10_ParamLimits

0xc6f8,	// (0x00076149) main_int_radio1_pane_t10

0xc729,	// (0x0007617a) main_int_radio1_pane_t11_ParamLimits

0xc729,	// (0x0007617a) main_int_radio1_pane_t11

0xc75a,	// (0x000761ab) main_int_radio1_pane_t12_ParamLimits

0xc75a,	// (0x000761ab) main_int_radio1_pane_t12

0x000b,

0xfdf3,	// (0x00079844) main_int_radio1_pane_t_ParamLimits

0xfdf3,	// (0x00079844) main_int_radio1_pane_t

0x2224,	// (0x0006bc75) int_radio_list_pane

0x1bed,	// (0x0006b63e) scroll_pane_cp037

0x222c,	// (0x0006bc7d) list_double_large_graphic_int_radio_pane_ParamLimits

0x222c,	// (0x0006bc7d) list_double_large_graphic_int_radio_pane

0x2244,	// (0x0006bc95) list_double_large_graphic_int_radio_pane_g1

0x52f8,	// (0x0006ed49) list_double_large_graphic_int_radio_pane_t1

0x5306,	// (0x0006ed57) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0c,	// (0x0007985d) list_double_large_graphic_int_radio_pane_t

0x24ab,	// (0x0006befc) list_highlight_pane_cp027

0x21aa,	// (0x0006bbfb) main_button_pane_4

0xc330,	// (0x00075d81) main_welc_pane_g4_ParamLimits

0xc330,	// (0x00075d81) main_welc_pane_g4

0xc386,	// (0x00075dd7) main_welc_pane_t4_ParamLimits

0xc386,	// (0x00075dd7) main_welc_pane_t4

0xc39a,	// (0x00075deb) main_welc_pane_t5_ParamLimits

0xc39a,	// (0x00075deb) main_welc_pane_t5

0xc3d2,	// (0x00075e23) main_welc_pane_t6_ParamLimits

0xc3d2,	// (0x00075e23) main_welc_pane_t6

0xc488,	// (0x00075ed9) welc_button_pane_2_ParamLimits

0xc488,	// (0x00075ed9) welc_button_pane_2

0xc4a0,	// (0x00075ef1) welc_button_pane_3_ParamLimits

0xc4a0,	// (0x00075ef1) welc_button_pane_3

0x21aa,	// (0x0006bbfb) welc_button_pane_4

0xc4ba,	// (0x00075f0b) welc_button_pane_5_ParamLimits

0xc4ba,	// (0x00075f0b) welc_button_pane_5

0x5368,	// (0x0006edb9) main_popup_welc_pane

0x2265,	// (0x0006bcb6) main_welc_sk_g3

0x226f,	// (0x0006bcc0) main_welc_sk_g4

0x2279,	// (0x0006bcca) main_welc_sk_t3

0x2289,	// (0x0006bcda) main_welc_sk_t4

0x2299,	// (0x0006bcea) popup_welc_pane_t4

0x22a7,	// (0x0006bcf8) popup_welc_pane_t5

0x22b5,	// (0x0006bd06) popup_welc_pane_t6

0x24ab,	// (0x0006befc) main_acti_pane

0x24ab,	// (0x0006befc) main_sso_pane

0xc771,	// (0x000761c2) sso_body_pane_ParamLimits

0xc771,	// (0x000761c2) sso_body_pane

0xc78b,	// (0x000761dc) sso_logo_pane_ParamLimits

0xc78b,	// (0x000761dc) sso_logo_pane

0xc7bc,	// (0x0007620d) sso_sk_pane_ParamLimits

0xc7bc,	// (0x0007620d) sso_sk_pane

0x22f3,	// (0x0006bd44) main_sso_logo_pane_g1

0xc7c9,	// (0x0007621a) sso_sk_pane_t1_ParamLimits

0xc7c9,	// (0x0007621a) sso_sk_pane_t1

0xc7dd,	// (0x0007622e) sso_sk_pane_t2_ParamLimits

0xc7dd,	// (0x0007622e) sso_sk_pane_t2

0x0001,

0xfe11,	// (0x00079862) sso_sk_pane_t_ParamLimits

0xfe11,	// (0x00079862) sso_sk_pane_t

0x22fc,	// (0x0006bd4d) aid_sso_gap

0x2305,	// (0x0006bd56) aid_sso_txt1

0x230f,	// (0x0006bd60) aid_sso_txt2

0x2319,	// (0x0006bd6a) aid_sso_txt3

0x0002,

0xfe16,	// (0x00079867) aid_sso_txt

0x2323,	// (0x0006bd74) aid_sso_widget

0xc83a,	// (0x0007628b) sso_btn_pane_ParamLimits

0xc83a,	// (0x0007628b) sso_btn_pane

0xc8c0,	// (0x00076311) sso_option_pane_ParamLimits

0xc8c0,	// (0x00076311) sso_option_pane

0xc96a,	// (0x000763bb) sso_query_pane_ParamLimits

0xc96a,	// (0x000763bb) sso_query_pane

0xc9ba,	// (0x0007640b) sso_query_pane_cp01_ParamLimits

0xc9ba,	// (0x0007640b) sso_query_pane_cp01

0xca0a,	// (0x0007645b) sso_t_hdr_pane_ParamLimits

0xca0a,	// (0x0007645b) sso_t_hdr_pane

0xca2e,	// (0x0007647f) sso_t_nml_pane_ParamLimits

0xca2e,	// (0x0007647f) sso_t_nml_pane

0xca7e,	// (0x000764cf) sso_t_sub_pane

0xc798,	// (0x000761e9) sso_popup_window_ParamLimits

0xc798,	// (0x000761e9) sso_popup_window

0xc7ef,	// (0x00076240) sso_apps_pane_ParamLimits

0xc7ef,	// (0x00076240) sso_apps_pane

0xc812,	// (0x00076263) sso_body_pane_g1

0xc81a,	// (0x0007626b) sso_body_pane_t1

0xc82a,	// (0x0007627b) sso_body_pane_t2

0x0001,

0xfe1d,	// (0x0007986e) sso_body_pane_t

0xc880,	// (0x000762d1) sso_btn_pane_cp01_ParamLimits

0xc880,	// (0x000762d1) sso_btn_pane_cp01

0xc93c,	// (0x0007638d) sso_prog_pane_ParamLimits

0xc93c,	// (0x0007638d) sso_prog_pane

0xcaa3,	// (0x000764f4) sso_t_hdr_pane_t1_ParamLimits

0xcaa3,	// (0x000764f4) sso_t_hdr_pane_t1

0x232d,	// (0x0006bd7e) input_focus_pane_cp10_ParamLimits

0x232d,	// (0x0006bd7e) input_focus_pane_cp10

0x2341,	// (0x0006bd92) sso_query_pane_t1_ParamLimits

0x2341,	// (0x0006bd92) sso_query_pane_t1

0x2354,	// (0x0006bda5) sso_query_pane_t2_ParamLimits

0x2354,	// (0x0006bda5) sso_query_pane_t2

0x236d,	// (0x0006bdbe) sso_query_pane_t3_ParamLimits

0x236d,	// (0x0006bdbe) sso_query_pane_t3

0x2397,	// (0x0006bde8) sso_query_pane_t4_ParamLimits

0x2397,	// (0x0006bde8) sso_query_pane_t4

0x0003,

0xfe22,	// (0x00079873) sso_query_pane_t_ParamLimits

0xfe22,	// (0x00079873) sso_query_pane_t

0x1e39,	// (0x0006b88a) bg_button_pane_cp22

0x224d,	// (0x0006bc9e) sso_btn_pane_t1

0xcabc,	// (0x0007650d) sso_t_nml_pane_t1_ParamLimits

0xcabc,	// (0x0007650d) sso_t_nml_pane_t1

0x23bb,	// (0x0006be0c) sso_option_row_pane_ParamLimits

0x23bb,	// (0x0006be0c) sso_option_row_pane

0x23c8,	// (0x0006be19) sso_t_sub_pane_t1_ParamLimits

0x23c8,	// (0x0006be19) sso_t_sub_pane_t1

0x2761,	// (0x0006c1b2) bg_popup_window_pane_cp11_ParamLimits

0x2761,	// (0x0006c1b2) bg_popup_window_pane_cp11

0x23e5,	// (0x0006be36) popup_sk_window_cp01_ParamLimits

0x23e5,	// (0x0006be36) popup_sk_window_cp01

0x23f2,	// (0x0006be43) sso_popup_body_pane_ParamLimits

0x23f2,	// (0x0006be43) sso_popup_body_pane

0x23ff,	// (0x0006be50) scroll_pane_cp21_ParamLimits

0x23ff,	// (0x0006be50) scroll_pane_cp21

0x240c,	// (0x0006be5d) sso_popup_body_t_pane_ParamLimits

0x240c,	// (0x0006be5d) sso_popup_body_t_pane

0x2419,	// (0x0006be6a) sso_popup_body_t_hdr_pane_ParamLimits

0x2419,	// (0x0006be6a) sso_popup_body_t_hdr_pane

0xcad9,	// (0x0007652a) sso_popup_body_t_nml_pane_ParamLimits

0xcad9,	// (0x0007652a) sso_popup_body_t_nml_pane

0xcaf7,	// (0x00076548) sso_popup_body_t_sub_pane_ParamLimits

0xcaf7,	// (0x00076548) sso_popup_body_t_sub_pane

0x242b,	// (0x0006be7c) sso_popup_body_t_hdr_pane_t1

0xcb1a,	// (0x0007656b) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcb1a,	// (0x0007656b) sso_popup_body_t_nml_pane_t1

0x243b,	// (0x0006be8c) sso_popup_body_t_sub_pane_t1_ParamLimits

0x243b,	// (0x0006be8c) sso_popup_body_t_sub_pane_t1

0x2f17,	// (0x0006c968) sso_prog_pane_g1

0xcb5e,	// (0x000765af) sso_apps_pane_comp1_ParamLimits

0xcb5e,	// (0x000765af) sso_apps_pane_comp1

0x2460,	// (0x0006beb1) sso_apps_pane_comp1_g1

0x2468,	// (0x0006beb9) sso_apps_pane_comp1_t1

0x2484,	// (0x0006bed5) sso_option_row_pane_g1

0x276f,	// (0x0006c1c0) sso_option_row_pane_t1

0x1963,	// (0x0006b3b4) list_cmail_pane_ParamLimits

0x24ab,	// (0x0006befc) main_call7_pane

0xc2a9,	// (0x00075cfa) bg_welc_area_ParamLimits

0xc2a9,	// (0x00075cfa) bg_welc_area

0xc408,	// (0x00075e59) sso_t_hdr_pane_a_t1_ParamLimits

0xc408,	// (0x00075e59) sso_t_hdr_pane_a_t1

0xc41c,	// (0x00075e6d) sso_t_nml_pane_a_t1_ParamLimits

0xc41c,	// (0x00075e6d) sso_t_nml_pane_a_t1

0xc446,	// (0x00075e97) sso_t_sub_pane_a_t1_ParamLimits

0xc446,	// (0x00075e97) sso_t_sub_pane_a_t1

0xc4ca,	// (0x00075f1b) welc_button_pane_cp01_ParamLimits

0xc4ca,	// (0x00075f1b) welc_button_pane_cp01

0x224d,	// (0x0006bc9e) sso_btn_pane_t1_copy1

0x225c,	// (0x0006bcad) welc_button_pane_2_comp1

0x22c3,	// (0x0006bd14) sso_t_hdr_pane_p_t1

0x22d3,	// (0x0006bd24) sso_t_nml_pane_p_t1

0x22e3,	// (0x0006bd34) sso_t_sub_pane_p_t1

0x24ab,	// (0x0006befc) main_att_pane

0x24ab,	// (0x0006befc) main_vod_pane

0xca7e,	// (0x000764cf) sso_t_sub_pane_ParamLimits

0x2476,	// (0x0006bec7) input_focus_pane_cp10_t1

0x276f,	// (0x0006c1c0) sso_option_row_pane_t1_ParamLimits

0xcb78,	// (0x000765c9) main_att_body_pane_ParamLimits

0xcb78,	// (0x000765c9) main_att_body_pane

0xcb8c,	// (0x000765dd) att_btn_emg_pane_ParamLimits

0xcb8c,	// (0x000765dd) att_btn_emg_pane

0xcba4,	// (0x000765f5) att_btn_pane_ParamLimits

0xcba4,	// (0x000765f5) att_btn_pane

0xcc0a,	// (0x0007665b) att_btn_pane_cp01_ParamLimits

0xcc0a,	// (0x0007665b) att_btn_pane_cp01

0xcc3c,	// (0x0007668d) att_li_srv_pane_ParamLimits

0xcc3c,	// (0x0007668d) att_li_srv_pane

0xcc4e,	// (0x0007669f) att_opt_pane_ParamLimits

0xcc4e,	// (0x0007669f) att_opt_pane

0xcc92,	// (0x000766e3) att_query_pane_ParamLimits

0xcc92,	// (0x000766e3) att_query_pane

0xcd02,	// (0x00076753) att_query_pane_cp01_ParamLimits

0xcd02,	// (0x00076753) att_query_pane_cp01

0xcd46,	// (0x00076797) att_t_hdr_pane_ParamLimits

0xcd46,	// (0x00076797) att_t_hdr_pane

0xcdac,	// (0x000767fd) att_t_nml_pane_ParamLimits

0xcdac,	// (0x000767fd) att_t_nml_pane

0xce14,	// (0x00076865) att_t_nml_pane_cp01_ParamLimits

0xce14,	// (0x00076865) att_t_nml_pane_cp01

0xce38,	// (0x00076889) att_t_nmlb_pane_ParamLimits

0xce38,	// (0x00076889) att_t_nmlb_pane

0xce9c,	// (0x000768ed) att_term_pane_ParamLimits

0xce9c,	// (0x000768ed) att_term_pane

0xcede,	// (0x0007692f) main_att_body_pane_g1_ParamLimits

0xcede,	// (0x0007692f) main_att_body_pane_g1

0x278b,	// (0x0006c1dc) att_t_hdr_pane_t1_ParamLimits

0x278b,	// (0x0006c1dc) att_t_hdr_pane_t1

0x27a4,	// (0x0006c1f5) att_t_nml_pane_t1_ParamLimits

0x27a4,	// (0x0006c1f5) att_t_nml_pane_t1

0x27c9,	// (0x0006c21a) att_btn_pane_t1

0x1e39,	// (0x0006b88a) bg_button_pane_cp23

0xbb83,	// (0x000755d4) att_li_srv_row_pane_ParamLimits

0xbb83,	// (0x000755d4) att_li_srv_row_pane

0x27d8,	// (0x0006c229) att_t_nmlb_pane_t1_ParamLimits

0x27d8,	// (0x0006c229) att_t_nmlb_pane_t1

0x27f4,	// (0x0006c245) att_query_pane_t1

0x2803,	// (0x0006c254) att_query_pane_t2

0x2812,	// (0x0006c263) att_query_pane_t3

0x0002,

0xfe30,	// (0x00079881) att_query_pane_t

0x2821,	// (0x0006c272) input_focus_pane_cp11

0x282a,	// (0x0006c27b) att_term_pane_t1_ParamLimits

0x282a,	// (0x0006c27b) att_term_pane_t1

0x24ab,	// (0x0006befc) att_opt_row_pane

0x2847,	// (0x0006c298) att_opt_row_pane_g1

0x284f,	// (0x0006c2a0) att_opt_row_pane_t1_ParamLimits

0x284f,	// (0x0006c2a0) att_opt_row_pane_t1

0xcf08,	// (0x00076959) att_li_srv_row_pane_g1

0xcf10,	// (0x00076961) att_li_srv_row_pane_t1_ParamLimits

0xcf10,	// (0x00076961) att_li_srv_row_pane_t1

0xcf10,	// (0x00076961) att_li_srv_row_pane_t2_ParamLimits

0xcf10,	// (0x00076961) att_li_srv_row_pane_t2

0x0001,

0xfe37,	// (0x00079888) att_li_srv_row_pane_t_ParamLimits

0xfe37,	// (0x00079888) att_li_srv_row_pane_t

0x2868,	// (0x0006c2b9) att_btn_close_pane_g1

0x24ab,	// (0x0006befc) bg_button_pane_cp24

0x7ed4,	// (0x00071925) main_vod_body_pane_ParamLimits

0x7ed4,	// (0x00071925) main_vod_body_pane

0xcf25,	// (0x00076976) main_vod_body_pane_g1_ParamLimits

0xcf25,	// (0x00076976) main_vod_body_pane_g1

0xcf55,	// (0x000769a6) scroll_pane_cp24_ParamLimits

0xcf55,	// (0x000769a6) scroll_pane_cp24

0xcf9d,	// (0x000769ee) vod_btn_pane_ParamLimits

0xcf9d,	// (0x000769ee) vod_btn_pane

0xcfdb,	// (0x00076a2c) vod_det_pane_ParamLimits

0xcfdb,	// (0x00076a2c) vod_det_pane

0xd005,	// (0x00076a56) vod_logo_g1_ParamLimits

0xd005,	// (0x00076a56) vod_logo_g1

0xd03f,	// (0x00076a90) vod_opt_pane_ParamLimits

0xd03f,	// (0x00076a90) vod_opt_pane

0xd06f,	// (0x00076ac0) vod_opt_pane_cp01_ParamLimits

0xd06f,	// (0x00076ac0) vod_opt_pane_cp01

0xd097,	// (0x00076ae8) vod_query_pane_ParamLimits

0xd097,	// (0x00076ae8) vod_query_pane

0xd0bf,	// (0x00076b10) vod_query_pane_cp01_ParamLimits

0xd0bf,	// (0x00076b10) vod_query_pane_cp01

0xd0cb,	// (0x00076b1c) vod_t_nml_pane_ParamLimits

0xd0cb,	// (0x00076b1c) vod_t_nml_pane

0xd171,	// (0x00076bc2) vod_t_nml_pane_cp01_ParamLimits

0xd171,	// (0x00076bc2) vod_t_nml_pane_cp01

0xd1a9,	// (0x00076bfa) vod_t_sub_pane_ParamLimits

0xd1a9,	// (0x00076bfa) vod_t_sub_pane

0xd1d5,	// (0x00076c26) vod_t_sub_pane_cp01_ParamLimits

0xd1d5,	// (0x00076c26) vod_t_sub_pane_cp01

0x2821,	// (0x0006c272) vod_query_field_pane

0x2870,	// (0x0006c2c1) vod_query_pane_t1

0x287f,	// (0x0006c2d0) bg_button_pane_cp25

0x224d,	// (0x0006bc9e) sso_btn_pane_t1_copy2

0xd1fd,	// (0x00076c4e) vod_t_nml_pane_t1_ParamLimits

0xd1fd,	// (0x00076c4e) vod_t_nml_pane_t1

0x2888,	// (0x0006c2d9) vod_opt_row_pane_ParamLimits

0x2888,	// (0x0006c2d9) vod_opt_row_pane

0x289a,	// (0x0006c2eb) vod_t_sub_pane_t1_ParamLimits

0x289a,	// (0x0006c2eb) vod_t_sub_pane_t1

0x28b3,	// (0x0006c304) vod_det_cell_pane_ParamLimits

0x28b3,	// (0x0006c304) vod_det_cell_pane

0x24ab,	// (0x0006befc) input_focus_pane_cp15

0x28c4,	// (0x0006c315) vod_query_field_pane_t1

0x28d2,	// (0x0006c323) vod_opt_row_pane_g1_ParamLimits

0x28d2,	// (0x0006c323) vod_opt_row_pane_g1

0x28de,	// (0x0006c32f) vod_opt_row_pane_t1_ParamLimits

0x28de,	// (0x0006c32f) vod_opt_row_pane_t1

0x28fe,	// (0x0006c34f) vod_det_cell_field_pane

0x2907,	// (0x0006c358) vod_det_cell_pane_g1

0x290f,	// (0x0006c360) vod_det_cell_pane_t1

0x24ab,	// (0x0006befc) input_focus_pane_cp16

0x291e,	// (0x0006c36f) vod_det_cell_field_pane_t1

0xbe5d,	// (0x000758ae) call7_btn_grp_pane_ParamLimits

0xbe5d,	// (0x000758ae) call7_btn_grp_pane

0xd234,	// (0x00076c85) call7_bubble_pane_ParamLimits

0xd234,	// (0x00076c85) call7_bubble_pane

0xbe98,	// (0x000758e9) cell_call7_btn_pane_ParamLimits

0xbe98,	// (0x000758e9) cell_call7_btn_pane

0xd242,	// (0x00076c93) call7_pane_g1_ParamLimits

0xd242,	// (0x00076c93) call7_pane_g1

0xd251,	// (0x00076ca2) call7_windows_conf_pane_ParamLimits

0xd251,	// (0x00076ca2) call7_windows_conf_pane

0xd26b,	// (0x00076cbc) popup_call7_1st_window_ParamLimits

0xd26b,	// (0x00076cbc) popup_call7_1st_window

0xd279,	// (0x00076cca) popup_call7_2nd_window_ParamLimits

0xd279,	// (0x00076cca) popup_call7_2nd_window

0xd287,	// (0x00076cd8) popup_call7_3rd_window_ParamLimits

0xd287,	// (0x00076cd8) popup_call7_3rd_window

0x24ab,	// (0x0006befc) bg_button_pane_cp26

0x202b,	// (0x0006ba7c) cell_call7_btn_pane_g1

0x249c,	// (0x0006beed) cell_call7_btn_pane_t1

0x24ab,	// (0x0006befc) bg_popup_window_pane_cp12

0x292c,	// (0x0006c37d) popup_call7_1st_window_g1

0x2934,	// (0x0006c385) popup_call7_1st_window_g2

0x293c,	// (0x0006c38d) popup_call7_1st_window_g3

0x0002,

0xfe3c,	// (0x0007988d) popup_call7_1st_window_g

0x2944,	// (0x0006c395) popup_call7_1st_window_t1

0x2953,	// (0x0006c3a4) popup_call7_1st_window_t2

0x2961,	// (0x0006c3b2) popup_call7_1st_window_t3

0x0002,

0xfe43,	// (0x00079894) popup_call7_1st_window_t

0x24ab,	// (0x0006befc) bg_popup_window_pane_cp13

0x296f,	// (0x0006c3c0) popup_call7_2nd_window_g1

0x2977,	// (0x0006c3c8) popup_call7_2nd_window_g2

0x297f,	// (0x0006c3d0) popup_call7_2nd_window_g3

0x0002,

0xfe4a,	// (0x0007989b) popup_call7_2nd_window_g

0x2987,	// (0x0006c3d8) popup_call7_2nd_window_t1

0x24ab,	// (0x0006befc) bg_popup_window_pane_cp14

0x2996,	// (0x0006c3e7) call7_list_conf_pane

0x299e,	// (0x0006c3ef) call7_list_conf_row_pane_ParamLimits

0x299e,	// (0x0006c3ef) call7_list_conf_row_pane

0x29b1,	// (0x0006c402) call7_list_conf_row_pane_g1

0x29b9,	// (0x0006c40a) call7_list_conf_row_pane_g2

0x0001,

0xfe51,	// (0x000798a2) call7_list_conf_row_pane_g

0x29c1,	// (0x0006c412) call7_list_conf_row_pane_t1

0x24ab,	// (0x0006befc) list_highlight_pane_cp22

0xc90e,	// (0x0007635f) sso_option_pane_cp01_ParamLimits

0xc90e,	// (0x0007635f) sso_option_pane_cp01

0x2e5e,	// (0x0006c8af) msg_header_pane_ParamLimits

0xd3cb,	// (0x00076e1c) bg_button_pane_cp01_ParamLimits

0x4a48,	// (0x0006e499) input_focus_pane_cp07_ParamLimits

0xb7e3,	// (0x00075234) popup_email_progress_window

0x2f17,	// (0x0006c968) popup_email_progress_window_g1

0x29cf,	// (0x0006c420) popup_email_progress_window_g2

0x0001,

0xfe56,	// (0x000798a7) popup_email_progress_window_g

0x29d7,	// (0x0006c428) popup_email_progress_window_t1

0x24ab,	// (0x0006befc) cmail_conv_pane

0x4e04,	// (0x0006e855) list_single_dyc_row_pane_g5_ParamLimits

0x4e04,	// (0x0006e855) list_single_dyc_row_pane_g5

0x4e10,	// (0x0006e861) list_single_dyc_row_pane_g6_ParamLimits

0x4e10,	// (0x0006e861) list_single_dyc_row_pane_g6

0x4e28,	// (0x0006e879) list_single_dyc_row_pane_g7_ParamLimits

0x4e28,	// (0x0006e879) list_single_dyc_row_pane_g7

0xc2cb,	// (0x00075d1c) main_button_pane_5_ParamLimits

0xc2cb,	// (0x00075d1c) main_button_pane_5

0xc77f,	// (0x000761d0) sso_emg_call_btn_pane_ParamLimits

0xc77f,	// (0x000761d0) sso_emg_call_btn_pane

0xca93,	// (0x000764e4) sso_t_sub_pane_cp01_ParamLimits

0xca93,	// (0x000764e4) sso_t_sub_pane_cp01

0x2484,	// (0x0006bed5) sso_option_row_pane_g1_ParamLimits

0x2490,	// (0x0006bee1) sso_option_row_pane_g2_ParamLimits

0x2490,	// (0x0006bee1) sso_option_row_pane_g2

0x0001,

0xfe2b,	// (0x0007987c) sso_option_row_pane_g_ParamLimits

0xfe2b,	// (0x0007987c) sso_option_row_pane_g

0xcc22,	// (0x00076673) att_btn_pane_cp02_ParamLimits

0xcc22,	// (0x00076673) att_btn_pane_cp02

0x29e5,	// (0x0006c436) cmail_conv_hdr_pane

0x29ee,	// (0x0006c43f) list_cmail_conv_pane

0x29f8,	// (0x0006c449) scroll_pane_cp31

0x2a00,	// (0x0006c451) cmail_conv_hdr_pane_t1

0x2a0e,	// (0x0006c45f) cmail_conv_hdr_pane_t2

0x0001,

0xfe5b,	// (0x000798ac) cmail_conv_hdr_pane_t

0x2a1c,	// (0x0006c46d) bubble_cmail_conv_pane_ParamLimits

0x2a1c,	// (0x0006c46d) bubble_cmail_conv_pane

0x2a34,	// (0x0006c485) aid_size_colorization_pane

0x318d,	// (0x0006cbde) bg_bubble_cmail_conv_pane

0x2a3c,	// (0x0006c48d) body_bubble_cmail_conv_pane

0x2a44,	// (0x0006c495) bubble_cmail_conv_pane_g1

0x2a4c,	// (0x0006c49d) bubble_cmail_conv_pane_g2

0x2a54,	// (0x0006c4a5) bubble_cmail_conv_pane_g3

0x0002,

0xfe60,	// (0x000798b1) bubble_cmail_conv_pane_g

0x2a5c,	// (0x0006c4ad) bubble_cmail_conv_pane_t1

0x2a6a,	// (0x0006c4bb) bg_bubble_cmail_conv_pane_g1

0x2a73,	// (0x0006c4c4) bg_bubble_cmail_conv_pane_g2

0x2a7c,	// (0x0006c4cd) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe67,	// (0x000798b8) bg_bubble_cmail_conv_pane_g

0x2a85,	// (0x0006c4d6) body_bubble_cmail_conv_pane_t1_ParamLimits

0x2a85,	// (0x0006c4d6) body_bubble_cmail_conv_pane_t1

0x18cc,	// (0x0006b31d) body_bubble_cmail_conv_pane_t2_ParamLimits

0x18cc,	// (0x0006b31d) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe6e,	// (0x000798bf) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe6e,	// (0x000798bf) body_bubble_cmail_conv_pane_t

0x2ecb,	// (0x0006c91c) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

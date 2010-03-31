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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00075313 };

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
0x6e02,	// (0x0007c115) Screen

0x6e0e,	// (0x0007c121) application_window

0x6e6a,	// (0x0007c17d) area_bottom_pane_ParamLimits

0x6e6a,	// (0x0007c17d) area_bottom_pane

0x6ec3,	// (0x0007c1d6) area_top_pane_ParamLimits

0x6ec3,	// (0x0007c1d6) area_top_pane

0x6f27,	// (0x0007c23a) call_video_uplink_pane_ParamLimits

0x6f27,	// (0x0007c23a) call_video_uplink_pane

0x6f66,	// (0x0007c279) main_pane_ParamLimits

0x6f66,	// (0x0007c279) main_pane

0x2a93,	// (0x00077da6) context_pane

0xa293,	// (0x0007f5a6) navi_pane

0xa2b9,	// (0x0007f5cc) popup_cale_events_window_ParamLimits

0xa2b9,	// (0x0007f5cc) popup_cale_events_window

0x2aa6,	// (0x00077db9) popup_mup_playback_window

0xa2d1,	// (0x0007f5e4) signal_pane

0x09ef,	// (0x00075d02) main_browser_pane

0x167c,	// (0x0007698f) main_burst_pane

0xa11f,	// (0x0007f432) main_calc_pane

0x2a79,	// (0x00077d8c) main_cale_day_pane

0x76a3,	// (0x0007c9b6) main_cale_month_pane

0x2a79,	// (0x00077d8c) main_cale_week_pane

0x167c,	// (0x0007698f) main_call_pane

0x06cf,	// (0x000759e2) main_call_poc_pane

0x167c,	// (0x0007698f) main_camera_pane

0x167c,	// (0x0007698f) main_chi_dic_pane

0x13f9,	// (0x0007670c) main_clock_pane

0x06cf,	// (0x000759e2) main_fmradio_pane

0x167c,	// (0x0007698f) main_graph_messa_pane

0x06cf,	// (0x000759e2) main_help_pane

0x09ef,	// (0x00075d02) main_im_pane

0x092a,	// (0x00075c3d) main_image_pane_ParamLimits

0x092a,	// (0x00075c3d) main_image_pane

0x06cf,	// (0x000759e2) main_location2_pane

0x167c,	// (0x0007698f) main_location_pane

0x092a,	// (0x00075c3d) main_messa_pane

0x06cf,	// (0x000759e2) main_mp2_pane

0x167c,	// (0x0007698f) main_mp_pane

0x06cf,	// (0x000759e2) main_msg_pane

0x06cf,	// (0x000759e2) main_mup_eq_pane

0x06cf,	// (0x000759e2) main_mup_pane

0x09ef,	// (0x00075d02) main_notes_pane

0x06cf,	// (0x000759e2) main_pec_pane

0x06cf,	// (0x000759e2) main_phob_pane

0x06cf,	// (0x000759e2) main_pinb_pane

0x06cf,	// (0x000759e2) main_postcard_pane

0x06cf,	// (0x000759e2) main_qdial_pane

0x167c,	// (0x0007698f) main_skin_pane

0x06cf,	// (0x000759e2) main_smil2_pane

0x167c,	// (0x0007698f) main_smil_pane

0x167c,	// (0x0007698f) main_video_pane

0x167c,	// (0x0007698f) main_video_tele_pane

0x092a,	// (0x00075c3d) main_viewer_pane_ParamLimits

0x092a,	// (0x00075c3d) main_viewer_pane

0x167c,	// (0x0007698f) main_vorec_pane

0xa15d,	// (0x0007f470) popup_blid_sat_info_window_ParamLimits

0xa15d,	// (0x0007f470) popup_blid_sat_info_window

0xa17d,	// (0x0007f490) popup_dyc_status_message_window_ParamLimits

0xa17d,	// (0x0007f490) popup_dyc_status_message_window

0xa18d,	// (0x0007f4a0) popup_grid_large_graphic_window_ParamLimits

0xa18d,	// (0x0007f4a0) popup_grid_large_graphic_window

0xa21e,	// (0x0007f531) popup_loc_request_window_ParamLimits

0xa21e,	// (0x0007f531) popup_loc_request_window

0xa26b,	// (0x0007f57e) popup_wml_address_window_ParamLimits

0xa26b,	// (0x0007f57e) popup_wml_address_window

0x9ff7,	// (0x0007f30a) call_muted_g1

0x9cb9,	// (0x0007efcc) popup_call_audio_conf_window_ParamLimits

0x9cb9,	// (0x0007efcc) popup_call_audio_conf_window

0xa007,	// (0x0007f31a) popup_call_audio_first_window_ParamLimits

0xa007,	// (0x0007f31a) popup_call_audio_first_window

0xa047,	// (0x0007f35a) popup_call_audio_in_window_ParamLimits

0xa047,	// (0x0007f35a) popup_call_audio_in_window

0xa06b,	// (0x0007f37e) popup_call_audio_out_window_ParamLimits

0xa06b,	// (0x0007f37e) popup_call_audio_out_window

0xa08d,	// (0x0007f3a0) popup_call_audio_second_window_ParamLimits

0xa08d,	// (0x0007f3a0) popup_call_audio_second_window

0xa0bd,	// (0x0007f3d0) popup_call_audio_wait_window_ParamLimits

0xa0bd,	// (0x0007f3d0) popup_call_audio_wait_window

0xa0de,	// (0x0007f3f1) popup_number_entry_window_ParamLimits

0xa0de,	// (0x0007f3f1) popup_number_entry_window

0xede2,	// (0x000840f5) bg_popup_call_pane_cp05_ParamLimits

0xede2,	// (0x000840f5) bg_popup_call_pane_cp05

0xee02,	// (0x00084115) popup_number_entry_window_t1

0xee15,	// (0x00084128) popup_number_entry_window_t2

0xee27,	// (0x0008413a) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000843e0) popup_number_entry_window_t

0xee39,	// (0x0008414c) text_title_cp2

0xee4c,	// (0x0008415f) bg_popup_call_pane_cp_ParamLimits

0xee4c,	// (0x0008415f) bg_popup_call_pane_cp

0xee5a,	// (0x0008416d) call_thumbnail_pane

0xee62,	// (0x00084175) popup_call_audio_in_window_g1_ParamLimits

0xee62,	// (0x00084175) popup_call_audio_in_window_g1

0xee6e,	// (0x00084181) popup_call_audio_in_window_g2_ParamLimits

0xee6e,	// (0x00084181) popup_call_audio_in_window_g2

0xee7a,	// (0x0008418d) popup_call_audio_in_window_g3_ParamLimits

0xee7a,	// (0x0008418d) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000843e9) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000843e9) popup_call_audio_in_window_g

0xee86,	// (0x00084199) popup_call_audio_in_window_t1_ParamLimits

0xee86,	// (0x00084199) popup_call_audio_in_window_t1

0xeea2,	// (0x000841b5) popup_call_audio_in_window_t2_ParamLimits

0xeea2,	// (0x000841b5) popup_call_audio_in_window_t2

0xeebe,	// (0x000841d1) popup_call_audio_in_window_t3_ParamLimits

0xeebe,	// (0x000841d1) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000843f0) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000843f0) popup_call_audio_in_window_t

0xee4c,	// (0x0008415f) bg_popup_call_pane_cp01_ParamLimits

0xee4c,	// (0x0008415f) bg_popup_call_pane_cp01

0xee5a,	// (0x0008416d) call_thumbnail_pane_cp02

0xeed1,	// (0x000841e4) call_type_pane_cp022

0xeed9,	// (0x000841ec) popup_call_audio_out_window_g1_ParamLimits

0xeed9,	// (0x000841ec) popup_call_audio_out_window_g1

0xeeeb,	// (0x000841fe) popup_call_audio_out_window_g2_ParamLimits

0xeeeb,	// (0x000841fe) popup_call_audio_out_window_g2

0xeef7,	// (0x0008420a) popup_call_audio_out_window_g3_ParamLimits

0xeef7,	// (0x0008420a) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000843f7) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000843f7) popup_call_audio_out_window_g

0xef09,	// (0x0008421c) popup_call_audio_out_window_t1_ParamLimits

0xef09,	// (0x0008421c) popup_call_audio_out_window_t1

0xef21,	// (0x00084234) popup_call_audio_out_window_t2_ParamLimits

0xef21,	// (0x00084234) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000843fe) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000843fe) popup_call_audio_out_window_t

0xef36,	// (0x00084249) bg_popup_call_pane_ParamLimits

0xef36,	// (0x00084249) bg_popup_call_pane

0x7167,	// (0x0007c47a) call_thumbnail_pane_cp_ParamLimits

0x7167,	// (0x0007c47a) call_thumbnail_pane_cp

0xf03d,	// (0x00084350) call_type_pane_cp01_ParamLimits

0xf03d,	// (0x00084350) call_type_pane_cp01

0xf081,	// (0x00084394) popup_call_audio_first_window_g1_ParamLimits

0xf081,	// (0x00084394) popup_call_audio_first_window_g1

0x0524,	// (0x00075837) popup_call_audio_first_window_g2_ParamLimits

0x0524,	// (0x00075837) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x00084403) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x00084403) popup_call_audio_first_window_g

0x0568,	// (0x0007587b) popup_call_audio_first_window_t1_ParamLimits

0x0568,	// (0x0007587b) popup_call_audio_first_window_t1

0x0614,	// (0x00075927) popup_call_audio_first_window_t4_ParamLimits

0x0614,	// (0x00075927) popup_call_audio_first_window_t4

0x06a0,	// (0x000759b3) popup_call_audio_first_window_t5_ParamLimits

0x06a0,	// (0x000759b3) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x00084408) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x00084408) popup_call_audio_first_window_t

0x06cf,	// (0x000759e2) bg_popup_call_pane_cp02

0x06d9,	// (0x000759ec) call_type_pane_cp023

0x06e1,	// (0x000759f4) popup_call_audio_wait_window_g1

0x06e9,	// (0x000759fc) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008440f) popup_call_audio_wait_window_g

0x06f1,	// (0x00075a04) popup_call_audio_wait_window_t3

0x06ff,	// (0x00075a12) bg_popup_call_pane_cp03_ParamLimits

0x06ff,	// (0x00075a12) bg_popup_call_pane_cp03

0x075f,	// (0x00075a72) call_thumbnail_pane_cp011_ParamLimits

0x075f,	// (0x00075a72) call_thumbnail_pane_cp011

0x076b,	// (0x00075a7e) call_type_pane_cp034_ParamLimits

0x076b,	// (0x00075a7e) call_type_pane_cp034

0x07a7,	// (0x00075aba) popup_call_audio_second_window_g1_ParamLimits

0x07a7,	// (0x00075aba) popup_call_audio_second_window_g1

0x07e3,	// (0x00075af6) popup_call_audio_second_window_g2_ParamLimits

0x07e3,	// (0x00075af6) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x00084414) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x00084414) popup_call_audio_second_window_g

0x081f,	// (0x00075b32) popup_call_audio_second_window_t1_ParamLimits

0x081f,	// (0x00075b32) popup_call_audio_second_window_t1

0x08a0,	// (0x00075bb3) popup_call_audio_second_window_t2_ParamLimits

0x08a0,	// (0x00075bb3) popup_call_audio_second_window_t2

0x08d6,	// (0x00075be9) popup_call_audio_second_window_t3_ParamLimits

0x08d6,	// (0x00075be9) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x00084419) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x00084419) popup_call_audio_second_window_t

0x06cf,	// (0x000759e2) bg_popup_call_pane_cp04

0x090c,	// (0x00075c1f) list_conf_pane

0x0914,	// (0x00075c27) popup_call_audio_conf_window_t1

0x0922,	// (0x00075c35) call_thumbnail_pane_g1

0x092a,	// (0x00075c3d) bg_pinb_pane_ParamLimits

0x092a,	// (0x00075c3d) bg_pinb_pane

0x0938,	// (0x00075c4b) find_pinb_pane

0x0941,	// (0x00075c54) listscroll_pinb_pane_ParamLimits

0x0941,	// (0x00075c54) listscroll_pinb_pane

0x0950,	// (0x00075c63) pinb_bg_pane_g1

0x718b,	// (0x0007c49e) pinb_bg_pane_g2

0x7197,	// (0x0007c4aa) pinb_bg_pane_g3

0x71a3,	// (0x0007c4b6) pinb_bg_pane_g4

0x71af,	// (0x0007c4c2) pinb_bg_pane_g5

0x71bb,	// (0x0007c4ce) pinb_bg_pane_g6

0x71c6,	// (0x0007c4d9) pinb_bg_pane_g7

0x71d1,	// (0x0007c4e4) pinb_bg_pane_g8

0x71dc,	// (0x0007c4ef) pinb_bg_pane_g9

0x71e6,	// (0x0007c4f9) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x00084420) pinb_bg_pane_g

0x7203,	// (0x0007c516) grid_pinb_pane

0x720e,	// (0x0007c521) list_pinb_pane

0x7219,	// (0x0007c52c) scroll_pane_cp01_ParamLimits

0x7219,	// (0x0007c52c) scroll_pane_cp01

0x095a,	// (0x00075c6d) find_pinb_pane_g1_ParamLimits

0x095a,	// (0x00075c6d) find_pinb_pane_g1

0x0972,	// (0x00075c85) find_pinb_pane_t1

0x0984,	// (0x00075c97) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0008443a) find_pinb_pane_t

0x0999,	// (0x00075cac) input_focus_pane_cp01_ParamLimits

0x0999,	// (0x00075cac) input_focus_pane_cp01

0x722b,	// (0x0007c53e) cell_pinb_pane_ParamLimits

0x722b,	// (0x0007c53e) cell_pinb_pane

0x7253,	// (0x0007c566) cell_pinb_pane_g1_ParamLimits

0x7253,	// (0x0007c566) cell_pinb_pane_g1

0x7268,	// (0x0007c57b) cell_pinb_pane_g2_ParamLimits

0x7268,	// (0x0007c57b) cell_pinb_pane_g2

0x09a5,	// (0x00075cb8) cell_pinb_pane_g3_ParamLimits

0x09a5,	// (0x00075cb8) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0008443f) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0008443f) cell_pinb_pane_g

0x06cf,	// (0x000759e2) grid_highlight_pane_cp01

0x7274,	// (0x0007c587) list_pinb_item_pane_ParamLimits

0x7274,	// (0x0007c587) list_pinb_item_pane

0x06cf,	// (0x000759e2) list_highlight_pane_cp02

0x729a,	// (0x0007c5ad) list_pinb_item_pane_g1_ParamLimits

0x729a,	// (0x0007c5ad) list_pinb_item_pane_g1

0x72a7,	// (0x0007c5ba) list_pinb_item_pane_g2_ParamLimits

0x72a7,	// (0x0007c5ba) list_pinb_item_pane_g2

0x72b3,	// (0x0007c5c6) list_pinb_item_pane_g3_ParamLimits

0x72b3,	// (0x0007c5c6) list_pinb_item_pane_g3

0x72c4,	// (0x0007c5d7) list_pinb_item_pane_g4_ParamLimits

0x72c4,	// (0x0007c5d7) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x00084446) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x00084446) list_pinb_item_pane_g

0x72d0,	// (0x0007c5e3) list_pinb_item_pane_t1_ParamLimits

0x72d0,	// (0x0007c5e3) list_pinb_item_pane_t1

0x7301,	// (0x0007c614) calc_display_pane

0x731f,	// (0x0007c632) calc_paper_pane

0x733b,	// (0x0007c64e) grid_calc_pane

0x06cf,	// (0x000759e2) bg_list_pane_cp01

0x7367,	// (0x0007c67a) clock_g1

0x736f,	// (0x0007c682) clock_g2

0x0001,

0xf13c,	// (0x0008444f) clock_g

0x7379,	// (0x0007c68c) clock_t1_ParamLimits

0x7379,	// (0x0007c68c) clock_t1

0x738e,	// (0x0007c6a1) clock_t2_ParamLimits

0x738e,	// (0x0007c6a1) clock_t2

0x73a0,	// (0x0007c6b3) clock_t3_ParamLimits

0x73a0,	// (0x0007c6b3) clock_t3

0x73b2,	// (0x0007c6c5) clock_t4_ParamLimits

0x73b2,	// (0x0007c6c5) clock_t4

0x73c4,	// (0x0007c6d7) clock_t5_ParamLimits

0x73c4,	// (0x0007c6d7) clock_t5

0x73d9,	// (0x0007c6ec) clock_t6_ParamLimits

0x73d9,	// (0x0007c6ec) clock_t6

0x73eb,	// (0x0007c6fe) clock_t7_ParamLimits

0x73eb,	// (0x0007c6fe) clock_t7

0x73fd,	// (0x0007c710) clock_t8_ParamLimits

0x73fd,	// (0x0007c710) clock_t8

0x7413,	// (0x0007c726) clock_t9_ParamLimits

0x7413,	// (0x0007c726) clock_t9

0x0008,

0xf141,	// (0x00084454) clock_t_ParamLimits

0xf141,	// (0x00084454) clock_t

0x09b1,	// (0x00075cc4) popup_clock_analogue_window_cp02

0x09b1,	// (0x00075cc4) popup_clock_digital_window_cp01

0x09b9,	// (0x00075ccc) listscroll_help_pane

0x06cf,	// (0x000759e2) phob_pre_status_pane

0x09c3,	// (0x00075cd6) grid_qdial_pane

0x092a,	// (0x00075c3d) listscroll_mce_pane

0x092a,	// (0x00075c3d) bg_notes_pane

0x09cd,	// (0x00075ce0) list_notes_pane

0x7429,	// (0x0007c73c) scroll_pane_cp06

0x09db,	// (0x00075cee) bg_calc_paper_pane

0x7438,	// (0x0007c74b) list_calc_pane

0x09ef,	// (0x00075d02) bg_calc_display_pane

0x7452,	// (0x0007c765) calc_display_pane_t1

0x7467,	// (0x0007c77a) calc_display_pane_t2

0x747c,	// (0x0007c78f) calc_display_pane_t3

0x0002,

0xf154,	// (0x00084467) calc_display_pane_t

0x748e,	// (0x0007c7a1) cell_calc_pane_ParamLimits

0x748e,	// (0x0007c7a1) cell_calc_pane

0x09fb,	// (0x00075d0e) bg_calc_paper_pane_g1

0x0a13,	// (0x00075d26) bg_calc_paper_pane_g2

0x0a07,	// (0x00075d1a) bg_calc_paper_pane_g3

0x0a2b,	// (0x00075d3e) bg_calc_paper_pane_g4

0x0a1f,	// (0x00075d32) bg_calc_paper_pane_g5

0x74bb,	// (0x0007c7ce) bg_calc_paper_pane_g6

0x74cc,	// (0x0007c7df) bg_calc_paper_pane_g7

0x74dd,	// (0x0007c7f0) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0008446e) bg_calc_paper_pane_g

0x74ee,	// (0x0007c801) calc_bg_paper_pane_g9

0x74ff,	// (0x0007c812) list_calc_item_pane_ParamLimits

0x74ff,	// (0x0007c812) list_calc_item_pane

0x0a37,	// (0x00075d4a) list_calc_item_pane_g1

0x752e,	// (0x0007c841) list_calc_item_pane_t1_ParamLimits

0x752e,	// (0x0007c841) list_calc_item_pane_t1

0x7540,	// (0x0007c853) list_calc_item_pane_t2_ParamLimits

0x7540,	// (0x0007c853) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0008447f) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0008447f) list_calc_item_pane_t

0x0a44,	// (0x00075d57) cell_calc_pane_g1

0x0a4e,	// (0x00075d61) grid_highlight_pane_cp02

0x2eb6,	// (0x000781c9) bg_calc_display_pane_g1

0x7570,	// (0x0007c883) bg_calc_display_pane_g2

0x757a,	// (0x0007c88d) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x00084489) bg_calc_display_pane_g

0x7583,	// (0x0007c896) cell_qdial_pane_ParamLimits

0x7583,	// (0x0007c896) cell_qdial_pane

0x7597,	// (0x0007c8aa) cell_qdial_pane_g1_ParamLimits

0x7597,	// (0x0007c8aa) cell_qdial_pane_g1

0x75a4,	// (0x0007c8b7) cell_qdial_pane_g2_ParamLimits

0x75a4,	// (0x0007c8b7) cell_qdial_pane_g2

0x0a70,	// (0x00075d83) cell_qdial_pane_g3_ParamLimits

0x0a70,	// (0x00075d83) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x00084490) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x00084490) cell_qdial_pane_g

0x75c2,	// (0x0007c8d5) cell_qdial_pane_t1_ParamLimits

0x75c2,	// (0x0007c8d5) cell_qdial_pane_t1

0x75da,	// (0x0007c8ed) cell_qdial_pane_t2_ParamLimits

0x75da,	// (0x0007c8ed) cell_qdial_pane_t2

0x75ed,	// (0x0007c900) cell_qdial_pane_t3_ParamLimits

0x75ed,	// (0x0007c900) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x00084499) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x00084499) cell_qdial_pane_t

0x06cf,	// (0x000759e2) grid_highlight_pane_cp04

0x0a7c,	// (0x00075d8f) thumbnail_qdial_pane_ParamLimits

0x0a7c,	// (0x00075d8f) thumbnail_qdial_pane

0x0ad8,	// (0x00075deb) list_help_pane

0x0ae1,	// (0x00075df4) scroll_pane_cp02

0x7600,	// (0x0007c913) help_list_pane_t1_ParamLimits

0x7600,	// (0x0007c913) help_list_pane_t1

0x7633,	// (0x0007c946) bg_notes_pane_g2

0x763b,	// (0x0007c94e) bg_notes_pane_g3

0x7643,	// (0x0007c956) notes_bg_pane_g1

0x764b,	// (0x0007c95e) notes_bg_pane_g4

0x7653,	// (0x0007c966) notes_bg_pane_g5

0x765b,	// (0x0007c96e) notes_bg_pane_g6

0x7663,	// (0x0007c976) notes_bg_pane_g7

0x766b,	// (0x0007c97e) notes_bg_pane_g8

0x7673,	// (0x0007c986) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000844b7) notes_bg_pane_g

0x767b,	// (0x0007c98e) list_notes_text_pane_ParamLimits

0x767b,	// (0x0007c98e) list_notes_text_pane

0x0aea,	// (0x00075dfd) list_notes_text_pane_g1

0x5b91,	// (0x0007aea4) list_notes_text_pane_t1

0x76a3,	// (0x0007c9b6) listscroll_cale_week_pane

0x76c8,	// (0x0007c9db) bg_cale_heading_pane

0x0b0d,	// (0x00075e20) bg_cale_pane_cp01

0x76ea,	// (0x0007c9fd) cale_week_corner_pane

0x7704,	// (0x0007ca17) cale_week_day_heading_pane

0x7726,	// (0x0007ca39) cale_week_scroll_pane_g1

0x7743,	// (0x0007ca56) cale_week_scroll_pane_g2

0x7756,	// (0x0007ca69) cale_week_scroll_pane_g3

0x7769,	// (0x0007ca7c) cale_week_scroll_pane_g4

0x777c,	// (0x0007ca8f) cale_week_scroll_pane_g5

0x778f,	// (0x0007caa2) cale_week_scroll_pane_g6

0x77a2,	// (0x0007cab5) cale_week_scroll_pane_g7

0x77b5,	// (0x0007cac8) cale_week_scroll_pane_g8

0x77ca,	// (0x0007cadd) cale_week_scroll_pane_g9

0x77dd,	// (0x0007caf0) cale_week_scroll_pane_g10

0x77f0,	// (0x0007cb03) cale_week_scroll_pane_g11

0x7803,	// (0x0007cb16) cale_week_scroll_pane_g12

0x781a,	// (0x0007cb2d) cale_week_scroll_pane_g13

0x7835,	// (0x0007cb48) cale_week_scroll_pane_g14

0x7850,	// (0x0007cb63) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000844c6) cale_week_scroll_pane_g

0x786b,	// (0x0007cb7e) cale_week_time_pane

0x7880,	// (0x0007cb93) grid_cale_week_pane

0x0b3d,	// (0x00075e50) scroll_pane_cp08

0x789f,	// (0x0007cbb2) cell_cale_week_pane_ParamLimits

0x789f,	// (0x0007cbb2) cell_cale_week_pane

0x7901,	// (0x0007cc14) cale_week_day_heading_pane_t1

0x793c,	// (0x0007cc4f) cale_week_day_heading_pane_t2

0x7977,	// (0x0007cc8a) cale_week_day_heading_pane_t3

0x79b2,	// (0x0007ccc5) cale_week_day_heading_pane_t4

0x79ed,	// (0x0007cd00) cale_week_day_heading_pane_t5

0x7a28,	// (0x0007cd3b) cale_week_day_heading_pane_t6

0x7a63,	// (0x0007cd76) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000844e5) cale_week_day_heading_pane_t

0x0b5a,	// (0x00075e6d) bg_cale_side_pane

0x7a9e,	// (0x0007cdb1) cale_week_time_pane_t1

0x7ab8,	// (0x0007cdcb) cale_week_time_pane_t2

0x7ad2,	// (0x0007cde5) cale_week_time_pane_t3

0x7aec,	// (0x0007cdff) cale_week_time_pane_t4

0x7b06,	// (0x0007ce19) cale_week_time_pane_t5

0x7b20,	// (0x0007ce33) cale_week_time_pane_t6

0x7b40,	// (0x0007ce53) cale_week_time_pane_t7

0x7b62,	// (0x0007ce75) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000844f4) cale_week_time_pane_t

0x7b86,	// (0x0007ce99) cell_cale_week_pane_g2

0x7b99,	// (0x0007ceac) cell_cale_week_pane_g3_ParamLimits

0x7b99,	// (0x0007ceac) cell_cale_week_pane_g3

0x0b68,	// (0x00075e7b) grid_highlight_pane_cp07

0x0b70,	// (0x00075e83) listscroll_gms_pane

0x0b7a,	// (0x00075e8d) grid_gms_pane

0x0b83,	// (0x00075e96) listscroll_gms_pane_g1

0x0b8b,	// (0x00075e9e) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x00084505) listscroll_gms_pane_g

0x7bb1,	// (0x0007cec4) scroll_pane_cp010

0x7bbc,	// (0x0007cecf) cell_gms_pane_ParamLimits

0x7bbc,	// (0x0007cecf) cell_gms_pane

0x7bcf,	// (0x0007cee2) cell_gms_pane_g1

0x0b93,	// (0x00075ea6) cell_gms_pane_g2

0x0b9b,	// (0x00075eae) cell_gms_pane_g3

0x0ba4,	// (0x00075eb7) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0008450a) cell_gms_pane_g

0x0bad,	// (0x00075ec0) grid_highlight_pane_cp09

0x9f9f,	// (0x0007f2b2) phob_pre_status_pane_g1

0x9fa7,	// (0x0007f2ba) phob_pre_status_pane_g2

0x9faf,	// (0x0007f2c2) phob_pre_status_pane_g3

0x9fb7,	// (0x0007f2ca) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000848f9) phob_pre_status_pane_g

0x9fc7,	// (0x0007f2da) phob_pre_status_pane_t1

0x9fd7,	// (0x0007f2ea) phob_pre_status_pane_t2

0x9fe7,	// (0x0007f2fa) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x00084904) phob_pre_status_pane_t

0x06cf,	// (0x000759e2) bg_list_pane_cp05

0x7bdf,	// (0x0007cef2) grid_vorec_pane

0x7be9,	// (0x0007cefc) vorec_t1

0x7bf7,	// (0x0007cf0a) vorec_t2

0x7c05,	// (0x0007cf18) vorec_t3

0x7c13,	// (0x0007cf26) vorec_t4

0x7c21,	// (0x0007cf34) vorec_t5

0x7c2f,	// (0x0007cf42) vorec_t6

0x0006,

0xf200,	// (0x00084513) vorec_t

0x7c4b,	// (0x0007cf5e) wait_bar_pane_cp01

0x7c53,	// (0x0007cf66) cell_vorec_pane_ParamLimits

0x7c53,	// (0x0007cf66) cell_vorec_pane

0x7c66,	// (0x0007cf79) cell_vorec_pane_g1

0x06cf,	// (0x000759e2) grid_highlight_pane_cp05

0x7c80,	// (0x0007cf93) cams_zoom_pane

0x7c8c,	// (0x0007cf9f) image_vga_pane

0x7c9b,	// (0x0007cfae) main_camera_pane_g1

0x7ca9,	// (0x0007cfbc) main_camera_pane_g2

0x7cb5,	// (0x0007cfc8) main_camera_pane_g3

0x7cc1,	// (0x0007cfd4) main_camera_pane_g4

0x7ccd,	// (0x0007cfe0) main_camera_pane_g5

0x7cd9,	// (0x0007cfec) main_camera_pane_g6

0x7ce5,	// (0x0007cff8) main_camera_pane_g7

0x0007,

0xf20f,	// (0x00084522) main_camera_pane_g

0x7cf1,	// (0x0007d004) main_camera_pane_t1

0x7d03,	// (0x0007d016) main_camera_pane_t2

0x0001,

0xf220,	// (0x00084533) main_camera_pane_t

0x7d24,	// (0x0007d037) cams_zoom_pane_cp_ParamLimits

0x7d24,	// (0x0007d037) cams_zoom_pane_cp

0x7d48,	// (0x0007d05b) image_cif_pane_ParamLimits

0x7d48,	// (0x0007d05b) image_cif_pane

0x7d66,	// (0x0007d079) image_subqcif_pane

0x7d6e,	// (0x0007d081) main_video_pane_g1_ParamLimits

0x7d6e,	// (0x0007d081) main_video_pane_g1

0x7d8e,	// (0x0007d0a1) main_video_pane_g2_ParamLimits

0x7d8e,	// (0x0007d0a1) main_video_pane_g2

0x7dbe,	// (0x0007d0d1) main_video_pane_g3_ParamLimits

0x7dbe,	// (0x0007d0d1) main_video_pane_g3

0x7de7,	// (0x0007d0fa) main_video_pane_g4_ParamLimits

0x7de7,	// (0x0007d0fa) main_video_pane_g4

0x7e10,	// (0x0007d123) main_video_pane_g5_ParamLimits

0x7e10,	// (0x0007d123) main_video_pane_g5

0x0bc1,	// (0x00075ed4) main_video_pane_g6_ParamLimits

0x0bc1,	// (0x00075ed4) main_video_pane_g6

0x0006,

0xf225,	// (0x00084538) main_video_pane_g_ParamLimits

0xf225,	// (0x00084538) main_video_pane_g

0x7e32,	// (0x0007d145) main_video_pane_t1_ParamLimits

0x7e32,	// (0x0007d145) main_video_pane_t1

0x0bdb,	// (0x00075eee) cams_zoom_pane_g1

0x0be4,	// (0x00075ef7) cams_zoom_pane_g2

0x0bed,	// (0x00075f00) cams_zoom_pane_g3

0x0bf6,	// (0x00075f09) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x00084547) cams_zoom_pane_g

0x7e7c,	// (0x0007d18f) grid_cams_pane

0x7e8a,	// (0x0007d19d) linegrid_cams_pane

0x7e98,	// (0x0007d1ab) cell_cams_pane_ParamLimits

0x7e98,	// (0x0007d1ab) cell_cams_pane

0x0bff,	// (0x00075f12) cams_burst_image_pane

0x0c07,	// (0x00075f1a) cell_cams_pane_g1

0x06cf,	// (0x000759e2) grid_highlight_pane_cp03

0x0a44,	// (0x00075d57) mp_bg_pane_g1

0x06cf,	// (0x000759e2) bg_list_pane_cp03

0x299e,	// (0x00077cb1) bg_mp_pane

0x29a6,	// (0x00077cb9) grid_mp_pane

0x29ae,	// (0x00077cc1) media_player_g1

0x29b6,	// (0x00077cc9) media_player_t1

0x29c4,	// (0x00077cd7) media_player_t2

0x29d2,	// (0x00077ce5) media_player_t3

0x29e0,	// (0x00077cf3) media_player_t4

0x29ee,	// (0x00077d01) media_player_t5

0x29fc,	// (0x00077d0f) media_player_t6

0x2a0a,	// (0x00077d1d) media_player_t7

0x0006,

0xf5d0,	// (0x000848e3) media_player_t

0x2a18,	// (0x00077d2b) wait_bar_pane_cp02

0xf5b5,	// (0x000848c8) main_usb_pane_t

0x9f96,	// (0x0007f2a9) cell_mp_pane

0x0a44,	// (0x00075d57) cell_mp_pane_g1

0x06cf,	// (0x000759e2) grid_highlight_pane_cp06

0x0c0f,	// (0x00075f22) grid_skin_colour_pane

0x0c17,	// (0x00075f2a) list_highlight_pane_cp03

0x7ec3,	// (0x0007d1d6) skin_g1

0x0c1f,	// (0x00075f32) skin_t1

0x0c2e,	// (0x00075f41) skin_t2

0x0001,

0xf269,	// (0x0008457c) skin_t

0x7ecd,	// (0x0007d1e0) cell_skin_colour_pane_ParamLimits

0x7ecd,	// (0x0007d1e0) cell_skin_colour_pane

0x0c3c,	// (0x00075f4f) cell_skin_colour_pane_g1

0x7f51,	// (0x0007d264) call_video_g1_ParamLimits

0x7f51,	// (0x0007d264) call_video_g1

0x7f61,	// (0x0007d274) call_video_g2_ParamLimits

0x7f61,	// (0x0007d274) call_video_g2

0x0001,

0xf26e,	// (0x00084581) call_video_g_ParamLimits

0xf26e,	// (0x00084581) call_video_g

0x7fbb,	// (0x0007d2ce) call_video_uplink_pane_cp1_ParamLimits

0x7fbb,	// (0x0007d2ce) call_video_uplink_pane_cp1

0x0c4e,	// (0x00075f61) call_video_uplink_pane_cp2

0x8087,	// (0x0007d39a) video_down_crop_pane_ParamLimits

0x8087,	// (0x0007d39a) video_down_crop_pane

0x8185,	// (0x0007d498) video_down_pane_ParamLimits

0x8185,	// (0x0007d498) video_down_pane

0x0c56,	// (0x00075f69) video_down_subqcif_pane_ParamLimits

0x0c56,	// (0x00075f69) video_down_subqcif_pane

0x0c6e,	// (0x00075f81) video_down_subqcif_pane_cp_ParamLimits

0x0c6e,	// (0x00075f81) video_down_subqcif_pane_cp

0x0c94,	// (0x00075fa7) im_reading_pane_ParamLimits

0x0c94,	// (0x00075fa7) im_reading_pane

0x82a7,	// (0x0007d5ba) im_writing_pane_ParamLimits

0x82a7,	// (0x0007d5ba) im_writing_pane

0x82c5,	// (0x0007d5d8) im_reading_pane_t1

0x0cae,	// (0x00075fc1) list_im_pane

0x0cbf,	// (0x00075fd2) scroll_pane_cp07

0x8319,	// (0x0007d62c) im_writing_pane_t1_ParamLimits

0x8319,	// (0x0007d62c) im_writing_pane_t1

0x0cd8,	// (0x00075feb) im_writing_pane_t2_ParamLimits

0x0cd8,	// (0x00075feb) im_writing_pane_t2

0x0001,

0xf278,	// (0x0008458b) im_writing_pane_t_ParamLimits

0xf278,	// (0x0008458b) im_writing_pane_t

0x06cf,	// (0x000759e2) input_focus_pane_cp04

0x06cf,	// (0x000759e2) input_focus_pane_cp05

0x832e,	// (0x0007d641) list_im_single_pane_ParamLimits

0x832e,	// (0x0007d641) list_im_single_pane

0x8352,	// (0x0007d665) list_single_im_pane_t1

0x9f5a,	// (0x0007f26d) blid_accuracy_pane

0x9f62,	// (0x0007f275) blid_compass_pane

0x9f6c,	// (0x0007f27f) main_location_t1

0x9f7a,	// (0x0007f28d) main_location_t2

0x9f88,	// (0x0007f29b) main_location_t3

0x0002,

0xf5df,	// (0x000848f2) main_location_t

0x06cf,	// (0x000759e2) aid_levels_location

0x0a44,	// (0x00075d57) blid_accuracy_pane_g1

0x0a44,	// (0x00075d57) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000845ed) blid_accuracy_pane_g

0x0d20,	// (0x00076033) wml_content_pane

0x0d5e,	// (0x00076071) wml_button_pane_ParamLimits

0x0d5e,	// (0x00076071) wml_button_pane

0x8361,	// (0x0007d674) wml_list_single_large_pane_ParamLimits

0x8361,	// (0x0007d674) wml_list_single_large_pane

0x838b,	// (0x0007d69e) wml_list_single_medium_pane_ParamLimits

0x838b,	// (0x0007d69e) wml_list_single_medium_pane

0x83bc,	// (0x0007d6cf) wml_list_single_small_pane_ParamLimits

0x83bc,	// (0x0007d6cf) wml_list_single_small_pane

0x0d72,	// (0x00076085) wml_selection_box_pane_ParamLimits

0x0d72,	// (0x00076085) wml_selection_box_pane

0x0d85,	// (0x00076098) wml_list_single_pane_t1

0x0d94,	// (0x000760a7) wml_list_single_medium_pane_t1

0x0da3,	// (0x000760b6) wml_list_single_large_pane_t1

0x0db2,	// (0x000760c5) input_focus_pane_cp02_ParamLimits

0x0db2,	// (0x000760c5) input_focus_pane_cp02

0x0dc5,	// (0x000760d8) wml_selection_box_pane_g1

0x0dce,	// (0x000760e1) wml_selection_box_pane_t1_ParamLimits

0x0dce,	// (0x000760e1) wml_selection_box_pane_t1

0x092a,	// (0x00075c3d) bg_wml_button_pane_ParamLimits

0x092a,	// (0x00075c3d) bg_wml_button_pane

0x0de6,	// (0x000760f9) wml_button_pane_g1

0x0dee,	// (0x00076101) wml_button_pane_t1

0x0de6,	// (0x000760f9) wml_button_bg_pane_g1

0x0dfe,	// (0x00076111) wml_button_bg_pane_g2

0x0e06,	// (0x00076119) wml_button_bg_pane_g3

0x0e0e,	// (0x00076121) wml_button_bg_pane_g4

0x0e16,	// (0x00076129) wml_button_bg_pane_g5

0x0e1e,	// (0x00076131) wml_button_bg_pane_g6

0x0e26,	// (0x00076139) wml_button_bg_pane_g7

0x0e2e,	// (0x00076141) wml_button_bg_pane_g8

0x0e36,	// (0x00076149) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x00084590) wml_button_bg_pane_g

0x83f6,	// (0x0007d709) bg_list_pane_cp02

0x0e3e,	// (0x00076151) mce_header_pane_ParamLimits

0x0e3e,	// (0x00076151) mce_header_pane

0x0e54,	// (0x00076167) mce_icon_pane

0x0e54,	// (0x00076167) mce_image_pane

0x0e5d,	// (0x00076170) mce_text_pane_ParamLimits

0x0e5d,	// (0x00076170) mce_text_pane

0x8400,	// (0x0007d713) scroll_pane_cp03

0x0d56,	// (0x00076069) scroll_pane_cp04

0x0e70,	// (0x00076183) scroll_pane_cp05_ParamLimits

0x0e70,	// (0x00076183) scroll_pane_cp05

0x840a,	// (0x0007d71d) mce_header_field_pane_ParamLimits

0x840a,	// (0x0007d71d) mce_header_field_pane

0x842a,	// (0x0007d73d) mce_header_field_pane_2_ParamLimits

0x842a,	// (0x0007d73d) mce_header_field_pane_2

0x8440,	// (0x0007d753) mce_header_field_pane_3

0x8448,	// (0x0007d75b) list_single_mce_message_pane_ParamLimits

0x8448,	// (0x0007d75b) list_single_mce_message_pane

0x8473,	// (0x0007d786) list_single_mce_smart_pane_ParamLimits

0x8473,	// (0x0007d786) list_single_mce_smart_pane

0x0e7c,	// (0x0007618f) input_focus_pane_cp03

0x0e85,	// (0x00076198) list_header_data_pane

0x84a9,	// (0x0007d7bc) mce_header_field_pane_t1

0x84b7,	// (0x0007d7ca) list_single_mce_header_pane_ParamLimits

0x84b7,	// (0x0007d7ca) list_single_mce_header_pane

0x0e8d,	// (0x000761a0) list_single_mce_header_pane_t1

0x0e9c,	// (0x000761af) list_single_mce_message_pane_g1

0x0f0d,	// (0x00076220) list_single_mce_message_pane_t1

0x8509,	// (0x0007d81c) bg_cale_heading_pane_cp01_ParamLimits

0x8509,	// (0x0007d81c) bg_cale_heading_pane_cp01

0x0f1b,	// (0x0007622e) bg_cale_pane_cp02_ParamLimits

0x0f1b,	// (0x0007622e) bg_cale_pane_cp02

0x854c,	// (0x0007d85f) cale_month_corner_pane

0x8566,	// (0x0007d879) cale_month_day_heading_pane_ParamLimits

0x8566,	// (0x0007d879) cale_month_day_heading_pane

0x85c1,	// (0x0007d8d4) cale_month_pane_g1_ParamLimits

0x85c1,	// (0x0007d8d4) cale_month_pane_g1

0x85f9,	// (0x0007d90c) cale_month_pane_g2_ParamLimits

0x85f9,	// (0x0007d90c) cale_month_pane_g2

0x8622,	// (0x0007d935) cale_month_pane_g3_ParamLimits

0x8622,	// (0x0007d935) cale_month_pane_g3

0x866e,	// (0x0007d981) cale_month_pane_g4_ParamLimits

0x866e,	// (0x0007d981) cale_month_pane_g4

0x86ba,	// (0x0007d9cd) cale_month_pane_g5_ParamLimits

0x86ba,	// (0x0007d9cd) cale_month_pane_g5

0x8706,	// (0x0007da19) cale_month_pane_g6_ParamLimits

0x8706,	// (0x0007da19) cale_month_pane_g6

0x8752,	// (0x0007da65) cale_month_pane_g7_ParamLimits

0x8752,	// (0x0007da65) cale_month_pane_g7

0x87b6,	// (0x0007dac9) cale_month_pane_g8_ParamLimits

0x87b6,	// (0x0007dac9) cale_month_pane_g8

0x881a,	// (0x0007db2d) cale_month_pane_g9_ParamLimits

0x881a,	// (0x0007db2d) cale_month_pane_g9

0x8878,	// (0x0007db8b) cale_month_pane_g10_ParamLimits

0x8878,	// (0x0007db8b) cale_month_pane_g10

0x88d4,	// (0x0007dbe7) cale_month_pane_g11_ParamLimits

0x88d4,	// (0x0007dbe7) cale_month_pane_g11

0x8928,	// (0x0007dc3b) cale_month_pane_g12_ParamLimits

0x8928,	// (0x0007dc3b) cale_month_pane_g12

0x897e,	// (0x0007dc91) cale_month_pane_g13_ParamLimits

0x897e,	// (0x0007dc91) cale_month_pane_g13

0x000c,

0xf290,	// (0x000845a3) cale_month_pane_g_ParamLimits

0xf290,	// (0x000845a3) cale_month_pane_g

0x89d4,	// (0x0007dce7) cale_month_week_pane

0x89e9,	// (0x0007dcfc) grid_cale_month_pane_ParamLimits

0x89e9,	// (0x0007dcfc) grid_cale_month_pane

0x8a37,	// (0x0007dd4a) cale_month_day_heading_pane_t1

0x8abd,	// (0x0007ddd0) cale_month_day_heading_pane_t2

0x8b4e,	// (0x0007de61) cale_month_day_heading_pane_t3

0x8bdf,	// (0x0007def2) cale_month_day_heading_pane_t4

0x8c70,	// (0x0007df83) cale_month_day_heading_pane_t5

0x8d01,	// (0x0007e014) cale_month_day_heading_pane_t6

0x8d92,	// (0x0007e0a5) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000845be) cale_month_day_heading_pane_t

0x0b5a,	// (0x00075e6d) bg_cale_side_pane_cp01

0x8e3b,	// (0x0007e14e) cale_month_week_pane_t1

0x8e54,	// (0x0007e167) cale_month_week_pane_t2

0x8e6d,	// (0x0007e180) cale_month_week_pane_t3

0x8e86,	// (0x0007e199) cale_month_week_pane_t4

0x8e9f,	// (0x0007e1b2) cale_month_week_pane_t5

0x8ec0,	// (0x0007e1d3) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000845cd) cale_month_week_pane_t

0x8ee1,	// (0x0007e1f4) cell_cale_month_pane_ParamLimits

0x8ee1,	// (0x0007e1f4) cell_cale_month_pane

0x9003,	// (0x0007e316) cell_cale_month_pane_g1

0x900f,	// (0x0007e322) cell_cale_month_pane_t1_ParamLimits

0x900f,	// (0x0007e322) cell_cale_month_pane_t1

0x0b68,	// (0x00075e7b) grid_highlight_pane_cp08

0x0a44,	// (0x00075d57) main_smil_g1

0x902f,	// (0x0007e342) smil_status_pane

0x0f5a,	// (0x0007626d) smil_text_pane

0x28be,	// (0x00077bd1) bg_popup_call3_rect_pane_g8

0x28c6,	// (0x00077bd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x00084886) bg_popup_call3_rect_pane_g

0x2b20,	// (0x00077e33) smil_status_volume_pane_g1

0x0f64,	// (0x00076277) smil_status_pane_t1

0xa384,	// (0x0007f697) volume_smil_pane

0x0f7b,	// (0x0007628e) list_smil_text_pane

0x9042,	// (0x0007e355) scroll_pane_cp011

0x904d,	// (0x0007e360) smil_text_list_pane_t1_ParamLimits

0x904d,	// (0x0007e360) smil_text_list_pane_t1

0x90c5,	// (0x0007e3d8) aid_volume_smil_ParamLimits

0x90c5,	// (0x0007e3d8) aid_volume_smil

0x0a44,	// (0x00075d57) smil_volume_pane_g1

0x0a44,	// (0x00075d57) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000845ed) smil_volume_pane_g

0x76a3,	// (0x0007c9b6) listscroll_cale_day_pane

0x0f85,	// (0x00076298) bg_cale_pane

0x0f9d,	// (0x000762b0) list_cale_pane

0x0fc0,	// (0x000762d3) scroll_pane_cp09

0x0fd1,	// (0x000762e4) cale_bg_pane_g1

0x0fd9,	// (0x000762ec) cale_bg_pane_g2

0x0fe1,	// (0x000762f4) cale_bg_pane_g3

0x0fe9,	// (0x000762fc) cale_bg_pane_g4

0x0ff1,	// (0x00076304) cale_bg_pane_g5

0x0ff9,	// (0x0007630c) cale_bg_pane_g6

0x1001,	// (0x00076314) cale_bg_pane_g7

0x1009,	// (0x0007631c) cale_bg_pane_g8

0x1011,	// (0x00076324) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000845f2) cale_bg_pane_g

0x90ef,	// (0x0007e402) list_cale_time_pane_ParamLimits

0x90ef,	// (0x0007e402) list_cale_time_pane

0x1019,	// (0x0007632c) list_cale_time_pane_g1_ParamLimits

0x1019,	// (0x0007632c) list_cale_time_pane_g1

0x1025,	// (0x00076338) list_cale_time_pane_g2_ParamLimits

0x1025,	// (0x00076338) list_cale_time_pane_g2

0x9111,	// (0x0007e424) list_cale_time_pane_g3_ParamLimits

0x9111,	// (0x0007e424) list_cale_time_pane_g3

0x911f,	// (0x0007e432) list_cale_time_pane_g4_ParamLimits

0x911f,	// (0x0007e432) list_cale_time_pane_g4

0x912d,	// (0x0007e440) list_cale_time_pane_g5_ParamLimits

0x912d,	// (0x0007e440) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x00084605) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x00084605) list_cale_time_pane_g

0x103f,	// (0x00076352) list_cale_time_pane_t1_ParamLimits

0x103f,	// (0x00076352) list_cale_time_pane_t1

0x1067,	// (0x0007637a) list_cale_time_pane_t2_ParamLimits

0x1067,	// (0x0007637a) list_cale_time_pane_t2

0x93f4,	// (0x0007e707) aid_blid_cardinal_pane

0x9436,	// (0x0007e749) compass_pane_t4

0x108f,	// (0x000763a2) list_cale_time_pane_t4_ParamLimits

0x108f,	// (0x000763a2) list_cale_time_pane_t4

0x9444,	// (0x0007e757) compass_pane_t5

0x9454,	// (0x0007e767) compass_pane_t6

0x9462,	// (0x0007e775) compass_pane_t7

0x153e,	// (0x00076851) navi_pane_cc_t1

0x1723,	// (0x00076a36) aid_phob_thumbnail_center_pane

0x9a60,	// (0x0007ed73) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x00084612) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x00084612) list_cale_time_pane_t

0xee4c,	// (0x0008415f) bg_popup_window_pane_cp02_ParamLimits

0xee4c,	// (0x0008415f) bg_popup_window_pane_cp02

0x10b7,	// (0x000763ca) heading_pane_cp01_ParamLimits

0x10b7,	// (0x000763ca) heading_pane_cp01

0x10c3,	// (0x000763d6) loc_req_pane_ParamLimits

0x10c3,	// (0x000763d6) loc_req_pane

0x10d3,	// (0x000763e6) loc_type_pane_ParamLimits

0x10d3,	// (0x000763e6) loc_type_pane

0x10e5,	// (0x000763f8) loc_type_pane_t1_ParamLimits

0x10e5,	// (0x000763f8) loc_type_pane_t1

0x10f7,	// (0x0007640a) loc_type_pane_t2_ParamLimits

0x10f7,	// (0x0007640a) loc_type_pane_t2

0x1109,	// (0x0007641c) loc_type_pane_t3_ParamLimits

0x1109,	// (0x0007641c) loc_type_pane_t3

0x0002,

0xf306,	// (0x00084619) loc_type_pane_t_ParamLimits

0xf306,	// (0x00084619) loc_type_pane_t

0x111b,	// (0x0007642e) list_loc_req_pane

0x1125,	// (0x00076438) scroll_pane_cp012

0x913b,	// (0x0007e44e) list_single_loc_request_popup_menu_pane_ParamLimits

0x913b,	// (0x0007e44e) list_single_loc_request_popup_menu_pane

0x1130,	// (0x00076443) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1130,	// (0x00076443) list_single_loc_request_popup_menu_pane_g1

0x113c,	// (0x0007644f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x113c,	// (0x0007644f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x00084620) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x00084620) list_single_loc_request_popup_menu_pane_g

0x1148,	// (0x0007645b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1148,	// (0x0007645b) list_single_loc_request_popup_menu_pane_t1

0x914d,	// (0x0007e460) bg_popup_window_pane_cp03_ParamLimits

0x914d,	// (0x0007e460) bg_popup_window_pane_cp03

0x915b,	// (0x0007e46e) heading_loc_req_pane_ParamLimits

0x915b,	// (0x0007e46e) heading_loc_req_pane

0x9167,	// (0x0007e47a) popup_dyc_status_message_window_g1_ParamLimits

0x9167,	// (0x0007e47a) popup_dyc_status_message_window_g1

0x9173,	// (0x0007e486) popup_dyc_status_message_window_t1_ParamLimits

0x9173,	// (0x0007e486) popup_dyc_status_message_window_t1

0x9185,	// (0x0007e498) popup_dyc_status_message_window_t2_ParamLimits

0x9185,	// (0x0007e498) popup_dyc_status_message_window_t2

0x9197,	// (0x0007e4aa) popup_dyc_status_message_window_t3_ParamLimits

0x9197,	// (0x0007e4aa) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x00084625) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x00084625) popup_dyc_status_message_window_t

0x06cf,	// (0x000759e2) bg_heading_pane_cp01

0x116a,	// (0x0007647d) heading_loc_req_pane_g1

0x1172,	// (0x00076485) heading_loc_req_pane_g2

0x117a,	// (0x0007648d) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0008462c) heading_loc_req_pane_g

0x1182,	// (0x00076495) heading_loc_req_pane_t1

0x1191,	// (0x000764a4) bg_popup_sub_pane_cp01_ParamLimits

0x1191,	// (0x000764a4) bg_popup_sub_pane_cp01

0x119f,	// (0x000764b2) popup_cale_events_window_g1_ParamLimits

0x119f,	// (0x000764b2) popup_cale_events_window_g1

0x11bf,	// (0x000764d2) popup_cale_events_window_g2_ParamLimits

0x11bf,	// (0x000764d2) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x00084660) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x00084660) popup_cale_events_window_g

0x11df,	// (0x000764f2) popup_cale_events_window_t1_ParamLimits

0x11df,	// (0x000764f2) popup_cale_events_window_t1

0x11f1,	// (0x00076504) popup_cale_events_window_t2_ParamLimits

0x11f1,	// (0x00076504) popup_cale_events_window_t2

0x122f,	// (0x00076542) popup_cale_events_window_t3_ParamLimits

0x122f,	// (0x00076542) popup_cale_events_window_t3

0x1269,	// (0x0007657c) popup_cale_events_window_t4_ParamLimits

0x1269,	// (0x0007657c) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x00084665) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x00084665) popup_cale_events_window_t

0x91c1,	// (0x0007e4d4) call_type_pane

0x173b,	// (0x00076a4e) popup_call_status_window_g1

0x91cd,	// (0x0007e4e0) popup_call_status_window_g2

0x91d9,	// (0x0007e4ec) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0008466e) popup_call_status_window_g

0x129f,	// (0x000765b2) call_type_pane_g1

0x12a8,	// (0x000765bb) call_type_pane_g2

0x0001,

0xf362,	// (0x00084675) call_type_pane_g

0x06cf,	// (0x000759e2) bg_popup_sub_pane_cp02

0x12b1,	// (0x000765c4) listscroll_popup_wml_pane

0x12b9,	// (0x000765cc) list_wml_pane

0x12c3,	// (0x000765d6) scroll_pane_cp013

0x12ce,	// (0x000765e1) list_single_graphic_popup_wml_pane_ParamLimits

0x12ce,	// (0x000765e1) list_single_graphic_popup_wml_pane

0x0a44,	// (0x00075d57) list_single_graphic_popup_wml_pane_g1

0x12e2,	// (0x000765f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0008467a) list_single_graphic_popup_wml_pane_g

0x12ea,	// (0x000765fd) list_single_graphic_popup_wml_pane_t1

0x12f8,	// (0x0007660b) aid_call_pane

0x0922,	// (0x00075c35) popup_clock_analogue_window_g1

0x0922,	// (0x00075c35) popup_clock_analogue_window_g2

0x91e5,	// (0x0007e4f8) popup_clock_analogue_window_g3

0x91e5,	// (0x0007e4f8) popup_clock_analogue_window_g4

0x0a44,	// (0x00075d57) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0008467f) popup_clock_analogue_window_g

0x91ed,	// (0x0007e500) popup_clock_analogue_window_t1

0x91fb,	// (0x0007e50e) clock_digital_number_pane_ParamLimits

0x91fb,	// (0x0007e50e) clock_digital_number_pane

0x9207,	// (0x0007e51a) clock_digital_number_pane_cp02_ParamLimits

0x9207,	// (0x0007e51a) clock_digital_number_pane_cp02

0x9213,	// (0x0007e526) clock_digital_number_pane_cp03_ParamLimits

0x9213,	// (0x0007e526) clock_digital_number_pane_cp03

0x921f,	// (0x0007e532) clock_digital_number_pane_cp04_ParamLimits

0x921f,	// (0x0007e532) clock_digital_number_pane_cp04

0x922f,	// (0x0007e542) clock_digital_separator_pane_ParamLimits

0x922f,	// (0x0007e542) clock_digital_separator_pane

0x923b,	// (0x0007e54e) popup_clock_digital_window_t1

0x0a44,	// (0x00075d57) clock_digital_number_pane_g1

0x0a44,	// (0x00075d57) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000845ed) clock_digital_number_pane_g

0x0a44,	// (0x00075d57) clock_digital_separator_pane_g1

0x0a44,	// (0x00075d57) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000845ed) clock_digital_separator_pane_g

0x06cf,	// (0x000759e2) bg_popup_window_pane_cp04

0x1308,	// (0x0007661b) heading_pane_cp03

0x1310,	// (0x00076623) listscroll_popup_gms_pane

0x1318,	// (0x0007662b) grid_large_graphic_popup_pane

0x1322,	// (0x00076635) listscroll_popup_gms_pane_g1

0x132a,	// (0x0007663d) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0008468a) listscroll_popup_gms_pane_g

0x0d56,	// (0x00076069) scroll_pane_cp014

0x9258,	// (0x0007e56b) cell_large_graphic_popup_pane_ParamLimits

0x9258,	// (0x0007e56b) cell_large_graphic_popup_pane

0x9270,	// (0x0007e583) cell_large_graphic_popup_pane_g1_ParamLimits

0x9270,	// (0x0007e583) cell_large_graphic_popup_pane_g1

0x1332,	// (0x00076645) cell_large_graphic_popup_pane_g2_ParamLimits

0x1332,	// (0x00076645) cell_large_graphic_popup_pane_g2

0x133e,	// (0x00076651) cell_large_graphic_popup_pane_g3_ParamLimits

0x133e,	// (0x00076651) cell_large_graphic_popup_pane_g3

0x134b,	// (0x0007665e) cell_large_graphic_popup_pane_g4_ParamLimits

0x134b,	// (0x0007665e) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0008468f) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0008468f) cell_large_graphic_popup_pane_g

0x135b,	// (0x0007666e) grid_highlight_pane_cp010

0x0a44,	// (0x00075d57) bg_popup_call_pane_g1

0x1365,	// (0x00076678) list_single_graphic_popup_conf_pane_ParamLimits

0x1365,	// (0x00076678) list_single_graphic_popup_conf_pane

0x1378,	// (0x0007668b) list_highlight_pane_cp01

0x1381,	// (0x00076694) list_single_graphic_popup_conf_pane_g1

0x1389,	// (0x0007669c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x00084698) list_single_graphic_popup_conf_pane_g

0x1391,	// (0x000766a4) list_single_graphic_popup_conf_pane_t1

0x139f,	// (0x000766b2) linegrid_cams_pane_g1

0x927c,	// (0x0007e58f) linegrid_cams_pane_g2

0x0b9b,	// (0x00075eae) linegrid_cams_pane_g3

0x13a8,	// (0x000766bb) linegrid_cams_pane_g4

0x9285,	// (0x0007e598) linegrid_cams_pane_g5

0x928e,	// (0x0007e5a1) linegrid_cams_pane_g6

0x0ba4,	// (0x00075eb7) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0008469d) linegrid_cams_pane_g

0x13b1,	// (0x000766c4) popup_clock_analogue_window

0x13b1,	// (0x000766c4) popup_clock_digital_window

0x06cf,	// (0x000759e2) popup_phob_thumbnail_window

0x0a44,	// (0x00075d57) call_video_uplink_pane_g1

0x13ba,	// (0x000766cd) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000846ac) call_video_uplink_pane_g

0x13c2,	// (0x000766d5) video_uplink_pane

0x13ca,	// (0x000766dd) mce_image_pane_g1

0x9297,	// (0x0007e5aa) mce_image_pane_g2

0x92a1,	// (0x0007e5b4) mce_image_pane_g3

0x92a9,	// (0x0007e5bc) mce_image_pane_g4

0x92b1,	// (0x0007e5c4) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000846b1) mce_image_pane_g

0x13d4,	// (0x000766e7) control_top_pane_stacon_cp01_ParamLimits

0x13d4,	// (0x000766e7) control_top_pane_stacon_cp01

0x13e8,	// (0x000766fb) uni_indicator_pane_stacon_cp01_ParamLimits

0x13e8,	// (0x000766fb) uni_indicator_pane_stacon_cp01

0x13f9,	// (0x0007670c) bg_popup_sub_pane_cp03

0x1403,	// (0x00076716) chi_dic_find_pane

0x92b9,	// (0x0007e5cc) listscroll_chi_dic_pane

0x140b,	// (0x0007671e) main_pane_chidic_g1

0x1413,	// (0x00076726) chi_dic_find_pane_t1

0x1421,	// (0x00076734) find_chidic_pane

0x142a,	// (0x0007673d) chi_dic_list_pane_ParamLimits

0x142a,	// (0x0007673d) chi_dic_list_pane

0x143b,	// (0x0007674e) scroll_pane_cp020

0x1443,	// (0x00076756) find_chidic_pane_t1

0x06cf,	// (0x000759e2) input_focus_pane_cp06

0x92cd,	// (0x0007e5e0) list_chi_dic_pane_ParamLimits

0x92cd,	// (0x0007e5e0) list_chi_dic_pane

0x92e7,	// (0x0007e5fa) list_chi_dic_pane_t1_ParamLimits

0x92e7,	// (0x0007e5fa) list_chi_dic_pane_t1

0x06cf,	// (0x000759e2) list_highlight_pane_cp020

0x1452,	// (0x00076765) bg_cale_heading_pane_g1

0x92fa,	// (0x0007e60d) bg_cale_heading_pane_g2

0x9302,	// (0x0007e615) bg_cale_heading_pane_g3

0x930a,	// (0x0007e61d) bg_cale_heading_pane_g4

0x9314,	// (0x0007e627) bg_cale_heading_pane_g5

0x931e,	// (0x0007e631) bg_cale_heading_pane_g6

0x9326,	// (0x0007e639) bg_cale_heading_pane_g7

0x932e,	// (0x0007e641) bg_cale_heading_pane_g8

0x9338,	// (0x0007e64b) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000846bc) bg_cale_heading_pane_g

0x1452,	// (0x00076765) bg_cale_side_pane_g1

0x9342,	// (0x0007e655) bg_cale_side_pane_g2

0x934c,	// (0x0007e65f) bg_cale_side_pane_g3

0x9356,	// (0x0007e669) bg_cale_side_pane_g4

0x9360,	// (0x0007e673) bg_cale_side_pane_g5

0x936a,	// (0x0007e67d) bg_cale_side_pane_g6

0x9374,	// (0x0007e687) bg_cale_side_pane_g7

0x937e,	// (0x0007e691) bg_cale_side_pane_g8

0x9386,	// (0x0007e699) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000846cf) bg_cale_side_pane_g

0x938e,	// (0x0007e6a1) popup_call_status_window_ParamLimits

0x938e,	// (0x0007e6a1) popup_call_status_window

0x145a,	// (0x0007676d) stacon_top_pane

0x1462,	// (0x00076775) status_pane_ParamLimits

0x1462,	// (0x00076775) status_pane

0x1477,	// (0x0007678a) status_small_pane

0x147f,	// (0x00076792) control_pane

0x06cf,	// (0x000759e2) stacon_bottom_pane

0x1487,	// (0x0007679a) list_single_mce_smart_pane_t1_ParamLimits

0x1487,	// (0x0007679a) list_single_mce_smart_pane_t1

0x149a,	// (0x000767ad) list_single_mce_smart_pane_t2_ParamLimits

0x149a,	// (0x000767ad) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000846e2) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000846e2) list_single_mce_smart_pane_t

0x939a,	// (0x0007e6ad) compass_pane

0x93a6,	// (0x0007e6b9) main_location2_pane_t1

0x93ba,	// (0x0007e6cd) main_location2_pane_t2

0x93ce,	// (0x0007e6e1) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000846e7) main_location2_pane_t

0x14b9,	// (0x000767cc) compass_pane_g1_ParamLimits

0x14b9,	// (0x000767cc) compass_pane_g1

0x9418,	// (0x0007e72b) compass_pane_t1

0x9427,	// (0x0007e73a) compass_pane_t2

0x0005,

0xf3dd,	// (0x000846f0) compass_pane_t

0x9472,	// (0x0007e785) text_secondary_cp61

0x1535,	// (0x00076848) navi_pane_cams_g5

0x15b1,	// (0x000768c4) navi_pane_im_t1

0x15bf,	// (0x000768d2) navi_pane_mp_g1_ParamLimits

0x15bf,	// (0x000768d2) navi_pane_mp_g1

0x15d3,	// (0x000768e6) navi_pane_mp_g2_ParamLimits

0x15d3,	// (0x000768e6) navi_pane_mp_g2

0x15df,	// (0x000768f2) navi_pane_mp_g3_ParamLimits

0x15df,	// (0x000768f2) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x00084704) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x00084704) navi_pane_mp_g

0x15eb,	// (0x000768fe) navi_pane_mp_t1

0x15f9,	// (0x0007690c) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0008470b) navi_pane_mp_t

0x1664,	// (0x00076977) navi_pane_vt_g1

0x15eb,	// (0x000768fe) navi_pane_vt_t1

0x166c,	// (0x0007697f) navi_slider_pane

0x167c,	// (0x0007698f) zooming_pane

0x1684,	// (0x00076997) navi_slider_pane_g1

0x94ad,	// (0x0007e7c0) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x00084712) navi_slider_pane_g

0x16a8,	// (0x000769bb) aid_levels_zoom

0x16b0,	// (0x000769c3) zooming_pane_g1

0x16b8,	// (0x000769cb) zooming_pane_g2

0x16b8,	// (0x000769cb) zooming_pane_g3

0x0002,

0xf40e,	// (0x00084721) zooming_pane_g

0x16c0,	// (0x000769d3) level_10_zoom

0x16c9,	// (0x000769dc) level_11_zoom

0x16d2,	// (0x000769e5) level_1_zoom

0x16db,	// (0x000769ee) level_2_zoom

0x16e4,	// (0x000769f7) level_3_zoom

0x16ed,	// (0x00076a00) level_4_zoom

0x16f6,	// (0x00076a09) level_5_zoom

0x16ff,	// (0x00076a12) level_6_zoom

0x1708,	// (0x00076a1b) level_7_zoom

0x1711,	// (0x00076a24) level_8_zoom

0x171a,	// (0x00076a2d) level_9_zoom

0x172b,	// (0x00076a3e) popup_phob_thumbnail_window_g1

0x1733,	// (0x00076a46) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x00084728) popup_phob_thumbnail_window_g

0x2a20,	// (0x00077d33) level_1_location

0x2a28,	// (0x00077d3b) level_2_location

0x2a30,	// (0x00077d43) level_3_location

0x2a38,	// (0x00077d4b) level_4_location

0x167c,	// (0x0007698f) level_5_location

0x94bf,	// (0x0007e7d2) mce_icon_pane_g1

0x94c7,	// (0x0007e7da) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0008472d) mce_icon_pane_g

0x94cf,	// (0x0007e7e2) main_mup_pane_g1_ParamLimits

0x94cf,	// (0x0007e7e2) main_mup_pane_g1

0x94e7,	// (0x0007e7fa) main_mup_pane_g2_ParamLimits

0x94e7,	// (0x0007e7fa) main_mup_pane_g2

0x9503,	// (0x0007e816) main_mup_pane_g3_ParamLimits

0x9503,	// (0x0007e816) main_mup_pane_g3

0x951f,	// (0x0007e832) main_mup_pane_g4_ParamLimits

0x951f,	// (0x0007e832) main_mup_pane_g4

0x953b,	// (0x0007e84e) main_mup_pane_g5_ParamLimits

0x953b,	// (0x0007e84e) main_mup_pane_g5

0x955c,	// (0x0007e86f) main_mup_pane_g6_ParamLimits

0x955c,	// (0x0007e86f) main_mup_pane_g6

0x9578,	// (0x0007e88b) main_mup_pane_g7_ParamLimits

0x9578,	// (0x0007e88b) main_mup_pane_g7

0x9594,	// (0x0007e8a7) main_mup_pane_g8_ParamLimits

0x9594,	// (0x0007e8a7) main_mup_pane_g8

0x95b4,	// (0x0007e8c7) main_mup_pane_g9_ParamLimits

0x95b4,	// (0x0007e8c7) main_mup_pane_g9

0x95d3,	// (0x0007e8e6) main_mup_pane_g10_ParamLimits

0x95d3,	// (0x0007e8e6) main_mup_pane_g10

0x95f2,	// (0x0007e905) main_mup_pane_g11_ParamLimits

0x95f2,	// (0x0007e905) main_mup_pane_g11

0x960a,	// (0x0007e91d) main_mup_pane_g12_ParamLimits

0x960a,	// (0x0007e91d) main_mup_pane_g12

0x9618,	// (0x0007e92b) main_mup_pane_g13_ParamLimits

0x9618,	// (0x0007e92b) main_mup_pane_g13

0x000c,

0xf41f,	// (0x00084732) main_mup_pane_g_ParamLimits

0xf41f,	// (0x00084732) main_mup_pane_g

0x962e,	// (0x0007e941) main_mup_pane_t1_ParamLimits

0x962e,	// (0x0007e941) main_mup_pane_t1

0x964b,	// (0x0007e95e) main_mup_pane_t2_ParamLimits

0x964b,	// (0x0007e95e) main_mup_pane_t2

0x9665,	// (0x0007e978) main_mup_pane_t3_ParamLimits

0x9665,	// (0x0007e978) main_mup_pane_t3

0x967f,	// (0x0007e992) main_mup_pane_t4_ParamLimits

0x967f,	// (0x0007e992) main_mup_pane_t4

0x9691,	// (0x0007e9a4) main_mup_pane_t5_ParamLimits

0x9691,	// (0x0007e9a4) main_mup_pane_t5

0x96a3,	// (0x0007e9b6) main_mup_pane_t6_ParamLimits

0x96a3,	// (0x0007e9b6) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0008474d) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0008474d) main_mup_pane_t

0x96b9,	// (0x0007e9cc) mup_progress_pane_ParamLimits

0x96b9,	// (0x0007e9cc) mup_progress_pane

0x96c5,	// (0x0007e9d8) mup_visualizer_pane_ParamLimits

0x96c5,	// (0x0007e9d8) mup_visualizer_pane

0x96ff,	// (0x0007ea12) mup_volume_pane_ParamLimits

0x96ff,	// (0x0007ea12) mup_volume_pane

0x173b,	// (0x00076a4e) mup_visualizer_pane_g1_ParamLimits

0x173b,	// (0x00076a4e) mup_visualizer_pane_g1

0x173b,	// (0x00076a4e) mup_visualizer_pane_g2_ParamLimits

0x173b,	// (0x00076a4e) mup_visualizer_pane_g2

0x14b9,	// (0x000767cc) mup_visualizer_pane_g3_ParamLimits

0x14b9,	// (0x000767cc) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0008475a) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0008475a) mup_visualizer_pane_g

0x0a44,	// (0x00075d57) mup_volume_pane_g1

0x1751,	// (0x00076a64) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x00084761) mup_volume_pane_g

0x0a44,	// (0x00075d57) mup_progress_pane_g1

0x175a,	// (0x00076a6d) mup_progress_pane_g2

0x1763,	// (0x00076a76) mup_progress_pane_g3

0x0002,

0xf453,	// (0x00084766) mup_progress_pane_g

0x06cf,	// (0x000759e2) bg_popup_window_pane_cp05

0x176c,	// (0x00076a7f) heading_pane_cp02_ParamLimits

0x176c,	// (0x00076a7f) heading_pane_cp02

0x1786,	// (0x00076a99) list_popup_blid_pane

0x178e,	// (0x00076aa1) list_blid_sat_info_pane_ParamLimits

0x178e,	// (0x00076aa1) list_blid_sat_info_pane

0x17a1,	// (0x00076ab4) list_blid_sat_info_pane_g1

0x17a9,	// (0x00076abc) list_blid_sat_info_pane_t1

0x980c,	// (0x0007eb1f) mup_equalizer_pane_ParamLimits

0x980c,	// (0x0007eb1f) mup_equalizer_pane

0x982d,	// (0x0007eb40) mup_equalizer_pane_cp1_ParamLimits

0x982d,	// (0x0007eb40) mup_equalizer_pane_cp1

0x984e,	// (0x0007eb61) mup_equalizer_pane_cp2_ParamLimits

0x984e,	// (0x0007eb61) mup_equalizer_pane_cp2

0x986f,	// (0x0007eb82) mup_equalizer_pane_cp3_ParamLimits

0x986f,	// (0x0007eb82) mup_equalizer_pane_cp3

0x9890,	// (0x0007eba3) mup_equalizer_pane_cp4_ParamLimits

0x9890,	// (0x0007eba3) mup_equalizer_pane_cp4

0x98b1,	// (0x0007ebc4) mup_equalizer_pane_cp5

0x98c7,	// (0x0007ebda) mup_equalizer_pane_cp6

0x98df,	// (0x0007ebf2) mup_equalizer_pane_cp7

0x293e,	// (0x00077c51) bg_popup_call_poc_act_pane_g9

0x2946,	// (0x00077c59) bg_popup_call_poc_act_pane_g10

0x294e,	// (0x00077c61) bg_popup_call_poc_act_pane_g11

0x000a,

0x092a,	// (0x00075c3d) mup_scale_pane

0x0a44,	// (0x00075d57) mup_scale_pane_g1

0x17b7,	// (0x00076aca) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x00084782) mup_scale_pane_g

0x17db,	// (0x00076aee) msg_data_pane

0x17e3,	// (0x00076af6) scroll_pane_cp017

0x5d99,	// (0x0007b0ac) bg_list_pane_cp04_ParamLimits

0x5d99,	// (0x0007b0ac) bg_list_pane_cp04

0x17eb,	// (0x00076afe) msg_data_pane_g1

0x9909,	// (0x0007ec1c) msg_data_pane_g2

0x9913,	// (0x0007ec26) msg_data_pane_g3

0x991b,	// (0x0007ec2e) msg_data_pane_g4

0x9923,	// (0x0007ec36) msg_data_pane_g5

0x992b,	// (0x0007ec3e) msg_data_pane_g6

0x9933,	// (0x0007ec46) msg_data_pane_g7

0x0006,

0xf47e,	// (0x00084791) msg_data_pane_g

0x5dbf,	// (0x0007b0d2) msg_text_pane_ParamLimits

0x5dbf,	// (0x0007b0d2) msg_text_pane

0x993b,	// (0x0007ec4e) qrid_highlight_pane_cp011_ParamLimits

0x993b,	// (0x0007ec4e) qrid_highlight_pane_cp011

0x06cf,	// (0x000759e2) msg_body_pane

0x06cf,	// (0x000759e2) msg_header_pane

0x17f3,	// (0x00076b06) input_focus_pane_cp07

0x5e02,	// (0x0007b115) msg_header_pane_t1_ParamLimits

0x5e02,	// (0x0007b115) msg_header_pane_t1

0x5e14,	// (0x0007b127) msg_header_pane_t2_ParamLimits

0x5e14,	// (0x0007b127) msg_header_pane_t2

0x0001,

0xf492,	// (0x000847a5) msg_header_pane_t_ParamLimits

0xf492,	// (0x000847a5) msg_header_pane_t

0x1808,	// (0x00076b1b) msg_body_pane_g1

0x5e26,	// (0x0007b139) msg_body_pane_t1_ParamLimits

0x5e26,	// (0x0007b139) msg_body_pane_t1

0x5e57,	// (0x0007b16a) msg_body_pane_t2_ParamLimits

0x5e57,	// (0x0007b16a) msg_body_pane_t2

0x5e69,	// (0x0007b17c) msg_body_pane_t3_ParamLimits

0x5e69,	// (0x0007b17c) msg_body_pane_t3

0x0002,

0xf497,	// (0x000847aa) msg_body_pane_t_ParamLimits

0xf497,	// (0x000847aa) msg_body_pane_t

0x99b0,	// (0x0007ecc3) main_viewer_pane_g1_ParamLimits

0x99b0,	// (0x0007ecc3) main_viewer_pane_g1

0x99bc,	// (0x0007eccf) main_viewer_pane_g2_ParamLimits

0x99bc,	// (0x0007eccf) main_viewer_pane_g2

0x99c8,	// (0x0007ecdb) main_viewer_pane_g3_ParamLimits

0x99c8,	// (0x0007ecdb) main_viewer_pane_g3

0x99d9,	// (0x0007ecec) main_viewer_pane_g4_ParamLimits

0x99d9,	// (0x0007ecec) main_viewer_pane_g4

0x99ea,	// (0x0007ecfd) main_viewer_pane_g5_ParamLimits

0x99ea,	// (0x0007ecfd) main_viewer_pane_g5

0x99ea,	// (0x0007ecfd) main_viewer_pane_g7_ParamLimits

0x99ea,	// (0x0007ecfd) main_viewer_pane_g7

0x99fc,	// (0x0007ed0f) main_viewer_pane_g8_ParamLimits

0x99fc,	// (0x0007ed0f) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000847ba) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000847ba) main_viewer_pane_g

0x1810,	// (0x00076b23) viewer_content_pane_ParamLimits

0x1810,	// (0x00076b23) viewer_content_pane

0x9a34,	// (0x0007ed47) main_postcard_pane_g1_ParamLimits

0x9a34,	// (0x0007ed47) main_postcard_pane_g1

0x9a42,	// (0x0007ed55) main_postcard_pane_g2_ParamLimits

0x9a42,	// (0x0007ed55) main_postcard_pane_g2

0x9a50,	// (0x0007ed63) main_postcard_pane_g3_ParamLimits

0x9a50,	// (0x0007ed63) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000847cb) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000847cb) main_postcard_pane_g

0x9a60,	// (0x0007ed73) main_postcard_pane_g4

0x2b0d,	// (0x00077e20) smil_status_volume_pane_g2

0x9a8c,	// (0x0007ed9f) postcard_pane_ParamLimits

0x9a8c,	// (0x0007ed9f) postcard_pane

0x173b,	// (0x00076a4e) postcard_pane_g1_ParamLimits

0x173b,	// (0x00076a4e) postcard_pane_g1

0x9abe,	// (0x0007edd1) postcard_pane_g2_ParamLimits

0x9abe,	// (0x0007edd1) postcard_pane_g2

0x9aca,	// (0x0007eddd) postcard_pane_g3_ParamLimits

0x9aca,	// (0x0007eddd) postcard_pane_g3

0x182c,	// (0x00076b3f) postcard_pane_g4_ParamLimits

0x182c,	// (0x00076b3f) postcard_pane_g4

0x9ad6,	// (0x0007ede9) postcard_pane_g5_ParamLimits

0x9ad6,	// (0x0007ede9) postcard_pane_g5

0x9ae2,	// (0x0007edf5) postcard_pane_g6_ParamLimits

0x9ae2,	// (0x0007edf5) postcard_pane_g6

0x181e,	// (0x00076b31) postcard_pane_g7_ParamLimits

0x181e,	// (0x00076b31) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000847d8) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000847d8) postcard_pane_g

0x9aee,	// (0x0007ee01) main_mp2_pane_g1_ParamLimits

0x9aee,	// (0x0007ee01) main_mp2_pane_g1

0x9afa,	// (0x0007ee0d) main_mp2_pane_g2_ParamLimits

0x9afa,	// (0x0007ee0d) main_mp2_pane_g2

0x9b06,	// (0x0007ee19) main_mp2_pane_g3_ParamLimits

0x9b06,	// (0x0007ee19) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000847e7) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000847e7) main_mp2_pane_g

0x9b12,	// (0x0007ee25) main_mp2_pane_t1_ParamLimits

0x9b12,	// (0x0007ee25) main_mp2_pane_t1

0x9b29,	// (0x0007ee3c) main_mp2_pane_t2_ParamLimits

0x9b29,	// (0x0007ee3c) main_mp2_pane_t2

0x9b3d,	// (0x0007ee50) main_mp2_pane_t3_ParamLimits

0x9b3d,	// (0x0007ee50) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000847ee) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000847ee) main_mp2_pane_t

0x183a,	// (0x00076b4d) pec_content_pane_ParamLimits

0x183a,	// (0x00076b4d) pec_content_pane

0x0d56,	// (0x00076069) scroll_pane_cp015

0x184c,	// (0x00076b5f) pec_attribute_pane_ParamLimits

0x184c,	// (0x00076b5f) pec_attribute_pane

0x9b4f,	// (0x0007ee62) pec_content_pane_g1_ParamLimits

0x9b4f,	// (0x0007ee62) pec_content_pane_g1

0x185c,	// (0x00076b6f) pec_content_pane_t1_ParamLimits

0x185c,	// (0x00076b6f) pec_content_pane_t1

0x186e,	// (0x00076b81) pec_content_pane_t2_ParamLimits

0x186e,	// (0x00076b81) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000847f5) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000847f5) pec_content_pane_t

0x9b5b,	// (0x0007ee6e) list_single_graphic_pane_cp01_ParamLimits

0x9b5b,	// (0x0007ee6e) list_single_graphic_pane_cp01

0x092a,	// (0x00075c3d) bg_popup_sub_pane_cp04

0x1880,	// (0x00076b93) popup_mup_playback_window_g1

0x188c,	// (0x00076b9f) popup_mup_playback_window_t1

0x18a1,	// (0x00076bb4) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000847fa) popup_mup_playback_window_t

0x18d8,	// (0x00076beb) main_image_pane_g1_ParamLimits

0x18d8,	// (0x00076beb) main_image_pane_g1

0x191b,	// (0x00076c2e) scroll_pane_cp018_ParamLimits

0x191b,	// (0x00076c2e) scroll_pane_cp018

0x1933,	// (0x00076c46) scroll_pane_cp016_ParamLimits

0x1933,	// (0x00076c46) scroll_pane_cp016

0x9bf4,	// (0x0007ef07) smil2_image_pane_ParamLimits

0x9bf4,	// (0x0007ef07) smil2_image_pane

0x9c24,	// (0x0007ef37) smil2_root_pane_ParamLimits

0x9c24,	// (0x0007ef37) smil2_root_pane

0x9c50,	// (0x0007ef63) smil2_text_pane_ParamLimits

0x9c50,	// (0x0007ef63) smil2_text_pane

0x06cf,	// (0x000759e2) bg_list_pane_cp06

0x196f,	// (0x00076c82) grid_radio_pane

0x06cf,	// (0x000759e2) bg_popup_window_pane_cp06

0x1977,	// (0x00076c8a) main_fmradio_pane_t1

0x1308,	// (0x0007661b) heading_pane_cp04

0x1985,	// (0x00076c98) main_fmradio_pane_t2

0x2956,	// (0x00077c69) popup_cale_lunar_info_window_g1

0x1993,	// (0x00076ca6) main_fmradio_pane_t3

0x295e,	// (0x00077c71) popup_cale_lunar_info_window_g2

0x19a1,	// (0x00076cb4) main_fmradio_pane_t4

0x0001,

0x19af,	// (0x00076cc2) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000848d5) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0008480f) main_fmradio_pane_t

0x19bd,	// (0x00076cd0) wait_bar_pane_cp03

0x19c5,	// (0x00076cd8) cell_fmradio_pane_ParamLimits

0x19c5,	// (0x00076cd8) cell_fmradio_pane

0x181e,	// (0x00076b31) cell_fmradio_pane_g1_ParamLimits

0x181e,	// (0x00076b31) cell_fmradio_pane_g1

0x06cf,	// (0x000759e2) grid_highlight_pane_cp011

0x19d8,	// (0x00076ceb) poc_content_pane_ParamLimits

0x19d8,	// (0x00076ceb) poc_content_pane

0x19ea,	// (0x00076cfd) scroll_pane_cp019

0x9c90,	// (0x0007efa3) popup_call_poc_act_window_ParamLimits

0x9c90,	// (0x0007efa3) popup_call_poc_act_window

0x9c9d,	// (0x0007efb0) popup_call_poc_inact_window_ParamLimits

0x9c9d,	// (0x0007efb0) popup_call_poc_inact_window

0xf599,	// (0x000848ac) bg_popup_call_poc_act_pane_g

0x28ce,	// (0x00077be1) bg_popup_call_poc_inact_pane_g1

0x28d6,	// (0x00077be9) bg_popup_call_poc_inact_pane_g2

0x19f2,	// (0x00076d05) popup_call_poc_act_window_g2

0x28de,	// (0x00077bf1) bg_popup_call_poc_inact_pane_g3

0x28e6,	// (0x00077bf9) bg_popup_call_poc_inact_pane_g4

0x28ee,	// (0x00077c01) bg_popup_call_poc_inact_pane_g5

0x19fa,	// (0x00076d0d) popup_call_poc_act_window_t1_ParamLimits

0x19fa,	// (0x00076d0d) popup_call_poc_act_window_t1

0x1a22,	// (0x00076d35) popup_call_poc_act_window_t2_ParamLimits

0x1a22,	// (0x00076d35) popup_call_poc_act_window_t2

0x1a4a,	// (0x00076d5d) popup_call_poc_act_window_t3_ParamLimits

0x1a4a,	// (0x00076d5d) popup_call_poc_act_window_t3

0x1a72,	// (0x00076d85) popup_call_poc_act_window_t4_ParamLimits

0x1a72,	// (0x00076d85) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0008481a) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0008481a) popup_call_poc_act_window_t

0x28f6,	// (0x00077c09) bg_popup_call_poc_inact_pane_g6

0x28fe,	// (0x00077c11) bg_popup_call_poc_inact_pane_g7

0x2906,	// (0x00077c19) bg_popup_call_poc_inact_pane_g8

0x1a84,	// (0x00076d97) popup_call_poc_inact_window_g2

0x290e,	// (0x00077c21) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x00084899) bg_popup_call_poc_inact_pane_g

0x1a8c,	// (0x00076d9f) popup_call_poc_inact_window_t1_ParamLimits

0x1a8c,	// (0x00076d9f) popup_call_poc_inact_window_t1

0x1aa1,	// (0x00076db4) popup_call_poc_inact_window_t2_ParamLimits

0x1aa1,	// (0x00076db4) popup_call_poc_inact_window_t2

0x1ab6,	// (0x00076dc9) popup_call_poc_inact_window_t3_ParamLimits

0x1ab6,	// (0x00076dc9) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x00084823) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x00084823) popup_call_poc_inact_window_t

0x2a93,	// (0x00077da6) context_pane_ParamLimits

0xa2d1,	// (0x0007f5e4) signal_pane_ParamLimits

0x167c,	// (0x0007698f) main_call2_pane

0xa244,	// (0x0007f557) popup_phob_thumbnail2_window_ParamLimits

0xa244,	// (0x0007f557) popup_phob_thumbnail2_window

0x995e,	// (0x0007ec71) aid_hotspot_pointer_arrow_pane

0x9966,	// (0x0007ec79) aid_hotspot_pointer_hand_pane

0x9fbf,	// (0x0007f2d2) phob_pre_status_pane_g5

0x7c80,	// (0x0007cf93) cams_zoom_pane_ParamLimits

0x7c8c,	// (0x0007cf9f) image_vga_pane_ParamLimits

0x7c9b,	// (0x0007cfae) main_camera_pane_g1_ParamLimits

0x7ca9,	// (0x0007cfbc) main_camera_pane_g2_ParamLimits

0x7cb5,	// (0x0007cfc8) main_camera_pane_g3_ParamLimits

0x7cc1,	// (0x0007cfd4) main_camera_pane_g4_ParamLimits

0x7ccd,	// (0x0007cfe0) main_camera_pane_g5_ParamLimits

0x7cd9,	// (0x0007cfec) main_camera_pane_g6_ParamLimits

0x7ce5,	// (0x0007cff8) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x00084522) main_camera_pane_g_ParamLimits

0x7cf1,	// (0x0007d004) main_camera_pane_t1_ParamLimits

0x7d03,	// (0x0007d016) main_camera_pane_t2_ParamLimits

0xf220,	// (0x00084533) main_camera_pane_t_ParamLimits

0x092a,	// (0x00075c3d) bg_popup_preview_window_pane_cp01_ParamLimits

0x092a,	// (0x00075c3d) bg_popup_preview_window_pane_cp01

0x1acb,	// (0x00076dde) popup_phob_thumbnail2_window_g1_ParamLimits

0x1acb,	// (0x00076dde) popup_phob_thumbnail2_window_g1

0x06cf,	// (0x000759e2) call2_cli_visual_pane

0x9cb9,	// (0x0007efcc) popup_call2_audio_conf_window_ParamLimits

0x9cb9,	// (0x0007efcc) popup_call2_audio_conf_window

0x9cce,	// (0x0007efe1) popup_call2_audio_first_window_ParamLimits

0x9cce,	// (0x0007efe1) popup_call2_audio_first_window

0x9d6c,	// (0x0007f07f) popup_call2_audio_in_window_ParamLimits

0x9d6c,	// (0x0007f07f) popup_call2_audio_in_window

0x9dae,	// (0x0007f0c1) popup_call2_audio_out_window_ParamLimits

0x9dae,	// (0x0007f0c1) popup_call2_audio_out_window

0x9e10,	// (0x0007f123) popup_call2_audio_second_window_ParamLimits

0x9e10,	// (0x0007f123) popup_call2_audio_second_window

0x9e6e,	// (0x0007f181) popup_call2_audio_wait_window_ParamLimits

0x9e6e,	// (0x0007f181) popup_call2_audio_wait_window

0x06cf,	// (0x000759e2) bg_popup_call2_act_pane_cp03

0x090c,	// (0x00075c1f) list_conf_pane_cp

0x1ad7,	// (0x00076dea) popup_call2_audio_conf_window_t1

0x1365,	// (0x00076678) list_single_graphic_popup_conf2_pane_ParamLimits

0x1365,	// (0x00076678) list_single_graphic_popup_conf2_pane

0x1378,	// (0x0007668b) list_highlight_pane_cp04

0x1ae5,	// (0x00076df8) list_single_graphic_popup_conf2_pane_g1

0x1389,	// (0x0007669c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0008482a) list_single_graphic_popup_conf2_pane_g

0x1aef,	// (0x00076e02) list_single_graphic_popup_conf2_pane_t1

0x1afd,	// (0x00076e10) bg_popup_call2_act_pane_cp01_ParamLimits

0x1afd,	// (0x00076e10) bg_popup_call2_act_pane_cp01

0x1b87,	// (0x00076e9a) call_type_pane_cp05_ParamLimits

0x1b87,	// (0x00076e9a) call_type_pane_cp05

0x1bdb,	// (0x00076eee) popup_call2_audio_second_window_g1_ParamLimits

0x1bdb,	// (0x00076eee) popup_call2_audio_second_window_g1

0x1c2f,	// (0x00076f42) popup_call2_audio_second_window_g2_ParamLimits

0x1c2f,	// (0x00076f42) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0008482f) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0008482f) popup_call2_audio_second_window_g

0x1c94,	// (0x00076fa7) popup_call2_audio_second_window_t1_ParamLimits

0x1c94,	// (0x00076fa7) popup_call2_audio_second_window_t1

0x1d4f,	// (0x00077062) popup_call2_audio_second_window_t2_ParamLimits

0x1d4f,	// (0x00077062) popup_call2_audio_second_window_t2

0x1da2,	// (0x000770b5) popup_call2_audio_second_window_t3_ParamLimits

0x1da2,	// (0x000770b5) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x00084836) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x00084836) popup_call2_audio_second_window_t

0x06cf,	// (0x000759e2) bg_popup_call2_in_pane_cp02

0x06d9,	// (0x000759ec) call_type_pane_cp04

0x06e1,	// (0x000759f4) popup_call2_audio_wait_window_g1

0x06e9,	// (0x000759fc) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008440f) popup_call2_audio_wait_window_g

0x06f1,	// (0x00075a04) popup_call2_audio_wait_window_t3

0x1e95,	// (0x000771a8) bg_popup_call2_act_pane_ParamLimits

0x1e95,	// (0x000771a8) bg_popup_call2_act_pane

0x1f55,	// (0x00077268) call_type_pane_cp03_ParamLimits

0x1f55,	// (0x00077268) call_type_pane_cp03

0x1fb9,	// (0x000772cc) popup_call2_audio_first_window_g1_ParamLimits

0x1fb9,	// (0x000772cc) popup_call2_audio_first_window_g1

0x2029,	// (0x0007733c) popup_call2_audio_first_window_g2_ParamLimits

0x2029,	// (0x0007733c) popup_call2_audio_first_window_g2

0x173b,	// (0x00076a4e) popup_call2_audio_first_window_g3_ParamLimits

0x173b,	// (0x00076a4e) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0008483f) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0008483f) popup_call2_audio_first_window_g

0x2107,	// (0x0007741a) popup_call2_audio_first_window_t1_ParamLimits

0x2107,	// (0x0007741a) popup_call2_audio_first_window_t1

0x220a,	// (0x0007751d) popup_call2_audio_first_window_t4_ParamLimits

0x220a,	// (0x0007751d) popup_call2_audio_first_window_t4

0x22f9,	// (0x0007760c) popup_call2_audio_first_window_t5_ParamLimits

0x22f9,	// (0x0007760c) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0008484a) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0008484a) popup_call2_audio_first_window_t

0x0922,	// (0x00075c35) bg_popup_call2_act_pane_g1

0x2966,	// (0x00077c79) popup_cale_lunar_info_window_t1

0x2974,	// (0x00077c87) popup_cale_lunar_info_window_t2

0x2982,	// (0x00077c95) popup_cale_lunar_info_window_t3

0x06cf,	// (0x000759e2) bg_popup_call2_bubble_pane

0x23fa,	// (0x0007770d) bg_popup_call2_in_pane_cp01_ParamLimits

0x23fa,	// (0x0007770d) bg_popup_call2_in_pane_cp01

0xeed1,	// (0x000841e4) call_type_pane_cp02

0x2442,	// (0x00077755) popup_call2_audio_out_window_g1_ParamLimits

0x2442,	// (0x00077755) popup_call2_audio_out_window_g1

0x246e,	// (0x00077781) popup_call2_audio_out_window_g2_ParamLimits

0x246e,	// (0x00077781) popup_call2_audio_out_window_g2

0x2496,	// (0x000777a9) popup_call2_audio_out_window_g3_ParamLimits

0x2496,	// (0x000777a9) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x00084853) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x00084853) popup_call2_audio_out_window_g

0x24d1,	// (0x000777e4) popup_call2_audio_out_window_t1_ParamLimits

0x24d1,	// (0x000777e4) popup_call2_audio_out_window_t1

0x2530,	// (0x00077843) popup_call2_audio_out_window_t2_ParamLimits

0x2530,	// (0x00077843) popup_call2_audio_out_window_t2

0x2584,	// (0x00077897) popup_call2_audio_out_window_t3_ParamLimits

0x2584,	// (0x00077897) popup_call2_audio_out_window_t3

0x259a,	// (0x000778ad) popup_call2_audio_out_window_t4_ParamLimits

0x259a,	// (0x000778ad) popup_call2_audio_out_window_t4

0x25b0,	// (0x000778c3) popup_call2_audio_out_window_t5_ParamLimits

0x25b0,	// (0x000778c3) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0008485c) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0008485c) popup_call2_audio_out_window_t

0x2614,	// (0x00077927) bg_popup_call2_in_pane_ParamLimits

0x2614,	// (0x00077927) bg_popup_call2_in_pane

0x2670,	// (0x00077983) popup_call2_audio_in_window_g1_ParamLimits

0x2670,	// (0x00077983) popup_call2_audio_in_window_g1

0x26a8,	// (0x000779bb) popup_call2_audio_in_window_g2_ParamLimits

0x26a8,	// (0x000779bb) popup_call2_audio_in_window_g2

0x26e0,	// (0x000779f3) popup_call2_audio_in_window_g3_ParamLimits

0x26e0,	// (0x000779f3) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x00084869) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x00084869) popup_call2_audio_in_window_g

0x2738,	// (0x00077a4b) popup_call2_audio_in_window_t1_ParamLimits

0x2738,	// (0x00077a4b) popup_call2_audio_in_window_t1

0x27b8,	// (0x00077acb) popup_call2_audio_in_window_t2_ParamLimits

0x27b8,	// (0x00077acb) popup_call2_audio_in_window_t2

0x2838,	// (0x00077b4b) popup_call2_audio_in_window_t3_ParamLimits

0x2838,	// (0x00077b4b) popup_call2_audio_in_window_t3

0x2852,	// (0x00077b65) popup_call2_audio_in_window_t4_ParamLimits

0x2852,	// (0x00077b65) popup_call2_audio_in_window_t4

0x2864,	// (0x00077b77) popup_call2_audio_in_window_t5_ParamLimits

0x2864,	// (0x00077b77) popup_call2_audio_in_window_t5

0x2879,	// (0x00077b8c) popup_call2_audio_in_window_t6_ParamLimits

0x2879,	// (0x00077b8c) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x00084872) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x00084872) popup_call2_audio_in_window_t

0x0922,	// (0x00075c35) bg_popup_call2_in_pane_g1

0x2990,	// (0x00077ca3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000848da) popup_cale_lunar_info_window_t

0x092a,	// (0x00075c3d) bg_popup_call2_rect_pane_ParamLimits

0x092a,	// (0x00075c3d) bg_popup_call2_rect_pane

0x06cf,	// (0x000759e2) call2_cli_visual_graphic_pane

0x06cf,	// (0x000759e2) call2_cli_visual_text_pane

0xa377,	// (0x0007f68a) smil_status_volume_pane_g3

0x0002,

0x0a44,	// (0x00075d57) call2_cli_visual_graphic_pane_g1

0x0a44,	// (0x00075d57) call2_cli_visual_graphic_pane_g2

0x0a44,	// (0x00075d57) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0008487f) call2_cli_visual_graphic_pane_g

0x288e,	// (0x00077ba1) bg_popup_call2_rect_pane_g1

0x0ad0,	// (0x00075de3) bg_popup_call2_rect_pane_g2

0x2896,	// (0x00077ba9) bg_popup_call2_rect_pane_g3

0x289e,	// (0x00077bb1) bg_popup_call2_rect_pane_g4

0x28a6,	// (0x00077bb9) bg_popup_call2_rect_pane_g5

0x28ae,	// (0x00077bc1) bg_popup_call2_rect_pane_g6

0x28b6,	// (0x00077bc9) bg_popup_call2_rect_pane_g7

0x28be,	// (0x00077bd1) bg_popup_call2_rect_pane_g8

0x28c6,	// (0x00077bd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x00084886) bg_popup_call2_rect_pane_g

0x28ce,	// (0x00077be1) bg_popup_call2_bubble_pane_g1

0x28d6,	// (0x00077be9) bg_popup_call2_bubble_pane_g2

0x28de,	// (0x00077bf1) bg_popup_call2_bubble_pane_g3

0x28e6,	// (0x00077bf9) bg_popup_call2_bubble_pane_g4

0x28ee,	// (0x00077c01) bg_popup_call2_bubble_pane_g5

0x28f6,	// (0x00077c09) bg_popup_call2_bubble_pane_g6

0x28fe,	// (0x00077c11) bg_popup_call2_bubble_pane_g7

0x2906,	// (0x00077c19) bg_popup_call2_bubble_pane_g8

0x290e,	// (0x00077c21) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x00084899) bg_popup_call2_bubble_pane_g

0x76b3,	// (0x0007c9c6) aid_cale_week_size_cell_pane

0x7d15,	// (0x0007d028) aid_cams_cif_uncrop_pane_ParamLimits

0x7d15,	// (0x0007d028) aid_cams_cif_uncrop_pane

0x7e70,	// (0x0007d183) aid_cams_size_cell_ParamLimits

0x7e70,	// (0x0007d183) aid_cams_size_cell

0x7e7c,	// (0x0007d18f) grid_cams_pane_ParamLimits

0x7e8a,	// (0x0007d19d) linegrid_cams_pane_ParamLimits

0x7f79,	// (0x0007d28c) call_video_pane_t1

0x7f9a,	// (0x0007d2ad) call_video_pane_t2

0x0001,

0xf273,	// (0x00084586) call_video_pane_t

0x84e3,	// (0x0007d7f6) aid_cale_month_size_cell_pane_ParamLimits

0x84e3,	// (0x0007d7f6) aid_cale_month_size_cell_pane

0xf610,	// (0x00084923) smil_status_volume_pane_g

0xa384,	// (0x0007f697) volume_smil_pane_ParamLimits

0x6e22,	// (0x0007c135) aid_popup2_width_pane

0x75b5,	// (0x0007c8c8) cell_qdial_pane_g4_ParamLimits

0x75b5,	// (0x0007c8c8) cell_qdial_pane_g4

0x93f4,	// (0x0007e707) aid_blid_cardinal_pane_ParamLimits

0x9404,	// (0x0007e717) aid_blid_destination_pane_ParamLimits

0x9404,	// (0x0007e717) aid_blid_destination_pane

0x092a,	// (0x00075c3d) bg_popup_call_poc_act_pane_ParamLimits

0x092a,	// (0x00075c3d) bg_popup_call_poc_act_pane

0x092a,	// (0x00075c3d) bg_popup_call_poc_inact_pane_ParamLimits

0x092a,	// (0x00075c3d) bg_popup_call_poc_inact_pane

0x2916,	// (0x00077c29) bg_popup_call_poc_act_pane_g1

0x291e,	// (0x00077c31) bg_popup_call_poc_act_pane_g2

0x2926,	// (0x00077c39) bg_popup_call_poc_act_pane_g3

0x28e6,	// (0x00077bf9) bg_popup_call_poc_act_pane_g4

0x28ee,	// (0x00077c01) bg_popup_call_poc_act_pane_g5

0x292e,	// (0x00077c41) bg_popup_call_poc_act_pane_g6

0x28fe,	// (0x00077c11) bg_popup_call_poc_act_pane_g7

0x2936,	// (0x00077c49) bg_popup_call_poc_act_pane_g8

0x06cf,	// (0x000759e2) main_usb_pane

0xa173,	// (0x0007f486) popup_cale_lunar_info_window

0x82c5,	// (0x0007d5d8) im_reading_pane_t1_ParamLimits

0x0cae,	// (0x00075fc1) list_im_pane_ParamLimits

0x0cbf,	// (0x00075fd2) scroll_pane_cp07_ParamLimits

0x06cf,	// (0x000759e2) grid_highlight_pane_cp012

0x092a,	// (0x00075c3d) mup_scale_pane_ParamLimits

0x173b,	// (0x00076a4e) main_usb_pane_g1_ParamLimits

0x173b,	// (0x00076a4e) main_usb_pane_g1

0x9ee2,	// (0x0007f1f5) main_usb_pane_g2_ParamLimits

0x9ee2,	// (0x0007f1f5) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000848c3) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000848c3) main_usb_pane_g

0x9eee,	// (0x0007f201) main_usb_pane_t1_ParamLimits

0x9eee,	// (0x0007f201) main_usb_pane_t1

0x9f00,	// (0x0007f213) main_usb_pane_t2_ParamLimits

0x9f00,	// (0x0007f213) main_usb_pane_t2

0x9f12,	// (0x0007f225) main_usb_pane_t3_ParamLimits

0x9f12,	// (0x0007f225) main_usb_pane_t3

0x9f24,	// (0x0007f237) main_usb_pane_t4_ParamLimits

0x9f24,	// (0x0007f237) main_usb_pane_t4

0x9f36,	// (0x0007f249) main_usb_pane_t5_ParamLimits

0x9f36,	// (0x0007f249) main_usb_pane_t5

0x9f48,	// (0x0007f25b) main_usb_pane_t6_ParamLimits

0x9f48,	// (0x0007f25b) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000848c8) main_usb_pane_t_ParamLimits

0x939a,	// (0x0007e6ad) aid_text_placing

0x93a6,	// (0x0007e6b9) main_location2_pane_t1_ParamLimits

0x93ba,	// (0x0007e6cd) main_location2_pane_t2_ParamLimits

0x93ce,	// (0x0007e6e1) main_location2_pane_t3_ParamLimits

0x93e2,	// (0x0007e6f5) main_location2_pane_t4_ParamLimits

0x93e2,	// (0x0007e6f5) main_location2_pane_t4

0xf3d4,	// (0x000846e7) main_location2_pane_t_ParamLimits

0x0966,	// (0x00075c79) find_pinb_pane_g2_ParamLimits

0x0966,	// (0x00075c79) find_pinb_pane_g2

0x0001,

0xf122,	// (0x00084435) find_pinb_pane_g_ParamLimits

0xf122,	// (0x00084435) find_pinb_pane_g

0x0972,	// (0x00075c85) find_pinb_pane_t1_ParamLimits

0x0984,	// (0x00075c97) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0008443a) find_pinb_pane_t_ParamLimits

0x06cf,	// (0x000759e2) main_call3_pane

0x8a37,	// (0x0007dd4a) cale_month_day_heading_pane_t1_ParamLimits

0x8abd,	// (0x0007ddd0) cale_month_day_heading_pane_t2_ParamLimits

0x8b4e,	// (0x0007de61) cale_month_day_heading_pane_t3_ParamLimits

0x8bdf,	// (0x0007def2) cale_month_day_heading_pane_t4_ParamLimits

0x8c70,	// (0x0007df83) cale_month_day_heading_pane_t5_ParamLimits

0x8d01,	// (0x0007e014) cale_month_day_heading_pane_t6_ParamLimits

0x8d92,	// (0x0007e0a5) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000845be) cale_month_day_heading_pane_t_ParamLimits

0x0f72,	// (0x00076285) smil_status_volume_pane

0x9aa6,	// (0x0007edb9) postcard_address_pane_ParamLimits

0x9aa6,	// (0x0007edb9) postcard_address_pane

0x9ab2,	// (0x0007edc5) postcard_message_pane_ParamLimits

0x9ab2,	// (0x0007edc5) postcard_message_pane

0x9ead,	// (0x0007f1c0) call2_cli_visual_pane_t1_ParamLimits

0x9ead,	// (0x0007f1c0) call2_cli_visual_pane_t1

0xa4db,	// (0x0007f7ee) postcard_message_pane_t1_ParamLimits

0xa4db,	// (0x0007f7ee) postcard_message_pane_t1

0xa4c4,	// (0x0007f7d7) postcard_address_pane_t1_ParamLimits

0xa4c4,	// (0x0007f7d7) postcard_address_pane_t1

0xa4b5,	// (0x0007f7c8) popup_call3_audio_in_window_ParamLimits

0xa4b5,	// (0x0007f7c8) popup_call3_audio_in_window

0xa399,	// (0x0007f6ac) bg_popup_call3_in_pane_ParamLimits

0xa399,	// (0x0007f6ac) bg_popup_call3_in_pane

0xa3fb,	// (0x0007f70e) popup_call3_audio_in_window_g1_ParamLimits

0xa3fb,	// (0x0007f70e) popup_call3_audio_in_window_g1

0xa413,	// (0x0007f726) popup_call3_audio_in_window_g2_ParamLimits

0xa413,	// (0x0007f726) popup_call3_audio_in_window_g2

0xa42b,	// (0x0007f73e) popup_call3_audio_in_window_g3_ParamLimits

0xa42b,	// (0x0007f73e) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0008492a) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0008492a) popup_call3_audio_in_window_g

0xa453,	// (0x0007f766) popup_call3_audio_in_window_t1_ParamLimits

0xa453,	// (0x0007f766) popup_call3_audio_in_window_t1

0xa47b,	// (0x0007f78e) popup_call3_audio_in_window_t2_ParamLimits

0xa47b,	// (0x0007f78e) popup_call3_audio_in_window_t2

0xa4a3,	// (0x0007f7b6) popup_call3_audio_in_window_t3_ParamLimits

0xa4a3,	// (0x0007f7b6) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x00084933) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x00084933) popup_call3_audio_in_window_t

0x167c,	// (0x0007698f) bg_popup_call3_rect_pane

0x288e,	// (0x00077ba1) bg_popup_call3_rect_pane_g1

0x0ad0,	// (0x00075de3) bg_popup_call3_rect_pane_g2

0x2896,	// (0x00077ba9) bg_popup_call3_rect_pane_g3

0x289e,	// (0x00077bb1) bg_popup_call3_rect_pane_g4

0x28a6,	// (0x00077bb9) bg_popup_call3_rect_pane_g5

0x28ae,	// (0x00077bc1) bg_popup_call3_rect_pane_g6

0x28b6,	// (0x00077bc9) bg_popup_call3_rect_pane_g7

0x971a,	// (0x0007ea2d) mup_visualizer_osc_pane

0x1749,	// (0x00076a5c) mup_visualizer_spec_pane

0xa3b9,	// (0x0007f6cc) call3_video_qcif_pane_ParamLimits

0xa3b9,	// (0x0007f6cc) call3_video_qcif_pane

0xa3cb,	// (0x0007f6de) call3_video_qcif_uncrop_pane_ParamLimits

0xa3cb,	// (0x0007f6de) call3_video_qcif_uncrop_pane

0xa3d9,	// (0x0007f6ec) call3_video_subqcif_pane_ParamLimits

0xa3d9,	// (0x0007f6ec) call3_video_subqcif_pane

0xa3eb,	// (0x0007f6fe) call3_video_subqcif_uncrop_pane_ParamLimits

0xa3eb,	// (0x0007f6fe) call3_video_subqcif_uncrop_pane

0xa443,	// (0x0007f756) popup_call3_audio_in_window_g4_ParamLimits

0xa443,	// (0x0007f756) popup_call3_audio_in_window_g4

0xa366,	// (0x0007f679) mup_spec_half_pane

0xa36f,	// (0x0007f682) mup_spec_half_pane_cp

0x2af3,	// (0x00077e06) mup_osc_middle_pane

0x2afc,	// (0x00077e0f) mup_visualizer_osc_pane_g1

0xa347,	// (0x0007f65a) mup_spec_bar_pane_ParamLimits

0xa347,	// (0x0007f65a) mup_spec_bar_pane

0x2ae0,	// (0x00077df3) mup_spec_bar_pane_g1

0x2aea,	// (0x00077dfd) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008491e) mup_spec_bar_pane_g

0x76b3,	// (0x0007c9c6) aid_cale_week_size_cell_pane_ParamLimits

0x76c8,	// (0x0007c9db) bg_cale_heading_pane_ParamLimits

0x0b0d,	// (0x00075e20) bg_cale_pane_cp01_ParamLimits

0x76ea,	// (0x0007c9fd) cale_week_corner_pane_ParamLimits

0x7704,	// (0x0007ca17) cale_week_day_heading_pane_ParamLimits

0x7726,	// (0x0007ca39) cale_week_scroll_pane_g1_ParamLimits

0x7743,	// (0x0007ca56) cale_week_scroll_pane_g2_ParamLimits

0x7756,	// (0x0007ca69) cale_week_scroll_pane_g3_ParamLimits

0x7769,	// (0x0007ca7c) cale_week_scroll_pane_g4_ParamLimits

0x777c,	// (0x0007ca8f) cale_week_scroll_pane_g5_ParamLimits

0x778f,	// (0x0007caa2) cale_week_scroll_pane_g6_ParamLimits

0x77a2,	// (0x0007cab5) cale_week_scroll_pane_g7_ParamLimits

0x77b5,	// (0x0007cac8) cale_week_scroll_pane_g8_ParamLimits

0x77ca,	// (0x0007cadd) cale_week_scroll_pane_g9_ParamLimits

0x77dd,	// (0x0007caf0) cale_week_scroll_pane_g10_ParamLimits

0x77f0,	// (0x0007cb03) cale_week_scroll_pane_g11_ParamLimits

0x7803,	// (0x0007cb16) cale_week_scroll_pane_g12_ParamLimits

0x781a,	// (0x0007cb2d) cale_week_scroll_pane_g13_ParamLimits

0x7835,	// (0x0007cb48) cale_week_scroll_pane_g14_ParamLimits

0x7850,	// (0x0007cb63) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000844c6) cale_week_scroll_pane_g_ParamLimits

0x786b,	// (0x0007cb7e) cale_week_time_pane_ParamLimits

0x7880,	// (0x0007cb93) grid_cale_week_pane_ParamLimits

0x0b2b,	// (0x00075e3e) listscroll_cale_week_pane_t1

0x0b3d,	// (0x00075e50) scroll_pane_cp08_ParamLimits

0x854c,	// (0x0007d85f) cale_month_corner_pane_ParamLimits

0x0f48,	// (0x0007625b) cale_month_pane_t1

0x89d4,	// (0x0007dce7) cale_month_week_pane_ParamLimits

0x173b,	// (0x00076a4e) popup_call_status_window_g1_ParamLimits

0x91cd,	// (0x0007e4e0) popup_call_status_window_g2_ParamLimits

0x91d9,	// (0x0007e4ec) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0008466e) popup_call_status_window_g_ParamLimits

0x1300,	// (0x00076613) aid_call2_pane

0x5df6,	// (0x0007b109) msg_header_pane_g1

0x9aa6,	// (0x0007edb9) postcard_address2_pane_ParamLimits

0x9aa6,	// (0x0007edb9) postcard_address2_pane

0x9ab2,	// (0x0007edc5) postcard_message2_pane_ParamLimits

0x9ab2,	// (0x0007edc5) postcard_message2_pane

0xa2df,	// (0x0007f5f2) message2_row_pane_ParamLimits

0xa2df,	// (0x0007f5f2) message2_row_pane

0xa2fa,	// (0x0007f60d) address2_row_pane_ParamLimits

0xa2fa,	// (0x0007f60d) address2_row_pane

0x2aae,	// (0x00077dc1) postcard_message2_row_pane_g1

0x2ab6,	// (0x00077dc9) postcard_message2_row_pane_t1

0x2aae,	// (0x00077dc1) address2_row_pane_g1

0x2ab6,	// (0x00077dc9) address2_row_pane_t1

0x7bd7,	// (0x0007ceea) aid_size_cell_vorec

0x06cf,	// (0x000759e2) main_rss_pane

0xa30d,	// (0x0007f620) rss_list_single_pane_ParamLimits

0xa30d,	// (0x0007f620) rss_list_single_pane

0x2ac4,	// (0x00077dd7) rss_list_single_pane_t1

0x2ad2,	// (0x00077de5) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x00084919) rss_list_single_pane_t

0x06cf,	// (0x000759e2) main_camera2_pane

0x06cf,	// (0x000759e2) main_video2_pane

0xa53f,	// (0x0007f852) cams_zoom_pane_cp2_ParamLimits

0xa53f,	// (0x0007f852) cams_zoom_pane_cp2

0xa54b,	// (0x0007f85e) image2_vga_pane_ParamLimits

0xa54b,	// (0x0007f85e) image2_vga_pane

0xa55a,	// (0x0007f86d) main_camera2_pane_g1_ParamLimits

0xa55a,	// (0x0007f86d) main_camera2_pane_g1

0xa566,	// (0x0007f879) main_camera2_pane_g2_ParamLimits

0xa566,	// (0x0007f879) main_camera2_pane_g2

0xa572,	// (0x0007f885) main_camera2_pane_g3_ParamLimits

0xa572,	// (0x0007f885) main_camera2_pane_g3

0xa57e,	// (0x0007f891) main_camera2_pane_g4_ParamLimits

0xa57e,	// (0x0007f891) main_camera2_pane_g4

0xa58a,	// (0x0007f89d) main_camera2_pane_g5_ParamLimits

0xa58a,	// (0x0007f89d) main_camera2_pane_g5

0xa596,	// (0x0007f8a9) main_camera2_pane_g6_ParamLimits

0xa596,	// (0x0007f8a9) main_camera2_pane_g6

0xa5a2,	// (0x0007f8b5) main_camera2_pane_g7_ParamLimits

0xa5a2,	// (0x0007f8b5) main_camera2_pane_g7

0xa5ae,	// (0x0007f8c1) main_camera2_pane_g8_ParamLimits

0xa5ae,	// (0x0007f8c1) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0008493a) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0008493a) main_camera2_pane_g

0xa5c6,	// (0x0007f8d9) main_camera2_pane_t1_ParamLimits

0xa5c6,	// (0x0007f8d9) main_camera2_pane_t1

0xa5d8,	// (0x0007f8eb) main_camera2_pane_t2_ParamLimits

0xa5d8,	// (0x0007f8eb) main_camera2_pane_t2

0xa5ea,	// (0x0007f8fd) main_camera2_pane_t3_ParamLimits

0xa5ea,	// (0x0007f8fd) main_camera2_pane_t3

0xa5fc,	// (0x0007f90f) main_camera2_pane_t4_ParamLimits

0xa5fc,	// (0x0007f90f) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0008494d) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0008494d) main_camera2_pane_t

0xa65e,	// (0x0007f971) cams_zoom_pane_cp4_ParamLimits

0xa65e,	// (0x0007f971) cams_zoom_pane_cp4

0xa66e,	// (0x0007f981) image2_cif_pane_ParamLimits

0xa66e,	// (0x0007f981) image2_cif_pane

0xa683,	// (0x0007f996) image2_subqcif_pane_ParamLimits

0xa683,	// (0x0007f996) image2_subqcif_pane

0xa692,	// (0x0007f9a5) main_video2_pane_g1_ParamLimits

0xa692,	// (0x0007f9a5) main_video2_pane_g1

0xa6a4,	// (0x0007f9b7) main_video2_pane_g2_ParamLimits

0xa6a4,	// (0x0007f9b7) main_video2_pane_g2

0xa6b4,	// (0x0007f9c7) main_video2_pane_g3_ParamLimits

0xa6b4,	// (0x0007f9c7) main_video2_pane_g3

0xa6c4,	// (0x0007f9d7) main_video2_pane_g4_ParamLimits

0xa6c4,	// (0x0007f9d7) main_video2_pane_g4

0xa6d4,	// (0x0007f9e7) main_video2_pane_g5_ParamLimits

0xa6d4,	// (0x0007f9e7) main_video2_pane_g5

0xa6e4,	// (0x0007f9f7) main_video2_pane_g6_ParamLimits

0xa6e4,	// (0x0007f9f7) main_video2_pane_g6

0x0005,

0xf649,	// (0x0008495c) main_video2_pane_g_ParamLimits

0xf649,	// (0x0008495c) main_video2_pane_g

0xa6f6,	// (0x0007fa09) main_video2_pane_t1_ParamLimits

0xa6f6,	// (0x0007fa09) main_video2_pane_t1

0xa710,	// (0x0007fa23) main_video2_pane_t2_ParamLimits

0xa710,	// (0x0007fa23) main_video2_pane_t2

0xa736,	// (0x0007fa49) main_video2_pane_t3_ParamLimits

0xa736,	// (0x0007fa49) main_video2_pane_t3

0x0002,

0xf656,	// (0x00084969) main_video2_pane_t_ParamLimits

0xf656,	// (0x00084969) main_video2_pane_t

0x9fff,	// (0x0007f312) call_muted_g2

0x0001,

0xf5f8,	// (0x0008490b) call_muted_g

0x06cf,	// (0x000759e2) main_mup2_pane

0x2b61,	// (0x00077e74) main_mup2_pane_g1_ParamLimits

0x2b61,	// (0x00077e74) main_mup2_pane_g1

0xa75c,	// (0x0007fa6f) main_mup2_pane_g2_ParamLimits

0xa75c,	// (0x0007fa6f) main_mup2_pane_g2

0xa9de,	// (0x0007fcf1) main_mup_pane_g13_cp1

0xa9e6,	// (0x0007fcf9) mup_volume_pane_cp1

0xa77c,	// (0x0007fa8f) main_mup2_pane_g4_ParamLimits

0xa77c,	// (0x0007fa8f) main_mup2_pane_g4

0xa791,	// (0x0007faa4) main_mup2_pane_g5_ParamLimits

0xa791,	// (0x0007faa4) main_mup2_pane_g5

0xa7a6,	// (0x0007fab9) main_mup2_pane_g6_ParamLimits

0xa7a6,	// (0x0007fab9) main_mup2_pane_g6

0xa7bb,	// (0x0007face) main_mup2_pane_g7_ParamLimits

0xa7bb,	// (0x0007face) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x00084970) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x00084970) main_mup2_pane_g

0xa7d7,	// (0x0007faea) main_mup2_pane_t1_ParamLimits

0xa7d7,	// (0x0007faea) main_mup2_pane_t1

0xa7ee,	// (0x0007fb01) main_mup2_pane_t2_ParamLimits

0xa7ee,	// (0x0007fb01) main_mup2_pane_t2

0xa805,	// (0x0007fb18) main_mup2_pane_t3_ParamLimits

0xa805,	// (0x0007fb18) main_mup2_pane_t3

0xa81c,	// (0x0007fb2f) main_mup2_pane_t4_ParamLimits

0xa81c,	// (0x0007fb2f) main_mup2_pane_t4

0xa836,	// (0x0007fb49) main_mup2_pane_t5_ParamLimits

0xa836,	// (0x0007fb49) main_mup2_pane_t5

0xa850,	// (0x0007fb63) main_mup2_pane_t6_ParamLimits

0xa850,	// (0x0007fb63) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0008497f) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0008497f) main_mup2_pane_t

0xa888,	// (0x0007fb9b) mup2_visualizer_pane_ParamLimits

0xa888,	// (0x0007fb9b) mup2_visualizer_pane

0xa8be,	// (0x0007fbd1) mup_progress_pane_cp_ParamLimits

0xa8be,	// (0x0007fbd1) mup_progress_pane_cp

0xa9c9,	// (0x0007fcdc) mup_volume_pane_cp_ParamLimits

0xa9c9,	// (0x0007fcdc) mup_volume_pane_cp

0xa8d5,	// (0x0007fbe8) mup2_visualizer_pane_g1_ParamLimits

0xa8d5,	// (0x0007fbe8) mup2_visualizer_pane_g1

0x2b33,	// (0x00077e46) mup2_visualizer_pane_g2_ParamLimits

0x2b33,	// (0x00077e46) mup2_visualizer_pane_g2

0xa8ea,	// (0x0007fbfd) mup2_visualizer_pane_g3_ParamLimits

0xa8ea,	// (0x0007fbfd) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0008498c) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0008498c) mup2_visualizer_pane_g

0x1967,	// (0x00076c7a) aid_size_cell_fmradio

0xa115,	// (0x0007f428) aid_height_parent_landcape

0x0d3d,	// (0x00076050) wml_content_pane_cp

0x0d45,	// (0x00076058) wml_tabs_pane

0x0d4e,	// (0x00076061) popup_wml_miniature_window

0x0d56,	// (0x00076069) scroll_pane_cp021

0x0d6a,	// (0x0007607d) wml_content_pane_comp8

0x06cf,	// (0x000759e2) bg_popup_sub_pane_cp05

0x2b51,	// (0x00077e64) popup_wml_miniature_window_g1

0x2b59,	// (0x00077e6c) wml_miniature_view_pane

0xa8f8,	// (0x0007fc0b) aid_size_wml_view

0xa900,	// (0x0007fc13) wml_miniature_view_pane_g1

0xa909,	// (0x0007fc1c) wml_miniature_view_pane_g2

0xa912,	// (0x0007fc25) wml_miniature_view_pane_g3

0xa91a,	// (0x0007fc2d) wml_miniature_view_pane_g4

0xa922,	// (0x0007fc35) wml_miniature_view_pane_g5

0xa92a,	// (0x0007fc3d) wml_miniature_view_pane_g6

0xa932,	// (0x0007fc45) wml_miniature_view_pane_g7

0xa93a,	// (0x0007fc4d) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x00084993) wml_miniature_view_pane_g

0x2b61,	// (0x00077e74) background_graphic_ParamLimits

0x2b61,	// (0x00077e74) background_graphic

0x2b6d,	// (0x00077e80) wml_tabs_2_pane

0x2b76,	// (0x00077e89) wml_tabs_3_pane_ParamLimits

0x2b76,	// (0x00077e89) wml_tabs_3_pane

0x2b88,	// (0x00077e9b) wml_tabs_4_pane_ParamLimits

0x2b88,	// (0x00077e9b) wml_tabs_4_pane

0x2b9e,	// (0x00077eb1) wml_tabs_5_pane_ParamLimits

0x2b9e,	// (0x00077eb1) wml_tabs_5_pane

0x2bb8,	// (0x00077ecb) wml_tabs_pane_g2_ParamLimits

0x2bb8,	// (0x00077ecb) wml_tabs_pane_g2

0x2bcc,	// (0x00077edf) wml_tabs_pane_g3_ParamLimits

0x2bcc,	// (0x00077edf) wml_tabs_pane_g3

0xa942,	// (0x0007fc55) wml_tabs_2_active_pane_ParamLimits

0xa942,	// (0x0007fc55) wml_tabs_2_active_pane

0xa952,	// (0x0007fc65) wml_tabs_2_passive_pane_ParamLimits

0xa952,	// (0x0007fc65) wml_tabs_2_passive_pane

0xa962,	// (0x0007fc75) wml_tabs_3_active_pane_cp_ParamLimits

0xa962,	// (0x0007fc75) wml_tabs_3_active_pane_cp

0xa973,	// (0x0007fc86) wml_tabs_3_passive_pane_ParamLimits

0xa973,	// (0x0007fc86) wml_tabs_3_passive_pane

0xa984,	// (0x0007fc97) wml_tabs_3_passive_pane_cp_ParamLimits

0xa984,	// (0x0007fc97) wml_tabs_3_passive_pane_cp

0xa995,	// (0x0007fca8) tabs_4_active_pane

0xa99d,	// (0x0007fcb0) tabs_4_passive_pane

0xa9a5,	// (0x0007fcb8) tabs_4_passive_pane_cp

0xa9ad,	// (0x0007fcc0) tabs_4_passive_pane_cp2

0x9eda,	// (0x0007f1ed) aid_height_text

0x96e7,	// (0x0007e9fa) mup_volume_cont_pane_ParamLimits

0x96e7,	// (0x0007e9fa) mup_volume_cont_pane

0x71f1,	// (0x0007c504) aid_size_cell_pinb

0x71fb,	// (0x0007c50e) aid_size_list_pinb

0xa8a7,	// (0x0007fbba) mup2_volume_cont_pane_ParamLimits

0xa8a7,	// (0x0007fbba) mup2_volume_cont_pane

0xa9b5,	// (0x0007fcc8) mup2_volume_cont_pane_g1_ParamLimits

0xa9b5,	// (0x0007fcc8) mup2_volume_cont_pane_g1

0x6e2e,	// (0x0007c141) aid_size_cell_touch_ParamLimits

0x6e2e,	// (0x0007c141) aid_size_cell_touch

0x70d7,	// (0x0007c3ea) touch_pane_ParamLimits

0x70d7,	// (0x0007c3ea) touch_pane

0xedd8,	// (0x000840eb) main_rss2_pane

0x2be9,	// (0x00077efc) listscroll_rss2_pane

0x2bf2,	// (0x00077f05) rss2_navigation_pane

0x2bfa,	// (0x00077f0d) list_rss2_pane

0x143b,	// (0x0007674e) scroll_pane_cp22

0x2c02,	// (0x00077f15) rss2_navigation_pane_g1

0x2c0b,	// (0x00077f1e) rss2_navigation_pane_g2

0x2c13,	// (0x00077f26) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000849a4) rss2_navigation_pane_g

0x2c1b,	// (0x00077f2e) rss2_navigation_pane_t1

0xa9ee,	// (0x0007fd01) rss2_list_single_pane_ParamLimits

0xa9ee,	// (0x0007fd01) rss2_list_single_pane

0x2c29,	// (0x00077f3c) rss2_list_single_pane_t2

0x2c37,	// (0x00077f4a) rss2_list_single_pane_t3_ParamLimits

0x2c37,	// (0x00077f4a) rss2_list_single_pane_t3

0x2c54,	// (0x00077f67) rss2_list_single_pane_t4

0x903a,	// (0x0007e34d) smil_status_pane_g1

0x0ea4,	// (0x000761b7) main_image2_pane_ParamLimits

0x0ea4,	// (0x000761b7) main_image2_pane

0xa5ba,	// (0x0007f8cd) main_camera2_pane_g9_ParamLimits

0xa5ba,	// (0x0007f8cd) main_camera2_pane_g9

0xa60e,	// (0x0007f921) main_camera2_pane_t5_ParamLimits

0xa60e,	// (0x0007f921) main_camera2_pane_t5

0xa620,	// (0x0007f933) main_camera2_pane_t6_ParamLimits

0xa620,	// (0x0007f933) main_camera2_pane_t6

0xaa1f,	// (0x0007fd32) main_image2_pane_g1_ParamLimits

0xaa1f,	// (0x0007fd32) main_image2_pane_g1

0x9c7a,	// (0x0007ef8d) smil2_video_pane_ParamLimits

0x9c7a,	// (0x0007ef8d) smil2_video_pane

0x6e62,	// (0x0007c175) aid_zoom_text_primary_cp

0x7080,	// (0x0007c393) popup_preview_fixed_window

0x0ca6,	// (0x00075fb9) im_reading_pane_g1

0xa504,	// (0x0007f817) cams2_bc_adjust_pane_cp_ParamLimits

0xa504,	// (0x0007f817) cams2_bc_adjust_pane_cp

0xa650,	// (0x0007f963) cams2_bc_adjust_pane_ParamLimits

0xa650,	// (0x0007f963) cams2_bc_adjust_pane

0xaa2b,	// (0x0007fd3e) cams2_bc_adjust_pane_g1

0xaa33,	// (0x0007fd46) cams2_slider_pane

0xaa3c,	// (0x0007fd4f) cams2_slider_pane_g1

0xaa45,	// (0x0007fd58) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000849ab) cams2_slider_pane_g

0x7301,	// (0x0007c614) calc_display_pane_ParamLimits

0x731f,	// (0x0007c632) calc_paper_pane_ParamLimits

0x733b,	// (0x0007c64e) grid_calc_pane_ParamLimits

0x923b,	// (0x0007e54e) popup_clock_digital_window_t1_ParamLimits

0x1904,	// (0x00076c17) main_image_pane_t1

0x72e7,	// (0x0007c5fa) aid_size_cell_calc_ParamLimits

0x72e7,	// (0x0007c5fa) aid_size_cell_calc

0xa14f,	// (0x0007f462) popup_blid_sat_info2_window_ParamLimits

0xa14f,	// (0x0007f462) popup_blid_sat_info2_window

0x2c6a,	// (0x00077f7d) aid_size_cell_blid

0x2c72,	// (0x00077f85) bg_popup_window_pane_cp07

0x2c95,	// (0x00077fa8) grid_popup_blid_pane

0x2c9f,	// (0x00077fb2) heading_pane_cp05_ParamLimits

0x2c9f,	// (0x00077fb2) heading_pane_cp05

0x2d69,	// (0x0007807c) cell_popup_blid_pane_ParamLimits

0x2d69,	// (0x0007807c) cell_popup_blid_pane

0x2d8d,	// (0x000780a0) cell_popup_blid_pane_g1

0x2d95,	// (0x000780a8) cell_popup_blid_pane_t1

0xa86d,	// (0x0007fb80) mup2_indicator_pane_ParamLimits

0xa86d,	// (0x0007fb80) mup2_indicator_pane

0x167c,	// (0x0007698f) mup2_visualizer_osc_pane

0x2b3f,	// (0x00077e52) mup2_visualizer_spec_pane_ParamLimits

0x2b3f,	// (0x00077e52) mup2_visualizer_spec_pane

0xaa5f,	// (0x0007fd72) mup2_spec_half_pane

0xaa68,	// (0x0007fd7b) mup2_spec_half_pane_cp

0xaa72,	// (0x0007fd85) mup2_spec_bar_pane_ParamLimits

0xaa72,	// (0x0007fd85) mup2_spec_bar_pane

0x2ae0,	// (0x00077df3) mup2_spec_bar_pane_g1

0x2aea,	// (0x00077dfd) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008491e) mup2_spec_bar_pane_g

0xaa91,	// (0x0007fda4) mup2_osc_middle_pane

0x2afc,	// (0x00077e0f) mup2_visualizer_osc_pane_g1

0xee02,	// (0x00084115) popup_number_entry_window_t1_ParamLimits

0xee15,	// (0x00084128) popup_number_entry_window_t2_ParamLimits

0xee27,	// (0x0008413a) popup_number_entry_window_t3_ParamLimits

0x712e,	// (0x0007c441) popup_number_entry_window_t5_ParamLimits

0x712e,	// (0x0007c441) popup_number_entry_window_t5

0xf0cd,	// (0x000843e0) popup_number_entry_window_t_ParamLimits

0xee39,	// (0x0008414c) text_title_cp2_ParamLimits

0x996e,	// (0x0007ec81) aid_hotspot_pointer_text2_pane

0x9a08,	// (0x0007ed1b) main_viewer_pane_g9_ParamLimits

0x9a08,	// (0x0007ed1b) main_viewer_pane_g9

0x0f48,	// (0x0007625b) cale_month_pane_t1_ParamLimits

0x0f85,	// (0x00076298) bg_cale_pane_ParamLimits

0x0f9d,	// (0x000762b0) list_cale_pane_ParamLimits

0x0fae,	// (0x000762c1) listscroll_cale_day_pane_t1

0x0fc0,	// (0x000762d3) scroll_pane_cp09_ParamLimits

0x9722,	// (0x0007ea35) main_mup_eq_pane_t1_ParamLimits

0x9722,	// (0x0007ea35) main_mup_eq_pane_t1

0x973c,	// (0x0007ea4f) main_mup_eq_pane_t2_ParamLimits

0x973c,	// (0x0007ea4f) main_mup_eq_pane_t2

0x9756,	// (0x0007ea69) main_mup_eq_pane_t3_ParamLimits

0x9756,	// (0x0007ea69) main_mup_eq_pane_t3

0x976e,	// (0x0007ea81) main_mup_eq_pane_t4_ParamLimits

0x976e,	// (0x0007ea81) main_mup_eq_pane_t4

0x9786,	// (0x0007ea99) main_mup_eq_pane_t5_ParamLimits

0x9786,	// (0x0007ea99) main_mup_eq_pane_t5

0x979e,	// (0x0007eab1) main_mup_eq_pane_t6_ParamLimits

0x979e,	// (0x0007eab1) main_mup_eq_pane_t6

0x97b2,	// (0x0007eac5) main_mup_eq_pane_t7_ParamLimits

0x97b2,	// (0x0007eac5) main_mup_eq_pane_t7

0x97c6,	// (0x0007ead9) main_mup_eq_pane_t8_ParamLimits

0x97c6,	// (0x0007ead9) main_mup_eq_pane_t8

0x97dc,	// (0x0007eaef) main_mup_eq_pane_t9_ParamLimits

0x97dc,	// (0x0007eaef) main_mup_eq_pane_t9

0x97f4,	// (0x0007eb07) main_mup_eq_pane_t10_ParamLimits

0x97f4,	// (0x0007eb07) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0008476d) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0008476d) main_mup_eq_pane_t

0x98b1,	// (0x0007ebc4) mup_equalizer_pane_cp5_ParamLimits

0x98c7,	// (0x0007ebda) mup_equalizer_pane_cp6_ParamLimits

0x98df,	// (0x0007ebf2) mup_equalizer_pane_cp7_ParamLimits

0xedd8,	// (0x000840eb) main_gallery_pane

0x2b05,	// (0x00077e18) smil2_volume_pane

0x2b20,	// (0x00077e33) smil_status_volume_pane_g1_ParamLimits

0x2b0d,	// (0x00077e20) smil_status_volume_pane_g2_ParamLimits

0xa377,	// (0x0007f68a) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x00084923) smil_status_volume_pane_g_ParamLimits

0x2c72,	// (0x00077f85) bg_popup_window_pane_cp07_ParamLimits

0x2c80,	// (0x00077f93) blid_firmament_pane

0xaa9a,	// (0x0007fdad) aid_size_cell_gallery_ParamLimits

0xaa9a,	// (0x0007fdad) aid_size_cell_gallery

0xaaa8,	// (0x0007fdbb) grid_gallery_pane_ParamLimits

0xaaa8,	// (0x0007fdbb) grid_gallery_pane

0xaab8,	// (0x0007fdcb) cell_gallery_pane_ParamLimits

0xaab8,	// (0x0007fdcb) cell_gallery_pane

0x2da3,	// (0x000780b6) bg_cell_gallery_focus_pane_ParamLimits

0x2da3,	// (0x000780b6) bg_cell_gallery_focus_pane

0x2db5,	// (0x000780c8) cell_gallery_pane_g1_ParamLimits

0x2db5,	// (0x000780c8) cell_gallery_pane_g1

0xab06,	// (0x0007fe19) cell_gallery_pane_g2_ParamLimits

0xab06,	// (0x0007fe19) cell_gallery_pane_g2

0xab13,	// (0x0007fe26) cell_gallery_pane_g3_ParamLimits

0xab13,	// (0x0007fe26) cell_gallery_pane_g3

0x2dc1,	// (0x000780d4) cell_gallery_pane_g4_ParamLimits

0x2dc1,	// (0x000780d4) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000849d1) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000849d1) cell_gallery_pane_g

0x2dcd,	// (0x000780e0) bg_cell_gallery_focus_pane_g1

0x2dd5,	// (0x000780e8) bg_cell_gallery_focus_pane_g2

0x2ddd,	// (0x000780f0) bg_cell_gallery_focus_pane_g3

0x2de5,	// (0x000780f8) bg_cell_gallery_focus_pane_g4

0x2ded,	// (0x00078100) bg_cell_gallery_focus_pane_g5

0x2df5,	// (0x00078108) bg_cell_gallery_focus_pane_g6

0x2dfd,	// (0x00078110) bg_cell_gallery_focus_pane_g7

0x2e05,	// (0x00078118) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000849da) bg_cell_gallery_focus_pane_g

0x2e0d,	// (0x00078120) aid_firma_cardinal

0x2e21,	// (0x00078134) blid_firmament_pane_t1

0x2e38,	// (0x0007814b) blid_firmament_pane_t2

0x2e4f,	// (0x00078162) blid_firmament_pane_t3

0x2e66,	// (0x00078179) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000849eb) blid_firmament_pane_t

0x2e7d,	// (0x00078190) blid_sat_info_pane

0x2e8d,	// (0x000781a0) blid_sat_info_pane_g1

0x2e8d,	// (0x000781a0) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000849f4) blid_sat_info_pane_g

0x2e97,	// (0x000781aa) blid_sat_info_pane_t1

0x2ea5,	// (0x000781b8) smil2_volume_content_pane

0x2eae,	// (0x000781c1) smil2_volume_pane_g1

0x2eb6,	// (0x000781c9) smil2_volume_content_pane_g1

0x2ebf,	// (0x000781d2) smil2_volume_content_pane_g2

0x2ec8,	// (0x000781db) smil2_volume_content_pane_g3

0x2ed1,	// (0x000781e4) smil2_volume_content_pane_g4

0x2eda,	// (0x000781ed) smil2_volume_content_pane_g5

0x2ee3,	// (0x000781f6) smil2_volume_content_pane_g6

0x2eec,	// (0x000781ff) smil2_volume_content_pane_g7

0x2ef5,	// (0x00078208) smil2_volume_content_pane_g8

0x2efe,	// (0x00078211) smil2_volume_content_pane_g9

0x2f07,	// (0x0007821a) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000849f9) smil2_volume_content_pane_g

0x7901,	// (0x0007cc14) cale_week_day_heading_pane_t1_ParamLimits

0x793c,	// (0x0007cc4f) cale_week_day_heading_pane_t2_ParamLimits

0x7977,	// (0x0007cc8a) cale_week_day_heading_pane_t3_ParamLimits

0x79b2,	// (0x0007ccc5) cale_week_day_heading_pane_t4_ParamLimits

0x79ed,	// (0x0007cd00) cale_week_day_heading_pane_t5_ParamLimits

0x7a28,	// (0x0007cd3b) cale_week_day_heading_pane_t6_ParamLimits

0x7a63,	// (0x0007cd76) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000844e5) cale_week_day_heading_pane_t_ParamLimits

0x0b5a,	// (0x00075e6d) bg_cale_side_pane_ParamLimits

0x7a9e,	// (0x0007cdb1) cale_week_time_pane_t1_ParamLimits

0x7ab8,	// (0x0007cdcb) cale_week_time_pane_t2_ParamLimits

0x7ad2,	// (0x0007cde5) cale_week_time_pane_t3_ParamLimits

0x7aec,	// (0x0007cdff) cale_week_time_pane_t4_ParamLimits

0x7b06,	// (0x0007ce19) cale_week_time_pane_t5_ParamLimits

0x7b20,	// (0x0007ce33) cale_week_time_pane_t6_ParamLimits

0x7b40,	// (0x0007ce53) cale_week_time_pane_t7_ParamLimits

0x7b62,	// (0x0007ce75) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000844f4) cale_week_time_pane_t_ParamLimits

0x7b86,	// (0x0007ce99) cell_cale_week_pane_g2_ParamLimits

0x0b5a,	// (0x00075e6d) bg_cale_side_pane_cp01_ParamLimits

0x8e3b,	// (0x0007e14e) cale_month_week_pane_t1_ParamLimits

0x8e54,	// (0x0007e167) cale_month_week_pane_t2_ParamLimits

0x8e6d,	// (0x0007e180) cale_month_week_pane_t3_ParamLimits

0x8e86,	// (0x0007e199) cale_month_week_pane_t4_ParamLimits

0x8e9f,	// (0x0007e1b2) cale_month_week_pane_t5_ParamLimits

0x8ec0,	// (0x0007e1d3) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000845cd) cale_month_week_pane_t_ParamLimits

0x9003,	// (0x0007e316) cell_cale_month_pane_g1_ParamLimits

0xedd8,	// (0x000840eb) main_cale_event_viewer_pane

0xedd8,	// (0x000840eb) listscroll_cale_event_viewer_pane

0x2f10,	// (0x00078223) list_cale_ev_pane

0x2f18,	// (0x0007822b) scroll_pane_cp023

0x2f24,	// (0x00078237) field_cale_ev_pane_ParamLimits

0x2f24,	// (0x00078237) field_cale_ev_pane

0x2f42,	// (0x00078255) field_cale_ev_content_pane_ParamLimits

0x2f42,	// (0x00078255) field_cale_ev_content_pane

0x2f4e,	// (0x00078261) field_cale_ev_pane_g1_ParamLimits

0x2f4e,	// (0x00078261) field_cale_ev_pane_g1

0x2f5a,	// (0x0007826d) field_cale_ev_pane_g2_ParamLimits

0x2f5a,	// (0x0007826d) field_cale_ev_pane_g2

0x2f72,	// (0x00078285) field_cale_ev_pane_g3_ParamLimits

0x2f72,	// (0x00078285) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x00084a0e) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x00084a0e) field_cale_ev_pane_g

0x2f8a,	// (0x0007829d) field_cale_ev_pane_t1_ParamLimits

0x2f8a,	// (0x0007829d) field_cale_ev_pane_t1

0x2fa1,	// (0x000782b4) field_cale_ev_content_pane_t1_ParamLimits

0x2fa1,	// (0x000782b4) field_cale_ev_content_pane_t1

0x9955,	// (0x0007ec68) bg_button_pane_cp01

0x76a3,	// (0x0007c9b6) listscroll_cale_week_pane_ParamLimits

0x0b04,	// (0x00075e17) popup_toolbar_window_cp01

0x0b2b,	// (0x00075e3e) listscroll_cale_week_pane_t1_ParamLimits

0x76a3,	// (0x0007c9b6) listscroll_cale_day_pane_ParamLimits

0x0b04,	// (0x00075e17) popup_toolbar_window_cp02

0x0fae,	// (0x000762c1) listscroll_cale_day_pane_t1_ParamLimits

0x76a3,	// (0x0007c9b6) main_cale_month_pane_ParamLimits

0xa256,	// (0x0007f569) popup_toolbar_window_cp03_ParamLimits

0xa256,	// (0x0007f569) popup_toolbar_window_cp03

0x9b90,	// (0x0007eea3) main_image_pane_g2_ParamLimits

0x9b90,	// (0x0007eea3) main_image_pane_g2

0x9b9c,	// (0x0007eeaf) main_image_pane_g3_ParamLimits

0x9b9c,	// (0x0007eeaf) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000847ff) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000847ff) main_image_pane_g

0x1904,	// (0x00076c17) main_image_pane_t1_ParamLimits

0x9ba8,	// (0x0007eebb) main_image_pane_t2_ParamLimits

0x9ba8,	// (0x0007eebb) main_image_pane_t2

0x9bba,	// (0x0007eecd) main_image_pane_t3_ParamLimits

0x9bba,	// (0x0007eecd) main_image_pane_t3

0x9bcc,	// (0x0007eedf) main_image_pane_t4_ParamLimits

0x9bcc,	// (0x0007eedf) main_image_pane_t4

0x0003,

0xf4f3,	// (0x00084806) main_image_pane_t_ParamLimits

0xf4f3,	// (0x00084806) main_image_pane_t

0x9bde,	// (0x0007eef1) popup_image_details_window_cp01

0x9be8,	// (0x0007eefb) popup_toobar_trans_pane_cp01_ParamLimits

0x9be8,	// (0x0007eefb) popup_toobar_trans_pane_cp01

0xa1a6,	// (0x0007f4b9) popup_image_details_window_ParamLimits

0xa1a6,	// (0x0007f4b9) popup_image_details_window

0xa1b4,	// (0x0007f4c7) popup_image_focus_window

0xa4f6,	// (0x0007f809) camera2_autofocus_pane_ParamLimits

0xa4f6,	// (0x0007f809) camera2_autofocus_pane

0xedd8,	// (0x000840eb) bg_popup_sub_pane_cp06

0x2fbf,	// (0x000782d2) popup_image_focus_window_g1

0x2fc7,	// (0x000782da) popup_image_focus_window_g2

0x2fcf,	// (0x000782e2) popup_image_focus_window_g3

0x2fd7,	// (0x000782ea) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x00084a15) popup_image_focus_window_g

0x2fdf,	// (0x000782f2) popup_image_focus_window_t1

0x2fed,	// (0x00078300) popup_image_focus_window_t2

0x2ffd,	// (0x00078310) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x00084a1e) popup_image_focus_window_t

0x300b,	// (0x0007831e) camera2_autofocus_pane_g1

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp01

0x3019,	// (0x0007832c) popup_image_details_window_g1

0x302c,	// (0x0007833f) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x00084a30) popup_image_details_window_g

0x3055,	// (0x00078368) popup_image_details_window_t1

0x3067,	// (0x0007837a) popup_image_details_window_t2

0x3080,	// (0x00078393) popup_image_details_window_t3

0x3094,	// (0x000783a7) popup_image_details_window_t4

0x30af,	// (0x000783c2) popup_image_details_window_t5

0x0004,

0xf724,	// (0x00084a37) popup_image_details_window_t

0x09db,	// (0x00075cee) bg_calc_paper_pane_ParamLimits

0xedd8,	// (0x000840eb) grid_highlight_pane_cp013

0x7438,	// (0x0007c74b) list_calc_pane_ParamLimits

0x744a,	// (0x0007c75d) scroll_pane_cp024

0x09ef,	// (0x00075d02) bg_calc_display_pane_ParamLimits

0x7452,	// (0x0007c765) calc_display_pane_t1_ParamLimits

0x7467,	// (0x0007c77a) calc_display_pane_t2_ParamLimits

0x747c,	// (0x0007c78f) calc_display_pane_t3_ParamLimits

0xf154,	// (0x00084467) calc_display_pane_t_ParamLimits

0x7558,	// (0x0007c86b) cell_calc_pane_g2

0x0001,

0xf171,	// (0x00084484) cell_calc_pane_g

0x7561,	// (0x0007c874) cell_calc_pane_t1

0x0a4e,	// (0x00075d61) grid_highlight_pane_cp02_ParamLimits

0x0a64,	// (0x00075d77) toolbar_button_pane_cp01_ParamLimits

0x0a64,	// (0x00075d77) toolbar_button_pane_cp01

0x1949,	// (0x00076c5c) temp_image_control_pane_ParamLimits

0x1949,	// (0x00076c5c) temp_image_control_pane

0x0ea4,	// (0x000761b7) main_mp3_pane

0x30c9,	// (0x000783dc) temp_image_control_pane_g1_ParamLimits

0x30c9,	// (0x000783dc) temp_image_control_pane_g1

0x30d7,	// (0x000783ea) temp_image_control_pane_g2_ParamLimits

0x30d7,	// (0x000783ea) temp_image_control_pane_g2

0x30e9,	// (0x000783fc) temp_image_control_pane_g3_ParamLimits

0x30e9,	// (0x000783fc) temp_image_control_pane_g3

0xab50,	// (0x0007fe63) temp_image_control_pane_g4_ParamLimits

0xab50,	// (0x0007fe63) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x00084a42) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x00084a42) temp_image_control_pane_g

0x30c9,	// (0x000783dc) main_mp3_pane_g1

0xab61,	// (0x0007fe74) main_mp3_pane_g2

0x0007,

0xf738,	// (0x00084a4b) main_mp3_pane_g

0x312c,	// (0x0007843f) main_mp3_pane_t1

0x0bb5,	// (0x00075ec8) main_camera_pane_g8_ParamLimits

0x0bb5,	// (0x00075ec8) main_camera_pane_g8

0x7e26,	// (0x0007d139) main_video_pane_g7_ParamLimits

0x7e26,	// (0x0007d139) main_video_pane_g7

0xa63e,	// (0x0007f951) main_camera2_pane_t7_ParamLimits

0xa63e,	// (0x0007f951) main_camera2_pane_t7

0x0cfd,	// (0x00076010) scroll_pane_cp025_ParamLimits

0x0cfd,	// (0x00076010) scroll_pane_cp025

0x0d11,	// (0x00076024) scroll_pane_cp026_ParamLimits

0x0d11,	// (0x00076024) scroll_pane_cp026

0x0d20,	// (0x00076033) wml_content_pane_ParamLimits

0xedd8,	// (0x000840eb) main_touch_calib_pane

0xac05,	// (0x0007ff18) main_touch_calib_pane_g1

0xac11,	// (0x0007ff24) main_touch_calib_pane_g2

0xac1d,	// (0x0007ff30) main_touch_calib_pane_g3

0xac29,	// (0x0007ff3c) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x00084a69) main_touch_calib_pane_g

0xac35,	// (0x0007ff48) main_touch_calib_pane_t1

0xac4e,	// (0x0007ff61) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x00084a72) main_touch_calib_pane_t

0x1517,	// (0x0007682a) mup_progress_pane_cp02

0x154c,	// (0x0007685f) navi_pane_g1

0x1607,	// (0x0007691a) navi_pane_mp_t3

0x0ea4,	// (0x000761b7) main_mp3_pane_ParamLimits

0xa293,	// (0x0007f5a6) navi_pane_ParamLimits

0x30c9,	// (0x000783dc) main_mp3_pane_g1_ParamLimits

0xab61,	// (0x0007fe74) main_mp3_pane_g2_ParamLimits

0xab6d,	// (0x0007fe80) main_mp3_pane_g3_ParamLimits

0xab6d,	// (0x0007fe80) main_mp3_pane_g3

0xab79,	// (0x0007fe8c) main_mp3_pane_g4_ParamLimits

0xab79,	// (0x0007fe8c) main_mp3_pane_g4

0x30f9,	// (0x0007840c) main_mp3_pane_g5_ParamLimits

0x30f9,	// (0x0007840c) main_mp3_pane_g5

0x3107,	// (0x0007841a) main_mp3_pane_g6_ParamLimits

0x3107,	// (0x0007841a) main_mp3_pane_g6

0x3114,	// (0x00078427) main_mp3_pane_g7_ParamLimits

0x3114,	// (0x00078427) main_mp3_pane_g7

0x3120,	// (0x00078433) main_mp3_pane_g8_ParamLimits

0x3120,	// (0x00078433) main_mp3_pane_g8

0xf738,	// (0x00084a4b) main_mp3_pane_g_ParamLimits

0xab85,	// (0x0007fe98) main_mp3_pane_t2

0xab95,	// (0x0007fea8) main_mp3_pane_t3

0x313a,	// (0x0007844d) main_mp3_pane_t4

0x3148,	// (0x0007845b) main_mp3_pane_t5

0x0005,

0xf749,	// (0x00084a5c) main_mp3_pane_t

0x3156,	// (0x00078469) mup_progress_pane_cp01

0x6e62,	// (0x0007c175) aid_zoom_text_secondary2

0x2f10,	// (0x00078223) list_cale_ev2_pane

0x2f18,	// (0x0007822b) scroll_pane_cp023_ParamLimits

0xaca9,	// (0x0007ffbc) field_cale_ev2_pane_ParamLimits

0xaca9,	// (0x0007ffbc) field_cale_ev2_pane

0xacd2,	// (0x0007ffe5) field_cale_ev2_pane_g1_ParamLimits

0xacd2,	// (0x0007ffe5) field_cale_ev2_pane_g1

0xacde,	// (0x0007fff1) field_cale_ev2_pane_g2_ParamLimits

0xacde,	// (0x0007fff1) field_cale_ev2_pane_g2

0xacf6,	// (0x00080009) field_cale_ev2_pane_g3_ParamLimits

0xacf6,	// (0x00080009) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x00084a7d) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x00084a7d) field_cale_ev2_pane_g

0x5e7b,	// (0x0007b18e) field_cale_ev2_pane_t1_ParamLimits

0x5e7b,	// (0x0007b18e) field_cale_ev2_pane_t1

0x5e92,	// (0x0007b1a5) field_cale_ev2_pane_t2_ParamLimits

0x5e92,	// (0x0007b1a5) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x00084a86) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x00084a86) field_cale_ev2_pane_t

0x9a70,	// (0x0007ed83) main_postcard_pane_g5_ParamLimits

0x9a70,	// (0x0007ed83) main_postcard_pane_g5

0x9a7e,	// (0x0007ed91) main_postcard_pane_g6_ParamLimits

0x9a7e,	// (0x0007ed91) main_postcard_pane_g6

0x7c70,	// (0x0007cf83) camera2_autofocus_pane_cp_ParamLimits

0x7c70,	// (0x0007cf83) camera2_autofocus_pane_cp

0x0ea4,	// (0x000761b7) main_mup3_pane

0xad1a,	// (0x0008002d) main_mup3_pane_g1_ParamLimits

0xad1a,	// (0x0008002d) main_mup3_pane_g1

0xad3b,	// (0x0008004e) main_mup3_pane_g2_ParamLimits

0xad3b,	// (0x0008004e) main_mup3_pane_g2

0xadb3,	// (0x000800c6) main_mup3_pane_g3_ParamLimits

0xadb3,	// (0x000800c6) main_mup3_pane_g3

0xadf6,	// (0x00080109) main_mup3_pane_g4_ParamLimits

0xadf6,	// (0x00080109) main_mup3_pane_g4

0xae39,	// (0x0008014c) main_mup3_pane_g5_ParamLimits

0xae39,	// (0x0008014c) main_mup3_pane_g5

0xae7c,	// (0x0008018f) main_mup3_pane_g6_ParamLimits

0xae7c,	// (0x0008018f) main_mup3_pane_g6

0x317e,	// (0x00078491) main_mup3_pane_g7_ParamLimits

0x317e,	// (0x00078491) main_mup3_pane_g7

0x0007,

0xf783,	// (0x00084a96) main_mup3_pane_g_ParamLimits

0xf783,	// (0x00084a96) main_mup3_pane_g

0xaef2,	// (0x00080205) main_mup3_pane_t1_ParamLimits

0xaef2,	// (0x00080205) main_mup3_pane_t1

0xaf61,	// (0x00080274) main_mup3_pane_t2_ParamLimits

0xaf61,	// (0x00080274) main_mup3_pane_t2

0xb02a,	// (0x0008033d) main_mup3_pane_t4_ParamLimits

0xb02a,	// (0x0008033d) main_mup3_pane_t4

0xb078,	// (0x0008038b) main_mup3_pane_t5_ParamLimits

0xb078,	// (0x0008038b) main_mup3_pane_t5

0xb128,	// (0x0008043b) main_mup3_pane_t6_ParamLimits

0xb128,	// (0x0008043b) main_mup3_pane_t6

0x0005,

0xf794,	// (0x00084aa7) main_mup3_pane_t_ParamLimits

0xf794,	// (0x00084aa7) main_mup3_pane_t

0xb1d4,	// (0x000804e7) mup3_progress_pane_ParamLimits

0xb1d4,	// (0x000804e7) mup3_progress_pane

0xb252,	// (0x00080565) popup_mup3_control_window_ParamLimits

0xb252,	// (0x00080565) popup_mup3_control_window

0x318c,	// (0x0007849f) popup_mup3_text_window

0xb26b,	// (0x0008057e) mup3_progress_pane_t1

0xb28a,	// (0x0008059d) mup3_progress_pane_t2

0x3194,	// (0x000784a7) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x00084ab4) mup3_progress_pane_t

0x31b1,	// (0x000784c4) mup_progress_pane_cp03

0xedd8,	// (0x000840eb) bg_tb_trans_pane_cp04

0xb2a9,	// (0x000805bc) mup3_volume_pane

0xb2b1,	// (0x000805c4) popup_mup3_control_window_g1

0xb2ba,	// (0x000805cd) mup3_volume_pane_g1

0xb2c3,	// (0x000805d6) mup3_volume_pane_g2

0xb2cc,	// (0x000805df) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x00084abb) mup3_volume_pane_g

0xedd8,	// (0x000840eb) bg_tb_trans_pane_cp03

0x31c1,	// (0x000784d4) popup_mup3_text_window_g1

0x31c9,	// (0x000784dc) popup_mup3_text_window_t1

0x0a37,	// (0x00075d4a) list_calc_item_pane_g1_ParamLimits

0x2be0,	// (0x00077ef3) mup_volume_pane_cp_g1

0xac67,	// (0x0007ff7a) main_touch_calib_pane_t3

0xac7d,	// (0x0007ff90) main_touch_calib_pane_t4

0xac93,	// (0x0007ffa6) main_touch_calib_pane_t5

0x6e1a,	// (0x0007c12d) aid_cell_size_toolbar2

0x6e22,	// (0x0007c135) aid_popup3_width_pane

0x5b81,	// (0x0007ae94) aid_zoom_text_msg_primary

0x7c3d,	// (0x0007cf50) vorec_t7

0x09fb,	// (0x00075d0e) bg_calc_paper_pane_g1_ParamLimits

0x0a13,	// (0x00075d26) bg_calc_paper_pane_g2_ParamLimits

0x0a07,	// (0x00075d1a) bg_calc_paper_pane_g3_ParamLimits

0x0a2b,	// (0x00075d3e) bg_calc_paper_pane_g4_ParamLimits

0x0a1f,	// (0x00075d32) bg_calc_paper_pane_g5_ParamLimits

0x74bb,	// (0x0007c7ce) bg_calc_paper_pane_g6_ParamLimits

0x74cc,	// (0x0007c7df) bg_calc_paper_pane_g7_ParamLimits

0x74dd,	// (0x0007c7f0) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0008446e) bg_calc_paper_pane_g_ParamLimits

0x74ee,	// (0x0007c801) calc_bg_paper_pane_g9_ParamLimits

0x7d57,	// (0x0007d06a) image_qvga_pane_ParamLimits

0x7d57,	// (0x0007d06a) image_qvga_pane

0x092a,	// (0x00075c3d) bg_popup_sub_pane_cp04_ParamLimits

0x1880,	// (0x00076b93) popup_mup_playback_window_g1_ParamLimits

0x188c,	// (0x00076b9f) popup_mup_playback_window_t1_ParamLimits

0x18a1,	// (0x00076bb4) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000847fa) popup_mup_playback_window_t_ParamLimits

0xa76d,	// (0x0007fa80) main_mup2_pane_g3_ParamLimits

0xa76d,	// (0x0007fa80) main_mup2_pane_g3

0x8027,	// (0x0007d33a) popup_toolbar_window_cp04

0x1c83,	// (0x00076f96) popup_call2_audio_second_window_g3_ParamLimits

0x1c83,	// (0x00076f96) popup_call2_audio_second_window_g3

0x208d,	// (0x000773a0) popup_call2_audio_first_window_g4_ParamLimits

0x208d,	// (0x000773a0) popup_call2_audio_first_window_g4

0x2718,	// (0x00077a2b) popup_call2_audio_in_window_g4_ParamLimits

0x2718,	// (0x00077a2b) popup_call2_audio_in_window_g4

0x9b83,	// (0x0007ee96) aid_area_sk_bg_cut_ParamLimits

0x9b83,	// (0x0007ee96) aid_area_sk_bg_cut

0x18b6,	// (0x00076bc9) aid_area_sk_bg_cut_2_ParamLimits

0x18b6,	// (0x00076bc9) aid_area_sk_bg_cut_2

0xaaf6,	// (0x0007fe09) aid_placing_details_win

0xaafe,	// (0x0007fe11) aid_placing_details_win_2

0x300b,	// (0x0007831e) camera2_autofocus_pane_g1_ParamLimits

0x7071,	// (0x0007c384) popup_fixed_preview_cale_window_ParamLimits

0x7071,	// (0x0007c384) popup_fixed_preview_cale_window

0x169f,	// (0x000769b2) navi_slider_pane_g3

0x1696,	// (0x000769a9) navi_slider_pane_g4

0x168d,	// (0x000769a0) navi_slider_pane_g5

0x169f,	// (0x000769b2) navi_slider_pane_g6

0x94b6,	// (0x0007e7c9) navi_slider_pane_g7

0x17c0,	// (0x00076ad3) mup_scale_pane_g3

0x17c9,	// (0x00076adc) mup_scale_pane_g4

0x17d2,	// (0x00076ae5) mup_scale_pane_g5

0x98f7,	// (0x0007ec0a) mup_scale_pane_g6

0x9900,	// (0x0007ec13) mup_scale_pane_g7

0x169f,	// (0x000769b2) cams2_slider_pane_g3

0x2c62,	// (0x00077f75) cams2_slider_pane_g4

0xaa4e,	// (0x0007fd61) cams2_slider_pane_g5

0x169f,	// (0x000769b2) cams2_slider_pane_g6

0xaa56,	// (0x0007fd69) cams2_slider_pane_g7

0x2e8d,	// (0x000781a0) camera2_autofocus_pane_cp_g1

0x2a79,	// (0x00077d8c) bg_popup_preview_window_pane_cp02_ParamLimits

0x2a79,	// (0x00077d8c) bg_popup_preview_window_pane_cp02

0x31d7,	// (0x000784ea) list_fp_cale_pane_ParamLimits

0x31d7,	// (0x000784ea) list_fp_cale_pane

0x31e3,	// (0x000784f6) popup_fixed_preview_cale_window_t1_ParamLimits

0x31e3,	// (0x000784f6) popup_fixed_preview_cale_window_t1

0xb2d5,	// (0x000805e8) popup_fixed_preview_cale_window_t2_ParamLimits

0xb2d5,	// (0x000805e8) popup_fixed_preview_cale_window_t2

0xb2ea,	// (0x000805fd) popup_fixed_preview_cale_window_t3_ParamLimits

0xb2ea,	// (0x000805fd) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x00084ac2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x00084ac2) popup_fixed_preview_cale_window_t

0xb2ff,	// (0x00080612) list_single_fp_cale_pane_ParamLimits

0xb2ff,	// (0x00080612) list_single_fp_cale_pane

0x3201,	// (0x00078514) list_single_fp_cale_pane_g1_ParamLimits

0x3201,	// (0x00078514) list_single_fp_cale_pane_g1

0x320d,	// (0x00078520) list_single_fp_cale_pane_g2_ParamLimits

0x320d,	// (0x00078520) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x00084ac9) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x00084ac9) list_single_fp_cale_pane_g

0x3226,	// (0x00078539) list_single_fp_cale_pane_t1_ParamLimits

0x3226,	// (0x00078539) list_single_fp_cale_pane_t1

0x3238,	// (0x0007854b) list_single_fp_cale_pane_t2_ParamLimits

0x3238,	// (0x0007854b) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x00084ad0) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x00084ad0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xedd8,	// (0x000840eb) main_dialer_pane

0xb312,	// (0x00080625) aid_cell_size_keypad

0xb31c,	// (0x0008062f) dialer_ne_pane

0xb326,	// (0x00080639) grid_dialer_command_1_pane

0xb32e,	// (0x00080641) grid_dialer_command_2_pane

0xb336,	// (0x00080649) grid_dialer_keypad_pane

0xb348,	// (0x0008065b) bg_popup_call_pane_cp06_ParamLimits

0xb348,	// (0x0008065b) bg_popup_call_pane_cp06

0xb354,	// (0x00080667) dialer_ne_clear_pane_ParamLimits

0xb354,	// (0x00080667) dialer_ne_clear_pane

0x326b,	// (0x0007857e) dialer_ne_pane_g1

0x3273,	// (0x00078586) dialer_ne_pane_t1_ParamLimits

0x3273,	// (0x00078586) dialer_ne_pane_t1

0xb360,	// (0x00080673) dialer_ne_pane_t2_ParamLimits

0xb360,	// (0x00080673) dialer_ne_pane_t2

0xb37d,	// (0x00080690) dialer_ne_pane_t3_ParamLimits

0xb37d,	// (0x00080690) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x00084ad5) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x00084ad5) dialer_ne_pane_t

0xb3a1,	// (0x000806b4) dialer_ne_pane_t3_copy1_ParamLimits

0xb3a1,	// (0x000806b4) dialer_ne_pane_t3_copy1

0xb3c5,	// (0x000806d8) cell_dialer_keypad_pane_ParamLimits

0xb3c5,	// (0x000806d8) cell_dialer_keypad_pane

0xb3dc,	// (0x000806ef) cell_dialer_command_1_pane_ParamLimits

0xb3dc,	// (0x000806ef) cell_dialer_command_1_pane

0xb3f2,	// (0x00080705) cell_dialer_command_2_pane_ParamLimits

0xb3f2,	// (0x00080705) cell_dialer_command_2_pane

0x3285,	// (0x00078598) bg_button_pane_cp02_ParamLimits

0x3285,	// (0x00078598) bg_button_pane_cp02

0xb401,	// (0x00080714) cell_dialer_keypad_pane_g1_ParamLimits

0xb401,	// (0x00080714) cell_dialer_keypad_pane_g1

0x3285,	// (0x00078598) bg_button_pane_cp03_ParamLimits

0x3285,	// (0x00078598) bg_button_pane_cp03

0xb416,	// (0x00080729) cell_dialer_command_1_pane_g1_ParamLimits

0xb416,	// (0x00080729) cell_dialer_command_1_pane_g1

0x3291,	// (0x000785a4) bg_button_pane_cp04

0xb42a,	// (0x0008073d) cell_dialer_command_2_pane_g1

0x167c,	// (0x0007698f) bg_button_pane_cp06

0x3299,	// (0x000785ac) dialer_ne_clear_pane_g1

0x1558,	// (0x0007686b) navi_pane_g2

0x1586,	// (0x00076899) navi_pane_g3

0x0002,

0xf3ea,	// (0x000846fd) navi_pane_g

0x1615,	// (0x00076928) navi_pane_mv_g2

0x163c,	// (0x0007694f) navi_pane_mv_g5

0x9481,	// (0x0007e794) navi_pane_mv_t1

0x09ef,	// (0x00075d02) main_clock2_pane

0xb468,	// (0x0008077b) main_clock2_list_pane_ParamLimits

0xb468,	// (0x0008077b) main_clock2_list_pane

0xb490,	// (0x000807a3) main_clock2_pane_t1_ParamLimits

0xb490,	// (0x000807a3) main_clock2_pane_t1

0xb4b2,	// (0x000807c5) main_clock2_pane_t2_ParamLimits

0xb4b2,	// (0x000807c5) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00084adc) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00084adc) main_clock2_pane_t

0xb50d,	// (0x00080820) popup_clock_analogue_window_cp03_ParamLimits

0xb50d,	// (0x00080820) popup_clock_analogue_window_cp03

0xb52b,	// (0x0008083e) popup_clock_digital_window_cp02_ParamLimits

0xb52b,	// (0x0008083e) popup_clock_digital_window_cp02

0xb598,	// (0x000808ab) main_clock2_list_single_pane_ParamLimits

0xb598,	// (0x000808ab) main_clock2_list_single_pane

0x167c,	// (0x0007698f) list_highlight_pane_cp05

0x32b7,	// (0x000785ca) main_clock2_list_single_pane_t1

0x8027,	// (0x0007d33a) popup_toolbar_window_cp04_ParamLimits

0xab20,	// (0x0007fe33) camera2_autofocus_pane_g2_ParamLimits

0xab20,	// (0x0007fe33) camera2_autofocus_pane_g2

0xab2c,	// (0x0007fe3f) camera2_autofocus_pane_g3_ParamLimits

0xab2c,	// (0x0007fe3f) camera2_autofocus_pane_g3

0xab38,	// (0x0007fe4b) camera2_autofocus_pane_g4_ParamLimits

0xab38,	// (0x0007fe4b) camera2_autofocus_pane_g4

0xab44,	// (0x0007fe57) camera2_autofocus_pane_g5_ParamLimits

0xab44,	// (0x0007fe57) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x00084a25) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x00084a25) camera2_autofocus_pane_g

0x315e,	// (0x00078471) camera2_autofocus_pane_cp_g2

0x3166,	// (0x00078479) camera2_autofocus_pane_cp_g3

0x316e,	// (0x00078481) camera2_autofocus_pane_cp_g4

0x3176,	// (0x00078489) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x00084a8b) camera2_autofocus_pane_cp_g

0xb340,	// (0x00080653) popup_dialer_spcha_window

0xedd8,	// (0x000840eb) bg_popup_sub_pane_cp07

0x32c5,	// (0x000785d8) list_spcha_pane

0x32cd,	// (0x000785e0) list_single_spcha_pane_ParamLimits

0x32cd,	// (0x000785e0) list_single_spcha_pane

0xedd8,	// (0x000840eb) list_highlight_pane_cp06

0x32de,	// (0x000785f1) list_single_spcha_pane_t1

0x24c2,	// (0x000777d5) popup_call2_audio_out_window_g4_ParamLimits

0x24c2,	// (0x000777d5) popup_call2_audio_out_window_g4

0xedd8,	// (0x000840eb) main_imed2_pane

0xa1bc,	// (0x0007f4cf) popup_imed_adjust2_window

0xa1cf,	// (0x0007f4e2) popup_imed_trans_window_ParamLimits

0xa1cf,	// (0x0007f4e2) popup_imed_trans_window

0x2ccb,	// (0x00077fde) popup_blid_sat_info2_window_t1

0x2cd9,	// (0x00077fec) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000849ba) popup_blid_sat_info2_window_t

0xb642,	// (0x00080955) aid_size_cell_colour_35

0xb65c,	// (0x0008096f) aid_size_cell_colour_112

0xb673,	// (0x00080986) aid_size_cell_effect

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp02

0x115e,	// (0x00076471) heading_imed_pane

0xb68d,	// (0x000809a0) listscroll_imed_pane

0x32ec,	// (0x000785ff) heading_imed_pane_g1

0x32f4,	// (0x00078607) heading_imed_pane_t1

0x3302,	// (0x00078615) grid_imed_colour_35_pane_ParamLimits

0x3302,	// (0x00078615) grid_imed_colour_35_pane

0xb699,	// (0x000809ac) grid_imed_effect_pane

0x3319,	// (0x0007862c) list_imed_aspect_pane

0xb6a9,	// (0x000809bc) scroll_pane_cp027_ParamLimits

0xb6a9,	// (0x000809bc) scroll_pane_cp027

0xb6b5,	// (0x000809c8) cell_imed_effect_pane_ParamLimits

0xb6b5,	// (0x000809c8) cell_imed_effect_pane

0x3321,	// (0x00078634) cell_imed_colour_pane_ParamLimits

0x3321,	// (0x00078634) cell_imed_colour_pane

0x3363,	// (0x00078676) cell_imed_colour_pane_g1_ParamLimits

0x3363,	// (0x00078676) cell_imed_colour_pane_g1

0x3374,	// (0x00078687) hgihlgiht_grid_pane_cp016_ParamLimits

0x3374,	// (0x00078687) hgihlgiht_grid_pane_cp016

0xb6cd,	// (0x000809e0) cell_imed_effect_pane_g1

0xb6d5,	// (0x000809e8) grid_highlight_pane_cp017

0x3385,	// (0x00078698) list_imed_single_pane_ParamLimits

0x3385,	// (0x00078698) list_imed_single_pane

0xedd8,	// (0x000840eb) list_highlight_pane_cp07

0x339a,	// (0x000786ad) list_imed_aspect_pane_comp1_t1

0x2a85,	// (0x00077d98) bg_tb_trans_pane_cp05

0x33bc,	// (0x000786cf) popup_imed_adjust2_window_g1

0x33e3,	// (0x000786f6) popup_imed_adjust2_window_t1

0x33fb,	// (0x0007870e) slider_imed_adjust_pane

0x340f,	// (0x00078722) slider_imed_adjust_pane_g1

0x341f,	// (0x00078732) slider_imed_adjust_pane_g2

0x342f,	// (0x00078742) slider_imed_adjust_pane_g3

0x3440,	// (0x00078753) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00084af9) slider_imed_adjust_pane_g

0xb6de,	// (0x000809f1) aid_size_cell_clipart2

0xb6ea,	// (0x000809fd) grid_imed_clipart_pane

0x3451,	// (0x00078764) scroll_pane_cp031

0xb6f4,	// (0x00080a07) cell_imed_clipart_pane_ParamLimits

0xb6f4,	// (0x00080a07) cell_imed_clipart_pane

0xb716,	// (0x00080a29) cell_imed_clipart_pane_g1

0xedd8,	// (0x000840eb) grid_highlight_pane_cp014

0xb474,	// (0x00080787) main_clock2_pane_g1_ParamLimits

0xb474,	// (0x00080787) main_clock2_pane_g1

0xb543,	// (0x00080856) aid_call2_pane_cp10

0xb555,	// (0x00080868) aid_call_pane_cp10

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g1

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g2

0xb567,	// (0x0008087a) popup_clock_analogue_window_cp10_g3

0xb567,	// (0x0008087a) popup_clock_analogue_window_cp10_g4

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00084ae7) popup_clock_analogue_window_cp10_g

0xb579,	// (0x0008088c) popup_clock_analogue_window_cp10_t1

0xb5aa,	// (0x000808bd) clock_digital_number_pane_cp10_ParamLimits

0xb5aa,	// (0x000808bd) clock_digital_number_pane_cp10

0xb5c2,	// (0x000808d5) clock_digital_number_pane_cp11_ParamLimits

0xb5c2,	// (0x000808d5) clock_digital_number_pane_cp11

0xb5da,	// (0x000808ed) clock_digital_number_pane_cp12_ParamLimits

0xb5da,	// (0x000808ed) clock_digital_number_pane_cp12

0xb5f2,	// (0x00080905) clock_digital_number_pane_cp13_ParamLimits

0xb5f2,	// (0x00080905) clock_digital_number_pane_cp13

0xb60a,	// (0x0008091d) clock_digital_separator_pane_cp10_ParamLimits

0xb60a,	// (0x0008091d) clock_digital_separator_pane_cp10

0xb622,	// (0x00080935) popup_clock_digital_window_cp02_t1_ParamLimits

0xb622,	// (0x00080935) popup_clock_digital_window_cp02_t1

0x0922,	// (0x00075c35) clock_digital_number_pane_cp10_g1

0x0922,	// (0x00075c35) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00084b02) clock_digital_number_pane_cp10_g

0x0922,	// (0x00075c35) clock_digital_separator_pane_cp10_g1

0x0922,	// (0x00075c35) clock_digital_separator_pane_g2_cp10

0x1644,	// (0x00076957) navi_pane_vded_g4

0x164d,	// (0x00076960) navi_pane_vded_g5

0x1656,	// (0x00076969) navi_pane_vded_t1

0xedd8,	// (0x000840eb) main_vded_pane

0xb71f,	// (0x00080a32) main_vded_pane_g1

0xb72b,	// (0x00080a3e) main_vded_pane_g2

0xb735,	// (0x00080a48) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00084b07) main_vded_pane_g

0xb73f,	// (0x00080a52) main_vded_pane_t1

0xb74d,	// (0x00080a60) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00084b0e) main_vded_pane_t

0xb75b,	// (0x00080a6e) vded_slider_pane

0xb765,	// (0x00080a78) vded_video_pane

0x3459,	// (0x0007876c) vded_video_pane_g1

0xb76f,	// (0x00080a82) vded_video_pane_g2

0x2e8d,	// (0x000781a0) vded_video_pane_g3

0x0002,

0xf800,	// (0x00084b13) vded_video_pane_g

0x3463,	// (0x00078776) vded_slider_pane_g1

0x2be0,	// (0x00077ef3) vded_slider_pane_g2

0x346c,	// (0x0007877f) vded_slider_pane_g3

0x3475,	// (0x00078788) vded_slider_pane_g4

0x347e,	// (0x00078791) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00084b1a) vded_slider_pane_g

0xb244,	// (0x00080557) mup3_rocker_pane_ParamLimits

0xb244,	// (0x00080557) mup3_rocker_pane

0xb778,	// (0x00080a8b) mup3_control_keys_pane_g1

0xb780,	// (0x00080a93) mup3_control_keys_pane_g2

0xb788,	// (0x00080a9b) mup3_control_keys_pane_g3

0xb790,	// (0x00080aa3) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00084b25) mup3_control_keys_pane_g

0x7099,	// (0x0007c3ac) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7099,	// (0x0007c3ac) popup_toolbar2_fixed_window_cp01

0xb25e,	// (0x00080571) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb25e,	// (0x00080571) popup_toolbar2_fixed_window_cp02

0x1df5,	// (0x00077108) popup_call2_audio_second_window_t4_ParamLimits

0x1df5,	// (0x00077108) popup_call2_audio_second_window_t4

0x232f,	// (0x00077642) popup_call2_audio_first_window_t6_ParamLimits

0x232f,	// (0x00077642) popup_call2_audio_first_window_t6

0x25c5,	// (0x000778d8) popup_call2_audio_out_window_t6_ParamLimits

0x25c5,	// (0x000778d8) popup_call2_audio_out_window_t6

0xedd8,	// (0x000840eb) main_vitu_pane

0xb7a0,	// (0x00080ab3) aid_size_cell_itu_ParamLimits

0xb7a0,	// (0x00080ab3) aid_size_cell_itu

0x4a87,	// (0x00079d9a) bg_popup_window_pane_cp08_ParamLimits

0x4a87,	// (0x00079d9a) bg_popup_window_pane_cp08

0xb7ae,	// (0x00080ac1) field_vitu_entry_pane_ParamLimits

0xb7ae,	// (0x00080ac1) field_vitu_entry_pane

0xb7bd,	// (0x00080ad0) grid_vitu_function_pane_ParamLimits

0xb7bd,	// (0x00080ad0) grid_vitu_function_pane

0xb7cd,	// (0x00080ae0) grid_vitu_itu_pane_ParamLimits

0xb7cd,	// (0x00080ae0) grid_vitu_itu_pane

0xb7dd,	// (0x00080af0) cell_vitu_itu_pane_ParamLimits

0xb7dd,	// (0x00080af0) cell_vitu_itu_pane

0xb7f2,	// (0x00080b05) cell_vitu_function_pane_ParamLimits

0xb7f2,	// (0x00080b05) cell_vitu_function_pane

0x0ea4,	// (0x000761b7) bg_popup_sub_pane_cp08_ParamLimits

0x0ea4,	// (0x000761b7) bg_popup_sub_pane_cp08

0xb804,	// (0x00080b17) field_vitu_entry_pane_t1_ParamLimits

0xb804,	// (0x00080b17) field_vitu_entry_pane_t1

0x349f,	// (0x000787b2) field_vitu_entry_pane_t2_ParamLimits

0x349f,	// (0x000787b2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00084b33) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00084b33) field_vitu_entry_pane_t

0x34bc,	// (0x000787cf) bg_button_pane_cp05_ParamLimits

0x34bc,	// (0x000787cf) bg_button_pane_cp05

0xb820,	// (0x00080b33) cell_vitu_itu_pane_g1

0xb838,	// (0x00080b4b) cell_vitu_itu_pane_t1_ParamLimits

0xb838,	// (0x00080b4b) cell_vitu_itu_pane_t1

0xb84a,	// (0x00080b5d) cell_vitu_itu_pane_t2_ParamLimits

0xb84a,	// (0x00080b5d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00084b38) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00084b38) cell_vitu_itu_pane_t

0x34ca,	// (0x000787dd) bg_button_pane_cp07

0xb87f,	// (0x00080b92) cell_vitu_function_pane_g1

0x735f,	// (0x0007c672) main_calc_pane_g1

0x6e56,	// (0x0007c169) aid_visual_content_pane

0xedd8,	// (0x000840eb) main_vradio_pane

0xb888,	// (0x00080b9b) main_vradio_pane_g1_ParamLimits

0xb888,	// (0x00080b9b) main_vradio_pane_g1

0x34d4,	// (0x000787e7) main_vradio_pane_g2_ParamLimits

0x34d4,	// (0x000787e7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00084b3f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00084b3f) main_vradio_pane_g

0xb898,	// (0x00080bab) main_vradio_pane_t1_ParamLimits

0xb898,	// (0x00080bab) main_vradio_pane_t1

0xb8aa,	// (0x00080bbd) main_vradio_pane_t2_ParamLimits

0xb8aa,	// (0x00080bbd) main_vradio_pane_t2

0x34e1,	// (0x000787f4) main_vradio_pane_t3_ParamLimits

0x34e1,	// (0x000787f4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00084b44) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00084b44) main_vradio_pane_t

0xb8bc,	// (0x00080bcf) vradio_rocker_control_pane_ParamLimits

0xb8bc,	// (0x00080bcf) vradio_rocker_control_pane

0xb8c8,	// (0x00080bdb) vradio_station_info_pane_ParamLimits

0xb8c8,	// (0x00080bdb) vradio_station_info_pane

0x34f5,	// (0x00078808) vradio_frequency_info_pane_ParamLimits

0x34f5,	// (0x00078808) vradio_frequency_info_pane

0x2e8d,	// (0x000781a0) vradio_station_info_pane_g1

0x3504,	// (0x00078817) vradio_station_info_pane_t1_ParamLimits

0x3504,	// (0x00078817) vradio_station_info_pane_t1

0x3526,	// (0x00078839) vradio_station_info_pane_t2_ParamLimits

0x3526,	// (0x00078839) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00084b4b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00084b4b) vradio_station_info_pane_t

0x3538,	// (0x0007884b) vradio_tuning_pane

0x3540,	// (0x00078853) vradio_rocker_control_pane_g1

0x3548,	// (0x0007885b) vradio_rocker_control_pane_g2

0x3550,	// (0x00078863) vradio_rocker_control_pane_g3

0x3558,	// (0x0007886b) vradio_rocker_control_pane_g4

0x3560,	// (0x00078873) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00084b50) vradio_rocker_control_pane_g

0xb8d7,	// (0x00080bea) vradio_frequency_info_pane_g1

0x3568,	// (0x0007887b) vradio_frequency_info_pane_t1_ParamLimits

0x3568,	// (0x0007887b) vradio_frequency_info_pane_t1

0xb8e1,	// (0x00080bf4) vradio_tuning_pane_g1

0xb8ea,	// (0x00080bfd) vradio_tuning_pane_t1

0x6e9f,	// (0x0007c1b2) area_side_right_pane_ParamLimits

0x6e9f,	// (0x0007c1b2) area_side_right_pane

0x2a40,	// (0x00077d53) status_small_pane_g1

0x2a48,	// (0x00077d5b) status_small_pane_g2

0x2a51,	// (0x00077d64) status_small_pane_g3

0x2a5a,	// (0x00077d6d) status_small_pane_g4

0x0003,

0xf5fd,	// (0x00084910) status_small_pane_g

0x2a63,	// (0x00077d76) status_small_pane_t1

0xedd8,	// (0x000840eb) main_video3_pane

0x357c,	// (0x0007888f) cams_zoom_vslider_pane

0x3584,	// (0x00078897) image3_wide_pane_ParamLimits

0x3584,	// (0x00078897) image3_wide_pane

0x359e,	// (0x000788b1) image3_wide_small_pane

0x35aa,	// (0x000788bd) main_video3_pane_g1_ParamLimits

0x35aa,	// (0x000788bd) main_video3_pane_g1

0x35c6,	// (0x000788d9) main_video3_pane_g2_ParamLimits

0x35c6,	// (0x000788d9) main_video3_pane_g2

0x0001,

0xf848,	// (0x00084b5b) main_video3_pane_g_ParamLimits

0xf848,	// (0x00084b5b) main_video3_pane_g

0x35e2,	// (0x000788f5) main_video3_pane_t1_ParamLimits

0x35e2,	// (0x000788f5) main_video3_pane_t1

0x360d,	// (0x00078920) main_video3_pane_t2_ParamLimits

0x360d,	// (0x00078920) main_video3_pane_t2

0x3638,	// (0x0007894b) main_video3_pane_t3_ParamLimits

0x3638,	// (0x0007894b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00084b60) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00084b60) main_video3_pane_t

0x3665,	// (0x00078978) cams_zoom_vslider_pane_g1

0x366e,	// (0x00078981) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00084b67) cams_zoom_vslider_pane_g

0x3676,	// (0x00078989) small_slider_vertical_pane

0x2e8d,	// (0x000781a0) small_slider_vertical_pane_g1

0x2e8d,	// (0x000781a0) small_slider_vertical_pane_g2

0x367e,	// (0x00078991) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00084b6c) small_slider_vertical_pane_g

0xedd8,	// (0x000840eb) main_hwr_training_pane

0x3687,	// (0x0007899a) hwr_training_instruct_pane_ParamLimits

0x3687,	// (0x0007899a) hwr_training_instruct_pane

0xb8f9,	// (0x00080c0c) hwr_training_navi_pane_ParamLimits

0xb8f9,	// (0x00080c0c) hwr_training_navi_pane

0xb913,	// (0x00080c26) hwr_training_write_pane_ParamLimits

0xb913,	// (0x00080c26) hwr_training_write_pane

0xedd8,	// (0x000840eb) bg_frame_shadow_pane

0x36c6,	// (0x000789d9) hwr_training_write_pane_g1

0x36ce,	// (0x000789e1) hwr_training_write_pane_g2

0x36d6,	// (0x000789e9) hwr_training_write_pane_g3

0x36de,	// (0x000789f1) hwr_training_write_pane_g4

0x36e6,	// (0x000789f9) hwr_training_write_pane_g5

0x36ee,	// (0x00078a01) hwr_training_write_pane_g6

0x36f6,	// (0x00078a09) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00084b73) hwr_training_write_pane_g

0xb94b,	// (0x00080c5e) hwr_training_navi_pane_g1_ParamLimits

0xb94b,	// (0x00080c5e) hwr_training_navi_pane_g1

0xb95d,	// (0x00080c70) hwr_training_navi_pane_g2_ParamLimits

0xb95d,	// (0x00080c70) hwr_training_navi_pane_g2

0xb96f,	// (0x00080c82) hwr_training_navi_pane_g3_ParamLimits

0xb96f,	// (0x00080c82) hwr_training_navi_pane_g3

0xb97f,	// (0x00080c92) hwr_training_navi_pane_g4_ParamLimits

0xb97f,	// (0x00080c92) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00084b82) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00084b82) hwr_training_navi_pane_g

0xb999,	// (0x00080cac) hwr_training_navi_pane_t1

0xb9a7,	// (0x00080cba) list_single_hwr_training_instruct_pane_ParamLimits

0xb9a7,	// (0x00080cba) list_single_hwr_training_instruct_pane

0x36fe,	// (0x00078a11) list_single_hwr_training_instruct_pane_t1

0x2dcd,	// (0x000780e0) bg_frame_shadow_pane_g1

0x370d,	// (0x00078a20) bg_frame_shadow_pane_g2

0x3715,	// (0x00078a28) bg_frame_shadow_pane_g3

0x371d,	// (0x00078a30) bg_frame_shadow_pane_g4

0x3725,	// (0x00078a38) bg_frame_shadow_pane_g5

0x372d,	// (0x00078a40) bg_frame_shadow_pane_g6

0x3735,	// (0x00078a48) bg_frame_shadow_pane_g7

0x0aa8,	// (0x00075dbb) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x00084b8d) bg_frame_shadow_pane_g

0xedd8,	// (0x000840eb) main_video_tele_dialer_pane

0xb9cc,	// (0x00080cdf) aid_size_cell_video_keypad_ParamLimits

0xb9cc,	// (0x00080cdf) aid_size_cell_video_keypad

0xb9dc,	// (0x00080cef) grid_video_dialer_keypad_pane_ParamLimits

0xb9dc,	// (0x00080cef) grid_video_dialer_keypad_pane

0xba10,	// (0x00080d23) video_down_pane_cp_ParamLimits

0xba10,	// (0x00080d23) video_down_pane_cp

0xba3a,	// (0x00080d4d) cell_video_dialer_keypad_pane_ParamLimits

0xba3a,	// (0x00080d4d) cell_video_dialer_keypad_pane

0x373d,	// (0x00078a50) bg_button_pane_cp08_ParamLimits

0x373d,	// (0x00078a50) bg_button_pane_cp08

0xba4f,	// (0x00080d62) cell_video_dialer_keypad_pane_g1_ParamLimits

0xba4f,	// (0x00080d62) cell_video_dialer_keypad_pane_g1

0xb238,	// (0x0008054b) mup3_rocker2_pane_ParamLimits

0xb238,	// (0x0008054b) mup3_rocker2_pane

0x2e8d,	// (0x000781a0) mup3_rocker2_pane_g1

0xa12c,	// (0x0007f43f) main_dialer2_pane

0xedd8,	// (0x000840eb) main_mp4_pane

0xba8e,	// (0x00080da1) main_mp4_pane_g1_ParamLimits

0xba8e,	// (0x00080da1) main_mp4_pane_g1

0xba9c,	// (0x00080daf) main_mp4_pane_g2_ParamLimits

0xba9c,	// (0x00080daf) main_mp4_pane_g2

0xbaaa,	// (0x00080dbd) main_mp4_pane_g3_ParamLimits

0xbaaa,	// (0x00080dbd) main_mp4_pane_g3

0xbaef,	// (0x00080e02) main_mp4_pane_g4_ParamLimits

0xbaef,	// (0x00080e02) main_mp4_pane_g4

0xbb17,	// (0x00080e2a) main_mp4_pane_g5_ParamLimits

0xbb17,	// (0x00080e2a) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x00084bad) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x00084bad) main_mp4_pane_g

0xbb67,	// (0x00080e7a) main_mp4_pane_t1_ParamLimits

0xbb67,	// (0x00080e7a) main_mp4_pane_t1

0xbbc3,	// (0x00080ed6) main_mp4_pane_t2_ParamLimits

0xbbc3,	// (0x00080ed6) main_mp4_pane_t2

0x3749,	// (0x00078a5c) main_mp4_pane_t3_ParamLimits

0x3749,	// (0x00078a5c) main_mp4_pane_t3

0xbc15,	// (0x00080f28) main_mp4_pane_t4_ParamLimits

0xbc15,	// (0x00080f28) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00084bba) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00084bba) main_mp4_pane_t

0xbc59,	// (0x00080f6c) mp4_progress_pane_ParamLimits

0xbc59,	// (0x00080f6c) mp4_progress_pane

0xbca3,	// (0x00080fb6) mp4_rocker_pane_ParamLimits

0xbca3,	// (0x00080fb6) mp4_rocker_pane

0x3771,	// (0x00078a84) mp4_progress_pane_t1

0x378a,	// (0x00078a9d) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00084bc3) mp4_progress_pane_t

0x37a3,	// (0x00078ab6) mup_progress_pane_cp04

0x2e8d,	// (0x000781a0) mp4_rocker_pane_g1

0xbcc3,	// (0x00080fd6) aid_cell_size_keypad2_ParamLimits

0xbcc3,	// (0x00080fd6) aid_cell_size_keypad2

0xbcd3,	// (0x00080fe6) dialer2_ne_pane_ParamLimits

0xbcd3,	// (0x00080fe6) dialer2_ne_pane

0xbce1,	// (0x00080ff4) grid_dialer2_keypad_pane_ParamLimits

0xbce1,	// (0x00080ff4) grid_dialer2_keypad_pane

0x3f48,	// (0x0007925b) bg_popup_call_pane_cp07_ParamLimits

0x3f48,	// (0x0007925b) bg_popup_call_pane_cp07

0xbcf1,	// (0x00081004) dialer2_ne_pane_t1_ParamLimits

0xbcf1,	// (0x00081004) dialer2_ne_pane_t1

0xbd16,	// (0x00081029) cell_dialer2_keypad_pane_ParamLimits

0xbd16,	// (0x00081029) cell_dialer2_keypad_pane

0x37cb,	// (0x00078ade) bg_button_pane_pane_cp04_ParamLimits

0x37cb,	// (0x00078ade) bg_button_pane_pane_cp04

0xbd2b,	// (0x0008103e) cell_dialer2_keypad_pane_g1_ParamLimits

0xbd2b,	// (0x0008103e) cell_dialer2_keypad_pane_g1

0x7ee9,	// (0x0007d1fc) aid_placing_vt_set_content_ParamLimits

0x7ee9,	// (0x0007d1fc) aid_placing_vt_set_content

0x7f15,	// (0x0007d228) aid_placing_vt_set_title_ParamLimits

0x7f15,	// (0x0007d228) aid_placing_vt_set_title

0xedd8,	// (0x000840eb) main_image3_pane

0xbdc5,	// (0x000810d8) area_side_right_pane_cp01_ParamLimits

0xbdc5,	// (0x000810d8) area_side_right_pane_cp01

0xefba,	// (0x000842cd) main_image3_pane_g1_ParamLimits

0xefba,	// (0x000842cd) main_image3_pane_g1

0xbdf2,	// (0x00081105) main_image3_pane_g2_ParamLimits

0xbdf2,	// (0x00081105) main_image3_pane_g2

0xbe0b,	// (0x0008111e) main_image3_pane_g3_ParamLimits

0xbe0b,	// (0x0008111e) main_image3_pane_g3

0xbe24,	// (0x00081137) main_image3_pane_g4_ParamLimits

0xbe24,	// (0x00081137) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00084bd2) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00084bd2) main_image3_pane_g

0xbe3d,	// (0x00081150) main_image3_pane_t1_ParamLimits

0xbe3d,	// (0x00081150) main_image3_pane_t1

0xbe62,	// (0x00081175) main_image3_pane_t2_ParamLimits

0xbe62,	// (0x00081175) main_image3_pane_t2

0xbe81,	// (0x00081194) main_image3_pane_t3_ParamLimits

0xbe81,	// (0x00081194) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00084bdb) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00084bdb) main_image3_pane_t

0x4a87,	// (0x00079d9a) grid_sctrl_middle_pane_cp01_ParamLimits

0x4a87,	// (0x00079d9a) grid_sctrl_middle_pane_cp01

0xbee2,	// (0x000811f5) cell_sctrl_middle_pane_cp01_ParamLimits

0xbee2,	// (0x000811f5) cell_sctrl_middle_pane_cp01

0xbef3,	// (0x00081206) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbef3,	// (0x00081206) cell_sctrl_middle_pane_cp01_g1

0xedd8,	// (0x000840eb) main_call4_pane

0xbf00,	// (0x00081213) aid_size_button_call4_ParamLimits

0xbf00,	// (0x00081213) aid_size_button_call4

0xbf30,	// (0x00081243) call4_windows_pane_ParamLimits

0xbf30,	// (0x00081243) call4_windows_pane

0xbf4a,	// (0x0008125d) grid_call4_button_pane_ParamLimits

0xbf4a,	// (0x0008125d) grid_call4_button_pane

0x37d7,	// (0x00078aea) call4_windows_conf_pane

0x37ee,	// (0x00078b01) popup_call4_audio_first_window_ParamLimits

0x37ee,	// (0x00078b01) popup_call4_audio_first_window

0x383a,	// (0x00078b4d) popup_call4_audio_second_window_ParamLimits

0x383a,	// (0x00078b4d) popup_call4_audio_second_window

0x384e,	// (0x00078b61) popup_call4_audio_wait_window_ParamLimits

0x384e,	// (0x00078b61) popup_call4_audio_wait_window

0xbf6e,	// (0x00081281) cell_call4_button_pane_ParamLimits

0xbf6e,	// (0x00081281) cell_call4_button_pane

0xbf93,	// (0x000812a6) bg_button_pane_cp09_ParamLimits

0xbf93,	// (0x000812a6) bg_button_pane_cp09

0xbf9f,	// (0x000812b2) cell_call4_button_pane_g1_ParamLimits

0xbf9f,	// (0x000812b2) cell_call4_button_pane_g1

0xbfac,	// (0x000812bf) cell_call4_button_pane_t1_ParamLimits

0xbfac,	// (0x000812bf) cell_call4_button_pane_t1

0x3896,	// (0x00078ba9) popup_call4_audio_conf_window_ParamLimits

0x3896,	// (0x00078ba9) popup_call4_audio_conf_window

0xb26b,	// (0x0008057e) mup3_progress_pane_t1_ParamLimits

0xb28a,	// (0x0008059d) mup3_progress_pane_t2_ParamLimits

0x3194,	// (0x000784a7) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x00084ab4) mup3_progress_pane_t_ParamLimits

0x31b1,	// (0x000784c4) mup_progress_pane_cp03_ParamLimits

0xb798,	// (0x00080aab) mup3_control_keys_pane_g4_copy1

0xbc87,	// (0x00080f9a) mp4_rocker2_pane_ParamLimits

0xbc87,	// (0x00080f9a) mp4_rocker2_pane

0x38b2,	// (0x00078bc5) mp4_rocker2_pane_g1

0x38aa,	// (0x00078bbd) mp4_rocker2_pane_g2

0xbfbe,	// (0x000812d1) mp4_rocker2_pane_g3

0xbfc6,	// (0x000812d9) mp4_rocker2_pane_g4

0xbfce,	// (0x000812e1) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00084be4) mp4_rocker2_pane_g

0xedd8,	// (0x000840eb) main_camera4_pane

0xedd8,	// (0x000840eb) main_video4_pane

0xb9ec,	// (0x00080cff) main_video_tele_dialer_pane_t1_ParamLimits

0xb9ec,	// (0x00080cff) main_video_tele_dialer_pane_t1

0xb9fe,	// (0x00080d11) main_video_tele_dialer_pane_t2_ParamLimits

0xb9fe,	// (0x00080d11) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x00084b9e) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x00084b9e) main_video_tele_dialer_pane_t

0xbfee,	// (0x00081301) cam4_autofocus_pane_ParamLimits

0xbfee,	// (0x00081301) cam4_autofocus_pane

0xc008,	// (0x0008131b) cam4_image_uncrop_pane_ParamLimits

0xc008,	// (0x0008131b) cam4_image_uncrop_pane

0xc01f,	// (0x00081332) cam4_indicators_pane_ParamLimits

0xc01f,	// (0x00081332) cam4_indicators_pane

0xc03b,	// (0x0008134e) main_camera4_pane_g1_ParamLimits

0xc03b,	// (0x0008134e) main_camera4_pane_g1

0xc047,	// (0x0008135a) main_camera4_pane_g2_ParamLimits

0xc047,	// (0x0008135a) main_camera4_pane_g2

0xc047,	// (0x0008135a) main_camera4_pane_g3_ParamLimits

0xc047,	// (0x0008135a) main_camera4_pane_g3

0xc053,	// (0x00081366) main_camera4_pane_g4_ParamLimits

0xc053,	// (0x00081366) main_camera4_pane_g4

0xc05f,	// (0x00081372) main_camera4_pane_g5_ParamLimits

0xc05f,	// (0x00081372) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00084bef) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00084bef) main_camera4_pane_g

0xc079,	// (0x0008138c) main_camera4_pane_t1_ParamLimits

0xc079,	// (0x0008138c) main_camera4_pane_t1

0x30f9,	// (0x0007840c) bg_tb_trans_pane_cp06

0xc0c9,	// (0x000813dc) cam4_indicators_pane_g1

0xc0da,	// (0x000813ed) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00084c0a) cam4_indicators_pane_g

0xc0f8,	// (0x0008140b) cam4_indicators_pane_t1

0xc122,	// (0x00081435) main_video4_pane_g1_ParamLimits

0xc122,	// (0x00081435) main_video4_pane_g1

0xc12e,	// (0x00081441) main_video4_pane_g2_ParamLimits

0xc12e,	// (0x00081441) main_video4_pane_g2

0xc13a,	// (0x0008144d) main_video4_pane_g3_ParamLimits

0xc13a,	// (0x0008144d) main_video4_pane_g3

0xc146,	// (0x00081459) main_video4_pane_g4_ParamLimits

0xc146,	// (0x00081459) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00084c11) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00084c11) main_video4_pane_g

0xc166,	// (0x00081479) vid4_indicators_pane_ParamLimits

0xc166,	// (0x00081479) vid4_indicators_pane

0xc185,	// (0x00081498) video4_image_uncrop_cif_pane_ParamLimits

0xc185,	// (0x00081498) video4_image_uncrop_cif_pane

0xc194,	// (0x000814a7) video4_image_uncrop_nhd_pane_ParamLimits

0xc194,	// (0x000814a7) video4_image_uncrop_nhd_pane

0xc008,	// (0x0008131b) video4_image_uncrop_vga_pane_ParamLimits

0xc008,	// (0x0008131b) video4_image_uncrop_vga_pane

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp07

0xc1ab,	// (0x000814be) vid4_indicators_pane_g1

0xc1bf,	// (0x000814d2) vid4_indicators_pane_g2

0xc1d3,	// (0x000814e6) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00084c1c) vid4_indicators_pane_g

0xc202,	// (0x00081515) vid4_indicators_pane_t1

0xc219,	// (0x0008152c) cam4_autofocus_pane_g1

0xc221,	// (0x00081534) cam4_autofocus_pane_g2

0xc229,	// (0x0008153c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00084c27) cam4_autofocus_pane_g

0xc231,	// (0x00081544) cam4_autofocus_pane_g3_copy1

0xba1e,	// (0x00080d31) video_down_pane_cp_t1

0xba2c,	// (0x00080d3f) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00084ba3) video_down_pane_cp_t

0x4a87,	// (0x00079d9a) popup_vitu2_window_ParamLimits

0x4a87,	// (0x00079d9a) popup_vitu2_window

0xc239,	// (0x0008154c) aid_size_cell2_itu2_ParamLimits

0xc239,	// (0x0008154c) aid_size_cell2_itu2

0xc25b,	// (0x0008156e) aid_size_cell_itu2_ParamLimits

0xc25b,	// (0x0008156e) aid_size_cell_itu2

0x3f48,	// (0x0007925b) bg_popup_window_pane_cp09_ParamLimits

0x3f48,	// (0x0007925b) bg_popup_window_pane_cp09

0xc29f,	// (0x000815b2) field_vitu2_entry_pane_ParamLimits

0xc29f,	// (0x000815b2) field_vitu2_entry_pane

0xc2bf,	// (0x000815d2) grid_vitu2_function_pane_ParamLimits

0xc2bf,	// (0x000815d2) grid_vitu2_function_pane

0xc303,	// (0x00081616) grid_vitu2_itu_pane_ParamLimits

0xc303,	// (0x00081616) grid_vitu2_itu_pane

0xc37b,	// (0x0008168e) cell_vitu2_itu_pane_ParamLimits

0xc37b,	// (0x0008168e) cell_vitu2_itu_pane

0xc390,	// (0x000816a3) cell_vitu2_function_pane_ParamLimits

0xc390,	// (0x000816a3) cell_vitu2_function_pane

0x38ba,	// (0x00078bcd) bg_popup_call_pane_cp08_ParamLimits

0x38ba,	// (0x00078bcd) bg_popup_call_pane_cp08

0x38d3,	// (0x00078be6) field_vitu2_entry_pane_g1

0x38df,	// (0x00078bf2) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00084c2e) field_vitu2_entry_pane_g

0x5ea7,	// (0x0007b1ba) field_vitu2_entry_pane_t1_ParamLimits

0x5ea7,	// (0x0007b1ba) field_vitu2_entry_pane_t1

0x5ed7,	// (0x0007b1ea) field_vitu2_entry_pane_t2_ParamLimits

0x5ed7,	// (0x0007b1ea) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00084c35) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00084c35) field_vitu2_entry_pane_t

0xc3cf,	// (0x000816e2) bg_button_pane_cp010_ParamLimits

0xc3cf,	// (0x000816e2) bg_button_pane_cp010

0xc3dd,	// (0x000816f0) cell_vitu2_itu_pane_g1

0xc406,	// (0x00081719) cell_vitu2_itu_pane_t1_ParamLimits

0xc406,	// (0x00081719) cell_vitu2_itu_pane_t1

0x5ef4,	// (0x0007b207) cell_vitu2_itu_pane_t2_ParamLimits

0x5ef4,	// (0x0007b207) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00084c3f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00084c3f) cell_vitu2_itu_pane_t

0x0ea4,	// (0x000761b7) bg_button_pane_cp011

0xc452,	// (0x00081765) cell_vitu2_function_pane_g1

0xedd8,	// (0x000840eb) main_myfav_hc_pane

0xbec3,	// (0x000811d6) popup_image3_note_pane_ParamLimits

0xbec3,	// (0x000811d6) popup_image3_note_pane

0xbed1,	// (0x000811e4) popup_image3_tool_bar_pane_ParamLimits

0xbed1,	// (0x000811e4) popup_image3_tool_bar_pane

0x5f6a,	// (0x0007b27d) cell_vitu2_itu_pane_t3_ParamLimits

0x5f6a,	// (0x0007b27d) cell_vitu2_itu_pane_t3

0xedd8,	// (0x000840eb) bg_popup_trans_pane

0x3901,	// (0x00078c14) grid_image3_tool_bar_pane

0x390b,	// (0x00078c1e) bg_popup_trans_pane_g1

0x0e06,	// (0x00076119) bg_popup_trans_pane_g2

0x3913,	// (0x00078c26) bg_popup_trans_pane_g3

0x391b,	// (0x00078c2e) bg_popup_trans_pane_g4

0x3923,	// (0x00078c36) bg_popup_trans_pane_g5

0x392b,	// (0x00078c3e) bg_popup_trans_pane_g6

0x3933,	// (0x00078c46) bg_popup_trans_pane_g7

0x393b,	// (0x00078c4e) bg_popup_trans_pane_g8

0x0de6,	// (0x000760f9) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00084c46) bg_popup_trans_pane_g

0x3943,	// (0x00078c56) cell_image3_tool_bar_pane_ParamLimits

0x3943,	// (0x00078c56) cell_image3_tool_bar_pane

0x2e8d,	// (0x000781a0) cell_image3_tool_bar_pane_g1

0xedd8,	// (0x000840eb) bg_popup_trans_pane_cp1

0x3957,	// (0x00078c6a) popup_image3_note_pane_t1

0x3965,	// (0x00078c78) popup_image3_note_pane_t2

0x3973,	// (0x00078c86) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00084c59) popup_image3_note_pane_t

0x3981,	// (0x00078c94) popup_image3_note_pane_t3_copy1

0xc466,	// (0x00081779) bg_myfav_hc_instruction_pane_ParamLimits

0xc466,	// (0x00081779) bg_myfav_hc_instruction_pane

0xc47e,	// (0x00081791) cell_myfav_contact_pane_ParamLimits

0xc47e,	// (0x00081791) cell_myfav_contact_pane

0xc498,	// (0x000817ab) cell_myfav_contact_pane_cp1_ParamLimits

0xc498,	// (0x000817ab) cell_myfav_contact_pane_cp1

0xc4b0,	// (0x000817c3) cell_myfav_contact_pane_cp2_ParamLimits

0xc4b0,	// (0x000817c3) cell_myfav_contact_pane_cp2

0xc4c8,	// (0x000817db) cell_myfav_contact_pane_cp3_ParamLimits

0xc4c8,	// (0x000817db) cell_myfav_contact_pane_cp3

0xc4df,	// (0x000817f2) cell_myfav_contact_pane_cp4_ParamLimits

0xc4df,	// (0x000817f2) cell_myfav_contact_pane_cp4

0xc4f5,	// (0x00081808) cell_myfav_contact_pane_cp5_ParamLimits

0xc4f5,	// (0x00081808) cell_myfav_contact_pane_cp5

0xc509,	// (0x0008181c) cell_myfav_contact_pane_cp6_ParamLimits

0xc509,	// (0x0008181c) cell_myfav_contact_pane_cp6

0xc51d,	// (0x00081830) cell_myfav_contact_pane_cp7_ParamLimits

0xc51d,	// (0x00081830) cell_myfav_contact_pane_cp7

0x398f,	// (0x00078ca2) listscroll_gen_pane_cp05

0xc535,	// (0x00081848) main_myfav_hc_pane_g1_ParamLimits

0xc535,	// (0x00081848) main_myfav_hc_pane_g1

0xc54b,	// (0x0008185e) main_myfav_hc_pane_g2_ParamLimits

0xc54b,	// (0x0008185e) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00084c60) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00084c60) main_myfav_hc_pane_g

0xc579,	// (0x0008188c) main_myfav_hc_pane_t1_ParamLimits

0xc579,	// (0x0008188c) main_myfav_hc_pane_t1

0x3998,	// (0x00078cab) main_myfav_hc_pane_t2_ParamLimits

0x3998,	// (0x00078cab) main_myfav_hc_pane_t2

0x39aa,	// (0x00078cbd) main_myfav_hc_pane_t3_ParamLimits

0x39aa,	// (0x00078cbd) main_myfav_hc_pane_t3

0xc590,	// (0x000818a3) main_myfav_hc_pane_t4_ParamLimits

0xc590,	// (0x000818a3) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00084c67) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00084c67) main_myfav_hc_pane_t

0x2e8d,	// (0x000781a0) bg_myfav_hc_instruction_pane_g1

0x39bc,	// (0x00078ccf) cell_myfav_contact_pane_g1_ParamLimits

0x39bc,	// (0x00078ccf) cell_myfav_contact_pane_g1

0x39bc,	// (0x00078ccf) cell_myfav_contact_pane_g2_ParamLimits

0x39bc,	// (0x00078ccf) cell_myfav_contact_pane_g2

0x39c8,	// (0x00078cdb) cell_myfav_contact_pane_g3_ParamLimits

0x39c8,	// (0x00078cdb) cell_myfav_contact_pane_g3

0x317e,	// (0x00078491) cell_myfav_contact_pane_g4_ParamLimits

0x317e,	// (0x00078491) cell_myfav_contact_pane_g4

0x39d5,	// (0x00078ce8) cell_myfav_contact_pane_g5_ParamLimits

0x39d5,	// (0x00078ce8) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00084c72) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00084c72) cell_myfav_contact_pane_g

0xc561,	// (0x00081874) main_myfav_hc_pane_g3_ParamLimits

0xc561,	// (0x00081874) main_myfav_hc_pane_g3

0x6fd4,	// (0x0007c2e7) popup_adpt_find_window

0xc5ba,	// (0x000818cd) afind_page_pane_ParamLimits

0xc5ba,	// (0x000818cd) afind_page_pane

0xc5c7,	// (0x000818da) aid_size_cell_afind_ParamLimits

0xc5c7,	// (0x000818da) aid_size_cell_afind

0xc5e1,	// (0x000818f4) bg_popup_sub_pane_cp09_ParamLimits

0xc5e1,	// (0x000818f4) bg_popup_sub_pane_cp09

0xc5ee,	// (0x00081901) find_pane_cp01_ParamLimits

0xc5ee,	// (0x00081901) find_pane_cp01

0x39e1,	// (0x00078cf4) grid_afind_control_pane_ParamLimits

0x39e1,	// (0x00078cf4) grid_afind_control_pane

0xc5fb,	// (0x0008190e) grid_afind_pane_ParamLimits

0xc5fb,	// (0x0008190e) grid_afind_pane

0xc617,	// (0x0008192a) cell_afind_pane_ParamLimits

0xc617,	// (0x0008192a) cell_afind_pane

0x2e8d,	// (0x000781a0) afind_page_pane_g1

0xc65f,	// (0x00081972) afind_page_pane_g2

0xc668,	// (0x0008197b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00084c7d) afind_page_pane_g

0xc671,	// (0x00081984) afind_page_pane_t1

0x39f5,	// (0x00078d08) cell_afind_grid_control_pane_ParamLimits

0x39f5,	// (0x00078d08) cell_afind_grid_control_pane

0x37cb,	// (0x00078ade) bg_button_pane_cp69_ParamLimits

0x37cb,	// (0x00078ade) bg_button_pane_cp69

0xc691,	// (0x000819a4) cell_afind_pane_g1_ParamLimits

0xc691,	// (0x000819a4) cell_afind_pane_g1

0xc69e,	// (0x000819b1) cell_afind_pane_t1_ParamLimits

0xc69e,	// (0x000819b1) cell_afind_pane_t1

0x0bff,	// (0x00075f12) bg_button_pane_cp72

0x3a04,	// (0x00078d17) cell_afind_grid_control_pane_g1

0x9caa,	// (0x0007efbd) aid_image_placing_area_ParamLimits

0x9caa,	// (0x0007efbd) aid_image_placing_area

0x3487,	// (0x0007879a) field_vitu_entry_pane_g1_ParamLimits

0x3487,	// (0x0007879a) field_vitu_entry_pane_g1

0x3493,	// (0x000787a6) field_vitu_entry_pane_g2_ParamLimits

0x3493,	// (0x000787a6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00084b2e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00084b2e) field_vitu_entry_pane_g

0xb820,	// (0x00080b33) cell_vitu_itu_pane_g1_ParamLimits

0xb862,	// (0x00080b75) cell_vitu_itu_pane_t3_ParamLimits

0xb862,	// (0x00080b75) cell_vitu_itu_pane_t3

0x3771,	// (0x00078a84) mp4_progress_pane_t1_ParamLimits

0x378a,	// (0x00078a9d) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00084bc3) mp4_progress_pane_t_ParamLimits

0x37a3,	// (0x00078ab6) mup_progress_pane_cp04_ParamLimits

0xc5a4,	// (0x000818b7) main_myfav_hc_pane_t5_ParamLimits

0xc5a4,	// (0x000818b7) main_myfav_hc_pane_t5

0x5b89,	// (0x0007ae9c) aid_zoom_text_primary

0x6fd4,	// (0x0007c2e7) popup_adpt_find_window_ParamLimits

0x0ea4,	// (0x000761b7) main_cam_set_pane

0xc02d,	// (0x00081340) cam4_zoom_pane_ParamLimits

0xc02d,	// (0x00081340) cam4_zoom_pane

0xc6b0,	// (0x000819c3) main_cam_set_pane_g1_ParamLimits

0xc6b0,	// (0x000819c3) main_cam_set_pane_g1

0xc6be,	// (0x000819d1) main_cam_set_pane_g2_ParamLimits

0xc6be,	// (0x000819d1) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00084c84) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00084c84) main_cam_set_pane_g

0xc6ca,	// (0x000819dd) main_cam_set_pane_t1_ParamLimits

0xc6ca,	// (0x000819dd) main_cam_set_pane_t1

0xc6e6,	// (0x000819f9) main_cset_listscroll_pane_ParamLimits

0xc6e6,	// (0x000819f9) main_cset_listscroll_pane

0xc711,	// (0x00081a24) main_cset_slider_pane_ParamLimits

0xc711,	// (0x00081a24) main_cset_slider_pane

0x3a15,	// (0x00078d28) main_cset_list_pane_ParamLimits

0x3a15,	// (0x00078d28) main_cset_list_pane

0x3a25,	// (0x00078d38) scroll_pane_cp028

0xc730,	// (0x00081a43) aid_area_touch_slider

0xc74c,	// (0x00081a5f) cset_slider_pane

0xc776,	// (0x00081a89) main_cset_slider_pane_g1

0xc78b,	// (0x00081a9e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00084c89) main_cset_slider_pane_g

0x3a5e,	// (0x00078d71) main_cset_slider_pane_t1

0xc84d,	// (0x00081b60) main_cset_slider_pane_t2

0xc867,	// (0x00081b7a) main_cset_slider_pane_t3

0xc881,	// (0x00081b94) main_cset_slider_pane_t4

0xc89b,	// (0x00081bae) main_cset_slider_pane_t5

0xc8b9,	// (0x00081bcc) main_cset_slider_pane_t6

0xc8d0,	// (0x00081be3) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00084cae) main_cset_slider_pane_t

0xc9dc,	// (0x00081cef) cset_list_set_pane_ParamLimits

0xc9dc,	// (0x00081cef) cset_list_set_pane

0xc9f2,	// (0x00081d05) aid_position_infowindow_above

0xc9fa,	// (0x00081d0d) aid_position_infowindow_below

0xca02,	// (0x00081d15) cset_list_set_pane_g1_ParamLimits

0xca02,	// (0x00081d15) cset_list_set_pane_g1

0x5fb7,	// (0x0007b2ca) cset_list_set_pane_g3_ParamLimits

0x5fb7,	// (0x0007b2ca) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00084ccd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00084ccd) cset_list_set_pane_g

0x5fc6,	// (0x0007b2d9) cset_list_set_pane_t1_ParamLimits

0x5fc6,	// (0x0007b2d9) cset_list_set_pane_t1

0x0ea4,	// (0x000761b7) list_highlight_pane_cp021_ParamLimits

0x0ea4,	// (0x000761b7) list_highlight_pane_cp021

0x17c0,	// (0x00076ad3) cset_slider_pane_g1

0x17d2,	// (0x00076ae5) cset_slider_pane_g2

0x17c9,	// (0x00076adc) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00084cd2) cset_slider_pane_g

0xca0e,	// (0x00081d21) aid_area_touch_cam4_zoom

0xca16,	// (0x00081d29) cam4_zoom_cont_pane

0xca1e,	// (0x00081d31) cam4_zoom_pane_g1

0xca26,	// (0x00081d39) cam4_zoom_pane_g2

0xca2e,	// (0x00081d41) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00084cd9) cam4_zoom_pane_g

0x4094,	// (0x000793a7) cam4_zoom_cont_pane_g1

0x409d,	// (0x000793b0) cam4_zoom_cont_pane_g2

0x40a6,	// (0x000793b9) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00084ce0) cam4_zoom_cont_pane_g

0xbf1a,	// (0x0008122d) call4_image_pane_ParamLimits

0xbf1a,	// (0x0008122d) call4_image_pane

0x37d7,	// (0x00078aea) call4_windows_conf_pane_ParamLimits

0x3818,	// (0x00078b2b) popup_call4_audio_in_window_ParamLimits

0x3818,	// (0x00078b2b) popup_call4_audio_in_window

0xedd8,	// (0x000840eb) bg_popup_call2_act_pane_cp02

0x388e,	// (0x00078ba1) call4_list_conf_pane

0x2e8d,	// (0x000781a0) call4_image_pane_g1

0x2e8d,	// (0x000781a0) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000849f4) call4_image_pane_g

0x3afe,	// (0x00078e11) list_single_graphic_popup_conf4_pane_ParamLimits

0x3afe,	// (0x00078e11) list_single_graphic_popup_conf4_pane

0xedd8,	// (0x000840eb) list_highlight_pane_cp022

0x3b11,	// (0x00078e24) list_single_graphic_popup_conf4_pane_g1

0x1389,	// (0x0007669c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00084ce7) list_single_graphic_popup_conf4_pane_g

0x3b19,	// (0x00078e2c) list_single_graphic_popup_conf4_pane_t1

0x8079,	// (0x0007d38c) popup_vtel_slider_window_ParamLimits

0x8079,	// (0x0007d38c) popup_vtel_slider_window

0x37b9,	// (0x00078acc) dialer2_ne_pane_t2_ParamLimits

0x37b9,	// (0x00078acc) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00084bc8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00084bc8) dialer2_ne_pane_t

0x0ea4,	// (0x000761b7) bg_popup_sub_pane_cp010_ParamLimits

0x0ea4,	// (0x000761b7) bg_popup_sub_pane_cp010

0xca36,	// (0x00081d49) popup_vtel_slider_window_g1_ParamLimits

0xca36,	// (0x00081d49) popup_vtel_slider_window_g1

0xca42,	// (0x00081d55) popup_vtel_slider_window_g2_ParamLimits

0xca42,	// (0x00081d55) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00084cec) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00084cec) popup_vtel_slider_window_g

0xca8a,	// (0x00081d9d) vtel_slider_pane_ParamLimits

0xca8a,	// (0x00081d9d) vtel_slider_pane

0xca99,	// (0x00081dac) vtel_slider_pane_g1_ParamLimits

0xca99,	// (0x00081dac) vtel_slider_pane_g1

0xcaa6,	// (0x00081db9) vtel_slider_pane_g2_ParamLimits

0xcaa6,	// (0x00081db9) vtel_slider_pane_g2

0xcab3,	// (0x00081dc6) vtel_slider_pane_g3_ParamLimits

0xcab3,	// (0x00081dc6) vtel_slider_pane_g3

0xca99,	// (0x00081dac) vtel_slider_pane_g4_ParamLimits

0xca99,	// (0x00081dac) vtel_slider_pane_g4

0xcac0,	// (0x00081dd3) vtel_slider_pane_g5_ParamLimits

0xcac0,	// (0x00081dd3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00084cf5) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00084cf5) vtel_slider_pane_g

0x0ea4,	// (0x000761b7) main_gallery2_pane

0xc281,	// (0x00081594) aid_size_row_itut2_dropdow_list_ParamLimits

0xc281,	// (0x00081594) aid_size_row_itut2_dropdow_list

0xc2e1,	// (0x000815f4) grid_vitu2_function_top_pane_ParamLimits

0xc2e1,	// (0x000815f4) grid_vitu2_function_top_pane

0xc337,	// (0x0008164a) popup_vitu2_dropdown_list_window_ParamLimits

0xc337,	// (0x0008164a) popup_vitu2_dropdown_list_window

0xc357,	// (0x0008166a) popup_vitu2_match_list_window

0xcacd,	// (0x00081de0) cell_vitu2_function_top_pane_ParamLimits

0xcacd,	// (0x00081de0) cell_vitu2_function_top_pane

0xcaed,	// (0x00081e00) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcaed,	// (0x00081e00) cell_vitu2_function_top_pane_cp01

0xcb0b,	// (0x00081e1e) cell_vitu2_function_top_wide_pane_ParamLimits

0xcb0b,	// (0x00081e1e) cell_vitu2_function_top_wide_pane

0x0ea4,	// (0x000761b7) bg_button_pane_cp012

0xcb29,	// (0x00081e3c) cell_vitu2_function_top_pane_g1

0xcb3d,	// (0x00081e50) bg_button_pane_cp013_ParamLimits

0xcb3d,	// (0x00081e50) bg_button_pane_cp013

0xcb59,	// (0x00081e6c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcb59,	// (0x00081e6c) cell_vitu2_function_top_wide_pane_g1

0x4a87,	// (0x00079d9a) bg_popup_sub_pane_cp20

0xcb71,	// (0x00081e84) list_vitu2_match_list_pane

0x390b,	// (0x00078c1e) bg_popup_sub_pane_cp20_g1

0x3913,	// (0x00078c26) bg_popup_sub_pane_cp20_g2

0x0e06,	// (0x00076119) bg_popup_sub_pane_cp20_g3

0x391b,	// (0x00078c2e) bg_popup_sub_pane_cp20_g4

0x0de6,	// (0x000760f9) bg_popup_sub_pane_cp20_g5

0x3b2f,	// (0x00078e42) bg_popup_sub_pane_cp20_g6

0x392b,	// (0x00078c3e) bg_popup_sub_pane_cp20_g7

0x3933,	// (0x00078c46) bg_popup_sub_pane_cp20_g8

0x393b,	// (0x00078c4e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00084d00) bg_popup_sub_pane_cp20_g

0xcb89,	// (0x00081e9c) list_vitu2_match_list_item_pane_ParamLimits

0xcb89,	// (0x00081e9c) list_vitu2_match_list_item_pane

0xcb9b,	// (0x00081eae) list_vitu2_match_list_item_pane_t1

0xedd8,	// (0x000840eb) bg_popup_sub_pane_cp21

0x12b1,	// (0x000765c4) grid_vitu2_dropdown_list_pane

0xcbb5,	// (0x00081ec8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcbb5,	// (0x00081ec8) cell_vitu2_dropdown_list_char_pane

0xcbd6,	// (0x00081ee9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcbd6,	// (0x00081ee9) cell_vitu2_dropdown_list_ctrl_pane

0x3b49,	// (0x00078e5c) cell_vitu2_dropdown_list_char_pane_g1

0x3b40,	// (0x00078e53) cell_vitu2_dropdown_list_char_pane_g2

0x3b37,	// (0x00078e4a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00084d1d) cell_vitu2_dropdown_list_char_pane_g

0xcc02,	// (0x00081f15) cell_vitu2_dropdown_list_char_pane_t1

0xcc10,	// (0x00081f23) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc10,	// (0x00081f23) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc1d,	// (0x00081f30) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc1d,	// (0x00081f30) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc2a,	// (0x00081f3d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc2a,	// (0x00081f3d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcc37,	// (0x00081f4a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcc37,	// (0x00081f4a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x30f9,	// (0x0007840c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x30f9,	// (0x0007840c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00084d24) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00084d24) cell_vitu2_dropdown_list_ctrl_pane_g

0xcc53,	// (0x00081f66) aid_size_cell_gallery2_ParamLimits

0xcc53,	// (0x00081f66) aid_size_cell_gallery2

0xcc6d,	// (0x00081f80) grid_gallery2_pane_ParamLimits

0xcc6d,	// (0x00081f80) grid_gallery2_pane

0xb6a9,	// (0x000809bc) scroll_pane_cp029_ParamLimits

0xb6a9,	// (0x000809bc) scroll_pane_cp029

0xcc84,	// (0x00081f97) cell_gallery2_pane_ParamLimits

0xcc84,	// (0x00081f97) cell_gallery2_pane

0x3b52,	// (0x00078e65) cell_gallery2_pane_g2

0x4c50,	// (0x00079f63) cell_gallery2_pane_g3

0x3b5a,	// (0x00078e6d) cell_gallery2_pane_g4

0x3b62,	// (0x00078e75) cell_gallery2_pane_g5

0x167c,	// (0x0007698f) grid_highlight_pane_cp10

0xc357,	// (0x0008166a) popup_vitu2_match_list_window_ParamLimits

0xc36b,	// (0x0008167e) popup_vitu2_query_window_ParamLimits

0xc36b,	// (0x0008167e) popup_vitu2_query_window

0xedd8,	// (0x000840eb) bg_vitu2_candi_button_pane

0x3b49,	// (0x00078e5c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3b40,	// (0x00078e53) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3b37,	// (0x00078e4a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6021,	// (0x0007b334) bg_button_pane_cp015

0xccd5,	// (0x00081fe8) bg_button_pane_cp016

0xcce8,	// (0x00081ffb) bg_button_pane_cp017

0x2a85,	// (0x00077d98) bg_popup_sub_pane_cp22

0x3b6a,	// (0x00078e7d) popup_vitu2_query_window_g1

0x6054,	// (0x0007b367) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00084d2f) popup_vitu2_query_window_g

0x6071,	// (0x0007b384) popup_vitu2_query_window_t1_ParamLimits

0x6071,	// (0x0007b384) popup_vitu2_query_window_t1

0x60a4,	// (0x0007b3b7) popup_vitu2_query_window_t2_ParamLimits

0x60a4,	// (0x0007b3b7) popup_vitu2_query_window_t2

0x60b6,	// (0x0007b3c9) popup_vitu2_query_window_t3_ParamLimits

0x60b6,	// (0x0007b3c9) popup_vitu2_query_window_t3

0xcd0c,	// (0x0008201f) popup_vitu2_query_window_t4_ParamLimits

0xcd0c,	// (0x0008201f) popup_vitu2_query_window_t4

0xcd2d,	// (0x00082040) popup_vitu2_query_window_t5_ParamLimits

0xcd2d,	// (0x00082040) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00084d36) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00084d36) popup_vitu2_query_window_t

0x3a0d,	// (0x00078d20) main_cset_text_pane

0xc730,	// (0x00081a43) aid_area_touch_slider_ParamLimits

0xc74c,	// (0x00081a5f) cset_slider_pane_ParamLimits

0xc776,	// (0x00081a89) main_cset_slider_pane_g1_ParamLimits

0xc78b,	// (0x00081a9e) main_cset_slider_pane_g2_ParamLimits

0x3a2e,	// (0x00078d41) main_cset_slider_pane_g3_ParamLimits

0x3a2e,	// (0x00078d41) main_cset_slider_pane_g3

0xc7a0,	// (0x00081ab3) main_cset_slider_pane_g4_ParamLimits

0xc7a0,	// (0x00081ab3) main_cset_slider_pane_g4

0xc7af,	// (0x00081ac2) main_cset_slider_pane_g5_ParamLimits

0xc7af,	// (0x00081ac2) main_cset_slider_pane_g5

0xc7bd,	// (0x00081ad0) main_cset_slider_pane_g6_ParamLimits

0xc7bd,	// (0x00081ad0) main_cset_slider_pane_g6

0xf976,	// (0x00084c89) main_cset_slider_pane_g_ParamLimits

0x3a5e,	// (0x00078d71) main_cset_slider_pane_t1_ParamLimits

0xc84d,	// (0x00081b60) main_cset_slider_pane_t2_ParamLimits

0xc867,	// (0x00081b7a) main_cset_slider_pane_t3_ParamLimits

0xc881,	// (0x00081b94) main_cset_slider_pane_t4_ParamLimits

0xc89b,	// (0x00081bae) main_cset_slider_pane_t5_ParamLimits

0xc8b9,	// (0x00081bcc) main_cset_slider_pane_t6_ParamLimits

0xc8d0,	// (0x00081be3) main_cset_slider_pane_t7_ParamLimits

0xc8fe,	// (0x00081c11) main_cset_slider_pane_t8_ParamLimits

0xc8fe,	// (0x00081c11) main_cset_slider_pane_t8

0xc926,	// (0x00081c39) main_cset_slider_pane_t9_ParamLimits

0xc926,	// (0x00081c39) main_cset_slider_pane_t9

0xc94e,	// (0x00081c61) main_cset_slider_pane_t10_ParamLimits

0xc94e,	// (0x00081c61) main_cset_slider_pane_t10

0xc976,	// (0x00081c89) main_cset_slider_pane_t11_ParamLimits

0xc976,	// (0x00081c89) main_cset_slider_pane_t11

0xc9a0,	// (0x00081cb3) main_cset_slider_pane_t12_ParamLimits

0xc9a0,	// (0x00081cb3) main_cset_slider_pane_t12

0xc9bd,	// (0x00081cd0) main_cset_slider_pane_t13_ParamLimits

0xc9bd,	// (0x00081cd0) main_cset_slider_pane_t13

0xf99b,	// (0x00084cae) main_cset_slider_pane_t_ParamLimits

0xedd8,	// (0x000840eb) bg_popup_sub_pane_cp011

0x3b76,	// (0x00078e89) main_cset_text_pane_g1

0x3b7e,	// (0x00078e91) main_cset_text_pane_t1

0x3b8c,	// (0x00078e9f) main_cset_text_pane_t2

0x3b9a,	// (0x00078ead) main_cset_text_pane_t3

0x3ba8,	// (0x00078ebb) main_cset_text_pane_t4

0x3bb6,	// (0x00078ec9) main_cset_text_pane_t5

0x3bc4,	// (0x00078ed7) main_cset_text_pane_t6

0x3bd2,	// (0x00078ee5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00084d45) main_cset_text_pane_t

0xedd8,	// (0x000840eb) main_cam4_burst_pane

0xedd8,	// (0x000840eb) main_cam5_pane

0xc67f,	// (0x00081992) bg_button_pane_cp019

0xc688,	// (0x0008199b) bg_button_pane_cp020

0x3a3a,	// (0x00078d4d) main_cset_slider_pane_g7_ParamLimits

0x3a3a,	// (0x00078d4d) main_cset_slider_pane_g7

0x3a46,	// (0x00078d59) main_cset_slider_pane_g8_ParamLimits

0x3a46,	// (0x00078d59) main_cset_slider_pane_g8

0xc7d1,	// (0x00081ae4) main_cset_slider_pane_g9_ParamLimits

0xc7d1,	// (0x00081ae4) main_cset_slider_pane_g9

0xc7dd,	// (0x00081af0) main_cset_slider_pane_g10_ParamLimits

0xc7dd,	// (0x00081af0) main_cset_slider_pane_g10

0xc7e9,	// (0x00081afc) main_cset_slider_pane_g11_ParamLimits

0xc7e9,	// (0x00081afc) main_cset_slider_pane_g11

0xc7f5,	// (0x00081b08) main_cset_slider_pane_g12_ParamLimits

0xc7f5,	// (0x00081b08) main_cset_slider_pane_g12

0xc801,	// (0x00081b14) main_cset_slider_pane_g13_ParamLimits

0xc801,	// (0x00081b14) main_cset_slider_pane_g13

0xc80d,	// (0x00081b20) main_cset_slider_pane_g14_ParamLimits

0xc80d,	// (0x00081b20) main_cset_slider_pane_g14

0xc819,	// (0x00081b2c) main_cset_slider_pane_g15_ParamLimits

0xc819,	// (0x00081b2c) main_cset_slider_pane_g15

0x3a8c,	// (0x00078d9f) main_cset_slider_pane_t14_ParamLimits

0x3a8c,	// (0x00078d9f) main_cset_slider_pane_t14

0x3ac5,	// (0x00078dd8) main_cset_slider_pane_t15_ParamLimits

0x3ac5,	// (0x00078dd8) main_cset_slider_pane_t15

0xcd4e,	// (0x00082061) aid_cam4_burst_size_cell_ParamLimits

0xcd4e,	// (0x00082061) aid_cam4_burst_size_cell

0xcd6a,	// (0x0008207d) grid_cam4_burst_pane_ParamLimits

0xcd6a,	// (0x0008207d) grid_cam4_burst_pane

0xcd9a,	// (0x000820ad) linegrid_cam4_burst_pane_ParamLimits

0xcd9a,	// (0x000820ad) linegrid_cam4_burst_pane

0xcdba,	// (0x000820cd) scroll_pane_cp30_ParamLimits

0xcdba,	// (0x000820cd) scroll_pane_cp30

0xcdc6,	// (0x000820d9) cell_cam4_burst_pane_ParamLimits

0xcdc6,	// (0x000820d9) cell_cam4_burst_pane

0x3bec,	// (0x00078eff) linegrid_cam4_burst_pane_g1_ParamLimits

0x3bec,	// (0x00078eff) linegrid_cam4_burst_pane_g1

0xce02,	// (0x00082115) linegrid_cam4_burst_pane_g2_ParamLimits

0xce02,	// (0x00082115) linegrid_cam4_burst_pane_g2

0x3bf9,	// (0x00078f0c) linegrid_cam4_burst_pane_g3_ParamLimits

0x3bf9,	// (0x00078f0c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00084d54) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00084d54) linegrid_cam4_burst_pane_g

0xce13,	// (0x00082126) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce13,	// (0x00082126) linegrid_cam4_burst_pane_g3_copy1

0x3c06,	// (0x00078f19) linegrid_cam4_burst_pane_g4_ParamLimits

0x3c06,	// (0x00078f19) linegrid_cam4_burst_pane_g4

0xce2d,	// (0x00082140) linegrid_cam4_burst_pane_g5_ParamLimits

0xce2d,	// (0x00082140) linegrid_cam4_burst_pane_g5

0xce3e,	// (0x00082151) linegrid_cam4_burst_pane_g6_ParamLimits

0xce3e,	// (0x00082151) linegrid_cam4_burst_pane_g6

0x3c13,	// (0x00078f26) linegrid_cam4_burst_pane_g7_ParamLimits

0x3c13,	// (0x00078f26) linegrid_cam4_burst_pane_g7

0xce4f,	// (0x00082162) cell_cam4_burst_pane_g1

0x3c2c,	// (0x00078f3f) main_cam5_pane_t1_ParamLimits

0x3c2c,	// (0x00078f3f) main_cam5_pane_t1

0x3c3e,	// (0x00078f51) main_cam5_pane_t2_ParamLimits

0x3c3e,	// (0x00078f51) main_cam5_pane_t2

0x3c50,	// (0x00078f63) main_cam5_pane_t3_ParamLimits

0x3c50,	// (0x00078f63) main_cam5_pane_t3

0x3c62,	// (0x00078f75) main_cam5_pane_t4_ParamLimits

0x3c62,	// (0x00078f75) main_cam5_pane_t4

0x3c7a,	// (0x00078f8d) main_cam5_pane_t5_ParamLimits

0x3c7a,	// (0x00078f8d) main_cam5_pane_t5

0x3c8e,	// (0x00078fa1) main_cam5_pane_t6_ParamLimits

0x3c8e,	// (0x00078fa1) main_cam5_pane_t6

0x3ca2,	// (0x00078fb5) main_cam5_pane_t7_ParamLimits

0x3ca2,	// (0x00078fb5) main_cam5_pane_t7

0x3cb4,	// (0x00078fc7) main_cam5_pane_t8_ParamLimits

0x3cb4,	// (0x00078fc7) main_cam5_pane_t8

0x3cd0,	// (0x00078fe3) main_cam5_pane_t9_ParamLimits

0x3cd0,	// (0x00078fe3) main_cam5_pane_t9

0x3ce2,	// (0x00078ff5) main_cam5_pane_t10_ParamLimits

0x3ce2,	// (0x00078ff5) main_cam5_pane_t10

0x3cf4,	// (0x00079007) main_cam5_pane_t11_ParamLimits

0x3cf4,	// (0x00079007) main_cam5_pane_t11

0x3d06,	// (0x00079019) main_cam5_pane_t12_ParamLimits

0x3d06,	// (0x00079019) main_cam5_pane_t12

0x3d1b,	// (0x0007902e) main_cam5_pane_t13_ParamLimits

0x3d1b,	// (0x0007902e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00084d60) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00084d60) main_cam5_pane_t

0x708a,	// (0x0007c39d) popup_scut_keymap_window_ParamLimits

0x708a,	// (0x0007c39d) popup_scut_keymap_window

0xce62,	// (0x00082175) aid_size_cell_brow_shortcut

0x167c,	// (0x0007698f) bg_popup_window_pane_cp010

0xce6e,	// (0x00082181) grid_scut_pane

0xce7a,	// (0x0008218d) cell_scut_pane_ParamLimits

0xce7a,	// (0x0008218d) cell_scut_pane

0xce91,	// (0x000821a4) cell_scut_pane_g1

0x3d38,	// (0x0007904b) cell_scut_pane_t1

0x3d47,	// (0x0007905a) cell_scut_pane_t2

0xce9a,	// (0x000821ad) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00084d7b) cell_scut_pane_t

0xae8a,	// (0x0008019d) main_mup3_pane_g8_ParamLimits

0xae8a,	// (0x0008019d) main_mup3_pane_g8

0xc28f,	// (0x000815a2) area_vitu2_query_pane_ParamLimits

0xc28f,	// (0x000815a2) area_vitu2_query_pane

0x6033,	// (0x0007b346) input_focus_pane_cp08

0x3d56,	// (0x00079069) area_vitu2_query_pane_g1

0x6134,	// (0x0007b447) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00084d82) area_vitu2_query_pane_g

0xcea8,	// (0x000821bb) area_vitu2_query_pane_t1_ParamLimits

0xcea8,	// (0x000821bb) area_vitu2_query_pane_t1

0xcebc,	// (0x000821cf) area_vitu2_query_pane_t2_ParamLimits

0xcebc,	// (0x000821cf) area_vitu2_query_pane_t2

0x6145,	// (0x0007b458) area_vitu2_query_pane_t3_ParamLimits

0x6145,	// (0x0007b458) area_vitu2_query_pane_t3

0x616d,	// (0x0007b480) area_vitu2_query_pane_t4_ParamLimits

0x616d,	// (0x0007b480) area_vitu2_query_pane_t4

0x6195,	// (0x0007b4a8) area_vitu2_query_pane_t5_ParamLimits

0x6195,	// (0x0007b4a8) area_vitu2_query_pane_t5

0x61bd,	// (0x0007b4d0) area_vitu2_query_pane_t6_ParamLimits

0x61bd,	// (0x0007b4d0) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00084d87) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00084d87) area_vitu2_query_pane_t

0xced0,	// (0x000821e3) bg_button_pane_cp018

0xcede,	// (0x000821f1) bg_button_pane_cp021

0x6209,	// (0x0007b51c) bg_button_pane_cp022

0x621a,	// (0x0007b52d) input_focus_pane_cp09

0x14c5,	// (0x000767d8) aid_size_touch_mv_arrow_left

0x14ee,	// (0x00076801) aid_size_touch_mv_arrow_right

0xc831,	// (0x00081b44) main_cset_slider_pane_g16_ParamLimits

0xc831,	// (0x00081b44) main_cset_slider_pane_g16

0xc83f,	// (0x00081b52) main_cset_slider_pane_g17_ParamLimits

0xc83f,	// (0x00081b52) main_cset_slider_pane_g17

0xce4f,	// (0x00082162) cell_cam4_burst_pane_g1_ParamLimits

0xedd8,	// (0x000840eb) compa_mode_pane

0xca4e,	// (0x00081d61) popup_vtel_slider_window_g3_ParamLimits

0xca4e,	// (0x00081d61) popup_vtel_slider_window_g3

0xca62,	// (0x00081d75) popup_vtel_slider_window_g4_ParamLimits

0xca62,	// (0x00081d75) popup_vtel_slider_window_g4

0xca76,	// (0x00081d89) popup_vtel_slider_window_t1_ParamLimits

0xca76,	// (0x00081d89) popup_vtel_slider_window_t1

0xedd8,	// (0x000840eb) main_cl_pane

0xa1bc,	// (0x0007f4cf) popup_imed_adjust2_window_ParamLimits

0x2a85,	// (0x00077d98) bg_tb_trans_pane_cp05_ParamLimits

0x33bc,	// (0x000786cf) popup_imed_adjust2_window_g1_ParamLimits

0x33cb,	// (0x000786de) popup_imed_adjust2_window_g2_ParamLimits

0x33cb,	// (0x000786de) popup_imed_adjust2_window_g2

0x33d7,	// (0x000786ea) popup_imed_adjust2_window_g3_ParamLimits

0x33d7,	// (0x000786ea) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00084af2) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00084af2) popup_imed_adjust2_window_g

0x33e3,	// (0x000786f6) popup_imed_adjust2_window_t1_ParamLimits

0x33fb,	// (0x0007870e) slider_imed_adjust_pane_ParamLimits

0x340f,	// (0x00078722) slider_imed_adjust_pane_g1_ParamLimits

0x341f,	// (0x00078732) slider_imed_adjust_pane_g2_ParamLimits

0x342f,	// (0x00078742) slider_imed_adjust_pane_g3_ParamLimits

0x3440,	// (0x00078753) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00084af9) slider_imed_adjust_pane_g_ParamLimits

0xbfd6,	// (0x000812e9) aid_touch_area_cam4_ParamLimits

0xbfd6,	// (0x000812e9) aid_touch_area_cam4

0xbfe6,	// (0x000812f9) battery_pane_cp01

0xc06d,	// (0x00081380) main_camera4_pane_g6_ParamLimits

0xc06d,	// (0x00081380) main_camera4_pane_g6

0xc08b,	// (0x0008139e) main_camera4_pane_t2_ParamLimits

0xc08b,	// (0x0008139e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00084bfc) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00084bfc) main_camera4_pane_t

0xc112,	// (0x00081425) aid_touch_area_vid4_ParamLimits

0xc112,	// (0x00081425) aid_touch_area_vid4

0xc152,	// (0x00081465) main_video4_pane_g5_ParamLimits

0xc152,	// (0x00081465) main_video4_pane_g5

0xc176,	// (0x00081489) vid4_progress_pane_ParamLimits

0xc176,	// (0x00081489) vid4_progress_pane

0x3a52,	// (0x00078d65) main_cset_slider_pane_g18_ParamLimits

0x3a52,	// (0x00078d65) main_cset_slider_pane_g18

0x3c20,	// (0x00078f33) cell_cam4_burst_pane_g2_ParamLimits

0x3c20,	// (0x00078f33) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00084d5b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00084d5b) cell_cam4_burst_pane_g

0xceea,	// (0x000821fd) bg_cl_pane_ParamLimits

0xceea,	// (0x000821fd) bg_cl_pane

0xcef6,	// (0x00082209) cl_header_pane_ParamLimits

0xcef6,	// (0x00082209) cl_header_pane

0xcf02,	// (0x00082215) cl_listscroll_pane_ParamLimits

0xcf02,	// (0x00082215) cl_listscroll_pane

0x3d62,	// (0x00079075) bg_cl_pane_g1

0x3d6a,	// (0x0007907d) bg_cl_pane_g2

0x3d72,	// (0x00079085) bg_cl_pane_g3

0x3d7a,	// (0x0007908d) bg_cl_pane_g4

0x3d82,	// (0x00079095) bg_cl_pane_g5

0x3d8a,	// (0x0007909d) bg_cl_pane_g6

0x3d92,	// (0x000790a5) bg_cl_pane_g7

0x3d9a,	// (0x000790ad) bg_cl_pane_g8

0x3da2,	// (0x000790b5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00084d96) bg_cl_pane_g

0xcf0e,	// (0x00082221) aid_height_cl_leading_ParamLimits

0xcf0e,	// (0x00082221) aid_height_cl_leading

0xcf1a,	// (0x0008222d) aid_height_cl_text_ParamLimits

0xcf1a,	// (0x0008222d) aid_height_cl_text

0x4a87,	// (0x00079d9a) bg_cl_header_pane_ParamLimits

0x4a87,	// (0x00079d9a) bg_cl_header_pane

0xcf32,	// (0x00082245) cl_header_pane_g1_ParamLimits

0xcf32,	// (0x00082245) cl_header_pane_g1

0xcf3f,	// (0x00082252) cl_header_pane_t1_ParamLimits

0xcf3f,	// (0x00082252) cl_header_pane_t1

0x3daa,	// (0x000790bd) cl_list_pane

0x3a25,	// (0x00078d38) hc_scroll_pane_cp01

0x0de6,	// (0x000760f9) bg_cl_header_pane_g1

0x390b,	// (0x00078c1e) bg_cl_header_pane_g2

0x0e06,	// (0x00076119) bg_cl_header_pane_g3

0x391b,	// (0x00078c2e) bg_cl_header_pane_g4

0x3913,	// (0x00078c26) bg_cl_header_pane_g5

0x3b2f,	// (0x00078e42) bg_cl_header_pane_g6

0x3933,	// (0x00078c46) bg_cl_header_pane_g7

0x393b,	// (0x00078c4e) bg_cl_header_pane_g8

0x392b,	// (0x00078c3e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00084da9) bg_cl_header_pane_g

0xcf51,	// (0x00082264) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcf51,	// (0x00082264) hc_cl_list_double_graphic_heading_pane

0xcf62,	// (0x00082275) hc_cl_list_single_graphic_pane_ParamLimits

0xcf62,	// (0x00082275) hc_cl_list_single_graphic_pane

0xcf7b,	// (0x0008228e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcf7b,	// (0x0008228e) hc_cl_list_single_graphic_pane_g1

0xcf87,	// (0x0008229a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcf87,	// (0x0008229a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00084dbc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00084dbc) hc_cl_list_single_graphic_pane_g

0xcf9b,	// (0x000822ae) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcf9b,	// (0x000822ae) hc_cl_list_single_graphic_pane_t1

0xcf7b,	// (0x0008228e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcf7b,	// (0x0008228e) hc_cl_list_double_graphic_heading_pane_g1

0xcfb0,	// (0x000822c3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcfb0,	// (0x000822c3) hc_cl_list_double_graphic_heading_pane_g2

0xcfc4,	// (0x000822d7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcfc4,	// (0x000822d7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00084dc1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00084dc1) hc_cl_list_double_graphic_heading_pane_g

0xcfd8,	// (0x000822eb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcfd8,	// (0x000822eb) hc_cl_list_double_graphic_heading_pane_t1

0xcfed,	// (0x00082300) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcfed,	// (0x00082300) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00084dc8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00084dc8) hc_cl_list_double_graphic_heading_pane_t

0xd00a,	// (0x0008231d) vid4_progress_pane_g1

0xd01c,	// (0x0008232f) vid4_progress_pane_g2

0x99fc,	// (0x0007ed0f) vid4_progress_pane_g3

0xd02c,	// (0x0008233f) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00084dcd) vid4_progress_pane_g

0xd04a,	// (0x0008235d) vid4_progress_pane_t1

0xd05f,	// (0x00082372) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00084dd8) vid4_progress_pane_t

0xd08a,	// (0x0008239d) wait_bar_pane_cp07

0x2c80,	// (0x00077f93) blid_firmament_pane_ParamLimits

0x2cc3,	// (0x00077fd6) popup_blid_sat_info2_window_g1

0x2ce7,	// (0x00077ffa) popup_blid_sat_info2_window_t3

0x2cf5,	// (0x00078008) popup_blid_sat_info2_window_t4

0x2d03,	// (0x00078016) popup_blid_sat_info2_window_t5

0x2d11,	// (0x00078024) popup_blid_sat_info2_window_t6

0x2d21,	// (0x00078034) popup_blid_sat_info2_window_t7

0x2d2f,	// (0x00078042) popup_blid_sat_info2_window_t8

0x2d3d,	// (0x00078050) popup_blid_sat_info2_window_t9

0x2d4b,	// (0x0007805e) popup_blid_sat_info2_window_t10

0x2e0d,	// (0x00078120) aid_firma_cardinal_ParamLimits

0x2e21,	// (0x00078134) blid_firmament_pane_t1_ParamLimits

0x2e38,	// (0x0007814b) blid_firmament_pane_t2_ParamLimits

0x2e4f,	// (0x00078162) blid_firmament_pane_t3_ParamLimits

0x2e66,	// (0x00078179) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000849eb) blid_firmament_pane_t_ParamLimits

0x2e7d,	// (0x00078190) blid_sat_info_pane_ParamLimits

0x0ea4,	// (0x000761b7) main_cam_set_pane_ParamLimits

0xb642,	// (0x00080955) aid_size_cell_colour_35_ParamLimits

0xb65c,	// (0x0008096f) aid_size_cell_colour_112_ParamLimits

0xb673,	// (0x00080986) aid_size_cell_effect_ParamLimits

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp02_ParamLimits

0x115e,	// (0x00076471) heading_imed_pane_ParamLimits

0xb68d,	// (0x000809a0) listscroll_imed_pane_ParamLimits

0x209f,	// (0x000773b2) popup_call2_audio_first_window_g5_ParamLimits

0x209f,	// (0x000773b2) popup_call2_audio_first_window_g5

0xbd93,	// (0x000810a6) aid_size_touch_image3_arrow_left_ParamLimits

0xbd93,	// (0x000810a6) aid_size_touch_image3_arrow_left

0xbda9,	// (0x000810bc) aid_size_touch_image3_arrow_right_ParamLimits

0xbda9,	// (0x000810bc) aid_size_touch_image3_arrow_right

0xd075,	// (0x00082388) vid4_progress_pane_t3

0xb92b,	// (0x00080c3e) main_hwr_training_symbol_option_pane_ParamLimits

0xb92b,	// (0x00080c3e) main_hwr_training_symbol_option_pane

0x36a9,	// (0x000789bc) popup_hwr_training_preview_window_ParamLimits

0x36a9,	// (0x000789bc) popup_hwr_training_preview_window

0xb98c,	// (0x00080c9f) hwr_training_navi_pane_g5_ParamLimits

0xb98c,	// (0x00080c9f) hwr_training_navi_pane_g5

0x38f9,	// (0x00078c0c) popup_char_count_window

0x4a87,	// (0x00079d9a) bg_popup_sub_pane_cp20_ParamLimits

0xcb71,	// (0x00081e84) list_vitu2_match_list_pane_ParamLimits

0xcb7d,	// (0x00081e90) vitu2_page_scroll_pane_ParamLimits

0xcb7d,	// (0x00081e90) vitu2_page_scroll_pane

0x3db3,	// (0x000790c6) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3db3,	// (0x000790c6) list_single_hwr_training_symbol_option_pane

0x3dc6,	// (0x000790d9) list_single_hwr_training_symbol_option_pane_g1

0x3dce,	// (0x000790e1) list_single_hwr_training_symbol_option_pane_t1

0x3ddc,	// (0x000790ef) bg_button_pane_cp023

0x3de5,	// (0x000790f8) bg_button_pane_cp024

0xd0bf,	// (0x000823d2) vitu2_page_scroll_pane_g1

0xd0c7,	// (0x000823da) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00084ddf) vitu2_page_scroll_pane_g

0xd0cf,	// (0x000823e2) vitu2_page_scroll_pane_t1

0x3e18,	// (0x0007912b) popup_char_count_window_g1

0x3e21,	// (0x00079134) popup_char_count_window_g2

0x3e2a,	// (0x0007913d) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00084de4) popup_char_count_window_g

0x3e33,	// (0x00079146) popup_char_count_window_t1

0xedd8,	// (0x000840eb) main_vded2_pane

0x33a8,	// (0x000786bb) aid_size_cell_imed_line

0x33b2,	// (0x000786c5) grid_imed_line_width_pane

0xc1e4,	// (0x000814f7) vid4_indicators_pane_g4

0x3e41,	// (0x00079154) cell_imed_line_width_pane_ParamLimits

0x3e41,	// (0x00079154) cell_imed_line_width_pane

0x3e55,	// (0x00079168) cell_imed_line_width_pane_g1

0x36be,	// (0x000789d1) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00084deb) cell_imed_line_width_pane_g

0xd0de,	// (0x000823f1) main_vded2_pane_g1_ParamLimits

0xd0de,	// (0x000823f1) main_vded2_pane_g1

0xd0eb,	// (0x000823fe) main_vded2_pane_g2_ParamLimits

0xd0eb,	// (0x000823fe) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00084df0) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00084df0) main_vded2_pane_g

0xd0f9,	// (0x0008240c) vded2_slider_pane_ParamLimits

0xd0f9,	// (0x0008240c) vded2_slider_pane

0xd106,	// (0x00082419) aid_size_touch_vded2_end

0xd110,	// (0x00082423) aid_size_touch_vded2_playhead

0x3e5e,	// (0x00079171) aid_size_touch_vded2_start

0x3e66,	// (0x00079179) vded2_slider_bg_pane

0x3e6f,	// (0x00079182) vded2_slider_pane_g1

0x3e78,	// (0x0007918b) vded2_slider_pane_g2

0xd118,	// (0x0008242b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00084df5) vded2_slider_pane_g

0x3e80,	// (0x00079193) vded2_slider_bg_pane_g1

0x3e89,	// (0x0007919c) vded2_slider_bg_pane_g2

0x3e92,	// (0x000791a5) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00084dfc) vded2_slider_bg_pane_g

0x9a14,	// (0x0007ed27) aid_postcard_touch_down_pane_ParamLimits

0x9a14,	// (0x0007ed27) aid_postcard_touch_down_pane

0x9a24,	// (0x0007ed37) aid_postcard_touch_up_pane_ParamLimits

0x9a24,	// (0x0007ed37) aid_postcard_touch_up_pane

0xedd8,	// (0x000840eb) main_blid2_pane

0xa147,	// (0x0007f45a) popup_blid2_search_window

0xedd8,	// (0x000840eb) blid2_gps_pane

0xedd8,	// (0x000840eb) blid2_navig_pane

0xedd8,	// (0x000840eb) blid2_search_pane

0xedd8,	// (0x000840eb) blid2_tripm_pane

0xd121,	// (0x00082434) blid2_search_pane_g1_ParamLimits

0xd121,	// (0x00082434) blid2_search_pane_g1

0xd131,	// (0x00082444) blid2_search_pane_t1_ParamLimits

0xd131,	// (0x00082444) blid2_search_pane_t1

0xd143,	// (0x00082456) aid_size_cell_blid2_gps_ParamLimits

0xd143,	// (0x00082456) aid_size_cell_blid2_gps

0xd153,	// (0x00082466) blid2_gps_pane_g1_ParamLimits

0xd153,	// (0x00082466) blid2_gps_pane_g1

0xd15f,	// (0x00082472) grid_blid2_satellite_pane_ParamLimits

0xd15f,	// (0x00082472) grid_blid2_satellite_pane

0xd16f,	// (0x00082482) blid2_navig_pane_g1_ParamLimits

0xd16f,	// (0x00082482) blid2_navig_pane_g1

0xd17b,	// (0x0008248e) blid2_navig_pane_t1_ParamLimits

0xd17b,	// (0x0008248e) blid2_navig_pane_t1

0xd18d,	// (0x000824a0) blid2_navig_pane_t2_ParamLimits

0xd18d,	// (0x000824a0) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00084e03) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00084e03) blid2_navig_pane_t

0xd19f,	// (0x000824b2) blid2_navig_ring_pane_ParamLimits

0xd19f,	// (0x000824b2) blid2_navig_ring_pane

0xd1af,	// (0x000824c2) blid2_speed_pane_ParamLimits

0xd1af,	// (0x000824c2) blid2_speed_pane

0xd1bb,	// (0x000824ce) blid2_tripm_pane_g1_ParamLimits

0xd1bb,	// (0x000824ce) blid2_tripm_pane_g1

0xd1cb,	// (0x000824de) blid2_tripm_pane_g2_ParamLimits

0xd1cb,	// (0x000824de) blid2_tripm_pane_g2

0xd1d7,	// (0x000824ea) blid2_tripm_pane_g3_ParamLimits

0xd1d7,	// (0x000824ea) blid2_tripm_pane_g3

0xd1e3,	// (0x000824f6) blid2_tripm_pane_g4_ParamLimits

0xd1e3,	// (0x000824f6) blid2_tripm_pane_g4

0xd1ef,	// (0x00082502) blid2_tripm_pane_g5_ParamLimits

0xd1ef,	// (0x00082502) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00084e08) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00084e08) blid2_tripm_pane_g

0xd20b,	// (0x0008251e) blid2_tripm_pane_t1_ParamLimits

0xd20b,	// (0x0008251e) blid2_tripm_pane_t1

0xd21f,	// (0x00082532) blid2_tripm_pane_t2_ParamLimits

0xd21f,	// (0x00082532) blid2_tripm_pane_t2

0xd231,	// (0x00082544) blid2_tripm_pane_t3_ParamLimits

0xd231,	// (0x00082544) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00084e15) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00084e15) blid2_tripm_pane_t

0xd263,	// (0x00082576) cell_blid2_satellite_pane_ParamLimits

0xd263,	// (0x00082576) cell_blid2_satellite_pane

0xd27d,	// (0x00082590) cell_blid2_satellite_pane_g1

0x3e9b,	// (0x000791ae) cell_blid2_satellite_pane_t1

0x2e8d,	// (0x000781a0) blid2_speed_pane_g1

0x3ea9,	// (0x000791bc) blid2_speed_pane_t1

0x3eb7,	// (0x000791ca) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00084e1e) blid2_speed_pane_t

0x2e8d,	// (0x000781a0) blid2_navig_ring_pane_g1

0xd286,	// (0x00082599) blid2_navig_ring_pane_g2

0xd28e,	// (0x000825a1) blid2_navig_ring_pane_g3

0xd296,	// (0x000825a9) blid2_navig_ring_pane_g4

0xd29e,	// (0x000825b1) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00084e23) blid2_navig_ring_pane_g

0xedd8,	// (0x000840eb) bg_popup_window_pane_cp011

0x3ec5,	// (0x000791d8) popup_blid2_search_window_g1

0x3ecd,	// (0x000791e0) popup_blid2_search_window_t1

0x3edb,	// (0x000791ee) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00084e2e) popup_blid2_search_window_t

0x0cf5,	// (0x00076008) main_browser_pane_g1

0x09ef,	// (0x00075d02) main_browser_pane_ParamLimits

0x0ea4,	// (0x000761b7) bg_button_pane_cp011_ParamLimits

0xc452,	// (0x00081765) cell_vitu2_function_pane_g1_ParamLimits

0x2a85,	// (0x00077d98) bg_popup_sub_pane_cp22_ParamLimits

0x6033,	// (0x0007b346) input_focus_pane_cp08_ParamLimits

0xccfb,	// (0x0008200e) popup_vitu2_query_button_pane_ParamLimits

0xccfb,	// (0x0008200e) popup_vitu2_query_button_pane

0x604a,	// (0x0007b35d) popup_vitu2_query_input_button_pane

0x3b6a,	// (0x00078e7d) popup_vitu2_query_window_g1_ParamLimits

0x6054,	// (0x0007b367) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00084d2f) popup_vitu2_query_window_g_ParamLimits

0xedd8,	// (0x000840eb) bg_button_pane_cp026

0xd2a6,	// (0x000825b9) popup_vitu2_query_input_button_pane_g1

0xedd8,	// (0x000840eb) bg_button_pane_cp025

0x3ee9,	// (0x000791fc) popup_vitu2_query_button_pane_t1

0xaba5,	// (0x0007feb8) main_mp3_pane_t6

0xabb5,	// (0x0007fec8) popup_slider_window_cp01

0xc0c1,	// (0x000813d4) cam4_battery_pane

0xc1a1,	// (0x000814b4) cam4_battery_pane_cp02

0xd002,	// (0x00082315) cam4_battery_pane_cp01

0xd002,	// (0x00082315) cam4_battery_pane_cp03

0x2e8d,	// (0x000781a0) cam4_battery_pane_g1

0x37af,	// (0x00078ac2) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00084e33) cam4_battery_pane_g

0x2d59,	// (0x0007806c) popup_blid_sat_info2_window_t11

0x14c5,	// (0x000767d8) aid_size_touch_mv_arrow_left_ParamLimits

0x14ee,	// (0x00076801) aid_size_touch_mv_arrow_right_ParamLimits

0x154c,	// (0x0007685f) navi_pane_g1_ParamLimits

0x1558,	// (0x0007686b) navi_pane_g2_ParamLimits

0x1586,	// (0x00076899) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000846fd) navi_pane_g_ParamLimits

0x9481,	// (0x0007e794) navi_pane_mv_t1_ParamLimits

0xb699,	// (0x000809ac) grid_imed_effect_pane_ParamLimits

0x7f39,	// (0x0007d24c) aid_placing_vt_slider_lsc

0x0c44,	// (0x00075f57) aid_placing_vt_slider_prt

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp01_ParamLimits

0x3019,	// (0x0007832c) popup_image_details_window_g1_ParamLimits

0x302c,	// (0x0007833f) popup_image_details_window_g2_ParamLimits

0x3041,	// (0x00078354) popup_image_details_window_g3_ParamLimits

0x3041,	// (0x00078354) popup_image_details_window_g3

0xf71d,	// (0x00084a30) popup_image_details_window_g_ParamLimits

0x3055,	// (0x00078368) popup_image_details_window_t1_ParamLimits

0x3067,	// (0x0007837a) popup_image_details_window_t2_ParamLimits

0x3080,	// (0x00078393) popup_image_details_window_t3_ParamLimits

0x3094,	// (0x000783a7) popup_image_details_window_t4_ParamLimits

0x30af,	// (0x000783c2) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x00084a37) popup_image_details_window_t_ParamLimits

0xcf26,	// (0x00082239) cl_header_name_pane_ParamLimits

0xcf26,	// (0x00082239) cl_header_name_pane

0xd2ae,	// (0x000825c1) cl_header_name_pane_t1_ParamLimits

0xd2ae,	// (0x000825c1) cl_header_name_pane_t1

0xd2c5,	// (0x000825d8) cl_header_name_pane_t2_ParamLimits

0xd2c5,	// (0x000825d8) cl_header_name_pane_t2

0xd2ef,	// (0x00082602) cl_header_name_pane_t3_ParamLimits

0xd2ef,	// (0x00082602) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00084e38) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00084e38) cl_header_name_pane_t

0x1615,	// (0x00076928) navi_pane_mv_g2_ParamLimits

0x38d3,	// (0x00078be6) field_vitu2_entry_pane_g1_ParamLimits

0x38df,	// (0x00078bf2) field_vitu2_entry_pane_g2_ParamLimits

0x38eb,	// (0x00078bfe) field_vitu2_entry_pane_g3_ParamLimits

0x38eb,	// (0x00078bfe) field_vitu2_entry_pane_g3

0xf91b,	// (0x00084c2e) field_vitu2_entry_pane_g_ParamLimits

0xc3dd,	// (0x000816f0) cell_vitu2_itu_pane_g1_ParamLimits

0xc3ed,	// (0x00081700) cell_vitu2_itu_pane_g2_ParamLimits

0xc3ed,	// (0x00081700) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00084c3a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00084c3a) cell_vitu2_itu_pane_g

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp05_ParamLimits

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp05

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp03

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp04

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp10_ParamLimits

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp10

0x6209,	// (0x0007b51c) bg_vkb2_func_pane_cp08

0xced0,	// (0x000821e3) bg_vkb2_func_pane_cp06

0xcede,	// (0x000821f1) bg_vkb2_func_pane_cp07

0x3dee,	// (0x00079101) bg_vkb2_func_pane_cp11_ParamLimits

0x3dee,	// (0x00079101) bg_vkb2_func_pane_cp11

0x3e03,	// (0x00079116) bg_vkb2_func_pane_cp12_ParamLimits

0x3e03,	// (0x00079116) bg_vkb2_func_pane_cp12

0xedd8,	// (0x000840eb) bg_vkb2_func_pane_cp09

0x390b,	// (0x00078c1e) bg_vkb2_func_pane_g1

0x0e06,	// (0x00076119) bg_vkb2_func_pane_g2

0x3913,	// (0x00078c26) bg_vkb2_func_pane_g3

0x391b,	// (0x00078c2e) bg_vkb2_func_pane_g4

0x3b2f,	// (0x00078e42) bg_vkb2_func_pane_g5

0x3933,	// (0x00078c46) bg_vkb2_func_pane_g6

0x393b,	// (0x00078c4e) bg_vkb2_func_pane_g7

0x392b,	// (0x00078c3e) bg_vkb2_func_pane_g8

0x0de6,	// (0x000760f9) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00084e3f) bg_vkb2_func_pane_g

0xd1fd,	// (0x00082510) blid2_tripm_pane_g6_ParamLimits

0xd1fd,	// (0x00082510) blid2_tripm_pane_g6

0x3769,	// (0x00078a7c) mp4_progress_pane_g1

0xd257,	// (0x0008256a) blid2_tripm_values_pane_ParamLimits

0xd257,	// (0x0008256a) blid2_tripm_values_pane

0xd314,	// (0x00082627) blid2_tripm_values_pane_t1

0xd322,	// (0x00082635) blid2_tripm_values_pane_t2

0xd330,	// (0x00082643) blid2_tripm_values_pane_t3

0xd33e,	// (0x00082651) blid2_tripm_values_pane_t4

0xd34c,	// (0x0008265f) blid2_tripm_values_pane_t5

0xd35a,	// (0x0008266d) blid2_tripm_values_pane_t6

0xd368,	// (0x0008267b) blid2_tripm_values_pane_t7

0xd376,	// (0x00082689) blid2_tripm_values_pane_t8

0xd384,	// (0x00082697) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00084e52) blid2_tripm_values_pane_t

0x7f79,	// (0x0007d28c) call_video_pane_t1_ParamLimits

0x7f9a,	// (0x0007d2ad) call_video_pane_t2_ParamLimits

0xf273,	// (0x00084586) call_video_pane_t_ParamLimits

0x5df6,	// (0x0007b109) msg_header_pane_g1_ParamLimits

0x17fc,	// (0x00076b0f) msg_header_pane_g2_ParamLimits

0x17fc,	// (0x00076b0f) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000847a0) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000847a0) msg_header_pane_g

0x09ef,	// (0x00075d02) main_clock2_pane_ParamLimits

0xb432,	// (0x00080745) grid_clock2_toolbar_pane_ParamLimits

0xb432,	// (0x00080745) grid_clock2_toolbar_pane

0xb432,	// (0x00080745) listscroll_clock2_pane_ParamLimits

0xb432,	// (0x00080745) listscroll_clock2_pane

0xb4d6,	// (0x000807e9) main_clock2_pane_t3_ParamLimits

0xb4d6,	// (0x000807e9) main_clock2_pane_t3

0xb4e8,	// (0x000807fb) main_clock2_pane_t4_ParamLimits

0xb4e8,	// (0x000807fb) main_clock2_pane_t4

0x3ef7,	// (0x0007920a) cell_clock2_toolbar_pane

0x3eff,	// (0x00079212) cell_clock2_toolbar_pane_cp01

0x3eff,	// (0x00079212) cell_clock2_toolbar_pane_cp02

0x3f07,	// (0x0007921a) cell_clock2_toolbar_pane_cp03

0x3f0f,	// (0x00079222) list_clock2_pane

0x143b,	// (0x0007674e) scroll_pane_cp10

0x3f17,	// (0x0007922a) list_single_clock2_pane_ParamLimits

0x3f17,	// (0x0007922a) list_single_clock2_pane

0x167c,	// (0x0007698f) list_highlight_pane_cp08

0x3f24,	// (0x00079237) list_single_clock2_pane_t1

0x3f32,	// (0x00079245) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00084e65) list_single_clock2_pane_t

0xedd8,	// (0x000840eb) bg_button_pane_cp10

0x3f40,	// (0x00079253) cell_clock2_toolbar_pane_g1

0x9976,	// (0x0007ec89) aid_main_viewer_pane_g1_ParamLimits

0x9976,	// (0x0007ec89) aid_main_viewer_pane_g1

0x9982,	// (0x0007ec95) aid_main_viewer_pane_g2_ParamLimits

0x9982,	// (0x0007ec95) aid_main_viewer_pane_g2

0x998e,	// (0x0007eca1) aid_main_viewer_pane_g3_ParamLimits

0x998e,	// (0x0007eca1) aid_main_viewer_pane_g3

0x999f,	// (0x0007ecb2) aid_main_viewer_pane_g4_ParamLimits

0x999f,	// (0x0007ecb2) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000847b1) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000847b1) aid_main_viewer_pane_g

0xa11f,	// (0x0007f432) main_calc_pane_ParamLimits

0xa12c,	// (0x0007f43f) main_dialer2_pane_ParamLimits

0xedd8,	// (0x000840eb) main_cam6_pane

0xedd8,	// (0x000840eb) main_vid6_pane

0xb43e,	// (0x00080751) listscroll_gen_pane_cp06_ParamLimits

0xb43e,	// (0x00080751) listscroll_gen_pane_cp06

0xb4fa,	// (0x0008080d) main_clock2_pane_t5_ParamLimits

0xb4fa,	// (0x0008080d) main_clock2_pane_t5

0xb543,	// (0x00080856) aid_call2_pane_cp10_ParamLimits

0xb555,	// (0x00080868) aid_call_pane_cp10_ParamLimits

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb567,	// (0x0008087a) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb567,	// (0x0008087a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x14b9,	// (0x000767cc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00084ae7) popup_clock_analogue_window_cp10_g_ParamLimits

0xb579,	// (0x0008088c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbd40,	// (0x00081053) cell_dialer2_keypad_pane_g2_ParamLimits

0xbd40,	// (0x00081053) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00084bcd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00084bcd) cell_dialer2_keypad_pane_g

0xbd5c,	// (0x0008106f) cell_dialer2_keypad_pane_t1

0xc71d,	// (0x00081a30) main_cset_text2_pane_ParamLimits

0xc71d,	// (0x00081a30) main_cset_text2_pane

0x3d56,	// (0x00079069) area_vitu2_query_pane_g1_ParamLimits

0x6134,	// (0x0007b447) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00084d82) area_vitu2_query_pane_g_ParamLimits

0x61e5,	// (0x0007b4f8) area_vitu2_query_pane_t7_ParamLimits

0x61e5,	// (0x0007b4f8) area_vitu2_query_pane_t7

0xced0,	// (0x000821e3) bg_button_pane_cp018_ParamLimits

0xcede,	// (0x000821f1) bg_button_pane_cp021_ParamLimits

0x6209,	// (0x0007b51c) bg_button_pane_cp022_ParamLimits

0x6209,	// (0x0007b51c) bg_vkb2_func_pane_cp08_ParamLimits

0xced0,	// (0x000821e3) bg_vkb2_func_pane_cp06_ParamLimits

0xcede,	// (0x000821f1) bg_vkb2_func_pane_cp07_ParamLimits

0x621a,	// (0x0007b52d) input_focus_pane_cp09_ParamLimits

0xd392,	// (0x000826a5) cam6_autofocus_pane_ParamLimits

0xd392,	// (0x000826a5) cam6_autofocus_pane

0xd3b4,	// (0x000826c7) cam6_image_uncrop_pane_ParamLimits

0xd3b4,	// (0x000826c7) cam6_image_uncrop_pane

0xd3e1,	// (0x000826f4) cam6_indi_pane_ParamLimits

0xd3e1,	// (0x000826f4) cam6_indi_pane

0xd3fb,	// (0x0008270e) cam6_mode_pane_ParamLimits

0xd3fb,	// (0x0008270e) cam6_mode_pane

0xd40f,	// (0x00082722) cam6_timer_pane_ParamLimits

0xd40f,	// (0x00082722) cam6_timer_pane

0xd41b,	// (0x0008272e) cam6_zoom_pane_ParamLimits

0xd41b,	// (0x0008272e) cam6_zoom_pane

0xd433,	// (0x00082746) cam6_mode_pane_g1_ParamLimits

0xd433,	// (0x00082746) cam6_mode_pane_g1

0xd43f,	// (0x00082752) cam6_mode_pane_g2_ParamLimits

0xd43f,	// (0x00082752) cam6_mode_pane_g2

0xd44b,	// (0x0008275e) cam6_mode_pane_g3_ParamLimits

0xd44b,	// (0x0008275e) cam6_mode_pane_g3

0xd457,	// (0x0008276a) cam6_mode_pane_g4_ParamLimits

0xd457,	// (0x0008276a) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00084e6a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00084e6a) cam6_mode_pane_g

0x3f48,	// (0x0007925b) bg_tb_trans_pane_cp08_ParamLimits

0x3f48,	// (0x0007925b) bg_tb_trans_pane_cp08

0x3f56,	// (0x00079269) cam6_battery_pane_ParamLimits

0x3f56,	// (0x00079269) cam6_battery_pane

0x3f6c,	// (0x0007927f) cam6_indi_pane_g1_ParamLimits

0x3f6c,	// (0x0007927f) cam6_indi_pane_g1

0x3f7e,	// (0x00079291) cam6_indi_pane_g2_ParamLimits

0x3f7e,	// (0x00079291) cam6_indi_pane_g2

0x3f90,	// (0x000792a3) cam6_indi_pane_g3_ParamLimits

0x3f90,	// (0x000792a3) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00084e73) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00084e73) cam6_indi_pane_g

0x3fa2,	// (0x000792b5) cam6_indi_pane_t1_ParamLimits

0x3fa2,	// (0x000792b5) cam6_indi_pane_t1

0xc219,	// (0x0008152c) cam6_autofocus_pane_g1

0xc221,	// (0x00081534) cam6_autofocus_pane_g2

0xc229,	// (0x0008153c) cam6_autofocus_pane_g3

0xc231,	// (0x00081544) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00084e7a) cam6_autofocus_pane_g

0x3fc8,	// (0x000792db) cam6_timer_pane_g1

0x3fd0,	// (0x000792e3) cam6_timer_pane_t1

0x3fde,	// (0x000792f1) cam6_zoom_cont_pane

0x3fe6,	// (0x000792f9) cam6_zoom_pane_g1

0x3fee,	// (0x00079301) cam6_zoom_pane_g2

0xd463,	// (0x00082776) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00084e83) cam6_zoom_pane_g

0x2e8d,	// (0x000781a0) cam6_battery_pane_g1

0x2e8d,	// (0x000781a0) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000849f4) cam6_battery_pane_g

0x3ff6,	// (0x00079309) cam6_zoom_cont_pane_g1

0x3fff,	// (0x00079312) cam6_zoom_cont_pane_g2

0x4008,	// (0x0007931b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00084e8a) cam6_zoom_cont_pane_g

0xd480,	// (0x00082793) cam6_mode_pane_cp_ParamLimits

0xd480,	// (0x00082793) cam6_mode_pane_cp

0xd41b,	// (0x0008272e) cam6_zoom_pane_cp_ParamLimits

0xd41b,	// (0x0008272e) cam6_zoom_pane_cp

0xd494,	// (0x000827a7) vid6_image_uncrop_cif_pane_ParamLimits

0xd494,	// (0x000827a7) vid6_image_uncrop_cif_pane

0xd4c0,	// (0x000827d3) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4c0,	// (0x000827d3) vid6_image_uncrop_nhd_pane

0xd3b4,	// (0x000826c7) vid6_image_uncrop_vga_pane_ParamLimits

0xd3b4,	// (0x000826c7) vid6_image_uncrop_vga_pane

0xd4dd,	// (0x000827f0) vid6_image_uncrop_wvga_pane_ParamLimits

0xd4dd,	// (0x000827f0) vid6_image_uncrop_wvga_pane

0xd4fa,	// (0x0008280d) vid6_indi_pane_ParamLimits

0xd4fa,	// (0x0008280d) vid6_indi_pane

0x3f48,	// (0x0007925b) bg_tb_trans_pane_cp09_ParamLimits

0x3f48,	// (0x0007925b) bg_tb_trans_pane_cp09

0x4020,	// (0x00079333) cam6_battery_pane_cp_ParamLimits

0x4020,	// (0x00079333) cam6_battery_pane_cp

0x402c,	// (0x0007933f) vid6_indi_pane_g1_ParamLimits

0x402c,	// (0x0007933f) vid6_indi_pane_g1

0x403e,	// (0x00079351) vid6_indi_pane_g2_ParamLimits

0x403e,	// (0x00079351) vid6_indi_pane_g2

0x4050,	// (0x00079363) vid6_indi_pane_g3_ParamLimits

0x4050,	// (0x00079363) vid6_indi_pane_g3

0x4065,	// (0x00079378) vid6_indi_pane_g4_ParamLimits

0x4065,	// (0x00079378) vid6_indi_pane_g4

0x407a,	// (0x0007938d) vid6_indi_pane_g5_ParamLimits

0x407a,	// (0x0007938d) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00084e91) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00084e91) vid6_indi_pane_g

0x40c1,	// (0x000793d4) vid6_indi_pane_t1_ParamLimits

0x40c1,	// (0x000793d4) vid6_indi_pane_t1

0x40d7,	// (0x000793ea) vid6_indi_pane_t2_ParamLimits

0x40d7,	// (0x000793ea) vid6_indi_pane_t2

0x40ff,	// (0x00079412) vid6_indi_pane_t3_ParamLimits

0x40ff,	// (0x00079412) vid6_indi_pane_t3

0x4127,	// (0x0007943a) vid6_indi_pane_t4_ParamLimits

0x4127,	// (0x0007943a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00084e9c) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00084e9c) vid6_indi_pane_t

0x414b,	// (0x0007945e) wait_bar_pane_cp08

0xd51f,	// (0x00082832) main_cset_text2_pane_t1_ParamLimits

0xd51f,	// (0x00082832) main_cset_text2_pane_t1

0xd46b,	// (0x0008277e) listscroll_gen_pane_cp06_t1_ParamLimits

0xd46b,	// (0x0008277e) listscroll_gen_pane_cp06_t1

0xedd8,	// (0x000840eb) main_cam6_set_pane

0x30f9,	// (0x0007840c) bg_tb_trans_pane_cp06_ParamLimits

0xc0c9,	// (0x000813dc) cam4_indicators_pane_g1_ParamLimits

0xc0da,	// (0x000813ed) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00084c0a) cam4_indicators_pane_g_ParamLimits

0xc0f8,	// (0x0008140b) cam4_indicators_pane_t1_ParamLimits

0x0ea4,	// (0x000761b7) bg_tb_trans_pane_cp07_ParamLimits

0xc1ab,	// (0x000814be) vid4_indicators_pane_g1_ParamLimits

0xc1bf,	// (0x000814d2) vid4_indicators_pane_g2_ParamLimits

0xc1d3,	// (0x000814e6) vid4_indicators_pane_g3_ParamLimits

0xc1e4,	// (0x000814f7) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00084c1c) vid4_indicators_pane_g_ParamLimits

0xc202,	// (0x00081515) vid4_indicators_pane_t1_ParamLimits

0xd00a,	// (0x0008231d) vid4_progress_pane_g1_ParamLimits

0xd01c,	// (0x0008232f) vid4_progress_pane_g2_ParamLimits

0x99fc,	// (0x0007ed0f) vid4_progress_pane_g3_ParamLimits

0xd02c,	// (0x0008233f) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00084dcd) vid4_progress_pane_g_ParamLimits

0xd04a,	// (0x0008235d) vid4_progress_pane_t1_ParamLimits

0xd05f,	// (0x00082372) vid4_progress_pane_t2_ParamLimits

0xd075,	// (0x00082388) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00084dd8) vid4_progress_pane_t_ParamLimits

0xd08a,	// (0x0008239d) wait_bar_pane_cp07_ParamLimits

0xd552,	// (0x00082865) main_cam6_set_pane_g2_ParamLimits

0xd552,	// (0x00082865) main_cam6_set_pane_g2

0xd55e,	// (0x00082871) main_cset6_listscroll_pane_ParamLimits

0xd55e,	// (0x00082871) main_cset6_listscroll_pane

0xd589,	// (0x0008289c) main_cset6_slider_pane_ParamLimits

0xd589,	// (0x0008289c) main_cset6_slider_pane

0xd595,	// (0x000828a8) main_cset6_text2_pane_ParamLimits

0xd595,	// (0x000828a8) main_cset6_text2_pane

0x415a,	// (0x0007946d) main_cset6_text_pane

0x4162,	// (0x00079475) main_cset_list_pane_copy1_ParamLimits

0x4162,	// (0x00079475) main_cset_list_pane_copy1

0x4172,	// (0x00079485) scroll_pane_cp028_copy1

0xd5a8,	// (0x000828bb) cset_list_set_pane_copy1

0xd5bb,	// (0x000828ce) aid_position_infowindow_above_copy1

0xd5c3,	// (0x000828d6) aid_position_infowindow_below_copy1

0xd5cb,	// (0x000828de) cset_list_set_pane_g1_copy1

0x5fb7,	// (0x0007b2ca) cset_list_set_pane_g3_copy1_ParamLimits

0x5fb7,	// (0x0007b2ca) cset_list_set_pane_g3_copy1

0x5fc6,	// (0x0007b2d9) cset_list_set_pane_t1_copy1_ParamLimits

0x5fc6,	// (0x0007b2d9) cset_list_set_pane_t1_copy1

0x0ea4,	// (0x000761b7) list_highlight_pane_cp021_copy1_ParamLimits

0x0ea4,	// (0x000761b7) list_highlight_pane_cp021_copy1

0x417b,	// (0x0007948e) cset6_slider_pane_ParamLimits

0x417b,	// (0x0007948e) cset6_slider_pane

0x41a7,	// (0x000794ba) main_cset6_slider_pane_g1_ParamLimits

0x41a7,	// (0x000794ba) main_cset6_slider_pane_g1

0xd5d3,	// (0x000828e6) main_cset6_slider_pane_g2_ParamLimits

0xd5d3,	// (0x000828e6) main_cset6_slider_pane_g2

0x41cf,	// (0x000794e2) main_cset6_slider_pane_g3_ParamLimits

0x41cf,	// (0x000794e2) main_cset6_slider_pane_g3

0xd5fb,	// (0x0008290e) main_cset6_slider_pane_g4_ParamLimits

0xd5fb,	// (0x0008290e) main_cset6_slider_pane_g4

0xd607,	// (0x0008291a) main_cset6_slider_pane_g5_ParamLimits

0xd607,	// (0x0008291a) main_cset6_slider_pane_g5

0x3a3a,	// (0x00078d4d) main_cset6_slider_pane_g7_ParamLimits

0x3a3a,	// (0x00078d4d) main_cset6_slider_pane_g7

0x3a46,	// (0x00078d59) main_cset6_slider_pane_g8_ParamLimits

0x3a46,	// (0x00078d59) main_cset6_slider_pane_g8

0xd615,	// (0x00082928) main_cset6_slider_pane_g9_ParamLimits

0xd615,	// (0x00082928) main_cset6_slider_pane_g9

0xd621,	// (0x00082934) main_cset6_slider_pane_g10_ParamLimits

0xd621,	// (0x00082934) main_cset6_slider_pane_g10

0xd62d,	// (0x00082940) main_cset6_slider_pane_g11_ParamLimits

0xd62d,	// (0x00082940) main_cset6_slider_pane_g11

0xd639,	// (0x0008294c) main_cset6_slider_pane_g12_ParamLimits

0xd639,	// (0x0008294c) main_cset6_slider_pane_g12

0xd645,	// (0x00082958) main_cset6_slider_pane_g13_ParamLimits

0xd645,	// (0x00082958) main_cset6_slider_pane_g13

0xd651,	// (0x00082964) main_cset6_slider_pane_g14_ParamLimits

0xd651,	// (0x00082964) main_cset6_slider_pane_g14

0xd65d,	// (0x00082970) main_cset6_slider_pane_g15_ParamLimits

0xd65d,	// (0x00082970) main_cset6_slider_pane_g15

0xd675,	// (0x00082988) main_cset6_slider_pane_g16_ParamLimits

0xd675,	// (0x00082988) main_cset6_slider_pane_g16

0xd683,	// (0x00082996) main_cset6_slider_pane_g17_ParamLimits

0xd683,	// (0x00082996) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00084ea5) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00084ea5) main_cset6_slider_pane_g

0x41db,	// (0x000794ee) main_cset6_slider_pane_t1_ParamLimits

0x41db,	// (0x000794ee) main_cset6_slider_pane_t1

0xd6a9,	// (0x000829bc) main_cset6_slider_pane_t2_ParamLimits

0xd6a9,	// (0x000829bc) main_cset6_slider_pane_t2

0xd6d4,	// (0x000829e7) main_cset6_slider_pane_t3_ParamLimits

0xd6d4,	// (0x000829e7) main_cset6_slider_pane_t3

0xd6ff,	// (0x00082a12) main_cset6_slider_pane_t4_ParamLimits

0xd6ff,	// (0x00082a12) main_cset6_slider_pane_t4

0xd72a,	// (0x00082a3d) main_cset6_slider_pane_t5_ParamLimits

0xd72a,	// (0x00082a3d) main_cset6_slider_pane_t5

0x421c,	// (0x0007952f) main_cset6_slider_pane_t7_ParamLimits

0x421c,	// (0x0007952f) main_cset6_slider_pane_t7

0xd757,	// (0x00082a6a) main_cset6_slider_pane_t8_ParamLimits

0xd757,	// (0x00082a6a) main_cset6_slider_pane_t8

0xd77b,	// (0x00082a8e) main_cset6_slider_pane_t9_ParamLimits

0xd77b,	// (0x00082a8e) main_cset6_slider_pane_t9

0xd79f,	// (0x00082ab2) main_cset6_slider_pane_t10_ParamLimits

0xd79f,	// (0x00082ab2) main_cset6_slider_pane_t10

0xd7c3,	// (0x00082ad6) main_cset6_slider_pane_t11_ParamLimits

0xd7c3,	// (0x00082ad6) main_cset6_slider_pane_t11

0x4252,	// (0x00079565) main_cset6_slider_pane_t14_ParamLimits

0x4252,	// (0x00079565) main_cset6_slider_pane_t14

0x428b,	// (0x0007959e) main_cset6_slider_pane_t15_ParamLimits

0x428b,	// (0x0007959e) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00084eca) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00084eca) main_cset6_slider_pane_t

0x4094,	// (0x000793a7) cset_slider_pane_g1_copy1

0x409d,	// (0x000793b0) cset_slider_pane_g2_copy1

0x40a6,	// (0x000793b9) cset_slider_pane_g3_copy1

0xedd8,	// (0x000840eb) bg_popup_sub_pane_cp011_copy1

0x42c4,	// (0x000795d7) main_cset_text_pane_g1_copy1

0x3b7e,	// (0x00078e91) main_cset_text_pane_t1_copy1

0x3b8c,	// (0x00078e9f) main_cset_text_pane_t2_copy1

0x3b9a,	// (0x00078ead) main_cset_text_pane_t3_copy1

0x3ba8,	// (0x00078ebb) main_cset_text_pane_t4_copy1

0x3bb6,	// (0x00078ec9) main_cset_text_pane_t5_copy1

0x42cc,	// (0x000795df) main_cset_text_pane_t6_copy1

0x3bd2,	// (0x00078ee5) main_cset_text_pane_t7_copy1

0xd802,	// (0x00082b15) main_cset_text2_pane_t1_copy1

0x0ea4,	// (0x000761b7) main_ncimui_pane

0xa17d,	// (0x0007f490) popup_query_ncimui_window_ParamLimits

0xa17d,	// (0x0007f490) popup_query_ncimui_window

0xad0e,	// (0x00080021) field_cale_ev2_pane_g4_ParamLimits

0xad0e,	// (0x00080021) field_cale_ev2_pane_g4

0xba60,	// (0x00080d73) cell_video_dialer_keypad_pane_g2_ParamLimits

0xba60,	// (0x00080d73) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00084ba8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00084ba8) cell_video_dialer_keypad_pane_g

0xba78,	// (0x00080d8b) cell_video_dialer_keypad_pane_t1

0xedd8,	// (0x000840eb) bg_popup_window_pane_cp012

0x1308,	// (0x0007661b) heading_pane_cp06

0x42f8,	// (0x0007960b) ncim_query_content_pane

0xedd8,	// (0x000840eb) bg_popup_heading_pane_cp01

0x4300,	// (0x00079613) ncim_heading_pane_t1

0x430e,	// (0x00079621) ncim_indicator_popup_pane

0x4320,	// (0x00079633) ncim_query_button_pane

0x4334,	// (0x00079647) ncim_query_content_pane_t1

0x4346,	// (0x00079659) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00084f0e) ncim_query_content_pane_t

0x4380,	// (0x00079693) ncim_query_list_pane

0x4392,	// (0x000796a5) ncim_query_popup_pane

0x430e,	// (0x00079621) ncim_indicator_popup_pane_ParamLimits

0xd955,	// (0x00082c68) ncim_query_content_pane_g1_ParamLimits

0xd955,	// (0x00082c68) ncim_query_content_pane_g1

0x4334,	// (0x00079647) ncim_query_content_pane_t1_ParamLimits

0x4346,	// (0x00079659) ncim_query_content_pane_t2_ParamLimits

0xd961,	// (0x00082c74) ncim_query_content_pane_t3_ParamLimits

0xd961,	// (0x00082c74) ncim_query_content_pane_t3

0xd97e,	// (0x00082c91) ncim_query_content_pane_t4_ParamLimits

0xd97e,	// (0x00082c91) ncim_query_content_pane_t4

0xd99b,	// (0x00082cae) ncim_query_content_pane_t5_ParamLimits

0xd99b,	// (0x00082cae) ncim_query_content_pane_t5

0x4358,	// (0x0007966b) ncim_query_content_pane_t6_ParamLimits

0x4358,	// (0x0007966b) ncim_query_content_pane_t6

0xfbfb,	// (0x00084f0e) ncim_query_content_pane_t_ParamLimits

0x4380,	// (0x00079693) ncim_query_list_pane_ParamLimits

0x4392,	// (0x000796a5) ncim_query_popup_pane_ParamLimits

0x43a6,	// (0x000796b9) wait_bar_pane_cp04

0xedd8,	// (0x000840eb) input_focus_pane_cp011

0x43ae,	// (0x000796c1) ncim_query_popup_pane_t1

0x43bc,	// (0x000796cf) ncim_list_query_list_pane_ParamLimits

0x43bc,	// (0x000796cf) ncim_list_query_list_pane

0xedd8,	// (0x000840eb) bg_button_pane_cp027

0x43c9,	// (0x000796dc) ncim_query_button_pane_g1

0xedd8,	// (0x000840eb) list_highlight_pane_cp012

0x43d3,	// (0x000796e6) ncim_list_query_list_pane_g1

0x43db,	// (0x000796ee) ncim_list_query_list_pane_t1

0xc0e9,	// (0x000813fc) cam4_indicators_pane_g3_ParamLimits

0xc0e9,	// (0x000813fc) cam4_indicators_pane_g3

0xc1f0,	// (0x00081503) vid4_indicators_pane_g5_ParamLimits

0xc1f0,	// (0x00081503) vid4_indicators_pane_g5

0xd03b,	// (0x0008234e) vid4_progress_pane_g5_ParamLimits

0xd03b,	// (0x0008234e) vid4_progress_pane_g5

0xd841,	// (0x00082b54) main_ncimui_pane_g1

0xd8a9,	// (0x00082bbc) ncimui_group_query_pane_ParamLimits

0xd8a9,	// (0x00082bbc) ncimui_group_query_pane

0xd8f1,	// (0x00082c04) ncimui_list_pane_ParamLimits

0xd8f1,	// (0x00082c04) ncimui_list_pane

0xd918,	// (0x00082c2b) ncimui_text_pane_ParamLimits

0xd918,	// (0x00082c2b) ncimui_text_pane

0xd9b8,	// (0x00082ccb) ncimui_text_pane_t1_ParamLimits

0xd9b8,	// (0x00082ccb) ncimui_text_pane_t1

0x43e9,	// (0x000796fc) ncimui_list_single_graphic_pane_ParamLimits

0x43e9,	// (0x000796fc) ncimui_list_single_graphic_pane

0xd9d7,	// (0x00082cea) ncimui_query_pane_ParamLimits

0xd9d7,	// (0x00082cea) ncimui_query_pane

0xedd8,	// (0x000840eb) list_highlight_pane_cp013

0x43f9,	// (0x0007970c) ncim_list_query_list_pane_t1_copy1

0x43d3,	// (0x000796e6) ncim_list_single_graphic_pane_g1

0x4407,	// (0x0007971a) ncim_query_button_pane_cp01

0x4413,	// (0x00079726) ncim_query_entry_pane_ParamLimits

0x4413,	// (0x00079726) ncim_query_entry_pane

0x4426,	// (0x00079739) ncimui_query_pane_g1

0x4432,	// (0x00079745) ncimui_query_pane_t1_ParamLimits

0x4432,	// (0x00079745) ncimui_query_pane_t1

0x0ea4,	// (0x000761b7) input_focus_pane_cp012

0x444b,	// (0x0007975e) ncim_query_entry_pane_t1

0x09ef,	// (0x00075d02) main_im_pane_ParamLimits

0x0ea4,	// (0x000761b7) main_mobtv_pane_ParamLimits

0x0ea4,	// (0x000761b7) main_mobtv_pane

0xd691,	// (0x000829a4) main_cset6_slider_pane_g18_ParamLimits

0xd691,	// (0x000829a4) main_cset6_slider_pane_g18

0xd69d,	// (0x000829b0) main_cset6_slider_pane_g19_ParamLimits

0xd69d,	// (0x000829b0) main_cset6_slider_pane_g19

0x38eb,	// (0x00078bfe) bg_main_mobtv_pane_ParamLimits

0x38eb,	// (0x00078bfe) bg_main_mobtv_pane

0xd9ea,	// (0x00082cfd) main_mobtv_info_pane

0xd9f5,	// (0x00082d08) main_mobtv_loading_pane_ParamLimits

0xd9f5,	// (0x00082d08) main_mobtv_loading_pane

0x445d,	// (0x00079770) main_mobtv_pg_channel_list_pane

0x4467,	// (0x0007977a) main_mobtv_pg_hdr_pane

0xda02,	// (0x00082d15) main_mobtv_programe_curr_pane_ParamLimits

0xda02,	// (0x00082d15) main_mobtv_programe_curr_pane

0xda0f,	// (0x00082d22) main_mobtv_programe_next_pane_ParamLimits

0xda0f,	// (0x00082d22) main_mobtv_programe_next_pane

0x4470,	// (0x00079783) popup_mobtv_noti_window

0x2e8d,	// (0x000781a0) main_tv_pg_hdr_pane_g1

0x4478,	// (0x0007978b) main_tv_pg_hdr_pane_g2

0x4480,	// (0x00079793) main_tv_pg_hdr_pane_g3

0x4488,	// (0x0007979b) main_tv_pg_hdr_pane_g4

0x4490,	// (0x000797a3) main_tv_pg_hdr_pane_g5

0x449a,	// (0x000797ad) main_tv_pg_hdr_pane_g6

0x44a4,	// (0x000797b7) main_tv_pg_hdr_pane_g7

0x44ae,	// (0x000797c1) main_tv_pg_hdr_pane_g8

0x44b8,	// (0x000797cb) main_tv_pg_hdr_pane_g9

0x44c2,	// (0x000797d5) main_tv_pg_hdr_pane_g10

0x44cc,	// (0x000797df) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00084f1b) main_tv_pg_hdr_pane_g

0x44d6,	// (0x000797e9) main_tv_pg_hdr_pane_t1

0x44e4,	// (0x000797f7) main_tv_pg_hdr_pane_t2

0x44f2,	// (0x00079805) main_tv_pg_hdr_pane_t3

0x4502,	// (0x00079815) main_tv_pg_hdr_pane_t4

0x4512,	// (0x00079825) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00084f32) main_tv_pg_hdr_pane_t

0x4522,	// (0x00079835) single_mobtv_pg_channel_pane_ParamLimits

0x4522,	// (0x00079835) single_mobtv_pg_channel_pane

0x4534,	// (0x00079847) single_mobtv_pg_channel_table_pane

0x453d,	// (0x00079850) single_mobtv_pg_channel_thumb_pane

0x4546,	// (0x00079859) single_tv_pg_channel_pane_g1

0x454f,	// (0x00079862) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00084f3d) single_tv_pg_channel_pane_g

0x30f9,	// (0x0007840c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x30f9,	// (0x0007840c) bg_single_mobtv_pg_channel_thumb_pane

0x4558,	// (0x0007986b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4558,	// (0x0007986b) single_mobtv_pg_channel_thumb_pane_g1

0x4566,	// (0x00079879) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4566,	// (0x00079879) single_mobtv_pg_channel_thumb_pane_g2

0x4572,	// (0x00079885) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4572,	// (0x00079885) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00084f42) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00084f42) single_mobtv_pg_channel_thumb_pane_g

0x457e,	// (0x00079891) single_mobtv_pg_channel_thumb_pane_t1

0x458c,	// (0x0007989f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00084f49) single_mobtv_pg_channel_thumb_pane_t

0x2e8d,	// (0x000781a0) bg_single_mobtv_pg_channel_table_pane_g1

0x2e8d,	// (0x000781a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000849f4) bg_single_mobtv_pg_channel_table_pane_g

0x459a,	// (0x000798ad) single_mobtv_pg_channel_table_pane_t1

0x45a8,	// (0x000798bb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00084f4e) single_mobtv_pg_channel_table_pane_t

0xda24,	// (0x00082d37) main_mobtv_info_pane_g1_ParamLimits

0xda24,	// (0x00082d37) main_mobtv_info_pane_g1

0xda40,	// (0x00082d53) main_mobtv_info_pane_t1_ParamLimits

0xda40,	// (0x00082d53) main_mobtv_info_pane_t1

0xdab8,	// (0x00082dcb) main_mobtv_info_pane_t2_ParamLimits

0xdab8,	// (0x00082dcb) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00084f58) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00084f58) main_mobtv_info_pane_t

0xdb47,	// (0x00082e5a) wait_bar_pane_cp05

0xdb59,	// (0x00082e6c) main_mobtv_loading_pane_g1_ParamLimits

0xdb59,	// (0x00082e6c) main_mobtv_loading_pane_g1

0xdb67,	// (0x00082e7a) main_mobtv_loading_pane_g2_ParamLimits

0xdb67,	// (0x00082e7a) main_mobtv_loading_pane_g2

0xdb73,	// (0x00082e86) main_mobtv_loading_pane_g3_ParamLimits

0xdb73,	// (0x00082e86) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00084f5f) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00084f5f) main_mobtv_loading_pane_g

0x45b6,	// (0x000798c9) main_mobtv_loading_pane_t1_ParamLimits

0x45b6,	// (0x000798c9) main_mobtv_loading_pane_t1

0x45ce,	// (0x000798e1) main_mobtv_loading_pane_t2_ParamLimits

0x45ce,	// (0x000798e1) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00084f66) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00084f66) main_mobtv_loading_pane_t

0xdb81,	// (0x00082e94) wait_bar_pane_cp06_ParamLimits

0xdb81,	// (0x00082e94) wait_bar_pane_cp06

0x45f2,	// (0x00079905) main_mobtv_programe_curr_pane_t1

0x4600,	// (0x00079913) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00084f6b) main_mobtv_programe_curr_pane_t

0x460e,	// (0x00079921) main_mobtv_programe_next_pane_t1

0x461c,	// (0x0007992f) main_mobtv_programe_next_pane_t2

0x462a,	// (0x0007993d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00084f70) main_mobtv_programe_next_pane_t

0xedd8,	// (0x000840eb) bg_popup_mobtv_noti_window_pane

0x4638,	// (0x0007994b) popup_mobtv_noti_window_g1

0x4640,	// (0x00079953) popup_mobtv_noti_window_t1

0x464e,	// (0x00079961) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00084f77) popup_mobtv_noti_window_t

0x2e8d,	// (0x000781a0) bg_popup_mobtv_noti_window_pane_g1

0xedd8,	// (0x000840eb) sc_clock_pane

0xedd8,	// (0x000840eb) main_fs_bigclock_pane

0xd245,	// (0x00082558) blid2_tripm_pane_t4_ParamLimits

0xd245,	// (0x00082558) blid2_tripm_pane_t4

0xdb8d,	// (0x00082ea0) sc_clock_pane_g1_ParamLimits

0xdb8d,	// (0x00082ea0) sc_clock_pane_g1

0xdb9b,	// (0x00082eae) sc_clock_pane_t1_ParamLimits

0xdb9b,	// (0x00082eae) sc_clock_pane_t1

0xdbae,	// (0x00082ec1) sc_clock_pane_t2_ParamLimits

0xdbae,	// (0x00082ec1) sc_clock_pane_t2

0xdbc0,	// (0x00082ed3) sc_clock_pane_t3_ParamLimits

0xdbc0,	// (0x00082ed3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00084f7c) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00084f7c) sc_clock_pane_t

0xe4e9,	// (0x000837fc) main_fs_bigclock_indicator_pane_ParamLimits

0xe4e9,	// (0x000837fc) main_fs_bigclock_indicator_pane

0xdc5b,	// (0x00082f6e) main_fs_bigclock_pane_g1_ParamLimits

0xdc5b,	// (0x00082f6e) main_fs_bigclock_pane_g1

0xe4f5,	// (0x00083808) main_fs_bigclock_pane_t1_ParamLimits

0xe4f5,	// (0x00083808) main_fs_bigclock_pane_t1

0xe507,	// (0x0008381a) main_fs_bigclock_pane_t2_ParamLimits

0xe507,	// (0x0008381a) main_fs_bigclock_pane_t2

0xe51b,	// (0x0008382e) main_fs_bigclock_pane_t3_ParamLimits

0xe51b,	// (0x0008382e) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00085186) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00085186) main_fs_bigclock_pane_t

0x00d8,	// (0x000753eb) main_fs_bigclock_indicator_pane_g1

0x4328,	// (0x0007963b) ncim_query_content_pane_g2_ParamLimits

0x4328,	// (0x0007963b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00084f09) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00084f09) ncim_query_content_pane_g

0xdbd4,	// (0x00082ee7) sc_clock_pane_t4_ParamLimits

0xdbd4,	// (0x00082ee7) sc_clock_pane_t4

0x0ea4,	// (0x000761b7) main_radioblah_pane

0x385c,	// (0x00078b6f) cell_call4_button_pane_t1_copy1_ParamLimits

0x385c,	// (0x00078b6f) cell_call4_button_pane_t1_copy1

0xd85b,	// (0x00082b6e) main_ncimui_pane_t1_ParamLimits

0xd85b,	// (0x00082b6e) main_ncimui_pane_t1

0xd875,	// (0x00082b88) main_ncimui_pane_t2_ParamLimits

0xd875,	// (0x00082b88) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00084f02) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00084f02) main_ncimui_pane_t

0x4788,	// (0x00079a9b) main_radioblah_anim_pane_ParamLimits

0x4788,	// (0x00079a9b) main_radioblah_anim_pane

0x4799,	// (0x00079aac) main_radioblah_info_pane_ParamLimits

0x4799,	// (0x00079aac) main_radioblah_info_pane

0x47ad,	// (0x00079ac0) main_radioblah_pane_t1_ParamLimits

0x47ad,	// (0x00079ac0) main_radioblah_pane_t1

0x47c9,	// (0x00079adc) main_radioblah_pane_t2_ParamLimits

0x47c9,	// (0x00079adc) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00084f9d) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00084f9d) main_radioblah_pane_t

0xdcad,	// (0x00082fc0) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdcad,	// (0x00082fc0) main_radioblah_rocker_ctrl_pane

0x4811,	// (0x00079b24) main_radioblah_info_pane_t1_ParamLimits

0x4811,	// (0x00079b24) main_radioblah_info_pane_t1

0xdcf2,	// (0x00083005) main_radioblah_info_pane_t2_ParamLimits

0xdcf2,	// (0x00083005) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00084fa6) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00084fa6) main_radioblah_info_pane_t

0x2e8d,	// (0x000781a0) main_radioblah_rocker_ctrl_pane_g1

0xdda2,	// (0x000830b5) main_radioblah_rocker_ctrl_pane_g2

0xddaa,	// (0x000830bd) main_radioblah_rocker_ctrl_pane_g3

0xddb2,	// (0x000830c5) main_radioblah_rocker_ctrl_pane_g4

0xddba,	// (0x000830cd) main_radioblah_rocker_ctrl_pane_g5

0xddc2,	// (0x000830d5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00084faf) main_radioblah_rocker_ctrl_pane_g

0xd802,	// (0x00082b15) main_cset_text2_pane_t1_copy1_ParamLimits

0xc017,	// (0x0008132a) cam4_image_uncrop_qvga_pane

0xc15e,	// (0x00081471) vid4_image_uncrop_qcif_pane

0xd3d3,	// (0x000826e6) cam6_image_uncrop_qvga_pane_ParamLimits

0xd3d3,	// (0x000826e6) cam6_image_uncrop_qvga_pane

0x4010,	// (0x00079323) vid6_image_uncrop_qcif_pane_ParamLimits

0x4010,	// (0x00079323) vid6_image_uncrop_qcif_pane

0xedd8,	// (0x000840eb) bg_popup_preview_window_pane_cp03

0x42da,	// (0x000795ed) list_cset_text2_pane

0x42e2,	// (0x000795f5) main_cset6_text2_pane_g1

0x42ea,	// (0x000795fd) main_cset6_text2_pane_t1

0xddca,	// (0x000830dd) list_cset_text2_pane_t1_ParamLimits

0xddca,	// (0x000830dd) list_cset_text2_pane_t1

0x0ea4,	// (0x000761b7) main_radioblah_pane_ParamLimits

0xdb33,	// (0x00082e46) main_mobtv_info_pane_t3_ParamLimits

0xdb33,	// (0x00082e46) main_mobtv_info_pane_t3

0xdc9b,	// (0x00082fae) main_radioblah_pane_g1

0xdcc6,	// (0x00082fd9) main_radioblah_info_pane_g1

0xdd47,	// (0x0008305a) main_radioblah_info_pane_t3_ParamLimits

0xdd47,	// (0x0008305a) main_radioblah_info_pane_t3

0x8fdd,	// (0x0007e2f0) highlight_cell_cale_month_pane_ParamLimits

0x8fdd,	// (0x0007e2f0) highlight_cell_cale_month_pane

0xedd8,	// (0x000840eb) main_phob_fisheye_pane

0x31f5,	// (0x00078508) scroll_pane_cp0031_ParamLimits

0x31f5,	// (0x00078508) scroll_pane_cp0031

0x414b,	// (0x0007945e) wait_bar_pane_cp08_ParamLimits

0xd5a8,	// (0x000828bb) cset_list_set_pane_copy1_ParamLimits

0x484b,	// (0x00079b5e) highlight_cell_cale_month_pane_g1

0xdde7,	// (0x000830fa) highlight_cell_cale_month_pane_t1

0x3daa,	// (0x000790bd) list_gen_pane_cp01

0x3a25,	// (0x00078d38) scroll_pane_01

0x630f,	// (0x0007b622) list_single_double_fisheye_pane

0x6318,	// (0x0007b62b) list_double_fisheye_pane_g1_ParamLimits

0x6318,	// (0x0007b62b) list_double_fisheye_pane_g1

0x6324,	// (0x0007b637) list_double_fisheye_pane_g2_ParamLimits

0x6324,	// (0x0007b637) list_double_fisheye_pane_g2

0x6338,	// (0x0007b64b) list_double_fisheye_pane_g3_ParamLimits

0x6338,	// (0x0007b64b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00084fbc) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00084fbc) list_double_fisheye_pane_g

0x6361,	// (0x0007b674) list_double_fisheye_pane_t1_ParamLimits

0x6361,	// (0x0007b674) list_double_fisheye_pane_t1

0x637c,	// (0x0007b68f) list_double_fisheye_pane_t2_ParamLimits

0x637c,	// (0x0007b68f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00084fc7) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00084fc7) list_double_fisheye_pane_t

0xedd8,	// (0x000840eb) main_call5_pane

0xdbfa,	// (0x00082f0d) sc_swipe_pane_ParamLimits

0xdbfa,	// (0x00082f0d) sc_swipe_pane

0xde01,	// (0x00083114) call5_image_pane_ParamLimits

0xde01,	// (0x00083114) call5_image_pane

0xde11,	// (0x00083124) call5_swipe_1_pane_ParamLimits

0xde11,	// (0x00083124) call5_swipe_1_pane

0xde1d,	// (0x00083130) call5_swipe_2_pane_ParamLimits

0xde1d,	// (0x00083130) call5_swipe_2_pane

0xde37,	// (0x0008314a) popup_call5_audio_first_window_ParamLimits

0xde37,	// (0x0008314a) popup_call5_audio_first_window

0x30f9,	// (0x0007840c) call5_swipe_1_pane_g1_ParamLimits

0x30f9,	// (0x0007840c) call5_swipe_1_pane_g1

0x4853,	// (0x00079b66) call5_swipe_1_pane_g2_ParamLimits

0x4853,	// (0x00079b66) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00084fcc) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00084fcc) call5_swipe_1_pane_g

0x485f,	// (0x00079b72) call5_swipe_1_pane_t1_ParamLimits

0x485f,	// (0x00079b72) call5_swipe_1_pane_t1

0x30f9,	// (0x0007840c) call5_swipe_2_pane_g1_ParamLimits

0x30f9,	// (0x0007840c) call5_swipe_2_pane_g1

0x4874,	// (0x00079b87) call5_swipe_2_pane_g2_ParamLimits

0x4874,	// (0x00079b87) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00084fd1) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00084fd1) call5_swipe_2_pane_g

0x4880,	// (0x00079b93) call5_swipe_2_pane_t1_ParamLimits

0x4880,	// (0x00079b93) call5_swipe_2_pane_t1

0x4895,	// (0x00079ba8) sc_swipe_pane_g1_ParamLimits

0x4895,	// (0x00079ba8) sc_swipe_pane_g1

0x48a2,	// (0x00079bb5) sc_swipe_pane_g2_ParamLimits

0x48a2,	// (0x00079bb5) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00084fd6) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00084fd6) sc_swipe_pane_g

0x48ae,	// (0x00079bc1) sc_swipe_pane_t1_ParamLimits

0x48ae,	// (0x00079bc1) sc_swipe_pane_t1

0xedd8,	// (0x000840eb) main_cmail_launcher_pane

0xde45,	// (0x00083158) aid_size_cell_cmail_l_ParamLimits

0xde45,	// (0x00083158) aid_size_cell_cmail_l

0xde55,	// (0x00083168) grid_cmail_l_pane_ParamLimits

0xde55,	// (0x00083168) grid_cmail_l_pane

0xde65,	// (0x00083178) cell_cmail_l_pane_ParamLimits

0xde65,	// (0x00083178) cell_cmail_l_pane

0xde79,	// (0x0008318c) cell_cmail_l_pane_g1_ParamLimits

0xde79,	// (0x0008318c) cell_cmail_l_pane_g1

0xde85,	// (0x00083198) cell_cmail_l_pane_t1_ParamLimits

0xde85,	// (0x00083198) cell_cmail_l_pane_t1

0x48c3,	// (0x00079bd6) cell_cmail_l_pane_t2_ParamLimits

0x48c3,	// (0x00079bd6) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00084fdb) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00084fdb) cell_cmail_l_pane_t

0x0ea4,	// (0x000761b7) grid_highlight_pane_cp018_ParamLimits

0x0ea4,	// (0x000761b7) grid_highlight_pane_cp018

0x6f3b,	// (0x0007c24e) main2_pane_ParamLimits

0x6f3b,	// (0x0007c24e) main2_pane

0x0a88,	// (0x00075d9b) popup_sp_fs_action_menu_bg_pane_g1

0x0a90,	// (0x00075da3) popup_sp_fs_action_menu_bg_pane_g2

0x0a98,	// (0x00075dab) popup_sp_fs_action_menu_bg_pane_g3

0x0aa0,	// (0x00075db3) popup_sp_fs_action_menu_bg_pane_g4

0x0aa8,	// (0x00075dbb) popup_sp_fs_action_menu_bg_pane_g5

0x0ab0,	// (0x00075dc3) popup_sp_fs_action_menu_bg_pane_g6

0x0ab8,	// (0x00075dcb) popup_sp_fs_action_menu_bg_pane_g7

0x0ac0,	// (0x00075dd3) popup_sp_fs_action_menu_bg_pane_g8

0x0ac8,	// (0x00075ddb) popup_sp_fs_action_menu_bg_pane_g9

0x0ad0,	// (0x00075de3) popup_sp_fs_action_menu_bg_pane_g10

0x0ad0,	// (0x00075de3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000844a0) popup_sp_fs_action_menu_bg_pane_g

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g3_g1

0x7eab,	// (0x0007d1be) list_medium_line_x2_t3_g3_g2_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_t3_g3_g2

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x00084550) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x00084550) list_medium_line_x2_t3_g3_g

0x5bb7,	// (0x0007aeca) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5bb7,	// (0x0007aeca) list_medium_line_x2_t3_g3_t1

0x5bcc,	// (0x0007aedf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5bcc,	// (0x0007aedf) list_medium_line_x2_t3_g3_t2

0x5bde,	// (0x0007aef1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x00084557) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x00084557) list_medium_line_x2_t3_g3_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g2_g1

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0008455e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0008455e) list_medium_line_x2_t3_g2_g

0x5bf3,	// (0x0007af06) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5bf3,	// (0x0007af06) list_medium_line_x2_t3_g2_t1

0x5c09,	// (0x0007af1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5c09,	// (0x0007af1c) list_medium_line_x2_t3_g2_t2

0x5c1b,	// (0x0007af2e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5c1b,	// (0x0007af2e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x00084563) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x00084563) list_medium_line_x2_t3_g2_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t4_g4_g1

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t4_g4_g2_ParamLimits

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t4_g4_g2

0x7eab,	// (0x0007d1be) list_medium_line_x2_t4_g4_g3_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_t4_g4_g3

0x5c38,	// (0x0007af4b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5c38,	// (0x0007af4b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0008456a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0008456a) list_medium_line_x2_t4_g4_g

0x5c44,	// (0x0007af57) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5c44,	// (0x0007af57) list_medium_line_x2_t4_g4_t1

0x5c5b,	// (0x0007af6e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5c5b,	// (0x0007af6e) list_medium_line_x2_t4_g4_t2

0x5c70,	// (0x0007af83) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5c70,	// (0x0007af83) list_medium_line_x2_t4_g4_t3

0x5c82,	// (0x0007af95) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5c82,	// (0x0007af95) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x00084573) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x00084573) list_medium_line_x2_t4_g4_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g4_g1

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t2_g4_g2_ParamLimits

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t2_g4_g2

0x7eab,	// (0x0007d1be) list_medium_line_x2_t2_g4_g3_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_t2_g4_g3

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000845da) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000845da) list_medium_line_x2_t2_g4_g

0x5c94,	// (0x0007afa7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5c94,	// (0x0007afa7) list_medium_line_x2_t2_g4_t1

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000845e3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000845e3) list_medium_line_x2_t2_g4_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g3_g1

0x7eab,	// (0x0007d1be) list_medium_line_x2_t2_g3_g2_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_t2_g3_g2

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x00084550) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x00084550) list_medium_line_x2_t2_g3_g

0x5ca9,	// (0x0007afbc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5ca9,	// (0x0007afbc) list_medium_line_x2_t2_g3_t1

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000845e8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000845e8) list_medium_line_x2_t2_g3_t

0x91a9,	// (0x0007e4bc) main_sp_fs_list_pane_ParamLimits

0x91a9,	// (0x0007e4bc) main_sp_fs_list_pane

0x91b5,	// (0x0007e4c8) sp_fs_scroll_pane_ParamLimits

0x91b5,	// (0x0007e4c8) sp_fs_scroll_pane

0x5cbe,	// (0x0007afd1) list_medium_line_x2_t3_t1

0x5cce,	// (0x0007afe1) list_medium_line_x2_t3_t2

0x5cdc,	// (0x0007afef) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x00084633) list_medium_line_x2_t3_t

0x5cea,	// (0x0007affd) list_medium_line_x3_t4_t1

0x5cfa,	// (0x0007b00d) list_medium_line_x3_t4_t2

0x5d08,	// (0x0007b01b) list_medium_line_x3_t4_t3

0x5cdc,	// (0x0007afef) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0008463a) list_medium_line_x3_t4_t

0x5d16,	// (0x0007b029) list_medium_line_x4_t5_t1

0x5d26,	// (0x0007b039) list_medium_line_x4_t5_t2

0x5d08,	// (0x0007b01b) list_medium_line_x4_t5_t3

0x5d34,	// (0x0007b047) list_medium_line_x4_t5_t4

0x5cdc,	// (0x0007afef) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x00084643) list_medium_line_x4_t5_t

0x5b9f,	// (0x0007aeb2) list_medium_line_t4_g4_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_t4_g4_g1

0x5d42,	// (0x0007b055) list_medium_line_t4_g4_g2_ParamLimits

0x5d42,	// (0x0007b055) list_medium_line_t4_g4_g2

0x5d4e,	// (0x0007b061) list_medium_line_t4_g4_g3_ParamLimits

0x5d4e,	// (0x0007b061) list_medium_line_t4_g4_g3

0x5bab,	// (0x0007aebe) list_medium_line_t4_g4_g4_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0008464e) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0008464e) list_medium_line_t4_g4_g

0x5d5a,	// (0x0007b06d) list_medium_line_t4_g4_t1_ParamLimits

0x5d5a,	// (0x0007b06d) list_medium_line_t4_g4_t1

0x5d6f,	// (0x0007b082) list_medium_line_t4_g4_t2_ParamLimits

0x5d6f,	// (0x0007b082) list_medium_line_t4_g4_t2

0x5d84,	// (0x0007b097) list_medium_line_t4_g4_t3_ParamLimits

0x5d84,	// (0x0007b097) list_medium_line_t4_g4_t3

0x5bde,	// (0x0007aef1) list_medium_line_t4_g4_t4_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x00084657) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x00084657) list_medium_line_t4_g4_t

0x92c2,	// (0x0007e5d5) chi_dic_find_pane_g1

0xa13a,	// (0x0007f44d) main_tport_pane

0x5fdb,	// (0x0007b2ee) list_medium_line_plain_t1

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g2_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g2_g1

0xcba9,	// (0x00081ebc) list_medium_line_t2_g2_g2_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00084d13) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00084d13) list_medium_line_t2_g2_g

0x5ff5,	// (0x0007b308) list_medium_line_t2_g2_t1_ParamLimits

0x5ff5,	// (0x0007b308) list_medium_line_t2_g2_t1

0x600c,	// (0x0007b31f) list_medium_line_t2_g2_t2_ParamLimits

0x600c,	// (0x0007b31f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00084d18) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00084d18) list_medium_line_t2_g2_t

0x622b,	// (0x0007b53e) aid_sp_fs_list_icon_a_sm

0xd09c,	// (0x000823af) aid_sp_fs_list_icon_d

0x6233,	// (0x0007b546) aid_sp_fs_text_primary

0x623c,	// (0x0007b54f) aid_sp_fs_text_secondary

0xd0a4,	// (0x000823b7) list_medium_line

0xd0a4,	// (0x000823b7) list_medium_line_g2

0xd0a4,	// (0x000823b7) list_medium_line_g3

0xd0a4,	// (0x000823b7) list_medium_line_plain

0xd0a4,	// (0x000823b7) list_medium_line_plain_t2

0xd0a4,	// (0x000823b7) list_medium_line_plain_t3

0xd0a4,	// (0x000823b7) list_medium_line_right_icon

0xd0a4,	// (0x000823b7) list_medium_line_right_iconx2

0xd0a4,	// (0x000823b7) list_medium_line_t2

0xd0a4,	// (0x000823b7) list_medium_line_t2_g2

0xd0a4,	// (0x000823b7) list_medium_line_t2_g3

0xd0a4,	// (0x000823b7) list_medium_line_t2_right_icon

0xd0a4,	// (0x000823b7) list_medium_line_t2_right_iconx2

0xd0a4,	// (0x000823b7) list_medium_line_t3

0xd0a4,	// (0x000823b7) list_medium_line_t3_g2

0xd0a4,	// (0x000823b7) list_medium_line_t3_g3

0xd0a4,	// (0x000823b7) list_medium_line_t3_right_iconx2

0xd0ad,	// (0x000823c0) list_medium_line_t4_g4

0xefc8,	// (0x000842db) list_medium_line_x2

0xefc8,	// (0x000842db) list_medium_line_x2_t2_g2

0xefc8,	// (0x000842db) list_medium_line_x2_t2_g3

0xefc8,	// (0x000842db) list_medium_line_x2_t2_g4

0xefc8,	// (0x000842db) list_medium_line_x2_t3

0xefc8,	// (0x000842db) list_medium_line_x2_t3_g2

0xefc8,	// (0x000842db) list_medium_line_x2_t3_g3

0xefc8,	// (0x000842db) list_medium_line_x2_t3_g4

0xefc8,	// (0x000842db) list_medium_line_x2_t4_g2

0xefc8,	// (0x000842db) list_medium_line_x2_t4_g4

0xd0b6,	// (0x000823c9) list_medium_line_x3

0xd0b6,	// (0x000823c9) list_medium_line_x3_t4

0xd0b6,	// (0x000823c9) list_medium_line_x3_t4_g4

0xd0ad,	// (0x000823c0) list_medium_line_x4_t4

0xd0ad,	// (0x000823c0) list_medium_line_x4_t4_g7

0xd0ad,	// (0x000823c0) list_medium_line_x4_t5

0x6245,	// (0x0007b558) list_single_fs_dyc_pane_ParamLimits

0x6245,	// (0x0007b558) list_single_fs_dyc_pane

0x5b9f,	// (0x0007aeb2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x4_t4_g7_g1

0x6259,	// (0x0007b56c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6259,	// (0x0007b56c) list_medium_line_x4_t4_g7_g2

0xd7e7,	// (0x00082afa) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd7e7,	// (0x00082afa) list_medium_line_x4_t4_g7_g3

0xd7f6,	// (0x00082b09) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd7f6,	// (0x00082b09) list_medium_line_x4_t4_g7_g4

0x6265,	// (0x0007b578) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6265,	// (0x0007b578) list_medium_line_x4_t4_g7_g5

0x6274,	// (0x0007b587) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6274,	// (0x0007b587) list_medium_line_x4_t4_g7_g6

0x6283,	// (0x0007b596) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6283,	// (0x0007b596) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00084ee3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00084ee3) list_medium_line_x4_t4_g7_g

0x628f,	// (0x0007b5a2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x628f,	// (0x0007b5a2) list_medium_line_x4_t4_g7_t1

0x62a4,	// (0x0007b5b7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x62a4,	// (0x0007b5b7) list_medium_line_x4_t4_g7_t2

0x62b9,	// (0x0007b5cc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x62b9,	// (0x0007b5cc) list_medium_line_x4_t4_g7_t3

0x62ce,	// (0x0007b5e1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x62ce,	// (0x0007b5e1) list_medium_line_x4_t4_g7_t4

0x62e0,	// (0x0007b5f3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x62e0,	// (0x0007b5f3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00084ef2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00084ef2) list_medium_line_x4_t4_g7_t

0x62f2,	// (0x0007b605) list_single_dyc_row_pane_ParamLimits

0x62f2,	// (0x0007b605) list_single_dyc_row_pane

0xddf5,	// (0x00083108) call5_gesture_pane_ParamLimits

0xddf5,	// (0x00083108) call5_gesture_pane

0xde29,	// (0x0008313c) call5_windows_pane_ParamLimits

0xde29,	// (0x0008313c) call5_windows_pane

0xde9b,	// (0x000831ae) call5_swipe_1_pane_cp_ParamLimits

0xde9b,	// (0x000831ae) call5_swipe_1_pane_cp

0xdea7,	// (0x000831ba) call5_swipe_2_pane_cp_ParamLimits

0xdea7,	// (0x000831ba) call5_swipe_2_pane_cp

0x167c,	// (0x0007698f) call5_image_pane_cp

0xdeb3,	// (0x000831c6) popup_call5_audio_first_window_cp_ParamLimits

0xdeb3,	// (0x000831c6) popup_call5_audio_first_window_cp

0x4895,	// (0x00079ba8) call5_swipe_1_pane_g1_cp_ParamLimits

0x4895,	// (0x00079ba8) call5_swipe_1_pane_g1_cp

0x48d5,	// (0x00079be8) call5_swipe_1_pane_g2_cp

0x48ae,	// (0x00079bc1) call5_swipe_1_pane_t1_cp_ParamLimits

0x48ae,	// (0x00079bc1) call5_swipe_1_pane_t1_cp

0x4895,	// (0x00079ba8) call5_swipe_2_pane_g1_cp_ParamLimits

0x4895,	// (0x00079ba8) call5_swipe_2_pane_g1_cp

0x48dd,	// (0x00079bf0) call5_swipe_2_pane_g2_cp

0x48e5,	// (0x00079bf8) call5_swipe_2_pane_t1_cp_ParamLimits

0x48e5,	// (0x00079bf8) call5_swipe_2_pane_t1_cp

0x0ea4,	// (0x000761b7) main_sp_fs_email_pane

0x48fa,	// (0x00079c0d) main_sp_fs_listscroll_pane_te

0xdec1,	// (0x000831d4) popup_sp_fs_action_menu_pane_ParamLimits

0xdec1,	// (0x000831d4) popup_sp_fs_action_menu_pane

0x2e8d,	// (0x000781a0) bg_sp_fs_ctrlbar_pane_g1

0x346c,	// (0x0007877f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x347e,	// (0x00078791) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3475,	// (0x00078788) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2e8d,	// (0x000781a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00084fe0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2c72,	// (0x00077f85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2c72,	// (0x00077f85) bg_sp_fs_ctrlbar_ddmenu_pane

0x4903,	// (0x00079c16) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4903,	// (0x00079c16) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x490f,	// (0x00079c22) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x490f,	// (0x00079c22) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00084fe9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00084fe9) main_sp_fs_ctrlbar_ddmenu_pane_g

0x491b,	// (0x00079c2e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x491b,	// (0x00079c2e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdf05,	// (0x00083218) list_medium_line_t2_right_icon_g1

0x639e,	// (0x0007b6b1) list_medium_line_t2_right_icon_t1

0x63ae,	// (0x0007b6c1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00084fee) list_medium_line_t2_right_icon_t

0x2a85,	// (0x00077d98) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2a85,	// (0x00077d98) bg_sp_fs_ctrlbar_pane

0xdf64,	// (0x00083277) main_sp_fs_ctrlbar_button_pane_cp01

0xdf6c,	// (0x0008327f) main_sp_fs_ctrlbar_ddmenu_pane

0x496d,	// (0x00079c80) main_sp_fs_ctrlbar_pane_g1

0x4979,	// (0x00079c8c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00084ff3) main_sp_fs_ctrlbar_pane_g

0x4985,	// (0x00079c98) main_sp_fs_ctrlbar_pane_t1

0xdf76,	// (0x00083289) main_sp_fs_ctrlbar_pane

0xdf8c,	// (0x0008329f) main_sp_fs_listscroll_pane_te_cp01

0x63bc,	// (0x0007b6cf) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x63bc,	// (0x0007b6cf) popup_sp_fs_action_menu_pane_cp01

0x0ea4,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0ea4,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp01

0x63e6,	// (0x0007b6f9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x63e6,	// (0x0007b6f9) sp_fs_action_menu_list_gene_pane_g1

0x49b5,	// (0x00079cc8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x49b5,	// (0x00079cc8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00084ffd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00084ffd) sp_fs_action_menu_list_gene_pane_g

0x63f5,	// (0x0007b708) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x63f5,	// (0x0007b708) sp_fs_action_menu_list_gene_pane_t1

0x640d,	// (0x0007b720) sp_fs_action_menu_list_gene_pane_ParamLimits

0x640d,	// (0x0007b720) sp_fs_action_menu_list_gene_pane

0x49c2,	// (0x00079cd5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x49c2,	// (0x00079cd5) popup_sp_fs_action_menu_bg_pane

0x642e,	// (0x0007b741) sp_fs_action_menu_list_pane_ParamLimits

0x642e,	// (0x0007b741) sp_fs_action_menu_list_pane

0x6450,	// (0x0007b763) sp_fs_scroll_pane_cp01_ParamLimits

0x6450,	// (0x0007b763) sp_fs_scroll_pane_cp01

0x6476,	// (0x0007b789) list_medium_line_plain_t2_t1

0x6486,	// (0x0007b799) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00085002) list_medium_line_plain_t2_t

0x6494,	// (0x0007b7a7) list_medium_line_plain_t3_t1

0x64a4,	// (0x0007b7b7) list_medium_line_plain_t3_t2

0x64b2,	// (0x0007b7c5) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00085007) list_medium_line_plain_t3_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t2_g2_g1

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0008455e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0008455e) list_medium_line_x2_t2_g2_g

0x5d5a,	// (0x0007b06d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5d5a,	// (0x0007b06d) list_medium_line_x2_t2_g2_t1

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0008500e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0008500e) list_medium_line_x2_t2_g2_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t4_g2_g1

0x64c0,	// (0x0007b7d3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x64c0,	// (0x0007b7d3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00085013) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00085013) list_medium_line_x2_t4_g2_g

0x64d2,	// (0x0007b7e5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x64d2,	// (0x0007b7e5) list_medium_line_x2_t4_g2_t1

0x64ec,	// (0x0007b7ff) list_medium_line_x2_t4_g2_t2_ParamLimits

0x64ec,	// (0x0007b7ff) list_medium_line_x2_t4_g2_t2

0x6501,	// (0x0007b814) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6501,	// (0x0007b814) list_medium_line_x2_t4_g2_t3

0x5bde,	// (0x0007aef1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00085018) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00085018) list_medium_line_x2_t4_g2_t

0xdf9d,	// (0x000832b0) list_medium_line_t3_right_iconx2_g1

0xdf05,	// (0x00083218) list_medium_line_t3_right_iconx2_g2

0x6516,	// (0x0007b829) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00085021) list_medium_line_t3_right_iconx2_g

0x651e,	// (0x0007b831) list_medium_line_t3_right_iconx2_t1

0x652e,	// (0x0007b841) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00085028) list_medium_line_t3_right_iconx2_t

0x5b9f,	// (0x0007aeb2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x3_t4_g4_g1

0x7eab,	// (0x0007d1be) list_medium_line_x3_t4_g4_g2_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x3_t4_g4_g2

0x5d42,	// (0x0007b055) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5d42,	// (0x0007b055) list_medium_line_x3_t4_g4_g3

0xdfa5,	// (0x000832b8) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdfa5,	// (0x000832b8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0008502d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0008502d) list_medium_line_x3_t4_g4_g

0x653c,	// (0x0007b84f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x653c,	// (0x0007b84f) list_medium_line_x3_t4_g4_t1

0x6553,	// (0x0007b866) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6553,	// (0x0007b866) list_medium_line_x3_t4_g4_t2

0x5d6f,	// (0x0007b082) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5d6f,	// (0x0007b082) list_medium_line_x3_t4_g4_t3

0x6568,	// (0x0007b87b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6568,	// (0x0007b87b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00085036) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00085036) list_medium_line_x3_t4_g4_t

0x6585,	// (0x0007b898) list_single_dyc_row_text_pane_t1_ParamLimits

0x6585,	// (0x0007b898) list_single_dyc_row_text_pane_t1

0x65bc,	// (0x0007b8cf) list_single_dyc_row_text_pane_t2_ParamLimits

0x65bc,	// (0x0007b8cf) list_single_dyc_row_text_pane_t2

0x6632,	// (0x0007b945) list_single_dyc_row_text_pane_t3_ParamLimits

0x6632,	// (0x0007b945) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0008503f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0008503f) list_single_dyc_row_text_pane_t

0x6703,	// (0x0007ba16) list_single_dyc_row_pane_g1_ParamLimits

0x6703,	// (0x0007ba16) list_single_dyc_row_pane_g1

0x670f,	// (0x0007ba22) list_single_dyc_row_pane_g2_ParamLimits

0x670f,	// (0x0007ba22) list_single_dyc_row_pane_g2

0x671b,	// (0x0007ba2e) list_single_dyc_row_pane_g3_ParamLimits

0x671b,	// (0x0007ba2e) list_single_dyc_row_pane_g3

0x6727,	// (0x0007ba3a) list_single_dyc_row_pane_g4_ParamLimits

0x6727,	// (0x0007ba3a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0008504c) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0008504c) list_single_dyc_row_pane_g

0x6733,	// (0x0007ba46) list_single_dyc_row_text_pane_ParamLimits

0x6733,	// (0x0007ba46) list_single_dyc_row_text_pane

0xedd8,	// (0x000840eb) bg_sp_fs_scroll_pane

0x49d0,	// (0x00079ce3) thumb_sp_fs_scroll_pane

0x5fe9,	// (0x0007b2fc) list_medium_line_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_g1

0x6752,	// (0x0007ba65) list_medium_line_t1_ParamLimits

0x6752,	// (0x0007ba65) list_medium_line_t1

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_g1

0x7eab,	// (0x0007d1be) list_medium_line_x2_g2_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00085055) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00085055) list_medium_line_x2_g

0x6767,	// (0x0007ba7a) list_medium_line_x2_t1_ParamLimits

0x6767,	// (0x0007ba7a) list_medium_line_x2_t1

0x5b9f,	// (0x0007aeb2) list_medium_line_x3_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x3_g1

0x7eab,	// (0x0007d1be) list_medium_line_x3_g2_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00085055) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00085055) list_medium_line_x3_g

0x6767,	// (0x0007ba7a) list_medium_line_x3_t1_ParamLimits

0x6767,	// (0x0007ba7a) list_medium_line_x3_t1

0x49d9,	// (0x00079cec) thumb_sp_fs_scroll_pane_g1

0x49e2,	// (0x00079cf5) thumb_sp_fs_scroll_pane_g2

0x49eb,	// (0x00079cfe) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008505a) thumb_sp_fs_scroll_pane_g

0x49d9,	// (0x00079cec) bg_sp_fs_scroll_pane_g1

0x49e2,	// (0x00079cf5) bg_sp_fs_scroll_pane_g2

0x49eb,	// (0x00079cfe) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008505a) bg_sp_fs_scroll_pane_g

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5b9f,	// (0x0007aeb2) list_medium_line_x2_t3_g4_g1

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t3_g4_g2_ParamLimits

0x7eb7,	// (0x0007d1ca) list_medium_line_x2_t3_g4_g2

0x7eab,	// (0x0007d1be) list_medium_line_x2_t3_g4_g3_ParamLimits

0x7eab,	// (0x0007d1be) list_medium_line_x2_t3_g4_g3

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5bab,	// (0x0007aebe) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000845da) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000845da) list_medium_line_x2_t3_g4_g

0x677d,	// (0x0007ba90) list_medium_line_x2_t3_g4_t1_ParamLimits

0x677d,	// (0x0007ba90) list_medium_line_x2_t3_g4_t1

0x6793,	// (0x0007baa6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6793,	// (0x0007baa6) list_medium_line_x2_t3_g4_t2

0x5bde,	// (0x0007aef1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5bde,	// (0x0007aef1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00085061) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00085061) list_medium_line_x2_t3_g4_t

0x5fe9,	// (0x0007b2fc) list_medium_line_g2_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_g2_g1

0xcba9,	// (0x00081ebc) list_medium_line_g2_g2_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00084d13) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00084d13) list_medium_line_g2_g

0x67ad,	// (0x0007bac0) list_medium_line_g2_t1_ParamLimits

0x67ad,	// (0x0007bac0) list_medium_line_g2_t1

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g2_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g2_g1

0xcba9,	// (0x00081ebc) list_medium_line_t3_g2_g2_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00084d13) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00084d13) list_medium_line_t3_g2_g

0x67c2,	// (0x0007bad5) list_medium_line_t3_g2_t1_ParamLimits

0x67c2,	// (0x0007bad5) list_medium_line_t3_g2_t1

0x67d9,	// (0x0007baec) list_medium_line_t3_g2_t2_ParamLimits

0x67d9,	// (0x0007baec) list_medium_line_t3_g2_t2

0x67ee,	// (0x0007bb01) list_medium_line_t3_g2_t3_ParamLimits

0x67ee,	// (0x0007bb01) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00085068) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00085068) list_medium_line_t3_g2_t

0xdf05,	// (0x00083218) list_medium_line_right_icon_g1

0x6803,	// (0x0007bb16) list_medium_line_right_icon_t1

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g1

0x6811,	// (0x0007bb24) list_medium_line_t2_t1_ParamLimits

0x6811,	// (0x0007bb24) list_medium_line_t2_t1

0x682b,	// (0x0007bb3e) list_medium_line_t2_t2_ParamLimits

0x682b,	// (0x0007bb3e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0008506f) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0008506f) list_medium_line_t2_t

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g1

0x6840,	// (0x0007bb53) list_medium_line_t3_t1_ParamLimits

0x6840,	// (0x0007bb53) list_medium_line_t3_t1

0x685a,	// (0x0007bb6d) list_medium_line_t3_t2_ParamLimits

0x685a,	// (0x0007bb6d) list_medium_line_t3_t2

0x686f,	// (0x0007bb82) list_medium_line_t3_t3_ParamLimits

0x686f,	// (0x0007bb82) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00085074) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00085074) list_medium_line_t3_t

0x5fe9,	// (0x0007b2fc) list_medium_line_g3_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_g3_g1

0xdfb1,	// (0x000832c4) list_medium_line_g3_g2_ParamLimits

0xdfb1,	// (0x000832c4) list_medium_line_g3_g2

0xcba9,	// (0x00081ebc) list_medium_line_g3_g3_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0008507b) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0008507b) list_medium_line_g3_g

0x6884,	// (0x0007bb97) list_medium_line_g3_t1_ParamLimits

0x6884,	// (0x0007bb97) list_medium_line_g3_t1

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g3_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t2_g3_g1

0xdfb1,	// (0x000832c4) list_medium_line_t2_g3_g2_ParamLimits

0xdfb1,	// (0x000832c4) list_medium_line_t2_g3_g2

0xcba9,	// (0x00081ebc) list_medium_line_t2_g3_g3_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0008507b) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0008507b) list_medium_line_t2_g3_g

0x6899,	// (0x0007bbac) list_medium_line_t2_g3_t1_ParamLimits

0x6899,	// (0x0007bbac) list_medium_line_t2_g3_t1

0x68b0,	// (0x0007bbc3) list_medium_line_t2_g3_t2_ParamLimits

0x68b0,	// (0x0007bbc3) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00085082) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00085082) list_medium_line_t2_g3_t

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g3_g1_ParamLimits

0x5fe9,	// (0x0007b2fc) list_medium_line_t3_g3_g1

0xdfb1,	// (0x000832c4) list_medium_line_t3_g3_g2_ParamLimits

0xdfb1,	// (0x000832c4) list_medium_line_t3_g3_g2

0xcba9,	// (0x00081ebc) list_medium_line_t3_g3_g3_ParamLimits

0xcba9,	// (0x00081ebc) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0008507b) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0008507b) list_medium_line_t3_g3_g

0x68c5,	// (0x0007bbd8) list_medium_line_t3_g3_t1_ParamLimits

0x68c5,	// (0x0007bbd8) list_medium_line_t3_g3_t1

0x68de,	// (0x0007bbf1) list_medium_line_t3_g3_t2_ParamLimits

0x68de,	// (0x0007bbf1) list_medium_line_t3_g3_t2

0x68f4,	// (0x0007bc07) list_medium_line_t3_g3_t3_ParamLimits

0x68f4,	// (0x0007bc07) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00085087) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00085087) list_medium_line_t3_g3_t

0xdf9d,	// (0x000832b0) list_medium_line_right_iconx2_g1

0xdf05,	// (0x00083218) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008508e) list_medium_line_right_iconx2_g

0xdfbd,	// (0x000832d0) list_medium_line_right_iconx2_t1

0xdf9d,	// (0x000832b0) list_medium_line_t2_right_iconx2_g1

0xdf05,	// (0x00083218) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008508e) list_medium_line_t2_right_iconx2_g

0x690a,	// (0x0007bc1d) list_medium_line_t2_right_iconx2_t1

0x691a,	// (0x0007bc2d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00085093) list_medium_line_t2_right_iconx2_t

0x6928,	// (0x0007bc3b) list_medium_line_x4_t4_t1

0x6936,	// (0x0007bc49) list_medium_line_x4_t4_t2

0x6946,	// (0x0007bc59) list_medium_line_x4_t4_t3

0x6956,	// (0x0007bc69) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00085098) list_medium_line_x4_t4_t

0xdff5,	// (0x00083308) tport_appsw_pane_ParamLimits

0xdff5,	// (0x00083308) tport_appsw_pane

0xe003,	// (0x00083316) tport_contact_pane_ParamLimits

0xe003,	// (0x00083316) tport_contact_pane

0xe013,	// (0x00083326) tport_listscroll_pane_ParamLimits

0xe013,	// (0x00083326) tport_listscroll_pane

0xe023,	// (0x00083336) cell_tport_appsw_pane_ParamLimits

0xe023,	// (0x00083336) cell_tport_appsw_pane

0x317e,	// (0x00078491) tport_appsw_pane_g1_ParamLimits

0x317e,	// (0x00078491) tport_appsw_pane_g1

0x49f4,	// (0x00079d07) tport_contact_pane_g1

0x43ae,	// (0x000796c1) tport_contact_pane_t1

0x49fd,	// (0x00079d10) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000850a1) tport_contact_pane_t

0x4a0b,	// (0x00079d1e) list_tport_pane

0x4a14,	// (0x00079d27) scroll_pane_cp_030

0xe056,	// (0x00083369) cell_tport_appsw_pane_g1

0xe066,	// (0x00083379) cell_tport_appsw_pane_t1

0xe074,	// (0x00083387) grid_highlight_pane_cp019

0xe07c,	// (0x0008338f) list_tport_double_graphic_pane_ParamLimits

0xe07c,	// (0x0008338f) list_tport_double_graphic_pane

0x0ea4,	// (0x000761b7) list_highlight_pane_cp023_ParamLimits

0x0ea4,	// (0x000761b7) list_highlight_pane_cp023

0xe08d,	// (0x000833a0) list_tport_double_graphic_pane_g1_ParamLimits

0xe08d,	// (0x000833a0) list_tport_double_graphic_pane_g1

0xe09a,	// (0x000833ad) list_tport_double_graphic_pane_t1_ParamLimits

0xe09a,	// (0x000833ad) list_tport_double_graphic_pane_t1

0xe0af,	// (0x000833c2) list_tport_double_graphic_pane_t2_ParamLimits

0xe0af,	// (0x000833c2) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000850ad) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000850ad) list_tport_double_graphic_pane_t

0xedd8,	// (0x000840eb) main_cale_note_pane

0xc3b5,	// (0x000816c8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc3b5,	// (0x000816c8) cell_vitu2_function_top_wide_pane_cp01

0xdb47,	// (0x00082e5a) wait_bar_pane_cp05_ParamLimits

0x0ea4,	// (0x000761b7) listscroll_cmail_pane

0x4a1d,	// (0x00079d30) list_cmail_pane

0xe0c1,	// (0x000833d4) list_cmail_body_pane

0xe0e1,	// (0x000833f4) list_single_cmail_header_caption_pane

0xe10d,	// (0x00083420) list_single_cmail_header_detail_pane_ParamLimits

0xe10d,	// (0x00083420) list_single_cmail_header_detail_pane

0x4a2d,	// (0x00079d40) list_single_cmail_header_caption_pane_t1

0x6966,	// (0x0007bc79) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6966,	// (0x0007bc79) list_single_cmail_header_detail_pane_g1

0xe14c,	// (0x0008345f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe14c,	// (0x0008345f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000850b2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000850b2) list_single_cmail_header_detail_pane_g

0x697c,	// (0x0007bc8f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x697c,	// (0x0007bc8f) list_single_cmail_header_detail_pane_t1

0x69dc,	// (0x0007bcef) list_single_cmail_header_editor_pane_bg_ParamLimits

0x69dc,	// (0x0007bcef) list_single_cmail_header_editor_pane_bg

0x454f,	// (0x00079862) list_cmail_body_pane_g1

0x4a48,	// (0x00079d5b) list_cmail_body_pane_t1

0x390b,	// (0x00078c1e) list_single_cmail_header_editor_pane_bg_g1

0x0e06,	// (0x00076119) list_single_cmail_header_editor_pane_bg_g1_copy1

0x391b,	// (0x00078c2e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3913,	// (0x00078c26) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3b2f,	// (0x00078e42) list_single_cmail_header_editor_pane_bg_g1_copy4

0x393b,	// (0x00078c4e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x392b,	// (0x00078c3e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3933,	// (0x00078c46) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0de6,	// (0x000760f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe158,	// (0x0008346b) calenote_gesture_pane_ParamLimits

0xe158,	// (0x0008346b) calenote_gesture_pane

0xe172,	// (0x00083485) calenote_window_pane_ParamLimits

0xe172,	// (0x00083485) calenote_window_pane

0x4a56,	// (0x00079d69) popup_note_window_cp01

0xe18a,	// (0x0008349d) calenote_swipe_1_pane_ParamLimits

0xe18a,	// (0x0008349d) calenote_swipe_1_pane

0xdea7,	// (0x000831ba) calenote_swipe_2_pane_ParamLimits

0xdea7,	// (0x000831ba) calenote_swipe_2_pane

0x4895,	// (0x00079ba8) calenote_swipe_1_pane_g1_ParamLimits

0x4895,	// (0x00079ba8) calenote_swipe_1_pane_g1

0x48a2,	// (0x00079bb5) calenote_swipe_1_pane_g2_ParamLimits

0x48a2,	// (0x00079bb5) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00084fd6) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00084fd6) calenote_swipe_1_pane_g

0x4a68,	// (0x00079d7b) calenote_swipe_1_pane_t1_ParamLimits

0x4a68,	// (0x00079d7b) calenote_swipe_1_pane_t1

0x4895,	// (0x00079ba8) calenote_swipe_2_pane_g1_ParamLimits

0x4895,	// (0x00079ba8) calenote_swipe_2_pane_g1

0x4a95,	// (0x00079da8) calenote_swipe_2_pane_g2_ParamLimits

0x4a95,	// (0x00079da8) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000850be) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000850be) calenote_swipe_2_pane_g

0x4aa1,	// (0x00079db4) calenote_swipe_2_pane_t1_ParamLimits

0x4aa1,	// (0x00079db4) calenote_swipe_2_pane_t1

0xedd8,	// (0x000840eb) main_mup_navstr_pane

0xb13a,	// (0x0008044d) main_mup3_pane_t7_ParamLimits

0xb13a,	// (0x0008044d) main_mup3_pane_t7

0xbb3f,	// (0x00080e52) main_mp4_pane_g6_ParamLimits

0xbb3f,	// (0x00080e52) main_mp4_pane_g6

0xbeb1,	// (0x000811c4) main_image3_pane_t4_ParamLimits

0xbeb1,	// (0x000811c4) main_image3_pane_t4

0xe19d,	// (0x000834b0) popup_navstr_preview_pane_ParamLimits

0xe19d,	// (0x000834b0) popup_navstr_preview_pane

0xe1a9,	// (0x000834bc) scroll_navstr_pane_ParamLimits

0xe1a9,	// (0x000834bc) scroll_navstr_pane

0xedd8,	// (0x000840eb) bg_popup_preview_window_pane_cp04

0x4ac8,	// (0x00079ddb) popup_navstr_preview_pane_t1

0xe1b5,	// (0x000834c8) scroll_navstr_pane_g1_ParamLimits

0xe1b5,	// (0x000834c8) scroll_navstr_pane_g1

0xe1c2,	// (0x000834d5) scroll_navstr_pane_t1_ParamLimits

0xe1c2,	// (0x000834d5) scroll_navstr_pane_t1

0x4a5f,	// (0x00079d72) bg_button_pane_cp014

0x4a5f,	// (0x00079d72) bg_button_pane_cp030

0x6344,	// (0x0007b657) list_double_fisheye_pane_g4_ParamLimits

0x6344,	// (0x0007b657) list_double_fisheye_pane_g4

0x6350,	// (0x0007b663) list_double_fisheye_pane_g5_ParamLimits

0x6350,	// (0x0007b663) list_double_fisheye_pane_g5

0x22ed,	// (0x00077600) sp_fs_scroll_pane_cp03

0x496d,	// (0x00079c80) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4979,	// (0x00079c8c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00084ff3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4985,	// (0x00079c98) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4a25,	// (0x00079d38) sp_fs_scroll_pane_cp02

0x0af3,	// (0x00075e06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0af3,	// (0x00075e06) popup_sp_fs_calendar_preview_list_single_pane

0xedd8,	// (0x000840eb) main_cam6_pano_pane

0x0ea4,	// (0x000761b7) main_mup3_pane_ParamLimits

0xedd8,	// (0x000840eb) main_phacti_pane

0xda1c,	// (0x00082d2f) bg_button_pane_cp11

0xda34,	// (0x00082d47) main_mobtv_info_pane_g2_ParamLimits

0xda34,	// (0x00082d47) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00084f53) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00084f53) main_mobtv_info_pane_g

0xdbe6,	// (0x00082ef9) sc_clock_pane_t5_ParamLimits

0xdbe6,	// (0x00082ef9) sc_clock_pane_t5

0xdc9b,	// (0x00082fae) main_radioblah_pane_g1_ParamLimits

0x47e1,	// (0x00079af4) main_radioblah_pane_t3_ParamLimits

0x47e1,	// (0x00079af4) main_radioblah_pane_t3

0x47f9,	// (0x00079b0c) main_radioblah_pane_t4_ParamLimits

0x47f9,	// (0x00079b0c) main_radioblah_pane_t4

0xdcb9,	// (0x00082fcc) main_radioblah_text_pane_ParamLimits

0xdcb9,	// (0x00082fcc) main_radioblah_text_pane

0xdcc6,	// (0x00082fd9) main_radioblah_info_pane_g1_ParamLimits

0xdd5b,	// (0x0008306e) main_radioblah_info_pane_t4_ParamLimits

0xdd5b,	// (0x0008306e) main_radioblah_info_pane_t4

0x0ea4,	// (0x000761b7) main_sp_fs_calendar_pane

0xe1d4,	// (0x000834e7) main_phacti_pane_g1

0xe1dc,	// (0x000834ef) phacti_note_pane_ParamLimits

0xe1dc,	// (0x000834ef) phacti_note_pane

0x4adf,	// (0x00079df2) phacti_term_pane_ParamLimits

0x4adf,	// (0x00079df2) phacti_term_pane

0x4af4,	// (0x00079e07) phacti_note_pane_t1_ParamLimits

0x4af4,	// (0x00079e07) phacti_note_pane_t1

0x69f3,	// (0x0007bd06) phacti_term_pane_g1

0x69fb,	// (0x0007bd0e) phacti_term_pane_t1_ParamLimits

0x69fb,	// (0x0007bd0e) phacti_term_pane_t1

0x4b0b,	// (0x00079e1e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0c07,	// (0x00075f1a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000850c8) popup_sp_fs_calendar_preview_list_single_pane_g

0x4b13,	// (0x00079e26) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4b13,	// (0x00079e26) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4b28,	// (0x00079e3b) aid_popup_sp_fs_bg_corner_pane

0x2e8d,	// (0x000781a0) popup_sp_fs_calendar_preview_bg_pane_g1

0xedd8,	// (0x000840eb) popup_sp_fs_calendar_preview_bg_pane

0x4b30,	// (0x00079e43) popup_sp_fs_calendar_preview_list_pane

0x2a85,	// (0x00077d98) bg_main_sp_fs_cale_pane_ParamLimits

0x2a85,	// (0x00077d98) bg_main_sp_fs_cale_pane

0x6a25,	// (0x0007bd38) listscroll_cale_mrui_pane_ParamLimits

0x6a25,	// (0x0007bd38) listscroll_cale_mrui_pane

0x398f,	// (0x00078ca2) listscroll_sp_fs_schedule_track_pane

0x6a3a,	// (0x0007bd4d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6a3a,	// (0x0007bd4d) main_sp_fs_ctrlbar_pane_cp01

0x4b38,	// (0x00079e4b) main_sp_fs_ribbon_pane

0x6a4d,	// (0x0007bd60) popup_sp_fs_cale_preview_window

0xe23f,	// (0x00083552) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe23f,	// (0x00083552) list_single_sp_fs_schedule_track_pane

0x4a87,	// (0x00079d9a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4a87,	// (0x00079d9a) bg_sp_fs_highlight_list_pane_cp03

0xe262,	// (0x00083575) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe262,	// (0x00083575) list_single_sp_fs_schedule_track_pane_g1

0xe26e,	// (0x00083581) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe26e,	// (0x00083581) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000850cd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000850cd) list_single_sp_fs_schedule_track_pane_g

0xe27a,	// (0x0008358d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe27a,	// (0x0008358d) list_single_sp_fs_schedule_track_pane_t1

0xe292,	// (0x000835a5) sp_fs_schedule_track_pane_ParamLimits

0xe292,	// (0x000835a5) sp_fs_schedule_track_pane

0x4b40,	// (0x00079e53) sp_fs_schedule_track_pane_g1

0x4b48,	// (0x00079e5b) sp_fs_schedule_track_pane_g2

0x4b50,	// (0x00079e63) sp_fs_schedule_track_pane_g3

0x4b58,	// (0x00079e6b) sp_fs_schedule_track_pane_g4

0x4b60,	// (0x00079e73) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000850d2) sp_fs_schedule_track_pane_g

0x390b,	// (0x00078c1e) bg_sp_fs_schedule_viewer_highlight_g1

0x0e06,	// (0x00076119) bg_sp_fs_schedule_viewer_highlight_g2

0x3913,	// (0x00078c26) bg_sp_fs_schedule_viewer_highlight_g3

0x391b,	// (0x00078c2e) bg_sp_fs_schedule_viewer_highlight_g4

0x3b2f,	// (0x00078e42) bg_sp_fs_schedule_viewer_highlight_g5

0x392b,	// (0x00078c3e) bg_sp_fs_schedule_viewer_highlight_g6

0x3933,	// (0x00078c46) bg_sp_fs_schedule_viewer_highlight_g7

0x393b,	// (0x00078c4e) bg_sp_fs_schedule_viewer_highlight_g8

0x0de6,	// (0x000760f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000850dd) bg_sp_fs_schedule_viewer_highlight_g

0xedd8,	// (0x000840eb) bg_main_sp_fs_ribbon_pane

0xe2a2,	// (0x000835b5) main_sp_fs_ribbon_pane_g1

0x4b68,	// (0x00079e7b) main_sp_fs_ribbon_pane_t1

0xe2ab,	// (0x000835be) main_sp_fs_ribbon_pane_t2

0x4b77,	// (0x00079e8a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000850f0) main_sp_fs_ribbon_pane_t

0x4b86,	// (0x00079e99) main_sp_fs_ribbon_scheduler_pane

0x4b8e,	// (0x00079ea1) bg_main_sp_fs_ribbon_pane_g1

0x4b97,	// (0x00079eaa) bg_main_sp_fs_ribbon_pane_g2

0x4ba0,	// (0x00079eb3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000850f7) bg_main_sp_fs_ribbon_pane_g

0x4ba8,	// (0x00079ebb) main_sp_fs_ribbon_scheduler_pane_g1

0x4bb1,	// (0x00079ec4) main_sp_fs_ribbon_scheduler_pane_g2

0x4bba,	// (0x00079ecd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000850fe) main_sp_fs_ribbon_scheduler_pane_g

0x4bc3,	// (0x00079ed6) list_cale_mrui_pane

0xe2ba,	// (0x000835cd) sp_fs_scroll_pane_cp07_ParamLimits

0xe2ba,	// (0x000835cd) sp_fs_scroll_pane_cp07

0xe2d6,	// (0x000835e9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe2d6,	// (0x000835e9) bg_sp_fs_schedule_viewer_highlight

0x4bd0,	// (0x00079ee3) list_single_sp_fs_schedule_track_pane_cp01

0x4bd8,	// (0x00079eeb) list_sp_fs_schedule_track_pane

0x4be0,	// (0x00079ef3) sp_fs_scroll_pane_cp06_ParamLimits

0x4be0,	// (0x00079ef3) sp_fs_scroll_pane_cp06

0x2e8d,	// (0x000781a0) bgmain_sp_fs_calendar_pane_g1

0x6a5f,	// (0x0007bd72) list_single_cale_mrui_pane_ParamLimits

0x6a5f,	// (0x0007bd72) list_single_cale_mrui_pane

0x6a8c,	// (0x0007bd9f) list_single_cale_mrui_row_pane_ParamLimits

0x6a8c,	// (0x0007bd9f) list_single_cale_mrui_row_pane

0x6a99,	// (0x0007bdac) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6a99,	// (0x0007bdac) list_single_cale_mrui_row_pane_g1

0x6ad1,	// (0x0007bde4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6ad1,	// (0x0007bde4) list_single_cale_mrui_row_pane_t1

0x6ae3,	// (0x0007bdf6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6ae3,	// (0x0007bdf6) list_single_cale_mrui_row_pane_t2

0x6b49,	// (0x0007be5c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6b49,	// (0x0007be5c) list_single_cale_mrui_row_pane_t3

0x6b78,	// (0x0007be8b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6b78,	// (0x0007be8b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0008510c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0008510c) list_single_cale_mrui_row_pane_t

0x6ba7,	// (0x0007beba) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6ba7,	// (0x0007beba) list_single_cmail_header_editor_pane_bg_cp01

0x6bc7,	// (0x0007beda) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6bc7,	// (0x0007beda) list_single_cmail_header_editor_pane_bg_cp02

0xe2e3,	// (0x000835f6) main_radioblah_text_pane_t1_ParamLimits

0xe2e3,	// (0x000835f6) main_radioblah_text_pane_t1

0x4bff,	// (0x00079f12) cam6_indi_pane_cp01

0x4c07,	// (0x00079f1a) cam6_mode_pane_cp01

0x4c0f,	// (0x00079f22) cam6_pano_pane

0x4c18,	// (0x00079f2b) cam6_zoom_pane_cp01

0x4c20,	// (0x00079f33) cam6_pano_image_pane

0x4c2b,	// (0x00079f3e) cam6_pano_pane_g1

0x454f,	// (0x00079862) cam6_pano_pane_g2

0x4c34,	// (0x00079f47) cam6_pano_pane_g3

0x4c3d,	// (0x00079f50) cam6_pano_pane_g4

0x3459,	// (0x0007876c) cam6_pano_pane_g5

0x4c46,	// (0x00079f59) cam6_pano_pane_g6

0x4c50,	// (0x00079f63) cam6_pano_pane_g7

0x4c58,	// (0x00079f6b) cam6_pano_pane_g8

0x4c61,	// (0x00079f74) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00085115) cam6_pano_pane_g

0xedd8,	// (0x000840eb) main_browser_tag_pane

0x4ac0,	// (0x00079dd3) grid_navstr_albumart_pane

0x4c6c,	// (0x00079f7f) cell_navstr_albumart_pane_ParamLimits

0x4c6c,	// (0x00079f7f) cell_navstr_albumart_pane

0x4c8c,	// (0x00079f9f) cell_navstr_albumart_pane_g1

0x2896,	// (0x00077ba9) cell_navstr_albumart_pane_g2

0x28a6,	// (0x00077bb9) cell_navstr_albumart_pane_g3

0x289e,	// (0x00077bb1) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00085128) cell_navstr_albumart_pane_g

0xe2fe,	// (0x00083611) bt_list_pane_ParamLimits

0xe2fe,	// (0x00083611) bt_list_pane

0xe31e,	// (0x00083631) bt_list_pane_t1

0xe32d,	// (0x00083640) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00085131) bt_list_pane_t

0xedd8,	// (0x000840eb) main_cale_prevew_pane

0xe33c,	// (0x0008364f) popup_cale_preview_window_ParamLimits

0xe33c,	// (0x0008364f) popup_cale_preview_window

0x0ea4,	// (0x000761b7) bg_popup_preview_window_pane_cp05_ParamLimits

0x0ea4,	// (0x000761b7) bg_popup_preview_window_pane_cp05

0x4c94,	// (0x00079fa7) list_cale_preview_pane_ParamLimits

0x4c94,	// (0x00079fa7) list_cale_preview_pane

0xe355,	// (0x00083668) list_double_cale_preview_pane_ParamLimits

0xe355,	// (0x00083668) list_double_cale_preview_pane

0xe367,	// (0x0008367a) list_single_cale_preview_pane_ParamLimits

0xe367,	// (0x0008367a) list_single_cale_preview_pane

0xe37d,	// (0x00083690) list_single_cale_preview_pane_g1

0xe385,	// (0x00083698) list_single_cale_preview_pane_t1_ParamLimits

0xe385,	// (0x00083698) list_single_cale_preview_pane_t1

0xe39a,	// (0x000836ad) list_double_cale_preview_pane_g1

0xe3a2,	// (0x000836b5) list_double_cale_preview_pane_t1_ParamLimits

0xe3a2,	// (0x000836b5) list_double_cale_preview_pane_t1

0xe3b7,	// (0x000836ca) list_double_cale_preview_pane_t2_ParamLimits

0xe3b7,	// (0x000836ca) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00085136) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00085136) list_double_cale_preview_pane_t

0xedd8,	// (0x000840eb) main_ezdial_pane

0x0ea4,	// (0x000761b7) main_sp_fs_email_pane_ParamLimits

0xdf0d,	// (0x00083220) cmail_ddmenu_btn01_pane_ParamLimits

0xdf0d,	// (0x00083220) cmail_ddmenu_btn01_pane

0xdf2a,	// (0x0008323d) cmail_ddmenu_btn02_pane_ParamLimits

0xdf2a,	// (0x0008323d) cmail_ddmenu_btn02_pane

0xdf48,	// (0x0008325b) cmail_ddmenu_btn03_pane_ParamLimits

0xdf48,	// (0x0008325b) cmail_ddmenu_btn03_pane

0xdf76,	// (0x00083289) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf8c,	// (0x0008329f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe0c1,	// (0x000833d4) list_cmail_body_pane_ParamLimits

0xe143,	// (0x00083456) bg_button_pane_cp12

0x4a3b,	// (0x00079d4e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4a3b,	// (0x00079d4e) list_single_cmail_header_detail_pane_g3

0x69b8,	// (0x0007bccb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x69b8,	// (0x0007bccb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000850b9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000850b9) list_single_cmail_header_detail_pane_t

0x6a10,	// (0x0007bd23) phacti_term_pane_t2_ParamLimits

0x6a10,	// (0x0007bd23) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000850c3) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000850c3) phacti_term_pane_t

0x4ca0,	// (0x00079fb3) aid_size_list_single_double

0xe3cf,	// (0x000836e2) popup_ezdial_listscroll_window

0xe3f0,	// (0x00083703) popup_number_entry_window_cp01

0x167c,	// (0x0007698f) bg_popup_call_pane_cp09

0x4cac,	// (0x00079fbf) ezdial_list_pane

0x4cb4,	// (0x00079fc7) scroll_pane_cp23

0x2c72,	// (0x00077f85) bg_button_pane_cp028_ParamLimits

0x2c72,	// (0x00077f85) bg_button_pane_cp028

0xe3fe,	// (0x00083711) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe3fe,	// (0x00083711) cmail_ddmenu_btn01_pane_g1

0xe40e,	// (0x00083721) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe40e,	// (0x00083721) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008513b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008513b) cmail_ddmenu_btn01_pane_g

0x4cbc,	// (0x00079fcf) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4cbc,	// (0x00079fcf) cmail_ddmenu_btn01_pane_t1

0x2a85,	// (0x00077d98) bg_button_pane_cp029_ParamLimits

0x2a85,	// (0x00077d98) bg_button_pane_cp029

0xe41a,	// (0x0008372d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe41a,	// (0x0008372d) cmail_ddmenu_btn02_pane_g1

0xe432,	// (0x00083745) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe432,	// (0x00083745) cmail_ddmenu_btn02_pane_t1

0x4a87,	// (0x00079d9a) bg_button_pane_cp031_ParamLimits

0x4a87,	// (0x00079d9a) bg_button_pane_cp031

0xe41a,	// (0x0008372d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe41a,	// (0x0008372d) cmail_ddmenu_btn03_pane_g1

0xe432,	// (0x00083745) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe432,	// (0x00083745) cmail_ddmenu_btn03_pane_t1

0xbd5c,	// (0x0008106f) cell_dialer2_keypad_pane_t1_ParamLimits

0xbd76,	// (0x00081089) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbd76,	// (0x00081089) cell_dialer2_keypad_pane_t1_copy1

0xd8a1,	// (0x00082bb4) ncimui_group_button_pane

0x0ea4,	// (0x000761b7) main_sp_fs_calendar_pane_ParamLimits

0xe0e1,	// (0x000833f4) list_single_cmail_header_caption_pane_ParamLimits

0xefd1,	// (0x000842e4) aid_recal_txt_sm_pane

0xedd8,	// (0x000840eb) mian_recal_day_pane

0x6a4d,	// (0x0007bd60) popup_sp_fs_cale_preview_window_ParamLimits

0x4cd2,	// (0x00079fe5) list_recal_day_pane

0x6bff,	// (0x0007bf12) list_single_recal_day_pane_ParamLimits

0x6bff,	// (0x0007bf12) list_single_recal_day_pane

0x4cf9,	// (0x0007a00c) list_single_recal_day_pane_g1_ParamLimits

0x4cf9,	// (0x0007a00c) list_single_recal_day_pane_g1

0x6c11,	// (0x0007bf24) list_single_recal_day_pane_g2_ParamLimits

0x6c11,	// (0x0007bf24) list_single_recal_day_pane_g2

0x6c21,	// (0x0007bf34) list_single_recal_day_pane_g3_ParamLimits

0x6c21,	// (0x0007bf34) list_single_recal_day_pane_g3

0x6c2d,	// (0x0007bf40) list_single_recal_day_pane_g4_ParamLimits

0x6c2d,	// (0x0007bf40) list_single_recal_day_pane_g4

0x6c43,	// (0x0007bf56) list_single_recal_day_pane_g5_ParamLimits

0x6c43,	// (0x0007bf56) list_single_recal_day_pane_g5

0x6c5d,	// (0x0007bf70) list_single_recal_day_pane_g6_ParamLimits

0x6c5d,	// (0x0007bf70) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008514a) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008514a) list_single_recal_day_pane_g

0x6c71,	// (0x0007bf84) list_single_recal_day_pane_t1

0x6c83,	// (0x0007bf96) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00085155) list_single_recal_day_pane_t

0xe456,	// (0x00083769) ncimui_query_button_pane_ParamLimits

0xe456,	// (0x00083769) ncimui_query_button_pane

0xe466,	// (0x00083779) ncimui_query_button_pane_t1_ParamLimits

0xe466,	// (0x00083779) ncimui_query_button_pane_t1

0xefda,	// (0x000842ed) ncimui_query_button_pane_t2_ParamLimits

0xefda,	// (0x000842ed) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008515a) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008515a) ncimui_query_button_pane_t

0xe479,	// (0x0008378c) query_button_pane_ParamLimits

0xe479,	// (0x0008378c) query_button_pane

0xedd8,	// (0x000840eb) bg_button_pane_cp0028

0xefed,	// (0x00084300) query_button_pane_t1

0xa13a,	// (0x0007f44d) main_tport_pane_ParamLimits

0xdfcb,	// (0x000832de) bg_popup_window_pane_cp01_ParamLimits

0xdfcb,	// (0x000832de) bg_popup_window_pane_cp01

0xdfd9,	// (0x000832ec) heading_pane_cp08_ParamLimits

0xdfd9,	// (0x000832ec) heading_pane_cp08

0xdfe7,	// (0x000832fa) heading_pane_cp07_ParamLimits

0xdfe7,	// (0x000832fa) heading_pane_cp07

0xe056,	// (0x00083369) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000850a6) cell_tport_appsw_pane_g

0x5db7,	// (0x0007b0ca) input_candi_list_open_g1

0x1032,	// (0x00076345) list_cale_time_pane_g6_ParamLimits

0x1032,	// (0x00076345) list_cale_time_pane_g6

0xabbf,	// (0x0007fed2) aid_size_touch_calib_1_ParamLimits

0xabbf,	// (0x0007fed2) aid_size_touch_calib_1

0xabcb,	// (0x0007fede) aid_size_touch_calib_2_ParamLimits

0xabcb,	// (0x0007fede) aid_size_touch_calib_2

0xabd9,	// (0x0007feec) aid_size_touch_calib_3_ParamLimits

0xabd9,	// (0x0007feec) aid_size_touch_calib_3

0xabe9,	// (0x0007fefc) aid_size_touch_calib_4_ParamLimits

0xabe9,	// (0x0007fefc) aid_size_touch_calib_4

0xabf7,	// (0x0007ff0a) main_touch_calib_button_group_pane_ParamLimits

0xabf7,	// (0x0007ff0a) main_touch_calib_button_group_pane

0xac05,	// (0x0007ff18) main_touch_calib_pane_g1_ParamLimits

0xac11,	// (0x0007ff24) main_touch_calib_pane_g2_ParamLimits

0xac1d,	// (0x0007ff30) main_touch_calib_pane_g3_ParamLimits

0xac29,	// (0x0007ff3c) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x00084a69) main_touch_calib_pane_g_ParamLimits

0xac35,	// (0x0007ff48) main_touch_calib_pane_t1_ParamLimits

0xac4e,	// (0x0007ff61) main_touch_calib_pane_t2_ParamLimits

0xac67,	// (0x0007ff7a) main_touch_calib_pane_t3_ParamLimits

0xac7d,	// (0x0007ff90) main_touch_calib_pane_t4_ParamLimits

0xac93,	// (0x0007ffa6) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x00084a72) main_touch_calib_pane_t_ParamLimits

0x3219,	// (0x0007852c) list_single_fp_cale_pane_g3_ParamLimits

0x3219,	// (0x0007852c) list_single_fp_cale_pane_g3

0x0ea4,	// (0x000761b7) bg_button_pane_cp012_ParamLimits

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp03_ParamLimits

0xcb29,	// (0x00081e3c) cell_vitu2_function_top_pane_g1_ParamLimits

0x0ea4,	// (0x000761b7) bg_vkb2_func_pane_cp04_ParamLimits

0xd829,	// (0x00082b3c) main_ncimui_button_group_pane_ParamLimits

0xd829,	// (0x00082b3c) main_ncimui_button_group_pane

0xd88f,	// (0x00082ba2) main_ncimui_pane_t3_ParamLimits

0xd88f,	// (0x00082ba2) main_ncimui_pane_t3

0x4ad6,	// (0x00079de9) phacti_button_group_pane

0x4ca0,	// (0x00079fb3) aid_size_list_single_double_ParamLimits

0xe3cf,	// (0x000836e2) popup_ezdial_listscroll_window_ParamLimits

0xe3f0,	// (0x00083703) popup_number_entry_window_cp01_ParamLimits

0xe486,	// (0x00083799) phacti_button_pane_ParamLimits

0xe486,	// (0x00083799) phacti_button_pane

0xedd8,	// (0x000840eb) bg_button_pane_cp14

0xeffb,	// (0x0008430e) phacti_button_pane_t1

0xe497,	// (0x000837aa) main_touch_calib_button_pane_ParamLimits

0xe497,	// (0x000837aa) main_touch_calib_button_pane

0x09ef,	// (0x00075d02) bg_button_pane_cp18_ParamLimits

0x09ef,	// (0x00075d02) bg_button_pane_cp18

0xf009,	// (0x0008431c) main_touch_calib_button_pane_t1_ParamLimits

0xf009,	// (0x0008431c) main_touch_calib_button_pane_t1

0xf01f,	// (0x00084332) main_touch_calib_button_pane_t2_ParamLimits

0xf01f,	// (0x00084332) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0008515f) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0008515f) main_touch_calib_button_pane_t

0xedd8,	// (0x000840eb) cell_ncimui_button_pane

0xedd8,	// (0x000840eb) bg_button_pane_cp032

0x000e,	// (0x00075321) cell_ncimui_button_pane_t1

0xbdd2,	// (0x000810e5) image3_infobar_pane_ParamLimits

0xbdd2,	// (0x000810e5) image3_infobar_pane

0xdc08,	// (0x00082f1b) fs_bigclock_status_pane_ParamLimits

0xdc08,	// (0x00082f1b) fs_bigclock_status_pane

0xdc15,	// (0x00082f28) main_fs_bigclock_clock_pane_ParamLimits

0xdc15,	// (0x00082f28) main_fs_bigclock_clock_pane

0xdc39,	// (0x00082f4c) main_fs_bigclock_indi_pane_ParamLimits

0xdc39,	// (0x00082f4c) main_fs_bigclock_indi_pane

0xdc69,	// (0x00082f7c) main_fs_bigclock_swipe_pane_ParamLimits

0xdc69,	// (0x00082f7c) main_fs_bigclock_swipe_pane

0xedd8,	// (0x000840eb) main_fs_clock_dumped_data

0x465c,	// (0x0007996f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x465c,	// (0x0007996f) list_single_fs_bigclock_indicator_pane_g1

0x4676,	// (0x00079989) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4676,	// (0x00079989) list_single_fs_bigclock_indicator_pane_g2

0x4690,	// (0x000799a3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4690,	// (0x000799a3) list_single_fs_bigclock_indicator_pane_g3

0x46aa,	// (0x000799bd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x46aa,	// (0x000799bd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00084f87) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00084f87) list_single_fs_bigclock_indicator_pane_g

0x46d3,	// (0x000799e6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x46d3,	// (0x000799e6) list_single_fs_bigclock_indicator_pane_t1

0x46fb,	// (0x00079a0e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x46fb,	// (0x00079a0e) list_single_fs_bigclock_indicator_pane_t2

0x4723,	// (0x00079a36) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4723,	// (0x00079a36) list_single_fs_bigclock_indicator_pane_t3

0x474b,	// (0x00079a5e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x474b,	// (0x00079a5e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00084f92) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00084f92) list_single_fs_bigclock_indicator_pane_t

0x001c,	// (0x0007532f) image3_infobar_fav_pane_ParamLimits

0x001c,	// (0x0007532f) image3_infobar_fav_pane

0x002c,	// (0x0007533f) image3_infobar_loc_pane_ParamLimits

0x002c,	// (0x0007533f) image3_infobar_loc_pane

0x0040,	// (0x00075353) image3_infobar_time_pane_ParamLimits

0x0040,	// (0x00075353) image3_infobar_time_pane

0x2e8d,	// (0x000781a0) image3_infobar_time_pane_g1

0x0050,	// (0x00075363) image3_infobar_time_pane_t1

0x2e8d,	// (0x000781a0) image3_infobar_loc_pane_g1

0x005e,	// (0x00075371) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00085164) image3_infobar_loc_pane_g

0x0066,	// (0x00075379) image3_infobar_loc_pane_t1

0x2e8d,	// (0x000781a0) image3_infobar_fav_pane_g1

0x0074,	// (0x00075387) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00085169) image3_infobar_fav_pane_g

0x007c,	// (0x0007538f) fs_bigclock_status_battery_pane

0x0085,	// (0x00075398) fs_bigclock_status_signal_pane

0x008e,	// (0x000753a1) fs_bigclock_status_title_pane

0x0097,	// (0x000753aa) fs_bigclock_status_signal_pane_g1

0x00a0,	// (0x000753b3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0008516e) fs_bigclock_status_signal_pane_g

0x00a8,	// (0x000753bb) fs_bigclock_status_battery_pane_g1

0x00b1,	// (0x000753c4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00085173) fs_bigclock_status_battery_pane_g

0x00b9,	// (0x000753cc) fs_bigclock_status_title_pane_t1

0x2e8d,	// (0x000781a0) main_fs_bigclock_clock_pane_g1

0xe4a7,	// (0x000837ba) main_fs_bigclock_clock_pane_g2

0xe4a7,	// (0x000837ba) main_fs_bigclock_clock_pane_g3

0xe4a7,	// (0x000837ba) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00085178) main_fs_bigclock_clock_pane_g

0xe4af,	// (0x000837c2) main_fs_bigclock_clock_pane_t1

0xe4bd,	// (0x000837d0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00085181) main_fs_bigclock_clock_pane_t

0x00c7,	// (0x000753da) list_single_fs_bigclock_indicator_pane_ParamLimits

0x00c7,	// (0x000753da) list_single_fs_bigclock_indicator_pane

0xe4cc,	// (0x000837df) list_single_fs_bigclock_pane_ParamLimits

0xe4cc,	// (0x000837df) list_single_fs_bigclock_pane

0x00e1,	// (0x000753f4) main_fs_bigclock_indicator_pane_t1

0x00f0,	// (0x00075403) list_single_fs_bigclock_pane_g1

0x00f8,	// (0x0007540b) list_single_fs_bigclock_pane_t1

0x2e8d,	// (0x000781a0) main_fs_bigclock_swipe_pane_g1

0x013b,	// (0x0007544e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00085192) main_fs_bigclock_swipe_pane_g

0x0143,	// (0x00075456) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0143,	// (0x00075456) main_fs_bigclock_swipe_pane_t1

0x91c1,	// (0x0007e4d4) call_type_pane_ParamLimits

0xedd8,	// (0x000840eb) main_btmg_pane

0x6ac5,	// (0x0007bdd8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6ac5,	// (0x0007bdd8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00085105) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00085105) list_single_cale_mrui_row_pane_g

0x6bed,	// (0x0007bf00) list_recal_vselct_arw_lo_pane

0x4cf1,	// (0x0007a004) list_recal_vselct_arw_up_pane

0x6bf5,	// (0x0007bf08) list_recal_vselct_pane

0xe52d,	// (0x00083840) btmg_button_pane

0xe539,	// (0x0008384c) main_btmg_pane_g1

0xedd8,	// (0x000840eb) bg_button_pane_cp044

0x0160,	// (0x00075473) btmg_button_pane_t1

0x2a71,	// (0x00077d84) aid_listscroll_gen

0x0ea4,	// (0x000761b7) main_cntbar_detail_pane

0x4a1d,	// (0x00079d30) list_cmail_folder_pane

0x22ed,	// (0x00077600) sp_fs_scroll_pane_cp03_ParamLimits

0x6c95,	// (0x0007bfa8) list_single_fs_dyc_pane_cp01_ParamLimits

0x6c95,	// (0x0007bfa8) list_single_fs_dyc_pane_cp01

0x016e,	// (0x00075481) aid_size_cmail_indent

0x6cc0,	// (0x0007bfd3) list_single_dyc_row_pane_cp01

0xe561,	// (0x00083874) cntbar_detail_list_pane_ParamLimits

0xe561,	// (0x00083874) cntbar_detail_list_pane

0xe59b,	// (0x000838ae) main_cntbar_detail_cont_pane_ParamLimits

0xe59b,	// (0x000838ae) main_cntbar_detail_cont_pane

0x91b5,	// (0x0007e4c8) scroll_pane_cp032_ParamLimits

0x91b5,	// (0x0007e4c8) scroll_pane_cp032

0xe5a7,	// (0x000838ba) cntbar_detail_list_event_pane_ParamLimits

0xe5a7,	// (0x000838ba) cntbar_detail_list_event_pane

0xe56d,	// (0x00083880) cntbar_detail_list_shct_pane

0x0e54,	// (0x00076167) aid_list_gen

0x0177,	// (0x0007548a) aid_scroll

0x0180,	// (0x00075493) aid_size_touch_scroll_bar

0xefc8,	// (0x000842db) aid_list_double

0xe5bb,	// (0x000838ce) aid_list_single

0xd0a4,	// (0x000823b7) aid_list_single_lg

0x6cc9,	// (0x0007bfdc) aid_list_z_g_a_sm

0xe5c4,	// (0x000838d7) aid_list_z_g_d

0x6cd1,	// (0x0007bfe4) aid_txt_z_prm

0x6cdf,	// (0x0007bff2) aid_txt_z_prm_cp01

0x6ced,	// (0x0007c000) aid_txt_z_sec

0xe5cc,	// (0x000838df) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe5cc,	// (0x000838df) main_cntbar_detail_cont_pane_g1

0xe5d9,	// (0x000838ec) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe5d9,	// (0x000838ec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00085197) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00085197) main_cntbar_detail_cont_pane_g

0x0189,	// (0x0007549c) main_cntbar_detail_cont_pane_t1

0x0197,	// (0x000754aa) main_cntbar_detail_cont_pane_t2

0x01a5,	// (0x000754b8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008519c) main_cntbar_detail_cont_pane_t

0xe5e5,	// (0x000838f8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe5e5,	// (0x000838f8) cell_cntbar_detail_list_shct_pane

0x01b3,	// (0x000754c6) cntbar_detail_list_shct_pane_g1

0x01bc,	// (0x000754cf) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000851a3) cntbar_detail_list_shct_pane_g

0xe5f9,	// (0x0008390c) cntbar_detail_list_event_pane_g1_ParamLimits

0xe5f9,	// (0x0008390c) cntbar_detail_list_event_pane_g1

0xe605,	// (0x00083918) cntbar_detail_list_event_pane_g2_ParamLimits

0xe605,	// (0x00083918) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000851a8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000851a8) cntbar_detail_list_event_pane_g

0xe671,	// (0x00083984) cntbar_detail_list_event_pane_t1_ParamLimits

0xe671,	// (0x00083984) cntbar_detail_list_event_pane_t1

0xe686,	// (0x00083999) cntbar_detail_list_event_pane_t2_ParamLimits

0xe686,	// (0x00083999) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000851b5) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000851b5) cntbar_detail_list_event_pane_t

0x2e8d,	// (0x000781a0) cell_cntbar_detail_list_shct_pane_g1

0x1634,	// (0x00076947) navi_pane_mv_g3

0x0ea4,	// (0x000761b7) main_cntbar_detail_pane_ParamLimits

0xedd8,	// (0x000840eb) main_notif_wgt_pane

0xba86,	// (0x00080d99) aid_tch_main_mp4_pane_g4

0xbcbb,	// (0x00080fce) popup_slider_window_cp02

0x6be3,	// (0x0007bef6) list_recal_day_event_pane

0xe541,	// (0x00083854) cntbar_detail_btn_pane_ParamLimits

0xe541,	// (0x00083854) cntbar_detail_btn_pane

0xe551,	// (0x00083864) cntbar_detail_btn_pane_cp01_ParamLimits

0xe551,	// (0x00083864) cntbar_detail_btn_pane_cp01

0xe56d,	// (0x00083880) cntbar_detail_list_shct_pane_ParamLimits

0xe579,	// (0x0008388c) cntbar_detail_pane_g1_ParamLimits

0xe579,	// (0x0008388c) cntbar_detail_pane_g1

0xe585,	// (0x00083898) cntbar_detail_pane_t1_ParamLimits

0xe585,	// (0x00083898) cntbar_detail_pane_t1

0xe611,	// (0x00083924) cntbar_detail_list_event_pane_g3_ParamLimits

0xe611,	// (0x00083924) cntbar_detail_list_event_pane_g3

0xe629,	// (0x0008393c) cntbar_detail_list_event_pane_g4_ParamLimits

0xe629,	// (0x0008393c) cntbar_detail_list_event_pane_g4

0xe641,	// (0x00083954) cntbar_detail_list_event_pane_g5_ParamLimits

0xe641,	// (0x00083954) cntbar_detail_list_event_pane_g5

0xe659,	// (0x0008396c) cntbar_detail_list_event_pane_g6_ParamLimits

0xe659,	// (0x0008396c) cntbar_detail_list_event_pane_g6

0xe69b,	// (0x000839ae) cntbar_detail_list_event_pane_t3_ParamLimits

0xe69b,	// (0x000839ae) cntbar_detail_list_event_pane_t3

0xe6ad,	// (0x000839c0) popup_notif_wgt_window_ParamLimits

0xe6ad,	// (0x000839c0) popup_notif_wgt_window

0xe6bd,	// (0x000839d0) popup_submenu_window_cp01_ParamLimits

0xe6bd,	// (0x000839d0) popup_submenu_window_cp01

0x167c,	// (0x0007698f) bg_popup_window_pane_cp10

0x01c5,	// (0x000754d8) listscroll_notif_wgt_pane

0x01d7,	// (0x000754ea) list_notif_wgt_window

0x01e0,	// (0x000754f3) scroll_pane_cp033

0xe6cf,	// (0x000839e2) list_notif_wgt_row_pane_ParamLimits

0xe6cf,	// (0x000839e2) list_notif_wgt_row_pane

0x01e9,	// (0x000754fc) aid_size_list_notif_wgt_del

0x01f6,	// (0x00075509) list_notif_wgt_row_pane_g1

0x0202,	// (0x00075515) list_notif_wgt_row_pane_g2

0x020e,	// (0x00075521) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000851bc) list_notif_wgt_row_pane_g

0x021b,	// (0x0007552e) list_notif_wgt_row_pane_t1

0x0230,	// (0x00075543) list_notif_wgt_row_pane_t2

0x0242,	// (0x00075555) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000851c3) list_notif_wgt_row_pane_t

0x3b49,	// (0x00078e5c) list_recal_day_event_pane_g1

0x0254,	// (0x00075567) list_recal_day_event_pane_t1

0xedd8,	// (0x000840eb) bg_button_pane_cp045

0xe6e1,	// (0x000839f4) cntbar_detail_btn_pane_t1

0x2a85,	// (0x00077d98) main_callh_pane_ParamLimits

0x2a85,	// (0x00077d98) main_callh_pane

0xedd8,	// (0x000840eb) main_coverflow0_pane

0xedd8,	// (0x000840eb) main_wgtman_pane

0xdc81,	// (0x00082f94) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc81,	// (0x00082f94) main_fs_bigclock_unlock_btn_pane

0xe04e,	// (0x00083361) bg_button_pane_cp16

0xe05e,	// (0x00083371) cell_tport_appsw_pane_g3

0xe6ef,	// (0x00083a02) cf0_flow_pane_ParamLimits

0xe6ef,	// (0x00083a02) cf0_flow_pane

0x0263,	// (0x00075576) listscroll_cf0_pane

0x026e,	// (0x00075581) main_cf0_pane_g1

0xe6fe,	// (0x00083a11) main_cf0_pane_t1_ParamLimits

0xe6fe,	// (0x00083a11) main_cf0_pane_t1

0xe712,	// (0x00083a25) main_cf0_pane_t2_ParamLimits

0xe712,	// (0x00083a25) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000851cf) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000851cf) main_cf0_pane_t

0x0280,	// (0x00075593) scroll_pane_cp11

0xe726,	// (0x00083a39) cf0_flow_pane_g1

0xe72e,	// (0x00083a41) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000851d4) cf0_flow_pane_g

0xe736,	// (0x00083a49) cf0_flow_pane_t1

0xedd8,	// (0x000840eb) main_call6_pane

0xedd8,	// (0x000840eb) main_calllock_pane

0xe744,	// (0x00083a57) call6_btn_grp_pane_ParamLimits

0xe744,	// (0x00083a57) call6_btn_grp_pane

0xe753,	// (0x00083a66) call6_pane_g1_ParamLimits

0xe753,	// (0x00083a66) call6_pane_g1

0xe762,	// (0x00083a75) popup_call6_1st_window_ParamLimits

0xe762,	// (0x00083a75) popup_call6_1st_window

0xe770,	// (0x00083a83) popup_call6_2nd_window_ParamLimits

0xe770,	// (0x00083a83) popup_call6_2nd_window

0xe77e,	// (0x00083a91) cell_call6_btn_pane_ParamLimits

0xe77e,	// (0x00083a91) cell_call6_btn_pane

0x167c,	// (0x0007698f) bg_popup_call2_in_pane_cp03

0x028b,	// (0x0007559e) popup_call6_1st_window_g1

0x0293,	// (0x000755a6) popup_call6_1st_window_g2

0x029b,	// (0x000755ae) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000851d9) popup_call6_1st_window_g

0x02a3,	// (0x000755b6) popup_call6_1st_window_t1

0x02b2,	// (0x000755c5) popup_call6_1st_window_t2

0x02c2,	// (0x000755d5) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000851e0) popup_call6_1st_window_t

0x167c,	// (0x0007698f) bg_popup_call2_in_pane_cp04

0x028b,	// (0x0007559e) popup_call6_2nd_window_g1

0x0293,	// (0x000755a6) popup_call6_2nd_window_g2

0x029b,	// (0x000755ae) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000851d9) popup_call6_2nd_window_g

0x02a3,	// (0x000755b6) popup_call6_2nd_window_t1

0xedd8,	// (0x000840eb) bg_button_pane_cp15

0x02d2,	// (0x000755e5) cell_call6_btn_pane_g1

0x02db,	// (0x000755ee) cell_call6_btn_pane_t1

0xe78d,	// (0x00083aa0) listscroll_wgtman_pane_ParamLimits

0xe78d,	// (0x00083aa0) listscroll_wgtman_pane

0xe7a9,	// (0x00083abc) wgtman_btn_pane_ParamLimits

0xe7a9,	// (0x00083abc) wgtman_btn_pane

0x143b,	// (0x0007674e) aid_scroll_copy1

0x02ea,	// (0x000755fd) list_wgtman_pane

0xe7de,	// (0x00083af1) wgtman_btn_pane_g1_ParamLimits

0xe7de,	// (0x00083af1) wgtman_btn_pane_g1

0xe806,	// (0x00083b19) wgtman_btn_pane_t1_ParamLimits

0xe806,	// (0x00083b19) wgtman_btn_pane_t1

0x02f4,	// (0x00075607) wgtman_btn_pane_t2_ParamLimits

0x02f4,	// (0x00075607) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000851e7) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000851e7) wgtman_btn_pane_t

0xe83d,	// (0x00083b50) listrow_wgtman_pane_ParamLimits

0xe83d,	// (0x00083b50) listrow_wgtman_pane

0xe858,	// (0x00083b6b) listrow_wgtman_pane_g1

0xe865,	// (0x00083b78) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000851ec) listrow_wgtman_pane_g

0x6cfb,	// (0x0007c00e) listrow_wgtman_pane_t1

0x6d13,	// (0x0007c026) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000851f1) listrow_wgtman_pane_t

0x6d39,	// (0x0007c04c) wait_bar_pane_cp09

0x030b,	// (0x0007561e) main_calllock_btn_pane

0x0315,	// (0x00075628) main_calllock_pane_g1

0xedd8,	// (0x000840eb) bg_button_pane_cp17

0x0321,	// (0x00075634) main_calllock_btn_pane_g1

0x032a,	// (0x0007563d) main_calllock_btn_pane_t1

0xedd8,	// (0x000840eb) main_dialer3_pane

0xedd8,	// (0x000840eb) main_fmrd2_pane

0x2e8d,	// (0x000781a0) main_fs_bigclock_unlock_btn_pane_g1

0x0341,	// (0x00075654) main_fs_bigclock_unlock_btn_pane_t1

0xe883,	// (0x00083b96) area_fmrd2_info_pane_ParamLimits

0xe883,	// (0x00083b96) area_fmrd2_info_pane

0xe891,	// (0x00083ba4) area_fmrd2_visual_pane_ParamLimits

0xe891,	// (0x00083ba4) area_fmrd2_visual_pane

0xe89f,	// (0x00083bb2) fmrd2_indi_pane_ParamLimits

0xe89f,	// (0x00083bb2) fmrd2_indi_pane

0xe8ac,	// (0x00083bbf) area_fmrd2_visual_pane_g1

0xe8b4,	// (0x00083bc7) area_fmrd2_visual_pane_t1

0xe8c4,	// (0x00083bd7) area_fmrd2_visual_pane_t2

0xe8d4,	// (0x00083be7) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000851fb) area_fmrd2_visual_pane_t

0xe8e4,	// (0x00083bf7) area_fmrd2_info_pane_g1

0xe8ec,	// (0x00083bff) area_fmrd2_info_pane_t1

0xe8fc,	// (0x00083c0f) area_fmrd2_info_pane_t2

0xe90c,	// (0x00083c1f) area_fmrd2_info_pane_t3

0xe91c,	// (0x00083c2f) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00085202) area_fmrd2_info_pane_t

0xe92a,	// (0x00083c3d) fmrd2_indi_pane_t1

0xe93a,	// (0x00083c4d) fmrd2_indi_pane_t2

0xe94a,	// (0x00083c5d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008520b) fmrd2_indi_pane_t

0x46b9,	// (0x000799cc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x46b9,	// (0x000799cc) list_single_fs_bigclock_indicator_pane_g5

0x4760,	// (0x00079a73) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4760,	// (0x00079a73) list_single_fs_bigclock_indicator_pane_t5

0xe1f2,	// (0x00083505) aid_cell_bcale_month_pane_ParamLimits

0xe1f2,	// (0x00083505) aid_cell_bcale_month_pane

0xe210,	// (0x00083523) bcale_month_pane_ParamLimits

0xe210,	// (0x00083523) bcale_month_pane

0xe22e,	// (0x00083541) bcale_preview_pane_ParamLimits

0xe22e,	// (0x00083541) bcale_preview_pane

0x00f8,	// (0x0007540b) list_single_fs_bigclock_pane_t1_ParamLimits

0x0117,	// (0x0007542a) list_single_fs_bigclock_pane_t2_ParamLimits

0x0117,	// (0x0007542a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0008518d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0008518d) list_single_fs_bigclock_pane_t

0x0339,	// (0x0007564c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000851f6) main_fs_bigclock_unlock_btn_pane_g

0xe958,	// (0x00083c6b) aid_dia3_key_size_ParamLimits

0xe958,	// (0x00083c6b) aid_dia3_key_size

0xe964,	// (0x00083c77) aid_dia3_listrow_size_ParamLimits

0xe964,	// (0x00083c77) aid_dia3_listrow_size

0xe974,	// (0x00083c87) dia3_keypad_fun_pane_ParamLimits

0xe974,	// (0x00083c87) dia3_keypad_fun_pane

0xe986,	// (0x00083c99) dia3_keypad_num_pane_ParamLimits

0xe986,	// (0x00083c99) dia3_keypad_num_pane

0xe998,	// (0x00083cab) dia3_listscroll_pane_ParamLimits

0xe998,	// (0x00083cab) dia3_listscroll_pane

0xe9a6,	// (0x00083cb9) dia3_numentry_pane_ParamLimits

0xe9a6,	// (0x00083cb9) dia3_numentry_pane

0x034f,	// (0x00075662) dia3_list_pane

0x035a,	// (0x0007566d) scroll_pane_cp12

0xedd8,	// (0x000840eb) bg_dia3_numentry_pane

0xe9b4,	// (0x00083cc7) dia3_numentry_pane_t1

0xe9c3,	// (0x00083cd6) cell_dia3_key_num_pane

0xe9cb,	// (0x00083cde) cell_dia3_key0_fun_pane_ParamLimits

0xe9cb,	// (0x00083cde) cell_dia3_key0_fun_pane

0xe9d8,	// (0x00083ceb) cell_dia3_key1_fun_pane_ParamLimits

0xe9d8,	// (0x00083ceb) cell_dia3_key1_fun_pane

0xe9e5,	// (0x00083cf8) dia3_listrow_pane

0x43c9,	// (0x000796dc) bg_dia3_numentry_pane_g1

0xedd8,	// (0x000840eb) bg_button_pane_cp21

0x0365,	// (0x00075678) cell_dia3_key_num_pane_t1

0x0373,	// (0x00075686) cell_dia3_key_num_pane_t2

0x0382,	// (0x00075695) cell_dia3_key_num_pane_t3

0x0391,	// (0x000756a4) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00085212) cell_dia3_key_num_pane_t

0xedd8,	// (0x000840eb) bg_button_pane_cp19

0xe9f2,	// (0x00083d05) cell_dia3_key0_fun_pane_g1

0xedd8,	// (0x000840eb) bg_button_pane_cp20

0xe9fa,	// (0x00083d0d) cell_dia3_key1_fun_pane_g1

0xea02,	// (0x00083d15) area_left_week_number_pane

0xea15,	// (0x00083d28) area_top_day_name_pane

0xea23,	// (0x00083d36) frame_month_view_pane

0x03a0,	// (0x000756b3) grid_month_view_pane

0xea38,	// (0x00083d4b) cell_top_day_name_pane_ParamLimits

0xea38,	// (0x00083d4b) cell_top_day_name_pane

0xea52,	// (0x00083d65) cell_area_left_week_number_pane_ParamLimits

0xea52,	// (0x00083d65) cell_area_left_week_number_pane

0xea75,	// (0x00083d88) cell_month_view_pane_ParamLimits

0xea75,	// (0x00083d88) cell_month_view_pane

0x03ae,	// (0x000756c1) frm_month_g1

0xeaa1,	// (0x00083db4) frm_month_g2

0xeab2,	// (0x00083dc5) frm_month_g3

0xeac3,	// (0x00083dd6) frm_month_g4

0xead4,	// (0x00083de7) frm_month_g5

0xeae7,	// (0x00083dfa) frm_month_g6

0xeafa,	// (0x00083e0d) frm_month_g7

0x03bb,	// (0x000756ce) frm_month_g8

0xeb0d,	// (0x00083e20) frm_month_g9

0xeb1a,	// (0x00083e2d) frm_month_g10

0xeb27,	// (0x00083e3a) frm_month_g11

0xeb34,	// (0x00083e47) frm_month_g12

0xeb41,	// (0x00083e54) frm_month_g13

0xeb4e,	// (0x00083e61) frm_month_g14

0xeb5d,	// (0x00083e70) frm_month_g15

0xeb6c,	// (0x00083e7f) frm_month_g16

0x000f,

0xff08,	// (0x0008521b) frm_month_g

0x03c8,	// (0x000756db) cell_top_day_name_pane_t1

0xeb7b,	// (0x00083e8e) cell_area_left_week_number_pane_g1

0xeb8a,	// (0x00083e9d) cell_area_left_week_number_pane_t1

0x30f9,	// (0x0007840c) cell_month_view_pane_g1

0xeba0,	// (0x00083eb3) cell_month_view_pane_t1

0xedd8,	// (0x000840eb) main_fps_pane

0x4935,	// (0x00079c48) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4935,	// (0x00079c48) cmail_ddmenu_btn02_pane_cp1

0x4951,	// (0x00079c64) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4951,	// (0x00079c64) cmail_ddmenu_btn02_pane_cp2

0xe426,	// (0x00083739) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe426,	// (0x00083739) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00085140) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00085140) cmail_ddmenu_btn02_pane_g

0xe444,	// (0x00083757) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe444,	// (0x00083757) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00085145) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00085145) cmail_ddmenu_btn02_pane_t

0xebb6,	// (0x00083ec9) fps_text_pane_ParamLimits

0xebb6,	// (0x00083ec9) fps_text_pane

0xebc3,	// (0x00083ed6) main_fps_pane_g1_ParamLimits

0xebc3,	// (0x00083ed6) main_fps_pane_g1

0xebd1,	// (0x00083ee4) wait_bar_pane_cp010_ParamLimits

0xebd1,	// (0x00083ee4) wait_bar_pane_cp010

0xebdd,	// (0x00083ef0) fps_text_pane_t1_ParamLimits

0xebdd,	// (0x00083ef0) fps_text_pane_t1

0xc09d,	// (0x000813b0) cam4_image_uncrop_pane_g1

0xc0a6,	// (0x000813b9) cam4_image_uncrop_pane_g2

0xc0af,	// (0x000813c2) cam4_image_uncrop_pane_g3

0xc0b8,	// (0x000813cb) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00084c01) cam4_image_uncrop_pane_g

0xe9e5,	// (0x00083cf8) dia3_listrow_pane_ParamLimits

0xedd8,	// (0x000840eb) main_phob2_pane

0xe030,	// (0x00083343) cell_tport_appsw_pane_cp02_ParamLimits

0xe030,	// (0x00083343) cell_tport_appsw_pane_cp02

0xe03f,	// (0x00083352) cell_tport_appsw_pane_cp03_ParamLimits

0xe03f,	// (0x00083352) cell_tport_appsw_pane_cp03

0xedd8,	// (0x000840eb) phob2_contact_card_pane

0xedd8,	// (0x000840eb) phob2_listscroll_pane

0x03db,	// (0x000756ee) phob2_list_pane

0x03e3,	// (0x000756f6) scroll_pane_cp034

0xebf6,	// (0x00083f09) phob2_cc_data_pane_ParamLimits

0xebf6,	// (0x00083f09) phob2_cc_data_pane

0xec10,	// (0x00083f23) phob2_cc_listscroll_pane_ParamLimits

0xec10,	// (0x00083f23) phob2_cc_listscroll_pane

0xec2a,	// (0x00083f3d) list_double_large_graphic_phob2_pane_ParamLimits

0xec2a,	// (0x00083f3d) list_double_large_graphic_phob2_pane

0xec48,	// (0x00083f5b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xec48,	// (0x00083f5b) list_double_large_graphic_phob2_pane_g1

0x6d4b,	// (0x0007c05e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6d4b,	// (0x0007c05e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008523c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008523c) list_double_large_graphic_phob2_pane_g

0x6d57,	// (0x0007c06a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6d57,	// (0x0007c06a) list_double_large_graphic_phob2_pane_t1

0x6d6c,	// (0x0007c07f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6d6c,	// (0x0007c07f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00085241) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00085241) list_double_large_graphic_phob2_pane_t

0xedd8,	// (0x000840eb) list_highlight_pane_cp024

0xec5e,	// (0x00083f71) phob2_cc_button_pane

0xec66,	// (0x00083f79) phob2_cc_data_pane_g1_ParamLimits

0xec66,	// (0x00083f79) phob2_cc_data_pane_g1

0xec72,	// (0x00083f85) phob2_cc_data_pane_g2_ParamLimits

0xec72,	// (0x00083f85) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00085246) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00085246) phob2_cc_data_pane_g

0xec7e,	// (0x00083f91) phob2_cc_data_pane_t1_ParamLimits

0xec7e,	// (0x00083f91) phob2_cc_data_pane_t1

0xec90,	// (0x00083fa3) phob2_cc_data_pane_t2_ParamLimits

0xec90,	// (0x00083fa3) phob2_cc_data_pane_t2

0xeca2,	// (0x00083fb5) phob2_cc_data_pane_t3_ParamLimits

0xeca2,	// (0x00083fb5) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008524b) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008524b) phob2_cc_data_pane_t

0x03eb,	// (0x000756fe) phob2_cc_list_pane_ParamLimits

0x03eb,	// (0x000756fe) phob2_cc_list_pane

0x3be0,	// (0x00078ef3) scroll_pane_cp035_ParamLimits

0x3be0,	// (0x00078ef3) scroll_pane_cp035

0x0ea4,	// (0x000761b7) bg_button_pane_cp033

0x03f7,	// (0x0007570a) phob2_cc_button_pane_g1

0x0403,	// (0x00075716) phob2_cc_button_pane_t1

0x0418,	// (0x0007572b) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00085252) phob2_cc_button_pane_t

0xecb4,	// (0x00083fc7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xecb4,	// (0x00083fc7) list_double_large_graphic_phob2_cc_pane

0xecdb,	// (0x00083fee) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xecdb,	// (0x00083fee) list_double_large_graphic_phob2_cc_pane_g1

0xecec,	// (0x00083fff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xecec,	// (0x00083fff) list_double_large_graphic_phob2_cc_pane_g2

0x6d7e,	// (0x0007c091) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6d7e,	// (0x0007c091) list_double_large_graphic_phob2_cc_pane_g3

0x6d8a,	// (0x0007c09d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6d8a,	// (0x0007c09d) list_double_large_graphic_phob2_cc_pane_g4

0x6d96,	// (0x0007c0a9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6d96,	// (0x0007c0a9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00085257) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00085257) list_double_large_graphic_phob2_cc_pane_g

0x6da2,	// (0x0007c0b5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6da2,	// (0x0007c0b5) list_double_large_graphic_phob2_cc_pane_t1

0x6dcb,	// (0x0007c0de) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6dcb,	// (0x0007c0de) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00085262) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00085262) list_double_large_graphic_phob2_cc_pane_t

0x042a,	// (0x0007573d) list_highlight_pane_cp025_ParamLimits

0x042a,	// (0x0007573d) list_highlight_pane_cp025

0x0ea4,	// (0x000761b7) bg_button_pane_cp033_ParamLimits

0x03f7,	// (0x0007570a) phob2_cc_button_pane_g1_ParamLimits

0x0403,	// (0x00075716) phob2_cc_button_pane_t1_ParamLimits

0x0418,	// (0x0007572b) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00085252) phob2_cc_button_pane_t_ParamLimits

0x70cb,	// (0x0007c3de) popup_wgtman_window

0x3a25,	// (0x00078d38) scroll_pane_cp038

0xe7c6,	// (0x00083ad9) wgtman_btn_pane_cp_01_ParamLimits

0xe7c6,	// (0x00083ad9) wgtman_btn_pane_cp_01

0x0438,	// (0x0007574b) wgtman_content_pane

0x0441,	// (0x00075754) wgtman_heading_pane

0xedd8,	// (0x000840eb) bg_heading_pane_cp02

0x044a,	// (0x0007575d) wgtman_heading_pane_g1

0x0452,	// (0x00075765) wgtman_heading_pane_t1

0x0460,	// (0x00075773) scroll_pane_cp036

0x0468,	// (0x0007577b) wgtman_list_pane

0x0470,	// (0x00075783) wgtman_list_pane_t1_ParamLimits

0x0470,	// (0x00075783) wgtman_list_pane_t1

0xbffc,	// (0x0008130f) cam4_grid_pane

0x6021,	// (0x0007b334) bg_button_pane_cp015_ParamLimits

0xccd5,	// (0x00081fe8) bg_button_pane_cp016_ParamLimits

0xcce8,	// (0x00081ffb) bg_button_pane_cp017_ParamLimits

0x6065,	// (0x0007b378) popup_vitu2_query_window_g3_ParamLimits

0x6065,	// (0x0007b378) popup_vitu2_query_window_g3

0x60de,	// (0x0007b3f1) popup_vitu2_query_window_t6_ParamLimits

0x60de,	// (0x0007b3f1) popup_vitu2_query_window_t6

0x6109,	// (0x0007b41c) popup_vitu2_query_window_t7_ParamLimits

0x6109,	// (0x0007b41c) popup_vitu2_query_window_t7

0x40af,	// (0x000793c2) cam4_grid_pane_g1

0x40b8,	// (0x000793cb) cam4_grid_pane_g2

0x048a,	// (0x0007579d) cam4_grid_pane_g3

0x0493,	// (0x000757a6) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00085267) cam4_grid_pane_g

0x7f39,	// (0x0007d24c) aid_placing_vt_slider_lsc_ParamLimits

0x8285,	// (0x0007d598) vidtel_button_pane_ParamLimits

0x8285,	// (0x0007d598) vidtel_button_pane

0x049e,	// (0x000757b1) bg_button_pane_cp034

0xecf8,	// (0x0008400b) vidtel_button_pane_g1

0x04a8,	// (0x000757bb) vidtel_button_pane_t1

0x3b27,	// (0x00078e3a) aid_size_vtel_slider_touch

0x3be0,	// (0x00078ef3) scroll_pane_cp039

0x4407,	// (0x0007971a) ncim_query_button_pane_cp01_ParamLimits

0x4426,	// (0x00079739) ncimui_query_pane_g1_ParamLimits

0x0ea4,	// (0x000761b7) input_focus_pane_cp012_ParamLimits

0x444b,	// (0x0007975e) ncim_query_entry_pane_t1_ParamLimits

0x3be0,	// (0x00078ef3) scroll_pane_cp039_ParamLimits

0x151f,	// (0x00076832) navi_pane_bcale_mc_g1

0x1527,	// (0x0007683a) navi_pane_bcale_mc_t1

0x499a,	// (0x00079cad) main_sp_fs_email_pane_g1

0x49a6,	// (0x00079cb9) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00084ff8) main_sp_fs_email_pane_g

0x4bf2,	// (0x00079f05) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4bf2,	// (0x00079f05) list_single_cale_mrui_row_pane_g3

0x6c53,	// (0x0007bf66) list_single_recal_day_pane_g5_event_pane

0x6c69,	// (0x0007bf7c) list_single_recal_day_pane_g7

0x04b6,	// (0x000757c9) list_recal_day_event_pane_cp01

0x04bf,	// (0x000757d2) list_recal_vselct_arw_lo_pane_cp01

0x04c7,	// (0x000757da) list_recal_vselct_arw_up_pane_cp01

0x04cf,	// (0x000757e2) list_recal_vselct_pane_cp01

0x3b49,	// (0x00078e5c) list_recal_day_event_pane_cp01_g1

0x6df4,	// (0x0007c107) list_recal_day_event_pane_cp01_t1

0x6c71,	// (0x0007bf84) list_single_recal_day_pane_t1_ParamLimits

0x6c83,	// (0x0007bf96) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00085155) list_single_recal_day_pane_t_ParamLimits

0x092a,	// (0x00075c3d) bg_notes_pane_ParamLimits

0x09cd,	// (0x00075ce0) list_notes_pane_ParamLimits

0x7429,	// (0x0007c73c) scroll_pane_cp06_ParamLimits

0x09ef,	// (0x00075d02) main_notes_pane_ParamLimits

0xedd8,	// (0x000840eb) main_welc_pane

0xed00,	// (0x00084013) main_welc_body_pane_ParamLimits

0xed00,	// (0x00084013) main_welc_body_pane

0xed1a,	// (0x0008402d) main_welc_opti_pane_ParamLimits

0xed1a,	// (0x0008402d) main_welc_opti_pane

0xed4d,	// (0x00084060) main_welc_pane_t1_ParamLimits

0xed4d,	// (0x00084060) main_welc_pane_t1

0xed67,	// (0x0008407a) main_welc_body_row_pane_ParamLimits

0xed67,	// (0x0008407a) main_welc_body_row_pane

0x4a87,	// (0x00079d9a) main_welc_opti_row_pane_ParamLimits

0x4a87,	// (0x00079d9a) main_welc_opti_row_pane

0x04d9,	// (0x000757ec) main_welc_opti_row_pane_g1

0x04e1,	// (0x000757f4) main_welc_opti_row_pane_t1

0x04f1,	// (0x00075804) main_welc_body_row_pane_t1

0x01cf,	// (0x000754e2) popup_notif_wgt_heading_pane

0x01e9,	// (0x000754fc) aid_size_list_notif_wgt_del_ParamLimits

0x01f6,	// (0x00075509) list_notif_wgt_row_pane_g1_ParamLimits

0x0202,	// (0x00075515) list_notif_wgt_row_pane_g2_ParamLimits

0x020e,	// (0x00075521) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000851bc) list_notif_wgt_row_pane_g_ParamLimits

0x021b,	// (0x0007552e) list_notif_wgt_row_pane_t1_ParamLimits

0x0230,	// (0x00075543) list_notif_wgt_row_pane_t2_ParamLimits

0x0242,	// (0x00075555) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000851c3) list_notif_wgt_row_pane_t_ParamLimits

0xe858,	// (0x00083b6b) listrow_wgtman_pane_g1_ParamLimits

0xe865,	// (0x00083b78) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000851ec) listrow_wgtman_pane_g_ParamLimits

0x6cfb,	// (0x0007c00e) listrow_wgtman_pane_t1_ParamLimits

0x6d13,	// (0x0007c026) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000851f1) listrow_wgtman_pane_t_ParamLimits

0x6d39,	// (0x0007c04c) wait_bar_pane_cp09_ParamLimits

0xedd8,	// (0x000840eb) bg_popup_heading_pane_cp02

0x0500,	// (0x00075813) popup_notif_wgt_heading_pane_g1

0x0508,	// (0x0007581b) popup_notif_wgt_heading_pane_t1

0xedd8,	// (0x000840eb) main_vids_pane

0xedd8,	// (0x000840eb) vids_listscroll_pane

0xed8c,	// (0x0008409f) scroll_pane_cp040

0xedd8,	// (0x000840eb) vids_list_pane

0xed97,	// (0x000840aa) vids_list_double_pane_ParamLimits

0xed97,	// (0x000840aa) vids_list_double_pane

0xedb1,	// (0x000840c4) vids_list_double_pane_g1

0xedba,	// (0x000840cd) vids_list_double_pane_t1

0xedca,	// (0x000840dd) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00085275) vids_list_double_pane_t

0x0ea4,	// (0x000761b7) main_ncimui_pane_ParamLimits

0xd841,	// (0x00082b54) main_ncimui_pane_g1_ParamLimits

0xd84d,	// (0x00082b60) main_ncimui_pane_g2_ParamLimits

0xd84d,	// (0x00082b60) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00084efd) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00084efd) main_ncimui_pane_g

0xed33,	// (0x00084046) main_welc_pane_g1_ParamLimits

0xed33,	// (0x00084046) main_welc_pane_g1

0xed3f,	// (0x00084052) main_welc_pane_g2_ParamLimits

0xed3f,	// (0x00084052) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00085270) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00085270) main_welc_pane_g

0x092a,	// (0x00075c3d) listscroll_mce_pane_ParamLimits

0x1674,	// (0x00076987) wait_bar_pane_cp10

0x2a79,	// (0x00077d8c) main_cale_day_pane_ParamLimits

0x2a79,	// (0x00077d8c) main_cale_week_pane_ParamLimits

0x092a,	// (0x00075c3d) main_messa_pane_ParamLimits

0xb45c,	// (0x0008076f) main_clock2_btn_pane_ParamLimits

0xb45c,	// (0x0008076f) main_clock2_btn_pane

0x32a1,	// (0x000785b4) main_clock2_btn_pane_cp01_ParamLimits

0x32a1,	// (0x000785b4) main_clock2_btn_pane_cp01

0x4bc3,	// (0x00079ed6) list_cale_mrui_pane_ParamLimits

0x0278,	// (0x0007558b) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000851ca) main_cf0_pane_g

0xea02,	// (0x00083d15) area_left_week_number_pane_ParamLimits

0xea15,	// (0x00083d28) area_top_day_name_pane_ParamLimits

0xea23,	// (0x00083d36) frame_month_view_pane_ParamLimits

0x03a0,	// (0x000756b3) grid_month_view_pane_ParamLimits

0x03ae,	// (0x000756c1) frm_month_g1_ParamLimits

0xeaa1,	// (0x00083db4) frm_month_g2_ParamLimits

0xeab2,	// (0x00083dc5) frm_month_g3_ParamLimits

0xeac3,	// (0x00083dd6) frm_month_g4_ParamLimits

0xead4,	// (0x00083de7) frm_month_g5_ParamLimits

0xeae7,	// (0x00083dfa) frm_month_g6_ParamLimits

0xeafa,	// (0x00083e0d) frm_month_g7_ParamLimits

0x03bb,	// (0x000756ce) frm_month_g8_ParamLimits

0xeb0d,	// (0x00083e20) frm_month_g9_ParamLimits

0xeb1a,	// (0x00083e2d) frm_month_g10_ParamLimits

0xeb27,	// (0x00083e3a) frm_month_g11_ParamLimits

0xeb34,	// (0x00083e47) frm_month_g12_ParamLimits

0xeb41,	// (0x00083e54) frm_month_g13_ParamLimits

0xeb4e,	// (0x00083e61) frm_month_g14_ParamLimits

0xeb5d,	// (0x00083e70) frm_month_g15_ParamLimits

0xeb6c,	// (0x00083e7f) frm_month_g16_ParamLimits

0xff08,	// (0x0008521b) frm_month_g_ParamLimits

0x03c8,	// (0x000756db) cell_top_day_name_pane_t1_ParamLimits

0xeb7b,	// (0x00083e8e) cell_area_left_week_number_pane_g1_ParamLimits

0xeb8a,	// (0x00083e9d) cell_area_left_week_number_pane_t1_ParamLimits

0x30f9,	// (0x0007840c) cell_month_view_pane_g1_ParamLimits

0xeba0,	// (0x00083eb3) cell_month_view_pane_t1_ParamLimits

0x0922,	// (0x00075c35) main_clock2_btn_pane_g1

0x0516,	// (0x00075829) main_clock2_btn_pane_t1

0x0ea4,	// (0x000761b7) listscroll_cmail_pane_ParamLimits

0x499a,	// (0x00079cad) main_sp_fs_email_pane_g1_ParamLimits

0x49a6,	// (0x00079cb9) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00084ff8) main_sp_fs_email_pane_g_ParamLimits

0x4cd2,	// (0x00079fe5) list_recal_day_pane_ParamLimits

0x4ce3,	// (0x00079ff6) mian_recal_day_pane_t1

0x6644,	// (0x0007b957) list_single_dyc_row_text_pane_t4_ParamLimits

0x6644,	// (0x0007b957) list_single_dyc_row_text_pane_t4

0x667b,	// (0x0007b98e) list_single_dyc_row_text_pane_t5_ParamLimits

0x667b,	// (0x0007b98e) list_single_dyc_row_text_pane_t5

0x66f1,	// (0x0007ba04) list_single_dyc_row_text_pane_t6_ParamLimits

0x66f1,	// (0x0007ba04) list_single_dyc_row_text_pane_t6

0x90e7,	// (0x0007e3fa) aid_mgn_list_cale_time_pane

0x0ea4,	// (0x000761b7) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
